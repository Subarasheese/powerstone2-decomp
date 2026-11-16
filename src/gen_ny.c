/* Straight-line functions with calls and guards (batch gen_ny): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o3715_uchar { char p[0x3715]; unsigned char v; };
struct o371D_uchar { char p[0x371D]; unsigned char v; };
struct o371E_uchar { char p[0x371E]; unsigned char v; };
struct o3743_uchar { char p[0x3743]; unsigned char v; };
struct o374A_uchar { char p[0x374A]; unsigned char v; };
struct o374B_uchar { char p[0x374B]; unsigned char v; };
struct o3756_uchar { char p[0x3756]; unsigned char v; };
struct o3757_uchar { char p[0x3757]; unsigned char v; };
struct o3790_float { char p[0x3790]; float v; };
struct o37A0_float { char p[0x37A0]; float v; };
struct o37C4_float { char p[0x37C4]; float v; };
struct o37CC_float { char p[0x37CC]; float v; };
struct o382A_ushort { char p[0x382A]; unsigned short v; };
struct o382E_ushort { char p[0x382E]; unsigned short v; };
struct o3830_ushort { char p[0x3830]; unsigned short v; };
struct o384C_int { char p[0x384C]; int v; };
struct o384C_uint { char p[0x384C]; unsigned int v; };
struct o3850_int { char p[0x3850]; int v; };
struct o3850_uint { char p[0x3850]; unsigned int v; };
struct o386C_uchar { char p[0x386C]; unsigned char v; };
struct o3874_uchar { char p[0x3874]; unsigned char v; };
struct o387C_uchar { char p[0x387C]; unsigned char v; };
struct o3884_uchar { char p[0x3884]; unsigned char v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o40_int { char p[0x40]; int v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o60_int { char p[0x60]; int v; };
struct o8_float { char p[0x8]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB0_float { char p[0xB0]; float v; };
int FUN_0c02b342(int, int);
int FUN_0c02b3ba(int, float, float, float);
int FUN_0c02b502(int);
int FUN_0c037bf6(int, int, int);
int FUN_0c038566(void);
int FUN_0c03f346(int, int, int, int);
int FUN_0c058854(int, int, int, int);
int FUN_0c058b06(int, int, int);
int FUN_0c067438(int);
int FUN_0c0676ce(int);
int FUN_0c067734(int);
int FUN_0c0733b0(int);
int FUN_0c07d666(int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07e868(int, int, int, int);
int FUN_0c080d2a(int);
int FUN_0c081dfc(int);
int FUN_0c081e68(int);
int FUN_0c085cac(int, int, int);
int FUN_0c0c418c(int, int, int, int, float);
int FUN_0c104d4a(int);
int FUN_0c104d70(void);
int FUN_0c104de4(int, int);
int FUN_0c1053d8(int, int);
int FUN_0c113628(void);
int FUN_0c113a74(void);
int FUN_0c113e72(void);
int FUN_0c114044(int);
int FUN_0c1141f4(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c11468c(int);
int FUN_0c118584(int);
int FUN_0c11e1e0(int, int, int, int);
int FUN_0c17c130(int, int, int);
int FUN_0c187798(void);
int FUN_0c187d74(int, int);
int FUN_0c187d88(int);
float math_cos_angle16(int);
float math_signed_sqrt(float);
float math_sin_angle16(int);
int res_cockpit_faces_release_all(void);
int thunk_FUN_0c03f346(int);
int FUN_0c083e00(int a4, int a5, int a6);
int FUN_0c018fd8(int a4);
int FUN_0c114748(int a4, int a5, int a6, int a7, float f4);

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
                    t77 = FUN_0c07d666((a4 + 0x28), (((int)stk + 12) + 0x4));
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
                *(unsigned int *)((a4 + 0x38)) = (FUN_0c07d666((a4 + 0x28), (0x37C4 + a4)));
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

int FUN_0c018fd8(int a4)
{
    int stk[32];
    register int t0;
    register int t1;
    register float t4;
    register float u6;
    register int t9;
    register float t26;
    register float u28;
    register int t31;
    register float u55;
    register int t58;
    int t72;
    register int t88;
    register int t96;
    register int t97;
    register int t99;
    register int t105;
    register int t109;
    register int t126;
    register int t127;
    register int t129;
    register int t135;
    register int t139;
    register int t156;
    register int t157;
    register int t159;
    register int t165;
    register int t169;
    register int t186;
    register int t187;
    register int t189;
    register int t195;
    register int t199;
    register int t212;
    register int t215;
    register int t218;
    register int t221;
    register int t224;
    register int t228;
    register int t283;
    register int t285;
    register int t288;
    register int t325;
    register int t378;
    register int t697;
    register float u390;
    register int t393;
    int t407;
    register int t423;
    register int t431;
    register int t432;
    register int t434;
    register int t440;
    register int t444;
    register int t461;
    register int t462;
    register int t464;
    register int t470;
    register int t474;
    register int t491;
    register int t492;
    register int t494;
    register int t500;
    register int t504;
    register int t521;
    register int t522;
    register int t524;
    register int t530;
    register int t534;
    register int t547;
    register int t550;
    register int t553;
    register int t556;
    register int t559;
    register int t563;
    register int t618;
    register int t620;
    register int t623;
    register int t660;
    register int t726;
    register int t1063;
    register int t731;
    register int t1050;
    register float u743;
    register int t746;
    int t760;
    register int t776;
    register int t784;
    register int t785;
    register int t787;
    register int t793;
    register int t797;
    register int t814;
    register int t815;
    register int t817;
    register int t823;
    register int t827;
    register int t844;
    register int t845;
    register int t847;
    register int t853;
    register int t857;
    register int t874;
    register int t875;
    register int t877;
    register int t883;
    register int t887;
    register int t900;
    register int t903;
    register int t906;
    register int t909;
    register int t912;
    register int t916;
    register int t971;
    register int t973;
    register int t976;
    register int t1013;
    register int t1094;
    register int t1431;
    register int t1099;
    register int t1418;
    register float u1111;
    register int t1114;
    int t1128;
    register int t1144;
    register int t1152;
    register int t1153;
    register int t1155;
    register int t1161;
    register int t1165;
    register int t1182;
    register int t1183;
    register int t1185;
    register int t1191;
    register int t1195;
    register int t1212;
    register int t1213;
    register int t1215;
    register int t1221;
    register int t1225;
    register int t1242;
    register int t1243;
    register int t1245;
    register int t1251;
    register int t1255;
    register int t1268;
    register int t1271;
    register int t1274;
    register int t1277;
    register int t1280;
    register int t1284;
    register int t1339;
    register int t1341;
    register int t1344;
    register int t1381;
    register int t1444;
    register int t1076;
    register int t710;
    register int t362;
    register int t293;
    register float u294;
    register int t628;
    register float u629;
    register int t981;
    register float u982;
    register int t1349;
    register float u1350;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    t362 = t0;
                    if (t0 == 4) {
                        t1 = *(signed char *)((a4 + 0x15));
                        if (t1 != 0) {
                            t362 = t1;
                            if (t1 != 1) {
                            } else {
                                *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
                                t4 = math_cos_angle16(((short)(*(short *)((a4 + 0x1C))) * (short)0x555));
                                u6 = 1.0f;
                                u6 = u6 + (*(float *)0xC01971C) * t4;
                                (((struct o40_float *)(a4))->v) = u6;
                                (((struct o44_float *)(a4))->v) = ((-(math_cos_angle16(((short)(*(short *)((a4 + 0x1C))) * (short)0x555)))) + 1.0f);
                                t9 = *(short *)((a4 + 0x1C));
                                t362 = t9;
                                if (t9 == 0) {
                                    (((struct oA8_uchar *)(a4))->v) = 0x0;
                                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                                    if ((*(signed char *)0xC30503C) != -1) {
                                        *(unsigned char *)0xC30EFA2 = 0x0;
                                    }
                                    t362 = (thunk_FUN_0c03f346(a4));
                                }
                            }
                        } else {
                            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                            (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) & 0xFBFF);
                            (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x10);
                            (((struct o44_float *)(a4))->v) = 1.0f;
                            (((struct o40_float *)(a4))->v) = 1.0f;
                            *(unsigned short *)((a4 + 0x1C)) = 0xC;
                            *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
                            t26 = math_cos_angle16(((short)(*(short *)((a4 + 0x1C))) * (short)0x555));
                            u28 = 1.0f;
                            u28 = u28 + (*(float *)0xC01971C) * t26;
                            (((struct o40_float *)(a4))->v) = u28;
                            (((struct o44_float *)(a4))->v) = ((-(math_cos_angle16(((short)(*(short *)((a4 + 0x1C))) * (short)0x555)))) + 1.0f);
                            t31 = *(short *)((a4 + 0x1C));
                            t362 = t31;
                            if (t31 == 0) {
                                (((struct oA8_uchar *)(a4))->v) = 0x0;
                                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                                if ((*(signed char *)0xC30503C) != -1) {
                                    *(unsigned char *)0xC30EFA2 = 0x0;
                                }
                                t362 = (thunk_FUN_0c03f346(a4));
                            }
                        }
                    }
                } else {
                    if ((*(signed char *)0xC30503C) == (*(signed char *)((a4 + 0x3)))) {
                        (((struct o14_uchar *)(a4))->v) = 0x4;
                        (((struct o15_uchar *)(a4))->v) = 0x0;
                    }
                    *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
                    u55 = 0.899999976f;
                    u55 = u55 + 0.0500000007f * (math_sin_angle16((((*(short *)((a4 + 0x1C))) << 8) << 2)));
                    (((struct oB0_float *)(a4))->v) = u55;
                    t58 = (*(int *)((((*(signed char *)((a4 + 0x3))) << 2) + 0xC20DDFC)));
                    for (;;) {
                        if ((*(short *)((t58 + 0x10))) != 0) {
                            break;
                        }
                        FUN_0c02b502((unsigned short)(*(short *)((t58 + 0x0))));
                        FUN_0c02b3ba((*(int *)((t58 + 0xC))), ((((struct o4_float *)(t58))->v)), ((((struct o8_float *)(t58))->v)), (1.0f + 1.0f));
                        t58 = (t58 + 0x14);
                    }
                    FUN_0c02b502((unsigned short)(*(short *)((t58 + 0x0))));
                    FUN_0c02b3ba((*(int *)((t58 + 0xC))), ((((struct o4_float *)(t58))->v)), ((((struct o8_float *)(t58))->v)), (1.0f + 1.0f));
                    *(unsigned int *)(((int)stk + 0)) = (((int)stk + 0) + 0x30);
                    t72 = *(signed char *)((a4 + 0x3));
                    if (t72 != 23) {
                        if (t72 != 24) {
                            if ((t72 != 26) && (t72 != 67)) {
                                if (t72 != 55) {
                                    if (t72 == 60) {
                                        t88 = *(int *)((a4 + 0x10));
                                        FUN_0c02b342(t88, (*(int *)(((int)stk + 0))));
                                        FUN_0c02b502((unsigned short)(*(short *)(((t58 + 0x14) + 0x0))));
                                        FUN_0c02b3ba((*(int *)(((int)stk + 0))), (((((struct o4_float *)((t58 + 0x14)))->v)) + 168.0f), ((((struct o8_float *)((t58 + 0x14)))->v)), (1.0f + 1.0f));
                                        t96 = FUN_0c187d88((t88 + 0x8));
                                        t97 = ((~(((~(unsigned char)t96) + 0x1) & 0x1)) + 0x1);
                                        if ((int)(unsigned char)t96 >= 0) {
                                            t97 = ((unsigned char)t96 & 0x1);
                                        }
                                        t99 = t96;
                                        if (t97 != 0) {
                                            t99 = (t96 + 0x1);
                                        }
                                        FUN_0c02b502(0x3);
                                        t105 = (int)((unsigned int)((int)((unsigned int)(((((unsigned char)t99 << 1) + (unsigned char)t99) << 2) << 1) + (unsigned int)0x0)) + ((((int)0x0 > (int)(((((unsigned char)t99 << 1) + (unsigned char)t99) << 2) << 1))) ? 1u : 0u));
                                        t109 = (int)((unsigned int)((int)((unsigned int)(t105 >> 1) + (unsigned int)0x0)) + ((((int)0x0 > (int)(t105 >> 1))) ? 1u : 0u));
                                        FUN_0c02b3ba((t88 + 0x8), ((float)(0x140 - (t109 >> 1)) + -24.0f), 180.0f, (1.0f + 1.0f));
                                        FUN_0c02b502(0x7);
                                        t362 = (FUN_0c02b3ba(0xC1A7590, ((float)(((((((unsigned int)(unsigned char)t99 >> 1) - 1) << 1) + (((unsigned int)(unsigned char)t99 >> 1) - 1)) << 2) << 1) + (float)(0x140 - (t109 >> 1))), 180.0f, (1.0f + 1.0f)));
                                    } else {
                                        if (t72 == 32) {
                                            FUN_0c02b342(0xC30A34C, (*(int *)(((int)stk + 0))));
                                            FUN_0c02b502((unsigned short)(*(short *)(((t58 + 0x14) + 0x0))));
                                            FUN_0c02b3ba((*(int *)(((int)stk + 0))), (((((struct o4_float *)((t58 + 0x14)))->v)) + 168.0f), ((((struct o8_float *)((t58 + 0x14)))->v)), (1.0f + 1.0f));
                                            t126 = FUN_0c187d88(0xC30A354);
                                            t127 = ((~(((~(unsigned char)t126) + 0x1) & 0x1)) + 0x1);
                                            if ((int)(unsigned char)t126 >= 0) {
                                                t127 = ((unsigned char)t126 & 0x1);
                                            }
                                            t129 = t126;
                                            if (t127 != 0) {
                                                t129 = (t126 + 0x1);
                                            }
                                            FUN_0c02b502(0x3);
                                            t135 = (int)((unsigned int)((int)((unsigned int)(((((unsigned char)t129 << 1) + (unsigned char)t129) << 2) << 1) + (unsigned int)0x0)) + ((((int)0x0 > (int)(((((unsigned char)t129 << 1) + (unsigned char)t129) << 2) << 1))) ? 1u : 0u));
                                            t139 = (int)((unsigned int)((int)((unsigned int)(t135 >> 1) + (unsigned int)0x0)) + ((((int)0x0 > (int)(t135 >> 1))) ? 1u : 0u));
                                            FUN_0c02b3ba(0xC30A354, ((float)(0x140 - (t139 >> 1)) + -24.0f), 180.0f, (1.0f + 1.0f));
                                            FUN_0c02b502(0x7);
                                            t362 = (FUN_0c02b3ba(0xC1A7590, ((float)(((((((unsigned int)(unsigned char)t129 >> 1) - 1) << 1) + (((unsigned int)(unsigned char)t129 >> 1) - 1)) << 2) << 1) + (float)(0x140 - (t139 >> 1))), 180.0f, (1.0f + 1.0f)));
                                        } else {
                                            if (t72 == 22) {
                                                FUN_0c02b342(0xC30A34C, (*(int *)(((int)stk + 0))));
                                                FUN_0c02b502((unsigned short)(*(short *)(((t58 + 0x14) + 0x0))));
                                                FUN_0c02b3ba((*(int *)(((int)stk + 0))), (((((struct o4_float *)((t58 + 0x14)))->v)) + 168.0f), ((((struct o8_float *)((t58 + 0x14)))->v)), (1.0f + 1.0f));
                                                t156 = FUN_0c187d88(0xC30A354);
                                                t157 = ((~(((~(unsigned char)t156) + 0x1) & 0x1)) + 0x1);
                                                if ((int)(unsigned char)t156 >= 0) {
                                                    t157 = ((unsigned char)t156 & 0x1);
                                                }
                                                t159 = t156;
                                                if (t157 != 0) {
                                                    t159 = (t156 + 0x1);
                                                }
                                                FUN_0c02b502(0x3);
                                                t165 = (int)((unsigned int)((int)((unsigned int)(((((unsigned char)t159 << 1) + (unsigned char)t159) << 2) << 1) + (unsigned int)0x0)) + ((((int)0x0 > (int)(((((unsigned char)t159 << 1) + (unsigned char)t159) << 2) << 1))) ? 1u : 0u));
                                                t169 = (int)((unsigned int)((int)((unsigned int)(t165 >> 1) + (unsigned int)0x0)) + ((((int)0x0 > (int)(t165 >> 1))) ? 1u : 0u));
                                                FUN_0c02b3ba(0xC30A354, ((float)(0x140 - (t169 >> 1)) + -24.0f), 180.0f, (1.0f + 1.0f));
                                                FUN_0c02b502(0x7);
                                                t362 = (FUN_0c02b3ba(0xC1A7590, ((float)(((((((unsigned int)(unsigned char)t159 >> 1) - 1) << 1) + (((unsigned int)(unsigned char)t159 >> 1) - 1)) << 2) << 1) + (float)(0x140 - (t169 >> 1))), 180.0f, (1.0f + 1.0f)));
                                            } else {
                                                if (t72 == 21) {
                                                    FUN_0c02b342(0xC30A34C, (*(int *)(((int)stk + 0))));
                                                    FUN_0c02b502((unsigned short)(*(short *)(((t58 + 0x14) + 0x0))));
                                                    FUN_0c02b3ba((*(int *)(((int)stk + 0))), (((((struct o4_float *)((t58 + 0x14)))->v)) + 168.0f), ((((struct o8_float *)((t58 + 0x14)))->v)), (1.0f + 1.0f));
                                                    t186 = FUN_0c187d88(0xC30A354);
                                                    t187 = ((~(((~(unsigned char)t186) + 0x1) & 0x1)) + 0x1);
                                                    if ((int)(unsigned char)t186 >= 0) {
                                                        t187 = ((unsigned char)t186 & 0x1);
                                                    }
                                                    t189 = t186;
                                                    if (t187 != 0) {
                                                        t189 = (t186 + 0x1);
                                                    }
                                                    FUN_0c02b502(0x3);
                                                    t195 = (int)((unsigned int)((int)((unsigned int)(((((unsigned char)t189 << 1) + (unsigned char)t189) << 2) << 1) + (unsigned int)0x0)) + ((((int)0x0 > (int)(((((unsigned char)t189 << 1) + (unsigned char)t189) << 2) << 1))) ? 1u : 0u));
                                                    t199 = (int)((unsigned int)((int)((unsigned int)(t195 >> 1) + (unsigned int)0x0)) + ((((int)0x0 > (int)(t195 >> 1))) ? 1u : 0u));
                                                    FUN_0c02b3ba(0xC30A354, ((float)(0x140 - (t199 >> 1)) + -24.0f), (((((struct o8_float *)((t58 + 0x14)))->v)) + 72.0f), (1.0f + 1.0f));
                                                    FUN_0c02b502(0x7);
                                                    t362 = (FUN_0c02b3ba(0xC1A7590, ((float)(((((((unsigned int)(unsigned char)t189 >> 1) - 1) << 1) + (((unsigned int)(unsigned char)t189 >> 1) - 1)) << 2) << 1) + (float)(0x140 - (t199 >> 1))), (((((struct o8_float *)((t58 + 0x14)))->v)) + 72.0f), (1.0f + 1.0f)));
                                                } else {
                                                    if (t72 == 70) {
                                                        FUN_0c02b502(0x3);
                                                        t212 = 0xC1A75A0;
                                                        if ((*(signed char *)((a4 + 0x18))) == 0) {
                                                            t212 = 0xC1A7598;
                                                        }
                                                        FUN_0c02b3ba(t212, 416.0f, 204.0f, (1.0f + 1.0f));
                                                        t215 = *(signed char *)((a4 + 0x19));
                                                        t218 = 0xC1A7598;
                                                        if (t215 != 0) {
                                                            t218 = 0xC1A75A0;
                                                            if (t215 != 1) {
                                                                t218 = 0xC1A75A8;
                                                            }
                                                        }
                                                        FUN_0c02b3ba(t218, 416.0f, 228.0f, (1.0f + 1.0f));
                                                        t221 = *(signed char *)((a4 + 0x1A));
                                                        t224 = 0xC1A7598;
                                                        if (t221 != 0) {
                                                            t224 = 0xC1A75B0;
                                                            if (t221 != 1) {
                                                                t224 = 0xC1A75B8;
                                                            }
                                                        }
                                                        t362 = (FUN_0c02b3ba(t224, 416.0f, 252.0f, (1.0f + 1.0f)));
                                                    } else {
                                                        t362 = t72;
                                                        if (t72 == 28) {
                                                            t228 = 0x13;
                                                            if ((*(int *)0xC5426EC) != 0) {
                                                                t228 = 0x7;
                                                            }
                                                            FUN_0c02b502(t228);
                                                            t362 = (FUN_0c02b3ba((*(int *)(((t58 + 0x14) + 0xC))), ((((struct o4_float *)((t58 + 0x14)))->v)), ((((struct o8_float *)((t58 + 0x14)))->v)), (1.0f + 1.0f)));
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    t283 = *(int *)0xC3BABB4;
                                    t285 = (0x16C + t283);
                                    if (((*(int *)((t283 + 0x0))) & 1) == 0) {
                                        t285 = (t283 + 0x8);
                                    }
                                    FUN_0c187d74((((int)stk + 0) + 0x30), t285);
                                    t288 = FUN_0c187d88((((int)stk + 0) + 0x30));
                                    if ((int)(unsigned char)t288 <= (int)0x14) {
                                        FUN_0c02b502(0x7);
                                        t293 = (((int)stk + 0) + 0x30);
                                        u294 = 262.0f;
                                    } else {
                                        (((struct o14_uchar *)((((int)stk + 0) + 0x30)))->v) = 0x0;
                                        FUN_0c02b502(0x7);
                                        FUN_0c02b3ba((((int)stk + 0) + 0x30), 262.0f, 228.0f, (1.0f + 1.0f));
                                        t293 = 0xC1A758C;
                                        u294 = 502.0f;
                                    }
                                    t362 = (FUN_0c02b3ba(t293, u294, 228.0f, (1.0f + 1.0f)));
                                }
                            } else {
                                FUN_0c02b342(0xC30A404, (*(int *)(((int)stk + 0))));
                                FUN_0c02b502(0x3);
                                t362 = (FUN_0c02b3ba((*(int *)(((int)stk + 0))), 248.0f, 156.0f, (1.0f + 1.0f)));
                            }
                        } else {
                            FUN_0c187d74((((int)stk + 0) + 0x8), 0xC3051C4);
                            *(unsigned int *)(((int)stk + 0)) = (((int)stk + 0) + 0x30);
                            FUN_0c02b342((((int)stk + 0) + 0x8), (((int)stk + 0) + 0x30));
                            *(unsigned char *)(((int)stk + 4)) = (FUN_0c187d88((((int)stk + 0) + 0x8)));
                            FUN_0c02b502(0x6);
                            t325 = *(signed char *)(((int)stk + 4));
                            t362 = (FUN_0c02b3ba((*(int *)(((int)stk + 0))), (float)(0x140 - (((int)((unsigned int)((int)((unsigned int)(((((unsigned char)t325 << 1) + (unsigned char)t325) << 2) << 1) + (unsigned int)0x0)) + ((((int)0x0 > (int)(((((unsigned char)t325 << 1) + (unsigned char)t325) << 2) << 1))) ? 1u : 0u))) >> 1)), 180.0f, (1.0f + 1.0f)));
                        }
                    } else {
                        FUN_0c02b342(0xC30999E, (*(int *)(((int)stk + 0))));
                        FUN_0c02b502((unsigned short)(*(short *)(((t58 + 0x14) + 0x0))));
                        t362 = (FUN_0c02b3ba((*(int *)(((int)stk + 0))), ((((struct o4_float *)((t58 + 0x14)))->v)), ((((struct o8_float *)((t58 + 0x14)))->v)), (1.0f + 1.0f)));
                    }
                }
                t710 = t362;
            } else {
                *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
                (((struct o44_float *)(a4))->v) = (math_cos_angle16((((*(short *)((a4 + 0x1C))) << 8) << 2)));
                t378 = *(short *)((a4 + 0x1C));
                t697 = t378;
                if (t378 != 0) {
                } else {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) & 0xFFEF);
                    if ((*(signed char *)0xC30503C) == (*(signed char *)((a4 + 0x3)))) {
                        (((struct o14_uchar *)(a4))->v) = 0x4;
                        (((struct o15_uchar *)(a4))->v) = 0x0;
                    }
                    *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
                    u390 = 0.899999976f;
                    u390 = u390 + 0.0500000007f * (math_sin_angle16((((*(short *)((a4 + 0x1C))) << 8) << 2)));
                    (((struct oB0_float *)(a4))->v) = u390;
                    t393 = (*(int *)((((*(signed char *)((a4 + 0x3))) << 2) + 0xC20DDFC)));
                    for (;;) {
                        if ((*(short *)((t393 + 0x10))) != 0) {
                            break;
                        }
                        FUN_0c02b502((unsigned short)(*(short *)((t393 + 0x0))));
                        FUN_0c02b3ba((*(int *)((t393 + 0xC))), ((((struct o4_float *)(t393))->v)), ((((struct o8_float *)(t393))->v)), (1.0f + 1.0f));
                        t393 = (t393 + 0x14);
                    }
                    FUN_0c02b502((unsigned short)(*(short *)((t393 + 0x0))));
                    FUN_0c02b3ba((*(int *)((t393 + 0xC))), ((((struct o4_float *)(t393))->v)), ((((struct o8_float *)(t393))->v)), (1.0f + 1.0f));
                    *(unsigned int *)(((int)stk + 0)) = (((int)stk + 0) + 0x30);
                    t407 = *(signed char *)((a4 + 0x3));
                    if (t407 != 23) {
                        if (t407 != 24) {
                            if ((t407 != 26) && (t407 != 67)) {
                                if (t407 != 55) {
                                    if (t407 == 60) {
                                        t423 = *(int *)((a4 + 0x10));
                                        FUN_0c02b342(t423, (*(int *)(((int)stk + 0))));
                                        FUN_0c02b502((unsigned short)(*(short *)(((t393 + 0x14) + 0x0))));
                                        FUN_0c02b3ba((*(int *)(((int)stk + 0))), (((((struct o4_float *)((t393 + 0x14)))->v)) + 168.0f), ((((struct o8_float *)((t393 + 0x14)))->v)), (1.0f + 1.0f));
                                        t431 = FUN_0c187d88((t423 + 0x8));
                                        t432 = ((~(((~(unsigned char)t431) + 0x1) & 0x1)) + 0x1);
                                        if ((int)(unsigned char)t431 >= 0) {
                                            t432 = ((unsigned char)t431 & 0x1);
                                        }
                                        t434 = t431;
                                        if (t432 != 0) {
                                            t434 = (t431 + 0x1);
                                        }
                                        FUN_0c02b502(0x3);
                                        t440 = (int)((unsigned int)((int)((unsigned int)(((((unsigned char)t434 << 1) + (unsigned char)t434) << 2) << 1) + (unsigned int)0x0)) + ((((int)0x0 > (int)(((((unsigned char)t434 << 1) + (unsigned char)t434) << 2) << 1))) ? 1u : 0u));
                                        t444 = (int)((unsigned int)((int)((unsigned int)(t440 >> 1) + (unsigned int)0x0)) + ((((int)0x0 > (int)(t440 >> 1))) ? 1u : 0u));
                                        FUN_0c02b3ba((t423 + 0x8), ((float)(0x140 - (t444 >> 1)) + -24.0f), 180.0f, (1.0f + 1.0f));
                                        FUN_0c02b502(0x7);
                                        t697 = (FUN_0c02b3ba(0xC1A7590, ((float)(((((((unsigned int)(unsigned char)t434 >> 1) - 1) << 1) + (((unsigned int)(unsigned char)t434 >> 1) - 1)) << 2) << 1) + (float)(0x140 - (t444 >> 1))), 180.0f, (1.0f + 1.0f)));
                                    } else {
                                        if (t407 == 32) {
                                            FUN_0c02b342(0xC30A34C, (*(int *)(((int)stk + 0))));
                                            FUN_0c02b502((unsigned short)(*(short *)(((t393 + 0x14) + 0x0))));
                                            FUN_0c02b3ba((*(int *)(((int)stk + 0))), (((((struct o4_float *)((t393 + 0x14)))->v)) + 168.0f), ((((struct o8_float *)((t393 + 0x14)))->v)), (1.0f + 1.0f));
                                            t461 = FUN_0c187d88(0xC30A354);
                                            t462 = ((~(((~(unsigned char)t461) + 0x1) & 0x1)) + 0x1);
                                            if ((int)(unsigned char)t461 >= 0) {
                                                t462 = ((unsigned char)t461 & 0x1);
                                            }
                                            t464 = t461;
                                            if (t462 != 0) {
                                                t464 = (t461 + 0x1);
                                            }
                                            FUN_0c02b502(0x3);
                                            t470 = (int)((unsigned int)((int)((unsigned int)(((((unsigned char)t464 << 1) + (unsigned char)t464) << 2) << 1) + (unsigned int)0x0)) + ((((int)0x0 > (int)(((((unsigned char)t464 << 1) + (unsigned char)t464) << 2) << 1))) ? 1u : 0u));
                                            t474 = (int)((unsigned int)((int)((unsigned int)(t470 >> 1) + (unsigned int)0x0)) + ((((int)0x0 > (int)(t470 >> 1))) ? 1u : 0u));
                                            FUN_0c02b3ba(0xC30A354, ((float)(0x140 - (t474 >> 1)) + -24.0f), 180.0f, (1.0f + 1.0f));
                                            FUN_0c02b502(0x7);
                                            t697 = (FUN_0c02b3ba(0xC1A7590, ((float)(((((((unsigned int)(unsigned char)t464 >> 1) - 1) << 1) + (((unsigned int)(unsigned char)t464 >> 1) - 1)) << 2) << 1) + (float)(0x140 - (t474 >> 1))), 180.0f, (1.0f + 1.0f)));
                                        } else {
                                            if (t407 == 22) {
                                                FUN_0c02b342(0xC30A34C, (*(int *)(((int)stk + 0))));
                                                FUN_0c02b502((unsigned short)(*(short *)(((t393 + 0x14) + 0x0))));
                                                FUN_0c02b3ba((*(int *)(((int)stk + 0))), (((((struct o4_float *)((t393 + 0x14)))->v)) + 168.0f), ((((struct o8_float *)((t393 + 0x14)))->v)), (1.0f + 1.0f));
                                                t491 = FUN_0c187d88(0xC30A354);
                                                t492 = ((~(((~(unsigned char)t491) + 0x1) & 0x1)) + 0x1);
                                                if ((int)(unsigned char)t491 >= 0) {
                                                    t492 = ((unsigned char)t491 & 0x1);
                                                }
                                                t494 = t491;
                                                if (t492 != 0) {
                                                    t494 = (t491 + 0x1);
                                                }
                                                FUN_0c02b502(0x3);
                                                t500 = (int)((unsigned int)((int)((unsigned int)(((((unsigned char)t494 << 1) + (unsigned char)t494) << 2) << 1) + (unsigned int)0x0)) + ((((int)0x0 > (int)(((((unsigned char)t494 << 1) + (unsigned char)t494) << 2) << 1))) ? 1u : 0u));
                                                t504 = (int)((unsigned int)((int)((unsigned int)(t500 >> 1) + (unsigned int)0x0)) + ((((int)0x0 > (int)(t500 >> 1))) ? 1u : 0u));
                                                FUN_0c02b3ba(0xC30A354, ((float)(0x140 - (t504 >> 1)) + -24.0f), 180.0f, (1.0f + 1.0f));
                                                FUN_0c02b502(0x7);
                                                t697 = (FUN_0c02b3ba(0xC1A7590, ((float)(((((((unsigned int)(unsigned char)t494 >> 1) - 1) << 1) + (((unsigned int)(unsigned char)t494 >> 1) - 1)) << 2) << 1) + (float)(0x140 - (t504 >> 1))), 180.0f, (1.0f + 1.0f)));
                                            } else {
                                                if (t407 == 21) {
                                                    FUN_0c02b342(0xC30A34C, (*(int *)(((int)stk + 0))));
                                                    FUN_0c02b502((unsigned short)(*(short *)(((t393 + 0x14) + 0x0))));
                                                    FUN_0c02b3ba((*(int *)(((int)stk + 0))), (((((struct o4_float *)((t393 + 0x14)))->v)) + 168.0f), ((((struct o8_float *)((t393 + 0x14)))->v)), (1.0f + 1.0f));
                                                    t521 = FUN_0c187d88(0xC30A354);
                                                    t522 = ((~(((~(unsigned char)t521) + 0x1) & 0x1)) + 0x1);
                                                    if ((int)(unsigned char)t521 >= 0) {
                                                        t522 = ((unsigned char)t521 & 0x1);
                                                    }
                                                    t524 = t521;
                                                    if (t522 != 0) {
                                                        t524 = (t521 + 0x1);
                                                    }
                                                    FUN_0c02b502(0x3);
                                                    t530 = (int)((unsigned int)((int)((unsigned int)(((((unsigned char)t524 << 1) + (unsigned char)t524) << 2) << 1) + (unsigned int)0x0)) + ((((int)0x0 > (int)(((((unsigned char)t524 << 1) + (unsigned char)t524) << 2) << 1))) ? 1u : 0u));
                                                    t534 = (int)((unsigned int)((int)((unsigned int)(t530 >> 1) + (unsigned int)0x0)) + ((((int)0x0 > (int)(t530 >> 1))) ? 1u : 0u));
                                                    FUN_0c02b3ba(0xC30A354, ((float)(0x140 - (t534 >> 1)) + -24.0f), (((((struct o8_float *)((t393 + 0x14)))->v)) + 72.0f), (1.0f + 1.0f));
                                                    FUN_0c02b502(0x7);
                                                    t697 = (FUN_0c02b3ba(0xC1A7590, ((float)(((((((unsigned int)(unsigned char)t524 >> 1) - 1) << 1) + (((unsigned int)(unsigned char)t524 >> 1) - 1)) << 2) << 1) + (float)(0x140 - (t534 >> 1))), (((((struct o8_float *)((t393 + 0x14)))->v)) + 72.0f), (1.0f + 1.0f)));
                                                } else {
                                                    if (t407 == 70) {
                                                        FUN_0c02b502(0x3);
                                                        t547 = 0xC1A75A0;
                                                        if ((*(signed char *)((a4 + 0x18))) == 0) {
                                                            t547 = 0xC1A7598;
                                                        }
                                                        FUN_0c02b3ba(t547, 416.0f, 204.0f, (1.0f + 1.0f));
                                                        t550 = *(signed char *)((a4 + 0x19));
                                                        t553 = 0xC1A7598;
                                                        if (t550 != 0) {
                                                            t553 = 0xC1A75A0;
                                                            if (t550 != 1) {
                                                                t553 = 0xC1A75A8;
                                                            }
                                                        }
                                                        FUN_0c02b3ba(t553, 416.0f, 228.0f, (1.0f + 1.0f));
                                                        t556 = *(signed char *)((a4 + 0x1A));
                                                        t559 = 0xC1A7598;
                                                        if (t556 != 0) {
                                                            t559 = 0xC1A75B0;
                                                            if (t556 != 1) {
                                                                t559 = 0xC1A75B8;
                                                            }
                                                        }
                                                        t697 = (FUN_0c02b3ba(t559, 416.0f, 252.0f, (1.0f + 1.0f)));
                                                    } else {
                                                        t697 = t407;
                                                        if (t407 == 28) {
                                                            t563 = 0x13;
                                                            if ((*(int *)0xC5426EC) != 0) {
                                                                t563 = 0x7;
                                                            }
                                                            FUN_0c02b502(t563);
                                                            t697 = (FUN_0c02b3ba((*(int *)(((t393 + 0x14) + 0xC))), ((((struct o4_float *)((t393 + 0x14)))->v)), ((((struct o8_float *)((t393 + 0x14)))->v)), (1.0f + 1.0f)));
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    t618 = *(int *)0xC3BABB4;
                                    t620 = (0x16C + t618);
                                    if (((*(int *)((t618 + 0x0))) & 1) == 0) {
                                        t620 = (t618 + 0x8);
                                    }
                                    FUN_0c187d74((((int)stk + 0) + 0x30), t620);
                                    t623 = FUN_0c187d88((((int)stk + 0) + 0x30));
                                    if ((int)(unsigned char)t623 <= (int)0x14) {
                                        FUN_0c02b502(0x7);
                                        t628 = (((int)stk + 0) + 0x30);
                                        u629 = 262.0f;
                                    } else {
                                        (((struct o14_uchar *)((((int)stk + 0) + 0x30)))->v) = 0x0;
                                        FUN_0c02b502(0x7);
                                        FUN_0c02b3ba((((int)stk + 0) + 0x30), 262.0f, 228.0f, (1.0f + 1.0f));
                                        t628 = 0xC1A758C;
                                        u629 = 502.0f;
                                    }
                                    t697 = (FUN_0c02b3ba(t628, u629, 228.0f, (1.0f + 1.0f)));
                                }
                            } else {
                                FUN_0c02b342(0xC30A404, (*(int *)(((int)stk + 0))));
                                FUN_0c02b502(0x3);
                                t697 = (FUN_0c02b3ba((*(int *)(((int)stk + 0))), 248.0f, 156.0f, (1.0f + 1.0f)));
                            }
                        } else {
                            FUN_0c187d74((((int)stk + 0) + 0x8), 0xC3051C4);
                            *(unsigned int *)(((int)stk + 0)) = (((int)stk + 0) + 0x30);
                            FUN_0c02b342((((int)stk + 0) + 0x8), (((int)stk + 0) + 0x30));
                            *(unsigned char *)(((int)stk + 4)) = (FUN_0c187d88((((int)stk + 0) + 0x8)));
                            FUN_0c02b502(0x6);
                            t660 = *(signed char *)(((int)stk + 4));
                            t697 = (FUN_0c02b3ba((*(int *)(((int)stk + 0))), (float)(0x140 - (((int)((unsigned int)((int)((unsigned int)(((((unsigned char)t660 << 1) + (unsigned char)t660) << 2) << 1) + (unsigned int)0x0)) + ((((int)0x0 > (int)(((((unsigned char)t660 << 1) + (unsigned char)t660) << 2) << 1))) ? 1u : 0u))) >> 1)), 180.0f, (1.0f + 1.0f)));
                        }
                    } else {
                        FUN_0c02b342(0xC30999E, (*(int *)(((int)stk + 0))));
                        FUN_0c02b502((unsigned short)(*(short *)(((t393 + 0x14) + 0x0))));
                        t697 = (FUN_0c02b3ba((*(int *)(((int)stk + 0))), ((((struct o4_float *)((t393 + 0x14)))->v)), ((((struct o8_float *)((t393 + 0x14)))->v)), (1.0f + 1.0f)));
                    }
                }
                t710 = t697;
            }
            t1076 = t710;
        } else {
            *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
            (((struct o40_float *)(a4))->v) = (math_cos_angle16((((*(short *)((a4 + 0x1C))) << 8) << 2)));
            t726 = *(short *)((a4 + 0x1C));
            t1063 = t726;
            if (t726 != 0) {
            } else {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                *(unsigned short *)((a4 + 0x1C)) = 0x10;
                *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
                (((struct o44_float *)(a4))->v) = (math_cos_angle16((((*(short *)((a4 + 0x1C))) << 8) << 2)));
                t731 = *(short *)((a4 + 0x1C));
                t1050 = t731;
                if (t731 != 0) {
                } else {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) & 0xFFEF);
                    if ((*(signed char *)0xC30503C) == (*(signed char *)((a4 + 0x3)))) {
                        (((struct o14_uchar *)(a4))->v) = 0x4;
                        (((struct o15_uchar *)(a4))->v) = 0x0;
                    }
                    *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
                    u743 = 0.899999976f;
                    u743 = u743 + 0.0500000007f * (math_sin_angle16((((*(short *)((a4 + 0x1C))) << 8) << 2)));
                    (((struct oB0_float *)(a4))->v) = u743;
                    t746 = (*(int *)((((*(signed char *)((a4 + 0x3))) << 2) + 0xC20DDFC)));
                    for (;;) {
                        if ((*(short *)((t746 + 0x10))) != 0) {
                            break;
                        }
                        FUN_0c02b502((unsigned short)(*(short *)((t746 + 0x0))));
                        FUN_0c02b3ba((*(int *)((t746 + 0xC))), ((((struct o4_float *)(t746))->v)), ((((struct o8_float *)(t746))->v)), (1.0f + 1.0f));
                        t746 = (t746 + 0x14);
                    }
                    FUN_0c02b502((unsigned short)(*(short *)((t746 + 0x0))));
                    FUN_0c02b3ba((*(int *)((t746 + 0xC))), ((((struct o4_float *)(t746))->v)), ((((struct o8_float *)(t746))->v)), (1.0f + 1.0f));
                    *(unsigned int *)(((int)stk + 0)) = (((int)stk + 0) + 0x30);
                    t760 = *(signed char *)((a4 + 0x3));
                    if (t760 != 23) {
                        if (t760 != 24) {
                            if ((t760 != 26) && (t760 != 67)) {
                                if (t760 != 55) {
                                    if (t760 == 60) {
                                        t776 = *(int *)((a4 + 0x10));
                                        FUN_0c02b342(t776, (*(int *)(((int)stk + 0))));
                                        FUN_0c02b502((unsigned short)(*(short *)(((t746 + 0x14) + 0x0))));
                                        FUN_0c02b3ba((*(int *)(((int)stk + 0))), (((((struct o4_float *)((t746 + 0x14)))->v)) + 168.0f), ((((struct o8_float *)((t746 + 0x14)))->v)), (1.0f + 1.0f));
                                        t784 = FUN_0c187d88((t776 + 0x8));
                                        t785 = ((~(((~(unsigned char)t784) + 0x1) & 0x1)) + 0x1);
                                        if ((int)(unsigned char)t784 >= 0) {
                                            t785 = ((unsigned char)t784 & 0x1);
                                        }
                                        t787 = t784;
                                        if (t785 != 0) {
                                            t787 = (t784 + 0x1);
                                        }
                                        FUN_0c02b502(0x3);
                                        t793 = (int)((unsigned int)((int)((unsigned int)(((((unsigned char)t787 << 1) + (unsigned char)t787) << 2) << 1) + (unsigned int)0x0)) + ((((int)0x0 > (int)(((((unsigned char)t787 << 1) + (unsigned char)t787) << 2) << 1))) ? 1u : 0u));
                                        t797 = (int)((unsigned int)((int)((unsigned int)(t793 >> 1) + (unsigned int)0x0)) + ((((int)0x0 > (int)(t793 >> 1))) ? 1u : 0u));
                                        FUN_0c02b3ba((t776 + 0x8), ((float)(0x140 - (t797 >> 1)) + -24.0f), 180.0f, (1.0f + 1.0f));
                                        FUN_0c02b502(0x7);
                                        t1050 = (FUN_0c02b3ba(0xC1A7590, ((float)(((((((unsigned int)(unsigned char)t787 >> 1) - 1) << 1) + (((unsigned int)(unsigned char)t787 >> 1) - 1)) << 2) << 1) + (float)(0x140 - (t797 >> 1))), 180.0f, (1.0f + 1.0f)));
                                    } else {
                                        if (t760 == 32) {
                                            FUN_0c02b342(0xC30A34C, (*(int *)(((int)stk + 0))));
                                            FUN_0c02b502((unsigned short)(*(short *)(((t746 + 0x14) + 0x0))));
                                            FUN_0c02b3ba((*(int *)(((int)stk + 0))), (((((struct o4_float *)((t746 + 0x14)))->v)) + 168.0f), ((((struct o8_float *)((t746 + 0x14)))->v)), (1.0f + 1.0f));
                                            t814 = FUN_0c187d88(0xC30A354);
                                            t815 = ((~(((~(unsigned char)t814) + 0x1) & 0x1)) + 0x1);
                                            if ((int)(unsigned char)t814 >= 0) {
                                                t815 = ((unsigned char)t814 & 0x1);
                                            }
                                            t817 = t814;
                                            if (t815 != 0) {
                                                t817 = (t814 + 0x1);
                                            }
                                            FUN_0c02b502(0x3);
                                            t823 = (int)((unsigned int)((int)((unsigned int)(((((unsigned char)t817 << 1) + (unsigned char)t817) << 2) << 1) + (unsigned int)0x0)) + ((((int)0x0 > (int)(((((unsigned char)t817 << 1) + (unsigned char)t817) << 2) << 1))) ? 1u : 0u));
                                            t827 = (int)((unsigned int)((int)((unsigned int)(t823 >> 1) + (unsigned int)0x0)) + ((((int)0x0 > (int)(t823 >> 1))) ? 1u : 0u));
                                            FUN_0c02b3ba(0xC30A354, ((float)(0x140 - (t827 >> 1)) + -24.0f), 180.0f, (1.0f + 1.0f));
                                            FUN_0c02b502(0x7);
                                            t1050 = (FUN_0c02b3ba(0xC1A7590, ((float)(((((((unsigned int)(unsigned char)t817 >> 1) - 1) << 1) + (((unsigned int)(unsigned char)t817 >> 1) - 1)) << 2) << 1) + (float)(0x140 - (t827 >> 1))), 180.0f, (1.0f + 1.0f)));
                                        } else {
                                            if (t760 == 22) {
                                                FUN_0c02b342(0xC30A34C, (*(int *)(((int)stk + 0))));
                                                FUN_0c02b502((unsigned short)(*(short *)(((t746 + 0x14) + 0x0))));
                                                FUN_0c02b3ba((*(int *)(((int)stk + 0))), (((((struct o4_float *)((t746 + 0x14)))->v)) + 168.0f), ((((struct o8_float *)((t746 + 0x14)))->v)), (1.0f + 1.0f));
                                                t844 = FUN_0c187d88(0xC30A354);
                                                t845 = ((~(((~(unsigned char)t844) + 0x1) & 0x1)) + 0x1);
                                                if ((int)(unsigned char)t844 >= 0) {
                                                    t845 = ((unsigned char)t844 & 0x1);
                                                }
                                                t847 = t844;
                                                if (t845 != 0) {
                                                    t847 = (t844 + 0x1);
                                                }
                                                FUN_0c02b502(0x3);
                                                t853 = (int)((unsigned int)((int)((unsigned int)(((((unsigned char)t847 << 1) + (unsigned char)t847) << 2) << 1) + (unsigned int)0x0)) + ((((int)0x0 > (int)(((((unsigned char)t847 << 1) + (unsigned char)t847) << 2) << 1))) ? 1u : 0u));
                                                t857 = (int)((unsigned int)((int)((unsigned int)(t853 >> 1) + (unsigned int)0x0)) + ((((int)0x0 > (int)(t853 >> 1))) ? 1u : 0u));
                                                FUN_0c02b3ba(0xC30A354, ((float)(0x140 - (t857 >> 1)) + -24.0f), 180.0f, (1.0f + 1.0f));
                                                FUN_0c02b502(0x7);
                                                t1050 = (FUN_0c02b3ba(0xC1A7590, ((float)(((((((unsigned int)(unsigned char)t847 >> 1) - 1) << 1) + (((unsigned int)(unsigned char)t847 >> 1) - 1)) << 2) << 1) + (float)(0x140 - (t857 >> 1))), 180.0f, (1.0f + 1.0f)));
                                            } else {
                                                if (t760 == 21) {
                                                    FUN_0c02b342(0xC30A34C, (*(int *)(((int)stk + 0))));
                                                    FUN_0c02b502((unsigned short)(*(short *)(((t746 + 0x14) + 0x0))));
                                                    FUN_0c02b3ba((*(int *)(((int)stk + 0))), (((((struct o4_float *)((t746 + 0x14)))->v)) + 168.0f), ((((struct o8_float *)((t746 + 0x14)))->v)), (1.0f + 1.0f));
                                                    t874 = FUN_0c187d88(0xC30A354);
                                                    t875 = ((~(((~(unsigned char)t874) + 0x1) & 0x1)) + 0x1);
                                                    if ((int)(unsigned char)t874 >= 0) {
                                                        t875 = ((unsigned char)t874 & 0x1);
                                                    }
                                                    t877 = t874;
                                                    if (t875 != 0) {
                                                        t877 = (t874 + 0x1);
                                                    }
                                                    FUN_0c02b502(0x3);
                                                    t883 = (int)((unsigned int)((int)((unsigned int)(((((unsigned char)t877 << 1) + (unsigned char)t877) << 2) << 1) + (unsigned int)0x0)) + ((((int)0x0 > (int)(((((unsigned char)t877 << 1) + (unsigned char)t877) << 2) << 1))) ? 1u : 0u));
                                                    t887 = (int)((unsigned int)((int)((unsigned int)(t883 >> 1) + (unsigned int)0x0)) + ((((int)0x0 > (int)(t883 >> 1))) ? 1u : 0u));
                                                    FUN_0c02b3ba(0xC30A354, ((float)(0x140 - (t887 >> 1)) + -24.0f), (((((struct o8_float *)((t746 + 0x14)))->v)) + 72.0f), (1.0f + 1.0f));
                                                    FUN_0c02b502(0x7);
                                                    t1050 = (FUN_0c02b3ba(0xC1A7590, ((float)(((((((unsigned int)(unsigned char)t877 >> 1) - 1) << 1) + (((unsigned int)(unsigned char)t877 >> 1) - 1)) << 2) << 1) + (float)(0x140 - (t887 >> 1))), (((((struct o8_float *)((t746 + 0x14)))->v)) + 72.0f), (1.0f + 1.0f)));
                                                } else {
                                                    if (t760 == 70) {
                                                        FUN_0c02b502(0x3);
                                                        t900 = 0xC1A75A0;
                                                        if ((*(signed char *)((a4 + 0x18))) == 0) {
                                                            t900 = 0xC1A7598;
                                                        }
                                                        FUN_0c02b3ba(t900, 416.0f, 204.0f, (1.0f + 1.0f));
                                                        t903 = *(signed char *)((a4 + 0x19));
                                                        t906 = 0xC1A7598;
                                                        if (t903 != 0) {
                                                            t906 = 0xC1A75A0;
                                                            if (t903 != 1) {
                                                                t906 = 0xC1A75A8;
                                                            }
                                                        }
                                                        FUN_0c02b3ba(t906, 416.0f, 228.0f, (1.0f + 1.0f));
                                                        t909 = *(signed char *)((a4 + 0x1A));
                                                        t912 = 0xC1A7598;
                                                        if (t909 != 0) {
                                                            t912 = 0xC1A75B0;
                                                            if (t909 != 1) {
                                                                t912 = 0xC1A75B8;
                                                            }
                                                        }
                                                        t1050 = (FUN_0c02b3ba(t912, 416.0f, 252.0f, (1.0f + 1.0f)));
                                                    } else {
                                                        t1050 = t760;
                                                        if (t760 == 28) {
                                                            t916 = 0x13;
                                                            if ((*(int *)0xC5426EC) != 0) {
                                                                t916 = 0x7;
                                                            }
                                                            FUN_0c02b502(t916);
                                                            t1050 = (FUN_0c02b3ba((*(int *)(((t746 + 0x14) + 0xC))), ((((struct o4_float *)((t746 + 0x14)))->v)), ((((struct o8_float *)((t746 + 0x14)))->v)), (1.0f + 1.0f)));
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    t971 = *(int *)0xC3BABB4;
                                    t973 = (0x16C + t971);
                                    if (((*(int *)((t971 + 0x0))) & 1) == 0) {
                                        t973 = (t971 + 0x8);
                                    }
                                    FUN_0c187d74((((int)stk + 0) + 0x30), t973);
                                    t976 = FUN_0c187d88((((int)stk + 0) + 0x30));
                                    if ((int)(unsigned char)t976 <= (int)0x14) {
                                        FUN_0c02b502(0x7);
                                        t981 = (((int)stk + 0) + 0x30);
                                        u982 = 262.0f;
                                    } else {
                                        (((struct o14_uchar *)((((int)stk + 0) + 0x30)))->v) = 0x0;
                                        FUN_0c02b502(0x7);
                                        FUN_0c02b3ba((((int)stk + 0) + 0x30), 262.0f, 228.0f, (1.0f + 1.0f));
                                        t981 = 0xC1A758C;
                                        u982 = 502.0f;
                                    }
                                    t1050 = (FUN_0c02b3ba(t981, u982, 228.0f, (1.0f + 1.0f)));
                                }
                            } else {
                                FUN_0c02b342(0xC30A404, (*(int *)(((int)stk + 0))));
                                FUN_0c02b502(0x3);
                                t1050 = (FUN_0c02b3ba((*(int *)(((int)stk + 0))), 248.0f, 156.0f, (1.0f + 1.0f)));
                            }
                        } else {
                            FUN_0c187d74((((int)stk + 0) + 0x8), 0xC3051C4);
                            *(unsigned int *)(((int)stk + 0)) = (((int)stk + 0) + 0x30);
                            FUN_0c02b342((((int)stk + 0) + 0x8), (((int)stk + 0) + 0x30));
                            *(unsigned char *)(((int)stk + 4)) = (FUN_0c187d88((((int)stk + 0) + 0x8)));
                            FUN_0c02b502(0x6);
                            t1013 = *(signed char *)(((int)stk + 4));
                            t1050 = (FUN_0c02b3ba((*(int *)(((int)stk + 0))), (float)(0x140 - (((int)((unsigned int)((int)((unsigned int)(((((unsigned char)t1013 << 1) + (unsigned char)t1013) << 2) << 1) + (unsigned int)0x0)) + ((((int)0x0 > (int)(((((unsigned char)t1013 << 1) + (unsigned char)t1013) << 2) << 1))) ? 1u : 0u))) >> 1)), 180.0f, (1.0f + 1.0f)));
                        }
                    } else {
                        FUN_0c02b342(0xC30999E, (*(int *)(((int)stk + 0))));
                        FUN_0c02b502((unsigned short)(*(short *)(((t746 + 0x14) + 0x0))));
                        t1050 = (FUN_0c02b3ba((*(int *)(((int)stk + 0))), ((((struct o4_float *)((t746 + 0x14)))->v)), ((((struct o8_float *)((t746 + 0x14)))->v)), (1.0f + 1.0f)));
                    }
                }
                t1063 = t1050;
            }
            t1076 = t1063;
        }
        t1444 = t1076;
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o30_float *)(a4))->v) = (1.0f + 1.0f);
        (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x410);
        (((struct o44_float *)(a4))->v) = 0.0199999996f;
        (((struct o40_float *)(a4))->v) = 0.0199999996f;
        (((struct o48_float *)(a4))->v) = 1.0f;
        (((struct oB0_float *)(a4))->v) = 0.899999976f;
        *(unsigned short *)((a4 + 0x1C)) = 0x10;
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
        (((struct o40_float *)(a4))->v) = (math_cos_angle16((((*(short *)((a4 + 0x1C))) << 8) << 2)));
        t1094 = *(short *)((a4 + 0x1C));
        t1431 = t1094;
        if (t1094 != 0) {
        } else {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            *(unsigned short *)((a4 + 0x1C)) = 0x10;
            *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
            (((struct o44_float *)(a4))->v) = (math_cos_angle16((((*(short *)((a4 + 0x1C))) << 8) << 2)));
            t1099 = *(short *)((a4 + 0x1C));
            t1418 = t1099;
            if (t1099 != 0) {
            } else {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) & 0xFFEF);
                if ((*(signed char *)0xC30503C) == (*(signed char *)((a4 + 0x3)))) {
                    (((struct o14_uchar *)(a4))->v) = 0x4;
                    (((struct o15_uchar *)(a4))->v) = 0x0;
                }
                *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
                u1111 = 0.899999976f;
                u1111 = u1111 + 0.0500000007f * (math_sin_angle16((((*(short *)((a4 + 0x1C))) << 8) << 2)));
                (((struct oB0_float *)(a4))->v) = u1111;
                t1114 = (*(int *)((((*(signed char *)((a4 + 0x3))) << 2) + 0xC20DDFC)));
                for (;;) {
                    if ((*(short *)((t1114 + 0x10))) != 0) {
                        break;
                    }
                    FUN_0c02b502((unsigned short)(*(short *)((t1114 + 0x0))));
                    FUN_0c02b3ba((*(int *)((t1114 + 0xC))), ((((struct o4_float *)(t1114))->v)), ((((struct o8_float *)(t1114))->v)), (1.0f + 1.0f));
                    t1114 = (t1114 + 0x14);
                }
                FUN_0c02b502((unsigned short)(*(short *)((t1114 + 0x0))));
                FUN_0c02b3ba((*(int *)((t1114 + 0xC))), ((((struct o4_float *)(t1114))->v)), ((((struct o8_float *)(t1114))->v)), (1.0f + 1.0f));
                *(unsigned int *)(((int)stk + 0)) = (((int)stk + 0) + 0x30);
                t1128 = *(signed char *)((a4 + 0x3));
                if (t1128 != 23) {
                    if (t1128 != 24) {
                        if ((t1128 != 26) && (t1128 != 67)) {
                            if (t1128 != 55) {
                                if (t1128 == 60) {
                                    t1144 = *(int *)((a4 + 0x10));
                                    FUN_0c02b342(t1144, (*(int *)(((int)stk + 0))));
                                    FUN_0c02b502((unsigned short)(*(short *)(((t1114 + 0x14) + 0x0))));
                                    FUN_0c02b3ba((*(int *)(((int)stk + 0))), (((((struct o4_float *)((t1114 + 0x14)))->v)) + 168.0f), ((((struct o8_float *)((t1114 + 0x14)))->v)), (1.0f + 1.0f));
                                    t1152 = FUN_0c187d88((t1144 + 0x8));
                                    t1153 = ((~(((~(unsigned char)t1152) + 0x1) & 0x1)) + 0x1);
                                    if ((int)(unsigned char)t1152 >= 0) {
                                        t1153 = ((unsigned char)t1152 & 0x1);
                                    }
                                    t1155 = t1152;
                                    if (t1153 != 0) {
                                        t1155 = (t1152 + 0x1);
                                    }
                                    FUN_0c02b502(0x3);
                                    t1161 = (int)((unsigned int)((int)((unsigned int)(((((unsigned char)t1155 << 1) + (unsigned char)t1155) << 2) << 1) + (unsigned int)0x0)) + ((((int)0x0 > (int)(((((unsigned char)t1155 << 1) + (unsigned char)t1155) << 2) << 1))) ? 1u : 0u));
                                    t1165 = (int)((unsigned int)((int)((unsigned int)(t1161 >> 1) + (unsigned int)0x0)) + ((((int)0x0 > (int)(t1161 >> 1))) ? 1u : 0u));
                                    FUN_0c02b3ba((t1144 + 0x8), ((float)(0x140 - (t1165 >> 1)) + -24.0f), 180.0f, (1.0f + 1.0f));
                                    FUN_0c02b502(0x7);
                                    t1418 = (FUN_0c02b3ba(0xC1A7590, ((float)(((((((unsigned int)(unsigned char)t1155 >> 1) - 1) << 1) + (((unsigned int)(unsigned char)t1155 >> 1) - 1)) << 2) << 1) + (float)(0x140 - (t1165 >> 1))), 180.0f, (1.0f + 1.0f)));
                                } else {
                                    if (t1128 == 32) {
                                        FUN_0c02b342(0xC30A34C, (*(int *)(((int)stk + 0))));
                                        FUN_0c02b502((unsigned short)(*(short *)(((t1114 + 0x14) + 0x0))));
                                        FUN_0c02b3ba((*(int *)(((int)stk + 0))), (((((struct o4_float *)((t1114 + 0x14)))->v)) + 168.0f), ((((struct o8_float *)((t1114 + 0x14)))->v)), (1.0f + 1.0f));
                                        t1182 = FUN_0c187d88(0xC30A354);
                                        t1183 = ((~(((~(unsigned char)t1182) + 0x1) & 0x1)) + 0x1);
                                        if ((int)(unsigned char)t1182 >= 0) {
                                            t1183 = ((unsigned char)t1182 & 0x1);
                                        }
                                        t1185 = t1182;
                                        if (t1183 != 0) {
                                            t1185 = (t1182 + 0x1);
                                        }
                                        FUN_0c02b502(0x3);
                                        t1191 = (int)((unsigned int)((int)((unsigned int)(((((unsigned char)t1185 << 1) + (unsigned char)t1185) << 2) << 1) + (unsigned int)0x0)) + ((((int)0x0 > (int)(((((unsigned char)t1185 << 1) + (unsigned char)t1185) << 2) << 1))) ? 1u : 0u));
                                        t1195 = (int)((unsigned int)((int)((unsigned int)(t1191 >> 1) + (unsigned int)0x0)) + ((((int)0x0 > (int)(t1191 >> 1))) ? 1u : 0u));
                                        FUN_0c02b3ba(0xC30A354, ((float)(0x140 - (t1195 >> 1)) + -24.0f), 180.0f, (1.0f + 1.0f));
                                        FUN_0c02b502(0x7);
                                        t1418 = (FUN_0c02b3ba(0xC1A7590, ((float)(((((((unsigned int)(unsigned char)t1185 >> 1) - 1) << 1) + (((unsigned int)(unsigned char)t1185 >> 1) - 1)) << 2) << 1) + (float)(0x140 - (t1195 >> 1))), 180.0f, (1.0f + 1.0f)));
                                    } else {
                                        if (t1128 == 22) {
                                            FUN_0c02b342(0xC30A34C, (*(int *)(((int)stk + 0))));
                                            FUN_0c02b502((unsigned short)(*(short *)(((t1114 + 0x14) + 0x0))));
                                            FUN_0c02b3ba((*(int *)(((int)stk + 0))), (((((struct o4_float *)((t1114 + 0x14)))->v)) + 168.0f), ((((struct o8_float *)((t1114 + 0x14)))->v)), (1.0f + 1.0f));
                                            t1212 = FUN_0c187d88(0xC30A354);
                                            t1213 = ((~(((~(unsigned char)t1212) + 0x1) & 0x1)) + 0x1);
                                            if ((int)(unsigned char)t1212 >= 0) {
                                                t1213 = ((unsigned char)t1212 & 0x1);
                                            }
                                            t1215 = t1212;
                                            if (t1213 != 0) {
                                                t1215 = (t1212 + 0x1);
                                            }
                                            FUN_0c02b502(0x3);
                                            t1221 = (int)((unsigned int)((int)((unsigned int)(((((unsigned char)t1215 << 1) + (unsigned char)t1215) << 2) << 1) + (unsigned int)0x0)) + ((((int)0x0 > (int)(((((unsigned char)t1215 << 1) + (unsigned char)t1215) << 2) << 1))) ? 1u : 0u));
                                            t1225 = (int)((unsigned int)((int)((unsigned int)(t1221 >> 1) + (unsigned int)0x0)) + ((((int)0x0 > (int)(t1221 >> 1))) ? 1u : 0u));
                                            FUN_0c02b3ba(0xC30A354, ((float)(0x140 - (t1225 >> 1)) + -24.0f), 180.0f, (1.0f + 1.0f));
                                            FUN_0c02b502(0x7);
                                            t1418 = (FUN_0c02b3ba(0xC1A7590, ((float)(((((((unsigned int)(unsigned char)t1215 >> 1) - 1) << 1) + (((unsigned int)(unsigned char)t1215 >> 1) - 1)) << 2) << 1) + (float)(0x140 - (t1225 >> 1))), 180.0f, (1.0f + 1.0f)));
                                        } else {
                                            if (t1128 == 21) {
                                                FUN_0c02b342(0xC30A34C, (*(int *)(((int)stk + 0))));
                                                FUN_0c02b502((unsigned short)(*(short *)(((t1114 + 0x14) + 0x0))));
                                                FUN_0c02b3ba((*(int *)(((int)stk + 0))), (((((struct o4_float *)((t1114 + 0x14)))->v)) + 168.0f), ((((struct o8_float *)((t1114 + 0x14)))->v)), (1.0f + 1.0f));
                                                t1242 = FUN_0c187d88(0xC30A354);
                                                t1243 = ((~(((~(unsigned char)t1242) + 0x1) & 0x1)) + 0x1);
                                                if ((int)(unsigned char)t1242 >= 0) {
                                                    t1243 = ((unsigned char)t1242 & 0x1);
                                                }
                                                t1245 = t1242;
                                                if (t1243 != 0) {
                                                    t1245 = (t1242 + 0x1);
                                                }
                                                FUN_0c02b502(0x3);
                                                t1251 = (int)((unsigned int)((int)((unsigned int)(((((unsigned char)t1245 << 1) + (unsigned char)t1245) << 2) << 1) + (unsigned int)0x0)) + ((((int)0x0 > (int)(((((unsigned char)t1245 << 1) + (unsigned char)t1245) << 2) << 1))) ? 1u : 0u));
                                                t1255 = (int)((unsigned int)((int)((unsigned int)(t1251 >> 1) + (unsigned int)0x0)) + ((((int)0x0 > (int)(t1251 >> 1))) ? 1u : 0u));
                                                FUN_0c02b3ba(0xC30A354, ((float)(0x140 - (t1255 >> 1)) + -24.0f), (((((struct o8_float *)((t1114 + 0x14)))->v)) + 72.0f), (1.0f + 1.0f));
                                                FUN_0c02b502(0x7);
                                                t1418 = (FUN_0c02b3ba(0xC1A7590, ((float)(((((((unsigned int)(unsigned char)t1245 >> 1) - 1) << 1) + (((unsigned int)(unsigned char)t1245 >> 1) - 1)) << 2) << 1) + (float)(0x140 - (t1255 >> 1))), (((((struct o8_float *)((t1114 + 0x14)))->v)) + 72.0f), (1.0f + 1.0f)));
                                            } else {
                                                if (t1128 == 70) {
                                                    FUN_0c02b502(0x3);
                                                    t1268 = 0xC1A75A0;
                                                    if ((*(signed char *)((a4 + 0x18))) == 0) {
                                                        t1268 = 0xC1A7598;
                                                    }
                                                    FUN_0c02b3ba(t1268, 416.0f, 204.0f, (1.0f + 1.0f));
                                                    t1271 = *(signed char *)((a4 + 0x19));
                                                    t1274 = 0xC1A7598;
                                                    if (t1271 != 0) {
                                                        t1274 = 0xC1A75A0;
                                                        if (t1271 != 1) {
                                                            t1274 = 0xC1A75A8;
                                                        }
                                                    }
                                                    FUN_0c02b3ba(t1274, 416.0f, 228.0f, (1.0f + 1.0f));
                                                    t1277 = *(signed char *)((a4 + 0x1A));
                                                    t1280 = 0xC1A7598;
                                                    if (t1277 != 0) {
                                                        t1280 = 0xC1A75B0;
                                                        if (t1277 != 1) {
                                                            t1280 = 0xC1A75B8;
                                                        }
                                                    }
                                                    t1418 = (FUN_0c02b3ba(t1280, 416.0f, 252.0f, (1.0f + 1.0f)));
                                                } else {
                                                    t1418 = t1128;
                                                    if (t1128 == 28) {
                                                        t1284 = 0x13;
                                                        if ((*(int *)0xC5426EC) != 0) {
                                                            t1284 = 0x7;
                                                        }
                                                        FUN_0c02b502(t1284);
                                                        t1418 = (FUN_0c02b3ba((*(int *)(((t1114 + 0x14) + 0xC))), ((((struct o4_float *)((t1114 + 0x14)))->v)), ((((struct o8_float *)((t1114 + 0x14)))->v)), (1.0f + 1.0f)));
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                t1339 = *(int *)0xC3BABB4;
                                t1341 = (0x16C + t1339);
                                if (((*(int *)((t1339 + 0x0))) & 1) == 0) {
                                    t1341 = (t1339 + 0x8);
                                }
                                FUN_0c187d74((((int)stk + 0) + 0x30), t1341);
                                t1344 = FUN_0c187d88((((int)stk + 0) + 0x30));
                                if ((int)(unsigned char)t1344 <= (int)0x14) {
                                    FUN_0c02b502(0x7);
                                    t1349 = (((int)stk + 0) + 0x30);
                                    u1350 = 262.0f;
                                } else {
                                    (((struct o14_uchar *)((((int)stk + 0) + 0x30)))->v) = 0x0;
                                    FUN_0c02b502(0x7);
                                    FUN_0c02b3ba((((int)stk + 0) + 0x30), 262.0f, 228.0f, (1.0f + 1.0f));
                                    t1349 = 0xC1A758C;
                                    u1350 = 502.0f;
                                }
                                t1418 = (FUN_0c02b3ba(t1349, u1350, 228.0f, (1.0f + 1.0f)));
                            }
                        } else {
                            FUN_0c02b342(0xC30A404, (*(int *)(((int)stk + 0))));
                            FUN_0c02b502(0x3);
                            t1418 = (FUN_0c02b3ba((*(int *)(((int)stk + 0))), 248.0f, 156.0f, (1.0f + 1.0f)));
                        }
                    } else {
                        FUN_0c187d74((((int)stk + 0) + 0x8), 0xC3051C4);
                        *(unsigned int *)(((int)stk + 0)) = (((int)stk + 0) + 0x30);
                        FUN_0c02b342((((int)stk + 0) + 0x8), (((int)stk + 0) + 0x30));
                        *(unsigned char *)(((int)stk + 4)) = (FUN_0c187d88((((int)stk + 0) + 0x8)));
                        FUN_0c02b502(0x6);
                        t1381 = *(signed char *)(((int)stk + 4));
                        t1418 = (FUN_0c02b3ba((*(int *)(((int)stk + 0))), (float)(0x140 - (((int)((unsigned int)((int)((unsigned int)(((((unsigned char)t1381 << 1) + (unsigned char)t1381) << 2) << 1) + (unsigned int)0x0)) + ((((int)0x0 > (int)(((((unsigned char)t1381 << 1) + (unsigned char)t1381) << 2) << 1))) ? 1u : 0u))) >> 1)), 180.0f, (1.0f + 1.0f)));
                    }
                } else {
                    FUN_0c02b342(0xC30999E, (*(int *)(((int)stk + 0))));
                    FUN_0c02b502((unsigned short)(*(short *)(((t1114 + 0x14) + 0x0))));
                    t1418 = (FUN_0c02b3ba((*(int *)(((int)stk + 0))), ((((struct o4_float *)((t1114 + 0x14)))->v)), ((((struct o8_float *)((t1114 + 0x14)))->v)), (1.0f + 1.0f)));
                }
            }
            t1431 = t1418;
        }
        t1444 = t1431;
    }
    return t1444;
}

int FUN_0c114748(int a4, int a5, int a6, int a7, float f4)
{
    int stk[9];

    register int R2;
    int R8;
    register float F2;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_10;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register int v0_9;
    register float w0_0;
    v0_9 = a4;
    v0_7 = a5;
    v0_5 = a6;
    v0_3 = a7;
    w0_0 = f4;
    v0_6 = *(signed char *)((v0_9 + 0x14));
    v0_8 = (v0_6);
    v0_0 = (0xC474748);
    v0_1 = (0x0);
    v0_2 = (v0_9);
    v0_4 = (0xC539708);
    if ((v0_6 == 0)) goto L_C11478C;
    if ((v0_8 == 1)) goto L_C1147E0;
    if ((v0_8 != 80)) goto L_C114776;
    FUN_0c03f346(v0_2, v0_7, v0_5, v0_3);
    L_C114B1E:;
    v0_9 = (0xC4739AC);
    v0_7 = (0xC47477C);
    v0_5 = (0xC47477C);
    if (((*(int *)0xC47477C) != 0)) goto L_C114B30;
    (((struct o386C_uchar *)(v0_4))->v) = v0_1;
    L_C114B3E:;
    v0_5 = ((v0_7 + 0x4));
    if (((*(int *)(((v0_7 + 0x4) + 0x0))) != 0)) goto L_C114B4E;
    (((struct o387C_uchar *)(v0_4))->v) = v0_1;
    L_C114B5E:;
    v0_5 = ((v0_7 + 0x8));
    if (((*(int *)(((v0_7 + 0x8) + 0x0))) != 0)) goto L_C114B6E;
    (((struct o3874_uchar *)(v0_4))->v) = v0_1;
    L_C114B7C:;
    v0_5 = ((v0_7 + 0xC));
    if (((*(int *)(((v0_7 + 0xC) + 0x0))) != 0)) goto L_C114B8C;
    (((struct o3884_uchar *)(v0_4))->v) = v0_1;
    L_C114B9C:;
    FUN_0c0c418c((*(signed char *)((v0_4 + 0x1))), v0_7, v0_5, v0_3, w0_0);
    if (((*(int *)((v0_0 + 0x0))) != 1)) goto L_C114BB6;
    if (((*(signed char *)((v0_2 + 0x16))) != 6)) goto L_C114BB6;
    v0_8 = (0x1);
    L_C114BB8:;
    if ((v0_8 == 1)) goto L_C114BC2;
    FUN_0c037bf6(v0_4, v0_7, v0_5);
    L_C114BC2:;
    FUN_0c038566();
    v0_8 = ((res_cockpit_faces_release_all()));
    L_C114BCE:;
    return v0_8;
    L_C114BB6:;
    v0_8 = (0x0);
    goto L_C114BB8;
    L_C114B8C:;
    (((struct o3884_uchar *)(v0_4))->v) = ((((struct o60_int *)(((((*(int *)((v0_5 + 0x0))) - 1) << 2) + v0_9)))->v));
    goto L_C114B9C;
    L_C114B6E:;
    (((struct o3874_uchar *)(v0_4))->v) = (*(int *)((((((*(int *)((v0_5 + 0x0))) - 1) << 2) + v0_9) + 0x20)));
    goto L_C114B7C;
    L_C114B4E:;
    (((struct o387C_uchar *)(v0_4))->v) = ((((struct o40_int *)(((((*(int *)((v0_5 + 0x0))) - 1) << 2) + v0_9)))->v));
    goto L_C114B5E;
    L_C114B30:;
    (((struct o386C_uchar *)(v0_4))->v) = (*(int *)((((((*(int *)((v0_5 + 0x0))) - 1) << 2) + v0_9) + 0x0)));
    goto L_C114B3E;
    L_C114776:;
    if ((v0_8 != 99)) goto L_C11477E;
    (((struct o14_uchar *)(v0_2))->v) = 0x50;
    goto L_C114B1E;
    L_C11477E:;
    goto L_C114B1E;
    L_C1147E0:;
    v0_7 = (FUN_0c104d4a(0x800)) == 0;
    v0_6 = (0x400);
    v0_8 = (0xC104D4A);
    if (v0_7) goto L_C1147F6;
    (((struct o3850_uint *)(v0_4))->v) = (((((struct o3850_int *)(v0_4))->v)) - v0_6);
    L_C1147F6:;
    (((struct o3850_uint *)(v0_4))->v) = (((((struct o3850_int *)(v0_4))->v)) & 0xFFFF);
    v0_7 = (((struct o3850_int *)(v0_4))->v);
    v0_8 = (0x3850);
    v0_9 = (v0_7);
    R8 = (0xFFFF);
    if (((int)v0_7 <= (int)0x8000)) goto L_C114812;
    if (((int)v0_9 >= (int)0xC000)) goto L_C114812;
    *(unsigned int *)((v0_4 + v0_8)) = 0xC000;
    L_C114812:;
    v0_7 = (FUN_0c104d4a(v0_6)) == 0;
    if (v0_7) goto L_C114822;
    (((struct o3850_uint *)(v0_4))->v) = (((((struct o3850_int *)(v0_4))->v)) + v0_6);
    L_C114822:;
    (((struct o3850_uint *)(v0_4))->v) = (((((struct o3850_int *)(v0_4))->v)) & R8);
    v0_10 = (((struct o3850_int *)(v0_4))->v);
    v0_8 = (0x3850);
    v0_9 = (0x4000);
    v0_7 = (v0_10);
    if (((int)v0_10 <= (int)0x4000)) goto L_C11483A;
    if (((int)v0_7 >= (int)0x8000)) goto L_C11483A;
    *(unsigned int *)((v0_4 + v0_8)) = v0_9;
    L_C11483A:;
    *(unsigned int *)((v0_4 + v0_8)) = ((*(int *)((v0_4 + v0_8))) & R8);
    v0_8 = (FUN_0c104d4a(0xC00)) != 0;
    if (v0_8) goto L_C114858;
    FUN_0c058854((0x3850 + v0_4), 0x0, ((((struct o3850_int *)(v0_4))->v)), v0_6);
    L_C114858:;
    v0_8 = (FUN_0c104d4a(0x2000)) == 0;
    if (v0_8) goto L_C11486A;
    (((struct o384C_uint *)(v0_4))->v) = (((((struct o384C_int *)(v0_4))->v)) - v0_6);
    L_C11486A:;
    (((struct o384C_uint *)(v0_4))->v) = (((((struct o384C_int *)(v0_4))->v)) & R8);
    v0_10 = (((struct o384C_int *)(v0_4))->v);
    v0_8 = (0x384C);
    v0_9 = (v0_10);
    if (((int)v0_10 <= (int)0x8000)) goto L_C114884;
    if (((int)v0_9 >= (int)0xF000)) goto L_C114884;
    *(unsigned int *)((v0_4 + v0_8)) = 0xF000;
    L_C114884:;
    v0_8 = (FUN_0c104d4a(0x1000)) == 0;
    if (v0_8) goto L_C114896;
    (((struct o384C_uint *)(v0_4))->v) = (((((struct o384C_int *)(v0_4))->v)) + v0_6);
    L_C114896:;
    v0_8 = (0x384C);
    v0_9 = ((((((struct o384C_int *)(v0_4))->v)) & R8));
    *(unsigned int *)((v0_4 + v0_8)) = v0_9;
    v0_10 = *(int *)((v0_4 + v0_8));
    v0_9 = (v0_10);
    if (((int)v0_10 <= (int)0x2000)) goto L_C1148FC;
    if (((int)v0_9 >= (int)0x8000)) goto L_C1148FC;
    *(unsigned int *)((v0_4 + v0_8)) = 0x2000;
    L_C1148FC:;
    *(unsigned int *)((v0_4 + v0_8)) = ((*(int *)((v0_4 + v0_8))) & R8);
    v0_8 = (FUN_0c104d4a(0x3000)) != 0;
    if (v0_8) goto L_C11491A;
    FUN_0c058854((0x384C + v0_4), 0x0, ((((struct o384C_int *)(v0_4))->v)), v0_6);
    L_C11491A:;
    *(unsigned int *)((v0_4 + 0x34)) = ((((struct o384C_int *)(v0_4))->v));
    *(unsigned int *)((v0_4 + 0x38)) = (((((struct o3850_int *)(v0_4))->v)) + (*(int *)((0xC2917F8 + ((*(signed char *)((v0_4 + 0x2))) << 2)))));
    *(float *)(((int)stk + 24)) = 0.0f;
    *(float *)(((int)stk + 28)) = -100.0f;
    *(float *)(((int)stk + 32)) = 0.0f;
    FUN_0c058b06((((int)stk + 0) + 0xC), (v0_4 + 0x34), (((int)stk + 0) + 0x18));
    *(float *)(((int)stk + 16)) = ((*(float *)(((int)stk + 16))) + 100.0f);
    v0_6 = *(signed char *)((v0_4 + 0x2));
    FUN_0c17c130((v0_4 + 0x28), (0xC291738 + (((v0_6 << 1) + v0_6) << 2)), (((int)stk + 0) + 0xC));
    v0_6 = *(signed char *)((v0_2 + 0x15));
    v0_8 = (v0_6);
    v0_9 = ((*(int *)((v0_0 + 0x0))));
    if ((v0_6 == 0)) goto L_C114990;
    if ((v0_8 != 1)) goto L_C11498C;
    v0_8 = (v0_9);
    if ((v0_9 == 0)) goto L_C114ADE;
    if ((v0_8 == 1)) goto L_C114AE6;
    if ((v0_8 == 2)) goto L_C114AEE;
    goto L_C114B1E;
    L_C114AEE:;
    FUN_0c11468c(v0_2);
    goto L_C114B1E;
    L_C114AE6:;
    FUN_0c1141f4(v0_2, v0_7, v0_5, v0_3, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
    goto L_C114B1E;
    L_C114ADE:;
    FUN_0c114044(v0_2);
    goto L_C114B1E;
    L_C11498C:;
    goto L_C114B1E;
    L_C114990:;
    v0_5 = *(signed char *)((v0_2 + 0x16));
    v0_8 = (v0_5);
    if ((v0_5 == 0)) goto L_C1149A4;
    if ((v0_8 == 1)) goto L_C114A2E;
    if ((v0_8 == 2)) goto L_C114A48;
    goto L_C114B1E;
    L_C114A48:;
    v0_8 = (v0_9);
    v0_6 = (0xC474B8C);
    v0_7 = (0x63);
    if ((v0_9 == 0)) goto L_C114A64;
    if ((v0_8 == 1)) goto L_C114A84;
    if ((v0_8 == 2)) goto L_C114AA4;
    if ((v0_8 == 3)) goto L_C114AC4;
    goto L_C114B1E;
    L_C114AC4:;
    (((struct o14_uchar *)(v0_2))->v) = v0_7;
    v0_8 = (0x14);
    goto L_C114BCE;
    L_C114AA4:;
    (((struct o15_uchar *)(v0_2))->v) = ((*(signed char *)((v0_2 + 0x15))) + 0x1);
    (((struct o16_uchar *)(v0_2))->v) = v0_1;
    (((struct o14_uchar *)((*(int *)((v0_6 + 0x0)))))->v) = v0_7;
    *(unsigned int *)((v0_6 + 0x0)) = v0_1;
    v0_8 = ((FUN_0c113e72()));
    v0_5 = (0x90);
    L_C114ABE:;
    *(unsigned int *)(((v0_5 + v0_6) + 0x0)) = v0_8;
    goto L_C114B1E;
    L_C114A84:;
    (((struct o15_uchar *)(v0_2))->v) = ((*(signed char *)((v0_2 + 0x15))) + 0x1);
    (((struct o16_uchar *)(v0_2))->v) = v0_1;
    (((struct o14_uchar *)((*(int *)((v0_6 + 0x0)))))->v) = v0_7;
    *(unsigned int *)((v0_6 + 0x0)) = v0_1;
    v0_8 = ((FUN_0c113a74()));
    v0_5 = (0x8C);
    goto L_C114ABE;
    L_C114A64:;
    (((struct o15_uchar *)(v0_2))->v) = ((*(signed char *)((v0_2 + 0x15))) + 0x1);
    (((struct o16_uchar *)(v0_2))->v) = v0_1;
    (((struct o14_uchar *)((*(int *)((v0_6 + 0x0)))))->v) = v0_7;
    *(unsigned int *)((v0_6 + 0x0)) = v0_1;
    v0_8 = ((FUN_0c113628()));
    v0_5 = (0x88);
    goto L_C114ABE;
    L_C114A2E:;
    v0_5 = (((struct o20_short *)(v0_2))->v);
    (((struct o20_ushort *)(v0_2))->v) = (v0_5 + 0x1);
    if (((int)(short)(v0_5 + 0x1) <= (int)0xA)) goto L_C114B1E;
    (((struct o16_uchar *)(v0_2))->v) = ((*(signed char *)((v0_2 + 0x16))) + 0x1);
    goto L_C114B1E;
    L_C1149A4:;
    *(unsigned int *)((v0_0 + 0x0)) = (FUN_0c1053d8(v0_9, 0x3));
    v0_5 = (FUN_0c104d70()) == 0;
    if (v0_5) goto L_C1149C2;
    (((struct o16_uchar *)(v0_2))->v) = ((*(signed char *)((v0_2 + 0x16))) + 0x1);
    (((struct o20_ushort *)(v0_2))->v) = v0_1;
    L_C1149E4:;
    v0_8 = ((FUN_0c118584((*(int *)((v0_0 + 0x0))))));
    goto L_C114BCE;
    L_C1149C2:;
    v0_5 = (FUN_0c104de4((*(int *)((v0_0 + 0x0))), 0x3)) != 0;
    if (v0_5) goto L_C1149D2;
    goto L_C114B1E;
    L_C1149D2:;
    v0_3 = *(int *)((v0_0 + 0x0));
    v0_8 = (v0_3);
    if ((v0_3 != 3)) goto L_C114A28;
    (((struct o20_ushort *)(v0_2))->v) = v0_1;
    (((struct o16_uchar *)(v0_2))->v) = ((*(signed char *)((v0_2 + 0x16))) + 0x1);
    goto L_C1149E4;
    L_C114A28:;
    *(unsigned int *)((v0_0 + 0x0)) = 0x3;
    goto L_C114BCE;
    L_C11478C:;
    (((struct o14_uchar *)(v0_2))->v) = ((*(signed char *)((v0_2 + 0x14))) + 0x1);
    (((struct o371E_uchar *)(v0_4))->v) = (*(signed char *)0xC474778);
    FUN_0c0676ce((*(signed char *)((v0_4 + 0x1))));
    *(volatile signed char *)((v0_4 + 0x2));
    FUN_0c187798();
    *(unsigned int *)((v0_4 + 0x38)) = (*(int *)((0xC2917F8 + ((*(signed char *)((v0_4 + 0x2))) << 2))));
    FUN_0c11e1e0(v0_4, (*(signed char *)((v0_4 + 0x1))), 0x0, 0x0);
    FUN_0c187798();
    goto L_C1147E0;
}
