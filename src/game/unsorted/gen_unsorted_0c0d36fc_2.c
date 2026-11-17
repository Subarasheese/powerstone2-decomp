/* game/unsorted: functions 0C0D36FC-0C0D3C72, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC0_int { char p[0xC0]; int v; };
int FUN_0c03f346(int, int, int, int);
int thunk_FUN_0c05abb2(int, int);
int FUN_0c0d04c4(int, int);
int FUN_0c0d36fc(int);
int FUN_0c0d37c2(int, int);
int FUN_0c179ac0(void);
float math_sin_angle16(int);
int FUN_0c0d38b4(int a4, int a5, int a6, int a7);

int FUN_0c0d38b4(int a4, int a5, int a6, int a7)
{
    int stk[2];
    register int t2;
    int t3;
    register float u6;
    register int t34;
    register int t50;
    register int t62;
    register int t64;
    int t72;
    register int t130;
    register int t84;
    register float u88;
    register int t106;
    register int t120;
    register int t136;
    register float u158;
    register int t140;
    register int t164;
    register int t184;
    register float u206;
    register int t188;
    register int t212;
    register int t232;
    register int t240;
    register int t243;
    register int t254;
    register int t255;
    register int t258;
    register int t260;
    int t263;
    register int t320;
    register int t275;
    register float u279;
    register int t296;
    register int t310;
    register int t326;
    register float u348;
    register int t330;
    register int t354;
    register int t374;
    register float u396;
    register int t378;
    register int t402;
    register int t422;
    register int t429;
    register int t432;
    register float u182;
    register float u149;
    register float u173;
    register float u230;
    register float u197;
    register float u221;
    register float u238;
    register float u250;
    register float u372;
    register float u339;
    register float u363;
    register float u420;
    register float u387;
    register float u411;
    register float u427;
    register float u438;

    if ((*(signed char *)0xC54223C) != 0) {
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    t2 = *(signed char *)((a4 + 0x14));
    if (t2 != 0) {
        if (t2 != 1) {
            if (t2 == 2) {
                t3 = *(short *)0xC540994;
                if ((0x67 & t3) != 0) {
                    *(int *)((int)stk + 0) = (a4 + 0x30);
                    u6 = ((((struct o30_float *)(a4))->v));
                    u6 = u6 + 10.0f * (math_sin_angle16(((0x1F & t3) << 14)));
                    (((struct o30_float *)(a4))->v) = u6;
                }
                if ((int)(*(int *)((a4 + 0x3C))) <= (int)0x1555) {
                    *(unsigned int *)((a4 + 0x3C)) = ((*(int *)((a4 + 0x3C))) + 0x5B);
                } else {
                    if ((int)(*(int *)((a4 + 0x34))) <= (int)0x1555) {
                        *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) + 0x5B);
                        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) - 10.0f);
                    } else {
                        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) - 30.0f);
                        (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + 10.0f);
                    }
                }
                t34 = *(short *)((a4 + 0x1E));
                *(unsigned short *)((a4 + 0x1E)) = (t34 - 1);
                if ((int)(short)(t34 - 1) <= 0) {
                    (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) - 5);
                    if ((int)((((struct o20_short *)(a4))->v)) < (int)0x1E) {
                        (((struct o20_ushort *)(a4))->v) = 0x1E;
                    }
                    *(unsigned short *)((a4 + 0x1E)) = ((((struct o20_short *)(a4))->v));
                    FUN_0c179ac0();
                    FUN_0c0d36fc(a4);
                }
                t50 = (((struct o22_short *)(a4))->v);
                (((struct o22_ushort *)(a4))->v) = (t50 - 1);
                if ((int)(short)(t50 - 1) <= 0) {
                    (((struct o22_ushort *)(a4))->v) = (((int)((int)(FUN_0c179ac0()) % (int)0x3C)) + 0x1E);
                    thunk_FUN_0c05abb2(0x44, (a4 + 0x28));
                }
                t62 = *(short *)0xC540994;
                t64 = t62;
                if ((int)t62 <= 0) {
                    thunk_FUN_0c05abb2(0x4D, (a4 + 0x28));
                    (((struct o14_uchar *)(a4))->v) = 0x3;
                    t64 = 0x14;
                }
                return t64;
            }
            if (t2 == 3) {
                return FUN_0c03f346(a4, a5, a6, a7);
            }
            return t2;
        }
        t72 = *(signed char *)((a4 + 0x15));
        if (t72 != 0) {
            if ((t72 != 1) && (t72 != 2)) {
                if (t72 != 3) {
                    if (t72 != 4) {
                        t130 = t72;
                        if (t72 != 5) {
                        } else {
                            t84 = *(short *)((a4 + 0x1C));
                            *(unsigned short *)((a4 + 0x1C)) = (t84 - 1);
                            if (((short)(t84 - 1) & 103) != 0) {
                                *(int *)((int)stk + 0) = (a4 + 0x30);
                                u88 = ((((struct o30_float *)(a4))->v));
                                u88 = u88 + 10.0f * (math_sin_angle16(((0x1F & (*(short *)((a4 + 0x1C)))) << 14)));
                                (((struct o30_float *)(a4))->v) = u88;
                                *(unsigned int *)((a4 + 0x3C)) = (int)(math_sin_angle16((((((*(short *)0xC540994) & 0x3) << 2) << 2) - 24)));
                            }
                            if (((*(short *)((a4 + 0x1C))) & 127) == 0) {
                                thunk_FUN_0c05abb2(0x45, (a4 + 0x28));
                            }
                            t106 = *(short *)((a4 + 0x1E));
                            *(unsigned short *)((a4 + 0x1E)) = (t106 - 1);
                            if ((int)(short)(t106 - 1) <= 0) {
                                (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) - 5);
                                if ((int)((((struct o20_short *)(a4))->v)) < (int)0x14) {
                                    (((struct o20_ushort *)(a4))->v) = 0x14;
                                }
                                *(unsigned short *)((a4 + 0x1E)) = ((((struct o20_short *)(a4))->v));
                                FUN_0c179ac0();
                                FUN_0c0d36fc(a4);
                            }
                            t120 = *(signed char *)0xC54098D;
                            t130 = t120;
                            if (t120 != 8) {
                            } else {
                                (((struct o14_uchar *)(a4))->v) = 0x2;
                                (((struct o15_uchar *)(a4))->v) = 0x0;
                                (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x2);
                                *(unsigned short *)((a4 + 0x1C)) = (*(short *)0xC540994);
                                (((struct o22_ushort *)(a4))->v) = 0x1E;
                                t130 = (thunk_FUN_0c05abb2(0x44, (a4 + 0x28)));
                            }
                        }
                        return t130;
                    }
                    t136 = *(signed char *)((a4 + 0x16));
                    if (t136 != 0) {
                        u158 = 0.0f;
                        if (t136 != 1) {
                        } else {
                            (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) - 0.0f);
                            (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
                            t140 = (((struct o20_short *)(a4))->v);
                            (((struct o20_ushort *)(a4))->v) = (t140 - 1);
                            if ((int)(short)(t140 - 1) <= 0) {
                                FUN_0c0d37c2(a4, 0x0);
                            } else {
                                u149 = 0.0f;
                            }
                            u158 = u149;
                        }
                        u182 = u158;
                    } else {
                        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                        (((struct o4C_float *)(a4))->v) = 0.0f;
                        (((struct o20_ushort *)(a4))->v) = 0x50;
                        (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) - 0.0f);
                        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
                        t164 = (((struct o20_short *)(a4))->v);
                        (((struct o20_ushort *)(a4))->v) = (t164 - 1);
                        if ((int)(short)(t164 - 1) <= 0) {
                            FUN_0c0d37c2(a4, 0x0);
                        } else {
                            u173 = 0.0f;
                        }
                        u182 = u173;
                    }
                    return ((int (*)(int, int, int, int, float))(0xC0D3810))(a4, a5, a6, a7, u182);
                }
                t184 = *(signed char *)((a4 + 0x16));
                if (t184 != 0) {
                    u206 = 0.0f;
                    if (t184 != 1) {
                    } else {
                        (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) + 0.0f);
                        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
                        t188 = (((struct o20_short *)(a4))->v);
                        (((struct o20_ushort *)(a4))->v) = (t188 - 1);
                        if ((int)(short)(t188 - 1) <= 0) {
                            FUN_0c0d37c2(a4, 0x0);
                        } else {
                            u197 = 0.0f;
                        }
                        u206 = u197;
                    }
                    u230 = u206;
                } else {
                    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                    (((struct o4C_float *)(a4))->v) = -0.0f;
                    (((struct o20_ushort *)(a4))->v) = 0x50;
                    (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) + 0.0f);
                    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
                    t212 = (((struct o20_short *)(a4))->v);
                    (((struct o20_ushort *)(a4))->v) = (t212 - 1);
                    if ((int)(short)(t212 - 1) <= 0) {
                        FUN_0c0d37c2(a4, 0x0);
                    } else {
                        u221 = 0.0f;
                    }
                    u230 = u221;
                }
                return ((int (*)(int, int, int, int, float))(0xC0D3810))(a4, a5, a6, a7, u230);
            }
            t232 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t232 - 1);
            if ((int)(short)(t232 - 1) <= 0) {
                FUN_0c0d37c2(a4, 0x0);
            } else {
                u238 = 0.0f;
            }
            return ((int (*)(int, int, int, int, float))(0xC0D3810))(a4, a5, a6, a7, u238);
        }
        t240 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t240 - 1);
        if ((int)(short)(t240 - 1) <= 0) {
            t243 = 0x2;
            if (!(0.0f > ((((struct o28_float *)(a4))->v)))) {
                t243 = 0x1;
            }
            FUN_0c0d37c2(a4, t243);
        } else {
            u250 = 0.0f;
        }
        return ((int (*)(int, int, int, int, float))(0xC0D3810))(a4, a5, a6, a7, u250);
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    *(unsigned short *)((a4 + 0x1E)) = 0x0;
    (((struct o17_uchar *)(a4))->v) = 0x7;
    FUN_0c0d37c2(a4, 0x1);
    t254 = FUN_0c179ac0();
    t255 = ((~(((~t254) + 0x1) & 0x3)) + 0x1);
    if ((int)t254 >= 0) {
        t255 = (t254 & 0x3);
    }
    *(unsigned short *)((a4 + 0x1C)) = ((short)(t255 + 0x1) * (short)0x5A);
    FUN_0c0d04c4((0xAC + a4), (a4 + 0x34));
    t258 = 0x0;
    for (;;) {
        if ((int)t258 >= (int)((((struct oC0_int *)(a4))->v))) {
            break;
        }
        t260 = *(int *)((((t258 << 2) + (0xC4 + a4)) + 0x0));
        *(unsigned int *)(((int)stk + 4)) = t260;
        FUN_0c0d04c4(((*(int *)(((int)stk + 4))) + 0x6), (t260 + 0x78));
        t258 = (t258 + 0x1);
    }
    t263 = *(signed char *)((a4 + 0x15));
    if (t263 != 0) {
        if ((t263 != 1) && (t263 != 2)) {
            if (t263 != 3) {
                if (t263 != 4) {
                    t320 = t263;
                    if (t263 != 5) {
                    } else {
                        t275 = *(short *)((a4 + 0x1C));
                        *(unsigned short *)((a4 + 0x1C)) = (t275 - 1);
                        if (((short)(t275 - 1) & 103) != 0) {
                            *(int *)((int)stk + 0) = (a4 + 0x30);
                            u279 = ((((struct o30_float *)(a4))->v));
                            u279 = u279 + 10.0f * (math_sin_angle16(((0x1F & (*(short *)((a4 + 0x1C)))) << 14)));
                            (((struct o30_float *)(a4))->v) = u279;
                            *(unsigned int *)((a4 + 0x3C)) = (int)(math_sin_angle16((((((*(short *)0xC540994) & 0x3) << 2) << 2) - 24)));
                        }
                        if (((*(short *)((a4 + 0x1C))) & 127) == 0) {
                            thunk_FUN_0c05abb2(0x45, (a4 + 0x28));
                        }
                        t296 = *(short *)((a4 + 0x1E));
                        *(unsigned short *)((a4 + 0x1E)) = (t296 - 1);
                        if ((int)(short)(t296 - 1) <= 0) {
                            (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) - 5);
                            if ((int)((((struct o20_short *)(a4))->v)) < (int)0x14) {
                                (((struct o20_ushort *)(a4))->v) = 0x14;
                            }
                            *(unsigned short *)((a4 + 0x1E)) = ((((struct o20_short *)(a4))->v));
                            FUN_0c179ac0();
                            FUN_0c0d36fc(a4);
                        }
                        t310 = *(signed char *)0xC54098D;
                        t320 = t310;
                        if (t310 != 8) {
                        } else {
                            (((struct o14_uchar *)(a4))->v) = 0x2;
                            (((struct o15_uchar *)(a4))->v) = 0x0;
                            (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x2);
                            *(unsigned short *)((a4 + 0x1C)) = (*(short *)0xC540994);
                            (((struct o22_ushort *)(a4))->v) = 0x1E;
                            t320 = (thunk_FUN_0c05abb2(0x44, (a4 + 0x28)));
                        }
                    }
                    return t320;
                }
                t326 = *(signed char *)((a4 + 0x16));
                if (t326 != 0) {
                    u348 = 0.0f;
                    if (t326 != 1) {
                    } else {
                        (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) - 0.0f);
                        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
                        t330 = (((struct o20_short *)(a4))->v);
                        (((struct o20_ushort *)(a4))->v) = (t330 - 1);
                        if ((int)(short)(t330 - 1) <= 0) {
                            FUN_0c0d37c2(a4, 0x0);
                        } else {
                            u339 = 0.0f;
                        }
                        u348 = u339;
                    }
                    u372 = u348;
                } else {
                    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                    (((struct o4C_float *)(a4))->v) = 0.0f;
                    (((struct o20_ushort *)(a4))->v) = 0x50;
                    (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) - 0.0f);
                    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
                    t354 = (((struct o20_short *)(a4))->v);
                    (((struct o20_ushort *)(a4))->v) = (t354 - 1);
                    if ((int)(short)(t354 - 1) <= 0) {
                        FUN_0c0d37c2(a4, 0x0);
                    } else {
                        u363 = 0.0f;
                    }
                    u372 = u363;
                }
                return ((int (*)(int, int, int, int, float))(0xC0D3810))(a4, a5, a6, a7, u372);
            }
            t374 = *(signed char *)((a4 + 0x16));
            if (t374 != 0) {
                u396 = 0.0f;
                if (t374 != 1) {
                } else {
                    (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) + 0.0f);
                    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
                    t378 = (((struct o20_short *)(a4))->v);
                    (((struct o20_ushort *)(a4))->v) = (t378 - 1);
                    if ((int)(short)(t378 - 1) <= 0) {
                        FUN_0c0d37c2(a4, 0x0);
                    } else {
                        u387 = 0.0f;
                    }
                    u396 = u387;
                }
                u420 = u396;
            } else {
                (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                (((struct o4C_float *)(a4))->v) = -0.0f;
                (((struct o20_ushort *)(a4))->v) = 0x50;
                (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) + 0.0f);
                (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
                t402 = (((struct o20_short *)(a4))->v);
                (((struct o20_ushort *)(a4))->v) = (t402 - 1);
                if ((int)(short)(t402 - 1) <= 0) {
                    FUN_0c0d37c2(a4, 0x0);
                } else {
                    u411 = 0.0f;
                }
                u420 = u411;
            }
            return ((int (*)(int, int, int, int, float))(0xC0D3810))(a4, a5, a6, a7, u420);
        }
        t422 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t422 - 1);
        if ((int)(short)(t422 - 1) <= 0) {
            FUN_0c0d37c2(a4, 0x0);
        } else {
            u427 = 0.0f;
        }
        return ((int (*)(int, int, int, int, float))(0xC0D3810))(a4, a5, a6, a7, u427);
    }
    t429 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t429 - 1);
    if ((int)(short)(t429 - 1) <= 0) {
        t432 = 0x2;
        if (!(0.0f > ((((struct o28_float *)(a4))->v)))) {
            t432 = 0x1;
        }
        FUN_0c0d37c2(a4, t432);
    } else {
        u438 = 0.0f;
    }
    return ((int (*)(int, int, int, int, float))(0xC0D3810))(a4, a5, a6, a7, u438);
}
