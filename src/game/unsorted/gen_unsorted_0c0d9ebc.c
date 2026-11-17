/* game/unsorted: functions 0C0D9EBC-0C0DA396, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o132_uchar { char p[0x132]; unsigned char v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o78_int { char p[0x78]; int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB0_float { char p[0xB0]; float v; };
struct oC8_int { char p[0xC8]; int v; };
struct oD0_int { char p[0xD0]; int v; };
struct oDC_int { char p[0xDC]; int v; };
struct oE0_int { char p[0xE0]; int v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c042fe0(void);
int FUN_0c043010(void);
int FUN_0c043064(void);
int thunk_FUN_0c05abb2(int, int);
int FUN_0c0bbf58(int);
int FUN_0c0d60a8(int);
int FUN_0c0d60bc(int);
int FUN_0c0db188(int, int);
int FUN_0c179ac0(void);
float math_sin_angle16(int);
int FUN_0c187798(int, int, int);
int FUN_0c0d9ebc(int a4, int a5, int a6, int a7);

int FUN_0c0d9ebc(int a4, int a5, int a6, int a7)
{
    register int t2;
    register int t22;
    register int t23;
    register int t32;
    register int t38;
    register int t52;
    register int t57;
    register int t59;
    register int t64;
    register int t75;
    register int t77;
    register int t82;
    register int t84;
    register int t89;
    register int t97;
    register int t109;
    register int t124;
    register int t125;
    register int t202;
    register int t203;
    register int t208;
    register int t209;
    register int t214;
    register int t217;
    register int t220;
    register int t222;
    register int t17;
    register int t246;

    if ((*(signed char *)0xC54223C) != 2) {
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    t2 = *(signed char *)((a4 + 0x15));
    if (t2 != 0) {
        if (t2 != 1) {
            t17 = a4;
        } else {
            *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x16C);
            (((struct o7C_uint *)(((((struct oC8_int *)(a4))->v))))->v) = (int)(((math_sin_angle16((*(short *)((a4 + 0x1E))))) * 3932160.0f) / 360.0f);
        }
    } else {
        *(unsigned short *)((a4 + 0x1E)) = 0x0;
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t17 = a4;
    }
    t22 = *(signed char *)((a4 + 0x14));
    if (t22 != 0) {
        if (t22 != 1) {
            if (t22 == 2) {
                t23 = ((int (*)(int))(FUN_0c187798))(t17);
                FUN_0c0bbf58(a4);
                (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
                (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
                (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o54_float *)(a4))->v)));
                (((struct oB0_float *)(a4))->v) = (((((struct oB0_float *)(a4))->v)) + 0.0199999996f);
                t32 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t32 - 1);
                t246 = (short)(t32 - 1);
                if ((short)(t32 - 1) != 0) {
                } else {
                    (((struct o12A_ushort *)(a4))->v) = 0xFFFFFFFF;
                    *(unsigned short *)(((0x12A + a4) + 0x2)) = 0xFFFFFFFF;
                    *(unsigned short *)(((0x12A + a4) + 0x4)) = 0xFFFFFFFF;
                    (((struct o132_uchar *)(a4))->v) = 0x0;
                    *(unsigned short *)((a4 + 0x1C)) = 0xB4;
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    t246 = 0x14;
                }
            } else {
                if (t22 == 3) {
                    t38 = ((int (*)(int))(FUN_0c187798))(t17);
                    FUN_0c0bbf58(a4);
                    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
                    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
                    (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o54_float *)(a4))->v)));
                    if ((*(signed char *)((a4 + 0x132))) != 0) {
                        (((struct o132_uchar *)(a4))->v) = 0x0;
                        (((struct o12A_ushort *)(a4))->v) = 0x0;
                        *(unsigned short *)(((0x12A + a4) + 0x2)) = 0x0;
                        *(unsigned short *)(((0x12A + a4) + 0x4)) = 0x0;
                        *(unsigned short *)((a4 + 0x1C)) = 0xA;
                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    }
                    t52 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t52 - 1);
                    t246 = (short)(t52 - 1);
                    if ((short)(t52 - 1) != 0) {
                    } else {
                        (((struct o12A_ushort *)(a4))->v) = 0x0;
                        *(unsigned short *)(((0x12A + a4) + 0x2)) = 0x0;
                        *(unsigned short *)(((0x12A + a4) + 0x4)) = 0x0;
                        *(unsigned short *)((a4 + 0x1C)) = 0x32;
                        (((struct o14_uchar *)(a4))->v) = 0x9;
                        t246 = 0x14;
                    }
                } else {
                    if (t22 == 4) {
                        t57 = (((struct oD0_int *)(a4))->v);
                        (((struct o78_uint *)(t57))->v) = (((((struct o78_int *)(t57))->v)) + (int)(((float)0x1 * 65536.0f) / 360.0f));
                        t59 = *(short *)((a4 + 0x1C));
                        *(unsigned short *)((a4 + 0x1C)) = (t59 - 1);
                        t246 = (short)(t59 - 1);
                        if ((short)(t59 - 1) != 0) {
                        } else {
                            *(unsigned short *)((a4 + 0x1C)) = 0x14;
                            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                            t246 = 0x14;
                        }
                    } else {
                        if (t22 == 5) {
                            t64 = *(short *)((a4 + 0x1C));
                            *(unsigned short *)((a4 + 0x1C)) = (t64 - 1);
                            t246 = (short)(t64 - 1);
                            if ((short)(t64 - 1) != 0) {
                            } else {
                                *(unsigned char *)((((((struct oDC_int *)(a4))->v)) + 0x0)) = 0x0;
                                *(unsigned char *)((((((struct oE0_int *)(a4))->v)) + 0x0)) = 0x0;
                                FUN_0c0db188(a4, 0x0);
                                *(unsigned short *)((a4 + 0x1C)) = 0xA;
                                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                                t246 = 0x14;
                            }
                        } else {
                            if (t22 == 6) {
                                t75 = (((struct oD0_int *)(a4))->v);
                                (((struct o78_uint *)(t75))->v) = (((((struct o78_int *)(t75))->v)) - 3276);
                                t77 = *(short *)((a4 + 0x1C));
                                *(unsigned short *)((a4 + 0x1C)) = (t77 - 1);
                                t246 = (short)(t77 - 1);
                                if ((short)(t77 - 1) != 0) {
                                } else {
                                    *(unsigned short *)((a4 + 0x1C)) = 0xA;
                                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                                    t246 = 0x14;
                                }
                            } else {
                                if (t22 == 7) {
                                    t82 = (((struct oD0_int *)(a4))->v);
                                    (((struct o78_uint *)(t82))->v) = (((((struct o78_int *)(t82))->v)) - 182);
                                    t84 = *(short *)((a4 + 0x1C));
                                    *(unsigned short *)((a4 + 0x1C)) = (t84 - 1);
                                    t246 = (short)(t84 - 1);
                                    if ((short)(t84 - 1) != 0) {
                                    } else {
                                        *(unsigned short *)((a4 + 0x1C)) = 0x3C;
                                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                                        t246 = 0x14;
                                    }
                                } else {
                                    if (t22 == 8) {
                                        t89 = (((struct oD0_int *)(a4))->v);
                                        (((struct o78_uint *)(t89))->v) = (((((struct o78_int *)(t89))->v)) + (int)((3.0f * 65536.0f) / 360.0f));
                                        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
                                        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
                                        (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o54_float *)(a4))->v)));
                                        t97 = *(short *)((a4 + 0x1C));
                                        *(unsigned short *)((a4 + 0x1C)) = (t97 - 1);
                                        t246 = (short)(t97 - 1);
                                        if ((short)(t97 - 1) == 0) {
                                            *(unsigned short *)((a4 + 0x1C)) = 0x32;
                                            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                                            t246 = 0x14;
                                        }
                                    } else {
                                        if (t22 == 9) {
                                            (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
                                            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
                                            (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o54_float *)(a4))->v)));
                                            (((struct oB0_float *)(a4))->v) = (((((struct oB0_float *)(a4))->v)) - 0.0199999996f);
                                            t109 = *(short *)((a4 + 0x1C));
                                            *(unsigned short *)((a4 + 0x1C)) = (t109 - 1);
                                            t246 = (short)(t109 - 1);
                                            if ((short)(t109 - 1) == 0) {
                                                thunk_FUN_0c05abb2(0x45, 0x0);
                                                (((struct oA8_uchar *)(a4))->v) = 0x0;
                                                (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) - 500.0f);
                                                (((struct o12A_ushort *)(a4))->v) = 0x0;
                                                *(unsigned short *)(((0x12A + a4) + 0x2)) = 0x0;
                                                *(unsigned short *)(((0x12A + a4) + 0x4)) = 0x0;
                                                *(unsigned short *)((a4 + 0x1C)) = (((short)((int)((int)(FUN_0c179ac0()) % (int)0x5)) * (short)0x3C) + 0x1E0);
                                                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                                                t246 = 0x14;
                                            }
                                        } else {
                                            t124 = FUN_0c042fe0();
                                            t246 = t124;
                                            if (t124 != 0) {
                                                t125 = FUN_0c043010();
                                                t246 = t125;
                                                if (t125 == 0) {
                                                    (((struct o14_uchar *)(a4))->v) = 0x1;
                                                    t246 = 0x14;
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
            t202 = FUN_0c043064();
            t246 = t202;
            if (t202 != 0) {
            } else {
                t203 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t203 - 1);
                t246 = (short)(t203 - 1);
                if ((short)(t203 - 1) != 0) {
                } else {
                    thunk_FUN_0c05abb2(0x44, 0x0);
                    (((struct oA8_uchar *)(a4))->v) = 0x1;
                    (((struct oAC_ushort *)(a4))->v) = 0x40F;
                    (((struct oA9_uchar *)(a4))->v) = 0x21;
                    (((struct oB0_float *)(a4))->v) = 0.0f;
                    (((struct o78_uint *)(((((struct oD0_int *)(a4))->v))))->v) = 0x0;
                    *(unsigned char *)((((((struct oDC_int *)(a4))->v)) + 0x0)) = 0x1;
                    *(unsigned char *)((((((struct oE0_int *)(a4))->v)) + 0x0)) = 0x1;
                    t208 = FUN_0c179ac0();
                    t209 = ((~(((~t208) + 0x1) & 0x7)) + 0x1);
                    if ((int)t208 >= 0) {
                        t209 = (t208 & 0x7);
                    }
                    *(unsigned char *)((a4 + 0x2)) = (*(signed char *)((0xC287C50 + t209)));
                    *(volatile signed char *)((a4 + 0x2));
                    t214 = ((int (*)(void))(FUN_0c187798))();
                    *(volatile signed char *)((a4 + 0x2));
                    t217 = ((int (*)(void))(FUN_0c187798))();
                    *(volatile signed char *)((a4 + 0x2));
                    t220 = ((int (*)(void))(FUN_0c187798))();
                    t222 = FUN_0c0d60a8((*(signed char *)((a4 + 0x2))));
                    if (t222 != 0) {
                        FUN_0c0d60bc((*(signed char *)((a4 + 0x2))));
                    }
                    (((struct o12A_ushort *)(a4))->v) = 0x0;
                    *(unsigned short *)(((0x12A + a4) + 0x2)) = 0x0;
                    *(unsigned short *)(((0x12A + a4) + 0x4)) = 0x0;
                    *(unsigned short *)((a4 + 0x1C)) = 0x32;
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    t246 = 0x14;
                }
            }
        }
    } else {
        (((struct oA8_uchar *)(a4))->v) = 0x0;
        (((struct o12A_ushort *)(a4))->v) = 0x0;
        *(unsigned short *)(((0x12A + a4) + 0x2)) = 0x0;
        *(unsigned short *)(((0x12A + a4) + 0x4)) = 0x0;
        *(unsigned short *)((a4 + 0x1C)) = 0x12C;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t246 = 0x14;
    }
    return t246;
}
