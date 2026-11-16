/* Straight-line functions with calls and guards (batch gen_iq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o3818_short { char p[0x3818]; short v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c045392(void);
int FUN_0c045a38(void);
int FUN_0c045fe0(void);
int FUN_0c04a556(void);
int FUN_0c04a99c(void);
int FUN_0c04d76c(void);
int FUN_0c05bc9a(void);
int FUN_0c05bd22(void);
int FUN_0c05bf24(void);
int FUN_0c05c084(void);
int FUN_0c09654c(int);
int FUN_0c096650(int);
int FUN_0c0966f6(int);
int FUN_0c0b825e(int);
int FUN_0c0b8370(int);
int FUN_0c0b8416(int);
int FUN_0c0cff96(int, int);
int FUN_0c187798(int, int, int);
int FUN_0c187b48(int, int, int);
int game_mode_handler_6(void);
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c042218(void);
int FUN_0c05c774(void);
int FUN_0c096718(int a4);
int FUN_0c0b8438(int a4);
int FUN_0c124c04(int a4, int a5, int a6, int a7);
int FUN_0c15eb24(int a4, int a5, int a6, int a7, float f4);
int FUN_0c05b978(void);
int FUN_0c12825a(int a4, int a5, int a6, int a7);
int FUN_0c043bf6(int a4, int a5, int a6, int a7);

int FUN_0c042218(void)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t8;
    register int t86;
    int t9;
    register int t10;
    register int t24;
    register int t25;
    register int t29;
    register int t11;

    t0 = *(int *)0xC542A10;
    t1 = *(signed char *)0xC542B8C;
    t2 = *(signed char *)0xC542B8A;
    t3 = *(signed char *)0xC542B8B;
    t4 = 0x0;
    t5 = 0x0;
    for (;;) {
        t8 = (((int)0x1 << (int)t4) & t0) != 0;
        t4 = (t4 + 0x1);
        if (t8) {
            t5 = (t5 + 0x1);
        }
        if ((int)t4 >= (int)0x10) {
            break;
        }
    }
    t86 = 0x1C3;
    if ((int)t5 >= (int)0xC) {
    } else {
        t9 = 0x1C3;
        t10 = 0x0;
        for (;;) {
            if ((((int)0x1 << (int)t10) & (unsigned char)(*(signed char *)0xC3BD447)) != 0) {
                t11 = 0x3938;
                t11 = (t10 * t11);
                t11 = (t11 + 0xC532498);
                t9 = (*(signed char *)((t11 + 0x2)));
                if ((t9 != 12) && (t9 != 13)) {
                    t9 = (*(signed char *)((t11 + 0x2)));
                    *(unsigned int *)0xC542A10 = ((*(int *)0xC542A10) | ((int)0x1 << (int)t9));
                }
            }
            t10 = (t10 + 0x1);
            if ((int)t10 >= (int)0x4) {
                break;
            }
        }
        t24 = 0x0;
        t25 = 0x0;
        for (;;) {
            t29 = (((int)0x1 << (int)t25) & (*(int *)0xC542A10)) != 0;
            t25 = (t25 + 0x1);
            if (t29) {
                t24 = (t24 + 0x1);
            }
            if ((int)t25 >= (int)0x10) {
                break;
            }
        }
        (((struct o2_uchar *)0xC542B8A)->v) = 0x1;
        if ((int)t24 >= (int)0x1) {
            (((struct o2_uchar *)0xC542B8A)->v) = 0x2;
        }
        if ((int)t24 >= (int)0x2) {
            (((struct o2_uchar *)0xC542B8A)->v) = 0x3;
        }
        if ((int)t24 >= (int)0x3) {
            (((struct o2_uchar *)0xC542B8A)->v) = 0x4;
        }
        if ((int)t24 >= (int)0x4) {
            (((struct o2_uchar *)0xC542B8A)->v) = 0x5;
        }
        if ((int)t24 >= (int)0x5) {
            (((struct o2_uchar *)0xC542B8A)->v) = 0x6;
        }
        if ((int)t24 >= (int)0x6) {
            (((struct o2_uchar *)0xC542B8A)->v) = 0x7;
        }
        if ((int)t24 >= (int)0x7) {
            (((struct o2_uchar *)0xC542B8A)->v) = 0x8;
        }
        if ((int)t24 >= (int)0x8) {
            (((struct o0_uchar *)0xC542B8A)->v) = 0x1;
        }
        if ((int)t24 >= (int)0x9) {
            (((struct o0_uchar *)0xC542B8A)->v) = 0x2;
        }
        if ((int)t24 >= (int)0x7) {
            (((struct o1_uchar *)0xC542B8A)->v) = 0x1;
        }
        if ((int)t24 >= (int)0x8) {
            (((struct o1_uchar *)0xC542B8A)->v) = 0x2;
        }
        if ((int)t24 >= (int)0x9) {
            (((struct o1_uchar *)0xC542B8A)->v) = 0x3;
        }
        if ((int)t24 >= (int)0xA) {
            (((struct o1_uchar *)0xC542B8A)->v) = 0x4;
        }
        if ((int)t24 >= (int)0xB) {
            (((struct o1_uchar *)0xC542B8A)->v) = 0x5;
        }
        if ((int)t24 >= (int)0xC) {
            (((struct o1_uchar *)0xC542B8A)->v) = 0x6;
        }
        if ((int)t1 > (int)(*(signed char *)0xC542B8C)) {
            (((struct o2_uchar *)0xC542B8A)->v) = t1;
        }
        if ((int)t2 > (int)(*(signed char *)0xC542B8A)) {
            (((struct o0_uchar *)0xC542B8A)->v) = t2;
        }
        *(unsigned char *)0xC5429B2 = (*(signed char *)0xC542B8A);
        if ((int)t3 > (int)(*(signed char *)0xC542B8B)) {
            (((struct o1_uchar *)0xC542B8A)->v) = t3;
        }
        if (t0 == (*(int *)0xC542A10)) {
            if (t1 == (*(signed char *)0xC542B8C)) {
                if (t2 == (*(signed char *)0xC542B8A)) {
                    if (t3 != (*(signed char *)0xC542B8B)) {
                        *(unsigned char *)0xC54232B = 0x1;
                    }
                    t86 = 0x1C3;
                } else {
                    *(unsigned char *)0xC54232B = 0x1;
                    t86 = 0x1C2;
                }
            } else {
                *(unsigned char *)0xC54232B = 0x1;
                t86 = 0x1C4;
            }
        } else {
            *(unsigned char *)0xC54232B = 0x1;
            t86 = 0x48;
        }
    }
    return t86;
}

int FUN_0c05c774(void)
{
    int stk[52];
    register int t0;
    register int t12;
    register int t13;
    register int t18;
    register int t30;
    register int t31;
    register int t32;

    t0 = 0x0;
    for (;;) {
        *(unsigned char *)(((0xC4 + ((int)stk + 0)) + t0)) = (*(signed char *)(((0xC542267 + t0) + 0x0)));
        *(unsigned char *)((((t0 << 2) + (0x9C + ((int)stk + 0))) + 0x0)) = (*(signed char *)(((0xC542271 + (t0 << 2)) + 0x0)));
        *(unsigned char *)((((t0 << 2) + (0x9C + ((int)stk + 0))) + 0x1)) = (*(signed char *)(((0xC542271 + (t0 << 2)) + 0x1)));
        *(unsigned char *)((((t0 << 2) + (0x9C + ((int)stk + 0))) + 0x2)) = (*(signed char *)(((0xC542271 + (t0 << 2)) + 0x2)));
        *(unsigned int *)(((((int)stk + 0) + 0x74) + (t0 << 2))) = (*(int *)(((0xC54229C + (t0 << 2)) + 0x0)));
        *(unsigned char *)((((((int)stk + 0) + 0x68) + t0) + 0x0)) = (*(signed char *)(((0xC54237C + t0) + 0x0)));
        *(unsigned char *)((((((int)stk + 0) + 0x5C) + t0) + 0x0)) = (*(signed char *)(((0xC5422C4 + t0) + 0x0)));
        *(unsigned char *)((((((int)stk + 0) + 0x34) + (t0 << 2)) + 0x0)) = (*(signed char *)(((0xC5422CE + (t0 << 2)) + 0x0)));
        *(unsigned char *)((((((int)stk + 0) + 0x34) + (t0 << 2)) + 0x1)) = (*(signed char *)(((0xC5422CE + (t0 << 2)) + 0x1)));
        *(unsigned char *)((((((int)stk + 0) + 0x34) + (t0 << 2)) + 0x2)) = (*(signed char *)(((0xC5422CE + (t0 << 2)) + 0x2)));
        *(unsigned int *)(((((int)stk + 0) + 0xC) + (t0 << 2))) = (*(int *)(((0xC5422F8 + (t0 << 2)) + 0x0)));
        t12 = t0;
        t13 = (0xC542386 + t0);
        t0 = (t0 + 0x1);
        *(unsigned char *)((((int)stk + 0) + t12)) = (*(signed char *)((t13 + 0x0)));
        if ((int)t0 >= (int)0xA) {
            break;
        }
    }
    FUN_0c187b48(0xC5421F8, 0x0, 0x1A4);
    t18 = 0x0;
    for (;;) {
        *(unsigned char *)(((0xC542267 + t18) + 0x0)) = (*(signed char *)(((0xC4 + ((int)stk + 0)) + t18)));
        *(unsigned char *)(((0xC542271 + (t18 << 2)) + 0x0)) = (*(signed char *)((((t18 << 2) + (0x9C + ((int)stk + 0))) + 0x0)));
        *(unsigned char *)(((0xC542271 + (t18 << 2)) + 0x1)) = (*(signed char *)((((t18 << 2) + (0x9C + ((int)stk + 0))) + 0x1)));
        *(unsigned char *)(((0xC542271 + (t18 << 2)) + 0x2)) = (*(signed char *)((((t18 << 2) + (0x9C + ((int)stk + 0))) + 0x2)));
        *(unsigned int *)(((0xC54229C + (t18 << 2)) + 0x0)) = (*(int *)(((((int)stk + 0) + 0x74) + (t18 << 2))));
        *(unsigned char *)(((0xC54237C + t18) + 0x0)) = (*(signed char *)((((((int)stk + 0) + 0x68) + t18) + 0x0)));
        *(unsigned char *)(((0xC5422C4 + t18) + 0x0)) = (*(signed char *)((((((int)stk + 0) + 0x5C) + t18) + 0x0)));
        *(unsigned char *)(((0xC5422CE + (t18 << 2)) + 0x0)) = (*(signed char *)((((((int)stk + 0) + 0x34) + (t18 << 2)) + 0x0)));
        *(unsigned char *)(((0xC5422CE + (t18 << 2)) + 0x1)) = (*(signed char *)((((((int)stk + 0) + 0x34) + (t18 << 2)) + 0x1)));
        *(unsigned char *)(((0xC5422CE + (t18 << 2)) + 0x2)) = (*(signed char *)((((((int)stk + 0) + 0x34) + (t18 << 2)) + 0x2)));
        *(unsigned int *)(((0xC5422F8 + (t18 << 2)) + 0x0)) = (*(int *)(((((int)stk + 0) + 0xC) + (t18 << 2))));
        t30 = *(signed char *)((((int)stk + 0) + t18));
        t31 = t18;
        t32 = (0xC542386 + t18);
        t18 = (t18 + 0x1);
        *(unsigned char *)((t32 + 0x0)) = t30;
        if ((int)t18 >= (int)0xA) {
            break;
        }
    }
    return t31;
}

int FUN_0c096718(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            return FUN_0c0966f6(a4);
        }
        return FUN_0c096650(a4);
    }
    return FUN_0c09654c(a4);
}

int FUN_0c0b8438(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            return FUN_0c0b8416(a4);
        }
        return FUN_0c0b8370(a4);
    }
    return FUN_0c0b825e(a4);
}

int FUN_0c124c04(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register float u0;
    register float u1;

    t2 = *(int *)((a4 + 0x10));
    t3 = a5;
    if (((*(signed char *)((t2 + 0x3715))) == 26) && (t0 = (((struct o3818_short *)(t2))->v), (unsigned short)t0 == 0x113)) {
    } else {
        if ((int)(*(signed char *)((a4 + 0x14))) < (int)0x3) {
            (((struct o14_uchar *)(a4))->v) = 0x3;
        }
        t3 = 0x3;
    }
    *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 3) {
            if (t0 == 4) {
                (((struct oB4_float *)(a4))->v) = (((((struct oB4_float *)(a4))->v)) * 0.800000012f);
                u0 = (((struct oB4_float *)(a4))->v);
                (((struct oBC_float *)(a4))->v) = u0;
                (((struct oB8_float *)(a4))->v) = u0;
                t4 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t4 - 1);
                if ((int)(short)(t4 - 1) <= 0) {
                    return FUN_0c03f346(a4, t3, a6, a7);
                }
                return (short)(t4 - 1);
            }
            return t0;
        }
        (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x200);
        (((struct oBC_float *)(a4))->v) = 1.0f;
        (((struct oB8_float *)(a4))->v) = 1.0f;
        (((struct oB4_float *)(a4))->v) = 1.0f;
        *(unsigned short *)((a4 + 0x1C)) = 0x8;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oB4_float *)(a4))->v) = (((((struct oB4_float *)(a4))->v)) * 0.800000012f);
        u0 = (((struct oB4_float *)(a4))->v);
        (((struct oBC_float *)(a4))->v) = u0;
        (((struct oB8_float *)(a4))->v) = u0;
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        if ((int)(short)(t0 - 1) <= 0) {
            return FUN_0c03f346(a4, t3, a6, a7);
        }
        return (short)(t0 - 1);
    }
    t0 = ((int (*)(int, int, int))(FUN_0c187798))(t2, t3, a6);
    t0 = ((int (*)(int))(FUN_0c187798))(t1);
    t0 = (((struct oC4_int *)(a4))->v);
    (((struct o80_uint *)(t0))->v) = (((((struct o80_int *)(t0))->v)) + 0xAAA);
    t1 = *(short *)((a4 + 0x1E));
    u0 = math_sin_angle16((int)(((float)((t1 << 2) + t1) * 65536.0f) / 360.0f));
    u1 = 1.0f;
    u1 = u1 + 0.300000012f * u0;
    (((struct o8C_float *)(t0))->v) = u1;
    t0 = (((struct oC8_int *)(a4))->v);
    (((struct o80_uint *)(t0))->v) = (((((struct o80_int *)(t0))->v)) - 2730);
    t1 = *(short *)((a4 + 0x1E));
    u0 = math_sin_angle16((int)(((float)(((t1 << 2) + t1) + 0x1E) * 65536.0f) / 360.0f));
    u1 = 1.0f;
    u1 = u1 + 0.300000012f * u0;
    (((struct o8C_float *)(t0))->v) = u1;
    t0 = (((struct oCC_int *)(a4))->v);
    (((struct o80_uint *)(t0))->v) = (((((struct o80_int *)(t0))->v)) + 0xE38);
    if (1.5f > ((((struct o8C_float *)(t0))->v))) {
        (((struct o8C_float *)(t0))->v) = (((((struct o8C_float *)(t0))->v)) * 1.02999997f);
    }
    return 0x8C;
}

int FUN_0c15eb24(int a4, int a5, int a6, int a7, float f4)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o15_uchar *)(a4))->v) = 0x0;
        (((struct oA8_uchar *)(a4))->v) = 0x1;
    }
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    t1 = t0;
                    if (t0 != 4) {
                    } else {
                        (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) - 0.000312499993f);
                        t0 = 0x40;
                        if (!(((((struct o40_float *)(a4))->v)) > 0.0f)) {
                            *(unsigned short *)((a4 + 0x1C)) = ((*(short *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC2038D0) + 0x8))) + 0x186);
                            t2 = *(signed char *)((a4 + 0x2));
                            (((struct o20_ushort *)(a4))->v) = (*(int *)(((0xC2038D0 + ((short)t2 * (short)0x1C)) + 0xC)));
                            FUN_0c187798((0xC2038D0 + ((short)t2 * (short)0x1C)), a5, a6);
                            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                            t0 = 0x14;
                        }
                        t1 = t0;
                    }
                    t0 = t1;
                } else {
                    t1 = (((struct o20_short *)(a4))->v);
                    (((struct o20_ushort *)(a4))->v) = (t1 - 1);
                    t2 = 0x20;
                    if ((int)(short)(t1 - 1) <= 0) {
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        t2 = 0x15;
                    }
                    t0 = t2;
                }
                t1 = t0;
            } else {
                *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
                *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
                u0 = (((float)(*(short *)((a4 + 0x1C))) / 60.0f) * (math_sin_angle16(((*(short *)((a4 + 0x1E))) << 13))));
                (((struct o40_float *)(a4))->v) = ((((u0 * 0.200000003f)) + 1.0f) / 320.0f);
                t0 = *(short *)((a4 + 0x1C));
                t2 = t0;
                if ((int)t0 > 0) {
                } else {
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    t2 = 0x15;
                }
                t1 = t2;
            }
            t0 = t1;
        } else {
            *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
            u0 = math_sin_angle16((int)(((float)(*(short *)((a4 + 0x1C))) / 20.0f) * 16384.0f));
            (((struct o40_float *)(a4))->v) = ((1.0f - ((u0 * 1.0f))) / 320.0f);
            t1 = *(short *)((a4 + 0x1C));
            t2 = t1;
            if ((int)t1 <= 0) {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                *(unsigned short *)((a4 + 0x1C)) = 0x3C;
                *(unsigned short *)((a4 + 0x1E)) = 0x0;
                t2 = 0x0;
            }
            t0 = t2;
        }
        t1 = t0;
    } else {
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        t2 = (short)(t0 - 1);
        if ((int)(short)(t0 - 1) > 0) {
        } else {
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            *(unsigned short *)((a4 + 0x1C)) = 0x14;
            (((struct o44_float *)(a4))->v) = 0.00312500005f;
            t2 = 0x44;
        }
        t1 = t2;
    }
    return t1;
}


int FUN_0c12825a(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                t1 = (((struct oC4_int *)(a4))->v);
                (((struct o8C_float *)(t1))->v) = (((((struct o8C_float *)(t1))->v)) - 0.0250000004f);
                if (!(0.0f > ((((struct o8C_float *)(((((struct oC4_int *)(a4))->v))))->v)))) {
                    t1 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
                    t2 = (short)(t1 - 1);
                    if ((short)(t1 - 1) == 0) {
                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                        t2 = 0x14;
                    }
                    t1 = t2;
                } else {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    t1 = 0x14;
                }
                return t1;
            }
            if (t0 == 3) {
                return FUN_0c03f346(a4, a5, a6, a7);
            }
            if (t0 == 4) {
                return FUN_0c03f346(a4, a5, a6, a7);
            }
            return t0;
        }
    } else {
        u0 = math_sin_angle16(((-(*(int *)((a4 + 0x34)))) + 0x14000));
        u1 = (u0 * (math_cos_angle16(((-(*(int *)((a4 + 0x38)))) + 0x14000))));
        (((struct o4C_float *)(a4))->v) = (u1 * 50.0f);
        (((struct o50_float *)(a4))->v) = ((math_cos_angle16(((-(*(int *)((a4 + 0x34)))) + 0x14000))) * 50.0f);
        u0 = math_sin_angle16(((-(*(int *)((a4 + 0x34)))) + 0x14000));
        u1 = (u0 * (math_sin_angle16(((-(*(int *)((a4 + 0x38)))) + 0x14000))));
        (((struct o54_float *)(a4))->v) = (u1 * 50.0f);
        *(unsigned short *)((a4 + 0x1C)) = 0x3C;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    if ((*(signed char *)((0x14 + (*(int *)((a4 + 0x10)))))) != 2) {
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        if ((short)(t0 - 1) == 0) {
            (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) - ((((struct o4C_float *)(a4))->v)));
            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
            (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) - ((((struct o54_float *)(a4))->v)));
            t0 = (((struct oC4_int *)(a4))->v);
            (((struct o8C_float *)(t0))->v) = (((((struct o8C_float *)(t0))->v)) - 0.0250000004f);
            *(unsigned short *)((a4 + 0x1C)) = 0x3C;
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t0 = 0x14;
        } else {
            (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) - ((((struct o50_float *)(a4))->v)));
            (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o54_float *)(a4))->v)));
            t1 = (((struct oC4_int *)(a4))->v);
            (((struct o8C_float *)(t1))->v) = (((((struct o8C_float *)(t1))->v)) + 0.0250000004f);
            t0 = 0x8C;
        }
        t1 = t0;
    } else {
        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) - ((((struct o4C_float *)(a4))->v)));
        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
        (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) - ((((struct o54_float *)(a4))->v)));
        t0 = (((struct oC4_int *)(a4))->v);
        (((struct o8C_float *)(t0))->v) = (((((struct o8C_float *)(t0))->v)) - 0.0250000004f);
        *(unsigned short *)((a4 + 0x1C)) = 0x3C;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t1 = 0x14;
    }
    return t1;
}

int FUN_0c043bf6(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        t1 = (short)(t0 - 1);
        if ((short)(t0 - 1) == 0) {
            *(unsigned short *)((a4 + 0x1C)) = 0x8;
            t0 = *(short *)((a4 + 0x1E));
            if (t0 != 0) {
                if (t0 != 1) {
                    if (t0 != 2) {
                        t2 = t0;
                        if (t0 != 3) {
                        } else {
                            *(unsigned short *)((a4 + 0x1E)) = 0x0;
                            t2 = (FUN_0c0cff96((*(int *)((((((struct oCC_int *)(a4))->v)) + 0x8))), 0xC2403FC));
                        }
                        t0 = t2;
                    } else {
                        *(unsigned short *)((a4 + 0x1E)) = 0x3;
                        t0 = (FUN_0c0cff96((*(int *)((((((struct oCC_int *)(a4))->v)) + 0x8))), 0xC2403E4));
                    }
                    t2 = t0;
                } else {
                    *(unsigned short *)((a4 + 0x1E)) = 0x2;
                    t2 = (FUN_0c0cff96((*(int *)((((((struct oCC_int *)(a4))->v)) + 0x8))), 0xC2403CC));
                }
                t0 = t2;
            } else {
                *(unsigned short *)((a4 + 0x1E)) = 0x1;
                t0 = (FUN_0c0cff96((*(int *)((((((struct oCC_int *)(a4))->v)) + 0x8))), 0xC2403B4));
            }
            t1 = t0;
        }
        return t1;
    }
    *(unsigned int *)(((0xC40DD14 + ((*(signed char *)((a4 + 0x2))) << 2)) + 0x0)) = a4;
    t0 = FUN_0c037320((((*(signed char *)((a4 + 0x2))) << 1) + 0x57), (*(int *)0xC4B410C));
    t1 = FUN_0c03f444(0x5, 0x0, t0);
    if (t1 != 0) {
        *(unsigned char *)((t1 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t1 + 0x4)) = 0xC04378C;
        *(unsigned int *)((t1 + 0x10)) = a4;
        *(unsigned char *)((t1 + 0x2)) = (*(signed char *)((a4 + 0x2)));
        FUN_0c03733c(t1, (((*(signed char *)((a4 + 0x2))) << 1) + 0x57), (*(int *)0xC4B410C));
    }
    t0 = FUN_0c037320((((*(signed char *)((a4 + 0x2))) << 1) + 0x58), (*(int *)0xC4B410C));
    t1 = FUN_0c03f444(0x5, 0x0, t0);
    if (t1 != 0) {
        *(unsigned char *)((t1 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t1 + 0x4)) = 0xC04387A;
        *(unsigned int *)((t1 + 0x10)) = a4;
        *(unsigned char *)((t1 + 0x2)) = (*(signed char *)((a4 + 0x2)));
        FUN_0c03733c(t1, (((*(signed char *)((a4 + 0x2))) << 1) + 0x58), (*(int *)0xC4B410C));
    }
    t0 = FUN_0c037320(0x41, (*(int *)0xC4B40CC));
    t1 = FUN_0c03f444(0x5, 0x0, t0);
    if (t1 != 0) {
        *(unsigned char *)((t1 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t1 + 0x4)) = 0xC043AE4;
        *(unsigned int *)((t1 + 0x10)) = a4;
        *(unsigned char *)((t1 + 0x2)) = (*(signed char *)((a4 + 0x2)));
        FUN_0c03733c(t1, 0x41, (*(int *)0xC4B40CC));
    }
    *(unsigned short *)((a4 + 0x1C)) = 0x8;
    *(unsigned short *)((a4 + 0x1E)) = 0x0;
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    return 0x14;
}
