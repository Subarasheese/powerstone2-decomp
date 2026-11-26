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
int nlRand(void);
float math_sin_angle16(int);
int FUN_0c0e2390(int, int, int);
extern int FUN_0c187798();
int FUN_0c04b23c(int a4, int a5, int a6, int a7);
int FUN_0c04b528(int a4);
int FUN_0c04b67a(int a4);
int FUN_0c04b808(int a4);
int FUN_0c04c4aa(int a4);
int FUN_0c04c8d4(int a4, int a5, int a6);
struct o1C_short { char p[0x1C]; short v; };
struct o1C_ushort { char p[0x1C]; unsigned short v; };
struct o1E_short { char p[0x1E]; short v; };
struct o1E_ushort { char p[0x1E]; unsigned short v; };



int FUN_0c04b528(int a4)
{
    int stk[6];
    int t5;
    int t11;
    int t14;
    int t18;
    int t36;
    int t12;
    int t15;
    int t19;

    if ((*(signed char *)(a4 + 0x14)) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x14)) + 0x1);
        (((struct o1C_ushort *)(a4))->v) = 0x3C;
        (((struct o1E_ushort *)(a4))->v) = 0x1E;
        (((struct o20_ushort *)(a4))->v) = 0x0;
    }
    t5 = (((struct o1C_short *)(a4))->v);
    (((struct o1C_ushort *)(a4))->v) = (t5 - 1);
    t36 = (short)(t5 - 1);
    if ((int)(short)(t5 - 1) <= 0) {
        (((struct o1E_ushort *)(a4))->v) = (int)((float)((((struct o1E_short *)(a4))->v)) * 0.800000012f);
        if ((int)((((struct o1E_short *)(a4))->v)) < (int)0x3) {
            (((struct o1E_ushort *)(a4))->v) = 0x3;
        }
        (((struct o1C_ushort *)(a4))->v) = ((((struct o1E_short *)(a4))->v));
        t11 = nlRand();
        t12 = ((~(((~t11) + 0x1) & 0x3F)) + 0x1);
        if ((int)t11 >= 0) {
            t12 = (t11 & 0x3F);
        }
        *(float *)(((int)stk + 8)) = ((float)(t12 - 32) * 100.0f);
        t14 = nlRand();
        t15 = ((~(((~t14) + 0x1) & 0x1F)) + 0x1);
        if ((int)t14 >= 0) {
            t15 = (t14 & 0x1F);
        }
        *(float *)(((int)stk + 0)) = ((600.0f) + 10.0f * (float)t15);
        t18 = nlRand();
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
    int t0;
    float u0;
    int t1;

    if ((*(signed char *)(a4 + 0x14)) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x14)) + 0x1);
        (((struct o15_uchar *)(a4))->v) = 0x0;
    }
    t0 = (((struct oC4_int *)(a4))->v);
    (((struct o7C_uint *)(t0))->v) = (((((struct o7C_int *)(t0))->v)) + 0x71C);
    t0 = *(signed char *)(a4 + 0x15);
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            (((struct o1E_ushort *)(a4))->v) = (((((struct o1E_short *)(a4))->v)) + 0x1);
            u0 = (1083.0f) + 50.0f * (math_sin_angle16(((((((struct o1E_short *)(a4))->v)) << 8) << 1)));
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
        (((struct o1C_ushort *)(a4))->v) = 0x3C;
        (((struct o1E_ushort *)(a4))->v) = 0x0;
        (((struct o20_ushort *)(a4))->v) = 0x0;
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x15)) + 0x1);
    }
    (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + 10.0f);
    (((struct o1E_ushort *)(a4))->v) = (((((struct o1E_short *)(a4))->v)) + 0x1);
    u0 = (1083.0f) + 50.0f * (math_sin_angle16(((((((struct o1E_short *)(a4))->v)) << 8) << 1)));
    (((struct o2C_float *)(a4))->v) = u0;
    (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) + 0x1);
    if (((((struct o20_short *)(a4))->v)) == 15) {
        FUN_0c059e9a((((short)(*(signed char *)0xC542363) * (short)0x3938) + 0xC532498), 0x30, (a4 + 0x28));
    }
    t0 = (((struct o1C_short *)(a4))->v);
    (((struct o1C_ushort *)(a4))->v) = (t0 - 1);
    t1 = (short)(t0 - 1);
    if ((int)(short)(t0 - 1) <= 0) {
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x15)) + 0x1);
        t1 = 0x15;
    }
    return t1;
}

