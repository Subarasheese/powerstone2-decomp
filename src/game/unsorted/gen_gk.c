/* Straight-line functions with calls and guards (batch gen_gk): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o34_float { char p[0x34]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o68_int { char p[0x68]; int v; };
struct o6C_float { char p[0x6C]; float v; };
struct o6C_uchar { char p[0x6C]; unsigned char v; };
struct o70_float { char p[0x70]; float v; };
struct o70_int { char p[0x70]; int v; };
struct o70_uint { char p[0x70]; unsigned int v; };
struct o748_float { char p[0x748]; float v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oD0_int { char p[0xD0]; int v; };
struct oD4_int { char p[0xD4]; int v; };
struct oD8_int { char p[0xD8]; int v; };
struct oDC_int { char p[0xDC]; int v; };
int FUN_0c03733c(int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c05258e(int, int, int, int, int);
int FUN_0c05a080(int, int);
int FUN_0c17b1a0(int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int math_vec3_mul_xyz(int, float, float, float);
int nlAddVector3op(int, int, int);
int nlCalcPoint(int, int);
int nlRand(void);
float nlScalor(int);
int nlSelectMatrixStack(int);
int nlSubVector3op(int, int, int);
float FUN_0c158f5a(int a4, int a5, int a6, int a7);
void FUN_0c11d032(int a4, int a5, int a6, int a7);

float FUN_0c158f5a(int a4, int a5, int a6, int a7)
{
    int stk[28];

    register int R1;
    register int R2;
    register int R3;
    int R5;
    register float F0;
    register float F2;
    register float F3;
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
    register float w0_5;
    register float w0_6;
    v0_5 = a4;
    R5 = a5;
    v0_7 = a6;
    v0_8 = a7;
    v0_9 = *(signed char *)((v0_5 + 0x14));
    v0_6 = (v0_9);
    v0_4 = ((((int)stk + 0) + 0x3C));
    v0_0 = (0xC058204);
    v0_0 = (0xC17C130);
    v0_0 = (v0_5);
    v0_1 = (((((struct oC4_int *)(v0_5))->v)));
    v0_2 = (0x0);
    v0_3 = (0x1);
    w0_0 = (0.5f);
    if ((v0_9 == 0)) goto L_C158FC4;
    if ((v0_6 != 1)) goto L_C158F9A;
    nlSelectMatrixStack(0x1);
    FUN_0c17b1a0(((((struct o68_int *)(v0_1))->v)));
    *(unsigned int *)(((int)stk + 0)) = v0_4;
    nlCalcPoint((v0_0 + 0x28), v0_4);
    *(unsigned int *)(((int)stk + 4)) = (v0_4 + 0xC);
    nlCalcPoint((v0_1 + 0x6C), (v0_4 + 0xC));
    v0_5 = ((0x748 + v0_1));
    R5 = ((0x748 + v0_1));
    if (((*(float *)(((*(int *)(((int)stk + 0))) + 0x0))) != ((((struct o748_float *)(v0_1))->v)))) goto L_C1593C0;
    if ((((((struct o4_float *)((*(int *)(((int)stk + 0)))))->v)) != ((((struct o4_float *)(R5))->v)))) goto L_C1593C0;
    if ((((((struct o8_float *)((*(int *)(((int)stk + 0)))))->v)) != ((((struct o8_float *)(R5))->v)))) goto L_C1593C0;
    if (((*(float *)(((*(int *)(((int)stk + 4))) + 0x0))) != ((((struct oC_float *)(v0_5))->v)))) goto L_C1593C0;
    if ((((((struct o4_float *)((*(int *)(((int)stk + 4)))))->v)) != ((((struct o10_float *)(v0_5))->v)))) goto L_C1593C0;
    v0_6 = (0x8);
    if ((((((struct o8_float *)((*(int *)(((int)stk + 4)))))->v)) != ((((struct o14_float *)(v0_5))->v)))) goto L_C1593C0;
    L_C15A0D6:;
    return F0;
    L_C1593C0:;
    *(unsigned int *)(((int)stk + 0)) = (((int)stk + 0) + 0x6C);
    v0_8 = *(signed char *)((v0_0 + 0x16));
    v0_6 = ((v0_8 & 0x70));
    v0_5 = (0x5);
    R5 = (0xF);
    v0_7 = (0xC20361C);
    w0_1 = (-1.0f);
    if (((v0_8 & 0x70) == 0)) goto L_C159412;
    if ((v0_6 == 16)) goto L_C15949C;
    if ((v0_6 != 32)) goto L_C1593E6;
    *(unsigned char *)(((*(int *)(((int)stk + 0))) + 0x0)) = v0_5;
    L_C159666:;
    if (((int)(*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))) > 0)) goto L_C1595FE;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x748 + v0_1)) = *(struct mv3 *)(v0_4); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x754 + v0_1)) = *(struct mv3 *)((v0_4 + 0xC)); }
    w0_2 = *(float *)((v0_7 + (((*(signed char *)((v0_0 + 0x16))) & R5) << 2)));
    *(unsigned int *)(((int)stk + 0)) = (((int)stk + 0) + 0x6C);
    (((struct o6C_uchar *)(((int)stk + 0)))->v) = v0_5;
    *(unsigned int *)(((int)stk + 4)) = v0_4;
    *(unsigned int *)(((int)stk + 8)) = (v0_4 + 0xC);
    w0_2 = (w0_2);
    L_C15974A:;
    if (!(((int)(*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))) > 0))) goto L_C159D6A;
    v0_5 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
    *(unsigned int *)(((int)stk + 12)) = (((((v0_5 << 1) << 1) + (v0_5 << 1)) << 2) + (0x748 + v0_1));
    nlAddVector3op((*(int *)(((int)stk + 4))), (*(int *)(((int)stk + 12))), ((((((v0_5 << 1) << 1) + (v0_5 << 1)) << 2) + (0x748 + v0_1)) + 0xC));
    math_vec3_mul_xyz((*(int *)(((int)stk + 4))), w0_0, w0_0, w0_0);
    v0_5 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
    nlSubVector3op((*(int *)(((int)stk + 8))), (((((v0_5 << 1) << 1) + (v0_5 << 1)) << 2) + (0x748 + v0_1)), (*(int *)(((int)stk + 4))));
    math_vec3_mul_xyz((*(int *)(((int)stk + 8))), w0_2, w0_2, w0_2);
    v0_5 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
    nlAddVector3op((((((v0_5 << 1) << 1) + (v0_5 << 1)) << 2) + (0x748 + v0_1)), (*(int *)(((int)stk + 4))), (*(int *)(((int)stk + 8))));
    math_vec3_mul_xyz((*(int *)(((int)stk + 8))), w0_1, w0_1, w0_1);
    v0_5 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
    nlAddVector3op(((((((v0_5 << 1) << 1) + (v0_5 << 1)) << 2) + (0x748 + v0_1)) + 0xC), (*(int *)(((int)stk + 4))), (*(int *)(((int)stk + 8))));
    v0_5 = *(int *)(((int)stk + 0));
    *(unsigned char *)((v0_5 + 0x0)) = ((*(signed char *)((v0_5 + 0x0))) - 1);
    goto L_C15974A;
    L_C159D6A:;
    *(float *)(((int)stk + 56)) = -999999.0f;
    *(float *)(((int)stk + 52)) = -999999.0f;
    *(float *)(((int)stk + 48)) = -999999.0f;
    *(float *)(((int)stk + 44)) = 999999.0f;
    *(float *)(((int)stk + 40)) = 999999.0f;
    *(float *)(((int)stk + 36)) = 999999.0f;
    *(unsigned int *)(((int)stk + 8)) = (((int)stk + 0) + 0x6C);
    (((struct o6C_uchar *)(((int)stk + 0)))->v) = v0_2;
    *(unsigned int *)(((int)stk + 4)) = (((int)stk + 0) + 0x6E);
    *(unsigned int *)(((int)stk + 0)) = (((int)stk + 0) + 0x6D);
    v0_5 = *(int *)(((int)stk + 8));
    *(unsigned int *)(((int)stk + 8)) = v0_5;
    v0_6 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 4)) = v0_6;
    *(unsigned int *)(((int)stk + 12)) = v0_4;
    *(unsigned int *)(((int)stk + 20)) = (v0_4 + 0xC);
    *(unsigned int *)(((int)stk + 16)) = (v0_4 + 0x18);
    v0_4 = *(int *)(((int)stk + 12));
    *(unsigned int *)(((int)stk + 12)) = v0_4;
    *(unsigned int *)(((int)stk + 4)) = v0_6;
    *(unsigned int *)(((int)stk + 12)) = v0_4;
    *(unsigned int *)(((int)stk + 4)) = v0_6;
    v0_7 = *(int *)(((int)stk + 0));
    *(unsigned int *)(((int)stk + 0)) = v0_7;
    *(unsigned int *)(((int)stk + 8)) = v0_5;
    *(unsigned int *)(((int)stk + 0)) = v0_7;
    *(unsigned int *)(((int)stk + 12)) = v0_4;
    *(unsigned int *)(((int)stk + 0)) = v0_7;
    *(unsigned int *)(((int)stk + 8)) = v0_5;
    *(unsigned int *)(((int)stk + 0)) = v0_7;
    *(unsigned int *)(((int)stk + 4)) = v0_6;
    *(unsigned int *)(((int)stk + 0)) = v0_7;
    *(unsigned int *)(((int)stk + 8)) = v0_5;
    *(unsigned int *)(((int)stk + 0)) = v0_7;
    *(unsigned int *)(((int)stk + 8)) = v0_5;
    v0_5 = (v0_7);
    v0_8 = (v0_4);
    L_C15A01A:;
    if (((int)(*(signed char *)(((*(int *)(((int)stk + 8))) + 0x0))) >= (int)0x4)) goto L_C15A028;
    *(unsigned char *)(((*(int *)(((int)stk + 0))) + 0x0)) = v0_2;
    L_C15A004:;
    if (((int)(*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))) >= (int)0x2)) goto L_C15A012;
    if (((*(signed char *)(((*(int *)(((int)stk + 8))) + 0x0))) == 0)) goto L_C159E32;
    *(unsigned int *)(((int)stk + 24)) = (0x748 + v0_1);
    v0_4 = *(signed char *)(((*(int *)(((int)stk + 8))) + 0x0));
    *(unsigned int *)(((int)stk + 28)) = v0_4;
    v0_5 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
    *(unsigned int *)(((int)stk + 32)) = v0_5;
    v0_6 = *(int *)(((int)stk + 28));
    nlAddVector3op((*(int *)(((int)stk + 12))), ((((((v0_6 << 1) + v0_5) << 1) + ((v0_6 << 1) + v0_5)) << 2) + (*(int *)(((int)stk + 24)))), ((0x748 + v0_1) + ((((((v0_4 + 0x1) << 1) + v0_5) << 1) + (((v0_4 + 0x1) << 1) + v0_5)) << 2)));
    math_vec3_mul_xyz((*(int *)(((int)stk + 12))), w0_0, w0_0, w0_0);
    L_C159E4C:;
    v0_4 = *(signed char *)(((*(int *)(((int)stk + 8))) + 0x0));
    v0_5 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((*(int *)(((int)stk + 20)))) = *(struct mv3 *)((((((((v0_4 + 0x1) << 1) + v0_5) << 1) + (((v0_4 + 0x1) << 1) + v0_5)) << 2) + (0x748 + v0_1))); }
    *(unsigned int *)(((int)stk + 28)) = (0x748 + v0_1);
    v0_4 = *(signed char *)(((*(int *)(((int)stk + 8))) + 0x0));
    *(unsigned int *)(((int)stk + 32)) = v0_4;
    v0_5 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
    *(unsigned int *)(((int)stk + 24)) = v0_5;
    v0_6 = *(int *)(((int)stk + 32));
    nlAddVector3op((*(int *)(((int)stk + 16))), (((((((v0_6 + 0x1) << 1) + v0_5) << 1) + (((v0_6 + 0x1) << 1) + v0_5)) << 2) + (*(int *)(((int)stk + 28)))), ((0x748 + v0_1) + ((((((v0_4 + 0x2) << 1) + v0_5) << 1) + (((v0_4 + 0x2) << 1) + v0_5)) << 2)));
    math_vec3_mul_xyz((*(int *)(((int)stk + 16))), w0_0, w0_0, w0_0);
    *(unsigned char *)(((*(int *)(((int)stk + 4))) + 0x0)) = v0_2;
    L_C159FEE:;
    if (((int)(*(signed char *)(((*(int *)(((int)stk + 4))) + 0x0))) >= (int)0x6)) goto L_C159FFC;
    v0_4 = *(signed char *)(((*(int *)(((int)stk + 8))) + 0x0));
    v0_5 = *(signed char *)(((*(int *)(((int)stk + 4))) + 0x0));
    v0_6 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
    v0_7 = *(int *)((v0_1 + 0x8));
    w0_1 = ((*(float *)(((*(int *)(((int)stk + 20))) + 0x0))) * ((((struct o4_float *)((((((signed char)v0_5 << 1) + (signed char)v0_5) << 2) + 0xC2035C0)))->v)));
    w0_1 = w0_1 + (*(float *)(((((((signed char)v0_5 << 1) + (signed char)v0_5) << 2) + 0xC2035C0) + 0x0))) * (*(float *)(((*(int *)(((int)stk + 12))) + 0x0)));
    w0_1 = w0_1;
    w0_1 = w0_1 + ((((struct o8_float *)((((((signed char)v0_5 << 1) + (signed char)v0_5) << 2) + 0xC2035C0)))->v)) * (*(float *)(((*(int *)(((int)stk + 16))) + 0x0)));
    (((struct o70_float *)((((((((v0_6 - (((v0_4 << 1) + v0_4) << 2)) - ((signed char)v0_5 << 1)) + 0x2E) << 2) << 1) << 2) + v0_7)))->v) = w0_1;
    v0_5 = (((((((((v0_6 - (((v0_4 << 1) + v0_4) << 2)) - ((signed char)v0_5 << 1)) + 0x2E) << 2) << 1) << 2) + v0_7) + 0x70));
    if ((!(w0_1 > (*(float *)(((int)stk + 48)))))) goto L_C159F30;
    *(float *)(((int)stk + 48)) = (*(float *)((v0_5 + 0x0)));
    L_C159F30:;
    if ((!((*(float *)(((int)stk + 36))) > (*(float *)((v0_5 + 0x0)))))) goto L_C159F40;
    *(float *)(((int)stk + 36)) = (*(float *)((v0_5 + 0x0)));
    L_C159F40:;
    *(unsigned int *)((v0_5 + 0x0)) = ((*(int *)((v0_5 + 0x0))) | v0_3);
    v0_4 = *(signed char *)(((*(int *)(((int)stk + 4))) + 0x0));
    w0_1 = (((((struct o4_float *)((*(int *)(((int)stk + 20)))))->v)) * ((((struct o4_float *)(((((v0_4 << 1) + v0_4) << 2) + 0xC2035C0)))->v)));
    w0_1 = w0_1 + (*(float *)((((((v0_4 << 1) + v0_4) << 2) + 0xC2035C0) + 0x0))) * ((((struct o4_float *)((*(int *)(((int)stk + 12)))))->v));
    w0_1 = w0_1;
    w0_1 = w0_1 + ((((struct o8_float *)(((((v0_4 << 1) + v0_4) << 2) + 0xC2035C0)))->v)) * ((((struct o4_float *)((*(int *)(((int)stk + 16)))))->v));
    (((struct o4_float *)(v0_5))->v) = w0_1;
    v0_5 = ((v0_5 + 0x4));
    if ((!(w0_1 > (*(float *)(((int)stk + 52)))))) goto L_C159F86;
    *(float *)(((int)stk + 52)) = (*(float *)((v0_5 + 0x0)));
    L_C159F86:;
    if ((!((*(float *)(((int)stk + 40))) > (*(float *)((v0_5 + 0x0)))))) goto L_C159F96;
    *(float *)(((int)stk + 40)) = (*(float *)((v0_5 + 0x0)));
    L_C159F96:;
    v0_4 = *(signed char *)(((*(int *)(((int)stk + 4))) + 0x0));
    w0_1 = (((((struct o8_float *)((*(int *)(((int)stk + 20)))))->v)) * ((((struct o4_float *)(((((v0_4 << 1) + v0_4) << 2) + 0xC2035C0)))->v)));
    w0_1 = w0_1 + (*(float *)((((((v0_4 << 1) + v0_4) << 2) + 0xC2035C0) + 0x0))) * ((((struct o8_float *)((*(int *)(((int)stk + 12)))))->v));
    w0_1 = w0_1;
    w0_1 = w0_1 + ((((struct o8_float *)(((((v0_4 << 1) + v0_4) << 2) + 0xC2035C0)))->v)) * ((((struct o8_float *)((*(int *)(((int)stk + 16)))))->v));
    (((struct o4_float *)(v0_5))->v) = w0_1;
    v0_5 = ((v0_5 + 0x4));
    if ((!(w0_1 > (*(float *)(((int)stk + 56)))))) goto L_C159FD6;
    *(float *)(((int)stk + 56)) = (*(float *)((v0_5 + 0x0)));
    L_C159FD6:;
    if ((!((*(float *)(((int)stk + 44))) > (*(float *)((v0_5 + 0x0)))))) goto L_C159FE6;
    *(float *)(((int)stk + 44)) = (*(float *)((v0_5 + 0x0)));
    L_C159FE6:;
    v0_4 = *(int *)(((int)stk + 4));
    *(unsigned char *)((v0_4 + 0x0)) = ((*(signed char *)((v0_4 + 0x0))) + 0x1);
    goto L_C159FEE;
    L_C159FFC:;
    v0_4 = *(int *)(((int)stk + 0));
    *(unsigned char *)((v0_4 + 0x0)) = ((*(signed char *)((v0_4 + 0x0))) + 0x1);
    goto L_C15A004;
    L_C159E32:;
    v0_4 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((*(int *)(((int)stk + 12)))) = *(struct mv3 *)(((((v0_4 << 1) + v0_4) << 2) + (0x748 + v0_1))); }
    goto L_C159E4C;
    L_C15A012:;
    v0_4 = *(int *)(((int)stk + 8));
    *(unsigned char *)((v0_4 + 0x0)) = ((*(signed char *)((v0_4 + 0x0))) + 0x1);
    goto L_C15A01A;
    L_C15A028:;
    w0_0 = nlScalor((((int)stk + 0) + 0x30));
    w0_2 = nlScalor((((int)stk + 0) + 0x24));
    F0 = (w0_2);
    w0_1 = (w0_0);
    w0_4 = (w0_2);
    if ((!(w0_0 > w0_2))) goto L_C15A058;
    (((struct o14_float *)((*(int *)((v0_1 + 0x8)))))->v) = w0_1;
    (((struct o34_float *)((*(int *)((v0_1 + 0x8)))))->v) = w0_1;
    L_C15A064:;
    v0_1 = *(short *)((v0_0 + 0x1E));
    *(unsigned short *)((v0_0 + 0x1E)) = (v0_1 - 1);
    if (((int)(short)(v0_1 - 1) > 0)) goto L_C15A078;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    L_C15A078:;
    v0_1 = *(short *)((v0_0 + 0x1E));
    v0_6 = (v0_1);
    if (((int)v0_1 >= (int)0x8)) goto L_C15A0D6;
    v0_1 = *(short *)((v0_0 + 0x1E));
    (((struct oB4_float *)(v0_0))->v) = (((((struct oB4_float *)(v0_0))->v)) - ((((float)v0_1 * 16.0f) / 255.0f)));
    v0_6 = (0xB4);
    F0 = (0.0f);
    w0_0 = (255.0f);
    w0_4 = ((((float)v0_1 * 16.0f) / 255.0f));
    w0_5 = (0.0f);
    FPUL_ = (v0_1);
    if ((!(0.0f > ((((struct oB4_float *)(v0_0))->v))))) goto L_C15A0AA;
    *(float *)((v0_0 + v0_6)) = w0_5;
    L_C15A0AA:;
    (((struct oB8_float *)(v0_0))->v) = (((((struct oB8_float *)(v0_0))->v)) - w0_4);
    v0_6 = (0xB8);
    if ((!(0.0f > ((((struct oB8_float *)(v0_0))->v))))) goto L_C15A0BC;
    *(float *)((v0_0 + v0_6)) = w0_5;
    L_C15A0BC:;
    (((struct oBC_float *)(v0_0))->v) = (((((struct oBC_float *)(v0_0))->v)) - w0_4);
    v0_6 = (0xBC);
    if ((!(0.0f > ((((struct oBC_float *)(v0_0))->v))))) goto L_C15A0D6;
    *(float *)((v0_0 + v0_6)) = w0_5;
    goto L_C15A0D6;
    L_C15A058:;
    (((struct o14_float *)((*(int *)((v0_1 + 0x8)))))->v) = w0_4;
    (((struct o34_float *)((*(int *)((v0_1 + 0x8)))))->v) = w0_4;
    goto L_C15A064;
    L_C1595FE:;
    v0_6 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
    *(unsigned int *)(((int)stk + 4)) = v0_6;
    v0_8 = *(int *)(((int)stk + 4));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((((v0_6 << 1) << 1) + (v0_6 << 1)) << 2) + (0x748 + v0_1))) = *(struct mv3 *)(((((((v0_8 - 1) << 1) << 1) + ((v0_8 - 1) << 1)) << 2) + (0x748 + v0_1))); }
    *(unsigned int *)(((int)stk + 4)) = (0x748 + v0_1);
    v0_8 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((0x748 + v0_1) + ((((v0_8 << 1) << 1) + (v0_8 << 1)) << 2)) + 0xC)) = *(struct mv3 *)((((((((v0_8 - 1) << 1) << 1) + ((v0_8 - 1) << 1)) << 2) + (*(int *)(((int)stk + 4)))) + 0xC)); }
    v0_6 = *(int *)(((int)stk + 0));
    *(unsigned char *)((v0_6 + 0x0)) = ((*(signed char *)((v0_6 + 0x0))) - 1);
    v0_6 = (v0_6);
    v0_8 = (v0_8);
    goto L_C159666;
    L_C1593E6:;
    if ((v0_6 != 48)) goto L_C1593EE;
    *(unsigned char *)(((*(int *)(((int)stk + 0))) + 0x0)) = v0_5;
    L_C1597C2:;
    if (((int)(*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))) > 0)) goto L_C15975E;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x748 + v0_1)) = *(struct mv3 *)(v0_4); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x754 + v0_1)) = *(struct mv3 *)((v0_4 + 0xC)); }
    v0_6 = *(signed char *)((v0_0 + 0x16));
    w0_2 = *(float *)((((v0_6 & R5) << 2) + 0xC203634));
    w0_3 = *(float *)((((v0_6 & R5) << 2) + 0xC203640));
    *(unsigned int *)(((int)stk + 0)) = (((int)stk + 0) + 0x6C);
    (((struct o6C_uchar *)(((int)stk + 0)))->v) = v0_5;
    *(unsigned int *)(((int)stk + 8)) = v0_4;
    *(unsigned int *)(((int)stk + 4)) = (v0_4 + 0xC);
    v0_8 = ((v0_4 + 0xC));
    w0_3 = (w0_3);
    w0_2 = (w0_2);
    L_C1598C6:;
    if (((int)(*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))) >= 0)) goto L_C159820;
    goto L_C159D6A;
    L_C159820:;
    v0_5 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
    *(unsigned int *)(((int)stk + 12)) = (((((v0_5 << 1) << 1) + (v0_5 << 1)) << 2) + (0x748 + v0_1));
    nlAddVector3op((*(int *)(((int)stk + 8))), (*(int *)(((int)stk + 12))), ((((((v0_5 << 1) << 1) + (v0_5 << 1)) << 2) + (0x748 + v0_1)) + 0xC));
    math_vec3_mul_xyz((*(int *)(((int)stk + 8))), w0_0, w0_0, w0_0);
    v0_5 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
    nlSubVector3op((*(int *)(((int)stk + 4))), (((((v0_5 << 1) << 1) + (v0_5 << 1)) << 2) + (0x748 + v0_1)), (*(int *)(((int)stk + 8))));
    if (((int)(*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))) <= (int)v0_3)) goto L_C159874;
    w0_4 = (w0_3);
    w0_5 = (w0_3);
    w0_6 = (w0_3);
    L_C15987A:;
    math_vec3_mul_xyz((*(int *)(((int)stk + 4))), w0_4, w0_5, w0_6);
    v0_5 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
    nlAddVector3op((((((v0_5 << 1) << 1) + (v0_5 << 1)) << 2) + (0x748 + v0_1)), (*(int *)(((int)stk + 8))), (*(int *)(((int)stk + 4))));
    math_vec3_mul_xyz((*(int *)(((int)stk + 4))), w0_1, w0_1, w0_1);
    v0_5 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
    nlAddVector3op(((((((v0_5 << 1) << 1) + (v0_5 << 1)) << 2) + (0x748 + v0_1)) + 0xC), (*(int *)(((int)stk + 8))), (*(int *)(((int)stk + 4))));
    v0_5 = *(int *)(((int)stk + 0));
    *(unsigned char *)((v0_5 + 0x0)) = ((*(signed char *)((v0_5 + 0x0))) - 1);
    goto L_C1598C6;
    L_C159874:;
    w0_4 = (w0_2);
    w0_5 = (w0_2);
    w0_6 = (w0_2);
    goto L_C15987A;
    L_C15975E:;
    v0_6 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((((v0_6 << 1) << 1) + (v0_6 << 1)) << 2) + (0x748 + v0_1))) = *(struct mv3 *)(((((((v0_6 - 1) << 1) << 1) + ((v0_6 - 1) << 1)) << 2) + (0x748 + v0_1))); }
    v0_6 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((((((v0_6 << 1) << 1) + (v0_6 << 1)) << 2) + (0x748 + v0_1)) + 0xC)) = *(struct mv3 *)((((((((v0_6 - 1) << 1) << 1) + ((v0_6 - 1) << 1)) << 2) + (0x748 + v0_1)) + 0xC)); }
    v0_6 = *(int *)(((int)stk + 0));
    *(unsigned char *)((v0_6 + 0x0)) = ((*(signed char *)((v0_6 + 0x0))) - 1);
    v0_6 = (v0_6);
    goto L_C1597C2;
    L_C1593EE:;
    if ((v0_6 != 64)) goto L_C1593F6;
    *(unsigned char *)(((*(int *)(((int)stk + 0))) + 0x0)) = v0_5;
    L_C15993E:;
    if (((int)(*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))) > 0)) goto L_C1598DA;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x748 + v0_1)) = *(struct mv3 *)(v0_4); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x754 + v0_1)) = *(struct mv3 *)((v0_4 + 0xC)); }
    w0_1 = *(float *)(((((*(signed char *)((v0_0 + 0x16))) & R5) << 2) + 0xC20364C));
    *(unsigned int *)(((int)stk + 0)) = (((int)stk + 0) + 0x6C);
    (((struct o6C_uchar *)(((int)stk + 0)))->v) = v0_5;
    *(unsigned int *)(((int)stk + 4)) = v0_4;
    w0_1 = (w0_1);
    L_C1599DC:;
    if (((int)(*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))) > 0)) goto L_C15998C;
    goto L_C159D6A;
    L_C15998C:;
    v0_5 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
    *(unsigned int *)(((int)stk + 8)) = (((((v0_5 << 1) << 1) + (v0_5 << 1)) << 2) + (0x748 + v0_1));
    nlSubVector3op((*(int *)(((int)stk + 4))), (*(int *)(((int)stk + 8))), ((((((v0_5 << 1) << 1) + (v0_5 << 1)) << 2) + (0x748 + v0_1)) + 0xC));
    math_vec3_mul_xyz((*(int *)(((int)stk + 4))), w0_1, w0_1, w0_1);
    v0_5 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
    v0_6 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 8)) = (((((v0_5 << 1) << 1) + (v0_5 << 1)) << 2) + (0x748 + v0_1));
    nlAddVector3op((*(int *)(((int)stk + 8))), ((((((v0_5 << 1) << 1) + (v0_5 << 1)) << 2) + (0x748 + v0_1)) + 0xC), v0_6);
    v0_5 = *(int *)(((int)stk + 0));
    *(unsigned char *)((v0_5 + 0x0)) = ((*(signed char *)((v0_5 + 0x0))) - 1);
    goto L_C1599DC;
    L_C1598DA:;
    v0_6 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((((v0_6 << 1) << 1) + (v0_6 << 1)) << 2) + (0x748 + v0_1))) = *(struct mv3 *)(((((((v0_6 - 1) << 1) << 1) + ((v0_6 - 1) << 1)) << 2) + (0x748 + v0_1))); }
    v0_6 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((((((v0_6 << 1) << 1) + (v0_6 << 1)) << 2) + (0x748 + v0_1)) + 0xC)) = *(struct mv3 *)((((((((v0_6 - 1) << 1) << 1) + ((v0_6 - 1) << 1)) << 2) + (0x748 + v0_1)) + 0xC)); }
    v0_6 = *(int *)(((int)stk + 0));
    *(unsigned char *)((v0_6 + 0x0)) = ((*(signed char *)((v0_6 + 0x0))) - 1);
    v0_6 = (v0_6);
    goto L_C15993E;
    L_C1593F6:;
    if ((v0_6 != 80)) goto L_C1593FE;
    *(unsigned char *)(((*(int *)(((int)stk + 0))) + 0x0)) = v0_5;
    L_C159A54:;
    if (((int)(*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))) > 0)) goto L_C1599F0;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x748 + v0_1)) = *(struct mv3 *)(v0_4); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x754 + v0_1)) = *(struct mv3 *)((v0_4 + 0xC)); }
    v0_6 = *(signed char *)((v0_0 + 0x16));
    w0_1 = *(float *)((((v0_6 & R5) << 2) + 0xC203664));
    w0_2 = *(float *)((((v0_6 & R5) << 2) + 0xC20367C));
    *(unsigned int *)(((int)stk + 0)) = (((int)stk + 0) + 0x6C);
    (((struct o6C_uchar *)(((int)stk + 0)))->v) = v0_5;
    *(unsigned int *)(((int)stk + 4)) = v0_4;
    *(unsigned int *)(((int)stk + 8)) = (v0_4 + 0xC);
    w0_2 = (w0_2);
    w0_1 = (w0_1);
    L_C159B32:;
    if (((int)(*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))) > 0)) goto L_C159AB0;
    goto L_C159D6A;
    L_C159AB0:;
    v0_5 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
    *(unsigned int *)(((int)stk + 12)) = (((((v0_5 << 1) << 1) + (v0_5 << 1)) << 2) + (0x748 + v0_1));
    nlSubVector3op((*(int *)(((int)stk + 4))), (*(int *)(((int)stk + 12))), ((((((v0_5 << 1) << 1) + (v0_5 << 1)) << 2) + (0x748 + v0_1)) + 0xC));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((*(int *)(((int)stk + 8)))) = *(struct mv3 *)((*(int *)(((int)stk + 4)))); }
    math_vec3_mul_xyz((*(int *)(((int)stk + 4))), w0_1, w0_1, w0_1);
    math_vec3_mul_xyz((*(int *)(((int)stk + 8))), w0_2, w0_2, w0_2);
    v0_5 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
    v0_6 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 12)) = (((((v0_5 << 1) << 1) + (v0_5 << 1)) << 2) + (0x748 + v0_1));
    nlAddVector3op((*(int *)(((int)stk + 12))), ((((((v0_5 << 1) << 1) + (v0_5 << 1)) << 2) + (0x748 + v0_1)) + 0xC), v0_6);
    v0_5 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
    v0_6 = *(int *)(((int)stk + 8));
    *(unsigned int *)(((int)stk + 12)) = ((((((v0_5 << 1) << 1) + (v0_5 << 1)) << 2) + (0x748 + v0_1)) + 0xC);
    nlAddVector3op(((((((v0_5 << 1) << 1) + (v0_5 << 1)) << 2) + (0x748 + v0_1)) + 0xC), ((((((v0_5 << 1) << 1) + (v0_5 << 1)) << 2) + (0x748 + v0_1)) + 0xC), v0_6);
    v0_5 = *(int *)(((int)stk + 0));
    *(unsigned char *)((v0_5 + 0x0)) = ((*(signed char *)((v0_5 + 0x0))) - 1);
    goto L_C159B32;
    L_C1599F0:;
    v0_6 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((((v0_6 << 1) << 1) + (v0_6 << 1)) << 2) + (0x748 + v0_1))) = *(struct mv3 *)(((((((v0_6 - 1) << 1) << 1) + ((v0_6 - 1) << 1)) << 2) + (0x748 + v0_1))); }
    v0_6 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((((((v0_6 << 1) << 1) + (v0_6 << 1)) << 2) + (0x748 + v0_1)) + 0xC)) = *(struct mv3 *)((((((((v0_6 - 1) << 1) << 1) + ((v0_6 - 1) << 1)) << 2) + (0x748 + v0_1)) + 0xC)); }
    v0_6 = *(int *)(((int)stk + 0));
    *(unsigned char *)((v0_6 + 0x0)) = ((*(signed char *)((v0_6 + 0x0))) - 1);
    v0_6 = (v0_6);
    goto L_C159A54;
    L_C1593FE:;
    if ((v0_6 != 96)) goto L_C159406;
    v0_7 = (int)((int)(*(short *)((v0_0 + 0x1E))) % (int)((*(signed char *)(((0x16 + v0_0) + 0x0))) & R5));
    v0_6 = (v0_7);
    if (!((v0_7 == 0))) goto L_C159D50;
    *(unsigned char *)(((*(int *)(((int)stk + 0))) + 0x0)) = v0_5;
    goto L_C159BC6;
    L_C159D50:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x748 + v0_1)) = *(struct mv3 *)(v0_4); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x754 + v0_1)) = *(struct mv3 *)((v0_4 + 0xC)); }
    goto L_C159D6A;
    L_C159BC6:;
    if (((int)(*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))) > 0)) goto L_C159B62;
    goto L_C159D50;
    L_C159B62:;
    v0_5 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((((v0_5 << 1) << 1) + (v0_5 << 1)) << 2) + (0x748 + v0_1))) = *(struct mv3 *)(((((((v0_5 - 1) << 1) << 1) + ((v0_5 - 1) << 1)) << 2) + (0x748 + v0_1))); }
    v0_5 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((((((v0_5 << 1) << 1) + (v0_5 << 1)) << 2) + (0x748 + v0_1)) + 0xC)) = *(struct mv3 *)((((((((v0_5 - 1) << 1) << 1) + ((v0_5 - 1) << 1)) << 2) + (0x748 + v0_1)) + 0xC)); }
    v0_5 = *(int *)(((int)stk + 0));
    *(unsigned char *)((v0_5 + 0x0)) = ((*(signed char *)((v0_5 + 0x0))) - 1);
    v0_6 = (v0_5);
    goto L_C159BC6;
    L_C159406:;
    if ((v0_6 != 112)) goto L_C15940E;
    v0_8 = (int)((int)(*(short *)((v0_0 + 0x1E))) % (int)((*(signed char *)(((0x16 + v0_0) + 0x0))) & R5));
    v0_6 = (v0_8);
    if ((v0_8 == 0)) goto L_C159BF0;
    goto L_C159D50;
    L_C159BF0:;
    w0_2 = *(float *)((v0_7 + 0x0));
    *(unsigned char *)(((*(int *)(((int)stk + 0))) + 0x0)) = v0_5;
    w0_2 = (w0_2);
    L_C159C6C:;
    if (((int)(*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))) > 0)) goto L_C159C08;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x748 + v0_1)) = *(struct mv3 *)(v0_4); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x754 + v0_1)) = *(struct mv3 *)((v0_4 + 0xC)); }
    *(unsigned int *)(((int)stk + 0)) = (((int)stk + 0) + 0x6C);
    (((struct o6C_uchar *)(((int)stk + 0)))->v) = v0_5;
    *(unsigned int *)(((int)stk + 8)) = v0_4;
    *(unsigned int *)(((int)stk + 4)) = (v0_4 + 0xC);
    L_C159D38:;
    if (((int)(*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))) > 0)) goto L_C159CA2;
    goto L_C159D6A;
    L_C159CA2:;
    v0_5 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
    *(unsigned int *)(((int)stk + 12)) = (((((v0_5 << 1) << 1) + (v0_5 << 1)) << 2) + (0x748 + v0_1));
    nlAddVector3op((*(int *)(((int)stk + 8))), (*(int *)(((int)stk + 12))), ((((((v0_5 << 1) << 1) + (v0_5 << 1)) << 2) + (0x748 + v0_1)) + 0xC));
    math_vec3_mul_xyz((*(int *)(((int)stk + 8))), w0_0, w0_0, w0_0);
    v0_5 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
    nlSubVector3op((*(int *)(((int)stk + 4))), (((((v0_5 << 1) << 1) + (v0_5 << 1)) << 2) + (0x748 + v0_1)), (*(int *)(((int)stk + 8))));
    math_vec3_mul_xyz((*(int *)(((int)stk + 4))), w0_2, w0_2, w0_2);
    v0_5 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
    nlAddVector3op((((((v0_5 << 1) << 1) + (v0_5 << 1)) << 2) + (0x748 + v0_1)), (*(int *)(((int)stk + 8))), (*(int *)(((int)stk + 4))));
    math_vec3_mul_xyz((*(int *)(((int)stk + 4))), w0_1, w0_1, w0_1);
    v0_5 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
    nlAddVector3op(((((((v0_5 << 1) << 1) + (v0_5 << 1)) << 2) + (0x748 + v0_1)) + 0xC), (*(int *)(((int)stk + 8))), (*(int *)(((int)stk + 4))));
    v0_5 = *(int *)(((int)stk + 0));
    *(unsigned char *)((v0_5 + 0x0)) = ((*(signed char *)((v0_5 + 0x0))) - 1);
    goto L_C159D38;
    L_C159C08:;
    v0_6 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((((v0_6 << 1) << 1) + (v0_6 << 1)) << 2) + (0x748 + v0_1))) = *(struct mv3 *)(((((((v0_6 - 1) << 1) << 1) + ((v0_6 - 1) << 1)) << 2) + (0x748 + v0_1))); }
    v0_6 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((((((v0_6 << 1) << 1) + (v0_6 << 1)) << 2) + (0x748 + v0_1)) + 0xC)) = *(struct mv3 *)((((((((v0_6 - 1) << 1) << 1) + ((v0_6 - 1) << 1)) << 2) + (0x748 + v0_1)) + 0xC)); }
    v0_6 = *(int *)(((int)stk + 0));
    *(unsigned char *)((v0_6 + 0x0)) = ((*(signed char *)((v0_6 + 0x0))) - 1);
    v0_6 = (v0_6);
    goto L_C159C6C;
    L_C15940E:;
    goto L_C159D6A;
    L_C15949C:;
    *(unsigned char *)(((*(int *)(((int)stk + 0))) + 0x0)) = v0_5;
    L_C159506:;
    if (((int)(*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))) > 0)) goto L_C1594A2;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x748 + v0_1)) = *(struct mv3 *)(v0_4); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x754 + v0_1)) = *(struct mv3 *)((v0_4 + 0xC)); }
    w0_2 = *(float *)(((((*(signed char *)((v0_0 + 0x16))) & R5) << 2) + 0xC203608));
    *(unsigned int *)(((int)stk + 0)) = (((int)stk + 0) + 0x6C);
    (((struct o6C_uchar *)(((int)stk + 0)))->v) = v0_5;
    *(unsigned int *)(((int)stk + 4)) = v0_4;
    *(unsigned int *)(((int)stk + 8)) = (v0_4 + 0xC);
    w0_2 = (w0_2);
    L_C1595EA:;
    if (((int)(*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))) > 0)) goto L_C159554;
    goto L_C159D6A;
    L_C159554:;
    v0_5 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
    *(unsigned int *)(((int)stk + 12)) = (((((v0_5 << 1) << 1) + (v0_5 << 1)) << 2) + (0x748 + v0_1));
    nlAddVector3op((*(int *)(((int)stk + 4))), (*(int *)(((int)stk + 12))), ((((((v0_5 << 1) << 1) + (v0_5 << 1)) << 2) + (0x748 + v0_1)) + 0xC));
    math_vec3_mul_xyz((*(int *)(((int)stk + 4))), w0_0, w0_0, w0_0);
    v0_5 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
    nlSubVector3op((*(int *)(((int)stk + 8))), (((((v0_5 << 1) << 1) + (v0_5 << 1)) << 2) + (0x748 + v0_1)), (*(int *)(((int)stk + 4))));
    math_vec3_mul_xyz((*(int *)(((int)stk + 8))), w0_2, w0_2, w0_2);
    v0_5 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
    nlAddVector3op((((((v0_5 << 1) << 1) + (v0_5 << 1)) << 2) + (0x748 + v0_1)), (*(int *)(((int)stk + 4))), (*(int *)(((int)stk + 8))));
    math_vec3_mul_xyz((*(int *)(((int)stk + 8))), w0_1, w0_1, w0_1);
    v0_5 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
    nlAddVector3op(((((((v0_5 << 1) << 1) + (v0_5 << 1)) << 2) + (0x748 + v0_1)) + 0xC), (*(int *)(((int)stk + 4))), (*(int *)(((int)stk + 8))));
    v0_5 = *(int *)(((int)stk + 0));
    *(unsigned char *)((v0_5 + 0x0)) = ((*(signed char *)((v0_5 + 0x0))) - 1);
    goto L_C1595EA;
    L_C1594A2:;
    v0_6 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((((v0_6 << 1) << 1) + (v0_6 << 1)) << 2) + (0x748 + v0_1))) = *(struct mv3 *)(((((((v0_6 - 1) << 1) << 1) + ((v0_6 - 1) << 1)) << 2) + (0x748 + v0_1))); }
    v0_6 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((((((v0_6 << 1) << 1) + (v0_6 << 1)) << 2) + (0x748 + v0_1)) + 0xC)) = *(struct mv3 *)((((((((v0_6 - 1) << 1) << 1) + ((v0_6 - 1) << 1)) << 2) + (0x748 + v0_1)) + 0xC)); }
    v0_6 = *(int *)(((int)stk + 0));
    *(unsigned char *)((v0_6 + 0x0)) = ((*(signed char *)((v0_6 + 0x0))) - 1);
    v0_6 = (v0_6);
    v0_8 = ((0x748 + v0_1));
    goto L_C159506;
    L_C159412:;
    *(unsigned char *)(((*(int *)(((int)stk + 0))) + 0x0)) = v0_5;
    L_C159490:;
    if (((int)(*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))) > 0)) goto L_C15942C;
    goto L_C159D50;
    L_C15942C:;
    v0_5 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((((v0_5 << 1) << 1) + (v0_5 << 1)) << 2) + (0x748 + v0_1))) = *(struct mv3 *)(((((((v0_5 - 1) << 1) << 1) + ((v0_5 - 1) << 1)) << 2) + (0x748 + v0_1))); }
    v0_5 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((((((v0_5 << 1) << 1) + (v0_5 << 1)) << 2) + (0x748 + v0_1)) + 0xC)) = *(struct mv3 *)((((((((v0_5 - 1) << 1) << 1) + ((v0_5 - 1) << 1)) << 2) + (0x748 + v0_1)) + 0xC)); }
    v0_5 = *(int *)(((int)stk + 0));
    *(unsigned char *)((v0_5 + 0x0)) = ((*(signed char *)((v0_5 + 0x0))) - 1);
    v0_6 = (v0_5);
    goto L_C159490;
    L_C158F9A:;
    v0_6 = ((FUN_0c03f346(v0_0, R5, v0_7, v0_8)));
    goto L_C15A0D6;
    L_C158FC4:;
    if (((*(signed char *)((v0_0 + 0x15))) != 0)) goto L_C159024;
    (((struct oA8_uchar *)(v0_0))->v) = v0_2;
    nlSelectMatrixStack(0x1);
    FUN_0c17b1a0(((((struct o68_int *)(v0_1))->v)));
    *(unsigned int *)(((int)stk + 0)) = v0_4;
    nlCalcPoint((v0_0 + 0x28), v0_4);
    *(unsigned int *)(((int)stk + 4)) = (v0_4 + 0xC);
    nlCalcPoint((v0_1 + 0x6C), (v0_4 + 0xC));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x748 + v0_1)) = *(struct mv3 *)((*(int *)(((int)stk + 0)))); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x754 + v0_1)) = *(struct mv3 *)((*(int *)(((int)stk + 4)))); }
    v0_1 = *(int *)(((int)stk + 0));
    *(unsigned int *)((v0_1 + 0x0)) = ((*(int *)((v0_1 + 0x0))) | 0x1);
    v0_1 = *(int *)(((int)stk + 4));
    *(unsigned int *)((v0_1 + 0x0)) = ((*(int *)((v0_1 + 0x0))) | 0x1);
    v0_6 = (0x15);
    L_C159334:;
    *(unsigned char *)((v0_0 + v0_6)) = ((*(signed char *)((v0_0 + v0_6))) + 0x1);
    goto L_C15A0D6;
    L_C159024:;
    nlSelectMatrixStack(0x1);
    FUN_0c17b1a0(((((struct o68_int *)(v0_1))->v)));
    *(unsigned int *)(((int)stk + 12)) = v0_4;
    nlCalcPoint((v0_0 + 0x28), v0_4);
    *(unsigned int *)(((int)stk + 8)) = (v0_4 + 0xC);
    nlCalcPoint((v0_1 + 0x6C), (v0_4 + 0xC));
    *(unsigned int *)(((int)stk + 4)) = (v0_4 + 0x18);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_4 + 0x18)) = *(struct mv3 *)((0x748 + v0_1)); }
    *(unsigned int *)(((int)stk + 0)) = (v0_4 + 0x24);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_4 + 0x24)) = *(struct mv3 *)((0x754 + v0_1)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x748 + v0_1)) = *(struct mv3 *)((*(int *)(((int)stk + 12)))); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x754 + v0_1)) = *(struct mv3 *)((*(int *)(((int)stk + 8)))); }
    v0_5 = *(int *)(((int)stk + 4));
    nlSubVector3op(v0_5, v0_5, (*(int *)(((int)stk + 12))));
    v0_5 = *(int *)(((int)stk + 0));
    nlSubVector3op(v0_5, v0_5, (*(int *)(((int)stk + 8))));
    math_vec3_mul_xyz((*(int *)(((int)stk + 4))), 0.200000003f, 0.200000003f, 0.200000003f);
    v0_5 = math_vec3_mul_xyz((*(int *)(((int)stk + 0))), 0.200000003f, 0.200000003f, 0.200000003f);
    *(unsigned int *)(((int)stk + 0)) = (((int)stk + 0) + 0x6C);
    (((struct o6C_uchar *)(((int)stk + 0)))->v) = v0_3;
    *(unsigned int *)(((int)stk + 8)) = (v0_4 + 0x18);
    *(unsigned int *)(((int)stk + 4)) = (v0_4 + 0x24);
    v0_6 = (v0_5);
    L_C159182:;
    if (((int)(*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))) < (int)0x6)) goto L_C1590E4;
    *(unsigned int *)(((int)stk + 0)) = v0_4;
    nlCalcPoint((v0_0 + 0x28), v0_4);
    *(unsigned int *)(((int)stk + 4)) = (v0_4 + 0xC);
    nlCalcPoint((v0_1 + 0x6C), (v0_4 + 0xC));
    *(unsigned int *)(((int)stk + 8)) = (v0_4 + 0x18);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_4 + 0x18)) = *(struct mv3 *)((0x748 + v0_1)); }
    *(unsigned int *)(((int)stk + 12)) = (v0_4 + 0x24);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_4 + 0x24)) = *(struct mv3 *)((0x754 + v0_1)); }
    v0_5 = *(int *)(((int)stk + 8));
    nlSubVector3op(v0_5, v0_5, (*(int *)(((int)stk + 0))));
    v0_5 = *(int *)(((int)stk + 12));
    nlSubVector3op(v0_5, v0_5, (*(int *)(((int)stk + 4))));
    math_vec3_mul_xyz((*(int *)(((int)stk + 8))), 0.0434782617f, 0.0434782617f, 0.0434782617f);
    math_vec3_mul_xyz((*(int *)(((int)stk + 12))), 0.0434782617f, 0.0434782617f, 0.0434782617f);
    v0_5 = *(int *)(((int)stk + 0));
    *(unsigned int *)((v0_5 + 0x0)) = ((*(int *)((v0_5 + 0x0))) | v0_3);
    v0_5 = *(int *)(((int)stk + 4));
    *(unsigned int *)((v0_5 + 0x0)) = ((*(int *)((v0_5 + 0x0))) | v0_3);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((*(int *)((v0_1 + 0x8))) + 0x70)) = *(struct mv3 *)((*(int *)(((int)stk + 0)))); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((*(int *)((v0_1 + 0x8))) + 0x90)) = *(struct mv3 *)((*(int *)(((int)stk + 4)))); }
    *(unsigned int *)(((int)stk + 0)) = (((int)stk + 0) + 0x6C);
    (((struct o6C_uchar *)(((int)stk + 0)))->v) = v0_3;
    *(unsigned int *)(((int)stk + 8)) = (v0_4 + 0x18);
    *(unsigned int *)(((int)stk + 4)) = (v0_4 + 0x24);
    L_C159320:;
    if (((int)(*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))) < (int)0x18)) goto L_C159248;
    (((struct oA8_uchar *)(v0_0))->v) = v0_3;
    (((struct o15_uchar *)(v0_0))->v) = v0_2;
    v0_6 = (0x14);
    goto L_C159334;
    L_C159248:;
    v0_4 = *(int *)((v0_1 + 0x8));
    v0_5 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((((v0_5 << 2) << 2) << 2) + v0_4) + 0x70)) = *(struct mv3 *)(((((((v0_5 - 1) << 2) << 2) << 2) + v0_4) + 0x70)); }
    v0_4 = *(int *)((v0_1 + 0x8));
    v0_5 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((((((v0_5 << 1) + 0x1) << 2) << 1) << 2) + v0_4) + 0x70)) = *(struct mv3 *)(((((((((v0_5 - 1) << 1) + 0x1) << 2) << 1) << 2) + v0_4) + 0x70)); }
    v0_4 = *(int *)((v0_1 + 0x8));
    nlAddVector3op(((((((*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))) << 2) << 2) << 2) + v0_4) + 0x70), ((((((*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))) << 2) << 2) << 2) + v0_4) + 0x70), (*(int *)(((int)stk + 8))));
    v0_4 = *(int *)((v0_1 + 0x8));
    nlAddVector3op(((((((((*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))) << 1) + 0x1) << 2) << 1) << 2) + v0_4) + 0x70), ((((((((*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))) << 1) + 0x1) << 2) << 1) << 2) + v0_4) + 0x70), (*(int *)(((int)stk + 4))));
    v0_4 = *(int *)((v0_1 + 0x8));
    v0_5 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
    (((struct o70_uint *)(((((v0_5 << 2) << 2) << 2) + v0_4)))->v) = (((((struct o70_int *)(((((v0_5 << 2) << 2) << 2) + v0_4)))->v)) | 0x1);
    v0_4 = *(int *)((v0_1 + 0x8));
    v0_5 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
    (((struct o70_uint *)(((((((v0_5 << 1) + 0x1) << 2) << 1) << 2) + v0_4)))->v) = (((((struct o70_int *)(((((((v0_5 << 1) + 0x1) << 2) << 1) << 2) + v0_4)))->v)) | 0x1);
    v0_4 = *(int *)(((int)stk + 0));
    *(unsigned char *)((v0_4 + 0x0)) = ((*(signed char *)((v0_4 + 0x0))) + 0x1);
    goto L_C159320;
    L_C1590E4:;
    v0_5 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((((v0_5 << 1) << 1) + (v0_5 << 1)) << 2) + (0x748 + v0_1))) = *(struct mv3 *)(((((((v0_5 - 1) << 1) << 1) + ((v0_5 - 1) << 1)) << 2) + (0x748 + v0_1))); }
    v0_5 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((((((v0_5 << 1) << 1) + (v0_5 << 1)) << 2) + (0x748 + v0_1)) + 0xC)) = *(struct mv3 *)((((((((v0_5 - 1) << 1) << 1) + ((v0_5 - 1) << 1)) << 2) + (0x748 + v0_1)) + 0xC)); }
    v0_5 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
    v0_6 = *(int *)(((int)stk + 8));
    *(unsigned int *)(((int)stk + 12)) = (((((v0_5 << 1) << 1) + (v0_5 << 1)) << 2) + (0x748 + v0_1));
    nlAddVector3op((((((v0_5 << 1) << 1) + (v0_5 << 1)) << 2) + (0x748 + v0_1)), (((((v0_5 << 1) << 1) + (v0_5 << 1)) << 2) + (0x748 + v0_1)), v0_6);
    v0_5 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
    v0_6 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 12)) = ((((((v0_5 << 1) << 1) + (v0_5 << 1)) << 2) + (0x748 + v0_1)) + 0xC);
    v0_5 = nlAddVector3op(((((((v0_5 << 1) << 1) + (v0_5 << 1)) << 2) + (0x748 + v0_1)) + 0xC), ((((((v0_5 << 1) << 1) + (v0_5 << 1)) << 2) + (0x748 + v0_1)) + 0xC), v0_6);
    v0_6 = *(int *)(((int)stk + 0));
    *(unsigned char *)((v0_6 + 0x0)) = ((*(signed char *)((v0_6 + 0x0))) + 0x1);
    v0_6 = (v0_5);
    goto L_C159182;
}

void FUN_0c11d032(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 == 1) {
            return;
        }
        if (t0 == 2) {
            t1 = nlRand();
            t2 = ((~(((~t1) + 0x1) & 0xF)) + 0x1);
            if ((int)t1 >= 0) {
                t2 = (t1 & 0xF);
            }
            t1 = (((struct oD0_int *)(a4))->v);
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x6C)) = *(struct mv3 *)((t1 + 0x90)); }
            u0 = (((float)t2 * 360.0f) / 16.0f);
            u1 = ((u0 * 65536.0f) / 360.0f);
            u0 = ((((struct o6C_float *)(t1))->v));
            u0 = u0 + ((((struct o0_float *)0xC29242C)->v)) * (math_cos_angle16(((int)(u1 + 0.5f) & 0xFFFF)));
            (((struct o6C_float *)(t1))->v) = u0;
            u0 = ((((struct o70_float *)(t1))->v));
            u0 = u0 + ((((struct o0_float *)0xC29242C)->v)) * (math_sin_angle16(((int)(u1 + 0.5f) & 0xFFFF)));
            (((struct o70_float *)(t1))->v) = u0;
            t1 = nlRand();
            t2 = ((~(((~t1) + 0x1) & 0xF)) + 0x1);
            if ((int)t1 >= 0) {
                t2 = (t1 & 0xF);
            }
            t1 = (((struct oD8_int *)(a4))->v);
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x6C)) = *(struct mv3 *)((t1 + 0x90)); }
            u0 = (((float)t2 * 360.0f) / 16.0f);
            u1 = ((u0 * 65536.0f) / 360.0f);
            u0 = ((((struct o6C_float *)(t1))->v));
            u0 = u0 + ((((struct o0_float *)0xC29242C)->v)) * (math_cos_angle16(((int)(u1 + 0.5f) & 0xFFFF)));
            (((struct o6C_float *)(t1))->v) = u0;
            u0 = ((((struct o70_float *)(t1))->v));
            u0 = u0 + ((((struct o0_float *)0xC29242C)->v)) * (math_sin_angle16(((int)(u1 + 0.5f) & 0xFFFF)));
            (((struct o70_float *)(t1))->v) = u0;
            t1 = nlRand();
            t2 = ((~(((~t1) + 0x1) & 0xF)) + 0x1);
            if ((int)t1 >= 0) {
                t2 = (t1 & 0xF);
            }
            t1 = (((struct oD4_int *)(a4))->v);
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x6C)) = *(struct mv3 *)((t1 + 0x90)); }
            u0 = (((float)t2 * 360.0f) / 16.0f);
            u1 = ((u0 * 65536.0f) / 360.0f);
            u0 = ((((struct o6C_float *)(t1))->v));
            u0 = u0 + ((((struct o0_float *)0xC29242C)->v)) * (math_cos_angle16(((int)(u1 + 0.5f) & 0xFFFF)));
            (((struct o6C_float *)(t1))->v) = u0;
            u0 = ((((struct o70_float *)(t1))->v));
            u0 = u0 + ((((struct o0_float *)0xC29242C)->v)) * (math_sin_angle16(((int)(u1 + 0.5f) & 0xFFFF)));
            (((struct o70_float *)(t1))->v) = u0;
            t1 = nlRand();
            t2 = ((~(((~t1) + 0x1) & 0xF)) + 0x1);
            if ((int)t1 >= 0) {
                t2 = (t1 & 0xF);
            }
            t1 = (((struct oDC_int *)(a4))->v);
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x6C)) = *(struct mv3 *)((0x90 + t1)); }
            u0 = (((float)t2 * 360.0f) / 16.0f);
            u1 = ((u0 * 65536.0f) / 360.0f);
            u0 = ((((struct o6C_float *)(t1))->v));
            u0 = u0 + ((((struct o0_float *)0xC29242C)->v)) * (math_cos_angle16(((int)(u1 + 0.5f) & 0xFFFF)));
            (((struct o6C_float *)(t1))->v) = u0;
            u0 = ((((struct o70_float *)(t1))->v));
            u0 = u0 + ((((struct o0_float *)0xC29242C)->v)) * (math_sin_angle16(((int)(u1 + 0.5f) & 0xFFFF)));
            (((struct o70_float *)(t1))->v) = u0;
            return;
        }
        if (t0 == 3) {
            t1 = nlRand();
            t2 = ((~(((~t1) + 0x1) & 0xF)) + 0x1);
            if ((int)t1 >= 0) {
                t2 = (t1 & 0xF);
            }
            t1 = (((struct oD0_int *)(a4))->v);
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x6C)) = *(struct mv3 *)((t1 + 0x90)); }
            u0 = (((float)t2 * 360.0f) / 16.0f);
            u1 = ((u0 * 65536.0f) / 360.0f);
            u0 = ((((struct o6C_float *)(t1))->v));
            u0 = u0 + ((((struct o4_float *)0xC29242C)->v)) * (math_cos_angle16(((int)(u1 + 0.5f) & 0xFFFF)));
            (((struct o6C_float *)(t1))->v) = u0;
            u0 = ((((struct o70_float *)(t1))->v));
            u0 = u0 + ((((struct o4_float *)0xC29242C)->v)) * (math_sin_angle16(((int)(u1 + 0.5f) & 0xFFFF)));
            (((struct o70_float *)(t1))->v) = u0;
            t1 = nlRand();
            t2 = ((~(((~t1) + 0x1) & 0xF)) + 0x1);
            if ((int)t1 >= 0) {
                t2 = (t1 & 0xF);
            }
            t1 = (((struct oD8_int *)(a4))->v);
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x6C)) = *(struct mv3 *)((t1 + 0x90)); }
            u0 = (((float)t2 * 360.0f) / 16.0f);
            u1 = ((u0 * 65536.0f) / 360.0f);
            u0 = ((((struct o6C_float *)(t1))->v));
            u0 = u0 + ((((struct o4_float *)0xC29242C)->v)) * (math_cos_angle16(((int)(u1 + 0.5f) & 0xFFFF)));
            (((struct o6C_float *)(t1))->v) = u0;
            u0 = ((((struct o70_float *)(t1))->v));
            u0 = u0 + ((((struct o4_float *)0xC29242C)->v)) * (math_sin_angle16(((int)(u1 + 0.5f) & 0xFFFF)));
            (((struct o70_float *)(t1))->v) = u0;
            t1 = nlRand();
            t2 = ((~(((~t1) + 0x1) & 0xF)) + 0x1);
            if ((int)t1 >= 0) {
                t2 = (t1 & 0xF);
            }
            t1 = (((struct oD4_int *)(a4))->v);
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x6C)) = *(struct mv3 *)((t1 + 0x90)); }
            u0 = (((float)t2 * 360.0f) / 16.0f);
            u1 = ((u0 * 65536.0f) / 360.0f);
            u0 = ((((struct o6C_float *)(t1))->v));
            u0 = u0 + ((((struct o4_float *)0xC29242C)->v)) * (math_cos_angle16(((int)(u1 + 0.5f) & 0xFFFF)));
            (((struct o6C_float *)(t1))->v) = u0;
            u0 = ((((struct o70_float *)(t1))->v));
            u0 = u0 + ((((struct o4_float *)0xC29242C)->v)) * (math_sin_angle16(((int)(u1 + 0.5f) & 0xFFFF)));
            (((struct o70_float *)(t1))->v) = u0;
            t1 = nlRand();
            t2 = ((~(((~t1) + 0x1) & 0xF)) + 0x1);
            if ((int)t1 >= 0) {
                t2 = (t1 & 0xF);
            }
            t1 = (((struct oDC_int *)(a4))->v);
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x6C)) = *(struct mv3 *)((0x90 + t1)); }
            u0 = (((float)t2 * 360.0f) / 16.0f);
            u1 = ((u0 * 65536.0f) / 360.0f);
            u0 = ((((struct o6C_float *)(t1))->v));
            u0 = u0 + ((((struct o4_float *)0xC29242C)->v)) * (math_cos_angle16(((int)(u1 + 0.5f) & 0xFFFF)));
            (((struct o6C_float *)(t1))->v) = u0;
            u0 = ((((struct o70_float *)(t1))->v));
            u0 = u0 + ((((struct o4_float *)0xC29242C)->v)) * (math_sin_angle16(((int)(u1 + 0.5f) & 0xFFFF)));
            (((struct o70_float *)(t1))->v) = u0;
            return;
        }
        if (t0 == 4) {
            t1 = nlRand();
            t2 = ((~(((~t1) + 0x1) & 0xF)) + 0x1);
            if ((int)t1 >= 0) {
                t2 = (t1 & 0xF);
            }
            t1 = (((struct oD0_int *)(a4))->v);
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x6C)) = *(struct mv3 *)((t1 + 0x90)); }
            u0 = (((float)t2 * 360.0f) / 16.0f);
            u1 = ((u0 * 65536.0f) / 360.0f);
            u0 = ((((struct o6C_float *)(t1))->v));
            u0 = u0 + ((((struct o0_float *)0xC29242C)->v)) * (math_cos_angle16(((int)(u1 + 0.5f) & 0xFFFF)));
            (((struct o6C_float *)(t1))->v) = u0;
            u0 = ((((struct o70_float *)(t1))->v));
            u0 = u0 + ((((struct o0_float *)0xC29242C)->v)) * (math_sin_angle16(((int)(u1 + 0.5f) & 0xFFFF)));
            (((struct o70_float *)(t1))->v) = u0;
            t1 = nlRand();
            t2 = ((~(((~t1) + 0x1) & 0xF)) + 0x1);
            if ((int)t1 >= 0) {
                t2 = (t1 & 0xF);
            }
            t1 = (((struct oD8_int *)(a4))->v);
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x6C)) = *(struct mv3 *)((t1 + 0x90)); }
            u0 = (((float)t2 * 360.0f) / 16.0f);
            u1 = ((u0 * 65536.0f) / 360.0f);
            u0 = ((((struct o6C_float *)(t1))->v));
            u0 = u0 + ((((struct o0_float *)0xC29242C)->v)) * (math_cos_angle16(((int)(u1 + 0.5f) & 0xFFFF)));
            (((struct o6C_float *)(t1))->v) = u0;
            u0 = ((((struct o70_float *)(t1))->v));
            u0 = u0 + ((((struct o0_float *)0xC29242C)->v)) * (math_sin_angle16(((int)(u1 + 0.5f) & 0xFFFF)));
            (((struct o70_float *)(t1))->v) = u0;
            t1 = nlRand();
            t2 = ((~(((~t1) + 0x1) & 0xF)) + 0x1);
            if ((int)t1 >= 0) {
                t2 = (t1 & 0xF);
            }
            t1 = (((struct oD4_int *)(a4))->v);
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x6C)) = *(struct mv3 *)((t1 + 0x90)); }
            u0 = (((float)t2 * 360.0f) / 16.0f);
            u1 = ((u0 * 65536.0f) / 360.0f);
            u0 = ((((struct o6C_float *)(t1))->v));
            u0 = u0 + ((((struct o0_float *)0xC29242C)->v)) * (math_cos_angle16(((int)(u1 + 0.5f) & 0xFFFF)));
            (((struct o6C_float *)(t1))->v) = u0;
            u0 = ((((struct o70_float *)(t1))->v));
            u0 = u0 + ((((struct o0_float *)0xC29242C)->v)) * (math_sin_angle16(((int)(u1 + 0.5f) & 0xFFFF)));
            (((struct o70_float *)(t1))->v) = u0;
            t1 = nlRand();
            t2 = ((~(((~t1) + 0x1) & 0xF)) + 0x1);
            if ((int)t1 >= 0) {
                t2 = (t1 & 0xF);
            }
            t1 = (((struct oDC_int *)(a4))->v);
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x6C)) = *(struct mv3 *)((t1 + 0x90)); }
            u0 = (((float)t2 * 360.0f) / 16.0f);
            u1 = ((u0 * 65536.0f) / 360.0f);
            u0 = ((((struct o6C_float *)(t1))->v));
            u0 = u0 + ((((struct o0_float *)0xC29242C)->v)) * (math_cos_angle16(((int)(u1 + 0.5f) & 0xFFFF)));
            (((struct o6C_float *)(t1))->v) = u0;
            u0 = ((((struct o70_float *)(t1))->v));
            u0 = u0 + ((((struct o0_float *)0xC29242C)->v)) * (math_sin_angle16(((int)(u1 + 0.5f) & 0xFFFF)));
            (((struct o70_float *)(t1))->v) = u0;
            t1 = nlRand();
            t2 = ((~(((~t1) + 0x1) & 0xF)) + 0x1);
            if ((int)t1 >= 0) {
                t2 = (t1 & 0xF);
            }
            t1 = (((struct oC8_int *)(a4))->v);
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x6C)) = *(struct mv3 *)((t1 + 0x90)); }
            u0 = (((float)t2 * 360.0f) / 16.0f);
            u1 = ((u0 * 65536.0f) / 360.0f);
            u0 = ((((struct o6C_float *)(t1))->v));
            u0 = u0 + ((((struct o8_float *)0xC29242C)->v)) * (math_cos_angle16(((int)(u1 + 0.5f) & 0xFFFF)));
            (((struct o6C_float *)(t1))->v) = u0;
            u0 = ((((struct o70_float *)(t1))->v));
            u0 = u0 + ((((struct o8_float *)0xC29242C)->v)) * (math_sin_angle16(((int)(u1 + 0.5f) & 0xFFFF)));
            (((struct o70_float *)(t1))->v) = u0;
            t1 = nlRand();
            t2 = ((~(((~t1) + 0x1) & 0xF)) + 0x1);
            if ((int)t1 >= 0) {
                t2 = (t1 & 0xF);
            }
            t1 = (((struct oCC_int *)(a4))->v);
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x6C)) = *(struct mv3 *)((0x90 + t1)); }
            u0 = (((float)t2 * 360.0f) / 16.0f);
            u1 = ((u0 * 65536.0f) / 360.0f);
            u0 = ((((struct o6C_float *)(t1))->v));
            u0 = u0 + ((((struct o8_float *)0xC29242C)->v)) * (math_cos_angle16(((int)(u1 + 0.5f) & 0xFFFF)));
            (((struct o6C_float *)(t1))->v) = u0;
            u0 = ((((struct o70_float *)(t1))->v));
            u0 = u0 + ((((struct o8_float *)0xC29242C)->v)) * (math_sin_angle16(((int)(u1 + 0.5f) & 0xFFFF)));
            (((struct o70_float *)(t1))->v) = u0;
            return;
        }
        if (t0 == 5) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            (((struct o15_uchar *)(a4))->v) = 0x0;
            t1 = *(signed char *)((a4 + 0x15));
            if (t1 != 0) {
                if (t1 != 1) {
                    return;
                }
                u0 = (((float)(*(short *)((a4 + 0x1E))) * 90.0f) / 60.0f);
                (((struct o78_uint *)(((((struct oC8_int *)(a4))->v))))->v) = ((int)((((u0 * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF);
                t1 = *(short *)((a4 + 0x1E));
                *(unsigned short *)((a4 + 0x1E)) = (t1 + 0x1);
                if ((int)(short)(t1 + 0x1) <= (int)0x3C) {
                    return;
                }
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                FUN_0c05258e(0x2, 0x14, 0x100, 0x1E, 0x0);
                FUN_0c05a080(0xD, 0x0);
    return;
            }
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            *(unsigned short *)((a4 + 0x1E)) = 0x0;
            t1 = (((struct oD0_int *)(a4))->v);
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x6C)) = *(struct mv3 *)((0x90 + t1)); }
            t1 = (((struct oD8_int *)(a4))->v);
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x6C)) = *(struct mv3 *)((0x90 + t1)); }
            t1 = (((struct oD4_int *)(a4))->v);
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x6C)) = *(struct mv3 *)((0x90 + t1)); }
            t1 = (((struct oDC_int *)(a4))->v);
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x6C)) = *(struct mv3 *)((0x90 + t1)); }
            t1 = (((struct oC8_int *)(a4))->v);
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x6C)) = *(struct mv3 *)((0x90 + t1)); }
            t1 = (((struct oCC_int *)(a4))->v);
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x6C)) = *(struct mv3 *)((0x90 + t1)); }
            u0 = (((float)(*(short *)((a4 + 0x1E))) * 90.0f) / 60.0f);
            (((struct o78_uint *)(((((struct oC8_int *)(a4))->v))))->v) = ((int)((((u0 * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF);
            t1 = *(short *)((a4 + 0x1E));
            *(unsigned short *)((a4 + 0x1E)) = (t1 + 0x1);
            if ((int)(short)(t1 + 0x1) <= (int)0x3C) {
                return;
            }
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            FUN_0c05258e(0x2, 0x14, 0x100, 0x1E, 0x0);
            FUN_0c05a080(0xD, 0x0);
    return;
        }
        if (t0 == 6) {
            t1 = *(signed char *)((a4 + 0x15));
            if (t1 != 0) {
                if (t1 != 1) {
                    return;
                }
                u0 = (((float)(*(short *)((a4 + 0x1E))) * 90.0f) / 60.0f);
                (((struct o78_uint *)(((((struct oC8_int *)(a4))->v))))->v) = ((int)((((u0 * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF);
                t1 = *(short *)((a4 + 0x1E));
                *(unsigned short *)((a4 + 0x1E)) = (t1 + 0x1);
                if ((int)(short)(t1 + 0x1) <= (int)0x3C) {
                    return;
                }
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                FUN_0c05258e(0x2, 0x14, 0x100, 0x1E, 0x0);
                FUN_0c05a080(0xD, 0x0);
    return;
            }
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            *(unsigned short *)((a4 + 0x1E)) = 0x0;
            t1 = (((struct oD0_int *)(a4))->v);
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x6C)) = *(struct mv3 *)((0x90 + t1)); }
            t1 = (((struct oD8_int *)(a4))->v);
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x6C)) = *(struct mv3 *)((0x90 + t1)); }
            t1 = (((struct oD4_int *)(a4))->v);
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x6C)) = *(struct mv3 *)((0x90 + t1)); }
            t1 = (((struct oDC_int *)(a4))->v);
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x6C)) = *(struct mv3 *)((0x90 + t1)); }
            t1 = (((struct oC8_int *)(a4))->v);
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x6C)) = *(struct mv3 *)((0x90 + t1)); }
            t1 = (((struct oCC_int *)(a4))->v);
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x6C)) = *(struct mv3 *)((0x90 + t1)); }
            u0 = (((float)(*(short *)((a4 + 0x1E))) * 90.0f) / 60.0f);
            (((struct o78_uint *)(((((struct oC8_int *)(a4))->v))))->v) = ((int)((((u0 * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF);
            t1 = *(short *)((a4 + 0x1E));
            *(unsigned short *)((a4 + 0x1E)) = (t1 + 0x1);
            if ((int)(short)(t1 + 0x1) <= (int)0x3C) {
                return;
            }
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            FUN_0c05258e(0x2, 0x14, 0x100, 0x1E, 0x0);
            FUN_0c05a080(0xD, 0x0);
    return;
        }
        if (t0 == 7) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            (((struct o15_uchar *)(a4))->v) = 0x0;
            t1 = *(signed char *)((a4 + 0x15));
            if (t1 != 0) {
                if (t1 != 1) {
                    return;
                }
                u0 = (-(((float)(*(short *)((a4 + 0x1E))) * 90.0f) / 60.0f));
                (((struct o78_uint *)(((((struct oC8_int *)(a4))->v))))->v) = ((int)(((((u0 + 90.0f) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF);
                t1 = *(short *)((a4 + 0x1E));
                *(unsigned short *)((a4 + 0x1E)) = (t1 + 0x1);
                if ((int)(short)(t1 + 0x1) <= (int)0x3C) {
                    return;
                }
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                FUN_0c05258e(0x2, 0x14, 0x100, 0x1E, 0x0);
                FUN_0c05a080(0xD, 0x0);
    return;
            }
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            *(unsigned short *)((a4 + 0x1E)) = 0x0;
            u0 = (-(((float)(*(short *)((a4 + 0x1E))) * 90.0f) / 60.0f));
            (((struct o78_uint *)(((((struct oC8_int *)(a4))->v))))->v) = ((int)(((((u0 + 90.0f) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF);
            t1 = *(short *)((a4 + 0x1E));
            *(unsigned short *)((a4 + 0x1E)) = (t1 + 0x1);
            if ((int)(short)(t1 + 0x1) <= (int)0x3C) {
                return;
            }
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            FUN_0c05258e(0x2, 0x14, 0x100, 0x1E, 0x0);
            FUN_0c05a080(0xD, 0x0);
    return;
        }
        if (t0 == 8) {
            t1 = *(signed char *)((a4 + 0x15));
            if (t1 != 0) {
                if (t1 != 1) {
                    return;
                }
                u0 = (-(((float)(*(short *)((a4 + 0x1E))) * 90.0f) / 60.0f));
                (((struct o78_uint *)(((((struct oC8_int *)(a4))->v))))->v) = ((int)(((((u0 + 90.0f) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF);
                t1 = *(short *)((a4 + 0x1E));
                *(unsigned short *)((a4 + 0x1E)) = (t1 + 0x1);
                if ((int)(short)(t1 + 0x1) <= (int)0x3C) {
                    return;
                }
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                FUN_0c05258e(0x2, 0x14, 0x100, 0x1E, 0x0);
                FUN_0c05a080(0xD, 0x0);
    return;
            }
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            *(unsigned short *)((a4 + 0x1E)) = 0x0;
            u0 = (-(((float)(*(short *)((a4 + 0x1E))) * 90.0f) / 60.0f));
            (((struct o78_uint *)(((((struct oC8_int *)(a4))->v))))->v) = ((int)(((((u0 + 90.0f) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF);
            t1 = *(short *)((a4 + 0x1E));
            *(unsigned short *)((a4 + 0x1E)) = (t1 + 0x1);
            if ((int)(short)(t1 + 0x1) <= (int)0x3C) {
                return;
            }
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            FUN_0c05258e(0x2, 0x14, 0x100, 0x1E, 0x0);
            FUN_0c05a080(0xD, 0x0);
    return;
        }
        if (t0 == 11) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            (((struct o15_uchar *)(a4))->v) = 0x0;
            t1 = *(signed char *)((a4 + 0x15));
            if (t1 != 0) {
                if (t1 != 1) {
                } else {
                    u0 = (((float)(*(short *)((a4 + 0x1E))) * 90.0f) / 30.0f);
                    (((struct o7C_uint *)(((((struct oCC_int *)(a4))->v))))->v) = ((int)((((u0 * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF);
                    t1 = *(short *)((a4 + 0x1E));
                    *(unsigned short *)((a4 + 0x1E)) = (t1 + 0x1);
                    if ((int)(short)(t1 + 0x1) > (int)0x1E) {
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    }
                }
            } else {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                *(unsigned short *)((a4 + 0x1E)) = 0x0;
                t1 = (((struct oD0_int *)(a4))->v);
                { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x6C)) = *(struct mv3 *)((0x90 + t1)); }
                t1 = (((struct oD8_int *)(a4))->v);
                { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x6C)) = *(struct mv3 *)((0x90 + t1)); }
                t1 = (((struct oD4_int *)(a4))->v);
                { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x6C)) = *(struct mv3 *)((0x90 + t1)); }
                t1 = (((struct oDC_int *)(a4))->v);
                { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x6C)) = *(struct mv3 *)((0x90 + t1)); }
                t1 = (((struct oC8_int *)(a4))->v);
                { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x6C)) = *(struct mv3 *)((0x90 + t1)); }
                t1 = (((struct oCC_int *)(a4))->v);
                { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x6C)) = *(struct mv3 *)((0x90 + t1)); }
                u0 = (((float)(*(short *)((a4 + 0x1E))) * 90.0f) / 30.0f);
                (((struct o7C_uint *)(((((struct oCC_int *)(a4))->v))))->v) = ((int)((((u0 * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF);
                t1 = *(short *)((a4 + 0x1E));
                *(unsigned short *)((a4 + 0x1E)) = (t1 + 0x1);
                if ((int)(short)(t1 + 0x1) > (int)0x1E) {
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                }
            }
            return;
        }
        if (t0 == 12) {
            t1 = *(signed char *)((a4 + 0x15));
            if (t1 != 0) {
                if (t1 != 1) {
                } else {
                    u0 = (((float)(*(short *)((a4 + 0x1E))) * 90.0f) / 30.0f);
                    (((struct o7C_uint *)(((((struct oCC_int *)(a4))->v))))->v) = ((int)((((u0 * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF);
                    t1 = *(short *)((a4 + 0x1E));
                    *(unsigned short *)((a4 + 0x1E)) = (t1 + 0x1);
                    if ((int)(short)(t1 + 0x1) > (int)0x1E) {
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    }
                }
            } else {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                *(unsigned short *)((a4 + 0x1E)) = 0x0;
                t1 = (((struct oD0_int *)(a4))->v);
                { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x6C)) = *(struct mv3 *)((0x90 + t1)); }
                t1 = (((struct oD8_int *)(a4))->v);
                { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x6C)) = *(struct mv3 *)((0x90 + t1)); }
                t1 = (((struct oD4_int *)(a4))->v);
                { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x6C)) = *(struct mv3 *)((0x90 + t1)); }
                t1 = (((struct oDC_int *)(a4))->v);
                { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x6C)) = *(struct mv3 *)((0x90 + t1)); }
                t1 = (((struct oC8_int *)(a4))->v);
                { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x6C)) = *(struct mv3 *)((0x90 + t1)); }
                t1 = (((struct oCC_int *)(a4))->v);
                { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x6C)) = *(struct mv3 *)((0x90 + t1)); }
                u0 = (((float)(*(short *)((a4 + 0x1E))) * 90.0f) / 30.0f);
                (((struct o7C_uint *)(((((struct oCC_int *)(a4))->v))))->v) = ((int)((((u0 * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF);
                t1 = *(short *)((a4 + 0x1E));
                *(unsigned short *)((a4 + 0x1E)) = (t1 + 0x1);
                if ((int)(short)(t1 + 0x1) > (int)0x1E) {
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                }
            }
            return;
        }
        if (t0 == 13) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            (((struct o15_uchar *)(a4))->v) = 0x0;
            t1 = *(signed char *)((a4 + 0x15));
            if (t1 != 0) {
                if (t1 != 1) {
                } else {
                    u0 = (-(((float)(*(short *)((a4 + 0x1E))) * 90.0f) / 30.0f));
                    (((struct o7C_uint *)(((((struct oCC_int *)(a4))->v))))->v) = ((int)(((((u0 + 90.0f) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF);
                    t1 = *(short *)((a4 + 0x1E));
                    *(unsigned short *)((a4 + 0x1E)) = (t1 + 0x1);
                    if ((int)(short)(t1 + 0x1) > (int)0x1E) {
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    }
                }
            } else {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                *(unsigned short *)((a4 + 0x1E)) = 0x0;
                u0 = (-(((float)(*(short *)((a4 + 0x1E))) * 90.0f) / 30.0f));
                (((struct o7C_uint *)(((((struct oCC_int *)(a4))->v))))->v) = ((int)(((((u0 + 90.0f) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF);
                t1 = *(short *)((a4 + 0x1E));
                *(unsigned short *)((a4 + 0x1E)) = (t1 + 0x1);
                if ((int)(short)(t1 + 0x1) > (int)0x1E) {
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                }
            }
            return;
        }
        if (t0 == 14) {
            t1 = *(signed char *)((a4 + 0x15));
            if (t1 != 0) {
                if (t1 != 1) {
                } else {
                    u0 = (-(((float)(*(short *)((a4 + 0x1E))) * 90.0f) / 30.0f));
                    (((struct o7C_uint *)(((((struct oCC_int *)(a4))->v))))->v) = ((int)(((((u0 + 90.0f) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF);
                    t1 = *(short *)((a4 + 0x1E));
                    *(unsigned short *)((a4 + 0x1E)) = (t1 + 0x1);
                    if ((int)(short)(t1 + 0x1) > (int)0x1E) {
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    }
                }
            } else {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                *(unsigned short *)((a4 + 0x1E)) = 0x0;
                u0 = (-(((float)(*(short *)((a4 + 0x1E))) * 90.0f) / 30.0f));
                (((struct o7C_uint *)(((((struct oCC_int *)(a4))->v))))->v) = ((int)(((((u0 + 90.0f) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF);
                t1 = *(short *)((a4 + 0x1E));
                *(unsigned short *)((a4 + 0x1E)) = (t1 + 0x1);
                if ((int)(short)(t1 + 0x1) > (int)0x1E) {
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                }
            }
            return;
        }
        if (t0 == 10) {
            FUN_0c03f346(a4, a5, a6, a7);
    return;
        }
        switch (t0) {
        case 20:
            (((struct o14_uchar *)(a4))->v) = 0x0;
            (((struct oA8_uchar *)(a4))->v) = 0x1;
            break;
        case 30:
            (((struct oA8_uchar *)(a4))->v) = 0x0;
            break;
        case 99:
            (((struct o14_uchar *)(a4))->v) = 0xA;
            break;
        }
        return;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    *(unsigned short *)((a4 + 0x1C)) = 0x0;
    FUN_0c03733c(a4, 0x14, (*(int *)0xC4B410C));
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct oAC_ushort *)(a4))->v) = 0x1F;
    (((struct oA9_uchar *)(a4))->v) = 0x21;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x40)) = *(struct mv3 *)(0xC2A0C84); }
    t0 = (((struct oC4_int *)(a4))->v);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x90 + t0)) = *(struct mv3 *)((t0 + 0x6C)); }
    t0 = (((struct oC8_int *)(a4))->v);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x90 + t0)) = *(struct mv3 *)((t0 + 0x6C)); }
    t0 = (((struct oCC_int *)(a4))->v);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x90 + t0)) = *(struct mv3 *)((t0 + 0x6C)); }
    t0 = (((struct oD0_int *)(a4))->v);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x90 + t0)) = *(struct mv3 *)((t0 + 0x6C)); }
    t0 = (((struct oD8_int *)(a4))->v);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x90 + t0)) = *(struct mv3 *)((t0 + 0x6C)); }
    t0 = (((struct oD4_int *)(a4))->v);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x90 + t0)) = *(struct mv3 *)((t0 + 0x6C)); }
    t0 = (((struct oDC_int *)(a4))->v);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x90 + t0)) = *(struct mv3 *)((t0 + 0x6C)); }
}
