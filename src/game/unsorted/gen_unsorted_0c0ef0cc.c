/* game/unsorted: functions 0C0EF0CC-0C0EFB26, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12C_ushort { char p[0x12C]; unsigned short v; };
struct o131_uchar { char p[0x131]; unsigned char v; };
struct o132_uchar { char p[0x132]; unsigned char v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
int thunk_FUN_0c05abb2(int, int);
int FUN_0c064f80(int);
float math_signed_sqrt(float);
int math_atan_angle16(float);
int math_atan2_angle16(float, float);
float math_cos_angle16(int);
int FUN_0c179ac0(void);
float math_sin_angle16(int);
float FUN_0c0e2240(int, int);
int FUN_0c187798(int, int, int);
int FUN_0c0ef0cc(int a4);
int FUN_0c0ef102(int a4);
int FUN_0c0ef162(int a4, int a5, int a6, int a7);
int FUN_0c0ef1d8(int a4, int a5);
int FUN_0c0ef24a(int a4);
int FUN_0c0ef2e0(int a4, int a5, int a6);
int FUN_0c0ef368(int a4, int a5, int a6);
void FUN_0c0ef4aa(int a4, int a5, float f4);
int FUN_0c0ef912(int a4);

int FUN_0c0ef0cc(int a4)
{
    register int t0;

    t0 = FUN_0c064f80(a4);
    if (t0 != 0) {
        (((struct o50_float *)(a4))->v) = 0.0f;
    }
    (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
    return 0x2C;
}

int FUN_0c0ef102(int a4)
{
    register int t20;
    int t13;

    if ((*(signed char *)((a4 + 0x131))) != 0) {
        (((struct o160_float *)(a4))->v) = (((((struct o160_float *)(a4))->v)) - 1.0f);
    }
    if ((*(signed char *)((a4 + 0x132))) != 0) {
        (((struct o160_float *)(a4))->v) = (((((struct o160_float *)(a4))->v)) - (1.0f + 1.0f));
    }
    t20 = 0x132;
    if (((*(signed char *)((a4 + 0x131))) == 0) && (t13 = *(signed char *)((a4 + 0x132)), t13 == 0)) {
    } else {
        if (!(((((struct o160_float *)(a4))->v)) > 0.0f)) {
            (((struct o15_uchar *)(a4))->v) = 0x4;
        } else {
            (((struct o15_uchar *)(a4))->v) = 0x3;
        }
        (((struct o132_uchar *)(a4))->v) = 0x0;
        (((struct o131_uchar *)(a4))->v) = 0x0;
        (((struct o16_uchar *)(a4))->v) = 0x0;
        t20 = 0x16;
    }
    return t20;
}

int FUN_0c0ef162(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) - 1);
            (((struct o16_uchar *)(a4))->v) = 0x0;
            t0 = 0x16;
        } else {
            t1 = *(short *)((a4 + 0x1E));
            *(unsigned short *)((a4 + 0x1E)) = (t1 - 1);
            t2 = (short)(t1 - 1);
            if ((int)(short)(t1 - 1) <= 0) {
                (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                t2 = 0x16;
            }
            t0 = t2;
        }
        t1 = t0;
    } else {
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        *(unsigned short *)((a4 + 0x1E)) = 0xB4;
        *(unsigned int *)((a4 + 0x3C)) = 0x0;
        *(unsigned int *)((a4 + 0x34)) = 0x0;
        (((struct o50_float *)(a4))->v) = (*(float *)0xC0EF1F8);
        (((struct o5C_float *)(a4))->v) = -1.0f;
        (((struct o12A_ushort *)(a4))->v) = 0x0;
        t0 = *(int *)(((0xC4 + a4) + 0x4));
        t2 = *(int *)(((0xC4 + a4) + 0x8));
        (((struct o7C_uint *)(t2))->v) = 0x0;
        (((struct o7C_uint *)(t0))->v) = 0x0;
        (((struct o78_uint *)(t2))->v) = 0x0;
        (((struct o78_uint *)(t0))->v) = 0x0;
        t0 = *(short *)((a4 + 0x1E));
        *(unsigned short *)((a4 + 0x1E)) = (t0 - 1);
        t2 = (short)(t0 - 1);
        if ((int)(short)(t0 - 1) <= 0) {
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
            t2 = 0x16;
        }
        t1 = t2;
    }
    return t1;
}

int FUN_0c0ef1d8(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t0 = 0x14;
        } else {
            (((struct oA8_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0xA8))) ^ 0x1);
            t1 = (((struct o20_short *)(a4))->v);
            (((struct o20_ushort *)(a4))->v) = (t1 - 1);
            t2 = 0x20;
            if ((int)(short)(t1 - 1) <= 0) {
                (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                t2 = 0x16;
            }
            t0 = t2;
        }
        t1 = t0;
    } else {
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        (((struct o20_ushort *)(a4))->v) = 0x3C;
        (((struct o5C_float *)(a4))->v) = -1.0f;
        (((struct o12A_ushort *)(a4))->v) = 0x0;
        (((struct o12C_ushort *)(a4))->v) = 0x0;
        (((struct oA8_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0xA8))) ^ 0x1);
        t0 = (((struct o20_short *)(a4))->v);
        (((struct o20_ushort *)(a4))->v) = (t0 - 1);
        t2 = 0x20;
        if ((int)(short)(t0 - 1) <= 0) {
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
            t2 = 0x16;
        }
        t1 = t2;
    }
    return t1;
}

int FUN_0c0ef24a(int a4)
{
    register int t0;
    register int t1;

    t0 = (((struct o22_short *)(a4))->v);
    (((struct o22_ushort *)(a4))->v) = (t0 + 0x1);
    if ((int)(short)(t0 + 0x1) > (int)0x6) {
        (((struct o22_ushort *)(a4))->v) = 0x0;
        thunk_FUN_0c05abb2(0x55, (a4 + 0x28));
    }
    t0 = (((struct oC8_int *)(a4))->v);
    t1 = 0x2AAA;
    if ((int)((((struct o22_short *)(a4))->v)) < (int)0x3) {
        t1 = 0x0;
    }
    (((struct o78_uint *)(t0))->v) = t1;
    t0 = (((struct oCC_int *)(a4))->v);
    t1 = 0x2AAA;
    if ((int)((((struct o22_short *)(a4))->v)) < (int)0x3) {
        t1 = 0x0;
    }
    (((struct o78_uint *)(t0))->v) = t1;
    t0 = (((struct oC8_int *)(a4))->v);
    t1 = 0xFFFFEAAB;
    if ((int)((((struct o22_short *)(a4))->v)) < (int)0x3) {
        t1 = 0x0;
    }
    (((struct o7C_uint *)(t0))->v) = t1;
    t0 = (((struct oCC_int *)(a4))->v);
    t1 = 0x1555;
    if ((int)((((struct o22_short *)(a4))->v)) < (int)0x3) {
        t1 = 0x0;
    }
    (((struct o7C_uint *)(t0))->v) = t1;
    return 0x7C;
}

int FUN_0c0ef2e0(int a4, int a5, int a6)
{
    int stk[4];
    register float u5;
    register float u6;
    register int t12;
    register int t14;
    register int t17;
    register int t18;
    register int t21;

    *(unsigned int *)(((int)stk + 0)) = a5;
    FUN_0c187798(a4, a5, a6);
    (((struct o4_float *)(((int)stk + 0)))->v) = (((((struct o28_float *)((*(int *)((a4 + 0x10)))))->v)) - ((((struct o28_float *)(a4))->v)));
    u5 = (((struct o30_float *)(a4))->v);
    u6 = (((struct o30_float *)((*(int *)((a4 + 0x10)))))->v);
    (((struct o8_float *)((((int)stk + 0) + 0x4)))->v) = (u6 - u5);
    if ((u6 - u5) == 0.0f) {
        (((struct o8_float *)((((int)stk + 0) + 0x4)))->v) = (*(float *)0xC0EF40C);
    }
    t12 = math_atan2_angle16(((((struct o4_float *)(((int)stk + 0)))->v)), ((((struct o8_float *)((((int)stk + 0) + 0x4)))->v)));
    t14 = t12;
    if ((int)(t12 - (*(int *)((a4 + 0x38)))) > (int)0x8000) {
        t14 = (t12 - 0x10000);
    }
    t17 = *(int *)((a4 + 0x38));
    t18 = t14;
    if ((int)(t14 - (*(int *)((a4 + 0x38)))) < (int)0xFFFF8000) {
        t18 = (t14 + 0x10000);
    }
    t21 = (int)((int)(t18 - t17) / (int)(*(int *)(((int)stk + 0))));
    *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + t21);
    return t21;
}

int FUN_0c0ef368(int a4, int a5, int a6)
{
    int stk[3];
    int t14;
    register int t16;
    register int t18;
    register int t20;
    register int t22;
    register float u25;
    register float u26;
    register float u27;
    register float t28;
    register int t30;
    register int t32;
    register int t34;
    register int t36;
    register int t38;

    *(volatile int *)((a4 + 0x10));
    FUN_0c187798(a4, a5, a6);
    *(float *)((((int)stk + 0) + 0x0)) = ((*(float *)((((int)stk + 0) + 0x0))) - ((((struct o28_float *)(a4))->v)));
    (((struct o4_float *)(((int)stk + 0)))->v) = ((((((struct o4_float *)(((int)stk + 0)))->v)) - ((((struct o2C_float *)(a4))->v))) + 100.0f);
    (((struct o8_float *)(((int)stk + 0)))->v) = (((((struct o8_float *)(((int)stk + 0)))->v)) - ((((struct o30_float *)(a4))->v)));
    if ((*(float *)((((int)stk + 0) + 0x0))) == 0.0f) {
        *(float *)((((int)stk + 0) + 0x0)) = 9.99999997e-07f;
    }
    t14 = math_atan_angle16(((-((((struct o8_float *)(((int)stk + 0)))->v))) / (*(float *)((((int)stk + 0) + 0x0)))));
    t16 = (0xFFFF & t14);
    if (0.0f > (*(float *)((((int)stk + 0) + 0x0)))) {
        t16 = ((0xFFFF & t14) + 0x8000);
    }
    t18 = *(int *)((a4 + 0x38));
    t20 = (unsigned short)((unsigned short)(0x4000 + t16) - t18);
    if (((unsigned short)((unsigned short)(0x4000 + t16) - t18) & 0x8000) != 0) {
        t20 = ((unsigned short)((unsigned short)(0x4000 + t16) - t18) | 0xFFFF0000);
    }
    t22 = 0xFFFFFDDE;
    if ((int)t20 > 0) {
        t22 = 0x222;
    }
    *(unsigned int *)((a4 + 0x38)) = (unsigned short)((*(int *)((a4 + 0x38))) + t22);
    u25 = (((struct o8_float *)(((int)stk + 0)))->v);
    u26 = *(float *)((((int)stk + 0) + 0x0));
    u27 = (u25 * u25);
    u27 = u27 + u26 * u26;
    t28 = math_signed_sqrt(u27);
    t30 = math_atan_angle16(((-t28) / ((((struct o4_float *)(((int)stk + 0)))->v))));
    t32 = t30;
    if (0.0f > ((((struct o4_float *)(((int)stk + 0)))->v))) {
        t32 = (t30 + 0x8000);
    }
    t34 = *(int *)((a4 + 0x34));
    t36 = (unsigned short)((-(unsigned short)(0x4000 + t32)) - t34);
    if ((0x8000 & (unsigned short)((-(unsigned short)(0x4000 + t32)) - t34)) != 0) {
        t36 = ((unsigned short)((-(unsigned short)(0x4000 + t32)) - t34) | 0xFFFF0000);
    }
    t38 = 0xFFFFFDDE;
    if ((int)t36 > 0) {
        t38 = 0x222;
    }
    *(unsigned int *)((a4 + 0x34)) = (unsigned short)((*(int *)((a4 + 0x34))) + t38);
    return 0x4;
}

void FUN_0c0ef4aa(int a4, int a5, float f4)
{
    register float u1;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register float u10;
    register float u11;
    register int t29;
    register int t3;

    u1 = 0.0f;
    if (a5 != 0) {
        u1 = 10000.0f;
    }
    t4 = a5;
    t5 = 0xC532498;
    t6 = 0x0;
    t7 = 0xC532498;
    t8 = 0xC532498;
    u10 = f4;
    u11 = u1;
    for (;;) {
        t29 = t4;
        if ((*(signed char *)((((t6 * 0x3938) + 0xC532498) + 0x3714))) != 0) {
            if ((*(signed char *)((((t6 * 0x3938) + 0xC532498) + 0x2))) != 13) {
                t3 = 0xC17C1A0;
                t4 = t7;
                t4 = (t4 + 0x28);
                u10 = ((FUN_0c0e2240((a4 + 0x28), t4)));
                if (a5 != 0) {
                    if (u11 > u10) {
                        u11 = u10;
                        *(unsigned int *)((a4 + 0x10)) = t8;
                    }
                } else {
                    if (u10 > u11) {
                        *(unsigned int *)((a4 + 0x10)) = t5;
                        u11 = u10;
                    }
                }
            } else {
                t29 = t4;
            }
        }
        t3 = 0x4;
        t4 = t29;
        t6 = (t6 + 0x1);
        t5 = (t5 + 0x3938);
        t8 = (t8 + 0x3938);
        t7 = (t7 + 0x3938);
        if ((int)t6 >= (int)t3) {
            break;
        }
    }
}

int FUN_0c0ef912(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;
    register float u1;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            t1 = t0;
            if (t0 != 2) {
            } else {
                u0 = (((struct o14_float *)0xC0EFA9C)->v);
                u1 = ((((struct o28_float *)(a4))->v));
                u1 = u1 + u0 * (math_sin_angle16((*(int *)((a4 + 0x38)))));
                (((struct o28_float *)(a4))->v) = u1;
                u1 = ((((struct o30_float *)(a4))->v));
                u1 = u1 + u0 * (math_cos_angle16((*(int *)((a4 + 0x38)))));
                (((struct o30_float *)(a4))->v) = u1;
                t0 = *(short *)((a4 + 0x1E));
                *(unsigned short *)((a4 + 0x1E)) = (t0 - 1);
                t2 = (short)(t0 - 1);
                if ((int)(short)(t0 - 1) <= 0) {
                    (((struct o16_uchar *)(a4))->v) = 0x0;
                    *(unsigned short *)((a4 + 0x1E)) = 0xA;
                    t2 = 0xA;
                }
                t1 = t2;
            }
            t0 = t1;
        } else {
            t1 = (((struct o20_short *)(a4))->v);
            u0 = (((struct o0_float *)0xC0EFA9C)->v);
            u1 = (((struct o4_float *)0xC0EFA9C)->v);
            t2 = (int)(((float)t1 * u0) / u1);
            if ((int)((int)(((float)t1 * u0) / u1) - (*(int *)((a4 + 0x38)))) > (int)0x8000) {
                t2 = ((int)(((float)t1 * u0) / u1) - 0x10000);
            }
            t1 = *(int *)((a4 + 0x38));
            t3 = t2;
            if ((int)(t2 - (*(int *)((a4 + 0x38)))) > (int)0xFFFF8000) {
                t3 = (t2 + 0x10000);
            }
            *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + ((int)((int)(t3 - t1) / (int)0x1E)));
            t1 = *(short *)((a4 + 0x1E));
            *(unsigned short *)((a4 + 0x1E)) = (t1 - 1);
            t2 = (short)(t1 - 1);
            if ((int)(short)(t1 - 1) <= 0) {
                (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                *(unsigned short *)((a4 + 0x1E)) = 0x1E;
                t2 = 0x1E;
            }
            t0 = t2;
        }
        t1 = t0;
    } else {
        t0 = *(short *)((a4 + 0x1E));
        *(unsigned short *)((a4 + 0x1E)) = (t0 - 1);
        t2 = (short)(t0 - 1);
        if ((int)(short)(t0 - 1) <= 0) {
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
            (((struct o20_ushort *)(a4))->v) = ((((int)((int)(FUN_0c179ac0()) % (int)0xB4)) + ((((struct o20_short *)(a4))->v))) - 90);
            *(unsigned short *)((a4 + 0x1E)) = 0x1E;
            t2 = 0x1E;
        }
        t1 = t2;
    }
    return t1;
}
