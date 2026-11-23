/* sh4interp.c: the console's own code, run by an SH-4 interpreter, for the functions the port has no C for.

   A function no C covers used to be a stub that returned 0. Most of them are the NAOMI library's hand-written
   assembly (its model renderer above all: nl_objasm_*, 0x0C188262 and the routines it reaches by bsr, which keep their
   state in registers across those calls and in the FPU's back bank), which C cannot say. native_build.py now makes each
   such stub a thunk into port_interp_entry: the native caller's arguments (rdi-r9 for r4-r7 and the first two stack
   words, the rest of the stack words from the native stack, xmm0-xmm7 for fr4-fr11) become the SH-4's registers, the
   function's original bytes run here, and r0 / fr0 come back as the result.

   Memory is the console's own: RAM at its address (and its mirrors), the store queues (a pref on them flushes, hw.c),
   the register windows through hw.c's port_mmio_*. XMTRX is shim.c's port_xmtrx (the back bank, XF0-XF15), so the
   matrix the game's C loaded is the one FTRV here applies. A call (bsr, jsr, bsrf, and a jump or branch to a function's
   start) to a function with C runs that C natively with r4-r7, the stack words and fr4-fr11; to one without, it is
   interpreted in place. The approximate FPU instructions (FTRV, FIPR, FSCA) give the console's bits through sa_numeric.

   PORT_NO_INTERP=1 turns it off (the stubs return 0 as before); PORT_DEBUG_INTERP=1 names each function entered. */
#include "port.h"

#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#include "play_math.h"

extern float port_xmtrx[16];
extern int port_fast_fpu;
uint8_t port_mmio_r8(uint32_t a);
uint16_t port_mmio_r16(uint32_t a);
uint32_t port_mmio_r32(uint32_t a);
void port_mmio_w8(uint32_t a, uint8_t v);
void port_mmio_w16(uint32_t a, uint16_t v);
void port_mmio_w32(uint32_t a, uint32_t v);
void hw_bus_write(uint32_t a, const void *src, uint32_t n);
void port_prefetch(uint32_t p);
int port_get_gbr(void);
int port_set_gbr(int v);

/* the thunks' frame (port_interp_entry, below): the native caller's registers in, the result out */
struct iframe {
    uint32_t ints[6];    /* rdi rsi rdx rcx r8 r9: r4-r7, then the first two stack words */
    float floats[8];     /* xmm0-xmm7: fr4-fr11 */
    uint32_t stack;      /* the native caller's further stack arguments (8-byte slots) */
};
/* a native call's frame (port_interp_native) */
struct nframe {
    uint32_t ints[6];
    float floats[8];
    uint32_t stack[6];
    uint32_t out_i;
    float out_f;
};
void port_interp_native(void *fn, struct nframe *f);

__asm__(".text\n"
        ".globl port_interp_entry\n"
        "port_interp_entry:\n"            /* r10d: the console address, r11d: the name */
        "  push %rbp\n"
        "  mov %rsp, %rbp\n"
        "  sub $80, %rsp\n"
        "  mov %edi, 0(%rsp)\n  mov %esi, 4(%rsp)\n  mov %edx, 8(%rsp)\n  mov %ecx, 12(%rsp)\n"
        "  mov %r8d, 16(%rsp)\n  mov %r9d, 20(%rsp)\n"
        "  movss %xmm0, 24(%rsp)\n  movss %xmm1, 28(%rsp)\n  movss %xmm2, 32(%rsp)\n  movss %xmm3, 36(%rsp)\n"
        "  movss %xmm4, 40(%rsp)\n  movss %xmm5, 44(%rsp)\n  movss %xmm6, 48(%rsp)\n  movss %xmm7, 52(%rsp)\n"
        "  lea 16(%rbp), %rax\n  mov %eax, 56(%rsp)\n"
        "  mov %r10d, %edi\n  mov %r11d, %esi\n  mov %esp, %edx\n"
        "  call port_interp_run\n"
        "  movss 24(%rsp), %xmm0\n"
        "  movslq 0(%rsp), %rax\n"
        "  leave\n  ret\n"
        ".globl port_interp_native\n"
        "port_interp_native:\n"           /* edi: the function, esi: the nframe */
        "  push %rbp\n  mov %rsp, %rbp\n  push %rbx\n  push %r12\n"
        "  mov %edi, %r11d\n  mov %esi, %ebx\n"
        "  mov 76(%rbx), %eax\n  push %rax\n  mov 72(%rbx), %eax\n  push %rax\n  mov 68(%rbx), %eax\n  push %rax\n"
        "  mov 64(%rbx), %eax\n  push %rax\n  mov 60(%rbx), %eax\n  push %rax\n  mov 56(%rbx), %eax\n  push %rax\n"
        "  movss 24(%rbx), %xmm0\n  movss 28(%rbx), %xmm1\n  movss 32(%rbx), %xmm2\n  movss 36(%rbx), %xmm3\n"
        "  movss 40(%rbx), %xmm4\n  movss 44(%rbx), %xmm5\n  movss 48(%rbx), %xmm6\n  movss 52(%rbx), %xmm7\n"
        "  mov 0(%rbx), %edi\n  mov 4(%rbx), %esi\n  mov 8(%rbx), %edx\n  mov 12(%rbx), %ecx\n"
        "  mov 16(%rbx), %r8d\n  mov 20(%rbx), %r9d\n"
        "  mov $8, %eax\n"
        "  call *%r11\n"
        "  add $48, %rsp\n"
        "  mov %eax, 80(%rbx)\n  movss %xmm0, 84(%rbx)\n"
        "  pop %r12\n  pop %rbx\n  pop %rbp\n  ret\n");

