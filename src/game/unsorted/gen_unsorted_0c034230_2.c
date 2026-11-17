/* game/unsorted: functions 0C034230-0C034746, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c03733c(int, int, int);
int FUN_0c03f346(int, int, int, int);
extern int FUN_0c187798();
int FUN_0c03445c(int a4, int a5, int a6, int a7);

int FUN_0c03445c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;

    t6 = *(signed char *)((a4 + 0x14));
    if (t6 != 0) {
        if (t6 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        t6 = *(signed char *)((a4 + 0x15));
        if (t6 != 0) {
            if (t6 != 1) {
                if (t6 != 2) {
                    if (t6 != 3) {
                        if (t6 == 4) {
                            t7 = (int)((int)(*(int *)0xC40DC60) / (int)0x3C);
                            if ((*(signed char *)((a4 + 0x2))) != 0) {
                                *(unsigned short *)((a4 + 0x1C)) = ((int)((int)t7 % (int)0xA));
                            } else {
                                *(unsigned short *)((a4 + 0x1C)) = ((int)((int)t7 / (int)0xA));
                                if ((*(short *)((a4 + 0x1C))) != 0) {
                                    (((struct oA8_uchar *)(a4))->v) = 0x1;
                                } else {
                                    (((struct oA8_uchar *)(a4))->v) = 0x0;
                                }
                            }
                            FUN_0c03733c(a4, ((*(short *)((a4 + 0x1C))) + 0x63), (*(int *)0xC4B410C));
                            t7 = (((struct oC4_int *)(a4))->v);
                            *(unsigned char *)((t7 + 0x0)) = 0x1;
                            *(unsigned short *)((t7 + 0x6)) = 0x11F;
                            *(volatile signed char *)((a4 + 0x2));
                            t8 = ((int (*)(int))(FUN_0c187798))(t7);
                            (((struct o74_float *)(t0))->v) = -5.0f;
                            *(volatile signed char *)((a4 + 0x2));
                            t7 = ((int (*)(int))(FUN_0c187798))(t0);
                            t0 = (((struct oC8_int *)(a4))->v);
                            *(unsigned char *)((t0 + 0x0)) = 0x1;
                            *(unsigned short *)((t0 + 0x6)) = 0x11F;
                            (((struct o74_float *)(t0))->v) = 0.0f;
                            (((struct o70_float *)(t0))->v) = 0.0f;
                            (((struct o6C_float *)(t0))->v) = 0.0f;
                            (((struct o88_float *)(t0))->v) = 1.0f;
                            (((struct o84_float *)(t0))->v) = 1.0f;
                            (((struct o8C_float *)(t0))->v) = 0.0f;
                            t0 = *(signed char *)0xC541F41;
                            t7 = (unsigned char)t0;
                            if ((unsigned char)t0 != 1) {
                                *(unsigned short *)((a4 + 0x1C)) = 0x14;
                                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                                t7 = 0x15;
                            }
                            t0 = t7;
                        } else {
                            if (t6 == 5) {
                                t6 = (((struct oC8_int *)(a4))->v);
                                (((struct o8C_float *)(t6))->v) = (((((struct o8C_float *)(t6))->v)) - 0.0500000007f);
                                t6 = (((struct oC4_int *)(a4))->v);
                                (((struct o74_float *)(t6))->v) = (((((struct o74_float *)(t6))->v)) + 0.25f);
                                t6 = *(short *)((a4 + 0x1C));
                                *(unsigned short *)((a4 + 0x1C)) = (t6 - 1);
                                t7 = (short)(t6 - 1);
                                if ((short)(t6 - 1) == 0) {
                                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                                    t7 = 0x15;
                                }
                                t6 = t7;
                            } else {
                                t7 = (((struct oC8_int *)(a4))->v);
                                (((struct o8C_float *)(t7))->v) = (((((struct o8C_float *)(t7))->v)) + 0.0500000007f);
                                t7 = 0x8C;
                                if (!(-0.0f > ((((struct o8C_float *)(((((struct oC8_int *)(a4))->v))))->v)))) {
                                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                                    t7 = 0x14;
                                }
                                t6 = t7;
                            }
                            t0 = t6;
                        }
                        t6 = t0;
                    } else {
                        t0 = (((struct oC8_int *)(a4))->v);
                        (((struct o8C_float *)(t0))->v) = (((((struct o8C_float *)(t0))->v)) - 0.0250000004f);
                        t0 = *(short *)((a4 + 0x1C));
                        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
                        t7 = (short)(t0 - 1);
                        if ((short)(t0 - 1) != 0) {
                        } else {
                            (((struct o8C_float *)(((((struct oC8_int *)(a4))->v))))->v) = 0.0f;
                            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                            t7 = 0x15;
                        }
                        t6 = t7;
                    }
                    t0 = t6;
                } else {
                    t6 = (((struct oC4_int *)(a4))->v);
                    (((struct o74_float *)(t6))->v) = (((((struct o74_float *)(t6))->v)) - 0.25f);
                    t6 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t6 - 1);
                    t7 = (short)(t6 - 1);
                    if ((short)(t6 - 1) != 0) {
                    } else {
                        *(unsigned short *)((a4 + 0x1C)) = 0x14;
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        t7 = 0x15;
                    }
                    t0 = t7;
                }
                t6 = t0;
            } else {
                t0 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
                t7 = (short)(t0 - 1);
                if ((short)(t0 - 1) != 0) {
                } else {
                    *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
                    *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x1;
                    *(unsigned short *)((a4 + 0x1C)) = 0x14;
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    t7 = 0x15;
                }
                t6 = t7;
            }
            t0 = t6;
        } else {
            t6 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t6 - 1);
            t7 = (short)(t6 - 1);
            if ((short)(t6 - 1) != 0) {
            } else {
                t6 = (((struct oC4_int *)(a4))->v);
                *(unsigned char *)((t6 + 0x0)) = 0x0;
                *(unsigned short *)((t6 + 0x6)) = 0x11F;
                *(volatile signed char *)((a4 + 0x2));
                t8 = ((int (*)(int, int, int))(FUN_0c187798))(t6, 0x0, a6);
                *(volatile signed char *)((a4 + 0x2));
                t6 = ((int (*)(int))(FUN_0c187798))(t1);
                t1 = (((struct oC8_int *)(a4))->v);
                *(unsigned char *)((t1 + 0x0)) = t2;
                *(unsigned short *)((t1 + 0x6)) = 0x11F;
                (((struct o74_float *)(t1))->v) = 0.0f;
                (((struct o70_float *)(t1))->v) = 0.0f;
                (((struct o6C_float *)(t1))->v) = 0.0f;
                (((struct o88_float *)(t1))->v) = 1.0f;
                (((struct o84_float *)(t1))->v) = 1.0f;
                (((struct o8C_float *)(t1))->v) = 0.5f;
                *(unsigned short *)((a4 + 0x1C)) = 0x1;
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                t7 = 0x15;
            }
            t0 = t7;
        }
        return t0;
    }
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct oAC_ushort *)(a4))->v) = 0xF;
    (((struct oA9_uchar *)(a4))->v) = 0x21;
    *(unsigned short *)((a4 + 0x1C)) = 0x1;
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 == 4) {
                        t1 = (int)((int)(*(int *)0xC40DC60) / (int)0x3C);
                        if ((*(signed char *)((a4 + 0x2))) != 0) {
                            *(unsigned short *)((a4 + 0x1C)) = ((int)((int)t1 % (int)0xA));
                        } else {
                            *(unsigned short *)((a4 + 0x1C)) = ((int)((int)t1 / (int)0xA));
                            if ((*(short *)((a4 + 0x1C))) != 0) {
                                (((struct oA8_uchar *)(a4))->v) = 0x1;
                            } else {
                                (((struct oA8_uchar *)(a4))->v) = 0x0;
                            }
                        }
                        FUN_0c03733c(a4, ((*(short *)((a4 + 0x1C))) + 0x63), (*(int *)0xC4B410C));
                        t1 = (((struct oC4_int *)(a4))->v);
                        *(unsigned char *)((t1 + 0x0)) = 0x1;
                        *(unsigned short *)((t1 + 0x6)) = 0x11F;
                        *(volatile signed char *)((a4 + 0x2));
                        t2 = ((int (*)(int))(FUN_0c187798))(t1);
                        (((struct o74_float *)(t3))->v) = -5.0f;
                        *(volatile signed char *)((a4 + 0x2));
                        t1 = ((int (*)(int))(FUN_0c187798))(t3);
                        t1 = (((struct oC8_int *)(a4))->v);
                        *(unsigned char *)((t1 + 0x0)) = 0x1;
                        *(unsigned short *)((t1 + 0x6)) = 0x11F;
                        (((struct o74_float *)(t1))->v) = 0.0f;
                        (((struct o70_float *)(t1))->v) = 0.0f;
                        (((struct o6C_float *)(t1))->v) = 0.0f;
                        (((struct o88_float *)(t1))->v) = 1.0f;
                        (((struct o84_float *)(t1))->v) = 1.0f;
                        (((struct o8C_float *)(t1))->v) = 0.0f;
                        t1 = *(signed char *)0xC541F41;
                        t2 = (unsigned char)t1;
                        if ((unsigned char)t1 != 1) {
                            *(unsigned short *)((a4 + 0x1C)) = 0x14;
                            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                            t2 = 0x15;
                        }
                        t1 = t2;
                    } else {
                        if (t0 == 5) {
                            t0 = (((struct oC8_int *)(a4))->v);
                            (((struct o8C_float *)(t0))->v) = (((((struct o8C_float *)(t0))->v)) - 0.0500000007f);
                            t0 = (((struct oC4_int *)(a4))->v);
                            (((struct o74_float *)(t0))->v) = (((((struct o74_float *)(t0))->v)) + 0.25f);
                            t0 = *(short *)((a4 + 0x1C));
                            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
                            t2 = (short)(t0 - 1);
                            if ((short)(t0 - 1) == 0) {
                                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                                t2 = 0x15;
                            }
                            t0 = t2;
                        } else {
                            t2 = (((struct oC8_int *)(a4))->v);
                            (((struct o8C_float *)(t2))->v) = (((((struct o8C_float *)(t2))->v)) + 0.0500000007f);
                            t2 = 0x8C;
                            if (!(-0.0f > ((((struct o8C_float *)(((((struct oC8_int *)(a4))->v))))->v)))) {
                                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                                t2 = 0x14;
                            }
                            t0 = t2;
                        }
                        t1 = t0;
                    }
                    t0 = t1;
                } else {
                    t1 = (((struct oC8_int *)(a4))->v);
                    (((struct o8C_float *)(t1))->v) = (((((struct o8C_float *)(t1))->v)) - 0.0250000004f);
                    t1 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
                    t2 = (short)(t1 - 1);
                    if ((short)(t1 - 1) != 0) {
                    } else {
                        (((struct o8C_float *)(((((struct oC8_int *)(a4))->v))))->v) = 0.0f;
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        t2 = 0x15;
                    }
                    t0 = t2;
                }
                t1 = t0;
            } else {
                t0 = (((struct oC4_int *)(a4))->v);
                (((struct o74_float *)(t0))->v) = (((((struct o74_float *)(t0))->v)) - 0.25f);
                t0 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
                t2 = (short)(t0 - 1);
                if ((short)(t0 - 1) != 0) {
                } else {
                    *(unsigned short *)((a4 + 0x1C)) = 0x14;
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    t2 = 0x15;
                }
                t1 = t2;
            }
            t0 = t1;
        } else {
            t1 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
            t2 = (short)(t1 - 1);
            if ((short)(t1 - 1) != 0) {
            } else {
                *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
                *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x1;
                *(unsigned short *)((a4 + 0x1C)) = 0x14;
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                t2 = 0x15;
            }
            t0 = t2;
        }
        t1 = t0;
    } else {
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        t2 = (short)(t0 - 1);
        if ((short)(t0 - 1) != 0) {
        } else {
            t0 = (((struct oC4_int *)(a4))->v);
            *(unsigned char *)((t0 + 0x0)) = 0x0;
            *(unsigned short *)((t0 + 0x6)) = 0x11F;
            *(volatile signed char *)((a4 + 0x2));
            t3 = ((int (*)(int, int, int))(FUN_0c187798))(t0, 0x0, a6);
            *(volatile signed char *)((a4 + 0x2));
            t0 = ((int (*)(int))(FUN_0c187798))(t4);
            t0 = (((struct oC8_int *)(a4))->v);
            *(unsigned char *)((t0 + 0x0)) = t5;
            *(unsigned short *)((t0 + 0x6)) = 0x11F;
            (((struct o74_float *)(t0))->v) = 0.0f;
            (((struct o70_float *)(t0))->v) = 0.0f;
            (((struct o6C_float *)(t0))->v) = 0.0f;
            (((struct o88_float *)(t0))->v) = 1.0f;
            (((struct o84_float *)(t0))->v) = 1.0f;
            (((struct o8C_float *)(t0))->v) = 0.5f;
            *(unsigned short *)((a4 + 0x1C)) = 0x1;
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            t2 = 0x15;
        }
        t1 = t2;
    }
    return t1;
}
