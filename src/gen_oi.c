/* Straight-line functions with calls and guards (batch gen_oi): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_float { char p[0x10]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o372C_uchar { char p[0x372C]; unsigned char v; };
struct o373B_uchar { char p[0x373B]; unsigned char v; };
struct o3770_int { char p[0x3770]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o418_int { char p[0x418]; int v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c022050(void);
int FUN_0c0220c4(int, int, int);
int FUN_0c0222a4(int, int, int);
int FUN_0c02bad0(void);
int FUN_0c02bae6(void);
int FUN_0c037bf6(int);
int FUN_0c038362(int);
int FUN_0c059dae(int, int);
int FUN_0c059df2(int, int);
int FUN_0c06817c(int);
int FUN_0c073566(int, int);
int FUN_0c07363a(int, int);
int FUN_0c074602(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c085d0c(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0ae750(int, int);
int FUN_0c14f238(int, int, int, int);
int FUN_0c150010(int, float, float, float, float);
int FUN_0c161128(int);
int FUN_0c1864e0(int, int, int);
int FUN_0c186740(int, int, int);
int FUN_0c187d74(int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int thunk_FUN_0c058310(int, int);
int FUN_0c0b159c(int a4, int a5, int a6, int a7);
int FUN_0c075500(int a4);
int FUN_0c02491e(void);

int FUN_0c0b159c(int a4, int a5, int a6, int a7)
{
    int stk[11];
    register int t6;
    register int t41;
    register int t42;
    register int t43;
    register float u45;
    register int t59;

    if (((((struct o3770_int *)(a4))->v)) == 0) {
        t59 = (FUN_0c085d0c(a4, a5, a6, a7, *(int *)((int)stk + 12), *(int *)((int)stk + 12 + 4), *(int *)((int)stk + 12 + 8), *(int *)((int)stk + 12 + 12), *(int *)((int)stk + 12 + 16), *(int *)((int)stk + 12 + 20), *(int *)((int)stk + 12 + 24), *(int *)((int)stk + 12 + 28)));
    } else {
        FUN_0c0ae750(a4, 0x6);
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
        if ((int)(*(short *)((a4 + 0x1C))) >= (int)0x20) {
            t6 = *(short *)((a4 + 0x1C));
            if ((t6 & 0x3) == 0) {
                thunk_FUN_0c058310(((*(int *)(((((*(int *)((((0x1 & (*(short *)((a4 + 0x1E)))) << 2) + 0xC1C65CC))) << 2) + (0xC53255C + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938))) + 0x0))) + 0x28), (((int)stk + 12) + 0x4));
                FUN_0c150010((((int)stk + 12) + 0x4), 1.0f, 1.0f, 1.0f, 0.5f);
                FUN_0c059df2((*(signed char *)((a4 + 0x1))), 0x40);
            } else {
                if ((t6 & 0x3) == 2) {
                    FUN_0c073566(a4, 0x30);
                    thunk_FUN_0c058310(((*(int *)(((((*(int *)(((((*(short *)((a4 + 0x1E))) & 0x3) << 2) + 0xC1C65BC))) << 2) + (0xC53255C + ((short)(*(signed char *)((((((struct o3770_int *)(a4))->v)) + 0x1))) * (short)0x3938))) + 0x0))) + 0x28), (((int)stk + 12) + 0x4));
                    FUN_0c14f238((((int)stk + 12) + 0x4), (a4 + 0x34), (*(signed char *)((((((struct o3770_int *)(a4))->v)) + 0x1))), 0x0);
                    FUN_0c059dae((*(signed char *)((((((struct o3770_int *)(a4))->v)) + 0x1))), 0x2);
                    *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
                }
            }
        }
        t41 = FUN_0c037bf6(a4);
        if ((unsigned char)t41 != 0) {
            *(int *)((int)stk + 8) = 0x11;
            *(int *)((int)stk + 4) = 0x2;
            t42 = *(signed char *)((a4 + 0x1));
            *(unsigned int *)(((int)stk + 12)) = t42;
            t43 = t42;
            *(int *)((int)stk + 0) = t43;
            FUN_0c07e79c(a4, t42, 0x2, 0x11, t43, 0x2, 0x11);
            u45 = (((struct o0_float *)0xC0B17C0)->v);
            (((struct o54_float *)(a4))->v) = (-((math_cos_angle16((*(int *)((a4 + 0x38))))) * u45));
            (((struct o4C_float *)(a4))->v) = (-((math_sin_angle16((*(int *)((a4 + 0x38))))) * u45));
            (((struct o60_float *)(a4))->v) = 0.0f;
            (((struct o58_float *)(a4))->v) = 0.0f;
            (((struct o50_float *)(a4))->v) = ((((struct oC_float *)0xC0B17C0)->v));
            (((struct o5C_float *)(a4))->v) = ((((struct o10_float *)0xC0B17C0)->v));
            FUN_0c07363a(a4, 0x30);
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            t59 = 0x15;
        } else {
            t59 = (FUN_0c038362(a4));
        }
    }
    return t59;
}

int FUN_0c075500(int a4)
{
    int t0;
    int t1;
    register float u0;
    register float u1;
    register float u2;

    thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532564))) + 0x28), (a4 + 0x28));
    FUN_0c074602(a4);
    *(unsigned short *)((a4 + 0x1C)) = 0x0;
    (((struct o20_ushort *)(a4))->v) = 0x3;
    (((struct o372C_uchar *)(a4))->v) = 0x0;
    u0 = (((struct o5C_float *)(a4))->v);
    u1 = (((struct o50_float *)(a4))->v);
    u2 = (u1 / u0);
    if (0.0f > (u1 / u0)) {
        u2 = (-(u1 / u0));
    }
    *(unsigned short *)((a4 + 0x1E)) = (int)u2;
    t1 = *(signed char *)((((((struct o418_int *)(a4))->v)) + 0x0));
    if (((unsigned char)t1 != 1) && ((unsigned char)t1 != 2)) {
        t1 = *(signed char *)((a4 + 0x373B));
        if ((t1 != 0) && ((t1 != 2) && (t1 != 3))) {
            if (t1 != 1) {
                (((struct o22_ushort *)(a4))->v) = 0x27;
            } else {
                (((struct o22_ushort *)(a4))->v) = 0x31;
                (((struct o372C_uchar *)(a4))->v) = 0x1;
            }
        } else {
            (((struct o22_ushort *)(a4))->v) = 0x27;
        }
    } else {
        t1 = *(signed char *)((((((struct o418_int *)(a4))->v)) + 0x8));
        if ((unsigned char)t1 != 1) {
            if ((unsigned char)t1 != 2) {
                if ((unsigned char)t1 != 3) {
                    if ((unsigned char)t1 != 4) {
                        if ((unsigned char)t1 != 5) {
                            t1 = *(signed char *)((a4 + 0x373B));
                            if ((t1 != 0) && ((t1 != 2) && (t1 != 3))) {
                                if (t1 != 1) {
                                } else {
                                    (((struct o22_ushort *)(a4))->v) = 0x31;
                                    (((struct o372C_uchar *)(a4))->v) = 0x1;
                                }
                            } else {
                                (((struct o22_ushort *)(a4))->v) = 0x27;
                            }
                        } else {
                            (((struct o22_ushort *)(a4))->v) = 0x5B;
                            *(unsigned int *)((a4 + 0x38)) = ((int)((((-(float)(*(signed char *)((a4 + 0x373D)))) + ((((struct o0_float *)0xC075720)->v))) * ((((struct o4_float *)0xC075720)->v))) / ((((struct o8_float *)0xC075720)->v))) & 0xFFFF);
                            (((struct o372C_uchar *)(a4))->v) = 0x1;
                        }
                    } else {
                        (((struct o22_ushort *)(a4))->v) = 0x2D;
                    }
                } else {
                    (((struct o22_ushort *)(a4))->v) = 0x2D;
                    FUN_0c161128((*(signed char *)((a4 + 0x1))));
                }
            } else {
                t1 = *(signed char *)((a4 + 0x373B));
                if ((t1 != 0) && ((t1 != 2) && (t1 != 3))) {
                    if (t1 != 1) {
                    } else {
                        (((struct o22_ushort *)(a4))->v) = 0x27;
                        (((struct o373B_uchar *)(a4))->v) = 0x0;
                    }
                } else {
                    (((struct o22_ushort *)(a4))->v) = 0x31;
                    (((struct o373B_uchar *)(a4))->v) = 0x1;
                    (((struct o372C_uchar *)(a4))->v) = 0x1;
                }
            }
        } else {
            t1 = *(signed char *)((a4 + 0x373B));
            if ((t1 != 0) && ((t1 != 2) && (t1 != 3))) {
                if (t1 != 1) {
                } else {
                    (((struct o22_ushort *)(a4))->v) = 0x31;
                    (((struct o372C_uchar *)(a4))->v) = 0x1;
                }
            } else {
                (((struct o22_ushort *)(a4))->v) = 0x27;
            }
        }
    }
    t1 = (((struct o22_short *)(a4))->v);
    FUN_0c07e79c(a4, 0xFFFFFFFF, 0x4, t1, 0xFFFFFFFF, 0x4, (t1));
    FUN_0c037bf6(a4);
    if (!(((((struct o160_float *)(a4))->v)) > 0.0f) && (t0 = *(signed char *)((a4 + 0x371C)), t0 != 0)) {
        FUN_0c06817c(a4);
    }
    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
    return 0x16;
}

int FUN_0c02491e(void)
{
    int stk[37];
    register int t0;
    register int t56;
    register int t2;
    register int t3;
    register int t11;
    int t25;

    t0 = FUN_0c022050();
    t56 = t0;
    if (t0 == 0) {
    } else {
        FUN_0c0220c4((((int)stk + 0) + 0x8), (((int)stk + 0) + 0xC), (((int)stk + 0) + 0x4));
        t2 = *(signed char *)(((int)stk + 8));
        t3 = *(int *)0xC309994;
        if (t2 != 96) {
            t56 = (FUN_0c0222a4((((int)stk + 0) + 0x8), (((int)stk + 0) + 0xC), (((int)stk + 0) + 0x4)));
        } else {
            if ((*(signed char *)(((int)stk + 4))) == 1) {
                FUN_0c1864e0(t3, ((int)stk + 0), 0x1);
                t11 = FUN_0c1864e0((*(int *)0xC309994), ((int)stk + 0), 0x1);
                if ((*(signed char *)(((int)stk + 0))) != 0) {
                    (((struct o14_uchar *)(((int)stk + 0)))->v) = 0x70;
                    *(unsigned int *)(((int)stk + 16)) = ((((int)stk + 0) + 0x14) + 0x1);
                    *(unsigned char *)((((((int)stk + 0) + 0x14) + 0x1) + 0x0)) = 0x4;
                    *(unsigned char *)(((((int)stk + 0) + 0x14) + 0x2)) = 0x4;
                    *(unsigned char *)(((((int)stk + 0) + 0x14) + 0x3)) = 0x1;
                    FUN_0c186740((*(int *)0xC309994), (((int)stk + 0) + 0x14), (*(signed char *)(((*(int *)(((int)stk + 16))) + 0x0))));
                    (((struct o1_uchar *)0xC30A347)->v) = 0x1;
                    (((struct o2_uchar *)0xC30A347)->v) = 0x0;
                    (((struct o0_uchar *)0xC30A347)->v) = 0x0;
                    (((struct o1_uchar *)0xC309859)->v) = ((*(signed char *)0xC30985A) + 0x1);
                    FUN_0c02bae6();
                    t56 = (FUN_0c187d74(0xC3053B8, 0xC1A8BF8));
                } else {
                    (((struct o0_uchar *)0xC309859)->v) = 0x1;
                    (((struct o1_uchar *)0xC309859)->v) = 0x0;
                    *(unsigned char *)0xC305415 = 0x0;
                    t56 = t11;
                }
            } else {
                if ((t2 == 96) && (t25 = *(signed char *)(((int)stk + 4)), t25 == 2)) {
                    FUN_0c1864e0(t3, ((int)stk + 0), 0x1);
                    t56 = FUN_0c1864e0((*(int *)0xC309994), ((int)stk + 0), 0x1);
                    if ((*(signed char *)(((int)stk + 0))) != 0) {
                        (((struct o1_uchar *)0xC309859)->v) = 0x9;
                        *(unsigned char *)0xC305415 = 0x0;
                        *(unsigned short *)0xC30EF6C = 0x0;
                    } else {
                        (((struct o14_uchar *)(((int)stk + 0)))->v) = 0x70;
                        *(unsigned int *)(((int)stk + 16)) = ((((int)stk + 0) + 0x14) + 0x1);
                        *(unsigned char *)((((((int)stk + 0) + 0x14) + 0x1) + 0x0)) = 0x4;
                        *(unsigned char *)(((((int)stk + 0) + 0x14) + 0x2)) = 0x4;
                        *(unsigned char *)(((((int)stk + 0) + 0x14) + 0x3)) = 0x1;
                        FUN_0c186740((*(int *)0xC309994), (((int)stk + 0) + 0x14), (*(signed char *)(((*(int *)(((int)stk + 16))) + 0x0))));
                        (((struct o1_uchar *)0xC30A347)->v) = 0x1;
                        (((struct o2_uchar *)0xC30A347)->v) = 0x0;
                        (((struct o0_uchar *)0xC30A347)->v) = 0x0;
                        (((struct o1_uchar *)0xC309859)->v) = ((*(signed char *)0xC30985A) + 0x1);
                        FUN_0c02bad0();
                        FUN_0c02bae6();
                        t56 = (FUN_0c187d74(0xC3053B8, 0xC1A8BF8));
                    }
                } else {
                    t56 = (FUN_0c0222a4((((int)stk + 0) + 0x8), (((int)stk + 0) + 0xC), (((int)stk + 0) + 0x4)));
                }
            }
        }
    }
    return t56;
}
