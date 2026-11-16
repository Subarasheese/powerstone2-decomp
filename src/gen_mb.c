/* Straight-line functions with calls and guards (batch gen_mb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB0_float { char p[0xB0]; float v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c0588bc(int, int, int, int, int, int);
int FUN_0c059e60(int, int);
int FUN_0c1171f0(int);
int FUN_0c135bc8(int);
int FUN_0c14d34c(int, int, int, int, int, int, int, int);
int FUN_0c179ac0(void);
int FUN_0c17c130(int, int, int);
extern int FUN_0c187798();
int math_vec3_accumulate(int, int);
int FUN_0c1295ae(int a4, int a5, int a6, int a7);
int FUN_0c14d478(int a4, int a5, int a6, int a7);
int FUN_0c135c10(int a4, int a5, int a6);
int FUN_0c1193c8(int a4, int a5, int a6, int a7);
int FUN_0c14a3a8(int a4, int a5, int a6);

int FUN_0c1295ae(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    return t0;
                }
                return FUN_0c03f346(a4, a5, 0x14, a7);
            }
            t0 = (((struct oC4_int *)(a4))->v);
            u0 = (((struct o8C_float *)(t0))->v);
            (((struct o8C_float *)(t0))->v) = (u0 + 0.0199999996f);
            (((struct o88_float *)(t0))->v) = (u0 + 0.0199999996f);
            (((struct o84_float *)(t0))->v) = (u0 + 0.0199999996f);
            t0 = (((struct oC4_int *)(a4))->v);
            u0 = (((struct o20_float *)(t0))->v);
            (((struct o20_float *)(t0))->v) = (u0 - 0.0500000007f);
            (((struct o1C_float *)(t0))->v) = (u0 - 0.0500000007f);
            (((struct o18_float *)(t0))->v) = (u0 - 0.0500000007f);
            (((struct o14_float *)(t0))->v) = (u0 - 0.0500000007f);
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
            t1 = (short)(t0 - 1);
            if ((short)(t0 - 1) == 0) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t1 = 0x14;
            }
            return t1;
        }
    } else {
        *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x1F;
        t0 = (((struct oC4_int *)(a4))->v);
        (((struct o8C_float *)(t0))->v) = 0.0f;
        (((struct o88_float *)(t0))->v) = 0.0f;
        (((struct o84_float *)(t0))->v) = 0.0f;
        *(unsigned short *)((a4 + 0x1C)) = 0x14;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    t0 = (((struct oC4_int *)(a4))->v);
    u0 = (((struct o8C_float *)(t0))->v);
    (((struct o8C_float *)(t0))->v) = (u0 + 0.0199999996f);
    (((struct o88_float *)(t0))->v) = (u0 + 0.0199999996f);
    (((struct o84_float *)(t0))->v) = (u0 + 0.0199999996f);
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    t1 = (short)(t0 - 1);
    if ((short)(t0 - 1) == 0) {
        *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x21F;
        t0 = (((struct oC4_int *)(a4))->v);
        (((struct o20_float *)(t0))->v) = 1.0f;
        (((struct o1C_float *)(t0))->v) = 1.0f;
        (((struct o18_float *)(t0))->v) = 1.0f;
        (((struct o14_float *)(t0))->v) = 1.0f;
        *(unsigned short *)((a4 + 0x1C)) = 0x14;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t1 = 0x14;
    }
    return t1;
}

int FUN_0c14d478(int a4, int a5, int a6, int a7)
{
    int stk[6];
    register int t6;
    register int t8;
    register int t23;
    register int t24;
    register int t31;
    register int t44;

    if ((*(signed char *)((0x3715 + (*(int *)((a4 + 0x10)))))) != 26) {
        (((struct o14_uchar *)(a4))->v) = 0x1;
    }
    if ((*(signed char *)((a4 + 0x14))) == 0) {
        t6 = *(short *)((a4 + 0x1E));
        *(unsigned short *)((a4 + 0x1E)) = (t6 - 1);
        t44 = (short)(t6 - 1);
        if ((int)(short)(t6 - 1) <= 0) {
            t8 = *(signed char *)((a4 + 0x18));
            if (t8 != -1) {
                FUN_0c187798(0xC532498, t8, a6);
            } else {
                *(volatile signed char *)((a4 + 0x1));
                FUN_0c187798(0xC532498, t8, a6);
            }
            *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) + 1200.0f);
            *(float *)(((int)stk + 0)) = ((*(float *)(((int)stk + 0))) + ((float)((int)((int)(FUN_0c179ac0()) % (int)0x12C)) + -150.0f));
            *(float *)(((int)stk + 8)) = ((*(float *)(((int)stk + 8))) + ((float)((int)((int)(FUN_0c179ac0()) % (int)0x12C)) + -150.0f));
            FUN_0c14d34c(a4, ((int)stk + 0), 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12));
            *(unsigned short *)((a4 + 0x1E)) = 0x7;
            t23 = *(short *)((a4 + 0x1C));
            t24 = ((~(((~t23) + 0x1) & 0x1)) + 0x1);
            if ((int)t23 >= 0) {
                t24 = (t23 & 0x1);
            }
            if (t24 != 0) {
                FUN_0c059e60((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532498), 0x23);
            }
            t31 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t31 + 0x1);
            t44 = (short)(t31 + 0x1);
            if ((int)(short)(t31 + 0x1) >= (int)0xC) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t44 = 0x14;
            }
        }
    } else {
        t44 = (FUN_0c03f346(a4, a5, a6, a7));
    }
    return t44;
}

int FUN_0c135c10(int a4, int a5, int a6)
{

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R7;
    register int R8;
    register int R12;
    register float F2;
    register float F4;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register float w0_0;
    v0_0 = a4;
    v0_2 = *(signed char *)((v0_0 + 0x14));
    v0_1 = (v0_2);
    v0_0 = (v0_0);
    if ((v0_2 == 0)) goto L_C135C26;
    if ((v0_1 == 1)) goto L_C135C64;
    return FUN_0c03f346(v0_0, R5, a6, R7);
    L_C135C64:;
    v0_2 = *(signed char *)((v0_0 + 0x15));
    v0_1 = (v0_2);
    if ((v0_2 == 0)) goto L_C135C74;
    if (!((v0_1 == 1))) goto L_C135CF0;
    w0_0 = *(float *)0xC135D64;
    v0_1 = (((struct oC4_int *)(v0_0))->v);
    (((struct o18_float *)(v0_1))->v) = (((((struct o18_float *)(v0_1))->v)) - w0_0);
    v0_1 = (((struct oC4_int *)(v0_0))->v);
    (((struct o1C_float *)(v0_1))->v) = (((((struct o1C_float *)(v0_1))->v)) - w0_0);
    v0_1 = (((struct oC4_int *)(v0_0))->v);
    (((struct o20_float *)(v0_1))->v) = (((((struct o20_float *)(v0_1))->v)) - w0_0);
    w0_0 = (0.0f);
    if ((!(0.0f > ((((struct o18_float *)(((((struct oC4_int *)(v0_0))->v))))->v))))) goto L_C135CF0;
    (((struct o18_float *)(((((struct oC4_int *)(v0_0))->v))))->v) = w0_0;
    (((struct o1C_float *)(((((struct oC4_int *)(v0_0))->v))))->v) = w0_0;
    (((struct o20_float *)(((((struct oC4_int *)(v0_0))->v))))->v) = w0_0;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    goto L_C135CF0;
    L_C135CF0:;
    FUN_0c135bc8(v0_0);
    math_vec3_accumulate((v0_0 + 0x28), (v0_0 + 0x4C));
    return math_vec3_accumulate((v0_0 + 0x4C), (v0_0 + 0x58));
    L_C135C74:;
    v0_2 = *(signed char *)((v0_0 + 0x2));
    v0_1 = (v0_2);
    if ((v0_2 == 0)) goto L_C135C82;
    if ((v0_1 == 1)) goto L_C135C82;
    L_C135C82:;
    v0_1 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_1 - 1);
    if (((int)(short)(v0_1 - 1) > 0)) goto L_C135CF0;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    goto L_C135CF0;
    L_C135C26:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    *(unsigned short *)((v0_0 + 0x1E)) = 0x0;
    v0_2 = *(signed char *)((v0_0 + 0x2));
    v0_1 = (v0_2);
    if ((v0_2 == 0)) goto L_C135C5C;
    if ((v0_1 == 1)) goto L_C135C5C;
    L_C135C5C:;
    (((struct o50_float *)(v0_0))->v) = (1.0f + 1.0f);
    goto L_C135C64;
}

int FUN_0c1193c8(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    register int t2;
    register int t3;
    register int t4;

    t2 = *(int *)((a4 + 0x10));
    if ((*(signed char *)((t2 + 0x14))) == 80) {
        (((struct o14_uchar *)(a4))->v) = 0x63;
    }
    t3 = *(signed char *)((a4 + 0x14));
    if (t3 != 0) {
        if (t3 != 1) {
            if (t3 != 99) {
                return t3;
            }
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        *(volatile int *)((a4 + 0x10));
        t3 = ((int (*)(int, int, int))(FUN_0c187798))(t2, a5, a6);
        FUN_0c1171f0(a4);
        t3 = (((struct oC4_int *)(a4))->v);
        FUN_0c0588bc((t3 + 0x6C), 0xC291DBC, 0xC291DB0, (*(short *)(((0x41C + t2) + 0x8))), ((*(short *)(((0x41C + t2) + 0xE)))), 0x0);
        t4 = t3;
        if (((*(signed char *)(((*(int *)((a4 + 0x10))) + 0x2))) == 1) && (t0 = *(short *)(((0x41C + t2) + 0xE)), t0 == 0)) {
            t0 = (((struct oC4_int *)(a4))->v);
            FUN_0c0588bc((t0 + 0x6C), 0xC291DBC, 0xC291DB0, 0x0, 0x2, 0x0);
            t4 = t0;
        }
        return FUN_0c17c130((t4 + 0x6C), (t4 + 0x6C), (0x90 + t4));
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct oAC_ushort *)(a4))->v) = 0x1F;
    (((struct oA9_uchar *)(a4))->v) = 0x21;
    FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x8, 0xD, (*(int *)0xC4B410C));
    t0 = ((int (*)(int))(FUN_0c187798))(((((struct oC4_int *)(a4))->v)));
    *(volatile int *)((a4 + 0x10));
    t0 = ((int (*)(void))(FUN_0c187798))();
    FUN_0c1171f0(a4);
    t0 = (((struct oC4_int *)(a4))->v);
    FUN_0c0588bc((t0 + 0x6C), 0xC291DBC, 0xC291DB0, (*(short *)(((0x41C + t2) + 0x8))), ((*(short *)(((0x41C + t2) + 0xE)))), 0x0);
    t3 = t0;
    if (((*(signed char *)(((*(int *)((a4 + 0x10))) + 0x2))) == 1) && (t1 = *(short *)(((0x41C + t2) + 0xE)), t1 == 0)) {
        t0 = (((struct oC4_int *)(a4))->v);
        FUN_0c0588bc((t0 + 0x6C), 0xC291DBC, 0xC291DB0, 0x0, 0x2, 0x0);
        t3 = t0;
    }
    return FUN_0c17c130((t3 + 0x6C), (t3 + 0x6C), (0x90 + t3));
}

int FUN_0c14a3a8(int a4, int a5, int a6)
{

    register int R1;
    register int R2;
    register int R3;
    register int R7;
    register int R9;
    register int R10;
    register int R12;
    register float F2;
    register float F3;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register float w0_0;
    register float w0_1;
    v0_0 = a4;
    v0_3 = *(signed char *)((v0_0 + 0x14));
    v0_1 = (v0_3);
    v0_2 = (0x0);
    if ((v0_3 == 0)) goto L_C14A3BA;
    if ((v0_1 == 1)) goto L_C14A3C6;
    L_C14A4AC:;
    return v0_1;
    L_C14A3C6:;
    if (((*(signed char *)(((*(int *)((v0_0 + 0x10))) + 0x1B))) == 0)) goto L_C14A4A6;
    v0_3 = *(signed char *)((v0_0 + 0x15));
    v0_1 = (v0_3);
    w0_0 = (1.0f);
    w0_1 = (0.300000012f);
    if ((v0_3 == 0)) goto L_C14A3EE;
    if ((v0_1 == 1)) goto L_C14A3FA;
    if ((v0_1 == 2)) goto L_C14A44C;
    if ((v0_1 == 3)) goto L_C14A482;
    goto L_C14A4AC;
    L_C14A482:;
    w0_0 = (((struct o40_float *)(v0_0))->v);
    (((struct o40_float *)(v0_0))->v) = (w0_0 - w0_1);
    (((struct o44_float *)(v0_0))->v) = (w0_0 - w0_1);
    (((struct oB0_float *)(v0_0))->v) = (((((struct oB0_float *)(v0_0))->v)) - 0.100000001f);
    w0_0 = (((struct oB0_float *)(v0_0))->v);
    v0_1 = (0xB0);
    w0_1 = (w0_0);
    FPUL_ = (0x3DCCCCCD);
    if ((w0_0 > 0.0f)) goto L_C14A4AC;
    L_C14A4A6:;
    return FUN_0c03f346(v0_0, v0_2, a6, R7);
    L_C14A44C:;
    v0_1 = (((struct oC4_int *)(v0_0))->v);
    (((struct o80_uint *)(v0_1))->v) = (((((struct o80_int *)(v0_1))->v)) + 0x444);
    v0_1 = (((struct oC8_int *)(v0_0))->v);
    (((struct o80_uint *)(v0_1))->v) = (((((struct o80_int *)(v0_1))->v)) - 0x444);
    w0_1 = (((struct o48_float *)(v0_0))->v);
    (((struct o48_float *)(v0_0))->v) = (w0_1 + 0.0700000003f);
    v0_1 = (0x48);
    FPUL_ = (0x3D8F5C29);
    if ((w0_0 > (w0_1 + 0.0700000003f))) goto L_C14A4AC;
    L_C14A478:;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    v0_1 = (0x15);
    goto L_C14A4AC;
    L_C14A3FA:;
    v0_2 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_2 - 1);
    v0_1 = ((short)(v0_2 - 1));
    if (((int)(short)(v0_2 - 1) > 0)) goto L_C14A4AC;
    (((struct oA8_uchar *)(v0_0))->v) = 0x1;
    (((struct oB0_float *)(v0_0))->v) = w0_0;
    (((struct o44_float *)(v0_0))->v) = 4.0f;
    (((struct o40_float *)(v0_0))->v) = 4.0f;
    (((struct o48_float *)(v0_0))->v) = w0_1;
    goto L_C14A478;
    L_C14A3EE:;
    (((struct oA8_uchar *)(v0_0))->v) = v0_2;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    goto L_C14A3FA;
    L_C14A3BA:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    (((struct o15_uchar *)(v0_0))->v) = v0_2;
    goto L_C14A3C6;
}
