/* Straight-line functions with calls and guards (batch gen_kn): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o1B_uchar { char p[0x1B]; unsigned char v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o404_int { char p[0x404]; int v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB0_float { char p[0xB0]; float v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c012c34(int);
int FUN_0c0185ea(float);
int FUN_0c01c62a(int);
int FUN_0c01cd2c(int);
int FUN_0c01cd40(int);
int FUN_0c03f346(int);
int FUN_0c05aab6(int, int);
int FUN_0c07d15c(int);
int FUN_0c07d666(int, int);
int FUN_0c0c2ce4(int);
int FUN_0c0c2d56(int, int, int);
int FUN_0c0c5a88(int);
int FUN_0c0d04c4(int, int);
int FUN_0c10651c(void);
int FUN_0c10656e(void);
int FUN_0c152d18(int);
int FUN_0c179ac0(void);
int FUN_0c187798(int, int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int thunk_FUN_0c03f346(int, int, int, int);
int thunk_FUN_0c05abb2(int, int);
int FUN_0c0c7114(int a4, int a5, int a6, int a7);
int FUN_0c0deba6(int a4);
int FUN_0c0e694c(int a4, int a5, int a6, int a7);
int FUN_0c160dac(int a4, int a5, int a6);
int FUN_0c0186cc(int a4);
int FUN_0c02be9c(int a4, float f4);
int FUN_0c01ca2a(int a4, int a5, int a6);
int FUN_0c10662c(void);

int FUN_0c0c7114(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return ((int (*)(int, int, int, int))(0xC0C7058))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC0C6FB2))(a4, a5, a6, a7);
}

int FUN_0c0deba6(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    if ((*(signed char *)((a4 + 0x131))) != 0) {
        (((struct o80_uint *)(((((struct oC4_int *)(a4))->v))))->v) = 0x0;
        t0 = FUN_0c07d15c(a4);
        if (t0 != 0) {
            *(unsigned char *)((a4 + 0x1)) = (t0 - 1);
            *(unsigned int *)((a4 + 0x38)) = (FUN_0c07d666((a4 + 0x28), ((((t0 - 1) * 0x3938) + 0xC532498) + 0x28)));
            *(unsigned int *)((a4 + 0x3C)) = 0x0;
            *(unsigned int *)((a4 + 0x34)) = 0x0;
            u0 = (((struct o28_float *)((((t0 - 1) * 0x3938) + 0xC532498)))->v);
            (((struct o28_float *)(a4))->v) = (u0 - (((math_sin_angle16((*(int *)((a4 + 0x38))))) * 100.0f)));
            u0 = (((struct o30_float *)((((t0 - 1) * 0x3938) + 0xC532498)))->v);
            (((struct o30_float *)(a4))->v) = (u0 - (((math_cos_angle16((*(int *)((a4 + 0x38))))) * 100.0f)));
            (((struct o12A_ushort *)(a4))->v) = 0x0;
            (((struct o12E_ushort *)(a4))->v) = 0x0;
            *(unsigned short *)((a4 + 0x1C)) = 0x6;
            thunk_FUN_0c05abb2(0x2E, (a4 + 0x28));
            t0 = 0x9;
            t1 = (*(signed char *)((a4 + 0x1)));
        } else {
            t0 = 0xA;
            t1 = (*(signed char *)((a4 + 0x1)));
        }
        t2 = (FUN_0c0c2d56(a4, t0, t1));
    } else {
        if (((((struct o404_int *)(a4))->v)) != 0) {
            t0 = FUN_0c0c2ce4(a4);
            (((struct o80_uint *)(((((struct oC4_int *)(a4))->v))))->v) = 0x0;
            if (t0 == 1) {
                t0 = 0x2;
                t1 = (*(signed char *)((a4 + 0x1)));
            } else {
                t0 = 0xA;
                t1 = (*(signed char *)((a4 + 0x1)));
            }
            t2 = (FUN_0c0c2d56(a4, t0, t1));
        } else {
            t0 = (((struct oC4_int *)(a4))->v);
            (((struct o80_uint *)(t0))->v) = (((((struct o80_int *)(t0))->v)) + 0x71C);
            FUN_0c0c5a88(a4);
            t0 = (((struct o22_short *)(a4))->v);
            (((struct o22_ushort *)(a4))->v) = (t0 - 1);
            t1 = 0x22;
            if ((short)(t0 - 1) == 0) {
                t1 = (FUN_0c0c2d56(a4, 0xB, (*(signed char *)((a4 + 0x1)))));
            }
            t2 = t1;
        }
    }
    return t2;
}

int FUN_0c0e694c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        (((struct o28_float *)(a4))->v) = ((((struct o28_float *)((*(int *)((a4 + 0x10)))))->v));
        (((struct o30_float *)(a4))->v) = ((((struct o30_float *)((*(int *)((a4 + 0x10)))))->v));
        t0 = *(signed char *)((a4 + 0x15));
        if (t0 != 0) {
            if (t0 != 1) {
                if (t0 != 2) {
                    return t0;
                }
                (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) - 0.0199999996f);
                (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) - 0.00999999978f);
                if (!(((((struct o40_float *)(a4))->v)) > 0.0f)) {
                    return ((int (*)(int, int, int, int))(FUN_0c03f346))(a4, a5, a6, a7);
                }
                return 0x40;
            }
            t0 = *(signed char *)(((*(int *)((a4 + 0x10))) + 0x15));
            t1 = t0;
            if ((t0 == 3) || (t0 == 8)) {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                (((struct oAC_ushort *)(a4))->v) = 0x1F;
                t1 = 0xAC;
            }
            return t1;
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o15_uchar *)(a4))->v) = 0x0;
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        *(unsigned short *)((a4 + 0x1E)) = 0x0;
        *(unsigned short *)((a4 + 0x1C)) = 0x0;
        (((struct o48_float *)(a4))->v) = 0.5f;
        FUN_0c0d04c4((0xAC + a4), (a4 + 0x34));
        t0 = 0x0;
        t1 = 0x0;
        for (;;) {
            if ((int)t1 >= (int)((((struct oC0_int *)(a4))->v))) {
                break;
            }
            t0 = t1;
            t0 = (t0 << 2);
            t0 = (t0 + (0xC4 + a4));
            t0 = (*(int *)((t0 + 0x0)));
            FUN_0c0d04c4((t0 + 0x6), (t0 + 0x78));
            t1 = (t1 + 0x1);
        }
        (((struct o28_float *)(a4))->v) = ((((struct o28_float *)((*(int *)((a4 + 0x10)))))->v));
        (((struct o30_float *)(a4))->v) = ((((struct o30_float *)((*(int *)((a4 + 0x10)))))->v));
        t0 = *(signed char *)((a4 + 0x15));
        if (t0 != 0) {
            if (t0 != 1) {
                if (t0 != 2) {
                    return t0;
                }
                (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) - 0.0199999996f);
                (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) - 0.00999999978f);
                if (!(((((struct o40_float *)(a4))->v)) > 0.0f)) {
                    return ((int (*)(int))(FUN_0c03f346))(a4);
                }
                return 0x40;
            }
            t0 = *(signed char *)(((*(int *)((a4 + 0x10))) + 0x15));
            t1 = t0;
            if ((t0 == 3) || (t0 == 8)) {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                (((struct oAC_ushort *)(a4))->v) = 0x1F;
                t1 = 0xAC;
            }
            return t1;
        }
    }
    (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) + 0.0199999996f);
    (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + 0.00999999978f);
    t0 = 0x40;
    if (!((*(float *)((0xC1CBDFC + ((*(signed char *)((a4 + 0x2))) << 2)))) > ((((struct o40_float *)(a4))->v)))) {
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        (((struct o40_float *)(a4))->v) = (*(float *)((0xC1CBDFC + ((*(signed char *)((a4 + 0x2))) << 2))));
        (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) & 0xFFEF);
        t0 = 0xAC;
    }
    return t0;
}

int FUN_0c160dac(int a4, int a5, int a6)
{
    int stk[4];
    register int t25;
    register float u34;
    register int t49;
    register float u63;
    int t21;
    register int t22;
    register int t79;

    *(unsigned int *)(((int)stk + 0)) = (*(int *)((a4 + 0x10)));
    if (((int)((unsigned int)(*(int *)0xC542260) % (unsigned int)0x5)) == 0) {
        FUN_0c187798(a4, a5, a6);
        *(float *)(((int)stk + 8)) = ((*(float *)(((int)stk + 8))) + (float)((int)((int)(FUN_0c179ac0()) % (int)0x64)));
        *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) + (float)(((int)((int)(FUN_0c179ac0()) % (int)0xA0)) - 80));
        *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) + (float)(((int)((int)(FUN_0c179ac0()) % (int)0xA0)) - 80));
        FUN_0c152d18((((int)stk + 0) + 0x4));
    }
    if (((*(signed char *)0xC540F98) == 0) && (t21 = *(int *)(((int)stk + 0)), t22 = *(signed char *)((0x3715 + t21)), t22 != 23)) {
        t25 = *(signed char *)((a4 + 0x14));
        if (t25 != 0) {
            if (t25 != 1) {
                if (t25 != 2) {
                    t79 = t25;
                    if (t25 != 3) {
                    } else {
                        t79 = (FUN_0c03f346(a4));
                    }
                } else {
                    u34 = (((struct o40_float *)(a4))->v);
                    (((struct o40_float *)(a4))->v) = (u34 - 0.100000001f);
                    (((struct o48_float *)(a4))->v) = (u34 - 0.100000001f);
                    t79 = 0x40;
                    if (!(((((struct o40_float *)(a4))->v)) > 0.0f)) {
                        (((struct o48_float *)(a4))->v) = 0.0f;
                        (((struct o40_float *)(a4))->v) = 0.0f;
                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                        t79 = 0x14;
                    }
                }
            } else {
                t49 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t49 - 1);
                t79 = (short)(t49 - 1);
                if ((int)(short)(t49 - 1) <= 0) {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    t79 = 0x14;
                }
            }
        } else {
            u63 = (((struct o40_float *)(a4))->v);
            (((struct o40_float *)(a4))->v) = (u63 + 0.100000001f);
            (((struct o48_float *)(a4))->v) = (u63 + 0.100000001f);
            t79 = 0x40;
            if (!(1.0f > ((((struct o40_float *)(a4))->v)))) {
                (((struct o48_float *)(a4))->v) = 1.0f;
                (((struct o40_float *)(a4))->v) = 1.0f;
                *(unsigned short *)((a4 + 0x1C)) = 0x3C;
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t79 = 0x14;
            }
        }
    } else {
        t79 = (FUN_0c03f346(a4));
    }
    return t79;
}

int FUN_0c0186cc(int a4)
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

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            t1 = t0;
            t2 = 0x1;
            t3 = 0xC542854;
            t4 = 0x10;
            if (t0 != 2) {
            } else {
                t0 = *(signed char *)((a4 + 0x15));
                if (t0 != 0) {
                    if (t0 != 1) {
                        t5 = t0;
                        if (t0 != 2) {
                        } else {
                            (((struct o14_uchar *)(a4))->v) = 0x0;
                            (((struct o15_uchar *)(a4))->v) = 0x0;
                            (((struct oA8_uchar *)(a4))->v) = 0x0;
                            t5 = 0xA8;
                        }
                        t0 = t5;
                        t5 = 0x1;
                        t6 = 0xC542854;
                        t7 = 0x10;
                    } else {
                        t8 = *(short *)((a4 + 0x1C));
                        *(unsigned short *)((a4 + 0x1C)) = (t8 - 1);
                        if ((short)(t8 - 1) == 0) {
                            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        }
                        (((struct oB0_float *)(a4))->v) = ((float)(*(short *)((a4 + 0x1C))) * 0.0625f);
                        t0 = (FUN_0c0185ea(((((struct oB0_float *)(a4))->v))));
                    }
                    t8 = t0;
                    t0 = t5;
                    t5 = t6;
                    t6 = t7;
                } else {
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    *(unsigned short *)((a4 + 0x1C)) = 0x10;
                    t7 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t7 - 1);
                    if ((short)(t7 - 1) == 0) {
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    }
                    (((struct oB0_float *)(a4))->v) = ((float)(*(short *)((a4 + 0x1C))) * 0.0625f);
                    t8 = (FUN_0c0185ea(((((struct oB0_float *)(a4))->v))));
                }
                t1 = t8;
                t2 = t0;
                t3 = t5;
                t4 = t6;
            }
            t0 = t1;
            t1 = t2;
            t2 = t3;
            t3 = t4;
        } else {
            t4 = *(signed char *)((a4 + 0x15));
            if (t4 != 0) {
                if (t4 != 1) {
                    t5 = t4;
                    if (t4 != 2) {
                        t4 = 0x1;
                        t6 = 0xC542854;
                        t7 = 0x10;
                    } else {
                        if ((*(short *)0xC542864) != 0) {
                            (((struct o14_uchar *)(a4))->v) = 0x2;
                            (((struct o15_uchar *)(a4))->v) = 0x0;
                        }
                        t5 = (FUN_0c0185ea(1.0f));
                    }
                    t8 = t5;
                    t5 = t4;
                    t4 = t6;
                    t6 = t7;
                } else {
                    t7 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t7 - 1);
                    if ((short)(t7 - 1) == 0) {
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    }
                    (((struct oB0_float *)(a4))->v) = (((-((float)(*(short *)((a4 + 0x1C))) * 0.0625f))) + 1.0f);
                    t8 = (FUN_0c0185ea(((((struct oB0_float *)(a4))->v))));
                }
                t7 = t8;
                t8 = t5;
                t5 = t4;
                t4 = t6;
            } else {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                *(unsigned short *)((a4 + 0x1C)) = 0x10;
                (((struct oA8_uchar *)(a4))->v) = 0x1;
                t6 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t6 - 1);
                if ((short)(t6 - 1) == 0) {
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                }
                (((struct oB0_float *)(a4))->v) = (((-((float)(*(short *)((a4 + 0x1C))) * 0.0625f))) + 1.0f);
                t7 = (FUN_0c0185ea(((((struct oB0_float *)(a4))->v))));
            }
            t0 = t7;
            t1 = t8;
            t2 = t5;
            t3 = t4;
        }
        t4 = t0;
        t0 = t1;
        t1 = t2;
        t2 = t3;
    } else {
        t3 = *(signed char *)((a4 + 0x15));
        if (t3 != 0) {
            t5 = t3;
            if (t3 != 1) {
            } else {
                if ((*(signed char *)0xC30A51A) == 0) {
                    t3 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t3 - 1);
                    if ((short)(t3 - 1) == 0) {
                        (((struct o14_uchar *)(a4))->v) = 0x1;
                        (((struct o15_uchar *)(a4))->v) = 0x0;
                        t3 = 0x15;
                    } else {
                        t6 = *(short *)0xC542864;
                        t7 = t6;
                        if (t6 != 0) {
                            (((struct o15_uchar *)(a4))->v) = 0x0;
                            t7 = 0x15;
                        }
                        t3 = t7;
                    }
                    t6 = t3;
                } else {
                    (((struct o15_uchar *)(a4))->v) = 0x0;
                    t6 = 0x15;
                }
                t5 = t6;
            }
            t3 = t5;
        } else {
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            *(unsigned short *)((a4 + 0x1C)) = 0x78;
            t3 = 0x78;
        }
        t4 = t3;
        t0 = 0x1;
        t1 = 0xC542854;
        t2 = 0x10;
    }
    if ((*(int *)0xC20C910) == 0) {
        return thunk_FUN_0c03f346(a4, t0, t1, t2);
    }
    return t4;
}

int FUN_0c02be9c(int a4, float f4)
{
    register int t0;
    register int t1;
    register int t3;

    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o15_uchar *)(a4))->v) = 0x0;
        (((struct o1B_uchar *)(a4))->v) = 0x0;
        (((struct o22_ushort *)(a4))->v) = 0x0;
        (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x10);
        (((struct o40_float *)(a4))->v) = 1.5f;
        (((struct o44_float *)(a4))->v) = 1.0f;
        (((struct o48_float *)(a4))->v) = 1.0f;
        t0 = *(signed char *)0xC305416;
        (((struct o28_float *)(a4))->v) = (*(float *)((((((t0 << 1) + t0) << 2) + 0xC20E900) + 0x0)));
        t0 = *(signed char *)0xC305416;
        (((struct o2C_float *)(a4))->v) = ((((struct o4_float *)(((((t0 << 1) + t0) << 2) + 0xC20E900)))->v));
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct o30_float *)(a4))->v) = 3.0f;
    }
    if ((*(signed char *)((a4 + 0x15))) == 0) {
        FUN_0c012c34(a4);
        t0 = *(signed char *)0xC30985A;
        if (((int)t0 >= (int)0x4) && ((int)t0 <= (int)0x6)) {
            (((struct oA8_uchar *)(a4))->v) = 0x1;
        } else {
            (((struct oA8_uchar *)(a4))->v) = 0x0;
        }
        t0 = 0xC30EF23;
        if ((*(signed char *)0xC30EF21) != (*(signed char *)0xC30EF23)) {
            t1 = *(signed char *)0xC305416;
            (((struct o28_float *)(a4))->v) = (*(float *)((((((t1 << 1) + t1) << 2) + 0xC20E900) + 0x0)));
            t1 = *(signed char *)0xC305416;
            (((struct o2C_float *)(a4))->v) = ((((struct o4_float *)(((((t1 << 1) + t1) << 2) + 0xC20E900)))->v));
            t0 = 0x2C;
        }
        t1 = t0;
        if ((*(signed char *)0xC30EF24) != 0) {
            (((struct o1B_uchar *)(a4))->v) = 0x0;
            (((struct o22_ushort *)(a4))->v) = 0x0;
            (((struct o15_uchar *)(a4))->v) = 0x1;
            t1 = 0x15;
        }
        t0 = t1;
    } else {
        t1 = *(signed char *)((a4 + 0x15));
        if (t1 == 1) {
            t0 = FUN_0c01c62a(a4);
            t3 = (signed char)t0;
            if ((signed char)t0 != 0) {
                (((struct o15_uchar *)(a4))->v) = 0x2;
                t3 = 0x15;
            }
            t0 = t3;
        } else {
            t3 = t1;
            if ((*(signed char *)0xC30EF24) == 0) {
                (((struct o14_uchar *)(a4))->v) = 0x0;
                (((struct o15_uchar *)(a4))->v) = 0x0;
                t3 = 0x15;
            }
            t0 = t3;
        }
    }
    return t0;
}

int FUN_0c01ca2a(int a4, int a5, int a6)
{
    int stk[5];

    register int R1;
    register int R2;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    v0_3 = a4;
    v0_0 = a5;
    v0_4 = a6;
    *(unsigned char *)(((int)stk + 0)) = v0_0;
    v0_0 = (v0_4);
    v0_1 = (v0_3);
    v0_2 = ((((int)stk + 0) + 0x4));
    v0_3 = ((((int)stk + 0) + 0x4));
    if (((((((unsigned char)v0_4 == 2)) ? 1 : 0) | ((((unsigned char)v0_4 == 0)) ? 1 : 0)) == 0)) goto L_C01CA66;
    *(unsigned int *)((v0_3 + 0x0)) = 0x2000;
    *(unsigned int *)((v0_2 + 0x4)) = 0x1000;
    *(unsigned int *)((v0_2 + 0x8)) = 0x52;
    v0_3 = (0x51);
    L_C01CA74:;
    *(unsigned int *)((v0_2 + 0xC)) = v0_3;
    v0_4 = (short)(FUN_0c01cd2c((*(int *)((v0_2 + 0x0))))) != 0;
    v0_3 = (0xC30504E);
    if (v0_4) goto L_C01CA8E;
    if (!(((unsigned char)(*(signed char *)0xC30EF9E) != (*(int *)((v0_2 + 0x8)))))) goto L_C01CA8E;
    v0_4 = (short)(FUN_0c01cd2c((*(int *)((v0_2 + 0x4))))) != 0;
    if (v0_4) goto L_C01CAAA;
    if (((unsigned char)(*(signed char *)0xC30EF9E) != (*(int *)((v0_2 + 0xC))))) goto L_C01CAB0;
    goto L_C01CAAA;
    L_C01CA8E:;
    *(unsigned short *)((v0_3 + 0x0)) = 0x14;
    L_C01CB34:;
    if (((int)(unsigned char)v0_0 >= (int)0x2)) goto L_C01CB48;
    if (((*(signed char *)((v0_1 + 0x0))) != 0)) goto L_C01CB52;
    *(unsigned char *)((v0_1 + 0x0)) = (*(signed char *)(((int)stk + 0)));
    L_C01CB58:;
    v0_3 = (0x0);
    if ((((unsigned char)v0_0 & 1) == 0)) goto L_C01CB64;
    v0_0 = (0x5);
    L_C01CB66:;
    FUN_0c05aab6(v0_3, v0_0);
    v0_0 = (0x1);
    L_C01CB6E:;
    return v0_0;
    L_C01CB64:;
    v0_0 = (0x6);
    goto L_C01CB66;
    L_C01CB52:;
    *(unsigned char *)((v0_1 + 0x0)) = ((*(signed char *)((v0_1 + 0x0))) - 1);
    goto L_C01CB58;
    L_C01CB48:;
    if (((*(signed char *)((v0_1 + 0x0))) != 0)) goto L_C01CB52;
    L_C01CB4E:;
    v0_0 = (0x0);
    goto L_C01CB6E;
    L_C01CAAA:;
    *(unsigned short *)((v0_3 + 0x0)) = 0x14;
    L_C01CB0A:;
    v0_3 = ((unsigned char)(*(signed char *)(((int)stk + 0))));
    if (((int)(unsigned char)v0_0 >= (int)0x2)) goto L_C01CB24;
    if (((unsigned char)(*(signed char *)((v0_1 + 0x0))) != v0_3)) goto L_C01CB2C;
    *(unsigned char *)((v0_1 + 0x0)) = 0x0;
    goto L_C01CB58;
    L_C01CB2C:;
    *(unsigned char *)((v0_1 + 0x0)) = ((*(signed char *)((v0_1 + 0x0))) + 0x1);
    goto L_C01CB58;
    L_C01CB24:;
    if (((unsigned char)(*(signed char *)((v0_1 + 0x0))) == v0_3)) goto L_C01CB4E;
    goto L_C01CB2C;
    L_C01CAB0:;
    if (((*(short *)((v0_3 + 0x0))) == 0)) goto L_C01CAD4;
    *(unsigned short *)((v0_3 + 0x0)) = ((*(short *)((v0_3 + 0x0))) - 1);
    goto L_C01CB4E;
    L_C01CAD4:;
    v0_4 = (short)(FUN_0c01cd40((*(int *)((v0_2 + 0x0))))) != 0;
    if (v0_4) goto L_C01CAEA;
    if (!(((unsigned char)(*(signed char *)0xC30EF9C) != (*(int *)((v0_2 + 0x8)))))) goto L_C01CAEA;
    v0_4 = (short)(FUN_0c01cd40((*(int *)((v0_2 + 0x4))))) != 0;
    if (v0_4) goto L_C01CB06;
    if (((unsigned char)(*(signed char *)0xC30EF9C) != (*(int *)((v0_2 + 0xC))))) goto L_C01CB4E;
    goto L_C01CB06;
    L_C01CAEA:;
    *(unsigned short *)((v0_3 + 0x0)) = 0xA;
    goto L_C01CB34;
    L_C01CB06:;
    *(unsigned short *)((v0_3 + 0x0)) = 0xA;
    goto L_C01CB0A;
    L_C01CA66:;
    *(unsigned int *)((v0_3 + 0x0)) = 0x800;
    *(unsigned int *)((v0_2 + 0x4)) = 0x400;
    *(unsigned int *)((v0_2 + 0x8)) = 0x50;
    v0_3 = (0x4F);
    goto L_C01CA74;
}

int FUN_0c10662c(void)
{
    register int t0;

    t0 = *(signed char *)0xC541F45;
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 1) {
            if ((unsigned char)t0 != 2) {
                if ((unsigned char)t0 != 3) {
                    if ((unsigned char)t0 != 4) {
                        if ((unsigned char)t0 != 5) {
                            return (unsigned char)t0;
                        }
                        return ((int (*)(void))(0xC106602))();
                    }
                    return FUN_0c10656e();
                }
                return ((int (*)(void))(0xC10652A))();
            }
            return FUN_0c10651c();
        }
        return ((int (*)(void))(0xC106526))();
    }
    return ((int (*)(void))(0xC106518))();
}
