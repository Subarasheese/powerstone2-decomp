/* game/unsorted: functions 0C083E00-0C084B62, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o118_int { char p[0x118]; int v; };
struct o11C_int { char p[0x11C]; int v; };
struct o125_uchar { char p[0x125]; unsigned char v; };
struct o14_float { char p[0x14]; float v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o3715_uchar { char p[0x3715]; unsigned char v; };
struct o371A_uchar { char p[0x371A]; unsigned char v; };
struct o371C_uchar { char p[0x371C]; unsigned char v; };
struct o371D_uchar { char p[0x371D]; unsigned char v; };
struct o3735_uchar { char p[0x3735]; unsigned char v; };
struct o3743_uchar { char p[0x3743]; unsigned char v; };
struct o3749_uchar { char p[0x3749]; unsigned char v; };
struct o374A_uchar { char p[0x374A]; unsigned char v; };
struct o374B_uchar { char p[0x374B]; unsigned char v; };
struct o3756_uchar { char p[0x3756]; unsigned char v; };
struct o3757_uchar { char p[0x3757]; unsigned char v; };
struct o3790_float { char p[0x3790]; float v; };
struct o37A0_float { char p[0x37A0]; float v; };
struct o37B8_float { char p[0x37B8]; float v; };
struct o37C4_float { char p[0x37C4]; float v; };
struct o37CC_float { char p[0x37CC]; float v; };
struct o382A_ushort { char p[0x382A]; unsigned short v; };
struct o382C_ushort { char p[0x382C]; unsigned short v; };
struct o382E_ushort { char p[0x382E]; unsigned short v; };
struct o3830_ushort { char p[0x3830]; unsigned short v; };
struct o3840_short { char p[0x3840]; short v; };
struct o3840_ushort { char p[0x3840]; unsigned short v; };
struct o3850_uint { char p[0x3850]; unsigned int v; };
struct o40_float { char p[0x40]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
int thunk_FUN_0c058310(int, int);
int FUN_0c059df2(int, int);
int FUN_0c067294(int, int);
int FUN_0c067438(int);
int FUN_0c067734(int);
int FUN_0c0733b0(int);
int FUN_0c07c4b0(int, int);
int FUN_0c07c500(int);
int math_angle_between_points_xz(int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07e868(int, int, int, int);
int FUN_0c080320(int, float);
int FUN_0c080d2a(int);
int FUN_0c081dfc(int);
int FUN_0c081e68(int);
int FUN_0c085cac(int, int, int);
int FUN_0c085d0c(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0bb6bc(int);
int FUN_0c13c890(int, int);
int FUN_0c15877c(int, int);
int FUN_0c15c344(int, int, int);
float math_signed_sqrt(float);
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c187798(void);
int FUN_0c083e00(int a4, int a5, int a6);
int FUN_0c0845d2(int a4);
int FUN_0c0845da(int a4);
int FUN_0c084748(int a4);
int FUN_0c0847dc(int a4);
int FUN_0c084858(int a4);
int FUN_0c084924(int a4, int a5);


int FUN_0c0845d2(int a4)
{
    (((struct o3715_uchar *)(a4))->v) = 0x18;
    return 0x3715;
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

int FUN_0c084748(int a4)
{
    int t0;

    (((struct o3715_uchar *)(a4))->v) = 0x1A;
    (((struct o3735_uchar *)(a4))->v) = 0x0;
    t0 = *(signed char *)((a4 + 0x375A));
    if ((t0 != 1) && ((t0 != 2) && ((t0 != 4) && (t0 != 5)))) {
    } else {
        FUN_0c059df2((*(signed char *)((a4 + 0x1))), 0x23);
        FUN_0c15c344(a4, (a4 + 0x28), 0xB);
        FUN_0c15c344(a4, (a4 + 0x28), 0xC);
    }
    return FUN_0c081dfc(a4);
}

int FUN_0c0847dc(int a4)
{
    register int t0;

    if (((((struct o160_float *)(a4))->v)) == 0.0f) {
        t0 = (FUN_0c07e79c(a4, 0xFFFFFFFF, 0x0, 0xB, 0xFFFFFFFF, 0x0, 0xB));
    } else {
        t0 = *(signed char *)((a4 + 0x2));
        if ((t0 != 6) && ((t0 != 7) && ((t0 != 8) && (t0 != 10)))) {
            t0 = (FUN_0c07e79c(a4, 0xFFFFFFFF, 0x0, 0x5, 0xFFFFFFFF, 0x0, 0x5));
        } else {
            t0 = (FUN_0c07e79c(a4, 0xFFFFFFFF, 0x0, 0x6, 0xFFFFFFFF, 0x0, 0x6));
        }
    }
    return t0;
}

int FUN_0c084858(int a4)
{
    register int t0;

    if (((((struct o160_float *)(a4))->v)) == 0.0f) {
        t0 = (FUN_0c07e79c(a4, 0xFFFFFFFF, 0x0, 0xB, 0xFFFFFFFF, 0x0, 0xB));
    } else {
        t0 = *(signed char *)((a4 + 0x2));
        if ((t0 != 4) && (t0 != 8)) {
            t0 = *(signed char *)((a4 + 0x2));
            if ((t0 != 6) && ((t0 != 7) && ((t0 != 8) && (t0 != 10)))) {
                t0 = (FUN_0c07e79c(a4, 0xFFFFFFFF, 0x0, 0x7, 0xFFFFFFFF, 0x0, 0x7));
            } else {
                t0 = (FUN_0c07e79c(a4, 0xFFFFFFFF, 0x0, 0x8, 0xFFFFFFFF, 0x0, 0x8));
            }
        } else {
            FUN_0c07e79c(a4, 0xFFFFFFFF, 0x0, 0x1, 0xFFFFFFFF, 0x0, 0x1);
            (((struct o125_uchar *)(a4))->v) = 0x9;
            t0 = 0x125;
        }
    }
    return t0;
}

int FUN_0c084924(int a4, int a5)
{
    int stk[1];
    register int t9;
    register float u20;
    register int t21;
    register int t22;
    int t1;
    int t8;

    *(unsigned char *)(((int)stk + 0)) = a5;
    if ((((((struct o160_float *)(a4))->v)) == 0.0f) && (t1 = *(signed char *)((a4 + 0x3715)), t1 == 41)) {
        return FUN_0c07c500(a4);
    }
    (((struct o3715_uchar *)(a4))->v) = 0x1B;
    (((struct o371D_uchar *)(a4))->v) = 0x4;
    FUN_0c067734(a4);
    if ((unsigned char)(*(signed char *)((a4 + 0x3721))) != 25) {
        FUN_0c081dfc(a4);
    }
    (((struct o5C_float *)(a4))->v) = 0.0f;
    (((struct o60_float *)(a4))->v) = 0.0f;
    (((struct o58_float *)(a4))->v) = 0.0f;
    (((struct o50_float *)(a4))->v) = 0.0f;
    (((struct o54_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    (((struct o3790_float *)(a4))->v) = 0.0f;
    (((struct o382C_ushort *)(a4))->v) = 0x0;
    (((struct o3749_uchar *)(a4))->v) = 0x1;
    if ((((((struct o160_float *)(a4))->v)) == 0.0f) && (t8 = (((struct o3840_short *)(a4))->v), t8 != 0x270F)) {
        t9 = (((struct o3840_short *)(a4))->v);
        (((struct o3840_ushort *)(a4))->v) = ((t9 - ((int)((int)(short)t9 % (int)0x3C))) + 0x1E);
    }
    if ((*(signed char *)(((int)stk + 0))) == 0) {
        FUN_0c084858(a4);
        *(unsigned short *)((a4 + 0x1C)) = (((((*(signed char *)((a4 + 0x1))) << 8) << 2) << 2) << 1);
        (((struct o15_uchar *)(a4))->v) = 0x0;
    } else {
        FUN_0c0847dc(a4);
        u20 = *(float *)0xC084B6C;
        t21 = (((struct o118_int *)(a4))->v);
        (((struct o98_float *)(t21))->v) = u20;
        (((struct o94_float *)(t21))->v) = u20;
        t22 = (((struct o11C_int *)(a4))->v);
        (((struct o98_float *)(t22))->v) = u20;
        (((struct o94_float *)(t22))->v) = u20;
        *(unsigned short *)((a4 + 0x1C)) = 0x0;
        (((struct o15_uchar *)(a4))->v) = 0x1;
    }
    return 0x15;
}
