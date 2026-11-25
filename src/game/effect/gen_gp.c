/* Straight-line functions with calls and guards (batch gen_gp): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o11C_int { char p[0x11C]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o168_float { char p[0x168]; float v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o48_short { char p[0x48]; short v; };
struct o4A_short { char p[0x4A]; short v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oDC_int { char p[0xDC]; int v; };
struct oE0_int { char p[0xE0]; int v; };
struct oE4_int { char p[0xE4]; int v; };
int FUN_0c03744a(int, int, int, int);
extern int FUN_0c037bf6();
int FUN_0c03f346(int);
int FUN_0c058a6e(int, int, int, int, int, int);
int FUN_0c059e60(int, int);
int FUN_0c059f20(int, int);
int FUN_0c05f22c(int);
int FUN_0c07d030(int, int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c085cac(int, int, int);
int FUN_0c0a3058(int, int, int, int);
int FUN_0c0a3080(int, int, int, int, float);
int FUN_0c1171f0(int);
int FUN_0c1173dc(int, int, int, int);
int FUN_0c136784(int);
int FUN_0c13691a(int);
int FUN_0c1373e2(int);
int FUN_0c14fc70(int, int);
int FUN_0c187a88(int, int, int);
int FUN_0c1965cc(int, int, int);
int FUN_0c19c906(int, int);
int FUN_0c19f98c(int, int);
int FUN_0c1a0388(int, int);
int FUN_0c1a0ec4(int, int, int);
int FUN_0c1a0ff0(int, int);
int FUN_0c1a11d0(int, int, int);
int FUN_0c1a1354(int, int);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int nlAddVector3op(int, int, int);
void FUN_0c111a30(int a4);
int FUN_0c0fa966(int a4);
int FUN_0c19fad6(int a4, int a5, int a6);
void FUN_0c0a4b38(int a4, int a5, int a6, int a7, float f4, float f5);
struct o10_int { char p[0x10]; int v; };
struct o1C_short { char p[0x1C]; short v; };
struct o1C_ushort { char p[0x1C]; unsigned short v; };
struct o1E_short { char p[0x1E]; short v; };
struct o1E_ushort { char p[0x1E]; unsigned short v; };
struct o6_short { char p[0x6]; short v; };
struct o6_ushort { char p[0x6]; unsigned short v; };



/* manual: a two-armed (left / right) ramp state machine: state byte +0x14 (0 start, 1 run), tables per type at 0C28E794; both arms (key 0x400 / 0x800, state +0x16 / +0x17, counter +0x20 / +0x22, slots +0xC4 / +0xC8) are one loop; 282 hand cases + 2 old, 481 of 481 instructions */
int FUN_0c0fa966(int a4)
{
    int tmp[4];
    int s, k, i, n, c, r, v, x, y, hi, lo;
    int *sl;
    signed char *st;
    short *cn;

    s = *(signed char *)(a4 + 0x14);
    v = 0;
    if (s != 0) {
        if (s != 1) return s;
    } else {
        *(signed char *)(a4 + 0x14) = s + 1;
        *(unsigned char *)(a4 + 0xA8) = 1;
        *(unsigned short *)(a4 + 0xAC) = 31;
        *(unsigned char *)(a4 + 0xA9) = 33;
        *(float *)(a4 + 0x30) = 1.0f + 1.0f;
        FUN_0c1171f0(a4);
        v = 2;
        goto calls;
    }
resume:
    if (*(signed char *)(*(int *)(a4 + 0x10) + 0x14) == 99) return 99;
    *(unsigned char *)(a4 + 0xA8) = *(signed char *)(*(int *)(a4 + 0x10) + 0x14) == 1;
    k = *(short *)(*(int *)(a4 + 0x10) + 0x1C);
    if (k != 10 && k != 9 && k != 8) {
calls:
        sl = (int *)(a4 + 0xC4);
        for (i = 0; i < 2; i++)
            FUN_0c03744a(*sl++, 0, *(int *)(*(short *)(*(int *)(a4 + 0x10) + 0x1C) * 8 + 0xC28E794 + i * 4), *(int *)0xC4B4118);
        if (v == 2) {
            sl = (int *)(a4 + 0xC4);
            for (i = 2; i; i--)
                *(unsigned short *)(*sl++ + 6) |= 0x600;
            v = 0;
            goto resume;
        }
        v = 1;
    }
    sl = (int *)(a4 + 0xC4);
    for (i = 2; i; i--)
        **(char **)(sl++) = v;
    if (v) {
        sl = (int *)(a4 + 0xC4);
        for (i = 2; i; i--) {
            k = *(short *)(*(int *)(a4 + 0x10) + 0x1C);
            nlAddVector3op(*sl++ + 0x6C, 0xC28E5E4, 0xC28E64C + k * 12);
        }
    }
    if (*(short *)(a4 + 0x1C) > 25) { x = 0xC28E86C; y = 0xC28E85C; hi = 50; lo = 25; } else { x = 0xC28E85C; y = 0xC28E86C; hi = 25; lo = 0; }
    sl = (int *)(a4 + 0xC4);
    for (i = 2; i; i--)
        FUN_0c058a6e(*sl++ + 0x14, x, y, *(short *)(a4 + 0x1C), hi, lo);
    n = *(short *)(a4 + 0x1C);
    *(short *)(a4 + 0x1C) = n + 1;
    if ((short)(n + 1) > 50) *(short *)(a4 + 0x1C) = 0;
    r = 0;
    sl = (int *)(a4 + 0xC4);
    st = (signed char *)(a4 + 0x16);
    cn = (short *)(a4 + 0x20);
    for (i = 0; i < 2; i++) {
        if (FUN_0c05f22c(0x400 << i) != 0 && *st == 0) {
            *st = *st + 1;
            { struct mv4 { int w[4]; }; *(struct mv4 *)(sl[2] + 0x14) = *(struct mv4 *)(*sl + 0x14); }
            *cn = 0;
        }
        c = *st;
        r = c;
        if (c == 3) {
            FUN_0c058a6e((int)tmp, 0xC28E85C, 0xC28E85C + 16, *(short *)(a4 + 0x1C), 25, 0);
            FUN_0c058a6e(*sl + 0x14, (int)tmp, 0xC28E60C, *(short *)(a4 + 0x20), 5, 0);
            n = *cn;
            *cn = n + 1;
            r = 34;
            if ((short)(n + 1) > 5) {
                *st = 0;
                *cn = 0;
            }
        } else if (c == 1 || c == 2) {
            { struct mv4 { int w[4]; }; *(struct mv4 *)(*sl + 0x14) = *(struct mv4 *)0xC28E60C; }
            n = *cn;
            *cn = n + 1;
            r = 34;
            if (c == 1) {
                if ((short)(n + 1) > 8) {
                    *st = 0;
                    r = 23;
                }
            } else if ((short)(n + 1) > 4) {
                *st = *st + 1;
                *cn = 0;
            }
        }
        sl++;
        st++;
        cn++;
    }
    return r;
}



