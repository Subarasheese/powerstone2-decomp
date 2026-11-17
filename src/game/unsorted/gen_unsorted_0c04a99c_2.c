/* game/unsorted: functions 0C04A99C-0C04CC56, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03f346(int);
int FUN_0c04b3ae(int, int, int, int, int, int, int, int, int);
int math_vec3_mul_xyz(int, float, float, float);
int thunk_FUN_0c05abb2(int, int);
int FUN_0c059e9a(int, int, int);
int FUN_0c085cac(int, int, int, int);
float math_cos_angle16(int);
int FUN_0c179ac0(void);
float math_sin_angle16(int);
int FUN_0c0e2390(int, int, int);
extern int FUN_0c187798();
int FUN_0c04b23c(int a4, int a5, int a6, int a7);
int FUN_0c04b528(int a4);
int FUN_0c04b67a(int a4);
int FUN_0c04b808(int a4);
int FUN_0c04c4aa(int a4);
int FUN_0c04c8d4(int a4, int a5, int a6);

int FUN_0c04b23c(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t6;
    register int t8;
    register int t9;

    t2 = 0x0;
    t3 = 0x0;
    for (;;) {
        t4 = 0x3714;
        if ((*(signed char *)((((t3 * 0x3938) + 0xC532498) + 0x3714))) != 0) {
            t4 = 0x16B;
            if (t3 != (*(signed char *)0xC542363)) {
                if (t2 != 0) {
                    if (t2 != 1) {
                        (((struct oA8_uchar *)(((t3 * 0x3938) + 0xC532498)))->v) = 0x0;
                        t6 = 0xA8;
                    } else {
                        if (((*(signed char *)((((t3 * 0x3938) + 0xC532498) + 0x3715))) == 23) && (t0 = *(signed char *)((((t3 * 0x3938) + 0xC532498) + 0x15)), t0 == 10)) {
                            t4 = 0xC5421F8;
                            t8 = 0xC532498;
                        } else {
                            FUN_0c085cac(((t3 * 0x3938) + 0xC532498), 0x17, 0xA, a7);
                        }
                        (((struct oA4_uint *)(((t3 * 0x3938) + 0xC532498)))->v) = (a4 + 0x64);
                        t9 = ((int (*)(int, int))(FUN_0c187798))(t4, t8);
                        t2 = (t2 + 0x1);
                        t6 = (((int (*)(void))(FUN_0c187798))());
                    }
                    t4 = t6;
                } else {
                    if (((*(signed char *)((((t3 * 0x3938) + 0xC532498) + 0x3715))) == 23) && (t1 = *(signed char *)((((t3 * 0x3938) + 0xC532498) + 0x15)), t1 == 9)) {
                        t6 = 0xC5421F8;
                        t8 = 0xC532498;
                    } else {
                        FUN_0c085cac(((t3 * 0x3938) + 0xC532498), 0x17, 0x9, a7);
                    }
                    (((struct oA4_uint *)(((t3 * 0x3938) + 0xC532498)))->v) = (a4 + 0x64);
                    t9 = ((int (*)(int, int))(FUN_0c187798))(t6, t8);
                    t2 = (t2 + 0x1);
                    t4 = (((int (*)(void))(FUN_0c187798))());
                }
            }
        }
        t3 = (t3 + 0x1);
        if ((int)t3 >= (int)0x4) {
            break;
        }
    }
    return t4;
}

int FUN_0c04b528(int a4)
{
    int stk[6];
    register int t5;
    register int t11;
    register int t12;
    register int t14;
    register int t15;
    register float u17;
    register int t18;
    register int t19;
    register int t36;

    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0x3C;
        *(unsigned short *)((a4 + 0x1E)) = 0x1E;
        (((struct o20_ushort *)(a4))->v) = 0x0;
    }
    t5 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t5 - 1);
    t36 = (short)(t5 - 1);
    if ((int)(short)(t5 - 1) <= 0) {
        *(unsigned short *)((a4 + 0x1E)) = (int)((float)(*(short *)((a4 + 0x1E))) * 0.800000012f);
        if ((int)(*(short *)((a4 + 0x1E))) < (int)0x3) {
            *(unsigned short *)((a4 + 0x1E)) = 0x3;
        }
        *(unsigned short *)((a4 + 0x1C)) = (*(short *)((a4 + 0x1E)));
        t11 = FUN_0c179ac0();
        t12 = ((~(((~t11) + 0x1) & 0x3F)) + 0x1);
        if ((int)t11 >= 0) {
            t12 = (t11 & 0x3F);
        }
        *(float *)(((int)stk + 8)) = ((float)(t12 - 32) * 100.0f);
        t14 = FUN_0c179ac0();
        t15 = ((~(((~t14) + 0x1) & 0x1F)) + 0x1);
        if ((int)t14 >= 0) {
            t15 = (t14 & 0x1F);
        }
        u17 = 600.0f;
        u17 = u17 + 10.0f * (float)t15;
        *(float *)(((int)stk + 0)) = u17;
        t18 = FUN_0c179ac0();
        t19 = ((~(((~t18) + 0x1) & 0x1)) + 0x1);
        if ((int)t18 >= 0) {
            t19 = (t18 & 0x1);
        }
        if (t19 == 0) {
            *(float *)(((int)stk + 0)) = (-(*(float *)(((int)stk + 0))));
        }
        *(float *)(((int)stk + 4)) = 5000.0f;
        FUN_0c04b3ae(((int)stk + 0), ((((struct o20_short *)(a4))->v)), 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16));
        (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) + 0x1);
        (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) & 0x7);
        t36 = 0x20;
    }
    if ((int)(unsigned char)(*(signed char *)0xC541F44) >= (int)0x6) {
        t36 = (FUN_0c03f346(a4));
    }
    return t36;
}

int FUN_0c04b67a(int a4)
{
    register int t0;
    register int t1;
    register float u0;

    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o15_uchar *)(a4))->v) = 0x0;
    }
    t0 = (((struct oC4_int *)(a4))->v);
    (((struct o7C_uint *)(t0))->v) = (((((struct o7C_int *)(t0))->v)) + 0x71C);
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
            u0 = 1083.0f;
            u0 = u0 + 50.0f * (math_sin_angle16((((*(short *)((a4 + 0x1E))) << 8) << 1)));
            (((struct o2C_float *)(a4))->v) = u0;
            if ((int)(unsigned char)(*(signed char *)0xC541F44) >= (int)0x3) {
                return FUN_0c03f346(a4);
            }
            return 0x2C;
        }
    } else {
        (((struct o28_float *)(a4))->v) = 0.0f;
        (((struct o30_float *)(a4))->v) = 0.0f;
        (((struct o2C_float *)(a4))->v) = 500.0f;
        *(unsigned short *)((a4 + 0x1C)) = 0x3C;
        *(unsigned short *)((a4 + 0x1E)) = 0x0;
        (((struct o20_ushort *)(a4))->v) = 0x0;
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    }
    (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + 10.0f);
    *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
    u0 = 1083.0f;
    u0 = u0 + 50.0f * (math_sin_angle16((((*(short *)((a4 + 0x1E))) << 8) << 1)));
    (((struct o2C_float *)(a4))->v) = u0;
    (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) + 0x1);
    if (((((struct o20_short *)(a4))->v)) == 15) {
        FUN_0c059e9a((((short)(*(signed char *)0xC542363) * (short)0x3938) + 0xC532498), 0x30, (a4 + 0x28));
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    t1 = (short)(t0 - 1);
    if ((int)(short)(t0 - 1) <= 0) {
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t1 = 0x15;
    }
    return t1;
}

int FUN_0c04b808(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o15_uchar *)(a4))->v) = 0x0;
    }
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 == 3) {
                    *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x3A7);
                    *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 5);
                    u0 = 600.0f;
                    u0 = u0 + (float)(*(short *)((a4 + 0x1C))) * (math_cos_angle16((*(short *)((a4 + 0x1E)))));
                    (((struct o30_float *)(a4))->v) = u0;
                    (((struct o28_float *)(a4))->v) = ((math_sin_angle16((*(short *)((a4 + 0x1E))))) * (float)(*(short *)((a4 + 0x1C))));
                    (((struct o2C_float *)(a4))->v) = 1083.0f;
                    t1 = *(short *)((a4 + 0x1C));
                    t2 = t1;
                    if ((int)t1 >= (int)0xA) {
                    } else {
                        *(unsigned short *)((a4 + 0x1C)) = 0xA;
                        (((struct o20_ushort *)(a4))->v) = 0x1E;
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        t2 = 0x15;
                    }
                    return t2;
                }
                if (t0 == 4) {
                    *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x3A7);
                    u0 = 600.0f;
                    u0 = u0 + (float)(*(short *)((a4 + 0x1C))) * (math_cos_angle16((*(short *)((a4 + 0x1E)))));
                    (((struct o30_float *)(a4))->v) = u0;
                    (((struct o28_float *)(a4))->v) = ((math_sin_angle16((*(short *)((a4 + 0x1E))))) * (float)(*(short *)((a4 + 0x1C))));
                    (((struct o2C_float *)(a4))->v) = 1083.0f;
                    t1 = (((struct o20_short *)(a4))->v);
                    (((struct o20_ushort *)(a4))->v) = (t1 - 1);
                    t2 = 0x20;
                    if ((int)(short)(t1 - 1) <= 0) {
                        (((struct o50_float *)(a4))->v) = 0.0f;
                        (((struct o5C_float *)(a4))->v) = 1.0f;
                        if ((*(signed char *)((a4 + 0x2))) == 0) {
                            FUN_0c059e9a((((short)(*(signed char *)0xC542363) * (short)0x3938) + 0xC532498), 0x33, (a4 + 0x28));
                        }
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        t2 = 0x15;
                    }
                    return t2;
                }
                if (t0 == 5) {
                    *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x74F);
                    *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0xA);
                    if ((int)(*(short *)((a4 + 0x1C))) > (int)0x96) {
                        *(unsigned short *)((a4 + 0x1C)) = 0x96;
                    }
                    u0 = 600.0f;
                    u0 = u0 + (float)(*(short *)((a4 + 0x1C))) * (math_cos_angle16((*(short *)((a4 + 0x1E)))));
                    (((struct o30_float *)(a4))->v) = u0;
                    (((struct o28_float *)(a4))->v) = ((math_sin_angle16((*(short *)((a4 + 0x1E))))) * (float)(*(short *)((a4 + 0x1C))));
                    (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
                    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
                    if (((((struct o2C_float *)(a4))->v)) > 3083.0f) {
                        return FUN_0c03f346(a4);
                    }
                    return 0x2C;
                }
                return t0;
            }
            *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x3A7);
            *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 100);
            if ((int)(*(short *)((a4 + 0x1C))) < (int)0x64) {
                *(unsigned short *)((a4 + 0x1C)) = 0x64;
            }
            u0 = 600.0f;
            u0 = u0 + (float)(*(short *)((a4 + 0x1C))) * (math_cos_angle16((*(short *)((a4 + 0x1E)))));
            (((struct o30_float *)(a4))->v) = u0;
            (((struct o28_float *)(a4))->v) = ((math_sin_angle16((*(short *)((a4 + 0x1E))))) * (float)(*(short *)((a4 + 0x1C))));
            (((struct o2C_float *)(a4))->v) = 1083.0f;
            t0 = 0x2C;
            if ((int)(unsigned char)(*(signed char *)0xC541F44) < (int)0x3) {
            } else {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                t0 = 0x15;
            }
            return t0;
        }
    } else {
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    t1 = (short)(t0 - 1);
    if ((int)(short)(t0 - 1) > 0) {
    } else {
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        *(unsigned short *)((a4 + 0x1C)) = 0xBB8;
        *(unsigned short *)((a4 + 0x1E)) = 0xFFFF8EE0;
        u0 = 600.0f;
        u0 = u0 + (float)(*(short *)((a4 + 0x1C))) * (math_cos_angle16((*(short *)((a4 + 0x1E)))));
        (((struct o30_float *)(a4))->v) = u0;
        (((struct o28_float *)(a4))->v) = ((math_sin_angle16((*(short *)((a4 + 0x1E))))) * (float)(*(short *)((a4 + 0x1C))));
        (((struct o2C_float *)(a4))->v) = 1083.0f;
        if ((*(signed char *)((a4 + 0x2))) != 0) {
        } else {
            FUN_0c059e9a((((short)(*(signed char *)0xC542363) * (short)0x3938) + 0xC532498), 0x32, (a4 + 0x28));
        }
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t1 = 0x15;
    }
    return t1;
}

int FUN_0c04c4aa(int a4)
{
    register int t0;
    register int t1;
    register float u0;

    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o22_ushort *)(a4))->v) = 0x0;
    }
    (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) + 0x1);
    if ((*(signed char *)((a4 + 0x2))) == 0) {
        *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + 0x71C);
    } else {
        *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) - 0x888);
        (((struct o44_float *)(a4))->v) = ((math_sin_angle16((((((((struct o22_short *)(a4))->v)) << 8) << 2) << 2))) + 1.0f);
    }
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    (((struct oB4_float *)(a4))->v) = (((((struct oB4_float *)(a4))->v)) - 0.0250000004f);
                    u0 = (((struct oB4_float *)(a4))->v);
                    (((struct oBC_float *)(a4))->v) = u0;
                    (((struct oB8_float *)(a4))->v) = u0;
                    if (!(((((struct oB4_float *)(a4))->v)) > 0.0f)) {
                        return FUN_0c03f346(a4);
                    }
                    return 0xB4;
                }
                t1 = t0;
                if ((int)(unsigned char)(*(signed char *)0xC541F44) >= (int)0xA) {
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    t1 = 0x15;
                }
                return t1;
            }
            u0 = (((struct o44_float *)(a4))->v);
            (((struct o44_float *)(a4))->v) = (u0 + 0.0399999991f);
            t0 = 0x44;
            if (1.0f > (u0 + 0.0399999991f)) {
            } else {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                t0 = 0x15;
            }
            return t0;
        }
    } else {
        if ((*(signed char *)((a4 + 0x2))) != 0) {
            (((struct o15_uchar *)(a4))->v) = 0x3;
        } else {
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            thunk_FUN_0c05abb2(0x44, (a4 + 0x28));
        }
    }
    (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) + 0.00499999989f);
    t0 = 0x44;
    if (0.200000003f > ((((struct o44_float *)(a4))->v))) {
    } else {
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t0 = 0x15;
    }
    return t0;
}

int FUN_0c04c8d4(int a4, int a5, int a6)
{
    int stk[9];
    register int t6;
    register int t10;
    register float u20;
    register float u26;
    register int t27;
    register int t30;
    register int t38;
    register int t39;
    register int t41;
    register int t9;
    register int t28;
    register int t29;
    register float u31;

    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    *(volatile signed char *)0xC5421DC;
    t6 = ((int (*)(int, int, int))(FUN_0c187798))(0xC5410FC, a5, a6);
    *(float *)(((int)stk + 20)) = ((*(float *)(((int)stk + 20))) + 20.0f);
    *(volatile signed char *)0xC5421DC;
    t10 = ((int (*)(int))(FUN_0c187798))(t9);
    FUN_0c0e2390((((int)stk + 0) + 0x18), ((int)stk + 0), (((int)stk + 0) + 0xC));
    if ((*(float *)(((int)stk + 32))) == 0.0f) {
        *(float *)(((int)stk + 32)) = 9.99999975e-06f;
    }
    u20 = (*(float *)(((int)stk + 16)));
    u20 = u20 + (((*(float *)(((int)stk + 28))) / (*(float *)(((int)stk + 32))))) * (*(float *)(((int)stk + 20)));
    *(float *)(((int)stk + 28)) = u20;
    u26 = (*(float *)(((int)stk + 12)));
    u26 = u26 + (((*(float *)(((int)stk + 24))) / (*(float *)(((int)stk + 32))))) * (*(float *)(((int)stk + 20)));
    *(float *)(((int)stk + 24)) = u26;
    *(float *)(((int)stk + 32)) = 10.0f;
    t27 = ((int (*)(void))(FUN_0c187798))();
    t30 = 0x0;
    for (;;) {
        if ((int)t30 >= (int)((((struct oC0_int *)(a4))->v))) {
            break;
        }
        t28 = 0xC4;
        t29 = t30;
        t29 = (t29 << 2);
        t28 = (t28 + a4);
        t28 = (t28 + t29);
        t28 = (*(int *)((t28 + 0x0)));
        FUN_0c0e2390((((int)stk + 0) + 0x18), 0xC1B7E58, (a4 + 0x28));
        u31 = (*(float *)((t29 + 0xC1B7E34)));
        math_vec3_mul_xyz((((int)stk + 0) + 0x18), u31, u31, u31);
        t38 = ((int (*)(void))(FUN_0c187798))();
        t30 = (t30 + 0x1);
    }
    t39 = *(signed char *)0xC541F44;
    t41 = (unsigned char)t39;
    if ((int)(unsigned char)t39 >= (int)0xC) {
        t41 = (FUN_0c03f346(a4));
    }
    return t41;
}
