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

int FUN_0c083e00(int a4, int a5, int a6)
{
    int stk[19];
    register int t0;
    register int t15;
    register int t16;
    register int t61;
    register int t62;
    register int t70;
    register int t71;
    register int t77;
    register int t81;
    register int t82;
    register int t100;
    register int t101;
    register int t106;
    register int t121;
    register int t122;
    register int t129;
    register int t130;
    register int t131;
    register int t136;
    register float u138;
    register float u139;
    register float u140;
    register float u141;
    register float u144;
    register int t181;
    register int t171;
    register int t35;
    register int t36;
    register int t40;
    register int t41;
    int t97;
    register int t109;
    register int t110;
    register int t114;
    register int t115;
    int t127;

    t0 = ((int (*)(int, int, int))(FUN_0c187798))(a4, a5, a6);
    (((struct o3743_uchar *)(a4))->v) = 0x0;
    (((struct o382A_ushort *)(a4))->v) = 0x0;
    (((struct o3757_uchar *)(a4))->v) = 0x0;
    FUN_0c0733b0(a4);
    if ((*(signed char *)((a4 + 0x371D))) == 1) {
        (((struct o371D_uchar *)(a4))->v) = 0x0;
    }
    FUN_0c067734(a4);
    if ((unsigned int)(signed char)a5 >= (unsigned int)0x12) {
        (((struct o374A_uchar *)(a4))->v) = 0x3C;
        (((struct o382E_ushort *)(a4))->v) = 0x0;
        t181 = 0x382E;
    } else {
        switch (((signed char)a5 << 1)) {
            case 0:
            {
                if (((((struct o160_float *)(a4))->v)) == 0.0f) {
                    t171 = (FUN_0c085cac(a4, 0xE, 0x0));
                } else {
                    (((struct o3715_uchar *)(a4))->v) = 0x17;
                    (((struct o15_uchar *)(a4))->v) = a5;
                    FUN_0c081dfc(a4);
                    FUN_0c067438(a4);
                    if (((((struct o28_float *)(a4))->v)) > 0.0f) {
                        *(unsigned int *)((a4 + 0x38)) = 0x4000;
                    } else {
                        *(unsigned int *)((a4 + 0x38)) = 0xC000;
                    }
                    t15 = *(signed char *)((a4 + 0x2));
                    t16 = *(signed char *)(((0x371C + a4) + 0x0));
                    (((struct o3790_float *)(a4))->v) = ((((struct o40_float *)(((((((t16 << 1) + t16) << 2) << 2) << 1) + (0xC259E54 + (((((t15 << 1) + t15) << 2) << 2) << 2)))))->v));
                    (((struct o4C_float *)(a4))->v) = ((math_sin_angle16((*(int *)((a4 + 0x38))))) * ((((struct o3790_float *)(a4))->v)));
                    (((struct o54_float *)(a4))->v) = ((math_cos_angle16((*(int *)((a4 + 0x38))))) * ((((struct o3790_float *)(a4))->v)));
                    (((struct o60_float *)(a4))->v) = 0.0f;
                    (((struct o58_float *)(a4))->v) = 0.0f;
                    (((struct o5C_float *)(a4))->v) = 0.0f;
                    (((struct o50_float *)(a4))->v) = 0.0f;
                    FUN_0c07e868(a4, 0x2, 0x0, 0x0);
                    *(unsigned short *)((a4 + 0x1C)) = 0x1E;
                    (((struct o374A_uchar *)(a4))->v) = 0x3C;
                    (((struct o382E_ushort *)(a4))->v) = 0x0;
                    t171 = 0x382E;
                }
            }
                break;
            case 2:
            {
                (((struct o3715_uchar *)(a4))->v) = 0x17;
                (((struct o15_uchar *)(a4))->v) = a5;
                (((struct o371D_uchar *)(a4))->v) = 0x0;
                if ((unsigned char)(*(signed char *)((a4 + 0x3721))) == 25) {
                    FUN_0c07e868(a4, 0x9, 0x0, 0x0);
                    (((struct o60_float *)(a4))->v) = 0.0f;
                    (((struct o58_float *)(a4))->v) = 0.0f;
                    (((struct o54_float *)(a4))->v) = 0.0f;
                    (((struct o4C_float *)(a4))->v) = 0.0f;
                    (((struct o50_float *)(a4))->v) = 0.0f;
                    (((struct o5C_float *)(a4))->v) = -2.0f;
                    (((struct o16_uchar *)(a4))->v) = 0x0;
                } else {
                    if (((((struct o160_float *)(a4))->v)) == 0.0f) {
                        *(int *)((int)stk + 8) = 0xB;
                        *(int *)((int)stk + 4) = 0x0;
                        *(int *)((int)stk + 0) = 0xFFFFFFFF;
                        t35 = 0xB;
                        t36 = 0x0;
                        t40 = 0x0;
                        t41 = 0xB;
                    } else {
                        *(int *)((int)stk + 8) = 0x2F;
                        *(int *)((int)stk + 4) = 0x5;
                        *(int *)((int)stk + 0) = 0xFFFFFFFF;
                        t35 = 0x2F;
                        t36 = 0x5;
                        t40 = 0x5;
                        t41 = 0x2F;
                    }
                    FUN_0c07e79c(a4, 0xFFFFFFFF, t40, t41, 0xFFFFFFFF, t36, t35);
                    (((struct o60_float *)(a4))->v) = 0.0f;
                    (((struct o58_float *)(a4))->v) = 0.0f;
                    (((struct o54_float *)(a4))->v) = 0.0f;
                    (((struct o4C_float *)(a4))->v) = 0.0f;
                    (((struct o50_float *)(a4))->v) = 0.0f;
                    (((struct o5C_float *)(a4))->v) = -2.0f;
                    (((struct o16_uchar *)(a4))->v) = 0x1;
                }
                (((struct o374A_uchar *)(a4))->v) = 0x3C;
                (((struct o382E_ushort *)(a4))->v) = 0x0;
                t171 = 0x382E;
            }
                break;
            case 4:
            {
                (((struct o3715_uchar *)(a4))->v) = 0x17;
                (((struct o15_uchar *)(a4))->v) = a5;
                FUN_0c081e68(a4);
                FUN_0c067438(a4);
                (((struct o3830_ushort *)(a4))->v) = 0x0;
                (((struct o374B_uchar *)(a4))->v) = 0x1;
                *(int *)((int)stk + 8) = 0x2B;
                *(int *)((int)stk + 4) = 0x2;
                *(int *)((int)stk + 0) = 0xFFFFFFFF;
                FUN_0c07e79c(a4, 0xFFFFFFFF, 0x2, 0x2B, 0xFFFFFFFF, 0x2, 0x2B);
                (((struct o3850_uint *)(a4))->v) = 0x0;
                *(unsigned short *)((a4 + 0x1C)) = 0xB4;
                (((struct o22_ushort *)(a4))->v) = 0x0;
                (((struct o374A_uchar *)(a4))->v) = 0x3C;
                (((struct o382E_ushort *)(a4))->v) = 0x0;
                t171 = 0x382E;
            }
                break;
            case 6:
            {
                (((struct o3715_uchar *)(a4))->v) = 0x17;
                (((struct o15_uchar *)(a4))->v) = a5;
                FUN_0c081e68(a4);
                FUN_0c067438(a4);
                (((struct o3830_ushort *)(a4))->v) = 0x0;
                (((struct o374B_uchar *)(a4))->v) = 0x1;
                FUN_0c07e868(a4, 0x2, 0x0, 0x0);
                *(unsigned int *)((a4 + 0x38)) = 0x4000;
                (((struct o28_float *)(a4))->v) = -700.0f;
                (((struct o2C_float *)(a4))->v) = 0.0f;
                (((struct o30_float *)(a4))->v) = 0.0f;
                (((struct o4C_float *)(a4))->v) = ((math_sin_angle16((*(int *)((a4 + 0x38))))) * 9.5f);
                (((struct o54_float *)(a4))->v) = ((math_cos_angle16((*(int *)((a4 + 0x38))))) * 9.5f);
                (((struct o60_float *)(a4))->v) = 0.0f;
                (((struct o58_float *)(a4))->v) = 0.0f;
                (((struct o50_float *)(a4))->v) = 0.0f;
                (((struct o5C_float *)(a4))->v) = ((((struct o37A0_float *)(a4))->v));
                *(unsigned short *)((a4 + 0x1C)) = 0x0;
                (((struct o22_ushort *)(a4))->v) = 0x0;
                (((struct o374A_uchar *)(a4))->v) = 0x3C;
                (((struct o382E_ushort *)(a4))->v) = 0x0;
                t171 = 0x382E;
            }
                break;
            case 8:
            {
                (((struct o3715_uchar *)(a4))->v) = 0x17;
                (((struct o15_uchar *)(a4))->v) = a5;
                FUN_0c067438(a4);
                (((struct o3830_ushort *)(a4))->v) = 0x0;
                (((struct o374B_uchar *)(a4))->v) = 0x1;
                (((struct o4C_float *)(a4))->v) = ((math_sin_angle16((*(int *)((a4 + 0x38))))) * 25.0f);
                (((struct o54_float *)(a4))->v) = ((math_cos_angle16((*(int *)((a4 + 0x38))))) * 25.0f);
                (((struct o60_float *)(a4))->v) = 0.0f;
                (((struct o58_float *)(a4))->v) = 0.0f;
                (((struct o50_float *)(a4))->v) = 20.0f;
                (((struct o5C_float *)(a4))->v) = -2.0f;
                *(int *)((int)stk + 8) = 0xB;
                *(int *)((int)stk + 4) = 0x0;
                t61 = *(signed char *)((a4 + 0x1));
                *(unsigned int *)(((int)stk + 12)) = t61;
                t62 = t61;
                *(int *)((int)stk + 0) = t62;
                FUN_0c07e79c(a4, t61, 0x0, 0xB, t62, 0x0, 0xB);
                (((struct o374A_uchar *)(a4))->v) = 0x3C;
                (((struct o382E_ushort *)(a4))->v) = 0x0;
                t171 = 0x382E;
            }
                break;
            case 10:
            {
                (((struct o3715_uchar *)(a4))->v) = 0x17;
                (((struct o15_uchar *)(a4))->v) = a5;
                FUN_0c081e68(a4);
                FUN_0c067438(a4);
                (((struct o3830_ushort *)(a4))->v) = 0x0;
                (((struct o374B_uchar *)(a4))->v) = 0x1;
                (((struct o4C_float *)(a4))->v) = ((math_sin_angle16((*(int *)((a4 + 0x38))))) * 5.0f);
                (((struct o54_float *)(a4))->v) = ((math_cos_angle16((*(int *)((a4 + 0x38))))) * 5.0f);
                (((struct o60_float *)(a4))->v) = 0.0f;
                (((struct o58_float *)(a4))->v) = 0.0f;
                (((struct o50_float *)(a4))->v) = 35.0f;
                (((struct o5C_float *)(a4))->v) = -2.0f;
                *(int *)((int)stk + 8) = 0xB;
                *(int *)((int)stk + 4) = 0x0;
                t70 = *(signed char *)((a4 + 0x1));
                *(unsigned int *)(((int)stk + 12)) = t70;
                t71 = t70;
                *(int *)((int)stk + 0) = t71;
                FUN_0c07e79c(a4, t70, 0x0, 0xB, t71, 0x0, 0xB);
                (((struct o374A_uchar *)(a4))->v) = 0x3C;
                (((struct o382E_ushort *)(a4))->v) = 0x0;
                t171 = 0x382E;
            }
                break;
            case 12:
            {
                if (((((struct o160_float *)(a4))->v)) == 0.0f) {
                    t171 = (FUN_0c085cac(a4, 0xE, 0x0));
                } else {
                    (((struct o3715_uchar *)(a4))->v) = 0x17;
                    (((struct o15_uchar *)(a4))->v) = a5;
                    FUN_0c081dfc(a4);
                    FUN_0c067438(a4);
                    t77 = math_angle_between_points_xz((a4 + 0x28), (((int)stk + 12) + 0x4));
                    *(unsigned int *)((a4 + 0x38)) = t77;
                    (((struct o4C_float *)(a4))->v) = ((math_sin_angle16(t77)) * 10.0f);
                    (((struct o54_float *)(a4))->v) = ((math_cos_angle16((*(int *)((a4 + 0x38))))) * 10.0f);
                    (((struct o60_float *)(a4))->v) = 0.0f;
                    (((struct o58_float *)(a4))->v) = 0.0f;
                    (((struct o50_float *)(a4))->v) = 40.0f;
                    (((struct o5C_float *)(a4))->v) = -2.0f;
                    *(int *)((int)stk + 8) = 0xB;
                    *(int *)((int)stk + 4) = 0x0;
                    t81 = *(signed char *)((a4 + 0x1));
                    *(unsigned int *)(((int)stk + 12)) = t81;
                    t82 = t81;
                    *(int *)((int)stk + 0) = t82;
                    FUN_0c07e79c(a4, t81, 0x0, 0xB, t82, 0x0, 0xB);
                    (((struct o374A_uchar *)(a4))->v) = 0x3C;
                    (((struct o382E_ushort *)(a4))->v) = 0x0;
                    t171 = 0x382E;
                }
            }
                break;
            case 14:
            {
                (((struct o3715_uchar *)(a4))->v) = 0x17;
                (((struct o15_uchar *)(a4))->v) = a5;
                FUN_0c067438(a4);
                *(unsigned short *)((a4 + 0x1C)) = 0x28;
                (((struct o374A_uchar *)(a4))->v) = 0x3C;
                (((struct o382E_ushort *)(a4))->v) = 0x0;
                t171 = 0x382E;
            }
                break;
            case 16:
            {
                (((struct o3715_uchar *)(a4))->v) = 0x17;
                (((struct o15_uchar *)(a4))->v) = a5;
                FUN_0c081dfc(a4);
                FUN_0c067438(a4);
                FUN_0c07e868(a4, 0x2, 0x0, 0x0);
                *(unsigned int *)((a4 + 0x38)) = 0x0;
                (((struct o4C_float *)(a4))->v) = ((math_sin_angle16(0x0)) * 5.0f);
                (((struct o54_float *)(a4))->v) = ((math_cos_angle16((*(int *)((a4 + 0x38))))) * 5.0f);
                (((struct o50_float *)(a4))->v) = 0.0f;
                *(unsigned short *)((a4 + 0x1C)) = 0xB4;
                (((struct o374A_uchar *)(a4))->v) = 0x3C;
                (((struct o382E_ushort *)(a4))->v) = 0x0;
                t171 = 0x382E;
            }
                break;
            case 18:
            {
                (((struct o3715_uchar *)(a4))->v) = 0x17;
                (((struct o15_uchar *)(a4))->v) = a5;
                *(int *)((int)stk + 8) = 0x22;
                *(int *)((int)stk + 4) = 0x2;
                *(int *)((int)stk + 0) = 0xFFFFFFFF;
                FUN_0c07e79c(a4, 0xFFFFFFFF, 0x2, 0x22, 0xFFFFFFFF, 0x2, 0x22);
                (((struct o374A_uchar *)(a4))->v) = 0x3C;
                (((struct o382E_ushort *)(a4))->v) = 0x0;
                t171 = 0x382E;
            }
                break;
            case 20:
            {
                (((struct o3715_uchar *)(a4))->v) = 0x17;
                (((struct o15_uchar *)(a4))->v) = a5;
                *(int *)((int)stk + 8) = 0x14;
                *(int *)((int)stk + 4) = 0x2;
                *(int *)((int)stk + 0) = 0xFFFFFFFF;
                FUN_0c07e79c(a4, 0xFFFFFFFF, 0x2, 0x14, 0xFFFFFFFF, 0x2, 0x14);
                (((struct o374A_uchar *)(a4))->v) = 0x3C;
                (((struct o382E_ushort *)(a4))->v) = 0x0;
                t171 = 0x382E;
            }
                break;
            case 22:
            {
                (((struct o3715_uchar *)(a4))->v) = 0x17;
                (((struct o15_uchar *)(a4))->v) = a5;
                FUN_0c081e68(a4);
                t100 = 0x0;
                t101 = 0x0;
                for (;;) {
                    if ((int)t100 >= (int)(*(signed char *)((a4 + 0x1)))) {
                        break;
                    }
                    t97 = 0x1;
                    t97 = ((int)t97 << (int)t100);
                    t100 = (t100 + 0x1);
                    if ((((*(short *)(((0xC54099A) + 0x0)))) & t97) == 0) {
                        t101 = (t101 + 0x1);
                    }
                }
                t106 = ((int (*)(int, int))(FUN_0c187798))(t100, t101);
                (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 2000.0f);
                (((struct o371D_uchar *)(a4))->v) = 0x0;
                if (((((struct o160_float *)(a4))->v)) == 0.0f) {
                    *(int *)((int)stk + 8) = 0xB;
                    *(int *)((int)stk + 4) = 0x0;
                    *(int *)((int)stk + 0) = 0xFFFFFFFF;
                    t109 = 0xB;
                    t110 = 0x0;
                    t114 = 0x0;
                    t115 = 0xB;
                } else {
                    *(int *)((int)stk + 8) = 0x2F;
                    *(int *)((int)stk + 4) = 0x5;
                    *(int *)((int)stk + 0) = 0xFFFFFFFF;
                    t109 = 0x2F;
                    t110 = 0x5;
                    t114 = 0x5;
                    t115 = 0x2F;
                }
                FUN_0c07e79c(a4, 0xFFFFFFFF, t114, t115, 0xFFFFFFFF, t110, t109);
                (((struct o60_float *)(a4))->v) = 0.0f;
                (((struct o58_float *)(a4))->v) = 0.0f;
                (((struct o54_float *)(a4))->v) = 0.0f;
                (((struct o4C_float *)(a4))->v) = 0.0f;
                (((struct o50_float *)(a4))->v) = 0.0f;
                (((struct o5C_float *)(a4))->v) = -2.0f;
                *(unsigned short *)((a4 + 0x1C)) = 0xB4;
                (((struct o374A_uchar *)(a4))->v) = 0x3C;
                (((struct o382E_ushort *)(a4))->v) = 0x0;
                t171 = 0x382E;
            }
                break;
            case 24:
            {
                (((struct o3715_uchar *)(a4))->v) = 0x17;
                (((struct o15_uchar *)(a4))->v) = a5;
                FUN_0c081e68(a4);
                FUN_0c067438(a4);
                (((struct o3756_uchar *)(a4))->v) = 0x1;
                if (((((struct o160_float *)(a4))->v)) > 0.0f) {
                    *(int *)((int)stk + 8) = 0xB;
                    *(int *)((int)stk + 4) = 0x0;
                    t121 = *(signed char *)((a4 + 0x1));
                    *(unsigned int *)(((int)stk + 12)) = t121;
                    t122 = t121;
                    *(int *)((int)stk + 0) = t122;
                    FUN_0c07e79c(a4, t121, 0x0, 0xB, t122, 0x0, 0xB);
                } else {
                    *(int *)((int)stk + 8) = 0xB;
                    *(int *)((int)stk + 4) = 0x0;
                    *(int *)((int)stk + 0) = 0xFFFFFFFF;
                    FUN_0c07e79c(a4, 0xFFFFFFFF, 0x0, 0xB, 0xFFFFFFFF, 0x0, 0xB);
                }
                (((struct o3830_ushort *)(a4))->v) = 0x0;
                (((struct o374B_uchar *)(a4))->v) = 0xA;
                (((struct o28_float *)(a4))->v) = 0.0f;
                (((struct o2C_float *)(a4))->v) = -20000.0f;
                (((struct o30_float *)(a4))->v) = -750.0f;
                t129 = 0xA;
                t130 = 0x0;
                t131 = 0x0;
                for (;;) {
                    if ((int)t130 >= (int)(*(signed char *)((a4 + 0x1)))) {
                        break;
                    }
                    t129 = 0xC54099A;
                    t127 = 0x1;
                    t127 = ((int)t127 << (int)t130);
                    t130 = (t130 + 0x1);
                    if ((((*(short *)((t129 + 0x0)))) & t127) != 0) {
                        t131 = (t131 + 0x1);
                    }
                }
                t136 = ((int (*)(int, int))(FUN_0c187798))(t130, t131);
                *(unsigned int *)((a4 + 0x38)) = (math_angle_between_points_xz((a4 + 0x28), (0x37C4 + a4)));
                u138 = (((struct o37C4_float *)(a4))->v);
                u139 = (((struct o28_float *)(a4))->v);
                u140 = (((struct o37CC_float *)(a4))->v);
                u141 = (((struct o30_float *)(a4))->v);
                u144 = ((u141 - u140) * (u141 - u140));
                u144 = u144 + ((u139 - u138)) * ((u139 - u138));
                (((struct o3790_float *)(a4))->v) = (math_signed_sqrt(u144));
                (((struct o4C_float *)(a4))->v) = ((math_sin_angle16((*(int *)((a4 + 0x38))))) * (((((struct o3790_float *)(a4))->v)) / 30.0f));
                (((struct o54_float *)(a4))->v) = ((math_cos_angle16((*(int *)((a4 + 0x38))))) * (((((struct o3790_float *)(a4))->v)) / 30.0f));
                (((struct o60_float *)(a4))->v) = 0.0f;
                (((struct o58_float *)(a4))->v) = 0.0f;
                (((struct o50_float *)(a4))->v) = 10.0f;
                (((struct o5C_float *)(a4))->v) = -1.5f;
                *(unsigned short *)((a4 + 0x1C)) = 0x32;
                (((struct o374A_uchar *)(a4))->v) = 0x3C;
                (((struct o382E_ushort *)(a4))->v) = 0x0;
                t171 = 0x382E;
            }
                break;
            case 26:
            {
                (((struct o3715_uchar *)(a4))->v) = 0x17;
                (((struct o15_uchar *)(a4))->v) = a5;
                (((struct o5C_float *)(a4))->v) = 0.0f;
                (((struct o60_float *)(a4))->v) = 0.0f;
                (((struct o58_float *)(a4))->v) = 0.0f;
                (((struct o50_float *)(a4))->v) = 0.0f;
                (((struct o54_float *)(a4))->v) = 0.0f;
                (((struct o4C_float *)(a4))->v) = 0.0f;
                *(unsigned short *)((a4 + 0x1C)) = 0x3C;
                if (!(((((struct o160_float *)(a4))->v)) > 0.0f)) {
                    FUN_0c081dfc(a4);
                    *(int *)((int)stk + 8) = 0xB;
                    *(int *)((int)stk + 4) = 0x0;
                    *(int *)((int)stk + 0) = 0xFFFFFFFF;
                    FUN_0c07e79c(a4, 0xFFFFFFFF, 0x0, 0xB, 0xFFFFFFFF, 0x0, 0xB);
                    (((struct o5C_float *)(a4))->v) = -2.0f;
                    (((struct o17_uchar *)(a4))->v) = 0x1;
                    t171 = 0x17;
                } else {
                    FUN_0c07e868(a4, 0x9, 0x0, 0x0);
                    (((struct o17_uchar *)(a4))->v) = 0x0;
                    (((struct o374A_uchar *)(a4))->v) = 0x3C;
                    (((struct o382E_ushort *)(a4))->v) = 0x0;
                    t171 = 0x382E;
                }
            }
                break;
            case 28:
            {
                (((struct o3715_uchar *)(a4))->v) = 0x17;
                (((struct o374A_uchar *)(a4))->v) = 0x3C;
                (((struct o382E_ushort *)(a4))->v) = 0x0;
                t171 = 0x382E;
            }
                break;
            case 30:
            {
                (((struct o3715_uchar *)(a4))->v) = 0x17;
                (((struct o15_uchar *)(a4))->v) = a5;
                FUN_0c081dfc(a4);
                FUN_0c067438(a4);
                (((struct o3830_ushort *)(a4))->v) = 0x0;
                (((struct o374B_uchar *)(a4))->v) = 0x1;
                FUN_0c07e868(a4, 0x2, 0x0, 0x0);
                *(unsigned int *)((a4 + 0x38)) = 0x4000;
                (((struct o4C_float *)(a4))->v) = ((math_sin_angle16(0x4000)) * ((((struct o0_float *)0xC08464C)->v)));
                (((struct o54_float *)(a4))->v) = ((math_cos_angle16((*(int *)((a4 + 0x38))))) * ((((struct o0_float *)0xC08464C)->v)));
                (((struct o60_float *)(a4))->v) = 0.0f;
                (((struct o58_float *)(a4))->v) = 0.0f;
                (((struct o50_float *)(a4))->v) = ((((struct o4_float *)0xC08464C)->v));
                (((struct o5C_float *)(a4))->v) = 0.0f;
                *(unsigned short *)((a4 + 0x1C)) = 0x0;
                (((struct o374A_uchar *)(a4))->v) = 0x3C;
                (((struct o382E_ushort *)(a4))->v) = 0x0;
                t171 = 0x382E;
            }
                break;
            case 32:
            {
                (((struct o3715_uchar *)(a4))->v) = 0x17;
                (((struct o15_uchar *)(a4))->v) = a5;
                FUN_0c07e868(a4, 0x7, 0x0, 0x0);
                FUN_0c080d2a(a4);
                *(unsigned short *)((a4 + 0x1C)) = 0xA;
                (((struct o374A_uchar *)(a4))->v) = 0x3C;
                (((struct o382E_ushort *)(a4))->v) = 0x0;
                t171 = 0x382E;
            }
                break;
            default:
            {
                (((struct o3715_uchar *)(a4))->v) = 0x17;
                (((struct o15_uchar *)(a4))->v) = a5;
                FUN_0c067438(a4);
                *(unsigned short *)((a4 + 0x1C)) = 0x28;
                (((struct o374A_uchar *)(a4))->v) = 0x3C;
                (((struct o382E_ushort *)(a4))->v) = 0x0;
                t171 = 0x382E;
            }
                break;
        }
        t181 = t171;
    }
    return t181;
}

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
