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
int ADXB_DecodeHeaderWav(int a4, int a5, int a6);
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

int ADXB_DecodeHeaderWav(int a4, int a5, int a6)
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


