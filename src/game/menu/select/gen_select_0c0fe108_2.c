/* game/menu/select: functions 0C0FE108-0C0FFCDA, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_int { char p[0x10]; int v; };
struct o14_int { char p[0x14]; int v; };
struct o18_int { char p[0x18]; int v; };
struct o1C_int { char p[0x1C]; int v; };
struct o20_int { char p[0x20]; int v; };
struct o24_int { char p[0x24]; int v; };
struct o28_int { char p[0x28]; int v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o2C_int { char p[0x2C]; int v; };
struct o30_int { char p[0x30]; int v; };
struct o30_uint { char p[0x30]; unsigned int v; };
struct o34_int { char p[0x34]; int v; };
struct o34_uint { char p[0x34]; unsigned int v; };
struct o38_uint { char p[0x38]; unsigned int v; };
struct o3C_int { char p[0x3C]; int v; };
struct o3C_uint { char p[0x3C]; unsigned int v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
int FUN_0c036de8(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c038548(int);
int FUN_0c038e88(int);
int FUN_0c03add8(void);
int FUN_0c03b6ac(int);
int FUN_0c03b9d0(int);
int FUN_0c03c018(int);
int FUN_0c03c210(int);
int FUN_0c03c358(int);
int FUN_0c03c5c0(int);
int FUN_0c03c7ec(int);
int FUN_0c03cacc(int);
int FUN_0c03ceb6(int);
int FUN_0c03d0bc(int);
int FUN_0c03ea04(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c03eff6(void);
int FUN_0c03f40c(int);
int FUN_0c0527e6(void);
int FUN_0c0573c0(int, int, int);
int FUN_0c05aab6(int, int);
int FUN_0c05f80a(void);
int FUN_0c0fe116(void);
int FUN_0c0fe154(int);
int FUN_0c0fe178(int);
int FUN_0c0fe17e(void);
int FUN_0c0fe23a(void);
int FUN_0c0fe328(void);
int FUN_0c0fe3a0(void);
int FUN_0c0fe3d0(void);
int FUN_0c0fe496(void);
int FUN_0c0ffaa2(void);
int FUN_0c0ffcf8(int);
int FUN_0c0ffebc(void);
int FUN_0c0ffff0(void);
int FUN_0c1000c4(int);
int FUN_0c16f7ba(void);
int FUN_0c0fe530(void);

int FUN_0c0fe530(void)
{
    int stk[4];
    int t15;
    register int t50;
    register int t62;
    register int t63;
    register int t78;
    register int t84;
    register int t101;
    register int t113;
    register int t134;
    register int t141;
    register int t142;
    register int t143;
    register int t145;
    register int t151;
    register int t161;
    register int t163;
    register int t171;
    register int t176;
    register int t184;
    register int t194;
    register int t198;
    register int t276;
    register int t286;
    register int t290;
    register int t329;
    register int t331;
    register int t332;
    register int t334;
    register int t354;
    register int t357;
    register int t358;
    register int t360;
    register int t376;
    register int t389;
    register int t393;
    register int t400;
    register int t421;
    register int t424;
    register int t428;
    register int t435;
    register int t452;
    register int t464;
    register int t467;
    register int t472;
    register int t475;
    register int t476;
    register int t478;
    register int t499;
    register int t500;
    register int t502;
    register int t523;
    register int t530;
    register int t537;
    register int t544;
    register int t565;
    register int t568;
    register int t575;
    register int t582;
    register int t589;
    register int t606;
    register int t618;
    register int t620;
    register int t621;
    register int t623;
    register int t669;
    register int t690;
    register int t693;
    register int t694;
    register int t696;
    register int t742;
    register int t759;
    register int t771;
    register int t779;
    register int t781;
    register int t797;
    register int t803;
    register int t823;
    register int t825;
    register int t850;
    register int t852;
    register int t853;
    register int t855;
    register int t872;
    register int t874;
    register int t895;
    register int t898;
    register int t900;
    register int t917;
    register int t929;
    register int t931;
    register int t932;
    register int t934;
    register int t953;
    register int t956;
    register int t957;
    register int t959;
    register int t974;
    register int t986;
    register int t988;
    register int t989;
    register int t991;
    register int t1010;
    register int t1013;
    register int t1014;
    register int t1016;
    register int t1031;
    register int t1043;
    register int t1045;
    register int t1046;
    register int t1048;
    register int t1067;
    register int t1070;
    register int t1071;
    register int t1073;
    register int t1088;
    register int t1165;
    register int t1193;
    register int t1214;
    register int t1215;
    register int t1216;
    register int t1218;
    register int t1224;
    register int t1234;
    register int t1236;
    register int t1244;
    register int t1249;
    register int t1257;
    register int t1267;
    register int t1271;
    register int t1349;
    register int t1359;
    register int t1363;
    register int t1402;
    register int t1404;
    register int t1405;
    register int t1407;
    register int t1427;
    register int t1430;
    register int t1431;
    register int t1433;
    register int t1449;
    register int t1462;
    register int t1466;
    register int t1473;
    register int t1494;
    register int t1497;
    register int t1501;
    register int t1508;
    register int t1525;
    register int t1537;
    register int t1540;
    register int t1545;
    register int t1548;
    register int t1549;
    register int t1551;
    register int t1572;
    register int t1573;
    register int t1575;
    register int t1596;
    register int t1603;
    register int t1610;
    register int t1617;
    register int t1638;
    register int t1641;
    register int t1648;
    register int t1655;
    register int t1662;
    register int t1679;
    register int t1691;
    register int t1693;
    register int t1694;
    register int t1696;
    register int t1742;
    register int t1763;
    register int t1766;
    register int t1767;
    register int t1769;
    register int t1815;
    register int t1832;
    register int t1844;
    register int t1852;
    register int t1854;
    register int t1870;
    register int t1876;
    register int t1896;
    register int t1898;
    register int t1923;
    register int t1925;
    register int t1926;
    register int t1928;
    register int t1945;
    register int t1947;
    register int t1968;
    register int t1971;
    register int t1973;
    register int t1990;
    register int t2002;
    register int t2004;
    register int t2005;
    register int t2007;
    register int t2026;
    register int t2029;
    register int t2030;
    register int t2032;
    register int t2047;
    register int t2059;
    register int t2061;
    register int t2062;
    register int t2064;
    register int t2083;
    register int t2086;
    register int t2087;
    register int t2089;
    register int t2104;
    register int t2116;
    register int t2118;
    register int t2119;
    register int t2121;
    register int t2140;
    register int t2143;
    register int t2144;
    register int t2146;
    register int t2161;
    register int t2238;
    register int t2266;
    register int t2284;
    register int t2285;
    register int t2286;
    register int t2288;
    register int t2294;
    register int t2304;
    register int t2306;
    register int t2314;
    register int t2319;
    register int t2327;
    register int t2337;
    register int t2341;
    register int t2419;
    register int t2429;
    register int t2433;
    register int t2472;
    register int t2474;
    register int t2475;
    register int t2477;
    register int t2497;
    register int t2500;
    register int t2501;
    register int t2503;
    register int t2519;
    register int t2532;
    register int t2536;
    register int t2543;
    register int t2564;
    register int t2567;
    register int t2571;
    register int t2578;
    register int t2595;
    register int t2607;
    register int t2610;
    register int t2615;
    register int t2618;
    register int t2619;
    register int t2621;
    register int t2642;
    register int t2643;
    register int t2645;
    register int t2666;
    register int t2673;
    register int t2680;
    register int t2687;
    register int t2708;
    register int t2711;
    register int t2718;
    register int t2725;
    register int t2732;
    register int t2749;
    register int t2761;
    register int t2763;
    register int t2764;
    register int t2766;
    register int t2812;
    register int t2833;
    register int t2836;
    register int t2837;
    register int t2839;
    register int t2885;
    register int t2902;
    register int t2914;
    register int t2922;
    register int t2924;
    register int t2940;
    register int t2946;
    register int t2966;
    register int t2968;
    register int t2993;
    register int t2995;
    register int t2996;
    register int t2998;
    register int t3015;
    register int t3017;
    register int t3038;
    register int t3041;
    register int t3043;
    register int t3060;
    register int t3072;
    register int t3074;
    register int t3075;
    register int t3077;
    register int t3096;
    register int t3099;
    register int t3100;
    register int t3102;
    register int t3117;
    register int t3129;
    register int t3131;
    register int t3132;
    register int t3134;
    register int t3153;
    register int t3156;
    register int t3157;
    register int t3159;
    register int t3174;
    register int t3186;
    register int t3188;
    register int t3189;
    register int t3191;
    register int t3210;
    register int t3213;
    register int t3214;
    register int t3216;
    register int t3231;
    register int t3308;
    register int t3336;
    register int t3368;
    register int t3373;
    register int t3393;
    register int t3405;
    register int t3422;
    register int t3434;
    register int t3562;
    register int t3576;
    register int t3599;
    register int t3600;
    register int t3601;
    register int t3603;
    register int t3609;
    register int t3619;
    register int t3621;
    register int t3629;
    register int t3634;
    register int t3642;
    register int t3652;
    register int t3656;
    register int t3734;
    register int t3744;
    register int t3748;
    register int t3787;
    register int t3789;
    register int t3790;
    register int t3792;
    register int t3812;
    register int t3815;
    register int t3816;
    register int t3818;
    register int t3834;
    register int t3847;
    register int t3851;
    register int t3858;
    register int t3879;
    register int t3882;
    register int t3886;
    register int t3893;
    register int t3910;
    register int t3922;
    register int t3925;
    register int t3930;
    register int t3933;
    register int t3934;
    register int t3936;
    register int t3957;
    register int t3958;
    register int t3960;
    register int t3981;
    register int t3988;
    register int t3995;
    register int t4002;
    register int t4023;
    register int t4026;
    register int t4033;
    register int t4040;
    register int t4047;
    register int t4064;
    register int t4076;
    register int t4078;
    register int t4079;
    register int t4081;
    register int t4127;
    register int t4148;
    register int t4151;
    register int t4152;
    register int t4154;
    register int t4200;
    register int t4217;
    register int t4229;
    register int t4237;
    register int t4239;
    register int t4255;
    register int t4261;
    register int t4281;
    register int t4283;
    register int t4308;
    register int t4310;
    register int t4311;
    register int t4313;
    register int t4330;
    register int t4332;
    register int t4353;
    register int t4356;
    register int t4358;
    register int t4375;
    register int t4387;
    register int t4389;
    register int t4390;
    register int t4392;
    register int t4411;
    register int t4414;
    register int t4415;
    register int t4417;
    register int t4432;
    register int t4444;
    register int t4446;
    register int t4447;
    register int t4449;
    register int t4468;
    register int t4471;
    register int t4472;
    register int t4474;
    register int t4489;
    register int t4501;
    register int t4503;
    register int t4504;
    register int t4506;
    register int t4525;
    register int t4528;
    register int t4529;
    register int t4531;
    register int t4546;
    register int t4623;
    register int t4651;
    register int t4683;
    register int t4690;
    register int t4696;
    register int t4708;
    register int t4728;
    register int t4740;
    int t79;
    register int t777;
    register int t821;
    register int t1850;
    register int t1894;
    register int t2920;
    register int t2964;
    register int t4235;
    register int t4279;
    int t4691;

    if (((((struct o0_int *)0xC472B24)->v)) != 0) {
    } else {
        (((struct o0_uint *)0xC472B24)->v) = (((((struct o0_int *)0xC472B24)->v)) + 0x1);
        FUN_0c03eff6();
        FUN_0c0527e6();
        FUN_0c036de8(0x1B, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
        FUN_0c03ea04(0x3, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
        (((struct o8_uint *)0xC542440)->v) = 0xFF000000;
        (((struct o4_uint *)0xC542440)->v) = 0xFF000000;
        (((struct o0_uint *)0xC542440)->v) = 0xFF000000;
        FUN_0c0573c0(0xFFFFFFFF, 0x0, 0x1E);
        FUN_0c16f7ba();
        FUN_0c05f80a();
        (((struct o4_uint *)0xC472B24)->v) = 0x0;
        FUN_0c0ffaa2();
        FUN_0c0ffcf8(0x0);
        FUN_0c0ffcf8(0x1);
        FUN_0c0ffebc();
        FUN_0c0ffff0();
        FUN_0c0fe178(0x28);
        t15 = (((struct o2C_int *)0xC472B24)->v);
        if (t15 != 0) {
            if (t15 != 1) {
                if ((t15 != 2) && (t15 != 3)) {
                    switch (t15) {
                    case 4:
                        (((struct o4_uint *)0xC472B24)->v) = 0x1;
                        (((struct o30_uint *)0xC472B24)->v) = 0x1;
                        (((struct o34_uint *)0xC472B64)->v) = 0x0;
                        (((struct o38_uint *)0xC472B64)->v) = 0x5;
                        (((struct o8_uint *)0xC472B24)->v) = 0x0;
                        (((struct o34_uint *)0xC472B24)->v) = 0x0;
                        break;
                    case 5:
                        (((struct o4_uint *)0xC472B24)->v) = 0x1;
                        (((struct o30_uint *)0xC472B24)->v) = 0x1;
                        (((struct o34_uint *)0xC472B64)->v) = 0x0;
                        (((struct o38_uint *)0xC472B64)->v) = 0x5;
                        (((struct o8_uint *)0xC472B24)->v) = 0x1;
                        (((struct o3C_uint *)0xC472B64)->v) = 0x1F;
                        (((struct o34_uint *)0xC472B24)->v) = 0x1;
                        break;
                    case 6:
                        (((struct o4_uint *)0xC472B24)->v) = 0x1;
                        (((struct o30_uint *)0xC472B24)->v) = 0x1;
                        (((struct o34_uint *)0xC472B64)->v) = 0x0;
                        (((struct o38_uint *)0xC472B64)->v) = 0x5;
                        (((struct o8_uint *)0xC472B24)->v) = 0x1;
                        (((struct o3C_uint *)0xC472B64)->v) = 0x19;
                        (((struct o34_uint *)0xC472B24)->v) = 0x2;
                        break;
                    case 7:
                        (((struct o4_uint *)0xC472B24)->v) = 0x2;
                        (((struct o30_uint *)0xC472B24)->v) = 0x1;
                        (((struct o34_uint *)0xC472B64)->v) = 0x0;
                        (((struct o38_uint *)0xC472B64)->v) = 0x6;
                        (((struct o8_uint *)0xC472B24)->v) = 0x1;
                        (((struct o3C_uint *)0xC472B64)->v) = 0x7;
                        (((struct o34_uint *)0xC472B24)->v) = 0x0;
                        break;
                    }
                } else {
                    (((struct o4_uint *)0xC472B24)->v) = 0x2;
                    (((struct o30_uint *)0xC472B24)->v) = 0x1;
                    (((struct o34_uint *)0xC472B64)->v) = 0x0;
                    (((struct o38_uint *)0xC472B64)->v) = 0xFFFFFFFF;
                    (((struct o8_uint *)0xC472B24)->v) = 0x1;
                    (((struct o3C_uint *)0xC472B64)->v) = 0x6;
                    (((struct o34_uint *)0xC472B24)->v) = 0x0;
                }
            } else {
                (((struct o4_uint *)0xC472B24)->v) = 0x2;
                (((struct o30_uint *)0xC472B24)->v) = 0x1;
                (((struct o34_uint *)0xC472B64)->v) = 0x0;
                (((struct o38_uint *)0xC472B64)->v) = 0xFFFFFFFF;
                (((struct o8_uint *)0xC472B24)->v) = 0x1;
                (((struct o3C_uint *)0xC472B64)->v) = 0x7;
                (((struct o34_uint *)0xC472B24)->v) = 0x0;
            }
        } else {
            (((struct o4_uint *)0xC472B24)->v) = 0x0;
            (((struct o30_uint *)0xC472B24)->v) = 0x0;
            (((struct o34_uint *)0xC472B24)->v) = 0x0;
        }
        t50 = FUN_0c03add8();
        *(unsigned int *)(((int)stk + 4)) = t50;
        if (t50 != -1) {
            (((struct o38_uint *)0xC472B24)->v) = (FUN_0c0fe116());
            (((struct o3C_uint *)0xC472B24)->v) = (*(int *)(((int)stk + 4)));
            FUN_0c0fe3d0();
        }
    }
    if ((int)((((struct o28_int *)0xC472B24)->v)) > 0) {
        (((struct o28_uint *)0xC472B24)->v) = (((((struct o28_int *)0xC472B24)->v)) - 1);
    }
    t62 = (((struct o4_int *)0xC472B24)->v);
    switch (t62) {
    case 0:
        t4683 = FUN_0c03add8();
        *(unsigned int *)(((int)stk + 4)) = t4683;
        if (t4683 == -1) {
        } else {
            (((struct o38_uint *)0xC472B24)->v) = (FUN_0c0fe116());
            (((struct o3C_uint *)0xC472B24)->v) = (*(int *)(((int)stk + 4)));
            FUN_0c0fe17e();
            (((struct o38_uint *)0xC472B64)->v) = ((((struct o34_int *)0xC472B64)->v));
            FUN_0c0fe3d0();
            if ((*(int *)(((int)stk + 4))) != 0) {
                t4690 = FUN_0c0fe154(0x101);
                *(unsigned int *)(((int)stk + 8)) = t4690;
                if ((t4690 != 0) && (t4691 = (((struct o34_int *)0xC472B64)->v), t4691 != 4)) {
                    FUN_0c0fe178(0x14);
                    (((struct o4_uint *)0xC472B24)->v) = 0x2;
                    (((struct o8_uint *)0xC472B24)->v) = 0x0;
                    (((struct o38_uint *)0xC472B64)->v) = 0xFFFFFFFF;
                    (((struct o28_uint *)0xC472B64)->v) = ((((struct o30_int *)0xC472B64)->v));
                    FUN_0c05aab6(((*(int *)(((int)stk + 8))) - 1), 0x3);
                } else {
                    t4696 = FUN_0c0fe154(0x40);
                    *(unsigned int *)(((int)stk + 8)) = t4696;
                    if (t4696 != 0) {
                        FUN_0c0fe178(0x14);
                        if (((((struct o34_int *)0xC472B64)->v)) != 4) {
                            (((struct o34_uint *)0xC472B64)->v) = 0x4;
                            FUN_0c05aab6(((*(int *)(((int)stk + 8))) - 1), 0x6);
                        } else {
                            FUN_0c05aab6(((*(int *)(((int)stk + 8))) - 1), 0x4);
                            FUN_0c0fe496();
                        }
                    } else {
                        t4708 = FUN_0c0fe154(0x101);
                        *(unsigned int *)(((int)stk + 8)) = t4708;
                        if (t4708 == 0) {
                        } else {
                            if (((((struct o34_int *)0xC472B64)->v)) != 4) {
                            } else {
                                FUN_0c0fe178(0x14);
                                FUN_0c05aab6(((*(int *)(((int)stk + 8))) - 1), 0x3);
                                FUN_0c0fe496();
                            }
                        }
                    }
                }
            } else {
                t4728 = FUN_0c0fe154(0x40);
                *(unsigned int *)(((int)stk + 8)) = t4728;
                if (t4728 != 0) {
                    FUN_0c0fe178(0x14);
                    if (((((struct o34_int *)0xC472B64)->v)) != 4) {
                        (((struct o34_uint *)0xC472B64)->v) = 0x4;
                        FUN_0c05aab6(((*(int *)(((int)stk + 8))) - 1), 0x6);
                    } else {
                        FUN_0c05aab6(((*(int *)(((int)stk + 8))) - 1), 0x4);
                        FUN_0c0fe496();
                    }
                } else {
                    t4740 = FUN_0c0fe154(0x101);
                    *(unsigned int *)(((int)stk + 8)) = t4740;
                    if (t4740 == 0) {
                    } else {
                        if (((((struct o34_int *)0xC472B64)->v)) != 4) {
                        } else {
                            FUN_0c0fe178(0x14);
                            FUN_0c05aab6(((*(int *)(((int)stk + 8))) - 1), 0x3);
                            FUN_0c0fe496();
                        }
                    }
                }
            }
        }
        break;
    case 1:
        t63 = FUN_0c03add8();
        *(unsigned int *)(((int)stk + 4)) = t63;
        if (t63 == -1) {
        } else {
            (((struct o38_uint *)0xC472B24)->v) = (FUN_0c0fe116());
            (((struct o3C_uint *)0xC472B24)->v) = (*(int *)(((int)stk + 4)));
            if (((((struct o34_int *)0xC472B64)->v)) != 4) {
                (((struct o34_uint *)0xC472B64)->v) = 0x0;
            }
            FUN_0c0fe23a();
            if (((((struct o34_int *)0xC472B64)->v)) == 0) {
                (((struct o38_uint *)0xC472B64)->v) = 0x5;
            } else {
                (((struct o38_uint *)0xC472B64)->v) = 0x4;
            }
            FUN_0c0fe3d0();
            if ((*(int *)(((int)stk + 4))) != 0) {
                t78 = FUN_0c0fe154(0x101);
                *(unsigned int *)(((int)stk + 8)) = t78;
                if ((t78 != 0) && (t79 = (((struct o34_int *)0xC472B64)->v), t79 != 4)) {
                    FUN_0c0fe178(0x14);
                    (((struct o4_uint *)0xC472B24)->v) = 0x2;
                    (((struct o8_uint *)0xC472B24)->v) = 0x0;
                    (((struct o38_uint *)0xC472B64)->v) = 0xFFFFFFFF;
                    (((struct o28_uint *)0xC472B64)->v) = ((((struct o30_int *)0xC472B64)->v));
                    FUN_0c05aab6(((*(int *)(((int)stk + 8))) - 1), 0x3);
                    t84 = (((struct o34_int *)0xC472B24)->v);
                    if (t84 != 1) {
                        if (t84 != 2) {
                        } else {
                            (((struct o34_uint *)0xC472B64)->v) = 0x5;
                        }
                    } else {
                        (((struct o34_uint *)0xC472B64)->v) = 0x6;
                    }
                }
            }
            t101 = FUN_0c0fe154(0x40);
            *(unsigned int *)(((int)stk + 8)) = t101;
            if (t101 != 0) {
                FUN_0c0fe178(0x14);
                if (((((struct o34_int *)0xC472B64)->v)) != 4) {
                    (((struct o34_uint *)0xC472B64)->v) = 0x4;
                    FUN_0c05aab6(((*(int *)(((int)stk + 8))) - 1), 0x6);
                } else {
                    FUN_0c05aab6(((*(int *)(((int)stk + 8))) - 1), 0x4);
                    FUN_0c0fe496();
                }
            } else {
                t113 = FUN_0c0fe154(0x101);
                *(unsigned int *)(((int)stk + 8)) = t113;
                if (t113 == 0) {
                } else {
                    if (((((struct o34_int *)0xC472B64)->v)) != 4) {
                    } else {
                        FUN_0c0fe178(0x14);
                        FUN_0c05aab6(((*(int *)(((int)stk + 8))) - 1), 0x3);
                        FUN_0c0fe496();
                    }
                }
            }
        }
        break;
    case 2:
        t134 = (((struct o8_int *)0xC472B24)->v);
        if (t134 != 0) {
            if (t134 == 1) {
                FUN_0c0ffcf8(0x2);
                (((struct o8_uint *)0xC472B24)->v) = (((((struct o8_int *)0xC472B24)->v)) + 0x1);
                FUN_0c1000c4(((((struct o3C_int *)0xC472B64)->v)));
                (((struct o8_uint *)0xC472B24)->v) = (((((struct o8_int *)0xC472B24)->v)) + 0x1);
                (((struct oC_uint *)0xC472B24)->v) = 0x0;
                *(unsigned int *)(((int)stk + 4)) = (FUN_0c03add8());
                t141 = (((struct o3C_int *)0xC472B64)->v);
                t142 = *(int *)((0xC1FB6D4 + (((t141 << 2) + t141) << 2)));
                if (t142 != 0) {
                    if (t142 != 1) {
                        if (t142 == 2) {
                            t143 = FUN_0c0fe154(0x83CF);
                            *(unsigned int *)(((int)stk + 8)) = t143;
                            if (t143 == 0) {
                            } else {
                                FUN_0c0fe178(0x14);
                                t145 = (((struct o3C_int *)0xC472B64)->v);
                                (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t145 << 2) + t145) << 2) + 0xC1FB6D8)));
                                (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                FUN_0c05aab6(((*(int *)(((int)stk + 8))) - 1), 0x3);
                            }
                        } else {
                            if (t142 == 16) {
                                t151 = FUN_0c0fe154(0x40);
                                *(unsigned int *)(((int)stk + 8)) = t151;
                                if (t151 != 0) {
                                    FUN_0c0fe178(0x14);
                                    if (((((struct o30_int *)0xC472B24)->v)) != 0) {
                                        (((struct o4_uint *)0xC472B24)->v) = 0x1;
                                        (((struct o8_uint *)0xC472B24)->v) = 0x0;
                                        (((struct o38_uint *)0xC472B64)->v) = 0x5;
                                    } else {
                                        (((struct o4_uint *)0xC472B24)->v) = 0x0;
                                        (((struct o8_uint *)0xC472B24)->v) = 0x0;
                                    }
                                    FUN_0c05aab6(((*(int *)(((int)stk + 8))) - 1), 0x4);
                                } else {
                                    t161 = FUN_0c0fe154(0x101);
                                    *(unsigned int *)(((int)stk + 8)) = t161;
                                    if (t161 == 0) {
                                    } else {
                                        FUN_0c0fe178(0x14);
                                        (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                        t163 = (((struct o3C_int *)0xC472B64)->v);
                                        (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t163 << 2) + t163) << 2) + 0xC1FB6D8)));
                                        FUN_0c05aab6(((*(int *)(((int)stk + 8))) - 1), 0x3);
                                    }
                                }
                            } else {
                                if (t142 == 17) {
                                    t171 = FUN_0c0fe154(0x40);
                                    *(unsigned int *)(((int)stk + 8)) = t171;
                                    if (t171 != 0) {
                                        FUN_0c0fe178(0x14);
                                        FUN_0c0fe496();
                                        FUN_0c05aab6(((*(int *)(((int)stk + 8))) - 1), 0x4);
                                    } else {
                                        t176 = FUN_0c0fe154(0x101);
                                        *(unsigned int *)(((int)stk + 8)) = t176;
                                        if (t176 == 0) {
                                        } else {
                                            FUN_0c0fe178(0x14);
                                            (((struct o4_uint *)0xC472B24)->v) = 0x1;
                                            (((struct o8_uint *)0xC472B24)->v) = 0x0;
                                            (((struct o38_uint *)0xC472B64)->v) = 0x5;
                                            FUN_0c05aab6(((*(int *)(((int)stk + 8))) - 1), 0x3);
                                        }
                                    }
                                } else {
                                    if (t142 == 18) {
                                        t184 = FUN_0c0fe154(0x40);
                                        *(unsigned int *)(((int)stk + 8)) = t184;
                                        if (t184 != 0) {
                                            FUN_0c0fe178(0x14);
                                            if (((((struct o30_int *)0xC472B24)->v)) != 0) {
                                                (((struct o4_uint *)0xC472B24)->v) = 0x1;
                                                (((struct o8_uint *)0xC472B24)->v) = 0x0;
                                                (((struct o38_uint *)0xC472B64)->v) = 0x5;
                                            } else {
                                                (((struct o4_uint *)0xC472B24)->v) = 0x0;
                                                (((struct o8_uint *)0xC472B24)->v) = 0x0;
                                            }
                                            FUN_0c05aab6(((*(int *)(((int)stk + 8))) - 1), 0x4);
                                        } else {
                                            t194 = FUN_0c0fe154(0x101);
                                            *(unsigned int *)(((int)stk + 8)) = t194;
                                            if (t194 == 0) {
                                            } else {
                                                FUN_0c0fe178(0x14);
                                                FUN_0c05aab6(((*(int *)(((int)stk + 8))) - 1), 0x3);
                                                (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                t198 = FUN_0c03add8();
                                                *(unsigned int *)(((int)stk + 4)) = t198;
                                                if (t198 == -1) {
                                                    FUN_0c0fe3a0();
                                                } else {
                                                    FUN_0c0fe328();
                                                }
                                                if ((int)((((struct o0_int *)0xC472B64)->v)) < 0) {
                                                    (((struct o3C_uint *)0xC472B64)->v) = 0x5;
                                                } else {
                                                    if ((((int)0x1 << (int)((((struct o28_int *)0xC472B64)->v))) & ((((struct o0_int *)0xC472B64)->v))) == 0) {
                                                        (((struct o3C_uint *)0xC472B64)->v) = 0x0;
                                                    } else {
                                                        if ((int)((((struct oC_int *)0xC472B64)->v)) >= 0) {
                                                            if ((((int)0x1 << (int)((((struct o28_int *)0xC472B64)->v))) & ((((struct oC_int *)0xC472B64)->v))) == 0) {
                                                                if ((int)((((struct o8_int *)0xC472B64)->v)) >= 0) {
                                                                    if ((((int)0x1 << (int)((((struct o28_int *)0xC472B64)->v))) & ((((struct o8_int *)0xC472B64)->v))) == 0) {
                                                                        (((struct o3C_uint *)0xC472B64)->v) = 0x8;
                                                                    } else {
                                                                        if ((int)((((struct o4_int *)0xC472B64)->v)) < 0) {
                                                                            (((struct o3C_uint *)0xC472B64)->v) = 0x5;
                                                                        } else {
                                                                            if ((((int)0x1 << (int)((((struct o28_int *)0xC472B64)->v))) & ((((struct o4_int *)0xC472B64)->v))) != 0) {
                                                                                (((struct o3C_uint *)0xC472B64)->v) = 0x15;
                                                                            } else {
                                                                                (((struct o3C_uint *)0xC472B64)->v) = 0x16;
                                                                            }
                                                                        }
                                                                    }
                                                                } else {
                                                                    (((struct o3C_uint *)0xC472B64)->v) = 0x8;
                                                                }
                                                            } else {
                                                                if ((int)((((struct o4_int *)0xC472B64)->v)) < 0) {
                                                                    (((struct o3C_uint *)0xC472B64)->v) = 0x5;
                                                                } else {
                                                                    if ((((int)0x1 << (int)((((struct o28_int *)0xC472B64)->v))) & ((((struct o4_int *)0xC472B64)->v))) != 0) {
                                                                        (((struct o3C_uint *)0xC472B64)->v) = 0x15;
                                                                    } else {
                                                                        (((struct o3C_uint *)0xC472B64)->v) = 0x16;
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            (((struct o3C_uint *)0xC472B64)->v) = 0xE;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        if (t142 == 19) {
                                            t276 = FUN_0c0fe154(0x40);
                                            *(unsigned int *)(((int)stk + 8)) = t276;
                                            if (t276 != 0) {
                                                FUN_0c0fe178(0x14);
                                                if (((((struct o30_int *)0xC472B24)->v)) != 0) {
                                                    (((struct o4_uint *)0xC472B24)->v) = 0x1;
                                                    (((struct o8_uint *)0xC472B24)->v) = 0x0;
                                                    (((struct o38_uint *)0xC472B64)->v) = 0x5;
                                                } else {
                                                    (((struct o4_uint *)0xC472B24)->v) = 0x0;
                                                    (((struct o8_uint *)0xC472B24)->v) = 0x0;
                                                }
                                                FUN_0c05aab6(((*(int *)(((int)stk + 8))) - 1), 0x4);
                                            } else {
                                                t286 = FUN_0c0fe154(0x101);
                                                *(unsigned int *)(((int)stk + 8)) = t286;
                                                if (t286 == 0) {
                                                } else {
                                                    FUN_0c0fe178(0x14);
                                                    FUN_0c05aab6(((*(int *)(((int)stk + 8))) - 1), 0x3);
                                                    (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                    t290 = FUN_0c03add8();
                                                    *(unsigned int *)(((int)stk + 4)) = t290;
                                                    if (t290 == -1) {
                                                        FUN_0c0fe3a0();
                                                    } else {
                                                        FUN_0c0fe328();
                                                    }
                                                    if ((int)((((struct o0_int *)0xC472B64)->v)) >= 0) {
                                                        if ((((int)0x1 << (int)((((struct o28_int *)0xC472B64)->v))) & ((((struct o0_int *)0xC472B64)->v))) == 0) {
                                                            (((struct o3C_uint *)0xC472B64)->v) = 0x0;
                                                        } else {
                                                            if ((int)((((struct o4_int *)0xC472B64)->v)) >= 0) {
                                                                if ((((int)0x1 << (int)((((struct o28_int *)0xC472B64)->v))) & ((((struct o4_int *)0xC472B64)->v))) != 0) {
                                                                    (((struct o3C_uint *)0xC472B64)->v) = 0x2;
                                                                } else {
                                                                    (((struct o3C_uint *)0xC472B64)->v) = 0x3;
                                                                }
                                                            } else {
                                                                (((struct o3C_uint *)0xC472B64)->v) = 0x5;
                                                            }
                                                        }
                                                    } else {
                                                        (((struct o3C_uint *)0xC472B64)->v) = 0x5;
                                                    }
                                                }
                                            }
                                        } else {
                                            if (t142 == 32) {
                                                t329 = (((struct oC_int *)0xC472B24)->v);
                                                if (t329 != 0) {
                                                    if (t329 != 1) {
                                                        if (t329 != 2) {
                                                            if (t329 != 3) {
                                                            } else {
                                                                t331 = FUN_0c03c210(((((struct o28_int *)0xC472B64)->v)));
                                                                if (t331 == -1) {
                                                                } else {
                                                                    if (t331 == 0) {
                                                                        t332 = (((struct o3C_int *)0xC472B64)->v);
                                                                        (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t332 << 2) + t332) << 2) + 0xC1FB6D8)));
                                                                    } else {
                                                                        t334 = (((struct o3C_int *)0xC472B64)->v);
                                                                        (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t334 << 2) + t334) << 2) + 0xC1FB6DC)));
                                                                    }
                                                                    (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                }
                                                            }
                                                        } else {
                                                            (((struct oC_uint *)0xC472B24)->v) = (((((struct oC_int *)0xC472B24)->v)) + 0x1);
                                                            if ((*(int *)(((int)stk + 4))) != -1) {
                                                                if ((((int)0x1 << (int)((((struct o28_int *)0xC472B64)->v))) & (*(int *)(((int)stk + 4)))) == 0) {
                                                                    t354 = (((struct o3C_int *)0xC472B64)->v);
                                                                    (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t354 << 2) + t354) << 2) + 0xC1FB6DC)));
                                                                    (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                } else {
                                                                    t357 = FUN_0c03c210(((((struct o28_int *)0xC472B64)->v)));
                                                                    if (t357 == -1) {
                                                                    } else {
                                                                        if (t357 == 0) {
                                                                            t358 = (((struct o3C_int *)0xC472B64)->v);
                                                                            (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t358 << 2) + t358) << 2) + 0xC1FB6D8)));
                                                                        } else {
                                                                            t360 = (((struct o3C_int *)0xC472B64)->v);
                                                                            (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t360 << 2) + t360) << 2) + 0xC1FB6DC)));
                                                                        }
                                                                        (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                    }
                                                                }
                                                            } else {
                                                                t376 = (((struct o3C_int *)0xC472B64)->v);
                                                                (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t376 << 2) + t376) << 2) + 0xC1FB6DC)));
                                                                (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                            }
                                                        }
                                                    } else {
                                                        t389 = FUN_0c03b9d0(((((struct o28_int *)0xC472B64)->v)));
                                                        if (t389 == -1) {
                                                        } else {
                                                            if (t389 == 0) {
                                                                if ((((int)0x1 << (int)((((struct o28_int *)0xC472B64)->v))) & ((((struct o8_int *)0xC472B64)->v))) != 0) {
                                                                    (((struct oC_uint *)0xC472B24)->v) = (((((struct oC_int *)0xC472B24)->v)) + 0x1);
                                                                } else {
                                                                    t393 = (((struct o3C_int *)0xC472B64)->v);
                                                                    (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t393 << 2) + t393) << 2) + 0xC1FB6D8)));
                                                                    (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                }
                                                            } else {
                                                                t400 = (((struct o3C_int *)0xC472B64)->v);
                                                                (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t400 << 2) + t400) << 2) + 0xC1FB6DC)));
                                                                (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    (((struct oC_uint *)0xC472B24)->v) = (((((struct oC_int *)0xC472B24)->v)) + 0x1);
                                                    if ((*(int *)(((int)stk + 4))) != -1) {
                                                        if ((((int)0x1 << (int)((((struct o28_int *)0xC472B64)->v))) & (*(int *)(((int)stk + 4)))) == 0) {
                                                            t421 = (((struct o3C_int *)0xC472B64)->v);
                                                            (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t421 << 2) + t421) << 2) + 0xC1FB6DC)));
                                                            (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                        } else {
                                                            t424 = FUN_0c03b9d0(((((struct o28_int *)0xC472B64)->v)));
                                                            if (t424 == -1) {
                                                            } else {
                                                                if (t424 == 0) {
                                                                    if ((((int)0x1 << (int)((((struct o28_int *)0xC472B64)->v))) & ((((struct o8_int *)0xC472B64)->v))) != 0) {
                                                                        (((struct oC_uint *)0xC472B24)->v) = (((((struct oC_int *)0xC472B24)->v)) + 0x1);
                                                                    } else {
                                                                        t428 = (((struct o3C_int *)0xC472B64)->v);
                                                                        (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t428 << 2) + t428) << 2) + 0xC1FB6D8)));
                                                                        (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                    }
                                                                } else {
                                                                    t435 = (((struct o3C_int *)0xC472B64)->v);
                                                                    (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t435 << 2) + t435) << 2) + 0xC1FB6DC)));
                                                                    (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        t452 = (((struct o3C_int *)0xC472B64)->v);
                                                        (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t452 << 2) + t452) << 2) + 0xC1FB6DC)));
                                                        (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                    }
                                                }
                                            } else {
                                                if (t142 == 33) {
                                                    t464 = (((struct oC_int *)0xC472B24)->v);
                                                    if (t464 != 0) {
                                                        if (t464 != 1) {
                                                            if (t464 == 2) {
                                                                (((struct oC_uint *)0xC472B24)->v) = (((((struct oC_int *)0xC472B24)->v)) + 0x1);
                                                                if ((*(int *)(((int)stk + 4))) == -1) {
                                                                    t467 = (((struct o3C_int *)0xC472B64)->v);
                                                                    (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t467 << 2) + t467) << 2) + 0xC1FB6DC)));
                                                                    (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                } else {
                                                                    FUN_0c0fe328();
                                                                    if ((((int)0x1 << (int)((((struct o28_int *)0xC472B64)->v))) & (*(int *)(((int)stk + 4)))) == 0) {
                                                                        t472 = (((struct o3C_int *)0xC472B64)->v);
                                                                        (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t472 << 2) + t472) << 2) + 0xC1FB6DC)));
                                                                        (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                    } else {
                                                                        t475 = FUN_0c03c358(((((struct o28_int *)0xC472B64)->v)));
                                                                        if (t475 == -1) {
                                                                        } else {
                                                                            if (t475 == 0) {
                                                                                t476 = (((struct o3C_int *)0xC472B64)->v);
                                                                                (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t476 << 2) + t476) << 2) + 0xC1FB6D8)));
                                                                            } else {
                                                                                t478 = (((struct o3C_int *)0xC472B64)->v);
                                                                                (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t478 << 2) + t478) << 2) + 0xC1FB6DC)));
                                                                            }
                                                                            (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                if (t464 == 3) {
                                                                    t499 = FUN_0c03c358(((((struct o28_int *)0xC472B64)->v)));
                                                                    if (t499 == -1) {
                                                                    } else {
                                                                        if (t499 == 0) {
                                                                            t500 = (((struct o3C_int *)0xC472B64)->v);
                                                                            (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t500 << 2) + t500) << 2) + 0xC1FB6D8)));
                                                                        } else {
                                                                            t502 = (((struct o3C_int *)0xC472B64)->v);
                                                                            (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t502 << 2) + t502) << 2) + 0xC1FB6DC)));
                                                                        }
                                                                        (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            t523 = FUN_0c03b6ac(((((struct o28_int *)0xC472B64)->v)));
                                                            if (t523 == -1) {
                                                            } else {
                                                                if (t523 == 0) {
                                                                    if ((int)((((struct o8_int *)0xC472B64)->v)) >= 0) {
                                                                        if ((((int)0x1 << (int)((((struct o28_int *)0xC472B64)->v))) & ((((struct o8_int *)0xC472B64)->v))) != 0) {
                                                                            (((struct oC_uint *)0xC472B24)->v) = (((((struct oC_int *)0xC472B24)->v)) + 0x1);
                                                                        } else {
                                                                            t530 = (((struct o3C_int *)0xC472B64)->v);
                                                                            (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t530 << 2) + t530) << 2) + 0xC1FB6D8)));
                                                                            (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                        }
                                                                    } else {
                                                                        t537 = (((struct o3C_int *)0xC472B64)->v);
                                                                        (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t537 << 2) + t537) << 2) + 0xC1FB6D8)));
                                                                        (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                    }
                                                                } else {
                                                                    t544 = (((struct o3C_int *)0xC472B64)->v);
                                                                    (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t544 << 2) + t544) << 2) + 0xC1FB6DC)));
                                                                    (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        (((struct oC_uint *)0xC472B24)->v) = (((((struct oC_int *)0xC472B24)->v)) + 0x1);
                                                        if ((*(int *)(((int)stk + 4))) != -1) {
                                                            if ((((int)0x1 << (int)((((struct o28_int *)0xC472B64)->v))) & (*(int *)(((int)stk + 4)))) == 0) {
                                                                t565 = (((struct o3C_int *)0xC472B64)->v);
                                                                (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t565 << 2) + t565) << 2) + 0xC1FB6DC)));
                                                                (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                            } else {
                                                                t568 = FUN_0c03b6ac(((((struct o28_int *)0xC472B64)->v)));
                                                                if (t568 == -1) {
                                                                } else {
                                                                    if (t568 == 0) {
                                                                        if ((int)((((struct o8_int *)0xC472B64)->v)) >= 0) {
                                                                            if ((((int)0x1 << (int)((((struct o28_int *)0xC472B64)->v))) & ((((struct o8_int *)0xC472B64)->v))) != 0) {
                                                                                (((struct oC_uint *)0xC472B24)->v) = (((((struct oC_int *)0xC472B24)->v)) + 0x1);
                                                                            } else {
                                                                                t575 = (((struct o3C_int *)0xC472B64)->v);
                                                                                (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t575 << 2) + t575) << 2) + 0xC1FB6D8)));
                                                                                (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                            }
                                                                        } else {
                                                                            t582 = (((struct o3C_int *)0xC472B64)->v);
                                                                            (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t582 << 2) + t582) << 2) + 0xC1FB6D8)));
                                                                            (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                        }
                                                                    } else {
                                                                        t589 = (((struct o3C_int *)0xC472B64)->v);
                                                                        (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t589 << 2) + t589) << 2) + 0xC1FB6DC)));
                                                                        (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            t606 = (((struct o3C_int *)0xC472B64)->v);
                                                            (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t606 << 2) + t606) << 2) + 0xC1FB6DC)));
                                                            (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                        }
                                                    }
                                                } else {
                                                    if (t142 == 34) {
                                                        t618 = (((struct oC_int *)0xC472B24)->v);
                                                        if (t618 != 0) {
                                                            if (t618 != 1) {
                                                            } else {
                                                                t620 = FUN_0c03b6ac(((((struct o28_int *)0xC472B64)->v)));
                                                                if (t620 == -1) {
                                                                } else {
                                                                    if (t620 == 0) {
                                                                        t621 = (((struct o3C_int *)0xC472B64)->v);
                                                                        (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t621 << 2) + t621) << 2) + 0xC1FB6D8)));
                                                                        (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                        t623 = FUN_0c03add8();
                                                                        *(unsigned int *)(((int)stk + 4)) = t623;
                                                                        if (t623 == -1) {
                                                                            FUN_0c0fe3a0();
                                                                        } else {
                                                                            FUN_0c0fe328();
                                                                        }
                                                                        if ((int)((((struct oC_int *)0xC472B64)->v)) >= 0) {
                                                                            if ((((int)0x1 << (int)((((struct o28_int *)0xC472B64)->v))) & ((((struct oC_int *)0xC472B64)->v))) == 0) {
                                                                                if ((int)((((struct o8_int *)0xC472B64)->v)) >= 0) {
                                                                                    if ((((int)0x1 << (int)((((struct o28_int *)0xC472B64)->v))) & ((((struct o8_int *)0xC472B64)->v))) != 0) {
                                                                                        (((struct o3C_uint *)0xC472B64)->v) = 0xC;
                                                                                    } else {
                                                                                        (((struct o3C_uint *)0xC472B64)->v) = 0x8;
                                                                                    }
                                                                                } else {
                                                                                    (((struct o3C_uint *)0xC472B64)->v) = 0x8;
                                                                                }
                                                                            } else {
                                                                                if ((int)((((struct o10_int *)0xC472B64)->v)) >= 0) {
                                                                                    if ((((int)0x1 << (int)((((struct o28_int *)0xC472B64)->v))) & ((((struct o10_int *)0xC472B64)->v))) != 0) {
                                                                                        (((struct o3C_uint *)0xC472B64)->v) = 0x9;
                                                                                    } else {
                                                                                        (((struct o3C_uint *)0xC472B64)->v) = 0xC;
                                                                                    }
                                                                                } else {
                                                                                    (((struct o3C_uint *)0xC472B64)->v) = 0xC;
                                                                                }
                                                                            }
                                                                        } else {
                                                                            (((struct o3C_uint *)0xC472B64)->v) = 0xE;
                                                                        }
                                                                    } else {
                                                                        t669 = (((struct o3C_int *)0xC472B64)->v);
                                                                        (((struct o3C_uint *)0xC472B64)->v) = (*(int *)((0xC1FB6DC + (((t669 << 2) + t669) << 2))));
                                                                        (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            (((struct oC_uint *)0xC472B24)->v) = (((((struct oC_int *)0xC472B24)->v)) + 0x1);
                                                            if ((*(int *)(((int)stk + 4))) != -1) {
                                                                if ((((int)0x1 << (int)((((struct o28_int *)0xC472B64)->v))) & (*(int *)(((int)stk + 4)))) == 0) {
                                                                    t690 = (((struct o3C_int *)0xC472B64)->v);
                                                                    (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t690 << 2) + t690) << 2) + 0xC1FB6DC)));
                                                                    (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                } else {
                                                                    t693 = FUN_0c03b6ac(((((struct o28_int *)0xC472B64)->v)));
                                                                    if (t693 == -1) {
                                                                    } else {
                                                                        if (t693 == 0) {
                                                                            t694 = (((struct o3C_int *)0xC472B64)->v);
                                                                            (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t694 << 2) + t694) << 2) + 0xC1FB6D8)));
                                                                            (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                            t696 = FUN_0c03add8();
                                                                            *(unsigned int *)(((int)stk + 4)) = t696;
                                                                            if (t696 == -1) {
                                                                                FUN_0c0fe3a0();
                                                                            } else {
                                                                                FUN_0c0fe328();
                                                                            }
                                                                            if ((int)((((struct oC_int *)0xC472B64)->v)) >= 0) {
                                                                                if ((((int)0x1 << (int)((((struct o28_int *)0xC472B64)->v))) & ((((struct oC_int *)0xC472B64)->v))) == 0) {
                                                                                    if ((int)((((struct o8_int *)0xC472B64)->v)) >= 0) {
                                                                                        if ((((int)0x1 << (int)((((struct o28_int *)0xC472B64)->v))) & ((((struct o8_int *)0xC472B64)->v))) != 0) {
                                                                                            (((struct o3C_uint *)0xC472B64)->v) = 0xC;
                                                                                        } else {
                                                                                            (((struct o3C_uint *)0xC472B64)->v) = 0x8;
                                                                                        }
                                                                                    } else {
                                                                                        (((struct o3C_uint *)0xC472B64)->v) = 0x8;
                                                                                    }
                                                                                } else {
                                                                                    if ((int)((((struct o10_int *)0xC472B64)->v)) >= 0) {
                                                                                        if ((((int)0x1 << (int)((((struct o28_int *)0xC472B64)->v))) & ((((struct o10_int *)0xC472B64)->v))) != 0) {
                                                                                            (((struct o3C_uint *)0xC472B64)->v) = 0x9;
                                                                                        } else {
                                                                                            (((struct o3C_uint *)0xC472B64)->v) = 0xC;
                                                                                        }
                                                                                    } else {
                                                                                        (((struct o3C_uint *)0xC472B64)->v) = 0xC;
                                                                                    }
                                                                                }
                                                                            } else {
                                                                                (((struct o3C_uint *)0xC472B64)->v) = 0xE;
                                                                            }
                                                                        } else {
                                                                            t742 = (((struct o3C_int *)0xC472B64)->v);
                                                                            (((struct o3C_uint *)0xC472B64)->v) = (*(int *)((0xC1FB6DC + (((t742 << 2) + t742) << 2))));
                                                                            (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                t759 = (((struct o3C_int *)0xC472B64)->v);
                                                                (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t759 << 2) + t759) << 2) + 0xC1FB6DC)));
                                                                (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                            }
                                                        }
                                                    } else {
                                                        if (t142 == 35) {
                                                            t771 = (((struct oC_int *)0xC472B24)->v);
                                                            if (t771 != 0) {
                                                                if ((t771 == 1) || (t771 == 2)) {
                                                                    if (((((struct oC_int *)0xC472B24)->v)) == 1) {
                                                                        t777 = (FUN_0c03c018(((((struct o28_int *)0xC472B64)->v))));
                                                                    } else {
                                                                        t777 = (FUN_0c03c358(((((struct o28_int *)0xC472B64)->v))));
                                                                    }
                                                                    *(unsigned int *)(((int)stk + 0)) = t777;
                                                                    if (t777 == -1) {
                                                                    } else {
                                                                        if (t777 == 0) {
                                                                            t779 = (((struct o3C_int *)0xC472B64)->v);
                                                                            (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t779 << 2) + t779) << 2) + 0xC1FB6D8)));
                                                                        } else {
                                                                            t781 = (((struct o3C_int *)0xC472B64)->v);
                                                                            (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t781 << 2) + t781) << 2) + 0xC1FB6DC)));
                                                                        }
                                                                        (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                    }
                                                                }
                                                            } else {
                                                                (((struct oC_uint *)0xC472B24)->v) = (((((struct oC_int *)0xC472B24)->v)) + 0x1);
                                                                if ((*(int *)(((int)stk + 4))) == -1) {
                                                                    t797 = (((struct o3C_int *)0xC472B64)->v);
                                                                    (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t797 << 2) + t797) << 2) + 0xC1FB6DC)));
                                                                    (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                } else {
                                                                    FUN_0c0fe328();
                                                                    if ((((int)0x1 << (int)((((struct o28_int *)0xC472B64)->v))) & (*(int *)(((int)stk + 4)))) == 0) {
                                                                        t803 = (((struct o3C_int *)0xC472B64)->v);
                                                                        (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t803 << 2) + t803) << 2) + 0xC1FB6DC)));
                                                                        (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                    } else {
                                                                        if ((int)((((struct o8_int *)0xC472B64)->v)) >= 0) {
                                                                            if ((((int)0x1 << (int)((((struct o28_int *)0xC472B64)->v))) & ((((struct o8_int *)0xC472B64)->v))) != 0) {
                                                                                (((struct oC_uint *)0xC472B24)->v) = 0x2;
                                                                            }
                                                                        }
                                                                        if (((((struct oC_int *)0xC472B24)->v)) == 1) {
                                                                            t821 = (FUN_0c03c018(((((struct o28_int *)0xC472B64)->v))));
                                                                        } else {
                                                                            t821 = (FUN_0c03c358(((((struct o28_int *)0xC472B64)->v))));
                                                                        }
                                                                        *(unsigned int *)(((int)stk + 0)) = t821;
                                                                        if (t821 == -1) {
                                                                        } else {
                                                                            if (t821 == 0) {
                                                                                t823 = (((struct o3C_int *)0xC472B64)->v);
                                                                                (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t823 << 2) + t823) << 2) + 0xC1FB6D8)));
                                                                            } else {
                                                                                t825 = (((struct o3C_int *)0xC472B64)->v);
                                                                                (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t825 << 2) + t825) << 2) + 0xC1FB6DC)));
                                                                            }
                                                                            (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            if (t142 == 36) {
                                                                t850 = (((struct oC_int *)0xC472B24)->v);
                                                                if (t850 != 0) {
                                                                    if (t850 != 1) {
                                                                        if (t850 != 2) {
                                                                        } else {
                                                                            t852 = FUN_0c03d0bc(((((struct o28_int *)0xC472B64)->v)));
                                                                            if (t852 == -1) {
                                                                            } else {
                                                                                if (t852 == 0) {
                                                                                    t853 = (((struct o3C_int *)0xC472B64)->v);
                                                                                    (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t853 << 2) + t853) << 2) + 0xC1FB6D8)));
                                                                                } else {
                                                                                    t855 = (((struct o3C_int *)0xC472B64)->v);
                                                                                    (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t855 << 2) + t855) << 2) + 0xC1FB6DC)));
                                                                                }
                                                                                (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                            }
                                                                        }
                                                                    } else {
                                                                        t872 = FUN_0c03ceb6(((((struct o28_int *)0xC472B64)->v)));
                                                                        if (t872 == -1) {
                                                                        } else {
                                                                            if (t872 == 0) {
                                                                                (((struct oC_uint *)0xC472B24)->v) = (((((struct oC_int *)0xC472B24)->v)) + 0x1);
                                                                            } else {
                                                                                t874 = (((struct o3C_int *)0xC472B64)->v);
                                                                                (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t874 << 2) + t874) << 2) + 0xC1FB6DC)));
                                                                                (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                            }
                                                                        }
                                                                    }
                                                                } else {
                                                                    (((struct oC_uint *)0xC472B24)->v) = (((((struct oC_int *)0xC472B24)->v)) + 0x1);
                                                                    if ((*(int *)(((int)stk + 4))) != -1) {
                                                                        if ((((int)0x1 << (int)((((struct o28_int *)0xC472B64)->v))) & (*(int *)(((int)stk + 4)))) == 0) {
                                                                            t895 = (((struct o3C_int *)0xC472B64)->v);
                                                                            (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t895 << 2) + t895) << 2) + 0xC1FB6DC)));
                                                                            (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                        } else {
                                                                            t898 = FUN_0c03ceb6(((((struct o28_int *)0xC472B64)->v)));
                                                                            if (t898 == -1) {
                                                                            } else {
                                                                                if (t898 == 0) {
                                                                                    (((struct oC_uint *)0xC472B24)->v) = (((((struct oC_int *)0xC472B24)->v)) + 0x1);
                                                                                } else {
                                                                                    t900 = (((struct o3C_int *)0xC472B64)->v);
                                                                                    (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t900 << 2) + t900) << 2) + 0xC1FB6DC)));
                                                                                    (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                                }
                                                                            }
                                                                        }
                                                                    } else {
                                                                        t917 = (((struct o3C_int *)0xC472B64)->v);
                                                                        (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t917 << 2) + t917) << 2) + 0xC1FB6DC)));
                                                                        (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                    }
                                                                }
                                                            } else {
                                                                if (t142 == 37) {
                                                                    t929 = (((struct oC_int *)0xC472B24)->v);
                                                                    if (t929 != 0) {
                                                                        if (t929 != 1) {
                                                                        } else {
                                                                            t931 = FUN_0c03c5c0(((((struct o28_int *)0xC472B64)->v)));
                                                                            if (t931 == -1) {
                                                                            } else {
                                                                                if (t931 == 0) {
                                                                                    t932 = (((struct o3C_int *)0xC472B64)->v);
                                                                                    (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t932 << 2) + t932) << 2) + 0xC1FB6D8)));
                                                                                } else {
                                                                                    t934 = (((struct o3C_int *)0xC472B64)->v);
                                                                                    (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t934 << 2) + t934) << 2) + 0xC1FB6DC)));
                                                                                }
                                                                                (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                            }
                                                                        }
                                                                    } else {
                                                                        (((struct oC_uint *)0xC472B24)->v) = (((((struct oC_int *)0xC472B24)->v)) + 0x1);
                                                                        if ((*(int *)(((int)stk + 4))) != -1) {
                                                                            if ((((int)0x1 << (int)((((struct o28_int *)0xC472B64)->v))) & (*(int *)(((int)stk + 4)))) == 0) {
                                                                                t953 = (((struct o3C_int *)0xC472B64)->v);
                                                                                (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t953 << 2) + t953) << 2) + 0xC1FB6DC)));
                                                                                (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                            } else {
                                                                                t956 = FUN_0c03c5c0(((((struct o28_int *)0xC472B64)->v)));
                                                                                if (t956 == -1) {
                                                                                } else {
                                                                                    if (t956 == 0) {
                                                                                        t957 = (((struct o3C_int *)0xC472B64)->v);
                                                                                        (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t957 << 2) + t957) << 2) + 0xC1FB6D8)));
                                                                                    } else {
                                                                                        t959 = (((struct o3C_int *)0xC472B64)->v);
                                                                                        (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t959 << 2) + t959) << 2) + 0xC1FB6DC)));
                                                                                    }
                                                                                    (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                                }
                                                                            }
                                                                        } else {
                                                                            t974 = (((struct o3C_int *)0xC472B64)->v);
                                                                            (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t974 << 2) + t974) << 2) + 0xC1FB6DC)));
                                                                            (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                        }
                                                                    }
                                                                } else {
                                                                    if (t142 == 38) {
                                                                        t986 = (((struct oC_int *)0xC472B24)->v);
                                                                        if (t986 != 0) {
                                                                            if (t986 != 1) {
                                                                            } else {
                                                                                t988 = FUN_0c03c7ec(((((struct o28_int *)0xC472B64)->v)));
                                                                                if (t988 != -1) {
                                                                                    if (t988 == 0) {
                                                                                        t989 = (((struct o3C_int *)0xC472B64)->v);
                                                                                        (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t989 << 2) + t989) << 2) + 0xC1FB6D8)));
                                                                                    } else {
                                                                                        t991 = (((struct o3C_int *)0xC472B64)->v);
                                                                                        (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t991 << 2) + t991) << 2) + 0xC1FB6DC)));
                                                                                    }
                                                                                    (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                                }
                                                                            }
                                                                        } else {
                                                                            (((struct oC_uint *)0xC472B24)->v) = (((((struct oC_int *)0xC472B24)->v)) + 0x1);
                                                                            if ((*(int *)(((int)stk + 4))) != -1) {
                                                                                if ((((int)0x1 << (int)((((struct o28_int *)0xC472B64)->v))) & (*(int *)(((int)stk + 4)))) == 0) {
                                                                                    t1010 = (((struct o3C_int *)0xC472B64)->v);
                                                                                    (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t1010 << 2) + t1010) << 2) + 0xC1FB6DC)));
                                                                                    (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                                } else {
                                                                                    t1013 = FUN_0c03c7ec(((((struct o28_int *)0xC472B64)->v)));
                                                                                    if (t1013 != -1) {
                                                                                        if (t1013 == 0) {
                                                                                            t1014 = (((struct o3C_int *)0xC472B64)->v);
                                                                                            (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t1014 << 2) + t1014) << 2) + 0xC1FB6D8)));
                                                                                        } else {
                                                                                            t1016 = (((struct o3C_int *)0xC472B64)->v);
                                                                                            (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t1016 << 2) + t1016) << 2) + 0xC1FB6DC)));
                                                                                        }
                                                                                        (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                                    }
                                                                                }
                                                                            } else {
                                                                                t1031 = (((struct o3C_int *)0xC472B64)->v);
                                                                                (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t1031 << 2) + t1031) << 2) + 0xC1FB6DC)));
                                                                                (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                            }
                                                                        }
                                                                    } else {
                                                                        if (t142 == 39) {
                                                                            t1043 = (((struct oC_int *)0xC472B24)->v);
                                                                            if (t1043 != 0) {
                                                                                if (t1043 != 1) {
                                                                                } else {
                                                                                    t1045 = FUN_0c03cacc(((((struct o28_int *)0xC472B64)->v)));
                                                                                    if (t1045 != -1) {
                                                                                        if (t1045 == 0) {
                                                                                            t1046 = (((struct o3C_int *)0xC472B64)->v);
                                                                                            (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t1046 << 2) + t1046) << 2) + 0xC1FB6D8)));
                                                                                        } else {
                                                                                            t1048 = (((struct o3C_int *)0xC472B64)->v);
                                                                                            (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t1048 << 2) + t1048) << 2) + 0xC1FB6DC)));
                                                                                        }
                                                                                        (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                                    }
                                                                                }
                                                                            } else {
                                                                                (((struct oC_uint *)0xC472B24)->v) = (((((struct oC_int *)0xC472B24)->v)) + 0x1);
                                                                                if ((*(int *)(((int)stk + 4))) != -1) {
                                                                                    if ((((int)0x1 << (int)((((struct o28_int *)0xC472B64)->v))) & (*(int *)(((int)stk + 4)))) == 0) {
                                                                                        t1067 = (((struct o3C_int *)0xC472B64)->v);
                                                                                        (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t1067 << 2) + t1067) << 2) + 0xC1FB6DC)));
                                                                                        (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                                    } else {
                                                                                        t1070 = FUN_0c03cacc(((((struct o28_int *)0xC472B64)->v)));
                                                                                        if (t1070 != -1) {
                                                                                            if (t1070 == 0) {
                                                                                                t1071 = (((struct o3C_int *)0xC472B64)->v);
                                                                                                (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t1071 << 2) + t1071) << 2) + 0xC1FB6D8)));
                                                                                            } else {
                                                                                                t1073 = (((struct o3C_int *)0xC472B64)->v);
                                                                                                (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t1073 << 2) + t1073) << 2) + 0xC1FB6DC)));
                                                                                            }
                                                                                            (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                                        }
                                                                                    }
                                                                                } else {
                                                                                    t1088 = (((struct o3C_int *)0xC472B64)->v);
                                                                                    (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t1088 << 2) + t1088) << 2) + 0xC1FB6DC)));
                                                                                    (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        t1165 = FUN_0c0fe154(0x83CF);
                        *(unsigned int *)(((int)stk + 8)) = t1165;
                        if (t1165 == 0) {
                        } else {
                            FUN_0c0fe178(0x14);
                            FUN_0c05aab6(((*(int *)(((int)stk + 8))) - 1), 0x3);
                            if (((((struct o2C_int *)0xC472B24)->v)) != 0) {
                                FUN_0c0fe496();
                            } else {
                                if (((((struct o30_int *)0xC472B24)->v)) != 0) {
                                    (((struct o4_uint *)0xC472B24)->v) = 0x1;
                                    (((struct o8_uint *)0xC472B24)->v) = 0x0;
                                    (((struct o38_uint *)0xC472B64)->v) = 0x5;
                                } else {
                                    (((struct o4_uint *)0xC472B24)->v) = 0x0;
                                    (((struct o8_uint *)0xC472B24)->v) = 0x0;
                                }
                            }
                        }
                    }
                } else {
                    t1193 = FUN_0c0fe154(0x83CF);
                    *(unsigned int *)(((int)stk + 8)) = t1193;
                    if (t1193 == 0) {
                    } else {
                        FUN_0c0fe178(0x14);
                        if (((((struct o30_int *)0xC472B24)->v)) != 0) {
                            (((struct o4_uint *)0xC472B24)->v) = 0x1;
                            (((struct o8_uint *)0xC472B24)->v) = 0x0;
                            (((struct o38_uint *)0xC472B64)->v) = 0x5;
                        } else {
                            (((struct o4_uint *)0xC472B24)->v) = 0x0;
                            (((struct o8_uint *)0xC472B24)->v) = 0x0;
                        }
                        FUN_0c05aab6(((*(int *)(((int)stk + 8))) - 1), 0x4);
                    }
                }
            } else {
                if (t134 == 2) {
                    FUN_0c1000c4(((((struct o3C_int *)0xC472B64)->v)));
                    (((struct o8_uint *)0xC472B24)->v) = (((((struct o8_int *)0xC472B24)->v)) + 0x1);
                    (((struct oC_uint *)0xC472B24)->v) = 0x0;
                    *(unsigned int *)(((int)stk + 4)) = (FUN_0c03add8());
                    t1214 = (((struct o3C_int *)0xC472B64)->v);
                    t1215 = *(int *)((0xC1FB6D4 + (((t1214 << 2) + t1214) << 2)));
                    if (t1215 != 0) {
                        if (t1215 != 1) {
                            if (t1215 == 2) {
                                t1216 = FUN_0c0fe154(0x83CF);
                                *(unsigned int *)(((int)stk + 8)) = t1216;
                                if (t1216 == 0) {
                                } else {
                                    FUN_0c0fe178(0x14);
                                    t1218 = (((struct o3C_int *)0xC472B64)->v);
                                    (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t1218 << 2) + t1218) << 2) + 0xC1FB6D8)));
                                    (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                    FUN_0c05aab6(((*(int *)(((int)stk + 8))) - 1), 0x3);
                                }
                            } else {
                                if (t1215 == 16) {
                                    t1224 = FUN_0c0fe154(0x40);
                                    *(unsigned int *)(((int)stk + 8)) = t1224;
                                    if (t1224 != 0) {
                                        FUN_0c0fe178(0x14);
                                        if (((((struct o30_int *)0xC472B24)->v)) != 0) {
                                            (((struct o4_uint *)0xC472B24)->v) = 0x1;
                                            (((struct o8_uint *)0xC472B24)->v) = 0x0;
                                            (((struct o38_uint *)0xC472B64)->v) = 0x5;
                                        } else {
                                            (((struct o4_uint *)0xC472B24)->v) = 0x0;
                                            (((struct o8_uint *)0xC472B24)->v) = 0x0;
                                        }
                                        FUN_0c05aab6(((*(int *)(((int)stk + 8))) - 1), 0x4);
                                    } else {
                                        t1234 = FUN_0c0fe154(0x101);
                                        *(unsigned int *)(((int)stk + 8)) = t1234;
                                        if (t1234 == 0) {
                                        } else {
                                            FUN_0c0fe178(0x14);
                                            (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                            t1236 = (((struct o3C_int *)0xC472B64)->v);
                                            (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t1236 << 2) + t1236) << 2) + 0xC1FB6D8)));
                                            FUN_0c05aab6(((*(int *)(((int)stk + 8))) - 1), 0x3);
                                        }
                                    }
                                } else {
                                    if (t1215 == 17) {
                                        t1244 = FUN_0c0fe154(0x40);
                                        *(unsigned int *)(((int)stk + 8)) = t1244;
                                        if (t1244 != 0) {
                                            FUN_0c0fe178(0x14);
                                            FUN_0c0fe496();
                                            FUN_0c05aab6(((*(int *)(((int)stk + 8))) - 1), 0x4);
                                        } else {
                                            t1249 = FUN_0c0fe154(0x101);
                                            *(unsigned int *)(((int)stk + 8)) = t1249;
                                            if (t1249 == 0) {
                                            } else {
                                                FUN_0c0fe178(0x14);
                                                (((struct o4_uint *)0xC472B24)->v) = 0x1;
                                                (((struct o8_uint *)0xC472B24)->v) = 0x0;
                                                (((struct o38_uint *)0xC472B64)->v) = 0x5;
                                                FUN_0c05aab6(((*(int *)(((int)stk + 8))) - 1), 0x3);
                                            }
                                        }
                                    } else {
                                        if (t1215 == 18) {
                                            t1257 = FUN_0c0fe154(0x40);
                                            *(unsigned int *)(((int)stk + 8)) = t1257;
                                            if (t1257 != 0) {
                                                FUN_0c0fe178(0x14);
                                                if (((((struct o30_int *)0xC472B24)->v)) != 0) {
                                                    (((struct o4_uint *)0xC472B24)->v) = 0x1;
                                                    (((struct o8_uint *)0xC472B24)->v) = 0x0;
                                                    (((struct o38_uint *)0xC472B64)->v) = 0x5;
                                                } else {
                                                    (((struct o4_uint *)0xC472B24)->v) = 0x0;
                                                    (((struct o8_uint *)0xC472B24)->v) = 0x0;
                                                }
                                                FUN_0c05aab6(((*(int *)(((int)stk + 8))) - 1), 0x4);
                                            } else {
                                                t1267 = FUN_0c0fe154(0x101);
                                                *(unsigned int *)(((int)stk + 8)) = t1267;
                                                if (t1267 == 0) {
                                                } else {
                                                    FUN_0c0fe178(0x14);
                                                    FUN_0c05aab6(((*(int *)(((int)stk + 8))) - 1), 0x3);
                                                    (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                    t1271 = FUN_0c03add8();
                                                    *(unsigned int *)(((int)stk + 4)) = t1271;
                                                    if (t1271 == -1) {
                                                        FUN_0c0fe3a0();
                                                    } else {
                                                        FUN_0c0fe328();
                                                    }
                                                    if ((int)((((struct o0_int *)0xC472B64)->v)) < 0) {
                                                        (((struct o3C_uint *)0xC472B64)->v) = 0x5;
                                                    } else {
                                                        if ((((int)0x1 << (int)((((struct o28_int *)0xC472B64)->v))) & ((((struct o0_int *)0xC472B64)->v))) == 0) {
                                                            (((struct o3C_uint *)0xC472B64)->v) = 0x0;
                                                        } else {
                                                            if ((int)((((struct oC_int *)0xC472B64)->v)) >= 0) {
                                                                if ((((int)0x1 << (int)((((struct o28_int *)0xC472B64)->v))) & ((((struct oC_int *)0xC472B64)->v))) == 0) {
                                                                    if ((int)((((struct o8_int *)0xC472B64)->v)) >= 0) {
                                                                        if ((((int)0x1 << (int)((((struct o28_int *)0xC472B64)->v))) & ((((struct o8_int *)0xC472B64)->v))) == 0) {
                                                                            (((struct o3C_uint *)0xC472B64)->v) = 0x8;
                                                                        } else {
                                                                            if ((int)((((struct o4_int *)0xC472B64)->v)) < 0) {
                                                                                (((struct o3C_uint *)0xC472B64)->v) = 0x5;
                                                                            } else {
                                                                                if ((((int)0x1 << (int)((((struct o28_int *)0xC472B64)->v))) & ((((struct o4_int *)0xC472B64)->v))) != 0) {
                                                                                    (((struct o3C_uint *)0xC472B64)->v) = 0x15;
                                                                                } else {
                                                                                    (((struct o3C_uint *)0xC472B64)->v) = 0x16;
                                                                                }
                                                                            }
                                                                        }
                                                                    } else {
                                                                        (((struct o3C_uint *)0xC472B64)->v) = 0x8;
                                                                    }
                                                                } else {
                                                                    if ((int)((((struct o4_int *)0xC472B64)->v)) < 0) {
                                                                        (((struct o3C_uint *)0xC472B64)->v) = 0x5;
                                                                    } else {
                                                                        if ((((int)0x1 << (int)((((struct o28_int *)0xC472B64)->v))) & ((((struct o4_int *)0xC472B64)->v))) != 0) {
                                                                            (((struct o3C_uint *)0xC472B64)->v) = 0x15;
                                                                        } else {
                                                                            (((struct o3C_uint *)0xC472B64)->v) = 0x16;
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                (((struct o3C_uint *)0xC472B64)->v) = 0xE;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            if (t1215 == 19) {
                                                t1349 = FUN_0c0fe154(0x40);
                                                *(unsigned int *)(((int)stk + 8)) = t1349;
                                                if (t1349 != 0) {
                                                    FUN_0c0fe178(0x14);
                                                    if (((((struct o30_int *)0xC472B24)->v)) != 0) {
                                                        (((struct o4_uint *)0xC472B24)->v) = 0x1;
                                                        (((struct o8_uint *)0xC472B24)->v) = 0x0;
                                                        (((struct o38_uint *)0xC472B64)->v) = 0x5;
                                                    } else {
                                                        (((struct o4_uint *)0xC472B24)->v) = 0x0;
                                                        (((struct o8_uint *)0xC472B24)->v) = 0x0;
                                                    }
                                                    FUN_0c05aab6(((*(int *)(((int)stk + 8))) - 1), 0x4);
                                                } else {
                                                    t1359 = FUN_0c0fe154(0x101);
                                                    *(unsigned int *)(((int)stk + 8)) = t1359;
                                                    if (t1359 == 0) {
                                                    } else {
                                                        FUN_0c0fe178(0x14);
                                                        FUN_0c05aab6(((*(int *)(((int)stk + 8))) - 1), 0x3);
                                                        (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                        t1363 = FUN_0c03add8();
                                                        *(unsigned int *)(((int)stk + 4)) = t1363;
                                                        if (t1363 == -1) {
                                                            FUN_0c0fe3a0();
                                                        } else {
                                                            FUN_0c0fe328();
                                                        }
                                                        if ((int)((((struct o0_int *)0xC472B64)->v)) >= 0) {
                                                            if ((((int)0x1 << (int)((((struct o28_int *)0xC472B64)->v))) & ((((struct o0_int *)0xC472B64)->v))) == 0) {
                                                                (((struct o3C_uint *)0xC472B64)->v) = 0x0;
                                                            } else {
                                                                if ((int)((((struct o4_int *)0xC472B64)->v)) >= 0) {
                                                                    if ((((int)0x1 << (int)((((struct o28_int *)0xC472B64)->v))) & ((((struct o4_int *)0xC472B64)->v))) != 0) {
                                                                        (((struct o3C_uint *)0xC472B64)->v) = 0x2;
                                                                    } else {
                                                                        (((struct o3C_uint *)0xC472B64)->v) = 0x3;
                                                                    }
                                                                } else {
                                                                    (((struct o3C_uint *)0xC472B64)->v) = 0x5;
                                                                }
                                                            }
                                                        } else {
                                                            (((struct o3C_uint *)0xC472B64)->v) = 0x5;
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (t1215 == 32) {
                                                    t1402 = (((struct oC_int *)0xC472B24)->v);
                                                    if (t1402 != 0) {
                                                        if (t1402 != 1) {
                                                            if (t1402 != 2) {
                                                                if (t1402 != 3) {
                                                                } else {
                                                                    t1404 = FUN_0c03c210(((((struct o28_int *)0xC472B64)->v)));
                                                                    if (t1404 == -1) {
                                                                    } else {
                                                                        if (t1404 == 0) {
                                                                            t1405 = (((struct o3C_int *)0xC472B64)->v);
                                                                            (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t1405 << 2) + t1405) << 2) + 0xC1FB6D8)));
                                                                        } else {
                                                                            t1407 = (((struct o3C_int *)0xC472B64)->v);
                                                                            (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t1407 << 2) + t1407) << 2) + 0xC1FB6DC)));
                                                                        }
                                                                        (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                    }
                                                                }
                                                            } else {
                                                                (((struct oC_uint *)0xC472B24)->v) = (((((struct oC_int *)0xC472B24)->v)) + 0x1);
                                                                if ((*(int *)(((int)stk + 4))) != -1) {
                                                                    if ((((int)0x1 << (int)((((struct o28_int *)0xC472B64)->v))) & (*(int *)(((int)stk + 4)))) == 0) {
                                                                        t1427 = (((struct o3C_int *)0xC472B64)->v);
                                                                        (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t1427 << 2) + t1427) << 2) + 0xC1FB6DC)));
                                                                        (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                    } else {
                                                                        t1430 = FUN_0c03c210(((((struct o28_int *)0xC472B64)->v)));
                                                                        if (t1430 == -1) {
                                                                        } else {
                                                                            if (t1430 == 0) {
                                                                                t1431 = (((struct o3C_int *)0xC472B64)->v);
                                                                                (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t1431 << 2) + t1431) << 2) + 0xC1FB6D8)));
                                                                            } else {
                                                                                t1433 = (((struct o3C_int *)0xC472B64)->v);
                                                                                (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t1433 << 2) + t1433) << 2) + 0xC1FB6DC)));
                                                                            }
                                                                            (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                        }
                                                                    }
                                                                } else {
                                                                    t1449 = (((struct o3C_int *)0xC472B64)->v);
                                                                    (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t1449 << 2) + t1449) << 2) + 0xC1FB6DC)));
                                                                    (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                }
                                                            }
                                                        } else {
                                                            t1462 = FUN_0c03b9d0(((((struct o28_int *)0xC472B64)->v)));
                                                            if (t1462 == -1) {
                                                            } else {
                                                                if (t1462 == 0) {
                                                                    if ((((int)0x1 << (int)((((struct o28_int *)0xC472B64)->v))) & ((((struct o8_int *)0xC472B64)->v))) != 0) {
                                                                        (((struct oC_uint *)0xC472B24)->v) = (((((struct oC_int *)0xC472B24)->v)) + 0x1);
                                                                    } else {
                                                                        t1466 = (((struct o3C_int *)0xC472B64)->v);
                                                                        (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t1466 << 2) + t1466) << 2) + 0xC1FB6D8)));
                                                                        (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                    }
                                                                } else {
                                                                    t1473 = (((struct o3C_int *)0xC472B64)->v);
                                                                    (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t1473 << 2) + t1473) << 2) + 0xC1FB6DC)));
                                                                    (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        (((struct oC_uint *)0xC472B24)->v) = (((((struct oC_int *)0xC472B24)->v)) + 0x1);
                                                        if ((*(int *)(((int)stk + 4))) != -1) {
                                                            if ((((int)0x1 << (int)((((struct o28_int *)0xC472B64)->v))) & (*(int *)(((int)stk + 4)))) == 0) {
                                                                t1494 = (((struct o3C_int *)0xC472B64)->v);
                                                                (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t1494 << 2) + t1494) << 2) + 0xC1FB6DC)));
                                                                (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                            } else {
                                                                t1497 = FUN_0c03b9d0(((((struct o28_int *)0xC472B64)->v)));
                                                                if (t1497 == -1) {
                                                                } else {
                                                                    if (t1497 == 0) {
                                                                        if ((((int)0x1 << (int)((((struct o28_int *)0xC472B64)->v))) & ((((struct o8_int *)0xC472B64)->v))) != 0) {
                                                                            (((struct oC_uint *)0xC472B24)->v) = (((((struct oC_int *)0xC472B24)->v)) + 0x1);
                                                                        } else {
                                                                            t1501 = (((struct o3C_int *)0xC472B64)->v);
                                                                            (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t1501 << 2) + t1501) << 2) + 0xC1FB6D8)));
                                                                            (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                        }
                                                                    } else {
                                                                        t1508 = (((struct o3C_int *)0xC472B64)->v);
                                                                        (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t1508 << 2) + t1508) << 2) + 0xC1FB6DC)));
                                                                        (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            t1525 = (((struct o3C_int *)0xC472B64)->v);
                                                            (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t1525 << 2) + t1525) << 2) + 0xC1FB6DC)));
                                                            (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                        }
                                                    }
                                                } else {
                                                    if (t1215 == 33) {
                                                        t1537 = (((struct oC_int *)0xC472B24)->v);
                                                        if (t1537 != 0) {
                                                            if (t1537 != 1) {
                                                                if (t1537 == 2) {
                                                                    (((struct oC_uint *)0xC472B24)->v) = (((((struct oC_int *)0xC472B24)->v)) + 0x1);
                                                                    if ((*(int *)(((int)stk + 4))) == -1) {
                                                                        t1540 = (((struct o3C_int *)0xC472B64)->v);
                                                                        (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t1540 << 2) + t1540) << 2) + 0xC1FB6DC)));
                                                                        (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                    } else {
                                                                        FUN_0c0fe328();
                                                                        if ((((int)0x1 << (int)((((struct o28_int *)0xC472B64)->v))) & (*(int *)(((int)stk + 4)))) == 0) {
                                                                            t1545 = (((struct o3C_int *)0xC472B64)->v);
                                                                            (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t1545 << 2) + t1545) << 2) + 0xC1FB6DC)));
                                                                            (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                        } else {
                                                                            t1548 = FUN_0c03c358(((((struct o28_int *)0xC472B64)->v)));
                                                                            if (t1548 == -1) {
                                                                            } else {
                                                                                if (t1548 == 0) {
                                                                                    t1549 = (((struct o3C_int *)0xC472B64)->v);
                                                                                    (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t1549 << 2) + t1549) << 2) + 0xC1FB6D8)));
                                                                                } else {
                                                                                    t1551 = (((struct o3C_int *)0xC472B64)->v);
                                                                                    (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t1551 << 2) + t1551) << 2) + 0xC1FB6DC)));
                                                                                }
                                                                                (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                            }
                                                                        }
                                                                    }
                                                                } else {
                                                                    if (t1537 == 3) {
                                                                        t1572 = FUN_0c03c358(((((struct o28_int *)0xC472B64)->v)));
                                                                        if (t1572 == -1) {
                                                                        } else {
                                                                            if (t1572 == 0) {
                                                                                t1573 = (((struct o3C_int *)0xC472B64)->v);
                                                                                (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t1573 << 2) + t1573) << 2) + 0xC1FB6D8)));
                                                                            } else {
                                                                                t1575 = (((struct o3C_int *)0xC472B64)->v);
                                                                                (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t1575 << 2) + t1575) << 2) + 0xC1FB6DC)));
                                                                            }
                                                                            (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                t1596 = FUN_0c03b6ac(((((struct o28_int *)0xC472B64)->v)));
                                                                if (t1596 == -1) {
                                                                } else {
                                                                    if (t1596 == 0) {
                                                                        if ((int)((((struct o8_int *)0xC472B64)->v)) >= 0) {
                                                                            if ((((int)0x1 << (int)((((struct o28_int *)0xC472B64)->v))) & ((((struct o8_int *)0xC472B64)->v))) != 0) {
                                                                                (((struct oC_uint *)0xC472B24)->v) = (((((struct oC_int *)0xC472B24)->v)) + 0x1);
                                                                            } else {
                                                                                t1603 = (((struct o3C_int *)0xC472B64)->v);
                                                                                (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t1603 << 2) + t1603) << 2) + 0xC1FB6D8)));
                                                                                (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                            }
                                                                        } else {
                                                                            t1610 = (((struct o3C_int *)0xC472B64)->v);
                                                                            (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t1610 << 2) + t1610) << 2) + 0xC1FB6D8)));
                                                                            (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                        }
                                                                    } else {
                                                                        t1617 = (((struct o3C_int *)0xC472B64)->v);
                                                                        (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t1617 << 2) + t1617) << 2) + 0xC1FB6DC)));
                                                                        (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            (((struct oC_uint *)0xC472B24)->v) = (((((struct oC_int *)0xC472B24)->v)) + 0x1);
                                                            if ((*(int *)(((int)stk + 4))) != -1) {
                                                                if ((((int)0x1 << (int)((((struct o28_int *)0xC472B64)->v))) & (*(int *)(((int)stk + 4)))) == 0) {
                                                                    t1638 = (((struct o3C_int *)0xC472B64)->v);
                                                                    (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t1638 << 2) + t1638) << 2) + 0xC1FB6DC)));
                                                                    (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                } else {
                                                                    t1641 = FUN_0c03b6ac(((((struct o28_int *)0xC472B64)->v)));
                                                                    if (t1641 == -1) {
                                                                    } else {
                                                                        if (t1641 == 0) {
                                                                            if ((int)((((struct o8_int *)0xC472B64)->v)) >= 0) {
                                                                                if ((((int)0x1 << (int)((((struct o28_int *)0xC472B64)->v))) & ((((struct o8_int *)0xC472B64)->v))) != 0) {
                                                                                    (((struct oC_uint *)0xC472B24)->v) = (((((struct oC_int *)0xC472B24)->v)) + 0x1);
                                                                                } else {
                                                                                    t1648 = (((struct o3C_int *)0xC472B64)->v);
                                                                                    (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t1648 << 2) + t1648) << 2) + 0xC1FB6D8)));
                                                                                    (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                                }
                                                                            } else {
                                                                                t1655 = (((struct o3C_int *)0xC472B64)->v);
                                                                                (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t1655 << 2) + t1655) << 2) + 0xC1FB6D8)));
                                                                                (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                            }
                                                                        } else {
                                                                            t1662 = (((struct o3C_int *)0xC472B64)->v);
                                                                            (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t1662 << 2) + t1662) << 2) + 0xC1FB6DC)));
                                                                            (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                t1679 = (((struct o3C_int *)0xC472B64)->v);
                                                                (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t1679 << 2) + t1679) << 2) + 0xC1FB6DC)));
                                                                (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                            }
                                                        }
                                                    } else {
                                                        if (t1215 == 34) {
                                                            t1691 = (((struct oC_int *)0xC472B24)->v);
                                                            if (t1691 != 0) {
                                                                if (t1691 != 1) {
                                                                } else {
                                                                    t1693 = FUN_0c03b6ac(((((struct o28_int *)0xC472B64)->v)));
                                                                    if (t1693 == -1) {
                                                                    } else {
                                                                        if (t1693 == 0) {
                                                                            t1694 = (((struct o3C_int *)0xC472B64)->v);
                                                                            (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t1694 << 2) + t1694) << 2) + 0xC1FB6D8)));
                                                                            (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                            t1696 = FUN_0c03add8();
                                                                            *(unsigned int *)(((int)stk + 4)) = t1696;
                                                                            if (t1696 == -1) {
                                                                                FUN_0c0fe3a0();
                                                                            } else {
                                                                                FUN_0c0fe328();
                                                                            }
                                                                            if ((int)((((struct oC_int *)0xC472B64)->v)) >= 0) {
                                                                                if ((((int)0x1 << (int)((((struct o28_int *)0xC472B64)->v))) & ((((struct oC_int *)0xC472B64)->v))) == 0) {
                                                                                    if ((int)((((struct o8_int *)0xC472B64)->v)) >= 0) {
                                                                                        if ((((int)0x1 << (int)((((struct o28_int *)0xC472B64)->v))) & ((((struct o8_int *)0xC472B64)->v))) != 0) {
                                                                                            (((struct o3C_uint *)0xC472B64)->v) = 0xC;
                                                                                        } else {
                                                                                            (((struct o3C_uint *)0xC472B64)->v) = 0x8;
                                                                                        }
                                                                                    } else {
                                                                                        (((struct o3C_uint *)0xC472B64)->v) = 0x8;
                                                                                    }
                                                                                } else {
                                                                                    if ((int)((((struct o10_int *)0xC472B64)->v)) >= 0) {
                                                                                        if ((((int)0x1 << (int)((((struct o28_int *)0xC472B64)->v))) & ((((struct o10_int *)0xC472B64)->v))) != 0) {
                                                                                            (((struct o3C_uint *)0xC472B64)->v) = 0x9;
                                                                                        } else {
                                                                                            (((struct o3C_uint *)0xC472B64)->v) = 0xC;
                                                                                        }
                                                                                    } else {
                                                                                        (((struct o3C_uint *)0xC472B64)->v) = 0xC;
                                                                                    }
                                                                                }
                                                                            } else {
                                                                                (((struct o3C_uint *)0xC472B64)->v) = 0xE;
                                                                            }
                                                                        } else {
                                                                            t1742 = (((struct o3C_int *)0xC472B64)->v);
                                                                            (((struct o3C_uint *)0xC472B64)->v) = (*(int *)((0xC1FB6DC + (((t1742 << 2) + t1742) << 2))));
                                                                            (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                (((struct oC_uint *)0xC472B24)->v) = (((((struct oC_int *)0xC472B24)->v)) + 0x1);
                                                                if ((*(int *)(((int)stk + 4))) != -1) {
                                                                    if ((((int)0x1 << (int)((((struct o28_int *)0xC472B64)->v))) & (*(int *)(((int)stk + 4)))) == 0) {
                                                                        t1763 = (((struct o3C_int *)0xC472B64)->v);
                                                                        (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t1763 << 2) + t1763) << 2) + 0xC1FB6DC)));
                                                                        (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                    } else {
                                                                        t1766 = FUN_0c03b6ac(((((struct o28_int *)0xC472B64)->v)));
                                                                        if (t1766 == -1) {
                                                                        } else {
                                                                            if (t1766 == 0) {
                                                                                t1767 = (((struct o3C_int *)0xC472B64)->v);
                                                                                (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t1767 << 2) + t1767) << 2) + 0xC1FB6D8)));
                                                                                (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                                t1769 = FUN_0c03add8();
                                                                                *(unsigned int *)(((int)stk + 4)) = t1769;
                                                                                if (t1769 == -1) {
                                                                                    FUN_0c0fe3a0();
                                                                                } else {
                                                                                    FUN_0c0fe328();
                                                                                }
                                                                                if ((int)((((struct oC_int *)0xC472B64)->v)) >= 0) {
                                                                                    if ((((int)0x1 << (int)((((struct o28_int *)0xC472B64)->v))) & ((((struct oC_int *)0xC472B64)->v))) == 0) {
                                                                                        if ((int)((((struct o8_int *)0xC472B64)->v)) >= 0) {
                                                                                            if ((((int)0x1 << (int)((((struct o28_int *)0xC472B64)->v))) & ((((struct o8_int *)0xC472B64)->v))) != 0) {
                                                                                                (((struct o3C_uint *)0xC472B64)->v) = 0xC;
                                                                                            } else {
                                                                                                (((struct o3C_uint *)0xC472B64)->v) = 0x8;
                                                                                            }
                                                                                        } else {
                                                                                            (((struct o3C_uint *)0xC472B64)->v) = 0x8;
                                                                                        }
                                                                                    } else {
                                                                                        if ((int)((((struct o10_int *)0xC472B64)->v)) >= 0) {
                                                                                            if ((((int)0x1 << (int)((((struct o28_int *)0xC472B64)->v))) & ((((struct o10_int *)0xC472B64)->v))) != 0) {
                                                                                                (((struct o3C_uint *)0xC472B64)->v) = 0x9;
                                                                                            } else {
                                                                                                (((struct o3C_uint *)0xC472B64)->v) = 0xC;
                                                                                            }
                                                                                        } else {
                                                                                            (((struct o3C_uint *)0xC472B64)->v) = 0xC;
                                                                                        }
                                                                                    }
                                                                                } else {
                                                                                    (((struct o3C_uint *)0xC472B64)->v) = 0xE;
                                                                                }
                                                                            } else {
                                                                                t1815 = (((struct o3C_int *)0xC472B64)->v);
                                                                                (((struct o3C_uint *)0xC472B64)->v) = (*(int *)((0xC1FB6DC + (((t1815 << 2) + t1815) << 2))));
                                                                                (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                            }
                                                                        }
                                                                    }
                                                                } else {
                                                                    t1832 = (((struct o3C_int *)0xC472B64)->v);
                                                                    (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t1832 << 2) + t1832) << 2) + 0xC1FB6DC)));
                                                                    (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                }
                                                            }
                                                        } else {
                                                            if (t1215 == 35) {
                                                                t1844 = (((struct oC_int *)0xC472B24)->v);
                                                                if (t1844 != 0) {
                                                                    if ((t1844 == 1) || (t1844 == 2)) {
                                                                        if (((((struct oC_int *)0xC472B24)->v)) == 1) {
                                                                            t1850 = (FUN_0c03c018(((((struct o28_int *)0xC472B64)->v))));
                                                                        } else {
                                                                            t1850 = (FUN_0c03c358(((((struct o28_int *)0xC472B64)->v))));
                                                                        }
                                                                        *(unsigned int *)(((int)stk + 0)) = t1850;
                                                                        if (t1850 == -1) {
                                                                        } else {
                                                                            if (t1850 == 0) {
                                                                                t1852 = (((struct o3C_int *)0xC472B64)->v);
                                                                                (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t1852 << 2) + t1852) << 2) + 0xC1FB6D8)));
                                                                            } else {
                                                                                t1854 = (((struct o3C_int *)0xC472B64)->v);
                                                                                (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t1854 << 2) + t1854) << 2) + 0xC1FB6DC)));
                                                                            }
                                                                            (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                        }
                                                                    }
                                                                } else {
                                                                    (((struct oC_uint *)0xC472B24)->v) = (((((struct oC_int *)0xC472B24)->v)) + 0x1);
                                                                    if ((*(int *)(((int)stk + 4))) == -1) {
                                                                        t1870 = (((struct o3C_int *)0xC472B64)->v);
                                                                        (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t1870 << 2) + t1870) << 2) + 0xC1FB6DC)));
                                                                        (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                    } else {
                                                                        FUN_0c0fe328();
                                                                        if ((((int)0x1 << (int)((((struct o28_int *)0xC472B64)->v))) & (*(int *)(((int)stk + 4)))) == 0) {
                                                                            t1876 = (((struct o3C_int *)0xC472B64)->v);
                                                                            (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t1876 << 2) + t1876) << 2) + 0xC1FB6DC)));
                                                                            (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                        } else {
                                                                            if ((int)((((struct o8_int *)0xC472B64)->v)) >= 0) {
                                                                                if ((((int)0x1 << (int)((((struct o28_int *)0xC472B64)->v))) & ((((struct o8_int *)0xC472B64)->v))) != 0) {
                                                                                    (((struct oC_uint *)0xC472B24)->v) = 0x2;
                                                                                }
                                                                            }
                                                                            if (((((struct oC_int *)0xC472B24)->v)) == 1) {
                                                                                t1894 = (FUN_0c03c018(((((struct o28_int *)0xC472B64)->v))));
                                                                            } else {
                                                                                t1894 = (FUN_0c03c358(((((struct o28_int *)0xC472B64)->v))));
                                                                            }
                                                                            *(unsigned int *)(((int)stk + 0)) = t1894;
                                                                            if (t1894 == -1) {
                                                                            } else {
                                                                                if (t1894 == 0) {
                                                                                    t1896 = (((struct o3C_int *)0xC472B64)->v);
                                                                                    (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t1896 << 2) + t1896) << 2) + 0xC1FB6D8)));
                                                                                } else {
                                                                                    t1898 = (((struct o3C_int *)0xC472B64)->v);
                                                                                    (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t1898 << 2) + t1898) << 2) + 0xC1FB6DC)));
                                                                                }
                                                                                (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                if (t1215 == 36) {
                                                                    t1923 = (((struct oC_int *)0xC472B24)->v);
                                                                    if (t1923 != 0) {
                                                                        if (t1923 != 1) {
                                                                            if (t1923 != 2) {
                                                                            } else {
                                                                                t1925 = FUN_0c03d0bc(((((struct o28_int *)0xC472B64)->v)));
                                                                                if (t1925 == -1) {
                                                                                } else {
                                                                                    if (t1925 == 0) {
                                                                                        t1926 = (((struct o3C_int *)0xC472B64)->v);
                                                                                        (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t1926 << 2) + t1926) << 2) + 0xC1FB6D8)));
                                                                                    } else {
                                                                                        t1928 = (((struct o3C_int *)0xC472B64)->v);
                                                                                        (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t1928 << 2) + t1928) << 2) + 0xC1FB6DC)));
                                                                                    }
                                                                                    (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                                }
                                                                            }
                                                                        } else {
                                                                            t1945 = FUN_0c03ceb6(((((struct o28_int *)0xC472B64)->v)));
                                                                            if (t1945 == -1) {
                                                                            } else {
                                                                                if (t1945 == 0) {
                                                                                    (((struct oC_uint *)0xC472B24)->v) = (((((struct oC_int *)0xC472B24)->v)) + 0x1);
                                                                                } else {
                                                                                    t1947 = (((struct o3C_int *)0xC472B64)->v);
                                                                                    (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t1947 << 2) + t1947) << 2) + 0xC1FB6DC)));
                                                                                    (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                                }
                                                                            }
                                                                        }
                                                                    } else {
                                                                        (((struct oC_uint *)0xC472B24)->v) = (((((struct oC_int *)0xC472B24)->v)) + 0x1);
                                                                        if ((*(int *)(((int)stk + 4))) != -1) {
                                                                            if ((((int)0x1 << (int)((((struct o28_int *)0xC472B64)->v))) & (*(int *)(((int)stk + 4)))) == 0) {
                                                                                t1968 = (((struct o3C_int *)0xC472B64)->v);
                                                                                (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t1968 << 2) + t1968) << 2) + 0xC1FB6DC)));
                                                                                (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                            } else {
                                                                                t1971 = FUN_0c03ceb6(((((struct o28_int *)0xC472B64)->v)));
                                                                                if (t1971 == -1) {
                                                                                } else {
                                                                                    if (t1971 == 0) {
                                                                                        (((struct oC_uint *)0xC472B24)->v) = (((((struct oC_int *)0xC472B24)->v)) + 0x1);
                                                                                    } else {
                                                                                        t1973 = (((struct o3C_int *)0xC472B64)->v);
                                                                                        (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t1973 << 2) + t1973) << 2) + 0xC1FB6DC)));
                                                                                        (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                                    }
                                                                                }
                                                                            }
                                                                        } else {
                                                                            t1990 = (((struct o3C_int *)0xC472B64)->v);
                                                                            (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t1990 << 2) + t1990) << 2) + 0xC1FB6DC)));
                                                                            (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                        }
                                                                    }
                                                                } else {
                                                                    if (t1215 == 37) {
                                                                        t2002 = (((struct oC_int *)0xC472B24)->v);
                                                                        if (t2002 != 0) {
                                                                            if (t2002 != 1) {
                                                                            } else {
                                                                                t2004 = FUN_0c03c5c0(((((struct o28_int *)0xC472B64)->v)));
                                                                                if (t2004 == -1) {
                                                                                } else {
                                                                                    if (t2004 == 0) {
                                                                                        t2005 = (((struct o3C_int *)0xC472B64)->v);
                                                                                        (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t2005 << 2) + t2005) << 2) + 0xC1FB6D8)));
                                                                                    } else {
                                                                                        t2007 = (((struct o3C_int *)0xC472B64)->v);
                                                                                        (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t2007 << 2) + t2007) << 2) + 0xC1FB6DC)));
                                                                                    }
                                                                                    (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                                }
                                                                            }
                                                                        } else {
                                                                            (((struct oC_uint *)0xC472B24)->v) = (((((struct oC_int *)0xC472B24)->v)) + 0x1);
                                                                            if ((*(int *)(((int)stk + 4))) != -1) {
                                                                                if ((((int)0x1 << (int)((((struct o28_int *)0xC472B64)->v))) & (*(int *)(((int)stk + 4)))) == 0) {
                                                                                    t2026 = (((struct o3C_int *)0xC472B64)->v);
                                                                                    (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t2026 << 2) + t2026) << 2) + 0xC1FB6DC)));
                                                                                    (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                                } else {
                                                                                    t2029 = FUN_0c03c5c0(((((struct o28_int *)0xC472B64)->v)));
                                                                                    if (t2029 == -1) {
                                                                                    } else {
                                                                                        if (t2029 == 0) {
                                                                                            t2030 = (((struct o3C_int *)0xC472B64)->v);
                                                                                            (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t2030 << 2) + t2030) << 2) + 0xC1FB6D8)));
                                                                                        } else {
                                                                                            t2032 = (((struct o3C_int *)0xC472B64)->v);
                                                                                            (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t2032 << 2) + t2032) << 2) + 0xC1FB6DC)));
                                                                                        }
                                                                                        (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                                    }
                                                                                }
                                                                            } else {
                                                                                t2047 = (((struct o3C_int *)0xC472B64)->v);
                                                                                (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t2047 << 2) + t2047) << 2) + 0xC1FB6DC)));
                                                                                (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                            }
                                                                        }
                                                                    } else {
                                                                        if (t1215 == 38) {
                                                                            t2059 = (((struct oC_int *)0xC472B24)->v);
                                                                            if (t2059 != 0) {
                                                                                if (t2059 != 1) {
                                                                                } else {
                                                                                    t2061 = FUN_0c03c7ec(((((struct o28_int *)0xC472B64)->v)));
                                                                                    if (t2061 != -1) {
                                                                                        if (t2061 == 0) {
                                                                                            t2062 = (((struct o3C_int *)0xC472B64)->v);
                                                                                            (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t2062 << 2) + t2062) << 2) + 0xC1FB6D8)));
                                                                                        } else {
                                                                                            t2064 = (((struct o3C_int *)0xC472B64)->v);
                                                                                            (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t2064 << 2) + t2064) << 2) + 0xC1FB6DC)));
                                                                                        }
                                                                                        (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                                    }
                                                                                }
                                                                            } else {
                                                                                (((struct oC_uint *)0xC472B24)->v) = (((((struct oC_int *)0xC472B24)->v)) + 0x1);
                                                                                if ((*(int *)(((int)stk + 4))) != -1) {
                                                                                    if ((((int)0x1 << (int)((((struct o28_int *)0xC472B64)->v))) & (*(int *)(((int)stk + 4)))) == 0) {
                                                                                        t2083 = (((struct o3C_int *)0xC472B64)->v);
                                                                                        (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t2083 << 2) + t2083) << 2) + 0xC1FB6DC)));
                                                                                        (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                                    } else {
                                                                                        t2086 = FUN_0c03c7ec(((((struct o28_int *)0xC472B64)->v)));
                                                                                        if (t2086 != -1) {
                                                                                            if (t2086 == 0) {
                                                                                                t2087 = (((struct o3C_int *)0xC472B64)->v);
                                                                                                (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t2087 << 2) + t2087) << 2) + 0xC1FB6D8)));
                                                                                            } else {
                                                                                                t2089 = (((struct o3C_int *)0xC472B64)->v);
                                                                                                (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t2089 << 2) + t2089) << 2) + 0xC1FB6DC)));
                                                                                            }
                                                                                            (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                                        }
                                                                                    }
                                                                                } else {
                                                                                    t2104 = (((struct o3C_int *)0xC472B64)->v);
                                                                                    (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t2104 << 2) + t2104) << 2) + 0xC1FB6DC)));
                                                                                    (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                                }
                                                                            }
                                                                        } else {
                                                                            if (t1215 == 39) {
                                                                                t2116 = (((struct oC_int *)0xC472B24)->v);
                                                                                if (t2116 != 0) {
                                                                                    if (t2116 != 1) {
                                                                                    } else {
                                                                                        t2118 = FUN_0c03cacc(((((struct o28_int *)0xC472B64)->v)));
                                                                                        if (t2118 != -1) {
                                                                                            if (t2118 == 0) {
                                                                                                t2119 = (((struct o3C_int *)0xC472B64)->v);
                                                                                                (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t2119 << 2) + t2119) << 2) + 0xC1FB6D8)));
                                                                                            } else {
                                                                                                t2121 = (((struct o3C_int *)0xC472B64)->v);
                                                                                                (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t2121 << 2) + t2121) << 2) + 0xC1FB6DC)));
                                                                                            }
                                                                                            (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                                        }
                                                                                    }
                                                                                } else {
                                                                                    (((struct oC_uint *)0xC472B24)->v) = (((((struct oC_int *)0xC472B24)->v)) + 0x1);
                                                                                    if ((*(int *)(((int)stk + 4))) != -1) {
                                                                                        if ((((int)0x1 << (int)((((struct o28_int *)0xC472B64)->v))) & (*(int *)(((int)stk + 4)))) == 0) {
                                                                                            t2140 = (((struct o3C_int *)0xC472B64)->v);
                                                                                            (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t2140 << 2) + t2140) << 2) + 0xC1FB6DC)));
                                                                                            (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                                        } else {
                                                                                            t2143 = FUN_0c03cacc(((((struct o28_int *)0xC472B64)->v)));
                                                                                            if (t2143 != -1) {
                                                                                                if (t2143 == 0) {
                                                                                                    t2144 = (((struct o3C_int *)0xC472B64)->v);
                                                                                                    (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t2144 << 2) + t2144) << 2) + 0xC1FB6D8)));
                                                                                                } else {
                                                                                                    t2146 = (((struct o3C_int *)0xC472B64)->v);
                                                                                                    (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t2146 << 2) + t2146) << 2) + 0xC1FB6DC)));
                                                                                                }
                                                                                                (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                                            }
                                                                                        }
                                                                                    } else {
                                                                                        t2161 = (((struct o3C_int *)0xC472B64)->v);
                                                                                        (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t2161 << 2) + t2161) << 2) + 0xC1FB6DC)));
                                                                                        (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        } else {
                            t2238 = FUN_0c0fe154(0x83CF);
                            *(unsigned int *)(((int)stk + 8)) = t2238;
                            if (t2238 == 0) {
                            } else {
                                FUN_0c0fe178(0x14);
                                FUN_0c05aab6(((*(int *)(((int)stk + 8))) - 1), 0x3);
                                if (((((struct o2C_int *)0xC472B24)->v)) != 0) {
                                    FUN_0c0fe496();
                                } else {
                                    if (((((struct o30_int *)0xC472B24)->v)) != 0) {
                                        (((struct o4_uint *)0xC472B24)->v) = 0x1;
                                        (((struct o8_uint *)0xC472B24)->v) = 0x0;
                                        (((struct o38_uint *)0xC472B64)->v) = 0x5;
                                    } else {
                                        (((struct o4_uint *)0xC472B24)->v) = 0x0;
                                        (((struct o8_uint *)0xC472B24)->v) = 0x0;
                                    }
                                }
                            }
                        }
                    } else {
                        t2266 = FUN_0c0fe154(0x83CF);
                        *(unsigned int *)(((int)stk + 8)) = t2266;
                        if (t2266 == 0) {
                        } else {
                            FUN_0c0fe178(0x14);
                            if (((((struct o30_int *)0xC472B24)->v)) != 0) {
                                (((struct o4_uint *)0xC472B24)->v) = 0x1;
                                (((struct o8_uint *)0xC472B24)->v) = 0x0;
                                (((struct o38_uint *)0xC472B64)->v) = 0x5;
                            } else {
                                (((struct o4_uint *)0xC472B24)->v) = 0x0;
                                (((struct o8_uint *)0xC472B24)->v) = 0x0;
                            }
                            FUN_0c05aab6(((*(int *)(((int)stk + 8))) - 1), 0x4);
                        }
                    }
                } else {
                    if (t134 == 3) {
                        *(unsigned int *)(((int)stk + 4)) = (FUN_0c03add8());
                        t2284 = (((struct o3C_int *)0xC472B64)->v);
                        t2285 = *(int *)((0xC1FB6D4 + (((t2284 << 2) + t2284) << 2)));
                        if (t2285 != 0) {
                            if (t2285 != 1) {
                                if (t2285 == 2) {
                                    t2286 = FUN_0c0fe154(0x83CF);
                                    *(unsigned int *)(((int)stk + 8)) = t2286;
                                    if (t2286 == 0) {
                                    } else {
                                        FUN_0c0fe178(0x14);
                                        t2288 = (((struct o3C_int *)0xC472B64)->v);
                                        (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t2288 << 2) + t2288) << 2) + 0xC1FB6D8)));
                                        (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                        FUN_0c05aab6(((*(int *)(((int)stk + 8))) - 1), 0x3);
                                    }
                                } else {
                                    if (t2285 == 16) {
                                        t2294 = FUN_0c0fe154(0x40);
                                        *(unsigned int *)(((int)stk + 8)) = t2294;
                                        if (t2294 != 0) {
                                            FUN_0c0fe178(0x14);
                                            if (((((struct o30_int *)0xC472B24)->v)) != 0) {
                                                (((struct o4_uint *)0xC472B24)->v) = 0x1;
                                                (((struct o8_uint *)0xC472B24)->v) = 0x0;
                                                (((struct o38_uint *)0xC472B64)->v) = 0x5;
                                            } else {
                                                (((struct o4_uint *)0xC472B24)->v) = 0x0;
                                                (((struct o8_uint *)0xC472B24)->v) = 0x0;
                                            }
                                            FUN_0c05aab6(((*(int *)(((int)stk + 8))) - 1), 0x4);
                                        } else {
                                            t2304 = FUN_0c0fe154(0x101);
                                            *(unsigned int *)(((int)stk + 8)) = t2304;
                                            if (t2304 == 0) {
                                            } else {
                                                FUN_0c0fe178(0x14);
                                                (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                t2306 = (((struct o3C_int *)0xC472B64)->v);
                                                (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t2306 << 2) + t2306) << 2) + 0xC1FB6D8)));
                                                FUN_0c05aab6(((*(int *)(((int)stk + 8))) - 1), 0x3);
                                            }
                                        }
                                    } else {
                                        if (t2285 == 17) {
                                            t2314 = FUN_0c0fe154(0x40);
                                            *(unsigned int *)(((int)stk + 8)) = t2314;
                                            if (t2314 != 0) {
                                                FUN_0c0fe178(0x14);
                                                FUN_0c0fe496();
                                                FUN_0c05aab6(((*(int *)(((int)stk + 8))) - 1), 0x4);
                                            } else {
                                                t2319 = FUN_0c0fe154(0x101);
                                                *(unsigned int *)(((int)stk + 8)) = t2319;
                                                if (t2319 == 0) {
                                                } else {
                                                    FUN_0c0fe178(0x14);
                                                    (((struct o4_uint *)0xC472B24)->v) = 0x1;
                                                    (((struct o8_uint *)0xC472B24)->v) = 0x0;
                                                    (((struct o38_uint *)0xC472B64)->v) = 0x5;
                                                    FUN_0c05aab6(((*(int *)(((int)stk + 8))) - 1), 0x3);
                                                }
                                            }
                                        } else {
                                            if (t2285 == 18) {
                                                t2327 = FUN_0c0fe154(0x40);
                                                *(unsigned int *)(((int)stk + 8)) = t2327;
                                                if (t2327 != 0) {
                                                    FUN_0c0fe178(0x14);
                                                    if (((((struct o30_int *)0xC472B24)->v)) != 0) {
                                                        (((struct o4_uint *)0xC472B24)->v) = 0x1;
                                                        (((struct o8_uint *)0xC472B24)->v) = 0x0;
                                                        (((struct o38_uint *)0xC472B64)->v) = 0x5;
                                                    } else {
                                                        (((struct o4_uint *)0xC472B24)->v) = 0x0;
                                                        (((struct o8_uint *)0xC472B24)->v) = 0x0;
                                                    }
                                                    FUN_0c05aab6(((*(int *)(((int)stk + 8))) - 1), 0x4);
                                                } else {
                                                    t2337 = FUN_0c0fe154(0x101);
                                                    *(unsigned int *)(((int)stk + 8)) = t2337;
                                                    if (t2337 == 0) {
                                                    } else {
                                                        FUN_0c0fe178(0x14);
                                                        FUN_0c05aab6(((*(int *)(((int)stk + 8))) - 1), 0x3);
                                                        (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                        t2341 = FUN_0c03add8();
                                                        *(unsigned int *)(((int)stk + 4)) = t2341;
                                                        if (t2341 == -1) {
                                                            FUN_0c0fe3a0();
                                                        } else {
                                                            FUN_0c0fe328();
                                                        }
                                                        if ((int)((((struct o0_int *)0xC472B64)->v)) < 0) {
                                                            (((struct o3C_uint *)0xC472B64)->v) = 0x5;
                                                        } else {
                                                            if ((((int)0x1 << (int)((((struct o28_int *)0xC472B64)->v))) & ((((struct o0_int *)0xC472B64)->v))) == 0) {
                                                                (((struct o3C_uint *)0xC472B64)->v) = 0x0;
                                                            } else {
                                                                if ((int)((((struct oC_int *)0xC472B64)->v)) >= 0) {
                                                                    if ((((int)0x1 << (int)((((struct o28_int *)0xC472B64)->v))) & ((((struct oC_int *)0xC472B64)->v))) == 0) {
                                                                        if ((int)((((struct o8_int *)0xC472B64)->v)) >= 0) {
                                                                            if ((((int)0x1 << (int)((((struct o28_int *)0xC472B64)->v))) & ((((struct o8_int *)0xC472B64)->v))) == 0) {
                                                                                (((struct o3C_uint *)0xC472B64)->v) = 0x8;
                                                                            } else {
                                                                                if ((int)((((struct o4_int *)0xC472B64)->v)) < 0) {
                                                                                    (((struct o3C_uint *)0xC472B64)->v) = 0x5;
                                                                                } else {
                                                                                    if ((((int)0x1 << (int)((((struct o28_int *)0xC472B64)->v))) & ((((struct o4_int *)0xC472B64)->v))) != 0) {
                                                                                        (((struct o3C_uint *)0xC472B64)->v) = 0x15;
                                                                                    } else {
                                                                                        (((struct o3C_uint *)0xC472B64)->v) = 0x16;
                                                                                    }
                                                                                }
                                                                            }
                                                                        } else {
                                                                            (((struct o3C_uint *)0xC472B64)->v) = 0x8;
                                                                        }
                                                                    } else {
                                                                        if ((int)((((struct o4_int *)0xC472B64)->v)) < 0) {
                                                                            (((struct o3C_uint *)0xC472B64)->v) = 0x5;
                                                                        } else {
                                                                            if ((((int)0x1 << (int)((((struct o28_int *)0xC472B64)->v))) & ((((struct o4_int *)0xC472B64)->v))) != 0) {
                                                                                (((struct o3C_uint *)0xC472B64)->v) = 0x15;
                                                                            } else {
                                                                                (((struct o3C_uint *)0xC472B64)->v) = 0x16;
                                                                            }
                                                                        }
                                                                    }
                                                                } else {
                                                                    (((struct o3C_uint *)0xC472B64)->v) = 0xE;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (t2285 == 19) {
                                                    t2419 = FUN_0c0fe154(0x40);
                                                    *(unsigned int *)(((int)stk + 8)) = t2419;
                                                    if (t2419 != 0) {
                                                        FUN_0c0fe178(0x14);
                                                        if (((((struct o30_int *)0xC472B24)->v)) != 0) {
                                                            (((struct o4_uint *)0xC472B24)->v) = 0x1;
                                                            (((struct o8_uint *)0xC472B24)->v) = 0x0;
                                                            (((struct o38_uint *)0xC472B64)->v) = 0x5;
                                                        } else {
                                                            (((struct o4_uint *)0xC472B24)->v) = 0x0;
                                                            (((struct o8_uint *)0xC472B24)->v) = 0x0;
                                                        }
                                                        FUN_0c05aab6(((*(int *)(((int)stk + 8))) - 1), 0x4);
                                                    } else {
                                                        t2429 = FUN_0c0fe154(0x101);
                                                        *(unsigned int *)(((int)stk + 8)) = t2429;
                                                        if (t2429 == 0) {
                                                        } else {
                                                            FUN_0c0fe178(0x14);
                                                            FUN_0c05aab6(((*(int *)(((int)stk + 8))) - 1), 0x3);
                                                            (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                            t2433 = FUN_0c03add8();
                                                            *(unsigned int *)(((int)stk + 4)) = t2433;
                                                            if (t2433 == -1) {
                                                                FUN_0c0fe3a0();
                                                            } else {
                                                                FUN_0c0fe328();
                                                            }
                                                            if ((int)((((struct o0_int *)0xC472B64)->v)) >= 0) {
                                                                if ((((int)0x1 << (int)((((struct o28_int *)0xC472B64)->v))) & ((((struct o0_int *)0xC472B64)->v))) == 0) {
                                                                    (((struct o3C_uint *)0xC472B64)->v) = 0x0;
                                                                } else {
                                                                    if ((int)((((struct o4_int *)0xC472B64)->v)) >= 0) {
                                                                        if ((((int)0x1 << (int)((((struct o28_int *)0xC472B64)->v))) & ((((struct o4_int *)0xC472B64)->v))) != 0) {
                                                                            (((struct o3C_uint *)0xC472B64)->v) = 0x2;
                                                                        } else {
                                                                            (((struct o3C_uint *)0xC472B64)->v) = 0x3;
                                                                        }
                                                                    } else {
                                                                        (((struct o3C_uint *)0xC472B64)->v) = 0x5;
                                                                    }
                                                                }
                                                            } else {
                                                                (((struct o3C_uint *)0xC472B64)->v) = 0x5;
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    if (t2285 == 32) {
                                                        t2472 = (((struct oC_int *)0xC472B24)->v);
                                                        if (t2472 != 0) {
                                                            if (t2472 != 1) {
                                                                if (t2472 != 2) {
                                                                    if (t2472 != 3) {
                                                                    } else {
                                                                        t2474 = FUN_0c03c210(((((struct o28_int *)0xC472B64)->v)));
                                                                        if (t2474 == -1) {
                                                                        } else {
                                                                            if (t2474 == 0) {
                                                                                t2475 = (((struct o3C_int *)0xC472B64)->v);
                                                                                (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t2475 << 2) + t2475) << 2) + 0xC1FB6D8)));
                                                                            } else {
                                                                                t2477 = (((struct o3C_int *)0xC472B64)->v);
                                                                                (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t2477 << 2) + t2477) << 2) + 0xC1FB6DC)));
                                                                            }
                                                                            (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                        }
                                                                    }
                                                                } else {
                                                                    (((struct oC_uint *)0xC472B24)->v) = (((((struct oC_int *)0xC472B24)->v)) + 0x1);
                                                                    if ((*(int *)(((int)stk + 4))) != -1) {
                                                                        if ((((int)0x1 << (int)((((struct o28_int *)0xC472B64)->v))) & (*(int *)(((int)stk + 4)))) == 0) {
                                                                            t2497 = (((struct o3C_int *)0xC472B64)->v);
                                                                            (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t2497 << 2) + t2497) << 2) + 0xC1FB6DC)));
                                                                            (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                        } else {
                                                                            t2500 = FUN_0c03c210(((((struct o28_int *)0xC472B64)->v)));
                                                                            if (t2500 == -1) {
                                                                            } else {
                                                                                if (t2500 == 0) {
                                                                                    t2501 = (((struct o3C_int *)0xC472B64)->v);
                                                                                    (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t2501 << 2) + t2501) << 2) + 0xC1FB6D8)));
                                                                                } else {
                                                                                    t2503 = (((struct o3C_int *)0xC472B64)->v);
                                                                                    (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t2503 << 2) + t2503) << 2) + 0xC1FB6DC)));
                                                                                }
                                                                                (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                            }
                                                                        }
                                                                    } else {
                                                                        t2519 = (((struct o3C_int *)0xC472B64)->v);
                                                                        (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t2519 << 2) + t2519) << 2) + 0xC1FB6DC)));
                                                                        (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                    }
                                                                }
                                                            } else {
                                                                t2532 = FUN_0c03b9d0(((((struct o28_int *)0xC472B64)->v)));
                                                                if (t2532 == -1) {
                                                                } else {
                                                                    if (t2532 == 0) {
                                                                        if ((((int)0x1 << (int)((((struct o28_int *)0xC472B64)->v))) & ((((struct o8_int *)0xC472B64)->v))) != 0) {
                                                                            (((struct oC_uint *)0xC472B24)->v) = (((((struct oC_int *)0xC472B24)->v)) + 0x1);
                                                                        } else {
                                                                            t2536 = (((struct o3C_int *)0xC472B64)->v);
                                                                            (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t2536 << 2) + t2536) << 2) + 0xC1FB6D8)));
                                                                            (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                        }
                                                                    } else {
                                                                        t2543 = (((struct o3C_int *)0xC472B64)->v);
                                                                        (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t2543 << 2) + t2543) << 2) + 0xC1FB6DC)));
                                                                        (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            (((struct oC_uint *)0xC472B24)->v) = (((((struct oC_int *)0xC472B24)->v)) + 0x1);
                                                            if ((*(int *)(((int)stk + 4))) != -1) {
                                                                if ((((int)0x1 << (int)((((struct o28_int *)0xC472B64)->v))) & (*(int *)(((int)stk + 4)))) == 0) {
                                                                    t2564 = (((struct o3C_int *)0xC472B64)->v);
                                                                    (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t2564 << 2) + t2564) << 2) + 0xC1FB6DC)));
                                                                    (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                } else {
                                                                    t2567 = FUN_0c03b9d0(((((struct o28_int *)0xC472B64)->v)));
                                                                    if (t2567 == -1) {
                                                                    } else {
                                                                        if (t2567 == 0) {
                                                                            if ((((int)0x1 << (int)((((struct o28_int *)0xC472B64)->v))) & ((((struct o8_int *)0xC472B64)->v))) != 0) {
                                                                                (((struct oC_uint *)0xC472B24)->v) = (((((struct oC_int *)0xC472B24)->v)) + 0x1);
                                                                            } else {
                                                                                t2571 = (((struct o3C_int *)0xC472B64)->v);
                                                                                (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t2571 << 2) + t2571) << 2) + 0xC1FB6D8)));
                                                                                (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                            }
                                                                        } else {
                                                                            t2578 = (((struct o3C_int *)0xC472B64)->v);
                                                                            (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t2578 << 2) + t2578) << 2) + 0xC1FB6DC)));
                                                                            (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                t2595 = (((struct o3C_int *)0xC472B64)->v);
                                                                (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t2595 << 2) + t2595) << 2) + 0xC1FB6DC)));
                                                                (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                            }
                                                        }
                                                    } else {
                                                        if (t2285 == 33) {
                                                            t2607 = (((struct oC_int *)0xC472B24)->v);
                                                            if (t2607 != 0) {
                                                                if (t2607 != 1) {
                                                                    if (t2607 == 2) {
                                                                        (((struct oC_uint *)0xC472B24)->v) = (((((struct oC_int *)0xC472B24)->v)) + 0x1);
                                                                        if ((*(int *)(((int)stk + 4))) == -1) {
                                                                            t2610 = (((struct o3C_int *)0xC472B64)->v);
                                                                            (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t2610 << 2) + t2610) << 2) + 0xC1FB6DC)));
                                                                            (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                        } else {
                                                                            FUN_0c0fe328();
                                                                            if ((((int)0x1 << (int)((((struct o28_int *)0xC472B64)->v))) & (*(int *)(((int)stk + 4)))) == 0) {
                                                                                t2615 = (((struct o3C_int *)0xC472B64)->v);
                                                                                (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t2615 << 2) + t2615) << 2) + 0xC1FB6DC)));
                                                                                (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                            } else {
                                                                                t2618 = FUN_0c03c358(((((struct o28_int *)0xC472B64)->v)));
                                                                                if (t2618 == -1) {
                                                                                } else {
                                                                                    if (t2618 == 0) {
                                                                                        t2619 = (((struct o3C_int *)0xC472B64)->v);
                                                                                        (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t2619 << 2) + t2619) << 2) + 0xC1FB6D8)));
                                                                                    } else {
                                                                                        t2621 = (((struct o3C_int *)0xC472B64)->v);
                                                                                        (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t2621 << 2) + t2621) << 2) + 0xC1FB6DC)));
                                                                                    }
                                                                                    (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                                }
                                                                            }
                                                                        }
                                                                    } else {
                                                                        if (t2607 == 3) {
                                                                            t2642 = FUN_0c03c358(((((struct o28_int *)0xC472B64)->v)));
                                                                            if (t2642 == -1) {
                                                                            } else {
                                                                                if (t2642 == 0) {
                                                                                    t2643 = (((struct o3C_int *)0xC472B64)->v);
                                                                                    (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t2643 << 2) + t2643) << 2) + 0xC1FB6D8)));
                                                                                } else {
                                                                                    t2645 = (((struct o3C_int *)0xC472B64)->v);
                                                                                    (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t2645 << 2) + t2645) << 2) + 0xC1FB6DC)));
                                                                                }
                                                                                (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                            }
                                                                        }
                                                                    }
                                                                } else {
                                                                    t2666 = FUN_0c03b6ac(((((struct o28_int *)0xC472B64)->v)));
                                                                    if (t2666 == -1) {
                                                                    } else {
                                                                        if (t2666 == 0) {
                                                                            if ((int)((((struct o8_int *)0xC472B64)->v)) >= 0) {
                                                                                if ((((int)0x1 << (int)((((struct o28_int *)0xC472B64)->v))) & ((((struct o8_int *)0xC472B64)->v))) != 0) {
                                                                                    (((struct oC_uint *)0xC472B24)->v) = (((((struct oC_int *)0xC472B24)->v)) + 0x1);
                                                                                } else {
                                                                                    t2673 = (((struct o3C_int *)0xC472B64)->v);
                                                                                    (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t2673 << 2) + t2673) << 2) + 0xC1FB6D8)));
                                                                                    (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                                }
                                                                            } else {
                                                                                t2680 = (((struct o3C_int *)0xC472B64)->v);
                                                                                (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t2680 << 2) + t2680) << 2) + 0xC1FB6D8)));
                                                                                (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                            }
                                                                        } else {
                                                                            t2687 = (((struct o3C_int *)0xC472B64)->v);
                                                                            (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t2687 << 2) + t2687) << 2) + 0xC1FB6DC)));
                                                                            (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                (((struct oC_uint *)0xC472B24)->v) = (((((struct oC_int *)0xC472B24)->v)) + 0x1);
                                                                if ((*(int *)(((int)stk + 4))) != -1) {
                                                                    if ((((int)0x1 << (int)((((struct o28_int *)0xC472B64)->v))) & (*(int *)(((int)stk + 4)))) == 0) {
                                                                        t2708 = (((struct o3C_int *)0xC472B64)->v);
                                                                        (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t2708 << 2) + t2708) << 2) + 0xC1FB6DC)));
                                                                        (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                    } else {
                                                                        t2711 = FUN_0c03b6ac(((((struct o28_int *)0xC472B64)->v)));
                                                                        if (t2711 == -1) {
                                                                        } else {
                                                                            if (t2711 == 0) {
                                                                                if ((int)((((struct o8_int *)0xC472B64)->v)) >= 0) {
                                                                                    if ((((int)0x1 << (int)((((struct o28_int *)0xC472B64)->v))) & ((((struct o8_int *)0xC472B64)->v))) != 0) {
                                                                                        (((struct oC_uint *)0xC472B24)->v) = (((((struct oC_int *)0xC472B24)->v)) + 0x1);
                                                                                    } else {
                                                                                        t2718 = (((struct o3C_int *)0xC472B64)->v);
                                                                                        (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t2718 << 2) + t2718) << 2) + 0xC1FB6D8)));
                                                                                        (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                                    }
                                                                                } else {
                                                                                    t2725 = (((struct o3C_int *)0xC472B64)->v);
                                                                                    (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t2725 << 2) + t2725) << 2) + 0xC1FB6D8)));
                                                                                    (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                                }
                                                                            } else {
                                                                                t2732 = (((struct o3C_int *)0xC472B64)->v);
                                                                                (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t2732 << 2) + t2732) << 2) + 0xC1FB6DC)));
                                                                                (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                            }
                                                                        }
                                                                    }
                                                                } else {
                                                                    t2749 = (((struct o3C_int *)0xC472B64)->v);
                                                                    (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t2749 << 2) + t2749) << 2) + 0xC1FB6DC)));
                                                                    (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                }
                                                            }
                                                        } else {
                                                            if (t2285 == 34) {
                                                                t2761 = (((struct oC_int *)0xC472B24)->v);
                                                                if (t2761 != 0) {
                                                                    if (t2761 != 1) {
                                                                    } else {
                                                                        t2763 = FUN_0c03b6ac(((((struct o28_int *)0xC472B64)->v)));
                                                                        if (t2763 == -1) {
                                                                        } else {
                                                                            if (t2763 == 0) {
                                                                                t2764 = (((struct o3C_int *)0xC472B64)->v);
                                                                                (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t2764 << 2) + t2764) << 2) + 0xC1FB6D8)));
                                                                                (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                                t2766 = FUN_0c03add8();
                                                                                *(unsigned int *)(((int)stk + 4)) = t2766;
                                                                                if (t2766 == -1) {
                                                                                    FUN_0c0fe3a0();
                                                                                } else {
                                                                                    FUN_0c0fe328();
                                                                                }
                                                                                if ((int)((((struct oC_int *)0xC472B64)->v)) >= 0) {
                                                                                    if ((((int)0x1 << (int)((((struct o28_int *)0xC472B64)->v))) & ((((struct oC_int *)0xC472B64)->v))) == 0) {
                                                                                        if ((int)((((struct o8_int *)0xC472B64)->v)) >= 0) {
                                                                                            if ((((int)0x1 << (int)((((struct o28_int *)0xC472B64)->v))) & ((((struct o8_int *)0xC472B64)->v))) != 0) {
                                                                                                (((struct o3C_uint *)0xC472B64)->v) = 0xC;
                                                                                            } else {
                                                                                                (((struct o3C_uint *)0xC472B64)->v) = 0x8;
                                                                                            }
                                                                                        } else {
                                                                                            (((struct o3C_uint *)0xC472B64)->v) = 0x8;
                                                                                        }
                                                                                    } else {
                                                                                        if ((int)((((struct o10_int *)0xC472B64)->v)) >= 0) {
                                                                                            if ((((int)0x1 << (int)((((struct o28_int *)0xC472B64)->v))) & ((((struct o10_int *)0xC472B64)->v))) != 0) {
                                                                                                (((struct o3C_uint *)0xC472B64)->v) = 0x9;
                                                                                            } else {
                                                                                                (((struct o3C_uint *)0xC472B64)->v) = 0xC;
                                                                                            }
                                                                                        } else {
                                                                                            (((struct o3C_uint *)0xC472B64)->v) = 0xC;
                                                                                        }
                                                                                    }
                                                                                } else {
                                                                                    (((struct o3C_uint *)0xC472B64)->v) = 0xE;
                                                                                }
                                                                            } else {
                                                                                t2812 = (((struct o3C_int *)0xC472B64)->v);
                                                                                (((struct o3C_uint *)0xC472B64)->v) = (*(int *)((0xC1FB6DC + (((t2812 << 2) + t2812) << 2))));
                                                                                (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                            }
                                                                        }
                                                                    }
                                                                } else {
                                                                    (((struct oC_uint *)0xC472B24)->v) = (((((struct oC_int *)0xC472B24)->v)) + 0x1);
                                                                    if ((*(int *)(((int)stk + 4))) != -1) {
                                                                        if ((((int)0x1 << (int)((((struct o28_int *)0xC472B64)->v))) & (*(int *)(((int)stk + 4)))) == 0) {
                                                                            t2833 = (((struct o3C_int *)0xC472B64)->v);
                                                                            (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t2833 << 2) + t2833) << 2) + 0xC1FB6DC)));
                                                                            (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                        } else {
                                                                            t2836 = FUN_0c03b6ac(((((struct o28_int *)0xC472B64)->v)));
                                                                            if (t2836 == -1) {
                                                                            } else {
                                                                                if (t2836 == 0) {
                                                                                    t2837 = (((struct o3C_int *)0xC472B64)->v);
                                                                                    (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t2837 << 2) + t2837) << 2) + 0xC1FB6D8)));
                                                                                    (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                                    t2839 = FUN_0c03add8();
                                                                                    *(unsigned int *)(((int)stk + 4)) = t2839;
                                                                                    if (t2839 == -1) {
                                                                                        FUN_0c0fe3a0();
                                                                                    } else {
                                                                                        FUN_0c0fe328();
                                                                                    }
                                                                                    if ((int)((((struct oC_int *)0xC472B64)->v)) >= 0) {
                                                                                        if ((((int)0x1 << (int)((((struct o28_int *)0xC472B64)->v))) & ((((struct oC_int *)0xC472B64)->v))) == 0) {
                                                                                            if ((int)((((struct o8_int *)0xC472B64)->v)) >= 0) {
                                                                                                if ((((int)0x1 << (int)((((struct o28_int *)0xC472B64)->v))) & ((((struct o8_int *)0xC472B64)->v))) != 0) {
                                                                                                    (((struct o3C_uint *)0xC472B64)->v) = 0xC;
                                                                                                } else {
                                                                                                    (((struct o3C_uint *)0xC472B64)->v) = 0x8;
                                                                                                }
                                                                                            } else {
                                                                                                (((struct o3C_uint *)0xC472B64)->v) = 0x8;
                                                                                            }
                                                                                        } else {
                                                                                            if ((int)((((struct o10_int *)0xC472B64)->v)) >= 0) {
                                                                                                if ((((int)0x1 << (int)((((struct o28_int *)0xC472B64)->v))) & ((((struct o10_int *)0xC472B64)->v))) != 0) {
                                                                                                    (((struct o3C_uint *)0xC472B64)->v) = 0x9;
                                                                                                } else {
                                                                                                    (((struct o3C_uint *)0xC472B64)->v) = 0xC;
                                                                                                }
                                                                                            } else {
                                                                                                (((struct o3C_uint *)0xC472B64)->v) = 0xC;
                                                                                            }
                                                                                        }
                                                                                    } else {
                                                                                        (((struct o3C_uint *)0xC472B64)->v) = 0xE;
                                                                                    }
                                                                                } else {
                                                                                    t2885 = (((struct o3C_int *)0xC472B64)->v);
                                                                                    (((struct o3C_uint *)0xC472B64)->v) = (*(int *)((0xC1FB6DC + (((t2885 << 2) + t2885) << 2))));
                                                                                    (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                                }
                                                                            }
                                                                        }
                                                                    } else {
                                                                        t2902 = (((struct o3C_int *)0xC472B64)->v);
                                                                        (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t2902 << 2) + t2902) << 2) + 0xC1FB6DC)));
                                                                        (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                    }
                                                                }
                                                            } else {
                                                                if (t2285 == 35) {
                                                                    t2914 = (((struct oC_int *)0xC472B24)->v);
                                                                    if (t2914 != 0) {
                                                                        if ((t2914 == 1) || (t2914 == 2)) {
                                                                            if (((((struct oC_int *)0xC472B24)->v)) == 1) {
                                                                                t2920 = (FUN_0c03c018(((((struct o28_int *)0xC472B64)->v))));
                                                                            } else {
                                                                                t2920 = (FUN_0c03c358(((((struct o28_int *)0xC472B64)->v))));
                                                                            }
                                                                            *(unsigned int *)(((int)stk + 0)) = t2920;
                                                                            if (t2920 == -1) {
                                                                            } else {
                                                                                if (t2920 == 0) {
                                                                                    t2922 = (((struct o3C_int *)0xC472B64)->v);
                                                                                    (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t2922 << 2) + t2922) << 2) + 0xC1FB6D8)));
                                                                                } else {
                                                                                    t2924 = (((struct o3C_int *)0xC472B64)->v);
                                                                                    (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t2924 << 2) + t2924) << 2) + 0xC1FB6DC)));
                                                                                }
                                                                                (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                            }
                                                                        }
                                                                    } else {
                                                                        (((struct oC_uint *)0xC472B24)->v) = (((((struct oC_int *)0xC472B24)->v)) + 0x1);
                                                                        if ((*(int *)(((int)stk + 4))) == -1) {
                                                                            t2940 = (((struct o3C_int *)0xC472B64)->v);
                                                                            (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t2940 << 2) + t2940) << 2) + 0xC1FB6DC)));
                                                                            (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                        } else {
                                                                            FUN_0c0fe328();
                                                                            if ((((int)0x1 << (int)((((struct o28_int *)0xC472B64)->v))) & (*(int *)(((int)stk + 4)))) == 0) {
                                                                                t2946 = (((struct o3C_int *)0xC472B64)->v);
                                                                                (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t2946 << 2) + t2946) << 2) + 0xC1FB6DC)));
                                                                                (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                            } else {
                                                                                if ((int)((((struct o8_int *)0xC472B64)->v)) >= 0) {
                                                                                    if ((((int)0x1 << (int)((((struct o28_int *)0xC472B64)->v))) & ((((struct o8_int *)0xC472B64)->v))) != 0) {
                                                                                        (((struct oC_uint *)0xC472B24)->v) = 0x2;
                                                                                    }
                                                                                }
                                                                                if (((((struct oC_int *)0xC472B24)->v)) == 1) {
                                                                                    t2964 = (FUN_0c03c018(((((struct o28_int *)0xC472B64)->v))));
                                                                                } else {
                                                                                    t2964 = (FUN_0c03c358(((((struct o28_int *)0xC472B64)->v))));
                                                                                }
                                                                                *(unsigned int *)(((int)stk + 0)) = t2964;
                                                                                if (t2964 == -1) {
                                                                                } else {
                                                                                    if (t2964 == 0) {
                                                                                        t2966 = (((struct o3C_int *)0xC472B64)->v);
                                                                                        (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t2966 << 2) + t2966) << 2) + 0xC1FB6D8)));
                                                                                    } else {
                                                                                        t2968 = (((struct o3C_int *)0xC472B64)->v);
                                                                                        (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t2968 << 2) + t2968) << 2) + 0xC1FB6DC)));
                                                                                    }
                                                                                    (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                } else {
                                                                    if (t2285 == 36) {
                                                                        t2993 = (((struct oC_int *)0xC472B24)->v);
                                                                        if (t2993 != 0) {
                                                                            if (t2993 != 1) {
                                                                                if (t2993 != 2) {
                                                                                } else {
                                                                                    t2995 = FUN_0c03d0bc(((((struct o28_int *)0xC472B64)->v)));
                                                                                    if (t2995 == -1) {
                                                                                    } else {
                                                                                        if (t2995 == 0) {
                                                                                            t2996 = (((struct o3C_int *)0xC472B64)->v);
                                                                                            (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t2996 << 2) + t2996) << 2) + 0xC1FB6D8)));
                                                                                        } else {
                                                                                            t2998 = (((struct o3C_int *)0xC472B64)->v);
                                                                                            (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t2998 << 2) + t2998) << 2) + 0xC1FB6DC)));
                                                                                        }
                                                                                        (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                                    }
                                                                                }
                                                                            } else {
                                                                                t3015 = FUN_0c03ceb6(((((struct o28_int *)0xC472B64)->v)));
                                                                                if (t3015 == -1) {
                                                                                } else {
                                                                                    if (t3015 == 0) {
                                                                                        (((struct oC_uint *)0xC472B24)->v) = (((((struct oC_int *)0xC472B24)->v)) + 0x1);
                                                                                    } else {
                                                                                        t3017 = (((struct o3C_int *)0xC472B64)->v);
                                                                                        (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t3017 << 2) + t3017) << 2) + 0xC1FB6DC)));
                                                                                        (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                                    }
                                                                                }
                                                                            }
                                                                        } else {
                                                                            (((struct oC_uint *)0xC472B24)->v) = (((((struct oC_int *)0xC472B24)->v)) + 0x1);
                                                                            if ((*(int *)(((int)stk + 4))) != -1) {
                                                                                if ((((int)0x1 << (int)((((struct o28_int *)0xC472B64)->v))) & (*(int *)(((int)stk + 4)))) == 0) {
                                                                                    t3038 = (((struct o3C_int *)0xC472B64)->v);
                                                                                    (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t3038 << 2) + t3038) << 2) + 0xC1FB6DC)));
                                                                                    (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                                } else {
                                                                                    t3041 = FUN_0c03ceb6(((((struct o28_int *)0xC472B64)->v)));
                                                                                    if (t3041 == -1) {
                                                                                    } else {
                                                                                        if (t3041 == 0) {
                                                                                            (((struct oC_uint *)0xC472B24)->v) = (((((struct oC_int *)0xC472B24)->v)) + 0x1);
                                                                                        } else {
                                                                                            t3043 = (((struct o3C_int *)0xC472B64)->v);
                                                                                            (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t3043 << 2) + t3043) << 2) + 0xC1FB6DC)));
                                                                                            (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                                        }
                                                                                    }
                                                                                }
                                                                            } else {
                                                                                t3060 = (((struct o3C_int *)0xC472B64)->v);
                                                                                (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t3060 << 2) + t3060) << 2) + 0xC1FB6DC)));
                                                                                (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                            }
                                                                        }
                                                                    } else {
                                                                        if (t2285 == 37) {
                                                                            t3072 = (((struct oC_int *)0xC472B24)->v);
                                                                            if (t3072 != 0) {
                                                                                if (t3072 != 1) {
                                                                                } else {
                                                                                    t3074 = FUN_0c03c5c0(((((struct o28_int *)0xC472B64)->v)));
                                                                                    if (t3074 == -1) {
                                                                                    } else {
                                                                                        if (t3074 == 0) {
                                                                                            t3075 = (((struct o3C_int *)0xC472B64)->v);
                                                                                            (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t3075 << 2) + t3075) << 2) + 0xC1FB6D8)));
                                                                                        } else {
                                                                                            t3077 = (((struct o3C_int *)0xC472B64)->v);
                                                                                            (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t3077 << 2) + t3077) << 2) + 0xC1FB6DC)));
                                                                                        }
                                                                                        (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                                    }
                                                                                }
                                                                            } else {
                                                                                (((struct oC_uint *)0xC472B24)->v) = (((((struct oC_int *)0xC472B24)->v)) + 0x1);
                                                                                if ((*(int *)(((int)stk + 4))) != -1) {
                                                                                    if ((((int)0x1 << (int)((((struct o28_int *)0xC472B64)->v))) & (*(int *)(((int)stk + 4)))) == 0) {
                                                                                        t3096 = (((struct o3C_int *)0xC472B64)->v);
                                                                                        (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t3096 << 2) + t3096) << 2) + 0xC1FB6DC)));
                                                                                        (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                                    } else {
                                                                                        t3099 = FUN_0c03c5c0(((((struct o28_int *)0xC472B64)->v)));
                                                                                        if (t3099 == -1) {
                                                                                        } else {
                                                                                            if (t3099 == 0) {
                                                                                                t3100 = (((struct o3C_int *)0xC472B64)->v);
                                                                                                (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t3100 << 2) + t3100) << 2) + 0xC1FB6D8)));
                                                                                            } else {
                                                                                                t3102 = (((struct o3C_int *)0xC472B64)->v);
                                                                                                (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t3102 << 2) + t3102) << 2) + 0xC1FB6DC)));
                                                                                            }
                                                                                            (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                                        }
                                                                                    }
                                                                                } else {
                                                                                    t3117 = (((struct o3C_int *)0xC472B64)->v);
                                                                                    (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t3117 << 2) + t3117) << 2) + 0xC1FB6DC)));
                                                                                    (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                                }
                                                                            }
                                                                        } else {
                                                                            if (t2285 == 38) {
                                                                                t3129 = (((struct oC_int *)0xC472B24)->v);
                                                                                if (t3129 != 0) {
                                                                                    if (t3129 != 1) {
                                                                                    } else {
                                                                                        t3131 = FUN_0c03c7ec(((((struct o28_int *)0xC472B64)->v)));
                                                                                        if (t3131 != -1) {
                                                                                            if (t3131 == 0) {
                                                                                                t3132 = (((struct o3C_int *)0xC472B64)->v);
                                                                                                (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t3132 << 2) + t3132) << 2) + 0xC1FB6D8)));
                                                                                            } else {
                                                                                                t3134 = (((struct o3C_int *)0xC472B64)->v);
                                                                                                (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t3134 << 2) + t3134) << 2) + 0xC1FB6DC)));
                                                                                            }
                                                                                            (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                                        }
                                                                                    }
                                                                                } else {
                                                                                    (((struct oC_uint *)0xC472B24)->v) = (((((struct oC_int *)0xC472B24)->v)) + 0x1);
                                                                                    if ((*(int *)(((int)stk + 4))) != -1) {
                                                                                        if ((((int)0x1 << (int)((((struct o28_int *)0xC472B64)->v))) & (*(int *)(((int)stk + 4)))) == 0) {
                                                                                            t3153 = (((struct o3C_int *)0xC472B64)->v);
                                                                                            (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t3153 << 2) + t3153) << 2) + 0xC1FB6DC)));
                                                                                            (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                                        } else {
                                                                                            t3156 = FUN_0c03c7ec(((((struct o28_int *)0xC472B64)->v)));
                                                                                            if (t3156 != -1) {
                                                                                                if (t3156 == 0) {
                                                                                                    t3157 = (((struct o3C_int *)0xC472B64)->v);
                                                                                                    (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t3157 << 2) + t3157) << 2) + 0xC1FB6D8)));
                                                                                                } else {
                                                                                                    t3159 = (((struct o3C_int *)0xC472B64)->v);
                                                                                                    (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t3159 << 2) + t3159) << 2) + 0xC1FB6DC)));
                                                                                                }
                                                                                                (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                                            }
                                                                                        }
                                                                                    } else {
                                                                                        t3174 = (((struct o3C_int *)0xC472B64)->v);
                                                                                        (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t3174 << 2) + t3174) << 2) + 0xC1FB6DC)));
                                                                                        (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                                    }
                                                                                }
                                                                            } else {
                                                                                if (t2285 == 39) {
                                                                                    t3186 = (((struct oC_int *)0xC472B24)->v);
                                                                                    if (t3186 != 0) {
                                                                                        if (t3186 != 1) {
                                                                                        } else {
                                                                                            t3188 = FUN_0c03cacc(((((struct o28_int *)0xC472B64)->v)));
                                                                                            if (t3188 != -1) {
                                                                                                if (t3188 == 0) {
                                                                                                    t3189 = (((struct o3C_int *)0xC472B64)->v);
                                                                                                    (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t3189 << 2) + t3189) << 2) + 0xC1FB6D8)));
                                                                                                } else {
                                                                                                    t3191 = (((struct o3C_int *)0xC472B64)->v);
                                                                                                    (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t3191 << 2) + t3191) << 2) + 0xC1FB6DC)));
                                                                                                }
                                                                                                (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                                            }
                                                                                        }
                                                                                    } else {
                                                                                        (((struct oC_uint *)0xC472B24)->v) = (((((struct oC_int *)0xC472B24)->v)) + 0x1);
                                                                                        if ((*(int *)(((int)stk + 4))) != -1) {
                                                                                            if ((((int)0x1 << (int)((((struct o28_int *)0xC472B64)->v))) & (*(int *)(((int)stk + 4)))) == 0) {
                                                                                                t3210 = (((struct o3C_int *)0xC472B64)->v);
                                                                                                (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t3210 << 2) + t3210) << 2) + 0xC1FB6DC)));
                                                                                                (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                                            } else {
                                                                                                t3213 = FUN_0c03cacc(((((struct o28_int *)0xC472B64)->v)));
                                                                                                if (t3213 != -1) {
                                                                                                    if (t3213 == 0) {
                                                                                                        t3214 = (((struct o3C_int *)0xC472B64)->v);
                                                                                                        (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t3214 << 2) + t3214) << 2) + 0xC1FB6D8)));
                                                                                                    } else {
                                                                                                        t3216 = (((struct o3C_int *)0xC472B64)->v);
                                                                                                        (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t3216 << 2) + t3216) << 2) + 0xC1FB6DC)));
                                                                                                    }
                                                                                                    (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                                                }
                                                                                            }
                                                                                        } else {
                                                                                            t3231 = (((struct o3C_int *)0xC472B64)->v);
                                                                                            (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t3231 << 2) + t3231) << 2) + 0xC1FB6DC)));
                                                                                            (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                t3308 = FUN_0c0fe154(0x83CF);
                                *(unsigned int *)(((int)stk + 8)) = t3308;
                                if (t3308 == 0) {
                                } else {
                                    FUN_0c0fe178(0x14);
                                    FUN_0c05aab6(((*(int *)(((int)stk + 8))) - 1), 0x3);
                                    if (((((struct o2C_int *)0xC472B24)->v)) != 0) {
                                        FUN_0c0fe496();
                                    } else {
                                        if (((((struct o30_int *)0xC472B24)->v)) != 0) {
                                            (((struct o4_uint *)0xC472B24)->v) = 0x1;
                                            (((struct o8_uint *)0xC472B24)->v) = 0x0;
                                            (((struct o38_uint *)0xC472B64)->v) = 0x5;
                                        } else {
                                            (((struct o4_uint *)0xC472B24)->v) = 0x0;
                                            (((struct o8_uint *)0xC472B24)->v) = 0x0;
                                        }
                                    }
                                }
                            }
                        } else {
                            t3336 = FUN_0c0fe154(0x83CF);
                            *(unsigned int *)(((int)stk + 8)) = t3336;
                            if (t3336 == 0) {
                            } else {
                                FUN_0c0fe178(0x14);
                                if (((((struct o30_int *)0xC472B24)->v)) != 0) {
                                    (((struct o4_uint *)0xC472B24)->v) = 0x1;
                                    (((struct o8_uint *)0xC472B24)->v) = 0x0;
                                    (((struct o38_uint *)0xC472B64)->v) = 0x5;
                                } else {
                                    (((struct o4_uint *)0xC472B24)->v) = 0x0;
                                    (((struct o8_uint *)0xC472B24)->v) = 0x0;
                                }
                                FUN_0c05aab6(((*(int *)(((int)stk + 8))) - 1), 0x4);
                            }
                        }
                    }
                }
            }
        } else {
            t3368 = FUN_0c03add8();
            *(unsigned int *)(((int)stk + 4)) = t3368;
            if (t3368 == -1) {
                FUN_0c0fe3a0();
            } else {
                FUN_0c0fe328();
            }
            t3373 = (((struct o34_int *)0xC472B64)->v);
            if (t3373 != 0) {
                if (t3373 != 1) {
                    if (t3373 != 2) {
                        if (t3373 == 3) {
                            if ((int)((((struct o4_int *)0xC472B64)->v)) >= 0) {
                                if ((((int)0x1 << (int)((((struct o28_int *)0xC472B64)->v))) & ((((struct o14_int *)0xC472B64)->v))) != 0) {
                                    (((struct o3C_uint *)0xC472B64)->v) = 0x24;
                                } else {
                                    (((struct o3C_uint *)0xC472B64)->v) = 0x29;
                                }
                            } else {
                                (((struct o3C_uint *)0xC472B64)->v) = 0x29;
                            }
                        } else {
                            if (t3373 == 5) {
                                t3393 = FUN_0c03add8();
                                *(unsigned int *)(((int)stk + 4)) = t3393;
                                if (t3393 == -1) {
                                    FUN_0c0fe3a0();
                                } else {
                                    FUN_0c0fe328();
                                }
                                if ((int)((((struct o18_int *)0xC472B64)->v)) >= 0) {
                                    if ((((int)0x1 << (int)((((struct o28_int *)0xC472B64)->v))) & ((((struct o18_int *)0xC472B64)->v))) != 0) {
                                        (((struct o3C_uint *)0xC472B64)->v) = 0x1A;
                                    } else {
                                        if ((int)((((struct o20_int *)0xC472B64)->v)) >= 0) {
                                            t3405 = 0x19;
                                            if ((((int)0x1 << (int)((((struct o28_int *)0xC472B64)->v))) & ((((struct o20_int *)0xC472B64)->v))) == 0) {
                                                t3405 = 0x18;
                                            }
                                            (((struct o3C_uint *)0xC472B64)->v) = t3405;
                                        } else {
                                            (((struct o3C_uint *)0xC472B64)->v) = 0x1D;
                                        }
                                    }
                                } else {
                                    (((struct o3C_uint *)0xC472B64)->v) = 0x1D;
                                }
                            } else {
                                if (t3373 == 6) {
                                    t3422 = FUN_0c03add8();
                                    *(unsigned int *)(((int)stk + 4)) = t3422;
                                    if (t3422 == -1) {
                                        FUN_0c0fe3a0();
                                    } else {
                                        FUN_0c0fe328();
                                    }
                                    if ((int)((((struct o1C_int *)0xC472B64)->v)) >= 0) {
                                        if ((((int)0x1 << (int)((((struct o28_int *)0xC472B64)->v))) & ((((struct o1C_int *)0xC472B64)->v))) != 0) {
                                            (((struct o3C_uint *)0xC472B64)->v) = 0x20;
                                        } else {
                                            if ((int)((((struct o24_int *)0xC472B64)->v)) >= 0) {
                                                t3434 = 0x1F;
                                                if ((((int)0x1 << (int)((((struct o28_int *)0xC472B64)->v))) & ((((struct o24_int *)0xC472B64)->v))) == 0) {
                                                    t3434 = 0x1E;
                                                }
                                                (((struct o3C_uint *)0xC472B64)->v) = t3434;
                                            } else {
                                                (((struct o3C_uint *)0xC472B64)->v) = 0x23;
                                            }
                                        }
                                    } else {
                                        (((struct o3C_uint *)0xC472B64)->v) = 0x23;
                                    }
                                }
                            }
                        }
                    } else {
                        if ((int)((((struct o10_int *)0xC472B64)->v)) >= 0) {
                            if ((((int)0x1 << (int)((((struct o28_int *)0xC472B64)->v))) & ((((struct o10_int *)0xC472B64)->v))) != 0) {
                                (((struct o3C_uint *)0xC472B64)->v) = 0x9;
                            } else {
                                if ((int)((((struct oC_int *)0xC472B64)->v)) >= 0) {
                                    if ((((int)0x1 << (int)((((struct o28_int *)0xC472B64)->v))) & ((((struct oC_int *)0xC472B64)->v))) != 0) {
                                        (((struct o3C_uint *)0xC472B64)->v) = 0xB;
                                    } else {
                                        if ((int)((((struct o8_int *)0xC472B64)->v)) >= 0) {
                                            if ((((int)0x1 << (int)((((struct o28_int *)0xC472B64)->v))) & ((((struct o8_int *)0xC472B64)->v))) != 0) {
                                                (((struct o3C_uint *)0xC472B64)->v) = 0xB;
                                            } else {
                                                (((struct o3C_uint *)0xC472B64)->v) = 0x8;
                                            }
                                        } else {
                                            (((struct o3C_uint *)0xC472B64)->v) = 0x8;
                                        }
                                    }
                                } else {
                                    (((struct o3C_uint *)0xC472B64)->v) = 0xE;
                                }
                            }
                        } else {
                            if ((int)((((struct oC_int *)0xC472B64)->v)) >= 0) {
                                if ((((int)0x1 << (int)((((struct o28_int *)0xC472B64)->v))) & ((((struct oC_int *)0xC472B64)->v))) != 0) {
                                    (((struct o3C_uint *)0xC472B64)->v) = 0xB;
                                } else {
                                    if ((int)((((struct o8_int *)0xC472B64)->v)) >= 0) {
                                        if ((((int)0x1 << (int)((((struct o28_int *)0xC472B64)->v))) & ((((struct o8_int *)0xC472B64)->v))) != 0) {
                                            (((struct o3C_uint *)0xC472B64)->v) = 0xB;
                                        } else {
                                            (((struct o3C_uint *)0xC472B64)->v) = 0x8;
                                        }
                                    } else {
                                        (((struct o3C_uint *)0xC472B64)->v) = 0x8;
                                    }
                                }
                            } else {
                                (((struct o3C_uint *)0xC472B64)->v) = 0xE;
                            }
                        }
                    }
                } else {
                    if ((int)((((struct o4_int *)0xC472B64)->v)) >= 0) {
                        if ((((int)0x1 << (int)((((struct o28_int *)0xC472B64)->v))) & ((((struct o4_int *)0xC472B64)->v))) != 0) {
                            (((struct o3C_uint *)0xC472B64)->v) = 0x10;
                        } else {
                            (((struct o3C_uint *)0xC472B64)->v) = 0xF;
                        }
                    } else {
                        (((struct o3C_uint *)0xC472B64)->v) = 0xF;
                    }
                }
            } else {
                if ((int)((((struct o4_int *)0xC472B64)->v)) >= 0) {
                    if ((((int)0x1 << (int)((((struct o28_int *)0xC472B64)->v))) & ((((struct o4_int *)0xC472B64)->v))) != 0) {
                        (((struct o3C_uint *)0xC472B64)->v) = 0x2;
                    } else {
                        if ((int)((((struct o0_int *)0xC472B64)->v)) >= 0) {
                            t3562 = 0x0;
                            if ((((int)0x1 << (int)((((struct o28_int *)0xC472B64)->v))) & ((((struct o0_int *)0xC472B64)->v))) != 0) {
                                t3562 = 0x1;
                            }
                            (((struct o3C_uint *)0xC472B64)->v) = t3562;
                        } else {
                            (((struct o3C_uint *)0xC472B64)->v) = 0x5;
                        }
                    }
                } else {
                    if ((int)((((struct o0_int *)0xC472B64)->v)) >= 0) {
                        t3576 = 0x0;
                        if ((((int)0x1 << (int)((((struct o28_int *)0xC472B64)->v))) & ((((struct o0_int *)0xC472B64)->v))) != 0) {
                            t3576 = 0x1;
                        }
                        (((struct o3C_uint *)0xC472B64)->v) = t3576;
                    } else {
                        (((struct o3C_uint *)0xC472B64)->v) = 0x5;
                    }
                }
            }
            (((struct o8_uint *)0xC472B24)->v) = (((((struct o8_int *)0xC472B24)->v)) + 0x1);
            FUN_0c0ffcf8(0x2);
            (((struct o8_uint *)0xC472B24)->v) = (((((struct o8_int *)0xC472B24)->v)) + 0x1);
            FUN_0c1000c4(((((struct o3C_int *)0xC472B64)->v)));
            (((struct o8_uint *)0xC472B24)->v) = (((((struct o8_int *)0xC472B24)->v)) + 0x1);
            (((struct oC_uint *)0xC472B24)->v) = 0x0;
            *(unsigned int *)(((int)stk + 4)) = (FUN_0c03add8());
            t3599 = (((struct o3C_int *)0xC472B64)->v);
            t3600 = *(int *)((0xC1FB6D4 + (((t3599 << 2) + t3599) << 2)));
            if (t3600 != 0) {
                if (t3600 != 1) {
                    if (t3600 == 2) {
                        t3601 = FUN_0c0fe154(0x83CF);
                        *(unsigned int *)(((int)stk + 8)) = t3601;
                        if (t3601 == 0) {
                        } else {
                            FUN_0c0fe178(0x14);
                            t3603 = (((struct o3C_int *)0xC472B64)->v);
                            (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t3603 << 2) + t3603) << 2) + 0xC1FB6D8)));
                            (((struct o8_uint *)0xC472B24)->v) = 0x2;
                            FUN_0c05aab6(((*(int *)(((int)stk + 8))) - 1), 0x3);
                        }
                    } else {
                        if (t3600 == 16) {
                            t3609 = FUN_0c0fe154(0x40);
                            *(unsigned int *)(((int)stk + 8)) = t3609;
                            if (t3609 != 0) {
                                FUN_0c0fe178(0x14);
                                if (((((struct o30_int *)0xC472B24)->v)) != 0) {
                                    (((struct o4_uint *)0xC472B24)->v) = 0x1;
                                    (((struct o8_uint *)0xC472B24)->v) = 0x0;
                                    (((struct o38_uint *)0xC472B64)->v) = 0x5;
                                } else {
                                    (((struct o4_uint *)0xC472B24)->v) = 0x0;
                                    (((struct o8_uint *)0xC472B24)->v) = 0x0;
                                }
                                FUN_0c05aab6(((*(int *)(((int)stk + 8))) - 1), 0x4);
                            } else {
                                t3619 = FUN_0c0fe154(0x101);
                                *(unsigned int *)(((int)stk + 8)) = t3619;
                                if (t3619 == 0) {
                                } else {
                                    FUN_0c0fe178(0x14);
                                    (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                    t3621 = (((struct o3C_int *)0xC472B64)->v);
                                    (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t3621 << 2) + t3621) << 2) + 0xC1FB6D8)));
                                    FUN_0c05aab6(((*(int *)(((int)stk + 8))) - 1), 0x3);
                                }
                            }
                        } else {
                            if (t3600 == 17) {
                                t3629 = FUN_0c0fe154(0x40);
                                *(unsigned int *)(((int)stk + 8)) = t3629;
                                if (t3629 != 0) {
                                    FUN_0c0fe178(0x14);
                                    FUN_0c0fe496();
                                    FUN_0c05aab6(((*(int *)(((int)stk + 8))) - 1), 0x4);
                                } else {
                                    t3634 = FUN_0c0fe154(0x101);
                                    *(unsigned int *)(((int)stk + 8)) = t3634;
                                    if (t3634 == 0) {
                                    } else {
                                        FUN_0c0fe178(0x14);
                                        (((struct o4_uint *)0xC472B24)->v) = 0x1;
                                        (((struct o8_uint *)0xC472B24)->v) = 0x0;
                                        (((struct o38_uint *)0xC472B64)->v) = 0x5;
                                        FUN_0c05aab6(((*(int *)(((int)stk + 8))) - 1), 0x3);
                                    }
                                }
                            } else {
                                if (t3600 == 18) {
                                    t3642 = FUN_0c0fe154(0x40);
                                    *(unsigned int *)(((int)stk + 8)) = t3642;
                                    if (t3642 != 0) {
                                        FUN_0c0fe178(0x14);
                                        if (((((struct o30_int *)0xC472B24)->v)) != 0) {
                                            (((struct o4_uint *)0xC472B24)->v) = 0x1;
                                            (((struct o8_uint *)0xC472B24)->v) = 0x0;
                                            (((struct o38_uint *)0xC472B64)->v) = 0x5;
                                        } else {
                                            (((struct o4_uint *)0xC472B24)->v) = 0x0;
                                            (((struct o8_uint *)0xC472B24)->v) = 0x0;
                                        }
                                        FUN_0c05aab6(((*(int *)(((int)stk + 8))) - 1), 0x4);
                                    } else {
                                        t3652 = FUN_0c0fe154(0x101);
                                        *(unsigned int *)(((int)stk + 8)) = t3652;
                                        if (t3652 == 0) {
                                        } else {
                                            FUN_0c0fe178(0x14);
                                            FUN_0c05aab6(((*(int *)(((int)stk + 8))) - 1), 0x3);
                                            (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                            t3656 = FUN_0c03add8();
                                            *(unsigned int *)(((int)stk + 4)) = t3656;
                                            if (t3656 == -1) {
                                                FUN_0c0fe3a0();
                                            } else {
                                                FUN_0c0fe328();
                                            }
                                            if ((int)((((struct o0_int *)0xC472B64)->v)) < 0) {
                                                (((struct o3C_uint *)0xC472B64)->v) = 0x5;
                                            } else {
                                                if ((((int)0x1 << (int)((((struct o28_int *)0xC472B64)->v))) & ((((struct o0_int *)0xC472B64)->v))) == 0) {
                                                    (((struct o3C_uint *)0xC472B64)->v) = 0x0;
                                                } else {
                                                    if ((int)((((struct oC_int *)0xC472B64)->v)) >= 0) {
                                                        if ((((int)0x1 << (int)((((struct o28_int *)0xC472B64)->v))) & ((((struct oC_int *)0xC472B64)->v))) == 0) {
                                                            if ((int)((((struct o8_int *)0xC472B64)->v)) >= 0) {
                                                                if ((((int)0x1 << (int)((((struct o28_int *)0xC472B64)->v))) & ((((struct o8_int *)0xC472B64)->v))) == 0) {
                                                                    (((struct o3C_uint *)0xC472B64)->v) = 0x8;
                                                                } else {
                                                                    if ((int)((((struct o4_int *)0xC472B64)->v)) < 0) {
                                                                        (((struct o3C_uint *)0xC472B64)->v) = 0x5;
                                                                    } else {
                                                                        if ((((int)0x1 << (int)((((struct o28_int *)0xC472B64)->v))) & ((((struct o4_int *)0xC472B64)->v))) != 0) {
                                                                            (((struct o3C_uint *)0xC472B64)->v) = 0x15;
                                                                        } else {
                                                                            (((struct o3C_uint *)0xC472B64)->v) = 0x16;
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                (((struct o3C_uint *)0xC472B64)->v) = 0x8;
                                                            }
                                                        } else {
                                                            if ((int)((((struct o4_int *)0xC472B64)->v)) < 0) {
                                                                (((struct o3C_uint *)0xC472B64)->v) = 0x5;
                                                            } else {
                                                                if ((((int)0x1 << (int)((((struct o28_int *)0xC472B64)->v))) & ((((struct o4_int *)0xC472B64)->v))) != 0) {
                                                                    (((struct o3C_uint *)0xC472B64)->v) = 0x15;
                                                                } else {
                                                                    (((struct o3C_uint *)0xC472B64)->v) = 0x16;
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        (((struct o3C_uint *)0xC472B64)->v) = 0xE;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    if (t3600 == 19) {
                                        t3734 = FUN_0c0fe154(0x40);
                                        *(unsigned int *)(((int)stk + 8)) = t3734;
                                        if (t3734 != 0) {
                                            FUN_0c0fe178(0x14);
                                            if (((((struct o30_int *)0xC472B24)->v)) != 0) {
                                                (((struct o4_uint *)0xC472B24)->v) = 0x1;
                                                (((struct o8_uint *)0xC472B24)->v) = 0x0;
                                                (((struct o38_uint *)0xC472B64)->v) = 0x5;
                                            } else {
                                                (((struct o4_uint *)0xC472B24)->v) = 0x0;
                                                (((struct o8_uint *)0xC472B24)->v) = 0x0;
                                            }
                                            FUN_0c05aab6(((*(int *)(((int)stk + 8))) - 1), 0x4);
                                        } else {
                                            t3744 = FUN_0c0fe154(0x101);
                                            *(unsigned int *)(((int)stk + 8)) = t3744;
                                            if (t3744 == 0) {
                                            } else {
                                                FUN_0c0fe178(0x14);
                                                FUN_0c05aab6(((*(int *)(((int)stk + 8))) - 1), 0x3);
                                                (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                t3748 = FUN_0c03add8();
                                                *(unsigned int *)(((int)stk + 4)) = t3748;
                                                if (t3748 == -1) {
                                                    FUN_0c0fe3a0();
                                                } else {
                                                    FUN_0c0fe328();
                                                }
                                                if ((int)((((struct o0_int *)0xC472B64)->v)) >= 0) {
                                                    if ((((int)0x1 << (int)((((struct o28_int *)0xC472B64)->v))) & ((((struct o0_int *)0xC472B64)->v))) == 0) {
                                                        (((struct o3C_uint *)0xC472B64)->v) = 0x0;
                                                    } else {
                                                        if ((int)((((struct o4_int *)0xC472B64)->v)) >= 0) {
                                                            if ((((int)0x1 << (int)((((struct o28_int *)0xC472B64)->v))) & ((((struct o4_int *)0xC472B64)->v))) != 0) {
                                                                (((struct o3C_uint *)0xC472B64)->v) = 0x2;
                                                            } else {
                                                                (((struct o3C_uint *)0xC472B64)->v) = 0x3;
                                                            }
                                                        } else {
                                                            (((struct o3C_uint *)0xC472B64)->v) = 0x5;
                                                        }
                                                    }
                                                } else {
                                                    (((struct o3C_uint *)0xC472B64)->v) = 0x5;
                                                }
                                            }
                                        }
                                    } else {
                                        if (t3600 == 32) {
                                            t3787 = (((struct oC_int *)0xC472B24)->v);
                                            if (t3787 != 0) {
                                                if (t3787 != 1) {
                                                    if (t3787 != 2) {
                                                        if (t3787 != 3) {
                                                        } else {
                                                            t3789 = FUN_0c03c210(((((struct o28_int *)0xC472B64)->v)));
                                                            if (t3789 == -1) {
                                                            } else {
                                                                if (t3789 == 0) {
                                                                    t3790 = (((struct o3C_int *)0xC472B64)->v);
                                                                    (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t3790 << 2) + t3790) << 2) + 0xC1FB6D8)));
                                                                } else {
                                                                    t3792 = (((struct o3C_int *)0xC472B64)->v);
                                                                    (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t3792 << 2) + t3792) << 2) + 0xC1FB6DC)));
                                                                }
                                                                (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                            }
                                                        }
                                                    } else {
                                                        (((struct oC_uint *)0xC472B24)->v) = (((((struct oC_int *)0xC472B24)->v)) + 0x1);
                                                        if ((*(int *)(((int)stk + 4))) != -1) {
                                                            if ((((int)0x1 << (int)((((struct o28_int *)0xC472B64)->v))) & (*(int *)(((int)stk + 4)))) == 0) {
                                                                t3812 = (((struct o3C_int *)0xC472B64)->v);
                                                                (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t3812 << 2) + t3812) << 2) + 0xC1FB6DC)));
                                                                (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                            } else {
                                                                t3815 = FUN_0c03c210(((((struct o28_int *)0xC472B64)->v)));
                                                                if (t3815 == -1) {
                                                                } else {
                                                                    if (t3815 == 0) {
                                                                        t3816 = (((struct o3C_int *)0xC472B64)->v);
                                                                        (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t3816 << 2) + t3816) << 2) + 0xC1FB6D8)));
                                                                    } else {
                                                                        t3818 = (((struct o3C_int *)0xC472B64)->v);
                                                                        (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t3818 << 2) + t3818) << 2) + 0xC1FB6DC)));
                                                                    }
                                                                    (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                }
                                                            }
                                                        } else {
                                                            t3834 = (((struct o3C_int *)0xC472B64)->v);
                                                            (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t3834 << 2) + t3834) << 2) + 0xC1FB6DC)));
                                                            (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                        }
                                                    }
                                                } else {
                                                    t3847 = FUN_0c03b9d0(((((struct o28_int *)0xC472B64)->v)));
                                                    if (t3847 == -1) {
                                                    } else {
                                                        if (t3847 == 0) {
                                                            if ((((int)0x1 << (int)((((struct o28_int *)0xC472B64)->v))) & ((((struct o8_int *)0xC472B64)->v))) != 0) {
                                                                (((struct oC_uint *)0xC472B24)->v) = (((((struct oC_int *)0xC472B24)->v)) + 0x1);
                                                            } else {
                                                                t3851 = (((struct o3C_int *)0xC472B64)->v);
                                                                (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t3851 << 2) + t3851) << 2) + 0xC1FB6D8)));
                                                                (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                            }
                                                        } else {
                                                            t3858 = (((struct o3C_int *)0xC472B64)->v);
                                                            (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t3858 << 2) + t3858) << 2) + 0xC1FB6DC)));
                                                            (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                        }
                                                    }
                                                }
                                            } else {
                                                (((struct oC_uint *)0xC472B24)->v) = (((((struct oC_int *)0xC472B24)->v)) + 0x1);
                                                if ((*(int *)(((int)stk + 4))) != -1) {
                                                    if ((((int)0x1 << (int)((((struct o28_int *)0xC472B64)->v))) & (*(int *)(((int)stk + 4)))) == 0) {
                                                        t3879 = (((struct o3C_int *)0xC472B64)->v);
                                                        (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t3879 << 2) + t3879) << 2) + 0xC1FB6DC)));
                                                        (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                    } else {
                                                        t3882 = FUN_0c03b9d0(((((struct o28_int *)0xC472B64)->v)));
                                                        if (t3882 == -1) {
                                                        } else {
                                                            if (t3882 == 0) {
                                                                if ((((int)0x1 << (int)((((struct o28_int *)0xC472B64)->v))) & ((((struct o8_int *)0xC472B64)->v))) != 0) {
                                                                    (((struct oC_uint *)0xC472B24)->v) = (((((struct oC_int *)0xC472B24)->v)) + 0x1);
                                                                } else {
                                                                    t3886 = (((struct o3C_int *)0xC472B64)->v);
                                                                    (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t3886 << 2) + t3886) << 2) + 0xC1FB6D8)));
                                                                    (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                }
                                                            } else {
                                                                t3893 = (((struct o3C_int *)0xC472B64)->v);
                                                                (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t3893 << 2) + t3893) << 2) + 0xC1FB6DC)));
                                                                (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    t3910 = (((struct o3C_int *)0xC472B64)->v);
                                                    (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t3910 << 2) + t3910) << 2) + 0xC1FB6DC)));
                                                    (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                }
                                            }
                                        } else {
                                            if (t3600 == 33) {
                                                t3922 = (((struct oC_int *)0xC472B24)->v);
                                                if (t3922 != 0) {
                                                    if (t3922 != 1) {
                                                        if (t3922 == 2) {
                                                            (((struct oC_uint *)0xC472B24)->v) = (((((struct oC_int *)0xC472B24)->v)) + 0x1);
                                                            if ((*(int *)(((int)stk + 4))) == -1) {
                                                                t3925 = (((struct o3C_int *)0xC472B64)->v);
                                                                (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t3925 << 2) + t3925) << 2) + 0xC1FB6DC)));
                                                                (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                            } else {
                                                                FUN_0c0fe328();
                                                                if ((((int)0x1 << (int)((((struct o28_int *)0xC472B64)->v))) & (*(int *)(((int)stk + 4)))) == 0) {
                                                                    t3930 = (((struct o3C_int *)0xC472B64)->v);
                                                                    (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t3930 << 2) + t3930) << 2) + 0xC1FB6DC)));
                                                                    (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                } else {
                                                                    t3933 = FUN_0c03c358(((((struct o28_int *)0xC472B64)->v)));
                                                                    if (t3933 == -1) {
                                                                    } else {
                                                                        if (t3933 == 0) {
                                                                            t3934 = (((struct o3C_int *)0xC472B64)->v);
                                                                            (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t3934 << 2) + t3934) << 2) + 0xC1FB6D8)));
                                                                        } else {
                                                                            t3936 = (((struct o3C_int *)0xC472B64)->v);
                                                                            (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t3936 << 2) + t3936) << 2) + 0xC1FB6DC)));
                                                                        }
                                                                        (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            if (t3922 == 3) {
                                                                t3957 = FUN_0c03c358(((((struct o28_int *)0xC472B64)->v)));
                                                                if (t3957 == -1) {
                                                                } else {
                                                                    if (t3957 == 0) {
                                                                        t3958 = (((struct o3C_int *)0xC472B64)->v);
                                                                        (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t3958 << 2) + t3958) << 2) + 0xC1FB6D8)));
                                                                    } else {
                                                                        t3960 = (((struct o3C_int *)0xC472B64)->v);
                                                                        (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t3960 << 2) + t3960) << 2) + 0xC1FB6DC)));
                                                                    }
                                                                    (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        t3981 = FUN_0c03b6ac(((((struct o28_int *)0xC472B64)->v)));
                                                        if (t3981 == -1) {
                                                        } else {
                                                            if (t3981 == 0) {
                                                                if ((int)((((struct o8_int *)0xC472B64)->v)) >= 0) {
                                                                    if ((((int)0x1 << (int)((((struct o28_int *)0xC472B64)->v))) & ((((struct o8_int *)0xC472B64)->v))) != 0) {
                                                                        (((struct oC_uint *)0xC472B24)->v) = (((((struct oC_int *)0xC472B24)->v)) + 0x1);
                                                                    } else {
                                                                        t3988 = (((struct o3C_int *)0xC472B64)->v);
                                                                        (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t3988 << 2) + t3988) << 2) + 0xC1FB6D8)));
                                                                        (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                    }
                                                                } else {
                                                                    t3995 = (((struct o3C_int *)0xC472B64)->v);
                                                                    (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t3995 << 2) + t3995) << 2) + 0xC1FB6D8)));
                                                                    (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                }
                                                            } else {
                                                                t4002 = (((struct o3C_int *)0xC472B64)->v);
                                                                (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t4002 << 2) + t4002) << 2) + 0xC1FB6DC)));
                                                                (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    (((struct oC_uint *)0xC472B24)->v) = (((((struct oC_int *)0xC472B24)->v)) + 0x1);
                                                    if ((*(int *)(((int)stk + 4))) != -1) {
                                                        if ((((int)0x1 << (int)((((struct o28_int *)0xC472B64)->v))) & (*(int *)(((int)stk + 4)))) == 0) {
                                                            t4023 = (((struct o3C_int *)0xC472B64)->v);
                                                            (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t4023 << 2) + t4023) << 2) + 0xC1FB6DC)));
                                                            (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                        } else {
                                                            t4026 = FUN_0c03b6ac(((((struct o28_int *)0xC472B64)->v)));
                                                            if (t4026 == -1) {
                                                            } else {
                                                                if (t4026 == 0) {
                                                                    if ((int)((((struct o8_int *)0xC472B64)->v)) >= 0) {
                                                                        if ((((int)0x1 << (int)((((struct o28_int *)0xC472B64)->v))) & ((((struct o8_int *)0xC472B64)->v))) != 0) {
                                                                            (((struct oC_uint *)0xC472B24)->v) = (((((struct oC_int *)0xC472B24)->v)) + 0x1);
                                                                        } else {
                                                                            t4033 = (((struct o3C_int *)0xC472B64)->v);
                                                                            (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t4033 << 2) + t4033) << 2) + 0xC1FB6D8)));
                                                                            (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                        }
                                                                    } else {
                                                                        t4040 = (((struct o3C_int *)0xC472B64)->v);
                                                                        (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t4040 << 2) + t4040) << 2) + 0xC1FB6D8)));
                                                                        (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                    }
                                                                } else {
                                                                    t4047 = (((struct o3C_int *)0xC472B64)->v);
                                                                    (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t4047 << 2) + t4047) << 2) + 0xC1FB6DC)));
                                                                    (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        t4064 = (((struct o3C_int *)0xC472B64)->v);
                                                        (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t4064 << 2) + t4064) << 2) + 0xC1FB6DC)));
                                                        (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                    }
                                                }
                                            } else {
                                                if (t3600 == 34) {
                                                    t4076 = (((struct oC_int *)0xC472B24)->v);
                                                    if (t4076 != 0) {
                                                        if (t4076 != 1) {
                                                        } else {
                                                            t4078 = FUN_0c03b6ac(((((struct o28_int *)0xC472B64)->v)));
                                                            if (t4078 == -1) {
                                                            } else {
                                                                if (t4078 == 0) {
                                                                    t4079 = (((struct o3C_int *)0xC472B64)->v);
                                                                    (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t4079 << 2) + t4079) << 2) + 0xC1FB6D8)));
                                                                    (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                    t4081 = FUN_0c03add8();
                                                                    *(unsigned int *)(((int)stk + 4)) = t4081;
                                                                    if (t4081 == -1) {
                                                                        FUN_0c0fe3a0();
                                                                    } else {
                                                                        FUN_0c0fe328();
                                                                    }
                                                                    if ((int)((((struct oC_int *)0xC472B64)->v)) >= 0) {
                                                                        if ((((int)0x1 << (int)((((struct o28_int *)0xC472B64)->v))) & ((((struct oC_int *)0xC472B64)->v))) == 0) {
                                                                            if ((int)((((struct o8_int *)0xC472B64)->v)) >= 0) {
                                                                                if ((((int)0x1 << (int)((((struct o28_int *)0xC472B64)->v))) & ((((struct o8_int *)0xC472B64)->v))) != 0) {
                                                                                    (((struct o3C_uint *)0xC472B64)->v) = 0xC;
                                                                                } else {
                                                                                    (((struct o3C_uint *)0xC472B64)->v) = 0x8;
                                                                                }
                                                                            } else {
                                                                                (((struct o3C_uint *)0xC472B64)->v) = 0x8;
                                                                            }
                                                                        } else {
                                                                            if ((int)((((struct o10_int *)0xC472B64)->v)) >= 0) {
                                                                                if ((((int)0x1 << (int)((((struct o28_int *)0xC472B64)->v))) & ((((struct o10_int *)0xC472B64)->v))) != 0) {
                                                                                    (((struct o3C_uint *)0xC472B64)->v) = 0x9;
                                                                                } else {
                                                                                    (((struct o3C_uint *)0xC472B64)->v) = 0xC;
                                                                                }
                                                                            } else {
                                                                                (((struct o3C_uint *)0xC472B64)->v) = 0xC;
                                                                            }
                                                                        }
                                                                    } else {
                                                                        (((struct o3C_uint *)0xC472B64)->v) = 0xE;
                                                                    }
                                                                } else {
                                                                    t4127 = (((struct o3C_int *)0xC472B64)->v);
                                                                    (((struct o3C_uint *)0xC472B64)->v) = (*(int *)((0xC1FB6DC + (((t4127 << 2) + t4127) << 2))));
                                                                    (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        (((struct oC_uint *)0xC472B24)->v) = (((((struct oC_int *)0xC472B24)->v)) + 0x1);
                                                        if ((*(int *)(((int)stk + 4))) != -1) {
                                                            if ((((int)0x1 << (int)((((struct o28_int *)0xC472B64)->v))) & (*(int *)(((int)stk + 4)))) == 0) {
                                                                t4148 = (((struct o3C_int *)0xC472B64)->v);
                                                                (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t4148 << 2) + t4148) << 2) + 0xC1FB6DC)));
                                                                (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                            } else {
                                                                t4151 = FUN_0c03b6ac(((((struct o28_int *)0xC472B64)->v)));
                                                                if (t4151 == -1) {
                                                                } else {
                                                                    if (t4151 == 0) {
                                                                        t4152 = (((struct o3C_int *)0xC472B64)->v);
                                                                        (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t4152 << 2) + t4152) << 2) + 0xC1FB6D8)));
                                                                        (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                        t4154 = FUN_0c03add8();
                                                                        *(unsigned int *)(((int)stk + 4)) = t4154;
                                                                        if (t4154 == -1) {
                                                                            FUN_0c0fe3a0();
                                                                        } else {
                                                                            FUN_0c0fe328();
                                                                        }
                                                                        if ((int)((((struct oC_int *)0xC472B64)->v)) >= 0) {
                                                                            if ((((int)0x1 << (int)((((struct o28_int *)0xC472B64)->v))) & ((((struct oC_int *)0xC472B64)->v))) == 0) {
                                                                                if ((int)((((struct o8_int *)0xC472B64)->v)) >= 0) {
                                                                                    if ((((int)0x1 << (int)((((struct o28_int *)0xC472B64)->v))) & ((((struct o8_int *)0xC472B64)->v))) != 0) {
                                                                                        (((struct o3C_uint *)0xC472B64)->v) = 0xC;
                                                                                    } else {
                                                                                        (((struct o3C_uint *)0xC472B64)->v) = 0x8;
                                                                                    }
                                                                                } else {
                                                                                    (((struct o3C_uint *)0xC472B64)->v) = 0x8;
                                                                                }
                                                                            } else {
                                                                                if ((int)((((struct o10_int *)0xC472B64)->v)) >= 0) {
                                                                                    if ((((int)0x1 << (int)((((struct o28_int *)0xC472B64)->v))) & ((((struct o10_int *)0xC472B64)->v))) != 0) {
                                                                                        (((struct o3C_uint *)0xC472B64)->v) = 0x9;
                                                                                    } else {
                                                                                        (((struct o3C_uint *)0xC472B64)->v) = 0xC;
                                                                                    }
                                                                                } else {
                                                                                    (((struct o3C_uint *)0xC472B64)->v) = 0xC;
                                                                                }
                                                                            }
                                                                        } else {
                                                                            (((struct o3C_uint *)0xC472B64)->v) = 0xE;
                                                                        }
                                                                    } else {
                                                                        t4200 = (((struct o3C_int *)0xC472B64)->v);
                                                                        (((struct o3C_uint *)0xC472B64)->v) = (*(int *)((0xC1FB6DC + (((t4200 << 2) + t4200) << 2))));
                                                                        (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            t4217 = (((struct o3C_int *)0xC472B64)->v);
                                                            (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t4217 << 2) + t4217) << 2) + 0xC1FB6DC)));
                                                            (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                        }
                                                    }
                                                } else {
                                                    if (t3600 == 35) {
                                                        t4229 = (((struct oC_int *)0xC472B24)->v);
                                                        if (t4229 != 0) {
                                                            if ((t4229 == 1) || (t4229 == 2)) {
                                                                if (((((struct oC_int *)0xC472B24)->v)) == 1) {
                                                                    t4235 = (FUN_0c03c018(((((struct o28_int *)0xC472B64)->v))));
                                                                } else {
                                                                    t4235 = (FUN_0c03c358(((((struct o28_int *)0xC472B64)->v))));
                                                                }
                                                                *(unsigned int *)(((int)stk + 0)) = t4235;
                                                                if (t4235 == -1) {
                                                                } else {
                                                                    if (t4235 == 0) {
                                                                        t4237 = (((struct o3C_int *)0xC472B64)->v);
                                                                        (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t4237 << 2) + t4237) << 2) + 0xC1FB6D8)));
                                                                    } else {
                                                                        t4239 = (((struct o3C_int *)0xC472B64)->v);
                                                                        (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t4239 << 2) + t4239) << 2) + 0xC1FB6DC)));
                                                                    }
                                                                    (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                }
                                                            }
                                                        } else {
                                                            (((struct oC_uint *)0xC472B24)->v) = (((((struct oC_int *)0xC472B24)->v)) + 0x1);
                                                            if ((*(int *)(((int)stk + 4))) == -1) {
                                                                t4255 = (((struct o3C_int *)0xC472B64)->v);
                                                                (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t4255 << 2) + t4255) << 2) + 0xC1FB6DC)));
                                                                (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                            } else {
                                                                FUN_0c0fe328();
                                                                if ((((int)0x1 << (int)((((struct o28_int *)0xC472B64)->v))) & (*(int *)(((int)stk + 4)))) == 0) {
                                                                    t4261 = (((struct o3C_int *)0xC472B64)->v);
                                                                    (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t4261 << 2) + t4261) << 2) + 0xC1FB6DC)));
                                                                    (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                } else {
                                                                    if ((int)((((struct o8_int *)0xC472B64)->v)) >= 0) {
                                                                        if ((((int)0x1 << (int)((((struct o28_int *)0xC472B64)->v))) & ((((struct o8_int *)0xC472B64)->v))) != 0) {
                                                                            (((struct oC_uint *)0xC472B24)->v) = 0x2;
                                                                        }
                                                                    }
                                                                    if (((((struct oC_int *)0xC472B24)->v)) == 1) {
                                                                        t4279 = (FUN_0c03c018(((((struct o28_int *)0xC472B64)->v))));
                                                                    } else {
                                                                        t4279 = (FUN_0c03c358(((((struct o28_int *)0xC472B64)->v))));
                                                                    }
                                                                    *(unsigned int *)(((int)stk + 0)) = t4279;
                                                                    if (t4279 == -1) {
                                                                    } else {
                                                                        if (t4279 == 0) {
                                                                            t4281 = (((struct o3C_int *)0xC472B64)->v);
                                                                            (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t4281 << 2) + t4281) << 2) + 0xC1FB6D8)));
                                                                        } else {
                                                                            t4283 = (((struct o3C_int *)0xC472B64)->v);
                                                                            (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t4283 << 2) + t4283) << 2) + 0xC1FB6DC)));
                                                                        }
                                                                        (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        if (t3600 == 36) {
                                                            t4308 = (((struct oC_int *)0xC472B24)->v);
                                                            if (t4308 != 0) {
                                                                if (t4308 != 1) {
                                                                    if (t4308 != 2) {
                                                                    } else {
                                                                        t4310 = FUN_0c03d0bc(((((struct o28_int *)0xC472B64)->v)));
                                                                        if (t4310 == -1) {
                                                                        } else {
                                                                            if (t4310 == 0) {
                                                                                t4311 = (((struct o3C_int *)0xC472B64)->v);
                                                                                (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t4311 << 2) + t4311) << 2) + 0xC1FB6D8)));
                                                                            } else {
                                                                                t4313 = (((struct o3C_int *)0xC472B64)->v);
                                                                                (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t4313 << 2) + t4313) << 2) + 0xC1FB6DC)));
                                                                            }
                                                                            (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                        }
                                                                    }
                                                                } else {
                                                                    t4330 = FUN_0c03ceb6(((((struct o28_int *)0xC472B64)->v)));
                                                                    if (t4330 == -1) {
                                                                    } else {
                                                                        if (t4330 == 0) {
                                                                            (((struct oC_uint *)0xC472B24)->v) = (((((struct oC_int *)0xC472B24)->v)) + 0x1);
                                                                        } else {
                                                                            t4332 = (((struct o3C_int *)0xC472B64)->v);
                                                                            (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t4332 << 2) + t4332) << 2) + 0xC1FB6DC)));
                                                                            (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                (((struct oC_uint *)0xC472B24)->v) = (((((struct oC_int *)0xC472B24)->v)) + 0x1);
                                                                if ((*(int *)(((int)stk + 4))) != -1) {
                                                                    if ((((int)0x1 << (int)((((struct o28_int *)0xC472B64)->v))) & (*(int *)(((int)stk + 4)))) == 0) {
                                                                        t4353 = (((struct o3C_int *)0xC472B64)->v);
                                                                        (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t4353 << 2) + t4353) << 2) + 0xC1FB6DC)));
                                                                        (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                    } else {
                                                                        t4356 = FUN_0c03ceb6(((((struct o28_int *)0xC472B64)->v)));
                                                                        if (t4356 == -1) {
                                                                        } else {
                                                                            if (t4356 == 0) {
                                                                                (((struct oC_uint *)0xC472B24)->v) = (((((struct oC_int *)0xC472B24)->v)) + 0x1);
                                                                            } else {
                                                                                t4358 = (((struct o3C_int *)0xC472B64)->v);
                                                                                (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t4358 << 2) + t4358) << 2) + 0xC1FB6DC)));
                                                                                (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                            }
                                                                        }
                                                                    }
                                                                } else {
                                                                    t4375 = (((struct o3C_int *)0xC472B64)->v);
                                                                    (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t4375 << 2) + t4375) << 2) + 0xC1FB6DC)));
                                                                    (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                }
                                                            }
                                                        } else {
                                                            if (t3600 == 37) {
                                                                t4387 = (((struct oC_int *)0xC472B24)->v);
                                                                if (t4387 != 0) {
                                                                    if (t4387 != 1) {
                                                                    } else {
                                                                        t4389 = FUN_0c03c5c0(((((struct o28_int *)0xC472B64)->v)));
                                                                        if (t4389 == -1) {
                                                                        } else {
                                                                            if (t4389 == 0) {
                                                                                t4390 = (((struct o3C_int *)0xC472B64)->v);
                                                                                (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t4390 << 2) + t4390) << 2) + 0xC1FB6D8)));
                                                                            } else {
                                                                                t4392 = (((struct o3C_int *)0xC472B64)->v);
                                                                                (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t4392 << 2) + t4392) << 2) + 0xC1FB6DC)));
                                                                            }
                                                                            (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                        }
                                                                    }
                                                                } else {
                                                                    (((struct oC_uint *)0xC472B24)->v) = (((((struct oC_int *)0xC472B24)->v)) + 0x1);
                                                                    if ((*(int *)(((int)stk + 4))) != -1) {
                                                                        if ((((int)0x1 << (int)((((struct o28_int *)0xC472B64)->v))) & (*(int *)(((int)stk + 4)))) == 0) {
                                                                            t4411 = (((struct o3C_int *)0xC472B64)->v);
                                                                            (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t4411 << 2) + t4411) << 2) + 0xC1FB6DC)));
                                                                            (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                        } else {
                                                                            t4414 = FUN_0c03c5c0(((((struct o28_int *)0xC472B64)->v)));
                                                                            if (t4414 == -1) {
                                                                            } else {
                                                                                if (t4414 == 0) {
                                                                                    t4415 = (((struct o3C_int *)0xC472B64)->v);
                                                                                    (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t4415 << 2) + t4415) << 2) + 0xC1FB6D8)));
                                                                                } else {
                                                                                    t4417 = (((struct o3C_int *)0xC472B64)->v);
                                                                                    (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t4417 << 2) + t4417) << 2) + 0xC1FB6DC)));
                                                                                }
                                                                                (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                            }
                                                                        }
                                                                    } else {
                                                                        t4432 = (((struct o3C_int *)0xC472B64)->v);
                                                                        (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t4432 << 2) + t4432) << 2) + 0xC1FB6DC)));
                                                                        (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                    }
                                                                }
                                                            } else {
                                                                if (t3600 == 38) {
                                                                    t4444 = (((struct oC_int *)0xC472B24)->v);
                                                                    if (t4444 != 0) {
                                                                        if (t4444 != 1) {
                                                                        } else {
                                                                            t4446 = FUN_0c03c7ec(((((struct o28_int *)0xC472B64)->v)));
                                                                            if (t4446 != -1) {
                                                                                if (t4446 == 0) {
                                                                                    t4447 = (((struct o3C_int *)0xC472B64)->v);
                                                                                    (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t4447 << 2) + t4447) << 2) + 0xC1FB6D8)));
                                                                                } else {
                                                                                    t4449 = (((struct o3C_int *)0xC472B64)->v);
                                                                                    (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t4449 << 2) + t4449) << 2) + 0xC1FB6DC)));
                                                                                }
                                                                                (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                            }
                                                                        }
                                                                    } else {
                                                                        (((struct oC_uint *)0xC472B24)->v) = (((((struct oC_int *)0xC472B24)->v)) + 0x1);
                                                                        if ((*(int *)(((int)stk + 4))) != -1) {
                                                                            if ((((int)0x1 << (int)((((struct o28_int *)0xC472B64)->v))) & (*(int *)(((int)stk + 4)))) == 0) {
                                                                                t4468 = (((struct o3C_int *)0xC472B64)->v);
                                                                                (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t4468 << 2) + t4468) << 2) + 0xC1FB6DC)));
                                                                                (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                            } else {
                                                                                t4471 = FUN_0c03c7ec(((((struct o28_int *)0xC472B64)->v)));
                                                                                if (t4471 != -1) {
                                                                                    if (t4471 == 0) {
                                                                                        t4472 = (((struct o3C_int *)0xC472B64)->v);
                                                                                        (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t4472 << 2) + t4472) << 2) + 0xC1FB6D8)));
                                                                                    } else {
                                                                                        t4474 = (((struct o3C_int *)0xC472B64)->v);
                                                                                        (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t4474 << 2) + t4474) << 2) + 0xC1FB6DC)));
                                                                                    }
                                                                                    (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                                }
                                                                            }
                                                                        } else {
                                                                            t4489 = (((struct o3C_int *)0xC472B64)->v);
                                                                            (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t4489 << 2) + t4489) << 2) + 0xC1FB6DC)));
                                                                            (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                        }
                                                                    }
                                                                } else {
                                                                    if (t3600 == 39) {
                                                                        t4501 = (((struct oC_int *)0xC472B24)->v);
                                                                        if (t4501 != 0) {
                                                                            if (t4501 != 1) {
                                                                            } else {
                                                                                t4503 = FUN_0c03cacc(((((struct o28_int *)0xC472B64)->v)));
                                                                                if (t4503 != -1) {
                                                                                    if (t4503 == 0) {
                                                                                        t4504 = (((struct o3C_int *)0xC472B64)->v);
                                                                                        (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t4504 << 2) + t4504) << 2) + 0xC1FB6D8)));
                                                                                    } else {
                                                                                        t4506 = (((struct o3C_int *)0xC472B64)->v);
                                                                                        (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t4506 << 2) + t4506) << 2) + 0xC1FB6DC)));
                                                                                    }
                                                                                    (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                                }
                                                                            }
                                                                        } else {
                                                                            (((struct oC_uint *)0xC472B24)->v) = (((((struct oC_int *)0xC472B24)->v)) + 0x1);
                                                                            if ((*(int *)(((int)stk + 4))) != -1) {
                                                                                if ((((int)0x1 << (int)((((struct o28_int *)0xC472B64)->v))) & (*(int *)(((int)stk + 4)))) == 0) {
                                                                                    t4525 = (((struct o3C_int *)0xC472B64)->v);
                                                                                    (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t4525 << 2) + t4525) << 2) + 0xC1FB6DC)));
                                                                                    (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                                } else {
                                                                                    t4528 = FUN_0c03cacc(((((struct o28_int *)0xC472B64)->v)));
                                                                                    if (t4528 != -1) {
                                                                                        if (t4528 == 0) {
                                                                                            t4529 = (((struct o3C_int *)0xC472B64)->v);
                                                                                            (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t4529 << 2) + t4529) << 2) + 0xC1FB6D8)));
                                                                                        } else {
                                                                                            t4531 = (((struct o3C_int *)0xC472B64)->v);
                                                                                            (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t4531 << 2) + t4531) << 2) + 0xC1FB6DC)));
                                                                                        }
                                                                                        (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                                    }
                                                                                }
                                                                            } else {
                                                                                t4546 = (((struct o3C_int *)0xC472B64)->v);
                                                                                (((struct o3C_uint *)0xC472B64)->v) = (*(int *)(((((t4546 << 2) + t4546) << 2) + 0xC1FB6DC)));
                                                                                (((struct o8_uint *)0xC472B24)->v) = 0x2;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    t4623 = FUN_0c0fe154(0x83CF);
                    *(unsigned int *)(((int)stk + 8)) = t4623;
                    if (t4623 == 0) {
                    } else {
                        FUN_0c0fe178(0x14);
                        FUN_0c05aab6(((*(int *)(((int)stk + 8))) - 1), 0x3);
                        if (((((struct o2C_int *)0xC472B24)->v)) != 0) {
                            FUN_0c0fe496();
                        } else {
                            if (((((struct o30_int *)0xC472B24)->v)) != 0) {
                                (((struct o4_uint *)0xC472B24)->v) = 0x1;
                                (((struct o8_uint *)0xC472B24)->v) = 0x0;
                                (((struct o38_uint *)0xC472B64)->v) = 0x5;
                            } else {
                                (((struct o4_uint *)0xC472B24)->v) = 0x0;
                                (((struct o8_uint *)0xC472B24)->v) = 0x0;
                            }
                        }
                    }
                }
            } else {
                t4651 = FUN_0c0fe154(0x83CF);
                *(unsigned int *)(((int)stk + 8)) = t4651;
                if (t4651 == 0) {
                } else {
                    FUN_0c0fe178(0x14);
                    if (((((struct o30_int *)0xC472B24)->v)) != 0) {
                        (((struct o4_uint *)0xC472B24)->v) = 0x1;
                        (((struct o8_uint *)0xC472B24)->v) = 0x0;
                        (((struct o38_uint *)0xC472B64)->v) = 0x5;
                    } else {
                        (((struct o4_uint *)0xC472B24)->v) = 0x0;
                        (((struct o8_uint *)0xC472B24)->v) = 0x0;
                    }
                    FUN_0c05aab6(((*(int *)(((int)stk + 8))) - 1), 0x4);
                }
            }
        }
        break;
    }
    FUN_0c03f40c(0x5);
    FUN_0c038548(0x5);
    FUN_0c038e88(0x5);
    FUN_0c03f40c(0x8);
    return (FUN_0c038e88(0x8));
}
