/* game/unsorted: functions 0C10E7E4-0C10EBC4, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o18_uchar { char p[0x18]; unsigned char v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4_float { char p[0x4]; float v; };
int FUN_0c05a080(int, int);
int FUN_0c104cc8(int);
int FUN_0c104d70(void);
int FUN_0c117944(int, ...);
int FUN_0c117d54(void);
int FUN_0c117e76(void);
int FUN_0c11e20c(int);
int FUN_0c179ac0(void);
int FUN_0c10e7e4(int a4, int a5, int a6, int a7);
int FUN_0c10e96e(int a4, int a5, int a6, int a7);

int FUN_0c10e7e4(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    return t0;
                }
                u0 = (((((struct o4C_float *)(a4))->v)) * (float)(*(short *)(((0x41C + a4) + 0x4))));
                *(unsigned short *)(((0x41C + a4) + 0x6)) = ((*(short *)(((0x41C + a4) + 0x6))) + (int)((u0 * ((((struct o0_float *)0xC10E9F4)->v))) / (float)(*(short *)(((0x41C + a4) + 0x2)))));
                (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) - (((((struct o4_float *)0xC10E9F4)->v)) / (float)(*(short *)(((0x41C + a4) + 0x2)))));
                *(unsigned short *)((a4 + 0x1C)) = ((int)((int)(*(short *)(((0x41C + a4) + 0x6))) / (int)0x64));
                if ((int)(*(short *)((a4 + 0x1C))) >= (int)0x28) {
                    *(unsigned short *)((a4 + 0x1C)) = 0x0;
                    *(unsigned short *)(((0x41C + a4) + 0x6)) = 0x0;
                }
                t0 = *(short *)(((0x41C + a4) + 0x4));
                *(unsigned short *)(((0x41C + a4) + 0x4)) = (t0 - 1);
                if ((short)(t0 - 1) == 0) {
                    return ((int (*)(int, int, int, int))(0xC10DE56))(a4, a5, a6, a7);
                }
                return (short)(t0 - 1);
            }
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
            (((struct o17_uchar *)(a4))->v) = 0x0;
            *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + (int)((((struct o4C_float *)(a4))->v)));
            *(unsigned short *)(((0x41C + a4) + 0x2)) = 0xB4;
            *(unsigned short *)(((0x41C + a4) + 0x4)) = (*(short *)(((0x41C + a4) + 0x2)));
            *(unsigned short *)(((0x41C + a4) + 0x6)) = ((short)(*(short *)((a4 + 0x1C))) * (short)0x64);
            return (FUN_0c117944(0xEA));
        }
    } else {
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        (((struct o17_uchar *)(a4))->v) = 0x0;
        *(unsigned short *)((a4 + 0x1C)) = 0x0;
        *(unsigned short *)(((0x41C + a4) + 0x2)) = 0x0;
        *(unsigned short *)(((0x41C + a4) + 0x4)) = 0x0;
        *(unsigned short *)(((0x41C + a4) + 0x6)) = 0x0;
        *(unsigned short *)(((0x41C + a4) + 0x4)) = (((int)((int)(FUN_0c179ac0()) % (int)0x14)) + 0x1E);
        (((struct o4C_float *)(a4))->v) = 3.0f;
    }
    t0 = FUN_0c104d70();
    if (t0 != 0) {
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        (((struct o17_uchar *)(a4))->v) = 0x0;
        t0 = 0x17;
    } else {
        t1 = *(short *)(((0x41C + a4) + 0x4));
        *(unsigned short *)(((0x41C + a4) + 0x4)) = (t1 - 1);
        if ((short)(t1 - 1) == 0) {
            *(unsigned short *)(((0x41C + a4) + 0x4)) = (((int)((int)(FUN_0c179ac0()) % (int)0x14)) + 0x78);
            FUN_0c117944(0xE9);
        }
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + (int)((((struct o4C_float *)(a4))->v)));
        t1 = *(short *)((a4 + 0x1C));
        t0 = t1;
        if ((int)t1 >= (int)0x28) {
            *(unsigned short *)((a4 + 0x1C)) = 0x0;
            t0 = 0x0;
        }
    }
    return t0;
}

int FUN_0c10e96e(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 == 3) {
                    t1 = *(signed char *)((a4 + 0x17));
                    if (t1 != 0) {
                        if (t1 != 1) {
                            t2 = t1;
                            if (t1 != 2) {
                            } else {
                                t1 = FUN_0c104cc8(0x3FCF);
                                t2 = t1;
                                if (t1 != 0) {
                                    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                                    (((struct o17_uchar *)(a4))->v) = 0x0;
                                    t2 = 0x17;
                                }
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
                    (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                    FUN_0c117944(0xEC);
                    return (FUN_0c05a080(0x19, 0x0));
                }
                if (t0 == 4) {
                    return ((int (*)(int, int, int, int))(0xC10DE64))(a4, a5, a6, a7);
                }
                return t0;
            }
            t0 = *(signed char *)((a4 + 0x17));
            if (t0 != 0) {
                if (t0 != 1) {
                    if (t0 != 2) {
                        if (t0 != 3) {
                            return t0;
                        }
                        t0 = *(signed char *)((a4 + 0x18));
                        if (t0 != 0) {
                            if (t0 != 1) {
                                t1 = t0;
                                if (t0 != 2) {
                                } else {
                                    t0 = FUN_0c104cc8(0x3FCF);
                                    t2 = t0;
                                    if (t0 != 0) {
                                        (((struct o16_uchar *)(a4))->v) = 0x4;
                                        (((struct o17_uchar *)(a4))->v) = 0x0;
                                        t2 = 0x17;
                                    }
                                    t1 = t2;
                                }
                                return t1;
                            }
                            t0 = FUN_0c117d54();
                            if ((int)t0 < 0) {
                                (((struct o18_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x18))) + 0x1);
                                return FUN_0c117e76();
                            }
                            return t0;
                        }
                        (((struct o18_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x18))) + 0x1);
                        *(volatile int *)((((*(int *)((0xC473984 + ((*(int *)0xC473978) << 2)))) << 2) + 0xC29DDD0));
                        FUN_0c117944(0xEE);
                        FUN_0c05a080(0x1E, 0x0);
                        return FUN_0c11e20c((*(int *)((0xC473984 + ((*(int *)0xC473978) << 2)))));
                    }
                    t0 = *(signed char *)((a4 + 0x18));
                    if (t0 != 0) {
                        if (t0 != 1) {
                            t1 = t0;
                            if (t0 != 2) {
                            } else {
                                t0 = FUN_0c104cc8(0x3FCF);
                                t2 = t0;
                                if (t0 == 0) {
                                } else {
                                    (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                                    (((struct o18_uchar *)(a4))->v) = 0x0;
                                    t2 = 0x18;
                                }
                                t1 = t2;
                            }
                            return t1;
                        }
                        t0 = FUN_0c117d54();
                        if ((int)t0 < 0) {
                            (((struct o18_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x18))) + 0x1);
                            return FUN_0c117e76();
                        }
                        return t0;
                    }
                    (((struct o18_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x18))) + 0x1);
                    *(volatile int *)((((*(int *)((0xC473984 + ((*(int *)0xC473978) << 2)))) << 2) + 0xC29DDD0));
                    return (FUN_0c117944(0xED));
                }
            } else {
                (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                (((struct o18_uchar *)(a4))->v) = 0x0;
            }
            t0 = *(signed char *)((a4 + 0x18));
            if (t0 != 0) {
                if (t0 != 1) {
                    t1 = t0;
                    if (t0 != 2) {
                    } else {
                        t0 = FUN_0c104cc8(0x3FCF);
                        t2 = t0;
                        if (t0 == 0) {
                        } else {
                            (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                            (((struct o18_uchar *)(a4))->v) = 0x0;
                            t2 = 0x18;
                        }
                        t1 = t2;
                    }
                    return t1;
                }
                t0 = FUN_0c117d54();
                if ((int)t0 >= 0) {
                    return t0;
                }
                (((struct o18_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x18))) + 0x1);
                return FUN_0c117e76();
            }
            (((struct o18_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x18))) + 0x1);
            FUN_0c117944(0xEB);
            return (FUN_0c05a080(0x18, 0x0));
        }
    } else {
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        (((struct o17_uchar *)(a4))->v) = 0x0;
    }
    if ((*(int *)((0xC473984 + ((*(int *)0xC473978) << 2)))) != 0xBA) {
        (((struct o16_uchar *)(a4))->v) = 0x2;
    } else {
        (((struct o16_uchar *)(a4))->v) = 0x3;
    }
    (((struct o17_uchar *)(a4))->v) = 0x0;
    return 0x17;
}