/* the stubs native_build.py writes for functions without C sit in this section: a call to one is interpreted */
extern const char __start_port_stubs[], __stop_port_stubs[];
static int is_stub(const void *fn)
{
    return (const char *)fn >= __start_port_stubs && (const char *)fn < __stop_port_stubs;
}

/* --- memory ------------------------------------------------------------------------------------------------------------ */

enum { DIRECT, MMIO, BUS, BAD };

/* The store queues: two 32-byte buffers that the whole of 0xE0000000-0xE3FFFFFF reaches (address bit 5 picks the
   queue, bits 4-2 the word; the bits above only say where a flush sends it). What a queue holds stays until it is
   written again, and the library's vertex kernels count on that: a field that does not change from one vertex to
   the next (an intensity, say) is written once. */
static uint8_t sq[64] __attribute__((aligned(32)));

static int place(uint32_t a, uint32_t *host)
{
    if (a >= 0xE0000000u) {
        if (a < 0xE4000000u) { *host = (uint32_t)(uintptr_t)&sq[a & 0x3F]; return DIRECT; }
        if (a >= 0xFF000000u) { *host = a; return MMIO; }
        return BAD;
    }
    /* the host's own memory: the game's stack (runner.c's GAME_STACK, where the native C keeps its locals and passes their
       addresses), and the executable's data and heap (the interpreter's stack among them) */
    if ((a >= 0x20000000u && a < 0x20800000u) || (a >= 0x40000000u && a < 0x80000000u)) { *host = a; return DIRECT; }
    uint32_t p = a & 0x1FFFFFFFu;
    if (p >= 0x0C000000u && p < 0x10000000u) { *host = 0x8C000000u | (p & 0x00FFFFFFu); return DIRECT; }
    if ((p >= 0x005F0000u && p < 0x00610000u) || (p >= 0x00700000u && p < 0x00720000u)) { *host = 0xA0000000u | p; return MMIO; }
    if (p >= 0x00800000u && p < 0x00A00000u) { *host = 0xA0000000u | p; return DIRECT; }
    if (p >= 0x04000000u && p < 0x05000000u) { *host = 0xA4000000u | (p & 0x007FFFFFu); return DIRECT; }
    if (p >= 0x05000000u && p < 0x06000000u) { *host = 0xA5000000u | (p & 0x007FFFFFu); return DIRECT; }
    if (p >= 0x10000000u && p < 0x14000000u) { *host = a; return BUS; }
    if (p >= 0x1F000000u) { *host = 0xE0000000u | p; return a >= 0xFF000000u || p >= 0x1F000000u ? MMIO : BAD; }
    return BAD;
}

uint32_t port_interp_pc;        /* the instruction running, for the reports */
uint32_t port_interp_func;      /* the function the innermost run started at, for the reports */
#define cur_pc port_interp_pc

static void bad_access(uint32_t a, const char *what)
{
    static int n;
    if (n++ < 16)
        fprintf(stderr, "powerstone2: interpreter: %s at %08X (by the instruction at %08X) ignored\n", what, a, cur_pc);
}

static uint32_t rd(uint32_t a, int size)
{
    uint32_t h;
    switch (place(a, &h)) {
    case DIRECT:
        return size == 1 ? *(volatile uint8_t *)(uintptr_t)h : size == 2 ? *(volatile uint16_t *)(uintptr_t)h
                                                                         : *(volatile uint32_t *)(uintptr_t)h;
    case MMIO:
        return size == 1 ? port_mmio_r8(h) : size == 2 ? port_mmio_r16(h) : port_mmio_r32(h);
    default:
        bad_access(a, "read");
        return 0;
    }
}

static void wr(uint32_t a, int size, uint32_t v)
{
    uint32_t h;
    switch (place(a, &h)) {
    case DIRECT:
        {   /* PORT_WTRACE=<hex address>: every write to that RAM word (any mirror) and the instruction */
            static long wt = -2;
            if (wt == -2)
                wt = getenv("PORT_WTRACE") ? (long)strtoul(getenv("PORT_WTRACE"), 0, 16) : -1;
            if (wt >= 0 && ((a ^ (uint32_t)wt) & 0x1FFFFFFCu) == 0)
                fprintf(stderr, "wtrace: %08X <- %08X (%d) by %08X\n", a, v, size, cur_pc);
        }
        if (size == 1) *(volatile uint8_t *)(uintptr_t)h = (uint8_t)v;
        else if (size == 2) *(volatile uint16_t *)(uintptr_t)h = (uint16_t)v;
        else *(volatile uint32_t *)(uintptr_t)h = v;
        return;
    case MMIO:
        if (size == 1) port_mmio_w8(h, (uint8_t)v);
        else if (size == 2) port_mmio_w16(h, (uint16_t)v);
        else port_mmio_w32(h, v);
        return;
    case BUS:
        hw_bus_write(a, &v, (uint32_t)size);
        return;
    default:
        bad_access(a, "write");
    }
}

/* --- the CPU ------------------------------------------------------------------------------------------------------------- */

#define RETURN_MAGIC 0xFFFFFFF0u

struct cpu {
    uint32_t r[16], pr, gbr, mach, macl, fpul;
    uint32_t fr[16];          /* the front bank's bits */
    int t, s, q, m, sz;
};

static float F(const struct cpu *c, int n) { float f; memcpy(&f, &c->fr[n], 4); return f; }
static void SF(struct cpu *c, int n, float f) { memcpy(&c->fr[n], &f, 4); }
static uint32_t *xf(void) { return (uint32_t *)port_xmtrx; }

static void frchg(struct cpu *c)
{
    uint32_t t[16];
    memcpy(t, c->fr, sizeof t);
    memcpy(c->fr, xf(), sizeof t);
    memcpy(xf(), t, sizeof t);
}

