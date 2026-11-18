/* Straight-line functions with calls and guards (batch gen_eh): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
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
int FUN_0c0bbf58(int, Stk3);
int FUN_0c0eb08c(int, int);
int thunk_FUN_0c05abb2(int, int);
int FUN_0c0ea80c(int a4, int a5, int a6, int a7);

int FUN_0c0ea80c(int a4, int a5, int a6, int a7)
{
    int stk[7];
    register int t0;
    register int t2;
    register int t22;
    register int t85;
    register int t144;
    register int t187;
    register int t188;
    register int t201;
    register int t221;
    register int t284;
    register int t343;
    register int t386;
    register int t387;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            *(unsigned int *)0xC540DA4 = 0x0;
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)((a4 + 0x28)); }
        FUN_0c0bbf58(a4, *(Stk3 *)(((int)stk + 0)));
        t2 = *(signed char *)((a4 + 0x15));
        switch (t2) {
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
                        t144 = (((struct o22_short *)(a4))->v);
                        if (t144 == 4) {
                            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + (1.0f + 1.0f));
                        } else {
                            if (t144 == 6) {
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
                        t85 = (((struct o22_short *)(a4))->v);
                        if (t85 == 4) {
                            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 4.0f);
                        } else {
                            if (t85 == 6) {
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
                        t22 = (((struct o22_short *)(a4))->v);
                        if (t22 == 4) {
                            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 8.0f);
                        } else {
                            if (t22 == 6) {
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
        t187 = *(signed char *)0xC54098D;
        t188 = 0x15;
        if (((int)t187 >= (int)0x8) && ((int)t187 <= (int)0xE)) {
            (((struct o14_uchar *)(a4))->v) = 0x63;
            t188 = 0x14;
        }
        return t188;
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
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)((a4 + 0x28)); }
    FUN_0c0bbf58(a4, *(Stk3 *)(((int)stk + 0)));
    t201 = *(signed char *)((a4 + 0x15));
    switch (t201) {
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
                    t343 = (((struct o22_short *)(a4))->v);
                    if (t343 == 4) {
                        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + (1.0f + 1.0f));
                    } else {
                        if (t343 == 6) {
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
                    t284 = (((struct o22_short *)(a4))->v);
                    if (t284 == 4) {
                        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 4.0f);
                    } else {
                        if (t284 == 6) {
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
                    t221 = (((struct o22_short *)(a4))->v);
                    if (t221 == 4) {
                        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 8.0f);
                    } else {
                        if (t221 == 6) {
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
    t386 = *(signed char *)0xC54098D;
    t387 = 0x15;
    if (((int)t386 >= (int)0x8) && ((int)t386 <= (int)0xE)) {
        (((struct o14_uchar *)(a4))->v) = 0x63;
        t387 = 0x14;
    }
    return t387;
}
