/* game/unsorted: functions 0C0303FC-0C030DBE, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o5_uchar { char p[0x5]; unsigned char v; };
struct o78_int { char p[0x78]; int v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
int FUN_0c0303fc(int);
int FUN_0c0305d8(int);
int FUN_0c03063c(int, int);
int FUN_0c030728(int);
int FUN_0c030866(int, int, int);
int FUN_0c030c2c(int, int);
int FUN_0c030ffc(int);
int FUN_0c03107c(int);
int FUN_0c03119c(int);
int FUN_0c0311fe(int);
int FUN_0c031294(int);
int FUN_0c0312ee(int);
int FUN_0c05d978(int);
int FUN_0c05d9b4(int);
int FUN_0c05d9d6(int);
int FUN_0c05da24(int);
int FUN_0c05db24(int);
int FUN_0c05db54(int);
int FUN_0c05db92(int);
int FUN_0c05dcac(int);
int FUN_0c05dd3e(int);
int FUN_0c03090c(int a4, int a5, int a6);
int FUN_0c030c94(int a4, int a5, int a6);

int FUN_0c03090c(int a4, int a5, int a6)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;

    t2 = *(signed char *)0xC541F41;
    if ((unsigned char)t2 == 7) {
        return (unsigned char)t2;
    }
    if ((unsigned char)t2 == 8) {
        return (unsigned char)t2;
    }
    FUN_0c030866(a4, a5, a6);
    t2 = *(signed char *)((a4 + 0x2));
    if (t2 != 0) {
        if (t2 == 1) {
            FUN_0c05dd3e(a4);
            FUN_0c031294(a4);
            t3 = (((struct o78_int *)(a4))->v);
            if ((*(short *)((((((t3 << 2) + t3) << 2) << 1) + 0xC542864))) != 0) {
                *(unsigned short *)((a4 + 0xC)) = 0x258;
            }
            if ((*(short *)((a4 + 0xA))) != 0) {
                *(unsigned short *)((a4 + 0xA)) = ((*(short *)((a4 + 0xA))) - 1);
            }
            if ((*(short *)((a4 + 0xC))) != 0) {
                *(unsigned short *)((a4 + 0xC)) = ((*(short *)((a4 + 0xC))) - 1);
            }
            if (((*(short *)(((a4 + 0xA) + 0x0))) != 0) && (t0 = *(short *)(((a4 + 0xA) + 0x2)), t0 != 0)) {
                t3 = t0;
            } else {
                t0 = *(signed char *)((a4 + 0x3));
                if (t0 == 0) {
                    t4 = *(signed char *)((a4 + 0x3));
                    t5 = ((a4 + 0x68) + t4);
                    for (;;) {
                        if ((unsigned int)t5 >= (unsigned int)(a4 + 0x6B)) {
                            break;
                        }
                        *(unsigned char *)((t5 + 0x0)) = 0x41;
                        t5 = (t5 + 0x1);
                    }
                    t5 = t4;
                } else {
                    t4 = t0;
                    if ((int)t0 < (int)0x3) {
                        t0 = *(signed char *)((a4 + 0x3));
                        t6 = ((a4 + 0x68) + t0);
                        for (;;) {
                            if ((unsigned int)t6 >= (unsigned int)(a4 + 0x6B)) {
                                break;
                            }
                            *(unsigned char *)((t6 + 0x0)) = 0x20;
                            t6 = (t6 + 0x1);
                        }
                        t4 = t0;
                    }
                    t5 = t4;
                }
                t0 = t5;
                t4 = (a4 + 0x68);
                t5 = (a4 + 0x68);
                t6 = (a4 + 0x68);
                for (;;) {
                    if ((unsigned int)t5 >= (unsigned int)(a4 + 0x6C)) {
                        break;
                    }
                    t6 = *(signed char *)((t5 + 0x0));
                    t5 = (t5 + 0x1);
                    t0 = t6;
                    if ((t0 == 126) || (t1 = (t0 == 126), t0 = t6, t0 == 127)) {
                        *(unsigned char *)((t4 + 0x0)) = 0x20;
                    }
                    t4 = (t4 + 0x1);
                }
                FUN_0c05dcac(a4);
                *(unsigned short *)((a4 + 0xA)) = 0xF0;
                t0 = *(signed char *)((a4 + 0x2));
                *(unsigned char *)((a4 + 0x2)) = (t0 + 0x1);
                t3 = (t0 + 0x1);
            }
            t0 = t3;
        } else {
            if (t2 == 2) {
                if ((0x20 & ((((struct o0_int *)0xC542098)->v))) != 0) {
                    FUN_0c031294(a4);
                }
                t1 = *(short *)((a4 + 0xA));
                *(unsigned short *)((a4 + 0xA)) = (t1 - 1);
                t3 = (short)(t1 - 1);
                if ((int)(short)(t1 - 1) <= 0) {
                    t1 = *(signed char *)((a4 + 0x2));
                    *(unsigned char *)((a4 + 0x2)) = (t1 + 0x1);
                    t3 = (t1 + 0x1);
                }
                t1 = t3;
            } else {
                t3 = t2;
                if (t2 == 3) {
                    if ((*(signed char *)((a4 + 0x5))) != 0) {
                        if ((*(signed char *)0xC5429B4) == 0) {
                            FUN_0c05da24(a4);
                            (((struct o5_uchar *)0xC542098)->v) = 0x1;
                        }
                        if ((*(signed char *)0xC5429B4) == 4) {
                            FUN_0c05db92(a4);
                            (((struct o5_uchar *)0xC542098)->v) = 0x2;
                        }
                    }
                    (((struct o7C_uint *)(a4))->v) = 0x5;
                    *(unsigned char *)(((a4 + 0x1) + 0x3)) = 0x0;
                    *(unsigned char *)(((a4 + 0x1) + 0x2)) = 0x0;
                    *(unsigned char *)(((a4 + 0x1) + 0x1)) = 0x0;
                    *(unsigned char *)(((a4 + 0x1) + 0x0)) = 0x0;
                    t3 = 0x0;
                }
                t1 = t3;
            }
            t0 = t1;
        }
        return t0;
    }
    *(unsigned char *)((a4 + 0x5)) = 0x0;
    *(unsigned char *)(((a4 + 0x5) + 0x2)) = 0x5;
    *(unsigned char *)(((a4 + 0x5) + 0x1)) = 0x5;
    if ((*(signed char *)0xC5429B4) == 0) {
        t0 = FUN_0c05d9b4(a4);
        t1 = FUN_0c05d9d6(a4);
        *(unsigned char *)(((0x2 + (a4 + 0x5)) + 0x0)) = (t1 + t0);
        t2 = 0x0;
        if ((int)(signed char)(t1 + t0) < (int)0x5) {
            t2 = 0x1;
        }
        *(unsigned char *)(((a4 + 0x5) + 0x0)) = ((*(signed char *)(((a4 + 0x5) + 0x0))) | t2);
    }
    if ((*(signed char *)0xC5429B4) == 4) {
        t0 = FUN_0c05db24(a4);
        t1 = FUN_0c05db54(a4);
        *(unsigned char *)(((0x2 + (a4 + 0x5)) + 0x0)) = (t1 + t0);
        t2 = 0x0;
        if ((int)(signed char)(t1 + t0) < (int)0x5) {
            t2 = 0x2;
        }
        *(unsigned char *)(((a4 + 0x5) + 0x0)) = ((*(signed char *)(((a4 + 0x5) + 0x0))) | t2);
    }
    if ((*(signed char *)((a4 + 0x5))) != 0) {
        *(unsigned char *)((a4 + 0x2)) = ((*(signed char *)((a4 + 0x2))) + 0x1);
        *(unsigned char *)((a4 + 0x3)) = 0x0;
        *(unsigned char *)((a4 + 0x4)) = 0x0;
        *(unsigned short *)((a4 + 0xA)) = 0x708;
        *(unsigned short *)((a4 + 0xC)) = 0x258;
        return FUN_0c05d978(a4);
    }
    (((struct o7C_uint *)(a4))->v) = 0x5;
    *(unsigned char *)(((a4 + 0x1) + 0x3)) = 0x0;
    *(unsigned char *)(((a4 + 0x1) + 0x2)) = 0x0;
    *(unsigned char *)(((a4 + 0x1) + 0x1)) = 0x0;
    *(unsigned char *)(((a4 + 0x1) + 0x0)) = 0x0;
    return 0x0;
}

int FUN_0c030c94(int a4, int a5, int a6)
{
    int stk[8];
    register int t3;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;
    register int t10;
    register int t60;
    register int t61;
    register int t65;
    register int t68;
    register int t48;
    register int t49;
    register int t50;

    t6 = *(signed char *)0xC5429B4;
    if (t6 == 0) {
        t3 = 0x4;
    }
    if (t6 == 4) {
        t3 = 0x4;
    }
    if ((int)t3 > 0) {
        t5 = 0xC5429B4;
        t7 = 0x4;
        t8 = 0x0;
        t9 = 0xC541CDC;
        for (;;) {
            t10 = (((struct o7C_int *)(t9))->v);
            if (t10 != 0) {
                if (t10 != 1) {
                    if (t10 != 2) {
                        if (t10 != 3) {
                            if (t10 != 4) {
                                if (t10 != 5) {
                                    t48 = t5;
                                    t49 = t6;
                                    t50 = t7;
                                } else {
                                    t6 = t9;
                                    FUN_0c030c2c(t6, t7);
                                    t6 = t9;
                                    FUN_0c0312ee(t6);
                                }
                            } else {
                                t6 = t9;
                                FUN_0c03090c(t6, t7, a6);
                            }
                        } else {
                            t6 = t9;
                            FUN_0c030728(t6);
                            t6 = t9;
                            FUN_0c0311fe(t6);
                        }
                    } else {
                        t6 = t9;
                        FUN_0c03063c(t6, t7);
                        t5 = 0xC03119C;
                        t6 = t9;
                        FUN_0c03119c(t6);
                    }
                } else {
                    t6 = t9;
                    FUN_0c0305d8(t6);
                    t6 = t9;
                    FUN_0c03107c(t6);
                }
            } else {
                t6 = t9;
                FUN_0c0303fc(t6);
                t6 = t9;
                FUN_0c030ffc(t6);
            }
            t8 = (t8 + 0x1);
            t5 = t48;
            t6 = t49;
            t7 = t50;
            t9 = (t9 + 0x98);
            if ((int)t8 >= (int)t3) {
                break;
            }
        }
    }
    (((struct o0_uchar *)0xC542252)->v) = 0x0;
    (((struct o1_uchar *)0xC542252)->v) = 0x0;
    t60 = 0xC541CDC;
    t61 = 0xC541CDC;
    for (;;) {
        t65 = *(signed char *)(((t61 + 0x4A) + 0x1));
        t68 = t65;
        if ((int)(((short)(*(signed char *)0xC542252) * (short)0x64) + (*(signed char *)0xC542253)) < (int)(((short)(*(signed char *)(((t61 + 0x4A) + 0x0))) * (short)0x64) + t65)) {
            (((struct o0_uchar *)0xC542252)->v) = (*(signed char *)(((t60 + 0x4A) + 0x0)));
            (((struct o1_uchar *)0xC542252)->v) = (*(signed char *)((t60 + 0x4B)));
            t68 = 0x5B;
        }
        t61 = (t61 + 0x98);
        t60 = (t60 + 0x98);
        if ((unsigned int)t61 >= (unsigned int)0xC541F3C) {
            break;
        }
    }
    return t68;
}