static uint32_t *pair(struct cpu *c, int k) { return (k & 1) ? &xf()[k & 14] : &c->fr[k & 14]; }

/* the interpreter's own stack, in low memory (the game's addresses are 32-bit); nested runs take it from where the outer
   one is */
static uint32_t istack[64 * 1024];
static uint32_t isp = 0;
static int depth;
static uint32_t run_chain[64];          /* the console function each nested run started at, for the crash report */
static struct cpu *run_cpu[64];         /* and its registers */
static int debug = -1;

static void stop(const char *why, uint32_t pc, uint16_t op)
{
    fprintf(stderr, "powerstone2: interpreter: %s at %08X (%04X); the function returns 0\n", why, pc, op);
}

/* What survives between interpreter runs: the registers the SH-4 calling convention preserves (r8-r14, fr12-fr15)
   and the MAC registers. On the console, compiled C between two library calls leaves them alone, and the library's
   hand-written assembly keeps state there from one call to the next (the nl_objasm renderer's lighting, for one).
   Each run starts from them and leaves them here; a call out to native C hands them on to runs nested inside it. */
static struct { uint32_t r[7], fr[4], mach, macl; int sz; } kept;

static void keep_load(struct cpu *c)
{
    memcpy(&c->r[8], kept.r, sizeof kept.r);
    memcpy(&c->fr[12], kept.fr, sizeof kept.fr);
    c->mach = kept.mach;
    c->macl = kept.macl;
    c->sz = kept.sz;
}

static void keep_store(const struct cpu *c)
{
    memcpy(kept.r, &c->r[8], sizeof kept.r);
    memcpy(kept.fr, &c->fr[12], sizeof kept.fr);
    kept.mach = c->mach;
    kept.macl = c->macl;
    kept.sz = c->sz;
}

/* a call to target: native C if the function has it, else interpreted in place (returns 0, the caller sets pc and pr) */
static int call_native(struct cpu *c, uint32_t target)
{
    /* the library's hand-written model renderer (nl_objasm_*, its strip kernels, the bump and vertex-colour
       variants) passes state from routine to routine in registers past r4-r7/fr4-fr11 and in the T flag; their C
       sees none of it, so calls inside these blocks stay interpreted */
    uint32_t a = 0x0C000000u | (target & 0x00FFFFFFu);
    if ((a >= 0x0C188250u && a < 0x0C18D000u) || (a >= 0x0C196600u && a < 0x0C197C40u))
        return 0;
    /* the menu-text routines that take their arguments on the stack only (STACK_ARGS_ONLY below): their host wrappers
       read the C's first arguments as those stack words, which is what native C passes; console code calling them has
       already put the words on this stack, so they run in place */
    if (a == 0x0C117944u || a == 0x0C117A6Eu)
        return 0;
    const struct port_entry *e = port_lookup(0x0C000000u | (target & 0x00FFFFFFu));
    if (!e || is_stub(e->fn) || !((target >> 24 & 0x1F) == 0x0C))
        return 0;
    struct nframe f;
    for (int i = 0; i < 4; i++)
        f.ints[i] = c->r[4 + i];
    for (int i = 0; i < 2; i++)
        f.ints[4 + i] = rd(c->r[15] + 4u * (uint32_t)i, 4);
    for (int i = 0; i < 6; i++)
        f.stack[i] = rd(c->r[15] + 8u + 4u * (uint32_t)i, 4);
    for (int i = 0; i < 8; i++)
        f.floats[i] = F(c, 4 + i);
    uint32_t saved_isp = isp;
    isp = c->r[15] - 64;          /* a stub the native code calls nests below what this run uses */
    keep_store(c);
    port_interp_native(e->fn, &f);
    keep_load(c);
    isp = saved_isp;
    c->r[0] = f.out_i;
    SF(c, 0, f.out_f);
    return 1;
}

static uint32_t sext8(uint32_t v) { return (uint32_t)(int32_t)(int8_t)v; }
static uint32_t sext16(uint32_t v) { return (uint32_t)(int32_t)(int16_t)v; }

static void div1(struct cpu *c, int n, int m)
{
    int oldq = c->q;
    uint32_t *r = c->r;
    c->q = r[n] >> 31;
    uint32_t tmp2 = r[m];
    r[n] = (r[n] << 1) | (uint32_t)c->t;
    uint32_t tmp0 = r[n];
    int tmp1;
    if (oldq == 0) {
        if (c->m == 0) { r[n] -= tmp2; tmp1 = r[n] > tmp0; c->q = c->q == 0 ? tmp1 : !tmp1; }
        else { r[n] += tmp2; tmp1 = r[n] < tmp0; c->q = c->q == 0 ? !tmp1 : tmp1; }
    } else {
        if (c->m == 0) { r[n] += tmp2; tmp1 = r[n] < tmp0; c->q = c->q == 0 ? tmp1 : !tmp1; }
        else { r[n] -= tmp2; tmp1 = r[n] > tmp0; c->q = c->q == 0 ? !tmp1 : tmp1; }
    }
    c->t = c->q == c->m;
}

static uint32_t get_fpscr(const struct cpu *c) { return 0x00040001u | ((uint32_t)c->sz << 20); }
static void set_fpscr(struct cpu *c, uint32_t v, uint32_t pc)
{
    c->sz = (v >> 20) & 1;
    if (v & (1u << 21))
        frchg(c), stop("FPSCR.FR set (banks swapped once)", pc, 0);
    if (v & (1u << 19))
        stop("double precision is not modelled", pc, 0);
}

