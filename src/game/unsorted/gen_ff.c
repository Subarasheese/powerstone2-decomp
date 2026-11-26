/* Straight-line functions with calls and guards (batch gen_ff): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
struct o0_int { int v; };
struct o10_float { char p[0x10]; float v; };
struct o10_int { char p[0x10]; int v; };
struct o128_ushort { char p[0x128]; unsigned short v; };
struct o135_uchar { char p[0x135]; unsigned char v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o168_float { char p[0x168]; float v; };
struct o17C_float { char p[0x17C]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o20_uchar { char p[0x20]; unsigned char v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o3717_uchar { char p[0x3717]; unsigned char v; };
struct o3718_uchar { char p[0x3718]; unsigned char v; };
struct o3744_uchar { char p[0x3744]; unsigned char v; };
struct o374A_uchar { char p[0x374A]; unsigned char v; };
struct o3756_uchar { char p[0x3756]; unsigned char v; };
struct o3759_uchar { char p[0x3759]; unsigned char v; };
struct o375D_uchar { char p[0x375D]; unsigned char v; };
struct o378C_float { char p[0x378C]; float v; };
struct o382A_ushort { char p[0x382A]; unsigned short v; };
struct o382E_ushort { char p[0x382E]; unsigned short v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o6C_float { char p[0x6C]; float v; };
struct o78_int { char p[0x78]; int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o8C_int { char p[0x8C]; int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB0_float { char p[0xB0]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c03733c(int, int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c037bf6(int, int, int);
int FUN_0c038362(int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int, int);
int FUN_0c042fe0(void);
int FUN_0c0588bc(int, int, int, int, int, int);
int FUN_0c058a6e(int, int, int, int, int, int);
int FUN_0c059df2(int, int);
int FUN_0c0600c0(int, float, float, float, float);
int FUN_0c060c80(int, int, int);
int FUN_0c0612ee(int);
int FUN_0c061416(int, int, int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c06593a(int, int);
int FUN_0c07c5dc(int, int, int, float);
int FUN_0c07e2f4(int, int);
int FUN_0c07e3ae(int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07e868(int, int, int, int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c085cac(int, int, int, int);
int FUN_0c085d0c(int, int, int, int);
int FUN_0c0d04c4(int, int);
int FUN_0c0e294c(int);
int FUN_0c1171f0(int);
int FUN_0c12fed4(int);
int FUN_0c150010(int, int, int, Stk3, float, float, float, float);
int FUN_0c15b478(int, int, int, int, int, int, int, int);
int FUN_0c15c344(int, int, int);
int FUN_0c160f66(int, int);
int FUN_0c17b1a0(int);
int FUN_0c17c450(int);
int FUN_0c17e390(int);
extern float _builtin_sqrtf(float);
int ai_clear_op_state(void);
extern int math_atan2_angle16();
float math_cos_angle16(int);
float math_interval_overlap(float, float, float, float);
int math_mat_get_translate(int, int);
float math_signed_sqrt(float);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int math_vec3_mul_xyz(int, float, float, float);
int nlAddVector3op(int, int, int);
int nlCalcPoint(int, int);
int nlInvertMatrix(int);
int nlRand(void);
int nlRotateAY(int);
int nlScaleV(int);
int nlSubVector3op(int, int, int);
int nlTranslateV(int);
int nlUnitMatrix(void);
int nlVoidUnitVector(int);
int thunk_FUN_0c05abb2(int, int);
int FUN_0c02dca4(int a4, int a5, int a6);
int FUN_0c14fc70(int a4, int a5);
int FUN_0c13009a(int a4, int a5, int a6, int a7);
int FUN_0c14b20c(int a4, int a5, int a6, int a7);
int FUN_0c06d570(int a4, int a5, int a6);
int FUN_0c0bfba4(int a4);
void FUN_0c0fc9b8(int a4, int a5, int a6);
int FUN_0c0df784(int a4, int a5, int a6, int a7);
int FUN_0c031cc2(int a4);
void FUN_0c0fd112(int a4, int a5, int a6);
int FUN_0c1502e8(int a4, int a5, int a6, int a7, int a8, int a9);
float FUN_0c15b758(int a4, int a5, int a6, int a7, float f4);
int FUN_0c11978c(int a4, int a5, int a6, int a7);
int FUN_0c11c4f2(int a4, int a5, int a6, int a7);
int FUN_0c063650(int a4, int a5, int a6);
int FUN_0c12ff1c(int a4, int a5, int a6, int a7);
int FUN_0c165392(int a4, int a5, int a6, int a7);
int FUN_0c06abf8(int a4, int a5, int a6, int a7, float f4);

int FUN_0c02dca4(int a4, int a5, int a6)
{
    int stk[16];
    register int t8;
    register float u9;
    register float u10;
    register float u11;
    register float u12;
    register float u16;
    register float u19;

    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x1C)) = *(struct mv3 *)((a4 + 0x28)); }
    if (!(((((struct o17C_float *)(a4))->v)) > 0.0f)) {
        *(float *)(((int)stk + 32)) = ((((struct o168_float *)(a4))->v));
    }
    *(unsigned int *)(((int)stk + 0)) = (*(int *)((a4 + 0x38)));
    FUN_0c17b1a0((a4 + 0x64));
    nlInvertMatrix(0x0);
    t8 = 0x0;
    u9 = 1000000.0f;
    u10 = 1000000.0f;
    u11 = -1000000.0f;
    u12 = -1000000.0f;
    for (;;) {
        math_mat_get_translate(((*(int *)((((0xC4 + a4) + t8) + 0x0))) + 0x28), (((int)stk + 0) + 0x28));
        nlCalcPoint((((int)stk + 0) + 0x28), (((int)stk + 0) + 0x34));
        u16 = *(float *)(((int)stk + 52));
        if (u16 > u11) {
            u11 = u16;
        }
        if (u9 > u16) {
            u9 = u16;
        }
        u19 = *(float *)(((int)stk + 60));
        if (u19 > u12) {
            u12 = u19;
        }
        t8 = (t8 + 0x4);
        if (u10 > u19) {
            u10 = u19;
        }
        if ((unsigned int)t8 >= (unsigned int)0x4C) {
            break;
        }
    }
    *(float *)(((int)stk + 16)) = ((u9 + u11) / (1.0f + 1.0f));
    *(float *)(((int)stk + 24)) = ((u10 + u12) / (1.0f + 1.0f));
    *(float *)(((int)stk + 20)) = 0.0f;
    *(float *)(((int)stk + 4)) = ((u11 - (*(float *)(((int)stk + 16)))) * 1.29999995f);
    *(float *)(((int)stk + 12)) = ((u12 - (*(float *)(((int)stk + 24)))) * 1.29999995f);
    *(float *)(((int)stk + 8)) = 1.0f;
    if (15.0f > (*(float *)(((int)stk + 4)))) {
        *(float *)(((int)stk + 4)) = 15.0f;
    }
    if (15.0f > (*(float *)(((int)stk + 12)))) {
        *(float *)(((int)stk + 12)) = 15.0f;
    }
    *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) / 100.0f);
    *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) / 100.0f);
    nlUnitMatrix();
    nlTranslateV((((int)stk + 0) + 0x1C));
    nlRotateAY((*(int *)(((int)stk + 0))));
    nlScaleV((((int)stk + 0) + 0x4));
    nlTranslateV((((int)stk + 0) + 0x10));
    return (FUN_0c17e390((*(int *)0xC542458)));
}

int FUN_0c14fc70(int a4, int a5)
{
    int stk[34];
    register int t0;
    register int t2;
    register float u4;
    register int t5;
    register int t7;
    register float t9;
    register float u11;
    register float u12;
    register float u15;
    register float u16;
    register float u18;
    register float t19;
    register float u21;
    register float u24;
    register float u25;
    register float u26;
    register int t33;
    register int t35;
    register int t44;
    int t39;
    register float u41;
    register int t49;

    *(unsigned char *)(((int)stk + 24)) = a4;
    *(unsigned int *)(((int)stk + 20)) = a5;
    t0 = *(signed char *)(((int)stk + 24));
    *(unsigned int *)(((int)stk + 12)) = (((short)t0 * (short)0x3938) + 0xC532498);
    t2 = *(int *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x38));
    u4 = *(float *)((0xC203018 + ((*(signed char *)(((*(int *)(((int)stk + 12))) + 0x2))) << 2)));
    *(unsigned int *)(((int)stk + 28)) = ((((int)stk + 12) + 0x1C) + 0x60);
    *(unsigned int *)(((int)stk + 32)) = (((int)stk + 12) + 0x1C);
    *(unsigned int *)(((int)stk + 36)) = 0xC2030D8;
    *(unsigned int *)(((int)stk + 16)) = 0x2;
    t5 = 0xC203058;
    for (;;) {
        t7 = (*(int *)(((int)stk + 32)));
        for (;;) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)(t7) = *(struct mv3 *)((*(int *)(((int)stk + 20)))); }
            t9 = math_sin_angle16((t2 + 0x4000));
            u11 = (((((struct o4_float *)(t5))->v)) * u4);
            u12 = ((u11 * 5.0f) / 8.0f);
            *(float *)(((int)stk + 8)) = (t9 * u12);
            u15 = *(float *)((t7 + 0x0));
            u16 = ((math_cos_angle16((t2 + 0x4000))) * (*(float *)((t5 + 0x0))));
            u18 = (u16 * u4);
            *(float *)((t7 + 0x0)) = (u15 + (((t9 * u12)) - u18));
            *(int *)((int)stk + 8) = (0x8 + t7);
            t19 = math_cos_angle16((t2 + 0x4000));
            *(float *)(((int)stk + 4)) = t19;
            u21 = (((((struct o4_float *)(t5))->v)) * u4);
            *(float *)(((int)stk + 0)) = ((u21 * 5.0f) / 8.0f);
            u24 = ((math_sin_angle16((t2 + 0x4000))) * (*(float *)((t5 + 0x0))));
            u25 = ((u21 * 5.0f) / 8.0f);
            u26 = (u24 * u4);
            u26 = u26 + u25 * t19;
            (((struct o8_float *)(t7))->v) = (((((struct o8_float *)(t7))->v)) + u26);
            (((struct o4_float *)(t7))->v) = (((((struct o4_float *)(t7))->v)) + 16.0f);
            t7 = (t7 + 0xC);
            t5 = (t5 + 0x8);
            if ((unsigned int)t7 >= (unsigned int)(*(int *)(((int)stk + 28)))) {
                break;
            }
        }
        t33 = (*(int *)(((int)stk + 36)));
        *(int *)((int)stk + 8) = t33;
        *(int *)((int)stk + 4) = 0xC202E68;
        t35 = FUN_0c1502e8((*(signed char *)(((int)stk + 24))), 0x8, 0x2, (((int)stk + 12) + 0x1C), 0xC202E68, t33);
        t44 = t35;
        if (t35 != 0) {
            t39 = *(signed char *)(((*(int *)(((int)stk + 12))) + 0x2));
            u41 = 1.20000005f;
            if ((t39 != 4) && ((t39 != 5) && (t39 != 9))) {
                u41 = 1.0f;
            }
            (((struct o10_float *)((0x41C + t35)))->v) = u41;
            *(unsigned short *)((t35 + 0x1C)) = (*(signed char *)((0x135 + (*(int *)(((int)stk + 12))))));
            *(unsigned short *)((t35 + 0x1E)) = 0x0;
            t44 = 0x0;
        }
        t49 = *(int *)(((int)stk + 16));
        *(unsigned int *)(((int)stk + 16)) = (t49 - 1);
        if ((t49 - 1) != 0) continue;
        break;
    }
    return t44;
}

int FUN_0c13009a(int a4, int a5, int a6, int a7)
{
    int stk[10];
    register int t0;
    register int t34;
    register float u11;
    register int t18;
    register int t28;
    register float u15;

    *(unsigned int *)(((int)stk + 36)) = a5;
    *(unsigned char *)(((int)stk + 32)) = a6;
    t0 = FUN_0c03f444(0x1, 0x0, 0x1, a7);
    t34 = t0;
    if (t0 == 0) {
    } else {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0x7;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        (((struct o14_uchar *)(t0))->v) = 0x0;
        (((struct o15_uchar *)(t0))->v) = 0x0;
        *(unsigned short *)((t0 + 0x1C)) = 0x0;
        *(unsigned short *)((t0 + 0x1E)) = 0x0;
        (((struct o20_ushort *)(t0))->v) = 0x1D;
        *(unsigned int *)((t0 + 0x4)) = 0xC12FF1C;
        *(unsigned int *)((t0 + 0x10)) = (*(int *)((a4 + 0x10)));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)((a4 + 0x28)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x34)) = *(struct mv3 *)(0xC2A1368); }
        *(unsigned int *)((t0 + 0x38)) = (*(int *)(((int)stk + 36)));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x40)) = *(struct mv3 *)(0xC2A135C); }
        (((struct o4C_float *)(t0))->v) = ((math_sin_angle16((*(int *)((t0 + 0x38))))) * 37.0f);
        (((struct o54_float *)(t0))->v) = ((math_cos_angle16((*(int *)((t0 + 0x38))))) * 37.0f);
        if ((*(signed char *)((0x375A + (*(int *)((a4 + 0x10)))))) == 4) {
            u11 = ((float)((*(signed char *)(((int)stk + 32))) + 0x1) * 10.0f);
            u11 = -u11;
            u15 = u11;
        } else {
            u15 = ((float)(*(signed char *)(((int)stk + 32))) * 10.0f);
        }
        (((struct o50_float *)(t0))->v) = u15;
        *(int *)((int)stk + 28) = 0xF0;
        *(int *)((int)stk + 24) = 0x0;
        t18 = *(signed char *)((t0 + 0x1));
        *(int *)((int)stk + 20) = (~((int)0x1 << (int)t18));
        *(int *)((int)stk + 16) = 0x100;
        FUN_0c064d24(t0, 0x1, 0x14, 0x0, 0x100, (~((int)0x1 << (int)t18)), 0x0, 0xF0);
        FUN_0c07e2f4(t0, 0x63);
        FUN_0c03744a(((((struct oC4_int *)(t0))->v)), 0x0, 0x2, (*(int *)((((*(signed char *)((t0 + 0x1))) << 2) + 0xC4B40FC))));
        *(unsigned char *)((((((struct oC4_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(t0))->v)) + 0x6)) = 0xB;
        (((struct o80_uint *)(((((struct oC4_int *)(t0))->v))))->v) = 0x4000;
        *(int *)((int)stk + 12) = 0xC2A1394;
        *(int *)((int)stk + 8) = 0xC2A1388;
        *(int *)((int)stk + 4) = 0x6F;
        *(int *)((int)stk + 0) = 0x384;
        t28 = *(signed char *)((t0 + 0x1));
        (((struct o20_uchar *)(((int)stk + 0)))->v) = t28;
        t34 = (FUN_0c15b478((*(signed char *)(((int)stk + 32))), (t0 + 0x64), t0, (*(int *)((((((struct o8C_int *)((*(int *)((((signed char)t28 << 2) + 0xC4B40FC)))))->v)) + 0x0))), 0x384, 0x6F, 0xC2A1388, 0xC2A1394));
    }
    return t34;
}

int FUN_0c14b20c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = FUN_0c03f444(0x5, 0x0, 0x2, a7);
    if (t0 == 0) {
        return t0;
    }
    t1 = 0x0;
    for (;;) {
        t2 = *(int *)((((0xC4 + t0) + t1) + 0x0));
        FUN_0c03744a(t2, 0x8, 0xA, (*(int *)(((((*(signed char *)((a4 + 0x1))) << 2) << 1) + 0xC4B40E0))));
        t1 = (t1 + 0x4);
        *(unsigned short *)((t2 + 0x6)) = 0x1F;
        if ((unsigned int)t1 >= (unsigned int)0x8) {
            break;
        }
    }
    *(unsigned int *)((t0 + 0x4)) = 0xC14B39C;
    *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
    (((struct oA8_uchar *)(t0))->v) = 0x1;
    (((struct oAC_ushort *)(t0))->v) = 0x21;
    (((struct oA9_uchar *)(t0))->v) = 0x21;
    *(unsigned int *)((t0 + 0x10)) = a4;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)((a4 + 0x28)); }
    t1 = nlRand();
    t2 = ((~(((~t1) + 0x1) & 0x1F)) + 0x1);
    if ((int)t1 >= 0) {
        t2 = (t1 & 0x1F);
    }
    (((struct o4C_float *)(t0))->v) = ((((float)t2 / 32.0f) + -0.5f) * 80.0f);
    t1 = nlRand();
    t2 = ((~(((~t1) + 0x1) & 0x1F)) + 0x1);
    if ((int)t1 >= 0) {
        t2 = (t1 & 0x1F);
    }
    (((struct o50_float *)(t0))->v) = ((((float)t2 / 32.0f) + -0.5f) * 80.0f);
    t1 = nlRand();
    t2 = ((~(((~t1) + 0x1) & 0x1F)) + 0x1);
    if ((int)t1 >= 0) {
        t2 = (t1 & 0x1F);
    }
    (((struct o54_float *)(t0))->v) = ((((float)t2 / 32.0f) + -0.5f) * 80.0f);
    nlAddVector3op((t0 + 0x28), (t0 + 0x28), (t0 + 0x4C));
    nlSubVector3op((t0 + 0x4C), (t0 + 0x4C), (a4 + 0x4C));
    return math_vec3_mul_xyz((t0 + 0x4C), 0.100000001f, 0.100000001f, 0.100000001f);
}

int FUN_0c06d570(int a4, int a5, int a6)
{
    int stk[13];
    register int t0;
    register int t1;
    register int t10;
    register int t19;
    register float u22;
    int t28;
    register int t62;
    register int t63;
    register int t73;
    int t11;
    register int t36;
    register int t37;
    register int t38;
    register int t39;
    register int t41;
    register int t42;
    register int t50;
    register int t51;
    register int t52;
    register int t53;
    register int t56;
    register int t57;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        t73 = t0;
        if (t0 == 1) {
            (((struct o3759_uchar *)(a4))->v) = 0x0;
            t1 = FUN_0c037bf6(a4, a5, a6);
            if ((unsigned char)t1 != 0) {
                FUN_0c085d0c(a4, 0x0, 0x0, 0x0);
                (((struct o382A_ushort *)(a4))->v) = 0x1;
                t73 = 0x382A;
            } else {
                t73 = (FUN_0c038362(a4));
            }
        }
    } else {
        FUN_0c037bf6(a4, a5, a6);
        t10 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t10 - 1);
        if (((short)(t10 - 1) != 0) && (t11 = *(signed char *)((a4 + 0x3744)), (int)(unsigned char)t11 > 0)) {
            t19 = (int)((int)(*(short *)((a4 + 0x1C))) % (int)0x14);
            t73 = t19;
            if (t19 == 0) {
                { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 12) + 0x4)) = *(struct mv3 *)((a4 + 0x28)); }
                u22 = (*(float *)(((int)stk + 20)));
                u22 = u22 + 200.0f * ((((struct o378C_float *)(a4))->v));
                *(float *)(((int)stk + 20)) = u22;
                t73 = (FUN_0c15c344(a4, (((int)stk + 12) + 0x4), 0x6));
            }
        } else {
            t28 = *(signed char *)((a4 + 0x2));
            if ((t28 != 2) && (t28 != 3)) {
                if (t28 != 10) {
                    if (t28 != 14) {
                        *(int *)((int)stk + 8) = 0x2;
                        *(int *)((int)stk + 4) = 0x3;
                        t39 = *(signed char *)((a4 + 0x1));
                        *(unsigned int *)(((int)stk + 12)) = t39;
                        t38 = t39;
                        *(int *)((int)stk + 0) = t38;
                        t36 = 0x2;
                        t37 = 0x3;
                        t41 = 0x3;
                        t42 = 0x2;
                    } else {
                        *(int *)((int)stk + 8) = 0xF;
                        *(int *)((int)stk + 4) = 0x0;
                        t39 = *(signed char *)((a4 + 0x1));
                        *(unsigned int *)(((int)stk + 12)) = t39;
                        t38 = t39;
                        *(int *)((int)stk + 0) = t38;
                        t36 = 0xF;
                        t37 = 0x0;
                        t41 = 0x0;
                        t42 = 0xF;
                    }
                    FUN_0c07e79c(a4, t39, t41, t42, t38, t37, t36);
                } else {
                    if ((*(signed char *)((a4 + 0x371C))) != 0) {
                        *(int *)((int)stk + 8) = 0x4;
                        *(int *)((int)stk + 4) = 0x3;
                        t53 = *(signed char *)((a4 + 0x1));
                        *(unsigned int *)(((int)stk + 12)) = t53;
                        t52 = t53;
                        *(int *)((int)stk + 0) = t52;
                        t50 = 0x4;
                        t51 = 0x3;
                        t56 = 0x3;
                        t57 = 0x4;
                    } else {
                        *(int *)((int)stk + 8) = 0xF;
                        *(int *)((int)stk + 4) = 0x0;
                        t53 = *(signed char *)((a4 + 0x1));
                        *(unsigned int *)(((int)stk + 12)) = t53;
                        t52 = t53;
                        *(int *)((int)stk + 0) = t52;
                        t50 = 0xF;
                        t51 = 0x0;
                        t56 = 0x0;
                        t57 = 0xF;
                    }
                    FUN_0c07e79c(a4, t53, t56, t57, t52, t51, t50);
                }
            } else {
                *(int *)((int)stk + 8) = 0x1;
                *(int *)((int)stk + 4) = 0x3;
                t62 = *(signed char *)((a4 + 0x1));
                *(unsigned int *)(((int)stk + 12)) = t62;
                t63 = t62;
                *(int *)((int)stk + 0) = t63;
                FUN_0c07e79c(a4, t62, 0x3, 0x1, t63, 0x3, 0x1);
            }
            (((struct o382A_ushort *)(a4))->v) = 0x1;
            (((struct o3744_uchar *)(a4))->v) = 0x0;
            (((struct o3759_uchar *)(a4))->v) = 0x0;
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            t73 = 0x15;
        }
    }
    return t73;
}

int FUN_0c0bfba4(int a4)
{
    register int t0;
    int t1;
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
    register int t12;
    int t13;
    register int t14;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;

    t9 = 0xC532498;
    t10 = 0xC532498;
    t11 = 0xC532498;
    t12 = 0x0;
    for (;;) {
        if ((unsigned int)t9 >= (unsigned int)0xC540978) {
            break;
        }
        t13 = 0x3714;
        t14 = (*(signed char *)((t9 + t13)));
        if ((t14 != 0) && ((t13 = 0x160, u0 = 0.0f, u1 = *(float *)((t11 + t13)), u2 = u1, u2 == u0) && (t13 = 0x3719, t0 = a4, t1 = *(signed char *)((t10 + t13)), t2 = (t14 == 0), t14 = t1, t13 = 0x3719, t3 = *(signed char *)((t0 + t13)), t4 = t3, t14 == t4))) {
            t12 = (t12 + 0x1);
        }
        t9 = (t9 + 0x3938);
        t11 = (t11 + 0x3938);
        t10 = (t10 + 0x3938);
    }
    if (t12 != 0) {
        t0 = (int)((int)(nlRand()) % (int)t12);
        t1 = t0;
        t2 = 0xC18760C;
        t3 = 0x0;
        t4 = 0xC532498;
        t9 = 0xC532498;
        t10 = 0xC532498;
        t11 = 0x0;
        for (;;) {
            if ((int)t3 >= (int)0x4) {
                break;
            }
            t1 = 0x3714;
            t13 = (t3 * 0x3938);
            t13 = (t13 + 0xC532498);
            t2 = (*(signed char *)((t13 + t1)));
            if ((t2 != 0) && ((t1 = 0x160, u3 = 0.0f, u4 = *(float *)((t9 + t1)), u5 = u4, u5 == u3) && (t1 = 0x3719, t5 = (t2 == 0), t2 = a4, t6 = *(signed char *)((t10 + t1)), t13 = t6, t1 = 0x3719, t7 = *(signed char *)((t2 + t1)), t8 = t7, t13 == t8))) {
                t13 = t0;
                t14 = t11 == t13;
                t11 = (t11 + 0x1);
                if (t14) {
                    t12 = t4;
                }
            }
            t10 = (t10 + 0x3938);
            t9 = (t9 + 0x3938);
            t3 = (t3 + 0x1);
            t4 = (t4 + 0x3938);
        }
        (((struct o78_uint *)((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC)))->v) = t12;
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC) + 0x6C)) = *(struct mv3 *)((t12 + 0x28)); }
        (((struct o22_ushort *)((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC)))->v) = 0x1;
    } else {
        (((struct o22_ushort *)((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC)))->v) = 0x0;
    }
    *(unsigned int *)(((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC) + 0x8)) = ((((struct o0_int *)0xC47245C)->v));
    t0 = ai_clear_op_state();
    (((struct o4_ushort *)0xC47245C)->v) = 0x1;
    return t0;
}


int FUN_0c0df784(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t3;
    register int t14;
    register int t5;
    register int t6;
    register float u7;
    register int t24;
    register int t37;
    register float u40;
    register int t42;
    register int t43;
    register int t48;
    register int t68;
    register int t57;
    register int t52;

    if ((*(signed char *)0xC54223C) != 1) {
        t68 = (((int (*)(int, int, int, int))(FUN_0c03f346))(a4, a5, a6, a7));
    } else {
        t3 = *(signed char *)((a4 + 0x14));
        if (t3 != 0) {
            if (t3 != 1) {
                t14 = t3;
                if (t3 != 2) {
                } else {
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)((a4 + 0x28)); }
                    *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) - 400.0f);
                    t5 = 0xC0DF8BC;
                    t6 = 0xA;
                    u7 = 400.0f;
                    for (;;) {
                        if (t6 == 0) {
                            break;
                        }
                        t5 = 0xC0DF90C;
                        t5 = (FUN_0c150010(((int)stk + 0), a5, a6, *(Stk3 *)(((int)stk + 0)), 0.899999976f, (*(float *)((t5 + 0x0))), 0.629999995f, 4.0f));
                        t5 = 0x4;
                        u7 = (*(float *)((((int)stk + 0) + t5)));
                        t5 = 0x4;
                        t6 = (t6 - 1);
                        u7 = (u7 + 80.0f);
                        *(float *)((((int)stk + 0) + t5)) = u7;
                    }
                    FUN_0c0e294c((a4 + 0x28));
                    *(unsigned int *)(((0xC540D98 + ((*(signed char *)((a4 + 0x2))) << 2)) + 0x0)) = 0x0;
                    t14 = (((int (*)(int))(FUN_0c03f346))(a4));
                }
                t57 = t14;
            } else {
                t24 = FUN_0c06593a(a4, (*(int *)0xC540D94));
                t57 = t24;
                if (t24 != 0) {
                    (((struct o14_uchar *)(a4))->v) = 0x2;
                    t57 = (thunk_FUN_0c05abb2(0x45, (a4 + 0x28)));
                }
            }
        } else {
            t37 = FUN_0c042fe0();
            if (t37 == 0) {
                (((struct oA8_uchar *)(a4))->v) = 0x0;
                t52 = 0xA8;
            } else {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                (((struct oA8_uchar *)(a4))->v) = 0x1;
                (((struct o128_ushort *)(a4))->v) = 0x40;
                u40 = -3600.0f;
                u40 = u40 + 2400.0f * (float)(*(signed char *)((a4 + 0x2)));
                (((struct o28_float *)(a4))->v) = u40;
                FUN_0c0d04c4((0xAC + a4), (a4 + 0x34));
                t42 = 0x0;
                t43 = 0x0;
                for (;;) {
                    if ((int)t43 >= (int)((((struct oC0_int *)(a4))->v))) {
                        break;
                    }
                    t42 = t43;
                    t42 = (t42 << 2);
                    t42 = (t42 + (0xC4 + a4));
                    t42 = (*(int *)((t42 + 0x0)));
                    FUN_0c0d04c4((t42 + 0x6), (t42 + 0x78));
                    t43 = (t43 + 0x1);
                }
                t48 = FUN_0c06593a(a4, (*(int *)0xC540D94));
                t52 = t48;
                if (t48 != 0) {
                    (((struct o14_uchar *)(a4))->v) = 0x2;
                    t52 = (thunk_FUN_0c05abb2(0x45, (a4 + 0x28)));
                }
            }
            t57 = t52;
        }
        t68 = t57;
    }
    return t68;
}

int FUN_0c031cc2(int a4)
{

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R6;
    register int R9;
    register int R10;
    register int R12;
    register int R13;
    register float F2;
    register float F3;
    register float F4;
    register float F5;
    register float F6;
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
    if ((v0_3 == 0)) goto L_C031CD6;
    if ((v0_2 == 1)) goto L_C031CF4;
    return FUN_0c03f346(v0_0, R5, R6, v0_1);
    L_C031CF4:;
    v0_3 = *(signed char *)((v0_0 + 0x15));
    v0_2 = (v0_3);
    if ((v0_3 == 0)) goto L_C031D34;
    if ((v0_2 == 1)) goto L_C031DE2;
    if ((v0_2 != 2)) goto L_C031D08;
    v0_1 = (((struct oC4_int *)(v0_0))->v);
    (((struct o6C_float *)(v0_1))->v) = (((((struct o6C_float *)(v0_1))->v)) - 0.100000001f);
    w0_0 = (((struct o6C_float *)(((((struct oC4_int *)(v0_0))->v))))->v);
    v0_2 = (0x6C);
    w0_1 = (w0_0);
    FPUL_ = (0x3DCCCCCD);
    if ((!(-4.0f > w0_0))) goto L_C031E40;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    v0_2 = (0x14);
    L_C031E40:;
    return v0_2;
    L_C031D08:;
    goto L_C031E40;
    L_C031DE2:;
    v0_3 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_3 - 1);
    v0_2 = ((short)(v0_3 - 1));
    if (((short)(v0_3 - 1) != 0)) goto L_C031E40;
    *(unsigned char *)((((((struct oC4_int *)(v0_0))->v)) + 0x0)) = v0_1;
    v0_1 = (((struct oC4_int *)(v0_0))->v);
    (((struct o6C_float *)(v0_1))->v) = (((((struct o6C_float *)(v0_1))->v)) + 4.0f);
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    v0_2 = (0x15);
    FPUL_ = (0x40800000);
    goto L_C031E40;
    L_C031D34:;
    v0_2 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_2 - 1);
    if (((short)(v0_2 - 1) != 0)) goto L_C031DE2;
    v0_2 = (((struct oC4_int *)(v0_0))->v);
    *(unsigned char *)((v0_2 + 0x0)) = 0x0;
    *(unsigned short *)((v0_2 + 0x6)) = 0x71F;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_2 + 0x6C)) = *(struct mv3 *)((((short)(*(signed char *)((v0_0 + 0x2))) * (short)0x1C) + 0xC1A9578)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x84 + v0_2)) = *(struct mv3 *)(((((short)(*(signed char *)((v0_0 + 0x2))) * (short)0x1C) + 0xC1A9578) + 0xC)); }
    (((struct o14_float *)(v0_2))->v) = 0.600000024f;
    (((struct o18_float *)(v0_2))->v) = 1.0f;
    (((struct o1C_float *)(v0_2))->v) = 0.0f;
    (((struct o20_float *)(v0_2))->v) = 0.0f;
    v0_2 = (((struct oC8_int *)(v0_0))->v);
    *(unsigned char *)((v0_2 + 0x0)) = 0x0;
    *(unsigned short *)((v0_2 + 0x6)) = 0x71F;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_2 + 0x6C)) = *(struct mv3 *)((((short)(*(signed char *)((v0_0 + 0x2))) * (short)0x1C) + 0xC1A9578)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x84 + v0_2)) = *(struct mv3 *)(((((short)(*(signed char *)((v0_0 + 0x2))) * (short)0x1C) + 0xC1A9578) + 0xC)); }
    (((struct o14_float *)(v0_2))->v) = 0.600000024f;
    (((struct o18_float *)(v0_2))->v) = 1.0f;
    (((struct o1C_float *)(v0_2))->v) = 0.0f;
    (((struct o20_float *)(v0_2))->v) = 0.0f;
    *(unsigned short *)((v0_0 + 0x1C)) = 0x3C;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    goto L_C031DE2;
    L_C031CD6:;
    (((struct oA8_uchar *)(v0_0))->v) = v0_1;
    (((struct oAC_ushort *)(v0_0))->v) = 0xF;
    (((struct oA9_uchar *)(v0_0))->v) = 0x21;
    *(unsigned short *)((v0_0 + 0x1C)) = v0_1;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    goto L_C031CF4;
}


int FUN_0c1502e8(int a4, int a5, int a6, int a7, int a8, int a9)
{
    int stk[5];
    register int t0;
    register int t1;
    register int t32;
    register int t6;
    register int t7;
    register int t8;
    register int t9;
    register int t11;
    register int t20;
    register int t21;

    *(unsigned char *)(((int)stk + 8)) = a4;
    *(unsigned char *)(((int)stk + 16)) = a5;
    *(unsigned char *)(((int)stk + 12)) = a6;
    *(unsigned int *)(((int)stk + 4)) = a7;
    t0 = *(signed char *)(((int)stk + 16));
    *(unsigned int *)(((int)stk + 0)) = t0;
    t1 = FUN_0c03f444(0x5, 0x1, t0, a7);
    t32 = 0x0;
    if (t1 != 0) {
        *(unsigned char *)((t1 + 0x1)) = (*(signed char *)(((int)stk + 8)));
        *(unsigned char *)((t1 + 0x2)) = (*(signed char *)(((int)stk + 12)));
        (((struct oAC_ushort *)(t1))->v) = 0xF;
        (((struct oA9_uchar *)(t1))->v) = 0x21;
        *(unsigned int *)((t1 + 0x4)) = 0xC150A2C;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x34)) = *(struct mv3 *)(0xC202D48); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x40)) = *(struct mv3 *)(0xC202D3C); }
        t9 = *(int *)(((int)stk + 4));
        if ((int)(*(int *)(((int)stk + 0))) > 0) {
            t6 = a8;
            t7 = a9;
            t8 = 0x0;
            for (;;) {
                t11 = *(int *)(((((signed char)t8 << 2) + (0xC4 + t1)) + 0x0));
                FUN_0c03744a(t11, 0x0, 0x7, (*(int *)0xC4B40CC));
                *(unsigned char *)((t11 + 0x0)) = 0x0;
                *(unsigned short *)((t11 + 0x6)) = 0x638;
                if ((*(int *)(((int)stk + 4))) != 0) {
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((t11 + 0x6C)) = *(struct mv3 *)(t9); }
                } else {
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((t11 + 0x6C)) = *(struct mv3 *)(0xC202D30); }
                }
                if (a8 != 0) {
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x90 + t11)) = *(struct mv3 *)(t6); }
                } else {
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x90 + t11)) = *(struct mv3 *)(0xC202D30); }
                }
                if (a9 != 0) {
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x9C + t11)) = *(struct mv3 *)(t7); }
                } else {
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x9C + t11)) = *(struct mv3 *)(0xC202D30); }
                }
                t20 = nlRand();
                t21 = ((~(((~t20) + 0x1) & 0xF)) + 0x1);
                if ((int)t20 >= 0) {
                    t21 = (t20 & 0xF);
                }
                t8 = (t8 + 0x1);
                (((struct o80_uint *)(t11))->v) = (((t21 << 8) << 2) << 2);
                t7 = (t7 + 0xC);
                t6 = (t6 + 0xC);
                t9 = (t9 + 0xC);
                if ((int)(signed char)t8 >= (int)(*(int *)(((int)stk + 0)))) {
                    break;
                }
            }
        }
        t32 = t1;
    }
    return t32;
}

float FUN_0c15b758(int a4, int a5, int a6, int a7, float f4)
{
    int stk[3];

    register int R1;
    register int R2;
    register int R3;
    register int R10;
    register int R12;
    register float F0;
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
    v0_2 = a6;
    w0_0 = f4;
    v0_3 = *(signed char *)((v0_0 + 0x14));
    v0_1 = (v0_3);
    v0_0 = (v0_0);
    if ((v0_3 == 0)) goto L_C15B794;
    if ((v0_1 == 1)) goto L_C15B7A2;
    if ((v0_1 != 2)) goto L_C15B776;
    (((struct oB0_float *)(v0_0))->v) = (((((struct oB0_float *)(v0_0))->v)) * 0.899999976f);
    w0_0 = (((struct o40_float *)(v0_0))->v);
    (((struct o40_float *)(v0_0))->v) = (w0_0 * 1.03999996f);
    (((struct o48_float *)(v0_0))->v) = (w0_0 * 1.03999996f);
    (((struct o44_float *)(v0_0))->v) = (w0_0 * 1.03999996f);
    v0_2 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_2 - 1);
    v0_1 = ((short)(v0_2 - 1));
    w0_0 = ((w0_0 * 1.03999996f));
    FPUL_ = (0x3F851EB8);
    if (((short)(v0_2 - 1) != 0)) goto L_C15B8D0;
    L_C15B8C0:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    v0_1 = (0x14);
    L_C15B8D0:;
    return F0;
    L_C15B776:;
    if ((v0_1 != 3)) goto L_C15B77E;
    v0_1 = ((FUN_0c03f346(v0_0, a5, v0_2, a7)));
    goto L_C15B8D0;
    L_C15B77E:;
    goto L_C15B8D0;
    L_C15B7A2:;
    v0_1 = *(int *)((v0_0 + 0x10));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)((((short)(*(signed char *)((v0_1 + 0x1))) * (short)0x2F8) + 0xC5411C4)); }
    *(float *)(((int)stk + 0)) = ((*(float *)(((int)stk + 0))) - ((((struct o28_float *)(v0_1))->v)));
    *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) - ((((struct o2C_float *)(v0_1))->v)));
    *(float *)(((int)stk + 8)) = ((*(float *)(((int)stk + 8))) - ((((struct o30_float *)(v0_1))->v)));
    nlVoidUnitVector(((int)stk + 0));
    w0_0 = ((*(float *)(((int)stk + 0))) * ((((struct o378C_float *)(v0_1))->v)));
    w0_1 = ((((struct o28_float *)(v0_1))->v));
    w0_1 = w0_1 + 150.0f * w0_0;
    (((struct o28_float *)(v0_0))->v) = w0_1;
    w0_0 = ((*(float *)(((int)stk + 8))) * ((((struct o378C_float *)(v0_1))->v)));
    w0_1 = ((((struct o30_float *)(v0_1))->v));
    w0_1 = w0_1 + 150.0f * w0_0;
    (((struct o30_float *)(v0_0))->v) = w0_1;
    w0_0 = ((*(float *)(((int)stk + 4))) * ((((struct o378C_float *)(v0_1))->v)));
    w0_1 = ((((struct o2C_float *)(v0_1))->v));
    w0_1 = w0_1 + 150.0f * w0_0;
    (((struct o2C_float *)(v0_0))->v) = w0_1;
    *(unsigned short *)((v0_0 + 0x1C)) = ((*(short *)((v0_0 + 0x1C))) + 0x5);
    w0_0 = math_sin_angle16((int)(((float)(*(short *)((v0_0 + 0x1C))) * 65536.0f) / 360.0f));
    w0_1 = (((((struct o378C_float *)(v0_1))->v)) * 1.5f);
    w0_1 = w0_1 + 0.100000001f * w0_0;
    (((struct o48_float *)(v0_0))->v) = w0_1;
    (((struct o44_float *)(v0_0))->v) = w0_1;
    (((struct o40_float *)(v0_0))->v) = w0_1;
    v0_2 = (v0_1);
    F0 = (0.100000001f);
    w0_0 = (w0_0);
    if (((*(signed char *)((v0_1 + 0x3715))) != 32)) goto L_C15B87A;
    if (((*(signed char *)((v0_2 + 0x3739))) != 26)) goto L_C15B87A;
    v0_2 = *(signed char *)((v0_2 + 0x16));
    v0_1 = (v0_2);
    if ((v0_2 == 2)) goto L_C15B8D0;
    L_C15B87A:;
    *(unsigned short *)((v0_0 + 0x1C)) = 0xA;
    (((struct oAC_ushort *)(v0_0))->v) = (((((struct oAC_short *)(v0_0))->v)) | 0x400);
    (((struct oB0_float *)(v0_0))->v) = 1.0f;
    goto L_C15B8C0;
    L_C15B794:;
    (((struct oA8_uchar *)(v0_0))->v) = 0x1;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    goto L_C15B7A2;
}



int FUN_0c063650(int a4, int a5, int a6)
{
    int stk[8];
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u8;
    register float t9;
    register float u10;
    register float u11;
    register float u12;
    register float u13;
    float t14;
    register int t59;
    register int t15;
    register float u32;
    register float u35;
    register float u39;

    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x4)) = *(struct mv3 *)(0xC1C4B60); }
    u0 = (((struct oC_float *)((a6 + 0x8)))->v);
    u1 = (((struct oC_float *)((a4 + 0x8)))->v);
    *(float *)(((int)stk + 0)) = (u1 + u0);
    u2 = (((struct o8_float *)((a4 + 0x8)))->v);
    u3 = (((struct o8_float *)((a6 + 0x8)))->v);
    u4 = (((struct o8_float *)(a6))->v);
    u5 = (((struct o8_float *)(a4))->v);
    u8 = ((u2 - u3) * (u2 - u3));
    u8 = u8 + ((u5 - u4)) * ((u5 - u4));
    t9 = math_signed_sqrt(u8);
    u10 = (((struct o4_float *)((a6 + 0x8)))->v);
    *(float *)(((int)stk + 4)) = u10;
    u11 = (((struct o10_float *)((a6 + 0x8)))->v);
    u12 = (((struct o4_float *)((a4 + 0x8)))->v);
    u13 = (((struct o10_float *)((a4 + 0x8)))->v);
    t14 = math_interval_overlap((u12 + u13), (u12 - u13), (u10 + u11), (u10 - u11));
    t59 = 0x0;
    if ((((u1 + u0) - t9) > 0.0f) && (t14 > 0.0f)) {
        t15 = FUN_0c0612ee(a5);
        if (t15 != 0) {
            (((struct o135_uchar *)(a5))->v) = (*(signed char *)((a4 + 0x4)));
            t59 = 0x2;
        } else {
            if ((t14 > 9.0f) && (t14 > ((u1 + u0) - t9))) {
                FUN_0c0600c0((((int)stk + 4) + 0x10), ((((struct o8_float *)(a6))->v)), ((((struct o8_float *)((a6 + 0x8)))->v)), ((((struct o8_float *)(a4))->v)), ((((struct o8_float *)((a4 + 0x8)))->v)));
                u32 = ((*(float *)(((int)stk + 20))) * ((u1 + u0) - t9));
                u32 = -u32;
                *(float *)(((int)stk + 8)) = ((*(float *)(((int)stk + 8))) + u32);
                u35 = ((*(float *)(((int)stk + 28))) * ((u1 + u0) - t9));
                u35 = -u35;
                *(float *)(((int)stk + 16)) = ((*(float *)(((int)stk + 16))) + u35);
                FUN_0c060c80(a5, (((int)stk + 4) + 0x4), a6);
            } else {
                u39 = t14;
                if (((((struct o4_float *)((a4 + 0x8)))->v)) > ((((struct o4_float *)((a6 + 0x8)))->v))) {
                    u39 = (-t14);
                }
                *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) + u39);
                FUN_0c060c80(a5, (((int)stk + 4) + 0x4), a6);
                if (((((struct o4_float *)((a6 + 0x8)))->v)) > ((((struct o4_float *)((a4 + 0x8)))->v))) {
                    (((struct o135_uchar *)(a5))->v) = (*(signed char *)((a4 + 0x4)));
                    FUN_0c061416(a5, a6, (a6 + 0x8), (a4 + 0x8));
                }
            }
            t59 = 0x1;
        }
    }
    return t59;
}


int FUN_0c165392(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = 0x5;
    if (a7 != 0) {
        t0 = 0x1;
    }
    t1 = FUN_0c03f444(t0, 0x0, 0x1, a7);
    t0 = t1;
    if (t1 == 0) {
    } else {
        t2 = (((struct oC4_int *)(t1))->v);
        FUN_0c03744a(t2, 0x0, 0x2E, (*(int *)0xC4B40CC));
        *(unsigned char *)((t1 + 0x1)) = a6;
        *(unsigned char *)((t1 + 0x2)) = a7;
        *(unsigned int *)((t1 + 0x4)) = 0xC165188;
        (((struct oAC_ushort *)(t1))->v) = 0xF;
        (((struct oA9_uchar *)(t1))->v) = 0x21;
        t3 = (~((int)0x1 << (int)a6));
        if ((int)a6 < 0) {
            t3 = 0xF;
        }
        if (a7 != 0) {
            FUN_0c07e3ae(t1, (*(signed char *)0xC273F7A));
            FUN_0c064d24(t1, 0x3, 0x9, 0x0, 0x100, (t3), 0x0, 0xFFFFFFF0);
        }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x28)) = *(struct mv3 *)(a4); }
        *(unsigned int *)((t1 + 0x38)) = a5;
        (((struct o54_float *)(t1))->v) = ((math_cos_angle16(a5)) * 18.0f);
        (((struct o4C_float *)(t1))->v) = ((math_sin_angle16(a5)) * 18.0f);
        (((struct o50_float *)(t1))->v) = 0.0f;
        (((struct o58_float *)(t1))->v) = (-(((((struct o4C_float *)(t1))->v)) / 45.0f));
        (((struct o5C_float *)(t1))->v) = 0.100000001f;
        (((struct o60_float *)(t1))->v) = (-(((((struct o54_float *)(t1))->v)) / 45.0f));
        (((struct o48_float *)(t1))->v) = 1.0f;
        (((struct o44_float *)(t1))->v) = 1.0f;
        (((struct o40_float *)(t1))->v) = 1.0f;
        *(unsigned short *)((t2 + 0x6)) = 0x23F;
        t1 = (int)((int)(nlRand()) % (int)0x14);
        (((struct o80_uint *)(t2))->v) = (int)(((float)((((t1 << 2) << 1) + t1) << 1) * 65536.0f) / 360.0f);
        (((struct o8C_float *)(t2))->v) = 0.100000001f;
        (((struct o88_float *)(t2))->v) = 0.100000001f;
        (((struct o84_float *)(t2))->v) = 0.100000001f;
        (((struct o20_float *)(t2))->v) = 0.0f;
        (((struct o1C_float *)(t2))->v) = 0.0f;
        (((struct o18_float *)(t2))->v) = 0.0f;
        *(unsigned char *)((t2 + 0x0)) = 0x1;
        t0 = 0x18;
    }
    return t0;
}

int FUN_0c06abf8(int a4, int a5, int a6, int a7, float f4)
{
    int stk[6];
    register int t0;
    register int t2;
    register int t24;
    register int t43;
    register int t71;
    register int t29;
    register int t31;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                t71 = 0x50;
                if (0.0f > ((((struct o50_float *)(a4))->v))) {
                    t2 = FUN_0c07ecc6(a4, 0x0, 0x0);
                    *(unsigned int *)(((int)stk + 0)) = t2;
                    t71 = t2;
                    if (t2 != 0) {
                        (((struct o3756_uchar *)(a4))->v) = 0x3C;
                        (((struct o374A_uchar *)(a4))->v) = 0x3C;
                        (((struct o382E_ushort *)(a4))->v) = 0x0;
                        FUN_0c07e868(a4, 0x8, 0x0, 0x0);
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        t71 = 0x15;
                    }
                }
            } else {
                t71 = t0;
                if (t0 == 3) {
                } else {
                    t71 = t0;
                    if (t0 == 4) {
                        (((struct o382E_ushort *)(a4))->v) = 0x0;
                        (((struct o374A_uchar *)(a4))->v) = 0x3C;
                        (((struct o375D_uchar *)(a4))->v) = 0x1;
                        t71 = 0x375D;
                    }
                }
            }
        } else {
            (((struct o374A_uchar *)(a4))->v) = 0x3C;
            (((struct o3756_uchar *)(a4))->v) = 0x1;
            (((struct oA8_uchar *)(a4))->v) = 0x0;
            t24 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t24 - 1);
            t71 = (short)(t24 - 1);
            if ((int)(short)(t24 - 1) <= 0) {
                (((struct o3756_uchar *)(a4))->v) = 0x3C;
                if (((((struct o160_float *)(a4))->v)) != 0.0f) {
                    (((struct o3717_uchar *)(a4))->v) = 0x40;
                    (((struct o3718_uchar *)(a4))->v) = 0x0;
                    t29 = 0x40;
                    t31 = 0x0;
                } else {
                    (((struct o3717_uchar *)(a4))->v) = 0xE;
                    (((struct o3718_uchar *)(a4))->v) = (*(signed char *)((a4 + 0x372C)));
                    t29 = 0xE;
                    t31 = (*(signed char *)((a4 + 0x372C)));
                }
                t71 = (FUN_0c085cac(a4, t29, t31, a7));
            }
        }
    } else {
        (((struct o3756_uchar *)(a4))->v) = 0x1;
        (((struct oA8_uchar *)(a4))->v) = 0x0;
        (((struct o382E_ushort *)(a4))->v) = 0x0;
        (((struct o374A_uchar *)(a4))->v) = 0x3C;
        (((struct o375D_uchar *)(a4))->v) = 0x1;
        t43 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t43 - 1);
        t71 = (short)(t43 - 1);
        if ((int)(short)(t43 - 1) > 0) {
        } else {
            if ((*(float *)0xC541098) > ((((struct o168_float *)(a4))->v))) {
                t71 = (FUN_0c085cac(a4, 0x16, 0x0, a7));
            } else {
                { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)((0x37DC + a4)); }
                (((struct o2C_float *)(a4))->v) = (((((struct o168_float *)(a4))->v)) + -1.0f);
                (((struct o375D_uchar *)(a4))->v) = 0x0;
                *(unsigned short *)((a4 + 0x1C)) = 0x78;
                if ((int)(*(signed char *)((a4 + 0x374D))) < (int)0x3) {
                    FUN_0c07c5dc(a4, 0x3, 0x2, f4);
                }
                FUN_0c160f66(a4, 0x1);
                FUN_0c059df2((*(signed char *)((a4 + 0x1))), 0x31);
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                t71 = 0x15;
            }
        }
    }
    return t71;
}
