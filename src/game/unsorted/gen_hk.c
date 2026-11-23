/* Straight-line functions with calls and guards (batch gen_hk): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o118_int { char p[0x118]; int v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o30_float { char p[0x30]; float v; };
struct o377C_uint { char p[0x377C]; unsigned int v; };
struct o3C_float { char p[0x3C]; float v; };
struct o3C_uchar { char p[0x3C]; unsigned char v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o40_float { char p[0x40]; float v; };
struct o40_int { char p[0x40]; int v; };
struct o404_int { char p[0x404]; int v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o5_uchar { char p[0x5]; unsigned char v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o6_uchar { char p[0x6]; unsigned char v; };
struct o60_float { char p[0x60]; float v; };
struct o6C_float { char p[0x6C]; float v; };
struct o6CC_int { char p[0x6CC]; int v; };
struct o7_uchar { char p[0x7]; unsigned char v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uchar { char p[0x8]; unsigned char v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o9_uchar { char p[0x9]; unsigned char v; };
struct oA_uchar { char p[0xA]; unsigned char v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC_uchar { char p[0xC]; unsigned char v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c037bf6(int);
int FUN_0c039fbc(void);
int FUN_0c03ea04(int, int);
int FUN_0c03eff6(void);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c0582de(int, int);
int FUN_0c0588bc(int, int, int, int, int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c070320(int);
int FUN_0c07da48(int);
int FUN_0c07e2f4(int, int);
int FUN_0c085cac(int, int, int, int);
int FUN_0c085d0c(int, int, int, int);
int FUN_0c0c2944(int, int, int, int, int);
extern int FUN_0c0cff96();
int FUN_0c0dade0(int, int);
int FUN_0c1171f0(int);
int FUN_0c118810(int, int);
int FUN_0c14f8aa(int, int, int);
int FUN_0c14fb3c(int, int, int, float, float, float, float, float);
int FUN_0c150010(int, int, int, float, float, float, float);
int FUN_0c15b478(int, int, int, int, int, int, int, int);
int FUN_0c15f394(int, int);
int FUN_0c1679c2(int, int, int);
int FUN_0c167a28(int, int, int, int);
int FUN_0c1717bc(void);
int FUN_0c1717f0(int, int, int);
int FUN_0c173370(void);
int FUN_0c173454(int);
int FUN_0c17c450(int);
int FUN_0c2c6728(void);
int FUN_0c2c6740(int, int);
int SJ_SplitChunk(int, int, int);
float math_cos_angle16(int);
int math_mat_get_translate(int, int);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int math_vec3_mul_xyz(int, float, float, float);
int nlAddVector3op(int, int, int);
int nlRand(void);
float nlScalor(int);
int nlSubVector3op(int, int, int);
int nlVoidUnitVector(int);
int thunk_FUN_0c05abb2(int, int);
int FUN_0c14349c(int a4, int a5, int a6, int a7);
int FUN_0c173558(void);
int FUN_0c0e2700(int a4, int a5, int a6, int a7);
int FUN_0c0db21c(int a4);
int FUN_0c066a14(int a4, int a5, int a6);
void FUN_0c04b23c(int a4, int a5, int a6, int a7);
int FUN_0c16bf02(int a4, int a5, int a6, int a7, float f4);
int FUN_0c132724(int a4, int a5);
void FUN_0c0b4df6(int a4, float f4);
int FUN_0c1193c8(int a4, int a5, int a6, int a7);
int FUN_0c0a797c(int a4);
int FUN_0c11929c(int a4, int a5, int a6, int a7);
int FUN_0c1194d0(int a4, int a5, int a6, int a7);
int FUN_0c12bbc0(int a4, int a5);
int FUN_0c06c134(int a4);
int FUN_0c13f98c(int a4, int a5, int a6, int a7);
int FUN_0c167e80(int a4, int a5, int a6);
void FUN_0c1116a8(int a4, int a5, int a6);
int SJUNI_GetChunk(int a4, int a5, int a6, int a7);
int FUN_0c11ccd0(int a4, int a5, int a6, int a7, float f4);

int FUN_0c14349c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;

    t1 = FUN_0c037320(0x6, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
    t2 = 0x5;
    if ((int)a6 >= 0) {
        t2 = 0x1;
    }
    t3 = FUN_0c03f444(t2, 0x0, t1);
    t1 = t3;
    if (t3 == 0) {
    } else {
        FUN_0c03733c(t3, 0x6, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
        t2 = t0;
        t0 = 0x0;
        for (;;) {
            if ((int)t0 >= (int)((((struct oC0_int *)(t3))->v))) {
                break;
            }
            t2 = t0;
            t2 = (t2 << 2);
            t2 = (t2 + (0xC4 + t3));
            t2 = (*(int *)((t2 + 0x0)));
            *(unsigned short *)((t2 + 0x6)) = 0x1F;
            t0 = (t0 + 0x1);
            (((struct o88_float *)(t2))->v) = 1.0f;
            (((struct o84_float *)(t2))->v) = 1.0f;
            (((struct o8C_float *)(t2))->v) = 1.0f;
        }
        *(unsigned int *)((t3 + 0x4)) = 0xC143608;
        *(unsigned char *)((t3 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        (((struct oAC_ushort *)(t3))->v) = 0x1F;
        (((struct oA9_uchar *)(t3))->v) = 0x21;
        *(unsigned int *)((t3 + 0x10)) = a4;
        (((struct o48_float *)(t3))->v) = 1.0f;
        (((struct o44_float *)(t3))->v) = 1.0f;
        (((struct o40_float *)(t3))->v) = 1.0f;
        t0 = *(int *)(((((*(int *)((((a5 & 0x1) << 2) + 0xC20259C))) << 2) + (0xC4 + a4)) + 0x0));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t3 + 0x28)) = *(struct mv3 *)((((((a5 & 0x1) << 1) + (a5 & 0x1)) << 2) + 0xC2025A4)); }
        FUN_0c0582de((t3 + 0x28), (t0 + 0x28));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t3 + 0x4C)) = *(struct mv3 *)(a7); }
        FUN_0c17c450((t3 + 0x4C));
        u0 = *(float *)0xC143654;
        math_vec3_mul_xyz((t3 + 0x4C), u0, u0, u0);
        if ((int)a6 >= 0) {
            FUN_0c07e2f4(t3, a6);
            (((struct o48_float *)(t3))->v) = 1.0f;
            (((struct o44_float *)(t3))->v) = 1.0f;
            (((struct o40_float *)(t3))->v) = 1.0f;
            FUN_0c064d24(t3, 0x1, 0x40, 0x0, 0x100, (~((int)0x1 << (int)(*(signed char *)((t3 + 0x1))))), 0x0, 0xF0);
        }
        *(unsigned short *)((t3 + 0x1C)) = 0x3C;
        t1 = 0x3C;
    }
    return t1;
}

int FUN_0c173558(void)
{
    int stk[10];

    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x1C)) = *(struct mv3 *)(0xC20482C); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x10)) = *(struct mv3 *)(0xC204838); }
    FUN_0c03eff6();
    *(unsigned char *)0xC542237 = 0x0;
    (((struct o0_uchar *)0xC535BAC)->v) = 0x1;
    (((struct o0_uchar *)0xC5394E4)->v) = 0x1;
    (((struct o0_uchar *)0xC53CE1C)->v) = 0x1;
    (((struct o0_uchar *)0xC540754)->v) = 0x1;
    (((struct o1_uchar *)0xC475DBC)->v) = 0x0;
    (((struct o2_uchar *)0xC475DBC)->v) = 0x1;
    (((struct o6_uchar *)0xC475DBC)->v) = 0x0;
    (((struct o3_uchar *)0xC475DBC)->v) = 0x0;
    (((struct o4_uchar *)0xC475DBC)->v) = 0x0;
    (((struct o5_uchar *)0xC475DBC)->v) = 0x0;
    (((struct o8_uchar *)0xC475DBC)->v) = 0x1;
    (((struct o9_uchar *)0xC475DBC)->v) = 0x0;
    (((struct o7_uchar *)0xC475DBC)->v) = 0x0;
    (((struct o0_uchar *)0xC475DBC)->v) = 0x0;
    FUN_0c173370();
    FUN_0c1717bc();
    FUN_0c1717f0(0x0, 0x0, 0x0);
    FUN_0c03ea04(0x0, 0x0);
    (((struct o8_float *)0xC5410B8)->v) = 0.0f;
    (((struct o0_float *)0xC5410B8)->v) = 0.0f;
    (((struct o4_float *)0xC5410B8)->v) = -1.0f;
    (((struct oA_uchar *)0xC535BAC)->v) = 0x0;
    (((struct oA_uchar *)0xC5394E4)->v) = 0x1;
    (((struct oA_uchar *)0xC53CE1C)->v) = 0x2;
    (((struct oA_uchar *)0xC540754)->v) = 0x3;
    (((struct o3C_float *)0xC5325BC)->v) = 1000.0f;
    (((struct o3C_float *)0xC535EF4)->v) = 1000.0f;
    *(float *)0xC539868 = 1000.0f;
    *(float *)0xC53D1A0 = 1000.0f;
    *(unsigned int *)(((int)stk + 12)) = 0xC475DC8;
    (((struct oC_uchar *)0xC475DBC)->v) = 0x0;
    *(unsigned int *)(((int)stk + 0)) = 0xC475E20;
    *(unsigned char *)0xC475E20 = 0x0;
    *(unsigned int *)(((int)stk + 4)) = 0xC475E78;
    *(unsigned char *)0xC475E78 = 0x3;
    *(unsigned int *)(((int)stk + 8)) = 0xC475ED0;
    *(unsigned char *)0xC475ED0 = 0x3;
    FUN_0c173454(0x0);
    FUN_0c173454(0x1);
    FUN_0c173454(0x2);
    FUN_0c173454(0x3);
    FUN_0c039fbc();
    (((struct o3C_uchar *)((*(int *)(((int)stk + 12)))))->v) = 0x0;
    (((struct o3C_uchar *)((*(int *)(((int)stk + 0)))))->v) = 0x0;
    (((struct o3C_uchar *)((*(int *)(((int)stk + 4)))))->v) = 0x0;
    (((struct o3C_uchar *)((*(int *)(((int)stk + 8)))))->v) = 0x0;
    *(unsigned char *)0xC532540 = 0x1;
    (((struct o0_uchar *)0xC5325BC)->v) = 0x1;
    *(unsigned char *)0xC535E78 = 0x1;
    (((struct o0_uchar *)0xC535EF4)->v) = 0x1;
    *(unsigned char *)0xC5397B0 = 0x0;
    *(unsigned char *)0xC53D0E8 = 0x0;
    *(unsigned char *)0xC541F44 = ((*(signed char *)0xC541F44) + 0x1);
    return 0xA8;
}

int FUN_0c0e2700(int a4, int a5, int a6, int a7)
{
    int stk[7];
    register float u20;
    register int t22;
    register int t24;
    register int t36;
    register int t29;
    register int t30;
    register int t33;
    register float u35;
    register int t12;
    register int t13;

    *(unsigned int *)(((int)stk + 8)) = a6;
    *(unsigned int *)(((int)stk + 4)) = a7;
    *(unsigned int *)(((int)stk + 0)) = (((a5 << 2) << 1) + 0xC1CAFB4);
    *(unsigned int *)(((int)stk + 12)) = (*(int *)(((((a5 << 2) << 1) + 0xC1CAFB4) + 0x0)));
    if ((int)(*(int *)(((*(int *)(((int)stk + 0))) + 0x4))) >= 0) {
        thunk_FUN_0c05abb2((*(int *)(((*(int *)(((int)stk + 0))) + 0x4))), a4);
    } else {
        t12 = (((a5 << 2) << 1) + 0xC1CAFB4);
        t13 = a6;
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x10)) = *(struct mv3 *)(a4); }
    *(float *)(((int)stk + 20)) = ((*(float *)(((int)stk + 20))) - 100.0f);
    FUN_0c14fb3c((((int)stk + 0) + 0x10), t12, t13, 0.899999976f, 0.829999983f, 0.629999995f, 4.0f, (1.0f + 1.0f));
    u20 = *(float *)(((((*(int *)(((int)stk + 4))) << 2) << 1) + 0xC1CA750));
    t22 = (int)((int)(nlRand()) % (int)0x28);
    *(unsigned int *)(((int)stk + 0)) = (int)(((float)(((t22 << 2) << 1) + t22) * 65536.0f) / 360.0f);
    t24 = FUN_0c03f444(0x5, 0x0, 0x8);
    t36 = t24;
    if (t24 != 0) {
        *(unsigned int *)((t24 + 0x4)) = 0xC0E25AC;
        *(unsigned char *)((t24 + 0x1)) = 0xFFFFFFFF;
        (((struct oAC_ushort *)(t24))->v) = 0xF;
        (((struct oA9_uchar *)(t24))->v) = 0x21;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t24 + 0x28)) = *(struct mv3 *)(a4); }
        *(unsigned int *)((t24 + 0x38)) = (*(int *)(((int)stk + 0)));
        (((struct o50_float *)(t24))->v) = u20;
        *(unsigned short *)((t24 + 0x1E)) = (*(short *)(((int)stk + 8)));
        (((struct o20_ushort *)(t24))->v) = (*(int *)(((int)stk + 4)));
        t29 = (*(int *)(((int)stk + 12)));
        t30 = 0x0;
        for (;;) {
            t33 = *(int *)((((0xC4 + t24) + t30) + 0x0));
            FUN_0c03744a(t33, 0x0, (*(int *)((t29 + 0x0))), (*(int *)0xC4B410C));
            *(unsigned short *)((t33 + 0x6)) = 0x1F;
            u35 = (((struct o4_float *)(t29))->v);
            t30 = (t30 + 0x4);
            (((struct o8C_float *)(t33))->v) = u35;
            (((struct o88_float *)(t33))->v) = u35;
            (((struct o84_float *)(t33))->v) = u35;
            t29 = (t29 + 0x8);
            if ((unsigned int)t30 >= (unsigned int)0x20) {
                break;
            }
        }
        t36 = 0x84;
    }
    return t36;
}

int FUN_0c0db21c(int a4)
{

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R6;
    register int R7;
    register int R10;
    register int R12;
    register float F2;
    register float F3;
    register float F4;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    v0_1 = a4;
    v0_3 = *(signed char *)((v0_1 + 0x14));
    v0_2 = (v0_3);
    v0_0 = (v0_1);
    if ((v0_3 == 0)) goto L_C0DB254;
    if ((v0_2 == 1)) goto L_C0DB27A;
    if ((v0_2 == 2)) goto L_C0DB286;
    return FUN_0c03f346(v0_0, R5, R6, R7);
    L_C0DB286:;
    (((struct o28_float *)(v0_0))->v) = (((((struct o28_float *)(v0_0))->v)) + ((((struct o4C_float *)(v0_0))->v)));
    (((struct o2C_float *)(v0_0))->v) = (((((struct o2C_float *)(v0_0))->v)) + ((((struct o50_float *)(v0_0))->v)));
    (((struct o30_float *)(v0_0))->v) = (((((struct o30_float *)(v0_0))->v)) + ((((struct o54_float *)(v0_0))->v)));
    (((struct o4C_float *)(v0_0))->v) = (((((struct o4C_float *)(v0_0))->v)) + ((((struct o58_float *)(v0_0))->v)));
    (((struct o50_float *)(v0_0))->v) = (((((struct o50_float *)(v0_0))->v)) + ((((struct o5C_float *)(v0_0))->v)));
    (((struct o54_float *)(v0_0))->v) = (((((struct o54_float *)(v0_0))->v)) + ((((struct o60_float *)(v0_0))->v)));
    *(unsigned int *)((v0_0 + 0x34)) = ((*(int *)((v0_0 + 0x34))) + ((((struct o0_int *)0xC287DA0)->v)));
    *(unsigned int *)((v0_0 + 0x38)) = ((*(int *)((v0_0 + 0x38))) + ((((struct o4_int *)0xC287DA0)->v)));
    *(unsigned int *)((v0_0 + 0x3C)) = ((*(int *)((v0_0 + 0x3C))) + ((((struct o8_int *)0xC287DA0)->v)));
    v0_3 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_3 - 1);
    v0_2 = ((short)(v0_3 - 1));
    v0_1 = (0xC287DA0);
    if (((short)(v0_3 - 1) != 0)) goto L_C0DB34C;
    FUN_0c0dade0(v0_0, 0x0);
    thunk_FUN_0c05abb2(0x50, 0x0);
    v0_1 = *(int *)((0xC287DAC + (((int)((int)(nlRand()) % (int)0x5)) << 2)));
    FUN_0c0c2944(v0_1, 0x0, 0x0, (v0_0 + 0x28), 0xFFFFFFFF);
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    v0_2 = (0x14);
    L_C0DB34C:;
    return v0_2;
    L_C0DB27A:;
    *(unsigned short *)((v0_0 + 0x1C)) = 0x3C;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    goto L_C0DB286;
    L_C0DB254:;
    (((struct oA8_uchar *)(v0_0))->v) = 0x1;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_0 + 0x4C)) = *(struct mv3 *)(0xC287D88); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_0 + 0x58)) = *(struct mv3 *)(0xC287D94); }
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    goto L_C0DB27A;
}

int FUN_0c066a14(int a4, int a5, int a6)
{
    int stk[7];
    register int t7;
    register float t8;
    register float t32;
    register float t56;
    register int t70;

    *(unsigned int *)(((int)stk + 0)) = a4;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x10)) = *(struct mv3 *)(0xC1C4BF0); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((*(int *)(((int)stk + 0)))) = *(struct mv3 *)((a5 + 0x8)); }
    *(float *)(((int)stk + 4)) = (((((struct o8_float *)(a6))->v)) - ((((struct o8_float *)(a5))->v)));
    *(float *)(((int)stk + 12)) = (((((struct o8_float *)((a6 + 0x8)))->v)) - ((((struct o8_float *)((a5 + 0x8)))->v)));
    *(float *)(((int)stk + 8)) = (((((struct o4_float *)((a6 + 0x8)))->v)) - ((((struct o4_float *)((a5 + 0x8)))->v)));
    t7 = *(signed char *)((a5 + 0x1));
    if (t7 != 0) {
        if (t7 != 1) {
            t70 = t7;
            if (t7 != 2) {
            } else {
                t8 = nlScalor((((int)stk + 0) + 0x4));
                if (t8 != 0.0f) {
                    nlVoidUnitVector((((int)stk + 0) + 0x4));
                    *(float *)(((int)stk + 16)) = ((*(float *)(((int)stk + 4))) * ((((struct o14_float *)(a5))->v)));
                    *(float *)(((int)stk + 24)) = ((*(float *)(((int)stk + 12))) * ((((struct o14_float *)(a5))->v)));
                    *(float *)(((int)stk + 20)) = ((*(float *)(((int)stk + 8))) * ((((struct o18_float *)(a5))->v)));
                }
                t70 = (math_vec3_accumulate((*(int *)(((int)stk + 0))), (((int)stk + 0) + 0x10)));
            }
        } else {
            t32 = nlScalor((((int)stk + 0) + 0x4));
            if (t32 != 0.0f) {
                nlVoidUnitVector((((int)stk + 0) + 0x4));
                *(float *)(((int)stk + 16)) = ((*(float *)(((int)stk + 4))) * ((((struct o14_float *)(a5))->v)));
                *(float *)(((int)stk + 24)) = ((*(float *)(((int)stk + 12))) * ((((struct o1C_float *)(a5))->v)));
                *(float *)(((int)stk + 20)) = ((*(float *)(((int)stk + 8))) * ((((struct o18_float *)(a5))->v)));
            }
            t70 = (math_vec3_accumulate((*(int *)(((int)stk + 0))), (((int)stk + 0) + 0x10)));
        }
    } else {
        t56 = nlScalor((((int)stk + 0) + 0x4));
        if (t56 != 0.0f) {
            nlVoidUnitVector((((int)stk + 0) + 0x4));
            *(float *)(((int)stk + 16)) = ((*(float *)(((int)stk + 4))) * ((((struct o14_float *)(a5))->v)));
            *(float *)(((int)stk + 24)) = ((*(float *)(((int)stk + 12))) * ((((struct o14_float *)(a5))->v)));
            *(float *)(((int)stk + 20)) = ((*(float *)(((int)stk + 8))) * ((((struct o14_float *)(a5))->v)));
        }
        t70 = (math_vec3_accumulate((*(int *)(((int)stk + 0))), (((int)stk + 0) + 0x10)));
    }
    return t70;
}

void FUN_0c04b23c(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;
    int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;

    t4 = 0x0;
    t5 = 0x0;
    for (;;) {
        if ((*(signed char *)((((t5 * 0x3938) + 0xC532498) + 0x3714))) != 0) {
            if (t5 != (*(signed char *)0xC542363)) {
                t6 = 0xC1B7E04;
                if (t4 != 0) {
                    if (t4 != 1) {
                        (((struct oA8_uchar *)(((t5 * 0x3938) + 0xC532498)))->v) = 0x0;
                    } else {
                        if (((*(signed char *)((((t5 * 0x3938) + 0xC532498) + 0x3715))) == 23) && (t0 = *(signed char *)((((t5 * 0x3938) + 0xC532498) + 0x15)), t0 == 10)) {
                            t7 = t1;
                            t8 = t2;
                        } else {
                            t2 = 0xC085CAC;
                            FUN_0c085cac(((t5 * 0x3938) + 0xC532498), 0x17, 0xA, a7);
                        }
                        t1 = t7;
                        t2 = t8;
                        t2 = 0xC1B7DE0;
                        (((struct oA4_uint *)(((t5 * 0x3938) + 0xC532498)))->v) = (a4 + 0x64);
                        t1 = ((t5 * 0x3938) + 0xC532498);
                        t2 = (t2 + ((((a5 << 1) << 1) + (a5 << 1)) << 2));
                        t1 = (t1 + 0x28);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t1) = *(struct mv3 *)(t2); }
                        t2 = ((((a5 << 1) << 1) + (a5 << 1)) << 2);
                        t1 = ((t5 * 0x3938) + 0xC532498);
                        t2 = (t2 + t6);
                        t2 = (t2 + 0xC);
                        t1 = (t1 + 0x34);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t1) = *(struct mv3 *)(t2); }
                        t4 = (t4 + 0x1);
                    }
                } else {
                    if (((*(signed char *)((((t5 * 0x3938) + 0xC532498) + 0x3715))) == 23) && (t3 = *(signed char *)((((t5 * 0x3938) + 0xC532498) + 0x15)), t3 == 9)) {
                        t7 = t1;
                        t8 = t2;
                    } else {
                        FUN_0c085cac(((t5 * 0x3938) + 0xC532498), 0x17, 0x9, a7);
                    }
                    t1 = t7;
                    t2 = t8;
                    t2 = 0xC1B7DD4;
                    (((struct oA4_uint *)(((t5 * 0x3938) + 0xC532498)))->v) = (a4 + 0x64);
                    t1 = ((t5 * 0x3938) + 0xC532498);
                    t2 = (t2 + ((((a5 << 1) << 1) + (a5 << 1)) << 2));
                    t1 = (t1 + 0x28);
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(t1) = *(struct mv3 *)(t2); }
                    t1 = ((t5 * 0x3938) + 0xC532498);
                    t2 = ((((a5 << 1) << 1) + (a5 << 1)) << 2);
                    t1 = (t1 + 0x34);
                    t2 = (t2 + t6);
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(t1) = *(struct mv3 *)(t2); }
                    t4 = (t4 + 0x1);
                }
            }
        }
        t5 = (t5 + 0x1);
        if ((int)t5 >= (int)0x4) {
            break;
        }
    }
}

int FUN_0c16bf02(int a4, int a5, int a6, int a7, float f4)
{
    int t0;
    int t1;
    register int t2;
    register float u0;

    t2 = *(signed char *)((a4 + 0x14));
    if (t2 != 0) {
        if (t2 != 1) {
            if (t2 != 2) {
                return t2;
            }
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        if (((*(signed char *)((a4 + 0x131))) == 0) && (t0 = (((struct o404_int *)(a4))->v), t0 == 0)) {
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
            if ((int)(short)((t0 - 1) + 0x1) <= 0) {
                (((struct o14_uchar *)(a4))->v) = 0x2;
                return 0x14;
            }
            t0 = *(short *)((a4 + 0x1E));
            *(unsigned short *)((a4 + 0x1E)) = (t0 + 0x1);
            if ((int)(short)((t0 + 0x1) - 1) < (int)0x3C) {
                u0 = *(float *)0xC16C070;
                (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) + u0);
                (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) + u0);
                (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + u0);
            }
            return nlAddVector3op((a4 + 0x28), (a4 + 0x28), (a4 + 0x4C));
        }
        FUN_0c150010((a4 + 0x28), a5, a6, 1.0f, 1.0f, 1.0f, 1.0f);
        (((struct o14_uchar *)(a4))->v) = 0x2;
        return 0x14;
    }
    (((struct o14_uchar *)(a4))->v) = 0x1;
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct oAC_ushort *)(a4))->v) = 0x1F;
    (((struct oA9_uchar *)(a4))->v) = 0x21;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x40)) = *(struct mv3 *)(0xC2A393C); }
    *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
    *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x1F;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC4_int *)(a4))->v)) + 0x84)) = *(struct mv3 *)(0xC2A3968); }
    if (((*(signed char *)((a4 + 0x131))) == 0) && (t1 = (((struct o404_int *)(a4))->v), t1 == 0)) {
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        if ((int)(short)((t0 - 1) + 0x1) <= 0) {
            (((struct o14_uchar *)(a4))->v) = 0x2;
            return 0x14;
        }
        t0 = *(short *)((a4 + 0x1E));
        *(unsigned short *)((a4 + 0x1E)) = (t0 + 0x1);
        if ((int)(short)((t0 + 0x1) - 1) < (int)0x3C) {
            u0 = *(float *)0xC16C070;
            (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) + u0);
            (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) + u0);
            (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + u0);
        }
        return nlAddVector3op((a4 + 0x28), (a4 + 0x28), (a4 + 0x4C));
    }
    FUN_0c150010((a4 + 0x28), 0x1F, a6, 1.0f, 1.0f, 1.0f, 1.0f);
    (((struct o14_uchar *)(a4))->v) = 0x2;
    return 0x14;
}

int FUN_0c132724(int a4, int a5)
{
    register int t2;
    register int t18;

    FUN_0c037320(0x6, (*(int *)((((signed char)a5 << 2) + 0xC4B40FC))));
    t2 = FUN_0c03f444(0x5, 0x0, 0x1);
    t18 = t2;
    if (t2 != 0) {
        FUN_0c03744a(((((struct oC4_int *)(t2))->v)), 0x0, 0x6, (*(int *)((((signed char)a5 << 2) + 0xC4B40FC))));
        (((struct oA8_uchar *)(t2))->v) = 0x1;
        *(unsigned char *)((t2 + 0x1)) = a5;
        (((struct oAC_ushort *)(t2))->v) = 0x1;
        (((struct oA9_uchar *)(t2))->v) = 0x21;
        (((struct o14_uchar *)(t2))->v) = 0x0;
        (((struct o15_uchar *)(t2))->v) = 0x0;
        *(unsigned short *)((t2 + 0x1C)) = 0x0;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t2 + 0x28)) = *(struct mv3 *)(a4); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t2 + 0x34)) = *(struct mv3 *)(0xC2A1668); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t2 + 0x40)) = *(struct mv3 *)(0xC2A165C); }
        *(unsigned int *)((t2 + 0x4)) = 0xC132698;
        *(unsigned char *)((((((struct oC4_int *)(t2))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(t2))->v)) + 0x6)) = 0x239;
        (((struct o80_uint *)(((((struct oC4_int *)(t2))->v))))->v) = ((int)(((((float)((int)((int)(nlRand()) % (int)0xB4)) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF);
        (((struct o84_float *)(((((struct oC4_int *)(t2))->v))))->v) = 0.200000003f;
        (((struct o88_float *)(((((struct oC4_int *)(t2))->v))))->v) = 0.200000003f;
        (((struct o8C_float *)(((((struct oC4_int *)(t2))->v))))->v) = 0.200000003f;
        (((struct o18_float *)(((((struct oC4_int *)(t2))->v))))->v) = 1.0f;
        (((struct o1C_float *)(((((struct oC4_int *)(t2))->v))))->v) = 1.0f;
        (((struct o20_float *)(((((struct oC4_int *)(t2))->v))))->v) = 1.0f;
        t18 = 0x20;
    }
    return t18;
}

void FUN_0c0b4df6(int a4, float f4)
{
    int stk[3];
    register int t0;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;
    register int t11;
    register float u13;
    register float u14;
    register int t25;
    register int t35;
    register int t10;
    register int t20;
    register int t21;
    register int t22;
    register int t23;
    register int t32;
    int t33;

    t0 = *(signed char *)0xC542363;
    if ((*(signed char *)0xC54223C) == 0) {
        t5 = 0xC0B4E4C;
        t6 = 0xC532498;
        t7 = 0x3938;
        t8 = 0xC5421F8;
        t9 = 0xFFFFFFFF;
        t11 = 0x0;
        u13 = f4;
        u14 = 999999.0f;
        for (;;) {
            if ((int)t11 >= (int)0xC) {
                break;
            }
            t7 = 0x41C;
            t10 = t11;
            t10 = (t10 << 2);
            t7 = (t7 + 0xC540978);
            t10 = (t10 + t7);
            t10 = (t10 + 0x40);
            t10 = (*(int *)((t10 + 0x0)));
            if (t10 != 0) {
                t7 = 0xC17C2F0;
                t8 = ((int)stk + 0);
                t5 = (nlSubVector3op(t8, (t10 + 0x28), (a4 + 0x28)));
                t8 = ((int)stk + 0);
                u13 = ((nlScalor(t8)));
                if (u14 > u13) {
                    t9 = t11;
                    u14 = u13;
                }
            } else {
                t20 = t5;
                t21 = t6;
                t22 = t7;
                t23 = t8;
            }
            t5 = t20;
            t11 = (t11 + 0x1);
            t6 = t21;
            t7 = t22;
            t8 = t23;
        }
        if ((int)t9 >= 0) {
            t25 = (((struct o40_int *)(((t9 << 2) + 0xC540D94)))->v);
            (((struct o377C_uint *)(a4))->v) = t25;
            { struct mv3 { int w[3]; }; *(struct mv3 *)((0x380C + a4)) = *(struct mv3 *)((t25 + 0x28)); }
        }
    } else {
        t35 = 0x2650;
        if (((*(signed char *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x14))) == 1) && ((t32 = *(signed char *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x3739)), t32 == 1) && (t33 = *(signed char *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x16)), t33 == 2))) {
            t35 = 0x760;
        }
        math_mat_get_translate((t35 + (((short)t0 * (short)0x3938) + 0xC532498)), ((int)stk + 0));
        (((struct o377C_uint *)(a4))->v) = (((short)t0 * (short)0x3938) + 0xC532498);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((0x380C + a4)) = *(struct mv3 *)(((int)stk + 0)); }
    }
}

int FUN_0c1193c8(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    register int t2;
    register int t3;
    register int t4;

    t2 = *(int *)((a4 + 0x10));
    if ((*(signed char *)((t2 + 0x14))) == 80) {
        (((struct o14_uchar *)(a4))->v) = 0x63;
    }
    t3 = *(signed char *)((a4 + 0x14));
    if (t3 != 0) {
        if (t3 != 1) {
            if (t3 != 99) {
                return t3;
            }
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)(((*(int *)((a4 + 0x10))) + 0x28)); }
        FUN_0c1171f0(a4);
        t3 = (((struct oC4_int *)(a4))->v);
        FUN_0c0588bc((t3 + 0x6C), 0xC291DBC, 0xC291DB0, (*(short *)(((0x41C + t2) + 0x8))), ((*(short *)(((0x41C + t2) + 0xE)))), 0x0);
        t4 = t3;
        if (((*(signed char *)(((*(int *)((a4 + 0x10))) + 0x2))) == 1) && (t0 = *(short *)(((0x41C + t2) + 0xE)), t0 == 0)) {
            t0 = (((struct oC4_int *)(a4))->v);
            FUN_0c0588bc((t0 + 0x6C), 0xC291DBC, 0xC291DB0, 0x0, 0x2, 0x0);
            t4 = t0;
        }
        return nlAddVector3op((t4 + 0x6C), (t4 + 0x6C), (0x90 + t4));
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct oAC_ushort *)(a4))->v) = 0x1F;
    (((struct oA9_uchar *)(a4))->v) = 0x21;
    FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x8, 0xD, (*(int *)0xC4B410C));
    t0 = (((struct oC4_int *)(a4))->v);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x90 + t0)) = *(struct mv3 *)((t0 + 0x6C)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)(((*(int *)((a4 + 0x10))) + 0x28)); }
    FUN_0c1171f0(a4);
    t0 = (((struct oC4_int *)(a4))->v);
    FUN_0c0588bc((t0 + 0x6C), 0xC291DBC, 0xC291DB0, (*(short *)(((0x41C + t2) + 0x8))), ((*(short *)(((0x41C + t2) + 0xE)))), 0x0);
    t3 = t0;
    if (((*(signed char *)(((*(int *)((a4 + 0x10))) + 0x2))) == 1) && (t1 = *(short *)(((0x41C + t2) + 0xE)), t1 == 0)) {
        t0 = (((struct oC4_int *)(a4))->v);
        FUN_0c0588bc((t0 + 0x6C), 0xC291DBC, 0xC291DB0, 0x0, 0x2, 0x0);
        t3 = t0;
    }
    return nlAddVector3op((t3 + 0x6C), (t3 + 0x6C), (0x90 + t3));
}

int FUN_0c0a797c(int a4)
{
    int stk[7];
    register float u2;
    register float u5;
    register float u9;
    register float u15;
    register float u19;
    register float u30;
    register int t38;
    register int t39;
    register int t49;
    register int t51;

    if (((*(int *)0xC542260) & 3) == 0) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)((a4 + 0x28)); }
        u2 = *(float *)0xC0A7AB4;
        u5 = (*(float *)(((int)stk + 0)));
        u5 = u5 + u2 * (math_sin_angle16(((*(int *)((a4 + 0x38))) + 0x4000)));
        *(float *)(((int)stk + 0)) = u5;
        u9 = (*(float *)(((int)stk + 8)));
        u9 = u9 + u2 * (math_cos_angle16(((*(int *)((a4 + 0x38))) + 0x4000)));
        *(float *)(((int)stk + 8)) = u9;
        FUN_0c14f8aa((*(signed char *)((a4 + 0x1))), ((int)stk + 0), 0x2);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)((a4 + 0x28)); }
        u15 = (*(float *)(((int)stk + 0)));
        u15 = u15 + u2 * (math_sin_angle16(((*(int *)((a4 + 0x38))) - 16384)));
        *(float *)(((int)stk + 0)) = u15;
        u19 = (*(float *)(((int)stk + 8)));
        u19 = u19 + u2 * (math_cos_angle16(((*(int *)((a4 + 0x38))) - 16384)));
        *(float *)(((int)stk + 8)) = u19;
        FUN_0c14f8aa((*(signed char *)((a4 + 0x1))), ((int)stk + 0), 0x2);
    }
    FUN_0c07da48(a4);
    FUN_0c070320(a4);
    u30 = (((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v);
    if ((int)(int)u30 <= (int)0x2F) {
        t38 = (a4 + 0x28);
        t39 = (a4 + 0x4C);
        if ((int)(int)u30 < (int)(*(int *)0xC25D3CC)) {
        } else {
            math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
            t38 = (a4 + 0x4C);
            t39 = (a4 + 0x58);
        }
        math_vec3_accumulate(t38, t39);
    }
    t49 = FUN_0c037bf6(a4);
    t51 = (unsigned char)t49;
    if ((unsigned char)t49 != 0) {
        t51 = (FUN_0c085d0c(a4, 0x0, 0x0, 0x0));
    }
    return t51;
}

int FUN_0c11929c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x14));
    t1 = *(int *)((a4 + 0x10));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 99) {
                return t0;
            }
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)(((*(int *)((a4 + 0x10))) + 0x28)); }
        FUN_0c1171f0(a4);
        t0 = *(signed char *)((0x14 + (*(int *)((a4 + 0x10)))));
        t2 = t0;
        if (t0 == 80) {
            (((struct o14_uchar *)(a4))->v) = 0x63;
            t2 = 0x14;
        }
        return t2;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct oAC_ushort *)(a4))->v) = 0x1F;
    (((struct oA9_uchar *)(a4))->v) = 0x21;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)(((*(int *)((a4 + 0x10))) + 0x28)); }
    FUN_0c1171f0(a4);
    FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x5, 0xD, (*(int *)0xC4B410C));
    if ((*(signed char *)(((t1 + 0x41C) + 0x4))) != 0) {
        t0 = 0x0;
        for (;;) {
            t2 = FUN_0c03f444(0x8, 0x1, (*(int *)((0xC291E04 + ((*(signed char *)(((t1 + 0x41C) + 0x4))) << 2)))));
            if (t2 != 0) {
                *(unsigned char *)((t2 + 0x1)) = 0xFFFFFFFF;
                *(unsigned int *)((t2 + 0x4)) = 0xC11902C;
                *(unsigned char *)((t2 + 0x2)) = t0;
                *(unsigned int *)((t2 + 0x10)) = (*(int *)((a4 + 0x10)));
                { struct mv3 { int w[3]; }; *(struct mv3 *)((t2 + 0x4C)) = *(struct mv3 *)((((((struct oC4_int *)(a4))->v)) + 0x6C)); }
            }
            t0 = (t0 + 0x1);
            if ((int)t0 >= (int)0x5) {
                break;
            }
        }
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)(((*(int *)((a4 + 0x10))) + 0x28)); }
    FUN_0c1171f0(a4);
    t0 = *(signed char *)((0x14 + (*(int *)((a4 + 0x10)))));
    t1 = t0;
    if (t0 == 80) {
        (((struct o14_uchar *)(a4))->v) = 0x63;
        t1 = 0x14;
    }
    return t1;
}

int FUN_0c1194d0(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(int *)((a4 + 0x10));
    if ((*(signed char *)((t0 + 0x14))) == 80) {
        (((struct o14_uchar *)(a4))->v) = 0x63;
    }
    if ((*(short *)(((0x41C + t0) + 0xE))) == 0) {
        (((struct oA8_uchar *)(a4))->v) = 0x0;
    } else {
        (((struct oA8_uchar *)(a4))->v) = 0x1;
    }
    t1 = *(signed char *)((a4 + 0x14));
    if (t1 != 0) {
        if (t1 != 1) {
            if (t1 != 99) {
                return t1;
            }
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)(((*(int *)((a4 + 0x10))) + 0x28)); }
        FUN_0c1171f0(a4);
        t1 = (((struct oC4_int *)(a4))->v);
        FUN_0c0588bc((t1 + 0x6C), 0xC291DD4, 0xC291DC8, (*(short *)(((0x41C + t0) + 0xC))), 0x4, 0x0);
        return nlAddVector3op((t1 + 0x6C), (t1 + 0x6C), (0x90 + t1));
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct oAC_ushort *)(a4))->v) = 0x1F;
    (((struct oA9_uchar *)(a4))->v) = 0x21;
    FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x6, 0xD, (*(int *)0xC4B410C));
    t1 = (((struct oC4_int *)(a4))->v);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x90 + t1)) = *(struct mv3 *)((t1 + 0x6C)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)(((*(int *)((a4 + 0x10))) + 0x28)); }
    FUN_0c1171f0(a4);
    t1 = (((struct oC4_int *)(a4))->v);
    FUN_0c0588bc((t1 + 0x6C), 0xC291DD4, 0xC291DC8, (*(short *)(((0x41C + t0) + 0xC))), 0x4, 0x0);
    return nlAddVector3op((t1 + 0x6C), (t1 + 0x6C), (0x90 + t1));
}

int FUN_0c12bbc0(int a4, int a5)
{
    int stk[1];
    register int t2;
    register int t3;
    register int t25;
    register float u13;

    *(unsigned char *)(((int)stk + 0)) = a5;
    t2 = FUN_0c037320(0xA, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
    t3 = FUN_0c03f444(0x5, 0x0, t2);
    t25 = t3;
    if (t3 != 0) {
        *(unsigned int *)((t3 + 0x4)) = 0xC12BCBE;
        *(unsigned char *)((t3 + 0x1)) = 0xFFFFFFFF;
        *(unsigned char *)((t3 + 0x2)) = (*(signed char *)(((int)stk + 0)));
        *(unsigned int *)((t3 + 0x10)) = a4;
        FUN_0c03733c(t3, 0xA, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
        (((struct oA8_uchar *)(t3))->v) = 0x1;
        (((struct oAC_ushort *)(t3))->v) = 0x1F;
        (((struct oA9_uchar *)(t3))->v) = 0x21;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t3 + 0x34)) = *(struct mv3 *)((a4 + 0x34)); }
        if ((*(signed char *)((t3 + 0x2))) == 0) {
            *(unsigned int *)((t3 + 0x34)) = 0x0;
        } else {
            *(unsigned int *)((t3 + 0x34)) = 0x4000;
        }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t3 + 0x28)) = *(struct mv3 *)((a4 + 0x28)); }
        u13 = 150.0f;
        if ((*(signed char *)((t3 + 0x2))) == 0) {
            u13 = 100.0f;
        }
        (((struct o2C_float *)(t3))->v) = (((((struct o2C_float *)(t3))->v)) + u13);
        (((struct o48_float *)(t3))->v) = 0.0f;
        (((struct o44_float *)(t3))->v) = 0.0f;
        (((struct o40_float *)(t3))->v) = 0.0f;
        *(unsigned short *)((((((struct oC4_int *)(t3))->v)) + 0x6)) = 0xF;
        (((struct o6C_float *)(((((struct oC4_int *)(t3))->v))))->v) = (*(float *)0xC12BD14);
        (((struct o70_float *)(((((struct oC4_int *)(t3))->v))))->v) = 0.0f;
        (((struct o74_float *)(((((struct oC4_int *)(t3))->v))))->v) = 0.0f;
        (((struct o78_uint *)(((((struct oC4_int *)(t3))->v))))->v) = 0x71C;
        (((struct o7C_uint *)(((((struct oC4_int *)(t3))->v))))->v) = 0x0;
        (((struct o80_uint *)(((((struct oC4_int *)(t3))->v))))->v) = 0x0;
        t25 = 0x80;
    }
    return t25;
}

int FUN_0c06c134(int a4)
{
    int stk[3];
    register float u7;
    register float u11;
    register float u17;
    register float u21;
    register int t27;
    register int t61;
    register int t31;
    register int t38;
    register int t1;
    register int t2;
    int t3;

    if (((*(signed char *)((a4 + 0x2))) == 8) && ((t1 = *(signed char *)((a4 + 0x371C)), t1 != 0) && ((t2 = *(signed char *)((a4 + 0x3721)), t2 == 0) && (t3 = *(int *)0xC542260, (t3 & 3) == 0)))) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)((a4 + 0x28)); }
        u7 = (*(float *)(((int)stk + 0)));
        u7 = u7 + 40.0f * (math_sin_angle16(((*(int *)((a4 + 0x38))) + 0x4000)));
        *(float *)(((int)stk + 0)) = u7;
        u11 = (*(float *)(((int)stk + 8)));
        u11 = u11 + 40.0f * (math_cos_angle16(((*(int *)((a4 + 0x38))) + 0x4000)));
        *(float *)(((int)stk + 8)) = u11;
        FUN_0c14f8aa((*(signed char *)((a4 + 0x1))), ((int)stk + 0), 0x2);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)((a4 + 0x28)); }
        u17 = (*(float *)(((int)stk + 0)));
        u17 = u17 + 40.0f * (math_sin_angle16(((*(int *)((a4 + 0x38))) - 16384)));
        *(float *)(((int)stk + 0)) = u17;
        u21 = (*(float *)(((int)stk + 8)));
        u21 = u21 + 40.0f * (math_cos_angle16(((*(int *)((a4 + 0x38))) - 16384)));
        *(float *)(((int)stk + 8)) = u21;
        FUN_0c14f8aa((*(signed char *)((a4 + 0x1))), ((int)stk + 0), 0x2);
    }
    t27 = *(signed char *)((a4 + 0x3715));
    t61 = t27;
    if (t27 == 1) {
        t31 = *(signed char *)((a4 + 0x2));
        t61 = t31;
        if (t31 == 11) {
            t61 = 0x371C;
            if ((*(signed char *)((a4 + 0x371C))) != 0) {
                t61 = 0x3721;
                if ((*(signed char *)((a4 + 0x3721))) == 0) {
                    t38 = (int)((unsigned int)(*(int *)0xC542260) % (unsigned int)0x28);
                    t61 = t38;
                    if (t38 == 0) {
                        FUN_0c15f394(a4, 0xF);
                        t61 = (FUN_0c15f394(a4, 0x12));
                    }
                }
            }
        }
    }
    return t61;
}

int FUN_0c13f98c(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;

    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x34)) = *(struct mv3 *)(((*(int *)((a4 + 0x10))) + 0x34)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)(((*(int *)((a4 + 0x10))) + 0x28)); }
    t1 = *(int *)((a4 + 0x10));
    if (((*(signed char *)((t1 + 0x3715))) == 26) && (t0 = *(signed char *)((t1 + 0x17)), t0 == 2)) {
        t0 = *(signed char *)((a4 + 0x14));
        if (t0 != 0) {
            if (t0 != 1) {
                return FUN_0c03f346(a4, t1, a6, a7);
            }
        } else {
            *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x1F;
            t0 = (((struct oC4_int *)(a4))->v);
            (((struct o70_float *)(t0))->v) = (((((struct o70_float *)(t0))->v)) + 100.0f);
            t0 = (((struct oC4_int *)(a4))->v);
            (((struct o74_float *)(t0))->v) = (((((struct o74_float *)(t0))->v)) + 150.0f);
            (((struct o84_float *)(((((struct oC4_int *)(a4))->v))))->v) = 1.0f;
            (((struct o88_float *)(((((struct oC4_int *)(a4))->v))))->v) = 1.0f;
            (((struct o8C_float *)(((((struct oC4_int *)(a4))->v))))->v) = 0.100000001f;
            *(unsigned short *)((a4 + 0x1C)) = 0x1E;
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        }
        t0 = (((struct oC4_int *)(a4))->v);
        (((struct o8C_float *)(t0))->v) = (((((struct o8C_float *)(t0))->v)) + 0.100000001f);
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        t2 = (short)(t0 - 1);
        if ((short)(t0 - 1) == 0) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t2 = 0x14;
        }
        return t2;
    }
    return FUN_0c03f346(a4, t1, a6, a7);
}

int FUN_0c167e80(int a4, int a5, int a6)
{
    int stk[23];
    register int t2;
    register int t16;

    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 32) + 0x24)) = *(struct mv3 *)(0xC203B48); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 32) + 0x18)) = *(struct mv3 *)(0xC203B54); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 32) + 0xC)) = *(struct mv3 *)(0xC203B60); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 32)) = *(struct mv3 *)(0xC203B6C); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 32) + 0x30)) = *(struct mv3 *)(a6); }
    *(unsigned int *)(((int)stk + 84)) = ((*(int *)(((int)stk + 84))) + (*(int *)0xC2A35B0));
    t2 = FUN_0c167a28(a4, a5, (((int)stk + 32) + 0x30), 0x1);
    t16 = t2;
    if (t2 != 0) {
        FUN_0c03744a(((((struct oC4_int *)(t2))->v)), 0x5, 0x52, (*(int *)0xC4B40CC));
        *(unsigned char *)((t2 + 0x1)) = a4;
        *(unsigned int *)((t2 + 0x4)) = 0xC167B36;
        *(int *)((int)stk + 28) = (((int)stk + 32) + 0x18);
        *(int *)((int)stk + 24) = (((int)stk + 28) + 0x28);
        *(int *)((int)stk + 20) = 0x68;
        *(int *)((int)stk + 16) = 0x64;
        FUN_0c15b478(a4, (t2 + 0x64), t2, (*(int *)((((((struct o6CC_int *)((*(int *)0xC4B40CC)))->v)) + 0x0))), 0x64, 0x68, (((int)stk + 28) + 0x28), (((int)stk + 32) + 0x18));
        *(int *)((int)stk + 12) = (((int)stk + 16) + 0x10);
        *(int *)((int)stk + 8) = (((int)stk + 12) + 0x20);
        *(int *)((int)stk + 4) = 0x68;
        *(int *)((int)stk + 0) = 0x64;
        FUN_0c15b478(a4, (t2 + 0x64), t2, (*(int *)((((((struct o6CC_int *)((*(int *)0xC4B40CC)))->v)) + 0x0))), 0x64, 0x68, (((int)stk + 12) + 0x20), (((int)stk + 16) + 0x10));
        t16 = (FUN_0c1679c2((*(signed char *)((t2 + 0x1))), (t2 + 0x28), (t2 + 0x34)));
    }
    return t16;
}

void FUN_0c1116a8(int a4, int a5, int a6)
{
    register int t0;
    register float u0;

    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)((a4 + 0x4C)); }
    u0 = (((struct o30_float *)(a4))->v);
    (((struct o40_float *)(a4))->v) = (1.0f / (640.0f / (u0 + 5.0f)));
    (((struct o44_float *)(a4))->v) = (1.0f / (640.0f / (u0 + 5.0f)));
    (((struct o48_float *)(a4))->v) = (1.0f / (640.0f / (u0 + 5.0f)));
    t0 = *(int *)0xC4739A4;
    (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) * ((float)(*(int *)((t0 + 0x38))) / (float)(*(int *)((t0 + 0x3C)))));
    t0 = *(int *)0xC4739A4;
    (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) * ((float)(*(int *)((t0 + 0x38))) / (float)(*(int *)((t0 + 0x3C)))));
    t0 = *(int *)0xC4739A4;
    (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) * ((float)(*(int *)((t0 + 0x38))) / (float)(*(int *)((t0 + 0x3C)))));
    FUN_0c118810(a4, (*(short *)((a4 + 0x1C))));
    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) / (640.0f / (u0 + 5.0f)));
    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) / (640.0f / (u0 + 5.0f)));
    (((struct o30_float *)(a4))->v) = ((-((((struct o30_float *)(a4))->v))) + -5.0f);
    t0 = *(short *)((a4 + 0x1C));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x34)) = *(struct mv3 *)((0xC29F12C + (((t0 << 1) + t0) << 2))); }
}

int SJUNI_GetChunk(int a4, int a5, int a6, int a7)
{
    int stk[11];
    register int t3;
    register int t39;

    *(unsigned int *)(((int)stk + 0)) = a6;
    if (((int)a5 >= 0) && ((int)a5 < (int)0x4)) {
        *(unsigned int *)(((int)stk + 4)) = (FUN_0c2c6728());
        t3 = *(int *)((((a4 + 0x18) + (a5 << 2)) + 0x0));
        if (t3 != 0) {
            { struct mv2 { int w[2]; }; *(struct mv2 *)((((int)stk + 0) + 0x10)) = *(struct mv2 *)((t3 + 0x8)); }
            if ((int)(*(int *)(((int)stk + 20))) <= (int)(*(int *)(((int)stk + 0)))) {
                { struct mv2 { int w[2]; }; *(struct mv2 *)(a7) = *(struct mv2 *)((((int)stk + 0) + 0x10)); }
                *(unsigned int *)((((a5 << 2) + (a4 + 0x18)) + 0x0)) = (*(int *)((t3 + 0x0)));
                *(unsigned int *)((t3 + 0x0)) = (*(int *)((a4 + 0x14)));
                *(unsigned int *)((a4 + 0x14)) = t3;
            } else {
                if ((*(signed char *)((a4 + 0x5))) == 1) {
                    SJ_SplitChunk((((int)stk + 0) + 0x10), (*(int *)(((int)stk + 0))), (((int)stk + 0) + 0x10));
                    { struct mv2 { int w[2]; }; *(struct mv2 *)(a7) = *(struct mv2 *)((((int)stk + 0) + 0x10)); }
                    { struct mv2 { int w[2]; }; *(struct mv2 *)((t3 + 0x8)) = *(struct mv2 *)((((int)stk + 0) + 0x8)); }
                } else {
                    *(unsigned int *)((a7 + 0x0)) = 0x0;
                    *(unsigned int *)((a7 + 0x4)) = 0x0;
                }
            }
        } else {
            *(unsigned int *)((a7 + 0x0)) = 0x0;
            *(unsigned int *)((a7 + 0x4)) = 0x0;
        }
        t39 = (FUN_0c2c6740(a4, (*(int *)(((int)stk + 4)))));
    } else {
        if ((*(int *)((a4 + 0x28))) != 0) {
            t39 = (((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)((a4 + 0x28)))))((*(int *)((a4 + 0x2C))), 0xFFFFFFFD, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24)));
        }
        *(unsigned int *)((a7 + 0x0)) = 0x0;
        *(unsigned int *)((a7 + 0x4)) = 0x0;
    }
    return t39;
}

int FUN_0c11ccd0(int a4, int a5, int a6, int a7, float f4)
{
    register int t0;

    if ((*(signed char *)((0x14 + (*(int *)((a4 + 0x10)))))) != 2) {
        (((struct o14_uchar *)(a4))->v) = 0x63;
    }
    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 99) {
                    return t0;
                }
                return FUN_0c03f346(a4, a5, a6, a7);
            }
        } else {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        }
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        t0 = ((int (*)(int, int, float))(FUN_0c0cff96))((*(int *)((((((struct oC4_int *)(a4))->v)) + 0x8))), 0xC292314, f4);
        t0 = *(int *)((((((struct oC8_int *)(a4))->v)) + 0x8));
        return ((int (*)(int, int))(FUN_0c0cff96))(t0, 0xC292314);
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    FUN_0c03733c(a4, 0x21, (*(int *)0xC4B410C));
    (((struct oA8_uchar *)(a4))->v) = 0x0;
    (((struct oAC_ushort *)(a4))->v) = 0x1F;
    (((struct oA9_uchar *)(a4))->v) = 0x21;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x40)) = *(struct mv3 *)(0xC2A0C84); }
    t0 = (((struct oC4_int *)(a4))->v);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x90 + t0)) = *(struct mv3 *)((t0 + 0x6C)); }
    t0 = (((struct oC8_int *)(a4))->v);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x90 + t0)) = *(struct mv3 *)((t0 + 0x6C)); }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    t0 = ((int (*)(int, int))(FUN_0c0cff96))((*(int *)((((((struct oC4_int *)(a4))->v)) + 0x8))), 0xC292314);
    t0 = *(int *)((((((struct oC8_int *)(a4))->v)) + 0x8));
    return ((int (*)(int, int))(FUN_0c0cff96))(t0, 0xC292314);
}
