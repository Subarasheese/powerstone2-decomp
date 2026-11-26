/* Straight-line functions with calls and guards (batch gen_he): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
struct o0_float { float v; };
struct o0_int { int v; };
struct o10_int { char p[0x10]; int v; };
struct o118_int { char p[0x118]; int v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o168_float { char p[0x168]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o34_float { char p[0x34]; float v; };
struct o376C_uint { char p[0x376C]; unsigned int v; };
struct o377C_uint { char p[0x377C]; unsigned int v; };
struct o378C_float { char p[0x378C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o40_float { char p[0x40]; float v; };
struct o420_short { char p[0x420]; short v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oD0_int { char p[0xD0]; int v; };
struct oD4_int { char p[0xD4]; int v; };
int FUN_0c02fa8a(int, int, int, int);
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c037498(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c0582de(int, int);
int FUN_0c058a6e(int, int, int, int, int, int);
int FUN_0c059df2(int, int);
int FUN_0c059e60(int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c064f80(int);
int FUN_0c07e2f4(int, int);
int FUN_0c0c213c(int);
int FUN_0c0c283a(int);
int FUN_0c0c2d56(int, int, int);
int FUN_0c1171f0(int);
int FUN_0c13303c(int);
int FUN_0c133084(int);
int FUN_0c133644(int, int, int, int);
int FUN_0c136d54(int, int, int, int);
int FUN_0c136f78(int, int, int);
int FUN_0c1382ba(int);
int FUN_0c138a00(int, int, int, int);
int FUN_0c15e208(int, int, int);
int FUN_0c15e216(int, int, int, int);
int FUN_0c166270(int);
int FUN_0c168bb8(int, int, int, int);
extern int FUN_0c17b1a0();
int FUN_0c17c450(int);
int math_atan2_angle16(float, float);
int math_atan_angle16(float);
float math_cos_angle16(int);
int math_mat_get_translate(int, int);
int math_mat_transform_vector(int, int);
float math_signed_sqrt(float);
float math_sin_angle16(int);
int nlAddVector3op(int, int, int);
int nlCalcPoint(int, int);
int nlCalcVector(int, int);
int nlInvertMatrix(int);
int nlRand(void);
float nlScalor(int);
int nlSubVector3op(int, int, int);
int FUN_0c02f874(int a4, int a5, int a6);
int FUN_0c02fb24(int a4, int a5, int a6);
void FUN_0c15dd90(int a4);
float FUN_0c0b2478(int a4, int a5, int a6, float f4);
int FUN_0c142e70(int a4, int a5);
int FUN_0c0c78a0(int a4);
void FUN_0c1330cc(int a4, int a5, int a6, int a7);
int FUN_0c0327f0(int a4);
int FUN_0c0fde34(int a4);
int FUN_0c031a94(int a4, int a5, int a6, int a7, float f4);
int FUN_0c0dc598(int a4, int a5, int a6, int a7, float f4);
int FUN_0c136ff4(int a4, int a5, int a6, int a7);
int FUN_0c138a94(int a4, int a5, int a6, int a7);
int FUN_0c15e64a(int a4, int a5, float f4);




float FUN_0c0b2478(int a4, int a5, int a6, float f4)
{
    int stk[14];

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    register float w0_4;
    v0_3 = a4;
    v0_0 = a6;
    w0_2 = f4;
    v0_2 = *(signed char *)0xC542363;
    *(unsigned int *)(((int)stk + 0)) = (((short)v0_2 * (short)0x3938) + 0xC532498);
    v0_4 = *(int *)(((0x38F8 + (((short)v0_2 * (short)0x3938) + 0xC532498)) + 0x1C));
    v0_0 = (0xC17C2A0);
    v0_0 = (0xC058310);
    v0_0 = (0xC17C2F0);
    v0_0 = (v0_3);
    v0_1 = (v0_4);
    v0_2 = ((0x38F8 + (((short)v0_2 * (short)0x3938) + 0xC532498)));
    w0_0 = (300.0f);
    if (((*(signed char *)((v0_4 + 0x15))) != 3)) goto L_C0B24E0;
    math_mat_get_translate((v0_1 + 0x64), (((int)stk + 0) + 0x2C));
    nlSubVector3op((((int)stk + 0) + 0x20), (((int)stk + 0) + 0x2C), (v0_0 + 0x28));
    w0_3 = nlScalor((((int)stk + 0) + 0x20));
    w0_1 = (w0_3);
    w0_2 = (w0_3);
    if ((!(w0_0 > w0_3))) goto L_C0B24E0;
    L_C0B261A:;
    (((struct o377C_uint *)(v0_0))->v) = v0_1;
    v0_4 = (0x377C);
    L_C0B2634:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x380C + v0_0)) = *(struct mv3 *)((((int)stk + 0) + 0x2C)); }
    return w0_1;
    L_C0B24E0:;
    v0_1 = *(int *)((v0_2 + 0x18));
    v0_4 = *(signed char *)((v0_1 + 0x15));
    v0_1 = (v0_1);
    v0_3 = (v0_4);
    if ((v0_4 == 3)) goto L_C0B24F4;
    v0_4 = (v0_3);
    if ((v0_3 != 4)) goto L_C0B251C;
    L_C0B24F4:;
    math_mat_get_translate((v0_1 + 0x64), (((int)stk + 0) + 0x2C));
    nlSubVector3op((((int)stk + 0) + 0x20), (((int)stk + 0) + 0x2C), (v0_0 + 0x28));
    w0_2 = nlScalor((((int)stk + 0) + 0x20));
    w0_1 = (w0_2);
    if ((!(w0_0 > w0_2))) goto L_C0B251C;
    goto L_C0B261A;
    L_C0B251C:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x2C)) = *(struct mv3 *)(0xC1C65D4); }
    FUN_0c0582de((((int)stk + 0) + 0x2C), (((((struct oD4_int *)((*(int *)(((int)stk + 0)))))->v)) + 0x28));
    nlSubVector3op((((int)stk + 0) + 0x20), (((int)stk + 0) + 0x2C), (v0_0 + 0x28));
    w0_0 = nlScalor((((int)stk + 0) + 0x20));
    v0_1 = (v0_0);
    w0_1 = (w0_0);
    w0_2 = (w0_0);
    if ((600.0f > w0_0)) goto L_C0B261A;
    *(unsigned int *)(((int)stk + 4)) = 0xFFFFFFFF;
    v0_4 = (0xC0B2594);
    v0_1 = (0x0);
    w0_3 = (999999.0f);
    w0_0 = (0.0f);
    L_C0B25EC:;
    if (((int)v0_1 < (int)0x4)) goto L_C0B2598;
    if (((int)(*(int *)(((int)stk + 4))) < 0)) goto L_C0B2620;
    v0_1 = *(int *)(((((*(int *)(((int)stk + 4))) << 2) + v0_2) + 0x0));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x2C)) = *(struct mv3 *)(0xC1C6604); }
    FUN_0c0582de((((int)stk + 0) + 0x2C), (v0_1 + 0x64));
    v0_1 = (v0_1);
    goto L_C0B261A;
    L_C0B2620:;
    math_mat_get_translate((((((struct oC4_int *)((*(int *)(((int)stk + 0)))))->v)) + 0x28), (((int)stk + 0) + 0x2C));
    (((struct o377C_uint *)(v0_0))->v) = (*(int *)(((int)stk + 0)));
    v0_4 = (0x377C);
    goto L_C0B2634;
    L_C0B2598:;
    v0_3 = *(int *)((((v0_1 << 2) + v0_2) + 0x0));
    v0_4 = (0x1B);
    v0_4 = (v0_3);
    if (((int)(*(signed char *)((v0_3 + 0x1B))) >= (int)0x2)) goto L_C0B25EA;
    math_mat_get_translate((v0_4 + 0x64), (((int)stk + 0) + 0x14));
    *(float *)(((int)stk + 24)) = w0_0;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x8)) = *(struct mv3 *)((v0_0 + 0x28)); }
    *(float *)(((int)stk + 12)) = w0_0;
    nlSubVector3op((((int)stk + 0) + 0x20), (((int)stk + 0) + 0x14), (((int)stk + 0) + 0x8));
    w0_4 = nlScalor((((int)stk + 0) + 0x20));
    w0_2 = (w0_4);
    if ((!(w0_3 > w0_4))) goto L_C0B25EA;
    *(unsigned int *)(((int)stk + 4)) = v0_1;
    w0_3 = (w0_2);
    L_C0B25EA:;
    v0_1 = ((v0_1 + 0x1));
    goto L_C0B25EC;
}

int FUN_0c142e70(int a4, int a5)
{
    int stk[8];
    register int t2;
    register int t3;
    register int t45;
    register int t9;
    register int t11;
    register int t15;
    register int t19;
    register float u24;
    register float u25;
    register float u26;
    register float t27;
    register float u31;
    register int t43;
    register int t7;
    register int t8;
    register int t10;

    t2 = FUN_0c037320(0x0, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
    t3 = FUN_0c03f444(0x1, 0x0, t2);
    t45 = t3;
    if (t3 == 0) {
    } else {
        FUN_0c03733c(t3, 0x0, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
        t9 = 0x0;
        t11 = t10;
        for (;;) {
            if ((int)t9 >= (int)((((struct oC0_int *)(t3))->v))) {
                break;
            }
            t8 = 0xC4;
            t11 = t9;
            t11 = (t11 << 2);
            t8 = (t8 + t3);
            t11 = (t11 + t8);
            t11 = (*(int *)((t11 + 0x0)));
            t8 = t9;
            t7 = 0x84;
            t15 = (((t9 << 1) + t8) << 2);
            t8 = 0xC187798;
            *(unsigned short *)((t11 + 0x6)) = 0x1F;
            t7 = (t7 + t11);
            { struct mv3 { int w[3]; }; *(struct mv3 *)(t7) = *(struct mv3 *)(((t15 + 0xC202560) + 0xC)); }
            t9 = (t9 + 0x1);
        }
        *(unsigned int *)((t3 + 0x4)) = 0xC143118;
        *(unsigned char *)((t3 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        (((struct oAC_ushort *)(t3))->v) = 0xF;
        (((struct oA9_uchar *)(t3))->v) = (*(signed char *)((a4 + 0xA9)));
        *(unsigned int *)((t3 + 0x10)) = a4;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t3 + 0x40)) = *(struct mv3 *)(0xC202560); }
        t19 = *(int *)(((((*(int *)((((a5 & 0x1) << 2) + 0xC202528))) << 2) + (0xC4 + a4)) + 0x0));
        *(unsigned int *)(((int)stk + 16)) = ((((a5 & 0x1) << 1) + (a5 & 0x1)) << 2);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t3 + 0x28)) = *(struct mv3 *)((((((a5 & 0x1) << 1) + (a5 & 0x1)) << 2) + 0xC202530)); }
        FUN_0c0582de((t3 + 0x28), (t19 + 0x28));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 16) + 0x4)) = *(struct mv3 *)(((*(int *)(((int)stk + 16))) + 0xC202548)); }
        math_mat_transform_vector((((int)stk + 16) + 0x4), (t19 + 0x28));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t3 + 0x4C)) = *(struct mv3 *)((((int)stk + 16) + 0x4)); }
        u24 = *(float *)(((int)stk + 20));
        u25 = *(float *)(((int)stk + 28));
        u26 = (u25 * u25);
        u26 = u26 + u24 * u24;
        t27 = math_signed_sqrt(u26);
        *(unsigned int *)((t3 + 0x38)) = (math_atan2_angle16((*(float *)(((int)stk + 20))), (*(float *)(((int)stk + 28)))));
        u31 = *(float *)(((int)stk + 24));
        if (t27 == 0.0f) {
            if (!(0.0f > u31)) {
                *(unsigned int *)((t3 + 0x34)) = 0xFFFFC000;
            } else {
                *(unsigned int *)((t3 + 0x34)) = 0x4000;
            }
        } else {
            *(unsigned int *)((t3 + 0x34)) = (math_atan_angle16(((-u31) / t27)));
        }
        FUN_0c07e2f4(t3, 0x62);
        *(int *)((int)stk + 12) = 0xFFFFFEF0;
        *(int *)((int)stk + 8) = 0x0;
        t43 = *(signed char *)((t3 + 0x1));
        *(int *)((int)stk + 4) = (~(((int)0x1 << (int)t43) | 0x100));
        *(int *)((int)stk + 0) = 0x100;
        t45 = (FUN_0c064d24(t3, 0x1, 0x41, 0x0, 0x100, (~(((int)0x1 << (int)t43) | 0x100)), 0x0, 0xFFFFFEF0));
    }
    return t45;
}

int FUN_0c0c78a0(int a4)
{
    int stk[3];
    register int t0;
    register int t1;
    register int t3;
    register int t15;
    register float t17;
    register float u19;
    register float u20;
    register float u21;
    register float u22;
    register float u24;
    register float t26;
    register float u27;
    register float u29;
    register float u30;
    register int t33;
    register int t49;
    register float t51;
    register float u53;
    register float u54;
    register float u55;
    register float u56;
    register float u58;
    register float t60;
    register float u61;
    register float u63;
    register float u64;
    register int t83;
    register int t10;
    register int t11;

    t0 = *(signed char *)((a4 + 0x1));
    t1 = *(signed char *)((a4 + 0x15));
    if (t1 != 0) {
        if (t1 != 1) {
            (((struct o376C_uint *)((((short)t0 * (short)0x3938) + 0xC532498)))->v) = a4;
            t83 = 0x376C;
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
                t83 = (FUN_0c0c2d56(a4, t10, t11));
            } else {
                if ((unsigned char)(*(signed char *)((a4 + 0x41C))) == 63) {
                    t15 = *(short *)((a4 + 0x1E));
                    *(unsigned short *)((a4 + 0x1E)) = (t15 - 1);
                    if ((int)(short)(t15 - 1) <= 0) {
                        *(unsigned short *)((a4 + 0x1E)) = 0x6;
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x28)); }
                        t17 = math_sin_angle16((*(int *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x38))));
                        u19 = (((struct o378C_float *)((((short)t0 * (short)0x3938) + 0xC532498)))->v);
                        u20 = (t17 * u19);
                        u21 = (*(float *)(((int)stk + 0)));
                        u21 = u21 + 100.0f * u20;
                        *(float *)(((int)stk + 0)) = u21;
                        u22 = (((struct o378C_float *)((((short)t0 * (short)0x3938) + 0xC532498)))->v);
                        u24 = (*(float *)(((int)stk + 4)));
                        u24 = u24 + 140.0f * u22;
                        *(float *)(((int)stk + 4)) = u24;
                        t26 = math_cos_angle16((*(int *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x38))));
                        u27 = (((struct o378C_float *)((((short)t0 * (short)0x3938) + 0xC532498)))->v);
                        u29 = (t26 * u27);
                        u30 = (*(float *)(((int)stk + 8)));
                        u30 = u30 + 100.0f * u29;
                        *(float *)(((int)stk + 8)) = u30;
                        FUN_0c168bb8((*(signed char *)((a4 + 0x1))), ((int)stk + 0), ((((short)t0 * (short)0x3938) + 0xC532498) + 0x34), 0x0);
                        t33 = *(short *)((a4 + 0x1C));
                        *(unsigned short *)((a4 + 0x1C)) = (t33 - 1);
                        if ((short)(t33 - 1) == 0) {
                            FUN_0c0c2d56(a4, 0x5, (*(signed char *)((a4 + 0x1))));
                        }
                    }
                }
                (((struct o376C_uint *)((((short)t0 * (short)0x3938) + 0xC532498)))->v) = a4;
                t83 = 0x376C;
            }
        }
    } else {
        t49 = *(signed char *)((a4 + 0x41C));
        if ((unsigned char)t49 != 62) {
            if ((unsigned char)t49 != 63) {
            } else {
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x28)); }
                t51 = math_sin_angle16((*(int *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x38))));
                u53 = (((struct o378C_float *)((((short)t0 * (short)0x3938) + 0xC532498)))->v);
                u54 = (t51 * u53);
                u55 = (*(float *)(((int)stk + 0)));
                u55 = u55 + 100.0f * u54;
                *(float *)(((int)stk + 0)) = u55;
                u56 = (((struct o378C_float *)((((short)t0 * (short)0x3938) + 0xC532498)))->v);
                u58 = (*(float *)(((int)stk + 4)));
                u58 = u58 + 140.0f * u56;
                *(float *)(((int)stk + 4)) = u58;
                t60 = math_cos_angle16((*(int *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x38))));
                u61 = (((struct o378C_float *)((((short)t0 * (short)0x3938) + 0xC532498)))->v);
                u63 = (t60 * u61);
                u64 = (*(float *)(((int)stk + 8)));
                u64 = u64 + 100.0f * u63;
                *(float *)(((int)stk + 8)) = u64;
                FUN_0c168bb8((*(signed char *)((a4 + 0x1))), ((int)stk + 0), ((((short)t0 * (short)0x3938) + 0xC532498) + 0x34), 0x1);
                FUN_0c059df2((*(signed char *)((a4 + 0x1))), 0x53);
                *(unsigned short *)((a4 + 0x1C)) = 0x5;
                *(unsigned short *)((a4 + 0x1E)) = 0x6;
            }
        } else {
            FUN_0c166270(a4);
            FUN_0c059df2((*(signed char *)((a4 + 0x1))), 0x50);
        }
        FUN_0c0c213c(a4);
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        (((struct o376C_uint *)((((short)t0 * (short)0x3938) + 0xC532498)))->v) = a4;
        t83 = 0x376C;
    }
    return t83;
}


int FUN_0c0327f0(int a4)
{

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
    v0_0 = a4;
    v0_3 = *(signed char *)((v0_0 + 0x14));
    v0_2 = (v0_3);
    v0_1 = (0x1);
    if ((v0_3 == 0)) goto L_C032804;
    if ((v0_2 == 1)) goto L_C032822;
    return FUN_0c03f346(v0_0, R5, v0_1, R7);
    L_C032822:;
    v0_3 = *(signed char *)((v0_0 + 0x15));
    v0_2 = (v0_3);
    w0_0 = (0.0f);
    w0_1 = (1.0f);
    if ((v0_3 == 0)) goto L_C032868;
    if ((v0_2 == 1)) goto L_C032906;
    if ((v0_2 != 2)) goto L_C03283A;
    v0_2 = (((struct oC4_int *)(v0_0))->v);
    (((struct o74_float *)(v0_2))->v) = (((((struct o74_float *)(v0_2))->v)) - 0.200000003f);
    v0_2 = (((struct oC8_int *)(v0_0))->v);
    (((struct o74_float *)(v0_2))->v) = (((((struct o74_float *)(v0_2))->v)) - 0.200000003f);
    v0_2 = (0x74);
    if ((((((struct o74_float *)(((((struct oC8_int *)(v0_0))->v))))->v)) > -5.0f)) goto L_C0329B8;
    *(unsigned char *)((((((struct oC4_int *)(v0_0))->v)) + 0x0)) = v0_1;
    L_C032992:;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    v0_2 = (0x15);
    L_C0329B8:;
    return v0_2;
    L_C03283A:;
    if ((v0_2 != 3)) goto L_C032842;
    v0_1 = (((struct oC8_int *)(v0_0))->v);
    (((struct o8C_float *)(v0_1))->v) = (((((struct o8C_float *)(v0_1))->v)) - 0.0399999991f);
    w0_0 = (((struct o8C_float *)(((((struct oC8_int *)(v0_0))->v))))->v);
    v0_2 = (0x8C);
    w0_1 = (w0_0);
    FPUL_ = (0x3D23D70A);
    if ((!(0.0f > w0_0))) goto L_C0329B8;
    *(unsigned short *)((v0_0 + 0x1C)) = 0x3C;
    goto L_C032992;
    L_C032842:;
    if ((v0_2 != 4)) goto L_C03284A;
    v0_1 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_1 - 1);
    v0_2 = ((short)(v0_1 - 1));
    if (((short)(v0_1 - 1) != 0)) goto L_C0329B8;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    v0_2 = (0x14);
    goto L_C0329B8;
    L_C03284A:;
    goto L_C0329B8;
    L_C032906:;
    v0_3 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_3 - 1);
    v0_2 = ((short)(v0_3 - 1));
    if (((short)(v0_3 - 1) != 0)) goto L_C0329B8;
    *(unsigned char *)((((((struct oC4_int *)(v0_0))->v)) + 0x0)) = v0_1;
    *(unsigned char *)((((((struct oC8_int *)(v0_0))->v)) + 0x0)) = v0_1;
    (((struct o74_float *)(((((struct oC4_int *)(v0_0))->v))))->v) = w0_0;
    (((struct o74_float *)(((((struct oC8_int *)(v0_0))->v))))->v) = w0_0;
    (((struct o8C_float *)(((((struct oC8_int *)(v0_0))->v))))->v) = w0_1;
    goto L_C032992;
    L_C032868:;
    v0_2 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_2 - 1);
    if (((short)(v0_2 - 1) != 0)) goto L_C032906;
    v0_2 = (((struct oC4_int *)(v0_0))->v);
    *(unsigned char *)((v0_2 + 0x0)) = 0x0;
    *(unsigned short *)((v0_2 + 0x6)) = 0x31F;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_2 + 0x6C)) = *(struct mv3 *)((((short)(*(signed char *)((v0_0 + 0x2))) * (short)0x1C) + 0xC1A9850)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x84 + v0_2)) = *(struct mv3 *)(((((short)(*(signed char *)((v0_0 + 0x2))) * (short)0x1C) + 0xC1A9850) + 0xC)); }
    (((struct o18_float *)(v0_2))->v) = w0_1;
    (((struct o1C_float *)(v0_2))->v) = w0_0;
    (((struct o20_float *)(v0_2))->v) = w0_0;
    v0_2 = (((struct oC8_int *)(v0_0))->v);
    *(unsigned char *)((v0_2 + 0x0)) = 0x0;
    *(unsigned short *)((v0_2 + 0x6)) = 0x31F;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_2 + 0x6C)) = *(struct mv3 *)((((short)(*(signed char *)((v0_0 + 0x2))) * (short)0x1C) + 0xC1A9850)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x84 + v0_2)) = *(struct mv3 *)(((((short)(*(signed char *)((v0_0 + 0x2))) * (short)0x1C) + 0xC1A9850) + 0xC)); }
    (((struct o18_float *)(v0_2))->v) = w0_1;
    (((struct o1C_float *)(v0_2))->v) = w0_0;
    (((struct o20_float *)(v0_2))->v) = w0_0;
    *(unsigned short *)((v0_0 + 0x1C)) = 0x3C;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    goto L_C032906;
    L_C032804:;
    (((struct oA8_uchar *)(v0_0))->v) = v0_1;
    (((struct oAC_ushort *)(v0_0))->v) = 0xF;
    (((struct oA9_uchar *)(v0_0))->v) = 0x21;
    *(unsigned short *)((v0_0 + 0x1C)) = v0_1;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    goto L_C032822;
}



int FUN_0c0dc598(int a4, int a5, int a6, int a7, float f4)
{
    register int t0;

    if ((int)(*(signed char *)0xC54223C) > (int)0x1) {
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    if ((*(signed char *)((a4 + 0x14))) == 0) {
        FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x0, 0x49, (*(int *)0xC4B40CC));
        *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x1F;
        FUN_0c03744a(((((struct oC8_int *)(a4))->v)), 0x0, 0x49, (*(int *)0xC4B40CC));
        *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC8_int *)(a4))->v)) + 0x6)) = 0x1F;
        (((struct o80_uint *)(((((struct oC8_int *)(a4))->v))))->v) = 0xFFFFC000;
        FUN_0c03744a(((((struct oCC_int *)(a4))->v)), 0x0, 0x49, (*(int *)0xC4B40CC));
        *(unsigned char *)((((((struct oCC_int *)(a4))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oCC_int *)(a4))->v)) + 0x6)) = 0x1F;
        (((struct o78_uint *)(((((struct oCC_int *)(a4))->v))))->v) = 0x8000;
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        t0 = (((struct oC4_int *)(a4))->v);
        (((struct o8C_float *)(t0))->v) = 1.0f;
        (((struct o88_float *)(t0))->v) = 1.0f;
        (((struct o84_float *)(t0))->v) = 1.0f;
        t0 = (((struct oC8_int *)(a4))->v);
        (((struct o8C_float *)(t0))->v) = 1.0f;
        (((struct o88_float *)(t0))->v) = 1.0f;
        (((struct o84_float *)(t0))->v) = 1.0f;
        t0 = (((struct oCC_int *)(a4))->v);
        (((struct o8C_float *)(t0))->v) = 1.0f;
        (((struct o88_float *)(t0))->v) = 1.0f;
        (((struct o84_float *)(t0))->v) = 1.0f;
        *(unsigned short *)((a4 + 0x1C)) = 0x0;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    t0 = *(short *)((a4 + 0x1C));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC4_int *)(a4))->v)) + 0x6C)) = *(struct mv3 *)((0xC541068 + (((t0 << 1) + t0) << 2))); }
    t0 = (((struct oC4_int *)(a4))->v);
    (((struct o70_float *)(t0))->v) = (((((struct o70_float *)(t0))->v)) - 0.0f);
    t0 = (((struct oC4_int *)(a4))->v);
    (((struct o7C_uint *)(t0))->v) = (((((struct o7C_int *)(t0))->v)) + 0xB6);
    t0 = *(short *)((a4 + 0x1C));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC8_int *)(a4))->v)) + 0x6C)) = *(struct mv3 *)((0xC541068 + (((t0 << 1) + t0) << 2))); }
    t0 = (((struct oC8_int *)(a4))->v);
    (((struct o70_float *)(t0))->v) = (((((struct o70_float *)(t0))->v)) - 1000.0f);
    t0 = (((struct oC8_int *)(a4))->v);
    (((struct o7C_uint *)(t0))->v) = (((((struct o7C_int *)(t0))->v)) + 0xB6);
    t0 = *(short *)((a4 + 0x1C));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oCC_int *)(a4))->v)) + 0x6C)) = *(struct mv3 *)((0xC541068 + (((t0 << 1) + t0) << 2))); }
    t0 = (((struct oCC_int *)(a4))->v);
    (((struct o70_float *)(t0))->v) = (((((struct o70_float *)(t0))->v)) - 2000.0f);
    t0 = (((struct oCC_int *)(a4))->v);
    (((struct o7C_uint *)(t0))->v) = (((((struct o7C_int *)(t0))->v)) + 0xB6);
    *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 & 0x3);
    return (t0 & 0x3);
}

int FUN_0c136ff4(int a4, int a5, int a6, int a7)
{
    int stk[8];
    register int t8;
    register int t9;
    register int t33;
    register int t39;
    register int t54;
    register int t55;
    register int t62;

    if ((*(signed char *)((0x3715 + (((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532498)))) != 26) {
        return (((int (*)(int, int, int, int))(FUN_0c03f346))(a4, a5, a6, a7));
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)(((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532498) + 0x28)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC8_int *)(a4))->v)) + 0x6C)) = *(struct mv3 *)((a4 + 0x28)); }
    (((struct o70_float *)(((((struct oC8_int *)(a4))->v))))->v) = ((((struct o168_float *)(a4))->v));
    *(unsigned int *)(((int)stk + 0)) = (0xC4 + a4);
    t8 = *(int *)(((0xC4 + a4) + 0x8));
    t9 = *(int *)(((*(int *)(((int)stk + 0))) + 0x4));
    *(unsigned int *)(((int)stk + 4)) = t9;
    nlAddVector3op(((*(int *)(((int)stk + 4))) + 0x6C), (t9 + 0x6C), (t8 + 0x6C));
    if ((((((struct o2C_float *)(a4))->v)) + -1000.0f) > ((((struct o70_float *)(((((struct oC8_int *)(a4))->v))))->v))) {
        (((struct o70_float *)(((((struct oC8_int *)(a4))->v))))->v) = (((((struct o2C_float *)(a4))->v)) + -1000.0f);
    } else {
        if (((((struct o70_float *)(((((struct oC8_int *)(a4))->v))))->v)) > (((((struct o2C_float *)(a4))->v)) + 1000.0f)) {
            (((struct o70_float *)(((((struct oC8_int *)(a4))->v))))->v) = (((((struct o2C_float *)(a4))->v)) + 1000.0f);
        }
    }
    nlAddVector3op((a4 + 0x28), (a4 + 0x28), (((((struct oCC_int *)(a4))->v)) + 0x6C));
    t33 = *(signed char *)((a4 + 0x15));
    if (t33 != 0) {
        if (t33 != 1) {
            if (t33 != 2) {
                t62 = (((int (*)(int))(FUN_0c03f346))(a4));
            } else {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                t62 = 0x15;
            }
        } else {
            t39 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t39 + 0x1);
            t62 = (short)(t39 + 0x1);
            if ((short)(t39 + 0x1) == (*(int *)0xC2A182C)) {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                t62 = 0x15;
            }
        }
    } else {
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x14)) = *(struct mv3 *)(0xC2A172C); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x8)) = *(struct mv3 *)(0xC2A172C); }
        FUN_0c136d54((*(signed char *)((a4 + 0x1))), (((int)stk + 0) + 0x14), (((int)stk + 0) + 0x8), a4);
        FUN_0c136f78((*(signed char *)((a4 + 0x1))), 0xC2A172C, a4);
        t54 = nlRand();
        t55 = ((~(((~t54) + 0x1) & 0x3)) + 0x1);
        if ((int)t54 >= 0) {
            t55 = (t54 & 0x3);
        }
        t62 = t55;
        if (t55 == 0) {
            t62 = (FUN_0c059e60((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532498), 0x23));
        }
    }
    return t62;
}

int FUN_0c138a94(int a4, int a5, int a6, int a7)
{
    int stk[6];
    register int t0;
    register int t7;
    register float u15;
    register float u16;
    register int t20;
    register float u24;
    register float u26;
    register float u27;
    register float u32;
    register float u33;
    register float u34;
    register int t48;
    register int t65;
    register int t111;
    register int t53;
    register int t18;
    register int t19;

    t0 = *(signed char *)((a4 + 0x1));
    if ((*(signed char *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x3715))) != 26) {
        t111 = (FUN_0c03f346(a4, a5, a6, a7));
    } else {
        t7 = *(signed char *)((a4 + 0x14));
        if (t7 != 0) {
            if (t7 != 1) {
                if (t7 != 2) {
                    t53 = (FUN_0c03f346(a4, a5, a6, a7));
                } else {
                    if (((int)((int)(*(short *)((a4 + 0x1C))) % (int)0xC)) == 0) {
                        u15 = (((struct o0_float *)0xC138C64)->v);
                        u16 = (((struct o4_float *)0xC138C64)->v);
                        t20 = (*(short *)((a4 + 0x1E)));
                        for (;;) {
                            if ((int)t20 >= (int)((*(short *)((a4 + 0x1E))) + 0x1)) {
                                break;
                            }
                            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0xC)) = *(struct mv3 *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x34)); }
                            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x28)); }
                            t18 = 0xC2A1B00;
                            t19 = t20;
                            t19 = (t19 << 2);
                            u24 = *(float *)(((int)stk + 0));
                            t18 = (t18 + t19);
                            u26 = ((math_sin_angle16((*(int *)(((int)stk + 16))))) * (*(float *)((t18 + 0x0))));
                            u27 = u24;
                            u27 = u27 + u16 * u26;
                            *(float *)(((int)stk + 0)) = u27;
                            *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) + u15);
                            u32 = *(float *)(((int)stk + 8));
                            u33 = ((math_cos_angle16((*(int *)(((int)stk + 16))))) * (*(float *)((t18 + 0x0))));
                            u34 = u32;
                            u34 = u34 + u16 * u33;
                            *(float *)(((int)stk + 8)) = u34;
                            FUN_0c138a00((*(signed char *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x1))), ((int)stk + 0), (((int)stk + 0) + 0xC), (*(int *)((0xC2A1B80 + t19))));
                            t20 = (t20 + 0x1);
                        }
                        *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
                    }
                    *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
                    t48 = *(short *)((a4 + 0x1E));
                    t53 = t48;
                    if (t48 == 12) {
                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                        t53 = 0x14;
                    }
                }
                t111 = t53;
            } else {
                t65 = *(short *)((a4 + 0x1C));
                t111 = (t65 + 0x1);
                if (t65 == 20) {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    t111 = 0x0;
                }
                *(unsigned short *)((a4 + 0x1C)) = t111;
            }
        } else {
            t111 = 0x8C;
            if (20.0f > ((((struct o8C_float *)(((((struct o118_int *)((((short)t0 * (short)0x3938) + 0xC532498)))->v))))->v))) {
            } else {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                FUN_0c1382ba((*(signed char *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x1))));
                t111 = (FUN_0c059e60((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532498), 0xB));
            }
        }
    }
    return t111;
}

int FUN_0c15e64a(int a4, int a5, float f4)
{
    register int t0;
    int t1;
    register int t2;
    register float u0;
    register float u1;

    t0 = (((struct oC4_int *)(a4))->v);
    t1 = *(signed char *)((a4 + 0x14));
    t2 = *(int *)((a4 + 0x10));
    if (t1 != 0) {
        if (t1 != 1) {
            return FUN_0c03f346(a4, a5, 0xC203810, t2);
        }
        t1 = (((struct o20_short *)(a4))->v);
        (((struct o20_ushort *)(a4))->v) = (t1 - 1);
        if ((int)(short)(t1 - 1) <= 0) {
            (((struct o20_ushort *)(a4))->v) = 0x14;
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x6C)) = *(struct mv3 *)(((((((a5 << 1) + a5) << 2) << 2) << 1) + 0xC203810)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((0x84 + t0)) = *(struct mv3 *)((((((((a5 << 1) + a5) << 2) << 2) << 1) + 0xC203810) + 0xC)); }
        } else {
            (((struct o70_float *)(t0))->v) = (((((struct o70_float *)(t0))->v)) + ((((((struct o34_float *)(((((((a5 << 1) + a5) << 2) << 2) << 1) + 0xC203810)))->v)) - ((((struct o4_float *)(((((((a5 << 1) + a5) << 2) << 2) << 1) + 0xC203810)))->v))) / 20.0f));
            u0 = *(float *)0xC15E818;
            if ((int)((((struct o20_short *)(a4))->v)) > (int)0xA) {
                t1 = 0x2C;
                u1 = ((((struct o14_float *)(((((((a5 << 1) + a5) << 2) << 2) << 1) + 0xC203810)))->v));
            } else {
                t1 = 0x44;
                u1 = ((((struct o2C_float *)(((((((a5 << 1) + a5) << 2) << 2) << 1) + 0xC203810)))->v));
            }
            (((struct o8C_float *)(t0))->v) = (((((struct o8C_float *)(t0))->v)) + (((*(float *)(((t1 + ((((((a5 << 1) + a5) << 2) << 2) << 1) + 0xC203810)) + 0x0))) - u1) / u0));
            (((struct o84_float *)(t0))->v) = ((((struct o8C_float *)(t0))->v));
        }
        t1 = *(signed char *)((t2 + 0x41D));
        if ((t1 != 7) && (t1 != 5)) {
            (((struct o14_uchar *)(a4))->v) = 0x63;
        }
        (((struct o7C_uint *)(t0))->v) = (((((struct o7C_int *)(t0))->v)) + 0x38E);
        t1 = FUN_0c15e216(a4, 0x2, 0x0, 0x2);
        if (t1 != 0) {
            FUN_0c037498(t0, (*(signed char *)(((0x41C + a4) + 0x1))), 0x3A, (*(int *)0xC4B40CC));
        }
        (((struct oA8_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0xA8))) ^ 0x1);
        return 0xA8;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    *(unsigned short *)((a4 + 0x1C)) = 0x4B0;
    (((struct o20_ushort *)(a4))->v) = 0x14;
    *(unsigned char *)((t0 + 0x0)) = 0x1;
    *(unsigned short *)((t0 + 0x6)) = 0x1F;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x6C)) = *(struct mv3 *)(((((((a5 << 1) + a5) << 2) << 2) << 1) + 0xC203810)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x84 + t0)) = *(struct mv3 *)((((((((a5 << 1) + a5) << 2) << 2) << 1) + 0xC203810) + 0xC)); }
    return FUN_0c15e208(a4, 0x2, 0x0);
}
