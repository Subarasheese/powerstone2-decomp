/* game/stage: functions 0C0B0864-0C0B1020, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o118_int { char p[0x118]; int v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o18_uchar { char p[0x18]; unsigned char v; };
struct o1B_uchar { char p[0x1B]; unsigned char v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o2C_float { char p[0x2C]; float v; };
struct o3747_uchar { char p[0x3747]; unsigned char v; };
struct o3749_uchar { char p[0x3749]; unsigned char v; };
struct o375A_uchar { char p[0x375A]; unsigned char v; };
struct o3790_float { char p[0x3790]; float v; };
struct o3850_short { char p[0x3850]; short v; };
struct o3850_uint { char p[0x3850]; unsigned int v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
int FUN_0c037bf6(int);
int FUN_0c038362(int);
int thunk_FUN_0c058310(int, int);
int FUN_0c059e60(int, int);
int FUN_0c064e70(int, int);
int FUN_0c06588a(int, int, int, int, int);
int FUN_0c070320(int);
int FUN_0c07d030(int, int);
int FUN_0c07da48(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07eaf4(int);
int FUN_0c07ebd0(int);
int FUN_0c085d0c(int);
int FUN_0c0b0c18(int);
int FUN_0c141cbc(int, int);
int FUN_0c1425dc(int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c0b0864(int a4, int a5);
float FUN_0c0b08dc(int a4);
int FUN_0c0b0950(int a4);
int FUN_0c0b09f6(int a4);
int FUN_0c0b0aa8(int a4);
int FUN_0c0b0e7e(int a4);
int FUN_0c0b0eb4(int a4, int a5, int a6, int a7);
int FUN_0c0b0f14(int a4);
int FUN_0c0b0fe8(int a4, int a5, int a6, int a7);

int FUN_0c0b0864(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    (((struct o20_ushort *)(a4))->v) = 0x0;
    t0 = FUN_0c07ebd0(a4);
    t1 = t0;
    if (t0 != 0) {
        (((struct o3850_uint *)(a4))->v) = (unsigned short)((*(short *)((0xC5413E8 + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x2F8)))) + (FUN_0c07eaf4(a4)));
        t0 = *(int *)((a4 + 0x38));
        t2 = (((struct o3850_short *)(a4))->v);
        t3 = (unsigned short)(t2 - t0);
        if ((0x8000 & (unsigned short)(t2 - t0)) != 0) {
            t3 = ((unsigned short)(t2 - t0) | 0xFFFF0000);
        }
        if ((int)t3 <= (int)(-a5)) {
            *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) - a5);
        } else {
            if ((int)t3 >= (int)a5) {
                t0 = ((*(int *)((a4 + 0x38))) + a5);
            } else {
                t0 = ((*(int *)((a4 + 0x38))) + (((int)((unsigned int)((int)((unsigned int)t3 + (unsigned int)0x0)) + ((((int)0x0 > (int)t3)) ? 1u : 0u))) >> 1));
            }
            *(unsigned int *)((a4 + 0x38)) = t0;
        }
        t1 = 0x3850;
    }
    return t1;
}

float FUN_0c0b08dc(int a4)
{
    register float t3;

    (((struct o4C_float *)(a4))->v) = ((math_cos_angle16(((-(*(int *)((a4 + 0x38)))) + 0x14000))) * 25.0f);
    t3 = math_sin_angle16(((-(*(int *)((a4 + 0x38)))) + 0x14000));
    (((struct o54_float *)(a4))->v) = (t3 * 25.0f);
    (((struct o60_float *)(a4))->v) = 0.0f;
    (((struct o58_float *)(a4))->v) = 0.0f;
    (((struct o5C_float *)(a4))->v) = 0.0f;
    (((struct o50_float *)(a4))->v) = 0.0f;
    return (t3 * 25.0f);
}

int FUN_0c0b0950(int a4)
{
    int stk[2];
    register int t0;
    register int t6;
    register int t17;

    t0 = FUN_0c064e70(a4, ((int)stk + 4));
    if (t0 == 0) {
        *(float *)(((int)stk + 4)) = 0.0f;
    }
    (((struct o3790_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + (*(float *)(((int)stk + 4))));
    *(int *)((int)stk + 0) = 0x8000;
    t6 = FUN_0c06588a(a4, (0x3790 + a4), 0xF0, (*(int *)((a4 + 0x38))), 0x8000);
    if (((((((struct o2C_float *)(a4))->v)) + (*(float *)(((int)stk + 4)))) + ((((struct o0_float *)0xC0B0A98)->v))) > ((((struct o3790_float *)(a4))->v))) {
        (((struct o2C_float *)(a4))->v) = (((((struct o3790_float *)(a4))->v)) - (*(float *)(((int)stk + 4))));
        (((struct o3747_uchar *)(a4))->v) = 0x4;
    } else {
        if (t6 != 0) {
            if (((((((struct o2C_float *)(a4))->v)) + (*(float *)(((int)stk + 4)))) + ((((struct o4_float *)0xC0B0A98)->v))) > ((((struct o3790_float *)(a4))->v))) {
                t17 = *(signed char *)((a4 + 0x3747));
                (((struct o3747_uchar *)(a4))->v) = (t17 - 1);
                if ((signed char)(t17 - 1) == 0) {
                    (((struct o2C_float *)(a4))->v) = (((((struct o3790_float *)(a4))->v)) - (*(float *)(((int)stk + 4))));
                    (((struct o3747_uchar *)(a4))->v) = 0x4;
                }
            }
        } else {
            (((struct o3747_uchar *)(a4))->v) = 0x4;
        }
    }
    return 0x0;
}

int FUN_0c0b09f6(int a4)
{
    register int t0;
    register int t1;

    (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
    (((struct o50_float *)(a4))->v) = 0.0f;
    (((struct o54_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    (((struct o5C_float *)(a4))->v) = 0.0f;
    (((struct o60_float *)(a4))->v) = 0.0f;
    (((struct o58_float *)(a4))->v) = 0.0f;
    t0 = *(signed char *)((a4 + 0x1));
    FUN_0c07e79c(a4, t0, 0x1, 0x1E, (t0), 0x1, 0x1E);
    t0 = *(int *)(((0x118 + a4) + 0x4));
    t1 = (((struct o118_int *)(a4))->v);
    (((struct oA0_float *)(t0))->v) = 1.0f;
    (((struct o9C_float *)(t0))->v) = 1.0f;
    (((struct oA0_float *)(t1))->v) = 1.0f;
    (((struct o9C_float *)(t1))->v) = 1.0f;
    t0 = *(int *)(((0x118 + a4) + 0x4));
    t1 = (((struct o118_int *)(a4))->v);
    (((struct o98_float *)(t0))->v) = 1.0f;
    (((struct o98_float *)(t1))->v) = 1.0f;
    (((struct o94_float *)(t0))->v) = 1.0f;
    (((struct o94_float *)(t1))->v) = 1.0f;
    (((struct o18_uchar *)(a4))->v) = 0x1;
    (((struct o1B_uchar *)(a4))->v) = 0x0;
    return FUN_0c1425dc(a4, 0x55);
}

int FUN_0c0b0aa8(int a4)
{
    register int t0;
    register int t1;

    (((struct o3749_uchar *)(a4))->v) = 0x1;
    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        FUN_0c07d030(a4, 0x2);
        *(unsigned short *)((a4 + 0x1C)) = 0x1F;
        FUN_0c141cbc(a4, 0x1F);
        FUN_0c059e60(a4, 0x24);
        thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC53255C))) + 0x28), (a4 + 0x28));
        t0 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t0, 0x1, 0x21, (t0), 0x1, 0x21);
        t0 = *(int *)(((0x118 + a4) + 0x4));
        t1 = (((struct o118_int *)(a4))->v);
        (((struct oA0_float *)(t0))->v) = 1.0f;
        (((struct o9C_float *)(t0))->v) = 1.0f;
        (((struct oA0_float *)(t1))->v) = 1.0f;
        (((struct o9C_float *)(t1))->v) = 1.0f;
        t0 = *(int *)(((0x118 + a4) + 0x4));
        t1 = (((struct o118_int *)(a4))->v);
        (((struct o98_float *)(t0))->v) = 1.0f;
        (((struct o98_float *)(t1))->v) = 1.0f;
        (((struct o94_float *)(t0))->v) = 1.0f;
        (((struct o94_float *)(t1))->v) = 1.0f;
        FUN_0c037bf6(a4);
        (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
        return 0x17;
    }
    return FUN_0c038362(a4);
}

int FUN_0c0b0e7e(int a4)
{
    register int t2;

    FUN_0c07da48(a4);
    FUN_0c070320(a4);
    t2 = FUN_0c037bf6(a4);
    if ((unsigned char)t2 != 0) {
        (((struct o375A_uchar *)(a4))->v) = 0x0;
        return FUN_0c085d0c(a4);
    }
    return FUN_0c038362(a4);
}

int FUN_0c0b0eb4(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x17));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        return t0;
                    }
                    return FUN_0c0b0e7e(a4);
                }
                return FUN_0c0b0c18(a4);
            }
            return ((int (*)(int, int, int, int))(0xC0B0B68))(a4, a5, a6, a7);
        }
        return FUN_0c0b0aa8(a4);
    }
    return FUN_0c0b09f6(a4);
}

int FUN_0c0b0f14(int a4)
{
    register int t0;
    register int t1;

    (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
    (((struct o50_float *)(a4))->v) = 0.0f;
    (((struct o54_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    (((struct o5C_float *)(a4))->v) = 0.0f;
    (((struct o60_float *)(a4))->v) = 0.0f;
    (((struct o58_float *)(a4))->v) = 0.0f;
    (((struct o5C_float *)(a4))->v) = -2.0f;
    t0 = *(signed char *)((a4 + 0x1));
    FUN_0c07e79c(a4, t0, 0x1, 0x1E, (t0), 0x1, 0x1E);
    *(unsigned short *)((a4 + 0x1C)) = 0x1E;
    t0 = *(int *)(((0x118 + a4) + 0x4));
    t1 = (((struct o118_int *)(a4))->v);
    (((struct oA0_float *)(t0))->v) = 1.0f;
    (((struct o9C_float *)(t0))->v) = 1.0f;
    (((struct oA0_float *)(t1))->v) = 1.0f;
    (((struct o9C_float *)(t1))->v) = 1.0f;
    t0 = *(int *)(((0x118 + a4) + 0x4));
    t1 = (((struct o118_int *)(a4))->v);
    (((struct o98_float *)(t0))->v) = 1.0f;
    (((struct o98_float *)(t1))->v) = 1.0f;
    (((struct o94_float *)(t0))->v) = 1.0f;
    (((struct o94_float *)(t1))->v) = 1.0f;
    (((struct o18_uchar *)(a4))->v) = 0x1;
    (((struct o1B_uchar *)(a4))->v) = 0x11;
    return 0x1B;
}

int FUN_0c0b0fe8(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x375A));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        if (t0 != 5) {
                            return t0;
                        }
                        return ((int (*)(int, int, int, int))(0xC0B0FA6))(a4, a5, a6, a7);
                    }
                    return ((int (*)(int, int, int, int))(0xC0B0066))(a4, a5, a6, a7);
                }
                return ((int (*)(int, int, int, int))(0xC0B0828))(a4, a5, a6, a7);
            }
            return FUN_0c0b0eb4(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC0B0066))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC0B0668))(a4, a5, a6, a7);
}
