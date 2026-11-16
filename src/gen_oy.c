/* Straight-line functions with calls and guards (batch gen_oy): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_short { short v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o0_ushort { unsigned short v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o118_int { char p[0x118]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o17C_float { char p[0x17C]; float v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o20_uchar { char p[0x20]; unsigned char v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o3714_uchar { char p[0x3714]; unsigned char v; };
struct o376C_int { char p[0x376C]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o50_float { char p[0x50]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o9_uchar { char p[0x9]; unsigned char v; };
struct oA_uchar { char p[0xA]; unsigned char v; };
struct oC_uint { char p[0xC]; unsigned int v; };
int FUN_0c01f6f8(void);
int FUN_0c01fce0(int, int, int, int);
int FUN_0c022050(void);
int FUN_0c0220c4(int, int, int);
int FUN_0c0222a4(int, int, int);
int FUN_0c035bf0(int);
int FUN_0c036606(void);
int FUN_0c036de8(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c037bf6(int);
int FUN_0c03ea04(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c043010(void);
int FUN_0c05a174(void);
int FUN_0c05a4a6(int, int);
int FUN_0c05ab78(int);
int FUN_0c05af8a(void);
int FUN_0c05b15c(void);
int FUN_0c06780e(int);
int FUN_0c06785c(void);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c085cac(int, int, int);
int FUN_0c085d0c(int);
int FUN_0c085eac(int, int);
int FUN_0c0c224c(int, int);
int FUN_0c0c2380(int, int);
int FUN_0c0c3010(int, int, int);
int FUN_0c0c3054(int, int, int, float);
int FUN_0c111680(void);
int FUN_0c115d96(void);
int FUN_0c118e94(void);
int FUN_0c119c94(void);
int FUN_0c11e19c(void);
int FUN_0c179ac0(void);
int FUN_0c1803fc(int, int);
int FUN_0c186380(int);
int FUN_0c1864e0(int, int, int);
int FUN_0c186740(int, int, int);
int math_vec3_accumulate(int, int);
int FUN_0c086140(int a4, float f4);
int FUN_0c08a742(int a4);
int FUN_0c0d09ec(int a4);
int FUN_0c100780(int a4);
int FUN_0c029d84(int a4, int a5, int a6, int a7);
int FUN_0c029e80(void);
int FUN_0c05a1c2(int a4, int a5, int a6, int a7, int a8, int a9);

int FUN_0c086140(int a4, float f4)
{
    int stk[2];
    register int t0;
    register int t9;
    register int t10;
    register int t20;
    register int t23;
    register int t1;
    register float u2;
    int t3;
    register int t4;
    register float u5;
    int t6;

    t0 = *(signed char *)((a4 + 0x16));
    if (((t0 == 0) && ((t1 = (((struct o118_int *)(a4))->v), u2 = (((struct o8C_float *)(t1))->v), !(14.0f > u2)) && (t3 = (((struct o22_short *)(a4))->v), t3 == 0))) || (((signed char)t0 != 0) && ((t4 = (((struct o118_int *)(a4))->v), u5 = (((struct o8C_float *)(t4))->v), !(12.0f > u5)) && (t6 = (((struct o22_short *)(a4))->v), t6 == 0)))) {
        (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) + 0x1);
        t9 = *(signed char *)((a4 + 0x1));
        t10 = 0x1;
        if ((*(signed char *)((a4 + 0x3731))) == 0) {
            t10 = 0x0;
        }
        FUN_0c0c3054(((((struct o376C_int *)(a4))->v)), t9, t10, f4);
        FUN_0c0c2380(a4, ((((struct o376C_int *)(a4))->v)));
    }
    if ((*(signed char *)((a4 + 0x16))) == 0) {
        t20 = FUN_0c037bf6(a4);
        if ((unsigned char)t20 != 0) {
            return FUN_0c085d0c(a4);
        }
        return (unsigned char)t20;
    }
    FUN_0c037bf6(a4);
    if (!(((((struct o50_float *)(a4))->v)) > 0.0f)) {
        t23 = FUN_0c07ecc6(a4, 0x0, 0x0);
        if (t23 != 0) {
            return FUN_0c085cac(a4, 0x6, 0x0);
        }
    }
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    return math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
}

int FUN_0c08a742(int a4)
{
    int stk[5];
    register int t13;

    if (((((struct o17C_float *)(a4))->v)) > 0.0f) {
        *(int *)((int)stk + 8) = 0xE1;
        *(int *)((int)stk + 4) = 0x3;
        *(int *)((int)stk + 0) = 0xFFFFFFFF;
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0xE1, 0xFFFFFFFF, 0x3, 0xE1);
        FUN_0c0c224c(a4, ((((struct o376C_int *)(a4))->v)));
        FUN_0c085eac(a4, 0x6);
        FUN_0c0c3010(((((struct o376C_int *)(a4))->v)), (*(signed char *)((a4 + 0x1))), 0x0);
        t13 = 0x16;
    } else {
        *(int *)((int)stk + 8) = 0xE8;
        *(int *)((int)stk + 4) = 0x3;
        *(int *)((int)stk + 0) = 0xFFFFFFFF;
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0xE8, 0xFFFFFFFF, 0x3, 0xE8);
        FUN_0c085eac(a4, 0x6);
        FUN_0c0c3010(((((struct o376C_int *)(a4))->v)), (*(signed char *)((a4 + 0x1))), 0x1);
        (((struct o50_float *)(a4))->v) = 0.0f;
        (((struct o5C_float *)(a4))->v) = -2.0f;
        (((struct o16_uchar *)(a4))->v) = 0x1;
        t13 = 0x17;
    }
    *(unsigned char *)((a4 + t13)) = 0x0;
    return t13;
}

int FUN_0c0d09ec(int a4)
{

    register int R1;
    register int R2;
    int R3;
    register int R13;
    register float F1;
    register float F2;
    register float F3;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register float w0_0;
    v0_2 = a4;
    v0_4 = FUN_0c179ac0();
    v0_3 = (v0_4);
    v0_0 = (0x0);
    v0_1 = (v0_2);
    R3 = (0x3FF);
    if (((int)v0_4 < 0)) goto L_C0D0A06;
    v0_3 = ((v0_3 & R3));
    L_C0D0A10:;
    v0_2 = (v0_0);
    v0_4 = ((*(int *)0xC5410EC));
    v0_5 = (0xC540978);
    w0_0 = ((((float)v0_3 + 1.0f) / (*(float *)0xC0D0AEC)));
    FPUL_ = (v0_3);
    L_C0D0A5A:;
    if (!(((int)v0_2 < (int)v0_4))) goto L_C0D0A5E;
    v0_3 = (((v0_2 << 1) + (0x74C + v0_5)));
    if ((v0_2 == (v0_4 - 1))) goto L_C0D0A4E;
    FPUL_ = (v0_4);
    if ((!(((float)(v0_2 + 0x1) / (float)v0_4) > w0_0))) goto L_C0D0A58;
    goto L_C0D0A4E;
    L_C0D0A5E:;
    v0_2 = (0xC532498);
    v0_4 = (0x3938);
    if (((*(signed char *)(((((*(int *)((v0_1 + 0x0))) * 0x3938) + 0xC532498) + 0x3714))) == 0)) goto L_C0D0A94;
    if ((!(((((struct o160_float *)((((*(int *)((v0_1 + 0x0))) * v0_4) + v0_2)))->v)) > 0.0f))) goto L_C0D0A94;
    if (((*(signed char *)((0x3720 + (((*(int *)((v0_1 + 0x0))) * v0_4) + v0_2)))) != 1)) goto L_C0D0A9A;
    L_C0D0A94:;
    *(unsigned int *)((v0_1 + 0x0)) = 0xFFFFFFFF;
    R13 = (v0_0);
    L_C0D0A9A:;
    v0_2 = (FUN_0c043010()) == 0;
    if (v0_2) goto L_C0D0AB8;
    if (((*(signed char *)((0xC2738C8 + (R13 * 0x34)))) != 6)) goto L_C0D0AB8;
    *(unsigned int *)((v0_1 + 0x0)) = 0xFFFFFFFF;
    R13 = (v0_0);
    L_C0D0AB8:;
    return R13;
    L_C0D0A4E:;
    v0_2 = *(signed char *)((v0_3 + 0x0));
    *(unsigned int *)((v0_1 + 0x0)) = (*(signed char *)((v0_3 + 0x1)));
    R13 = (v0_2);
    goto L_C0D0A5E;
    L_C0D0A58:;
    v0_2 = ((v0_2 + 0x1));
    goto L_C0D0A5A;
    L_C0D0A06:;
    v0_3 = (((~(((~v0_3) + 0x1) & R3)) + 0x1));
    goto L_C0D0A10;
}

int FUN_0c100780(int a4)
{
    int stk[9];
    register int t23;

    *(unsigned int *)(((int)stk + 0)) = 0xC532498;
    if (a4 == 0) {
        FUN_0c06780e(0x5);
        FUN_0c03ea04(0xB, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
        *(unsigned char *)(((*(int *)(((int)stk + 0))) + 0x2)) = 0xE;
        *(unsigned char *)0xC53970A = 0x0;
        FUN_0c036de8(0x15, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
        FUN_0c036606();
        FUN_0c06785c();
        FUN_0c03ea04(0xB, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
    } else {
        FUN_0c06780e(0x5);
        FUN_0c03ea04(0xB, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
        *(unsigned char *)(((*(int *)(((int)stk + 0))) + 0x2)) = 0xE;
        *(unsigned char *)0xC53970A = 0xF;
        FUN_0c036de8(0x15, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
        FUN_0c036606();
        FUN_0c06785c();
        FUN_0c03ea04(0xB, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
        (((struct o3714_uchar *)((*(int *)(((int)stk + 0)))))->v) = 0x0;
    }
    *(unsigned char *)0xC5397B0 = 0x0;
    (((struct o18_uint *)0xC474720)->v) = 0x0;
    (((struct o0_uint *)0xC474720)->v) = 0xFFFFFFFF;
    (((struct o4_uint *)0xC474720)->v) = 0xFFFFFFFF;
    (((struct oC_uint *)0xC474720)->v) = 0xFFFFFFFF;
    (((struct o0_uint *)0xC474B9C)->v) = (FUN_0c115d96());
    (((struct oC_uint *)0xC474B9C)->v) = (FUN_0c119c94());
    (((struct o10_uint *)0xC474B9C)->v) = (FUN_0c11e19c());
    (((struct o28_uint *)0xC474B9C)->v) = (FUN_0c111680());
    t23 = FUN_0c118e94();
    *(unsigned int *)0xC474C3C = t23;
    return t23;
}

int FUN_0c029d84(int a4, int a5, int a6, int a7)
{
    int stk[33];
    register int t0;
    register int t8;
    register int t17;

    t0 = *(signed char *)0xC30542C;
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        if (t0 != 5) {
                            return 0x0;
                        }
                        return 0x1;
                    }
                    (((struct o20_uchar *)0xC30540C)->v) = ((*(signed char *)0xC30542C) + 0x1);
                    FUN_0c01fce0(0xC3054C5, 0xC30540C, a6, a7);
                    return 0x0;
                }
                if ((*(signed char *)0xC3054C5) != 0) {
                    t8 = FUN_0c01f6f8();
                    if (t8 != 0) {
                        (((struct o20_uchar *)0xC30540C)->v) = ((*(signed char *)0xC30542C) + 0x1);
                    }
                } else {
                    (((struct o20_uchar *)0xC30540C)->v) = ((*(signed char *)0xC30542C) + 0x1);
                }
                return 0x0;
            }
            t17 = (((struct o0_short *)0xC30540C)->v);
            (((struct o0_ushort *)0xC30540C)->v) = (t17 - 1);
            if ((int)(short)(t17 - 1) < 0) {
                (((struct o20_uchar *)0xC30540C)->v) = ((*(signed char *)0xC30542C) + 0x1);
                *(unsigned char *)0xC30985B = 0x0;
            }
            return 0x0;
        }
        (((struct o20_uchar *)0xC30540C)->v) = ((*(signed char *)0xC30542C) + 0x1);
        (((struct o0_ushort *)0xC30540C)->v) = 0x3C;
        if ((*(signed char *)0xC3054C5) != 0) {
            FUN_0c186380((*(int *)0xC309994));
        }
        return 0x0;
    }
    (((struct o20_uchar *)0xC30540C)->v) = ((*(signed char *)0xC30542C) + 0x1);
    if ((*(signed char *)0xC3054C5) != 0) {
        *(unsigned char *)(((((int)stk + 0) + 0x4) + 0x0)) = 0x7F;
        *(unsigned int *)(((int)stk + 0)) = ((((int)stk + 0) + 0x4) + 0x1);
        *(unsigned char *)((((((int)stk + 0) + 0x4) + 0x1) + 0x0)) = 0x3;
        *(unsigned char *)(((((int)stk + 0) + 0x4) + 0x2)) = 0x1;
        FUN_0c186740((*(int *)0xC309994), (((int)stk + 0) + 0x4), (*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))));
    }
    return 0x0;
}

int FUN_0c029e80(void)
{
    int stk[101];
    register int t1;
    register int t11;
    register int t32;
    int t14;

    if ((*(signed char *)0xC30985B) == 0) {
        t1 = FUN_0c022050();
        if (t1 != 0) {
            FUN_0c0220c4(((int)stk + 0), (((int)stk + 0) + 0x8), (((int)stk + 0) + 0x4));
            FUN_0c0222a4(((int)stk + 0), (((int)stk + 0) + 0x8), (((int)stk + 0) + 0x4));
        }
        (((struct o2_uchar *)0xC309859)->v) = ((*(signed char *)0xC30985B) + 0x1);
        (((struct o14_uchar *)(((int)stk + 0)))->v) = 0x70;
        *(unsigned int *)(((int)stk + 16)) = ((((int)stk + 0) + 0x14) + 0x1);
        *(unsigned char *)((((((int)stk + 0) + 0x14) + 0x1) + 0x0)) = 0x3;
        *(unsigned char *)(((((int)stk + 0) + 0x14) + 0x2)) = 0x7;
        t32 = (FUN_0c186740((*(int *)0xC309994), (((int)stk + 0) + 0x14), (*(signed char *)(((*(int *)(((int)stk + 16))) + 0x0)))));
    } else {
        t11 = FUN_0c022050();
        t32 = t11;
        if (t11 != 0) {
            FUN_0c0220c4(((int)stk + 0), (((int)stk + 0) + 0x8), (((int)stk + 0) + 0x4));
            if (((*(signed char *)(((int)stk + 0))) == 96) && (t14 = *(signed char *)(((int)stk + 4)), t14 == 7)) {
                FUN_0c1864e0((*(int *)0xC309994), (((int)stk + 0) + 0xC), 0x1);
                (((struct o0_uchar *)0xC309859)->v) = 0xD;
                (((struct o2_uchar *)0xC309859)->v) = 0x0;
                (((struct o1_uchar *)0xC309859)->v) = 0x0;
                (((struct oA_uchar *)0xC305414)->v) = 0x0;
                (((struct o9_uchar *)0xC305414)->v) = 0x0;
                (((struct o1_uchar *)0xC305414)->v) = 0x0;
                (((struct o0_uchar *)0xC305414)->v) = 0x0;
                *(unsigned short *)0xC30A51C = 0x0;
                t32 = 0x0;
            } else {
                t32 = (FUN_0c0222a4(((int)stk + 0), (((int)stk + 0) + 0x8), (((int)stk + 0) + 0x4)));
            }
        }
    }
    return t32;
}

int FUN_0c05a1c2(int a4, int a5, int a6, int a7, int a8, int a9)
{
    int stk[7];
    register int t4;
    register int t5;
    register int t7;
    register int t9;
    register int t44;
    register int t6;
    register int t8;
    register int t30;
    register int t32;

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 8)) = a6;
    *(unsigned int *)(((int)stk + 4)) = a7;
    FUN_0c05af8a();
    FUN_0c05a174();
    *(unsigned int *)(((((int)stk + 0) + 0xC) + 0x0)) = (*(int *)(((int)stk + 8)));
    *(unsigned int *)(((((int)stk + 0) + 0xC) + 0x4)) = (*(int *)(((int)stk + 4)));
    *(unsigned int *)(((((int)stk + 0) + 0xC) + 0x8)) = a8;
    *(unsigned int *)(((((int)stk + 0) + 0xC) + 0xC)) = a9;
    t4 = 0x40;
    t5 = a9;
    t7 = t6;
    t9 = 0x0;
    for (;;) {
        if ((int)t9 >= (int)0x4) {
            break;
        }
        t7 = t9;
        t7 = (t7 << 2);
        t7 = (t7 + (((int)stk + 0) + 0xC));
        if ((int)(*(int *)((t7 + 0x0))) >= 0) {
            t8 = (*(int *)((t7 + 0x0)));
            t4 = (*(int *)(((int)stk + 0)));
            t8 = (t8 << 2);
            t8 = (*(int *)((t8 + t4)));
            t4 = 0xC1C316C;
            t5 = (*(signed char *)(((*(int *)((t7 + 0x0))) + t4)));
            if (t5 != 0) {
                t8 = (t8 + t9);
            }
            t7 = t8;
            t4 = (FUN_0c035bf0(t7));
            t7 = 0xCB00000;
            t4 = (FUN_0c1803fc(t7, (t9 + 0x3)));
        } else {
            t30 = t5;
            t32 = t7;
        }
        t9 = (t9 + 0x1);
        t5 = t30;
        t7 = t32;
    }
    if ((int)a5 >= 0) {
        FUN_0c05ab78(a5);
        FUN_0c035bf0((*(int *)((((a5 << 2) << 1) + 0xC1C31FC))));
        FUN_0c1803fc(0xCB00000, 0x7);
    }
    t44 = 0x3;
    for (;;) {
        FUN_0c05a4a6(t44, 0x7C);
        t44 = (t44 + 0x1);
        if ((int)t44 >= (int)0x7) {
            break;
        }
    }
    if ((int)a5 >= 0) {
        FUN_0c05a4a6(0x7, (*(int *)((((a5 << 2) << 1) + 0xC1C3200))));
    }
    return (FUN_0c05b15c());
}
