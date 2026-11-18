/* game/player: functions 0C0F3BB4-0C0F4A7A, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o11C_int { char p[0x11C]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o26_uchar { char p[0x26]; unsigned char v; };
struct o2C_float { char p[0x2C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAA_uchar { char p[0xAA]; unsigned char v; };
struct oAB_uchar { char p[0xAB]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c037bf6(int);
int FUN_0c038362(int);
extern int FUN_0c03f346();
int FUN_0c03f444(int, int, int);
int FUN_0c03fb78(int, int);
int FUN_0c05879c(int, int, int, float);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c064f80(int);
int FUN_0c0c2944(int, int, int, int, int);
int FUN_0c0cd8b4(int, int, int);
int FUN_0c0cf440(int, int, int);
int FUN_0c0f3bb4(int, int);
int FUN_0c0f3c7a(int, int);
int FUN_0c0f3d1c(int);
int FUN_0c0f3d88(int);
int FUN_0c0f3db8(int, int, int);
int FUN_0c0f3dc8(int, int);
int FUN_0c0f3e66(int, float);
int FUN_0c0f3e9e(int);
int FUN_0c0f3ee4(int);
extern int FUN_0c0f425c();
int FUN_0c0f4414(int);
int FUN_0c0f4448(int);
int FUN_0c0f44fc(int);
int FUN_0c0f4590(int);
int FUN_0c0f45c6(int);
extern int FUN_0c0f460c();
int FUN_0c0f485a(int);
int FUN_0c179ac0(void);
int math_vec3_accumulate(int, int);
int FUN_0c187798(int, int, int);
int FUN_0c0f3f68(int a4);
int FUN_0c0f4070(int a4);
int FUN_0c0f41ac(int a4);
int FUN_0c0f4662(int a4, int a5, int a6, int a7, float f4);
int FUN_0c0f4920(int a4, int a5, int a6, int a7);

int FUN_0c0f3f68(int a4)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x17));
    if (t0 != 0) {
        if (t0 != 1) {
        } else {
            t0 = *(signed char *)(((0x41C + a4) + 0x3));
            FUN_0c05879c(a4, (((short)(*(signed char *)(((0x41C + a4) + 0x2))) * (short)0x3938) + 0xC5324C0), (*(int *)(((((t0 << 2) << 2) + 0xC1C585C) + 0x4))), (*(float *)(((((t0 << 2) << 2) + 0xC1C585C) + 0x0))));
            t0 = FUN_0c0f3e66(a4, ((((struct o8_float *)((0xC1C585C + (((*(signed char *)(((0x41C + a4) + 0x3))) << 2) << 2))))->v)));
            if (t0 == 0) {
                t0 = (((struct o20_short *)(a4))->v);
                (((struct o20_ushort *)(a4))->v) = (t0 - 1);
                if ((int)(short)(t0 - 1) <= 0) {
                    FUN_0c0f3db8(a4, 0x5, 0x0);
                }
            } else {
                FUN_0c0f3db8(a4, 0x5, 0x0);
            }
        }
    } else {
        (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
        t0 = FUN_0c179ac0();
        t1 = ((~(((~t0) + 0x1) & 0x1)) + 0x1);
        if ((int)t0 >= 0) {
            t1 = (t0 & 0x1);
        }
        FUN_0c0f3dc8(a4, t1);
        (((struct o20_ushort *)(a4))->v) = (*(int *)((((((*(signed char *)(((0x41C + a4) + 0x3))) << 2) << 2) + 0xC1C585C) + 0xC)));
        t0 = *(signed char *)(((0x41C + a4) + 0x3));
        FUN_0c05879c(a4, (((short)(*(signed char *)(((0x41C + a4) + 0x2))) * (short)0x3938) + 0xC5324C0), (*(int *)(((((t0 << 2) << 2) + 0xC1C585C) + 0x4))), (*(float *)(((((t0 << 2) << 2) + 0xC1C585C) + 0x0))));
        t0 = FUN_0c0f3e66(a4, ((((struct o8_float *)((0xC1C585C + (((*(signed char *)(((0x41C + a4) + 0x3))) << 2) << 2))))->v)));
        if (t0 == 0) {
            t0 = (((struct o20_short *)(a4))->v);
            (((struct o20_ushort *)(a4))->v) = (t0 - 1);
            if ((int)(short)(t0 - 1) <= 0) {
                FUN_0c0f3db8(a4, 0x5, 0x0);
            }
        } else {
            FUN_0c0f3db8(a4, 0x5, 0x0);
        }
    }
    t0 = FUN_0c0f3d1c(a4);
    if (t0 == 0) {
        FUN_0c037bf6(a4);
        FUN_0c038362(a4);
        math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
        math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
        return FUN_0c0f3e9e(a4);
    }
    return t0;
}

int FUN_0c0f4070(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = FUN_0c0f3d1c(a4);
    t1 = *(signed char *)((a4 + 0x17));
    if (t1 != 0) {
        if (t1 != 1) {
            if (t1 != 2) {
                return t1;
            }
            t1 = FUN_0c0f3e66(a4, ((((struct o8_float *)((0xC1C585C + (((*(signed char *)(((0x41C + a4) + 0x3))) << 2) << 2))))->v)));
            if (t1 == 0) {
                t1 = (((struct o20_short *)(a4))->v);
                (((struct o20_ushort *)(a4))->v) = (t1 - 1);
                t2 = 0x20;
                if ((int)(short)(t1 - 1) <= 0) {
                    t2 = (FUN_0c0f3db8(a4, 0x5, 0x0));
                }
                t1 = t2;
            } else {
                t1 = (FUN_0c0f3db8(a4, 0x5, 0x0));
            }
            if (t0 == 0) {
                FUN_0c037bf6(a4);
                FUN_0c038362(a4);
                math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
                math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
                return FUN_0c0f3e9e(a4);
            }
            return t1;
        }
    } else {
        (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
        (((struct o20_ushort *)(a4))->v) = (*(int *)((((((*(signed char *)(((0x41C + a4) + 0x3))) << 2) << 2) + 0xC1C585C) + 0xC)));
        t0 = FUN_0c179ac0();
        t1 = ((~(((~t0) + 0x1) & 0x1)) + 0x1);
        if ((int)t0 >= 0) {
            t1 = (t0 & 0x1);
        }
        FUN_0c0f3dc8(a4, t1);
    }
    t0 = (((struct o20_short *)(a4))->v);
    (((struct o20_ushort *)(a4))->v) = (t0 - 1);
    if ((int)(short)(t0 - 1) <= 0) {
        (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
        (((struct o20_ushort *)(a4))->v) = (*(int *)((((((*(signed char *)(((0x41C + a4) + 0x3))) << 2) << 2) + 0xC1C585C) + 0xC)));
    }
    t0 = *(signed char *)(((0x41C + a4) + 0x3));
    return FUN_0c05879c(a4, (((short)(*(signed char *)(((0x41C + a4) + 0x2))) * (short)0x3938) + 0xC5324C0), (*(int *)(((((t0 << 2) << 2) + 0xC1C585C) + 0x4))), (*(float *)(((((t0 << 2) << 2) + 0xC1C585C) + 0x0))));
}

int FUN_0c0f41ac(int a4)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x17));
    if (t0 != 0) {
        if (t0 != 1) {
        } else {
            t0 = *(signed char *)(((0x41C + a4) + 0x3));
            FUN_0c05879c(a4, (((short)(*(signed char *)(((0x41C + a4) + 0x2))) * (short)0x3938) + 0xC5324C0), (*(int *)(((((t0 << 2) << 2) + 0xC1C585C) + 0x4))), (*(float *)(((((t0 << 2) << 2) + 0xC1C585C) + 0x0))));
            t0 = FUN_0c0f3e66(a4, ((((struct o8_float *)((0xC1C585C + (((*(signed char *)(((0x41C + a4) + 0x3))) << 2) << 2))))->v)));
            if (t0 == 0) {
                t0 = (((struct o20_short *)(a4))->v);
                (((struct o20_ushort *)(a4))->v) = (t0 - 1);
                if ((int)(short)(t0 - 1) <= 0) {
                    FUN_0c0f3db8(a4, 0x5, 0x0);
                }
            } else {
                FUN_0c0f3db8(a4, 0x5, 0x0);
            }
        }
    } else {
        (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
        (((struct o20_ushort *)(a4))->v) = (*(int *)((((((*(signed char *)(((0x41C + a4) + 0x3))) << 2) << 2) + 0xC1C585C) + 0xC)));
        t0 = FUN_0c179ac0();
        t1 = ((~(((~t0) + 0x1) & 0x1)) + 0x1);
        if ((int)t0 >= 0) {
            t1 = (t0 & 0x1);
        }
        FUN_0c0f3dc8(a4, t1);
        t0 = *(signed char *)(((0x41C + a4) + 0x3));
        FUN_0c05879c(a4, (((short)(*(signed char *)(((0x41C + a4) + 0x2))) * (short)0x3938) + 0xC5324C0), (*(int *)(((((t0 << 2) << 2) + 0xC1C585C) + 0x4))), (*(float *)(((((t0 << 2) << 2) + 0xC1C585C) + 0x0))));
        t0 = FUN_0c0f3e66(a4, ((((struct o8_float *)((0xC1C585C + (((*(signed char *)(((0x41C + a4) + 0x3))) << 2) << 2))))->v)));
        if (t0 == 0) {
            t0 = (((struct o20_short *)(a4))->v);
            (((struct o20_ushort *)(a4))->v) = (t0 - 1);
            if ((int)(short)(t0 - 1) <= 0) {
                FUN_0c0f3db8(a4, 0x5, 0x0);
            }
        } else {
            FUN_0c0f3db8(a4, 0x5, 0x0);
        }
    }
    return FUN_0c0f3d1c(a4);
}

int FUN_0c0f4662(int a4, int a5, int a6, int a7, float f4)
{
    int stk[7];
    register int t0;
    register int t7;
    register int t9;
    register int t14;
    register int t24;
    register int t27;
    register int t45;
    register int t61;
    register int t62;
    register int t70;
    register int t73;
    register int t91;
    register int t107;
    register int t108;
    register int t22;
    register int t19;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                *(int *)((int)stk + 0) = 0xFFFFFFFF;
                FUN_0c0c2944((*(signed char *)((a4 + 0x2))), 0x0, 0x0, (a4 + 0x28), 0xFFFFFFFF);
                if ((*(signed char *)((a4 + 0x17))) == 0) {
                    FUN_0c0cd8b4(a4, (unsigned char)(*(signed char *)(((0x41C + a4) + 0xA))), (a4 + 0x28));
                    t7 = *(signed char *)(((0x41C + a4) + 0x4));
                    t9 = (int)((int)(FUN_0c179ac0()) % (int)0x65);
                    if ((int)(unsigned char)t7 >= (int)t9) {
                        t14 = (int)((int)(FUN_0c179ac0()) % (int)(((unsigned char)(*(signed char *)((((0x41C + a4) + 0x5) + 0x0))) + (unsigned char)(*(signed char *)((((0x41C + a4) + 0x5) + 0x1)))) + (unsigned char)(*(signed char *)((((0x41C + a4) + 0x5) + 0x2)))));
                        if ((int)t14 < (int)(unsigned char)(*(signed char *)(((0x41C + a4) + 0x5)))) {
                            *(int *)((int)stk + 0) = 0xFFFFFFFF;
                            t22 = (FUN_0c0c2944(0x12, 0x0, 0x8, (a4 + 0x28), 0xFFFFFFFF));
                        } else {
                            if ((int)t14 < (int)(unsigned char)(*(signed char *)(((0x41C + a4) + 0x6)))) {
                                *(int *)((int)stk + 0) = 0xFFFFFFFF;
                                t19 = 0x10;
                            } else {
                                *(int *)((int)stk + 0) = 0xFFFFFFFF;
                                t19 = 0x54;
                            }
                            t22 = (FUN_0c0c2944(t19, 0x0, 0x8, (a4 + 0x28), 0xFFFFFFFF));
                        }
                        return t22;
                    }
                    return FUN_0c0cf440((a4 + 0x28), 0x0, 0x0);
                }
                return 0x17;
            }
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        t24 = *(signed char *)((a4 + 0x15));
        switch (t24) {
        case 2:
            FUN_0c0f3ee4(a4);
            break;
        case 1:
            FUN_0c0f4590(a4);
            break;
        case 3:
            t45 = ((int (*)(int))(FUN_0c0f425c))(a4);
            break;
        default:
            if (t24 != 4) {
                if (t24 != 5) {
                    if (t24 != 6) {
                        if (t24 != 7) {
                            if (t24 != 8) {
                                if (t24 != 9) {
                                    FUN_0c0f3d88(a4);
                                } else {
                                    t27 = ((int (*)(int, float))(FUN_0c0f460c))(a4, f4);
                                }
                            } else {
                                FUN_0c0f45c6(a4);
                            }
                        } else {
                            FUN_0c0f44fc(a4);
                        }
                    } else {
                        FUN_0c0f4448(a4);
                    }
                } else {
                    FUN_0c0f4414(a4);
                }
            }
            break;
        }
        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
        (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
        t61 = FUN_0c064f80(a4);
        t62 = t61;
        if (t61 != 0) {
            (((struct o50_float *)(a4))->v) = 0.0f;
            t62 = 0x50;
        }
        return t62;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    FUN_0c0f3bb4(a4, (*(signed char *)((a4 + 0x2))));
    FUN_0c0f3c7a(a4, 0x0);
    FUN_0c037bf6(a4);
    (((struct o5C_float *)(a4))->v) = -2.0f;
    t70 = *(signed char *)((a4 + 0x15));
    switch (t70) {
    case 2:
        FUN_0c0f3ee4(a4);
        break;
    case 1:
        FUN_0c0f4590(a4);
        break;
    case 3:
        t91 = ((int (*)(int, int, int, int, int, int, int, int, int, int))(FUN_0c0f425c))(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20));
        break;
    default:
        if (t70 != 4) {
            if (t70 != 5) {
                if (t70 != 6) {
                    if (t70 != 7) {
                        if (t70 != 8) {
                            if (t70 != 9) {
                                FUN_0c0f3d88(a4);
                            } else {
                                t73 = ((int (*)(int))(FUN_0c0f460c))(a4);
                            }
                        } else {
                            FUN_0c0f45c6(a4);
                        }
                    } else {
                        FUN_0c0f44fc(a4);
                    }
                } else {
                    FUN_0c0f4448(a4);
                }
            } else {
                FUN_0c0f4414(a4);
            }
        }
        break;
    }
    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
    (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
    t107 = FUN_0c064f80(a4);
    t108 = t107;
    if (t107 != 0) {
        (((struct o50_float *)(a4))->v) = 0.0f;
        t108 = 0x50;
    }
    return t108;
}

