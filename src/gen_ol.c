/* Straight-line functions with calls and guards (batch gen_ol): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_short { short v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_uchar { char p[0x10]; unsigned char v; };
struct o118_int { char p[0x118]; int v; };
struct o14_float { char p[0x14]; float v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o168_float { char p[0x168]; float v; };
struct o17C_float { char p[0x17C]; float v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o23_uchar { char p[0x23]; unsigned char v; };
struct o24_uchar { char p[0x24]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o30_float { char p[0x30]; float v; };
struct o3715_uchar { char p[0x3715]; unsigned char v; };
struct o371A_uchar { char p[0x371A]; unsigned char v; };
struct o371C_uchar { char p[0x371C]; unsigned char v; };
struct o371D_uchar { char p[0x371D]; unsigned char v; };
struct o374A_uchar { char p[0x374A]; unsigned char v; };
struct o3760_int { char p[0x3760]; int v; };
struct o3770_int { char p[0x3770]; int v; };
struct o3774_int { char p[0x3774]; int v; };
struct o3780_float { char p[0x3780]; float v; };
struct o37B8_float { char p[0x37B8]; float v; };
struct o382E_ushort { char p[0x382E]; unsigned short v; };
struct o3864_int { char p[0x3864]; int v; };
struct o3C_float { char p[0x3C]; float v; };
struct o3C_uchar { char p[0x3C]; unsigned char v; };
struct o4_float { char p[0x4]; float v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o445_uchar { char p[0x445]; unsigned char v; };
struct o4C_float { char p[0x4C]; float v; };
struct o5_uchar { char p[0x5]; unsigned char v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o6_uchar { char p[0x6]; unsigned char v; };
struct o60_float { char p[0x60]; float v; };
struct o7_uchar { char p[0x7]; unsigned char v; };
struct o8_float { char p[0x8]; float v; };
struct o8_uchar { char p[0x8]; unsigned char v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o9_uchar { char p[0x9]; unsigned char v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA_uchar { char p[0xA]; unsigned char v; };
struct oA0_float { char p[0xA0]; float v; };
struct oC_uchar { char p[0xC]; unsigned char v; };
int FUN_0c015844(int, int, int, int, int, int, int, int, int);
int FUN_0c01a9c0(void);
int FUN_0c021f28(void);
int FUN_0c022050(void);
int FUN_0c0220c4(int, int, int);
int FUN_0c0221b0(void);
int FUN_0c0222a4(int, int, int);
int FUN_0c02a94e(void);
int FUN_0c02aa9e(void);
extern int FUN_0c036de8();
extern int FUN_0c037bf6();
int FUN_0c038362(int);
int FUN_0c039fbc(void);
int FUN_0c03b3fc(void);
extern int FUN_0c03d722();
int FUN_0c03ea04(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c03eff6(void);
extern int FUN_0c03f40c();
int FUN_0c05261c(int);
int FUN_0c0527e6(void);
int FUN_0c0573d8(void);
int FUN_0c059df2(int, int);
int FUN_0c059f20(int, int);
int FUN_0c064f80(int);
int FUN_0c067294(int, int);
int FUN_0c067734(int);
int FUN_0c073566(int, int);
int FUN_0c07363a(int, int);
int FUN_0c07c4b0(int, int);
int FUN_0c07d1fc(int);
int FUN_0c07daea(int, int, int);
int FUN_0c07db58(int, int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c080320(int, float);
int FUN_0c081dfc(int);
int FUN_0c085cac(int, int, int);
int FUN_0c085d0c(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0ae748(int);
int FUN_0c0bb6bc(int);
int FUN_0c13c890(int, int);
int FUN_0c14f238(int, int, int, int);
int FUN_0c15877c(int, int);
int FUN_0c1717bc(void);
int FUN_0c1717f0(int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c173370(void);
int FUN_0c173454(int);
int FUN_0c17b1a0(int);
int FUN_0c17e390(int);
int FUN_0c1864e0(int, int, int);
int FUN_0c186740(int, int, int);
extern int FUN_0c187798();
int FUN_0c187a88(int, int, int);
int FUN_0c187b48(int, int, int);
int FUN_0c187d74(int, int, int);
int game_reset_objects(void);
int gfx_set_background_color(int, int, int);
int math_mat_get_translate(int, int);
int math_vec3_accumulate(int, int);
int nlCalcPoint(int, int);
int nlCalcVector(int, int);
int nlInvertMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlScaleV(int);
int nlTranslateV(int);
int nlUnitMatrix(void);
int thunk_FUN_0c058310(int, int);
int FUN_0c02dca4(int a4, int a5, int a6);
int FUN_0c0aed00(int a4, int a5, int a6);
int FUN_0c0845da(int a4);
int FUN_0c027502(void);
int FUN_0c074602(int a4);
int FUN_0c09acb8(int a4, int a5, int a6, int a7);
int FUN_0c03d5e0(int a4, int a5, int a6, int a7);
int FUN_0c0270f8(void);
int FUN_0c173558(int a4, int a5, int a6);
int FUN_0c024ab2(void);

int FUN_0c02dca4(int a4, int a5, int a6)
{
    int stk[16];
    register int t9;
    register float u10;
    register float u11;
    register float u12;
    register float u13;
    register float u17;
    register float u20;

    FUN_0c187798(a4, a5, a6);
    if (!(((((struct o17C_float *)(a4))->v)) > 0.0f)) {
        *(float *)(((int)stk + 32)) = ((((struct o168_float *)(a4))->v));
    }
    *(unsigned int *)(((int)stk + 0)) = (*(int *)((a4 + 0x38)));
    FUN_0c17b1a0((a4 + 0x64));
    nlInvertMatrix(0x0);
    t9 = 0x0;
    u10 = 1000000.0f;
    u11 = 1000000.0f;
    u12 = -1000000.0f;
    u13 = -1000000.0f;
    for (;;) {
        math_mat_get_translate(((*(int *)((((0xC4 + a4) + t9) + 0x0))) + 0x28), (((int)stk + 0) + 0x28));
        nlCalcPoint((((int)stk + 0) + 0x28), (((int)stk + 0) + 0x34));
        u17 = *(float *)(((int)stk + 52));
        if (u17 > u12) {
            u12 = u17;
        }
        if (u10 > u17) {
            u10 = u17;
        }
        u20 = *(float *)(((int)stk + 60));
        if (u20 > u13) {
            u13 = u20;
        }
        t9 = (t9 + 0x4);
        if (u11 > u20) {
            u11 = u20;
        }
        if ((unsigned int)t9 >= (unsigned int)0x4C) {
            break;
        }
    }
    *(float *)(((int)stk + 16)) = ((u10 + u12) / (1.0f + 1.0f));
    *(float *)(((int)stk + 24)) = ((u11 + u13) / (1.0f + 1.0f));
    *(float *)(((int)stk + 20)) = 0.0f;
    *(float *)(((int)stk + 4)) = ((u12 - (*(float *)(((int)stk + 16)))) * 1.29999995f);
    *(float *)(((int)stk + 12)) = ((u13 - (*(float *)(((int)stk + 24)))) * 1.29999995f);
    *(float *)(((int)stk + 8)) = 1.0f;
    if (15.0f > (*(float *)(((int)stk + 4)))) {
        *(float *)(((int)stk + 4)) = 15.0f;
    }
    if (15.0f > (*(float *)(((int)stk + 12)))) {
        *(float *)(((int)stk + 12)) = 15.0f;
    }
    *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) / 100.0f);
    *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) / 100.0f);
    nlUnitMatrix();
    nlTranslateV((((int)stk + 0) + 0x1C));
    nlRotateAY((*(int *)(((int)stk + 0))));
    nlScaleV((((int)stk + 0) + 0x4));
    nlTranslateV((((int)stk + 0) + 0x10));
    return (FUN_0c17e390((*(int *)0xC542458)));
}

int FUN_0c0aed00(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;
    float u2;

    FUN_0c037bf6(a4, a5, a6);
    t1 = FUN_0c064f80(((((struct o3760_int *)(a4))->v)));
    if ((t1 != 0) && ((t0 = (((struct o3760_int *)(a4))->v), u0 = (((struct o2C_float *)(a4))->v), u1 = (((struct o2C_float *)(t0))->v), u0 > u1) && (u2 = (((struct o3780_float *)(a4))->v), 200.0f > u2))) {
        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((((struct o28_float *)(((((struct o3760_int *)(a4))->v))))->v)) - ((((struct o28_float *)(a4))->v))) / 6.0f));
        (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((((struct o30_float *)(((((struct o3760_int *)(a4))->v))))->v)) - ((((struct o30_float *)(a4))->v))) / 6.0f));
    }
    if ((*(signed char *)((a4 + 0x131))) != 0) {
        t0 = FUN_0c07d1fc(a4);
        if (t0 != 0) {
            t0 = *(signed char *)((a4 + 0x1));
            FUN_0c07e79c(a4, t0, 0x2, 0x5, (t0), 0x2, 0x5);
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            return FUN_0c0ae748(a4);
        }
    }
    t0 = FUN_0c07ecc6(a4, 0x0, 0x0);
    if (t0 != 0) {
        if (t0 == 2) {
            return FUN_0c085cac(a4, 0x6, 0x0);
        }
        t0 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t0, 0x2, 0x7, (t0), 0x2, 0x7);
        t0 = *(int *)(((0x118 + a4) + 0x4));
        t1 = (((struct o118_int *)(a4))->v);
        (((struct oA0_float *)(t0))->v) = 1.0f;
        (((struct o9C_float *)(t0))->v) = 1.0f;
        (((struct oA0_float *)(t1))->v) = 1.0f;
        (((struct o9C_float *)(t1))->v) = 1.0f;
        t0 = *(int *)(((0x118 + a4) + 0x4));
        t1 = (((struct o118_int *)(a4))->v);
        (((struct o98_float *)(t0))->v) = 1.0f;
        (((struct o98_float *)(t1))->v) = 1.0f;
        (((struct o94_float *)(t0))->v) = 1.0f;
        (((struct o94_float *)(t1))->v) = 1.0f;
        FUN_0c07daea(a4, t1, t0);
        (((struct o15_uchar *)(a4))->v) = 0x4;
        return 0x15;
    }
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    return math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
}

int FUN_0c0845da(int a4)
{
    int stk[10];
    register int t6;
    register int t7;
    register int t9;
    register int t10;
    register int t45;
    register int t36;

    (((struct o3715_uchar *)(a4))->v) = 0x19;
    FUN_0c067734(a4);
    FUN_0c07c4b0((*(signed char *)((a4 + 0x1))), 0xA);
    FUN_0c0bb6bc(a4);
    FUN_0c081dfc(a4);
    (((struct o371D_uchar *)(a4))->v) = 0x0;
    if ((*(signed char *)((a4 + 0x2))) != 14) {
        *(int *)((int)stk + 8) = 0x7;
        *(int *)((int)stk + 4) = 0x6;
        t6 = *(signed char *)((a4 + 0x1));
        *(unsigned int *)(((int)stk + 12)) = t6;
        t7 = t6;
        *(int *)((int)stk + 0) = t7;
        FUN_0c07e79c(a4, t6, 0x6, 0x7, t7, 0x6, 0x7);
    } else {
        *(int *)((int)stk + 8) = 0x32;
        *(int *)((int)stk + 4) = 0x6;
        t9 = *(signed char *)((a4 + 0x1));
        *(unsigned int *)(((int)stk + 12)) = t9;
        t10 = t9;
        *(int *)((int)stk + 0) = t10;
        FUN_0c07e79c(a4, t9, 0x6, 0x32, t10, 0x6, 0x32);
        FUN_0c080320(a4, (1.0f + 1.0f));
    }
    thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC53255C))) + 0x28), (((int)stk + 12) + 0x4));
    *(float *)(((int)stk + 16)) = ((*(float *)(((int)stk + 16))) - ((((struct o28_float *)(a4))->v)));
    *(float *)(((int)stk + 20)) = ((*(float *)(((int)stk + 20))) - ((((struct o2C_float *)(a4))->v)));
    *(float *)(((int)stk + 24)) = ((*(float *)(((int)stk + 24))) - ((((struct o30_float *)(a4))->v)));
    *(float *)(((int)stk + 20)) = ((*(float *)(((int)stk + 20))) + ((((struct o0_float *)0xC084790)->v)));
    FUN_0c15877c((*(signed char *)((a4 + 0x1))), (((int)stk + 12) + 0x4));
    FUN_0c059df2((*(signed char *)((a4 + 0x1))), 0x13);
    if ((*(signed char *)((a4 + 0x2))) == 9) {
        FUN_0c13c890(a4, 0x0);
    }
    *(unsigned short *)((a4 + 0x1C)) = 0x0;
    (((struct o382E_ushort *)(a4))->v) = 0x0;
    (((struct o374A_uchar *)(a4))->v) = 0x1;
    t45 = 0x3F;
    if ((*(signed char *)0xC542237) == 0) {
        t36 = *(signed char *)0xC54223C;
        t45 = t36;
        if (t36 == 1) {
            (((struct o371A_uchar *)(a4))->v) = 0x1;
            (((struct o371C_uchar *)(a4))->v) = 0x1;
            (((struct o37B8_float *)(a4))->v) = ((((struct o14_float *)0xC084790)->v));
            FUN_0c067294(a4, 0xC5421F8);
            t45 = (FUN_0c085d0c(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 12), *(int *)((int)stk + 12 + 4), *(int *)((int)stk + 12 + 8), *(int *)((int)stk + 12 + 12), *(int *)((int)stk + 12 + 16), *(int *)((int)stk + 12 + 20), *(int *)((int)stk + 12 + 24), *(int *)((int)stk + 12 + 28)));
        }
    }
    return t45;
}

int FUN_0c027502(void)
{
    int stk[36];

    register int R1;
    register int R2;
    register int R3;
    register int R6;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    v0_1 = FUN_0c022050();
    v0_0 = (v0_1);
    if ((v0_1 != 0)) goto L_C027524;
    L_C027652:;
    return v0_0;
    L_C027524:;
    FUN_0c0220c4((((int)stk + 0) + 0x8), ((int)stk + 0), (((int)stk + 0) + 0x4));
    v0_4 = *(signed char *)(((int)stk + 8));
    v0_0 = (0x0);
    v0_1 = ((((int)stk + 0) + 0x10));
    v0_2 = (0xC309994);
    v0_3 = (0xC1864E0);
    v0_5 = ((*(int *)0xC309994));
    v0_6 = (v0_4);
    v0_3 = (0x3);
    if ((v0_4 != 102)) goto L_C027632;
    if (((*(signed char *)(((int)stk + 4))) != 2)) goto L_C027586;
    FUN_0c1864e0(v0_5, ((int)stk + 0), 0x1);
    v0_4 = (v0_0);
    v0_5 = (0xC30A354);
    L_C02756A:;
    if (((int)v0_4 < (int)(unsigned char)(*(signed char *)(((int)stk + 0))))) goto L_C02755E;
    *(unsigned char *)((v0_4 + 0xC30A354)) = v0_0;
    *(unsigned char *)((v0_1 + 0x0)) = 0x76;
    *(unsigned int *)(((int)stk + 12)) = (v0_1 + 0x1);
    *(unsigned char *)(((v0_1 + 0x1) + 0x0)) = v0_3;
    v0_0 = (v0_3);
    L_C0275A8:;
    *(unsigned char *)((v0_1 + 0x2)) = v0_0;
    v0_0 = ((FUN_0c186740((*(int *)((v0_2 + 0x0))), v0_1, (*(signed char *)(((*(int *)(((int)stk + 12))) + 0x0))))));
    goto L_C027652;
    L_C02755E:;
    FUN_0c1864e0((*(int *)((v0_2 + 0x0))), (v0_4 + v0_5), 0x1);
    v0_4 = ((v0_4 + 0x1));
    goto L_C02756A;
    L_C027586:;
    if ((v0_6 != 102)) goto L_C027632;
    if (((*(signed char *)(((int)stk + 4))) != 3)) goto L_C0275E8;
    FUN_0c1864e0(v0_5, 0xC30A3E6, 0x1);
    *(unsigned char *)((v0_1 + 0x0)) = 0x76;
    *(unsigned int *)(((int)stk + 12)) = (v0_1 + 0x1);
    *(unsigned char *)(((v0_1 + 0x1) + 0x0)) = v0_3;
    v0_0 = (0x4);
    goto L_C0275A8;
    L_C0275E8:;
    if ((v0_6 != 102)) goto L_C027632;
    if (((*(signed char *)(((int)stk + 4))) != 4)) goto L_C027632;
    FUN_0c1864e0(v0_5, 0xC30A3E8, 0x1);
    FUN_0c1864e0((*(int *)((v0_2 + 0x0))), 0xC30A3E9, 0x1);
    FUN_0c1864e0((*(int *)((v0_2 + 0x0))), 0xC30A3EA, 0x1);
    FUN_0c1864e0((*(int *)((v0_2 + 0x0))), 0xC30A3EB, 0x1);
    FUN_0c1864e0((*(int *)((v0_2 + 0x0))), 0xC30A3EC, 0x1);
    v0_1 = FUN_0c1864e0((*(int *)((v0_2 + 0x0))), 0xC30A3ED, 0x1);
    *(unsigned char *)0xC30985A = ((*(signed char *)0xC30985A) + 0x1);
    (((struct o0_uchar *)0xC309993)->v) = v0_0;
    v0_0 = (v0_1);
    goto L_C027652;
    L_C027632:;
    if (((*(signed char *)0xC30AF9A) == 0)) goto L_C027644;
    v0_0 = ((FUN_0c02aa9e()));
    goto L_C027652;
    L_C027644:;
    v0_0 = ((FUN_0c0222a4((((int)stk + 0) + 0x8), ((int)stk + 0), (((int)stk + 0) + 0x4))));
    goto L_C027652;
}

int FUN_0c074602(int a4)
{
    int stk[6];
    int t7;
    register int t26;
    register int t17;

    nlUnitMatrix();
    *(float *)(((int)stk + 12)) = 0.0f;
    *(float *)(((int)stk + 16)) = 0.0f;
    *(float *)(((int)stk + 20)) = (*(float *)((((*(signed char *)((a4 + 0x373E))) << 2) + 0xC25AF24)));
    nlRotateAX((unsigned short)(int)((((-(float)(*(signed char *)((a4 + 0x373C)))) + 32.0f) * 737280.0f) / 360.0f));
    nlCalcVector((((int)stk + 0) + 0xC), ((int)stk + 0));
    nlUnitMatrix();
    t7 = *(signed char *)((a4 + 0x15));
    if ((t7 != 2) && (t7 != 3)) {
        if (((((struct o3774_int *)(a4))->v)) != 0) {
            t17 = ((int)(((float)((-(*(signed char *)((a4 + 0x373D)))) + 0x20) * 737280.0f) / 360.0f) + ((((struct o3864_int *)(a4))->v)));
        } else {
            t17 = ((int)(((float)((-(*(signed char *)((a4 + 0x373D)))) + 0x20) * 737280.0f) / 360.0f) + (*(int *)((a4 + 0x38))));
        }
        t26 = (t17 & 0xFFFF);
    } else {
        t26 = (((int)((((-(float)(*(signed char *)((a4 + 0x373D)))) + 32.0f) * 737280.0f) / 360.0f) + ((((struct o3864_int *)(a4))->v))) & 0xFFFF);
    }
    nlRotateAY(t26);
    nlCalcVector(((int)stk + 0), (((int)stk + 0) + 0xC));
    (((struct o4C_float *)(a4))->v) = (*(float *)(((int)stk + 12)));
    (((struct o50_float *)(a4))->v) = (*(float *)(((int)stk + 16)));
    (((struct o54_float *)(a4))->v) = (*(float *)(((int)stk + 20)));
    (((struct o60_float *)(a4))->v) = 0.0f;
    (((struct o58_float *)(a4))->v) = 0.0f;
    (((struct o5C_float *)(a4))->v) = -1.0f;
    return 0x5C;
}

int FUN_0c09acb8(int a4, int a5, int a6, int a7)
{
    int stk[8];

    register int R2;
    register int R3;
    register float F2;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    v0_5 = a4;
    v0_0 = a5;
    v0_1 = a6;
    v0_2 = a7;
    v0_3 = (0x1);
    v0_4 = (0xC037BF6);
    v0_4 = (v0_5);
    if (((*(short *)((v0_5 + 0x1C))) != 0)) goto L_C09AD46;
    v0_6 = (0x3770);
    if ((((((struct o3770_int *)(v0_4))->v)) != 0)) goto L_C09ACE0;
    v0_6 = ((FUN_0c085d0c(v0_4, v0_0, v0_1, v0_2, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28))));
    L_C09ADF4:;
    return v0_6;
    L_C09ACE0:;
    v0_5 = (unsigned char)(((int (*)(int, int, int))(FUN_0c037bf6))((*(int *)((v0_4 + v0_6))), v0_0, v0_1)) == 0;
    if (v0_5) goto L_C09AD30;
    *(unsigned short *)((v0_4 + 0x1C)) = v0_3;
    v0_5 = (((struct o3770_int *)(v0_4))->v);
    *(unsigned int *)(((int)stk + 0)) = v0_5;
    FUN_0c059f20((*(signed char *)(((*(int *)(((int)stk + 0))) + 0x1))), (*(signed char *)((v0_5 + 0x135))));
    FUN_0c073566(v0_4, 0x31);
    FUN_0c07363a(v0_4, 0x31);
    L_C09AD38:;
    v0_6 = (0x3770);
    if ((((((struct o3770_int *)(v0_4))->v)) == 0)) goto L_C09AD46;
    *(unsigned char *)(((*(int *)((v0_4 + v0_6))) + (v0_6 - 37))) = v0_3;
    L_C09AD46:;
    if (((*(short *)((v0_4 + 0x1E))) == 0)) goto L_C09ADCC;
    if (((int)(*(short *)((v0_4 + 0x1E))) > (int)0x3)) goto L_C09AD60;
    (((struct o2C_float *)(v0_4))->v) = (((((struct o2C_float *)(v0_4))->v)) - (1.0f + 1.0f));
    L_C09AD60:;
    v0_5 = *(short *)((v0_4 + 0x1E));
    *(unsigned short *)((v0_4 + 0x1E)) = (v0_5 - 1);
    if (((short)(v0_5 - 1) != 0)) goto L_C09ADCC;
    FUN_0c05261c((*(int *)0xC241C20));
    v0_6 = (0x3770);
    v0_5 = (v0_4);
    if ((((((struct o3770_int *)(v0_4))->v)) == 0)) goto L_C09AD84;
    (((struct o445_uchar *)((*(int *)((v0_4 + v0_6)))))->v) = v0_3;
    L_C09AD84:;
    FUN_0c07db58(v0_5, v0_0, v0_1);
    thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((v0_4 + 0x1))) * (short)0x3938) + 0xC53256C))) + 0x28), (((int)stk + 0) + 0x4));
    FUN_0c14f238((((int)stk + 0) + 0x4), (v0_4 + 0x34), (*(signed char *)((v0_4 + 0x1))), 0x3);
    FUN_0c059df2((*(signed char *)((v0_4 + 0x1))), 0x10);
    if ((((((struct o3770_int *)(v0_4))->v)) == 0)) goto L_C09ADCC;
    FUN_0c073566(v0_4, 0x30);
    L_C09ADCC:;
    v0_3 = (unsigned char)(((int (*)(int, int, int))(FUN_0c037bf6))(v0_4, v0_0, v0_1)) == 0;
    if (v0_3) goto L_C09ADEE;
    FUN_0c085d0c(v0_4, v0_0, v0_1, v0_2, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
    *(unsigned int *)((v0_4 + 0x38)) = (unsigned short)((*(int *)((v0_4 + 0x38))) + 0x8000);
    v0_6 = ((((int (*)(int))(FUN_0c037bf6))(v0_4)));
    goto L_C09ADF4;
    L_C09ADEE:;
    v0_6 = ((FUN_0c038362(v0_4)));
    goto L_C09ADF4;
    L_C09AD30:;
    FUN_0c038362(((((struct o3770_int *)(v0_4))->v)));
    goto L_C09AD38;
}

int FUN_0c03d5e0(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t0;
    register int t1;
    register int t3;
    register int t7;
    register int t8;
    register int t9;
    register int t10;
    register int t13;
    register int t14;
    register int t26;
    register int t28;
    register int t32;
    register int t33;
    register int t34;
    register int t35;
    register int t38;
    register int t39;

    t0 = *(signed char *)0xC541F41;
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 1) {
            return (unsigned char)t0;
        }
        t1 = *(signed char *)0xC3DC241;
        if (t1 != 0) {
            if (t1 != 1) {
                if (t1 != 2) {
                    if (t1 != 3) {
                        if (t1 != 4) {
                            if (t1 != 5) {
                                if (t1 != 6) {
                                    t3 = t1;
                                    if (t1 != 7) {
                                    } else {
                                        (((struct o24_uchar *)0xC3DC241)->v) = 0x0;
                                        (((struct o0_uchar *)0xC541F40)->v) = ((*(signed char *)0xC541F40) + 0x1);
                                        t3 = 0x25;
                                    }
                                    return t3;
                                }
                                (((struct o0_uchar *)0xC3DC241)->v) = 0x7;
                                (((struct o24_uchar *)0xC3DC241)->v) = 0x0;
                                (((struct o23_uchar *)0xC3DC241)->v) = 0x1;
                                return ((int (*)(int, int, int, int))(FUN_0c03f40c))(0x5, a5, a6, a7);
                            }
                            return ((int (*)(int, int, int, int))(FUN_0c03d722))(0xC3DC240, a5, a6, a7);
                        }
                        (((struct o24_uchar *)0xC3DC241)->v) = 0x0;
                        t7 = ((int (*)(int, int, int, int))(FUN_0c03f40c))(0x5, a5, a6, a7);
                        (((struct o0_uchar *)0xC3DC241)->v) = 0x5;
                        (((struct o1_uchar *)0xC3DC241)->v) = 0x0;
                        (((struct o2_uchar *)0xC3DC241)->v) = 0x0;
                        return 0x0;
                    }
                    t8 = ((int (*)(int, int, int, int))(FUN_0c03d722))(0xC3DC240, a5, a6, a7);
                    (((struct o24_uchar *)0xC3DC241)->v) = 0x0;
                    return 0x25;
                }
                (((struct o24_uchar *)0xC3DC241)->v) = 0x0;
                t9 = ((int (*)(int, int, int, int))(FUN_0c03f40c))(0x5, a5, a6, a7);
                (((struct o0_uchar *)0xC3DC241)->v) = 0x5;
                (((struct o1_uchar *)0xC3DC241)->v) = 0x0;
                (((struct o2_uchar *)0xC3DC241)->v) = 0x0;
                return 0x0;
            }
            t10 = ((int (*)(int, int, int, int))(FUN_0c03d722))(0xC3DC240, a5, a6, a7);
            (((struct o24_uchar *)0xC3DC241)->v) = 0x0;
            return 0x25;
        }
        FUN_0c03eff6();
        game_reset_objects();
        (((struct o8_uint *)0xC542440)->v) = 0x0;
        (((struct o4_uint *)0xC542440)->v) = 0x0;
        (((struct o0_uint *)0xC542440)->v) = 0x0;
        t13 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int, int))(FUN_0c036de8))(0x13, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
        t14 = *(signed char *)0xC5429A8;
        if (t14 == 2) {
            (((struct o0_uchar *)0xC3DC241)->v) = 0x3;
            (((struct o1_uchar *)0xC3DC241)->v) = 0xA;
            (((struct o2_uchar *)0xC3DC241)->v) = 0x0;
        } else {
            if (t14 == 0) {
                (((struct o0_uchar *)0xC3DC241)->v) = 0x1;
                (((struct o1_uchar *)0xC3DC241)->v) = 0x9;
                (((struct o2_uchar *)0xC3DC241)->v) = 0x0;
            } else {
                (((struct o0_uchar *)0xC3DC241)->v) = 0x5;
                (((struct o1_uchar *)0xC3DC241)->v) = 0x0;
                (((struct o2_uchar *)0xC3DC241)->v) = 0x0;
            }
        }
        return 0x0;
    }
    (((struct o1_uchar *)0xC541F40)->v) = ((*(signed char *)0xC541F41) + 0x1);
    FUN_0c187b48(0xC3DC240, 0x0, 0x28);
    gfx_set_background_color(0xFF000000, 0xFF000000, 0xFF000000);
    FUN_0c03eff6();
    FUN_0c0573d8();
    FUN_0c03ea04(0x3, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
    FUN_0c0527e6();
    game_reset_objects();
    FUN_0c03b3fc();
    *(int *)((int)stk + 8) = 0xFF000000;
    t26 = *(signed char *)0xC3DC241;
    if (t26 != 0) {
        if (t26 != 1) {
            if (t26 != 2) {
                if (t26 != 3) {
                    if (t26 != 4) {
                        if (t26 != 5) {
                            if (t26 != 6) {
                                t28 = t26;
                                if (t26 != 7) {
                                } else {
                                    (((struct o24_uchar *)0xC3DC241)->v) = 0x0;
                                    (((struct o0_uchar *)0xC541F40)->v) = ((*(signed char *)0xC541F40) + 0x1);
                                    t28 = 0x25;
                                }
                                return t28;
                            }
                            (((struct o0_uchar *)0xC3DC241)->v) = 0x7;
                            (((struct o24_uchar *)0xC3DC241)->v) = 0x0;
                            (((struct o23_uchar *)0xC3DC241)->v) = 0x1;
                            return ((int (*)(int))(FUN_0c03f40c))(0x5);
                        }
                        return ((int (*)(int))(FUN_0c03d722))(0xC3DC240);
                    }
                    (((struct o24_uchar *)0xC3DC241)->v) = 0x0;
                    t32 = ((int (*)(int))(FUN_0c03f40c))(0x5);
                    (((struct o0_uchar *)0xC3DC241)->v) = 0x5;
                    (((struct o1_uchar *)0xC3DC241)->v) = 0x0;
                    (((struct o2_uchar *)0xC3DC241)->v) = 0x0;
                    return 0x0;
                }
                t33 = ((int (*)(int))(FUN_0c03d722))(0xC3DC240);
                (((struct o24_uchar *)0xC3DC241)->v) = 0x0;
                return 0x25;
            }
            (((struct o24_uchar *)0xC3DC241)->v) = 0x0;
            t34 = ((int (*)(int))(FUN_0c03f40c))(0x5);
            (((struct o0_uchar *)0xC3DC241)->v) = 0x5;
            (((struct o1_uchar *)0xC3DC241)->v) = 0x0;
            (((struct o2_uchar *)0xC3DC241)->v) = 0x0;
            return 0x0;
        }
        t35 = ((int (*)(int))(FUN_0c03d722))(0xC3DC240);
        (((struct o24_uchar *)0xC3DC241)->v) = 0x0;
        return 0x25;
    }
    FUN_0c03eff6();
    game_reset_objects();
    (((struct o8_uint *)0xC542440)->v) = 0x0;
    (((struct o4_uint *)0xC542440)->v) = 0x0;
    (((struct o0_uint *)0xC542440)->v) = 0x0;
    t38 = ((int (*)(int, int, int, int, int))(FUN_0c036de8))(0x13, 0x0, 0x0, 0x0, 0xFF000000);
    t39 = *(signed char *)0xC5429A8;
    if (t39 == 2) {
        (((struct o0_uchar *)0xC3DC241)->v) = 0x3;
        (((struct o1_uchar *)0xC3DC241)->v) = 0xA;
        (((struct o2_uchar *)0xC3DC241)->v) = 0x0;
    } else {
        if (t39 == 0) {
            (((struct o0_uchar *)0xC3DC241)->v) = 0x1;
            (((struct o1_uchar *)0xC3DC241)->v) = 0x9;
            (((struct o2_uchar *)0xC3DC241)->v) = 0x0;
        } else {
            (((struct o0_uchar *)0xC3DC241)->v) = 0x5;
            (((struct o1_uchar *)0xC3DC241)->v) = 0x0;
            (((struct o2_uchar *)0xC3DC241)->v) = 0x0;
        }
    }
    return 0x0;
}

int FUN_0c0270f8(void)
{
    int stk[36];
    register int t2;
    register int t3;
    register int t5;
    register int t20;
    register int t22;
    register int t27;
    register int t29;
    int t9;

    if ((*(int *)0xC30A3F8) != 0) {
        return (FUN_0c02a94e());
    }
    t2 = FUN_0c022050();
    if (t2 == 0) {
        t3 = FUN_0c021f28();
        t5 = t3;
        if (t3 == 0) {
            t5 = (FUN_0c015844(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16)));
        }
        return t5;
    }
    FUN_0c0220c4(((int)stk + 0), (((int)stk + 0) + 0x8), (((int)stk + 0) + 0x4));
    if (((*(signed char *)(((int)stk + 0))) == 101) && (t9 = *(signed char *)(((int)stk + 4)), t9 == 6)) {
        FUN_0c0221b0();
        if ((*(signed char *)0xC30542B) != 0) {
            *(unsigned int *)0xC30A3F8 = 0x1;
            return (FUN_0c01a9c0());
        }
        (((struct o10_uchar *)(((int)stk + 0)))->v) = 0x75;
        *(unsigned int *)(((int)stk + 12)) = ((((int)stk + 0) + 0x10) + 0x1);
        *(unsigned char *)((((((int)stk + 0) + 0x10) + 0x1) + 0x0)) = 0xA;
        *(unsigned char *)(((((int)stk + 0) + 0x10) + 0x2)) = 0x6;
        FUN_0c187a88(((((int)stk + 0) + 0x10) + 0x3), 0xC30A34C, 0x6);
        *(unsigned char *)(((((int)stk + 0) + 0x10) + 0x9)) = 0x2;
        FUN_0c186740((*(int *)0xC309994), (((int)stk + 0) + 0x10), (*(signed char *)(((*(int *)(((int)stk + 12))) + 0x0))));
        t20 = FUN_0c021f28();
        t22 = t20;
        if (t20 == 0) {
            t22 = (FUN_0c015844(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16)));
        }
        return t22;
    }
    if ((*(signed char *)0xC30AF9A) != 0) {
        return (FUN_0c02aa9e());
    }
    FUN_0c0222a4(((int)stk + 0), (((int)stk + 0) + 0x8), (((int)stk + 0) + 0x4));
    t27 = FUN_0c021f28();
    t29 = t27;
    if (t27 == 0) {
        t29 = (FUN_0c015844(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16)));
    }
    return t29;
}

int FUN_0c173558(int a4, int a5, int a6)
{
    int stk[10];
    register int t0;
    register int t1;

    t0 = ((int (*)(int, int, int))(FUN_0c187798))(a4, a5, a6);
    t1 = ((int (*)(void))(FUN_0c187798))();
    FUN_0c03eff6();
    *(unsigned char *)0xC542237 = 0x0;
    (((struct o0_uchar *)0xC535BAC)->v) = 0x1;
    (((struct o0_uchar *)0xC5394E4)->v) = 0x1;
    (((struct o0_uchar *)0xC53CE1C)->v) = 0x1;
    (((struct o0_uchar *)0xC540754)->v) = 0x1;
    (((struct o1_uchar *)0xC475DBC)->v) = 0x0;
    (((struct o2_uchar *)0xC475DBC)->v) = 0x1;
    (((struct o6_uchar *)0xC475DBC)->v) = 0x0;
    (((struct o3_uchar *)0xC475DBC)->v) = 0x0;
    (((struct o4_uchar *)0xC475DBC)->v) = 0x0;
    (((struct o5_uchar *)0xC475DBC)->v) = 0x0;
    (((struct o8_uchar *)0xC475DBC)->v) = 0x1;
    (((struct o9_uchar *)0xC475DBC)->v) = 0x0;
    (((struct o7_uchar *)0xC475DBC)->v) = 0x0;
    (((struct o0_uchar *)0xC475DBC)->v) = 0x0;
    FUN_0c173370();
    FUN_0c1717bc();
    FUN_0c1717f0(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
    FUN_0c03ea04(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
    (((struct o8_float *)0xC5410B8)->v) = 0.0f;
    (((struct o0_float *)0xC5410B8)->v) = 0.0f;
    (((struct o4_float *)0xC5410B8)->v) = -1.0f;
    (((struct oA_uchar *)0xC535BAC)->v) = 0x0;
    (((struct oA_uchar *)0xC5394E4)->v) = 0x1;
    (((struct oA_uchar *)0xC53CE1C)->v) = 0x2;
    (((struct oA_uchar *)0xC540754)->v) = 0x3;
    (((struct o3C_float *)0xC5325BC)->v) = 1000.0f;
    (((struct o3C_float *)0xC535EF4)->v) = 1000.0f;
    *(float *)0xC539868 = 1000.0f;
    *(float *)0xC53D1A0 = 1000.0f;
    *(unsigned int *)(((int)stk + 12)) = 0xC475DC8;
    (((struct oC_uchar *)0xC475DBC)->v) = 0x0;
    *(unsigned int *)(((int)stk + 0)) = 0xC475E20;
    *(unsigned char *)0xC475E20 = 0x0;
    *(unsigned int *)(((int)stk + 4)) = 0xC475E78;
    *(unsigned char *)0xC475E78 = 0x3;
    *(unsigned int *)(((int)stk + 8)) = 0xC475ED0;
    *(unsigned char *)0xC475ED0 = 0x3;
    FUN_0c173454(0x0);
    FUN_0c173454(0x1);
    FUN_0c173454(0x2);
    FUN_0c173454(0x3);
    FUN_0c039fbc();
    (((struct o3C_uchar *)((*(int *)(((int)stk + 12)))))->v) = 0x0;
    (((struct o3C_uchar *)((*(int *)(((int)stk + 0)))))->v) = 0x0;
    (((struct o3C_uchar *)((*(int *)(((int)stk + 4)))))->v) = 0x0;
    (((struct o3C_uchar *)((*(int *)(((int)stk + 8)))))->v) = 0x0;
    *(unsigned char *)0xC532540 = 0x1;
    (((struct o0_uchar *)0xC5325BC)->v) = 0x1;
    *(unsigned char *)0xC535E78 = 0x1;
    (((struct o0_uchar *)0xC535EF4)->v) = 0x1;
    *(unsigned char *)0xC5397B0 = 0x0;
    *(unsigned char *)0xC53D0E8 = 0x0;
    *(unsigned char *)0xC541F44 = ((*(signed char *)0xC541F44) + 0x1);
    return 0xA8;
}

int FUN_0c024ab2(void)
{
    int stk[35];
    register int t0;
    register int t34;
    register int t2;
    register int t14;
    int t3;
    int t26;

    t0 = FUN_0c022050();
    t34 = t0;
    if (t0 != 0) {
        FUN_0c0220c4((((int)stk + 0) + 0x4), (((int)stk + 0) + 0x8), ((int)stk + 0));
        t2 = *(signed char *)(((int)stk + 4));
        if ((t2 == 96) && (t3 = *(signed char *)(((int)stk + 0)), t3 == 4)) {
            FUN_0c1864e0((*(int *)0xC309994), 0xC309BC6, 0x1);
            FUN_0c1864e0((*(int *)0xC309994), 0xC309BC7, 0x1);
            FUN_0c1864e0((*(int *)0xC309994), 0xC30A3F4, 0x1);
            FUN_0c1864e0((*(int *)0xC309994), 0xC30A3F5, 0x1);
            t14 = (((struct o0_short *)0xC30A3F4)->v);
            if ((int)(*(signed char *)0xC30A348) > (int)(t14 - 9)) {
                (((struct o2_uchar *)0xC30A346)->v) = (((*(signed char *)0xC30A3F4) - ((int)((int)t14 % (int)0xA))) + 0x1);
            }
            (((struct o0_uchar *)0xC30A346)->v) = ((int)((int)(((((struct o0_short *)0xC30A3F4)->v)) - 1) / (int)0xA));
            *(unsigned char *)0xC30985A = ((*(signed char *)0xC30985A) + 0x1);
            t34 = (FUN_0c187d74(0xC3053B8, 0xC1A8C0C, 0xA));
        } else {
            if ((t2 == 101) && (t26 = *(signed char *)(((int)stk + 0)), t26 == 6)) {
                FUN_0c0221b0();
                (((struct o4_uint *)0xC30A3F4)->v) = 0x1;
                t34 = (FUN_0c01a9c0());
            } else {
                t34 = (FUN_0c0222a4((((int)stk + 0) + 0x4), (((int)stk + 0) + 0x8), ((int)stk + 0)));
            }
        }
    }
    return t34;
}
