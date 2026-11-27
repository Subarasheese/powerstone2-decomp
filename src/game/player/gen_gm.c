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
int FUN_0c187a88(int, int, int);
extern float _builtin_sqrtf(float);
int math_mat_get_translate(int, int);
int math_mat_transform_vector(int, int);
float nlScalor(int);
int thunk_FUN_0c058310(int, int);
int thunk_FUN_0c05abb2(int, int);
void FUN_0c055df0(int a4, int a5, int a6, int a7, float f4);
void FUN_0c10f674(int a4, int a5, int a6, int a7);
void FUN_0c0e9ada(int a4);
int FUN_0c0ea1f8(int, int);
float FUN_0c0c32ec(int a4, int a5, int a6, int a7, float f4, float f5, float f6);

struct o10_uint { char p[0x10]; unsigned int v; };
struct o1C_short { char p[0x1C]; short v; };
struct o1C_ushort { char p[0x1C]; unsigned short v; };
struct o6_ushort { char p[0x6]; unsigned short v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_uint { char p[0xC]; unsigned int v; };

/* manual: written by hand, 2026-11-23/24 (build/manual/notes_FUN_0c055df0.txt) */
void FUN_0c055df0(int a4, int a5, int a6, int a7, float f4)
{
    int stk[7];

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
    v0_3 = (0x18C + v0_2);
    FUN_0c055252((signed char)((unsigned int)((unsigned int)((*(int *)((v0_0 + 0x8))) & 0xF000000) >> 16) >> 8), v0_3, (v0_3 + 0x4), ((0x18C + v0_2) + 0x8), (v0_0 + 0x4C), v0_1, w0_0);
    v0_1 = (*(int *)((v0_0 + 0x0)));
    FUN_0c054e90(((unsigned int)((*(int *)((v0_0 + 0x8))) & 0xF0000000) >> 28), (0x19C + v0_2), ((0x19C + v0_2) + 0x18), ((0x19C + v0_2) + 0x30), (v0_0 + 0x50), v0_1);
    v0_1 = (*(int *)((v0_0 + 0x0)));
    FUN_0c054e90(((unsigned int)((*(int *)((v0_0 + 0x8))) & 0xF0000000) >> 28), ((0x19C + v0_2) + 0x4), ((0x19C + v0_2) + 0x1C), ((0x19C + v0_2) + 0x34), (v0_0 + 0x54), v0_1);
    v0_1 = (*(int *)((v0_0 + 0x0)));
    FUN_0c054e90(((unsigned int)((unsigned int)((unsigned int)((*(int *)((v0_0 + 0x8))) & 0xF0000000) >> 8) >> 2) >> 2), ((0x19C + v0_2) + 0x8), ((0x19C + v0_2) + 0x20), ((0x19C + v0_2) + 0x38), (v0_0 + 0x58), v0_1);
    v0_1 = (*(int *)((v0_0 + 0x0)));
    FUN_0c054e90(((unsigned int)((*(int *)((v0_0 + 0x8))) & 0xF0000000) >> 28), ((0x19C + v0_2) + 0xC), ((0x19C + v0_2) + 0x24), ((0x19C + v0_2) + 0x3C), (v0_0 + 0x5C), v0_1);
    v0_1 = (*(int *)((v0_0 + 0x0)));
    FUN_0c054e90(((unsigned int)((*(int *)((v0_0 + 0x8))) & 0xF0000000) >> 28), ((0x19C + v0_2) + 0x10), ((0x19C + v0_2) + 0x28), ((0x19C + v0_2) + 0x40), (v0_0 + 0x60), v0_1);
    v0_1 = (*(int *)((v0_0 + 0x0)));
    FUN_0c054e90(((unsigned int)((*(int *)((v0_0 + 0x8))) & 0xF0000000) >> 28), ((0x19C + v0_2) + 0x14), ((0x19C + v0_2) + 0x2C), ((0x19C + v0_2) + 0x44), (v0_0 + 0x64), v0_1);
    v0_1 = (*(int *)((v0_0 + 0x0)));
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
    FUN_0c0556c8(((int)((*(int *)((v0_0 + 0x8))) & 0xF00) >> 8), (v0_9 + v0_1), ((v0_9 + v0_1) + 0xC), ((v0_9 + v0_1) + 0x18), (v0_0 + 0x68), (*(int *)((v0_0 + 0x0))), w0_0);
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
    L_PAIR:;
    v0_2 = (*(int *)((v0_0 + 0x0)));
    v0_2 = ((int (*)(int, int, int, int, int, int))(FUN_0c055368))(((int)((*(int *)((v0_0 + 0x8))) & 0xF00000) >> 20), (0xEC + v0_1), ((0xEC + v0_1) + 0xC), ((0xEC + v0_1) + 0x18), (v0_0 + 0x68), v0_2);
    v0_2 = (*(int *)((v0_0 + 0x0)));
    v0_2 = ((int (*)(int, int, int, int, int, int))(FUN_0c055368))((short)((unsigned int)((*(int *)((v0_0 + 0x8))) & R8) >> 16), (0xBC + v0_1), ((0xBC + v0_1) + 0xC), ((0xBC + v0_1) + 0x18), (v0_0 + 0x74), v0_2);
    L_C056B24:;
    v0_2 = (*(int *)((v0_0 + 0x0)));
    FUN_0c05507c(((int)((*(int *)((v0_0 + 0x8))) & 0xF000) >> 12), (v0_0 + 0x24), ((0x17C + v0_1) + 0x4), ((0x17C + v0_1) + 0x8), (v0_0 + 0x58), v0_2);
    return;
    L_C056898:;
    if ((v0_7 != 4)) goto L_C0568A0;
    FUN_0c055a2c(v0_1, (0xBC + v0_1));
    goto L_PAIR;
    L_C0568A0:;
    if ((v0_7 != 5)) goto L_C0568A8;
    FUN_0c055a7c(v0_1, (0xEC + v0_1));
    goto L_PAIR;
    L_C0568A8:;
    if ((v0_7 != 6)) goto L_C0568B0;
    FUN_0c055c60(v0_1, (0xEC + v0_1));
    goto L_PAIR;
    L_C0568B0:;
    goto L_C056B24;
    L_C05696C:;
    v0_2 = (*(int *)((v0_0 + 0x0)));
    v0_2 = ((int (*)(int, int, int, int, int, int, float))(FUN_0c055368))(((int)((*(int *)((v0_0 + 0x8))) & 0xF00000) >> 20), (0xEC + v0_1), ((0xEC + v0_1) + 0xC), ((0xEC + v0_1) + 0x18), (v0_0 + 0x68), v0_2, w0_0);
    FUN_0c055a7c(v0_1, ((0xEC + v0_1) + 0xC));
    v0_2 = (*(int *)((v0_0 + 0x0)));
    v0_2 = ((int (*)(int, int, int, int, int, int))(FUN_0c055368))((short)((unsigned int)((*(int *)((v0_0 + 0x8))) & R8) >> 16), (0xBC + v0_1), ((0xBC + v0_1) + 0xC), ((0xBC + v0_1) + 0x18), (v0_0 + 0x74), v0_2);
    goto L_C056B24;
    L_C056914:;
    v0_2 = (*(int *)((v0_0 + 0x0)));
    v0_2 = ((int (*)(int, int, int, int, int, int, float))(FUN_0c055368))((short)((unsigned int)((*(int *)((v0_0 + 0x8))) & R8) >> 16), (0xBC + v0_1), ((0xBC + v0_1) + 0xC), ((0xBC + v0_1) + 0x18), (v0_0 + 0x74), v0_2, w0_0);
    FUN_0c055a2c(v0_1, ((0xBC + v0_1) + 0xC));
    v0_2 = (*(int *)((v0_0 + 0x0)));
    v0_2 = ((int (*)(int, int, int, int, int, int))(FUN_0c055368))(((int)((*(int *)((v0_0 + 0x8))) & 0xF00000) >> 20), (0xEC + v0_1), ((0xEC + v0_1) + 0xC), ((0xEC + v0_1) + 0x18), (v0_0 + 0x68), v0_2);
    goto L_C056B24;
    L_C0568B4:;
    FUN_0c055a28();
    goto L_PAIR;
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
    *(unsigned int *)(((int)stk + 0)) = 0x0;
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
    *(unsigned int *)(((int)stk + 0)) = ((*(int *)(((int)stk + 0))) + 0x1);
    v0_2 = ((v0_5 + v0_3));
    L_C0562F6:;
    if (!(((*(signed char *)(((v0_5 + v0_6) + 0x3714))) != 0))) goto L_C05640A;
    (((struct oEC_float *)(v0_1))->v) = (((((struct oEC_float *)(v0_1))->v)) + ((((struct o28_float *)((v0_5 + v0_6)))->v)));
    (((struct oF0_float *)(v0_1))->v) = (((((struct oF0_float *)(v0_1))->v)) + ((((struct o2C_float *)((v0_5 + v0_6)))->v)));
    (((struct oF4_float *)(v0_1))->v) = (((((struct oF4_float *)(v0_1))->v)) + ((((struct o30_float *)((v0_5 + v0_6)))->v)));
    v0_2 = ((v0_5 + v0_6));
    goto L_C056334;
    L_C05640A:;
    if (((*(int *)(((int)stk + 0))) == 0)) goto L_C056430;
    v0_2 = *(int *)(((int)stk + 0));
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
    *(unsigned int *)(((int)stk + 0)) = ((*(int *)(((int)stk + 0))) + 0x1);
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
    *(unsigned int *)(((int)stk + 0)) = ((*(int *)(((int)stk + 0))) + 0x1);
    L_C056388:;
    v0_2 = ((v0_2 + v0_4));
    v0_8 = ((v0_8 + v0_4));
    goto L_C05638C;
    L_C056178:;
    if ((v0_7 != 14)) goto L_C056180;
    *(unsigned int *)(((int)stk + 8)) = v0_5;
    *(unsigned int *)(((int)stk + 4)) = v0_5;
    *(unsigned int *)(((int)stk + 12)) = (0xE4E0 + v0_5);
    v0_2 = (v0_5);
    L_C056402:;
    if (((unsigned int)(*(int *)(((int)stk + 4))) < (unsigned int)(*(int *)(((int)stk + 12))))) goto L_C0563AC;
    goto L_C05640A;
    L_C0563AC:;
    if (((*(signed char *)(((*(int *)(((int)stk + 4))) + 0x3714))) == 0)) goto L_C0563F6;
    thunk_FUN_0c058310((((((struct oC4_int *)((*(int *)(((int)stk + 8)))))->v)) + 0x28), (((int)stk + 0) + 0x10));
    (((struct oEC_float *)(v0_1))->v) = (((((struct oEC_float *)(v0_1))->v)) + ((((struct o10_float *)(((int)stk + 0)))->v)));
    (((struct oF0_float *)(v0_1))->v) = (((((struct oF0_float *)(v0_1))->v)) + ((((struct o14_float *)(((int)stk + 0)))->v)));
    (((struct oF4_float *)(v0_1))->v) = (((((struct oF4_float *)(v0_1))->v)) + ((((struct o18_float *)(((int)stk + 0)))->v)));
    *(unsigned int *)(((int)stk + 0)) = ((*(int *)(((int)stk + 0))) + 0x1);
    L_C0563F6:;
    *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) + v0_4);
    *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + v0_4);
    goto L_C056402;
    L_C056180:;
    goto L_C05640A;
    L_C05623C:;
    if (((*(signed char *)((v0_5 + 0x3714))) == 0)) goto L_C056276;
    (((struct oEC_float *)(v0_1))->v) = (((((struct oEC_float *)(v0_1))->v)) + ((((struct o28_float *)(v0_5))->v)));
    (((struct oF0_float *)(v0_1))->v) = (((((struct oF0_float *)(v0_1))->v)) + ((((struct o2C_float *)(v0_5))->v)));
    (((struct oF4_float *)(v0_1))->v) = (((((struct oF4_float *)(v0_1))->v)) + ((((struct o30_float *)(v0_5))->v)));
    *(unsigned int *)(((int)stk + 0)) = ((*(int *)(((int)stk + 0))) + 0x1);
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

