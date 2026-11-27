/* game/player: functions 0C10B6E4-0C10C7FA, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1C_int { char p[0x1C]; int v; };
struct o20_int { char p[0x20]; int v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o2C_int { char p[0x2C]; int v; };
struct o2C_uint { char p[0x2C]; unsigned int v; };
struct o38_int { char p[0x38]; int v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
int FUN_0c056e44(int, int, int);
int FUN_0c05a080(int, int);
int FUN_0c05f22c(int);
int FUN_0c104cc8(int);
int FUN_0c104d70(void);
int FUN_0c104db8(void);
int FUN_0c10527c(int, int);
int FUN_0c1086d8(int);
int FUN_0c10eeac(int);
int FUN_0c113142(void);
int FUN_0c115120(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c1173a0(void);
int FUN_0c117944(int, ...);
int FUN_0c117a6e(int, ...);
int FUN_0c117d54(void);
int FUN_0c117e76(void);
int FUN_0c118412(int);
int FUN_0c118584(int);
int FUN_0c119ba4(int, int);
int FUN_0c11e20c(int);
int FUN_0c11e28e(int);
int FUN_0c11ea4e(int);
int FUN_0c11eae8(int);
int nlRand(void);
int FUN_0c10b6e4(int a4);
int FUN_0c10b6f2(int a4);
int FUN_0c10b700(int a4);
int FUN_0c10b70e(int a4);
int FUN_0c10b720(int a4);
int FUN_0c10b7be(int a4, int a5, int a6, int a7);
int FUN_0c10b7e2(int a4, int a5, int a6, int a7);
int FUN_0c10b808(int a4, int a5, int a6, int a7);
int FUN_0c10b97c(int a4, int a5, int a6, int a7);
int FUN_0c10b9d6(int a4, int a5, int a6, int a7);
int FUN_0c10bbb8(int a4, int a5, int a6, int a7);
int FUN_0c10bda2(int a4);
int FUN_0c10befc(int a4);
int FUN_0c10c01e(int a4);
int FUN_0c10c112(int a4, int a5);
int FUN_0c10c616(int a4);
int FUN_0c10c6ee(int a4);
int FUN_0c10c76e(int a4, int a5, int a6, int a7);
int FUN_0c10c79a(int a4);

int FUN_0c10b6e4(int a4)
{
    (((struct o14_uchar *)(a4))->v) = 0x1;
    (((struct o15_uchar *)(a4))->v) = 0x0;
    return 0x15;
}

int FUN_0c10b6f2(int a4)
{
    (((struct o14_uchar *)(a4))->v) = 0x1;
    (((struct o15_uchar *)(a4))->v) = 0x0;
    return 0x15;
}

int FUN_0c10b700(int a4)
{
    (((struct o14_uchar *)(a4))->v) = 0x2;
    (((struct o15_uchar *)(a4))->v) = 0x0;
    return 0x15;
}

int FUN_0c10b70e(int a4)
{
    (((struct o14_uchar *)(a4))->v) = 0x3;
    (((struct o15_uchar *)(a4))->v) = 0x0;
    (((struct o16_uchar *)(a4))->v) = 0x0;
    return 0x16;
}

int FUN_0c10b720(int a4)
{
    (((struct o14_uchar *)(a4))->v) = 0x63;
    (((struct o15_uchar *)(a4))->v) = 0x0;
    return 0x15;
}

int FUN_0c10b7be(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = FUN_0c11ea4e(0x400130);
    if ((int)t0 > 0) {
        return ((int (*)(int, int, int, int))(0xC10B72E))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC10B788))(a4, a5, a6, a7);
}

int FUN_0c10b7e2(int a4, int a5, int a6, int a7)
{
    if ((*(int *)0xC474714) == 0) {
        return ((int (*)(int, int, int, int))(0xC10B79A))(a4, a5, a6, a7);
    }
    FUN_0c117944(0x70);
    return ((int (*)(int, int, int, int))(0xC10B752))(a4, a5, a6, a7);
}

int FUN_0c10b808(int a4, int a5, int a6, int a7)
{
    int stk[6];
    int t51;
    int t6;
    int t28;
    int t0;
    int t8;
    int t9;
    int t20;
    int t38;
    int t29;
    int t25;
    int t21;

    t0 = *(signed char *)(a4 + 0x16);
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        t6 = *(signed char *)(a4 + 0x17);
        if (t6 != 0) {
            if (t6 != 1) {
                if (t6 != 2) {
                    if (t6 != 3) {
                        return t6;
                    }
                    t8 = (((struct o22_short *)(a4))->v);
                    (((struct o22_ushort *)(a4))->v) = (t8 + 0x1);
                    if ((int)(short)(t8 + 0x1) > (int)0xA) {
                        return ((int (*)(int, int, int, int))(0xC10B752))(a4, a5, a6, a7);
                    }
                    return 0x22;
                }
                t9 = (((struct o22_short *)(a4))->v);
                (((struct o22_ushort *)(a4))->v) = (t9 + 0x1);
                if ((int)(short)(t9 + 0x1) > (int)0x3C) {
                    (((struct o18_uint *)0xC474B8C)->v) = (FUN_0c119ba4(0x400130, 0x1));
                    (((struct o17_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x17)) + 0x1);
                    (((struct o22_ushort *)(a4))->v) = 0x0;
                }
                return 0x22;
            }
            (((struct o22_ushort *)(a4))->v) = 0x0;
            (((struct o14_uchar *)(((((struct o0_int *)0xC474B8C)->v))))->v) = 0x63;
            (((struct o0_uint *)0xC474B8C)->v) = 0x0;
            FUN_0c056e44(0x23, 0x4, a6);
            FUN_0c115120(0x7, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
            t20 = (((struct o0_int *)0xC5325B0)->v);
            (((struct o98_float *)(t20))->v) = 8.0f;
            (((struct o94_float *)(t20))->v) = 8.0f;
            t21 = (((struct o4_int *)0xC5325B0)->v);
            (((struct o98_float *)(t21))->v) = 8.0f;
            (((struct o94_float *)(t21))->v) = 8.0f;
            (((struct o17_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x17)) + 0x1);
            return 0x17;
        }
        t25 = (*(signed char *)0xC535BAD);
        if ((*(signed char *)0xC535BAD) == 1) {
            (((struct o17_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x17)) + 0x1);
            t25 = 0x17;
        }
        return t25;
    }
    t28 = *(signed char *)(a4 + 0x17);
    if (t28 != 0) {
        if (t28 != 1) {
            t51 = t28;
            if (t28 != 2) {
            } else {
                t29 = FUN_0c05f22c(0x3FCF);
                t51 = t29;
                if (t29 != 0) {
                    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x16)) + 0x1);
                    (((struct o17_uchar *)(a4))->v) = 0x0;
                    t51 = 0x17;
                }
            }
        } else {
            t38 = FUN_0c117d54();
            t51 = t38;
            if ((int)t38 >= 0) {
            } else {
                FUN_0c117e76();
                (((struct o17_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x17)) + 0x1);
                t51 = 0x17;
            }
        }
    } else {
        *(int *)((int)stk + 0) = 0x71;
        FUN_0c117944(0x71);
        (((struct o17_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x17)) + 0x1);
        t51 = 0x17;
    }
    return t51;
}




int FUN_0c10bda2(int a4)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            t0 = FUN_0c05f22c(0x3FCF);
            if (t0 != 0) {
                return FUN_0c10b6e4(a4);
            }
            return t0;
        }
        t0 = FUN_0c117d54();
        t1 = t0;
        if ((int)t0 < 0) {
            FUN_0c117e76();
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
            t1 = 0x16;
        }
        return t1;
    }
    FUN_0c117944(0x68);
    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
    return 0x16;
}



int FUN_0c10c112(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                t1 = t0;
                if (t0 == 3) {
                    (((struct o15_uchar *)(a4))->v) = 0x2;
                    (((struct o16_uchar *)(a4))->v) = 0x0;
                    t1 = 0x16;
                }
                t0 = t1;
            } else {
                (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) + 0x1);
                if ((*(int *)((((*(int *)(((a5 << 2) + 0xC290D40))) + (((((struct o20_short *)(a4))->v)) << 2)) + 0x0))) == -1) {
                    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                } else {
                    (((struct o16_uchar *)(a4))->v) = 0x1;
                }
                (((struct o17_uchar *)(a4))->v) = 0x0;
                t0 = 0x17;
            }
            return t0;
        }
    } else {
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        (((struct o20_ushort *)(a4))->v) = 0x0;
        (((struct o17_uchar *)(a4))->v) = 0x0;
        FUN_0c1086d8((*(int *)0xC47440C));
    }
    t0 = *(signed char *)((a4 + 0x17));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                t1 = t0;
                if (t0 != 3) {
                } else {
                    t0 = FUN_0c104db8();
                    if (t0 != 0) {
                        (((struct o16_uchar *)(a4))->v) = 0x3;
                        (((struct o17_uchar *)(a4))->v) = 0x0;
                        t0 = 0x17;
                    } else {
                        t2 = FUN_0c104cc8(0x3FCF);
                        t0 = t2;
                        if (t2 == 0) {
                        } else {
                            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                            (((struct o17_uchar *)(a4))->v) = 0x0;
                            t0 = 0x17;
                        }
                    }
                    t1 = t0;
                }
                return t1;
            }
            t0 = FUN_0c104db8();
            if (t0 == 0) {
                t0 = FUN_0c117d54();
                if ((int)t0 < 0) {
                    (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                    return FUN_0c117e76();
                }
                return t0;
            }
            (((struct o16_uchar *)(a4))->v) = 0x3;
            (((struct o17_uchar *)(a4))->v) = 0x0;
            return 0x17;
        }
        t0 = (((struct o22_short *)(a4))->v);
        (((struct o22_ushort *)(a4))->v) = (t0 + 0x1);
        t1 = 0x22;
        if ((int)(short)(t0 + 0x1) > (int)0xA) {
            (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
            t1 = 0x17;
        }
        return t1;
    }
    (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
    (((struct o22_ushort *)(a4))->v) = 0x0;
    return (FUN_0c117a6e(((*(int *)((((*(int *)(((a5 << 2) + 0xC290D40))) + (((((struct o20_short *)(a4))->v)) << 2)) + 0x0))))));
}

int FUN_0c10c616(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            *(unsigned char *)0xC535BAC = 0x1;
            (((struct o0_uint *)0xC474B8C)->v) = (FUN_0c118412(0x4));
            (((struct o14_uchar *)(((((struct o1C_int *)0xC474B8C)->v))))->v) = 0x14;
            (((struct o14_uchar *)(((((struct o20_int *)0xC474B8C)->v))))->v) = 0x14;
            (((struct o14_uchar *)(((((struct o2C_int *)0xC474B8C)->v))))->v) = 0x63;
            (((struct o2C_uint *)0xC474B8C)->v) = 0x0;
            (((struct o14_uchar *)(((((struct o4_int *)0xC474B8C)->v))))->v) = 0x63;
            (((struct o4_uint *)0xC474B8C)->v) = 0x0;
            *(unsigned int *)0xC474718 = 0x3;
            (((struct o4_uint *)0xC474B8C)->v) = (FUN_0c1173a0());
            (((struct o14_uchar *)(((((struct o38_int *)0xC474B8C)->v))))->v) = 0x28;
            return FUN_0c10b6e4(a4);
        }
        return t0;
    }
    *(unsigned char *)0xC535BAC = 0x0;
    (((struct o14_uchar *)(((((struct o0_int *)0xC474B8C)->v))))->v) = 0x63;
    (((struct o0_uint *)0xC474B8C)->v) = 0x0;
    (((struct o14_uchar *)(((((struct o1C_int *)0xC474B8C)->v))))->v) = 0x1E;
    (((struct o14_uchar *)(((((struct o20_int *)0xC474B8C)->v))))->v) = 0x1E;
    (((struct o14_uchar *)(((((struct o4_int *)0xC474B8C)->v))))->v) = 0x63;
    (((struct o4_uint *)0xC474B8C)->v) = 0x0;
    *(unsigned int *)0xC474718 = 0x6;
    (((struct o4_uint *)0xC474B8C)->v) = (FUN_0c1173a0());
    (((struct o2C_uint *)0xC474B8C)->v) = (FUN_0c113142());
    (((struct o14_uchar *)(((((struct o38_int *)0xC474B8C)->v))))->v) = 0x32;
    FUN_0c10eeac(a4);
    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
    (((struct o17_uchar *)(a4))->v) = 0x0;
    return 0x17;
}

int FUN_0c10c6ee(int a4)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            t0 = FUN_0c05f22c(0x3FCF);
            if (t0 != 0) {
                return FUN_0c10b6e4(a4);
            }
            return t0;
        }
        t0 = FUN_0c117d54();
        t1 = t0;
        if ((int)t0 < 0) {
            FUN_0c117e76();
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
            t1 = 0x16;
        }
        return t1;
    }
    FUN_0c117944(0xE0);
    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
    return 0x16;
}

int FUN_0c10c76e(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    return t0;
                }
                return FUN_0c10c6ee(a4);
            }
            return FUN_0c10c616(a4);
        }
        return ((int (*)(int, int, int, int))(0xC10C4F4))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC10C4E6))(a4, a5, a6, a7);
}

int FUN_0c10c79a(int a4)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            return FUN_0c10b720(a4);
        }
        t0 = *(short *)((a4 + 0x1E));
        *(unsigned short *)((a4 + 0x1E)) = (t0 + 0x1);
        t1 = (short)(t0 + 0x1);
        if ((int)(short)(t0 + 0x1) > (int)0xA) {
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            t1 = 0x15;
        }
        return t1;
    }
    *(unsigned short *)((a4 + 0x1E)) = 0x0;
    FUN_0c118584((*(int *)0xC474740));
    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    return 0x15;
}
