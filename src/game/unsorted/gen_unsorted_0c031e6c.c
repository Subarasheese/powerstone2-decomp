/* game/unsorted: functions 0C031E6C-0C0329BE, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
extern int FUN_0c187798();
int FUN_0c031e6c(void);
int FUN_0c031ed4(int a4, int a5, int a6, int a7, float f4);
int FUN_0c0321d8(void);
int FUN_0c032240(int a4, int a5, int a6, int a7);
int FUN_0c03247c(void);
int FUN_0c032788(void);
int FUN_0c0327f0(int a4, float f4, float f5);

int FUN_0c031e6c(void)
{
    register int t0;
    register int t2;
    register int t4;
    register int t7;

    t0 = 0x0;
    for (;;) {
        t2 = *(signed char *)((((t0 * 0x1C) + 0xC1A9578) + 0x18));
        FUN_0c037320(t2, (*(int *)0xC4B40D0));
        t4 = FUN_0c03f444(0x8, 0x0, 0x2);
        t7 = t4;
        if (t4 != 0) {
            FUN_0c03733c(t4, t2, (*(int *)0xC4B40D0));
            *(unsigned int *)((t4 + 0x4)) = 0xC031CC2;
            *(unsigned char *)((t4 + 0x2)) = t0;
            t7 = t0;
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x7) {
            break;
        }
    }
    return t7;
}

int FUN_0c031ed4(int a4, int a5, int a6, int a7, float f4)
{
    register int t0;
    register int t1;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;

    t4 = *(signed char *)((a4 + 0x14));
    if (t4 != 0) {
        if (t4 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        t4 = *(signed char *)((a4 + 0x15));
        if (t4 != 0) {
            if (t4 == 1) {
                t5 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t5 - 1);
                t6 = (short)(t5 - 1);
                if ((short)(t5 - 1) == 0) {
                    *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
                    *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x1;
                    (((struct o74_float *)(((((struct oC4_int *)(a4))->v))))->v) = 0.0f;
                    (((struct o74_float *)(((((struct oC8_int *)(a4))->v))))->v) = 0.0f;
                    (((struct o8C_float *)(((((struct oC8_int *)(a4))->v))))->v) = 1.0f;
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    t6 = 0x15;
                }
                t5 = t6;
            } else {
                if (t4 == 2) {
                    t6 = (((struct oC4_int *)(a4))->v);
                    (((struct o74_float *)(t6))->v) = (((((struct o74_float *)(t6))->v)) - 0.200000003f);
                    t6 = (((struct oC8_int *)(a4))->v);
                    (((struct o74_float *)(t6))->v) = (((((struct o74_float *)(t6))->v)) - 0.200000003f);
                    t6 = 0x74;
                    if (!(((((struct o74_float *)(((((struct oC8_int *)(a4))->v))))->v)) > -5.0f)) {
                        *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        t6 = 0x15;
                    }
                    t7 = t6;
                } else {
                    if (t4 == 3) {
                        t6 = (((struct oC8_int *)(a4))->v);
                        (((struct o8C_float *)(t6))->v) = (((((struct o8C_float *)(t6))->v)) - 0.0399999991f);
                        t6 = 0x8C;
                        if (0.0f > ((((struct o8C_float *)(((((struct oC8_int *)(a4))->v))))->v))) {
                            t7 = *(signed char *)((a4 + 0x2));
                            *(unsigned short *)((a4 + 0x1C)) = ((-((t7 << 2) + t7)) + 0x3C);
                            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                            t6 = 0x15;
                        }
                        t7 = t6;
                    } else {
                        t6 = t4;
                        if (t4 == 4) {
                            t4 = *(short *)((a4 + 0x1C));
                            *(unsigned short *)((a4 + 0x1C)) = (t4 - 1);
                            t6 = (short)(t4 - 1);
                            if ((short)(t4 - 1) == 0) {
                                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                                t6 = 0x14;
                            }
                        }
                        t7 = t6;
                    }
                }
                t5 = t7;
            }
            t4 = t5;
        } else {
            t5 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t5 - 1);
            if ((short)(t5 - 1) != 0) {
            } else {
                if ((int)(*(signed char *)((a4 + 0x2))) < (int)0x6) {
                    t5 = (((struct oC4_int *)(a4))->v);
                    *(unsigned char *)((t5 + 0x0)) = 0x0;
                    *(unsigned short *)((t5 + 0x6)) = 0x11F;
                    *(volatile signed char *)((a4 + 0x2));
                    t6 = ((int (*)(int, int, int))(FUN_0c187798))(t5, 0x11F, a6);
                    *(volatile signed char *)((a4 + 0x2));
                    t5 = ((int (*)(int))(FUN_0c187798))(t0);
                    t0 = (((struct oC8_int *)(a4))->v);
                    FUN_0c03744a(t0, 0x1, (*(signed char *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC1A963C) + 0x19))), (*(int *)0xC4B40D0));
                    *(unsigned char *)((t0 + 0x0)) = 0x0;
                    *(unsigned short *)((t0 + 0x6)) = 0x31F;
                    *(volatile signed char *)((a4 + 0x2));
                    t5 = ((int (*)(void))(FUN_0c187798))();
                    *(volatile signed char *)((a4 + 0x2));
                    t5 = ((int (*)(void))(FUN_0c187798))();
                    (((struct o18_float *)(t0))->v) = 0.0f;
                    (((struct o1C_float *)(t0))->v) = 0.0f;
                    (((struct o20_float *)(t0))->v) = 1.0f;
                } else {
                    t0 = (((struct oC4_int *)(a4))->v);
                    *(unsigned char *)((t0 + 0x0)) = 0x0;
                    *(unsigned short *)((t0 + 0x6)) = 0x11F;
                    *(volatile signed char *)((a4 + 0x2));
                    t5 = ((int (*)(int, int, int))(FUN_0c187798))(t0, 0x11F, a6);
                    *(volatile signed char *)((a4 + 0x2));
                    t0 = ((int (*)(int))(FUN_0c187798))(t1);
                    t0 = (((struct oC8_int *)(a4))->v);
                    FUN_0c03744a(t0, 0x1, (*(signed char *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC1A963C) + 0x19))), (*(int *)0xC4B40D0));
                    *(unsigned char *)((t0 + 0x0)) = 0x0;
                    *(unsigned short *)((t0 + 0x6)) = 0x31F;
                    *(volatile signed char *)((a4 + 0x2));
                    t1 = ((int (*)(void))(FUN_0c187798))();
                    *(volatile signed char *)((a4 + 0x2));
                    t1 = ((int (*)(void))(FUN_0c187798))();
                    (((struct o18_float *)(t0))->v) = 1.0f;
                    (((struct o1C_float *)(t0))->v) = 0.300000012f;
                    (((struct o20_float *)(t0))->v) = 0.0f;
                }
                t0 = *(signed char *)((a4 + 0x2));
                *(unsigned short *)((a4 + 0x1C)) = (((t0 << 2) + t0) + 0x1);
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            }
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
            t1 = (short)(t0 - 1);
            if ((short)(t0 - 1) == 0) {
                *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
                *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x1;
                (((struct o74_float *)(((((struct oC4_int *)(a4))->v))))->v) = 0.0f;
                (((struct o74_float *)(((((struct oC8_int *)(a4))->v))))->v) = 0.0f;
                (((struct o8C_float *)(((((struct oC8_int *)(a4))->v))))->v) = 1.0f;
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                t1 = 0x15;
            }
            t4 = t1;
        }
        return t4;
    }
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct oAC_ushort *)(a4))->v) = 0xF;
    (((struct oA9_uchar *)(a4))->v) = 0x21;
    *(unsigned short *)((a4 + 0x1C)) = 0x1;
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 == 1) {
            t1 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
            t4 = (short)(t1 - 1);
            if ((short)(t1 - 1) == 0) {
                *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
                *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x1;
                (((struct o74_float *)(((((struct oC4_int *)(a4))->v))))->v) = 0.0f;
                (((struct o74_float *)(((((struct oC8_int *)(a4))->v))))->v) = 0.0f;
                (((struct o8C_float *)(((((struct oC8_int *)(a4))->v))))->v) = 1.0f;
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                t4 = 0x15;
            }
            t1 = t4;
        } else {
            if (t0 == 2) {
                t4 = (((struct oC4_int *)(a4))->v);
                (((struct o74_float *)(t4))->v) = (((((struct o74_float *)(t4))->v)) - 0.200000003f);
                t4 = (((struct oC8_int *)(a4))->v);
                (((struct o74_float *)(t4))->v) = (((((struct o74_float *)(t4))->v)) - 0.200000003f);
                t4 = 0x74;
                if (!(((((struct o74_float *)(((((struct oC8_int *)(a4))->v))))->v)) > -5.0f)) {
                    *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    t4 = 0x15;
                }
                t5 = t4;
            } else {
                if (t0 == 3) {
                    t4 = (((struct oC8_int *)(a4))->v);
                    (((struct o8C_float *)(t4))->v) = (((((struct o8C_float *)(t4))->v)) - 0.0399999991f);
                    t4 = 0x8C;
                    if (0.0f > ((((struct o8C_float *)(((((struct oC8_int *)(a4))->v))))->v))) {
                        t6 = *(signed char *)((a4 + 0x2));
                        *(unsigned short *)((a4 + 0x1C)) = ((-((t6 << 2) + t6)) + 0x3C);
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        t4 = 0x15;
                    }
                    t6 = t4;
                } else {
                    t4 = t0;
                    if (t0 == 4) {
                        t0 = *(short *)((a4 + 0x1C));
                        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
                        t7 = (short)(t0 - 1);
                        if ((short)(t0 - 1) == 0) {
                            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                            t7 = 0x14;
                        }
                        t4 = t7;
                    }
                    t6 = t4;
                }
                t5 = t6;
            }
            t1 = t5;
        }
        t0 = t1;
    } else {
        t1 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
        if ((short)(t1 - 1) != 0) {
        } else {
            if ((int)(*(signed char *)((a4 + 0x2))) < (int)0x6) {
                t1 = (((struct oC4_int *)(a4))->v);
                *(unsigned char *)((t1 + 0x0)) = 0x0;
                *(unsigned short *)((t1 + 0x6)) = 0x11F;
                *(volatile signed char *)((a4 + 0x2));
                t4 = ((int (*)(int, int, int))(FUN_0c187798))(t1, 0x11F, a6);
                *(volatile signed char *)((a4 + 0x2));
                t1 = ((int (*)(int))(FUN_0c187798))(t0);
                t1 = (((struct oC8_int *)(a4))->v);
                FUN_0c03744a(t1, 0x1, (*(signed char *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC1A963C) + 0x19))), (*(int *)0xC4B40D0));
                *(unsigned char *)((t1 + 0x0)) = 0x0;
                *(unsigned short *)((t1 + 0x6)) = 0x31F;
                *(volatile signed char *)((a4 + 0x2));
                t0 = ((int (*)(void))(FUN_0c187798))();
                *(volatile signed char *)((a4 + 0x2));
                t0 = ((int (*)(void))(FUN_0c187798))();
                (((struct o18_float *)(t1))->v) = 0.0f;
                (((struct o1C_float *)(t1))->v) = 0.0f;
                (((struct o20_float *)(t1))->v) = 1.0f;
            } else {
                t1 = (((struct oC4_int *)(a4))->v);
                *(unsigned char *)((t1 + 0x0)) = 0x0;
                *(unsigned short *)((t1 + 0x6)) = 0x11F;
                *(volatile signed char *)((a4 + 0x2));
                t0 = ((int (*)(int, int, int))(FUN_0c187798))(t1, 0x11F, a6);
                *(volatile signed char *)((a4 + 0x2));
                t1 = ((int (*)(int))(FUN_0c187798))(t3);
                t1 = (((struct oC8_int *)(a4))->v);
                FUN_0c03744a(t1, 0x1, (*(signed char *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC1A963C) + 0x19))), (*(int *)0xC4B40D0));
                *(unsigned char *)((t1 + 0x0)) = 0x0;
                *(unsigned short *)((t1 + 0x6)) = 0x31F;
                *(volatile signed char *)((a4 + 0x2));
                t0 = ((int (*)(void))(FUN_0c187798))();
                *(volatile signed char *)((a4 + 0x2));
                t0 = ((int (*)(void))(FUN_0c187798))();
                (((struct o18_float *)(t1))->v) = 1.0f;
                (((struct o1C_float *)(t1))->v) = 0.300000012f;
                (((struct o20_float *)(t1))->v) = 0.0f;
            }
            t1 = *(signed char *)((a4 + 0x2));
            *(unsigned short *)((a4 + 0x1C)) = (((t1 << 2) + t1) + 0x1);
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        }
        t1 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
        t0 = (short)(t1 - 1);
        if ((short)(t1 - 1) == 0) {
            *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
            *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x1;
            (((struct o74_float *)(((((struct oC4_int *)(a4))->v))))->v) = 0.0f;
            (((struct o74_float *)(((((struct oC8_int *)(a4))->v))))->v) = 0.0f;
            (((struct o8C_float *)(((((struct oC8_int *)(a4))->v))))->v) = 1.0f;
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            t0 = 0x15;
        }
    }
    return t0;
}

int FUN_0c0321d8(void)
{
    register int t0;
    register int t2;
    register int t4;
    register int t7;

    t0 = 0x0;
    for (;;) {
        t2 = *(signed char *)((((t0 * 0x1C) + 0xC1A963C) + 0x18));
        FUN_0c037320(t2, (*(int *)0xC4B40D0));
        t4 = FUN_0c03f444(0x8, 0x0, 0x2);
        t7 = t4;
        if (t4 != 0) {
            FUN_0c03733c(t4, t2, (*(int *)0xC4B40D0));
            *(unsigned int *)((t4 + 0x4)) = 0xC031ED4;
            *(unsigned char *)((t4 + 0x2)) = t0;
            t7 = t0;
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x8) {
            break;
        }
    }
    return t7;
}

int FUN_0c032240(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;

    t2 = *(signed char *)((a4 + 0x14));
    if (t2 != 0) {
        if (t2 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        t2 = *(signed char *)((a4 + 0x15));
        if (t2 != 0) {
            if (t2 != 1) {
                if (t2 == 2) {
                    t3 = (((struct oC8_int *)(a4))->v);
                    (((struct o8C_float *)(t3))->v) = (((((struct o8C_float *)(t3))->v)) + 0.0500000007f);
                    t3 = 0x8C;
                    if (((((struct o8C_float *)(((((struct oC8_int *)(a4))->v))))->v)) > 0.5f) {
                        *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        t3 = 0x15;
                    }
                    t4 = t3;
                } else {
                    if (t2 == 3) {
                        t3 = (((struct oC8_int *)(a4))->v);
                        (((struct o8C_float *)(t3))->v) = (((((struct o8C_float *)(t3))->v)) - 0.0500000007f);
                        t3 = 0x8C;
                        if (0.0f > ((((struct o8C_float *)(((((struct oC8_int *)(a4))->v))))->v))) {
                            *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x0;
                            *(unsigned short *)((a4 + 0x1C)) = 0x3C;
                            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                            t3 = 0x15;
                        }
                        t5 = t3;
                    } else {
                        if (t2 == 4) {
                            t3 = *(short *)((a4 + 0x1C));
                            *(unsigned short *)((a4 + 0x1C)) = (t3 - 1);
                            t6 = (short)(t3 - 1);
                            if ((short)(t3 - 1) == 0) {
                                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                                t6 = 0x15;
                            }
                            t3 = t6;
                        } else {
                            t6 = t2;
                            if (t2 == 5) {
                                t2 = (((struct oC8_int *)(a4))->v);
                                (((struct o14_float *)(t2))->v) = (((((struct o14_float *)(t2))->v)) - 0.100000001f);
                                if (0.0f > ((((struct o14_float *)(((((struct oC8_int *)(a4))->v))))->v))) {
                                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                                }
                                t6 = 0x14;
                            }
                            t3 = t6;
                        }
                        t5 = t3;
                    }
                    t4 = t5;
                }
                t2 = t4;
            } else {
                t3 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t3 - 1);
                t4 = (short)(t3 - 1);
                if ((short)(t3 - 1) == 0) {
                    *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x1;
                    (((struct o8C_float *)(((((struct oC8_int *)(a4))->v))))->v) = 0.0f;
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    t4 = 0x15;
                }
                t2 = t4;
            }
            t3 = t2;
        } else {
            t2 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t2 - 1);
            if ((short)(t2 - 1) == 0) {
                t2 = (((struct oC4_int *)(a4))->v);
                *(unsigned char *)((t2 + 0x0)) = 0x0;
                *(unsigned short *)((t2 + 0x6)) = 0x11F;
                *(volatile signed char *)((a4 + 0x2));
                t4 = ((int (*)(int, int, int))(FUN_0c187798))(t2, a5, a6);
                *(volatile signed char *)((a4 + 0x2));
                t2 = ((int (*)(int))(FUN_0c187798))(t0);
                t0 = (((struct oC8_int *)(a4))->v);
                FUN_0c03744a(t0, 0x1, (*(signed char *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC1A971C) + 0x19))), (*(int *)0xC4B40D0));
                *(unsigned char *)((t0 + 0x0)) = 0x0;
                *(unsigned short *)((t0 + 0x6)) = 0x71F;
                *(volatile signed char *)((a4 + 0x2));
                t2 = ((int (*)(void))(FUN_0c187798))();
                *(volatile signed char *)((a4 + 0x2));
                t2 = ((int (*)(void))(FUN_0c187798))();
                (((struct o14_float *)(t0))->v) = 1.0f;
                (((struct o18_float *)(t0))->v) = 1.0f;
                (((struct o1C_float *)(t0))->v) = 0.699999988f;
                (((struct o20_float *)(t0))->v) = 0.0f;
                *(unsigned short *)((a4 + 0x1C)) = 0x1;
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            }
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
            t2 = (short)(t0 - 1);
            if ((short)(t0 - 1) == 0) {
                *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x1;
                (((struct o8C_float *)(((((struct oC8_int *)(a4))->v))))->v) = 0.0f;
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                t2 = 0x15;
            }
            t3 = t2;
        }
        return t3;
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
                t2 = (((struct oC8_int *)(a4))->v);
                (((struct o8C_float *)(t2))->v) = (((((struct o8C_float *)(t2))->v)) + 0.0500000007f);
                t2 = 0x8C;
                if (((((struct o8C_float *)(((((struct oC8_int *)(a4))->v))))->v)) > 0.5f) {
                    *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    t2 = 0x15;
                }
                t3 = t2;
            } else {
                if (t0 == 3) {
                    t2 = (((struct oC8_int *)(a4))->v);
                    (((struct o8C_float *)(t2))->v) = (((((struct o8C_float *)(t2))->v)) - 0.0500000007f);
                    t2 = 0x8C;
                    if (0.0f > ((((struct o8C_float *)(((((struct oC8_int *)(a4))->v))))->v))) {
                        *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x0;
                        *(unsigned short *)((a4 + 0x1C)) = 0x3C;
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        t2 = 0x15;
                    }
                    t4 = t2;
                } else {
                    if (t0 == 4) {
                        t2 = *(short *)((a4 + 0x1C));
                        *(unsigned short *)((a4 + 0x1C)) = (t2 - 1);
                        t5 = (short)(t2 - 1);
                        if ((short)(t2 - 1) == 0) {
                            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                            t5 = 0x15;
                        }
                        t2 = t5;
                    } else {
                        t5 = t0;
                        if (t0 == 5) {
                            t0 = (((struct oC8_int *)(a4))->v);
                            (((struct o14_float *)(t0))->v) = (((((struct o14_float *)(t0))->v)) - 0.100000001f);
                            if (0.0f > ((((struct o14_float *)(((((struct oC8_int *)(a4))->v))))->v))) {
                                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                            }
                            t5 = 0x14;
                        }
                        t2 = t5;
                    }
                    t4 = t2;
                }
                t3 = t4;
            }
            t0 = t3;
        } else {
            t2 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t2 - 1);
            t3 = (short)(t2 - 1);
            if ((short)(t2 - 1) == 0) {
                *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x1;
                (((struct o8C_float *)(((((struct oC8_int *)(a4))->v))))->v) = 0.0f;
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                t3 = 0x15;
            }
            t0 = t3;
        }
        t2 = t0;
    } else {
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        if ((short)(t0 - 1) == 0) {
            t0 = (((struct oC4_int *)(a4))->v);
            *(unsigned char *)((t0 + 0x0)) = 0x0;
            *(unsigned short *)((t0 + 0x6)) = 0x11F;
            *(volatile signed char *)((a4 + 0x2));
            t3 = ((int (*)(int, int, int))(FUN_0c187798))(t0, a5, a6);
            *(volatile signed char *)((a4 + 0x2));
            t0 = ((int (*)(int))(FUN_0c187798))(t2);
            t0 = (((struct oC8_int *)(a4))->v);
            FUN_0c03744a(t0, 0x1, (*(signed char *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC1A971C) + 0x19))), (*(int *)0xC4B40D0));
            *(unsigned char *)((t0 + 0x0)) = 0x0;
            *(unsigned short *)((t0 + 0x6)) = 0x71F;
            *(volatile signed char *)((a4 + 0x2));
            t2 = ((int (*)(void))(FUN_0c187798))();
            *(volatile signed char *)((a4 + 0x2));
            t2 = ((int (*)(void))(FUN_0c187798))();
            (((struct o14_float *)(t0))->v) = 1.0f;
            (((struct o18_float *)(t0))->v) = 1.0f;
            (((struct o1C_float *)(t0))->v) = 0.699999988f;
            (((struct o20_float *)(t0))->v) = 0.0f;
            *(unsigned short *)((a4 + 0x1C)) = 0x1;
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        }
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        t2 = (short)(t0 - 1);
        if ((short)(t0 - 1) == 0) {
            *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x1;
            (((struct o8C_float *)(((((struct oC8_int *)(a4))->v))))->v) = 0.0f;
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            t2 = 0x15;
        }
    }
    return t2;
}

int FUN_0c03247c(void)
{
    register int t0;
    register int t2;
    register int t4;
    register int t7;

    t0 = 0x0;
    for (;;) {
        t2 = *(signed char *)((((t0 * 0x1C) + 0xC1A971C) + 0x18));
        FUN_0c037320(t2, (*(int *)0xC4B40D0));
        t4 = FUN_0c03f444(0x8, 0x0, 0x2);
        t7 = t4;
        if (t4 != 0) {
            FUN_0c03733c(t4, t2, (*(int *)0xC4B40D0));
            *(unsigned int *)((t4 + 0x4)) = 0xC032240;
            *(unsigned char *)((t4 + 0x2)) = t0;
            t7 = t0;
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x4) {
            break;
        }
    }
    return t7;
}

int FUN_0c032788(void)
{
    register int t0;
    register int t2;
    register int t4;
    register int t7;

    t0 = 0x0;
    for (;;) {
        t2 = *(signed char *)((((t0 * 0x1C) + 0xC1A978C) + 0x18));
        FUN_0c037320(t2, (*(int *)0xC4B40D0));
        t4 = FUN_0c03f444(0x8, 0x0, 0x2);
        t7 = t4;
        if (t4 != 0) {
            FUN_0c03733c(t4, t2, (*(int *)0xC4B40D0));
            *(unsigned int *)((t4 + 0x4)) = 0xC0324E4;
            *(unsigned char *)((t4 + 0x2)) = t0;
            t7 = t0;
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x7) {
            break;
        }
    }
    return t7;
}

int FUN_0c0327f0(int a4, float f4, float f5)
{
    register int t51;
    register int t53;
    register int t56;
    register int t57;
    register int t62;
    register int t64;
    register int t67;
    register int t68;

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R7;
    register int R12;
    register int R14;
    register float F2;
    register float F3;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register float w0_0;
    register float w0_1;
    v0_1 = a4;
    v0_3 = *(signed char *)((v0_1 + 0x14));
    v0_2 = (v0_3);
    v0_0 = (0x1);
    if ((v0_3 == 0)) goto L_C032804;
    if ((v0_2 == 1)) goto L_C032822;
    return FUN_0c03f346(v0_1, R5, v0_0, R7);
    L_C032822:;
    v0_3 = *(signed char *)((v0_1 + 0x15));
    v0_2 = (v0_3);
    w0_0 = (0.0f);
    w0_1 = (1.0f);
    if ((v0_3 == 0)) goto L_C032868;
    if ((v0_2 == 1)) goto L_C032906;
    if ((v0_2 != 2)) goto L_C03283A;
    v0_2 = (((struct oC4_int *)(v0_1))->v);
    (((struct o74_float *)(v0_2))->v) = (((((struct o74_float *)(v0_2))->v)) - 0.200000003f);
    v0_2 = (((struct oC8_int *)(v0_1))->v);
    (((struct o74_float *)(v0_2))->v) = (((((struct o74_float *)(v0_2))->v)) - 0.200000003f);
    v0_2 = (0x74);
    if ((((((struct o74_float *)(((((struct oC8_int *)(v0_1))->v))))->v)) > -5.0f)) goto L_C0329B8;
    *(unsigned char *)((((((struct oC4_int *)(v0_1))->v)) + 0x0)) = v0_0;
    L_C032992:;
    (((struct o15_uchar *)(v0_1))->v) = ((*(signed char *)((v0_1 + 0x15))) + 0x1);
    v0_2 = (0x15);
    L_C0329B8:;
    return v0_2;
    L_C03283A:;
    if ((v0_2 != 3)) goto L_C032842;
    v0_0 = (((struct oC8_int *)(v0_1))->v);
    (((struct o8C_float *)(v0_0))->v) = (((((struct o8C_float *)(v0_0))->v)) - 0.0399999991f);
    w0_0 = (((struct o8C_float *)(((((struct oC8_int *)(v0_1))->v))))->v);
    v0_2 = (0x8C);
    w0_1 = (w0_0);
    FPUL_ = (0x3D23D70A);
    if ((!(0.0f > w0_0))) goto L_C0329B8;
    *(unsigned short *)((v0_1 + 0x1C)) = 0x3C;
    goto L_C032992;
    L_C032842:;
    if ((v0_2 != 4)) goto L_C03284A;
    v0_0 = *(short *)((v0_1 + 0x1C));
    *(unsigned short *)((v0_1 + 0x1C)) = (v0_0 - 1);
    v0_2 = ((short)(v0_0 - 1));
    if (((short)(v0_0 - 1) != 0)) goto L_C0329B8;
    (((struct o14_uchar *)(v0_1))->v) = ((*(signed char *)((v0_1 + 0x14))) + 0x1);
    v0_2 = (0x14);
    goto L_C0329B8;
    L_C03284A:;
    goto L_C0329B8;
    L_C032906:;
    v0_3 = *(short *)((v0_1 + 0x1C));
    *(unsigned short *)((v0_1 + 0x1C)) = (v0_3 - 1);
    v0_2 = ((short)(v0_3 - 1));
    if (((short)(v0_3 - 1) != 0)) goto L_C0329B8;
    *(unsigned char *)((((((struct oC4_int *)(v0_1))->v)) + 0x0)) = v0_0;
    *(unsigned char *)((((((struct oC8_int *)(v0_1))->v)) + 0x0)) = v0_0;
    (((struct o74_float *)(((((struct oC4_int *)(v0_1))->v))))->v) = w0_0;
    (((struct o74_float *)(((((struct oC8_int *)(v0_1))->v))))->v) = w0_0;
    (((struct o8C_float *)(((((struct oC8_int *)(v0_1))->v))))->v) = w0_1;
    goto L_C032992;
    L_C032868:;
    v0_2 = *(short *)((v0_1 + 0x1C));
    *(unsigned short *)((v0_1 + 0x1C)) = (v0_2 - 1);
    if (((short)(v0_2 - 1) != 0)) goto L_C032906;
    v0_2 = (((struct oC4_int *)(v0_1))->v);
    *(unsigned char *)((v0_2 + 0x0)) = 0x0;
    *(unsigned short *)((v0_2 + 0x6)) = 0x31F;
    *(volatile signed char *)((v0_1 + 0x2));
    v0_1 = ((int (*)(int, int, int))(FUN_0c187798))(v0_1, v0_2, v0_0);
    *(volatile signed char *)((t51 + 0x2));
    v0_1 = ((int (*)(int, int))(FUN_0c187798))(t51, t53);
    (((struct o18_float *)(t56))->v) = f5;
    (((struct o1C_float *)(t56))->v) = f4;
    (((struct o20_float *)(t56))->v) = f4;
    v0_1 = (((struct oC8_int *)(t57))->v);
    *(unsigned char *)((v0_1 + 0x0)) = 0x0;
    *(unsigned short *)((v0_1 + 0x6)) = 0x31F;
    *(volatile signed char *)((t57 + 0x2));
    v0_1 = ((int (*)(int, int))(FUN_0c187798))(t57, v0_1);
    *(volatile signed char *)((t62 + 0x2));
    v0_1 = ((int (*)(int, int))(FUN_0c187798))(t62, t64);
    (((struct o18_float *)(t67))->v) = f5;
    (((struct o1C_float *)(t67))->v) = f4;
    (((struct o20_float *)(t67))->v) = f4;
    *(unsigned short *)((t68 + 0x1C)) = 0x3C;
    (((struct o15_uchar *)(t68))->v) = ((*(signed char *)((t68 + 0x15))) + 0x1);
    v0_1 = (t68);
    w0_0 = (f4);
    w0_1 = (f5);
    goto L_C032906;
    L_C032804:;
    (((struct oA8_uchar *)(v0_1))->v) = v0_0;
    (((struct oAC_ushort *)(v0_1))->v) = 0xF;
    (((struct oA9_uchar *)(v0_1))->v) = 0x21;
    *(unsigned short *)((v0_1 + 0x1C)) = v0_0;
    (((struct o14_uchar *)(v0_1))->v) = ((*(signed char *)((v0_1 + 0x14))) + 0x1);
    goto L_C032822;
}
