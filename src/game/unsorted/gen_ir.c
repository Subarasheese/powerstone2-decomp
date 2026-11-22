/* Straight-line functions with calls and guards (batch gen_ir): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o118_int { char p[0x118]; int v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o3744_uchar { char p[0x3744]; unsigned char v; };
struct o37A0_float { char p[0x37A0]; float v; };
struct o3850_uint { char p[0x3850]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o418_int { char p[0x418]; int v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
int FUN_0c037bf6(int, int, int);
int FUN_0c038980(int);
int FUN_0c05261c(int);
int FUN_0c064f80(int);
int FUN_0c0737e8(int);
int FUN_0c074602(int);
int FUN_0c07bdd0(int, int);
int FUN_0c07d030(int, int);
int FUN_0c07d6cc(int);
int FUN_0c07d774(int);
int FUN_0c07db58(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c12d268(int, int);
int FUN_0c14fed8(int, int, float, float);
int FUN_0c15c344(int, int, int, float);
int FUN_0c161128(int);
int math_angle_between_points_xz(int, int);
int math_vec3_accumulate(int, int);
int thunk_FUN_0c058310(int, int);
int FUN_0c076812(int a4);
int FUN_0c079244(int a4);
int FUN_0c099d20(int a4, int a5, int a6);
int FUN_0c09a0c8(int a4);

int FUN_0c076812(int a4)
{
    register int t0;
    register int t1;

    t0 = 0x41;
    if ((*(signed char *)((((((struct o418_int *)(a4))->v)) + 0x8))) != 0) {
        t1 = 0x52;
        t0 = 0x52;
    } else {
        t1 = 0x41;
    }
    FUN_0c07e79c(a4, 0xFFFFFFFF, 0x4, t0, 0xFFFFFFFF, 0x4, t1);
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
    FUN_0c161128((*(signed char *)((a4 + 0x1))));
    if ((*(signed char *)((a4 + 0x373F))) == -1) {
        t0 = (FUN_0c07d6cc(a4));
    } else {
        t0 = (math_angle_between_points_xz((a4 + 0x28), (((short)(*(signed char *)((a4 + 0x373F))) * (short)0x3938) + 0xC5324C0)));
    }
    *(unsigned int *)((a4 + 0x38)) = t0;
    (((struct o50_float *)(a4))->v) = 0.0f;
    (((struct o5C_float *)(a4))->v) = ((((struct o37A0_float *)(a4))->v));
    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
    return 0x16;
}

int FUN_0c079244(int a4)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = FUN_0c064f80(a4);
    if (t0 != 0) {
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x4, 0x54, 0xFFFFFFFF, 0x4, 0x54);
        FUN_0c038980(a4);
        (((struct o50_float *)(a4))->v) = 0.0f;
        (((struct o5C_float *)(a4))->v) = ((((struct o37A0_float *)(a4))->v));
        (((struct o16_uchar *)(a4))->v) = 0x4;
    } else {
        FUN_0c074602(a4);
        thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532564))) + 0x28), (a4 + 0x28));
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x4, 0x27, 0xFFFFFFFF, 0x4, 0x27);
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
        (((struct o22_ushort *)(a4))->v) = 0x0;
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        u0 = 1.0f;
    }
    *(unsigned short *)((a4 + 0x1C)) = 0xB4;
    (((struct o3744_uchar *)(a4))->v) = 0x1C;
    t0 = 0xD;
    if ((unsigned char)(*(signed char *)((((((struct o418_int *)(a4))->v)) + 0x8))) == 1) {
        t0 = 0x5;
    }
    return FUN_0c15c344(a4, (a4 + 0x28), t0, u0);
}

int FUN_0c099d20(int a4, int a5, int a6)
{
    int stk[7];
    register int t22;
    register int t4;
    register int t13;
    register int t14;

    FUN_0c037bf6(a4, a5, a6);
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    t22 = 0x50;
    if (0.0f > ((((struct o50_float *)(a4))->v))) {
        t4 = FUN_0c07ecc6(a4, 0x0, 0x0);
        t22 = t4;
        if (t4 != 0) {
            FUN_0c05261c((*(int *)0xC241C34));
            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 12) + 0x4)) = *(struct mv3 *)((a4 + 0x28)); }
            *(float *)(((int)stk + 20)) = ((*(float *)(((int)stk + 20))) + ((((struct o0_float *)0xC099F4C)->v)));
            FUN_0c14fed8((*(signed char *)((a4 + 0x1))), (((int)stk + 12) + 0x4), (1.0f + 1.0f), ((((struct o4_float *)0xC099F4C)->v)));
            FUN_0c12d268(a4, 0x0);
            (((struct o50_float *)(a4))->v) = 0.0f;
            (((struct o5C_float *)(a4))->v) = 0.0f;
            *(int *)((int)stk + 8) = 0x12;
            *(int *)((int)stk + 4) = 0x1;
            t13 = *(signed char *)((a4 + 0x1));
            *(unsigned int *)(((int)stk + 12)) = t13;
            t14 = t13;
            *(int *)((int)stk + 0) = t14;
            FUN_0c07e79c(a4, t13, 0x1, 0x12, t14, 0x1, 0x12);
            FUN_0c0737e8(a4);
            *(unsigned short *)((a4 + 0x1C)) = 0x0;
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            FUN_0c07db58(a4);
            t22 = (FUN_0c07bdd0(a4, 0x23));
        }
    }
    return t22;
}

int FUN_0c09a0c8(int a4)
{
    register int t0;
    register int t1;

    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    (((struct o50_float *)(a4))->v) = 0.0f;
    (((struct o54_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    (((struct o5C_float *)(a4))->v) = 0.0f;
    (((struct o60_float *)(a4))->v) = 0.0f;
    (((struct o58_float *)(a4))->v) = 0.0f;
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
    FUN_0c07d030(a4, 0x0);
    *(unsigned short *)((a4 + 0x1C)) = 0xD;
    *(unsigned short *)((a4 + 0x1E)) = 0x17;
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
