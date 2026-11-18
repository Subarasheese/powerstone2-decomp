/* Straight-line functions with calls and guards (batch gen_dx): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12C_ushort { char p[0x12C]; unsigned short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o24_short { char p[0x24]; short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o3717_uchar { char p[0x3717]; unsigned char v; };
struct o371D_uchar { char p[0x371D]; unsigned char v; };
struct o3721_uchar { char p[0x3721]; unsigned char v; };
struct o372B_uchar { char p[0x372B]; unsigned char v; };
struct o3743_uchar { char p[0x3743]; unsigned char v; };
struct o3756_uchar { char p[0x3756]; unsigned char v; };
struct o3757_uchar { char p[0x3757]; unsigned char v; };
struct o3759_uchar { char p[0x3759]; unsigned char v; };
struct o375D_uchar { char p[0x375D]; unsigned char v; };
struct o376C_int { char p[0x376C]; int v; };
struct o376C_uint { char p[0x376C]; unsigned int v; };
struct o3770_int { char p[0x3770]; int v; };
struct o37A8_float { char p[0x37A8]; float v; };
struct o37B8_float { char p[0x37B8]; float v; };
struct o37BC_float { char p[0x37BC]; float v; };
struct o37C0_float { char p[0x37C0]; float v; };
struct o381E_short { char p[0x381E]; short v; };
struct o3820_short { char p[0x3820]; short v; };
struct o382A_ushort { char p[0x382A]; unsigned short v; };
struct o3832_ushort { char p[0x3832]; unsigned short v; };
struct o3838_short { char p[0x3838]; short v; };
struct o383E_short { char p[0x383E]; short v; };
struct o383E_ushort { char p[0x383E]; unsigned short v; };
struct o3840_short { char p[0x3840]; short v; };
struct o3840_ushort { char p[0x3840]; unsigned short v; };
struct o3842_ushort { char p[0x3842]; unsigned short v; };
struct o3844_ushort { char p[0x3844]; unsigned short v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_float { char p[0x40]; float v; };
struct o404_int { char p[0x404]; int v; };
struct o41C_uchar { char p[0x41C]; unsigned char v; };
struct o426_short { char p[0x426]; short v; };
struct o426_ushort { char p[0x426]; unsigned short v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o68_int { char p[0x68]; int v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o90_float { char p[0x90]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct oA0_int { char p[0xA0]; int v; };
struct oA0_uint { char p[0xA0]; unsigned int v; };
struct oA4_int { char p[0xA4]; int v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAA_uchar { char p[0xAA]; unsigned char v; };
struct oAB_uchar { char p[0xAB]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oD0_int { char p[0xD0]; int v; };
struct oD4_int { char p[0xD4]; int v; };
struct oEC_int { char p[0xEC]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c037498(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
extern int FUN_0c03f444();
int FUN_0c042fe0(void);
int FUN_0c043064(void);
int FUN_0c059df2(int, int);
int FUN_0c059e60(int, int);
int FUN_0c05aae4(int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c064f80(int);
int FUN_0c068170(void);
int FUN_0c068174(void);
int FUN_0c068178(void);
int FUN_0c06817c(int);
int FUN_0c07ca6a(int);
int FUN_0c07d2c4(int, int);
int FUN_0c07d4b4(int);
int FUN_0c07d536(int);
int FUN_0c07dbd8(int, int);
int FUN_0c07dd18(int, int, int, int);
int FUN_0c07e2f4(int, int);
int FUN_0c07e328(int, int);
int FUN_0c07e44c(int, int, int);
int FUN_0c085cac(int, int, int, int);
int FUN_0c085d0c(int, int, int, int);
int FUN_0c0c2ab6(int, int);
int FUN_0c0c2ce4(int);
int FUN_0c0c2d56(int, int, int);
int FUN_0c0c32ec(int);
int FUN_0c0c3e3a(int, int, int);
int FUN_0c0c7f4c(int);
int FUN_0c0c8c90(int);
int FUN_0c0c8d00(int);
int FUN_0c0c8e8c(int);
int FUN_0c0c8f2e(int);
int FUN_0c0c8f70(int, int, int);
int FUN_0c122714(int);
int FUN_0c14ea40(int);
int FUN_0c14eaaa(int, int, int, int);
int FUN_0c14eb2c(int);
int FUN_0c15e078(int, int, int, int);
int FUN_0c1614c8(int, int);
int FUN_0c1632e0(int, int, int, float);
int math_atan_angle16(float);
float math_cos_angle16(int);
int math_mat_get_translate(int, int);
int math_mat_transform_vector(int, int, Stk3);
float math_signed_sqrt(float);
float math_sin_angle16(int);
int nlAddVector3op(int, int, int);
int nlRand(void);
int thunk_FUN_0c058310(int, int);
int FUN_0c068230(int a4, int a5, int a6, int a7);
int FUN_0c123010(int a4, int a5, int a6, int a7);
int FUN_0c0c8fd4(int a4, int a5, int a6, int a7);
int FUN_0c12b034(int a4, int a5, int a6, int a7, float f4);
void FUN_0c14eb84(int a4, int a5, int a6, int a7);


int FUN_0c123010(int a4, int a5, int a6, int a7)
{
    int stk[7];

    register int R1;
    register int R2;
    register float F0;
    register float F3;
    register float F12;
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
    register float w0_3;
    v0_8 = a4;
    v0_9 = a5;
    v0_5 = a7;
    *(unsigned char *)(((int)stk + 20)) = v0_9;
    v0_1 = *(signed char *)(((int)stk + 20));
    v0_9 = (v0_1);
    v0_2 = (0x1);
    v0_3 = (v0_8);
    v0_0 = (0x0);
    v0_6 = (0x8);
    v0_4 = (0xC4B40FC);
    w0_1 = (0.100000001f);
    w0_0 = (1.0f);
    if ((v0_1 == 0)) goto L_C123060;
    if ((v0_9 == 1)) goto L_C12312A;
    if ((v0_9 == 2)) goto L_C12312A;
    if ((v0_9 != 3)) goto L_C123054;
    v0_5 = ((int (*)(int, int, int, int))(FUN_0c03f444))(0x5, 0x0, 0x1, v0_5);
    v0_9 = (v0_5);
    v0_1 = (v0_5);
    if ((v0_5 != 0)) goto L_C123492;
    L_C1235DA:;
    return v0_9;
    L_C123492:;
    *(unsigned char *)((v0_1 + 0x1)) = (*(signed char *)((v0_3 + 0x1)));
    *(unsigned int *)((v0_1 + 0x4)) = 0xC122D34;
    (((struct oA8_uchar *)(v0_1))->v) = v0_2;
    (((struct oAC_ushort *)(v0_1))->v) = 0xF;
    (((struct oA9_uchar *)(v0_1))->v) = 0x21;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_1 + 0x34)) = *(struct mv3 *)((v0_3 + 0x34)); }
    (((struct o48_float *)(v0_1))->v) = w0_0;
    (((struct o44_float *)(v0_1))->v) = w0_0;
    (((struct o40_float *)(v0_1))->v) = w0_0;
    *(unsigned int *)((v0_1 + 0x10)) = v0_3;
    thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((v0_3 + 0x1))) * (short)0x3938) + 0xC53255C))) + 0x28), (v0_1 + 0x28));
    FUN_0c03744a(((((struct oC4_int *)(v0_1))->v)), 0x0, 0x8, (*(int *)((v0_4 + ((*(signed char *)((v0_3 + 0x1))) << 2)))));
    *(unsigned char *)((((((struct oC4_int *)(v0_1))->v)) + 0x0)) = v0_0;
    *(unsigned short *)((((((struct oC4_int *)(v0_1))->v)) + 0x6)) = 0x3F;
    v0_2 = (((struct oC4_int *)(v0_1))->v);
    (((struct o8C_float *)(v0_2))->v) = w0_1;
    (((struct o88_float *)(v0_2))->v) = w0_1;
    (((struct o84_float *)(v0_2))->v) = w0_1;
    *(unsigned short *)((v0_1 + 0x1C)) = 0x37;
    *(unsigned short *)((v0_1 + 0x1E)) = v0_0;
    (((struct o20_ushort *)(v0_1))->v) = v0_0;
    v0_9 = (0x20);
    goto L_C1235DA;
    L_C123054:;
    if ((v0_9 != 4)) goto L_C12305C;
    v0_5 = ((int (*)(int, int, int, int))(FUN_0c03f444))(0x5, 0x0, 0x1, v0_5);
    v0_9 = (v0_5);
    v0_1 = (v0_5);
    if ((v0_5 == 0)) goto L_C1235DA;
    *(unsigned char *)((v0_1 + 0x1)) = (*(signed char *)((v0_3 + 0x1)));
    *(unsigned int *)((v0_1 + 0x4)) = 0xC122EF4;
    (((struct oA8_uchar *)(v0_1))->v) = v0_2;
    (((struct oAC_ushort *)(v0_1))->v) = 0xF;
    (((struct oA9_uchar *)(v0_1))->v) = 0x21;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_1 + 0x34)) = *(struct mv3 *)((v0_3 + 0x34)); }
    (((struct o48_float *)(v0_1))->v) = w0_0;
    (((struct o44_float *)(v0_1))->v) = w0_0;
    (((struct o40_float *)(v0_1))->v) = w0_0;
    *(unsigned int *)((v0_1 + 0x10)) = v0_3;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_1 + 0x28)) = *(struct mv3 *)((v0_3 + 0x28)); }
    FUN_0c03744a(((((struct oC4_int *)(v0_1))->v)), 0x1, 0x8, (*(int *)((v0_4 + ((*(signed char *)((v0_3 + 0x1))) << 2)))));
    *(unsigned char *)((((((struct oC4_int *)(v0_1))->v)) + 0x0)) = v0_0;
    *(unsigned short *)((((((struct oC4_int *)(v0_1))->v)) + 0x6)) = 0x21F;
    v0_2 = (((struct oC4_int *)(v0_1))->v);
    (((struct o8C_float *)(v0_2))->v) = w0_1;
    (((struct o84_float *)(v0_2))->v) = w0_1;
    (((struct o88_float *)(((((struct oC4_int *)(v0_1))->v))))->v) = w0_0;
    v0_2 = (((struct oC4_int *)(v0_1))->v);
    (((struct o20_float *)(v0_2))->v) = w0_0;
    (((struct o1C_float *)(v0_2))->v) = w0_0;
    (((struct o18_float *)(v0_2))->v) = w0_0;
    *(unsigned short *)((v0_1 + 0x1C)) = 0x37;
    *(unsigned short *)((v0_1 + 0x1E)) = v0_0;
    v0_9 = (v0_0);
    goto L_C1235DA;
    L_C12305C:;
    goto L_C1235DA;
    L_C12312A:;
    v0_1 = *(signed char *)((v0_3 + 0x2));
    v0_9 = (v0_1);
    v0_7 = (v0_0);
    if ((v0_1 != 0)) goto L_C123138;
    *(unsigned int *)(((int)stk + 24)) = 0x14;
    L_C12313C:;
    L_C123470:;
    if (((int)v0_7 >= (int)(*(int *)(((int)stk + 24))))) goto L_C12347A;
    v0_10 = FUN_0c037320(0x0, (*(int *)((v0_4 + ((*(signed char *)((v0_3 + 0x1))) << 2)))));
    v0_9 = (v0_10);
    v0_1 = (0xC037320);
    v0_8 = (v0_10);
    if ((v0_10 != 0)) goto L_C123156;
    goto L_C1235DA;
    L_C123156:;
    v0_8 = ((int (*)(int, int, int, int))(FUN_0c03f444))(0x1, 0x0, 0x2, v0_5);
    v0_9 = (v0_8);
    v0_1 = (v0_8);
    if (!((v0_8 != 0))) goto L_C12346E;
    FUN_0c03744a(((((struct oC4_int *)(v0_1))->v)), 0x2, 0x0, (*(int *)((v0_4 + ((*(signed char *)((v0_3 + 0x1))) << 2)))));
    FUN_0c03744a(((((struct oC8_int *)(v0_1))->v)), 0x1, 0x0, (*(int *)((v0_4 + ((*(signed char *)((v0_3 + 0x1))) << 2)))));
    *(unsigned char *)((v0_1 + 0x1)) = (*(signed char *)((v0_3 + 0x1)));
    (((struct oA8_uchar *)(v0_1))->v) = v0_2;
    (((struct oAC_ushort *)(v0_1))->v) = 0xF;
    (((struct oA9_uchar *)(v0_1))->v) = 0x21;
    *(unsigned int *)((v0_1 + 0x4)) = 0xC122FEC;
    (((struct o48_float *)(v0_1))->v) = w0_0;
    (((struct o44_float *)(v0_1))->v) = w0_0;
    (((struct o40_float *)(v0_1))->v) = w0_0;
    thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((v0_3 + 0x1))) * (short)0x3938) + 0xC53255C))) + 0x28), (v0_1 + 0x28));
    v0_8 = (0x0);
    goto L_C123236;
    L_C12346E:;
    v0_7 = ((v0_7 + 0x1));
    goto L_C123470;
    L_C123236:;
    if (((int)v0_8 < (int)((((struct oC0_int *)(v0_1))->v)))) goto L_C1231CC;
    *(unsigned int *)((v0_1 + 0x10)) = v0_3;
    w0_1 = (65536.0f);
    w0_2 = (360.0f);
    if (((*(signed char *)((v0_3 + 0x2))) != 0)) goto L_C12333C;
    *(unsigned int *)(((int)stk + 16)) = (v0_7 - 10);
    v0_8 = (0x5A);
    v0_9 = (0xA);
    v0_10 = (0x3C);
    v0_5 = (0xFFFFDC72);
    if (((*(signed char *)(((int)stk + 20))) != 1)) goto L_C1232B0;
    if (((int)v0_7 >= (int)v0_9)) goto L_C123276;
    *(unsigned int *)((v0_1 + 0x34)) = v0_0;
    v0_9 = (((((v0_7 << 2) << 1) + v0_7) << 2));
    L_C1232D0:;
    FPUL_ = (v0_9);
    L_C1232E6:;
    *(unsigned int *)((v0_1 + 0x38)) = (int)(((float)FPUL_ * w0_1) / w0_2);
    FPUL_ = ((int)(((float)FPUL_ * w0_1) / w0_2));
    L_C12338C:;
    *(unsigned int *)((v0_1 + 0x3C)) = v0_0;
    w0_1 = math_sin_angle16((*(int *)((v0_1 + 0x38))));
    w0_1 = (w0_1 * (math_cos_angle16((*(int *)((v0_1 + 0x34))))));
    (((struct o4C_float *)(v0_1))->v) = (w0_1 * 35.0f);
    w0_1 = math_cos_angle16((*(int *)((v0_1 + 0x38))));
    w0_1 = (w0_1 * (math_cos_angle16((*(int *)((v0_1 + 0x34))))));
    (((struct o54_float *)(v0_1))->v) = (w0_1 * 35.0f);
    (((struct o50_float *)(v0_1))->v) = (-((math_sin_angle16((*(int *)((v0_1 + 0x34))))) * 35.0f));
    *(int *)((int)stk + 12) = 0xF0;
    v0_8 = v0_0;
    *(int *)((int)stk + 8) = v0_8;
    v0_9 = v0_0;
    *(int *)((int)stk + 4) = v0_9;
    *(int *)((int)stk + 0) = 0x100;
    FUN_0c064d24(v0_1, 0x1, 0x30, 0x1, 0x100, v0_9, v0_8, 0xF0);
    FUN_0c07e2f4(v0_1, 0x64);
    *(unsigned short *)((v0_1 + 0x1C)) = v0_0;
    (((struct o41C_uchar *)(v0_1))->v) = 0x14;
    *(unsigned char *)(((0x41C + v0_1) + 0x1)) = v0_0;
    v0_8 = ((0x41C + v0_1));
    if (((*(signed char *)((v0_3 + 0x2))) != 0)) goto L_C123410;
    (((struct o12A_ushort *)(v0_1))->v) = v0_0;
    (((struct o20_ushort *)(v0_1))->v) = 0x4;
    v0_8 = (0x4);
    L_C12346A:;
    (((struct o22_ushort *)(v0_1))->v) = v0_7;
    v0_9 = (0x22);
    goto L_C12346E;
    L_C123410:;
    v0_9 = (v0_7);
    if (((int)v0_7 < 0)) goto L_C12341C;
    v0_9 = ((v0_9 & 0x1));
    L_C123426:;
    if ((v0_9 != 0)) goto L_C123458;
    (((struct o12A_ushort *)(v0_1))->v) = v0_0;
    (((struct o20_ushort *)(v0_1))->v) = v0_6;
    goto L_C12346A;
    L_C123458:;
    (((struct o12A_ushort *)(v0_1))->v) = (~((int)v0_2 << (int)(*(signed char *)((v0_1 + 0x1)))));
    (((struct o20_ushort *)(v0_1))->v) = 0x2;
    v0_8 = (0x2);
    goto L_C12346A;
    L_C12341C:;
    v0_9 = (((~(((~v0_9) + 0x1) & 0x1)) + 0x1));
    goto L_C123426;
    L_C123276:;
    if (((int)v0_7 >= (int)0x10)) goto L_C123296;
    *(unsigned int *)((v0_1 + 0x34)) = 0xFFFFEAAB;
    w0_3 = (float)((*(int *)(((int)stk + 16))) * v0_10);
    *(unsigned int *)((v0_1 + 0x38)) = (int)((w0_3 * w0_1) / w0_2);
    FPUL_ = ((int)((w0_3 * w0_1) / w0_2));
    goto L_C12338C;
    L_C123296:;
    *(unsigned int *)((v0_1 + 0x34)) = v0_5;
    w0_3 = (float)((v0_7 - 16) * v0_8);
    *(unsigned int *)((v0_1 + 0x38)) = (int)((w0_3 * w0_1) / w0_2);
    FPUL_ = ((int)((w0_3 * w0_1) / w0_2));
    goto L_C12338C;
    L_C1232B0:;
    if (((int)v0_7 >= (int)0x6)) goto L_C1232C0;
    *(unsigned int *)((v0_1 + 0x34)) = v0_0;
    FPUL_ = ((v0_7 * v0_10));
    goto L_C1232E6;
    L_C1232C0:;
    if (((int)v0_7 >= (int)v0_9)) goto L_C1232D4;
    *(unsigned int *)((v0_1 + 0x34)) = 0xFFFFEAAB;
    v0_9 = (((v0_7 - 6) * v0_8));
    goto L_C1232D0;
    L_C1232D4:;
    v0_9 = (0x78);
    if (((int)v0_7 >= (int)0xD)) goto L_C1232F4;
    *(unsigned int *)((v0_1 + 0x34)) = v0_5;
    FPUL_ = (((*(int *)(((int)stk + 16))) * v0_9));
    goto L_C1232E6;
    L_C1232F4:;
    if (((int)v0_7 >= (int)0x11)) goto L_C123320;
    *(unsigned int *)((v0_1 + 0x34)) = 0x1555;
    FPUL_ = (((v0_7 - 13) * v0_8));
    L_C12332E:;
    *(unsigned int *)((v0_1 + 0x38)) = (int)(((float)FPUL_ * w0_1) / w0_2);
    FPUL_ = ((int)(((float)FPUL_ * w0_1) / w0_2));
    goto L_C12338C;
    L_C123320:;
    *(unsigned int *)((v0_1 + 0x34)) = 0x238E;
    v0_8 = (0x238E);
    FPUL_ = (((v0_7 - 17) * v0_9));
    goto L_C12332E;
    L_C12333C:;
    v0_8 = (0x2D);
    if (((*(signed char *)(((int)stk + 20))) != 1)) goto L_C12334E;
    if (((int)v0_7 < (int)v0_6)) goto L_C123352;
    v0_9 = (0xFFFFF1C8);
    L_C123370:;
    *(unsigned int *)((v0_1 + 0x34)) = v0_9;
    w0_3 = (float)((v0_7 - 8) * v0_8);
    v0_9 = (((int)((w0_3 * w0_1) / w0_2) + (*(int *)((v0_3 + 0x38)))));
    FPUL_ = ((int)((w0_3 * w0_1) / w0_2));
    L_C12338A:;
    *(unsigned int *)((v0_1 + 0x38)) = v0_9;
    goto L_C12338C;
    L_C123352:;
    *(unsigned int *)((v0_1 + 0x34)) = v0_0;
    w0_3 = (float)(v0_7 * v0_8);
    v0_9 = ((((int)((w0_3 * w0_1) / w0_2) + (*(int *)((v0_3 + 0x38)))) + 0xFA4));
    v0_8 = ((v0_7 * v0_8));
    FPUL_ = ((int)((w0_3 * w0_1) / w0_2));
    goto L_C12338A;
    L_C12334E:;
    if (((int)v0_7 >= (int)v0_6)) goto L_C12336E;
    goto L_C123352;
    L_C12336E:;
    v0_9 = (0xE38);
    goto L_C123370;
    L_C1231CC:;
    *(unsigned int *)(((int)stk + 16)) = (v0_8 << 2);
    if ((v0_8 != 0)) goto L_C123204;
    *(unsigned char *)(((*(int *)((((0xC4 + v0_1) + (*(int *)(((int)stk + 16)))) + 0x0))) + 0x0)) = v0_2;
    L_C123210:;
    *(unsigned short *)(((*(int *)((((0xC4 + v0_1) + (*(int *)(((int)stk + 16)))) + 0x0))) + 0x6)) = 0x1F;
    v0_9 = *(int *)((((0xC4 + v0_1) + (*(int *)(((int)stk + 16)))) + 0x0));
    (((struct o8C_float *)(v0_9))->v) = w0_0;
    (((struct o88_float *)(v0_9))->v) = w0_0;
    (((struct o84_float *)(v0_9))->v) = w0_0;
    v0_8 = ((v0_8 + 0x1));
    goto L_C123236;
    L_C123204:;
    *(unsigned char *)(((*(int *)((((0xC4 + v0_1) + (*(int *)(((int)stk + 16)))) + 0x0))) + 0x0)) = v0_0;
    goto L_C123210;
    L_C12347A:;
    goto L_C1235DA;
    L_C123138:;
    *(unsigned int *)(((int)stk + 24)) = 0x10;
    goto L_C12313C;
    L_C123060:;
    v0_0 = ((int (*)(int, int, int, int))(FUN_0c03f444))(0x5, 0x0, 0xA, v0_5);
    v0_9 = (v0_0);
    v0_1 = (v0_0);
    if ((v0_0 != 0)) goto L_C123074;
    goto L_C1235DA;
    L_C123074:;
    *(unsigned char *)((v0_1 + 0x1)) = (*(signed char *)((v0_3 + 0x1)));
    *(unsigned int *)((v0_1 + 0x4)) = 0xC122826;
    (((struct oA8_uchar *)(v0_1))->v) = v0_2;
    (((struct oAC_ushort *)(v0_1))->v) = 0xF;
    (((struct oA9_uchar *)(v0_1))->v) = 0x21;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_1 + 0x34)) = *(struct mv3 *)((v0_3 + 0x34)); }
    (((struct o48_float *)(v0_1))->v) = w0_0;
    (((struct o44_float *)(v0_1))->v) = w0_0;
    (((struct o40_float *)(v0_1))->v) = w0_0;
    thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((v0_3 + 0x1))) * (short)0x3938) + 0xC53255C))) + 0x28), (v0_1 + 0x28));
    v0_7 = (0x0);
    L_C12311C:;
    if (((unsigned int)v0_7 < (unsigned int)0x28)) goto L_C1230E4;
    *(unsigned int *)((v0_1 + 0x10)) = v0_3;
    *(unsigned short *)((v0_1 + 0x1C)) = 0x41;
    v0_9 = (0x41);
    goto L_C1235DA;
    L_C1230E4:;
    FUN_0c03744a((*(int *)((((0xC4 + v0_1) + v0_7) + 0x0))), 0x0, 0x3, (*(int *)((v0_4 + ((*(signed char *)((v0_3 + 0x1))) << 2)))));
    *(unsigned char *)(((*(int *)((((0xC4 + v0_1) + v0_7) + 0x0))) + 0x0)) = v0_2;
    *(unsigned short *)(((*(int *)((((0xC4 + v0_1) + v0_7) + 0x0))) + 0x6)) = 0x1F;
    FUN_0c122714((*(int *)((((0xC4 + v0_1) + v0_7) + 0x0))));
    v0_7 = ((v0_7 + 0x4));
    goto L_C12311C;
}

int FUN_0c0c8fd4(int a4, int a5, int a6, int a7)
{
    int stk[6];
    register int t0;
    register int t1;
    register int t8;
    register int t10;
    register int t12;
    register int t20;
    register int t42;
    register int t59;
    register int t81;
    register int t111;
    register int t119;
    register int t141;
    register int t158;
    register int t180;
    register int t212;
    register int t214;
    register int t215;
    register int t223;
    register int t245;
    register int t262;
    register int t284;
    register int t313;
    register int t321;
    register int t343;
    register int t360;
    register int t382;
    register int t422;
    register int t425;
    register int t448;
    register int t452;
    register int t453;
    register int t455;
    int t490;
    register int t498;
    register int t503;
    register int t537;
    register int t610;
    register int t611;
    register int t615;
    register int t616;
    register int t662;
    register int t666;
    register int t667;
    register int t721;
    register int t723;
    register int t738;
    int t415;
    float u612;
    float u663;

    t0 = *(signed char *)((a4 + 0x1));
    t1 = *(signed char *)((a4 + 0x41C));
    if ((unsigned char)t1 != 55) {
        if ((unsigned char)t1 != 73) {
            if ((unsigned char)t1 == 36) {
                FUN_0c07dbd8((((short)t0 * (short)0x3938) + 0xC532498), (unsigned char)(*(signed char *)((a4 + 0x41C))));
                t738 = (FUN_0c0c2d56(a4, 0xB, (*(signed char *)((a4 + 0x1)))));
            } else {
                if ((unsigned char)t1 == 53) {
                    t8 = FUN_0c0c3e3a(a4, a5, a6);
                    t738 = t8;
                    if (t8 != 0) {
                    } else {
                        t10 = *(signed char *)((a4 + 0x15));
                        if (t10 != 0) {
                            t738 = t10;
                            if (t10 != 1) {
                            } else {
                                FUN_0c0c7f4c(a4);
                                t12 = FUN_0c0c2ce4(a4);
                                if (t12 != 0) {
                                    if (t12 == 2) {
                                        t738 = (FUN_0c0c2d56(a4, 0x3, (*(signed char *)((a4 + 0x1)))));
                                    } else {
                                        (((struct o50_float *)(a4))->v) = 0.0f;
                                        (((struct o5C_float *)(a4))->v) = -2.0f;
                                        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
                                        (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
                                        if ((*(signed char *)((a4 + 0x131))) == 0) {
                                            t20 = (((struct o426_short *)(a4))->v);
                                            (((struct o426_ushort *)(a4))->v) = (t20 + 0x1);
                                            if ((int)(short)(t20 + 0x1) > (int)0x4B0) {
                                                FUN_0c0c2d56(a4, 0xB, (*(signed char *)((a4 + 0x1))));
                                            }
                                        } else {
                                            FUN_0c0c2d56(a4, 0xB, (*(signed char *)((a4 + 0x1))));
                                        }
                                        t738 = 0x426;
                                        if ((int)((((struct o426_short *)(a4))->v)) <= (int)0x438) {
                                        } else {
                                            t42 = *(signed char *)0xC542260;
                                            (((struct oA8_uchar *)(a4))->v) = (t42 & 0x1);
                                            t738 = (t42 & 0x1);
                                        }
                                    }
                                } else {
                                    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
                                    (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
                                    if ((*(signed char *)((a4 + 0x131))) == 0) {
                                        t59 = (((struct o426_short *)(a4))->v);
                                        (((struct o426_ushort *)(a4))->v) = (t59 + 0x1);
                                        if ((int)(short)(t59 + 0x1) > (int)0x4B0) {
                                            FUN_0c0c2d56(a4, 0xB, (*(signed char *)((a4 + 0x1))));
                                        }
                                    } else {
                                        FUN_0c0c2d56(a4, 0xB, (*(signed char *)((a4 + 0x1))));
                                    }
                                    t738 = 0x426;
                                    if ((int)((((struct o426_short *)(a4))->v)) <= (int)0x438) {
                                    } else {
                                        t81 = *(signed char *)0xC542260;
                                        (((struct oA8_uchar *)(a4))->v) = (t81 & 0x1);
                                        t738 = (t81 & 0x1);
                                    }
                                }
                            }
                        } else {
                            FUN_0c0c2ab6(a4, (*(signed char *)(((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738B8) + 0x13))));
                            FUN_0c07e328(a4, (*(signed char *)(((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738B8) + 0xE))));
                            (((struct o12A_ushort *)(a4))->v) = 0xF;
                            (((struct o426_ushort *)(a4))->v) = 0x0;
                            *(unsigned short *)((a4 + 0x1C)) = 0x0;
                            *(unsigned int *)((a4 + 0x3C)) = 0x0;
                            (((struct o48_float *)(a4))->v) = 1.29999995f;
                            (((struct o44_float *)(a4))->v) = 1.29999995f;
                            (((struct o40_float *)(a4))->v) = 1.29999995f;
                            (((struct oAA_uchar *)(a4))->v) = 0x1;
                            (((struct oAB_uchar *)(a4))->v) = (*(signed char *)(((0xC2738B8 + ((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34)) + 0x16)));
                            (((struct o50_float *)(a4))->v) = 0.0f;
                            (((struct o5C_float *)(a4))->v) = -2.0f;
                            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                            FUN_0c0c7f4c(a4);
                            t111 = FUN_0c0c2ce4(a4);
                            if (t111 != 0) {
                                if (t111 == 2) {
                                    t738 = (FUN_0c0c2d56(a4, 0x3, (*(signed char *)((a4 + 0x1)))));
                                } else {
                                    (((struct o50_float *)(a4))->v) = 0.0f;
                                    (((struct o5C_float *)(a4))->v) = -2.0f;
                                    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
                                    (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
                                    if ((*(signed char *)((a4 + 0x131))) == 0) {
                                        t119 = (((struct o426_short *)(a4))->v);
                                        (((struct o426_ushort *)(a4))->v) = (t119 + 0x1);
                                        if ((int)(short)(t119 + 0x1) > (int)0x4B0) {
                                            FUN_0c0c2d56(a4, 0xB, (*(signed char *)((a4 + 0x1))));
                                        }
                                    } else {
                                        FUN_0c0c2d56(a4, 0xB, (*(signed char *)((a4 + 0x1))));
                                    }
                                    t738 = 0x426;
                                    if ((int)((((struct o426_short *)(a4))->v)) <= (int)0x438) {
                                    } else {
                                        t141 = *(signed char *)0xC542260;
                                        (((struct oA8_uchar *)(a4))->v) = (t141 & 0x1);
                                        t738 = (t141 & 0x1);
                                    }
                                }
                            } else {
                                (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
                                (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
                                if ((*(signed char *)((a4 + 0x131))) == 0) {
                                    t158 = (((struct o426_short *)(a4))->v);
                                    (((struct o426_ushort *)(a4))->v) = (t158 + 0x1);
                                    if ((int)(short)(t158 + 0x1) > (int)0x4B0) {
                                        FUN_0c0c2d56(a4, 0xB, (*(signed char *)((a4 + 0x1))));
                                    }
                                } else {
                                    FUN_0c0c2d56(a4, 0xB, (*(signed char *)((a4 + 0x1))));
                                }
                                t738 = 0x426;
                                if ((int)((((struct o426_short *)(a4))->v)) <= (int)0x438) {
                                } else {
                                    t180 = *(signed char *)0xC542260;
                                    (((struct oA8_uchar *)(a4))->v) = (t180 & 0x1);
                                    t738 = (t180 & 0x1);
                                }
                            }
                        }
                    }
                } else {
                    if ((unsigned char)t1 == 114) {
                        t212 = FUN_0c0c3e3a(a4, a5, a6);
                        t738 = t212;
                        if (t212 != 0) {
                        } else {
                            t214 = *(signed char *)((a4 + 0x15));
                            if (t214 != 0) {
                                t738 = t214;
                                if (t214 != 1) {
                                } else {
                                    t215 = FUN_0c0c2ce4(a4);
                                    if (t215 != 0) {
                                        if (t215 == 2) {
                                            t738 = (FUN_0c0c2d56(a4, 0x3, (*(signed char *)((a4 + 0x1)))));
                                        } else {
                                            (((struct o50_float *)(a4))->v) = 0.0f;
                                            (((struct o5C_float *)(a4))->v) = -2.0f;
                                            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
                                            (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
                                            if ((*(signed char *)((a4 + 0x131))) == 0) {
                                                t223 = (((struct o426_short *)(a4))->v);
                                                (((struct o426_ushort *)(a4))->v) = (t223 + 0x1);
                                                if ((int)(short)(t223 + 0x1) > (int)0x4B0) {
                                                    FUN_0c0c2d56(a4, 0xB, (*(signed char *)((a4 + 0x1))));
                                                }
                                            } else {
                                                FUN_0c0c2d56(a4, 0xB, (*(signed char *)((a4 + 0x1))));
                                            }
                                            t738 = 0x426;
                                            if ((int)((((struct o426_short *)(a4))->v)) <= (int)0x438) {
                                            } else {
                                                t245 = *(signed char *)0xC542260;
                                                (((struct oA8_uchar *)(a4))->v) = (t245 & 0x1);
                                                t738 = (t245 & 0x1);
                                            }
                                        }
                                    } else {
                                        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
                                        (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
                                        if ((*(signed char *)((a4 + 0x131))) == 0) {
                                            t262 = (((struct o426_short *)(a4))->v);
                                            (((struct o426_ushort *)(a4))->v) = (t262 + 0x1);
                                            if ((int)(short)(t262 + 0x1) > (int)0x4B0) {
                                                FUN_0c0c2d56(a4, 0xB, (*(signed char *)((a4 + 0x1))));
                                            }
                                        } else {
                                            FUN_0c0c2d56(a4, 0xB, (*(signed char *)((a4 + 0x1))));
                                        }
                                        t738 = 0x426;
                                        if ((int)((((struct o426_short *)(a4))->v)) <= (int)0x438) {
                                        } else {
                                            t284 = *(signed char *)0xC542260;
                                            (((struct oA8_uchar *)(a4))->v) = (t284 & 0x1);
                                            t738 = (t284 & 0x1);
                                        }
                                    }
                                }
                            } else {
                                FUN_0c0c2ab6(a4, (*(signed char *)(((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738B8) + 0x13))));
                                FUN_0c07e328(a4, (*(signed char *)(((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738B8) + 0xE))));
                                (((struct o12A_ushort *)(a4))->v) = 0xF;
                                (((struct o426_ushort *)(a4))->v) = 0x0;
                                *(unsigned int *)((a4 + 0x3C)) = 0x0;
                                (((struct o48_float *)(a4))->v) = 1.29999995f;
                                (((struct o44_float *)(a4))->v) = 1.29999995f;
                                (((struct o40_float *)(a4))->v) = 1.29999995f;
                                (((struct oAA_uchar *)(a4))->v) = 0x1;
                                (((struct oAB_uchar *)(a4))->v) = (*(signed char *)(((0xC2738B8 + ((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34)) + 0x16)));
                                (((struct o50_float *)(a4))->v) = 0.0f;
                                (((struct o5C_float *)(a4))->v) = -2.0f;
                                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                                t313 = FUN_0c0c2ce4(a4);
                                if (t313 != 0) {
                                    if (t313 == 2) {
                                        t738 = (FUN_0c0c2d56(a4, 0x3, (*(signed char *)((a4 + 0x1)))));
                                    } else {
                                        (((struct o50_float *)(a4))->v) = 0.0f;
                                        (((struct o5C_float *)(a4))->v) = -2.0f;
                                        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
                                        (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
                                        if ((*(signed char *)((a4 + 0x131))) == 0) {
                                            t321 = (((struct o426_short *)(a4))->v);
                                            (((struct o426_ushort *)(a4))->v) = (t321 + 0x1);
                                            if ((int)(short)(t321 + 0x1) > (int)0x4B0) {
                                                FUN_0c0c2d56(a4, 0xB, (*(signed char *)((a4 + 0x1))));
                                            }
                                        } else {
                                            FUN_0c0c2d56(a4, 0xB, (*(signed char *)((a4 + 0x1))));
                                        }
                                        t738 = 0x426;
                                        if ((int)((((struct o426_short *)(a4))->v)) <= (int)0x438) {
                                        } else {
                                            t343 = *(signed char *)0xC542260;
                                            (((struct oA8_uchar *)(a4))->v) = (t343 & 0x1);
                                            t738 = (t343 & 0x1);
                                        }
                                    }
                                } else {
                                    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
                                    (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
                                    if ((*(signed char *)((a4 + 0x131))) == 0) {
                                        t360 = (((struct o426_short *)(a4))->v);
                                        (((struct o426_ushort *)(a4))->v) = (t360 + 0x1);
                                        if ((int)(short)(t360 + 0x1) > (int)0x4B0) {
                                            FUN_0c0c2d56(a4, 0xB, (*(signed char *)((a4 + 0x1))));
                                        }
                                    } else {
                                        FUN_0c0c2d56(a4, 0xB, (*(signed char *)((a4 + 0x1))));
                                    }
                                    t738 = 0x426;
                                    if ((int)((((struct o426_short *)(a4))->v)) <= (int)0x438) {
                                    } else {
                                        t382 = *(signed char *)0xC542260;
                                        (((struct oA8_uchar *)(a4))->v) = (t382 & 0x1);
                                        t738 = (t382 & 0x1);
                                    }
                                }
                            }
                        }
                    } else {
                        t738 = (unsigned char)t1;
                        if ((unsigned char)t1 == 77) {
                            if (((*(signed char *)0xC542237) == 0) && (t415 = *(signed char *)0xC540F98, t415 != 0)) {
                                t738 = (FUN_0c0c2d56(a4, 0xB, (*(signed char *)((a4 + 0x1)))));
                            } else {
                                t422 = *(signed char *)((a4 + 0x15));
                                if (t422 != 0) {
                                    if (t422 != 1) {
                                        if (t422 != 2) {
                                            t425 = FUN_0c0c2ce4(a4);
                                            if (t425 != 0) {
                                                if (t425 == 2) {
                                                    t738 = (FUN_0c0c2d56(a4, 0x3, (*(signed char *)((a4 + 0x1)))));
                                                } else {
                                                    (((struct o50_float *)(a4))->v) = 0.0f;
                                                    (((struct o5C_float *)(a4))->v) = -2.0f;
                                                    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
                                                    (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
                                                    t738 = 0x50;
                                                }
                                            } else {
                                                (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
                                                (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
                                                t738 = 0x50;
                                            }
                                        } else {
                                            t448 = *(short *)((a4 + 0x1E));
                                            *(unsigned short *)((a4 + 0x1E)) = (t448 - 1);
                                            if ((int)(short)(t448 - 1) <= 0) {
                                                t738 = (FUN_0c0c2d56(a4, 0xB, (*(signed char *)((a4 + 0x1)))));
                                            } else {
                                                t452 = *(short *)((a4 + 0x1E));
                                                t453 = ((~(((~t452) + 0x1) & 0x1)) + 0x1);
                                                if ((int)t452 >= 0) {
                                                    t453 = (t452 & 0x1);
                                                }
                                                (((struct oA8_uchar *)(a4))->v) = t453;
                                                t455 = FUN_0c0c2ce4(a4);
                                                if (t455 != 0) {
                                                    if (t455 == 2) {
                                                        t738 = (FUN_0c0c2d56(a4, 0x3, (*(signed char *)((a4 + 0x1)))));
                                                    } else {
                                                        (((struct o50_float *)(a4))->v) = 0.0f;
                                                        (((struct o5C_float *)(a4))->v) = -2.0f;
                                                        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
                                                        (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
                                                        t738 = 0x50;
                                                    }
                                                } else {
                                                    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
                                                    (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
                                                    t738 = 0x50;
                                                }
                                            }
                                        }
                                    } else {
                                        t490 = *(short *)((a4 + 0x1C));
                                        if ((t490 != 120) && ((t490 != 0x8C) && (t490 != 0xA0))) {
                                        } else {
                                            FUN_0c0c8f70(a4, a5, a6);
                                            FUN_0c059df2((*(signed char *)((a4 + 0x1))), 0x72);
                                        }
                                        t498 = *(short *)((a4 + 0x1C));
                                        *(unsigned short *)((a4 + 0x1C)) = (t498 + 0x1);
                                        if ((int)(short)(t498 + 0x1) >= (int)0xAA) {
                                            *(unsigned short *)((a4 + 0x1E)) = 0x3C;
                                            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                                        }
                                        t503 = FUN_0c0c2ce4(a4);
                                        if (t503 != 0) {
                                            if (t503 == 2) {
                                                t738 = (FUN_0c0c2d56(a4, 0x3, (*(signed char *)((a4 + 0x1)))));
                                            } else {
                                                (((struct o50_float *)(a4))->v) = 0.0f;
                                                (((struct o5C_float *)(a4))->v) = -2.0f;
                                                (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
                                                (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
                                                t738 = 0x50;
                                            }
                                        } else {
                                            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
                                            (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
                                            t738 = 0x50;
                                        }
                                    }
                                } else {
                                    FUN_0c1614c8(a4, 0x2);
                                    FUN_0c0c2ab6(a4, (*(signed char *)(((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738B8) + 0x12))));
                                    *(unsigned short *)((a4 + 0x1C)) = 0x0;
                                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                                    t537 = FUN_0c0c2ce4(a4);
                                    if (t537 != 0) {
                                        if (t537 == 2) {
                                            t738 = (FUN_0c0c2d56(a4, 0x3, (*(signed char *)((a4 + 0x1)))));
                                        } else {
                                            (((struct o50_float *)(a4))->v) = 0.0f;
                                            (((struct o5C_float *)(a4))->v) = -2.0f;
                                            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
                                            (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
                                            t738 = 0x50;
                                        }
                                    } else {
                                        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
                                        (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
                                        t738 = 0x50;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            t610 = *(signed char *)((a4 + 0x15));
            if (t610 != 0) {
                t738 = t610;
                if (t610 != 1) {
                } else {
                    t611 = FUN_0c07d2c4((((short)t0 * (short)0x3938) + 0xC532498), (a4 + 0x1E));
                    if ((t611 != 0) && (u612 = (((struct o160_float *)((((short)t0 * (short)0x3938) + 0xC532498)))->v), u612 > 0.0f)) {
                        t615 = *(signed char *)0xC542235;
                        t738 = t615;
                        if (t615 != 2) {
                        } else {
                            t616 = *(short *)((a4 + 0x1C));
                            *(unsigned short *)((a4 + 0x1C)) = (t616 - 1);
                            t738 = (short)(t616 - 1);
                            if ((int)(short)(t616 - 1) > 0) {
                            } else {
                                math_mat_get_translate(((((struct oA4_int *)(a4))->v)), (((int)stk + 0) + 0xC));
                                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)((a4 + 0x28)); }
                                math_mat_transform_vector(((int)stk + 0), ((((struct oA4_int *)(a4))->v)), *(Stk3 *)(((int)stk + 0)));
                                *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) + (*(float *)(((int)stk + 0))));
                                *(float *)(((int)stk + 16)) = ((*(float *)(((int)stk + 16))) + (*(float *)(((int)stk + 4))));
                                *(float *)(((int)stk + 20)) = ((*(float *)(((int)stk + 20))) + (*(float *)(((int)stk + 8))));
                                { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)((((int)stk + 0) + 0xC)); }
                                FUN_0c1632e0(0xFFFFFFFF, (a4 + 0x28), 0x11, 0.5f);
                                FUN_0c05aae4(0xD1, (a4 + 0x28));
                                t738 = (FUN_0c0c2d56(a4, 0xB, (*(signed char *)((a4 + 0x1)))));
                            }
                        }
                    } else {
                        math_mat_get_translate(((((struct oA4_int *)(a4))->v)), (((int)stk + 0) + 0xC));
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)((a4 + 0x28)); }
                        math_mat_transform_vector(((int)stk + 0), ((((struct oA4_int *)(a4))->v)), *(Stk3 *)(((int)stk + 0)));
                        *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) + (*(float *)(((int)stk + 0))));
                        *(float *)(((int)stk + 16)) = ((*(float *)(((int)stk + 16))) + (*(float *)(((int)stk + 4))));
                        *(float *)(((int)stk + 20)) = ((*(float *)(((int)stk + 20))) + (*(float *)(((int)stk + 8))));
                        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)((((int)stk + 0) + 0xC)); }
                        t738 = (FUN_0c0c2d56(a4, 0x6, (*(signed char *)((a4 + 0x1)))));
                    }
                }
            } else {
                (((struct o28_float *)(a4))->v) = 17.0f;
                (((struct o2C_float *)(a4))->v) = -17.0f;
                (((struct o30_float *)(a4))->v) = 0.0f;
                *(unsigned int *)((a4 + 0x34)) = 0x0;
                *(unsigned int *)((a4 + 0x38)) = 0x4000;
                *(unsigned int *)((a4 + 0x3C)) = 0x0;
                (((struct oA4_uint *)(a4))->v) = (((((struct oEC_int *)((0xC532498 + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938))))->v)) + 0x28);
                *(unsigned short *)((a4 + 0x1C)) = 0xB4;
                (((struct o12A_ushort *)(a4))->v) = 0x0;
                *(unsigned short *)(((0x12A + a4) + 0x2)) = 0x0;
                *(unsigned short *)(((0x12A + a4) + 0x4)) = 0x0;
                *(unsigned short *)((a4 + 0x1E)) = 0x1E;
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                t662 = FUN_0c07d2c4((((short)t0 * (short)0x3938) + 0xC532498), (a4 + 0x1E));
                if ((t662 != 0) && (u663 = (((struct o160_float *)((((short)t0 * (short)0x3938) + 0xC532498)))->v), u663 > 0.0f)) {
                    t666 = *(signed char *)0xC542235;
                    t738 = t666;
                    if (t666 != 2) {
                    } else {
                        t667 = *(short *)((a4 + 0x1C));
                        *(unsigned short *)((a4 + 0x1C)) = (t667 - 1);
                        t738 = (short)(t667 - 1);
                        if ((int)(short)(t667 - 1) > 0) {
                        } else {
                            math_mat_get_translate(((((struct oA4_int *)(a4))->v)), (((int)stk + 0) + 0xC));
                            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)((a4 + 0x28)); }
                            math_mat_transform_vector(((int)stk + 0), ((((struct oA4_int *)(a4))->v)), *(Stk3 *)(((int)stk + 0)));
                            *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) + (*(float *)(((int)stk + 0))));
                            *(float *)(((int)stk + 16)) = ((*(float *)(((int)stk + 16))) + (*(float *)(((int)stk + 4))));
                            *(float *)(((int)stk + 20)) = ((*(float *)(((int)stk + 20))) + (*(float *)(((int)stk + 8))));
                            { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)((((int)stk + 0) + 0xC)); }
                            FUN_0c1632e0(0xFFFFFFFF, (a4 + 0x28), 0x11, 0.5f);
                            FUN_0c05aae4(0xD1, (a4 + 0x28));
                            t738 = (FUN_0c0c2d56(a4, 0xB, (*(signed char *)((a4 + 0x1)))));
                        }
                    }
                } else {
                    math_mat_get_translate(((((struct oA4_int *)(a4))->v)), (((int)stk + 0) + 0xC));
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)((a4 + 0x28)); }
                    math_mat_transform_vector(((int)stk + 0), ((((struct oA4_int *)(a4))->v)), *(Stk3 *)(((int)stk + 0)));
                    *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) + (*(float *)(((int)stk + 0))));
                    *(float *)(((int)stk + 16)) = ((*(float *)(((int)stk + 16))) + (*(float *)(((int)stk + 4))));
                    *(float *)(((int)stk + 20)) = ((*(float *)(((int)stk + 20))) + (*(float *)(((int)stk + 8))));
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)((((int)stk + 0) + 0xC)); }
                    t738 = (FUN_0c0c2d56(a4, 0x6, (*(signed char *)((a4 + 0x1)))));
                }
            }
        }
    } else {
        t721 = FUN_0c0c3e3a(a4, a5, a6);
        t738 = t721;
        if (t721 != 0) {
        } else {
            t723 = *(signed char *)((a4 + 0x15));
            if (t723 != 0) {
                if (t723 != 1) {
                    if (t723 != 2) {
                        t738 = t723;
                        if (t723 != 3) {
                        } else {
                            t738 = (FUN_0c0c8f2e(a4));
                        }
                    } else {
                        t738 = (FUN_0c0c8e8c(a4));
                    }
                } else {
                    t738 = (FUN_0c0c8d00(a4));
                }
            } else {
                t738 = (FUN_0c0c8c90(a4));
            }
        }
    }
    return t738;
}

int FUN_0c12b034(int a4, int a5, int a6, int a7, float f4)
{
    int stk[6];
    register int t0;
    register int t7;
    register int t12;
    register float u15;
    register float u16;
    register float u19;
    register float u20;
    register float u21;
    register float u25;
    register float u27;
    register float t28;
    register int t38;
    register int t40;
    register int t41;
    register int t49;
    register int t51;
    register int t52;
    register int t56;
    register float t58;
    register float u61;
    register float u68;
    register int t84;
    register int t88;
    register int t101;
    register int t104;
    register int t105;
    register int t112;
    register float u113;
    register int t114;
    register float u115;
    register int t116;
    register int t182;
    register int t183;
    register int t192;
    register int t197;
    register float t199;
    register float u202;
    register float u209;
    register int t219;
    register int t224;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 == 1) {
            (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) - ((((struct o50_float *)(a4))->v)));
            (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o54_float *)(a4))->v)));
            t7 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t7 - 1);
            t224 = (short)(t7 - 1);
            if ((short)(t7 - 1) != 0) {
            } else {
                *(unsigned short *)((a4 + 0x1C)) = 0x1;
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t224 = 0x14;
            }
        } else {
            if (t0 == 2) {
                t12 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t12 - 1);
                t224 = (short)(t12 - 1);
                if ((short)(t12 - 1) != 0) {
                } else {
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x8)) = *(struct mv3 *)(((*(int *)((a4 + 0x10))) + 0x380C)); }
                    (((struct o4_float *)((((int)stk + 4) + 0x8)))->v) = (((((struct o4_float *)((((int)stk + 4) + 0x8)))->v)) + 200.0f);
                    u15 = (((struct o8_float *)(((int)stk + 4)))->v);
                    u16 = (((struct o28_float *)(a4))->v);
                    *(float *)(((int)stk + 8)) = (((((struct o4_float *)((((int)stk + 4) + 0x8)))->v)) - ((((struct o2C_float *)(a4))->v)));
                    u19 = (((struct o30_float *)(a4))->v);
                    u20 = (((struct o8_float *)((((int)stk + 4) + 0x8)))->v);
                    u21 = (u15 - u16);
                    if ((u15 - u16) == 0.0f) {
                        u21 = 9.99999997e-07f;
                    }
                    if ((*(float *)(((int)stk + 8))) == 0.0f) {
                        *(float *)(((int)stk + 8)) = 9.99999997e-07f;
                    }
                    u25 = (u20 - u19);
                    if ((u20 - u19) == 0.0f) {
                        u25 = 9.99999997e-07f;
                    }
                    u27 = (u25 * u25);
                    u27 = u27 + u21 * u21;
                    t28 = math_signed_sqrt(u27);
                    *(unsigned int *)(((int)stk + 4)) = (math_atan_angle16(((-t28) / (*(float *)(((int)stk + 8))))));
                    if (0.0f > (*(float *)(((int)stk + 8)))) {
                        *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x8000);
                    }
                    t38 = ((int)((int)(nlRand()) % (int)0xA));
                    *(int *)((int)stk + 0) = t38;
                    t40 = (int)((int)(nlRand()) % (int)0xA);
                    t41 = *(int *)(((int)stk + 4));
                    *(unsigned int *)(((int)stk + 4)) = (t41 + (int)(((float)((t40 + t38) + 0x50) * 65536.0f) / 360.0f));
                    *(unsigned int *)((a4 + 0x34)) = (-(unsigned short)(t41 + (int)(((float)((t40 + t38) + 0x50) * 65536.0f) / 360.0f)));
                    *(unsigned int *)(((int)stk + 4)) = (math_atan_angle16(((-u25) / u21)));
                    if (0.0f > u21) {
                        *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x8000);
                    }
                    t49 = ((int)((int)(nlRand()) % (int)0xA));
                    *(int *)((int)stk + 0) = t49;
                    t51 = (int)((int)(nlRand()) % (int)0xA);
                    t52 = *(int *)(((int)stk + 4));
                    *(unsigned int *)(((int)stk + 4)) = (t52 + (int)(((float)((t51 + t49) + 0x50) * 65536.0f) / 360.0f));
                    *(unsigned int *)((a4 + 0x38)) = (unsigned short)(t52 + (int)(((float)((t51 + t49) + 0x50) * 65536.0f) / 360.0f));
                    *(unsigned int *)((a4 + 0x3C)) = (int)(float)((int)((int)(nlRand()) % (int)0x168));
                    t56 = (int)((int)(nlRand()) % (int)0x14);
                    t58 = math_sin_angle16(((-(*(int *)((a4 + 0x34)))) + 0x14000));
                    *(float *)(((int)stk + 0)) = ((float)(t56 + 0x3C) * t58);
                    u61 = ((float)(t56 + 0x3C) * t58);
                    (((struct o4C_float *)(a4))->v) = (u61 * (math_cos_angle16(((-(*(int *)((a4 + 0x38)))) + 0x14000))));
                    (((struct o50_float *)(a4))->v) = ((float)(t56 + 0x3C) * (math_cos_angle16(((-(*(int *)((a4 + 0x34)))) + 0x14000))));
                    u68 = ((float)(t56 + 0x3C) * (math_sin_angle16(((-(*(int *)((a4 + 0x34)))) + 0x14000))));
                    (((struct o54_float *)(a4))->v) = (u68 * (math_sin_angle16(((-(*(int *)((a4 + 0x38)))) + 0x14000))));
                    *(unsigned short *)((a4 + 0x1C)) = 0x14;
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    t224 = 0x14;
                }
            } else {
                if (t0 == 3) {
                    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
                    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) - ((((struct o50_float *)(a4))->v)));
                    (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o54_float *)(a4))->v)));
                    t84 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t84 - 1);
                    t224 = (short)(t84 - 1);
                    if ((short)(t84 - 1) != 0) {
                    } else {
                        *(unsigned short *)((a4 + 0x1C)) = 0x3C;
                        (((struct o14_uchar *)(a4))->v) = 0x4;
                        t224 = 0x14;
                    }
                } else {
                    if (t0 == 4) {
                        t88 = *(short *)((a4 + 0x1C));
                        *(unsigned short *)((a4 + 0x1C)) = (t88 - 1);
                        if ((short)(t88 - 1) == 0) {
                            (((struct o14_uchar *)(a4))->v) = 0x7;
                        }
                        if (((((struct o404_int *)(a4))->v)) != 0) {
                            *(unsigned short *)((a4 + 0x1C)) = 0x3C;
                            (((struct o14_uchar *)(a4))->v) = 0x5;
                        }
                        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
                        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) - ((((struct o50_float *)(a4))->v)));
                        (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o54_float *)(a4))->v)));
                        t224 = 0x30;
                    } else {
                        if (t0 == 5) {
                            t101 = *(short *)((a4 + 0x1C));
                            *(unsigned short *)((a4 + 0x1C)) = (t101 - 1);
                            t224 = (short)(t101 - 1);
                            if ((short)(t101 - 1) == 0) {
                                (((struct o12A_ushort *)(a4))->v) = 0x0;
                                *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x21F;
                                *(unsigned short *)((((((struct oC8_int *)(a4))->v)) + 0x6)) = 0x21F;
                                t104 = (((struct oC4_int *)(a4))->v);
                                (((struct o20_float *)(t104))->v) = 1.0f;
                                (((struct o1C_float *)(t104))->v) = 1.0f;
                                (((struct o18_float *)(t104))->v) = 1.0f;
                                (((struct o14_float *)(t104))->v) = 1.0f;
                                t105 = (((struct oC8_int *)(a4))->v);
                                (((struct o20_float *)(t105))->v) = 1.0f;
                                (((struct o1C_float *)(t105))->v) = 1.0f;
                                (((struct o18_float *)(t105))->v) = 1.0f;
                                (((struct o14_float *)(t105))->v) = 1.0f;
                                *(unsigned short *)((a4 + 0x1C)) = 0x14;
                                (((struct o14_uchar *)(a4))->v) = 0x6;
                                t224 = 0x14;
                            }
                        } else {
                            if (t0 == 6) {
                                t112 = (((struct oC4_int *)(a4))->v);
                                u113 = (((struct o20_float *)(t112))->v);
                                (((struct o20_float *)(t112))->v) = (u113 - 0.0500000007f);
                                (((struct o1C_float *)(t112))->v) = (u113 - 0.0500000007f);
                                (((struct o18_float *)(t112))->v) = (u113 - 0.0500000007f);
                                (((struct o14_float *)(t112))->v) = (u113 - 0.0500000007f);
                                t114 = (((struct oC8_int *)(a4))->v);
                                u115 = (((struct o20_float *)(t114))->v);
                                (((struct o20_float *)(t114))->v) = (u115 - 0.0500000007f);
                                (((struct o1C_float *)(t114))->v) = (u115 - 0.0500000007f);
                                (((struct o18_float *)(t114))->v) = (u115 - 0.0500000007f);
                                (((struct o14_float *)(t114))->v) = (u115 - 0.0500000007f);
                                t116 = *(short *)((a4 + 0x1C));
                                *(unsigned short *)((a4 + 0x1C)) = (t116 - 1);
                                t224 = (short)(t116 - 1);
                                if ((short)(t116 - 1) == 0) {
                                    (((struct o14_uchar *)(a4))->v) = 0x7;
                                    t224 = 0x14;
                                }
                            } else {
                                t224 = t0;
                                if (t0 == 7) {
                                    t224 = (FUN_0c03f346(a4, 0x3C, a6, a7));
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        t182 = *(int *)((a4 + 0x10));
        t183 = *(int *)((t182 + 0x10));
        *(volatile float *)((t182 + 0x28));
        *(volatile float *)((t183 + 0x28));
        *(volatile float *)((t183 + 0x2C));
        *(volatile float *)((t182 + 0x2C));
        *(volatile float *)((t183 + 0x30));
        *(volatile float *)((t182 + 0x30));
        *(unsigned int *)((a4 + 0x34)) = 0xFFFFC000;
        t192 = ((int)((int)(nlRand()) % (int)0xA));
        *(int *)((int)stk + 0) = t192;
        *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + (int)(((float)((((int)((int)(nlRand()) % (int)0xA)) + t192) - 10) * 65536.0f) / 360.0f));
        t197 = (int)((int)(nlRand()) % (int)0x14);
        t199 = math_sin_angle16(((-(*(int *)((a4 + 0x34)))) + 0x14000));
        *(float *)(((int)stk + 0)) = ((float)(t197 + 0x3C) * t199);
        u202 = ((float)(t197 + 0x3C) * t199);
        (((struct o4C_float *)(a4))->v) = (u202 * (math_cos_angle16(((-(*(int *)((a4 + 0x38)))) + 0x14000))));
        (((struct o50_float *)(a4))->v) = ((float)(t197 + 0x3C) * (math_cos_angle16(((-(*(int *)((a4 + 0x34)))) + 0x14000))));
        u209 = ((float)(t197 + 0x3C) * (math_sin_angle16(((-(*(int *)((a4 + 0x34)))) + 0x14000))));
        (((struct o54_float *)(a4))->v) = (u209 * (math_sin_angle16(((-(*(int *)((a4 + 0x38)))) + 0x14000))));
        FUN_0c059e60((*(int *)((a4 + 0x10))), 0x24);
        *(unsigned short *)((a4 + 0x1C)) = 0x14;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) - ((((struct o50_float *)(a4))->v)));
        (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o54_float *)(a4))->v)));
        t219 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t219 - 1);
        t224 = (short)(t219 - 1);
        if ((short)(t219 - 1) != 0) {
        } else {
            *(unsigned short *)((a4 + 0x1C)) = 0x1;
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t224 = 0x14;
        }
    }
    return t224;
}

void FUN_0c14eb84(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = *(signed char *)((a4 + 0x14));
    if ((unsigned int)t0 >= (unsigned int)0xC) {
        return;
    }
    switch ((t0 << 1)) {
        case 0:
        {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            *(unsigned short *)((a4 + 0x1C)) = 0x14;
            t0 = (((struct oC4_int *)(a4))->v);
            *(unsigned char *)((t0 + 0x0)) = 0x1;
            *(unsigned short *)((t0 + 0x6)) = ((*(short *)((t0 + 0x6))) | 0xC00);
            (((struct o90_float *)(t0))->v) = -19.5f;
            (((struct o98_float *)(t0))->v) = 19.5499992f;
            (((struct o94_float *)(t0))->v) = 0.0f;
            (((struct o14_float *)(t0))->v) = 1.0f;
            return;
        }
        case 2:
        {
            t0 = (((struct oC4_int *)(a4))->v);
            nlAddVector3op((t0 + 0x6C), (t0 + 0x6C), (0x90 + t0));
            t1 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
            if ((short)(t1 - 1) != 0) {
            } else {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                *(unsigned short *)((a4 + 0x1C)) = 0xA;
                (((struct oA0_uint *)(t0))->v) = 0xFFFFF99A;
            }
            FUN_0c14ea40(a4);
    return;
        }
        case 4:
        {
            t0 = (((struct oC4_int *)(a4))->v);
            (((struct o7C_uint *)(t0))->v) = (((((struct o7C_int *)(t0))->v)) + ((((struct oA0_int *)(t0))->v)));
            u0 = ((((struct o6C_float *)(t0))->v));
            u0 = u0 + 10.0f * (math_sin_angle16((((((struct o7C_int *)(t0))->v)) - 16384)));
            (((struct o6C_float *)(t0))->v) = u0;
            u0 = ((((struct o74_float *)(t0))->v));
            u0 = u0 + 10.0f * (math_cos_angle16((((((struct o7C_int *)(t0))->v)) - 16384)));
            (((struct o74_float *)(t0))->v) = u0;
            if (!(500.0f > ((((struct o74_float *)(t0))->v)))) {
                (((struct o74_float *)(t0))->v) = 500.0f;
            }
            t1 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
            if ((short)(t1 - 1) == 0) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                *(unsigned short *)((a4 + 0x1C)) = 0x1E;
                (((struct o90_float *)(t0))->v) = (-(((((struct o6C_float *)(t0))->v)) / 30.0f));
                (((struct o98_float *)(t0))->v) = (-(((((struct o74_float *)(t0))->v)) / 30.0f));
                (((struct o94_float *)(t0))->v) = 0.0f;
                (((struct oA0_uint *)(t0))->v) = 0xFFFFF889;
            }
            FUN_0c14ea40(a4);
    return;
        }
        case 6:
        {
            t0 = (((struct oC4_int *)(a4))->v);
            nlAddVector3op((t0 + 0x6C), (t0 + 0x6C), (0x90 + t0));
            (((struct o7C_uint *)(t0))->v) = (((((struct o7C_int *)(t0))->v)) + ((((struct oA0_int *)(t0))->v)));
            t1 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
            if ((short)(t1 - 1) == 0) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                *(unsigned short *)((a4 + 0x1C)) = 0x14;
                { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x6C)) = *(struct mv3 *)(0xC202C6C); }
                (((struct o74_float *)(t0))->v) = 0.0f;
                { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x78)) = *(struct mv3 *)(0xC202C84); }
                *(unsigned char *)((((((struct oCC_int *)(a4))->v)) + 0x0)) = 0x1;
                t0 = (((struct oCC_int *)(a4))->v);
                *(unsigned short *)((t0 + 0x6)) = ((*(short *)((t0 + 0x6))) | 0x400);
                (((struct o14_float *)(((((struct oCC_int *)(a4))->v))))->v) = 0.0f;
            }
            FUN_0c14ea40(a4);
    return;
        }
        case 8:
        {
            t0 = (((struct oC4_int *)(a4))->v);
            (((struct o14_float *)(t0))->v) = (((((struct o14_float *)(t0))->v)) - 0.0500000007f);
            t0 = (((struct oCC_int *)(a4))->v);
            (((struct o14_float *)(t0))->v) = (((((struct o14_float *)(t0))->v)) + 0.0500000007f);
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
            if ((short)(t0 - 1) != 0) {
            } else {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x0;
                (((struct o14_float *)(((((struct oCC_int *)(a4))->v))))->v) = 1.0f;
                t0 = (((struct oD0_int *)(a4))->v);
                *(unsigned char *)((t0 + 0x0)) = 0x1;
                (((struct o94_float *)(t0))->v) = -20.0f;
                *(unsigned short *)((a4 + 0x1C)) = 0xA;
            }
            return;
        }
        case 10:
        {
            t0 = (((struct oD0_int *)(a4))->v);
            (((struct o70_float *)(t0))->v) = (((((struct o70_float *)(t0))->v)) + ((((struct o94_float *)(t0))->v)));
            t1 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
            if ((short)(t1 - 1) != 0) {
            } else {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                (((struct o70_float *)(t0))->v) = 0.0f;
                *(unsigned short *)((a4 + 0x1C)) = 0x0;
            }
            return;
        }
        case 12:
        {
            t0 = *(signed char *)((0xC202D08 + (*(short *)((a4 + 0x1C)))));
            t1 = (((struct oCC_int *)(a4))->v);
            (((struct o70_float *)(t1))->v) = (((((struct o70_float *)(t1))->v)) - (float)t0);
            t1 = (((struct oD0_int *)(a4))->v);
            u0 = ((((struct o70_float *)(t1))->v));
            u0 = u0 + ((1.0f + 1.0f)) * (float)t0;
            (((struct o70_float *)(t1))->v) = u0;
            *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
            if ((float)t0 != 0.0f) {
            } else {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                (((struct o70_float *)(((((struct oCC_int *)(a4))->v))))->v) = 0.0f;
                t0 = (((struct oD0_int *)(a4))->v);
                (((struct o70_float *)(t0))->v) = 0.0f;
                (((struct o98_float *)(t0))->v) = -49.9000015f;
                *(unsigned short *)((a4 + 0x1C)) = 0xA;
            }
            return;
        }
        case 14:
        {
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
            if ((short)(t0 - 1) != 0) {
            } else {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                *(unsigned short *)((a4 + 0x1C)) = 0xA;
            }
            return;
        }
        case 16:
        {
            t0 = (((struct oD0_int *)(a4))->v);
            (((struct o74_float *)(t0))->v) = (((((struct o74_float *)(t0))->v)) + ((((struct o98_float *)(t0))->v)));
            FUN_0c14eaaa(a4, a5, a6, a7);
            FUN_0c14eb2c(a4);
            t1 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
            if ((short)(t1 - 1) != 0) {
            } else {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                (((struct o74_float *)(t0))->v) = 0.100000001f;
                t0 = (((struct oC8_int *)(a4))->v);
                *(unsigned char *)((t0 + 0x0)) = 0x1;
                (((struct o8C_float *)(t0))->v) = 1.0f;
                (((struct o98_float *)(t0))->v) = -0.0166666675f;
                *(unsigned short *)((t0 + 0x6)) = ((*(short *)((t0 + 0x6))) | 0x410);
                (((struct o14_float *)(t0))->v) = 0.0f;
                (((struct o74_float *)(t0))->v) = 41.0f;
                t0 = (((struct oD4_int *)(a4))->v);
                *(unsigned char *)((t0 + 0x0)) = 0x1;
                *(unsigned short *)((t0 + 0x6)) = ((*(short *)((t0 + 0x6))) | 0x400);
                (((struct o14_float *)(t0))->v) = 1.0f;
                *(unsigned short *)((a4 + 0x1E)) = 0x28;
                *(unsigned char *)((((((struct oD0_int *)(a4))->v)) + 0x0)) = 0x0;
            }
            return;
        }
        case 18:
        {
            FUN_0c14eb2c(a4);
            if (((((struct o0_int *)0xC542440)->v)) != -1) {
                (((struct o0_uint *)0xC542440)->v) = (((((struct o0_int *)0xC542440)->v)) + 0x11111111);
                (((struct o4_uint *)0xC542440)->v) = (((((struct o4_int *)0xC542440)->v)) + 0x11111111);
                (((struct o8_uint *)0xC542440)->v) = (((((struct o8_int *)0xC542440)->v)) + 0x11111111);
                if (((((struct o0_int *)0xC542440)->v)) == -1) {
                    *(unsigned char *)((((((struct oD0_int *)(a4))->v)) + 0x0)) = 0x1;
                    FUN_0c037498(((((struct oD0_int *)(a4))->v)), 0x0, 0x6, (*(int *)0xC4B410C));
                    *(unsigned char *)((((((struct oCC_int *)(a4))->v)) + 0x0)) = 0x0;
                }
            }
            t0 = (((struct oC8_int *)(a4))->v);
            if (((((struct o14_float *)(t0))->v)) != 1.0f) {
                u0 = (((struct o14_float *)(t0))->v);
                (((struct o14_float *)(t0))->v) = (u0 + 0.0625f);
                if (!(1.0f > (u0 + 0.0625f))) {
                    (((struct o14_float *)(t0))->v) = 1.0f;
                }
            }
            if ((*(short *)((a4 + 0x1E))) != 0) {
                *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) - 1);
            } else {
                t0 = (((struct oD4_int *)(a4))->v);
                if (((((struct o14_float *)(t0))->v)) > 0.0f) {
                    u0 = (((struct o14_float *)(t0))->v);
                    (((struct o14_float *)(t0))->v) = (u0 - 0.0625f);
                    if (!((u0 - 0.0625f) > 0.0f)) {
                        (((struct o14_float *)(t0))->v) = 0.0f;
                    }
                }
            }
            t0 = (((struct oC8_int *)(a4))->v);
            (((struct o8C_float *)(t0))->v) = (((((struct o8C_float *)(t0))->v)) + ((((struct o98_float *)(t0))->v)));
            if (!(((((struct o8C_float *)(t0))->v)) > 0.0f)) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                *(unsigned char *)((t0 + 0x0)) = 0x0;
            }
            return;
        }
        case 20:
        {
            return;
        }
        default:
        {
            FUN_0c03f346(a4, a5, a6, a7);
    return;
        }
    }
}
