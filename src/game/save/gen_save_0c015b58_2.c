/* game/save: functions 0C015B58-0C017EF8, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o4C_uchar { char p[0x4C]; unsigned char v; };
struct o4E_uchar { char p[0x4E]; unsigned char v; };
struct o4F_uchar { char p[0x4F]; unsigned char v; };
struct o50_uchar { char p[0x50]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB0_float { char p[0xB0]; float v; };
int FUN_0c015c38(int);
int FUN_0c01623a(void);
int FUN_0c016244(void);
int FUN_0c016288(void);
int FUN_0c016334(int, int);
int FUN_0c01643e(int);
int FUN_0c0164ec(int, int);
int thunk_FUN_0c0167cc(void);
int FUN_0c0167da(void);
int FUN_0c016898(void);
int FUN_0c0168fe(void);
int FUN_0c016930(void);
int FUN_0c016978(void);
int FUN_0c0169c2(void);
int FUN_0c016a88(int, int, int, int, int, int, int, int);
int FUN_0c016c42(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c016d00(void);
int FUN_0c017098(void);
int FUN_0c017160(int);
int FUN_0c01746e(void);
int FUN_0c017538(void);
int FUN_0c01760a(void);
int FUN_0c017622(void);
int FUN_0c017a2e(void);
int FUN_0c017be8(int);
int FUN_0c017c1a(void);
int FUN_0c017c70(void);
int FUN_0c017d4c(void);
int FUN_0c017e48(int, int, int);
int FUN_0c017e68(int, int);
int FUN_0c017ed8(int, int);
int thunk_FUN_0c03f346(int);
int FUN_0c05aab6(int, int);
float math_sin_angle16(int);
int FUN_0c187d24(int, int);
int FUN_0c187d88(int);
int strncpy(int, int, int);
int FUN_0c015cb6(void);
void FUN_0c0167cc(int a4, int a5, int a6, int a7);
int FUN_0c0169cc(int a4, int a5, int a6);
int FUN_0c016b0a(void);
int FUN_0c016b40(void);
int FUN_0c016b98(void);
int FUN_0c016bca(void);
int FUN_0c01718c(void);
int FUN_0c0171cc(void);
void FUN_0c0173bc(int a4, int a5);
int FUN_0c0173e6(void);
int FUN_0c017dc8(int a4);
int FUN_0c017e58(void);

int FUN_0c015cb6(void)
{
    int stk[3];
    register int t0;
    register int t3;
    register int t8;
    register int t10;
    register int t12;
    register int t58;
    register int t59;
    register int t61;
    register int t62;
    register int t65;
    register int t68;
    register int t77;
    register int t80;
    register int t83;
    register int t84;
    register int t85;
    register int t90;
    register int t91;
    register int t92;
    register int t97;
    register int t98;
    register int t99;
    register int t104;
    register int t105;
    register int t106;
    register int t129;
    register int t131;
    register int t177;
    register int t178;
    register int t180;
    register int t181;
    register int t184;
    register int t187;
    register int t196;
    register int t199;
    register int t202;
    register int t203;
    register int t204;
    register int t209;
    register int t210;
    register int t211;
    register int t216;
    register int t217;
    register int t218;
    register int t223;
    register int t224;
    register int t225;
    register int t60;
    register int t127;
    register int t179;
    register int t246;

    t0 = *(int *)0xC304BA0;
    *(unsigned int *)(((t0 + 0x3C) + 0x4)) = (*(int *)(((t0 + 0x3C) + 0x0)));
    *(unsigned int *)(((*(int *)0xC304BA0) + 0x3C)) = 0x0;
    t3 = *(int *)0xC304BA0;
    *(unsigned int *)((t3 + 0x3C)) = ((*(int *)((t3 + 0x3C))) | (unsigned short)(*(short *)0xC542864));
    if ((*(signed char *)(((*(int *)0xC304BA0) + 0x49))) == 0) {
        t8 = FUN_0c015c38(0xBFCC);
        if (t8 != 0) {
            FUN_0c017d4c();
            return FUN_0c017a2e();
        }
        t10 = FUN_0c015c38(0x100);
        if (t10 != 0) {
            t12 = *(signed char *)((0x4F + (*(int *)0xC304BA0)));
            if (((unsigned char)t12 != 0) && (((unsigned char)t12 != 1) && (((unsigned char)t12 != 2) && ((unsigned char)t12 != 3)))) {
                if ((unsigned char)t12 != 4) {
                    if ((unsigned char)t12 != 71) {
                        if ((unsigned char)t12 != 5) {
                            if ((unsigned char)t12 != 6) {
                                if ((unsigned char)t12 != 7) {
                                    if ((unsigned char)t12 != 8) {
                                        if ((unsigned char)t12 != 9) {
                                            if ((unsigned char)t12 != 38) {
                                                if ((unsigned char)t12 != 62) {
                                                    if ((unsigned char)t12 != 63) {
                                                        if ((unsigned char)t12 != 69) {
                                                            if ((unsigned char)t12 != 70) {
                                                                if ((unsigned char)t12 != 72) {
                                                                    if ((unsigned char)t12 != 73) {
                                                                        FUN_0c016d00();
                                                                    } else {
                                                                        FUN_0c016c42(0x1, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20), *(int *)((int)stk + 8 + 24), *(int *)((int)stk + 8 + 28));
                                                                    }
                                                                } else {
                                                                    FUN_0c016bca();
                                                                }
                                                            } else {
                                                                FUN_0c017098();
                                                            }
                                                        } else {
                                                            FUN_0c017160(0x0);
                                                        }
                                                    } else {
                                                        FUN_0c016b98();
                                                    }
                                                } else {
                                                    FUN_0c016b40();
                                                }
                                            } else {
                                                FUN_0c016b0a();
                                            }
                                        } else {
                                            FUN_0c0169c2();
                                        }
                                    } else {
                                        FUN_0c01760a();
                                    }
                                } else {
                                    FUN_0c017622();
                                }
                            } else {
                                FUN_0c01746e();
                            }
                        } else {
                            FUN_0c017538();
                        }
                    } else {
                        FUN_0c016930();
                    }
                } else {
                    FUN_0c0168fe();
                }
            } else {
                FUN_0c0167da();
            }
            t58 = *(int *)0xC304BA0;
            t59 = *(signed char *)((t58 + 0x4F));
            t61 = 0x3;
            if (((unsigned char)t59 != 9) && (((unsigned char)t59 != 70) || (t60 = *(int *)((t58 + 0x4)), t60 == 0))) {
                t61 = 0x7;
            }
            return FUN_0c05aab6(0x0, t61);
        }
        t62 = FUN_0c015c38(0x40);
        if (t62 != 0) {
            FUN_0c016c42(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
            t127 = (FUN_0c05aab6(0x0, 0x7));
        } else {
            t65 = FUN_0c015c38(0x200);
            if (t65 != 0) {
                FUN_0c017160(0x1);
                t127 = (FUN_0c05aab6(0x0, 0x7));
            } else {
                t68 = FUN_0c015c38(0x80);
                if (t68 != 0) {
                    if ((*(signed char *)0xC304C24) != 0) {
                        FUN_0c016a88(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12));
                        t127 = (FUN_0c05aab6(0x0, 0x7));
                    } else {
                        *(unsigned int *)(((*(int *)0xC304BA0) + 0x4)) = 0x1;
                        t127 = (FUN_0c05aab6(0x0, 0x3));
                    }
                } else {
                    t77 = FUN_0c015c38(0x8);
                    if (t77 != 0) {
                        FUN_0c016978();
                        t127 = (FUN_0c05aab6(0x0, 0x7));
                    } else {
                        t80 = FUN_0c015c38(0x4);
                        if (t80 != 0) {
                            FUN_0c016898();
                            t127 = (FUN_0c05aab6(0x0, 0x7));
                        } else {
                            t83 = FUN_0c015c38(0x800);
                            if (t83 != 0) {
                                t84 = *(int *)0xC304BA0;
                                t85 = *(signed char *)((0x4F + t84));
                                (((struct o4F_uchar *)(t84))->v) = (*(signed char *)(((0x0 + (0xC20BC98 + ((unsigned char)t85 << 2))) + 0x0)));
                                FUN_0c017be8((0x0 + (0xC20BC98 + ((unsigned char)t85 << 2))));
                                FUN_0c017a2e();
                                t127 = (FUN_0c05aab6(0x0, 0x23));
                            } else {
                                t90 = FUN_0c015c38(0x400);
                                if (t90 != 0) {
                                    t91 = *(int *)0xC304BA0;
                                    t92 = *(signed char *)((0x4F + t91));
                                    (((struct o4F_uchar *)(t91))->v) = (*(signed char *)(((0x1 + (0xC20BC98 + ((unsigned char)t92 << 2))) + 0x0)));
                                    FUN_0c017be8((0x1 + (0xC20BC98 + ((unsigned char)t92 << 2))));
                                    FUN_0c017a2e();
                                    t127 = (FUN_0c05aab6(0x0, 0x23));
                                } else {
                                    t97 = FUN_0c015c38(0x2000);
                                    if (t97 != 0) {
                                        t98 = *(int *)0xC304BA0;
                                        t99 = *(signed char *)((0x4F + t98));
                                        (((struct o4F_uchar *)(t98))->v) = (*(signed char *)(((0x2 + (0xC20BC98 + ((unsigned char)t99 << 2))) + 0x0)));
                                        FUN_0c017be8((0x2 + (0xC20BC98 + ((unsigned char)t99 << 2))));
                                        FUN_0c017a2e();
                                        t127 = (FUN_0c05aab6(0x0, 0x23));
                                    } else {
                                        t104 = FUN_0c015c38(0x1000);
                                        t127 = t104;
                                        if (t104 != 0) {
                                            t105 = *(int *)0xC304BA0;
                                            t106 = *(signed char *)((0x4F + t105));
                                            (((struct o4F_uchar *)(t105))->v) = (*(signed char *)(((0x3 + (0xC20BC98 + ((unsigned char)t106 << 2))) + 0x0)));
                                            FUN_0c017be8((0x3 + (0xC20BC98 + ((unsigned char)t106 << 2))));
                                            FUN_0c017a2e();
                                            t127 = (FUN_0c05aab6(0x0, 0x23));
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        return t127;
    }
    t129 = FUN_0c015c38(0x100);
    if (t129 != 0) {
        t131 = *(signed char *)((0x4F + (*(int *)0xC304BA0)));
        if (((unsigned char)t131 != 0) && (((unsigned char)t131 != 1) && (((unsigned char)t131 != 2) && ((unsigned char)t131 != 3)))) {
            if ((unsigned char)t131 != 4) {
                if ((unsigned char)t131 != 71) {
                    if ((unsigned char)t131 != 5) {
                        if ((unsigned char)t131 != 6) {
                            if ((unsigned char)t131 != 7) {
                                if ((unsigned char)t131 != 8) {
                                    if ((unsigned char)t131 != 9) {
                                        if ((unsigned char)t131 != 38) {
                                            if ((unsigned char)t131 != 62) {
                                                if ((unsigned char)t131 != 63) {
                                                    if ((unsigned char)t131 != 69) {
                                                        if ((unsigned char)t131 != 70) {
                                                            if ((unsigned char)t131 != 72) {
                                                                if ((unsigned char)t131 != 73) {
                                                                    FUN_0c016d00();
                                                                } else {
                                                                    FUN_0c016c42(0x1, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20), *(int *)((int)stk + 8 + 24), *(int *)((int)stk + 8 + 28));
                                                                }
                                                            } else {
                                                                FUN_0c016bca();
                                                            }
                                                        } else {
                                                            FUN_0c017098();
                                                        }
                                                    } else {
                                                        FUN_0c017160(0x0);
                                                    }
                                                } else {
                                                    FUN_0c016b98();
                                                }
                                            } else {
                                                FUN_0c016b40();
                                            }
                                        } else {
                                            FUN_0c016b0a();
                                        }
                                    } else {
                                        FUN_0c0169c2();
                                    }
                                } else {
                                    FUN_0c01760a();
                                }
                            } else {
                                FUN_0c017622();
                            }
                        } else {
                            FUN_0c01746e();
                        }
                    } else {
                        FUN_0c017538();
                    }
                } else {
                    FUN_0c016930();
                }
            } else {
                FUN_0c0168fe();
            }
        } else {
            FUN_0c0167da();
        }
        t177 = *(int *)0xC304BA0;
        t178 = *(signed char *)((t177 + 0x4F));
        t180 = 0x3;
        if (((unsigned char)t178 != 9) && (((unsigned char)t178 != 70) || (t179 = *(int *)((t177 + 0x4)), t179 == 0))) {
            t180 = 0x7;
        }
        return FUN_0c05aab6(0x0, t180);
    }
    t181 = FUN_0c015c38(0x40);
    if (t181 != 0) {
        FUN_0c016c42(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
        t246 = (FUN_0c05aab6(0x0, 0x7));
    } else {
        t184 = FUN_0c015c38(0x200);
        if (t184 != 0) {
            FUN_0c017160(0x1);
            t246 = (FUN_0c05aab6(0x0, 0x7));
        } else {
            t187 = FUN_0c015c38(0x80);
            if (t187 != 0) {
                if ((*(signed char *)0xC304C24) != 0) {
                    FUN_0c016a88(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12));
                    t246 = (FUN_0c05aab6(0x0, 0x7));
                } else {
                    *(unsigned int *)(((*(int *)0xC304BA0) + 0x4)) = 0x1;
                    t246 = (FUN_0c05aab6(0x0, 0x3));
                }
            } else {
                t196 = FUN_0c015c38(0x8);
                if (t196 != 0) {
                    FUN_0c016978();
                    t246 = (FUN_0c05aab6(0x0, 0x7));
                } else {
                    t199 = FUN_0c015c38(0x4);
                    if (t199 != 0) {
                        FUN_0c016898();
                        t246 = (FUN_0c05aab6(0x0, 0x7));
                    } else {
                        t202 = FUN_0c015c38(0x800);
                        if (t202 != 0) {
                            t203 = *(int *)0xC304BA0;
                            t204 = *(signed char *)((0x4F + t203));
                            (((struct o4F_uchar *)(t203))->v) = (*(signed char *)(((0x0 + (0xC20BC98 + ((unsigned char)t204 << 2))) + 0x0)));
                            FUN_0c017be8((0x0 + (0xC20BC98 + ((unsigned char)t204 << 2))));
                            FUN_0c017a2e();
                            t246 = (FUN_0c05aab6(0x0, 0x23));
                        } else {
                            t209 = FUN_0c015c38(0x400);
                            if (t209 != 0) {
                                t210 = *(int *)0xC304BA0;
                                t211 = *(signed char *)((0x4F + t210));
                                (((struct o4F_uchar *)(t210))->v) = (*(signed char *)(((0x1 + (0xC20BC98 + ((unsigned char)t211 << 2))) + 0x0)));
                                FUN_0c017be8((0x1 + (0xC20BC98 + ((unsigned char)t211 << 2))));
                                FUN_0c017a2e();
                                t246 = (FUN_0c05aab6(0x0, 0x23));
                            } else {
                                t216 = FUN_0c015c38(0x2000);
                                if (t216 != 0) {
                                    t217 = *(int *)0xC304BA0;
                                    t218 = *(signed char *)((0x4F + t217));
                                    (((struct o4F_uchar *)(t217))->v) = (*(signed char *)(((0x2 + (0xC20BC98 + ((unsigned char)t218 << 2))) + 0x0)));
                                    FUN_0c017be8((0x2 + (0xC20BC98 + ((unsigned char)t218 << 2))));
                                    FUN_0c017a2e();
                                    t246 = (FUN_0c05aab6(0x0, 0x23));
                                } else {
                                    t223 = FUN_0c015c38(0x1000);
                                    t246 = t223;
                                    if (t223 != 0) {
                                        t224 = *(int *)0xC304BA0;
                                        t225 = *(signed char *)((0x4F + t224));
                                        (((struct o4F_uchar *)(t224))->v) = (*(signed char *)(((0x3 + (0xC20BC98 + ((unsigned char)t225 << 2))) + 0x0)));
                                        FUN_0c017be8((0x3 + (0xC20BC98 + ((unsigned char)t225 << 2))));
                                        FUN_0c017a2e();
                                        t246 = (FUN_0c05aab6(0x0, 0x23));
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return t246;
}

void FUN_0c0167cc(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x0));
    if ((unsigned char)t0 == 0) {
        *(unsigned char *)((a5 + 0x0)) = 0x0;
        return;
    }
    ((int (*)(int, int, int, int))(0xC01678E))((a4 + 0x1), a5, t0, a7);
}


int FUN_0c016b0a(void)
{
    register int t2;

    if ((*(signed char *)(((*(int *)0xC304BA0) + 0x4C))) == 0) {
        t2 = FUN_0c016244();
        if ((int)t2 <= (int)0x1) {
            if ((*(signed char *)(((*(int *)0xC304BA0) + 0x51))) == 0) {
                return FUN_0c017c1a();
            }
            return FUN_0c017c70();
        }
        return t2;
    }
    return 0x4C;
}

int FUN_0c016b40(void)
{
    register int t0;

    if ((*(signed char *)(((*(int *)0xC304BA0) + 0x4C))) == 0) {
        t0 = FUN_0c016244();
        if ((int)t0 <= (int)0x1) {
            t0 = FUN_0c01643e((*(int *)0xC20BE14));
            if (t0 == 0) {
                return FUN_0c016d00();
            }
            return FUN_0c017c70();
        }
        return FUN_0c016d00();
    }
    return 0x4C;
}

int FUN_0c016b98(void)
{
    register int t0;

    if ((*(signed char *)(((*(int *)0xC304BA0) + 0x4C))) == 0) {
        t0 = FUN_0c016244();
        if ((int)t0 <= (int)0x1) {
            t0 = FUN_0c01643e((*(int *)0xC20BE18));
            if (t0 == 0) {
                return FUN_0c016d00();
            }
            return FUN_0c017c70();
        }
        return FUN_0c016d00();
    }
    return 0x4C;
}

int FUN_0c016bca(void)
{
    register int t0;
    int t1;
    register int t2;
    register int t3;
    register int t4;

    t0 = *(int *)0xC304BA0;
    if ((*(signed char *)((t0 + 0x4C))) == 0) {
        if ((*(signed char *)0xC304C24) != 0) {
            t1 = 0x2;
            t2 = 0xC304C24;
            t3 = (unsigned char)(*(signed char *)((t0 + 0x4D)));
        } else {
            t4 = *(signed char *)((t0 + 0x50));
            t1 = (FUN_0c016334(0xC304BA4, (unsigned char)t4));
            t2 = 0xC304BA4;
            t3 = (unsigned char)t4;
        }
        t0 = FUN_0c187d88(t2);
        if (((int)t0 > (int)t3) && (t1 != 0)) {
            *(unsigned char *)(((t3 + t2) + 0x0)) = 0x0;
            FUN_0c187d24((t3 + t2), ((t3 + t1) + t2));
            (((struct o4E_uchar *)((*(int *)0xC304BA0)))->v) = 0x0;
            return FUN_0c017c70();
        }
        return t0;
    }
    return 0x4C;
}

int FUN_0c01718c(void)
{
    register int t2;

    if ((*(signed char *)(((*(int *)0xC304BA0) + 0x4C))) == 0) {
        t2 = FUN_0c016288();
        if (t2 != 0) {
            return FUN_0c016b40();
        }
        return FUN_0c016d00();
    }
    return 0x4C;
}

int FUN_0c0171cc(void)
{
    register int t2;

    if ((*(signed char *)(((*(int *)0xC304BA0) + 0x4C))) == 0) {
        t2 = FUN_0c016288();
        if (t2 != 0) {
            return FUN_0c016b98();
        }
        return FUN_0c016d00();
    }
    return 0x4C;
}

void FUN_0c0173bc(int a4, int a5)
{
    register int t0;
    int t2;

    t0 = *(int *)0xC304BA0;
    if (((*(signed char *)((t0 + 0x4C))) == 0) && (t2 = *(signed char *)0xC304C24, t2 == 0)) {
        if ((*(signed char *)((t0 + 0x50))) != 0) {
            (((struct o50_uchar *)(t0))->v) = 0x0;
            (((struct o4E_uchar *)((*(int *)0xC304BA0)))->v) = 0x0;
        }
    }
}

int FUN_0c0173e6(void)
{
    register int t0;
    register int t1;
    register int t2;

    if ((*(signed char *)(((*(int *)0xC304BA0) + 0x4C))) == 0) {
        t0 = FUN_0c01623a();
        if (t0 == 0) {
            return FUN_0c016bca();
        }
        t0 = *(int *)0xC304BA0;
        if ((*(signed char *)0xC304C24) != 0) {
            t1 = 0xC304C24;
            t2 = (unsigned char)(*(signed char *)((t0 + 0x4D)));
        } else {
            t1 = 0xC304BA4;
            t2 = (unsigned char)(*(signed char *)((t0 + 0x50)));
        }
        return FUN_0c0164ec(t1, t2);
    }
    return 0x4C;
}

int FUN_0c017dc8(int a4)
{
    register int t0;
    register float u9;
    register float u13;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
        } else {
            *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0x0;
    }
    (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x400);
    u9 = *(float *)0xC017E9C;
    u13 = u9;
    u13 = u13 + u9 * (math_sin_angle16(((((*(short *)((a4 + 0x1C))) << 8) << 2) << 1)));
    (((struct oB0_float *)(a4))->v) = u13;
    if ((*(int *)(((*(int *)0xC304BA0) + 0x4))) != 0) {
        return thunk_FUN_0c03f346(a4);
    }
    return 0xB0;
}

int FUN_0c017e58(void)
{
    register int t0;

    t0 = *(int *)0xCA0001C;
    return ((int (*)(void))(t0))();
}
