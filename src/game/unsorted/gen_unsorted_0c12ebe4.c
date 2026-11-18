/* game/unsorted: functions 0C12EBE4-0C12F2EA, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o168_float { char p[0x168]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int thunk_FUN_0c058310(int, int);
int FUN_0c187798(void);
int FUN_0c12ebe4(int a4, int a5);
int FUN_0c12ed48(int a4, int a5, int a6, int a7);
int FUN_0c12f292(int a4);
int FUN_0c12f2c6(int a4);


int FUN_0c12ed48(int a4, int a5, int a6, int a7)
{
    register int t0;
    int t1;
    register int t2;
    register int t3;
    register int t4;
    register float u0;

    t0 = (((struct oC4_int *)(a4))->v);
    t1 = *(signed char *)(((*(int *)((a4 + 0x10))) + 0x3715));
    if ((t1 != 26) && ((t1 != 33) && (t1 != 20))) {
        (((struct o14_uchar *)(a4))->v) = 0xFFFFFFFF;
    }
    t1 = *(signed char *)((a4 + 0x14));
    if (t1 != 0) {
        if (t1 != 1) {
            if (t1 == 2) {
                t2 = *(signed char *)((a4 + 0x15));
                if (t2 != 0) {
                    if (t2 != 1) {
                        if (t2 != 2) {
                            if (t2 != 3) {
                                t3 = t2;
                                if (t2 != 4) {
                                } else {
                                    (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) + 0.0199999996f);
                                    (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + 0.0199999996f);
                                    (((struct o18_float *)(t0))->v) = ((float)(*(short *)((a4 + 0x1C))) / 60.0f);
                                    (((struct o1C_float *)(t0))->v) = ((float)(*(short *)((a4 + 0x1C))) / 60.0f);
                                    t2 = *(short *)((a4 + 0x1C));
                                    (((struct o20_float *)(t0))->v) = ((float)t2 / 60.0f);
                                    if (!(((float)t2 / 60.0f) > 0.0f)) {
                                        (((struct o14_uchar *)(a4))->v) = 0xA;
                                    }
                                    t2 = *(short *)((a4 + 0x1C));
                                    *(unsigned short *)((a4 + 0x1C)) = (t2 - 1);
                                    t3 = (t2 - 1);
                                }
                                t2 = t3;
                            } else {
                                (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) - 0.5f);
                                (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) - 0.5f);
                                t3 = *(short *)((a4 + 0x1E));
                                *(unsigned short *)((a4 + 0x1E)) = (t3 - 1);
                                t4 = (short)(t3 - 1);
                                if ((short)(t3 - 1) == 0) {
                                    *(unsigned short *)((a4 + 0x1E)) = 0x2;
                                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                                    t4 = 0x15;
                                }
                                t2 = t4;
                            }
                            t3 = t2;
                        } else {
                            t2 = *(short *)((a4 + 0x1E));
                            *(unsigned short *)((a4 + 0x1E)) = (t2 - 1);
                            t4 = (short)(t2 - 1);
                            if ((short)(t2 - 1) == 0) {
                                *(unsigned short *)((a4 + 0x1E)) = 0x3;
                                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                                t4 = 0x15;
                            }
                            t3 = t4;
                        }
                        t2 = t3;
                    } else {
                        (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) + 0.5f);
                        (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + 0.5f);
                        t3 = *(short *)((a4 + 0x1E));
                        *(unsigned short *)((a4 + 0x1E)) = (t3 - 1);
                        t4 = (short)(t3 - 1);
                        if ((short)(t3 - 1) != 0) {
                        } else {
                            *(unsigned short *)((a4 + 0x1E)) = 0x2;
                            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                            t4 = 0x15;
                        }
                        t2 = t4;
                    }
                    t3 = t2;
                } else {
                    *(unsigned short *)((a4 + 0x1E)) = 0x2;
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) + 0.5f);
                    (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + 0.5f);
                    t2 = *(short *)((a4 + 0x1E));
                    *(unsigned short *)((a4 + 0x1E)) = (t2 - 1);
                    t4 = (short)(t2 - 1);
                    if ((short)(t2 - 1) != 0) {
                    } else {
                        *(unsigned short *)((a4 + 0x1E)) = 0x2;
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        t4 = 0x15;
                    }
                    t3 = t4;
                }
                *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + 0x200);
                return t3;
            }
            if (t1 == 3) {
                t2 = *(signed char *)((a4 + 0x15));
                if (t2 != 0) {
                    if (t2 != 1) {
                        if (t2 != 2) {
                            if (t2 != 3) {
                                t3 = t2;
                                if (t2 != 4) {
                                } else {
                                    (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) + 0.0199999996f);
                                    (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + 0.0199999996f);
                                    (((struct o18_float *)(t0))->v) = ((float)(*(short *)((a4 + 0x1C))) / 60.0f);
                                    (((struct o1C_float *)(t0))->v) = ((float)(*(short *)((a4 + 0x1C))) / 60.0f);
                                    t2 = *(short *)((a4 + 0x1C));
                                    (((struct o20_float *)(t0))->v) = ((float)t2 / 60.0f);
                                    if (!(((float)t2 / 60.0f) > 0.0f)) {
                                        (((struct o14_uchar *)(a4))->v) = 0xA;
                                    }
                                    t2 = *(short *)((a4 + 0x1C));
                                    *(unsigned short *)((a4 + 0x1C)) = (t2 - 1);
                                    t3 = (t2 - 1);
                                }
                                t2 = t3;
                            } else {
                                (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) - 0.5f);
                                (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) - 0.5f);
                                t3 = *(short *)((a4 + 0x1E));
                                *(unsigned short *)((a4 + 0x1E)) = (t3 - 1);
                                t4 = (short)(t3 - 1);
                                if ((short)(t3 - 1) == 0) {
                                    *(unsigned short *)((a4 + 0x1E)) = 0x2;
                                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                                    t4 = 0x15;
                                }
                                t2 = t4;
                            }
                            t3 = t2;
                        } else {
                            t2 = *(short *)((a4 + 0x1E));
                            *(unsigned short *)((a4 + 0x1E)) = (t2 - 1);
                            t4 = (short)(t2 - 1);
                            if ((short)(t2 - 1) == 0) {
                                *(unsigned short *)((a4 + 0x1E)) = 0x3;
                                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                                t4 = 0x15;
                            }
                            t3 = t4;
                        }
                        t2 = t3;
                    } else {
                        (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) + 0.5f);
                        (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + 0.5f);
                        t3 = *(short *)((a4 + 0x1E));
                        *(unsigned short *)((a4 + 0x1E)) = (t3 - 1);
                        t4 = (short)(t3 - 1);
                        if ((short)(t3 - 1) != 0) {
                        } else {
                            *(unsigned short *)((a4 + 0x1E)) = 0x2;
                            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                            t4 = 0x15;
                        }
                        t2 = t4;
                    }
                    t3 = t2;
                } else {
                    *(unsigned short *)((a4 + 0x1E)) = 0x2;
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) + 0.5f);
                    (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + 0.5f);
                    t2 = *(short *)((a4 + 0x1E));
                    *(unsigned short *)((a4 + 0x1E)) = (t2 - 1);
                    t4 = (short)(t2 - 1);
                    if ((short)(t2 - 1) != 0) {
                    } else {
                        *(unsigned short *)((a4 + 0x1E)) = 0x2;
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        t4 = 0x15;
                    }
                    t3 = t4;
                }
                *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + 0x400);
                return t3;
            }
            if (t1 == 4) {
                t2 = *(signed char *)((a4 + 0x15));
                if (t2 != 0) {
                    t3 = t2;
                    if (t2 != 1) {
                    } else {
                        *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + 0x400);
                        (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) - 0.0199999996f);
                        (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) - 0.0199999996f);
                        t2 = *(short *)((a4 + 0x1C));
                        (((struct o14_float *)(t0))->v) = ((float)t2 / 30.0f);
                        if (((float)t2 / 30.0f) > 0.0f) {
                        } else {
                            (((struct o14_uchar *)(a4))->v) = 0xA;
                        }
                        t2 = *(short *)((a4 + 0x1C));
                        *(unsigned short *)((a4 + 0x1C)) = (t2 - 1);
                        t3 = (t2 - 1);
                    }
                    t2 = t3;
                } else {
                    *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + 0x200);
                    (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) - 0.00999999978f);
                    (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) - 0.00999999978f);
                    t3 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t3 - 1);
                    t4 = (short)(t3 - 1);
                    if ((short)(t3 - 1) != 0) {
                    } else {
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        *(unsigned short *)((a4 + 0x1C)) = 0x1E;
                        t4 = 0x1E;
                    }
                    t2 = t4;
                }
                return t2;
            }
            if (t1 == 5) {
                t2 = *(signed char *)((a4 + 0x15));
                t3 = t2;
                if (t2 != 0) {
                } else {
                    *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + 0x400);
                    (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) + 0.0299999993f);
                    (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + 0.0299999993f);
                    (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) - 0.00999999978f);
                    t2 = *(short *)((a4 + 0x1C));
                    (((struct o14_float *)(t0))->v) = ((float)t2 / 60.0f);
                    if (!(((float)t2 / 60.0f) > 0.0f)) {
                        (((struct o14_uchar *)(a4))->v) = 0xA;
                    }
                    t2 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t2 - 1);
                    t3 = (t2 - 1);
                }
                return t3;
            }
            if (t1 == 6) {
                t2 = *(signed char *)((a4 + 0x15));
                t3 = t2;
                if (t2 != 0) {
                } else {
                    (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) - 0.00999999978f);
                    (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) - 0.00999999978f);
                    (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) + 0.00999999978f);
                    t2 = *(short *)((a4 + 0x1C));
                    (((struct o14_float *)(t0))->v) = ((float)t2 / 60.0f);
                    if (!(((float)t2 / 60.0f) > 0.0f)) {
                        (((struct o14_uchar *)(a4))->v) = 0xA;
                    }
                    t2 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t2 - 1);
                    t3 = (t2 - 1);
                }
                return t3;
            }
            if (t1 == 7) {
                t2 = *(signed char *)((a4 + 0x15));
                t3 = t2;
                if (t2 == 0) {
                    u0 = (((struct o0_float *)0xC12F2EC)->v);
                    (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) + u0);
                    (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + u0);
                    (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) + u0);
                    (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
                    (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
                    (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + ((((struct o54_float *)(a4))->v)));
                    (((struct o18_float *)(t0))->v) = ((float)(*(short *)((a4 + 0x1C))) / 60.0f);
                    (((struct o1C_float *)(t0))->v) = ((float)(*(short *)((a4 + 0x1C))) / 60.0f);
                    t2 = *(short *)((a4 + 0x1C));
                    (((struct o20_float *)(t0))->v) = ((float)t2 / 60.0f);
                    if (((float)t2 / 60.0f) > 0.0f) {
                    } else {
                        (((struct o14_uchar *)(a4))->v) = 0xA;
                    }
                    t2 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t2 - 1);
                    t3 = (t2 - 1);
                }
                return t3;
            }
            if (t1 == 8) {
                t1 = *(signed char *)((a4 + 0x15));
                t2 = t1;
                if (t1 == 0) {
                    FUN_0c12f2c6(a4);
                    u0 = (((struct o4_float *)0xC12F2EC)->v);
                    (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) - u0);
                    (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) + 0.0199999996f);
                    (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) - u0);
                    (((struct o18_float *)(t0))->v) = ((float)(*(short *)((a4 + 0x1C))) / 20.0f);
                    (((struct o1C_float *)(t0))->v) = ((float)(*(short *)((a4 + 0x1C))) / 20.0f);
                    t1 = *(short *)((a4 + 0x1C));
                    (((struct o20_float *)(t0))->v) = ((float)t1 / 20.0f);
                    if (!(((float)t1 / 20.0f) > 0.0f)) {
                        (((struct o14_uchar *)(a4))->v) = 0xA;
                    }
                    t1 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
                    t2 = (t1 - 1);
                }
                return t2;
            }
            return FUN_0c03f346(a4, 0x3, a6, a7);
        }
        t1 = *(signed char *)((a4 + 0x15));
        t2 = t1;
        if (t1 != 0) {
        } else {
            *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + 0x4000);
            (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) + 0.0199999996f);
            (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + 0.0199999996f);
            (((struct o18_float *)(t0))->v) = ((float)(*(short *)((a4 + 0x1C))) / 20.0f);
            (((struct o1C_float *)(t0))->v) = ((float)(*(short *)((a4 + 0x1C))) / 20.0f);
            t1 = *(short *)((a4 + 0x1C));
            (((struct o20_float *)(t0))->v) = ((float)t1 / 20.0f);
            if (!(((float)t1 / 20.0f) > 0.0f)) {
                (((struct o14_uchar *)(a4))->v) = 0xA;
            }
            t1 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
            t2 = (t1 - 1);
        }
        return t2;
    }
    t1 = *(signed char *)((a4 + 0x15));
    if (t1 != 0) {
        t2 = t1;
        if (t1 != 1) {
        } else {
            *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + 0x800);
            (((struct o18_float *)(t0))->v) = ((float)(*(short *)((a4 + 0x1C))) / 30.0f);
            (((struct o1C_float *)(t0))->v) = ((float)(*(short *)((a4 + 0x1C))) / 30.0f);
            t1 = *(short *)((a4 + 0x1C));
            (((struct o20_float *)(t0))->v) = ((float)t1 / 30.0f);
            if (((float)t1 / 30.0f) > 0.0f) {
            } else {
                (((struct o14_uchar *)(a4))->v) = 0xA;
            }
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
            t2 = (t0 - 1);
        }
        t0 = t2;
    } else {
        FUN_0c12f292(a4);
        *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + 0x800);
        t1 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
        t2 = (short)(t1 - 1);
        if ((short)(t1 - 1) != 0) {
        } else {
            *(unsigned short *)((a4 + 0x1C)) = 0x1E;
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            t2 = 0x15;
        }
        t0 = t2;
    }
    return t0;
}

int FUN_0c12f292(int a4)
{
    register int t0;

    t0 = *(int *)((a4 + 0x10));
    thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((t0 + 0x1))) * (short)0x3938) + 0xC532564))) + 0x28), (a4 + 0x28));
    (((struct o28_float *)(a4))->v) = ((((struct o28_float *)(t0))->v));
    (((struct o30_float *)(a4))->v) = ((((struct o30_float *)(t0))->v));
    return 0x30;
}

int FUN_0c12f2c6(int a4)
{
    return thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)(((*(int *)((a4 + 0x10))) + 0x1))) * (short)0x3938) + 0xC53256C))) + 0x28), (a4 + 0x28));
}