int FUN_0c04b808(int a4)
{
    int t0;
    float u0;
    int t1;
    int t2;

    if ((*(signed char *)(a4 + 0x14)) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x14)) + 0x1);
        (((struct o15_uchar *)(a4))->v) = 0x0;
    }
    t0 = *(signed char *)(a4 + 0x15);
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 == 3) {
                    (((struct o1E_ushort *)(a4))->v) = (((((struct o1E_short *)(a4))->v)) + 0x3A7);
                    (((struct o1C_ushort *)(a4))->v) = (((((struct o1C_short *)(a4))->v)) - 5);
                    u0 = (600.0f) + (float)((((struct o1C_short *)(a4))->v)) * (math_cos_angle16(((((struct o1E_short *)(a4))->v))));
                    (((struct o30_float *)(a4))->v) = u0;
                    (((struct o28_float *)(a4))->v) = ((math_sin_angle16(((((struct o1E_short *)(a4))->v)))) * (float)((((struct o1C_short *)(a4))->v)));
                    (((struct o2C_float *)(a4))->v) = 1083.0f;
                    t1 = (((struct o1C_short *)(a4))->v);
                    t2 = t1;
                    if ((int)t1 >= (int)0xA) {
                    } else {
                        (((struct o1C_ushort *)(a4))->v) = 0xA;
                        (((struct o20_ushort *)(a4))->v) = 0x1E;
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x15)) + 0x1);
                        t2 = 0x15;
                    }
                    return t2;
                }
                if (t0 == 4) {
                    (((struct o1E_ushort *)(a4))->v) = (((((struct o1E_short *)(a4))->v)) + 0x3A7);
                    u0 = (600.0f) + (float)((((struct o1C_short *)(a4))->v)) * (math_cos_angle16(((((struct o1E_short *)(a4))->v))));
                    (((struct o30_float *)(a4))->v) = u0;
                    (((struct o28_float *)(a4))->v) = ((math_sin_angle16(((((struct o1E_short *)(a4))->v)))) * (float)((((struct o1C_short *)(a4))->v)));
                    (((struct o2C_float *)(a4))->v) = 1083.0f;
                    t1 = (((struct o20_short *)(a4))->v);
                    (((struct o20_ushort *)(a4))->v) = (t1 - 1);
                    t2 = 0x20;
                    if ((int)(short)(t1 - 1) <= 0) {
                        (((struct o50_float *)(a4))->v) = 0.0f;
                        (((struct o5C_float *)(a4))->v) = 1.0f;
                        if ((*(signed char *)(a4 + 0x2)) == 0) {
                            FUN_0c059e9a((((short)(*(signed char *)0xC542363) * (short)0x3938) + 0xC532498), 0x33, (a4 + 0x28));
                        }
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x15)) + 0x1);
                        t2 = 0x15;
                    }
                    return t2;
                }
                if (t0 == 5) {
                    (((struct o1E_ushort *)(a4))->v) = (((((struct o1E_short *)(a4))->v)) + 0x74F);
                    (((struct o1C_ushort *)(a4))->v) = (((((struct o1C_short *)(a4))->v)) + 0xA);
                    if ((int)((((struct o1C_short *)(a4))->v)) > (int)0x96) {
                        (((struct o1C_ushort *)(a4))->v) = 0x96;
                    }
                    u0 = (600.0f) + (float)((((struct o1C_short *)(a4))->v)) * (math_cos_angle16(((((struct o1E_short *)(a4))->v))));
                    (((struct o30_float *)(a4))->v) = u0;
                    (((struct o28_float *)(a4))->v) = ((math_sin_angle16(((((struct o1E_short *)(a4))->v)))) * (float)((((struct o1C_short *)(a4))->v)));
                    (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
                    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
                    if (((((struct o2C_float *)(a4))->v)) > 3083.0f) {
                        return FUN_0c03f346(a4);
                    }
                    return 0x2C;
                }
                return t0;
            }
            (((struct o1E_ushort *)(a4))->v) = (((((struct o1E_short *)(a4))->v)) + 0x3A7);
            (((struct o1C_ushort *)(a4))->v) = (((((struct o1C_short *)(a4))->v)) - 100);
            if ((int)((((struct o1C_short *)(a4))->v)) < (int)0x64) {
                (((struct o1C_ushort *)(a4))->v) = 0x64;
            }
            u0 = (600.0f) + (float)((((struct o1C_short *)(a4))->v)) * (math_cos_angle16(((((struct o1E_short *)(a4))->v))));
            (((struct o30_float *)(a4))->v) = u0;
            (((struct o28_float *)(a4))->v) = ((math_sin_angle16(((((struct o1E_short *)(a4))->v)))) * (float)((((struct o1C_short *)(a4))->v)));
            (((struct o2C_float *)(a4))->v) = 1083.0f;
            t0 = 0x2C;
            if ((int)(unsigned char)(*(signed char *)0xC541F44) < (int)0x3) {
            } else {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x15)) + 0x1);
                t0 = 0x15;
            }
            return t0;
        }
    } else {
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x15)) + 0x1);
    }
    t0 = (((struct o1C_short *)(a4))->v);
    (((struct o1C_ushort *)(a4))->v) = (t0 - 1);
    t1 = (short)(t0 - 1);
    if ((int)(short)(t0 - 1) > 0) {
    } else {
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct o1C_ushort *)(a4))->v) = 0xBB8;
        (((struct o1E_ushort *)(a4))->v) = 0xFFFF8EE0;
        u0 = (600.0f) + (float)((((struct o1C_short *)(a4))->v)) * (math_cos_angle16(((((struct o1E_short *)(a4))->v))));
        (((struct o30_float *)(a4))->v) = u0;
        (((struct o28_float *)(a4))->v) = ((math_sin_angle16(((((struct o1E_short *)(a4))->v)))) * (float)((((struct o1C_short *)(a4))->v)));
        (((struct o2C_float *)(a4))->v) = 1083.0f;
        if ((*(signed char *)(a4 + 0x2)) != 0) {
        } else {
            FUN_0c059e9a((((short)(*(signed char *)0xC542363) * (short)0x3938) + 0xC532498), 0x32, (a4 + 0x28));
        }
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x15)) + 0x1);
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

