/* game/effect: functions 0C115DC8-0C1171F0, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o18_uchar { char p[0x18]; unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
int FUN_0c037bf6(int);
int math_vec3_mul_xyz(int, float, float, float);
int FUN_0c05a080(int, int);
int FUN_0c05aab6(int, int);
int FUN_0c05f22c(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c080320(int, float);
int FUN_0c104e6a(int, int);
int FUN_0c115e20(void);
int FUN_0c115e84(int);
int thunk_FUN_0c11e20c(int);
int thunk_FUN_0c11e28e(int);
int FUN_0c115e9e(void);
int FUN_0c115ea4(int);
int FUN_0c115eae(int);
int FUN_0c115fd2(int);
int FUN_0c116c12(int, int);
int FUN_0c117944(int, ...);
int FUN_0c117a6e(int, ...);
int FUN_0c117d54(void);
int FUN_0c117e76(void);
int FUN_0c1186d4(int);
int FUN_0c1187ba(void);
int nlRand(void);
int nlAddVector3op(int, int, int);
int FUN_0c0e2390(int, int, int);
int FUN_0c116218(int a4);
int FUN_0c1162a6(int a4);
int FUN_0c1164d8(int a4);
void FUN_0c11664c(int a4);
int FUN_0c116ad0(int a4);
int FUN_0c116cde(int a4);
int FUN_0c116d34(int a4);
int FUN_0c116e44(int a4);
int FUN_0c116f60(int a4);
int FUN_0c117078(int a4);
int FUN_0c117136(int a4);

int FUN_0c116218(int a4)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x17));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                t1 = t0;
                if (t0 != 3) {
                } else {
                    t0 = FUN_0c05f22c(0x3FCF);
                    t1 = t0;
                    if (t0 != 0) {
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        (((struct o18_uchar *)(a4))->v) = 0x0;
                        (((struct o17_uchar *)(a4))->v) = 0x0;
                        (((struct o16_uchar *)(a4))->v) = 0x0;
                        t1 = 0x16;
                    }
                }
                return t1;
            }
            t0 = FUN_0c117d54();
            if ((int)t0 < 0) {
                (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                return FUN_0c117e76();
            }
            return t0;
        }
    } else {
        (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
    }
    FUN_0c117944(0xC0);
    (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
    return 0x17;
}

int FUN_0c1162a6(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t1 = *(signed char *)((a4 + 0x17));
    if (t1 != 0) {
        if (t1 != 1) {
            if (t1 != 2) {
                t2 = t1;
                if (t1 != 3) {
                } else {
                    t1 = FUN_0c05f22c(0x3FCF);
                    t3 = t1;
                    if (t1 != 0) {
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        (((struct o18_uchar *)(a4))->v) = 0x0;
                        (((struct o17_uchar *)(a4))->v) = 0x0;
                        (((struct o16_uchar *)(a4))->v) = 0x0;
                        t3 = 0x16;
                    }
                    t2 = t3;
                }
                return t2;
            }
            t1 = FUN_0c117d54();
            if ((int)t1 < 0) {
                (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                return FUN_0c117e76();
            }
            return t1;
        }
        FUN_0c117944(((*(int *)(((t0 << 2) + 0xC1FC75C)))));
    } else {
        (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
        t0 = FUN_0c115e20();
        t1 = 0x0;
        if (t0 == 0) {
        } else {
            t2 = 0x1;
            if ((int)t0 < (int)0x1E) {
            } else {
                t3 = 0x3;
                if ((int)t0 < (int)0x46) {
                    t3 = 0x2;
                }
                t2 = t3;
            }
            t1 = t2;
        }
        FUN_0c117944(((*(int *)(((t1 << 2) + 0xC1FC75C)))));
    }
    (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
    return 0x17;
}

int FUN_0c1164d8(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x17));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        if (t0 != 5) {
                            if (t0 != 6) {
                                t1 = t0;
                                if (t0 != 7) {
                                } else {
                                    t0 = FUN_0c05f22c(0x3FCF);
                                    t2 = t0;
                                    if (t0 != 0) {
                                        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
                                        if ((int)(*(short *)((a4 + 0x1C))) > 0) {
                                            (((struct o17_uchar *)(a4))->v) = 0x4;
                                            t0 = 0x17;
                                        } else {
                                            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                                            (((struct o18_uchar *)(a4))->v) = 0x0;
                                            (((struct o17_uchar *)(a4))->v) = 0x0;
                                            (((struct o16_uchar *)(a4))->v) = 0x0;
                                            t0 = 0x16;
                                        }
                                        t2 = t0;
                                    }
                                    t1 = t2;
                                }
                                return t1;
                            }
                            t0 = FUN_0c117d54();
                            if ((int)t0 < 0) {
                                (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                                thunk_FUN_0c11e20c((*(short *)((a4 + 0x1E))));
                                return FUN_0c117e76();
                            }
                            return t0;
                        }
                    } else {
                        FUN_0c115fd2(a4);
                        (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                    }
                    *(volatile int *)((0xC29DDD0 + ((*(short *)((a4 + 0x1E))) << 2)));
                    FUN_0c117a6e(0xCD);
                    FUN_0c05a080(0x1E, 0x0);
                    (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                    return 0x17;
                }
                t0 = FUN_0c05f22c(0x3FCF);
                t1 = t0;
                if (t0 != 0) {
                    t0 = nlRand();
                    t2 = (t0 % 0x20);
                    *(unsigned short *)((a4 + 0x1C)) = (*(int *)((0xC201630 + (t2 << 2))));
                    FUN_0c115eae(a4);
                    (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                    t1 = 0x17;
                }
                return t1;
            }
            t0 = FUN_0c117d54();
            if ((int)t0 < 0) {
                (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                return FUN_0c117e76();
            }
            return t0;
        }
    } else {
        (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = ((int)((int)(nlRand()) % (int)0x3));
    }
    FUN_0c117944(((*(int *)((0xC1FC77C + ((*(short *)((a4 + 0x1C))) << 2))))));
    (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
    return 0x17;
}



int FUN_0c116cde(int a4)
{
    register int t0;

    t0 = *(signed char *)(((0x41C + a4) + 0x2));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return FUN_0c037bf6(0xC539708);
    }
    t0 = *(signed char *)0xC539709;
    FUN_0c07e79c(0xC539708, t0, 0x0, 0x15, (t0), 0x0, 0x15);
    *(unsigned char *)(((0x41C + a4) + 0x2)) = ((*(signed char *)(((0x41C + a4) + 0x2))) + 0x1);
    return FUN_0c037bf6(0xC539708);
}




int FUN_0c117078(int a4)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)(((0x41C + a4) + 0x2));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            return FUN_0c037bf6(0xC539708);
        }
    } else {
        t0 = *(signed char *)0xC539709;
        FUN_0c07e79c(0xC539708, t0, 0x0, 0x1B, (t0), 0x0, 0x1B);
        *(unsigned char *)(((0x41C + a4) + 0x2)) = ((*(signed char *)(((0x41C + a4) + 0x2))) + 0x1);
    }
    t0 = FUN_0c037bf6(0xC539708);
    t1 = (unsigned char)t0;
    if ((unsigned char)t0 != 0) {
        t0 = *(signed char *)0xC539709;
        FUN_0c07e79c(0xC539708, t0, 0x0, 0x1C, (t0), 0x0, 0x1C);
        t0 = *(signed char *)(((0x41C + a4) + 0x2));
        *(unsigned char *)(((0x41C + a4) + 0x2)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int FUN_0c117136(int a4)
{
    register int t0;

    t0 = *(signed char *)(((a4 + 0x41C) + 0x2));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
    } else {
        t0 = *(signed char *)0xC539709;
        FUN_0c07e79c(0xC539708, t0, 0x0, 0x1D, (t0), 0x0, 0x1D);
        *(unsigned char *)(((a4 + 0x41C) + 0x2)) = ((*(signed char *)(((a4 + 0x41C) + 0x2))) + 0x1);
    }
    t0 = FUN_0c037bf6(0xC539708);
    if ((unsigned char)t0 != 0) {
        return FUN_0c116c12(a4, 0x1);
    }
    return (unsigned char)t0;
}

int FUN_0c116ad0(int a4)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x17));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        if (t0 != 5) {
                            if (t0 != 6) {
                                if (t0 != 7) {
                                    if (t0 != 8) {
                                        t1 = t0;
                                        if (t0 != 9) {
                                        } else {
                                            t0 = FUN_0c05f22c(0x3FCF);
                                            t1 = t0;
                                            if (t0 != 0) {
                                                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                                                (((struct o16_uchar *)(a4))->v) = 0x1;
                                                (((struct o18_uchar *)(a4))->v) = 0x0;
                                                (((struct o17_uchar *)(a4))->v) = 0x0;
                                                t1 = 0x17;
                                            }
                                        }
                                        return t1;
                                    }
                                    t0 = FUN_0c117d54();
                                    if ((int)t0 < 0) {
                                        (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                                        return FUN_0c117e76();
                                    }
                                    return t0;
                                }
                                t0 = FUN_0c115e9e();
                                t1 = (int)((int)(int)((float)t0 * ((float)(((int)((int)(nlRand()) % (int)0x5)) + 0x1) / (*(float *)0xC116C68))) / (int)0x64);
                                FUN_0c117a6e(0xD6);
                                FUN_0c115ea4((t1 * 0x64));
                                (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                                return 0x17;
                            }
                            t0 = FUN_0c05f22c(0x3FCF);
                            t1 = t0;
                            if (t0 != 0) {
                                (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                                t1 = 0x17;
                            }
                            return t1;
                        }
                        t0 = FUN_0c117d54();
                        if ((int)t0 < 0) {
                            (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                            return FUN_0c117e76();
                        }
                        return t0;
                    }
                    t0 = (*(int *)((0xC1FC798 + (((int)((int)(nlRand()) % (int)0x3)) << 2))));
                    FUN_0c117944(t0);
                    FUN_0c116c12(a4, 0x3);
                    (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                    return 0x17;
                }
                t0 = FUN_0c05f22c(0x3FCF);
                t1 = t0;
                if (t0 != 0) {
                    (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                    t1 = 0x17;
                }
                return t1;
            }
            t0 = FUN_0c117d54();
            if ((int)t0 >= 0) {
                return t0;
            }
            (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
            return FUN_0c117e76();
        }
    } else {
        (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
    }
    FUN_0c117944(0xD5);
    (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
    return 0x17;
}

