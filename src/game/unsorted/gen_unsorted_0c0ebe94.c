/* game/unsorted: functions 0C0EBE94-0C0EC1CA, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o2C_float { char p[0x2C]; float v; };
struct o6C_float { char p[0x6C]; float v; };
struct o74_float { char p[0x74]; float v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03f346(int);
int thunk_FUN_0c05abb2(int, int);
int FUN_0c07e420(int, int);
int FUN_0c187798(void);
int FUN_0c0ebe94(int a4, float f4, float f5);

int FUN_0c0ebe94(int a4, float f4, float f5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            thunk_FUN_0c05abb2(0x4C, (a4 + 0x28));
            return FUN_0c03f346(a4);
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o15_uchar *)(a4))->v) = 0x0;
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0x1;
        if ((int)(*(signed char *)((a4 + 0x1B))) >= 0) {
            (((struct oA4_uint *)(a4))->v) = ((*(int *)((((*(signed char *)((a4 + 0x1B))) << 2) + 0xC540D94))) + 0x64);
        }
        FUN_0c07e420(a4, 0x7);
        (((struct o12A_ushort *)(a4))->v) = 0x0;
        (((struct o2C_float *)(a4))->v) = 3600.0f;
        FUN_0c187798();
    }
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 == 4) {
                        t1 = *(short *)((a4 + 0x1C));
                        *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
                        t2 = (short)(t1 - 1);
                        if ((int)(short)(t1 - 1) <= (int)0x78) {
                            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                            t2 = 0x15;
                        }
                        t1 = t2;
                    } else {
                        if (t0 == 5) {
                            t2 = *(short *)((a4 + 0x1C));
                            *(unsigned short *)((a4 + 0x1C)) = (t2 - 1);
                            t3 = (short)(t2 - 1);
                            if ((short)(t2 - 1) == 0) {
                                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                                (((struct o12A_ushort *)(a4))->v) = 0xF;
                                t3 = (FUN_0c07e420(a4, 0x7));
                            }
                            t2 = t3;
                        } else {
                            if (t0 == 6) {
                                u0 = (((struct o2C_float *)(a4))->v);
                                (((struct o2C_float *)(a4))->v) = (u0 - 30.0f);
                                t3 = 0x2C;
                                if (!((u0 - 30.0f) > 3600.0f)) {
                                    (((struct o2C_float *)(a4))->v) = 3600.0f;
                                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                                    t2 = 0x1E;
                                    if ((*(signed char *)((a4 + 0x131))) != 0) {
                                        t2 = 0xA;
                                    }
                                    *(unsigned short *)((a4 + 0x1E)) = t2;
                                    (((struct o12A_ushort *)(a4))->v) = 0x0;
                                    t3 = (thunk_FUN_0c05abb2(0x45, (a4 + 0x28)));
                                }
                                t2 = t3;
                            } else {
                                t3 = t0;
                                if (t0 == 7) {
                                    if (((*(short *)((a4 + 0x1E))) & 0x2) != 0) {
                                        t0 = (((struct oC4_int *)(a4))->v);
                                        t3 = t0;
                                        u0 = (((((struct o6C_float *)(t0))->v)) + 3.0f);
                                    } else {
                                        t0 = (((struct oC4_int *)(a4))->v);
                                        t3 = t0;
                                        u0 = (((((struct o6C_float *)(t0))->v)) - 3.0f);
                                    }
                                    (((struct o6C_float *)(t3))->v) = u0;
                                    if (((*(short *)((a4 + 0x1E))) & 0x4) != 0) {
                                        t0 = (((struct oC4_int *)(a4))->v);
                                        t3 = t0;
                                        u0 = (((((struct o74_float *)(t0))->v)) + 3.0f);
                                    } else {
                                        t0 = (((struct oC4_int *)(a4))->v);
                                        t3 = t0;
                                        u0 = (((((struct o74_float *)(t0))->v)) - 3.0f);
                                    }
                                    (((struct o74_float *)(t3))->v) = u0;
                                    t0 = *(short *)((a4 + 0x1E));
                                    *(unsigned short *)((a4 + 0x1E)) = (t0 - 1);
                                    t3 = (short)(t0 - 1);
                                    if ((int)(short)(t0 - 1) <= 0) {
                                        (((struct o15_uchar *)(a4))->v) = 0x1;
                                        t0 = 0x190;
                                        if ((*(signed char *)((a4 + 0x131))) != 0) {
                                            t0 = 0x0;
                                        }
                                        *(unsigned short *)((a4 + 0x1C)) = t0;
                                        t0 = (((struct oC4_int *)(a4))->v);
                                        (((struct o74_float *)(t0))->v) = 0.0f;
                                        (((struct o6C_float *)(t0))->v) = 0.0f;
                                        t3 = 0x6C;
                                    }
                                }
                                t2 = t3;
                            }
                        }
                        t1 = t2;
                    }
                    t0 = t1;
                } else {
                    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 5.0f);
                    *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
                    if (((*(short *)((a4 + 0x1E))) & 0x2) != 0) {
                        t1 = (((struct oC4_int *)(a4))->v);
                        t2 = t1;
                        u0 = (((((struct o6C_float *)(t1))->v)) + 1.0f);
                    } else {
                        t1 = (((struct oC4_int *)(a4))->v);
                        t2 = t1;
                        u0 = (((((struct o6C_float *)(t1))->v)) - 1.0f);
                    }
                    (((struct o6C_float *)(t2))->v) = u0;
                    if (((*(short *)((a4 + 0x1E))) & 0x4) != 0) {
                        t1 = (((struct oC4_int *)(a4))->v);
                        t2 = t1;
                        u0 = (((((struct o74_float *)(t1))->v)) + 1.0f);
                    } else {
                        t1 = (((struct oC4_int *)(a4))->v);
                        t2 = t1;
                        u0 = (((((struct o74_float *)(t1))->v)) - 1.0f);
                    }
                    (((struct o74_float *)(t2))->v) = u0;
                    t1 = 0x2C;
                    if (4400.0f > ((((struct o2C_float *)(a4))->v))) {
                    } else {
                        (((struct o2C_float *)(a4))->v) = 4400.0f;
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        *(unsigned short *)((a4 + 0x1C)) = 0x190;
                        t2 = (((struct oC4_int *)(a4))->v);
                        (((struct o74_float *)(t2))->v) = 0.0f;
                        (((struct o6C_float *)(t2))->v) = 0.0f;
                        t1 = (thunk_FUN_0c05abb2(0x4C, (a4 + 0x28)));
                    }
                    t0 = t1;
                }
                t1 = t0;
            } else {
                if (((*(short *)((a4 + 0x1E))) & 0x2) != 0) {
                    t0 = (((struct oC4_int *)(a4))->v);
                    t2 = t0;
                    u0 = (((((struct o6C_float *)(t0))->v)) + (1.0f + 1.0f));
                } else {
                    t0 = (((struct oC4_int *)(a4))->v);
                    t2 = t0;
                    u0 = (((((struct o6C_float *)(t0))->v)) - (1.0f + 1.0f));
                }
                (((struct o6C_float *)(t2))->v) = u0;
                if (((*(short *)((a4 + 0x1E))) & 0x4) != 0) {
                    t0 = (((struct oC4_int *)(a4))->v);
                    t2 = t0;
                    u0 = (((((struct o74_float *)(t0))->v)) + (1.0f + 1.0f));
                } else {
                    t0 = (((struct oC4_int *)(a4))->v);
                    t2 = t0;
                    u0 = (((((struct o74_float *)(t0))->v)) - (1.0f + 1.0f));
                }
                (((struct o74_float *)(t2))->v) = u0;
                t0 = *(short *)((a4 + 0x1E));
                *(unsigned short *)((a4 + 0x1E)) = (t0 - 1);
                t2 = (short)(t0 - 1);
                if ((int)(short)(t0 - 1) > 0) {
                } else {
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    *(unsigned short *)((a4 + 0x1E)) = 0x0;
                    t0 = (((struct oC4_int *)(a4))->v);
                    (((struct o74_float *)(t0))->v) = 0.0f;
                    (((struct o6C_float *)(t0))->v) = 0.0f;
                    t2 = (thunk_FUN_0c05abb2(0x44, (a4 + 0x28)));
                }
                t1 = t2;
            }
            t0 = t1;
        } else {
            t1 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
            t2 = (short)(t1 - 1);
            if ((int)(short)(t1 - 1) > 0) {
            } else {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                t2 = (thunk_FUN_0c05abb2(0x4C, (a4 + 0x28)));
            }
            t0 = t2;
        }
        t1 = t0;
    } else {
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0x190;
        *(unsigned short *)((a4 + 0x1E)) = 0x3C;
        t1 = 0x3C;
    }
    t0 = *(signed char *)0xC54098D;
    t2 = t1;
    if ((int)t0 >= (int)0xD) {
        t1 = 0xE;
        if ((int)t0 <= (int)0xE) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t1 = 0x14;
        }
        t2 = t1;
    }
    return t2;
}
