/* game/stage: functions 0C0B931C-0C0BA196, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o10_float { char p[0x10]; float v; };
struct o118_int { char p[0x118]; int v; };
struct o11C_int { char p[0x11C]; int v; };
struct o12E_short { char p[0x12E]; short v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o372C_uchar { char p[0x372C]; unsigned char v; };
struct o3747_uchar { char p[0x3747]; unsigned char v; };
struct o374B_uchar { char p[0x374B]; unsigned char v; };
struct o3759_uchar { char p[0x3759]; unsigned char v; };
struct o3790_float { char p[0x3790]; float v; };
struct o3830_ushort { char p[0x3830]; unsigned short v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c037bf6(int);
int FUN_0c038362(int);
int FUN_0c05258e(int, int, int, int, int);
int thunk_FUN_0c058310(int, int);
int FUN_0c059ef6(int, int);
int FUN_0c070320(int);
int FUN_0c07043c(int, float, float, float, float);
int FUN_0c07053a(int, int, float);
int FUN_0c07ce58(int, int);
int FUN_0c07d060(int, int);
int FUN_0c07d1fc(int);
int FUN_0c07d774(int);
int FUN_0c07da48(int);
int FUN_0c07db58(int);
int FUN_0c07e2f4(int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c085204(int, float);
int FUN_0c085cac(int, int, int);
int FUN_0c085d0c(int);
int FUN_0c14f824(int, int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int FUN_0c0b931c(int a4);
int FUN_0c0b9360(int a4);
int FUN_0c0b938a(int a4);
int FUN_0c0b93b2(int a4);
int FUN_0c0b93dc(int a4);
int FUN_0c0b9406(int a4);
int FUN_0c0b9430(int a4);
int FUN_0c0b949a(int a4);
int FUN_0c0b94c6(int a4);
int FUN_0c0b95dc(int a4, int a5, int a6);
int FUN_0c0b97c2(int a4);
int FUN_0c0b97ee(int a4);
int FUN_0c0b9942(int a4);
int FUN_0c0b998c(int a4);
int FUN_0c0b9a42(int a4);
int FUN_0c0b9b4e(int a4);
int FUN_0c0b9bf4(int a4);
int FUN_0c0b9ce4(int a4);
int FUN_0c0b9dfa(int a4);
float FUN_0c0b9ea0(int a4);
int FUN_0c0b9f22(int a4);

int FUN_0c0b931c(int a4)
{
    int t0;
    register int t1;
    register int t2;

    t1 = *(signed char *)((a4 + 0x3715));
    t2 = t1;
    if (t1 == 26) {
        if (((*(signed char *)((a4 + 0x375A))) != 1) && (t0 = *(signed char *)((a4 + 0x375A)), t0 != 4)) {
            t1 = t0;
        } else {
            t0 = *(signed char *)((a4 + 0x15));
            t1 = t0;
            if (t0 == 2) {
                (((struct o3759_uchar *)(a4))->v) = 0x2;
                t0 = FUN_0c07d060(a4, 0x200);
                t1 = t0;
                if (t0 != 0) {
                    t0 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
                    t1 = (t0 + 0x1);
                }
            }
        }
        t2 = t1;
    }
    return t2;
}

int FUN_0c0b9360(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x1));
    return (FUN_0c07e79c(a4, t0, 0x1, 0x0, (t0), 0x1, 0x0));
}

int FUN_0c0b938a(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x1));
    return (FUN_0c07e79c(a4, t0, 0x1, 0x1, (t0), 0x1, 0x1));
}

int FUN_0c0b93b2(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x1));
    return (FUN_0c07e79c(a4, t0, 0x1, 0x2, (t0), 0x1, 0x2));
}

int FUN_0c0b93dc(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x1));
    return (FUN_0c07e79c(a4, t0, 0x1, 0x3, (t0), 0x1, 0x3));
}

int FUN_0c0b9406(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x1));
    return (FUN_0c07e79c(a4, t0, 0x1, 0x6, (t0), 0x1, 0x6));
}

int FUN_0c0b9430(int a4)
{
    int t0;

    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        return FUN_0c085d0c(a4);
    }
    t0 = FUN_0c07ecc6(a4, 0x0, 0x0);
    if ((t0 != 0) && (t0 != 1)) {
        return FUN_0c085cac(a4, 0x6, 0x0);
    }
    FUN_0c070320(a4);
    return FUN_0c038362(a4);
}

int FUN_0c0b949a(int a4)
{
    int stk[4];

    *(int *)((int)stk + 12) = a4;
    *(int *)((int)stk + 8) = 0x3;
    *(int *)((int)stk + 4) = 0x2;
    *(int *)((int)stk + 0) = 0xFFFFFFFF;
    FUN_0c07e79c(a4, 0xFFFFFFFF, 0x2, 0x3, 0xFFFFFFFF, 0x2, 0x3);
    return FUN_0c059ef6((*(signed char *)(((*(int *)(((int)stk + 12))) + 0x1))), 0x1);
}

int FUN_0c0b94c6(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = FUN_0c037bf6(a4);
    t1 = (unsigned char)t0;
    if ((unsigned char)t0 != 0) {
        thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532564))) + 0x28), (a4 + 0x28));
        t0 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t0, 0x2, 0xE, (t0), 0x2, 0xE);
        t0 = *(int *)(((0x118 + a4) + 0x4));
        t2 = (((struct o118_int *)(a4))->v);
        (((struct oA0_float *)(t0))->v) = 1.0f;
        (((struct o9C_float *)(t0))->v) = 1.0f;
        (((struct oA0_float *)(t2))->v) = 1.0f;
        (((struct o9C_float *)(t2))->v) = 1.0f;
        t0 = *(int *)(((0x118 + a4) + 0x4));
        t2 = (((struct o118_int *)(a4))->v);
        (((struct o98_float *)(t0))->v) = 1.0f;
        (((struct o98_float *)(t2))->v) = 1.0f;
        (((struct o94_float *)(t0))->v) = 1.0f;
        (((struct o94_float *)(t2))->v) = 1.0f;
        *(unsigned int *)((a4 + 0x38)) = (unsigned short)((*(int *)((a4 + 0x38))) + 0x8000);
        FUN_0c07ce58(a4, (((short)(*(signed char *)((a4 + 0x2))) * (short)0x78) + 0xC25B194));
        *(unsigned int *)((a4 + 0x38)) = (FUN_0c07d774(a4));
        FUN_0c07053a(a4, 0x2C, 22.7273006f);
        (((struct o50_float *)(a4))->v) = 0.0f;
        (((struct o5C_float *)(a4))->v) = 0.0f;
        (((struct o3747_uchar *)(a4))->v) = 0x4;
        *(unsigned short *)((a4 + 0x1E)) = 0xF;
        (((struct o20_ushort *)(a4))->v) = 0x1;
        (((struct o22_ushort *)(a4))->v) = 0x3;
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t1 = 0x15;
    }
    return t1;
}

int FUN_0c0b95dc(int a4, int a5, int a6)
{
    int t0;
    int t1;
    register int t2;
    register int t3;
    register float u0;

    if (((*(int *)0xC542260) & 3) == 0) {
        FUN_0c14f824((*(signed char *)((a4 + 0x1))), (a4 + 0x28), a6);
    }
    FUN_0c07da48(a4);
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    if ((*(short *)((a4 + 0x1E))) != 0) {
        *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) - 1);
        if (((int)(*(short *)((a4 + 0x1E))) <= 0) && (t0 = (((struct o20_short *)(a4))->v), (int)t0 > 0)) {
            FUN_0c07e2f4(a4, 0x15);
            (((struct o20_ushort *)(a4))->v) = 0x0;
        }
    }
    if ((*(signed char *)((a4 + 0x131))) != 0) {
        t0 = FUN_0c07d1fc(a4);
        if ((t0 != 0) && (t1 = (((struct o20_short *)(a4))->v), (int)t1 > 0)) {
            t0 = (((struct o22_short *)(a4))->v);
            (((struct o22_ushort *)(a4))->v) = (t0 - 1);
            if ((int)(short)(t0 - 1) <= 0) {
                if (((((struct o20_short *)(a4))->v)) != 1) {
                    FUN_0c07e2f4(a4, 0x14);
                    (((struct o22_ushort *)(a4))->v) = 0x5;
                } else {
                    FUN_0c07e2f4(a4, 0x15);
                }
                (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) - 1);
            }
        }
    }
    t0 = FUN_0c037bf6(a4);
    t1 = (unsigned char)t0;
    if ((unsigned char)t0 == 0) {
    } else {
        t0 = FUN_0c07ecc6(a4, 0x0, 0x0);
        if (t0 != 0) {
            t0 = *(signed char *)((a4 + 0x1));
            FUN_0c07e79c(a4, t0, 0x2, 0x10, (t0), 0x2, 0x10);
            t0 = (((struct o118_int *)(a4))->v);
            (((struct o98_float *)(t0))->v) = 5.0f;
            (((struct o94_float *)(t0))->v) = 5.0f;
            t0 = (((struct o11C_int *)(a4))->v);
            (((struct o98_float *)(t0))->v) = 5.0f;
            (((struct o94_float *)(t0))->v) = 5.0f;
            (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) * 0.5f);
            (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) * 0.5f);
            t0 = ((*(signed char *)((a4 + 0x15))) + 0x1);
        } else {
            t2 = *(signed char *)((a4 + 0x1));
            FUN_0c07e79c(a4, t2, 0x2, 0xF, (t2), 0x2, 0xF);
            *(unsigned short *)((a4 + 0x1C)) = 0x78;
            *(unsigned short *)((a4 + 0x1E)) = 0x14;
            u0 = (((struct o0_float *)0xC0B9898)->v);
            (((struct o58_float *)(a4))->v) = (-(((((struct o4C_float *)(a4))->v)) / u0));
            (((struct o60_float *)(a4))->v) = (-(((((struct o54_float *)(a4))->v)) / u0));
            (((struct o50_float *)(a4))->v) = ((((struct o4_float *)0xC0B9898)->v));
            (((struct o5C_float *)(a4))->v) = ((((struct o8_float *)0xC0B9898)->v));
            t2 = (((struct o118_int *)(a4))->v);
            t3 = *(int *)(((0x118 + a4) + 0x4));
            (((struct oA0_float *)(t3))->v) = 1.0f;
            (((struct o9C_float *)(t3))->v) = 1.0f;
            (((struct oA0_float *)(t2))->v) = 1.0f;
            (((struct o9C_float *)(t2))->v) = 1.0f;
            t2 = *(int *)(((0x118 + a4) + 0x4));
            t3 = (((struct o118_int *)(a4))->v);
            (((struct o98_float *)(t2))->v) = 1.0f;
            (((struct o98_float *)(t3))->v) = 1.0f;
            (((struct o94_float *)(t2))->v) = 1.0f;
            (((struct o94_float *)(t3))->v) = 1.0f;
            t0 = 0x3;
        }
        (((struct o15_uchar *)(a4))->v) = t0;
        t1 = 0x15;
    }
    return t1;
}

int FUN_0c0b97c2(int a4)
{
    register int t1;

    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    t1 = FUN_0c037bf6(a4);
    if ((unsigned char)t1 != 0) {
        return FUN_0c085d0c(a4);
    }
    return (unsigned char)t1;
}


int FUN_0c0b9942(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x1));
    FUN_0c07e79c(a4, t0, 0x2, 0xB, (t0), 0x2, 0xB);
    FUN_0c059ef6((*(signed char *)((a4 + 0x1))), 0x1);
    return FUN_0c037bf6(a4);
}

int FUN_0c0b998c(int a4)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;

    t1 = FUN_0c037bf6(a4);
    t2 = (unsigned char)t1;
    if ((unsigned char)t1 != 0) {
        t1 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t1, 0x2, 0xC, (t1), 0x2, 0xC);
        t1 = *(int *)(((0x118 + a4) + 0x4));
        t3 = (((struct o118_int *)(a4))->v);
        (((struct oA0_float *)(t1))->v) = 1.0f;
        (((struct o9C_float *)(t1))->v) = 1.0f;
        (((struct oA0_float *)(t3))->v) = 1.0f;
        (((struct o9C_float *)(t3))->v) = 1.0f;
        t1 = *(int *)(((0x118 + a4) + 0x4));
        t3 = (((struct o118_int *)(a4))->v);
        (((struct o98_float *)(t1))->v) = 1.0f;
        (((struct o98_float *)(t3))->v) = 1.0f;
        (((struct o94_float *)(t1))->v) = 1.0f;
        (((struct o94_float *)(t3))->v) = 1.0f;
        *(unsigned int *)((a4 + 0x38)) = (unsigned short)((*(int *)((a4 + 0x38))) + 0x8000);
        t1 = FUN_0c07ce58(a4, ((((short)(*(signed char *)((a4 + 0x2))) * (short)0x78) + 0xC25B194) + 0x18));
        if ((t1 != 0) && (t0 = *(signed char *)((a4 + 0x1)), (t0 + 0x1) != t1)) {
            *(unsigned int *)((a4 + 0x38)) = (FUN_0c07d774(a4));
        }
        FUN_0c07043c(a4, ((((struct oC_float *)0xC0B9A9C)->v)), ((((struct o8_float *)0xC0B9A9C)->v)), ((((struct o4_float *)0xC0B9A9C)->v)), ((((struct o0_float *)0xC0B9A9C)->v)));
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t2 = 0x15;
    }
    return t2;
}

int FUN_0c0b9a42(int a4)
{
    register int t0;
    register int t1;

    FUN_0c037bf6(a4);
    if (!(((((struct o50_float *)(a4))->v)) > 0.0f)) {
        t0 = FUN_0c07ecc6(a4, 0x0, 0x0);
        if (t0 != 0) {
            if (t0 != 1) {
                return FUN_0c085cac(a4, 0x6, 0x0);
            }
            FUN_0c05258e(0x2, 0x14, 0x100, 0x1E, 0x0);
            FUN_0c07db58(a4);
            t0 = *(signed char *)((a4 + 0x1));
            FUN_0c07e79c(a4, t0, 0x2, 0xD, (t0), 0x2, 0xD);
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
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            return 0x15;
        }
    }
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    return math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
}

int FUN_0c0b9b4e(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = FUN_0c037bf6(a4);
    t1 = (unsigned char)t0;
    if ((unsigned char)t0 != 0) {
        (((struct o372C_uchar *)(a4))->v) = 0x1;
        *(unsigned int *)((a4 + 0x38)) = (unsigned short)((*(int *)((a4 + 0x38))) + 0x8000);
        FUN_0c085cac(a4, 0xF, 0x0);
        t0 = *(int *)(((0x118 + a4) + 0x4));
        t2 = (((struct o118_int *)(a4))->v);
        (((struct oA0_float *)(t0))->v) = 1.0f;
        (((struct o9C_float *)(t0))->v) = 1.0f;
        (((struct oA0_float *)(t2))->v) = 1.0f;
        (((struct o9C_float *)(t2))->v) = 1.0f;
        t0 = *(int *)(((0x118 + a4) + 0x4));
        t2 = (((struct o118_int *)(a4))->v);
        (((struct o98_float *)(t0))->v) = 1.0f;
        (((struct o98_float *)(t2))->v) = 1.0f;
        (((struct o94_float *)(t0))->v) = 1.0f;
        (((struct o94_float *)(t2))->v) = 1.0f;
        t1 = 0x94;
    }
    return t1;
}

int FUN_0c0b9bf4(int a4)
{
    register int t0;

    (((struct o3830_ushort *)(a4))->v) = (((((struct o12E_short *)(a4))->v)) ^ 0x40);
    (((struct o374B_uchar *)(a4))->v) = 0x1;
    t0 = *(signed char *)((a4 + 0x1));
    FUN_0c07e79c(a4, t0, 0x2, 0x7, (t0), 0x2, 0x7);
    *(unsigned short *)((a4 + 0x1C)) = 0xA;
    FUN_0c085204(a4, (*(float *)0xC0B9D30));
    FUN_0c07ce58(a4, ((((short)(*(signed char *)((a4 + 0x2))) * (short)0x78) + 0xC25B194) + 0x30));
    t0 = FUN_0c07d774(a4);
    *(unsigned int *)((a4 + 0x38)) = t0;
    return t0;
}

int FUN_0c0b9ce4(int a4)
{
    register int t0;
    register int t1;

    FUN_0c037bf6(a4);
    if (!(((((struct o50_float *)(a4))->v)) > 0.0f)) {
        t0 = FUN_0c07ecc6(a4, 0x0, 0x0);
        if (t0 != 0) {
            if (t0 != 1) {
                return FUN_0c085cac(a4, 0x6, 0x0);
            }
            FUN_0c05258e(0x2, 0x14, 0x100, 0x1E, 0x0);
            FUN_0c07db58(a4);
            t0 = *(signed char *)((a4 + 0x1));
            FUN_0c07e79c(a4, t0, 0x2, 0xD, (t0), 0x2, 0xD);
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
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            return 0x15;
        }
    }
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    return math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
}

int FUN_0c0b9dfa(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = FUN_0c037bf6(a4);
    t1 = (unsigned char)t0;
    if ((unsigned char)t0 != 0) {
        (((struct o372C_uchar *)(a4))->v) = 0x1;
        *(unsigned int *)((a4 + 0x38)) = (unsigned short)((*(int *)((a4 + 0x38))) + 0x8000);
        FUN_0c085cac(a4, 0xF, 0x0);
        t0 = *(int *)(((0x118 + a4) + 0x4));
        t2 = (((struct o118_int *)(a4))->v);
        (((struct oA0_float *)(t0))->v) = 1.0f;
        (((struct o9C_float *)(t0))->v) = 1.0f;
        (((struct oA0_float *)(t2))->v) = 1.0f;
        (((struct o9C_float *)(t2))->v) = 1.0f;
        t0 = *(int *)(((0x118 + a4) + 0x4));
        t2 = (((struct o118_int *)(a4))->v);
        (((struct o98_float *)(t0))->v) = 1.0f;
        (((struct o98_float *)(t2))->v) = 1.0f;
        (((struct o94_float *)(t0))->v) = 1.0f;
        (((struct o94_float *)(t2))->v) = 1.0f;
        t1 = 0x94;
    }
    return t1;
}

float FUN_0c0b9ea0(int a4)
{
    register int t0;
    register float u3;
    register float t7;
    register float u8;

    t0 = *(signed char *)((a4 + 0x1));
    FUN_0c07e79c(a4, t0, 0x1, 0xA, (t0), 0x1, 0xA);
    u3 = (((struct o0_float *)0xC0B9F9C)->v);
    (((struct o4C_float *)(a4))->v) = ((math_sin_angle16((*(int *)((a4 + 0x38))))) * u3);
    t7 = math_cos_angle16((*(int *)((a4 + 0x38))));
    (((struct o54_float *)(a4))->v) = (t7 * u3);
    u8 = (((struct oC_float *)0xC0B9F9C)->v);
    (((struct o58_float *)(a4))->v) = ((-((((struct o4C_float *)(a4))->v))) / u8);
    (((struct o60_float *)(a4))->v) = ((-((((struct o54_float *)(a4))->v))) / u8);
    (((struct o50_float *)(a4))->v) = ((((struct o10_float *)0xC0B9F9C)->v));
    (((struct o3790_float *)(a4))->v) = ((((struct o5C_float *)(a4))->v));
    (((struct o5C_float *)(a4))->v) = -1.0f;
    *(unsigned short *)((a4 + 0x1C)) = 0x16;
    return (t7 * u3);
}

int FUN_0c0b9f22(int a4)
{
    register int t0;

    FUN_0c037bf6(a4);
    if (!(((((struct o50_float *)(a4))->v)) > 0.0f)) {
        t0 = FUN_0c07ecc6(a4, 0x0, 0x0);
        if (t0 != 0) {
            return FUN_0c085cac(a4, 0x6, 0x0);
        }
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    if ((short)(t0 - 1) == 0) {
        (((struct o60_float *)(a4))->v) = 0.0f;
        (((struct o58_float *)(a4))->v) = 0.0f;
        (((struct o54_float *)(a4))->v) = 0.0f;
        (((struct o4C_float *)(a4))->v) = 0.0f;
        (((struct o5C_float *)(a4))->v) = ((((struct o3790_float *)(a4))->v));
    }
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    return math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
}
