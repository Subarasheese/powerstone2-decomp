/* Straight-line functions with calls and guards (batch gen_di): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o10_float { char p[0x10]; float v; };
struct o118_int { char p[0x118]; int v; };
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
struct o374B_uchar { char p[0x374B]; unsigned char v; };
struct o3760_int { char p[0x3760]; int v; };
struct o376C_int { char p[0x376C]; int v; };
struct o380C_float { char p[0x380C]; float v; };
struct o3810_float { char p[0x3810]; float v; };
struct o3814_float { char p[0x3814]; float v; };
struct o382A_short { char p[0x382A]; short v; };
struct o3850_uint { char p[0x3850]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o8C_float { char p[0x8C]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oC_float { char p[0xC]; float v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c037bf6(int);
int FUN_0c038362(int);
int FUN_0c059e60(int, int);
int FUN_0c064f80(int);
int FUN_0c07053a(int, int, float);
int FUN_0c073fe2(int, int);
int FUN_0c07a6aa(int);
int FUN_0c07ce58(int, int);
int FUN_0c07d030(int, int);
int FUN_0c07d774(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c080320(int, float);
int FUN_0c085204(int, float);
int FUN_0c085cac(int, int, int);
int FUN_0c085d0c(int);
int FUN_0c0a3058(int, int, int, int);
int FUN_0c0c2380(int, int);
int FUN_0c0c2d56(int, int, int, int);
int FUN_0c0c3054(int, int, int, float);
int FUN_0c12a264(int, int);
int FUN_0c12db58(int, int);
int FUN_0c12df3c(int);
int FUN_0c12f304(int, int);
int FUN_0c12f69c(int, int);
int FUN_0c13b818(int, int);
int FUN_0c13c150(int);
int FUN_0c140ef0(int, int);
int FUN_0c1416f8(int, int);
int FUN_0c14188c(int, int);
int FUN_0c142e70(int, int);
int math_atan_angle16(float);
float math_cos_angle16(int);
float math_signed_sqrt(float);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int FUN_0c0a015c(int a4);
int FUN_0c0943a2(int a4);
int FUN_0c09cac8(int a4);
int FUN_0c09d020(int a4);
int FUN_0c094158(int a4);
int FUN_0c0a6cd0(int a4);
int FUN_0c08d7ac(int a4);
int FUN_0c0affa8(int a4);
int FUN_0c09fadc(int a4);
int FUN_0c09ff1a(int a4);
int FUN_0c0a1c76(int a4);
int FUN_0c0a9b96(int a4);
int FUN_0c0a9d48(int a4);
int FUN_0c0aa4f0(int a4);
int FUN_0c09c74c(int a4);
int FUN_0c0a6180(int a4);
int FUN_0c0ad820(int a4);
int FUN_0c079968(int a4);
int FUN_0c0940b0(int a4);
int FUN_0c0a9ffc(int a4);
int FUN_0c0aa412(int a4);
int FUN_0c09d834(int a4);
int FUN_0c09dafc(int a4);
int FUN_0c09d38c(int a4);
int FUN_0c09d78a(int a4);
int FUN_0c09fd44(int a4);
int FUN_0c0cbbd8(int a4, int a5, int a6, int a7);
int FUN_0c08a696(int a4, float f4);

int FUN_0c0a015c(int a4)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = FUN_0c064f80(a4);
    if (t0 != 0) {
        t0 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t0, 0x1, 0x17, (t0), 0x1, 0x17);
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
        FUN_0c080320(a4, 1.20000005f);
        u0 = 18.0f;
    } else {
        t0 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t0, 0x1, 0x17, (t0), 0x1, 0x17);
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
        FUN_0c080320(a4, 1.20000005f);
        u0 = 3.5999999f;
    }
    (((struct o50_float *)(a4))->v) = u0;
    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    FUN_0c059e60(a4, 0xB);
    *(unsigned short *)((a4 + 0x1C)) = 0x0;
    *(unsigned short *)((a4 + 0x1E)) = 0x0;
    (((struct o20_ushort *)(a4))->v) = 0x0;
    t0 = FUN_0c07d774(a4);
    *(unsigned int *)((a4 + 0x38)) = t0;
    return t0;
}

int FUN_0c0943a2(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u6;
    register float u7;

    u0 = (((struct o28_float *)(a4))->v);
    u1 = (((struct o380C_float *)(a4))->v);
    u2 = (((struct o2C_float *)(a4))->v);
    u3 = (((struct o3810_float *)(a4))->v);
    u4 = (((struct o30_float *)(a4))->v);
    u5 = (((struct o3814_float *)(a4))->v);
    u6 = *(float *)0xC0944C0;
    u7 = (u1 - u0);
    if ((u1 - u0) == 0.0f) {
        u7 = u6;
    }
    u0 = (u3 - u2);
    if ((u3 - u2) == 0.0f) {
        u0 = u6;
    }
    u1 = (u5 - u4);
    if ((u5 - u4) == 0.0f) {
        u1 = u6;
    }
    t0 = math_atan_angle16(((-u1) / u7));
    t1 = t0;
    if (0.0f > u7) {
        t1 = (t0 + 0x8000);
    }
    u2 = (u1 * u1);
    u2 = u2 + u7 * u7;
    *(unsigned int *)((a4 + 0x38)) = (unsigned short)(t1 + 0x4000);
    u1 = math_signed_sqrt(u2);
    math_atan_angle16(((-u1) / u0));
    t0 = FUN_0c037bf6(a4);
    t1 = (unsigned char)t0;
    if ((unsigned char)t0 != 0) {
        t0 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t0, 0x1, 0x18, (t0), 0x1, 0x18);
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
        t1 = 0x17;
    }
    return t1;
}

int FUN_0c09cac8(int a4)
{
    int stk[7];
    register int t10;
    register int t11;
    register int t13;
    register int t14;
    register int t15;
    register int t16;
    register int t19;

    *(unsigned int *)(((int)stk + 16)) = (0x38F8 + a4);
    (((struct o50_float *)(a4))->v) = 0.0f;
    (((struct o54_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    (((struct o5C_float *)(a4))->v) = 0.0f;
    (((struct o60_float *)(a4))->v) = 0.0f;
    (((struct o58_float *)(a4))->v) = 0.0f;
    if ((*(signed char *)((a4 + 0x3731))) == 0) {
        *(unsigned int *)((a4 + 0x38)) = (FUN_0c07d774(a4));
        *(unsigned int *)((a4 + 0x10)) = ((((struct o3760_int *)(a4))->v));
    } else {
        *(unsigned int *)((a4 + 0x10)) = 0x0;
    }
    *(int *)((int)stk + 8) = 0x10;
    *(int *)((int)stk + 4) = 0x1;
    t10 = *(signed char *)((a4 + 0x1));
    *(unsigned int *)(((int)stk + 12)) = t10;
    t11 = t10;
    *(int *)((int)stk + 0) = t11;
    FUN_0c07e79c(a4, t10, 0x1, 0x10, t11, 0x1, 0x10);
    t13 = *(int *)(((0x118 + a4) + 0x4));
    t14 = (((struct o118_int *)(a4))->v);
    (((struct oA0_float *)(t13))->v) = 1.0f;
    (((struct o9C_float *)(t13))->v) = 1.0f;
    (((struct oA0_float *)(t14))->v) = 1.0f;
    (((struct o9C_float *)(t14))->v) = 1.0f;
    t15 = *(int *)(((0x118 + a4) + 0x4));
    t16 = (((struct o118_int *)(a4))->v);
    (((struct o98_float *)(t15))->v) = 1.0f;
    (((struct o98_float *)(t16))->v) = 1.0f;
    (((struct o94_float *)(t15))->v) = 1.0f;
    (((struct o94_float *)(t16))->v) = 1.0f;
    FUN_0c07d030(a4, 0x0);
    FUN_0c12f304(a4, 0x0);
    (((struct o1B_uchar *)(a4))->v) = 0x0;
    *(unsigned short *)((a4 + 0x1C)) = 0xF;
    t19 = *(int *)(((int)stk + 16));
    *(unsigned int *)((t19 + 0x0)) = ((*(int *)((t19 + 0x0))) + 0x1);
    (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
    return 0x17;
}

int FUN_0c09d020(int a4)
{
    int stk[7];
    register int t10;
    register int t11;
    register int t13;
    register int t14;
    register int t15;
    register int t16;
    register int t19;

    *(unsigned int *)(((int)stk + 16)) = (0x38F8 + a4);
    (((struct o50_float *)(a4))->v) = 0.0f;
    (((struct o54_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    (((struct o5C_float *)(a4))->v) = 0.0f;
    (((struct o60_float *)(a4))->v) = 0.0f;
    (((struct o58_float *)(a4))->v) = 0.0f;
    if ((*(signed char *)((a4 + 0x3731))) == 0) {
        *(unsigned int *)((a4 + 0x38)) = (FUN_0c07d774(a4));
        *(unsigned int *)((a4 + 0x10)) = ((((struct o3760_int *)(a4))->v));
    } else {
        *(unsigned int *)((a4 + 0x10)) = 0x0;
    }
    *(int *)((int)stk + 8) = 0x13;
    *(int *)((int)stk + 4) = 0x1;
    t10 = *(signed char *)((a4 + 0x1));
    *(unsigned int *)(((int)stk + 12)) = t10;
    t11 = t10;
    *(int *)((int)stk + 0) = t11;
    FUN_0c07e79c(a4, t10, 0x1, 0x13, t11, 0x1, 0x13);
    t13 = *(int *)(((0x118 + a4) + 0x4));
    t14 = (((struct o118_int *)(a4))->v);
    (((struct oA0_float *)(t13))->v) = 1.0f;
    (((struct o9C_float *)(t13))->v) = 1.0f;
    (((struct oA0_float *)(t14))->v) = 1.0f;
    (((struct o9C_float *)(t14))->v) = 1.0f;
    t15 = *(int *)(((0x118 + a4) + 0x4));
    t16 = (((struct o118_int *)(a4))->v);
    (((struct o98_float *)(t15))->v) = 1.0f;
    (((struct o98_float *)(t16))->v) = 1.0f;
    (((struct o94_float *)(t15))->v) = 1.0f;
    (((struct o94_float *)(t16))->v) = 1.0f;
    FUN_0c07d030(a4, 0x0);
    FUN_0c12f304(a4, 0x0);
    (((struct o1B_uchar *)(a4))->v) = 0x0;
    *(unsigned short *)((a4 + 0x1C)) = 0xF;
    t19 = *(int *)(((int)stk + 16));
    *(unsigned int *)((t19 + 0x0)) = ((*(int *)((t19 + 0x0))) + 0x1);
    (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
    return 0x17;
}

int FUN_0c094158(int a4)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u6;

    u0 = (((struct o28_float *)(a4))->v);
    u1 = (((struct o380C_float *)(a4))->v);
    u2 = (((struct o2C_float *)(a4))->v);
    u3 = (((struct o3810_float *)(a4))->v);
    u4 = (((struct o30_float *)(a4))->v);
    u5 = (((struct o3814_float *)(a4))->v);
    u6 = (u1 - u0);
    if ((u1 - u0) == 0.0f) {
        u6 = 9.99999997e-07f;
    }
    u0 = (u3 - u2);
    if ((u3 - u2) == 0.0f) {
        u0 = 9.99999997e-07f;
    }
    u1 = (u5 - u4);
    if ((u5 - u4) == 0.0f) {
        u1 = 9.99999997e-07f;
    }
    t0 = math_atan_angle16(((-u1) / u6));
    t1 = t0;
    if (0.0f > u6) {
        t1 = (t0 + 0x8000);
    }
    u2 = (u1 * u1);
    u2 = u2 + u6 * u6;
    *(unsigned int *)((a4 + 0x38)) = (unsigned short)(t1 + 0x4000);
    u1 = math_signed_sqrt(u2);
    math_atan_angle16(((-u1) / u0));
    FUN_0c037bf6(a4);
    *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
    t0 = *(short *)((a4 + 0x1C));
    t1 = t0;
    if (t0 == 1) {
        FUN_0c12a264(a4, 0x3);
        *(unsigned short *)((a4 + 0x1C)) = 0x64;
        *(unsigned short *)((a4 + 0x1E)) = 0x0;
        (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
        t1 = 0x17;
    }
    return t1;
}

int FUN_0c0a6cd0(int a4)
{
    register int t0;
    register int t1;

    (((struct o374B_uchar *)(a4))->v) = 0x1;
    if ((*(short *)((a4 + 0x1C))) != 0) {
        *(unsigned int *)((a4 + 0x38)) = (unsigned short)((*(int *)((a4 + 0x38))) + ((int)((int)(unsigned short)((FUN_0c07d774(a4)) - (*(int *)((a4 + 0x38)))) / (int)(*(short *)((a4 + 0x1C))))));
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
    }
    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 50.0f);
        FUN_0c07ce58(a4, ((((short)(*(signed char *)((a4 + 0x2))) * (short)0x78) + 0xC25B194) + 0x30));
        *(unsigned int *)((a4 + 0x38)) = (FUN_0c07d774(a4));
        FUN_0c07053a(a4, 0x2F, 25.0f);
        (((struct o5C_float *)(a4))->v) = -1.5f;
        FUN_0c0a3058(a4, (*(signed char *)((a4 + 0x1))), 0x2, 0x9);
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
    }
    return FUN_0c085204(a4, 0.0f);
}

int FUN_0c08d7ac(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    FUN_0c07d030(a4, 0x0);
    if ((*(signed char *)((a4 + 0x375A))) != 3) {
        t0 = *(signed char *)((a4 + 0x1));
        t1 = 0xE;
        t2 = (t0);
        t3 = t0;
        t0 = 0xE;
    } else {
        t3 = *(signed char *)((a4 + 0x1));
        t1 = 0xF;
        t2 = (t3);
        t0 = 0xF;
    }
    FUN_0c07e79c(a4, t3, 0x1, t0, t2, 0x1, t1);
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
    *(unsigned short *)((a4 + 0x1C)) = 0x12;
    *(unsigned short *)((a4 + 0x1E)) = 0x0;
    if ((*(signed char *)((a4 + 0x3731))) == 0) {
        (((struct o20_ushort *)(a4))->v) = 0x4;
        (((struct o3850_uint *)(a4))->v) = (FUN_0c07d774(a4));
    } else {
        (((struct o20_ushort *)(a4))->v) = 0x0;
    }
    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    return 0x15;
}

int FUN_0c0affa8(int a4)
{
    int stk[2];
    register int t29;
    register int t40;

    if (!((*(float *)((0xC25D5E0 + ((*(short *)((a4 + 0x1C))) << 2)))) > ((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v)))) {
        if ((int)((((struct o20_short *)(a4))->v)) > 0) {
            (((struct o20_ushort *)(a4))->v) = 0x0;
            FUN_0c07d030(a4, 0x1);
        }
        FUN_0c1416f8(a4, 0x0);
        FUN_0c1416f8(a4, 0x1);
        FUN_0c142e70(a4, 0x0);
        FUN_0c142e70(a4, 0x1);
        FUN_0c059e60(a4, 0x22);
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
    }
    *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
    t29 = *(short *)((a4 + 0x1E));
    if (((int)t29 > (int)0x8) && ((int)t29 < (int)0x21)) {
        FUN_0c14188c(a4, 0x0);
        FUN_0c14188c(a4, 0x1);
    }
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    t40 = FUN_0c037bf6(a4);
    if ((unsigned char)t40 != 0) {
        return FUN_0c085d0c(a4);
    }
    return FUN_0c038362(a4);
}

int FUN_0c09fadc(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    if ((*(signed char *)((a4 + 0x375A))) == 0) {
        t0 = *(signed char *)((a4 + 0x1));
        t1 = 0xE;
        t2 = (t0);
        t3 = t0;
        t0 = 0xE;
    } else {
        t3 = *(signed char *)((a4 + 0x1));
        t1 = 0x10;
        t2 = (t3);
        t0 = 0x10;
    }
    FUN_0c07e79c(a4, t3, 0x1, t0, t2, 0x1, t1);
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
    (((struct o17_uchar *)(a4))->v) = 0x0;
    *(unsigned short *)((a4 + 0x1C)) = 0x0;
    FUN_0c07d030(a4, 0x0);
    if ((*(signed char *)((a4 + 0x3731))) == 0) {
        (((struct o20_ushort *)(a4))->v) = 0x4;
        t0 = FUN_0c07d774(a4);
        (((struct o3850_uint *)(a4))->v) = t0;
        t1 = t0;
    } else {
        (((struct o20_ushort *)(a4))->v) = 0x0;
        t1 = 0x20;
    }
    return t1;
}

int FUN_0c09ff1a(int a4)
{
    register int t0;
    register int t1;

    if ((*(signed char *)((a4 + 0x375A))) == 1) {
        t0 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t0, 0x1, 0x12, (t0), 0x1, 0x12);
    } else {
        t0 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t0, 0x1, 0x13, (t0), 0x1, 0x13);
        *(unsigned short *)((a4 + 0x1E)) = 0x44;
    }
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
    (((struct o17_uchar *)(a4))->v) = 0x0;
    *(unsigned short *)((a4 + 0x1C)) = 0x0;
    t0 = FUN_0c07d774(a4);
    *(unsigned int *)((a4 + 0x38)) = t0;
    return t0;
}

int FUN_0c0a1c76(int a4)
{
    register int t0;
    register int t1;

    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    FUN_0c07d030(a4, 0x0);
    (((struct o54_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    (((struct o60_float *)(a4))->v) = 0.0f;
    (((struct o58_float *)(a4))->v) = 0.0f;
    (((struct o50_float *)(a4))->v) = 0.0f;
    t0 = *(signed char *)((a4 + 0x1));
    FUN_0c07e79c(a4, t0, 0x1, 0x15, (t0), 0x1, 0x15);
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
    FUN_0c059e60(a4, 0x9);
    *(unsigned short *)((a4 + 0x1E)) = 0x0;
    if ((*(signed char *)((a4 + 0x3731))) == 0) {
        (((struct o20_ushort *)(a4))->v) = 0x4;
        t0 = FUN_0c07d774(a4);
        (((struct o3850_uint *)(a4))->v) = t0;
        t1 = t0;
    } else {
        (((struct o20_ushort *)(a4))->v) = 0x0;
        t1 = 0x20;
    }
    return t1;
}

int FUN_0c0a9b96(int a4)
{
    register int t0;
    register int t1;

    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    FUN_0c07d030(a4, 0x0);
    (((struct o54_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    (((struct o60_float *)(a4))->v) = 0.0f;
    (((struct o58_float *)(a4))->v) = 0.0f;
    (((struct o50_float *)(a4))->v) = 0.0f;
    t0 = *(signed char *)((a4 + 0x1));
    FUN_0c07e79c(a4, t0, 0x1, 0xE, (t0), 0x1, 0xE);
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
    FUN_0c059e60(a4, 0x9);
    *(unsigned short *)((a4 + 0x1E)) = 0x0;
    if ((*(signed char *)((a4 + 0x3731))) == 0) {
        (((struct o20_ushort *)(a4))->v) = 0x4;
        t0 = FUN_0c07d774(a4);
        (((struct o3850_uint *)(a4))->v) = t0;
        t1 = t0;
    } else {
        (((struct o20_ushort *)(a4))->v) = 0x0;
        t1 = 0x20;
    }
    return t1;
}

int FUN_0c0a9d48(int a4)
{
    register int t0;
    register int t1;

    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    FUN_0c07d030(a4, 0x0);
    (((struct o54_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    (((struct o60_float *)(a4))->v) = 0.0f;
    (((struct o58_float *)(a4))->v) = 0.0f;
    (((struct o50_float *)(a4))->v) = 0.0f;
    t0 = *(signed char *)((a4 + 0x1));
    FUN_0c07e79c(a4, t0, 0x1, 0xF, (t0), 0x1, 0xF);
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
    FUN_0c059e60(a4, 0x9);
    *(unsigned short *)((a4 + 0x1E)) = 0x0;
    if ((*(signed char *)((a4 + 0x3731))) == 0) {
        (((struct o20_ushort *)(a4))->v) = 0x4;
        t0 = FUN_0c07d774(a4);
        (((struct o3850_uint *)(a4))->v) = t0;
        t1 = t0;
    } else {
        (((struct o20_ushort *)(a4))->v) = 0x0;
        t1 = 0x20;
    }
    return t1;
}

int FUN_0c0aa4f0(int a4)
{
    int stk[4];
    register int t8;
    register int t9;
    register int t11;
    register int t12;
    register int t13;
    register int t14;

    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    if ((*(signed char *)((a4 + 0x3731))) == 0) {
        *(unsigned int *)((a4 + 0x38)) = (FUN_0c07d774(a4));
    }
    (((struct o54_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    (((struct o60_float *)(a4))->v) = 0.0f;
    (((struct o58_float *)(a4))->v) = 0.0f;
    (((struct o50_float *)(a4))->v) = 0.0f;
    *(int *)((int)stk + 8) = 0x16;
    *(int *)((int)stk + 4) = 0x1;
    t8 = *(signed char *)((a4 + 0x1));
    *(unsigned int *)(((int)stk + 12)) = t8;
    t9 = t8;
    *(int *)((int)stk + 0) = t9;
    FUN_0c07e79c(a4, t8, 0x1, 0x16, t9, 0x1, 0x16);
    t11 = *(int *)(((0x118 + a4) + 0x4));
    t12 = (((struct o118_int *)(a4))->v);
    (((struct oA0_float *)(t11))->v) = 1.0f;
    (((struct o9C_float *)(t11))->v) = 1.0f;
    (((struct oA0_float *)(t12))->v) = 1.0f;
    (((struct o9C_float *)(t12))->v) = 1.0f;
    t13 = *(int *)(((0x118 + a4) + 0x4));
    t14 = (((struct o118_int *)(a4))->v);
    (((struct o98_float *)(t13))->v) = 1.0f;
    (((struct o98_float *)(t14))->v) = 1.0f;
    (((struct o94_float *)(t13))->v) = 1.0f;
    (((struct o94_float *)(t14))->v) = 1.0f;
    FUN_0c059e60(a4, 0xB);
    *(unsigned short *)((a4 + 0x1C)) = 0x0;
    *(unsigned short *)((a4 + 0x1E)) = 0x0;
    (((struct o20_ushort *)(a4))->v) = 0x0;
    FUN_0c13b818(a4, 0x0);
    FUN_0c059e60(a4, 0x22);
    return FUN_0c13c150(a4);
}

int FUN_0c09c74c(int a4)
{
    register int t0;
    register int t1;

    (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
    (((struct o54_float *)(a4))->v) = 0.0f;
    (((struct o50_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    (((struct o60_float *)(a4))->v) = 0.0f;
    (((struct o5C_float *)(a4))->v) = 0.0f;
    (((struct o58_float *)(a4))->v) = 0.0f;
    t0 = *(signed char *)((a4 + 0x1));
    FUN_0c07e79c(a4, t0, 0x1, 0x16, (t0), 0x1, 0x16);
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
    FUN_0c080320(a4, 1.0f);
    *(unsigned int *)((a4 + 0x38)) = (FUN_0c07d774(a4));
    FUN_0c12db58(a4, 0x1);
    FUN_0c12df3c(a4);
    FUN_0c12f69c(a4, 0x0);
    *(unsigned short *)((a4 + 0x1C)) = 0x1;
    *(unsigned short *)((a4 + 0x1E)) = 0xA;
    return 0xA;
}

int FUN_0c0a6180(int a4)
{
    register int t0;
    register int t1;

    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    FUN_0c07e79c(a4, 0xFFFFFFFF, 0x4, 0x2F, 0xFFFFFFFF, 0x4, 0x2F);
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
    (((struct o4C_float *)(a4))->v) = ((math_sin_angle16((*(int *)((a4 + 0x38))))) * 20.0f);
    (((struct o50_float *)(a4))->v) = 35.0f;
    (((struct o54_float *)(a4))->v) = ((math_cos_angle16((*(int *)((a4 + 0x38))))) * 20.0f);
    (((struct o58_float *)(a4))->v) = 0.0f;
    (((struct o5C_float *)(a4))->v) = -2.0f;
    (((struct o60_float *)(a4))->v) = 0.0f;
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    return math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
}

int FUN_0c0ad820(int a4)
{
    register int t10;
    register int t18;

    (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) - (((((struct o4C_float *)(a4))->v)) / 10.0f));
    (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) - (((((struct o50_float *)(a4))->v)) / 10.0f));
    (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) - (((((struct o54_float *)(a4))->v)) / 10.0f));
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    FUN_0c037bf6(a4);
    t10 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t10 + 0x1);
    t18 = (short)(t10 + 0x1);
    if ((short)(t10 + 0x1) == 30) {
        FUN_0c140ef0(a4, 0x0);
        FUN_0c140ef0(a4, 0x1);
        FUN_0c140ef0(a4, 0x2);
        FUN_0c140ef0(a4, 0x3);
        FUN_0c140ef0(a4, 0x4);
        FUN_0c140ef0(a4, 0x5);
        (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
        t18 = 0x17;
    }
    return t18;
}

int FUN_0c079968(int a4)
{
    register int t5;

    if (((((struct o382A_short *)(a4))->v)) == 0) {
        return FUN_0c073fe2((((short)(*(signed char *)((a4 + 0x373F))) * (short)0x3938) + 0xC532498), (*(signed char *)((a4 + 0x1))));
    }
    if (0.0f > ((((struct o50_float *)(a4))->v))) {
        t5 = FUN_0c07ecc6(a4, 0x0, 0x0);
        if (t5 != 0) {
            if (t5 == 2) {
                return FUN_0c07a6aa(a4);
            }
            (((struct o50_float *)(a4))->v) = 0.0f;
        }
    }
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    return math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
}

int FUN_0c0940b0(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    (((struct o50_float *)(a4))->v) = 0.0f;
    (((struct o54_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    (((struct o5C_float *)(a4))->v) = 0.0f;
    (((struct o60_float *)(a4))->v) = 0.0f;
    (((struct o58_float *)(a4))->v) = 0.0f;
    if ((*(signed char *)((a4 + 0x375A))) == 1) {
        t0 = *(signed char *)((a4 + 0x1));
        t1 = 0x16;
        t2 = (t0);
        t3 = t0;
        t0 = 0x16;
    } else {
        t3 = *(signed char *)((a4 + 0x1));
        t1 = 0x19;
        t2 = (t3);
        t0 = 0x19;
    }
    FUN_0c07e79c(a4, t3, 0x1, t0, t2, 0x1, t1);
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
    *(unsigned short *)((a4 + 0x1C)) = 0x0;
    *(unsigned short *)((a4 + 0x1E)) = 0x0;
    (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
    return 0x17;
}

int FUN_0c0a9ffc(int a4)
{
    register int t0;
    register int t1;

    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    if ((*(signed char *)((a4 + 0x3731))) == 0) {
        *(unsigned int *)((a4 + 0x38)) = (FUN_0c07d774(a4));
    }
    (((struct o54_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    (((struct o60_float *)(a4))->v) = 0.0f;
    (((struct o58_float *)(a4))->v) = 0.0f;
    (((struct o50_float *)(a4))->v) = 0.0f;
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
    FUN_0c059e60(a4, 0xA);
    *(unsigned short *)((a4 + 0x1E)) = 0x0;
    (((struct o20_ushort *)(a4))->v) = 0x0;
    return 0x20;
}

int FUN_0c0aa412(int a4)
{
    register int t0;
    register int t1;

    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    if ((*(signed char *)((a4 + 0x3731))) == 0) {
        *(unsigned int *)((a4 + 0x38)) = (FUN_0c07d774(a4));
    }
    (((struct o54_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    (((struct o60_float *)(a4))->v) = 0.0f;
    (((struct o58_float *)(a4))->v) = 0.0f;
    (((struct o50_float *)(a4))->v) = 0.0f;
    t0 = *(signed char *)((a4 + 0x1));
    FUN_0c07e79c(a4, t0, 0x1, 0x13, (t0), 0x1, 0x13);
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
    FUN_0c059e60(a4, 0xA);
    *(unsigned short *)((a4 + 0x1E)) = 0x0;
    (((struct o20_ushort *)(a4))->v) = 0x0;
    return 0x20;
}

int FUN_0c09d834(int a4)
{
    register int t0;
    register int t1;
    register float u0;

    FUN_0c038362(a4);
    t0 = FUN_0c037bf6(a4);
    t1 = (unsigned char)t0;
    if ((unsigned char)t0 != 0) {
        FUN_0c07d030(a4, 0x2);
        t0 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t0, 0x1, 0x20, (t0), 0x1, 0x20);
        u0 = (((struct o0_float *)0xC09D964)->v);
        (((struct o4C_float *)(a4))->v) = ((math_cos_angle16(((-(*(int *)((a4 + 0x38)))) + 0x14000))) * u0);
        (((struct o50_float *)(a4))->v) = ((((struct oC_float *)0xC09D964)->v));
        (((struct o5C_float *)(a4))->v) = ((((struct o10_float *)0xC09D964)->v));
        (((struct o54_float *)(a4))->v) = ((math_sin_angle16(((-(*(int *)((a4 + 0x38)))) + 0x14000))) * u0);
        *(unsigned short *)((a4 + 0x1C)) = 0xF;
        (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
        (((struct o1B_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x1B))) + 0x1);
        t1 = 0x1B;
    }
    return t1;
}

int FUN_0c09dafc(int a4)
{
    register int t0;
    register int t1;

    (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
    (((struct o54_float *)(a4))->v) = 0.0f;
    (((struct o50_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    (((struct o60_float *)(a4))->v) = 0.0f;
    (((struct o5C_float *)(a4))->v) = 0.0f;
    (((struct o58_float *)(a4))->v) = 0.0f;
    t0 = *(signed char *)((a4 + 0x1));
    FUN_0c07e79c(a4, t0, 0x1, 0x18, (t0), 0x1, 0x18);
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
    FUN_0c080320(a4, (*(float *)0xC09DBE4));
    *(unsigned int *)((a4 + 0x38)) = (FUN_0c07d774(a4));
    *(unsigned short *)((a4 + 0x1C)) = 0x1;
    *(unsigned short *)((a4 + 0x1E)) = 0x1B;
    return 0x1B;
}

int FUN_0c09d38c(int a4)
{
    int stk[6];
    register int t1;
    register int t2;
    register int t4;
    register int t5;
    register int t6;
    register int t7;

    (((struct o50_float *)(a4))->v) = 0.0f;
    (((struct o54_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    (((struct o5C_float *)(a4))->v) = 0.0f;
    (((struct o60_float *)(a4))->v) = 0.0f;
    (((struct o58_float *)(a4))->v) = 0.0f;
    *(unsigned int *)((a4 + 0x38)) = (FUN_0c07d774(a4));
    *(int *)((int)stk + 8) = 0x1A;
    *(int *)((int)stk + 4) = 0x1;
    t1 = *(signed char *)((a4 + 0x1));
    *(unsigned int *)(((int)stk + 12)) = t1;
    t2 = t1;
    *(int *)((int)stk + 0) = t2;
    FUN_0c07e79c(a4, t1, 0x1, 0x1A, t2, 0x1, 0x1A);
    t4 = *(int *)(((0x118 + a4) + 0x4));
    t5 = (((struct o118_int *)(a4))->v);
    (((struct oA0_float *)(t4))->v) = 1.0f;
    (((struct o9C_float *)(t4))->v) = 1.0f;
    (((struct oA0_float *)(t5))->v) = 1.0f;
    (((struct o9C_float *)(t5))->v) = 1.0f;
    t6 = *(int *)(((0x118 + a4) + 0x4));
    t7 = (((struct o118_int *)(a4))->v);
    (((struct o98_float *)(t6))->v) = 1.0f;
    (((struct o98_float *)(t7))->v) = 1.0f;
    (((struct o94_float *)(t6))->v) = 1.0f;
    (((struct o94_float *)(t7))->v) = 1.0f;
    FUN_0c12f304(a4, 0x1);
    (((struct o1B_uchar *)(a4))->v) = 0x0;
    *(unsigned short *)((a4 + 0x1C)) = 0xA;
    (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
    return 0x17;
}

int FUN_0c09d78a(int a4)
{
    int stk[6];
    register int t0;
    register int t1;
    register int t3;
    register int t4;
    register int t5;
    register int t6;

    *(int *)((int)stk + 8) = 0x1B;
    *(int *)((int)stk + 4) = 0x1;
    t0 = *(signed char *)((a4 + 0x1));
    *(unsigned int *)(((int)stk + 12)) = t0;
    t1 = t0;
    *(int *)((int)stk + 0) = t1;
    FUN_0c07e79c(a4, t0, 0x1, 0x1B, t1, 0x1, 0x1B);
    t3 = *(int *)(((0x118 + a4) + 0x4));
    t4 = (((struct o118_int *)(a4))->v);
    (((struct oA0_float *)(t3))->v) = 1.0f;
    (((struct o9C_float *)(t3))->v) = 1.0f;
    (((struct oA0_float *)(t4))->v) = 1.0f;
    (((struct o9C_float *)(t4))->v) = 1.0f;
    t5 = *(int *)(((0x118 + a4) + 0x4));
    t6 = (((struct o118_int *)(a4))->v);
    (((struct o98_float *)(t5))->v) = 1.0f;
    (((struct o98_float *)(t6))->v) = 1.0f;
    (((struct o94_float *)(t5))->v) = 1.0f;
    (((struct o94_float *)(t6))->v) = 1.0f;
    *(unsigned int *)((a4 + 0x38)) = (FUN_0c07d774(a4));
    (((struct o50_float *)(a4))->v) = 0.0f;
    (((struct o54_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    (((struct o5C_float *)(a4))->v) = 0.0f;
    (((struct o60_float *)(a4))->v) = 0.0f;
    (((struct o58_float *)(a4))->v) = 0.0f;
    FUN_0c12f304(a4, 0x1);
    (((struct o1B_uchar *)(a4))->v) = 0x0;
    *(unsigned short *)((a4 + 0x1C)) = 0xA;
    (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
    return 0x17;
}

int FUN_0c09fd44(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    *(unsigned int *)((a4 + 0x38)) = (FUN_0c07d774(a4));
    if ((*(signed char *)((a4 + 0x375A))) == 0) {
        t0 = *(signed char *)((a4 + 0x1));
        t1 = 0xE;
        t2 = (t0);
        t3 = t0;
        t0 = 0xE;
    } else {
        t3 = *(signed char *)((a4 + 0x1));
        t1 = 0x10;
        t2 = (t3);
        t0 = 0x10;
    }
    FUN_0c07e79c(a4, t3, 0x1, t0, t2, 0x1, t1);
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
    (((struct o17_uchar *)(a4))->v) = 0x0;
    *(unsigned short *)((a4 + 0x1C)) = 0x0;
    return FUN_0c07d030(a4, 0x0);
}

int FUN_0c0cbbd8(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;

    t0 = *(short *)((a4 + 0x1C));
    t1 = ((~(((~t0) + 0x1) & 0x1)) + 0x1);
    if ((int)t0 >= 0) {
        t1 = (t0 & 0x1);
    }
    (((struct oA8_uchar *)(a4))->v) = t1;
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    if ((short)(t0 - 1) == 0) {
        return FUN_0c0c2d56(a4, 0xB, 0x0, a7);
    }
    t0 = *(int *)0xC542260;
    t1 = (((struct oC4_int *)(a4))->v);
    u0 = (float)((t0 << 1) + (t0 << 2));
    if ((int)((t0 << 1) + (t0 << 2)) < 0) {
        u0 = ((float)((t0 << 1) + (t0 << 2)) + 4.2949673e+09f);
    }
    u1 = math_sin_angle16((int)((u0 * ((((struct o0_float *)0xC0CBCA0)->v))) / ((((struct o4_float *)0xC0CBCA0)->v))));
    (((struct o70_float *)(t1))->v) = (u1 * ((((struct oC_float *)0xC0CBCA0)->v)));
    t0 = (((struct oC4_int *)(a4))->v);
    (((struct o7C_uint *)(t0))->v) = (((((struct o7C_int *)(t0))->v)) + 0xB6);
    return 0x7C;
}

int FUN_0c08a696(int a4, float f4)
{
    int stk[2];
    register int t6;
    register int t7;
    register int t20;
    int t3;

    if (!((*(float *)0xC08A7A0) > ((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v))) && (t3 = (((struct o22_short *)(a4))->v), t3 == 0)) {
        (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) + 0x1);
        t6 = *(signed char *)((a4 + 0x1));
        t7 = 0x1;
        if ((*(signed char *)((a4 + 0x3731))) == 0) {
            t7 = 0x0;
        }
        FUN_0c0c3054(((((struct o376C_int *)(a4))->v)), t6, t7, f4);
        FUN_0c0c2380(a4, ((((struct o376C_int *)(a4))->v)));
    }
    FUN_0c037bf6(a4);
    if (!(((((struct o50_float *)(a4))->v)) > 0.0f)) {
        t20 = FUN_0c07ecc6(a4, 0x0, 0x0);
        if (t20 != 0) {
            return FUN_0c085cac(a4, 0x6, 0x0);
        }
    }
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    return math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
}
