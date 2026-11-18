/* game/effect: functions 0C133748-0C135982, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12C_ushort { char p[0x12C]; unsigned short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o18_uchar { char p[0x18]; unsigned char v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o41C_uchar { char p[0x41C]; unsigned char v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o78_int { char p[0x78]; int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB0_float { char p[0xB0]; float v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c037498(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int thunk_FUN_0c058310(int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c07d774(int);
int FUN_0c07e2f4(int, int);
int FUN_0c133f70(int);
int FUN_0c134036(int);
int FUN_0c134d80(int, int, int, int);
float math_cos_angle16(int);
int FUN_0c179ac0(void);
float math_sin_angle16(int);
float math_tan_angle16(int);
int FUN_0c187798(void);
int FUN_0c133748(int a4, int a5, int a6);
int fx29_spawn_burst8(int a4, int a5);
int FUN_0c1338f6(int a4);
int FUN_0c133952(int a4, int a5, int a6, int a7);
int FUN_0c133aec(int a4);
int FUN_0c133c0e(int a4);
int FUN_0c133c78(int a4, int a5);
int FUN_0c133d44(int a4);
int FUN_0c133d90(int a4);
int FUN_0c133e80(int a4);
int FUN_0c1341de(int a4);
int FUN_0c134216(int a4);
int FUN_0c134274(int a4);
int FUN_0c13428a(int a4);
int FUN_0c1342b8(int a4);
int FUN_0c134c9c(int a4, float f4);
int FUN_0c134ea2(int a4);
int FUN_0c134f5a(int a4, int a5, int a6, int a7);
int FUN_0c135024(int a4, int a5, int a6, int a7);
int FUN_0c1350d4(int a4, int a5);
int FUN_0c1353a4(int a4, int a5, int a6, int a7);
int FUN_0c1354a6(int a4);
int FUN_0c1354f8(int a4, int a5, int a6, int a7, float f4);
int FUN_0c1357ee(int a4, int a5, int a6, int a7);
int FUN_0c1358c2(int a4);


int fx29_spawn_burst8(int a4, int a5)
{
    int stk[2];
    register int t0;
    register int t3;

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned char *)(((int)stk + 4)) = a5;
    t0 = 0x0;
    for (;;) {
        t3 = FUN_0c133748((*(int *)(((int)stk + 0))), t0, (*(signed char *)(((int)stk + 4))));
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x8) {
            break;
        }
    }
    return t3;
}

int FUN_0c1338f6(int a4)
{
    register int t0;

    t0 = *(signed char *)(((0x41C + a4) + 0x0));
    (((struct o41C_uchar *)(a4))->v) = (t0 - 1);
    if ((int)(signed char)(t0 - 1) <= 0) {
        (((struct o41C_uchar *)(a4))->v) = 0x2;
        t0 = *(signed char *)(((0x41C + a4) + 0x1));
        *(unsigned char *)(((0x41C + a4) + 0x1)) = (t0 + 0x1);
        if ((int)(signed char)(t0 + 0x1) > (int)0x5) {
            *(unsigned char *)(((0x41C + a4) + 0x1)) = 0x0;
        }
        FUN_0c037498(((((struct oC4_int *)(a4))->v)), (*(signed char *)(((0x41C + a4) + 0x1))), 0x3, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
        *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x1F;
        t0 = 0x1F;
    }
    return t0;
}

int FUN_0c133952(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    register int t2;
    register int t3;
    register float u0;

    t2 = *(signed char *)((a4 + 0x14));
    if (t2 != 0) {
        if (t2 != 1) {
            if (t2 != 2) {
                return FUN_0c03f346(a4, a5, a6, a7);
            }
            t2 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t2 - 1);
            if ((int)(short)(t2 - 1) < 0) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            }
            *(unsigned int *)((a4 + 0x38)) = (((*(int *)((a4 + 0x38))) + 0x5555) & 0xFFFF);
            t2 = (((struct oC4_int *)(a4))->v);
            (((struct o18_float *)(t2))->v) = (((((struct o18_float *)(t2))->v)) - 0.0799999982f);
            if (0.0f > ((((struct o18_float *)(((((struct oC4_int *)(a4))->v))))->v))) {
                (((struct o18_float *)(((((struct oC4_int *)(a4))->v))))->v) = 0.0f;
            }
            t2 = (((struct oC4_int *)(a4))->v);
            u0 = (((struct o18_float *)(t2))->v);
            (((struct o20_float *)(t2))->v) = u0;
            (((struct o1C_float *)(t2))->v) = u0;
            (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) - 0.0500000007f);
            if (9.99999975e-05f > ((((struct o40_float *)(a4))->v))) {
                (((struct o40_float *)(a4))->v) = 9.99999975e-05f;
            }
            u0 = (((struct o48_float *)(a4))->v);
            (((struct o48_float *)(a4))->v) = (u0 - 0.0500000007f);
            if (9.99999975e-05f > (u0 - 0.0500000007f)) {
                (((struct o48_float *)(a4))->v) = 9.99999975e-05f;
            }
            return 0x48;
        }
        FUN_0c1338f6(a4);
        u0 = (((struct o44_float *)(a4))->v);
        (((struct o44_float *)(a4))->v) = (u0 + 0.100000001f);
        if ((u0 + 0.100000001f) > 1.0f) {
            (((struct o44_float *)(a4))->v) = 1.0f;
        }
        *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + 0x5555);
        *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) & 0xFFFF);
        t2 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t2 - 1);
        t3 = (short)(t2 - 1);
        if ((short)(t2 - 1) == 0) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            *(unsigned short *)((a4 + 0x1C)) = 0xA;
            if (((*(signed char *)((a4 + 0x2))) == 0) && (t0 = *(signed char *)(((0x41C + a4) + 0x2)), (int)t0 < (int)0x3)) {
                fx29_spawn_burst8(a4, ((*(signed char *)(((0x41C + a4) + 0x2))) + 0x1));
            }
            *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x21F;
            t0 = (((struct oC4_int *)(a4))->v);
            (((struct o20_float *)(t0))->v) = 1.0f;
            (((struct o1C_float *)(t0))->v) = 1.0f;
            (((struct o18_float *)(t0))->v) = 1.0f;
            t3 = 0x18;
        }
        return t3;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    *(unsigned short *)((a4 + 0x1C)) = 0xA;
    FUN_0c064d24(a4, 0x1, 0x34, 0x2, 0x100, (~((int)0x1 << (int)(*(signed char *)((a4 + 0x1))))), 0x0, 0x0);
    FUN_0c1338f6(a4);
    u0 = (((struct o44_float *)(a4))->v);
    (((struct o44_float *)(a4))->v) = (u0 + 0.100000001f);
    if ((u0 + 0.100000001f) > 1.0f) {
        (((struct o44_float *)(a4))->v) = 1.0f;
    }
    *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + 0x5555);
    *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) & 0xFFFF);
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    t2 = (short)(t0 - 1);
    if ((short)(t0 - 1) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0xA;
        if (((*(signed char *)((a4 + 0x2))) == 0) && (t1 = *(signed char *)(((0x41C + a4) + 0x2)), (int)t1 < (int)0x3)) {
            fx29_spawn_burst8(a4, ((*(signed char *)(((0x41C + a4) + 0x2))) + 0x1));
        }
        *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x21F;
        t0 = (((struct oC4_int *)(a4))->v);
        (((struct o20_float *)(t0))->v) = 1.0f;
        (((struct o1C_float *)(t0))->v) = 1.0f;
        (((struct o18_float *)(t0))->v) = 1.0f;
        t2 = 0x18;
    }
    return t2;
}

int FUN_0c133aec(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    t0 = FUN_0c037320(0x0, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
    t1 = FUN_0c03f444(0x1, 0x0, t0);
    t0 = t1;
    if (t1 != 0) {
        *(unsigned char *)((t1 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned int *)((t1 + 0x4)) = 0xC135024;
        u0 = *(float *)0xC133C5C;
        (((struct o48_float *)(t1))->v) = u0;
        (((struct o44_float *)(t1))->v) = u0;
        (((struct o40_float *)(t1))->v) = u0;
        *(unsigned int *)((t1 + 0x10)) = a4;
        thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC53256C))) + 0x28), (t1 + 0x28));
        (((struct o2C_float *)(t1))->v) = (((((struct o2C_float *)(t1))->v)) + 100.0f);
        *(unsigned char *)((t1 + 0x2)) = 0x0;
        (((struct oA8_uchar *)(t1))->v) = 0x1;
        (((struct oAC_ushort *)(t1))->v) = 0x1F;
        (((struct oA9_uchar *)(t1))->v) = 0x21;
        FUN_0c037498(((((struct oC4_int *)(t1))->v)), 0x0, 0x0, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
        *(unsigned char *)((((((struct oC4_int *)(t1))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(t1))->v)) + 0x6)) = 0x1F;
        t2 = (((struct oC4_int *)(t1))->v);
        (((struct o8C_float *)(t2))->v) = 1.0f;
        (((struct o88_float *)(t2))->v) = 1.0f;
        (((struct o84_float *)(t2))->v) = 1.0f;
        FUN_0c037498(((((struct oC8_int *)(t1))->v)), 0x1, 0x0, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
        *(unsigned char *)((((((struct oC8_int *)(t1))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC8_int *)(t1))->v)) + 0x6)) = 0x3F;
        t2 = (((struct oC8_int *)(t1))->v);
        (((struct o8C_float *)(t2))->v) = 1.0f;
        (((struct o88_float *)(t2))->v) = 1.0f;
        (((struct o84_float *)(t2))->v) = 1.0f;
        FUN_0c064d24(t1, 0x1, 0x32, 0x0, 0x100, 0x0, 0x0, 0xF0);
        FUN_0c07e2f4(t1, 0x63);
        *(unsigned char *)(((0x41C + t1) + 0x1)) = 0x0;
        (((struct o41C_uchar *)(t1))->v) = 0x0;
        t0 = 0x0;
    }
    return t0;
}

int FUN_0c133c0e(int a4)
{
    register int t0;
    register int t7;

    t0 = *(signed char *)((a4 + 0x2));
    t7 = t0;
    if (t0 == 0) {
        (((struct o84_float *)(((((struct oC8_int *)(a4))->v))))->v) = ((((struct o40_float *)(a4))->v));
        (((struct o88_float *)(((((struct oC8_int *)(a4))->v))))->v) = ((((struct o44_float *)(a4))->v));
        (((struct o8C_float *)(((((struct oC8_int *)(a4))->v))))->v) = ((((struct o48_float *)(a4))->v));
        t7 = 0x8C;
    }
    return t7;
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

int FUN_0c133d44(int a4)
{
    register int t0;

    t0 = (((struct oC4_int *)(a4))->v);
    (((struct o78_uint *)(t0))->v) = (((((struct o78_int *)(t0))->v)) + 0x16C);
    t0 = (((struct oC4_int *)(a4))->v);
    (((struct o78_uint *)(t0))->v) = (((((struct o78_int *)(t0))->v)) & 0xFFFF);
    t0 = (((struct oC4_int *)(a4))->v);
    (((struct o7C_uint *)(t0))->v) = (((((struct o7C_int *)(t0))->v)) + 0x71C);
    t0 = (((struct oC4_int *)(a4))->v);
    (((struct o7C_uint *)(t0))->v) = (((((struct o7C_int *)(t0))->v)) & 0xFFFF);
    return 0x7C;
}



int FUN_0c1341de(int a4)
{
    register int t0;

    t0 = *(int *)((a4 + 0x10));
    if ((*(signed char *)((t0 + 0x3715))) == 26) {
        if ((*(signed char *)(((a4 + 0x41C) + 0x2))) == 0) {
            *(unsigned char *)(((a4 + 0x41C) + 0x2)) = (*(signed char *)((t0 + 0x375A)));
        }
    } else {
        if ((*(signed char *)((t0 + 0x3715))) == 33) {
            if ((*(signed char *)(((a4 + 0x41C) + 0x2))) == 0) {
                *(unsigned char *)(((a4 + 0x41C) + 0x2)) = 0x63;
            }
        } else {
            *(unsigned char *)(((a4 + 0x41C) + 0x2)) = 0x0;
        }
    }
    return (*(signed char *)(((a4 + 0x41C) + 0x2)));
}

int FUN_0c134216(int a4)
{
    register int t0;
    register int t8;

    t0 = *(int *)((a4 + 0x10));
    if ((*(signed char *)((t0 + 0x3715))) == 26) {
        t8 = (*(signed char *)((t0 + 0x375A)));
    } else {
        t8 = a4;
        if ((*(signed char *)((t0 + 0x3715))) == 33) {
            t8 = 0x63;
        }
    }
    if ((*(signed char *)(((0x41C + a4) + 0x2))) != t8) {
        *(unsigned char *)(((0x41C + a4) + 0x2)) = 0x0;
        return 0x1;
    }
    return 0x0;
}

int FUN_0c134274(int a4)
{
    register int t0;

    t0 = *(int *)((a4 + 0x10));
    if ((*(signed char *)((t0 + 0x3715))) == 32) {
        return (*(signed char *)((t0 + 0x373E)));
    }
    return 0x0;
}

int FUN_0c13428a(int a4)
{
    register int t0;

    t0 = *(int *)((a4 + 0x10));
    if ((*(signed char *)((t0 + 0x3715))) == 20) {
        if ((int)(*(signed char *)((t0 + 0x17))) <= (int)0x1) {
            return 0x1;
        }
        return 0x2;
    }
    if ((*(signed char *)((t0 + 0x3715))) == 24) {
        return 0x3;
    }
    return 0x0;
}

int FUN_0c1342b8(int a4)
{
    register int t0;

    *(unsigned short *)(((0x12A + a4) + 0x2)) = 0x0;
    (((struct o12A_ushort *)(a4))->v) = 0x0;
    (((struct o12E_ushort *)(a4))->v) = 0x0;
    (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) + (((-((((struct o40_float *)(a4))->v))) + 0.100000001f) / 10.0f));
    (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) + (((-((((struct o44_float *)(a4))->v))) + 0.100000001f) / 10.0f));
    (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + (((-((((struct o48_float *)(a4))->v))) + 0.100000001f) / 10.0f));
    t0 = FUN_0c1341de(a4);
    if (t0 != 0) {
        (((struct o15_uchar *)(a4))->v) = 0x1;
        (((struct o16_uchar *)(a4))->v) = 0x0;
        (((struct o17_uchar *)(a4))->v) = t0;
        (((struct o12E_ushort *)(a4))->v) = 0xF0;
    } else {
        t0 = FUN_0c134274(a4);
        if (t0 != 0) {
            (((struct o15_uchar *)(a4))->v) = 0x2;
            (((struct o16_uchar *)(a4))->v) = 0x0;
            (((struct o17_uchar *)(a4))->v) = t0;
        } else {
            t0 = FUN_0c13428a(a4);
            if (t0 != 0) {
                (((struct o15_uchar *)(a4))->v) = 0x3;
                (((struct o16_uchar *)(a4))->v) = 0x0;
                (((struct o17_uchar *)(a4))->v) = t0;
            }
        }
    }
    return FUN_0c133d90(a4);
}

int FUN_0c134c9c(int a4, float f4)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    t0 = *(int *)((a4 + 0x10));
    t1 = *(signed char *)((a4 + 0x18));
    if (t1 != 0) {
        if (t1 != 1) {
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
            t1 = 0x16;
        } else {
            t2 = (((struct o22_short *)(a4))->v);
            (((struct o22_ushort *)(a4))->v) = (t2 - 1);
            if ((short)(t2 - 1) == 0) {
                (((struct o18_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x18))) + 0x1);
            }
            thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((t0 + 0x1))) * (short)0x3938) + 0xC53258C))) + 0x28), (a4 + 0x4C));
            (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) - 0.00499999989f);
            u0 = (((struct o0_float *)0xC134DEC)->v);
            if (u0 > ((((struct o40_float *)(a4))->v))) {
                (((struct o40_float *)(a4))->v) = u0;
            }
            u0 = (((struct o40_float *)(a4))->v);
            (((struct o48_float *)(a4))->v) = u0;
            (((struct o44_float *)(a4))->v) = u0;
            u0 = (((struct o4_float *)0xC134DEC)->v);
            (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((((struct o4C_float *)(a4))->v)) - ((((struct o28_float *)(a4))->v))) / u0));
            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((((struct o50_float *)(a4))->v)) - ((((struct o2C_float *)(a4))->v))) / u0));
            (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((((struct o54_float *)(a4))->v)) - ((((struct o30_float *)(a4))->v))) / u0));
            t1 = 0x30;
        }
        t2 = t1;
    } else {
        (((struct o18_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x18))) + 0x1);
        (((struct o22_ushort *)(a4))->v) = 0x3C;
        t1 = (((struct o22_short *)(a4))->v);
        (((struct o22_ushort *)(a4))->v) = (t1 - 1);
        if ((short)(t1 - 1) == 0) {
            (((struct o18_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x18))) + 0x1);
        }
        thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((t0 + 0x1))) * (short)0x3938) + 0xC53258C))) + 0x28), (a4 + 0x4C));
        (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) - 0.00499999989f);
        u0 = (((struct o0_float *)0xC134DEC)->v);
        if (u0 > ((((struct o40_float *)(a4))->v))) {
            (((struct o40_float *)(a4))->v) = u0;
        }
        u0 = (((struct o40_float *)(a4))->v);
        (((struct o48_float *)(a4))->v) = u0;
        (((struct o44_float *)(a4))->v) = u0;
        u0 = (((struct o4_float *)0xC134DEC)->v);
        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((((struct o4C_float *)(a4))->v)) - ((((struct o28_float *)(a4))->v))) / u0));
        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((((struct o50_float *)(a4))->v)) - ((((struct o2C_float *)(a4))->v))) / u0));
        (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((((struct o54_float *)(a4))->v)) - ((((struct o30_float *)(a4))->v))) / u0));
        t2 = 0x30;
    }
    return t2;
}

int FUN_0c134ea2(int a4)
{
    register int t0;
    int t1;
    register float u0;

    t0 = *(int *)((a4 + 0x10));
    t1 = *(signed char *)((a4 + 0x16));
    if (t1 != 0) {
        if (t1 != 1) {
            (((struct o16_uchar *)(a4))->v) = 0x0;
            (((struct o15_uchar *)(a4))->v) = 0x0;
            return FUN_0c133c78(a4, 0x0);
        }
    } else {
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        (((struct o20_ushort *)(a4))->v) = 0xA;
        (((struct o12A_ushort *)(a4))->v) = 0x0;
        (((struct o12C_ushort *)(a4))->v) = 0x0;
        (((struct o12E_ushort *)(a4))->v) = 0x0;
        FUN_0c133c78(a4, 0x0);
    }
    t1 = *(signed char *)((t0 + 0x3715));
    if ((t1 != 32) && (t1 != 14)) {
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
    }
    (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) - 0.00499999989f);
    u0 = *(float *)0xC134FEC;
    if (u0 > ((((struct o48_float *)(a4))->v))) {
        (((struct o48_float *)(a4))->v) = u0;
    }
    u0 = (((struct o48_float *)(a4))->v);
    (((struct o44_float *)(a4))->v) = u0;
    (((struct o40_float *)(a4))->v) = u0;
    return 0x40;
}

int FUN_0c134f5a(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            (((struct o16_uchar *)(a4))->v) = 0x0;
            (((struct o15_uchar *)(a4))->v) = 0x0;
            return FUN_0c133c78(a4, 0x0);
        }
    } else {
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        (((struct o20_ushort *)(a4))->v) = 0x0;
        FUN_0c133c78(a4, 0x0);
    }
    t0 = FUN_0c13428a(a4);
    if (t0 == 0) {
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
    }
    t0 = *(signed char *)((a4 + 0x17));
    if (t0 != 1) {
        if (t0 != 2) {
            
            (((struct o12E_ushort *)(a4))->v) = 0x0;
            (((struct o48_float *)(a4))->v) = 0.0500000007f;
            (((struct o44_float *)(a4))->v) = 0.0500000007f;
            (((struct o40_float *)(a4))->v) = 0.0500000007f;
            return ((int (*)(int, int, int, int, float))(0xC134118))(a4, a5, a6, a7, 0.0500000007f);
        }
        (((struct o48_float *)(a4))->v) = 0.0500000007f;
        (((struct o44_float *)(a4))->v) = 0.0500000007f;
        (((struct o40_float *)(a4))->v) = 0.0500000007f;
        return FUN_0c134036(a4);
    }
    (((struct o48_float *)(a4))->v) = 0.0500000007f;
    (((struct o44_float *)(a4))->v) = 0.0500000007f;
    (((struct o40_float *)(a4))->v) = 0.0500000007f;
    return FUN_0c133f70(a4);
}

int FUN_0c135024(int a4, int a5, int a6, int a7)
{
    int stk[2];
    register int t0;
    register int t2;
    register int t9;
    register int t30;

    t0 = *(int *)((a4 + 0x10));
    (((struct oA8_uchar *)(a4))->v) = (*(signed char *)((t0 + 0xA8)));
    t2 = *(signed char *)((a4 + 0x14));
    if (t2 != 0) {
        if (t2 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        if ((*(signed char *)((t0 + 0x371A))) == 0) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        }
        t9 = *(signed char *)((a4 + 0x15));
        switch (t9) {
        case 1:
            FUN_0c134d80(a4, a5, a6, a7);
            break;
        case 2:
            FUN_0c133d44(a4);
            FUN_0c134ea2(a4);
            break;
        case 3:
            FUN_0c133d44(a4);
            FUN_0c134f5a(a4, 0x0, 0x0, 0x0);
            break;
        default:
            FUN_0c133d44(a4);
            FUN_0c1342b8(a4);
            break;
        }
        return FUN_0c133c0e(a4);
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    *(unsigned short *)((a4 + 0x1C)) = 0x3C;
    if ((*(signed char *)((t0 + 0x371A))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    t30 = *(signed char *)((a4 + 0x15));
    switch (t30) {
    case 1:
        FUN_0c134d80(a4, a5, a6, a7);
        break;
    case 2:
        FUN_0c133d44(a4);
        FUN_0c134ea2(a4);
        break;
    case 3:
        FUN_0c133d44(a4);
        FUN_0c134f5a(a4, 0x0, 0x0, 0x0);
        break;
    default:
        FUN_0c133d44(a4);
        FUN_0c1342b8(a4);
        break;
    }
    return FUN_0c133c0e(a4);
}



int FUN_0c1354a6(int a4)
{
    register int t0;

    t0 = (((struct o22_short *)(a4))->v);
    (((struct o22_ushort *)(a4))->v) = (t0 + 0x1);
    if ((int)(short)(t0 + 0x1) >= (int)0x10) {
        (((struct o22_ushort *)(a4))->v) = 0x0;
    }
    return FUN_0c037498(((((struct oC4_int *)(a4))->v)), ((((struct o22_short *)(a4))->v)), 0x2, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
}

int FUN_0c1354f8(int a4, int a5, int a6, int a7, float f4)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 == 1) {
            FUN_0c1354a6(a4);
            if ((*(signed char *)((a4 + 0x2))) != 0) {
                if (((((struct o50_float *)(a4))->v)) > 10.0f) {
                    (((struct o50_float *)(a4))->v) = 10.0f;
                    (((struct o5C_float *)(a4))->v) = 0.0f;
                }
            }
            t1 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
            if ((short)(t1 - 1) == 0) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                *(unsigned short *)((a4 + 0x1C)) = 0xF;
                (((struct o4C_float *)(a4))->v) = ((math_sin_angle16((*(int *)((a4 + 0x38))))) * (1.0f + 1.0f));
                (((struct o54_float *)(a4))->v) = ((math_cos_angle16((*(int *)((a4 + 0x38))))) * (1.0f + 1.0f));
                (((struct o50_float *)(a4))->v) = (1.0f + 1.0f);
                t1 = 0x50;
            } else {
                (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) + ((((struct o58_float *)(a4))->v)));
                (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
                (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) + ((((struct o60_float *)(a4))->v)));
                (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
                (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
                (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o54_float *)(a4))->v)));
                t1 = 0x30;
            }
            return t1;
        }
        if (t0 == 2) {
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
            if ((short)(t0 - 1) == 0) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            }
            u0 = *(float *)0xC135858;
            t0 = (((struct oC4_int *)(a4))->v);
            (((struct o18_float *)(t0))->v) = (((((struct o18_float *)(t0))->v)) - u0);
            t0 = (((struct oC4_int *)(a4))->v);
            (((struct o1C_float *)(t0))->v) = (((((struct o1C_float *)(t0))->v)) - u0);
            t0 = (((struct oC4_int *)(a4))->v);
            (((struct o20_float *)(t0))->v) = (((((struct o20_float *)(t0))->v)) - u0);
            if (0.0f > ((((struct o18_float *)(((((struct oC4_int *)(a4))->v))))->v))) {
                (((struct o18_float *)(((((struct oC4_int *)(a4))->v))))->v) = 0.0f;
            }
            if (0.0f > ((((struct o1C_float *)(((((struct oC4_int *)(a4))->v))))->v))) {
                (((struct o1C_float *)(((((struct oC4_int *)(a4))->v))))->v) = 0.0f;
            }
            if (0.0f > ((((struct o20_float *)(((((struct oC4_int *)(a4))->v))))->v))) {
                (((struct o20_float *)(((((struct oC4_int *)(a4))->v))))->v) = 0.0f;
            }
            (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
            (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o54_float *)(a4))->v)));
            return FUN_0c1354a6(a4);
        }
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    if ((*(signed char *)((a4 + 0x2))) != 0) {
        *(unsigned short *)((a4 + 0x1C)) = 0xA;
        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) - 50.0f);
        (((struct o5C_float *)(a4))->v) = 0.0f;
        (((struct o60_float *)(a4))->v) = 0.0f;
        (((struct o58_float *)(a4))->v) = 0.0f;
        t0 = (int)((int)(FUN_0c179ac0()) % (int)0x5A);
        u0 = math_sin_angle16((0xFFFF & (((int)(((float)t0 * 65536.0f) / 360.0f) + (*(int *)((a4 + 0x38)))) - 8192)));
        (((struct o4C_float *)(a4))->v) = (u0 * 20.0f);
        t0 = (int)((int)(FUN_0c179ac0()) % (int)0x5A);
        u0 = math_cos_angle16((0xFFFF & (((int)(((float)t0 * 65536.0f) / 360.0f) + (*(int *)((a4 + 0x38)))) - 8192)));
        (((struct o54_float *)(a4))->v) = (u0 * 20.0f);
        t0 = FUN_0c179ac0();
        t1 = ((~(((~t0) + 0x1) & 0x1)) + 0x1);
        if ((int)t0 >= 0) {
            t1 = (t0 & 0x1);
        }
        (((struct o5C_float *)(a4))->v) = ((float)t1 + 0.5f);
        (((struct o50_float *)(a4))->v) = (-((math_tan_angle16((*(int *)((a4 + 0x34))))) * 20.0f));
        if (-10.0f > ((((struct o50_float *)(a4))->v))) {
            (((struct o50_float *)(a4))->v) = -10.0f;
        }
    } else {
        (((struct o5C_float *)(a4))->v) = 0.0f;
        (((struct o60_float *)(a4))->v) = 0.0f;
        (((struct o58_float *)(a4))->v) = 0.0f;
        (((struct o50_float *)(a4))->v) = 0.0f;
        (((struct o54_float *)(a4))->v) = 0.0f;
        (((struct o4C_float *)(a4))->v) = 0.0f;
        *(unsigned short *)((a4 + 0x1C)) = 0xF;
    }
    FUN_0c1354a6(a4);
    if ((*(signed char *)((a4 + 0x2))) != 0) {
        if (((((struct o50_float *)(a4))->v)) > 10.0f) {
            (((struct o50_float *)(a4))->v) = 10.0f;
            (((struct o5C_float *)(a4))->v) = 0.0f;
        }
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    if ((short)(t0 - 1) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0xF;
        (((struct o4C_float *)(a4))->v) = ((math_sin_angle16((*(int *)((a4 + 0x38))))) * (1.0f + 1.0f));
        (((struct o54_float *)(a4))->v) = ((math_cos_angle16((*(int *)((a4 + 0x38))))) * (1.0f + 1.0f));
        (((struct o50_float *)(a4))->v) = (1.0f + 1.0f);
        t0 = 0x50;
    } else {
        (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) + ((((struct o58_float *)(a4))->v)));
        (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
        (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) + ((((struct o60_float *)(a4))->v)));
        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
        (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o54_float *)(a4))->v)));
        t0 = 0x30;
    }
    return t0;
}

int FUN_0c1357ee(int a4, int a5, int a6, int a7)
{

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R12;
    register int R13;
    register float F2;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    v0_0 = a4;
    v0_2 = *(signed char *)((v0_0 + 0x14));
    v0_1 = (v0_2);
    if ((v0_2 == 0)) goto L_C1357FE;
    if ((v0_1 == 1)) goto L_C135814;
    return FUN_0c03f346(v0_0, R5, a6, a7);
    L_C135814:;
    *(unsigned int *)((v0_0 + 0x38)) = ((*(int *)((v0_0 + 0x38))) + 0x6D);
    (((struct o40_float *)(v0_0))->v) = (((((struct o40_float *)(v0_0))->v)) + ((((struct o5C_float *)(v0_0))->v)));
    (((struct o44_float *)(v0_0))->v) = (((((struct o44_float *)(v0_0))->v)) + ((((struct o5C_float *)(v0_0))->v)));
    (((struct o48_float *)(v0_0))->v) = (((((struct o48_float *)(v0_0))->v)) + ((((struct o5C_float *)(v0_0))->v)));
    v0_2 = *(signed char *)((v0_0 + 0x15));
    v0_1 = (v0_2);
    R5 = (0x0);
    if ((v0_2 == 0)) goto L_C135864;
    if (!((v0_1 == 1))) goto L_C1358BE;
    *(unsigned short *)((v0_0 + 0x1E)) = ((*(short *)((v0_0 + 0x1E))) + 0x1);
    if (((*(short *)((v0_0 + 0x1E))) != 5)) goto L_C135898;
    (((struct o12A_ushort *)(v0_0))->v) = R5;
    goto L_C135898;
    L_C1358BE:;
    return v0_1;
    L_C135898:;
    (((struct oB0_float *)(v0_0))->v) = (((((struct oB0_float *)(v0_0))->v)) - ((((struct o4C_float *)(v0_0))->v)));
    v0_1 = (0xB0);
    if ((((((struct oB0_float *)(v0_0))->v)) > 0.0f)) goto L_C1358BE;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    v0_1 = (0x14);
    goto L_C1358BE;
    L_C135864:;
    v0_1 = (0x40);
    if ((((((struct o58_float *)(v0_0))->v)) > ((((struct o40_float *)(v0_0))->v)))) goto L_C1358BE;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    (((struct o4C_float *)(v0_0))->v) = (*(float *)0xC135990);
    *(unsigned short *)((v0_0 + 0x1E)) = R5;
    v0_1 = (R5);
    goto L_C1358BE;
    L_C1357FE:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    (((struct o5C_float *)(v0_0))->v) = (((((struct o58_float *)(v0_0))->v)) / 10.0f);
    goto L_C135814;
}

