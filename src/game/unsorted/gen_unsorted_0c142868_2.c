/* game/unsorted: functions 0C142868-0C142E62, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o22_short { char p[0x22]; short v; };
struct o24_float { char p[0x24]; float v; };
struct o404_int { char p[0x404]; int v; };
struct o74_float { char p[0x74]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c03f346(int);
int FUN_0c059e0e(int, int, int);
int FUN_0c059e9a(int, int, int);
extern int FUN_0c150010();
float math_signed_sqrt(float);
int math_atan_angle16(float);
int math_atan2_angle16(float, float);
int FUN_0c17c130(int, int, int);
float FUN_0c0e2220(int, int);
int FUN_0c0e2390(int, int, int);
float FUN_0c17c450(int);
extern int FUN_0c187798();
int FUN_0c142bdc(int a4, int a5, int a6);

int FUN_0c142bdc(int a4, int a5, int a6)
{
    int stk[6];
    register int t0;
    register float u2;
    register float u3;
    register float u4;
    register float t5;
    register float u10;
    register float t21;
    register float t23;
    register float t24;
    register int t27;
    register int t29;
    register int t30;
    register int t32;
    register int t49;
    register int t56;
    register int t57;
    register int t59;
    register int t76;
    register int t83;
    register int t84;
    register int t86;
    register int t103;
    register int t110;
    register int t111;
    register int t113;
    register int t130;
    register int t137;
    register int t146;
    register int t149;
    register float u170;
    register float u171;
    register float u172;
    register float t173;
    register float u178;
    register float t189;
    register float t191;
    register float t192;
    register int t195;
    register int t197;
    register int t198;
    register int t200;
    register int t217;
    register int t224;
    register int t225;
    register int t227;
    register int t244;
    register int t251;
    register int t252;
    register int t254;
    register int t271;
    register int t278;
    register int t279;
    register int t281;
    register int t298;
    register int t305;
    register int t308;
    int t16;
    register int t37;
    register int t38;
    register int t64;
    register int t65;
    register int t91;
    register int t92;
    register int t118;
    register int t119;
    int t184;
    register int t205;
    register int t206;
    register int t232;
    register int t233;
    register int t259;
    register int t260;
    register int t286;
    register int t287;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        t308 = t0;
        if (t0 != 1) {
        } else {
            FUN_0c0e2390((((int)stk + 0) + 0xC), (a4 + 0x28), (0x41C + a4));
            u2 = *(float *)(((int)stk + 12));
            u3 = *(float *)(((int)stk + 20));
            u4 = (u3 * u3);
            u4 = u4 + u2 * u2;
            t5 = math_signed_sqrt(u4);
            *(unsigned int *)((a4 + 0x38)) = (math_atan2_angle16((*(float *)(((int)stk + 12))), (*(float *)(((int)stk + 20)))));
            u10 = t5;
            if (t5 == 0.0f) {
                u10 = 9.99999975e-06f;
            }
            *(unsigned int *)((a4 + 0x34)) = (math_atan_angle16(((-(*(float *)(((int)stk + 16)))) / u10)));
            FUN_0c187798();
            if (((*(signed char *)((a4 + 0x131))) == 0) && (t16 = *(signed char *)((a4 + 0x132)), t16 == 0)) {
                if (((((struct o404_int *)(a4))->v)) != 0) {
                    FUN_0c187798();
                    t21 = FUN_0c17c450((((int)stk + 0) + 0xC));
                    if (t21 != 0.0f) {
                        FUN_0c187798();
                        t23 = FUN_0c17c450(((int)stk + 0));
                        if (t23 != 0.0f) {
                            t24 = FUN_0c0e2220((((int)stk + 0) + 0xC), ((int)stk + 0));
                            if (-0.0871559978f > t24) {
                                FUN_0c059e0e((*(signed char *)((a4 + 0x1))), 0x4B, (a4 + 0x28));
                                t27 = ((int (*)(int, float, float, float, float))(FUN_0c150010))((a4 + 0x28), 1.0f, 1.0f, 1.0f, 1.0f);
                                t308 = (FUN_0c03f346(a4));
                            } else {
                                t29 = *(short *)((a4 + 0x1E));
                                *(unsigned short *)((a4 + 0x1E)) = (t29 + 0x1);
                                if ((int)(short)(t29 + 0x1) <= (int)0xA) {
                                    t30 = (((struct oC8_int *)(a4))->v);
                                    (((struct o8C_float *)(t30))->v) = (((((struct o8C_float *)(t30))->v)) + 0.200000003f);
                                    t32 = (((struct oC8_int *)(a4))->v);
                                    if (((((struct o84_float *)(t32))->v)) > ((((struct o8C_float *)(t32))->v))) {
                                        t37 = 0x84;
                                        t38 = ((((struct oC8_int *)(a4))->v));
                                    } else {
                                        t37 = 0x8C;
                                        t38 = ((((struct oC8_int *)(a4))->v));
                                    }
                                    (((struct o24_float *)(t38))->v) = (*(float *)((t38 + t37)));
                                }
                                t49 = *(short *)((a4 + 0x1C));
                                *(unsigned short *)((a4 + 0x1C)) = (t49 - 1);
                                if ((int)(short)(t49 - 1) <= 0) {
                                    t308 = (FUN_0c03f346(a4));
                                } else {
                                    t308 = (FUN_0c17c130((a4 + 0x28), (a4 + 0x28), (a4 + 0x4C)));
                                }
                            }
                        } else {
                            t56 = *(short *)((a4 + 0x1E));
                            *(unsigned short *)((a4 + 0x1E)) = (t56 + 0x1);
                            if ((int)(short)(t56 + 0x1) <= (int)0xA) {
                                t57 = (((struct oC8_int *)(a4))->v);
                                (((struct o8C_float *)(t57))->v) = (((((struct o8C_float *)(t57))->v)) + 0.200000003f);
                                t59 = (((struct oC8_int *)(a4))->v);
                                if (((((struct o84_float *)(t59))->v)) > ((((struct o8C_float *)(t59))->v))) {
                                    t64 = 0x84;
                                    t65 = ((((struct oC8_int *)(a4))->v));
                                } else {
                                    t64 = 0x8C;
                                    t65 = ((((struct oC8_int *)(a4))->v));
                                }
                                (((struct o24_float *)(t65))->v) = (*(float *)((t65 + t64)));
                            }
                            t76 = *(short *)((a4 + 0x1C));
                            *(unsigned short *)((a4 + 0x1C)) = (t76 - 1);
                            if ((int)(short)(t76 - 1) <= 0) {
                                t308 = (FUN_0c03f346(a4));
                            } else {
                                t308 = (FUN_0c17c130((a4 + 0x28), (a4 + 0x28), (a4 + 0x4C)));
                            }
                        }
                    } else {
                        t83 = *(short *)((a4 + 0x1E));
                        *(unsigned short *)((a4 + 0x1E)) = (t83 + 0x1);
                        if ((int)(short)(t83 + 0x1) <= (int)0xA) {
                            t84 = (((struct oC8_int *)(a4))->v);
                            (((struct o8C_float *)(t84))->v) = (((((struct o8C_float *)(t84))->v)) + 0.200000003f);
                            t86 = (((struct oC8_int *)(a4))->v);
                            if (((((struct o84_float *)(t86))->v)) > ((((struct o8C_float *)(t86))->v))) {
                                t91 = 0x84;
                                t92 = ((((struct oC8_int *)(a4))->v));
                            } else {
                                t91 = 0x8C;
                                t92 = ((((struct oC8_int *)(a4))->v));
                            }
                            (((struct o24_float *)(t92))->v) = (*(float *)((t92 + t91)));
                        }
                        t103 = *(short *)((a4 + 0x1C));
                        *(unsigned short *)((a4 + 0x1C)) = (t103 - 1);
                        if ((int)(short)(t103 - 1) <= 0) {
                            t308 = (FUN_0c03f346(a4));
                        } else {
                            t308 = (FUN_0c17c130((a4 + 0x28), (a4 + 0x28), (a4 + 0x4C)));
                        }
                    }
                } else {
                    t110 = *(short *)((a4 + 0x1E));
                    *(unsigned short *)((a4 + 0x1E)) = (t110 + 0x1);
                    if ((int)(short)(t110 + 0x1) <= (int)0xA) {
                        t111 = (((struct oC8_int *)(a4))->v);
                        (((struct o8C_float *)(t111))->v) = (((((struct o8C_float *)(t111))->v)) + 0.200000003f);
                        t113 = (((struct oC8_int *)(a4))->v);
                        if (((((struct o84_float *)(t113))->v)) > ((((struct o8C_float *)(t113))->v))) {
                            t118 = 0x84;
                            t119 = ((((struct oC8_int *)(a4))->v));
                        } else {
                            t118 = 0x8C;
                            t119 = ((((struct oC8_int *)(a4))->v));
                        }
                        (((struct o24_float *)(t119))->v) = (*(float *)((t119 + t118)));
                    }
                    t130 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t130 - 1);
                    if ((int)(short)(t130 - 1) <= 0) {
                        t308 = (FUN_0c03f346(a4));
                    } else {
                        t308 = (FUN_0c17c130((a4 + 0x28), (a4 + 0x28), (a4 + 0x4C)));
                    }
                }
            } else {
                t137 = ((int (*)(int, float, float, float, float))(FUN_0c150010))((a4 + 0x28), 1.0f, 1.0f, 1.0f, 1.0f);
                t308 = (FUN_0c03f346(a4));
            }
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        t146 = ((int (*)(int, int, int, float, float, float, float))(FUN_0c150010))((a4 + 0x28), a5, a6, 1.0f, 1.0f, 1.0f, 1.0f);
        (((struct o74_float *)(((((struct oC8_int *)(a4))->v))))->v) = -5.5f;
        (((struct o8C_float *)(((((struct oC8_int *)(a4))->v))))->v) = 0.0f;
        t149 = (((struct oC8_int *)(a4))->v);
        *(unsigned short *)((t149 + 0x6)) = ((*(short *)((t149 + 0x6))) | 0x1000);
        if (((((struct o22_short *)(a4))->v)) == 0) {
            FUN_0c059e0e((*(signed char *)((a4 + 0x1))), 0x40, (a4 + 0x28));
        } else {
            if (((((struct o22_short *)(a4))->v)) == 1) {
                FUN_0c059e9a((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532498), 0x20, (a4 + 0x28));
            }
        }
        FUN_0c187798();
        FUN_0c0e2390((((int)stk + 0) + 0xC), (a4 + 0x28), (0x41C + a4));
        u170 = *(float *)(((int)stk + 12));
        u171 = *(float *)(((int)stk + 20));
        u172 = (u171 * u171);
        u172 = u172 + u170 * u170;
        t173 = math_signed_sqrt(u172);
        *(unsigned int *)((a4 + 0x38)) = (math_atan2_angle16((*(float *)(((int)stk + 12))), (*(float *)(((int)stk + 20)))));
        u178 = t173;
        if (t173 == 0.0f) {
            u178 = 9.99999975e-06f;
        }
        *(unsigned int *)((a4 + 0x34)) = (math_atan_angle16(((-(*(float *)(((int)stk + 16)))) / u178)));
        FUN_0c187798();
        if (((*(signed char *)((a4 + 0x131))) == 0) && (t184 = *(signed char *)((a4 + 0x132)), t184 == 0)) {
            if (((((struct o404_int *)(a4))->v)) != 0) {
                FUN_0c187798();
                t189 = FUN_0c17c450((((int)stk + 0) + 0xC));
                if (t189 != 0.0f) {
                    FUN_0c187798();
                    t191 = FUN_0c17c450(((int)stk + 0));
                    if (t191 != 0.0f) {
                        t192 = FUN_0c0e2220((((int)stk + 0) + 0xC), ((int)stk + 0));
                        if (-0.0871559978f > t192) {
                            FUN_0c059e0e((*(signed char *)((a4 + 0x1))), 0x4B, (a4 + 0x28));
                            t195 = ((int (*)(int, float, float, float, float))(FUN_0c150010))((a4 + 0x28), 1.0f, 1.0f, 1.0f, 1.0f);
                            t308 = (FUN_0c03f346(a4));
                        } else {
                            t197 = *(short *)((a4 + 0x1E));
                            *(unsigned short *)((a4 + 0x1E)) = (t197 + 0x1);
                            if ((int)(short)(t197 + 0x1) <= (int)0xA) {
                                t198 = (((struct oC8_int *)(a4))->v);
                                (((struct o8C_float *)(t198))->v) = (((((struct o8C_float *)(t198))->v)) + 0.200000003f);
                                t200 = (((struct oC8_int *)(a4))->v);
                                if (((((struct o84_float *)(t200))->v)) > ((((struct o8C_float *)(t200))->v))) {
                                    t205 = 0x84;
                                    t206 = ((((struct oC8_int *)(a4))->v));
                                } else {
                                    t205 = 0x8C;
                                    t206 = ((((struct oC8_int *)(a4))->v));
                                }
                                (((struct o24_float *)(t206))->v) = (*(float *)((t206 + t205)));
                            }
                            t217 = *(short *)((a4 + 0x1C));
                            *(unsigned short *)((a4 + 0x1C)) = (t217 - 1);
                            if ((int)(short)(t217 - 1) <= 0) {
                                t308 = (FUN_0c03f346(a4));
                            } else {
                                t308 = (FUN_0c17c130((a4 + 0x28), (a4 + 0x28), (a4 + 0x4C)));
                            }
                        }
                    } else {
                        t224 = *(short *)((a4 + 0x1E));
                        *(unsigned short *)((a4 + 0x1E)) = (t224 + 0x1);
                        if ((int)(short)(t224 + 0x1) <= (int)0xA) {
                            t225 = (((struct oC8_int *)(a4))->v);
                            (((struct o8C_float *)(t225))->v) = (((((struct o8C_float *)(t225))->v)) + 0.200000003f);
                            t227 = (((struct oC8_int *)(a4))->v);
                            if (((((struct o84_float *)(t227))->v)) > ((((struct o8C_float *)(t227))->v))) {
                                t232 = 0x84;
                                t233 = ((((struct oC8_int *)(a4))->v));
                            } else {
                                t232 = 0x8C;
                                t233 = ((((struct oC8_int *)(a4))->v));
                            }
                            (((struct o24_float *)(t233))->v) = (*(float *)((t233 + t232)));
                        }
                        t244 = *(short *)((a4 + 0x1C));
                        *(unsigned short *)((a4 + 0x1C)) = (t244 - 1);
                        if ((int)(short)(t244 - 1) <= 0) {
                            t308 = (FUN_0c03f346(a4));
                        } else {
                            t308 = (FUN_0c17c130((a4 + 0x28), (a4 + 0x28), (a4 + 0x4C)));
                        }
                    }
                } else {
                    t251 = *(short *)((a4 + 0x1E));
                    *(unsigned short *)((a4 + 0x1E)) = (t251 + 0x1);
                    if ((int)(short)(t251 + 0x1) <= (int)0xA) {
                        t252 = (((struct oC8_int *)(a4))->v);
                        (((struct o8C_float *)(t252))->v) = (((((struct o8C_float *)(t252))->v)) + 0.200000003f);
                        t254 = (((struct oC8_int *)(a4))->v);
                        if (((((struct o84_float *)(t254))->v)) > ((((struct o8C_float *)(t254))->v))) {
                            t259 = 0x84;
                            t260 = ((((struct oC8_int *)(a4))->v));
                        } else {
                            t259 = 0x8C;
                            t260 = ((((struct oC8_int *)(a4))->v));
                        }
                        (((struct o24_float *)(t260))->v) = (*(float *)((t260 + t259)));
                    }
                    t271 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t271 - 1);
                    if ((int)(short)(t271 - 1) <= 0) {
                        t308 = (FUN_0c03f346(a4));
                    } else {
                        t308 = (FUN_0c17c130((a4 + 0x28), (a4 + 0x28), (a4 + 0x4C)));
                    }
                }
            } else {
                t278 = *(short *)((a4 + 0x1E));
                *(unsigned short *)((a4 + 0x1E)) = (t278 + 0x1);
                if ((int)(short)(t278 + 0x1) <= (int)0xA) {
                    t279 = (((struct oC8_int *)(a4))->v);
                    (((struct o8C_float *)(t279))->v) = (((((struct o8C_float *)(t279))->v)) + 0.200000003f);
                    t281 = (((struct oC8_int *)(a4))->v);
                    if (((((struct o84_float *)(t281))->v)) > ((((struct o8C_float *)(t281))->v))) {
                        t286 = 0x84;
                        t287 = ((((struct oC8_int *)(a4))->v));
                    } else {
                        t286 = 0x8C;
                        t287 = ((((struct oC8_int *)(a4))->v));
                    }
                    (((struct o24_float *)(t287))->v) = (*(float *)((t287 + t286)));
                }
                t298 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t298 - 1);
                if ((int)(short)(t298 - 1) <= 0) {
                    t308 = (FUN_0c03f346(a4));
                } else {
                    t308 = (FUN_0c17c130((a4 + 0x28), (a4 + 0x28), (a4 + 0x4C)));
                }
            }
        } else {
            t305 = ((int (*)(int, float, float, float, float))(FUN_0c150010))((a4 + 0x28), 1.0f, 1.0f, 1.0f, 1.0f);
            t308 = (FUN_0c03f346(a4));
        }
    }
    return t308;
}