static void fmov(struct cpu *c, int n, int m, int lo)
{
    uint32_t *r = c->r;
    if (!c->sz) {
        switch (lo) {
        case 0xC: c->fr[n] = c->fr[m]; return;
        case 0x8: c->fr[n] = rd(r[m], 4); return;
        case 0x6: c->fr[n] = rd(r[m] + r[0], 4); return;
        case 0x9: c->fr[n] = rd(r[m], 4); r[m] += 4; return;
        case 0xA: wr(r[n], 4, c->fr[m]); return;
        case 0x7: wr(r[n] + r[0], 4, c->fr[m]); return;
        case 0xB: r[n] -= 4; wr(r[n], 4, c->fr[m]); return;
        }
        return;
    }
    uint32_t *d, *s;
    switch (lo) {
    case 0xC: d = pair(c, n); s = pair(c, m); d[0] = s[0]; d[1] = s[1]; return;
    case 0x8: d = pair(c, n); d[0] = rd(r[m], 4); d[1] = rd(r[m] + 4, 4); return;
    case 0x6: d = pair(c, n); d[0] = rd(r[m] + r[0], 4); d[1] = rd(r[m] + r[0] + 4, 4); return;
    case 0x9: d = pair(c, n); d[0] = rd(r[m], 4); d[1] = rd(r[m] + 4, 4); r[m] += 8; return;
    case 0xA: s = pair(c, m); wr(r[n], 4, s[0]); wr(r[n] + 4, 4, s[1]); return;
    case 0x7: s = pair(c, m); wr(r[n] + r[0], 4, s[0]); wr(r[n] + r[0] + 4, 4, s[1]); return;
    case 0xB: s = pair(c, m); r[n] -= 8; wr(r[n], 4, s[0]); wr(r[n] + 4, 4, s[1]); return;
    }
}

/* one instruction at pc; the branches set *next. Returns 0, or 1 for an instruction it cannot run */
static int step(struct cpu *c, uint32_t pc, uint32_t *next, int in_slot);

static int branch_to(struct cpu *c, uint32_t pc, uint32_t target, uint32_t *next, int call)
{
    /* the delay slot first */
    uint32_t dummy;
    if (step(c, pc + 2, &dummy, 1))
        return 1;
    if (call) {
        if (call_native(c, target)) { *next = pc + 4; return 0; }
        c->pr = pc + 4;
        *next = target;
        return 0;
    }
    *next = target;
    return 0;
}

