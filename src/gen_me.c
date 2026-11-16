/* Straight-line functions with calls and guards (batch gen_me): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o377C_uint { char p[0x377C]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c037498(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
float FUN_0c07cd84(int, int, int);
int FUN_0c0d60de(int);
int FUN_0c0d60f8(int);
int FUN_0c1171f0(int);
extern int FUN_0c187798();
int thunk_FUN_0c05abb2(int, int);
int FUN_0c07ce58(int a4, int a5, float f4);
int FUN_0c0daf94(int a4, int a5, int a6, int a7);
int FUN_0c1046e6(int a4, int a5, int a6, int a7);
int FUN_0c11929c(int a4, int a5, int a6, int a7);

int FUN_0c07ce58(int a4, int a5, float f4)
{
    register int t0;
    register int t1;
    int t2;
    register int t3;
    int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;
    register int t10;
    register int t11;
    register int t12;
    register int t13;
    register float u0;
    register float u1;
    register float u2;
    float u3;
    register float u4;

    if ((*(signed char *)0xC54235E) != 0) {
        t6 = ((*(signed char *)((a4 + 0x1))) + 0x1);
    } else {
        t7 = 0x0;
        t8 = a5;
        t9 = 0x0;
        t10 = 0x0;
        u2 = f4;
        u3 = (*(float *)0xC07CFA8);
        for (;;) {
            if ((int)t10 < (int)0x4) {
                t11 = (t10 * 0x3938);
                t11 = (t11 + 0xC532498);
                if (((*(signed char *)((t11 + 0x3714))) != 0) && ((u0 = 0.0f, u1 = (((struct o160_float *)(t11))->v), u1 > u0) && ((t0 = *(signed char *)((a4 + 0x1)), t1 = *(signed char *)((t11 + 0x1)), t0 != t1) && (t2 = *(signed char *)((t11 + 0x3719)), t3 = *(signed char *)((a4 + 0x3719)), t3 != t2)))) {
                    t8 = t11;
                    t8 = (t8 + 0x28);
                    t7 = a4;
                    u4 = (FUN_0c07cd84(t7, t8, a5));
                    u0 = 0.0f;
                    u2 = u4;
                    if ((u4 != u0) && (u3 > u2)) {
                        u3 = u2;
                        t9 = (t10 * 0x3938);
                        t9 = (t9 + 0xC532498);
                        t9 = (*(signed char *)((t9 + 0x1)));
                        t9 = (t9 + 0x1);
                    }
                } else {
                    t11 = t7;
                    t12 = t8;
                }
                t13 = t11;
                t11 = t12;
            } else {
                t8 = 0x380C;
                t8 = (t8 + a4);
                t7 = a4;
                u4 = (FUN_0c07cd84(t7, t8, a5));
                u0 = 0.0f;
                u2 = u4;
                if ((u4 != u0) && (u3 > u2)) {
                    u3 = u2;
                    t9 = (*(signed char *)((a4 + 0x1)));
                    t9 = (t9 + 0x1);
                }
            }
            t7 = t13;
            t8 = t11;
            t10 = (t10 + 0x1);
            if ((int)t10 >= (int)0x5) {
                break;
            }
        }
        if ((t9 != 0) && (t4 = *(signed char *)((a4 + 0x1)), t9 != (t4 + 0x1))) {
            FUN_0c187798((((t9 - 1) * 0x3938) + 0xC532498), t8);
            (((struct o377C_uint *)(a4))->v) = t5;
        }
        t6 = t9;
    }
    return t6;
}

int FUN_0c0daf94(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    if ((*(signed char *)0xC54223C) != 2) {
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    t1 = t0;
                    if (t0 != 4) {
                    } else {
                        t0 = *(signed char *)((a4 + 0x2));
                        if (t0 != 5) {
                            if (t0 != 6) {
                            } else {
                                (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + -10.0f);
                            }
                        } else {
                            (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + 10.0f);
                        }
                        t0 = *(short *)((a4 + 0x1C));
                        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
                        t2 = (short)(t0 - 1);
                        if ((short)(t0 - 1) == 0) {
                            FUN_0c0d60f8((*(signed char *)((a4 + 0x2))));
                            (((struct o14_uchar *)(a4))->v) = 0x1;
                            t2 = 0x14;
                        }
                        t1 = t2;
                    }
                    t0 = t1;
                } else {
                    t1 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
                    t2 = (short)(t1 - 1);
                    if ((short)(t1 - 1) == 0) {
                        thunk_FUN_0c05abb2(0x4E, 0x0);
                        *(unsigned short *)((a4 + 0x1C)) = 0x14;
                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                        t2 = 0x14;
                    }
                    t0 = t2;
                }
                t1 = t0;
            } else {
                t0 = *(signed char *)((a4 + 0x2));
                if (t0 != 5) {
                    if (t0 != 6) {
                    } else {
                        (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + 10.0f);
                    }
                } else {
                    (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + -10.0f);
                }
                t0 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
                t2 = (short)(t0 - 1);
                if ((short)(t0 - 1) == 0) {
                    *(unsigned short *)((a4 + 0x1C)) = 0x1E;
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    t2 = 0x14;
                }
                t1 = t2;
            }
            t0 = t1;
        } else {
            t1 = FUN_0c0d60de((*(signed char *)((a4 + 0x2))));
            t2 = t1;
            if (t1 == 0) {
            } else {
                thunk_FUN_0c05abb2(0x4E, 0x0);
                *(unsigned short *)((a4 + 0x1C)) = 0x14;
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t2 = 0x14;
            }
            t0 = t2;
        }
        t1 = t0;
    } else {
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t0 = FUN_0c0d60de((*(signed char *)((a4 + 0x2))));
        t2 = t0;
        if (t0 == 0) {
        } else {
            thunk_FUN_0c05abb2(0x4E, 0x0);
            *(unsigned short *)((a4 + 0x1C)) = 0x14;
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t2 = 0x14;
        }
        t1 = t2;
    }
    return t1;
}

int FUN_0c1046e6(int a4, int a5, int a6, int a7)
{
    register int t10;
    register int t11;

    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o15_uchar *)(a4))->v) = 0x0;
        (((struct oA8_uchar *)(a4))->v) = 0x1;
    }
    if ((*(signed char *)0xC541F43) != 0) {
        return FUN_0c03f346(a4, 0xC541F3C, a6, a7);
    }
    if ((int)(unsigned char)(*(signed char *)0xC541F45) < (int)0x2) {
        (((struct oA8_uchar *)(a4))->v) = 0x0;
    } else {
        (((struct oA8_uchar *)(a4))->v) = 0x1;
    }
    t10 = (int)((int)(*(int *)0xC472D0C) / (int)0x3C);
    t11 = (int)((int)t10 / (int)0xA);
    if ((int)t11 > 0) {
        FUN_0c037498(((((struct oC8_int *)(a4))->v)), 0x0, (0x90 + t11), (*(int *)0xC4B410C));
        *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x1;
    } else {
        *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x0;
    }
    FUN_0c037498(((((struct oC4_int *)(a4))->v)), 0x0, (0x90 + ((int)((int)t10 % (int)0xA))), (*(int *)0xC4B410C));
    *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
    return 0xC4;
}

int FUN_0c11929c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t4;

    t0 = *(signed char *)((a4 + 0x14));
    t1 = *(int *)((a4 + 0x10));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 99) {
                return t0;
            }
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        *(volatile int *)((a4 + 0x10));
        t0 = ((int (*)(int, int, int))(FUN_0c187798))(a4, a5, a6);
        FUN_0c1171f0(a4);
        t0 = *(signed char *)((0x14 + (*(int *)((a4 + 0x10)))));
        t2 = t0;
        if (t0 == 80) {
            (((struct o14_uchar *)(a4))->v) = 0x63;
            t2 = 0x14;
        }
        return t2;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct oAC_ushort *)(a4))->v) = 0x1F;
    (((struct oA9_uchar *)(a4))->v) = 0x21;
    *(volatile int *)((a4 + 0x10));
    t0 = ((int (*)(int, int, int))(FUN_0c187798))(a4, a5, a6);
    FUN_0c1171f0(a4);
    FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x5, 0xD, (*(int *)0xC4B410C));
    if ((*(signed char *)(((t1 + 0x41C) + 0x4))) != 0) {
        t0 = 0x0;
        for (;;) {
            t2 = FUN_0c03f444(0x8, 0x1, (*(int *)((0xC291E04 + ((*(signed char *)(((t1 + 0x41C) + 0x4))) << 2)))));
            if (t2 != 0) {
                *(unsigned char *)((t2 + 0x1)) = 0xFFFFFFFF;
                *(unsigned int *)((t2 + 0x4)) = 0xC11902C;
                *(unsigned char *)((t2 + 0x2)) = t0;
                *(unsigned int *)((t2 + 0x10)) = (*(int *)((a4 + 0x10)));
                *(volatile int *)((a4 + 0xC4));
                t4 = ((int (*)(int))(FUN_0c187798))(t2);
            } else {
            }
            t0 = (t0 + 0x1);
            if ((int)t0 >= (int)0x5) {
                break;
            }
        }
        t0 = t2;
    }
    *(volatile int *)((a4 + 0x10));
    t1 = ((int (*)(int))(FUN_0c187798))(t0);
    FUN_0c1171f0(a4);
    t0 = *(signed char *)((0x14 + (*(int *)((a4 + 0x10)))));
    t1 = t0;
    if (t0 == 80) {
        (((struct o14_uchar *)(a4))->v) = 0x63;
        t1 = 0x14;
    }
    return t1;
}
