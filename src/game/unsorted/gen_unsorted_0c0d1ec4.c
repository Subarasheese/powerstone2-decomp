/* game/unsorted: functions 0C0D1EC4-0C0D2106, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o24_short { char p[0x24]; short v; };
struct o41C_short { char p[0x41C]; short v; };
struct o41C_ushort { char p[0x41C]; unsigned short v; };
struct o6C_float { char p[0x6C]; float v; };
struct o78_int { char p[0x78]; int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
int FUN_0c03f346(int, int, int, int);
int thunk_FUN_0c05abb2(int, int);
int FUN_0c0cff28(int, int);
int FUN_0c0d04c4(int, int);
int FUN_0c0d4010(int);
int FUN_0c0d1ec4(int a4, int a5, int a6, int a7);

int FUN_0c0d1ec4(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;

    if ((*(signed char *)0xC54223C) != 0) {
        return ((int (*)(int, int, int, int))(FUN_0c03f346))(a4, a5, a6, a7);
    }
    t4 = *(signed char *)((a4 + 0x14));
    if (t4 != 0) {
        if (t4 != 1) {
            return t4;
        }
        t4 = *(signed char *)((a4 + 0x15));
        if (t4 != 0) {
            t5 = a5;
            if (t4 != 1) {
            } else {
                t4 = *(signed char *)((a4 + 0x16));
                if (t4 != 0) {
                    if (t4 != 1) {
                        if (t4 != 2) {
                            if (t4 != 3) {
                            } else {
                                t4 = (((struct oC8_int *)(a4))->v);
                                (((struct o6C_float *)(t4))->v) = (((((struct o6C_float *)(t4))->v)) + (1.0f + 1.0f));
                                t4 = (((struct oCC_int *)(a4))->v);
                                (((struct o6C_float *)(t4))->v) = (((((struct o6C_float *)(t4))->v)) - (1.0f + 1.0f));
                                *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) - 1);
                                if ((int)(*(short *)((a4 + 0x1E))) <= 0) {
                                    FUN_0c0cff28(a4, 0x0);
                                    (((struct o16_uchar *)(a4))->v) = 0x0;
                                    *(unsigned short *)((a4 + 0x1E)) = 0x12C;
                                    if ((*(int *)((a4 + 0x10))) != 0) {
                                        (((struct o41C_ushort *)(a4))->v) = ((((struct o24_short *)((*(int *)((a4 + 0x10)))))->v));
                                    }
                                }
                            }
                        } else {
                            t4 = (((struct oC4_int *)(a4))->v);
                            (((struct o78_uint *)(t4))->v) = (((((struct o78_int *)(t4))->v)) + 0x444);
                            (((struct o78_uint *)((*(int *)(((0xC4 + a4) + 0x4)))))->v) = (-((((struct o78_int *)(((((struct oC4_int *)(a4))->v))))->v)));
                            (((struct o78_uint *)((*(int *)(((0xC4 + a4) + 0x8)))))->v) = ((((struct o78_int *)((*(int *)(((0xC4 + a4) + 0x4)))))->v));
                            *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) - 1);
                            if ((int)(*(short *)((a4 + 0x1E))) <= 0) {
                                (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                                *(unsigned short *)((a4 + 0x1E)) = 0xF;
                                (((struct o78_uint *)(((((struct oC4_int *)(a4))->v))))->v) = 0x0;
                                (((struct o78_uint *)(((((struct oC8_int *)(a4))->v))))->v) = 0x0;
                                (((struct o78_uint *)(((((struct oCC_int *)(a4))->v))))->v) = 0x0;
                            }
                            t4 = (0xC4 + a4);
                        }
                        t6 = t4;
                    } else {
                        t4 = (((struct oC8_int *)(a4))->v);
                        (((struct o6C_float *)(t4))->v) = (((((struct o6C_float *)(t4))->v)) - (1.0f + 1.0f));
                        t4 = (((struct oCC_int *)(a4))->v);
                        (((struct o6C_float *)(t4))->v) = (((((struct o6C_float *)(t4))->v)) + (1.0f + 1.0f));
                        *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) - 1);
                        if ((int)(*(short *)((a4 + 0x1E))) <= 0) {
                            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                            *(unsigned short *)((a4 + 0x1E)) = 0x1E;
                        }
                        t6 = a5;
                    }
                    t4 = t6;
                } else {
                    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                    *(unsigned short *)((a4 + 0x1E)) = 0xF;
                    *(unsigned int *)((a4 + 0x10)) = 0x0;
                    (((struct o41C_ushort *)(a4))->v) = 0x0;
                    FUN_0c0d4010(a4);
                    thunk_FUN_0c05abb2(0x49, (a4 + 0x28));
                    t6 = (((struct oC8_int *)(a4))->v);
                    (((struct o6C_float *)(t6))->v) = (((((struct o6C_float *)(t6))->v)) - (1.0f + 1.0f));
                    t6 = (((struct oCC_int *)(a4))->v);
                    (((struct o6C_float *)(t6))->v) = (((((struct o6C_float *)(t6))->v)) + (1.0f + 1.0f));
                    *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) - 1);
                    if ((int)(*(short *)((a4 + 0x1E))) <= 0) {
                        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                        *(unsigned short *)((a4 + 0x1E)) = 0x1E;
                    }
                }
                t5 = t4;
            }
            t4 = t5;
        } else {
            t5 = *(int *)((a4 + 0x10));
            if ((t5 != 0) && (t0 = (((struct o41C_short *)(a4))->v), t1 = (((struct o24_short *)(t5))->v), t1 == t0)) {
            } else {
                *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) - 1);
                if ((int)(*(short *)((a4 + 0x1E))) > 0) {
                } else {
                    FUN_0c0cff28(a4, 0x1);
                    (((struct o16_uchar *)(a4))->v) = 0x0;
                }
            }
        }
        t0 = *(signed char *)((0x14 + (*(int *)((0xC540D94 + ((*(signed char *)((a4 + 0x1B))) << 2))))));
        if (t0 == 2) {
            return ((int (*)(int, int))(FUN_0c03f346))(a4, t4);
        }
        return t0;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct o16_uchar *)(a4))->v) = 0x0;
    (((struct o15_uchar *)(a4))->v) = 0x0;
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    *(unsigned int *)((a4 + 0x10)) = 0x0;
    (((struct o41C_ushort *)(a4))->v) = 0x0;
    *(unsigned short *)((a4 + 0x1E)) = (*(int *)((0xC1C7AE8 + ((*(signed char *)((a4 + 0x2))) << 2))));
    if ((int)(*(signed char *)((a4 + 0x1B))) >= 0) {
        (((struct oA4_uint *)(a4))->v) = ((*(int *)((((*(signed char *)((a4 + 0x1B))) << 2) + 0xC540D94))) + 0x64);
    }
    FUN_0c0d04c4((0xAC + a4), (a4 + 0x34));
    t0 = 0x0;
    for (;;) {
        if ((int)t0 >= (int)((((struct oC0_int *)(a4))->v))) {
            break;
        }
        t1 = 0xC4;
        t1 = (t1 + a4);
        t4 = (*(int *)((((t0 << 2) + t1) + 0x0)));
        t0 = (t0 + 0x1);
        *(unsigned short *)((t4 + 0x6)) = 0x3;
    }
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        t1 = 0x3;
        if (t0 != 1) {
        } else {
            t0 = *(signed char *)((a4 + 0x16));
            if (t0 != 0) {
                if (t0 != 1) {
                    if (t0 != 2) {
                        t4 = 0x3;
                        if (t0 != 3) {
                        } else {
                            t0 = (((struct oC8_int *)(a4))->v);
                            (((struct o6C_float *)(t0))->v) = (((((struct o6C_float *)(t0))->v)) + (1.0f + 1.0f));
                            t0 = (((struct oCC_int *)(a4))->v);
                            (((struct o6C_float *)(t0))->v) = (((((struct o6C_float *)(t0))->v)) - (1.0f + 1.0f));
                            *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) - 1);
                            if ((int)(*(short *)((a4 + 0x1E))) <= 0) {
                                FUN_0c0cff28(a4, 0x0);
                                (((struct o16_uchar *)(a4))->v) = 0x0;
                                *(unsigned short *)((a4 + 0x1E)) = 0x12C;
                                if ((*(int *)((a4 + 0x10))) != 0) {
                                    (((struct o41C_ushort *)(a4))->v) = ((((struct o24_short *)((*(int *)((a4 + 0x10)))))->v));
                                }
                            } else {
                                t0 = 0x3;
                            }
                            t4 = t0;
                        }
                        t0 = t4;
                    } else {
                        t4 = (((struct oC4_int *)(a4))->v);
                        (((struct o78_uint *)(t4))->v) = (((((struct o78_int *)(t4))->v)) + 0x444);
                        (((struct o78_uint *)((*(int *)(((0xC4 + a4) + 0x4)))))->v) = (-((((struct o78_int *)(((((struct oC4_int *)(a4))->v))))->v)));
                        (((struct o78_uint *)((*(int *)(((0xC4 + a4) + 0x8)))))->v) = ((((struct o78_int *)((*(int *)(((0xC4 + a4) + 0x4)))))->v));
                        *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) - 1);
                        if ((int)(*(short *)((a4 + 0x1E))) <= 0) {
                            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                            *(unsigned short *)((a4 + 0x1E)) = 0xF;
                            (((struct o78_uint *)(((((struct oC4_int *)(a4))->v))))->v) = 0x0;
                            (((struct o78_uint *)(((((struct oC8_int *)(a4))->v))))->v) = 0x0;
                            (((struct o78_uint *)(((((struct oCC_int *)(a4))->v))))->v) = 0x0;
                        }
                        t0 = (0xC4 + a4);
                    }
                    t4 = t0;
                } else {
                    t0 = (((struct oC8_int *)(a4))->v);
                    (((struct o6C_float *)(t0))->v) = (((((struct o6C_float *)(t0))->v)) - (1.0f + 1.0f));
                    t0 = (((struct oCC_int *)(a4))->v);
                    (((struct o6C_float *)(t0))->v) = (((((struct o6C_float *)(t0))->v)) + (1.0f + 1.0f));
                    *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) - 1);
                    if ((int)(*(short *)((a4 + 0x1E))) <= 0) {
                        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                        *(unsigned short *)((a4 + 0x1E)) = 0x1E;
                    }
                    t4 = 0x3;
                }
                t0 = t4;
            } else {
                (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                *(unsigned short *)((a4 + 0x1E)) = 0xF;
                *(unsigned int *)((a4 + 0x10)) = 0x0;
                (((struct o41C_ushort *)(a4))->v) = 0x0;
                FUN_0c0d4010(a4);
                thunk_FUN_0c05abb2(0x49, (a4 + 0x28));
                t4 = (((struct oC8_int *)(a4))->v);
                (((struct o6C_float *)(t4))->v) = (((((struct o6C_float *)(t4))->v)) - (1.0f + 1.0f));
                t4 = (((struct oCC_int *)(a4))->v);
                (((struct o6C_float *)(t4))->v) = (((((struct o6C_float *)(t4))->v)) + (1.0f + 1.0f));
                *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) - 1);
                if ((int)(*(short *)((a4 + 0x1E))) <= 0) {
                    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                    *(unsigned short *)((a4 + 0x1E)) = 0x1E;
                }
            }
            t1 = t0;
        }
        t0 = t1;
    } else {
        t1 = *(int *)((a4 + 0x10));
        t4 = 0x3;
        if ((t1 != 0) && (t2 = (((struct o41C_short *)(a4))->v), t3 = (((struct o24_short *)(t1))->v), t3 == t2)) {
        } else {
            *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) - 1);
            if ((int)(*(short *)((a4 + 0x1E))) > 0) {
                t1 = 0x3;
            } else {
                FUN_0c0cff28(a4, 0x1);
                (((struct o16_uchar *)(a4))->v) = 0x0;
            }
            t4 = t1;
        }
        t0 = t4;
    }
    t1 = *(signed char *)((0x14 + (*(int *)((0xC540D94 + ((*(signed char *)((a4 + 0x1B))) << 2))))));
    if (t1 == 2) {
        return ((int (*)(int, int))(FUN_0c03f346))(a4, t0);
    }
    return t1;
}
