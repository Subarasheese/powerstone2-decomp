/* Straight-line functions with calls and guards (batch gen_dj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o104_int { char p[0x104]; int v; };
struct o118_int { char p[0x118]; int v; };
struct o12E_short { char p[0x12E]; short v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o1B_uchar { char p[0x1B]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o3728_uchar { char p[0x3728]; unsigned char v; };
struct o372A_uchar { char p[0x372A]; unsigned char v; };
struct o3749_uchar { char p[0x3749]; unsigned char v; };
struct o374B_uchar { char p[0x374B]; unsigned char v; };
struct o376C_int { char p[0x376C]; int v; };
struct o37B8_float { char p[0x37B8]; float v; };
struct o3830_ushort { char p[0x3830]; unsigned short v; };
struct o3850_short { char p[0x3850]; short v; };
struct o4_float { char p[0x4]; float v; };
struct o40_int { char p[0x40]; int v; };
struct o42C_short { char p[0x42C]; short v; };
struct o48_int { char p[0x48]; int v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c037bf6(int, int, int);
int FUN_0c038362(int);
int FUN_0c05253c(int, int, int, int, int, int);
int FUN_0c05261c(int);
int FUN_0c059e60(int, int);
int FUN_0c070320(int);
int FUN_0c07a6aa(int);
int FUN_0c07d030(int, int);
int FUN_0c07db58(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c07f610(int);
int FUN_0c080320(int, float);
int FUN_0c081dfc(int);
int FUN_0c085cac(int, int, int);
int FUN_0c085d0c(int);
int FUN_0c085f66(int);
int FUN_0c08c10c(int, int);
int FUN_0c08d170(int);
int FUN_0c08e382(int);
int FUN_0c0c2380(int, int);
int FUN_0c0c2d56(int, int, int);
int FUN_0c0c3010(int, int, int);
int FUN_0c123010(int, int);
int FUN_0c124da6(int, int);
int FUN_0c125254(int, int);
int FUN_0c130e70(int, int, int);
int FUN_0c150be8(int, int);
int FUN_0c187798(void);
float math_cos_angle16(int);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int thunk_FUN_0c058310(int, int);
int FUN_0c097860(int a4, int a5, int a6);
int FUN_0c089f4e(int a4, int a5, int a6);
int FUN_0c0ad470(int a4, int a5, int a6);
int FUN_0c08901e(int a4, int a5, int a6);
int FUN_0c0766f2(int a4, int a5, int a6);
int FUN_0c08c482(int a4, int a5, int a6);
int FUN_0c09d0fa(int a4, int a5, int a6);
int FUN_0c0881b0(int a4, int a5, int a6);
int FUN_0c09d444(int a4, int a5, int a6);
int FUN_0c0a932c(int a4, int a5, int a6);
int FUN_0c09734c(int a4, int a5, int a6);
int FUN_0c08dafc(int a4, int a5, int a6);
int FUN_0c0a1d50(int a4, int a5, int a6);
int FUN_0c08d658(int a4, int a5, int a6);
int FUN_0c08d360(int a4, int a5, int a6);
int FUN_0c0a027c(int a4, int a5, int a6);

int FUN_0c097860(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;

    FUN_0c037bf6(a4, a5, a6);
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    t0 = (((struct o20_short *)(a4))->v);
    (((struct o20_ushort *)(a4))->v) = (t0 - 1);
    if ((int)(short)(t0 - 1) < 0) {
        (((struct o3749_uchar *)(a4))->v) = 0x1;
    }
    t0 = *(short *)((a4 + 0x1E));
    *(unsigned short *)((a4 + 0x1E)) = (t0 - 1);
    if ((int)(short)(t0 - 1) < 0) {
        *(unsigned short *)((a4 + 0x1E)) = 0x0;
    }
    *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + (int)(((float)(*(short *)((a4 + 0x1E))) * ((((struct o0_float *)0xC097994)->v))) / ((((struct o4_float *)0xC097994)->v))));
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    t1 = (short)(t0 - 1);
    if ((short)(t0 - 1) == 0) {
        t0 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t0, 0x1, 0x19, (t0), 0x1, 0x19);
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
        (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
        (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
        t1 = 0x17;
    }
    return t1;
}

int FUN_0c089f4e(int a4, int a5, int a6)
{
    int t0;
    register int t1;

    t1 = FUN_0c037bf6(a4, a5, a6);
    if ((unsigned char)t1 != 0) {
        t1 = FUN_0c085f66(a4);
        if (t1 == 0) {
            FUN_0c081dfc(a4);
        } else {
            FUN_0c0c2d56(((((struct o376C_int *)(a4))->v)), 0x4, (*(signed char *)((a4 + 0x1))));
        }
        return FUN_0c085d0c(a4);
    }
    if (!((*(float *)0xC08A03C) > ((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v))) && (t0 = (((struct o22_short *)(a4))->v), t0 == 0)) {
        (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) + 0x1);
        if ((*(signed char *)((a4 + 0x131))) != 0) {
            t0 = FUN_0c07f610(a4);
            if (t0 != 0) {
                (((struct o372A_uchar *)(a4))->v) = (t0 - 1);
                (((struct o3728_uchar *)(a4))->v) = 0x0;
                return FUN_0c085cac(a4, 0x21, 0x3);
            }
            return FUN_0c038362(a4);
        }
        return FUN_0c038362(a4);
    }
    return FUN_0c038362(a4);
}

int FUN_0c0ad470(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;

    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) - ((((struct o50_float *)(a4))->v)));
    (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o54_float *)(a4))->v)));
    FUN_0c037bf6(a4, a5, a6);
    t0 = FUN_0c07ecc6(a4, 0x0, 0x0);
    if (t0 == 0) {
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        t1 = (short)(t0 - 1);
        if ((short)(t0 - 1) == 0) {
            if ((*(short *)((a4 + 0x1C))) != 0) {
                *(unsigned int *)((a4 + 0x34)) = 0x0;
                t0 = *(signed char *)((a4 + 0x1));
                FUN_0c07e79c(a4, t0, 0x1, 0x12, (t0), 0x1, 0x12);
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
                (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
            } else {
                (((struct o17_uchar *)(a4))->v) = 0x8;
            }
            t1 = 0x17;
        }
        t0 = t1;
    } else {
        if ((*(short *)((a4 + 0x1C))) != 0) {
            *(unsigned int *)((a4 + 0x34)) = 0x0;
            t1 = *(signed char *)((a4 + 0x1));
            FUN_0c07e79c(a4, t1, 0x1, 0x12, (t1), 0x1, 0x12);
            t1 = *(int *)(((0x118 + a4) + 0x4));
            t2 = (((struct o118_int *)(a4))->v);
            (((struct oA0_float *)(t1))->v) = 1.0f;
            (((struct o9C_float *)(t1))->v) = 1.0f;
            (((struct oA0_float *)(t2))->v) = 1.0f;
            (((struct o9C_float *)(t2))->v) = 1.0f;
            t1 = *(int *)(((0x118 + a4) + 0x4));
            t2 = (((struct o118_int *)(a4))->v);
            (((struct o98_float *)(t1))->v) = 1.0f;
            (((struct o98_float *)(t2))->v) = 1.0f;
            (((struct o94_float *)(t1))->v) = 1.0f;
            (((struct o94_float *)(t2))->v) = 1.0f;
            (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
        } else {
            (((struct o17_uchar *)(a4))->v) = 0x8;
        }
        t0 = 0x17;
    }
    return t0;
}

int FUN_0c08901e(int a4, int a5, int a6)
{
    int stk[2];
    register int t0;
    register int t5;
    int t15;

    t0 = FUN_0c037bf6(a4, a5, a6);
    if ((unsigned char)t0 != 0) {
        t5 = FUN_0c085f66(a4);
        if (t5 == 0) {
            FUN_0c081dfc(a4);
        } else {
            FUN_0c0c2d56(((((struct o376C_int *)(a4))->v)), 0x4, (*(signed char *)((a4 + 0x1))));
        }
        return FUN_0c085d0c(a4);
    }
    if (!((*(float *)0xC0891A4) > ((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v))) && (t15 = (((struct o22_short *)(a4))->v), t15 == 0)) {
        (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) + 0x1);
        FUN_0c0c3010(((((struct o376C_int *)(a4))->v)), (*(signed char *)((a4 + 0x1))), 0x0);
        FUN_0c0c2380(a4, ((((struct o376C_int *)(a4))->v)));
    }
    return FUN_0c038362(a4);
}

int FUN_0c0766f2(int a4, int a5, int a6)
{
    register int t0;

    FUN_0c037bf6(a4, a5, a6);
    t0 = FUN_0c07ecc6(a4, 0x0, 0x0);
    if (t0 == 2) {
        return FUN_0c07a6aa(a4);
    }
    if (0.0f > ((((struct o50_float *)(a4))->v))) {
        t0 = FUN_0c07ecc6(a4, 0x0, 0x0);
        if (t0 != 0) {
            FUN_0c05253c(0x3, 0x1, 0x14, 0xA, 0x14, 0x0);
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
            FUN_0c07db58(a4);
            FUN_0c08e382(a4);
            if ((*(signed char *)((a4 + 0x135))) != 2) {
                FUN_0c150be8((a4 + 0x28), (*(int *)((a4 + 0x38))));
            }
        }
    }
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    return math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
}

int FUN_0c08c482(int a4, int a5, int a6)
{
    int t0;
    register int t1;

    t1 = FUN_0c037bf6(a4, a5, a6);
    if ((unsigned char)t1 != 0) {
        t1 = FUN_0c085f66(a4);
        if (t1 == 0) {
            FUN_0c081dfc(a4);
        } else {
            FUN_0c0c2d56(((((struct o376C_int *)(a4))->v)), 0x4, (*(signed char *)((a4 + 0x1))));
        }
        return FUN_0c085d0c(a4);
    }
    if (!((1.0f + 1.0f) > ((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v))) && (t0 = (((struct o20_short *)(a4))->v), t0 == 0)) {
        FUN_0c08c10c(a4, 0x24);
        (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) + 0x1);
    }
    return FUN_0c038362(a4);
}

int FUN_0c09d0fa(int a4, int a5, int a6)
{
    register int t0;

    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    if ((int)(short)(t0 - 1) <= 0) {
        t0 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t0, 0x1, 0x14, (t0), 0x1, 0x14);
        (((struct o4C_float *)(a4))->v) = ((math_cos_angle16(((-(*(int *)((a4 + 0x38)))) + 0x14000))) * 20.0f);
        (((struct o50_float *)(a4))->v) = -20.0f;
        (((struct o5C_float *)(a4))->v) = -0.0f;
        (((struct o54_float *)(a4))->v) = ((math_sin_angle16(((-(*(int *)((a4 + 0x38)))) + 0x14000))) * 20.0f);
        (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
        (((struct o1B_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x1B))) + 0x1);
        *(unsigned short *)((a4 + 0x1E)) = 0x2;
        (((struct o20_ushort *)(a4))->v) = 0x0;
        (((struct o22_ushort *)(a4))->v) = 0x5;
        return 0x22;
    }
    FUN_0c037bf6(a4, a5, a6);
    return FUN_0c038362(a4);
}

int FUN_0c0881b0(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register float u0;

    FUN_0c037bf6(a4, a5, a6);
    if (((((struct o20_short *)(a4))->v)) == 0) {
        t1 = *(signed char *)((a4 + 0x371A));
        if (((t1 != 0) && (((signed char)t1 == 0) || (u0 = (((struct o37B8_float *)(a4))->v), u0 == 0.0f))) || (t0 = (((struct o42C_short *)(a4))->v), ((unsigned short)t0 & 0x280) != 0)) {
        } else {
            FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0x50, 0xFFFFFFFF, 0x3, 0x50);
            FUN_0c0c2d56(((((struct o376C_int *)(a4))->v)), 0x4, (*(signed char *)((a4 + 0x1))));
            (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
        }
    } else {
        (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) - 1);
    }
    t0 = FUN_0c07ecc6(a4, 0x0, 0x0);
    if (t0 != 0) {
        if ((*(signed char *)((a4 + 0x371D))) == 2) {
            FUN_0c085cac(a4, 0xD, 0x0);
        }
        return FUN_0c070320(a4);
    }
    return FUN_0c085d0c(a4);
}

int FUN_0c09d444(int a4, int a5, int a6)
{
    register int t0;
    register float u0;

    t0 = FUN_0c037bf6(a4, a5, a6);
    if ((unsigned char)t0 != 0) {
        FUN_0c038362(a4);
        FUN_0c07d030(a4, 0x2);
        t0 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t0, 0x1, 0x1C, (t0), 0x1, 0x1C);
        u0 = (((struct o0_float *)0xC09D588)->v);
        (((struct o4C_float *)(a4))->v) = ((math_cos_angle16(((-(*(int *)((a4 + 0x38)))) + 0x14000))) * u0);
        (((struct o50_float *)(a4))->v) = ((((struct oC_float *)0xC09D588)->v));
        (((struct o5C_float *)(a4))->v) = -1.0f;
        (((struct o54_float *)(a4))->v) = ((math_sin_angle16(((-(*(int *)((a4 + 0x38)))) + 0x14000))) * u0);
        *(unsigned short *)((a4 + 0x1C)) = 0xF;
        (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
        (((struct o1B_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x1B))) + 0x1);
        return 0x1B;
    }
    return FUN_0c038362(a4);
}

int FUN_0c0a932c(int a4, int a5, int a6)
{
    register int t0;
    register int t1;

    FUN_0c037bf6(a4, a5, a6);
    if (!(((((struct o50_float *)(a4))->v)) > 0.0f)) {
        t0 = FUN_0c07ecc6(a4, 0x0, 0x0);
        if (t0 != 0) {
            t0 = *(signed char *)((a4 + 0x1));
            FUN_0c07e79c(a4, t0, 0x2, 0x4, (t0), 0x2, 0x4);
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
            FUN_0c05261c((*(int *)0xC241C20));
            FUN_0c07db58(a4);
        }
    }
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    return math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
}

int FUN_0c09734c(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;

    FUN_0c037bf6(a4, a5, a6);
    t0 = (((struct o104_int *)(a4))->v);
    (((struct o88_float *)(t0))->v) = (((((struct o88_float *)(t0))->v)) - 1.0f);
    (((struct o84_float *)(((((struct o48_int *)((0xC4 + a4)))->v))))->v) = (1.0f / ((((struct o88_float *)(((((struct o40_int *)((0xC4 + a4)))->v))))->v)));
    (((struct o88_float *)(((((struct o48_int *)((0xC4 + a4)))->v))))->v) = (1.0f / ((((struct o88_float *)(((((struct o40_int *)((0xC4 + a4)))->v))))->v)));
    (((struct o8C_float *)(((((struct o48_int *)((0xC4 + a4)))->v))))->v) = (1.0f / ((((struct o88_float *)(((((struct o40_int *)((0xC4 + a4)))->v))))->v)));
    t0 = *(short *)((a4 + 0x1E));
    if (t0 != 0) {
        t1 = t0;
        if ((t0 == 1) || (t0 == 2)) {
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
            t2 = (short)((t0 + 0x1) - 1);
            if ((short)((t0 + 0x1) - 1) == 28) {
                (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                t2 = 0x17;
            }
            t1 = t2;
        }
        t0 = t1;
    } else {
        t1 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t1 + 0x1);
        t2 = (short)((t1 + 0x1) - 1);
        if ((short)((t1 + 0x1) - 1) != 28) {
        } else {
            (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
            t2 = 0x17;
        }
        t0 = t2;
    }
    return t0;
}

int FUN_0c08dafc(int a4, int a5, int a6)
{
    register int t0;

    t0 = FUN_0c037bf6(a4, a5, a6);
    if ((unsigned char)t0 != 0) {
        return FUN_0c085d0c(a4);
    }
    if (((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v)) == 75.0f) {
        t0 = 0x2;
        if ((*(signed char *)((a4 + 0x375A))) == 2) {
            t0 = 0x1;
        }
        FUN_0c123010(a4, t0);
        FUN_0c123010(a4, 0x3);
        if ((*(signed char *)((a4 + 0x375A))) == 2) {
            FUN_0c123010(a4, 0x4);
        }
        return FUN_0c07d030(a4, 0x2);
    }
    return 0x8C;
}

int FUN_0c0a1d50(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    FUN_0c037bf6(a4, a5, a6);
    FUN_0c038362(a4);
    if (((((struct o20_short *)(a4))->v)) != 0) {
        t0 = *(int *)((a4 + 0x38));
        t1 = (((struct o3850_short *)(a4))->v);
        t2 = *(int *)((a4 + 0x38));
        t3 = (unsigned short)(t1 - t0);
        if ((0x8000 & (unsigned short)(t1 - t0)) != 0) {
            t3 = ((unsigned short)(t1 - t0) | 0xFFFF0000);
        }
        *(unsigned int *)((a4 + 0x38)) = (unsigned short)(t2 + ((int)((int)t3 / (int)((((struct o20_short *)(a4))->v)))));
        (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) - 1);
    }
    if ((int)(*(short *)((a4 + 0x1E))) < (int)0x78) {
        *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
    }
    t0 = *(short *)((a4 + 0x1E));
    t1 = t0;
    if ((int)t0 > (int)0x9) {
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t0 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t0, 0x1, 0xE, (t0), 0x1, 0xE);
        *(unsigned short *)((a4 + 0x1E)) = 0x0;
        t1 = 0x0;
    }
    return t1;
}



int FUN_0c0a027c(int a4, int a5, int a6)
{
    register int t0;

    t0 = FUN_0c037bf6(a4, a5, a6);
    if ((unsigned char)t0 != 0) {
        FUN_0c130e70(a4, (a4 + 0x28), 0x0);
        FUN_0c130e70(a4, (a4 + 0x28), 0x1);
        FUN_0c130e70(a4, (a4 + 0x28), 0x2);
        FUN_0c059e60(a4, 0x22);
        t0 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t0, 0x1, 0x18, (t0), 0x1, 0x18);
        FUN_0c080320(a4, 1.20000005f);
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t0 = 0x15;
    } else {
        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
        t0 = 0x2C;
    }
    return t0;
}



