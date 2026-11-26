/* Straight-line functions with calls and guards (batch gen_fj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
struct o0_float { float v; };
struct o0_int { int v; };
struct o126_uchar { char p[0x126]; unsigned char v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o168_float { char p[0x168]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o1B_uchar { char p[0x1B]; unsigned char v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o3760_int { char p[0x3760]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c037498(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c0588bc(int, int, int, int, int, int);
int FUN_0c058a6e(int, int, int, int, int, int);
int FUN_0c059f20(int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c064ee4(int, int);
int FUN_0c064f80(int);
int FUN_0c0659d6(int, int, int);
int FUN_0c07e2f4(int, int);
int FUN_0c1171f0(int);
int FUN_0c1173dc(int, int, int, int);
int FUN_0c13052c(int, int, int, int, float);
int FUN_0c13f118(int);
int FUN_0c14fb3c(int, Stk3, float, float, float, float, float);
int FUN_0c1512a0(int, int, Stk3);
float math_cos_angle16(int);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int nlCalcPoint(int, int);
int nlRand(void);
int nlRotateAY(int);
int nlUnitMatrix(void);
int thunk_FUN_0c058310(int, int);
int thunk_FUN_0c05abb2(int, int);
int FUN_0c04b3ae(int a4, int a5);
int FUN_0c1195d4(int a4, int a5, int a6, int a7);
int FUN_0c130890(int a4, int a5);
int FUN_0c0d6dfc(int a4, int a5, int a6, int a7);
int FUN_0c12ae74(int a4, int a5);
int FUN_0c12b51c(int a4, int a5);
int FUN_0c14d1dc(int a4, int a5, int a6, int a7);
int FUN_0c1675f6(int a4, int a5, int a6, int a7);
int FUN_0c13e90c(int a4, int a5);

int FUN_0c04b3ae(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    t0 = nlRand();
    t1 = ((~(((~t0) + 0x1) & 0x1)) + 0x1);
    if ((int)t0 >= 0) {
        t1 = (t0 & 0x1);
    }
    t0 = FUN_0c037320((t1 + 0x17), (*(int *)0xC4B410C));
    t2 = FUN_0c03f444(0x5, 0x0, t0);
    if (t2 == 0) {
        return t2;
    }
    FUN_0c03733c(t2, (t1 + 0x17), (*(int *)0xC4B410C));
    (((struct oA8_uchar *)(t2))->v) = 0x1;
    (((struct oAC_ushort *)(t2))->v) = 0x1F;
    (((struct oA9_uchar *)(t2))->v) = 0x80;
    *(unsigned char *)((t2 + 0x1)) = 0xFFFFFFFF;
    *(unsigned int *)((t2 + 0x4)) = 0xC04B35A;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t2 + 0x28)) = *(struct mv3 *)(a4); }
    (((struct o50_float *)(t2))->v) = 0.0f;
    (((struct o5C_float *)(t2))->v) = -2.0f;
    t0 = nlRand();
    t1 = ((~(((~t0) + 0x1) & 0x3)) + 0x1);
    if ((int)t0 >= 0) {
        t1 = (t0 & 0x3);
    }
    u0 = 0.5f;
    u0 = u0 + 0.25f * (float)t1;
    (((struct o40_float *)(t2))->v) = u0;
    (((struct o48_float *)(t2))->v) = u0;
    (((struct o44_float *)(t2))->v) = u0;
    t0 = nlRand();
    t1 = ((~(((~t0) + 0x1) & 0x1F)) + 0x1);
    if ((int)t0 >= 0) {
        t1 = (t0 & 0x1F);
    }
    *(unsigned int *)((t2 + 0x34)) = (((t1 << 8) << 2) << 1);
    t0 = nlRand();
    t1 = ((~(((~t0) + 0x1) & 0x1F)) + 0x1);
    if ((int)t0 >= 0) {
        t1 = (t0 & 0x1F);
    }
    *(unsigned int *)((t2 + 0x38)) = (((t1 << 8) << 2) << 1);
    t0 = nlRand();
    t1 = ((~(((~t0) + 0x1) & 0x1F)) + 0x1);
    if ((int)t0 >= 0) {
        t1 = (t0 & 0x1F);
    }
    *(unsigned int *)((t2 + 0x3C)) = (((t1 << 8) << 2) << 1);
    if (a5 != 0) {
        if (a5 != 4) {
            return a5;
        }
        return thunk_FUN_0c05abb2(0x41, (t2 + 0x28));
    }
    return thunk_FUN_0c05abb2(0x40, (t2 + 0x28));
}


int FUN_0c130890(int a4, int a5)
{
    int stk[5];
    register int t2;
    register int t3;
    register int t35;
    register float u13;
    register float u20;
    register int t25;
    register int t32;
    register int t34;
    int R1012;

    R1012 = *(int *)((int)stk + 12);

    *(unsigned char *)(((int)stk + 16)) = a5;
    t2 = FUN_0c037320(0x8, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
    t3 = FUN_0c03f444(0x1, 0x0, t2);
    t35 = t3;
    if (t3 == 0) {
    } else {
        FUN_0c03733c(t3, 0x8, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
        *(unsigned char *)((t3 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned char *)((t3 + 0x2)) = (*(signed char *)(((int)stk + 16)));
        (((struct oA8_uchar *)(t3))->v) = 0x1;
        (((struct oAC_ushort *)(t3))->v) = 0xF;
        (((struct oA9_uchar *)(t3))->v) = 0x21;
        *(unsigned short *)((t3 + 0x1C)) = 0x0;
        *(unsigned short *)((t3 + 0x1E)) = 0x0;
        (((struct o20_ushort *)(t3))->v) = 0x12C;
        *(unsigned int *)((t3 + 0x4)) = 0xC130640;
        *(unsigned int *)((t3 + 0x10)) = a4;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t3 + 0x28)) = *(struct mv3 *)((a4 + 0x28)); }
        R1012 = (t3 + 0x28);
        u13 = ((((struct o28_float *)(t3))->v));
        u13 = u13 + (math_sin_angle16((*(int *)((a4 + 0x38))))) * ((((struct o0_float *)0xC2A13B8)->v));
        (((struct o28_float *)(t3))->v) = u13;
        (((struct o2C_float *)(t3))->v) = (((((struct o2C_float *)(t3))->v)) + ((((struct o4_float *)0xC2A13B8)->v)));
        R1012 = (t3 + 0x30);
        u20 = ((((struct o30_float *)(t3))->v));
        u20 = u20 + (math_cos_angle16((*(int *)((a4 + 0x38))))) * ((((struct o8_float *)0xC2A13B8)->v));
        (((struct o30_float *)(t3))->v) = u20;
        *(unsigned int *)((t3 + 0x38)) = (*(int *)((a4 + 0x38)));
        *(unsigned int *)((t3 + 0x3C)) = 0x0;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t3 + 0x40)) = *(struct mv3 *)(0xC2A13C4); }
        *(unsigned int *)((t3 + 0x34)) = (0x10000 - (FUN_0c13052c((t3 + 0x4C), (a4 + 0x28), (((((struct o3760_int *)(a4))->v)) + 0x28), (*(int *)((t3 + 0x38))), 30.0f)));
        R1012 = 0xF0;
        *(int *)((int)stk + 8) = 0x0;
        t25 = *(signed char *)((t3 + 0x1));
        *(int *)((int)stk + 4) = (~((int)0x1 << (int)t25));
        *(int *)((int)stk + 0) = 0x100;
        FUN_0c064d24(t3, 0x1, 0x32, 0x0, 0x100, (~((int)0x1 << (int)t25)), 0x0, 0xF0);
        FUN_0c07e2f4(t3, 0x64);
        *(unsigned char *)((((((struct oC4_int *)(t3))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(t3))->v)) + 0x6)) = 0xF;
        *(unsigned char *)((((((struct oC8_int *)(t3))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC8_int *)(t3))->v)) + 0x6)) = 0x21F;
        t32 = (((struct oC8_int *)(t3))->v);
        (((struct o88_float *)(t32))->v) = 1.0f;
        (((struct o84_float *)(t32))->v) = 1.0f;
        (((struct o8C_float *)(((((struct oC8_int *)(t3))->v))))->v) = 0.0f;
        t34 = (((struct oC8_int *)(t3))->v);
        (((struct o20_float *)(t34))->v) = 0.0f;
        (((struct o1C_float *)(t34))->v) = 0.0f;
        (((struct o18_float *)(t34))->v) = 0.0f;
        t35 = 0x18;
    }
    return t35;
}


int FUN_0c12ae74(int a4, int a5)
{
    int stk[8];
    register int t2;
    register int t3;
    register int t33;
    register int t11;
    register int t12;
    register float u13;
    register float t15;
    register float u17;
    register float u21;
    register float t22;
    register float u24;
    register int t30;
    int R1012;

    R1012 = *(int *)((int)stk + 12);

    *(unsigned char *)(((int)stk + 16)) = a5;
    t2 = FUN_0c037320(0x6, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
    t3 = FUN_0c03f444(0x1, 0x0, t2);
    t33 = t3;
    if (t3 == 0) {
    } else {
        *(unsigned int *)((t3 + 0x4)) = 0xC12B034;
        *(unsigned char *)((t3 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned int *)((t3 + 0x10)) = a4;
        FUN_0c03733c(t3, 0x6, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
        (((struct oA8_uchar *)(t3))->v) = 0x1;
        (((struct oAC_ushort *)(t3))->v) = 0x1F;
        (((struct oA9_uchar *)(t3))->v) = 0x21;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t3 + 0x34)) = *(struct mv3 *)((a4 + 0x34)); }
        (((struct o48_float *)(t3))->v) = 1.0f;
        (((struct o44_float *)(t3))->v) = 1.0f;
        (((struct o40_float *)(t3))->v) = 1.0f;
        thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC53255C))) + 0x28), (t3 + 0x28));
        R1012 = (t3 + 0x28);
        t11 = *(signed char *)(((((int)stk + 12) + 0x4) + 0x0));
        *(unsigned int *)(((int)stk + 28)) = ((unsigned char)t11 << 2);
        *(unsigned int *)(((int)stk + 24)) = (((unsigned char)t11 << 2) + 0xC2A1014);
        t12 = *(int *)(((int)stk + 28));
        u13 = *(float *)(((((unsigned char)t11 << 2) + 0xC2A1014) + 0x0));
        *(unsigned int *)(((int)stk + 20)) = (t12 + 0xC2A1054);
        t15 = math_cos_angle16(((int)(((*(float *)(((t12 + 0xC2A1054) + 0x0))) * 65536.0f) / 360.0f) + 0x4000));
        u17 = ((((struct o28_float *)(t3))->v));
        u17 = u17 + t15 * u13;
        (((struct o28_float *)(t3))->v) = u17;
        R1012 = (t3 + 0x30);
        u21 = *(float *)(((*(int *)(((int)stk + 24))) + 0x0));
        t22 = math_sin_angle16(((int)(((*(float *)(((*(int *)(((int)stk + 20))) + 0x0))) * 65536.0f) / 360.0f) + 0x4000));
        u24 = ((((struct o30_float *)(t3))->v));
        u24 = u24 + t22 * u21;
        (((struct o30_float *)(t3))->v) = u24;
        (((struct o22_ushort *)(t3))->v) = (unsigned char)(*(signed char *)(((int)stk + 16)));
        *(unsigned char *)((((((struct oC4_int *)(t3))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(t3))->v)) + 0x6)) = 0xF;
        *(unsigned char *)((((((struct oC8_int *)(t3))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC8_int *)(t3))->v)) + 0x6)) = 0xF;
        R1012 = 0xF0;
        *(int *)((int)stk + 8) = 0x0;
        t30 = *(signed char *)((t3 + 0x1));
        *(int *)((int)stk + 4) = (~((int)0x1 << (int)t30));
        *(int *)((int)stk + 0) = 0x100;
        FUN_0c064d24(t3, 0x1, 0x30, 0x0, 0x100, (~((int)0x1 << (int)t30)), 0x0, 0xF0);
        FUN_0c07e2f4(t3, 0x66);
        (((struct o126_uchar *)(t3))->v) = 0x2;
        t33 = 0x126;
    }
    return t33;
}

int FUN_0c12b51c(int a4, int a5)
{
    int stk[8];
    register int t2;
    register int t3;
    register int t33;
    register int t11;
    register int t12;
    register float u13;
    register float t15;
    register float u17;
    register float u21;
    register float t22;
    register float u24;
    register int t30;
    int R1012;

    R1012 = *(int *)((int)stk + 12);

    *(unsigned char *)(((int)stk + 16)) = a5;
    t2 = FUN_0c037320(0x6, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
    t3 = FUN_0c03f444(0x1, 0x0, t2);
    t33 = t3;
    if (t3 == 0) {
    } else {
        *(unsigned int *)((t3 + 0x4)) = 0xC12B6DC;
        *(unsigned char *)((t3 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned int *)((t3 + 0x10)) = a4;
        FUN_0c03733c(t3, 0x6, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
        (((struct oA8_uchar *)(t3))->v) = 0x1;
        (((struct oAC_ushort *)(t3))->v) = 0x1F;
        (((struct oA9_uchar *)(t3))->v) = 0x21;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t3 + 0x34)) = *(struct mv3 *)((a4 + 0x34)); }
        (((struct o48_float *)(t3))->v) = 1.0f;
        (((struct o44_float *)(t3))->v) = 1.0f;
        (((struct o40_float *)(t3))->v) = 1.0f;
        thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC53255C))) + 0x28), (t3 + 0x28));
        R1012 = (t3 + 0x28);
        t11 = *(signed char *)(((((int)stk + 12) + 0x4) + 0x0));
        *(unsigned int *)(((int)stk + 28)) = ((unsigned char)t11 << 2);
        *(unsigned int *)(((int)stk + 24)) = (((unsigned char)t11 << 2) + 0xC2A1094);
        t12 = *(int *)(((int)stk + 28));
        u13 = *(float *)(((((unsigned char)t11 << 2) + 0xC2A1094) + 0x0));
        *(unsigned int *)(((int)stk + 20)) = (t12 + 0xC2A10D4);
        t15 = math_cos_angle16(((int)(((*(float *)(((t12 + 0xC2A10D4) + 0x0))) * 65536.0f) / 360.0f) + 0x4000));
        u17 = ((((struct o28_float *)(t3))->v));
        u17 = u17 + t15 * u13;
        (((struct o28_float *)(t3))->v) = u17;
        R1012 = (t3 + 0x30);
        u21 = *(float *)(((*(int *)(((int)stk + 24))) + 0x0));
        t22 = math_sin_angle16(((int)(((*(float *)(((*(int *)(((int)stk + 20))) + 0x0))) * 65536.0f) / 360.0f) + 0x4000));
        u24 = ((((struct o30_float *)(t3))->v));
        u24 = u24 + t22 * u21;
        (((struct o30_float *)(t3))->v) = u24;
        (((struct o22_ushort *)(t3))->v) = (unsigned char)(*(signed char *)(((int)stk + 16)));
        *(unsigned char *)((((((struct oC4_int *)(t3))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(t3))->v)) + 0x6)) = 0xF;
        *(unsigned char *)((((((struct oC8_int *)(t3))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC8_int *)(t3))->v)) + 0x6)) = 0xF;
        R1012 = 0xF0;
        *(int *)((int)stk + 8) = 0x0;
        t30 = *(signed char *)((t3 + 0x1));
        *(int *)((int)stk + 4) = (~((int)0x1 << (int)t30));
        *(int *)((int)stk + 0) = 0x100;
        FUN_0c064d24(t3, 0x1, 0x30, 0x0, 0x100, (~((int)0x1 << (int)t30)), 0x0, 0xF0);
        FUN_0c07e2f4(t3, 0x67);
        (((struct o126_uchar *)(t3))->v) = 0x2;
        t33 = 0x126;
    }
    return t33;
}



int FUN_0c13e90c(int a4, int a5)
{
    register int t0;
    register int t1;

    t0 = FUN_0c037320(0x1, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
    t1 = FUN_0c03f444(0x1, 0x0, t0);
    if (t1 == 0) {
        return t1;
    }
    *(unsigned char *)((t1 + 0x1)) = (*(signed char *)((a4 + 0x1)));
    t0 = *(signed char *)((t1 + 0x1));
    *(unsigned int *)((t1 + 0x4)) = 0xC13EACC;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x28)) = *(struct mv3 *)((a4 + 0x28)); }
    *(unsigned char *)((t1 + 0x2)) = a5;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x34)) = *(struct mv3 *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x34)); }
    *(unsigned int *)((t1 + 0x10)) = a4;
    (((struct o48_float *)(t1))->v) = 0.5f;
    (((struct o44_float *)(t1))->v) = 0.5f;
    (((struct o40_float *)(t1))->v) = 0.5f;
    (((struct oA8_uchar *)(t1))->v) = 0x0;
    (((struct oAC_ushort *)(t1))->v) = 0x1F;
    (((struct oA9_uchar *)(t1))->v) = 0x21;
    FUN_0c037498(((((struct oC4_int *)(t1))->v)), (*(int *)((((*(signed char *)((t1 + 0x2))) << 2) + 0xC202220))), 0x1, (*(int *)((((*(signed char *)((t1 + 0x1))) << 2) + 0xC4B40FC))));
    *(unsigned char *)((((((struct oC4_int *)(t1))->v)) + 0x0)) = 0x1;
    *(unsigned short *)((((((struct oC4_int *)(t1))->v)) + 0x6)) = 0xF;
    (((struct oA8_uchar *)(t1))->v) = 0x1;
    FUN_0c064d24(t1, 0x1, 0x33, 0x2, 0x100, (~((int)0x1 << (int)(*(signed char *)((t1 + 0x1))))), 0x0, 0x0);
    FUN_0c07e2f4(t1, 0x64);
    nlUnitMatrix();
    nlRotateAY((*(int *)((t1 + 0x38))));
    t0 = *(signed char *)((t1 + 0x2));
    nlCalcPoint((0xC2A21D8 + (((t0 << 1) + t0) << 2)), (t1 + 0x28));
    math_vec3_accumulate((t1 + 0x28), (a4 + 0x28));
    t0 = *(signed char *)((t1 + 0x2));
    *(unsigned int *)((t1 + 0x34)) = (*(int *)((0xC2021C0 + (((t0 << 1) + t0) << 2))));
    t0 = *(signed char *)((t1 + 0x2));
    *(unsigned int *)((t1 + 0x38)) = ((*(int *)((t1 + 0x38))) + (*(int *)((((((t0 << 1) + t0) << 2) + 0xC2021C0) + 0x4))));
    t0 = *(signed char *)((t1 + 0x2));
    *(unsigned int *)((t1 + 0x3C)) = (*(int *)(((0xC2021C0 + (((t0 << 1) + t0) << 2)) + 0x8)));
    *(unsigned short *)((t1 + 0x1C)) = (*(int *)((0xC202268 + ((*(signed char *)((t1 + 0x2))) << 2))));
    (((struct o1B_uchar *)(t1))->v) = (*(signed char *)0xC54223C);
    return FUN_0c13f118(t1);
}
