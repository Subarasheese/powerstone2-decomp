/* Straight-line functions with calls and guards (batch gen_ev): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
struct o0_int { int v; };
struct o10_float { char p[0x10]; float v; };
struct o10_int { char p[0x10]; int v; };
struct o126_uchar { char p[0x126]; unsigned char v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o135_uchar { char p[0x135]; unsigned char v; };
struct o14_float { char p[0x14]; float v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o168_float { char p[0x168]; float v; };
struct o17C_float { char p[0x17C]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o18_int { char p[0x18]; int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1C_int { char p[0x1C]; int v; };
struct o20_float { char p[0x20]; float v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o24_short { char p[0x24]; short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o404_int { char p[0x404]; int v; };
struct o41C_uchar { char p[0x41C]; unsigned char v; };
struct o420_ushort { char p[0x420]; unsigned short v; };
struct o422_uchar { char p[0x422]; unsigned char v; };
struct o423_uchar { char p[0x423]; unsigned char v; };
struct o424_uchar { char p[0x424]; unsigned char v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA4_int { char p[0xA4]; int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB4_float { char p[0xB4]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c037498(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int, int);
int FUN_0c042fe0(void);
int FUN_0c0588bc(int, int, int, int, int, int);
int FUN_0c058a6e(int, int, int, int, int, int);
int FUN_0c059df2(int, int);
int FUN_0c059e0e(int, int, int);
int FUN_0c0600c0(int, float, float, float, float);
int FUN_0c060c80(int, int, int);
int FUN_0c0612ee(int);
int FUN_0c061416(int, int, int, int);
int FUN_0c0c212c(int);
extern int FUN_0c0c2ab6();
int FUN_0c0c2d56(int, int, int);
int FUN_0c0c3e3a(int);
extern int FUN_0c0c4c1c();
extern int FUN_0c0c5024();
extern int FUN_0c0c8c08();
int FUN_0c0d04c4(int, int);
int FUN_0c0d522c(int);
int FUN_0c0d52aa(int, int, int);
int FUN_0c0d5328(void);
extern int FUN_0c0d532c();
int FUN_0c10caec(int);
int FUN_0c1171f0(int);
int FUN_0c1363a4(int);
int FUN_0c145d1c(int, int);
extern int FUN_0c150010();
int FUN_0c17b1a0(int);
extern float FUN_0c17c450();
int FUN_0c17d6d0(float);
int FUN_0c17e390(int);
int math_atan2_angle16(float, float);
int math_atan_angle16(float);
float math_cos_angle16(int);
float math_interval_overlap(Stk3, float, float, float, float, float, float, float);
int math_mat_get_translate(int, int);
float math_signed_sqrt(float);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int nlAddVector3op(int, int, int);
int nlCalcPoint(int, int);
float nlInnerProduct(int, int);
int nlInvertMatrix(int);
int nlRand(void);
int nlRotateAY(int);
int nlScaleV(int);
int nlSubVector3op(int, int, int);
int nlTranslateV(int);
int nlUnitMatrix(void);
int thunk_FUN_0c058310(int, int);
int thunk_FUN_0c05abb2(int, int);
int FUN_0c02de40(int a4, int a5, int a6);
int FUN_0c1464ce(int a4, int a5, int a6, int a7);
int FUN_0c0d859c(int a4, int a5, int a6, int a7);
int FUN_0c0dd1b0(int a4, int a5, int a6, int a7);
int FUN_0c126406(int a4, int a5, int a6, int a7);
int FUN_0c13648e(int a4, int a5, int a6, int a7);
int FUN_0c0f4cec(int a4, int a5, int a6, int a7);
void FUN_0c10d458(int a4, int a5, int a6, int a7);
int FUN_0c1612a4(int a4, int a5, int a6, int a7);
int FUN_0c15046c(int a4, int a5, int a6, int a7);
int FUN_0c13d9e4(int a4, int a5, int a6, int a7);
float FUN_0c143608(int a4, int a5, int a6);
int FUN_0c124580(int a4, int a5, int a6, int a7);
int FUN_0c11c0b0(int a4, int a5, int a6, int a7);
int FUN_0c063448(int a4, int a5, int a6, float f4, float f5, float f6, float f7, float f8, float f9, float f10);
struct o1C_short { char p[0x1C]; short v; };
struct o1C_ushort { char p[0x1C]; unsigned short v; };
struct o1E_short { char p[0x1E]; short v; };
struct o1E_ushort { char p[0x1E]; unsigned short v; };
struct o38_int { char p[0x38]; int v; };


int FUN_0c02de40(int a4, int a5, int a6)
{
    int stk[14];
    int R1000;
    float u10;
    float u11;
    float u12;
    float u13;
    int t8;
    int t9;
    int t52;
    int t53;
    int t67;
    int t51;
    float u71;
    int R1004;
    float u44;
    float u26;
    float u24;
    float u54;
    float u21;
    float u18;

    R1000 = *(int *)((int)stk + 0);
    R1004 = *(int *)((int)stk + 4);

    R1004 = (0x38F8 + a4);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x14)) = *(struct mv3 *)(a4 + 0x28); }
    if (!(((((struct o17C_float *)(a4))->v)) > 0.0f)) {
        *(float *)(((int)stk + 24)) = ((((struct o168_float *)(a4))->v));
    }
    R1000 = ((((struct o38_int *)(a4))->v));
    FUN_0c17b1a0(a4 + 0x64);
    nlInvertMatrix(0x0);
    t8 = 0x0;
    t9 = 0xC1A9020;
    u10 = 1000000.0f;
    u11 = 1000000.0f;
    u12 = -1000000.0f;
    u13 = -1000000.0f;
    for (;;) {
        math_mat_get_translate(((*(int *)(((((*(int *)(t9)) << 2) + (0xC4 + a4)) + 0x0))) + 0x28), (((int)stk + 0) + 0x20));
        nlCalcPoint((((int)stk + 0) + 0x20), (((int)stk + 0) + 0x2C));
        u18 = *(float *)(((int)stk + 44));
        if (u18 > u13) {
            u13 = u18;
        }
        if (u11 > u18) {
            u11 = u18;
        }
        u21 = *(float *)(((int)stk + 52));
        if (u21 > u12) {
            u12 = u21;
        }
        t8 = (t8 + 0x1);
        if (u10 > u21) {
            u10 = u21;
        }
        t9 = (t9 + 0x4);
        if ((unsigned int)t8 >= (unsigned int)0x4) {
            break;
        }
    }
    u24 = (-u11);
    if (u13 > (-u11)) {
        u24 = u13;
    }
    u26 = (-u10);
    if (u12 > (-u10)) {
        u26 = u12;
    }
    *(float *)(((int)stk + 8)) = (u24 * 1.29999995f);
    *(float *)(((int)stk + 16)) = (u26 * 1.29999995f);
    *(float *)(((int)stk + 12)) = 4.0f;
    if (15.0f > (*(float *)(((int)stk + 8)))) {
        *(float *)(((int)stk + 8)) = 15.0f;
    }
    if (15.0f > (*(float *)(((int)stk + 16)))) {
        *(float *)(((int)stk + 16)) = 15.0f;
    }
    *(float *)(((int)stk + 8)) = ((*(float *)(((int)stk + 8))) / 100.0f);
    *(float *)(((int)stk + 16)) = ((*(float *)(((int)stk + 16))) / 100.0f);
    nlUnitMatrix();
    nlTranslateV((((int)stk + 0) + 0x14));
    nlRotateAY((R1000));
    nlScaleV((((int)stk + 0) + 0x8));
    if ((*(float *)(((int)stk + 8))) > (*(float *)(((int)stk + 16)))) {
        u44 = (*(float *)(((int)stk + 8)));
    } else {
        u44 = (*(float *)(((int)stk + 16)));
    }
    FUN_0c17d6d0(u44);
    FUN_0c17e390((*(int *)0xC542458));
    nlUnitMatrix();
    *(float *)(((int)stk + 8)) = (1.0f + 1.0f);
    *(float *)(((int)stk + 16)) = (1.0f + 1.0f);
    *(float *)(((int)stk + 12)) = 4.0f;
    R1000 = 0x0;
    t52 = 0xC1A9020;
    t53 = (R1004);
    u54 = (1.0f + 1.0f);
    for (;;) {
        t67 = 0x1B;
        if ((int)(*(signed char *)(((*(int *)(t53)) + 0x1B))) < (int)0x2) {
            math_mat_get_translate(((*(int *)(((((*(int *)(t52)) << 2) + (0xC4 + a4)) + 0x0))) + 0x28), (((int)stk + 0) + 0x14));
            nlUnitMatrix();
            nlTranslateV((((int)stk + 0) + 0x14));
            nlScaleV((((int)stk + 0) + 0x8));
            u54 = (*(float *)(((int)stk + 8)));
            FUN_0c17d6d0(u54);
            t67 = (FUN_0c17e390((*(int *)0xC542458)));
        } else {
            u71 = u54;
        }
        u54 = u71;
        t52 = (t52 + 0x4);
        t51 = ((R1000) + 0x1);
        R1000 = t51;
        t53 = (t53 + 0x4);
        if ((unsigned int)t51 >= (unsigned int)0x4) {
            break;
        }
    }
    return t67;
}



int FUN_0c0dd1b0(int a4, int a5, int a6, int a7)
{

    int v0_0;
    int v0_3;
    int v0_2;
    int v0_1;
    float w0_0;
    int v0_4;
    float F15;
    int FPUL_;
    int R10;
    float F2;
    float F3;
    int T_;
    int R11;
    int R3;
    int R2;
    int R1;
    int R5;
    int v0_5;
    v0_1 = a4;
    v0_0 = R10;
    v0_2 = (*(signed char *)0xC54223C) == 0;
    v0_0 = (v0_1);
    if (v0_2) goto L_C0DD1DC;
    return FUN_0c03f346(v0_0, R5, a6, a7);
    L_C0DD1DC:;
    v0_2 = *(signed char *)(v0_0 + 0x14);
    v0_3 = (v0_2);
    v0_1 = (0x0);
    if ((v0_2 == 0)) goto L_C0DD1EE;
    if ((v0_3 == 1)) goto L_C0DD244;
    L_C0DD3B2:;
    return v0_3;
    L_C0DD244:;
    v0_2 = FUN_0c042fe0();
    v0_3 = (v0_2);
    if ((v0_2 != 0)) goto L_C0DD252;
    goto L_C0DD3B2;
    L_C0DD252:;
    v0_4 = *(signed char *)(v0_0 + 0x15);
    v0_3 = (v0_4);
    v0_2 = (0xC540978);
    F15 = (4.0f);
    if ((v0_4 == 0)) goto L_C0DD278;
    if ((v0_3 == 1)) goto L_C0DD288;
    if ((v0_3 == 2)) goto L_C0DD2C4;
    if ((v0_3 == 3)) goto L_C0DD324;
    if ((v0_3 != 4)) goto L_C0DD274;
    (((struct o2C_float *)(v0_0))->v) = (((((struct o2C_float *)(v0_0))->v)) - 15.0f);
    v0_2 = (int)(*(signed char *)(v0_2 + 0x15)) < (int)0x8;
    v0_3 = (0x15);
    FPUL_ = (0x41700000);
    if (v0_2) goto L_C0DD3B2;
    *(unsigned char *)((v0_0 + v0_3)) = v0_1;
    goto L_C0DD3B2;
    L_C0DD274:;
    goto L_C0DD3B2;
    L_C0DD324:;
    (((struct o1C_ushort *)(v0_0))->v) = (((((struct o1C_short *)(v0_0))->v)) + 0x1);
    (((struct o20_ushort *)(v0_0))->v) = (((((struct o20_short *)(v0_0))->v)) - 1);
    v0_4 = (((struct o1E_short *)(v0_0))->v);
    w0_0 = ((((struct o5C_float *)(v0_0))->v));
    w0_0 = w0_0 + (((float)v0_4 / F15)) * (math_cos_angle16((((((struct o1C_short *)(v0_0))->v)) << 13)));
    (((struct o2C_float *)(v0_0))->v) = w0_0;
    v0_5 = (int)((((struct o20_short *)(v0_0))->v)) > 0;
    v0_3 = (0x20);
    w0_0 = (((float)v0_4 / F15));
    FPUL_ = (v0_4);
    if (v0_5) goto L_C0DD3B2;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)(v0_0 + 0x15)) + 0x1);
    v0_3 = ((int)((int)(*(signed char *)(v0_0 + 0x2)) % (int)0x3)) != 0;
    if (v0_3) goto L_C0DD37E;
    thunk_FUN_0c05abb2(0x42, (v0_0 + 0x28));
    L_C0DD37E:;
    v0_0 = *(signed char *)(v0_0 + 0x2);
    v0_3 = (v0_0);
    if ((v0_0 != 8)) goto L_C0DD3B2;
    v0_0 = *(signed char *)0xC54098D;
    v0_3 = (v0_0);
    if ((v0_0 != 5)) goto L_C0DD3B2;
    (((struct o15_uchar *)(v0_2))->v) = 0x6;
    *(unsigned char *)0xC542235 = v0_1;
    v0_3 = (0x15);
    goto L_C0DD3B2;
    L_C0DD2C4:;
    (((struct o1C_ushort *)(v0_0))->v) = (((((struct o1C_short *)(v0_0))->v)) + 0x1);
    (((struct o1E_ushort *)(v0_0))->v) = (((((struct o1E_short *)(v0_0))->v)) + 0x1);
    v0_3 = (int)((((struct o1E_short *)(v0_0))->v)) <= (int)0x28;
    v0_1 = (0x28);
    if (v0_3) goto L_C0DD2DE;
    (((struct o1E_ushort *)(v0_0))->v) = v0_1;
    L_C0DD2DE:;
    v0_1 = (((struct o1E_short *)(v0_0))->v);
    w0_0 = ((((struct o5C_float *)(v0_0))->v));
    w0_0 = w0_0 + (((float)v0_1 / F15)) * (math_cos_angle16((((((struct o1C_short *)(v0_0))->v)) << 13)));
    (((struct o2C_float *)(v0_0))->v) = w0_0;
    v0_2 = *(signed char *)(v0_2 + 0x15);
    v0_3 = (v0_2);
    w0_0 = (((float)v0_1 / F15));
    FPUL_ = (v0_1);
    if ((v0_2 != 5)) goto L_C0DD3B2;
    v0_1 = *(signed char *)(v0_0 + 0x2);
    (((struct o20_ushort *)(v0_0))->v) = (((v0_1 << 2) << 2) - v0_1);
    L_C0DD31A:;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)(v0_0 + 0x15)) + 0x1);
    v0_3 = (0x15);
    goto L_C0DD3B2;
    L_C0DD288:;
    v0_2 = *(signed char *)(v0_2 + 0x15);
    v0_3 = (v0_2);
    if ((v0_2 == 4)) goto L_C0DD294;
    goto L_C0DD3B2;
    L_C0DD294:;
    (((struct o1C_ushort *)(v0_0))->v) = (*(signed char *)(v0_0 + 0x2));
    (((struct o1E_ushort *)(v0_0))->v) = v0_1;
    goto L_C0DD31A;
    L_C0DD278:;
    (((struct o2C_float *)(v0_0))->v) = ((((struct o5C_float *)(v0_0))->v));
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)(v0_0 + 0x15)) + 0x1);
    goto L_C0DD288;
    L_C0DD1EE:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)(v0_0 + 0x14)) + 0x1);
    (((struct o15_uchar *)(v0_0))->v) = v0_1;
    (((struct oA8_uchar *)(v0_0))->v) = 0x1;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(v0_0 + 0x58) = *(struct mv3 *)(v0_0 + 0x28); }
    (((struct o1C_ushort *)(v0_0))->v) = v0_1;
    FUN_0c0d04c4((0xAC + v0_0), (v0_0 + 0x34));
    R10 = (0xC0D04C4);
    v0_2 = (v0_1);
    L_C0DD23C:;
    v0_3 = (int)v0_2 < (int)((((struct oC0_int *)(v0_0))->v));
    if (v0_3) goto L_C0DD224;
    goto L_C0DD244;
    L_C0DD224:;
    v0_3 = *(int *)((((v0_2 << 2) + (0xC4 + v0_0)) + 0x0));
    FUN_0c0d04c4((v0_3 + 0x6), (v0_3 + 0x78));
    v0_2 = (v0_2 + 0x1);
    goto L_C0DD23C;
}

int FUN_0c126406(int a4, int a5, int a6, int a7)
{

    register int R1;
    register int R2;
    register int R8;
    register int R10;
    register int R12;
    register int R13;
    register float F3;
    register float F4;
    register float F14;
    register float F15;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register float w0_0;
    v0_1 = a4;
    v0_0 = R8;
    v0_3 = *(signed char *)(((((short)(*(signed char *)((v0_1 + 0x1))) * (short)0x3938) + 0xC532498) + 0x15));
    v0_0 = (v0_1);
    v0_1 = (0xC532498);
    v0_2 = (v0_3);
    if ((v0_3 == 0)) goto L_C12642E;
    if ((v0_2 != 2)) goto L_C126450;
    L_C12642E:;
    v0_3 = (*(signed char *)((0x15 + (((short)(*(signed char *)((v0_0 + 0x1))) * (short)0x3938) + v0_1)))) == 2;
    v0_4 = (0x3938);
    if (v0_3) goto L_C126466;
    v0_1 = (*(signed char *)((0x3715 + (((short)(*(signed char *)((v0_0 + 0x1))) * (short)v0_4) + v0_1)))) == 26;
    if (v0_1) goto L_C126466;
    L_C126450:;
    (((struct oA8_uchar *)(v0_0))->v) = 0x0;
    return FUN_0c03f346(v0_0, v0_2, a6, a7);
    L_C126466:;
    v0_3 = *(signed char *)((v0_0 + 0x14));
    v0_1 = (v0_3);
    if ((v0_3 == 0)) goto L_C1264A4;
    if ((v0_1 == 1)) goto L_C1264AC;
    return FUN_0c03f346(v0_0, v0_2, a6, a7);
    L_C1264AC:;
    thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((v0_0 + 0x1))) * (short)0x3938) + 0xC53255C))) + 0x28), (v0_0 + 0x28));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_0 + 0x34)) = *(struct mv3 *)(((*(int *)((v0_0 + 0x10))) + 0x34)); }
    *(unsigned int *)((v0_0 + 0x38)) = ((*(int *)((v0_0 + 0x38))) + 0x4000);
    v0_1 = (((struct oC8_int *)(v0_0))->v);
    (((struct o7C_uint *)(v0_1))->v) = (((((struct o7C_int *)(v0_1))->v)) + 0x1555);
    v0_1 = (((struct oC4_int *)(v0_0))->v);
    (((struct o80_uint *)(v0_1))->v) = (((((struct o80_int *)(v0_1))->v)) + 0xE38);
    v0_2 = *(signed char *)((v0_0 + 0x15));
    v0_1 = (v0_2);
    F14 = (0.100000001f);
    if ((v0_2 == 0)) goto L_C126510;
    if ((v0_1 == 1)) goto L_C12651A;
    if ((v0_1 == 2)) goto L_C12652A;
    if ((v0_1 == 3)) goto L_C12659A;
    L_C12660C:;
    return v0_1;
    L_C12659A:;
    (((struct oB4_float *)(v0_0))->v) = (((((struct oB4_float *)(v0_0))->v)) - F14);
    v0_2 = !(0.0f > ((((struct oB4_float *)(v0_0))->v)));
    v0_1 = (0xB4);
    w0_0 = (0.0f);
    if (v0_2) goto L_C1265AC;
    *(float *)((v0_0 + v0_1)) = w0_0;
    L_C1265AC:;
    w0_0 = *(float *)((v0_0 + v0_1));
    *(float *)((v0_0 + (v0_1 + 0x8))) = w0_0;
    *(float *)((v0_0 + ((v0_1 + 0x8) - 4))) = w0_0;
    *(unsigned short *)((v0_0 + 0x1C)) = ((*(short *)((v0_0 + 0x1C))) - 1);
    v0_2 = *(short *)((v0_0 + 0x1C));
    v0_1 = (v0_2);
    if ((v0_2 != 0)) goto L_C12660C;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    v0_1 = (0x14);
    goto L_C12660C;
    L_C12652A:;
    *(unsigned short *)((v0_0 + 0x1C)) = ((*(short *)((v0_0 + 0x1C))) - 1);
    v0_1 = *(short *)((v0_0 + 0x1E));
    (((struct o8C_float *)(((((struct oC4_int *)(v0_0))->v))))->v) = (((float)((short)v0_1 - (*(short *)((v0_0 + 0x1C)))) / (float)(short)v0_1) * 0.5f);
    v0_1 = (((struct oC4_int *)(v0_0))->v);
    w0_0 = 0.5f;
    w0_0 = w0_0 + F14 * (math_sin_angle16(((*(short *)((v0_0 + 0x1C))) << 14)));
    (((struct o8C_float *)(v0_1))->v) = (((((struct o8C_float *)(v0_1))->v)) + w0_0);
    v0_1 = (((struct oC4_int *)(v0_0))->v);
    w0_0 = (((struct o8C_float *)(v0_1))->v);
    (((struct o88_float *)(v0_1))->v) = w0_0;
    (((struct o84_float *)(v0_1))->v) = w0_0;
    v0_2 = *(short *)((v0_0 + 0x1C));
    v0_1 = (v0_2);
    w0_0 = (F14);
    if ((v0_2 != 0)) goto L_C12660C;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    *(unsigned short *)((v0_0 + 0x1C)) = 0xA;
    v0_1 = (0xA);
    goto L_C12660C;
    L_C12651A:;
    (((struct oA8_uchar *)(v0_0))->v) = 0x1;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    goto L_C12652A;
    L_C126510:;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    v0_1 = (0x15);
    goto L_C12660C;
    L_C1264A4:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    goto L_C1264AC;
}




int FUN_0c1612a4(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    int t3;
    register int t4;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 == 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        return t0;
    }
    (((struct oA8_uchar *)(a4))->v) = 0x0;
    if ((*(short *)((a4 + 0x1C))) != ((((struct o24_short *)((*(int *)((a4 + 0x10)))))->v))) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t0 = 0x14;
    } else {
        t1 = *(signed char *)((a4 + 0x2));
        if (t1 != 0) {
            if (t1 != 1) {
                t0 = t1;
                if (t1 == 2) {
                    t1 = *(signed char *)((0x41D + (*(int *)((a4 + 0x10)))));
                    t3 = t1;
                    if (t1 == 9) {
                        t1 = *(short *)(((*(int *)((a4 + 0x10))) + 0x1C));
                        t4 = t1;
                        if ((int)t1 < (int)0x78) {
                            t1 = (int)((int)((-(*(short *)(((*(int *)((a4 + 0x10))) + 0x1C)))) + 0x78) / (int)0x28);
                            (((struct oA8_uchar *)(a4))->v) = 0x1;
                            FUN_0c037498(((((struct oC4_int *)(a4))->v)), 0x0, (*(int *)((0xC2A2E10 + (t1 << 2)))), (*(int *)0xC4B40D0));
                            if (t1 != (*(short *)((a4 + 0x1E)))) {
                                *(unsigned short *)((a4 + 0x1E)) = t1;
                                FUN_0c059df2((*(signed char *)((a4 + 0x1))), 0x25);
                            }
                            { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)(((*(int *)((a4 + 0x10))) + 0x28)); }
                            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 100.0f);
                            t4 = 0x2C;
                        }
                        t3 = t4;
                    }
                    t0 = t3;
                }
                t1 = t0;
            } else {
                t0 = 0x22;
                if ((int)((((struct o22_short *)((*(int *)((a4 + 0x10)))))->v)) < (int)0x258) {
                    t3 = *(signed char *)((0x41D + (*(int *)((a4 + 0x10)))));
                    t4 = t3;
                    if (t3 == 9) {
                        (((struct oA8_uchar *)(a4))->v) = 0x1;
                        t3 = (int)((int)(*(short *)(((*(int *)((a4 + 0x10))) + 0x1C))) / (int)0x3C);
                        FUN_0c037498(((((struct oC4_int *)(a4))->v)), 0x0, (*(int *)((0xC2A2E10 + (t3 << 2)))), (*(int *)0xC4B40D0));
                        if (t3 != (*(short *)((a4 + 0x1E)))) {
                            *(unsigned short *)((a4 + 0x1E)) = t3;
                            FUN_0c059df2((*(signed char *)((a4 + 0x1))), 0x25);
                        }
                        math_mat_get_translate(((((struct oA4_int *)((*(int *)((a4 + 0x10)))))->v)), (a4 + 0x28));
                        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 60.0f);
                        t4 = 0x2C;
                    }
                    t0 = t4;
                }
                t1 = t0;
            }
            t0 = t1;
        } else {
            t1 = 0x22;
            if ((int)((((struct o22_short *)((*(int *)((a4 + 0x10)))))->v)) >= (int)0x258) {
            } else {
                t3 = *(signed char *)(((*(int *)((a4 + 0x10))) + 0x41D));
                t4 = t3;
                if ((t3 != 2) && ((t3 != 4) && (t3 != 5))) {
                } else {
                    (((struct oA8_uchar *)(a4))->v) = 0x1;
                    t3 = (int)((int)((((struct o22_short *)((*(int *)((a4 + 0x10)))))->v)) / (int)0x3C);
                    FUN_0c037498(((((struct oC4_int *)(a4))->v)), 0x0, (*(int *)((0xC2A2E10 + (t3 << 2)))), (*(int *)0xC4B40D0));
                    if (t3 != (*(short *)((a4 + 0x1E)))) {
                        *(unsigned short *)((a4 + 0x1E)) = t3;
                        FUN_0c059df2((*(signed char *)((a4 + 0x1))), 0x25);
                    }
                    math_mat_get_translate(((*(int *)((a4 + 0x10))) + 0x64), (a4 + 0x28));
                    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 100.0f);
                    t4 = 0x2C;
                }
                t1 = t4;
            }
            t0 = t1;
        }
    }
    return t0;
}

int FUN_0c15046c(int a4, int a5, int a6, int a7)
{
    int t0;
    int t2;
    int t3;
    int t4;
    int t1;
    int t5;
    int t6;
    float u0;
    float u1;
    float u2;
    float u3;

    t0 = *(signed char *)(a4 + 0x14);
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x14)) + 0x1);
                return FUN_0c03f346(a4, a5, a6, a7);
            }
            if (t0 == 3) {
                return FUN_0c03f346(a4, a5, a6, a7);
            }
            return t0;
        }
        t0 = a4;
        t1 = 0x0;
        t2 = 0x0;
        for (;;) {
            if ((int)t2 >= (int)((((struct oC0_int *)(a4))->v))) {
                break;
            }
            t3 = (*(int *)((((t2 << 2) + (0xC4 + a4)) + 0x0)));
            t4 = (*(signed char *)(t3));
            if (t4 != 0) {
                t1 = (t1 + 0x1);
                nlAddVector3op((0x90 + t3), (0x90 + t3), (0x9C + t3));
                t0 = (t3 + 0x6C);
                nlAddVector3op(t0, (t3 + 0x6C), (0x90 + t3));
                t4 = ((*(signed char *)(((((0x41C + a4) + 0x8) + t2) + 0x0))) - 1);
                *(unsigned char *)(((((0x41C + a4) + 0x8) + t2) + 0x0)) = t4;
                t4 = (signed char)t4;
                if (t4 == 0) {
                    t5 = (((0x41C + a4) + 0x8) + t2);
                    *(unsigned char *)(t5) = 0x4;
                    t0 = t3;
                    FUN_0c037498(t0, (*(signed char *)((((0x41C + a4) + t2) + 0x0))), 0x7, (*(int *)((0xC4B40CC + 0x0))));
                    t4 = ((0x41C + a4) + t2);
                    t6 = *(signed char *)(t4);
                    *(unsigned char *)(t4) = (t6 + 0x1);
                    t4 = 0xA;
                    if ((int)(signed char)(t6 + 0x1) >= (int)t4) {
                        *(unsigned char *)(t3) = 0x0;
                    }
                }
                t6 = *(signed char *)((((0x41C + a4) + t2) + 0x0));
                t4 = 0x5;
                if ((int)t6 >= (int)t4) {
                    t5 = ((0x41C + a4) + t2);
                    u0 = ((-((float)(*(signed char *)(t5)))) + 15.0f);
                    u1 = ((((float)(*(signed char *)(((((0x41C + a4) + 0x8) + t2) + 0x0)))) + 4.0f * u0) / 32.0f);
                    (((struct o14_float *)(t3))->v) = u1;
                    t4 = t5;
                    u2 = u1;
                    u3 = u0;
                }
                t5 = t4;
                u1 = 64.0f;
                u0 = ((((((float)(*(signed char *)((((0x41C + a4) + t2) + 0x0)))) * 4.0f) - ((float)(*(signed char *)(((((0x41C + a4) + 0x8) + t2) + 0x0))))) + 4.0f) / u1);
                u2 = ((((((struct o10_float *)((0x41C + a4)))->v)) + u0) * 0.800000012f);
                (((struct o8C_float *)(t3))->v) = u2;
                (((struct o88_float *)(t3))->v) = u2;
                (((struct o84_float *)(t3))->v) = u2;
            } else {
                t3 = t0;
            }
            t2 = (t2 + 0x1);
            t0 = t3;
        }
        t0 = 0xC0;
        if (t1 == 0) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x14)) + 0x1);
            t0 = 0x14;
        }
        return t0;
    }
    t0 = *(signed char *)(a4 + 0x14);
    (((struct o14_uchar *)(a4))->v) = (t0 + 0x1);
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    t1 = (t0 + 0x1);
    t0 = 0x0;
    t2 = a6;
    for (;;) {
        if ((int)t0 >= (int)((((struct oC0_int *)(a4))->v))) {
            break;
        }
        *(unsigned char *)((((0x41C + a4) + t0) + 0x0)) = 0x1;
        t2 = (t0 << 2);
        *(unsigned char *)(((((0x41C + a4) + 0x8) + t0) + 0x0)) = 0x1;
        *(unsigned char *)(((*(int *)((((0xC4 + a4) + t2) + 0x0))) + 0x0)) = 0x1;
        t1 = 0xC18778C;
        t3 = ((*(int *)((((0xC4 + a4) + t2) + 0x0))) + 0x14);
        { struct mv4 { int w[4]; }; *(struct mv4 *)(t3) = *(struct mv4 *)(0xC202D74); }
        t0 = (t0 + 0x1);
    }
    return 0xC0;
}

int FUN_0c13d9e4(int a4, int a5, int a6, int a7)
{
    int stk[4];
    register int t0;
    register int t48;
    register int t3;
    register int t17;
    register int t31;
    register int t45;
    int R1000;
    int R1004;
    int R1008;
    int R1012;

    R1000 = *(int *)((int)stk + 0);
    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);
    R1012 = *(int *)((int)stk + 12);

    R1012 = 0x8;
    t0 = FUN_0c03f444(0x5, 0x1, 0x8, a7);
    t48 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)((a4 + 0x28)); }
        *(unsigned char *)((t0 + 0x2)) = (*(signed char *)((a4 + 0x2)));
        *(unsigned int *)((t0 + 0x4)) = 0xC13D834;
        *(unsigned int *)((t0 + 0x10)) = a4;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x40)) = *(struct mv3 *)((a4 + 0x40)); }
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        R1004 = 0xC2A2178;
        R1000 = 0x0;
        t3 = 0x0;
        for (;;) {
            FUN_0c037498((*(int *)((((0xC4 + t0) + t3) + 0x0))), 0x1, 0x8, (*(int *)((0xC4B40FC + ((*(signed char *)((t0 + 0x1))) << 2)))));
            *(unsigned char *)(((*(int *)((((0xC4 + t0) + t3) + 0x0))) + 0x0)) = 0x1;
            *(unsigned short *)(((*(int *)((((0xC4 + t0) + t3) + 0x0))) + 0x6)) = 0xF;
            (((struct o80_uint *)((*(int *)((((0xC4 + t0) + t3) + 0x0)))))->v) = (R1000);
            math_vec3_accumulate(((*(int *)((((0xC4 + t0) + t3) + 0x0))) + 0x6C), (R1004));
            t3 = (t3 + 0x4);
            R1004 = ((R1004) + 0xC);
            R1000 = ((R1000) + 0x8000);
            if ((unsigned int)t3 >= (unsigned int)0x8) {
                break;
            }
        }
        R1000 = 0xC2A2190;
        R1004 = 0xE38;
        t17 = 0x8;
        for (;;) {
            FUN_0c037498((*(int *)((((0xC4 + t0) + t17) + 0x0))), 0x2, 0x8, (*(int *)((0xC4B40FC + ((*(signed char *)((t0 + 0x1))) << 2)))));
            *(unsigned char *)(((*(int *)((((0xC4 + t0) + t17) + 0x0))) + 0x0)) = 0x1;
            *(unsigned short *)(((*(int *)((((0xC4 + t0) + t17) + 0x0))) + 0x6)) = 0xF;
            (((struct o80_uint *)((*(int *)((((0xC4 + t0) + t17) + 0x0)))))->v) = (R1004);
            math_vec3_accumulate(((*(int *)((((0xC4 + t0) + t17) + 0x0))) + 0x6C), (R1000));
            t17 = (t17 + 0x4);
            R1000 = ((R1000) + 0xC);
            R1004 = ((R1004) + 0x71C);
            if ((unsigned int)t17 >= (unsigned int)0x14) {
                break;
            }
        }
        R1008 = 0x5;
        R1004 = 0xC2A21B4;
        R1000 = 0x238C;
        t31 = 0x14;
        for (;;) {
            FUN_0c037498((*(int *)((((0xC4 + t0) + t31) + 0x0))), 0x3, 0x8, (*(int *)((0xC4B40FC + ((*(signed char *)((t0 + 0x1))) << 2)))));
            *(unsigned char *)(((*(int *)((((0xC4 + t0) + t31) + 0x0))) + 0x0)) = 0x1;
            *(unsigned short *)(((*(int *)((((0xC4 + t0) + t31) + 0x0))) + 0x6)) = 0xF;
            (((struct o80_uint *)((*(int *)((((0xC4 + t0) + t31) + 0x0)))))->v) = (R1000);
            math_vec3_accumulate(((*(int *)((((0xC4 + t0) + t31) + 0x0))) + 0x6C), (R1004));
            R1008 = ((R1008) + 0x1);
            R1004 = ((R1004) + 0xC);
            t45 = R1000;
            R1000 = (t45 + 0x71C);
            t31 = (t31 + 0x4);
            if ((int)(R1008) >= (int)(R1012)) {
                break;
            }
        }
        t48 = (t45 + 0x71C);
    }
    return t48;
}


int FUN_0c124580(int a4, int a5, int a6, int a7)
{

    register int R1;
    register int R2;
    register int R6;
    register int R10;
    register int R11;
    register int R12;
    register float F2;
    register float F3;
    register float F4;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register float w0_0;
    register float w0_1;
    v0_0 = a4;
    v0_3 = *(signed char *)((v0_0 + 0x15));
    v0_2 = (v0_3);
    v0_1 = (0xE38);
    if ((v0_3 == 0)) goto L_C1245B8;
    if ((v0_2 != 1)) goto L_C124594;
    *(unsigned int *)((v0_0 + 0x38)) = ((*(int *)((v0_0 + 0x38))) + v0_1);
    v0_1 = (((struct oC4_int *)(v0_0))->v);
    w0_0 = (((struct o18_float *)(v0_1))->v);
    (((struct o18_float *)(v0_1))->v) = (w0_0 - 0.0299999993f);
    (((struct o20_float *)(v0_1))->v) = (w0_0 - 0.0299999993f);
    (((struct o1C_float *)(v0_1))->v) = (w0_0 - 0.0299999993f);
    w0_0 = (((struct o18_float *)(v0_1))->v);
    v0_2 = (0x18);
    w0_1 = (w0_0);
    FPUL_ = (0x3CF5C28F);
    if ((w0_0 > 0.0f)) goto L_C124776;
    L_C124766:;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    v0_2 = (0x15);
    L_C124776:;
    return v0_2;
    L_C124594:;
    if ((v0_2 != 2)) goto L_C12459C;
    return FUN_0c03f346(v0_0, v0_1, R6, a7);
    L_C12459C:;
    goto L_C124776;
    L_C1245B8:;
    if (((int)(*(short *)((v0_0 + 0x1C))) <= (int)0xB4)) goto L_C1245C4;
    goto L_C124766;
    L_C1245C4:;
    if (((*(signed char *)((0x3715 + (*(int *)((v0_0 + 0x10)))))) == 26)) goto L_C1245D2;
    goto L_C124766;
    L_C1245D2:;
    if (((*(signed char *)((0x375A + (*(int *)((v0_0 + 0x10)))))) == 1)) goto L_C1245EA;
    if (((*(signed char *)((0x375A + (*(int *)((v0_0 + 0x10)))))) == 4)) goto L_C1245EA;
    goto L_C124766;
    L_C1245EA:;
    v0_2 = (0x15);
    if (((int)(*(signed char *)(((*(int *)((v0_0 + 0x10))) + 0x15))) <= (int)0x2)) goto L_C1245FA;
    goto L_C124766;
    L_C1245FA:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_0 + 0x28)) = *(struct mv3 *)(((*(int *)((v0_0 + 0x10))) + 0x28)); }
    (((struct o2C_float *)(v0_0))->v) = (((((struct o2C_float *)(v0_0))->v)) + 250.0f);
    *(unsigned int *)((v0_0 + 0x38)) = ((*(int *)((v0_0 + 0x38))) + v0_1);
    v0_3 = *(signed char *)((v0_0 + 0x2));
    v0_2 = (v0_3);
    FPUL_ = (0x437A0000);
    if ((v0_3 == 0)) goto L_C12462E;
    if ((v0_2 == 1)) goto L_C12463A;
    if (!((v0_2 == 2))) goto L_C124668;
    v0_2 = (0xC2A0F20);
    v0_1 = ((((*(short *)((v0_0 + 0x1E))) << 2) << 2));
    goto L_C124666;
    L_C124668:;
    if (((int)(*(short *)((v0_0 + 0x1C))) < (int)(*(int *)((v0_1 + 0x0))))) goto L_C124678;
    *(unsigned short *)((v0_0 + 0x1E)) = ((*(short *)((v0_0 + 0x1E))) + 0x1);
    v0_1 = ((v0_1 + 0x10));
    L_C124678:;
    if (((*(int *)((v0_1 + 0x0))) == 0x3E7)) goto L_C124734;
    v0_2 = *(short *)((v0_0 + 0x1C));
    R6 = (((((struct oC4_int *)(v0_0))->v)));
    FPUL_ = (v0_2);
    if ((((float)(*(int *)((v0_1 + 0x0))) - (float)v0_2) == 0.0f)) goto L_C12470A;
    (((struct o84_float *)(R6))->v) = (((((struct o84_float *)(R6))->v)) + ((((((struct o4_float *)(v0_1))->v)) - ((((struct o84_float *)(R6))->v))) / (float)((*(int *)((v0_1 + 0x0))) - (*(short *)((v0_0 + 0x1C))))));
    (((struct o88_float *)(R6))->v) = (((((struct o88_float *)(R6))->v)) + ((((((struct o8_float *)(v0_1))->v)) - ((((struct o88_float *)(R6))->v))) / (float)((*(int *)((v0_1 + 0x0))) - (*(short *)((v0_0 + 0x1C))))));
    v0_2 = *(short *)((v0_0 + 0x1C));
    v0_3 = *(int *)((v0_1 + 0x0));
    (((struct o8C_float *)(R6))->v) = (((((struct o8C_float *)(R6))->v)) + ((((((struct oC_float *)(v0_1))->v)) - ((((struct o8C_float *)(R6))->v))) / (float)(v0_3 - v0_2)));
    FPUL_ = ((v0_3 - v0_2));
    L_C124734:;
    v0_1 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_1 + 0x1);
    v0_2 = ((v0_1 + 0x1));
    goto L_C124776;
    L_C12470A:;
    (((struct o84_float *)(R6))->v) = (((((struct o84_float *)(R6))->v)) + ((((struct o4_float *)(v0_1))->v)));
    (((struct o88_float *)(R6))->v) = (((((struct o88_float *)(R6))->v)) + ((((struct o8_float *)(v0_1))->v)));
    (((struct o8C_float *)(R6))->v) = (((((struct o8C_float *)(R6))->v)) + ((((struct oC_float *)(v0_1))->v)));
    goto L_C124734;
    L_C124666:;
    v0_1 = ((v0_1 + v0_2));
    goto L_C124668;
    L_C12463A:;
    v0_2 = (0xC2A0EF0);
    v0_1 = ((((*(short *)((v0_0 + 0x1E))) << 2) << 2));
    goto L_C124666;
    L_C12462E:;
    v0_2 = (0xC2A0EC0);
    v0_1 = ((((*(short *)((v0_0 + 0x1E))) << 2) << 2));
    goto L_C124666;
}


int FUN_0c063448(int a4, int a5, int a6, float f4, float f5, float f6, float f7, float f8, float f9, float f10)
{
    int stk[9];
    int t150;
    float u45;
    float u0;
    float u1;
    float u8;
    int t24;
    float u65;
    float u47;
    float u46;
    float u7;
    float u6;
    float u3;
    float u2;
    float u109;
    float u82;
    float u16;
    float u15;
    float u14;
    float u13;
    float u11;
    float u4;
    float u64;
    float u9;

    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)(0xC1C4B54); }
    u0 = (((struct o8_float *)(a4))->v);
    u1 = (((struct o8_float *)(a6))->v);
    u2 = (((struct oC_float *)(a4 + 0x8))->v);
    u3 = (((struct oC_float *)(a6 + 0x8))->v);
    u4 = (u0 - u1);
    if (0.0f > (u0 - u1)) {
        u4 = ((-u0) + u1);
    }
    (((struct o18_float *)(((int)stk + 0)))->v) = ((u3 + u2) - u4);
    u6 = (((struct oC_float *)(a4 + 0x8))->v);
    u7 = (((struct o14_float *)(a6 + 0x8))->v);
    u8 = (((struct o8_float *)(a4 + 0x8))->v);
    u9 = (((struct o8_float *)(a6 + 0x8))->v);
    u11 = (u8 - u9);
    if (0.0f > (u8 - u9)) {
        u11 = ((-u8) + u9);
    }
    (((struct o8_float *)((((int)stk + 0) + 0x18)))->v) = ((u7 + u6) - u11);
    u13 = (((struct o4_float *)(a4 + 0x8))->v);
    u14 = (((struct o10_float *)(a4 + 0x8))->v);
    u15 = (((struct o4_float *)(a6 + 0x8))->v);
    u16 = (((struct o10_float *)(a6 + 0x8))->v);
    (((struct o4_float *)((((int)stk + 0) + 0x18)))->v) = (math_interval_overlap(*(Stk3 *)(((int)stk + 0)), (u15 + u16), (u15 - u16), (u13 + u14), (u13 - u14), f8, f9, f10));
    t150 = 0x0;
    if (!(((((struct o18_float *)(((int)stk + 0)))->v)) > 0.0f)) {
    } else {
        t150 = 0x0;
        if (!(((((struct o8_float *)((((int)stk + 0) + 0x18)))->v)) > 0.0f)) {
        } else {
            t150 = 0x0;
            if (!(((((struct o4_float *)((((int)stk + 0) + 0x18)))->v)) > 0.0f)) {
            } else {
                t24 = FUN_0c0612ee(a5);
                if (t24 != 0) {
                    (((struct o135_uchar *)(a5))->v) = (*(signed char *)(a4 + 0x4));
                    t150 = 0x2;
                } else {
                    u45 = (((struct o4_float *)((((int)stk + 0) + 0x18)))->v);
                    if ((u45 > 9.0f) && ((u46 = (((struct o18_float *)(((int)stk + 0)))->v), u45 > u46) || (u47 = (((struct o8_float *)((((int)stk + 0) + 0x18)))->v), u45 > u47))) {
                        u64 = (((struct o18_float *)(((int)stk + 0)))->v);
                        if (!(u64 > u45) && (u65 = (((struct o8_float *)((((int)stk + 0) + 0x18)))->v), !(u64 > u65))) {
                            FUN_0c0600c0((((int)stk + 0) + 0xC), ((((struct o8_float *)(a4))->v)), ((((struct o8_float *)(a4 + 0x8))->v)), ((((struct o8_float *)(a6))->v)), ((((struct o8_float *)(a6 + 0x8))->v)));
                            *(float *)(((int)stk + 0)) = ((*(float *)(((int)stk + 0))) + ((((struct o18_float *)(((int)stk + 0)))->v)) * (*(float *)(((int)stk + 12))));
                            *(float *)(((int)stk + 8)) = ((*(float *)(((int)stk + 8))) + ((((struct o18_float *)(((int)stk + 0)))->v)) * (*(float *)(((int)stk + 20))));
                            FUN_0c060c80(a5, ((int)stk + 0), a6);
                        } else {
                            u82 = (((struct o8_float *)((((int)stk + 0) + 0x18)))->v);
                            if ((u64 > u82) && (u45 > u82)) {
                                FUN_0c0600c0((((int)stk + 0) + 0xC), ((((struct o8_float *)(a4))->v)), ((((struct o8_float *)(a4 + 0x8))->v)), ((((struct o8_float *)(a6))->v)), ((((struct o8_float *)(a6 + 0x8))->v)));
                                *(float *)(((int)stk + 0)) = ((*(float *)(((int)stk + 0))) + ((((struct o8_float *)((((int)stk + 0) + 0x18)))->v)) * (*(float *)(((int)stk + 12))));
                                *(float *)(((int)stk + 8)) = ((*(float *)(((int)stk + 8))) + ((((struct o8_float *)((((int)stk + 0) + 0x18)))->v)) * (*(float *)(((int)stk + 20))));
                                FUN_0c060c80(a5, ((int)stk + 0), a6);
                            }
                        }
                    } else {
                        if (((((struct o4_float *)(a4 + 0x8))->v)) > ((((struct o4_float *)(a6 + 0x8))->v))) {
                            u109 = (-(*(float *)(((int)stk + 28))));
                        } else {
                            u109 = (*(float *)(((int)stk + 28)));
                        }
                        *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) + u109);
                        FUN_0c060c80(a5, ((int)stk + 0), a6);
                        if (((((struct o4_float *)(a6 + 0x8))->v)) > ((((struct o4_float *)(a4 + 0x8))->v))) {
                            (((struct o135_uchar *)(a5))->v) = (*(signed char *)(a4 + 0x4));
                            FUN_0c061416(a5, a6, (a6 + 0x8), (a4 + 0x8));
                        }
                    }
                    t150 = 0x1;
                }
            }
        }
    }
    return t150;
}


