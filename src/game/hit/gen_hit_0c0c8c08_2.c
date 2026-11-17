/* game/hit: functions 0C0C8C08-0C0C9D8C, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o1B_uchar { char p[0x1B]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o41C_uchar { char p[0x41C]; unsigned char v; };
struct o41D_uchar { char p[0x41D]; unsigned char v; };
struct o420_ushort { char p[0x420]; unsigned short v; };
struct o424_uchar { char p[0x424]; unsigned char v; };
struct o426_short { char p[0x426]; short v; };
struct o426_ushort { char p[0x426]; unsigned short v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct oA4_int { char p[0xA4]; int v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAA_uchar { char p[0xAA]; unsigned char v; };
struct oAB_uchar { char p[0xAB]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oC_int { char p[0xC]; int v; };
struct oD0_int { char p[0xD0]; int v; };
struct oD4_int { char p[0xD4]; int v; };
struct oD8_int { char p[0xD8]; int v; };
struct oEC_int { char p[0xEC]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f444(int, int, int);
int math_mat_transform_vector(int, int);
int math_mat_get_translate(int, int);
int FUN_0c059df2(int, int);
int FUN_0c05aae4(int, int);
int FUN_0c07d2c4(int, int);
int FUN_0c07dbd8(int, int);
int FUN_0c07e328(int, int);
int FUN_0c0c212c(int);
int FUN_0c0c241a(int);
int FUN_0c0c25c4(int);
int FUN_0c0c2a80(int);
int FUN_0c0c2aa2(int, int);
int FUN_0c0c2ab6(int, int);
int FUN_0c0c2ce4(int);
int FUN_0c0c2d56(int, int, int);
int FUN_0c0c3e3a(int, int, int);
int FUN_0c0c4482(int, int, int);
int FUN_0c0c4770(int, int, int);
int FUN_0c0c47a4(int, int, int);
int FUN_0c0c4b76(int, int, int);
int FUN_0c0c4bcc(int, int, int);
int FUN_0c0c4c1c(int, int, int);
int FUN_0c0c5024(int, int, int);
int FUN_0c0c52c4(int, int, int);
int FUN_0c0c7f4c(int);
int FUN_0c0c8c08(int, int, int);
int FUN_0c0c8c36(int, int, int);
int FUN_0c0c8c90(int);
int FUN_0c0c8d00(int, int, int, int, int, int);
int FUN_0c0c8e8c(int);
int FUN_0c0c8f2e(int);
int FUN_0c0c8f70(int, int, int);
int FUN_0c15c344(int, int, int, int);
int FUN_0c1614c8(int, int);
int FUN_0c1632e0(int, int, int, float);
int FUN_0c16ab9e(int, int);
int FUN_0c16ac5c(int);
int FUN_0c16c210(int);
int FUN_0c16dd24(int, int);
int FUN_0c16e8f0(int);
int FUN_0c187798(void);
int FUN_0c0c8fd4(int a4, int a5, int a6);
int FUN_0c0c9568(int a4, int a5, int a6);
int FUN_0c0c9810(int a4, int a5, int a6);
int FUN_0c0c9884(int a4, int a5, int a6, int a7, int a8);

int FUN_0c0c8fd4(int a4, int a5, int a6)
{
    int stk[6];
    register int t0;
    register int t1;
    register int t8;
    register int t10;
    register int t12;
    register int t20;
    register int t42;
    register int t59;
    register int t81;
    register int t111;
    register int t119;
    register int t141;
    register int t158;
    register int t180;
    register int t212;
    register int t214;
    register int t215;
    register int t223;
    register int t245;
    register int t262;
    register int t284;
    register int t313;
    register int t321;
    register int t343;
    register int t360;
    register int t382;
    register int t422;
    register int t425;
    register int t448;
    register int t452;
    register int t453;
    register int t455;
    int t490;
    register int t498;
    register int t503;
    register int t537;
    register int t610;
    register int t611;
    register int t615;
    register int t616;
    register int t666;
    register int t670;
    register int t671;
    register int t729;
    register int t731;
    register int t746;
    int t415;
    float u612;
    float u667;

    t0 = *(signed char *)((a4 + 0x1));
    t1 = *(signed char *)((a4 + 0x41C));
    if ((unsigned char)t1 != 55) {
        if ((unsigned char)t1 != 73) {
            if ((unsigned char)t1 == 36) {
                FUN_0c07dbd8((((short)t0 * (short)0x3938) + 0xC532498), (unsigned char)(*(signed char *)((a4 + 0x41C))));
                t746 = (FUN_0c0c2d56(a4, 0xB, (*(signed char *)((a4 + 0x1)))));
            } else {
                if ((unsigned char)t1 == 53) {
                    t8 = FUN_0c0c3e3a(a4, a5, a6);
                    t746 = t8;
                    if (t8 != 0) {
                    } else {
                        t10 = *(signed char *)((a4 + 0x15));
                        if (t10 != 0) {
                            t746 = t10;
                            if (t10 != 1) {
                            } else {
                                FUN_0c0c7f4c(a4);
                                t12 = FUN_0c0c2ce4(a4);
                                if (t12 != 0) {
                                    if (t12 == 2) {
                                        t746 = (FUN_0c0c2d56(a4, 0x3, (*(signed char *)((a4 + 0x1)))));
                                    } else {
                                        (((struct o50_float *)(a4))->v) = 0.0f;
                                        (((struct o5C_float *)(a4))->v) = -2.0f;
                                        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
                                        (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
                                        if ((*(signed char *)((a4 + 0x131))) == 0) {
                                            t20 = (((struct o426_short *)(a4))->v);
                                            (((struct o426_ushort *)(a4))->v) = (t20 + 0x1);
                                            if ((int)(short)(t20 + 0x1) > (int)0x4B0) {
                                                FUN_0c0c2d56(a4, 0xB, (*(signed char *)((a4 + 0x1))));
                                            }
                                        } else {
                                            FUN_0c0c2d56(a4, 0xB, (*(signed char *)((a4 + 0x1))));
                                        }
                                        t746 = 0x426;
                                        if ((int)((((struct o426_short *)(a4))->v)) <= (int)0x438) {
                                        } else {
                                            t42 = *(signed char *)0xC542260;
                                            (((struct oA8_uchar *)(a4))->v) = (t42 & 0x1);
                                            t746 = (t42 & 0x1);
                                        }
                                    }
                                } else {
                                    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
                                    (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
                                    if ((*(signed char *)((a4 + 0x131))) == 0) {
                                        t59 = (((struct o426_short *)(a4))->v);
                                        (((struct o426_ushort *)(a4))->v) = (t59 + 0x1);
                                        if ((int)(short)(t59 + 0x1) > (int)0x4B0) {
                                            FUN_0c0c2d56(a4, 0xB, (*(signed char *)((a4 + 0x1))));
                                        }
                                    } else {
                                        FUN_0c0c2d56(a4, 0xB, (*(signed char *)((a4 + 0x1))));
                                    }
                                    t746 = 0x426;
                                    if ((int)((((struct o426_short *)(a4))->v)) <= (int)0x438) {
                                    } else {
                                        t81 = *(signed char *)0xC542260;
                                        (((struct oA8_uchar *)(a4))->v) = (t81 & 0x1);
                                        t746 = (t81 & 0x1);
                                    }
                                }
                            }
                        } else {
                            FUN_0c0c2ab6(a4, (*(signed char *)(((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738B8) + 0x13))));
                            FUN_0c07e328(a4, (*(signed char *)(((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738B8) + 0xE))));
                            (((struct o12A_ushort *)(a4))->v) = 0xF;
                            (((struct o426_ushort *)(a4))->v) = 0x0;
                            *(unsigned short *)((a4 + 0x1C)) = 0x0;
                            *(unsigned int *)((a4 + 0x3C)) = 0x0;
                            (((struct o48_float *)(a4))->v) = 1.29999995f;
                            (((struct o44_float *)(a4))->v) = 1.29999995f;
                            (((struct o40_float *)(a4))->v) = 1.29999995f;
                            (((struct oAA_uchar *)(a4))->v) = 0x1;
                            (((struct oAB_uchar *)(a4))->v) = (*(signed char *)(((0xC2738B8 + ((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34)) + 0x16)));
                            (((struct o50_float *)(a4))->v) = 0.0f;
                            (((struct o5C_float *)(a4))->v) = -2.0f;
                            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                            FUN_0c0c7f4c(a4);
                            t111 = FUN_0c0c2ce4(a4);
                            if (t111 != 0) {
                                if (t111 == 2) {
                                    t746 = (FUN_0c0c2d56(a4, 0x3, (*(signed char *)((a4 + 0x1)))));
                                } else {
                                    (((struct o50_float *)(a4))->v) = 0.0f;
                                    (((struct o5C_float *)(a4))->v) = -2.0f;
                                    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
                                    (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
                                    if ((*(signed char *)((a4 + 0x131))) == 0) {
                                        t119 = (((struct o426_short *)(a4))->v);
                                        (((struct o426_ushort *)(a4))->v) = (t119 + 0x1);
                                        if ((int)(short)(t119 + 0x1) > (int)0x4B0) {
                                            FUN_0c0c2d56(a4, 0xB, (*(signed char *)((a4 + 0x1))));
                                        }
                                    } else {
                                        FUN_0c0c2d56(a4, 0xB, (*(signed char *)((a4 + 0x1))));
                                    }
                                    t746 = 0x426;
                                    if ((int)((((struct o426_short *)(a4))->v)) <= (int)0x438) {
                                    } else {
                                        t141 = *(signed char *)0xC542260;
                                        (((struct oA8_uchar *)(a4))->v) = (t141 & 0x1);
                                        t746 = (t141 & 0x1);
                                    }
                                }
                            } else {
                                (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
                                (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
                                if ((*(signed char *)((a4 + 0x131))) == 0) {
                                    t158 = (((struct o426_short *)(a4))->v);
                                    (((struct o426_ushort *)(a4))->v) = (t158 + 0x1);
                                    if ((int)(short)(t158 + 0x1) > (int)0x4B0) {
                                        FUN_0c0c2d56(a4, 0xB, (*(signed char *)((a4 + 0x1))));
                                    }
                                } else {
                                    FUN_0c0c2d56(a4, 0xB, (*(signed char *)((a4 + 0x1))));
                                }
                                t746 = 0x426;
                                if ((int)((((struct o426_short *)(a4))->v)) <= (int)0x438) {
                                } else {
                                    t180 = *(signed char *)0xC542260;
                                    (((struct oA8_uchar *)(a4))->v) = (t180 & 0x1);
                                    t746 = (t180 & 0x1);
                                }
                            }
                        }
                    }
                } else {
                    if ((unsigned char)t1 == 114) {
                        t212 = FUN_0c0c3e3a(a4, a5, a6);
                        t746 = t212;
                        if (t212 != 0) {
                        } else {
                            t214 = *(signed char *)((a4 + 0x15));
                            if (t214 != 0) {
                                t746 = t214;
                                if (t214 != 1) {
                                } else {
                                    t215 = FUN_0c0c2ce4(a4);
                                    if (t215 != 0) {
                                        if (t215 == 2) {
                                            t746 = (FUN_0c0c2d56(a4, 0x3, (*(signed char *)((a4 + 0x1)))));
                                        } else {
                                            (((struct o50_float *)(a4))->v) = 0.0f;
                                            (((struct o5C_float *)(a4))->v) = -2.0f;
                                            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
                                            (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
                                            if ((*(signed char *)((a4 + 0x131))) == 0) {
                                                t223 = (((struct o426_short *)(a4))->v);
                                                (((struct o426_ushort *)(a4))->v) = (t223 + 0x1);
                                                if ((int)(short)(t223 + 0x1) > (int)0x4B0) {
                                                    FUN_0c0c2d56(a4, 0xB, (*(signed char *)((a4 + 0x1))));
                                                }
                                            } else {
                                                FUN_0c0c2d56(a4, 0xB, (*(signed char *)((a4 + 0x1))));
                                            }
                                            t746 = 0x426;
                                            if ((int)((((struct o426_short *)(a4))->v)) <= (int)0x438) {
                                            } else {
                                                t245 = *(signed char *)0xC542260;
                                                (((struct oA8_uchar *)(a4))->v) = (t245 & 0x1);
                                                t746 = (t245 & 0x1);
                                            }
                                        }
                                    } else {
                                        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
                                        (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
                                        if ((*(signed char *)((a4 + 0x131))) == 0) {
                                            t262 = (((struct o426_short *)(a4))->v);
                                            (((struct o426_ushort *)(a4))->v) = (t262 + 0x1);
                                            if ((int)(short)(t262 + 0x1) > (int)0x4B0) {
                                                FUN_0c0c2d56(a4, 0xB, (*(signed char *)((a4 + 0x1))));
                                            }
                                        } else {
                                            FUN_0c0c2d56(a4, 0xB, (*(signed char *)((a4 + 0x1))));
                                        }
                                        t746 = 0x426;
                                        if ((int)((((struct o426_short *)(a4))->v)) <= (int)0x438) {
                                        } else {
                                            t284 = *(signed char *)0xC542260;
                                            (((struct oA8_uchar *)(a4))->v) = (t284 & 0x1);
                                            t746 = (t284 & 0x1);
                                        }
                                    }
                                }
                            } else {
                                FUN_0c0c2ab6(a4, (*(signed char *)(((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738B8) + 0x13))));
                                FUN_0c07e328(a4, (*(signed char *)(((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738B8) + 0xE))));
                                (((struct o12A_ushort *)(a4))->v) = 0xF;
                                (((struct o426_ushort *)(a4))->v) = 0x0;
                                *(unsigned int *)((a4 + 0x3C)) = 0x0;
                                (((struct o48_float *)(a4))->v) = 1.29999995f;
                                (((struct o44_float *)(a4))->v) = 1.29999995f;
                                (((struct o40_float *)(a4))->v) = 1.29999995f;
                                (((struct oAA_uchar *)(a4))->v) = 0x1;
                                (((struct oAB_uchar *)(a4))->v) = (*(signed char *)(((0xC2738B8 + ((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34)) + 0x16)));
                                (((struct o50_float *)(a4))->v) = 0.0f;
                                (((struct o5C_float *)(a4))->v) = -2.0f;
                                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                                t313 = FUN_0c0c2ce4(a4);
                                if (t313 != 0) {
                                    if (t313 == 2) {
                                        t746 = (FUN_0c0c2d56(a4, 0x3, (*(signed char *)((a4 + 0x1)))));
                                    } else {
                                        (((struct o50_float *)(a4))->v) = 0.0f;
                                        (((struct o5C_float *)(a4))->v) = -2.0f;
                                        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
                                        (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
                                        if ((*(signed char *)((a4 + 0x131))) == 0) {
                                            t321 = (((struct o426_short *)(a4))->v);
                                            (((struct o426_ushort *)(a4))->v) = (t321 + 0x1);
                                            if ((int)(short)(t321 + 0x1) > (int)0x4B0) {
                                                FUN_0c0c2d56(a4, 0xB, (*(signed char *)((a4 + 0x1))));
                                            }
                                        } else {
                                            FUN_0c0c2d56(a4, 0xB, (*(signed char *)((a4 + 0x1))));
                                        }
                                        t746 = 0x426;
                                        if ((int)((((struct o426_short *)(a4))->v)) <= (int)0x438) {
                                        } else {
                                            t343 = *(signed char *)0xC542260;
                                            (((struct oA8_uchar *)(a4))->v) = (t343 & 0x1);
                                            t746 = (t343 & 0x1);
                                        }
                                    }
                                } else {
                                    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
                                    (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
                                    if ((*(signed char *)((a4 + 0x131))) == 0) {
                                        t360 = (((struct o426_short *)(a4))->v);
                                        (((struct o426_ushort *)(a4))->v) = (t360 + 0x1);
                                        if ((int)(short)(t360 + 0x1) > (int)0x4B0) {
                                            FUN_0c0c2d56(a4, 0xB, (*(signed char *)((a4 + 0x1))));
                                        }
                                    } else {
                                        FUN_0c0c2d56(a4, 0xB, (*(signed char *)((a4 + 0x1))));
                                    }
                                    t746 = 0x426;
                                    if ((int)((((struct o426_short *)(a4))->v)) <= (int)0x438) {
                                    } else {
                                        t382 = *(signed char *)0xC542260;
                                        (((struct oA8_uchar *)(a4))->v) = (t382 & 0x1);
                                        t746 = (t382 & 0x1);
                                    }
                                }
                            }
                        }
                    } else {
                        t746 = (unsigned char)t1;
                        if ((unsigned char)t1 == 77) {
                            if (((*(signed char *)0xC542237) == 0) && (t415 = *(signed char *)0xC540F98, t415 != 0)) {
                                t746 = (FUN_0c0c2d56(a4, 0xB, (*(signed char *)((a4 + 0x1)))));
                            } else {
                                t422 = *(signed char *)((a4 + 0x15));
                                if (t422 != 0) {
                                    if (t422 != 1) {
                                        if (t422 != 2) {
                                            t425 = FUN_0c0c2ce4(a4);
                                            if (t425 != 0) {
                                                if (t425 == 2) {
                                                    t746 = (FUN_0c0c2d56(a4, 0x3, (*(signed char *)((a4 + 0x1)))));
                                                } else {
                                                    (((struct o50_float *)(a4))->v) = 0.0f;
                                                    (((struct o5C_float *)(a4))->v) = -2.0f;
                                                    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
                                                    (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
                                                    t746 = 0x50;
                                                }
                                            } else {
                                                (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
                                                (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
                                                t746 = 0x50;
                                            }
                                        } else {
                                            t448 = *(short *)((a4 + 0x1E));
                                            *(unsigned short *)((a4 + 0x1E)) = (t448 - 1);
                                            if ((int)(short)(t448 - 1) <= 0) {
                                                t746 = (FUN_0c0c2d56(a4, 0xB, (*(signed char *)((a4 + 0x1)))));
                                            } else {
                                                t452 = *(short *)((a4 + 0x1E));
                                                t453 = ((~(((~t452) + 0x1) & 0x1)) + 0x1);
                                                if ((int)t452 >= 0) {
                                                    t453 = (t452 & 0x1);
                                                }
                                                (((struct oA8_uchar *)(a4))->v) = t453;
                                                t455 = FUN_0c0c2ce4(a4);
                                                if (t455 != 0) {
                                                    if (t455 == 2) {
                                                        t746 = (FUN_0c0c2d56(a4, 0x3, (*(signed char *)((a4 + 0x1)))));
                                                    } else {
                                                        (((struct o50_float *)(a4))->v) = 0.0f;
                                                        (((struct o5C_float *)(a4))->v) = -2.0f;
                                                        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
                                                        (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
                                                        t746 = 0x50;
                                                    }
                                                } else {
                                                    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
                                                    (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
                                                    t746 = 0x50;
                                                }
                                            }
                                        }
                                    } else {
                                        t490 = *(short *)((a4 + 0x1C));
                                        if ((t490 != 120) && ((t490 != 0x8C) && (t490 != 0xA0))) {
                                        } else {
                                            FUN_0c0c8f70(a4, a5, a6);
                                            FUN_0c059df2((*(signed char *)((a4 + 0x1))), 0x72);
                                        }
                                        t498 = *(short *)((a4 + 0x1C));
                                        *(unsigned short *)((a4 + 0x1C)) = (t498 + 0x1);
                                        if ((int)(short)(t498 + 0x1) >= (int)0xAA) {
                                            *(unsigned short *)((a4 + 0x1E)) = 0x3C;
                                            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                                        }
                                        t503 = FUN_0c0c2ce4(a4);
                                        if (t503 != 0) {
                                            if (t503 == 2) {
                                                t746 = (FUN_0c0c2d56(a4, 0x3, (*(signed char *)((a4 + 0x1)))));
                                            } else {
                                                (((struct o50_float *)(a4))->v) = 0.0f;
                                                (((struct o5C_float *)(a4))->v) = -2.0f;
                                                (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
                                                (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
                                                t746 = 0x50;
                                            }
                                        } else {
                                            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
                                            (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
                                            t746 = 0x50;
                                        }
                                    }
                                } else {
                                    FUN_0c1614c8(a4, 0x2);
                                    FUN_0c0c2ab6(a4, (*(signed char *)(((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738B8) + 0x12))));
                                    *(unsigned short *)((a4 + 0x1C)) = 0x0;
                                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                                    t537 = FUN_0c0c2ce4(a4);
                                    if (t537 != 0) {
                                        if (t537 == 2) {
                                            t746 = (FUN_0c0c2d56(a4, 0x3, (*(signed char *)((a4 + 0x1)))));
                                        } else {
                                            (((struct o50_float *)(a4))->v) = 0.0f;
                                            (((struct o5C_float *)(a4))->v) = -2.0f;
                                            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
                                            (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
                                            t746 = 0x50;
                                        }
                                    } else {
                                        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
                                        (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
                                        t746 = 0x50;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            t610 = *(signed char *)((a4 + 0x15));
            if (t610 != 0) {
                t746 = t610;
                if (t610 != 1) {
                } else {
                    t611 = FUN_0c07d2c4((((short)t0 * (short)0x3938) + 0xC532498), (a4 + 0x1E));
                    if ((t611 != 0) && (u612 = (((struct o160_float *)((((short)t0 * (short)0x3938) + 0xC532498)))->v), u612 > 0.0f)) {
                        t615 = *(signed char *)0xC542235;
                        t746 = t615;
                        if (t615 != 2) {
                        } else {
                            t616 = *(short *)((a4 + 0x1C));
                            *(unsigned short *)((a4 + 0x1C)) = (t616 - 1);
                            t746 = (short)(t616 - 1);
                            if ((int)(short)(t616 - 1) > 0) {
                            } else {
                                math_mat_get_translate(((((struct oA4_int *)(a4))->v)), (((int)stk + 0) + 0xC));
                                FUN_0c187798();
                                math_mat_transform_vector(((int)stk + 0), ((((struct oA4_int *)(a4))->v)));
                                *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) + (*(float *)(((int)stk + 0))));
                                *(float *)(((int)stk + 16)) = ((*(float *)(((int)stk + 16))) + (*(float *)(((int)stk + 4))));
                                *(float *)(((int)stk + 20)) = ((*(float *)(((int)stk + 20))) + (*(float *)(((int)stk + 8))));
                                FUN_0c187798();
                                FUN_0c1632e0(0xFFFFFFFF, (a4 + 0x28), 0x11, 0.5f);
                                FUN_0c05aae4(0xD1, (a4 + 0x28));
                                t746 = (FUN_0c0c2d56(a4, 0xB, (*(signed char *)((a4 + 0x1)))));
                            }
                        }
                    } else {
                        math_mat_get_translate(((((struct oA4_int *)(a4))->v)), (((int)stk + 0) + 0xC));
                        FUN_0c187798();
                        math_mat_transform_vector(((int)stk + 0), ((((struct oA4_int *)(a4))->v)));
                        *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) + (*(float *)(((int)stk + 0))));
                        *(float *)(((int)stk + 16)) = ((*(float *)(((int)stk + 16))) + (*(float *)(((int)stk + 4))));
                        *(float *)(((int)stk + 20)) = ((*(float *)(((int)stk + 20))) + (*(float *)(((int)stk + 8))));
                        FUN_0c187798();
                        t746 = (FUN_0c0c2d56(a4, 0x6, (*(signed char *)((a4 + 0x1)))));
                    }
                }
            } else {
                (((struct o28_float *)(a4))->v) = 17.0f;
                (((struct o2C_float *)(a4))->v) = -17.0f;
                (((struct o30_float *)(a4))->v) = 0.0f;
                *(unsigned int *)((a4 + 0x34)) = 0x0;
                *(unsigned int *)((a4 + 0x38)) = 0x4000;
                *(unsigned int *)((a4 + 0x3C)) = 0x0;
                (((struct oA4_uint *)(a4))->v) = (((((struct oEC_int *)((0xC532498 + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938))))->v)) + 0x28);
                *(unsigned short *)((a4 + 0x1C)) = 0xB4;
                (((struct o12A_ushort *)(a4))->v) = 0x0;
                *(unsigned short *)(((0x12A + a4) + 0x2)) = 0x0;
                *(unsigned short *)(((0x12A + a4) + 0x4)) = 0x0;
                *(unsigned short *)((a4 + 0x1E)) = 0x1E;
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                t666 = FUN_0c07d2c4((((short)t0 * (short)0x3938) + 0xC532498), (a4 + 0x1E));
                if ((t666 != 0) && (u667 = (((struct o160_float *)((((short)t0 * (short)0x3938) + 0xC532498)))->v), u667 > 0.0f)) {
                    t670 = *(signed char *)0xC542235;
                    t746 = t670;
                    if (t670 != 2) {
                    } else {
                        t671 = *(short *)((a4 + 0x1C));
                        *(unsigned short *)((a4 + 0x1C)) = (t671 - 1);
                        t746 = (short)(t671 - 1);
                        if ((int)(short)(t671 - 1) > 0) {
                        } else {
                            math_mat_get_translate(((((struct oA4_int *)(a4))->v)), (((int)stk + 0) + 0xC));
                            FUN_0c187798();
                            math_mat_transform_vector(((int)stk + 0), ((((struct oA4_int *)(a4))->v)));
                            *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) + (*(float *)(((int)stk + 0))));
                            *(float *)(((int)stk + 16)) = ((*(float *)(((int)stk + 16))) + (*(float *)(((int)stk + 4))));
                            *(float *)(((int)stk + 20)) = ((*(float *)(((int)stk + 20))) + (*(float *)(((int)stk + 8))));
                            FUN_0c187798();
                            FUN_0c1632e0(0xFFFFFFFF, (a4 + 0x28), 0x11, 0.5f);
                            FUN_0c05aae4(0xD1, (a4 + 0x28));
                            t746 = (FUN_0c0c2d56(a4, 0xB, (*(signed char *)((a4 + 0x1)))));
                        }
                    }
                } else {
                    math_mat_get_translate(((((struct oA4_int *)(a4))->v)), (((int)stk + 0) + 0xC));
                    FUN_0c187798();
                    math_mat_transform_vector(((int)stk + 0), ((((struct oA4_int *)(a4))->v)));
                    *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) + (*(float *)(((int)stk + 0))));
                    *(float *)(((int)stk + 16)) = ((*(float *)(((int)stk + 16))) + (*(float *)(((int)stk + 4))));
                    *(float *)(((int)stk + 20)) = ((*(float *)(((int)stk + 20))) + (*(float *)(((int)stk + 8))));
                    FUN_0c187798();
                    t746 = (FUN_0c0c2d56(a4, 0x6, (*(signed char *)((a4 + 0x1)))));
                }
            }
        }
    } else {
        t729 = FUN_0c0c3e3a(a4, a5, a6);
        t746 = t729;
        if (t729 != 0) {
        } else {
            t731 = *(signed char *)((a4 + 0x15));
            if (t731 != 0) {
                if (t731 != 1) {
                    if (t731 != 2) {
                        t746 = t731;
                        if (t731 != 3) {
                        } else {
                            t746 = (FUN_0c0c8f2e(a4));
                        }
                    } else {
                        t746 = (FUN_0c0c8e8c(a4));
                    }
                } else {
                    t746 = (FUN_0c0c8d00(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4)));
                }
            } else {
                t746 = (FUN_0c0c8c90(a4));
            }
        }
    }
    return t746;
}

int FUN_0c0c9568(int a4, int a5, int a6)
{
    register int t0;
    register int t1;

    t0 = FUN_0c0c3e3a(a4, a5, a6);
    if (t0 != 0) {
        return t0;
    }
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 == 1) {
            t1 = FUN_0c0c2ce4(a4);
            if (t1 != 0) {
                if (t1 != 2) {
                    *(unsigned short *)((a4 + 0x1C)) = 0x3C;
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    return 0x15;
                }
                return FUN_0c0c2d56(a4, 0x3, (*(signed char *)((a4 + 0x1))));
            }
            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
            (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
            return 0x50;
        }
        if (t0 == 2) {
            t1 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
            if ((int)(short)(t1 - 1) <= 0) {
                FUN_0c16ac5c(a4);
                FUN_0c059df2((*(signed char *)((a4 + 0x1))), 0x56);
                return FUN_0c0c2d56(a4, 0xB, (*(signed char *)((a4 + 0x1))));
            }
            t1 = (((struct oC4_int *)(a4))->v);
            (((struct o7C_uint *)(t1))->v) = (((((struct o7C_int *)(t1))->v)) + 0xE39);
            return 0x7C;
        }
        if (t0 == 3) {
            t1 = *(signed char *)((a4 + 0x16));
            if (t1 != 0) {
                if (t1 != 1) {
                    return t1;
                }
                (((struct oA8_uchar *)(a4))->v) = ((*(signed char *)0xC542260) & 0x1);
                t1 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
                if ((int)(short)(t1 - 1) <= 0) {
                    return FUN_0c0c2d56(a4, 0xB, (*(signed char *)((a4 + 0x1))));
                }
                return (short)(t1 - 1);
            }
            *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) + 0x666);
            if (0.0f > ((((struct o50_float *)(a4))->v))) {
                t1 = FUN_0c0c2ce4(a4);
                if (t1 != 0) {
                    if (t1 == 2) {
                        return FUN_0c0c2d56(a4, 0x3, (*(signed char *)((a4 + 0x1))));
                    }
                    *(unsigned short *)((a4 + 0x1C)) = 0x1E;
                    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                    return 0x16;
                }
            }
            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
            (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
            return 0x50;
        }
        return t0;
    }
    t0 = *(signed char *)((a4 + 0x41C));
    if ((unsigned char)t0 != 79) {
        if ((unsigned char)t0 != 80) {
            if ((unsigned char)t0 != 81) {
                if ((unsigned char)t0 != 76) {
                    if ((unsigned char)t0 != 75) {
                        if ((unsigned char)t0 != 82) {
                            if ((unsigned char)t0 != 121) {
                                if (((unsigned char)t0 != 64) && ((unsigned char)t0 != 65)) {
                                    if (((unsigned char)t0 != 100) && ((unsigned char)t0 != 115)) {
                                        t1 = (unsigned char)t0;
                                        if (((unsigned char)t0 == 7) || ((unsigned char)t0 == 45)) {
                                            FUN_0c0c2ab6(a4, 0x3E);
                                            (((struct o12A_ushort *)(a4))->v) = 0x0;
                                            (((struct o50_float *)(a4))->v) = 20.0f;
                                            (((struct o5C_float *)(a4))->v) = -2.0f;
                                            (((struct o15_uchar *)(a4))->v) = 0x3;
                                            (((struct o16_uchar *)(a4))->v) = 0x0;
                                            t1 = 0x16;
                                        }
                                        t0 = t1;
                                    } else {
                                        FUN_0c0c2ab6(a4, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738CB))));
                                        (((struct o12A_ushort *)(a4))->v) = 0x0;
                                        (((struct o50_float *)(a4))->v) = 20.0f;
                                        (((struct o5C_float *)(a4))->v) = -2.0f;
                                        (((struct o15_uchar *)(a4))->v) = 0x3;
                                        (((struct o16_uchar *)(a4))->v) = 0x0;
                                        t0 = 0x16;
                                    }
                                    return t0;
                                }
                                FUN_0c059df2((*(signed char *)((a4 + 0x1))), 0x49);
                                FUN_0c0c4482(a4, 0x5, 0x50);
                                return FUN_0c0c2d56(a4, 0xB, (*(signed char *)((a4 + 0x1))));
                            }
                            FUN_0c16dd24((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532498), 0x1);
                            return FUN_0c0c2d56(a4, 0xB, (*(signed char *)((a4 + 0x1))));
                        }
                        FUN_0c16dd24((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532498), 0x0);
                        return FUN_0c0c2d56(a4, 0xB, (*(signed char *)((a4 + 0x1))));
                    }
                    FUN_0c16c210(a4);
                    return FUN_0c0c2d56(a4, 0xB, (*(signed char *)((a4 + 0x1))));
                }
                (((struct o50_float *)(a4))->v) = 0.0f;
                (((struct o5C_float *)(a4))->v) = -2.0f;
                FUN_0c0c2ab6(a4, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738CB))));
                (((struct o12A_ushort *)(a4))->v) = 0x0;
                FUN_0c0c25c4(a4);
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                return 0x15;
            }
            FUN_0c16ab9e((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532498), 0x2);
            return FUN_0c0c2d56(a4, 0xB, (*(signed char *)((a4 + 0x1))));
        }
        FUN_0c16ab9e((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532498), 0x1);
        return FUN_0c0c2d56(a4, 0xB, (*(signed char *)((a4 + 0x1))));
    }
    FUN_0c16ab9e((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532498), 0x0);
    return FUN_0c0c2d56(a4, 0xB, (*(signed char *)((a4 + 0x1))));
}

int FUN_0c0c9810(int a4, int a5, int a6)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x41D));
    if ((unsigned int)t0 < (unsigned int)0xC) {
        switch ((t0 << 1)) {
            case 0:
            {
                return FUN_0c0c4770(a4, a5, a6);
            }
            case 2:
            {
                return FUN_0c0c47a4(a4, a5, a6);
            }
            case 4:
            {
                return FUN_0c0c4b76(a4, a5, a6);
            }
            case 6:
            {
                return FUN_0c0c4bcc(a4, a5, a6);
            }
            case 8:
            {
                return FUN_0c0c4c1c(a4, a5, a6);
            }
            case 10:
            {
                return FUN_0c0c5024(a4, a5, a6);
            }
            case 12:
            {
                return FUN_0c0c52c4(a4, a5, a6);
            }
            case 14:
            {
                return FUN_0c0c8c08(a4, a5, a6);
            }
            case 16:
            {
                return FUN_0c0c8c36(a4, a5, a6);
            }
            case 18:
            {
                return FUN_0c0c8fd4(a4, a5, a6);
            }
            case 20:
            {
                return FUN_0c0c9568(a4, a5, a6);
            }
            default:
            {
                return FUN_0c0c2a80(a4);
            }
        }
    }
    return t0;
}

int FUN_0c0c9884(int a4, int a5, int a6, int a7, int a8)
{
    int stk[5];

    register int R1;
    register int R2;
    register int R3;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    v0_6 = a4;
    v0_4 = a5;
    v0_7 = a6;
    v0_5 = a7;
    *(unsigned int *)(((int)stk + 4)) = v0_4;
    *(unsigned int *)(((int)stk + 8)) = v0_7;
    *(unsigned int *)(((int)stk + 12)) = v0_5;
    v0_8 = *(signed char *)((((v0_6 * 0x34) + 0xC2738B8) + 0x2));
    v0_7 = (v0_8);
    v0_2 = (0xC4B40D8);
    v0_3 = (0x34);
    v0_0 = (0xC2738B8);
    v0_1 = (v0_6);
    v0_4 = (0xC037320);
    v0_4 = (((((struct oC_int *)0xC4B40CC)->v)));
    v0_6 = (0xC03F444);
    v0_6 = (0xC03744A);
    if ((v0_8 == 0)) goto L_C0C9918;
    if ((v0_7 != 1)) goto L_C0C98C0;
    v0_2 = *(signed char *)((((v0_1 * v0_3) + v0_0) + 0x1));
    v0_4 = FUN_0c037320((signed char)v0_2, (*(int *)0xC4B410C));
    v0_2 = (v0_2);
    v0_7 = (v0_4);
    if (((int)v0_4 >= 0)) goto L_C0C9A10;
    L_C0C9D76:;
    v0_7 = (0x0);
    L_C0C9D78:;
    return v0_7;
    L_C0C9A10:;
    v0_5 = FUN_0c03f444(0x9, 0x0, v0_7);
    v0_4 = (v0_5);
    if ((v0_5 != 0)) goto L_C0C9A20;
    goto L_C0C9D76;
    L_C0C9A20:;
    FUN_0c03733c(v0_4, (signed char)v0_2, (*(int *)0xC4B410C));
    L_C0C9AA0:;
    *(unsigned int *)((v0_4 + 0x4)) = 0xC0C9810;
    (((struct oAC_ushort *)(v0_4))->v) = 0xF;
    (((struct oA9_uchar *)(v0_4))->v) = 0x40;
    FUN_0c0c25c4(v0_4);
    (((struct o41D_uchar *)(v0_4))->v) = 0x0;
    (((struct o41C_uchar *)(v0_4))->v) = v0_1;
    (((struct o424_uchar *)(v0_4))->v) = (*(int *)(((int)stk + 4)));
    FUN_0c0c2ab6(v0_4, (*(signed char *)(((((unsigned short)(unsigned char)(*(signed char *)((v0_4 + 0x41C))) * (unsigned short)0x34) + v0_0) + 0x13))));
    L_C0C9D44:;
    (((struct o420_ushort *)(v0_4))->v) = (*(short *)((((v0_1 * v0_3) + v0_0) + 0x1A)));
    FUN_0c0c212c(v0_4);
    *(volatile int *)(((int)stk + 12));
    FUN_0c187798();
    FUN_0c0c2aa2(v0_4, a8);
    FUN_0c0c241a(v0_4);
    L_C0C9D72:;
    v0_7 = (v0_4);
    goto L_C0C9D78;
    L_C0C98C0:;
    if ((v0_7 != 2)) goto L_C0C98C8;
    v0_2 = *(signed char *)((((v0_1 * v0_3) + v0_0) + 0x1));
    v0_4 = FUN_0c037320((signed char)v0_2, ((((struct o0_int *)0xC4B40CC)->v)));
    v0_2 = (v0_2);
    v0_7 = (v0_4);
    if (((int)v0_4 >= 0)) goto L_C0C9A84;
    goto L_C0C9D76;
    L_C0C9A84:;
    v0_5 = FUN_0c03f444(0x9, 0x0, v0_7);
    v0_4 = (v0_5);
    if ((v0_5 != 0)) goto L_C0C9A94;
    goto L_C0C9D76;
    L_C0C9A94:;
    FUN_0c03733c(v0_4, (signed char)v0_2, ((((struct o0_int *)0xC4B40CC)->v)));
    goto L_C0C9AA0;
    L_C0C98C8:;
    if ((v0_7 != 3)) goto L_C0C98D0;
    *(unsigned char *)(((int)stk + 0)) = (*(signed char *)((((v0_1 * v0_3) + v0_0) + 0x1)));
    v0_4 = FUN_0c037320((*(signed char *)(((int)stk + 0))), v0_4);
    v0_6 = (v0_4);
    if (((int)v0_4 >= 0)) goto L_C0C9AFA;
    goto L_C0C9D76;
    L_C0C9AFA:;
    v0_4 = FUN_0c037320(0x27, ((((struct o0_int *)0xC4B40CC)->v)));
    v0_6 = (v0_4);
    if (((int)v0_4 >= 0)) goto L_C0C9B0C;
    goto L_C0C9D76;
    L_C0C9B0C:;
    v0_5 = FUN_0c03f444(0x9, 0x0, 0x6);
    v0_4 = (v0_5);
    if ((v0_5 != 0)) goto L_C0C9B1E;
    goto L_C0C9D76;
    L_C0C9B1E:;
    v0_5 = *(signed char *)(((int)stk + 0));
    FUN_0c03733c(v0_4, v0_5, (*(int *)((v0_2 + 0x0))));
    FUN_0c03744a(((((struct oD0_int *)(v0_4))->v)), 0x2, v0_5, (*(int *)((v0_2 + 0x0))));
    (((struct o68_uint *)((*(int *)(((0xC4 + v0_4) + 0xC)))))->v) = (((((struct oC4_int *)(v0_4))->v)) + 0x28);
    *(unsigned short *)((((((struct oD0_int *)(v0_4))->v)) + 0x6)) = 0x29;
    FUN_0c03744a(((((struct oD4_int *)(v0_4))->v)), 0x2, v0_5, (*(int *)((v0_2 + 0x0))));
    (((struct o68_uint *)((*(int *)(((0xC4 + v0_4) + 0x10)))))->v) = (((((struct oC4_int *)(v0_4))->v)) + 0x28);
    *(unsigned short *)((((((struct oD4_int *)(v0_4))->v)) + 0x6)) = 0x29;
    FUN_0c03744a(((((struct oD8_int *)(v0_4))->v)), 0x0, 0x27, ((((struct o0_int *)0xC4B40CC)->v)));
    (((struct o68_uint *)((*(int *)(((0xC4 + v0_4) + 0x14)))))->v) = (((((struct oC4_int *)(v0_4))->v)) + 0x28);
    *(unsigned short *)((((((struct oD8_int *)(v0_4))->v)) + 0x6)) = 0x29;
    (((struct o70_float *)(((((struct oD8_int *)(v0_4))->v))))->v) = 7.0f;
    (((struct o74_float *)(((((struct oD8_int *)(v0_4))->v))))->v) = 93.1719971f;
    v0_6 = ((0xC4 + v0_4));
    L_C0C9D00:;
    *(unsigned int *)((v0_4 + 0x4)) = 0xC0C9810;
    (((struct oAC_ushort *)(v0_4))->v) = 0x1F;
    (((struct oA9_uchar *)(v0_4))->v) = 0x40;
    FUN_0c0c25c4(v0_4);
    (((struct o41D_uchar *)(v0_4))->v) = 0x0;
    (((struct o41C_uchar *)(v0_4))->v) = v0_1;
    (((struct o424_uchar *)(v0_4))->v) = (*(int *)(((int)stk + 4)));
    (((struct o1B_uchar *)(v0_4))->v) = (*(int *)(((int)stk + 8)));
    FUN_0c0c2ab6(v0_4, (*(signed char *)(((((unsigned short)(unsigned char)(*(signed char *)((v0_4 + 0x41C))) * (unsigned short)0x34) + v0_0) + 0x12))));
    goto L_C0C9D44;
    L_C0C98D0:;
    if ((v0_7 != 4)) goto L_C0C98D8;
    *(unsigned char *)(((int)stk + 0)) = (*(signed char *)((((v0_1 * v0_3) + v0_0) + 0x1)));
    v0_3 = FUN_0c037320((*(signed char *)(((int)stk + 0))), v0_4);
    v0_6 = (v0_3);
    if (((int)v0_3 >= 0)) goto L_C0C9BF4;
    goto L_C0C9D76;
    L_C0C9BF4:;
    v0_3 = FUN_0c03f444(0x9, 0x0, 0x1);
    v0_4 = (v0_3);
    if ((v0_3 != 0)) goto L_C0C9C06;
    goto L_C0C9D76;
    L_C0C9C06:;
    FUN_0c03744a(((((struct oC4_int *)(v0_4))->v)), 0x0, (*(signed char *)(((int)stk + 0))), (*(int *)((v0_2 + 0x0))));
    *(unsigned int *)((v0_4 + 0x4)) = 0xC0C9810;
    (((struct oAC_ushort *)(v0_4))->v) = 0x1F;
    (((struct oA9_uchar *)(v0_4))->v) = 0x40;
    FUN_0c0c25c4(v0_4);
    (((struct o41D_uchar *)(v0_4))->v) = 0x0;
    (((struct o41C_uchar *)(v0_4))->v) = v0_1;
    (((struct o424_uchar *)(v0_4))->v) = (*(int *)(((int)stk + 4)));
    (((struct o1B_uchar *)(v0_4))->v) = (*(int *)(((int)stk + 8)));
    FUN_0c0c2ab6(v0_4, (*(signed char *)(((((unsigned short)(unsigned char)(*(signed char *)((v0_4 + 0x41C))) * (unsigned short)0x34) + v0_0) + 0x12))));
    (((struct o420_ushort *)(v0_4))->v) = (*(short *)((((v0_1 * 0x34) + v0_0) + 0x1A)));
    FUN_0c0c212c(v0_4);
    *(volatile int *)(((int)stk + 12));
    FUN_0c187798();
    FUN_0c0c2aa2(v0_4, a8);
    FUN_0c0c241a(v0_4);
    if ((v0_1 != 69)) goto L_C0C9D72;
    FUN_0c16e8f0(v0_4);
    goto L_C0C9D72;
    L_C0C98D8:;
    if ((v0_7 != 5)) goto L_C0C98E0;
    *(unsigned char *)(((int)stk + 0)) = (*(signed char *)((((v0_1 * v0_3) + v0_0) + 0x1)));
    v0_5 = *(signed char *)(((int)stk + 0));
    *(unsigned int *)(((int)stk + 16)) = v0_5;
    v0_4 = FUN_0c037320(v0_5, v0_4);
    v0_6 = (v0_4);
    if (((int)v0_4 < 0)) goto L_C0C9D76;
    v0_5 = FUN_0c03f444(0x9, 0x0, 0x2);
    v0_4 = (v0_5);
    if ((v0_5 == 0)) goto L_C0C9D76;
    FUN_0c03744a(((((struct oC4_int *)(v0_4))->v)), 0x0, (*(int *)(((int)stk + 16))), (*(int *)((v0_2 + 0x0))));
    FUN_0c03744a(((((struct oC8_int *)(v0_4))->v)), 0x0, (*(int *)(((int)stk + 16))), (*(int *)((v0_2 + 0x0))));
    goto L_C0C9D00;
    L_C0C98E0:;
    goto L_C0C9D76;
    L_C0C9918:;
    v0_3 = *(signed char *)((((v0_1 * v0_3) + v0_0) + 0x1));
    v0_4 = FUN_0c037320((signed char)v0_3, v0_4);
    v0_7 = (v0_4);
    v0_6 = (v0_3);
    if (((int)v0_4 >= 0)) goto L_C0C9930;
    goto L_C0C9D76;
    L_C0C9930:;
    v0_3 = FUN_0c03f444(0x9, 0x0, v0_7);
    v0_4 = (v0_3);
    if ((v0_3 != 0)) goto L_C0C9940;
    goto L_C0C9D76;
    L_C0C9940:;
    FUN_0c03733c(v0_4, (signed char)v0_6, (*(int *)((v0_2 + 0x0))));
    *(unsigned int *)((v0_4 + 0x4)) = 0xC0C9810;
    (((struct oAC_ushort *)(v0_4))->v) = 0x1F;
    (((struct oA9_uchar *)(v0_4))->v) = 0x40;
    FUN_0c0c25c4(v0_4);
    (((struct o41D_uchar *)(v0_4))->v) = 0x0;
    (((struct o41C_uchar *)(v0_4))->v) = v0_1;
    (((struct o424_uchar *)(v0_4))->v) = (*(int *)(((int)stk + 4)));
    (((struct o1B_uchar *)(v0_4))->v) = (*(int *)(((int)stk + 8)));
    FUN_0c0c2ab6(v0_4, (*(signed char *)(((((unsigned short)(unsigned char)(*(signed char *)((v0_4 + 0x41C))) * (unsigned short)0x34) + v0_0) + 0x12))));
    (((struct o420_ushort *)(v0_4))->v) = (*(short *)((((v0_1 * 0x34) + v0_0) + 0x1A)));
    FUN_0c0c212c(v0_4);
    *(volatile int *)(((int)stk + 12));
    FUN_0c187798();
    FUN_0c0c2aa2(v0_4, a8);
    FUN_0c0c241a(v0_4);
    v0_0 = *(signed char *)((v0_4 + 0x41C));
    v0_7 = ((unsigned char)v0_0);
    if (((unsigned char)v0_0 == 11)) goto L_C0C99D4;
    if ((v0_7 == 35)) goto L_C0C99D8;
    if ((v0_7 == 73)) goto L_C0C99E8;
    goto L_C0C9D72;
    L_C0C99E8:;
    FUN_0c1614c8(v0_4, 0x1);
    goto L_C0C9D72;
    L_C0C99D8:;
    v0_7 = (0x9);
    L_C0C99DA:;
    FUN_0c15c344(v0_4, (v0_4 + 0x28), v0_7, v0_5);
    goto L_C0C9D72;
    L_C0C99D4:;
    v0_7 = (0x8);
    goto L_C0C99DA;
}
