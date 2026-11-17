/* game/demo: functions 0C0460FC-0C0463FC, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
int FUN_0c02cc90(int);
int FUN_0c03ae7a(int, int, int, int);
int FUN_0c03aeec(int, int, int, int);
int FUN_0c03b40a(void);
int FUN_0c03b9d0(int);
int FUN_0c03d358(int);
int FUN_0c03d3b6(int);
extern int FUN_0c03d44a();
int FUN_0c0460fc(void);
int FUN_0c046238(void);
int FUN_0c046266(int a4, int a5, int a6, int a7);

int FUN_0c0460fc(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    (((struct o0_uchar *)0xC83C61C)->v) = (*(signed char *)0xC542B8A);
    t0 = *(signed char *)0xC542B8B;
    (((struct o1_uchar *)0xC83C61C)->v) = t0;
    t1 = t0;
    t0 = 0x0;
    for (;;) {
        if ((*(signed char *)(((0xC542A14 + t0) + 0x0))) != 0) {
            t2 = t0;
            t1 = 0x20;
            t1 = ((int)((int)t2 / (int)t1));
            t2 = 0x1;
            t2 = ((int)t2 << (int)t0);
            *(unsigned int *)((((t1 << 2) + 0xC83C620) + 0x0)) = ((*(int *)((((t1 << 2) + 0xC83C620) + 0x0))) | t2);
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x8F) {
            break;
        }
    }
    t0 = 0x0;
    for (;;) {
        t1 = 0x0;
        for (;;) {
            t2 = 0x0;
            for (;;) {
                *(unsigned char *)((t2 + ((0xC83C630 + (t0 * 0x17)) + (t1 << 1)))) = (*(signed char *)(((((0xC5429D0 + (t0 * 0xE)) + (t1 << 1)) + t2) + 0x0)));
                t2 = (t2 + 0x1);
                if ((int)t2 >= (int)0x2) {
                    break;
                }
            }
            t1 = (t1 + 0x1);
            if ((int)t1 >= (int)0x7) {
                break;
            }
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x2) {
            break;
        }
    }
    t0 = 0x0;
    for (;;) {
        t1 = 0x0;
        for (;;) {
            t2 = *(signed char *)((t1 + (0xC54234A + ((t0 << 2) + t0))));
            t3 = (((0xC83C630 + (t0 * 0x17)) + 0x12) + t1);
            t1 = (t1 + 0x1);
            *(unsigned char *)((t3 + 0x0)) = t2;
            if ((int)t1 >= (int)0x5) {
                break;
            }
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x2) {
            break;
        }
    }
    t0 = 0x0;
    for (;;) {
        t2 = 0x0;
        for (;;) {
            t3 = *(signed char *)((t2 + (0xC542367 + (t0 << 2))));
            t4 = (((0xC83C630 + (t0 * 0x17)) + 0xE) + t2);
            t2 = (t2 + 0x1);
            *(unsigned char *)((t4 + 0x0)) = t3;
            if ((int)t2 >= (int)0x4) {
                break;
            }
        }
        t1 = (0xC542367 + (t0 << 2));
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x2) {
            break;
        }
    }
    return t1;
}

int FUN_0c046238(void)
{
    (((struct o0_uchar *)0xC40F824)->v) = 0x0;
    (((struct o1_uchar *)0xC40F824)->v) = 0x0;
    (((struct o2_uchar *)0xC40F824)->v) = 0x0;
    (((struct o3_uchar *)0xC40F824)->v) = 0x0;
    FUN_0c03b40a();
    FUN_0c03d358(0x0);
    FUN_0c03d358(0x1);
    return FUN_0c02cc90(0x0);
}

int FUN_0c046266(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)0xC40F824;
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 1) {
            if ((unsigned char)t0 != 2) {
                if ((unsigned char)t0 != 3) {
                    if ((unsigned char)t0 != 4) {
                        if ((unsigned char)t0 != 5) {
                            if ((unsigned char)t0 != 6) {
                                if ((unsigned char)t0 != 7) {
                                    if ((unsigned char)t0 == 8) {
                                        t1 = FUN_0c03aeec(a4, a5, a6, a7);
                                        if (t1 != -1) {
                                            if ((t1 & 0x8) != 0) {
                                                (((struct o0_uchar *)0xC40F824)->v) = ((*(signed char *)0xC40F824) + 0x1);
                                                t1 = ((int (*)(int))(FUN_0c03d44a))(0x3);
                                                if (t1 != -1) {
                                                    if (t1 == 0) {
                                                        FUN_0c03d3b6(0x1);
                                                        (((struct o3_uchar *)0xC40F824)->v) = 0x2;
                                                    }
                                                    (((struct o0_uchar *)0xC40F824)->v) = ((*(signed char *)0xC40F824) + 0x1);
                                                }
                                            } else {
                                                (((struct o0_uchar *)0xC40F824)->v) = ((*(signed char *)0xC40F824) + 0x1);
                                                (((struct o0_uchar *)0xC40F824)->v) = ((*(signed char *)0xC40F824) + 0x1);
                                            }
                                        }
                                    } else {
                                        if ((unsigned char)t0 == 9) {
                                            t0 = ((int (*)(int, int, int))(FUN_0c03d44a))(0x3, a5, a6);
                                            if (t0 != -1) {
                                                if (t0 == 0) {
                                                    FUN_0c03d3b6(0x1);
                                                    (((struct o3_uchar *)0xC40F824)->v) = 0x2;
                                                }
                                                (((struct o0_uchar *)0xC40F824)->v) = ((*(signed char *)0xC40F824) + 0x1);
                                            }
                                        } else {
                                            FUN_0c0460fc();
                                            *(unsigned char *)((a4 + 0x0)) = (*(signed char *)0xC40F826);
                                            *(unsigned char *)((a4 + 0x1)) = (*(signed char *)0xC40F827);
                                            (((struct o1_uchar *)0xC40F824)->v) = 0x1;
                                        }
                                    }
                                } else {
                                    t0 = ((int (*)(int, int, int))(FUN_0c03d44a))(0x2, a5, a6);
                                    if (t0 != -1) {
                                        if (t0 == 0) {
                                            FUN_0c03d3b6(0x1);
                                            (((struct o3_uchar *)0xC40F824)->v) = 0x1;
                                            (((struct o0_uchar *)0xC40F824)->v) = ((*(signed char *)0xC40F824) + 0x1);
                                            (((struct o0_uchar *)0xC40F824)->v) = ((*(signed char *)0xC40F824) + 0x1);
                                        }
                                        (((struct o0_uchar *)0xC40F824)->v) = ((*(signed char *)0xC40F824) + 0x1);
                                    }
                                }
                            } else {
                                t0 = FUN_0c03aeec(a4, a5, a6, a7);
                                if (t0 != -1) {
                                    if ((t0 & 0x4) != 0) {
                                        (((struct o0_uchar *)0xC40F824)->v) = ((*(signed char *)0xC40F824) + 0x1);
                                        t0 = ((int (*)(int))(FUN_0c03d44a))(0x2);
                                        if (t0 != -1) {
                                            if (t0 == 0) {
                                                FUN_0c03d3b6(0x1);
                                                (((struct o3_uchar *)0xC40F824)->v) = 0x1;
                                                (((struct o0_uchar *)0xC40F824)->v) = ((*(signed char *)0xC40F824) + 0x1);
                                                (((struct o0_uchar *)0xC40F824)->v) = ((*(signed char *)0xC40F824) + 0x1);
                                            }
                                            (((struct o0_uchar *)0xC40F824)->v) = ((*(signed char *)0xC40F824) + 0x1);
                                        }
                                    } else {
                                        (((struct o0_uchar *)0xC40F824)->v) = ((*(signed char *)0xC40F824) + 0x1);
                                        (((struct o0_uchar *)0xC40F824)->v) = ((*(signed char *)0xC40F824) + 0x1);
                                    }
                                }
                            }
                        } else {
                            t0 = ((int (*)(int, int, int))(FUN_0c03d44a))(0x1, a5, a6);
                            if (t0 != -1) {
                                if (t0 == 0) {
                                    FUN_0c03d3b6(0x0);
                                    (((struct o2_uchar *)0xC40F824)->v) = 0x2;
                                }
                                (((struct o0_uchar *)0xC40F824)->v) = ((*(signed char *)0xC40F824) + 0x1);
                            }
                        }
                    } else {
                        t0 = FUN_0c03aeec(a4, a5, a6, a7);
                        if (t0 != -1) {
                            if ((t0 & 0x2) != 0) {
                                (((struct o0_uchar *)0xC40F824)->v) = ((*(signed char *)0xC40F824) + 0x1);
                                t0 = ((int (*)(int))(FUN_0c03d44a))(0x1);
                                if (t0 != -1) {
                                    if (t0 == 0) {
                                        FUN_0c03d3b6(0x0);
                                        (((struct o2_uchar *)0xC40F824)->v) = 0x2;
                                    }
                                    (((struct o0_uchar *)0xC40F824)->v) = ((*(signed char *)0xC40F824) + 0x1);
                                }
                            } else {
                                (((struct o0_uchar *)0xC40F824)->v) = ((*(signed char *)0xC40F824) + 0x1);
                                (((struct o0_uchar *)0xC40F824)->v) = ((*(signed char *)0xC40F824) + 0x1);
                            }
                        }
                    }
                } else {
                    t0 = ((int (*)(int, int, int))(FUN_0c03d44a))(0x0, a5, a6);
                    if (t0 != -1) {
                        if (t0 == 0) {
                            FUN_0c03d3b6(0x0);
                            (((struct o2_uchar *)0xC40F824)->v) = 0x1;
                            (((struct o0_uchar *)0xC40F824)->v) = ((*(signed char *)0xC40F824) + 0x1);
                            (((struct o0_uchar *)0xC40F824)->v) = ((*(signed char *)0xC40F824) + 0x1);
                        }
                        (((struct o0_uchar *)0xC40F824)->v) = ((*(signed char *)0xC40F824) + 0x1);
                    }
                }
            } else {
                t0 = FUN_0c03aeec(a4, a5, a6, a7);
                if (t0 == -1) {
                } else {
                    if ((t0 & 0x1) != 0) {
                        (((struct o0_uchar *)0xC40F824)->v) = ((*(signed char *)0xC40F824) + 0x1);
                        t0 = ((int (*)(int))(FUN_0c03d44a))(0x0);
                        if (t0 != -1) {
                            if (t0 == 0) {
                                FUN_0c03d3b6(0x0);
                                (((struct o2_uchar *)0xC40F824)->v) = 0x1;
                                (((struct o0_uchar *)0xC40F824)->v) = ((*(signed char *)0xC40F824) + 0x1);
                                (((struct o0_uchar *)0xC40F824)->v) = ((*(signed char *)0xC40F824) + 0x1);
                            }
                            (((struct o0_uchar *)0xC40F824)->v) = ((*(signed char *)0xC40F824) + 0x1);
                        }
                    } else {
                        (((struct o0_uchar *)0xC40F824)->v) = ((*(signed char *)0xC40F824) + 0x1);
                        (((struct o0_uchar *)0xC40F824)->v) = ((*(signed char *)0xC40F824) + 0x1);
                    }
                }
            }
        } else {
            t0 = FUN_0c03b9d0(0x0);
            if (t0 == -1) {
            } else {
                (((struct o0_uchar *)0xC40F824)->v) = ((*(signed char *)0xC40F824) + 0x1);
            }
        }
    } else {
        t0 = FUN_0c03ae7a(a4, a5, a6, a7);
        if (t0 == -1) {
        } else {
            if ((t0 & 0x1) == 0) {
                (((struct o0_uchar *)0xC40F824)->v) = ((*(signed char *)0xC40F824) + 0x1);
                (((struct o0_uchar *)0xC40F824)->v) = ((*(signed char *)0xC40F824) + 0x1);
            } else {
                (((struct o0_uchar *)0xC40F824)->v) = ((*(signed char *)0xC40F824) + 0x1);
                t0 = FUN_0c03b9d0(0x0);
                if (t0 == -1) {
                } else {
                    (((struct o0_uchar *)0xC40F824)->v) = ((*(signed char *)0xC40F824) + 0x1);
                }
            }
        }
    }
    return (*(signed char *)0xC40F825);
}
