/* Straight-line functions with calls and guards (batch gen_ja): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o131_uchar { char p[0x131]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17C_float { char p[0x17C]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o3728_uchar { char p[0x3728]; unsigned char v; };
struct o372A_uchar { char p[0x372A]; unsigned char v; };
struct o374B_uchar { char p[0x374B]; unsigned char v; };
struct o3760_int { char p[0x3760]; int v; };
struct o3780_float { char p[0x3780]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
struct oE0_int { char p[0xE0]; int v; };
int FUN_0c037bf6(int, int, int);
int FUN_0c038362(int);
int FUN_0c05258e(int, int, int, int, int);
int FUN_0c059f78(int, int);
int FUN_0c064f80(int);
int FUN_0c07043c(int, float, float, float, float);
int FUN_0c07ce58(int, int);
int FUN_0c07d1fc(int);
int FUN_0c07d774(int);
int FUN_0c07daea(int, int, int);
int FUN_0c07db58(int, int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c07f56a(int);
int FUN_0c085cac(int, int, int);
int FUN_0c085d0c(int);
int FUN_0c09f200(int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int FUN_0c0933c8(int a4, int a5, int a6);
int FUN_0c09c280(int a4, int a5, int a6);
int FUN_0c092dbc(int a4, int a5, int a6);
int FUN_0c093204(int a4, int a5, int a6);
int FUN_0c09b534(int a4, int a5, int a6);
int FUN_0c092f80(int a4, int a5, int a6);
int FUN_0c09f2e8(int a4, int a5, int a6);
int FUN_0c09c0b4(int a4, int a5, int a6);
int FUN_0c09c432(int a4, int a5, int a6);
int FUN_0c092d12(int a4, int a5, int a6);
int FUN_0c093166(int a4, int a5, int a6);
int FUN_0c0930e4(int a4, int a5, int a6);
int FUN_0c09c1a4(int a4, int a5, int a6);
int FUN_0c095cf8(int a4, int a5, int a6);
int FUN_0c09c21a(int a4, int a5, int a6);
int FUN_0c09692e(int a4, int a5, int a6);
int FUN_0c0935bc(int a4, int a5, int a6);
int FUN_0c09c4e0(int a4, int a5, int a6);

int FUN_0c0933c8(int a4, int a5, int a6)
{
    register int t1;
    register int t2;
    register int t4;
    register float u0;
    register float u1;
    float u2;

    FUN_0c037bf6(a4, a5, a6);
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    t1 = FUN_0c07ecc6(a4, 0x0, 0x0);
    if (t1 != 0) {
        t1 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t1, 0x2, 0x13, (t1), 0x2, 0x13);
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
        FUN_0c059f78((*(signed char *)((a4 + 0x1))), 0x1);
        (((struct o16_uchar *)(a4))->v) = 0x8;
        t1 = 0x16;
    } else {
        t2 = FUN_0c064f80(((((struct o3760_int *)(a4))->v)));
        if ((t2 != 0) && ((t1 = (((struct o3760_int *)(a4))->v), u0 = (((struct o2C_float *)(a4))->v), u1 = (((struct o2C_float *)(t1))->v), u0 > u1) && (u2 = (((struct o3780_float *)(a4))->v), 200.0f > u2))) {
            (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((((struct o28_float *)(((((struct o3760_int *)(a4))->v))))->v)) - ((((struct o28_float *)(a4))->v))) / 6.0f));
            (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((((struct o30_float *)(((((struct o3760_int *)(a4))->v))))->v)) - ((((struct o30_float *)(a4))->v))) / 6.0f));
        }
        t1 = 0x131;
        if ((*(signed char *)((a4 + 0x131))) != 0) {
            (((struct o131_uchar *)(a4))->v) = 0x0;
            t2 = FUN_0c07d1fc(a4);
            t1 = t2;
            if (t2 != 0) {
                t2 = *(signed char *)((a4 + 0x1));
                FUN_0c07e79c(a4, t2, 0x2, 0x6, (t2), 0x2, 0x6);
                t2 = *(int *)(((0x118 + a4) + 0x4));
                t4 = (((struct o118_int *)(a4))->v);
                (((struct oA0_float *)(t2))->v) = 1.0f;
                (((struct o9C_float *)(t2))->v) = 1.0f;
                (((struct oA0_float *)(t4))->v) = 1.0f;
                (((struct o9C_float *)(t4))->v) = 1.0f;
                t2 = *(int *)(((0x118 + a4) + 0x4));
                t4 = (((struct o118_int *)(a4))->v);
                (((struct o98_float *)(t2))->v) = 1.0f;
                (((struct o98_float *)(t4))->v) = 1.0f;
                (((struct o94_float *)(t2))->v) = 1.0f;
                (((struct o94_float *)(t4))->v) = 1.0f;
                (((struct o4C_float *)(a4))->v) = ((math_cos_angle16(((-(*(int *)((a4 + 0x38)))) + 0x14000))) * 6.0f);
                (((struct o54_float *)(a4))->v) = ((math_sin_angle16(((-(*(int *)((a4 + 0x38)))) + 0x14000))) * 6.0f);
                (((struct o60_float *)(a4))->v) = 0.0f;
                (((struct o58_float *)(a4))->v) = 0.0f;
                (((struct o50_float *)(a4))->v) = 20.0f;
                (((struct o5C_float *)(a4))->v) = -1.5f;
                (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                t1 = 0x16;
            }
        }
    }
    return t1;
}

int FUN_0c09c280(int a4, int a5, int a6)
{
    int t0;
    register int t1;

    FUN_0c037bf6(a4, a5, a6);
    if ((*(signed char *)((a4 + 0x131))) != 0) {
        t0 = FUN_0c07d1fc(a4);
        if (t0 != 0) {
            t0 = *(signed char *)((a4 + 0x1));
            FUN_0c07e79c(a4, t0, 0x2, 0x11, (t0), 0x2, 0x11);
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
            (((struct o54_float *)(a4))->v) = (-((math_cos_angle16((*(int *)((a4 + 0x38))))) * 5.0f));
            (((struct o4C_float *)(a4))->v) = (-((math_sin_angle16((*(int *)((a4 + 0x38))))) * 5.0f));
            (((struct o60_float *)(a4))->v) = 0.0f;
            (((struct o58_float *)(a4))->v) = 0.0f;
            (((struct o50_float *)(a4))->v) = 30.0f;
            (((struct o5C_float *)(a4))->v) = -2.0f;
            (((struct o16_uchar *)(a4))->v) = 0x4;
            return 0x16;
        }
    }
    t0 = FUN_0c07ecc6(a4, 0x0, 0x0);
    if (!(((((struct o50_float *)(a4))->v)) > 0.0f) && (t0 != 0)) {
        if (t0 == 2) {
            return FUN_0c085cac(a4, 0x6, 0x0);
        }
        t0 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t0, 0x2, 0xF, (t0), 0x2, 0xF);
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
        (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) / (1.0f + 1.0f));
        (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) / (1.0f + 1.0f));
        (((struct o60_float *)(a4))->v) = 0.0f;
        (((struct o58_float *)(a4))->v) = 0.0f;
        (((struct o50_float *)(a4))->v) = 0.0f;
        (((struct o5C_float *)(a4))->v) = 0.0f;
        (((struct o16_uchar *)(a4))->v) = 0x5;
        return 0x16;
    }
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    return math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
}

int FUN_0c092dbc(int a4, int a5, int a6)
{
    register int t1;
    register int t2;
    register int t4;
    register float u0;
    register float u1;
    float u2;

    if ((int)(*(short *)((a4 + 0x1C))) > 0) {
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
        FUN_0c037bf6(a4, a5, a6);
    }
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    t1 = FUN_0c07ecc6(a4, 0x0, 0x0);
    if (t1 != 0) {
        t1 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t1, 0x2, 0x13, (t1), 0x2, 0x13);
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
        FUN_0c059f78((*(signed char *)((a4 + 0x1))), 0x1);
        (((struct o16_uchar *)(a4))->v) = 0x8;
        t1 = 0x16;
    } else {
        t2 = FUN_0c064f80(((((struct o3760_int *)(a4))->v)));
        if ((t2 != 0) && ((t1 = (((struct o3760_int *)(a4))->v), u0 = (((struct o2C_float *)(a4))->v), u1 = (((struct o2C_float *)(t1))->v), u0 > u1) && (u2 = (((struct o3780_float *)(a4))->v), 200.0f > u2))) {
            (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((((struct o28_float *)(((((struct o3760_int *)(a4))->v))))->v)) - ((((struct o28_float *)(a4))->v))) / 6.0f));
            (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((((struct o30_float *)(((((struct o3760_int *)(a4))->v))))->v)) - ((((struct o30_float *)(a4))->v))) / 6.0f));
        }
        t1 = 0x131;
        if ((*(signed char *)((a4 + 0x131))) != 0) {
            t2 = FUN_0c07d1fc(a4);
            t1 = t2;
            if (t2 != 0) {
                t2 = *(signed char *)((a4 + 0x1));
                FUN_0c07e79c(a4, t2, 0x2, 0x5, (t2), 0x2, 0x5);
                t2 = *(int *)(((0x118 + a4) + 0x4));
                t4 = (((struct o118_int *)(a4))->v);
                (((struct oA0_float *)(t2))->v) = 1.0f;
                (((struct o9C_float *)(t2))->v) = 1.0f;
                (((struct oA0_float *)(t4))->v) = 1.0f;
                (((struct o9C_float *)(t4))->v) = 1.0f;
                t2 = *(int *)(((0x118 + a4) + 0x4));
                t4 = (((struct o118_int *)(a4))->v);
                (((struct o98_float *)(t2))->v) = 1.0f;
                (((struct o98_float *)(t4))->v) = 1.0f;
                (((struct o94_float *)(t2))->v) = 1.0f;
                (((struct o94_float *)(t4))->v) = 1.0f;
                (((struct o50_float *)(a4))->v) = 4.0f;
                (((struct o5C_float *)(a4))->v) = -1.0f;
                (((struct o131_uchar *)(a4))->v) = 0x0;
                (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                t1 = 0x16;
            }
        }
    }
    return t1;
}

int FUN_0c093204(int a4, int a5, int a6)
{
    register int t1;
    register int t2;
    register int t4;
    register float u0;
    register float u1;
    float u2;

    if ((int)(*(short *)((a4 + 0x1C))) > 0) {
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
        FUN_0c037bf6(a4, a5, a6);
    }
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    t1 = FUN_0c07ecc6(a4, 0x0, 0x0);
    if (t1 != 0) {
        t1 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t1, 0x2, 0x13, (t1), 0x2, 0x13);
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
        FUN_0c059f78((*(signed char *)((a4 + 0x1))), 0x1);
        (((struct o16_uchar *)(a4))->v) = 0x8;
        t1 = 0x16;
    } else {
        t2 = FUN_0c064f80(((((struct o3760_int *)(a4))->v)));
        if ((t2 != 0) && ((t1 = (((struct o3760_int *)(a4))->v), u0 = (((struct o2C_float *)(a4))->v), u1 = (((struct o2C_float *)(t1))->v), u0 > u1) && (u2 = (((struct o3780_float *)(a4))->v), 200.0f > u2))) {
            (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((((struct o28_float *)(((((struct o3760_int *)(a4))->v))))->v)) - ((((struct o28_float *)(a4))->v))) / 6.0f));
            (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((((struct o30_float *)(((((struct o3760_int *)(a4))->v))))->v)) - ((((struct o30_float *)(a4))->v))) / 6.0f));
        }
        t1 = 0x131;
        if ((*(signed char *)((a4 + 0x131))) != 0) {
            t2 = FUN_0c07d1fc(a4);
            t1 = t2;
            if (t2 != 0) {
                t2 = *(signed char *)((a4 + 0x1));
                FUN_0c07e79c(a4, t2, 0x2, 0x17, (t2), 0x2, 0x17);
                t2 = *(int *)(((0x118 + a4) + 0x4));
                t4 = (((struct o118_int *)(a4))->v);
                (((struct oA0_float *)(t2))->v) = 1.0f;
                (((struct o9C_float *)(t2))->v) = 1.0f;
                (((struct oA0_float *)(t4))->v) = 1.0f;
                (((struct o9C_float *)(t4))->v) = 1.0f;
                t2 = *(int *)(((0x118 + a4) + 0x4));
                t4 = (((struct o118_int *)(a4))->v);
                (((struct o98_float *)(t2))->v) = 1.0f;
                (((struct o98_float *)(t4))->v) = 1.0f;
                (((struct o94_float *)(t2))->v) = 1.0f;
                (((struct o94_float *)(t4))->v) = 1.0f;
                (((struct o50_float *)(a4))->v) = 4.0f;
                (((struct o5C_float *)(a4))->v) = -1.0f;
                (((struct o131_uchar *)(a4))->v) = 0x0;
                (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                t1 = 0x16;
            }
        }
    }
    return t1;
}

int FUN_0c09b534(int a4, int a5, int a6)
{
    int t0;
    register int t1;
    register float u0;
    register float u1;
    float u2;

    FUN_0c037bf6(a4, a5, a6);
    t1 = FUN_0c064f80(((((struct o3760_int *)(a4))->v)));
    if ((t1 != 0) && ((t0 = (((struct o3760_int *)(a4))->v), u0 = (((struct o2C_float *)(a4))->v), u1 = (((struct o2C_float *)(t0))->v), u0 > u1) && (u2 = (((struct o3780_float *)(a4))->v), 200.0f > u2))) {
        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((((struct o28_float *)(((((struct o3760_int *)(a4))->v))))->v)) - ((((struct o28_float *)(a4))->v))) / 6.0f));
        (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((((struct o30_float *)(((((struct o3760_int *)(a4))->v))))->v)) - ((((struct o30_float *)(a4))->v))) / 6.0f));
    }
    if ((*(signed char *)((a4 + 0x131))) != 0) {
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        return 0x15;
    }
    t0 = FUN_0c07ecc6(a4, 0x0, 0x0);
    if ((0.0f > ((((struct o50_float *)(a4))->v))) && (t0 != 0)) {
        if (t0 == 2) {
            return FUN_0c085cac(a4, 0x6, 0x0);
        }
        FUN_0c05258e(0x2, 0x14, 0x100, 0x1E, 0x0);
        t0 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t0, 0x2, 0x5, (t0), 0x2, 0x5);
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
        FUN_0c07db58(a4, (0x118 + a4), t1);
        (((struct o15_uchar *)(a4))->v) = 0x3;
        return 0x15;
    }
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    return math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
}

int FUN_0c092f80(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;
    float u2;

    FUN_0c037bf6(a4, a5, a6);
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    t1 = FUN_0c07ecc6(a4, 0x0, 0x0);
    if (t1 != 0) {
        t1 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t1, 0x2, 0x13, (t1), 0x2, 0x13);
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
        FUN_0c059f78((*(signed char *)((a4 + 0x1))), 0x1);
        (((struct o16_uchar *)(a4))->v) = 0x8;
        return 0x16;
    }
    t1 = FUN_0c064f80(((((struct o3760_int *)(a4))->v)));
    if ((t1 != 0) && ((t0 = (((struct o3760_int *)(a4))->v), u0 = (((struct o2C_float *)(a4))->v), u1 = (((struct o2C_float *)(t0))->v), u0 > u1) && (u2 = (((struct o3780_float *)(a4))->v), 200.0f > u2))) {
        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((((struct o28_float *)(((((struct o3760_int *)(a4))->v))))->v)) - ((((struct o28_float *)(a4))->v))) / 6.0f));
        (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((((struct o30_float *)(((((struct o3760_int *)(a4))->v))))->v)) - ((((struct o30_float *)(a4))->v))) / 6.0f));
    }
    t0 = 0x131;
    if ((*(signed char *)((a4 + 0x131))) != 0) {
        t1 = FUN_0c07d1fc(a4);
        t2 = t1;
        if (t1 != 0) {
            (((struct o50_float *)(a4))->v) = 20.0f;
            (((struct o5C_float *)(a4))->v) = -1.5f;
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
            t2 = 0x16;
        }
        t0 = t2;
    }
    return t0;
}

int FUN_0c09f2e8(int a4, int a5, int a6)
{
    register int t0;
    register int t1;

    FUN_0c037bf6(a4, a5, a6);
    FUN_0c09f200(a4);
    if ((*(signed char *)((a4 + 0x131))) != 0) {
        t0 = FUN_0c07d1fc(a4);
        if (t0 != 0) {
            (((struct o131_uchar *)(a4))->v) = 0x0;
            t0 = FUN_0c07f56a(a4);
            if (t0 != 0) {
                (((struct o372A_uchar *)(a4))->v) = (t0 - 1);
                (((struct o3728_uchar *)(a4))->v) = 0x0;
                return FUN_0c085cac(a4, 0x21, 0x0);
            }
        }
    }
    t0 = FUN_0c07ecc6(a4, 0x0, 0x0);
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c085cac(a4, 0x6, 0x0);
        }
        t0 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t0, 0x2, 0x7, (t0), 0x2, 0x7);
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
        FUN_0c07daea(a4, (0x118 + a4), t1);
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        return 0x15;
    }
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    return math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
}

int FUN_0c09c0b4(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;

    (((struct o374B_uchar *)(a4))->v) = 0x1;
    FUN_0c037bf6(a4, a5, a6);
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    t1 = (short)(t0 - 1);
    if ((int)(short)(t0 - 1) <= 0) {
        t0 = FUN_0c07ce58(a4, ((((short)(*(signed char *)((a4 + 0x2))) * (short)0x78) + 0xC25B194) + 0x30));
        if (t0 != 0) {
            *(unsigned int *)((a4 + 0x38)) = (FUN_0c07d774(a4));
        }
        FUN_0c07043c(a4, 45.0f, -2.79999995f, 500.0f, 1.0f);
        t0 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t0, 0x2, 0x8, (t0), 0x2, 0x8);
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
        *(unsigned short *)((a4 + 0x1C)) = 0x5;
        *(unsigned short *)((a4 + 0x1E)) = 0xA;
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        t1 = 0x16;
    }
    return t1;
}

int FUN_0c09c432(int a4, int a5, int a6)
{
    int t0;

    FUN_0c037bf6(a4, a5, a6);
    t0 = FUN_0c07ecc6(a4, 0x0, 0x0);
    if (!(((((struct o50_float *)(a4))->v)) > 0.0f) && (t0 != 0)) {
        if (t0 == 2) {
            return FUN_0c085cac(a4, 0x6, 0x0);
        }
        t0 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t0, 0x0, 0xA, (t0), 0x0, 0xA);
        (((struct o5C_float *)(a4))->v) = 0.0f;
        (((struct o60_float *)(a4))->v) = 0.0f;
        (((struct o58_float *)(a4))->v) = 0.0f;
        (((struct o50_float *)(a4))->v) = 0.0f;
        (((struct o54_float *)(a4))->v) = 0.0f;
        (((struct o4C_float *)(a4))->v) = 0.0f;
        (((struct o16_uchar *)(a4))->v) = 0x5;
        return 0x16;
    }
    FUN_0c038362(a4);
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    return math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
}

int FUN_0c092d12(int a4, int a5, int a6)
{
    register int t0;
    register int t1;

    t0 = FUN_0c037bf6(a4, a5, a6);
    if ((unsigned char)t0 != 0) {
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
        (((struct o131_uchar *)(a4))->v) = 0x0;
        *(unsigned short *)((a4 + 0x1C)) = 0x17;
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
    }
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    return math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
}

int FUN_0c093166(int a4, int a5, int a6)
{
    register int t0;
    register int t1;

    t0 = FUN_0c037bf6(a4, a5, a6);
    if ((unsigned char)t0 != 0) {
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
        (((struct o131_uchar *)(a4))->v) = 0x0;
        *(unsigned short *)((a4 + 0x1C)) = 0x17;
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
    }
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    return math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
}

int FUN_0c0930e4(int a4, int a5, int a6)
{
    register int t0;
    register int t1;

    t0 = FUN_0c037bf6(a4, a5, a6);
    if ((unsigned char)t0 != 0) {
        t0 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t0, 0x2, 0x3, (t0), 0x2, 0x3);
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
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
    }
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    return math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
}

int FUN_0c09c1a4(int a4, int a5, int a6)
{
    register int t0;

    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    if ((int)(short)(t0 - 1) > 0) {
        (((struct o374B_uchar *)(a4))->v) = 0x1;
    }
    FUN_0c037bf6(a4, a5, a6);
    if (0.0f > ((((struct o17C_float *)(a4))->v))) {
        (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) / (1.0f + 1.0f));
    }
    t0 = *(short *)((a4 + 0x1E));
    *(unsigned short *)((a4 + 0x1E)) = (t0 - 1);
    if ((int)(short)(t0 - 1) <= 0) {
        *(unsigned short *)((a4 + 0x1E)) = 0xA;
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        return 0x16;
    }
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    return math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
}

int FUN_0c095cf8(int a4, int a5, int a6)
{
    register int t0;
    register int t1;

    FUN_0c037bf6(a4, a5, a6);
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    t0 = (((struct oE0_int *)(a4))->v);
    (((struct o88_float *)(t0))->v) = (((((struct o88_float *)(t0))->v)) + 1.5f);
    (((struct o8C_float *)((*(int *)(((0xC4 + a4) + 0x20)))))->v) = (1.0f / ((((struct o88_float *)((*(int *)(((0xC4 + a4) + 0x1C)))))->v)));
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    t1 = (short)(t0 - 1);
    if ((short)(t0 - 1) == 0) {
        *(unsigned short *)((a4 + 0x1C)) = 0x4;
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        t1 = 0x16;
    }
    return t1;
}

int FUN_0c09c21a(int a4, int a5, int a6)
{
    register int t2;
    register int t6;

    FUN_0c037bf6(a4, a5, a6);
    FUN_0c038362(a4);
    t2 = *(short *)((a4 + 0x1E));
    *(unsigned short *)((a4 + 0x1E)) = (t2 - 1);
    t6 = (short)(t2 - 1);
    if ((int)(short)(t2 - 1) <= 0) {
        (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) * (1.0f + 1.0f));
        (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) * (1.0f + 1.0f));
        (((struct o50_float *)(a4))->v) = -40.0f;
        (((struct o5C_float *)(a4))->v) = 0.0f;
        *(unsigned short *)((a4 + 0x1E)) = 0xA;
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        t6 = 0x16;
    }
    return t6;
}

int FUN_0c09692e(int a4, int a5, int a6)
{
    register int t4;

    FUN_0c037bf6(a4, a5, a6);
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    if (!(((((struct o50_float *)(a4))->v)) > 0.0f)) {
        t4 = FUN_0c07ecc6(a4, 0x0, 0x0);
        if (t4 != 0) {
            return FUN_0c085cac(a4, 0x6, 0x0);
        }
        return t4;
    }
    return 0x50;
}

int FUN_0c0935bc(int a4, int a5, int a6)
{
    register int t3;

    FUN_0c037bf6(a4, a5, a6);
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    t3 = FUN_0c07ecc6(a4, 0x0, 0x0);
    if (t3 != 0) {
        FUN_0c059f78((*(signed char *)((a4 + 0x1))), 0x1);
        return FUN_0c085d0c(a4);
    }
    return t3;
}

int FUN_0c09c4e0(int a4, int a5, int a6)
{
    register int t0;

    t0 = FUN_0c037bf6(a4, a5, a6);
    if ((unsigned char)t0 != 0) {
        return FUN_0c085d0c(a4);
    }
    FUN_0c038362(a4);
    return math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
}