static int step(struct cpu *c, uint32_t pc, uint32_t *next, int in_slot)
{
    uint16_t op = (uint16_t)rd(pc, 2);
    uint32_t *r = c->r;
    cur_pc = pc;
    int n = (op >> 8) & 15, m = (op >> 4) & 15;
    uint32_t imm8 = op & 0xFF;
    *next = pc + 2;
    switch (op >> 12) {
    case 0x0:
        switch (op & 0xF) {
        case 0x2:
            if (m == 0) { r[n] = 0x40000000u | ((uint32_t)c->m << 9) | ((uint32_t)c->q << 8) | ((uint32_t)c->s << 1) | (uint32_t)c->t; return 0; }
            if (m == 1) { r[n] = c->gbr; return 0; }
            if (m == 2) { r[n] = 0x8C000000u; return 0; }
            break;
        case 0x3:
            if (in_slot && (m == 0 || m == 2)) break;                          /* no branch in a delay slot */
            if (m == 0) return branch_to(c, pc, pc + 4 + r[n], next, 1);       /* bsrf */
            if (m == 2) {                                                       /* braf */
                uint32_t t = pc + 4 + r[n];
                return branch_to(c, pc, t, next, 0);
            }
            if (m == 8) {                                                       /* pref */
                if (r[n] >> 26 == 0xE0000000u >> 26)    /* a queue's flush: hw.c sends what is at the address */
                    memcpy((void *)(uintptr_t)(r[n] & ~31u), &sq[r[n] & 0x20], 32);
                port_prefetch(r[n]);
                return 0;
            }
            if (m == 9 || m == 10 || m == 11) return 0;                         /* ocbi, ocbp, ocbwb */
            if (m == 12) { wr(r[n], 4, r[0]); return 0; }                       /* movca.l */
            break;
        case 0x4: wr(r[n] + r[0], 1, r[m]); return 0;
        case 0x5: wr(r[n] + r[0], 2, r[m]); return 0;
        case 0x6: wr(r[n] + r[0], 4, r[m]); return 0;
        case 0x7: c->macl = r[n] * r[m]; return 0;
        case 0x8:
            if (op == 0x0008) { c->t = 0; return 0; }
            if (op == 0x0018) { c->t = 1; return 0; }
            if (op == 0x0028) { c->mach = c->macl = 0; return 0; }
            if (op == 0x0048) { c->s = 0; return 0; }
            if (op == 0x0058) { c->s = 1; return 0; }
            break;
        case 0x9:
            if (op == 0x0009) return 0;
            if (op == 0x0019) { c->m = c->q = c->t = 0; return 0; }
            if (m == 2) { r[n] = (uint32_t)c->t; return 0; }
            break;
        case 0xA:
            if (m == 0) { r[n] = c->mach; return 0; }
            if (m == 1) { r[n] = c->macl; return 0; }
            if (m == 2) { r[n] = c->pr; return 0; }
            if (m == 5) { r[n] = c->fpul; return 0; }
            if (m == 6) { r[n] = get_fpscr(c); return 0; }
            break;
        case 0xB:
            if (op == 0x000B && !in_slot) {                                     /* rts */
                uint32_t t = c->pr;
                uint32_t d;
                if (step(c, pc + 2, &d, 1))
                    return 1;
                *next = t;
                return 0;
            }
            break;
        case 0xC: r[n] = sext8(rd(r[m] + r[0], 1)); return 0;
        case 0xD: r[n] = sext16(rd(r[m] + r[0], 2)); return 0;
        case 0xE: r[n] = rd(r[m] + r[0], 4); return 0;
        case 0xF: {                                                             /* mac.l */
            int64_t a = (int32_t)rd(r[n], 4), b = (int32_t)rd(r[m], 4);
            r[n] += 4; r[m] += 4;
            int64_t acc = (int64_t)(((uint64_t)c->mach << 32) | c->macl) + a * b;
            c->mach = (uint32_t)((uint64_t)acc >> 32); c->macl = (uint32_t)acc;
            return 0;
        }
        }
        break;
    case 0x1: wr(r[n] + (op & 15) * 4u, 4, r[m]); return 0;
    case 0x2:
        switch (op & 0xF) {
        case 0x0: wr(r[n], 1, r[m]); return 0;
        case 0x1: wr(r[n], 2, r[m]); return 0;
        case 0x2: wr(r[n], 4, r[m]); return 0;
        case 0x4: { uint32_t v = r[m]; r[n] -= 1; wr(r[n], 1, v); return 0; }
        case 0x5: { uint32_t v = r[m]; r[n] -= 2; wr(r[n], 2, v); return 0; }
        case 0x6: { uint32_t v = r[m]; r[n] -= 4; wr(r[n], 4, v); return 0; }
        case 0x7: c->q = r[n] >> 31; c->m = r[m] >> 31; c->t = c->q != c->m; return 0;
        case 0x8: c->t = (r[n] & r[m]) == 0; return 0;
        case 0x9: r[n] &= r[m]; return 0;
        case 0xA: r[n] ^= r[m]; return 0;
        case 0xB: r[n] |= r[m]; return 0;
        case 0xC: { uint32_t x = r[n] ^ r[m];
            c->t = !(x & 0xFF) || !(x & 0xFF00) || !(x & 0xFF0000) || !(x & 0xFF000000u); return 0; }
        case 0xD: r[n] = (r[n] >> 16) | (r[m] << 16); return 0;
        case 0xE: c->macl = (uint32_t)(uint16_t)r[n] * (uint16_t)r[m]; return 0;
        case 0xF: c->macl = (uint32_t)((int32_t)(int16_t)r[n] * (int16_t)r[m]); return 0;
        }
        break;
    case 0x3:
        switch (op & 0xF) {
        case 0x0: c->t = r[n] == r[m]; return 0;
        case 0x2: c->t = r[n] >= r[m]; return 0;
        case 0x3: c->t = (int32_t)r[n] >= (int32_t)r[m]; return 0;
        case 0x4: div1(c, n, m); return 0;
        case 0x5: { uint64_t p = (uint64_t)r[n] * r[m]; c->mach = (uint32_t)(p >> 32); c->macl = (uint32_t)p; return 0; }
        case 0x6: c->t = r[n] > r[m]; return 0;
        case 0x7: c->t = (int32_t)r[n] > (int32_t)r[m]; return 0;
        case 0x8: r[n] -= r[m]; return 0;
        case 0xA: { uint32_t a = r[n], b = r[m], d = a - b - (uint32_t)c->t;
            c->t = (a < b) || (a - b < (uint32_t)c->t); r[n] = d; return 0; }
        case 0xB: { int64_t d = (int64_t)(int32_t)r[n] - (int32_t)r[m]; c->t = d != (int32_t)d; r[n] = (uint32_t)d; return 0; }
        case 0xC: r[n] += r[m]; return 0;
        case 0xD: { int64_t p = (int64_t)(int32_t)r[n] * (int32_t)r[m]; c->mach = (uint32_t)((uint64_t)p >> 32); c->macl = (uint32_t)p; return 0; }
        case 0xE: { uint64_t s = (uint64_t)r[n] + r[m] + (uint32_t)c->t; c->t = s >> 32; r[n] = (uint32_t)s; return 0; }
        case 0xF: { int64_t s = (int64_t)(int32_t)r[n] + (int32_t)r[m]; c->t = s != (int32_t)s; r[n] = (uint32_t)s; return 0; }
        }
        break;
    case 0x4:
        switch (op & 0xFF) {
        case 0x00: c->t = r[n] >> 31; r[n] <<= 1; return 0;
        case 0x01: c->t = r[n] & 1; r[n] >>= 1; return 0;
        case 0x02: r[n] -= 4; wr(r[n], 4, c->mach); return 0;
        case 0x04: c->t = r[n] >> 31; r[n] = (r[n] << 1) | (uint32_t)c->t; return 0;
        case 0x05: c->t = r[n] & 1; r[n] = (r[n] >> 1) | ((uint32_t)c->t << 31); return 0;
        case 0x06: c->mach = rd(r[n], 4); r[n] += 4; return 0;
        case 0x08: r[n] <<= 2; return 0;
        case 0x09: r[n] >>= 2; return 0;
        case 0x0A: c->mach = r[n]; return 0;
        case 0x0B:                                                              /* jsr */
            if (in_slot) break;
            return branch_to(c, pc, r[n], next, 1);
        case 0x10: r[n] -= 1; c->t = r[n] == 0; return 0;
        case 0x11: c->t = (int32_t)r[n] >= 0; return 0;
        case 0x12: r[n] -= 4; wr(r[n], 4, c->macl); return 0;
        case 0x13: r[n] -= 4; wr(r[n], 4, c->gbr); return 0;
        case 0x15: c->t = (int32_t)r[n] > 0; return 0;
        case 0x16: c->macl = rd(r[n], 4); r[n] += 4; return 0;
        case 0x17: c->gbr = rd(r[n], 4); port_set_gbr((int)c->gbr); r[n] += 4; return 0;
        case 0x18: r[n] <<= 8; return 0;
        case 0x19: r[n] >>= 8; return 0;
        case 0x1A: c->macl = r[n]; return 0;
        case 0x1B: { uint32_t v = rd(r[n], 1); c->t = v == 0; wr(r[n], 1, v | 0x80); return 0; }
        case 0x1E: c->gbr = r[n]; port_set_gbr((int)c->gbr); return 0;
        case 0x20: c->t = r[n] >> 31; r[n] <<= 1; return 0;
        case 0x21: c->t = r[n] & 1; r[n] = (uint32_t)((int32_t)r[n] >> 1); return 0;
        case 0x22: r[n] -= 4; wr(r[n], 4, c->pr); return 0;
        case 0x24: { int t = r[n] >> 31; r[n] = (r[n] << 1) | (uint32_t)c->t; c->t = t; return 0; }
        case 0x25: { int t = r[n] & 1; r[n] = (r[n] >> 1) | ((uint32_t)c->t << 31); c->t = t; return 0; }
        case 0x26: c->pr = rd(r[n], 4); r[n] += 4; return 0;
        case 0x28: r[n] <<= 16; return 0;
        case 0x29: r[n] >>= 16; return 0;
        case 0x2A: c->pr = r[n]; return 0;
        case 0x2B:                                                              /* jmp */
            if (in_slot) break;
            {
                uint32_t t = r[n];
                const struct port_entry *e = port_lookup(0x0C000000u | (t & 0x00FFFFFFu));
                if (e && !is_stub(e->fn)) {                                     /* a tail call into C */
                    uint32_t d;
                    if (step(c, pc + 2, &d, 1))
                        return 1;
                    if (call_native(c, t)) { *next = c->pr; return 0; }
                    *next = t;
                    return 0;
                }
                return branch_to(c, pc, t, next, 0);
            }
        case 0x52: r[n] -= 4; wr(r[n], 4, c->fpul); return 0;
        case 0x56: c->fpul = rd(r[n], 4); r[n] += 4; return 0;
        case 0x5A: c->fpul = r[n]; return 0;
        case 0x62: r[n] -= 4; wr(r[n], 4, get_fpscr(c)); return 0;
        case 0x66: set_fpscr(c, rd(r[n], 4), pc); r[n] += 4; return 0;
        case 0x6A: set_fpscr(c, r[n], pc); return 0;
        }
        if ((op & 0xF) == 0xC) {                                                /* shad */
            int32_t s = (int32_t)r[m];
            if (s >= 0) r[n] <<= (s & 31);
            else if ((s & 31) == 0) r[n] = (int32_t)r[n] < 0 ? 0xFFFFFFFFu : 0;
            else r[n] = (uint32_t)((int32_t)r[n] >> ((~s & 31) + 1));
            return 0;
        }
        if ((op & 0xF) == 0xD) {                                                /* shld */
            int32_t s = (int32_t)r[m];
            if (s >= 0) r[n] <<= (s & 31);
            else if ((s & 31) == 0) r[n] = 0;
            else r[n] >>= ((~s & 31) + 1);
            return 0;
        }
        if ((op & 0xF) == 0xE && m == 1) { c->gbr = r[n]; port_set_gbr((int)c->gbr); return 0; }
        break;
    case 0x5: r[n] = rd(r[m] + (op & 15) * 4u, 4); return 0;
    case 0x6:
        switch (op & 0xF) {
        case 0x0: r[n] = sext8(rd(r[m], 1)); return 0;
        case 0x1: r[n] = sext16(rd(r[m], 2)); return 0;
        case 0x2: r[n] = rd(r[m], 4); return 0;
        case 0x3: r[n] = r[m]; return 0;
        case 0x4: { uint32_t v = sext8(rd(r[m], 1)); if (n != m) r[m] += 1; r[n] = v; return 0; }
        case 0x5: { uint32_t v = sext16(rd(r[m], 2)); if (n != m) r[m] += 2; r[n] = v; return 0; }
        case 0x6: { uint32_t v = rd(r[m], 4); if (n != m) r[m] += 4; r[n] = v; return 0; }
        case 0x7: r[n] = ~r[m]; return 0;
        case 0x8: r[n] = (r[m] & 0xFFFF0000u) | ((r[m] & 0xFF) << 8) | ((r[m] >> 8) & 0xFF); return 0;
        case 0x9: r[n] = (r[m] >> 16) | (r[m] << 16); return 0;
        case 0xA: { uint32_t t = 0 - r[m]; uint32_t d = t - (uint32_t)c->t; c->t = (r[m] != 0) || (t < (uint32_t)c->t); r[n] = d; return 0; }
        case 0xB: r[n] = 0 - r[m]; return 0;
        case 0xC: r[n] = r[m] & 0xFF; return 0;
        case 0xD: r[n] = r[m] & 0xFFFF; return 0;
        case 0xE: r[n] = sext8(r[m]); return 0;
        case 0xF: r[n] = sext16(r[m]); return 0;
        }
        break;
    case 0x7: r[n] += sext8(imm8); return 0;
    case 0x8:
        switch (n) {
        case 0x0: wr(r[m] + (op & 15), 1, r[0]); return 0;
        case 0x1: wr(r[m] + (op & 15) * 2u, 2, r[0]); return 0;
        case 0x4: r[0] = sext8(rd(r[m] + (op & 15), 1)); return 0;
        case 0x5: r[0] = sext16(rd(r[m] + (op & 15) * 2u, 2)); return 0;
        case 0x8: c->t = r[0] == sext8(imm8); return 0;
        case 0x9: case 0xB: case 0xD: case 0xF:
            if (in_slot) break;
            {
                int taken = (n == 0x9 || n == 0xD) ? c->t : !c->t;
                uint32_t t = pc + 4 + sext8(imm8) * 2u;
                if (n == 0x9 || n == 0xB) { if (taken) *next = t; return 0; }
                uint32_t d;
                if (step(c, pc + 2, &d, 1))
                    return 1;
                *next = taken ? t : pc + 4;
                return 0;
            }
        }
        break;
    case 0x9: r[n] = sext16(rd(pc + 4 + imm8 * 2u, 2)); return 0;
    case 0xA:
    case 0xB:
        if (in_slot) break;
        {
            uint32_t d12 = op & 0xFFF;
            uint32_t t = pc + 4 + (uint32_t)((int32_t)(d12 << 20) >> 19);
            if ((op >> 12) == 0xB)
                return branch_to(c, pc, t, next, 1);
            /* bra: a tail call when it lands on another function's start that has C */
            const struct port_entry *e = port_lookup(0x0C000000u | (t & 0x00FFFFFFu));
            if (e && !is_stub(e->fn)) {
                uint32_t dd;
                if (step(c, pc + 2, &dd, 1))
                    return 1;
                if (call_native(c, t)) { *next = c->pr; return 0; }
                *next = t;
                return 0;
            }
            return branch_to(c, pc, t, next, 0);
        }
    case 0xC:
        switch (n) {
        case 0x0: wr(c->gbr + imm8, 1, r[0]); return 0;
        case 0x1: wr(c->gbr + imm8 * 2u, 2, r[0]); return 0;
        case 0x2: wr(c->gbr + imm8 * 4u, 4, r[0]); return 0;
        case 0x4: r[0] = sext8(rd(c->gbr + imm8, 1)); return 0;
        case 0x5: r[0] = sext16(rd(c->gbr + imm8 * 2u, 2)); return 0;
        case 0x6: r[0] = rd(c->gbr + imm8 * 4u, 4); return 0;
        case 0x7: r[0] = ((pc + 4) & ~3u) + imm8 * 4u; return 0;
        case 0x8: c->t = (r[0] & imm8) == 0; return 0;
        case 0x9: r[0] &= imm8; return 0;
        case 0xA: r[0] ^= imm8; return 0;
        case 0xB: r[0] |= imm8; return 0;
        case 0xC: c->t = (rd(c->gbr + r[0], 1) & imm8) == 0; return 0;
        case 0xD: wr(c->gbr + r[0], 1, rd(c->gbr + r[0], 1) & imm8); return 0;
        case 0xE: wr(c->gbr + r[0], 1, rd(c->gbr + r[0], 1) ^ imm8); return 0;
        case 0xF: wr(c->gbr + r[0], 1, rd(c->gbr + r[0], 1) | imm8); return 0;
        }
        break;
    case 0xD: r[n] = rd(((pc + 4) & ~3u) + imm8 * 4u, 4); return 0;
    case 0xE: r[n] = sext8(imm8); return 0;
    case 0xF: {
        int lo = op & 0xF;
        if (op == 0xF3FD) { c->sz ^= 1; return 0; }
        if (op == 0xFBFD) { frchg(c); return 0; }
        if (lo == 0xD) {
            switch (m) {
            case 0x0: c->fr[n] = c->fpul; return 0;
            case 0x1: c->fpul = c->fr[n]; return 0;
            case 0x2: SF(c, n, (float)(int32_t)c->fpul); return 0;
            case 0x3: c->fpul = (uint32_t)sa_ftrc(F(c, n)); return 0;
            case 0x4: c->fr[n] ^= 0x80000000u; return 0;
            case 0x5: c->fr[n] &= 0x7FFFFFFFu; return 0;
            case 0x6: SF(c, n, sqrtf(F(c, n))); return 0;
            case 0x7: SF(c, n, 1.0f / sqrtf(F(c, n))); return 0;
            case 0x8: c->fr[n] = 0; return 0;
            case 0x9: c->fr[n] = 0x3F800000u; return 0;
            case 0xE: {                                                         /* fipr fvm,fvn */
                int vn = (n >> 2) * 4, vm = (n & 3) * 4;
                float a[4], b[4];
                memcpy(a, &c->fr[vm], 16); memcpy(b, &c->fr[vn], 16);
                SF(c, vn + 3, port_fast_fpu ? a[0] * b[0] + a[1] * b[1] + a[2] * b[2] + a[3] * b[3] : sa_fipr(a, b));
                return 0;
            }
            case 0xF:
                if ((n & 3) == 1) {                                             /* ftrv xmtrx,fvn */
                    int vn = (n >> 2) * 4;
                    float v[4], o[4];
                    memcpy(v, &c->fr[vn], 16);
                    if (port_fast_fpu)
                        for (int i = 0; i < 4; i++)
                            o[i] = port_xmtrx[i] * v[0] + port_xmtrx[4 + i] * v[1] + port_xmtrx[8 + i] * v[2] + port_xmtrx[12 + i] * v[3];
                    else
                        sa_ftrv(port_xmtrx, v, o);
                    memcpy(&c->fr[vn], o, 16);
                    return 0;
                }
                if ((n & 1) == 0) {                                             /* fsca fpul,drn */
                    float sc[2];
                    sa_fsca(c->fpul, sc);
                    SF(c, n, sc[0]); SF(c, n + 1, sc[1]);
                    return 0;
                }
                break;
            }
            break;
        }
        if (lo >= 0x6 && lo <= 0xC) { fmov(c, n, m, lo); return 0; }
        float a = F(c, n), b = F(c, m);
        switch (lo) {
        case 0x0: SF(c, n, a + b); return 0;
        case 0x1: SF(c, n, a - b); return 0;
        case 0x2: SF(c, n, a * b); return 0;
        case 0x3: SF(c, n, a / b); return 0;
        case 0x4: c->t = a == b; return 0;
        case 0x5: c->t = a > b; return 0;
        case 0xE: SF(c, n, F(c, 0) * b + a); return 0;
        }
        break;
    }
    }
    stop(in_slot ? "an instruction it cannot run in a delay slot" : "an instruction it cannot run", pc, op);
    return 1;
}

