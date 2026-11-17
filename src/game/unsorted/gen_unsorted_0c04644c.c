/* game/unsorted: functions 0C04644C-0C046664, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
int FUN_0c03aeec(int, int, int, int);
int FUN_0c03d3b6(int);
extern int FUN_0c03d44a();
int FUN_0c04644c(int a4, int a5, int a6, int a7);

int FUN_0c04644c(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)0xC40F824;
    if ((unsigned int)(unsigned char)t0 >= (unsigned int)0x10) {
        (((struct o1_uchar *)0xC40F824)->v) = 0x1;
    } else {
        switch (((unsigned char)t0 << 1)) {
            case 0:
            {
                t0 = FUN_0c03aeec(a4, a5, a6, a7);
                if (t0 == -1) {
                } else {
                    if ((t0 & 0x1) == 0) {
                        (((struct o0_uchar *)0xC40F824)->v) = ((*(signed char *)0xC40F824) + 0x1);
                        (((struct o0_uchar *)0xC40F824)->v) = ((*(signed char *)0xC40F824) + 0x1);
                    } else {
                        (((struct o0_uchar *)0xC40F824)->v) = ((*(signed char *)0xC40F824) + 0x1);
                        t0 = ((int (*)(int))(FUN_0c03d44a))(0x0);
                        if (t0 == -1) {
                        } else {
                            if (t0 != 0) {
                            } else {
                                FUN_0c03d3b6(0x0);
                            }
                            (((struct o0_uchar *)0xC40F824)->v) = ((*(signed char *)0xC40F824) + 0x1);
                            (((struct o0_uchar *)0xC40F824)->v) = ((*(signed char *)0xC40F824) + 0x1);
                            (((struct o0_uchar *)0xC40F824)->v) = ((*(signed char *)0xC40F824) + 0x1);
                        }
                    }
                }
            }
                break;
            case 2:
            {
                t0 = ((int (*)(int, int, int))(FUN_0c03d44a))(0x0, a5, a6);
                if (t0 == -1) {
                } else {
                    if (t0 != 0) {
                    } else {
                        FUN_0c03d3b6(0x0);
                    }
                    (((struct o0_uchar *)0xC40F824)->v) = ((*(signed char *)0xC40F824) + 0x1);
                    (((struct o0_uchar *)0xC40F824)->v) = ((*(signed char *)0xC40F824) + 0x1);
                    (((struct o0_uchar *)0xC40F824)->v) = ((*(signed char *)0xC40F824) + 0x1);
                }
            }
                break;
            case 4:
            {
                t0 = FUN_0c03aeec(a4, a5, a6, a7);
                if (t0 == -1) {
                } else {
                    if ((t0 & 0x2) == 0) {
                        (((struct o0_uchar *)0xC40F824)->v) = ((*(signed char *)0xC40F824) + 0x1);
                        (((struct o0_uchar *)0xC40F824)->v) = ((*(signed char *)0xC40F824) + 0x1);
                    } else {
                        (((struct o0_uchar *)0xC40F824)->v) = ((*(signed char *)0xC40F824) + 0x1);
                        t0 = ((int (*)(int))(FUN_0c03d44a))(0x1);
                        if (t0 == -1) {
                        } else {
                            if (t0 != 0) {
                            } else {
                                FUN_0c03d3b6(0x0);
                            }
                            (((struct o0_uchar *)0xC40F824)->v) = ((*(signed char *)0xC40F824) + 0x1);
                        }
                    }
                }
            }
                break;
            case 6:
            {
                t0 = ((int (*)(int, int, int))(FUN_0c03d44a))(0x1, a5, a6);
                if (t0 == -1) {
                } else {
                    if (t0 != 0) {
                    } else {
                        FUN_0c03d3b6(0x0);
                    }
                    (((struct o0_uchar *)0xC40F824)->v) = ((*(signed char *)0xC40F824) + 0x1);
                }
            }
                break;
            case 8:
            {
                t0 = FUN_0c03aeec(a4, a5, a6, a7);
                if (t0 == -1) {
                } else {
                    if ((t0 & 0x4) == 0) {
                        (((struct o0_uchar *)0xC40F824)->v) = ((*(signed char *)0xC40F824) + 0x1);
                        (((struct o0_uchar *)0xC40F824)->v) = ((*(signed char *)0xC40F824) + 0x1);
                    } else {
                        (((struct o0_uchar *)0xC40F824)->v) = ((*(signed char *)0xC40F824) + 0x1);
                        t0 = ((int (*)(int))(FUN_0c03d44a))(0x2);
                        if (t0 == -1) {
                        } else {
                            if (t0 == 0) {
                                FUN_0c03d3b6(0x1);
                            }
                            (((struct o0_uchar *)0xC40F824)->v) = ((*(signed char *)0xC40F824) + 0x1);
                            (((struct o0_uchar *)0xC40F824)->v) = ((*(signed char *)0xC40F824) + 0x1);
                            (((struct o0_uchar *)0xC40F824)->v) = ((*(signed char *)0xC40F824) + 0x1);
                        }
                    }
                }
            }
                break;
            case 10:
            {
                t0 = ((int (*)(int, int, int))(FUN_0c03d44a))(0x2, a5, a6);
                if (t0 == -1) {
                } else {
                    if (t0 == 0) {
                        FUN_0c03d3b6(0x1);
                    }
                    (((struct o0_uchar *)0xC40F824)->v) = ((*(signed char *)0xC40F824) + 0x1);
                    (((struct o0_uchar *)0xC40F824)->v) = ((*(signed char *)0xC40F824) + 0x1);
                    (((struct o0_uchar *)0xC40F824)->v) = ((*(signed char *)0xC40F824) + 0x1);
                }
            }
                break;
            case 12:
            {
                t0 = FUN_0c03aeec(a4, a5, a6, a7);
                if (t0 == -1) {
                } else {
                    if ((t0 & 0x8) != 0) {
                        (((struct o0_uchar *)0xC40F824)->v) = ((*(signed char *)0xC40F824) + 0x1);
                        t0 = ((int (*)(int))(FUN_0c03d44a))(0x3);
                        if (t0 == -1) {
                        } else {
                            if (t0 == 0) {
                                FUN_0c03d3b6(0x1);
                            }
                            (((struct o0_uchar *)0xC40F824)->v) = ((*(signed char *)0xC40F824) + 0x1);
                        }
                    } else {
                        (((struct o0_uchar *)0xC40F824)->v) = ((*(signed char *)0xC40F824) + 0x1);
                        (((struct o0_uchar *)0xC40F824)->v) = ((*(signed char *)0xC40F824) + 0x1);
                    }
                }
            }
                break;
            case 14:
            {
                t0 = ((int (*)(int, int, int))(FUN_0c03d44a))(0x3, a5, a6);
                if (t0 == -1) {
                } else {
                    if (t0 == 0) {
                        FUN_0c03d3b6(0x1);
                    }
                    (((struct o0_uchar *)0xC40F824)->v) = ((*(signed char *)0xC40F824) + 0x1);
                }
            }
                break;
            case 16:
            {
                t0 = FUN_0c03aeec(a4, a5, a6, a7);
                if (t0 != -1) {
                    if ((t0 & 0x10) != 0) {
                        (((struct o0_uchar *)0xC40F824)->v) = ((*(signed char *)0xC40F824) + 0x1);
                        t0 = ((int (*)(int))(FUN_0c03d44a))(0x4);
                        if (t0 != -1) {
                            if (t0 == 0) {
                                FUN_0c03d3b6(0x2);
                            }
                            (((struct o0_uchar *)0xC40F824)->v) = ((*(signed char *)0xC40F824) + 0x1);
                            (((struct o0_uchar *)0xC40F824)->v) = ((*(signed char *)0xC40F824) + 0x1);
                            (((struct o0_uchar *)0xC40F824)->v) = ((*(signed char *)0xC40F824) + 0x1);
                        }
                    } else {
                        (((struct o0_uchar *)0xC40F824)->v) = ((*(signed char *)0xC40F824) + 0x1);
                        (((struct o0_uchar *)0xC40F824)->v) = ((*(signed char *)0xC40F824) + 0x1);
                    }
                }
            }
                break;
            case 18:
            {
                t0 = ((int (*)(int, int, int))(FUN_0c03d44a))(0x4, a5, a6);
                if (t0 != -1) {
                    if (t0 == 0) {
                        FUN_0c03d3b6(0x2);
                    }
                    (((struct o0_uchar *)0xC40F824)->v) = ((*(signed char *)0xC40F824) + 0x1);
                    (((struct o0_uchar *)0xC40F824)->v) = ((*(signed char *)0xC40F824) + 0x1);
                    (((struct o0_uchar *)0xC40F824)->v) = ((*(signed char *)0xC40F824) + 0x1);
                }
            }
                break;
            case 20:
            {
                t0 = FUN_0c03aeec(a4, a5, a6, a7);
                if (t0 != -1) {
                    if ((t0 & 0x20) != 0) {
                        (((struct o0_uchar *)0xC40F824)->v) = ((*(signed char *)0xC40F824) + 0x1);
                        t0 = ((int (*)(int))(FUN_0c03d44a))(0x5);
                        if (t0 != -1) {
                            if (t0 == 0) {
                                FUN_0c03d3b6(0x2);
                            }
                            (((struct o0_uchar *)0xC40F824)->v) = ((*(signed char *)0xC40F824) + 0x1);
                        }
                    } else {
                        (((struct o0_uchar *)0xC40F824)->v) = ((*(signed char *)0xC40F824) + 0x1);
                        (((struct o0_uchar *)0xC40F824)->v) = ((*(signed char *)0xC40F824) + 0x1);
                    }
                }
            }
                break;
            case 22:
            {
                t0 = ((int (*)(int, int, int))(FUN_0c03d44a))(0x5, a5, a6);
                if (t0 != -1) {
                    if (t0 == 0) {
                        FUN_0c03d3b6(0x2);
                    }
                    (((struct o0_uchar *)0xC40F824)->v) = ((*(signed char *)0xC40F824) + 0x1);
                }
            }
                break;
            case 24:
            {
                t0 = FUN_0c03aeec(a4, a5, a6, a7);
                if (t0 != -1) {
                    if ((t0 & 0x40) != 0) {
                        (((struct o0_uchar *)0xC40F824)->v) = ((*(signed char *)0xC40F824) + 0x1);
                        t0 = ((int (*)(int))(FUN_0c03d44a))(0x6);
                        if (t0 != -1) {
                            if (t0 == 0) {
                                FUN_0c03d3b6(0x3);
                            }
                            (((struct o0_uchar *)0xC40F824)->v) = ((*(signed char *)0xC40F824) + 0x1);
                            (((struct o0_uchar *)0xC40F824)->v) = ((*(signed char *)0xC40F824) + 0x1);
                            (((struct o0_uchar *)0xC40F824)->v) = ((*(signed char *)0xC40F824) + 0x1);
                        }
                    } else {
                        (((struct o0_uchar *)0xC40F824)->v) = ((*(signed char *)0xC40F824) + 0x1);
                        (((struct o0_uchar *)0xC40F824)->v) = ((*(signed char *)0xC40F824) + 0x1);
                    }
                }
            }
                break;
            case 26:
            {
                t0 = ((int (*)(int, int, int))(FUN_0c03d44a))(0x6, a5, a6);
                if (t0 != -1) {
                    if (t0 == 0) {
                        FUN_0c03d3b6(0x3);
                    }
                    (((struct o0_uchar *)0xC40F824)->v) = ((*(signed char *)0xC40F824) + 0x1);
                    (((struct o0_uchar *)0xC40F824)->v) = ((*(signed char *)0xC40F824) + 0x1);
                    (((struct o0_uchar *)0xC40F824)->v) = ((*(signed char *)0xC40F824) + 0x1);
                }
            }
                break;
            case 28:
            {
                t0 = FUN_0c03aeec(a4, a5, a6, a7);
                if (t0 != -1) {
                    if ((t0 & 0x80) != 0) {
                        (((struct o0_uchar *)0xC40F824)->v) = ((*(signed char *)0xC40F824) + 0x1);
                        t0 = ((int (*)(int))(FUN_0c03d44a))(0x7);
                        if (t0 != -1) {
                            if (t0 == 0) {
                                FUN_0c03d3b6(0x3);
                            }
                            (((struct o0_uchar *)0xC40F824)->v) = ((*(signed char *)0xC40F824) + 0x1);
                        }
                    } else {
                        (((struct o0_uchar *)0xC40F824)->v) = ((*(signed char *)0xC40F824) + 0x1);
                        (((struct o0_uchar *)0xC40F824)->v) = ((*(signed char *)0xC40F824) + 0x1);
                    }
                }
            }
                break;
            default:
            {
                t0 = ((int (*)(int, int, int))(FUN_0c03d44a))(0x7, a5, a6);
                if (t0 != -1) {
                    if (t0 == 0) {
                        FUN_0c03d3b6(0x3);
                    }
                    (((struct o0_uchar *)0xC40F824)->v) = ((*(signed char *)0xC40F824) + 0x1);
                }
            }
                break;
        }
    }
    return (*(signed char *)0xC40F825);
}
