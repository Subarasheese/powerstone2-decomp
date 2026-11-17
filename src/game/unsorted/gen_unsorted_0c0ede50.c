/* game/unsorted: functions 0C0EDE50-0C0EE318, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o10_float { char p[0x10]; float v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o131_uchar { char p[0x131]; unsigned char v; };
struct o136_uchar { char p[0x136]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o3770_int { char p[0x3770]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC0_int { char p[0xC0]; int v; };
int thunk_FUN_0c05abb2(int, int);
int FUN_0c150286(int, int, int, int, int, float);
float math_cos_angle16(int);
int FUN_0c179ac0(void);
float math_sin_angle16(int);
int FUN_0c0ede50(int a4);
int FUN_0c0ede64(void);
int FUN_0c0edf44(int a4);
int FUN_0c0edfac(int a4, int a5, int a6);

int FUN_0c0ede50(int a4)
{
    register int t0;
    register int t2;

    t0 = *(signed char *)((a4 + 0x16));
    t2 = t0;
    if (t0 == 0) {
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        t2 = 0x16;
    }
    return t2;
}

int FUN_0c0ede64(void)
{
    int stk[10];
    register int t1;
    register float u2;
    register float u3;
    register float u4;
    register float u7;
    register float t8;
    register float u10;
    register float t11;
    register float u13;
    register float u15;
    register float t16;
    register float t17;
    register float t18;
    register float t19;

    t1 = (int)((int)(FUN_0c179ac0()) % (int)0x5A);
    u2 = (((struct o0_float *)0xC0EDF80)->v);
    u3 = (((struct o4_float *)0xC0EDF80)->v);
    u4 = (((struct o8_float *)0xC0EDF80)->v);
    u7 = u4;
    u7 = u7 + u4 * (float)((int)((int)(FUN_0c179ac0()) % (int)0xC));
    t8 = math_sin_angle16(((int)(((float)t1 * u2) / u3) + 0x2000));
    u10 = ((((struct o10_float *)0xC0EDF80)->v));
    u10 = u10 + u7 * t8;
    *(float *)(((int)stk + 28)) = u10;
    t11 = math_cos_angle16(((int)(((float)t1 * u2) / u3) + 0x2000));
    u13 = ((((struct o18_float *)0xC0EDF80)->v));
    u13 = u13 + u7 * t11;
    *(float *)(((int)stk + 36)) = u13;
    *(float *)(((int)stk + 32)) = ((((struct o1C_float *)0xC0EDF80)->v));
    u15 = (((struct o20_float *)0xC0EDF80)->v);
    t16 = math_sin_angle16(((int)(((float)t1 * u2) / u3) + 0x2000));
    *(float *)(((int)stk + 16)) = (t16 * u15);
    t17 = math_cos_angle16(((int)(((float)t1 * u2) / u3) + 0x2000));
    *(float *)(((int)stk + 24)) = (t17 * u15);
    *(float *)(((int)stk + 20)) = 0.0f;
    t18 = math_sin_angle16(((int)(((float)t1 * u2) / u3) + 0x2000));
    *(float *)(((int)stk + 4)) = (t18 * 1.0f);
    t19 = math_cos_angle16(((int)(((float)t1 * u2) / u3) + 0x2000));
    *(float *)(((int)stk + 12)) = (t19 * 1.0f);
    *(float *)(((int)stk + 8)) = 0.0f;
    *(int *)((int)stk + 0) = 0x3C;
    return (FUN_0c150286((((int)stk + 0) + 0x1C), (((int)stk + 0) + 0x10), (((int)stk + 0) + 0x4), 0xC2881E0, 0x3C, (1.0f + 1.0f)));
}

int FUN_0c0edf44(int a4)
{
    register int t0;
    register int t4;
    int t5;
    register int t6;

    t0 = *(signed char *)((a4 + 0x3715));
    if (t0 != 11) {
        if ((t0 == 34) && ((t4 = (((struct o3770_int *)(a4))->v), t4 != 0) && (t5 = (((struct o3770_int *)(a4))->v), t6 = *(signed char *)((0x3715 + t5)), t6 == 11))) {
            return 0x0;
        }
        return 0x1;
    }
    return 0x0;
}

int FUN_0c0edfac(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;

    t4 = *(signed char *)((a4 + 0x16));
    if (t4 != 0) {
        if (t4 != 1) {
            (((struct o12A_ushort *)(a4))->v) = 0x0;
            (((struct o131_uchar *)(a4))->v) = 0x0;
            (((struct o136_uchar *)(a4))->v) = 0x0;
            t4 = 0x0;
            t5 = a5;
            t6 = a6;
            for (;;) {
                if ((int)t4 >= (int)((((struct oC0_int *)(a4))->v))) {
                    break;
                }
                t5 = t4;
                t6 = t4;
                t5 = (t5 << 2);
                t6 = (t6 << 2);
                t5 = (t5 + (0xC4 + a4));
                t6 = (t6 << 1);
                t5 = (*(int *)((t5 + 0x0)));
                t6 = (t6 + t4);
                t6 = (t6 << 2);
                t6 = (t6 << 1);
                t6 = (t6 + 0xC1CD104);
                t4 = (t4 + 0x1);
                (((struct o78_uint *)(t5))->v) = ((*(int *)((t6 + 0x0))));
                (((struct o7C_uint *)(t5))->v) = (*(int *)((t6 + 0x4)));
            }
            (((struct o15_uchar *)(a4))->v) = 0x0;
            (((struct o16_uchar *)(a4))->v) = 0x0;
        } else {
            t4 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t4 - 1);
            if ((short)(t4 - 1) == 0) {
                t4 = *(signed char *)((a4 + 0x16));
                (((struct o16_uchar *)(a4))->v) = (t4 + 0x1);
                t5 = (t4 + 0x1);
            }
            t4 = (((struct o20_short *)(a4))->v);
            (((struct o20_ushort *)(a4))->v) = (t4 - 1);
            if ((int)(short)(t4 - 1) <= 0) {
                (((struct o20_ushort *)(a4))->v) = 0x3C;
                thunk_FUN_0c05abb2(0x57, (a4 + 0x28));
            } else {
                t4 = t5;
            }
            t5 = t4;
            t4 = 0x0;
            t6 = t0;
            t0 = t1;
            for (;;) {
                if ((int)t4 >= (int)((((struct oC0_int *)(a4))->v))) {
                    break;
                }
                t6 = t4;
                t0 = t4;
                t6 = (t6 << 2);
                t0 = (t0 << 2);
                t6 = (t6 + (0xC4 + a4));
                t0 = (t0 << 1);
                t6 = (*(int *)((t6 + 0x0)));
                t0 = (t0 + t4);
                t0 = (t0 << 2);
                t0 = (t0 << 1);
                t0 = (t0 + 0xC1CD104);
                t1 = (int)((int)(*(short *)((a4 + 0x1E))) % (int)0x6);
                t5 = (*(int *)((t0 + (((t1 << 1) + t1) << 2))));
                (((struct o78_uint *)(t6))->v) = t5;
                t1 = (int)((int)(*(short *)((a4 + 0x1E))) % (int)0x6);
                t0 = (t0 + (((t1 << 1) + t1) << 2));
                t5 = (*(int *)((t0 + 0x4)));
                t4 = (t4 + 0x1);
                (((struct o7C_uint *)(t6))->v) = t5;
            }
            if (((int)((int)(*(short *)((a4 + 0x1E))) % (int)0xA)) == 0) {
                t0 = 0x4;
                for (;;) {
                    FUN_0c0ede64();
                    t0 = (t0 - 0x1);
                    if (t0 == 0) {
                        break;
                    }
                }
            }
            t0 = 0xC532498;
            t1 = 0xC532498;
            for (;;) {
                t4 = FUN_0c0edf44(t1);
                if (t4 != 0) {
                    (((struct o28_float *)(t0))->v) = (((((struct o28_float *)(t0))->v)) + 7.0f);
                }
                t1 = (t1 + 0x3938);
                t0 = (t0 + 0x3938);
                if ((unsigned int)t1 >= (unsigned int)0xC540978) {
                    break;
                }
            }
            *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
        }
    } else {
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0x12C;
        *(unsigned short *)((a4 + 0x1E)) = 0x0;
        (((struct o20_ushort *)(a4))->v) = 0x0;
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        if ((short)(t0 - 1) == 0) {
            t0 = *(signed char *)((a4 + 0x16));
            (((struct o16_uchar *)(a4))->v) = (t0 + 0x1);
            t1 = (t0 + 0x1);
        }
        t0 = (((struct o20_short *)(a4))->v);
        (((struct o20_ushort *)(a4))->v) = (t0 - 1);
        if ((int)(short)(t0 - 1) <= 0) {
            (((struct o20_ushort *)(a4))->v) = 0x3C;
            thunk_FUN_0c05abb2(0x57, (a4 + 0x28));
        } else {
            t0 = t1;
        }
        t1 = t0;
        t0 = 0x0;
        t4 = t2;
        t2 = t3;
        for (;;) {
            if ((int)t0 >= (int)((((struct oC0_int *)(a4))->v))) {
                break;
            }
            t4 = t0;
            t2 = t0;
            t4 = (t4 << 2);
            t2 = (t2 << 2);
            t4 = (t4 + (0xC4 + a4));
            t2 = (t2 << 1);
            t4 = (*(int *)((t4 + 0x0)));
            t2 = (t2 + t0);
            t2 = (t2 << 2);
            t2 = (t2 << 1);
            t2 = (t2 + 0xC1CD104);
            t3 = (int)((int)(*(short *)((a4 + 0x1E))) % (int)0x6);
            t1 = (*(int *)((t2 + (((t3 << 1) + t3) << 2))));
            (((struct o78_uint *)(t4))->v) = t1;
            t3 = (int)((int)(*(short *)((a4 + 0x1E))) % (int)0x6);
            t2 = (t2 + (((t3 << 1) + t3) << 2));
            t1 = (*(int *)((t2 + 0x4)));
            t0 = (t0 + 0x1);
            (((struct o7C_uint *)(t4))->v) = t1;
        }
        if (((int)((int)(*(short *)((a4 + 0x1E))) % (int)0xA)) == 0) {
            t0 = 0x4;
            for (;;) {
                FUN_0c0ede64();
                t0 = (t0 - 0x1);
                if (t0 == 0) {
                    break;
                }
            }
        }
        t0 = 0xC532498;
        t1 = 0xC532498;
        for (;;) {
            t2 = FUN_0c0edf44(t1);
            if (t2 != 0) {
                (((struct o28_float *)(t0))->v) = (((((struct o28_float *)(t0))->v)) + 7.0f);
            }
            t1 = (t1 + 0x3938);
            t0 = (t0 + 0x3938);
            if ((unsigned int)t1 >= (unsigned int)0xC540978) {
                break;
            }
        }
        *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
    }
    (((struct oBC_float *)(a4))->v) = 1.0f;
    (((struct oB8_float *)(a4))->v) = 1.0f;
    (((struct oB4_float *)(a4))->v) = 1.0f;
    return 0xB4;
}
