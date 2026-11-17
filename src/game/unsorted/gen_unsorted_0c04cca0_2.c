/* game/unsorted: functions 0C04CCA0-0C04D6E0, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c037498(int, int, int, int);
int FUN_0c03f346(int);
int FUN_0c04b23c(int, int, int, int);
int math_vec3_mul_xyz(int, float, float, float);
int FUN_0c0582de(int, int);
int FUN_0c059e9a(int, int, int);
float math_cos_angle16(int);
int FUN_0c179ac0(void);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int FUN_0c0e2390(int, int, int);
int FUN_0c187798(void);
int FUN_0c04cefa(int a4, int a5, int a6, int a7);
int FUN_0c04d126(int a4, int a5, int a6);
int FUN_0c04d514(int a4);

int FUN_0c04cefa(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register float u0;

    FUN_0c04b23c(a4, 0x1, a6, a7);
    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x0;
        (((struct o48_float *)(a4))->v) = 0.0f;
        (((struct o44_float *)(a4))->v) = 0.0f;
        (((struct o40_float *)(a4))->v) = 0.0f;
    }
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if ((int)(*(int *)((a4 + 0x38))) > (int)0xFFFFF1C8) {
                *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) - 0x222);
            }
            math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
            math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
            *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
            t1 = (((struct oC8_int *)(a4))->v);
            (((struct o80_uint *)(t1))->v) = (((((struct o80_int *)(t1))->v)) + 0xB6);
            *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = ((*(short *)((a4 + 0x1E))) & 0x1);
            if ((int)(unsigned char)(*(signed char *)0xC541F44) > (int)0xE) {
                return FUN_0c03f346(a4);
            }
            return 0xE;
        }
        t1 = t0;
        if ((int)(unsigned char)(*(signed char *)0xC541F44) < (int)0xD) {
        } else {
            (((struct o48_float *)(a4))->v) = 1.0f;
            (((struct o44_float *)(a4))->v) = 1.0f;
            (((struct o40_float *)(a4))->v) = 1.0f;
            (((struct o28_float *)(a4))->v) = 50.0f;
            (((struct o2C_float *)(a4))->v) = 0.0f;
            (((struct o30_float *)(a4))->v) = 109.0f;
            FUN_0c0582de((a4 + 0x28), (((((struct oC8_int *)((*(int *)((a4 + 0x10)))))->v)) + 0x28));
            (((struct o4C_float *)(a4))->v) = 30.0f;
            (((struct o50_float *)(a4))->v) = 20.0f;
            (((struct o54_float *)(a4))->v) = 0.0f;
            (((struct o60_float *)(a4))->v) = (((((((struct o4_float *)0xC1B7EEC)->v)) + 2650.0f) * (1.0f + 1.0f)) / 14400.0f);
            u0 = (((((struct o4C_float *)(a4))->v)) * (1.0f + 1.0f));
            u0 = -u0;
            (((struct o58_float *)(a4))->v) = (u0 / 120.0f);
            u0 = (-(((((struct o50_float *)(a4))->v)) * 120.0f));
            (((struct o5C_float *)(a4))->v) = ((((u0 + ((((struct o0_float *)0xC1B7EEC)->v))) + -200.0f) * (1.0f + 1.0f)) / 14400.0f);
            (((struct oA8_uchar *)(a4))->v) = 0x1;
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            t1 = 0x15;
        }
        return t1;
    }
    *(unsigned short *)((a4 + 0x1C)) = 0x28;
    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    if ((int)(unsigned char)(*(signed char *)0xC541F44) < (int)0xD) {
    } else {
        (((struct o48_float *)(a4))->v) = 1.0f;
        (((struct o44_float *)(a4))->v) = 1.0f;
        (((struct o40_float *)(a4))->v) = 1.0f;
        (((struct o28_float *)(a4))->v) = 50.0f;
        (((struct o2C_float *)(a4))->v) = 0.0f;
        (((struct o30_float *)(a4))->v) = 109.0f;
        FUN_0c0582de((a4 + 0x28), (((((struct oC8_int *)((*(int *)((a4 + 0x10)))))->v)) + 0x28));
        (((struct o4C_float *)(a4))->v) = 30.0f;
        (((struct o50_float *)(a4))->v) = 20.0f;
        (((struct o54_float *)(a4))->v) = 0.0f;
        (((struct o60_float *)(a4))->v) = (((((((struct o4_float *)0xC1B7EEC)->v)) + 2650.0f) * (1.0f + 1.0f)) / 14400.0f);
        u0 = (((((struct o4C_float *)(a4))->v)) * (1.0f + 1.0f));
        u0 = -u0;
        (((struct o58_float *)(a4))->v) = (u0 / 120.0f);
        u0 = (-(((((struct o50_float *)(a4))->v)) * 120.0f));
        (((struct o5C_float *)(a4))->v) = ((((u0 + ((((struct o0_float *)0xC1B7EEC)->v))) + -200.0f) * (1.0f + 1.0f)) / 14400.0f);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    }
    return 0x15;
}

int FUN_0c04d126(int a4, int a5, int a6)
{
    int stk[3];
    register int t2;
    register int t18;
    register float u24;
    register float u29;
    register float t32;
    register float u34;
    register int t35;
    register int t37;
    register int t40;
    register float t43;
    register float t44;
    register int t72;
    register float u106;
    register float u111;
    register float t115;
    register float u118;
    register int t120;
    register int t142;
    register int t171;
    register int t186;

    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o15_uchar *)(a4))->v) = 0x0;
        t2 = *(signed char *)0xC541F44;
        (((struct o22_ushort *)(a4))->v) = ((*(short *)(((((unsigned char)t2 << 1) + 0xC1B7D62) + 0x2))) + ((*(short *)((0xC1B7D62 + (((unsigned char)t2 - 1) << 1)))) + (*(short *)((0xC1B7D62 + ((unsigned char)t2 << 1))))));
    }
    (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) - 1);
    t18 = *(signed char *)((a4 + 0x15));
    if (t18 != 0) {
        if (t18 != 1) {
            if (t18 != 2) {
                if (t18 == 3) {
                    *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x3A7);
                    u24 = ((((struct o60_float *)(a4))->v));
                    u24 = u24 + (float)(*(short *)((a4 + 0x1C))) * (math_cos_angle16((*(short *)((a4 + 0x1E)))));
                    (((struct o30_float *)(a4))->v) = (u24 + 600.0f);
                    u29 = ((((struct o58_float *)(a4))->v));
                    u29 = u29 + (float)(*(short *)((a4 + 0x1C))) * (math_sin_angle16((*(short *)((a4 + 0x1E)))));
                    (((struct o28_float *)(a4))->v) = u29;
                    t32 = math_sin_angle16((((short)(*(signed char *)((a4 + 0x2))) * (short)0x2492) + (*(short *)((a4 + 0x1E)))));
                    u34 = ((((struct o5C_float *)(a4))->v));
                    u34 = u34 + 10.0f * t32;
                    (((struct o2C_float *)(a4))->v) = u34;
                    t35 = (((struct o20_short *)(a4))->v);
                    (((struct o20_ushort *)(a4))->v) = (t35 - 1);
                    t186 = 0x20;
                    if ((int)(short)(t35 - 1) < 0) {
                        t37 = *(signed char *)((a4 + 0x2));
                        if (t37 == 0) {
                            FUN_0c0e2390(((int)stk + 0), 0xC1B7EE8, (a4 + 0x28));
                            t40 = (((struct o22_short *)(a4))->v);
                            *(float *)(((int)stk + 0)) = ((*(float *)(((int)stk + 0))) / (float)t40);
                            *(float *)(((int)stk + 8)) = ((*(float *)(((int)stk + 8))) / (float)t40);
                            *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) / (float)t40);
                        } else {
                            t43 = math_cos_angle16(((short)t37 * (short)0x6DB6));
                            *(float *)(((int)stk + 8)) = (t43 * 4000.0f);
                            t44 = math_sin_angle16(((short)t37 * (short)0x6DB6));
                            *(float *)(((int)stk + 0)) = (t44 * 4000.0f);
                            *(float *)(((int)stk + 4)) = -500.0f;
                            math_vec3_mul_xyz(((int)stk + 0), 0.0166666675f, 0.0166666675f, 0.0166666675f);
                        }
                        FUN_0c187798();
                        if ((*(signed char *)((a4 + 0x2))) == 6) {
                            FUN_0c059e9a((((short)(*(signed char *)0xC542363) * (short)0x3938) + 0xC532498), 0x34, (a4 + 0x28));
                        }
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        t186 = 0x15;
                    }
                } else {
                    t186 = t18;
                    if (t18 == 4) {
                        math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
                        t72 = *(signed char *)0xC541F44;
                        t186 = (unsigned char)t72;
                        if ((int)(unsigned char)t72 > (int)0xE) {
                            t186 = (FUN_0c03f346(a4));
                        }
                    }
                }
            } else {
                *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x5);
                if ((int)(*(short *)((a4 + 0x1C))) > (int)0x64) {
                    *(unsigned short *)((a4 + 0x1C)) = 0x64;
                }
                *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x3A7);
                u106 = ((((struct o60_float *)(a4))->v));
                u106 = u106 + (float)(*(short *)((a4 + 0x1C))) * (math_cos_angle16((*(short *)((a4 + 0x1E)))));
                (((struct o30_float *)(a4))->v) = (u106 + 600.0f);
                u111 = ((((struct o58_float *)(a4))->v));
                u111 = u111 + (float)(*(short *)((a4 + 0x1C))) * (math_sin_angle16((*(short *)((a4 + 0x1E)))));
                (((struct o28_float *)(a4))->v) = u111;
                (((struct o5C_float *)(a4))->v) = (((((struct o5C_float *)(a4))->v)) + 25.0f);
                t115 = math_sin_angle16((((short)(*(signed char *)((a4 + 0x2))) * (short)0x2492) + (*(short *)((a4 + 0x1E)))));
                u118 = ((((struct o5C_float *)(a4))->v));
                u118 = u118 + ((1.0f + 1.0f)) * t115;
                (((struct o2C_float *)(a4))->v) = u118;
                t186 = 0x5C;
                if (1000.0f > ((((struct o5C_float *)(a4))->v))) {
                } else {
                    t120 = *(signed char *)((a4 + 0x2));
                    (((struct o20_ushort *)(a4))->v) = (int)((float)(((((-t120) + 0x7) << 2) << 1) - ((-t120) + 0x7)) + 90.0f);
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    t186 = 0x15;
                }
            }
        } else {
            t142 = *(signed char *)0xC541F44;
            t186 = (unsigned char)t142;
            if ((int)(unsigned char)t142 < (int)0xD) {
            } else {
                (((struct o58_float *)(a4))->v) = 50.0f;
                (((struct o5C_float *)(a4))->v) = 0.0f;
                (((struct o60_float *)(a4))->v) = 109.0f;
                FUN_0c0582de((a4 + 0x58), (((((struct oC8_int *)((*(int *)((a4 + 0x10)))))->v)) + 0x28));
                FUN_0c187798();
                (((struct oA8_uchar *)(a4))->v) = 0x1;
                *(unsigned short *)((a4 + 0x1C)) = 0x0;
                *(unsigned short *)((a4 + 0x1E)) = ((short)(*(signed char *)((a4 + 0x2))) * (short)0x2492);
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                t186 = 0x15;
            }
        }
    } else {
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t171 = *(signed char *)0xC541F44;
        t186 = (unsigned char)t171;
        if ((int)(unsigned char)t171 < (int)0xD) {
        } else {
            (((struct o58_float *)(a4))->v) = 50.0f;
            (((struct o5C_float *)(a4))->v) = 0.0f;
            (((struct o60_float *)(a4))->v) = 109.0f;
            FUN_0c0582de((a4 + 0x58), (((((struct oC8_int *)((*(int *)((a4 + 0x10)))))->v)) + 0x28));
            FUN_0c187798();
            (((struct oA8_uchar *)(a4))->v) = 0x1;
            *(unsigned short *)((a4 + 0x1C)) = 0x0;
            *(unsigned short *)((a4 + 0x1E)) = ((short)(*(signed char *)((a4 + 0x2))) * (short)0x2492);
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            t186 = 0x15;
        }
    }
    return t186;
}

int FUN_0c04d514(int a4)
{
    register int t0;
    register float u0;
    register float u1;
    register float u2;

    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0x0;
        *(unsigned short *)((a4 + 0x1E)) = 0x0;
        u0 = -16384.0f;
        u0 = u0 + 32768.0f * (((float)((int)((int)(FUN_0c179ac0()) % (int)0x80)) / 128.0f));
        u1 = 1300.0f;
        u1 = u1 + 200.0f * (((float)((int)((int)(FUN_0c179ac0()) % (int)0x80)) / 128.0f));
        u2 = 0.0f;
        u2 = u2 + u1 * (math_sin_angle16((int)u0));
        (((struct o28_float *)(a4))->v) = u2;
        u2 = -3500.0f;
        u2 = u2 + u1 * (math_cos_angle16((int)u0));
        (((struct o30_float *)(a4))->v) = u2;
        u0 = 200.0f;
        u0 = u0 + 200.0f * (((float)((int)((int)(FUN_0c179ac0()) % (int)0x80)) / 128.0f));
        (((struct o2C_float *)(a4))->v) = u0;
    }
    t0 = *(short *)((a4 + 0x1E));
    *(unsigned short *)((a4 + 0x1E)) = (t0 - 1);
    if ((int)(short)(t0 - 1) < 0) {
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
        if ((int)(*(short *)((a4 + 0x1C))) > (int)0xD) {
            return FUN_0c03f346(a4);
        }
        *(unsigned short *)((a4 + 0x1E)) = 0x2;
        return FUN_0c037498(((((struct oC4_int *)(a4))->v)), (*(short *)((a4 + 0x1C))), 0x2, (*(int *)0xC4B410C));
    }
    return (short)(t0 - 1);
}
