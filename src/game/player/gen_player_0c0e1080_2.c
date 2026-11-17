/* game/player: functions 0C0E1080-0C0E1EC0, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o12C_ushort { char p[0x12C]; unsigned short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o1B_uchar { char p[0x1B]; unsigned char v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o70_float { char p[0x70]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oD0_int { char p[0xD0]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f566(int, int);
int FUN_0c042fe0(void);
int FUN_0c043010(void);
int FUN_0c04340c(void);
int thunk_FUN_0c05abb2(int, int);
int FUN_0c0bbf58(int);
int FUN_0c0cff28(int, int);
int FUN_0c0e1080(int);
int FUN_0c0e1096(int);
int FUN_0c0e10a8(int, int, int);
int FUN_0c0e1108(int, int, int);
int FUN_0c0e11ee(int, int, int, int);
int FUN_0c0e1270(int);
int FUN_0c0e12aa(int);
int FUN_0c0e1314(int);
int FUN_0c0e132a(int);
int FUN_0c0e138c(int);
int FUN_0c179ac0(void);
int FUN_0c187798(void);
int FUN_0c0e1524(int a4, int a5, int a6, int a7);

int FUN_0c0e1524(int a4, int a5, int a6, int a7)
{
    register int t2;
    register int t3;
    register int t6;
    register int t10;
    register int t12;
    register int t14;
    register int t26;
    register int t36;
    register int t38;
    register int t40;
    register int t43;
    register int t62;
    register int t63;
    register int t77;
    register int t82;
    register int t83;
    register int t96;
    register int t99;
    register int t107;
    register int t108;
    register int t113;
    register int t131;
    register int t134;
    register int t140;
    register int t148;
    register int t149;
    register int t154;
    register int t172;
    register int t174;
    register int t175;
    register int t191;
    register int t184;
    register int t198;
    register int t209;
    register int t211;
    register int t225;
    register int t227;
    register int t230;
    register int t238;
    register int t242;
    register int t245;
    register int t252;
    register int t255;
    register int t259;
    register int t261;
    register int t268;
    register int t278;
    register int t286;
    register int t291;
    register int t299;
    register int t316;
    register int t317;
    register int t319;
    register int t328;
    register int t331;
    register int t335;
    register int t337;
    register int t339;
    register int t351;
    register int t361;
    register int t363;
    register int t365;
    register int t368;
    register int t387;
    register int t388;
    register int t402;
    register int t407;
    register int t408;
    register int t421;
    register int t424;
    register int t432;
    register int t433;
    register int t438;
    register int t456;
    register int t459;
    register int t465;
    register int t473;
    register int t474;
    register int t479;
    register int t497;
    register int t499;
    register int t500;
    register int t516;
    register int t509;
    register int t523;
    register int t534;
    register int t536;
    register int t550;
    register int t552;
    register int t555;
    register int t563;
    register int t567;
    register int t570;
    register int t577;
    register int t580;
    register int t584;
    register int t586;
    register int t593;
    register int t603;
    register int t611;
    register int t616;
    register int t624;
    register int t92;
    register int t48;
    register int t49;
    register int t167;
    register int t283;
    register int t309;
    int t292;
    register int t293;
    int t300;
    register int t301;
    register int t318;
    register int t417;
    register int t373;
    register int t374;
    register int t492;
    register int t608;
    register int t634;
    int t617;
    register int t618;
    int t625;
    register int t626;

    if ((*(signed char *)0xC54223C) != 2) {
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    t2 = *(signed char *)((a4 + 0x14));
    if (t2 != 0) {
        if (t2 != 1) {
            return t2;
        }
        t3 = FUN_0c042fe0();
        if (t3 == 0) {
            return t3;
        }
        t6 = *(signed char *)((a4 + 0x15));
        if (t6 != 0) {
            if (t6 != 1) {
                if (t6 == 2) {
                    FUN_0c0e10a8(a4, 0x0, 0x2);
                    t10 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t10 - 1);
                    t12 = (short)(t10 - 1);
                    if ((int)(short)(t10 - 1) > 0) {
                    } else {
                        t12 = (FUN_0c0cff28(a4, 0x3));
                    }
                    return t12;
                }
                if (t6 == 3) {
                    t14 = *(signed char *)((a4 + 0x17));
                    if (t14 != 0) {
                        if (t14 != 1) {
                            if (t14 != 2) {
                                if (t14 != 3) {
                                    t92 = t14;
                                    if (t14 == 4) {
                                        FUN_0c0e1108(a4, 0x0, 0x2);
                                        t92 = 0x22;
                                        if ((int)((((struct o22_short *)(a4))->v)) > 0) {
                                        } else {
                                            FUN_0c0cff28(a4, 0x4);
                                            (((struct o17_uchar *)(a4))->v) = 0x0;
                                            t92 = 0x17;
                                        }
                                    }
                                } else {
                                    FUN_0c0e10a8(a4, 0x2, 0x2);
                                    FUN_0c0e1108(a4, 0x0, 0x1);
                                    t26 = *(short *)((a4 + 0x1C));
                                    *(unsigned short *)((a4 + 0x1C)) = (t26 - 1);
                                    t92 = (short)(t26 - 1);
                                    if ((int)(short)(t26 - 1) > 0) {
                                    } else {
                                        (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                                        (((struct o22_ushort *)(a4))->v) = 0x1E;
                                        t92 = (thunk_FUN_0c05abb2(0x57, (a4 + 0x28)));
                                    }
                                }
                            } else {
                                FUN_0c0e10a8(a4, 0x1, 0x2);
                                FUN_0c0e1108(a4, 0x0, 0x0);
                                t36 = *(short *)((a4 + 0x1C));
                                *(unsigned short *)((a4 + 0x1C)) = (t36 - 1);
                                t92 = (short)(t36 - 1);
                                if ((int)(short)(t36 - 1) > 0) {
                                } else {
                                    thunk_FUN_0c05abb2(0x57, (a4 + 0x28));
                                    t38 = *(signed char *)((a4 + 0x16));
                                    if ((*(signed char *)(((((t38 << 2) + t38) + 0xC1CA530) + 0x1))) != 0) {
                                        t40 = *(signed char *)((a4 + 0x16));
                                        t48 = (*(int *)((0xC1CA510 + ((*(signed char *)(((((t40 << 2) + t40) + 0xC1CA530) + 0x4))) << 2))));
                                        t49 = 0x2;
                                    } else {
                                        t43 = *(signed char *)((a4 + 0x16));
                                        t48 = (*(int *)((0xC1CA510 + ((*(signed char *)(((((t43 << 2) + t43) + 0xC1CA530) + 0x4))) << 2))));
                                        t49 = 0x0;
                                    }
                                    FUN_0c0e11ee(a4, 0x2, t48, t49);
                                    (((struct o20_ushort *)(a4))->v) = 0x1E;
                                    (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                                    t92 = 0x17;
                                }
                            }
                        } else {
                            FUN_0c0e10a8(a4, 0x0, 0x2);
                            t62 = *(short *)((a4 + 0x1C));
                            *(unsigned short *)((a4 + 0x1C)) = (t62 - 1);
                            t92 = (short)(t62 - 1);
                            if ((int)(short)(t62 - 1) > 0) {
                            } else {
                                t63 = *(signed char *)((a4 + 0x16));
                                FUN_0c0e11ee(a4, 0x1, (*(int *)((0xC1CA510 + ((*(signed char *)(((((t63 << 2) + t63) + 0xC1CA530) + 0x3))) << 2)))), 0x0);
                                *(unsigned short *)((a4 + 0x1E)) = 0x1E;
                                thunk_FUN_0c05abb2(0x57, (a4 + 0x28));
                                (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                                t92 = 0x17;
                            }
                        }
                    } else {
                        (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                        t77 = *(signed char *)((a4 + 0x16));
                        FUN_0c0e11ee(a4, 0x0, (*(int *)((0xC1CA510 + ((*(signed char *)(((((t77 << 2) + t77) + 0xC1CA530) + 0x2))) << 2)))), 0x0);
                        (((struct o22_ushort *)(a4))->v) = 0x0;
                        (((struct o20_ushort *)(a4))->v) = 0x0;
                        *(unsigned short *)((a4 + 0x1E)) = 0x0;
                        FUN_0c0e10a8(a4, 0x0, 0x2);
                        t82 = *(short *)((a4 + 0x1C));
                        *(unsigned short *)((a4 + 0x1C)) = (t82 - 1);
                        t92 = (short)(t82 - 1);
                        if ((int)(short)(t82 - 1) > 0) {
                        } else {
                            t83 = *(signed char *)((a4 + 0x16));
                            FUN_0c0e11ee(a4, 0x1, (*(int *)((0xC1CA510 + ((*(signed char *)(((((t83 << 2) + t83) + 0xC1CA530) + 0x3))) << 2)))), 0x0);
                            *(unsigned short *)((a4 + 0x1E)) = 0x1E;
                            thunk_FUN_0c05abb2(0x57, (a4 + 0x28));
                            (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                            t92 = 0x17;
                        }
                    }
                    return t92;
                }
                if (t6 == 4) {
                    t96 = *(signed char *)((a4 + 0x17));
                    if (t96 != 0) {
                        t167 = t96;
                        if (t96 != 1) {
                        } else {
                            t99 = *(signed char *)((a4 + 0x16));
                            if ((int)(*(signed char *)(((((t99 << 2) + t99) + 0xC1CA530) + 0x0))) >= 0) {
                                FUN_0c0e12aa(a4);
                            }
                            t107 = *(short *)((a4 + 0x1C));
                            *(unsigned short *)((a4 + 0x1C)) = (t107 - 1);
                            t167 = (short)(t107 - 1);
                            if ((int)(short)(t107 - 1) > 0) {
                            } else {
                                (((struct o17_uchar *)(a4))->v) = 0x0;
                                t108 = *(signed char *)((a4 + 0x16));
                                if ((int)(*(signed char *)(((((t108 << 2) + t108) + 0xC1CA530) + 0x0))) < 0) {
                                    FUN_0c0cff28(a4, 0x5);
                                    *(unsigned short *)((a4 + 0x1C)) = 0x78;
                                    t167 = 0x78;
                                } else {
                                    t113 = *(signed char *)((a4 + 0x16));
                                    if ((*(signed char *)((0xC1CA530 + ((t113 << 2) + t113)))) == 4) {
                                        FUN_0c0cff28(a4, 0x7);
                                        *(unsigned short *)((a4 + 0x1C)) = 0x78;
                                        t167 = 0x78;
                                    } else {
                                        t167 = (FUN_0c0cff28(a4, 0x6));
                                    }
                                }
                            }
                        }
                    } else {
                        t131 = *(signed char *)((a4 + 0x16));
                        t134 = 0xA;
                        if ((int)(*(signed char *)(((((t131 << 2) + t131) + 0xC1CA530) + 0x0))) >= 0) {
                            FUN_0c0e1270(a4);
                            t134 = 0x1E;
                        }
                        *(unsigned short *)((a4 + 0x1C)) = t134;
                        (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                        t140 = *(signed char *)((a4 + 0x16));
                        if ((int)(*(signed char *)(((((t140 << 2) + t140) + 0xC1CA530) + 0x0))) >= 0) {
                            FUN_0c0e12aa(a4);
                        }
                        t148 = *(short *)((a4 + 0x1C));
                        *(unsigned short *)((a4 + 0x1C)) = (t148 - 1);
                        t167 = (short)(t148 - 1);
                        if ((int)(short)(t148 - 1) > 0) {
                        } else {
                            (((struct o17_uchar *)(a4))->v) = 0x0;
                            t149 = *(signed char *)((a4 + 0x16));
                            if ((int)(*(signed char *)(((((t149 << 2) + t149) + 0xC1CA530) + 0x0))) < 0) {
                                FUN_0c0cff28(a4, 0x5);
                                *(unsigned short *)((a4 + 0x1C)) = 0x78;
                                t167 = 0x78;
                            } else {
                                t154 = *(signed char *)((a4 + 0x16));
                                if ((*(signed char *)((0xC1CA530 + ((t154 << 2) + t154)))) == 4) {
                                    FUN_0c0cff28(a4, 0x7);
                                    *(unsigned short *)((a4 + 0x1C)) = 0x78;
                                    t167 = 0x78;
                                } else {
                                    t167 = (FUN_0c0cff28(a4, 0x6));
                                }
                            }
                        }
                    }
                    return t167;
                }
                if (t6 == 5) {
                    t172 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t172 - 1);
                    if ((int)(short)(t172 - 1) <= 0) {
                        FUN_0c0cff28(a4, 0x0);
                        return FUN_0c0e1080(a4);
                    }
                    return (short)(t172 - 1);
                }
                if (t6 == 6) {
                    t174 = (((struct oD0_int *)(a4))->v);
                    t175 = *(signed char *)((a4 + 0x17));
                    if (t175 != 0) {
                        if (t175 != 1) {
                            if (t175 != 2) {
                                t191 = t175;
                                if (t175 != 3) {
                                } else {
                                    (((struct o70_float *)(t174))->v) = (((((struct o70_float *)(t174))->v)) - 5.0f);
                                    *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
                                    if ((int)(*(short *)((a4 + 0x1C))) > (int)0x28) {
                                        FUN_0c0e138c(a4);
                                    }
                                    t184 = *(short *)((a4 + 0x1C));
                                    t191 = t184;
                                    if (t184 == 0) {
                                        FUN_0c0cff28(a4, 0x0);
                                        FUN_0c0e1080(a4);
                                        (((struct o17_uchar *)(a4))->v) = 0x0;
                                        t191 = 0x17;
                                    }
                                }
                                return t191;
                            }
                            FUN_0c0e12aa(a4);
                            *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
                            FUN_0c0e138c(a4);
                            t198 = *(short *)((a4 + 0x1C));
                            if (t198 == 0) {
                                (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                                *(unsigned short *)((a4 + 0x1C)) = 0x32;
                                return FUN_0c0e1314(a4);
                            }
                            return t198;
                        }
                        FUN_0c0e12aa(a4);
                        (((struct o70_float *)(t174))->v) = (((((struct o70_float *)(t174))->v)) + 5.0f);
                        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
                        if ((int)(*(short *)((a4 + 0x1C))) < (int)0xA) {
                            FUN_0c0e138c(a4);
                        }
                        t209 = *(short *)((a4 + 0x1C));
                        t211 = t209;
                        if (t209 == 0) {
                            (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                            *(unsigned short *)((a4 + 0x1C)) = 0x14;
                            t211 = 0x14;
                        }
                        return t211;
                    }
                    (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                    *(unsigned short *)((a4 + 0x1C)) = 0x32;
                    FUN_0c0e132a(a4);
                    FUN_0c0e12aa(a4);
                    (((struct o70_float *)(t174))->v) = (((((struct o70_float *)(t174))->v)) + 5.0f);
                    *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
                    if ((int)(*(short *)((a4 + 0x1C))) < (int)0xA) {
                        FUN_0c0e138c(a4);
                    }
                    t225 = *(short *)((a4 + 0x1C));
                    t227 = t225;
                    if (t225 == 0) {
                        (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                        *(unsigned short *)((a4 + 0x1C)) = 0x14;
                        t227 = 0x14;
                    }
                    return t227;
                }
                if (t6 == 7) {
                    t230 = *(signed char *)((a4 + 0x17));
                    if (t230 != 0) {
                        if (t230 != 1) {
                            if (t230 != 2) {
                                return t230;
                            }
                            t238 = *(signed char *)((0x15 + (*(int *)0xC540DA4)));
                            if (t238 != 5) {
                                FUN_0c0cff28(a4, 0x0);
                                return FUN_0c0e1080(a4);
                            }
                            return t238;
                        }
                        FUN_0c0e12aa(a4);
                        t242 = *(signed char *)((0x15 + (*(int *)0xC540DA4)));
                        t245 = t242;
                        if (t242 == 5) {
                            FUN_0c0e1314(a4);
                            (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                            t245 = 0x17;
                        }
                        return t245;
                    }
                    (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                    FUN_0c0e12aa(a4);
                    t252 = *(signed char *)((0x15 + (*(int *)0xC540DA4)));
                    t255 = t252;
                    if (t252 == 5) {
                        FUN_0c0e1314(a4);
                        (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                        t255 = 0x17;
                    }
                    return t255;
                }
                return t6;
            }
            t259 = *(signed char *)((a4 + 0x17));
            if (t259 != 0) {
                if (t259 != 1) {
                    t283 = t259;
                    if (t259 != 2) {
                    } else {
                        FUN_0c0e10a8(a4, 0x0, 0x1);
                        t261 = *(short *)((a4 + 0x1C));
                        *(unsigned short *)((a4 + 0x1C)) = (t261 - 1);
                        t283 = (short)(t261 - 1);
                        if ((int)(short)(t261 - 1) > 0) {
                        } else {
                            FUN_0c0cff28(a4, 0x2);
                            (((struct o17_uchar *)(a4))->v) = 0x0;
                            *(unsigned short *)((a4 + 0x1C)) = 0x1E;
                            t283 = 0x1E;
                        }
                    }
                } else {
                    FUN_0c0e10a8(a4, 0x0, 0x0);
                    t268 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t268 - 1);
                    t283 = (short)(t268 - 1);
                    if ((int)(short)(t268 - 1) > 0) {
                    } else {
                        (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                        *(unsigned short *)((a4 + 0x1C)) = 0xF;
                        t283 = 0xF;
                    }
                }
            } else {
                (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                *(unsigned short *)((a4 + 0x1C)) = 0xF;
                (((struct o1B_uchar *)(a4))->v) = 0x0;
                FUN_0c0e10a8(a4, 0x0, 0x0);
                t278 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t278 - 1);
                t283 = (short)(t278 - 1);
                if ((int)(short)(t278 - 1) > 0) {
                } else {
                    (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                    *(unsigned short *)((a4 + 0x1C)) = 0xF;
                    t283 = 0xF;
                }
            }
            return t283;
        }
        t286 = FUN_0c0e1096(a4);
        if (t286 != 0) {
            FUN_0c0cff28(a4, 0x1);
            (((struct o16_uchar *)(a4))->v) = ((int)((int)(FUN_0c179ac0()) % (int)(*(int *)0xC1CA580)));
            t291 = FUN_0c043010();
            if ((t291 != 0) && (t292 = *(signed char *)((a4 + 0x16)), t293 = *(signed char *)((0xC1CA530 + ((t292 << 2) + t292))), t293 == 2)) {
                (((struct o16_uchar *)(a4))->v) = ((*(int *)0xC1CA580) - 1);
            }
            t299 = FUN_0c04340c();
            if ((t299 == 0) && (t300 = *(signed char *)((a4 + 0x16)), t301 = *(signed char *)((0xC1CA530 + ((t300 << 2) + t300))), t301 == 1)) {
                (((struct o16_uchar *)(a4))->v) = ((*(int *)0xC1CA580) - 1);
            }
            (((struct o17_uchar *)(a4))->v) = 0x0;
            (((struct o12C_ushort *)(a4))->v) = 0x0;
            t309 = 0x12C;
        } else {
            FUN_0c187798();
            t309 = (FUN_0c0bbf58(a4));
        }
        return t309;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    t316 = (FUN_0c03f566(a4, 0x4));
    t317 = 0xC1CA4E0;
    t319 = 0x0;
    for (;;) {
        if ((unsigned int)t319 >= (unsigned int)0x10) {
            break;
        }
        t318 = 0xC4;
        t316 = 0xC1CA4C4;
        t318 = (t318 + a4);
        t318 = (t318 + t319);
        t318 = (*(int *)((t318 + 0x0)));
        t316 = (FUN_0c03744a(t318, 0x0, (*(int *)((t319 + t316))), (*(int *)0xC4B410C)));
        t317 = (t317 + 0xC);
        t316 = 0xC;
        t316 = (FUN_0c187798());
        t319 = (t319 + 0x4);
    }
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct oAC_ushort *)(a4))->v) = 0xF;
    (((struct oBC_float *)(a4))->v) = 1.0f;
    (((struct oB8_float *)(a4))->v) = 1.0f;
    (((struct oB4_float *)(a4))->v) = 1.0f;
    FUN_0c187798();
    *(unsigned short *)((a4 + 0x1C)) = 0x3C;
    (((struct o12E_ushort *)(a4))->v) = 0x0;
    FUN_0c0e1080(a4);
    t328 = FUN_0c042fe0();
    if (t328 == 0) {
        return t328;
    }
    t331 = *(signed char *)((a4 + 0x15));
    if (t331 != 0) {
        if (t331 != 1) {
            if (t331 == 2) {
                FUN_0c0e10a8(a4, 0x0, 0x2);
                t335 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t335 - 1);
                t337 = (short)(t335 - 1);
                if ((int)(short)(t335 - 1) > 0) {
                } else {
                    t337 = (FUN_0c0cff28(a4, 0x3));
                }
                return t337;
            }
            if (t331 == 3) {
                t339 = *(signed char *)((a4 + 0x17));
                if (t339 != 0) {
                    if (t339 != 1) {
                        if (t339 != 2) {
                            if (t339 != 3) {
                                t417 = t339;
                                if (t339 == 4) {
                                    FUN_0c0e1108(a4, 0x0, 0x2);
                                    t417 = 0x22;
                                    if ((int)((((struct o22_short *)(a4))->v)) > 0) {
                                    } else {
                                        FUN_0c0cff28(a4, 0x4);
                                        (((struct o17_uchar *)(a4))->v) = 0x0;
                                        t417 = 0x17;
                                    }
                                }
                            } else {
                                FUN_0c0e10a8(a4, 0x2, 0x2);
                                FUN_0c0e1108(a4, 0x0, 0x1);
                                t351 = *(short *)((a4 + 0x1C));
                                *(unsigned short *)((a4 + 0x1C)) = (t351 - 1);
                                t417 = (short)(t351 - 1);
                                if ((int)(short)(t351 - 1) > 0) {
                                } else {
                                    (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                                    (((struct o22_ushort *)(a4))->v) = 0x1E;
                                    t417 = (thunk_FUN_0c05abb2(0x57, (a4 + 0x28)));
                                }
                            }
                        } else {
                            FUN_0c0e10a8(a4, 0x1, 0x2);
                            FUN_0c0e1108(a4, 0x0, 0x0);
                            t361 = *(short *)((a4 + 0x1C));
                            *(unsigned short *)((a4 + 0x1C)) = (t361 - 1);
                            t417 = (short)(t361 - 1);
                            if ((int)(short)(t361 - 1) > 0) {
                            } else {
                                thunk_FUN_0c05abb2(0x57, (a4 + 0x28));
                                t363 = *(signed char *)((a4 + 0x16));
                                if ((*(signed char *)(((((t363 << 2) + t363) + 0xC1CA530) + 0x1))) != 0) {
                                    t365 = *(signed char *)((a4 + 0x16));
                                    t373 = (*(int *)((0xC1CA510 + ((*(signed char *)(((((t365 << 2) + t365) + 0xC1CA530) + 0x4))) << 2))));
                                    t374 = 0x2;
                                } else {
                                    t368 = *(signed char *)((a4 + 0x16));
                                    t373 = (*(int *)((0xC1CA510 + ((*(signed char *)(((((t368 << 2) + t368) + 0xC1CA530) + 0x4))) << 2))));
                                    t374 = 0x0;
                                }
                                FUN_0c0e11ee(a4, 0x2, t373, t374);
                                (((struct o20_ushort *)(a4))->v) = 0x1E;
                                (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                                t417 = 0x17;
                            }
                        }
                    } else {
                        FUN_0c0e10a8(a4, 0x0, 0x2);
                        t387 = *(short *)((a4 + 0x1C));
                        *(unsigned short *)((a4 + 0x1C)) = (t387 - 1);
                        t417 = (short)(t387 - 1);
                        if ((int)(short)(t387 - 1) > 0) {
                        } else {
                            t388 = *(signed char *)((a4 + 0x16));
                            FUN_0c0e11ee(a4, 0x1, (*(int *)((0xC1CA510 + ((*(signed char *)(((((t388 << 2) + t388) + 0xC1CA530) + 0x3))) << 2)))), 0x0);
                            *(unsigned short *)((a4 + 0x1E)) = 0x1E;
                            thunk_FUN_0c05abb2(0x57, (a4 + 0x28));
                            (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                            t417 = 0x17;
                        }
                    }
                } else {
                    (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                    t402 = *(signed char *)((a4 + 0x16));
                    FUN_0c0e11ee(a4, 0x0, (*(int *)((0xC1CA510 + ((*(signed char *)(((((t402 << 2) + t402) + 0xC1CA530) + 0x2))) << 2)))), 0x0);
                    (((struct o22_ushort *)(a4))->v) = 0x0;
                    (((struct o20_ushort *)(a4))->v) = 0x0;
                    *(unsigned short *)((a4 + 0x1E)) = 0x0;
                    FUN_0c0e10a8(a4, 0x0, 0x2);
                    t407 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t407 - 1);
                    t417 = (short)(t407 - 1);
                    if ((int)(short)(t407 - 1) > 0) {
                    } else {
                        t408 = *(signed char *)((a4 + 0x16));
                        FUN_0c0e11ee(a4, 0x1, (*(int *)((0xC1CA510 + ((*(signed char *)(((((t408 << 2) + t408) + 0xC1CA530) + 0x3))) << 2)))), 0x0);
                        *(unsigned short *)((a4 + 0x1E)) = 0x1E;
                        thunk_FUN_0c05abb2(0x57, (a4 + 0x28));
                        (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                        t417 = 0x17;
                    }
                }
                return t417;
            }
            if (t331 == 4) {
                t421 = *(signed char *)((a4 + 0x17));
                if (t421 != 0) {
                    t492 = t421;
                    if (t421 != 1) {
                    } else {
                        t424 = *(signed char *)((a4 + 0x16));
                        if ((int)(*(signed char *)(((((t424 << 2) + t424) + 0xC1CA530) + 0x0))) >= 0) {
                            FUN_0c0e12aa(a4);
                        }
                        t432 = *(short *)((a4 + 0x1C));
                        *(unsigned short *)((a4 + 0x1C)) = (t432 - 1);
                        t492 = (short)(t432 - 1);
                        if ((int)(short)(t432 - 1) > 0) {
                        } else {
                            (((struct o17_uchar *)(a4))->v) = 0x0;
                            t433 = *(signed char *)((a4 + 0x16));
                            if ((int)(*(signed char *)(((((t433 << 2) + t433) + 0xC1CA530) + 0x0))) < 0) {
                                FUN_0c0cff28(a4, 0x5);
                                *(unsigned short *)((a4 + 0x1C)) = 0x78;
                                t492 = 0x78;
                            } else {
                                t438 = *(signed char *)((a4 + 0x16));
                                if ((*(signed char *)((0xC1CA530 + ((t438 << 2) + t438)))) == 4) {
                                    FUN_0c0cff28(a4, 0x7);
                                    *(unsigned short *)((a4 + 0x1C)) = 0x78;
                                    t492 = 0x78;
                                } else {
                                    t492 = (FUN_0c0cff28(a4, 0x6));
                                }
                            }
                        }
                    }
                } else {
                    t456 = *(signed char *)((a4 + 0x16));
                    t459 = 0xA;
                    if ((int)(*(signed char *)(((((t456 << 2) + t456) + 0xC1CA530) + 0x0))) >= 0) {
                        FUN_0c0e1270(a4);
                        t459 = 0x1E;
                    }
                    *(unsigned short *)((a4 + 0x1C)) = t459;
                    (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                    t465 = *(signed char *)((a4 + 0x16));
                    if ((int)(*(signed char *)(((((t465 << 2) + t465) + 0xC1CA530) + 0x0))) >= 0) {
                        FUN_0c0e12aa(a4);
                    }
                    t473 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t473 - 1);
                    t492 = (short)(t473 - 1);
                    if ((int)(short)(t473 - 1) > 0) {
                    } else {
                        (((struct o17_uchar *)(a4))->v) = 0x0;
                        t474 = *(signed char *)((a4 + 0x16));
                        if ((int)(*(signed char *)(((((t474 << 2) + t474) + 0xC1CA530) + 0x0))) < 0) {
                            FUN_0c0cff28(a4, 0x5);
                            *(unsigned short *)((a4 + 0x1C)) = 0x78;
                            t492 = 0x78;
                        } else {
                            t479 = *(signed char *)((a4 + 0x16));
                            if ((*(signed char *)((0xC1CA530 + ((t479 << 2) + t479)))) == 4) {
                                FUN_0c0cff28(a4, 0x7);
                                *(unsigned short *)((a4 + 0x1C)) = 0x78;
                                t492 = 0x78;
                            } else {
                                t492 = (FUN_0c0cff28(a4, 0x6));
                            }
                        }
                    }
                }
                return t492;
            }
            if (t331 == 5) {
                t497 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t497 - 1);
                if ((int)(short)(t497 - 1) <= 0) {
                    FUN_0c0cff28(a4, 0x0);
                    return FUN_0c0e1080(a4);
                }
                return (short)(t497 - 1);
            }
            if (t331 == 6) {
                t499 = (((struct oD0_int *)(a4))->v);
                t500 = *(signed char *)((a4 + 0x17));
                if (t500 != 0) {
                    if (t500 != 1) {
                        if (t500 != 2) {
                            t516 = t500;
                            if (t500 != 3) {
                            } else {
                                (((struct o70_float *)(t499))->v) = (((((struct o70_float *)(t499))->v)) - 5.0f);
                                *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
                                if ((int)(*(short *)((a4 + 0x1C))) > (int)0x28) {
                                    FUN_0c0e138c(a4);
                                }
                                t509 = *(short *)((a4 + 0x1C));
                                t516 = t509;
                                if (t509 == 0) {
                                    FUN_0c0cff28(a4, 0x0);
                                    FUN_0c0e1080(a4);
                                    (((struct o17_uchar *)(a4))->v) = 0x0;
                                    t516 = 0x17;
                                }
                            }
                            return t516;
                        }
                        FUN_0c0e12aa(a4);
                        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
                        FUN_0c0e138c(a4);
                        t523 = *(short *)((a4 + 0x1C));
                        if (t523 == 0) {
                            (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                            *(unsigned short *)((a4 + 0x1C)) = 0x32;
                            return FUN_0c0e1314(a4);
                        }
                        return t523;
                    }
                    FUN_0c0e12aa(a4);
                    (((struct o70_float *)(t499))->v) = (((((struct o70_float *)(t499))->v)) + 5.0f);
                    *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
                    if ((int)(*(short *)((a4 + 0x1C))) < (int)0xA) {
                        FUN_0c0e138c(a4);
                    }
                    t534 = *(short *)((a4 + 0x1C));
                    t536 = t534;
                    if (t534 == 0) {
                        (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                        *(unsigned short *)((a4 + 0x1C)) = 0x14;
                        t536 = 0x14;
                    }
                    return t536;
                }
                (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                *(unsigned short *)((a4 + 0x1C)) = 0x32;
                FUN_0c0e132a(a4);
                FUN_0c0e12aa(a4);
                (((struct o70_float *)(t499))->v) = (((((struct o70_float *)(t499))->v)) + 5.0f);
                *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
                if ((int)(*(short *)((a4 + 0x1C))) < (int)0xA) {
                    FUN_0c0e138c(a4);
                }
                t550 = *(short *)((a4 + 0x1C));
                t552 = t550;
                if (t550 == 0) {
                    (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                    *(unsigned short *)((a4 + 0x1C)) = 0x14;
                    t552 = 0x14;
                }
                return t552;
            }
            if (t331 == 7) {
                t555 = *(signed char *)((a4 + 0x17));
                if (t555 != 0) {
                    if (t555 != 1) {
                        if (t555 != 2) {
                            return t555;
                        }
                        t563 = *(signed char *)((0x15 + (*(int *)0xC540DA4)));
                        if (t563 != 5) {
                            FUN_0c0cff28(a4, 0x0);
                            return FUN_0c0e1080(a4);
                        }
                        return t563;
                    }
                    FUN_0c0e12aa(a4);
                    t567 = *(signed char *)((0x15 + (*(int *)0xC540DA4)));
                    t570 = t567;
                    if (t567 == 5) {
                        FUN_0c0e1314(a4);
                        (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                        t570 = 0x17;
                    }
                    return t570;
                }
                (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                FUN_0c0e12aa(a4);
                t577 = *(signed char *)((0x15 + (*(int *)0xC540DA4)));
                t580 = t577;
                if (t577 == 5) {
                    FUN_0c0e1314(a4);
                    (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                    t580 = 0x17;
                }
                return t580;
            }
            return t331;
        }
        t584 = *(signed char *)((a4 + 0x17));
        if (t584 != 0) {
            if (t584 != 1) {
                t608 = t584;
                if (t584 != 2) {
                } else {
                    FUN_0c0e10a8(a4, 0x0, 0x1);
                    t586 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t586 - 1);
                    t608 = (short)(t586 - 1);
                    if ((int)(short)(t586 - 1) > 0) {
                    } else {
                        FUN_0c0cff28(a4, 0x2);
                        (((struct o17_uchar *)(a4))->v) = 0x0;
                        *(unsigned short *)((a4 + 0x1C)) = 0x1E;
                        t608 = 0x1E;
                    }
                }
            } else {
                FUN_0c0e10a8(a4, 0x0, 0x0);
                t593 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t593 - 1);
                t608 = (short)(t593 - 1);
                if ((int)(short)(t593 - 1) > 0) {
                } else {
                    (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                    *(unsigned short *)((a4 + 0x1C)) = 0xF;
                    t608 = 0xF;
                }
            }
        } else {
            (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
            *(unsigned short *)((a4 + 0x1C)) = 0xF;
            (((struct o1B_uchar *)(a4))->v) = 0x0;
            FUN_0c0e10a8(a4, 0x0, 0x0);
            t603 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t603 - 1);
            t608 = (short)(t603 - 1);
            if ((int)(short)(t603 - 1) > 0) {
            } else {
                (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                *(unsigned short *)((a4 + 0x1C)) = 0xF;
                t608 = 0xF;
            }
        }
        return t608;
    }
    t611 = FUN_0c0e1096(a4);
    if (t611 != 0) {
        FUN_0c0cff28(a4, 0x1);
        (((struct o16_uchar *)(a4))->v) = ((int)((int)(FUN_0c179ac0()) % (int)(*(int *)0xC1CA580)));
        t616 = FUN_0c043010();
        if ((t616 != 0) && (t617 = *(signed char *)((a4 + 0x16)), t618 = *(signed char *)((0xC1CA530 + ((t617 << 2) + t617))), t618 == 2)) {
            (((struct o16_uchar *)(a4))->v) = ((*(int *)0xC1CA580) - 1);
        }
        t624 = FUN_0c04340c();
        if ((t624 == 0) && (t625 = *(signed char *)((a4 + 0x16)), t626 = *(signed char *)((0xC1CA530 + ((t625 << 2) + t625))), t626 == 1)) {
            (((struct o16_uchar *)(a4))->v) = ((*(int *)0xC1CA580) - 1);
        }
        (((struct o17_uchar *)(a4))->v) = 0x0;
        (((struct o12C_ushort *)(a4))->v) = 0x0;
        t634 = 0x12C;
    } else {
        FUN_0c187798();
        t634 = (FUN_0c0bbf58(a4));
    }
    return t634;
}
