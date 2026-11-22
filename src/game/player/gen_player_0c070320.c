/* game/player: functions 0C070320-0C0717A8, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o118_int { char p[0x118]; int v; };
struct o11C_int { char p[0x11C]; int v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o3721_uchar { char p[0x3721]; unsigned char v; };
struct o3760_int { char p[0x3760]; int v; };
struct o3768_int { char p[0x3768]; int v; };
struct o377C_int { char p[0x377C]; int v; };
struct o3780_float { char p[0x3780]; float v; };
struct o3790_float { char p[0x3790]; float v; };
struct o3794_float { char p[0x3794]; float v; };
struct o37A0_float { char p[0x37A0]; float v; };
struct o37A4_float { char p[0x37A4]; float v; };
struct o380C_float { char p[0x380C]; float v; };
struct o3810_float { char p[0x3810]; float v; };
struct o3814_float { char p[0x3814]; float v; };
struct o446_uchar { char p[0x446]; unsigned char v; };
struct o447_uchar { char p[0x447]; unsigned char v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
int FUN_0c037bf6(int);
int FUN_0c038362(int);
int FUN_0c038958(int, int);
int FUN_0c059df2(int, int);
int FUN_0c064f80(int);
int FUN_0c071094(int);
int FUN_0c07ce58(int, int);
int FUN_0c07d1fc(int);
int math_angle_between_points_xz(int, int);
int FUN_0c07d774(int);
int FUN_0c07daea(int, int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c085cac(int, int, int);
int FUN_0c085d0c(int);
int FUN_0c0c3054(int, int, int);
int FUN_0c0c30a8(int, int, int);
float math_signed_sqrt(float);
float math_cos_angle16(int);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
float FUN_0c0e2340(int);
extern int FUN_0c187798();
int FUN_0c070320(int a4);
float FUN_0c07035a(int a4, float f4, float f5, float f6, float f7);
float FUN_0c07043c(int a4, int a5, int a6, float f4, float f5, float f6, float f7);
float FUN_0c07053a(int a4, int a5, float f4);
int FUN_0c0705b8(int a4);
int FUN_0c0705e2(int a4);
int FUN_0c070642(int a4);
int FUN_0c0706d4(int a4);
int FUN_0c070718(int a4);
int FUN_0c07075c(int a4);
int FUN_0c07086a(int a4);
int FUN_0c0708a6(int a4);
int FUN_0c070980(int a4);
int FUN_0c07099c(int a4);
int FUN_0c0709e8(int a4);
int FUN_0c070c7c(int a4, float f4);
int FUN_0c070e64(int a4);
int FUN_0c070f34(int a4);
int FUN_0c070ff8(int a4);
int FUN_0c071074(int a4);
int FUN_0c071334(int a4);
int FUN_0c071450(int a4, int a5, int a6, int a7);

int FUN_0c070320(int a4)
{
    register int t0;

    t0 = FUN_0c064f80(a4);
    if (t0 == 0) {
        (((struct o37A4_float *)(a4))->v) = (((((struct o37A4_float *)(a4))->v)) + ((((struct o37A0_float *)(a4))->v)));
        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o37A4_float *)(a4))->v)));
        t0 = 0x2C;
    } else {
        (((struct o37A4_float *)(a4))->v) = 0.0f;
        t0 = 0x37A4;
    }
    return t0;
}

float FUN_0c07035a(int a4, float f4, float f5, float f6, float f7)
{
    register float u0;
    register float u1;
    register float u2;

    u0 = (((struct o3780_float *)(a4))->v);
    u1 = u0;
    if ((*(signed char *)((a4 + 0x2))) == 4) {
        u1 = (u0 + 100.0f);
    }
    u0 = u1;
    if (!(u1 > f7)) {
        u0 = f7;
    }
    u1 = u0;
    if (!(f6 > u0)) {
        u1 = f6;
    }
    u0 = (f5 * (-(f4 / f5)));
    u2 = (u0 * (-(f4 / f5)));
    (((struct o3790_float *)(a4))->v) = (((((f4 * (-(f4 / f5)))) - u2) / (1.0f + 1.0f)) + _builtin_fabsf((((((struct o2C_float *)(a4))->v)) - ((((struct o2C_float *)(((((struct o3760_int *)(a4))->v))))->v)))));
    (((struct o4_float *)((0x3790 + a4)))->v) = ((math_signed_sqrt(((((((struct o3790_float *)(a4))->v)) * (1.0f + 1.0f)) / (-f5)))) + (-(f4 / f5)));
    u0 = (((struct o3794_float *)(a4))->v);
    (((struct o4C_float *)(a4))->v) = ((math_sin_angle16((*(int *)((a4 + 0x38))))) * (u1 / u0));
    u2 = math_cos_angle16((*(int *)((a4 + 0x38))));
    (((struct o54_float *)(a4))->v) = (u2 * (u1 / u0));
    (((struct o50_float *)(a4))->v) = f4;
    (((struct o5C_float *)(a4))->v) = f5;
    (((struct o60_float *)(a4))->v) = 0.0f;
    (((struct o58_float *)(a4))->v) = 0.0f;
    return (u2 * (u1 / u0));
}


float FUN_0c07053a(int a4, int a5, float f4)
{
    int stk[1];
    register float t3;
    register int t4;

    *(unsigned char *)(((int)stk + 0)) = a5;
    (((struct o4C_float *)(a4))->v) = ((math_sin_angle16((*(int *)((a4 + 0x38))))) * f4);
    t3 = math_cos_angle16((*(int *)((a4 + 0x38))));
    (((struct o54_float *)(a4))->v) = (t3 * f4);
    t4 = *(signed char *)(((int)stk + 0));
    (((struct o58_float *)(a4))->v) = ((-((((struct o4C_float *)(a4))->v))) / (float)t4);
    (((struct o60_float *)(a4))->v) = ((-((((struct o54_float *)(a4))->v))) / (float)t4);
    (((struct o5C_float *)(a4))->v) = 0.0f;
    (((struct o50_float *)(a4))->v) = 0.0f;
    *(unsigned short *)((a4 + 0x1C)) = (*(signed char *)(((int)stk + 0)));
    return (t3 * f4);
}

int FUN_0c0705b8(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x1));
    return (FUN_0c07e79c(a4, t0, 0x1, 0xA, (t0), 0x1, 0xA));
}

int FUN_0c0705e2(int a4)
{
    register int t0;

    if (!(((((struct o50_float *)(a4))->v)) > 0.0f)) {
        t0 = FUN_0c07ecc6(a4, 0x0, 0x0);
        if (t0 != 0) {
            return FUN_0c085cac(a4, 0x6, 0x0);
        }
    }
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        return FUN_0c085d0c(a4);
    }
    return (unsigned char)t0;
}

int FUN_0c070642(int a4)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = *(signed char *)((a4 + 0x2));
    if ((t0 != 2) && (t0 != 3)) {
        t0 = *(signed char *)((a4 + 0x1));
        t1 = 0x8;
        t2 = (t0);
        t3 = t0;
        t0 = 0x8;
    } else {
        t3 = *(signed char *)((a4 + 0x1));
        t1 = 0x9;
        t2 = (t3);
        t0 = 0x9;
    }
    return (FUN_0c07e79c(a4, t3, 0x1, t0, t2, 0x1, t1));
}

int FUN_0c0706d4(int a4)
{
    register int t2;

    if (((((struct o3768_int *)(a4))->v)) != 0) {
        t2 = FUN_0c0c30a8(((((struct o3768_int *)(a4))->v)), 0x2, a4);
        if (t2 != 0) {
            FUN_0c0c3054(((((struct o3768_int *)(a4))->v)), (*(signed char *)((a4 + 0x1))), 0x2);
            FUN_0c059df2((*(signed char *)((a4 + 0x1))), 0x1D);
            return 0x1;
        }
        return 0x0;
    }
    return 0x0;
}

int FUN_0c070718(int a4)
{
    register int t2;

    if (((((struct o3768_int *)(a4))->v)) != 0) {
        t2 = FUN_0c0c30a8(((((struct o3768_int *)(a4))->v)), 0x2, a4);
        if (t2 != 0) {
            FUN_0c0c3054(((((struct o3768_int *)(a4))->v)), (*(signed char *)((a4 + 0x1))), 0x3);
            FUN_0c059df2((*(signed char *)((a4 + 0x1))), 0x1D);
            return 0x1;
        }
        return 0x0;
    }
    return 0x0;
}

int FUN_0c07075c(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    if (((((struct o3768_int *)(a4))->v)) == 0) {
        t0 = *(signed char *)((a4 + 0x1));
        return (FUN_0c07e79c(a4, t0, 0x1, 0xC, (t0), 0x1, 0xC));
    }
    FUN_0c07ce58(a4, 0xC25928C);
    t0 = FUN_0c07d774(a4);
    *(unsigned int *)((a4 + 0x38)) = t0;
    t1 = math_angle_between_points_xz((a4 + 0x28), (((((struct o3768_int *)(a4))->v)) + 0x28));
    t2 = (unsigned short)(t0 - t1);
    if (((unsigned short)(t0 - t1) & 0x8000) != 0) {
        t2 = ((unsigned short)(t0 - t1) | 0xFFFF0000);
    }
    if (((int)t2 < (int)0x4000) && ((int)t2 > (int)0xFFFFC000)) {
        t0 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t0, 0x1, 0xC, (t0), 0x1, 0xC);
        (((struct o16_uchar *)(a4))->v) = 0x0;
    } else {
        *(unsigned int *)((a4 + 0x38)) = (unsigned short)((*(int *)((a4 + 0x38))) + 0x8000);
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x2, 0x20, 0xFFFFFFFF, 0x2, 0x20);
        (((struct o446_uchar *)(a4))->v) = 0x1;
        (((struct o447_uchar *)(a4))->v) = 0x1;
        (((struct o16_uchar *)(a4))->v) = 0x1;
    }
    return FUN_0c038958(a4, 0x2C);
}

int FUN_0c07086a(int a4)
{
    register int t10;

    if (((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v)) == (*(float *)0xC070920)) {
        FUN_0c0706d4(a4);
    }
    t10 = FUN_0c037bf6(a4);
    if ((unsigned char)t10 != 0) {
        (((struct o3721_uchar *)(a4))->v) = 0x0;
        return FUN_0c085d0c(a4);
    }
    return (unsigned char)t10;
}

int FUN_0c0708a6(int a4)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x17));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        if (((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v)) == (*(float *)0xC070A84)) {
            FUN_0c070718(a4);
        }
        math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
        t0 = FUN_0c037bf6(a4);
        if ((unsigned char)t0 != 0) {
            return FUN_0c085d0c(a4);
        }
        return (unsigned char)t0;
    }
    t0 = FUN_0c037bf6(a4);
    t1 = (unsigned char)t0;
    if ((unsigned char)t0 != 0) {
        t0 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t0, 0x2, 0x1, (t0), 0x2, 0x1);
        (((struct o4C_float *)(a4))->v) = ((math_sin_angle16((*(int *)((a4 + 0x38))))) * 4.08163261f);
        (((struct o54_float *)(a4))->v) = ((math_cos_angle16((*(int *)((a4 + 0x38))))) * 4.08163261f);
        (((struct o50_float *)(a4))->v) = 0.0f;
        (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
        t1 = 0x17;
    }
    return t1;
}

int FUN_0c070980(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return FUN_0c0708a6(a4);
    }
    return FUN_0c07086a(a4);
}

int FUN_0c07099c(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x1));
    FUN_0c07e79c(a4, t0, 0x2, 0x3, (t0), 0x2, 0x3);
    (((struct o60_float *)(a4))->v) = 0.0f;
    (((struct o58_float *)(a4))->v) = 0.0f;
    (((struct o54_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    (((struct o50_float *)(a4))->v) = ((((struct o0_float *)0xC070A98)->v));
    (((struct o5C_float *)(a4))->v) = ((((struct o4_float *)0xC070A98)->v));
    return 0x5C;
}

int FUN_0c0709e8(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    t0 = FUN_0c037bf6(a4);
    t1 = (unsigned char)t0;
    if ((unsigned char)t0 != 0) {
        (((struct o50_float *)(a4))->v) = -20.0f;
        (((struct o5C_float *)(a4))->v) = -2.0f;
        t0 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t0, 0x2, 0x4, (t0), 0x2, 0x4);
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
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t1 = 0x15;
    }
    return t1;
}


int FUN_0c070e64(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = FUN_0c037bf6(a4);
    t1 = (unsigned char)t0;
    if ((unsigned char)t0 != 0) {
        (((struct o4C_float *)(a4))->v) = ((math_sin_angle16((*(int *)((a4 + 0x38))))) * 1.0f);
        (((struct o54_float *)(a4))->v) = ((math_cos_angle16((*(int *)((a4 + 0x38))))) * 1.0f);
        (((struct o60_float *)(a4))->v) = 0.0f;
        (((struct o58_float *)(a4))->v) = 0.0f;
        (((struct o50_float *)(a4))->v) = 20.0f;
        (((struct o5C_float *)(a4))->v) = -1.5f;
        t0 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t0, 0x0, 0xB, (t0), 0x0, 0xB);
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
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t1 = 0x15;
    }
    return t1;
}


int FUN_0c070ff8(int a4)
{
    register int t0;

    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        return FUN_0c085d0c(a4);
    }
    return (unsigned char)t0;
}

int FUN_0c071074(int a4)
{
    return (FUN_0c07e79c(a4, 0xFFFFFFFF, 0x2, 0x3, 0xFFFFFFFF, 0x2, 0x3));
}

int FUN_0c071334(int a4)
{
    register int t0;
    register int t1;

    t0 = FUN_0c07ecc6(a4, 0x0, 0x0);
    if (t0 == 0) {
        t1 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
        if ((short)(t1 - 1) == 0) {
            if (t0 != 1) {
                return FUN_0c085cac(a4, 0x6, 0x0);
            }
            t1 = *(signed char *)((a4 + 0x1));
            FUN_0c07e79c(a4, t1, 0x2, 0x10, (t1), 0x2, 0x10);
            t1 = (((struct o118_int *)(a4))->v);
            (((struct o98_float *)(t1))->v) = 5.0f;
            (((struct o94_float *)(t1))->v) = 5.0f;
            t1 = (((struct o11C_int *)(a4))->v);
            (((struct o98_float *)(t1))->v) = 5.0f;
            (((struct o94_float *)(t1))->v) = 5.0f;
            (((struct o50_float *)(a4))->v) = 0.0f;
            (((struct o4C_float *)(a4))->v) = ((math_sin_angle16((*(int *)((a4 + 0x38))))) * 5.0f);
            (((struct o54_float *)(a4))->v) = ((math_cos_angle16((*(int *)((a4 + 0x38))))) * 5.0f);
            (((struct o15_uchar *)(a4))->v) = 0x2;
            return 0x15;
        }
        if ((*(short *)((a4 + 0x1E))) != 0) {
            *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) - 1);
        } else {
            (((struct o60_float *)(a4))->v) = 0.0f;
            (((struct o58_float *)(a4))->v) = 0.0f;
            (((struct o54_float *)(a4))->v) = 0.0f;
            (((struct o4C_float *)(a4))->v) = 0.0f;
        }
        math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
        math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
        return FUN_0c037bf6(a4);
    }
    if (t0 != 1) {
        return FUN_0c085cac(a4, 0x6, 0x0);
    }
    t0 = *(signed char *)((a4 + 0x1));
    FUN_0c07e79c(a4, t0, 0x2, 0x10, (t0), 0x2, 0x10);
    t0 = (((struct o118_int *)(a4))->v);
    (((struct o98_float *)(t0))->v) = 5.0f;
    (((struct o94_float *)(t0))->v) = 5.0f;
    t0 = (((struct o11C_int *)(a4))->v);
    (((struct o98_float *)(t0))->v) = 5.0f;
    (((struct o94_float *)(t0))->v) = 5.0f;
    (((struct o50_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = ((math_sin_angle16((*(int *)((a4 + 0x38))))) * 5.0f);
    (((struct o54_float *)(a4))->v) = ((math_cos_angle16((*(int *)((a4 + 0x38))))) * 5.0f);
    (((struct o15_uchar *)(a4))->v) = 0x2;
    return 0x15;
}

int FUN_0c071450(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    return t0;
                }
                return FUN_0c071334(a4);
            }
            return ((int (*)(int, int, int, int))(0xC071308))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC071190))(a4, a5, a6, a7);
    }
    return FUN_0c071094(a4);
}
