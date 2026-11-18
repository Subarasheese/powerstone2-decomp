/* game/effect: functions 0C13E90C-0C140EE0, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1B_uchar { char p[0x1B]; unsigned char v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o404_int { char p[0x404]; int v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB0_float { char p[0xB0]; float v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oD4_int { char p[0xD4]; int v; };
int FUN_0c037320(int, int);
int FUN_0c037498(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c0582de(int, int);
int FUN_0c059e60(int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
extern int FUN_0c07d1fc();
int FUN_0c07e2f4(int, int);
float math_cos_angle16(int);
int FUN_0c179ac0(void);
float math_sin_angle16(int);
int nlCalcPoint(int, int);
int nlRotateAY(int);
int nlUnitMatrix(void);
int math_vec3_accumulate(int, int);
int FUN_0c187798(int);
int FUN_0c13e90c(int a4, int a5);
int FUN_0c13edee(int a4, int a5, int a6, int a7);
int FUN_0c13f118(int a4);
int FUN_0c13f212(int a4);
int FUN_0c13f25a(int a4, int a5, int a6, int a7);
int FUN_0c13f4a0(int a4, int a5, int a6, int a7);
int FUN_0c13f696(int a4, int a5, int a6, int a7);
int FUN_0c13f7e4(int a4);
int FUN_0c1401aa(int a4, int a5, int a6, int a7);
int FUN_0c140cc0(int a4, int a5, int a6, int a7);


int FUN_0c13edee(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0x3C;
        t0 = (int)((int)(FUN_0c179ac0()) % (int)0x14);
        t1 = *(int *)((a4 + 0x38));
        t2 = (t0 + 0x5);
        if ((int)(t0 + 0x5) > (int)0x14) {
            t2 = 0x14;
        }
        (((struct o4C_float *)(a4))->v) = ((math_sin_angle16(t1)) * (float)t2);
        (((struct o54_float *)(a4))->v) = ((math_cos_angle16((*(int *)((a4 + 0x38))))) * (float)t2);
        (((struct o50_float *)(a4))->v) = ((float)t2 + (*(float *)0xC13EF8C));
        (((struct o5C_float *)(a4))->v) = -1.0f;
    }
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    t1 = (short)(t0 - 1);
    if ((int)(short)(t0 - 1) <= 0) {
        (((struct o14_uchar *)(a4))->v) = 0x63;
        t1 = 0x14;
    }
    return t1;
}

int FUN_0c13f118(int a4)
{
    register int t0;
    register int t3;

    t0 = FUN_0c03f444(0x5, 0x0, 0x1);
    t3 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        t3 = *(signed char *)((a4 + 0x2));
        *(unsigned char *)((t0 + 0x2)) = t3;
        *(unsigned int *)((t0 + 0x4)) = 0xC13EF5A;
        *(unsigned int *)((t0 + 0x10)) = a4;
    }
    return t3;
}

int FUN_0c13f212(int a4)
{
    register int t0;

    t0 = (((struct o20_short *)(a4))->v);
    (((struct o20_ushort *)(a4))->v) = (t0 - 1);
    if ((int)(short)(t0 - 1) < 0) {
        (((struct o20_ushort *)(a4))->v) = 0x4;
        t0 = (((struct o22_short *)(a4))->v);
        (((struct o22_ushort *)(a4))->v) = (t0 + 0x1);
        if ((int)(short)(t0 + 0x1) > (int)0x5) {
            (((struct o22_ushort *)(a4))->v) = 0x0;
        }
        return FUN_0c037498(((((struct oC4_int *)(a4))->v)), ((((struct o22_short *)(a4))->v)), 0x4, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
    }
    return 0x20;
}

int FUN_0c13f25a(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = *(int *)((a4 + 0x10));
    if ((*(signed char *)((t0 + 0x3715))) != (*(short *)((a4 + 0x1E)))) {
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    t1 = *(signed char *)((a4 + 0x14));
    if (t1 != 0) {
        if (t1 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0xA;
    }
    if ((*(signed char *)((a4 + 0x15))) == 0) {
        if ((*(signed char *)((t0 + 0x17))) != 0) {
            *(unsigned short *)((a4 + 0x1C)) = 0x0;
        }
        t1 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
        if ((int)(short)(t1 - 1) <= 0) {
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            (((struct o12A_ushort *)(a4))->v) = 0x0;
        } else {
            (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + 0.0199999996f);
            (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) + 20.0f);
            (((struct o2C_float *)(a4))->v) = 0.0f;
            (((struct o28_float *)(a4))->v) = 0.0f;
            (((struct o30_float *)(a4))->v) = ((((struct o54_float *)(a4))->v));
            FUN_0c0582de((a4 + 0x28), (((((struct oD4_int *)(t0))->v)) + 0x28));
        }
    } else {
        (((struct oB4_float *)(a4))->v) = (((((struct oB4_float *)(a4))->v)) - 0.100000001f);
        u0 = (((struct oB4_float *)(a4))->v);
        (((struct oBC_float *)(a4))->v) = u0;
        (((struct oB8_float *)(a4))->v) = u0;
        if (!(((((struct oB4_float *)(a4))->v)) > 0.0f)) {
            (((struct oBC_float *)(a4))->v) = 0.0f;
            (((struct oB8_float *)(a4))->v) = 0.0f;
            (((struct oB4_float *)(a4))->v) = 0.0f;
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        }
    }
    return FUN_0c13f212(a4);
}

int FUN_0c13f4a0(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 == 3) {
                    return FUN_0c03f346(a4, 0xA, a6, a7);
                }
                return t0;
            }
            t0 = (((struct oC4_int *)(a4))->v);
            u0 = (((struct o8C_float *)(t0))->v);
            (((struct o8C_float *)(t0))->v) = (u0 + 0.0500000007f);
            (((struct o88_float *)(t0))->v) = (u0 + 0.0500000007f);
            (((struct o84_float *)(t0))->v) = (u0 + 0.0500000007f);
            t0 = (((struct oC4_int *)(a4))->v);
            u0 = (((struct o20_float *)(t0))->v);
            (((struct o20_float *)(t0))->v) = (u0 - 0.100000001f);
            (((struct o1C_float *)(t0))->v) = (u0 - 0.100000001f);
            (((struct o18_float *)(t0))->v) = (u0 - 0.100000001f);
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
            t1 = (short)(t0 - 1);
            if ((short)(t0 - 1) == 0) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t1 = 0x14;
            }
            return t1;
        }
    } else {
        *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x1F;
        (((struct o84_float *)(((((struct oC4_int *)(a4))->v))))->v) = 0.0f;
        (((struct o88_float *)(((((struct oC4_int *)(a4))->v))))->v) = 0.0f;
        (((struct o8C_float *)(((((struct oC4_int *)(a4))->v))))->v) = 0.0f;
        *(unsigned short *)((a4 + 0x1C)) = 0xA;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    t0 = (((struct oC4_int *)(a4))->v);
    u0 = (((struct o8C_float *)(t0))->v);
    (((struct o8C_float *)(t0))->v) = (u0 + 0.0500000007f);
    (((struct o88_float *)(t0))->v) = (u0 + 0.0500000007f);
    (((struct o84_float *)(t0))->v) = (u0 + 0.0500000007f);
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    t1 = (short)(t0 - 1);
    if ((short)(t0 - 1) == 0) {
        *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x21F;
        (((struct o18_float *)(((((struct oC4_int *)(a4))->v))))->v) = 1.0f;
        (((struct o1C_float *)(((((struct oC4_int *)(a4))->v))))->v) = 1.0f;
        (((struct o20_float *)(((((struct oC4_int *)(a4))->v))))->v) = 1.0f;
        *(unsigned short *)((a4 + 0x1C)) = 0xA;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t1 = 0x14;
    }
    return t1;
}

int FUN_0c13f696(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register float u0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if ((t0 != 2) && (t0 != 3)) {
                return t0;
            }
            return FUN_0c03f346(a4, a5, a6, a7);
        }
    } else {
        (((struct o40_float *)(a4))->v) = 0.0f;
        (((struct o44_float *)(a4))->v) = 0.0f;
        (((struct o48_float *)(a4))->v) = 0.0f;
        *(unsigned short *)((a4 + 0x1C)) = 0xA;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    u0 = (((struct o48_float *)(a4))->v);
    (((struct o48_float *)(a4))->v) = (u0 + 0.100000001f);
    (((struct o44_float *)(a4))->v) = (u0 + 0.100000001f);
    (((struct o40_float *)(a4))->v) = (u0 + 0.100000001f);
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    t1 = (short)(t0 - 1);
    if ((short)(t0 - 1) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t1 = 0x14;
    }
    return t1;
}

int FUN_0c13f7e4(int a4)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    return FUN_0c03f346(a4, 0x0, 0x1, 0x6);
                }
                (((struct oB4_float *)(a4))->v) = (((((struct oB4_float *)(a4))->v)) - 0.166666672f);
                (((struct oB8_float *)(a4))->v) = (((((struct oB8_float *)(a4))->v)) - 0.166666672f);
                (((struct oBC_float *)(a4))->v) = (((((struct oBC_float *)(a4))->v)) - 0.166666672f);
                t0 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
                t1 = (short)(t0 - 1);
                if ((short)(t0 - 1) == 0) {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    t1 = 0x14;
                }
                return t1;
            }
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
            t1 = (short)(t0 - 1);
            if ((short)(t0 - 1) == 0) {
                *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x0;
                *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x0;
                *(unsigned char *)((((((struct oCC_int *)(a4))->v)) + 0x0)) = 0x1;
                *(unsigned short *)((a4 + 0x1C)) = 0x6;
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t1 = 0x14;
            }
            return t1;
        }
    } else {
        (((struct oB4_float *)(a4))->v) = 0.0f;
        (((struct oB8_float *)(a4))->v) = 0.0f;
        (((struct oBC_float *)(a4))->v) = 0.0f;
        *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
        *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x0;
        *(unsigned char *)((((((struct oCC_int *)(a4))->v)) + 0x0)) = 0x0;
        *(unsigned short *)((a4 + 0x1C)) = 0x6;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    (((struct oB4_float *)(a4))->v) = (((((struct oB4_float *)(a4))->v)) + 0.166666672f);
    (((struct oB8_float *)(a4))->v) = (((((struct oB8_float *)(a4))->v)) + 0.166666672f);
    (((struct oBC_float *)(a4))->v) = (((((struct oBC_float *)(a4))->v)) + 0.166666672f);
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    t1 = (short)(t0 - 1);
    if ((short)(t0 - 1) == 0) {
        *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x0;
        *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x1;
        *(unsigned char *)((((((struct oCC_int *)(a4))->v)) + 0x0)) = 0x0;
        *(unsigned short *)((a4 + 0x1C)) = 0x6;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t1 = 0x14;
    }
    return t1;
}

int FUN_0c1401aa(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    return t0;
                }
                return FUN_0c03f346(a4, 0xA, a6, a7);
            }
            t0 = (((struct oC4_int *)(a4))->v);
            u0 = (((struct o8C_float *)(t0))->v);
            (((struct o8C_float *)(t0))->v) = (u0 + 0.0500000007f);
            (((struct o88_float *)(t0))->v) = (u0 + 0.0500000007f);
            (((struct o84_float *)(t0))->v) = (u0 + 0.0500000007f);
            t0 = (((struct oC4_int *)(a4))->v);
            u0 = (((struct o20_float *)(t0))->v);
            (((struct o20_float *)(t0))->v) = (u0 - 0.100000001f);
            (((struct o1C_float *)(t0))->v) = (u0 - 0.100000001f);
            (((struct o18_float *)(t0))->v) = (u0 - 0.100000001f);
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
            t1 = (short)(t0 - 1);
            if ((short)(t0 - 1) == 0) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t1 = 0x14;
            }
            return t1;
        }
    } else {
        *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x1F;
        (((struct o84_float *)(((((struct oC4_int *)(a4))->v))))->v) = 0.0f;
        (((struct o88_float *)(((((struct oC4_int *)(a4))->v))))->v) = 0.0f;
        (((struct o8C_float *)(((((struct oC4_int *)(a4))->v))))->v) = 0.0f;
        *(unsigned short *)((a4 + 0x1C)) = 0xA;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    t0 = (((struct oC4_int *)(a4))->v);
    u0 = (((struct o8C_float *)(t0))->v);
    (((struct o8C_float *)(t0))->v) = (u0 + 0.0500000007f);
    (((struct o88_float *)(t0))->v) = (u0 + 0.0500000007f);
    (((struct o84_float *)(t0))->v) = (u0 + 0.0500000007f);
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    t1 = (short)(t0 - 1);
    if ((short)(t0 - 1) == 0) {
        *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x21F;
        (((struct o18_float *)(((((struct oC4_int *)(a4))->v))))->v) = 1.0f;
        (((struct o1C_float *)(((((struct oC4_int *)(a4))->v))))->v) = 1.0f;
        (((struct o20_float *)(((((struct oC4_int *)(a4))->v))))->v) = 1.0f;
        *(unsigned short *)((a4 + 0x1C)) = 0xA;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t1 = 0x14;
    }
    return t1;
}

int FUN_0c140cc0(int a4, int a5, int a6, int a7)
{

    register int R1;
    register int R2;
    register int R3;
    register int R12;
    register int R13;
    register float F0;
    register float F2;
    register float F3;
    register float F4;
    register float F12;
    register float F15;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register float w0_0;
    v0_0 = a4;
    v0_1 = a5;
    v0_3 = R13;
    v0_4 = R12;
    v0_2 = *(signed char *)((v0_0 + 0x14));
    v0_3 = (v0_2);
    v0_0 = (v0_0);
    if ((v0_2 == 0)) goto L_C140CEE;
    if ((v0_3 == 1)) goto L_C140D66;
    if ((v0_3 != 2)) goto L_C140CE2;
    (((struct oB0_float *)(v0_0))->v) = (((((struct oB0_float *)(v0_0))->v)) - 0.100000001f);
    v0_1 = (((struct oC8_int *)(v0_0))->v);
    w0_0 = (((struct o8C_float *)(v0_1))->v);
    (((struct o8C_float *)(v0_1))->v) = (w0_0 + 0.100000001f);
    (((struct o88_float *)(v0_1))->v) = (w0_0 + 0.100000001f);
    (((struct o84_float *)(v0_1))->v) = (w0_0 + 0.100000001f);
    v0_1 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_1 - 1);
    v0_3 = ((short)(v0_1 - 1));
    if (((short)(v0_1 - 1) != 0)) goto L_C140ED2;
    L_C140EB6:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    v0_3 = (0x14);
    L_C140ED2:;
    return v0_3;
    L_C140CE2:;
    if ((v0_3 != 3)) goto L_C140CEA;
    return FUN_0c03f346(v0_0, v0_1, a6, a7);
    L_C140CEA:;
    goto L_C140ED2;
    L_C140D66:;
    v0_2 = (*(signed char *)((v0_0 + 0x131))) == 0;
    v0_3 = (0x131);
    F15 = (1.0f);
    if (v0_2) goto L_C140DF8;
    *(unsigned char *)((v0_0 + v0_3)) = 0x0;
    v0_1 = (((int (*)(int, int))(FUN_0c07d1fc))(v0_0, v0_1)) == 0;
    if (v0_1) goto L_C140DF8;
    (((struct o28_float *)(v0_0))->v) = (((((struct o28_float *)(v0_0))->v)) - ((((struct o4C_float *)(v0_0))->v)));
    (((struct o2C_float *)(v0_0))->v) = (((((struct o2C_float *)(v0_0))->v)) + ((((struct o50_float *)(v0_0))->v)));
    (((struct o30_float *)(v0_0))->v) = (((((struct o30_float *)(v0_0))->v)) - ((((struct o54_float *)(v0_0))->v)));
    (((struct oAC_ushort *)(v0_0))->v) = 0x40F;
    (((struct oB0_float *)(v0_0))->v) = F15;
    *(unsigned short *)((((((struct oC8_int *)(v0_0))->v)) + 0x6)) = 0x1F;
    v0_1 = (((struct oC8_int *)(v0_0))->v);
    (((struct o8C_float *)(v0_1))->v) = F15;
    (((struct o88_float *)(v0_1))->v) = F15;
    (((struct o84_float *)(v0_1))->v) = F15;
    FUN_0c059e60((*(int *)((v0_0 + 0x10))), 0x25);
    L_C140E58:;
    *(unsigned short *)((v0_0 + 0x1C)) = 0xA;
    goto L_C140EB6;
    L_C140DF8:;
    v0_1 = ((((struct o404_int *)(v0_0))->v)) != 0;
    if (v0_1) goto L_C140E0C;
    v0_1 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_1 - 1);
    if (!(((short)(v0_1 - 1) != 0))) goto L_C140E0C;
    (((struct o28_float *)(v0_0))->v) = (((((struct o28_float *)(v0_0))->v)) + ((((struct o4C_float *)(v0_0))->v)));
    (((struct o2C_float *)(v0_0))->v) = (((((struct o2C_float *)(v0_0))->v)) - ((((struct o50_float *)(v0_0))->v)));
    (((struct o30_float *)(v0_0))->v) = (((((struct o30_float *)(v0_0))->v)) + ((((struct o54_float *)(v0_0))->v)));
    v0_3 = (0x30);
    goto L_C140ED2;
    L_C140E0C:;
    (((struct o28_float *)(v0_0))->v) = (((((struct o28_float *)(v0_0))->v)) - ((((struct o4C_float *)(v0_0))->v)));
    (((struct o2C_float *)(v0_0))->v) = (((((struct o2C_float *)(v0_0))->v)) + ((((struct o50_float *)(v0_0))->v)));
    (((struct o30_float *)(v0_0))->v) = (((((struct o30_float *)(v0_0))->v)) - ((((struct o54_float *)(v0_0))->v)));
    (((struct oAC_ushort *)(v0_0))->v) = 0x40F;
    (((struct oB0_float *)(v0_0))->v) = F15;
    *(unsigned short *)((((((struct oC8_int *)(v0_0))->v)) + 0x6)) = 0x1F;
    v0_1 = (((struct oC8_int *)(v0_0))->v);
    (((struct o8C_float *)(v0_1))->v) = F15;
    (((struct o88_float *)(v0_1))->v) = F15;
    (((struct o84_float *)(v0_1))->v) = F15;
    goto L_C140E58;
    L_C140CEE:;
    *(unsigned short *)((((((struct oC4_int *)(v0_0))->v)) + 0x6)) = 0xF;
    *(unsigned short *)((((((struct oC8_int *)(v0_0))->v)) + 0x6)) = 0xF;
    w0_0 = math_sin_angle16(((-(*(int *)((v0_0 + 0x34)))) + 0x14000));
    w0_0 = (w0_0 * (math_cos_angle16(((-(*(int *)((v0_0 + 0x38)))) + 0x14000))));
    (((struct o4C_float *)(v0_0))->v) = (w0_0 * 20.0f);
    (((struct o50_float *)(v0_0))->v) = ((math_cos_angle16(((-(*(int *)((v0_0 + 0x34)))) + 0x14000))) * 20.0f);
    w0_0 = math_sin_angle16(((-(*(int *)((v0_0 + 0x34)))) + 0x14000));
    w0_0 = (w0_0 * (math_sin_angle16(((-(*(int *)((v0_0 + 0x38)))) + 0x14000))));
    (((struct o54_float *)(v0_0))->v) = (w0_0 * 20.0f);
    FUN_0c059e60((*(int *)((v0_0 + 0x10))), 0x24);
    *(unsigned short *)((v0_0 + 0x1C)) = 0x3C;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    goto L_C140D66;
}
