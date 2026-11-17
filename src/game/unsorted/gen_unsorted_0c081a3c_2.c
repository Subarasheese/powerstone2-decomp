/* game/unsorted: functions 0C081A3C-0C082922, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o24_short { char p[0x24]; short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o3715_uchar { char p[0x3715]; unsigned char v; };
struct o3716_uchar { char p[0x3716]; unsigned char v; };
struct o3717_uchar { char p[0x3717]; unsigned char v; };
struct o371D_uchar { char p[0x371D]; unsigned char v; };
struct o3721_uchar { char p[0x3721]; unsigned char v; };
struct o3728_uchar { char p[0x3728]; unsigned char v; };
struct o3729_uchar { char p[0x3729]; unsigned char v; };
struct o372D_uchar { char p[0x372D]; unsigned char v; };
struct o372E_uchar { char p[0x372E]; unsigned char v; };
struct o3743_uchar { char p[0x3743]; unsigned char v; };
struct o374A_uchar { char p[0x374A]; unsigned char v; };
struct o3757_uchar { char p[0x3757]; unsigned char v; };
struct o3768_uint { char p[0x3768]; unsigned int v; };
struct o376C_int { char p[0x376C]; int v; };
struct o376C_uint { char p[0x376C]; unsigned int v; };
struct o3770_int { char p[0x3770]; int v; };
struct o3770_uint { char p[0x3770]; unsigned int v; };
struct o37F4_float { char p[0x37F4]; float v; };
struct o37FC_float { char p[0x37FC]; float v; };
struct o382A_ushort { char p[0x382A]; unsigned short v; };
struct o382E_ushort { char p[0x382E]; unsigned short v; };
struct o3832_ushort { char p[0x3832]; unsigned short v; };
struct o383A_ushort { char p[0x383A]; unsigned short v; };
struct o383C_ushort { char p[0x383C]; unsigned short v; };
struct o3840_ushort { char p[0x3840]; unsigned short v; };
struct o90_float { char p[0x90]; float v; };
int FUN_0c059df2(int, int);
int FUN_0c05aaf6(int);
int FUN_0c064f80(int);
int FUN_0c067734(int);
int FUN_0c07c4b0(int, int);
int math_angle_between_points_xz(int, int);
int FUN_0c07d720(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07eaf4(int);
int FUN_0c07ebd0(int);
int FUN_0c081dfc(int, int, int);
int FUN_0c081ec2(int);
int FUN_0c0c2d56(int, int, int);
int FUN_0c15e960(int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c160c38(int);
int FUN_0c160f66(int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c081e68(int a4);
int FUN_0c081ee8(int a4, int a5);
int FUN_0c082310(int a4, int a5, int a6, int a7);
int FUN_0c0827d8(int a4);

int FUN_0c081e68(int a4)
{
    register int t0;
    register int t5;

    t0 = *(signed char *)((a4 + 0x3721));
    t5 = (unsigned char)t0;
    if (((unsigned char)t0 != 0xC0) && (((unsigned char)t0 != 0xC4) && (((unsigned char)t0 != 0xC7) && ((unsigned char)t0 != 0xCC)))) {
        if (((unsigned char)t0 == 70) || (((unsigned char)t0 == 72) || ((unsigned char)t0 == 71))) {
            (((struct o371D_uchar *)(a4))->v) = 0x0;
        }
        FUN_0c0c2d56(((((struct o376C_int *)(a4))->v)), 0xB, (*(signed char *)((a4 + 0x1))));
        (((struct o3721_uchar *)(a4))->v) = 0x0;
        (((struct o376C_uint *)(a4))->v) = 0x0;
        t5 = 0x376C;
    }
    return t5;
}

int FUN_0c081ee8(int a4, int a5)
{
    int stk[4];
    register int t1;
    register int t10;
    register int t29;
    register int t66;
    register int t85;
    register int t54;
    register int t110;

    t1 = *(signed char *)((0xC2738B8 + ((unsigned short)(unsigned char)(*(signed char *)((a5 + 0x41C))) * (unsigned short)0x34)));
    if (t1 != 0) {
        if (t1 == 2) {
            return FUN_0c081ec2(a4);
        }
        FUN_0c0c2d56(a5, 0x4, (*(signed char *)((a4 + 0x1))));
        (((struct o376C_uint *)(a4))->v) = a5;
        (((struct o3721_uchar *)(a4))->v) = (*(signed char *)((a5 + 0x41C)));
        (((struct o3832_ushort *)(a4))->v) = ((((struct o24_short *)(a5))->v));
        (((struct o3768_uint *)(a4))->v) = 0x0;
        FUN_0c07c4b0((*(signed char *)((a4 + 0x1))), (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x3721))) * (unsigned short)0x34) + 0xC2738BB))));
        t10 = *(signed char *)((a4 + 0x3721));
        if ((unsigned char)t10 != 70) {
            if ((unsigned char)t10 != 72) {
                if ((unsigned char)t10 != 71) {
                    if ((unsigned char)t10 != 0xC3) {
                    } else {
                        FUN_0c07c4b0((*(signed char *)((a4 + 0x1))), 0x1);
                    }
                } else {
                    (((struct o371D_uchar *)(a4))->v) = 0x6;
                }
            } else {
                (((struct o371D_uchar *)(a4))->v) = 0x5;
            }
        } else {
            (((struct o371D_uchar *)(a4))->v) = 0x3;
        }
        (((struct o372E_uchar *)(a4))->v) = 0x0;
        t29 = *(signed char *)((a4 + 0x3721));
        if (((unsigned char)t29 != 19) && (((unsigned char)t29 != 20) && ((unsigned char)t29 != 21))) {
            if (((unsigned char)t29 != 56) && (((unsigned char)t29 != 57) && ((unsigned char)t29 != 58))) {
                if ((unsigned char)t29 != 23) {
                    t54 = (unsigned char)t29;
                    if ((unsigned char)t29 != 41) {
                    } else {
                        FUN_0c160c38(((((struct o376C_int *)(a4))->v)));
                        (((struct o383C_ushort *)(a4))->v) = 0x0;
                        (((struct o383A_ushort *)(a4))->v) = 0x0;
                        t54 = 0x383A;
                    }
                } else {
                    t54 = (FUN_0c15e960(((((struct o376C_int *)(a4))->v)), 0x6, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24)));
                }
            } else {
                t54 = (FUN_0c15e960(((((struct o376C_int *)(a4))->v)), ((unsigned char)(*(signed char *)((a4 + 0x3721))) - 56), 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24)));
            }
        } else {
            t54 = (FUN_0c15e960(((((struct o376C_int *)(a4))->v)), ((unsigned char)(*(signed char *)((a4 + 0x3721))) - 16), 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24)));
        }
        return t54;
    }
    FUN_0c0c2d56(a5, 0x4, (*(signed char *)((a4 + 0x1))));
    (((struct o376C_uint *)(a4))->v) = a5;
    (((struct o3721_uchar *)(a4))->v) = (*(signed char *)((a5 + 0x41C)));
    (((struct o3832_ushort *)(a4))->v) = ((((struct o24_short *)(a5))->v));
    (((struct o3768_uint *)(a4))->v) = 0x0;
    FUN_0c07c4b0((*(signed char *)((a4 + 0x1))), (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x3721))) * (unsigned short)0x34) + 0xC2738BB))));
    t66 = *(signed char *)((a4 + 0x3721));
    if ((unsigned char)t66 != 70) {
        if ((unsigned char)t66 != 72) {
            if ((unsigned char)t66 != 71) {
                if ((unsigned char)t66 != 0xC3) {
                } else {
                    FUN_0c07c4b0((*(signed char *)((a4 + 0x1))), 0x1);
                }
            } else {
                (((struct o371D_uchar *)(a4))->v) = 0x6;
            }
        } else {
            (((struct o371D_uchar *)(a4))->v) = 0x5;
        }
    } else {
        (((struct o371D_uchar *)(a4))->v) = 0x3;
    }
    (((struct o372E_uchar *)(a4))->v) = 0x0;
    t85 = *(signed char *)((a4 + 0x3721));
    if (((unsigned char)t85 != 19) && (((unsigned char)t85 != 20) && ((unsigned char)t85 != 21))) {
        if (((unsigned char)t85 != 56) && (((unsigned char)t85 != 57) && ((unsigned char)t85 != 58))) {
            if ((unsigned char)t85 != 23) {
                t110 = (unsigned char)t85;
                if ((unsigned char)t85 != 41) {
                } else {
                    FUN_0c160c38(((((struct o376C_int *)(a4))->v)));
                    (((struct o383C_ushort *)(a4))->v) = 0x0;
                    (((struct o383A_ushort *)(a4))->v) = 0x0;
                    t110 = 0x383A;
                }
            } else {
                t110 = (FUN_0c15e960(((((struct o376C_int *)(a4))->v)), 0x6, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24)));
            }
        } else {
            t110 = (FUN_0c15e960(((((struct o376C_int *)(a4))->v)), ((unsigned char)(*(signed char *)((a4 + 0x3721))) - 56), 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24)));
        }
    } else {
        t110 = (FUN_0c15e960(((((struct o376C_int *)(a4))->v)), ((unsigned char)(*(signed char *)((a4 + 0x3721))) - 16), 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24)));
    }
    return t110;
}

int FUN_0c082310(int a4, int a5, int a6, int a7)
{
    int stk[8];
    register int t0;
    register int t4;
    register int t6;
    register int t14;
    register int t16;
    register int t24;
    register int t42;
    register int t43;
    register int t52;
    register int t53;
    register int t62;
    register float u66;
    register int t67;
    register float u71;
    register int t122;
    register float u126;
    register int t127;
    register float u131;
    register int t134;
    register int t135;
    register int t136;
    register int t137;
    register int t144;

    *(unsigned char *)(((int)stk + 28)) = a5;
    (((struct o3715_uchar *)(a4))->v) = 0xB;
    t0 = ((int (*)(int, int, int, int))(FUN_0c081dfc))(a4, a5, a6, a7);
    (((struct o3770_uint *)(a4))->v) = (((short)(*(signed char *)((a4 + 0x372A))) * (short)0x3938) + 0xC532498);
    (((struct o376C_uint *)(a4))->v) = ((((struct o3770_int *)(a4))->v));
    (((struct o3721_uchar *)(a4))->v) = 0xC0;
    (((struct o3728_uchar *)(a4))->v) = 0x0;
    (((struct o37FC_float *)(a4))->v) = 0.0f;
    (((struct o37F4_float *)(a4))->v) = 0.0f;
    (((struct o14_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x3;
    t4 = (((struct o3770_int *)(a4))->v);
    (((struct o17_uchar *)(t4))->v) = 0x0;
    (((struct o16_uchar *)(t4))->v) = 0x0;
    (((struct o15_uchar *)(t4))->v) = 0x0;
    (((struct o3770_uint *)(((((struct o3770_int *)(a4))->v))))->v) = a4;
    t6 = (((struct o3770_int *)(a4))->v);
    (((struct o3716_uchar *)(t6))->v) = (*(signed char *)((t6 + 0x3715)));
    (((struct o3715_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x22;
    (((struct o3729_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x1;
    (((struct o371D_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x0;
    (((struct o3743_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x0;
    (((struct o382A_ushort *)(((((struct o3770_int *)(a4))->v))))->v) = 0x0;
    (((struct o3757_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x0;
    t14 = (((struct o3770_int *)(a4))->v);
    (((struct o37FC_float *)(t14))->v) = 0.0f;
    (((struct o37F4_float *)(t14))->v) = 0.0f;
    t16 = ((int (*)(int))(FUN_0c081dfc))(((((struct o3770_int *)(a4))->v)));
    (((struct o3717_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x63;
    *(unsigned int *)((a4 + 0x38)) = (math_angle_between_points_xz((a4 + 0x28), (((((struct o3770_int *)(a4))->v)) + 0x28)));
    FUN_0c067734(((((struct o3770_int *)(a4))->v)));
    FUN_0c059df2((*(signed char *)((a4 + 0x1))), 0x18);
    t24 = *(signed char *)(((int)stk + 28));
    if (t24 != 0) {
        if (t24 == 1) {
            *(int *)((int)stk + 20) = 0x2B;
            *(int *)((int)stk + 16) = 0x5;
            *(int *)((int)stk + 12) = 0xFFFFFFFF;
            FUN_0c07e79c(a4, 0xFFFFFFFF, 0x5, 0x2B, 0xFFFFFFFF, 0x5, 0x2B);
            *(int *)((int)stk + 8) = 0x2C;
            *(int *)((int)stk + 4) = 0x5;
            *(int *)((int)stk + 0) = 0xFFFFFFFF;
            FUN_0c07e79c(((((struct o3770_int *)(a4))->v)), 0xFFFFFFFF, 0x5, 0x2C, 0xFFFFFFFF, 0x5, 0x2C);
            (((struct o28_float *)(((((struct o3770_int *)(a4))->v))))->v) = ((((struct o28_float *)(a4))->v));
            (((struct o30_float *)(((((struct o3770_int *)(a4))->v))))->v) = ((((struct o30_float *)(a4))->v));
            *(unsigned int *)((((((struct o3770_int *)(a4))->v)) + 0x38)) = (unsigned short)((*(int *)((a4 + 0x38))) + 0x8000);
            (((struct o3728_uchar *)(a4))->v) = 0x0;
            (((struct o3728_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x1;
            (((struct o371D_uchar *)(a4))->v) = 0x1;
            FUN_0c07c4b0((*(signed char *)((a4 + 0x1))), 0x5);
            (((struct o15_uchar *)(a4))->v) = 0x1;
            t144 = 0x15;
        } else {
            t144 = t24;
            if (t24 == 2) {
                *(int *)((int)stk + 20) = 0x1A;
                *(int *)((int)stk + 16) = 0x5;
                *(int *)((int)stk + 12) = 0xFFFFFFFF;
                FUN_0c07e79c(a4, 0xFFFFFFFF, 0x5, 0x1A, 0xFFFFFFFF, 0x5, 0x1A);
                if ((*(signed char *)((((((struct o3770_int *)(a4))->v)) + 0x372C))) == 0) {
                    t42 = (*(int *)((((((struct o3770_int *)(a4))->v)) + 0x38)));
                    *(int *)((int)stk + 20) = t42;
                    t43 = FUN_0c07d720(a4);
                    if ((int)(unsigned short)((t42 - t43) + 0x4000) > (int)0x8000) {
                        *(int *)((int)stk + 20) = 0x1F;
                        *(int *)((int)stk + 16) = 0x5;
                        *(int *)((int)stk + 12) = 0xFFFFFFFF;
                        FUN_0c07e79c(((((struct o3770_int *)(a4))->v)), 0xFFFFFFFF, 0x5, 0x1F, 0xFFFFFFFF, 0x5, 0x1F);
                    } else {
                        *(int *)((int)stk + 20) = 0x20;
                        *(int *)((int)stk + 16) = 0x5;
                        *(int *)((int)stk + 12) = 0xFFFFFFFF;
                        FUN_0c07e79c(((((struct o3770_int *)(a4))->v)), 0xFFFFFFFF, 0x5, 0x20, 0xFFFFFFFF, 0x5, 0x20);
                    }
                } else {
                    t52 = (*(int *)((((((struct o3770_int *)(a4))->v)) + 0x38)));
                    *(int *)((int)stk + 20) = t52;
                    t53 = FUN_0c07d720(a4);
                    if ((int)(unsigned short)((t52 - t53) + 0x4000) > (int)0x8000) {
                        *(int *)((int)stk + 20) = 0x1E;
                        *(int *)((int)stk + 16) = 0x5;
                        *(int *)((int)stk + 12) = 0xFFFFFFFF;
                        FUN_0c07e79c(((((struct o3770_int *)(a4))->v)), 0xFFFFFFFF, 0x5, 0x1E, 0xFFFFFFFF, 0x5, 0x1E);
                    } else {
                        *(int *)((int)stk + 20) = 0x1D;
                        *(int *)((int)stk + 16) = 0x5;
                        *(int *)((int)stk + 12) = 0xFFFFFFFF;
                        FUN_0c07e79c(((((struct o3770_int *)(a4))->v)), 0xFFFFFFFF, 0x5, 0x1D, 0xFFFFFFFF, 0x5, 0x1D);
                    }
                }
                t62 = (((struct o3770_int *)(a4))->v);
                *(int *)((int)stk + 20) = (0x28 + t62);
                u66 = ((((struct o28_float *)(a4))->v));
                u66 = u66 + 120.0f * (math_sin_angle16((*(int *)((a4 + 0x38)))));
                (((struct o28_float *)(t62))->v) = u66;
                t67 = (((struct o3770_int *)(a4))->v);
                *(int *)((int)stk + 20) = (0x30 + t67);
                u71 = ((((struct o30_float *)(a4))->v));
                u71 = u71 + 120.0f * (math_cos_angle16((*(int *)((a4 + 0x38)))));
                (((struct o30_float *)(t67))->v) = u71;
                (((struct o3728_uchar *)(a4))->v) = 0x0;
                (((struct o3728_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x2;
                (((struct o160_float *)(((((struct o3770_int *)(a4))->v))))->v) = (((((struct o160_float *)(a4))->v)) / 3.0f);
                FUN_0c07c4b0((*(signed char *)((a4 + 0x1))), (int)(((((struct o160_float *)(((((struct o3770_int *)(a4))->v))))->v)) / 10.0f));
                (((struct o160_float *)(a4))->v) = (((((struct o160_float *)(a4))->v)) * 0.666660011f);
                if (1.0f > ((((struct o160_float *)(((((struct o3770_int *)(a4))->v))))->v))) {
                    (((struct o160_float *)(((((struct o3770_int *)(a4))->v))))->v) = 1.0f;
                }
                if (1.0f > ((((struct o160_float *)(a4))->v))) {
                    (((struct o160_float *)(a4))->v) = 1.0f;
                }
                (((struct o3840_ushort *)(((((struct o3770_int *)(a4))->v))))->v) = 0x270F;
                if ((*(signed char *)((0xC535BB8 + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938)))) == 0) {
                    FUN_0c05aaf6((0xB7 + (*(signed char *)((a4 + 0x1)))));
                }
                FUN_0c160f66(((((struct o3770_int *)(a4))->v)), 0x0);
                (((struct o382E_ushort *)(a4))->v) = 0x0;
                (((struct o374A_uchar *)(a4))->v) = 0x1;
                (((struct o382E_ushort *)(((((struct o3770_int *)(a4))->v))))->v) = 0x0;
                (((struct o374A_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x1;
                (((struct o15_uchar *)(a4))->v) = 0x2;
                t144 = 0x15;
            }
        }
    } else {
        *(int *)((int)stk + 20) = 0x19;
        *(int *)((int)stk + 16) = 0x5;
        *(int *)((int)stk + 12) = 0xFFFFFFFF;
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x5, 0x19, 0xFFFFFFFF, 0x5, 0x19);
        if ((int)(unsigned short)(((*(int *)((a4 + 0x38))) - (*(int *)((((((struct o3770_int *)(a4))->v)) + 0x38)))) + 0x4000) > (int)0x8000) {
            *(int *)((int)stk + 20) = 0x1B;
            *(int *)((int)stk + 16) = 0x5;
            *(int *)((int)stk + 12) = 0xFFFFFFFF;
            FUN_0c07e79c(((((struct o3770_int *)(a4))->v)), 0xFFFFFFFF, 0x5, 0x1B, 0xFFFFFFFF, 0x5, 0x1B);
        } else {
            *(int *)((int)stk + 20) = 0x1C;
            *(int *)((int)stk + 16) = 0x5;
            *(int *)((int)stk + 12) = 0xFFFFFFFF;
            FUN_0c07e79c(((((struct o3770_int *)(a4))->v)), 0xFFFFFFFF, 0x5, 0x1C, 0xFFFFFFFF, 0x5, 0x1C);
        }
        t122 = (((struct o3770_int *)(a4))->v);
        *(int *)((int)stk + 20) = (0x28 + t122);
        u126 = ((((struct o28_float *)(a4))->v));
        u126 = u126 + 120.0f * (math_sin_angle16((*(int *)((a4 + 0x38)))));
        (((struct o28_float *)(t122))->v) = u126;
        t127 = (((struct o3770_int *)(a4))->v);
        *(int *)((int)stk + 20) = (0x30 + t127);
        u131 = ((((struct o30_float *)(a4))->v));
        u131 = u131 + 120.0f * (math_cos_angle16((*(int *)((a4 + 0x38)))));
        (((struct o30_float *)(t127))->v) = u131;
        (((struct o2C_float *)(((((struct o3770_int *)(a4))->v))))->v) = ((((struct o2C_float *)(a4))->v));
        t134 = *(int *)(((0x118 + a4) + 0x4));
        *(int *)((int)stk + 20) = (0x90 + t134);
        t135 = (((struct o3770_int *)(a4))->v);
        t136 = (((struct o118_int *)(a4))->v);
        *(unsigned int *)(((int)stk + 24)) = t135;
        t137 = *(int *)(((t135 + 0x118) + 0x4));
        (((struct o90_float *)(((((struct o118_int *)(t135))->v))))->v) = 2.4000001f;
        (((struct o90_float *)(t137))->v) = 2.4000001f;
        (((struct o90_float *)(t136))->v) = 2.4000001f;
        (((struct o90_float *)(t134))->v) = 2.4000001f;
        *(unsigned int *)((((((struct o3770_int *)(a4))->v)) + 0x38)) = (unsigned short)((*(int *)((a4 + 0x38))) + 0x8000);
        (((struct o3728_uchar *)(a4))->v) = 0x0;
        (((struct o3728_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x0;
        (((struct o371D_uchar *)(a4))->v) = 0x1;
        FUN_0c07c4b0((*(signed char *)((a4 + 0x1))), 0x5);
        (((struct o15_uchar *)(a4))->v) = 0x0;
        t144 = 0x15;
    }
    return t144;
}

int FUN_0c0827d8(int a4)
{
    register int t0;

    (((struct o3715_uchar *)(a4))->v) = 0xC;
    (((struct o371D_uchar *)(a4))->v) = 0x1;
    t0 = FUN_0c07ebd0(a4);
    if (t0 != 0) {
        *(unsigned int *)((a4 + 0x38)) = ((*(int *)((0xC5413E8 + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x2F8)))) + (FUN_0c07eaf4(a4)));
    }
    t0 = FUN_0c064f80(a4);
    if (t0 != 0) {
        t0 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t0, 0x2, 0x2, (t0), 0x2, 0x2);
        t0 = 0xE;
    } else {
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x2, 0x16, 0xFFFFFFFF, 0x2, 0x16);
        t0 = 0xB;
    }
    *(unsigned short *)((a4 + 0x1C)) = t0;
    (((struct o372D_uchar *)(a4))->v) = 0x0;
    t0 = 0x3731;
    if ((*(signed char *)((a4 + 0x3731))) == 0) {
        (((struct o372D_uchar *)(a4))->v) = 0x8;
        t0 = 0x372D;
    }
    return t0;
}
