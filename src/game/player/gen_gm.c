/* Straight-line functions with calls and guards (batch gen_gm): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o10_float { char p[0x10]; float v; };
struct o128_float { char p[0x128]; float v; };
struct o12C_float { char p[0x12C]; float v; };
struct o130_float { char p[0x130]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17C_uint { char p[0x17C]; unsigned int v; };
struct o18_float { char p[0x18]; float v; };
struct o18C_float { char p[0x18C]; float v; };
struct o19C_uint { char p[0x19C]; unsigned int v; };
struct o1A0_uint { char p[0x1A0]; unsigned int v; };
struct o1A4_uint { char p[0x1A4]; unsigned int v; };
struct o1A8_uint { char p[0x1A8]; unsigned int v; };
struct o1AC_uint { char p[0x1AC]; unsigned int v; };
struct o1B0_uint { char p[0x1B0]; unsigned int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1EC_int { char p[0x1EC]; int v; };
struct o20_float { char p[0x20]; float v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o240_int { char p[0x240]; int v; };
struct o244_int { char p[0x244]; int v; };
struct o258_int { char p[0x258]; int v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2C8_int { char p[0x2C8]; int v; };
struct o30_float { char p[0x30]; float v; };
struct o3768_uint { char p[0x3768]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o404_int { char p[0x404]; int v; };
struct o422_uchar { char p[0x422]; unsigned char v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o6C_float { char p[0x6C]; float v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct oA4_int { char p[0xA4]; int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB4_int { char p[0xB4]; int v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oC0_float { char p[0xC0]; float v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC4_float { char p[0xC4]; float v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oD0_int { char p[0xD0]; int v; };
struct oD4_int { char p[0xD4]; int v; };
struct oE4_int { char p[0xE4]; int v; };
struct oEC_float { char p[0xEC]; float v; };
struct oF0_float { char p[0xF0]; float v; };
struct oF4_float { char p[0xF4]; float v; };
int FUN_0c037498(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c05258e(int, int, int, int, int);
int FUN_0c054e90(int, int, int, int, int, int);
int FUN_0c05507c(int, int, int, int, int, int);
int FUN_0c055252(int, int, int, int, int, int, float);
extern int FUN_0c055368();
int FUN_0c0556c8(int, int, int, int, int, int, float);
int FUN_0c055a28(void);
int FUN_0c055a2c(int, int);
int FUN_0c055a7c(int, int);
int FUN_0c055af0(int);
int FUN_0c055c60(int, int);
int FUN_0c064e70(int, int);
int FUN_0c064f80(int);
int FUN_0c0c28f6(int, int);
int FUN_0c0e9a88(int, int, float);
int FUN_0c187a88(int, int, int, int);
extern float _builtin_sqrtf(float);
int math_mat_get_translate(int, int);
int math_mat_transform_vector(int, int);
float nlScalor(int);
int thunk_FUN_0c058310(int, int);
int thunk_FUN_0c05abb2(int, int);
int FUN_0c055df0(int a4, int a5, int a6, int a7, float f4);
float FUN_0c10f674(int a4, int a5, int a6, int a7);
int FUN_0c0e9ada(int a4);
float FUN_0c0c32ec(int a4, int a5, int a6, int a7, float f4, float f5, float f6);

int FUN_0c055df0(int a4, int a5, int a6, int a7, float f4)
{
    int stk[23];

    register int R1;
    register int R2;
    int R8;
    register int T_;
    register int FPUL_;
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
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    register float w0_4;
    v0_2 = a4;
    v0_8 = a5;
    v0_7 = a6;
    v0_9 = a7;
    w0_0 = f4;
    v0_0 = (((struct o2C8_int *)(v0_2))->v);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x11C + v0_2)) = *(struct mv3 *)((v0_0 + 0x34)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x14C + v0_2)) = *(struct mv3 *)((v0_0 + 0x40)); }
    (((struct o18C_float *)(v0_2))->v) = ((((struct o18_float *)(v0_0))->v));
    (((struct o19C_uint *)(v0_2))->v) = (*(int *)((v0_0 + 0x1C)));
    (((struct o1A0_uint *)(v0_2))->v) = (*(int *)((v0_0 + 0x20)));
    (((struct o1A4_uint *)(v0_2))->v) = (*(int *)((v0_0 + 0x24)));
    (((struct o1A8_uint *)(v0_2))->v) = (*(int *)((v0_0 + 0x28)));
    (((struct o1AC_uint *)(v0_2))->v) = (*(int *)((v0_0 + 0x2C)));
    (((struct o1B0_uint *)(v0_2))->v) = (*(int *)((v0_0 + 0x30)));
    (((struct o17C_uint *)(v0_2))->v) = (*(int *)((v0_0 + 0x24)));
    v0_1 = (*(int *)((v0_0 + 0x0)));
    *(int *)((int)stk + 60) = v0_1;
    *(int *)((int)stk + 56) = (v0_0 + 0x4C);
    *(unsigned int *)(((int)stk + 64)) = (0x18C + v0_2);
    v0_3 = *(int *)(((int)stk + 64));
    FUN_0c055252((signed char)((unsigned int)((unsigned int)((*(int *)((v0_0 + 0x8))) & 0xF000000) >> 16) >> 8), v0_3, (v0_3 + 0x4), ((0x18C + v0_2) + 0x8), (v0_0 + 0x4C), v0_1, w0_0);
    v0_1 = (*(int *)((v0_0 + 0x0)));
    *(int *)((int)stk + 52) = v0_1;
    *(int *)((int)stk + 48) = (v0_0 + 0x50);
    *(unsigned int *)(((int)stk + 64)) = (0x19C + v0_2);
    FUN_0c054e90(((unsigned int)((*(int *)((v0_0 + 0x8))) & 0xF0000000) >> 28), (*(int *)(((int)stk + 64))), ((*(int *)(((int)stk + 64))) + 0x18), ((0x19C + v0_2) + 0x30), (v0_0 + 0x50), v0_1);
    v0_1 = (*(int *)((v0_0 + 0x0)));
    *(int *)((int)stk + 44) = v0_1;
    *(int *)((int)stk + 40) = (v0_0 + 0x54);
    *(unsigned int *)(((int)stk + 64)) = (0x19C + v0_2);
    FUN_0c054e90(((unsigned int)((*(int *)((v0_0 + 0x8))) & 0xF0000000) >> 28), ((*(int *)(((int)stk + 64))) + 0x4), ((*(int *)(((int)stk + 64))) + 0x1C), ((0x19C + v0_2) + 0x34), (v0_0 + 0x54), v0_1);
    v0_1 = (*(int *)((v0_0 + 0x0)));
    *(int *)((int)stk + 36) = v0_1;
    *(int *)((int)stk + 32) = (v0_0 + 0x58);
    *(unsigned int *)(((int)stk + 64)) = (0x19C + v0_2);
    FUN_0c054e90(((unsigned int)((unsigned int)((unsigned int)((*(int *)((v0_0 + 0x8))) & 0xF0000000) >> 8) >> 2) >> 2), ((*(int *)(((int)stk + 64))) + 0x8), ((*(int *)(((int)stk + 64))) + 0x20), ((0x19C + v0_2) + 0x38), (v0_0 + 0x58), v0_1);
    v0_1 = (*(int *)((v0_0 + 0x0)));
    *(int *)((int)stk + 28) = v0_1;
    *(int *)((int)stk + 24) = (v0_0 + 0x5C);
    *(unsigned int *)(((int)stk + 64)) = (0x19C + v0_2);
    FUN_0c054e90(((unsigned int)((*(int *)((v0_0 + 0x8))) & 0xF0000000) >> 28), ((*(int *)(((int)stk + 64))) + 0xC), ((*(int *)(((int)stk + 64))) + 0x24), ((0x19C + v0_2) + 0x3C), (v0_0 + 0x5C), v0_1);
    v0_1 = (*(int *)((v0_0 + 0x0)));
    *(int *)((int)stk + 20) = v0_1;
    *(int *)((int)stk + 16) = (v0_0 + 0x60);
    *(unsigned int *)(((int)stk + 64)) = (0x19C + v0_2);
    FUN_0c054e90(((unsigned int)((*(int *)((v0_0 + 0x8))) & 0xF0000000) >> 28), ((*(int *)(((int)stk + 64))) + 0x10), ((*(int *)(((int)stk + 64))) + 0x28), ((0x19C + v0_2) + 0x40), (v0_0 + 0x60), v0_1);
    v0_1 = (*(int *)((v0_0 + 0x0)));
    *(int *)((int)stk + 12) = v0_1;
    *(int *)((int)stk + 8) = (v0_0 + 0x64);
    *(unsigned int *)(((int)stk + 64)) = (0x19C + v0_2);
    FUN_0c054e90(((unsigned int)((*(int *)((v0_0 + 0x8))) & 0xF0000000) >> 28), ((*(int *)(((int)stk + 64))) + 0x14), ((*(int *)(((int)stk + 64))) + 0x2C), ((0x19C + v0_2) + 0x44), (v0_0 + 0x64), v0_1);
    v0_1 = (*(int *)((v0_0 + 0x0)));
    *(int *)((int)stk + 4) = v0_1;
    *(int *)((int)stk + 0) = (v0_0 + 0x68);
    *(unsigned int *)(((int)stk + 4)) = v0_1;
    *(unsigned int *)(((int)stk + 0)) = (v0_0 + 0x68);
    v0_3 = (0x7270);
    v0_4 = (0x3938);
    v0_5 = (0xC532498);
    v0_0 = (v0_0);
    v0_1 = (v0_2);
    v0_9 = (0x11C);
    R8 = (0xF0000);
    v0_6 = (0xABA8);
    w0_1 = (0.0f);
    w0_2 = ((1.0f + 1.0f));
    *(unsigned int *)(((int)stk + 64)) = (v0_9 + v0_1);
    FUN_0c0556c8(((int)((*(int *)((v0_0 + 0x8))) & 0xF00) >> 8), (*(int *)(((int)stk + 64))), ((*(int *)(((int)stk + 64))) + 0xC), ((v0_9 + v0_1) + 0x18), *(int *)((int)stk + 0), *(int *)((int)stk + 4), w0_0);
    v0_2 = *(int *)((v0_0 + 0xC));
    v0_7 = ((v0_2 & 0xF));
    if (((v0_2 & 0xF) == 0)) goto L_C05603C;
    if ((v0_7 == 1)) goto L_C05604E;
    if ((v0_7 == 2)) goto L_C056080;
    if ((v0_7 == 3)) goto L_C0560C8;
    if ((v0_7 != 4)) goto L_C055FF8;
    (((struct oEC_float *)(v0_1))->v) = ((((struct oC_float *)((0xEC + v0_1)))->v));
    (((struct o4_float *)((0xEC + v0_1)))->v) = ((((struct o10_float *)((0xEC + v0_1)))->v));
    (((struct o8_float *)((0xEC + v0_1)))->v) = ((((struct o14_float *)((0xEC + v0_1)))->v));
    v0_2 = ((0xEC + v0_1));
    L_C05645C:;
    v0_2 = *(int *)((v0_0 + 0xC));
    v0_7 = ((v0_2 & 0xF0));
    if (((v0_2 & 0xF0) == 0)) goto L_C0564D4;
    if ((v0_7 == 16)) goto L_C0564E6;
    if ((v0_7 == 32)) goto L_C056518;
    if ((v0_7 == 48)) goto L_C05654A;
    if ((v0_7 != 64)) goto L_C056478;
    (((struct oBC_float *)(v0_1))->v) = ((((struct oC_float *)((0xBC + v0_1)))->v));
    (((struct o4_float *)((0xBC + v0_1)))->v) = ((((struct o10_float *)((0xBC + v0_1)))->v));
    (((struct o8_float *)((0xBC + v0_1)))->v) = ((((struct o14_float *)((0xBC + v0_1)))->v));
    v0_2 = ((0xBC + v0_1));
    L_C056880:;
    v0_2 = *(int *)((v0_0 + 0x8));
    v0_7 = ((v0_2 & 0xF));
    if (((v0_2 & 0xF) == 0)) goto L_C0568B4;
    if ((v0_7 == 1)) goto L_C056914;
    if ((v0_7 == 2)) goto L_C05696C;
    if ((v0_7 != 3)) goto L_C056898;
    FUN_0c055af0(v0_1);
    v0_2 = (*(int *)((v0_0 + 0x0)));
    *(int *)((int)stk + 60) = v0_2;
    *(int *)((int)stk + 56) = (v0_0 + 0x68);
    *(unsigned int *)(((int)stk + 64)) = (0xEC + v0_1);
    v0_2 = ((int (*)(int, int, int, int, int, int))(FUN_0c055368))(((int)((*(int *)((v0_0 + 0x8))) & 0xF00000) >> 20), (*(int *)(((int)stk + 64))), ((*(int *)(((int)stk + 64))) + 0xC), ((0xEC + v0_1) + 0x18), (v0_0 + 0x68), v0_2);
    v0_2 = (*(int *)((v0_0 + 0x0)));
    *(int *)((int)stk + 52) = v0_2;
    *(int *)((int)stk + 48) = (v0_0 + 0x74);
    *(unsigned int *)(((int)stk + 64)) = (0xBC + v0_1);
    v0_2 = ((int (*)(int, int, int, int, int, int))(FUN_0c055368))((short)((unsigned int)((*(int *)((v0_0 + 0x8))) & R8) >> 16), (*(int *)(((int)stk + 64))), ((*(int *)(((int)stk + 64))) + 0xC), ((0xBC + v0_1) + 0x18), (v0_0 + 0x74), v0_2);
    L_C056B24:;
    v0_2 = (*(int *)((v0_0 + 0x0)));
    *(int *)((int)stk + 60) = v0_2;
    *(int *)((int)stk + 56) = (v0_0 + 0x58);
    *(unsigned int *)(((int)stk + 64)) = (0x17C + v0_1);
    return (FUN_0c05507c(((int)((*(int *)((v0_0 + 0x8))) & 0xF000) >> 12), (v0_0 + 0x24), ((*(int *)(((int)stk + 64))) + 0x4), ((0x17C + v0_1) + 0x8), (v0_0 + 0x58), v0_2));
    L_C056898:;
    if ((v0_7 != 4)) goto L_C0568A0;
    FUN_0c055a2c(v0_1, (0xBC + v0_1));
    v0_2 = (*(int *)((v0_0 + 0x0)));
    *(int *)((int)stk + 60) = v0_2;
    *(int *)((int)stk + 56) = (v0_0 + 0x68);
    *(unsigned int *)(((int)stk + 64)) = (0xEC + v0_1);
    v0_2 = ((int (*)(int, int, int, int, int, int))(FUN_0c055368))(((int)((*(int *)((v0_0 + 0x8))) & 0xF00000) >> 20), (*(int *)(((int)stk + 64))), ((*(int *)(((int)stk + 64))) + 0xC), ((0xEC + v0_1) + 0x18), (v0_0 + 0x68), v0_2);
    v0_2 = (*(int *)((v0_0 + 0x0)));
    *(int *)((int)stk + 52) = v0_2;
    *(int *)((int)stk + 48) = (v0_0 + 0x74);
    *(unsigned int *)(((int)stk + 64)) = (0xBC + v0_1);
    v0_2 = ((int (*)(int, int, int, int, int, int))(FUN_0c055368))((short)((unsigned int)((*(int *)((v0_0 + 0x8))) & R8) >> 16), (*(int *)(((int)stk + 64))), ((*(int *)(((int)stk + 64))) + 0xC), ((0xBC + v0_1) + 0x18), (v0_0 + 0x74), v0_2);
    goto L_C056B24;
    L_C0568A0:;
    if ((v0_7 != 5)) goto L_C0568A8;
    FUN_0c055a7c(v0_1, (0xEC + v0_1));
    v0_2 = (*(int *)((v0_0 + 0x0)));
    *(int *)((int)stk + 60) = v0_2;
    *(int *)((int)stk + 56) = (v0_0 + 0x68);
    *(unsigned int *)(((int)stk + 64)) = (0xEC + v0_1);
    v0_2 = ((int (*)(int, int, int, int, int, int))(FUN_0c055368))(((int)((*(int *)((v0_0 + 0x8))) & 0xF00000) >> 20), (*(int *)(((int)stk + 64))), ((*(int *)(((int)stk + 64))) + 0xC), ((0xEC + v0_1) + 0x18), (v0_0 + 0x68), v0_2);
    v0_2 = (*(int *)((v0_0 + 0x0)));
    *(int *)((int)stk + 52) = v0_2;
    *(int *)((int)stk + 48) = (v0_0 + 0x74);
    *(unsigned int *)(((int)stk + 64)) = (0xBC + v0_1);
    v0_2 = ((int (*)(int, int, int, int, int, int))(FUN_0c055368))((short)((unsigned int)((*(int *)((v0_0 + 0x8))) & R8) >> 16), (*(int *)(((int)stk + 64))), ((*(int *)(((int)stk + 64))) + 0xC), ((0xBC + v0_1) + 0x18), (v0_0 + 0x74), v0_2);
    goto L_C056B24;
    L_C0568A8:;
    if ((v0_7 != 6)) goto L_C0568B0;
    FUN_0c055c60(v0_1, (0xEC + v0_1));
    v0_2 = (*(int *)((v0_0 + 0x0)));
    *(int *)((int)stk + 60) = v0_2;
    *(int *)((int)stk + 56) = (v0_0 + 0x68);
    *(unsigned int *)(((int)stk + 64)) = (0xEC + v0_1);
    v0_2 = ((int (*)(int, int, int, int, int, int))(FUN_0c055368))(((int)((*(int *)((v0_0 + 0x8))) & 0xF00000) >> 20), (*(int *)(((int)stk + 64))), ((*(int *)(((int)stk + 64))) + 0xC), ((0xEC + v0_1) + 0x18), (v0_0 + 0x68), v0_2);
    v0_2 = (*(int *)((v0_0 + 0x0)));
    *(int *)((int)stk + 52) = v0_2;
    *(int *)((int)stk + 48) = (v0_0 + 0x74);
    *(unsigned int *)(((int)stk + 64)) = (0xBC + v0_1);
    v0_2 = ((int (*)(int, int, int, int, int, int))(FUN_0c055368))((short)((unsigned int)((*(int *)((v0_0 + 0x8))) & R8) >> 16), (*(int *)(((int)stk + 64))), ((*(int *)(((int)stk + 64))) + 0xC), ((0xBC + v0_1) + 0x18), (v0_0 + 0x74), v0_2);
    goto L_C056B24;
    L_C0568B0:;
    goto L_C056B24;
    L_C05696C:;
    v0_2 = (*(int *)((v0_0 + 0x0)));
    *(int *)((int)stk + 60) = v0_2;
    *(int *)((int)stk + 56) = (v0_0 + 0x68);
    *(unsigned int *)(((int)stk + 64)) = (0xEC + v0_1);
    v0_2 = ((int (*)(int, int, int, int, int, int, float))(FUN_0c055368))(((int)((*(int *)((v0_0 + 0x8))) & 0xF00000) >> 20), (*(int *)(((int)stk + 64))), ((*(int *)(((int)stk + 64))) + 0xC), ((0xEC + v0_1) + 0x18), (v0_0 + 0x68), v0_2, w0_0);
    FUN_0c055a7c(v0_1, ((0xEC + v0_1) + 0xC));
    v0_2 = (*(int *)((v0_0 + 0x0)));
    *(int *)((int)stk + 52) = v0_2;
    *(int *)((int)stk + 48) = (v0_0 + 0x74);
    *(unsigned int *)(((int)stk + 64)) = (0xBC + v0_1);
    v0_2 = ((int (*)(int, int, int, int, int, int))(FUN_0c055368))((short)((unsigned int)((*(int *)((v0_0 + 0x8))) & R8) >> 16), (*(int *)(((int)stk + 64))), ((*(int *)(((int)stk + 64))) + 0xC), ((0xBC + v0_1) + 0x18), (v0_0 + 0x74), v0_2);
    goto L_C056B24;
    L_C056914:;
    v0_2 = (*(int *)((v0_0 + 0x0)));
    *(int *)((int)stk + 60) = v0_2;
    *(int *)((int)stk + 56) = (v0_0 + 0x74);
    *(unsigned int *)(((int)stk + 64)) = (0xBC + v0_1);
    v0_2 = ((int (*)(int, int, int, int, int, int, float))(FUN_0c055368))((short)((unsigned int)((*(int *)((v0_0 + 0x8))) & R8) >> 16), (*(int *)(((int)stk + 64))), ((*(int *)(((int)stk + 64))) + 0xC), ((0xBC + v0_1) + 0x18), (v0_0 + 0x74), v0_2, w0_0);
    FUN_0c055a2c(v0_1, ((0xBC + v0_1) + 0xC));
    v0_2 = (*(int *)((v0_0 + 0x0)));
    *(int *)((int)stk + 52) = v0_2;
    *(int *)((int)stk + 48) = (v0_0 + 0x68);
    *(unsigned int *)(((int)stk + 64)) = (0xEC + v0_1);
    v0_2 = ((int (*)(int, int, int, int, int, int))(FUN_0c055368))(((int)((*(int *)((v0_0 + 0x8))) & 0xF00000) >> 20), (*(int *)(((int)stk + 64))), ((*(int *)(((int)stk + 64))) + 0xC), ((0xEC + v0_1) + 0x18), (v0_0 + 0x68), v0_2);
    goto L_C056B24;
    L_C0568B4:;
    FUN_0c055a28();
    v0_2 = (*(int *)((v0_0 + 0x0)));
    *(int *)((int)stk + 60) = v0_2;
    *(int *)((int)stk + 56) = (v0_0 + 0x68);
    *(unsigned int *)(((int)stk + 64)) = (0xEC + v0_1);
    v0_2 = ((int (*)(int, int, int, int, int, int))(FUN_0c055368))(((int)((*(int *)((v0_0 + 0x8))) & 0xF00000) >> 20), (*(int *)(((int)stk + 64))), ((*(int *)(((int)stk + 64))) + 0xC), ((0xEC + v0_1) + 0x18), (v0_0 + 0x68), v0_2);
    v0_2 = (*(int *)((v0_0 + 0x0)));
    *(int *)((int)stk + 52) = v0_2;
    *(int *)((int)stk + 48) = (v0_0 + 0x74);
    *(unsigned int *)(((int)stk + 64)) = (0xBC + v0_1);
    v0_2 = ((int (*)(int, int, int, int, int, int))(FUN_0c055368))((short)((unsigned int)((*(int *)((v0_0 + 0x8))) & R8) >> 16), (*(int *)(((int)stk + 64))), ((*(int *)(((int)stk + 64))) + 0xC), ((0xBC + v0_1) + 0x18), (v0_0 + 0x74), v0_2);
    goto L_C056B24;
    L_C056478:;
    if (!((v0_7 != 80))) goto L_C0565C0;
    if ((v0_7 != 96)) goto L_C056488;
    goto L_C0565C0;
    L_C0565C0:;
    (((struct o8_float *)((0xBC + v0_1)))->v) = w0_1;
    (((struct o4_float *)((0xBC + v0_1)))->v) = w0_1;
    (((struct oBC_float *)(v0_1))->v) = w0_1;
    v0_8 = *(int *)((v0_0 + 0xC));
    v0_7 = ((v0_8 & R8));
    v0_2 = (0x0);
    if (((v0_8 & R8) == 80)) goto L_C056620;
    if ((v0_7 == 96)) goto L_C056632;
    if ((v0_7 == 112)) goto L_C056672;
    if ((v0_7 == 0x80)) goto L_C0566B2;
    if ((v0_7 != 0x90)) goto L_C0565F0;
    v0_7 = (v0_5);
    if (((*(signed char *)((v0_5 + 0x3714))) == 0)) goto L_C05672A;
    (((struct oBC_float *)(v0_1))->v) = (((((struct oBC_float *)(v0_1))->v)) + ((((struct o28_float *)(v0_5))->v)));
    (((struct oC0_float *)(v0_1))->v) = (((((struct oC0_float *)(v0_1))->v)) + ((((struct o2C_float *)(v0_5))->v)));
    (((struct oC4_float *)(v0_1))->v) = (((((struct oC4_float *)(v0_1))->v)) + ((((struct o30_float *)(v0_5))->v)));
    v0_2 = ((v0_2 + 0x1));
    L_C05672A:;
    if (!(((*(signed char *)(((v0_7 + v0_4) + 0x3714))) != 0))) goto L_C056834;
    (((struct oBC_float *)(v0_1))->v) = (((((struct oBC_float *)(v0_1))->v)) + ((((struct o28_float *)((v0_5 + v0_4)))->v)));
    (((struct oC0_float *)(v0_1))->v) = (((((struct oC0_float *)(v0_1))->v)) + ((((struct o2C_float *)((v0_5 + v0_4)))->v)));
    (((struct oC4_float *)(v0_1))->v) = (((((struct oC4_float *)(v0_1))->v)) + ((((struct o30_float *)((v0_5 + v0_4)))->v)));
    goto L_C0567E2;
    L_C056834:;
    if ((v0_2 == 0)) goto L_C056856;
    (((struct oBC_float *)(v0_1))->v) = (((((struct oBC_float *)(v0_1))->v)) / (float)v0_2);
    (((struct oC0_float *)(v0_1))->v) = (((((struct oC0_float *)(v0_1))->v)) / (float)v0_2);
    (((struct oC4_float *)(v0_1))->v) = (((((struct oC4_float *)(v0_1))->v)) / (float)v0_2);
    w0_0 = ((float)v0_2);
    FPUL_ = (v0_2);
    L_C056856:;
    (((struct oBC_float *)(v0_1))->v) = (((((struct oBC_float *)(v0_1))->v)) + ((((struct o40_float *)(v0_0))->v)));
    (((struct oC0_float *)(v0_1))->v) = (((((struct oC0_float *)(v0_1))->v)) + ((((struct o44_float *)(v0_0))->v)));
    v0_7 = (0xC4);
    w0_3 = ((((((struct oC4_float *)(v0_1))->v)) + ((((struct o48_float *)(v0_0))->v))));
    L_C05687E:;
    *(float *)((v0_1 + v0_7)) = w0_3;
    goto L_C056880;
    L_C0567E2:;
    v0_2 = ((v0_2 + 0x1));
    goto L_C056834;
    L_C0565F0:;
    if ((v0_7 != 0xA0)) goto L_C0565FA;
    v0_7 = (v0_5);
    if (((*(signed char *)(((v0_5 + v0_3) + 0x3714))) == 0)) goto L_C0567AA;
    (((struct oBC_float *)(v0_1))->v) = (((((struct oBC_float *)(v0_1))->v)) + ((((struct o28_float *)((v0_5 + v0_3)))->v)));
    (((struct oC0_float *)(v0_1))->v) = (((((struct oC0_float *)(v0_1))->v)) + ((((struct o2C_float *)((v0_5 + v0_3)))->v)));
    (((struct oC4_float *)(v0_1))->v) = (((((struct oC4_float *)(v0_1))->v)) + ((((struct o30_float *)((v0_5 + v0_3)))->v)));
    v0_2 = ((v0_2 + 0x1));
    L_C0567AA:;
    if (((*(signed char *)(((v0_7 + v0_6) + 0x3714))) == 0)) goto L_C056834;
    (((struct oBC_float *)(v0_1))->v) = (((((struct oBC_float *)(v0_1))->v)) + ((((struct o28_float *)((v0_5 + v0_6)))->v)));
    (((struct oC0_float *)(v0_1))->v) = (((((struct oC0_float *)(v0_1))->v)) + ((((struct o2C_float *)((v0_5 + v0_6)))->v)));
    (((struct oC4_float *)(v0_1))->v) = (((((struct oC4_float *)(v0_1))->v)) + ((((struct o30_float *)((v0_5 + v0_6)))->v)));
    goto L_C0567E2;
    L_C0565FA:;
    if ((v0_7 != 0xF0)) goto L_C056604;
    v0_8 = (v0_5);
    v0_7 = (v0_5);
    v0_9 = ((0xE4E0 + v0_5));
    L_C056830:;
    if (((unsigned int)v0_7 < (unsigned int)v0_9)) goto L_C0567F8;
    goto L_C056834;
    L_C0567F8:;
    if (((*(signed char *)((v0_7 + 0x3714))) == 0)) goto L_C05682C;
    (((struct oBC_float *)(v0_1))->v) = (((((struct oBC_float *)(v0_1))->v)) + ((((struct o28_float *)(v0_8))->v)));
    (((struct oC0_float *)(v0_1))->v) = (((((struct oC0_float *)(v0_1))->v)) + ((((struct o2C_float *)(v0_8))->v)));
    (((struct oC4_float *)(v0_1))->v) = (((((struct oC4_float *)(v0_1))->v)) + ((((struct o30_float *)(v0_8))->v)));
    v0_2 = ((v0_2 + 0x1));
    L_C05682C:;
    v0_8 = ((v0_8 + v0_4));
    v0_7 = ((v0_7 + v0_4));
    goto L_C056830;
    L_C056604:;
    goto L_C056834;
    L_C0566B2:;
    if (((*(signed char *)(((v0_5 + v0_6) + 0x3714))) != 0)) goto L_C0566C2;
    goto L_C056834;
    L_C0566C2:;
    (((struct oBC_float *)(v0_1))->v) = (((((struct oBC_float *)(v0_1))->v)) + ((((struct o28_float *)((v0_5 + v0_6)))->v)));
    (((struct oC0_float *)(v0_1))->v) = (((((struct oC0_float *)(v0_1))->v)) + ((((struct o2C_float *)((v0_5 + v0_6)))->v)));
    (((struct oC4_float *)(v0_1))->v) = (((((struct oC4_float *)(v0_1))->v)) + ((((struct o30_float *)((v0_5 + v0_6)))->v)));
    goto L_C0567E2;
    L_C056672:;
    if (((*(signed char *)(((v0_5 + v0_3) + 0x3714))) != 0)) goto L_C056682;
    goto L_C056834;
    L_C056682:;
    (((struct oBC_float *)(v0_1))->v) = (((((struct oBC_float *)(v0_1))->v)) + ((((struct o28_float *)((v0_5 + v0_3)))->v)));
    (((struct oC0_float *)(v0_1))->v) = (((((struct oC0_float *)(v0_1))->v)) + ((((struct o2C_float *)((v0_5 + v0_3)))->v)));
    (((struct oC4_float *)(v0_1))->v) = (((((struct oC4_float *)(v0_1))->v)) + ((((struct o30_float *)((v0_5 + v0_3)))->v)));
    goto L_C0567E2;
    L_C056632:;
    if (((*(signed char *)(((v0_5 + v0_4) + 0x3714))) != 0)) goto L_C056642;
    goto L_C056834;
    L_C056642:;
    v0_7 = (0xBC);
    v0_8 = ((v0_5 + v0_4));
    L_C056648:;
    *(float *)((v0_1 + v0_7)) = ((*(float *)((v0_1 + v0_7))) + ((((struct o28_float *)(v0_8))->v)));
    *(float *)((v0_1 + (v0_7 + 0x4))) = ((*(float *)((v0_1 + (v0_7 + 0x4)))) + ((((struct o2C_float *)(v0_8))->v)));
    *(float *)((v0_1 + ((v0_7 + 0x4) + 0x4))) = ((*(float *)((v0_1 + ((v0_7 + 0x4) + 0x4)))) + ((((struct o30_float *)(v0_8))->v)));
    goto L_C0567E2;
    L_C056620:;
    if (((*(signed char *)((v0_5 + 0x3714))) != 0)) goto L_C05662C;
    goto L_C056834;
    L_C05662C:;
    v0_7 = (0xBC);
    v0_8 = (v0_5);
    goto L_C056648;
    L_C056488:;
    if ((v0_7 != 112)) goto L_C056490;
    goto L_C0565C0;
    L_C056490:;
    if ((v0_7 != 0x80)) goto L_C05649A;
    goto L_C0565C0;
    L_C05649A:;
    if ((v0_7 != 0x90)) goto L_C0564A4;
    goto L_C0565C0;
    L_C0564A4:;
    if ((v0_7 != 0xA0)) goto L_C0564AE;
    goto L_C0565C0;
    L_C0564AE:;
    if ((v0_7 != 0xF0)) goto L_C0564B8;
    goto L_C0565C0;
    L_C0564B8:;
    L_C0564D4:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0xBC + v0_1)) = *(struct mv3 *)((v0_0 + 0x40)); }
    goto L_C056880;
    L_C05654A:;
    (((struct oBC_float *)(v0_1))->v) = ((((*(float *)((((((struct o240_int *)(v0_1))->v)) + 0x0))) + (*(float *)((((((struct o244_int *)(v0_1))->v)) + 0x0)))) / w0_2) + ((((struct o40_float *)(v0_0))->v)));
    (((struct oBC_float *)(v0_1))->v) = (((((((struct o4_float *)(((((struct o240_int *)(v0_1))->v))))->v)) + ((((struct o4_float *)(((((struct o244_int *)(v0_1))->v))))->v))) / w0_2) + ((((struct o44_float *)(v0_0))->v)));
    w0_3 = (((((((struct o8_float *)(((((struct o240_int *)(v0_1))->v))))->v)) + ((((struct o8_float *)(((((struct o244_int *)(v0_1))->v))))->v))) / w0_2));
    w0_4 = (((((struct o48_float *)(v0_0))->v)));
    L_C056596:;
    v0_7 = (0xC4);
    w0_3 = ((w0_3 + w0_4));
    goto L_C05687E;
    L_C056518:;
    (((struct oBC_float *)(v0_1))->v) = ((*(float *)((((((struct o244_int *)(v0_1))->v)) + 0x0))) + ((((struct o40_float *)(v0_0))->v)));
    (((struct oC0_float *)(v0_1))->v) = (((((struct o4_float *)(((((struct o244_int *)(v0_1))->v))))->v)) + ((((struct o44_float *)(v0_0))->v)));
    w0_3 = (((((struct o8_float *)(((((struct o244_int *)(v0_1))->v))))->v)));
    w0_4 = (((((struct o48_float *)(v0_0))->v)));
    goto L_C056596;
    L_C0564E6:;
    (((struct oBC_float *)(v0_1))->v) = ((*(float *)((((((struct o240_int *)(v0_1))->v)) + 0x0))) + ((((struct o40_float *)(v0_0))->v)));
    (((struct oC0_float *)(v0_1))->v) = (((((struct o4_float *)(((((struct o240_int *)(v0_1))->v))))->v)) + ((((struct o44_float *)(v0_0))->v)));
    w0_3 = (((((struct o8_float *)(((((struct o240_int *)(v0_1))->v))))->v)));
    w0_4 = (((((struct o48_float *)(v0_0))->v)));
    goto L_C056596;
    L_C055FF8:;
    if (!((v0_7 != 5))) goto L_C05613E;
    if ((v0_7 != 6)) goto L_C056008;
    goto L_C05613E;
    L_C05613E:;
    *(unsigned int *)(((int)stk + 64)) = 0x0;
    (((struct o8_float *)((0xEC + v0_1)))->v) = w0_1;
    (((struct o4_float *)((0xEC + v0_1)))->v) = w0_1;
    (((struct oEC_float *)(v0_1))->v) = w0_1;
    v0_8 = *(int *)((v0_0 + 0xC));
    v0_7 = ((v0_8 & 0xF));
    v0_2 = ((0xEC + v0_1));
    if (((v0_8 & 0xF) == 5)) goto L_C056184;
    if ((v0_7 == 6)) goto L_C056196;
    if ((v0_7 == 7)) goto L_C0561E4;
    if ((v0_7 == 8)) goto L_C0561FC;
    if ((v0_7 == 9)) goto L_C05623C;
    if ((v0_7 != 10)) goto L_C056170;
    if (((*(signed char *)(((v0_5 + v0_3) + 0x3714))) == 0)) goto L_C0562F6;
    (((struct oEC_float *)(v0_1))->v) = (((((struct oEC_float *)(v0_1))->v)) + ((((struct o28_float *)((v0_5 + v0_3)))->v)));
    (((struct oF0_float *)(v0_1))->v) = (((((struct oF0_float *)(v0_1))->v)) + ((((struct o2C_float *)((v0_5 + v0_3)))->v)));
    (((struct oF4_float *)(v0_1))->v) = (((((struct oF4_float *)(v0_1))->v)) + ((((struct o30_float *)((v0_5 + v0_3)))->v)));
    *(unsigned int *)(((int)stk + 64)) = ((*(int *)(((int)stk + 64))) + 0x1);
    v0_2 = ((v0_5 + v0_3));
    L_C0562F6:;
    if (!(((*(signed char *)(((v0_5 + v0_6) + 0x3714))) != 0))) goto L_C05640A;
    (((struct oEC_float *)(v0_1))->v) = (((((struct oEC_float *)(v0_1))->v)) + ((((struct o28_float *)((v0_5 + v0_6)))->v)));
    (((struct oF0_float *)(v0_1))->v) = (((((struct oF0_float *)(v0_1))->v)) + ((((struct o2C_float *)((v0_5 + v0_6)))->v)));
    (((struct oF4_float *)(v0_1))->v) = (((((struct oF4_float *)(v0_1))->v)) + ((((struct o30_float *)((v0_5 + v0_6)))->v)));
    v0_2 = ((v0_5 + v0_6));
    goto L_C056334;
    L_C05640A:;
    if (((*(int *)(((int)stk + 64))) == 0)) goto L_C056430;
    v0_2 = *(int *)(((int)stk + 64));
    (((struct oEC_float *)(v0_1))->v) = (((((struct oEC_float *)(v0_1))->v)) / (float)v0_2);
    (((struct oF0_float *)(v0_1))->v) = (((((struct oF0_float *)(v0_1))->v)) / (float)v0_2);
    (((struct oF4_float *)(v0_1))->v) = (((((struct oF4_float *)(v0_1))->v)) / (float)v0_2);
    w0_0 = ((float)v0_2);
    FPUL_ = (v0_2);
    L_C056430:;
    (((struct oEC_float *)(v0_1))->v) = (((((struct oEC_float *)(v0_1))->v)) + ((((struct o128_float *)(v0_1))->v)));
    (((struct oF0_float *)(v0_1))->v) = (((((struct oF0_float *)(v0_1))->v)) + ((((struct o12C_float *)(v0_1))->v)));
    v0_7 = (0xF4);
    w0_3 = ((((((struct oF4_float *)(v0_1))->v)) + ((((struct o130_float *)(v0_1))->v))));
    L_C05645A:;
    *(float *)((v0_1 + v0_7)) = w0_3;
    goto L_C05645C;
    L_C056334:;
    *(unsigned int *)(((int)stk + 64)) = ((*(int *)(((int)stk + 64))) + 0x1);
    goto L_C05640A;
    L_C056170:;
    if ((v0_7 != 15)) goto L_C056178;
    v0_2 = (v0_5);
    v0_8 = (v0_5);
    v0_7 = ((0xE4E0 + v0_5));
    L_C05638C:;
    if (((unsigned int)v0_8 < (unsigned int)v0_7)) goto L_C056350;
    goto L_C05640A;
    L_C056350:;
    if (((*(signed char *)((v0_8 + 0x3714))) == 0)) goto L_C056388;
    (((struct oEC_float *)(v0_1))->v) = (((((struct oEC_float *)(v0_1))->v)) + ((((struct o28_float *)(v0_2))->v)));
    (((struct oF0_float *)(v0_1))->v) = (((((struct oF0_float *)(v0_1))->v)) + ((((struct o2C_float *)(v0_2))->v)));
    (((struct oF4_float *)(v0_1))->v) = (((((struct oF4_float *)(v0_1))->v)) + ((((struct o30_float *)(v0_2))->v)));
    *(unsigned int *)(((int)stk + 64)) = ((*(int *)(((int)stk + 64))) + 0x1);
    L_C056388:;
    v0_2 = ((v0_2 + v0_4));
    v0_8 = ((v0_8 + v0_4));
    goto L_C05638C;
    L_C056178:;
    if ((v0_7 != 14)) goto L_C056180;
    *(unsigned int *)(((int)stk + 72)) = v0_5;
    *(unsigned int *)(((int)stk + 68)) = v0_5;
    *(unsigned int *)(((int)stk + 76)) = (0xE4E0 + v0_5);
    v0_2 = (v0_5);
    L_C056402:;
    if (((unsigned int)(*(int *)(((int)stk + 68))) < (unsigned int)(*(int *)(((int)stk + 76))))) goto L_C0563AC;
    goto L_C05640A;
    L_C0563AC:;
    if (((*(signed char *)(((*(int *)(((int)stk + 68))) + 0x3714))) == 0)) goto L_C0563F6;
    thunk_FUN_0c058310((((((struct oC4_int *)((*(int *)(((int)stk + 72)))))->v)) + 0x28), (((int)stk + 64) + 0x10));
    (((struct oEC_float *)(v0_1))->v) = (((((struct oEC_float *)(v0_1))->v)) + ((((struct o10_float *)(((int)stk + 64)))->v)));
    (((struct oF0_float *)(v0_1))->v) = (((((struct oF0_float *)(v0_1))->v)) + ((((struct o14_float *)(((int)stk + 64)))->v)));
    (((struct oF4_float *)(v0_1))->v) = (((((struct oF4_float *)(v0_1))->v)) + ((((struct o18_float *)(((int)stk + 64)))->v)));
    *(unsigned int *)(((int)stk + 64)) = ((*(int *)(((int)stk + 64))) + 0x1);
    L_C0563F6:;
    *(unsigned int *)(((int)stk + 72)) = ((*(int *)(((int)stk + 72))) + v0_4);
    *(unsigned int *)(((int)stk + 68)) = ((*(int *)(((int)stk + 68))) + v0_4);
    goto L_C056402;
    L_C056180:;
    goto L_C05640A;
    L_C05623C:;
    if (((*(signed char *)((v0_5 + 0x3714))) == 0)) goto L_C056276;
    (((struct oEC_float *)(v0_1))->v) = (((((struct oEC_float *)(v0_1))->v)) + ((((struct o28_float *)(v0_5))->v)));
    (((struct oF0_float *)(v0_1))->v) = (((((struct oF0_float *)(v0_1))->v)) + ((((struct o2C_float *)(v0_5))->v)));
    (((struct oF4_float *)(v0_1))->v) = (((((struct oF4_float *)(v0_1))->v)) + ((((struct o30_float *)(v0_5))->v)));
    *(unsigned int *)(((int)stk + 64)) = ((*(int *)(((int)stk + 64))) + 0x1);
    v0_2 = (v0_5);
    L_C056276:;
    if (((*(signed char *)(((v0_5 + v0_4) + 0x3714))) != 0)) goto L_C056286;
    goto L_C05640A;
    L_C056286:;
    (((struct oEC_float *)(v0_1))->v) = (((((struct oEC_float *)(v0_1))->v)) + ((((struct o28_float *)((v0_5 + v0_4)))->v)));
    (((struct oF0_float *)(v0_1))->v) = (((((struct oF0_float *)(v0_1))->v)) + ((((struct o2C_float *)((v0_5 + v0_4)))->v)));
    (((struct oF4_float *)(v0_1))->v) = (((((struct oF4_float *)(v0_1))->v)) + ((((struct o30_float *)((v0_5 + v0_4)))->v)));
    v0_2 = ((v0_5 + v0_4));
    goto L_C056334;
    L_C0561FC:;
    if (((*(signed char *)(((v0_5 + v0_6) + 0x3714))) != 0)) goto L_C05620C;
    goto L_C05640A;
    L_C05620C:;
    v0_7 = (0xEC);
    v0_2 = ((v0_5 + v0_6));
    L_C056212:;
    *(float *)((v0_1 + v0_7)) = ((*(float *)((v0_1 + v0_7))) + ((((struct o28_float *)(v0_2))->v)));
    *(float *)((v0_1 + (v0_7 + 0x4))) = ((*(float *)((v0_1 + (v0_7 + 0x4)))) + ((((struct o2C_float *)(v0_2))->v)));
    *(float *)((v0_1 + ((v0_7 + 0x4) + 0x4))) = ((*(float *)((v0_1 + ((v0_7 + 0x4) + 0x4)))) + ((((struct o30_float *)(v0_2))->v)));
    goto L_C056334;
    L_C0561E4:;
    if (((*(signed char *)(((v0_5 + v0_3) + 0x3714))) != 0)) goto L_C0561F4;
    goto L_C05640A;
    L_C0561F4:;
    v0_7 = (0xEC);
    v0_2 = ((v0_5 + v0_3));
    L_C0561AC:;
    *(float *)((v0_1 + v0_7)) = ((*(float *)((v0_1 + v0_7))) + ((((struct o28_float *)(v0_2))->v)));
    *(float *)((v0_1 + (v0_7 + 0x4))) = ((*(float *)((v0_1 + (v0_7 + 0x4)))) + ((((struct o2C_float *)(v0_2))->v)));
    *(float *)((v0_1 + ((v0_7 + 0x4) + 0x4))) = ((*(float *)((v0_1 + ((v0_7 + 0x4) + 0x4)))) + ((((struct o30_float *)(v0_2))->v)));
    goto L_C056334;
    L_C056196:;
    if (((*(signed char *)(((v0_5 + v0_4) + 0x3714))) != 0)) goto L_C0561A6;
    goto L_C05640A;
    L_C0561A6:;
    v0_7 = (0xEC);
    v0_2 = ((v0_5 + v0_4));
    goto L_C0561AC;
    L_C056184:;
    if (((*(signed char *)((v0_5 + 0x3714))) != 0)) goto L_C056190;
    goto L_C05640A;
    L_C056190:;
    v0_7 = (0xEC);
    v0_2 = (v0_5);
    goto L_C056212;
    L_C056008:;
    if ((v0_7 != 7)) goto L_C056010;
    goto L_C05613E;
    L_C056010:;
    if ((v0_7 != 8)) goto L_C056018;
    goto L_C05613E;
    L_C056018:;
    if ((v0_7 != 9)) goto L_C056020;
    goto L_C05613E;
    L_C056020:;
    if ((v0_7 != 10)) goto L_C056028;
    goto L_C05613E;
    L_C056028:;
    if ((v0_7 != 15)) goto L_C056030;
    goto L_C05613E;
    L_C056030:;
    if ((v0_7 != 14)) goto L_C056038;
    goto L_C05613E;
    L_C056038:;
    L_C05603C:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0xEC + v0_1)) = *(struct mv3 *)((0x128 + v0_1)); }
    goto L_C05645C;
    L_C0560C8:;
    (((struct oEC_float *)(v0_1))->v) = ((((*(float *)((((((struct o240_int *)(v0_1))->v)) + 0x0))) + (*(float *)((((((struct o244_int *)(v0_1))->v)) + 0x0)))) / w0_2) + ((((struct o128_float *)(v0_1))->v)));
    (((struct oEC_float *)(v0_1))->v) = (((((((struct o4_float *)(((((struct o240_int *)(v0_1))->v))))->v)) + ((((struct o4_float *)(((((struct o244_int *)(v0_1))->v))))->v))) / w0_2) + ((((struct o12C_float *)(v0_1))->v)));
    w0_3 = (((((((struct o8_float *)(((((struct o240_int *)(v0_1))->v))))->v)) + ((((struct o8_float *)(((((struct o244_int *)(v0_1))->v))))->v))) / w0_2));
    w0_4 = (((((struct o130_float *)(v0_1))->v)));
    L_C056114:;
    v0_7 = (0xF4);
    w0_3 = ((w0_3 + w0_4));
    goto L_C05645A;
    L_C056080:;
    (((struct oEC_float *)(v0_1))->v) = ((*(float *)((((((struct o244_int *)(v0_1))->v)) + 0x0))) + ((((struct o128_float *)(v0_1))->v)));
    (((struct oF0_float *)(v0_1))->v) = (((((struct o4_float *)(((((struct o244_int *)(v0_1))->v))))->v)) + ((((struct o12C_float *)(v0_1))->v)));
    w0_3 = (((((struct o8_float *)(((((struct o244_int *)(v0_1))->v))))->v)));
    w0_4 = (((((struct o130_float *)(v0_1))->v)));
    goto L_C056114;
    L_C05604E:;
    (((struct oEC_float *)(v0_1))->v) = ((*(float *)((((((struct o240_int *)(v0_1))->v)) + 0x0))) + ((((struct o128_float *)(v0_1))->v)));
    (((struct oF0_float *)(v0_1))->v) = (((((struct o4_float *)(((((struct o240_int *)(v0_1))->v))))->v)) + ((((struct o12C_float *)(v0_1))->v)));
    w0_3 = (((((struct o8_float *)(((((struct o240_int *)(v0_1))->v))))->v)));
    w0_4 = (((((struct o130_float *)(v0_1))->v)));
    goto L_C056114;
}

float FUN_0c10f674(int a4, int a5, int a6, int a7)
{
    int stk[34];

    register int R1;
    register int R2;
    int R10;
    register float F0;
    register float F2;
    register float F3;
    register float F10;
    register float F11;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_10;
    register int v0_11;
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
    register float w0_4;
    register float w0_5;
    register float w0_6;
    register float w0_7;
    register float w0_8;
    v0_3 = a4;
    v0_4 = a5;
    v0_6 = a6;
    v0_5 = a7;
    v0_7 = *(signed char *)((v0_3 + 0x14));
    v0_8 = (v0_7);
    v0_2 = (0x1);
    v0_0 = (0x0);
    v0_1 = (v0_3);
    if ((v0_7 == 0)) goto L_C10F6AA;
    if ((v0_8 != 1)) goto L_C10F69E;
    L_C10F7FC:;
    *(unsigned int *)(((int)stk + 36)) = ((*(int *)((((((struct oE4_int *)(v0_1))->v)) + 0x8))) + 0x70);
    v0_10 = *(signed char *)((v0_1 + 0x15));
    v0_8 = (v0_10);
    R10 = (0x4);
    v0_9 = (0x6);
    v0_6 = (0x3);
    v0_7 = (0x2);
    if ((v0_10 == 0)) goto L_C10F832;
    if ((v0_8 == 1)) goto L_C10F83C;
    if ((v0_8 == 2)) goto L_C10F846;
    if ((v0_8 == 3)) goto L_C10F850;
    if ((v0_8 == 4)) goto L_C10F85A;
    if ((v0_8 == 5)) goto L_C10F864;
    if (!((v0_8 == 6))) goto L_C10F872;
    v0_3 = (0x7);
    v0_4 = (v0_9);
    goto L_C10F86E;
    L_C10F872:;
    v0_8 = *(int *)(((*(int *)(((0xC4 + v0_1) + (v0_4 << 2)))) + 0x8));
    v0_3 = *(int *)(((*(int *)(((0xC4 + v0_1) + (v0_3 << 2)))) + 0x8));
    v0_7 = *(int *)(((*(int *)(((0xC4 + v0_1) + (v0_5 << 2)))) + 0x8));
    *(unsigned int *)(((int)stk + 48)) = ((*(int *)(((*(int *)(((0xC4 + v0_1) + (v0_6 << 2)))) + 0x8))) + 0x70);
    *(unsigned int *)(((int)stk + 4)) = (*(int *)(((int)stk + 36)));
    *(unsigned int *)(((int)stk + 8)) = v0_0;
    *(unsigned int *)(((int)stk + 16)) = ((((int)stk + 4) + 0x64) + 0x10);
    *(unsigned int *)(((int)stk + 44)) = ((((int)stk + 4) + 0x64) + 0x14);
    *(unsigned int *)(((int)stk + 40)) = ((((int)stk + 4) + 0x64) + 0x18);
    *(unsigned int *)(((int)stk + 52)) = ((((int)stk + 4) + 0x64) + 0x1C);
    *(unsigned int *)(((int)stk + 32)) = (((int)stk + 4) + 0x64);
    *(unsigned int *)(((int)stk + 24)) = ((((int)stk + 4) + 0x64) + 0x4);
    *(unsigned int *)(((int)stk + 12)) = ((((int)stk + 4) + 0x64) + 0x8);
    *(unsigned int *)(((int)stk + 28)) = ((((int)stk + 4) + 0x64) + 0xC);
    R10 = ((v0_3 + 0x70));
    v0_9 = ((((int)stk + 4) + 0x64));
    v0_3 = ((((int)stk + 4) + 0x58));
    v0_4 = ((((int)stk + 4) + 0x34));
    v0_6 = ((((int)stk + 4) + 0x40));
    v0_5 = ((((int)stk + 4) + 0x4C));
    v0_8 = ((v0_8 + 0x70));
    v0_7 = ((v0_7 + 0x70));
    w0_0 = (-1.0f);
    w0_1 = (0.166666672f);
    w0_2 = (0.5f);
    w0_3 = (5.0f);
    w0_4 = (1.0f);
    w0_5 = (0.666666687f);
    L_C10FABA:;
    if (((unsigned int)(*(int *)(((int)stk + 8))) >= (unsigned int)0xA0)) goto L_C10FAC6;
    v0_10 = *(int *)(((int)stk + 8));
    *(unsigned int *)(((int)stk + 20)) = (v0_10 + v0_8);
    *(float *)((v0_3 + 0x0)) = (*(float *)(((v0_10 + v0_8) + 0x0)));
    (((struct o4_float *)(v0_3))->v) = ((((struct o4_float *)((*(int *)(((int)stk + 20)))))->v));
    (((struct o8_float *)(v0_3))->v) = ((((struct o8_float *)((*(int *)(((int)stk + 20)))))->v));
    v0_10 = *(int *)(((int)stk + 8));
    *(unsigned int *)(((int)stk + 20)) = (v0_10 + R10);
    *(float *)((v0_5 + 0x0)) = (*(float *)(((v0_10 + R10) + 0x0)));
    (((struct o4_float *)(v0_5))->v) = ((((struct o4_float *)((*(int *)(((int)stk + 20)))))->v));
    (((struct o8_float *)(v0_5))->v) = ((((struct o8_float *)((*(int *)(((int)stk + 20)))))->v));
    v0_10 = *(int *)(((int)stk + 8));
    *(unsigned int *)(((int)stk + 20)) = (v0_10 + v0_7);
    *(float *)((v0_6 + 0x0)) = (*(float *)(((v0_10 + v0_7) + 0x0)));
    (((struct o4_float *)(v0_6))->v) = ((((struct o4_float *)((*(int *)(((int)stk + 20)))))->v));
    (((struct o8_float *)(v0_6))->v) = ((((struct o8_float *)((*(int *)(((int)stk + 20)))))->v));
    v0_10 = *(int *)(((int)stk + 8));
    v0_11 = *(int *)(((int)stk + 48));
    *(unsigned int *)(((int)stk + 20)) = (v0_10 + v0_11);
    *(float *)((v0_4 + 0x0)) = (*(float *)(((v0_10 + v0_11) + 0x0)));
    (((struct o4_float *)(v0_4))->v) = ((((struct o4_float *)((*(int *)(((int)stk + 20)))))->v));
    (((struct o8_float *)(v0_4))->v) = ((((struct o8_float *)((*(int *)(((int)stk + 20)))))->v));
    if (((*(signed char *)((v0_1 + 0x2))) != 0)) goto L_C10F9A8;
    *(float *)((v0_3 + 0x0)) = ((*(float *)((v0_3 + 0x0))) * w0_0);
    *(float *)((v0_5 + 0x0)) = ((*(float *)((v0_5 + 0x0))) * w0_0);
    *(float *)((v0_6 + 0x0)) = ((*(float *)((v0_6 + 0x0))) * w0_0);
    *(float *)((v0_4 + 0x0)) = ((*(float *)((v0_4 + 0x0))) * w0_0);
    L_C10F9A8:;
    v0_10 = *(short *)((v0_1 + 0x1C));
    w0_6 = (((float)v0_10 / w0_3) * ((float)v0_10 / w0_3));
    *(float *)(((*(int *)(((int)stk + 16))) + 0x0)) = (w0_6 * ((float)v0_10 / w0_3));
    *(float *)(((*(int *)(((int)stk + 44))) + 0x0)) = (((float)v0_10 / w0_3) * ((float)v0_10 / w0_3));
    w0_6 = ((w0_4 - ((float)v0_10 / w0_3)) * (w0_4 - ((float)v0_10 / w0_3)));
    *(float *)(((*(int *)(((int)stk + 40))) + 0x0)) = (w0_6 * (w0_4 - ((float)v0_10 / w0_3)));
    *(float *)(((*(int *)(((int)stk + 52))) + 0x0)) = ((w0_4 - ((float)v0_10 / w0_3)) * (w0_4 - ((float)v0_10 / w0_3)));
    *(float *)(((*(int *)(((int)stk + 32))) + 0x0)) = ((*(float *)(((*(int *)(((int)stk + 40))) + 0x0))) * w0_1);
    *(float *)(((*(int *)(((int)stk + 24))) + 0x0)) = (((((*(float *)(((*(int *)(((int)stk + 16))) + 0x0))) * w0_2)) - (*(float *)(((*(int *)(((int)stk + 44))) + 0x0)))) + w0_5);
    w0_6 = w0_1;
    w0_6 = w0_6 + w0_2 * ((((*(float *)(((*(int *)(((int)stk + 44))) + 0x0))) - (*(float *)(((*(int *)(((int)stk + 16))) + 0x0)))) + ((float)v0_10 / w0_3)));
    *(float *)(((*(int *)(((int)stk + 12))) + 0x0)) = w0_6;
    *(float *)(((*(int *)(((int)stk + 28))) + 0x0)) = ((*(float *)(((*(int *)(((int)stk + 16))) + 0x0))) * w0_1);
    v0_11 = (*(int *)(((int)stk + 4)));
    *(int *)((int)stk + 0) = v0_11;
    w0_6 = ((*(float *)(((*(int *)(((int)stk + 24))) + 0x0))) * (*(float *)((v0_5 + 0x0))));
    w0_6 = w0_6 + (*(float *)((v0_3 + 0x0))) * (*(float *)(((*(int *)(((int)stk + 32))) + 0x0)));
    w0_6 = w0_6;
    w0_6 = w0_6 + (*(float *)((v0_6 + 0x0))) * (*(float *)(((*(int *)(((int)stk + 12))) + 0x0)));
    w0_6 = w0_6;
    w0_6 = w0_6 + (*(float *)((v0_4 + 0x0))) * (*(float *)(((*(int *)(((int)stk + 28))) + 0x0)));
    *(float *)((v0_11 + 0x0)) = w0_6;
    v0_11 = *(int *)(((int)stk + 4));
    *(int *)((int)stk + 0) = (0x4 + v0_11);
    w0_6 = ((*(float *)(((*(int *)(((int)stk + 24))) + 0x0))) * ((((struct o4_float *)(v0_5))->v)));
    w0_6 = w0_6 + ((((struct o4_float *)(v0_3))->v)) * (*(float *)(((*(int *)(((int)stk + 32))) + 0x0)));
    w0_6 = w0_6;
    w0_6 = w0_6 + ((((struct o4_float *)(v0_6))->v)) * (*(float *)(((*(int *)(((int)stk + 12))) + 0x0)));
    w0_6 = w0_6;
    w0_6 = w0_6 + ((((struct o4_float *)(v0_4))->v)) * (*(float *)(((*(int *)(((int)stk + 28))) + 0x0)));
    (((struct o4_float *)(v0_11))->v) = w0_6;
    v0_11 = *(int *)(((int)stk + 4));
    *(int *)((int)stk + 0) = (0x8 + v0_11);
    w0_6 = ((*(float *)(((*(int *)(((int)stk + 24))) + 0x0))) * ((((struct o8_float *)(v0_5))->v)));
    w0_6 = w0_6 + ((((struct o8_float *)(v0_3))->v)) * (*(float *)(((*(int *)(((int)stk + 32))) + 0x0)));
    w0_6 = w0_6;
    w0_6 = w0_6 + ((((struct o8_float *)(v0_6))->v)) * (*(float *)(((*(int *)(((int)stk + 12))) + 0x0)));
    w0_6 = w0_6;
    w0_6 = w0_6 + ((((struct o8_float *)(v0_4))->v)) * (*(float *)(((*(int *)(((int)stk + 28))) + 0x0)));
    (((struct o8_float *)(v0_11))->v) = w0_6;
    v0_11 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 20)) = v0_11;
    *(unsigned int *)((v0_11 + 0x0)) = ((*(int *)((v0_11 + 0x0))) | v0_2);
    v0_11 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 20)) = (v0_11 + 0x1C);
    *(unsigned int *)(((v0_11 + 0x1C) + 0x0)) = ((*(int *)(((v0_11 + 0x1C) + 0x0))) | v0_2);
    *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x20);
    *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) + 0x20);
    FPUL_ = (v0_10);
    goto L_C10FABA;
    L_C10FAC6:;
    *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 36))) + 0xA0);
    *(unsigned int *)(((int)stk + 8)) = 0xA0;
    *(float *)((v0_3 + 0x0)) = ((((struct o10_float *)((0xA0 + v0_8)))->v));
    *(unsigned int *)(((int)stk + 4)) = 0xA4;
    (((struct o4_float *)(v0_3))->v) = ((((struct oB4_float *)(v0_8))->v));
    *(unsigned int *)(((int)stk + 16)) = 0xA8;
    (((struct o8_float *)(v0_3))->v) = ((((struct oB8_float *)(v0_8))->v));
    *(float *)((v0_5 + 0x0)) = ((((struct o10_float *)(((*(int *)(((int)stk + 8))) + R10)))->v));
    (((struct o4_float *)(v0_5))->v) = ((((struct o10_float *)(((*(int *)(((int)stk + 4))) + R10)))->v));
    (((struct o8_float *)(v0_5))->v) = ((((struct o10_float *)(((*(int *)(((int)stk + 16))) + R10)))->v));
    *(float *)((v0_6 + 0x0)) = ((((struct o10_float *)(((*(int *)(((int)stk + 8))) + v0_7)))->v));
    (((struct o4_float *)(v0_6))->v) = ((((struct o10_float *)(((*(int *)(((int)stk + 4))) + v0_7)))->v));
    (((struct o8_float *)(v0_6))->v) = ((((struct o10_float *)(((*(int *)(((int)stk + 16))) + v0_7)))->v));
    *(float *)((v0_4 + 0x0)) = ((((struct o10_float *)(((*(int *)(((int)stk + 8))) + (*(int *)(((int)stk + 48))))))->v));
    (((struct o4_float *)(v0_4))->v) = ((((struct o10_float *)(((*(int *)(((int)stk + 4))) + (*(int *)(((int)stk + 48))))))->v));
    (((struct o8_float *)(v0_4))->v) = ((((struct o10_float *)(((*(int *)(((int)stk + 16))) + (*(int *)(((int)stk + 48))))))->v));
    if (((*(signed char *)((v0_1 + 0x2))) != 0)) goto L_C10FB80;
    *(float *)((v0_3 + 0x0)) = ((*(float *)((v0_3 + 0x0))) * w0_0);
    *(float *)((v0_5 + 0x0)) = ((*(float *)((v0_5 + 0x0))) * w0_0);
    *(float *)((v0_6 + 0x0)) = ((*(float *)((v0_6 + 0x0))) * w0_0);
    *(float *)((v0_4 + 0x0)) = ((*(float *)((v0_4 + 0x0))) * w0_0);
    L_C10FB80:;
    v0_10 = *(short *)((v0_1 + 0x1C));
    *(unsigned int *)(((int)stk + 24)) = (v0_9 + 0x10);
    w0_6 = (((float)v0_10 / w0_3) * ((float)v0_10 / w0_3));
    (((struct o10_float *)(v0_9))->v) = (w0_6 * ((float)v0_10 / w0_3));
    *(unsigned int *)(((int)stk + 32)) = (v0_9 + 0x14);
    (((struct o14_float *)(v0_9))->v) = (((float)v0_10 / w0_3) * ((float)v0_10 / w0_3));
    *(unsigned int *)(((int)stk + 44)) = (v0_9 + 0x18);
    w0_6 = ((w0_4 - ((float)v0_10 / w0_3)) * (w0_4 - ((float)v0_10 / w0_3)));
    (((struct o18_float *)(v0_9))->v) = (w0_6 * (w0_4 - ((float)v0_10 / w0_3)));
    *(unsigned int *)(((int)stk + 20)) = (v0_9 + 0x1C);
    (((struct o1C_float *)(v0_9))->v) = ((w0_4 - ((float)v0_10 / w0_3)) * (w0_4 - ((float)v0_10 / w0_3)));
    *(unsigned int *)(((int)stk + 8)) = v0_9;
    *(float *)((v0_9 + 0x0)) = ((*(float *)(((*(int *)(((int)stk + 44))) + 0x0))) * w0_1);
    *(unsigned int *)(((int)stk + 4)) = (v0_9 + 0x4);
    (((struct o4_float *)(v0_9))->v) = (((((*(float *)(((*(int *)(((int)stk + 24))) + 0x0))) * w0_2)) - (*(float *)(((*(int *)(((int)stk + 32))) + 0x0)))) + w0_5);
    *(unsigned int *)(((int)stk + 16)) = (v0_9 + 0x8);
    w0_6 = w0_1;
    w0_6 = w0_6 + w0_2 * ((((*(float *)(((*(int *)(((int)stk + 32))) + 0x0))) - (*(float *)(((*(int *)(((int)stk + 24))) + 0x0)))) + ((float)v0_10 / w0_3)));
    (((struct o8_float *)(v0_9))->v) = w0_6;
    *(unsigned int *)(((int)stk + 28)) = (v0_9 + 0xC);
    (((struct oC_float *)(v0_9))->v) = ((*(float *)(((*(int *)(((int)stk + 24))) + 0x0))) * w0_1);
    v0_9 = *(int *)(((int)stk + 12));
    *(unsigned int *)(((int)stk + 40)) = (v0_9 + 0x10);
    *(int *)((int)stk + 0) = (v0_9 + 0x10);
    w0_7 = ((*(float *)(((*(int *)(((int)stk + 4))) + 0x0))) * (*(float *)((v0_5 + 0x0))));
    w0_7 = w0_7 + (*(float *)((v0_3 + 0x0))) * (*(float *)(((*(int *)(((int)stk + 8))) + 0x0)));
    w0_6 = *(float *)(((*(int *)(((int)stk + 16))) + 0x0));
    w0_7 = w0_7;
    w0_7 = w0_7 + (*(float *)((v0_6 + 0x0))) * w0_6;
    w0_7 = w0_7;
    w0_7 = w0_7 + (*(float *)((v0_4 + 0x0))) * (*(float *)(((*(int *)(((int)stk + 28))) + 0x0)));
    (((struct o10_float *)(v0_9))->v) = w0_7;
    v0_9 = *(int *)(((int)stk + 12));
    *(int *)((int)stk + 0) = (0x14 + v0_9);
    w0_7 = ((*(float *)(((*(int *)(((int)stk + 4))) + 0x0))) * ((((struct o4_float *)(v0_5))->v)));
    w0_7 = w0_7 + ((((struct o4_float *)(v0_3))->v)) * (*(float *)(((*(int *)(((int)stk + 8))) + 0x0)));
    w0_7 = w0_7;
    w0_7 = w0_7 + ((((struct o4_float *)(v0_6))->v)) * (*(float *)(((*(int *)(((int)stk + 16))) + 0x0)));
    w0_7 = w0_7;
    w0_7 = w0_7 + ((((struct o4_float *)(v0_4))->v)) * (*(float *)(((*(int *)(((int)stk + 28))) + 0x0)));
    (((struct o14_float *)(v0_9))->v) = w0_7;
    v0_9 = *(int *)(((int)stk + 12));
    *(int *)((int)stk + 0) = (0x18 + v0_9);
    w0_7 = ((*(float *)(((*(int *)(((int)stk + 4))) + 0x0))) * ((((struct o8_float *)(v0_5))->v)));
    w0_7 = w0_7 + ((((struct o8_float *)(v0_3))->v)) * (*(float *)(((*(int *)(((int)stk + 8))) + 0x0)));
    w0_8 = w0_7;
    w0_8 = w0_8 + ((((struct o8_float *)(v0_6))->v)) * (*(float *)(((*(int *)(((int)stk + 16))) + 0x0)));
    w0_7 = (((struct o8_float *)(v0_4))->v);
    w0_8 = w0_8;
    w0_8 = w0_8 + w0_7 * (*(float *)(((*(int *)(((int)stk + 28))) + 0x0)));
    (((struct o18_float *)(v0_9))->v) = w0_8;
    v0_9 = *(int *)(((int)stk + 40));
    *(unsigned int *)((v0_9 + 0x0)) = ((*(int *)((v0_9 + 0x0))) | v0_2);
    v0_9 = (((*(int *)(((int)stk + 12))) + 0x2C));
    F0 = (w0_7);
    w0_6 = (w0_6);
    FPUL_ = (v0_10);
    *(unsigned int *)(((int)stk + 12)) = v0_9;
    *(unsigned int *)((v0_9 + 0x0)) = ((*(int *)((v0_9 + 0x0))) | v0_2);
    v0_9 = *(int *)(((int)stk + 36));
    *(unsigned int *)(((int)stk + 12)) = 0x30;
    v0_9 = ((v0_9 + 0xC0));
    L_C10FE7E:;
    if (((int)(*(int *)(((int)stk + 12))) >= (int)0xC0)) goto L_C10FE8E;
    v0_10 = *(int *)(((int)stk + 12));
    *(unsigned int *)(((int)stk + 52)) = (v0_10 << 2);
    *(float *)((v0_3 + 0x0)) = ((((struct o18_float *)(((v0_10 << 2) + v0_8)))->v));
    v0_10 = *(int *)(((int)stk + 12));
    *(unsigned int *)(((int)stk + 36)) = ((v0_10 + 0x1) << 2);
    (((struct o4_float *)(v0_3))->v) = ((((struct o18_float *)((((v0_10 + 0x1) << 2) + v0_8)))->v));
    v0_10 = *(int *)(((int)stk + 12));
    *(unsigned int *)(((int)stk + 40)) = ((v0_10 + 0x2) << 2);
    (((struct o8_float *)(v0_3))->v) = ((((struct o18_float *)((((v0_10 + 0x2) << 2) + v0_8)))->v));
    *(float *)((v0_5 + 0x0)) = ((((struct o18_float *)(((*(int *)(((int)stk + 52))) + R10)))->v));
    (((struct o4_float *)(v0_5))->v) = ((((struct o18_float *)(((*(int *)(((int)stk + 36))) + R10)))->v));
    (((struct o8_float *)(v0_5))->v) = ((((struct o18_float *)(((*(int *)(((int)stk + 40))) + R10)))->v));
    *(float *)((v0_6 + 0x0)) = ((((struct o18_float *)(((*(int *)(((int)stk + 52))) + v0_7)))->v));
    (((struct o4_float *)(v0_6))->v) = ((((struct o18_float *)(((*(int *)(((int)stk + 36))) + v0_7)))->v));
    (((struct o8_float *)(v0_6))->v) = ((((struct o18_float *)(((*(int *)(((int)stk + 40))) + v0_7)))->v));
    *(float *)((v0_4 + 0x0)) = ((((struct o18_float *)(((*(int *)(((int)stk + 52))) + (*(int *)(((int)stk + 48))))))->v));
    (((struct o4_float *)(v0_4))->v) = ((((struct o18_float *)(((*(int *)(((int)stk + 36))) + (*(int *)(((int)stk + 48))))))->v));
    (((struct o8_float *)(v0_4))->v) = ((((struct o18_float *)(((*(int *)(((int)stk + 40))) + (*(int *)(((int)stk + 48))))))->v));
    if (((*(signed char *)((v0_1 + 0x2))) != 0)) goto L_C10FD76;
    *(float *)((v0_3 + 0x0)) = ((*(float *)((v0_3 + 0x0))) * w0_0);
    *(float *)((v0_5 + 0x0)) = ((*(float *)((v0_5 + 0x0))) * w0_0);
    *(float *)((v0_6 + 0x0)) = ((*(float *)((v0_6 + 0x0))) * w0_0);
    *(float *)((v0_4 + 0x0)) = ((*(float *)((v0_4 + 0x0))) * w0_0);
    L_C10FD76:;
    v0_10 = *(short *)((v0_1 + 0x1C));
    w0_6 = (((float)v0_10 / w0_3) * ((float)v0_10 / w0_3));
    *(float *)(((*(int *)(((int)stk + 24))) + 0x0)) = (w0_6 * ((float)v0_10 / w0_3));
    *(float *)(((*(int *)(((int)stk + 32))) + 0x0)) = (((float)v0_10 / w0_3) * ((float)v0_10 / w0_3));
    w0_6 = ((w0_4 - ((float)v0_10 / w0_3)) * (w0_4 - ((float)v0_10 / w0_3)));
    *(float *)(((*(int *)(((int)stk + 44))) + 0x0)) = (w0_6 * (w0_4 - ((float)v0_10 / w0_3)));
    *(float *)(((*(int *)(((int)stk + 20))) + 0x0)) = ((w0_4 - ((float)v0_10 / w0_3)) * (w0_4 - ((float)v0_10 / w0_3)));
    *(float *)(((*(int *)(((int)stk + 8))) + 0x0)) = ((*(float *)(((*(int *)(((int)stk + 44))) + 0x0))) * w0_1);
    *(float *)(((*(int *)(((int)stk + 4))) + 0x0)) = (((((*(float *)(((*(int *)(((int)stk + 24))) + 0x0))) * w0_2)) - (*(float *)(((*(int *)(((int)stk + 32))) + 0x0)))) + w0_5);
    w0_6 = w0_1;
    w0_6 = w0_6 + w0_2 * ((((*(float *)(((*(int *)(((int)stk + 32))) + 0x0))) - (*(float *)(((*(int *)(((int)stk + 24))) + 0x0)))) + ((float)v0_10 / w0_3)));
    *(float *)(((*(int *)(((int)stk + 16))) + 0x0)) = w0_6;
    *(float *)(((*(int *)(((int)stk + 28))) + 0x0)) = ((*(float *)(((*(int *)(((int)stk + 24))) + 0x0))) * w0_1);
    *(unsigned int *)(((int)stk + 36)) = (v0_9 + 0x18);
    *(int *)((int)stk + 0) = (v0_9 + 0x18);
    w0_6 = *(float *)(((*(int *)(((int)stk + 16))) + 0x0));
    w0_7 = ((*(float *)(((*(int *)(((int)stk + 4))) + 0x0))) * (*(float *)((v0_5 + 0x0))));
    w0_7 = w0_7 + (*(float *)((v0_3 + 0x0))) * (*(float *)(((*(int *)(((int)stk + 8))) + 0x0)));
    w0_7 = w0_7;
    w0_7 = w0_7 + (*(float *)((v0_6 + 0x0))) * w0_6;
    w0_7 = w0_7;
    w0_7 = w0_7 + (*(float *)((v0_4 + 0x0))) * (*(float *)(((*(int *)(((int)stk + 28))) + 0x0)));
    (((struct o18_float *)(v0_9))->v) = w0_7;
    w0_7 = ((*(float *)(((*(int *)(((int)stk + 4))) + 0x0))) * ((((struct o4_float *)(v0_5))->v)));
    w0_7 = w0_7 + ((((struct o4_float *)(v0_3))->v)) * (*(float *)(((*(int *)(((int)stk + 8))) + 0x0)));
    w0_7 = w0_7;
    w0_7 = w0_7 + ((((struct o4_float *)(v0_6))->v)) * (*(float *)(((*(int *)(((int)stk + 16))) + 0x0)));
    w0_7 = w0_7;
    w0_7 = w0_7 + ((((struct o4_float *)(v0_4))->v)) * (*(float *)(((*(int *)(((int)stk + 28))) + 0x0)));
    (((struct o1C_float *)(v0_9))->v) = w0_7;
    w0_7 = ((*(float *)(((*(int *)(((int)stk + 4))) + 0x0))) * ((((struct o8_float *)(v0_5))->v)));
    w0_7 = w0_7 + ((((struct o8_float *)(v0_3))->v)) * (*(float *)(((*(int *)(((int)stk + 8))) + 0x0)));
    w0_8 = w0_7;
    w0_8 = w0_8 + ((((struct o8_float *)(v0_6))->v)) * (*(float *)(((*(int *)(((int)stk + 16))) + 0x0)));
    w0_7 = (((struct o8_float *)(v0_4))->v);
    w0_8 = w0_8;
    w0_8 = w0_8 + w0_7 * (*(float *)(((*(int *)(((int)stk + 28))) + 0x0)));
    (((struct o20_float *)(v0_9))->v) = w0_8;
    v0_11 = *(int *)(((int)stk + 36));
    *(unsigned int *)((v0_11 + 0x0)) = ((*(int *)((v0_11 + 0x0))) | v0_2);
    *(unsigned int *)(((int)stk + 36)) = (v0_9 + 0x34);
    *(unsigned int *)(((v0_9 + 0x34) + 0x0)) = ((*(int *)(((v0_9 + 0x34) + 0x0))) | v0_2);
    *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 12))) + 0x8);
    v0_9 = ((v0_9 + 0x20));
    F0 = (w0_7);
    w0_6 = (w0_6);
    FPUL_ = (v0_10);
    goto L_C10FE7E;
    L_C10FE8E:;
    v0_2 = *(short *)((v0_1 + 0x1C));
    *(unsigned short *)((v0_1 + 0x1C)) = (v0_2 + 0x1);
    v0_8 = ((short)(v0_2 + 0x1));
    if (((int)(short)(v0_2 + 0x1) < (int)0x5)) goto L_C10FEC4;
    (((struct o15_uchar *)(v0_1))->v) = ((*(signed char *)((v0_1 + 0x15))) + 0x1);
    if (((*(signed char *)((v0_1 + 0x15))) != 7)) goto L_C10FEB6;
    (((struct o14_uchar *)(v0_1))->v) = 0x63;
    (((struct oA8_uchar *)(v0_1))->v) = v0_0;
    v0_8 = (0xA8);
    L_C10FEC4:;
    return F0;
    L_C10FEB6:;
    *(unsigned short *)((v0_1 + 0x1C)) = v0_0;
    v0_8 = (v0_0);
    goto L_C10FEC4;
    L_C10F86E:;
    v0_6 = (0x7);
    v0_5 = (0x7);
    goto L_C10F872;
    L_C10F864:;
    v0_3 = (v0_9);
    v0_4 = (0x5);
    goto L_C10F86E;
    L_C10F85A:;
    v0_3 = (0x5);
    v0_4 = (R10);
    v0_6 = (0x7);
    v0_5 = (v0_9);
    goto L_C10F872;
    L_C10F850:;
    v0_3 = (R10);
    v0_4 = (v0_6);
    v0_6 = (v0_9);
    v0_5 = (0x5);
    goto L_C10F872;
    L_C10F846:;
    v0_3 = (v0_6);
    v0_4 = (v0_7);
    v0_6 = (0x5);
    v0_5 = (R10);
    goto L_C10F872;
    L_C10F83C:;
    v0_5 = v0_6;
    v0_3 = (v0_7);
    v0_4 = (v0_2);
    v0_6 = (R10);
    v0_5 = v0_5;
    goto L_C10F872;
    L_C10F832:;
    v0_3 = (v0_0);
    v0_4 = (v0_0);
    v0_6 = (v0_7);
    v0_5 = (v0_2);
    goto L_C10F872;
    L_C10F69E:;
    if ((v0_8 != 99)) goto L_C10F6A6;
    v0_8 = ((FUN_0c03f346(v0_1, v0_4, v0_6, v0_5)));
    goto L_C10FEC4;
    L_C10F6A6:;
    goto L_C10FEC4;
    L_C10F6AA:;
    (((struct o14_uchar *)(v0_1))->v) = ((*(signed char *)((v0_1 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(v0_1))->v) = v0_2;
    (((struct oAC_ushort *)(v0_1))->v) = 0x1F;
    (((struct oA9_uchar *)(v0_1))->v) = 0x21;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_1 + 0x28)) = *(struct mv3 *)(0xC29108C); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_1 + 0x40)) = *(struct mv3 *)(0xC2910A4); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_1 + 0x34)) = *(struct mv3 *)(0xC2910B0); }
    R10 = (0xFFFFFFF8);
    v0_8 = (0x0);
    v0_7 = (0x0);
    L_C10F750:;
    if (((unsigned int)v0_7 < (unsigned int)0x20)) goto L_C10F6EE;
    v0_6 = (((struct oE4_int *)(v0_1))->v);
    v0_7 = (((struct o1EC_int *)((*(int *)0xC4B410C)))->v);
    *(unsigned int *)((v0_6 + 0x8)) = ((((struct o258_int *)(v0_7))->v));
    *(unsigned int *)((v0_6 + 0xC)) = v0_0;
    *(unsigned int *)((v0_6 + 0x10)) = v0_0;
    (((struct o68_uint *)(v0_6))->v) = v0_0;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_6 + 0x6C)) = *(struct mv3 *)(((v0_7 + 0x258) + 0x24)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_6 + 0x78)) = *(struct mv3 *)(((v0_7 + 0x258) + 0x30)); }
    FUN_0c187a88((((0x90 + v0_6) + 0x4) & R10), (*(int *)((v0_6 + 0x8))), 0x390, v0_5);
    *(unsigned int *)((v0_6 + 0x8)) = (((0x90 + v0_6) + 0x4) & R10);
    *(unsigned char *)((v0_6 + 0x0)) = v0_2;
    *(unsigned short *)((v0_6 + 0x6)) = 0xF;
    if (((*(signed char *)((v0_1 + 0x2))) == 0)) goto L_C10F7F0;
    (((struct o7C_uint *)(((((struct oE4_int *)(v0_1))->v))))->v) = v0_0;
    goto L_C10F7FC;
    L_C10F7F0:;
    (((struct o6C_float *)(((((struct oE4_int *)(v0_1))->v))))->v) = (*(float *)0xC291098);
    goto L_C10F7FC;
    L_C10F6EE:;
    v0_6 = (((struct o1EC_int *)((*(int *)0xC4B410C)))->v);
    v0_9 = *(int *)((((0xC4 + v0_1) + v0_7) + 0x0));
    *(unsigned int *)((v0_9 + 0x8)) = ((((struct oB4_int *)((v0_6 + v0_8)))->v));
    *(unsigned int *)((v0_9 + 0xC)) = v0_0;
    *(unsigned int *)((v0_9 + 0x10)) = v0_0;
    (((struct o68_uint *)(v0_9))->v) = v0_0;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_9 + 0x6C)) = *(struct mv3 *)((((v0_6 + v0_8) + 0xB4) + 0x24)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_9 + 0x78)) = *(struct mv3 *)((((v0_6 + v0_8) + 0xB4) + 0x30)); }
    FUN_0c187a88((((0x90 + v0_9) + 0x4) & R10), (*(int *)((v0_9 + 0x8))), 0x390, v0_5);
    *(unsigned int *)((v0_9 + 0x8)) = (((0x90 + v0_9) + 0x4) & R10);
    *(unsigned char *)((v0_9 + 0x0)) = v0_0;
    *(unsigned short *)((v0_9 + 0x6)) = 0xF;
    v0_8 = ((v0_8 + 0x3C));
    v0_7 = ((v0_7 + 0x4));
    goto L_C10F750;
}

int FUN_0c0e9ada(int a4)
{
    int stk[12];
    register int t0;
    register int t1;
    register int t6;
    register int t11;
    register int t22;
    register int t38;
    register int t59;
    register int t65;
    register int t63;
    register int t69;
    register int t82;
    register int t84;
    register int t90;
    register int t92;
    register int t100;
    register int t94;
    register int t96;
    register int t114;
    register int t120;
    register int t132;
    register int t137;
    register int t148;
    register int t166;
    register int t185;
    register int t189;
    register int t194;
    register int t209;
    register int t217;
    register int t219;
    register int t237;
    register int t309;
    register int t316;
    register int t315;
    register int t327;
    register int t329;
    register int t337;
    register int t331;
    register int t333;
    register int t347;
    register int t348;
    register int t350;
    register int t353;
    register int t354;
    register int t359;
    register int t364;
    register int t375;
    register int t391;
    register int t412;
    register int t418;
    register int t416;
    register int t422;
    register int t435;
    register int t437;
    register int t443;
    register int t445;
    register int t453;
    register int t447;
    register int t449;
    register int t467;
    register int t473;
    register int t487;
    register int t492;
    register int t503;
    register int t521;
    register int t540;
    register int t544;
    register int t549;
    register int t564;
    register int t572;
    register int t574;
    register int t592;
    register int t668;
    register int t675;
    register int t674;
    register int t688;
    register int t690;
    register int t698;
    register int t692;
    register int t694;
    register int t77;
    register int t286;
    register float u106;
    register float u111;
    register int t202;
    register int t233;
    register float u301;
    register float u306;
    register int t342;
    register int t430;
    register int t644;
    register float u459;
    register float u464;
    register int t557;
    register int t588;
    register float u660;
    register float u665;
    register int t703;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        t1 = *(signed char *)((a4 + 0x15));
        if (t1 != 0) {
            if (t1 != 1) {
                if (t1 != 2) {
                    if (t1 == 3) {
                        t6 = *(signed char *)((a4 + 0x16));
                        switch (t6) {
                        case 0:
                            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                            (((struct o20_ushort *)(a4))->v) = 0x12C;
                            t22 = (((struct o20_short *)(a4))->v);
                            (((struct o20_ushort *)(a4))->v) = (t22 - 1);
                            if ((int)(short)(t22 - 1) <= 0) {
                                (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                            }
                            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 0.75f);
                            break;
                        case 1:
                            t11 = (((struct o20_short *)(a4))->v);
                            (((struct o20_ushort *)(a4))->v) = (t11 - 1);
                            if ((int)(short)(t11 - 1) <= 0) {
                                (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                            }
                            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 0.75f);
                            break;
                        case 2:
                            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 3.0f);
                            break;
                        }
                        *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
                        *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) & 0x3F);
                        if ((*(short *)((a4 + 0x1E))) == 1) {
                            (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + 5.0f);
                        } else {
                            t38 = *(short *)((a4 + 0x1E));
                            if (t38 == 2) {
                                (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) - 5.0f);
                            } else {
                                if (t38 == 6) {
                                    (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + 5.0f);
                                } else {
                                    if ((*(short *)((a4 + 0x1E))) == 7) {
                                        (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) - 5.0f);
                                    }
                                }
                            }
                        }
                        FUN_0c0e9a88(a4, 0x1, -0.0199999996f);
                        FUN_0c0e9a88(a4, 0x4, 0.0199999996f);
                        t59 = *(signed char *)0xC54098D;
                        t65 = t59;
                        if (t59 != 8) {
                        } else {
                            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                            *(unsigned short *)((a4 + 0x1E)) = 0x5A;
                            (((struct o20_ushort *)(a4))->v) = 0x4;
                            (((struct o2C_float *)(a4))->v) = 3350.0f;
                            thunk_FUN_0c05abb2(0x41, (a4 + 0x28));
                            *(unsigned char *)((((((struct oCC_int *)(a4))->v)) + 0x0)) = 0x1;
                            t63 = (((struct oCC_int *)(a4))->v);
                            (((struct o20_float *)(t63))->v) = 0.0f;
                            (((struct o1C_float *)(t63))->v) = 0.0f;
                            (((struct o18_float *)(t63))->v) = 0.0f;
                            *(int *)((int)stk + 0) = 0x0;
                            t65 = (FUN_0c05258e(0x2, 0x14, 0x100, 0x1E, 0x0));
                        }
                        return t65;
                    }
                    if (t1 == 4) {
                        FUN_0c0e9a88(a4, 0x4, -0.0199999996f);
                        FUN_0c0e9a88(a4, 0x2, 0.0199999996f);
                        t69 = *(short *)((a4 + 0x1E));
                        if ((int)((((struct o20_short *)(a4))->v)) >= 0) {
                            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((float)t69 / 10.0f));
                            t77 = ((*(short *)((a4 + 0x1E))) - ((((struct o20_short *)(a4))->v)));
                        } else {
                            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) - ((float)t69 / 10.0f));
                            t77 = ((*(short *)((a4 + 0x1E))) + ((((struct o20_short *)(a4))->v)));
                        }
                        *(unsigned short *)((a4 + 0x1E)) = t77;
                        (((struct o20_ushort *)(a4))->v) = (-((((struct o20_short *)(a4))->v)));
                        t82 = *(short *)((a4 + 0x1E));
                        t84 = t82;
                        if ((int)t82 > 0) {
                        } else {
                            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                            (((struct o2C_float *)(a4))->v) = 3350.0f;
                            t84 = 0x2C;
                        }
                        return t84;
                    }
                    if (t1 == 5) {
                        FUN_0c0e9a88(a4, 0x4, -0.0199999996f);
                        FUN_0c0e9a88(a4, 0x2, 0.0199999996f);
                        (((struct o2C_float *)(a4))->v) = 3350.0f;
                        t90 = *(signed char *)0xC54098D;
                        if (t90 != 9) {
                            return t90;
                        }
                        if ((int)t90 > (int)0xE) {
                            return t90;
                        }
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        *(unsigned short *)((a4 + 0x1E)) = 0x3;
                        *(int *)((int)stk + 44) = a4;
                        *(int *)((int)stk + 40) = 0x0;
                        *(int *)((int)stk + 36) = 0x1;
                        *(unsigned int *)(((int)stk + 24)) = 0x1;
                        *(unsigned int *)(((int)stk + 28)) = 0x258;
                        t92 = FUN_0c03f444(0x5, 0x0, 0x1);
                        t100 = t92;
                        if (t92 != 0) {
                            *(unsigned char *)((t92 + 0x1)) = 0xFFFFFFFF;
                            *(unsigned int *)((t92 + 0x4)) = 0xC0EA19E;
                            (((struct oA8_uchar *)(t92))->v) = 0x1;
                            (((struct oAC_ushort *)(t92))->v) = 0x201;
                            (((struct oA9_uchar *)(t92))->v) = 0x21;
                            *(unsigned char *)((t92 + 0x2)) = (*(int *)(((int)stk + 24)));
                            t94 = *(int *)(((int)stk + 24));
                            { struct mv3 { int w[3]; }; *(struct mv3 *)((t92 + 0x28)) = *(struct mv3 *)(((((t94 << 1) + t94) << 2) + 0xC288180)); }
                            t96 = (((struct oC4_int *)(t92))->v);
                            FUN_0c037498(t96, 0x0, 0xF2, (*(int *)0xC4B410C));
                            *(unsigned char *)((t96 + 0x0)) = 0x1;
                            *(unsigned short *)((t96 + 0x6)) = 0x1;
                            t100 = *(short *)(((int)stk + 28));
                            *(unsigned short *)((t92 + 0x1C)) = t100;
                        }
                        return t100;
                    }
                    if (t1 == 6) {
                        if (((*(short *)((a4 + 0x1E))) & 0x2) != 0) {
                            u106 = (((((struct o28_float *)(a4))->v)) + 5.0f);
                        } else {
                            u106 = (((((struct o28_float *)(a4))->v)) - 5.0f);
                        }
                        (((struct o28_float *)(a4))->v) = u106;
                        if (((*(short *)((a4 + 0x1E))) & 0x4) != 0) {
                            u111 = (((((struct o30_float *)(a4))->v)) + (1.0f + 1.0f));
                        } else {
                            u111 = (((((struct o30_float *)(a4))->v)) - (1.0f + 1.0f));
                        }
                        (((struct o30_float *)(a4))->v) = u111;
                        *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
                        t114 = *(signed char *)0xC54098D;
                        t286 = t114;
                        if (t114 != 10) {
                        } else {
                            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                            (((struct o16_uchar *)(a4))->v) = 0x0;
                            (((struct o28_float *)(a4))->v) = ((((struct o58_float *)(a4))->v));
                            (((struct o30_float *)(a4))->v) = ((((struct o60_float *)(a4))->v));
                            *(unsigned short *)((a4 + 0x1E)) = 0x0;
                            (((struct o50_float *)(a4))->v) = 3.0f;
                            thunk_FUN_0c05abb2(0x40, (a4 + 0x28));
                            *(unsigned char *)((((((struct oD4_int *)(a4))->v)) + 0x0)) = 0x1;
                            t120 = (((struct oD4_int *)(a4))->v);
                            (((struct o20_float *)(t120))->v) = 0.0f;
                            (((struct o1C_float *)(t120))->v) = 0.0f;
                            (((struct o18_float *)(t120))->v) = 0.0f;
                            t286 = 0x18;
                        }
                    } else {
                        if (t1 == 7) {
                            t132 = *(signed char *)((a4 + 0x16));
                            switch (t132) {
                            case 0:
                                (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                                (((struct o20_ushort *)(a4))->v) = 0x12C;
                                t148 = (((struct o20_short *)(a4))->v);
                                (((struct o20_ushort *)(a4))->v) = (t148 - 1);
                                if ((int)(short)(t148 - 1) <= 0) {
                                    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                                }
                                (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 0.75f);
                                break;
                            case 1:
                                t137 = (((struct o20_short *)(a4))->v);
                                (((struct o20_ushort *)(a4))->v) = (t137 - 1);
                                if ((int)(short)(t137 - 1) <= 0) {
                                    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                                }
                                (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 0.75f);
                                break;
                            case 2:
                                (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 3.0f);
                                break;
                            }
                            FUN_0c0e9a88(a4, 0x2, -0.0199999996f);
                            FUN_0c0e9a88(a4, 0x4, 0.0199999996f);
                            *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
                            *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) & 0x3F);
                            if ((*(short *)((a4 + 0x1E))) == 1) {
                                (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + 5.0f);
                            } else {
                                t166 = *(short *)((a4 + 0x1E));
                                if (t166 == 2) {
                                    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) - 5.0f);
                                } else {
                                    if (t166 == 6) {
                                        (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + 5.0f);
                                    } else {
                                        if ((*(short *)((a4 + 0x1E))) == 7) {
                                            (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) - 5.0f);
                                        }
                                    }
                                }
                            }
                            t185 = *(signed char *)0xC54098D;
                            t286 = t185;
                            if (t185 != 13) {
                            } else {
                                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                                *(unsigned short *)((a4 + 0x1E)) = 0x5A;
                                (((struct o20_ushort *)(a4))->v) = 0x4;
                                (((struct o2C_float *)(a4))->v) = 7850.0f;
                                thunk_FUN_0c05abb2(0x41, (a4 + 0x28));
                                *(unsigned char *)((((((struct oD0_int *)(a4))->v)) + 0x0)) = 0x1;
                                t189 = (((struct oD0_int *)(a4))->v);
                                (((struct o20_float *)(t189))->v) = 0.0f;
                                (((struct o1C_float *)(t189))->v) = 0.0f;
                                (((struct o18_float *)(t189))->v) = 0.0f;
                                *(int *)((int)stk + 0) = 0x0;
                                t286 = (FUN_0c05258e(0x2, 0x14, 0x100, 0x1E, 0x0));
                            }
                        } else {
                            if (t1 == 8) {
                                t194 = *(short *)((a4 + 0x1E));
                                if ((int)((((struct o20_short *)(a4))->v)) >= 0) {
                                    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((float)t194 / 10.0f));
                                    t202 = ((*(short *)((a4 + 0x1E))) - ((((struct o20_short *)(a4))->v)));
                                } else {
                                    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) - ((float)t194 / 10.0f));
                                    t202 = ((*(short *)((a4 + 0x1E))) + ((((struct o20_short *)(a4))->v)));
                                }
                                *(unsigned short *)((a4 + 0x1E)) = t202;
                                FUN_0c0e9a88(a4, 0x4, -0.0199999996f);
                                FUN_0c0e9a88(a4, 0x3, 0.0199999996f);
                                (((struct o20_ushort *)(a4))->v) = (-((((struct o20_short *)(a4))->v)));
                                t209 = *(short *)((a4 + 0x1E));
                                t286 = t209;
                                if ((int)t209 <= 0) {
                                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                                    (((struct o2C_float *)(a4))->v) = 7850.0f;
                                    t286 = 0x2C;
                                }
                            } else {
                                if (t1 == 9) {
                                    FUN_0c0e9a88(a4, 0x4, -0.0199999996f);
                                    FUN_0c0e9a88(a4, 0x3, 0.0199999996f);
                                    (((struct o2C_float *)(a4))->v) = 7850.0f;
                                    t286 = 0x2C;
                                } else {
                                    t286 = t1;
                                    if (t1 == 10) {
                                        t217 = *(signed char *)((a4 + 0x16));
                                        t286 = t217;
                                        if (t217 == 0) {
                                            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                                            t219 = *(signed char *)0xC54223C;
                                            if (t219 != 0) {
                                                if (t219 != 1) {
                                                    (((struct o2C_float *)(a4))->v) = 7850.0f;
                                                    *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x0;
                                                    *(unsigned char *)((((((struct oCC_int *)(a4))->v)) + 0x0)) = 0x0;
                                                    *(unsigned char *)((((((struct oD0_int *)(a4))->v)) + 0x0)) = 0x1;
                                                    t233 = 0xD0;
                                                } else {
                                                    (((struct o2C_float *)(a4))->v) = 3350.0f;
                                                    *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x0;
                                                    *(unsigned char *)((((((struct oCC_int *)(a4))->v)) + 0x0)) = 0x1;
                                                    *(unsigned char *)((((((struct oD0_int *)(a4))->v)) + 0x0)) = 0x0;
                                                    t233 = 0xCC;
                                                }
                                            } else {
                                                (((struct o2C_float *)(a4))->v) = -150.0f;
                                                *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x1;
                                                *(unsigned char *)((((((struct oCC_int *)(a4))->v)) + 0x0)) = 0x0;
                                                *(unsigned char *)((((((struct oD0_int *)(a4))->v)) + 0x0)) = 0x0;
                                                t233 = 0xC8;
                                            }
                                            t237 = *(int *)((a4 + t233));
                                            (((struct o20_float *)(t237))->v) = 1.0f;
                                            (((struct o1C_float *)(t237))->v) = 1.0f;
                                            (((struct o18_float *)(t237))->v) = 1.0f;
                                            t286 = 0x18;
                                        }
                                    }
                                }
                            }
                        }
                    }
                    return t286;
                }
                if (((*(short *)((a4 + 0x1E))) & 0x2) != 0) {
                    u301 = (((((struct o28_float *)(a4))->v)) + 5.0f);
                } else {
                    u301 = (((((struct o28_float *)(a4))->v)) - 5.0f);
                }
                (((struct o28_float *)(a4))->v) = u301;
                if (((*(short *)((a4 + 0x1E))) & 0x4) != 0) {
                    u306 = (((((struct o30_float *)(a4))->v)) + (1.0f + 1.0f));
                } else {
                    u306 = (((((struct o30_float *)(a4))->v)) - (1.0f + 1.0f));
                }
                (((struct o30_float *)(a4))->v) = u306;
                *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
                t309 = *(signed char *)0xC54098D;
                t316 = t309;
                if (t309 != 5) {
                } else {
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    (((struct o16_uchar *)(a4))->v) = 0x0;
                    (((struct o28_float *)(a4))->v) = ((((struct o58_float *)(a4))->v));
                    (((struct o30_float *)(a4))->v) = ((((struct o60_float *)(a4))->v));
                    *(unsigned short *)((a4 + 0x1E)) = 0x0;
                    (((struct o50_float *)(a4))->v) = 3.0f;
                    thunk_FUN_0c05abb2(0x40, (a4 + 0x28));
                    *(unsigned char *)((((((struct oD4_int *)(a4))->v)) + 0x0)) = 0x1;
                    t315 = (((struct oD4_int *)(a4))->v);
                    (((struct o20_float *)(t315))->v) = 0.0f;
                    (((struct o1C_float *)(t315))->v) = 0.0f;
                    (((struct o18_float *)(t315))->v) = 0.0f;
                    t316 = 0x18;
                }
                return t316;
            }
            (((struct o2C_float *)(a4))->v) = -150.0f;
            t327 = *(signed char *)0xC54098D;
            if (t327 != 4) {
                return t327;
            }
            if ((int)t327 > (int)0xE) {
                return t327;
            }
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            *(unsigned short *)((a4 + 0x1E)) = 0x3;
            *(int *)((int)stk + 44) = a4;
            *(int *)((int)stk + 40) = 0x0;
            *(int *)((int)stk + 36) = 0x1;
            *(unsigned int *)(((int)stk + 24)) = 0x0;
            *(unsigned int *)(((int)stk + 28)) = 0x258;
            t329 = FUN_0c03f444(0x5, 0x0, 0x1);
            t337 = t329;
            if (t329 != 0) {
                *(unsigned char *)((t329 + 0x1)) = 0xFFFFFFFF;
                *(unsigned int *)((t329 + 0x4)) = 0xC0EA19E;
                (((struct oA8_uchar *)(t329))->v) = 0x1;
                (((struct oAC_ushort *)(t329))->v) = 0x201;
                (((struct oA9_uchar *)(t329))->v) = 0x21;
                *(unsigned char *)((t329 + 0x2)) = (*(int *)(((int)stk + 24)));
                t331 = *(int *)(((int)stk + 24));
                { struct mv3 { int w[3]; }; *(struct mv3 *)((t329 + 0x28)) = *(struct mv3 *)(((((t331 << 1) + t331) << 2) + 0xC288180)); }
                t333 = (((struct oC4_int *)(t329))->v);
                FUN_0c037498(t333, 0x0, 0xF2, (*(int *)0xC4B410C));
                *(unsigned char *)((t333 + 0x0)) = 0x1;
                *(unsigned short *)((t333 + 0x6)) = 0x1;
                t337 = *(short *)(((int)stk + 28));
                *(unsigned short *)((t329 + 0x1C)) = t337;
            }
            return t337;
        }
        if ((int)(*(signed char *)0xC54098D) >= (int)0xE) {
            (((struct o15_uchar *)(a4))->v) = 0xA;
            (((struct o16_uchar *)(a4))->v) = 0x0;
            t342 = 0x16;
        } else {
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            t342 = 0x15;
        }
        return t342;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct o15_uchar *)(a4))->v) = 0x0;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x58)) = *(struct mv3 *)((a4 + 0x28)); }
    *(unsigned short *)((a4 + 0x1E)) = 0x0;
    (((struct o20_ushort *)(a4))->v) = 0x0;
    *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
    (((struct oAC_ushort *)(a4))->v) = 0x1;
    t347 = (a4 + 0x28);
    t348 = 0x1;
    for (;;) {
        if ((int)t348 >= (int)((((struct oC0_int *)(a4))->v))) {
            break;
        }
        t347 = 0xC4;
        t347 = (t347 + a4);
        t350 = *(int *)((((t348 << 2) + t347) + 0x0));
        t348 = (t348 + 0x1);
        *(unsigned short *)((t350 + 0x6)) = ((*(short *)((t350 + 0x6))) | 0x200);
    }
    *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x1;
    t353 = (((struct oC8_int *)(a4))->v);
    (((struct o20_float *)(t353))->v) = 1.0f;
    (((struct o1C_float *)(t353))->v) = 1.0f;
    (((struct o18_float *)(t353))->v) = 1.0f;
    t354 = *(signed char *)((a4 + 0x15));
    if (t354 != 0) {
        if (t354 != 1) {
            if (t354 != 2) {
                if (t354 == 3) {
                    t359 = *(signed char *)((a4 + 0x16));
                    switch (t359) {
                    case 0:
                        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                        (((struct o20_ushort *)(a4))->v) = 0x12C;
                        t375 = (((struct o20_short *)(a4))->v);
                        (((struct o20_ushort *)(a4))->v) = (t375 - 1);
                        if ((int)(short)(t375 - 1) <= 0) {
                            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                        }
                        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 0.75f);
                        break;
                    case 1:
                        t364 = (((struct o20_short *)(a4))->v);
                        (((struct o20_ushort *)(a4))->v) = (t364 - 1);
                        if ((int)(short)(t364 - 1) <= 0) {
                            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                        }
                        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 0.75f);
                        break;
                    case 2:
                        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 3.0f);
                        break;
                    }
                    *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
                    *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) & 0x3F);
                    if ((*(short *)((a4 + 0x1E))) == 1) {
                        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + 5.0f);
                    } else {
                        t391 = *(short *)((a4 + 0x1E));
                        if (t391 == 2) {
                            (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) - 5.0f);
                        } else {
                            if (t391 == 6) {
                                (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + 5.0f);
                            } else {
                                if ((*(short *)((a4 + 0x1E))) == 7) {
                                    (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) - 5.0f);
                                }
                            }
                        }
                    }
                    FUN_0c0e9a88(a4, 0x1, -0.0199999996f);
                    FUN_0c0e9a88(a4, 0x4, 0.0199999996f);
                    t412 = *(signed char *)0xC54098D;
                    t418 = t412;
                    if (t412 != 8) {
                    } else {
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        *(unsigned short *)((a4 + 0x1E)) = 0x5A;
                        (((struct o20_ushort *)(a4))->v) = 0x4;
                        (((struct o2C_float *)(a4))->v) = 3350.0f;
                        thunk_FUN_0c05abb2(0x41, (a4 + 0x28));
                        *(unsigned char *)((((((struct oCC_int *)(a4))->v)) + 0x0)) = 0x1;
                        t416 = (((struct oCC_int *)(a4))->v);
                        (((struct o20_float *)(t416))->v) = 0.0f;
                        (((struct o1C_float *)(t416))->v) = 0.0f;
                        (((struct o18_float *)(t416))->v) = 0.0f;
                        *(int *)((int)stk + 0) = 0x0;
                        t418 = (FUN_0c05258e(0x2, 0x14, 0x100, 0x1E, 0x0));
                    }
                    return t418;
                }
                if (t354 == 4) {
                    FUN_0c0e9a88(a4, 0x4, -0.0199999996f);
                    FUN_0c0e9a88(a4, 0x2, 0.0199999996f);
                    t422 = *(short *)((a4 + 0x1E));
                    if ((int)((((struct o20_short *)(a4))->v)) >= 0) {
                        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((float)t422 / 10.0f));
                        t430 = ((*(short *)((a4 + 0x1E))) - ((((struct o20_short *)(a4))->v)));
                    } else {
                        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) - ((float)t422 / 10.0f));
                        t430 = ((*(short *)((a4 + 0x1E))) + ((((struct o20_short *)(a4))->v)));
                    }
                    *(unsigned short *)((a4 + 0x1E)) = t430;
                    (((struct o20_ushort *)(a4))->v) = (-((((struct o20_short *)(a4))->v)));
                    t435 = *(short *)((a4 + 0x1E));
                    t437 = t435;
                    if ((int)t435 > 0) {
                    } else {
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        (((struct o2C_float *)(a4))->v) = 3350.0f;
                        t437 = 0x2C;
                    }
                    return t437;
                }
                if (t354 == 5) {
                    FUN_0c0e9a88(a4, 0x4, -0.0199999996f);
                    FUN_0c0e9a88(a4, 0x2, 0.0199999996f);
                    (((struct o2C_float *)(a4))->v) = 3350.0f;
                    t443 = *(signed char *)0xC54098D;
                    if (t443 != 9) {
                        return t443;
                    }
                    if ((int)t443 > (int)0xE) {
                        return t443;
                    }
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    *(unsigned short *)((a4 + 0x1E)) = 0x3;
                    *(int *)((int)stk + 44) = a4;
                    *(int *)((int)stk + 40) = 0x0;
                    *(int *)((int)stk + 36) = 0x1;
                    *(unsigned int *)(((int)stk + 24)) = 0x1;
                    *(unsigned int *)(((int)stk + 28)) = 0x258;
                    t445 = FUN_0c03f444(0x5, 0x0, 0x1);
                    t453 = t445;
                    if (t445 != 0) {
                        *(unsigned char *)((t445 + 0x1)) = 0xFFFFFFFF;
                        *(unsigned int *)((t445 + 0x4)) = 0xC0EA19E;
                        (((struct oA8_uchar *)(t445))->v) = 0x1;
                        (((struct oAC_ushort *)(t445))->v) = 0x201;
                        (((struct oA9_uchar *)(t445))->v) = 0x21;
                        *(unsigned char *)((t445 + 0x2)) = (*(int *)(((int)stk + 24)));
                        t447 = *(int *)(((int)stk + 24));
                        { struct mv3 { int w[3]; }; *(struct mv3 *)((t445 + 0x28)) = *(struct mv3 *)(((((t447 << 1) + t447) << 2) + 0xC288180)); }
                        t449 = (((struct oC4_int *)(t445))->v);
                        FUN_0c037498(t449, 0x0, 0xF2, (*(int *)0xC4B410C));
                        *(unsigned char *)((t449 + 0x0)) = 0x1;
                        *(unsigned short *)((t449 + 0x6)) = 0x1;
                        t453 = *(short *)(((int)stk + 28));
                        *(unsigned short *)((t445 + 0x1C)) = t453;
                    }
                    return t453;
                }
                if (t354 == 6) {
                    if (((*(short *)((a4 + 0x1E))) & 0x2) != 0) {
                        u459 = (((((struct o28_float *)(a4))->v)) + 5.0f);
                    } else {
                        u459 = (((((struct o28_float *)(a4))->v)) - 5.0f);
                    }
                    (((struct o28_float *)(a4))->v) = u459;
                    if (((*(short *)((a4 + 0x1E))) & 0x4) != 0) {
                        u464 = (((((struct o30_float *)(a4))->v)) + (1.0f + 1.0f));
                    } else {
                        u464 = (((((struct o30_float *)(a4))->v)) - (1.0f + 1.0f));
                    }
                    (((struct o30_float *)(a4))->v) = u464;
                    *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
                    t467 = *(signed char *)0xC54098D;
                    t644 = t467;
                    if (t467 != 10) {
                    } else {
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        (((struct o16_uchar *)(a4))->v) = 0x0;
                        (((struct o28_float *)(a4))->v) = ((((struct o58_float *)(a4))->v));
                        (((struct o30_float *)(a4))->v) = ((((struct o60_float *)(a4))->v));
                        *(unsigned short *)((a4 + 0x1E)) = 0x0;
                        (((struct o50_float *)(a4))->v) = 3.0f;
                        thunk_FUN_0c05abb2(0x40, (a4 + 0x28));
                        *(unsigned char *)((((((struct oD4_int *)(a4))->v)) + 0x0)) = 0x1;
                        t473 = (((struct oD4_int *)(a4))->v);
                        (((struct o20_float *)(t473))->v) = 0.0f;
                        (((struct o1C_float *)(t473))->v) = 0.0f;
                        (((struct o18_float *)(t473))->v) = 0.0f;
                        t644 = 0x18;
                    }
                } else {
                    if (t354 == 7) {
                        t487 = *(signed char *)((a4 + 0x16));
                        switch (t487) {
                        case 0:
                            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                            (((struct o20_ushort *)(a4))->v) = 0x12C;
                            t503 = (((struct o20_short *)(a4))->v);
                            (((struct o20_ushort *)(a4))->v) = (t503 - 1);
                            if ((int)(short)(t503 - 1) <= 0) {
                                (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                            }
                            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 0.75f);
                            break;
                        case 1:
                            t492 = (((struct o20_short *)(a4))->v);
                            (((struct o20_ushort *)(a4))->v) = (t492 - 1);
                            if ((int)(short)(t492 - 1) <= 0) {
                                (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                            }
                            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 0.75f);
                            break;
                        case 2:
                            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 3.0f);
                            break;
                        }
                        FUN_0c0e9a88(a4, 0x2, -0.0199999996f);
                        FUN_0c0e9a88(a4, 0x4, 0.0199999996f);
                        *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
                        *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) & 0x3F);
                        if ((*(short *)((a4 + 0x1E))) == 1) {
                            (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + 5.0f);
                        } else {
                            t521 = *(short *)((a4 + 0x1E));
                            if (t521 == 2) {
                                (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) - 5.0f);
                            } else {
                                if (t521 == 6) {
                                    (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + 5.0f);
                                } else {
                                    if ((*(short *)((a4 + 0x1E))) == 7) {
                                        (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) - 5.0f);
                                    }
                                }
                            }
                        }
                        t540 = *(signed char *)0xC54098D;
                        t644 = t540;
                        if (t540 != 13) {
                        } else {
                            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                            *(unsigned short *)((a4 + 0x1E)) = 0x5A;
                            (((struct o20_ushort *)(a4))->v) = 0x4;
                            (((struct o2C_float *)(a4))->v) = 7850.0f;
                            thunk_FUN_0c05abb2(0x41, (a4 + 0x28));
                            *(unsigned char *)((((((struct oD0_int *)(a4))->v)) + 0x0)) = 0x1;
                            t544 = (((struct oD0_int *)(a4))->v);
                            (((struct o20_float *)(t544))->v) = 0.0f;
                            (((struct o1C_float *)(t544))->v) = 0.0f;
                            (((struct o18_float *)(t544))->v) = 0.0f;
                            *(int *)((int)stk + 0) = 0x0;
                            t644 = (FUN_0c05258e(0x2, 0x14, 0x100, 0x1E, 0x0));
                        }
                    } else {
                        if (t354 == 8) {
                            t549 = *(short *)((a4 + 0x1E));
                            if ((int)((((struct o20_short *)(a4))->v)) >= 0) {
                                (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((float)t549 / 10.0f));
                                t557 = ((*(short *)((a4 + 0x1E))) - ((((struct o20_short *)(a4))->v)));
                            } else {
                                (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) - ((float)t549 / 10.0f));
                                t557 = ((*(short *)((a4 + 0x1E))) + ((((struct o20_short *)(a4))->v)));
                            }
                            *(unsigned short *)((a4 + 0x1E)) = t557;
                            FUN_0c0e9a88(a4, 0x4, -0.0199999996f);
                            FUN_0c0e9a88(a4, 0x3, 0.0199999996f);
                            (((struct o20_ushort *)(a4))->v) = (-((((struct o20_short *)(a4))->v)));
                            t564 = *(short *)((a4 + 0x1E));
                            t644 = t564;
                            if ((int)t564 <= 0) {
                                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                                (((struct o2C_float *)(a4))->v) = 7850.0f;
                                t644 = 0x2C;
                            }
                        } else {
                            if (t354 == 9) {
                                FUN_0c0e9a88(a4, 0x4, -0.0199999996f);
                                FUN_0c0e9a88(a4, 0x3, 0.0199999996f);
                                (((struct o2C_float *)(a4))->v) = 7850.0f;
                                t644 = 0x2C;
                            } else {
                                t644 = t354;
                                if (t354 == 10) {
                                    t572 = *(signed char *)((a4 + 0x16));
                                    t644 = t572;
                                    if (t572 == 0) {
                                        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                                        t574 = *(signed char *)0xC54223C;
                                        if (t574 != 0) {
                                            if (t574 != 1) {
                                                (((struct o2C_float *)(a4))->v) = 7850.0f;
                                                *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x0;
                                                *(unsigned char *)((((((struct oCC_int *)(a4))->v)) + 0x0)) = 0x0;
                                                *(unsigned char *)((((((struct oD0_int *)(a4))->v)) + 0x0)) = 0x1;
                                                t588 = 0xD0;
                                            } else {
                                                (((struct o2C_float *)(a4))->v) = 3350.0f;
                                                *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x0;
                                                *(unsigned char *)((((((struct oCC_int *)(a4))->v)) + 0x0)) = 0x1;
                                                *(unsigned char *)((((((struct oD0_int *)(a4))->v)) + 0x0)) = 0x0;
                                                t588 = 0xCC;
                                            }
                                        } else {
                                            (((struct o2C_float *)(a4))->v) = -150.0f;
                                            *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x1;
                                            *(unsigned char *)((((((struct oCC_int *)(a4))->v)) + 0x0)) = 0x0;
                                            *(unsigned char *)((((((struct oD0_int *)(a4))->v)) + 0x0)) = 0x0;
                                            t588 = 0xC8;
                                        }
                                        t592 = *(int *)((a4 + t588));
                                        (((struct o20_float *)(t592))->v) = 1.0f;
                                        (((struct o1C_float *)(t592))->v) = 1.0f;
                                        (((struct o18_float *)(t592))->v) = 1.0f;
                                        t644 = 0x18;
                                    }
                                }
                            }
                        }
                    }
                }
                return t644;
            }
            if (((*(short *)((a4 + 0x1E))) & 0x2) != 0) {
                u660 = (((((struct o28_float *)(a4))->v)) + 5.0f);
            } else {
                u660 = (((((struct o28_float *)(a4))->v)) - 5.0f);
            }
            (((struct o28_float *)(a4))->v) = u660;
            if (((*(short *)((a4 + 0x1E))) & 0x4) != 0) {
                u665 = (((((struct o30_float *)(a4))->v)) + (1.0f + 1.0f));
            } else {
                u665 = (((((struct o30_float *)(a4))->v)) - (1.0f + 1.0f));
            }
            (((struct o30_float *)(a4))->v) = u665;
            *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
            t668 = *(signed char *)0xC54098D;
            t675 = t668;
            if (t668 != 5) {
            } else {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                (((struct o16_uchar *)(a4))->v) = 0x0;
                (((struct o28_float *)(a4))->v) = ((((struct o58_float *)(a4))->v));
                (((struct o30_float *)(a4))->v) = ((((struct o60_float *)(a4))->v));
                *(unsigned short *)((a4 + 0x1E)) = 0x0;
                (((struct o50_float *)(a4))->v) = 3.0f;
                thunk_FUN_0c05abb2(0x40, (a4 + 0x28));
                *(unsigned char *)((((((struct oD4_int *)(a4))->v)) + 0x0)) = 0x1;
                t674 = (((struct oD4_int *)(a4))->v);
                (((struct o20_float *)(t674))->v) = 0.0f;
                (((struct o1C_float *)(t674))->v) = 0.0f;
                (((struct o18_float *)(t674))->v) = 0.0f;
                t675 = 0x18;
            }
            return t675;
        }
        (((struct o2C_float *)(a4))->v) = -150.0f;
        t688 = *(signed char *)0xC54098D;
        if (t688 != 4) {
            return t688;
        }
        if ((int)t688 > (int)0xE) {
            return t688;
        }
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        *(unsigned short *)((a4 + 0x1E)) = 0x3;
        *(int *)((int)stk + 44) = a4;
        *(int *)((int)stk + 40) = 0x0;
        *(int *)((int)stk + 36) = 0x1;
        *(unsigned int *)(((int)stk + 24)) = 0x0;
        *(unsigned int *)(((int)stk + 28)) = 0x258;
        t690 = FUN_0c03f444(0x5, 0x0, 0x1);
        t698 = t690;
        if (t690 != 0) {
            *(unsigned char *)((t690 + 0x1)) = 0xFFFFFFFF;
            *(unsigned int *)((t690 + 0x4)) = 0xC0EA19E;
            (((struct oA8_uchar *)(t690))->v) = 0x1;
            (((struct oAC_ushort *)(t690))->v) = 0x201;
            (((struct oA9_uchar *)(t690))->v) = 0x21;
            *(unsigned char *)((t690 + 0x2)) = (*(int *)(((int)stk + 24)));
            t692 = *(int *)(((int)stk + 24));
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t690 + 0x28)) = *(struct mv3 *)(((((t692 << 1) + t692) << 2) + 0xC288180)); }
            t694 = (((struct oC4_int *)(t690))->v);
            FUN_0c037498(t694, 0x0, 0xF2, (*(int *)0xC4B410C));
            *(unsigned char *)((t694 + 0x0)) = 0x1;
            *(unsigned short *)((t694 + 0x6)) = 0x1;
            t698 = *(short *)(((int)stk + 28));
            *(unsigned short *)((t690 + 0x1C)) = t698;
        }
        return t698;
    }
    if ((int)(*(signed char *)0xC54098D) >= (int)0xE) {
        (((struct o15_uchar *)(a4))->v) = 0xA;
        (((struct o16_uchar *)(a4))->v) = 0x0;
        t703 = 0x16;
    } else {
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t703 = 0x15;
    }
    return t703;
}

float FUN_0c0c32ec(int a4, int a5, int a6, int a7, float f4, float f5, float f6)
{
    int stk[12];

    register int R1;
    register int R2;
    register int R3;
    register float F0;
    register float F2;
    register float F3;
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
    register float w0_2;
    register float w0_3;
    register float w0_4;
    register float w0_5;
    v0_5 = a4;
    v0_0 = a7;
    w0_3 = f4;
    w0_5 = f5;
    w0_2 = f6;
    v0_0 = (0x1);
    v0_1 = (v0_5);
    v0_6 = (0xC532458);
    v0_2 = (0x0);
    if (((*(signed char *)((v0_5 + 0x14))) == 0)) goto L_C0C333A;
    v0_5 = ((*(int *)((v0_6 + 0x0))));
    L_C0C332E:;
    if ((v0_5 != 0)) goto L_C0C331A;
    (((struct o3768_uint *)(v0_1))->v) = 0x0;
    v0_5 = (0x3768);
    L_C0C3A2C:;
    return F0;
    L_C0C331A:;
    (((struct o422_uchar *)(v0_5))->v) = ((*(signed char *)(((0x422 + v0_5) + 0x0))) & (~((int)v0_0 << (int)(*(signed char *)((v0_1 + 0x1))))));
    v0_5 = ((*(int *)((v0_5 + 0xC))));
    goto L_C0C332E;
    L_C0C333A:;
    v0_3 = ((*(int *)((v0_6 + 0x0))));
    v0_4 = (0x0);
    w0_0 = (99999.0f);
    L_C0C3A0C:;
    if ((v0_3 == 0)) goto L_C0C3A14;
    v0_7 = *(signed char *)(((((unsigned short)(unsigned char)(*(signed char *)((v0_3 + 0x41C))) * (unsigned short)0x34) + 0xC2738B8) + 0x0));
    v0_5 = (v0_7);
    v0_6 = (0xC2738B8);
    if (!((v0_7 != 6))) goto L_C0C39EC;
    if ((v0_5 != 4)) goto L_C0C3392;
    goto L_C0C39EC;
    L_C0C39EC:;
    (((struct o422_uchar *)(v0_3))->v) = ((*(signed char *)(((0x422 + v0_3) + 0x0))) & (~((int)v0_0 << (int)(*(signed char *)((v0_1 + 0x1))))));
    if ((v0_2 != 2)) goto L_C0C3A0A;
    v0_3 = (0x0);
    goto L_C0C3A0C;
    L_C0C3A0A:;
    v0_3 = ((*(int *)((v0_3 + 0xC))));
    goto L_C0C3A0C;
    L_C0C3392:;
    v0_6 = *(signed char *)((v0_3 + 0x41D));
    v0_5 = (v0_6);
    v0_7 = (0xC058310);
    v0_7 = (0xC0582AC);
    if ((v0_6 == 2)) goto L_C0C33A2;
    if (((*(signed char *)((v0_3 + 0x41D))) != 8)) goto L_C0C39EC;
    if (((*(signed char *)((v0_3 + 0x131))) != 0)) goto L_C0C39EC;
    v0_5 = (0x404);
    if ((((((struct o404_int *)(v0_3))->v)) != 0)) goto L_C0C39EC;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x24)) = *(struct mv3 *)((v0_3 + 0x28)); }
    v0_5 = (0xA4);
    if ((((((struct oA4_int *)(v0_3))->v)) == 0)) goto L_C0C39A8;
    math_mat_get_translate((*(int *)((v0_3 + v0_5))), (((int)stk + 0) + 0x24));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x18)) = *(struct mv3 *)((v0_3 + 0x28)); }
    math_mat_transform_vector((((int)stk + 0) + 0x18), ((((struct oA4_int *)(v0_3))->v)));
    *(float *)(((int)stk + 36)) = ((*(float *)(((int)stk + 36))) + (*(float *)(((int)stk + 24))));
    *(float *)(((int)stk + 40)) = ((*(float *)(((int)stk + 40))) + (*(float *)(((int)stk + 28))));
    *(float *)(((int)stk + 44)) = ((*(float *)(((int)stk + 44))) + (*(float *)(((int)stk + 32))));
    L_C0C39A8:;
    *(float *)(((int)stk + 24)) = ((*(float *)(((int)stk + 36))) - ((((struct o28_float *)(v0_1))->v)));
    *(float *)(((int)stk + 28)) = ((*(float *)(((int)stk + 40))) - ((((struct o2C_float *)(v0_1))->v)));
    *(float *)(((int)stk + 32)) = ((*(float *)(((int)stk + 44))) - ((((struct o30_float *)(v0_1))->v)));
    w0_1 = nlScalor((((int)stk + 0) + 0x18));
    F0 = (w0_1);
    w0_3 = (w0_1);
    if ((!(400.0f > w0_1))) goto L_C0C39EC;
    v0_2 = (0x2);
    v0_4 = (v0_3);
    w0_0 = (w0_3);
    goto L_C0C39EC;
    L_C0C33A2:;
    if ((v0_2 == 0)) goto L_C0C33AA;
    goto L_C0C39EC;
    L_C0C33AA:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x24)) = *(struct mv3 *)((v0_3 + 0x28)); }
    v0_5 = (0xA4);
    if ((((((struct oA4_int *)(v0_3))->v)) == 0)) goto L_C0C340A;
    math_mat_get_translate((*(int *)((v0_3 + v0_5))), (((int)stk + 0) + 0x24));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x18)) = *(struct mv3 *)((v0_3 + 0x28)); }
    math_mat_transform_vector((((int)stk + 0) + 0x18), ((((struct oA4_int *)(v0_3))->v)));
    *(float *)(((int)stk + 36)) = ((*(float *)(((int)stk + 36))) + (*(float *)(((int)stk + 24))));
    *(float *)(((int)stk + 40)) = ((*(float *)(((int)stk + 40))) + (*(float *)(((int)stk + 28))));
    *(float *)(((int)stk + 44)) = ((*(float *)(((int)stk + 44))) + (*(float *)(((int)stk + 32))));
    L_C0C340A:;
    *(float *)(((int)stk + 24)) = ((*(float *)(((int)stk + 36))) - ((((struct o28_float *)(v0_1))->v)));
    *(float *)(((int)stk + 28)) = ((*(float *)(((int)stk + 40))) - ((((struct o2C_float *)(v0_1))->v)));
    w0_2 = (((struct o30_float *)(v0_1))->v);
    w0_3 = *(float *)(((int)stk + 44));
    *(float *)(((int)stk + 32)) = (w0_3 - w0_2);
    w0_1 = *(float *)(((int)stk + 24));
    *(float *)(((int)stk + 4)) = (w0_3 - w0_2);
    v0_6 = *(signed char *)((v0_3 + 0x41C));
    v0_5 = ((unsigned char)v0_6);
    v0_7 = (0xC064E70);
    v0_7 = (0xC064F80);
    w0_1 = (w0_1);
    w0_4 = (90.0f);
    w0_2 = (200.0f);
    if (((unsigned char)v0_6 == 0xC2)) goto L_C0C352A;
    if ((v0_5 != 0xC4)) goto L_C0C3460;
    if (((*(signed char *)((v0_1 + 0x3715))) != 30)) goto L_C0C363E;
    goto L_C0C39EC;
    L_C0C363E:;
    v0_5 = (FUN_0c064f80(v0_1)) != 0;
    if (v0_5) goto L_C0C364A;
    goto L_C0C39EC;
    L_C0C364A:;
    w0_3 = *(float *)(((int)stk + 24));
    w0_5 = *(float *)(((int)stk + 32));
    v0_6 = *(signed char *)((v0_3 + 0x2));
    w0_1 = (w0_5 * w0_5);
    w0_1 = w0_1 + w0_3 * w0_3;
    v0_5 = (v0_6);
    F0 = (w0_3);
    w0_1 = (_builtin_sqrtf(w0_1));
    w0_3 = (w0_3);
    w0_5 = (w0_5);
    if ((v0_6 == 0)) goto L_C0C3678;
    if ((v0_5 == 1)) goto L_C0C3678;
    if ((v0_5 == 2)) goto L_C0C3678;
    if ((v0_5 == 3)) goto L_C0C369C;
    if ((v0_5 == 4)) goto L_C0C36CC;
    goto L_C0C39EC;
    L_C0C36CC:;
    if ((250.0f > w0_1)) goto L_C0C36D8;
    goto L_C0C39EC;
    L_C0C36D8:;
    w0_3 = (((struct o2C_float *)(v0_1))->v);
    w0_4 = *(float *)(((int)stk + 40));
    v0_5 = w0_2 > _builtin_fabsf((w0_4 - w0_3));
    w0_2 = (_builtin_fabsf((w0_4 - w0_3)));
    if (v0_5) goto L_C0C36EC;
    goto L_C0C39EC;
    L_C0C36EC:;
    L_C0C387C:;
    v0_2 = (v0_0);
    v0_4 = (v0_3);
    w0_0 = (w0_1);
    goto L_C0C39EC;
    L_C0C369C:;
    if ((400.0f > w0_1)) goto L_C0C36A8;
    goto L_C0C39EC;
    L_C0C36A8:;
    v0_5 = (FUN_0c064e70(v0_3, ((int)stk + 0))) != 0;
    if (v0_5) goto L_C0C36B6;
    goto L_C0C39EC;
    L_C0C36B6:;
    if ((w0_2 > _builtin_fabsf(((*(float *)(((int)stk + 0))) - ((((struct o2C_float *)(v0_1))->v)))))) goto L_C0C36C8;
    goto L_C0C39EC;
    L_C0C36C8:;
    goto L_C0C387C;
    L_C0C3678:;
    if ((250.0f > w0_1)) goto L_C0C3684;
    goto L_C0C39EC;
    L_C0C3684:;
    w0_2 = (((struct o2C_float *)(v0_1))->v);
    w0_3 = *(float *)(((int)stk + 40));
    v0_5 = !(w0_4 > _builtin_fabsf((w0_3 - w0_2)));
    w0_2 = (_builtin_fabsf((w0_3 - w0_2)));
    if (v0_5) goto L_C0C3698;
    goto L_C0C387C;
    L_C0C3698:;
    goto L_C0C39EC;
    L_C0C3460:;
    if ((v0_5 != 0xC8)) goto L_C0C346A;
    if (((*(signed char *)((v0_1 + 0x3715))) != 30)) goto L_C0C3708;
    goto L_C0C39EC;
    L_C0C3708:;
    if (((*(signed char *)((v0_3 + 0x424))) == 4)) goto L_C0C3726;
    v0_5 = (FUN_0c064f80(v0_1)) == 0;
    if (v0_5) goto L_C0C371E;
    w0_3 = (120.0f);
    L_C0C3736:;
    w0_2 = *(float *)(((int)stk + 24));
    w0_4 = *(float *)(((int)stk + 32));
    w0_1 = (w0_4 * w0_4);
    w0_1 = w0_1 + w0_2 * w0_2;
    v0_5 = w0_3 > _builtin_sqrtf(w0_1);
    F0 = (w0_2);
    w0_1 = (_builtin_sqrtf(w0_1));
    w0_5 = (w0_4);
    w0_2 = (w0_2);
    if (v0_5) goto L_C0C3752;
    goto L_C0C39EC;
    L_C0C3752:;
    v0_5 = (FUN_0c0c28f6(v0_3, (((int)stk + 0) + 0x14))) != 0;
    if (v0_5) goto L_C0C3762;
    goto L_C0C39EC;
    L_C0C3762:;
    v0_5 = (FUN_0c064e70(v0_3, (((int)stk + 0) + 0x10))) != 0;
    if (v0_5) goto L_C0C3772;
    goto L_C0C39EC;
    L_C0C3772:;
    v0_5 = (FUN_0c0c28f6(v0_1, (((int)stk + 0) + 0xC))) != 0;
    if (v0_5) goto L_C0C3782;
    goto L_C0C39EC;
    L_C0C3782:;
    *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) + -50.0f);
    v0_5 = (FUN_0c064e70(v0_1, (((int)stk + 0) + 0x8))) != 0;
    if (v0_5) goto L_C0C37A0;
    goto L_C0C39EC;
    L_C0C37A0:;
    w0_2 = *(float *)(((int)stk + 8));
    *(float *)(((int)stk + 8)) = (w0_2 + 50.0f);
    w0_3 = (50.0f);
    if ((!((*(float *)(((int)stk + 16))) > (w0_2 + 50.0f)))) goto L_C0C37BA;
    goto L_C0C39EC;
    L_C0C37BA:;
    if ((!((*(float *)(((int)stk + 12))) > (*(float *)(((int)stk + 20)))))) goto L_C0C37CA;
    goto L_C0C39EC;
    L_C0C37CA:;
    goto L_C0C387C;
    L_C0C371E:;
    w0_3 = (170.0f);
    goto L_C0C3736;
    L_C0C3726:;
    v0_5 = (FUN_0c064f80(v0_1)) == 0;
    if (v0_5) goto L_C0C3732;
    w0_3 = (w0_2);
    goto L_C0C3736;
    L_C0C3732:;
    w0_3 = (250.0f);
    goto L_C0C3736;
    L_C0C346A:;
    if ((v0_5 != 0xCB)) goto L_C0C3474;
    w0_2 = *(float *)(((int)stk + 4));
    w0_2 = (w0_2 * w0_2);
    w0_2 = w0_2 + w0_1 * w0_1;
    v0_5 = 250.0f > _builtin_sqrtf(w0_2);
    F0 = (w0_1);
    w0_3 = (_builtin_sqrtf(w0_2));
    if (v0_5) goto L_C0C37EA;
    goto L_C0C39EC;
    L_C0C37EA:;
    w0_1 = (((struct o2C_float *)(v0_1))->v);
    w0_2 = *(float *)(((int)stk + 40));
    v0_5 = 280.0f > _builtin_fabsf((w0_2 - w0_1));
    w0_2 = (_builtin_fabsf((w0_2 - w0_1)));
    w0_5 = (280.0f);
    if (v0_5) goto L_C0C3802;
    goto L_C0C39EC;
    L_C0C3802:;
    if (!((!(w0_0 > w0_3)))) goto L_C0C3912;
    goto L_C0C39EC;
    L_C0C3912:;
    v0_4 = (v0_3);
    w0_0 = (w0_3);
    goto L_C0C39EC;
    L_C0C3474:;
    if (!((v0_5 != 0xC7))) goto L_C0C382C;
    if ((v0_5 != 0xCC)) goto L_C0C3488;
    goto L_C0C382C;
    L_C0C382C:;
    if (((*(signed char *)((v0_1 + 0x3715))) != 30)) goto L_C0C3838;
    goto L_C0C39EC;
    L_C0C3838:;
    v0_5 = (FUN_0c064f80(v0_1)) != 0;
    if (v0_5) goto L_C0C3844;
    goto L_C0C39EC;
    L_C0C3844:;
    w0_2 = *(float *)(((int)stk + 24));
    w0_1 = *(float *)(((int)stk + 32));
    w0_1 = (w0_1 * w0_1);
    w0_1 = w0_1 + w0_2 * w0_2;
    v0_5 = 300.0f > _builtin_sqrtf(w0_1);
    F0 = (w0_2);
    w0_1 = (_builtin_sqrtf(w0_1));
    w0_3 = (300.0f);
    w0_5 = (w0_2);
    if (v0_5) goto L_C0C3864;
    goto L_C0C39EC;
    L_C0C3864:;
    if ((120.0f > _builtin_fabsf(((*(float *)(((int)stk + 40))) - ((((struct o2C_float *)(v0_1))->v)))))) goto L_C0C387C;
    goto L_C0C39EC;
    L_C0C3488:;
    if ((v0_5 != 0xCA)) goto L_C0C3492;
    v0_5 = (FUN_0c064f80(v0_1)) != 0;
    if (v0_5) goto L_C0C3890;
    goto L_C0C39EC;
    L_C0C3890:;
    if ((w0_4 > _builtin_fabsf(((((((struct o2C_float *)(v0_3))->v)) - ((((struct o2C_float *)(v0_1))->v))) + -150.0f)))) goto L_C0C38A8;
    goto L_C0C39EC;
    L_C0C38A8:;
    w0_1 = *(float *)(((int)stk + 24));
    w0_2 = *(float *)(((int)stk + 32));
    w0_2 = (w0_2 * w0_2);
    w0_2 = w0_2 + w0_1 * w0_1;
    v0_5 = 80.0f > _builtin_sqrtf(w0_2);
    F0 = (w0_1);
    w0_3 = (_builtin_sqrtf(w0_2));
    w0_5 = (80.0f);
    if (v0_5) goto L_C0C38C8;
    goto L_C0C39EC;
    L_C0C38C8:;
    if ((w0_0 > w0_3)) goto L_C0C38D0;
    goto L_C0C39EC;
    L_C0C38D0:;
    goto L_C0C3912;
    L_C0C3492:;
    v0_5 = (((v0_5 == 0xCD)));
    if ((!v0_5)) goto L_C0C34D6;
    v0_5 = (FUN_0c064f80(v0_1)) != 0;
    if (v0_5) goto L_C0C38E0;
    goto L_C0C39EC;
    L_C0C38E0:;
    if ((w0_4 > _builtin_fabsf((((((struct o2C_float *)(v0_3))->v)) - ((((struct o2C_float *)(v0_1))->v)))))) goto L_C0C38F2;
    goto L_C0C39EC;
    L_C0C38F2:;
    w0_1 = *(float *)(((int)stk + 24));
    w0_2 = *(float *)(((int)stk + 32));
    w0_2 = (w0_2 * w0_2);
    w0_2 = w0_2 + w0_1 * w0_1;
    v0_5 = !(100.0f > _builtin_sqrtf(w0_2));
    F0 = (w0_1);
    w0_3 = (_builtin_sqrtf(w0_2));
    w0_5 = (w0_1);
    if (v0_5) goto L_C0C39EC;
    if ((!(w0_0 > w0_3))) goto L_C0C39EC;
    goto L_C0C3912;
    L_C0C34D6:;
    v0_5 = (FUN_0c064f80(v0_1)) != 0;
    if (v0_5) goto L_C0C34E2;
    goto L_C0C39EC;
    L_C0C34E2:;
    v0_5 = (FUN_0c064e70(v0_3, ((int)stk + 0))) != 0;
    if (v0_5) goto L_C0C34F0;
    goto L_C0C39EC;
    L_C0C34F0:;
    if ((w0_4 > _builtin_fabsf(((*(float *)(((int)stk + 0))) - ((((struct o2C_float *)(v0_1))->v)))))) goto L_C0C3502;
    goto L_C0C39EC;
    L_C0C3502:;
    w0_3 = *(float *)(((int)stk + 24));
    w0_1 = *(float *)(((int)stk + 32));
    w0_4 = (w0_1 * w0_1);
    w0_4 = w0_4 + w0_3 * w0_3;
    v0_5 = w0_2 > _builtin_sqrtf(w0_4);
    F0 = (w0_3);
    w0_3 = (_builtin_sqrtf(w0_4));
    w0_5 = (w0_1);
    if (v0_5) goto L_C0C351E;
    goto L_C0C39EC;
    L_C0C351E:;
    if ((!(w0_0 > w0_3))) goto L_C0C3526;
    goto L_C0C3912;
    L_C0C3526:;
    goto L_C0C39EC;
    L_C0C352A:;
    if (((*(signed char *)((v0_3 + 0x2))) == 0)) goto L_C0C358A;
    if (((*(signed char *)((v0_3 + 0x1A))) != 0)) goto L_C0C354A;
    if (((*(signed char *)((v0_3 + 0x1))) == (*(signed char *)((v0_1 + 0x1))))) goto L_C0C3546;
    goto L_C0C39EC;
    L_C0C3546:;
    L_C0C358A:;
    if (((*(signed char *)((v0_1 + 0x371D))) != 4)) goto L_C0C35DC;
    w0_2 = *(float *)(((int)stk + 4));
    w0_2 = (w0_2 * w0_2);
    w0_2 = w0_2 + w0_1 * w0_1;
    v0_5 = 150.0f > _builtin_sqrtf(w0_2);
    F0 = (w0_1);
    w0_3 = (_builtin_sqrtf(w0_2));
    w0_5 = (150.0f);
    if (v0_5) goto L_C0C35AE;
    goto L_C0C39EC;
    L_C0C35AE:;
    if ((100.0f > _builtin_fabsf((((((struct o2C_float *)(v0_3))->v)) - ((((struct o2C_float *)(v0_1))->v)))))) goto L_C0C35C4;
    goto L_C0C39EC;
    L_C0C35C4:;
    if ((w0_0 > w0_3)) goto L_C0C35CC;
    goto L_C0C39EC;
    L_C0C35CC:;
    goto L_C0C3912;
    L_C0C35DC:;
    v0_5 = (FUN_0c064f80(v0_1)) != 0;
    if (v0_5) goto L_C0C35E8;
    goto L_C0C39EC;
    L_C0C35E8:;
    v0_5 = (FUN_0c064e70(v0_3, ((int)stk + 0))) != 0;
    if (v0_5) goto L_C0C35F6;
    goto L_C0C39EC;
    L_C0C35F6:;
    if ((w0_4 > _builtin_fabsf(((*(float *)(((int)stk + 0))) - ((((struct o2C_float *)(v0_1))->v)))))) goto L_C0C3608;
    goto L_C0C39EC;
    L_C0C3608:;
    w0_3 = *(float *)(((int)stk + 24));
    w0_1 = *(float *)(((int)stk + 32));
    w0_4 = (w0_1 * w0_1);
    w0_4 = w0_4 + w0_3 * w0_3;
    v0_5 = w0_2 > _builtin_sqrtf(w0_4);
    F0 = (w0_3);
    w0_3 = (_builtin_sqrtf(w0_4));
    w0_5 = (w0_1);
    if (v0_5) goto L_C0C3624;
    goto L_C0C39EC;
    L_C0C3624:;
    w0_3 = (1.0f);
    if ((w0_0 > 1.0f)) goto L_C0C362E;
    goto L_C0C39EC;
    L_C0C362E:;
    goto L_C0C3912;
    L_C0C354A:;
    v0_6 = *(signed char *)((v0_3 + 0x1));
    v0_5 = (v0_6);
    if ((v0_6 == 0)) goto L_C0C355A;
    if (!((v0_5 != 1))) goto L_C0C355A;
    v0_6 = *(signed char *)((v0_1 + 0x1));
    v0_5 = (v0_6);
    if ((v0_6 != 0)) goto L_C0C357E;
    goto L_C0C39EC;
    L_C0C355A:;
    v0_6 = *(signed char *)((v0_1 + 0x1));
    v0_5 = (v0_6);
    if ((v0_6 != 2)) goto L_C0C3566;
    goto L_C0C39EC;
    L_C0C3566:;
    if ((v0_5 != 3)) goto L_C0C358A;
    goto L_C0C39EC;
    L_C0C357E:;
    if ((v0_5 != 1)) goto L_C0C358A;
    goto L_C0C39EC;
    L_C0C3A14:;
    if ((v0_4 == 0)) goto L_C0C3A28;
    (((struct o422_uchar *)(v0_4))->v) = ((*(signed char *)(((0x422 + v0_4) + 0x0))) | ((int)v0_0 << (int)(*(signed char *)((v0_1 + 0x1)))));
    L_C0C3A28:;
    (((struct o3768_uint *)(v0_1))->v) = v0_4;
    v0_5 = (0x3768);
    goto L_C0C3A2C;
}
