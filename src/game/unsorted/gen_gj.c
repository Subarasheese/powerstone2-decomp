/* Straight-line functions with calls and guards (batch gen_gj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o118_int { char p[0x118]; int v; };
struct o12C_ushort { char p[0x12C]; unsigned short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1A_uchar { char p[0x1A]; unsigned char v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o24_short { char p[0x24]; short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o374B_uchar { char p[0x374B]; unsigned char v; };
struct o377C_int { char p[0x377C]; int v; };
struct o378C_float { char p[0x378C]; float v; };
struct o3830_ushort { char p[0x3830]; unsigned short v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o445_uchar { char p[0x445]; unsigned char v; };
struct o48_float { char p[0x48]; float v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o78_int { char p[0x78]; int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03744a(int, int, int, int);
extern int FUN_0c037bf6();
int FUN_0c038362(int);
extern int FUN_0c03f444();
int FUN_0c042fe0(void);
int FUN_0c04307c(void);
int FUN_0c059e60(int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c0b4b20(void);
int FUN_0c0b507a(int, int, int);
int FUN_0c0b54c8(int);
int FUN_0c0b69c0(int, int, int, int);
int FUN_0c14af80(int, int);
int ai_clear_op_state(void);
float math_cos_angle16(int);
float math_sin_angle16(int);
int nlRand(void);
int thunk_FUN_0c058310(int, int);
void FUN_0c0b562a(int a4, int a5, int a6, int a7);
int FUN_0c0bedb2(int a4);
int FUN_0c15c344(int a4, int a5, int a6, int a7, float f4);

/* manual: per-kind (byte +0x3715) state machine: 7 forwarded, 19 / 20 / 23 their own states, others set up and pick a random op;
   569 hand cases + 31 old, 602 of 602 instructions */
