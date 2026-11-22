/* Straight-line functions with calls and guards (batch gen_id): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o118_int { char p[0x118]; int v; };
struct o12_uchar { char p[0x12]; unsigned char v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2E_short { char p[0x2E]; short v; };
struct o2E_ushort { char p[0x2E]; unsigned short v; };
struct o30_float { char p[0x30]; float v; };
struct o30_short { char p[0x30]; short v; };
struct o30_ushort { char p[0x30]; unsigned short v; };
struct o34_short { char p[0x34]; short v; };
struct o34_ushort { char p[0x34]; unsigned short v; };
struct o36_short { char p[0x36]; short v; };
struct o36_ushort { char p[0x36]; unsigned short v; };
struct o37B8_float { char p[0x37B8]; float v; };
struct o380C_float { char p[0x380C]; float v; };
struct o3810_float { char p[0x3810]; float v; };
struct o3814_float { char p[0x3814]; float v; };
struct o3A_short { char p[0x3A]; short v; };
struct o3A_ushort { char p[0x3A]; unsigned short v; };
struct o3C_short { char p[0x3C]; short v; };
struct o3C_ushort { char p[0x3C]; unsigned short v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_float { char p[0x40]; float v; };
struct o430_short { char p[0x430]; short v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB2_short { char p[0xB2]; short v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c018e74(int);
int FUN_0c018e9c(int, int);
int FUN_0c018fd2(int);
int FUN_0c01c714(int, int, int);
int FUN_0c01cd2c(int);
int FUN_0c01d094(void);
int FUN_0c037bf6(int);
int FUN_0c03add8(int, int, int, int);
int FUN_0c03afdc(int, int, int, int);
int FUN_0c03c5c0(int, int, int, int, float, float, float, float, float, float, float, float);
int FUN_0c03c7ec(int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c0573cc(int, int, int);
int FUN_0c059e60(int, int);
int FUN_0c05aab6(int, int);
int FUN_0c0657d4(int, int);
int FUN_0c0659d6(int, int, int);
int FUN_0c07d030(int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c085d0c(int, int, int, int);
int FUN_0c0d04c4(int, int);
int FUN_0c0d36fc(int, int);
int FUN_0c0d37c2(int, int);
int FUN_0c0d3810(int);
int FUN_0c129b94(int, int);
int FUN_0c12cb8c(int, int);
int FUN_0c12d748(int, int);
int FUN_0c150d1e(int, int, int, int);
int FUN_0c150e52(int, int, int);
int FUN_0c150ed4(int);
extern int FUN_0c150f3c();
int FUN_0c150faa(int);
int FUN_0c2d16b8(int, int);
int FUN_0c2d5918(int, int, int);
int FUN_0c2e5952(int);
int FUN_0c2e5ea0(int);
int FUN_0c2e6310(void);
int FUN_0c2e638e(void);
int FUN_0c2e7200(int);
int FUN_0c2e732c(void);
int FUN_0c2e76c8(int, int, int, int);
int FUN_0c2ec8f4(void);
int kmiGetITPCurrent(int);
int kmiReadRegister(int);
int kmiStartupDMA(int, int, int);
int kmiWriteRegister(int, int);
int kmyMemCopy(int, int, int);
int kmyiWaitScanline0(void);
int math_atan_angle16(float);
float math_cos_angle16(int);
float math_signed_sqrt(float);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int nlRand(void);
int thunk_FUN_0c05abb2(int, int);
int thunk_FUN_0c2e3f7c(void);
int FUN_0c0d38b4(int a4, int a5, int a6, int a7);
int FUN_0c01e5dc(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11);
int FUN_0c2cb900(int a4);
int FUN_0c12c8d0(int a4, int a5, int a6, int a7);
int kmiCallbackEndOf(int a4, int a5, int a6, int a7);
float FUN_0c151000(int a4, int a5, int a6, int a7, float f4);
int FUN_0c093c8e(int a4);
int FUN_0c093a3c(int a4);
int FUN_0c2e55e8(void);

int FUN_0c0d38b4(int a4, int a5, int a6, int a7)
{
    int stk[2];
    register int t2;
    int t3;
    register float u6;
    register int t34;
    register int t40;
    register int t50;
    register int t62;
    register int t64;
    int t72;
    register int t130;
    register int t84;
    register float u88;
    register int t106;
    register int t112;
    register int t120;
    register int t136;
    register int t140;
    register int t164;
    register int t184;
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
    register int t302;
    register int t310;
    register int t326;
    register int t330;
    register int t354;
    register int t374;
    register int t378;
    register int t402;
    register int t422;
    register int t429;
    register int t432;

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
                    t40 = (int)((int)(nlRand()) % (int)0x3);
                    FUN_0c0d36fc(a4, (t40 + 0x6));
                }
                t50 = (((struct o22_short *)(a4))->v);
                (((struct o22_ushort *)(a4))->v) = (t50 - 1);
                if ((int)(short)(t50 - 1) <= 0) {
                    (((struct o22_ushort *)(a4))->v) = (((int)((int)(nlRand()) % (int)0x3C)) + 0x1E);
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
                                t112 = (int)((int)(nlRand()) % (int)0x3);
                                FUN_0c0d36fc(a4, (t112 + 0x3));
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
                        if (t136 != 1) {
                        } else {
                            (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) - 0.0f);
                            (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
                            t140 = (((struct o20_short *)(a4))->v);
                            (((struct o20_ushort *)(a4))->v) = (t140 - 1);
                            if ((int)(short)(t140 - 1) <= 0) {
                                FUN_0c0d37c2(a4, 0x0);
                            }
                        }
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
                        }
                    }
                    return FUN_0c0d3810(a4);
                }
                t184 = *(signed char *)((a4 + 0x16));
                if (t184 != 0) {
                    if (t184 != 1) {
                    } else {
                        (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) + 0.0f);
                        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
                        t188 = (((struct o20_short *)(a4))->v);
                        (((struct o20_ushort *)(a4))->v) = (t188 - 1);
                        if ((int)(short)(t188 - 1) <= 0) {
                            FUN_0c0d37c2(a4, 0x0);
                        }
                    }
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
                    }
                }
                return FUN_0c0d3810(a4);
            }
            t232 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t232 - 1);
            if ((int)(short)(t232 - 1) <= 0) {
                FUN_0c0d37c2(a4, 0x0);
            }
            return FUN_0c0d3810(a4);
        }
        t240 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t240 - 1);
        if ((int)(short)(t240 - 1) <= 0) {
            t243 = 0x2;
            if (!(0.0f > ((((struct o28_float *)(a4))->v)))) {
                t243 = 0x1;
            }
            FUN_0c0d37c2(a4, t243);
        }
        return FUN_0c0d3810(a4);
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    *(unsigned short *)((a4 + 0x1E)) = 0x0;
    (((struct o17_uchar *)(a4))->v) = 0x7;
    FUN_0c0d37c2(a4, 0x1);
    t254 = nlRand();
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
                            t302 = (int)((int)(nlRand()) % (int)0x3);
                            FUN_0c0d36fc(a4, (t302 + 0x3));
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
                    if (t326 != 1) {
                    } else {
                        (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) - 0.0f);
                        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
                        t330 = (((struct o20_short *)(a4))->v);
                        (((struct o20_ushort *)(a4))->v) = (t330 - 1);
                        if ((int)(short)(t330 - 1) <= 0) {
                            FUN_0c0d37c2(a4, 0x0);
                        }
                    }
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
                    }
                }
                return FUN_0c0d3810(a4);
            }
            t374 = *(signed char *)((a4 + 0x16));
            if (t374 != 0) {
                if (t374 != 1) {
                } else {
                    (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) + 0.0f);
                    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
                    t378 = (((struct o20_short *)(a4))->v);
                    (((struct o20_ushort *)(a4))->v) = (t378 - 1);
                    if ((int)(short)(t378 - 1) <= 0) {
                        FUN_0c0d37c2(a4, 0x0);
                    }
                }
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
                }
            }
            return FUN_0c0d3810(a4);
        }
        t422 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t422 - 1);
        if ((int)(short)(t422 - 1) <= 0) {
            FUN_0c0d37c2(a4, 0x0);
        }
        return FUN_0c0d3810(a4);
    }
    t429 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t429 - 1);
    if ((int)(short)(t429 - 1) <= 0) {
        t432 = 0x2;
        if (!(0.0f > ((((struct o28_float *)(a4))->v)))) {
            t432 = 0x1;
        }
        FUN_0c0d37c2(a4, t432);
    }
    return FUN_0c0d3810(a4);
}

int FUN_0c01e5dc(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11)
{
    int stk[1];

    register int R1;
    register int R2;
    register int R3;
    int R10;
    register float F0;
    register float F15;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_10;
    register int v0_11;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register int v0_9;
    v0_7 = a6;
    v0_8 = a7;
    v0_5 = (((struct o4_int *)0xC305050)->v);
    *(unsigned int *)(((int)stk + 0)) = ((((struct oC_int *)0xC305050)->v));
    v0_10 = (((struct o0_int *)0xC305050)->v);
    v0_11 = (v0_10);
    R10 = (0x1);
    v0_2 = (0xC305064);
    v0_3 = (0x0);
    v0_0 = (0xC305054);
    v0_4 = (0xC305050);
    v0_1 = (0xC30EF6C);
    v0_9 = (v0_5);
    v0_5 = (0x64);
    v0_6 = (0x63);
    if ((v0_10 == 0)) goto L_C01E638;
    if ((v0_11 == 1)) goto L_C01E658;
    if ((v0_11 == 2)) goto L_C01E6CC;
    if ((v0_11 != 3)) goto L_C01E61C;
    v0_7 = FUN_0c03c5c0(0x0, v0_9, v0_7, v0_8, f4, f5, f6, f7, f8, f9, f10, f11);
    v0_1 = (v0_7);
    if ((v0_7 != 0)) goto L_C01E74C;
    *(unsigned int *)((v0_4 + 0x0)) = 0x4;
    *(unsigned int *)((v0_0 + 0x0)) = v0_3;
    *(unsigned char *)0xC30B6FD = v0_3;
    L_C01E954:;
    v0_11 = (0x0);
    L_C01E956:;
    return v0_11;
    L_C01E74C:;
    if ((v0_1 != -1)) goto L_C01E758;
    goto L_C01E954;
    L_C01E758:;
    *(unsigned int *)((v0_0 + 0x0)) = v0_3;
    if (((*(int *)((v0_2 + 0x0))) != 0)) goto L_C01E764;
    *(unsigned int *)((v0_4 + 0x0)) = v0_6;
    goto L_C01E954;
    L_C01E764:;
    *(unsigned int *)((v0_4 + 0x0)) = v0_5;
    goto L_C01E954;
    L_C01E61C:;
    if ((v0_11 != 4)) goto L_C01E624;
    v0_11 = (v0_9);
    if ((v0_9 == 0)) goto L_C01E778;
    if ((v0_11 == 1)) goto L_C01E790;
    goto L_C01E954;
    L_C01E790:;
    v0_0 = *(short *)((v0_1 + 0x0));
    *(unsigned short *)((v0_1 + 0x0)) = (v0_0 - 1);
    if (((int)(short)(v0_0 - 1) <= 0)) goto L_C01E7A0;
    goto L_C01E954;
    L_C01E7A0:;
    v0_11 = (0x1);
    goto L_C01E956;
    L_C01E778:;
    if (((int)(*(int *)(((int)stk + 0))) <= 0)) goto L_C01E78C;
    FUN_0c018fd2((*(int *)(((int)stk + 0))));
    *(unsigned short *)0xC30EF6C = 0xC;
    L_C01E930:;
    *(unsigned int *)((v0_0 + 0x0)) = ((*(int *)((v0_0 + 0x0))) + 0x1);
    goto L_C01E954;
    L_C01E78C:;
    *(unsigned short *)((v0_1 + 0x0)) = v0_3;
    goto L_C01E930;
    L_C01E624:;
    if ((v0_11 != 99)) goto L_C01E62C;
    v0_11 = (v0_9);
    if ((v0_9 == 0)) goto L_C01E7E0;
    if ((v0_11 == 1)) goto L_C01E7EE;
    if ((v0_11 == 2)) goto L_C01E802;
    if ((v0_11 == 3)) goto L_C01E834;
    goto L_C01E954;
    L_C01E834:;
    v0_2 = *(short *)((v0_1 + 0x0));
    *(unsigned short *)((v0_1 + 0x0)) = (v0_2 - 1);
    if (((int)(short)(v0_2 - 1) <= 0)) goto L_C01E844;
    goto L_C01E954;
    L_C01E844:;
    *(unsigned int *)((v0_4 + 0x0)) = R10;
    (((struct o8_uint *)0xC305050)->v) = v0_3;
    *(unsigned int *)((v0_0 + 0x0)) = v0_3;
    goto L_C01E954;
    L_C01E802:;
    v0_1 = (short)(FUN_0c01cd2c(0x101)) != 0;
    if (v0_1) goto L_C01E814;
    goto L_C01E954;
    L_C01E814:;
    FUN_0c05aab6(0x0, 0x3);
    *(unsigned int *)((v0_2 + 0x0)) = R10;
    *(unsigned int *)((v0_0 + 0x0)) = ((*(int *)((v0_0 + 0x0))) + 0x1);
    FUN_0c018fd2(((((struct oC_int *)0xC305050)->v)));
    *(unsigned short *)0xC30EF6C = 0xC;
    goto L_C01E954;
    L_C01E7EE:;
    v0_2 = *(short *)((v0_1 + 0x0));
    *(unsigned short *)((v0_1 + 0x0)) = (v0_2 - 1);
    if (((int)(short)(v0_2 - 1) <= 0)) goto L_C01E7FE;
    goto L_C01E954;
    L_C01E7FE:;
    goto L_C01E930;
    L_C01E7E0:;
    FUN_0c018e74(0x3E);
    (((struct oC_uint *)0xC305050)->v) = 0x3E;
    L_C01E8CA:;
    *(unsigned short *)0xC30EF6C = 0x20;
    goto L_C01E930;
    L_C01E62C:;
    if ((v0_11 != 100)) goto L_C01E634;
    v0_11 = (v0_9);
    if ((v0_9 == 0)) goto L_C01E86E;
    if ((v0_11 == 1)) goto L_C01E8B0;
    if ((v0_11 == 2)) goto L_C01E8D2;
    if ((v0_11 == 3)) goto L_C01E8E2;
    if ((v0_11 == 4)) goto L_C01E90C;
    if ((v0_11 == 5)) goto L_C01E944;
    goto L_C01E954;
    L_C01E944:;
    v0_0 = *(short *)((v0_1 + 0x0));
    *(unsigned short *)((v0_1 + 0x0)) = (v0_0 - 1);
    if (((int)(short)(v0_0 - 1) > 0)) goto L_C01E954;
    v0_11 = (0xFFFFFFFD);
    goto L_C01E956;
    L_C01E90C:;
    v0_5 = *(short *)((v0_1 + 0x0));
    *(unsigned short *)((v0_1 + 0x0)) = (v0_5 - 1);
    if (((int)(short)(v0_5 - 1) > 0)) goto L_C01E954;
    if ((((((struct o8_int *)0xC305050)->v)) != 0)) goto L_C01E938;
    FUN_0c0573cc(0xFFFFFFFF, 0x0, 0x14);
    *(unsigned short *)0xC30EF6C = 0x14;
    goto L_C01E930;
    L_C01E938:;
    *(unsigned int *)((v0_4 + 0x0)) = R10;
    (((struct o8_uint *)0xC305050)->v) = v0_3;
    *(unsigned int *)((v0_0 + 0x0)) = v0_3;
    *(unsigned int *)((v0_2 + 0x0)) = R10;
    goto L_C01E954;
    L_C01E8E2:;
    FUN_0c01c714(0xC305058, 0x1, 0x2);
    v0_1 = (short)(FUN_0c01cd2c(0x101)) == 0;
    if (v0_1) goto L_C01E954;
    FUN_0c05aab6(0x0, 0x3);
    *(unsigned short *)0xC30EF6C = 0x10;
    goto L_C01E930;
    L_C01E8D2:;
    v0_2 = *(short *)((v0_1 + 0x0));
    *(unsigned short *)((v0_1 + 0x0)) = (v0_2 - 1);
    if (((int)(short)(v0_2 - 1) > 0)) goto L_C01E954;
    goto L_C01E930;
    L_C01E8B0:;
    v0_2 = *(short *)((v0_1 + 0x0));
    *(unsigned short *)((v0_1 + 0x0)) = (v0_2 - 1);
    if (((int)(short)(v0_2 - 1) > 0)) goto L_C01E954;
    FUN_0c018e9c(0x3F, 0xC305058);
    (((struct oC_uint *)0xC305050)->v) = 0x3F;
    goto L_C01E8CA;
    L_C01E86E:;
    if (((int)(*(int *)(((int)stk + 0))) <= 0)) goto L_C01E882;
    FUN_0c018fd2((*(int *)(((int)stk + 0))));
    *(unsigned short *)0xC30EF6C = 0xC;
    L_C01E884:;
    *(unsigned int *)((v0_0 + 0x0)) = ((*(int *)((v0_0 + 0x0))) + 0x1);
    (((struct o8_uint *)0xC305050)->v) = R10;
    goto L_C01E954;
    L_C01E882:;
    *(unsigned short *)((v0_1 + 0x0)) = v0_3;
    goto L_C01E884;
    L_C01E634:;
    goto L_C01E954;
    L_C01E6CC:;
    v0_7 = FUN_0c03c7ec(0x0);
    v0_1 = (v0_7);
    if ((v0_7 != 0)) goto L_C01E718;
    v0_1 = (v0_3);
    v0_9 = (0x8);
    v0_7 = (0xC30999E);
    v0_8 = (0xC83BBD4);
    L_C01E6E0:;
    if (((*(signed char *)((v0_7 + v0_1))) == (unsigned char)(*(signed char *)((((0x732 + v0_8) + v0_1) + 0x0))))) goto L_C01E704;
    if (((*(int *)((v0_2 + 0x0))) != 0)) goto L_C01E6FE;
    *(unsigned int *)((v0_4 + 0x0)) = v0_6;
    L_C01E700:;
    *(unsigned int *)((v0_0 + 0x0)) = v0_3;
    goto L_C01E954;
    L_C01E6FE:;
    *(unsigned int *)((v0_4 + 0x0)) = v0_5;
    goto L_C01E700;
    L_C01E704:;
    v0_10 = (int)(v0_1 + 0x1) < (int)v0_9;
    v0_1 = ((v0_1 + 0x1));
    if (v0_10) goto L_C01E6E0;
    *(unsigned int *)((v0_4 + 0x0)) = 0x3;
    *(unsigned int *)((v0_0 + 0x0)) = v0_3;
    FUN_0c01d094();
    goto L_C01E954;
    L_C01E718:;
    if ((v0_1 != -1)) goto L_C01E724;
    goto L_C01E954;
    L_C01E724:;
    if (!(((*(int *)((v0_2 + 0x0))) != 0))) goto L_C01E72A;
    *(unsigned int *)((v0_4 + 0x0)) = v0_5;
    goto L_C01E730;
    L_C01E72A:;
    *(unsigned int *)((v0_4 + 0x0)) = v0_6;
    L_C01E730:;
    *(unsigned int *)((v0_0 + 0x0)) = v0_3;
    goto L_C01E954;
    L_C01E658:;
    v0_10 = FUN_0c03add8(v0_1, v0_9, v0_7, v0_8);
    v0_1 = (v0_10);
    if (((int)v0_10 >= 0)) goto L_C01E668;
    goto L_C01E954;
    L_C01E668:;
    if (((v0_1 & R10) != 0)) goto L_C01E676;
    if (((*(int *)((v0_2 + 0x0))) == 0)) goto L_C01E72A;
    *(unsigned int *)((v0_4 + 0x0)) = v0_5;
    goto L_C01E730;
    L_C01E676:;
    v0_7 = FUN_0c03afdc(v0_1, v0_9, v0_7, v0_8);
    v0_1 = (v0_7);
    if (((int)v0_7 >= 0)) goto L_C01E686;
    goto L_C01E954;
    L_C01E686:;
    if (((v0_1 & R10) != 0)) goto L_C01E694;
    if (((*(int *)((v0_2 + 0x0))) == 0)) goto L_C01E72A;
    *(unsigned int *)((v0_4 + 0x0)) = v0_5;
    goto L_C01E730;
    L_C01E694:;
    *(unsigned int *)((v0_4 + 0x0)) = 0x2;
    goto L_C01E730;
    L_C01E638:;
    (((struct oC_uint *)0xC305050)->v) = 0xFFFFFFFF;
    *(unsigned int *)((v0_2 + 0x0)) = v0_3;
    *(unsigned int *)((v0_4 + 0x0)) = R10;
    if (((*(signed char *)0xC30B6FD) == 0)) goto L_C01E64E;
    goto L_C01E954;
    L_C01E64E:;
    *(unsigned int *)((v0_4 + 0x0)) = 0x3;
    goto L_C01E954;
}

int FUN_0c2cb900(int a4)
{
    int stk[2];
    register int t1;
    int t19;
    int t46;
    register int t55;
    register int t56;
    register int t75;
    register int t78;
    register int t79;
    register int t16;
    register int t17;
    register int t38;

    (((struct o10_uint *)0xC8D0C9C)->v) = (0xFFFF0000 & a4);
    *(unsigned int *)(((int)stk + 4)) = (kmiReadRegister(0x0));
    t1 = kmiReadRegister(0x4);
    (((struct o0_uint *)0xC8D0C9C)->v) = 0x5;
    if ((*(int *)(((int)stk + 4))) != 0x17FD11DB) {
        (((struct o0_uint *)0xC8D0C9C)->v) = 0x5;
        t16 = 0xDD18957;
        t17 = 0x0;
    } else {
        if (t1 == 1) {
            (((struct o0_uint *)0xC8D0C9C)->v) = 0x5;
            t16 = 0xDD18957;
            t17 = 0x0;
        } else {
            t16 = 0xDD18957;
            t17 = 0x0;
            if ((unsigned int)t1 >= (unsigned int)0x11) {
                (((struct o0_uint *)0xC8D0C9C)->v) = 0x6;
                t16 = 0x15D1C955;
                if ((0xFFFF0000 & a4) == 0) {
                    t16 = 0x15D1C951;
                }
                t17 = 0x800408;
            }
        }
    }
    t19 = *(int *)0xA05F689C;
    (((struct oC_uint *)0xC8D0C9C)->v) = t19;
    if (t19 != 0) {
        if (t19 != 1) {
            if (t19 != 2) {
                if ((t19 != 4) && ((t19 != 5) && (t19 != 6))) {
                    if (t19 != 8) {
                        if (t19 != 9) {
                            (((struct o4_uint *)0xC8D0C9C)->v) = 0xEF;
                        } else {
                            (((struct o4_uint *)0xC8D0C9C)->v) = 0x6F;
                        }
                    } else {
                        (((struct o4_uint *)0xC8D0C9C)->v) = 0x7F;
                    }
                    t38 = 0x101;
                } else {
                    (((struct o4_uint *)0xC8D0C9C)->v) = 0x7F;
                    t38 = 0x10101;
                }
            } else {
                (((struct o4_uint *)0xC8D0C9C)->v) = 0x3;
                t38 = 0x101;
            }
        } else {
            (((struct o4_uint *)0xC8D0C9C)->v) = 0x1;
            t38 = 0x0;
        }
    } else {
        (((struct o4_uint *)0xC8D0C9C)->v) = 0x0;
        t38 = 0x0;
    }
    kmiWriteRegister(0xA8, t16);
    kmiWriteRegister(0xA0, 0x20);
    kmiWriteRegister(0x8, 0x0);
    kmiWriteRegister(0xE4, 0x3);
    kmiWriteRegister(0x48, 0x9);
    kmyiWaitScanline0();
    t46 = kmiReadRegister(0x44);
    kmiWriteRegister(0x44, (0x800000 & t46));
    kmiWriteRegister(0x5C, 0x0);
    kmiWriteRegister(0x68, 0x2800000);
    kmiWriteRegister(0x6C, 0x1E00000);
    t55 = 0x110;
    t56 = 0x92039;
    if (((((struct o0_int *)0xC8D0C9C)->v)) == 6) {
        kmiWriteRegister(0x110, 0x93F39);
        t55 = 0x98;
        t56 = t17;
    }
    kmiWriteRegister(t55, t56);
    kmiWriteRegister(0x4C, 0xA0);
    kmiWriteRegister(0x74, 0x0);
    kmiWriteRegister(0x78, 0x3F800000);
    kmiWriteRegister(0x84, 0x0);
    kmiWriteRegister(0x30, t38);
    kmiWriteRegister(0xB0, 0x7F7F7F);
    kmiWriteRegister(0xB4, 0x7F7F7F);
    kmiWriteRegister(0xC0, 0x0);
    kmiWriteRegister(0xBC, 0xFFFFFFFF);
    kmiWriteRegister(0x80, 0x7);
    kmiWriteRegister(0x88, 0x3727C5A0);
    kmiWriteRegister(0x8C, 0x1203000);
    kmiWriteRegister(0x74, 0x1);
    if (((((struct o0_int *)0xC8D0C9C)->v)) != 6) {
        for (;;) {
        }
    }
    t75 = 0x7DF77;
    if (((((struct o0_int *)0xC8D0C9C)->v)) == 6) {
        t75 = 0x27DF77;
    }
    kmiWriteRegister(0x7C, t75);
    *(unsigned int *)(((int)stk + 0)) = 0x0;
    t78 = 0x0;
    t79 = 0xA5000000;
    for (;;) {
        kmyMemCopy(t79, ((int)stk + 0), 0x4);
        t78 = (t78 + 0x1);
        t79 = (t79 + 0x4);
        if ((int)t78 >= (int)0x200000) {
            break;
        }
    }
    return 0x0;
}

int FUN_0c12c8d0(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register float u0;
    register float u1;

    t0 = *(signed char *)((a4 + 0x14));
    t1 = *(int *)((a4 + 0x10));
    if (t0 != 0) {
        if (t0 == 1) {
            t0 = *(signed char *)((a4 + 0x15));
            if (t0 != 0) {
                t2 = t0;
                if (t0 != 1) {
                } else {
                    FUN_0c059e60(t1, 0x22);
                    (((struct o14_uchar *)(a4))->v) = 0xA;
                    t2 = 0x14;
                }
                t0 = t2;
            } else {
                u0 = math_cos_angle16(((-(*(int *)((a4 + 0x38)))) + 0x14000));
                u1 = (u0 * (math_sin_angle16(((-(*(int *)((a4 + 0x34)))) + 0x14000))));
                (((struct o4C_float *)(a4))->v) = (u1 * 40.0f);
                u0 = math_sin_angle16(((-(*(int *)((a4 + 0x38)))) + 0x14000));
                u1 = (u0 * (math_sin_angle16(((-(*(int *)((a4 + 0x34)))) + 0x14000))));
                (((struct o54_float *)(a4))->v) = (u1 * 40.0f);
                (((struct o50_float *)(a4))->v) = (-((math_cos_angle16(((-(*(int *)((a4 + 0x34)))) + 0x14000))) * 40.0f));
                math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
                if (((*(short *)((a4 + 0x1C))) & 0x3) == 0) {
                    FUN_0c12d748(a4, 0x0);
                }
                if ((*(short *)((a4 + 0x1E))) != 0) {
                    *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) - 1);
                } else {
                    (((struct o12E_ushort *)(a4))->v) = 0xF0;
                }
                t2 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t2 - 1);
                if ((short)(t2 - 1) != 0) {
                    t2 = FUN_0c0657d4(a4, 0x30);
                    if (t2 != 0) {
                        t2 = 0xA;
                        for (;;) {
                            if (t2 == 0) {
                                break;
                            }
                            FUN_0c12cb8c(a4, 0x0);
                            t2 = (t2 - 1);
                        }
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        t2 = 0x15;
                    } else {
                        t3 = FUN_0c0659d6(a4, 0x0, 0x63);
                        t4 = t3;
                        if (t3 != 0) {
                            t3 = 0xA;
                            for (;;) {
                                if (t3 == 0) {
                                    break;
                                }
                                FUN_0c12cb8c(a4, 0x2);
                                t3 = (t3 - 1);
                            }
                            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                            t4 = 0x15;
                        }
                        t2 = t4;
                    }
                    t3 = t2;
                } else {
                    t2 = 0xA;
                    for (;;) {
                        if (t2 == 0) {
                            break;
                        }
                        FUN_0c12cb8c(a4, 0x0);
                        t2 = (t2 - 1);
                    }
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    t3 = 0x15;
                }
                t0 = t3;
            }
            return t0;
        }
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        t2 = t0;
        if (t0 == 1) {
            FUN_0c059e60(t1, 0x22);
            (((struct o14_uchar *)(a4))->v) = 0xA;
            t2 = 0x14;
        }
        t0 = t2;
    } else {
        *(unsigned int *)((a4 + 0x34)) = (unsigned short)((*(int *)((a4 + 0x34))) + 0xB6);
        u0 = math_cos_angle16(((-(*(int *)((a4 + 0x38)))) + 0x14000));
        u1 = (u0 * (math_sin_angle16(((-(*(int *)((a4 + 0x34)))) + 0x14000))));
        (((struct o4C_float *)(a4))->v) = (u1 * 40.0f);
        u0 = math_sin_angle16(((-(*(int *)((a4 + 0x38)))) + 0x14000));
        u1 = (u0 * (math_sin_angle16(((-(*(int *)((a4 + 0x34)))) + 0x14000))));
        (((struct o54_float *)(a4))->v) = (u1 * 40.0f);
        (((struct o50_float *)(a4))->v) = (-((math_cos_angle16(((-(*(int *)((a4 + 0x34)))) + 0x14000))) * 40.0f));
        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
        (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o54_float *)(a4))->v)));
        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
        if (((*(short *)((a4 + 0x1C))) & 0x3) == 0) {
            FUN_0c12d748(a4, 0x0);
        }
        if ((*(short *)((a4 + 0x1E))) != 0) {
            *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) - 1);
        } else {
            (((struct o12E_ushort *)(a4))->v) = 0xF0;
        }
        t1 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
        if ((short)(t1 - 1) != 0) {
            t1 = FUN_0c0657d4(a4, 0x30);
            if (t1 != 0) {
                t1 = 0xA;
                for (;;) {
                    if (t1 == 0) {
                        break;
                    }
                    FUN_0c12cb8c(a4, 0x0);
                    t1 = (t1 - 1);
                }
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                t1 = 0x15;
            } else {
                t2 = FUN_0c0659d6(a4, 0x0, 0x63);
                t3 = t2;
                if (t2 != 0) {
                    t2 = 0xA;
                    for (;;) {
                        if (t2 == 0) {
                            break;
                        }
                        FUN_0c12cb8c(a4, 0x2);
                        t2 = (t2 - 1);
                    }
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    t3 = 0x15;
                }
                t1 = t3;
            }
            t2 = t1;
        } else {
            t1 = 0xA;
            for (;;) {
                if (t1 == 0) {
                    break;
                }
                FUN_0c12cb8c(a4, 0x0);
                t1 = (t1 - 1);
            }
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            t2 = 0x15;
        }
        t0 = t2;
    }
    return t0;
}

int kmiCallbackEndOf(int a4, int a5, int a6, int a7)
{
    int t18;

    register int R1;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    v0_4 = a4;
    v0_2 = a5;
    v0_5 = a6;
    v0_0 = (0xC2DF460);
    if (((*(int *)((v0_4 + 0x0))) != 17)) goto L_C2DEFF4;
    v0_1 = ((*(int *)((v0_0 + 0x18))));
    L_C2DEFF6:;
    if (!((v0_1 != 0))) goto L_C2DF27C;
    v0_2 = *(int *)((v0_4 + 0x0));
    v0_3 = (v0_2);
    v0_4 = (0xC2F1EC0);
    if ((v0_2 == 17)) goto L_C2DF026;
    if ((v0_3 == 18)) goto L_C2DF060;
    if ((v0_3 == 19)) goto L_C2DF066;
    if ((v0_3 == 25)) goto L_C2DF070;
    if ((v0_3 == 24)) goto L_C2DF076;
    if ((v0_3 == 23)) goto L_C2DF07C;
    if ((v0_3 == 22)) goto L_C2DF082;
    if ((v0_3 == 21)) goto L_C2DF0C0;
    goto L_C2DF0CA;
    L_C2DF27C:;
    return 0x1;
    L_C2DF0CA:;
    v0_3 = *(short *)((v0_1 + 0x1C));
    t18 = *(short *)((v0_1 + 0x1E));
    v0_2 = ((unsigned short)(v0_3 & t18));
    if (((unsigned short)(v0_3 & t18) == (unsigned short)(*(short *)((v0_1 + 0x1C))))) goto L_C2DF0E4;
    goto L_C2DF27C;
    L_C2DF0E4:;
    v0_4 = (0x0);
    v0_5 = (0x8);
    if (!(((*(int *)((v0_1 + 0x8))) == 4))) goto L_C2DF1E0;
    if (((unsigned int)(*(int *)((v0_1 + 0x30))) > (unsigned int)0x0)) goto L_C2DF0FE;
    goto L_C2DF1E0;
    L_C2DF1E0:;
    v0_6 = *(int *)((v0_1 + 0x20));
    v0_3 = (v0_6);
    if ((v0_6 == 0)) goto L_C2DF1F2;
    if ((v0_3 == 1)) goto L_C2DF20E;
    if (!((v0_3 == 2))) goto L_C2DF244;
    (((struct o3C_ushort *)(v0_0))->v) = (((((struct o3C_short *)(v0_0))->v)) - 1);
    (((struct o3A_ushort *)(v0_0))->v) = (((((struct o3A_short *)(v0_0))->v)) + 0x1);
    (((struct o3A_ushort *)(v0_0))->v) = (((((struct o3A_short *)(v0_0))->v)) & 0x1F);
    *(unsigned int *)((v0_0 + 0x28)) = v0_4;
    v0_3 = (0x3A);
    goto L_C2DF244;
    L_C2DF244:;
    if (((v0_5 & (*(int *)((v0_1 + 0x4)))) == 0)) goto L_C2DF24E;
    *(unsigned int *)((v0_0 + 0x1C)) = v0_4;
    L_C2DF250:;
    *(unsigned int *)((v0_1 + 0x24)) = ((int)((unsigned int)((((((*(int *)((v0_1 + 0x24))) - (*(int *)0xFFD8000C)) << 2) << 2) << 2) << 1) / (unsigned int)0x64));
    *(unsigned int *)((v0_1 + 0x28)) = v0_4;
    if (((*(int *)((v0_1 + 0x18))) == 0)) goto L_C2DF276;
    v0_0 = ((int (*)(int, int, int, int))((*(int *)((v0_1 + 0x18)))))(v0_1, v0_2, v0_5, a7);
    L_C2DF276:;
    kmiStartupDMA(v0_4, v0_2, v0_5);
    goto L_C2DF27C;
    L_C2DF24E:;
    *(unsigned int *)((v0_0 + 0x18)) = v0_4;
    goto L_C2DF250;
    L_C2DF20E:;
    (((struct o36_ushort *)(v0_0))->v) = (((((struct o36_short *)(v0_0))->v)) - 1);
    (((struct o34_ushort *)(v0_0))->v) = (((((struct o34_short *)(v0_0))->v)) + 0x1);
    (((struct o34_ushort *)(v0_0))->v) = (((((struct o34_short *)(v0_0))->v)) & 0x1F);
    *(unsigned int *)((v0_0 + 0x24)) = v0_4;
    v0_3 = (0x34);
    goto L_C2DF244;
    L_C2DF1F2:;
    (((struct o30_ushort *)(v0_0))->v) = (((((struct o30_short *)(v0_0))->v)) - 1);
    (((struct o2E_ushort *)(v0_0))->v) = (((((struct o2E_short *)(v0_0))->v)) + 0x1);
    (((struct o2E_ushort *)(v0_0))->v) = (((((struct o2E_short *)(v0_0))->v)) & 0x1F);
    *(unsigned int *)((v0_0 + 0x20)) = v0_4;
    v0_3 = (0x2E);
    goto L_C2DF244;
    L_C2DF0FE:;
    v0_2 = (0x1);
    if (((v0_5 & (*(int *)((v0_1 + 0x4)))) == 0)) goto L_C2DF152;
    *(unsigned int *)((v0_1 + 0x30)) = ((*(int *)((v0_1 + 0x30))) - 1);
    *(unsigned int *)((v0_1 + 0x10)) = ((*(int *)((v0_1 + 0x10))) + (*(int *)((v0_1 + 0x34))));
    *(unsigned int *)((v0_1 + 0x14)) = ((*(int *)((v0_1 + 0x14))) + (*(int *)((v0_1 + 0x38))));
    *(unsigned short *)((v0_1 + 0x1E)) = v0_4;
    *(volatile int *)0xFFA0002C;
    (((struct oC_uint *)0xFFA00020)->v) = v0_4;
    (((struct o0_uint *)0xFFA00020)->v) = (*(int *)((v0_1 + 0x10)));
    (((struct o8_uint *)0xFFA00020)->v) = ((unsigned int)((unsigned int)((unsigned int)(*(int *)((v0_1 + 0xC))) >> 2) >> 2) >> 1);
    (((struct oC_uint *)0xFFA00020)->v) = 0x12C1;
    (((struct o20_uint *)0xFFA00020)->v) = 0x8201;
    (((struct o0_uint *)0xA05F6800)->v) = (*(int *)((v0_1 + 0x14)));
    (((struct o4_uint *)0xA05F6800)->v) = (*(int *)((v0_1 + 0xC)));
    v0_0 = (0xA05F6808);
    L_C2DF194:;
    *(unsigned int *)((v0_0 + 0x0)) = v0_2;
    goto L_C2DF27C;
    L_C2DF152:;
    *(unsigned int *)((v0_1 + 0x30)) = ((*(int *)((v0_1 + 0x30))) - 1);
    *(unsigned int *)((v0_1 + 0x10)) = ((*(int *)((v0_1 + 0x10))) + (*(int *)((v0_1 + 0x34))));
    *(unsigned int *)((v0_1 + 0x14)) = ((*(int *)((v0_1 + 0x14))) + (*(int *)((v0_1 + 0x38))));
    *(unsigned short *)((v0_1 + 0x1E)) = v0_4;
    *(unsigned int *)0xA05F7C80 = 0x6702007F;
    (((struct o0_uint *)0xA05F7C00)->v) = (*(int *)((v0_1 + 0x14)));
    (((struct o4_uint *)0xA05F7C00)->v) = (*(int *)((v0_1 + 0x10)));
    (((struct o8_uint *)0xA05F7C00)->v) = (*(int *)((v0_1 + 0xC)));
    (((struct oC_uint *)0xA05F7C00)->v) = (*(int *)((v0_1 + 0x3C)));
    (((struct o10_uint *)0xA05F7C00)->v) = v0_4;
    (((struct o14_uint *)0xA05F7C00)->v) = v0_2;
    v0_0 = (0xA05F7C18);
    goto L_C2DF194;
    L_C2DF0C0:;
    v0_3 = (((*(short *)((v0_1 + 0x1E))) | 0x10));
    L_C2DF0C4:;
    *(unsigned short *)((v0_1 + 0x1E)) = v0_3;
    kmiGetITPCurrent((*(int *)((v0_1 + 0x30))));
    goto L_C2DF0CA;
    L_C2DF082:;
    v0_3 = (((*(short *)((v0_1 + 0x1E))) | 0x8));
    goto L_C2DF0C4;
    L_C2DF07C:;
    v0_3 = (((*(short *)((v0_1 + 0x1E))) | 0x4));
    goto L_C2DF0C4;
    L_C2DF076:;
    v0_3 = (((*(short *)((v0_1 + 0x1E))) | 0x2));
    goto L_C2DF0C4;
    L_C2DF070:;
    v0_3 = (((*(short *)((v0_1 + 0x1E))) | 0x1));
    goto L_C2DF0C4;
    L_C2DF066:;
    v0_2 = (0x100);
    L_C2DF068:;
    *(unsigned short *)((v0_1 + 0x1E)) = ((*(short *)((v0_1 + 0x1E))) | v0_2);
    goto L_C2DF0CA;
    L_C2DF060:;
    v0_2 = (0x8000);
    goto L_C2DF068;
    L_C2DF026:;
    v0_2 = (0x4000);
    goto L_C2DF068;
    L_C2DEFF4:;
    v0_1 = ((*(int *)((v0_0 + 0x1C))));
    goto L_C2DEFF6;
}

float FUN_0c151000(int a4, int a5, int a6, int a7, float f4)
{
    int stk[3];

    register int R1;
    register int R2;
    register int R3;
    register float F0;
    register float F2;
    register float F13;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_10;
    register int v0_11;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register int v0_9;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    v0_8 = a4;
    v0_3 = a5;
    v0_1 = a6;
    v0_2 = a7;
    w0_1 = f4;
    v0_5 = *(signed char *)((v0_8 + 0x14));
    v0_4 = (v0_5);
    v0_0 = (v0_8);
    w0_1 = (0.0500000007f);
    w0_0 = (0.0f);
    if ((v0_5 == 0)) goto L_C151034;
    if ((v0_4 != 1)) goto L_C151030;
    L_C151144:;
    *(unsigned int *)((v0_0 + 0x38)) = ((*(int *)((v0_0 + 0x38))) + 0x100);
    v0_5 = *(signed char *)((v0_0 + 0x15));
    v0_4 = (v0_5);
    if ((v0_5 == 0)) goto L_C151170;
    if (!((v0_4 == 1))) goto L_C15126E;
    v0_1 = ((int (*)(int, int, int, int, int))(FUN_0c150f3c))(v0_0, v0_3, v0_1, v0_2, *(int *)((int)stk + 0));
    FUN_0c150faa(v0_0);
    if ((!(0.0f > ((((struct o44_float *)(v0_0))->v))))) goto L_C15122E;
    (((struct o48_float *)(v0_0))->v) = w0_0;
    (((struct o44_float *)(v0_0))->v) = w0_0;
    (((struct o40_float *)(v0_0))->v) = w0_0;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    goto L_C15122E;
    L_C15126E:;
    return F0;
    L_C15122E:;
    w0_2 = (0.0f);
    if ((((((struct o44_float *)(v0_0))->v)) > 10.0f)) goto L_C151254;
    (((struct oB4_float *)(v0_0))->v) = (((((struct oB4_float *)(v0_0))->v)) - w0_1);
    w0_3 = (((struct oB8_float *)(v0_0))->v);
    (((struct oB8_float *)(v0_0))->v) = (w0_3 - w0_1);
    (((struct oBC_float *)(v0_0))->v) = (((((struct oBC_float *)(v0_0))->v)) - w0_1);
    w0_1 = ((w0_3 - w0_1));
    L_C151254:;
    v0_4 = (0xB4);
    if ((((((struct oB4_float *)(v0_0))->v)) > w0_2)) goto L_C15126E;
    *(float *)((v0_0 + v0_4)) = w0_0;
    *(float *)((v0_0 + (v0_4 + 0x4))) = w0_0;
    *(float *)((v0_0 + ((v0_4 + 0x4) + 0x4))) = w0_0;
    v0_4 = (((v0_4 + 0x4) + 0x4));
    goto L_C15126E;
    L_C151170:;
    FUN_0c150faa(v0_0);
    v0_3 = *(signed char *)((v0_0 + 0x2));
    FPUL_ = (v0_3);
    if (((float)v0_3 > ((((struct o40_float *)(v0_0))->v)))) goto L_C151190;
    v0_3 = *(signed char *)((v0_0 + 0x2));
    (((struct o40_float *)(v0_0))->v) = (float)v0_3;
    FPUL_ = (v0_3);
    L_C151190:;
    v0_3 = *(signed char *)((v0_0 + 0x2));
    FPUL_ = (v0_3);
    if (((float)v0_3 > ((((struct o48_float *)(v0_0))->v)))) goto L_C1511AC;
    v0_3 = *(signed char *)((v0_0 + 0x2));
    (((struct o48_float *)(v0_0))->v) = (float)v0_3;
    FPUL_ = (v0_3);
    L_C1511AC:;
    v0_3 = *(signed char *)((v0_0 + 0x2));
    v0_4 = (0x44);
    w0_1 = (1.5f);
    FPUL_ = (v0_3);
    if ((((float)v0_3 * 1.5f) > ((((struct o44_float *)(v0_0))->v)))) goto L_C15126E;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    (((struct o44_float *)(v0_0))->v) = ((float)(*(signed char *)((v0_0 + 0x2))) * w0_1);
    (((struct o5C_float *)(v0_0))->v) = -0.0250000004f;
    (((struct o58_float *)(v0_0))->v) = 0.0199999996f;
    (((struct o60_float *)(v0_0))->v) = 0.0199999996f;
    (((struct o4C_float *)(v0_0))->v) = w0_0;
    (((struct o54_float *)(v0_0))->v) = w0_0;
    (((struct o50_float *)(v0_0))->v) = w0_0;
    v0_4 = ((FUN_0c150d1e(((*(signed char *)((v0_0 + 0x2))) + 0x2), (v0_0 + 0x28), v0_1, v0_2)));
    goto L_C15126E;
    L_C151030:;
    v0_4 = ((FUN_0c03f346(v0_0, v0_3, v0_1, v0_2)));
    goto L_C15126E;
    L_C151034:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(v0_0))->v) = 0x1;
    *(unsigned char *)((((((struct oC4_int *)(v0_0))->v)) + 0x0)) = 0x1;
    v0_4 = (int)((int)(nlRand()) % (int)0x3);
    v0_5 = (0x14);
    v0_6 = (0xC179AC0);
    v0_6 = ((v0_4 + 0x3));
    v0_7 = (0x0);
    if (((int)(v0_4 + 0x3) <= 0)) goto L_C151108;
    L_C151060:;
    v0_8 = nlRand();
    v0_4 = (v0_8);
    if (((int)v0_8 < 0)) goto L_C15106C;
    v0_4 = ((v0_4 & 0xF));
    L_C151076:;
    v0_8 = nlRand();
    v0_9 = (((v0_4 << 8) << 2) << 2);
    v0_4 = (v0_8);
    v0_9 = v0_9;
    if (((int)v0_8 < 0)) goto L_C1510A8;
    v0_4 = ((v0_4 & 0x3));
    L_C1510B2:;
    v0_10 = *(signed char *)((v0_0 + 0x2));
    v0_11 = ((((v0_10 + 0x1) << 2) + v0_4));
    v0_8 = (v0_9);
    if (((int)(((v0_10 + 0x1) << 2) + v0_4) <= (int)v0_5)) goto L_C1510C6;
    v0_11 = (v0_5);
    L_C1510C6:;
    *(float *)(((int)stk + 0)) = ((math_sin_angle16(v0_8)) * (float)v0_11);
    *(float *)(((int)stk + 8)) = ((math_cos_angle16(v0_9)) * (float)v0_11);
    *(float *)(((int)stk + 4)) = (float)(((int)((int)(nlRand()) % (int)0x5)) + v0_11);
    FUN_0c150e52((*(signed char *)((v0_0 + 0x2))), (v0_0 + 0x28), ((int)stk + 0));
    v0_4 = (int)(v0_7 + 0x1) < (int)v0_6;
    v0_7 = ((v0_7 + 0x1));
    if (v0_4) goto L_C151060;
    L_C151108:;
    FUN_0c150ed4(v0_0);
    (((struct o44_float *)(v0_0))->v) = w0_0;
    (((struct o48_float *)(v0_0))->v) = 1.0f;
    (((struct o40_float *)(v0_0))->v) = 1.0f;
    (((struct o50_float *)(v0_0))->v) = w0_0;
    (((struct o5C_float *)(v0_0))->v) = 0.5f;
    (((struct o58_float *)(v0_0))->v) = w0_1;
    (((struct o60_float *)(v0_0))->v) = w0_1;
    (((struct oAC_ushort *)(v0_0))->v) = (((((struct oAC_short *)(v0_0))->v)) | 0x200);
    (((struct oB4_float *)(v0_0))->v) = 1.0f;
    (((struct oB8_float *)(v0_0))->v) = 1.0f;
    (((struct oBC_float *)(v0_0))->v) = 1.0f;
    goto L_C151144;
    L_C1510A8:;
    v0_4 = (((~(((~v0_4) + 0x1) & 0x3)) + 0x1));
    goto L_C1510B2;
    L_C15106C:;
    v0_4 = (((~(((~v0_4) + 0x1) & 0xF)) + 0x1));
    goto L_C151076;
}

int FUN_0c093c8e(int a4)
{
    int stk[10];
    register float u5;
    register int t13;
    register int t17;
    register float u18;
    register float u19;
    register float u20;
    register float u21;
    register float u22;
    register float u23;
    register float u24;
    register float u26;
    register float u28;
    register int t30;
    register int t32;
    register float u35;
    register float t36;
    register int t37;
    register int t39;
    register int t53;
    register int t56;
    register int t107;
    register int t69;
    register int t71;
    register int t74;
    register int t75;
    register int t77;
    register int t78;
    register int t82;
    register int t83;
    register int t84;
    register int t85;

    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    u5 = 20.0f;
    if ((*(signed char *)((a4 + 0x375A))) == 0) {
        u5 = 10.0f;
    }
    (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) - (((((struct o4C_float *)(a4))->v)) / u5));
    (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) - (((((struct o50_float *)(a4))->v)) / u5));
    (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) - (((((struct o54_float *)(a4))->v)) / u5));
    t13 = FUN_0c037bf6(a4);
    if ((unsigned char)t13 != 0) {
        FUN_0c085d0c(a4, 0x0, 0x0, 0x0);
    }
    t17 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t17 + 0x1);
    if ((short)(t17 + 0x1) == 12) {
        u18 = (((struct o28_float *)(a4))->v);
        u19 = (((struct o380C_float *)(a4))->v);
        u20 = (((struct o2C_float *)(a4))->v);
        u21 = (((struct o3810_float *)(a4))->v);
        u22 = (((struct o30_float *)(a4))->v);
        u23 = (((struct o3814_float *)(a4))->v);
        u24 = (u19 - u18);
        if ((u19 - u18) == 0.0f) {
            u24 = 9.99999997e-07f;
        }
        u26 = (u21 - u20);
        if ((u21 - u20) == 0.0f) {
            u26 = 9.99999997e-07f;
        }
        u28 = (u23 - u22);
        if ((u23 - u22) == 0.0f) {
            u28 = 9.99999997e-07f;
        }
        t30 = math_atan_angle16(((-u28) / u24));
        t32 = t30;
        if (0.0f > u24) {
            t32 = (t30 + 0x8000);
        }
        *(unsigned int *)((a4 + 0x38)) = (unsigned short)(t32 + 0x4000);
        if ((*(signed char *)((a4 + 0x375A))) != 0) {
            u35 = (u28 * u28);
            u35 = u35 + u24 * u24;
            t36 = math_signed_sqrt(u35);
            t37 = math_atan_angle16(((-t36) / u26));
            t39 = t37;
            if (0.0f > u26) {
                t39 = (t37 + 0x8000);
            }
            *(unsigned int *)((a4 + 0x34)) = (-(unsigned short)(t39 + 0x4000));
        }
        FUN_0c129b94(a4, 0x1);
        FUN_0c059e60(a4, 0x0);
        FUN_0c059e60(a4, 0x20);
    }
    t53 = *(short *)((a4 + 0x1C));
    if (((int)t53 >= (int)0x2) && ((int)t53 <= (int)0x16)) {
        t56 = (((struct o430_short *)(a4))->v);
        if ((0x200 & (unsigned short)t56) == 0) {
            if ((0x80 & (unsigned short)t56) != 0) {
                *(unsigned short *)((a4 + 0x1E)) = 0x1;
            }
        } else {
            *(unsigned short *)((a4 + 0x1E)) = 0x1;
        }
    }
    t107 = 0x37B8;
    if (((((struct o37B8_float *)(a4))->v)) != 0.0f) {
        t69 = *(short *)((a4 + 0x1C));
        t107 = t69;
        if ((int)t69 >= (int)0x11) {
            t71 = *(short *)((a4 + 0x1E));
            t107 = t71;
            if (t71 != 0) {
                FUN_0c07d030(a4, 0x0);
                if ((*(signed char *)((a4 + 0x375A))) == 0) {
                    *(int *)((int)stk + 8) = 0x10;
                    *(int *)((int)stk + 4) = 0x1;
                    t74 = *(signed char *)((a4 + 0x1));
                    *(unsigned int *)(((int)stk + 12)) = t74;
                    t75 = t74;
                    *(int *)((int)stk + 0) = t75;
                    FUN_0c07e79c(a4, t74, 0x1, 0x10, t75, 0x1, 0x10);
                } else {
                    *(int *)((int)stk + 8) = 0x13;
                    *(int *)((int)stk + 4) = 0x1;
                    t77 = *(signed char *)((a4 + 0x1));
                    *(unsigned int *)(((int)stk + 12)) = t77;
                    t78 = t77;
                    *(int *)((int)stk + 0) = t78;
                    FUN_0c07e79c(a4, t77, 0x1, 0x13, t78, 0x1, 0x13);
                }
                t82 = *(int *)(((0x118 + a4) + 0x4));
                t83 = (((struct o118_int *)(a4))->v);
                (((struct oA0_float *)(t82))->v) = 1.0f;
                (((struct o9C_float *)(t82))->v) = 1.0f;
                (((struct oA0_float *)(t83))->v) = 1.0f;
                (((struct o9C_float *)(t83))->v) = 1.0f;
                t84 = *(int *)(((0x118 + a4) + 0x4));
                t85 = (((struct o118_int *)(a4))->v);
                (((struct o98_float *)(t84))->v) = 1.0f;
                (((struct o98_float *)(t85))->v) = 1.0f;
                (((struct o94_float *)(t84))->v) = 1.0f;
                (((struct o94_float *)(t85))->v) = 1.0f;
                *(unsigned short *)((a4 + 0x1C)) = 0x0;
                *(unsigned short *)((a4 + 0x1E)) = 0x0;
                (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                t107 = 0x17;
            }
        }
    }
    return t107;
}

int FUN_0c093a3c(int a4)
{
    int stk[10];
    register float u5;
    register int t13;
    register int t17;
    register float u18;
    register float u19;
    register float u20;
    register float u21;
    register float u22;
    register float u23;
    register float u24;
    register float u26;
    register float u28;
    register int t30;
    register int t32;
    register float u35;
    register float t36;
    register int t37;
    register int t39;
    register int t53;
    register int t56;
    register int t107;
    register int t69;
    register int t71;
    register int t74;
    register int t75;
    register int t77;
    register int t78;
    register int t82;
    register int t83;
    register int t84;
    register int t85;

    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    u5 = 20.0f;
    if ((*(signed char *)((a4 + 0x375A))) == 0) {
        u5 = 10.0f;
    }
    (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) - (((((struct o4C_float *)(a4))->v)) / u5));
    (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) - (((((struct o50_float *)(a4))->v)) / u5));
    (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) - (((((struct o54_float *)(a4))->v)) / u5));
    t13 = FUN_0c037bf6(a4);
    if ((unsigned char)t13 != 0) {
        FUN_0c085d0c(a4, 0x0, 0x0, 0x0);
    }
    t17 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t17 + 0x1);
    if ((short)(t17 + 0x1) == 14) {
        u18 = (((struct o28_float *)(a4))->v);
        u19 = (((struct o380C_float *)(a4))->v);
        u20 = (((struct o2C_float *)(a4))->v);
        u21 = (((struct o3810_float *)(a4))->v);
        u22 = (((struct o30_float *)(a4))->v);
        u23 = (((struct o3814_float *)(a4))->v);
        u24 = (u19 - u18);
        if ((u19 - u18) == 0.0f) {
            u24 = 9.99999997e-07f;
        }
        u26 = (u21 - u20);
        if ((u21 - u20) == 0.0f) {
            u26 = 9.99999997e-07f;
        }
        u28 = (u23 - u22);
        if ((u23 - u22) == 0.0f) {
            u28 = 9.99999997e-07f;
        }
        t30 = math_atan_angle16(((-u28) / u24));
        t32 = t30;
        if (0.0f > u24) {
            t32 = (t30 + 0x8000);
        }
        *(unsigned int *)((a4 + 0x38)) = (unsigned short)(t32 + 0x4000);
        if ((*(signed char *)((a4 + 0x375A))) != 0) {
            u35 = (u28 * u28);
            u35 = u35 + u24 * u24;
            t36 = math_signed_sqrt(u35);
            t37 = math_atan_angle16(((-t36) / u26));
            t39 = t37;
            if (0.0f > u26) {
                t39 = (t37 + 0x8000);
            }
            *(unsigned int *)((a4 + 0x34)) = (-(unsigned short)(t39 + 0x4000));
        }
        FUN_0c129b94(a4, 0x0);
        FUN_0c059e60(a4, 0x0);
        FUN_0c059e60(a4, 0x20);
    }
    t53 = *(short *)((a4 + 0x1C));
    if (((int)t53 >= (int)0x2) && ((int)t53 <= (int)0x16)) {
        t56 = (((struct o430_short *)(a4))->v);
        if ((0x200 & (unsigned short)t56) == 0) {
            if ((0x80 & (unsigned short)t56) != 0) {
                *(unsigned short *)((a4 + 0x1E)) = 0x1;
            }
        } else {
            *(unsigned short *)((a4 + 0x1E)) = 0x1;
        }
    }
    t107 = 0x37B8;
    if (((((struct o37B8_float *)(a4))->v)) != 0.0f) {
        t69 = *(short *)((a4 + 0x1C));
        t107 = t69;
        if ((int)t69 >= (int)0x14) {
            t71 = *(short *)((a4 + 0x1E));
            t107 = t71;
            if (t71 != 0) {
                FUN_0c07d030(a4, 0x0);
                if ((*(signed char *)((a4 + 0x375A))) == 0) {
                    *(int *)((int)stk + 8) = 0xF;
                    *(int *)((int)stk + 4) = 0x1;
                    t74 = *(signed char *)((a4 + 0x1));
                    *(unsigned int *)(((int)stk + 12)) = t74;
                    t75 = t74;
                    *(int *)((int)stk + 0) = t75;
                    FUN_0c07e79c(a4, t74, 0x1, 0xF, t75, 0x1, 0xF);
                } else {
                    *(int *)((int)stk + 8) = 0x12;
                    *(int *)((int)stk + 4) = 0x1;
                    t77 = *(signed char *)((a4 + 0x1));
                    *(unsigned int *)(((int)stk + 12)) = t77;
                    t78 = t77;
                    *(int *)((int)stk + 0) = t78;
                    FUN_0c07e79c(a4, t77, 0x1, 0x12, t78, 0x1, 0x12);
                }
                t82 = *(int *)(((0x118 + a4) + 0x4));
                t83 = (((struct o118_int *)(a4))->v);
                (((struct oA0_float *)(t82))->v) = 1.0f;
                (((struct o9C_float *)(t82))->v) = 1.0f;
                (((struct oA0_float *)(t83))->v) = 1.0f;
                (((struct o9C_float *)(t83))->v) = 1.0f;
                t84 = *(int *)(((0x118 + a4) + 0x4));
                t85 = (((struct o118_int *)(a4))->v);
                (((struct o98_float *)(t84))->v) = 1.0f;
                (((struct o98_float *)(t85))->v) = 1.0f;
                (((struct o94_float *)(t84))->v) = 1.0f;
                (((struct o94_float *)(t85))->v) = 1.0f;
                *(unsigned short *)((a4 + 0x1C)) = 0x0;
                *(unsigned short *)((a4 + 0x1E)) = 0x0;
                (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                t107 = 0x17;
            }
        }
    }
    return t107;
}

int FUN_0c2e55e8(void)
{
    int stk[9];
    register int t6;
    register int t7;
    register int t20;
    register int t25;
    register int t26;
    register int t34;
    register int t84;
    register int t86;
    register int t54;
    register int t48;
    register int t81;
    register int t82;
    register int t90;

    FUN_0c2e638e();
    *(unsigned char *)(((int)stk + 12)) = (*(signed char *)(((*(int *)0xC304178) + 0x0)));
    *(unsigned char *)(((int)stk + 8)) = (*(signed char *)(((*(int *)0xC304178) + 0x1)));
    FUN_0c2e638e();
    t6 = FUN_0c2e6310();
    t7 = *(signed char *)(((int)stk + 12));
    if ((unsigned char)t7 != 67) {
        if ((unsigned char)t7 != 72) {
            if ((unsigned char)t7 != 76) {
                *(unsigned char *)0xC8D6498 = 0x2;
                return (unsigned char)t7;
            }
            return FUN_0c2e5952(t6);
        }
        if (((unsigned short)((((struct oB2_short *)((*(int *)0xC8D66E8)))->v)) & 0x400) != 0) {
            *(unsigned char *)0xC8D6498 = 0x2;
            return 0xB2;
        }
        if ((unsigned char)(*(signed char *)(((int)stk + 8))) == 76) {
            *(int *)((int)stk + 32) = (t6);
            *(int *)((int)stk + 28) = 0xC8D6440;
            *(int *)((int)stk + 24) = (unsigned char)t6;
            *(int *)((int)stk + 20) = 0xC8D66E8;
            FUN_0c2e638e();
            t20 = FUN_0c2e6310();
            if ((unsigned int)(unsigned char)t20 <= (unsigned int)0xB8) {
                t25 = *(signed char *)(((*(int *)0xC304178) + 0x0));
                t26 = *(int *)0xC8D66E8;
                if ((unsigned char)t25 == 63) {
                    FUN_0c2e638e();
                    FUN_0c2e76c8((unsigned char)(*(signed char *)((t26 + (unsigned char)t20))), 0x10, 0x2, ((int)stk + 0));
                    FUN_0c2e732c();
                    FUN_0c2e7200(((int)stk + 0));
                    t48 = (FUN_0c2e732c());
                } else {
                    if ((unsigned char)t25 == 61) {
                        FUN_0c2e638e();
                        t34 = 0x0;
                        for (;;) {
                            t34 = (t34 << 2);
                            t34 = (t34 << 2);
                            t34 = (t34 + (FUN_0c2e5ea0((*(signed char *)(((*(int *)0xC304178) + 0x0))))));
                            FUN_0c2e638e();
                            if ((*(signed char *)(((*(int *)0xC304178) + 0x0))) == (*(signed char *)0xC8D6526)) {
                                break;
                            }
                        }
                        *(unsigned char *)((t26 + (unsigned char)t20)) = t34;
                        t48 = (unsigned char)t20;
                    } else {
                        *(unsigned char *)0xC8D6498 = 0x2;
                        t48 = (unsigned char)t25;
                    }
                }
                t54 = t48;
            } else {
                *(unsigned char *)0xC8D6498 = 0x2;
                t54 = t20;
            }
            return t54;
        }
        thunk_FUN_0c2e3f7c();
        if ((int)(unsigned char)t6 <= (int)0xF) {
            FUN_0c2d16b8((*(signed char *)(((*(int *)0xC8D66E8) + 0x22))), (*(signed char *)(((*(int *)0xC8D66E8) + 0x23))));
            t81 = ((int)(0xC0 & (unsigned char)(*(signed char *)0xC8D6457)) >> 6);
            t82 = (*(signed char *)(((*(int *)0xC8D66E8) + 0x22)));
        } else {
            if ((int)(unsigned char)t6 >= (int)0x38) {
                FUN_0c2ec8f4();
            }
            t81 = ((int)(0xC0 & (unsigned char)(*(signed char *)0xC8D6457)) >> 6);
            t82 = (*(signed char *)0xC8D6463);
        }
        return FUN_0c2d5918(t6, t81, t82);
    }
    if ((int)(unsigned char)t6 <= (int)0x1) {
        if ((unsigned char)t6 == 0) {
            t84 = *(signed char *)0xC8D6458;
            (((struct o0_uchar *)0xC8D6458)->v) = (t84 & 0xFB);
            t90 = (t84 & 0xFB);
        } else {
            (((struct o0_uchar *)0xC8D6458)->v) = ((*(signed char *)0xC8D6458) | 0x4);
            t86 = *(signed char *)0xC8D646A;
            (((struct o12_uchar *)0xC8D6458)->v) = (t86 | 0xC0);
            t90 = (t86 | 0xC0);
        }
    } else {
        *(unsigned char *)0xC8D6498 = 0x2;
        t90 = (unsigned char)t7;
    }
    return t90;
}