void FUN_0c0a4b38(int a4, int a5, int a6, int a7, float f4, float f5)
{
    int t1;
    int t0;
    int t2;
    float u0;
    float u1;

    t0 = *(signed char *)(a4 + 0x15);
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                (((struct o1C_ushort *)(a4))->v) = (((((struct o1C_short *)(a4))->v)) + 0x1);
                t1 = (((struct o1E_short *)(a4))->v);
                if (t1 == 0) {
                    u0 = (((struct o2C_float *)(a4))->v);
                    u1 = (((struct o168_float *)(a4))->v);
                    if (!((u1 + 60.0f) > u0)) {
                        if (!(u0 > (u1 + -60.0f))) {
                            (((struct o1E_ushort *)(a4))->v) = 0xA;
                            (((struct o50_float *)(a4))->v) = ((((struct o2C_float *)(a4))->v));
                            (((struct o5C_float *)(a4))->v) = ((((((struct o168_float *)(a4))->v)) - ((((struct o2C_float *)(a4))->v))) + 300.0f);
                        }
                    }
                } else {
                    (((struct o1E_ushort *)(a4))->v) = (t1 - 1);
                    if ((int)(short)(t1 - 1) > 0) {
                        (((struct o2C_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + (((((((struct o5C_float *)(a4))->v)) * (float)((-((((struct o1E_short *)(a4))->v))) + 0xA)) / 10.0f)));
                    }
                }
                FUN_0c0a3080(a4, a5, a6, a7, 7.0f);
                (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
                (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o54_float *)(a4))->v)));
                t1 = (((struct o20_short *)(a4))->v);
                (((struct o20_ushort *)(a4))->v) = (t1 + 0x1);
                ((float *)a4)[11] = ((float *)a4)[11] + 5.0f * (math_sin_angle16(((((short)(t1 + 0x1) << 8) << 2) << 1)));
                t1 = ((int (*)(int))(FUN_0c037bf6))(a4);
                FUN_0c136784(a4);
                if ((int)((((struct o1C_short *)(a4))->v)) <= (int)(*(int *)0xC25D354)) {
                } else {
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x15)) + 0x1);
                    FUN_0c0a3058(a4, (*(signed char *)(a4 + 0x1)), 0x1, 0x14);
                    t1 = *(int *)(((0x118 + a4) + 0x4));
                    t2 = (((struct o118_int *)(a4))->v);
                    (((struct oA0_float *)(t1))->v) = 1.0f;
                    (((struct o9C_float *)(t1))->v) = 1.0f;
                    (((struct oA0_float *)(t2))->v) = 1.0f;
                    (((struct o9C_float *)(t2))->v) = 1.0f;
                    t1 = *(int *)(((0x118 + a4) + 0x4));
                    t2 = (((struct o118_int *)(a4))->v);
                    (((struct o98_float *)(t1))->v) = 1.0f;
                    (((struct o98_float *)(t2))->v) = 1.0f;
                    (((struct o94_float *)(t1))->v) = 1.0f;
                    (((struct o94_float *)(t2))->v) = 1.0f;
                }
                return;
            }
            if (t0 == 3) {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x15)) + 0x1);
                FUN_0c0a3058(a4, (*(signed char *)(a4 + 0x1)), 0x1, 0x14);
                t1 = *(int *)(((0x118 + a4) + 0x4));
                t2 = (((struct o118_int *)(a4))->v);
                (((struct oA0_float *)(t1))->v) = 1.0f;
                (((struct o9C_float *)(t1))->v) = 1.0f;
                (((struct oA0_float *)(t2))->v) = 1.0f;
                (((struct o9C_float *)(t2))->v) = 1.0f;
                t1 = *(int *)(((0x118 + a4) + 0x4));
                t2 = (((struct o118_int *)(a4))->v);
                (((struct o98_float *)(t1))->v) = 1.0f;
                (((struct o98_float *)(t2))->v) = 1.0f;
                (((struct o94_float *)(t1))->v) = 1.0f;
                (((struct o94_float *)(t2))->v) = 1.0f;
                return;
            }
            if (t0 == 4) {
                t1 = ((int (*)(int, int, int))(FUN_0c037bf6))(a4, a5, a6);
                if (!(33.0f > ((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v)))) {
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x15)) + 0x1);
                    (((struct o50_float *)(a4))->v) = -13.5f;
                    (((struct o5C_float *)(a4))->v) = -2.0f;
                }
                return;
            }
            if (t0 == 5) {
                t1 = ((int (*)(int, int, int))(FUN_0c037bf6))(a4, a5, a6);
                if (!(((((struct o50_float *)(a4))->v)) > 0.0f)) {
                    t1 = FUN_0c07ecc6(a4, 0x0, 0x0);
                    if (t1 != 0) {
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x15)) + 0x1);
                        FUN_0c0a3058(a4, 0xFFFFFFFF, 0x4, 0x2A);
                        FUN_0c059f20((*(signed char *)(a4 + 0x1)), (*(signed char *)(a4 + 0x135)));
                        FUN_0c14fc70((*(signed char *)(a4 + 0x1)), (a4 + 0x28));
    return;
                    }
                    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
                    math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    return;
                }
                math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
                math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    return;
            }
            if (t0 == 6) {
                t0 = ((int (*)(int, int, int))(FUN_0c037bf6))(a4, a5, a6);
                if ((unsigned char)t0 != 0) {
                    FUN_0c085cac(a4, 0xE, 0x0);
    return;
                }
                return;
            }
            return;
        }
        (((struct o1C_ushort *)(a4))->v) = (((((struct o1C_short *)(a4))->v)) + 0x1);
        u0 = (((struct o2C_float *)(a4))->v);
        (((struct o2C_float *)(a4))->v) = (((((((((struct o50_float *)(a4))->v)) - u0) * ((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v))) / 53.0f)) + u0);
        t0 = ((int (*)(int, int, int))(FUN_0c037bf6))(a4, a5, a6);
        if (53.0f > ((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v))) {
            return;
        }
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x15)) + 0x1);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(a4 + 0x4C) = *(struct mv3 *)(0xC25D238); }
        FUN_0c07d030(a4, 0x1);
        FUN_0c1373e2((*(signed char *)(a4 + 0x1)));
        FUN_0c13691a((*(signed char *)(a4 + 0x1)));
        FUN_0c059e60(a4, 0xA);
    return;
    }
    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x15)) + 0x1);
    (((struct o1C_ushort *)(a4))->v) = 0x0;
    (((struct o1E_ushort *)(a4))->v) = 0x0;
    FUN_0c0a3058(a4, (*(signed char *)(a4 + 0x1)), 0x1, 0x13);
    t0 = (((struct o118_int *)(a4))->v);
    (((struct o98_float *)(t0))->v) = 5.0f;
    (((struct o94_float *)(t0))->v) = 5.0f;
    t0 = (((struct o11C_int *)(a4))->v);
    (((struct o98_float *)(t0))->v) = 5.0f;
    (((struct o94_float *)(t0))->v) = 5.0f;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(a4 + 0x4C) = *(struct mv3 *)(0xC25D238); }
    if ((((((struct o168_float *)(a4))->v)) + 300.0f) > ((((struct o2C_float *)(a4))->v))) {
        u0 = (((((struct o168_float *)(a4))->v)) + 300.0f);
    } else {
        u0 = ((((struct o2C_float *)(a4))->v));
    }
    (((struct o50_float *)(a4))->v) = u0;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(a4 + 0x58) = *(struct mv3 *)(0xC25D238); }
}
