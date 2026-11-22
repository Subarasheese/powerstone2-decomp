/* Straight-line functions with calls and guards (batch gen_jf): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[12]; } Stk12;
struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o10_int { char p[0x10]; int v; };
struct o14_float { char p[0x14]; float v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o18_uchar { char p[0x18]; unsigned char v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1B_uchar { char p[0x1B]; unsigned char v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o24_ushort { char p[0x24]; unsigned short v; };
struct o26_ushort { char p[0x26]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o374B_uchar { char p[0x374B]; unsigned char v; };
struct o376C_int { char p[0x376C]; int v; };
struct o3770_int { char p[0x3770]; int v; };
struct o378C_float { char p[0x378C]; float v; };
struct o3790_float { char p[0x3790]; float v; };
struct o37C4_float { char p[0x37C4]; float v; };
struct o37C8_float { char p[0x37C8]; float v; };
struct o37CC_float { char p[0x37CC]; float v; };
struct o382E_ushort { char p[0x382E]; unsigned short v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o40_int { char p[0x40]; int v; };
struct o44_int { char p[0x44]; int v; };
struct o48_short { char p[0x48]; short v; };
struct o48_uint { char p[0x48]; unsigned int v; };
struct o48_ushort { char p[0x48]; unsigned short v; };
struct o4A_short { char p[0x4A]; short v; };
struct o4A_ushort { char p[0x4A]; unsigned short v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4C_uint { char p[0x4C]; unsigned int v; };
struct o50_float { char p[0x50]; float v; };
struct o50_uint { char p[0x50]; unsigned int v; };
struct o54_float { char p[0x54]; float v; };
struct o54_uint { char p[0x54]; unsigned int v; };
struct o58_float { char p[0x58]; float v; };
struct o58_uint { char p[0x58]; unsigned int v; };
struct o5C_float { char p[0x5C]; float v; };
struct o5C_uint { char p[0x5C]; unsigned int v; };
struct o60_float { char p[0x60]; float v; };
struct o60_uint { char p[0x60]; unsigned int v; };
struct o64_uint { char p[0x64]; unsigned int v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o6C_uint { char p[0x6C]; unsigned int v; };
struct o7C_ushort { char p[0x7C]; unsigned short v; };
struct o7E_ushort { char p[0x7E]; unsigned short v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o9_uchar { char p[0x9]; unsigned char v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o98_uint { char p[0x98]; unsigned int v; };
struct o9C_uint { char p[0x9C]; unsigned int v; };
struct oA_uchar { char p[0xA]; unsigned char v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_ushort { char p[0xA8]; unsigned short v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
int ADXB_Create(int, int, int, int);
int ADXB_EntryAddWrFunc(int, int, int);
int ADX_DecodeInfoWav(int, int, int, int, int, int, int, int, int, int, int);
extern int FUN_0c037bf6();
int FUN_0c038362(int);
int FUN_0c056e44(int, int);
int FUN_0c05aab6(int, int);
int FUN_0c05f22c(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c0c2d56(int, int, int);
int FUN_0c104cc8(int);
int FUN_0c104db8(void);
int FUN_0c10527c(int, int, int);
int FUN_0c106744(int);
int FUN_0c108568(int, int);
int FUN_0c1086d8(int);
int FUN_0c109c58(int);
int FUN_0c115120(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c117944(int, ...);
int FUN_0c117d54(void);
int FUN_0c117e76(void);
int FUN_0c119ba4(int, int);
int FUN_0c12ebe4(int, int);
extern int FUN_0c187a88();
int FUN_0c1a0254(int);
int FUN_0c1a02a6(int);
int FUN_0c1a0ec4(int, int, int);
int FUN_0c1a0ff0(int, int);
int FUN_0c1a11d0(int, int, int);
int FUN_0c1a1354(int, int);
int FUN_0c1a3600(int, int, int, int);
int FUN_0c1a3678(int, int, int);
int FUN_0c2c671e(int);
int FUN_0c2d6c38(int, int, int, int, int, int, int, int, int);
int FUN_0c2e8574(int, int);
int SJRBF_GetBufPtr(int);
int SJRBF_GetXtrSize(int);
int adxsjd_clear(int);
int kmyGetDisplayParametersInfo(int, int, int);
int math_angle_between_points_xz(int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int memset(int, int, int);
int rsfts(int, int, int);
int syRtcMakeAgeOfMoon(int);
extern int syRtcMakeDayOfWeek();
int thunk_FUN_0c058310(int, int);
int syRtcCountToDate(int a4, int a5);
int FUN_0c109cb6(int a4, int a5, int a6, int a7);
int FUN_0c09e5a0(int a4, int a5, int a6);
int its(int a4, int a5, int a6, int a7);
int FUN_0c06b484(int a4);
int FUN_0c1067fa(int a4);
int FUN_0c2e83ae(void);
int FUN_0c2f1804(int a4, int a5, int a6);
int kmiSetFBSurfaceDesc(int a4);
int ADXSJD_Create(int a4, int a5, int a6);
float FUN_0c134118(int a4);
int FUN_0c1a019a(int a4, int a5, int a6, int a7);
int FUN_0c0c8030(int a4);
int FUN_0c0c81fe(int a4);

int syRtcCountToDate(int a4, int a5)
{
    int stk[12];
    register int t1;
    register int t3;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;
    register int t19;
    register int t20;
    register int t24;
    register int t29;
    register int t36;
    register int t41;
    register int t48;
    register int t53;
    register int t57;
    register int t67;
    register int t68;
    register int t78;
    register int t16;
    register int t65;
    int t30;
    int t42;
    int t70;

    { struct mv12 { int w[12]; }; *(struct mv12 *)(((int)stk + 0)) = *(struct mv12 *)(0xC2FE928); }
    *(unsigned char *)((a5 + 0x6)) = ((int)((unsigned int)a4 % (unsigned int)0x3C));
    t1 = (int)((unsigned int)a4 / (unsigned int)0x3C);
    *(unsigned char *)((a5 + 0x5)) = ((int)((unsigned int)t1 % (unsigned int)0x3C));
    t3 = (int)((unsigned int)t1 / (unsigned int)0x3C);
    *(unsigned char *)((a5 + 0x4)) = ((int)((unsigned int)t3 % (unsigned int)0x18));
    t5 = (int)((unsigned int)t3 / (unsigned int)0x18);
    t6 = (int)((unsigned int)t5 / (unsigned int)0x16D);
    t7 = (int)((unsigned int)t5 % (unsigned int)0x16D);
    if ((unsigned int)((unsigned int)(t6 + 0x1) >> 2) <= (unsigned int)t7) {
        *(unsigned short *)((a5 + 0x0)) = (t6 + 0x79E);
        t16 = (t7 - ((unsigned int)(t6 + 0x1) >> 2));
    } else {
        *(unsigned short *)((a5 + 0x0)) = (t6 + 0x79D);
        t8 = *(short *)((a5 + 0x0));
        t9 = ((~(((~(unsigned short)t8) + 0x1) & 0x3)) + 0x1);
        if ((int)(unsigned short)t8 >= 0) {
            t9 = ((unsigned short)t8 & 0x3);
        }
        t16 = (t7 + (0x16D - ((unsigned int)(t6 + 0x1) >> 2)));
        if (t9 == 0) {
            t16 = ((t7 + (0x16D - ((unsigned int)(t6 + 0x1) >> 2))) + 0x1);
        }
    }
    t19 = *(short *)((a5 + 0x0));
    t20 = ((~(((~(unsigned short)t19) + 0x1) & 0x3)) + 0x1);
    if ((int)(unsigned short)t19 >= 0) {
        t20 = ((unsigned short)t19 & 0x3);
    }
    if (t20 == 0) {
        if ((unsigned int)t16 >= (unsigned int)(*(int *)((((int)stk + 0) + 0x4)))) {
            t24 = 0x2;
            for (;;) {
                if ((unsigned int)t16 >= (unsigned int)((*(int *)((((int)stk + 0) + (t24 << 2)))) + 0x1)) {
                    t24 = (t24 + 0x1);
                    if ((unsigned int)t24 >= (unsigned int)0xC) {
                        break;
                    }
                    continue;
                }
                *(unsigned char *)((a5 + 0x2)) = t24;
                *(unsigned char *)((a5 + 0x3)) = ((t16 - (*(int *)((((int)stk + 0) + ((t24 - 1) << 2))))) + 0x1);
                t29 = *(short *)((a5 + 0x0));
                if ((int)(unsigned short)t29 >= 0) {
                    if ((((unsigned short)t29 & 0x3) == 0) && (t30 = *(signed char *)((a5 + 0x2)), (int)(unsigned char)t30 > (int)0x2)) {
                        *(unsigned char *)((a5 + 0x3)) = ((*(signed char *)((a5 + 0x3))) - 1);
                        t24 = (*(short *)((a5 + 0x0)));
                        *(unsigned char *)((a5 + 0x7)) = (((int (*)(int, int, int, Stk12))(syRtcMakeDayOfWeek))(t24, (*(signed char *)((a5 + 0x2))), (*(signed char *)((a5 + 0x3))), *(Stk12 *)(((int)stk + 0))));
                        t24 = a5;
                        t36 = syRtcMakeAgeOfMoon(t24);
                        *(unsigned char *)((a5 + 0x8)) = t36;
                        return t36;
                    }
                    t24 = (*(short *)((a5 + 0x0)));
                    *(unsigned char *)((a5 + 0x7)) = (((int (*)(int, int, int))(syRtcMakeDayOfWeek))(t24, (*(signed char *)((a5 + 0x2))), (*(signed char *)((a5 + 0x3)))));
                    t24 = a5;
                    t41 = syRtcMakeAgeOfMoon(t24);
                    *(unsigned char *)((a5 + 0x8)) = t41;
                    return t41;
                }
                if ((((~(((~(unsigned short)t29) + 0x1) & 0x3)) + 0x1) == 0) && (t42 = *(signed char *)((a5 + 0x2)), (int)(unsigned char)t42 > (int)0x2)) {
                    *(unsigned char *)((a5 + 0x3)) = ((*(signed char *)((a5 + 0x3))) - 1);
                    t24 = (*(short *)((a5 + 0x0)));
                    *(unsigned char *)((a5 + 0x7)) = (((int (*)(int, int, int))(syRtcMakeDayOfWeek))(t24, (*(signed char *)((a5 + 0x2))), (*(signed char *)((a5 + 0x3)))));
                    t24 = a5;
                    t48 = syRtcMakeAgeOfMoon(t24);
                    *(unsigned char *)((a5 + 0x8)) = t48;
                    return t48;
                }
                t24 = (*(short *)((a5 + 0x0)));
                *(unsigned char *)((a5 + 0x7)) = (((int (*)(int, int, int))(syRtcMakeDayOfWeek))(t24, (*(signed char *)((a5 + 0x2))), (*(signed char *)((a5 + 0x3)))));
                t24 = a5;
                t53 = syRtcMakeAgeOfMoon(t24);
                *(unsigned char *)((a5 + 0x8)) = t53;
                return t53;
            }
            t65 = t24;
        } else {
            t65 = 0x1;
        }
    } else {
        t57 = 0x1;
        for (;;) {
            if ((unsigned int)t16 >= (unsigned int)(*(int *)((((int)stk + 0) + (t57 << 2))))) {
                t57 = (t57 + 0x1);
                if ((unsigned int)t57 >= (unsigned int)0xC) {
                    break;
                }
                continue;
            }
            break;
        }
        t65 = t57;
    }
    *(unsigned char *)((a5 + 0x2)) = t65;
    *(unsigned char *)((a5 + 0x3)) = ((t16 - (*(int *)((((int)stk + 0) + ((t65 - 1) << 2))))) + 0x1);
    t67 = *(short *)((a5 + 0x0));
    t68 = ((~(((~(unsigned short)t67) + 0x1) & 0x3)) + 0x1);
    if ((int)(unsigned short)t67 >= 0) {
        t68 = ((unsigned short)t67 & 0x3);
    }
    if ((t68 == 0) && (t70 = *(signed char *)((a5 + 0x2)), (int)(unsigned char)t70 > (int)0x2)) {
        *(unsigned char *)((a5 + 0x3)) = ((*(signed char *)((a5 + 0x3))) - 1);
    }
    *(unsigned char *)((a5 + 0x7)) = (((int (*)(int, int, int))(syRtcMakeDayOfWeek))((*(short *)((a5 + 0x0))), (*(signed char *)((a5 + 0x2))), (*(signed char *)((a5 + 0x3)))));
    t78 = syRtcMakeAgeOfMoon(a5);
    *(unsigned char *)((a5 + 0x8)) = t78;
    return t78;
}

int FUN_0c109cb6(int a4, int a5, int a6, int a7)
{
    int stk[6];
    register int t0;
    register int t6;
    register int t8;
    register float u14;
    register int t15;
    register int t16;
    register int t17;
    register int t19;
    register int t22;
    register int t28;
    register int t23;
    register int t32;

    t0 = *(signed char *)((a4 + 0x17));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        t6 = *(signed char *)((a4 + 0x18));
        if (t6 != 0) {
            if (t6 != 1) {
                if (t6 != 2) {
                    return t6;
                }
                t8 = (((struct o22_short *)(a4))->v);
                (((struct o22_ushort *)(a4))->v) = (t8 + 0x1);
                if ((int)(short)(t8 + 0x1) > (int)0x3C) {
                    (((struct o18_uint *)0xC474B8C)->v) = (FUN_0c119ba4(0x80037, 0x3));
                    return FUN_0c109c58(a4);
                }
                return 0x22;
            }
            (((struct o18_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x18))) + 0x1);
            (((struct o22_ushort *)(a4))->v) = 0x0;
            (((struct o14_uchar *)(((((struct o0_int *)0xC474B8C)->v))))->v) = 0x63;
            (((struct o0_uint *)0xC474B8C)->v) = 0x0;
            FUN_0c056e44(0x23, 0x4);
            FUN_0c115120(0x7, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
            u14 = *(float *)0xC109E74;
            t15 = (((struct o0_int *)0xC5325B0)->v);
            (((struct o98_float *)(t15))->v) = u14;
            (((struct o94_float *)(t15))->v) = u14;
            t16 = (((struct o4_int *)0xC5325B0)->v);
            (((struct o98_float *)(t16))->v) = u14;
            (((struct o94_float *)(t16))->v) = u14;
            return 0x94;
        }
        t17 = *(signed char *)0xC535BAD;
        t19 = t17;
        if (t17 == 1) {
            (((struct o18_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x18))) + 0x1);
            t19 = 0x18;
        }
        return t19;
    }
    t22 = *(signed char *)((a4 + 0x18));
    if (t22 != 0) {
        if (t22 != 1) {
            t28 = t22;
            if (t22 != 2) {
            } else {
                t23 = FUN_0c104cc8(0x3FCF);
                t28 = t23;
                if (t23 != 0) {
                    (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                    (((struct o18_uchar *)(a4))->v) = 0x0;
                    t28 = 0x18;
                }
            }
            return t28;
        }
        t32 = FUN_0c117d54();
        if ((int)t32 < 0) {
            (((struct o18_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x18))) + 0x1);
            return FUN_0c117e76();
        }
        return t32;
    }
    (((struct o18_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x18))) + 0x1);
    (((struct o22_ushort *)(a4))->v) = 0x0;
    *(int *)((int)stk + 0) = 0x53;
    return (FUN_0c117944(0x53));
}

int FUN_0c09e5a0(int a4, int a5, int a6)
{
    register int t0;
    register int t1;

    (((struct o374B_uchar *)(a4))->v) = 0x2;
    (((struct o374B_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x2;
    t0 = ((int (*)(int, int, int))(FUN_0c037bf6))(a4, a5, a6);
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct o3770_int *)(a4))->v)) + 0x28)) = *(struct mv3 *)((a4 + 0x28)); }
    if ((*(short *)((a4 + 0x1C))) == 22) {
        (((struct o5C_float *)(a4))->v) = -6.0f;
    }
    if ((*(short *)((a4 + 0x1C))) == 12) {
        (((struct o5C_float *)(a4))->v) = 0.0f;
        (((struct o50_float *)(a4))->v) = 0.0f;
    }
    if ((*(short *)((a4 + 0x1C))) == 18) {
        (((struct o1B_uchar *)(a4))->v) = 0x3;
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    t1 = (short)(t0 - 1);
    if ((int)(short)(t0 - 1) <= 0) {
        t0 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t0, 0x1, 0x1F, (t0), 0x1, 0x1F);
        FUN_0c07e79c(((((struct o3770_int *)(a4))->v)), 0xFFFFFFFF, 0x5, 0x2A, 0xFFFFFFFF, 0x5, 0x2A);
        t0 = ((int (*)(int))(FUN_0c037bf6))(a4);
        t0 = ((int (*)(int))(FUN_0c037bf6))(((((struct o3770_int *)(a4))->v)));
        FUN_0c038362(((((struct o3770_int *)(a4))->v)));
        t0 = (((struct o3770_int *)(a4))->v);
        (((struct o18_uchar *)(t0))->v) = ((*(signed char *)((t0 + 0x18))) + 0x1);
        (((struct o54_float *)(a4))->v) = 0.0f;
        (((struct o4C_float *)(a4))->v) = 0.0f;
        (((struct o60_float *)(a4))->v) = 0.0f;
        (((struct o58_float *)(a4))->v) = 0.0f;
        (((struct o50_float *)(a4))->v) = -20.0f;
        (((struct o5C_float *)(a4))->v) = -1.0f;
        FUN_0c12ebe4(a4, 0x0);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct o3770_int *)(a4))->v)) + 0x28)) = *(struct mv3 *)((a4 + 0x28)); }
        *(unsigned short *)((a4 + 0x1C)) = 0x1;
        (((struct o382E_ushort *)(a4))->v) = 0x0;
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        t1 = 0x16;
    }
    return t1;
}

int its(int a4, int a5, int a6, int a7)
{
    int stk[11];
    register int t0;
    register int t1;
    register int t3;
    register int t6;
    register int t7;
    register int t14;
    register int t15;
    register int t16;
    register int t27;
    register int t31;
    register int t35;
    register int t36;
    register int t28;

    *(unsigned int *)(((int)stk + 12)) = a5;
    *(unsigned int *)(((int)stk + 0)) = a6;
    *(unsigned int *)(((int)stk + 24)) = 0x1;
    t0 = *(int *)(((int)stk + 12));
    t1 = *(int *)(((int)stk + 0));
    *(unsigned char *)(((t1 + t0) + 0x0)) = 0x0;
    t6 = ((int (*)(int, int, int, int))(FUN_0c187a88))((((int)stk + 0) + 0x24), a4, 0x8, a7);
    t3 = *(int *)(((int)stk + 0));
    *(unsigned int *)(((int)stk + 4)) = (t3 - 1);
    *(unsigned int *)(((int)stk + 20)) = ((((t3 - 1) << 2) << 1) + 0xC20AC98);
    *(unsigned int *)(((int)stk + 16)) = ((*(int *)(((int)stk + 4))) + 0x1);
    t7 = (t1 + t0);
    for (;;) {
        if ((int)(*(int *)(((int)stk + 4))) < 0) {
            return t6;
        }
        t6 = 0x5;
        t6 = ((int)((int)(*(int *)(((int)stk + 16))) / (int)t6));
        t6 = (t6 + 0x1);
        t6 = (t6 << 1);
        t14 = (0x8 - t6);
        t15 = (0x8 - (0x8 - t6));
        t6 = (((int (*)(int, int, int))(FUN_0c187a88))(((0x8 - t6) + (((int)stk + 0) + 0x1C)), ((*(int *)(((int)stk + 20))) + (0x8 - t6)), (0x8 - (0x8 - t6))));
        *(unsigned int *)(((int)stk + 8)) = 0x0;
        *(unsigned int *)(((int)stk + 0)) = 0x0;
        t16 = 0x8;
        for (;;) {
            t6 = (FUN_0c1a3678((t14 + (((int)stk + 0) + 0x24)), (t14 + (((int)stk + 0) + 0x1C)), t15));
            if ((int)t6 >= 0) {
                t6 = (FUN_0c1a3600(0x0, (t14 + (((int)stk + 0) + 0x24)), (t14 + (((int)stk + 0) + 0x1C)), t15));
                *(unsigned int *)(((int)stk + 24)) = t6;
                *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) + t16);
            }
            t16 = ((int)((unsigned int)((int)((unsigned int)t16 + (unsigned int)0x0)) + ((((int)0x0 > (int)t16)) ? 1u : 0u)));
            t16 = (t16 >> 1);
            if (t16 != 0) {
                t6 = (rsfts((t14 + (((int)stk + 0) + 0x1C)), t15, 0x1));
                t27 = *(int *)(((int)stk + 0));
                *(unsigned int *)(((int)stk + 0)) = (t27 + 0x1);
                if ((int)(t27 + 0x1) >= (int)0x4) {
                    t28 = (t27 + 0x1); break;
                }
                continue;
            }
            break;
        }
        t31 = *(int *)(((int)stk + 8));
        if ((*(int *)(((int)stk + 24))) == 0) {
            break;
        }
        *(unsigned char *)(((t7 - 0x1) + 0x0)) = (t31 + 0x30);
        t7 = (t7 - 0x1);
        *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) - 1);
        *(unsigned int *)(((int)stk + 20)) = ((*(int *)(((int)stk + 20))) - 8);
        *(unsigned int *)(((int)stk + 16)) = ((*(int *)(((int)stk + 16))) - 1);
    }
    *(unsigned char *)(((t7 - 0x1) + 0x0)) = (t31 + 0x30);
    t35 = t28;
    t36 = (t7 - 0x1);
    for (;;) {
        t36 = (t36 - 1);
        if ((unsigned int)t36 < (unsigned int)(*(int *)(((int)stk + 12)))) {
            break;
        }
        t35 = 0x30;
        *(unsigned char *)((t36 + 0x0)) = t35;
    }
    return t6;
}

int FUN_0c06b484(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    (((struct o374B_uchar *)(a4))->v) = 0x1;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x37C4 + a4)) = *(struct mv3 *)((((((struct o376C_int *)(a4))->v)) + 0x28)); }
    if (0.0f > ((((struct o50_float *)(a4))->v))) {
        if (!(((((struct o2C_float *)(a4))->v)) > (((((struct o37C8_float *)(a4))->v)) + 50.0f))) {
            (((struct o28_float *)(a4))->v) = ((((struct o37C4_float *)(a4))->v));
            (((struct o30_float *)(a4))->v) = ((((struct o37CC_float *)(a4))->v));
            (((struct o2C_float *)(a4))->v) = (((((struct o37C8_float *)(a4))->v)) + 50.0f);
            *(unsigned short *)((a4 + 0x1C)) = 0x0;
            *(unsigned short *)((a4 + 0x1E)) = 0x0;
            (((struct o20_ushort *)(a4))->v) = 0x0;
            (((struct o22_ushort *)(a4))->v) = 0x0;
            *(unsigned int *)((a4 + 0x38)) = (*(int *)((((((struct o376C_int *)(a4))->v)) + 0x38)));
            FUN_0c07e79c(a4, 0xFFFFFFFF, 0x2, 0x23, 0xFFFFFFFF, 0x2, 0x23);
            FUN_0c0c2d56(((((struct o376C_int *)(a4))->v)), 0x5, (*(signed char *)((a4 + 0x1))));
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            (((struct o1B_uchar *)(a4))->v) = 0x0;
            t0 = 0x1B;
        } else {
            t1 = math_angle_between_points_xz((a4 + 0x28), (0x37C4 + a4));
            (((struct o4C_float *)(a4))->v) = (-((math_sin_angle16(t1)) * ((((struct o3790_float *)(a4))->v))));
            (((struct o54_float *)(a4))->v) = (-((math_cos_angle16(t1)) * ((((struct o3790_float *)(a4))->v))));
            t1 = *(int *)((a4 + 0x38));
            t2 = *(int *)((((((struct o376C_int *)(a4))->v)) + 0x38));
            t3 = *(short *)((a4 + 0x1C));
            t4 = (unsigned short)(t1 - t2);
            if ((0x8000 & (unsigned short)(t1 - t2)) != 0) {
                t4 = ((unsigned short)(t1 - t2) | 0xFFFF0000);
            }
            t1 = (int)((int)t4 / (int)t3);
            *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + t1);
            t0 = t1;
        }
        t1 = t0;
    } else {
        t0 = math_angle_between_points_xz((a4 + 0x28), (0x37C4 + a4));
        (((struct o4C_float *)(a4))->v) = (-((math_sin_angle16(t0)) * ((((struct o3790_float *)(a4))->v))));
        (((struct o54_float *)(a4))->v) = (-((math_cos_angle16(t0)) * ((((struct o3790_float *)(a4))->v))));
        t0 = *(int *)((a4 + 0x38));
        t2 = *(int *)((((((struct o376C_int *)(a4))->v)) + 0x38));
        t3 = *(short *)((a4 + 0x1C));
        t4 = (unsigned short)(t0 - t2);
        if ((0x8000 & (unsigned short)(t0 - t2)) != 0) {
            t4 = ((unsigned short)(t0 - t2) | 0xFFFF0000);
        }
        t0 = (int)((int)t4 / (int)t3);
        *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + t0);
        t1 = t0;
    }
    return t1;
}

int FUN_0c1067fa(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            t0 = *(signed char *)((a4 + 0x16));
            if (t0 != 0) {
                if (t0 != 1) {
                    if (t0 != 2) {
                        return t0;
                    }
                    t0 = FUN_0c104cc8(0x3FCF);
                    if (t0 != 0) {
                        return FUN_0c106744(a4);
                    }
                    return t0;
                }
                t0 = FUN_0c117d54();
                if ((int)t0 < 0) {
                    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                    return FUN_0c117e76();
                }
                return t0;
            }
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
            return (FUN_0c117944(0x21));
        }
        (((struct o0_uint *)0xC474404)->v) = (FUN_0c10527c(((((struct o0_int *)0xC474404)->v)), 0x0, ((*(int *)0xC474714) - 1)));
        t0 = FUN_0c05f22c(0x101);
        if (t0 != 0) {
            t0 = FUN_0c108568(((((struct o0_int *)0xC474404)->v)), 0x0);
            if (t0 != 0) {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                (((struct o16_uchar *)(a4))->v) = 0x0;
                FUN_0c1086d8(((((struct o8_int *)0xC474404)->v)));
                return FUN_0c05aab6(0x0, 0x3);
            }
        }
        t0 = FUN_0c104db8();
        if (t0 != 0) {
            (((struct o14_uchar *)(a4))->v) = 0x63;
            (((struct o15_uchar *)(a4))->v) = 0x0;
            return 0x15;
        }
        return t0;
    }
    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    return (FUN_0c117944(0x20));
}

int FUN_0c2e83ae(void)
{
    int stk[8];
    register int t2;
    register int t4;
    register int t6;
    register int t8;
    register int t29;
    register int t36;
    register int t38;
    register int t40;
    register int t42;

    if (((unsigned char)(*(signed char *)0xC8D6471) & 64) != 0) {
        *(int *)((int)stk + 16) = 0x0;
        t2 = (*(signed char *)0xC8D6470);
        *(int *)((int)stk + 12) = t2;
        t4 = (*(signed char *)0xC8D646F);
        *(int *)((int)stk + 8) = t4;
        t6 = (*(signed char *)0xC8D644C);
        *(int *)((int)stk + 4) = t6;
        t8 = (*(signed char *)0xC8D6442);
        *(int *)((int)stk + 0) = t8;
        FUN_0c2d6c38(0x7, (*(signed char *)0xC8D6630), (*(signed char *)0xC8D6631), 0x0, t8, t6, t4, t2, 0x0);
    }
    (((struct oA_uchar *)0xC8D678E)->v) = ((*(signed char *)0xC8D6798) & 0xBF);
    (((struct o0_uchar *)0xC8D678E)->v) = ((*(signed char *)0xC8D678E) & 0x7F);
    (((struct o9_uchar *)0xC8D678E)->v) = ((*(signed char *)0xC8D6797) & 0xFD);
    t29 = 0x1;
    if (((unsigned char)(*(signed char *)0xC8D6471) & 0x3) == 3) {
    } else {
        t29 = 0x5;
        if (((unsigned char)(*(signed char *)0xC8D6471) & 0x1) != 0) {
        } else {
            t29 = 0x0;
            if (((unsigned char)(*(signed char *)0xC8D6471) & 4) != 0) {
                t29 = 0x2;
            }
        }
    }
    FUN_0c2e8574(((int)stk + 20), (((int)stk + 20) + 0x4));
    *(int *)((int)stk + 16) = 0x0;
    t36 = (*(signed char *)(((int)stk + 24)));
    *(int *)((int)stk + 12) = t36;
    t38 = (*(signed char *)(((int)stk + 20)));
    *(int *)((int)stk + 8) = t38;
    t40 = (*(signed char *)0xC8D644C);
    *(int *)((int)stk + 4) = t40;
    t42 = (*(signed char *)0xC8D6442);
    *(int *)((int)stk + 0) = t42;
    return (FUN_0c2d6c38(0x6, (*(signed char *)0xC8D6630), (*(signed char *)0xC8D6631), t29, t42, t40, t38, t36, 0x0));
}

int FUN_0c2f1804(int a4, int a5, int a6)
{
    int stk[10];
    register int t2;
    register int t13;

    *(unsigned int *)(((int)stk + 32)) = a5;
    *(unsigned int *)(((int)stk + 36)) = a6;
    *(unsigned short *)((a4 + 0x2)) = 0x1;
    *(int *)((int)stk + 24) = (0xAA + a4);
    *(int *)((int)stk + 20) = (a4 + 0x10);
    *(int *)((int)stk + 16) = (a4 + 0x18);
    *(int *)((int)stk + 12) = (a4 + 0x14);
    *(int *)((int)stk + 8) = (a4 + 0xE);
    *(int *)((int)stk + 4) = (a4 + 0xF);
    *(int *)((int)stk + 0) = (a4 + 0xD);
    t2 = ADX_DecodeInfoWav((*(int *)(((int)stk + 32))), (*(int *)(((int)stk + 36))), (((int)stk + 0) + 0x1C), (a4 + 0xC), (a4 + 0xD), (a4 + 0xF), (a4 + 0xE), (a4 + 0x14), (a4 + 0x18), (a4 + 0x10), (0xAA + a4));
    t13 = 0x0;
    if ((int)t2 < 0) {
    } else {
        *(unsigned short *)((a4 + 0x1C)) = 0x0;
        (((struct o4A_ushort *)(a4))->v) = 0x0;
        (((struct o48_ushort *)(a4))->v) = 0x0;
        (((struct o26_ushort *)(a4))->v) = 0x0;
        (((struct o24_ushort *)(a4))->v) = 0x0;
        *(unsigned int *)((a4 + 0x34)) = 0x0;
        *(unsigned int *)((a4 + 0x30)) = 0x0;
        *(unsigned int *)((a4 + 0x2C)) = 0x0;
        *(unsigned int *)((a4 + 0x28)) = 0x0;
        *(unsigned int *)((a4 + 0x20)) = 0x0;
        (((struct o58_uint *)(a4))->v) = (*(signed char *)((a4 + 0xE)));
        (((struct o5C_uint *)(a4))->v) = (*(signed char *)((a4 + 0xF)));
        (((struct o60_uint *)(a4))->v) = (*(int *)((a4 + 0x10)));
        (((struct o64_uint *)(a4))->v) = (*(int *)((a4 + 0x3C)));
        (((struct o68_uint *)(a4))->v) = ((((struct o40_int *)(a4))->v));
        (((struct o6C_uint *)(a4))->v) = ((((struct o44_int *)(a4))->v));
        (((struct o7C_ushort *)(a4))->v) = ((((struct o48_short *)(a4))->v));
        (((struct o7E_ushort *)(a4))->v) = ((((struct o4A_short *)(a4))->v));
        (((struct o80_uint *)(a4))->v) = (a4 + 0x4C);
        (((struct o9C_uint *)(a4))->v) = 0x0;
        (((struct o98_uint *)(a4))->v) = 0x0;
        (((struct oA8_ushort *)(a4))->v) = 0x1;
        memset((a4 + 0x4C), 0x0, 0x4);
        t13 = (*(short *)(((int)stk + 28)));
    }
    return t13;
}

int kmiSetFBSurfaceDesc(int a4)
{
    int stk[7];
    register int t1;
    register int t2;
    register int t4;
    register int t8;
    register int t11;
    register int t12;
    register int t22;

    t1 = (((struct o4_int *)0xC300144)->v);
    *(unsigned int *)(((((int)stk + 0) + 0x4) + 0x0)) = ((((struct o0_int *)0xC300144)->v));
    *(unsigned int *)(((((int)stk + 0) + 0x4) + 0x4)) = t1;
    t2 = (((struct oC_int *)0xC300144)->v);
    *(unsigned int *)(((((int)stk + 0) + 0x4) + 0x8)) = ((((struct o8_int *)0xC300144)->v));
    *(unsigned int *)(((((int)stk + 0) + 0x4) + 0xC)) = t2;
    t4 = (((struct o14_int *)0xC300144)->v);
    *(unsigned int *)(((((int)stk + 0) + 0x4) + 0x10)) = ((((struct o10_int *)0xC300144)->v));
    *(unsigned int *)(((((int)stk + 0) + 0x4) + 0x14)) = t4;
    t8 = 0x2;
    if (((*(int *)((a4 + 0x4))) & 0x2) != 0) {
    } else {
        t8 = (*(int *)((a4 + 0xC)));
    }
    *(unsigned int *)(((int)stk + 0)) = 0x0;
    t11 = *(int *)((a4 + 0x8));
    if ((unsigned int)0x0 < (unsigned int)t8) {
        for (;;) {
            t12 = *(int *)((t11 + 0x0));
            *(unsigned int *)((t12 + 0x0)) = 0x1;
            *(unsigned int *)((t12 + 0x8)) = ((((struct o0_int *)0xC8BE7C0)->v));
            *(unsigned int *)((t12 + 0x4)) = (*(int *)((((((((struct o0_int *)0xC8BE7C0)->v)) << 2) + (((int)stk + 0) + 0x4)) + 0x0)));
            *(unsigned int *)((t12 + 0x18)) = 0x0;
            if (((((struct o14_int *)0xC8BE7C0)->v)) != 0) {
                *(unsigned int *)((t12 + 0x18)) = ((*(int *)((t12 + 0x18))) | 0x1);
            }
            kmyGetDisplayParametersInfo(0x7, 0x0, (t12 + 0xC));
            kmyGetDisplayParametersInfo(0x8, 0x0, (t12 + 0x10));
            t22 = *(int *)(((int)stk + 0));
            *(unsigned int *)(((int)stk + 0)) = (t22 + 0x1);
            t11 = (t11 + 0x4);
            if ((unsigned int)(t22 + 0x1) >= (unsigned int)t8) {
                break;
            }
        }
    }
    return 0x0;
}

int ADXSJD_Create(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    t0 = *(int *)((a6 + 0x0));
    t1 = 0x0;
    for (;;) {
        if ((*(signed char *)((((t1 * 0x98) + 0xC8CAC04) + 0x0))) != 0) {
            t1 = (t1 + 0x1);
            if ((int)t1 >= (int)0x8) {
                break;
            }
            continue;
        }
        break;
    }
    t2 = 0x0;
    if (t1 != 8) {
        t3 = SJRBF_GetBufPtr(t0);
        t4 = FUN_0c2c671e(t0);
        t5 = SJRBF_GetXtrSize(t0);
        t0 = ADXB_Create(a5, t3, ((unsigned int)t4 >> 1), (((unsigned int)t4 >> 1) + ((unsigned int)t5 >> 1)));
        *(unsigned int *)((((t1 * 0x98) + 0xC8CAC04) + 0x4)) = t0;
        ADXB_EntryAddWrFunc(t0, 0xC2C34C0, ((t1 * 0x98) + 0xC8CAC04));
        if ((*(int *)((((t1 * 0x98) + 0xC8CAC04) + 0x4))) == 0) {
            t0 = 0x0;
        } else {
            *(unsigned int *)((((t1 * 0x98) + 0xC8CAC04) + 0x8)) = a4;
            *(unsigned char *)((((t1 * 0x98) + 0xC8CAC04) + 0x2)) = a5;
            if ((int)a5 > 0) {
                t3 = 0x0;
                t4 = 0x0;
                for (;;) {
                    t4 = (t4 + 0x1);
                    *(unsigned int *)((((((t1 * 0x98) + 0xC8CAC04) + 0xC) + t3) + 0x0)) = (*(int *)((a6 + t3)));
                    t3 = (t3 + 0x4);
                    if ((int)t4 >= (int)a5) {
                        break;
                    }
                }
            }
            *(unsigned char *)((((t1 * 0x98) + 0xC8CAC04) + 0x1)) = 0x0;
            adxsjd_clear(((t1 * 0x98) + 0xC8CAC04));
            (((struct o48_uint *)(((t1 * 0x98) + 0xC8CAC04)))->v) = 0x0;
            (((struct o4C_uint *)(((t1 * 0x98) + 0xC8CAC04)))->v) = 0x0;
            (((struct o50_uint *)(((t1 * 0x98) + 0xC8CAC04)))->v) = 0x0;
            (((struct o54_uint *)(((t1 * 0x98) + 0xC8CAC04)))->v) = 0x0;
            *(unsigned char *)((((t1 * 0x98) + 0xC8CAC04) + 0x0)) = 0x1;
            t0 = ((t1 * 0x98) + 0xC8CAC04);
        }
        t2 = t0;
    }
    return t2;
}

float FUN_0c134118(int a4)
{
    int stk[4];
    register int t0;
    register int t7;
    register float u8;
    register float u11;
    register float u15;
    register float u16;

    t0 = *(int *)((a4 + 0x10));
    *(unsigned int *)(((int)stk + 0)) = t0;
    thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((t0 + 0x1))) * (short)0x3938) + 0xC53258C))) + 0x28), (((int)stk + 0) + 0x4));
    *(float *)(((int)stk + 8)) = ((*(float *)(((int)stk + 8))) + ((((struct o0_float *)0xC13425C)->v)));
    *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + 0x800);
    t7 = *(int *)((a4 + 0x38));
    *(unsigned int *)((a4 + 0x38)) = (t7 & 0xFFFF);
    u8 = (((struct o8_float *)0xC13425C)->v);
    u11 = (*(float *)(((int)stk + 4)));
    u11 = u11 + u8 * (math_sin_angle16((t7 & 0xFFFF)));
    *(float *)(((int)stk + 4)) = u11;
    u15 = (*(float *)(((int)stk + 12)));
    u15 = u15 + u8 * (math_cos_angle16((*(int *)((a4 + 0x38)))));
    *(float *)(((int)stk + 12)) = u15;
    u16 = (((struct o14_float *)0xC13425C)->v);
    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((((struct o4_float *)(((int)stk + 0)))->v)) - ((((struct o28_float *)(a4))->v))) / u16));
    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((((struct o8_float *)(((int)stk + 0)))->v)) - ((((struct o2C_float *)(a4))->v))) / u16));
    (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((((struct oC_float *)(((int)stk + 0)))->v)) - ((((struct o30_float *)(a4))->v))) / u16));
    return u8;
}

int FUN_0c1a019a(int a4, int a5, int a6, int a7)
{
    int stk[33];
    register int t2;
    register int t7;
    register int t8;
    register int t9;
    register int t10;
    register int t13;
    register int t18;
    register int t11;

    FUN_0c1a0ff0((((int)stk + 0) + 0x44), a5);
    FUN_0c1a1354(((int)stk + 0), a5);
    t2 = *(signed char *)(((int)stk + 90));
    if ((int)(unsigned char)t2 > (int)(unsigned char)(*(signed char *)((a4 + 0x9)))) {
        *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x1);
        t18 = (FUN_0c1a0254(a4));
    } else {
        *(unsigned char *)((a4 + 0xC)) = t2;
        t7 = *(int *)((a4 + 0x4));
        *(unsigned char *)((a4 + 0xD)) = ((*(signed char *)((a4 + 0xD))) & 0xFE);
        *(unsigned char *)(((int)stk + 90)) = 0x6;
        { struct mv16 { int w[16]; }; *(struct mv16 *)(((((unsigned short)(unsigned char)t2 * (unsigned short)0x8C) + t7) + 0x8)) = *(struct mv16 *)((((int)stk + 0) + 0x44)); }
        t8 = ((int)stk + 0);
        t9 = (((int)stk + 0) + 68);
        t10 = ((((unsigned short)(unsigned char)t2 * (unsigned short)0x8C) + t7) + 0x48);
        for (;;) { t11 = *(int *)t8; t8 = (t8 + 4); if ((unsigned int)t9 < (unsigned int)t8) break; *(unsigned int *)t10 = t11; t10 = (t10 + 4); }
        t13 = FUN_0c1a11d0(((int)stk + 0), (*(int *)((a5 + 0x0))), 0x0);
        *(unsigned int *)((a5 + 0x0)) = t13;
        *(unsigned int *)((a5 + 0x0)) = (FUN_0c1a0ec4((((int)stk + 0) + 0x44), t13, 0x1));
        *(unsigned int *)((a4 + 0x28)) = ((*(int *)((a4 + 0x28))) + 0x1);
        t18 = (FUN_0c1a02a6((*(int *)((a5 + 0x0)))));
    }
    return t18;
}

int FUN_0c0c8030(int a4)
{
    register int t0;
    register float u0;
    register float u1;
    register float u2;
    register float u3;

    t0 = *(signed char *)((a4 + 0x1));
    (((struct oA4_uint *)(a4))->v) = 0x0;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x28)); }
    u0 = *(float *)0xC0C8164;
    u1 = math_sin_angle16((*(int *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x38))));
    u2 = (((struct o378C_float *)((((short)t0 * (short)0x3938) + 0xC532498)))->v);
    u3 = (u1 * u2);
    u1 = ((((struct o28_float *)(a4))->v));
    u1 = u1 + u0 * u3;
    (((struct o28_float *)(a4))->v) = u1;
    u1 = math_cos_angle16((*(int *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x38))));
    u2 = (((struct o378C_float *)((((short)t0 * (short)0x3938) + 0xC532498)))->v);
    u3 = (u1 * u2);
    u1 = ((((struct o30_float *)(a4))->v));
    u1 = u1 + u0 * u3;
    (((struct o30_float *)(a4))->v) = u1;
    (((struct o2C_float *)(a4))->v) = ((((struct o2C_float *)((((short)t0 * (short)0x3938) + 0xC532498)))->v));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x34)) = *(struct mv3 *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x34)); }
    (((struct o5C_float *)(a4))->v) = 0.0f;
    (((struct o60_float *)(a4))->v) = 0.0f;
    (((struct o58_float *)(a4))->v) = 0.0f;
    (((struct o50_float *)(a4))->v) = 0.0f;
    (((struct o54_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    return FUN_0c0c2d56(a4, 0x9, (*(signed char *)((a4 + 0x1))));
}

int FUN_0c0c81fe(int a4)
{
    register int t0;
    register float u0;
    register float u1;
    register float u2;

    t0 = *(signed char *)((a4 + 0x1));
    (((struct oA4_uint *)(a4))->v) = 0x0;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x28)); }
    u0 = math_sin_angle16((*(int *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x38))));
    u1 = (((struct o378C_float *)((((short)t0 * (short)0x3938) + 0xC532498)))->v);
    u2 = (u0 * u1);
    u0 = ((((struct o28_float *)(a4))->v));
    u0 = u0 + 170.0f * u2;
    (((struct o28_float *)(a4))->v) = u0;
    u0 = math_cos_angle16((*(int *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x38))));
    u1 = (((struct o378C_float *)((((short)t0 * (short)0x3938) + 0xC532498)))->v);
    u2 = (u0 * u1);
    u0 = ((((struct o30_float *)(a4))->v));
    u0 = u0 + 170.0f * u2;
    (((struct o30_float *)(a4))->v) = u0;
    (((struct o2C_float *)(a4))->v) = ((((struct o2C_float *)((((short)t0 * (short)0x3938) + 0xC532498)))->v));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x34)) = *(struct mv3 *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x34)); }
    (((struct o5C_float *)(a4))->v) = 0.0f;
    (((struct o60_float *)(a4))->v) = 0.0f;
    (((struct o58_float *)(a4))->v) = 0.0f;
    (((struct o50_float *)(a4))->v) = 0.0f;
    (((struct o54_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    return FUN_0c0c2d56(a4, 0x9, (*(signed char *)((a4 + 0x1))));
}
