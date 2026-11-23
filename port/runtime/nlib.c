/* nlib.c: host C for NAOMI library code (0x0C1769D0-0x0C1A3000) the decomp has no C for: code that keeps state in the
   FPU's back bank (XMTRX, which is shim.c's port_xmtrx here) or calls the compiler's block copy with its operands in
   r0-r2 (_quick_odd_mvn, FUN_0c187798: r0 bytes from r2 to r1), which C cannot say. From their disassembly; the
   structure follows Virtua Tennis's port (its NAOMI library is the same code at other addresses). */
#include <stdint.h>
#include <string.h>

#include "play_math.h"

#define U32(a) (*(volatile uint32_t *)(uintptr_t)(a))
#define U8(a) (*(volatile uint8_t *)(uintptr_t)(a))
#define F32(a) (*(volatile float *)(uintptr_t)(a))

extern float port_xmtrx[16];

/* --- the matrix stacks ------------------------------------------------------------------------------------------------

   Three stacks, each a 12-byte descriptor (16-bit depth, 16-bit limit, base, top) at 0x0C868780 + 12 * n; the current
   one's descriptor is copied to 0x0C868774, and 0x0C868770 holds its number. */
#define NL_CUR 0x0C868774u
#define NL_SEL 0x0C868770u

int32_t nlInitMatrixStack(uint32_t desc, uint32_t buf, int32_t n);
int32_t nlStoreMatrix(uint32_t m);
int32_t FUN_0c17b1a0(uint32_t m); /* nlLoadMatrix: XMTRX from m (0: the stack's top) */

static void copy12(uint32_t dst, uint32_t src) { memmove((void *)(uintptr_t)dst, (const void *)(uintptr_t)src, 12); }

/* nlInitMatrix(buffer, depth): stacks 1 and 2 three deep in the library's own buffers, stack 0 in the game's; stack 0
   becomes the current one. Returns stack 0's base */
int32_t nl_init_matrix(uint32_t buf, int32_t depth) __asm__("nlInitMatrix");
int32_t nl_init_matrix(uint32_t buf, int32_t depth)
{
    nlInitMatrixStack(NL_CUR + 24, 0x0C8687A4u, 3);
    nlInitMatrixStack(NL_CUR + 36, 0x0C868864u, 3);
    int32_t r = nlInitMatrixStack(NL_CUR + 12, buf, depth + 1);
    U8(NL_SEL) = 1;
    copy12(NL_CUR, NL_CUR + 12);
    return r;
}

/* nlSelectMatrixStack(n): XMTRX stored on the current stack, its descriptor put back in its slot, stack n's taken out,
   and XMTRX loaded from its top */
int32_t nl_select_matrix_stack(int32_t n) __asm__("nlSelectMatrixStack");
int32_t nl_select_matrix_stack(int32_t n)
{
    nlStoreMatrix(0);
    copy12(NL_CUR + 12u * (uint32_t)(int32_t)(int8_t)U8(NL_SEL), NL_CUR);
    U8(NL_SEL) = (uint8_t)n;
    copy12(NL_CUR, NL_CUR + 12u * (uint32_t)(int32_t)(int8_t)U8(NL_SEL));
    return FUN_0c17b1a0(U32(NL_CUR + 8));
}

/* nlMultiMatrix(m): XMTRX = XMTRX . M, each column of M through FTRV (the console's bits) */
void nl_multi_matrix(uint32_t m) __asm__("nlMultiMatrix");
void nl_multi_matrix(uint32_t m)
{
    float r[16], c[4];
    for (int i = 0; i < 4; i++) {
        memcpy(c, (const void *)(uintptr_t)(m + 16u * (uint32_t)i), sizeof c);
        sa_ftrv(port_xmtrx, c, r + 4 * i);
    }
    memcpy(port_xmtrx, r, sizeof r);
}

/* nlObjPutInit: the objects' global ambience from the library's (gNlGlobalAmbience, 0x0C2A61D0, to 0x0C8A6C84), and the
   specular table at 0x0C868B88: 32 rows of 128, row r column c: ((c * K1 / K2 + K3)^2 * 2 - 1)^2 to the power r (rows 0
   and 1 the power 1). K1, K3, K2 are the words of its literal pool at 0x0C17E6F8, 0x0C17E6FC, 0x0C17E700; the arithmetic
   runs under the game's rounding (MXCSR) */
void nl_obj_put_init(void) __asm__("nlObjPutInit");
void nl_obj_put_init(void)
{
    float k1 = F32(0x0C17E6F8u), k3 = F32(0x0C17E6FCu), k2 = F32(0x0C17E700u);
    F32(0x0C8A6C84u) = F32(0x0C2A61D0u);
    U32(0x0C868B7Cu) = 0;
    for (int row = 0; row < 32; row++)
        for (int col = 0; col < 128; col++) {
            volatile float f = (float)col;
            f = f * k1;
            f = f / k2;
            float x = f + k3;
            x = x * x;
            x = x + x;
            x = x - 1.0f;
            x = x * x;
            float v = x;
            if (row >= 2) {
                v = 1.0f;
                for (int k = 0; k < row; k++)
                    v = v * x;
            }
            F32(0x0C868B88u + (uint32_t)row * 512u + (uint32_t)col * 4u) = v;
        }
}
