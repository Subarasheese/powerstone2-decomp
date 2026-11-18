/* Straight-line functions with calls and guards (batch gen_s): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_short { short v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o0_ushort { unsigned short v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uchar { char p[0x10]; unsigned char v; };
struct o11_uchar { char p[0x11]; unsigned char v; };
struct o11C_short { char p[0x11C]; short v; };
struct o12_uchar { char p[0x12]; unsigned char v; };
struct o122_ushort { char p[0x122]; unsigned short v; };
struct o13_uchar { char p[0x13]; unsigned char v; };
struct o14_float { char p[0x14]; float v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o18_uchar { char p[0x18]; unsigned char v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o19_uchar { char p[0x19]; unsigned char v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1C_uchar { char p[0x1C]; unsigned char v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o20_int { char p[0x20]; int v; };
struct o20_uchar { char p[0x20]; unsigned char v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o24_uchar { char p[0x24]; unsigned char v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o28_short { char p[0x28]; short v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o28_ushort { char p[0x28]; unsigned short v; };
struct o29_uchar { char p[0x29]; unsigned char v; };
struct o2A_uchar { char p[0x2A]; unsigned char v; };
struct o2C_short { char p[0x2C]; short v; };
struct o2C_ushort { char p[0x2C]; unsigned short v; };
struct o2E_short { char p[0x2E]; short v; };
struct o2E_ushort { char p[0x2E]; unsigned short v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o30_float { char p[0x30]; float v; };
struct o30_short { char p[0x30]; short v; };
struct o32_short { char p[0x32]; short v; };
struct o32_ushort { char p[0x32]; unsigned short v; };
struct o34_float { char p[0x34]; float v; };
struct o34_short { char p[0x34]; short v; };
struct o34_uint { char p[0x34]; unsigned int v; };
struct o34_ushort { char p[0x34]; unsigned short v; };
struct o36_short { char p[0x36]; short v; };
struct o38_float { char p[0x38]; float v; };
struct o38_short { char p[0x38]; short v; };
struct o38_uint { char p[0x38]; unsigned int v; };
struct o38_ushort { char p[0x38]; unsigned short v; };
struct o3A_short { char p[0x3A]; short v; };
struct o3C_float { char p[0x3C]; float v; };
struct o3C_short { char p[0x3C]; short v; };
struct o3C_uint { char p[0x3C]; unsigned int v; };
struct o3E_short { char p[0x3E]; short v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o48_uchar { char p[0x48]; unsigned char v; };
struct o5_uchar { char p[0x5]; unsigned char v; };
struct o500_short { char p[0x500]; short v; };
struct o500_ushort { char p[0x500]; unsigned short v; };
struct o502_short { char p[0x502]; short v; };
struct o502_ushort { char p[0x502]; unsigned short v; };
struct o504_int { char p[0x504]; int v; };
struct o504_uint { char p[0x504]; unsigned int v; };
struct o508_int { char p[0x508]; int v; };
struct o508_uint { char p[0x508]; unsigned int v; };
struct o50C_int { char p[0x50C]; int v; };
struct o50C_uint { char p[0x50C]; unsigned int v; };
struct o54_uchar { char p[0x54]; unsigned char v; };
struct o6_uchar { char p[0x6]; unsigned char v; };
struct o6_ushort { char p[0x6]; unsigned short v; };
struct o7_uchar { char p[0x7]; unsigned char v; };
struct o7C_uchar { char p[0x7C]; unsigned char v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uchar { char p[0x8]; unsigned char v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o814_int { char p[0x814]; int v; };
struct o9_uchar { char p[0x9]; unsigned char v; };
struct oA_uchar { char p[0xA]; unsigned char v; };
struct oB_uchar { char p[0xB]; unsigned char v; };
struct oB0_short { char p[0xB0]; short v; };
struct oC_uchar { char p[0xC]; unsigned char v; };
struct oC18_int { char p[0xC18]; int v; };
struct oC1C_int { char p[0xC1C]; int v; };
struct oC1C_uint { char p[0xC1C]; unsigned int v; };
struct oC20_int { char p[0xC20]; int v; };
struct oC20_uint { char p[0xC20]; unsigned int v; };
struct oD_uchar { char p[0xD]; unsigned char v; };
struct oE_uchar { char p[0xE]; unsigned char v; };
struct oF_uchar { char p[0xF]; unsigned char v; };
int FUN_0c0e3510(void);
int FUN_0c1772e0(int, int);
int FUN_0c184ddc(void);
int FUN_0c185054(int);
int FUN_0c185080(int, int, int);
int FUN_0c187a88(int, int, int);
int FUN_0c18c9fc(void);
int FUN_0c18d852(int, int, int, int);
int FUN_0c18dad6(int);
int FUN_0c18dae8(int, int, int);
int FUN_0c18dcf2(int, int);
int FUN_0c18dd02(int);
int FUN_0c18dd06(int, int);
int FUN_0c18dfd6(void);
int FUN_0c18dfe6(void);
int FUN_0c18e01e(void);
int FUN_0c18e064(int);
int FUN_0c18e0c2(int);
int FUN_0c18e10c(int);
int FUN_0c18e130(int);
int FUN_0c18e4ba(void);
int FUN_0c18eba8(int, int, int);
int FUN_0c18f8b2(int, int);
int FUN_0c18fdb0(void);
int FUN_0c190c66(void);
int FUN_0c19c678(int, int, int);
int FUN_0c2b5f20(int);
extern int FUN_0c2b9b0c();
int FUN_0c2cc0a0(void);
int FUN_0c2cf6f6(int);
int FUN_0c2cf746(int, int);
int FUN_0c2d4768(int, int);
int FUN_0c2d487c(int, int, int);
int FUN_0c2d4ad2(void);
int FUN_0c2d65ae(int);
int FUN_0c2d6dd2(void);
int FUN_0c2d6e1e(int, int, int, int, int, int, int);
int FUN_0c2d7662(void);
int FUN_0c2d7778(int);
int FUN_0c2d7806(int);
int FUN_0c2d8824(int);
int FUN_0c2eb6fe(int, int, int, int);
int FUN_0c2ec10c(int, int, int, int, int, int, int, int, int);
int FUN_0c2ec410(int, int);
int FUN_0c2ec430(int);
int FUN_0c2ec67a(int);
int FUN_0c2ee948(void);
int FUN_0c2ef3bc(void);
int FUN_0c2ef936(int);
int FUN_0c2f397e(void);
int FUN_0c2f3bc8(void);
int FUN_0c2faa70(void);
int FUN_0c2faaac(void);
int FUN_0c2fad46(void);
int FUN_0c2fbc7c(void);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int kmiAllocateFB(int);
int kmiCalculateWorkSize(int);
int kmiCheckSysConfigSetting(int);
int kmiInitVertexBufferDesc(int);
int kmiSetDisplayClipSize(void);
int kmiSetFBSurfaceDesc(int);
int kmiSetNativeBufferInfo(int);
int kmiSetVertexBufferBase(int);
int kmyInitAllocator(int, int, int, int, int);
int kmySetDisplayFrameBuffer(int, int);
int kmySetStripBuffer(int, int);
int kmyZeroMemory(int, int);
int math_atan_angle16(float);
float math_cos_angle16(int);
float math_tan_angle16(int);
int memset(int, int, int);
int nlMultiMatrix(int);
int nlSearchPalette(int, int);
int nlSetPaletteData(int, int, int);
int res_texture_slot_tick_release(int);
int thunk_FUN_0c1831ec(void);
int FUN_0c2d392c(int a4, int a5);
int FUN_0c2d88d4(int a4, int a5, int a6, int a7);
int kmSetSystemConfiguration(int a4);
int FUN_0c2f30bc(void);
int nlPerspective_L_0c079730(int a4, float f4, float f5, float f6);
int nlPerspective_L(int a4, float f4, float f5, float f6);
int FUN_0c2e8b6e(int a4, int a5);
int FUN_0c2ee770(int a4, int a5);
int FUN_0c2cf554(int a4);
int FUN_0c2f8fc0(int a4, int a5, int a6, int a7);
int FUN_0c185284(int a4, int a5);
int FUN_0c19c4d8(int a4, int a5, int a6, int a7);
void FUN_0c18408e(void);
int FUN_0c2d6c38(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12);
int FUN_0c2faac8(int a4, int a5, int a6, int a7);
int FUN_0c17f8d0(int a4, int a5);
int kmyGetDMAHANDLE(int a4);

int FUN_0c2d392c(int a4, int a5)
{
    int stk[9];

    register int R1;
    register int R2;
    register int R3;
    register int R6;
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
    register int v0_6;
    register int v0_7;
    v0_0 = a4;
    v0_0 = a5;
    v0_0 = R13;
    *(int *)((int)stk + 32) = v0_0;
    v0_2 = R12;
    *(int *)((int)stk + 28) = v0_2;
    v0_3 = R11;
    *(int *)((int)stk + 24) = v0_3;
    v0_4 = R10;
    *(int *)((int)stk + 20) = v0_4;
    v0_5 = R9;
    *(int *)((int)stk + 16) = v0_5;
    v0_6 = R8;
    *(int *)((int)stk + 12) = v0_6;
    v0_7 = *(int *)0xC8D25F0;
    v0_1 = (unsigned char)(*(signed char *)((v0_7 + 0x48))) != 0xAA;
    *(unsigned int *)(((int)stk + 24)) = v0_0;
    *(unsigned int *)(((int)stk + 20)) = v0_2;
    *(unsigned int *)(((int)stk + 16)) = v0_3;
    *(unsigned int *)(((int)stk + 12)) = v0_4;
    *(unsigned int *)(((int)stk + 8)) = v0_5;
    *(unsigned int *)(((int)stk + 4)) = v0_6;
    R13 = (v0_7);
    v0_0 = (0xC8D25F0);
    if (v0_1) goto L_C2D3986;
    (((struct o48_uchar *)(R13))->v) = (FUN_0c2d4768(0x309, 0x1));
    v0_1 = (unsigned char)(*(signed char *)(((*(int *)((v0_0 + 0x0))) + 0x48))) != 0xC1;
    if (v0_1) goto L_C2D3970;
    FUN_0c2d487c(0x2E3, 0x0, 0x1);
    L_C2D3970:;
    v0_1 = (unsigned char)(*(signed char *)(((*(int *)((v0_0 + 0x0))) + 0x48))) != 0xCE;
    if (v0_1) goto L_C2D3986;
    FUN_0c2d487c(0x2E3, 0x5, 0x1);
    L_C2D3986:;
    FUN_0c2ec410(((int)stk + 4), 0xC8);
    R10 = (0xC2EC410);
    R11 = (0xC8D2698);
    R12 = (0xC2D65AE);
    R13 = (0xC2EC430);
    R8 = (0x4EC);
    R9 = (0x4D8);
    L_C2D399A:;
    v0_1 = *(int *)((v0_0 + 0x0));
    (((struct o14_uchar *)(v0_1))->v) = ((*(signed char *)(((v0_1 + 0x14) + 0x0))) & 0xF7);
    v0_1 = *(int *)((v0_0 + 0x0));
    *(unsigned char *)((v0_1 + 0xC)) = ((*(signed char *)((v0_1 + 0xC))) & 0xF7);
    v0_1 = *(int *)((v0_0 + 0x0));
    (((struct o24_uchar *)(v0_1))->v) = ((*(signed char *)(((v0_1 + 0x24) + 0x0))) & 0xFE);
    v0_1 = *(int *)((v0_0 + 0x0));
    (((struct o24_uchar *)(v0_1))->v) = ((*(signed char *)(((v0_1 + 0x24) + 0x0))) & 0xFB);
    v0_1 = *(int *)((v0_0 + 0x0));
    (((struct o54_uchar *)(v0_1))->v) = ((*(signed char *)(((v0_1 + 0x54) + 0x0))) & 0xFD);
    v0_1 = *(int *)((v0_0 + 0x0));
    (((struct o1C_uchar *)(v0_1))->v) = ((*(signed char *)(((v0_1 + 0x1C) + 0x0))) | 0x8);
    v0_1 = ((unsigned char)(*(signed char *)((0x48 + (*(int *)((v0_0 + 0x0)))))) & 0xF0) != 0xC0;
    if (v0_1) goto L_C2D3A88;
    v0_1 = *(int *)((v0_0 + 0x0));
    (((struct o7C_uchar *)(v0_1))->v) = ((*(signed char *)(((v0_1 + 0x7C) + 0x0))) | 0x1);
    FUN_0c2ec410(0xC8D2698, 0xA);
    L_C2D3A06:;
    v0_1 = (unsigned char)(*(signed char *)((0x50 + (*(int *)((v0_0 + 0x0)))))) != 67;
    if (v0_1) goto L_C2D39F8;
    *(int *)((int)stk + 0) = 0x0;
    v0_1 = (signed char)(FUN_0c2eb6fe(0x1, 0x43, 0x1, 0x0)) != 0;
    if (v0_1) goto L_C2D3A30;
    v0_0 = (0x4E2);
    L_C2D3AC8:;
    v0_0 = FUN_0c2d65ae(v0_0);
    v0_1 = (v0_0);
    L_C2D3ADE:;
    *(volatile int *)((int)stk + 8);
    *(volatile int *)((int)stk + 12);
    *(volatile int *)((int)stk + 16);
    *(volatile int *)((int)stk + 20);
    *(volatile int *)((int)stk + 24);
    return v0_1;
    L_C2D3A30:;
    FUN_0c2ec410(0xC8D2698, 0xA);
    L_C2D3A72:;
    v0_1 = (unsigned char)((*(signed char *)((((*(int *)((v0_0 + 0x0))) + 0x7C) + 0x0))) & 0x1) != 0;
    if (v0_1) goto L_C2D3A64;
    L_C2D3A8E:;
    v0_1 = *(int *)((v0_0 + 0x0));
    (((struct o24_uchar *)(v0_1))->v) = ((*(signed char *)(((v0_1 + 0x24) + 0x0))) | 0x4);
    v0_1 = *(int *)((v0_0 + 0x0));
    (((struct o20_uchar *)(v0_1))->v) = ((*(signed char *)(((v0_1 + 0x20) + 0x0))) | 0x1);
    v0_1 = *(int *)((v0_0 + 0x0));
    (((struct o24_uchar *)(v0_1))->v) = ((*(signed char *)(((v0_1 + 0x24) + 0x0))) | 0x1);
    FUN_0c2ec410(0xC8D2698, 0x6);
    L_C2D3AB2:;
    v0_1 = (signed char)(FUN_0c2ec430((*(int *)((R11 + 0x0))))) == 0;
    if (v0_1) goto L_C2D3AB2;
    v0_1 = (signed char)(FUN_0c2ec430((*(int *)(((int)stk + 4))))) == 0;
    if (v0_1) goto L_C2D3AD0;
    v0_0 = (0x4F6);
    goto L_C2D3AC8;
    L_C2D3AD0:;
    v0_2 = *(signed char *)((((*(int *)((v0_0 + 0x0))) + 0x3C) + 0x0));
    v0_1 = (v0_2);
    if (((v0_2 & 16) != 0)) goto L_C2D3ADE;
    goto L_C2D399A;
    L_C2D3A64:;
    v0_1 = (signed char)(FUN_0c2ec430((*(int *)((R11 + 0x0))))) == 0;
    if (v0_1) goto L_C2D3A72;
    v0_0 = (R8);
    goto L_C2D3AC8;
    L_C2D39F8:;
    v0_1 = (signed char)(FUN_0c2ec430((*(int *)((R11 + 0x0))))) == 0;
    if (v0_1) goto L_C2D3A06;
    v0_0 = (R9);
    goto L_C2D3AC8;
    L_C2D3A88:;
    FUN_0c2d4ad2();
    goto L_C2D3A8E;
}

int FUN_0c2d88d4(int a4, int a5, int a6, int a7)
{
    int stk[7];

    register int R1;
    register int R2;
    register int R3;
    register int R8;
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
    register int v0_6;
    register int v0_7;
    v0_3 = a4;
    v0_0 = a6;
    v0_2 = a7;
    v0_1 = R13;
    *(int *)((int)stk + 24) = v0_1;
    v0_5 = R12;
    *(int *)((int)stk + 20) = v0_5;
    v0_6 = R11;
    *(int *)((int)stk + 16) = v0_6;
    v0_7 = R10;
    *(int *)((int)stk + 12) = v0_7;
    v0_4 = ((((struct o504_int *)(v0_3))->v)) == ((((struct o508_int *)(v0_3))->v));
    *(unsigned int *)(((int)stk + 12)) = v0_1;
    *(unsigned int *)(((int)stk + 8)) = v0_5;
    *(unsigned int *)(((int)stk + 4)) = v0_6;
    *(unsigned int *)(((int)stk + 0)) = v0_7;
    R13 = (0x0);
    v0_1 = (v0_3);
    if (v0_4) goto L_C2D88FC;
    v0_3 = (((struct o504_int *)(v0_1))->v);
    v0_4 = (((struct o508_int *)(v0_1))->v);
    R13 = ((v0_4 - v0_3));
    L_C2D88FC:;
    v0_4 = *(int *)((((*(int *)(((*(int *)0xC8BFFE8) + 0x4))) << 2) + 0xC300640));
    v0_7 = *(int *)0xC8D3A44;
    (((struct o50C_uint *)(v0_1))->v) = (((((struct o50C_int *)(v0_1))->v)) + ((int)((unsigned int)(v0_7 * v0_4) % (unsigned int)0x3E8)));
    v0_6 = (unsigned int)((((struct o50C_int *)(v0_1))->v)) < (unsigned int)0x3E8;
    v0_5 = (0x50C);
    R11 = (((int)((unsigned int)(v0_7 * v0_4) / (unsigned int)0x3E8)));
    R12 = (0xC8BFFE8);
    v0_3 = (0x3E8);
    v0_4 = ((v0_7 * v0_4));
    if (v0_6) goto L_C2D8946;
    *(unsigned int *)((v0_1 + v0_5)) = ((*(int *)((v0_1 + v0_5))) - v0_3);
    R11 = ((R11 + 0x1));
    L_C2D8946:;
    v0_3 = (*(signed char *)(((*(int *)((R12 + 0x0))) + 0x0))) == 0;
    if (v0_3) goto L_C2D8950;
    R11 = (0x80);
    L_C2D8950:;
    R10 = (0x3FF);
    L_C2D8A12:;
    if (!((R13 != R11))) goto L_C2D8A16;
    v0_3 = ((((struct o500_short *)(v0_1))->v)) != 0;
    if (v0_3) goto L_C2D89A6;
    v0_3 = (*(signed char *)(((*(int *)((R12 + 0x0))) + 0x0))) != 0;
    if (v0_3) goto L_C2D8A16;
    v0_3 = (unsigned char)(FUN_0c2d8824(v0_1)) == 0;
    if (v0_3) goto L_C2D8A16;
    goto L_C2D89A6;
    L_C2D8A16:;
    if (((unsigned int)R13 <= (unsigned int)0x0)) goto L_C2D8A7C;
    *(unsigned int *)(((int)stk + 0)) = ((((struct o504_int *)(v0_1))->v));
    *(unsigned int *)(((int)stk + 4)) = R13;
    v0_2 = ((int (*)(int, int, int, int))(FUN_0c2b9b0c))(((int)stk + 0), v0_4, v0_0, v0_2);
    v0_0 = (*(int *)((v0_2 + 0x0))) == R13;
    v0_4 = (v0_2);
    if (v0_0) goto L_C2D8A70;
    (((struct o504_uint *)(v0_1))->v) = (((((struct o504_int *)(v0_1))->v)) + (*(int *)((v0_4 + 0x0))));
    v0_2 = *(int *)((v0_4 + 0x0));
    v0_5 = (0x504);
    v0_3 = (v0_2);
    v0_0 = ((0x100 + v0_1));
    if (((unsigned int)v0_2 >= (unsigned int)R13)) goto L_C2D8A5A;
    L_C2D8A46:;
    v0_2 = *(int *)((v0_1 + v0_5));
    *(unsigned int *)((v0_1 + v0_5)) = (v0_2 + 0x1);
    *(unsigned char *)((v0_0 + 0x0)) = (*(signed char *)((((v0_2 + 0x1) - 1) + 0x0)));
    v0_2 = (unsigned int)(v0_3 + 0x1) < (unsigned int)R13;
    v0_3 = ((v0_3 + 0x1));
    v0_0 = ((v0_0 + 0x1));
    if (v0_2) goto L_C2D8A46;
    L_C2D8A5A:;
    *(unsigned int *)((v0_1 + v0_5)) = (0x100 + v0_1);
    *(unsigned int *)((v0_1 + (v0_5 + 0x4))) = ((R13 + (0x100 + v0_1)) - (*(int *)((v0_4 + 0x0))));
    L_C2D8A7C:;
    v0_5 = (0x0);
    L_C2D8A7E:;
    *(volatile int *)((int)stk + 8);
    *(volatile int *)((int)stk + 12);
    return v0_5;
    L_C2D8A70:;
    (((struct o508_uint *)(v0_1))->v) = (0x100 + v0_1);
    (((struct o504_uint *)(v0_1))->v) = (0x100 + v0_1);
    goto L_C2D8A7C;
    L_C2D89A6:;
    v0_3 = (((struct o502_short *)(v0_1))->v);
    v0_3 = (v0_3);
    L_C2D89FC:;
    v0_5 = ((((struct o500_short *)(v0_1))->v)) != 0;
    if (!(v0_5)) goto L_C2D8A04;
    v0_5 = (((((struct o508_int *)(v0_1))->v)) - (0x100 + v0_1)) == R10;
    if (v0_5) goto L_C2D8A16;
    v0_5 = (unsigned char)((*(signed char *)((((*(int *)(((*(int *)((R12 + 0x0))) + 0x8))) + 0x30) + 0x0))) & 0x1) == 0;
    if (v0_5) goto L_C2D89D2;
    v0_5 = (0x1);
    goto L_C2D8A7E;
    L_C2D8A04:;
    v0_3 = (((((struct o508_int *)(v0_1))->v)) - (0x100 + v0_1)) == R10;
    if (v0_3) goto L_C2D8A16;
    goto L_C2D8A12;
    L_C2D89D2:;
    v0_5 = (((struct o508_int *)(v0_1))->v);
    (((struct o508_uint *)(v0_1))->v) = (v0_5 + 0x1);
    *(unsigned char *)((((v0_5 + 0x1) - 0x1) + 0x0)) = (*(signed char *)((((unsigned short)v0_3 + v0_1) + 0x0)));
    (((struct o502_ushort *)(v0_1))->v) = (((((struct o502_short *)(v0_1))->v)) + 0x1);
    v0_5 = (R13 + 0x1) == R11;
    (((struct o500_ushort *)(v0_1))->v) = (((((struct o500_short *)(v0_1))->v)) - 1);
    R13 = ((R13 + 0x1));
    if (v0_5) goto L_C2D8A04;
    v0_3 = ((v0_3 + 0x1));
    goto L_C2D89FC;
}

int kmSetSystemConfiguration(int a4)
{
    int stk[2];
    register int t3;
    register int t4;
    register int t13;
    register int t30;
    register int t35;
    register int t39;
    register int t58;
    register int t59;
    register int t18;
    register int t19;
    int t71;

    kmiCheckSysConfigSetting(a4);
    if (((*(int *)((a4 + 0x4))) & 0x100) != 0) {
        (((struct o24_uint *)0xC8BF0E4)->v) = 0x1;
    } else {
        (((struct o24_uint *)0xC8BF0E4)->v) = 0x0;
    }
    t3 = *(int *)((a4 + 0x20));
    *(unsigned int *)(((int)stk + 4)) = t3;
    t4 = *(int *)((a4 + 0x18));
    *(int *)((int)stk + 0) = (t3 + (((unsigned int)((((t4 << 1) + t4) << 2) << 1) >> 2) << 2));
    kmyInitAllocator(((((struct o4_int *)0xC8BEF9C)->v)), (*(int *)((a4 + 0x18))), (*(int *)(((int)stk + 4))), (*(int *)((a4 + 0x1C))), (t3 + (((unsigned int)((((t4 << 1) + t4) << 2) << 1) >> 2) << 2)));
    t13 = 0x0;
    if (((*(int *)((a4 + 0x4))) & 0x100000) != 0) {
        t13 = 0x1;
    }
    FUN_0c2b5f20(t13);
    if (((*(int *)((a4 + 0x4))) & 2) != 0) {
        (((struct o4_uint *)0xC8BE7D0)->v) = 0x1;
        t18 = 0x1;
        t19 = (*(int *)((a4 + 0x10)));
    } else {
        (((struct o4_uint *)0xC8BE7D0)->v) = 0x0;
        t18 = 0x0;
        t19 = 0x0;
    }
    kmySetStripBuffer(t18, t19);
    FUN_0c2cc0a0();
    kmiCalculateWorkSize(a4);
    kmiSetNativeBufferInfo(a4);
    kmiAllocateFB(a4);
    kmiSetVertexBufferBase(a4);
    kmiInitVertexBufferDesc(a4);
    kmiSetFBSurfaceDesc(a4);
    kmiSetDisplayClipSize();
    t30 = 0x0;
    for (;;) {
        *(unsigned int *)((t30 + 0xC8BFF6C)) = (*(int *)(((0xC8BEF80 + t30) + 0x0)));
        t30 = (t30 + 0x4);
        if ((unsigned int)t30 >= (unsigned int)0x8) {
            break;
        }
    }
    if ((unsigned int)0x0 < (unsigned int)(*(int *)((a4 + 0xC)))) {
        t35 = 0x0;
        for (;;) {
            *(unsigned int *)(((t35 << 2) + 0xC8BFF74)) = (*(int *)(((0xC8BEF88 + (t35 << 2)) + 0x0)));
            if (((*(int *)((a4 + 0x4))) & 0x1) != 0) {
                t39 = *(int *)(((t35 << 2) + (*(int *)((a4 + 0x8)))));
                *(unsigned int *)(((int)stk + 4)) = t39;
                kmyZeroMemory(((*(int *)(((*(int *)(((int)stk + 4))) + 0x1C))) + 0xA5000000), (*(int *)((t39 + 0x14))));
            }
            t35 = (t35 + 0x1);
            if ((unsigned int)t35 >= (unsigned int)(*(int *)((a4 + 0xC)))) {
                break;
            }
        }
    }
    (((struct o38_uint *)0xC8BEF9C)->v) = 0x1E;
    (((struct o0_uint *)0xC8BEF9C)->v) = 0x0;
    (((struct o34_uint *)0xC8BF0E4)->v) = (*(int *)((a4 + 0x28)));
    (((struct o38_uint *)0xC8BF0E4)->v) = 0x2;
    (((struct o3C_uint *)0xC8BF0E4)->v) = (*(int *)((a4 + 0xC)));
    *(unsigned int *)0xC8BFFB4 = ((((struct o20_int *)0xC8BE7D0)->v));
    (((struct o3C_uint *)0xC8BEF9C)->v) = 0x0;
    (((struct o0_uint *)0xC8BEFDC)->v) = 0x0;
    (((struct o4_uint *)0xC8BEFDC)->v) = 0x0;
    t58 = 0x0;
    for (;;) {
        t59 = 0x0;
        for (;;) {
            *(unsigned int *)((t59 + (0xC8BEFFC + (((t58 << 2) + t58) << 2)))) = 0x0;
            t59 = (t59 + 0x4);
            if ((unsigned int)t59 >= (unsigned int)0x14) {
                break;
            }
        }
        t58 = (t58 + 0x1);
        if ((unsigned int)t58 >= (unsigned int)0x8) {
            break;
        }
    }
    if ((((((struct o4_int *)0xC8BE7D0)->v)) == 0) && (t71 = (((struct o0_int *)0xC8BE7D0)->v), t71 == 0)) {
    } else {
        kmySetDisplayFrameBuffer(((((struct o0_int *)0xC8BFF74)->v)), ((((struct o4_int *)0xC8BFF74)->v)));
    }
    (((struct o0_uint *)0xC8BF0E4)->v) = 0x1;
    return 0x0;
}

int FUN_0c2f30bc(void)
{
    int t0;
    int t1;
    register int t2;
    register int t3;
    register int t4;

    (((struct o0_uchar *)0xC8D678F)->v) = 0x0;
    (((struct o2_uchar *)0xC8D678F)->v) = ((*(signed char *)0xC8D6791) & 0x37);
    (((struct o4_uchar *)0xC8D678F)->v) = 0x0;
    (((struct o5_uchar *)0xC8D678F)->v) = ((*(signed char *)0xC8D6794) & 0x18);
    (((struct o6_uchar *)0xC8D678F)->v) = 0x10;
    FUN_0c2fbc7c();
    (((struct o1_uchar *)0xC8DA0E8)->v) = 0x0;
    (((struct o2_uchar *)0xC8DA0E8)->v) = 0x0;
    *(unsigned char *)0xC8DFFCF = 0x0;
    (((struct o4_uchar *)0xC8DA0E8)->v) = 0x0;
    (((struct o18_uchar *)0xC8DA0E8)->v) = 0x0;
    (((struct o19_uchar *)0xC8DA0E8)->v) = 0x0;
    t2 = *(short *)0xC8D67B8;
    if (((0x80 & (unsigned short)t2) != 0) && ((0x4 & (unsigned short)t2) == 0)) {
        t3 = 0x4;
        if ((0x2 & (unsigned short)t2) != 0) {
            t4 = 0x0;
            if ((0x40 & (unsigned short)t2) != 0) {
                t2 = *(signed char *)0xC8D679C;
                t4 = ((((unsigned int)((unsigned int)(unsigned char)t2 >> 2) >> 1) << 2) + ((unsigned int)((unsigned int)(unsigned char)t2 >> 2) >> 1));
            }
            t2 = FUN_0c2ec410(0xC8DFFC8, t4);
            (((struct o0_uchar *)0xC8DA0E8)->v) = 0x6;
            t3 = t2;
        }
        t2 = t3;
    } else {
        FUN_0c2f397e();
        (((struct o5_uchar *)0xC8DA0E8)->v) = 0x0;
        t3 = *(short *)0xC8D67B8;
        if ((((unsigned short)t3 & 0x2) == 0) && (((0x1 & (unsigned short)t3) == 0) && (((0x40 & (unsigned short)t3) != 0) && (t0 = *(signed char *)0xC8D67A2, ((unsigned char)t0 & 64) == 0)))) {
            (((struct o5_uchar *)0xC8DA0E8)->v) = 0x1;
            (((struct o4_uchar *)0xC8D678F)->v) = ((*(signed char *)0xC8D6793) | 0x80);
            (((struct o4_uchar *)0xC8D678F)->v) = ((*(signed char *)0xC8D6793) & 0xFE);
            FUN_0c2f3bc8();
            t0 = FUN_0c2ec410(0xC8DFFC8, 0x14);
            (((struct o0_uchar *)0xC8DA0E8)->v) = 0x4;
            t3 = t0;
        } else {
            FUN_0c2ec67a(0x64);
            (((struct o4_uchar *)0xC8D678F)->v) = ((*(signed char *)0xC8D6793) | 0x1);
            (((struct o6_ushort *)0xC8E00BE)->v) = 0x0;
            (((struct o0_ushort *)0xC8E00BE)->v) = 0x0;
            if (((unsigned char)(*(signed char *)0xC8D679C) & 248) == 0) {
                t0 = (FUN_0c2ec410(0xC8DFFC8, 0xFFFFFF00));
            } else {
                t4 = 0x1F4;
                if (((*(signed char *)0xC8DFFA6) == 0) && (t1 = *(short *)0xC8D67B8, ((unsigned short)t1 & 128) != 0)) {
                } else {
                    t1 = *(signed char *)0xC8D679C;
                    t4 = ((((((0xF8 & (unsigned char)t1) >> 1) >> 1) >> 1) << 2) + ((((0xF8 & (unsigned char)t1) >> 1) >> 1) >> 1));
                }
                t0 = (FUN_0c2ec410(0xC8DFFC8, t4));
            }
            (((struct o0_uchar *)0xC8DA0E8)->v) = 0x2;
            t3 = t0;
        }
        t2 = t3;
    }
    return t2;
}

int nlPerspective_L_0c079730(int a4, float f4, float f5, float f6)
{
    int stk[20];
    register int t0;
    register float t4;
    register int t6;
    register float u14;
    register float u15;
    register float u24;
    register int t16;
    register int t26;
    register float t27;
    register float u28;
    register float u31;
    register float u32;
    register float u33;
    register float u36;
    register float u37;
    register float u38;
    register float u41;
    register float u42;

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(float *)(((int)stk + 8)) = f4;
    t0 = *(int *)(((int)stk + 4));
    *(float *)(((int)stk + 0)) = (1.0f / (math_tan_angle16((t0 >> 1))));
    if (((((struct o30_float *)0xC2A6108)->v)) != 0.0f) {
        t4 = math_tan_angle16((t0 >> 1));
        t6 = math_atan_angle16((t4 * (((((struct o30_float *)0xC2A6108)->v)) + 1.0f)));
        *(float *)(((int)stk + 12)) = (1.0f / (math_cos_angle16(t6)));
    } else {
        *(float *)(((int)stk + 12)) = (1.0f / (math_cos_angle16((t0 >> 1))));
    }
    u14 = *(float *)(((int)stk + 0));
    u15 = *(float *)(((int)stk + 8));
    u24 = (1.0f / (u15 * u14));
    if (((((struct o34_float *)0xC2A6108)->v)) != 0.0f) {
        t16 = math_atan_angle16((1.0f / (u15 * u14)));
        *(unsigned int *)(((int)stk + 4)) = t16;
        u24 = ((math_tan_angle16(t16)) * (((((struct o34_float *)0xC2A6108)->v)) + 1.0f));
    }
    t26 = math_atan_angle16(u24);
    t27 = math_cos_angle16(t26);
    (((struct o30_float *)0xC2A6108)->v) = 0.0f;
    (((struct o34_float *)0xC2A6108)->v) = 0.0f;
    u28 = *(float *)0xC17D0C4;
    u31 = (u15 * u14);
    u32 = ((*(float *)(((int)stk + 0))) * (*(float *)(((int)stk + 12))));
    u33 = (u31 * (1.0f / t27));
    (((struct o0_float *)0xC2A6108)->v) = (u32 * u28);
    (((struct o4_float *)0xC2A6108)->v) = (u33 * u28);
    (((struct o0_float *)0xC868A28)->v) = (((((struct o38_float *)0xC2A6108)->v)) * ((((struct o0_float *)0xC2A6108)->v)));
    u36 = (((struct o4_float *)0xC2A6108)->v);
    u37 = (((struct o3C_float *)0xC2A6108)->v);
    (((struct o4_float *)0xC868A28)->v) = (u37 * u36);
    u38 = (((struct o0_float *)0xC868A28)->v);
    if (u38 > (u37 * u36)) {
        (((struct o8_float *)0xC2A6108)->v) = u38;
    } else {
        (((struct o8_float *)0xC2A6108)->v) = (u37 * u36);
    }
    *(float *)(((int)stk + 16)) = (*(float *)(((int)stk + 0)));
    *(float *)(((int)stk + 20)) = 0.0f;
    *(float *)(((int)stk + 24)) = 0.0f;
    *(float *)(((int)stk + 28)) = 0.0f;
    *(float *)(((int)stk + 32)) = 0.0f;
    *(float *)(((int)stk + 36)) = (u15 * u14);
    *(float *)(((int)stk + 40)) = 0.0f;
    *(float *)(((int)stk + 44)) = 0.0f;
    *(float *)(((int)stk + 48)) = 0.0f;
    *(float *)(((int)stk + 52)) = 0.0f;
    *(float *)(((int)stk + 56)) = ((f5 + f6) / (f5 - f6));
    *(float *)(((int)stk + 60)) = 1.0f;
    *(float *)(((int)stk + 64)) = 0.0f;
    *(float *)(((int)stk + 68)) = 0.0f;
    u41 = (f5 * f6);
    u42 = (u41 * (1.0f + 1.0f));
    u42 = -u42;
    *(float *)(((int)stk + 72)) = (u42 / (f5 - f6));
    *(float *)(((int)stk + 76)) = 0.0f;
    (((struct o0_float *)0xC8B85DC)->v) = f5;
    (((struct o4_float *)0xC8B85DC)->v) = f6;
    (((struct o8_float *)0xC8B85DC)->v) = (1.0f / f5);
    (((struct o18_float *)0xC8A6C74)->v) = f5;
    (((struct o0_float *)0xC8A6C74)->v) = (-f5);
    (((struct o1C_float *)0xC8A6C74)->v) = f6;
    (((struct o14_float *)0xC8A6C74)->v) = (1.0f / f5);
    nlMultiMatrix((((int)stk + 0) + 0x10));
    return (FUN_0c0e3510());
}

int nlPerspective_L(int a4, float f4, float f5, float f6)
{
    int stk[20];
    register int t0;
    register float t2;
    register float u3;
    register int t5;
    register float t6;
    register int t8;
    register int t10;
    register int t21;
    register float t17;
    register float t25;
    register float u26;
    register float u28;
    register float u29;
    register float u32;
    register float u33;
    register float u34;
    register float u36;
    register float u37;

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(float *)(((int)stk + 8)) = f4;
    t0 = *(int *)(((int)stk + 0));
    t2 = math_tan_angle16((t0 >> 1));
    u3 = *(float *)(((int)stk + 8));
    *(float *)(((int)stk + 4)) = (u3 / (1.0f / t2));
    if (((((struct o30_float *)0xC2A6108)->v)) != 0.0f) {
        t5 = math_atan_angle16((u3 / (1.0f / t2)));
        *(unsigned int *)(((int)stk + 0)) = t5;
        t6 = math_tan_angle16(t5);
        t8 = math_atan_angle16((t6 * (((((struct o30_float *)0xC2A6108)->v)) + 1.0f)));
        *(float *)(((int)stk + 12)) = (1.0f / (math_cos_angle16(t8)));
    } else {
        t10 = math_atan_angle16((u3 / (1.0f / t2)));
        *(float *)(((int)stk + 12)) = (1.0f / (math_cos_angle16(t10)));
    }
    t21 = (t0 >> 1);
    if (((((struct o34_float *)0xC2A6108)->v)) != 0.0f) {
        t17 = math_tan_angle16((t0 >> 1));
        t21 = (math_atan_angle16((t17 * (((((struct o34_float *)0xC2A6108)->v)) + 1.0f))));
    }
    t25 = math_cos_angle16(t21);
    (((struct o30_float *)0xC2A6108)->v) = 0.0f;
    (((struct o34_float *)0xC2A6108)->v) = 0.0f;
    u26 = *(float *)(((int)stk + 8));
    u28 = ((1.0f / t2) * (1.0f / t25));
    u29 = (((1.0f / t2) / u26) * (*(float *)(((int)stk + 12))));
    (((struct o0_float *)0xC2A6108)->v) = (u29 * 0.5f);
    (((struct o4_float *)0xC2A6108)->v) = (u28 * 0.5f);
    (((struct o0_float *)0xC868A28)->v) = (((((struct o38_float *)0xC2A6108)->v)) * ((((struct o0_float *)0xC2A6108)->v)));
    u32 = (((struct o4_float *)0xC2A6108)->v);
    u33 = (((struct o3C_float *)0xC2A6108)->v);
    (((struct o4_float *)0xC868A28)->v) = (u33 * u32);
    u34 = (((struct o0_float *)0xC868A28)->v);
    if (u34 > (u33 * u32)) {
        (((struct o8_float *)0xC2A6108)->v) = u34;
    } else {
        (((struct o8_float *)0xC2A6108)->v) = (u33 * u32);
    }
    *(float *)(((int)stk + 16)) = ((1.0f / t2) / u26);
    *(float *)(((int)stk + 20)) = 0.0f;
    *(float *)(((int)stk + 24)) = 0.0f;
    *(float *)(((int)stk + 28)) = 0.0f;
    *(float *)(((int)stk + 32)) = 0.0f;
    *(float *)(((int)stk + 36)) = (1.0f / t2);
    *(float *)(((int)stk + 40)) = 0.0f;
    *(float *)(((int)stk + 44)) = 0.0f;
    *(float *)(((int)stk + 48)) = 0.0f;
    *(float *)(((int)stk + 52)) = 0.0f;
    *(float *)(((int)stk + 56)) = ((f5 + f6) / (f5 - f6));
    *(float *)(((int)stk + 60)) = 1.0f;
    *(float *)(((int)stk + 64)) = 0.0f;
    *(float *)(((int)stk + 68)) = 0.0f;
    u36 = (f5 * f6);
    u37 = (u36 * (1.0f + 1.0f));
    u37 = -u37;
    *(float *)(((int)stk + 72)) = (u37 / (f5 - f6));
    *(float *)(((int)stk + 76)) = 0.0f;
    (((struct o0_float *)0xC8B85DC)->v) = f5;
    (((struct o4_float *)0xC8B85DC)->v) = f6;
    (((struct o8_float *)0xC8B85DC)->v) = (1.0f / f5);
    (((struct o18_float *)0xC8A6C74)->v) = f5;
    (((struct o0_float *)0xC8A6C74)->v) = (-f5);
    (((struct o1C_float *)0xC8A6C74)->v) = f6;
    (((struct o14_float *)0xC8A6C74)->v) = (1.0f / f5);
    nlMultiMatrix((((int)stk + 0) + 0x10));
    return (FUN_0c0e3510());
}

int FUN_0c2e8b6e(int a4, int a5)
{

    register int R1;
    int R4;
    register int R8;
    int R10;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    R4 = a4;
    v0_2 = a5;
    v0_5 = *(int *)0xC8D66E8;
    v0_3 = (0x0);
    v0_0 = (0xC8D66F5);
    v0_1 = (0xC8D65F6);
    v0_4 = (v0_5);
    if ((((unsigned short)((((struct oB0_short *)(v0_5))->v)) & 0x800) != 0)) goto L_C2E8B90;
    L_C2E8D06:;
    v0_5 = (0x0);
    L_C2E8D08:;
    return v0_5;
    L_C2E8B90:;
    v0_6 = ((unsigned char)(*(signed char *)((v0_0 + 0x0))));
    v0_7 = (0xC8D66F4);
    if (((unsigned char)R4 != 0)) goto L_C2E8C72;
    v0_5 = (v0_6);
    if ((v0_6 == 0)) goto L_C2E8BB0;
    if ((v0_5 == 2)) goto L_C2E8C20;
    if ((v0_5 == 4)) goto L_C2E8C3E;
    *(unsigned char *)((v0_7 + 0x0)) = ((*(signed char *)((v0_7 + 0x0))) & 0xFC);
    L_C2E8C6C:;
    *(unsigned char *)((v0_1 + 0x0)) = v0_3;
    *(unsigned char *)((v0_0 + 0x0)) = v0_3;
    L_C2E8CFA:;
    if (((unsigned char)(*(signed char *)((v0_1 + 0x0))) != 3)) goto L_C2E8D06;
    v0_5 = (0x1);
    goto L_C2E8D08;
    L_C2E8C3E:;
    if (((unsigned int)v0_2 > (unsigned int)(unsigned short)((((struct o30_short *)(v0_4))->v)))) goto L_C2E8C5E;
    if (((unsigned int)v0_2 < (unsigned int)(unsigned short)((((struct o32_short *)(v0_4))->v)))) goto L_C2E8C5E;
    L_C2E8C52:;
    *(unsigned char *)((v0_7 + 0x0)) = ((*(signed char *)((v0_7 + 0x0))) | 0x1);
    v0_2 = (0x1);
    L_C2E8C5A:;
    *(unsigned char *)((v0_0 + 0x0)) = v0_2;
    goto L_C2E8CFA;
    L_C2E8C5E:;
    *(unsigned char *)((v0_7 + 0x0)) = ((*(signed char *)((v0_7 + 0x0))) & 0xFC);
    goto L_C2E8C6C;
    L_C2E8C20:;
    if (((unsigned int)v0_2 > (unsigned int)(unsigned short)((((struct o38_short *)(v0_4))->v)))) goto L_C2E8C5E;
    if (((unsigned int)v0_2 < (unsigned int)(unsigned short)((((struct o3A_short *)(v0_4))->v)))) goto L_C2E8C5E;
    L_C2E8C34:;
    *(unsigned char *)((v0_7 + 0x0)) = ((*(signed char *)((v0_7 + 0x0))) | 0x2);
    v0_2 = (0x3);
    goto L_C2E8C5A;
    L_C2E8BB0:;
    if (((unsigned int)v0_2 > (unsigned int)(unsigned short)((((struct o30_short *)(v0_4))->v)))) goto L_C2E8BC4;
    if (((unsigned int)v0_2 >= (unsigned int)(unsigned short)((((struct o32_short *)(v0_4))->v)))) goto L_C2E8C52;
    L_C2E8BC4:;
    if (((unsigned int)v0_2 <= (unsigned int)(unsigned short)((((struct o38_short *)(v0_4))->v)))) goto L_C2E8BD2;
    goto L_C2E8CFA;
    L_C2E8BD2:;
    if (((unsigned int)v0_2 >= (unsigned int)(unsigned short)((((struct o3A_short *)(v0_4))->v)))) goto L_C2E8C34;
    goto L_C2E8CFA;
    L_C2E8C72:;
    v0_5 = (v0_6);
    R10 = ((unsigned char)(*(signed char *)((v0_7 + 0x0))));
    R4 = (0x2);
    if ((v0_6 == 1)) goto L_C2E8C88;
    if ((v0_5 == 3)) goto L_C2E8CC0;
    goto L_C2E8CFA;
    L_C2E8CC0:;
    if (((unsigned int)v0_2 > (unsigned int)(unsigned short)((((struct o3C_short *)(v0_4))->v)))) goto L_C2E8CF0;
    if (((unsigned int)v0_2 < (unsigned int)(unsigned short)((((struct o3E_short *)(v0_4))->v)))) goto L_C2E8CF0;
    if (((R4 & R10) == 0)) goto L_C2E8CEA;
    if (((0x1 & R10) == 0)) goto L_C2E8CEA;
    *(unsigned char *)((v0_1 + 0x0)) = ((*(signed char *)((v0_1 + 0x0))) + 0x1);
    *(unsigned char *)((v0_7 + 0x0)) = ((*(signed char *)((v0_7 + 0x0))) & 0xFC);
    L_C2E8CEA:;
    *(unsigned char *)((v0_0 + 0x0)) = 0x4;
    goto L_C2E8CFA;
    L_C2E8CF0:;
    *(unsigned char *)((v0_7 + 0x0)) = ((*(signed char *)((v0_7 + 0x0))) & 0xFC);
    *(unsigned char *)((v0_1 + 0x0)) = v0_3;
    L_C2E8CF8:;
    *(unsigned char *)((v0_0 + 0x0)) = R4;
    goto L_C2E8CFA;
    L_C2E8C88:;
    if (((unsigned int)v0_2 > (unsigned int)(unsigned short)((((struct o34_short *)(v0_4))->v)))) goto L_C2E8CB6;
    if (((unsigned int)v0_2 < (unsigned int)(unsigned short)((((struct o36_short *)(v0_4))->v)))) goto L_C2E8CB6;
    if (((R10 & R4) == 0)) goto L_C2E8CF8;
    if (((0x1 & R10) == 0)) goto L_C2E8CF8;
    *(unsigned char *)((v0_1 + 0x0)) = ((*(signed char *)((v0_1 + 0x0))) + 0x1);
    *(unsigned char *)((v0_7 + 0x0)) = ((*(signed char *)((v0_7 + 0x0))) & 0xFC);
    goto L_C2E8CF8;
    L_C2E8CB6:;
    *(unsigned char *)((v0_7 + 0x0)) = ((*(signed char *)((v0_7 + 0x0))) & 0xFC);
    *(unsigned char *)((v0_1 + 0x0)) = v0_3;
    goto L_C2E8CEA;
}

int FUN_0c2ee770(int a4, int a5)
{
    int stk[10];
    register int t0;
    register int t20;
    register int t21;
    register int t23;
    register int t30;
    register int t47;
    register int t90;
    register int t54;
    register int t22;
    register int t31;

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 0)) = a5;
    t0 = *(signed char *)0xC8D7030;
    t20 = a4;
    t21 = a5;
    if (((unsigned char)t0 == 0) || (((unsigned char)t0 == 1) || (((unsigned char)t0 == 2) || ((unsigned char)t0 == 18)))) {
        if ((int)(unsigned char)(*(signed char *)0xC8D7031) <= (int)0x1) {
            FUN_0c2fad46();
        } else {
            t20 = a4;
            t21 = a5;
        }
    }
    if (((unsigned char)(*(signed char *)((0xC8D717E + (short)((short)(unsigned char)(*(signed char *)0xC8D7168) * (short)0x124)))) & 4) == 0) {
        t23 = t22;
        for (;;) {
            if (((((struct o11C_short *)(((short)((short)(unsigned char)(*(signed char *)0xC8D7168) * (short)0x124) + 0xC8D717E)))->v)) == 0) {
                break;
            }
            t20 = (*(signed char *)0xC8D7168);
            t20 = (unsigned char)t20;
            t20 = ((short)t20 * (short)0x124);
            t20 = (short)t20;
            t20 = (t20 + 0xC8D717E);
            t20 = ((((struct o11C_short *)(t20))->v));
            t30 = FUN_0c2ec10c(t20, t21, t23, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16));
            t21 = 0x2;
            t23 = 0x1;
            t20 = 0x0;
            for (;;) {
                if ((int)(unsigned char)t23 > (int)0x3) {
                    break;
                }
                t30 = (*(signed char *)0xC8D7168);
                t23 = (t23 + 0x1);
                t31 = 0x124;
                t30 = (unsigned char)t30;
                t30 = ((short)t30 * (short)t31);
                t30 = (short)t30;
                t30 = (t30 + 0xC8D717E);
                t30 = (t30 + 0x11C);
                t31 = (*(short *)((t21 + t30)));
                t21 = (t21 + 0x2);
                *(unsigned short *)((t20 + t30)) = t31;
                t20 = (t20 + 0x2);
            }
            (((struct o122_ushort *)(((short)((short)(unsigned char)(*(signed char *)0xC8D7168) * (short)0x124) + 0xC8D717E)))->v) = 0x0;
        }
    }
    *(unsigned short *)(((*(int *)(((int)stk + 0))) + 0x0)) = 0x0;
    t47 = FUN_0c2ef3bc();
    t90 = 0x0;
    if ((unsigned short)t47 != 0) {
        *(unsigned int *)(((*(int *)(((int)stk + 4))) + 0x0)) = (((short)((short)(unsigned char)(*(signed char *)0xC8D7168) * (short)0x124) + 0xC8D717E) + 0x4);
        *(unsigned short *)(((*(int *)(((int)stk + 0))) + 0x0)) = (*(short *)((((short)((short)(unsigned char)(*(signed char *)0xC8D7168) * (short)0x124) + 0xC8D717E) + 0x2)));
        t54 = *(signed char *)((((short)((short)(unsigned char)(*(signed char *)0xC8D7168) * (short)0x124) + 0xC8D717E) + 0x0));
        t90 = 0x0;
        if ((0xB & (unsigned char)t54) == 0) {
        } else {
            if ((unsigned char)(*(signed char *)0xC8D7030) != 26) {
                *(unsigned short *)(((*(int *)(((int)stk + 0))) + 0x0)) = 0x0;
                FUN_0c2ee948();
                *(unsigned short *)0xC8D83CE = ((*(short *)0xC8D83CE) + 0x1);
            }
            t90 = 0x1;
            if (((unsigned char)t54 & 0x1) != 0) {
            } else {
                t90 = 0x2;
                if (((unsigned char)t54 & 0x2) != 0) {
                } else {
                    t90 = 0x3;
                    if ((0x8 & (unsigned char)t54) != 0) {
                    } else {
                        t90 = 0x4;
                        if ((0x10 & (unsigned char)t54) != 0) {
                        } else {
                            t90 = t54;
                            if (((unsigned char)t54 & 0x20) != 0) {
                                t90 = 0x5;
                            }
                        }
                    }
                }
            }
        }
    }
    return t90;
}

int FUN_0c2cf554(int a4)
{
    int stk[2];

    register int R1;
    register int R3;
    register int R7;
    register int R8;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register int v0_9;
    v0_6 = a4;
    v0_7 = *(signed char *)0xC8D666A;
    v0_8 = ((unsigned char)v0_7);
    v0_1 = (0xC8D666C);
    v0_5 = (0xC8D666B);
    v0_2 = (0xC8D6670);
    v0_0 = (0xC8D666A);
    v0_3 = (v0_6);
    v0_4 = (0xC300254);
    if (((unsigned char)v0_7 == 1)) goto L_C2CF5AC;
    if ((v0_8 == 2)) goto L_C2CF5EC;
    if ((v0_8 == 3)) goto L_C2CF632;
    if ((v0_8 != 4)) goto L_C2CF588;
    v0_6 = (signed char)(FUN_0c2cf746(v0_3, ((int)stk + 0))) == 0;
    if (v0_6) goto L_C2CF6E2;
    if (((unsigned char)v0_3 != 61)) goto L_C2CF6CE;
    if (((int)(unsigned char)(*(signed char *)(((int)stk + 0))) > (int)0x33)) goto L_C2CF6DE;
    v0_1 = ((*(signed char *)(((int)stk + 0))));
    L_C2CF69E:;
    *(unsigned char *)((v0_5 + 0x0)) = v0_1;
    *(unsigned char *)((v0_0 + 0x0)) = 0x5;
    L_C2CF6E2:;
    v0_8 = (0x1);
    L_C2CF6E4:;
    return v0_8;
    L_C2CF6DE:;
    v0_8 = (0x0);
    goto L_C2CF6E4;
    L_C2CF6CE:;
    *(unsigned int *)((v0_2 + 0x0)) = v0_4;
    L_C2CF5AC:;
    v0_6 = ((unsigned char)v0_3);
    if (((unsigned char)(*(signed char *)0xC8D6526) != (unsigned char)v0_3)) goto L_C2CF5BC;
    goto L_C2CF6E2;
    L_C2CF5BC:;
    if ((v0_6 != 63)) goto L_C2CF5C8;
    goto L_C2CF6E2;
    L_C2CF5C8:;
    if (((unsigned char)v0_3 != 33)) goto L_C2CF5D2;
    goto L_C2CF6E2;
    L_C2CF5D2:;
    if (((unsigned char)v0_3 != 61)) goto L_C2CF5DE;
    v0_1 = ((*(signed char *)0xC8D6499));
    goto L_C2CF69E;
    L_C2CF5DE:;
    v0_5 = (signed char)(FUN_0c2cf6f6(v0_3)) == 0;
    if (v0_5) goto L_C2CF5EC;
    goto L_C2CF6E2;
    L_C2CF5EC:;
    v0_6 = ((unsigned char)v0_3);
    if (((int)(unsigned char)v0_3 >= (int)0x41)) goto L_C2CF5F8;
    goto L_C2CF6DE;
    L_C2CF5F8:;
    if (((int)v0_6 > (int)0x5A)) goto L_C2CF6DE;
    v0_5 = *(int *)((v0_2 + 0x0));
    v0_6 = ((((unsigned char)v0_3 - 65) << 1));
    v0_7 = (((unsigned char)(((unsigned char)v0_3 - 65) << 1) + v0_5));
    if (((*(signed char *)((((unsigned char)(((unsigned char)v0_3 - 65) << 1) + v0_5) + 0x0))) == 0)) goto L_C2CF6DE;
    *(unsigned char *)((v0_1 + 0x0)) = (*(signed char *)((v0_7 + 0x1)));
    if (((*(signed char *)((v0_1 + 0x0))) != 0)) goto L_C2CF62C;
    if ((v0_4 != (*(int *)((v0_2 + 0x0))))) goto L_C2CF6E2;
    if (((unsigned char)v0_6 != 36)) goto L_C2CF6E2;
    *(unsigned char *)((v0_0 + 0x0)) = 0x4;
    goto L_C2CF6E2;
    L_C2CF62C:;
    *(unsigned char *)((v0_0 + 0x0)) = 0x3;
    goto L_C2CF6E2;
    L_C2CF588:;
    if ((v0_8 != 5)) goto L_C2CF590;
    v0_6 = (signed char)(FUN_0c2cf746(v0_3, ((int)stk + 0))) == 0;
    if (v0_6) goto L_C2CF6E2;
    v0_8 = *(signed char *)((v0_5 + 0x0));
    v0_9 = *(signed char *)(((int)stk + 0));
    v0_6 = ((unsigned char)v0_9);
    v0_7 = ((unsigned char)v0_8);
    if (((int)(unsigned char)v0_9 < (int)(unsigned char)(*(signed char *)(((unsigned char)v0_8 + 0xC300E90))))) goto L_C2CF6DE;
    if (((int)v0_6 > (int)(unsigned char)(*(signed char *)((v0_7 + 0xC300EE0))))) goto L_C2CF6DE;
    goto L_C2CF6CE;
    L_C2CF590:;
    if ((v0_8 != 6)) goto L_C2CF598;
    if (((unsigned char)v0_3 != 70)) goto L_C2CF6DE;
    *(unsigned char *)((v0_0 + 0x0)) = 0x7;
    goto L_C2CF6E2;
    L_C2CF598:;
    if ((v0_8 != 7)) goto L_C2CF5A0;
    goto L_C2CF6E2;
    L_C2CF5A0:;
    if ((v0_8 != 8)) goto L_C2CF5A8;
    goto L_C2CF6E2;
    L_C2CF5A8:;
    goto L_C2CF6E2;
    L_C2CF632:;
    v0_6 = (signed char)(FUN_0c2cf746(v0_3, ((int)stk + 0))) == 0;
    if (v0_6) goto L_C2CF6E2;
    if (((unsigned int)(*(signed char *)(((int)stk + 0))) > (unsigned int)(*(signed char *)((v0_1 + 0x0))))) goto L_C2CF6DE;
    *(unsigned int *)((v0_2 + 0x0)) = v0_4;
    *(unsigned char *)((v0_0 + 0x0)) = 0x2;
    goto L_C2CF5AC;
}

int FUN_0c2f8fc0(int a4, int a5, int a6, int a7)
{
    int stk[1];

    register int R0;
    register int R1;
    register int R2;
    register int R8;
    int R12;
    int R13;
    int R14;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    v0_0 = a4;
    v0_1 = a5;
    v0_2 = a6;
    v0_3 = a7;
    *(unsigned int *)(((int)stk + 0)) = ((*(int *)((v0_0 + 0x0))) & 0xFFFFFC00);
    if (((*(signed char *)((v0_1 + 0x0))) != 0)) goto L_C2F8FDA;
    *(unsigned char *)((v0_1 + 0x0)) = 0xFF;
    L_C2F8FDA:;
    R13 = (0x38);
    if (((*(signed char *)((v0_2 + 0x0))) != 0)) goto L_C2F8FE6;
    *(unsigned char *)((v0_2 + 0x0)) = 0xFF;
    L_C2F8FE6:;
    R14 = (0x20);
    if ((((*(int *)((v0_0 + 0x0))) & 0x200) == 0)) goto L_C2F9028;
    v0_4 = *(signed char *)((v0_2 + 0x0));
    R0 = ((unsigned char)v0_4);
    if (((int)(unsigned char)v0_4 < (int)0x18)) goto L_C2F9028;
    R0 = ((signed char)v0_3);
    if (((signed char)v0_3 != 0)) goto L_C2F9028;
    if (((int)(unsigned char)(*(signed char *)((v0_1 + 0x0))) <= (int)R14)) goto L_C2F900A;
    *(unsigned char *)((v0_1 + 0x0)) = R14;
    L_C2F900A:;
    if (((int)(unsigned char)(*(signed char *)((v0_2 + 0x0))) <= (int)R13)) goto L_C2F9014;
    *(unsigned char *)((v0_2 + 0x0)) = R13;
    L_C2F9014:;
    v0_1 = (0x200);
    L_C2F90E4:;
    *(unsigned int *)((v0_0 + 0x0)) = v0_1;
    L_C2F9150:;
    *(unsigned int *)((v0_0 + 0x0)) = ((*(int *)((v0_0 + 0x0))) | (*(int *)(((int)stk + 0))));
    return R0;
    L_C2F9028:;
    if ((((*(int *)((v0_0 + 0x0))) & 0x100) == 0)) goto L_C2F905A;
    v0_4 = *(signed char *)((v0_2 + 0x0));
    R0 = ((unsigned char)v0_4);
    if (((int)(unsigned char)v0_4 < (int)0x1E)) goto L_C2F905A;
    R0 = ((signed char)v0_3);
    if (((signed char)v0_3 != 0)) goto L_C2F905A;
    if (((int)(unsigned char)(*(signed char *)((v0_1 + 0x0))) <= (int)R14)) goto L_C2F904A;
    *(unsigned char *)((v0_1 + 0x0)) = R14;
    L_C2F904A:;
    if (((int)(unsigned char)(*(signed char *)((v0_2 + 0x0))) <= (int)R13)) goto L_C2F9054;
    *(unsigned char *)((v0_2 + 0x0)) = R13;
    L_C2F9054:;
    v0_1 = (0x100);
    goto L_C2F90E4;
    L_C2F905A:;
    R13 = (0x80);
    if ((((*(int *)((v0_0 + 0x0))) & 0x80) == 0)) goto L_C2F9084;
    if (((int)(unsigned char)(*(signed char *)((v0_1 + 0x0))) < (int)0x5)) goto L_C2F9084;
    if (((int)(unsigned char)(*(signed char *)((v0_1 + 0x0))) <= (int)R14)) goto L_C2F9076;
    *(unsigned char *)((v0_1 + 0x0)) = R14;
    L_C2F9076:;
    if (((int)(unsigned char)(*(signed char *)((v0_2 + 0x0))) <= (int)R14)) goto L_C2F9080;
    *(unsigned char *)((v0_2 + 0x0)) = R14;
    L_C2F9080:;
    *(unsigned int *)((v0_0 + 0x0)) = R13;
    goto L_C2F9150;
    L_C2F9084:;
    v0_4 = *(int *)((v0_0 + 0x0));
    R0 = (v0_4);
    if (((v0_4 & 64) == 0)) goto L_C2F90A6;
    if (((int)(unsigned char)(*(signed char *)((v0_1 + 0x0))) < (int)0x6)) goto L_C2F90A6;
    v0_2 = (0xC);
    if (((int)(unsigned char)(*(signed char *)((v0_1 + 0x0))) <= (int)0xC)) goto L_C2F90A0;
    *(unsigned char *)((v0_1 + 0x0)) = v0_2;
    L_C2F90A0:;
    v0_1 = (0x40);
    goto L_C2F90E4;
    L_C2F90A6:;
    R12 = (0x8);
    if ((((*(int *)((v0_0 + 0x0))) & R14) == 0)) goto L_C2F90C6;
    if (((int)(unsigned char)(*(signed char *)((v0_1 + 0x0))) < (int)0x6)) goto L_C2F90C6;
    if (((int)(unsigned char)(*(signed char *)((v0_1 + 0x0))) <= (int)R12)) goto L_C2F90C2;
    *(unsigned char *)((v0_1 + 0x0)) = R12;
    L_C2F90C2:;
    *(unsigned int *)((v0_0 + 0x0)) = R14;
    goto L_C2F9150;
    L_C2F90C6:;
    v0_4 = *(int *)((v0_0 + 0x0));
    R0 = (v0_4);
    if (((v0_4 & 16) == 0)) goto L_C2F90EC;
    if (((int)(unsigned char)(*(signed char *)((v0_1 + 0x0))) < (int)0x4)) goto L_C2F90EC;
    v0_2 = (0x5);
    if (((int)(unsigned char)(*(signed char *)((v0_1 + 0x0))) <= (int)0x5)) goto L_C2F90E2;
    *(unsigned char *)((v0_1 + 0x0)) = v0_2;
    L_C2F90E2:;
    v0_1 = (0x10);
    goto L_C2F90E4;
    L_C2F90EC:;
    R14 = (0x4);
    if ((((*(int *)((v0_0 + 0x0))) & R12) == 0)) goto L_C2F910C;
    if (((int)(unsigned char)(*(signed char *)((v0_1 + 0x0))) < (int)0x4)) goto L_C2F910C;
    if (((int)(unsigned char)(*(signed char *)((v0_1 + 0x0))) <= (int)R14)) goto L_C2F9108;
    *(unsigned char *)((v0_1 + 0x0)) = R14;
    L_C2F9108:;
    *(unsigned int *)((v0_0 + 0x0)) = R12;
    goto L_C2F9150;
    L_C2F910C:;
    R12 = (0x1);
    if ((((*(int *)((v0_0 + 0x0))) & R14) == 0)) goto L_C2F9132;
    if (((signed char)v0_3 != 0)) goto L_C2F9132;
    *(unsigned int *)((v0_0 + 0x0)) = R14;
    if ((((unsigned char)(*(signed char *)0xC8D644E) & R13) == 0)) goto L_C2F912C;
    *(unsigned char *)((v0_1 + 0x0)) = R12;
    *(unsigned char *)((v0_2 + 0x0)) = R14;
    goto L_C2F9150;
    L_C2F912C:;
    *(unsigned char *)((v0_1 + 0x0)) = R14;
    *(unsigned char *)((v0_2 + 0x0)) = R12;
    goto L_C2F9150;
    L_C2F9132:;
    v0_2 = (0x2);
    if ((((*(int *)((v0_0 + 0x0))) & 0x2) == 0)) goto L_C2F9140;
    *(unsigned char *)((v0_1 + 0x0)) = v0_2;
    *(unsigned int *)((v0_0 + 0x0)) = v0_2;
    goto L_C2F9150;
    L_C2F9140:;
    if (((int)(unsigned char)(*(signed char *)((v0_1 + 0x0))) <= (int)v0_2)) goto L_C2F914C;
    *(unsigned char *)((v0_1 + 0x0)) = R14;
    L_C2F914E:;
    *(unsigned int *)((v0_0 + 0x0)) = R12;
    goto L_C2F9150;
    L_C2F914C:;
    *(unsigned char *)((v0_1 + 0x0)) = v0_2;
    goto L_C2F914E;
}

int FUN_0c185284(int a4, int a5)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;
    register int t10;
    register int t11;

    if ((*(int *)((((short)((short)a4 * (short)0xC24) + 0xC89C310) + 0x4))) != 2) {
        t2 = FUN_0c184ddc();
        t3 = 0xFFFFFFFE;
        if ((int)((((struct o814_int *)(((short)((short)a4 * (short)0xC24) + 0xC89C310)))->v)) < (int)t2) {
            if (((((struct oC1C_int *)(((short)((short)a4 * (short)0xC24) + 0xC89C310)))->v)) == 3) {
                t2 = 0xFFFFFFFA;
                if (((((struct o0_int *)0xC8A2C38)->v)) != 1) {
                    (((struct oC20_uint *)(((short)((short)a4 * (short)0xC24) + 0xC89C310)))->v) = ((-((((struct oC20_int *)(((short)((short)a4 * (short)0xC24) + 0xC89C310)))->v))) + 0x1);
                    (((struct oC1C_uint *)(((short)((short)a4 * (short)0xC24) + 0xC89C310)))->v) = (((((struct oC1C_int *)(((short)((short)a4 * (short)0xC24) + 0xC89C310)))->v)) + 0x1);
                    t2 = 0xFFFFFFFE;
                }
                t4 = t2;
            } else {
                t2 = 0xFFFFFFFA;
                if (((((struct oC1C_int *)(((short)((short)a4 * (short)0xC24) + 0xC89C310)))->v)) == 6) {
                } else {
                    t5 = (((struct oC1C_int *)(((short)((short)a4 * (short)0xC24) + 0xC89C310)))->v);
                    (((struct oC1C_uint *)(((short)((short)a4 * (short)0xC24) + 0xC89C310)))->v) = (t5 + 0x1);
                    t6 = FUN_0c185080(a4, (*(int *)(((((((struct oC20_int *)(((short)((short)a4 * (short)0xC24) + 0xC89C310)))->v)) << 2) + 0xC8A2C30))), (*(int *)(((((t5 + 0x1) - 1) << 2) + 0xC2A62E0))));
                    t5 = 0xFFFFFFFF;
                    if (t6 == 0) {
                    } else {
                        *(volatile int *)((((short)((short)a4 * (short)0xC24) + 0xC89C310) + 0x4));
                        t5 = 0xFFFFFFFE;
                    }
                    t2 = t5;
                }
                t4 = t2;
            }
            t3 = t4;
        }
        t2 = t3;
    } else {
        t3 = *(signed char *)(((((((short)((short)a4 * (short)0xC24) + 0xC89C310) + 0xE) + 0x1) + 0x1) + 0x0));
        t4 = *(signed char *)((((((((short)((short)a4 * (short)0xC24) + 0xC89C310) + 0xE) + 0x1) + 0x1) + 0x1) + 0x0));
        if (((((unsigned char)(*(signed char *)(((((short)((short)a4 * (short)0xC24) + 0xC89C310) + 0xE) + 0x0))) << 8) | (unsigned char)(*(signed char *)((((((short)((short)a4 * (short)0xC24) + 0xC89C310) + 0xE) + 0x1) + 0x0)))) == ((((struct oC18_int *)(((short)((short)a4 * (short)0xC24) + 0xC89C310)))->v))) && ((0xF800 & (((unsigned char)t3 << 8) | (unsigned char)t4)) == 0x8000)) {
            t5 = 0xFFFFFFFF;
            if ((((((unsigned char)t3 << 8) | (unsigned char)t4) & 0xF) == 0) && (t0 = *(signed char *)((((((((((short)((short)a4 * (short)0xC24) + 0xC89C310) + 0xE) + 0x1) + 0x1) + 0x1) + 0x1) + 0x2) + 0x0)), t1 = *(signed char *)(((((((((((short)((short)a4 * (short)0xC24) + 0xC89C310) + 0xE) + 0x1) + 0x1) + 0x1) + 0x1) + 0x2) + 0x1) + 0x0)), (((unsigned char)t0 << 8) | (unsigned char)t1) != 0)) {
                t3 = 0x0;
                t4 = ((FUN_0c185054((((((((((((short)((short)a4 * (short)0xC24) + 0xC89C310) + 0xE) + 0x1) + 0x1) + 0x1) + 0x1) + 0x2) + 0x1) + 0x1) + 0x4))) + 0x4);
                for (;;) {
                    if ((int)t3 >= (int)(((unsigned char)t0 << 8) | (unsigned char)t1)) {
                        return 0xFFFFFFFF;
                    }
                    t4 = (FUN_0c185054(t4));
                    t6 = *(signed char *)((t4 + 0x0));
                    t4 = (t4 + 0x1);
                    t7 = *(signed char *)((t4 + 0x0));
                    t4 = (t4 + 0x1);
                    t8 = *(signed char *)((t4 + 0x0));
                    t4 = (t4 + 0x1);
                    t9 = *(signed char *)((t4 + 0x0));
                    t4 = (t4 + 0x1);
                    t4 = (t4 + 0x4);
                    t10 = *(signed char *)((t4 + 0x0));
                    t4 = (t4 + 0x1);
                    t11 = *(signed char *)((t4 + 0x0));
                    t4 = (t4 + 0x1);
                    if (((((unsigned char)t6 << 8) | (unsigned char)t7) == 1) && ((((unsigned char)t8 << 8) | (unsigned char)t9) == 1)) {
                        break;
                    }
                    t3 = (t3 + 0x1);
                    t4 = (t4 + (((unsigned char)t10 << 8) | (unsigned char)t11));
                }
                t0 = 0x4;
                t1 = a5;
                t3 = t4;
                for (;;) {
                    if (t0 == 0) {
                        break;
                    }
                    t4 = *(signed char *)((t3 + 0x0));
                    t3 = (t3 + 0x1);
                    t0 = (t0 - 1);
                    *(unsigned char *)((t1 + 0x0)) = (t4);
                    t1 = (t1 + 0x1);
                }
                (((struct o4_uint *)0xC8A2C38)->v) = ((((struct oC20_int *)(((short)((short)a4 * (short)0xC24) + 0xC89C310)))->v));
                t5 = 0x0;
            }
            t0 = t5;
        } else {
            memset((((short)((short)a4 * (short)0xC24) + 0xC89C310) + 0xE), 0x0, 0x800);
            *(unsigned int *)((((short)((short)a4 * (short)0xC24) + 0xC89C310) + 0x4)) = 0x1;
            t0 = 0xFFFFFFFE;
        }
        t2 = t0;
    }
    return t2;
}

int FUN_0c19c4d8(int a4, int a5, int a6, int a7)
{
    int stk[12];
    register int t16;
    register int t69;
    register int t17;
    register int t35;
    register int t37;
    register int t66;
    register int t74;
    register int t92;
    register int t94;
    register int t123;
    register int t10;
    register int t126;
    register int t39;
    register int t40;
    register int t41;
    register int t42;
    register int t43;
    register int t44;
    register int t45;
    register int t96;
    register int t97;
    register int t98;
    register int t99;
    register int t100;
    register int t101;
    register int t102;

    *(unsigned int *)(((int)stk + 4)) = a7;
    *(unsigned int *)(((int)stk + 8)) = (unsigned short)a5;
    *(unsigned int *)((a4 + 0x4)) = ((*(int *)((a4 + 0x4))) - (unsigned short)a5);
    *(unsigned short *)((a4 + 0x8)) = ((*(short *)((a4 + 0x8))) - a5);
    FUN_0c187a88((((int)stk + 4) + 0x8), (a4 + 0xC), 0x8);
    FUN_0c18dd06((a4 + 0xC), (*(int *)(((int)stk + 8))));
    if ((*(signed char *)((a4 + 0x10))) == 1) {
        t10 = (FUN_0c18dd02((a4 + 0xC)));
    } else {
        FUN_0c18dcf2((((int)stk + 4) + 0x10), (((int)stk + 4) + 0x24));
        FUN_0c18dae8((((int)stk + 4) + 0x10), (a4 + 0xC), 0x8);
        t10 = (((int)stk + 4) + 0x24);
    }
    if ((*(short *)((t10 + 0x6))) != 0) {
        *(unsigned int *)(((int)stk + 28)) = a6;
        *(unsigned int *)(((int)stk + 32)) = (*(int *)(((int)stk + 4)));
        *(unsigned char *)(((int)stk + 36)) = 0x0;
        *(unsigned char *)(((int)stk + 37)) = 0x11;
        (((struct o22_ushort *)(((int)stk + 4)))->v) = (FUN_0c18dad6((*(int *)((a4 + 0x4)))));
        t16 = FUN_0c19c678((((int)stk + 4) + 0x18), a4, 0x0);
        t69 = 0xFFFFFFFF;
        if ((unsigned short)t16 == 0) {
            t17 = 0x0;
            for (;;) {
                if ((int)t17 >= (int)(unsigned char)(*(signed char *)0xC8A738D)) {
                    t35 = FUN_0c18f8b2((*(int *)(((int)stk + 4))), 0x0);
                    if (t35 == 1) {
                        return 0x0;
                    }
                    return 0xFFFFFFFE;
                }
                t37 = *(int *)0xC8A73C4;
                if (((*(short *)(((((((t17 << 1) + t17) << 2) << 2) + t37) + 0x8))) != 0) && ((t39 = *(short *)(((((((t17 << 1) + t17) << 2) << 2) + t37) + 0xC)), t40 = *(short *)((t10 + 0x2)), t39 == t40) && (((t41 = *(signed char *)(((((((t17 << 1) + t17) << 2) << 2) + t37) + 0x14)), t41 == 0) || (t42 = *(int *)(((((((t17 << 1) + t17) << 2) << 2) + t37) + 0x18)), t42 == a6)) && ((t43 = *(signed char *)(((((((t17 << 1) + t17) << 2) << 2) + t37) + 0x15)), t43 == 0) || (t44 = *(short *)((t10 + 0x0)), t45 = *(short *)(((((((t17 << 1) + t17) << 2) << 2) + t37) + 0xE)), t45 == t44))))) {
                    break;
                }
                t17 = (t17 + 0x1);
            }
            if ((*(signed char *)(((((((t17 << 1) + t17) << 2) << 2) + t37) + 0xB))) != 0) {
                *(unsigned int *)((a4 + 0x4)) = ((*(int *)((a4 + 0x4))) + (*(int *)(((int)stk + 8))));
                *(unsigned short *)((a4 + 0x8)) = ((*(short *)((a4 + 0x8))) + a5);
                FUN_0c187a88((a4 + 0xC), (((int)stk + 4) + 0x8), 0x8);
            } else {
                *(unsigned int *)((a4 + 0x4)) = ((*(int *)((a4 + 0x4))) - 8);
                *(unsigned short *)((a4 + 0x8)) = ((*(short *)((a4 + 0x8))) - 8);
                FUN_0c18dd06((a4 + 0xC), 0x8);
            }
            *(int *)((int)stk + 0) = (t17);
            t66 = FUN_0c18d852(a4, a6, (*(short *)((t10 + 0x0))), (*(int *)(((((((t17 << 1) + t17) << 2) << 2) + t37) + 0x24))));
            t69 = 0x0;
            if (t66 != 0) {
                t69 = 0xFFFFFFFF;
            }
        }
        t126 = t69;
    } else {
        t74 = 0x0;
        for (;;) {
            if ((int)t74 >= (int)(unsigned char)(*(signed char *)0xC8A738D)) {
                t92 = FUN_0c18f8b2((*(int *)(((int)stk + 4))), 0x0);
                if (t92 == 1) {
                    return 0x0;
                }
                return 0xFFFFFFFE;
            }
            t94 = *(int *)0xC8A73C4;
            if (((*(short *)(((((((t74 << 1) + t74) << 2) << 2) + t94) + 0x8))) != 0) && ((t96 = *(short *)(((((((t74 << 1) + t74) << 2) << 2) + t94) + 0xC)), t97 = *(short *)((t10 + 0x2)), t96 == t97) && (((t98 = *(signed char *)(((((((t74 << 1) + t74) << 2) << 2) + t94) + 0x14)), t98 == 0) || (t99 = *(int *)(((((((t74 << 1) + t74) << 2) << 2) + t94) + 0x18)), t99 == a6)) && ((t100 = *(signed char *)(((((((t74 << 1) + t74) << 2) << 2) + t94) + 0x15)), t100 == 0) || (t101 = *(short *)((t10 + 0x0)), t102 = *(short *)(((((((t74 << 1) + t74) << 2) << 2) + t94) + 0xE)), t102 == t101))))) {
                break;
            }
            t74 = (t74 + 0x1);
        }
        if ((*(signed char *)(((((((t74 << 1) + t74) << 2) << 2) + t94) + 0xB))) != 0) {
            *(unsigned int *)((a4 + 0x4)) = ((*(int *)((a4 + 0x4))) + (*(int *)(((int)stk + 8))));
            *(unsigned short *)((a4 + 0x8)) = ((*(short *)((a4 + 0x8))) + a5);
            FUN_0c187a88((a4 + 0xC), (((int)stk + 4) + 0x8), 0x8);
        } else {
            *(unsigned int *)((a4 + 0x4)) = ((*(int *)((a4 + 0x4))) - 8);
            *(unsigned short *)((a4 + 0x8)) = ((*(short *)((a4 + 0x8))) - 8);
            FUN_0c18dd06((a4 + 0xC), 0x8);
        }
        *(int *)((int)stk + 0) = (t74);
        t123 = FUN_0c18d852(a4, a6, (*(short *)((t10 + 0x0))), (*(int *)(((((((t74 << 1) + t74) << 2) << 2) + t94) + 0x24))));
        t126 = 0x0;
        if (t123 != 0) {
            t126 = 0xFFFFFFFF;
        }
    }
    return t126;
}

void FUN_0c18408e(void)
{
    register int t0;
    register int t1;
    register int t2;

    (((struct o0_uint *)0xC2AE6C8)->v) = (((((struct o0_int *)0xC2AE6C8)->v)) + 0x1);
    FUN_0c18dfd6();
    FUN_0c18c9fc();
    t0 = FUN_0c18e01e();
    (((struct o0_uint *)0xC89B568)->v) = t0;
    (((struct o4_uint *)0xC89B568)->v) = t0;
    (((struct o8_uint *)0xC89B568)->v) = t0;
    FUN_0c18e064(0xC8A73E0);
    FUN_0c18c9fc();
    FUN_0c18dfe6();
    t0 = (FUN_0c18c9fc());
    t1 = 0xC206070;
    for (;;) {
        if (((((struct o4_int *)0xC2AE6C8)->v)) == 0) {
            t0 = (thunk_FUN_0c1831ec());
            t0 = (FUN_0c18dfd6());
            for (;;) {
                t0 = (FUN_0c18e10c(0xC8A73E0));
                if (t0 != 0) {
                    break;
                }
                t0 = (FUN_0c18e130(0xC8A73E0));
                t1 = t0;
                t0 = (*(int *)((t1 + 0x0)));
                if (t0 == 1) {
                    t0 = (FUN_0c18eba8((t1 + 0xC), (*(int *)((t1 + 0x8))), (*(int *)((t1 + 0x4)))));
                    t0 = (FUN_0c18dfe6());
                    t0 = (thunk_FUN_0c1831ec());
                    t0 = (FUN_0c18dfd6());
                    t0 = (FUN_0c18e0c2(0xC8A73E0));
                    continue;
                }
                t0 = (FUN_0c18e0c2(0xC8A73E0));
            }
            t0 = (FUN_0c18dfe6());
            t0 = (FUN_0c18e01e());
            t2 = 0x3E8;
            t1 = t0;
            if ((unsigned int)(t0 - ((((struct o8_int *)0xC89B568)->v))) >= (unsigned int)t2) {
                (((struct o8_uint *)0xC89B568)->v) = t1;
                t0 = (FUN_0c18dfd6());
                t0 = (FUN_0c18fdb0());
                t0 = (FUN_0c18dfe6());
                t2 = 0x1F4;
                if ((unsigned int)(t1 - ((((struct o4_int *)0xC89B568)->v))) >= (unsigned int)t2) {
                    (((struct o4_uint *)0xC89B568)->v) = t1;
                    t0 = (FUN_0c18dfd6());
                    t0 = (FUN_0c190c66());
                    t0 = (FUN_0c18dfe6());
                    t2 = 0xEA60;
                    if ((unsigned int)(t1 - ((((struct o0_int *)0xC89B568)->v))) >= (unsigned int)t2) {
                        (((struct o0_uint *)0xC89B568)->v) = t1;
                        t0 = (FUN_0c18dfd6());
                        t0 = (FUN_0c18e4ba());
                        t0 = (FUN_0c18dfe6());
                        continue;
                    }
                    continue;
                }
                t2 = 0xEA60;
                if ((unsigned int)(t1 - ((((struct o0_int *)0xC89B568)->v))) >= (unsigned int)t2) {
                    (((struct o0_uint *)0xC89B568)->v) = t1;
                    t0 = (FUN_0c18dfd6());
                    t0 = (FUN_0c18e4ba());
                    t0 = (FUN_0c18dfe6());
                    continue;
                }
                continue;
            }
            t2 = 0x1F4;
            if ((unsigned int)(t1 - ((((struct o4_int *)0xC89B568)->v))) >= (unsigned int)t2) {
                (((struct o4_uint *)0xC89B568)->v) = t1;
                t0 = (FUN_0c18dfd6());
                t0 = (FUN_0c190c66());
                t0 = (FUN_0c18dfe6());
                t2 = 0xEA60;
                if ((unsigned int)(t1 - ((((struct o0_int *)0xC89B568)->v))) >= (unsigned int)t2) {
                    (((struct o0_uint *)0xC89B568)->v) = t1;
                    t0 = (FUN_0c18dfd6());
                    t0 = (FUN_0c18e4ba());
                    t0 = (FUN_0c18dfe6());
                    continue;
                }
                continue;
            }
            t2 = 0xEA60;
            if ((unsigned int)(t1 - ((((struct o0_int *)0xC89B568)->v))) >= (unsigned int)t2) {
                (((struct o0_uint *)0xC89B568)->v) = t1;
                t0 = (FUN_0c18dfd6());
                t0 = (FUN_0c18e4ba());
                t0 = (FUN_0c18dfe6());
                continue;
            }
            continue;
        }
        break;
    }
    (((struct o0_uint *)0xC2AE6C8)->v) = (((((struct o0_int *)0xC2AE6C8)->v)) - 1);
    for (;;) {
        thunk_FUN_0c1831ec();
    }
}

int FUN_0c2d6c38(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
    int stk[11];
    register int t73;
    register int t0;

    *(unsigned char *)(((int)stk + 12)) = a6;
    t73 = 0x28;
    if ((unsigned char)a4 == 0xFE) {
    } else {
        (((struct o0_uchar *)0xC8D6828)->v) = a4;
        t0 = FUN_0c2d7662();
        if ((signed char)t0 == 0) {
            (((struct o1_uchar *)0xC8D6828)->v) = a5;
            (((struct o2_uchar *)0xC8D6828)->v) = (*(signed char *)(((int)stk + 12)));
            (((struct o3_uchar *)0xC8D6828)->v) = a7;
            (((struct o4_uchar *)0xC8D6828)->v) = ((signed char)(a8 >> 0));
            (((struct o5_uchar *)0xC8D6828)->v) = ((signed char)(a9 >> 0));
            (((struct o6_uchar *)0xC8D6828)->v) = ((signed char)(a10 >> 0));
            (((struct o7_uchar *)0xC8D6828)->v) = ((signed char)(a11 >> 0));
            (((struct o8_uchar *)0xC8D6828)->v) = ((signed char)(a12 >> 0));
            t73 = 0xC8D6830;
        } else {
            if ((unsigned char)(*(signed char *)0xC8D2FE8) != (unsigned char)a5) {
                *(unsigned char *)0xC8D2FE8 = a5;
                FUN_0c2d7806(0x800);
            }
            if ((unsigned char)a4 != 0) {
                if (((unsigned char)a4 != 1) && (((unsigned char)a4 != 2) && (((unsigned char)a4 != 3) && (((unsigned char)a4 != 4) && ((unsigned char)a4 != 5))))) {
                    if ((unsigned char)a4 != 6) {
                        if ((unsigned char)a4 != 7) {
                            if ((unsigned char)a4 != 10) {
                                if ((unsigned char)a4 != 11) {
                                    t73 = (unsigned char)a4;
                                    if ((unsigned char)a4 != 13) {
                                    } else {
                                        FUN_0c2d6dd2();
                                        (((struct o13_uchar *)0xC8D6828)->v) = 0x0;
                                        (((struct o12_uchar *)0xC8D6828)->v) = 0x0;
                                        (((struct o9_uchar *)0xC8D6828)->v) = a4;
                                        (((struct oA_uchar *)0xC8D6828)->v) = a5;
                                        (((struct oB_uchar *)0xC8D6828)->v) = (*(signed char *)(((int)stk + 12)));
                                        (((struct oC_uchar *)0xC8D6828)->v) = a7;
                                        (((struct oD_uchar *)0xC8D6828)->v) = ((signed char)(a8 >> 0));
                                        (((struct oE_uchar *)0xC8D6828)->v) = ((signed char)(a9 >> 0));
                                        (((struct oF_uchar *)0xC8D6828)->v) = ((signed char)(a10 >> 0));
                                        (((struct o10_uchar *)0xC8D6828)->v) = ((signed char)(a11 >> 0));
                                        (((struct o11_uchar *)0xC8D6828)->v) = ((signed char)(a12 >> 0));
                                        (((struct o0_uchar *)0xC8D6828)->v) = 0xFE;
                                        t73 = 0xC8D6839;
                                    }
                                } else {
                                    FUN_0c2ef936((*(signed char *)0xC8D2722));
                                    FUN_0c2d6dd2();
                                    (((struct o9_uchar *)0xC8D6828)->v) = a4;
                                    (((struct oA_uchar *)0xC8D6828)->v) = a5;
                                    (((struct oB_uchar *)0xC8D6828)->v) = (*(signed char *)(((int)stk + 12)));
                                    (((struct oC_uchar *)0xC8D6828)->v) = a7;
                                    (((struct oD_uchar *)0xC8D6828)->v) = ((signed char)(a8 >> 0));
                                    (((struct oE_uchar *)0xC8D6828)->v) = ((signed char)(a9 >> 0));
                                    (((struct oF_uchar *)0xC8D6828)->v) = ((signed char)(a10 >> 0));
                                    (((struct o10_uchar *)0xC8D6828)->v) = ((signed char)(a11 >> 0));
                                    (((struct o11_uchar *)0xC8D6828)->v) = ((signed char)(a12 >> 0));
                                    (((struct o0_uchar *)0xC8D6828)->v) = 0xFE;
                                    t73 = 0xC8D6839;
                                }
                            } else {
                                (((struct o9_uchar *)0xC8D6828)->v) = a4;
                                (((struct oA_uchar *)0xC8D6828)->v) = a5;
                                (((struct oB_uchar *)0xC8D6828)->v) = (*(signed char *)(((int)stk + 12)));
                                (((struct oC_uchar *)0xC8D6828)->v) = a7;
                                (((struct oD_uchar *)0xC8D6828)->v) = ((signed char)(a8 >> 0));
                                (((struct oE_uchar *)0xC8D6828)->v) = ((signed char)(a9 >> 0));
                                (((struct oF_uchar *)0xC8D6828)->v) = ((signed char)(a10 >> 0));
                                (((struct o10_uchar *)0xC8D6828)->v) = ((signed char)(a11 >> 0));
                                (((struct o11_uchar *)0xC8D6828)->v) = ((signed char)(a12 >> 0));
                                (((struct o0_uchar *)0xC8D6828)->v) = 0xFE;
                                t73 = 0xC8D6839;
                            }
                        } else {
                            *(unsigned char *)0xC8D2726 = ((*(signed char *)0xC8D2726) | 0x5);
                            FUN_0c2d7806(0x10);
                            t73 = FUN_0c2d7778(0x0);
                            (((struct o9_uchar *)0xC8D6828)->v) = a4;
                            (((struct o0_uchar *)0xC8D6828)->v) = 0xFE;
                        }
                    } else {
                        FUN_0c2d6dd2();
                        (((struct o9_uchar *)0xC8D6828)->v) = a4;
                        (((struct oA_uchar *)0xC8D6828)->v) = a5;
                        (((struct oB_uchar *)0xC8D6828)->v) = (*(signed char *)(((int)stk + 12)));
                        (((struct oC_uchar *)0xC8D6828)->v) = a7;
                        (((struct oD_uchar *)0xC8D6828)->v) = ((signed char)(a8 >> 0));
                        (((struct oE_uchar *)0xC8D6828)->v) = ((signed char)(a9 >> 0));
                        (((struct oF_uchar *)0xC8D6828)->v) = ((signed char)(a10 >> 0));
                        (((struct o10_uchar *)0xC8D6828)->v) = ((signed char)(a11 >> 0));
                        (((struct o11_uchar *)0xC8D6828)->v) = ((signed char)(a12 >> 0));
                        (((struct o0_uchar *)0xC8D6828)->v) = 0xFE;
                        t73 = 0xC8D6839;
                    }
                } else {
                    (((struct o9_uchar *)0xC8D6828)->v) = a4;
                    (((struct oA_uchar *)0xC8D6828)->v) = a5;
                    (((struct oB_uchar *)0xC8D6828)->v) = (*(signed char *)(((int)stk + 12)));
                    (((struct oC_uchar *)0xC8D6828)->v) = a7;
                    (((struct oD_uchar *)0xC8D6828)->v) = ((signed char)(a8 >> 0));
                    (((struct oE_uchar *)0xC8D6828)->v) = ((signed char)(a9 >> 0));
                    (((struct oF_uchar *)0xC8D6828)->v) = ((signed char)(a10 >> 0));
                    (((struct o10_uchar *)0xC8D6828)->v) = ((signed char)(a11 >> 0));
                    (((struct o11_uchar *)0xC8D6828)->v) = ((signed char)(a12 >> 0));
                    (((struct o0_uchar *)0xC8D6828)->v) = 0xFE;
                    t73 = 0xC8D6839;
                }
            } else {
                *(int *)((int)stk + 8) = ((signed char)(a11 >> 0));
                *(int *)((int)stk + 4) = ((signed char)(a10 >> 0));
                *(int *)((int)stk + 0) = ((signed char)(a9 >> 0));
                FUN_0c2d6e1e(a5, (*(signed char *)(((int)stk + 12))), a7, ((signed char)(a8 >> 0)), ((signed char)(a9 >> 0)), ((signed char)(a10 >> 0)), ((signed char)(a11 >> 0)));
                (((struct o9_uchar *)0xC8D6828)->v) = a4;
                (((struct oA_uchar *)0xC8D6828)->v) = a5;
                (((struct oB_uchar *)0xC8D6828)->v) = (*(signed char *)(((int)stk + 12)));
                (((struct oC_uchar *)0xC8D6828)->v) = a7;
                (((struct oD_uchar *)0xC8D6828)->v) = ((signed char)(a8 >> 0));
                (((struct oE_uchar *)0xC8D6828)->v) = ((signed char)(a9 >> 0));
                (((struct oF_uchar *)0xC8D6828)->v) = ((signed char)(a10 >> 0));
                (((struct o10_uchar *)0xC8D6828)->v) = ((signed char)(a11 >> 0));
                (((struct o11_uchar *)0xC8D6828)->v) = ((signed char)(a12 >> 0));
                (((struct o0_uchar *)0xC8D6828)->v) = 0xFE;
                t73 = 0xC8D6839;
            }
        }
    }
    return t73;
}

int FUN_0c2faac8(int a4, int a5, int a6, int a7)
{
    int stk[2];
    register int t2;
    register int t5;
    register int t7;
    register int t27;
    register int t28;

    *(unsigned char *)(((int)stk + 4)) = a5;
    *(unsigned char *)(((int)stk + 0)) = a6;
    (((struct o11_uchar *)0xC8E0300)->v) = a4;
    (((struct o12_uchar *)0xC8E0300)->v) = a7;
    (((struct o0_uchar *)0xC8D7056)->v) = 0x1;
    FUN_0c2faa70();
    FUN_0c2faaac();
    t2 = *(signed char *)(((int)stk + 0));
    if ((unsigned char)t2 == 8) {
        (((struct o2A_uchar *)0xC8D7056)->v) = 0x7;
    } else {
        (((struct o2A_uchar *)0xC8D7056)->v) = 0x8;
    }
    t5 = *(signed char *)0xC8E0311;
    if (((unsigned char)t5 != 2) && ((unsigned char)t5 != 24)) {
        (((struct o29_uchar *)0xC8D7056)->v) = 0x8;
    } else {
        (((struct o29_uchar *)0xC8D7056)->v) = 0x4;
    }
    t7 = *(signed char *)(((int)stk + 4));
    if ((int)(unsigned char)t7 <= (int)0x2) {
        (((struct o15_uchar *)0xC8E0300)->v) = 0xB;
    } else {
        if ((int)(unsigned char)t7 <= (int)0x1B) {
            (((struct o15_uchar *)0xC8E0300)->v) = 0x37;
        } else {
            (((struct o15_uchar *)0xC8E0300)->v) = 0xF2;
        }
    }
    if ((unsigned char)t2 == 0xFE) {
        (((struct o0_ushort *)0xC8E0300)->v) = 0x118;
    } else {
        if ((unsigned char)t2 == 0xFF) {
            (((struct o0_uchar *)0xC8D7056)->v) = 0x9;
            if ((unsigned int)(unsigned char)t7 < (unsigned int)0xD) {
                switch (((unsigned char)t7 << 1)) {
                    case 0:
                    case 2:
                    case 4:
                    {
                        (((struct o0_ushort *)0xC8E0300)->v) = 0x6;
                    }
                        break;
                    case 6:
                    {
                        (((struct o0_ushort *)0xC8E0300)->v) = 0xC;
                    }
                        break;
                    case 8:
                    {
                        (((struct o0_ushort *)0xC8E0300)->v) = 0x18;
                    }
                        break;
                    case 10:
                    {
                        (((struct o0_ushort *)0xC8E0300)->v) = 0x24;
                    }
                        break;
                    case 12:
                    {
                        (((struct o0_ushort *)0xC8E0300)->v) = 0x30;
                    }
                        break;
                    case 14:
                    {
                        (((struct o0_ushort *)0xC8E0300)->v) = 0x3C;
                    }
                        break;
                    case 16:
                    {
                        (((struct o0_ushort *)0xC8E0300)->v) = 0x48;
                    }
                        break;
                    case 18:
                    {
                        (((struct o0_ushort *)0xC8E0300)->v) = 0x54;
                    }
                        break;
                    case 20:
                    {
                        (((struct o0_ushort *)0xC8E0300)->v) = 0x60;
                    }
                        break;
                    case 22:
                    {
                        (((struct o0_ushort *)0xC8E0300)->v) = 0x6C;
                    }
                        break;
                    default:
                    {
                        (((struct o0_ushort *)0xC8E0300)->v) = 0x78;
                    }
                        break;
                }
            } else {
                (((struct o0_ushort *)0xC8E0300)->v) = 0x80;
            }
        } else {
            (((struct o0_ushort *)0xC8E0300)->v) = 0x80;
        }
    }
    t27 = *(signed char *)0xC8E0311;
    t28 = (unsigned char)t27;
    if (((unsigned char)t27 != 22) && (((unsigned char)t27 != 23) && ((unsigned char)t27 != 24))) {
        (((struct o18_uint *)0xC8E0300)->v) = 0xC2EEF70;
        (((struct o1C_uint *)0xC8E0300)->v) = 0xC2EF050;
        (((struct o20_uint *)0xC8E0300)->v) = 0xC2EEDC6;
        (((struct o24_uint *)0xC8E0300)->v) = 0xC2EEEF8;
        (((struct o28_uint *)0xC8E0300)->v) = 0xC2EF3A0;
        t28 = 0xC8E0324;
    }
    return t28;
}

int FUN_0c17f8d0(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;

    t0 = *(short *)((((a4 + (*(int *)0xC8A6C9C)) << 1) + ((((struct o0_int *)0xC86CBCC)->v))));
    t1 = (((struct o10_int *)0xC86CBCC)->v);
    t2 = *(int *)((((((t0 << 2) << 2) << 1) + t1) + 0xC));
    if ((*(int *)0xC2A6078) != 0) {
        if (((0x7 & ((unsigned int)t2 >> 27)) == 5) || ((0x7 & ((unsigned int)t2 >> 27)) == 6)) {
            t3 = *(int *)((((((t0 << 2) << 2) << 1) + t1) + 0xC));
            *(unsigned int *)((((((t0 << 2) << 2) << 1) + t1) + 0xC)) = ((t3 & 0xF81FFFFF) | (a5 << 21));
            t4 = (0x3F & ((unsigned int)t3 >> 21));
        }
        t3 = t4;
    } else {
        if (((*(int *)0xC868B7C) != 0) && (((0x7 & ((unsigned int)t2 >> 27)) == 5) || ((0x7 & ((unsigned int)t2 >> 27)) == 6))) {
            t2 = *(short *)((((((t0 << 2) << 2) << 1) + t1) + 0x16));
            res_texture_slot_tick_release((unsigned short)t2);
            *(unsigned short *)((((((t0 << 2) << 2) << 1) + t1) + 0x16)) = 0xFFFF;
            if ((int)a5 < (int)((((struct o0_short *)0xC8B85C4)->v))) {
                *(unsigned short *)((((((t0 << 2) << 2) << 1) + t1) + 0x16)) = a5;
                t4 = (((struct o14_int *)0xC8B85C4)->v);
                t5 = *(int *)0xC868B7C;
                if ((*(short *)(((t4 + ((a5 << 2) << 1)) + 0x4))) != 0) {
                    *(unsigned short *)(((t4 + ((a5 << 2) << 1)) + 0x4)) = ((*(short *)(((t4 + ((a5 << 2) << 1)) + 0x4))) + 0x1);
                    t6 = (*(short *)(((t4 + ((a5 << 2) << 1)) + 0x0)));
                } else {
                    *(unsigned char *)(((t4 + ((a5 << 2) << 1)) + 0x2)) = (*(signed char *)((((((a5 << 1) + a5) << 2) + t5) + 0x2)));
                    *(unsigned char *)(((t4 + ((a5 << 2) << 1)) + 0x3)) = ((int)((*(int *)((((((a5 << 1) + a5) << 2) + t5) + 0x8))) + 0xF) >> 4);
                    *(unsigned short *)(((t4 + ((a5 << 2) << 1)) + 0x4)) = 0x1;
                    *(unsigned short *)(((t4 + ((a5 << 2) << 1)) + 0x6)) = a5;
                    t7 = *(int *)((((((a5 << 1) + a5) << 2) + t5) + 0x8));
                    t8 = nlSearchPalette((*(short *)((((((a5 << 1) + a5) << 2) + t5) + 0x2))), t7);
                    t6 = 0x0;
                    if ((int)t8 >= 0) {
                        *(unsigned short *)(((t4 + ((a5 << 2) << 1)) + 0x0)) = t8;
                        FUN_0c1772e0(t8, t7);
                        nlSetPaletteData(((t8 << 2) << 2), (*(int *)((((((a5 << 1) + a5) << 2) + t5) + 0x4))), t7);
                        t6 = t8;
                    }
                }
                *(unsigned int *)((((((t0 << 2) << 2) << 1) + t1) + 0xC)) = (((*(int *)((((((t0 << 2) << 2) << 1) + t1) + 0xC))) & 0xF81FFFFF) | (t6 << 21));
            }
            t0 = (unsigned short)t2;
        }
        t3 = t0;
    }
    return t3;
}

int kmyGetDMAHANDLE(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    if (((((struct o4_int *)0xC2DF464)->v)) == 0) {
        (((struct o8_uint *)0xC2DF464)->v) = (_builtin_get_imask());
        _builtin_set_imask(0xF);
    }
    (((struct o4_uint *)0xC2DF464)->v) = (((((struct o4_int *)0xC2DF464)->v)) + 0x1);
    if (a4 != 0) {
        if (a4 != 1) {
            t0 = 0x0;
            if (a4 != 2) {
            } else {
                t1 = 0x0;
                if ((int)((((struct o38_short *)0xC2DF464)->v)) < (int)0x20) {
                    (((struct o38_ushort *)0xC2DF464)->v) = (((((struct o38_short *)0xC2DF464)->v)) + 0x1);
                    t2 = (((struct o34_short *)0xC2DF464)->v);
                    (((struct o34_ushort *)0xC2DF464)->v) = (t2 + 0x1);
                    (((struct o34_ushort *)0xC2DF464)->v) = (((((struct o34_short *)0xC2DF464)->v)) & 0x1F);
                    t1 = (((((short)((t2 + 0x1) - 1) << 2) << 2) << 2) + 0xC2E04A0);
                }
                t0 = t1;
            }
            t1 = t0;
        } else {
            t0 = 0x0;
            if ((int)((((struct o32_short *)0xC2DF464)->v)) < (int)0x20) {
                (((struct o32_ushort *)0xC2DF464)->v) = (((((struct o32_short *)0xC2DF464)->v)) + 0x1);
                t2 = (((struct o2E_short *)0xC2DF464)->v);
                (((struct o2E_ushort *)0xC2DF464)->v) = (t2 + 0x1);
                (((struct o2E_ushort *)0xC2DF464)->v) = (((((struct o2E_short *)0xC2DF464)->v)) & 0x1F);
                t0 = (((((short)((t2 + 0x1) - 1) << 2) << 2) << 2) + 0xC2DFCA0);
            }
            t1 = t0;
        }
        t0 = t1;
    } else {
        t1 = 0x0;
        if ((int)((((struct o2C_short *)0xC2DF464)->v)) < (int)0x20) {
            (((struct o2C_ushort *)0xC2DF464)->v) = (((((struct o2C_short *)0xC2DF464)->v)) + 0x1);
            t2 = (((struct o28_short *)0xC2DF464)->v);
            (((struct o28_ushort *)0xC2DF464)->v) = (t2 + 0x1);
            (((struct o28_ushort *)0xC2DF464)->v) = (((((struct o28_short *)0xC2DF464)->v)) & 0x1F);
            t1 = (((((short)((t2 + 0x1) - 1) << 2) << 2) << 2) + 0xC2DF4A0);
        }
        t0 = t1;
    }
    if (t0 == 0) {
        t1 = (((struct o4_int *)0xC2DF464)->v);
        (((struct o4_uint *)0xC2DF464)->v) = (t1 - 1);
        if ((t1 - 1) == 0) {
            _builtin_set_imask(((unsigned int)(((((((struct o8_int *)0xC2DF464)->v)) & 0xF) << 2) << 2) >> 4));
        }
        t1 = 0x0;
    } else {
        kmyZeroMemory(t0, 0x40);
        *(unsigned int *)((t0 + 0x28)) = 0x1;
        *(unsigned int *)((t0 + 0x20)) = a4;
        t2 = (((struct o0_int *)0xC2DF464)->v);
        (((struct o0_uint *)0xC2DF464)->v) = (t2 + 0x1);
        *(unsigned int *)((t0 + 0x0)) = ((t2 + 0x1) - 1);
        if ((unsigned int)((((struct o0_int *)0xC2DF464)->v)) >= (unsigned int)0x80000000) {
            (((struct o0_uint *)0xC2DF464)->v) = 0x1;
        }
        t1 = t0;
    }
    return t1;
}
