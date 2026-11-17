/* game/player: functions 0C10B0A0-0C10B696, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o100_int { char p[0x100]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o6C_float { char p[0x6C]; float v; };
struct o90_float { char p[0x90]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oEC_int { char p[0xEC]; int v; };
struct oF0_int { char p[0xF0]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int);
int FUN_0c1171f0(int);
int FUN_0c17c130(int, int, int);
int FUN_0c187798(void);
int FUN_0c10b0a0(int a4, int a5);
int FUN_0c10b182(int a4, int a5);
int FUN_0c10b270(int a4);

int FUN_0c10b0a0(int a4, int a5)
{
    int stk[2];
    register int t8;
    register int t11;
    register int t12;
    register int t13;
    register int t9;
    register int t10;

    *(unsigned int *)(((int)stk + 4)) = 0x0;
    if ((int)a5 >= (int)0x3E8) {
        *(unsigned char *)((((((struct oEC_int *)(a4))->v)) + 0x0)) = 0x1;
    } else {
        *(unsigned char *)((((((struct oEC_int *)(a4))->v)) + 0x0)) = 0x0;
    }
    if ((int)a5 >= (int)0xF4240) {
        *(unsigned char *)((((((struct oF0_int *)(a4))->v)) + 0x0)) = 0x1;
    } else {
        *(unsigned char *)((((((struct oF0_int *)(a4))->v)) + 0x0)) = 0x0;
    }
    t8 = 0xF0;
    t11 = 0x989680;
    t12 = a5;
    t13 = 0x9;
    for (;;) {
        if ((int)t13 <= (int)0x1) {
            break;
        }
        t8 = t11;
        t9 = 0xC1874B0;
        t8 = ((int)((int)t12 / (int)t8));
        *(unsigned int *)(((int)stk + 0)) = t8;
        t8 = t11;
        t8 = ((int)((int)t12 % (int)t8));
        t12 = t8;
        t8 = 0xA;
        t8 = ((int)((int)t11 / (int)t8));
        t10 = t13;
        t10 = (t10 << 2);
        t9 = 0xC03744A;
        t11 = t8;
        t8 = (FUN_0c03744a((*(int *)((((0xC4 + a4) + t10) + 0x0))), (*(int *)(((int)stk + 0))), 0x2, (*(int *)0xC4B410C)));
        t9 = 0xC290BC8;
        t10 = (t10 + (0xC4 + a4));
        t10 = (*(int *)((t10 + 0x0)));
        t8 = (FUN_0c17c130((t10 + 0x6C), 0xC2A0C78, (((((t13 - 2) << 1) + (t13 - 2)) << 2) + t9)));
        t9 = (*(int *)(((int)stk + 0)));
        if (t9 == 0) {
            t8 = (*(int *)(((int)stk + 4)));
            if (t8 != 1) {
                t8 = t13;
                if (t8 != 2) {
                    *(unsigned char *)((t10 + 0x0)) = 0x0;
                } else {
                    *(unsigned char *)((t10 + 0x0)) = 0x1;
                }
            } else {
                *(unsigned char *)((t10 + 0x0)) = 0x1;
            }
        } else {
            *(unsigned int *)(((int)stk + 4)) = 0x1;
            *(unsigned char *)((t10 + 0x0)) = 0x1;
        }
        t13 = (t13 - 1);
    }
    return t8;
}

int FUN_0c10b182(int a4, int a5)
{
    int stk[2];
    register int t1;
    register int t3;
    register int t4;
    register int t6;
    register int t17;
    register int t0;
    register int t2;
    register int t5;
    register int t26;

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 4)) = 0x0;
    t1 = 0x0;
    t3 = a5;
    t4 = 0xA;
    t6 = 0x3;
    for (;;) {
        if ((int)t6 <= (int)0x1) {
            break;
        }
        t0 = t4;
        t0 = ((int)((int)t3 / (int)t0));
        t2 = t0;
        t0 = t4;
        t1 = 0xC18760C;
        t0 = ((int)((int)t3 % (int)t0));
        t3 = t0;
        t0 = 0xA;
        t0 = ((int)((int)t4 / (int)t0));
        t4 = t0;
        t0 = (*(int *)(((int)stk + 0)));
        t5 = t6;
        t1 = 0xC4B410C;
        t5 = (t5 + 0xA);
        t5 = (t5 << 2);
        t0 = (FUN_0c03744a((*(int *)((((0xC4 + t0) + t5) + 0x0))), t2, 0x7, (*(int *)((t1 + 0x0)))));
        t1 = 0xC4;
        t0 = (*(int *)(((int)stk + 0)));
        t1 = (t1 + t0);
        t5 = (t5 + t1);
        t1 = (t6 - 2);
        t5 = (*(int *)((t5 + 0x0)));
        t17 = (((t6 - 2) << 1) + t1);
        t1 = 0xC17C130;
        t0 = (FUN_0c17c130((t5 + 0x6C), 0xC2A0C78, ((t17 << 2) + 0xC290C28)));
        if (t2 == 0) {
            t0 = (*(int *)(((int)stk + 4)));
            if (t0 != 1) {
                t0 = t6;
                if (t0 != 2) {
                    t1 = 0x0;
                    *(unsigned char *)((t5 + 0x0)) = t1;
                    t26 = t1;
                } else {
                    *(unsigned char *)((t5 + 0x0)) = 0x1;
                }
            } else {
                *(unsigned char *)((t5 + 0x0)) = 0x1;
            }
        } else {
            *(unsigned int *)(((int)stk + 4)) = 0x1;
            *(unsigned char *)((t5 + 0x0)) = 0x1;
        }
        t6 = (t6 - 1);
        t1 = t26;
    }
    return t0;
}

int FUN_0c10b270(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = *(int *)0xC474404;
    t1 = *(signed char *)((a4 + 0x14));
    if (t1 != 0) {
        if (t1 == 1) {
            t2 = (((struct oC4_int *)(a4))->v);
            (((struct o6C_float *)(t2))->v) = (((((struct o6C_float *)(t2))->v)) + ((((struct o90_float *)(t2))->v)));
            FUN_0c17c130(((*(int *)(((0xC4 + a4) + 0x4))) + 0x6C), 0xC290C4C, (((((struct oC4_int *)(a4))->v)) + 0x6C));
            FUN_0c17c130(((*(int *)(((0xC4 + a4) + 0x28))) + 0x6C), 0xC290C58, (((((struct oC4_int *)(a4))->v)) + 0x6C));
            FUN_0c17c130(((*(int *)(((0xC4 + a4) + 0x2C))) + 0x6C), 0xC290C64, (((((struct oC4_int *)(a4))->v)) + 0x6C));
            FUN_0c17c130(((*(int *)(((0xC4 + a4) + 0x3C))) + 0x6C), 0xC290C40, (((((struct oC4_int *)(a4))->v)) + 0x6C));
            if ((*(signed char *)((a4 + 0x2))) == 0) {
                t2 = (*(short *)((a4 + 0x1C)));
                t3 = (*(int *)((((((*(int *)(((((*(int *)0xC474404) << 2) + 0xC474410) + 0x0))) << 2) << 1) + 0xC29D7D0) + 0x4)));
            } else {
                t2 = (*(short *)((a4 + 0x1C)));
                t3 = (*(int *)((((((*(int *)(((((*(int *)0xC474404) << 2) + 0xC474410) + 0x0))) << 2) << 1) + 0xC29D7D0) + 0x0)));
            }
            FUN_0c10b0a0(a4, (t2 * t3));
            t2 = 0x8;
            t3 = 0xC290BC8;
            for (;;) {
                FUN_0c17c130(((*(int *)((t2 + (0xC4 + a4)))) + 0x6C), t3, (((((struct oC4_int *)(a4))->v)) + 0x6C));
                t3 = (t3 + 0xC);
                t2 = (t2 + 0x4);
                if ((unsigned int)t3 >= (unsigned int)0xC290C28) {
                    break;
                }
            }
            FUN_0c10b182(a4, (*(short *)((a4 + 0x1C))));
            t2 = 0x30;
            t3 = 0xC290C28;
            for (;;) {
                FUN_0c17c130(((*(int *)((t2 + (0xC4 + a4)))) + 0x6C), t3, (((((struct oC4_int *)(a4))->v)) + 0x6C));
                t3 = (t3 + 0xC);
                t2 = (t2 + 0x4);
                if ((unsigned int)t3 >= (unsigned int)0xC290C40) {
                    break;
                }
            }
            t2 = *(short *)((a4 + 0x1E));
            *(unsigned short *)((a4 + 0x1E)) = (t2 + 0x1);
            t3 = (short)(t2 + 0x1);
            if ((int)(short)(t2 + 0x1) < (int)0x10) {
            } else {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                *(unsigned short *)((a4 + 0x1E)) = 0x0;
                t3 = 0x0;
            }
            return t3;
        }
        if (t1 == 2) {
            if ((*(signed char *)((a4 + 0x2))) == 0) {
                t2 = (*(short *)((a4 + 0x1C)));
                t3 = (*(int *)((((((*(int *)((((t0 << 2) + 0xC474410) + 0x0))) << 2) << 1) + 0xC29D7D0) + 0x4)));
            } else {
                t2 = (*(short *)((a4 + 0x1C)));
                t3 = (*(int *)((((((*(int *)((((t0 << 2) + 0xC474410) + 0x0))) << 2) << 1) + 0xC29D7D0) + 0x0)));
            }
            FUN_0c10b0a0(a4, (t2 * t3));
            return FUN_0c10b182(a4, (*(short *)((a4 + 0x1C))));
        }
        if (t1 == 10) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            (((struct o90_float *)(((((struct oC4_int *)(a4))->v))))->v) = 25.0f;
            *(unsigned short *)((a4 + 0x1E)) = 0x0;
            t0 = (((struct oC4_int *)(a4))->v);
            (((struct o6C_float *)(t0))->v) = (((((struct o6C_float *)(t0))->v)) + ((((struct o90_float *)(t0))->v)));
            FUN_0c17c130(((*(int *)(((0xC4 + a4) + 0x4))) + 0x6C), 0xC290C4C, (((((struct oC4_int *)(a4))->v)) + 0x6C));
            FUN_0c17c130(((*(int *)(((0xC4 + a4) + 0x28))) + 0x6C), 0xC290C58, (((((struct oC4_int *)(a4))->v)) + 0x6C));
            FUN_0c17c130(((*(int *)(((0xC4 + a4) + 0x2C))) + 0x6C), 0xC290C64, (((((struct oC4_int *)(a4))->v)) + 0x6C));
            FUN_0c17c130(((*(int *)(((0xC4 + a4) + 0x3C))) + 0x6C), 0xC290C40, (((((struct oC4_int *)(a4))->v)) + 0x6C));
            t0 = *(int *)0xC474404;
            if ((*(signed char *)((a4 + 0x2))) == 0) {
                t2 = (*(short *)((a4 + 0x1C)));
                t3 = (*(int *)((((((*(int *)((((t0 << 2) + 0xC474410) + 0x0))) << 2) << 1) + 0xC29D7D0) + 0x4)));
            } else {
                t2 = (*(short *)((a4 + 0x1C)));
                t3 = (*(int *)((((((*(int *)((((t0 << 2) + 0xC474410) + 0x0))) << 2) << 1) + 0xC29D7D0) + 0x0)));
            }
            FUN_0c10b0a0(a4, (t2 * t3));
            t0 = 0x8;
            t2 = 0xC290BC8;
            for (;;) {
                FUN_0c17c130(((*(int *)((t0 + (0xC4 + a4)))) + 0x6C), t2, (((((struct oC4_int *)(a4))->v)) + 0x6C));
                t2 = (t2 + 0xC);
                t0 = (t0 + 0x4);
                if ((unsigned int)t2 >= (unsigned int)0xC290C28) {
                    break;
                }
            }
            FUN_0c10b182(a4, (*(short *)((a4 + 0x1C))));
            t0 = 0x30;
            t2 = 0xC290C28;
            for (;;) {
                FUN_0c17c130(((*(int *)((t0 + (0xC4 + a4)))) + 0x6C), t2, (((((struct oC4_int *)(a4))->v)) + 0x6C));
                t2 = (t2 + 0xC);
                t0 = (t0 + 0x4);
                if ((unsigned int)t2 >= (unsigned int)0xC290C40) {
                    break;
                }
            }
            t0 = *(short *)((a4 + 0x1E));
            *(unsigned short *)((a4 + 0x1E)) = (t0 + 0x1);
            if ((int)(short)(t0 + 0x1) >= (int)0x10) {
                return FUN_0c03f346(a4);
            }
            return (short)(t0 + 0x1);
        }
        if (t1 == 11) {
            t0 = (((struct oC4_int *)(a4))->v);
            (((struct o6C_float *)(t0))->v) = (((((struct o6C_float *)(t0))->v)) + ((((struct o90_float *)(t0))->v)));
            FUN_0c17c130(((*(int *)(((0xC4 + a4) + 0x4))) + 0x6C), 0xC290C4C, (((((struct oC4_int *)(a4))->v)) + 0x6C));
            FUN_0c17c130(((*(int *)(((0xC4 + a4) + 0x28))) + 0x6C), 0xC290C58, (((((struct oC4_int *)(a4))->v)) + 0x6C));
            FUN_0c17c130(((*(int *)(((0xC4 + a4) + 0x2C))) + 0x6C), 0xC290C64, (((((struct oC4_int *)(a4))->v)) + 0x6C));
            FUN_0c17c130(((*(int *)(((0xC4 + a4) + 0x3C))) + 0x6C), 0xC290C40, (((((struct oC4_int *)(a4))->v)) + 0x6C));
            t0 = *(int *)0xC474404;
            if ((*(signed char *)((a4 + 0x2))) == 0) {
                t2 = (*(short *)((a4 + 0x1C)));
                t3 = (*(int *)((((((*(int *)((((t0 << 2) + 0xC474410) + 0x0))) << 2) << 1) + 0xC29D7D0) + 0x4)));
            } else {
                t2 = (*(short *)((a4 + 0x1C)));
                t3 = (*(int *)((((((*(int *)((((t0 << 2) + 0xC474410) + 0x0))) << 2) << 1) + 0xC29D7D0) + 0x0)));
            }
            FUN_0c10b0a0(a4, (t2 * t3));
            t0 = 0x8;
            t2 = 0xC290BC8;
            for (;;) {
                FUN_0c17c130(((*(int *)((t0 + (0xC4 + a4)))) + 0x6C), t2, (((((struct oC4_int *)(a4))->v)) + 0x6C));
                t2 = (t2 + 0xC);
                t0 = (t0 + 0x4);
                if ((unsigned int)t2 >= (unsigned int)0xC290C28) {
                    break;
                }
            }
            FUN_0c10b182(a4, (*(short *)((a4 + 0x1C))));
            t0 = 0x30;
            t2 = 0xC290C28;
            for (;;) {
                FUN_0c17c130(((*(int *)((t0 + (0xC4 + a4)))) + 0x6C), t2, (((((struct oC4_int *)(a4))->v)) + 0x6C));
                t2 = (t2 + 0xC);
                t0 = (t0 + 0x4);
                if ((unsigned int)t2 >= (unsigned int)0xC290C40) {
                    break;
                }
            }
            t0 = *(short *)((a4 + 0x1E));
            *(unsigned short *)((a4 + 0x1E)) = (t0 + 0x1);
            if ((int)(short)(t0 + 0x1) >= (int)0x10) {
                return FUN_0c03f346(a4);
            }
            return (short)(t0 + 0x1);
        }
        t0 = t1;
        if (t1 == 99) {
            (((struct o14_uchar *)(a4))->v) = 0xA;
            t0 = 0x14;
        }
        return t0;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct oAC_ushort *)(a4))->v) = 0x1F;
    (((struct oA9_uchar *)(a4))->v) = 0x21;
    FUN_0c1171f0(a4);
    FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0xE, 0xD, (*(int *)0xC4B410C));
    FUN_0c03744a(((((struct oC8_int *)(a4))->v)), 0xA, 0x2, (*(int *)0xC4B410C));
    FUN_0c03744a(((((struct oEC_int *)(a4))->v)), 0xB, 0x2, (*(int *)0xC4B410C));
    *(unsigned char *)((((((struct oEC_int *)(a4))->v)) + 0x0)) = 0x0;
    *(volatile int *)((a4 + 0xEC));
    FUN_0c187798();
    FUN_0c03744a(((((struct oF0_int *)(a4))->v)), 0xB, 0x2, (*(int *)0xC4B410C));
    *(unsigned char *)((((((struct oF0_int *)(a4))->v)) + 0x0)) = 0x0;
    *(volatile int *)((a4 + 0xF0));
    FUN_0c187798();
    FUN_0c03744a(((((struct o100_int *)(a4))->v)), 0x7, 0x4, (*(int *)0xC4B410C));
    *(volatile int *)((a4 + 0x100));
    FUN_0c187798();
    t0 = (((struct oC4_int *)(a4))->v);
    (((struct o6C_float *)(t0))->v) = (((((struct o6C_float *)(t0))->v)) + 400.0f);
    (((struct o90_float *)(t0))->v) = -25.0f;
    t0 = (((struct oC4_int *)(a4))->v);
    (((struct o6C_float *)(t0))->v) = (((((struct o6C_float *)(t0))->v)) + ((((struct o90_float *)(t0))->v)));
    FUN_0c17c130(((*(int *)(((0xC4 + a4) + 0x4))) + 0x6C), 0xC290C4C, (((((struct oC4_int *)(a4))->v)) + 0x6C));
    FUN_0c17c130(((*(int *)(((0xC4 + a4) + 0x28))) + 0x6C), 0xC290C58, (((((struct oC4_int *)(a4))->v)) + 0x6C));
    FUN_0c17c130(((*(int *)(((0xC4 + a4) + 0x2C))) + 0x6C), 0xC290C64, (((((struct oC4_int *)(a4))->v)) + 0x6C));
    FUN_0c17c130(((*(int *)(((0xC4 + a4) + 0x3C))) + 0x6C), 0xC290C40, (((((struct oC4_int *)(a4))->v)) + 0x6C));
    if ((*(signed char *)((a4 + 0x2))) == 0) {
        t0 = (*(short *)((a4 + 0x1C)));
        t1 = (*(int *)((((((*(int *)(((((*(int *)0xC474404) << 2) + 0xC474410) + 0x0))) << 2) << 1) + 0xC29D7D0) + 0x4)));
    } else {
        t0 = (*(short *)((a4 + 0x1C)));
        t1 = (*(int *)((((((*(int *)(((((*(int *)0xC474404) << 2) + 0xC474410) + 0x0))) << 2) << 1) + 0xC29D7D0) + 0x0)));
    }
    FUN_0c10b0a0(a4, (t0 * t1));
    t0 = 0x8;
    t1 = 0xC290BC8;
    for (;;) {
        FUN_0c17c130(((*(int *)((t0 + (0xC4 + a4)))) + 0x6C), t1, (((((struct oC4_int *)(a4))->v)) + 0x6C));
        t1 = (t1 + 0xC);
        t0 = (t0 + 0x4);
        if ((unsigned int)t1 >= (unsigned int)0xC290C28) {
            break;
        }
    }
    FUN_0c10b182(a4, (*(short *)((a4 + 0x1C))));
    t0 = 0x30;
    t1 = 0xC290C28;
    for (;;) {
        FUN_0c17c130(((*(int *)((t0 + (0xC4 + a4)))) + 0x6C), t1, (((((struct oC4_int *)(a4))->v)) + 0x6C));
        t1 = (t1 + 0xC);
        t0 = (t0 + 0x4);
        if ((unsigned int)t1 >= (unsigned int)0xC290C40) {
            break;
        }
    }
    t0 = *(short *)((a4 + 0x1E));
    *(unsigned short *)((a4 + 0x1E)) = (t0 + 0x1);
    t1 = (short)(t0 + 0x1);
    if ((int)(short)(t0 + 0x1) < (int)0x10) {
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(unsigned short *)((a4 + 0x1E)) = 0x0;
        t1 = 0x0;
    }
    return t1;
}