/* the thunk's target: run the function at addr with the native caller's arguments */
void port_interp_run(uint32_t addr, const char *name, struct iframe *f) __attribute__((used));
void port_interp_run(uint32_t addr, const char *name, struct iframe *f)
{
    if (debug < 0)
        debug = getenv("PORT_DEBUG_INTERP") != 0;
    static int off = -1;
    if (off < 0)
        off = getenv("PORT_NO_INTERP") != 0;
    if (off || addr == 0) {
        port_unimplemented(name, addr);
        f->ints[0] = 0;
        f->floats[0] = 0;
        return;
    }
    if (debug)
        fprintf(stderr, "interp: %*s%s (%08X)\n", depth * 2, "", name, addr);
    uint32_t saved_func = port_interp_func;
    port_interp_func = addr;
    struct cpu c;
    memset(&c, 0, sizeof c);
    keep_load(&c);
    c.gbr = (uint32_t)port_get_gbr();
    for (int i = 0; i < 4; i++)
        c.r[4 + i] = f->ints[i];
    for (int i = 0; i < 8; i++)
        memcpy(&c.fr[4 + i], &f->floats[i], 4);
    uint32_t saved_isp = isp;
    if (!isp)
        isp = (uint32_t)(uintptr_t)&istack[sizeof istack / sizeof istack[0] - 16];
    /* the arguments past r4-r7: the first two from r8/r9, the others from the native stack */
    uint32_t sp = (isp - 64) & ~7u;
    uint32_t *words = (uint32_t *)(uintptr_t)sp;
    words[0] = f->ints[4];
    words[1] = f->ints[5];
    const uint64_t *ns = (const uint64_t *)(uintptr_t)f->stack;
    for (int i = 0; i < 12; i++)
        words[2 + i] = (uint32_t)ns[i];
    c.r[15] = sp;
    c.pr = RETURN_MAGIC;
    isp = sp - 1024;
    if (depth < 64) {
        run_chain[depth] = addr;
        run_cpu[depth] = &c;
    }
    depth++;
    uint32_t pc = addr;
    unsigned long steps = 0;
    while (pc != RETURN_MAGIC) {
        uint32_t next;
        if (step(&c, pc, &next, 0)) {
            c.r[0] = 0;
            break;
        }
        pc = next;
        if (++steps > 400000000ul) {
            fprintf(stderr, "powerstone2: interpreter: %s runs on past 400 million instructions; stopped\n", name);
            break;
        }
    }
    depth--;
    port_interp_func = saved_func;
    keep_store(&c);
    isp = saved_isp;
    f->ints[0] = c.r[0];
    memcpy(&f->floats[0], &c.fr[0], 4);
}

