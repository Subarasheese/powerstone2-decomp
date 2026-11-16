/* Straight-line functions with calls and guards (batch gen_hy): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uchar { char p[0x10]; unsigned char v; };
struct o11_uchar { char p[0x11]; unsigned char v; };
struct o118_int { char p[0x118]; int v; };
struct o12_uchar { char p[0x12]; unsigned char v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12C_ushort { char p[0x12C]; unsigned short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o13_uchar { char p[0x13]; unsigned char v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o168_float { char p[0x168]; float v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o18_int { char p[0x18]; int v; };
struct o18_short { char p[0x18]; short v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1C_int { char p[0x1C]; int v; };
struct o2_ushort { char p[0x2]; unsigned short v; };
struct o20_float { char p[0x20]; float v; };
struct o20_int { char p[0x20]; int v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o30_float { char p[0x30]; float v; };
struct o35_uchar { char p[0x35]; unsigned char v; };
struct o36_uchar { char p[0x36]; unsigned char v; };
struct o3726_uchar { char p[0x3726]; unsigned char v; };
struct o3739_uchar { char p[0x3739]; unsigned char v; };
struct o376C_uint { char p[0x376C]; unsigned int v; };
struct o378C_float { char p[0x378C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_float { char p[0x40]; float v; };
struct o420_short { char p[0x420]; short v; };
struct o42C_short { char p[0x42C]; short v; };
struct o42C_ushort { char p[0x42C]; unsigned short v; };
struct o44_float { char p[0x44]; float v; };
struct o46_uchar { char p[0x46]; unsigned char v; };
struct o48_float { char p[0x48]; float v; };
struct o48_short { char p[0x48]; short v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4E_uchar { char p[0x4E]; unsigned char v; };
struct o4F_uchar { char p[0x4F]; unsigned char v; };
struct o5_uchar { char p[0x5]; unsigned char v; };
struct o50_float { char p[0x50]; float v; };
struct o50_uchar { char p[0x50]; unsigned char v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o6_uchar { char p[0x6]; unsigned char v; };
struct o60_float { char p[0x60]; float v; };
struct o6C_float { char p[0x6C]; float v; };
struct o7_uchar { char p[0x7]; unsigned char v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o78_int { char p[0x78]; int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uchar { char p[0x8]; unsigned char v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o8_ushort { char p[0x8]; unsigned short v; };
struct o80_int { char p[0x80]; int v; };
struct o8C_float { char p[0x8C]; float v; };
struct o9_uchar { char p[0x9]; unsigned char v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA_uchar { char p[0xA]; unsigned char v; };
struct oA_ushort { char p[0xA]; unsigned short v; };
struct oA0_float { char p[0xA0]; float v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB_uchar { char p[0xB]; unsigned char v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uchar { char p[0xC]; unsigned char v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oD_uchar { char p[0xD]; unsigned char v; };
struct oD0_int { char p[0xD0]; int v; };
struct oD4_int { char p[0xD4]; int v; };
int FUN_0c018e74(int);
int FUN_0c01cb7c(void);
int FUN_0c01e9e4(void);
int FUN_0c021ed2(void);
int FUN_0c021ee2(void);
int FUN_0c022050(void);
int FUN_0c0220c4(int, int, int);
int FUN_0c0222a4(int, int, int);
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c03eff6(void);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c05253c(int, int, int, int, int, int);
int FUN_0c0573c0(int, int, int);
int FUN_0c0573cc(int, int, int);
int FUN_0c0573d8(void);
int FUN_0c0582ac(int, int);
int FUN_0c0582de(int, int);
int FUN_0c0588bc(int, int, int, int, int, int);
int FUN_0c058a6e(int, int, int, int, int, int);
int FUN_0c059bd6(int);
int FUN_0c059df2(int, int);
int FUN_0c05a02e(int);
int FUN_0c05aab6(int, int);
int FUN_0c05aae4(int, int);
int FUN_0c05f80a(void);
int FUN_0c05f826(void);
int FUN_0c05fa10(void);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c064f80(int);
int FUN_0c065b96(int, int, int, int, float);
int FUN_0c073adc(int);
int FUN_0c07bdd0(int, int);
int FUN_0c07d666(int, int);
int FUN_0c07e2f4(int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c0bb70c(int);
int FUN_0c0bb922(int);
int FUN_0c0bb9f2(int);
int FUN_0c0bbf8e(void);
int FUN_0c0bc25e(void);
int FUN_0c0c213c(int);
int FUN_0c0c283a(int);
int FUN_0c0c2ab6(int, int, int);
int FUN_0c0c2ce4(int);
int FUN_0c0c2d56(int, int, int);
int FUN_0c0c41c4(void);
int FUN_0c0cf4b0(int);
int FUN_0c0cff96(int, int);
int FUN_0c0ede50(int);
int FUN_0c0edfac(int);
extern int FUN_0c0fb90e();
int FUN_0c101d38(int);
int FUN_0c1171f0(int);
int FUN_0c11f942(void);
int FUN_0c13303c(int);
int FUN_0c133084(int);
int FUN_0c133644(int, int, int, int, int, int, int);
int FUN_0c145d1c(int, int);
int FUN_0c15173c(int, int);
int FUN_0c166270(int, int);
int FUN_0c168bb8(int, int, int, int);
int FUN_0c179ac0(void);
int FUN_0c186740(int, int);
int FUN_0c18778c(void);
extern int FUN_0c187798();
int game_reset_objects(void);
extern int gfx_set_background_color();
int math_atan2_angle16(float, float);
int math_atan_angle16(float);
float math_cos_angle16(int);
float math_signed_sqrt(float);
float math_sin_angle16(int);
int FUN_0c0c1a10(int a4);
int FUN_0c0cf594(int a4, int a5, int a6);
int FUN_0c142e70(int a4, int a5);
int FUN_0c075328(int a4, int a5, float f4, float f5);
int FUN_0c157d28(int a4, int a5, int a6, int a7);
int FUN_0c023ca0(void);
int FUN_0c0c78a0(int a4, int a5, int a6);
int FUN_0c14692a(int a4, int a5, int a6, int a7);
int FUN_0c0ee148(int a4, int a5, int a6, int a7, float f4);
int FUN_0c1330cc(int a4, int a5, int a6, int a7);
int FUN_0c0327f0(int a4, float f4, float f5);
int FUN_0c05f842(int a4, int a5, int a6);
int FUN_0c04055c(void);
int FUN_0c0fde34(int a4, int a5, int a6);
int FUN_0c167f94(int a4, int a5, int a6, int a7);
int FUN_0c1684c0(int a4, int a5, int a6, int a7);
int FUN_0c0d9360(int a4, int a5, int a6, int a7);
int FUN_0c031a94(int a4, int a5, int a6, int a7, float f4);

int FUN_0c0c1a10(int a4)
{
    int stk[2];

    register int R1;
    register int R2;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_10;
    register int v0_11;
    register int v0_12;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register int v0_9;
    v0_5 = a4;
    v0_6 = FUN_0c0bb922(v0_5);
    v0_2 = (0x48);
    v0_4 = (v0_6);
    v0_3 = (v0_5);
    v0_0 = (0xC471ACC);
    v0_1 = (0xC472462);
    if (((int)(unsigned short)((v0_6 - ((((struct o48_short *)((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC)))->v))) + 0x1000) >= (int)0x2000)) goto L_C0C1A5C;
    v0_4 = ((*(int *)(((((unsigned short)(unsigned char)(*(signed char *)((v0_1 + 0x0))) * (unsigned short)0x264) + v0_0) + v0_2))));
    L_C0C1A6A:;
    v0_5 = FUN_0c0bb70c(v0_4);
    v0_4 = FUN_0c0bb70c((0x8000 + v0_4));
    v0_2 = *(int *)0xC47245C;
    *(unsigned int *)0xC47245C = (v0_2 + 0x2);
    *(unsigned short *)(((int)stk + 0)) = (*(short *)((((v0_2 + 0x2) - 2) + 0x0)));
    *(unsigned short *)(((int)stk + 4)) = (FUN_0c0bb9f2(v0_3));
    v0_6 = *(signed char *)((v0_0 + ((unsigned short)(unsigned char)(*(signed char *)((v0_1 + 0x0))) * (unsigned short)0x264)));
    v0_2 = ((unsigned char)v0_6);
    v0_4 = (v0_4);
    v0_7 = (v0_5);
    v0_11 = (0x264);
    v0_5 = ((*(short *)(((int)stk + 4))));
    v0_8 = ((*(short *)(((int)stk + 0))));
    v0_9 = (0xC472460);
    v0_10 = (0x0);
    v0_12 = (0xC47245C);
    if (((unsigned char)v0_6 == 0)) goto L_C0C1ACA;
    if ((v0_2 == 1)) goto L_C0C1B06;
    if ((v0_2 == 2)) goto L_C0C1B4C;
    if ((v0_2 == 3)) goto L_C0C1B68;
    if ((v0_2 == 4)) goto L_C0C1B6C;
    if ((v0_2 != 5)) goto L_C0C1AC6;
    *(unsigned short *)((v0_9 + 0x0)) = 0x1;
    v0_2 = FUN_0c0bc25e();
    *(unsigned int *)(((((unsigned short)(unsigned char)(*(signed char *)((v0_1 + 0x0))) * (unsigned short)0x264) + v0_0) + 0x8)) = (*(int *)((v0_12 + 0x0)));
    v0_2 = (v0_2);
    L_C0C1BDE:;
    return v0_2;
    L_C0C1AC6:;
    goto L_C0C1BDE;
    L_C0C1B6C:;
    *(unsigned short *)((v0_9 + 0x0)) = v0_10;
    if (((int)v0_8 >= (int)(v0_5 - 20))) goto L_C0C1B80;
    (((struct o42C_ushort *)(v0_3))->v) = (((((struct o42C_short *)(v0_3))->v)) | v0_7);
    v0_2 = (0x42C);
    goto L_C0C1BDE;
    L_C0C1B80:;
    if (((int)v0_8 <= (int)(v0_5 + 0x14))) goto L_C0C1B92;
    (((struct o42C_ushort *)(v0_3))->v) = (((((struct o42C_short *)(v0_3))->v)) | v0_4);
    v0_2 = (0x42C);
    goto L_C0C1BDE;
    L_C0C1B92:;
    v0_6 = (int)v0_8 >= (int)(v0_5 - 10);
    v0_5 = ((v0_5 + 0xA));
    if (v0_6) goto L_C0C1BA4;
    (((struct o42C_ushort *)(v0_3))->v) = (((((struct o42C_short *)(v0_3))->v)) | v0_7);
    v0_2 = (0x42C);
    L_C0C1BA4:;
    if (((int)v0_8 <= (int)v0_5)) goto L_C0C1BB0;
    L_C0C1BA8:;
    (((struct o42C_ushort *)(v0_3))->v) = (((((struct o42C_short *)(v0_3))->v)) | v0_4);
    v0_2 = (0x42C);
    L_C0C1BB0:;
    v0_1 = *(signed char *)((v0_1 + 0x0));
    *(unsigned char *)(((((unsigned short)(unsigned char)v0_1 * (unsigned short)0x264) + v0_0) + 0x0)) = ((*(signed char *)(((((unsigned short)(unsigned char)v0_1 * (unsigned short)0x264) + v0_0) + 0x0))) + 0x1);
    goto L_C0C1BDE;
    L_C0C1B68:;
    *(unsigned short *)((v0_9 + 0x0)) = v0_10;
    goto L_C0C1BB0;
    L_C0C1B4C:;
    *(unsigned short *)((v0_9 + 0x0)) = v0_10;
    if (((int)v0_8 >= (int)(v0_5 - 20))) goto L_C0C1B5E;
    (((struct o42C_ushort *)(v0_3))->v) = (((((struct o42C_short *)(v0_3))->v)) | v0_7);
    v0_2 = (0x42C);
    L_C0C1B5E:;
    if (((int)v0_8 > (int)(v0_5 + 0x14))) goto L_C0C1BA8;
    goto L_C0C1BB0;
    L_C0C1B06:;
    *(unsigned short *)((v0_9 + 0x0)) = v0_10;
    v0_2 = *(signed char *)((v0_1 + 0x0));
    v0_3 = *(short *)(((((unsigned short)(unsigned char)v0_2 * (unsigned short)0x264) + v0_0) + 0x18));
    *(unsigned short *)(((((unsigned short)(unsigned char)v0_2 * (unsigned short)0x264) + v0_0) + 0x18)) = (v0_3 - 1);
    v0_2 = ((unsigned short)(v0_3 - 1));
    if (((unsigned short)(v0_3 - 1) != 0)) goto L_C0C1BDE;
    goto L_C0C1BB0;
    L_C0C1ACA:;
    *(unsigned short *)((v0_9 + 0x0)) = v0_10;
    v0_6 = *(signed char *)((v0_3 + 0x3715));
    v0_2 = (v0_6);
    if ((v0_6 != 21)) goto L_C0C1AE6;
    *(unsigned char *)(((((unsigned short)(unsigned char)(*(signed char *)((v0_1 + 0x0))) * (unsigned short)v0_11) + v0_0) + 0x0)) = 0x4;
    goto L_C0C1B6C;
    L_C0C1AE6:;
    *(unsigned short *)(((((unsigned short)(unsigned char)(*(signed char *)((v0_1 + 0x0))) * (unsigned short)0x264) + v0_0) + 0x18)) = 0x1;
    v0_2 = *(signed char *)((v0_1 + 0x0));
    *(unsigned char *)(((((unsigned short)(unsigned char)v0_2 * (unsigned short)0x264) + v0_0) + 0x0)) = ((*(signed char *)(((((unsigned short)(unsigned char)v0_2 * (unsigned short)0x264) + v0_0) + 0x0))) + 0x1);
    goto L_C0C1B06;
    L_C0C1A5C:;
    *(unsigned int *)(((((unsigned short)(unsigned char)(*(signed char *)((v0_1 + 0x0))) * (unsigned short)0x264) + v0_0) + v0_2)) = v0_4;
    goto L_C0C1A6A;
}

int FUN_0c0cf594(int a4, int a5, int a6)
{

    register int R1;
    register int R2;
    register int R3;
    register int R8;
    register int R10;
    register int R11;
    register int R12;
    register int R13;
    register float F2;
    register float F3;
    register float F14;
    register float F15;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    v0_1 = a4;
    v0_2 = a6;
    v0_0 = R13;
    v0_4 = *(signed char *)((v0_1 + 0x17));
    v0_3 = (v0_4);
    R13 = (0x0);
    v0_0 = (v0_1);
    F14 = (-2.0f);
    F15 = (0.0f);
    if ((v0_4 == 0)) goto L_C0CF5D4;
    if ((v0_3 == 1)) goto L_C0CF5FE;
    L_C0CF764:;
    return v0_3;
    L_C0CF5FE:;
    v0_2 = FUN_0c0c2ce4(v0_0);
    v0_1 = (v0_2);
    if ((v0_2 == 0)) goto L_C0CF630;
    if ((v0_1 != 2)) goto L_C0CF628;
    v0_1 = *(signed char *)((v0_0 + 0x1));
    return FUN_0c0c2d56(v0_0, 0x3, v0_1);
    L_C0CF628:;
    (((struct o50_float *)(v0_0))->v) = F15;
    (((struct o5C_float *)(v0_0))->v) = F14;
    L_C0CF630:;
    (((struct o2C_float *)(v0_0))->v) = (((((struct o2C_float *)(v0_0))->v)) + ((((struct o50_float *)(v0_0))->v)));
    (((struct o50_float *)(v0_0))->v) = (((((struct o50_float *)(v0_0))->v)) + ((((struct o5C_float *)(v0_0))->v)));
    v0_1 = *(signed char *)((v0_0 + 0x16));
    v0_3 = (v0_1);
    if ((v0_1 == 0)) goto L_C0CF674;
    if ((v0_3 == 1)) goto L_C0CF696;
    if ((v0_3 == 2)) goto L_C0CF728;
    goto L_C0CF764;
    L_C0CF728:;
    v0_1 = *(short *)((v0_0 + 0x1C));
    v0_3 = (v0_1);
    if (((int)v0_1 < 0)) goto L_C0CF732;
    v0_3 = ((v0_3 & 0x1));
    L_C0CF73C:;
    (((struct oA8_uchar *)(v0_0))->v) = v0_3;
    v0_1 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_1 + 0x1);
    v0_3 = ((short)(v0_1 + 0x1));
    if (((int)(short)(v0_1 + 0x1) < (int)0xA)) goto L_C0CF764;
    return FUN_0c0c2d56(v0_0, 0xB, 0x0);
    L_C0CF732:;
    v0_3 = (((~(((~v0_3) + 0x1) & 0x1)) + 0x1));
    goto L_C0CF73C;
    L_C0CF696:;
    v0_1 = (((struct oD4_int *)(v0_0))->v);
    (((struct o78_uint *)(v0_1))->v) = (((((struct o78_int *)(v0_1))->v)) + 0x2D8);
    v0_1 = (int)(*(short *)((v0_0 + 0x1C))) >= (int)0x14;
    if (v0_1) goto L_C0CF706;
    v0_1 = (0x0);
    v0_3 = (0xC273894);
    v0_2 = (0xC);
    L_C0CF6B2:;
    v0_4 = *(int *)((((0xC4 + v0_0) + v0_1) + 0x0));
    (((struct o6C_float *)(v0_4))->v) = (((((struct o6C_float *)(v0_4))->v)) + (*(float *)((v0_3 + 0x0))));
    v0_4 = *(int *)((((0xC4 + v0_0) + v0_1) + 0x0));
    (((struct o70_float *)(v0_4))->v) = (((((struct o70_float *)(v0_4))->v)) + ((((struct o50_float *)(v0_0))->v)));
    v0_4 = *(int *)((((0xC4 + v0_0) + v0_1) + 0x0));
    (((struct o74_float *)(v0_4))->v) = (((((struct o74_float *)(v0_4))->v)) + ((((struct o8_float *)(v0_3))->v)));
    v0_4 = (unsigned int)(v0_1 + 0x4) < (unsigned int)v0_2;
    v0_1 = ((v0_1 + 0x4));
    v0_3 = ((v0_3 + 0xC));
    if (v0_4) goto L_C0CF6B2;
    (((struct o50_float *)(v0_0))->v) = (((((struct o50_float *)(v0_0))->v)) + -0.400000006f);
    FPUL_ = (0xBECCCCCD);
    L_C0CF706:;
    v0_1 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_1 + 0x1);
    v0_3 = ((short)(v0_1 + 0x1));
    if (((int)(short)(v0_1 + 0x1) <= (int)0x19)) goto L_C0CF764;
    FUN_0c0cf4b0(v0_0);
    *(unsigned short *)((v0_0 + 0x1C)) = R13;
    (((struct o16_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x16))) + 0x1);
    v0_3 = (0x16);
    goto L_C0CF764;
    L_C0CF674:;
    *(unsigned short *)((v0_0 + 0x1C)) = R13;
    (((struct o50_float *)(v0_0))->v) = (*(float *)0xC2738A4);
    FUN_0c05aae4(0x24, (v0_0 + 0x28));
    (((struct o16_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x16))) + 0x1);
    goto L_C0CF696;
    L_C0CF5D4:;
    FUN_0c0c2ab6(v0_0, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((v0_0 + 0x41C))) * (unsigned short)0x34) + 0xC2738CA))), v0_2);
    (((struct o12C_ushort *)(v0_0))->v) = R13;
    (((struct o50_float *)(v0_0))->v) = F15;
    (((struct o5C_float *)(v0_0))->v) = F14;
    (((struct o17_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x17))) + 0x1);
    goto L_C0CF5FE;
}

int FUN_0c142e70(int a4, int a5)
{
    int stk[8];
    register int t2;
    register int t3;
    register int t46;
    register int t7;
    register int t9;
    register int t11;
    register int t15;
    register int t17;
    register int t19;
    register int t22;
    register int t24;
    register float u25;
    register float u26;
    register float u27;
    register float t28;
    register float u32;
    register int t44;
    register int t12;

    t2 = FUN_0c037320(0x0, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
    t3 = FUN_0c03f444(0x1, 0x0, t2);
    t46 = t3;
    if (t3 == 0) {
    } else {
        FUN_0c03733c(t3, 0x0, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
        t7 = 0x0;
        for (;;) {
            if ((int)t7 >= (int)((((struct oC0_int *)(t3))->v))) {
                break;
            }
            t9 = *(int *)((((t7 << 2) + (0xC4 + t3)) + 0x0));
            *(unsigned short *)((t9 + 0x6)) = 0x1F;
            t11 = ((int (*)(int, int, int))(FUN_0c187798))(t7, t9, 0xC202560);
            t7 = (t12 + 0x1);
        }
        *(unsigned int *)((t3 + 0x4)) = 0xC143118;
        *(unsigned char *)((t3 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        (((struct oAC_ushort *)(t3))->v) = 0xF;
        (((struct oA9_uchar *)(t3))->v) = (*(signed char *)((a4 + 0xA9)));
        *(unsigned int *)((t3 + 0x10)) = a4;
        t15 = ((int (*)(int, int, int))(FUN_0c187798))(t7, 0x0, 0xC202560);
        t17 = *(int *)(((((*(int *)((((a5 & 0x1) << 2) + 0xC202528))) << 2) + (0xC4 + a4)) + 0x0));
        *(unsigned int *)(((int)stk + 16)) = ((((a5 & 0x1) << 1) + (a5 & 0x1)) << 2);
        t19 = ((int (*)(void))(FUN_0c187798))();
        FUN_0c0582de((t3 + 0x28), (t17 + 0x28));
        *(volatile int *)(((int)stk + 16));
        t22 = ((int (*)(void))(FUN_0c187798))();
        FUN_0c0582ac((((int)stk + 16) + 0x4), (t17 + 0x28));
        t24 = ((int (*)(void))(FUN_0c187798))();
        u25 = *(float *)(((int)stk + 20));
        u26 = *(float *)(((int)stk + 28));
        u27 = (u26 * u26);
        u27 = u27 + u25 * u25;
        t28 = math_signed_sqrt(u27);
        *(unsigned int *)((t3 + 0x38)) = (math_atan2_angle16((*(float *)(((int)stk + 20))), (*(float *)(((int)stk + 28)))));
        u32 = *(float *)(((int)stk + 24));
        if (t28 == 0.0f) {
            if (!(0.0f > u32)) {
                *(unsigned int *)((t3 + 0x34)) = 0xFFFFC000;
            } else {
                *(unsigned int *)((t3 + 0x34)) = 0x4000;
            }
        } else {
            *(unsigned int *)((t3 + 0x34)) = (math_atan_angle16(((-u32) / t28)));
        }
        FUN_0c07e2f4(t3, 0x62);
        *(int *)((int)stk + 12) = 0xFFFFFEF0;
        *(int *)((int)stk + 8) = 0x0;
        t44 = *(signed char *)((t3 + 0x1));
        *(int *)((int)stk + 4) = (~(((int)0x1 << (int)t44) | 0x100));
        *(int *)((int)stk + 0) = 0x100;
        t46 = (FUN_0c064d24(t3, 0x1, 0x41, 0x0, 0x100, (~(((int)0x1 << (int)t44) | 0x100)), 0x0, 0xFFFFFEF0));
    }
    return t46;
}

int FUN_0c075328(int a4, int a5, float f4, float f5)
{
    int stk[7];
    register int t61;
    register int t1;
    register int t2;
    register int t11;
    register int t15;
    register int t16;
    register int t17;
    register int t18;
    register float u27;
    register int t28;

    t61 = 0x0;
    if ((int)(*(signed char *)((a4 + 0x3726))) < (int)0x2) {
        *(int *)((int)stk + 8) = ((int)stk + 12);
        t1 = FUN_0c073adc(a4);
        t2 = FUN_0c065b96(a4, t1, 0x4000, ((int)stk + 12), 0.0f);
        t61 = 0x0;
        if (t2 != 0) {
            (((struct o3726_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x3726))) + 0x1);
            FUN_0c05a02e((*(signed char *)((a4 + 0x1))));
            FUN_0c07bdd0(a4, 0xB);
            *(float *)(((int)stk + 16)) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
            *(float *)(((int)stk + 24)) = (((((struct o30_float *)(a4))->v)) + ((((struct o54_float *)(a4))->v)));
            t11 = FUN_0c07d666((((int)stk + 12) + 0x4), (a4 + 0x28));
            if ((int)(unsigned short)((t11 - (*(int *)(((int)stk + 12)))) + 0x2000) < (int)0x4000) {
                (((struct o3739_uchar *)(a4))->v) = 0x12;
                (((struct o16_uchar *)(a4))->v) = 0x0;
                *(unsigned int *)((a4 + 0x38)) = (*(int *)(((int)stk + 12)));
                *(int *)((int)stk + 8) = 0x3A;
                *(int *)((int)stk + 4) = 0x4;
                *(int *)((int)stk + 0) = 0xFFFFFFFF;
                FUN_0c07e79c(a4, 0xFFFFFFFF, 0x4, 0x3A, 0xFFFFFFFF, 0x4, 0x3A);
                t15 = *(int *)(((0x118 + a4) + 0x4));
                t16 = (((struct o118_int *)(a4))->v);
                (((struct oA0_float *)(t15))->v) = 1.0f;
                (((struct o9C_float *)(t15))->v) = 1.0f;
                (((struct oA0_float *)(t16))->v) = 1.0f;
                (((struct o9C_float *)(t16))->v) = 1.0f;
                t17 = *(int *)(((0x118 + a4) + 0x4));
                t18 = (((struct o118_int *)(a4))->v);
                (((struct o98_float *)(t17))->v) = 1.0f;
                (((struct o98_float *)(t18))->v) = 1.0f;
                (((struct o94_float *)(t17))->v) = 1.0f;
                (((struct o94_float *)(t18))->v) = 1.0f;
                FUN_0c15173c((a4 + 0x28), (*(int *)((a4 + 0x38))));
                if (((((struct o168_float *)(a4))->v)) > ((((struct o2C_float *)(a4))->v))) {
                    (((struct o2C_float *)(a4))->v) = ((((struct o168_float *)(a4))->v));
                }
                *(unsigned short *)((a4 + 0x1C)) = 0x14;
                *(unsigned short *)((a4 + 0x1E)) = 0xD;
                (((struct o20_ushort *)(a4))->v) = 0x23;
                (((struct o60_float *)(a4))->v) = 0.0f;
                (((struct o58_float *)(a4))->v) = 0.0f;
                (((struct o54_float *)(a4))->v) = 0.0f;
                (((struct o4C_float *)(a4))->v) = 0.0f;
                (((struct o50_float *)(a4))->v) = -0.0f;
                (((struct o5C_float *)(a4))->v) = -1.0f;
                *(int *)((int)stk + 8) = 0x0;
                *(int *)((int)stk + 4) = 0x14;
                FUN_0c05253c(0x3, 0x1, 0x14, 0xA, 0x14, 0x0);
                t61 = 0x1;
            } else {
                u27 = *(float *)0xC075590;
                t28 = *(int *)(((int)stk + 12));
                if ((((t28 + 0x2000) & 0xC000) != 0) && (((t28 + 0x2000) & 0xC000) != 0x8000)) {
                    if ((((t28 + 0x2000) & 0xC000) == 0x4000) || (((t28 + 0x2000) & 0xC000) == 0xC000)) {
                        (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) / (1.0f + 1.0f));
                        (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) / u27);
                    }
                } else {
                    (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) / u27);
                    (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) / (1.0f + 1.0f));
                }
                t61 = 0x0;
            }
        }
    }
    return t61;
}

int FUN_0c157d28(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    register int t8;

    t8 = *(signed char *)((a4 + 0x14));
    if (t8 != 0) {
        if (t8 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        t8 = *(short *)((a4 + 0x1C));
        if (((int)t8 >= (int)((((struct o4_int *)0xC2A28CC)->v))) && (t0 = (((struct o8_int *)0xC2A28CC)->v), (int)t8 <= (int)t0)) {
            FUN_0c0588bc((a4 + 0x40), (a4 + 0x58), 0xC2A2928, (*(short *)((a4 + 0x1C))), (((((struct o8_int *)0xC2A28CC)->v))), (((((struct o4_int *)0xC2A28CC)->v))));
        }
        t0 = *(short *)((a4 + 0x1C));
        if (((int)t0 >= (int)((((struct oC_int *)0xC2A28CC)->v))) && (t1 = (((struct o10_int *)0xC2A28CC)->v), (int)t0 <= (int)t1)) {
            FUN_0c0588bc((a4 + 0x40), (a4 + 0x58), 0xC2A2928, (*(short *)((a4 + 0x1C))), (((((struct o10_int *)0xC2A28CC)->v))), (((((struct oC_int *)0xC2A28CC)->v))));
        }
        t0 = *(short *)((a4 + 0x1C));
        if (((int)t0 >= (int)((((struct o14_int *)0xC2A28CC)->v))) && (t2 = (((struct o18_int *)0xC2A28CC)->v), (int)t0 <= (int)t2)) {
            FUN_0c058a6e((0xB0 + a4), 0xC2A2908, 0xC2A28F8, (*(short *)((a4 + 0x1C))), (((((struct o18_int *)0xC2A28CC)->v))), (((((struct o14_int *)0xC2A28CC)->v))));
        }
        t0 = *(short *)((a4 + 0x1C));
        if (((int)t0 >= (int)((((struct o1C_int *)0xC2A28CC)->v))) && (t3 = (((struct o20_int *)0xC2A28CC)->v), (int)t0 <= (int)t3)) {
            FUN_0c058a6e((0xB0 + a4), 0xC2A2918, 0xC2A2908, (*(short *)((a4 + 0x1C))), (((((struct o20_int *)0xC2A28CC)->v))), (((((struct o1C_int *)0xC2A28CC)->v))));
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0x23F;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        FUN_0c187798(a4, a5, a6);
        t0 = FUN_0c179ac0();
        t1 = ((~(((~t0) + 0x1) & 0x7)) + 0x1);
        if ((int)t0 >= 0) {
            t1 = (t0 & 0x7);
        }
        (((struct o58_float *)(a4))->v) = (((((struct o0_float *)0xC2A2934)->v)) * ((float)t1 / 8.0f));
        (((struct o5C_float *)(a4))->v) = (((((struct o4_float *)0xC2A2934)->v)) * ((float)t1 / 8.0f));
        (((struct o60_float *)(a4))->v) = (((((struct o8_float *)0xC2A2934)->v)) * ((float)t1 / 8.0f));
        FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x0, 0x14, (*(int *)0xC4B40CC));
        t0 = *(short *)((a4 + 0x1C));
        if (((int)t0 >= (int)((((struct o4_int *)0xC2A28CC)->v))) && (t4 = (((struct o8_int *)0xC2A28CC)->v), (int)t0 <= (int)t4)) {
            FUN_0c0588bc((a4 + 0x40), (a4 + 0x58), 0xC2A2928, (*(short *)((a4 + 0x1C))), (((((struct o8_int *)0xC2A28CC)->v))), (((((struct o4_int *)0xC2A28CC)->v))));
        }
        t0 = *(short *)((a4 + 0x1C));
        if (((int)t0 >= (int)((((struct oC_int *)0xC2A28CC)->v))) && (t5 = (((struct o10_int *)0xC2A28CC)->v), (int)t0 <= (int)t5)) {
            FUN_0c0588bc((a4 + 0x40), (a4 + 0x58), 0xC2A2928, (*(short *)((a4 + 0x1C))), (((((struct o10_int *)0xC2A28CC)->v))), (((((struct oC_int *)0xC2A28CC)->v))));
        }
        t0 = *(short *)((a4 + 0x1C));
        if (((int)t0 >= (int)((((struct o14_int *)0xC2A28CC)->v))) && (t6 = (((struct o18_int *)0xC2A28CC)->v), (int)t0 <= (int)t6)) {
            FUN_0c058a6e((0xB0 + a4), 0xC2A2908, 0xC2A28F8, (*(short *)((a4 + 0x1C))), (((((struct o18_int *)0xC2A28CC)->v))), (((((struct o14_int *)0xC2A28CC)->v))));
        }
        t0 = *(short *)((a4 + 0x1C));
        if (((int)t0 >= (int)((((struct o1C_int *)0xC2A28CC)->v))) && (t7 = (((struct o20_int *)0xC2A28CC)->v), (int)t0 <= (int)t7)) {
            FUN_0c058a6e((0xB0 + a4), 0xC2A2918, 0xC2A2908, (*(short *)((a4 + 0x1C))), (((((struct o20_int *)0xC2A28CC)->v))), (((((struct o1C_int *)0xC2A28CC)->v))));
        }
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
    t1 = (short)(t0 + 0x1);
    if ((int)(short)(t0 + 0x1) > (int)((((struct o0_int *)0xC2A28CC)->v))) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t1 = 0x14;
    }
    return t1;
}


int FUN_0c0c78a0(int a4, int a5, int a6)
{
    int stk[3];
    register int t0;
    register int t1;
    register int t3;
    register int t15;
    register int t16;
    register float t18;
    register float u20;
    register float u21;
    register float u22;
    register float u23;
    register float u25;
    register float t27;
    register float u28;
    register float u30;
    register float u31;
    register int t34;
    register int t50;
    register int t51;
    register float t53;
    register float u55;
    register float u56;
    register float u57;
    register float u58;
    register float u60;
    register float t62;
    register float u63;
    register float u65;
    register float u66;
    register int t85;
    register int t10;
    register int t11;

    t0 = *(signed char *)((a4 + 0x1));
    t1 = *(signed char *)((a4 + 0x15));
    if (t1 != 0) {
        if (t1 != 1) {
            (((struct o376C_uint *)((((short)t0 * (short)0x3938) + 0xC532498)))->v) = a4;
            t85 = 0x376C;
        } else {
            t3 = FUN_0c0c283a(a4);
            if (t3 != 0) {
                if ((int)((((struct o420_short *)(a4))->v)) <= 0) {
                    t10 = 0x6;
                    t11 = (*(signed char *)((a4 + 0x1)));
                } else {
                    t10 = 0x5;
                    t11 = (*(signed char *)((a4 + 0x1)));
                }
                t85 = (FUN_0c0c2d56(a4, t10, t11));
            } else {
                if ((unsigned char)(*(signed char *)((a4 + 0x41C))) == 63) {
                    t15 = *(short *)((a4 + 0x1E));
                    *(unsigned short *)((a4 + 0x1E)) = (t15 - 1);
                    if ((int)(short)(t15 - 1) <= 0) {
                        *(unsigned short *)((a4 + 0x1E)) = 0x6;
                        t16 = ((int (*)(void))(FUN_0c187798))();
                        t18 = math_sin_angle16((*(int *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x38))));
                        u20 = (((struct o378C_float *)((((short)t0 * (short)0x3938) + 0xC532498)))->v);
                        u21 = (t18 * u20);
                        u22 = (*(float *)(((int)stk + 0)));
                        u22 = u22 + 100.0f * u21;
                        *(float *)(((int)stk + 0)) = u22;
                        u23 = (((struct o378C_float *)((((short)t0 * (short)0x3938) + 0xC532498)))->v);
                        u25 = (*(float *)(((int)stk + 4)));
                        u25 = u25 + 140.0f * u23;
                        *(float *)(((int)stk + 4)) = u25;
                        t27 = math_cos_angle16((*(int *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x38))));
                        u28 = (((struct o378C_float *)((((short)t0 * (short)0x3938) + 0xC532498)))->v);
                        u30 = (t27 * u28);
                        u31 = (*(float *)(((int)stk + 8)));
                        u31 = u31 + 100.0f * u30;
                        *(float *)(((int)stk + 8)) = u31;
                        FUN_0c168bb8((*(signed char *)((a4 + 0x1))), ((int)stk + 0), ((((short)t0 * (short)0x3938) + 0xC532498) + 0x34), 0x0);
                        t34 = *(short *)((a4 + 0x1C));
                        *(unsigned short *)((a4 + 0x1C)) = (t34 - 1);
                        if ((short)(t34 - 1) == 0) {
                            FUN_0c0c2d56(a4, 0x5, (*(signed char *)((a4 + 0x1))));
                        }
                    }
                }
                (((struct o376C_uint *)((((short)t0 * (short)0x3938) + 0xC532498)))->v) = a4;
                t85 = 0x376C;
            }
        }
    } else {
        t50 = *(signed char *)((a4 + 0x41C));
        if ((unsigned char)t50 != 62) {
            if ((unsigned char)t50 != 63) {
            } else {
                t51 = ((int (*)(int, int, int))(FUN_0c187798))(a4, a5, a6);
                t53 = math_sin_angle16((*(int *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x38))));
                u55 = (((struct o378C_float *)((((short)t0 * (short)0x3938) + 0xC532498)))->v);
                u56 = (t53 * u55);
                u57 = (*(float *)(((int)stk + 0)));
                u57 = u57 + 100.0f * u56;
                *(float *)(((int)stk + 0)) = u57;
                u58 = (((struct o378C_float *)((((short)t0 * (short)0x3938) + 0xC532498)))->v);
                u60 = (*(float *)(((int)stk + 4)));
                u60 = u60 + 140.0f * u58;
                *(float *)(((int)stk + 4)) = u60;
                t62 = math_cos_angle16((*(int *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x38))));
                u63 = (((struct o378C_float *)((((short)t0 * (short)0x3938) + 0xC532498)))->v);
                u65 = (t62 * u63);
                u66 = (*(float *)(((int)stk + 8)));
                u66 = u66 + 100.0f * u65;
                *(float *)(((int)stk + 8)) = u66;
                FUN_0c168bb8((*(signed char *)((a4 + 0x1))), ((int)stk + 0), ((((short)t0 * (short)0x3938) + 0xC532498) + 0x34), 0x1);
                FUN_0c059df2((*(signed char *)((a4 + 0x1))), 0x53);
                *(unsigned short *)((a4 + 0x1C)) = 0x5;
                *(unsigned short *)((a4 + 0x1E)) = 0x6;
            }
        } else {
            FUN_0c166270(a4, (*(signed char *)((a4 + 0x41F))));
            FUN_0c059df2((*(signed char *)((a4 + 0x1))), 0x50);
        }
        FUN_0c0c213c(a4);
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        (((struct o376C_uint *)((((short)t0 * (short)0x3938) + 0xC532498)))->v) = a4;
        t85 = 0x376C;
    }
    return t85;
}

int FUN_0c14692a(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t2;
    int t3;
    register int t4;
    register float u0;

    t4 = *(signed char *)((a4 + 0x14));
    if (t4 != 0) {
        if (t4 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        t4 = *(short *)((a4 + 0x1C));
        if (((int)t4 >= (int)((((struct o4_int *)0xC2A251C)->v))) && (t0 = (((struct o8_int *)0xC2A251C)->v), (int)t4 <= (int)t0)) {
            FUN_0c0588bc((((((struct oC4_int *)(a4))->v)) + 0x84), 0xC2A2510, 0xC2A2504, (*(short *)((a4 + 0x1C))), (((((struct o8_int *)0xC2A251C)->v))), (((((struct o4_int *)0xC2A251C)->v))));
        }
        if ((*(short *)((a4 + 0x1E))) != 0) {
            t0 = (((struct oC4_int *)(a4))->v);
            (((struct o7C_uint *)(t0))->v) = (((((struct o7C_int *)(t0))->v)) + ((((struct o14_int *)0xC2A251C)->v)));
        } else {
            t0 = (((struct oC4_int *)(a4))->v);
            (((struct o7C_uint *)(t0))->v) = (((((struct o7C_int *)(t0))->v)) - ((((struct o14_int *)0xC2A251C)->v)));
        }
        t0 = *(short *)((a4 + 0x1C));
        if (((int)t0 >= (int)((((struct oC_int *)0xC2A251C)->v))) && (t1 = (((struct o10_int *)0xC2A251C)->v), (int)t0 <= (int)t1)) {
            FUN_0c058a6e((((((struct oC4_int *)(a4))->v)) + 0x14), 0xC2A23AC, 0xC2A23BC, (*(short *)((a4 + 0x1C))), (((((struct o10_int *)0xC2A251C)->v))), (((((struct oC_int *)0xC2A251C)->v))));
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0xF;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        FUN_0c03744a(((((struct oC4_int *)(a4))->v)), (*(short *)((a4 + 0x1E))), 0xB, (*(int *)(((((*(signed char *)((a4 + 0x2))) << 2) << 1) + 0xC4B40E0))));
        *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x21F;
        *(volatile int *)((a4 + 0xC4));
        FUN_0c187798();
        *(volatile int *)((a4 + 0xC4));
        FUN_0c18778c();
        t0 = (((struct oC4_int *)(a4))->v);
        t1 = FUN_0c179ac0();
        t4 = ((~(((~t1) + 0x1) & 0x7)) + 0x1);
        if ((int)t1 >= 0) {
            t4 = (t1 & 0x7);
        }
        u0 = (((float)t4 * 360.0f) / 8.0f);
        (((struct o7C_uint *)(t0))->v) = ((int)((((u0 * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF);
        t0 = *(short *)((a4 + 0x1C));
        if (((int)t0 >= (int)((((struct o4_int *)0xC2A251C)->v))) && (t2 = (((struct o8_int *)0xC2A251C)->v), (int)t0 <= (int)t2)) {
            FUN_0c0588bc((((((struct oC4_int *)(a4))->v)) + 0x84), 0xC2A2510, 0xC2A2504, (*(short *)((a4 + 0x1C))), (((((struct o8_int *)0xC2A251C)->v))), (((((struct o4_int *)0xC2A251C)->v))));
        }
        if ((*(short *)((a4 + 0x1E))) != 0) {
            t0 = (((struct oC4_int *)(a4))->v);
            (((struct o7C_uint *)(t0))->v) = (((((struct o7C_int *)(t0))->v)) + ((((struct o14_int *)0xC2A251C)->v)));
        } else {
            t0 = (((struct oC4_int *)(a4))->v);
            (((struct o7C_uint *)(t0))->v) = (((((struct o7C_int *)(t0))->v)) - ((((struct o14_int *)0xC2A251C)->v)));
        }
        t0 = *(short *)((a4 + 0x1C));
        if (((int)t0 >= (int)((((struct oC_int *)0xC2A251C)->v))) && (t3 = (((struct o10_int *)0xC2A251C)->v), (int)t0 <= (int)t3)) {
            FUN_0c058a6e((((((struct oC4_int *)(a4))->v)) + 0x14), 0xC2A23AC, 0xC2A23BC, (*(short *)((a4 + 0x1C))), (((((struct o10_int *)0xC2A251C)->v))), (((((struct oC_int *)0xC2A251C)->v))));
        }
    }
    t0 = (((struct oC4_int *)(a4))->v);
    *(unsigned short *)((t0 + 0x6)) = ((*(short *)((t0 + 0x6))) | 0x1000);
    FUN_0c145d1c(a4, ((((struct oC4_int *)(a4))->v)));
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
    t1 = (short)(t0 + 0x1);
    if ((int)(short)(t0 + 0x1) > (int)((((struct o0_int *)0xC2A251C)->v))) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t1 = 0x14;
    }
    return t1;
}

int FUN_0c0ee148(int a4, int a5, int a6, int a7, float f4)
{
    register int t0;
    int t1;
    register int t2;
    register int t3;
    register int t4;
    register float u0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 == 1) {
            if ((*(signed char *)((a4 + 0x15))) != 1) {
                FUN_0c0ede50(a4);
                t1 = *(signed char *)((0x15 + (*(int *)((a4 + 0x10)))));
                t2 = t1;
                if ((t1 != 4) && ((t1 != 5) && ((t1 != 6) && ((t1 != 8) && ((t1 != 9) && ((t1 != 99) && (t1 == 7))))))) {
                    (((struct o15_uchar *)(a4))->v) = 0x1;
                    (((struct o16_uchar *)(a4))->v) = 0x0;
                    t2 = 0x16;
                }
                return t2;
            }
            return FUN_0c0edfac(a4);
        }
        return t0;
    }
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                (((struct o15_uchar *)(a4))->v) = 0x0;
                *(unsigned short *)((a4 + 0x1C)) = 0x168;
                t0 = 0x168;
            } else {
                t1 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
                if ((int)(short)(t1 - 1) <= 0) {
                    t1 = *(signed char *)((a4 + 0x15));
                    (((struct o15_uchar *)(a4))->v) = (t1 + 0x1);
                    *(unsigned short *)((a4 + 0x1C)) = 0x3C;
                    t2 = (t1 + 0x1);
                }
                (((struct oBC_float *)(a4))->v) = (((((struct oBC_float *)(a4))->v)) + 0.0166666675f);
                if (!(1.0f > ((((struct oBC_float *)(a4))->v)))) {
                    (((struct oBC_float *)(a4))->v) = 1.0f;
                }
                u0 = (((struct oBC_float *)(a4))->v);
                (((struct oB8_float *)(a4))->v) = u0;
                (((struct oB4_float *)(a4))->v) = u0;
                t1 = t2;
                t2 = 0x0;
                t3 = a7;
                t4 = 0x0;
                for (;;) {
                    if ((int)t2 >= (int)((((struct oC0_int *)(a4))->v))) {
                        break;
                    }
                    t3 = 0xC4;
                    t4 = t2;
                    t4 = (t4 << 2);
                    t3 = (t3 + a4);
                    t3 = (t3 + t4);
                    t3 = (*(int *)((t3 + 0x0)));
                    t2 = (t2 + 0x1);
                    t1 = 0x80;
                    t1 = (t1 + t3);
                    *(unsigned int *)((t1 + 0x0)) = (((((struct o80_int *)(t3))->v)) - ((int)((int)(*(int *)((0xC1CD224 + t4))) / (int)0x3C)));
                }
                t0 = 0xC0;
            }
            t1 = t0;
        } else {
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
            t2 = (short)(t0 - 1);
            if ((int)(short)(t0 - 1) <= 0) {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                *(unsigned short *)((a4 + 0x1C)) = 0x3C;
                t2 = 0x3C;
            }
            t1 = t2;
        }
        t0 = t1;
    } else {
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        t1 = 0x1;
        t2 = a7;
        if ((int)(*(signed char *)((a4 + 0x1B))) >= 0) {
            (((struct oA4_uint *)(a4))->v) = ((*(int *)0xC540E20) + 0x64);
            t3 = *(int *)0xC540E20;
            *(unsigned int *)((a4 + 0x10)) = t3;
            t1 = t3;
            t2 = 0xC540978;
        }
        t3 = t1;
        t1 = 0x0;
        t4 = t2;
        t2 = 0x0;
        for (;;) {
            if ((int)t1 >= (int)((((struct oC0_int *)(a4))->v))) {
                break;
            }
            t2 = 0xC4;
            t4 = t1;
            t4 = (t4 << 2);
            t2 = (t2 + a4);
            t2 = (t2 + t4);
            t2 = (*(int *)((t2 + 0x0)));
            t3 = 0x80;
            t1 = (t1 + 0x1);
            t3 = (t3 + t2);
            *(unsigned int *)((t3 + 0x0)) = (*(int *)((0xC1CD224 + t4)));
        }
        (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x200);
        (((struct oBC_float *)(a4))->v) = 0.0f;
        (((struct oB8_float *)(a4))->v) = 0.0f;
        (((struct oB4_float *)(a4))->v) = 0.0f;
        *(unsigned short *)((a4 + 0x1C)) = 0x348;
        t1 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
        t2 = (short)(t1 - 1);
        if ((int)(short)(t1 - 1) <= 0) {
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            *(unsigned short *)((a4 + 0x1C)) = 0x3C;
            t2 = 0x3C;
        }
        t0 = t2;
    }
    return t0;
}

int FUN_0c1330cc(int a4, int a5, int a6, int a7)
{
    int stk[4];
    register int t0;
    register int t2;
    register int t4;
    register float u12;
    register int t23;
    register float u31;
    register int t40;
    register float u50;
    register float u52;
    register int t54;
    register int t59;
    register int t61;
    register int t68;
    register float u78;
    register float u80;
    register int t82;
    register int t87;
    register int t89;
    register int t34;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return FUN_0c03f346(a4, a5, a6, a7);
            }
            FUN_0c133084(a4);
            t2 = *(signed char *)((a4 + 0x15));
            if (t2 != 0) {
                if (t2 != 1) {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    (((struct o15_uchar *)(a4))->v) = 0x0;
                    t34 = 0x15;
                } else {
                    t4 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t4 + 0x1);
                    if ((short)(t4 + 0x1) == 5) {
                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    }
                    (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) - 0.200000003f);
                    if (0.0f > ((((struct o40_float *)(a4))->v))) {
                        (((struct o40_float *)(a4))->v) = 0.0f;
                    }
                    u12 = (((struct o40_float *)(a4))->v);
                    (((struct o48_float *)(a4))->v) = u12;
                    (((struct o44_float *)(a4))->v) = u12;
                    *(volatile int *)((a4 + 0xC4));
                    t34 = (((int (*)(void))(FUN_0c187798))());
                }
            } else {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                *(unsigned short *)(((0x12A + a4) + 0x2)) = 0x0;
                (((struct o12A_ushort *)(a4))->v) = 0x0;
                *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x23F;
                (((struct o18_float *)(((((struct oC4_int *)(a4))->v))))->v) = 1.0f;
                (((struct o1C_float *)(((((struct oC4_int *)(a4))->v))))->v) = 1.0f;
                (((struct o20_float *)(((((struct oC4_int *)(a4))->v))))->v) = 1.0f;
                *(unsigned short *)((a4 + 0x1C)) = 0x0;
                t23 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t23 + 0x1);
                if ((short)(t23 + 0x1) == 5) {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                }
                (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) - 0.200000003f);
                if (0.0f > ((((struct o40_float *)(a4))->v))) {
                    (((struct o40_float *)(a4))->v) = 0.0f;
                }
                u31 = (((struct o40_float *)(a4))->v);
                (((struct o48_float *)(a4))->v) = u31;
                (((struct o44_float *)(a4))->v) = u31;
                *(volatile int *)((a4 + 0xC4));
                t34 = (((int (*)(int))(FUN_0c187798))((0x12A + a4)));
            }
            return t34;
        }
        FUN_0c13303c(a4);
        if ((*(signed char *)((a4 + 0x15))) != 0) {
            
        } else {
            t40 = FUN_0c064f80(a4);
            if (t40 != 0) {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                (((struct o50_float *)(a4))->v) = 0.0f;
                (((struct o5C_float *)(a4))->v) = 0.0f;
                FUN_0c133644(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8));
                FUN_0c133644(a4, 0x1, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8));
                (((struct o12E_ushort *)(a4))->v) = 0x0;
                FUN_0c059df2((*(signed char *)((a4 + 0x1))), 0x4A);
            } else {
                (((struct o5C_float *)(a4))->v) = -1.0f;
            }
        }
        u50 = (((struct o40_float *)(a4))->v);
        (((struct o40_float *)(a4))->v) = (u50 + 0.100000001f);
        if ((u50 + 0.100000001f) > (1.0f + 1.0f)) {
            (((struct o40_float *)(a4))->v) = (1.0f + 1.0f);
        }
        u52 = (((struct o40_float *)(a4))->v);
        (((struct o48_float *)(a4))->v) = u52;
        (((struct o44_float *)(a4))->v) = u52;
        *(volatile int *)((a4 + 0xC4));
        t54 = ((int (*)(void))(FUN_0c187798))();
        (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
        t59 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t59 - 1);
        t61 = (short)(t59 - 1);
        if ((short)(t59 - 1) == 0) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            (((struct o15_uchar *)(a4))->v) = 0x0;
            t61 = 0x15;
        }
        return t61;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct o15_uchar *)(a4))->v) = 0x0;
    *(unsigned short *)((a4 + 0x1C)) = 0x3C;
    (((struct o5C_float *)(a4))->v) = -1.0f;
    (((struct o50_float *)(a4))->v) = 0.0f;
    FUN_0c13303c(a4);
    if ((*(signed char *)((a4 + 0x15))) != 0) {
        
    } else {
        t68 = FUN_0c064f80(a4);
        if (t68 != 0) {
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            (((struct o50_float *)(a4))->v) = 0.0f;
            (((struct o5C_float *)(a4))->v) = 0.0f;
            FUN_0c133644(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8));
            FUN_0c133644(a4, 0x1, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8));
            (((struct o12E_ushort *)(a4))->v) = 0x0;
            FUN_0c059df2((*(signed char *)((a4 + 0x1))), 0x4A);
        } else {
            (((struct o5C_float *)(a4))->v) = -1.0f;
        }
    }
    u78 = (((struct o40_float *)(a4))->v);
    (((struct o40_float *)(a4))->v) = (u78 + 0.100000001f);
    if ((u78 + 0.100000001f) > (1.0f + 1.0f)) {
        (((struct o40_float *)(a4))->v) = (1.0f + 1.0f);
    }
    u80 = (((struct o40_float *)(a4))->v);
    (((struct o48_float *)(a4))->v) = u80;
    (((struct o44_float *)(a4))->v) = u80;
    *(volatile int *)((a4 + 0xC4));
    t82 = ((int (*)(void))(FUN_0c187798))();
    (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
    t87 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t87 - 1);
    t89 = (short)(t87 - 1);
    if ((short)(t87 - 1) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o15_uchar *)(a4))->v) = 0x0;
        t89 = 0x15;
    }
    return t89;
}

int FUN_0c0327f0(int a4, float f4, float f5)
{
    register int t51;
    register int t53;
    register int t56;
    register int t57;
    register int t62;
    register int t64;
    register int t67;
    register int t68;

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R7;
    register int R12;
    register int R14;
    register float F2;
    register float F3;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register float w0_0;
    register float w0_1;
    v0_1 = a4;
    v0_3 = *(signed char *)((v0_1 + 0x14));
    v0_2 = (v0_3);
    v0_0 = (0x1);
    if ((v0_3 == 0)) goto L_C032804;
    if ((v0_2 == 1)) goto L_C032822;
    return FUN_0c03f346(v0_1, R5, v0_0, R7);
    L_C032822:;
    v0_3 = *(signed char *)((v0_1 + 0x15));
    v0_2 = (v0_3);
    w0_0 = (0.0f);
    w0_1 = (1.0f);
    if ((v0_3 == 0)) goto L_C032868;
    if ((v0_2 == 1)) goto L_C032906;
    if ((v0_2 != 2)) goto L_C03283A;
    v0_2 = (((struct oC4_int *)(v0_1))->v);
    (((struct o74_float *)(v0_2))->v) = (((((struct o74_float *)(v0_2))->v)) - 0.200000003f);
    v0_2 = (((struct oC8_int *)(v0_1))->v);
    (((struct o74_float *)(v0_2))->v) = (((((struct o74_float *)(v0_2))->v)) - 0.200000003f);
    v0_2 = (0x74);
    if ((((((struct o74_float *)(((((struct oC8_int *)(v0_1))->v))))->v)) > -5.0f)) goto L_C0329B8;
    *(unsigned char *)((((((struct oC4_int *)(v0_1))->v)) + 0x0)) = v0_0;
    L_C032992:;
    (((struct o15_uchar *)(v0_1))->v) = ((*(signed char *)((v0_1 + 0x15))) + 0x1);
    v0_2 = (0x15);
    L_C0329B8:;
    return v0_2;
    L_C03283A:;
    if ((v0_2 != 3)) goto L_C032842;
    v0_0 = (((struct oC8_int *)(v0_1))->v);
    (((struct o8C_float *)(v0_0))->v) = (((((struct o8C_float *)(v0_0))->v)) - 0.0399999991f);
    w0_0 = (((struct o8C_float *)(((((struct oC8_int *)(v0_1))->v))))->v);
    v0_2 = (0x8C);
    w0_1 = (w0_0);
    FPUL_ = (0x3D23D70A);
    if ((!(0.0f > w0_0))) goto L_C0329B8;
    *(unsigned short *)((v0_1 + 0x1C)) = 0x3C;
    goto L_C032992;
    L_C032842:;
    if ((v0_2 != 4)) goto L_C03284A;
    v0_0 = *(short *)((v0_1 + 0x1C));
    *(unsigned short *)((v0_1 + 0x1C)) = (v0_0 - 1);
    v0_2 = ((short)(v0_0 - 1));
    if (((short)(v0_0 - 1) != 0)) goto L_C0329B8;
    (((struct o14_uchar *)(v0_1))->v) = ((*(signed char *)((v0_1 + 0x14))) + 0x1);
    v0_2 = (0x14);
    goto L_C0329B8;
    L_C03284A:;
    goto L_C0329B8;
    L_C032906:;
    v0_3 = *(short *)((v0_1 + 0x1C));
    *(unsigned short *)((v0_1 + 0x1C)) = (v0_3 - 1);
    v0_2 = ((short)(v0_3 - 1));
    if (((short)(v0_3 - 1) != 0)) goto L_C0329B8;
    *(unsigned char *)((((((struct oC4_int *)(v0_1))->v)) + 0x0)) = v0_0;
    *(unsigned char *)((((((struct oC8_int *)(v0_1))->v)) + 0x0)) = v0_0;
    (((struct o74_float *)(((((struct oC4_int *)(v0_1))->v))))->v) = w0_0;
    (((struct o74_float *)(((((struct oC8_int *)(v0_1))->v))))->v) = w0_0;
    (((struct o8C_float *)(((((struct oC8_int *)(v0_1))->v))))->v) = w0_1;
    goto L_C032992;
    L_C032868:;
    v0_2 = *(short *)((v0_1 + 0x1C));
    *(unsigned short *)((v0_1 + 0x1C)) = (v0_2 - 1);
    if (((short)(v0_2 - 1) != 0)) goto L_C032906;
    v0_2 = (((struct oC4_int *)(v0_1))->v);
    *(unsigned char *)((v0_2 + 0x0)) = 0x0;
    *(unsigned short *)((v0_2 + 0x6)) = 0x31F;
    *(volatile signed char *)((v0_1 + 0x2));
    v0_1 = ((int (*)(int, int, int))(FUN_0c187798))(v0_1, v0_2, v0_0);
    *(volatile signed char *)((t51 + 0x2));
    v0_1 = ((int (*)(int, int))(FUN_0c187798))(t51, t53);
    (((struct o18_float *)(t56))->v) = f5;
    (((struct o1C_float *)(t56))->v) = f4;
    (((struct o20_float *)(t56))->v) = f4;
    v0_1 = (((struct oC8_int *)(t57))->v);
    *(unsigned char *)((v0_1 + 0x0)) = 0x0;
    *(unsigned short *)((v0_1 + 0x6)) = 0x31F;
    *(volatile signed char *)((t57 + 0x2));
    v0_1 = ((int (*)(int, int))(FUN_0c187798))(t57, v0_1);
    *(volatile signed char *)((t62 + 0x2));
    v0_1 = ((int (*)(int, int))(FUN_0c187798))(t62, t64);
    (((struct o18_float *)(t67))->v) = f5;
    (((struct o1C_float *)(t67))->v) = f4;
    (((struct o20_float *)(t67))->v) = f4;
    *(unsigned short *)((t68 + 0x1C)) = 0x3C;
    (((struct o15_uchar *)(t68))->v) = ((*(signed char *)((t68 + 0x15))) + 0x1);
    v0_1 = (t68);
    w0_0 = (f4);
    w0_1 = (f5);
    goto L_C032906;
    L_C032804:;
    (((struct oA8_uchar *)(v0_1))->v) = v0_0;
    (((struct oAC_ushort *)(v0_1))->v) = 0xF;
    (((struct oA9_uchar *)(v0_1))->v) = 0x21;
    *(unsigned short *)((v0_1 + 0x1C)) = v0_0;
    (((struct o14_uchar *)(v0_1))->v) = ((*(signed char *)((v0_1 + 0x14))) + 0x1);
    goto L_C032822;
}



int FUN_0c0fde34(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        t1 = t0;
        if (t0 != 1) {
        } else {
            t0 = *(int *)((a4 + 0x10));
            *(volatile int *)((a4 + 0xD0));
            *(volatile short *)((t0 + 0x1C));
            t0 = ((int (*)(int, int, int))(FUN_0c187798))(a4, a5, a6);
            if ((int)((((struct o22_short *)(a4))->v)) < (int)((((struct o0_int *)0xC28ECBC)->v))) {
                t0 = 0x0;
                t2 = (((((struct o0_int *)0xC28ECBC)->v)));
                t3 = 0xC28EC5C;
                t4 = 0xC28EC6C;
                t5 = ((((struct o22_short *)(a4))->v));
            } else {
                t0 = (((((struct o0_int *)0xC28ECBC)->v)));
                t2 = (((((struct o4_int *)0xC28ECBC)->v)));
                t3 = 0xC28EC6C;
                t4 = 0xC28EC5C;
                t5 = ((((struct o22_short *)(a4))->v));
            }
            FUN_0c058a6e((((((struct oD0_int *)(a4))->v)) + 0x14), t3, t4, t5, t2, t0);
            t0 = (((struct o22_short *)(a4))->v);
            (((struct o22_ushort *)(a4))->v) = (t0 + 0x1);
            if ((int)(short)(t0 + 0x1) > (int)((((struct o4_int *)0xC28ECBC)->v))) {
                (((struct o22_ushort *)(a4))->v) = 0x0;
            }
            FUN_0c03744a(((((struct oCC_int *)(a4))->v)), 0x0, (*(int *)((((*(short *)(((*(int *)((a4 + 0x10))) + 0x1C))) << 2) + 0xC28ECC4))), ((((struct o0_int *)0xC4B410C)->v)));
            t0 = (((struct oCC_int *)(a4))->v);
            *(unsigned short *)((t0 + 0x6)) = ((*(short *)((t0 + 0x6))) | 0x400);
            FUN_0c058a6e((((((struct oCC_int *)(a4))->v)) + 0x14), 0xC28EB38, 0xC28EB28, ((((struct o20_short *)(a4))->v)), 0xA, 0x0);
            if (((((struct o20_short *)(a4))->v)) == 0) {
                FUN_0c03744a(((((struct oCC_int *)(a4))->v)), 0x0, (*(int *)((((*(short *)((a4 + 0x1E))) << 2) + 0xC28ECC4))), ((((struct o0_int *)0xC4B410C)->v)));
                t0 = (((struct oCC_int *)(a4))->v);
                *(unsigned short *)((t0 + 0x6)) = ((*(short *)((t0 + 0x6))) | 0x400);
                FUN_0c058a6e((((((struct oCC_int *)(a4))->v)) + 0x14), 0xC28EB28, 0xC28EB38, ((((struct o20_short *)(a4))->v)), 0xA, 0x0);
            }
            t0 = *(short *)(((*(int *)((a4 + 0x10))) + 0x1C));
            t2 = t0;
            if ((*(short *)((a4 + 0x1E))) != t0) {
                t0 = (((struct o20_short *)(a4))->v);
                (((struct o20_ushort *)(a4))->v) = (t0 + 0x1);
                t3 = 0x20;
                if ((int)(short)(t0 + 0x1) > (int)0xA) {
                    (((struct o20_ushort *)(a4))->v) = 0x0;
                    t0 = *(short *)(((*(int *)((a4 + 0x10))) + 0x1C));
                    *(unsigned short *)((a4 + 0x1E)) = t0;
                    t3 = t0;
                }
                t2 = t3;
            }
            t1 = t2;
        }
        t0 = t1;
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0x1F;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        (((struct o30_float *)(a4))->v) = (1.0f + 1.0f);
        FUN_0c1171f0(a4);
        FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x0, 0x0, ((((struct o0_int *)0xC4B410C)->v)));
        FUN_0c03744a(((((struct oD0_int *)(a4))->v)), 0x0, 0x3, ((((struct o0_int *)0xC4B410C)->v)));
        FUN_0c03744a(((((struct oC8_int *)(a4))->v)), 0x0, 0x0, ((((struct o10_int *)0xC4B410C)->v)));
        *(unsigned short *)((((((struct oD0_int *)(a4))->v)) + 0x6)) = 0x61F;
        t1 = *(int *)((a4 + 0x10));
        *(volatile int *)((a4 + 0xD0));
        *(volatile short *)((t1 + 0x1C));
        t1 = ((int (*)(void))(FUN_0c187798))();
        if ((int)((((struct o22_short *)(a4))->v)) < (int)((((struct o0_int *)0xC28ECBC)->v))) {
            t1 = 0x0;
            t2 = (((((struct o0_int *)0xC28ECBC)->v)));
            t3 = 0xC28EC5C;
            t4 = 0xC28EC6C;
            t5 = ((((struct o22_short *)(a4))->v));
        } else {
            t1 = (((((struct o0_int *)0xC28ECBC)->v)));
            t2 = (((((struct o4_int *)0xC28ECBC)->v)));
            t3 = 0xC28EC6C;
            t4 = 0xC28EC5C;
            t5 = ((((struct o22_short *)(a4))->v));
        }
        FUN_0c058a6e((((((struct oD0_int *)(a4))->v)) + 0x14), t3, t4, t5, t2, t1);
        t1 = (((struct o22_short *)(a4))->v);
        (((struct o22_ushort *)(a4))->v) = (t1 + 0x1);
        if ((int)(short)(t1 + 0x1) > (int)((((struct o4_int *)0xC28ECBC)->v))) {
            (((struct o22_ushort *)(a4))->v) = 0x0;
        }
        FUN_0c03744a(((((struct oCC_int *)(a4))->v)), 0x0, (*(int *)((((*(short *)(((*(int *)((a4 + 0x10))) + 0x1C))) << 2) + 0xC28ECC4))), ((((struct o0_int *)0xC4B410C)->v)));
        t1 = (((struct oCC_int *)(a4))->v);
        *(unsigned short *)((t1 + 0x6)) = ((*(short *)((t1 + 0x6))) | 0x400);
        FUN_0c058a6e((((((struct oCC_int *)(a4))->v)) + 0x14), 0xC28EB38, 0xC28EB28, ((((struct o20_short *)(a4))->v)), 0xA, 0x0);
        if (((((struct o20_short *)(a4))->v)) == 0) {
            FUN_0c03744a(((((struct oCC_int *)(a4))->v)), 0x0, (*(int *)((((*(short *)((a4 + 0x1E))) << 2) + 0xC28ECC4))), ((((struct o0_int *)0xC4B410C)->v)));
            t1 = (((struct oCC_int *)(a4))->v);
            *(unsigned short *)((t1 + 0x6)) = ((*(short *)((t1 + 0x6))) | 0x400);
            FUN_0c058a6e((((((struct oCC_int *)(a4))->v)) + 0x14), 0xC28EB28, 0xC28EB38, ((((struct o20_short *)(a4))->v)), 0xA, 0x0);
        }
        t1 = *(short *)(((*(int *)((a4 + 0x10))) + 0x1C));
        t2 = t1;
        if ((*(short *)((a4 + 0x1E))) != t1) {
            t1 = (((struct o20_short *)(a4))->v);
            (((struct o20_ushort *)(a4))->v) = (t1 + 0x1);
            t3 = 0x20;
            if ((int)(short)(t1 + 0x1) > (int)0xA) {
                (((struct o20_ushort *)(a4))->v) = 0x0;
                t1 = *(short *)(((*(int *)((a4 + 0x10))) + 0x1C));
                *(unsigned short *)((a4 + 0x1E)) = t1;
                t3 = t1;
            }
            t2 = t3;
        }
        t0 = t2;
    }
    return t0;
}

int FUN_0c167f94(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t2 = *(signed char *)((a4 + 0x14));
    if (t2 != 0) {
        if (t2 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        if ((int)(*(short *)((a4 + 0x1C))) <= (int)0x8) {
            FUN_0c0588bc((((((struct oC4_int *)(a4))->v)) + 0x84), 0xC2A366C, 0xC2A3660, (*(short *)((a4 + 0x1C))), 0xA, 0x0);
        }
        t2 = *(short *)((a4 + 0x1C));
        if (((int)t2 >= (int)0x4) && ((int)t2 <= (int)0xC)) {
            FUN_0c058a6e((((((struct oC4_int *)(a4))->v)) + 0x14), 0xC2A3630, 0xC2A3620, (*(short *)((a4 + 0x1C))), 0xC, 0x4);
        }
        if ((int)(*(short *)((a4 + 0x1C))) <= (int)0xC) {
            FUN_0c0588bc((((((struct oC8_int *)(a4))->v)) + 0x84), 0xC2A3684, 0xC2A3678, (*(short *)((a4 + 0x1C))), 0xA, 0x0);
        }
        t2 = *(short *)((a4 + 0x1C));
        if (((int)t2 >= (int)0x8) && ((int)t2 <= (int)0x10)) {
            FUN_0c058a6e((((((struct oC8_int *)(a4))->v)) + 0x14), 0xC2A3650, 0xC2A3640, (*(short *)((a4 + 0x1C))), 0x10, 0x8);
        }
        t2 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t2 + 0x1);
        t3 = (short)(t2 + 0x1);
        if ((int)(short)(t2 + 0x1) > (int)0x28) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t3 = 0x14;
        }
        return t3;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x2, 0x3C, (*(int *)0xC4B40CC));
    FUN_0c03744a(((((struct oC8_int *)(a4))->v)), 0x2, 0x3C, (*(int *)0xC4B40CC));
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct oAC_ushort *)(a4))->v) = 0xF;
    (((struct oA9_uchar *)(a4))->v) = 0x21;
    *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
    *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x21F;
    *(volatile int *)((a4 + 0xC4));
    FUN_0c187798(0x1, 0x21F);
    *(volatile int *)((a4 + 0xC4));
    FUN_0c18778c();
    *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = t0;
    *(unsigned short *)((((((struct oC8_int *)(a4))->v)) + 0x6)) = t1;
    *(volatile int *)((a4 + 0xC8));
    FUN_0c187798(t0, t1);
    *(volatile int *)((a4 + 0xC8));
    return (FUN_0c18778c());
}

int FUN_0c1684c0(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t2 = *(signed char *)((a4 + 0x14));
    if (t2 != 0) {
        if (t2 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        if ((int)(*(short *)((a4 + 0x1C))) <= (int)0x8) {
            FUN_0c0588bc((((((struct oC4_int *)(a4))->v)) + 0x84), 0xC2A3768, 0xC2A375C, (*(short *)((a4 + 0x1C))), 0xA, 0x0);
        }
        t2 = *(short *)((a4 + 0x1C));
        if (((int)t2 >= (int)0x4) && ((int)t2 <= (int)0xC)) {
            FUN_0c058a6e((((((struct oC4_int *)(a4))->v)) + 0x14), 0xC2A372C, 0xC2A371C, (*(short *)((a4 + 0x1C))), 0xC, 0x4);
        }
        if ((int)(*(short *)((a4 + 0x1C))) <= (int)0xC) {
            FUN_0c0588bc((((((struct oC8_int *)(a4))->v)) + 0x84), 0xC2A3780, 0xC2A3774, (*(short *)((a4 + 0x1C))), 0xA, 0x0);
        }
        t2 = *(short *)((a4 + 0x1C));
        if (((int)t2 >= (int)0x8) && ((int)t2 <= (int)0x10)) {
            FUN_0c058a6e((((((struct oC8_int *)(a4))->v)) + 0x14), 0xC2A374C, 0xC2A373C, (*(short *)((a4 + 0x1C))), 0x10, 0x8);
        }
        t2 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t2 + 0x1);
        t3 = (short)(t2 + 0x1);
        if ((int)(short)(t2 + 0x1) > (int)0x28) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t3 = 0x14;
        }
        return t3;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x2, 0x3D, (*(int *)0xC4B40CC));
    FUN_0c03744a(((((struct oC8_int *)(a4))->v)), 0x2, 0x3D, (*(int *)0xC4B40CC));
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct oAC_ushort *)(a4))->v) = 0xF;
    (((struct oA9_uchar *)(a4))->v) = 0x21;
    *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
    *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x21F;
    *(volatile int *)((a4 + 0xC4));
    FUN_0c187798(0x1, 0x21F);
    *(volatile int *)((a4 + 0xC4));
    FUN_0c18778c();
    *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = t0;
    *(unsigned short *)((((((struct oC8_int *)(a4))->v)) + 0x6)) = t1;
    *(volatile int *)((a4 + 0xC8));
    FUN_0c187798(t0, t1);
    *(volatile int *)((a4 + 0xC8));
    return (FUN_0c18778c());
}

int FUN_0c0d9360(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    if ((*(signed char *)0xC54223C) == 2) {
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        t1 = t0;
        if (t0 == 1) {
            t0 = *(signed char *)((a4 + 0x2));
            if (t0 != 0) {
                if (t0 != 1) {
                } else {
                    t0 = ((((struct oC4_int *)(a4))->v));
                }
                t2 = t0;
            } else {
                t2 = ((((struct oD0_int *)(a4))->v));
            }
            t0 = *(signed char *)((a4 + 0x2));
            t3 = *(int *)((0xC472AB0 + (t0 << 2)));
            *(unsigned int *)((0xC472AB0 + (t0 << 2))) = (t3 - 1);
            t4 = (t0 << 2);
            if ((t3 - 1) == 0) {
                *(unsigned int *)((0xC472AB0 + ((*(signed char *)((a4 + 0x2))) << 2))) = 0x1;
                t0 = *(int *)((0xC472ABC + ((*(signed char *)((a4 + 0x2))) << 2)));
                t3 = t0;
                if ((unsigned int)t0 >= (unsigned int)0x10) {
                } else {
                    switch ((t0 << 1)) {
                        case 0:
                        {
                            *(unsigned int *)((0xC472ABC + ((*(signed char *)((a4 + 0x2))) << 2))) = 0x1;
                            t0 = 0xC287970;
                        }
                            break;
                        case 2:
                        {
                            *(unsigned int *)((0xC472ABC + ((*(signed char *)((a4 + 0x2))) << 2))) = 0x2;
                            t0 = 0xC287988;
                        }
                            break;
                        case 4:
                        {
                            *(unsigned int *)((0xC472ABC + ((*(signed char *)((a4 + 0x2))) << 2))) = 0x3;
                            t0 = 0xC2879A0;
                        }
                            break;
                        case 6:
                        {
                            *(unsigned int *)((0xC472ABC + ((*(signed char *)((a4 + 0x2))) << 2))) = 0x4;
                            t0 = 0xC2879B8;
                        }
                            break;
                        case 8:
                        {
                            *(unsigned int *)((0xC472ABC + ((*(signed char *)((a4 + 0x2))) << 2))) = 0x5;
                            t0 = 0xC2879D0;
                        }
                            break;
                        case 10:
                        {
                            *(unsigned int *)((0xC472ABC + ((*(signed char *)((a4 + 0x2))) << 2))) = 0x6;
                            t0 = 0xC2879E8;
                        }
                            break;
                        case 12:
                        {
                            *(unsigned int *)((0xC472ABC + ((*(signed char *)((a4 + 0x2))) << 2))) = 0x7;
                            t0 = 0xC287A00;
                        }
                            break;
                        case 14:
                        {
                            *(unsigned int *)((0xC472ABC + ((*(signed char *)((a4 + 0x2))) << 2))) = 0x8;
                            t0 = 0xC287A18;
                        }
                            break;
                        case 16:
                        {
                            *(unsigned int *)((0xC472ABC + ((*(signed char *)((a4 + 0x2))) << 2))) = 0x9;
                            t0 = 0xC287A30;
                        }
                            break;
                        case 18:
                        {
                            *(unsigned int *)((0xC472ABC + ((*(signed char *)((a4 + 0x2))) << 2))) = 0xA;
                            t0 = 0xC287A48;
                        }
                            break;
                        case 20:
                        {
                            *(unsigned int *)((0xC472ABC + ((*(signed char *)((a4 + 0x2))) << 2))) = 0xB;
                            t0 = 0xC287A60;
                        }
                            break;
                        case 22:
                        {
                            *(unsigned int *)((0xC472ABC + ((*(signed char *)((a4 + 0x2))) << 2))) = 0xC;
                            t0 = 0xC287A78;
                        }
                            break;
                        case 24:
                        {
                            *(unsigned int *)((0xC472ABC + ((*(signed char *)((a4 + 0x2))) << 2))) = 0xD;
                            t0 = 0xC287A90;
                        }
                            break;
                        case 26:
                        {
                            *(unsigned int *)((0xC472ABC + ((*(signed char *)((a4 + 0x2))) << 2))) = 0xE;
                            t0 = 0xC287AA8;
                        }
                            break;
                        case 28:
                        {
                            *(unsigned int *)((0xC472ABC + ((*(signed char *)((a4 + 0x2))) << 2))) = 0xF;
                            t0 = 0xC287AC0;
                        }
                            break;
                        default:
                        {
                            *(unsigned int *)((0xC472ABC + ((*(signed char *)((a4 + 0x2))) << 2))) = 0x0;
                            t0 = 0xC287AD8;
                        }
                            break;
                    }
                    t3 = (FUN_0c0cff96((*(int *)((t2 + 0x8))), t0));
                }
                t4 = t3;
            }
            t1 = t4;
        }
        t0 = t1;
    } else {
        (((struct oA8_uchar *)(a4))->v) = 0x0;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t0 = 0x14;
    }
    return t0;
}

int FUN_0c031a94(int a4, int a5, int a6, int a7, float f4)
{
    register int t0;
    register int t2;
    register int t3;
    register int t4;
    register float u0;

    t2 = *(signed char *)((a4 + 0x14));
    if (t2 != 0) {
        if (t2 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        t2 = *(signed char *)((a4 + 0x15));
        if (t2 != 0) {
            if (t2 != 1) {
                t3 = t2;
                if (t2 == 2) {
                    u0 = (((struct o0_float *)0xC031D10)->v);
                    t2 = (((struct oC4_int *)(a4))->v);
                    (((struct o6C_float *)(t2))->v) = (((((struct o6C_float *)(t2))->v)) - u0);
                    t2 = (((struct oC8_int *)(a4))->v);
                    (((struct o6C_float *)(t2))->v) = (((((struct o6C_float *)(t2))->v)) - u0);
                    t2 = 0x6C;
                    if (((((struct o4_float *)0xC031D10)->v)) > ((((struct o6C_float *)(((((struct oC4_int *)(a4))->v))))->v))) {
                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                        t2 = 0x14;
                    }
                    t3 = t2;
                }
                t2 = t3;
            } else {
                t3 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t3 - 1);
                t4 = (short)(t3 - 1);
                if ((short)(t3 - 1) == 0) {
                    *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
                    *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x1;
                    t3 = (((struct oC4_int *)(a4))->v);
                    (((struct o6C_float *)(t3))->v) = (((((struct o6C_float *)(t3))->v)) + 4.0f);
                    t3 = (((struct oC8_int *)(a4))->v);
                    (((struct o6C_float *)(t3))->v) = (((((struct o6C_float *)(t3))->v)) + 4.0f);
                    (((struct o8C_float *)(((((struct oC8_int *)(a4))->v))))->v) = 0.300000012f;
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    t4 = 0x15;
                }
                t2 = t4;
            }
            t3 = t2;
        } else {
            t2 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t2 - 1);
            if ((short)(t2 - 1) == 0) {
                t2 = (((struct oC4_int *)(a4))->v);
                *(unsigned char *)((t2 + 0x0)) = 0x0;
                *(unsigned short *)((t2 + 0x6)) = 0x11F;
                *(volatile signed char *)((a4 + 0x2));
                t4 = ((int (*)(int, int, int))(FUN_0c187798))(t2, a5, a6);
                *(volatile signed char *)((a4 + 0x2));
                t2 = ((int (*)(int))(FUN_0c187798))(t0);
                t0 = (((struct oC8_int *)(a4))->v);
                FUN_0c03744a(t0, 0x1, (*(signed char *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC1A94D0) + 0x19))), (*(int *)0xC4B40D0));
                *(unsigned char *)((t0 + 0x0)) = 0x0;
                *(unsigned short *)((t0 + 0x6)) = 0x31F;
                *(volatile signed char *)((a4 + 0x2));
                t2 = ((int (*)(void))(FUN_0c187798))();
                *(volatile signed char *)((a4 + 0x2));
                t2 = ((int (*)(void))(FUN_0c187798))();
                (((struct o18_float *)(t0))->v) = 0.0f;
                (((struct o1C_float *)(t0))->v) = 0.0f;
                (((struct o20_float *)(t0))->v) = 1.0f;
                *(unsigned short *)((a4 + 0x1C)) = 0x3C;
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            }
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
            t2 = (short)(t0 - 1);
            if ((short)(t0 - 1) == 0) {
                *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
                *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x1;
                t0 = (((struct oC4_int *)(a4))->v);
                (((struct o6C_float *)(t0))->v) = (((((struct o6C_float *)(t0))->v)) + 4.0f);
                t0 = (((struct oC8_int *)(a4))->v);
                (((struct o6C_float *)(t0))->v) = (((((struct o6C_float *)(t0))->v)) + 4.0f);
                (((struct o8C_float *)(((((struct oC8_int *)(a4))->v))))->v) = 0.300000012f;
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                t2 = 0x15;
            }
            t3 = t2;
        }
        return t3;
    }
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct oAC_ushort *)(a4))->v) = 0xF;
    (((struct oA9_uchar *)(a4))->v) = 0x21;
    *(unsigned short *)((a4 + 0x1C)) = 0x1;
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            t2 = t0;
            if (t0 == 2) {
                u0 = (((struct o0_float *)0xC031D10)->v);
                t0 = (((struct oC4_int *)(a4))->v);
                (((struct o6C_float *)(t0))->v) = (((((struct o6C_float *)(t0))->v)) - u0);
                t0 = (((struct oC8_int *)(a4))->v);
                (((struct o6C_float *)(t0))->v) = (((((struct o6C_float *)(t0))->v)) - u0);
                t0 = 0x6C;
                if (((((struct o4_float *)0xC031D10)->v)) > ((((struct o6C_float *)(((((struct oC4_int *)(a4))->v))))->v))) {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    t0 = 0x14;
                }
                t2 = t0;
            }
            t0 = t2;
        } else {
            t2 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t2 - 1);
            t3 = (short)(t2 - 1);
            if ((short)(t2 - 1) == 0) {
                *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
                *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x1;
                t2 = (((struct oC4_int *)(a4))->v);
                (((struct o6C_float *)(t2))->v) = (((((struct o6C_float *)(t2))->v)) + 4.0f);
                t2 = (((struct oC8_int *)(a4))->v);
                (((struct o6C_float *)(t2))->v) = (((((struct o6C_float *)(t2))->v)) + 4.0f);
                (((struct o8C_float *)(((((struct oC8_int *)(a4))->v))))->v) = 0.300000012f;
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                t3 = 0x15;
            }
            t0 = t3;
        }
        t2 = t0;
    } else {
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        if ((short)(t0 - 1) == 0) {
            t0 = (((struct oC4_int *)(a4))->v);
            *(unsigned char *)((t0 + 0x0)) = 0x0;
            *(unsigned short *)((t0 + 0x6)) = 0x11F;
            *(volatile signed char *)((a4 + 0x2));
            t3 = ((int (*)(int, int, int))(FUN_0c187798))(t0, a5, a6);
            *(volatile signed char *)((a4 + 0x2));
            t0 = ((int (*)(int))(FUN_0c187798))(t2);
            t0 = (((struct oC8_int *)(a4))->v);
            FUN_0c03744a(t0, 0x1, (*(signed char *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC1A94D0) + 0x19))), (*(int *)0xC4B40D0));
            *(unsigned char *)((t0 + 0x0)) = 0x0;
            *(unsigned short *)((t0 + 0x6)) = 0x31F;
            *(volatile signed char *)((a4 + 0x2));
            t2 = ((int (*)(void))(FUN_0c187798))();
            *(volatile signed char *)((a4 + 0x2));
            t2 = ((int (*)(void))(FUN_0c187798))();
            (((struct o18_float *)(t0))->v) = 0.0f;
            (((struct o1C_float *)(t0))->v) = 0.0f;
            (((struct o20_float *)(t0))->v) = 1.0f;
            *(unsigned short *)((a4 + 0x1C)) = 0x3C;
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        }
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        t2 = (short)(t0 - 1);
        if ((short)(t0 - 1) == 0) {
            *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
            *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x1;
            t0 = (((struct oC4_int *)(a4))->v);
            (((struct o6C_float *)(t0))->v) = (((((struct o6C_float *)(t0))->v)) + 4.0f);
            t0 = (((struct oC8_int *)(a4))->v);
            (((struct o6C_float *)(t0))->v) = (((((struct o6C_float *)(t0))->v)) + 4.0f);
            (((struct o8C_float *)(((((struct oC8_int *)(a4))->v))))->v) = 0.300000012f;
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            t2 = 0x15;
        }
    }
    return t2;
}
