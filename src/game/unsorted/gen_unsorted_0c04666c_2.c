/* game/unsorted: functions 0C04666C-0C0472CA, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
int FUN_0c03aeec(int, int, int, int);
int FUN_0c03d3b6(int);
extern int FUN_0c03d44a();
int FUN_0c047064(int, int, int, int);
int FUN_0c047114(void);
int FUN_0c046ae0(int a4, int a5, int a6, int a7);
int FUN_0c046bfa(int a4, int a5, int a6, int a7);
int FUN_0c046d06(int a4, int a5, int a6, int a7);
int FUN_0c046ec2(int a4, int a5, int a6, int a7);

int FUN_0c046ae0(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = *(signed char *)0xC541F44;
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 1) {
            if ((unsigned char)t0 != 2) {
                if ((unsigned char)t0 != 3) {
                    if ((int)(*(short *)0xC541F50) <= (int)0x78) {
                        (((struct o0_uchar *)0xC541F43)->v) = ((*(signed char *)0xC541F43) + 0x1);
                    } else {
                        FUN_0c047064(a4, a5, a6, a7);
                        FUN_0c047114();
                    }
                    (((struct o1_uchar *)0xC541F43)->v) = 0x0;
                    t0 = 0x0;
                } else {
                    t1 = ((int (*)(int, int, int))(FUN_0c03d44a))(0x4, a5, a6);
                    t2 = t1;
                    if (t1 != -1) {
                        if (t1 == 0) {
                            (((struct o2_uchar *)0xC40F820)->v) = 0x3;
                            (((struct o3_uchar *)0xC40F820)->v) = 0x3;
                            FUN_0c03d3b6(0x2);
                            FUN_0c03d3b6(0x3);
                        } else {
                            (((struct o2_uchar *)0xC40F820)->v) = 0x4;
                            (((struct o3_uchar *)0xC40F820)->v) = 0x4;
                        }
                        t1 = *(signed char *)0xC541F44;
                        (((struct o1_uchar *)0xC541F43)->v) = (t1 + 0x1);
                        t2 = (t1 + 0x1);
                    }
                    t0 = t2;
                }
                t1 = t0;
            } else {
                if ((unsigned char)(*(signed char *)0xC40F822) == 2) {
                    t0 = FUN_0c03aeec(a4, a5, a6, a7);
                    t2 = t0;
                    if (t0 != -1) {
                        if ((t0 & 0x10) != 0) {
                            (((struct o1_uchar *)0xC541F43)->v) = ((*(signed char *)0xC541F44) + 0x1);
                            t0 = ((int (*)(int))(FUN_0c03d44a))(0x4);
                            t3 = t0;
                            if (t0 != -1) {
                                if (t0 == 0) {
                                    (((struct o2_uchar *)0xC40F820)->v) = 0x3;
                                    (((struct o3_uchar *)0xC40F820)->v) = 0x3;
                                    FUN_0c03d3b6(0x2);
                                    FUN_0c03d3b6(0x3);
                                } else {
                                    (((struct o2_uchar *)0xC40F820)->v) = 0x4;
                                    (((struct o3_uchar *)0xC40F820)->v) = 0x4;
                                }
                                t0 = *(signed char *)0xC541F44;
                                (((struct o1_uchar *)0xC541F43)->v) = (t0 + 0x1);
                                t3 = (t0 + 0x1);
                            }
                            t0 = t3;
                        } else {
                            (((struct o2_uchar *)0xC40F820)->v) = 0x4;
                            (((struct o3_uchar *)0xC40F820)->v) = 0x4;
                            (((struct o1_uchar *)0xC541F43)->v) = ((*(signed char *)0xC541F44) + 0x1);
                            t3 = *(signed char *)0xC541F44;
                            (((struct o1_uchar *)0xC541F43)->v) = (t3 + 0x1);
                            t0 = (t3 + 0x1);
                        }
                        t2 = t0;
                    }
                    t0 = t2;
                } else {
                    (((struct o1_uchar *)0xC541F43)->v) = ((*(signed char *)0xC541F44) + 0x1);
                    t2 = *(signed char *)0xC541F44;
                    (((struct o1_uchar *)0xC541F43)->v) = (t2 + 0x1);
                    t0 = (t2 + 0x1);
                }
                t1 = t0;
            }
            t0 = t1;
        } else {
            t1 = ((int (*)(int, int, int))(FUN_0c03d44a))(0x2, a5, a6);
            t2 = t1;
            if (t1 != -1) {
                if (t1 == 0) {
                    (((struct o0_uchar *)0xC40F820)->v) = 0x3;
                    (((struct o1_uchar *)0xC40F820)->v) = 0x3;
                    FUN_0c03d3b6(0x0);
                    FUN_0c03d3b6(0x1);
                } else {
                    (((struct o0_uchar *)0xC40F820)->v) = 0x4;
                    (((struct o1_uchar *)0xC40F820)->v) = 0x4;
                }
                t1 = *(signed char *)0xC541F44;
                (((struct o1_uchar *)0xC541F43)->v) = (t1 + 0x1);
                t2 = (t1 + 0x1);
            }
            t0 = t2;
        }
        t1 = t0;
    } else {
        if ((unsigned char)(*(signed char *)0xC40F820) == 2) {
            t0 = FUN_0c03aeec(a4, a5, a6, a7);
            t2 = t0;
            if (t0 != -1) {
                if ((t0 & 0x4) != 0) {
                    (((struct o1_uchar *)0xC541F43)->v) = ((*(signed char *)0xC541F44) + 0x1);
                    t0 = ((int (*)(int))(FUN_0c03d44a))(0x2);
                    t3 = t0;
                    if (t0 != -1) {
                        if (t0 == 0) {
                            (((struct o0_uchar *)0xC40F820)->v) = 0x3;
                            (((struct o1_uchar *)0xC40F820)->v) = 0x3;
                            FUN_0c03d3b6(0x0);
                            FUN_0c03d3b6(0x1);
                        } else {
                            (((struct o0_uchar *)0xC40F820)->v) = 0x4;
                            (((struct o1_uchar *)0xC40F820)->v) = 0x4;
                        }
                        t0 = *(signed char *)0xC541F44;
                        (((struct o1_uchar *)0xC541F43)->v) = (t0 + 0x1);
                        t3 = (t0 + 0x1);
                    }
                    t0 = t3;
                } else {
                    (((struct o0_uchar *)0xC40F820)->v) = 0x4;
                    (((struct o1_uchar *)0xC40F820)->v) = 0x4;
                    (((struct o1_uchar *)0xC541F43)->v) = ((*(signed char *)0xC541F44) + 0x1);
                    t3 = *(signed char *)0xC541F44;
                    (((struct o1_uchar *)0xC541F43)->v) = (t3 + 0x1);
                    t0 = (t3 + 0x1);
                }
                t2 = t0;
            }
            t0 = t2;
        } else {
            (((struct o1_uchar *)0xC541F43)->v) = ((*(signed char *)0xC541F44) + 0x1);
            t2 = *(signed char *)0xC541F44;
            (((struct o1_uchar *)0xC541F43)->v) = (t2 + 0x1);
            t0 = (t2 + 0x1);
        }
        t1 = t0;
    }
    return t1;
}

int FUN_0c046bfa(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = *(signed char *)0xC541F44;
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 1) {
            if ((unsigned char)t0 != 2) {
                if ((unsigned char)t0 != 3) {
                    if ((int)(*(short *)0xC541F50) <= (int)0x78) {
                        (((struct o0_uchar *)0xC541F43)->v) = ((*(signed char *)0xC541F43) + 0x1);
                    } else {
                        FUN_0c047064(a4, a5, a6, a7);
                        FUN_0c047114();
                    }
                    (((struct o1_uchar *)0xC541F43)->v) = 0x0;
                    t0 = 0x0;
                } else {
                    t1 = ((int (*)(int, int, int))(FUN_0c03d44a))(0x4, a5, a6);
                    t2 = t1;
                    if (t1 != -1) {
                        if (t1 == 0) {
                            (((struct o1_uchar *)0xC40F820)->v) = 0x3;
                            FUN_0c03d3b6(0x1);
                        } else {
                            (((struct o1_uchar *)0xC40F820)->v) = 0x4;
                        }
                        t1 = *(signed char *)0xC541F44;
                        (((struct o1_uchar *)0xC541F43)->v) = (t1 + 0x1);
                        t2 = (t1 + 0x1);
                    }
                    t0 = t2;
                }
                t1 = t0;
            } else {
                if ((unsigned char)(*(signed char *)0xC40F821) == 2) {
                    t0 = FUN_0c03aeec(a4, a5, a6, a7);
                    t2 = t0;
                    if (t0 != -1) {
                        if ((t0 & 0x10) != 0) {
                            (((struct o1_uchar *)0xC541F43)->v) = ((*(signed char *)0xC541F44) + 0x1);
                            t0 = ((int (*)(int))(FUN_0c03d44a))(0x4);
                            t3 = t0;
                            if (t0 != -1) {
                                if (t0 == 0) {
                                    (((struct o1_uchar *)0xC40F820)->v) = 0x3;
                                    FUN_0c03d3b6(0x1);
                                } else {
                                    (((struct o1_uchar *)0xC40F820)->v) = 0x4;
                                }
                                t0 = *(signed char *)0xC541F44;
                                (((struct o1_uchar *)0xC541F43)->v) = (t0 + 0x1);
                                t3 = (t0 + 0x1);
                            }
                            t0 = t3;
                        } else {
                            (((struct o1_uchar *)0xC40F820)->v) = 0x4;
                            (((struct o1_uchar *)0xC541F43)->v) = ((*(signed char *)0xC541F44) + 0x1);
                            t3 = *(signed char *)0xC541F44;
                            (((struct o1_uchar *)0xC541F43)->v) = (t3 + 0x1);
                            t0 = (t3 + 0x1);
                        }
                        t2 = t0;
                    }
                    t0 = t2;
                } else {
                    (((struct o1_uchar *)0xC541F43)->v) = ((*(signed char *)0xC541F44) + 0x1);
                    t2 = *(signed char *)0xC541F44;
                    (((struct o1_uchar *)0xC541F43)->v) = (t2 + 0x1);
                    t0 = (t2 + 0x1);
                }
                t1 = t0;
            }
            t0 = t1;
        } else {
            t1 = ((int (*)(int, int, int))(FUN_0c03d44a))(0x2, a5, a6);
            t2 = t1;
            if (t1 != -1) {
                if (t1 == 0) {
                    (((struct o0_uchar *)0xC40F820)->v) = 0x3;
                    FUN_0c03d3b6(0x0);
                } else {
                    (((struct o0_uchar *)0xC40F820)->v) = 0x4;
                }
                t1 = *(signed char *)0xC541F44;
                (((struct o1_uchar *)0xC541F43)->v) = (t1 + 0x1);
                t2 = (t1 + 0x1);
            }
            t0 = t2;
        }
        t1 = t0;
    } else {
        if ((unsigned char)(*(signed char *)0xC40F820) == 2) {
            t0 = FUN_0c03aeec(a4, a5, a6, a7);
            t2 = t0;
            if (t0 != -1) {
                if ((t0 & 0x4) != 0) {
                    (((struct o1_uchar *)0xC541F43)->v) = ((*(signed char *)0xC541F44) + 0x1);
                    t0 = ((int (*)(int))(FUN_0c03d44a))(0x2);
                    t3 = t0;
                    if (t0 != -1) {
                        if (t0 == 0) {
                            (((struct o0_uchar *)0xC40F820)->v) = 0x3;
                            FUN_0c03d3b6(0x0);
                        } else {
                            (((struct o0_uchar *)0xC40F820)->v) = 0x4;
                        }
                        t0 = *(signed char *)0xC541F44;
                        (((struct o1_uchar *)0xC541F43)->v) = (t0 + 0x1);
                        t3 = (t0 + 0x1);
                    }
                    t0 = t3;
                } else {
                    (((struct o0_uchar *)0xC40F820)->v) = 0x4;
                    (((struct o1_uchar *)0xC541F43)->v) = ((*(signed char *)0xC541F44) + 0x1);
                    t3 = *(signed char *)0xC541F44;
                    (((struct o1_uchar *)0xC541F43)->v) = (t3 + 0x1);
                    t0 = (t3 + 0x1);
                }
                t2 = t0;
            }
            t0 = t2;
        } else {
            (((struct o1_uchar *)0xC541F43)->v) = ((*(signed char *)0xC541F44) + 0x1);
            t2 = *(signed char *)0xC541F44;
            (((struct o1_uchar *)0xC541F43)->v) = (t2 + 0x1);
            t0 = (t2 + 0x1);
        }
        t1 = t0;
    }
    return t1;
}

int FUN_0c046d06(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t0 = *(signed char *)0xC541F44;
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 1) {
            if ((unsigned char)t0 != 2) {
                if ((unsigned char)t0 != 3) {
                    if ((unsigned char)t0 != 4) {
                        if ((unsigned char)t0 != 5) {
                            if ((unsigned char)t0 != 6) {
                                if ((unsigned char)t0 == 7) {
                                    t0 = ((int (*)(int, int, int))(FUN_0c03d44a))(0x5, a5, a6);
                                    t1 = t0;
                                    if (t0 != -1) {
                                        if (t0 == 0) {
                                            (((struct o3_uchar *)0xC40F820)->v) = 0x3;
                                            FUN_0c03d3b6(0x3);
                                        } else {
                                            (((struct o3_uchar *)0xC40F820)->v) = 0x4;
                                        }
                                        t0 = *(signed char *)0xC541F44;
                                        (((struct o1_uchar *)0xC541F43)->v) = (t0 + 0x1);
                                        t1 = (t0 + 0x1);
                                    }
                                    t0 = t1;
                                } else {
                                    if ((int)(*(short *)0xC541F50) <= (int)0x78) {
                                        (((struct o0_uchar *)0xC541F43)->v) = ((*(signed char *)0xC541F43) + 0x1);
                                    } else {
                                        FUN_0c047064(a4, a5, a6, a7);
                                        FUN_0c047114();
                                    }
                                    (((struct o1_uchar *)0xC541F43)->v) = 0x0;
                                    t0 = 0x0;
                                }
                                t1 = t0;
                            } else {
                                if ((unsigned char)(*(signed char *)0xC40F823) == 2) {
                                    t0 = FUN_0c03aeec(a4, a5, a6, a7);
                                    t2 = t0;
                                    if (t0 != -1) {
                                        if ((t0 & 0x20) != 0) {
                                            (((struct o1_uchar *)0xC541F43)->v) = ((*(signed char *)0xC541F44) + 0x1);
                                            t0 = ((int (*)(int))(FUN_0c03d44a))(0x5);
                                            t3 = t0;
                                            if (t0 != -1) {
                                                if (t0 == 0) {
                                                    (((struct o3_uchar *)0xC40F820)->v) = 0x3;
                                                    FUN_0c03d3b6(0x3);
                                                } else {
                                                    (((struct o3_uchar *)0xC40F820)->v) = 0x4;
                                                }
                                                t0 = *(signed char *)0xC541F44;
                                                (((struct o1_uchar *)0xC541F43)->v) = (t0 + 0x1);
                                                t3 = (t0 + 0x1);
                                            }
                                            t0 = t3;
                                        } else {
                                            (((struct o3_uchar *)0xC40F820)->v) = 0x4;
                                            (((struct o1_uchar *)0xC541F43)->v) = ((*(signed char *)0xC541F44) + 0x1);
                                            t3 = *(signed char *)0xC541F44;
                                            (((struct o1_uchar *)0xC541F43)->v) = (t3 + 0x1);
                                            t0 = (t3 + 0x1);
                                        }
                                        t2 = t0;
                                    }
                                    t0 = t2;
                                } else {
                                    (((struct o1_uchar *)0xC541F43)->v) = ((*(signed char *)0xC541F44) + 0x1);
                                    t2 = *(signed char *)0xC541F44;
                                    (((struct o1_uchar *)0xC541F43)->v) = (t2 + 0x1);
                                    t0 = (t2 + 0x1);
                                }
                                t1 = t0;
                            }
                            t0 = t1;
                        } else {
                            t1 = ((int (*)(int, int, int))(FUN_0c03d44a))(0x4, a5, a6);
                            t2 = t1;
                            if (t1 != -1) {
                                if (t1 == 0) {
                                    (((struct o2_uchar *)0xC40F820)->v) = 0x3;
                                    FUN_0c03d3b6(0x2);
                                } else {
                                    (((struct o2_uchar *)0xC40F820)->v) = 0x4;
                                }
                                t1 = *(signed char *)0xC541F44;
                                (((struct o1_uchar *)0xC541F43)->v) = (t1 + 0x1);
                                t2 = (t1 + 0x1);
                            }
                            t0 = t2;
                        }
                        t1 = t0;
                    } else {
                        if ((unsigned char)(*(signed char *)0xC40F822) == 2) {
                            t0 = FUN_0c03aeec(a4, a5, a6, a7);
                            t2 = t0;
                            if (t0 != -1) {
                                if ((t0 & 0x10) != 0) {
                                    (((struct o1_uchar *)0xC541F43)->v) = ((*(signed char *)0xC541F44) + 0x1);
                                    t0 = ((int (*)(int))(FUN_0c03d44a))(0x4);
                                    t3 = t0;
                                    if (t0 != -1) {
                                        if (t0 == 0) {
                                            (((struct o2_uchar *)0xC40F820)->v) = 0x3;
                                            FUN_0c03d3b6(0x2);
                                        } else {
                                            (((struct o2_uchar *)0xC40F820)->v) = 0x4;
                                        }
                                        t0 = *(signed char *)0xC541F44;
                                        (((struct o1_uchar *)0xC541F43)->v) = (t0 + 0x1);
                                        t3 = (t0 + 0x1);
                                    }
                                    t0 = t3;
                                } else {
                                    (((struct o2_uchar *)0xC40F820)->v) = 0x4;
                                    (((struct o1_uchar *)0xC541F43)->v) = ((*(signed char *)0xC541F44) + 0x1);
                                    t3 = *(signed char *)0xC541F44;
                                    (((struct o1_uchar *)0xC541F43)->v) = (t3 + 0x1);
                                    t0 = (t3 + 0x1);
                                }
                                t2 = t0;
                            }
                            t0 = t2;
                        } else {
                            (((struct o1_uchar *)0xC541F43)->v) = ((*(signed char *)0xC541F44) + 0x1);
                            t2 = *(signed char *)0xC541F44;
                            (((struct o1_uchar *)0xC541F43)->v) = (t2 + 0x1);
                            t0 = (t2 + 0x1);
                        }
                        t1 = t0;
                    }
                    t0 = t1;
                } else {
                    t1 = ((int (*)(int, int, int))(FUN_0c03d44a))(0x3, a5, a6);
                    t2 = t1;
                    if (t1 == -1) {
                    } else {
                        if (t1 == 0) {
                            (((struct o1_uchar *)0xC40F820)->v) = 0x3;
                            FUN_0c03d3b6(0x1);
                        } else {
                            (((struct o1_uchar *)0xC40F820)->v) = 0x4;
                        }
                        t1 = *(signed char *)0xC541F44;
                        (((struct o1_uchar *)0xC541F43)->v) = (t1 + 0x1);
                        t2 = (t1 + 0x1);
                    }
                    t0 = t2;
                }
                t1 = t0;
            } else {
                if ((unsigned char)(*(signed char *)0xC40F821) == 2) {
                    t0 = FUN_0c03aeec(a4, a5, a6, a7);
                    t2 = t0;
                    if (t0 == -1) {
                    } else {
                        if ((t0 & 0x8) != 0) {
                            (((struct o1_uchar *)0xC541F43)->v) = ((*(signed char *)0xC541F44) + 0x1);
                            t0 = ((int (*)(int))(FUN_0c03d44a))(0x3);
                            t3 = t0;
                            if (t0 == -1) {
                            } else {
                                if (t0 == 0) {
                                    (((struct o1_uchar *)0xC40F820)->v) = 0x3;
                                    FUN_0c03d3b6(0x1);
                                } else {
                                    (((struct o1_uchar *)0xC40F820)->v) = 0x4;
                                }
                                t0 = *(signed char *)0xC541F44;
                                (((struct o1_uchar *)0xC541F43)->v) = (t0 + 0x1);
                                t3 = (t0 + 0x1);
                            }
                            t0 = t3;
                        } else {
                            (((struct o1_uchar *)0xC40F820)->v) = 0x4;
                            (((struct o1_uchar *)0xC541F43)->v) = ((*(signed char *)0xC541F44) + 0x1);
                            t3 = *(signed char *)0xC541F44;
                            (((struct o1_uchar *)0xC541F43)->v) = (t3 + 0x1);
                            t0 = (t3 + 0x1);
                        }
                        t2 = t0;
                    }
                    t0 = t2;
                } else {
                    (((struct o1_uchar *)0xC541F43)->v) = ((*(signed char *)0xC541F44) + 0x1);
                    t2 = *(signed char *)0xC541F44;
                    (((struct o1_uchar *)0xC541F43)->v) = (t2 + 0x1);
                    t0 = (t2 + 0x1);
                }
                t1 = t0;
            }
            t0 = t1;
        } else {
            t1 = ((int (*)(int, int, int))(FUN_0c03d44a))(0x2, a5, a6);
            t2 = t1;
            if (t1 == -1) {
            } else {
                if (t1 == 0) {
                    (((struct o0_uchar *)0xC40F820)->v) = 0x3;
                    FUN_0c03d3b6(0x0);
                } else {
                    (((struct o0_uchar *)0xC40F820)->v) = 0x4;
                }
                t1 = *(signed char *)0xC541F44;
                (((struct o1_uchar *)0xC541F43)->v) = (t1 + 0x1);
                t2 = (t1 + 0x1);
            }
            t0 = t2;
        }
        t1 = t0;
    } else {
        if ((unsigned char)(*(signed char *)0xC40F820) != 2) {
            (((struct o1_uchar *)0xC541F43)->v) = ((*(signed char *)0xC541F44) + 0x1);
            t0 = *(signed char *)0xC541F44;
            (((struct o1_uchar *)0xC541F43)->v) = (t0 + 0x1);
            t2 = (t0 + 0x1);
        } else {
            t0 = FUN_0c03aeec(a4, a5, a6, a7);
            t3 = t0;
            if (t0 == -1) {
            } else {
                if ((t0 & 0x4) != 0) {
                    (((struct o1_uchar *)0xC541F43)->v) = ((*(signed char *)0xC541F44) + 0x1);
                    t0 = ((int (*)(int))(FUN_0c03d44a))(0x2);
                    t4 = t0;
                    if (t0 == -1) {
                    } else {
                        if (t0 == 0) {
                            (((struct o0_uchar *)0xC40F820)->v) = 0x3;
                            FUN_0c03d3b6(0x0);
                        } else {
                            (((struct o0_uchar *)0xC40F820)->v) = 0x4;
                        }
                        t0 = *(signed char *)0xC541F44;
                        (((struct o1_uchar *)0xC541F43)->v) = (t0 + 0x1);
                        t4 = (t0 + 0x1);
                    }
                    t0 = t4;
                } else {
                    (((struct o0_uchar *)0xC40F820)->v) = 0x4;
                    (((struct o1_uchar *)0xC541F43)->v) = ((*(signed char *)0xC541F44) + 0x1);
                    t4 = *(signed char *)0xC541F44;
                    (((struct o1_uchar *)0xC541F43)->v) = (t4 + 0x1);
                    t0 = (t4 + 0x1);
                }
                t3 = t0;
            }
            t2 = t3;
        }
        t1 = t2;
    }
    return t1;
}

int FUN_0c046ec2(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t0 = *(signed char *)0xC541F44;
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 1) {
            if ((unsigned char)t0 != 2) {
                if ((unsigned char)t0 != 3) {
                    if ((unsigned char)t0 != 4) {
                        if ((unsigned char)t0 != 5) {
                            if ((unsigned char)t0 != 6) {
                                if ((unsigned char)t0 == 7) {
                                    t0 = ((int (*)(int, int, int))(FUN_0c03d44a))(0x5, a5, a6);
                                    t1 = t0;
                                    if (t0 != -1) {
                                        if (t0 == 0) {
                                            (((struct o1_uchar *)0xC40F820)->v) = 0x3;
                                            FUN_0c03d3b6(0x1);
                                        } else {
                                            (((struct o1_uchar *)0xC40F820)->v) = 0x4;
                                        }
                                        t0 = *(signed char *)0xC541F44;
                                        (((struct o1_uchar *)0xC541F43)->v) = (t0 + 0x1);
                                        t1 = (t0 + 0x1);
                                    }
                                    t0 = t1;
                                } else {
                                    if ((int)(*(short *)0xC541F50) <= (int)0x78) {
                                        (((struct o0_uchar *)0xC541F43)->v) = ((*(signed char *)0xC541F43) + 0x1);
                                    } else {
                                        FUN_0c047064(a4, a5, a6, a7);
                                        FUN_0c047114();
                                    }
                                    (((struct o1_uchar *)0xC541F43)->v) = 0x0;
                                    t0 = 0x0;
                                }
                                t1 = t0;
                            } else {
                                t0 = FUN_0c03aeec(a4, a5, a6, a7);
                                t2 = t0;
                                if (t0 != -1) {
                                    if ((t0 & 0x20) != 0) {
                                        (((struct o1_uchar *)0xC541F43)->v) = ((*(signed char *)0xC541F44) + 0x1);
                                        t0 = ((int (*)(int))(FUN_0c03d44a))(0x5);
                                        t3 = t0;
                                        if (t0 != -1) {
                                            if (t0 == 0) {
                                                (((struct o1_uchar *)0xC40F820)->v) = 0x3;
                                                FUN_0c03d3b6(0x1);
                                            } else {
                                                (((struct o1_uchar *)0xC40F820)->v) = 0x4;
                                            }
                                            t0 = *(signed char *)0xC541F44;
                                            (((struct o1_uchar *)0xC541F43)->v) = (t0 + 0x1);
                                            t3 = (t0 + 0x1);
                                        }
                                        t0 = t3;
                                    } else {
                                        (((struct o1_uchar *)0xC40F820)->v) = 0x4;
                                        (((struct o1_uchar *)0xC541F43)->v) = ((*(signed char *)0xC541F44) + 0x1);
                                        t3 = *(signed char *)0xC541F44;
                                        (((struct o1_uchar *)0xC541F43)->v) = (t3 + 0x1);
                                        t0 = (t3 + 0x1);
                                    }
                                    t2 = t0;
                                }
                                t1 = t2;
                            }
                            t0 = t1;
                        } else {
                            t1 = ((int (*)(int, int, int))(FUN_0c03d44a))(0x4, a5, a6);
                            t2 = t1;
                            if (t1 != -1) {
                                if (t1 == 0) {
                                    (((struct o1_uchar *)0xC40F820)->v) = 0x3;
                                    FUN_0c03d3b6(0x1);
                                } else {
                                    (((struct o1_uchar *)0xC40F820)->v) = 0x4;
                                }
                                (((struct o1_uchar *)0xC541F43)->v) = ((*(signed char *)0xC541F44) + 0x1);
                                (((struct o1_uchar *)0xC541F43)->v) = ((*(signed char *)0xC541F44) + 0x1);
                                t1 = *(signed char *)0xC541F44;
                                (((struct o1_uchar *)0xC541F43)->v) = (t1 + 0x1);
                                t2 = (t1 + 0x1);
                            }
                            t0 = t2;
                        }
                        t1 = t0;
                    } else {
                        if ((unsigned char)(*(signed char *)0xC40F821) != 2) {
                            (((struct o1_uchar *)0xC541F43)->v) = ((*(signed char *)0xC541F44) + 0x1);
                            (((struct o1_uchar *)0xC541F43)->v) = ((*(signed char *)0xC541F44) + 0x1);
                            (((struct o1_uchar *)0xC541F43)->v) = ((*(signed char *)0xC541F44) + 0x1);
                            t0 = *(signed char *)0xC541F44;
                            (((struct o1_uchar *)0xC541F43)->v) = (t0 + 0x1);
                            t2 = (t0 + 0x1);
                        } else {
                            t0 = FUN_0c03aeec(a4, a5, a6, a7);
                            t3 = t0;
                            if (t0 != -1) {
                                if ((t0 & 0x10) != 0) {
                                    (((struct o1_uchar *)0xC541F43)->v) = ((*(signed char *)0xC541F44) + 0x1);
                                    t0 = ((int (*)(int))(FUN_0c03d44a))(0x4);
                                    t4 = t0;
                                    if (t0 != -1) {
                                        if (t0 == 0) {
                                            (((struct o1_uchar *)0xC40F820)->v) = 0x3;
                                            FUN_0c03d3b6(0x1);
                                        } else {
                                            (((struct o1_uchar *)0xC40F820)->v) = 0x4;
                                        }
                                        (((struct o1_uchar *)0xC541F43)->v) = ((*(signed char *)0xC541F44) + 0x1);
                                        (((struct o1_uchar *)0xC541F43)->v) = ((*(signed char *)0xC541F44) + 0x1);
                                        t0 = *(signed char *)0xC541F44;
                                        (((struct o1_uchar *)0xC541F43)->v) = (t0 + 0x1);
                                        t4 = (t0 + 0x1);
                                    }
                                    t0 = t4;
                                } else {
                                    (((struct o1_uchar *)0xC541F43)->v) = ((*(signed char *)0xC541F44) + 0x1);
                                    t4 = *(signed char *)0xC541F44;
                                    (((struct o1_uchar *)0xC541F43)->v) = (t4 + 0x1);
                                    t0 = (t4 + 0x1);
                                }
                                t3 = t0;
                            }
                            t2 = t3;
                        }
                        t1 = t2;
                    }
                    t0 = t1;
                } else {
                    t1 = ((int (*)(int, int, int))(FUN_0c03d44a))(0x3, a5, a6);
                    t2 = t1;
                    if (t1 != -1) {
                        if (t1 == 0) {
                            (((struct o0_uchar *)0xC40F820)->v) = 0x3;
                            FUN_0c03d3b6(0x0);
                        } else {
                            (((struct o0_uchar *)0xC40F820)->v) = 0x4;
                        }
                        t1 = *(signed char *)0xC541F44;
                        (((struct o1_uchar *)0xC541F43)->v) = (t1 + 0x1);
                        t2 = (t1 + 0x1);
                    }
                    t0 = t2;
                }
                t1 = t0;
            } else {
                t0 = FUN_0c03aeec(a4, a5, a6, a7);
                t2 = t0;
                if (t0 == -1) {
                } else {
                    if ((t0 & 0x8) != 0) {
                        (((struct o1_uchar *)0xC541F43)->v) = ((*(signed char *)0xC541F44) + 0x1);
                        t0 = ((int (*)(int))(FUN_0c03d44a))(0x3);
                        t3 = t0;
                        if (t0 != -1) {
                            if (t0 == 0) {
                                (((struct o0_uchar *)0xC40F820)->v) = 0x3;
                                FUN_0c03d3b6(0x0);
                            } else {
                                (((struct o0_uchar *)0xC40F820)->v) = 0x4;
                            }
                            t0 = *(signed char *)0xC541F44;
                            (((struct o1_uchar *)0xC541F43)->v) = (t0 + 0x1);
                            t3 = (t0 + 0x1);
                        }
                        t0 = t3;
                    } else {
                        (((struct o0_uchar *)0xC40F820)->v) = 0x4;
                        (((struct o1_uchar *)0xC541F43)->v) = ((*(signed char *)0xC541F44) + 0x1);
                        t3 = *(signed char *)0xC541F44;
                        (((struct o1_uchar *)0xC541F43)->v) = (t3 + 0x1);
                        t0 = (t3 + 0x1);
                    }
                    t2 = t0;
                }
                t1 = t2;
            }
            t0 = t1;
        } else {
            t1 = ((int (*)(int, int, int))(FUN_0c03d44a))(0x2, a5, a6);
            t2 = t1;
            if (t1 == -1) {
            } else {
                if (t1 == 0) {
                    (((struct o0_uchar *)0xC40F820)->v) = 0x3;
                    FUN_0c03d3b6(0x0);
                } else {
                    (((struct o0_uchar *)0xC40F820)->v) = 0x4;
                }
                (((struct o1_uchar *)0xC541F43)->v) = ((*(signed char *)0xC541F44) + 0x1);
                (((struct o1_uchar *)0xC541F43)->v) = ((*(signed char *)0xC541F44) + 0x1);
                t1 = *(signed char *)0xC541F44;
                (((struct o1_uchar *)0xC541F43)->v) = (t1 + 0x1);
                t2 = (t1 + 0x1);
            }
            t0 = t2;
        }
        t1 = t0;
    } else {
        if ((unsigned char)(*(signed char *)0xC40F820) == 2) {
            t0 = FUN_0c03aeec(a4, a5, a6, a7);
            t2 = t0;
            if (t0 == -1) {
            } else {
                if ((t0 & 0x4) != 0) {
                    (((struct o1_uchar *)0xC541F43)->v) = ((*(signed char *)0xC541F44) + 0x1);
                    t0 = ((int (*)(int))(FUN_0c03d44a))(0x2);
                    t3 = t0;
                    if (t0 == -1) {
                    } else {
                        if (t0 == 0) {
                            (((struct o0_uchar *)0xC40F820)->v) = 0x3;
                            FUN_0c03d3b6(0x0);
                        } else {
                            (((struct o0_uchar *)0xC40F820)->v) = 0x4;
                        }
                        (((struct o1_uchar *)0xC541F43)->v) = ((*(signed char *)0xC541F44) + 0x1);
                        (((struct o1_uchar *)0xC541F43)->v) = ((*(signed char *)0xC541F44) + 0x1);
                        t0 = *(signed char *)0xC541F44;
                        (((struct o1_uchar *)0xC541F43)->v) = (t0 + 0x1);
                        t3 = (t0 + 0x1);
                    }
                    t0 = t3;
                } else {
                    (((struct o1_uchar *)0xC541F43)->v) = ((*(signed char *)0xC541F44) + 0x1);
                    t3 = *(signed char *)0xC541F44;
                    (((struct o1_uchar *)0xC541F43)->v) = (t3 + 0x1);
                    t0 = (t3 + 0x1);
                }
                t2 = t0;
            }
            t0 = t2;
        } else {
            (((struct o1_uchar *)0xC541F43)->v) = ((*(signed char *)0xC541F44) + 0x1);
            (((struct o1_uchar *)0xC541F43)->v) = ((*(signed char *)0xC541F44) + 0x1);
            (((struct o1_uchar *)0xC541F43)->v) = ((*(signed char *)0xC541F44) + 0x1);
            t2 = *(signed char *)0xC541F44;
            (((struct o1_uchar *)0xC541F43)->v) = (t2 + 0x1);
            t0 = (t2 + 0x1);
        }
        t1 = t0;
    }
    return t1;
}