/* The game's menu-text routines FUN_0c117944 and FUN_0c117a6e take their arguments on the stack only (their callers
   push them and set no registers), and reach FUN_0c02f6da's variable arguments from there, so they run in the
   interpreter. The C that calls them passes the stack words as its first three arguments: they go back on the console
   stack here, where the original code reads them. */
#define STACK_ARGS_ONLY(addr, name, fn)                                                                                \
    int32_t fn(uint32_t a, uint32_t b, uint32_t c) __asm__(name);                                                     \
    int32_t fn(uint32_t a, uint32_t b, uint32_t c)                                                                     \
    {                                                                                                                  \
        uint64_t more[12] = {c};                                                                                       \
        struct iframe f;                                                                                               \
        memset(&f, 0, sizeof f);                                                                                       \
        f.ints[4] = a;                                                                                                 \
        f.ints[5] = b;                                                                                                 \
        f.stack = (uint32_t)(uintptr_t)more;                                                                           \
        port_interp_run(addr, name, &f);                                                                               \
        return (int32_t)f.ints[0];                                                                                     \
    }
STACK_ARGS_ONLY(0x0C117944u, "FUN_0c117944", port_fn_0c117944)
STACK_ARGS_ONLY(0x0C117A6Eu, "FUN_0c117a6e", port_fn_0c117a6e)

/* for the crash report (runner.c): the console functions the interpreter is nested in, outermost first, and the
   innermost run's registers */
void port_interp_report(void)
{
    char line[600];
    int n = snprintf(line, sizeof line, "powerstone2: interpreter runs (outermost first):");
    for (int i = 0; i < depth && i < 64 && n < 500; i++)
        n += snprintf(line + n, sizeof line - (size_t)n, " %08X", run_chain[i]);
    n += snprintf(line + n, sizeof line - (size_t)n, "\n");
    if (write(2, line, (size_t)n) < 0)
        return;
    if (depth > 0 && depth <= 64 && run_cpu[depth - 1]) {
        const struct cpu *c = run_cpu[depth - 1];
        n = snprintf(line, sizeof line, "powerstone2: registers: pc %08X pr %08X", port_interp_pc, c->pr);
        for (int i = 0; i < 16; i++)
            n += snprintf(line + n, sizeof line - (size_t)n, " r%d %08X", i, c->r[i]);
        n += snprintf(line + n, sizeof line - (size_t)n, "\n");
        if (write(2, line, (size_t)n) < 0)
            return;
    }
}
