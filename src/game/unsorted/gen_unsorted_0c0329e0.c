/* game/unsorted: functions 0C0329E0-0C0339D0, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c05ab04(int);
int FUN_0c07c19c(int);
extern int FUN_0c187798();
int FUN_0c0329e0(void);
int FUN_0c032a48(int a4, int a5, int a6, int a7);
int FUN_0c032c6c(void);
int FUN_0c032cac(int a4, int a5, int a6, int a7);
int FUN_0c032fec(void);
int FUN_0c03302a(int a4, int a5, int a6, int a7, float f4);
int FUN_0c033276(void);
int FUN_0c0332b6(int a4, int a5, int a6, int a7, float f4);
int FUN_0c0334cc(void);
int FUN_0c03350c(int a4, float f4, float f5, float f6);
int FUN_0c03379e(int a4, float f4, float f5, float f6);

int FUN_0c0329e0(void)
{
    register int t0;
    register int t2;
    register int t4;
    register int t7;

    t0 = 0x0;
    for (;;) {
        t2 = *(signed char *)((((t0 * 0x1C) + 0xC1A9850) + 0x18));
        FUN_0c037320(t2, (*(int *)0xC4B40D0));
        t4 = FUN_0c03f444(0x8, 0x0, 0x2);
        t7 = t4;
        if (t4 != 0) {
            FUN_0c03733c(t4, t2, (*(int *)0xC4B40D0));
            *(unsigned int *)((t4 + 0x4)) = 0xC0327F0;
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

int FUN_0c032a48(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
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
            if (t2 == 1) {
                t3 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t3 - 1);
                t4 = (short)(t3 - 1);
                if ((short)(t3 - 1) == 0) {
                    *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x1;
                    (((struct o8C_float *)(((((struct oC8_int *)(a4))->v))))->v) = 0.0f;
                    *(unsigned short *)((a4 + 0x1C)) = 0xA;
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    t4 = 0x15;
                }
                t3 = t4;
            } else {
                if (t2 == 2) {
                    t4 = (((struct oC8_int *)(a4))->v);
                    (((struct o8C_float *)(t4))->v) = (((((struct o8C_float *)(t4))->v)) + 0.0500000007f);
                    t4 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t4 - 1);
                    t5 = (short)(t4 - 1);
                    if ((short)(t4 - 1) == 0) {
                        *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
                        *(unsigned short *)((a4 + 0x1C)) = 0xA;
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        t5 = 0x15;
                    }
                    t4 = t5;
                } else {
                    if (t2 == 3) {
                        t5 = (((struct oC8_int *)(a4))->v);
                        (((struct o8C_float *)(t5))->v) = (((((struct o8C_float *)(t5))->v)) - 0.0500000007f);
                        t5 = *(short *)((a4 + 0x1C));
                        *(unsigned short *)((a4 + 0x1C)) = (t5 - 1);
                        t6 = (short)(t5 - 1);
                        if ((short)(t5 - 1) == 0) {
                            *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x0;
                            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                            t6 = 0x15;
                        }
                        t5 = t6;
                    } else {
                        t6 = t2;
                        if (t2 == 4) {
                            if (((*(signed char *)0xC5421F8) != 0) && (t0 = *(signed char *)0xC5421F9, t0 == 7)) {
                                t2 = t0;
                            } else {
                                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                                t2 = 0x14;
                            }
                            t6 = t2;
                        }
                        t5 = t6;
                    }
                    t4 = t5;
                }
                t3 = t4;
            }
            t0 = t3;
        } else {
            t2 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t2 - 1);
            if ((short)(t2 - 1) == 0) {
                t2 = (((struct oC4_int *)(a4))->v);
                FUN_0c03744a(t2, 0x0, (*(signed char *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC1A9914) + 0x18))), (*(int *)0xC4B40D0));
                *(unsigned char *)((t2 + 0x0)) = 0x0;
                *(unsigned short *)((t2 + 0x6)) = 0x11F;
                *(volatile signed char *)((a4 + 0x2));
                FUN_0c187798();
                *(volatile signed char *)((a4 + 0x2));
                FUN_0c187798();
                t2 = (((struct oC8_int *)(a4))->v);
                FUN_0c03744a(t2, 0x1, (*(signed char *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC1A9914) + 0x19))), (*(int *)0xC4B40D0));
                *(unsigned char *)((t2 + 0x0)) = 0x0;
                *(unsigned short *)((t2 + 0x6)) = 0x31F;
                *(volatile signed char *)((a4 + 0x2));
                FUN_0c187798();
                *(volatile signed char *)((a4 + 0x2));
                FUN_0c187798();
                (((struct o18_float *)(t2))->v) = 0.0f;
                (((struct o1C_float *)(t2))->v) = 0.0f;
                (((struct o20_float *)(t2))->v) = 1.0f;
                t2 = *(signed char *)((a4 + 0x2));
                *(unsigned short *)((a4 + 0x1C)) = ((((t2 << 2) + t2) << 1) + 0x1);
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            }
            t2 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t2 - 1);
            t3 = (short)(t2 - 1);
            if ((short)(t2 - 1) == 0) {
                *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x1;
                (((struct o8C_float *)(((((struct oC8_int *)(a4))->v))))->v) = 0.0f;
                *(unsigned short *)((a4 + 0x1C)) = 0xA;
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                t3 = 0x15;
            }
            t0 = t3;
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
        if (t0 == 1) {
            t2 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t2 - 1);
            t3 = (short)(t2 - 1);
            if ((short)(t2 - 1) == 0) {
                *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x1;
                (((struct o8C_float *)(((((struct oC8_int *)(a4))->v))))->v) = 0.0f;
                *(unsigned short *)((a4 + 0x1C)) = 0xA;
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                t3 = 0x15;
            }
            t2 = t3;
        } else {
            if (t0 == 2) {
                t3 = (((struct oC8_int *)(a4))->v);
                (((struct o8C_float *)(t3))->v) = (((((struct o8C_float *)(t3))->v)) + 0.0500000007f);
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
                if (t0 == 3) {
                    t4 = (((struct oC8_int *)(a4))->v);
                    (((struct o8C_float *)(t4))->v) = (((((struct o8C_float *)(t4))->v)) - 0.0500000007f);
                    t4 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t4 - 1);
                    t5 = (short)(t4 - 1);
                    if ((short)(t4 - 1) == 0) {
                        *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x0;
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        t5 = 0x15;
                    }
                    t4 = t5;
                } else {
                    t5 = t0;
                    if (t0 == 4) {
                        if (((*(signed char *)0xC5421F8) != 0) && (t1 = *(signed char *)0xC5421F9, t1 == 7)) {
                            t0 = t1;
                        } else {
                            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                            t0 = 0x14;
                        }
                        t5 = t0;
                    }
                    t4 = t5;
                }
                t3 = t4;
            }
            t2 = t3;
        }
        t0 = t2;
    } else {
        t1 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
        if ((short)(t1 - 1) == 0) {
            t1 = (((struct oC4_int *)(a4))->v);
            FUN_0c03744a(t1, 0x0, (*(signed char *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC1A9914) + 0x18))), (*(int *)0xC4B40D0));
            *(unsigned char *)((t1 + 0x0)) = 0x0;
            *(unsigned short *)((t1 + 0x6)) = 0x11F;
            *(volatile signed char *)((a4 + 0x2));
            FUN_0c187798();
            *(volatile signed char *)((a4 + 0x2));
            FUN_0c187798();
            t1 = (((struct oC8_int *)(a4))->v);
            FUN_0c03744a(t1, 0x1, (*(signed char *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC1A9914) + 0x19))), (*(int *)0xC4B40D0));
            *(unsigned char *)((t1 + 0x0)) = 0x0;
            *(unsigned short *)((t1 + 0x6)) = 0x31F;
            *(volatile signed char *)((a4 + 0x2));
            FUN_0c187798();
            *(volatile signed char *)((a4 + 0x2));
            FUN_0c187798();
            (((struct o18_float *)(t1))->v) = 0.0f;
            (((struct o1C_float *)(t1))->v) = 0.0f;
            (((struct o20_float *)(t1))->v) = 1.0f;
            t1 = *(signed char *)((a4 + 0x2));
            *(unsigned short *)((a4 + 0x1C)) = ((((t1 << 2) + t1) << 1) + 0x1);
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        }
        t1 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
        t2 = (short)(t1 - 1);
        if ((short)(t1 - 1) == 0) {
            *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x1;
            (((struct o8C_float *)(((((struct oC8_int *)(a4))->v))))->v) = 0.0f;
            *(unsigned short *)((a4 + 0x1C)) = 0xA;
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            t2 = 0x15;
        }
        t0 = t2;
    }
    return t0;
}

int FUN_0c032c6c(void)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = 0x0;
    for (;;) {
        t1 = FUN_0c03f444(0x8, 0x0, 0x2);
        t2 = t1;
        if (t1 != 0) {
            *(unsigned int *)((t1 + 0x4)) = 0xC032A48;
            *(unsigned char *)((t1 + 0x2)) = t0;
            (((struct oA8_uchar *)(t1))->v) = 0x0;
            t2 = 0xA8;
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x9) {
            break;
        }
    }
    return t2;
}

int FUN_0c032cac(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    register int t2;
    register int t3;

    t2 = *(signed char *)((a4 + 0x14));
    if (t2 != 0) {
        if (t2 == 1) {
            if (((*(signed char *)0xC5421F8) != 0) && (t0 = *(signed char *)0xC5421F9, t0 == 7)) {
            } else {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            }
            if ((int)(*(short *)((a4 + 0x1E))) > (int)0x9) {
                (((struct oA8_uchar *)(a4))->v) = 0x0;
            } else {
                (((struct oA8_uchar *)(a4))->v) = 0x1;
            }
            if ((*(short *)((a4 + 0x1E))) != (*(signed char *)0xC542252)) {
                *(unsigned short *)((a4 + 0x1E)) = (*(signed char *)0xC542252);
                FUN_0c03733c(a4, ((*(signed char *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC1A9A10) + 0x18))) + (*(short *)((a4 + 0x1E)))), (*(int *)0xC4B40D0));
                *(volatile signed char *)((a4 + 0x2));
                FUN_0c187798();
                *(volatile signed char *)((a4 + 0x2));
                FUN_0c187798();
                *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x71F;
                (((struct o14_float *)(((((struct oC4_int *)(a4))->v))))->v) = (*(float *)((0xC20EC34 + (((*(short *)((a4 + 0x1E))) << 2) << 2))));
                (((struct o18_float *)(((((struct oC4_int *)(a4))->v))))->v) = ((((struct o4_float *)(((((*(short *)((a4 + 0x1E))) << 2) << 2) + 0xC20EC34)))->v));
                (((struct o1C_float *)(((((struct oC4_int *)(a4))->v))))->v) = ((((struct o8_float *)(((((*(short *)((a4 + 0x1E))) << 2) << 2) + 0xC20EC34)))->v));
                (((struct o20_float *)(((((struct oC4_int *)(a4))->v))))->v) = ((((struct oC_float *)(((((*(short *)((a4 + 0x1E))) << 2) << 2) + 0xC20EC34)))->v));
                *(unsigned short *)((((((struct oC8_int *)(a4))->v)) + 0x6)) = 0x31F;
                (((struct o18_float *)(((((struct oC8_int *)(a4))->v))))->v) = ((((struct o4_float *)(((((*(short *)((a4 + 0x1E))) << 2) << 2) + 0xC20EC34)))->v));
                (((struct o1C_float *)(((((struct oC8_int *)(a4))->v))))->v) = ((((struct o8_float *)(((((*(short *)((a4 + 0x1E))) << 2) << 2) + 0xC20EC34)))->v));
                (((struct o20_float *)(((((struct oC8_int *)(a4))->v))))->v) = ((((struct oC_float *)((0xC20EC34 + (((*(short *)((a4 + 0x1E))) << 2) << 2))))->v));
                *(unsigned short *)((a4 + 0x1C)) = 0x1;
                (((struct o15_uchar *)(a4))->v) = 0x0;
            }
            t0 = *(signed char *)((a4 + 0x15));
            if (t0 != 0) {
                if (t0 != 1) {
                    t2 = t0;
                    if (t0 != 2) {
                    } else {
                        (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) - 0.0399999991f);
                        t0 = *(short *)((a4 + 0x1C));
                        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
                        t3 = (short)(t0 - 1);
                        if ((short)(t0 - 1) == 0) {
                            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                            t3 = 0x15;
                        }
                        t2 = t3;
                    }
                    t0 = t2;
                } else {
                    (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) - 0.200000003f);
                    t2 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t2 - 1);
                    t3 = (short)(t2 - 1);
                    if ((short)(t2 - 1) == 0) {
                        FUN_0c05ab04(0xCC);
                        FUN_0c07c19c(0x1C);
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
                    *(unsigned short *)((a4 + 0x1C)) = 0x19;
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    t3 = 0x15;
                }
                t2 = t3;
            }
            return t2;
        }
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct oAC_ushort *)(a4))->v) = 0x1F;
    (((struct oA9_uchar *)(a4))->v) = 0x21;
    *(unsigned short *)((a4 + 0x1E)) = (*(signed char *)0xC542252);
    FUN_0c03733c(a4, ((*(signed char *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC1A9A10) + 0x18))) + (*(short *)((a4 + 0x1E)))), (*(int *)0xC4B40D0));
    *(volatile signed char *)((a4 + 0x2));
    FUN_0c187798();
    *(volatile signed char *)((a4 + 0x2));
    FUN_0c187798();
    *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x71F;
    (((struct o14_float *)(((((struct oC4_int *)(a4))->v))))->v) = (*(float *)((0xC20EC34 + (((*(short *)((a4 + 0x1E))) << 2) << 2))));
    (((struct o18_float *)(((((struct oC4_int *)(a4))->v))))->v) = ((((struct o4_float *)(((((*(short *)((a4 + 0x1E))) << 2) << 2) + 0xC20EC34)))->v));
    (((struct o1C_float *)(((((struct oC4_int *)(a4))->v))))->v) = ((((struct o8_float *)(((((*(short *)((a4 + 0x1E))) << 2) << 2) + 0xC20EC34)))->v));
    (((struct o20_float *)(((((struct oC4_int *)(a4))->v))))->v) = ((((struct oC_float *)(((((*(short *)((a4 + 0x1E))) << 2) << 2) + 0xC20EC34)))->v));
    *(unsigned short *)((((((struct oC8_int *)(a4))->v)) + 0x6)) = 0x31F;
    (((struct o18_float *)(((((struct oC8_int *)(a4))->v))))->v) = ((((struct o4_float *)(((((*(short *)((a4 + 0x1E))) << 2) << 2) + 0xC20EC34)))->v));
    (((struct o1C_float *)(((((struct oC8_int *)(a4))->v))))->v) = ((((struct o8_float *)(((((*(short *)((a4 + 0x1E))) << 2) << 2) + 0xC20EC34)))->v));
    (((struct o20_float *)(((((struct oC8_int *)(a4))->v))))->v) = ((((struct oC_float *)(((((*(short *)((a4 + 0x1E))) << 2) << 2) + 0xC20EC34)))->v));
    *(unsigned short *)((a4 + 0x1C)) = 0x1;
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    if (((*(signed char *)0xC5421F8) != 0) && (t1 = *(signed char *)0xC5421F9, t1 == 7)) {
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    if ((int)(*(short *)((a4 + 0x1E))) > (int)0x9) {
        (((struct oA8_uchar *)(a4))->v) = 0x0;
    } else {
        (((struct oA8_uchar *)(a4))->v) = 0x1;
    }
    if ((*(short *)((a4 + 0x1E))) != (*(signed char *)0xC542252)) {
        *(unsigned short *)((a4 + 0x1E)) = (*(signed char *)0xC542252);
        FUN_0c03733c(a4, ((*(signed char *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC1A9A10) + 0x18))) + (*(short *)((a4 + 0x1E)))), (*(int *)0xC4B40D0));
        *(volatile signed char *)((a4 + 0x2));
        FUN_0c187798();
        *(volatile signed char *)((a4 + 0x2));
        FUN_0c187798();
        *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x71F;
        (((struct o14_float *)(((((struct oC4_int *)(a4))->v))))->v) = (*(float *)((0xC20EC34 + (((*(short *)((a4 + 0x1E))) << 2) << 2))));
        (((struct o18_float *)(((((struct oC4_int *)(a4))->v))))->v) = ((((struct o4_float *)(((((*(short *)((a4 + 0x1E))) << 2) << 2) + 0xC20EC34)))->v));
        (((struct o1C_float *)(((((struct oC4_int *)(a4))->v))))->v) = ((((struct o8_float *)(((((*(short *)((a4 + 0x1E))) << 2) << 2) + 0xC20EC34)))->v));
        (((struct o20_float *)(((((struct oC4_int *)(a4))->v))))->v) = ((((struct oC_float *)(((((*(short *)((a4 + 0x1E))) << 2) << 2) + 0xC20EC34)))->v));
        *(unsigned short *)((((((struct oC8_int *)(a4))->v)) + 0x6)) = 0x31F;
        (((struct o18_float *)(((((struct oC8_int *)(a4))->v))))->v) = ((((struct o4_float *)(((((*(short *)((a4 + 0x1E))) << 2) << 2) + 0xC20EC34)))->v));
        (((struct o1C_float *)(((((struct oC8_int *)(a4))->v))))->v) = ((((struct o8_float *)(((((*(short *)((a4 + 0x1E))) << 2) << 2) + 0xC20EC34)))->v));
        (((struct o20_float *)(((((struct oC8_int *)(a4))->v))))->v) = ((((struct oC_float *)((0xC20EC34 + (((*(short *)((a4 + 0x1E))) << 2) << 2))))->v));
        *(unsigned short *)((a4 + 0x1C)) = 0x1;
        (((struct o15_uchar *)(a4))->v) = 0x0;
    }
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            t1 = t0;
            if (t0 != 2) {
            } else {
                (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) - 0.0399999991f);
                t0 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
                t2 = (short)(t0 - 1);
                if ((short)(t0 - 1) == 0) {
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    t2 = 0x15;
                }
                t1 = t2;
            }
            t0 = t1;
        } else {
            (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) - 0.200000003f);
            t1 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
            t2 = (short)(t1 - 1);
            if ((short)(t1 - 1) == 0) {
                FUN_0c05ab04(0xCC);
                FUN_0c07c19c(0x1C);
                *(unsigned short *)((a4 + 0x1C)) = 0x19;
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
            *(unsigned short *)((a4 + 0x1C)) = 0x19;
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            t2 = 0x15;
        }
        t1 = t2;
    }
    return t1;
}

int FUN_0c032fec(void)
{
    register int t0;
    register int t1;

    t0 = FUN_0c037320((*(signed char *)0xC1A9A28), (*(int *)0xC4B40D0));
    t1 = FUN_0c03f444(0x8, 0x0, t0);
    t0 = t1;
    if (t1 != 0) {
        *(unsigned int *)((t1 + 0x4)) = 0xC032CAC;
        *(unsigned char *)((t1 + 0x2)) = 0x0;
        (((struct oA8_uchar *)(t1))->v) = 0x0;
        t0 = 0xA8;
    }
    return t0;
}

int FUN_0c03302a(int a4, int a5, int a6, int a7, float f4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
    } else {
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0xF;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        *(unsigned short *)((a4 + 0x1C)) = 0x1;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 == 1) {
            t1 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
            t2 = (short)(t1 - 1);
            if ((short)(t1 - 1) == 0) {
                *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x0;
                *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x1;
                (((struct o74_float *)(((((struct oC8_int *)(a4))->v))))->v) = 0.0f;
                (((struct o8C_float *)(((((struct oC8_int *)(a4))->v))))->v) = 1.0f;
                *(unsigned short *)((a4 + 0x1C)) = 0x19;
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                t2 = 0x15;
            }
            t1 = t2;
        } else {
            if (t0 == 2) {
                t2 = (((struct oC8_int *)(a4))->v);
                (((struct o74_float *)(t2))->v) = (((((struct o74_float *)(t2))->v)) - 0.200000003f);
                t2 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t2 - 1);
                t3 = (short)(t2 - 1);
                if ((short)(t2 - 1) == 0) {
                    *(unsigned short *)((a4 + 0x1C)) = 0x32;
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    t3 = 0x15;
                }
                t2 = t3;
            } else {
                if (t0 == 3) {
                    t3 = (((struct oC8_int *)(a4))->v);
                    (((struct o8C_float *)(t3))->v) = (((((struct o8C_float *)(t3))->v)) - 0.0199999996f);
                    t3 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t3 - 1);
                    t4 = (short)(t3 - 1);
                    if ((short)(t3 - 1) == 0) {
                        *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
                        *(unsigned short *)((a4 + 0x1C)) = 0x258;
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        t4 = 0x15;
                    }
                    t3 = t4;
                } else {
                    t4 = t0;
                    if (t0 == 4) {
                        t0 = *(short *)((a4 + 0x1C));
                        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
                        t4 = (short)(t0 - 1);
                        if ((short)(t0 - 1) == 0) {
                            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                            t4 = 0x14;
                        }
                    }
                    t3 = t4;
                }
                t2 = t3;
            }
            t1 = t2;
        }
        t0 = t1;
    } else {
        t1 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
        if ((short)(t1 - 1) == 0) {
            t1 = (((struct oC4_int *)(a4))->v);
            FUN_0c03744a(t1, 0x0, (*(signed char *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC1A9A2C) + 0x18))), (*(int *)0xC4B40D0));
            *(unsigned char *)((t1 + 0x0)) = 0x0;
            *(unsigned short *)((t1 + 0x6)) = 0x31F;
            *(volatile signed char *)((a4 + 0x2));
            FUN_0c187798();
            *(volatile signed char *)((a4 + 0x2));
            FUN_0c187798();
            (((struct o18_float *)(t1))->v) = 1.0f;
            (((struct o1C_float *)(t1))->v) = 0.0f;
            (((struct o20_float *)(t1))->v) = 0.0f;
            t1 = (((struct oC8_int *)(a4))->v);
            FUN_0c03744a(t1, 0x1, (*(signed char *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC1A9A2C) + 0x19))), (*(int *)0xC4B40D0));
            *(unsigned char *)((t1 + 0x0)) = 0x0;
            *(unsigned short *)((t1 + 0x6)) = 0x31F;
            *(volatile signed char *)((a4 + 0x2));
            FUN_0c187798();
            *(volatile signed char *)((a4 + 0x2));
            FUN_0c187798();
            (((struct o18_float *)(t1))->v) = 0.800000012f;
            (((struct o1C_float *)(t1))->v) = 0.800000012f;
            (((struct o20_float *)(t1))->v) = 0.800000012f;
            *(unsigned short *)((a4 + 0x1C)) = 0x1;
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        }
        t1 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
        t2 = (short)(t1 - 1);
        if ((short)(t1 - 1) == 0) {
            *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x0;
            *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x1;
            (((struct o74_float *)(((((struct oC8_int *)(a4))->v))))->v) = 0.0f;
            (((struct o8C_float *)(((((struct oC8_int *)(a4))->v))))->v) = 1.0f;
            *(unsigned short *)((a4 + 0x1C)) = 0x19;
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            t2 = 0x15;
        }
        t0 = t2;
    }
    return t0;
}

int FUN_0c033276(void)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = 0x0;
    for (;;) {
        t1 = FUN_0c03f444(0x8, 0x0, 0x2);
        t2 = t1;
        if (t1 != 0) {
            *(unsigned int *)((t1 + 0x4)) = 0xC03302A;
            *(unsigned char *)((t1 + 0x2)) = t0;
            (((struct oA8_uchar *)(t1))->v) = 0x0;
            t2 = 0xA8;
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x6) {
            break;
        }
    }
    return t2;
}

int FUN_0c0332b6(int a4, int a5, int a6, int a7, float f4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
    } else {
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0xF;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        *(unsigned short *)((a4 + 0x1C)) = 0x1;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                t1 = (((struct oC4_int *)(a4))->v);
                (((struct o74_float *)(t1))->v) = (((((struct o74_float *)(t1))->v)) - 0.200000003f);
                t1 = (((struct oC8_int *)(a4))->v);
                (((struct o74_float *)(t1))->v) = (((((struct o74_float *)(t1))->v)) - 0.200000003f);
                t1 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
                t2 = (short)(t1 - 1);
                if ((short)(t1 - 1) == 0) {
                    *(unsigned short *)((a4 + 0x1C)) = 0x19;
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    t2 = 0x15;
                }
                t1 = t2;
            } else {
                if (t0 == 3) {
                    t2 = (((struct oC8_int *)(a4))->v);
                    (((struct o8C_float *)(t2))->v) = (((((struct o8C_float *)(t2))->v)) - 0.00999999978f);
                    t2 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t2 - 1);
                    t3 = (short)(t2 - 1);
                    if ((short)(t2 - 1) == 0) {
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        t3 = 0x15;
                    }
                    t2 = t3;
                } else {
                    t3 = t0;
                    if (t0 == 4) {
                        t0 = *(signed char *)0xC541F41;
                        t3 = (unsigned char)t0;
                        if ((unsigned char)t0 != 9) {
                            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                            t3 = 0x14;
                        }
                    }
                    t2 = t3;
                }
                t1 = t2;
            }
            t0 = t1;
        } else {
            t1 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
            t2 = (short)(t1 - 1);
            if ((short)(t1 - 1) == 0) {
                *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
                *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x1;
                (((struct o74_float *)(((((struct oC4_int *)(a4))->v))))->v) = 0.0f;
                (((struct o74_float *)(((((struct oC8_int *)(a4))->v))))->v) = 0.0f;
                (((struct o8C_float *)(((((struct oC8_int *)(a4))->v))))->v) = 0.25f;
                *(unsigned short *)((a4 + 0x1C)) = 0x19;
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                t2 = 0x15;
            }
            t0 = t2;
        }
        t1 = t0;
    } else {
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        if ((short)(t0 - 1) == 0) {
            t0 = (((struct oC4_int *)(a4))->v);
            FUN_0c03744a(t0, 0x0, (*(signed char *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC1A9AD4) + 0x18))), (*(int *)0xC4B40D0));
            *(unsigned char *)((t0 + 0x0)) = 0x0;
            *(unsigned short *)((t0 + 0x6)) = 0x11F;
            *(volatile signed char *)((a4 + 0x2));
            FUN_0c187798();
            *(volatile signed char *)((a4 + 0x2));
            FUN_0c187798();
            t0 = (((struct oC8_int *)(a4))->v);
            FUN_0c03744a(t0, 0x1, (*(signed char *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC1A9AD4) + 0x19))), (*(int *)0xC4B40D0));
            *(unsigned char *)((t0 + 0x0)) = 0x0;
            *(unsigned short *)((t0 + 0x6)) = 0x11F;
            *(volatile signed char *)((a4 + 0x2));
            FUN_0c187798();
            *(volatile signed char *)((a4 + 0x2));
            FUN_0c187798();
            *(unsigned short *)((a4 + 0x1C)) = 0x1;
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        }
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        t2 = (short)(t0 - 1);
        if ((short)(t0 - 1) == 0) {
            *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
            *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x1;
            (((struct o74_float *)(((((struct oC4_int *)(a4))->v))))->v) = 0.0f;
            (((struct o74_float *)(((((struct oC8_int *)(a4))->v))))->v) = 0.0f;
            (((struct o8C_float *)(((((struct oC8_int *)(a4))->v))))->v) = 0.25f;
            *(unsigned short *)((a4 + 0x1C)) = 0x19;
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            t2 = 0x15;
        }
        t1 = t2;
    }
    return t1;
}

int FUN_0c0334cc(void)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = 0x0;
    for (;;) {
        t1 = FUN_0c03f444(0x8, 0x0, 0x2);
        t2 = t1;
        if (t1 != 0) {
            *(unsigned int *)((t1 + 0x4)) = 0xC0332B6;
            *(unsigned char *)((t1 + 0x2)) = t0;
            (((struct oA8_uchar *)(t1))->v) = 0x0;
            t2 = 0xA8;
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x17) {
            break;
        }
    }
    return t2;
}

int FUN_0c03350c(int a4, float f4, float f5, float f6)
{
    register int t64;
    register int t66;
    register int t69;
    register int t70;
    register int t75;
    register int t77;
    register int t80;
    register int t81;
    register int t82;

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R7;
    register int R8;
    register int R11;
    register int R12;
    register int R14;
    register float F2;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    v0_0 = a4;
    v0_3 = *(signed char *)((v0_0 + 0x14));
    v0_1 = (v0_3);
    v0_2 = (0x1);
    if ((v0_3 == 0)) goto L_C033520;
    if ((v0_1 == 1)) goto L_C03353E;
    return FUN_0c03f346(v0_0, R5, v0_2, R7);
    L_C03353E:;
    v0_3 = *(signed char *)((v0_0 + 0x15));
    v0_1 = (v0_3);
    w0_0 = (0.25f);
    w0_1 = (0.0250000004f);
    w0_2 = (-0.0f);
    if ((v0_3 == 0)) goto L_C033598;
    if ((v0_1 == 1)) goto L_C03363E;
    if ((v0_1 != 2)) goto L_C03355E;
    v0_1 = (((struct oC4_int *)(v0_0))->v);
    (((struct o74_float *)(v0_1))->v) = (((((struct o74_float *)(v0_1))->v)) - w0_0);
    v0_1 = (((struct oC8_int *)(v0_0))->v);
    (((struct o74_float *)(v0_1))->v) = (((((struct o74_float *)(v0_1))->v)) - w0_0);
    v0_1 = (0x74);
    if ((((((struct o74_float *)(((((struct oC8_int *)(v0_0))->v))))->v)) > -5.0f)) goto L_C033730;
    L_C0336FE:;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    v0_1 = (0x15);
    L_C033730:;
    return v0_1;
    L_C03355E:;
    if ((v0_1 != 3)) goto L_C033566;
    v0_1 = (((struct oC8_int *)(v0_0))->v);
    (((struct o8C_float *)(v0_1))->v) = (((((struct o8C_float *)(v0_1))->v)) - w0_1);
    v0_1 = (0x8C);
    if ((((((struct o8C_float *)(((((struct oC8_int *)(v0_0))->v))))->v)) > w0_2)) goto L_C033730;
    goto L_C0336FE;
    L_C033566:;
    if ((v0_1 != 4)) goto L_C03356E;
    v0_2 = *(signed char *)0xC541F41;
    v0_1 = ((unsigned char)v0_2);
    if (((unsigned char)v0_2 != 1)) goto L_C0336FE;
    goto L_C033730;
    L_C03356E:;
    if ((v0_1 != 5)) goto L_C033576;
    v0_1 = (((struct oC8_int *)(v0_0))->v);
    (((struct o8C_float *)(v0_1))->v) = (((((struct o8C_float *)(v0_1))->v)) - w0_1);
    v0_1 = (((struct oC4_int *)(v0_0))->v);
    (((struct o74_float *)(v0_1))->v) = (((((struct o74_float *)(v0_1))->v)) + w0_0);
    v0_1 = (((struct oC8_int *)(v0_0))->v);
    (((struct o74_float *)(v0_1))->v) = (((((struct o74_float *)(v0_1))->v)) + w0_0);
    v0_1 = (0x74);
    if ((0.0f > ((((struct o74_float *)(((((struct oC8_int *)(v0_0))->v))))->v)))) goto L_C033730;
    goto L_C0336FE;
    L_C033576:;
    v0_1 = (((struct oC8_int *)(v0_0))->v);
    (((struct o8C_float *)(v0_1))->v) = (((((struct o8C_float *)(v0_1))->v)) + w0_1);
    v0_1 = (0x8C);
    if ((w0_2 > ((((struct o8C_float *)(((((struct oC8_int *)(v0_0))->v))))->v)))) goto L_C033730;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    v0_1 = (0x14);
    goto L_C033730;
    L_C03363E:;
    v0_3 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_3 - 1);
    v0_1 = ((short)(v0_3 - 1));
    if (((short)(v0_3 - 1) != 0)) goto L_C033730;
    *(unsigned char *)((((((struct oC4_int *)(v0_0))->v)) + 0x0)) = v0_2;
    *(unsigned char *)((((((struct oC8_int *)(v0_0))->v)) + 0x0)) = v0_2;
    goto L_C0336FE;
    L_C033598:;
    v0_3 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_3 - 1);
    v0_1 = ((short)(v0_3 - 1));
    if (((short)(v0_3 - 1) == 0)) goto L_C0335A8;
    goto L_C033730;
    L_C0335A8:;
    v0_1 = (((struct oC4_int *)(v0_0))->v);
    *(unsigned char *)((v0_1 + 0x0)) = 0x0;
    *(unsigned short *)((v0_1 + 0x6)) = 0x31F;
    *(volatile signed char *)((v0_0 + 0x2));
    v0_0 = ((int (*)(int, int, int))(FUN_0c187798))(v0_0, v0_1, v0_2);
    *(volatile signed char *)((t64 + 0x2));
    v0_0 = ((int (*)(int, int))(FUN_0c187798))(t64, t66);
    (((struct o18_float *)(t69))->v) = 0.0f;
    (((struct o1C_float *)(t69))->v) = 1.0f;
    (((struct o20_float *)(t69))->v) = 0.5f;
    v0_0 = (((struct oC8_int *)(t70))->v);
    *(unsigned char *)((v0_0 + 0x0)) = 0x0;
    *(unsigned short *)((v0_0 + 0x6)) = 0x31F;
    *(volatile signed char *)((t70 + 0x2));
    v0_0 = ((int (*)(int, int))(FUN_0c187798))(t70, v0_0);
    *(volatile signed char *)((t75 + 0x2));
    v0_0 = ((int (*)(int, int))(FUN_0c187798))(t75, t77);
    (((struct o18_float *)(t80))->v) = f6;
    (((struct o1C_float *)(t80))->v) = f4;
    (((struct o20_float *)(t80))->v) = f5;
    *(unsigned short *)((t82 + 0x1C)) = t81;
    v0_0 = (t82);
    goto L_C0336FE;
    L_C033520:;
    (((struct oA8_uchar *)(v0_0))->v) = v0_2;
    (((struct oAC_ushort *)(v0_0))->v) = 0xF;
    (((struct oA9_uchar *)(v0_0))->v) = 0x21;
    *(unsigned short *)((v0_0 + 0x1C)) = v0_2;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    goto L_C03353E;
}

int FUN_0c03379e(int a4, float f4, float f5, float f6)
{
    register int t64;
    register int t66;
    register int t69;
    register int t70;
    register int t75;
    register int t77;
    register int t80;
    register int t81;
    register int t82;

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R7;
    register int R8;
    register int R12;
    register int R13;
    register int R14;
    register float F2;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    v0_0 = a4;
    v0_3 = *(signed char *)((v0_0 + 0x14));
    v0_1 = (v0_3);
    v0_2 = (0x1);
    if ((v0_3 == 0)) goto L_C0337D0;
    if ((v0_1 == 1)) goto L_C0337EE;
    return FUN_0c03f346(v0_0, R5, v0_2, R7);
    L_C0337EE:;
    v0_3 = *(signed char *)((v0_0 + 0x15));
    v0_1 = (v0_3);
    w0_0 = (0.25f);
    w0_1 = (0.0250000004f);
    w0_2 = (-0.0f);
    if ((v0_3 == 0)) goto L_C03382A;
    if ((v0_1 == 1)) goto L_C0338D0;
    if ((v0_1 != 2)) goto L_C03380E;
    v0_1 = (((struct oC4_int *)(v0_0))->v);
    (((struct o74_float *)(v0_1))->v) = (((((struct o74_float *)(v0_1))->v)) - w0_0);
    v0_1 = (((struct oC8_int *)(v0_0))->v);
    (((struct o74_float *)(v0_1))->v) = (((((struct o74_float *)(v0_1))->v)) - w0_0);
    v0_1 = (0x74);
    if ((((((struct o74_float *)(((((struct oC8_int *)(v0_0))->v))))->v)) > -5.0f)) goto L_C0339CA;
    L_C033998:;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    v0_1 = (0x15);
    L_C0339CA:;
    return v0_1;
    L_C03380E:;
    if ((v0_1 != 3)) goto L_C033816;
    v0_1 = (((struct oC8_int *)(v0_0))->v);
    (((struct o8C_float *)(v0_1))->v) = (((((struct o8C_float *)(v0_1))->v)) - w0_1);
    v0_1 = (0x8C);
    if ((((((struct o8C_float *)(((((struct oC8_int *)(v0_0))->v))))->v)) > w0_2)) goto L_C0339CA;
    goto L_C033998;
    L_C033816:;
    if ((v0_1 != 4)) goto L_C03381E;
    v0_2 = *(signed char *)0xC541F41;
    v0_1 = ((unsigned char)v0_2);
    if (((unsigned char)v0_2 != 3)) goto L_C033998;
    goto L_C0339CA;
    L_C03381E:;
    if ((v0_1 != 5)) goto L_C033826;
    v0_1 = (((struct oC8_int *)(v0_0))->v);
    (((struct o8C_float *)(v0_1))->v) = (((((struct o8C_float *)(v0_1))->v)) - w0_1);
    v0_1 = (((struct oC4_int *)(v0_0))->v);
    (((struct o74_float *)(v0_1))->v) = (((((struct o74_float *)(v0_1))->v)) + w0_0);
    v0_1 = (((struct oC8_int *)(v0_0))->v);
    (((struct o74_float *)(v0_1))->v) = (((((struct o74_float *)(v0_1))->v)) + w0_0);
    v0_1 = (0x74);
    if ((0.0f > ((((struct o74_float *)(((((struct oC8_int *)(v0_0))->v))))->v)))) goto L_C0339CA;
    goto L_C033998;
    L_C033826:;
    v0_1 = (((struct oC8_int *)(v0_0))->v);
    (((struct o8C_float *)(v0_1))->v) = (((((struct o8C_float *)(v0_1))->v)) + w0_1);
    v0_1 = (0x8C);
    if ((w0_2 > ((((struct o8C_float *)(((((struct oC8_int *)(v0_0))->v))))->v)))) goto L_C0339CA;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    v0_1 = (0x14);
    goto L_C0339CA;
    L_C0338D0:;
    v0_3 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_3 - 1);
    v0_1 = ((short)(v0_3 - 1));
    if (((short)(v0_3 - 1) != 0)) goto L_C0339CA;
    *(unsigned char *)((((((struct oC4_int *)(v0_0))->v)) + 0x0)) = v0_2;
    *(unsigned char *)((((((struct oC8_int *)(v0_0))->v)) + 0x0)) = v0_2;
    goto L_C033998;
    L_C03382A:;
    v0_3 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_3 - 1);
    v0_1 = ((short)(v0_3 - 1));
    if (((short)(v0_3 - 1) == 0)) goto L_C03383A;
    goto L_C0339CA;
    L_C03383A:;
    v0_1 = (((struct oC4_int *)(v0_0))->v);
    *(unsigned char *)((v0_1 + 0x0)) = 0x0;
    *(unsigned short *)((v0_1 + 0x6)) = 0x31F;
    *(volatile signed char *)((v0_0 + 0x2));
    v0_0 = ((int (*)(int, int, int))(FUN_0c187798))(v0_0, v0_1, v0_2);
    *(volatile signed char *)((t64 + 0x2));
    v0_0 = ((int (*)(int, int))(FUN_0c187798))(t64, t66);
    (((struct o18_float *)(t69))->v) = 1.0f;
    (((struct o1C_float *)(t69))->v) = 0.5f;
    (((struct o20_float *)(t69))->v) = 0.0f;
    v0_0 = (((struct oC8_int *)(t70))->v);
    *(unsigned char *)((v0_0 + 0x0)) = 0x0;
    *(unsigned short *)((v0_0 + 0x6)) = 0x31F;
    *(volatile signed char *)((t70 + 0x2));
    v0_0 = ((int (*)(int, int))(FUN_0c187798))(t70, v0_0);
    *(volatile signed char *)((t75 + 0x2));
    v0_0 = ((int (*)(int, int))(FUN_0c187798))(t75, t77);
    (((struct o18_float *)(t80))->v) = f5;
    (((struct o1C_float *)(t80))->v) = f6;
    (((struct o20_float *)(t80))->v) = f4;
    *(unsigned short *)((t82 + 0x1C)) = t81;
    v0_0 = (t82);
    goto L_C033998;
    L_C0337D0:;
    (((struct oA8_uchar *)(v0_0))->v) = v0_2;
    (((struct oAC_ushort *)(v0_0))->v) = 0xF;
    (((struct oA9_uchar *)(v0_0))->v) = 0x21;
    *(unsigned short *)((v0_0 + 0x1C)) = v0_2;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    goto L_C0337EE;
}
