/* Straight-line functions with calls and guards (batch gen_by): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_int { char p[0x10]; int v; };
struct o118_int { char p[0x118]; int v; };
struct o11C_int { char p[0x11C]; int v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o36_short { char p[0x36]; short v; };
struct o376C_uint { char p[0x376C]; unsigned int v; };
struct o3850_short { char p[0x3850]; short v; };
struct o3850_uint { char p[0x3850]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o7C_int { char p[0x7C]; int v; };
struct o8_int { char p[0x8]; int v; };
struct o8C_float { char p[0x8C]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
int FUN_0c03247c(void);
int FUN_0c032788(void);
int FUN_0c0329e0(void);
extern int FUN_0c037bf6();
int FUN_0c041c7e(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c041e06(void);
int FUN_0c041e4c(void);
int FUN_0c05258e(int, int, int, int, int);
int FUN_0c059c54(int);
int FUN_0c059e60(int, int);
int FUN_0c059e9a(int, int, int);
int FUN_0c05aaf6(int);
int FUN_0c05aeac(void);
int FUN_0c05b00c(void);
int FUN_0c05b048(int, int);
int FUN_0c05f22c(int);
int FUN_0c07d030(int, int);
int FUN_0c07d774(int);
extern int FUN_0c085d0c();
int FUN_0c0a3058(int, int, int, int);
int FUN_0c0a30dc(int);
int FUN_0c0c2d56(int, int, int, int);
int FUN_0c0c41c4(void);
int FUN_0c0d5188(void);
int FUN_0c104cc8(int);
int FUN_0c104d70(void);
int FUN_0c104db8(void);
int FUN_0c10527c(int, int, int);
int FUN_0c115120(int);
int FUN_0c117944(int, ...);
int FUN_0c117a6e(int, ...);
int FUN_0c117d54(void);
extern int FUN_0c117e76();
int FUN_0c11e2d0(int, int, int, int);
int FUN_0c13a044(int);
int FUN_0c147fd0(int, int, int, int, float);
int FUN_0c1495c0(int, int, int);
int FUN_0c15009e(int, float, float, float, float, float);
int FUN_0c162c4e(int, int, int, int);
float math_cos_angle16(int);
int math_mat_get_translate(int, int);
int math_mat_transform_vector(int, int);
float math_sin_angle16(int);
int nlAddVector3op(int, int, int);
int nlSubVector3op(int, int, int);
int thunk_FUN_0c05abb2(int, int);
float FUN_0c14996e(int a4, int a5, int a6, int a7, float f4, float f5, float f6);
int FUN_0c0d192c(int a4, int a5, int a6, int a7, float f4);
int FUN_0c041f28(void);
int FUN_0c0a5588(int a4, int a5, int a6);
int FUN_0c109df4(int a4, int a5, int a6, int a7);
int FUN_0c107a38(int a4, int a5, int a6, int a7);

float FUN_0c14996e(int a4, int a5, int a6, int a7, float f4, float f5, float f6)
{
    int stk[11];

    register int R1;
    register int R2;
    register float F0;
    register float F2;
    register float F3;
    register float F15;
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
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    register float w0_4;
    v0_2 = a4;
    v0_0 = a6;
    v0_0 = a7;
    w0_1 = f4;
    w0_0 = f5;
    w0_0 = f6;
    v0_0 = *(signed char *)0xC542363;
    v0_5 = *(signed char *)((v0_2 + 0x16));
    v0_3 = (v0_5);
    v0_1 = (0xC058310);
    v0_6 = ((0x38F8 + (((short)v0_0 * (short)0x3938) + 0xC532498)));
    v0_4 = (0x480);
    v0_1 = ((((short)v0_0 * (short)0x3938) + 0xC532498));
    v0_0 = (v0_2);
    if ((v0_5 == 0)) goto L_C1499D8;
    if ((v0_3 == 1)) goto L_C149A1A;
    if ((v0_3 == 2)) goto L_C149A86;
    if ((v0_3 != 3)) goto L_C1499AE;
    L_C149B9C:;
    v0_1 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_1 - 1);
    v0_3 = ((short)(v0_1 - 1));
    if (((int)(short)(v0_1 - 1) > 0)) goto L_C149BEE;
    *(unsigned short *)((v0_0 + 0x1C)) = 0x78;
    (((struct o16_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x16))) + 0x1);
    v0_3 = (0x16);
    L_C149BEE:;
    return F0;
    L_C1499AE:;
    if ((v0_3 != 4)) goto L_C1499B6;
    if (((int)(*(signed char *)((v0_6 + 0x35))) < 0)) goto L_C149BCC;
    v0_2 = (((((struct o7C_int *)((v0_4 + (0x468 + v0_1))))->v)) + 0x5B);
    v0_3 = (0x7C);
    v0_4 = ((v0_4 + (0x468 + v0_1)));
    v0_1 = v0_2;
    L_C149BD8:;
    *(unsigned int *)((v0_4 + v0_3)) = v0_1;
    v0_1 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_1 - 1);
    v0_3 = ((short)(v0_1 - 1));
    if (((int)(short)(v0_1 - 1) > 0)) goto L_C149BEE;
    v0_3 = ((FUN_0c1495c0(v0_0, 0x3, 0x0)));
    goto L_C149BEE;
    L_C149BCC:;
    v0_2 = (((((struct o7C_int *)((v0_4 + (0x468 + v0_1))))->v)) - 91);
    v0_3 = (0x7C);
    v0_4 = ((v0_4 + (0x468 + v0_1)));
    v0_1 = v0_2;
    goto L_C149BD8;
    L_C1499B6:;
    goto L_C149BEE;
    L_C149A86:;
    if (((*(signed char *)((v0_0 + 0x17))) != 0)) goto L_C149A92;
    v0_3 = (0x17);
    L_C149B96:;
    *(unsigned char *)((v0_0 + v0_3)) = ((*(signed char *)((v0_0 + v0_3))) + 0x1);
    goto L_C149B9C;
    L_C149A92:;
    *(float *)(((int)stk + 20)) = 0.0f;
    *(float *)(((int)stk + 24)) = 0.0f;
    *(float *)(((int)stk + 28)) = (-((float)((((struct o36_short *)(v0_6))->v)) * 1.0f));
    math_mat_get_translate((v0_0 + 0x64), (((int)stk + 0) + 0x8));
    math_mat_transform_vector((((int)stk + 0) + 0x14), (v0_0 + 0x64));
    *(float *)(((int)stk + 24)) = 0.0f;
    nlSubVector3op((((int)stk + 0) + 0x20), (((int)stk + 0) + 0x14), (((int)stk + 0) + 0x8));
    if (((int)(*(signed char *)((v0_6 + 0x35))) < 0)) goto L_C149B0C;
    w0_1 = (60.0f);
    L_C149B10:;
    w0_2 = (((struct o4_float *)0xC149C1C)->v);
    w0_0 = math_sin_angle16((int)(w0_1 * w0_2));
    w0_1 = math_cos_angle16((int)(w0_1 * w0_2));
    w0_2 = *(float *)(((int)stk + 32));
    w0_4 = *(float *)(((int)stk + 40));
    w0_3 = (w0_4 * w0_0);
    w0_4 = (w0_4 * w0_1);
    w0_4 = w0_4 + w0_0 * w0_2;
    *(float *)(((int)stk + 32)) = (((w0_2 * w0_1)) - w0_3);
    *(float *)(((int)stk + 40)) = w0_4;
    nlAddVector3op((((int)stk + 0) + 0x20), (((int)stk + 0) + 0x20), (((int)stk + 0) + 0x8));
    v0_2 = *(signed char *)0xC542363;
    *(unsigned char *)(((int)stk + 4)) = v0_2;
    FUN_0c147fd0((*(signed char *)(((int)stk + 4))), v0_2, (((int)stk + 0) + 0x20), (((int)stk + 0) + 0x14), (1.0f + 1.0f));
    math_mat_get_translate((v0_0 + 0x64), (((int)stk + 0) + 0x8));
    FUN_0c059e9a(v0_1, 0x2A, (((int)stk + 0) + 0x20));
    *(unsigned short *)((v0_0 + 0x1C)) = 0x3C;
    v0_3 = (0x16);
    goto L_C149B96;
    L_C149B0C:;
    w0_1 = (((((struct o0_float *)0xC149C1C)->v)));
    goto L_C149B10;
    L_C149A1A:;
    v0_5 = *(signed char *)((v0_6 + 0x35));
    v0_6 = (((struct o7C_int *)(((0x468 + v0_1) + v0_4)))->v);
    v0_3 = (0x7C);
    v0_2 = (((v0_5 << 8) - v0_6));
    v0_7 = (0x10000);
    if (((int)((v0_5 << 8) - v0_6) <= (int)0x8000)) goto L_C149A36;
    v0_2 = ((v0_2 - v0_7));
    L_C149A36:;
    if (((int)v0_2 >= (int)0xFFFF8000)) goto L_C149A3E;
    v0_2 = ((v0_2 + v0_7));
    L_C149A3E:;
    v0_7 = (0x38E);
    if (((int)v0_2 < 0)) goto L_C149A56;
    if (((int)v0_2 < (int)v0_7)) goto L_C149A6A;
    *(unsigned int *)(((v0_4 + (0x468 + v0_1)) + v0_3)) = ((*(int *)(((v0_4 + (0x468 + v0_1)) + v0_3))) + v0_7);
    goto L_C149BEE;
    L_C149A6A:;
    *(unsigned int *)(((v0_4 + (0x468 + v0_1)) + v0_3)) = ((*(int *)(((v0_4 + (0x468 + v0_1)) + v0_3))) + v0_2);
    (((struct o16_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x16))) + 0x1);
    (((struct o17_uchar *)(v0_0))->v) = 0x0;
    v0_3 = (0x17);
    goto L_C149BEE;
    L_C149A56:;
    if (((int)v0_2 > (int)0xFFFFFC72)) goto L_C149A6A;
    *(unsigned int *)(((v0_4 + (0x468 + v0_1)) + v0_3)) = ((*(int *)(((v0_4 + (0x468 + v0_1)) + v0_3))) - v0_7);
    goto L_C149BEE;
    L_C1499D8:;
    *(unsigned short *)((v0_0 + 0x1C)) = 0x14;
    (((struct o16_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x16))) + 0x1);
    math_mat_get_translate((v0_0 + 0x64), (((int)stk + 0) + 0x20));
    FUN_0c059e9a(v0_1, 0x6, (((int)stk + 0) + 0x20));
    *(unsigned int *)(((int)stk + 0)) = ((0x468 + v0_1) + v0_4);
    v0_3 = (0x7C);
    if (((((((struct o7C_int *)(((0x468 + v0_1) + v0_4)))->v)) & 0x8000) == 0)) goto L_C149A1A;
    *(unsigned int *)((((0x468 + v0_1) + v0_4) + v0_3)) = ((*(int *)((((0x468 + v0_1) + v0_4) + v0_3))) | 0xFFFF0000);
    goto L_C149A1A;
}

int FUN_0c0d192c(int a4, int a5, int a6, int a7, float f4)
{
    int stk[9];
    register int t0;
    register int t1;
    register int t3;
    register int t7;
    register int t21;
    register int t26;
    register int t28;
    register int t30;
    register float t54;
    register float t56;
    register int t57;
    register int t59;
    register float u62;
    register float u64;
    register float u65;
    register float u66;
    register float u68;
    register float u70;
    register float u71;
    register float u72;
    register float u73;
    register float u74;
    register float u75;
    register float u76;
    register float u80;
    register float u82;
    register float u83;
    register float u84;
    register float u86;
    register float u88;
    register float u89;
    register float u90;
    register float u91;
    register float u92;
    register int t95;
    register int t97;
    register int t99;
    register int t100;
    register float u101;
    register int t58;

    t0 = *(signed char *)((a4 + 0x1));
    t1 = *(signed char *)((a4 + 0x3));
    *(unsigned int *)((a4 + 0x38)) = (*(int *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x38)));
    t3 = *(signed char *)((a4 + 0x15));
    if (t3 != 0) {
        if (t3 == 1) {
            if ((*(short *)((a4 + 0x1E))) != 0) {
                *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) - 1);
                if ((*(short *)((a4 + 0x1E))) != 0) {
                    t7 = (((struct oC8_int *)(a4))->v);
                    (((struct o8C_float *)(t7))->v) = ((-((((struct o8C_float *)(t7))->v))) + (1.0f + 1.0f));
                } else {
                    (((struct o8C_float *)(((((struct oC8_int *)(a4))->v))))->v) = 1.0f;
                }
            }
            t21 = (((struct oCC_int *)(a4))->v);
            (((struct o8C_float *)(t21))->v) = (((((struct o8C_float *)(t21))->v)) + 0.0199999996f);
            if (!(1.0f > ((((struct o8C_float *)(((((struct oCC_int *)(a4))->v))))->v)))) {
                (((struct o8C_float *)(((((struct oCC_int *)(a4))->v))))->v) = 1.0f;
                t26 = (((struct oC4_int *)(a4))->v);
                *(unsigned short *)((t26 + 0x6)) = ((*(short *)((t26 + 0x6))) & 0xFFEF);
                t28 = (((struct oC8_int *)(a4))->v);
                *(unsigned short *)((t28 + 0x6)) = ((*(short *)((t28 + 0x6))) & 0xFFEF);
                t30 = (((struct oCC_int *)(a4))->v);
                *(unsigned short *)((t30 + 0x6)) = ((*(short *)((t30 + 0x6))) & 0xFFEF);
                FUN_0c0c2d56(a4, 0x5, (*(signed char *)((a4 + 0x1))), a7);
            }
        }
    } else {
        math_mat_get_translate((a4 + 0x64), (((int)stk + 0) + 0x18));
        t54 = math_cos_angle16((*(int *)((a4 + 0x38))));
        t56 = math_sin_angle16((*(int *)((a4 + 0x38))));
        t57 = 0xC0D19DC;
        t59 = 0x0;
        for (;;) {
            if ((int)t59 < (int)(*(int *)(((0xC1C7A00 + ((((t1 << 2) << 2) + t1) << 2)) + 0x4)))) {
                t58 = t59;
                t58 = (t58 << 1);
                t58 = (t58 + t59);
                t58 = (t58 << 2);
                t57 = 0x18;
                u62 = *(float *)((((int)stk + 0) + t57));
                t57 = 0x8;
                u64 = *(float *)(((((0xC1C7A00 + ((((t1 << 2) << 2) + t1) << 2)) + 0x2C) + t58) + t57));
                t57 = 0x20;
                u65 = u62;
                u65 = u65 + t54 * (*(float *)(((((0xC1C7A00 + ((((t1 << 2) << 2) + t1) << 2)) + 0x2C) + t58) + 0x0)));
                u66 = u65;
                u66 = u66 + t56 * u64;
                *(float *)(((int)stk + 0)) = u66;
                u68 = *(float *)((((int)stk + 0) + t57));
                t57 = 0x8;
                u70 = *(float *)(((((0xC1C7A00 + ((((t1 << 2) << 2) + t1) << 2)) + 0x2C) + t58) + t57));
                t57 = 0x8;
                u71 = (u68 - (((*(float *)(((((0xC1C7A00 + ((((t1 << 2) << 2) + t1) << 2)) + 0x2C) + t58) + 0x0))) * t56)));
                u71 = u71 + t54 * u70;
                *(float *)((((int)stk + 0) + t57)) = u71;
                t57 = 0x4;
                u72 = *(float *)(((((0xC1C7A00 + ((((t1 << 2) << 2) + t1) << 2)) + 0x2C) + t58) + t57));
                t57 = 0x1C;
                u73 = *(float *)((((int)stk + 0) + t57));
                t57 = 0x4;
                *(float *)((((int)stk + 0) + t57)) = (u73 + u72);
                t57 = 0xC;
                u74 = *(float *)(((0xC1C7A00 + ((((t1 << 2) << 2) + t1) << 2)) + t57));
                t57 = 0x14;
                *(float *)((((int)stk + 0) + t57)) = (t54 * u74);
                t57 = 0xC;
                u75 = *(float *)(((0xC1C7A00 + ((((t1 << 2) << 2) + t1) << 2)) + t57));
                t57 = 0xC;
                *(float *)((((int)stk + 0) + t57)) = (t56 * u75);
                t57 = 0x10;
                u76 = *(float *)(((0xC1C7A00 + ((((t1 << 2) << 2) + t1) << 2)) + t57));
                t57 = 0x10;
                *(float *)((((int)stk + 0) + t57)) = u76;
                t57 = (*(signed char *)((a4 + 0x1)));
                t57 = (FUN_0c162c4e(t57, (*(int *)(((0xC1C7A00 + ((((t1 << 2) << 2) + t1) << 2)) + 0x0))), ((int)stk + 0), (((int)stk + 0) + 0xC)));
                t57 = 0x18;
                u80 = *(float *)((((int)stk + 0) + t57));
                t57 = 0x8;
                u82 = *(float *)(((((0xC1C7A00 + ((((t1 << 2) << 2) + t1) << 2)) + 0x2C) + t58) + t57));
                t57 = 0x20;
                u83 = u80;
                u83 = u83 + t54 * (*(float *)(((((0xC1C7A00 + ((((t1 << 2) << 2) + t1) << 2)) + 0x2C) + t58) + 0x0)));
                u84 = u83;
                u84 = u84 + t56 * u82;
                *(float *)(((int)stk + 0)) = u84;
                u86 = *(float *)((((int)stk + 0) + t57));
                t57 = 0x8;
                u88 = *(float *)(((((0xC1C7A00 + ((((t1 << 2) << 2) + t1) << 2)) + 0x2C) + t58) + t57));
                t57 = 0x8;
                u89 = (u86 - (((*(float *)(((((0xC1C7A00 + ((((t1 << 2) << 2) + t1) << 2)) + 0x2C) + t58) + 0x0))) * t56)));
                u89 = u89 + t54 * u88;
                *(float *)((((int)stk + 0) + t57)) = u89;
                t57 = 0x4;
                u90 = *(float *)(((((0xC1C7A00 + ((((t1 << 2) << 2) + t1) << 2)) + 0x2C) + t58) + t57));
                t57 = 0x1C;
                u91 = *(float *)((((int)stk + 0) + t57));
                t57 = 0x4;
                *(float *)((((int)stk + 0) + t57)) = (u91 + u90);
                t57 = 0xC0D1B24;
                u92 = *(float *)((t57 + 0x0));
                t57 = 0x8;
                t57 = (FUN_0c15009e(((int)stk + 0), 0.100000001f, 0.100000001f, 0.100000001f, (*(float *)(((0xC1C7A00 + ((((t1 << 2) << 2) + t1) << 2)) + t57))), u92));
                t57 = 0xC8;
                t95 = *(int *)((a4 + t57));
                t57 = (*(short *)((t95 + 0x6)));
                t57 = (t57 | 0x10);
                *(unsigned short *)((t95 + 0x6)) = t57;
                t57 = 0xCC;
                t97 = *(int *)((a4 + t57));
                t57 = (*(short *)((t97 + 0x6)));
                t57 = (t57 | 0x10);
                *(unsigned short *)((t97 + 0x6)) = t57;
                t57 = 0xCC;
                t99 = *(int *)((a4 + t57));
                t57 = (t57 - 64);
                *(float *)((t99 + t57)) = 0.5f;
                t57 = (t57 + 0x3C);
                t100 = *(int *)((a4 + t57));
                t57 = 0xC0D1B2C;
                u101 = *(float *)((t57 + 0x0));
                t57 = 0x8C;
                *(float *)((t100 + t57)) = u101;
                t57 = 0xA;
                *(unsigned short *)((a4 + 0x1E)) = t57;
                t57 = (thunk_FUN_0c05abb2(0x46, (a4 + 0x28)));
                t59 = (t59 + 0x1);
                continue;
            }
            break;
        }
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    }
    (((struct o376C_uint *)((((short)t0 * (short)0x3938) + 0xC532498)))->v) = a4;
    return 0x376C;
}

int FUN_0c041f28(void)
{
    int stk[9];
    register int t121;
    register int t17;
    register int t27;
    register int t34;
    register int t35;
    int t36;
    register int t37;
    register int t69;
    register int t70;
    int t71;
    register int t72;
    int t7;
    int t14;
    register int t112;
    int t32;
    int t67;

    t121 = 0xC5421FB;
    if ((*(signed char *)0xC5421FB) != 0) {
    } else {
        (((struct o1_uchar *)0xC5421FA)->v) = ((*(signed char *)0xC5421FB) + 0x1);
        FUN_0c041e06();
        FUN_0c05aeac();
        FUN_0c05b00c();
        FUN_0c05b048(0x1, 0x0);
        if (((*(signed char *)0xC54235E) == 1) && (t7 = *(signed char *)0xC3BD447, t7 == 0)) {
            FUN_0c059c54(0x11);
        } else {
            t17 = 0x7;
            if (((*(signed char *)0xC54235E) == 2) && (t14 = *(signed char *)0xC3BD447, t14 == 0)) {
                t17 = 0x10;
            }
            FUN_0c059c54(t17);
        }
        if (((*(signed char *)0xC542239) & 0xF0) == 16) {
            *(unsigned int *)0xC542208 = 0xF0;
            t112 = 0xC542208;
        } else {
            *(unsigned int *)0xC542208 = 0xF0;
            if (((*(signed char *)0xC542239) & 0xF) == 0) {
                FUN_0c041e4c();
                FUN_0c0c41c4();
                FUN_0c03247c();
                FUN_0c05aaf6(0x85);
            } else {
                FUN_0c041e4c();
                t27 = *(signed char *)0xC542239;
                if (((t27 & 0xF0) != 0) && ((t27 & 0xF0) != 32)) {
                    if (((t27 & 0xF0) == 48) || ((t27 & 0xF0) == 64)) {
                        FUN_0c0329e0();
                        if ((*(signed char *)0xC3BD447) != 0) {
                            t34 = FUN_0c0d5188();
                            if ((t34 != 0) && (t32 = *(signed char *)0xC30541F, t32 == 0)) {
                                t36 = *(signed char *)0xC40DC50;
                                *(unsigned char *)0xC3BD447 = t36;
                                t35 = 0xC40DC50;
                                t37 = 0x0;
                                for (;;) {
                                    if ((int)t37 >= (int)0x4) {
                                        break;
                                    }
                                    t36 = (*(signed char *)0xC3BD447);
                                    t35 = 0x1;
                                    t35 = ((int)t35 << (int)t37);
                                    t36 = (unsigned char)t36;
                                    if ((t35 & t36) != 0) {
                                        t34 = 0x3714;
                                        t36 = (t37 * 0x3938);
                                        t36 = (t36 + 0xC532498);
                                        *(unsigned char *)((t36 + t34)) = 0x1;
                                    }
                                    t37 = (t37 + 0x1);
                                }
                                *(unsigned char *)0xC542239 = ((*(signed char *)0xC542239) | (*(signed char *)0xC3BD447));
                            }
                            FUN_0c05aaf6(0x87);
                        } else {
                            if ((*(signed char *)0xC54235E) != 0) {
                                FUN_0c059e60((((short)(*(signed char *)0xC542363) * (short)0x3938) + 0xC532498), 0x1F);
                                if ((*(signed char *)0xC54235E) == 2) {
                                    *(unsigned int *)0xC542208 = 0x1A4;
                                }
                            } else {
                                FUN_0c05aaf6(0x87);
                            }
                        }
                        FUN_0c0c41c4();
                    }
                } else {
                    FUN_0c032788();
                    if ((*(signed char *)0xC3BD447) != 0) {
                        t69 = FUN_0c0d5188();
                        if ((t69 != 0) && (t67 = *(signed char *)0xC30541F, t67 == 0)) {
                            t71 = *(signed char *)0xC40DC50;
                            *(unsigned char *)0xC3BD447 = t71;
                            t70 = 0xC40DC50;
                            t72 = 0x0;
                            for (;;) {
                                if ((int)t72 >= (int)0x4) {
                                    break;
                                }
                                t71 = (*(signed char *)0xC3BD447);
                                t70 = 0x1;
                                t70 = ((int)t70 << (int)t72);
                                t71 = (unsigned char)t71;
                                if ((t70 & t71) != 0) {
                                    t69 = 0x3714;
                                    t71 = (t72 * 0x3938);
                                    t71 = (t71 + 0xC532498);
                                    *(unsigned char *)((t71 + t69)) = 0x1;
                                }
                                t72 = (t72 + 0x1);
                            }
                            *(unsigned char *)0xC542239 = ((*(signed char *)0xC542239) | (*(signed char *)0xC3BD447));
                        }
                        FUN_0c05aaf6(0x86);
                    } else {
                        if ((*(signed char *)0xC54235E) != 0) {
                            FUN_0c059e60((((short)(*(signed char *)0xC542363) * (short)0x3938) + 0xC532498), 0x1F);
                            if ((*(signed char *)0xC54235E) == 2) {
                                *(unsigned int *)0xC542208 = 0x1A4;
                            }
                        } else {
                            FUN_0c05aaf6(0x86);
                        }
                    }
                    FUN_0c0c41c4();
                }
            }
        }
        t121 = t112;
    }
    (((struct o0_uchar *)0xC5421FA)->v) = ((*(signed char *)0xC5421FA) + 0x1);
    (((struct o1_uchar *)0xC5421FA)->v) = 0x0;
    FUN_0c041c7e(t121, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
    *(int *)((int)stk + 0) = 0x0;
    return (FUN_0c05258e(0x63, 0xA, 0x100, 0x1, 0x0));
}

int FUN_0c0a5588(int a4, int a5, int a6)
{
    int stk[5];
    register int t0;
    register int t12;
    register int t14;
    register int t17;
    register int t19;
    register int t22;
    register int t38;
    register float u25;
    register float u29;
    register float u33;
    register float u34;
    register int t35;
    register int t36;
    register int t43;
    register int t48;
    register int t49;
    register int t50;
    register int t52;
    register int t70;
    register int t79;
    register int t85;
    register int t82;
    register int t83;
    register int t84;
    register int t94;
    register int t95;
    register int t96;
    register int t97;
    register int t98;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                FUN_0c0a3058(a4, (*(signed char *)((a4 + 0x1))), 0x1, 0x12);
                t12 = ((int (*)(int))(FUN_0c037bf6))(a4);
                t14 = (unsigned char)t12;
                if ((unsigned char)t12 != 0) {
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    *(unsigned short *)((a4 + 0x1C)) = 0x0;
                    t14 = 0x0;
                }
                return t14;
            }
            if (t0 == 3) {
                t17 = ((int (*)(int, int, int))(FUN_0c037bf6))(a4, a5, a6);
                t19 = (unsigned char)t17;
                if ((unsigned char)t17 != 0) {
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    *(unsigned short *)((a4 + 0x1C)) = 0x0;
                    t19 = 0x0;
                }
                return t19;
            }
            if (t0 == 4) {
                t22 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t22 + 0x1);
                t38 = (short)(t22 + 0x1);
                if ((int)(short)(t22 + 0x1) > (int)0xA) {
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    FUN_0c0a3058(a4, 0xFFFFFFFF, 0x4, 0x37);
                    u25 = (((struct o0_float *)0xC0A58A4)->v);
                    *(int *)((int)stk + 0) = (a4 + 0x28);
                    u29 = ((((struct o28_float *)(a4))->v));
                    u29 = u29 + u25 * (math_sin_angle16((*(int *)((a4 + 0x38)))));
                    (((struct o28_float *)(a4))->v) = u29;
                    *(int *)((int)stk + 0) = (a4 + 0x30);
                    u33 = ((((struct o30_float *)(a4))->v));
                    u33 = u33 + u25 * (math_cos_angle16((*(int *)((a4 + 0x38)))));
                    (((struct o30_float *)(a4))->v) = u33;
                    u34 = (((struct oC_float *)0xC0A58A4)->v);
                    t35 = (((struct o118_int *)(a4))->v);
                    (((struct o98_float *)(t35))->v) = u34;
                    (((struct o94_float *)(t35))->v) = u34;
                    t36 = (((struct o11C_int *)(a4))->v);
                    (((struct o98_float *)(t36))->v) = u34;
                    (((struct o94_float *)(t36))->v) = u34;
                    t38 = (((int (*)(int))(FUN_0c037bf6))(a4));
                }
                return t38;
            }
            if (t0 == 5) {
                t43 = ((int (*)(int, int, int))(FUN_0c037bf6))(a4, a5, a6);
                if ((unsigned char)t43 != 0) {
                    return ((int (*)(int))(FUN_0c085d0c))(a4);
                }
                return (unsigned char)t43;
            }
            return t0;
        }
        if ((int)(*(short *)((a4 + 0x1E))) >= 0) {
            t48 = *(int *)((a4 + 0x38));
            t49 = (((struct o3850_short *)(a4))->v);
            t50 = *(int *)((a4 + 0x38));
            t52 = (unsigned short)(t49 - t48);
            if ((0x8000 & (unsigned short)(t49 - t48)) != 0) {
                t52 = ((unsigned short)(t49 - t48) | 0xFFFF0000);
            }
            *(unsigned int *)((a4 + 0x38)) = (unsigned short)(t50 + ((int)((int)t52 / (int)(*(short *)((a4 + 0x1E))))));
            *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) - 1);
        }
        if ((*(short *)((a4 + 0x1C))) == 4) {
            FUN_0c07d030(a4, 0x2);
            FUN_0c13a044(a4);
        }
        t70 = ((int (*)(int))(FUN_0c037bf6))(a4);
        if ((int)((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v)) == 30) {
            FUN_0c059e60(a4, 0xB);
        }
        FUN_0c0a30dc(a4);
        t79 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t79 + 0x1);
        t85 = (short)(t79 + 0x1);
        if ((int)(short)(t79 + 0x1) <= (int)(*(int *)0xC25D358)) {
        } else {
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            t82 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int, int))(FUN_0c085d0c))(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
            t83 = (((struct o118_int *)(a4))->v);
            (((struct o98_float *)(t83))->v) = 8.0f;
            (((struct o94_float *)(t83))->v) = 8.0f;
            t84 = (((struct o11C_int *)(a4))->v);
            (((struct o98_float *)(t84))->v) = 8.0f;
            (((struct o94_float *)(t84))->v) = 8.0f;
            t85 = 0x94;
        }
        return t85;
    }
    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    FUN_0c0a3058(a4, (*(signed char *)((a4 + 0x1))), 0x1, 0xE);
    t94 = *(int *)(((0x118 + a4) + 0x4));
    t95 = (((struct o118_int *)(a4))->v);
    (((struct oA0_float *)(t94))->v) = 1.0f;
    (((struct o9C_float *)(t94))->v) = 1.0f;
    (((struct oA0_float *)(t95))->v) = 1.0f;
    (((struct o9C_float *)(t95))->v) = 1.0f;
    t96 = *(int *)(((0x118 + a4) + 0x4));
    t97 = (((struct o118_int *)(a4))->v);
    (((struct o98_float *)(t96))->v) = 1.0f;
    (((struct o98_float *)(t97))->v) = 1.0f;
    (((struct o94_float *)(t96))->v) = 1.0f;
    (((struct o94_float *)(t97))->v) = 1.0f;
    *(unsigned short *)((a4 + 0x1C)) = 0x0;
    *(unsigned short *)((a4 + 0x1E)) = 0x4;
    t98 = FUN_0c07d774(a4);
    (((struct o3850_uint *)(a4))->v) = t98;
    return t98;
}

int FUN_0c109df4(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    register int t2;
    register int t3;

    t3 = *(signed char *)((a4 + 0x17));
    if (t3 != 0) {
        if (t3 != 1) {
            return t3;
        }
        t3 = FUN_0c104cc8(0x2008);
        if ((t3 != 0) && (t0 = *(int *)0xC474404, t0 == 0)) {
        } else {
            t0 = FUN_0c104cc8(0x1004);
            if ((t0 != 0) && (t1 = (((struct o0_int *)0xC474714)->v), t2 = *(int *)0xC474404, t2 == (t1 - 1))) {
            } else {
                *(unsigned int *)0xC474404 = (FUN_0c10527c((*(int *)0xC474404), 0x0, (((((struct o0_int *)0xC474714)->v)) - 1)));
                t0 = FUN_0c104cc8(0x300F);
                if (t0 != 0) {
                    if ((int)(*(int *)((0xC474104 + ((*(int *)((0xC474410 + ((*(int *)0xC474404) << 2)))) << 2)))) > 0) {
                        t0 = *(int *)(((((*(int *)0xC474404) << 2) + 0xC474410) + 0x0));
                        FUN_0c117a6e(0x58, ((*(int *)((0xC474104 + (t0 << 2))))), ((*(int *)(((t0 << 2) + 0xC29DDD0)))));
                    } else {
                        FUN_0c117a6e(0x59);
                    }
                }
            }
        }
        t0 = *(int *)0xC474404;
        if (((((struct o22_short *)(a4))->v)) == 0) {
            if ((int)(*(int *)((0xC474104 + ((*(int *)((((t0 << 2) + 0xC474410) + 0x0))) << 2)))) > 0) {
                t1 = *(int *)((((t0 << 2) + 0xC474410) + 0x0));
                FUN_0c117944(0x58, ((*(int *)((((t1 << 2) + 0xC474104) + 0x0)))), ((*(int *)(((t1 << 2) + 0xC29DDD0)))));
            } else {
                FUN_0c117944(0x59);
            }
        } else {
            (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) - 1);
        }
        t0 = FUN_0c104db8();
        if (t0 != 0) {
            return ((int (*)(int, int, int, int))(0xC109CA0))(a4, a5, a6, a7);
        }
        t0 = FUN_0c104d70();
        if (t0 != 0) {
            t1 = *(int *)0xC474404;
            if ((int)(*(int *)((0xC474104 + ((*(int *)((((t1 << 2) + 0xC474410) + 0x0))) << 2)))) >= (int)0x63) {
                FUN_0c117944(0x5C);
                (((struct o22_ushort *)(a4))->v) = 0x78;
                return 0x22;
            }
            if ((int)(*(int *)(((((*(int *)((((t1 << 2) + 0xC474410) + 0x0))) << 2) << 1) + 0xC29D7D4))) > (int)((((struct o8_int *)0xC474714)->v))) {
                FUN_0c117944(0x5E);
                (((struct o22_ushort *)(a4))->v) = 0x78;
                return 0x22;
            }
            return ((int (*)(int, int, int, int))(0xC109C6A))(a4, a5, a6, a7);
        }
        return t0;
    }
    (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
    (((struct o22_ushort *)(a4))->v) = 0x0;
    if ((int)(*(int *)((0xC474104 + ((*(int *)((0xC474410 + ((*(int *)0xC474404) << 2)))) << 2)))) > 0) {
        t0 = *(int *)((0xC474410 + ((*(int *)0xC474404) << 2)));
        t1 = (FUN_0c117a6e(0x58, ((*(int *)((((t0 << 2) + 0xC474104) + 0x0)))), ((*(int *)(((t0 << 2) + 0xC29DDD0))))));
    } else {
        t1 = (FUN_0c117944(0x59));
    }
    return t1;
}

int FUN_0c107a38(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    int t2;
    register int t3;
    int t4;
    register int t5;
    int t6;
    register int t7;
    int t8;
    register int t9;
    int t10;
    register int t11;
    register int t12;
    register int t13;
    register int t14;
    register int t15;
    register int t16;

    t12 = *(signed char *)((a4 + 0x15));
    if (t12 != 0) {
        if (t12 != 1) {
            if (t12 == 2) {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                *(unsigned short *)((a4 + 0x1E)) = (*(int *)0xC473D00);
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                (((struct o16_uchar *)(a4))->v) = 0x0;
                FUN_0c11e2d0((*(int *)((0xC473CCC + (((*(int *)0xC473D00) - (*(short *)((a4 + 0x1E)))) << 2)))), ((((struct o0_int *)0xC473CC0)->v)), ((((struct o4_int *)0xC473CC0)->v)), ((((struct o8_int *)0xC473CC0)->v)));
                t13 = *(signed char *)((a4 + 0x16));
                if (t13 != 0) {
                    if (t13 != 1) {
                        t14 = t13;
                        if (t13 != 2) {
                        } else {
                            t13 = FUN_0c05f22c(0x3FCF);
                            t15 = t13;
                            if (t13 != 0) {
                                *(unsigned short *)(((*(int *)0xC474BAC) + 0x1C)) = (((*(int *)0xC473D00) - (*(short *)(((0x1E + a4) + 0x0)))) + 0x1);
                                t13 = *(short *)((a4 + 0x1E));
                                if (t13 == 0) {
                                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                                    t16 = 0x14;
                                } else {
                                    *(unsigned short *)((a4 + 0x1E)) = (t13 - 1);
                                    (((struct o15_uchar *)(a4))->v) = 0x3;
                                    t16 = 0x15;
                                }
                                t15 = t16;
                            }
                            t14 = t15;
                        }
                        return t14;
                    }
                    t13 = FUN_0c117d54();
                    if ((int)t13 < 0) {
                        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                        return ((int (*)(void))(FUN_0c117e76))();
                    }
                    return t13;
                }
                (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                return (FUN_0c117a6e(0x42, ((*(int *)((((*(int *)((0xC473CCC + (((*(int *)0xC473D00) - (*(short *)((a4 + 0x1E)))) << 2)))) << 2) + 0xC29DDD0))))));
            }
            if (t12 == 3) {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                (((struct o16_uchar *)(a4))->v) = 0x0;
                FUN_0c11e2d0((*(int *)((0xC473CCC + (((*(int *)0xC473D00) - (*(short *)((a4 + 0x1E)))) << 2)))), ((((struct o0_int *)0xC473CC0)->v)), ((((struct o4_int *)0xC473CC0)->v)), ((((struct o8_int *)0xC473CC0)->v)));
                t13 = *(signed char *)((a4 + 0x16));
                if (t13 != 0) {
                    if (t13 != 1) {
                        t14 = t13;
                        if (t13 != 2) {
                        } else {
                            t13 = FUN_0c05f22c(0x3FCF);
                            t15 = t13;
                            if (t13 != 0) {
                                *(unsigned short *)(((*(int *)0xC474BAC) + 0x1C)) = (((*(int *)0xC473D00) - (*(short *)(((0x1E + a4) + 0x0)))) + 0x1);
                                t13 = *(short *)((a4 + 0x1E));
                                if (t13 == 0) {
                                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                                    t16 = 0x14;
                                } else {
                                    *(unsigned short *)((a4 + 0x1E)) = (t13 - 1);
                                    (((struct o15_uchar *)(a4))->v) = 0x3;
                                    t16 = 0x15;
                                }
                                t15 = t16;
                            }
                            t14 = t15;
                        }
                        return t14;
                    }
                    t13 = FUN_0c117d54();
                    if ((int)t13 < 0) {
                        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                        return ((int (*)(void))(FUN_0c117e76))();
                    }
                    return t13;
                }
                (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                return (FUN_0c117a6e(0x42, ((*(int *)((((*(int *)((0xC473CCC + (((*(int *)0xC473D00) - (*(short *)((a4 + 0x1E)))) << 2)))) << 2) + 0xC29DDD0))))));
            }
            if (t12 == 4) {
                t13 = *(signed char *)((a4 + 0x16));
                if (t13 != 0) {
                    if (t13 != 1) {
                        t14 = t13;
                        if (t13 != 2) {
                        } else {
                            t13 = FUN_0c05f22c(0x3FCF);
                            t15 = t13;
                            if (t13 != 0) {
                                *(unsigned short *)(((*(int *)0xC474BAC) + 0x1C)) = (((*(int *)0xC473D00) - (*(short *)(((0x1E + a4) + 0x0)))) + 0x1);
                                t13 = *(short *)((a4 + 0x1E));
                                if (t13 == 0) {
                                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                                    t16 = 0x14;
                                } else {
                                    *(unsigned short *)((a4 + 0x1E)) = (t13 - 1);
                                    (((struct o15_uchar *)(a4))->v) = 0x3;
                                    t16 = 0x15;
                                }
                                t15 = t16;
                            }
                            t14 = t15;
                        }
                        return t14;
                    }
                    t13 = FUN_0c117d54();
                    if ((int)t13 < 0) {
                        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                        return ((int (*)(void))(FUN_0c117e76))();
                    }
                    return t13;
                }
                (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                return (FUN_0c117a6e(0x42, ((*(int *)((((*(int *)((0xC473CCC + (((*(int *)0xC473D00) - (*(short *)((a4 + 0x1E)))) << 2)))) << 2) + 0xC29DDD0))))));
            }
            return t12;
        }
        t12 = *(signed char *)((a4 + 0x16));
        if (t12 != 0) {
            if (t12 != 1) {
                if (t12 != 2) {
                    t13 = t12;
                    if (t12 != 3) {
                    } else {
                        t12 = FUN_0c05f22c(0x3FCF);
                        t14 = t12;
                        if (t12 != 0) {
                            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                            t14 = 0x15;
                        }
                        t13 = t14;
                    }
                    return t13;
                }
                t12 = (((struct o20_short *)(a4))->v);
                (((struct o20_ushort *)(a4))->v) = (t12 + 0x1);
                if ((int)(short)(t12 + 0x1) <= (int)0xD2) {
                    return 0x20;
                }
                (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                t12 = ((int (*)(int, int, int, int))(FUN_0c117e76))(a4, a5, a6, a7);
                return FUN_0c05b048(0x78, 0x1);
            }
            t12 = FUN_0c117d54();
            t13 = t12;
            if ((int)t12 >= 0) {
            } else {
                (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                (((struct o20_ushort *)(a4))->v) = 0x0;
                t13 = 0x20;
            }
            return t13;
        }
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        t12 = 0x0;
        if ((((((struct oC_int *)0xC473CC0)->v)) != -1) && (t0 = (((struct oC_int *)0xC473CC0)->v), t1 = *(int *)((0xC473D04 + (t0 << 2))), (t1 & 0x40000) != 0)) {
            t12 = 0x1;
        }
        t0 = t12;
        if ((((((struct o10_int *)0xC473CC0)->v)) != -1) && (t2 = (((struct o10_int *)0xC473CC0)->v), t3 = *(int *)((0xC473D04 + (t2 << 2))), (t3 & 0x40000) != 0)) {
            t0 = (t12 | 0x1);
        }
        t1 = t0;
        if ((((((struct o14_int *)0xC473CC0)->v)) != -1) && (t4 = (((struct o14_int *)0xC473CC0)->v), t5 = *(int *)((0xC473D04 + (t4 << 2))), (t5 & 0x40000) != 0)) {
            t1 = (t0 | 0x1);
        }
        if (t1 != 0) {
            FUN_0c117944(0x40);
        } else {
            FUN_0c117944(0x41);
        }
        return FUN_0c115120(0x5);
    }
    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    (((struct o16_uchar *)(a4))->v) = 0x0;
    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                t1 = t0;
                if (t0 != 3) {
                } else {
                    t0 = FUN_0c05f22c(0x3FCF);
                    t2 = t0;
                    if (t0 != 0) {
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        t2 = 0x15;
                    }
                    t1 = t2;
                }
                return t1;
            }
            t0 = (((struct o20_short *)(a4))->v);
            (((struct o20_ushort *)(a4))->v) = (t0 + 0x1);
            if ((int)(short)(t0 + 0x1) <= (int)0xD2) {
                return 0x20;
            }
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
            t0 = ((int (*)(int, int, int, int))(FUN_0c117e76))(a4, a5, a6, a7);
            return FUN_0c05b048(0x78, 0x1);
        }
        t0 = FUN_0c117d54();
        t1 = t0;
        if ((int)t0 >= 0) {
        } else {
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
            (((struct o20_ushort *)(a4))->v) = 0x0;
            t1 = 0x20;
        }
        return t1;
    }
    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
    t0 = 0x0;
    if ((((((struct oC_int *)0xC473CC0)->v)) != -1) && (t6 = (((struct oC_int *)0xC473CC0)->v), t7 = *(int *)((0xC473D04 + (t6 << 2))), (t7 & 0x40000) != 0)) {
        t0 = 0x1;
    }
    t1 = t0;
    if ((((((struct o10_int *)0xC473CC0)->v)) != -1) && (t8 = (((struct o10_int *)0xC473CC0)->v), t9 = *(int *)((0xC473D04 + (t8 << 2))), (t9 & 0x40000) != 0)) {
        t1 = (t0 | 0x1);
    }
    t0 = t1;
    if ((((((struct o14_int *)0xC473CC0)->v)) != -1) && (t10 = (((struct o14_int *)0xC473CC0)->v), t11 = *(int *)((0xC473D04 + (t10 << 2))), (t11 & 0x40000) != 0)) {
        t0 = (t1 | 0x1);
    }
    if (t0 != 0) {
        FUN_0c117944(0x40);
    } else {
        FUN_0c117944(0x41);
    }
    return FUN_0c115120(0x5);
}
