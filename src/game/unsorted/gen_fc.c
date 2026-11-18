/* Straight-line functions with calls and guards (batch gen_fc): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
typedef struct { int w[8]; } Stk8;
struct o0_float { float v; };
struct o0_int { int v; };
struct o10_float { char p[0x10]; float v; };
struct o10_int { char p[0x10]; int v; };
struct o135_uchar { char p[0x135]; unsigned char v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o166_uchar { char p[0x166]; unsigned char v; };
struct o16B_uchar { char p[0x16B]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o34_int { char p[0x34]; int v; };
struct o3714_uchar { char p[0x3714]; unsigned char v; };
struct o3719_uchar { char p[0x3719]; unsigned char v; };
struct o3720_uchar { char p[0x3720]; unsigned char v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o78_int { char p[0x78]; int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oD0_int { char p[0xD0]; int v; };
struct oD4_int { char p[0xD4]; int v; };
struct oDC_int { char p[0xDC]; int v; };
struct oE0_int { char p[0xE0]; int v; };
struct oE4_int { char p[0xE4]; int v; };
int FUN_0c036de8(int);
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03744a(int, int, int, int);
extern int FUN_0c03f346();
int FUN_0c03f444(int, int, int);
int FUN_0c0497d8(void);
int FUN_0c0498d8(void);
int FUN_0c04b23c(int, int, int, int);
int FUN_0c04c87c(int);
int FUN_0c0588bc(int, int, int, int, int, int);
int FUN_0c058a6e(int, int, int, int, int, int);
int FUN_0c05950c(void);
int FUN_0c059536(int);
int FUN_0c0595a4(int);
int FUN_0c059946(int);
int FUN_0c059e9a(int, int, int);
int FUN_0c05ffa4(int, int, int);
int FUN_0c05ffe2(int, int, int, int);
int FUN_0c060180(int, int, int);
int FUN_0c060428(int, int);
int FUN_0c060c80(int, int, int);
int FUN_0c0612ee(int);
int FUN_0c06130a(int, int, int, int);
int FUN_0c06780e(int);
int FUN_0c06785c(void);
int FUN_0c07e3ae(int, int);
int FUN_0c0bb244(void);
int FUN_0c0c2ab6(int, int);
int FUN_0c0c2ce4(int);
int FUN_0c0c2d56(int, int, int);
int FUN_0c1171f0(int);
int FUN_0c15aed8(int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int nlAddVector3op(int, int, int);
int nlRand(void);
int thunk_FUN_0c05abb2(int, int);
int FUN_0c16f454(int a4, int a5, int a6);
int FUN_0c059a28(int a4);
int FUN_0c062f0a(int a4, int a5, int a6);
int FUN_0c0e4dac(int a4, int a5);
void FUN_0c04a69a(void);
int FUN_0c04c270(int a4);
int FUN_0c0d2880(int a4, int a5, int a6, float f4);
int FUN_0c063f4a(int a4);
int FUN_0c0cba00(int a4);
int FUN_0c04c6c4(int a4, int a5, int a6, int a7);
void FUN_0c136de4(int a4, int a5, int a6, int a7);

int FUN_0c16f454(int a4, int a5, int a6)
{
    int stk[4];
    register int t1;
    register int t30;
    register int t2;
    register int t5;
    register int t28;
    register int t12;
    register int t14;
    register float t15;
    register int t23;
    register int t24;
    register int t3;
    register float u4;

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 12)) = a5;
    *(unsigned int *)(((int)stk + 8)) = a6;
    t1 = FUN_0c037320(0x1D, (*(int *)0xC4B40D8));
    t30 = t1;
    if ((int)t1 < 0) {
    } else {
        t2 = 0x4;
        for (;;) {
            t5 = FUN_0c03f444(0x1, 0x0, 0x1);
            t28 = t5;
            if (t5 == 0) {
            } else {
                *(unsigned char *)((t5 + 0x1)) = (*(signed char *)(((*(int *)(((int)stk + 4))) + 0x1)));
                *(unsigned char *)((t5 + 0x2)) = (*(signed char *)(((int)stk + 8)));
                *(unsigned int *)((t5 + 0x4)) = 0xC16F354;
                (((struct oA8_uchar *)(t5))->v) = 0x1;
                (((struct oAC_ushort *)(t5))->v) = 0x1F;
                (((struct oA9_uchar *)(t5))->v) = 0x21;
                (((struct o48_float *)(t5))->v) = 1.0f;
                (((struct o44_float *)(t5))->v) = 1.0f;
                (((struct o40_float *)(t5))->v) = 1.0f;
                { struct mv3 { int w[3]; }; *(struct mv3 *)((t5 + 0x28)) = *(struct mv3 *)((*(int *)(((int)stk + 12)))); }
                t12 = (*(int *)(((*(int *)(((int)stk + 4))) + 0x38)));
                *(int *)((int)stk + 0) = t12;
                t14 = (int)((int)(nlRand()) % (int)0x41);
                *(unsigned int *)((t5 + 0x38)) = ((int)(((float)t14 * 65536.0f) / 360.0f) + t12);
                u4 = 4.4000001f;
                t15 = math_sin_angle16(((int)(((float)t14 * 65536.0f) / 360.0f) + t12));
                (((struct o4C_float *)(t5))->v) = (t15 * u4);
                (((struct o54_float *)(t5))->v) = ((math_cos_angle16((*(int *)((t5 + 0x38))))) * u4);
                (((struct o60_float *)(t5))->v) = 0.0f;
                (((struct o58_float *)(t5))->v) = 0.0f;
                (((struct o50_float *)(t5))->v) = ((float)((int)((int)(nlRand()) % (int)0xF)) + 10.0f);
                (((struct o5C_float *)(t5))->v) = -1.0f;
                *(unsigned short *)((t5 + 0x1C)) = 0x0;
                t3 = ((((struct oC4_int *)(t5))->v));
                FUN_0c03744a(t3, 0x1, 0x1D, (*(int *)0xC4B40D8));
                *(unsigned char *)((t3 + 0x0)) = 0x1;
                *(unsigned short *)((t3 + 0x6)) = 0x1F;
                t23 = nlRand();
                t24 = ((~(((~t23) + 0x1) & 0x3)) + 0x1);
                if ((int)t23 >= 0) {
                    t24 = (t23 & 0x3);
                }
                (((struct o8C_float *)(t3))->v) = (((float)t24 / 10.0f) + 0.699999988f);
                (((struct o88_float *)(t3))->v) = (((float)t24 / 10.0f) + 0.699999988f);
                (((struct o84_float *)(t3))->v) = (((float)t24 / 10.0f) + 0.699999988f);
                FUN_0c07e3ae(t5, 0xA7);
                t28 = (FUN_0c0c2ab6(t5, 0x3E));
            }
            t2 = (t2 - 0x1);
            if (t2 != 0) continue;
            break;
        }
        t30 = t28;
    }
    return t30;
}

int FUN_0c059a28(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        t0 = *(signed char *)((a4 + 0x15));
        if (t0 != 0) {
            if (t0 != 1) {
                if (t0 != 2) {
                    return t0;
                }
                return FUN_0c059946(a4);
            }
            return FUN_0c0595a4(a4);
        }
        return FUN_0c059536(a4);
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct o15_uchar *)(a4))->v) = 0x0;
    (((struct oA8_uchar *)(a4))->v) = 0x0;
    (((struct oAC_ushort *)(a4))->v) = 0x1F;
    (((struct oA9_uchar *)(a4))->v) = 0x21;
    (((struct o30_float *)(a4))->v) = -4.0f;
    FUN_0c1171f0(a4);
    t0 = *(signed char *)((a4 + 0x2));
    FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x0, (*(int *)((0xC242280 + (((t0 << 2) + t0) << 2)))), (*(int *)0xC4B4110));
    t0 = 0x0;
    for (;;) {
        if ((int)t0 >= (int)(*(int *)((0xC2421CC + ((*(signed char *)((a4 + 0x2))) << 2))))) {
            break;
        }
        t1 = *(signed char *)((a4 + 0x2));
        t2 = t0;
        t2 = (t2 << 2);
        FUN_0c03744a((*(int *)((((0xC4 + a4) + t2) + 0x8))), 0x0, (*(int *)((((0xC242280 + (((t1 << 2) + t1) << 2)) + t2) + 0x4))), (*(int *)0xC4B4110));
        t1 = 0x70;
        t0 = (t0 + 0x1);
        t1 = (t1 + (*(int *)((((0xC4 + a4) + t2) + 0x8))));
        *(float *)((t1 + 0x0)) = ((*(float *)((t2 + 0xC2421BC))));
    }
    (((struct o70_float *)(((((struct oD4_int *)(a4))->v))))->v) = (*(float *)0xC2421C4);
    FUN_0c03744a(((((struct oDC_int *)(a4))->v)), 0x0, 0x1D, (*(int *)0xC4B4110));
    *(unsigned char *)((((((struct oDC_int *)(a4))->v)) + 0x0)) = 0x0;
    FUN_0c03744a(((((struct oE0_int *)(a4))->v)), 0x0, 0x1B, (*(int *)0xC4B4110));
    *(unsigned short *)((((((struct oE0_int *)(a4))->v)) + 0x6)) = 0x40F;
    *(unsigned char *)((((((struct oE0_int *)(a4))->v)) + 0x0)) = 0x0;
    FUN_0c03744a(((((struct oE4_int *)(a4))->v)), 0x0, 0x11, (*(int *)0xC4B4110));
    *(unsigned short *)((((((struct oE4_int *)(a4))->v)) + 0x6)) = 0x21F;
    { struct mv4 { int w[4]; }; *(struct mv4 *)((((((struct oE4_int *)(a4))->v)) + 0x14)) = *(struct mv4 *)(0xC24230C); }
    *(unsigned int *)((a4 + 0x10)) = (FUN_0c05950c());
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            return FUN_0c059946(a4);
        }
        return FUN_0c0595a4(a4);
    }
    return FUN_0c059536(a4);
}

int FUN_0c062f0a(int a4, int a5, int a6)
{
    int stk[6];
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u6;
    register float u7;
    register float u8;
    register float u9;
    register float u11;
    register float u13;
    register float u14;
    register float u15;
    register float u16;
    register float u18;
    register int t146;
    register int t23;
    register float u62;
    register float u99;
    register float u21;
    float u22;
    register float u63;
    register float u64;
    float u100;
    register float u113;
    register float u119;
    register float u130;

    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)(0xC1C4B30); }
    u0 = (((struct o8_float *)(a4))->v);
    u1 = (((struct o8_float *)(a6))->v);
    u2 = (((struct oC_float *)((a6 + 0x8)))->v);
    u3 = (((struct oC_float *)((a4 + 0x8)))->v);
    u4 = (u0 - u1);
    if (0.0f > (u0 - u1)) {
        u4 = ((-u0) + u1);
    }
    (((struct oC_float *)(((int)stk + 0)))->v) = ((u3 + u2) - u4);
    u6 = (((struct o10_float *)((a4 + 0x8)))->v);
    u7 = (((struct o10_float *)((a6 + 0x8)))->v);
    u8 = (((struct o4_float *)((a4 + 0x8)))->v);
    u9 = (((struct o4_float *)((a6 + 0x8)))->v);
    u11 = (u8 - u9);
    if (0.0f > (u8 - u9)) {
        u11 = ((-u8) + u9);
    }
    (((struct o4_float *)((((int)stk + 0) + 0xC)))->v) = ((u6 + u7) - u11);
    u13 = (((struct o14_float *)((a4 + 0x8)))->v);
    u14 = (((struct o14_float *)((a6 + 0x8)))->v);
    u15 = (((struct o8_float *)((a4 + 0x8)))->v);
    u16 = (((struct o8_float *)((a6 + 0x8)))->v);
    u18 = (u15 - u16);
    if (0.0f > (u15 - u16)) {
        u18 = ((-u15) + u16);
    }
    (((struct o8_float *)((((int)stk + 0) + 0xC)))->v) = ((u13 + u14) - u18);
    t146 = 0x0;
    if ((((((struct oC_float *)(((int)stk + 0)))->v)) > 0.0f) && ((u21 = (((struct o8_float *)((((int)stk + 0) + 0xC)))->v), u21 > 0.0f) && (u22 = (((struct o4_float *)((((int)stk + 0) + 0xC)))->v), u22 > 0.0f))) {
        t23 = FUN_0c0612ee(a5);
        if (t23 != 0) {
            (((struct o135_uchar *)(a5))->v) = (*(signed char *)((a4 + 0x4)));
            t146 = 0x2;
        } else {
            u62 = (((struct o4_float *)((((int)stk + 0) + 0xC)))->v);
            if ((u62 > 9.0f) && ((u63 = (((struct oC_float *)(((int)stk + 0)))->v), u62 > u63) || (u64 = (((struct o8_float *)((((int)stk + 0) + 0xC)))->v), u62 > u64))) {
                u99 = (((struct oC_float *)(((int)stk + 0)))->v);
                if (!(u99 > u62) && (u100 = (((struct o8_float *)((((int)stk + 0) + 0xC)))->v), !(u99 > u100))) {
                    if (((((struct o8_float *)(a4))->v)) > ((((struct o8_float *)(a6))->v))) {
                        u113 = (-(*(float *)(((int)stk + 12))));
                    } else {
                        u113 = (*(float *)(((int)stk + 12)));
                    }
                    *(float *)(((int)stk + 0)) = u113;
                } else {
                    if (((((struct o8_float *)((a4 + 0x8)))->v)) > ((((struct o8_float *)((a6 + 0x8)))->v))) {
                        u119 = (-(*(float *)(((int)stk + 20))));
                    } else {
                        u119 = (*(float *)(((int)stk + 20)));
                    }
                    *(float *)(((int)stk + 8)) = u119;
                }
                FUN_0c060c80(a5, ((int)stk + 0), a6);
            } else {
                if (((((struct o4_float *)((a4 + 0x8)))->v)) > ((((struct o4_float *)((a6 + 0x8)))->v))) {
                    u130 = (-(*(float *)(((int)stk + 16))));
                } else {
                    u130 = (*(float *)(((int)stk + 16)));
                }
                *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) + u130);
                FUN_0c060c80(a5, ((int)stk + 0), a6);
                if (((((struct o4_float *)((a6 + 0x8)))->v)) > ((((struct o4_float *)((a4 + 0x8)))->v))) {
                    (((struct o135_uchar *)(a5))->v) = (*(signed char *)((a4 + 0x4)));
                }
                FUN_0c06130a(a5, a6, (a6 + 0x8), (a4 + 0x8));
            }
            t146 = 0x1;
        }
    }
    return t146;
}

int FUN_0c0e4dac(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;

    t0 = *(int *)0xC4B410C;
    t1 = *(int *)(((((int)((int)(nlRand()) % (int)0x3)) << 2) + 0xC1CBD5C));
    t2 = FUN_0c037320(t1, t0);
    t0 = FUN_0c03f444(0x5, 0x0, t2);
    t2 = t0;
    if (t0 == 0) {
    } else {
        FUN_0c03733c(t0, t1, (*(int *)0xC4B410C));
        (((struct oAC_ushort *)(t0))->v) = 0x1F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        *(unsigned int *)((t0 + 0x4)) = 0xC0E4CE8;
        (((struct o48_float *)(t0))->v) = 1.0f;
        (((struct o44_float *)(t0))->v) = 1.0f;
        (((struct o40_float *)(t0))->v) = 1.0f;
        (((struct o5C_float *)(t0))->v) = -0.5f;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)(a4); }
        t1 = (int)((int)(nlRand()) % (int)0xA);
        (((struct o28_float *)(t0))->v) = (((((struct o28_float *)(t0))->v)) + ((float)((((t1 << 2) + t1) << 2) << 1) + -200.0f));
        t1 = (int)((int)(nlRand()) % (int)0xA);
        (((struct o30_float *)(t0))->v) = (((((struct o30_float *)(t0))->v)) + ((float)((((t1 << 2) + t1) << 2) << 1) + -200.0f));
        t1 = (int)((int)(nlRand()) % (int)0xA);
        (((struct o2C_float *)(t0))->v) = (((((struct o2C_float *)(t0))->v)) - (float)(((t1 << 2) + t1) << 1));
        if (a5 != 0) {
            t1 = (0x7000 + (((int)((int)(nlRand()) % (int)0x1F)) << 8));
        } else {
            t1 = ((((int)((int)(nlRand()) % (int)0x3F)) << 8) << 2);
        }
        t3 = (int)((int)(nlRand()) % (int)0xA);
        u0 = (((struct o0_float *)0xC0E4F7C)->v);
        (((struct o50_float *)(t0))->v) = (((((struct o4_float *)0xC0E4F7C)->v)) - ((float)t3 + u0));
        (((struct o54_float *)(t0))->v) = (((float)t3 + u0) * (math_cos_angle16(t1)));
        (((struct o4C_float *)(t0))->v) = (((float)t3 + u0) * (math_sin_angle16(t1)));
        t2 = 0x4C;
    }
    return t2;
}

void FUN_0c04a69a(void)
{
    int stk[11];

    register int R1;
    register int R3;
    register int R5;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register int v0_9;
    *(unsigned int *)(((int)stk + 0)) = (FUN_0c0bb244());
    v0_0 = (0x4);
    v0_1 = (0x1);
    v0_7 = (0x0);
    v0_3 = (0x0);
    v0_2 = (0xC3BD447);
    L_C04A6BE:;
    if (((((int)v0_1 << (int)v0_7) & (unsigned char)(*(signed char *)((v0_2 + 0x0)))) == 0)) goto L_C04A6EC;
    R5 = (v0_7);
    L_C04A6F2:;
    v0_7 = *(signed char *)0xC542236;
    v0_8 = (v0_7);
    v0_4 = (0xC532498);
    v0_5 = (0xC5421F8);
    v0_6 = (0x3938);
    if ((v0_7 == 0)) goto L_C04A714;
    if ((v0_8 == 1)) goto L_C04A714;
    if ((v0_8 == 3)) goto L_C04A714;
    if ((v0_8 == 2)) goto L_C04A776;
    if ((v0_8 == 4)) goto L_C04A776;
    L_C04A7E2:;
    *(unsigned int *)0xC40F82C = v0_3;
    v0_5 = (0xC40F82C);
    v0_7 = (v0_3);
    L_C04A7E8:;
    if (((*(signed char *)((((v0_7 * v0_6) + v0_4) + 0x3714))) == 0)) goto L_C04A800;
    *(unsigned int *)((v0_5 + 0x0)) = ((*(int *)((v0_5 + 0x0))) | ((int)v0_1 << (int)v0_7));
    L_C04A800:;
    v0_3 = (int)(v0_7 + 0x1) < (int)v0_0;
    v0_7 = ((v0_7 + 0x1));
    if (v0_3) goto L_C04A7E8;
    FUN_0c06780e((*(int *)((v0_5 + 0x0))));
    FUN_0c036de8(0x6);
    FUN_0c06785c();
    FUN_0c06780e((unsigned char)(*(signed char *)((v0_2 + 0x0))));
    FUN_0c0497d8();
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC5410B8) = *(struct mv3 *)(0xC1B7D20); }
    return;
    L_C04A776:;
    if (((*(signed char *)((v0_5 + 0x3E))) != 2)) goto L_C04A782;
    v0_7 = (0x1);
    L_C04A784:;
    (((struct o166_uchar *)(v0_5))->v) = v0_7;
    v0_7 = (v0_3);
    L_C04A78A:;
    if (((((int)v0_1 << (int)v0_7) & (unsigned char)(*(signed char *)((v0_2 + 0x0)))) != 0)) goto L_C04A7DC;
    (((struct o3714_uchar *)(((v0_7 * v0_6) + v0_4)))->v) = v0_1;
    R5 = (((v0_7 * v0_6) + v0_4));
    if (((*(signed char *)((v0_5 + 0x3E))) != 2)) goto L_C04A7AC;
    v0_8 = (0xC);
    L_C04A7AE:;
    *(unsigned char *)((R5 + 0x2)) = v0_8;
    (((struct o3720_uchar *)(R5))->v) = v0_1;
    (((struct o3719_uchar *)(R5))->v) = v0_7;
    *(unsigned char *)((R5 + 0x1)) = v0_7;
    (((struct o16B_uchar *)(v0_5))->v) = v0_7;
    goto L_C04A7E2;
    L_C04A7AC:;
    v0_8 = (0xD);
    goto L_C04A7AE;
    L_C04A7DC:;
    v0_8 = (int)(v0_7 + 0x1) < (int)v0_0;
    v0_7 = ((v0_7 + 0x1));
    if (v0_8) goto L_C04A78A;
    goto L_C04A7E2;
    L_C04A782:;
    v0_7 = (0x2);
    goto L_C04A784;
    L_C04A714:;
    *(unsigned int *)(((int)stk + 8)) = (0xC1B7D2C + (((R5 << 1) + R5) << 2));
    *(unsigned char *)(((int)stk + 4)) = ((R5 + 0x1) & 0x3);
    v0_7 = (v0_3);
    v0_8 = (0xFFFFFFFF);
    if (((int)(*(int *)(((int)stk + 0))) <= 0)) goto L_C04A76C;
    L_C04A738:;
    v0_9 = *(int *)(((int)stk + 8));
    *(unsigned int *)(((int)stk + 8)) = (v0_9 + 0x4);
    v0_9 = *(int *)((((v0_9 + 0x4) - 4) + 0x0));
    (((struct o3714_uchar *)(((v0_9 * v0_6) + v0_4)))->v) = v0_1;
    *(unsigned char *)((((v0_9 * v0_6) + v0_4) + 0x2)) = v0_8;
    (((struct o3720_uchar *)(((v0_9 * v0_6) + v0_4)))->v) = v0_1;
    (((struct o3719_uchar *)(((v0_9 * v0_6) + v0_4)))->v) = (*(signed char *)(((int)stk + 4)));
    *(unsigned char *)((((v0_9 * v0_6) + v0_4) + 0x1)) = v0_9;
    v0_9 = (int)(v0_7 + 0x1) < (int)(*(int *)(((int)stk + 0)));
    v0_7 = ((v0_7 + 0x1));
    if (v0_9) goto L_C04A738;
    L_C04A76C:;
    FUN_0c0498d8();
    (((struct o166_uchar *)(v0_5))->v) = v0_3;
    goto L_C04A7E2;
    L_C04A6EC:;
    v0_4 = (int)(v0_7 + 0x1) < (int)v0_0;
    v0_7 = ((v0_7 + 0x1));
    if (v0_4) goto L_C04A6BE;
    goto L_C04A6F2;
}

int FUN_0c04c270(int a4)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;
    register float u2;
    register float u3;

    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
                u0 = math_sin_angle16(((((*(short *)((a4 + 0x1C))) << 8) << 2) << 1));
                *(unsigned int *)((a4 + 0x34)) = (int)(u0 * 5461.0f);
                u1 = math_sin_angle16((int)(u0 * 5461.0f));
                u0 = math_cos_angle16(((short)(*(short *)((a4 + 0x1C))) * (short)0xB6));
                u2 = (u1 * 50.0f);
                u3 = ((((struct o30_float *)(a4))->v));
                u3 = u3 + u2 * u0;
                (((struct o30_float *)(a4))->v) = u3;
                u0 = math_sin_angle16(((short)(*(short *)((a4 + 0x1C))) * (short)0xB6));
                u2 = (u1 * 50.0f);
                u1 = ((((struct o28_float *)(a4))->v));
                u1 = u1 + u2 * u0;
                (((struct o28_float *)(a4))->v) = u1;
                u0 = math_sin_angle16(((*(short *)((a4 + 0x1C))) << 13));
                (((struct o2C_float *)(a4))->v) = (u0 * 30.0f);
                if (0.0f > (u0 * 30.0f)) {
                    (((struct o2C_float *)(a4))->v) = (-((((struct o2C_float *)(a4))->v)));
                }
                (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
                if ((int)(unsigned char)(*(signed char *)0xC541F44) >= (int)0xA) {
                    t0 = *(short *)((a4 + 0x1E));
                    *(unsigned short *)((a4 + 0x1E)) = (t0 - 1);
                    if ((int)(short)(t0 - 1) <= 0) {
                        *(unsigned short *)((a4 + 0x1E)) = 0x14;
                        FUN_0c15aed8((a4 + 0x28));
                    }
                }
                t0 = *(signed char *)0xC541F44;
                if ((int)(unsigned char)t0 > (int)0xB) {
                    return FUN_0c03f346(a4);
                }
                return (unsigned char)t0;
            }
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
            t1 = (short)(t0 - 1);
            if ((int)(short)(t0 - 1) <= 0) {
                t0 = *(signed char *)((a4 + 0x2));
                *(unsigned short *)((a4 + 0x1C)) = ((t0 << 2) + t0);
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                t1 = 0x15;
            }
            return t1;
        }
        t0 = *(signed char *)0xC541F44;
        t1 = (unsigned char)t0;
        if ((int)(unsigned char)t0 < (int)0xA) {
        } else {
            *(unsigned short *)((a4 + 0x1C)) = 0x3C;
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            t1 = 0x15;
        }
        return t1;
    }
    *(unsigned short *)((a4 + 0x1C)) = 0x3C;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x58)) = *(struct mv3 *)((a4 + 0x28)); }
    if ((*(signed char *)((a4 + 0x2))) == 4) {
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        FUN_0c04c87c(a4);
        t0 = *(signed char *)0xC541F44;
        t1 = (unsigned char)t0;
        if ((int)(unsigned char)t0 < (int)0xA) {
        } else {
            *(unsigned short *)((a4 + 0x1C)) = 0x3C;
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            t1 = 0x15;
        }
        t0 = t1;
    } else {
        (((struct o15_uchar *)(a4))->v) = 0x63;
        t1 = *(signed char *)((a4 + 0x2));
        *(unsigned short *)((a4 + 0x1C)) = ((t1 << 2) + t1);
        t1 = *(signed char *)((a4 + 0x2));
        *(unsigned short *)((a4 + 0x1E)) = ((t1 << 2) + 0x1E);
        t0 = ((t1 << 2) + 0x1E);
    }
    return t0;
}

int FUN_0c0d2880(int a4, int a5, int a6, float f4)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u6;
    register float u7;
    register float u8;
    register float u9;

    (((struct o4C_float *)(a4))->v) = 0.0f;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)(0xC1C7E98); }
    u0 = (((struct o4_float *)((0xC1C7E50 + ((a5 << 2) << 1))))->v);
    u1 = *(float *)(((0xC1C7E50 + ((a5 << 2) << 1)) + 0x0));
    u2 = (((struct o4_float *)((0xC1C7E80 + ((a5 << 2) << 1))))->v);
    u3 = *(float *)(((0xC1C7E80 + ((a5 << 2) << 1)) + 0x0));
    t0 = (0xC1C7E68 + ((a5 << 2) << 1));
    if (a5 == 1) {
    } else {
        t1 = *(signed char *)((a4 + 0x2));
        t0 = ((0xC1C7E20 + ((((t1 << 1) + t1) << 2) << 1)) + 0x10);
    }
    u4 = *(float *)((t0 + 0x0));
    u5 = (((struct o4_float *)(t0))->v);
    t0 = 0x0;
    u6 = u4;
    for (;;) {
        if ((int)t0 >= (int)((((struct oC0_int *)(a4))->v))) {
            break;
        }
        t1 = t0;
        t1 = (t1 << 2);
        t1 = (t1 + (0xC4 + a4));
        t1 = (*(int *)((t1 + 0x0)));
        if (a5 == 1) {
            u6 = (float)((int)((int)(nlRand()) % (int)0x80));
            u7 = (*(float *)(((0xC1C7E68 + ((a5 << 2) << 1)) + 0x0)));
            u6 = (u6 / 128.0f);
        } else {
            t2 = *(signed char *)((a4 + 0x2));
            u6 = (float)((int)((int)(nlRand()) % (int)0x80));
            u6 = (u6 / 128.0f);
            u7 = (*(float *)((0xC1C7E30 + ((((t2 << 1) + t2) << 2) << 1))));
        }
        u8 = (u5 - u4);
        u9 = u7;
        u9 = u9 + u8 * u6;
        u7 = u9;
        (((struct o70_float *)(t1))->v) = u7;
        u8 = (u0 - u1);
        u7 = (*(float *)(((0xC1C7E50 + ((a5 << 2) << 1)) + 0x0)));
        u6 = (float)((int)((int)(nlRand()) % (int)0x80));
        u6 = (u6 / 128.0f);
        u9 = u7;
        u9 = u9 + u8 * u6;
        u7 = u9;
        (((struct o6C_float *)(t1))->v) = u7;
        u8 = (u2 - u3);
        u6 = (float)((int)((int)(nlRand()) % (int)0x80));
        u7 = (*(float *)(((0xC1C7E80 + ((a5 << 2) << 1)) + 0x0)));
        t0 = (t0 + 0x1);
        u6 = (u6 / 128.0f);
        u9 = u7;
        u9 = u9 + u8 * u6;
        u7 = u9;
        (((struct o74_float *)(t1))->v) = u7;
    }
    t0 = a6;
    if (a6 == 2) {
        t1 = 0x0;
        t2 = a5;
        for (;;) {
            if ((int)t1 >= (int)((((struct oC0_int *)(a4))->v))) {
                break;
            }
            t2 = t1;
            t2 = (t2 << 2);
            t2 = (t2 + (0xC4 + a4));
            t2 = (*(int *)((t2 + 0x0)));
            t1 = (t1 + 0x1);
            *(unsigned short *)((t2 + 0x6)) = ((*(short *)((t2 + 0x6))) | 0x400);
            (((struct o14_float *)(t2))->v) = 1.0f;
        }
        t0 = 0xC0;
    }
    return t0;
}

int FUN_0c063f4a(int a4)
{
    int stk[11];

    register int R1;
    register int R2;
    register int R3;
    register int R6;
    register int R7;
    register int R9;
    register float F4;
    register float F5;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register float w0_0;
    register float w0_1;
    v0_6 = a4;
    v0_4 = (0x124);
    v0_0 = (0x0);
    v0_1 = (v0_6);
    w0_0 = (0.0f);
    w0_1 = (1.0f);
    if (((*(signed char *)((v0_6 + 0x124))) != 0)) goto L_C063F70;
    L_C0640D0:;
    return v0_4;
    L_C063F70:;
    v0_2 = ((FUN_0c05ffa4((*(signed char *)((v0_1 + 0x124))), (*(signed char *)((v0_1 + 0x1))), (*(signed char *)((v0_1 + 0x125))))));
    v0_3 = (v0_0);
    L_C0640C6:;
    v0_5 = *(signed char *)((v0_2 + 0x3));
    v0_4 = (v0_5);
    if (((int)v0_3 >= (int)v0_5)) goto L_C0640D0;
    { struct mv8 { int w[8]; }; *(struct mv8 *)(((int)stk + 0)) = *(struct mv8 *)((FUN_0c05ffe2((*(signed char *)((v0_1 + 0x124))), (*(signed char *)((v0_1 + 0x1))), (*(signed char *)((v0_1 + 0x125))), v0_3))); }
    v0_4 = *(signed char *)(((int)stk + 0));
    v0_6 = (v0_0);
    v0_5 = (v0_4);
    if (!(((signed char)v0_4 != 0))) goto L_C0640C4;
    v0_4 = ((signed char)v0_5);
    if (((signed char)v0_5 == 1)) goto L_C064008;
    if ((v0_4 == 2)) goto L_C064016;
    if ((v0_4 == 4)) goto L_C06401C;
    if ((v0_4 == 3)) goto L_C064022;
    if ((v0_4 == 5)) goto L_C06402C;
    if ((v0_4 == 6)) goto L_C06403A;
    if ((v0_4 == 7)) goto L_C064040;
    if ((v0_4 == 0)) goto L_C06404E;
    goto L_C06404E;
    L_C0640C4:;
    v0_3 = ((v0_3 + 0x1));
    goto L_C0640C6;
    L_C06404E:;
    v0_6 = (0x1);
    L_C064052:;
    if ((v0_6 != 0)) goto L_C0640C4;
    FUN_0c060180(v0_1, (((int)stk + 0) + 0x8), (*(signed char *)(((int)stk + 2))));
    FUN_0c060428(v0_1, ((int)stk + 0));
    v0_5 = *(signed char *)(((int)stk + 1));
    v0_4 = (v0_5);
    if ((v0_5 == 0)) goto L_C06407E;
    if ((v0_4 == 1)) goto L_C0640A4;
    if ((v0_4 == 2)) goto L_C0640B0;
    goto L_C0640C4;
    L_C0640B0:;
    v0_4 = (0xC1713D0);
    v0_5 = ((((int)stk + 0) + 0x20));
    F4 = ((*(float *)(((int)stk + 24))));
    F5 = ((*(float *)(((int)stk + 20))));
    L_C0640BE:;
    v0_4 = ((int (*)(int, int, int, int, float, float))(v0_4))((((int)stk + 0) + 0x8), v0_5, R6, R7, F4, F5);
    goto L_C0640C4;
    L_C0640A4:;
    v0_4 = (0xC17149C);
    v0_5 = ((((int)stk + 0) + 0x14));
    goto L_C0640BE;
    L_C06407E:;
    v0_4 = (0xC17143E);
    v0_5 = ((((int)stk + 0) + 0x20));
    F4 = ((*(float *)(((int)stk + 20))));
    goto L_C0640BE;
    L_C064040:;
    *(float *)(((int)stk + 32)) = w0_1;
    L_C064044:;
    *(float *)(((int)stk + 36)) = w0_1;
    L_C064048:;
    *(float *)(((int)stk + 40)) = w0_1;
    goto L_C064052;
    L_C06403A:;
    *(float *)(((int)stk + 32)) = w0_0;
    goto L_C064044;
    L_C06402C:;
    *(float *)(((int)stk + 32)) = w0_1;
    L_C064030:;
    *(float *)(((int)stk + 36)) = w0_1;
    *(float *)(((int)stk + 40)) = w0_0;
    goto L_C064052;
    L_C064022:;
    *(float *)(((int)stk + 32)) = w0_1;
    L_C064026:;
    *(float *)(((int)stk + 36)) = w0_0;
    goto L_C064048;
    L_C06401C:;
    *(float *)(((int)stk + 32)) = w0_0;
    goto L_C064030;
    L_C064016:;
    *(float *)(((int)stk + 32)) = w0_0;
    goto L_C064026;
    L_C064008:;
    *(float *)(((int)stk + 32)) = w0_1;
    *(float *)(((int)stk + 36)) = w0_0;
    *(float *)(((int)stk + 40)) = w0_0;
    goto L_C064052;
}

int FUN_0c0cba00(int a4)
{

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R6;
    register int R8;
    register int R10;
    register int R11;
    register int R12;
    register int R13;
    register float F1;
    register float F3;
    register float F4;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register float w0_0;
    v0_1 = a4;
    v0_0 = R8;
    v0_2 = *(short *)((v0_1 + 0x1C));
    *(unsigned short *)((v0_1 + 0x1C)) = (v0_2 - 1);
    v0_0 = (v0_1);
    if (((int)(short)(v0_2 - 1) >= (int)0xB4)) goto L_C0CBA66;
    v0_1 = *(short *)((v0_0 + 0x1C));
    v0_2 = (v0_1);
    if (((int)v0_1 < 0)) goto L_C0CBA40;
    v0_2 = ((v0_2 & 0x1));
    L_C0CBA4A:;
    (((struct oA8_uchar *)(v0_0))->v) = v0_2;
    v0_1 = (*(short *)((v0_0 + 0x1C))) != 0;
    if (v0_1) goto L_C0CBA66;
    return FUN_0c0c2d56(v0_0, 0xB, 0x0);
    L_C0CBA66:;
    v0_2 = FUN_0c0c2ce4(v0_0);
    v0_1 = (v0_2);
    if ((v0_2 == 0)) goto L_C0CBA9A;
    if ((v0_1 != 2)) goto L_C0CBA8C;
    v0_1 = *(signed char *)((v0_0 + 0x1));
    return FUN_0c0c2d56(v0_0, 0x3, v0_1);
    L_C0CBA8C:;
    (((struct o50_float *)(v0_0))->v) = 0.0f;
    (((struct o5C_float *)(v0_0))->v) = -2.0f;
    L_C0CBA9A:;
    (((struct o2C_float *)(v0_0))->v) = (((((struct o2C_float *)(v0_0))->v)) + ((((struct o50_float *)(v0_0))->v)));
    (((struct o50_float *)(v0_0))->v) = (((((struct o50_float *)(v0_0))->v)) + ((((struct o5C_float *)(v0_0))->v)));
    v0_1 = (((struct oC4_int *)(v0_0))->v);
    v0_2 = *(short *)((v0_0 + 0x1E));
    *(unsigned short *)((v0_0 + 0x1E)) = (v0_2 + 0x1);
    w0_0 = math_sin_angle16(((int)(((((float)(((short)v0_2 << 1) + ((short)v0_2 << 2)) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF));
    (((struct o70_float *)(v0_1))->v) = (w0_0 * 10.0f);
    v0_1 = (((struct oC4_int *)(v0_0))->v);
    (((struct o7C_uint *)(v0_1))->v) = (((((struct o7C_int *)(v0_1))->v)) - 0x16C);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((*(int *)(((0xC4 + v0_0) + 0x4))) + 0x6C)) = *(struct mv3 *)((((((struct oC4_int *)(v0_0))->v)) + 0x6C)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((*(int *)(((0xC4 + v0_0) + 0x8))) + 0x6C)) = *(struct mv3 *)((((((struct oC4_int *)(v0_0))->v)) + 0x6C)); }
    v0_1 = (((struct oC8_int *)(v0_0))->v);
    (((struct o78_uint *)(v0_1))->v) = (((((struct o78_int *)(v0_1))->v)) + 0xB6);
    v0_1 = (((struct oC8_int *)(v0_0))->v);
    (((struct o7C_uint *)(v0_1))->v) = (((((struct o7C_int *)(v0_1))->v)) + 0x16C);
    *(unsigned char *)((((((struct oCC_int *)(v0_0))->v)) + 0x0)) = ((*(signed char *)0xC542260) & 0x1);
    v0_1 = (int)((unsigned int)(*(int *)0xC542260) % (unsigned int)0x7);
    w0_0 = ((w0_0 * 10.0f));
    w0_0 = ((float)(v0_1 + 0x1));
    FPUL_ = ((v0_1 + 0x1));
    if (((int)(v0_1 + 0x1) >= 0)) goto L_C0CBB6E;
    w0_0 = ((w0_0 + 4.2949673e+09f));
    FPUL_ = (0x4F800000);
    L_C0CBB6E:;
    (((struct o84_float *)(((((struct oD0_int *)(v0_0))->v))))->v) = (w0_0 * 0.100000001f);
    (((struct o88_float *)(((((struct oD0_int *)(v0_0))->v))))->v) = (w0_0 * 0.100000001f);
    (((struct o8C_float *)(((((struct oD0_int *)(v0_0))->v))))->v) = (w0_0 * 0.100000001f);
    return 0x8C;
    L_C0CBA40:;
    v0_2 = (((~(((~v0_2) + 0x1) & 0x1)) + 0x1));
    goto L_C0CBA4A;
}

int FUN_0c04c6c4(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register float u0;

    FUN_0c04b23c(a4, 0x0, a6, a7);
    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o48_float *)(a4))->v) = 0.0f;
        (((struct o44_float *)(a4))->v) = 0.0f;
        (((struct o40_float *)(a4))->v) = 0.0f;
    }
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 45.0f);
            t0 = *(signed char *)((a4 + 0x16));
            if (t0 != 0) {
                if (t0 != 1) {
                } else {
                    if ((int)(*(short *)0xC541F4E) <= (int)0xA) {
                        thunk_FUN_0c05abb2(0x45, (a4 + 0x28));
                        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                    }
                }
            } else {
                if ((int)(unsigned char)(*(signed char *)0xC541F44) >= (int)0xB) {
                    FUN_0c059e9a((((short)(*(signed char *)0xC542363) * (short)0x3938) + 0xC532498), 0x36, (a4 + 0x28));
                    *(unsigned short *)((a4 + 0x1C)) = 0x0;
                    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                }
            }
            t0 = *(signed char *)0xC541F44;
            if ((int)(unsigned char)t0 > (int)0xB) {
                return FUN_0c03f346(a4);
            }
            return (unsigned char)t0;
        }
        t0 = *(short *)((a4 + 0x1E));
        *(unsigned short *)((a4 + 0x1E)) = (t0 - 1);
        if ((short)(t0 - 1) == 0) {
            FUN_0c059e9a((((short)(*(signed char *)0xC542363) * (short)0x3938) + 0xC532498), 0x35, (a4 + 0x28));
        }
        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 45.0f);
        u0 = (((struct o48_float *)(a4))->v);
        (((struct o48_float *)(a4))->v) = (u0 + 0.0333333351f);
        (((struct o44_float *)(a4))->v) = (u0 + 0.0333333351f);
        (((struct o40_float *)(a4))->v) = (u0 + 0.0333333351f);
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        t1 = (short)(t0 - 1);
        if ((int)(short)(t0 - 1) <= 0) {
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            (((struct o16_uchar *)(a4))->v) = 0x0;
            t1 = 0x16;
        }
        return t1;
    }
    t0 = *(signed char *)0xC541F44;
    t1 = (unsigned char)t0;
    if ((int)(unsigned char)t0 < (int)0xA) {
    } else {
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)(((*(int *)((a4 + 0x10))) + 0x28)); }
        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) - 585.0f);
        (((struct o48_float *)(a4))->v) = 0.0f;
        (((struct o44_float *)(a4))->v) = 0.0f;
        (((struct o40_float *)(a4))->v) = 0.0f;
        *(unsigned short *)((a4 + 0x1C)) = 0x1E;
        *(unsigned short *)((a4 + 0x1E)) = 0x5;
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t1 = 0x15;
    }
    return t1;
}

void FUN_0c136de4(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    register int t2;

    if ((*(signed char *)((0xC535BAD + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938)))) != 26) {
        ((int (*)(int, int, int, int))(FUN_0c03f346))(a4, a5, a6, a7);
    return;
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)((((((struct oC8_int *)((*(int *)((a4 + 0x10)))))->v)) + 0x6C)); }
    nlAddVector3op((a4 + 0x28), (a4 + 0x28), (((((struct oC8_int *)(a4))->v)) + 0x6C));
    t2 = (((struct oC4_int *)(a4))->v);
    (((struct o7C_uint *)(t2))->v) = (((((struct o7C_int *)(t2))->v)) + ((((struct o34_int *)0xC2A17F4)->v)));
    t2 = *(signed char *)((a4 + 0x14));
    if (t2 != 0) {
        if (t2 != 1) {
            ((int (*)(int))(FUN_0c03f346))(a4);
    return;
        }
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        t2 = *(short *)((a4 + 0x1C));
        if (((int)t2 >= (int)((((struct o4_int *)0xC2A17F4)->v))) && (t0 = (((struct o8_int *)0xC2A17F4)->v), (int)t2 <= (int)t0)) {
            FUN_0c0588bc((a4 + 0x40), 0xC2A17E8, 0xC2A17DC, (*(short *)((a4 + 0x1C))), (((((struct o8_int *)0xC2A17F4)->v))), (((((struct o4_int *)0xC2A17F4)->v))));
        }
        t0 = *(short *)((a4 + 0x1C));
        if (((int)t0 >= (int)((((struct oC_int *)0xC2A17F4)->v))) && (t1 = (((struct o10_int *)0xC2A17F4)->v), (int)t0 <= (int)t1)) {
            FUN_0c058a6e((0xB0 + a4), 0xC2A1818, 0xC2A1808, (*(short *)((a4 + 0x1C))), (((((struct o10_int *)0xC2A17F4)->v))), (((((struct oC_int *)0xC2A17F4)->v))));
        }
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
        if ((int)(short)(t0 + 0x1) > (int)((((struct o0_int *)0xC2A17F4)->v))) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        }
        return;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x1, 0xF, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
    (((struct oA8_uchar *)(a4))->v) = 0x0;
    (((struct oAC_ushort *)(a4))->v) = 0x21F;
    (((struct oA9_uchar *)(a4))->v) = 0x21;
    { struct mv4 { int w[4]; }; *(struct mv4 *)((0xB0 + a4)) = *(struct mv4 *)(0xC2A1808); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x40)) = *(struct mv3 *)(0xC2A17DC); }
}
