/* game/menu/option: functions 0C018E44-0C01A00A, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_uchar { unsigned char v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o18_uchar { char p[0x18]; unsigned char v; };
struct o19_uchar { char p[0x19]; unsigned char v; };
struct o1A_uchar { char p[0x1A]; unsigned char v; };
struct o1B_uchar { char p[0x1B]; unsigned char v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2_ushort { char p[0x2]; unsigned short v; };
struct o30_float { char p[0x30]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB0_float { char p[0xB0]; float v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
int FUN_0c012c34(int);
int FUN_0c01c62a(int);
int FUN_0c01c714(int, int, int);
int FUN_0c01cb7c(void);
int FUN_0c01cc56(int, int);
int thunk_FUN_0c03f346(int);
int FUN_0c01cd2c(int);
int FUN_0c02b342(int, int);
int FUN_0c02b3ba(int, float, float, float);
int FUN_0c02b502(int);
int FUN_0c0573c0(int, int, int);
int FUN_0c0573cc(int, int, int);
int FUN_0c05aab6(int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int strcpy(int, int);
int FUN_0c187d88(int);
int FUN_0c018e44(void);
int FUN_0c018e74(int a4);
int FUN_0c018e9c(int a4, int a5);
int FUN_0c018f0a(int a4);
int FUN_0c018f40(int a4, int a5, int a6, int a7);
int FUN_0c018f90(int a4, int a5, int a6);
void FUN_0c018fd2(int a4);
int FUN_0c018fd8(int a4);
int FUN_0c01966e(int a4);
int FUN_0c019954(int a4);
int FUN_0c019a06(int a4);
int FUN_0c019a32(int a4);
int FUN_0c019c66(int a4, int a5, int a6);

int FUN_0c018e44(void)
{
    register int t0;
    register int t1;

    (((struct o0_uchar *)0xC30A51A)->v) = 0xFFFFFFFF;
    (((struct o2_ushort *)0xC30A51A)->v) = 0x0;
    t0 = FUN_0c01cc56(0xB, 0xC018B28);
    t1 = FUN_0c01cc56(0x1B, 0xC018CCC);
    *(unsigned int *)((t1 + 0x10)) = t0;
    return t1;
}

int FUN_0c018e74(int a4)
{
    int stk[1];
    register int t1;

    *(unsigned char *)(((int)stk + 0)) = a4;
    *(unsigned char *)0xC30503C = 0xFFFFFFFF;
    *(unsigned char *)0xC30EFA2 = 0x1;
    t1 = *(signed char *)(((int)stk + 0));
    *(unsigned char *)(((FUN_0c01cc56(0x8, 0xC018FD8)) + 0x3)) = t1;
    return t1;
}

int FUN_0c018e9c(int a4, int a5)
{
    register int t1;
    register int t2;

    *(unsigned char *)0xC30503C = 0xFFFFFFFF;
    *(unsigned char *)0xC30EFA2 = 0x1;
    *(unsigned char *)(((FUN_0c01cc56(0x8, 0xC018FD8)) + 0x3)) = a4;
    t1 = 0x1A;
    if (((unsigned char)a4 != 28) && (((unsigned char)a4 != 33) && (((unsigned char)a4 != 59) && (((unsigned char)a4 != 32) && (((unsigned char)a4 != 61) && (((unsigned char)a4 != 63) && ((unsigned char)a4 != 78))))))) {
        t1 = 0x15;
    }
    t2 = FUN_0c01cc56(t1, 0xC01966E);
    *(unsigned char *)((t2 + 0x3)) = a4;
    *(unsigned int *)((t2 + 0x10)) = a5;
    return a4;
}

int FUN_0c018f0a(int a4)
{
    register int t1;

    *(unsigned char *)0xC30503C = 0xFFFFFFFF;
    *(unsigned char *)0xC30EFA2 = 0x1;
    *(unsigned int *)(((FUN_0c01cc56(0x37, 0xC0197BC)) + 0x10)) = a4;
    t1 = FUN_0c01cc56(0x1B, 0xC019820);
    *(unsigned int *)((t1 + 0x10)) = a4;
    return t1;
}

int FUN_0c018f40(int a4, int a5, int a6, int a7)
{
    int stk[4];
    register int t0;

    *(unsigned char *)(((int)stk + 12)) = a4;
    *(unsigned char *)(((int)stk + 8)) = a5;
    *(unsigned char *)(((int)stk + 4)) = a6;
    *(unsigned char *)(((int)stk + 0)) = a7;
    *(unsigned char *)0xC30503C = 0xFFFFFFFF;
    *(unsigned char *)0xC30EFA2 = 0x1;
    t0 = FUN_0c01cc56(0x8, 0xC018FD8);
    *(unsigned char *)((t0 + 0x3)) = (*(signed char *)(((int)stk + 12)));
    (((struct o18_uchar *)(t0))->v) = (*(signed char *)(((int)stk + 8)));
    (((struct o19_uchar *)(t0))->v) = (*(signed char *)(((int)stk + 4)));
    (((struct o1A_uchar *)(t0))->v) = (*(signed char *)(((int)stk + 0)));
    return 0x1A;
}

int FUN_0c018f90(int a4, int a5, int a6)
{
    int stk[3];
    register int t0;
    register int t3;
    register int t4;

    *(unsigned char *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 8)) = a5;
    *(unsigned int *)(((int)stk + 4)) = a6;
    *(unsigned char *)0xC30503C = 0xFFFFFFFF;
    *(unsigned char *)0xC30EFA2 = 0x1;
    t0 = FUN_0c01cc56(0x8, 0xC018FD8);
    *(unsigned char *)((t0 + 0x3)) = (*(signed char *)(((int)stk + 0)));
    *(unsigned int *)((t0 + 0x10)) = (*(int *)(((int)stk + 4)));
    t3 = FUN_0c01cc56(0x1A, 0xC01966E);
    t4 = *(signed char *)(((int)stk + 0));
    *(unsigned char *)((t3 + 0x3)) = t4;
    *(unsigned int *)((t3 + 0x10)) = (*(int *)(((int)stk + 8)));
    return t4;
}

void FUN_0c018fd2(int a4)
{
    *(unsigned char *)0xC30503C = a4;
}


int FUN_0c01966e(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    t0 = *(signed char *)((a4 + 0x14));
    t1 = *(int *)((a4 + 0x10));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                t2 = t0;
                if (t0 == 3) {
                    t0 = FUN_0c01c62a(a4);
                    t2 = (signed char)t0;
                    if ((signed char)t0 != 0) {
                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                        t2 = 0x14;
                    }
                }
                return t2;
            }
            (((struct o2C_float *)(a4))->v) = (*(float *)((0xC20DF3C + ((unsigned char)(*(signed char *)((t1 + 0x0))) << 2))));
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
            u0 = 0.200000003f;
            u0 = u0 + 0.200000003f * (math_sin_angle16(((((short)(t0 + 0x1) << 8) << 2) << 1)));
            (((struct oBC_float *)(a4))->v) = u0;
            (((struct oB8_float *)(a4))->v) = u0;
            (((struct oB4_float *)(a4))->v) = u0;
            t0 = FUN_0c01cd2c(0x101);
            if ((short)t0 != 0) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                (((struct o1B_uchar *)(a4))->v) = 0x0;
                (((struct o22_ushort *)(a4))->v) = 0x0;
            }
            t0 = *(signed char *)((a4 + 0x3));
            if ((*(signed char *)0xC30503C) == t0) {
                return thunk_FUN_0c03f346(a4);
            }
            return t0;
        }
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        t2 = (short)(t0 - 1);
        if ((short)(t0 - 1) == 0) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            (((struct oA8_uchar *)(a4))->v) = 0x1;
            t2 = 0xA8;
        }
        return t2;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(a4))->v) = 0x0;
    (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x210);
    (((struct oBC_float *)(a4))->v) = 0.200000003f;
    (((struct oB8_float *)(a4))->v) = 0.200000003f;
    (((struct oB4_float *)(a4))->v) = 0.200000003f;
    (((struct o40_float *)(a4))->v) = 1.0f;
    (((struct o44_float *)(a4))->v) = 0.699999988f;
    (((struct o48_float *)(a4))->v) = 1.0f;
    (((struct o28_float *)(a4))->v) = 0.0f;
    (((struct o2C_float *)(a4))->v) = (*(float *)((0xC20DF3C + ((unsigned char)(*(signed char *)((t1 + 0x0))) << 2))));
    (((struct o30_float *)(a4))->v) = 7.0f;
    *(unsigned short *)((a4 + 0x1C)) = 0x20;
    return 0x20;
}

int FUN_0c019954(int a4)
{
    register int t0;

    *(unsigned char *)(((FUN_0c01cc56(0xD, 0xC019C66)) + 0x3)) = 0x3;
    t0 = FUN_0c01cc56(0x15, 0xC019C66);
    *(unsigned char *)((t0 + 0x3)) = 0x4;
    *(unsigned int *)((t0 + 0x10)) = a4;
    t0 = *(signed char *)0xC30AA32;
    if (t0 != 0) {
        if (t0 != 2) {
        } else {
            t0 = FUN_0c01cc56(0x18, 0xC019C66);
            *(unsigned char *)((t0 + 0x3)) = 0x3;
            (((struct o28_float *)(t0))->v) = 0.0f;
            (((struct o2C_float *)(t0))->v) = ((((struct o4_float *)0xC019B1C)->v));
        }
    } else {
        t0 = FUN_0c01cc56(0x18, 0xC019C66);
        *(unsigned char *)((t0 + 0x3)) = 0x3;
        (((struct o28_float *)(t0))->v) = 0.0f;
        (((struct o2C_float *)(t0))->v) = ((((struct o0_float *)0xC019B1C)->v));
        t0 = FUN_0c01cc56(0x18, 0xC019C66);
        *(unsigned char *)((t0 + 0x3)) = 0x3;
        (((struct o28_float *)(t0))->v) = 0.0f;
        (((struct o2C_float *)(t0))->v) = ((((struct o4_float *)0xC019B1C)->v));
    }
    return FUN_0c01cb7c();
}

int FUN_0c019a06(int a4)
{
    register int t1;

    *(unsigned char *)(((FUN_0c01cc56(0x10, 0xC019C66)) + 0x3)) = 0x3;
    t1 = FUN_0c01cc56(0x15, 0xC019C66);
    *(unsigned char *)((t1 + 0x3)) = 0x5;
    *(unsigned int *)((t1 + 0x10)) = a4;
    return FUN_0c01cb7c();
}

int FUN_0c019a32(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t0 = *(signed char *)((a4 + 0x0));
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 1) {
            if ((unsigned char)t0 == 2) {
                t1 = 0x0;
                if ((*(signed char *)((a4 + 0x9))) != 0) {
                    *(unsigned char *)((a4 + 0x0)) = ((*(signed char *)((a4 + 0x0))) + 0x1);
                    *(unsigned char *)((a4 + 0x1)) = 0x0;
                    t2 = *(signed char *)((a4 + 0x1));
                    if ((unsigned char)t2 != 0) {
                        if ((unsigned char)t2 != 1) {
                            t3 = 0x0;
                            if ((unsigned char)t2 != 2) {
                            } else {
                                t3 = ((unsigned char)(*(signed char *)((a4 + 0xA))) + 0x1);
                            }
                            t2 = t3;
                        } else {
                            t3 = *(signed char *)((a4 + 0x4));
                            *(unsigned char *)((a4 + 0x4)) = (t3 - 1);
                            t4 = 0x0;
                            if ((signed char)(t3 - 1) == 0) {
                                *(unsigned char *)((a4 + 0x1)) = ((*(signed char *)((a4 + 0x1))) + 0x1);
                                t4 = ((unsigned char)(*(signed char *)((a4 + 0xA))) + 0x1);
                            }
                            t2 = t4;
                        }
                        t3 = t2;
                    } else {
                        *(unsigned char *)((a4 + 0x1)) = ((*(signed char *)((a4 + 0x1))) + 0x1);
                        t2 = 0xFFFFFFFF;
                        if ((*(signed char *)((a4 + 0xA))) == 0) {
                            t2 = 0xFF000000;
                        }
                        FUN_0c0573cc(t2, 0x0, 0x14);
                        *(unsigned char *)((a4 + 0x4)) = 0x14;
                        t2 = *(signed char *)((a4 + 0x4));
                        *(unsigned char *)((a4 + 0x4)) = (t2 - 1);
                        t4 = 0x0;
                        if ((signed char)(t2 - 1) == 0) {
                            *(unsigned char *)((a4 + 0x1)) = ((*(signed char *)((a4 + 0x1))) + 0x1);
                            t4 = ((unsigned char)(*(signed char *)((a4 + 0xA))) + 0x1);
                        }
                        t3 = t4;
                    }
                    t1 = t3;
                }
                t2 = t1;
            } else {
                t1 = 0x0;
                if ((unsigned char)t0 == 3) {
                    t0 = *(signed char *)((a4 + 0x1));
                    if ((unsigned char)t0 != 0) {
                        if ((unsigned char)t0 != 1) {
                            t3 = 0x0;
                            if ((unsigned char)t0 != 2) {
                            } else {
                                t3 = ((unsigned char)(*(signed char *)((a4 + 0xA))) + 0x1);
                            }
                            t0 = t3;
                        } else {
                            t3 = *(signed char *)((a4 + 0x4));
                            *(unsigned char *)((a4 + 0x4)) = (t3 - 1);
                            t4 = 0x0;
                            if ((signed char)(t3 - 1) == 0) {
                                *(unsigned char *)((a4 + 0x1)) = ((*(signed char *)((a4 + 0x1))) + 0x1);
                                t4 = ((unsigned char)(*(signed char *)((a4 + 0xA))) + 0x1);
                            }
                            t0 = t4;
                        }
                        t3 = t0;
                    } else {
                        *(unsigned char *)((a4 + 0x1)) = ((*(signed char *)((a4 + 0x1))) + 0x1);
                        t0 = 0xFFFFFFFF;
                        if ((*(signed char *)((a4 + 0xA))) == 0) {
                            t0 = 0xFF000000;
                        }
                        FUN_0c0573cc(t0, 0x0, 0x14);
                        *(unsigned char *)((a4 + 0x4)) = 0x14;
                        t0 = *(signed char *)((a4 + 0x4));
                        *(unsigned char *)((a4 + 0x4)) = (t0 - 1);
                        t4 = 0x0;
                        if ((signed char)(t0 - 1) == 0) {
                            *(unsigned char *)((a4 + 0x1)) = ((*(signed char *)((a4 + 0x1))) + 0x1);
                            t4 = ((unsigned char)(*(signed char *)((a4 + 0xA))) + 0x1);
                        }
                        t3 = t4;
                    }
                    t1 = t3;
                }
                t2 = t1;
            }
            t0 = t2;
        } else {
            t1 = *(signed char *)((a4 + 0x1));
            if ((unsigned char)t1 != 0) {
                if ((unsigned char)t1 != 1) {
                    if ((unsigned char)t1 != 2) {
                        if ((unsigned char)t1 != 3) {
                            if ((unsigned char)t1 != 4) {
                            } else {
                                t1 = FUN_0c01cd2c(0x2000);
                                if ((short)t1 != 0) {
                                    *(unsigned char *)((a4 + 0x1)) = 0x1;
                                    *(unsigned char *)((a4 + 0x8)) = 0x3;
                                    *(unsigned char *)((a4 + 0x9)) = 0x0;
                                    FUN_0c05aab6(0x0, 0x6);
                                } else {
                                    t1 = FUN_0c01cd2c(0x40);
                                    if ((short)t1 != 0) {
                                        *(unsigned char *)((a4 + 0x0)) = ((*(signed char *)((a4 + 0x0))) + 0x1);
                                        *(unsigned char *)((a4 + 0x9)) = 0x1;
                                        *(unsigned char *)((a4 + 0xA)) = 0x1;
                                        FUN_0c05aab6(0x0, 0x4);
                                    } else {
                                        t1 = FUN_0c01cd2c(0x101);
                                        if ((short)t1 != 0) {
                                            *(unsigned char *)((a4 + 0x0)) = ((*(signed char *)((a4 + 0x0))) + 0x1);
                                            *(unsigned char *)((a4 + 0x8)) = 0x4;
                                            *(unsigned char *)((a4 + 0x9)) = 0x0;
                                            FUN_0c05aab6(0x0, 0x3);
                                        } else {
                                            FUN_0c01c714((a4 + 0xA), 0x1, 0x3);
                                        }
                                    }
                                }
                            }
                        } else {
                            if ((unsigned char)(*(signed char *)((a4 + 0x9))) == 3) {
                                *(unsigned char *)((a4 + 0x1)) = ((*(signed char *)((a4 + 0x1))) + 0x1);
                                *(unsigned char *)((a4 + 0x8)) = 0x0;
                            }
                        }
                    } else {
                        t1 = FUN_0c01cd2c(0x1000);
                        if ((short)t1 != 0) {
                            *(unsigned char *)((a4 + 0x1)) = ((*(signed char *)((a4 + 0x1))) + 0x1);
                            *(unsigned char *)((a4 + 0x8)) = 0x2;
                            *(unsigned char *)((a4 + 0x9)) = 0x0;
                            FUN_0c05aab6(0x0, 0x6);
                        } else {
                            t1 = FUN_0c01cd2c(0x40);
                            if ((short)t1 == 0) {
                            } else {
                                *(unsigned char *)((a4 + 0x0)) = ((*(signed char *)((a4 + 0x0))) + 0x1);
                                *(unsigned char *)((a4 + 0x9)) = 0x1;
                                *(unsigned char *)((a4 + 0xA)) = 0x1;
                                FUN_0c05aab6(0x0, 0x4);
                            }
                        }
                    }
                } else {
                    if ((unsigned char)(*(signed char *)((a4 + 0x9))) != 3) {
                    } else {
                        *(unsigned char *)((a4 + 0x1)) = ((*(signed char *)((a4 + 0x1))) + 0x1);
                        *(unsigned char *)((a4 + 0x8)) = 0x0;
                    }
                }
            } else {
                *(unsigned char *)((a4 + 0x1)) = ((*(signed char *)((a4 + 0x1))) + 0x1);
                *(unsigned char *)((a4 + 0xA)) = 0x1;
                t1 = FUN_0c01cc56(0xB, 0xC019C66);
                *(unsigned char *)((t1 + 0x3)) = 0x0;
                *(unsigned int *)((t1 + 0x10)) = a4;
                t1 = FUN_0c01cc56(0xC, 0xC019C66);
                *(unsigned char *)((t1 + 0x3)) = 0x1;
                *(unsigned int *)((t1 + 0x10)) = a4;
                t1 = FUN_0c01cc56(0x15, 0xC019C66);
                *(unsigned char *)((t1 + 0x3)) = 0x2;
                *(unsigned int *)((t1 + 0x10)) = a4;
                *(unsigned char *)((a4 + 0x8)) = 0x1;
                *(unsigned char *)((a4 + 0x9)) = 0x0;
            }
            t0 = 0x0;
        }
        t1 = t0;
    } else {
        if ((*(signed char *)((a4 + 0x1))) == 0) {
            *(unsigned char *)((a4 + 0x1)) = ((*(signed char *)((a4 + 0x1))) + 0x1);
            FUN_0c0573c0(0xFFFFFFFF, 0x0, 0x14);
            *(unsigned char *)((a4 + 0x4)) = 0x14;
            FUN_0c01cb7c();
        }
        t0 = *(signed char *)((a4 + 0x4));
        *(unsigned char *)((a4 + 0x4)) = (t0 - 1);
        if ((signed char)(t0 - 1) != 0) {
        } else {
            *(unsigned char *)((a4 + 0x0)) = ((*(signed char *)((a4 + 0x0))) + 0x1);
            *(unsigned char *)((a4 + 0x1)) = 0x0;
        }
        t1 = 0x0;
    }
    return t1;
}

int FUN_0c019c66(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;
    register float u0;

    t0 = *(signed char *)((a4 + 0x3));
    t1 = *(int *)((a4 + 0x10));
    if (t0 != 0) {
        if (t0 == 1) {
            t2 = *(signed char *)((a4 + 0x14));
            if (t2 != 0) {
                t3 = t2;
                if (t2 != 1) {
                } else {
                    t2 = *(signed char *)((a4 + 0x15));
                    if (t2 != 0) {
                        if (t2 != 1) {
                            t4 = t2;
                            if (t2 == 2) {
                                t2 = *(signed char *)((t1 + 0x8));
                                t5 = t2;
                                if (t2 != 0) {
                                } else {
                                    (((struct o15_uchar *)(a4))->v) = 0x0;
                                    t5 = 0x15;
                                }
                                t4 = t5;
                            }
                            t2 = t4;
                        } else {
                            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                            t4 = *(signed char *)((t1 + 0x8));
                            t5 = (unsigned char)t4;
                            if ((unsigned char)t4 == 4) {
                            } else {
                                *(unsigned char *)((t1 + 0x9)) = ((*(signed char *)((t1 + 0x9))) + 0x1);
                                if ((unsigned char)(*(signed char *)((t1 + 0x8))) == 2) {
                                    (((struct oA8_uchar *)(a4))->v) = 0x1;
                                }
                                t4 = *(signed char *)((t1 + 0x8));
                                t6 = (unsigned char)t4;
                                if ((unsigned char)t4 != 3) {
                                } else {
                                    (((struct oA8_uchar *)(a4))->v) = 0x0;
                                    t6 = 0xA8;
                                }
                                t5 = t6;
                            }
                            t2 = t5;
                        }
                        t4 = t2;
                    } else {
                        t2 = *(signed char *)((t1 + 0x8));
                        t5 = t2;
                        if (t2 == 0) {
                        } else {
                            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                            t5 = 0x15;
                        }
                        t4 = t5;
                    }
                    t3 = t4;
                }
                t2 = t3;
            } else {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                (((struct oA8_uchar *)(a4))->v) = 0x0;
                (((struct o2C_float *)(a4))->v) = 0.0f;
                (((struct o30_float *)(a4))->v) = 0.0f;
                t2 = 0x30;
            }
            t3 = t2;
        } else {
            if (t0 == 2) {
                u0 = 128.0f;
                if ((*(signed char *)((t1 + 0xA))) == 0) {
                    u0 = -128.0f;
                }
                (((struct o28_float *)(a4))->v) = u0;
                t2 = *(signed char *)((a4 + 0x14));
                if (t2 != 0) {
                    if (t2 != 1) {
                        t4 = t2;
                        if (t2 != 2) {
                        } else {
                            t2 = FUN_0c01c62a(a4);
                            *(unsigned char *)((t1 + 0x9)) = t2;
                            t4 = t2;
                        }
                        t2 = t4;
                    } else {
                        FUN_0c012c34(a4);
                        t4 = *(signed char *)((a4 + 0x15));
                        if (t4 != 0) {
                            if (t4 != 1) {
                                t5 = t4;
                                if (t4 != 2) {
                                } else {
                                    t4 = *(signed char *)((t1 + 0x8));
                                    t6 = t4;
                                    if (t4 != 0) {
                                    } else {
                                        (((struct o15_uchar *)(a4))->v) = 0x0;
                                        t6 = 0x15;
                                    }
                                    t5 = t6;
                                }
                                t4 = t5;
                            } else {
                                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                                *(unsigned char *)((t1 + 0x9)) = ((*(signed char *)((t1 + 0x9))) + 0x1);
                                if ((unsigned char)(*(signed char *)((t1 + 0x8))) != 2) {
                                    t5 = *(signed char *)((t1 + 0x8));
                                    if ((unsigned char)t5 == 3) {
                                        (((struct oA8_uchar *)(a4))->v) = 0x0;
                                        t6 = 0xA8;
                                    } else {
                                        t7 = (unsigned char)t5;
                                        if ((unsigned char)t5 != 4) {
                                        } else {
                                            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                                            (((struct o1B_uchar *)(a4))->v) = 0x0;
                                            *(unsigned char *)((t1 + 0x9)) = 0x0;
                                            (((struct o22_ushort *)(a4))->v) = 0x0;
                                            (((struct oA8_uchar *)(a4))->v) = 0x1;
                                            t7 = 0xA8;
                                        }
                                        t6 = t7;
                                    }
                                    t5 = t6;
                                } else {
                                    (((struct oA8_uchar *)(a4))->v) = 0x1;
                                    t5 = 0xA8;
                                }
                                t4 = t5;
                            }
                            t5 = t4;
                        } else {
                            t4 = *(signed char *)((t1 + 0x8));
                            t6 = t4;
                            if (t4 == 0) {
                            } else {
                                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                                t6 = 0x15;
                            }
                            t5 = t6;
                        }
                        t2 = t5;
                    }
                    t4 = t2;
                } else {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    (((struct oA8_uchar *)(a4))->v) = 0x0;
                    (((struct o2C_float *)(a4))->v) = -176.0f;
                    (((struct o30_float *)(a4))->v) = 3.0f;
                    t4 = 0x30;
                }
                t2 = t4;
            } else {
                if (t0 == 3) {
                    t4 = 0x14;
                    if ((*(signed char *)((a4 + 0x14))) != 0) {
                    } else {
                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                        (((struct oA8_uchar *)(a4))->v) = 0x1;
                        t4 = 0xA8;
                    }
                    t5 = t4;
                } else {
                    if (t0 == 4) {
                        t4 = *(signed char *)((a4 + 0x14));
                        t6 = *(int *)((a4 + 0x10));
                        if (t4 != 0) {
                            if (t4 != 1) {
                                if (t4 != 2) {
                                    t7 = t4;
                                    if (t4 != 3) {
                                    } else {
                                        t4 = FUN_0c01c62a(a4);
                                        t8 = (signed char)t4;
                                        if ((signed char)t4 != 0) {
                                            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                                            t8 = 0x14;
                                        }
                                        t7 = t8;
                                    }
                                    t4 = t7;
                                } else {
                                    (((struct o2C_float *)(a4))->v) = (*(float *)((0xC20DF54 + ((unsigned char)(*(signed char *)((t6 + 0x0))) << 2))));
                                    FUN_0c012c34(a4);
                                    t7 = FUN_0c01cd2c(0x101);
                                    t8 = (short)t7;
                                    if ((short)t7 != 0) {
                                        t9 = (short)t7;
                                        if ((*(signed char *)0xC30EFA2) != 0) {
                                        } else {
                                            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                                            (((struct o1B_uchar *)(a4))->v) = 0x0;
                                            (((struct o22_ushort *)(a4))->v) = 0x0;
                                            t9 = 0x22;
                                        }
                                        t8 = t9;
                                    }
                                    t4 = t8;
                                }
                                t7 = t4;
                            } else {
                                (((struct o2C_float *)(a4))->v) = (*(float *)((0xC20DF54 + ((unsigned char)(*(signed char *)((t6 + 0x0))) << 2))));
                                FUN_0c012c34(a4);
                                t4 = *(short *)((a4 + 0x1C));
                                *(unsigned short *)((a4 + 0x1C)) = (t4 - 1);
                                t8 = (short)(t4 - 1);
                                if ((short)(t4 - 1) == 0) {
                                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                                    t8 = 0x14;
                                }
                                t7 = t8;
                            }
                            t4 = t7;
                        } else {
                            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                            (((struct oA8_uchar *)(a4))->v) = 0x1;
                            *(unsigned short *)((a4 + 0x1C)) = 0x14;
                            (((struct o2C_float *)(a4))->v) = (*(float *)((0xC20DF54 + ((unsigned char)(*(signed char *)((t6 + 0x0))) << 2))));
                            FUN_0c012c34(a4);
                            t6 = *(short *)((a4 + 0x1C));
                            *(unsigned short *)((a4 + 0x1C)) = (t6 - 1);
                            t7 = (short)(t6 - 1);
                            if ((short)(t6 - 1) == 0) {
                                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                                t7 = 0x14;
                            }
                            t4 = t7;
                        }
                        t6 = t4;
                    } else {
                        t4 = t0;
                        if (t0 == 5) {
                            t0 = *(signed char *)((a4 + 0x14));
                            t7 = *(int *)((a4 + 0x10));
                            if (t0 != 0) {
                                if (t0 != 1) {
                                    if (t0 != 2) {
                                        t8 = t0;
                                        if (t0 != 3) {
                                        } else {
                                            t0 = FUN_0c01c62a(a4);
                                            t9 = (signed char)t0;
                                            if ((signed char)t0 != 0) {
                                                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                                                t9 = 0x14;
                                            }
                                            t8 = t9;
                                        }
                                        t0 = t8;
                                    } else {
                                        (((struct o2C_float *)(a4))->v) = (*(float *)((0xC20DF64 + ((unsigned char)(*(signed char *)((t7 + 0x0))) << 2))));
                                        FUN_0c012c34(a4);
                                        t8 = FUN_0c01cd2c(0x101);
                                        t9 = (short)t8;
                                        if ((short)t8 != 0) {
                                            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                                            (((struct o1B_uchar *)(a4))->v) = 0x0;
                                            (((struct o22_ushort *)(a4))->v) = 0x0;
                                            t9 = 0x22;
                                        }
                                        t0 = t9;
                                    }
                                    t8 = t0;
                                } else {
                                    (((struct o2C_float *)(a4))->v) = (*(float *)((0xC20DF64 + ((unsigned char)(*(signed char *)((t7 + 0x0))) << 2))));
                                    FUN_0c012c34(a4);
                                    t0 = *(short *)((a4 + 0x1C));
                                    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
                                    t9 = (short)(t0 - 1);
                                    if ((short)(t0 - 1) == 0) {
                                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                                        t9 = 0x14;
                                    }
                                    t8 = t9;
                                }
                                t0 = t8;
                            } else {
                                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                                (((struct oA8_uchar *)(a4))->v) = 0x1;
                                *(unsigned short *)((a4 + 0x1C)) = 0x14;
                                (((struct o2C_float *)(a4))->v) = (*(float *)((0xC20DF64 + ((unsigned char)(*(signed char *)((t7 + 0x0))) << 2))));
                                FUN_0c012c34(a4);
                                t7 = *(short *)((a4 + 0x1C));
                                *(unsigned short *)((a4 + 0x1C)) = (t7 - 1);
                                t8 = (short)(t7 - 1);
                                if ((short)(t7 - 1) == 0) {
                                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                                    t8 = 0x14;
                                }
                                t0 = t8;
                            }
                            t4 = t0;
                        }
                        t6 = t4;
                    }
                    t5 = t6;
                }
                t2 = t5;
            }
            t3 = t2;
        }
        t0 = t3;
    } else {
        t2 = *(signed char *)((a4 + 0x14));
        if (t2 != 0) {
            t3 = t2;
            if (t2 != 1) {
            } else {
                t2 = *(signed char *)((a4 + 0x15));
                if (t2 != 0) {
                    if (t2 != 1) {
                        if (t2 != 2) {
                            t4 = t2;
                            if (t2 != 3) {
                            } else {
                                t2 = *(signed char *)((t1 + 0x8));
                                t5 = t2;
                                if (t2 != 0) {
                                } else {
                                    (((struct o15_uchar *)(a4))->v) = 0x0;
                                    t5 = 0x15;
                                }
                                t4 = t5;
                            }
                            t2 = t4;
                        } else {
                            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
                            t4 = 0x2C;
                            if (((((struct o4C_float *)(a4))->v)) > ((((struct o2C_float *)(a4))->v))) {
                            } else {
                                (((struct o2C_float *)(a4))->v) = ((((struct o4C_float *)(a4))->v));
                                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                                t5 = *(signed char *)((t1 + 0x9));
                                *(unsigned char *)((t1 + 0x9)) = (t5 + 0x1);
                                t4 = (t5 + 0x1);
                            }
                            t2 = t4;
                        }
                        t4 = t2;
                    } else {
                        t2 = *(signed char *)((t1 + 0x8));
                        if ((unsigned char)t2 != 1) {
                            if ((unsigned char)t2 != 2) {
                                if ((unsigned char)t2 != 3) {
                                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x2);
                                    t2 = 0x15;
                                } else {
                                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x2);
                                    (((struct oA8_uchar *)(a4))->v) = 0x1;
                                    t5 = *(signed char *)((t1 + 0x9));
                                    *(unsigned char *)((t1 + 0x9)) = (t5 + 0x1);
                                    t2 = (t5 + 0x1);
                                }
                                t5 = t2;
                            } else {
                                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x2);
                                (((struct oA8_uchar *)(a4))->v) = 0x0;
                                t2 = *(signed char *)((t1 + 0x9));
                                *(unsigned char *)((t1 + 0x9)) = (t2 + 0x1);
                                t5 = (t2 + 0x1);
                            }
                            t2 = t5;
                        } else {
                            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                            (((struct o50_float *)(a4))->v) = 10.0f;
                            (((struct o4C_float *)(a4))->v) = 0.0f;
                            t2 = 0x4C;
                        }
                        t4 = t2;
                    }
                    t2 = t4;
                } else {
                    t4 = *(signed char *)((t1 + 0x8));
                    t1 = t4;
                    if (t4 == 0) {
                    } else {
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        t1 = 0x15;
                    }
                    t2 = t1;
                }
                t3 = t2;
            }
            t1 = t3;
        } else {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            (((struct o2C_float *)(a4))->v) = -400.0f;
            (((struct o30_float *)(a4))->v) = 0.0f;
            t1 = 0x30;
        }
        t0 = t1;
    }
    return t0;
}
