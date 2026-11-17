/* game/unsorted: functions 0C0EA80C-0C0EAB38, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o12C_ushort { char p[0x12C]; unsigned short v; };
struct o132_uchar { char p[0x132]; unsigned char v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
int FUN_0c03733c(int, int, int);
int FUN_0c03f346(int, int, int, int);
int thunk_FUN_0c05abb2(int, int);
int FUN_0c0bbf58(int);
int FUN_0c0eb08c(int, int);
int FUN_0c187798(int, int, int);
int FUN_0c0ea80c(int a4, int a5, int a6, int a7);

int FUN_0c0ea80c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t3;
    register int t23;
    register int t86;
    register int t145;
    register int t188;
    register int t189;
    register int t203;
    register int t223;
    register int t286;
    register int t345;
    register int t388;
    register int t389;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            *(unsigned int *)0xC540DA4 = 0x0;
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        FUN_0c187798(a4, a5, a6);
        FUN_0c0bbf58(a4);
        t3 = *(signed char *)((a4 + 0x15));
        switch (t3) {
        case 0:
            if ((*(signed char *)((a4 + 0x132))) != 0) {
                (((struct o132_uchar *)(a4))->v) = 0x0;
                *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
                (((struct o20_ushort *)(a4))->v) = 0x1E;
                (((struct o22_ushort *)(a4))->v) = 0x0;
                thunk_FUN_0c05abb2(0x53, (a4 + 0x28));
            }
            if (((((struct o20_short *)(a4))->v)) != 0) {
                (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) - 1);
                if (((((struct o22_short *)(a4))->v)) == 0) {
                    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + (1.0f + 1.0f));
                } else {
                    if (((((struct o22_short *)(a4))->v)) == 2) {
                        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) - (1.0f + 1.0f));
                    } else {
                        t145 = (((struct o22_short *)(a4))->v);
                        if (t145 == 4) {
                            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + (1.0f + 1.0f));
                        } else {
                            if (t145 == 6) {
                                (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) - (1.0f + 1.0f));
                            }
                        }
                    }
                }
                (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) + 0x1);
                (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) & 0x7);
            }
            if ((int)(*(short *)((a4 + 0x1E))) < (int)0x3) {
            } else {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                FUN_0c03733c(a4, 0x15, (*(int *)0xC4B410C));
            }
            break;
        case 1:
            if ((*(signed char *)((a4 + 0x132))) != 0) {
                (((struct o132_uchar *)(a4))->v) = 0x0;
                *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
                (((struct o20_ushort *)(a4))->v) = 0x1E;
                (((struct o22_ushort *)(a4))->v) = 0x0;
                thunk_FUN_0c05abb2(0x53, (a4 + 0x28));
            }
            if (((((struct o20_short *)(a4))->v)) != 0) {
                (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) - 1);
                if (((((struct o22_short *)(a4))->v)) == 0) {
                    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + 4.0f);
                } else {
                    if (((((struct o22_short *)(a4))->v)) == 2) {
                        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) - 4.0f);
                    } else {
                        t86 = (((struct o22_short *)(a4))->v);
                        if (t86 == 4) {
                            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 4.0f);
                        } else {
                            if (t86 == 6) {
                                (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) - 4.0f);
                            }
                        }
                    }
                }
                (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) + 0x1);
                (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) & 0x7);
            }
            if ((int)(*(short *)((a4 + 0x1E))) < (int)0x6) {
            } else {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                FUN_0c03733c(a4, 0x36, (*(int *)0xC4B410C));
            }
            break;
        case 2:
            if ((*(signed char *)((a4 + 0x132))) != 0) {
                (((struct o132_uchar *)(a4))->v) = 0x0;
                *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
                (((struct o20_ushort *)(a4))->v) = 0x1E;
                (((struct o22_ushort *)(a4))->v) = 0x0;
                thunk_FUN_0c05abb2(0x53, (a4 + 0x28));
            }
            if (((((struct o20_short *)(a4))->v)) != 0) {
                (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) - 1);
                if (((((struct o22_short *)(a4))->v)) == 0) {
                    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + 8.0f);
                } else {
                    if (((((struct o22_short *)(a4))->v)) == 2) {
                        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) - 8.0f);
                    } else {
                        t23 = (((struct o22_short *)(a4))->v);
                        if (t23 == 4) {
                            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 8.0f);
                        } else {
                            if (t23 == 6) {
                                (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) - 8.0f);
                            }
                        }
                    }
                }
                (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) + 0x1);
                (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) & 0x7);
            }
            if ((int)(*(short *)((a4 + 0x1E))) >= (int)0x9) {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            }
            break;
        default:
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            (((struct oA8_uchar *)(a4))->v) = 0x0;
            FUN_0c0eb08c((a4 + 0x28), 0x0);
            FUN_0c0eb08c((a4 + 0x28), 0x1);
            FUN_0c0eb08c((a4 + 0x28), 0x2);
            FUN_0c0eb08c((a4 + 0x28), 0x3);
            FUN_0c0eb08c((a4 + 0x28), 0x4);
            FUN_0c0eb08c((a4 + 0x28), 0x5);
            FUN_0c0eb08c((a4 + 0x28), 0x6);
            FUN_0c0eb08c((a4 + 0x28), 0x7);
            thunk_FUN_0c05abb2(0x42, (a4 + 0x28));
            break;
        }
        t188 = *(signed char *)0xC54098D;
        t189 = 0x15;
        if (((int)t188 >= (int)0x8) && ((int)t188 <= (int)0xE)) {
            (((struct o14_uchar *)(a4))->v) = 0x63;
            t189 = 0x14;
        }
        return t189;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct oAC_ushort *)(a4))->v) = 0x1;
    if ((int)(*(signed char *)((a4 + 0x1B))) >= 0) {
        (((struct oA4_uint *)(a4))->v) = ((*(int *)(((((*(signed char *)((a4 + 0x1B))) << 2) + 0xC540D94) + 0x0))) + 0x64);
    }
    (((struct o160_float *)(a4))->v) = 400.0f;
    *(unsigned short *)((a4 + 0x1C)) = 0x3C;
    (((struct o12C_ushort *)(a4))->v) = 0xFFFFFFEF;
    FUN_0c187798(0x1, a5, a6);
    FUN_0c0bbf58(a4);
    t203 = *(signed char *)((a4 + 0x15));
    switch (t203) {
    case 0:
        if ((*(signed char *)((a4 + 0x132))) != 0) {
            (((struct o132_uchar *)(a4))->v) = 0x0;
            *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
            (((struct o20_ushort *)(a4))->v) = 0x1E;
            (((struct o22_ushort *)(a4))->v) = 0x0;
            thunk_FUN_0c05abb2(0x53, (a4 + 0x28));
        }
        if (((((struct o20_short *)(a4))->v)) != 0) {
            (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) - 1);
            if (((((struct o22_short *)(a4))->v)) == 0) {
                (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + (1.0f + 1.0f));
            } else {
                if (((((struct o22_short *)(a4))->v)) == 2) {
                    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) - (1.0f + 1.0f));
                } else {
                    t345 = (((struct o22_short *)(a4))->v);
                    if (t345 == 4) {
                        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + (1.0f + 1.0f));
                    } else {
                        if (t345 == 6) {
                            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) - (1.0f + 1.0f));
                        }
                    }
                }
            }
            (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) + 0x1);
            (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) & 0x7);
        }
        if ((int)(*(short *)((a4 + 0x1E))) < (int)0x3) {
        } else {
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            FUN_0c03733c(a4, 0x15, (*(int *)0xC4B410C));
        }
        break;
    case 1:
        if ((*(signed char *)((a4 + 0x132))) != 0) {
            (((struct o132_uchar *)(a4))->v) = 0x0;
            *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
            (((struct o20_ushort *)(a4))->v) = 0x1E;
            (((struct o22_ushort *)(a4))->v) = 0x0;
            thunk_FUN_0c05abb2(0x53, (a4 + 0x28));
        }
        if (((((struct o20_short *)(a4))->v)) != 0) {
            (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) - 1);
            if (((((struct o22_short *)(a4))->v)) == 0) {
                (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + 4.0f);
            } else {
                if (((((struct o22_short *)(a4))->v)) == 2) {
                    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) - 4.0f);
                } else {
                    t286 = (((struct o22_short *)(a4))->v);
                    if (t286 == 4) {
                        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 4.0f);
                    } else {
                        if (t286 == 6) {
                            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) - 4.0f);
                        }
                    }
                }
            }
            (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) + 0x1);
            (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) & 0x7);
        }
        if ((int)(*(short *)((a4 + 0x1E))) < (int)0x6) {
        } else {
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            FUN_0c03733c(a4, 0x36, (*(int *)0xC4B410C));
        }
        break;
    case 2:
        if ((*(signed char *)((a4 + 0x132))) != 0) {
            (((struct o132_uchar *)(a4))->v) = 0x0;
            *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
            (((struct o20_ushort *)(a4))->v) = 0x1E;
            (((struct o22_ushort *)(a4))->v) = 0x0;
            thunk_FUN_0c05abb2(0x53, (a4 + 0x28));
        }
        if (((((struct o20_short *)(a4))->v)) != 0) {
            (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) - 1);
            if (((((struct o22_short *)(a4))->v)) == 0) {
                (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + 8.0f);
            } else {
                if (((((struct o22_short *)(a4))->v)) == 2) {
                    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) - 8.0f);
                } else {
                    t223 = (((struct o22_short *)(a4))->v);
                    if (t223 == 4) {
                        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 8.0f);
                    } else {
                        if (t223 == 6) {
                            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) - 8.0f);
                        }
                    }
                }
            }
            (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) + 0x1);
            (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) & 0x7);
        }
        if ((int)(*(short *)((a4 + 0x1E))) >= (int)0x9) {
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        }
        break;
    default:
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x0;
        FUN_0c0eb08c((a4 + 0x28), 0x0);
        FUN_0c0eb08c((a4 + 0x28), 0x1);
        FUN_0c0eb08c((a4 + 0x28), 0x2);
        FUN_0c0eb08c((a4 + 0x28), 0x3);
        FUN_0c0eb08c((a4 + 0x28), 0x4);
        FUN_0c0eb08c((a4 + 0x28), 0x5);
        FUN_0c0eb08c((a4 + 0x28), 0x6);
        FUN_0c0eb08c((a4 + 0x28), 0x7);
        thunk_FUN_0c05abb2(0x42, (a4 + 0x28));
        break;
    }
    t388 = *(signed char *)0xC54098D;
    t389 = 0x15;
    if (((int)t388 >= (int)0x8) && ((int)t388 <= (int)0xE)) {
        (((struct o14_uchar *)(a4))->v) = 0x63;
        t389 = 0x14;
    }
    return t389;
}
