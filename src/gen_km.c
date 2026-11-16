/* Straight-line functions with calls and guards (batch gen_km): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o11C_int { char p[0x11C]; int v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o168_float { char p[0x168]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o24_float { char p[0x24]; float v; };
struct o26_uchar { char p[0x26]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o3728_uchar { char p[0x3728]; unsigned char v; };
struct o3770_int { char p[0x3770]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o44_int { char p[0x44]; int v; };
struct o446_uchar { char p[0x446]; unsigned char v; };
struct o447_uchar { char p[0x447]; unsigned char v; };
struct o48_float { char p[0x48]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAA_uchar { char p[0xAA]; unsigned char v; };
struct oAB_uchar { char p[0xAB]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oD4_int { char p[0xD4]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c03fb78(int, int);
int FUN_0c0582de(int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c07d086(int, int, float);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c085d0c(int, int, int, int);
int FUN_0c0d039e(int, int);
int FUN_0c0e33cc(int, int, int);
int FUN_0c0e34a8(int);
int FUN_0c0e5aa8(int);
int FUN_0c0f485a(int);
int FUN_0c17c130(int, int, int);
int FUN_0c187798(int, int, int);
int math_atan2_angle16(float, float);
float math_signed_sqrt(float);
float math_sin_angle16(int);
int math_vec3_mul_xyz(int, float, float, float);
int nlCalcPoint(int, int);
int thunk_FUN_0c058310(int, int);
int thunk_FUN_0c05abb2(int, int);
int FUN_0c0e37e6(int a4);
int FUN_0c0f4920(int a4, int a5, int a6, int a7);
float FUN_0c14b84a(int a4, int a5, int a6, int a7);
int FUN_0c0aaa46(int a4, int a5, int a6, int a7);
int FUN_0c151fd2(int a4);
int FUN_0c163514(int a4, int a5, int a6, int a7);
int FUN_0c03a178(int a4, int a5);

int FUN_0c0e37e6(int a4)
{
    int stk[4];
    register int t0;
    register int t1;
    register int t12;
    register int t16;
    int t23;
    register int t24;
    register int t32;
    register int t38;
    register int t42;
    register int t45;
    int t3;
    register int t18;

    t0 = *(signed char *)0xC54098E;
    t1 = *(signed char *)((a4 + 0x2));
    if ((t1 != (*(int *)(((((t0 << 2) << 2) + 0xC288050) + 0x0)))) && (t3 = *(int *)(((((t0 << 2) << 2) + 0xC288050) + 0x4)), t1 != t3)) {
        t12 = ((int (*)(int, int, int))(FUN_0c187798))((((t0 << 2) << 2) + 0xC288050), 0xC1CBC08, (((t0 << 2) << 2) + 0xC288050));
        t16 = 0x28;
        if ((*(signed char *)((a4 + 0x2))) == (*(int *)(((0xC288050 + (((*(signed char *)0xC54098E) << 2) << 2)) + 0x0)))) {
            t16 = 0x1C;
        }
        *(float *)(((int)stk + 8)) = (*(float *)((t18 + t16)));
        FUN_0c0e33cc(a4, (((int)stk + 0) + 0x4), (*(short *)0xC540994));
        thunk_FUN_0c05abb2(0x42, (a4 + 0x28));
        (((struct o15_uchar *)(a4))->v) = 0x3;
        (((struct o16_uchar *)(a4))->v) = 0x0;
        t23 = *(signed char *)0xC54098D;
        if ((t23 != 4) && (t23 != 12)) {
        } else {
            t24 = ((int (*)(int))(FUN_0c187798))(t23);
            *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) + (*(float *)0xC0E3A60));
            FUN_0c0e5aa8((((int)stk + 0) + 0x4));
        }
        t32 = *(signed char *)((a4 + 0x2));
        *(unsigned int *)(((int)stk + 0)) = ((((t32 - 1) << 2) << 1) + 0xC1CBC68);
        FUN_0c0d039e((*(int *)(((*(int *)(((int)stk + 0))) + 0x0))), (*(int *)((((((t32 - 1) << 2) << 1) + 0xC1CBC68) + 0x4))));
    } else {
        t38 = *(signed char *)0xC54098D;
        if (t38 == 8) {
            t42 = *(short *)0xC540994;
            t45 = 0xC1CBC44;
            if ((*(signed char *)((a4 + 0x2))) == (*(int *)(((((t0 << 2) << 2) + 0xC288050) + 0x0)))) {
                t45 = 0xC1CBC38;
            }
            FUN_0c0e33cc(a4, t45, t42);
            (((struct o15_uchar *)(a4))->v) = 0x4;
            (((struct o16_uchar *)(a4))->v) = 0x5;
        } else {
            if (t38 == 19) {
                (((struct o15_uchar *)(a4))->v) = 0x7;
                (((struct o58_float *)(a4))->v) = ((((struct o28_float *)(a4))->v));
            }
        }
    }
    return (FUN_0c0e34a8(a4));
}

int FUN_0c0f4920(int a4, int a5, int a6, int a7)
{
    int stk[8];
    register int t0;
    register int t3;
    register int t4;
    register int t11;
    register int t15;
    register int t16;
    register int t25;
    register int t26;
    register int t29;

    *(unsigned int *)(((int)stk + 16)) = a4;
    *(unsigned int *)(((int)stk + 28)) = a5;
    *(unsigned int *)(((int)stk + 24)) = a6;
    t0 = *(int *)(((int)stk + 16));
    *(unsigned int *)(((int)stk + 20)) = ((t0 << 2) << 1);
    t3 = FUN_0c037320(0x0, (*(int *)((((t0 << 2) << 1) + 0xC4B40E0))));
    t4 = FUN_0c03f444(0x2, 0x0, t3);
    if (t4 == 0) {
    } else {
        FUN_0c03733c(t4, 0x0, (*(int *)((((*(int *)(((int)stk + 20))) + 0xC4B40DC) + 0x4))));
        FUN_0c03fb78(t4, 0x2);
        (((struct o68_uint *)(((((struct oC8_int *)(t4))->v))))->v) = (((((struct o11C_int *)(t4))->v)) + 0x24);
        t11 = (((struct oC4_int *)(t4))->v);
        (((struct o74_float *)(t11))->v) = 0.0f;
        (((struct o70_float *)(t11))->v) = 0.0f;
        (((struct o6C_float *)(t11))->v) = 0.0f;
        *(unsigned int *)((t4 + 0x4)) = 0xC0F4662;
        *(unsigned char *)((t4 + 0x1)) = (*(int *)(((int)stk + 16)));
        (((struct oAC_ushort *)(t4))->v) = 0x1F;
        (((struct oA9_uchar *)(t4))->v) = 0x40;
        *(unsigned char *)((t4 + 0x2)) = (*(signed char *)((a7 + 0x8)));
        *(unsigned char *)(((0x41C + t4) + 0x3)) = (*(signed char *)((a7 + 0x0)));
        t15 = ((int (*)(int))(FUN_0c187798))(t11);
        t16 = ((int (*)(void))(FUN_0c187798))();
        (((struct o160_float *)(t4))->v) = (float)(*(int *)((a7 + 0x4)));
        *(unsigned int *)((t4 + 0x38)) = (*(int *)((a7 + 0x24)));
        *(unsigned char *)(((0x41C + t4) + 0x4)) = (*(signed char *)((a7 + 0x28)));
        *(unsigned char *)(((0x41C + t4) + 0x5)) = (*(signed char *)(((a7 + 0x29) + 0x0)));
        *(unsigned char *)(((0x41C + t4) + 0x6)) = (*(signed char *)((a7 + 0x2A)));
        *(unsigned char *)(((0x41C + t4) + 0x7)) = (*(signed char *)((a7 + 0x2B)));
        *(unsigned char *)(((0x41C + t4) + 0xA)) = (*(signed char *)((a7 + 0x2C)));
        FUN_0c0f485a(t4);
        *(int *)((int)stk + 12) = 0xFF;
        t25 = *(signed char *)((t4 + 0x1));
        *(int *)((int)stk + 8) = (~((int)0x1 << (int)t25));
        *(int *)((int)stk + 4) = 0x0;
        t26 = *(signed char *)((t4 + 0x1));
        *(int *)((int)stk + 0) = ((int)0x1 << (int)t26);
        FUN_0c064d24(t4, 0x1, 0x0, 0x3, ((int)0x1 << (int)t26), 0x0, (~((int)0x1 << (int)t25)), 0xFF);
        (((struct o26_uchar *)(t4))->v) = 0x1;
        (((struct oAA_uchar *)(t4))->v) = 0x1;
        (((struct oAB_uchar *)(t4))->v) = 0x2;
        *(unsigned char *)(((0x41C + t4) + 0x1)) = (*(signed char *)(((int)stk + 28)));
        t29 = *(int *)(((int)stk + 24));
        if (t29 != 0) {
            if (t29 != 1) {
                (((struct o15_uchar *)(t4))->v) = 0x2;
            } else {
                (((struct o15_uchar *)(t4))->v) = 0x8;
            }
        } else {
            (((struct o15_uchar *)(t4))->v) = 0x9;
            (((struct o40_float *)(t4))->v) = 1.0f;
            (((struct o48_float *)(t4))->v) = 1.0f;
        }
    }
    return t4;
}

float FUN_0c14b84a(int a4, int a5, int a6, int a7)
{
    int stk[3];

    register int R1;
    register int R2;
    register int R3;
    register int R10;
    register float F0;
    register float F2;
    register float F3;
    register float F4;
    register float F5;
    register float F14;
    register float F15;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register float w0_0;
    register float w0_1;
    v0_2 = a4;
    v0_7 = *(signed char *)((v0_2 + 0x14));
    v0_0 = *(int *)((v0_2 + 0x10));
    v0_6 = (v0_7);
    v0_1 = ((0x38F8 + v0_0));
    v0_3 = (v0_0);
    v0_0 = (v0_2);
    v0_4 = (0x1);
    v0_5 = (0x0);
    if ((v0_7 == 0)) goto L_C14B874;
    if ((v0_6 == 1)) goto L_C14B88E;
    v0_6 = ((FUN_0c03f346(v0_0, v0_4, v0_5, a7)));
    L_C14B994:;
    return F0;
    L_C14B88E:;
    v0_7 = *(signed char *)((v0_0 + 0x15));
    v0_6 = (v0_7);
    if ((v0_7 == 0)) goto L_C14B89E;
    if (!((v0_6 == 1))) goto L_C14B91C;
    v0_6 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_6 - 1);
    if (((int)(short)(v0_6 - 1) > 0)) goto L_C14B91C;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    goto L_C14B91C;
    L_C14B91C:;
    FUN_0c187798(v0_2, v0_4, v0_5);
    FUN_0c0582de((v0_0 + 0x28), (((((struct oD4_int *)(v0_3))->v)) + 0x28));
    *(float *)((((int)stk + 0) + 0x0)) = (((((struct o1C_float *)(v0_1))->v)) - ((((struct o28_float *)(v0_0))->v)));
    (((struct o4_float *)(((int)stk + 0)))->v) = (((((struct o20_float *)(v0_1))->v)) - ((((struct o2C_float *)(v0_0))->v)));
    w0_0 = (((struct o30_float *)(v0_0))->v);
    w0_1 = (((struct o24_float *)(v0_1))->v);
    (((struct o8_float *)(((int)stk + 0)))->v) = (w0_1 - w0_0);
    *(unsigned int *)((v0_0 + 0x38)) = (math_atan2_angle16((*(float *)((((int)stk + 0) + 0x0))), (w0_1 - w0_0)));
    w0_1 = (((struct o8_float *)(((int)stk + 0)))->v);
    w0_0 = *(float *)((((int)stk + 0) + 0x0));
    w0_1 = (w0_1 * w0_1);
    w0_1 = w0_1 + w0_0 * w0_0;
    w0_0 = math_signed_sqrt(w0_1);
    v0_1 = math_atan2_angle16((-((((struct o4_float *)(((int)stk + 0)))->v))), w0_0);
    *(unsigned int *)((v0_0 + 0x34)) = v0_1;
    v0_6 = (v0_1);
    goto L_C14B994;
    L_C14B89E:;
    v0_6 = *(short *)((v0_0 + 0x1E));
    *(unsigned short *)((v0_0 + 0x1E)) = (v0_6 + 0x1);
    v0_2 = (v0_5);
    if (((int)(short)(v0_6 + 0x1) < (int)0xC)) goto L_C14B8B6;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    L_C14B8B6:;
    L_C14B8D8:;
    if (((int)v0_2 < (int)((((struct oC0_int *)(v0_0))->v)))) goto L_C14B8BA;
    goto L_C14B91C;
    L_C14B8BA:;
    v0_6 = *(short *)((v0_0 + 0x1E));
    if (((int)(((int)((unsigned int)((int)((unsigned int)v0_6 + (unsigned int)0x0)) + ((((int)0x0 > (int)v0_6)) ? 1u : 0u))) >> 1) < (int)v0_2)) goto L_C14B8D6;
    *(unsigned char *)(((*(int *)((((v0_2 << 2) + (0xC4 + v0_0)) + 0x0))) + 0x0)) = v0_4;
    L_C14B8D6:;
    v0_2 = ((v0_2 + 0x1));
    goto L_C14B8D8;
    L_C14B874:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    (((struct o15_uchar *)(v0_0))->v) = v0_5;
    (((struct oA8_uchar *)(v0_0))->v) = v0_4;
    *(unsigned short *)((v0_0 + 0x1C)) = 0x1E;
    *(unsigned short *)((v0_0 + 0x1E)) = v0_5;
    goto L_C14B88E;
}

int FUN_0c0aaa46(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;
    register float u1;
    register float u2;

    if (((((struct o3770_int *)(a4))->v)) == 0) {
        return FUN_0c085d0c(a4, a5, a6, a7);
    }
    t1 = *(signed char *)((a4 + 0x1));
    FUN_0c07e79c(a4, t1, 0x5, 0x2, (t1), 0x5, 0x2);
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
    FUN_0c07e79c(((((struct o3770_int *)(a4))->v)), 0xFFFFFFFF, 0x5, 0x31, 0xFFFFFFFF, 0x5, 0x31);
    t1 = (((struct o3770_int *)(a4))->v);
    t2 = *(int *)(((t1 + 0x118) + 0x4));
    t3 = (((struct o118_int *)(t1))->v);
    (((struct oA0_float *)(t2))->v) = 1.0f;
    (((struct o9C_float *)(t2))->v) = 1.0f;
    (((struct oA0_float *)(t3))->v) = 1.0f;
    (((struct o9C_float *)(t3))->v) = 1.0f;
    t1 = (((struct o3770_int *)(a4))->v);
    t2 = *(int *)(((t1 + 0x118) + 0x4));
    t3 = (((struct o118_int *)(t1))->v);
    (((struct o98_float *)(t2))->v) = 1.0f;
    (((struct o98_float *)(t3))->v) = 1.0f;
    (((struct o94_float *)(t2))->v) = 1.0f;
    (((struct o94_float *)(t3))->v) = 1.0f;
    (((struct o3728_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x0;
    u1 = *(float *)0xC541098;
    if ((((((struct o168_float *)(a4))->v)) > u1) && (t0 = (((struct o3770_int *)(a4))->v), u0 = (((struct o168_float *)(t0))->v), u0 > u1)) {
        u0 = (((struct o168_float *)(a4))->v);
        u1 = (((struct o168_float *)(((((struct o3770_int *)(a4))->v))))->v);
        u2 = u1;
        if (u1 > u0) {
            u2 = u0;
        }
        (((struct o2C_float *)(a4))->v) = (u2 + -1.0f);
    }
    (((struct o446_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x1;
    (((struct o447_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x1;
    FUN_0c07d086(a4, 0x0, (*(float *)0xC0AABDC));
    *(unsigned short *)((a4 + 0x1C)) = 0x0;
    *(unsigned short *)((a4 + 0x1E)) = 0xE;
    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    return 0x15;
}


int FUN_0c163514(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = (((struct oC4_int *)(a4))->v);
    t1 = *(signed char *)((a4 + 0x14));
    if (t1 != 0) {
        if (t1 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        if (((*(short *)((a4 + 0x1C))) & 3) == 0) {
            *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
            if ((int)(*(short *)((a4 + 0x1E))) > (int)0x7) {
                *(unsigned short *)((a4 + 0x1E)) = 0x7;
            }
            FUN_0c03744a(t0, (*(short *)((a4 + 0x1E))), 0x9, (*(int *)0xC4B40CC));
        }
        u0 = (((struct o40_float *)(a4))->v);
        (((struct o40_float *)(a4))->v) = (u0 + 0.0199999996f);
        (((struct o48_float *)(a4))->v) = (u0 + 0.0199999996f);
        (((struct o44_float *)(a4))->v) = (u0 + 0.0199999996f);
        (((struct o84_float *)(t0))->v) = (((((struct o84_float *)(t0))->v)) + 0.0900000036f);
        u0 = (((struct o40_float *)(a4))->v);
        (((struct o8C_float *)(t0))->v) = u0;
        (((struct o88_float *)(t0))->v) = u0;
        t1 = *(signed char *)((a4 + 0x15));
        if (t1 != 0) {
            if (t1 != 1) {
                u0 = (((struct o18_float *)(t0))->v);
                (((struct o18_float *)(t0))->v) = (u0 - 0.0500000007f);
                (((struct o20_float *)(t0))->v) = (u0 - 0.0500000007f);
                (((struct o1C_float *)(t0))->v) = (u0 - 0.0500000007f);
                t1 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t1 + 0x1);
                if ((int)(short)(t1 + 0x1) >= (int)0xA) {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    *(unsigned short *)((a4 + 0x1C)) = 0x0;
                }
            } else {
                t1 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t1 + 0x1);
                if ((int)(short)(t1 + 0x1) >= (int)0xA) {
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    *(unsigned short *)((a4 + 0x1C)) = 0x0;
                }
            }
        } else {
            u0 = (((struct o18_float *)(t0))->v);
            (((struct o18_float *)(t0))->v) = (u0 + 0.0799999982f);
            (((struct o20_float *)(t0))->v) = (u0 + 0.0799999982f);
            (((struct o1C_float *)(t0))->v) = (u0 + 0.0799999982f);
            t1 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t1 + 0x1);
            if ((int)(short)(t1 + 0x1) < (int)0xA) {
            } else {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                *(unsigned short *)((a4 + 0x1C)) = 0x0;
            }
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        *(unsigned short *)((a4 + 0x1E)) = 0x0;
        if (((*(short *)((a4 + 0x1C))) & 3) == 0) {
            *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
            if ((int)(*(short *)((a4 + 0x1E))) > (int)0x7) {
                *(unsigned short *)((a4 + 0x1E)) = 0x7;
            }
            FUN_0c03744a(t0, (*(short *)((a4 + 0x1E))), 0x9, (*(int *)0xC4B40CC));
        }
        u0 = (((struct o40_float *)(a4))->v);
        (((struct o40_float *)(a4))->v) = (u0 + 0.0199999996f);
        (((struct o48_float *)(a4))->v) = (u0 + 0.0199999996f);
        (((struct o44_float *)(a4))->v) = (u0 + 0.0199999996f);
        (((struct o84_float *)(t0))->v) = (((((struct o84_float *)(t0))->v)) + 0.0900000036f);
        u0 = (((struct o40_float *)(a4))->v);
        (((struct o8C_float *)(t0))->v) = u0;
        (((struct o88_float *)(t0))->v) = u0;
        t1 = *(signed char *)((a4 + 0x15));
        if (t1 != 0) {
            if (t1 != 1) {
                u0 = (((struct o18_float *)(t0))->v);
                (((struct o18_float *)(t0))->v) = (u0 - 0.0500000007f);
                (((struct o20_float *)(t0))->v) = (u0 - 0.0500000007f);
                (((struct o1C_float *)(t0))->v) = (u0 - 0.0500000007f);
                t1 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t1 + 0x1);
                if ((int)(short)(t1 + 0x1) >= (int)0xA) {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    *(unsigned short *)((a4 + 0x1C)) = 0x0;
                }
            } else {
                t1 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t1 + 0x1);
                if ((int)(short)(t1 + 0x1) >= (int)0xA) {
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    *(unsigned short *)((a4 + 0x1C)) = 0x0;
                }
            }
        } else {
            u0 = (((struct o18_float *)(t0))->v);
            (((struct o18_float *)(t0))->v) = (u0 + 0.0799999982f);
            (((struct o20_float *)(t0))->v) = (u0 + 0.0799999982f);
            (((struct o1C_float *)(t0))->v) = (u0 + 0.0799999982f);
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
            if ((int)(short)(t0 + 0x1) < (int)0xA) {
            } else {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                *(unsigned short *)((a4 + 0x1C)) = 0x0;
            }
        }
    }
    FUN_0c17c130((a4 + 0x4C), (a4 + 0x4C), (a4 + 0x58));
    return FUN_0c17c130((a4 + 0x28), (a4 + 0x28), (a4 + 0x4C));
}

int FUN_0c03a178(int a4, int a5)
{
    int stk[9];
    register float u5;
    register int t7;
    register float u8;
    register int t9;
    register float u10;
    register int t11;
    register int t12;
    register int t13;
    register int t14;
    register int t15;
    register int t16;
    register float u20;
    register float u30;
    register float u42;
    register float u40;
    register float u52;
    register float u53;
    register int t54;
    register float u58;
    register int t60;
    register float u63;
    register int t17;
    register int t18;
    register int t19;
    register float u21;
    register int t66;
    register int t67;
    register int t68;
    register float u69;

    *(unsigned int *)(((int)stk + 4)) = a5;
    t16 = *(int *)((a4 + 0x28));
    *(unsigned int *)(((int)stk + 8)) = ((((struct o44_int *)(a4))->v));
    *(unsigned int *)(((int)stk + 24)) = (*(int *)((a4 + 0x2C)));
    *(unsigned int *)(((int)stk + 16)) = (*(int *)((a4 + 0x34)));
    *(unsigned int *)(((int)stk + 28)) = (*(int *)((a4 + 0x38)));
    u5 = (((struct o20_float *)(a4))->v);
    t7 = *(int *)((a4 + 0x3C));
    *(float *)(((int)stk + 12)) = ((((struct o18_float *)(a4))->v));
    u8 = (((struct o1C_float *)(a4))->v);
    *(float *)(((int)stk + 32)) = u8;
    t9 = *(int *)0xC542260;
    u10 = (((struct o14_float *)(a4))->v);
    *(unsigned int *)(((int)stk + 20)) = ((t9 << 8) << 2);
    t11 = 0x14;
    t12 = ((t9 << 8) << 2);
    t13 = a4;
    t14 = a5;
    t15 = 0x0;
    u20 = u8;
    for (;;) {
        if ((int)t15 >= (int)(*(int *)(((int)stk + 24)))) {
            break;
        }
        t19 = *(short *)((t16 + 0x0));
        t16 = (t16 + 0x2);
        t11 = (*(int *)(((int)stk + 8)));
        t13 = t19;
        t13 = (t13 << 2);
        t12 = (*(int *)((t13 + t11)));
        if (t12 != 0) {
            t18 = (*(int *)(((int)stk + 20)));
            t11 = t13;
            u30 = *(float *)((t7 + t11));
            t11 = 0xC03A404;
            u20 = (*(float *)((t11 + 0x0)));
            t12 = (int)(u30 * u20);
            t18 = (t18 + t12);
            if (u30 != 0.0f) {
                t11 = 0x8;
                u21 = 1.0f;
                u21 = (u21 + u21);
                u21 = (u21 / (u30 * (*(float *)((((int)stk + 4) + t11)))));
            } else {
                u21 = 1.0f;
            }
            if (u21 > 1.0f) {
                u21 = 1.0f;
            } else {
                if (u10 > u21) {
                    u21 = u10;
                }
            }
            t11 = 0x1C;
            u20 = (*(float *)((((int)stk + 4) + t11)));
            u42 = 1.0f;
            if ((u21 * u20) > 1.0f) {
            } else {
                u40 = (u21 * u20);
                if (u10 > (u21 * u20)) {
                    u40 = u10;
                }
                u42 = u40;
            }
            t11 = (*(int *)(((int)stk + 16)));
            t12 = (*(int *)(((int)stk + 4)));
            t17 = (*(int *)((t13 + t11)));
            t17 = (t17 << 2);
            t17 = (t17 + t12);
            t13 = t17;
            t11 = (math_vec3_mul_xyz(t13, u21, u42, u21));
            t12 = t19;
            t19 = (t19 << 1);
            t19 = (t19 + t12);
            t19 = (t19 << 2);
            t12 = 0xC17C130;
            t19 = (t19 + (*(int *)(((int)stk + 28))));
            t14 = t19;
            t13 = t19;
            t11 = (FUN_0c17c130(t13, t14, t17));
            t13 = t18;
            u52 = *(float *)((t19 + 0x0));
            t12 = t19;
            u20 = (math_sin_angle16(t13));
            t11 = 0x4;
            u53 = u52;
            u53 = u53 + u5 * u20;
            t12 = (t12 + t11);
            t13 = t18;
            *(float *)((t19 + 0x0)) = u53;
            t54 = t12;
            *(int *)((int)stk + 0) = t54;
            t13 = (t13 << 1);
            t12 = t19;
            u20 = (math_sin_angle16(t13));
            t11 = 0x8;
            t12 = (t12 + t11);
            t13 = t18;
            u58 = (*(float *)((t54 + 0x0)));
            u58 = u58 + u5 * u20;
            t13 = (t13 << 1);
            *(float *)((t54 + 0x0)) = u58;
            t60 = t12;
            *(int *)((int)stk + 0) = t60;
            t12 = t18;
            t13 = (t13 + t12);
            t14 = t17;
            u20 = (math_sin_angle16(t13));
            u63 = (*(float *)((t60 + 0x0)));
            u63 = u63 + u5 * u20;
            t12 = 0xC17A870;
            *(float *)((t60 + 0x0)) = u63;
            t13 = t19;
            t11 = (nlCalcPoint(t13, t14));
        } else {
            t66 = t12;
            t67 = t13;
            t68 = t14;
            u69 = u20;
        }
        u20 = u69;
        t12 = t66;
        t13 = t67;
        t14 = t68;
        t15 = (t15 + 0x1);
    }
    return t11;
}
