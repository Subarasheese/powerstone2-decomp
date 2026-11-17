/* game/unsorted: functions 0C033E3C-0C0341AC, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o74_float { char p[0x74]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c03733c(int, int, int);
int FUN_0c03f346(int, int, int, int);
extern int FUN_0c187798();
int FUN_0c033e3c(int a4, int a5, int a6, int a7);

int FUN_0c033e3c(int a4, int a5, int a6, int a7)
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
    register int t9;
    register int t10;
    register int t11;
    register int t12;
    register int t13;
    register int t14;
    register int t15;
    register int t16;
    register int t17;
    register int t18;
    register int t19;
    register int t20;
    register int t22;

    t18 = *(signed char *)((a4 + 0x14));
    if (t18 != 0) {
        if (t18 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        t18 = *(signed char *)((a4 + 0x15));
        if (t18 != 0) {
            if (t18 != 1) {
                if (t18 == 2) {
                    t19 = (((struct oC4_int *)(a4))->v);
                    (((struct o74_float *)(t19))->v) = (((((struct o74_float *)(t19))->v)) - 0.25f);
                    t19 = (((struct oC8_int *)(a4))->v);
                    (((struct o74_float *)(t19))->v) = (((((struct o74_float *)(t19))->v)) - 0.25f);
                    t19 = 0x74;
                    if (((((struct o74_float *)(((((struct oC8_int *)(a4))->v))))->v)) > -5.0f) {
                    } else {
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        t19 = 0x15;
                    }
                    t20 = t19;
                } else {
                    if (t18 == 3) {
                        t19 = (((struct oC8_int *)(a4))->v);
                        (((struct o8C_float *)(t19))->v) = (((((struct o8C_float *)(t19))->v)) - 0.0250000004f);
                        t19 = 0x8C;
                        if (!(((((struct o8C_float *)(((((struct oC8_int *)(a4))->v))))->v)) > -0.0f)) {
                            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                            t19 = 0x15;
                        }
                        t20 = t19;
                    } else {
                        if (t18 == 4) {
                            if ((*(short *)((a4 + 0x1E))) != 0) {
                                *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) - 1);
                            }
                            if ((*(signed char *)((a4 + 0x2))) != 0) {
                                t19 = ((int)((int)((int)((int)(*(short *)((a4 + 0x1E))) / (int)0x3C)) % (int)0xA));
                            } else {
                                t19 = ((int)((int)((int)((int)(*(short *)((a4 + 0x1E))) / (int)0x3C)) / (int)0xA));
                            }
                            (((struct o20_ushort *)(a4))->v) = t19;
                            FUN_0c03733c(a4, (((((struct o20_short *)(a4))->v)) + 0x1A), (*(int *)0xC4B40D0));
                            t19 = (((struct oC4_int *)(a4))->v);
                            *(unsigned char *)((t19 + 0x0)) = 0x1;
                            *(unsigned short *)((t19 + 0x6)) = 0x31F;
                            *(volatile signed char *)((a4 + 0x2));
                            t22 = ((int (*)(int))(FUN_0c187798))(t19);
                            *(volatile signed char *)((a4 + 0x2));
                            t19 = ((int (*)(int))(FUN_0c187798))(t0);
                            (((struct o18_float *)(t1))->v) = 1.0f;
                            (((struct o1C_float *)(t1))->v) = 0.5f;
                            (((struct o20_float *)(t1))->v) = 0.0f;
                            t0 = (((struct oC8_int *)(a4))->v);
                            *(unsigned char *)((t0 + 0x0)) = 0x1;
                            *(unsigned short *)((t0 + 0x6)) = 0x31F;
                            *(volatile signed char *)((a4 + 0x2));
                            t1 = ((int (*)(int))(FUN_0c187798))(t0);
                            *(volatile signed char *)((a4 + 0x2));
                            t0 = ((int (*)(int))(FUN_0c187798))(t2);
                            (((struct o18_float *)(t3))->v) = 0.5f;
                            (((struct o1C_float *)(t3))->v) = 1.0f;
                            (((struct o20_float *)(t3))->v) = 0.0f;
                            (((struct o74_float *)(((((struct oC4_int *)(a4))->v))))->v) = -5.0f;
                            (((struct o74_float *)(((((struct oC8_int *)(a4))->v))))->v) = -5.0f;
                            (((struct o8C_float *)(((((struct oC8_int *)(a4))->v))))->v) = 0.0f;
                            t0 = *(signed char *)0xC541F41;
                            t1 = (unsigned char)t0;
                            if ((unsigned char)t0 != 3) {
                                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                                t1 = 0x15;
                            }
                            t0 = t1;
                        } else {
                            if (t18 == 5) {
                                t1 = (((struct oC8_int *)(a4))->v);
                                (((struct o8C_float *)(t1))->v) = (((((struct o8C_float *)(t1))->v)) - 0.0250000004f);
                                t1 = (((struct oC4_int *)(a4))->v);
                                (((struct o74_float *)(t1))->v) = (((((struct o74_float *)(t1))->v)) + 0.25f);
                                t1 = (((struct oC8_int *)(a4))->v);
                                (((struct o74_float *)(t1))->v) = (((((struct o74_float *)(t1))->v)) + 0.25f);
                                t1 = 0x74;
                                if (!(0.0f > ((((struct o74_float *)(((((struct oC8_int *)(a4))->v))))->v)))) {
                                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                                    t1 = 0x15;
                                }
                                t2 = t1;
                            } else {
                                t1 = (((struct oC8_int *)(a4))->v);
                                (((struct o8C_float *)(t1))->v) = (((((struct o8C_float *)(t1))->v)) + 0.0250000004f);
                                t1 = 0x8C;
                                if (!(-0.0f > ((((struct o8C_float *)(((((struct oC8_int *)(a4))->v))))->v)))) {
                                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                                    t1 = 0x14;
                                }
                                t2 = t1;
                            }
                            t0 = t2;
                        }
                        t20 = t0;
                    }
                }
                t0 = t20;
            } else {
                t1 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
                t2 = (short)(t1 - 1);
                if ((short)(t1 - 1) != 0) {
                } else {
                    *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
                    *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x1;
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
                *(unsigned short *)((t0 + 0x6)) = 0x31F;
                *(volatile signed char *)((a4 + 0x2));
                t3 = ((int (*)(int, int, int))(FUN_0c187798))(t0, 0x0, a6);
                *(volatile signed char *)((a4 + 0x2));
                t0 = ((int (*)(int))(FUN_0c187798))(t4);
                (((struct o18_float *)(t5))->v) = 1.0f;
                (((struct o1C_float *)(t5))->v) = 0.5f;
                (((struct o20_float *)(t5))->v) = 0.0f;
                t0 = (((struct oC8_int *)(a4))->v);
                *(unsigned char *)((t0 + 0x0)) = t6;
                *(unsigned short *)((t0 + 0x6)) = 0x31F;
                *(volatile signed char *)((a4 + 0x2));
                t3 = ((int (*)(int, int))(FUN_0c187798))(t0, t6);
                *(volatile signed char *)((a4 + 0x2));
                t0 = ((int (*)(int))(FUN_0c187798))(t7);
                (((struct o18_float *)(t8))->v) = 0.5f;
                (((struct o1C_float *)(t8))->v) = 1.0f;
                (((struct o20_float *)(t8))->v) = 0.0f;
                *(unsigned short *)((a4 + 0x1C)) = 0x1;
                *(unsigned short *)((a4 + 0x1E)) = 0x4B0;
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                t2 = 0x15;
            }
            t1 = t2;
        }
        return t1;
    }
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct oAC_ushort *)(a4))->v) = 0xF;
    (((struct oA9_uchar *)(a4))->v) = 0x21;
    *(unsigned short *)((a4 + 0x1C)) = 0x1;
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                t1 = (((struct oC4_int *)(a4))->v);
                (((struct o74_float *)(t1))->v) = (((((struct o74_float *)(t1))->v)) - 0.25f);
                t1 = (((struct oC8_int *)(a4))->v);
                (((struct o74_float *)(t1))->v) = (((((struct o74_float *)(t1))->v)) - 0.25f);
                t1 = 0x74;
                if (((((struct o74_float *)(((((struct oC8_int *)(a4))->v))))->v)) > -5.0f) {
                } else {
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    t1 = 0x15;
                }
                t2 = t1;
            } else {
                if (t0 == 3) {
                    t1 = (((struct oC8_int *)(a4))->v);
                    (((struct o8C_float *)(t1))->v) = (((((struct o8C_float *)(t1))->v)) - 0.0250000004f);
                    t1 = 0x8C;
                    if (!(((((struct o8C_float *)(((((struct oC8_int *)(a4))->v))))->v)) > -0.0f)) {
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        t1 = 0x15;
                    }
                    t3 = t1;
                } else {
                    if (t0 == 4) {
                        if ((*(short *)((a4 + 0x1E))) != 0) {
                            *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) - 1);
                        }
                        if ((*(signed char *)((a4 + 0x2))) != 0) {
                            t1 = ((int)((int)((int)((int)(*(short *)((a4 + 0x1E))) / (int)0x3C)) % (int)0xA));
                        } else {
                            t1 = ((int)((int)((int)((int)(*(short *)((a4 + 0x1E))) / (int)0x3C)) / (int)0xA));
                        }
                        (((struct o20_ushort *)(a4))->v) = t1;
                        FUN_0c03733c(a4, (((((struct o20_short *)(a4))->v)) + 0x1A), (*(int *)0xC4B40D0));
                        t1 = (((struct oC4_int *)(a4))->v);
                        *(unsigned char *)((t1 + 0x0)) = 0x1;
                        *(unsigned short *)((t1 + 0x6)) = 0x31F;
                        *(volatile signed char *)((a4 + 0x2));
                        t4 = ((int (*)(int))(FUN_0c187798))(t1);
                        *(volatile signed char *)((a4 + 0x2));
                        t1 = ((int (*)(int))(FUN_0c187798))(t9);
                        (((struct o18_float *)(t10))->v) = 1.0f;
                        (((struct o1C_float *)(t10))->v) = 0.5f;
                        (((struct o20_float *)(t10))->v) = 0.0f;
                        t1 = (((struct oC8_int *)(a4))->v);
                        *(unsigned char *)((t1 + 0x0)) = 0x1;
                        *(unsigned short *)((t1 + 0x6)) = 0x31F;
                        *(volatile signed char *)((a4 + 0x2));
                        t4 = ((int (*)(int))(FUN_0c187798))(t1);
                        *(volatile signed char *)((a4 + 0x2));
                        t1 = ((int (*)(int))(FUN_0c187798))(t11);
                        (((struct o18_float *)(t12))->v) = 0.5f;
                        (((struct o1C_float *)(t12))->v) = 1.0f;
                        (((struct o20_float *)(t12))->v) = 0.0f;
                        (((struct o74_float *)(((((struct oC4_int *)(a4))->v))))->v) = -5.0f;
                        (((struct o74_float *)(((((struct oC8_int *)(a4))->v))))->v) = -5.0f;
                        (((struct o8C_float *)(((((struct oC8_int *)(a4))->v))))->v) = 0.0f;
                        t1 = *(signed char *)0xC541F41;
                        t4 = (unsigned char)t1;
                        if ((unsigned char)t1 != 3) {
                            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                            t4 = 0x15;
                        }
                        t1 = t4;
                    } else {
                        if (t0 == 5) {
                            t0 = (((struct oC8_int *)(a4))->v);
                            (((struct o8C_float *)(t0))->v) = (((((struct o8C_float *)(t0))->v)) - 0.0250000004f);
                            t0 = (((struct oC4_int *)(a4))->v);
                            (((struct o74_float *)(t0))->v) = (((((struct o74_float *)(t0))->v)) + 0.25f);
                            t0 = (((struct oC8_int *)(a4))->v);
                            (((struct o74_float *)(t0))->v) = (((((struct o74_float *)(t0))->v)) + 0.25f);
                            t0 = 0x74;
                            if (!(0.0f > ((((struct o74_float *)(((((struct oC8_int *)(a4))->v))))->v)))) {
                                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                                t0 = 0x15;
                            }
                            t4 = t0;
                        } else {
                            t0 = (((struct oC8_int *)(a4))->v);
                            (((struct o8C_float *)(t0))->v) = (((((struct o8C_float *)(t0))->v)) + 0.0250000004f);
                            t0 = 0x8C;
                            if (!(-0.0f > ((((struct o8C_float *)(((((struct oC8_int *)(a4))->v))))->v)))) {
                                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                                t0 = 0x14;
                            }
                            t4 = t0;
                        }
                        t1 = t4;
                    }
                    t3 = t1;
                }
                t2 = t3;
            }
            t0 = t2;
        } else {
            t1 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
            t2 = (short)(t1 - 1);
            if ((short)(t1 - 1) != 0) {
            } else {
                *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
                *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x1;
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
            *(unsigned short *)((t0 + 0x6)) = 0x31F;
            *(volatile signed char *)((a4 + 0x2));
            t3 = ((int (*)(int, int, int))(FUN_0c187798))(t0, 0x0, a6);
            *(volatile signed char *)((a4 + 0x2));
            t0 = ((int (*)(int))(FUN_0c187798))(t13);
            (((struct o18_float *)(t14))->v) = 1.0f;
            (((struct o1C_float *)(t14))->v) = 0.5f;
            (((struct o20_float *)(t14))->v) = 0.0f;
            t0 = (((struct oC8_int *)(a4))->v);
            *(unsigned char *)((t0 + 0x0)) = t15;
            *(unsigned short *)((t0 + 0x6)) = 0x31F;
            *(volatile signed char *)((a4 + 0x2));
            t3 = ((int (*)(int, int))(FUN_0c187798))(t0, t15);
            *(volatile signed char *)((a4 + 0x2));
            t0 = ((int (*)(int))(FUN_0c187798))(t16);
            (((struct o18_float *)(t17))->v) = 0.5f;
            (((struct o1C_float *)(t17))->v) = 1.0f;
            (((struct o20_float *)(t17))->v) = 0.0f;
            *(unsigned short *)((a4 + 0x1C)) = 0x1;
            *(unsigned short *)((a4 + 0x1E)) = 0x4B0;
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            t2 = 0x15;
        }
        t1 = t2;
    }
    return t1;
}
