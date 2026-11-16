/* Straight-line functions with calls and guards (batch gen_lz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o168_float { char p[0x168]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o375E_uchar { char p[0x375E]; unsigned char v; };
struct o4_float { char p[0x4]; float v; };
struct o68_int { char p[0x68]; int v; };
struct o8_float { char p[0x8]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC_float { char p[0xC]; float v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c042fe0(void);
int FUN_0c0582ac(int, int);
int FUN_0c0588bc(int, int, int, int, int, int);
int FUN_0c058a6e(int, int, int, int, int, int);
int FUN_0c060c80(int, int, int);
int FUN_0c07bc8c(int);
int FUN_0c07bcc2(int);
float FUN_0c0e2220(int, int);
int FUN_0c0e2390(int, int, int);
int FUN_0c0f414e(int, int, int, int);
int FUN_0c1171f0(int);
int FUN_0c14672c(int, int, int);
int FUN_0c1468e8(int, int, int);
int FUN_0c146b30(int, int, int, int);
int FUN_0c146fa2(int, int);
int FUN_0c1502e8(int, int, int, int, int, int);
int FUN_0c17c130(int, int, int);
float FUN_0c17c450(int);
int FUN_0c187798(int, int, int);
float math_cos_angle16(int);
int math_mat_get_translate(int, int);
float math_sin_angle16(int);
int FUN_0c1085c8(int a4, int a5, int a6, int a7);
int FUN_0c1401aa(int a4, int a5, int a6, int a7);
int FUN_0c146fda(int a4);
int FUN_0c14fed8(int a4, int a5, int a6, float f4, float f5);
int FUN_0c07bdd0(int a4, int a5);
int FUN_0c144b8e(int a4, int a5, int a6, float f4, float f5);
int FUN_0c06130a(int a4, int a5, int a6, int a7);

int FUN_0c1085c8(int a4, int a5, int a6, int a7)
{
    int stk[6];
    register int t0;
    register int t11;
    register int t45;
    register int t57;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                t57 = t0;
                if (t0 != 99) {
                } else {
                    t57 = (FUN_0c03f346(a4, a5, a6, a7));
                }
            } else {
                if ((int)(*(short *)((a4 + 0x1C))) <= (int)0x8) {
                    *(int *)((int)stk + 4) = 0x0;
                    *(int *)((int)stk + 0) = 0x8;
                    FUN_0c058a6e((0xB0 + a4), 0xC290B48, 0xC290B58, (*(short *)((a4 + 0x1C))), 0x8, 0x0);
                    t11 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t11 + 0x1);
                    t57 = (t11 + 0x1);
                } else {
                    (((struct o14_uchar *)(a4))->v) = 0x63;
                    t57 = 0x14;
                }
            }
        } else {
            if ((int)(*(short *)((a4 + 0x1C))) <= (int)0x2) {
                *(int *)((int)stk + 4) = 0x0;
                *(int *)((int)stk + 0) = 0x2;
                FUN_0c058a6e((0xB0 + a4), 0xC290B58, 0xC290B48, (*(short *)((a4 + 0x1C))), 0x2, 0x0);
                t57 = ((*(short *)((a4 + 0x1C))) + 0x1);
            } else {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t57 = 0x0;
            }
            *(unsigned short *)((a4 + 0x1C)) = t57;
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0x61F;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        FUN_0c1171f0(a4);
        FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x7, 0xD, (*(int *)0xC4B410C));
        *(int *)((int)stk + 4) = 0x0;
        *(int *)((int)stk + 0) = 0x4;
        FUN_0c0588bc((((int)stk + 0) + 0xC), 0xC290B74, 0xC290B68, (*(signed char *)((a4 + 0x2))), 0x4, 0x0);
        t45 = (((struct oC4_int *)(a4))->v);
        *(unsigned int *)(((int)stk + 8)) = t45;
        FUN_0c17c130(((*(int *)(((int)stk + 8))) + 0x6C), (t45 + 0x6C), (((int)stk + 8) + 0x4));
        if ((int)(*(short *)((a4 + 0x1C))) <= (int)0x2) {
            *(int *)((int)stk + 4) = 0x0;
            *(int *)((int)stk + 0) = 0x2;
            FUN_0c058a6e((0xB0 + a4), 0xC290B58, 0xC290B48, (*(short *)((a4 + 0x1C))), 0x2, 0x0);
            t57 = ((*(short *)((a4 + 0x1C))) + 0x1);
        } else {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t57 = 0x0;
        }
        *(unsigned short *)((a4 + 0x1C)) = t57;
    }
    return t57;
}

int FUN_0c1401aa(int a4, int a5, int a6, int a7)
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
                return FUN_0c03f346(a4, 0xA, a6, a7);
            }
            t0 = (((struct oC4_int *)(a4))->v);
            u0 = (((struct o8C_float *)(t0))->v);
            (((struct o8C_float *)(t0))->v) = (u0 + 0.0500000007f);
            (((struct o88_float *)(t0))->v) = (u0 + 0.0500000007f);
            (((struct o84_float *)(t0))->v) = (u0 + 0.0500000007f);
            t0 = (((struct oC4_int *)(a4))->v);
            u0 = (((struct o20_float *)(t0))->v);
            (((struct o20_float *)(t0))->v) = (u0 - 0.100000001f);
            (((struct o1C_float *)(t0))->v) = (u0 - 0.100000001f);
            (((struct o18_float *)(t0))->v) = (u0 - 0.100000001f);
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
        (((struct o84_float *)(((((struct oC4_int *)(a4))->v))))->v) = 0.0f;
        (((struct o88_float *)(((((struct oC4_int *)(a4))->v))))->v) = 0.0f;
        (((struct o8C_float *)(((((struct oC4_int *)(a4))->v))))->v) = 0.0f;
        *(unsigned short *)((a4 + 0x1C)) = 0xA;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    t0 = (((struct oC4_int *)(a4))->v);
    u0 = (((struct o8C_float *)(t0))->v);
    (((struct o8C_float *)(t0))->v) = (u0 + 0.0500000007f);
    (((struct o88_float *)(t0))->v) = (u0 + 0.0500000007f);
    (((struct o84_float *)(t0))->v) = (u0 + 0.0500000007f);
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    t1 = (short)(t0 - 1);
    if ((short)(t0 - 1) == 0) {
        *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x21F;
        (((struct o18_float *)(((((struct oC4_int *)(a4))->v))))->v) = 1.0f;
        (((struct o1C_float *)(((((struct oC4_int *)(a4))->v))))->v) = 1.0f;
        (((struct o20_float *)(((((struct oC4_int *)(a4))->v))))->v) = 1.0f;
        *(unsigned short *)((a4 + 0x1C)) = 0xA;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t1 = 0x14;
    }
    return t1;
}

int FUN_0c146fda(int a4)
{

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R6;
    register int R7;
    register int R11;
    register float F3;
    register float F4;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    v0_0 = a4;
    v0_2 = *(signed char *)((v0_0 + 0x14));
    v0_3 = (v0_2);
    v0_1 = (v0_0);
    if ((v0_2 == 0)) goto L_C147018;
    if ((v0_3 == 1)) goto L_C147052;
    L_C1470DA:;
    return FUN_0c03f346(v0_1, R5, R6, R7);
    L_C147052:;
    v0_2 = (0xC2A261C);
    v0_3 = (0xC5421F8);
    if ((((int)((unsigned int)(*(int *)0xC542260) % (unsigned int)(*(int *)0xC2A2630))) != 0)) goto L_C147072;
    FUN_0c1468e8((*(signed char *)((v0_1 + 0x2))), (*(signed char *)((v0_1 + 0x1))), (v0_1 + 0x28));
    L_C147072:;
    if ((((int)((unsigned int)((((struct o68_int *)(v0_3))->v)) % (unsigned int)(*(int *)((v0_2 + 0x14))))) != 0)) goto L_C147094;
    FUN_0c146b30((*(signed char *)((v0_1 + 0x2))), (*(signed char *)((v0_1 + 0x1))), (v0_1 + 0x28), (0x1 & (*(short *)((v0_1 + 0x1C)))));
    L_C147094:;
    if ((((int)((unsigned int)((((struct o68_int *)(v0_3))->v)) % (unsigned int)(*(int *)((v0_2 + 0x18))))) != 0)) goto L_C1470B0;
    FUN_0c14672c((*(signed char *)((v0_1 + 0x2))), (*(signed char *)((v0_1 + 0x1))), (v0_1 + 0x28));
    L_C1470B0:;
    v0_0 = (v0_2);
    if ((((int)((unsigned int)((((struct o68_int *)(v0_3))->v)) % (unsigned int)(*(int *)((v0_2 + 0x1C))))) != 0)) goto L_C1470DA;
    v0_2 = ((v0_0 + 0x20));
    v0_3 = (0x0);
    L_C1470D4:;
    if (((int)v0_3 < (int)(*(int *)((v0_2 + 0x0))))) goto L_C1470C8;
    goto L_C1470DA;
    L_C1470C8:;
    FUN_0c146fa2((*(signed char *)((v0_1 + 0x1))), (v0_1 + 0x28));
    v0_3 = ((v0_3 + 0x1));
    goto L_C1470D4;
    L_C147018:;
    (((struct o14_uchar *)(v0_1))->v) = ((*(signed char *)((v0_1 + 0x14))) + 0x1);
    FUN_0c03744a(((((struct oC4_int *)(v0_1))->v)), 0x2, 0xB, (*(int *)(((((*(signed char *)((v0_1 + 0x2))) << 2) << 1) + 0xC4B40E0))));
    (((struct oA8_uchar *)(v0_1))->v) = 0x1;
    (((struct oAC_ushort *)(v0_1))->v) = 0xF;
    (((struct oA9_uchar *)(v0_1))->v) = 0x21;
    *(unsigned short *)((((((struct oC4_int *)(v0_1))->v)) + 0x6)) = 0x21F;
    goto L_C147052;
}

int FUN_0c14fed8(int a4, int a5, int a6, float f4, float f5)
{
    int stk[32];
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t6;
    register float u11;
    register float u14;
    register float u15;
    register float u17;
    register float t18;
    register float u19;
    register float u22;
    register float u23;
    register float u24;
    register float u25;
    register int t32;
    register int t34;
    register int t35;
    register int t38;
    register int t36;

    *(unsigned char *)(((int)stk + 16)) = a4;
    *(unsigned int *)(((int)stk + 12)) = a5;
    t1 = *(int *)((((short)(*(signed char *)(((int)stk + 16))) * (short)0x3938) + 0xC5324D0));
    *(unsigned int *)(((int)stk + 20)) = ((((int)stk + 8) + 0x18) + 0x60);
    *(unsigned int *)(((int)stk + 24)) = (((int)stk + 8) + 0x18);
    *(unsigned int *)(((int)stk + 28)) = 0xC2030D8;
    *(unsigned int *)(((int)stk + 8)) = 0x2;
    t2 = a4;
    t3 = a5;
    t4 = 0xC203058;
    for (;;) {
        t6 = (*(int *)(((int)stk + 24)));
        for (;;) {
            *(volatile int *)(((int)stk + 12));
            FUN_0c187798(t2, t3, a6);
            t2 = (t1 + 0x4000);
            u11 = ((math_sin_angle16(t2)) * ((((struct o4_float *)(t4))->v)));
            t2 = (t1 + 0x4000);
            u14 = *(float *)((t6 + 0x0));
            u15 = ((math_cos_angle16(t2)) * (*(float *)((t4 + 0x0))));
            u17 = (u15 * f5);
            *(float *)((t6 + 0x0)) = (u14 + (((u11 * f5)) - u17));
            *(int *)((int)stk + 4) = (0x8 + t6);
            t2 = (t1 + 0x4000);
            t18 = math_cos_angle16(t2);
            u19 = (((struct o4_float *)(t4))->v);
            t2 = (t1 + 0x4000);
            u22 = (((struct o8_float *)(t6))->v);
            u23 = ((math_sin_angle16(t2)) * (*(float *)((t4 + 0x0))));
            u24 = (t18 * u19);
            u25 = (u23 * f5);
            u25 = u25 + f5 * u24;
            (((struct o8_float *)(t6))->v) = (u22 + u25);
            (((struct o4_float *)(t6))->v) = (((((struct o4_float *)(t6))->v)) + ((f4 * 16.0f)));
            t6 = (t6 + 0xC);
            t4 = (t4 + 0x8);
            if ((unsigned int)t6 >= (unsigned int)(*(int *)(((int)stk + 20)))) {
                break;
            }
        }
        t3 = 0x8;
        t32 = (*(int *)(((int)stk + 28)));
        *(int *)((int)stk + 4) = t32;
        *(int *)((int)stk + 0) = 0xC202E68;
        t2 = (*(signed char *)(((int)stk + 16)));
        t34 = FUN_0c1502e8(t2, t3, 0x0, (((int)stk + 8) + 0x18), 0xC202E68, t32);
        t2 = t34;
        t35 = t34;
        if (t34 != 0) {
            t3 = 0x41C;
            t3 = (t3 + t2);
            (((struct o10_float *)(t3))->v) = f4;
            *(unsigned short *)((t2 + 0x1E)) = 0x0;
            t35 = 0x0;
            t36 = t3;
        }
        t38 = *(int *)(((int)stk + 8));
        t3 = t36;
        *(unsigned int *)(((int)stk + 8)) = (t38 - 1);
        if ((t38 - 1) == 0) {
            break;
        }
    }
    return t35;
}

int FUN_0c07bdd0(int a4, int a5)
{
    int stk[4];
    register int t2;
    register int t50;
    register int t3;
    register int t6;
    register int t7;
    register int t9;
    register int t10;
    register int t14;
    register int t17;
    register int t20;
    register int t22;
    register int t23;
    register int t27;
    register int t29;

    *(unsigned int *)(((int)stk + 0)) = a5;
    *(unsigned char *)(((int)stk + 12)) = (*(signed char *)0xC1C5DA0);
    *(unsigned char *)(((int)stk + 8)) = (*(signed char *)0xC1C5DA1);
    t2 = FUN_0c07bc8c(a4);
    t50 = t2;
    if (t2 == 0) {
        t3 = FUN_0c042fe0();
        t50 = t3;
        if (t3 != 0) {
            t50 = 0x3720;
            if ((*(signed char *)((a4 + 0x3720))) == 0) {
                t6 = FUN_0c07bcc2(a4);
                *(unsigned int *)(((int)stk + 4)) = t6;
                t50 = t6;
                if (t6 != 99) {
                    t7 = *(signed char *)((a4 + 0x1));
                    *(unsigned char *)(((0x4 + ((((t7 << 1) + t7) << 2) + 0xC471A9C)) + 0x0)) = 0x1;
                    t9 = *(signed char *)((a4 + 0x1));
                    t10 = *(int *)(((int)stk + 0));
                    *(unsigned char *)(((0x5 + ((((t9 << 1) + t9) << 2) + 0xC471A9C)) + 0x0)) = (*(signed char *)(((((t10 << 1) + (t10 << 2)) + 0xC25C160) + 0x0)));
                    t14 = *(signed char *)((a4 + 0x1));
                    *(unsigned char *)(((((((t14 << 1) + t14) << 2) + 0xC471A9C) + 0x6) + 0x0)) = (*(signed char *)(((((t10 << 1) + (t10 << 2)) + 0xC25C160) + 0x1)));
                    t17 = *(signed char *)((a4 + 0x1));
                    *(unsigned char *)(((((((t17 << 1) + t17) << 2) + 0xC471A9C) + 0x7) + 0x0)) = (*(signed char *)(((((t10 << 1) + (t10 << 2)) + 0xC25C160) + 0x2)));
                    t20 = *(signed char *)((a4 + 0x1));
                    *(unsigned char *)(((0x8 + ((((t20 << 1) + t20) << 2) + 0xC471A9C)) + 0x0)) = 0x0;
                    t22 = *(short *)(((((t10 << 1) + (t10 << 2)) + 0xC25C160) + 0x4));
                    t23 = t22;
                    if ((int)t22 > (int)0xFF) {
                        t23 = 0xFF;
                    }
                    *(unsigned char *)(((((int)stk + 0) + 0x8) + 0x0)) = t23;
                    FUN_0c0f414e((*(int *)(((int)stk + 4))), (((int)stk + 0) + 0xC), (((int)stk + 0) + 0x8), 0x1);
                    t27 = *(signed char *)((a4 + 0x1));
                    *(unsigned short *)((((((t27 << 1) + t27) << 2) + 0xC471A9C) + 0x0)) = 0x2;
                    t29 = *(signed char *)((a4 + 0x1));
                    t50 = *(short *)(((((t10 << 1) + (t10 << 2)) + 0xC25C160) + 0x4));
                    *(unsigned short *)(((0xC471A9C + (((t29 << 1) + t29) << 2)) + 0x2)) = t50;
                }
            }
        }
    }
    return t50;
}

int FUN_0c144b8e(int a4, int a5, int a6, float f4, float f5)
{
    int stk[6];
    register int t1;
    register int t2;
    register int t5;
    register float u7;
    register float u8;
    register int t0;
    register float u6;
    register float u9;
    float u13;

    t1 = a5;
    t2 = a6;
    t5 = 0x0;
    u7 = f4;
    u8 = f5;
    for (;;) {
        if ((int)t5 >= (int)0x4) {
            return 0x0;
        }
        if (t5 != (*(signed char *)((a4 + 0x1)))) {
            t1 = 0x3938;
            t2 = 0xC532498;
            t0 = (*(signed char *)((((t5 * t1) + t2) + 0x3714)));
            if ((t0 != 0) && (u13 = (((struct o160_float *)(((t5 * t1) + t2)))->v), u13 > 0.0f)) {
                t0 = 0xC187798;
                FUN_0c187798(((t5 * t1) + t2), t1, t2);
                t1 = ((int)stk + 0);
                u9 = 0.0f;
                t1 = (t1 + 0xC);
                *(float *)(((int)stk + 4)) = u9;
                math_mat_get_translate((a4 + 0x64), t1);
                t2 = ((int)stk + 0);
                t1 = ((int)stk + 0);
                *(float *)(((int)stk + 16)) = u9;
                t2 = (t2 + 0xC);
                FUN_0c0e2390((((int)stk + 0) + 0xC), t1, t2);
                u6 = (FUN_0c17c450((((int)stk + 0) + 0xC)));
                u7 = u6;
                u8 = ((((struct o0_float *)0xC144CCC)->v));
                if (!(u8 > u7)) {
                    u8 = ((((struct o4_float *)0xC144CCC)->v));
                    if (u8 > u7) {
                        *(float *)(((int)stk + 4)) = u9;
                        t1 = a4;
                        u7 = 1.0f;
                        t1 = (t1 + 0x64);
                        *(float *)(((int)stk + 0)) = u9;
                        *(float *)(((int)stk + 8)) = u7;
                        FUN_0c0582ac(((int)stk + 0), t1);
                        *(float *)(((int)stk + 4)) = u9;
                        u6 = (FUN_0c17c450(((int)stk + 0)));
                        u9 = ((((struct o10_float *)0xC144CCC)->v));
                        t1 = ((int)stk + 0);
                        u6 = (FUN_0c0e2220((((int)stk + 0) + 0xC), t1));
                        if (!(u9 > u6)) {
                            break;
                        }
                        t5 = (t5 + 0x1);
                        continue;
                    }
                    t5 = (t5 + 0x1);
                    continue;
                }
                break;
            }
            t5 = (t5 + 0x1);
            continue;
        }
        t5 = (t5 + 0x1);
    }
    *(unsigned short *)((a4 + 0x1E)) = t5;
    return 0x1;
}

int FUN_0c06130a(int a4, int a5, int a6, int a7)
{
    int stk[4];
    register int t1;
    register int t82;
    register float u2;
    register float u3;
    register float u4;
    register float u6;
    register float u7;
    register float u8;
    register float u10;
    register float u12;
    register float u20;
    register float u19;
    register float u55;
    register float u54;

    *(unsigned int *)(((int)stk + 0)) = a5;
    t1 = *(signed char *)((a4 + 0x0));
    t82 = (FUN_0c187798(a4, a5, a6));
    if (t1 == 0) {
        u2 = *(float *)((a7 + 0x0));
        u3 = *(float *)((a6 + 0x0));
        u4 = (u2 - u3);
        if (0.0f > (u2 - u3)) {
            u4 = ((-u2) + u3);
        }
        u6 = (((struct oC_float *)(a7))->v);
        u7 = (((struct o8_float *)(a7))->v);
        u8 = (((struct o8_float *)(a6))->v);
        u10 = (u7 - u8);
        if (0.0f > (u7 - u8)) {
            u10 = ((-u7) + u8);
        }
        u12 = (((struct o14_float *)(a7))->v);
        t82 = 0x14;
        if (0.0f > (u6 - u4)) {
            t82 = 0xC0613A4;
            if ((((((struct o2C_float *)(a4))->v)) - ((((struct o168_float *)(a4))->v))) > 2000.0f) {
                u20 = (u6 - u4);
                if ((*(float *)((a7 + 0x0))) > (*(float *)((a6 + 0x0)))) {
                    u19 = (u6 - u4);
                    u19 = -u19;
                    u20 = u19;
                }
                *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) + u20);
                FUN_0c060c80(a4, (((int)stk + 0) + 0x4), (*(int *)(((int)stk + 0))));
                (((struct o375E_uchar *)(a4))->v) = 0x1;
                t82 = 0x375E;
            }
        }
        if (0.0f > (u12 - u10)) {
            t82 = 0xC0614A8;
            if ((((((struct o2C_float *)(a4))->v)) - ((((struct o168_float *)(a4))->v))) > (*(float *)0xC0614A8)) {
                u55 = (u12 - u10);
                if (((((struct o8_float *)(a7))->v)) > ((((struct o8_float *)(a6))->v))) {
                    u54 = (u12 - u10);
                    u54 = -u54;
                    u55 = u54;
                }
                *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) + u55);
                FUN_0c060c80(a4, (((int)stk + 0) + 0x4), (*(int *)(((int)stk + 0))));
                (((struct o375E_uchar *)(a4))->v) = 0x1;
                t82 = 0x375E;
            }
        }
    }
    return t82;
}