/* manual: task of 9 point strips: state 0 sets the 9 sub-objects up, state 1 writes one B-spline step (4 control strips, t = word +0x1C / 5)
   into the 9th, state 99 ends; 118 cases, 1035 of 1035 instructions */
void FUN_0c10f674(int a4, int a5, int a6, int a7)
{
    struct mv3 { int w[3]; };
    float v[4][3];
    float w[4];
    float *p[4];
    int idx[4];
    float t, t2, t3, u, sum;
    float *d;
    float *out;
    int i, j, k, o, sub, src;

    switch (*(signed char *)(a4 + 0x14)) {
    case 0:
        *(unsigned char *)(a4 + 0x14) = *(unsigned char *)(a4 + 0x14) + 1;
        *(unsigned char *)(a4 + 0xA8) = 1;
        *(unsigned short *)(a4 + 0xAC) = 0x1F;
        *(unsigned char *)(a4 + 0xA9) = 0x21;
        *(struct mv3 *)(a4 + 0x28) = *(struct mv3 *)0xC29108C;
        *(struct mv3 *)(a4 + 0x40) = *(struct mv3 *)0xC2910A4;
        *(struct mv3 *)(a4 + 0x34) = *(struct mv3 *)0xC2910B0;
        for (i = 0; i < 9; i++) {
            src = *(int *)(*(int *)0xC4B410C + 0x1EC) + 0xB4 + (i < 8 ? i : 7) * 0x3C;
            sub = *(int *)(a4 + 0xC4 + i * 4);
            *(int *)(sub + 8) = *(int *)src;
            *(int *)(sub + 0xC) = 0;
            *(int *)(sub + 0x10) = 0;
            *(int *)(sub + 0x68) = 0;
            *(struct mv3 *)(sub + 0x6C) = *(struct mv3 *)(src + 0x24);
            *(struct mv3 *)(sub + 0x78) = *(struct mv3 *)(src + 0x30);
            FUN_0c187a88((sub + 0x94) & ~7, *(int *)(sub + 8), 0x390);
            *(int *)(sub + 8) = (sub + 0x94) & ~7;
            *(unsigned char *)sub = i == 8;
            *(unsigned short *)(sub + 6) = 0xF;
        }
        if (*(signed char *)(a4 + 2) == 0) {
            t = *(float *)0xC291098;
            *(float *)(*(int *)(a4 + 0xE4) + 0x6C) = t;
        } else {
            *(int *)(*(int *)(a4 + 0xE4) + 0x7C) = 0;
        }
    case 1:
        d = (float *)(*(int *)(*(int *)(a4 + 0xE4) + 8) + 0x70);
        k = *(signed char *)(a4 + 0x15);
        if (k == 0) {
            idx[0] = 0;
            idx[1] = 0;
            idx[2] = 1;
            idx[3] = 2;
        } else if (k >= 1 && k <= 6) {
            for (j = 0; j < 4; j++) {
                idx[j] = k + j < 7 ? k + j : 7;
            }
        } else {
            idx[0] = a5;
            idx[1] = a4;
            idx[2] = a7;
            idx[3] = 3;
        }
        for (j = 0; j < 4; j++) {
            p[j] = (float *)(*(int *)(*(int *)(a4 + 0xC4 + idx[j] * 4) + 8) + 0x70);
        }
        for (i = 0; i < 24; i++) {
            o = i < 5 ? 0 : i == 5 ? 4 : 6;
            o += i * 8;
            for (j = 0; j < 4; j++) {
                v[j][0] = p[j][o];
                v[j][1] = p[j][o + 1];
                v[j][2] = p[j][o + 2];
            }
            if (*(signed char *)(a4 + 2) == 0) {
                for (j = 0; j < 4; j++) {
                    v[j][0] = v[j][0] * -1.0f;
                }
            }
            t = (float)*(short *)(a4 + 0x1C) / 5.0f;
            t2 = t * t;
            t3 = t2 * t;
            u = 1.0f - t;
            w[0] = u * u * u * 0.166666672f;
            w[1] = t3 * 0.5f - t2 + 0.666666687f;
            sum = 0.166666672f;
            sum += 0.5f * (t2 - t3 + t);
            w[2] = sum;
            w[3] = t3 * 0.166666672f;
            out = d + o;
            for (j = 0; j < 3; j++) {
                sum = w[1] * v[1][j];
                sum += v[0][j] * w[0];
                sum += v[2][j] * w[2];
                sum += v[3][j] * w[3];
                out[j] = sum;
            }
            *(int *)out |= 1;
            *(int *)(out + 7) |= 1;
        }
        k = *(short *)(a4 + 0x1C);
        *(short *)(a4 + 0x1C) = k + 1;
        if ((short)(k + 1) >= 5) {
            *(unsigned char *)(a4 + 0x15) = *(unsigned char *)(a4 + 0x15) + 1;
            if (*(signed char *)(a4 + 0x15) == 7) {
                *(unsigned char *)(a4 + 0x14) = 99;
                *(unsigned char *)(a4 + 0xA8) = 0;
            } else {
                *(short *)(a4 + 0x1C) = 0;
            }
        }
        break;
    case 99:
        FUN_0c03f346(a4, a5, a6, a7);
        break;
    }
}

