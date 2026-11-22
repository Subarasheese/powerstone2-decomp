/* Straight-line functions with calls and guards (batch gen_it): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o10_float { char p[0x10]; float v; };
struct o118_int { char p[0x118]; int v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o3749_uchar { char p[0x3749]; unsigned char v; };
struct o3756_uchar { char p[0x3756]; unsigned char v; };
struct o3774_int { char p[0x3774]; int v; };
struct o40_float { char p[0x40]; float v; };
struct o42C_short { char p[0x42C]; short v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c037bf6(int, int, int);
int FUN_0c038362(int);
int FUN_0c038980(int);
int FUN_0c059e60(int, int);
int FUN_0c073ed0(int, int, int, float);
int FUN_0c07d030(int, int);
int FUN_0c07e2f4(int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c085cac(int, int, int);
int FUN_0c093606(int);
int FUN_0c095a1c(int, int, int);
int FUN_0c095b88(int);
int FUN_0c095bd2(int);
int FUN_0c095c36(int);
int FUN_0c095c76(int);
int FUN_0c095d5c(int);
int FUN_0c095d9c(int);
int FUN_0c095e00(int);
int FUN_0c095e60(int);
int FUN_0c095ec4(int);
int FUN_0c095f04(int, int, int);
int FUN_0c095fd0(int);
int FUN_0c09601c(int);
int FUN_0c09b45c(int);
int FUN_0c09b6b8(int);
int FUN_0c09b78c(int);
int FUN_0c09b7ec(int, int);
int FUN_0c09b8a2(int);
int FUN_0c09ef24(int, int, int);
int FUN_0c09efce(int);
int FUN_0c09f144(int);
int FUN_0c09f272(int);
int FUN_0c09f3dc(int);
int FUN_0c12d070(int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int FUN_0c0993b6(int a4, int a5, int a6);
int FUN_0c099f88(int a4);
int FUN_0c0960a0(int a4, int a5, int a6, int a7);
int FUN_0c077a0c(int a4);
int FUN_0c099bcc(int a4, int a5, int a6);
int FUN_0c099c54(int a4, int a5, int a6);
int FUN_0c09b8c8(int a4, int a5, int a6, int a7);
int FUN_0c077d04(int a4);
int FUN_0c09928c(int a4, int a5, int a6);
int FUN_0c09a3dc(int a4, int a5, int a6);
int FUN_0c099310(int a4, int a5, int a6);
int FUN_0c077e70(int a4, float f4);
int FUN_0c093628(int a4, int a5, int a6, int a7);
int FUN_0c09f3fe(int a4, int a5, int a6, int a7);
int FUN_0c09f166(int a4, int a5, int a6);
int FUN_0c099cb8(int a4, int a5, int a6);

int FUN_0c0993b6(int a4, int a5, int a6)
{
    register int t2;
    register int t13;
    register float u5;

    FUN_0c037bf6(a4, a5, a6);
    FUN_0c038362(a4);
    t2 = (((struct o22_short *)(a4))->v);
    (((struct o22_ushort *)(a4))->v) = (t2 - 1);
    t13 = 0x22;
    if ((short)(t2 - 1) == 0) {
        FUN_0c07e2f4(a4, 0x64);
        FUN_0c059e60(a4, 0x20);
        u5 = (((struct o0_float *)0xC0994E0)->v);
        (((struct o4C_float *)(a4))->v) = ((math_sin_angle16((*(int *)((a4 + 0x38))))) * u5);
        (((struct o54_float *)(a4))->v) = ((math_cos_angle16((*(int *)((a4 + 0x38))))) * u5);
        (((struct o50_float *)(a4))->v) = ((((struct oC_float *)0xC0994E0)->v));
        (((struct o5C_float *)(a4))->v) = ((((struct o10_float *)0xC0994E0)->v));
        *(unsigned short *)((a4 + 0x1C)) = 0xB4;
        *(unsigned short *)((a4 + 0x1E)) = 0xA;
        (((struct o20_ushort *)(a4))->v) = 0x19;
        (((struct o22_ushort *)(a4))->v) = 0xA;
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t13 = 0x15;
    }
    return t13;
}

int FUN_0c099f88(int a4)
{
    register int t0;
    register int t1;

    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    (((struct o50_float *)(a4))->v) = 77.3999939f;
    (((struct o5C_float *)(a4))->v) = -4.0f;
    t0 = *(signed char *)((a4 + 0x1));
    FUN_0c07e79c(a4, t0, 0x1, 0x10, (t0), 0x1, 0x10);
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
    return FUN_0c059e60(a4, 0x2);
}


int FUN_0c077a0c(int a4)
{
    register int t0;
    register int t1;

    FUN_0c07e79c(a4, 0xFFFFFFFF, 0x4, 0x30, 0xFFFFFFFF, 0x4, 0x30);
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
    *(unsigned short *)((a4 + 0x1C)) = 0x1;
    FUN_0c038980(a4);
    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
    return 0x16;
}

int FUN_0c099bcc(int a4, int a5, int a6)
{
    register int t8;
    register int t4;

    (((struct o3749_uchar *)(a4))->v) = 0x2;
    FUN_0c037bf6(a4, a5, a6);
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    t8 = 0x50;
    if (0.0f > ((((struct o50_float *)(a4))->v))) {
        t4 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t4, 0x1, 0x10, (t4), 0x1, 0x10);
        *(unsigned short *)((a4 + 0x1C)) = 0x18;
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t8 = 0x15;
    }
    return t8;
}

int FUN_0c099c54(int a4, int a5, int a6)
{
    register int t0;

    t0 = FUN_0c037bf6(a4, a5, a6);
    if ((unsigned char)t0 != 0) {
        t0 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t0, 0x1, 0x18, (t0), 0x1, 0x18);
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0xB4;
        return 0xB4;
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    if ((short)(t0 - 1) == 0) {
        FUN_0c07d030(a4, 0x2);
    }
    return FUN_0c038362(a4);
}


int FUN_0c077d04(int a4)
{
    register int t0;
    register int t1;

    FUN_0c07e79c(a4, 0xFFFFFFFF, 0x4, 0x30, 0xFFFFFFFF, 0x4, 0x30);
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
    *(unsigned short *)((a4 + 0x1C)) = 0x14;
    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
    return 0x16;
}

int FUN_0c09928c(int a4, int a5, int a6)
{
    register int t2;

    FUN_0c037bf6(a4, a5, a6);
    FUN_0c038362(a4);
    t2 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t2 - 1);
    if ((short)(t2 - 1) == 0) {
        FUN_0c07d030(a4, 0x1);
        FUN_0c12d070(a4, 0x0);
        FUN_0c059e60(a4, 0xA);
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    }
    *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) - 1);
    (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) - 1);
    (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) - 1);
    return 0x22;
}

int FUN_0c09a3dc(int a4, int a5, int a6)
{
    register int t4;

    FUN_0c037bf6(a4, a5, a6);
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    if (0.0f > ((((struct o50_float *)(a4))->v))) {
        t4 = FUN_0c07ecc6(a4, 0x0, 0x0);
        if (t4 != 0) {
            (((struct o50_float *)(a4))->v) = 0.0f;
            (((struct o5C_float *)(a4))->v) = 0.0f;
            return FUN_0c085cac(a4, 0x6, 0x0);
        }
        return t4;
    }
    return 0x50;
}

int FUN_0c099310(int a4, int a5, int a6)
{
    register float u2;
    register int t6;

    FUN_0c037bf6(a4, a5, a6);
    FUN_0c038362(a4);
    u2 = *(float *)0xC0994D0;
    (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) + u2);
    (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) + u2);
    (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + u2);
    t6 = *(short *)((a4 + 0x1E));
    *(unsigned short *)((a4 + 0x1E)) = (t6 - 1);
    if ((short)(t6 - 1) == 0) {
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    }
    (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) - 1);
    (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) - 1);
    return 0x22;
}

int FUN_0c077e70(int a4, float f4)
{
    register int t12;

    (((struct o3756_uchar *)(a4))->v) = 0x1;
    if (((((struct o3774_int *)(a4))->v)) != 0) {
        (((struct o28_float *)(a4))->v) = ((((struct o28_float *)(((((struct o3774_int *)(a4))->v))))->v));
        (((struct o30_float *)(a4))->v) = ((((struct o30_float *)(((((struct o3774_int *)(a4))->v))))->v));
        (((struct o2C_float *)(a4))->v) = ((((struct o2C_float *)(((((struct o3774_int *)(a4))->v))))->v));
    }
    t12 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t12 - 1);
    if ((short)(t12 - 1) == 0) {
        return FUN_0c073ed0(a4, (*(signed char *)((a4 + 0x1))), ((*(int *)0xC25AD1C) + 0xA0), f4);
    }
    return (short)(t12 - 1);
}



int FUN_0c09f166(int a4, int a5, int a6)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            return FUN_0c09f144(a4);
        }
        return FUN_0c09efce(a4);
    }
    return FUN_0c09ef24(a4, a5, a6);
}

int FUN_0c099cb8(int a4, int a5, int a6)
{
    register int t0;
    register int t1;

    FUN_0c037bf6(a4, a5, a6);
    t0 = (((struct o42C_short *)(a4))->v);
    if (((0x200 & (unsigned short)t0) == 0) && ((0x80 & (unsigned short)t0) == 0)) {
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        (((struct o50_float *)(a4))->v) = -10.0f;
        (((struct o5C_float *)(a4))->v) = -4.0f;
        t0 = 0x5C;
    } else {
        t1 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
        t0 = (short)(t1 - 1);
        if ((short)(t1 - 1) == 0) {
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            (((struct o50_float *)(a4))->v) = -10.0f;
            (((struct o5C_float *)(a4))->v) = -4.0f;
            t0 = 0x5C;
        }
    }
    return t0;
}
