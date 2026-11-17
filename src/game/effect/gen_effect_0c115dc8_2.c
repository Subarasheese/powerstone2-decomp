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
int FUN_0c179ac0(void);
int FUN_0c17c130(int, int, int);
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
                    t0 = FUN_0c179ac0();
                    t2 = ((~(((~t0) + 0x1) & 0x1F)) + 0x1);
                    if ((int)t0 >= 0) {
                        t2 = (t0 & 0x1F);
                    }
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
        *(unsigned short *)((a4 + 0x1C)) = ((int)((int)(FUN_0c179ac0()) % (int)0x3));
    }
    FUN_0c117944(((*(int *)((0xC1FC77C + ((*(short *)((a4 + 0x1C))) << 2))))));
    (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
    return 0x17;
}

void FUN_0c11664c(int a4)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x17));
    if ((unsigned int)t0 >= (unsigned int)0x32) {
        return;
    }
    switch ((t0 << 1)) {
        case 0:
        {
            (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
            *(unsigned short *)((a4 + 0x1E)) = (*(int *)((0xC2017E0 + (((int)((int)(FUN_0c179ac0()) % (int)(*(int *)0xC201824))) << 2))));
            *(volatile int *)((0xC29DDD0 + ((*(short *)((a4 + 0x1E))) << 2)));
            FUN_0c117944(0xC5);
            FUN_0c116c12(a4, 0x4);
            (((struct o0_uchar *)0xC539B4D)->v) = 0x2;
            (((struct o1_uchar *)0xC539B4D)->v) = 0x1;
            (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
            return;
        }
        case 2:
        {
            *(volatile int *)((0xC29DDD0 + ((*(short *)((a4 + 0x1E))) << 2)));
            FUN_0c117944(0xC5);
            FUN_0c116c12(a4, 0x4);
            (((struct o0_uchar *)0xC539B4D)->v) = 0x2;
            (((struct o1_uchar *)0xC539B4D)->v) = 0x1;
            (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
            return;
        }
        case 4:
        {
            t0 = FUN_0c117d54();
            if ((int)t0 < 0) {
                (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                FUN_0c117e76();
    return;
            }
            return;
        }
        case 6:
        {
            t0 = FUN_0c05f22c(0x3FCF);
            if (t0 == 0) {
            } else {
                (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
            }
            return;
        }
        case 8:
        {
            FUN_0c117944(0xC6);
            (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
            return;
        }
        case 10:
        {
            t0 = FUN_0c117d54();
            if ((int)t0 >= 0) {
            } else {
                (((struct o20_ushort *)(a4))->v) = 0x0;
                *(unsigned int *)0xC474C00 = (FUN_0c1187ba());
                *(unsigned char *)(((*(int *)0xC474C00) + 0x2)) = (*(signed char *)((a4 + 0x20)));
                (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
            }
            return;
        }
        case 12:
        {
            (((struct o20_ushort *)(a4))->v) = (FUN_0c104e6a(((((struct o20_short *)(a4))->v)), 0x1));
            *(unsigned char *)(((*(int *)0xC474C00) + 0x2)) = (*(signed char *)((a4 + 0x20)));
            t0 = FUN_0c05f22c(0x101);
            if (t0 != 0) {
                FUN_0c1186d4(((((struct o20_short *)(a4))->v)));
                *(unsigned short *)((a4 + 0x1C)) = 0x0;
                t0 = 0x4;
                if (((((struct o20_short *)(a4))->v)) == 0) {
                    t0 = 0x3;
                }
                FUN_0c05aab6(0x0, t0);
                (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
            } else {
                t0 = FUN_0c05f22c(0x40);
                if (t0 == 0) {
                } else {
                    (((struct o20_ushort *)(a4))->v) = 0x1;
                    *(unsigned char *)(((*(int *)0xC474C00) + 0x2)) = (*(signed char *)((a4 + 0x20)));
                    FUN_0c1186d4(((((struct o20_short *)(a4))->v)));
                    *(unsigned short *)((a4 + 0x1C)) = 0x0;
                    FUN_0c05aab6(0x0, 0x4);
                    (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                }
            }
            return;
        }
        case 14:
        {
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
            if ((int)(short)(t0 + 0x1) <= (int)0xA) {
            } else {
                (((struct o14_uchar *)((*(int *)0xC474C00)))->v) = 0x63;
                *(unsigned int *)0xC474C00 = 0x0;
                FUN_0c116c12(a4, 0x5);
                t0 = (((struct o20_short *)(a4))->v);
                if (t0 != 0) {
                    if (t0 != 1) {
                    } else {
                        (((struct o17_uchar *)(a4))->v) = 0xA;
                    }
                } else {
                    t0 = FUN_0c115e84((*(short *)((a4 + 0x1E))));
                    if (t0 != 0) {
                        if ((*(signed char *)((a4 + 0x16))) == 1) {
                            (((struct o17_uchar *)(a4))->v) = 0x28;
                        } else {
                            (((struct o17_uchar *)(a4))->v) = 0x1E;
                        }
                    } else {
                        (((struct o17_uchar *)(a4))->v) = 0x14;
                    }
                }
            }
            return;
        }
        case 16:
        case 18:
        case 26:
        case 28:
        case 30:
        case 32:
        case 34:
        case 36:
        case 38:
        case 46:
        case 48:
        case 50:
        case 52:
        case 54:
        case 56:
        case 58:
        case 66:
        case 68:
        case 70:
        case 72:
        case 74:
        case 76:
        case 78:
        {
            return;
        }
        case 20:
        {
            (((struct o0_uchar *)0xC539B4D)->v) = 0x0;
            (((struct o1_uchar *)0xC539B4D)->v) = 0x0;
            FUN_0c116c12(a4, 0x6);
            FUN_0c117944(0xC9);
            (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
            return;
        }
        case 22:
        {
            t0 = FUN_0c117d54();
            if ((int)t0 >= 0) {
                return;
            }
            (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
            FUN_0c117e76();
    return;
        }
        case 24:
        {
            t0 = FUN_0c05f22c(0x3FCF);
            if (t0 == 0) {
            } else {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                (((struct o16_uchar *)(a4))->v) = 0x1;
                (((struct o18_uchar *)(a4))->v) = 0x0;
                (((struct o17_uchar *)(a4))->v) = 0x0;
            }
            return;
        }
        case 40:
        {
            (((struct o0_uchar *)0xC539B4D)->v) = 0x0;
            (((struct o1_uchar *)0xC539B4D)->v) = 0x0;
            FUN_0c117944(0xC7);
            FUN_0c116c12(a4, 0x2);
            (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
            return;
        }
        case 42:
        {
            t0 = FUN_0c117d54();
            if ((int)t0 >= 0) {
                return;
            }
            (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
            FUN_0c117e76();
    return;
        }
        case 44:
        {
            t0 = FUN_0c05f22c(0x3FCF);
            if (t0 == 0) {
            } else {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                (((struct o16_uchar *)(a4))->v) = 0x1;
                (((struct o18_uchar *)(a4))->v) = 0x0;
                (((struct o17_uchar *)(a4))->v) = 0x0;
            }
            return;
        }
        case 60:
        {
            (((struct o0_uchar *)0xC539B4D)->v) = 0x0;
            (((struct o1_uchar *)0xC539B4D)->v) = 0x0;
            FUN_0c117944(0xCA);
            FUN_0c116c12(a4, 0x3);
            (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
            return;
        }
        case 62:
        {
            t0 = FUN_0c117d54();
            if ((int)t0 >= 0) {
                return;
            }
            (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
            thunk_FUN_0c11e28e((*(short *)((a4 + 0x1E))));
            FUN_0c117e76();
    return;
        }
        case 64:
        {
            t0 = FUN_0c05f22c(0x3FCF);
            if (t0 != 0) {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                (((struct o16_uchar *)(a4))->v) = 0x1;
                (((struct o18_uchar *)(a4))->v) = 0x0;
                (((struct o17_uchar *)(a4))->v) = 0x0;
            }
            return;
        }
        case 80:
        {
            t0 = FUN_0c179ac0();
            t1 = ((~(((~t0) + 0x1) & 0x1)) + 0x1);
            if ((int)t0 >= 0) {
                t1 = (t0 & 0x1);
            }
            FUN_0c117944(((*(int *)((0xC1FC788 + (t1 << 2))))));
            (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
            return;
        }
        case 82:
        {
            t0 = FUN_0c117d54();
            if ((int)t0 >= 0) {
            } else {
                FUN_0c117e76();
                thunk_FUN_0c11e28e((*(short *)((a4 + 0x1E))));
                (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
            }
            return;
        }
        case 84:
        {
            t0 = FUN_0c05f22c(0x3FCF);
            if (t0 == 0) {
            } else {
                t0 = FUN_0c179ac0();
                t1 = ((~(((~t0) + 0x1) & 0x1F)) + 0x1);
                if ((int)t0 >= 0) {
                    t1 = (t0 & 0x1F);
                }
                *(unsigned short *)((a4 + 0x1C)) = (*(int *)((0xC201630 + (t1 << 2))));
                FUN_0c115eae(a4);
                (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
            }
            return;
        }
        case 86:
        {
            FUN_0c115fd2(a4);
            (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
            *(volatile int *)((0xC29DDD0 + ((*(short *)((a4 + 0x1E))) << 2)));
            FUN_0c117a6e(0xCD);
            FUN_0c05a080(0x1E, 0x0);
            (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
            return;
        }
        case 88:
        {
            *(volatile int *)((0xC29DDD0 + ((*(short *)((a4 + 0x1E))) << 2)));
            FUN_0c117a6e(0xCD);
            FUN_0c05a080(0x1E, 0x0);
            (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
            return;
        }
        case 90:
        {
            t0 = FUN_0c117d54();
            if ((int)t0 < 0) {
                (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                thunk_FUN_0c11e20c((*(short *)((a4 + 0x1E))));
                FUN_0c117e76();
    return;
            }
            return;
        }
        case 92:
        {
            t0 = FUN_0c05f22c(0x3FCF);
            if (t0 != 0) {
                *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
                if ((int)(*(short *)((a4 + 0x1C))) > 0) {
                    (((struct o17_uchar *)(a4))->v) = 0x2B;
                } else {
                    (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                }
            }
            return;
        }
        case 94:
        {
            (((struct o0_uchar *)0xC539B4D)->v) = 0x0;
            (((struct o1_uchar *)0xC539B4D)->v) = 0x0;
            t0 = FUN_0c179ac0();
            t1 = ((~(((~t0) + 0x1) & 0x1)) + 0x1);
            if ((int)t0 >= 0) {
                t1 = (t0 & 0x1);
            }
            FUN_0c117944(((*(int *)((0xC1FC790 + (t1 << 2))))));
            FUN_0c116c12(a4, 0x2);
            (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
            return;
        }
        case 96:
        {
            t0 = FUN_0c117d54();
            if ((int)t0 < 0) {
                FUN_0c117e76();
                (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
            }
            return;
        }
        default:
        {
            t0 = FUN_0c05f22c(0x3FCF);
            if (t0 != 0) {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                (((struct o16_uchar *)(a4))->v) = 0x1;
                (((struct o18_uchar *)(a4))->v) = 0x0;
                (((struct o17_uchar *)(a4))->v) = 0x0;
            }
            return;
        }
    }
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
                                t1 = (int)((int)(int)((float)t0 * ((float)(((int)((int)(FUN_0c179ac0()) % (int)0x5)) + 0x1) / (*(float *)0xC116C68))) / (int)0x64);
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
                    t0 = (*(int *)((0xC1FC798 + (((int)((int)(FUN_0c179ac0()) % (int)0x3)) << 2))));
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

int FUN_0c116d34(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)(((0x41C + a4) + 0x2));
    if (t0 != 0) {
        if (t0 != 1) {
            t1 = t0;
            if (t0 != 2) {
            } else {
                FUN_0c17c130(0xC539730, 0xC539730, (a4 + 0x28));
                FUN_0c037bf6(0xC539708);
                t0 = *(short *)(((0x41C + a4) + 0x8));
                *(unsigned short *)(((0x41C + a4) + 0x8)) = (t0 - 1);
                t2 = (short)(t0 - 1);
                if ((int)(short)(t0 - 1) <= 0) {
                    FUN_0c116c12(a4, 0x7);
                    t0 = *(signed char *)(((0x41C + a4) + 0x2));
                    *(unsigned char *)(((0x41C + a4) + 0x2)) = (t0 + 0x1);
                    t2 = (t0 + 0x1);
                }
                t1 = t2;
            }
            t0 = t1;
        } else {
            *(unsigned int *)0xC539740 = ((*(int *)0xC539740) + (*(int *)((a4 + 0x38))));
            t1 = FUN_0c037bf6(0xC539708);
            t2 = (unsigned char)t1;
            if ((unsigned char)t1 != 0) {
                FUN_0c0e2390((a4 + 0x28), 0xC1FC7BC, 0xC539730);
                *(unsigned short *)(((0x41C + a4) + 0x8)) = 0x1E;
                t1 = *(short *)(((0x41C + a4) + 0x8));
                math_vec3_mul_xyz((a4 + 0x28), (1.0f / (float)t1), (1.0f / (float)t1), (1.0f / (float)t1));
                t1 = *(signed char *)0xC539709;
                FUN_0c07e79c(0xC539708, t1, 0x0, 0x5, (t1), 0x0, 0x5);
                t1 = *(signed char *)(((0x41C + a4) + 0x2));
                *(unsigned char *)(((0x41C + a4) + 0x2)) = (t1 + 0x1);
                t2 = (t1 + 0x1);
            }
            t0 = t2;
        }
        t1 = t0;
    } else {
        t0 = *(signed char *)0xC539709;
        FUN_0c07e79c(0xC539708, t0, 0x0, 0x19, (t0), 0x0, 0x19);
        t0 = *(int *)0xC539740;
        t2 = *(int *)0xC1FC7CC;
        *(unsigned int *)((a4 + 0x38)) = (t2 - t0);
        *(unsigned int *)((a4 + 0x38)) = ((int)((int)(t2 - t0) / (int)0xA));
        *(unsigned char *)(((0x41C + a4) + 0x2)) = ((*(signed char *)(((0x41C + a4) + 0x2))) + 0x1);
        *(unsigned int *)0xC539740 = ((*(int *)0xC539740) + (*(int *)((a4 + 0x38))));
        t0 = FUN_0c037bf6(0xC539708);
        t2 = (unsigned char)t0;
        if ((unsigned char)t0 != 0) {
            FUN_0c0e2390((a4 + 0x28), 0xC1FC7BC, 0xC539730);
            *(unsigned short *)(((0x41C + a4) + 0x8)) = 0x1E;
            t0 = *(short *)(((0x41C + a4) + 0x8));
            math_vec3_mul_xyz((a4 + 0x28), (1.0f / (float)t0), (1.0f / (float)t0), (1.0f / (float)t0));
            t0 = *(signed char *)0xC539709;
            FUN_0c07e79c(0xC539708, t0, 0x0, 0x5, (t0), 0x0, 0x5);
            t0 = *(signed char *)(((0x41C + a4) + 0x2));
            *(unsigned char *)(((0x41C + a4) + 0x2)) = (t0 + 0x1);
            t2 = (t0 + 0x1);
        }
        t1 = t2;
    }
    return t1;
}

int FUN_0c116e44(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)(((0x41C + a4) + 0x2));
    if (t0 != 0) {
        if (t0 != 1) {
            t1 = t0;
            if (t0 != 2) {
            } else {
                FUN_0c17c130(0xC539730, 0xC539730, (a4 + 0x28));
                FUN_0c037bf6(0xC539708);
                t0 = *(short *)(((0x41C + a4) + 0x8));
                *(unsigned short *)(((0x41C + a4) + 0x8)) = (t0 - 1);
                t2 = (short)(t0 - 1);
                if ((int)(short)(t0 - 1) <= 0) {
                    FUN_0c116c12(a4, 0x7);
                    t0 = *(signed char *)(((0x41C + a4) + 0x2));
                    *(unsigned char *)(((0x41C + a4) + 0x2)) = (t0 + 0x1);
                    t2 = (t0 + 0x1);
                }
                t1 = t2;
            }
            t0 = t1;
        } else {
            *(unsigned int *)0xC539740 = ((*(int *)0xC539740) + (*(int *)((a4 + 0x38))));
            t1 = FUN_0c037bf6(0xC539708);
            t2 = (unsigned char)t1;
            if ((unsigned char)t1 != 0) {
                FUN_0c0e2390((a4 + 0x28), 0xC1FC7BC, 0xC539730);
                *(unsigned short *)(((0x41C + a4) + 0x8)) = 0x50;
                t1 = *(short *)(((0x41C + a4) + 0x8));
                math_vec3_mul_xyz((a4 + 0x28), (1.0f / (float)t1), (1.0f / (float)t1), (1.0f / (float)t1));
                t1 = *(signed char *)0xC539709;
                FUN_0c07e79c(0xC539708, t1, 0x0, 0x5, (t1), 0x0, 0x5);
                t1 = *(signed char *)(((0x41C + a4) + 0x2));
                *(unsigned char *)(((0x41C + a4) + 0x2)) = (t1 + 0x1);
                t2 = (t1 + 0x1);
            }
            t0 = t2;
        }
        t1 = t0;
    } else {
        t0 = *(signed char *)0xC539709;
        FUN_0c07e79c(0xC539708, t0, 0x0, 0x19, (t0), 0x0, 0x19);
        t0 = *(int *)0xC539740;
        t2 = *(int *)0xC1FC7CC;
        *(unsigned int *)((a4 + 0x38)) = (t2 - t0);
        *(unsigned int *)((a4 + 0x38)) = ((int)((int)(t2 - t0) / (int)0xA));
        *(unsigned char *)(((0x41C + a4) + 0x2)) = ((*(signed char *)(((0x41C + a4) + 0x2))) + 0x1);
        *(unsigned int *)0xC539740 = ((*(int *)0xC539740) + (*(int *)((a4 + 0x38))));
        t0 = FUN_0c037bf6(0xC539708);
        t2 = (unsigned char)t0;
        if ((unsigned char)t0 != 0) {
            FUN_0c0e2390((a4 + 0x28), 0xC1FC7BC, 0xC539730);
            *(unsigned short *)(((0x41C + a4) + 0x8)) = 0x50;
            t0 = *(short *)(((0x41C + a4) + 0x8));
            math_vec3_mul_xyz((a4 + 0x28), (1.0f / (float)t0), (1.0f / (float)t0), (1.0f / (float)t0));
            t0 = *(signed char *)0xC539709;
            FUN_0c07e79c(0xC539708, t0, 0x0, 0x5, (t0), 0x0, 0x5);
            t0 = *(signed char *)(((0x41C + a4) + 0x2));
            *(unsigned char *)(((0x41C + a4) + 0x2)) = (t0 + 0x1);
            t2 = (t0 + 0x1);
        }
        t1 = t2;
    }
    return t1;
}

int FUN_0c116f60(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)(((0x41C + a4) + 0x2));
    if (t0 != 0) {
        if (t0 != 1) {
            t1 = t0;
            if (t0 != 2) {
            } else {
                FUN_0c17c130(0xC539730, 0xC539730, (a4 + 0x28));
                FUN_0c037bf6(0xC539708);
                t0 = *(short *)(((0x41C + a4) + 0x8));
                *(unsigned short *)(((0x41C + a4) + 0x8)) = (t0 - 1);
                t2 = (short)(t0 - 1);
                if ((int)(short)(t0 - 1) <= 0) {
                    FUN_0c116c12(a4, 0x7);
                    t0 = *(signed char *)(((0x41C + a4) + 0x2));
                    *(unsigned char *)(((0x41C + a4) + 0x2)) = (t0 + 0x1);
                    t2 = (t0 + 0x1);
                }
                t1 = t2;
            }
            t0 = t1;
        } else {
            *(unsigned int *)0xC539740 = ((*(int *)0xC539740) + (*(int *)((a4 + 0x38))));
            FUN_0c037bf6(0xC539708);
            t1 = *(short *)(((0x41C + a4) + 0x8));
            *(unsigned short *)(((0x41C + a4) + 0x8)) = (t1 - 1);
            t2 = (short)(t1 - 1);
            if ((int)(short)(t1 - 1) <= 0) {
                FUN_0c0e2390((a4 + 0x28), 0xC1FC7BC, 0xC539730);
                *(unsigned short *)(((0x41C + a4) + 0x8)) = 0x96;
                t1 = *(short *)(((0x41C + a4) + 0x8));
                math_vec3_mul_xyz((a4 + 0x28), (1.0f / (float)t1), (1.0f / (float)t1), (1.0f / (float)t1));
                t1 = *(signed char *)(((0x41C + a4) + 0x2));
                *(unsigned char *)(((0x41C + a4) + 0x2)) = (t1 + 0x1);
                t2 = (t1 + 0x1);
            }
            t0 = t2;
        }
        t1 = t0;
    } else {
        FUN_0c07e79c(0xC539708, 0xFFFFFFFF, 0x3, 0xA5, 0xFFFFFFFF, 0x3, 0xA5);
        FUN_0c080320(0xC539708, (*(float *)0xC1170A4));
        t0 = *(int *)0xC539740;
        t2 = *(int *)0xC1FC7CC;
        *(unsigned int *)((a4 + 0x38)) = (t2 - t0);
        *(unsigned int *)((a4 + 0x38)) = ((int)((int)(t2 - t0) / (int)0xA));
        *(unsigned short *)(((0x41C + a4) + 0x8)) = 0xA;
        *(unsigned char *)(((0x41C + a4) + 0x2)) = ((*(signed char *)(((0x41C + a4) + 0x2))) + 0x1);
        *(unsigned int *)0xC539740 = ((*(int *)0xC539740) + (*(int *)((a4 + 0x38))));
        FUN_0c037bf6(0xC539708);
        t0 = *(short *)(((0x41C + a4) + 0x8));
        *(unsigned short *)(((0x41C + a4) + 0x8)) = (t0 - 1);
        t2 = (short)(t0 - 1);
        if ((int)(short)(t0 - 1) <= 0) {
            FUN_0c0e2390((a4 + 0x28), 0xC1FC7BC, 0xC539730);
            *(unsigned short *)(((0x41C + a4) + 0x8)) = 0x96;
            t0 = *(short *)(((0x41C + a4) + 0x8));
            math_vec3_mul_xyz((a4 + 0x28), (1.0f / (float)t0), (1.0f / (float)t0), (1.0f / (float)t0));
            t0 = *(signed char *)(((0x41C + a4) + 0x2));
            *(unsigned char *)(((0x41C + a4) + 0x2)) = (t0 + 0x1);
            t2 = (t0 + 0x1);
        }
        t1 = t2;
    }
    return t1;
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
