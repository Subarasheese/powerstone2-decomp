/* Straight-line functions with calls and guards (batch gen_gv): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
struct o0_int { int v; };
struct o10_int { char p[0x10]; int v; };
struct o100_int { char p[0x100]; int v; };
struct o10C_int { char p[0x10C]; int v; };
struct o118_int { char p[0x118]; int v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o14_float { char p[0x14]; float v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o168_float { char p[0x168]; float v; };
struct o18_int { char p[0x18]; int v; };
struct o1C_int { char p[0x1C]; int v; };
struct o20_int { char p[0x20]; int v; };
struct o24_int { char p[0x24]; int v; };
struct o28_float { char p[0x28]; float v; };
struct o28_int { char p[0x28]; int v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2C_int { char p[0x2C]; int v; };
struct o30_float { char p[0x30]; float v; };
struct o30_int { char p[0x30]; int v; };
struct o3768_int { char p[0x3768]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o48_int { char p[0x48]; int v; };
struct o50_float { char p[0x50]; float v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA4_int { char p[0xA4]; int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC_int { char p[0xC]; int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c03733c(int, int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c037bf6(int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c05883a(int, int, int, float, float, float);
int FUN_0c0588bc(int, int, int, int, int, int);
int FUN_0c058a6e(int, int, int, int, int, int);
int FUN_0c059df2(int, int);
int FUN_0c07e2f4(int, int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c085cac(int, int, int);
int FUN_0c085d0c(int, int, int);
int math_mat_get_translate(int, int);
int math_mat_transform_vector(int, int);
int math_vec3_accumulate(int, int);
int FUN_0c0a36c8(int a4, int a5, int a6);
float FUN_0c14f2ec(int a4, int a5, int a6, int a7);
int FUN_0c03445c(int a4, int a5, int a6, int a7);
int FUN_0c164a28(int a4, int a5, int a6, int a7);

int FUN_0c0a36c8(int a4, int a5, int a6)
{
    int stk[7];

    register int R3;
    register float F2;
    register float F3;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_10;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register int v0_9;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    v0_6 = a4;
    v0_4 = a5;
    v0_5 = a6;
    *(unsigned int *)(((int)stk + 8)) = 0xC25D2D8;
    v0_9 = ((((struct o50_float *)(v0_6))->v)) > 0.0f;
    v0_8 = (0x50);
    v0_0 = ((((((struct o48_int *)((0xC4 + v0_6)))->v)) + 0x84));
    v0_1 = (v0_6);
    v0_3 = ((((((struct o118_int *)(v0_6))->v)) + 0x8C));
    v0_2 = (((*(int *)(((0xC4 + v0_6) + 0x3C))) + 0x84));
    v0_6 = ((0xC4 + v0_6));
    v0_7 = (0xC25D2C0);
    v0_6 = (0xC25D2F0);
    if (v0_9) goto L_C0A3752;
    v0_9 = FUN_0c07ecc6(v0_1, 0x0, 0x0);
    v0_8 = (v0_9);
    if ((v0_9 == 0)) goto L_C0A3752;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct o100_int *)(v0_1))->v)) + 0x84)) = *(struct mv3 *)(0xC25D244); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct o10C_int *)(v0_1))->v)) + 0x84)) = *(struct mv3 *)(0xC25D244); }
    return FUN_0c085cac(v0_1, 0x6, 0x0);
    L_C0A3752:;
    v0_9 = (int)((unsigned int)(*(int *)0xC542260) % (unsigned int)0x3);
    v0_8 = (v0_9);
    if ((v0_9 != 0)) goto L_C0A3768;
    v0_8 = ((FUN_0c07e2f4(v0_1, 0xC)));
    L_C0A3768:;
    *(unsigned int *)(((int)stk + 0)) = (v0_6 + 0x14);
    v0_8 = *(int *)(((v0_6 + 0x14) + 0x0));
    FPUL_ = (v0_8);
    if (((float)v0_8 > (*(float *)((v0_3 + 0x0))))) goto L_C0A3790;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(v0_2) = *(struct mv3 *)(0xC25D244); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(v0_0) = *(struct mv3 *)(0xC25D244); }
    L_C0A395A:;
    v0_3 = FUN_0c037bf6(v0_1, v0_4, v0_5);
    v0_8 = ((unsigned char)v0_3);
    if (((unsigned char)v0_3 == 0)) goto L_C0A3990;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(v0_2) = *(struct mv3 *)(0xC25D244); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(v0_0) = *(struct mv3 *)(0xC25D244); }
    return FUN_0c085d0c(v0_1, v0_4, v0_5);
    L_C0A3990:;
    math_vec3_accumulate((v0_1 + 0x28), (v0_1 + 0x4C));
    return math_vec3_accumulate((v0_1 + 0x4C), (v0_1 + 0x58));
    L_C0A3790:;
    *(unsigned int *)(((int)stk + 4)) = (v0_6 + 0x10);
    *(unsigned int *)(((int)stk + 20)) = (v0_7 + 0x10);
    *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 8))) + 0x10);
    v0_9 = *(int *)(((*(int *)(((int)stk + 4))) + 0x0));
    v0_8 = ((v0_7 + 0x10));
    v0_10 = (0xC05883A);
    FPUL_ = (v0_9);
    if (((float)v0_9 > (*(float *)((v0_3 + 0x0))))) goto L_C0A381C;
    FUN_0c05883a(v0_2, (*(int *)(((*(int *)(((int)stk + 0))) + 0x0))), (*(int *)(((*(int *)(((int)stk + 4))) + 0x0))), ((((struct o14_float *)(v0_7))->v)), (*(float *)((v0_8 + 0x0))), (*(float *)((v0_3 + 0x0))));
    w0_0 = *(float *)((v0_2 + 0x0));
    (((struct o8_float *)(v0_2))->v) = w0_0;
    (((struct o4_float *)(v0_2))->v) = w0_0;
    v0_4 = ((*(int *)(((*(int *)(((int)stk + 0))) + 0x0))));
    v0_5 = ((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))));
    w0_1 = (((((struct o14_float *)((*(int *)(((int)stk + 8)))))->v)));
    w0_0 = ((*(float *)(((*(int *)(((int)stk + 12))) + 0x0))));
    w0_2 = ((*(float *)((v0_3 + 0x0))));
    L_C0A394C:;
    FUN_0c05883a(v0_0, v0_4, v0_5, w0_1, w0_0, w0_2);
    L_C0A3950:;
    w0_0 = *(float *)((v0_0 + 0x0));
    (((struct o8_float *)(v0_0))->v) = w0_0;
    (((struct o4_float *)(v0_0))->v) = w0_0;
    goto L_C0A395A;
    L_C0A381C:;
    *(unsigned int *)(((int)stk + 0)) = (v0_6 + 0xC);
    *(unsigned int *)(((int)stk + 16)) = (v0_7 + 0xC);
    *(unsigned int *)(((int)stk + 24)) = ((*(int *)(((int)stk + 8))) + 0xC);
    v0_9 = *(int *)(((*(int *)(((int)stk + 0))) + 0x0));
    v0_8 = ((v0_7 + 0xC));
    FPUL_ = (v0_9);
    if (((float)v0_9 > (*(float *)((v0_3 + 0x0))))) goto L_C0A386E;
    FUN_0c05883a(v0_2, (*(int *)(((*(int *)(((int)stk + 4))) + 0x0))), (*(int *)(((*(int *)(((int)stk + 0))) + 0x0))), (*(float *)(((*(int *)(((int)stk + 20))) + 0x0))), (*(float *)((v0_8 + 0x0))), (*(float *)((v0_3 + 0x0))));
    w0_0 = *(float *)((v0_2 + 0x0));
    (((struct o8_float *)(v0_2))->v) = w0_0;
    (((struct o4_float *)(v0_2))->v) = w0_0;
    v0_4 = ((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))));
    v0_5 = ((*(int *)(((*(int *)(((int)stk + 0))) + 0x0))));
    w0_0 = ((*(float *)(((*(int *)(((int)stk + 24))) + 0x0))));
    w0_2 = ((*(float *)((v0_3 + 0x0))));
    L_C0A386A:;
    v0_8 = ((*(int *)(((int)stk + 12))));
    L_C0A38BC:;
    FUN_0c05883a(v0_0, v0_4, v0_5, (*(float *)((v0_8 + 0x0))), w0_0, w0_2);
    goto L_C0A3950;
    L_C0A386E:;
    *(unsigned int *)(((int)stk + 4)) = (v0_6 + 0x8);
    *(unsigned int *)(((int)stk + 20)) = (v0_7 + 0x8);
    *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 8))) + 0x8);
    v0_9 = *(int *)(((v0_6 + 0x8) + 0x0));
    v0_8 = ((v0_6 + 0x8));
    FPUL_ = (v0_9);
    if (((float)v0_9 > (*(float *)((v0_3 + 0x0))))) goto L_C0A38C6;
    *(unsigned int *)(((int)stk + 4)) = v0_8;
    FUN_0c05883a(v0_2, (*(int *)(((*(int *)(((int)stk + 0))) + 0x0))), (*(int *)((v0_8 + 0x0))), (*(float *)(((*(int *)(((int)stk + 16))) + 0x0))), (*(float *)(((*(int *)(((int)stk + 20))) + 0x0))), (*(float *)((v0_3 + 0x0))));
    w0_0 = *(float *)((v0_2 + 0x0));
    (((struct o8_float *)(v0_2))->v) = w0_0;
    (((struct o4_float *)(v0_2))->v) = w0_0;
    v0_8 = ((*(int *)(((int)stk + 24))));
    v0_4 = ((*(int *)(((*(int *)(((int)stk + 0))) + 0x0))));
    v0_5 = ((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))));
    w0_0 = ((*(float *)(((*(int *)(((int)stk + 12))) + 0x0))));
    w0_2 = ((*(float *)((v0_3 + 0x0))));
    goto L_C0A38BC;
    L_C0A38C6:;
    *(unsigned int *)(((int)stk + 0)) = (v0_6 + 0x4);
    *(unsigned int *)(((int)stk + 24)) = (v0_7 + 0x4);
    *(unsigned int *)(((int)stk + 16)) = ((*(int *)(((int)stk + 8))) + 0x4);
    v0_9 = *(int *)(((*(int *)(((int)stk + 0))) + 0x0));
    v0_8 = ((v0_7 + 0x4));
    FPUL_ = (v0_9);
    if (((float)v0_9 > (*(float *)((v0_3 + 0x0))))) goto L_C0A3916;
    FUN_0c05883a(v0_2, (*(int *)(((*(int *)(((int)stk + 4))) + 0x0))), (*(int *)(((*(int *)(((int)stk + 0))) + 0x0))), (*(float *)(((*(int *)(((int)stk + 20))) + 0x0))), (*(float *)((v0_8 + 0x0))), (*(float *)((v0_3 + 0x0))));
    w0_0 = *(float *)((v0_2 + 0x0));
    (((struct o8_float *)(v0_2))->v) = w0_0;
    (((struct o4_float *)(v0_2))->v) = w0_0;
    v0_4 = ((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))));
    v0_5 = ((*(int *)(((*(int *)(((int)stk + 0))) + 0x0))));
    w0_0 = ((*(float *)(((*(int *)(((int)stk + 16))) + 0x0))));
    w0_2 = ((*(float *)((v0_3 + 0x0))));
    goto L_C0A386A;
    L_C0A3916:;
    v0_9 = *(int *)((v0_6 + 0x0));
    FPUL_ = (v0_9);
    if (((float)v0_9 > (*(float *)((v0_3 + 0x0))))) goto L_C0A395A;
    FUN_0c05883a(v0_2, (*(int *)(((*(int *)(((int)stk + 0))) + 0x0))), (*(int *)((v0_6 + 0x0))), (*(float *)((v0_8 + 0x0))), (*(float *)((v0_7 + 0x0))), (*(float *)((v0_3 + 0x0))));
    w0_0 = *(float *)((v0_2 + 0x0));
    (((struct o8_float *)(v0_2))->v) = w0_0;
    (((struct o4_float *)(v0_2))->v) = w0_0;
    v0_4 = ((*(int *)(((*(int *)(((int)stk + 0))) + 0x0))));
    v0_5 = ((*(int *)((v0_6 + 0x0))));
    w0_1 = ((*(float *)(((*(int *)(((int)stk + 16))) + 0x0))));
    w0_0 = ((*(float *)(((*(int *)(((int)stk + 8))) + 0x0))));
    w0_2 = ((*(float *)((v0_3 + 0x0))));
    goto L_C0A394C;
}

float FUN_0c14f2ec(int a4, int a5, int a6, int a7)
{
    int stk[6];

    register int R1;
    register int R2;
    register int R3;
    register float F0;
    register float F4;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    v0_3 = a4;
    v0_5 = a5;
    v0_2 = *(signed char *)((v0_3 + 0x14));
    v0_1 = (v0_2);
    v0_0 = (v0_3);
    if ((v0_2 == 0)) goto L_C14F310;
    if ((v0_1 != 1)) goto L_C14F30C;
    v0_1 = ((FUN_0c03f346(v0_0, v0_5, a6, a7)));
    L_C14F5CA:;
    return F0;
    L_C14F30C:;
    goto L_C14F5CA;
    L_C14F310:;
    (((struct oA8_uchar *)(v0_0))->v) = 0x0;
    v0_2 = *(signed char *)((v0_0 + 0x1));
    v0_1 = (0x160);
    v0_3 = (0xC532498);
    v0_5 = ((((short)v0_2 * (short)0x3938) + 0xC532498));
    if ((((((struct o160_float *)((((short)v0_2 * (short)0x3938) + 0xC532498)))->v)) != 0.0f)) goto L_C14F330;
    goto L_C14F5CA;
    L_C14F330:;
    v0_1 = (0x3714);
    if (((*(signed char *)((v0_5 + 0x3714))) != 0)) goto L_C14F33C;
    goto L_C14F5CA;
    L_C14F33C:;
    v0_5 = *(signed char *)((v0_0 + 0x1));
    v0_4 = (((struct o3768_int *)((((short)v0_5 * (short)0x3938) + v0_3)))->v);
    v0_1 = (0x3768);
    v0_2 = (v0_4);
    v0_5 = ((((short)v0_5 * (short)0x3938) + v0_3));
    if ((v0_4 != 0)) goto L_C14F352;
    goto L_C14F5CA;
    L_C14F352:;
    v0_1 = (0x14);
    if (((*(signed char *)((v0_5 + 0x14))) == 0)) goto L_C14F35E;
    goto L_C14F5CA;
    L_C14F35E:;
    v0_4 = *(signed char *)((v0_2 + 0x41D));
    v0_1 = (v0_4);
    if ((v0_4 == 2)) goto L_C14F36A;
    goto L_C14F5CA;
    L_C14F36A:;
    v0_6 = *(signed char *)((v0_2 + 0x41C));
    v0_1 = ((unsigned char)v0_6);
    v0_4 = (((int)((unsigned int)((int)((unsigned int)(*(int *)0xC542260) % (unsigned int)0x28)) / (unsigned int)0xA)));
    v0_5 = (0x1);
    w0_1 = (10.0f);
    w0_0 = (0.100000001f);
    if (((unsigned char)v0_6 == 0xCA)) goto L_C14F3AE;
    if ((v0_1 == 0xCD)) goto L_C14F418;
    if ((v0_1 == 0xC4)) goto L_C14F44A;
    if ((v0_1 != 0xCB)) goto L_C14F3AA;
    if (((*(signed char *)((0x3715 + (((short)(*(signed char *)((v0_0 + 0x1))) * (short)0x3938) + v0_3)))) == 40)) goto L_C14F580;
    (((struct oA8_uchar *)(v0_0))->v) = v0_5;
    (((struct o28_float *)(v0_0))->v) = ((((struct o28_float *)(v0_2))->v));
    v0_3 = *(signed char *)((v0_0 + 0x1));
    v0_1 = ((v0_3 + v0_4));
    if (((int)(v0_3 + v0_4) < 0)) goto L_C14F50A;
    v0_1 = ((v0_1 & 0x3));
    L_C14F514:;
    w0_1 = ((((struct o2C_float *)(v0_2))->v));
    w0_1 = w0_1 + w0_0 * (float)v0_1;
    (((struct o2C_float *)(v0_0))->v) = (w0_1 + -20.0f);
    F0 = (w0_0);
    FPUL_ = (v0_1);
    L_C14F578:;
    w0_0 = (((((struct o30_float *)(v0_2))->v)));
    L_C14F57C:;
    (((struct o30_float *)(v0_0))->v) = w0_0;
    L_C14F580:;
    if (((unsigned char)(*(signed char *)((v0_2 + 0x41C))) != 0xC4)) goto L_C14F5B2;
    if (((*(signed char *)((v0_2 + 0x3))) != 3)) goto L_C14F5B2;
    w0_0 = *(float *)0xC14F678;
    (((struct o40_float *)(v0_0))->v) = w0_0;
    (((struct o44_float *)(v0_0))->v) = w0_0;
    (((struct o48_float *)(v0_0))->v) = w0_0;
    (((struct o2C_float *)(v0_0))->v) = (((((struct o2C_float *)(v0_0))->v)) - 80.0f);
    v0_1 = (0x2C);
    FPUL_ = (0x42A00000);
    goto L_C14F5CA;
    L_C14F5B2:;
    (((struct o40_float *)(v0_0))->v) = (1.0f + 1.0f);
    (((struct o44_float *)(v0_0))->v) = (1.0f + 1.0f);
    (((struct o48_float *)(v0_0))->v) = (1.0f + 1.0f);
    v0_1 = (0x48);
    goto L_C14F5CA;
    L_C14F50A:;
    v0_1 = (((~(((~v0_1) + 0x1) & 0x3)) + 0x1));
    goto L_C14F514;
    L_C14F3AA:;
    (((struct oA8_uchar *)(v0_0))->v) = v0_5;
    (((struct o28_float *)(v0_0))->v) = ((((struct o28_float *)(v0_2))->v));
    v0_3 = *(signed char *)((v0_0 + 0x1));
    v0_1 = ((v0_3 + v0_4));
    if (((int)(v0_3 + v0_4) < 0)) goto L_C14F55C;
    v0_1 = ((v0_1 & 0x3));
    L_C14F566:;
    w0_2 = ((((struct o168_float *)(v0_2))->v));
    w0_2 = w0_2 + w0_0 * (float)v0_1;
    (((struct o2C_float *)(v0_0))->v) = (w0_2 + w0_1);
    F0 = (w0_0);
    FPUL_ = (v0_1);
    goto L_C14F578;
    L_C14F55C:;
    v0_1 = (((~(((~v0_1) + 0x1) & 0x3)) + 0x1));
    goto L_C14F566;
    L_C14F44A:;
    (((struct oA8_uchar *)(v0_0))->v) = v0_5;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0xC)) = *(struct mv3 *)((v0_2 + 0x28)); }
    v0_1 = (0xA4);
    if ((((((struct oA4_int *)(v0_2))->v)) == 0)) goto L_C14F4AC;
    math_mat_get_translate((*(int *)((v0_2 + v0_1))), (((int)stk + 0) + 0xC));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)((v0_2 + 0x28)); }
    math_mat_transform_vector(((int)stk + 0), ((((struct oA4_int *)(v0_2))->v)));
    *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) + (*(float *)(((int)stk + 0))));
    *(float *)(((int)stk + 16)) = ((*(float *)(((int)stk + 16))) + (*(float *)(((int)stk + 4))));
    *(float *)(((int)stk + 20)) = ((*(float *)(((int)stk + 20))) + (*(float *)(((int)stk + 8))));
    L_C14F4AC:;
    (((struct o28_float *)(v0_0))->v) = (*(float *)(((int)stk + 12)));
    v0_3 = *(signed char *)((v0_0 + 0x1));
    v0_1 = ((v0_3 + v0_4));
    if (((int)(v0_3 + v0_4) < 0)) goto L_C14F4C0;
    v0_1 = ((v0_1 & 0x3));
    L_C14F4CA:;
    w0_2 = (*(float *)(((int)stk + 16)));
    w0_2 = w0_2 + w0_0 * (float)v0_1;
    (((struct o2C_float *)(v0_0))->v) = (w0_2 + w0_1);
    F0 = (w0_0);
    w0_0 = ((*(float *)(((int)stk + 20))));
    FPUL_ = (v0_1);
    goto L_C14F57C;
    L_C14F4C0:;
    v0_1 = (((~(((~v0_1) + 0x1) & 0x3)) + 0x1));
    goto L_C14F4CA;
    L_C14F418:;
    (((struct oA8_uchar *)(v0_0))->v) = v0_5;
    (((struct o28_float *)(v0_0))->v) = ((((struct o28_float *)(v0_2))->v));
    v0_3 = *(signed char *)((v0_0 + 0x1));
    v0_1 = ((v0_3 + v0_4));
    if (((int)(v0_3 + v0_4) < 0)) goto L_C14F42E;
    v0_1 = ((v0_1 & 0x3));
    L_C14F438:;
    w0_2 = ((((struct o2C_float *)(v0_2))->v));
    w0_2 = w0_2 + w0_0 * (float)v0_1;
    v0_3 = v0_1;
    v0_1 = (0x2C);
    F0 = (w0_0);
    w0_0 = ((w0_2 + w0_1));
    FPUL_ = v0_3;
    L_C14F446:;
    *(float *)((v0_0 + v0_1)) = w0_0;
    goto L_C14F578;
    L_C14F42E:;
    v0_1 = (((~(((~v0_1) + 0x1) & 0x3)) + 0x1));
    goto L_C14F438;
    L_C14F3AE:;
    (((struct oA8_uchar *)(v0_0))->v) = v0_5;
    (((struct o28_float *)(v0_0))->v) = ((((struct o28_float *)(v0_2))->v));
    v0_3 = *(signed char *)((v0_0 + 0x1));
    v0_1 = ((v0_3 + v0_4));
    if (((int)(v0_3 + v0_4) < 0)) goto L_C14F3C4;
    v0_1 = ((v0_1 & 0x3));
    L_C14F3CE:;
    w0_1 = ((((struct o2C_float *)(v0_2))->v));
    w0_1 = w0_1 + w0_0 * (float)v0_1;
    v0_3 = v0_1;
    v0_1 = (0x2C);
    F0 = (w0_0);
    w0_0 = ((w0_1 + -140.0f));
    FPUL_ = v0_3;
    goto L_C14F446;
    L_C14F3C4:;
    v0_1 = (((~(((~v0_1) + 0x1) & 0x3)) + 0x1));
    goto L_C14F3CE;
}

int FUN_0c03445c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
    } else {
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0xF;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        *(unsigned short *)((a4 + 0x1C)) = 0x1;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 == 4) {
                        t1 = (int)((int)(*(int *)0xC40DC60) / (int)0x3C);
                        if ((*(signed char *)((a4 + 0x2))) != 0) {
                            *(unsigned short *)((a4 + 0x1C)) = ((int)((int)t1 % (int)0xA));
                        } else {
                            *(unsigned short *)((a4 + 0x1C)) = ((int)((int)t1 / (int)0xA));
                            if ((*(short *)((a4 + 0x1C))) != 0) {
                                (((struct oA8_uchar *)(a4))->v) = 0x1;
                            } else {
                                (((struct oA8_uchar *)(a4))->v) = 0x0;
                            }
                        }
                        FUN_0c03733c(a4, ((*(short *)((a4 + 0x1C))) + 0x63), (*(int *)0xC4B410C));
                        t1 = (((struct oC4_int *)(a4))->v);
                        *(unsigned char *)((t1 + 0x0)) = 0x1;
                        *(unsigned short *)((t1 + 0x6)) = 0x11F;
                        { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x6C)) = *(struct mv3 *)((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC1AA27C)); }
                        (((struct o74_float *)(t1))->v) = -5.0f;
                        { struct mv3 { int w[3]; }; *(struct mv3 *)((0x84 + t1)) = *(struct mv3 *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC1AA27C) + 0xC)); }
                        t1 = (((struct oC8_int *)(a4))->v);
                        *(unsigned char *)((t1 + 0x0)) = 0x1;
                        *(unsigned short *)((t1 + 0x6)) = 0x11F;
                        (((struct o74_float *)(t1))->v) = 0.0f;
                        (((struct o70_float *)(t1))->v) = 0.0f;
                        (((struct o6C_float *)(t1))->v) = 0.0f;
                        (((struct o88_float *)(t1))->v) = 1.0f;
                        (((struct o84_float *)(t1))->v) = 1.0f;
                        (((struct o8C_float *)(t1))->v) = 0.0f;
                        t1 = *(signed char *)0xC541F41;
                        t2 = (unsigned char)t1;
                        if ((unsigned char)t1 != 1) {
                            *(unsigned short *)((a4 + 0x1C)) = 0x14;
                            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                            t2 = 0x15;
                        }
                        t1 = t2;
                    } else {
                        if (t0 == 5) {
                            t0 = (((struct oC8_int *)(a4))->v);
                            (((struct o8C_float *)(t0))->v) = (((((struct o8C_float *)(t0))->v)) - 0.0500000007f);
                            t0 = (((struct oC4_int *)(a4))->v);
                            (((struct o74_float *)(t0))->v) = (((((struct o74_float *)(t0))->v)) + 0.25f);
                            t0 = *(short *)((a4 + 0x1C));
                            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
                            t2 = (short)(t0 - 1);
                            if ((short)(t0 - 1) == 0) {
                                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                                t2 = 0x15;
                            }
                            t0 = t2;
                        } else {
                            t2 = (((struct oC8_int *)(a4))->v);
                            (((struct o8C_float *)(t2))->v) = (((((struct o8C_float *)(t2))->v)) + 0.0500000007f);
                            t2 = 0x8C;
                            if (!(-0.0f > ((((struct o8C_float *)(((((struct oC8_int *)(a4))->v))))->v)))) {
                                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                                t2 = 0x14;
                            }
                            t0 = t2;
                        }
                        t1 = t0;
                    }
                    t0 = t1;
                } else {
                    t1 = (((struct oC8_int *)(a4))->v);
                    (((struct o8C_float *)(t1))->v) = (((((struct o8C_float *)(t1))->v)) - 0.0250000004f);
                    t1 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
                    t2 = (short)(t1 - 1);
                    if ((short)(t1 - 1) != 0) {
                    } else {
                        (((struct o8C_float *)(((((struct oC8_int *)(a4))->v))))->v) = 0.0f;
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        t2 = 0x15;
                    }
                    t0 = t2;
                }
                t1 = t0;
            } else {
                t0 = (((struct oC4_int *)(a4))->v);
                (((struct o74_float *)(t0))->v) = (((((struct o74_float *)(t0))->v)) - 0.25f);
                t0 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
                t2 = (short)(t0 - 1);
                if ((short)(t0 - 1) != 0) {
                } else {
                    *(unsigned short *)((a4 + 0x1C)) = 0x14;
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    t2 = 0x15;
                }
                t1 = t2;
            }
            t0 = t1;
        } else {
            t1 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
            t2 = (short)(t1 - 1);
            if ((short)(t1 - 1) != 0) {
            } else {
                *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
                *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x1;
                *(unsigned short *)((a4 + 0x1C)) = 0x14;
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                t2 = 0x15;
            }
            t0 = t2;
        }
        t1 = t0;
    } else {
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        t2 = (short)(t0 - 1);
        if ((short)(t0 - 1) != 0) {
        } else {
            t0 = (((struct oC4_int *)(a4))->v);
            *(unsigned char *)((t0 + 0x0)) = 0x0;
            *(unsigned short *)((t0 + 0x6)) = 0x11F;
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x6C)) = *(struct mv3 *)((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC1AA27C)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((0x84 + t0)) = *(struct mv3 *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC1AA27C) + 0xC)); }
            t0 = (((struct oC8_int *)(a4))->v);
            *(unsigned char *)((t0 + 0x0)) = 0x0;
            *(unsigned short *)((t0 + 0x6)) = 0x11F;
            (((struct o74_float *)(t0))->v) = 0.0f;
            (((struct o70_float *)(t0))->v) = 0.0f;
            (((struct o6C_float *)(t0))->v) = 0.0f;
            (((struct o88_float *)(t0))->v) = 1.0f;
            (((struct o84_float *)(t0))->v) = 1.0f;
            (((struct o8C_float *)(t0))->v) = 0.5f;
            *(unsigned short *)((a4 + 0x1C)) = 0x1;
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            t2 = 0x15;
        }
        t1 = t2;
    }
    return t1;
}

int FUN_0c164a28(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;

    if (((*(signed char *)0xC542237) == 0) && (t0 = *(signed char *)0xC540F98, t0 != 0)) {
        (((struct o14_uchar *)(a4))->v) = 0x2;
    }
    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        if ((*(short *)((a4 + 0x1C))) == 3) {
            (((struct o12A_ushort *)(a4))->v) = 0x0;
        }
        t0 = *(short *)((a4 + 0x1C));
        if (((int)t0 >= (int)((((struct o4_int *)0xC2A32F8)->v))) && (t1 = (((struct o8_int *)0xC2A32F8)->v), (int)t0 <= (int)t1)) {
            FUN_0c0588bc((((((struct oC4_int *)(a4))->v)) + 0x84), 0xC2A32A0, 0xC2A3294, (*(short *)((a4 + 0x1C))), (((((struct o8_int *)0xC2A32F8)->v))), (((((struct o4_int *)0xC2A32F8)->v))));
        }
        t0 = *(short *)((a4 + 0x1C));
        if (((int)t0 >= (int)((((struct oC_int *)0xC2A32F8)->v))) && (t2 = (((struct o10_int *)0xC2A32F8)->v), (int)t0 <= (int)t2)) {
            FUN_0c0588bc((((((struct oC4_int *)(a4))->v)) + 0x84), 0xC2A32B8, 0xC2A32AC, (*(short *)((a4 + 0x1C))), (((((struct o10_int *)0xC2A32F8)->v))), (((((struct oC_int *)0xC2A32F8)->v))));
            t0 = (((struct oC4_int *)(a4))->v);
            (((struct o70_float *)(t0))->v) = (((-((((struct o88_float *)(t0))->v))) + 0.699999988f) * 550.0f);
        }
        t0 = *(short *)((a4 + 0x1C));
        if ((int)t0 >= (int)((((struct o24_int *)0xC2A32F8)->v))) {
            if ((int)t0 <= (int)((((struct o28_int *)0xC2A32F8)->v))) {
                FUN_0c058a6e((((((struct oC4_int *)(a4))->v)) + 0x14), 0xC2A3274, 0xC2A3284, (*(short *)((a4 + 0x1C))), (((((struct o28_int *)0xC2A32F8)->v))), (((((struct o24_int *)0xC2A32F8)->v))));
            }
        }
        t0 = *(short *)((a4 + 0x1C));
        if (((int)t0 >= (int)((((struct o14_int *)0xC2A32F8)->v))) && (t3 = (((struct o18_int *)0xC2A32F8)->v), (int)t0 <= (int)t3)) {
            FUN_0c0588bc((((((struct oC8_int *)(a4))->v)) + 0x84), 0xC2A32D0, 0xC2A32C4, (*(short *)((a4 + 0x1C))), (((((struct o18_int *)0xC2A32F8)->v))), (((((struct o14_int *)0xC2A32F8)->v))));
        }
        t0 = *(short *)((a4 + 0x1C));
        if (((int)t0 >= (int)((((struct o1C_int *)0xC2A32F8)->v))) && (t4 = (((struct o20_int *)0xC2A32F8)->v), (int)t0 <= (int)t4)) {
            FUN_0c0588bc((((((struct oC8_int *)(a4))->v)) + 0x84), 0xC2A32E8, 0xC2A32DC, (*(short *)((a4 + 0x1C))), (((((struct o20_int *)0xC2A32F8)->v))), (((((struct o1C_int *)0xC2A32F8)->v))));
            t0 = (((struct oC8_int *)(a4))->v);
            (((struct o70_float *)(t0))->v) = (((-((((struct o88_float *)(t0))->v))) + 0.699999988f) * 550.0f);
        }
        t0 = *(short *)((a4 + 0x1C));
        if (((int)t0 >= (int)((((struct o2C_int *)0xC2A32F8)->v))) && (t5 = (((struct o30_int *)0xC2A32F8)->v), (int)t0 <= (int)t5)) {
            FUN_0c058a6e((((((struct oC8_int *)(a4))->v)) + 0x14), 0xC2A3274, 0xC2A3284, (*(short *)((a4 + 0x1C))), (((((struct o30_int *)0xC2A32F8)->v))), (((((struct o2C_int *)0xC2A32F8)->v))));
        }
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
        t1 = (short)(t0 + 0x1);
        if ((int)(short)(t0 + 0x1) > (int)((((struct o0_int *)0xC2A32F8)->v))) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t1 = 0x14;
        }
        return t1;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct oAC_ushort *)(a4))->v) = 0x1F;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x40)) = *(struct mv3 *)(0xC2A3268); }
    { struct mv4 { int w[4]; }; *(struct mv4 *)((0xB0 + a4)) = *(struct mv4 *)(0xC2A3284); }
    FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x0, 0x33, (*(int *)0xC4B40CC));
    FUN_0c03744a(((((struct oC8_int *)(a4))->v)), 0x1, 0x33, (*(int *)0xC4B40CC));
    *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x23F;
    *(unsigned short *)((((((struct oC8_int *)(a4))->v)) + 0x6)) = 0x23F;
    { struct mv4 { int w[4]; }; *(struct mv4 *)((((((struct oC4_int *)(a4))->v)) + 0x14)) = *(struct mv4 *)(0xC2A3284); }
    { struct mv4 { int w[4]; }; *(struct mv4 *)((((((struct oC8_int *)(a4))->v)) + 0x14)) = *(struct mv4 *)(0xC2A3284); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC4_int *)(a4))->v)) + 0x84)) = *(struct mv3 *)(0xC2A325C); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC8_int *)(a4))->v)) + 0x84)) = *(struct mv3 *)(0xC2A325C); }
    FUN_0c059df2((*(signed char *)((a4 + 0x1))), 0x5F);
    if ((*(short *)((a4 + 0x1C))) == 3) {
        (((struct o12A_ushort *)(a4))->v) = 0x0;
    }
    t0 = *(short *)((a4 + 0x1C));
    if (((int)t0 >= (int)((((struct o4_int *)0xC2A32F8)->v))) && (t6 = (((struct o8_int *)0xC2A32F8)->v), (int)t0 <= (int)t6)) {
        FUN_0c0588bc((((((struct oC4_int *)(a4))->v)) + 0x84), 0xC2A32A0, 0xC2A3294, (*(short *)((a4 + 0x1C))), (((((struct o8_int *)0xC2A32F8)->v))), (((((struct o4_int *)0xC2A32F8)->v))));
    }
    t0 = *(short *)((a4 + 0x1C));
    if (((int)t0 >= (int)((((struct oC_int *)0xC2A32F8)->v))) && (t7 = (((struct o10_int *)0xC2A32F8)->v), (int)t0 <= (int)t7)) {
        FUN_0c0588bc((((((struct oC4_int *)(a4))->v)) + 0x84), 0xC2A32B8, 0xC2A32AC, (*(short *)((a4 + 0x1C))), (((((struct o10_int *)0xC2A32F8)->v))), (((((struct oC_int *)0xC2A32F8)->v))));
        t0 = (((struct oC4_int *)(a4))->v);
        (((struct o70_float *)(t0))->v) = (((-((((struct o88_float *)(t0))->v))) + 0.699999988f) * 550.0f);
    }
    t0 = *(short *)((a4 + 0x1C));
    if ((int)t0 >= (int)((((struct o24_int *)0xC2A32F8)->v))) {
        if ((int)t0 <= (int)((((struct o28_int *)0xC2A32F8)->v))) {
            FUN_0c058a6e((((((struct oC4_int *)(a4))->v)) + 0x14), 0xC2A3274, 0xC2A3284, (*(short *)((a4 + 0x1C))), (((((struct o28_int *)0xC2A32F8)->v))), (((((struct o24_int *)0xC2A32F8)->v))));
        }
    }
    t0 = *(short *)((a4 + 0x1C));
    if (((int)t0 >= (int)((((struct o14_int *)0xC2A32F8)->v))) && (t8 = (((struct o18_int *)0xC2A32F8)->v), (int)t0 <= (int)t8)) {
        FUN_0c0588bc((((((struct oC8_int *)(a4))->v)) + 0x84), 0xC2A32D0, 0xC2A32C4, (*(short *)((a4 + 0x1C))), (((((struct o18_int *)0xC2A32F8)->v))), (((((struct o14_int *)0xC2A32F8)->v))));
    }
    t0 = *(short *)((a4 + 0x1C));
    if (((int)t0 >= (int)((((struct o1C_int *)0xC2A32F8)->v))) && (t9 = (((struct o20_int *)0xC2A32F8)->v), (int)t0 <= (int)t9)) {
        FUN_0c0588bc((((((struct oC8_int *)(a4))->v)) + 0x84), 0xC2A32E8, 0xC2A32DC, (*(short *)((a4 + 0x1C))), (((((struct o20_int *)0xC2A32F8)->v))), (((((struct o1C_int *)0xC2A32F8)->v))));
        t0 = (((struct oC8_int *)(a4))->v);
        (((struct o70_float *)(t0))->v) = (((-((((struct o88_float *)(t0))->v))) + 0.699999988f) * 550.0f);
    }
    t0 = *(short *)((a4 + 0x1C));
    if (((int)t0 >= (int)((((struct o2C_int *)0xC2A32F8)->v))) && (t10 = (((struct o30_int *)0xC2A32F8)->v), (int)t0 <= (int)t10)) {
        FUN_0c058a6e((((((struct oC8_int *)(a4))->v)) + 0x14), 0xC2A3274, 0xC2A3284, (*(short *)((a4 + 0x1C))), (((((struct o30_int *)0xC2A32F8)->v))), (((((struct o2C_int *)0xC2A32F8)->v))));
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
    t1 = (short)(t0 + 0x1);
    if ((int)(short)(t0 + 0x1) > (int)((((struct o0_int *)0xC2A32F8)->v))) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t1 = 0x14;
    }
    return t1;
}
