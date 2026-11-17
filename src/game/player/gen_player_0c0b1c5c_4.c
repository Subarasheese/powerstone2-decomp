/* game/player: functions 0C0B1C5C-0C0B4AFC, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o126_uchar { char p[0x126]; unsigned char v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o160_float { char p[0x160]; float v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o2C_float { char p[0x2C]; float v; };
struct o378C_float { char p[0x378C]; float v; };
struct o37A0_float { char p[0x37A0]; float v; };
struct o37B0_float { char p[0x37B0]; float v; };
struct o3850_int { char p[0x3850]; int v; };
struct o3850_uint { char p[0x3850]; unsigned int v; };
struct o3868_int { char p[0x3868]; int v; };
struct o3868_uint { char p[0x3868]; unsigned int v; };
struct o38F8_int { char p[0x38F8]; int v; };
struct o3928_float { char p[0x3928]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o445_uchar { char p[0x445]; unsigned char v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o90_float { char p[0x90]; float v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
int FUN_0c037bf6(int);
int FUN_0c038362(int);
int FUN_0c04307c(void);
int FUN_0c05258e(int, int, int, int, int);
int FUN_0c059e60(int, int);
int FUN_0c0737e8(int);
int FUN_0c07c1f8(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c0b1c5c(void);
int FUN_0c0b1cf2(void);
float FUN_0c0b1d64(int);
int FUN_0c0b1edc(int);
int FUN_0c0b2064(int);
int FUN_0c0b281e(int);
extern int FUN_0c0b2888();
int FUN_0c0b2ac2(int);
int FUN_0c0b3aac(int, int, int, int);
int FUN_0c0b3f2e(int);
int FUN_0c0b3fe6(int);
int FUN_0c0b4074(int);
extern int FUN_0c144644();
int math_atan2_angle16(float, float);
int FUN_0c179ac0(void);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
float FUN_0c0e2340(int);
int FUN_0c0e2390(int, int, int);
int FUN_0c17c450(int);
int FUN_0c0b2d30(int a4, int a5, int a6, int a7);

int FUN_0c0b2d30(int a4, int a5, int a6, int a7)
{
    int stk[17];
    register int t0;
    register int t1;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;
    register int t10;
    register int t12;
    register int t13;
    register float t15;
    register int t16;
    register int t17;
    register int t19;
    register int t20;
    register int t22;
    register int t23;
    register int t24;
    register int t26;
    register int t31;
    register int t32;
    register int t63;
    register int t68;
    register int t69;
    register int t100;
    register int t101;
    register float t103;
    register int t104;
    register int t105;
    register int t107;
    register int t108;
    register int t110;
    register int t111;
    register int t112;
    register int t114;
    register int t119;
    register int t120;
    register int t151;
    register int t156;
    register int t157;
    register int t188;
    register int t189;
    register int t192;
    register float u196;
    register int t197;
    register int t203;
    register int t204;
    register int t205;
    register int t206;
    register int t207;
    register int t208;
    register int t210;
    register int t211;
    register float t213;
    register int t214;
    register int t215;
    register int t217;
    register int t218;
    register int t220;
    register int t221;
    register int t222;
    register int t224;
    register int t229;
    register int t230;
    register int t261;
    register int t266;
    register int t267;
    register int t298;
    register int t299;
    register float t301;
    register int t302;
    register int t303;
    register int t305;
    register int t306;
    register int t308;
    register int t309;
    register int t310;
    register int t312;
    register int t317;
    register int t318;
    register int t349;
    register int t354;
    register int t355;
    register int t386;
    register int t387;
    int t389;
    register int t394;
    register int t396;
    register float u410;
    register int t411;
    register int t415;
    register int t416;
    register int t418;
    register int t420;
    register int t422;
    register int t424;
    register int t426;
    register int t428;
    register int t439;
    register int t441;
    register int t443;
    register int t445;
    register int t447;
    register int t448;
    register int t449;
    register float u450;
    register int t451;
    register int t452;
    register int t456;
    register int t457;
    register int t459;
    register int t462;
    register int t464;
    register int t466;
    register int t468;
    register int t478;
    register int t479;
    register int t480;
    register int t482;
    register int t484;
    register int t486;
    register int t488;
    register int t491;
    register int t494;
    register int t495;
    register int t499;
    register int t501;
    register int t504;
    register int t507;
    register int t508;
    register int t509;
    register int t511;
    register int t512;
    register float u515;
    register int t516;
    register int t520;
    register int t528;
    register int t529;
    register int t530;
    register float u533;
    register int t534;
    register int t548;
    register int t549;
    register int t550;
    register int t554;
    register float u555;
    register int t558;
    register int t560;
    register int t581;
    register int t588;
    register int t589;
    register float u592;
    register int t593;
    register int t616;
    register int t623;
    register int t630;
    register int t638;
    register int t642;
    register int t643;
    register float u646;
    register int t647;
    register int t659;
    register int t675;
    register float t678;
    register int t688;
    register int t713;
    register int t716;
    register int t717;
    register int t731;
    register int t732;
    register float u735;
    register int t736;
    register int t740;
    register int t743;
    register int t744;
    register int t758;
    register int t759;
    register int t760;
    register int t762;
    register int t763;
    register float u766;
    register int t768;
    register int t769;
    register int t770;
    register float u773;
    register int t774;
    register int t777;
    register int t779;
    register int t780;
    register float u783;
    register int t785;
    register int t95;
    register int t183;
    register int t293;
    register int t381;
    register int t402;
    register int t403;
    register int t404;
    register int t406;
    register int t433;
    register int t434;
    register int t751;

    t0 = *(signed char *)((a4 + 0x3715));
    if (t0 != 3) {
        if (t0 != 5) {
            if (t0 != 7) {
                if (t0 != 19) {
                    if (t0 != 20) {
                        if (t0 != 14) {
                            if (t0 != 16) {
                                t1 = *(signed char *)((a4 + 0x16));
                                if (t1 != 0) {
                                    if (t1 != 1) {
                                        return t1;
                                    }
                                    FUN_0c0b2ac2(a4);
                                    FUN_0c037bf6(a4);
                                    if ((int)(*(signed char *)0xC542235) < (int)0x2) {
                                        return FUN_0c038362(a4);
                                    }
                                    t5 = FUN_0c04307c();
                                    if (t5 != 0) {
                                        t6 = ((int (*)(int, int, int))(FUN_0c0b2888))(a4, 0x7, 0x4);
                                        return FUN_0c038362(a4);
                                    }
                                    t7 = *(short *)((a4 + 0x1C));
                                    *(unsigned short *)((a4 + 0x1C)) = (t7 - 1);
                                    if ((int)(short)(t7 - 1) > 0) {
                                        return FUN_0c038362(a4);
                                    }
                                    t8 = FUN_0c0b2064(a4);
                                    if ((int)t8 >= 0) {
                                        t9 = FUN_0c179ac0();
                                        t10 = ((~(((~t9) + 0x1) & 0xF)) + 0x1);
                                        if ((int)t9 >= 0) {
                                            t10 = (t9 & 0xF);
                                        }
                                        if ((int)t10 < (int)0xE) {
                                            t12 = FUN_0c179ac0();
                                            t13 = ((~(((~t12) + 0x1) & 0xF)) + 0x1);
                                            if ((int)t12 >= 0) {
                                                t13 = (t12 & 0xF);
                                            }
                                            if ((int)t13 < (int)0xC) {
                                                return ((int (*)(int, int, int))(FUN_0c0b2888))(a4, 0x7, 0x1);
                                            }
                                            *(unsigned short *)((a4 + 0x1C)) = 0x3C;
                                            return 0x3C;
                                        }
                                        t15 = FUN_0c0b1d64(a4);
                                        if (t15 > 0.865999997f) {
                                            t16 = FUN_0c179ac0();
                                            t17 = ((~(((~t16) + 0x1) & 0xF)) + 0x1);
                                            if ((int)t16 >= 0) {
                                                t17 = (t16 & 0xF);
                                            }
                                            if ((int)t17 < (int)0xC) {
                                                return ((int (*)(int, int, int))(FUN_0c0b2888))(a4, 0x3, 0x0);
                                            }
                                            *(unsigned short *)((a4 + 0x1C)) = 0x3C;
                                            return 0x3C;
                                        }
                                        t19 = FUN_0c179ac0();
                                        t20 = ((~(((~t19) + 0x1) & 0xF)) + 0x1);
                                        if ((int)t19 >= 0) {
                                            t20 = (t19 & 0xF);
                                        }
                                        if ((int)t20 < (int)0x8) {
                                            t22 = FUN_0c0b1edc(a4);
                                            if ((int)t22 >= 0) {
                                                t23 = FUN_0c179ac0();
                                                t24 = ((~(((~t23) + 0x1) & 0xF)) + 0x1);
                                                if ((int)t23 >= 0) {
                                                    t24 = (t23 & 0xF);
                                                }
                                                t95 = 0x3;
                                                if ((int)t24 < (int)0xC) {
                                                } else {
                                                    t26 = *(int *)((a4 + 0x10));
                                                    *(unsigned int *)(((int)stk + 52)) = t26;
                                                    t95 = 0x0;
                                                    if ((*(signed char *)((t26 + 0x0))) == 0) {
                                                        t95 = 0x0;
                                                        if (((((struct o2C_float *)((*(int *)(((int)stk + 52)))))->v)) > (((((struct o2C_float *)(a4))->v)) + 800.0f)) {
                                                            t31 = FUN_0c179ac0();
                                                            t32 = ((~(((~t31) + 0x1) & 0xF)) + 0x1);
                                                            if ((int)t31 >= 0) {
                                                                t32 = (t31 & 0xF);
                                                            }
                                                            t95 = 0x0;
                                                            if ((int)t32 < (int)0x8) {
                                                                t95 = 0x2;
                                                            }
                                                        }
                                                    }
                                                }
                                            } else {
                                                t63 = *(int *)((a4 + 0x10));
                                                *(unsigned int *)(((int)stk + 52)) = t63;
                                                t95 = 0x0;
                                                if ((*(signed char *)((t63 + 0x0))) == 0) {
                                                    t95 = 0x0;
                                                    if (((((struct o2C_float *)((*(int *)(((int)stk + 52)))))->v)) > (((((struct o2C_float *)(a4))->v)) + 800.0f)) {
                                                        t68 = FUN_0c179ac0();
                                                        t69 = ((~(((~t68) + 0x1) & 0xF)) + 0x1);
                                                        if ((int)t68 >= 0) {
                                                            t69 = (t68 & 0xF);
                                                        }
                                                        t95 = 0x0;
                                                        if ((int)t69 < (int)0x8) {
                                                            t95 = 0x2;
                                                        }
                                                    }
                                                }
                                            }
                                            return ((int (*)(int, int, int))(FUN_0c0b2888))(a4, 0x7, t95);
                                        }
                                        t100 = FUN_0c179ac0();
                                        t101 = ((~(((~t100) + 0x1) & 0xF)) + 0x1);
                                        if ((int)t100 >= 0) {
                                            t101 = (t100 & 0xF);
                                        }
                                        if ((int)t101 < (int)0x8) {
                                            return ((int (*)(int, int, int))(FUN_0c0b2888))(a4, 0x5, 0x0);
                                        }
                                    } else {
                                        t103 = FUN_0c0b1d64(a4);
                                        if (t103 > 0.865999997f) {
                                            t104 = FUN_0c179ac0();
                                            t105 = ((~(((~t104) + 0x1) & 0xF)) + 0x1);
                                            if ((int)t104 >= 0) {
                                                t105 = (t104 & 0xF);
                                            }
                                            if ((int)t105 < (int)0xC) {
                                                return ((int (*)(int, int, int))(FUN_0c0b2888))(a4, 0x3, 0x0);
                                            }
                                            *(unsigned short *)((a4 + 0x1C)) = 0x3C;
                                            return 0x3C;
                                        }
                                        t107 = FUN_0c179ac0();
                                        t108 = ((~(((~t107) + 0x1) & 0xF)) + 0x1);
                                        if ((int)t107 >= 0) {
                                            t108 = (t107 & 0xF);
                                        }
                                        if ((int)t108 < (int)0x8) {
                                            t110 = FUN_0c0b1edc(a4);
                                            if ((int)t110 >= 0) {
                                                t111 = FUN_0c179ac0();
                                                t112 = ((~(((~t111) + 0x1) & 0xF)) + 0x1);
                                                if ((int)t111 >= 0) {
                                                    t112 = (t111 & 0xF);
                                                }
                                                t183 = 0x3;
                                                if ((int)t112 < (int)0xC) {
                                                } else {
                                                    t114 = *(int *)((a4 + 0x10));
                                                    *(unsigned int *)(((int)stk + 52)) = t114;
                                                    t183 = 0x0;
                                                    if ((*(signed char *)((t114 + 0x0))) == 0) {
                                                        t183 = 0x0;
                                                        if (((((struct o2C_float *)((*(int *)(((int)stk + 52)))))->v)) > (((((struct o2C_float *)(a4))->v)) + 800.0f)) {
                                                            t119 = FUN_0c179ac0();
                                                            t120 = ((~(((~t119) + 0x1) & 0xF)) + 0x1);
                                                            if ((int)t119 >= 0) {
                                                                t120 = (t119 & 0xF);
                                                            }
                                                            t183 = 0x0;
                                                            if ((int)t120 < (int)0x8) {
                                                                t183 = 0x2;
                                                            }
                                                        }
                                                    }
                                                }
                                            } else {
                                                t151 = *(int *)((a4 + 0x10));
                                                *(unsigned int *)(((int)stk + 52)) = t151;
                                                t183 = 0x0;
                                                if ((*(signed char *)((t151 + 0x0))) == 0) {
                                                    t183 = 0x0;
                                                    if (((((struct o2C_float *)((*(int *)(((int)stk + 52)))))->v)) > (((((struct o2C_float *)(a4))->v)) + 800.0f)) {
                                                        t156 = FUN_0c179ac0();
                                                        t157 = ((~(((~t156) + 0x1) & 0xF)) + 0x1);
                                                        if ((int)t156 >= 0) {
                                                            t157 = (t156 & 0xF);
                                                        }
                                                        t183 = 0x0;
                                                        if ((int)t157 < (int)0x8) {
                                                            t183 = 0x2;
                                                        }
                                                    }
                                                }
                                            }
                                            return ((int (*)(int, int, int))(FUN_0c0b2888))(a4, 0x7, t183);
                                        }
                                        t188 = FUN_0c179ac0();
                                        t189 = ((~(((~t188) + 0x1) & 0xF)) + 0x1);
                                        if ((int)t188 >= 0) {
                                            t189 = (t188 & 0xF);
                                        }
                                        if ((int)t189 < (int)0x8) {
                                            return ((int (*)(int, int, int))(FUN_0c0b2888))(a4, 0x5, 0x0);
                                        }
                                    }
                                } else {
                                    *(unsigned short *)((a4 + 0x1C)) = 0x1E;
                                    (((struct o37B0_float *)(a4))->v) = 1.0f;
                                    *(int *)((int)stk + 48) = 0x0;
                                    *(int *)((int)stk + 44) = 0x0;
                                    t192 = *(signed char *)((a4 + 0x1));
                                    *(unsigned int *)(((int)stk + 52)) = t192;
                                    *(int *)((int)stk + 40) = t192;
                                    FUN_0c07e79c(a4, (*(int *)(((int)stk + 52))), 0x0, 0x0, t192, 0x0, 0x0);
                                    (((struct o37B0_float *)(a4))->v) = ((((struct o3928_float *)(a4))->v));
                                    u196 = (((struct o37B0_float *)(a4))->v);
                                    t197 = *(int *)(((0x118 + a4) + 0x4));
                                    (((struct o90_float *)(((((struct o118_int *)(a4))->v))))->v) = u196;
                                    (((struct o90_float *)(t197))->v) = u196;
                                    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                                    FUN_0c0b2ac2(a4);
                                    FUN_0c037bf6(a4);
                                    if ((int)(*(signed char *)0xC542235) < (int)0x2) {
                                        return FUN_0c038362(a4);
                                    }
                                    t203 = FUN_0c04307c();
                                    if (t203 != 0) {
                                        t204 = ((int (*)(int, int, int))(FUN_0c0b2888))(a4, 0x7, 0x4);
                                        return FUN_0c038362(a4);
                                    }
                                    t205 = *(short *)((a4 + 0x1C));
                                    *(unsigned short *)((a4 + 0x1C)) = (t205 - 1);
                                    if ((int)(short)(t205 - 1) > 0) {
                                        return FUN_0c038362(a4);
                                    }
                                    t206 = FUN_0c0b2064(a4);
                                    if ((int)t206 >= 0) {
                                        t207 = FUN_0c179ac0();
                                        t208 = ((~(((~t207) + 0x1) & 0xF)) + 0x1);
                                        if ((int)t207 >= 0) {
                                            t208 = (t207 & 0xF);
                                        }
                                        if ((int)t208 < (int)0xE) {
                                            t210 = FUN_0c179ac0();
                                            t211 = ((~(((~t210) + 0x1) & 0xF)) + 0x1);
                                            if ((int)t210 >= 0) {
                                                t211 = (t210 & 0xF);
                                            }
                                            if ((int)t211 < (int)0xC) {
                                                return ((int (*)(int, int, int))(FUN_0c0b2888))(a4, 0x7, 0x1);
                                            }
                                            *(unsigned short *)((a4 + 0x1C)) = 0x3C;
                                            return 0x3C;
                                        }
                                        t213 = FUN_0c0b1d64(a4);
                                        if (t213 > 0.865999997f) {
                                            t214 = FUN_0c179ac0();
                                            t215 = ((~(((~t214) + 0x1) & 0xF)) + 0x1);
                                            if ((int)t214 >= 0) {
                                                t215 = (t214 & 0xF);
                                            }
                                            if ((int)t215 < (int)0xC) {
                                                return ((int (*)(int, int, int))(FUN_0c0b2888))(a4, 0x3, 0x0);
                                            }
                                            *(unsigned short *)((a4 + 0x1C)) = 0x3C;
                                            return 0x3C;
                                        }
                                        t217 = FUN_0c179ac0();
                                        t218 = ((~(((~t217) + 0x1) & 0xF)) + 0x1);
                                        if ((int)t217 >= 0) {
                                            t218 = (t217 & 0xF);
                                        }
                                        if ((int)t218 < (int)0x8) {
                                            t220 = FUN_0c0b1edc(a4);
                                            if ((int)t220 >= 0) {
                                                t221 = FUN_0c179ac0();
                                                t222 = ((~(((~t221) + 0x1) & 0xF)) + 0x1);
                                                if ((int)t221 >= 0) {
                                                    t222 = (t221 & 0xF);
                                                }
                                                t293 = 0x3;
                                                if ((int)t222 < (int)0xC) {
                                                } else {
                                                    t224 = *(int *)((a4 + 0x10));
                                                    *(unsigned int *)(((int)stk + 52)) = t224;
                                                    t293 = 0x0;
                                                    if ((*(signed char *)((t224 + 0x0))) == 0) {
                                                        t293 = 0x0;
                                                        if (((((struct o2C_float *)((*(int *)(((int)stk + 52)))))->v)) > (((((struct o2C_float *)(a4))->v)) + 800.0f)) {
                                                            t229 = FUN_0c179ac0();
                                                            t230 = ((~(((~t229) + 0x1) & 0xF)) + 0x1);
                                                            if ((int)t229 >= 0) {
                                                                t230 = (t229 & 0xF);
                                                            }
                                                            t293 = 0x0;
                                                            if ((int)t230 < (int)0x8) {
                                                                t293 = 0x2;
                                                            }
                                                        }
                                                    }
                                                }
                                            } else {
                                                t261 = *(int *)((a4 + 0x10));
                                                *(unsigned int *)(((int)stk + 52)) = t261;
                                                t293 = 0x0;
                                                if ((*(signed char *)((t261 + 0x0))) == 0) {
                                                    t293 = 0x0;
                                                    if (((((struct o2C_float *)((*(int *)(((int)stk + 52)))))->v)) > (((((struct o2C_float *)(a4))->v)) + 800.0f)) {
                                                        t266 = FUN_0c179ac0();
                                                        t267 = ((~(((~t266) + 0x1) & 0xF)) + 0x1);
                                                        if ((int)t266 >= 0) {
                                                            t267 = (t266 & 0xF);
                                                        }
                                                        t293 = 0x0;
                                                        if ((int)t267 < (int)0x8) {
                                                            t293 = 0x2;
                                                        }
                                                    }
                                                }
                                            }
                                            return ((int (*)(int, int, int))(FUN_0c0b2888))(a4, 0x7, t293);
                                        }
                                        t298 = FUN_0c179ac0();
                                        t299 = ((~(((~t298) + 0x1) & 0xF)) + 0x1);
                                        if ((int)t298 >= 0) {
                                            t299 = (t298 & 0xF);
                                        }
                                        if ((int)t299 < (int)0x8) {
                                            return ((int (*)(int, int, int))(FUN_0c0b2888))(a4, 0x5, 0x0);
                                        }
                                    } else {
                                        t301 = FUN_0c0b1d64(a4);
                                        if (t301 > 0.865999997f) {
                                            t302 = FUN_0c179ac0();
                                            t303 = ((~(((~t302) + 0x1) & 0xF)) + 0x1);
                                            if ((int)t302 >= 0) {
                                                t303 = (t302 & 0xF);
                                            }
                                            if ((int)t303 < (int)0xC) {
                                                return ((int (*)(int, int, int))(FUN_0c0b2888))(a4, 0x3, 0x0);
                                            }
                                            *(unsigned short *)((a4 + 0x1C)) = 0x3C;
                                            return 0x3C;
                                        }
                                        t305 = FUN_0c179ac0();
                                        t306 = ((~(((~t305) + 0x1) & 0xF)) + 0x1);
                                        if ((int)t305 >= 0) {
                                            t306 = (t305 & 0xF);
                                        }
                                        if ((int)t306 < (int)0x8) {
                                            t308 = FUN_0c0b1edc(a4);
                                            if ((int)t308 >= 0) {
                                                t309 = FUN_0c179ac0();
                                                t310 = ((~(((~t309) + 0x1) & 0xF)) + 0x1);
                                                if ((int)t309 >= 0) {
                                                    t310 = (t309 & 0xF);
                                                }
                                                t381 = 0x3;
                                                if ((int)t310 < (int)0xC) {
                                                } else {
                                                    t312 = *(int *)((a4 + 0x10));
                                                    *(unsigned int *)(((int)stk + 52)) = t312;
                                                    t381 = 0x0;
                                                    if ((*(signed char *)((t312 + 0x0))) == 0) {
                                                        t381 = 0x0;
                                                        if (((((struct o2C_float *)((*(int *)(((int)stk + 52)))))->v)) > (((((struct o2C_float *)(a4))->v)) + 800.0f)) {
                                                            t317 = FUN_0c179ac0();
                                                            t318 = ((~(((~t317) + 0x1) & 0xF)) + 0x1);
                                                            if ((int)t317 >= 0) {
                                                                t318 = (t317 & 0xF);
                                                            }
                                                            t381 = 0x0;
                                                            if ((int)t318 < (int)0x8) {
                                                                t381 = 0x2;
                                                            }
                                                        }
                                                    }
                                                }
                                            } else {
                                                t349 = *(int *)((a4 + 0x10));
                                                *(unsigned int *)(((int)stk + 52)) = t349;
                                                t381 = 0x0;
                                                if ((*(signed char *)((t349 + 0x0))) == 0) {
                                                    t381 = 0x0;
                                                    if (((((struct o2C_float *)((*(int *)(((int)stk + 52)))))->v)) > (((((struct o2C_float *)(a4))->v)) + 800.0f)) {
                                                        t354 = FUN_0c179ac0();
                                                        t355 = ((~(((~t354) + 0x1) & 0xF)) + 0x1);
                                                        if ((int)t354 >= 0) {
                                                            t355 = (t354 & 0xF);
                                                        }
                                                        t381 = 0x0;
                                                        if ((int)t355 < (int)0x8) {
                                                            t381 = 0x2;
                                                        }
                                                    }
                                                }
                                            }
                                            return ((int (*)(int, int, int))(FUN_0c0b2888))(a4, 0x7, t381);
                                        }
                                        t386 = FUN_0c179ac0();
                                        t387 = ((~(((~t386) + 0x1) & 0xF)) + 0x1);
                                        if ((int)t386 >= 0) {
                                            t387 = (t386 & 0xF);
                                        }
                                        if ((int)t387 < (int)0x8) {
                                            return ((int (*)(int, int, int))(FUN_0c0b2888))(a4, 0x5, 0x0);
                                        }
                                    }
                                }
                                *(unsigned short *)((a4 + 0x1C)) = 0x3C;
                                return FUN_0c038362(a4);
                            }
                            t389 = *(signed char *)((a4 + 0x3739));
                            if ((t389 != 1) && (t389 != 2)) {
                                if (t389 != 0) {
                                    return t389;
                                }
                                (((struct o445_uchar *)(a4))->v) = 0x0;
                                return ((int (*)(int, int, int, int))(FUN_0c0b2888))(a4, 0x0, 0x0, a7);
                            }
                            t394 = *(signed char *)((a4 + 0x16));
                            if (t394 != 0) {
                                if (t394 != 1) {
                                    return t394;
                                }
                                t396 = FUN_0c037bf6(a4);
                                if ((unsigned char)t396 == 0) {
                                    return FUN_0c038362(a4);
                                }
                                return ((int (*)(int, int, int))(FUN_0c0b2888))(a4, 0x0, 0x0);
                            }
                            if ((*(signed char *)((a4 + 0x3739))) == 1) {
                                (((struct o37B0_float *)(a4))->v) = 1.0f;
                                *(int *)((int)stk + 52) = 0x2;
                                *(int *)((int)stk + 48) = 0x4;
                                t404 = *(signed char *)((a4 + 0x1));
                                *(unsigned int *)(((int)stk + 56)) = t404;
                                t403 = t404;
                                *(int *)((int)stk + 44) = t403;
                                t402 = 0x2;
                                t406 = 0x2;
                            } else {
                                (((struct o37B0_float *)(a4))->v) = 1.0f;
                                *(int *)((int)stk + 52) = 0x3;
                                *(int *)((int)stk + 48) = 0x4;
                                t404 = *(signed char *)((a4 + 0x1));
                                *(unsigned int *)(((int)stk + 56)) = t404;
                                t403 = t404;
                                *(int *)((int)stk + 44) = t403;
                                t402 = 0x3;
                                t406 = 0x3;
                            }
                            FUN_0c07e79c(a4, t404, 0x4, t406, t403, 0x4, t402);
                            (((struct o37B0_float *)(a4))->v) = ((((struct o3928_float *)(a4))->v));
                            u410 = (((struct o37B0_float *)(a4))->v);
                            t411 = *(int *)(((0x118 + a4) + 0x4));
                            (((struct o90_float *)(((((struct o118_int *)(a4))->v))))->v) = u410;
                            (((struct o90_float *)(t411))->v) = u410;
                            FUN_0c059e60(a4, 0x22);
                            (((struct o445_uchar *)(a4))->v) = 0x0;
                            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                            t415 = FUN_0c037bf6(a4);
                            if ((unsigned char)t415 == 0) {
                                return FUN_0c038362(a4);
                            }
                            return ((int (*)(int, int, int))(FUN_0c0b2888))(a4, 0x0, 0x0);
                        }
                        t416 = *(signed char *)((a4 + 0x16));
                        if (t416 != 0) {
                            if (t416 != 1) {
                                return t416;
                            }
                            if (((((struct o160_float *)(a4))->v)) > 0.0f) {
                                t418 = (((struct o20_short *)(a4))->v);
                                (((struct o20_ushort *)(a4))->v) = (t418 - 1);
                                if ((int)(short)(t418 - 1) < 0) {
                                    t420 = ((int (*)(int, int, int, int))(FUN_0c144644))(((((struct o38F8_int *)(a4))->v)), a5, a6, a7);
                                    t422 = ((int (*)(int))(FUN_0c144644))((*(int *)(((0x38F8 + a4) + 0x4))));
                                    t424 = ((int (*)(int))(FUN_0c144644))((*(int *)(((0x38F8 + a4) + 0x8))));
                                    t426 = ((int (*)(int))(FUN_0c144644))((*(int *)(((0x38F8 + a4) + 0xC))));
                                    return ((int (*)(int, int, int))(FUN_0c0b2888))(a4, 0x10, 0x0);
                                }
                                return 0x20;
                            }
                            return 0x160;
                        }
                        FUN_0c0b281e(a4);
                        t428 = FUN_0c0b1c5c();
                        if ((int)t428 >= (int)0x2) {
                            t433 = (((FUN_0c0b1cf2()) << 2) << 1);
                            t434 = 0xC1C6B2C;
                        } else {
                            t433 = (((FUN_0c0b1cf2()) << 2) << 1);
                            t434 = 0xC1C6B28;
                        }
                        (((struct o20_ushort *)(a4))->v) = (*(int *)((t434 + t433)));
                        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                        if (((((struct o160_float *)(a4))->v)) > 0.0f) {
                            t439 = (((struct o20_short *)(a4))->v);
                            (((struct o20_ushort *)(a4))->v) = (t439 - 1);
                            if ((int)(short)(t439 - 1) < 0) {
                                t441 = ((int (*)(int))(FUN_0c144644))(((((struct o38F8_int *)(a4))->v)));
                                t443 = ((int (*)(int))(FUN_0c144644))((*(int *)(((0x38F8 + a4) + 0x4))));
                                t445 = ((int (*)(int))(FUN_0c144644))((*(int *)(((0x38F8 + a4) + 0x8))));
                                t447 = ((int (*)(int))(FUN_0c144644))((*(int *)(((0x38F8 + a4) + 0xC))));
                                return ((int (*)(int, int, int))(FUN_0c0b2888))(a4, 0x10, 0x0);
                            }
                            return 0x20;
                        }
                        return 0x160;
                    }
                    t448 = *(signed char *)((a4 + 0x16));
                    if (t448 != 0) {
                        if (t448 != 1) {
                            return t448;
                        }
                        t449 = FUN_0c037bf6(a4);
                        if ((unsigned char)t449 != 0) {
                            return ((int (*)(int, int, int))(FUN_0c0b2888))(a4, 0x0, 0x0);
                        }
                        return FUN_0c038362(a4);
                    }
                    (((struct oAC_ushort *)(a4))->v) = 0xF;
                    u450 = (((struct o378C_float *)(a4))->v);
                    (((struct o48_float *)(a4))->v) = u450;
                    (((struct o44_float *)(a4))->v) = u450;
                    (((struct o40_float *)(a4))->v) = u450;
                    (((struct o12E_ushort *)(a4))->v) = 0x10;
                    (((struct o126_uchar *)(a4))->v) = 0x0;
                    (((struct o445_uchar *)(a4))->v) = 0x0;
                    (((struct o37B0_float *)(a4))->v) = 1.0f;
                    *(int *)((int)stk + 44) = 0x0;
                    *(int *)((int)stk + 40) = 0x0;
                    t451 = *(signed char *)((a4 + 0x1));
                    *(unsigned int *)(((int)stk + 48)) = t451;
                    t452 = t451;
                    *(int *)((int)stk + 36) = t452;
                    FUN_0c07e79c(a4, t451, 0x0, 0x0, t452, 0x0, 0x0);
                    FUN_0c059e60(a4, 0x11);
                    FUN_0c059e60(a4, 0x4);
                    t456 = 0x0;
                    t457 = 0x0;
                    for (;;) {
                        t459 = *(signed char *)((0x1B + (*(int *)(((0x38F8 + a4) + (t456 << 2))))));
                        t456 = (t456 + 0x1);
                        if (t459 == 2) {
                            t457 = (t457 + 0x1);
                        }
                        if ((int)t456 >= (int)0x4) {
                            break;
                        }
                    }
                    if ((int)t457 >= (int)0x2) {
                        t462 = ((int (*)(int, int, int))(FUN_0c144644))(((((struct o38F8_int *)(a4))->v)), 0x4, t457);
                        t464 = ((int (*)(int))(FUN_0c144644))((*(int *)(((0x38F8 + a4) + 0x4))));
                        t466 = ((int (*)(int))(FUN_0c144644))((*(int *)(((0x38F8 + a4) + 0x8))));
                        t468 = ((int (*)(int))(FUN_0c144644))((*(int *)(((0x38F8 + a4) + 0xC))));
                    }
                    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                    t478 = FUN_0c037bf6(a4);
                    if ((unsigned char)t478 != 0) {
                        return ((int (*)(int, int, int))(FUN_0c0b2888))(a4, 0x0, 0x0);
                    }
                    return FUN_0c038362(a4);
                }
                t479 = *(signed char *)((a4 + 0x16));
                if (t479 != 0) {
                    if (t479 != 1) {
                        if (t479 != 2) {
                            return t479;
                        }
                        t480 = FUN_0c037bf6(a4);
                        if ((unsigned char)t480 != 0) {
                            return ((int (*)(int, int, int))(FUN_0c0b2888))(a4, 0x0, 0x0);
                        }
                        FUN_0c038362(a4);
                        t482 = *(short *)((a4 + 0x1C));
                        *(unsigned short *)((a4 + 0x1C)) = (t482 - 1);
                        t484 = (short)(t482 - 1);
                        if ((int)(short)(t482 - 1) <= 0) {
                            FUN_0c059e60(a4, 0x2);
                            *(unsigned short *)((a4 + 0x1C)) = 0x270F;
                            t484 = 0x270F;
                        }
                        return t484;
                    }
                    t486 = FUN_0c037bf6(a4);
                    if ((unsigned char)t486 == 0) {
                        FUN_0c038362(a4);
                        t488 = *(short *)((a4 + 0x1C));
                        *(unsigned short *)((a4 + 0x1C)) = (t488 - 1);
                        t491 = (short)(t488 - 1);
                        if ((int)(short)(t488 - 1) <= 0) {
                            FUN_0c059e60(a4, 0x1);
                            *(unsigned short *)((a4 + 0x1C)) = 0x3C;
                            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                            t491 = 0x16;
                        }
                        return t491;
                    }
                    return ((int (*)(int, int, int))(FUN_0c0b2888))(a4, 0x0, 0x0);
                }
                (((struct o37B0_float *)(a4))->v) = 1.0f;
                *(int *)((int)stk + 48) = 0x0;
                *(int *)((int)stk + 44) = 0x6;
                t494 = *(signed char *)((a4 + 0x1));
                *(unsigned int *)(((int)stk + 52)) = t494;
                t495 = t494;
                *(int *)((int)stk + 40) = t495;
                FUN_0c07e79c(a4, t494, 0x6, 0x0, t495, 0x6, 0x0);
                FUN_0c059e60(a4, 0x0);
                *(unsigned short *)((a4 + 0x1C)) = 0x50;
                (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                t499 = FUN_0c037bf6(a4);
                if ((unsigned char)t499 == 0) {
                    FUN_0c038362(a4);
                    t501 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t501 - 1);
                    t504 = (short)(t501 - 1);
                    if ((int)(short)(t501 - 1) <= 0) {
                        FUN_0c059e60(a4, 0x1);
                        *(unsigned short *)((a4 + 0x1C)) = 0x3C;
                        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                        t504 = 0x16;
                    }
                    return t504;
                }
                return ((int (*)(int, int, int))(FUN_0c0b2888))(a4, 0x0, 0x0);
            }
            t507 = *(signed char *)((a4 + 0x3732));
            if (t507 != 0) {
                if (t507 != 1) {
                    if (t507 != 2) {
                        if (t507 != 3) {
                            if (t507 != 4) {
                                return t507;
                            }
                            return FUN_0c0b4074(a4);
                        }
                        return FUN_0c0b3fe6(a4);
                    }
                    return FUN_0c0b3f2e(a4);
                }
                return FUN_0c0b3aac(a4, a5, a6, a7);
            }
            t508 = *(signed char *)((a4 + 0x16));
            if (t508 != 0) {
                if (t508 != 1) {
                    if (t508 != 2) {
                        if (t508 == 3) {
                            t509 = FUN_0c037bf6(a4);
                            if ((unsigned char)t509 == 0) {
                                return FUN_0c038362(a4);
                            }
                            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                            *(unsigned short *)((a4 + 0x1C)) = 0x3C;
                            *(unsigned short *)((a4 + 0x1E)) = 0x14;
                            (((struct o37B0_float *)(a4))->v) = 1.0f;
                            *(int *)((int)stk + 24) = 0x3;
                            *(int *)((int)stk + 20) = 0x1;
                            t511 = *(signed char *)((a4 + 0x1));
                            *(unsigned int *)(((int)stk + 28)) = t511;
                            t512 = t511;
                            *(int *)((int)stk + 16) = t512;
                            FUN_0c07e79c(a4, t511, 0x1, 0x3, t512, 0x1, 0x3);
                            (((struct o37B0_float *)(a4))->v) = ((((struct o3928_float *)(a4))->v));
                            u515 = (((struct o37B0_float *)(a4))->v);
                            t516 = *(int *)(((0x118 + a4) + 0x4));
                            (((struct o90_float *)(((((struct o118_int *)(a4))->v))))->v) = u515;
                            (((struct o90_float *)(t516))->v) = u515;
                            return (FUN_0c059e60(a4, 0x29));
                        }
                        if (t508 == 4) {
                            *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + 0x71C);
                            t520 = *(short *)((a4 + 0x1E));
                            *(unsigned short *)((a4 + 0x1E)) = (t520 - 1);
                            if ((int)(short)(t520 - 1) <= 0) {
                                FUN_0c059e60(a4, 0x29);
                                *(unsigned short *)((a4 + 0x1E)) = 0x14;
                            }
                            FUN_0c037bf6(a4);
                            t528 = *(short *)((a4 + 0x1C));
                            *(unsigned short *)((a4 + 0x1C)) = (t528 - 1);
                            if ((int)(short)(t528 - 1) <= 0) {
                                (((struct o37B0_float *)(a4))->v) = 1.0f;
                                *(int *)((int)stk + 24) = 0x4;
                                *(int *)((int)stk + 20) = 0x1;
                                t529 = *(signed char *)((a4 + 0x1));
                                *(unsigned int *)(((int)stk + 28)) = t529;
                                t530 = t529;
                                *(int *)((int)stk + 16) = t530;
                                FUN_0c07e79c(a4, t529, 0x1, 0x4, t530, 0x1, 0x4);
                                (((struct o37B0_float *)(a4))->v) = ((((struct o3928_float *)(a4))->v));
                                u533 = (((struct o37B0_float *)(a4))->v);
                                t534 = *(int *)(((0x118 + a4) + 0x4));
                                (((struct o90_float *)(((((struct o118_int *)(a4))->v))))->v) = u533;
                                (((struct o90_float *)(t534))->v) = u533;
                                FUN_0c059e60(a4, 0x22);
                                *(unsigned short *)((a4 + 0x1E)) = 0x28;
                                (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                                return 0x16;
                            }
                            return FUN_0c038362(a4);
                        }
                        if ((int)(*(short *)((a4 + 0x1E))) > 0) {
                            *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) - 1);
                            if ((*(short *)((a4 + 0x1E))) == 0) {
                                FUN_0c059e60(a4, 0x22);
                            }
                        }
                        t548 = FUN_0c037bf6(a4);
                        if ((unsigned char)t548 != 0) {
                            return ((int (*)(int, int, int))(FUN_0c0b2888))(a4, 0x0, 0x0);
                        }
                        return FUN_0c038362(a4);
                    }
                    t549 = (((struct o20_short *)(a4))->v);
                    *(unsigned short *)(((int)stk + 32)) = t549;
                    t550 = *(short *)((a4 + 0x1C));
                    *(unsigned int *)(((int)stk + 28)) = t550;
                    t554 = *(int *)((a4 + 0x38));
                    u555 = (((float)(t549 - t550) / (float)(*(short *)(((int)stk + 32)))) * (math_sin_angle16(((*(int *)(((int)stk + 28))) << 14))));
                    *(unsigned int *)((a4 + 0x38)) = (int)((float)t554 + ((u555 * 364.0f)));
                    *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
                    t558 = *(short *)((a4 + 0x1C));
                    t560 = t558;
                    if ((int)t558 <= 0) {
                        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                        t560 = 0x16;
                    }
                    return t560;
                }
                if ((int)(*(short *)((a4 + 0x1E))) > 0) {
                    *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) - 1);
                    if ((*(short *)((a4 + 0x1E))) == 0) {
                        FUN_0c059e60(a4, 0x22);
                    }
                }
                FUN_0c037bf6(a4);
                if (120.0f > ((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v))) {
                } else {
                    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                    *(volatile signed char *)0xC542242;
                    t581 = *(short *)((0xC1C6B88 + ((FUN_0c0b1cf2()) << 1)));
                    *(unsigned short *)((a4 + 0x1C)) = t581;
                    (((struct o20_ushort *)(a4))->v) = t581;
                }
                return FUN_0c038362(a4);
            }
            (((struct o37B0_float *)(a4))->v) = 1.0f;
            *(int *)((int)stk + 24) = 0x2;
            *(int *)((int)stk + 20) = 0x1;
            t588 = *(signed char *)((a4 + 0x1));
            *(unsigned int *)(((int)stk + 28)) = t588;
            t589 = t588;
            *(int *)((int)stk + 16) = t589;
            FUN_0c07e79c(a4, t588, 0x1, 0x2, t589, 0x1, 0x2);
            (((struct o37B0_float *)(a4))->v) = ((((struct o3928_float *)(a4))->v));
            u592 = (((struct o37B0_float *)(a4))->v);
            t593 = *(int *)(((0x118 + a4) + 0x4));
            (((struct o90_float *)(((((struct o118_int *)(a4))->v))))->v) = u592;
            (((struct o90_float *)(t593))->v) = u592;
            FUN_0c059e60(a4, 0x22);
            FUN_0c059e60(a4, 0x7);
            *(unsigned short *)((a4 + 0x1E)) = 0x28;
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
            if ((int)(*(short *)((a4 + 0x1E))) > 0) {
                *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) - 1);
                if ((*(short *)((a4 + 0x1E))) == 0) {
                    FUN_0c059e60(a4, 0x22);
                }
            }
            FUN_0c037bf6(a4);
            if (120.0f > ((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v))) {
            } else {
                (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                *(volatile signed char *)0xC542242;
                t616 = *(short *)((0xC1C6B88 + ((FUN_0c0b1cf2()) << 1)));
                *(unsigned short *)((a4 + 0x1C)) = t616;
                (((struct o20_ushort *)(a4))->v) = t616;
            }
            return FUN_0c038362(a4);
        }
        t623 = *(signed char *)((a4 + 0x16));
        if (t623 != 0) {
            if (t623 != 1) {
                if (t623 != 2) {
                    if (t623 == 3) {
                        FUN_0c037bf6(a4);
                        FUN_0c038362(a4);
                        math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
                        math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
                        *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + ((((struct o3868_int *)(a4))->v)));
                        t630 = *(short *)((a4 + 0x1C));
                        *(unsigned short *)((a4 + 0x1C)) = (t630 - 1);
                        t751 = (short)(t630 - 1);
                        if ((int)(short)(t630 - 1) <= 0) {
                            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                            t751 = 0x16;
                        }
                    } else {
                        if (t623 == 4) {
                            FUN_0c037bf6(a4);
                            FUN_0c038362(a4);
                            if (!(((((struct o50_float *)(a4))->v)) > 0.0f)) {
                                t638 = FUN_0c07ecc6(a4, 0x0, 0x0);
                                if (t638 != 0) {
                                    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                                    *(int *)((int)stk + 12) = 0x0;
                                    FUN_0c05258e(0x2, 0x28, 0x100, 0x3C, 0x0);
                                    FUN_0c059e60(a4, 0x21);
                                    (((struct o37B0_float *)(a4))->v) = 1.0f;
                                    *(int *)((int)stk + 8) = 0x9;
                                    *(int *)((int)stk + 4) = 0x0;
                                    t642 = *(signed char *)((a4 + 0x1));
                                    *(unsigned int *)(((int)stk + 16)) = t642;
                                    t643 = t642;
                                    *(int *)((int)stk + 0) = t643;
                                    FUN_0c07e79c(a4, t642, 0x0, 0x9, t643, 0x0, 0x9);
                                    (((struct o37B0_float *)(a4))->v) = ((((struct o3928_float *)(a4))->v));
                                    u646 = (((struct o37B0_float *)(a4))->v);
                                    t647 = *(int *)(((0x118 + a4) + 0x4));
                                    (((struct o90_float *)(((((struct o118_int *)(a4))->v))))->v) = u646;
                                    (((struct o90_float *)(t647))->v) = u646;
                                    FUN_0c0737e8(a4);
                                    t751 = (FUN_0c07c1f8(0x12));
                                } else {
                                    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
                                    t751 = (math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58)));
                                }
                            } else {
                                math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
                                t751 = (math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58)));
                            }
                        } else {
                            t659 = FUN_0c037bf6(a4);
                            if ((unsigned char)t659 != 0) {
                                t751 = (((int (*)(int, int, int))(FUN_0c0b2888))(a4, 0x0, 0x0));
                            } else {
                                t751 = (FUN_0c038362(a4));
                            }
                        }
                    }
                } else {
                    FUN_0c0b2ac2(a4);
                    FUN_0c037bf6(a4);
                    FUN_0c038362(a4);
                    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
                    math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
                    t675 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t675 - 1);
                    t751 = (short)(t675 - 1);
                    if ((int)(short)(t675 - 1) > 0) {
                    } else {
                        *(unsigned short *)((a4 + 0x1C)) = 0x28;
                        FUN_0c0e2390((((int)stk + 16) + 0x4), ((*(int *)((a4 + 0x10))) + 0x28), (a4 + 0x28));
                        t678 = FUN_0c0e2340((((int)stk + 16) + 0x4));
                        if (t678 != 0.0f) {
                            FUN_0c17c450((((int)stk + 16) + 0x4));
                        } else {
                            *(float *)(((int)stk + 20)) = 0.707000017f;
                            *(float *)(((int)stk + 28)) = 0.707000017f;
                            *(float *)(((int)stk + 24)) = 0.0f;
                        }
                        (((struct o3850_uint *)(a4))->v) = (math_atan2_angle16((*(float *)(((int)stk + 20))), (*(float *)(((int)stk + 28)))));
                        (((struct o3850_uint *)(a4))->v) = (((((struct o3850_int *)(a4))->v)) & 0xFFFF);
                        t688 = *(int *)((a4 + 0x38));
                        *(unsigned int *)((a4 + 0x38)) = (t688 & 0xFFFF);
                        (((struct o3868_uint *)(a4))->v) = (((((struct o3850_int *)(a4))->v)) - (t688 & 0xFFFF));
                        if ((int)((((struct o3868_int *)(a4))->v)) >= (int)0x8000) {
                            (((struct o3868_uint *)(a4))->v) = (((((struct o3868_int *)(a4))->v)) - 0x10000);
                        }
                        if ((int)((((struct o3868_int *)(a4))->v)) <= (int)0xFFFF8000) {
                            (((struct o3868_uint *)(a4))->v) = (((((struct o3868_int *)(a4))->v)) + 0x10000);
                        }
                        (((struct o3868_uint *)(a4))->v) = ((int)((int)((((struct o3868_int *)(a4))->v)) / (int)(*(short *)((a4 + 0x1C)))));
                        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                        t751 = 0x16;
                    }
                }
            } else {
                FUN_0c0b2ac2(a4);
                t713 = FUN_0c037bf6(a4);
                if ((unsigned char)t713 == 0) {
                    t751 = (FUN_0c038362(a4));
                } else {
                    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                    (((struct o37B0_float *)(a4))->v) = 1.0f;
                    *(int *)((int)stk + 12) = 0x8;
                    *(int *)((int)stk + 8) = 0x0;
                    t716 = *(signed char *)((a4 + 0x1));
                    *(unsigned int *)(((int)stk + 16)) = t716;
                    t717 = t716;
                    *(int *)((int)stk + 4) = t717;
                    FUN_0c07e79c(a4, t716, 0x0, 0x8, t717, 0x0, 0x8);
                    (((struct o5C_float *)(a4))->v) = -0.200000003f;
                    (((struct o50_float *)(a4))->v) = (-(((((struct o5C_float *)(a4))->v)) * 70.0f));
                    (((struct o60_float *)(a4))->v) = 0.0f;
                    (((struct o58_float *)(a4))->v) = 0.0f;
                    (((struct o54_float *)(a4))->v) = 0.0f;
                    (((struct o4C_float *)(a4))->v) = 0.0f;
                    *(unsigned short *)((a4 + 0x1C)) = 0x1E;
                    t751 = 0x1E;
                }
            }
        } else {
            (((struct o37B0_float *)(a4))->v) = 1.0f;
            *(int *)((int)stk + 12) = 0x7;
            *(int *)((int)stk + 8) = 0x0;
            t731 = *(signed char *)((a4 + 0x1));
            *(unsigned int *)(((int)stk + 16)) = t731;
            t732 = t731;
            *(int *)((int)stk + 4) = t732;
            FUN_0c07e79c(a4, t731, 0x0, 0x7, t732, 0x0, 0x7);
            (((struct o37B0_float *)(a4))->v) = ((((struct o3928_float *)(a4))->v));
            u735 = (((struct o37B0_float *)(a4))->v);
            t736 = *(int *)(((0x118 + a4) + 0x4));
            (((struct o90_float *)(((((struct o118_int *)(a4))->v))))->v) = u735;
            (((struct o90_float *)(t736))->v) = u735;
            (((struct o37A0_float *)(a4))->v) = 0.0f;
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
            FUN_0c0b2ac2(a4);
            t740 = FUN_0c037bf6(a4);
            if ((unsigned char)t740 == 0) {
                t751 = (FUN_0c038362(a4));
            } else {
                (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                (((struct o37B0_float *)(a4))->v) = 1.0f;
                *(int *)((int)stk + 12) = 0x8;
                *(int *)((int)stk + 8) = 0x0;
                t743 = *(signed char *)((a4 + 0x1));
                *(unsigned int *)(((int)stk + 16)) = t743;
                t744 = t743;
                *(int *)((int)stk + 4) = t744;
                FUN_0c07e79c(a4, t743, 0x0, 0x8, t744, 0x0, 0x8);
                (((struct o5C_float *)(a4))->v) = -0.200000003f;
                (((struct o50_float *)(a4))->v) = (-(((((struct o5C_float *)(a4))->v)) * 70.0f));
                (((struct o60_float *)(a4))->v) = 0.0f;
                (((struct o58_float *)(a4))->v) = 0.0f;
                (((struct o54_float *)(a4))->v) = 0.0f;
                (((struct o4C_float *)(a4))->v) = 0.0f;
                *(unsigned short *)((a4 + 0x1C)) = 0x1E;
                t751 = 0x1E;
            }
        }
        return t751;
    }
    t758 = *(signed char *)((a4 + 0x16));
    if (t758 != 0) {
        if (t758 != 1) {
            if (t758 != 2) {
                return t758;
            }
            t759 = FUN_0c037bf6(a4);
            if ((unsigned char)t759 != 0) {
                return ((int (*)(int, int, int))(FUN_0c0b2888))(a4, 0x0, 0x0);
            }
            return FUN_0c038362(a4);
        }
        t760 = FUN_0c037bf6(a4);
        if ((unsigned char)t760 != 0) {
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
            (((struct o37B0_float *)(a4))->v) = 1.0f;
            *(int *)((int)stk + 48) = 0x2;
            *(int *)((int)stk + 44) = 0x0;
            t762 = *(signed char *)((a4 + 0x1));
            *(unsigned int *)(((int)stk + 52)) = t762;
            t763 = t762;
            *(int *)((int)stk + 40) = t763;
            FUN_0c07e79c(a4, t762, 0x0, 0x2, t763, 0x0, 0x2);
            (((struct o37B0_float *)(a4))->v) = ((((struct o3928_float *)(a4))->v));
            u766 = (((struct o37B0_float *)(a4))->v);
            t768 = *(int *)(((0x118 + a4) + 0x4));
            (((struct o90_float *)(((((struct o118_int *)(a4))->v))))->v) = u766;
            (((struct o90_float *)(t768))->v) = u766;
            return 0x90;
        }
        return FUN_0c038362(a4);
    }
    (((struct o37B0_float *)(a4))->v) = 1.0f;
    *(int *)((int)stk + 48) = 0x1;
    *(int *)((int)stk + 44) = 0x0;
    t769 = *(signed char *)((a4 + 0x1));
    *(unsigned int *)(((int)stk + 52)) = t769;
    t770 = t769;
    *(int *)((int)stk + 40) = t770;
    FUN_0c07e79c(a4, t769, 0x0, 0x1, t770, 0x0, 0x1);
    (((struct o37B0_float *)(a4))->v) = ((((struct o3928_float *)(a4))->v));
    u773 = (((struct o37B0_float *)(a4))->v);
    t774 = *(int *)(((0x118 + a4) + 0x4));
    (((struct o90_float *)(((((struct o118_int *)(a4))->v))))->v) = u773;
    (((struct o90_float *)(t774))->v) = u773;
    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
    t777 = FUN_0c037bf6(a4);
    if ((unsigned char)t777 != 0) {
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        (((struct o37B0_float *)(a4))->v) = 1.0f;
        *(int *)((int)stk + 48) = 0x2;
        *(int *)((int)stk + 44) = 0x0;
        t779 = *(signed char *)((a4 + 0x1));
        *(unsigned int *)(((int)stk + 52)) = t779;
        t780 = t779;
        *(int *)((int)stk + 40) = t780;
        FUN_0c07e79c(a4, t779, 0x0, 0x2, t780, 0x0, 0x2);
        (((struct o37B0_float *)(a4))->v) = ((((struct o3928_float *)(a4))->v));
        u783 = (((struct o37B0_float *)(a4))->v);
        t785 = *(int *)(((0x118 + a4) + 0x4));
        (((struct o90_float *)(((((struct o118_int *)(a4))->v))))->v) = u783;
        (((struct o90_float *)(t785))->v) = u783;
        return 0x90;
    }
    return FUN_0c038362(a4);
}
