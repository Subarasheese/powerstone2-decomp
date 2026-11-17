/* game/menu/option: functions 0C158DC8-0C15A0F2, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o10_float { char p[0x10]; float v; };
struct o118_int { char p[0x118]; int v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o34_float { char p[0x34]; float v; };
struct o46C_int { char p[0x46C]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o68_int { char p[0x68]; int v; };
struct o6C_uchar { char p[0x6C]; unsigned char v; };
struct o70_int { char p[0x70]; int v; };
struct o70_uint { char p[0x70]; unsigned int v; };
struct o748_float { char p[0x748]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c03f346(int, int, int, int);
int math_vec3_mul_xyz(int, float, float, float);
int FUN_0c15a104(int, int, int, int, int, int, int, int);
int nlCalcPoint(int, int);
int FUN_0c17b1a0(int);
int nlSelectMatrixStack(int);
int FUN_0c17c130(int, int, int);
float FUN_0c0e2340(int);
int FUN_0c0e2390(int, int, int);
extern int FUN_0c187798();
int FUN_0c158dc8(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11);
int FUN_0c158f5a(int a4, int a5, int a6, int a7);

int FUN_0c158dc8(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11)
{
    int stk[6];

    register int R1;
    register int R3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    v0_0 = a4;
    v0_3 = a5;
    v0_4 = a6;
    v0_6 = a7;
    *(unsigned char *)(((int)stk + 16)) = v0_6;
    v0_6 = *(signed char *)(((((short)(signed char)v0_0 * (short)0x3938) + 0xC532498) + 0x371A));
    *(unsigned int *)(((int)stk + 20)) = (*(int *)((((((struct o46C_int *)((*(int *)0xC4B40CC)))->v)) + 0x0)));
    v0_2 = ((signed char)v0_3);
    v0_5 = (v0_6);
    v0_1 = ((((short)(signed char)v0_0 * (short)0x3938) + 0xC532498));
    v0_7 = ((v0_6 * 0x2D0));
    v0_6 = (((((((signed char)v0_4 << 2) << 1) + (signed char)v0_4) << 2) << 2));
    if (((signed char)v0_3 == 0)) goto L_C158E1E;
    if ((v0_2 == 1)) goto L_C158E2C;
    if ((v0_2 == 2)) goto L_C158E3C;
    if ((v0_2 == 3)) goto L_C158E46;
    if ((v0_2 == 4)) goto L_C158E50;
    L_C158E9C:;
    return v0_2;
    L_C158E50:;
    v0_2 = ((((0x3168 + v0_1) + v0_7) + v0_6));
    L_C158E58:;
    *(int *)((int)stk + 12) = a11;
    *(int *)((int)stk + 8) = a10;
    *(int *)((int)stk + 4) = ((signed char)(a9 >> 0));
    *(int *)((int)stk + 0) = ((short)(a8 >> 0));
    v0_3 = FUN_0c15a104(v0_0, (v0_2 + 0x28), (*(int *)(((int)stk + 20))), ((((*(signed char *)(((int)stk + 16))) << 2) << 2) + 0xC203544), ((short)(a8 >> 0)), ((signed char)(a9 >> 0)), a10, a11);
    v0_2 = (v0_3);
    v0_0 = (v0_3);
    if ((v0_3 == 0)) goto L_C158E9C;
    (((struct o20_ushort *)(v0_0))->v) = (unsigned char)(*(signed char *)((((((struct o118_int *)(v0_1))->v)) + 0x82)));
    *(unsigned int *)((v0_0 + 0x4)) = 0xC158ED4;
    v0_2 = (0x20);
    goto L_C158E9C;
    L_C158E46:;
    v0_2 = ((((0x2BC8 + v0_1) + v0_7) + v0_6));
    goto L_C158E58;
    L_C158E3C:;
    v0_2 = ((((0x2628 + v0_1) + v0_7) + v0_6));
    goto L_C158E58;
    L_C158E2C:;
    v0_2 = ((((v0_5 * 0x10E0) + (0x468 + v0_1)) + v0_6));
    goto L_C158E58;
    L_C158E1E:;
    v0_2 = ((*(int *)(((((signed char)v0_4 << 2) + (0xC4 + v0_1)) + 0x0))));
    goto L_C158E58;
}

int FUN_0c158f5a(int a4, int a5, int a6, int a7)
{
    int stk[28];
    register int t0;
    register int t1;
    register float u9;
    register int t739;
    register int t26;
    register int t28;
    register int t50;
    register int t51;
    register float u55;
    register int t61;
    register int t70;
    register int t79;
    register int t88;
    register int t94;
    register int t97;
    register int t116;
    register int t117;
    register int t118;
    register float u120;
    register float u121;
    register int t127;
    register int t136;
    register float u144;
    register float u145;
    register float u146;
    register int t151;
    register int t160;
    register int t166;
    register int t169;
    register int t188;
    register int t189;
    register float u192;
    register int t198;
    register int t207;
    register int t208;
    register int t213;
    register int t216;
    register int t235;
    register int t236;
    register int t237;
    register float u239;
    register float u240;
    register int t246;
    register int t254;
    register int t260;
    register int t261;
    register int t267;
    register int t268;
    register int t272;
    register int t278;
    register int t301;
    register int t302;
    register int t306;
    register int t307;
    register float u309;
    register int t310;
    register int t329;
    register int t330;
    register int t336;
    register int t345;
    register int t354;
    register int t363;
    register int t369;
    register int t439;
    register int t458;
    register int t459;
    register float u462;
    register int t468;
    register int t477;
    register int t486;
    register int t495;
    register int t501;
    register int t516;
    register int t535;
    register int t536;
    register int t551;
    register int t553;
    register int t554;
    register int t555;
    register int t556;
    register int t557;
    register float u559;
    register float u560;
    register int t569;
    register int t577;
    register int t591;
    register int t600;
    register int t608;
    register int t619;
    register int t629;
    register float u636;
    register float u639;
    register int t655;
    register float u661;
    register float u664;
    register int t677;
    register float u684;
    register float u687;
    register int t696;
    register float t702;
    register float t703;
    register int t711;
    register int t716;
    register int t717;
    register int t774;
    register int t776;
    register int t777;
    register int t779;
    register int t786;
    register int t787;
    register int t789;
    register int t791;
    register int t792;
    register int t795;
    register int t811;
    register int t818;
    register int t820;
    register int t821;
    register int t826;
    register int t827;
    register int t831;
    register int t835;
    register int t836;
    register int t837;
    register int t840;
    register int t847;
    register int t849;
    register int t853;
    register int t856;
    register int t857;
    register int t876;
    register int t884;
    register int t891;
    register int t892;
    register int t895;
    register int t896;
    register int t900;
    register int t907;
    register int t11;
    register float u12;
    register float u13;
    register int t14;
    register float u15;
    register float u16;
    register int t17;
    register float u18;
    register float u19;
    register int t20;
    register float u21;
    register float u22;
    int t23;
    register float u24;
    register float u25;
    register float u547;
    register float u513;
    register float u436;
    int t53;
    register int t54;
    register int t56;
    register float u424;
    int t119;
    register int t122;
    register float u412;
    int t191;
    register int t193;
    register float u402;
    int t238;
    register int t241;
    register float u392;
    register float u383;
    register int t331;
    int t461;
    register int t463;
    register float u558;
    register int t902;

    t0 = (((struct oC4_int *)(a4))->v);
    t1 = *(signed char *)((a4 + 0x14));
    if (t1 != 0) {
        if (t1 == 1) {
            nlSelectMatrixStack(0x1);
            FUN_0c17b1a0(((((struct o68_int *)(t0))->v)));
            *(unsigned int *)(((int)stk + 0)) = (((int)stk + 0) + 0x3C);
            nlCalcPoint((a4 + 0x28), (((int)stk + 0) + 0x3C));
            *(unsigned int *)(((int)stk + 4)) = ((((int)stk + 0) + 0x3C) + 0xC);
            nlCalcPoint((t0 + 0x6C), ((((int)stk + 0) + 0x3C) + 0xC));
            u9 = *(float *)(((*(int *)(((int)stk + 0))) + 0x0));
            t739 = 0x8;
            if ((u9 == ((((struct o748_float *)(t0))->v))) && ((t11 = *(int *)(((int)stk + 0)), u12 = (((struct o4_float *)((0x748 + t0)))->v), u13 = (((struct o4_float *)(t11))->v), u13 == u12) && ((t14 = *(int *)(((int)stk + 0)), u15 = (((struct o8_float *)((0x748 + t0)))->v), u16 = (((struct o8_float *)(t14))->v), u16 == u15) && ((t17 = *(int *)(((int)stk + 4)), u18 = (((struct oC_float *)((0x748 + t0)))->v), u19 = *(float *)((t17 + 0x0)), u19 == u18) && ((t20 = *(int *)(((int)stk + 4)), u21 = (((struct o10_float *)((0x748 + t0)))->v), u22 = (((struct o4_float *)(t20))->v), u22 == u21) && (t23 = *(int *)(((int)stk + 4)), u24 = (((struct o14_float *)((0x748 + t0)))->v), u25 = (((struct o8_float *)(t23))->v), u25 == u24)))))) {
            } else {
                *(unsigned int *)(((int)stk + 0)) = (((int)stk + 0) + 0x6C);
                t26 = *(signed char *)((a4 + 0x16));
                if ((t26 & 0x70) != 0) {
                    if ((t26 & 0x70) != 16) {
                        if ((t26 & 0x70) == 32) {
                            *(unsigned char *)(((*(int *)(((int)stk + 0))) + 0x0)) = 0x5;
                            t28 = (t26 & 0x70);
                            for (;;) {
                                if ((int)(*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))) <= 0) {
                                    break;
                                }
                                *(unsigned int *)(((int)stk + 4)) = (*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0)));
                                *(volatile int *)(((int)stk + 4));
                                t28 = 0xC;
                                t28 = (((int (*)(int, int, int))(FUN_0c187798))(0x5, 0xF, 0xC20361C));
                                *(unsigned int *)(((int)stk + 4)) = (0x748 + t0);
                                t28 = (*(int *)(((int)stk + 4)));
                                *(volatile signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
                                t28 = 0xC;
                                t28 = (((int (*)(void))(FUN_0c187798))());
                                t28 = (*(int *)(((int)stk + 0)));
                                *(unsigned char *)((t28 + 0x0)) = ((*(signed char *)((t28 + 0x0))) - 1);
                            }
                            t50 = ((int (*)(int, int, int))(FUN_0c187798))(0x5, 0xF, 0xC20361C);
                            t51 = ((int (*)(void))(FUN_0c187798))();
                            u55 = *(float *)((t54 + (((*(signed char *)((a4 + 0x16))) & t53) << 2)));
                            *(unsigned int *)(((int)stk + 0)) = (((int)stk + 0) + 0x6C);
                            (((struct o6C_uchar *)(((int)stk + 0)))->v) = t56;
                            *(unsigned int *)(((int)stk + 4)) = (((int)stk + 0) + 0x3C);
                            *(unsigned int *)(((int)stk + 8)) = ((((int)stk + 0) + 0x3C) + 0xC);
                            for (;;) {
                                if ((int)(*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))) <= 0) {
                                    break;
                                }
                                t61 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
                                *(unsigned int *)(((int)stk + 12)) = (((((t61 << 1) << 1) + (t61 << 1)) << 2) + (0x748 + t0));
                                FUN_0c17c130((*(int *)(((int)stk + 4))), (*(int *)(((int)stk + 12))), ((((((t61 << 1) << 1) + (t61 << 1)) << 2) + (0x748 + t0)) + 0xC));
                                math_vec3_mul_xyz((*(int *)(((int)stk + 4))), 0.5f, 0.5f, 0.5f);
                                t70 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
                                FUN_0c0e2390((*(int *)(((int)stk + 8))), (((((t70 << 1) << 1) + (t70 << 1)) << 2) + (0x748 + t0)), (*(int *)(((int)stk + 4))));
                                math_vec3_mul_xyz((*(int *)(((int)stk + 8))), u55, u55, u55);
                                t79 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
                                FUN_0c17c130((((((t79 << 1) << 1) + (t79 << 1)) << 2) + (0x748 + t0)), (*(int *)(((int)stk + 4))), (*(int *)(((int)stk + 8))));
                                math_vec3_mul_xyz((*(int *)(((int)stk + 8))), -1.0f, -1.0f, -1.0f);
                                t88 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
                                FUN_0c17c130(((((((t88 << 1) << 1) + (t88 << 1)) << 2) + (0x748 + t0)) + 0xC), (*(int *)(((int)stk + 4))), (*(int *)(((int)stk + 8))));
                                t94 = *(int *)(((int)stk + 0));
                                *(unsigned char *)((t94 + 0x0)) = ((*(signed char *)((t94 + 0x0))) - 1);
                            }
                        } else {
                            if ((t26 & 0x70) == 48) {
                                *(unsigned char *)(((*(int *)(((int)stk + 0))) + 0x0)) = 0x5;
                                t97 = (t26 & 0x70);
                                for (;;) {
                                    if ((int)(*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))) <= 0) {
                                        break;
                                    }
                                    *(volatile signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
                                    t97 = 0xC;
                                    t97 = (((int (*)(int, int, int))(FUN_0c187798))(0x5, 0xF, (0x748 + t0)));
                                    *(volatile signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
                                    t97 = 0xC;
                                    t97 = (((int (*)(int, int, int))(FUN_0c187798))(0x0, 0x0, (0x748 + t0)));
                                    t97 = (*(int *)(((int)stk + 0)));
                                    *(unsigned char *)((t97 + 0x0)) = ((*(signed char *)((t97 + 0x0))) - 1);
                                }
                                t116 = ((int (*)(int, int, int))(FUN_0c187798))(0x5, 0xF, 0xC20361C);
                                t117 = ((int (*)(void))(FUN_0c187798))();
                                t118 = *(signed char *)((a4 + 0x16));
                                u120 = *(float *)((((t118 & t119) << 2) + 0xC203634));
                                u121 = *(float *)((((t118 & t119) << 2) + 0xC203640));
                                *(unsigned int *)(((int)stk + 0)) = (((int)stk + 0) + 0x6C);
                                (((struct o6C_uchar *)(((int)stk + 0)))->v) = t122;
                                *(unsigned int *)(((int)stk + 8)) = (((int)stk + 0) + 0x3C);
                                *(unsigned int *)(((int)stk + 4)) = ((((int)stk + 0) + 0x3C) + 0xC);
                                for (;;) {
                                    if ((int)(*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))) < 0) {
                                        break;
                                    }
                                    t127 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
                                    *(unsigned int *)(((int)stk + 12)) = (((((t127 << 1) << 1) + (t127 << 1)) << 2) + (0x748 + t0));
                                    FUN_0c17c130((*(int *)(((int)stk + 8))), (*(int *)(((int)stk + 12))), ((((((t127 << 1) << 1) + (t127 << 1)) << 2) + (0x748 + t0)) + 0xC));
                                    math_vec3_mul_xyz((*(int *)(((int)stk + 8))), 0.5f, 0.5f, 0.5f);
                                    t136 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
                                    FUN_0c0e2390((*(int *)(((int)stk + 4))), (((((t136 << 1) << 1) + (t136 << 1)) << 2) + (0x748 + t0)), (*(int *)(((int)stk + 8))));
                                    u144 = u120;
                                    u145 = u120;
                                    u146 = u120;
                                    if ((int)(*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))) > (int)0x1) {
                                        u144 = u121;
                                        u145 = u121;
                                        u146 = u121;
                                    }
                                    math_vec3_mul_xyz((*(int *)(((int)stk + 4))), u144, u145, u146);
                                    t151 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
                                    FUN_0c17c130((((((t151 << 1) << 1) + (t151 << 1)) << 2) + (0x748 + t0)), (*(int *)(((int)stk + 8))), (*(int *)(((int)stk + 4))));
                                    math_vec3_mul_xyz((*(int *)(((int)stk + 4))), -1.0f, -1.0f, -1.0f);
                                    t160 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
                                    FUN_0c17c130(((((((t160 << 1) << 1) + (t160 << 1)) << 2) + (0x748 + t0)) + 0xC), (*(int *)(((int)stk + 8))), (*(int *)(((int)stk + 4))));
                                    t166 = *(int *)(((int)stk + 0));
                                    *(unsigned char *)((t166 + 0x0)) = ((*(signed char *)((t166 + 0x0))) - 1);
                                }
                            } else {
                                if ((t26 & 0x70) == 64) {
                                    *(unsigned char *)(((*(int *)(((int)stk + 0))) + 0x0)) = 0x5;
                                    t169 = (t26 & 0x70);
                                    for (;;) {
                                        if ((int)(*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))) <= 0) {
                                            break;
                                        }
                                        t169 = 0xC;
                                        t169 = (((int (*)(int, int, int))(FUN_0c187798))(0x5, 0xF, (*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0)))));
                                        *(volatile signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
                                        t169 = 0xC;
                                        t169 = (((int (*)(int, int, int))(FUN_0c187798))(0x0, 0x0, (0x748 + t0)));
                                        t169 = (*(int *)(((int)stk + 0)));
                                        *(unsigned char *)((t169 + 0x0)) = ((*(signed char *)((t169 + 0x0))) - 1);
                                    }
                                    t188 = ((int (*)(int, int, int))(FUN_0c187798))(0x5, 0xF, 0xC20361C);
                                    t189 = ((int (*)(void))(FUN_0c187798))();
                                    u192 = *(float *)(((((*(signed char *)((a4 + 0x16))) & t191) << 2) + 0xC20364C));
                                    *(unsigned int *)(((int)stk + 0)) = (((int)stk + 0) + 0x6C);
                                    (((struct o6C_uchar *)(((int)stk + 0)))->v) = t193;
                                    *(unsigned int *)(((int)stk + 4)) = (((int)stk + 0) + 0x3C);
                                    for (;;) {
                                        if ((int)(*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))) <= 0) {
                                            break;
                                        }
                                        t198 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
                                        *(unsigned int *)(((int)stk + 8)) = (((((t198 << 1) << 1) + (t198 << 1)) << 2) + (0x748 + t0));
                                        FUN_0c0e2390((*(int *)(((int)stk + 4))), (*(int *)(((int)stk + 8))), ((((((t198 << 1) << 1) + (t198 << 1)) << 2) + (0x748 + t0)) + 0xC));
                                        math_vec3_mul_xyz((*(int *)(((int)stk + 4))), u192, u192, u192);
                                        t207 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
                                        t208 = *(int *)(((int)stk + 4));
                                        *(unsigned int *)(((int)stk + 8)) = (((((t207 << 1) << 1) + (t207 << 1)) << 2) + (0x748 + t0));
                                        FUN_0c17c130((*(int *)(((int)stk + 8))), ((((((t207 << 1) << 1) + (t207 << 1)) << 2) + (0x748 + t0)) + 0xC), t208);
                                        t213 = *(int *)(((int)stk + 0));
                                        *(unsigned char *)((t213 + 0x0)) = ((*(signed char *)((t213 + 0x0))) - 1);
                                    }
                                } else {
                                    if ((t26 & 0x70) == 80) {
                                        *(unsigned char *)(((*(int *)(((int)stk + 0))) + 0x0)) = 0x5;
                                        t216 = (t26 & 0x70);
                                        for (;;) {
                                            if ((int)(*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))) <= 0) {
                                                break;
                                            }
                                            *(volatile signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
                                            t216 = 0xC;
                                            t216 = (((int (*)(int, int, int))(FUN_0c187798))(0x5, 0xF, (0x748 + t0)));
                                            *(volatile signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
                                            t216 = 0xC;
                                            t216 = (((int (*)(int, int, int))(FUN_0c187798))(0x0, 0x0, (0x748 + t0)));
                                            t216 = (*(int *)(((int)stk + 0)));
                                            *(unsigned char *)((t216 + 0x0)) = ((*(signed char *)((t216 + 0x0))) - 1);
                                        }
                                        t235 = ((int (*)(int, int, int))(FUN_0c187798))(0x5, 0xF, 0xC20361C);
                                        t236 = ((int (*)(void))(FUN_0c187798))();
                                        t237 = *(signed char *)((a4 + 0x16));
                                        u239 = *(float *)((((t237 & t238) << 2) + 0xC203664));
                                        u240 = *(float *)((((t237 & t238) << 2) + 0xC20367C));
                                        *(unsigned int *)(((int)stk + 0)) = (((int)stk + 0) + 0x6C);
                                        (((struct o6C_uchar *)(((int)stk + 0)))->v) = t241;
                                        *(unsigned int *)(((int)stk + 4)) = (((int)stk + 0) + 0x3C);
                                        *(unsigned int *)(((int)stk + 8)) = ((((int)stk + 0) + 0x3C) + 0xC);
                                        for (;;) {
                                            if ((int)(*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))) <= 0) {
                                                break;
                                            }
                                            t246 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
                                            *(unsigned int *)(((int)stk + 12)) = (((((t246 << 1) << 1) + (t246 << 1)) << 2) + (0x748 + t0));
                                            FUN_0c0e2390((*(int *)(((int)stk + 4))), (*(int *)(((int)stk + 12))), ((((((t246 << 1) << 1) + (t246 << 1)) << 2) + (0x748 + t0)) + 0xC));
                                            *(volatile int *)(((int)stk + 4));
                                            *(volatile int *)(((int)stk + 8));
                                            t254 = ((int (*)(void))(FUN_0c187798))();
                                            math_vec3_mul_xyz((*(int *)(((int)stk + 4))), u239, u239, u239);
                                            math_vec3_mul_xyz((*(int *)(((int)stk + 8))), u240, u240, u240);
                                            t260 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
                                            t261 = *(int *)(((int)stk + 4));
                                            *(unsigned int *)(((int)stk + 12)) = (((((t260 << 1) << 1) + (t260 << 1)) << 2) + (0x748 + t0));
                                            FUN_0c17c130((*(int *)(((int)stk + 12))), ((((((t260 << 1) << 1) + (t260 << 1)) << 2) + (0x748 + t0)) + 0xC), t261);
                                            t267 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
                                            t268 = *(int *)(((int)stk + 8));
                                            *(unsigned int *)(((int)stk + 12)) = ((((((t267 << 1) << 1) + (t267 << 1)) << 2) + (0x748 + t0)) + 0xC);
                                            FUN_0c17c130(((((((t267 << 1) << 1) + (t267 << 1)) << 2) + (0x748 + t0)) + 0xC), ((((((t267 << 1) << 1) + (t267 << 1)) << 2) + (0x748 + t0)) + 0xC), t268);
                                            t272 = *(int *)(((int)stk + 0));
                                            *(unsigned char *)((t272 + 0x0)) = ((*(signed char *)((t272 + 0x0))) - 1);
                                        }
                                    } else {
                                        if ((t26 & 0x70) == 96) {
                                            t278 = (int)((int)(*(short *)((a4 + 0x1E))) % (int)((*(signed char *)(((0x16 + a4) + 0x0))) & 0xF));
                                            if (t278 == 0) {
                                                *(unsigned char *)(((*(int *)(((int)stk + 0))) + 0x0)) = 0x5;
                                                for (;;) {
                                                    if ((int)(*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))) <= 0) {
                                                        break;
                                                    }
                                                    t278 = 0xC;
                                                    t278 = (((int (*)(int, int, int))(FUN_0c187798))((*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))), (0x748 + t0), 0xC20361C));
                                                    t278 = 0xC;
                                                    t278 = (((int (*)(int, int))(FUN_0c187798))((*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))), (0x748 + t0)));
                                                    t278 = (*(int *)(((int)stk + 0)));
                                                    *(unsigned char *)((t278 + 0x0)) = ((*(signed char *)((t278 + 0x0))) - 1);
                                                }
                                            }
                                            t301 = ((int (*)(int, int, int))(FUN_0c187798))(0x5, 0xF, 0xC20361C);
                                            t302 = ((int (*)(void))(FUN_0c187798))();
                                        } else {
                                            if ((t26 & 0x70) == 112) {
                                                t310 = (int)((int)(*(short *)((a4 + 0x1E))) % (int)((*(signed char *)(((0x16 + a4) + 0x0))) & 0xF));
                                                if (t310 != 0) {
                                                    t306 = ((int (*)(int, int, int))(FUN_0c187798))(0x5, 0xF, 0xC20361C);
                                                    t307 = ((int (*)(void))(FUN_0c187798))();
                                                } else {
                                                    u309 = *(float *)0xC20361C;
                                                    *(unsigned char *)(((*(int *)(((int)stk + 0))) + 0x0)) = 0x5;
                                                    for (;;) {
                                                        if ((int)(*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))) <= 0) {
                                                            break;
                                                        }
                                                        t310 = 0xC;
                                                        t310 = (((int (*)(int, int, int))(FUN_0c187798))(0x5, (0x748 + t0), (*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0)))));
                                                        t310 = 0xC;
                                                        t310 = (((int (*)(int, int, int))(FUN_0c187798))(0x0, (*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))), (0x748 + t0)));
                                                        t310 = (*(int *)(((int)stk + 0)));
                                                        *(unsigned char *)((t310 + 0x0)) = ((*(signed char *)((t310 + 0x0))) - 1);
                                                    }
                                                    t329 = ((int (*)(int, int, int))(FUN_0c187798))(0x5, 0xF, 0xC20361C);
                                                    t330 = ((int (*)(void))(FUN_0c187798))();
                                                    *(unsigned int *)(((int)stk + 0)) = (((int)stk + 0) + 0x6C);
                                                    (((struct o6C_uchar *)(((int)stk + 0)))->v) = t331;
                                                    *(unsigned int *)(((int)stk + 8)) = (((int)stk + 0) + 0x3C);
                                                    *(unsigned int *)(((int)stk + 4)) = ((((int)stk + 0) + 0x3C) + 0xC);
                                                    for (;;) {
                                                        if ((int)(*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))) <= 0) {
                                                            break;
                                                        }
                                                        t336 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
                                                        *(unsigned int *)(((int)stk + 12)) = (((((t336 << 1) << 1) + (t336 << 1)) << 2) + (0x748 + t0));
                                                        FUN_0c17c130((*(int *)(((int)stk + 8))), (*(int *)(((int)stk + 12))), ((((((t336 << 1) << 1) + (t336 << 1)) << 2) + (0x748 + t0)) + 0xC));
                                                        math_vec3_mul_xyz((*(int *)(((int)stk + 8))), 0.5f, 0.5f, 0.5f);
                                                        t345 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
                                                        FUN_0c0e2390((*(int *)(((int)stk + 4))), (((((t345 << 1) << 1) + (t345 << 1)) << 2) + (0x748 + t0)), (*(int *)(((int)stk + 8))));
                                                        math_vec3_mul_xyz((*(int *)(((int)stk + 4))), u309, u309, u309);
                                                        t354 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
                                                        FUN_0c17c130((((((t354 << 1) << 1) + (t354 << 1)) << 2) + (0x748 + t0)), (*(int *)(((int)stk + 8))), (*(int *)(((int)stk + 4))));
                                                        math_vec3_mul_xyz((*(int *)(((int)stk + 4))), -1.0f, -1.0f, -1.0f);
                                                        t363 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
                                                        FUN_0c17c130(((((((t363 << 1) << 1) + (t363 << 1)) << 2) + (0x748 + t0)) + 0xC), (*(int *)(((int)stk + 8))), (*(int *)(((int)stk + 4))));
                                                        t369 = *(int *)(((int)stk + 0));
                                                        *(unsigned char *)((t369 + 0x0)) = ((*(signed char *)((t369 + 0x0))) - 1);
                                                    }
                                                }
                                            } else {
                                                u383 = u9;
                                            }
                                            u392 = u383;
                                        }
                                        u402 = u392;
                                    }
                                    u412 = u402;
                                }
                                u424 = u412;
                            }
                            u436 = u424;
                        }
                        u513 = u436;
                    } else {
                        *(unsigned char *)(((*(int *)(((int)stk + 0))) + 0x0)) = 0x5;
                        t439 = (t26 & 0x70);
                        for (;;) {
                            if ((int)(*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))) <= 0) {
                                break;
                            }
                            t439 = 0xC;
                            t439 = (((int (*)(int, int, int))(FUN_0c187798))(0x5, 0xF, (*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0)))));
                            t439 = 0xC;
                            t439 = (((int (*)(int, int, int))(FUN_0c187798))(0x0, 0x0, (*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0)))));
                            t439 = (*(int *)(((int)stk + 0)));
                            *(unsigned char *)((t439 + 0x0)) = ((*(signed char *)((t439 + 0x0))) - 1);
                        }
                        t458 = ((int (*)(int, int, int))(FUN_0c187798))(0x5, 0xF, 0xC20361C);
                        t459 = ((int (*)(void))(FUN_0c187798))();
                        u462 = *(float *)(((((*(signed char *)((a4 + 0x16))) & t461) << 2) + 0xC203608));
                        *(unsigned int *)(((int)stk + 0)) = (((int)stk + 0) + 0x6C);
                        (((struct o6C_uchar *)(((int)stk + 0)))->v) = t463;
                        *(unsigned int *)(((int)stk + 4)) = (((int)stk + 0) + 0x3C);
                        *(unsigned int *)(((int)stk + 8)) = ((((int)stk + 0) + 0x3C) + 0xC);
                        for (;;) {
                            if ((int)(*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))) <= 0) {
                                break;
                            }
                            t468 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
                            *(unsigned int *)(((int)stk + 12)) = (((((t468 << 1) << 1) + (t468 << 1)) << 2) + (0x748 + t0));
                            FUN_0c17c130((*(int *)(((int)stk + 4))), (*(int *)(((int)stk + 12))), ((((((t468 << 1) << 1) + (t468 << 1)) << 2) + (0x748 + t0)) + 0xC));
                            math_vec3_mul_xyz((*(int *)(((int)stk + 4))), 0.5f, 0.5f, 0.5f);
                            t477 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
                            FUN_0c0e2390((*(int *)(((int)stk + 8))), (((((t477 << 1) << 1) + (t477 << 1)) << 2) + (0x748 + t0)), (*(int *)(((int)stk + 4))));
                            math_vec3_mul_xyz((*(int *)(((int)stk + 8))), u462, u462, u462);
                            t486 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
                            FUN_0c17c130((((((t486 << 1) << 1) + (t486 << 1)) << 2) + (0x748 + t0)), (*(int *)(((int)stk + 4))), (*(int *)(((int)stk + 8))));
                            math_vec3_mul_xyz((*(int *)(((int)stk + 8))), -1.0f, -1.0f, -1.0f);
                            t495 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
                            FUN_0c17c130(((((((t495 << 1) << 1) + (t495 << 1)) << 2) + (0x748 + t0)) + 0xC), (*(int *)(((int)stk + 4))), (*(int *)(((int)stk + 8))));
                            t501 = *(int *)(((int)stk + 0));
                            *(unsigned char *)((t501 + 0x0)) = ((*(signed char *)((t501 + 0x0))) - 1);
                        }
                    }
                    u547 = u513;
                } else {
                    *(unsigned char *)(((*(int *)(((int)stk + 0))) + 0x0)) = 0x5;
                    t516 = (t26 & 0x70);
                    for (;;) {
                        if ((int)(*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))) <= 0) {
                            break;
                        }
                        t516 = 0xC;
                        t516 = (((int (*)(int, int, int))(FUN_0c187798))((*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))), (0x748 + t0), 0xC20361C));
                        t516 = 0xC;
                        t516 = (((int (*)(int, int))(FUN_0c187798))((*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))), (0x748 + t0)));
                        t516 = (*(int *)(((int)stk + 0)));
                        *(unsigned char *)((t516 + 0x0)) = ((*(signed char *)((t516 + 0x0))) - 1);
                    }
                    t535 = ((int (*)(int, int, int))(FUN_0c187798))(0x5, 0xF, 0xC20361C);
                    t536 = ((int (*)(void))(FUN_0c187798))();
                }
                *(float *)(((int)stk + 56)) = -999999.0f;
                *(float *)(((int)stk + 52)) = -999999.0f;
                *(float *)(((int)stk + 48)) = -999999.0f;
                *(float *)(((int)stk + 44)) = 999999.0f;
                *(float *)(((int)stk + 40)) = 999999.0f;
                *(float *)(((int)stk + 36)) = 999999.0f;
                *(unsigned int *)(((int)stk + 8)) = (((int)stk + 0) + 0x6C);
                (((struct o6C_uchar *)(((int)stk + 0)))->v) = 0x0;
                *(unsigned int *)(((int)stk + 4)) = (((int)stk + 0) + 0x6E);
                *(unsigned int *)(((int)stk + 0)) = (((int)stk + 0) + 0x6D);
                t556 = *(int *)(((int)stk + 8));
                *(unsigned int *)(((int)stk + 8)) = t556;
                t557 = *(int *)(((int)stk + 4));
                *(unsigned int *)(((int)stk + 4)) = t557;
                *(unsigned int *)(((int)stk + 12)) = (((int)stk + 0) + 0x3C);
                *(unsigned int *)(((int)stk + 20)) = ((((int)stk + 0) + 0x3C) + 0xC);
                *(unsigned int *)(((int)stk + 16)) = ((((int)stk + 0) + 0x3C) + 0x18);
                t551 = *(int *)(((int)stk + 12));
                *(unsigned int *)(((int)stk + 12)) = t551;
                *(unsigned int *)(((int)stk + 4)) = t557;
                *(unsigned int *)(((int)stk + 12)) = t551;
                *(unsigned int *)(((int)stk + 4)) = t557;
                t555 = *(int *)(((int)stk + 0));
                *(unsigned int *)(((int)stk + 0)) = t555;
                *(unsigned int *)(((int)stk + 8)) = t556;
                *(unsigned int *)(((int)stk + 0)) = t555;
                *(unsigned int *)(((int)stk + 12)) = t551;
                *(unsigned int *)(((int)stk + 0)) = t555;
                *(unsigned int *)(((int)stk + 8)) = t556;
                *(unsigned int *)(((int)stk + 0)) = t555;
                *(unsigned int *)(((int)stk + 4)) = t557;
                *(unsigned int *)(((int)stk + 0)) = t555;
                *(unsigned int *)(((int)stk + 8)) = t556;
                *(unsigned int *)(((int)stk + 0)) = t555;
                *(unsigned int *)(((int)stk + 8)) = t556;
                t553 = 0x24;
                t554 = (((int)stk + 0) + 0x3C);
                u559 = u547;
                u560 = 999999.0f;
                for (;;) {
                    if ((int)(*(signed char *)(((*(int *)(((int)stk + 8))) + 0x0))) < (int)0x4) {
                        *(unsigned char *)(((*(int *)(((int)stk + 0))) + 0x0)) = 0x0;
                        for (;;) {
                            if ((int)(*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))) < (int)0x2) {
                                if ((*(signed char *)(((*(int *)(((int)stk + 8))) + 0x0))) != 0) {
                                    t557 = 0x748;
                                    t557 = (t557 + t0);
                                    *(unsigned int *)(((int)stk + 24)) = t557;
                                    t569 = *(signed char *)(((*(int *)(((int)stk + 8))) + 0x0));
                                    *(unsigned int *)(((int)stk + 28)) = t569;
                                    t554 = (*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0)));
                                    *(unsigned int *)(((int)stk + 32)) = t554;
                                    t556 = (*(int *)(((int)stk + 28)));
                                    t556 = (t556 << 1);
                                    t556 = (t556 + t554);
                                    t577 = t556;
                                    t556 = (t556 << 1);
                                    t557 = (t557 + ((((((t569 + 0x1) << 1) + t554) << 1) + (((t569 + 0x1) << 1) + t554)) << 2));
                                    t556 = (t556 + t577);
                                    t556 = (t556 << 2);
                                    t556 = (t556 + (*(int *)(((int)stk + 24))));
                                    t555 = (*(int *)(((int)stk + 12)));
                                    t553 = (FUN_0c17c130(t555, t556, t557));
                                    t555 = (*(int *)(((int)stk + 12)));
                                    t553 = (math_vec3_mul_xyz(t555, 0.5f, 0.5f, 0.5f));
                                } else {
                                    t553 = 0x748;
                                    *(volatile signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
                                    t553 = (t553 + t0);
                                    t554 = (*(int *)(((int)stk + 12)));
                                    t553 = 0xC;
                                    t553 = (((int (*)(int, int, int))(FUN_0c187798))(t555, t556, t557));
                                }
                                t591 = *(int *)(((int)stk + 0));
                                *(volatile signed char *)(((*(int *)(((int)stk + 8))) + 0x0));
                                *(volatile signed char *)((t591 + 0x0));
                                t553 = 0x748;
                                t554 = (*(int *)(((int)stk + 20)));
                                t553 = (t553 + t0);
                                t553 = 0xC;
                                t553 = (((int (*)(void))(FUN_0c187798))());
                                t557 = 0x748;
                                t557 = (t557 + t0);
                                *(unsigned int *)(((int)stk + 28)) = t557;
                                t600 = *(signed char *)(((*(int *)(((int)stk + 8))) + 0x0));
                                *(unsigned int *)(((int)stk + 32)) = t600;
                                t554 = (*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0)));
                                *(unsigned int *)(((int)stk + 24)) = t554;
                                t556 = (*(int *)(((int)stk + 32)));
                                t556 = (t556 + 0x1);
                                t556 = (t556 << 1);
                                t556 = (t556 + t554);
                                t608 = t556;
                                t556 = (t556 << 1);
                                t557 = (t557 + ((((((t600 + 0x2) << 1) + t554) << 1) + (((t600 + 0x2) << 1) + t554)) << 2));
                                t556 = (t556 + t608);
                                t556 = (t556 << 2);
                                t556 = (t556 + (*(int *)(((int)stk + 28))));
                                t555 = (*(int *)(((int)stk + 16)));
                                t553 = (FUN_0c17c130(t555, t556, t557));
                                t555 = (*(int *)(((int)stk + 16)));
                                t553 = (math_vec3_mul_xyz(t555, 0.5f, 0.5f, 0.5f));
                                *(unsigned char *)(((*(int *)(((int)stk + 4))) + 0x0)) = 0x0;
                                for (;;) {
                                    if ((int)(*(signed char *)(((*(int *)(((int)stk + 4))) + 0x0))) < (int)0x6) {
                                        t553 = 0x4;
                                        t557 = (*(int *)(((int)stk + 4)));
                                        t619 = *(signed char *)(((*(int *)(((int)stk + 8))) + 0x0));
                                        t555 = (*(int *)(((int)stk + 0)));
                                        t557 = (*(signed char *)((t557 + 0x0)));
                                        t555 = (*(signed char *)((t555 + 0x0)));
                                        t554 = 0xC2035C0;
                                        t555 = (t555 - (((t619 << 1) + t619) << 2));
                                        t555 = (t555 - ((signed char)t557 << 1));
                                        t555 = (t555 + 0x2E);
                                        t555 = (t555 << 2);
                                        t555 = (t555 << 1);
                                        t555 = (t555 << 2);
                                        t556 = (signed char)t557;
                                        t555 = (t555 + (*(int *)((t0 + 0x8))));
                                        t629 = t556;
                                        t556 = (t556 << 1);
                                        t556 = (t556 + t629);
                                        t556 = (t556 << 2);
                                        t556 = (t556 + t554);
                                        u558 = (*(float *)((t556 + t553)));
                                        t555 = (t555 + 0x70);
                                        u560 = (*(float *)(((*(int *)(((int)stk + 20))) + 0x0)));
                                        t553 = 0x8;
                                        u559 = (*(float *)(((*(int *)(((int)stk + 12))) + 0x0)));
                                        u560 = (u560 * u558);
                                        u558 = (*(float *)((t556 + 0x0)));
                                        u636 = u560;
                                        u636 = u636 + u558 * u559;
                                        u560 = u636;
                                        u559 = (*(float *)(((*(int *)(((int)stk + 16))) + 0x0)));
                                        u558 = (*(float *)((t556 + t553)));
                                        t553 = 0x30;
                                        u639 = u560;
                                        u639 = u639 + u558 * u559;
                                        u560 = u639;
                                        *(float *)((t555 + 0x0)) = u560;
                                        u559 = (*(float *)((((int)stk + 0) + t553)));
                                        if (u560 > u559) {
                                            u560 = (*(float *)((t555 + 0x0)));
                                            t553 = 0x30;
                                            *(float *)((((int)stk + 0) + t553)) = u560;
                                        }
                                        t553 = 0x24;
                                        u560 = (*(float *)((t555 + 0x0)));
                                        u559 = (*(float *)((((int)stk + 0) + t553)));
                                        if (u559 > u560) {
                                            u560 = (*(float *)((t555 + 0x0)));
                                            t553 = 0x24;
                                            *(float *)((((int)stk + 0) + t553)) = u560;
                                        }
                                        t553 = 0x4;
                                        t554 = 0xC2035C0;
                                        *(unsigned int *)((t555 + 0x0)) = ((*(int *)((t555 + 0x0))) | 0x1);
                                        t555 = (t555 + 0x4);
                                        t556 = (*(int *)(((int)stk + 4)));
                                        t556 = (*(signed char *)((t556 + 0x0)));
                                        u559 = (*(float *)(((*(int *)(((int)stk + 12))) + t553)));
                                        t655 = t556;
                                        t556 = (t556 << 1);
                                        t556 = (t556 + t655);
                                        t556 = (t556 << 2);
                                        t556 = (t556 + t554);
                                        u560 = (*(float *)(((*(int *)(((int)stk + 20))) + t553)));
                                        u558 = (*(float *)((t556 + t553)));
                                        t553 = 0x8;
                                        u560 = (u560 * u558);
                                        u558 = (*(float *)((t556 + 0x0)));
                                        u661 = u560;
                                        u661 = u661 + u558 * u559;
                                        u560 = u661;
                                        u558 = (*(float *)((t556 + t553)));
                                        t553 = 0x4;
                                        u559 = (*(float *)(((*(int *)(((int)stk + 16))) + t553)));
                                        t553 = 0x34;
                                        u664 = u560;
                                        u664 = u664 + u558 * u559;
                                        u560 = u664;
                                        *(float *)((t555 + 0x0)) = u560;
                                        u559 = (*(float *)((((int)stk + 0) + t553)));
                                        if (u560 > u559) {
                                            u560 = (*(float *)((t555 + 0x0)));
                                            t553 = 0x34;
                                            *(float *)((((int)stk + 0) + t553)) = u560;
                                        }
                                        t553 = 0x28;
                                        u560 = (*(float *)((t555 + 0x0)));
                                        u559 = (*(float *)((((int)stk + 0) + t553)));
                                        if (u559 > u560) {
                                            u560 = (*(float *)((t555 + 0x0)));
                                            t553 = 0x28;
                                            *(float *)((((int)stk + 0) + t553)) = u560;
                                        }
                                        t556 = (*(int *)(((int)stk + 4)));
                                        t553 = 0x4;
                                        t554 = 0xC2035C0;
                                        t555 = (t555 + 0x4);
                                        t556 = (*(signed char *)((t556 + 0x0)));
                                        t677 = t556;
                                        t556 = (t556 << 1);
                                        t556 = (t556 + t677);
                                        t556 = (t556 << 2);
                                        t556 = (t556 + t554);
                                        u558 = (*(float *)((t556 + t553)));
                                        t553 = 0x8;
                                        u560 = (*(float *)(((*(int *)(((int)stk + 20))) + t553)));
                                        u559 = (*(float *)(((*(int *)(((int)stk + 12))) + t553)));
                                        t553 = 0x8;
                                        u560 = (u560 * u558);
                                        u558 = (*(float *)((t556 + 0x0)));
                                        u684 = u560;
                                        u684 = u684 + u558 * u559;
                                        u560 = u684;
                                        u559 = (*(float *)(((*(int *)(((int)stk + 16))) + t553)));
                                        u558 = (*(float *)((t556 + t553)));
                                        t553 = 0x38;
                                        u687 = u560;
                                        u687 = u687 + u558 * u559;
                                        u560 = u687;
                                        *(float *)((t555 + 0x0)) = u560;
                                        u559 = (*(float *)((((int)stk + 0) + t553)));
                                        if (u560 > u559) {
                                            u560 = (*(float *)((t555 + 0x0)));
                                            t553 = 0x38;
                                            *(float *)((((int)stk + 0) + t553)) = u560;
                                        }
                                        t553 = 0x2C;
                                        u560 = (*(float *)((t555 + 0x0)));
                                        u559 = (*(float *)((((int)stk + 0) + t553)));
                                        if (u559 > u560) {
                                            u560 = (*(float *)((t555 + 0x0)));
                                            t553 = 0x2C;
                                            *(float *)((((int)stk + 0) + t553)) = u560;
                                        }
                                        t696 = *(int *)(((int)stk + 4));
                                        *(unsigned char *)((t696 + 0x0)) = ((*(signed char *)((t696 + 0x0))) + 0x1);
                                        continue;
                                    }
                                    break;
                                }
                                t554 = (*(int *)(((int)stk + 0)));
                                *(unsigned char *)((t554 + 0x0)) = ((*(signed char *)((t554 + 0x0))) + 0x1);
                                continue;
                            }
                            break;
                        }
                        t554 = (*(int *)(((int)stk + 8)));
                        *(unsigned char *)((t554 + 0x0)) = ((*(signed char *)((t554 + 0x0))) + 0x1);
                        continue;
                    }
                    break;
                }
                t702 = FUN_0c0e2340((((int)stk + 0) + 0x30));
                t703 = FUN_0c0e2340((((int)stk + 0) + 0x24));
                if (t702 > t703) {
                    (((struct o14_float *)((*(int *)((t0 + 0x8)))))->v) = t702;
                    (((struct o34_float *)((*(int *)((t0 + 0x8)))))->v) = t702;
                } else {
                    (((struct o14_float *)((*(int *)((t0 + 0x8)))))->v) = t703;
                    (((struct o34_float *)((*(int *)((t0 + 0x8)))))->v) = t703;
                }
                t711 = *(short *)((a4 + 0x1E));
                *(unsigned short *)((a4 + 0x1E)) = (t711 - 1);
                if ((int)(short)(t711 - 1) <= 0) {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                }
                t716 = *(short *)((a4 + 0x1E));
                t739 = t716;
                if ((int)t716 < (int)0x8) {
                    t717 = *(short *)((a4 + 0x1E));
                    (((struct oB4_float *)(a4))->v) = (((((struct oB4_float *)(a4))->v)) - ((((float)t717 * 16.0f) / 255.0f)));
                    if (0.0f > ((((struct oB4_float *)(a4))->v))) {
                        (((struct oB4_float *)(a4))->v) = 0.0f;
                    }
                    (((struct oB8_float *)(a4))->v) = (((((struct oB8_float *)(a4))->v)) - ((((float)t717 * 16.0f) / 255.0f)));
                    if (0.0f > ((((struct oB8_float *)(a4))->v))) {
                        (((struct oB8_float *)(a4))->v) = 0.0f;
                    }
                    (((struct oBC_float *)(a4))->v) = (((((struct oBC_float *)(a4))->v)) - ((((float)t717 * 16.0f) / 255.0f)));
                    if (0.0f > ((((struct oBC_float *)(a4))->v))) {
                        (((struct oBC_float *)(a4))->v) = 0.0f;
                    }
                    t739 = 0xBC;
                }
            }
            t907 = t739;
        } else {
            t907 = (FUN_0c03f346(a4, a5, a6, a7));
        }
    } else {
        if ((*(signed char *)((a4 + 0x15))) == 0) {
            (((struct oA8_uchar *)(a4))->v) = 0x0;
            nlSelectMatrixStack(0x1);
            FUN_0c17b1a0(((((struct o68_int *)(t0))->v)));
            *(unsigned int *)(((int)stk + 0)) = (((int)stk + 0) + 0x3C);
            nlCalcPoint((a4 + 0x28), (((int)stk + 0) + 0x3C));
            *(unsigned int *)(((int)stk + 4)) = ((((int)stk + 0) + 0x3C) + 0xC);
            nlCalcPoint((t0 + 0x6C), ((((int)stk + 0) + 0x3C) + 0xC));
            *(volatile int *)(((int)stk + 0));
            t774 = ((int (*)(void))(FUN_0c187798))();
            *(volatile int *)(((int)stk + 4));
            t776 = ((int (*)(void))(FUN_0c187798))();
            t777 = *(int *)(((int)stk + 0));
            *(unsigned int *)((t777 + 0x0)) = ((*(int *)((t777 + 0x0))) | 0x1);
            t779 = *(int *)(((int)stk + 4));
            *(unsigned int *)((t779 + 0x0)) = ((*(int *)((t779 + 0x0))) | 0x1);
            t902 = 0x15;
        } else {
            nlSelectMatrixStack(0x1);
            FUN_0c17b1a0(((((struct o68_int *)(t0))->v)));
            *(unsigned int *)(((int)stk + 12)) = (((int)stk + 0) + 0x3C);
            nlCalcPoint((a4 + 0x28), (((int)stk + 0) + 0x3C));
            *(unsigned int *)(((int)stk + 8)) = ((((int)stk + 0) + 0x3C) + 0xC);
            nlCalcPoint((t0 + 0x6C), ((((int)stk + 0) + 0x3C) + 0xC));
            *(unsigned int *)(((int)stk + 4)) = ((((int)stk + 0) + 0x3C) + 0x18);
            t786 = ((int (*)(void))(FUN_0c187798))();
            *(unsigned int *)(((int)stk + 0)) = ((((int)stk + 0) + 0x3C) + 0x24);
            t787 = ((int (*)(void))(FUN_0c187798))();
            *(volatile int *)(((int)stk + 12));
            t789 = ((int (*)(void))(FUN_0c187798))();
            *(volatile int *)(((int)stk + 8));
            t791 = ((int (*)(void))(FUN_0c187798))();
            t792 = *(int *)(((int)stk + 4));
            FUN_0c0e2390(t792, t792, (*(int *)(((int)stk + 12))));
            t795 = *(int *)(((int)stk + 0));
            FUN_0c0e2390(t795, t795, (*(int *)(((int)stk + 8))));
            math_vec3_mul_xyz((*(int *)(((int)stk + 4))), 0.200000003f, 0.200000003f, 0.200000003f);
            math_vec3_mul_xyz((*(int *)(((int)stk + 0))), 0.200000003f, 0.200000003f, 0.200000003f);
            *(unsigned int *)(((int)stk + 0)) = (((int)stk + 0) + 0x6C);
            (((struct o6C_uchar *)(((int)stk + 0)))->v) = 0x1;
            *(unsigned int *)(((int)stk + 8)) = ((((int)stk + 0) + 0x3C) + 0x18);
            *(unsigned int *)(((int)stk + 4)) = ((((int)stk + 0) + 0x3C) + 0x24);
            for (;;) {
                if ((int)(*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))) >= (int)0x6) {
                    break;
                }
                t811 = ((int (*)(int, int))(FUN_0c187798))((0x748 + t0), (*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))));
                t818 = ((int (*)(int, int))(FUN_0c187798))((0x748 + t0), (*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))));
                t820 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
                t821 = *(int *)(((int)stk + 8));
                *(unsigned int *)(((int)stk + 12)) = (((((t820 << 1) << 1) + (t820 << 1)) << 2) + (0x748 + t0));
                FUN_0c17c130((((((t820 << 1) << 1) + (t820 << 1)) << 2) + (0x748 + t0)), (((((t820 << 1) << 1) + (t820 << 1)) << 2) + (0x748 + t0)), t821);
                t826 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
                t827 = *(int *)(((int)stk + 4));
                *(unsigned int *)(((int)stk + 12)) = ((((((t826 << 1) << 1) + (t826 << 1)) << 2) + (0x748 + t0)) + 0xC);
                FUN_0c17c130(((((((t826 << 1) << 1) + (t826 << 1)) << 2) + (0x748 + t0)) + 0xC), ((((((t826 << 1) << 1) + (t826 << 1)) << 2) + (0x748 + t0)) + 0xC), t827);
                t831 = *(int *)(((int)stk + 0));
                *(unsigned char *)((t831 + 0x0)) = ((*(signed char *)((t831 + 0x0))) + 0x1);
            }
            *(unsigned int *)(((int)stk + 0)) = (((int)stk + 0) + 0x3C);
            nlCalcPoint((a4 + 0x28), (((int)stk + 0) + 0x3C));
            *(unsigned int *)(((int)stk + 4)) = ((((int)stk + 0) + 0x3C) + 0xC);
            nlCalcPoint((t0 + 0x6C), ((((int)stk + 0) + 0x3C) + 0xC));
            *(unsigned int *)(((int)stk + 8)) = ((((int)stk + 0) + 0x3C) + 0x18);
            t835 = ((int (*)(void))(FUN_0c187798))();
            *(unsigned int *)(((int)stk + 12)) = ((((int)stk + 0) + 0x3C) + 0x24);
            t836 = ((int (*)(void))(FUN_0c187798))();
            t837 = *(int *)(((int)stk + 8));
            FUN_0c0e2390(t837, t837, (*(int *)(((int)stk + 0))));
            t840 = *(int *)(((int)stk + 12));
            FUN_0c0e2390(t840, t840, (*(int *)(((int)stk + 4))));
            math_vec3_mul_xyz((*(int *)(((int)stk + 8))), 0.0434782617f, 0.0434782617f, 0.0434782617f);
            math_vec3_mul_xyz((*(int *)(((int)stk + 12))), 0.0434782617f, 0.0434782617f, 0.0434782617f);
            t847 = *(int *)(((int)stk + 0));
            *(unsigned int *)((t847 + 0x0)) = ((*(int *)((t847 + 0x0))) | 0x1);
            t849 = *(int *)(((int)stk + 4));
            *(unsigned int *)((t849 + 0x0)) = ((*(int *)((t849 + 0x0))) | 0x1);
            *(volatile int *)((t0 + 0x8));
            *(volatile int *)(((int)stk + 0));
            t853 = ((int (*)(void))(FUN_0c187798))();
            *(volatile int *)((t0 + 0x8));
            *(volatile int *)(((int)stk + 4));
            t856 = ((int (*)(void))(FUN_0c187798))();
            *(unsigned int *)(((int)stk + 0)) = (((int)stk + 0) + 0x6C);
            (((struct o6C_uchar *)(((int)stk + 0)))->v) = 0x1;
            *(unsigned int *)(((int)stk + 8)) = ((((int)stk + 0) + 0x3C) + 0x18);
            *(unsigned int *)(((int)stk + 4)) = ((((int)stk + 0) + 0x3C) + 0x24);
            t857 = (((int)stk + 0) + 0x6C);
            for (;;) {
                if ((int)(*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))) >= (int)0x18) {
                    break;
                }
                t857 = 0xC;
                t857 = (((int (*)(int, int))(FUN_0c187798))((*(int *)((t0 + 0x8))), (*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0)))));
                t857 = 0xC;
                t857 = (((int (*)(int, int))(FUN_0c187798))((*(int *)((t0 + 0x8))), (*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0)))));
                t876 = *(int *)((t0 + 0x8));
                t857 = (FUN_0c17c130(((((((*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))) << 2) << 2) << 2) + t876) + 0x70), ((((((*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))) << 2) << 2) << 2) + t876) + 0x70), (*(int *)(((int)stk + 8)))));
                t884 = *(int *)((t0 + 0x8));
                t857 = (FUN_0c17c130(((((((((*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))) << 1) + 0x1) << 2) << 1) << 2) + t884) + 0x70), ((((((((*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))) << 1) + 0x1) << 2) << 1) << 2) + t884) + 0x70), (*(int *)(((int)stk + 4)))));
                t891 = *(int *)((t0 + 0x8));
                t892 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
                t857 = ((((struct o70_int *)(((((t892 << 2) << 2) << 2) + t891)))->v));
                t857 = (t857 | 0x1);
                (((struct o70_uint *)(((((t892 << 2) << 2) << 2) + t891)))->v) = t857;
                t895 = *(int *)((t0 + 0x8));
                t896 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
                t857 = ((((struct o70_int *)(((((((t896 << 1) + 0x1) << 2) << 1) << 2) + t895)))->v));
                t857 = (t857 | 0x1);
                (((struct o70_uint *)(((((((t896 << 1) + 0x1) << 2) << 1) << 2) + t895)))->v) = t857;
                t900 = *(int *)(((int)stk + 0));
                *(unsigned char *)((t900 + 0x0)) = ((*(signed char *)((t900 + 0x0))) + 0x1);
            }
            (((struct oA8_uchar *)(a4))->v) = 0x1;
            (((struct o15_uchar *)(a4))->v) = 0x0;
            t902 = 0x14;
        }
        *(unsigned char *)((a4 + t902)) = ((*(signed char *)((a4 + t902))) + 0x1);
        t907 = t902;
    }
    return t907;
}
