/* Straight-line functions with calls and guards (batch gen_ic): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_uchar { char p[0x10]; unsigned char v; };
struct o118_int { char p[0x118]; int v; };
struct o11C_int { char p[0x11C]; int v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o168_float { char p[0x168]; float v; };
struct o17C_float { char p[0x17C]; float v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o2C_float { char p[0x2C]; float v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o30_float { char p[0x30]; float v; };
struct o3717_uchar { char p[0x3717]; unsigned char v; };
struct o3718_uchar { char p[0x3718]; unsigned char v; };
struct o3818_short { char p[0x3818]; short v; };
struct o3850_int { char p[0x3850]; int v; };
struct o3850_short { char p[0x3850]; short v; };
struct o3850_uint { char p[0x3850]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uchar { char p[0x8]; unsigned char v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o9_uchar { char p[0x9]; unsigned char v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB0_float { char p[0xB0]; float v; };
struct oB0_short { char p[0xB0]; short v; };
struct oB2_short { char p[0xB2]; short v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
int FUN_0c010448(void);
int FUN_0c0117a0(int);
int FUN_0c018e74(int);
int FUN_0c018e9c(int, int);
int FUN_0c018f40(int, int, int, int);
int FUN_0c018fd2(int);
int FUN_0c01c714(int, int, int);
int FUN_0c01cb7c(void);
int FUN_0c01cd2c(int);
int FUN_0c01ceac(void);
int FUN_0c01d094(void);
int FUN_0c01e9e4(void);
int FUN_0c02b342(int, int);
int FUN_0c02b3ba(int, float, float, float);
int FUN_0c02b502(int);
int FUN_0c03add8(int, int, int, int);
int FUN_0c03afdc(int);
int FUN_0c03b25a(int);
int FUN_0c03c5c0(int, int, int, int, float, float, float, float, float, float, float, float);
int FUN_0c03c7ec(int);
int FUN_0c046238(void);
int FUN_0c046266(int, int, int, int);
int FUN_0c0573c0(int, int, int);
int FUN_0c0573cc(int, int, int);
int FUN_0c059df2(int, int);
int FUN_0c05aab6(int, int);
int FUN_0c07cb70(int, int, int, int);
int FUN_0c07cffa(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07e868(int, int, int, int);
int FUN_0c07eaf4(int, int, int);
int FUN_0c07ebd0(int);
int FUN_0c07ebe6(int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c07f18c(int);
int FUN_0c07fea4(int, int, int);
int FUN_0c08076a(int);
int FUN_0c083cf0(int, int, int, int);
int FUN_0c085cac(int, int, int, int);
int FUN_0c2cef80(int, int);
int FUN_0c2d73f6(int);
int FUN_0c2d7750(void);
int FUN_0c2e4720(void);
int FUN_0c2e6310(void);
int FUN_0c2e635a(void);
int FUN_0c2e638e(void);
int FUN_0c2e7200(int);
int FUN_0c2e732c(void);
int FUN_0c2e76c8(int, int, int, int);
int FUN_0c2e7790(void);
int FUN_0c2e8a12(int);
int FUN_0c2e8a2e(int, int);
int FUN_0c2f294e(int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int memset(int, int, int);
int nlRand(void);
int strcpy(int, int);
int strlen(int);
int strncpy(int, int, int);
extern int syCfgGetIndividualID();
int thunk_FUN_0c03f346(int);
int FUN_0c068acc(int a4);
int FUN_0c018fd8(int a4);
int FUN_0c0104ea(int a4, int a5, int a6, int a7);
int FUN_0c01de2c(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11);
int FUN_0c01d294(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11);
int FUN_0c2e4330(int a4);

int FUN_0c068acc(int a4)
{
    int stk[4];

    register int R5;
    register int R6;
    register int R7;
    register float F1;
    register float F2;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register float w0_0;
    register float w0_1;
    v0_4 = a4;
    v0_5 = (FUN_0c07cffa(v0_4)) == 0;
    v0_0 = (0xC059DF2);
    v0_3 = (0x0);
    v0_6 = (0xC085CAC);
    v0_1 = (0xFFFF0000);
    v0_0 = (v0_4);
    v0_2 = (0xC179AC0);
    v0_2 = (0x28);
    w0_1 = (4.0f);
    if (v0_5) goto L_C068B00;
    L_C068C3C:;
    (((struct o3717_uchar *)(v0_0))->v) = 0x2;
    (((struct o3718_uchar *)(v0_0))->v) = v0_3;
    R5 = (0x2);
    R6 = (0x0);
    L_C068C4A:;
    v0_5 = ((FUN_0c085cac(v0_0, R5, R6, R7)));
    L_C06939E:;
    return v0_5;
    L_C068B00:;
    v0_4 = FUN_0c083cf0(v0_0, R5, R6, R7);
    v0_5 = (v0_4);
    if ((v0_4 == 0)) goto L_C068B0E;
    goto L_C06939E;
    L_C068B0E:;
    v0_4 = *(signed char *)((v0_0 + 0x371D));
    v0_5 = (v0_4);
    if ((v0_4 == 3)) goto L_C068B88;
    if ((v0_5 == 5)) goto L_C068B88;
    if ((v0_5 == 6)) goto L_C068B88;
    v0_4 = (FUN_0c07f18c(v0_0)) == 0;
    if (v0_4) goto L_C068B58;
    R5 = (0x0);
    if ((!((((((struct o168_float *)(v0_0))->v)) + 50.0f) > ((((struct o2C_float *)(v0_0))->v))))) goto L_C068B4A;
    (((struct o2C_float *)(v0_0))->v) = ((((struct o168_float *)(v0_0))->v));
    (((struct o17C_float *)(v0_0))->v) = 1.0f;
    L_C068B4A:;
    v0_4 = FUN_0c07fea4(v0_0, R5, R6);
    v0_5 = (v0_4);
    if ((v0_4 == 0)) goto L_C068B58;
    goto L_C06939E;
    L_C068B58:;
    v0_4 = (FUN_0c07cb70(v0_0, R5, R6, R7)) == 0;
    if (v0_4) goto L_C068B80;
    v0_4 = (((struct o20_short *)(v0_0))->v);
    (((struct o20_ushort *)(v0_0))->v) = (v0_4 - 1);
    if (((short)(v0_4 - 1) != 0)) goto L_C068BA2;
    (((struct o3717_uchar *)(v0_0))->v) = 0x25;
    (((struct o3718_uchar *)(v0_0))->v) = v0_3;
    R5 = (0x25);
    R6 = (0x0);
    L_C068C8A:;
    v0_5 = ((FUN_0c085cac(v0_0, R5, R6, R7)));
    goto L_C06939E;
    L_C068BA2:;
    v0_4 = (FUN_0c07ebe6(v0_0)) == 0;
    if (v0_4) goto L_C068BF8;
    (((struct o3717_uchar *)(v0_0))->v) = 0x5;
    (((struct o3718_uchar *)(v0_0))->v) = 0x2;
    R5 = (0x5);
    R6 = (0x2);
    goto L_C068C8A;
    L_C068BF8:;
    v0_4 = (FUN_0c07ebd0(v0_0)) != 0;
    if (v0_4) goto L_C068C52;
    *(unsigned int *)((v0_0 + 0x38)) = ((((struct o3850_int *)(v0_0))->v));
    v0_1 = *(signed char *)((v0_0 + 0x371D));
    v0_5 = (v0_1);
    if ((v0_1 == 3)) goto L_C068C36;
    if ((v0_5 == 5)) goto L_C068C36;
    if ((v0_5 == 6)) goto L_C068C36;
    if (((*(short *)((v0_0 + 0x1C))) == 0)) goto L_C068C2C;
    (((struct o3717_uchar *)(v0_0))->v) = v0_3;
    (((struct o3718_uchar *)(v0_0))->v) = v0_3;
    R5 = (0x0);
    R6 = (0x0);
    goto L_C068C4A;
    L_C068C2C:;
    FUN_0c08076a(v0_0);
    goto L_C068C3C;
    L_C068C36:;
    FUN_0c08076a(v0_0);
    goto L_C068C3C;
    L_C068C52:;
    v0_5 = FUN_0c07ecc6(v0_0, 0x1, 0x0);
    v0_4 = (v0_5);
    if ((v0_5 == 0)) goto L_C068C7A;
    if ((v0_4 != 2)) goto L_C068CA4;
    (((struct o3717_uchar *)(v0_0))->v) = 0x6;
    (((struct o3718_uchar *)(v0_0))->v) = v0_3;
    R5 = (0x6);
    R6 = (0x0);
    goto L_C068C8A;
    L_C068CA4:;
    v0_4 = *(signed char *)((v0_0 + 0x371D));
    v0_5 = (v0_4);
    v0_6 = (0xC07E79C);
    w0_0 = (30.0f);
    if ((v0_4 != 3)) goto L_C068CB6;
    if (((*(short *)((v0_0 + 0x1C))) == 0)) goto L_C068F50;
    v0_2 = *(int *)((v0_0 + 0x38));
    v0_3 = (((struct o3850_short *)(v0_0))->v);
    v0_4 = ((unsigned short)(v0_3 - v0_2));
    if (!(((0x8000 & (unsigned short)(v0_3 - v0_2)) != 0))) goto L_C0692B4;
    v0_4 = ((v0_4 | v0_1));
    goto L_C0692B4;
    L_C0692B4:;
    *(unsigned int *)((v0_0 + 0x38)) = (((int)((int)v0_4 / (int)(*(short *)((v0_0 + 0x1C))))) + (*(int *)((v0_0 + 0x38))));
    (((struct o4C_float *)(v0_0))->v) = ((math_sin_angle16(((((struct o3850_int *)(v0_0))->v)))) * w0_1);
    w0_0 = math_cos_angle16(((((struct o3850_int *)(v0_0))->v)));
    (((struct o54_float *)(v0_0))->v) = (w0_0 * w0_1);
    v0_1 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_1 - 1);
    v0_5 = ((v0_1 - 1));
    w0_0 = ((w0_0 * w0_1));
    goto L_C06939E;
    L_C068F50:;
    v0_3 = (FUN_0c07ebd0(v0_0)) != 0;
    if (!(v0_3)) goto L_C069382;
    v0_3 = (*(short *)((0xC5413E8 + ((short)(*(signed char *)((v0_0 + 0x1))) * (short)0x2F8))));
    *(int *)((int)stk + 8) = v0_3;
    (((struct o3850_uint *)(v0_0))->v) = (unsigned short)((FUN_0c07eaf4(v0_0, R5, R6)) + v0_3);
    v0_3 = *(int *)((v0_0 + 0x38));
    v0_5 = (((struct o3850_short *)(v0_0))->v);
    v0_4 = ((unsigned short)(v0_5 - v0_3));
    if (((0x8000 & (unsigned short)(v0_5 - v0_3)) == 0)) goto L_C068F90;
    v0_4 = ((v0_4 | v0_1));
    goto L_C068F90;
    L_C069382:;
    return FUN_0c08076a(v0_0);
    L_C068F90:;
    R5 = (0x71C);
    R6 = (0xFFFFF8E4);
    if (((*(short *)((v0_0 + 0x1E))) == 0)) goto L_C068F9E;
    if (((int)v0_4 > (int)R6)) goto L_C0690E8;
    *(unsigned int *)((v0_0 + 0x38)) = ((*(int *)((v0_0 + 0x38))) - R5);
    goto L_C069382;
    L_C0690E8:;
    if (((int)v0_4 < (int)R5)) goto L_C0690F2;
    v0_1 = (((*(int *)((v0_0 + 0x38))) + R5));
    L_C0690FE:;
    *(unsigned int *)((v0_0 + 0x38)) = v0_1;
    goto L_C069382;
    L_C0690F2:;
    v0_1 = (((*(int *)((v0_0 + 0x38))) + (((int)((unsigned int)((int)((unsigned int)v0_4 + (unsigned int)0x0)) + ((((int)0x0 > (int)v0_4)) ? 1u : 0u))) >> 1)));
    goto L_C0690FE;
    L_C068F9E:;
    w0_0 = (5.0f);
    if (((int)v0_4 > (int)R6)) goto L_C068FCA;
    *(unsigned int *)((v0_0 + 0x38)) = ((*(int *)((v0_0 + 0x38))) - R5);
    if (((unsigned short)((((struct o3818_short *)(v0_0))->v)) == 0x312)) goto L_C0690A2;
    *(int *)((int)stk + 8) = 0x12;
    *(int *)((int)stk + 4) = 0x3;
    *(int *)((int)stk + 0) = 0xFFFFFFFF;
    *(unsigned int *)(((int)stk + 8)) = 0x12;
    *(unsigned int *)(((int)stk + 4)) = 0x3;
    *(unsigned int *)(((int)stk + 0)) = 0xFFFFFFFF;
    v0_1 = (0xFFFFFFFF);
    R6 = (0x3);
    R7 = (0x12);
    L_C068FF0:;
    FUN_0c07e79c(v0_0, v0_1, R6, R7, *(int *)((int)stk + 0), *(int *)((int)stk + 4), *(int *)((int)stk + 8));
    v0_1 = (((struct o118_int *)(v0_0))->v);
    (((struct o98_float *)(v0_1))->v) = w0_0;
    (((struct o94_float *)(v0_1))->v) = w0_0;
    v0_1 = (((struct o11C_int *)(v0_0))->v);
    (((struct o98_float *)(v0_1))->v) = w0_0;
    (((struct o94_float *)(v0_1))->v) = w0_0;
    FUN_0c059df2((*(signed char *)((v0_0 + 0x1))), 0x5B);
    L_C06908E:;
    (((struct o22_ushort *)(v0_0))->v) = (((int)((int)(nlRand()) % (int)v0_2)) + 0x28);
    L_C0690A2:;
    v0_5 = (0x22);
    if ((((((struct o22_short *)(v0_0))->v)) != 0)) goto L_C0690AE;
    goto L_C069382;
    L_C0690AE:;
    v0_1 = *(short *)((v0_0 + v0_5));
    *(unsigned short *)((v0_0 + v0_5)) = (v0_1 - 1);
    if (((int)(short)(v0_1 - 1) <= 0)) goto L_C0690BE;
    goto L_C069382;
    L_C0690BE:;
    FUN_0c059df2((*(signed char *)((v0_0 + 0x1))), 0x5B);
    (((struct o22_ushort *)(v0_0))->v) = (((int)((int)(nlRand()) % (int)v0_2)) + 0x28);
    goto L_C069382;
    L_C068FCA:;
    if (((int)v0_4 < (int)R5)) goto L_C069044;
    *(unsigned int *)((v0_0 + 0x38)) = ((*(int *)((v0_0 + 0x38))) + R5);
    if (((unsigned short)((((struct o3818_short *)(v0_0))->v)) == 0x311)) goto L_C0690A2;
    *(int *)((int)stk + 8) = 0x11;
    *(int *)((int)stk + 4) = 0x3;
    *(int *)((int)stk + 0) = 0xFFFFFFFF;
    *(unsigned int *)(((int)stk + 8)) = 0x11;
    *(unsigned int *)(((int)stk + 4)) = 0x3;
    *(unsigned int *)(((int)stk + 0)) = 0xFFFFFFFF;
    v0_1 = (0xFFFFFFFF);
    R6 = (0x3);
    R7 = (0x11);
    goto L_C068FF0;
    L_C069044:;
    v0_1 = (int)((unsigned int)((int)((unsigned int)v0_4 + (unsigned int)0x0)) + ((((int)0x0 > (int)v0_4)) ? 1u : 0u));
    *(unsigned int *)((v0_0 + 0x38)) = ((*(int *)((v0_0 + 0x38))) + (v0_1 >> 1));
    v0_4 = ((v0_1 >> 1));
    if (((unsigned short)((((struct o3818_short *)(v0_0))->v)) == 0x3A2)) goto L_C0690A2;
    *(int *)((int)stk + 8) = 0xA2;
    *(int *)((int)stk + 4) = 0x3;
    *(int *)((int)stk + 0) = 0xFFFFFFFF;
    FUN_0c07e79c(v0_0, 0xFFFFFFFF, 0x3, 0xA2, 0xFFFFFFFF, 0x3, 0xA2);
    v0_1 = (((struct o118_int *)(v0_0))->v);
    (((struct o98_float *)(v0_1))->v) = w0_0;
    (((struct o94_float *)(v0_1))->v) = w0_0;
    v0_1 = (((struct o11C_int *)(v0_0))->v);
    (((struct o98_float *)(v0_1))->v) = w0_0;
    (((struct o94_float *)(v0_1))->v) = w0_0;
    v0_4 = (v0_1);
    goto L_C06908E;
    L_C068CB6:;
    if ((v0_5 != 5)) goto L_C068CBE;
    if (!(((*(short *)((v0_0 + 0x1C))) == 0))) goto L_C0692A2;
    v0_3 = (FUN_0c07ebd0(v0_0)) != 0;
    if (v0_3) goto L_C06912C;
    goto L_C069382;
    L_C0692A2:;
    v0_2 = *(int *)((v0_0 + 0x38));
    v0_3 = (((struct o3850_short *)(v0_0))->v);
    v0_4 = ((unsigned short)(v0_3 - v0_2));
    if (((0x8000 & (unsigned short)(v0_3 - v0_2)) == 0)) goto L_C0692B4;
    v0_4 = ((v0_4 | v0_1));
    goto L_C0692B4;
    L_C06912C:;
    v0_3 = (*(short *)((0xC5413E8 + ((short)(*(signed char *)((v0_0 + 0x1))) * (short)0x2F8))));
    *(int *)((int)stk + 8) = v0_3;
    (((struct o3850_uint *)(v0_0))->v) = (unsigned short)((FUN_0c07eaf4(v0_0, R5, R6)) + v0_3);
    v0_3 = *(int *)((v0_0 + 0x38));
    v0_5 = (((struct o3850_short *)(v0_0))->v);
    v0_4 = ((unsigned short)(v0_5 - v0_3));
    R5 = (0x38E);
    if (((0x8000 & (unsigned short)(v0_5 - v0_3)) == 0)) goto L_C069160;
    v0_4 = ((v0_4 | v0_1));
    L_C069160:;
    if (((int)v0_4 > (int)0xFFFFFC72)) goto L_C06918A;
    *(unsigned int *)((v0_0 + 0x38)) = ((*(int *)((v0_0 + 0x38))) - R5);
    if (((unsigned short)((((struct o3818_short *)(v0_0))->v)) == 0x3C1)) goto L_C069262;
    *(int *)((int)stk + 8) = 0xC1;
    *(int *)((int)stk + 4) = 0x3;
    *(int *)((int)stk + 0) = 0xFFFFFFFF;
    *(unsigned int *)(((int)stk + 8)) = 0xC1;
    *(unsigned int *)(((int)stk + 4)) = 0x3;
    *(unsigned int *)(((int)stk + 0)) = 0xFFFFFFFF;
    v0_1 = (0xFFFFFFFF);
    R6 = (0x3);
    R7 = (0xC1);
    L_C0691B0:;
    FUN_0c07e79c(v0_0, v0_1, R6, R7, *(int *)((int)stk + 0), *(int *)((int)stk + 4), *(int *)((int)stk + 8));
    v0_1 = (((struct o118_int *)(v0_0))->v);
    (((struct o98_float *)(v0_1))->v) = w0_0;
    (((struct o94_float *)(v0_1))->v) = w0_0;
    v0_1 = (((struct o11C_int *)(v0_0))->v);
    (((struct o98_float *)(v0_1))->v) = w0_0;
    (((struct o94_float *)(v0_1))->v) = w0_0;
    FUN_0c059df2((*(signed char *)((v0_0 + 0x1))), 0x64);
    L_C06924E:;
    (((struct o22_ushort *)(v0_0))->v) = (((int)((int)(nlRand()) % (int)v0_2)) + 0x28);
    L_C069262:;
    v0_5 = (0x22);
    if ((((((struct o22_short *)(v0_0))->v)) != 0)) goto L_C06926E;
    goto L_C069382;
    L_C06926E:;
    v0_1 = *(short *)((v0_0 + v0_5));
    *(unsigned short *)((v0_0 + v0_5)) = (v0_1 - 1);
    if (((int)(short)(v0_1 - 1) <= 0)) goto L_C06927E;
    goto L_C069382;
    L_C06927E:;
    FUN_0c059df2((*(signed char *)((v0_0 + 0x1))), 0x64);
    (((struct o22_ushort *)(v0_0))->v) = (((int)((int)(nlRand()) % (int)v0_2)) + 0x28);
    goto L_C069382;
    L_C06918A:;
    if (((int)v0_4 < (int)R5)) goto L_C069204;
    *(unsigned int *)((v0_0 + 0x38)) = ((*(int *)((v0_0 + 0x38))) + R5);
    if (((unsigned short)((((struct o3818_short *)(v0_0))->v)) == 0x3C2)) goto L_C069262;
    *(int *)((int)stk + 8) = 0xC2;
    *(int *)((int)stk + 4) = 0x3;
    *(int *)((int)stk + 0) = 0xFFFFFFFF;
    *(unsigned int *)(((int)stk + 8)) = 0xC2;
    *(unsigned int *)(((int)stk + 4)) = 0x3;
    *(unsigned int *)(((int)stk + 0)) = 0xFFFFFFFF;
    v0_1 = (0xFFFFFFFF);
    R6 = (0x3);
    R7 = (0xC2);
    goto L_C0691B0;
    L_C069204:;
    v0_1 = (int)((unsigned int)((int)((unsigned int)v0_4 + (unsigned int)0x0)) + ((((int)0x0 > (int)v0_4)) ? 1u : 0u));
    *(unsigned int *)((v0_0 + 0x38)) = ((*(int *)((v0_0 + 0x38))) + (v0_1 >> 1));
    v0_4 = ((v0_1 >> 1));
    if (((unsigned short)((((struct o3818_short *)(v0_0))->v)) == 0x3BF)) goto L_C069262;
    *(int *)((int)stk + 8) = 0xBF;
    *(int *)((int)stk + 4) = 0x3;
    *(int *)((int)stk + 0) = 0xFFFFFFFF;
    FUN_0c07e79c(v0_0, 0xFFFFFFFF, 0x3, 0xBF, 0xFFFFFFFF, 0x3, 0xBF);
    v0_1 = (((struct o118_int *)(v0_0))->v);
    (((struct o98_float *)(v0_1))->v) = w0_0;
    (((struct o94_float *)(v0_1))->v) = w0_0;
    v0_1 = (((struct o11C_int *)(v0_0))->v);
    (((struct o98_float *)(v0_1))->v) = w0_0;
    (((struct o94_float *)(v0_1))->v) = w0_0;
    v0_4 = (v0_1);
    goto L_C06924E;
    L_C068CBE:;
    if ((v0_5 != 6)) goto L_C068CC6;
    if (((*(short *)((v0_0 + 0x1C))) == 0)) goto L_C0692E6;
    goto L_C0692A2;
    L_C0692E6:;
    v0_2 = (FUN_0c07ebd0(v0_0)) == 0;
    if (v0_2) goto L_C069382;
    v0_2 = (*(short *)((0xC5413E8 + ((short)(*(signed char *)((v0_0 + 0x1))) * (short)0x2F8))));
    *(int *)((int)stk + 8) = v0_2;
    (((struct o3850_uint *)(v0_0))->v) = (unsigned short)((FUN_0c07eaf4(v0_0, R5, R6)) + v0_2);
    v0_2 = *(int *)((v0_0 + 0x38));
    v0_3 = (((struct o3850_short *)(v0_0))->v);
    v0_4 = ((unsigned short)(v0_3 - v0_2));
    R5 = (0x38E);
    if (((0x8000 & (unsigned short)(v0_3 - v0_2)) == 0)) goto L_C069324;
    v0_4 = ((v0_4 | v0_1));
    L_C069324:;
    if (((int)v0_4 > (int)0xFFFFFC72)) goto L_C069368;
    *(unsigned int *)((v0_0 + 0x38)) = ((*(int *)((v0_0 + 0x38))) - R5);
    goto L_C069382;
    L_C069368:;
    if (((int)v0_4 < (int)R5)) goto L_C069374;
    *(unsigned int *)((v0_0 + 0x38)) = ((*(int *)((v0_0 + 0x38))) + R5);
    goto L_C069382;
    L_C069374:;
    *(unsigned int *)((v0_0 + 0x38)) = ((*(int *)((v0_0 + 0x38))) + (((int)((unsigned int)((int)((unsigned int)v0_4 + (unsigned int)0x0)) + ((((int)0x0 > (int)v0_4)) ? 1u : 0u))) >> 1));
    goto L_C069382;
    L_C068CC6:;
    if (((*(short *)((v0_0 + 0x1C))) == 0)) goto L_C068D58;
    v0_2 = *(int *)((v0_0 + 0x38));
    v0_3 = (((struct o3850_short *)(v0_0))->v);
    v0_5 = ((*(short *)((v0_0 + 0x1C))));
    v0_4 = ((unsigned short)(v0_3 - v0_2));
    if (((0x8000 & (unsigned short)(v0_3 - v0_2)) == 0)) goto L_C068CE0;
    v0_4 = ((v0_4 | v0_1));
    L_C068CE0:;
    *(unsigned int *)((v0_0 + 0x38)) = (((int)((int)v0_4 / (int)v0_5)) + (*(int *)((v0_0 + 0x38))));
    (((struct o4C_float *)(v0_0))->v) = ((math_sin_angle16(((((struct o3850_int *)(v0_0))->v)))) * w0_1);
    w0_0 = math_cos_angle16(((((struct o3850_int *)(v0_0))->v)));
    (((struct o54_float *)(v0_0))->v) = (w0_0 * w0_1);
    v0_1 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_1 - 1);
    v0_5 = ((short)(v0_1 - 1));
    w0_0 = ((w0_0 * w0_1));
    if (((short)(v0_1 - 1) == 0)) goto L_C068D18;
    goto L_C06939E;
    L_C068D18:;
    return FUN_0c07e868(v0_0, 0x2, R6, R7);
    L_C068D58:;
    v0_2 = (FUN_0c07ebd0(v0_0)) != 0;
    if (v0_2) goto L_C068D66;
    goto L_C069382;
    L_C068D66:;
    v0_2 = (*(short *)((0xC5413E8 + ((short)(*(signed char *)((v0_0 + 0x1))) * (short)0x2F8))));
    *(int *)((int)stk + 8) = v0_2;
    (((struct o3850_uint *)(v0_0))->v) = (unsigned short)((FUN_0c07eaf4(v0_0, R5, R6)) + v0_2);
    v0_4 = (0xE38);
    if (((*(signed char *)((v0_0 + 0x2))) != 11)) goto L_C068DA0;
    if (((*(signed char *)((v0_0 + 0x3721))) != 0)) goto L_C068DA0;
    if (((*(signed char *)((v0_0 + 0x371C))) == 0)) goto L_C068DA0;
    v0_4 = (0x38E);
    L_C068DA0:;
    v0_2 = *(int *)((v0_0 + 0x38));
    v0_5 = (((struct o3850_short *)(v0_0))->v);
    v0_6 = ((-v0_4));
    R5 = ((unsigned short)(v0_5 - v0_2));
    if (((0x8000 & (unsigned short)(v0_5 - v0_2)) == 0)) goto L_C068DB4;
    R5 = ((R5 | v0_1));
    L_C068DB4:;
    if (((int)R5 > (int)v0_6)) goto L_C068E44;
    *(unsigned int *)((v0_0 + 0x38)) = ((*(int *)((v0_0 + 0x38))) - v0_4);
    if (((*(signed char *)((v0_0 + 0x2))) == 11)) goto L_C068DC8;
    goto L_C069382;
    L_C068DC8:;
    if (((unsigned short)((((struct o3818_short *)(v0_0))->v)) != 25)) goto L_C068DD6;
    goto L_C069382;
    L_C068DD6:;
    if (((*(signed char *)((v0_0 + 0x3721))) == 0)) goto L_C068DE2;
    goto L_C069382;
    L_C068DE2:;
    if (((*(signed char *)((v0_0 + 0x371C))) != 0)) goto L_C068DEE;
    goto L_C069382;
    L_C068DEE:;
    *(int *)((int)stk + 8) = 0x19;
    v0_1 = v0_3;
    *(int *)((int)stk + 4) = v0_1;
    v0_2 = *(signed char *)((v0_0 + 0x1));
    *(unsigned int *)(((int)stk + 12)) = v0_2;
    v0_3 = v0_2;
    *(int *)((int)stk + 0) = v0_3;
    FUN_0c07e79c(v0_0, v0_2, 0x0, 0x19, v0_3, v0_1, 0x19);
    v0_1 = (((struct o118_int *)(v0_0))->v);
    (((struct o98_float *)(v0_1))->v) = w0_0;
    (((struct o94_float *)(v0_1))->v) = w0_0;
    v0_1 = (((struct o11C_int *)(v0_0))->v);
    (((struct o98_float *)(v0_1))->v) = w0_0;
    (((struct o94_float *)(v0_1))->v) = w0_0;
    goto L_C069382;
    L_C068E44:;
    if (((int)R5 < (int)v0_4)) goto L_C068EB0;
    *(unsigned int *)((v0_0 + 0x38)) = ((*(int *)((v0_0 + 0x38))) + v0_4);
    if (((*(signed char *)((v0_0 + 0x2))) == 11)) goto L_C068E58;
    goto L_C069382;
    L_C068E58:;
    if (((unsigned short)((((struct o3818_short *)(v0_0))->v)) != 24)) goto L_C068E66;
    goto L_C069382;
    L_C068E66:;
    if (((*(signed char *)((v0_0 + 0x3721))) == 0)) goto L_C068E72;
    goto L_C069382;
    L_C068E72:;
    if (((*(signed char *)((v0_0 + 0x371C))) != 0)) goto L_C068E7E;
    goto L_C069382;
    L_C068E7E:;
    *(int *)((int)stk + 8) = 0x18;
    v0_1 = v0_3;
    *(int *)((int)stk + 4) = v0_1;
    v0_2 = *(signed char *)((v0_0 + 0x1));
    *(unsigned int *)(((int)stk + 12)) = v0_2;
    v0_3 = v0_2;
    *(int *)((int)stk + 0) = v0_3;
    FUN_0c07e79c(v0_0, v0_2, 0x0, 0x18, v0_3, v0_1, 0x18);
    v0_1 = (((struct o118_int *)(v0_0))->v);
    (((struct o98_float *)(v0_1))->v) = w0_0;
    (((struct o94_float *)(v0_1))->v) = w0_0;
    v0_1 = (((struct o11C_int *)(v0_0))->v);
    (((struct o98_float *)(v0_1))->v) = w0_0;
    (((struct o94_float *)(v0_1))->v) = w0_0;
    goto L_C069382;
    L_C068EB0:;
    *(unsigned int *)((v0_0 + 0x38)) = ((*(int *)((v0_0 + 0x38))) + (((int)((unsigned int)((int)((unsigned int)R5 + (unsigned int)0x0)) + ((((int)0x0 > (int)R5)) ? 1u : 0u))) >> 1));
    if (((*(signed char *)((v0_0 + 0x2))) == 11)) goto L_C068EC8;
    goto L_C069382;
    L_C068EC8:;
    if (((unsigned short)((((struct o3818_short *)(v0_0))->v)) != 23)) goto L_C068ED6;
    goto L_C069382;
    L_C068ED6:;
    if (((*(signed char *)((v0_0 + 0x3721))) == 0)) goto L_C068EE2;
    goto L_C069382;
    L_C068EE2:;
    if (((*(signed char *)((v0_0 + 0x371C))) != 0)) goto L_C068EEE;
    goto L_C069382;
    L_C068EEE:;
    *(int *)((int)stk + 8) = 0x17;
    v0_1 = v0_3;
    *(int *)((int)stk + 4) = v0_1;
    v0_2 = *(signed char *)((v0_0 + 0x1));
    *(unsigned int *)(((int)stk + 12)) = v0_2;
    v0_3 = v0_2;
    *(int *)((int)stk + 0) = v0_3;
    FUN_0c07e79c(v0_0, v0_2, 0x0, 0x17, v0_3, v0_1, 0x17);
    v0_1 = (((struct o118_int *)(v0_0))->v);
    (((struct o98_float *)(v0_1))->v) = w0_0;
    (((struct o94_float *)(v0_1))->v) = w0_0;
    v0_1 = (((struct o11C_int *)(v0_0))->v);
    (((struct o98_float *)(v0_1))->v) = w0_0;
    (((struct o94_float *)(v0_1))->v) = w0_0;
    goto L_C069382;
    L_C068C7A:;
    (((struct o3717_uchar *)(v0_0))->v) = 0x5;
    (((struct o3718_uchar *)(v0_0))->v) = 0x7;
    R5 = (0x5);
    R6 = (0x7);
    goto L_C068C8A;
    L_C068B80:;
    (((struct o20_ushort *)(v0_0))->v) = 0x5;
    goto L_C068BA2;
    L_C068B88:;
    v0_4 = (FUN_0c07f18c(v0_0)) == 0;
    if (v0_4) goto L_C068BA2;
    v0_4 = FUN_0c07fea4(v0_0, 0x0, R6);
    v0_5 = (v0_4);
    if ((v0_4 == 0)) goto L_C068BA2;
    goto L_C06939E;
}

int FUN_0c018fd8(int a4)
{
    int stk[32];
    register int t0;
    register int t1;
    register float t4;
    register float u6;
    register int t9;
    register float t26;
    register float u28;
    register int t31;
    register float u55;
    register int t58;
    int t72;
    register int t88;
    register int t96;
    register int t97;
    register int t99;
    register int t105;
    register int t109;
    register int t126;
    register int t127;
    register int t129;
    register int t135;
    register int t139;
    register int t156;
    register int t157;
    register int t159;
    register int t165;
    register int t169;
    register int t186;
    register int t187;
    register int t189;
    register int t195;
    register int t199;
    register int t212;
    register int t215;
    register int t218;
    register int t221;
    register int t224;
    register int t228;
    register int t283;
    register int t285;
    register int t288;
    register int t325;
    register int t378;
    register int t697;
    register float u390;
    register int t393;
    int t407;
    register int t423;
    register int t431;
    register int t432;
    register int t434;
    register int t440;
    register int t444;
    register int t461;
    register int t462;
    register int t464;
    register int t470;
    register int t474;
    register int t491;
    register int t492;
    register int t494;
    register int t500;
    register int t504;
    register int t521;
    register int t522;
    register int t524;
    register int t530;
    register int t534;
    register int t547;
    register int t550;
    register int t553;
    register int t556;
    register int t559;
    register int t563;
    register int t618;
    register int t620;
    register int t623;
    register int t660;
    register int t726;
    register int t1063;
    register int t731;
    register int t1050;
    register float u743;
    register int t746;
    int t760;
    register int t776;
    register int t784;
    register int t785;
    register int t787;
    register int t793;
    register int t797;
    register int t814;
    register int t815;
    register int t817;
    register int t823;
    register int t827;
    register int t844;
    register int t845;
    register int t847;
    register int t853;
    register int t857;
    register int t874;
    register int t875;
    register int t877;
    register int t883;
    register int t887;
    register int t900;
    register int t903;
    register int t906;
    register int t909;
    register int t912;
    register int t916;
    register int t971;
    register int t973;
    register int t976;
    register int t1013;
    register int t1094;
    register int t1431;
    register int t1099;
    register int t1418;
    register float u1111;
    register int t1114;
    int t1128;
    register int t1144;
    register int t1152;
    register int t1153;
    register int t1155;
    register int t1161;
    register int t1165;
    register int t1182;
    register int t1183;
    register int t1185;
    register int t1191;
    register int t1195;
    register int t1212;
    register int t1213;
    register int t1215;
    register int t1221;
    register int t1225;
    register int t1242;
    register int t1243;
    register int t1245;
    register int t1251;
    register int t1255;
    register int t1268;
    register int t1271;
    register int t1274;
    register int t1277;
    register int t1280;
    register int t1284;
    register int t1339;
    register int t1341;
    register int t1344;
    register int t1381;
    register int t1444;
    register int t1076;
    register int t710;
    register int t362;
    register int t293;
    register float u294;
    register int t628;
    register float u629;
    register int t981;
    register float u982;
    register int t1349;
    register float u1350;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    t362 = t0;
                    if (t0 == 4) {
                        t1 = *(signed char *)((a4 + 0x15));
                        if (t1 != 0) {
                            t362 = t1;
                            if (t1 != 1) {
                            } else {
                                *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
                                t4 = math_cos_angle16(((short)(*(short *)((a4 + 0x1C))) * (short)0x555));
                                u6 = 1.0f;
                                u6 = u6 + (*(float *)0xC01971C) * t4;
                                (((struct o40_float *)(a4))->v) = u6;
                                (((struct o44_float *)(a4))->v) = ((-(math_cos_angle16(((short)(*(short *)((a4 + 0x1C))) * (short)0x555)))) + 1.0f);
                                t9 = *(short *)((a4 + 0x1C));
                                t362 = t9;
                                if (t9 == 0) {
                                    (((struct oA8_uchar *)(a4))->v) = 0x0;
                                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                                    if ((*(signed char *)0xC30503C) != -1) {
                                        *(unsigned char *)0xC30EFA2 = 0x0;
                                    }
                                    t362 = (thunk_FUN_0c03f346(a4));
                                }
                            }
                        } else {
                            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                            (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) & 0xFBFF);
                            (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x10);
                            (((struct o44_float *)(a4))->v) = 1.0f;
                            (((struct o40_float *)(a4))->v) = 1.0f;
                            *(unsigned short *)((a4 + 0x1C)) = 0xC;
                            *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
                            t26 = math_cos_angle16(((short)(*(short *)((a4 + 0x1C))) * (short)0x555));
                            u28 = 1.0f;
                            u28 = u28 + (*(float *)0xC01971C) * t26;
                            (((struct o40_float *)(a4))->v) = u28;
                            (((struct o44_float *)(a4))->v) = ((-(math_cos_angle16(((short)(*(short *)((a4 + 0x1C))) * (short)0x555)))) + 1.0f);
                            t31 = *(short *)((a4 + 0x1C));
                            t362 = t31;
                            if (t31 == 0) {
                                (((struct oA8_uchar *)(a4))->v) = 0x0;
                                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                                if ((*(signed char *)0xC30503C) != -1) {
                                    *(unsigned char *)0xC30EFA2 = 0x0;
                                }
                                t362 = (thunk_FUN_0c03f346(a4));
                            }
                        }
                    }
                } else {
                    if ((*(signed char *)0xC30503C) == (*(signed char *)((a4 + 0x3)))) {
                        (((struct o14_uchar *)(a4))->v) = 0x4;
                        (((struct o15_uchar *)(a4))->v) = 0x0;
                    }
                    *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
                    u55 = 0.899999976f;
                    u55 = u55 + 0.0500000007f * (math_sin_angle16((((*(short *)((a4 + 0x1C))) << 8) << 2)));
                    (((struct oB0_float *)(a4))->v) = u55;
                    t58 = (*(int *)((((*(signed char *)((a4 + 0x3))) << 2) + 0xC20DDFC)));
                    for (;;) {
                        if ((*(short *)((t58 + 0x10))) != 0) {
                            break;
                        }
                        FUN_0c02b502((unsigned short)(*(short *)((t58 + 0x0))));
                        FUN_0c02b3ba((*(int *)((t58 + 0xC))), ((((struct o4_float *)(t58))->v)), ((((struct o8_float *)(t58))->v)), (1.0f + 1.0f));
                        t58 = (t58 + 0x14);
                    }
                    FUN_0c02b502((unsigned short)(*(short *)((t58 + 0x0))));
                    FUN_0c02b3ba((*(int *)((t58 + 0xC))), ((((struct o4_float *)(t58))->v)), ((((struct o8_float *)(t58))->v)), (1.0f + 1.0f));
                    *(unsigned int *)(((int)stk + 0)) = (((int)stk + 0) + 0x30);
                    t72 = *(signed char *)((a4 + 0x3));
                    if (t72 != 23) {
                        if (t72 != 24) {
                            if ((t72 != 26) && (t72 != 67)) {
                                if (t72 != 55) {
                                    if (t72 == 60) {
                                        t88 = *(int *)((a4 + 0x10));
                                        FUN_0c02b342(t88, (*(int *)(((int)stk + 0))));
                                        FUN_0c02b502((unsigned short)(*(short *)(((t58 + 0x14) + 0x0))));
                                        FUN_0c02b3ba((*(int *)(((int)stk + 0))), (((((struct o4_float *)((t58 + 0x14)))->v)) + 168.0f), ((((struct o8_float *)((t58 + 0x14)))->v)), (1.0f + 1.0f));
                                        t96 = strlen((t88 + 0x8));
                                        t97 = ((~(((~(unsigned char)t96) + 0x1) & 0x1)) + 0x1);
                                        if ((int)(unsigned char)t96 >= 0) {
                                            t97 = ((unsigned char)t96 & 0x1);
                                        }
                                        t99 = t96;
                                        if (t97 != 0) {
                                            t99 = (t96 + 0x1);
                                        }
                                        FUN_0c02b502(0x3);
                                        t105 = (int)((unsigned int)((int)((unsigned int)(((((unsigned char)t99 << 1) + (unsigned char)t99) << 2) << 1) + (unsigned int)0x0)) + ((((int)0x0 > (int)(((((unsigned char)t99 << 1) + (unsigned char)t99) << 2) << 1))) ? 1u : 0u));
                                        t109 = (int)((unsigned int)((int)((unsigned int)(t105 >> 1) + (unsigned int)0x0)) + ((((int)0x0 > (int)(t105 >> 1))) ? 1u : 0u));
                                        FUN_0c02b3ba((t88 + 0x8), ((float)(0x140 - (t109 >> 1)) + -24.0f), 180.0f, (1.0f + 1.0f));
                                        FUN_0c02b502(0x7);
                                        t362 = (FUN_0c02b3ba(0xC1A7590, ((float)(((((((unsigned int)(unsigned char)t99 >> 1) - 1) << 1) + (((unsigned int)(unsigned char)t99 >> 1) - 1)) << 2) << 1) + (float)(0x140 - (t109 >> 1))), 180.0f, (1.0f + 1.0f)));
                                    } else {
                                        if (t72 == 32) {
                                            FUN_0c02b342(0xC30A34C, (*(int *)(((int)stk + 0))));
                                            FUN_0c02b502((unsigned short)(*(short *)(((t58 + 0x14) + 0x0))));
                                            FUN_0c02b3ba((*(int *)(((int)stk + 0))), (((((struct o4_float *)((t58 + 0x14)))->v)) + 168.0f), ((((struct o8_float *)((t58 + 0x14)))->v)), (1.0f + 1.0f));
                                            t126 = strlen(0xC30A354);
                                            t127 = ((~(((~(unsigned char)t126) + 0x1) & 0x1)) + 0x1);
                                            if ((int)(unsigned char)t126 >= 0) {
                                                t127 = ((unsigned char)t126 & 0x1);
                                            }
                                            t129 = t126;
                                            if (t127 != 0) {
                                                t129 = (t126 + 0x1);
                                            }
                                            FUN_0c02b502(0x3);
                                            t135 = (int)((unsigned int)((int)((unsigned int)(((((unsigned char)t129 << 1) + (unsigned char)t129) << 2) << 1) + (unsigned int)0x0)) + ((((int)0x0 > (int)(((((unsigned char)t129 << 1) + (unsigned char)t129) << 2) << 1))) ? 1u : 0u));
                                            t139 = (int)((unsigned int)((int)((unsigned int)(t135 >> 1) + (unsigned int)0x0)) + ((((int)0x0 > (int)(t135 >> 1))) ? 1u : 0u));
                                            FUN_0c02b3ba(0xC30A354, ((float)(0x140 - (t139 >> 1)) + -24.0f), 180.0f, (1.0f + 1.0f));
                                            FUN_0c02b502(0x7);
                                            t362 = (FUN_0c02b3ba(0xC1A7590, ((float)(((((((unsigned int)(unsigned char)t129 >> 1) - 1) << 1) + (((unsigned int)(unsigned char)t129 >> 1) - 1)) << 2) << 1) + (float)(0x140 - (t139 >> 1))), 180.0f, (1.0f + 1.0f)));
                                        } else {
                                            if (t72 == 22) {
                                                FUN_0c02b342(0xC30A34C, (*(int *)(((int)stk + 0))));
                                                FUN_0c02b502((unsigned short)(*(short *)(((t58 + 0x14) + 0x0))));
                                                FUN_0c02b3ba((*(int *)(((int)stk + 0))), (((((struct o4_float *)((t58 + 0x14)))->v)) + 168.0f), ((((struct o8_float *)((t58 + 0x14)))->v)), (1.0f + 1.0f));
                                                t156 = strlen(0xC30A354);
                                                t157 = ((~(((~(unsigned char)t156) + 0x1) & 0x1)) + 0x1);
                                                if ((int)(unsigned char)t156 >= 0) {
                                                    t157 = ((unsigned char)t156 & 0x1);
                                                }
                                                t159 = t156;
                                                if (t157 != 0) {
                                                    t159 = (t156 + 0x1);
                                                }
                                                FUN_0c02b502(0x3);
                                                t165 = (int)((unsigned int)((int)((unsigned int)(((((unsigned char)t159 << 1) + (unsigned char)t159) << 2) << 1) + (unsigned int)0x0)) + ((((int)0x0 > (int)(((((unsigned char)t159 << 1) + (unsigned char)t159) << 2) << 1))) ? 1u : 0u));
                                                t169 = (int)((unsigned int)((int)((unsigned int)(t165 >> 1) + (unsigned int)0x0)) + ((((int)0x0 > (int)(t165 >> 1))) ? 1u : 0u));
                                                FUN_0c02b3ba(0xC30A354, ((float)(0x140 - (t169 >> 1)) + -24.0f), 180.0f, (1.0f + 1.0f));
                                                FUN_0c02b502(0x7);
                                                t362 = (FUN_0c02b3ba(0xC1A7590, ((float)(((((((unsigned int)(unsigned char)t159 >> 1) - 1) << 1) + (((unsigned int)(unsigned char)t159 >> 1) - 1)) << 2) << 1) + (float)(0x140 - (t169 >> 1))), 180.0f, (1.0f + 1.0f)));
                                            } else {
                                                if (t72 == 21) {
                                                    FUN_0c02b342(0xC30A34C, (*(int *)(((int)stk + 0))));
                                                    FUN_0c02b502((unsigned short)(*(short *)(((t58 + 0x14) + 0x0))));
                                                    FUN_0c02b3ba((*(int *)(((int)stk + 0))), (((((struct o4_float *)((t58 + 0x14)))->v)) + 168.0f), ((((struct o8_float *)((t58 + 0x14)))->v)), (1.0f + 1.0f));
                                                    t186 = strlen(0xC30A354);
                                                    t187 = ((~(((~(unsigned char)t186) + 0x1) & 0x1)) + 0x1);
                                                    if ((int)(unsigned char)t186 >= 0) {
                                                        t187 = ((unsigned char)t186 & 0x1);
                                                    }
                                                    t189 = t186;
                                                    if (t187 != 0) {
                                                        t189 = (t186 + 0x1);
                                                    }
                                                    FUN_0c02b502(0x3);
                                                    t195 = (int)((unsigned int)((int)((unsigned int)(((((unsigned char)t189 << 1) + (unsigned char)t189) << 2) << 1) + (unsigned int)0x0)) + ((((int)0x0 > (int)(((((unsigned char)t189 << 1) + (unsigned char)t189) << 2) << 1))) ? 1u : 0u));
                                                    t199 = (int)((unsigned int)((int)((unsigned int)(t195 >> 1) + (unsigned int)0x0)) + ((((int)0x0 > (int)(t195 >> 1))) ? 1u : 0u));
                                                    FUN_0c02b3ba(0xC30A354, ((float)(0x140 - (t199 >> 1)) + -24.0f), (((((struct o8_float *)((t58 + 0x14)))->v)) + 72.0f), (1.0f + 1.0f));
                                                    FUN_0c02b502(0x7);
                                                    t362 = (FUN_0c02b3ba(0xC1A7590, ((float)(((((((unsigned int)(unsigned char)t189 >> 1) - 1) << 1) + (((unsigned int)(unsigned char)t189 >> 1) - 1)) << 2) << 1) + (float)(0x140 - (t199 >> 1))), (((((struct o8_float *)((t58 + 0x14)))->v)) + 72.0f), (1.0f + 1.0f)));
                                                } else {
                                                    if (t72 == 70) {
                                                        FUN_0c02b502(0x3);
                                                        t212 = 0xC1A75A0;
                                                        if ((*(signed char *)((a4 + 0x18))) == 0) {
                                                            t212 = 0xC1A7598;
                                                        }
                                                        FUN_0c02b3ba(t212, 416.0f, 204.0f, (1.0f + 1.0f));
                                                        t215 = *(signed char *)((a4 + 0x19));
                                                        t218 = 0xC1A7598;
                                                        if (t215 != 0) {
                                                            t218 = 0xC1A75A0;
                                                            if (t215 != 1) {
                                                                t218 = 0xC1A75A8;
                                                            }
                                                        }
                                                        FUN_0c02b3ba(t218, 416.0f, 228.0f, (1.0f + 1.0f));
                                                        t221 = *(signed char *)((a4 + 0x1A));
                                                        t224 = 0xC1A7598;
                                                        if (t221 != 0) {
                                                            t224 = 0xC1A75B0;
                                                            if (t221 != 1) {
                                                                t224 = 0xC1A75B8;
                                                            }
                                                        }
                                                        t362 = (FUN_0c02b3ba(t224, 416.0f, 252.0f, (1.0f + 1.0f)));
                                                    } else {
                                                        t362 = t72;
                                                        if (t72 == 28) {
                                                            t228 = 0x13;
                                                            if ((*(int *)0xC5426EC) != 0) {
                                                                t228 = 0x7;
                                                            }
                                                            FUN_0c02b502(t228);
                                                            t362 = (FUN_0c02b3ba((*(int *)(((t58 + 0x14) + 0xC))), ((((struct o4_float *)((t58 + 0x14)))->v)), ((((struct o8_float *)((t58 + 0x14)))->v)), (1.0f + 1.0f)));
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    t283 = *(int *)0xC3BABB4;
                                    t285 = (0x16C + t283);
                                    if (((*(int *)((t283 + 0x0))) & 1) == 0) {
                                        t285 = (t283 + 0x8);
                                    }
                                    strcpy((((int)stk + 0) + 0x30), t285);
                                    t288 = strlen((((int)stk + 0) + 0x30));
                                    if ((int)(unsigned char)t288 <= (int)0x14) {
                                        FUN_0c02b502(0x7);
                                        t293 = (((int)stk + 0) + 0x30);
                                        u294 = 262.0f;
                                    } else {
                                        (((struct o14_uchar *)((((int)stk + 0) + 0x30)))->v) = 0x0;
                                        FUN_0c02b502(0x7);
                                        FUN_0c02b3ba((((int)stk + 0) + 0x30), 262.0f, 228.0f, (1.0f + 1.0f));
                                        t293 = 0xC1A758C;
                                        u294 = 502.0f;
                                    }
                                    t362 = (FUN_0c02b3ba(t293, u294, 228.0f, (1.0f + 1.0f)));
                                }
                            } else {
                                FUN_0c02b342(0xC30A404, (*(int *)(((int)stk + 0))));
                                FUN_0c02b502(0x3);
                                t362 = (FUN_0c02b3ba((*(int *)(((int)stk + 0))), 248.0f, 156.0f, (1.0f + 1.0f)));
                            }
                        } else {
                            strcpy((((int)stk + 0) + 0x8), 0xC3051C4);
                            *(unsigned int *)(((int)stk + 0)) = (((int)stk + 0) + 0x30);
                            FUN_0c02b342((((int)stk + 0) + 0x8), (((int)stk + 0) + 0x30));
                            *(unsigned char *)(((int)stk + 4)) = (strlen((((int)stk + 0) + 0x8)));
                            FUN_0c02b502(0x6);
                            t325 = *(signed char *)(((int)stk + 4));
                            t362 = (FUN_0c02b3ba((*(int *)(((int)stk + 0))), (float)(0x140 - (((int)((unsigned int)((int)((unsigned int)(((((unsigned char)t325 << 1) + (unsigned char)t325) << 2) << 1) + (unsigned int)0x0)) + ((((int)0x0 > (int)(((((unsigned char)t325 << 1) + (unsigned char)t325) << 2) << 1))) ? 1u : 0u))) >> 1)), 180.0f, (1.0f + 1.0f)));
                        }
                    } else {
                        FUN_0c02b342(0xC30999E, (*(int *)(((int)stk + 0))));
                        FUN_0c02b502((unsigned short)(*(short *)(((t58 + 0x14) + 0x0))));
                        t362 = (FUN_0c02b3ba((*(int *)(((int)stk + 0))), ((((struct o4_float *)((t58 + 0x14)))->v)), ((((struct o8_float *)((t58 + 0x14)))->v)), (1.0f + 1.0f)));
                    }
                }
                t710 = t362;
            } else {
                *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
                (((struct o44_float *)(a4))->v) = (math_cos_angle16((((*(short *)((a4 + 0x1C))) << 8) << 2)));
                t378 = *(short *)((a4 + 0x1C));
                t697 = t378;
                if (t378 != 0) {
                } else {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) & 0xFFEF);
                    if ((*(signed char *)0xC30503C) == (*(signed char *)((a4 + 0x3)))) {
                        (((struct o14_uchar *)(a4))->v) = 0x4;
                        (((struct o15_uchar *)(a4))->v) = 0x0;
                    }
                    *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
                    u390 = 0.899999976f;
                    u390 = u390 + 0.0500000007f * (math_sin_angle16((((*(short *)((a4 + 0x1C))) << 8) << 2)));
                    (((struct oB0_float *)(a4))->v) = u390;
                    t393 = (*(int *)((((*(signed char *)((a4 + 0x3))) << 2) + 0xC20DDFC)));
                    for (;;) {
                        if ((*(short *)((t393 + 0x10))) != 0) {
                            break;
                        }
                        FUN_0c02b502((unsigned short)(*(short *)((t393 + 0x0))));
                        FUN_0c02b3ba((*(int *)((t393 + 0xC))), ((((struct o4_float *)(t393))->v)), ((((struct o8_float *)(t393))->v)), (1.0f + 1.0f));
                        t393 = (t393 + 0x14);
                    }
                    FUN_0c02b502((unsigned short)(*(short *)((t393 + 0x0))));
                    FUN_0c02b3ba((*(int *)((t393 + 0xC))), ((((struct o4_float *)(t393))->v)), ((((struct o8_float *)(t393))->v)), (1.0f + 1.0f));
                    *(unsigned int *)(((int)stk + 0)) = (((int)stk + 0) + 0x30);
                    t407 = *(signed char *)((a4 + 0x3));
                    if (t407 != 23) {
                        if (t407 != 24) {
                            if ((t407 != 26) && (t407 != 67)) {
                                if (t407 != 55) {
                                    if (t407 == 60) {
                                        t423 = *(int *)((a4 + 0x10));
                                        FUN_0c02b342(t423, (*(int *)(((int)stk + 0))));
                                        FUN_0c02b502((unsigned short)(*(short *)(((t393 + 0x14) + 0x0))));
                                        FUN_0c02b3ba((*(int *)(((int)stk + 0))), (((((struct o4_float *)((t393 + 0x14)))->v)) + 168.0f), ((((struct o8_float *)((t393 + 0x14)))->v)), (1.0f + 1.0f));
                                        t431 = strlen((t423 + 0x8));
                                        t432 = ((~(((~(unsigned char)t431) + 0x1) & 0x1)) + 0x1);
                                        if ((int)(unsigned char)t431 >= 0) {
                                            t432 = ((unsigned char)t431 & 0x1);
                                        }
                                        t434 = t431;
                                        if (t432 != 0) {
                                            t434 = (t431 + 0x1);
                                        }
                                        FUN_0c02b502(0x3);
                                        t440 = (int)((unsigned int)((int)((unsigned int)(((((unsigned char)t434 << 1) + (unsigned char)t434) << 2) << 1) + (unsigned int)0x0)) + ((((int)0x0 > (int)(((((unsigned char)t434 << 1) + (unsigned char)t434) << 2) << 1))) ? 1u : 0u));
                                        t444 = (int)((unsigned int)((int)((unsigned int)(t440 >> 1) + (unsigned int)0x0)) + ((((int)0x0 > (int)(t440 >> 1))) ? 1u : 0u));
                                        FUN_0c02b3ba((t423 + 0x8), ((float)(0x140 - (t444 >> 1)) + -24.0f), 180.0f, (1.0f + 1.0f));
                                        FUN_0c02b502(0x7);
                                        t697 = (FUN_0c02b3ba(0xC1A7590, ((float)(((((((unsigned int)(unsigned char)t434 >> 1) - 1) << 1) + (((unsigned int)(unsigned char)t434 >> 1) - 1)) << 2) << 1) + (float)(0x140 - (t444 >> 1))), 180.0f, (1.0f + 1.0f)));
                                    } else {
                                        if (t407 == 32) {
                                            FUN_0c02b342(0xC30A34C, (*(int *)(((int)stk + 0))));
                                            FUN_0c02b502((unsigned short)(*(short *)(((t393 + 0x14) + 0x0))));
                                            FUN_0c02b3ba((*(int *)(((int)stk + 0))), (((((struct o4_float *)((t393 + 0x14)))->v)) + 168.0f), ((((struct o8_float *)((t393 + 0x14)))->v)), (1.0f + 1.0f));
                                            t461 = strlen(0xC30A354);
                                            t462 = ((~(((~(unsigned char)t461) + 0x1) & 0x1)) + 0x1);
                                            if ((int)(unsigned char)t461 >= 0) {
                                                t462 = ((unsigned char)t461 & 0x1);
                                            }
                                            t464 = t461;
                                            if (t462 != 0) {
                                                t464 = (t461 + 0x1);
                                            }
                                            FUN_0c02b502(0x3);
                                            t470 = (int)((unsigned int)((int)((unsigned int)(((((unsigned char)t464 << 1) + (unsigned char)t464) << 2) << 1) + (unsigned int)0x0)) + ((((int)0x0 > (int)(((((unsigned char)t464 << 1) + (unsigned char)t464) << 2) << 1))) ? 1u : 0u));
                                            t474 = (int)((unsigned int)((int)((unsigned int)(t470 >> 1) + (unsigned int)0x0)) + ((((int)0x0 > (int)(t470 >> 1))) ? 1u : 0u));
                                            FUN_0c02b3ba(0xC30A354, ((float)(0x140 - (t474 >> 1)) + -24.0f), 180.0f, (1.0f + 1.0f));
                                            FUN_0c02b502(0x7);
                                            t697 = (FUN_0c02b3ba(0xC1A7590, ((float)(((((((unsigned int)(unsigned char)t464 >> 1) - 1) << 1) + (((unsigned int)(unsigned char)t464 >> 1) - 1)) << 2) << 1) + (float)(0x140 - (t474 >> 1))), 180.0f, (1.0f + 1.0f)));
                                        } else {
                                            if (t407 == 22) {
                                                FUN_0c02b342(0xC30A34C, (*(int *)(((int)stk + 0))));
                                                FUN_0c02b502((unsigned short)(*(short *)(((t393 + 0x14) + 0x0))));
                                                FUN_0c02b3ba((*(int *)(((int)stk + 0))), (((((struct o4_float *)((t393 + 0x14)))->v)) + 168.0f), ((((struct o8_float *)((t393 + 0x14)))->v)), (1.0f + 1.0f));
                                                t491 = strlen(0xC30A354);
                                                t492 = ((~(((~(unsigned char)t491) + 0x1) & 0x1)) + 0x1);
                                                if ((int)(unsigned char)t491 >= 0) {
                                                    t492 = ((unsigned char)t491 & 0x1);
                                                }
                                                t494 = t491;
                                                if (t492 != 0) {
                                                    t494 = (t491 + 0x1);
                                                }
                                                FUN_0c02b502(0x3);
                                                t500 = (int)((unsigned int)((int)((unsigned int)(((((unsigned char)t494 << 1) + (unsigned char)t494) << 2) << 1) + (unsigned int)0x0)) + ((((int)0x0 > (int)(((((unsigned char)t494 << 1) + (unsigned char)t494) << 2) << 1))) ? 1u : 0u));
                                                t504 = (int)((unsigned int)((int)((unsigned int)(t500 >> 1) + (unsigned int)0x0)) + ((((int)0x0 > (int)(t500 >> 1))) ? 1u : 0u));
                                                FUN_0c02b3ba(0xC30A354, ((float)(0x140 - (t504 >> 1)) + -24.0f), 180.0f, (1.0f + 1.0f));
                                                FUN_0c02b502(0x7);
                                                t697 = (FUN_0c02b3ba(0xC1A7590, ((float)(((((((unsigned int)(unsigned char)t494 >> 1) - 1) << 1) + (((unsigned int)(unsigned char)t494 >> 1) - 1)) << 2) << 1) + (float)(0x140 - (t504 >> 1))), 180.0f, (1.0f + 1.0f)));
                                            } else {
                                                if (t407 == 21) {
                                                    FUN_0c02b342(0xC30A34C, (*(int *)(((int)stk + 0))));
                                                    FUN_0c02b502((unsigned short)(*(short *)(((t393 + 0x14) + 0x0))));
                                                    FUN_0c02b3ba((*(int *)(((int)stk + 0))), (((((struct o4_float *)((t393 + 0x14)))->v)) + 168.0f), ((((struct o8_float *)((t393 + 0x14)))->v)), (1.0f + 1.0f));
                                                    t521 = strlen(0xC30A354);
                                                    t522 = ((~(((~(unsigned char)t521) + 0x1) & 0x1)) + 0x1);
                                                    if ((int)(unsigned char)t521 >= 0) {
                                                        t522 = ((unsigned char)t521 & 0x1);
                                                    }
                                                    t524 = t521;
                                                    if (t522 != 0) {
                                                        t524 = (t521 + 0x1);
                                                    }
                                                    FUN_0c02b502(0x3);
                                                    t530 = (int)((unsigned int)((int)((unsigned int)(((((unsigned char)t524 << 1) + (unsigned char)t524) << 2) << 1) + (unsigned int)0x0)) + ((((int)0x0 > (int)(((((unsigned char)t524 << 1) + (unsigned char)t524) << 2) << 1))) ? 1u : 0u));
                                                    t534 = (int)((unsigned int)((int)((unsigned int)(t530 >> 1) + (unsigned int)0x0)) + ((((int)0x0 > (int)(t530 >> 1))) ? 1u : 0u));
                                                    FUN_0c02b3ba(0xC30A354, ((float)(0x140 - (t534 >> 1)) + -24.0f), (((((struct o8_float *)((t393 + 0x14)))->v)) + 72.0f), (1.0f + 1.0f));
                                                    FUN_0c02b502(0x7);
                                                    t697 = (FUN_0c02b3ba(0xC1A7590, ((float)(((((((unsigned int)(unsigned char)t524 >> 1) - 1) << 1) + (((unsigned int)(unsigned char)t524 >> 1) - 1)) << 2) << 1) + (float)(0x140 - (t534 >> 1))), (((((struct o8_float *)((t393 + 0x14)))->v)) + 72.0f), (1.0f + 1.0f)));
                                                } else {
                                                    if (t407 == 70) {
                                                        FUN_0c02b502(0x3);
                                                        t547 = 0xC1A75A0;
                                                        if ((*(signed char *)((a4 + 0x18))) == 0) {
                                                            t547 = 0xC1A7598;
                                                        }
                                                        FUN_0c02b3ba(t547, 416.0f, 204.0f, (1.0f + 1.0f));
                                                        t550 = *(signed char *)((a4 + 0x19));
                                                        t553 = 0xC1A7598;
                                                        if (t550 != 0) {
                                                            t553 = 0xC1A75A0;
                                                            if (t550 != 1) {
                                                                t553 = 0xC1A75A8;
                                                            }
                                                        }
                                                        FUN_0c02b3ba(t553, 416.0f, 228.0f, (1.0f + 1.0f));
                                                        t556 = *(signed char *)((a4 + 0x1A));
                                                        t559 = 0xC1A7598;
                                                        if (t556 != 0) {
                                                            t559 = 0xC1A75B0;
                                                            if (t556 != 1) {
                                                                t559 = 0xC1A75B8;
                                                            }
                                                        }
                                                        t697 = (FUN_0c02b3ba(t559, 416.0f, 252.0f, (1.0f + 1.0f)));
                                                    } else {
                                                        t697 = t407;
                                                        if (t407 == 28) {
                                                            t563 = 0x13;
                                                            if ((*(int *)0xC5426EC) != 0) {
                                                                t563 = 0x7;
                                                            }
                                                            FUN_0c02b502(t563);
                                                            t697 = (FUN_0c02b3ba((*(int *)(((t393 + 0x14) + 0xC))), ((((struct o4_float *)((t393 + 0x14)))->v)), ((((struct o8_float *)((t393 + 0x14)))->v)), (1.0f + 1.0f)));
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    t618 = *(int *)0xC3BABB4;
                                    t620 = (0x16C + t618);
                                    if (((*(int *)((t618 + 0x0))) & 1) == 0) {
                                        t620 = (t618 + 0x8);
                                    }
                                    strcpy((((int)stk + 0) + 0x30), t620);
                                    t623 = strlen((((int)stk + 0) + 0x30));
                                    if ((int)(unsigned char)t623 <= (int)0x14) {
                                        FUN_0c02b502(0x7);
                                        t628 = (((int)stk + 0) + 0x30);
                                        u629 = 262.0f;
                                    } else {
                                        (((struct o14_uchar *)((((int)stk + 0) + 0x30)))->v) = 0x0;
                                        FUN_0c02b502(0x7);
                                        FUN_0c02b3ba((((int)stk + 0) + 0x30), 262.0f, 228.0f, (1.0f + 1.0f));
                                        t628 = 0xC1A758C;
                                        u629 = 502.0f;
                                    }
                                    t697 = (FUN_0c02b3ba(t628, u629, 228.0f, (1.0f + 1.0f)));
                                }
                            } else {
                                FUN_0c02b342(0xC30A404, (*(int *)(((int)stk + 0))));
                                FUN_0c02b502(0x3);
                                t697 = (FUN_0c02b3ba((*(int *)(((int)stk + 0))), 248.0f, 156.0f, (1.0f + 1.0f)));
                            }
                        } else {
                            strcpy((((int)stk + 0) + 0x8), 0xC3051C4);
                            *(unsigned int *)(((int)stk + 0)) = (((int)stk + 0) + 0x30);
                            FUN_0c02b342((((int)stk + 0) + 0x8), (((int)stk + 0) + 0x30));
                            *(unsigned char *)(((int)stk + 4)) = (strlen((((int)stk + 0) + 0x8)));
                            FUN_0c02b502(0x6);
                            t660 = *(signed char *)(((int)stk + 4));
                            t697 = (FUN_0c02b3ba((*(int *)(((int)stk + 0))), (float)(0x140 - (((int)((unsigned int)((int)((unsigned int)(((((unsigned char)t660 << 1) + (unsigned char)t660) << 2) << 1) + (unsigned int)0x0)) + ((((int)0x0 > (int)(((((unsigned char)t660 << 1) + (unsigned char)t660) << 2) << 1))) ? 1u : 0u))) >> 1)), 180.0f, (1.0f + 1.0f)));
                        }
                    } else {
                        FUN_0c02b342(0xC30999E, (*(int *)(((int)stk + 0))));
                        FUN_0c02b502((unsigned short)(*(short *)(((t393 + 0x14) + 0x0))));
                        t697 = (FUN_0c02b3ba((*(int *)(((int)stk + 0))), ((((struct o4_float *)((t393 + 0x14)))->v)), ((((struct o8_float *)((t393 + 0x14)))->v)), (1.0f + 1.0f)));
                    }
                }
                t710 = t697;
            }
            t1076 = t710;
        } else {
            *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
            (((struct o40_float *)(a4))->v) = (math_cos_angle16((((*(short *)((a4 + 0x1C))) << 8) << 2)));
            t726 = *(short *)((a4 + 0x1C));
            t1063 = t726;
            if (t726 != 0) {
            } else {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                *(unsigned short *)((a4 + 0x1C)) = 0x10;
                *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
                (((struct o44_float *)(a4))->v) = (math_cos_angle16((((*(short *)((a4 + 0x1C))) << 8) << 2)));
                t731 = *(short *)((a4 + 0x1C));
                t1050 = t731;
                if (t731 != 0) {
                } else {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) & 0xFFEF);
                    if ((*(signed char *)0xC30503C) == (*(signed char *)((a4 + 0x3)))) {
                        (((struct o14_uchar *)(a4))->v) = 0x4;
                        (((struct o15_uchar *)(a4))->v) = 0x0;
                    }
                    *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
                    u743 = 0.899999976f;
                    u743 = u743 + 0.0500000007f * (math_sin_angle16((((*(short *)((a4 + 0x1C))) << 8) << 2)));
                    (((struct oB0_float *)(a4))->v) = u743;
                    t746 = (*(int *)((((*(signed char *)((a4 + 0x3))) << 2) + 0xC20DDFC)));
                    for (;;) {
                        if ((*(short *)((t746 + 0x10))) != 0) {
                            break;
                        }
                        FUN_0c02b502((unsigned short)(*(short *)((t746 + 0x0))));
                        FUN_0c02b3ba((*(int *)((t746 + 0xC))), ((((struct o4_float *)(t746))->v)), ((((struct o8_float *)(t746))->v)), (1.0f + 1.0f));
                        t746 = (t746 + 0x14);
                    }
                    FUN_0c02b502((unsigned short)(*(short *)((t746 + 0x0))));
                    FUN_0c02b3ba((*(int *)((t746 + 0xC))), ((((struct o4_float *)(t746))->v)), ((((struct o8_float *)(t746))->v)), (1.0f + 1.0f));
                    *(unsigned int *)(((int)stk + 0)) = (((int)stk + 0) + 0x30);
                    t760 = *(signed char *)((a4 + 0x3));
                    if (t760 != 23) {
                        if (t760 != 24) {
                            if ((t760 != 26) && (t760 != 67)) {
                                if (t760 != 55) {
                                    if (t760 == 60) {
                                        t776 = *(int *)((a4 + 0x10));
                                        FUN_0c02b342(t776, (*(int *)(((int)stk + 0))));
                                        FUN_0c02b502((unsigned short)(*(short *)(((t746 + 0x14) + 0x0))));
                                        FUN_0c02b3ba((*(int *)(((int)stk + 0))), (((((struct o4_float *)((t746 + 0x14)))->v)) + 168.0f), ((((struct o8_float *)((t746 + 0x14)))->v)), (1.0f + 1.0f));
                                        t784 = strlen((t776 + 0x8));
                                        t785 = ((~(((~(unsigned char)t784) + 0x1) & 0x1)) + 0x1);
                                        if ((int)(unsigned char)t784 >= 0) {
                                            t785 = ((unsigned char)t784 & 0x1);
                                        }
                                        t787 = t784;
                                        if (t785 != 0) {
                                            t787 = (t784 + 0x1);
                                        }
                                        FUN_0c02b502(0x3);
                                        t793 = (int)((unsigned int)((int)((unsigned int)(((((unsigned char)t787 << 1) + (unsigned char)t787) << 2) << 1) + (unsigned int)0x0)) + ((((int)0x0 > (int)(((((unsigned char)t787 << 1) + (unsigned char)t787) << 2) << 1))) ? 1u : 0u));
                                        t797 = (int)((unsigned int)((int)((unsigned int)(t793 >> 1) + (unsigned int)0x0)) + ((((int)0x0 > (int)(t793 >> 1))) ? 1u : 0u));
                                        FUN_0c02b3ba((t776 + 0x8), ((float)(0x140 - (t797 >> 1)) + -24.0f), 180.0f, (1.0f + 1.0f));
                                        FUN_0c02b502(0x7);
                                        t1050 = (FUN_0c02b3ba(0xC1A7590, ((float)(((((((unsigned int)(unsigned char)t787 >> 1) - 1) << 1) + (((unsigned int)(unsigned char)t787 >> 1) - 1)) << 2) << 1) + (float)(0x140 - (t797 >> 1))), 180.0f, (1.0f + 1.0f)));
                                    } else {
                                        if (t760 == 32) {
                                            FUN_0c02b342(0xC30A34C, (*(int *)(((int)stk + 0))));
                                            FUN_0c02b502((unsigned short)(*(short *)(((t746 + 0x14) + 0x0))));
                                            FUN_0c02b3ba((*(int *)(((int)stk + 0))), (((((struct o4_float *)((t746 + 0x14)))->v)) + 168.0f), ((((struct o8_float *)((t746 + 0x14)))->v)), (1.0f + 1.0f));
                                            t814 = strlen(0xC30A354);
                                            t815 = ((~(((~(unsigned char)t814) + 0x1) & 0x1)) + 0x1);
                                            if ((int)(unsigned char)t814 >= 0) {
                                                t815 = ((unsigned char)t814 & 0x1);
                                            }
                                            t817 = t814;
                                            if (t815 != 0) {
                                                t817 = (t814 + 0x1);
                                            }
                                            FUN_0c02b502(0x3);
                                            t823 = (int)((unsigned int)((int)((unsigned int)(((((unsigned char)t817 << 1) + (unsigned char)t817) << 2) << 1) + (unsigned int)0x0)) + ((((int)0x0 > (int)(((((unsigned char)t817 << 1) + (unsigned char)t817) << 2) << 1))) ? 1u : 0u));
                                            t827 = (int)((unsigned int)((int)((unsigned int)(t823 >> 1) + (unsigned int)0x0)) + ((((int)0x0 > (int)(t823 >> 1))) ? 1u : 0u));
                                            FUN_0c02b3ba(0xC30A354, ((float)(0x140 - (t827 >> 1)) + -24.0f), 180.0f, (1.0f + 1.0f));
                                            FUN_0c02b502(0x7);
                                            t1050 = (FUN_0c02b3ba(0xC1A7590, ((float)(((((((unsigned int)(unsigned char)t817 >> 1) - 1) << 1) + (((unsigned int)(unsigned char)t817 >> 1) - 1)) << 2) << 1) + (float)(0x140 - (t827 >> 1))), 180.0f, (1.0f + 1.0f)));
                                        } else {
                                            if (t760 == 22) {
                                                FUN_0c02b342(0xC30A34C, (*(int *)(((int)stk + 0))));
                                                FUN_0c02b502((unsigned short)(*(short *)(((t746 + 0x14) + 0x0))));
                                                FUN_0c02b3ba((*(int *)(((int)stk + 0))), (((((struct o4_float *)((t746 + 0x14)))->v)) + 168.0f), ((((struct o8_float *)((t746 + 0x14)))->v)), (1.0f + 1.0f));
                                                t844 = strlen(0xC30A354);
                                                t845 = ((~(((~(unsigned char)t844) + 0x1) & 0x1)) + 0x1);
                                                if ((int)(unsigned char)t844 >= 0) {
                                                    t845 = ((unsigned char)t844 & 0x1);
                                                }
                                                t847 = t844;
                                                if (t845 != 0) {
                                                    t847 = (t844 + 0x1);
                                                }
                                                FUN_0c02b502(0x3);
                                                t853 = (int)((unsigned int)((int)((unsigned int)(((((unsigned char)t847 << 1) + (unsigned char)t847) << 2) << 1) + (unsigned int)0x0)) + ((((int)0x0 > (int)(((((unsigned char)t847 << 1) + (unsigned char)t847) << 2) << 1))) ? 1u : 0u));
                                                t857 = (int)((unsigned int)((int)((unsigned int)(t853 >> 1) + (unsigned int)0x0)) + ((((int)0x0 > (int)(t853 >> 1))) ? 1u : 0u));
                                                FUN_0c02b3ba(0xC30A354, ((float)(0x140 - (t857 >> 1)) + -24.0f), 180.0f, (1.0f + 1.0f));
                                                FUN_0c02b502(0x7);
                                                t1050 = (FUN_0c02b3ba(0xC1A7590, ((float)(((((((unsigned int)(unsigned char)t847 >> 1) - 1) << 1) + (((unsigned int)(unsigned char)t847 >> 1) - 1)) << 2) << 1) + (float)(0x140 - (t857 >> 1))), 180.0f, (1.0f + 1.0f)));
                                            } else {
                                                if (t760 == 21) {
                                                    FUN_0c02b342(0xC30A34C, (*(int *)(((int)stk + 0))));
                                                    FUN_0c02b502((unsigned short)(*(short *)(((t746 + 0x14) + 0x0))));
                                                    FUN_0c02b3ba((*(int *)(((int)stk + 0))), (((((struct o4_float *)((t746 + 0x14)))->v)) + 168.0f), ((((struct o8_float *)((t746 + 0x14)))->v)), (1.0f + 1.0f));
                                                    t874 = strlen(0xC30A354);
                                                    t875 = ((~(((~(unsigned char)t874) + 0x1) & 0x1)) + 0x1);
                                                    if ((int)(unsigned char)t874 >= 0) {
                                                        t875 = ((unsigned char)t874 & 0x1);
                                                    }
                                                    t877 = t874;
                                                    if (t875 != 0) {
                                                        t877 = (t874 + 0x1);
                                                    }
                                                    FUN_0c02b502(0x3);
                                                    t883 = (int)((unsigned int)((int)((unsigned int)(((((unsigned char)t877 << 1) + (unsigned char)t877) << 2) << 1) + (unsigned int)0x0)) + ((((int)0x0 > (int)(((((unsigned char)t877 << 1) + (unsigned char)t877) << 2) << 1))) ? 1u : 0u));
                                                    t887 = (int)((unsigned int)((int)((unsigned int)(t883 >> 1) + (unsigned int)0x0)) + ((((int)0x0 > (int)(t883 >> 1))) ? 1u : 0u));
                                                    FUN_0c02b3ba(0xC30A354, ((float)(0x140 - (t887 >> 1)) + -24.0f), (((((struct o8_float *)((t746 + 0x14)))->v)) + 72.0f), (1.0f + 1.0f));
                                                    FUN_0c02b502(0x7);
                                                    t1050 = (FUN_0c02b3ba(0xC1A7590, ((float)(((((((unsigned int)(unsigned char)t877 >> 1) - 1) << 1) + (((unsigned int)(unsigned char)t877 >> 1) - 1)) << 2) << 1) + (float)(0x140 - (t887 >> 1))), (((((struct o8_float *)((t746 + 0x14)))->v)) + 72.0f), (1.0f + 1.0f)));
                                                } else {
                                                    if (t760 == 70) {
                                                        FUN_0c02b502(0x3);
                                                        t900 = 0xC1A75A0;
                                                        if ((*(signed char *)((a4 + 0x18))) == 0) {
                                                            t900 = 0xC1A7598;
                                                        }
                                                        FUN_0c02b3ba(t900, 416.0f, 204.0f, (1.0f + 1.0f));
                                                        t903 = *(signed char *)((a4 + 0x19));
                                                        t906 = 0xC1A7598;
                                                        if (t903 != 0) {
                                                            t906 = 0xC1A75A0;
                                                            if (t903 != 1) {
                                                                t906 = 0xC1A75A8;
                                                            }
                                                        }
                                                        FUN_0c02b3ba(t906, 416.0f, 228.0f, (1.0f + 1.0f));
                                                        t909 = *(signed char *)((a4 + 0x1A));
                                                        t912 = 0xC1A7598;
                                                        if (t909 != 0) {
                                                            t912 = 0xC1A75B0;
                                                            if (t909 != 1) {
                                                                t912 = 0xC1A75B8;
                                                            }
                                                        }
                                                        t1050 = (FUN_0c02b3ba(t912, 416.0f, 252.0f, (1.0f + 1.0f)));
                                                    } else {
                                                        t1050 = t760;
                                                        if (t760 == 28) {
                                                            t916 = 0x13;
                                                            if ((*(int *)0xC5426EC) != 0) {
                                                                t916 = 0x7;
                                                            }
                                                            FUN_0c02b502(t916);
                                                            t1050 = (FUN_0c02b3ba((*(int *)(((t746 + 0x14) + 0xC))), ((((struct o4_float *)((t746 + 0x14)))->v)), ((((struct o8_float *)((t746 + 0x14)))->v)), (1.0f + 1.0f)));
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    t971 = *(int *)0xC3BABB4;
                                    t973 = (0x16C + t971);
                                    if (((*(int *)((t971 + 0x0))) & 1) == 0) {
                                        t973 = (t971 + 0x8);
                                    }
                                    strcpy((((int)stk + 0) + 0x30), t973);
                                    t976 = strlen((((int)stk + 0) + 0x30));
                                    if ((int)(unsigned char)t976 <= (int)0x14) {
                                        FUN_0c02b502(0x7);
                                        t981 = (((int)stk + 0) + 0x30);
                                        u982 = 262.0f;
                                    } else {
                                        (((struct o14_uchar *)((((int)stk + 0) + 0x30)))->v) = 0x0;
                                        FUN_0c02b502(0x7);
                                        FUN_0c02b3ba((((int)stk + 0) + 0x30), 262.0f, 228.0f, (1.0f + 1.0f));
                                        t981 = 0xC1A758C;
                                        u982 = 502.0f;
                                    }
                                    t1050 = (FUN_0c02b3ba(t981, u982, 228.0f, (1.0f + 1.0f)));
                                }
                            } else {
                                FUN_0c02b342(0xC30A404, (*(int *)(((int)stk + 0))));
                                FUN_0c02b502(0x3);
                                t1050 = (FUN_0c02b3ba((*(int *)(((int)stk + 0))), 248.0f, 156.0f, (1.0f + 1.0f)));
                            }
                        } else {
                            strcpy((((int)stk + 0) + 0x8), 0xC3051C4);
                            *(unsigned int *)(((int)stk + 0)) = (((int)stk + 0) + 0x30);
                            FUN_0c02b342((((int)stk + 0) + 0x8), (((int)stk + 0) + 0x30));
                            *(unsigned char *)(((int)stk + 4)) = (strlen((((int)stk + 0) + 0x8)));
                            FUN_0c02b502(0x6);
                            t1013 = *(signed char *)(((int)stk + 4));
                            t1050 = (FUN_0c02b3ba((*(int *)(((int)stk + 0))), (float)(0x140 - (((int)((unsigned int)((int)((unsigned int)(((((unsigned char)t1013 << 1) + (unsigned char)t1013) << 2) << 1) + (unsigned int)0x0)) + ((((int)0x0 > (int)(((((unsigned char)t1013 << 1) + (unsigned char)t1013) << 2) << 1))) ? 1u : 0u))) >> 1)), 180.0f, (1.0f + 1.0f)));
                        }
                    } else {
                        FUN_0c02b342(0xC30999E, (*(int *)(((int)stk + 0))));
                        FUN_0c02b502((unsigned short)(*(short *)(((t746 + 0x14) + 0x0))));
                        t1050 = (FUN_0c02b3ba((*(int *)(((int)stk + 0))), ((((struct o4_float *)((t746 + 0x14)))->v)), ((((struct o8_float *)((t746 + 0x14)))->v)), (1.0f + 1.0f)));
                    }
                }
                t1063 = t1050;
            }
            t1076 = t1063;
        }
        t1444 = t1076;
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o30_float *)(a4))->v) = (1.0f + 1.0f);
        (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x410);
        (((struct o44_float *)(a4))->v) = 0.0199999996f;
        (((struct o40_float *)(a4))->v) = 0.0199999996f;
        (((struct o48_float *)(a4))->v) = 1.0f;
        (((struct oB0_float *)(a4))->v) = 0.899999976f;
        *(unsigned short *)((a4 + 0x1C)) = 0x10;
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
        (((struct o40_float *)(a4))->v) = (math_cos_angle16((((*(short *)((a4 + 0x1C))) << 8) << 2)));
        t1094 = *(short *)((a4 + 0x1C));
        t1431 = t1094;
        if (t1094 != 0) {
        } else {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            *(unsigned short *)((a4 + 0x1C)) = 0x10;
            *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
            (((struct o44_float *)(a4))->v) = (math_cos_angle16((((*(short *)((a4 + 0x1C))) << 8) << 2)));
            t1099 = *(short *)((a4 + 0x1C));
            t1418 = t1099;
            if (t1099 != 0) {
            } else {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) & 0xFFEF);
                if ((*(signed char *)0xC30503C) == (*(signed char *)((a4 + 0x3)))) {
                    (((struct o14_uchar *)(a4))->v) = 0x4;
                    (((struct o15_uchar *)(a4))->v) = 0x0;
                }
                *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
                u1111 = 0.899999976f;
                u1111 = u1111 + 0.0500000007f * (math_sin_angle16((((*(short *)((a4 + 0x1C))) << 8) << 2)));
                (((struct oB0_float *)(a4))->v) = u1111;
                t1114 = (*(int *)((((*(signed char *)((a4 + 0x3))) << 2) + 0xC20DDFC)));
                for (;;) {
                    if ((*(short *)((t1114 + 0x10))) != 0) {
                        break;
                    }
                    FUN_0c02b502((unsigned short)(*(short *)((t1114 + 0x0))));
                    FUN_0c02b3ba((*(int *)((t1114 + 0xC))), ((((struct o4_float *)(t1114))->v)), ((((struct o8_float *)(t1114))->v)), (1.0f + 1.0f));
                    t1114 = (t1114 + 0x14);
                }
                FUN_0c02b502((unsigned short)(*(short *)((t1114 + 0x0))));
                FUN_0c02b3ba((*(int *)((t1114 + 0xC))), ((((struct o4_float *)(t1114))->v)), ((((struct o8_float *)(t1114))->v)), (1.0f + 1.0f));
                *(unsigned int *)(((int)stk + 0)) = (((int)stk + 0) + 0x30);
                t1128 = *(signed char *)((a4 + 0x3));
                if (t1128 != 23) {
                    if (t1128 != 24) {
                        if ((t1128 != 26) && (t1128 != 67)) {
                            if (t1128 != 55) {
                                if (t1128 == 60) {
                                    t1144 = *(int *)((a4 + 0x10));
                                    FUN_0c02b342(t1144, (*(int *)(((int)stk + 0))));
                                    FUN_0c02b502((unsigned short)(*(short *)(((t1114 + 0x14) + 0x0))));
                                    FUN_0c02b3ba((*(int *)(((int)stk + 0))), (((((struct o4_float *)((t1114 + 0x14)))->v)) + 168.0f), ((((struct o8_float *)((t1114 + 0x14)))->v)), (1.0f + 1.0f));
                                    t1152 = strlen((t1144 + 0x8));
                                    t1153 = ((~(((~(unsigned char)t1152) + 0x1) & 0x1)) + 0x1);
                                    if ((int)(unsigned char)t1152 >= 0) {
                                        t1153 = ((unsigned char)t1152 & 0x1);
                                    }
                                    t1155 = t1152;
                                    if (t1153 != 0) {
                                        t1155 = (t1152 + 0x1);
                                    }
                                    FUN_0c02b502(0x3);
                                    t1161 = (int)((unsigned int)((int)((unsigned int)(((((unsigned char)t1155 << 1) + (unsigned char)t1155) << 2) << 1) + (unsigned int)0x0)) + ((((int)0x0 > (int)(((((unsigned char)t1155 << 1) + (unsigned char)t1155) << 2) << 1))) ? 1u : 0u));
                                    t1165 = (int)((unsigned int)((int)((unsigned int)(t1161 >> 1) + (unsigned int)0x0)) + ((((int)0x0 > (int)(t1161 >> 1))) ? 1u : 0u));
                                    FUN_0c02b3ba((t1144 + 0x8), ((float)(0x140 - (t1165 >> 1)) + -24.0f), 180.0f, (1.0f + 1.0f));
                                    FUN_0c02b502(0x7);
                                    t1418 = (FUN_0c02b3ba(0xC1A7590, ((float)(((((((unsigned int)(unsigned char)t1155 >> 1) - 1) << 1) + (((unsigned int)(unsigned char)t1155 >> 1) - 1)) << 2) << 1) + (float)(0x140 - (t1165 >> 1))), 180.0f, (1.0f + 1.0f)));
                                } else {
                                    if (t1128 == 32) {
                                        FUN_0c02b342(0xC30A34C, (*(int *)(((int)stk + 0))));
                                        FUN_0c02b502((unsigned short)(*(short *)(((t1114 + 0x14) + 0x0))));
                                        FUN_0c02b3ba((*(int *)(((int)stk + 0))), (((((struct o4_float *)((t1114 + 0x14)))->v)) + 168.0f), ((((struct o8_float *)((t1114 + 0x14)))->v)), (1.0f + 1.0f));
                                        t1182 = strlen(0xC30A354);
                                        t1183 = ((~(((~(unsigned char)t1182) + 0x1) & 0x1)) + 0x1);
                                        if ((int)(unsigned char)t1182 >= 0) {
                                            t1183 = ((unsigned char)t1182 & 0x1);
                                        }
                                        t1185 = t1182;
                                        if (t1183 != 0) {
                                            t1185 = (t1182 + 0x1);
                                        }
                                        FUN_0c02b502(0x3);
                                        t1191 = (int)((unsigned int)((int)((unsigned int)(((((unsigned char)t1185 << 1) + (unsigned char)t1185) << 2) << 1) + (unsigned int)0x0)) + ((((int)0x0 > (int)(((((unsigned char)t1185 << 1) + (unsigned char)t1185) << 2) << 1))) ? 1u : 0u));
                                        t1195 = (int)((unsigned int)((int)((unsigned int)(t1191 >> 1) + (unsigned int)0x0)) + ((((int)0x0 > (int)(t1191 >> 1))) ? 1u : 0u));
                                        FUN_0c02b3ba(0xC30A354, ((float)(0x140 - (t1195 >> 1)) + -24.0f), 180.0f, (1.0f + 1.0f));
                                        FUN_0c02b502(0x7);
                                        t1418 = (FUN_0c02b3ba(0xC1A7590, ((float)(((((((unsigned int)(unsigned char)t1185 >> 1) - 1) << 1) + (((unsigned int)(unsigned char)t1185 >> 1) - 1)) << 2) << 1) + (float)(0x140 - (t1195 >> 1))), 180.0f, (1.0f + 1.0f)));
                                    } else {
                                        if (t1128 == 22) {
                                            FUN_0c02b342(0xC30A34C, (*(int *)(((int)stk + 0))));
                                            FUN_0c02b502((unsigned short)(*(short *)(((t1114 + 0x14) + 0x0))));
                                            FUN_0c02b3ba((*(int *)(((int)stk + 0))), (((((struct o4_float *)((t1114 + 0x14)))->v)) + 168.0f), ((((struct o8_float *)((t1114 + 0x14)))->v)), (1.0f + 1.0f));
                                            t1212 = strlen(0xC30A354);
                                            t1213 = ((~(((~(unsigned char)t1212) + 0x1) & 0x1)) + 0x1);
                                            if ((int)(unsigned char)t1212 >= 0) {
                                                t1213 = ((unsigned char)t1212 & 0x1);
                                            }
                                            t1215 = t1212;
                                            if (t1213 != 0) {
                                                t1215 = (t1212 + 0x1);
                                            }
                                            FUN_0c02b502(0x3);
                                            t1221 = (int)((unsigned int)((int)((unsigned int)(((((unsigned char)t1215 << 1) + (unsigned char)t1215) << 2) << 1) + (unsigned int)0x0)) + ((((int)0x0 > (int)(((((unsigned char)t1215 << 1) + (unsigned char)t1215) << 2) << 1))) ? 1u : 0u));
                                            t1225 = (int)((unsigned int)((int)((unsigned int)(t1221 >> 1) + (unsigned int)0x0)) + ((((int)0x0 > (int)(t1221 >> 1))) ? 1u : 0u));
                                            FUN_0c02b3ba(0xC30A354, ((float)(0x140 - (t1225 >> 1)) + -24.0f), 180.0f, (1.0f + 1.0f));
                                            FUN_0c02b502(0x7);
                                            t1418 = (FUN_0c02b3ba(0xC1A7590, ((float)(((((((unsigned int)(unsigned char)t1215 >> 1) - 1) << 1) + (((unsigned int)(unsigned char)t1215 >> 1) - 1)) << 2) << 1) + (float)(0x140 - (t1225 >> 1))), 180.0f, (1.0f + 1.0f)));
                                        } else {
                                            if (t1128 == 21) {
                                                FUN_0c02b342(0xC30A34C, (*(int *)(((int)stk + 0))));
                                                FUN_0c02b502((unsigned short)(*(short *)(((t1114 + 0x14) + 0x0))));
                                                FUN_0c02b3ba((*(int *)(((int)stk + 0))), (((((struct o4_float *)((t1114 + 0x14)))->v)) + 168.0f), ((((struct o8_float *)((t1114 + 0x14)))->v)), (1.0f + 1.0f));
                                                t1242 = strlen(0xC30A354);
                                                t1243 = ((~(((~(unsigned char)t1242) + 0x1) & 0x1)) + 0x1);
                                                if ((int)(unsigned char)t1242 >= 0) {
                                                    t1243 = ((unsigned char)t1242 & 0x1);
                                                }
                                                t1245 = t1242;
                                                if (t1243 != 0) {
                                                    t1245 = (t1242 + 0x1);
                                                }
                                                FUN_0c02b502(0x3);
                                                t1251 = (int)((unsigned int)((int)((unsigned int)(((((unsigned char)t1245 << 1) + (unsigned char)t1245) << 2) << 1) + (unsigned int)0x0)) + ((((int)0x0 > (int)(((((unsigned char)t1245 << 1) + (unsigned char)t1245) << 2) << 1))) ? 1u : 0u));
                                                t1255 = (int)((unsigned int)((int)((unsigned int)(t1251 >> 1) + (unsigned int)0x0)) + ((((int)0x0 > (int)(t1251 >> 1))) ? 1u : 0u));
                                                FUN_0c02b3ba(0xC30A354, ((float)(0x140 - (t1255 >> 1)) + -24.0f), (((((struct o8_float *)((t1114 + 0x14)))->v)) + 72.0f), (1.0f + 1.0f));
                                                FUN_0c02b502(0x7);
                                                t1418 = (FUN_0c02b3ba(0xC1A7590, ((float)(((((((unsigned int)(unsigned char)t1245 >> 1) - 1) << 1) + (((unsigned int)(unsigned char)t1245 >> 1) - 1)) << 2) << 1) + (float)(0x140 - (t1255 >> 1))), (((((struct o8_float *)((t1114 + 0x14)))->v)) + 72.0f), (1.0f + 1.0f)));
                                            } else {
                                                if (t1128 == 70) {
                                                    FUN_0c02b502(0x3);
                                                    t1268 = 0xC1A75A0;
                                                    if ((*(signed char *)((a4 + 0x18))) == 0) {
                                                        t1268 = 0xC1A7598;
                                                    }
                                                    FUN_0c02b3ba(t1268, 416.0f, 204.0f, (1.0f + 1.0f));
                                                    t1271 = *(signed char *)((a4 + 0x19));
                                                    t1274 = 0xC1A7598;
                                                    if (t1271 != 0) {
                                                        t1274 = 0xC1A75A0;
                                                        if (t1271 != 1) {
                                                            t1274 = 0xC1A75A8;
                                                        }
                                                    }
                                                    FUN_0c02b3ba(t1274, 416.0f, 228.0f, (1.0f + 1.0f));
                                                    t1277 = *(signed char *)((a4 + 0x1A));
                                                    t1280 = 0xC1A7598;
                                                    if (t1277 != 0) {
                                                        t1280 = 0xC1A75B0;
                                                        if (t1277 != 1) {
                                                            t1280 = 0xC1A75B8;
                                                        }
                                                    }
                                                    t1418 = (FUN_0c02b3ba(t1280, 416.0f, 252.0f, (1.0f + 1.0f)));
                                                } else {
                                                    t1418 = t1128;
                                                    if (t1128 == 28) {
                                                        t1284 = 0x13;
                                                        if ((*(int *)0xC5426EC) != 0) {
                                                            t1284 = 0x7;
                                                        }
                                                        FUN_0c02b502(t1284);
                                                        t1418 = (FUN_0c02b3ba((*(int *)(((t1114 + 0x14) + 0xC))), ((((struct o4_float *)((t1114 + 0x14)))->v)), ((((struct o8_float *)((t1114 + 0x14)))->v)), (1.0f + 1.0f)));
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                t1339 = *(int *)0xC3BABB4;
                                t1341 = (0x16C + t1339);
                                if (((*(int *)((t1339 + 0x0))) & 1) == 0) {
                                    t1341 = (t1339 + 0x8);
                                }
                                strcpy((((int)stk + 0) + 0x30), t1341);
                                t1344 = strlen((((int)stk + 0) + 0x30));
                                if ((int)(unsigned char)t1344 <= (int)0x14) {
                                    FUN_0c02b502(0x7);
                                    t1349 = (((int)stk + 0) + 0x30);
                                    u1350 = 262.0f;
                                } else {
                                    (((struct o14_uchar *)((((int)stk + 0) + 0x30)))->v) = 0x0;
                                    FUN_0c02b502(0x7);
                                    FUN_0c02b3ba((((int)stk + 0) + 0x30), 262.0f, 228.0f, (1.0f + 1.0f));
                                    t1349 = 0xC1A758C;
                                    u1350 = 502.0f;
                                }
                                t1418 = (FUN_0c02b3ba(t1349, u1350, 228.0f, (1.0f + 1.0f)));
                            }
                        } else {
                            FUN_0c02b342(0xC30A404, (*(int *)(((int)stk + 0))));
                            FUN_0c02b502(0x3);
                            t1418 = (FUN_0c02b3ba((*(int *)(((int)stk + 0))), 248.0f, 156.0f, (1.0f + 1.0f)));
                        }
                    } else {
                        strcpy((((int)stk + 0) + 0x8), 0xC3051C4);
                        *(unsigned int *)(((int)stk + 0)) = (((int)stk + 0) + 0x30);
                        FUN_0c02b342((((int)stk + 0) + 0x8), (((int)stk + 0) + 0x30));
                        *(unsigned char *)(((int)stk + 4)) = (strlen((((int)stk + 0) + 0x8)));
                        FUN_0c02b502(0x6);
                        t1381 = *(signed char *)(((int)stk + 4));
                        t1418 = (FUN_0c02b3ba((*(int *)(((int)stk + 0))), (float)(0x140 - (((int)((unsigned int)((int)((unsigned int)(((((unsigned char)t1381 << 1) + (unsigned char)t1381) << 2) << 1) + (unsigned int)0x0)) + ((((int)0x0 > (int)(((((unsigned char)t1381 << 1) + (unsigned char)t1381) << 2) << 1))) ? 1u : 0u))) >> 1)), 180.0f, (1.0f + 1.0f)));
                    }
                } else {
                    FUN_0c02b342(0xC30999E, (*(int *)(((int)stk + 0))));
                    FUN_0c02b502((unsigned short)(*(short *)(((t1114 + 0x14) + 0x0))));
                    t1418 = (FUN_0c02b3ba((*(int *)(((int)stk + 0))), ((((struct o4_float *)((t1114 + 0x14)))->v)), ((((struct o8_float *)((t1114 + 0x14)))->v)), (1.0f + 1.0f)));
                }
            }
            t1431 = t1418;
        }
        t1444 = t1431;
    }
    return t1444;
}

int FUN_0c0104ea(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = *(signed char *)0xC30EF66;
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 == 1) {
            if ((int)(*(short *)0xC30EF6C) > 0) {
                *(unsigned short *)0xC30EF6C = ((*(short *)0xC30EF6C) - 1);
                return (unsigned char)t0;
            }
            t1 = FUN_0c046266(0xC304411, 0xC30EF66, a6, a7);
            if ((unsigned char)t1 == 0) {
                return (unsigned char)t1;
            }
            (((struct o1_uchar *)0xC30EF65)->v) = 0x2;
            t1 = ((int (*)(void))(FUN_0c03add8))();
            if ((int)t1 < 0) {
                return t1;
            }
            if ((t1 & 0x1) != 0) {
                t2 = FUN_0c03afdc(t1);
                if ((int)t2 < 0) {
                    return t2;
                }
                if ((t2 & 0x1) == 0) {
                    t1 = FUN_0c03b25a(t2);
                    if ((int)t1 < 0) {
                        return t1;
                    }
                    if ((t1 & 0x1) == 0) {
                        (((struct o1_uchar *)0xC30EF65)->v) = 0x63;
                        (((struct o2_uchar *)0xC30EF65)->v) = 0x3A;
                        return 0x3A;
                    }
                    (((struct o9_uchar *)0xC30B6F4)->v) = 0x0;
                    (((struct o1_uchar *)0xC30EF65)->v) = 0x4;
                    (((struct o3_uchar *)0xC30EF65)->v) = 0x0;
                    *(unsigned char *)0xC304410 = 0x0;
                    if ((*(signed char *)0xC30A403) != 0) {
                        return 0x0;
                    }
                    t1 = (memset(0xC83BBD4, 0x0, 0x980));
                    t2 = 0x0;
                    for (;;) {
                        if ((int)t2 >= (int)0x6) {
                            break;
                        }
                        t3 = 0x73A;
                        t3 = (t3 + 0xC83BBD4);
                        t3 = (t3 + t2);
                        t1 = t2;
                        t2 = (t2 + 0x1);
                        *(unsigned char *)((t3 + 0x0)) = ((*(signed char *)((0xC309998 + t1))));
                    }
                    strncpy(0xC83BC54, ((*(int *)0xC3BABB4) + 0xB4), 0x30);
                    *(unsigned int *)0xC83BDDC = 0x7D0;
                    return FUN_0c01ceac();
                }
                (((struct o1_uchar *)0xC30EF65)->v) = 0x3;
                return 0x3;
            }
            (((struct o1_uchar *)0xC30EF65)->v) = 0x63;
            (((struct o2_uchar *)0xC30EF65)->v) = 0x3A;
            return 0x3A;
        }
        if ((unsigned char)t0 == 2) {
            t1 = ((int (*)(int, int, int, int))(FUN_0c03add8))(0xC30EF6C, 0xC30EF66, a6, a7);
            if ((int)t1 < 0) {
                return t1;
            }
            if ((t1 & 0x1) != 0) {
                t2 = FUN_0c03afdc(t1);
                if ((int)t2 < 0) {
                    return t2;
                }
                if ((t2 & 0x1) == 0) {
                    t1 = FUN_0c03b25a(t2);
                    if ((int)t1 < 0) {
                        return t1;
                    }
                    if ((t1 & 0x1) == 0) {
                        (((struct o1_uchar *)0xC30EF65)->v) = 0x63;
                        (((struct o2_uchar *)0xC30EF65)->v) = 0x3A;
                        return 0x3A;
                    }
                    (((struct o9_uchar *)0xC30B6F4)->v) = 0x0;
                    (((struct o1_uchar *)0xC30EF65)->v) = 0x4;
                    (((struct o3_uchar *)0xC30EF65)->v) = 0x0;
                    *(unsigned char *)0xC304410 = 0x0;
                    if ((*(signed char *)0xC30A403) != 0) {
                        return 0x0;
                    }
                    t1 = (memset(0xC83BBD4, 0x0, 0x980));
                    t2 = 0x0;
                    for (;;) {
                        if ((int)t2 >= (int)0x6) {
                            break;
                        }
                        t3 = 0x73A;
                        t3 = (t3 + 0xC83BBD4);
                        t3 = (t3 + t2);
                        t1 = t2;
                        t2 = (t2 + 0x1);
                        *(unsigned char *)((t3 + 0x0)) = ((*(signed char *)((0xC309998 + t1))));
                    }
                    strncpy(0xC83BC54, ((*(int *)0xC3BABB4) + 0xB4), 0x30);
                    *(unsigned int *)0xC83BDDC = 0x7D0;
                    return FUN_0c01ceac();
                }
                (((struct o1_uchar *)0xC30EF65)->v) = 0x3;
                return 0x3;
            }
            (((struct o1_uchar *)0xC30EF65)->v) = 0x63;
            (((struct o2_uchar *)0xC30EF65)->v) = 0x3A;
            return 0x3A;
        }
        if ((unsigned char)t0 == 3) {
            t1 = FUN_0c03c7ec(0x0);
            if (t1 == 0) {
                (((struct o1_uchar *)0xC30EF65)->v) = 0x4;
                (((struct o3_uchar *)0xC30EF65)->v) = 0x1;
                *(unsigned char *)0xC304410 = 0x1;
                (((struct o9_uchar *)0xC30B6F4)->v) = 0x0;
                (((struct o8_uchar *)0xC30B6F4)->v) = 0x1;
                t2 = 0x1;
            } else {
                t3 = t1;
                if (t1 == -1) {
                } else {
                    (((struct o1_uchar *)0xC30EF65)->v) = 0x63;
                    (((struct o2_uchar *)0xC30EF65)->v) = 0x39;
                    t3 = 0x39;
                }
                t2 = t3;
            }
            return t2;
        }
        if ((unsigned char)t0 == 4) {
            (((struct o1_uchar *)0xC30EF65)->v) = ((*(signed char *)0xC30EF66) + 0x1);
            *(unsigned short *)0xC30EF6C = 0xC;
            FUN_0c018fd2(0x1D);
            if ((*(signed char *)0xC30EF68) == 0) {
                (((struct o2_uchar *)0xC30EF65)->v) = 0x38;
                t1 = 0x38;
            } else {
                t2 = FUN_0c0117a0(0xC83C30E);
                if (t2 != 0) {
                    (((struct o2_uchar *)0xC30EF65)->v) = 0x5;
                    *(unsigned char *)0xC30AA32 = 0x2;
                    FUN_0c01ceac();
                    t2 = ((int (*)(int))(syCfgGetIndividualID))(0xC309998);
                } else {
                    *(unsigned char *)0xC30AA32 = 0x1;
                    (((struct o2_uchar *)0xC30EF65)->v) = 0x38;
                    FUN_0c01ceac();
                }
                if ((int)((((struct o8_int *)0xC309BD4)->v)) >= (int)((((struct o0_int *)0xC309BD4)->v))) {
                } else {
                    (((struct o0_uchar *)0xC30B6F4)->v) = 0x1;
                }
                t1 = 0xC309BDC;
            }
            return t1;
        }
        if ((unsigned char)t0 == 5) {
            t1 = *(short *)0xC30EF6C;
            *(unsigned short *)0xC30EF6C = (t1 - 1);
            if ((int)(short)(t1 - 1) > 0) {
                return (unsigned char)t0;
            }
            FUN_0c018f40(0x46, (*(signed char *)0xC304410), (*(signed char *)0xC304411), (*(signed char *)0xC304412));
            (((struct o1_uchar *)0xC30EF65)->v) = ((*(signed char *)0xC30EF66) + 0x1);
            *(unsigned short *)0xC30EF6C = 0x14C;
            t1 = *(short *)0xC30EF6C;
            *(unsigned short *)0xC30EF6C = (t1 - 1);
            if ((int)(short)(t1 - 1) > (int)0xB4) {
                return (short)(t1 - 1);
            }
            if ((int)(*(short *)0xC30EF6C) > 0) {
                t1 = FUN_0c01cd2c(0x101);
                if ((short)t1 == 0) {
                    return (short)t1;
                }
            }
            (((struct o1_uchar *)0xC30EF65)->v) = ((*(signed char *)0xC30EF66) + 0x1);
            *(unsigned short *)0xC30EF6C = 0xC;
            return FUN_0c018fd2(0x46);
        }
        if ((unsigned char)t0 == 6) {
            t1 = *(short *)0xC30EF6C;
            *(unsigned short *)0xC30EF6C = (t1 - 1);
            if ((int)(short)(t1 - 1) > (int)0xB4) {
                return (short)(t1 - 1);
            }
            if ((int)(*(short *)0xC30EF6C) > 0) {
                t1 = FUN_0c01cd2c(0x101);
                if ((short)t1 == 0) {
                    return (short)t1;
                }
            }
            (((struct o1_uchar *)0xC30EF65)->v) = ((*(signed char *)0xC30EF66) + 0x1);
            *(unsigned short *)0xC30EF6C = 0xC;
            return FUN_0c018fd2(0x46);
        }
        if ((unsigned char)t0 == 7) {
            t1 = *(short *)0xC30EF6C;
            *(unsigned short *)0xC30EF6C = (t1 - 1);
            t2 = (unsigned char)t0;
            if ((int)(short)(t1 - 1) > 0) {
            } else {
                (((struct o1_uchar *)0xC30EF65)->v) = ((*(signed char *)0xC30EF66) + 0x1);
                FUN_0c018e74((*(signed char *)0xC30EF67));
                *(unsigned short *)0xC30EF6C = 0x3E;
                t2 = 0x3E;
            }
            return t2;
        }
        if ((unsigned char)t0 == 8) {
            if ((int)(*(short *)0xC30EF6C) > 0) {
                *(unsigned short *)0xC30EF6C = ((*(short *)0xC30EF6C) - 1);
                t1 = (unsigned char)t0;
            } else {
                t2 = FUN_0c01cd2c(0x101);
                t3 = (short)t2;
                if ((short)t2 == 0) {
                } else {
                    FUN_0c05aab6(0x0, 0x3);
                    (((struct o1_uchar *)0xC30EF65)->v) = ((*(signed char *)0xC30EF66) + 0x1);
                    FUN_0c0573cc(0xFF000000, 0x0, 0x14);
                    *(unsigned short *)0xC30EF6C = 0x14;
                    t3 = 0x14;
                }
                t1 = t3;
            }
            return t1;
        }
        if ((unsigned char)t0 == 9) {
            t1 = *(short *)0xC30EF6C;
            *(unsigned short *)0xC30EF6C = (t1 - 1);
            t2 = (unsigned char)t0;
            if ((int)(short)(t1 - 1) > 0) {
            } else {
                (((struct o0_uchar *)0xC30EF65)->v) = ((*(signed char *)0xC30EF65) + 0x1);
                (((struct o1_uchar *)0xC30EF65)->v) = 0x0;
                (((struct o2_uchar *)0xC30EF65)->v) = 0x0;
                t2 = 0x0;
            }
            return t2;
        }
        if ((unsigned char)t0 == 99) {
            FUN_0c018fd2(0x1D);
            *(unsigned short *)0xC30EF6C = 0xE;
            t1 = *(signed char *)0xC30EF66;
            (((struct o1_uchar *)0xC30EF65)->v) = (t1 + 0x1);
            return (t1 + 0x1);
        }
        if ((unsigned char)t0 == 100) {
            t1 = *(short *)0xC30EF6C;
            *(unsigned short *)0xC30EF6C = (t1 - 1);
            t2 = (unsigned char)t0;
            if ((int)(short)(t1 - 1) <= 0) {
                (((struct o1_uchar *)0xC30EF65)->v) = ((*(signed char *)0xC30EF66) + 0x1);
                (((struct o3_uchar *)0xC30EF65)->v) = 0x1;
                FUN_0c018e9c((*(signed char *)0xC30EF67), 0xC30EF68);
                *(unsigned short *)0xC30EF6C = 0x20;
                t2 = 0x20;
            }
            return t2;
        }
        if ((unsigned char)t0 == 101) {
            t1 = *(short *)0xC30EF6C;
            *(unsigned short *)0xC30EF6C = (t1 - 1);
            t2 = (unsigned char)t0;
            if ((int)(short)(t1 - 1) <= 0) {
                (((struct o1_uchar *)0xC30EF65)->v) = ((*(signed char *)0xC30EF66) + 0x1);
                FUN_0c01c714(0xC30EF68, 0x1, 0x2);
                t1 = FUN_0c01cd2c(0x101);
                t3 = (short)t1;
                if ((short)t1 != 0) {
                    *(unsigned short *)0xC30EF6C = 0x10;
                    (((struct o1_uchar *)0xC30EF65)->v) = ((*(signed char *)0xC30EF66) + 0x1);
                    t3 = (FUN_0c05aab6(0x0, 0x3));
                }
                t2 = t3;
            }
            return t2;
        }
        if ((unsigned char)t0 == 102) {
            FUN_0c01c714(0xC30EF68, 0x1, 0x2);
            t1 = FUN_0c01cd2c(0x101);
            t2 = (short)t1;
            if ((short)t1 != 0) {
                *(unsigned short *)0xC30EF6C = 0x10;
                (((struct o1_uchar *)0xC30EF65)->v) = ((*(signed char *)0xC30EF66) + 0x1);
                t2 = (FUN_0c05aab6(0x0, 0x3));
            }
            return t2;
        }
        if ((unsigned char)t0 == 103) {
            t1 = *(short *)0xC30EF6C;
            *(unsigned short *)0xC30EF6C = (t1 - 1);
            if ((int)(short)(t1 - 1) <= 0) {
                (((struct o1_uchar *)0xC30EF65)->v) = ((*(signed char *)0xC30EF66) + 0x1);
                *(unsigned short *)0xC30EF6C = 0x14;
                t1 = 0xFF000000;
                if ((*(signed char *)0xC30EF68) == 0) {
                    t1 = 0xFFFFFFFF;
                }
                FUN_0c0573cc(t1, 0x0, 0x14);
                t1 = *(short *)0xC30EF6C;
                *(unsigned short *)0xC30EF6C = (t1 - 1);
                if ((int)(short)(t1 - 1) <= 0) {
                    if ((*(signed char *)0xC30EF68) == 0) {
                        return FUN_0c010448();
                    }
                    (((struct o3_uchar *)0xC30EF65)->v) = 0x0;
                    (((struct o2_uchar *)0xC30EF65)->v) = 0x0;
                    (((struct o1_uchar *)0xC30EF65)->v) = 0x0;
                    return 0x0;
                }
                return (short)(t1 - 1);
            }
            return (unsigned char)t0;
        }
        if ((unsigned char)t0 == 104) {
            t1 = *(short *)0xC30EF6C;
            *(unsigned short *)0xC30EF6C = (t1 - 1);
            if ((int)(short)(t1 - 1) <= 0) {
                if ((*(signed char *)0xC30EF68) == 0) {
                    return FUN_0c010448();
                }
                (((struct o3_uchar *)0xC30EF65)->v) = 0x0;
                (((struct o2_uchar *)0xC30EF65)->v) = 0x0;
                (((struct o1_uchar *)0xC30EF65)->v) = 0x0;
                return 0x0;
            }
            return (short)(t1 - 1);
        }
        return (unsigned char)t0;
    }
    t0 = *(signed char *)0xC30EF67;
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 1) {
            if ((unsigned char)t0 != 2) {
                if ((unsigned char)t0 == 3) {
                    t1 = *(short *)0xC30EF6C;
                    *(unsigned short *)0xC30EF6C = (t1 - 1);
                    if ((int)(short)(t1 - 1) > 0) {
                        return (short)(t1 - 1);
                    }
                    *(unsigned short *)0xC30EF6C = 0x5C;
                    FUN_0c018e74(0x1D);
                    (((struct o1_uchar *)0xC30EF65)->v) = 0x1;
                    (((struct o2_uchar *)0xC30EF65)->v) = 0x0;
                    return FUN_0c046238();
                }
                return (unsigned char)t0;
            }
        } else {
            t0 = *(short *)0xC30EF6C;
            *(unsigned short *)0xC30EF6C = (t0 - 1);
            if ((int)(short)(t0 - 1) > 0) {
                return (short)(t0 - 1);
            }
            (((struct o2_uchar *)0xC30EF65)->v) = ((*(signed char *)0xC30EF67) + 0x1);
        }
    } else {
        *(unsigned char *)0xC30AA32 = 0x0;
        t0 = ((int (*)(int, int, int))(syCfgGetIndividualID))(0xC309998, 0xC30EF66, a6);
        (((struct o0_uchar *)0xC30B6F4)->v) = 0x0;
        *(unsigned short *)0xC30EF6C = 0x20;
        FUN_0c01e9e4();
        FUN_0c018e74(0x45);
        FUN_0c01cb7c();
        FUN_0c0573c0(0xFF000000, 0x0, 0x14);
        (((struct o2_uchar *)0xC30EF65)->v) = ((*(signed char *)0xC30EF67) + 0x1);
        t0 = *(short *)0xC30EF6C;
        *(unsigned short *)0xC30EF6C = (t0 - 1);
        if ((int)(short)(t0 - 1) > 0) {
            return (short)(t0 - 1);
        }
        (((struct o2_uchar *)0xC30EF65)->v) = ((*(signed char *)0xC30EF67) + 0x1);
    }
    t0 = FUN_0c01cd2c(0x40);
    if ((short)t0 != 0) {
        (((struct o1_uchar *)0xC30EF65)->v) = 0x68;
        (((struct o2_uchar *)0xC30EF65)->v) = 0x0;
        (((struct o3_uchar *)0xC30EF65)->v) = 0x0;
        FUN_0c05aab6(0x0, 0x4);
        *(unsigned short *)0xC30EF6C = 0x14;
        return FUN_0c0573cc(0xFFFFFFFF, 0x0, 0x14);
    }
    t0 = FUN_0c01cd2c(0x8000);
    if ((short)t0 == 0) {
        return (short)t0;
    }
    FUN_0c05aab6(0x0, 0x3);
    (((struct o2_uchar *)0xC30EF65)->v) = ((*(signed char *)0xC30EF67) + 0x1);
    FUN_0c018fd2(0x45);
    *(unsigned short *)0xC30EF6C = 0xC;
    t0 = *(short *)0xC30EF6C;
    *(unsigned short *)0xC30EF6C = (t0 - 1);
    if ((int)(short)(t0 - 1) > 0) {
        return (short)(t0 - 1);
    }
    *(unsigned short *)0xC30EF6C = 0x5C;
    FUN_0c018e74(0x1D);
    (((struct o1_uchar *)0xC30EF65)->v) = 0x1;
    (((struct o2_uchar *)0xC30EF65)->v) = 0x0;
    return FUN_0c046238();
}

int FUN_0c01de2c(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    t0 = (((struct o0_int *)0xC305050)->v);
    t1 = (((struct o4_int *)0xC305050)->v);
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 == 3) {
                    t2 = FUN_0c03c5c0(0x0, t1, a6, a7, f4, f5, f6, f7, f8, f9, f10, f11);
                    if (t2 == 0) {
                        (((struct o0_uint *)0xC305050)->v) = 0x4;
                        (((struct o4_uint *)0xC305050)->v) = 0x0;
                        *(unsigned char *)0xC30B6FD = 0x0;
                    } else {
                        if (t2 == -1) {
                        } else {
                            (((struct o4_uint *)0xC305050)->v) = 0x0;
                            if (((((struct o14_int *)0xC305050)->v)) == 0) {
                                (((struct o0_uint *)0xC305050)->v) = 0x63;
                            } else {
                                (((struct o0_uint *)0xC305050)->v) = 0x64;
                            }
                        }
                    }
                    t2 = 0x0;
                } else {
                    if (t0 == 4) {
                        if (t1 != 0) {
                            if (t1 != 1) {
                                if (t1 != 2) {
                                    t3 = 0x0;
                                    if (t1 != 3) {
                                    } else {
                                        t4 = *(short *)0xC30EF6C;
                                        *(unsigned short *)0xC30EF6C = (t4 - 1);
                                        t5 = 0x0;
                                        if ((int)(short)(t4 - 1) > 0) {
                                        } else {
                                            FUN_0c01e9e4();
                                            t5 = 0x1;
                                        }
                                        t3 = t5;
                                    }
                                    t4 = t3;
                                } else {
                                    t3 = *(short *)0xC30EF6C;
                                    *(unsigned short *)0xC30EF6C = (t3 - 1);
                                    if ((int)(short)(t3 - 1) > 0) {
                                        t3 = FUN_0c01cd2c(0x101);
                                        if ((short)t3 == 0) {
                                        } else {
                                            *(unsigned short *)0xC30EF6C = 0x14;
                                            FUN_0c0573cc(0xFF000000, 0x0, 0x14);
                                            (((struct o4_uint *)0xC305050)->v) = (((((struct o4_int *)0xC305050)->v)) + 0x1);
                                        }
                                    } else {
                                        *(unsigned short *)0xC30EF6C = 0x14;
                                        FUN_0c0573cc(0xFF000000, 0x0, 0x14);
                                        (((struct o4_uint *)0xC305050)->v) = (((((struct o4_int *)0xC305050)->v)) + 0x1);
                                    }
                                    t4 = 0x0;
                                }
                                t3 = t4;
                            } else {
                                t4 = *(short *)0xC30EF6C;
                                *(unsigned short *)0xC30EF6C = (t4 - 1);
                                if ((int)(short)(t4 - 1) > 0) {
                                } else {
                                    FUN_0c018e74(0x32);
                                    (((struct oC_uint *)0xC305050)->v) = 0x32;
                                    *(unsigned short *)0xC30EF6C = 0x14C;
                                    (((struct o4_uint *)0xC305050)->v) = (((((struct o4_int *)0xC305050)->v)) + 0x1);
                                }
                                t3 = 0x0;
                            }
                            t4 = t3;
                        } else {
                            FUN_0c018fd2(((((struct oC_int *)0xC305050)->v)));
                            *(unsigned short *)0xC30EF6C = 0xC;
                            (((struct o4_uint *)0xC305050)->v) = (((((struct o4_int *)0xC305050)->v)) + 0x1);
                            t4 = 0x0;
                        }
                        t3 = t4;
                    } else {
                        if (t0 == 99) {
                            switch (t1) {
                            case 0:
                                FUN_0c018fd2(((((struct oC_int *)0xC305050)->v)));
                                *(unsigned short *)0xC30EF6C = 0xC;
                                (((struct o4_uint *)0xC305050)->v) = (((((struct o4_int *)0xC305050)->v)) + 0x1);
                                break;
                            case 1:
                                t4 = *(short *)0xC30EF6C;
                                *(unsigned short *)0xC30EF6C = (t4 - 1);
                                if ((int)(short)(t4 - 1) > 0) {
                                } else {
                                    FUN_0c018e74(0x3E);
                                    (((struct oC_uint *)0xC305050)->v) = 0x3E;
                                    *(unsigned short *)0xC30EF6C = 0x20;
                                    (((struct o4_uint *)0xC305050)->v) = (((((struct o4_int *)0xC305050)->v)) + 0x1);
                                }
                                break;
                            case 2:
                                t4 = *(short *)0xC30EF6C;
                                *(unsigned short *)0xC30EF6C = (t4 - 1);
                                if ((int)(short)(t4 - 1) > 0) {
                                } else {
                                    (((struct o4_uint *)0xC305050)->v) = (((((struct o4_int *)0xC305050)->v)) + 0x1);
                                }
                                break;
                            case 3:
                                t4 = FUN_0c01cd2c(0x101);
                                if ((short)t4 == 0) {
                                } else {
                                    FUN_0c05aab6(0x0, 0x3);
                                    (((struct o14_uint *)0xC305050)->v) = 0x1;
                                    (((struct o4_uint *)0xC305050)->v) = (((((struct o4_int *)0xC305050)->v)) + 0x1);
                                    FUN_0c018fd2(((((struct oC_int *)0xC305050)->v)));
                                    *(unsigned short *)0xC30EF6C = 0xC;
                                }
                                break;
                            case 4:
                                t4 = *(short *)0xC30EF6C;
                                *(unsigned short *)0xC30EF6C = (t4 - 1);
                                if ((int)(short)(t4 - 1) > 0) {
                                } else {
                                    FUN_0c018e74(0x22);
                                    (((struct oC_uint *)0xC305050)->v) = 0x22;
                                    *(unsigned short *)0xC30EF6C = 0x98;
                                    (((struct o4_uint *)0xC305050)->v) = (((((struct o4_int *)0xC305050)->v)) + 0x1);
                                }
                                break;
                            case 5:
                                t4 = *(short *)0xC30EF6C;
                                *(unsigned short *)0xC30EF6C = (t4 - 1);
                                if ((int)(short)(t4 - 1) > 0) {
                                } else {
                                    (((struct o0_uint *)0xC305050)->v) = 0x1;
                                    (((struct o8_uint *)0xC305050)->v) = 0x0;
                                    (((struct o4_uint *)0xC305050)->v) = 0x0;
                                }
                                break;
                            }
                            t4 = 0x0;
                        } else {
                            t5 = 0x0;
                            if (t0 == 100) {
                                if (t1 != 0) {
                                    if (t1 != 1) {
                                        if (t1 != 2) {
                                            if (t1 != 3) {
                                                if (t1 != 4) {
                                                    if (t1 != 5) {
                                                        if (t1 != 6) {
                                                        } else {
                                                            t0 = *(short *)0xC30EF6C;
                                                            *(unsigned short *)0xC30EF6C = (t0 - 1);
                                                            if ((int)(short)(t0 - 1) <= 0) {
                                                                (((struct o0_uint *)0xC305050)->v) = 0x1;
                                                                (((struct o8_uint *)0xC305050)->v) = 0x0;
                                                                (((struct o4_uint *)0xC305050)->v) = 0x0;
                                                                (((struct o14_uint *)0xC305050)->v) = 0x1;
                                                            }
                                                        }
                                                        t0 = 0x0;
                                                    } else {
                                                        t5 = *(short *)0xC30EF6C;
                                                        *(unsigned short *)0xC30EF6C = (t5 - 1);
                                                        t0 = 0x0;
                                                        if ((int)(short)(t5 - 1) <= 0) {
                                                            t5 = 0xFFFFFFFD;
                                                            if (((((struct o8_int *)0xC305050)->v)) == 0) {
                                                            } else {
                                                                FUN_0c018e74(0x22);
                                                                (((struct oC_uint *)0xC305050)->v) = 0x22;
                                                                *(unsigned short *)0xC30EF6C = 0x98;
                                                                (((struct o4_uint *)0xC305050)->v) = (((((struct o4_int *)0xC305050)->v)) + 0x1);
                                                                t5 = 0x0;
                                                            }
                                                            t0 = t5;
                                                        }
                                                    }
                                                    t5 = t0;
                                                } else {
                                                    t0 = *(short *)0xC30EF6C;
                                                    *(unsigned short *)0xC30EF6C = (t0 - 1);
                                                    if ((int)(short)(t0 - 1) <= 0) {
                                                        if (((((struct o8_int *)0xC305050)->v)) == 0) {
                                                            FUN_0c0573cc(0xFF000000, 0x0, 0x14);
                                                            t0 = 0x14;
                                                        } else {
                                                            FUN_0c018fd2(((((struct oC_int *)0xC305050)->v)));
                                                            t0 = 0xC;
                                                        }
                                                        *(unsigned short *)0xC30EF6C = t0;
                                                        (((struct o4_uint *)0xC305050)->v) = (((((struct o4_int *)0xC305050)->v)) + 0x1);
                                                    }
                                                    t5 = 0x0;
                                                }
                                                t0 = t5;
                                            } else {
                                                FUN_0c01c714(0xC305058, 0x1, 0x2);
                                                t5 = FUN_0c01cd2c(0x101);
                                                if ((short)t5 != 0) {
                                                    FUN_0c05aab6(0x0, 0x3);
                                                    *(unsigned short *)0xC30EF6C = 0x10;
                                                    (((struct o4_uint *)0xC305050)->v) = (((((struct o4_int *)0xC305050)->v)) + 0x1);
                                                }
                                                t0 = 0x0;
                                            }
                                            t5 = t0;
                                        } else {
                                            t0 = *(short *)0xC30EF6C;
                                            *(unsigned short *)0xC30EF6C = (t0 - 1);
                                            if ((int)(short)(t0 - 1) <= 0) {
                                                (((struct o4_uint *)0xC305050)->v) = (((((struct o4_int *)0xC305050)->v)) + 0x1);
                                            }
                                            t5 = 0x0;
                                        }
                                        t0 = t5;
                                    } else {
                                        t5 = *(short *)0xC30EF6C;
                                        *(unsigned short *)0xC30EF6C = (t5 - 1);
                                        if ((int)(short)(t5 - 1) <= 0) {
                                            FUN_0c018e9c(0x3F, 0xC305058);
                                            (((struct oC_uint *)0xC305050)->v) = 0x3F;
                                            *(unsigned short *)0xC30EF6C = 0x20;
                                            (((struct o4_uint *)0xC305050)->v) = (((((struct o4_int *)0xC305050)->v)) + 0x1);
                                        }
                                        t0 = 0x0;
                                    }
                                    t5 = t0;
                                } else {
                                    FUN_0c018fd2(((((struct oC_int *)0xC305050)->v)));
                                    *(unsigned short *)0xC30EF6C = 0xC;
                                    (((struct o4_uint *)0xC305050)->v) = (((((struct o4_int *)0xC305050)->v)) + 0x1);
                                    (((struct o8_uint *)0xC305050)->v) = 0x1;
                                    t5 = 0x0;
                                }
                            }
                            t4 = t5;
                        }
                        t3 = t4;
                    }
                    t2 = t3;
                }
                t0 = t2;
            } else {
                t2 = FUN_0c03c7ec(0x0);
                if (t2 == 0) {
                    t3 = 0x0;
                    for (;;) {
                        if ((*(signed char *)((0xC30999E + t3))) != (unsigned char)(*(signed char *)((0xC83C306 + t3)))) {
                            break;
                        }
                        t3 = (t3 + 0x1);
                        if ((int)t3 >= (int)0x8) {
                            (((struct o0_uint *)0xC305050)->v) = 0x3;
                            (((struct o4_uint *)0xC305050)->v) = 0x0;
                            FUN_0c01d094();
                            return 0x0;
                        }
                    }
                    if (((((struct o14_int *)0xC305050)->v)) == 0) {
                        (((struct o0_uint *)0xC305050)->v) = 0x63;
                    } else {
                        (((struct o0_uint *)0xC305050)->v) = 0x64;
                    }
                    (((struct o4_uint *)0xC305050)->v) = 0x0;
                } else {
                    if (t2 == -1) {
                    } else {
                        if (((((struct o14_int *)0xC305050)->v)) == 0) {
                            (((struct o0_uint *)0xC305050)->v) = 0x63;
                        } else {
                            (((struct o0_uint *)0xC305050)->v) = 0x64;
                        }
                        (((struct o4_uint *)0xC305050)->v) = 0x0;
                    }
                }
                t0 = 0x0;
            }
            t2 = t0;
        } else {
            t0 = FUN_0c03add8(0xC30EF6C, t1, a6, a7);
            if ((int)t0 < 0) {
            } else {
                if ((t0 & 0x1) == 0) {
                    if (((((struct o14_int *)0xC305050)->v)) == 0) {
                        (((struct o0_uint *)0xC305050)->v) = 0x63;
                    } else {
                        (((struct o0_uint *)0xC305050)->v) = 0x64;
                    }
                    (((struct o4_uint *)0xC305050)->v) = 0x0;
                } else {
                    t3 = FUN_0c03afdc(t0);
                    if ((int)t3 < 0) {
                    } else {
                        if ((t3 & 0x1) == 0) {
                            if (((((struct o14_int *)0xC305050)->v)) != 0) {
                                (((struct o0_uint *)0xC305050)->v) = 0x64;
                            } else {
                                (((struct o0_uint *)0xC305050)->v) = 0x63;
                            }
                        } else {
                            (((struct o0_uint *)0xC305050)->v) = 0x2;
                        }
                        (((struct o4_uint *)0xC305050)->v) = 0x0;
                    }
                }
            }
            t2 = 0x0;
        }
        t0 = t2;
    } else {
        if (t1 != 0) {
            if (t1 != 1) {
            } else {
                t1 = *(short *)0xC30EF6C;
                *(unsigned short *)0xC30EF6C = (t1 - 1);
                if ((int)(short)(t1 - 1) > 0) {
                } else {
                    (((struct oC_uint *)0xC305050)->v) = 0x22;
                    (((struct o4_uint *)0xC305050)->v) = 0x0;
                    *(unsigned char *)0xC309E08 = 0x0;
                    *(unsigned char *)0xC83C324 = 0x0;
                    (((struct o14_uint *)0xC305050)->v) = 0x0;
                    (((struct o0_uint *)0xC305050)->v) = 0x1;
                }
            }
        } else {
            *(unsigned short *)0xC30EF6C = 0x98;
            (((struct o4_uint *)0xC305050)->v) = (((((struct o4_int *)0xC305050)->v)) + 0x1);
            t1 = *(short *)0xC30EF6C;
            *(unsigned short *)0xC30EF6C = (t1 - 1);
            if ((int)(short)(t1 - 1) > 0) {
            } else {
                (((struct oC_uint *)0xC305050)->v) = 0x22;
                (((struct o4_uint *)0xC305050)->v) = 0x0;
                *(unsigned char *)0xC309E08 = 0x0;
                *(unsigned char *)0xC83C324 = 0x0;
                (((struct o14_uint *)0xC305050)->v) = 0x0;
                (((struct o0_uint *)0xC305050)->v) = 0x1;
            }
        }
        t0 = 0x0;
    }
    return t0;
}

int FUN_0c01d294(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    t0 = (((struct o0_int *)0xC305050)->v);
    t1 = (((struct o4_int *)0xC305050)->v);
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 == 3) {
                    t2 = FUN_0c03c5c0(0x0, t1, a6, a7, f4, f5, f6, f7, f8, f9, f10, f11);
                    if (t2 == 0) {
                        (((struct o0_uint *)0xC305050)->v) = 0x4;
                        (((struct o4_uint *)0xC305050)->v) = 0x0;
                        *(unsigned char *)0xC30B6FD = 0x0;
                    } else {
                        if (t2 == -1) {
                        } else {
                            if (((((struct o14_int *)0xC305050)->v)) == 0) {
                                (((struct o0_uint *)0xC305050)->v) = 0x63;
                            } else {
                                (((struct o0_uint *)0xC305050)->v) = 0x64;
                            }
                            (((struct o4_uint *)0xC305050)->v) = 0x0;
                        }
                    }
                    t2 = 0x0;
                } else {
                    if (t0 == 4) {
                        if (t1 != 0) {
                            if (t1 != 1) {
                                if (t1 != 2) {
                                    t3 = 0x0;
                                    if (t1 != 3) {
                                    } else {
                                        t4 = *(short *)0xC30EF6C;
                                        *(unsigned short *)0xC30EF6C = (t4 - 1);
                                        t5 = 0x0;
                                        if ((int)(short)(t4 - 1) > 0) {
                                        } else {
                                            FUN_0c01e9e4();
                                            t5 = 0x1;
                                        }
                                        t3 = t5;
                                    }
                                    t4 = t3;
                                } else {
                                    t3 = *(short *)0xC30EF6C;
                                    *(unsigned short *)0xC30EF6C = (t3 - 1);
                                    if ((int)(short)(t3 - 1) > 0) {
                                        t3 = FUN_0c01cd2c(0x101);
                                        if ((short)t3 == 0) {
                                        } else {
                                            *(unsigned short *)0xC30EF6C = 0x14;
                                            FUN_0c0573cc(0xFF000000, 0x0, 0x14);
                                            (((struct o4_uint *)0xC305050)->v) = (((((struct o4_int *)0xC305050)->v)) + 0x1);
                                        }
                                    } else {
                                        *(unsigned short *)0xC30EF6C = 0x14;
                                        FUN_0c0573cc(0xFF000000, 0x0, 0x14);
                                        (((struct o4_uint *)0xC305050)->v) = (((((struct o4_int *)0xC305050)->v)) + 0x1);
                                    }
                                    t4 = 0x0;
                                }
                                t3 = t4;
                            } else {
                                t4 = *(short *)0xC30EF6C;
                                *(unsigned short *)0xC30EF6C = (t4 - 1);
                                if ((int)(short)(t4 - 1) > 0) {
                                } else {
                                    FUN_0c018e74(0x32);
                                    (((struct oC_uint *)0xC305050)->v) = 0x32;
                                    *(unsigned short *)0xC30EF6C = 0x14C;
                                    (((struct o4_uint *)0xC305050)->v) = (((((struct o4_int *)0xC305050)->v)) + 0x1);
                                }
                                t3 = 0x0;
                            }
                            t4 = t3;
                        } else {
                            FUN_0c018fd2(((((struct oC_int *)0xC305050)->v)));
                            *(unsigned short *)0xC30EF6C = 0xC;
                            (((struct o4_uint *)0xC305050)->v) = (((((struct o4_int *)0xC305050)->v)) + 0x1);
                            t4 = 0x0;
                        }
                        t3 = t4;
                    } else {
                        if (t0 == 99) {
                            switch (t1) {
                            case 0:
                                FUN_0c018fd2(((((struct oC_int *)0xC305050)->v)));
                                *(unsigned short *)0xC30EF6C = 0xC;
                                (((struct o4_uint *)0xC305050)->v) = (((((struct o4_int *)0xC305050)->v)) + 0x1);
                                (((struct o8_uint *)0xC305050)->v) = 0x1;
                                break;
                            case 1:
                                t4 = *(short *)0xC30EF6C;
                                *(unsigned short *)0xC30EF6C = (t4 - 1);
                                if ((int)(short)(t4 - 1) > 0) {
                                } else {
                                    FUN_0c018e74(0x3E);
                                    (((struct oC_uint *)0xC305050)->v) = 0x3E;
                                    *(unsigned short *)0xC30EF6C = 0x20;
                                    (((struct o4_uint *)0xC305050)->v) = (((((struct o4_int *)0xC305050)->v)) + 0x1);
                                }
                                break;
                            case 2:
                                t4 = *(short *)0xC30EF6C;
                                *(unsigned short *)0xC30EF6C = (t4 - 1);
                                if ((int)(short)(t4 - 1) > 0) {
                                } else {
                                    (((struct o4_uint *)0xC305050)->v) = (((((struct o4_int *)0xC305050)->v)) + 0x1);
                                }
                                break;
                            case 3:
                                t4 = FUN_0c01cd2c(0x101);
                                if ((short)t4 == 0) {
                                } else {
                                    FUN_0c05aab6(0x0, 0x3);
                                    (((struct o14_uint *)0xC305050)->v) = 0x1;
                                    (((struct o4_uint *)0xC305050)->v) = (((((struct o4_int *)0xC305050)->v)) + 0x1);
                                    FUN_0c018fd2(((((struct oC_int *)0xC305050)->v)));
                                    *(unsigned short *)0xC30EF6C = 0xC;
                                }
                                break;
                            case 4:
                                t4 = *(short *)0xC30EF6C;
                                *(unsigned short *)0xC30EF6C = (t4 - 1);
                                if ((int)(short)(t4 - 1) > 0) {
                                } else {
                                    (((struct o0_uint *)0xC305050)->v) = 0x1;
                                    (((struct o8_uint *)0xC305050)->v) = 0x0;
                                    (((struct o4_uint *)0xC305050)->v) = 0x0;
                                }
                                break;
                            }
                            t4 = 0x0;
                        } else {
                            t5 = 0x0;
                            if (t0 == 100) {
                                if (t1 != 0) {
                                    if (t1 != 1) {
                                        if (t1 != 2) {
                                            if (t1 != 3) {
                                                if (t1 != 4) {
                                                    if (t1 != 5) {
                                                        if (t1 != 6) {
                                                        } else {
                                                            t0 = *(short *)0xC30EF6C;
                                                            *(unsigned short *)0xC30EF6C = (t0 - 1);
                                                            if ((int)(short)(t0 - 1) <= 0) {
                                                                (((struct o0_uint *)0xC305050)->v) = 0x1;
                                                                (((struct o8_uint *)0xC305050)->v) = 0x0;
                                                                (((struct o4_uint *)0xC305050)->v) = 0x0;
                                                                (((struct o14_uint *)0xC305050)->v) = 0x1;
                                                            }
                                                        }
                                                        t0 = 0x0;
                                                    } else {
                                                        t5 = *(short *)0xC30EF6C;
                                                        *(unsigned short *)0xC30EF6C = (t5 - 1);
                                                        t0 = 0x0;
                                                        if ((int)(short)(t5 - 1) <= 0) {
                                                            t5 = 0xFFFFFFFD;
                                                            if (((((struct o8_int *)0xC305050)->v)) == 0) {
                                                            } else {
                                                                FUN_0c018e74(0x22);
                                                                (((struct oC_uint *)0xC305050)->v) = 0x22;
                                                                *(unsigned short *)0xC30EF6C = 0x98;
                                                                (((struct o4_uint *)0xC305050)->v) = (((((struct o4_int *)0xC305050)->v)) + 0x1);
                                                                t5 = 0x0;
                                                            }
                                                            t0 = t5;
                                                        }
                                                    }
                                                    t5 = t0;
                                                } else {
                                                    t0 = *(short *)0xC30EF6C;
                                                    *(unsigned short *)0xC30EF6C = (t0 - 1);
                                                    if ((int)(short)(t0 - 1) <= 0) {
                                                        if (((((struct o8_int *)0xC305050)->v)) == 0) {
                                                            FUN_0c0573cc(0xFFFFFFFF, 0x0, 0x14);
                                                            t0 = 0x14;
                                                        } else {
                                                            FUN_0c018fd2(((((struct oC_int *)0xC305050)->v)));
                                                            t0 = 0xC;
                                                        }
                                                        *(unsigned short *)0xC30EF6C = t0;
                                                        (((struct o4_uint *)0xC305050)->v) = (((((struct o4_int *)0xC305050)->v)) + 0x1);
                                                    }
                                                    t5 = 0x0;
                                                }
                                                t0 = t5;
                                            } else {
                                                FUN_0c01c714(0xC305058, 0x1, 0x2);
                                                t5 = FUN_0c01cd2c(0x101);
                                                if ((short)t5 != 0) {
                                                    FUN_0c05aab6(0x0, 0x3);
                                                    *(unsigned short *)0xC30EF6C = 0x10;
                                                    (((struct o4_uint *)0xC305050)->v) = (((((struct o4_int *)0xC305050)->v)) + 0x1);
                                                }
                                                t0 = 0x0;
                                            }
                                            t5 = t0;
                                        } else {
                                            t0 = *(short *)0xC30EF6C;
                                            *(unsigned short *)0xC30EF6C = (t0 - 1);
                                            if ((int)(short)(t0 - 1) <= 0) {
                                                (((struct o4_uint *)0xC305050)->v) = (((((struct o4_int *)0xC305050)->v)) + 0x1);
                                            }
                                            t5 = 0x0;
                                        }
                                        t0 = t5;
                                    } else {
                                        t5 = *(short *)0xC30EF6C;
                                        *(unsigned short *)0xC30EF6C = (t5 - 1);
                                        if ((int)(short)(t5 - 1) <= 0) {
                                            FUN_0c018e9c(0x41, 0xC305058);
                                            (((struct oC_uint *)0xC305050)->v) = 0x41;
                                            *(unsigned short *)0xC30EF6C = 0x20;
                                            (((struct o4_uint *)0xC305050)->v) = (((((struct o4_int *)0xC305050)->v)) + 0x1);
                                        }
                                        t0 = 0x0;
                                    }
                                    t5 = t0;
                                } else {
                                    FUN_0c018fd2(((((struct oC_int *)0xC305050)->v)));
                                    *(unsigned short *)0xC30EF6C = 0xC;
                                    (((struct o4_uint *)0xC305050)->v) = (((((struct o4_int *)0xC305050)->v)) + 0x1);
                                    (((struct o8_uint *)0xC305050)->v) = 0x1;
                                    t5 = 0x0;
                                }
                            }
                            t4 = t5;
                        }
                        t3 = t4;
                    }
                    t2 = t3;
                }
                t0 = t2;
            } else {
                t2 = FUN_0c03c7ec(0x0);
                if (t2 == 0) {
                    t3 = 0x0;
                    for (;;) {
                        if ((*(signed char *)((0xC30999E + t3))) != (unsigned char)(*(signed char *)(((0xC83C306 + t3) + 0x0)))) {
                            break;
                        }
                        t3 = (t3 + 0x1);
                        if ((int)t3 >= (int)0x8) {
                            (((struct o0_uint *)0xC305050)->v) = 0x3;
                            FUN_0c01d094();
                            return 0x0;
                        }
                    }
                    if (((((struct o14_int *)0xC305050)->v)) == 0) {
                        (((struct o0_uint *)0xC305050)->v) = 0x63;
                    } else {
                        (((struct o0_uint *)0xC305050)->v) = 0x64;
                    }
                    (((struct o4_uint *)0xC305050)->v) = 0x0;
                } else {
                    if (t2 == -1) {
                    } else {
                        if (((((struct o14_int *)0xC305050)->v)) != 0) {
                            (((struct o0_uint *)0xC305050)->v) = 0x64;
                        } else {
                            (((struct o0_uint *)0xC305050)->v) = 0x63;
                        }
                        (((struct o4_uint *)0xC305050)->v) = 0x0;
                    }
                }
                t0 = 0x0;
            }
            t2 = t0;
        } else {
            t0 = FUN_0c03add8(0xC30EF6C, t1, a6, a7);
            if ((int)t0 < 0) {
            } else {
                if ((t0 & 0x1) == 0) {
                    if (((((struct o14_int *)0xC305050)->v)) != 0) {
                        (((struct o0_uint *)0xC305050)->v) = 0x64;
                    } else {
                        (((struct o0_uint *)0xC305050)->v) = 0x63;
                    }
                    (((struct o4_uint *)0xC305050)->v) = 0x0;
                } else {
                    t1 = FUN_0c03afdc(t0);
                    if ((int)t1 < 0) {
                    } else {
                        if ((t1 & 0x1) == 0) {
                            if (((((struct o14_int *)0xC305050)->v)) != 0) {
                                (((struct o0_uint *)0xC305050)->v) = 0x64;
                            } else {
                                (((struct o0_uint *)0xC305050)->v) = 0x63;
                            }
                        } else {
                            (((struct o0_uint *)0xC305050)->v) = 0x2;
                        }
                        (((struct o4_uint *)0xC305050)->v) = 0x0;
                    }
                }
            }
            t2 = 0x0;
        }
        t0 = t2;
    } else {
        if ((*(signed char *)0xC30B6FD) == 0) {
            (((struct o0_uint *)0xC305050)->v) = 0x3;
        } else {
            (((struct o0_uint *)0xC305050)->v) = 0x1;
        }
        (((struct o14_uint *)0xC305050)->v) = 0x0;
        (((struct oC_uint *)0xC305050)->v) = 0x22;
        t0 = 0x0;
    }
    return t0;
}

int FUN_0c2e4330(int a4)
{
    int stk[11];

    register int R0;
    register int R1;
    register int R2;
    register int R3;
    int R5;
    register int R7;
    register int R8;
    register int R9;
    register int R10;
    register int R11;
    register int R12;
    register int R13;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    v0_0 = a4;
    v0_1 = R13;
    *(int *)((int)stk + 40) = v0_1;
    v0_2 = R12;
    *(int *)((int)stk + 36) = v0_2;
    v0_3 = R11;
    *(int *)((int)stk + 32) = v0_3;
    v0_4 = R10;
    *(int *)((int)stk + 28) = v0_4;
    v0_5 = R9;
    *(int *)((int)stk + 24) = v0_5;
    *(unsigned int *)(((int)stk + 4)) = (unsigned char)v0_0;
    *(unsigned int *)(((int)stk + 16)) = v0_1;
    *(unsigned int *)(((int)stk + 12)) = v0_2;
    *(unsigned int *)(((int)stk + 8)) = v0_3;
    *(unsigned int *)(((int)stk + 4)) = v0_4;
    *(unsigned int *)(((int)stk + 0)) = v0_5;
    R10 = (((unsigned char)v0_0 + 0xC8D6440));
    R11 = (v0_0);
    R12 = (0xC8D6440);
    R13 = ((unsigned char)v0_0);
    if (((int)(unsigned char)v0_0 < (int)0x50)) goto L_C2E4356;
    L_C2E46D4:;
    (((struct o0_uchar *)0xC8D6498)->v) = 0x2;
    L_C2E470E:;
    return R0;
    L_C2E4356:;
    FUN_0c2e635a();
    v0_1 = *(signed char *)(((*(int *)0xC304178) + 0x0));
    R0 = ((unsigned char)v0_1);
    v0_0 = ((((int)stk + 0) + 0x8));
    R9 = (0xC2E732C);
    if (((unsigned char)v0_1 == 33)) goto L_C2E4390;
    if ((R0 == 61)) goto L_C2E43B8;
    if ((R0 == 63)) goto L_C2E437A;
    goto L_C2E470E;
    L_C2E437A:;
    FUN_0c2e732c();
    FUN_0c2e76c8((unsigned char)(*(signed char *)((R10 + 0x0))), 0xA, 0x3, v0_0);
    L_C2E43A2:;
    FUN_0c2e7200(v0_0);
    FUN_0c2e732c();
    v0_0 = FUN_0c2e638e();
    (((struct o1_uchar *)0xC8D6498)->v) = R11;
    R0 = (v0_0);
    goto L_C2E470E;
    L_C2E43B8:;
    FUN_0c2e638e();
    v0_0 = FUN_0c2e6310();
    *(unsigned char *)(((int)stk + 0)) = v0_0;
    v0_1 = (int)(unsigned char)v0_0 >= (int)(unsigned char)(*(signed char *)(((*(int *)(((int)stk + 4))) + 0xC300E90)));
    R0 = (0xC300E90);
    v0_0 = ((unsigned char)v0_0);
    if (v0_1) goto L_C2E43D8;
    goto L_C2E46D4;
    L_C2E43D8:;
    v0_1 = (int)v0_0 <= (int)(unsigned char)(*(signed char *)(((*(int *)(((int)stk + 4))) + 0xC300EE0)));
    R0 = (0xC300EE0);
    if (v0_1) goto L_C2E43E8;
    goto L_C2E46D4;
    L_C2E43E8:;
    R5 = (0x8);
    v0_1 = (0xC8D6778);
    if ((R13 != 27)) goto L_C2E4434;
    v0_2 = (((unsigned char)(*(signed char *)0xC8D645B) ^ v0_0) & 3) == 0;
    if (v0_2) goto L_C2E4434;
    v0_0 = *(signed char *)((v0_1 + 0x6));
    R0 = ((unsigned char)v0_0);
    if ((((unsigned char)v0_0 & R5) == 0)) goto L_C2E440C;
    goto L_C2E46D4;
    L_C2E440C:;
    (((struct o10_uchar *)(v0_1))->v) = ((*(signed char *)(((v0_1 + 0x10) + 0x0))) & 0xF7);
    (((struct o10_uchar *)(v0_1))->v) = ((*(signed char *)(((v0_1 + 0x10) + 0x0))) & 0xFB);
    v0_0 = (signed char)(FUN_0c2d7750()) != 0;
    if (v0_0) goto L_C2E442A;
    L_C2E46DC:;
    FUN_0c2e8a2e(R11, ((int)stk + 0));
    *(unsigned char *)((R10 + 0x0)) = (*(signed char *)(((int)stk + 0)));
    (((struct o1_uchar *)0xC8D6498)->v) = R11;
    *(unsigned char *)0xC8D6527 = ((*(signed char *)((R12 + 0x4))) & 0x7F);
    FUN_0c2e7790();
    v0_0 = *(signed char *)(((R12 + 0x31) + 0x0));
    R0 = ((unsigned char)v0_0);
    if ((((unsigned char)v0_0 & 64) == 0)) goto L_C2E470E;
    v0_0 = *(signed char *)((R12 + 0xE));
    *(unsigned char *)((R12 + 0xE)) = (v0_0 | 0x4);
    R0 = ((v0_0 | 0x4));
    goto L_C2E470E;
    L_C2E442A:;
    *(unsigned char *)0xC8D6788 = ((*(signed char *)0xC8D6788) | 0x8);
    goto L_C2E46DC;
    L_C2E4434:;
    if ((R13 != 21)) goto L_C2E445C;
    v0_2 = (((unsigned char)(*(signed char *)0xC8D6455) ^ v0_0) & 1) == 0;
    if (v0_2) goto L_C2E445C;
    v0_0 = ((unsigned char)(*(signed char *)((v0_1 + 0x6))) & R5) != 0;
    if (v0_0) goto L_C2E4454;
    goto L_C2E46DC;
    L_C2E4454:;
    FUN_0c2e4720();
    goto L_C2E46DC;
    L_C2E445C:;
    R9 = (0xC8D6630);
    if ((R13 != 20)) goto L_C2E44DA;
    v0_1 = (unsigned char)(*(signed char *)0xC8D6454) == v0_0;
    if (v0_1) goto L_C2E44DA;
    R0 = (v0_0);
    if ((v0_0 != 48)) goto L_C2E447C;
    goto L_C2E46D4;
    L_C2E447C:;
    R0 = (v0_0);
    if ((v0_0 != 49)) goto L_C2E4488;
    goto L_C2E46D4;
    L_C2E4488:;
    R0 = (v0_0);
    if ((v0_0 != 50)) goto L_C2E4494;
    goto L_C2E46D4;
    L_C2E4494:;
    R0 = (v0_0);
    if ((v0_0 != 55)) goto L_C2E44A0;
    goto L_C2E46D4;
    L_C2E44A0:;
    R0 = (v0_0);
    if ((v0_0 != 57)) goto L_C2E44AC;
    goto L_C2E46D4;
    L_C2E44AC:;
    R0 = (v0_0);
    if ((v0_0 != 58)) goto L_C2E44B8;
    goto L_C2E46D4;
    L_C2E44B8:;
    v0_1 = FUN_0c2d73f6((*(signed char *)(((int)stk + 0))));
    R0 = ((unsigned char)v0_1);
    if ((v0_0 == (unsigned char)v0_1)) goto L_C2E44C8;
    goto L_C2E46D4;
    L_C2E44C8:;
    *(unsigned char *)((R9 + 0x0)) = (*(signed char *)(((int)stk + 0)));
    FUN_0c2cef80((*(signed char *)((R9 + 0x0))), (*(signed char *)0xC8D6631));
    goto L_C2E46DC;
    L_C2E44DA:;
    if ((R13 != 23)) goto L_C2E44EE;
    v0_1 = (((unsigned char)(*(signed char *)0xC8D6457) ^ v0_0) & 14) != 0;
    if (v0_1) goto L_C2E4502;
    L_C2E44EE:;
    if ((R13 != 39)) goto L_C2E45EE;
    v0_1 = (((unsigned char)(*(signed char *)0xC8D6467) ^ v0_0) & 12) == 0;
    if (v0_1) goto L_C2E45EE;
    L_C2E4502:;
    *(unsigned char *)((R10 + 0x0)) = (*(signed char *)(((int)stk + 0)));
    v0_0 = ((unsigned char)(*(signed char *)(((R12 + 0x27) + 0x0))) & 0xC) != 12;
    if (v0_0) goto L_C2E451A;
    v0_0 = (0xA);
    L_C2E45C4:;
    *(unsigned char *)((R9 + 0x0)) = (*(signed char *)(((unsigned char)v0_0 + 0xC301080)));
    (((struct o14_uchar *)(R12))->v) = (*(signed char *)((R9 + 0x0)));
    *(unsigned char *)0xC8D6631 = (*(signed char *)((0xC3021AD + ((int)((unsigned char)(*(signed char *)(((R12 + 0x17) + 0x0))) & 0x30) >> 4))));
    v0_0 = ((unsigned char)v0_0);
    goto L_C2E46DC;
    L_C2E451A:;
    v0_1 = ((unsigned char)(*(signed char *)(((R12 + 0x27) + 0x0))) & 4) == 0;
    v0_0 = ((R12 + 0x27));
    if (v0_1) goto L_C2E45A8;
    v0_0 = (R5);
    goto L_C2E45C4;
    L_C2E45A8:;
    v0_0 = ((unsigned char)(*(signed char *)((v0_0 + 0x0))) & R5) == 0;
    if (v0_0) goto L_C2E45B4;
    v0_0 = (0x9);
    goto L_C2E45C4;
    L_C2E45B4:;
    v0_0 = *(signed char *)(((R12 + 0x17) + 0x0));
    v0_0 = (((0xE & (unsigned char)v0_0) >> 1));
    goto L_C2E45C4;
    L_C2E45EE:;
    R0 = (R13);
    if ((R13 != 3)) goto L_C2E460A;
    v0_1 = v0_0 == (unsigned char)(*(signed char *)0xC8D6444);
    if (v0_1) goto L_C2E46D4;
    v0_1 = v0_0 == (unsigned char)(*(signed char *)0xC8D6445);
    if (v0_1) goto L_C2E46D4;
    L_C2E460A:;
    R0 = (R13);
    if ((R13 != 4)) goto L_C2E4626;
    v0_1 = v0_0 == (unsigned char)(*(signed char *)0xC8D6443);
    if (v0_1) goto L_C2E46D4;
    v0_1 = v0_0 == (unsigned char)(*(signed char *)0xC8D6445);
    if (v0_1) goto L_C2E46D4;
    L_C2E4626:;
    R0 = (R13);
    if ((R13 != 5)) goto L_C2E4642;
    v0_1 = v0_0 == (unsigned char)(*(signed char *)0xC8D6443);
    if (v0_1) goto L_C2E46D4;
    v0_1 = v0_0 == (unsigned char)(*(signed char *)0xC8D6444);
    if (v0_1) goto L_C2E46D4;
    L_C2E4642:;
    if ((R13 != 0)) goto L_C2E46A0;
    if ((v0_0 != 1)) goto L_C2E4660;
    v0_0 = ((unsigned short)((((struct oB2_short *)((*(int *)0xC8D66E8)))->v)) & 1) == 0;
    if (v0_0) goto L_C2E4660;
    *(unsigned char *)(((int)stk + 0)) = 0x2;
    L_C2E4660:;
    v0_0 = (unsigned char)(*(signed char *)(((int)stk + 0))) != 2;
    if (v0_0) goto L_C2E46DC;
    v0_0 = ((unsigned short)((((struct oB2_short *)((*(int *)0xC8D66E8)))->v)) & 0x2000) == 0;
    if (v0_0) goto L_C2E46DC;
    *(unsigned char *)(((int)stk + 0)) = 0x3;
    goto L_C2E46DC;
    L_C2E46A0:;
    if ((R13 != 35)) goto L_C2E46B6;
    v0_0 = (((struct oB0_short *)((*(int *)0xC8D66E8)))->v);
    R0 = ((unsigned short)v0_0);
    if ((((unsigned short)v0_0 & 128) == 0)) goto L_C2E46D4;
    L_C2E46B6:;
    if ((R13 != 56)) goto L_C2E46DC;
    v0_0 = FUN_0c2e8a12((*(signed char *)(((int)stk + 0))));
    R0 = ((signed char)v0_0);
    if (((signed char)v0_0 == 0)) goto L_C2E46D4;
    v0_0 = FUN_0c2f294e((*(signed char *)(((int)stk + 0))));
    R0 = (v0_0);
    goto L_C2E470E;
    L_C2E4390:;
    FUN_0c2e732c();
    FUN_0c2e76c8((unsigned char)(*(signed char *)((R10 + 0x0))), 0x10, 0x2, v0_0);
    goto L_C2E43A2;
}