void FUN_0c0b562a(int a4, int a5, int a6, int a7)
{
#define SB(o) (*(signed char *)(a4 + (o)))
#define SH(o) (*(short *)(a4 + (o)))
    int kind, s, t, x, v;
    float f, d, low;
    float *p;

    kind = SB(0x3715);
    if (kind == 7) {
        FUN_0c0b69c0(a4, a5, a6, a7);
        return;
    }
    if (kind == 19) {
        s = SB(22);
        if (s == 0) {
            x = SB(1);
            FUN_0c07e79c(a4, x, 6, 0, x, 6, 0);
            SB(22)++;
            FUN_0c14af80(a4, 0);
            s = 1;
        }
        if (s == 1) {
            if (!(unsigned char)FUN_0c037bf6(a4))
                goto draw;
            x = SB(1);
            FUN_0c07e79c(a4, x, 6, 1, x, 6, 1);
            SB(22)++;
        } else if (s == 2) {
            if (!(unsigned char)FUN_0c037bf6(a4))
                goto draw;
            FUN_0c0b507a(a4, 0, 0);
            FUN_0c0b54c8(a4);
        }
        return;
    }
    if (kind == 20) {
        s = SB(22);
        if (s == 0) {
            x = SB(1);
            FUN_0c07e79c(a4, x, 0, 0, x, 0, 0);
            FUN_0c059e60(a4, 11);
            SB(22)++;
        } else if (s != 1)
            return;
        x = a4 + 0x38f8;
        *(unsigned char *)(x + 26) = 2;
        { struct mv3 { int w[3]; }; *(struct mv3 *)(x + 28) = *(struct mv3 *)0x0c1c67ec; }
        goto step;
    }
    if (kind != 23) {
        s = SB(22);
        if (s == 0) {
            x = SB(1);
            FUN_0c07e79c(a4, x, 0, 0, x, 0, 0);
            {
                int *q = (int *)(a4 + 0x118);
                int q1 = q[1], q0 = q[0];
                *(float *)(q1 + 0xa0) = 1.0f;
                *(float *)(q1 + 0x9c) = 1.0f;
                *(float *)(q0 + 0xa0) = 1.0f;
                *(float *)(q0 + 0x9c) = 1.0f;
                q1 = q[1];
                q0 = q[0];
                *(float *)(q1 + 0x98) = 1.0f;
                *(float *)(q0 + 0x98) = 1.0f;
                *(float *)(q1 + 0x94) = 1.0f;
                *(float *)(q0 + 0x94) = 1.0f;
            }
            SH(0x1c) = *(int *)(0x0c1c6e38 + (FUN_0c0b4b20() << 2));
            SH(0x12c) = ~(1 << SB(1));
            SB(22)++;
        } else if (s != 1)
            return;
        FUN_0c037bf6(a4);
        if (*(signed char *)0x0c54098d < 5 || !FUN_0c042fe0())
            return;
        if (FUN_0c04307c()) {
            FUN_0c0b507a(a4, 7, 8);
            goto draw;
        }
        x = SH(0x1c) - 1;
        SH(0x1c) = x;
        if ((short)x > 0)
            goto draw;
        v = nlRand() % 8;
        if (v == 4 && *(int *)(a4 + 0x38f8 + 0x2c) == 0)
            return;
        FUN_0c0b507a(a4, 7, v);
        return;
    }
    s = SB(22);
    if (s == 0) {
        x = SB(1);
        FUN_0c07e79c(a4, x, 6, 4, x, 6, 4);
        SB(23) = 0;
        SB(22)++;
        SH(0x1c) = 198;
        SB(0x445) = 0;
        SH(0x3830) = 0;
        SH(0x12e) = 0;
    } else if (s != 1)
        return;
    SB(0x374b) = 1;
    x = SH(0x1c);
    if (x >= 0) {
        SH(0x1c) = x - 1;
        goto step;
    }
    t = SB(23);
    if (t == 0) {
        x = a4 + 0x468;
        *(int *)(x + 0x19c) = 0;
        *(int *)(x + 0x22c) = 0;
        SH(0x20) = 0;
        SH(0x22) = 60;
        SB(23)++;
        t = 1;
    }
    if (t == 1 || t == 2) {
        f = math_cos_angle16(SH(0x20) << 12);
        if (t == 1)
            f *= 16384.0f;
        else
            f = (float)SH(0x22) / 60.0f * f * 5461.0f;
        v = (int)f;
        x = a4 + 0x468;
        *(int *)(x + 0x19c) = 0x4000 - v;
        *(int *)(x + 0x22c) = v - 0x4000;
        SH(0x20)++;
        if (t == 1) {
            if (SH(0x20) >= 4) {
                FUN_0c059e60(a4, 37);
                SB(23)++;
            }
        } else {
            SH(0x22)--;
            if (SH(0x22) < 0) {
                SH(0x22) = 0;
                SB(23)++;
                SH(0xac) |= 0x200;
                *(float *)(a4 + 0xbc) = 1.0f;
                *(float *)(a4 + 0xb8) = 1.0f;
                *(float *)(a4 + 0xb4) = 1.0f;
            }
        }
        goto step;
    }
    if (t == 3) {
        if (!(unsigned char)FUN_0c037bf6(a4))
            goto draw;
        SB(23)++;
        return;
    }
    low = 0.0f;
    if (t == 4) {
        x = 0xb4;
        d = 0.020833334f;
    } else if (t == 5) {
        x = 0xb8;
        d = 0.013888889f;
    } else if (t == 6) {
        x = 0xbc;
        d = 0.00625f;
        low = 0.4f;
    } else
        return;
    p = (float *)(a4 + x);
    *p -= d;
    if (!(*p > low)) {
        *p = low;
        SB(23)++;
    }
    return;
step:
    FUN_0c037bf6(a4);
draw:
    FUN_0c038362(a4);
#undef SB
#undef SH
}

/* manual: AI target pick of one slot (4 players at 0C532498 + i*0x3938): first pass with exactly one live player takes it, then a4's own record, then the other of two,
   then a random pick among live players by flag/colour, else a table of who to aim at by slot; one shared store at the end; cases: tests/gen_gj/FUN_0c0bedb2.json (36 old + 1251 hand), 1465 of 1465 instructions */
