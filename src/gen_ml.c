/* Straight-line functions with calls and guards (batch gen_ml): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_float { char p[0x10]; float v; };
struct o10_uchar { char p[0x10]; unsigned char v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o268_uint { char p[0x268]; unsigned int v; };
struct o3790_float { char p[0x3790]; float v; };
struct o37C8_float { char p[0x37C8]; float v; };
struct o3818_short { char p[0x3818]; short v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o78_int { char p[0x78]; int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c013f2e(void);
int FUN_0c0185b4(void);
int FUN_0c01e9e4(void);
int FUN_0c022050(void);
int FUN_0c0220c4(int, int, int);
int FUN_0c0222a4(int, int, int);
int FUN_0c037498(int, int, int, int);
int FUN_0c037bf6(int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c05253c(int, int, int, int, int, int);
int FUN_0c054a62(int, int);
int FUN_0c056b68(int, int);
int FUN_0c0573cc(int, int, int);
int FUN_0c0582de(int);
int FUN_0c059df2(int, int);
int FUN_0c059e9a(int, int, int);
int FUN_0c064f02(int);
int FUN_0c064f80(int);
int FUN_0c0752a8(int);
int FUN_0c075328(int);
int FUN_0c07a6aa(int);
int FUN_0c07bc8c(int);
int FUN_0c07bcc2(int);
int FUN_0c07db58(int);
int FUN_0c07e3fc(int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c08e382(int);
int FUN_0c0cb448(int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0f4202(int, int);
int FUN_0c104cc8(int);
int FUN_0c104d70(void);
int FUN_0c104de4(int, int);
int FUN_0c105384(int, int);
int FUN_0c10a46e(int);
int FUN_0c10a506(int);
extern int FUN_0c10ab7c();
int FUN_0c117944(int, ...);
int FUN_0c118584(int);
int FUN_0c133c0e(int);
int FUN_0c13b08c(int, int, int, int);
int FUN_0c13b35e(int, int, int, int);
int FUN_0c13b632(int, int, int, int);
int FUN_0c13d4ac(int, int, int);
int FUN_0c13d9e4(int);
int FUN_0c13dc4c(int);
int FUN_0c13df20(int);
int FUN_0c13e124(int);
int FUN_0c150be8(int, int);
int FUN_0c165392(int, int, int, int);
int FUN_0c186740(int, int);
int FUN_0c187798(int, int);
int math_atan2_angle16(int, float, float);
float math_cos_angle16(int);
int math_mat_get_translate(int, int);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int pdVibMxStop(int);
int FUN_0c10ae02(int a4, int a5, int a6, int a7);
int FUN_0c0546f4(int a4);
int FUN_0c07c25a(void);
int FUN_0c0f2ff4(int a4);
int FUN_0c133c78(int a4, int a5);
int FUN_0c13b6a8(int a4, int a5, int a6, int a7);
int FUN_0c023b60(void);
int FUN_0c071e40(int a4);
int FUN_0c13d04c(int a4, int a5, int a6, int a7);
int FUN_0c0730ca(int a4);
int FUN_0c075952(int a4);

int FUN_0c10ae02(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x15));
    t1 = *(int *)0xC47473C;
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            t0 = *(int *)0xC47473C;
            if (t0 != 0) {
                if (t0 != 1) {
                    if (t0 != 2) {
                        return t0;
                    }
                    return ((int (*)(int, int, int, int))(FUN_0c10ab7c))(a4, a5, a6, a7);
                }
                return FUN_0c10a506(a4);
            }
            return FUN_0c10a46e(a4);
        }
        FUN_0c118584(t1);
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        (((struct o16_uchar *)(a4))->v) = 0x0;
        (((struct o17_uchar *)(a4))->v) = 0x0;
        t0 = *(int *)0xC47473C;
        if (t0 != 0) {
            if (t0 != 1) {
                if (t0 != 2) {
                    return t0;
                }
                return ((int (*)(int))(FUN_0c10ab7c))(a4);
            }
            return FUN_0c10a506(a4);
        }
        return FUN_0c10a46e(a4);
    }
    *(unsigned int *)0xC47473C = (FUN_0c105384(t1, 0x2));
    t0 = FUN_0c104cc8(0x3000);
    if (t0 != 0) {
        FUN_0c117944(((*(int *)((((*(int *)0xC47473C) << 2) + 0xC290BBC)))));
    }
    t0 = FUN_0c104d70();
    if (t0 == 0) {
        t0 = FUN_0c104de4((*(int *)0xC47473C), 0x2);
        t1 = t0;
        if (t0 != 0) {
            if ((*(int *)0xC47473C) == 2) {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                t0 = 0x15;
            } else {
                *(unsigned int *)0xC47473C = 0x2;
                t0 = (FUN_0c117944(((*(int *)0xC290BC4))));
            }
            t1 = t0;
        }
        t0 = t1;
    } else {
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t0 = 0x15;
    }
    return t0;
}

int FUN_0c0546f4(int a4)
{
    int stk[3];
    register int t0;
    register int t1;
    register float u5;
    register float u6;
    register float u7;
    register int t22;
    register int t24;
    register int t26;
    register int t37;
    register int t39;
    register int t20;
    register int t47;
    register int t27;
    register int t40;

    t0 = *(signed char *)0xC542237;
    t1 = *(signed char *)0xC54223C;
    if ((*(signed char *)((((0xC2580CC + (((((t0 << 2) << 2) << 1) + t0) << 2)) + ((short)t1 * (short)0x2C)) + 0x0))) != 0) {
        u5 = (((struct o10_float *)(((0xC2580CC + (((((t0 << 2) << 2) << 1) + t0) << 2)) + ((short)t1 * (short)0x2C))))->v);
        *(float *)((((int)stk + 0) + 0x0)) = (u5 - ((((struct o4_float *)(((0xC2580CC + (((((t0 << 2) << 2) << 1) + t0) << 2)) + ((short)t1 * (short)0x2C))))->v)));
        u6 = (((struct oC_float *)(((0xC2580CC + (((((t0 << 2) << 2) << 1) + t0) << 2)) + ((short)t1 * (short)0x2C))))->v);
        u7 = (((struct o18_float *)(((0xC2580CC + (((((t0 << 2) << 2) << 1) + t0) << 2)) + ((short)t1 * (short)0x2C))))->v);
        (((struct o8_float *)(((int)stk + 0)))->v) = (u7 - u6);
        if ((u7 - u6) == 0.0f) {
            (((struct o8_float *)(((int)stk + 0)))->v) = 9.99999997e-07f;
        }
        t20 = (math_atan2_angle16(((0xC2580CC + (((((t0 << 2) << 2) << 1) + t0) << 2)) + ((short)t1 * (short)0x2C)), (*(float *)((((int)stk + 0) + 0x0))), ((((struct o8_float *)(((int)stk + 0)))->v))));
    } else {
        t20 = (*(int *)((((0xC2580CC + (((((t0 << 2) << 2) << 1) + t0) << 2)) + ((short)t1 * (short)0x2C)) + 0x28)));
    }
    t22 = *(signed char *)((a4 + 0xA));
    if (t22 != 0) {
        if (t22 != 1) {
            t47 = t20;
        } else {
            *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
            t24 = 0xC1B92B4;
            t26 = (0x248 + a4);
            for (;;) { t27 = *(int *)t24; t24 = (t24 + 4); if ((unsigned int)((0xC1B92B4 + 128)) < (unsigned int)t24) break; *(unsigned int *)t26 = t27; t26 = (t26 + 4); }
            (((struct o268_uint *)(a4))->v) = t20;
            FUN_0c054a62(a4, (0x248 + a4));
        }
    } else {
        *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
        t37 = 0xC1B9234;
        t39 = (0x248 + a4);
        for (;;) { t40 = *(int *)t37; t37 = (t37 + 4); if ((unsigned int)((0xC1B9234 + 128)) < (unsigned int)t37) break; *(unsigned int *)t39 = t40; t39 = (t39 + 4); }
        (((struct o268_uint *)(a4))->v) = t20;
        FUN_0c054a62(a4, (0x248 + a4));
    }
    return (FUN_0c056b68(a4, t47));
}


int FUN_0c0f2ff4(int a4)
{
    int stk[3];
    register int t0;
    register int t1;
    register int t2;
    register int t6;
    register float u12;
    register float u15;
    register float u17;
    register float u18;
    register float u22;
    register float u26;
    register float u27;
    register float u28;
    register int t53;
    register float u59;
    register float u62;
    register float u64;
    register float u65;
    register float u69;
    register float u73;
    register float u74;
    register float u75;
    register int t89;

    t0 = *(signed char *)((a4 + 0x16));
    t1 = *(int *)((a4 + 0x10));
    if (t0 != 0) {
        if (t0 != 1) {
            t2 = *(int *)((a4 + 0x10));
            if (((*(signed char *)((t2 + 0x14))) == 1) && (t89 = *(signed char *)((t2 + 0x15)), t89 == 5)) {
            } else {
                (((struct o15_uchar *)(a4))->v) = 0x0;
                (((struct o16_uchar *)(a4))->v) = 0x0;
                t89 = 0x16;
            }
        } else {
            t6 = (((struct o22_short *)(a4))->v);
            (((struct o22_ushort *)(a4))->v) = (t6 - 1);
            if ((int)(short)(t6 - 1) <= 0) {
                (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
            }
            math_mat_get_translate((a4 + 0x64), ((int)stk + 0));
            u12 = (((struct o0_float *)0xC0F3124)->v);
            u15 = *(float *)(((int)stk + 0));
            u17 = ((math_sin_angle16((*(int *)((t1 + 0x38))))) * ((((struct o40_float *)(t1))->v)));
            u18 = u15;
            u18 = u18 + u12 * u17;
            *(float *)(((int)stk + 0)) = u18;
            u22 = (*(float *)(((int)stk + 4)));
            u22 = u22 + ((((struct o8_float *)0xC0F3124)->v)) * ((((struct o44_float *)(t1))->v));
            *(float *)(((int)stk + 4)) = u22;
            u26 = *(float *)(((int)stk + 8));
            u27 = ((math_cos_angle16((*(int *)((t1 + 0x38))))) * ((((struct o48_float *)(t1))->v)));
            u28 = u26;
            u28 = u28 + u12 * u27;
            *(float *)(((int)stk + 8)) = u28;
            if (((int)((int)((((struct o20_short *)(a4))->v)) % (int)0x6)) == 0) {
                FUN_0c165392(((int)stk + 0), (*(int *)((t1 + 0x38))), (*(signed char *)((t1 + 0x1))), (((((int)((int)((((struct o20_short *)(a4))->v)) % (int)0xC)) == 0)) ? 1 : 0));
            }
            (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) + 0x1);
            t89 = 0x20;
        }
    } else {
        (((struct o20_ushort *)(a4))->v) = 0x0;
        (((struct o22_ushort *)(a4))->v) = 0x3C;
        FUN_0c059df2((*(signed char *)((a4 + 0x1))), 0x4E);
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        t53 = (((struct o22_short *)(a4))->v);
        (((struct o22_ushort *)(a4))->v) = (t53 - 1);
        if ((int)(short)(t53 - 1) <= 0) {
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        }
        math_mat_get_translate((a4 + 0x64), ((int)stk + 0));
        u59 = (((struct o0_float *)0xC0F3124)->v);
        u62 = *(float *)(((int)stk + 0));
        u64 = ((math_sin_angle16((*(int *)((t1 + 0x38))))) * ((((struct o40_float *)(t1))->v)));
        u65 = u62;
        u65 = u65 + u59 * u64;
        *(float *)(((int)stk + 0)) = u65;
        u69 = (*(float *)(((int)stk + 4)));
        u69 = u69 + ((((struct o8_float *)0xC0F3124)->v)) * ((((struct o44_float *)(t1))->v));
        *(float *)(((int)stk + 4)) = u69;
        u73 = *(float *)(((int)stk + 8));
        u74 = ((math_cos_angle16((*(int *)((t1 + 0x38))))) * ((((struct o48_float *)(t1))->v)));
        u75 = u73;
        u75 = u75 + u59 * u74;
        *(float *)(((int)stk + 8)) = u75;
        if (((int)((int)((((struct o20_short *)(a4))->v)) % (int)0x6)) == 0) {
            FUN_0c165392(((int)stk + 0), (*(int *)((t1 + 0x38))), (*(signed char *)((t1 + 0x1))), (((((int)((int)((((struct o20_short *)(a4))->v)) % (int)0xC)) == 0)) ? 1 : 0));
        }
        (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) + 0x1);
        t89 = 0x20;
    }
    return t89;
}

int FUN_0c133c78(int a4, int a5)
{
    register int t0;
    register int t1;

    *(unsigned char *)((a4 + 0x2)) = a5;
    if (a5 != 0) {
        FUN_0c037498(((((struct oC4_int *)(a4))->v)), 0x0, 0x6, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
        FUN_0c037498(((((struct oC8_int *)(a4))->v)), 0x1, 0x6, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
        *(unsigned short *)((((((struct oC8_int *)(a4))->v)) + 0x6)) = 0x1F;
        t0 = *(int *)(((0xC4 + a4) + 0x4));
        t1 = (((struct oC4_int *)(a4))->v);
        (((struct o8C_float *)(t0))->v) = 1.0f;
        (((struct o88_float *)(t0))->v) = 1.0f;
        (((struct o84_float *)(t0))->v) = 1.0f;
        (((struct o8C_float *)(t1))->v) = 1.0f;
        (((struct o88_float *)(t1))->v) = 1.0f;
        (((struct o84_float *)(t1))->v) = 1.0f;
        t0 = *(int *)(((0xC4 + a4) + 0x4));
        t1 = (((struct oC4_int *)(a4))->v);
        (((struct o80_uint *)(t0))->v) = 0x0;
        (((struct o7C_uint *)(t0))->v) = 0x0;
        (((struct o78_uint *)(t0))->v) = 0x0;
        (((struct o80_uint *)(t1))->v) = 0x0;
        (((struct o7C_uint *)(t1))->v) = 0x0;
        (((struct o78_uint *)(t1))->v) = 0x0;
        return 0x78;
    }
    FUN_0c037498(((((struct oC4_int *)(a4))->v)), 0x0, 0x0, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
    FUN_0c037498(((((struct oC8_int *)(a4))->v)), 0x1, 0x0, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
    *(unsigned short *)((((((struct oC8_int *)(a4))->v)) + 0x6)) = 0x3F;
    return FUN_0c133c0e(a4);
}

int FUN_0c13b6a8(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t0;
    register int t13;
    register int t4;
    register int t5;
    register int t36;
    register int t52;
    register int t53;
    register int t81;
    register int t86;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            t86 = (FUN_0c03f346(a4, a5, a6, a7));
        } else {
            t13 = a4;
            if ((*(short *)((a4 + 0x1C))) == 0) {
                t4 = *(short *)((a4 + 0x1C));
                t5 = ((~(((~t4) + 0x1) & 0x3)) + 0x1);
                if ((int)t4 >= 0) {
                    t5 = (t4 & 0x3);
                }
                if (t5 == 0) {
                    FUN_0c13b35e((*(signed char *)((a4 + 0x1))), (a4 + 0x28), (a4 + 0x34), 0x2);
                } else {
                    t13 = a4;
                }
            }
            if ((*(short *)((a4 + 0x1C))) == 4) {
                FUN_0c187798(t13, ((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532560))) + 0x28));
                *(float *)(((int)stk + 0)) = ((*(float *)(((int)stk + 0))) * 3.0f);
                FUN_0c0582de(((int)stk + 0));
                FUN_0c13b08c((*(signed char *)((a4 + 0x1))), ((int)stk + 0), (a4 + 0x34), (*(signed char *)((a4 + 0x2))));
                FUN_0c187798(0x0, ((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532560))) + 0x28));
                *(float *)(((int)stk + 0)) = ((*(float *)(((int)stk + 0))) * 3.0f);
                FUN_0c0582de(((int)stk + 0));
                FUN_0c13b08c((*(signed char *)((a4 + 0x1))), ((int)stk + 0), (a4 + 0x34), (*(signed char *)((a4 + 0x2))));
            }
            t36 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t36 + 0x1);
            t86 = (short)(t36 + 0x1);
            if ((int)(short)(t36 + 0x1) > (int)0x14) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t86 = 0x14;
            }
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        FUN_0c13b632((*(signed char *)((a4 + 0x1))), (a4 + 0x28), (a4 + 0x34), 0x2);
        if ((*(short *)((a4 + 0x1C))) == 0) {
            t52 = *(short *)((a4 + 0x1C));
            t53 = ((~(((~t52) + 0x1) & 0x3)) + 0x1);
            if ((int)t52 >= 0) {
                t53 = (t52 & 0x3);
            }
            if (t53 == 0) {
                FUN_0c13b35e((*(signed char *)((a4 + 0x1))), (a4 + 0x28), (a4 + 0x34), 0x2);
            }
        }
        if ((*(short *)((a4 + 0x1C))) == 4) {
            FUN_0c187798(0x0, ((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532560))) + 0x28));
            *(float *)(((int)stk + 0)) = ((*(float *)(((int)stk + 0))) * 3.0f);
            FUN_0c0582de(((int)stk + 0));
            FUN_0c13b08c((*(signed char *)((a4 + 0x1))), ((int)stk + 0), (a4 + 0x34), (*(signed char *)((a4 + 0x2))));
            FUN_0c187798(0x0, ((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532560))) + 0x28));
            *(float *)(((int)stk + 0)) = ((*(float *)(((int)stk + 0))) * 3.0f);
            FUN_0c0582de(((int)stk + 0));
            FUN_0c13b08c((*(signed char *)((a4 + 0x1))), ((int)stk + 0), (a4 + 0x34), (*(signed char *)((a4 + 0x2))));
        }
        t81 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t81 + 0x1);
        t86 = (short)(t81 + 0x1);
        if ((int)(short)(t81 + 0x1) > (int)0x14) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t86 = 0x14;
        }
    }
    return t86;
}


int FUN_0c071e40(int a4)
{
    int stk[6];
    register int t0;
    register int t11;
    register int t13;
    register int t26;

    t0 = FUN_0c064f80(a4);
    if (t0 != 0) {
        *(int *)((int)stk + 8) = 0xB2;
        *(int *)((int)stk + 4) = 0x3;
        *(int *)((int)stk + 0) = 0xFFFFFFFF;
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0xB2, 0xFFFFFFFF, 0x3, 0xB2);
        (((struct o60_float *)(a4))->v) = 0.0f;
        (((struct o58_float *)(a4))->v) = 0.0f;
        (((struct o50_float *)(a4))->v) = 0.0f;
        (((struct o5C_float *)(a4))->v) = ((((struct o0_float *)0xC071F68)->v));
        FUN_0c07e3fc(a4, 0x6);
        t26 = 0x15;
    } else {
        if ((unsigned short)((((struct o3818_short *)(a4))->v)) != 0x39F) {
            *(int *)((int)stk + 8) = 0x9F;
            *(int *)((int)stk + 4) = 0x3;
            *(int *)((int)stk + 0) = 0xFFFFFFFF;
            FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0x9F, 0xFFFFFFFF, 0x3, 0x9F);
        }
        t11 = *(signed char *)((a4 + 0x2));
        t13 = *(signed char *)(((0x371C + a4) + 0x0));
        (((struct o3790_float *)(a4))->v) = (((((struct o40_float *)(((((((t13 << 1) + t13) << 2) << 2) << 1) + (0xC259E54 + (((((t11 << 1) + t11) << 2) << 2) << 2)))))->v)) * ((((struct oC_float *)0xC071F68)->v)));
        (((struct o4C_float *)(a4))->v) = ((math_sin_angle16((*(int *)((a4 + 0x38))))) * ((((struct o3790_float *)(a4))->v)));
        (((struct o54_float *)(a4))->v) = ((math_cos_angle16((*(int *)((a4 + 0x38))))) * ((((struct o3790_float *)(a4))->v)));
        (((struct o60_float *)(a4))->v) = 0.0f;
        (((struct o58_float *)(a4))->v) = 0.0f;
        (((struct o50_float *)(a4))->v) = ((((struct o18_float *)0xC071F68)->v));
        (((struct o5C_float *)(a4))->v) = 0.0f;
        (((struct o15_uchar *)(a4))->v) = 0x1;
        FUN_0c0cb448(a4, 0x3, 0x0, 0x0, *(int *)((int)stk + 12), *(int *)((int)stk + 12 + 4), *(int *)((int)stk + 12 + 8), *(int *)((int)stk + 12 + 12), *(int *)((int)stk + 12 + 16), *(int *)((int)stk + 12 + 20), *(int *)((int)stk + 12 + 24));
        t26 = 0x131;
    }
    *(unsigned char *)((a4 + t26)) = 0x0;
    return t26;
}

int FUN_0c13d04c(int a4, int a5, int a6, int a7)
{
    int stk[1];

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R6;
    register float F2;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    v0_0 = a4;
    *(unsigned int *)(((int)stk + 0)) = (*(int *)((v0_0 + 0x10)));
    v0_2 = *(signed char *)((v0_0 + 0x14));
    v0_1 = (v0_2);
    v0_0 = (v0_0);
    if ((v0_2 == 0)) goto L_C13D06C;
    if ((v0_1 == 1)) goto L_C13D082;
    return FUN_0c03f346(v0_0, R5, R6, a7);
    L_C13D082:;
    math_vec3_accumulate((v0_0 + 0x28), (v0_0 + 0x4C));
    math_vec3_accumulate((v0_0 + 0x4C), (v0_0 + 0x58));
    v0_1 = (((struct oC4_int *)(v0_0))->v);
    (((struct o78_uint *)(v0_1))->v) = (((((struct o78_int *)(v0_1))->v)) + 0x71C);
    v0_2 = *(signed char *)((v0_0 + 0x15));
    v0_1 = (v0_2);
    if ((v0_2 == 0)) goto L_C13D0B8;
    if (!((v0_1 == 1))) goto L_C13D112;
    v0_1 = (0x7);
    v0_2 = (0x0);
    goto L_C13D0EC;
    L_C13D112:;
    v0_2 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_2 - 1);
    v0_1 = ((short)(v0_2 - 1));
    if (((int)(short)(v0_2 - 1) > 0)) goto L_C13D138;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    v0_1 = (0x14);
    L_C13D138:;
    return v0_1;
    L_C13D0EC:;
    FUN_0c13d4ac(v0_0, 0x0, v0_2);
    v0_3 = (int)(v0_2 + 0x1) < (int)v0_1;
    v0_2 = ((v0_2 + 0x1));
    if (v0_3) goto L_C13D0EC;
    FUN_0c059e9a((*(int *)(((int)stk + 0))), 0x25, (v0_0 + 0x28));
    FUN_0c13d9e4(v0_0);
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    goto L_C13D112;
    L_C13D0B8:;
    if (((*(signed char *)((v0_0 + 0x131))) != 0)) goto L_C13D0D4;
    v0_1 = (FUN_0c064f02(v0_0)) != 0;
    if (v0_1) goto L_C13D0D4;
    if ((((((struct o50_float *)(v0_0))->v)) > 0.0f)) goto L_C13D112;
    L_C13D0D4:;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    FUN_0c13dc4c(v0_0);
    FUN_0c13df20(v0_0);
    goto L_C13D112;
    L_C13D06C:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    *(unsigned short *)((v0_0 + 0x1C)) = 0x258;
    *(unsigned short *)((v0_0 + 0x1E)) = 0x5;
    FUN_0c13e124(v0_0);
    goto L_C13D082;
}

int FUN_0c0730ca(int a4)
{
    register int t0;

    t0 = FUN_0c064f80(a4);
    if (t0 != 0) {
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0xDC, 0xFFFFFFFF, 0x3, 0xDC);
        (((struct o60_float *)(a4))->v) = 0.0f;
        (((struct o58_float *)(a4))->v) = 0.0f;
        (((struct o50_float *)(a4))->v) = 0.0f;
        (((struct o5C_float *)(a4))->v) = -2.0f;
        (((struct o22_ushort *)(a4))->v) = 0x0;
        (((struct o15_uchar *)(a4))->v) = 0x0;
    } else {
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0xDD, 0xFFFFFFFF, 0x3, 0xDD);
        (((struct o37C8_float *)(a4))->v) = ((((struct o5C_float *)(a4))->v));
        (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) / 3.0f);
        (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) / 3.0f);
        (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) / 8.0f);
        if (((((struct o5C_float *)(a4))->v)) > 1.0f) {
            (((struct o5C_float *)(a4))->v) = (((((struct o5C_float *)(a4))->v)) / 16.0f);
        } else {
            (((struct o5C_float *)(a4))->v) = -2.0f;
        }
        *(unsigned short *)((a4 + 0x1C)) = 0x0;
        (((struct o22_ushort *)(a4))->v) = 0x0;
        (((struct o15_uchar *)(a4))->v) = 0x1;
    }
    return 0x15;
}

int FUN_0c075952(int a4)
{
    register int t0;
    register int t1;
    register float u4;

    t0 = FUN_0c075328(a4);
    if ((signed char)t0 == 0) {
        t1 = FUN_0c0752a8(a4);
        if (t1 != 1) {
            if (t1 != 2) {
                FUN_0c037bf6(a4);
                math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
                return math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
            }
            return FUN_0c07a6aa(a4);
        }
        u4 = (((struct o0_float *)0xC075AD4)->v);
        (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) * u4);
        (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) * u4);
        (((struct o50_float *)(a4))->v) = ((((struct o4_float *)0xC075AD4)->v));
        (((struct o5C_float *)(a4))->v) = ((((struct o8_float *)0xC075AD4)->v));
        FUN_0c05253c(0x3, 0x1, 0x14, 0xA, 0x14, 0x0);
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x4, 0x2E, 0xFFFFFFFF, 0x4, 0x2E);
        FUN_0c07db58(a4);
        FUN_0c08e382(a4);
        if ((*(signed char *)((a4 + 0x135))) != 2) {
            FUN_0c150be8((a4 + 0x28), (*(int *)((a4 + 0x38))));
        }
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        return 0x16;
    }
    return (signed char)t0;
}
