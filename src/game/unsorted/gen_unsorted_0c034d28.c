/* game/unsorted: functions 0C034D28-0C03598E, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
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
int FUN_0c187798(int, int);
int FUN_0c034d28(void);
int FUN_0c034d8c(int a4, int a5, int a6, int a7, float f4);
int FUN_0c035024(void);
int FUN_0c0353e8(void);
int FUN_0c035646(void);
int FUN_0c03592a(void);

int FUN_0c034d28(void)
{
    register int t0;
    register int t2;
    register int t4;
    register int t7;

    t0 = 0x0;
    for (;;) {
        t2 = *(signed char *)(((t0 * 0x1C) + 0xC1AA304));
        FUN_0c037320(t2, (*(int *)0xC4B410C));
        t4 = FUN_0c03f444(0x8, 0x0, 0x2);
        t7 = t4;
        if (t4 != 0) {
            FUN_0c03733c(t4, t2, (*(int *)0xC4B410C));
            *(unsigned int *)((t4 + 0x4)) = 0xC0349F6;
            *(unsigned char *)((t4 + 0x2)) = t0;
            t7 = t0;
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x2) {
            break;
        }
    }
    return t7;
}

int FUN_0c034d8c(int a4, int a5, int a6, int a7, float f4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register float u0;

    if ((unsigned char)(*(signed char *)0xC541F41) == 9) {
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    t2 = *(signed char *)((a4 + 0x14));
    if (t2 != 0) {
        if (t2 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        t2 = *(signed char *)((a4 + 0x15));
        if (t2 != 0) {
            if (t2 != 1) {
                if (t2 == 2) {
                    t3 = (((struct oC4_int *)(a4))->v);
                    (((struct o74_float *)(t3))->v) = (((((struct o74_float *)(t3))->v)) - 0.200000003f);
                    t3 = (((struct oC8_int *)(a4))->v);
                    (((struct o74_float *)(t3))->v) = (((((struct o74_float *)(t3))->v)) - 0.200000003f);
                    t3 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t3 - 1);
                    t4 = (short)(t3 - 1);
                    if ((short)(t3 - 1) == 0) {
                        *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
                        *(unsigned short *)((a4 + 0x1C)) = 0xA;
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        t4 = 0x15;
                    }
                    t3 = t4;
                } else {
                    if (t2 == 3) {
                        t4 = (((struct oC8_int *)(a4))->v);
                        (((struct o8C_float *)(t4))->v) = (((((struct o8C_float *)(t4))->v)) - 0.0299999993f);
                        t4 = *(short *)((a4 + 0x1C));
                        *(unsigned short *)((a4 + 0x1C)) = (t4 - 1);
                        t5 = (short)(t4 - 1);
                        if ((short)(t4 - 1) == 0) {
                            *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x71F;
                            (((struct o14_float *)(((((struct oC4_int *)(a4))->v))))->v) = 1.0f;
                            *(unsigned short *)((a4 + 0x1C)) = 0x19;
                            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                            t5 = 0x15;
                        }
                        t4 = t5;
                    } else {
                        if (t2 == 4) {
                            u0 = *(float *)0xC0350C0;
                            t5 = (((struct oC4_int *)(a4))->v);
                            (((struct o1C_float *)(t5))->v) = (((((struct o1C_float *)(t5))->v)) + u0);
                            t5 = (((struct oC4_int *)(a4))->v);
                            (((struct o20_float *)(t5))->v) = (((((struct o20_float *)(t5))->v)) + u0);
                            t5 = *(short *)((a4 + 0x1C));
                            *(unsigned short *)((a4 + 0x1C)) = (t5 - 1);
                            t6 = (short)(t5 - 1);
                            if ((short)(t5 - 1) == 0) {
                                *(unsigned short *)((a4 + 0x1C)) = 0x3C;
                                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                                t6 = 0x15;
                            }
                            t5 = t6;
                        } else {
                            t6 = t2;
                            if (t2 == 5) {
                                t2 = *(short *)((a4 + 0x1C));
                                *(unsigned short *)((a4 + 0x1C)) = (t2 - 1);
                                t6 = (short)(t2 - 1);
                                if ((short)(t2 - 1) == 0) {
                                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                                    t6 = 0x14;
                                }
                            }
                            t5 = t6;
                        }
                        t4 = t5;
                    }
                    t3 = t4;
                }
                t2 = t3;
            } else {
                t3 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t3 - 1);
                t4 = (short)(t3 - 1);
                if ((short)(t3 - 1) != 0) {
                } else {
                    *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
                    *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x1;
                    (((struct o74_float *)(((((struct oC4_int *)(a4))->v))))->v) = 0.0f;
                    (((struct o74_float *)(((((struct oC8_int *)(a4))->v))))->v) = 0.0f;
                    (((struct o8C_float *)(((((struct oC8_int *)(a4))->v))))->v) = 0.300000012f;
                    *(unsigned short *)((a4 + 0x1C)) = 0x19;
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    t4 = 0x15;
                }
                t2 = t4;
            }
            t3 = t2;
        } else {
            t2 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t2 - 1);
            t4 = (short)(t2 - 1);
            if ((short)(t2 - 1) != 0) {
            } else {
                t2 = (((struct oC4_int *)(a4))->v);
                *(unsigned char *)((t2 + 0x0)) = 0x0;
                *(unsigned short *)((t2 + 0x6)) = 0x11F;
                *(volatile signed char *)((a4 + 0x2));
                t5 = ((int (*)(int, int, int))(FUN_0c187798))(t2, a5, a6);
                *(volatile signed char *)((a4 + 0x2));
                t2 = ((int (*)(int))(FUN_0c187798))(t0);
                t0 = (((struct oC8_int *)(a4))->v);
                FUN_0c03744a(t0, 0x1, (*(signed char *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC1AA324) + 0x19))), (*(int *)0xC4B40D0));
                *(unsigned char *)((t0 + 0x0)) = 0x0;
                *(unsigned short *)((t0 + 0x6)) = 0x31F;
                *(volatile signed char *)((a4 + 0x2));
                t2 = ((int (*)(void))(FUN_0c187798))();
                *(volatile signed char *)((a4 + 0x2));
                t2 = ((int (*)(void))(FUN_0c187798))();
                (((struct o18_float *)(t0))->v) = 1.0f;
                (((struct o1C_float *)(t0))->v) = 0.0f;
                (((struct o20_float *)(t0))->v) = 0.0f;
                *(unsigned short *)((a4 + 0x1C)) = 0x1;
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                t4 = 0x15;
            }
            t3 = t4;
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
                t2 = (((struct oC4_int *)(a4))->v);
                (((struct o74_float *)(t2))->v) = (((((struct o74_float *)(t2))->v)) - 0.200000003f);
                t2 = (((struct oC8_int *)(a4))->v);
                (((struct o74_float *)(t2))->v) = (((((struct o74_float *)(t2))->v)) - 0.200000003f);
                t2 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t2 - 1);
                t3 = (short)(t2 - 1);
                if ((short)(t2 - 1) == 0) {
                    *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
                    *(unsigned short *)((a4 + 0x1C)) = 0xA;
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    t3 = 0x15;
                }
                t2 = t3;
            } else {
                if (t0 == 3) {
                    t3 = (((struct oC8_int *)(a4))->v);
                    (((struct o8C_float *)(t3))->v) = (((((struct o8C_float *)(t3))->v)) - 0.0299999993f);
                    t3 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t3 - 1);
                    t4 = (short)(t3 - 1);
                    if ((short)(t3 - 1) == 0) {
                        *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x71F;
                        (((struct o14_float *)(((((struct oC4_int *)(a4))->v))))->v) = 1.0f;
                        *(unsigned short *)((a4 + 0x1C)) = 0x19;
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        t4 = 0x15;
                    }
                    t3 = t4;
                } else {
                    if (t0 == 4) {
                        u0 = *(float *)0xC0350C0;
                        t4 = (((struct oC4_int *)(a4))->v);
                        (((struct o1C_float *)(t4))->v) = (((((struct o1C_float *)(t4))->v)) + u0);
                        t4 = (((struct oC4_int *)(a4))->v);
                        (((struct o20_float *)(t4))->v) = (((((struct o20_float *)(t4))->v)) + u0);
                        t4 = *(short *)((a4 + 0x1C));
                        *(unsigned short *)((a4 + 0x1C)) = (t4 - 1);
                        t5 = (short)(t4 - 1);
                        if ((short)(t4 - 1) == 0) {
                            *(unsigned short *)((a4 + 0x1C)) = 0x3C;
                            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                            t5 = 0x15;
                        }
                        t4 = t5;
                    } else {
                        t5 = t0;
                        if (t0 == 5) {
                            t0 = *(short *)((a4 + 0x1C));
                            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
                            t6 = (short)(t0 - 1);
                            if ((short)(t0 - 1) == 0) {
                                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                                t6 = 0x14;
                            }
                            t5 = t6;
                        }
                        t4 = t5;
                    }
                    t3 = t4;
                }
                t2 = t3;
            }
            t0 = t2;
        } else {
            t2 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t2 - 1);
            t3 = (short)(t2 - 1);
            if ((short)(t2 - 1) != 0) {
            } else {
                *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
                *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x1;
                (((struct o74_float *)(((((struct oC4_int *)(a4))->v))))->v) = 0.0f;
                (((struct o74_float *)(((((struct oC8_int *)(a4))->v))))->v) = 0.0f;
                (((struct o8C_float *)(((((struct oC8_int *)(a4))->v))))->v) = 0.300000012f;
                *(unsigned short *)((a4 + 0x1C)) = 0x19;
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                t3 = 0x15;
            }
            t0 = t3;
        }
        t2 = t0;
    } else {
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        t3 = (short)(t0 - 1);
        if ((short)(t0 - 1) != 0) {
        } else {
            t0 = (((struct oC4_int *)(a4))->v);
            *(unsigned char *)((t0 + 0x0)) = 0x0;
            *(unsigned short *)((t0 + 0x6)) = 0x11F;
            *(volatile signed char *)((a4 + 0x2));
            t4 = ((int (*)(int, int, int))(FUN_0c187798))(t0, a5, a6);
            *(volatile signed char *)((a4 + 0x2));
            t0 = ((int (*)(int))(FUN_0c187798))(t1);
            t0 = (((struct oC8_int *)(a4))->v);
            FUN_0c03744a(t0, 0x1, (*(signed char *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC1AA324) + 0x19))), (*(int *)0xC4B40D0));
            *(unsigned char *)((t0 + 0x0)) = 0x0;
            *(unsigned short *)((t0 + 0x6)) = 0x31F;
            *(volatile signed char *)((a4 + 0x2));
            t1 = ((int (*)(void))(FUN_0c187798))();
            *(volatile signed char *)((a4 + 0x2));
            t1 = ((int (*)(void))(FUN_0c187798))();
            (((struct o18_float *)(t0))->v) = 1.0f;
            (((struct o1C_float *)(t0))->v) = 0.0f;
            (((struct o20_float *)(t0))->v) = 0.0f;
            *(unsigned short *)((a4 + 0x1C)) = 0x1;
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            t3 = 0x15;
        }
        t2 = t3;
    }
    return t2;
}

int FUN_0c035024(void)
{
    register int t0;
    register int t2;
    register int t4;
    register int t7;

    t0 = 0x0;
    for (;;) {
        t2 = *(signed char *)((((t0 * 0x1C) + 0xC1AA324) + 0x18));
        FUN_0c037320(t2, (*(int *)0xC4B40D0));
        t4 = FUN_0c03f444(0x8, 0x0, 0x2);
        t7 = t4;
        if (t4 != 0) {
            FUN_0c03733c(t4, t2, (*(int *)0xC4B40D0));
            *(unsigned int *)((t4 + 0x4)) = 0xC034D8C;
            *(unsigned char *)((t4 + 0x2)) = t0;
            t7 = t0;
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0xB) {
            break;
        }
    }
    return t7;
}

int FUN_0c0353e8(void)
{
    register int t0;
    register int t1;

    t0 = FUN_0c037320((*(signed char *)0xC1AA470), (*(int *)0xC4B40D0));
    t1 = FUN_0c03f444(0x8, 0x0, t0);
    t0 = t1;
    if (t1 != 0) {
        *(unsigned int *)((t1 + 0x4)) = 0xC03508C;
        *(unsigned char *)((t1 + 0x2)) = 0x0;
        (((struct oA8_uchar *)(t1))->v) = 0x0;
        t0 = 0xA8;
    }
    return t0;
}

int FUN_0c035646(void)
{
    register int t0;
    register int t2;
    register int t4;
    register int t7;

    t0 = 0x0;
    for (;;) {
        t2 = *(signed char *)((((t0 * 0x1C) + 0xC1AA474) + 0x18));
        FUN_0c037320(t2, (*(int *)0xC4B40D0));
        t4 = FUN_0c03f444(0x8, 0x0, 0x2);
        t7 = t4;
        if (t4 != 0) {
            FUN_0c03733c(t4, t2, (*(int *)0xC4B40D0));
            *(unsigned int *)((t4 + 0x4)) = 0xC035426;
            *(unsigned char *)((t4 + 0x2)) = t0;
            t7 = t0;
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x9) {
            break;
        }
    }
    return t7;
}

int FUN_0c03592a(void)
{
    register int t0;
    register int t2;
    register int t3;
    register int t4;
    register int t7;

    t0 = 0x0;
    for (;;) {
        t2 = *(signed char *)(((t0 * 0x1C) + 0xC1AA588));
        t3 = FUN_0c037320(t2, (*(int *)0xC4B40D0));
        t4 = FUN_0c03f444(0x8, 0x0, t3);
        t7 = t4;
        if (t4 != 0) {
            FUN_0c03733c(t4, t2, (*(int *)0xC4B40D0));
            *(unsigned int *)((t4 + 0x4)) = 0xC0356AE;
            *(unsigned char *)((t4 + 0x2)) = t0;
            t7 = t0;
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x6) {
            break;
        }
    }
    return t7;
}