#define PL(i) ((i) * 0x3938 + 0xC532498)
#define LIVE(i) (*(signed char *)((i) * 0x3938 + 0xC535BAC) != 0 && *(float *)((i) * 0x3938 + 0xC5325F8) > 0.0f)
#define BB(i) (*(signed char *)((i) * 0x3938 + 0xC535BB8))
#define FF(i) (*(float *)((i) * 0x3938 + 0xC5325F8) > 0.0f)
#define SEL(i) (LIVE(i) && (kind == 1 ? BB(i) == 0 : (*(signed char *)((i) * 0x3938 + 0xC535BB1) == *(signed char *)(a4 + 0x3719)) == (kind == 3)))
#pragma noregalloc(FUN_0c0bedb2)
int FUN_0c0bedb2(int a4)
{
    volatile int idx;
    int n, i, r, t, w, st, kind, v, src, dflt;

    dflt = 0;
    w = 1;
    n = 0;
    for (i = 0; i < 4; i++) {
        if (LIVE(i)) { n++; t = PL(i); }
    }
    if (n == 1) { w = 0; goto store_t; }
    n = 0;
    for (i = 0; i < 4; i++) {
        if (LIVE(i) && (*(signed char *)(i * 0x3938 + 0xC53249A) == 12 || *(signed char *)(i * 0x3938 + 0xC53249A) == 13)) n = 1;
    }
    if (n == 1) {
        v = *(int *)(a4 + 0x377C);
        src = a4 + 0x380C;
        goto store;
    }
    n = 0;
    for (i = 0; i < 4; i++) {
        if (LIVE(i)) {
            n++;
            if (a4 != PL(i)) t = PL(i);
        }
    }
    if (n == 2) goto store_t;
    for (st = 0; st < 4; st++) {
        if (st < 2) {
            n = 0;
            for (i = 0; i < 4; i++) {
                if (LIVE(i) && BB(i) != 0) n++;
            }
            if (st == 0 ? n != 1 : (n != 2 || *(signed char *)0xC542361 != 0)) continue;
            kind = 1;
        } else {
            if (*(signed char *)0xC5429B4 == 0) goto tree;
            kind = st;
        }
        n = 0;
        for (i = 0; i < 4; i++) {
            if (SEL(i)) n++;
        }
        if (n != 0) {
            r = nlRand() % n;
            n = 0;
            for (i = 0; i < 4; i++) {
                if (SEL(i)) {
                    if (n == r) t = PL(i);
                    n++;
                }
            }
            goto store_t;
        }
    }
    idx = *(unsigned char *)0xC472462;
    goto dflt_store;
tree:;
    {
        int o, f, g, h;
        n = 0;
        for (i = 0; i < 4; i++) {
            if (FF(i)) n++;
        }
        o = *(unsigned char *)0xC472462;
        if (o < 4) {
            idx = o;
            o = (57 | (44 << 6) | (19 << 12) | (6 << 18)) >> (idx * 6);
            f = o & 3; g = (o >> 2) & 3; h = (o >> 4) & 3;
            if (n == 4) idx = g;
            else if (n == 3) {
                if (FF(f)) {
                    if (FF(g)) idx = BB(g) == 0 ? g : (BB(f) == 0 ? f : g);
                    else idx = BB(h) == 0 ? h : (BB(f) == 0 ? f : h);
                } else idx = BB(g) == 0 ? g : (BB(h) == 0 ? h : g);
            } else if (n == 2) idx = FF(f) ? f : (FF(g) ? g : h);
        }
    }
dflt_store:;
    dflt = 1;
    v = PL(idx);
    src = v + 0x28;
    goto store;
store_t:;
    v = t;
    src = t + 0x28;
store:;
    i = *(unsigned char *)0xC472462;
    *(int *)(i * 0x264 + 0xC471B44) = v;
    *(int *)(i * 0x264 + 0xC471B38) = *(int *)src;
    *(int *)(i * 0x264 + 0xC471B3C) = *(int *)(src + 4);
    *(int *)(i * 0x264 + 0xC471B40) = *(int *)(src + 8);
    *(unsigned short *)(i * 0x264 + 0xC471AEE) = w;
    *(int *)(i * 0x264 + 0xC471AD4) = *(int *)0xC47245C;
    n = ai_clear_op_state();
    *(unsigned short *)0xC472460 = 1;
    return dflt ? n : 0xC472460;
}