/* FUN_0c0e9ada, written by hand from the original (1,650 bytes; the generated C was ~7,780).
   An object a4 with a two-phase state machine: byte +20 is the phase (0 = set up, then runs phase 1), byte +21 the step of phase 1
   (0..10), byte +22 a sub-step, word +30 a counter, word +32 a delta. The global byte at 0xC54098D (G) is the step the scene is at;
   a step ends when G reaches its number. Floats at +40/+44/+48 move, the helper FUN_0c0e9a88 fades the records at +196+4*i. */

/* manual: written by hand, 2026-11-23/24 (build/manual/notes.txt) */
void FUN_0c0e9ada(int a4)
{
    int p;
    int i;
    int t;
    int w;
    float x;

    switch (*(signed char *)(a4 + 20)) {
    case 0:
        *(unsigned char *)(a4 + 20) = *(unsigned char *)(a4 + 20) + 1;
        *(unsigned char *)(a4 + 168) = 1;
        *(unsigned char *)(a4 + 21) = 0;
        { struct mv3 { int w[3]; }; *(struct mv3 *)(a4 + 88) = *(struct mv3 *)(a4 + 40); }
        *(short *)(a4 + 30) = 0;
        *(short *)(a4 + 32) = 0;
        p = *(int *)(a4 + 196);
        *(unsigned char *)p = 1;
        *(short *)(a4 + 172) = 1;
        for (i = 1; i < *(int *)(a4 + 192); i++) {
            p = *(int *)(a4 + 196 + i * 4);
            *(unsigned short *)(p + 6) = *(unsigned short *)(p + 6) | 0x200;
        }
        p = *(int *)(a4 + 200);
        *(unsigned char *)p = 1;
        *(float *)(p + 32) = 1.0f;
        *(float *)(p + 28) = 1.0f;
        *(float *)(p + 24) = 1.0f;
    case 1:
        switch (*(signed char *)(a4 + 21)) {
        case 0:
            if (*(signed char *)0xC54098D >= 14) {
                *(unsigned char *)(a4 + 21) = 10;
                *(unsigned char *)(a4 + 22) = 0;
            } else {
                *(unsigned char *)(a4 + 21) = *(unsigned char *)(a4 + 21) + 1;
            }
            return;
        case 1:
            *(float *)(a4 + 44) = -150.0f;
            if (*(signed char *)0xC54098D != 4) {
                return;
            }
            *(unsigned char *)(a4 + 21) = *(unsigned char *)(a4 + 21) + 1;
            *(short *)(a4 + 30) = 3;
            FUN_0c0ea1f8(0, 600);
            return;
        case 2:
        case 6:
            if ((*(short *)(a4 + 30) & 2) != 0) {
                *(float *)(a4 + 40) = *(float *)(a4 + 40) + 5.0f;
            } else {
                *(float *)(a4 + 40) = *(float *)(a4 + 40) - 5.0f;
            }
            if ((*(short *)(a4 + 30) & 4) != 0) {
                *(float *)(a4 + 48) = *(float *)(a4 + 48) + 2.0f;
            } else {
                *(float *)(a4 + 48) = *(float *)(a4 + 48) - 2.0f;
            }
            *(short *)(a4 + 30) = *(short *)(a4 + 30) + 1;
            if (*(signed char *)0xC54098D != (*(signed char *)(a4 + 21) == 2 ? 5 : 10)) {
                return;
            }
            *(unsigned char *)(a4 + 21) = *(unsigned char *)(a4 + 21) + 1;
            *(unsigned char *)(a4 + 22) = 0;
            *(float *)(a4 + 40) = *(float *)(a4 + 88);
            *(float *)(a4 + 48) = *(float *)(a4 + 96);
            *(short *)(a4 + 30) = 0;
            *(float *)(a4 + 80) = 3.0f;
            thunk_FUN_0c05abb2(64, a4 + 40);
            p = *(int *)(a4 + 212);
            *(unsigned char *)p = 1;
            *(float *)(p + 32) = 0.0f;
            *(float *)(p + 28) = 0.0f;
            *(float *)(p + 24) = 0.0f;
            return;
        case 3:
        case 7:
            t = *(signed char *)(a4 + 22);
            if (t == 0) {
                *(unsigned char *)(a4 + 22) = *(unsigned char *)(a4 + 22) + 1;
                *(short *)(a4 + 32) = 300;
            }
            if (t == 0 || t == 1) {
                w = *(short *)(a4 + 32) - 1;
                *(short *)(a4 + 32) = w;
                if ((short)w <= 0) {
                    *(unsigned char *)(a4 + 22) = *(unsigned char *)(a4 + 22) + 1;
                }
                *(float *)(a4 + 44) = *(float *)(a4 + 44) + 0.75f;
            } else if (t == 2) {
                *(float *)(a4 + 44) = *(float *)(a4 + 44) + 3.0f;
            }
            if (*(signed char *)(a4 + 21) == 3) {
                FUN_0c0e9a88(a4, 1, -0.0199999996f);
                FUN_0c0e9a88(a4, 4, 0.0199999996f);
            } else {
                FUN_0c0e9a88(a4, 2, -0.0199999996f);
                FUN_0c0e9a88(a4, 4, 0.0199999996f);
            }
            *(short *)(a4 + 30) = (*(short *)(a4 + 30) + 1) & 63;
            w = *(short *)(a4 + 30);
            if (w == 1) {
                *(float *)(a4 + 40) = *(float *)(a4 + 40) + 5.0f;
            } else if (w == 2) {
                *(float *)(a4 + 40) = *(float *)(a4 + 40) - 5.0f;
            } else if (w == 6) {
                *(float *)(a4 + 48) = *(float *)(a4 + 48) + 5.0f;
            } else if (w == 7) {
                *(float *)(a4 + 48) = *(float *)(a4 + 48) - 5.0f;
            }
            if (*(signed char *)0xC54098D != (*(signed char *)(a4 + 21) == 3 ? 8 : 13)) {
                return;
            }
            *(unsigned char *)(a4 + 21) = *(unsigned char *)(a4 + 21) + 1;
            *(short *)(a4 + 30) = 90;
            *(short *)(a4 + 32) = 4;
            *(float *)(a4 + 44) = *(signed char *)(a4 + 21) == 4 ? 3350.0f : 7850.0f;
            thunk_FUN_0c05abb2(65, a4 + 40);
            p = *(int *)(a4 + (*(signed char *)(a4 + 21) == 4 ? 204 : 208));
            *(unsigned char *)p = 1;
            *(float *)(p + 32) = 0.0f;
            *(float *)(p + 28) = 0.0f;
            *(float *)(p + 24) = 0.0f;
            FUN_0c05258e(2, 20, 256, 30, 0);
            return;
        case 4:
        case 8:
            if (*(signed char *)(a4 + 21) == 4) {
                FUN_0c0e9a88(a4, 4, -0.0199999996f);
                FUN_0c0e9a88(a4, 2, 0.0199999996f);
            }
            x = (float)*(short *)(a4 + 30) / 10.0f;
            if (*(short *)(a4 + 32) >= 0) {
                *(float *)(a4 + 44) = *(float *)(a4 + 44) + x;
                w = *(short *)(a4 + 30) - *(short *)(a4 + 32);
            } else {
                *(float *)(a4 + 44) = *(float *)(a4 + 44) - x;
                w = *(short *)(a4 + 30) + *(short *)(a4 + 32);
            }
            *(short *)(a4 + 30) = w;
            if (*(signed char *)(a4 + 21) == 8) {
                FUN_0c0e9a88(a4, 4, -0.0199999996f);
                FUN_0c0e9a88(a4, 3, 0.0199999996f);
            }
            *(short *)(a4 + 32) = -*(short *)(a4 + 32);
            if (*(short *)(a4 + 30) > 0) {
                return;
            }
            *(unsigned char *)(a4 + 21) = *(unsigned char *)(a4 + 21) + 1;
            *(float *)(a4 + 44) = *(signed char *)(a4 + 21) == 5 ? 3350.0f : 7850.0f;
            return;
        case 5:
            FUN_0c0e9a88(a4, 4, -0.0199999996f);
            FUN_0c0e9a88(a4, 2, 0.0199999996f);
            *(float *)(a4 + 44) = 3350.0f;
            if (*(signed char *)0xC54098D != 9) {
                return;
            }
            *(unsigned char *)(a4 + 21) = *(unsigned char *)(a4 + 21) + 1;
            *(short *)(a4 + 30) = 3;
            FUN_0c0ea1f8(1, 600);
            return;
        case 9:
            FUN_0c0e9a88(a4, 4, -0.0199999996f);
            FUN_0c0e9a88(a4, 3, 0.0199999996f);
            *(float *)(a4 + 44) = 7850.0f;
            return;
        case 10:
            if (*(signed char *)(a4 + 22) != 0) {
                return;
            }
            *(unsigned char *)(a4 + 22) = *(unsigned char *)(a4 + 22) + 1;
            t = *(signed char *)0xC54223C;
            if (t == 0) {
                *(float *)(a4 + 44) = -150.0f;
                *(unsigned char *)*(int *)(a4 + 200) = 1;
                *(unsigned char *)*(int *)(a4 + 204) = 0;
                *(unsigned char *)*(int *)(a4 + 208) = 0;
                p = *(int *)(a4 + 200);
            } else if (t == 1) {
                *(float *)(a4 + 44) = 3350.0f;
                *(unsigned char *)*(int *)(a4 + 200) = 0;
                *(unsigned char *)*(int *)(a4 + 204) = 1;
                *(unsigned char *)*(int *)(a4 + 208) = 0;
                p = *(int *)(a4 + 204);
            } else {
                *(float *)(a4 + 44) = 7850.0f;
                *(unsigned char *)*(int *)(a4 + 200) = 0;
                *(unsigned char *)*(int *)(a4 + 204) = 0;
                *(unsigned char *)*(int *)(a4 + 208) = 1;
                p = *(int *)(a4 + 208);
            }
            *(float *)(p + 32) = 1.0f;
            *(float *)(p + 28) = 1.0f;
            *(float *)(p + 24) = 1.0f;
            return;
        }
        return;
    }
}

