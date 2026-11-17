/* game/unsorted: functions 0C04D76C-0C04E828, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1B_uchar { char p[0x1B]; unsigned char v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o70_float { char p[0x70]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oD4_int { char p[0xD4]; int v; };
int FUN_0c036de8(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c038548(int);
int FUN_0c038e88(int);
int FUN_0c03ea04(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c03eff6(void);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f40c(int);
int FUN_0c03f444(int, int, int);
int FUN_0c04e8cc(void);
int FUN_0c04e986(int, int);
int staffroll_create(void);
int FUN_0c0527e6(void);
int FUN_0c0573c0(int, int, int);
int FUN_0c0573cc(int, int, int);
int FUN_0c059c7a(int, int);
int FUN_0c05af8a(void);
int FUN_0c05b0be(int, int);
int FUN_0c07c436(void);
int FUN_0c04d76c(void);
int FUN_0c04da80(void);
int FUN_0c04daa6(int a4, int a5, int a6, int a7);
int FUN_0c04db9a(void);
int FUN_0c04dd38(void);
int FUN_0c04ddae(int a4, int a5, int a6, int a7);
int FUN_0c04de60(int a4, int a5);
int FUN_0c04deca(int a4, int a5, int a6, int a7);
int FUN_0c04def0(int a4, int a5);
int FUN_0c04e008(void);
int FUN_0c04e052(int a4, int a5, int a6, float f4);
int FUN_0c04e7b6(int a4, int a5);

int FUN_0c04d76c(void)
{
    int stk[6];
    register int t2;
    register int t7;
    register int t8;
    register int t15;
    register int t28;
    register int t39;
    register int t55;
    register int t71;
    register int t107;
    register int t124;
    register int t137;
    register int t153;
    register int t184;
    int t1;

    if (((int)(unsigned char)(*(signed char *)0xC541F44) > 0) && (t1 = *(signed char *)0xC541F44, (int)(unsigned char)t1 < (int)0x9)) {
        t2 = FUN_0c04da80();
        if (t2 != 0) {
            *(unsigned short *)0xC541F4E = 0x1F;
            (((struct o3_uchar *)0xC541F41)->v) = 0x9;
            FUN_0c05b0be(0x1E, 0x0);
        }
    }
    t7 = *(signed char *)0xC541F44;
    if ((unsigned char)t7 != 0) {
        if ((unsigned char)t7 != 1) {
            if ((unsigned char)t7 != 2) {
                if ((unsigned char)t7 != 3) {
                    if ((unsigned char)t7 != 4) {
                        if ((unsigned char)t7 == 5) {
                            t8 = *(short *)0xC541F4E;
                            *(unsigned short *)0xC541F4E = (t8 - 1);
                            if ((int)(short)(t8 - 1) > 0) {
                            } else {
                                *(unsigned short *)0xC541F4E = (*(short *)((0xC1B7EF4 + ((unsigned char)(*(signed char *)0xC541F44) << 1))));
                                (((struct o3_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F44) + 0x1);
                            }
                        } else {
                            if ((unsigned char)t7 == 6) {
                                t15 = *(short *)0xC541F4E;
                                *(unsigned short *)0xC541F4E = (t15 - 1);
                                if ((int)(short)(t15 - 1) > 0) {
                                } else {
                                    *(unsigned short *)0xC541F4E = (*(short *)((0xC1B7EF4 + ((unsigned char)(*(signed char *)0xC541F44) << 1))));
                                    FUN_0c04de60(0x0, ((*(short *)0xC541F4E) + 0x2));
                                    FUN_0c04e986((int)((float)((*(short *)0xC541F4E) << 2) / 5.0f), 0x8);
                                    (((struct o3_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F44) + 0x1);
                                }
                            } else {
                                if ((unsigned char)t7 == 7) {
                                    t28 = *(short *)0xC541F4E;
                                    *(unsigned short *)0xC541F4E = (t28 - 1);
                                    if ((int)(short)(t28 - 1) > 0) {
                                    } else {
                                        *(unsigned short *)0xC541F4E = (*(short *)((0xC1B7EF4 + ((unsigned char)(*(signed char *)0xC541F44) << 1))));
                                        FUN_0c04de60(0x1, ((*(short *)0xC541F4E) + 0x2));
                                        (((struct o3_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F44) + 0x1);
                                    }
                                } else {
                                    if ((unsigned char)t7 == 8) {
                                        t39 = *(short *)0xC541F4E;
                                        *(unsigned short *)0xC541F4E = (t39 - 1);
                                        if ((int)(short)(t39 - 1) <= 0) {
                                            *(unsigned short *)0xC541F4E = (*(short *)((0xC1B7EF4 + ((unsigned char)(*(signed char *)0xC541F44) << 1))));
                                            FUN_0c0573c0(0xFF000000, 0x0, 0x1E);
                                            FUN_0c04def0(0xB, 0xA);
                                            (((struct o3_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F44) + 0x1);
                                        }
                                    } else {
                                        if ((unsigned char)t7 == 9) {
                                            if ((*(short *)0xC541F4E) == 31) {
                                                FUN_0c0573cc(0xFF000000, 0x0, 0x1E);
                                            }
                                            t55 = *(short *)0xC541F4E;
                                            *(unsigned short *)0xC541F4E = (t55 - 1);
                                            if ((int)(short)(t55 - 1) <= 0) {
                                                *(unsigned short *)0xC541F4E = (*(short *)((0xC1B7EF4 + ((unsigned char)(*(signed char *)0xC541F44) << 1))));
                                                FUN_0c03eff6();
                                                FUN_0c0573c0(0xFF000000, 0x0, 0x1E);
                                                FUN_0c04def0(0x5, 0xB);
                                                (((struct o3_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F44) + 0x1);
                                            }
                                        } else {
                                            if ((unsigned char)t7 == 10) {
                                                if ((*(short *)0xC541F4E) == 31) {
                                                    FUN_0c0573cc(0xFF000000, 0x0, 0x1E);
                                                }
                                                t71 = *(short *)0xC541F4E;
                                                *(unsigned short *)0xC541F4E = (t71 - 1);
                                                if ((int)(short)(t71 - 1) <= 0) {
                                                    (((struct o3_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F44) + 0x1);
                                                }
                                            } else {
                                                *(unsigned char *)0xC3BD447 = 0x0;
                                                FUN_0c03eff6();
                                                (((struct o0_uchar *)0xC541F41)->v) = 0x6;
                                                (((struct o3_uchar *)0xC541F41)->v) = 0x0;
                                                (((struct o2_uchar *)0xC541F41)->v) = 0x0;
                                                (((struct o1_uchar *)0xC541F41)->v) = 0x0;
                                                *(unsigned short *)0xC541F4E = 0x0;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        t107 = *(short *)0xC541F4E;
                        *(unsigned short *)0xC541F4E = (t107 - 1);
                        if ((int)(short)(t107 - 1) > 0) {
                        } else {
                            *(unsigned short *)0xC541F4E = (*(short *)((0xC1B7EF4 + ((unsigned char)(*(signed char *)0xC541F44) << 1))));
                            (((struct o3_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F44) + 0x1);
                            FUN_0c03ea04(0x7, 0x1, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
                            FUN_0c04e008();
                        }
                    }
                } else {
                    t124 = *(short *)0xC541F4E;
                    *(unsigned short *)0xC541F4E = (t124 - 1);
                    if ((int)(short)(t124 - 1) > 0) {
                    } else {
                        *(unsigned short *)0xC541F4E = (*(short *)((0xC1B7EF4 + ((unsigned char)(*(signed char *)0xC541F44) << 1))));
                        (((struct o3_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F44) + 0x1);
                    }
                }
            } else {
                t137 = *(short *)0xC541F4E;
                *(unsigned short *)0xC541F4E = (t137 - 1);
                if ((int)(short)(t137 - 1) > 0) {
                } else {
                    *(unsigned short *)0xC541F4E = (*(short *)((0xC1B7EF4 + ((unsigned char)(*(signed char *)0xC541F44) << 1))));
                    FUN_0c04e8cc();
                    (((struct o3_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F44) + 0x1);
                }
            }
        } else {
            t153 = *(short *)0xC541F4E;
            *(unsigned short *)0xC541F4E = (t153 - 1);
            if ((int)(short)(t153 - 1) > 0) {
            } else {
                *(unsigned short *)0xC541F4E = (*(short *)((0xC1B7EF4 + ((unsigned char)(*(signed char *)0xC541F44) << 1))));
                (((struct o3_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F44) + 0x1);
                staffroll_create();
            }
        }
    } else {
        FUN_0c07c436();
        FUN_0c05af8a();
        FUN_0c03eff6();
        FUN_0c036de8(0xF, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
        FUN_0c059c7a(0x0, 0x0);
        FUN_0c0527e6();
        FUN_0c03ea04(0x7, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
        *(unsigned short *)0xC541F4E = (*(short *)((0xC1B7EF4 + ((unsigned char)(*(signed char *)0xC541F44) << 1))));
        FUN_0c04de60(0x1, 0x78);
        FUN_0c0573c0(0xFFFFFFFF, 0x0, 0x5);
        (((struct o8_uint *)0xC542440)->v) = 0xFF000000;
        (((struct o4_uint *)0xC542440)->v) = 0xFF000000;
        (((struct o0_uint *)0xC542440)->v) = 0xFF000000;
        FUN_0c04db9a();
        FUN_0c04dd38();
        FUN_0c04e7b6(0x0, 0x8);
        (((struct o3_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F44) + 0x1);
        t184 = *(short *)0xC541F4E;
        *(unsigned short *)0xC541F4E = (t184 - 1);
        if ((int)(short)(t184 - 1) > 0) {
        } else {
            *(unsigned short *)0xC541F4E = (*(short *)((0xC1B7EF4 + ((unsigned char)(*(signed char *)0xC541F44) << 1))));
            (((struct o3_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F44) + 0x1);
            staffroll_create();
        }
    }
    FUN_0c03f40c(0x5);
    FUN_0c038548(0x5);
    FUN_0c038e88(0x5);
    FUN_0c03f40c(0x8);
    return FUN_0c038e88(0x8);
}

int FUN_0c04da80(void)
{
    register int t0;

    if ((unsigned int)0xC5426C4 < (unsigned int)0xC542764) {
        t0 = 0xC5426C4;
        for (;;) {
            if (((unsigned short)(*(short *)((t0 + 0x14))) & 0x40) != 0) {
                break;
            }
            t0 = (t0 + 0x28);
            if ((unsigned int)t0 >= (unsigned int)0xC542764) {
                return 0x0;
            }
        }
        return 0x1;
    }
    return 0x0;
}

int FUN_0c04daa6(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register float u0;

    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    t0 = (((struct oC8_int *)(a4))->v);
                    (((struct o70_float *)(t0))->v) = (((((struct o70_float *)(t0))->v)) - 1.0f);
                    t0 = (((struct oC4_int *)(a4))->v);
                    (((struct o70_float *)(t0))->v) = (((((struct o70_float *)(t0))->v)) + 1.0f);
                    t1 = *(signed char *)0xC541F44;
                    if ((int)(unsigned char)t1 >= (int)0x5) {
                        return FUN_0c03f346(a4, 0xC541F3C, t0, a7);
                    }
                    return (unsigned char)t1;
                }
                t0 = *(signed char *)0xC541F44;
                t1 = (unsigned char)t0;
                if ((int)(unsigned char)t0 >= (int)0x3) {
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    t1 = 0x15;
                }
                return t1;
            }
            t0 = (((struct oC8_int *)(a4))->v);
            u0 = (((struct o4_float *)0xC04DC10)->v);
            (((struct o70_float *)(t0))->v) = (((((struct o70_float *)(t0))->v)) + u0);
            t0 = (((struct oC4_int *)(a4))->v);
            (((struct o70_float *)(t0))->v) = (((((struct o70_float *)(t0))->v)) - u0);
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
            t1 = (short)(t0 - 1);
            if ((int)(short)(t0 - 1) > 0) {
            } else {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                t1 = 0x15;
            }
            return t1;
        }
    } else {
        t0 = (((struct oC8_int *)(a4))->v);
        u0 = (((struct o0_float *)0xC04DC10)->v);
        (((struct o70_float *)(t0))->v) = (((((struct o70_float *)(t0))->v)) - u0);
        t0 = (((struct oC4_int *)(a4))->v);
        (((struct o70_float *)(t0))->v) = (((((struct o70_float *)(t0))->v)) + u0);
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    }
    t0 = *(signed char *)0xC541F44;
    t1 = (unsigned char)t0;
    if ((int)(unsigned char)t0 >= (int)0x2) {
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0x168;
        t1 = 0x168;
    }
    return t1;
}

int FUN_0c04db9a(void)
{
    register int t0;
    register int t6;
    register int t1;

    t0 = FUN_0c03f444(0x5, 0x0, 0x2);
    t6 = t0;
    if (t0 != 0) {
        t1 = 0x0;
        for (;;) {
            if ((int)t1 >= (int)((((struct oC0_int *)(t0))->v))) {
                break;
            }
            FUN_0c03744a((*(int *)((((t1 << 2) + (0xC4 + t0)) + 0x0))), 0x0, (t1 + 0x7), (*(int *)0xC4B410C));
            t1 = (t1 + 0x1);
        }
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = 0x80;
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC04DAA6;
        t6 = 0xFFFFFFFF;
    }
    return t6;
}

int FUN_0c04dd38(void)
{
    register int t0;
    register int t7;
    register int t1;
    register int t2;

    t0 = FUN_0c03f444(0x5, 0x0, 0x3);
    t7 = t0;
    if (t0 != 0) {
        t1 = 0x0;
        t2 = 0x0;
        for (;;) {
            FUN_0c03744a((*(int *)((((0xC4 + t0) + t2) + 0x0))), 0x0, (*(int *)((0xC1B7F20 + t2))), (*(int *)0xC4B410C));
            t1 = (t1 + 0x1);
            t2 = (t2 + 0x4);
            if ((unsigned int)t1 >= (unsigned int)0x3) {
                break;
            }
        }
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = 0x80;
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC04DC2C;
        t7 = 0xFFFFFFFF;
    }
    return t7;
}

int FUN_0c04ddae(int a4, int a5, int a6, int a7)
{
    register int t0;
    register float u0;

    t0 = (((struct oC4_int *)(a4))->v);
    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        if ((*(signed char *)((a4 + 0x2))) != 0) {
            (((struct o20_float *)(t0))->v) = 1.0f;
            (((struct o1C_float *)(t0))->v) = 1.0f;
            (((struct o18_float *)(t0))->v) = 1.0f;
        } else {
            (((struct o20_float *)(t0))->v) = 0.0f;
            (((struct o1C_float *)(t0))->v) = 0.0f;
            (((struct o18_float *)(t0))->v) = 0.0f;
        }
    }
    if ((*(signed char *)((a4 + 0x2))) != 0) {
        (((struct o20_float *)(t0))->v) = (((((struct o20_float *)(t0))->v)) - (1.0f / (float)(*(short *)((a4 + 0x1C)))));
        if (((((struct o20_float *)(t0))->v)) > 0.0f) {
            u0 = (((struct o20_float *)(t0))->v);
            (((struct o1C_float *)(t0))->v) = u0;
            (((struct o18_float *)(t0))->v) = u0;
            return 0x18;
        }
        return FUN_0c03f346(a4, t0, a6, a7);
    }
    (((struct o20_float *)(t0))->v) = (((((struct o20_float *)(t0))->v)) + (1.0f / (float)(*(short *)((a4 + 0x1C)))));
    if (!(1.0f > ((((struct o20_float *)(t0))->v)))) {
        return FUN_0c03f346(a4, t0, a6, a7);
    }
    u0 = (((struct o20_float *)(t0))->v);
    (((struct o1C_float *)(t0))->v) = u0;
    (((struct o18_float *)(t0))->v) = u0;
    return 0x18;
}

int FUN_0c04de60(int a4, int a5)
{
    int stk[2];
    register int t0;
    register int t6;
    register int t2;

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 0)) = a5;
    t0 = FUN_0c03f444(0x5, 0x0, 0x1);
    t6 = t0;
    if (t0 != 0) {
        t2 = (((struct oC4_int *)(t0))->v);
        FUN_0c03744a(t2, 0x0, 0x6, (*(int *)0xC4B410C));
        *(unsigned short *)((t2 + 0x6)) = 0x21F;
        (((struct o88_float *)(t2))->v) = (1.0f + 1.0f);
        (((struct o84_float *)(t2))->v) = (1.0f + 1.0f);
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = 0x80;
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned char *)((t0 + 0x2)) = (*(signed char *)(((int)stk + 4)));
        *(unsigned int *)((t0 + 0x4)) = 0xC04DDAE;
        t6 = *(int *)(((int)stk + 0));
        *(unsigned short *)((t0 + 0x1C)) = t6;
    }
    return t6;
}

int FUN_0c04deca(int a4, int a5, int a6, int a7)
{
    register int t5;

    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    t5 = *(short *)((a4 + 0x1C));
    if ((int)(unsigned char)(*(signed char *)0xC541F44) >= (int)t5) {
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    return t5;
}

int FUN_0c04def0(int a4, int a5)
{
    int stk[2];
    register int t2;
    register int t3;
    register int t8;

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    t2 = FUN_0c037320((*(int *)(((int)stk + 0))), (*(int *)0xC4B410C));
    t3 = FUN_0c03f444(0x5, 0x0, t2);
    t8 = t3;
    if (t3 != 0) {
        FUN_0c03733c(t3, (*(int *)(((int)stk + 0))), (*(int *)0xC4B410C));
        (((struct oA8_uchar *)(t3))->v) = 0x1;
        (((struct oAC_ushort *)(t3))->v) = 0xF;
        (((struct oA9_uchar *)(t3))->v) = 0x80;
        *(unsigned char *)((t3 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t3 + 0x4)) = 0xC04DECA;
        t8 = *(short *)(((int)stk + 4));
        *(unsigned short *)((t3 + 0x1C)) = t8;
    }
    return t8;
}

int FUN_0c04e008(void)
{
    register int t0;
    register int t1;

    t0 = FUN_0c037320(0xA, (*(int *)0xC4B410C));
    t1 = FUN_0c03f444(0x5, 0x0, t0);
    t0 = t1;
    if (t1 != 0) {
        FUN_0c03733c(t1, 0xA, (*(int *)0xC4B410C));
        (((struct oA8_uchar *)(t1))->v) = 0x1;
        (((struct oAC_ushort *)(t1))->v) = 0xF;
        (((struct oA9_uchar *)(t1))->v) = 0x80;
        *(unsigned char *)((t1 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t1 + 0x4)) = 0xC04DF46;
        t0 = 0xFFFFFFFF;
    }
    return t0;
}

int FUN_0c04e052(int a4, int a5, int a6, float f4)
{
    register int t4;
    register int t5;

    *(unsigned int *)((a4 + 0x0)) = (int)((float)(a5 - a6) / f4);
    if ((int)(int)((float)(a5 - a6) / f4) > (int)0x8000) {
        *(unsigned int *)((a4 + 0x0)) = ((*(int *)((a4 + 0x0))) - 0x8000);
    }
    if ((int)(*(int *)((a4 + 0x0))) < (int)0xFFFF8000) {
        t4 = *(int *)((a4 + 0x0));
        *(unsigned int *)((a4 + 0x0)) = (t4 + 0x8000);
        t5 = (t4 + 0x8000);
    }
    return t5;
}

int FUN_0c04e7b6(int a4, int a5)
{
    int stk[2];
    register int t1;
    register int t2;
    register int t8;

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 0)) = a5;
    t1 = FUN_0c037320(0x9, (*(int *)0xC4B410C));
    t2 = FUN_0c03f444(0x5, 0x0, t1);
    t8 = t2;
    if (t2 != 0) {
        FUN_0c03733c(t2, 0x9, (*(int *)0xC4B410C));
        (((struct oA8_uchar *)(t2))->v) = 0x1;
        (((struct oAC_ushort *)(t2))->v) = 0x1F;
        (((struct oA9_uchar *)(t2))->v) = 0x80;
        *(unsigned char *)((((((struct oD4_int *)(t2))->v)) + 0x0)) = 0x0;
        (((struct o48_float *)(t2))->v) = 1.0f;
        (((struct o44_float *)(t2))->v) = 1.0f;
        (((struct o40_float *)(t2))->v) = 1.0f;
        *(unsigned char *)((t2 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t2 + 0x4)) = 0xC04E0B0;
        *(unsigned char *)((t2 + 0x2)) = (*(signed char *)(((int)stk + 4)));
        (((struct o1B_uchar *)(t2))->v) = (*(int *)(((int)stk + 0)));
        t8 = 0x1B;
    }
    return t8;
}
