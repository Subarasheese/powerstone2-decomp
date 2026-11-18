/* Straight-line functions with calls and guards (batch gen_fp): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
struct o0_float { float v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_float { char p[0x10]; float v; };
struct o12E_short { char p[0x12E]; short v; };
struct o131_uchar { char p[0x131]; unsigned char v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o17C_float { char p[0x17C]; float v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o374A_uchar { char p[0x374A]; unsigned char v; };
struct o374B_uchar { char p[0x374B]; unsigned char v; };
struct o376C_int { char p[0x376C]; int v; };
struct o376C_uint { char p[0x376C]; unsigned int v; };
struct o3770_int { char p[0x3770]; int v; };
struct o3770_uint { char p[0x3770]; unsigned int v; };
struct o378C_float { char p[0x378C]; float v; };
struct o3790_float { char p[0x3790]; float v; };
struct o37B0_float { char p[0x37B0]; float v; };
struct o3810_float { char p[0x3810]; float v; };
struct o382E_ushort { char p[0x382E]; unsigned short v; };
struct o3830_ushort { char p[0x3830]; unsigned short v; };
struct o4_float { char p[0x4]; float v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o5_uchar { char p[0x5]; unsigned char v; };
struct o64_uint { char p[0x64]; unsigned int v; };
struct o670_uint { char p[0x670]; unsigned int v; };
struct o674_uint { char p[0x674]; unsigned int v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o6C_uint { char p[0x6C]; unsigned int v; };
struct o74_float { char p[0x74]; float v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o964_uint { char p[0x964]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAA_uchar { char p[0xAA]; unsigned char v; };
struct oAB_uchar { char p[0xAB]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB0_float { char p[0xB0]; float v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
int FUN_0c036de8(int);
int FUN_0c03733c(int, int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c037498(int, int, int, int);
int FUN_0c03eff6(void);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int, int);
int FUN_0c04307c(void);
int FUN_0c052c00(int, int, int);
int FUN_0c0582de(int, int);
int FUN_0c0588bc(int, int, int, int, int, int);
int FUN_0c058a6e(int, int, int, int, int, int);
int FUN_0c059e9a(int, int, int);
int FUN_0c05a2b8(int, int, int, int, int);
int FUN_0c05ffa4(int, int, int);
int FUN_0c060454(int, int);
int FUN_0c06050c(int);
int FUN_0c060a84(int);
int FUN_0c060d74(int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c0674f4(int);
int FUN_0c06780e(int);
int FUN_0c06785c(void);
int FUN_0c07e2f4(int, int);
int FUN_0c07e3ae(int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c085d0c(int, int, int, int);
int FUN_0c085eac(int, int);
int FUN_0c0c224c(int, int);
int FUN_0c0c2ab6(int, int);
int FUN_0c0c3010(int, int, int);
int FUN_0c0cf944(int);
int FUN_0c0eef50(int, int);
int FUN_0c145d1c(int, int);
int FUN_0c14803c(int, int, int, int, float);
int FUN_0c148494(int, int, int);
int FUN_0c14f960(int, int);
int FUN_0c187a88(int, int, int);
int math_atan2_angle16(float, float);
int math_atan_angle16(float);
int math_mat_get_translate(int, int);
int math_mat_transform_vector(int, int);
float math_signed_sqrt(float);
int math_vec3_mul_xyz(int, Stk3, float, float, float);
int nlAddVector3op(int, int, int);
int nlCalcPoint(int, int);
int nlCalcPoint44(int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRand(void);
float nlScalor(int, Stk3);
int nlSelectMatrixStack(int);
int nlStoreMatrix(int);
int nlUnitMatrix(void);
int nlVoidUnitVector(int);
int nl_sprite_draw(int);
int thunk_FUN_0c058310(int, int);
int thunk_FUN_0c06494c(void);
int FUN_0c139168(int a4, int a5, int a6, int a7);
int FUN_0c152d18(int a4, int a5, int a6, int a7);
int FUN_0c12c23a(int a4, int a5, int a6, int a7);
int FUN_0c15b91c(int a4, int a5, int a6, int a7);
int FUN_0c16eea8(int a4, int a5, int a6, int a7);
int FUN_0c087ba4(int a4);
int FUN_0c15a104(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11);
void FUN_0c05e87c(void);
int FUN_0c0b49c8(int a4, int a5, int a6, int a7);
int draw_project_point_sprite_z01(int a4);
int FUN_0c132a60(int a4, int a5, int a6, int a7);
int FUN_0c145f1a(int a4, int a5, int a6, int a7);
int FUN_0c060a9c(int a4, int a5, int a6, int a7);
int FUN_0c14873c(int a4);
int FUN_0c11cb50(int a4, int a5, int a6, int a7);
int FUN_0c0eefa2(int a4, int a5, int a6, int a7);
void FUN_0c10ff04(int a4, int a5, int a6);
int FUN_0c134780(int a4, int a5);
int FUN_0c0ffbbc(int a4, float f4);

int FUN_0c139168(int a4, int a5, int a6, int a7)
{
    int stk[8];
    register int t0;
    register int t38;
    register int t12;
    register int t14;
    register int t17;
    register int t18;
    register float u20;
    register float u21;
    register float u22;
    register float t23;
    register float u24;
    register int t27;
    register int t29;
    register int t32;
    register int t33;
    register int t36;

    *(unsigned char *)(((int)stk + 16)) = a4;
    t0 = FUN_0c03f444(0x1, 0x0, 0x1, a7);
    t38 = t0;
    if (t0 == 0) {
    } else {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((int)stk + 16)));
        *(unsigned int *)((t0 + 0x4)) = 0xC139010;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)(a6); }
        (((struct o4_float *)(((int)stk + 16)))->v) = ((*(float *)((a5 + 0x0))) - (*(float *)((a6 + 0x0))));
        (((struct o4_float *)((((int)stk + 16) + 0x4)))->v) = (((((struct o4_float *)(a5))->v)) - ((((struct o4_float *)(a6))->v)));
        (((struct o8_float *)((((int)stk + 16) + 0x4)))->v) = (((((struct o8_float *)(a5))->v)) - ((((struct o8_float *)(a6))->v)));
        if (((((struct o8_float *)((((int)stk + 16) + 0x4)))->v)) == 0.0f) {
            (((struct o8_float *)((((int)stk + 16) + 0x4)))->v) = 9.99999997e-07f;
        }
        t12 = math_atan2_angle16(((((struct o4_float *)(((int)stk + 16)))->v)), ((((struct o8_float *)((((int)stk + 16) + 0x4)))->v)));
        t14 = (t12 & 0xFFFF);
        if ((int)((t12 & 0xFFFF) - (*(int *)((t0 + 0x38)))) > (int)0x8000) {
            t14 = ((t12 & 0xFFFF) - 0x10000);
        }
        t17 = *(int *)((t0 + 0x38));
        t18 = t14;
        if ((int)(t14 - (*(int *)((t0 + 0x38)))) < (int)0xFFFF8000) {
            t18 = (t14 + 0x10000);
        }
        *(unsigned int *)((t0 + 0x38)) = ((t17 + (t18 - t17)) & 0xFFFF);
        u20 = (((struct o8_float *)((((int)stk + 16) + 0x4)))->v);
        u21 = (((struct o4_float *)(((int)stk + 16)))->v);
        u22 = (u20 * u20);
        u22 = u22 + u21 * u21;
        t23 = math_signed_sqrt(u22);
        u24 = t23;
        if (t23 == 0.0f) {
            u24 = 9.99999997e-07f;
        }
        t27 = math_atan2_angle16((-((((struct o4_float *)((((int)stk + 16) + 0x4)))->v))), u24);
        t29 = (t27 & 0xFFFF);
        if ((int)((t27 & 0xFFFF) - (*(int *)((t0 + 0x34)))) > (int)0x8000) {
            t29 = ((t27 & 0xFFFF) - 0x10000);
        }
        t32 = *(int *)((t0 + 0x34));
        t33 = t29;
        if ((int)(t29 - (*(int *)((t0 + 0x34)))) < (int)0xFFFF8000) {
            t33 = (t29 + 0x10000);
        }
        *(unsigned int *)((t0 + 0x34)) = ((t32 + (t33 - t32)) & 0xFFFF);
        FUN_0c07e2f4(t0, 0x32);
        *(int *)((int)stk + 12) = 0x0;
        *(int *)((int)stk + 8) = 0x0;
        t36 = *(signed char *)((t0 + 0x1));
        *(int *)((int)stk + 4) = (~((int)0x1 << (int)t36));
        *(int *)((int)stk + 0) = 0x100;
        t38 = (FUN_0c064d24(t0, 0x3, 0x9, 0x0, 0x100, (~((int)0x1 << (int)t36)), 0x0, 0x0));
    }
    return t38;
}

int FUN_0c152d18(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;

    t0 = FUN_0c03f444(0x5, 0x0, 0x1, a7);
    t1 = t0;
    if (t0 == 0) {
    } else {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC152E84;
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0x29;
        (((struct oA9_uchar *)(t0))->v) = 0x1;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)(a4); }
        u0 = -25.0f;
        u0 = u0 + 10.0f * (((float)((int)((int)(nlRand()) % (int)0x5)) + 1.0f));
        (((struct o28_float *)(t0))->v) = (((((struct o28_float *)(t0))->v)) + u0);
        t2 = nlRand();
        t3 = ((~(((~t2) + 0x1) & 0x3)) + 0x1);
        if ((int)t2 >= 0) {
            t3 = (t2 & 0x3);
        }
        u0 = ((((struct o2C_float *)(t0))->v));
        u0 = u0 + 10.0f * (((float)t3 + 1.0f));
        (((struct o2C_float *)(t0))->v) = u0;
        u0 = -25.0f;
        u0 = u0 + 10.0f * (((float)((int)((int)(nlRand()) % (int)0x5)) + 1.0f));
        (((struct o30_float *)(t0))->v) = (((((struct o30_float *)(t0))->v)) + u0);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x34)) = *(struct mv3 *)(0xC203400); }
        t2 = nlRand();
        t3 = ((~(((~t2) + 0x1) & 0x3)) + 0x1);
        if ((int)t2 >= 0) {
            t3 = (t2 & 0x3);
        }
        *(unsigned int *)((t0 + 0x3C)) = (unsigned short)((((t3 << 8) << 2) << 2) << 2);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x40)) = *(struct mv3 *)(0xC2033F4); }
        *(unsigned short *)((t0 + 0x1C)) = 0x4;
        *(unsigned short *)((t0 + 0x1E)) = 0x0;
        t2 = (((struct oC4_int *)(t0))->v);
        FUN_0c037498(t2, 0x0, 0x17, (*(int *)0xC4B40CC));
        *(unsigned char *)((t2 + 0x0)) = 0x1;
        *(unsigned short *)((t2 + 0x6)) = 0xF;
        (((struct o74_float *)(t2))->v) = 50.0f;
        t1 = 0x74;
    }
    return t1;
}

int FUN_0c12c23a(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;

    t2 = *(signed char *)((a4 + 0x14));
    if (t2 != 0) {
        if (t2 != 1) {
            if (t2 != 2) {
                if (t2 != 3) {
                    return FUN_0c03f346(a4, a5, a6, a7);
                }
                t2 = (((struct oC4_int *)(a4))->v);
                (((struct o7C_uint *)(t2))->v) = (((((struct o7C_int *)(t2))->v)) + 0xB6);
                { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)(((*(int *)((a4 + 0x10))) + 0x28)); }
                u0 = (((struct o48_float *)(a4))->v);
                (((struct o48_float *)(a4))->v) = (u0 - 0.100000001f);
                (((struct o44_float *)(a4))->v) = (u0 - 0.100000001f);
                (((struct o40_float *)(a4))->v) = (u0 - 0.100000001f);
                t2 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t2 - 1);
                t3 = (short)(t2 - 1);
                if ((short)(t2 - 1) == 0) {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    t3 = 0x14;
                }
                return t3;
            }
            t2 = (((struct oC4_int *)(a4))->v);
            (((struct o7C_uint *)(t2))->v) = (((((struct o7C_int *)(t2))->v)) + 0xB6);
            { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)(((*(int *)((a4 + 0x10))) + 0x28)); }
            (((struct o44_float *)(a4))->v) = (((float)((int)((int)(nlRand()) % (int)0x14)) / 20.0f) + 1.0f);
            t2 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t2 - 1);
            if (((short)(t2 - 1) != 0) && (t0 = *(int *)((a4 + 0x10)), t1 = *(signed char *)((0x3715 + t0)), t1 == 26)) {
                t0 = t1;
            } else {
                *(unsigned short *)((a4 + 0x1C)) = 0xA;
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t0 = 0x14;
            }
            return t0;
        }
        t0 = (((struct oC4_int *)(a4))->v);
        (((struct o7C_uint *)(t0))->v) = (((((struct o7C_int *)(t0))->v)) + 0xB6);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)(((*(int *)((a4 + 0x10))) + 0x28)); }
        u0 = (((struct o48_float *)(a4))->v);
        (((struct o48_float *)(a4))->v) = (u0 + 0.100000001f);
        (((struct o44_float *)(a4))->v) = (u0 + 0.100000001f);
        (((struct o40_float *)(a4))->v) = (u0 + 0.100000001f);
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        t1 = (short)(t0 - 1);
        if ((short)(t0 - 1) == 0) {
            *(unsigned short *)((a4 + 0x1C)) = 0x64;
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t1 = 0x14;
        }
        return t1;
    }
    *(unsigned short *)((a4 + 0x1C)) = 0xA;
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    t0 = (((struct oC4_int *)(a4))->v);
    (((struct o7C_uint *)(t0))->v) = (((((struct o7C_int *)(t0))->v)) + 0xB6);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)(((*(int *)((a4 + 0x10))) + 0x28)); }
    u0 = (((struct o48_float *)(a4))->v);
    (((struct o48_float *)(a4))->v) = (u0 + 0.100000001f);
    (((struct o44_float *)(a4))->v) = (u0 + 0.100000001f);
    (((struct o40_float *)(a4))->v) = (u0 + 0.100000001f);
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    t1 = (short)(t0 - 1);
    if ((short)(t0 - 1) == 0) {
        *(unsigned short *)((a4 + 0x1C)) = 0x64;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t1 = 0x14;
    }
    return t1;
}

int FUN_0c15b91c(int a4, int a5, int a6, int a7)
{
    int stk[6];
    register int t0;
    register int t5;
    register float u20;
    register float u21;
    register float u25;
    register float u26;
    register float u30;
    register float u31;
    register int t41;
    register int t42;
    register int t57;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        t57 = t0;
        if (t0 == 1) {
            t57 = (FUN_0c03f346(a4, a5, a6, a7));
        }
    } else {
        t5 = *(int *)((a4 + 0x10));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0xC)) = *(struct mv3 *)((((short)(*(signed char *)((t5 + 0x1))) * (short)0x2F8) + 0xC5411C4)); }
        thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532564))) + 0x28), ((int)stk + 0));
        *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) - (*(float *)(((int)stk + 0))));
        *(float *)(((int)stk + 16)) = ((*(float *)(((int)stk + 16))) - (*(float *)(((int)stk + 4))));
        *(float *)(((int)stk + 20)) = ((*(float *)(((int)stk + 20))) - (*(float *)(((int)stk + 8))));
        nlVoidUnitVector((((int)stk + 0) + 0xC));
        u20 = ((*(float *)(((int)stk + 12))) * ((((struct o378C_float *)(t5))->v)));
        u21 = (*(float *)(((int)stk + 0)));
        u21 = u21 + 100.0f * u20;
        (((struct o28_float *)(a4))->v) = u21;
        u25 = ((*(float *)(((int)stk + 20))) * ((((struct o378C_float *)(t5))->v)));
        u26 = (*(float *)(((int)stk + 8)));
        u26 = u26 + 100.0f * u25;
        (((struct o30_float *)(a4))->v) = u26;
        u30 = ((*(float *)(((int)stk + 16))) * ((((struct o378C_float *)(t5))->v)));
        u31 = (*(float *)(((int)stk + 4)));
        u31 = u31 + 100.0f * u30;
        (((struct o2C_float *)(a4))->v) = u31;
        if (((*(int *)0xC542260) & 7) == 0) {
            FUN_0c14f960((*(signed char *)((a4 + 0x1))), (a4 + 0x28));
        }
        t41 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t41 - 1);
        if ((int)(short)(t41 - 1) <= 0) {
            *(unsigned short *)((a4 + 0x1C)) = 0x5;
            t42 = *(short *)((a4 + 0x1E));
            *(unsigned short *)((a4 + 0x1E)) = (t42 + 0x1);
            if ((int)(short)(t42 + 0x1) > (int)0x3) {
                *(unsigned short *)((a4 + 0x1E)) = 0x0;
            }
        }
        FUN_0c03744a(((((struct oC4_int *)(a4))->v)), (*(short *)((a4 + 0x1E))), 0x13, (*(int *)0xC4B40CC));
        if (((*(signed char *)((t5 + 0x3715))) == 32) && (t57 = *(signed char *)((t5 + 0x3739)), t57 == 11)) {
        } else {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t57 = 0x14;
        }
    }
    return t57;
}

int FUN_0c16eea8(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = FUN_0c03f444(0x1, 0x0, 0x3, a7);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned int *)((t0 + 0x4)) = 0xC16ED88;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)(a5); }
        (((struct oA8_uchar *)(t0))->v) = 0x0;
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        *(unsigned int *)((t0 + 0x3C)) = 0x0;
        *(unsigned int *)((t0 + 0x38)) = 0x0;
        *(unsigned int *)((t0 + 0x34)) = 0x0;
        (((struct o48_float *)(t0))->v) = 1.0f;
        (((struct o44_float *)(t0))->v) = 1.0f;
        (((struct o40_float *)(t0))->v) = 1.0f;
        (((struct oAA_uchar *)(t0))->v) = 0x1;
        (((struct oAB_uchar *)(t0))->v) = 0x2;
        *(unsigned short *)((t0 + 0x1C)) = 0x14;
        t1 = (((struct oC4_int *)(t0))->v);
        FUN_0c03744a(t1, 0x0, 0x3D, (*(int *)0xC4B40CC));
        *(unsigned char *)((t1 + 0x0)) = 0x1;
        *(unsigned short *)((t1 + 0x6)) = 0x1F;
        (((struct o78_uint *)(t1))->v) = 0x4000;
        (((struct o8C_float *)(t1))->v) = 1.0f;
        (((struct o88_float *)(t1))->v) = 1.0f;
        (((struct o84_float *)(t1))->v) = 1.0f;
        t1 = (((struct oC8_int *)(t0))->v);
        FUN_0c03744a(t1, 0x1, 0x3D, (*(int *)0xC4B40CC));
        *(unsigned char *)((t1 + 0x0)) = 0x1;
        *(unsigned short *)((t1 + 0x6)) = 0x1F;
        (((struct o78_uint *)(t1))->v) = 0x4000;
        (((struct o8C_float *)(t1))->v) = 1.0f;
        (((struct o88_float *)(t1))->v) = 1.0f;
        (((struct o84_float *)(t1))->v) = 1.0f;
        t1 = (((struct oCC_int *)(t0))->v);
        FUN_0c03744a(t1, 0x0, 0x35, (*(int *)0xC4B40CC));
        *(unsigned char *)((t1 + 0x0)) = 0x1;
        *(unsigned short *)((t1 + 0x6)) = 0x1F;
        (((struct o78_uint *)(t1))->v) = 0x4000;
        (((struct o84_float *)(t1))->v) = 0.300000012f;
        (((struct o8C_float *)(t1))->v) = 1.0f;
        (((struct o88_float *)(t1))->v) = 1.0f;
        FUN_0c07e3ae(t0, 0x9A);
        return FUN_0c0c2ab6(t0, 0x44);
    }
    return t0;
}

int FUN_0c087ba4(int a4)
{
    int stk[9];
    register float t21;
    register float u22;
    register float u25;

    if (((((struct o17C_float *)(a4))->v)) > 0.0f) {
        *(int *)((int)stk + 8) = 0x37;
        *(int *)((int)stk + 4) = 0x3;
        *(int *)((int)stk + 0) = 0xFFFFFFFF;
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0x37, 0xFFFFFFFF, 0x3, 0x37);
        FUN_0c0c224c(a4, ((((struct o376C_int *)(a4))->v)));
        FUN_0c085eac(a4, 0x6);
        FUN_0c0c3010(((((struct o376C_int *)(a4))->v)), (*(signed char *)((a4 + 0x1))), 0x0);
        *(unsigned short *)((a4 + 0x1E)) = 0xD;
        (((struct o131_uchar *)(a4))->v) = 0x0;
        (((struct o16_uchar *)(a4))->v) = 0x0;
        (((struct o17_uchar *)(a4))->v) = 0x0;
    } else {
        *(int *)((int)stk + 8) = 0x39;
        *(int *)((int)stk + 4) = 0x3;
        *(int *)((int)stk + 0) = 0xFFFFFFFF;
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0x39, 0xFFFFFFFF, 0x3, 0x39);
        FUN_0c0c224c(a4, ((((struct o376C_int *)(a4))->v)));
        FUN_0c085eac(a4, 0x6);
        FUN_0c0c3010(((((struct o376C_int *)(a4))->v)), (*(signed char *)((a4 + 0x1))), 0x1);
        *(unsigned short *)((a4 + 0x1E)) = 0xD;
        (((struct o16_uchar *)(a4))->v) = 0x1;
        (((struct o17_uchar *)(a4))->v) = 0x0;
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 12)) = *(struct mv3 *)((0x380C + a4)); }
        *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) - ((((struct o28_float *)(a4))->v)));
        *(float *)(((int)stk + 16)) = ((*(float *)(((int)stk + 16))) - ((((struct o2C_float *)(a4))->v)));
        *(float *)(((int)stk + 20)) = ((*(float *)(((int)stk + 20))) - ((((struct o30_float *)(a4))->v)));
        t21 = nlScalor(((int)stk + 12), *(Stk3 *)(((int)stk + 12)));
        u22 = t21;
        if (200.0f > t21) {
            u22 = 200.0f;
        }
        u25 = u22;
        if (u22 == 0.0f) {
            u25 = 9.99999975e-05f;
        }
        (((struct o3790_float *)(a4))->v) = ((((((struct o2C_float *)(a4))->v)) - ((((struct o3810_float *)(a4))->v))) + -50.0f);
        *(unsigned int *)((a4 + 0x34)) = (math_atan_angle16((((((struct o3790_float *)(a4))->v)) / u25)));
    }
    (((struct o22_ushort *)(a4))->v) = 0x0;
    return 0x22;
}

int FUN_0c15a104(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11)
{
    int stk[4];
    register int t0;
    register int t21;
    register int t2;

    *(unsigned char *)(((int)stk + 8)) = a4;
    *(unsigned int *)(((int)stk + 0)) = a5;
    *(unsigned int *)(((int)stk + 4)) = a6;
    *(unsigned int *)(((int)stk + 12)) = a7;
    t0 = FUN_0c03f444(0x5, 0x2, 0x1, a7);
    t21 = 0x0;
    if (t0 != 0) {
        t2 = (((struct oC4_int *)(t0))->v);
        *(unsigned int *)((t2 + 0x8)) = (*(int *)(((int)stk + 4)));
        *(unsigned int *)((t2 + 0xC)) = 0x0;
        *(unsigned int *)((t2 + 0x10)) = 0x0;
        (((struct o68_uint *)(t2))->v) = (*(int *)(((int)stk + 0)));
        FUN_0c187a88((((0x90 + t2) + 0x4) & 0xFFFFFFF8), (*(int *)((t2 + 0x8))), 0x678);
        *(unsigned int *)((t2 + 0x8)) = (((0x90 + t2) + 0x4) & 0xFFFFFFF8);
        *(unsigned char *)((t2 + 0x0)) = 0x1;
        *(unsigned short *)((t2 + 0x6)) = 0x0;
        (((struct oA8_uchar *)(t0))->v) = 0x0;
        (((struct oAC_ushort *)(t0))->v) = 0x200;
        (((struct oA9_uchar *)(t0))->v) = 0x0;
        { struct mv4 { int w[4]; }; *(struct mv4 *)((0xB0 + t0)) = *(struct mv4 *)((*(int *)(((int)stk + 12)))); }
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((int)stk + 8)));
        *(unsigned short *)((t0 + 0x1E)) = ((short)(a8 >> 0));
        (((struct o16_uchar *)(t0))->v) = ((signed char)(a9 >> 0));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)(a10); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t2 + 0x6C)) = *(struct mv3 *)(a11); }
        nlSelectMatrixStack(0x1);
        nlUnitMatrix();
        nlStoreMatrix((t2 + 0x28));
        nlStoreMatrix((t0 + 0x64));
        (((struct o64_uint *)((*(int *)((t2 + 0x8)))))->v) = 0x608;
        (((struct o6C_uint *)((*(int *)((t2 + 0x8)))))->v) = 0x30;
        (((struct o670_uint *)((*(int *)((t2 + 0x8)))))->v) = 0x0;
        (((struct o674_uint *)((*(int *)((t2 + 0x8)))))->v) = 0x30;
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((*(int *)((t2 + 0x8))) + 0x8)) = *(struct mv3 *)(0xC2035B4); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((*(int *)((t2 + 0x8))) + 0x28)) = *(struct mv3 *)(0xC2035B4); }
        *(unsigned int *)(((*(int *)((t2 + 0x8))) + 0x3C)) = 0xFFFFFFFF;
        { struct mv4 { int w[4]; }; *(struct mv4 *)(((*(int *)((t2 + 0x8))) + 0x44)) = *(struct mv4 *)((0xB0 + t0)); }
        { struct mv4 { int w[4]; }; *(struct mv4 *)(((*(int *)((t2 + 0x8))) + 0x54)) = *(struct mv4 *)((0xB0 + t0)); }
        t21 = t0;
    }
    return t21;
}

void FUN_0c05e87c(void)
{
    int stk[12];
    register int t7;
    register int t17;
    register int t16;

    if ((*(signed char *)0xC5421E1) == 0) {
        FUN_0c03eff6();
        (((struct o0_uchar *)0xC542237)->v) = 0x6;
        (((struct o5_uchar *)0xC542237)->v) = 0x1;
        FUN_0c06780e(0x7);
        *(unsigned int *)(((int)stk + 8)) = 0xC532498;
        *(unsigned char *)0xC53249A = 0x0;
        *(unsigned int *)(((int)stk + 4)) = 0xC535DD0;
        *(unsigned char *)0xC535DD2 = 0x0;
        *(unsigned int *)(((int)stk + 12)) = 0xC539708;
        *(unsigned char *)0xC53970A = 0xD;
        *(unsigned char *)0xC542363 = 0x2;
        FUN_0c036de8(0x5);
        FUN_0c06785c();
        FUN_0c036de8(0x7);
        t7 = (*(signed char *)0xC53D042);
        *(int *)((int)stk + 0) = t7;
        FUN_0c05a2b8((*(signed char *)0xC542237), (*(signed char *)(((*(int *)(((int)stk + 8))) + 0x2))), (*(signed char *)(((*(int *)(((int)stk + 4))) + 0x2))), (*(signed char *)(((*(int *)(((int)stk + 12))) + 0x2))), t7);
        t17 = 0x0;
        for (;;) {
            if ((*(signed char *)((((t17 * 0x3938) + 0xC532498) + 0x3714))) != 0) {
                FUN_0c0674f4(t17);
                t16 = (t17 * 0x3938);
                t16 = (t16 + 0xC532498);
                t16 = (t16 + 0x28);
                { struct mv3 { int w[3]; }; *(struct mv3 *)(t16) = *(struct mv3 *)(((((t17 << 1) + t17) << 2) + 0xC1C425C)); }
            }
            t17 = (t17 + 0x1);
            if ((int)t17 >= (int)0x4) {
                break;
            }
        }
        FUN_0c0cf944((*(signed char *)0xC542237));
        (((struct o0_uchar *)0xC54098C)->v) = 0x1;
        (((struct o1_uchar *)0xC54098C)->v) = 0x7;
        (((struct o18_uint *)0xC540A20)->v) = 0x0;
        (((struct o0_uchar *)0xC540A20)->v) = 0x0;
        (((struct o8_uint *)0xC542440)->v) = 0xFF000000;
        (((struct o4_uint *)0xC542440)->v) = 0xFF000000;
        (((struct o0_uint *)0xC542440)->v) = 0xFF000000;
        thunk_FUN_0c06494c();
        FUN_0c052c00(0x0, 0xAAA, 0x1);
    return;
    }
}

int FUN_0c0b49c8(int a4, int a5, int a6, int a7)
{
    int stk[10];
    register int t0;
    register float u6;
    register int t7;
    register float u10;
    register int t27;
    int t1;
    register int t41;

    t0 = (((struct o3770_int *)(a4))->v);
    if ((t0 != 0) && (t1 = *(signed char *)((t0 + 0x14)), t1 == 2)) {
        u6 = (((struct o0_float *)0xC0B4B0C)->v);
        t7 = *(signed char *)((a4 + 0x16));
        switch (t7) {
        case 0:
            (((struct o37B0_float *)(a4))->v) = 1.0f;
            *(int *)((int)stk + 8) = 0x33;
            *(int *)((int)stk + 4) = 0x5;
            t27 = (*(signed char *)((a4 + 0x1)));
            *(int *)((int)stk + 0) = t27;
            FUN_0c07e79c(a4, 0xFFFFFFFF, 0x5, 0x33, t27, 0x5, 0x33);
            (((struct o3830_ushort *)(a4))->v) = (((((struct o12E_short *)(a4))->v)) ^ 0xF);
            (((struct o382E_ushort *)(a4))->v) = 0x0;
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
            (((struct o374B_uchar *)(a4))->v) = 0x2;
            (((struct o374A_uchar *)(a4))->v) = 0x1;
            *(float *)(((int)stk + 16)) = 0.0f;
            *(float *)(((int)stk + 12)) = 0.0f;
            *(float *)(((int)stk + 20)) = u6;
            FUN_0c0582de(((int)stk + 12), (((((struct o3770_int *)(a4))->v)) + 0x520));
            { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)(((int)stk + 12)); }
            break;
        case 1:
            (((struct o374B_uchar *)(a4))->v) = 0x2;
            (((struct o374A_uchar *)(a4))->v) = 0x1;
            *(float *)(((int)stk + 16)) = 0.0f;
            *(float *)(((int)stk + 12)) = 0.0f;
            *(float *)(((int)stk + 20)) = u6;
            FUN_0c0582de(((int)stk + 12), (((((struct o3770_int *)(a4))->v)) + 0x520));
            { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)(((int)stk + 12)); }
            break;
        case 2:
            (((struct o374B_uchar *)(a4))->v) = 0x2;
            (((struct o374A_uchar *)(a4))->v) = 0x1;
            *(float *)(((int)stk + 16)) = 0.0f;
            *(float *)(((int)stk + 12)) = 0.0f;
            *(float *)(((int)stk + 20)) = u6;
            FUN_0c0582de(((int)stk + 12), (((((struct o3770_int *)(a4))->v)) + 0x520));
            { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)(((int)stk + 12)); }
            u10 = (((struct o10_float *)0xC0B4B0C)->v);
            (((struct o48_float *)(a4))->v) = u10;
            (((struct o44_float *)(a4))->v) = u10;
            (((struct o40_float *)(a4))->v) = u10;
            break;
        }
        (((struct o3770_uint *)(((((struct o3770_int *)(a4))->v))))->v) = a4;
        t41 = 0x3770;
    } else {
        t41 = (FUN_0c085d0c(a4, a5, a6, a7));
    }
    return t41;
}

int draw_project_point_sprite_z01(int a4)
{
    int stk[38];
    register int t1;
    register int t2;
    register int t4;
    register float u18;
    register float u20;
    register float u21;
    register float u22;
    register float u25;
    register int t5;

    *(unsigned int *)(((int)stk + 0)) = a4;
    nlPushMatrix(0x0);
    t1 = *(int *)(((int)stk + 0));
    t2 = t1;
    t4 = (((int)stk + 0) + 0x48);
    for (;;) { t5 = *(int *)t2; t2 = (t2 + 4); if ((unsigned int)((t1 + 80)) < (unsigned int)t2) break; *(unsigned int *)t4 = t5; t4 = (t4 + 4); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x3C)) = *(struct mv3 *)((((int)stk + 0) + 0x4C)); }
    nlSelectMatrixStack(0x2);
    nlCalcPoint((((int)stk + 0) + 0x3C), (((int)stk + 0) + 0x30));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x24)) = *(struct mv3 *)((((int)stk + 0) + 0x30)); }
    *(float *)(((int)stk + 36)) = ((*(float *)(((int)stk + 36))) + 1.0f);
    nlSelectMatrixStack(0x3);
    nlCalcPoint44((((int)stk + 0) + 0x30), (((int)stk + 0) + 0x14));
    nlCalcPoint44((((int)stk + 0) + 0x24), (((int)stk + 0) + 0x4));
    nlSelectMatrixStack(0x1);
    nlPopMatrix(0x1);
    *(float *)(((int)stk + 60)) = (((((*(float *)(((int)stk + 20))) / (*(float *)(((int)stk + 32)))) + 1.0f) / (1.0f + 1.0f)) * 640.0f);
    u18 = (((((*(float *)(((int)stk + 24))) / (*(float *)(((int)stk + 32)))) + 1.0f) / (1.0f + 1.0f)) * 480.0f);
    u18 = -u18;
    *(float *)(((int)stk + 64)) = (u18 + 480.0f);
    *(float *)(((int)stk + 68)) = (-((*(float *)(((int)stk + 56))) * 1.0f));
    u20 = *(float *)(((int)stk + 16));
    u21 = *(float *)(((int)stk + 4));
    u22 = *(float *)(((int)stk + 60));
    *(float *)(((int)stk + 76)) = u22;
    *(float *)(((int)stk + 80)) = (*(float *)(((int)stk + 64)));
    *(float *)(((int)stk + 84)) = 0.100000001f;
    u25 = ((((u21 / u20) + 1.0f) / (1.0f + 1.0f)) * 640.0f);
    *(float *)(((int)stk + 88)) = ((*(float *)(((int)stk + 88))) * (u25 - u22));
    *(float *)(((int)stk + 92)) = ((*(float *)(((int)stk + 92))) * (u25 - u22));
    *(unsigned int *)(((int)stk + 120)) = 0x2;
    *(unsigned int *)(((int)stk + 128)) = 0xFFFFFFFF;
    *(unsigned int *)(((int)stk + 132)) = 0x0;
    return (nl_sprite_draw((((int)stk + 0) + 0x48)));
}

int FUN_0c132a60(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    register int t2;
    register int t3;
    register float u0;

    t2 = *(signed char *)((a4 + 0x14));
    if (t2 != 0) {
        if (t2 != 1) {
            return FUN_0c03f346(a4, 0x0, a6, a7);
        }
        if (1.0f > ((((struct o48_float *)(a4))->v))) {
            (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + 0.00999999978f);
        }
        u0 = (((struct o48_float *)(a4))->v);
        (((struct o44_float *)(a4))->v) = u0;
        (((struct o40_float *)(a4))->v) = u0;
        (((struct o84_float *)(((((struct oC4_int *)(a4))->v))))->v) = ((((struct o40_float *)(a4))->v));
        (((struct o88_float *)(((((struct oC4_int *)(a4))->v))))->v) = ((((struct o44_float *)(a4))->v));
        (((struct o8C_float *)(((((struct oC4_int *)(a4))->v))))->v) = ((((struct o48_float *)(a4))->v));
        t2 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t2 - 1);
        if ((int)(short)(t2 - 1) < 0) {
            *(unsigned short *)((a4 + 0x1C)) = 0x4;
            t2 = *(short *)((a4 + 0x1E));
            *(unsigned short *)((a4 + 0x1E)) = (t2 + 0x1);
            if ((int)(short)(t2 + 0x1) > (int)0x7) {
                *(unsigned short *)((a4 + 0x1E)) = 0x0;
            }
            FUN_0c037498(((((struct oC4_int *)(a4))->v)), (*(short *)((a4 + 0x1E))), 0x1, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
            *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
            *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x3F;
            { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC4_int *)(a4))->v)) + 0x84)) = *(struct mv3 *)((a4 + 0x40)); }
        }
        t2 = *(int *)((a4 + 0x10));
        t3 = 0x16;
        if (((*(signed char *)((t2 + 0x375A))) != 0) && (t0 = *(signed char *)((t2 + 0x16)), (int)t0 <= (int)0x1)) {
        } else {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t3 = 0x14;
        }
        return t3;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    *(unsigned short *)((a4 + 0x1C)) = 0x4;
    *(unsigned short *)((a4 + 0x1E)) = 0x0;
    if (1.0f > ((((struct o48_float *)(a4))->v))) {
        (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + 0.00999999978f);
    }
    u0 = (((struct o48_float *)(a4))->v);
    (((struct o44_float *)(a4))->v) = u0;
    (((struct o40_float *)(a4))->v) = u0;
    (((struct o84_float *)(((((struct oC4_int *)(a4))->v))))->v) = ((((struct o40_float *)(a4))->v));
    (((struct o88_float *)(((((struct oC4_int *)(a4))->v))))->v) = ((((struct o44_float *)(a4))->v));
    (((struct o8C_float *)(((((struct oC4_int *)(a4))->v))))->v) = ((((struct o48_float *)(a4))->v));
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    if ((int)(short)(t0 - 1) < 0) {
        *(unsigned short *)((a4 + 0x1C)) = 0x4;
        t0 = *(short *)((a4 + 0x1E));
        *(unsigned short *)((a4 + 0x1E)) = (t0 + 0x1);
        if ((int)(short)(t0 + 0x1) > (int)0x7) {
            *(unsigned short *)((a4 + 0x1E)) = 0x0;
        }
        FUN_0c037498(((((struct oC4_int *)(a4))->v)), (*(short *)((a4 + 0x1E))), 0x1, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
        *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x3F;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC4_int *)(a4))->v)) + 0x84)) = *(struct mv3 *)((a4 + 0x40)); }
    }
    t0 = *(int *)((a4 + 0x10));
    t2 = 0x16;
    if (((*(signed char *)((t0 + 0x375A))) != 0) && (t1 = *(signed char *)((t0 + 0x16)), (int)t1 <= (int)0x1)) {
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t2 = 0x14;
    }
    return t2;
}

int FUN_0c145f1a(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        t0 = *(short *)((a4 + 0x1C));
        if (((int)t0 >= 0) && ((int)t0 <= (int)0xA)) {
            FUN_0c0588bc((((((struct oC4_int *)(a4))->v)) + 0x84), 0xC2A23A0, 0xC2A2394, (*(short *)((a4 + 0x1C))), 0xA, 0x0);
        }
        t0 = (((struct oC4_int *)(a4))->v);
        (((struct o80_uint *)(t0))->v) = (((((struct o80_int *)(t0))->v)) + 0x800);
        t0 = *(short *)((a4 + 0x1C));
        if (((int)t0 >= (int)0xA) && ((int)t0 <= (int)0x14)) {
            FUN_0c058a6e((((((struct oC4_int *)(a4))->v)) + 0x14), 0xC2A23AC, 0xC2A23BC, (*(short *)((a4 + 0x1C))), 0x14, 0xA);
        }
        t0 = (((struct oC4_int *)(a4))->v);
        *(unsigned short *)((t0 + 0x6)) = ((*(short *)((t0 + 0x6))) | 0x1000);
        FUN_0c145d1c(a4, ((((struct oC4_int *)(a4))->v)));
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
        t1 = (short)(t0 + 0x1);
        if ((int)(short)(t0 + 0x1) > (int)0x14) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t1 = 0x14;
        }
        return t1;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct oAC_ushort *)(a4))->v) = 0xF;
    (((struct oA9_uchar *)(a4))->v) = 0x21;
    FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x0, 0xC, (*(int *)(((((*(signed char *)((a4 + 0x2))) << 2) << 1) + 0xC4B40E0))));
    *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x21F;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC4_int *)(a4))->v)) + 0x84)) = *(struct mv3 *)(0xC2A2394); }
    { struct mv4 { int w[4]; }; *(struct mv4 *)((((((struct oC4_int *)(a4))->v)) + 0x14)) = *(struct mv4 *)(0xC2A23BC); }
    t0 = *(short *)((a4 + 0x1C));
    if (((int)t0 >= 0) && ((int)t0 <= (int)0xA)) {
        FUN_0c0588bc((((((struct oC4_int *)(a4))->v)) + 0x84), 0xC2A23A0, 0xC2A2394, (*(short *)((a4 + 0x1C))), 0xA, 0x0);
    }
    t0 = (((struct oC4_int *)(a4))->v);
    (((struct o80_uint *)(t0))->v) = (((((struct o80_int *)(t0))->v)) + 0x800);
    t0 = *(short *)((a4 + 0x1C));
    if (((int)t0 >= (int)0xA) && ((int)t0 <= (int)0x14)) {
        FUN_0c058a6e((((((struct oC4_int *)(a4))->v)) + 0x14), 0xC2A23AC, 0xC2A23BC, (*(short *)((a4 + 0x1C))), 0x14, 0xA);
    }
    t0 = (((struct oC4_int *)(a4))->v);
    *(unsigned short *)((t0 + 0x6)) = ((*(short *)((t0 + 0x6))) | 0x1000);
    FUN_0c145d1c(a4, ((((struct oC4_int *)(a4))->v)));
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
    t1 = (short)(t0 + 0x1);
    if ((int)(short)(t0 + 0x1) > (int)0x14) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t1 = 0x14;
    }
    return t1;
}

int FUN_0c060a9c(int a4, int a5, int a6, int a7)
{
    int stk[11];
    register int t3;
    register int t9;
    register int t45;
    register int t20;
    register int t22;
    register int t34;
    register int t0;
    register int t1;
    register int t2;
    register int t4;
    int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t44;
    register int t26;
    register int t38;

    t3 = a4;
    t9 = a4;
    for (;;) {
        if (t9 == 0) {
            break;
        }
        t3 = t9;
        t0 = (FUN_0c060a84(t3));
        t3 = 0x12A;
        t3 = (t3 + t9);
        t2 = (*(short *)((t3 + 0x0)));
        t0 = (*(short *)((t3 + 0x2)));
        if (t2 != 0) {
            t5 = 0x1;
        } else {
            t5 = 0x0;
        }
        if (t0 != 0) {
            t1 = 0x2;
        } else {
            t1 = 0x0;
        }
        t0 = (*(short *)((t3 + 0x4)));
        t5 = (t5 | t1);
        if (t0 != 0) {
            t1 = 0x4;
        } else {
            t1 = 0x0;
        }
        t5 = (t5 | t1);
        t45 = t3;
        if (t5 != 0) {
            t0 = 0x124;
            t2 = (*(signed char *)((t9 + t0)));
            if (t2 != 0) {
                t0 = 0x125;
                t20 = *(signed char *)((t9 + t0));
                t0 = (*(signed char *)((t9 + 0x1)));
                t22 = t0;
                t0 = 0x124;
                t3 = (*(signed char *)((t9 + t0)));
                t0 = (FUN_0c05ffa4(t3, t22, t20));
                t1 = 0x4;
                t8 = t0;
                if ((t1 & t5) != 0) {
                    t3 = t9;
                    t0 = (FUN_0c060d74(t3));
                } else {
                    t0 = 0x180;
                    *(float *)((t9 + t0)) = 0.0f;
                    t0 = (t0 - 4);
                    *(float *)((t9 + t0)) = 0.0f;
                    t0 = (t0 - 4);
                    *(float *)((t9 + t0)) = 0.0f;
                    t26 = t1;
                }
                t0 = (*(signed char *)((t8 + 0x3)));
                t1 = t26;
                t6 = 0x0;
                t4 = 0x0;
                *(unsigned int *)(((int)stk + 4)) = t0;
                t7 = 0x0;
                if ((int)t0 > 0) {
                    for (;;) {
                        t1 = (*(signed char *)((t8 + 0x0)));
                        if ((t1 & t5) != 0) {
                            t1 = t8;
                            t2 = 0xC18778C;
                            t0 = 0x20;
                            { struct mv8 { int w[8]; }; *(struct mv8 *)(((0x184 + t9) + t7)) = *(struct mv8 *)(t1); }
                            t3 = t9;
                            t0 = (FUN_0c060454(t3, ((0x184 + t9) + t7)));
                            if (t0 != 0) {
                                t1 = (*(signed char *)((t8 + 0x0)));
                                t0 = 0xC25801C;
                                t1 = (t1 & t5);
                                t3 = 0x184;
                                t1 = (t1 << 2);
                                t2 = (*(int *)((t1 + t0)));
                                t3 = (t3 + t9);
                                t34 = t2;
                                *(int *)((int)stk + 0) = t34;
                                t3 = (t3 + t6);
                                t0 = (FUN_0c06050c(t3));
                                t3 = t9;
                                t0 = (((int (*)(int, int, int, int, int, int, int, int, int, int, int))(t34))(t3, ((0x184 + t9) + t6), t0, a7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24)));
                            }
                        } else {
                            t38 = t1;
                        }
                        t1 = t38;
                        t2 = (*(int *)(((int)stk + 4)));
                        t4 = (t4 + 0x1);
                        t8 = (t8 + 0x20);
                        t6 = (t6 + 0x20);
                        t7 = (t7 + 0x20);
                        if ((int)t4 >= (int)t2) {
                            break;
                        }
                    }
                    t44 = t2;
                }
            } else {
                t44 = t2;
                t45 = t3;
            }
        } else {
            t44 = t2;
        }
        t9 = (*(int *)((t9 + 0xC)));
        t2 = t44;
        t3 = t45;
    }
    return t0;
}

int FUN_0c14873c(int a4)
{
    int stk[9];
    register int t0;
    register int t1;
    register int t2;
    register float u12;
    register int t21;
    register int t33;

    t0 = *(signed char *)((a4 + 0x1));
    t1 = (((struct o22_short *)(a4))->v);
    t2 = FUN_0c04307c();
    if (t2 != 0) {
        t33 = (FUN_0c148494(a4, 0x2, (*(signed char *)((a4 + 0x1)))));
    } else {
        (((struct o964_uint *)((((short)t1 * (short)0x3938) + 0xC532498)))->v) = ((*(int *)(((((short)t1 * (short)0x3938) + 0xC532498) + 0x38))) - (*(int *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x38))));
        if ((*(signed char *)((a4 + 0x15))) == 0) {
            math_mat_get_translate((a4 + 0x64), (((int)stk + 0) + 0x18));
            *(float *)(((int)stk + 12)) = 0.0f;
            *(float *)(((int)stk + 16)) = ((((struct o0_float *)0xC148890)->v));
            *(float *)(((int)stk + 20)) = ((((struct o4_float *)0xC148890)->v));
            math_mat_transform_vector((((int)stk + 0) + 0xC), (a4 + 0x64));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)((((int)stk + 0) + 0xC)); }
            u12 = (((struct o10_float *)0xC148890)->v);
            math_vec3_mul_xyz(((int)stk + 0), *(Stk3 *)(((int)stk + 0)), u12, u12, u12);
            nlAddVector3op((((int)stk + 0) + 0xC), (((int)stk + 0) + 0xC), (((int)stk + 0) + 0x18));
            nlAddVector3op(((int)stk + 0), ((int)stk + 0), (((int)stk + 0) + 0x18));
            FUN_0c14803c((*(signed char *)((a4 + 0x1))), ((((struct o22_short *)(a4))->v)), (((int)stk + 0) + 0xC), ((int)stk + 0), 1.0f);
            FUN_0c059e9a((((short)t1 * (short)0x3938) + 0xC532498), 0x2A, (((int)stk + 0) + 0x18));
            *(unsigned short *)((a4 + 0x1C)) = 0x1E;
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        } else {
            t21 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t21 - 1);
            if ((int)(short)(t21 - 1) <= 0) {
                FUN_0c148494(a4, 0x5, (*(signed char *)((a4 + 0x1))));
            }
        }
        (((struct o376C_uint *)((((short)t0 * (short)0x3938) + 0xC532498)))->v) = a4;
        t33 = 0x376C;
    }
    return t33;
}

int FUN_0c11cb50(int a4, int a5, int a6, int a7)
{
    register int t0;

    if ((int)(*(short *)(((*(int *)((a4 + 0x10))) + 0x1E))) >= (int)0x384) {
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
        if (((int)((int)(*(short *)((a4 + 0x1C))) % (int)0xC)) == 0) {
            *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
            *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x0;
            *(unsigned char *)((((((struct oCC_int *)(a4))->v)) + 0x0)) = 0x0;
        }
        if (((int)((int)(*(short *)((a4 + 0x1C))) % (int)0xC)) == 4) {
            *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x0;
            *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x1;
            *(unsigned char *)((((((struct oCC_int *)(a4))->v)) + 0x0)) = 0x0;
        }
        if (((int)((int)(*(short *)((a4 + 0x1C))) % (int)0xC)) == 8) {
            *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x0;
            *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x0;
            *(unsigned char *)((((((struct oCC_int *)(a4))->v)) + 0x0)) = 0x1;
        }
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
        return (t0 + 0x1);
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    *(unsigned short *)((a4 + 0x1C)) = 0x0;
    FUN_0c03733c(a4, 0x17, (*(int *)0xC4B410C));
    (((struct oA8_uchar *)(a4))->v) = 0x0;
    (((struct oAC_ushort *)(a4))->v) = 0x1F;
    (((struct oA9_uchar *)(a4))->v) = 0x21;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x40)) = *(struct mv3 *)(0xC2A0C84); }
    *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x0;
    *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x0;
    *(unsigned char *)((((((struct oCC_int *)(a4))->v)) + 0x0)) = 0x0;
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    if (((int)((int)(*(short *)((a4 + 0x1C))) % (int)0xC)) == 0) {
        *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
        *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x0;
        *(unsigned char *)((((((struct oCC_int *)(a4))->v)) + 0x0)) = 0x0;
    }
    if (((int)((int)(*(short *)((a4 + 0x1C))) % (int)0xC)) == 4) {
        *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x0;
        *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x1;
        *(unsigned char *)((((((struct oCC_int *)(a4))->v)) + 0x0)) = 0x0;
    }
    if (((int)((int)(*(short *)((a4 + 0x1C))) % (int)0xC)) == 8) {
        *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x0;
        *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x0;
        *(unsigned char *)((((((struct oCC_int *)(a4))->v)) + 0x0)) = 0x1;
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
    return (t0 + 0x1);
}

int FUN_0c0eefa2(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, 0x1, a6, a7);
        }
        *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + 0x222);
        t0 = *(signed char *)((a4 + 0x2));
        if ((t0 != 0) && (t0 != 1)) {
            t0 = *(signed char *)0xC54098D;
            if (((int)t0 >= (int)0xD) && ((int)t0 <= (int)0xE)) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                return 0x14;
            }
            if ((*(int *)((a4 + 0x10))) != 0) {
                if ((*(signed char *)((a4 + 0x15))) == 0) {
                    t0 = *(signed char *)((0x15 + (*(int *)((a4 + 0x10)))));
                    t1 = t0;
                    if (t0 == 5) {
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        (((struct oA8_uchar *)(a4))->v) = 0x1;
                        t1 = 0xA8;
                    }
                    return t1;
                }
                if ((int)(*(signed char *)(((*(int *)((a4 + 0x10))) + 0x15))) >= (int)0x7) {
                    (((struct o15_uchar *)(a4))->v) = 0x0;
                    (((struct oA8_uchar *)(a4))->v) = 0x0;
                }
                return FUN_0c0eef50(a4, 0x71C);
            }
            return 0x15;
        }
        FUN_0c0eef50(a4, 0x71C);
        t0 = *(signed char *)0xC54098D;
        t1 = 0x15;
        if ((int)t0 >= (int)0x8) {
            t2 = 0x15;
            if ((int)t0 > (int)0xE) {
            } else {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t2 = 0x14;
            }
            t1 = t2;
        }
        return t1;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    if ((int)(*(signed char *)((a4 + 0x1B))) >= 0) {
        *(unsigned int *)((a4 + 0x10)) = (*(int *)(((((*(signed char *)((a4 + 0x1B))) << 2) + 0xC540D94) + 0x0)));
    }
    (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x200);
    t0 = *(signed char *)((a4 + 0x2));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)((0xC1CD240 + (((t0 << 1) + t0) << 2))); }
    *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + 0x222);
    t0 = *(signed char *)((a4 + 0x2));
    if ((t0 != 0) && (t0 != 1)) {
        t0 = *(signed char *)0xC54098D;
        if (((int)t0 >= (int)0xD) && ((int)t0 <= (int)0xE)) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            return 0x14;
        }
        if ((*(int *)((a4 + 0x10))) != 0) {
            if ((*(signed char *)((a4 + 0x15))) == 0) {
                t0 = *(signed char *)((0x15 + (*(int *)((a4 + 0x10)))));
                t1 = t0;
                if (t0 == 5) {
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    (((struct oA8_uchar *)(a4))->v) = 0x1;
                    t1 = 0xA8;
                }
                return t1;
            }
            if ((int)(*(signed char *)(((*(int *)((a4 + 0x10))) + 0x15))) >= (int)0x7) {
                (((struct o15_uchar *)(a4))->v) = 0x0;
                (((struct oA8_uchar *)(a4))->v) = 0x0;
            }
            return FUN_0c0eef50(a4, 0x71C);
        }
        return 0x15;
    }
    FUN_0c0eef50(a4, 0x71C);
    t0 = *(signed char *)0xC54098D;
    t1 = 0x15;
    if ((int)t0 >= (int)0x8) {
        t2 = 0x15;
        if ((int)t0 > (int)0xE) {
        } else {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t2 = 0x14;
        }
        t1 = t2;
    }
    return t1;
}

void FUN_0c10ff04(int a4, int a5, int a6)
{
    int stk[3];
    register int t2;
    register int t3;
    register int t4;
    register int t6;
    register int t7;
    register int t10;
    register int t15;
    register int t0;
    register int t1;
    register int t8;
    register int t9;
    register int t33;

    *(unsigned int *)(((int)stk + 4)) = a6;
    *(unsigned int *)(((int)stk + 8)) = 0x0;
    t2 = 0x0;
    t3 = a4;
    t4 = a5;
    t6 = 0x64;
    t7 = a5;
    t10 = 0x3;
    for (;;) {
        if ((int)t10 <= 0) {
            break;
        }
        t0 = t7;
        t1 = 0xC1874B0;
        t8 = (int)((int)t0 / (int)t6);
        t0 = t7;
        t2 = 0xC18760C;
        t7 = ((int)((int)t0 % (int)t6));
        t0 = t6;
        t2 = t10;
        t2 = (t2 - 1);
        t1 = t2;
        t2 = (t2 << 1);
        t3 = 0xC4B410C;
        t2 = (t2 + t1);
        t2 = (t2 << 2);
        t9 = t10;
        t15 = *(int *)((t3 + 0x0));
        t6 = ((int)((int)t0 / (int)0xA));
        t9 = (t9 - 1);
        *(unsigned int *)(((int)stk + 0)) = t2;
        t1 = (*(int *)(((int)stk + 4)));
        t9 = (t9 << 2);
        if (t1 != 0) {
            t3 = 0xC4;
            t4 = t8;
            t3 = (t3 + a4);
            t3 = (t3 + t9);
            t3 = (*(int *)((t3 + 0x0)));
            FUN_0c03744a(t3, t4, 0x6, t15);
            t3 = 0xC4;
            t2 = 0xC2910BC;
            t3 = (t3 + a4);
            t1 = (*(int *)(((int)stk + 0)));
            t3 = (t3 + t9);
            t3 = (*(int *)((t3 + 0x0)));
            t1 = (t1 + t2);
            t2 = 0xC187798;
            t0 = t3;
            t0 = (t0 + 0x6C);
            { struct mv3 { int w[3]; }; *(struct mv3 *)(t0) = *(struct mv3 *)(t1); }
        } else {
            t3 = 0xC4;
            t4 = t8;
            t3 = (t3 + a4);
            t3 = (t3 + t9);
            t3 = (*(int *)((t3 + 0xC)));
            FUN_0c03744a(t3, t4, 0x6, t15);
            t3 = 0xC4;
            t2 = 0xC2910BC;
            t3 = (t3 + a4);
            t1 = (*(int *)(((int)stk + 0)));
            t3 = (t3 + t9);
            t3 = (*(int *)((t3 + 0xC)));
            t1 = (t1 + t2);
            t1 = (t1 + 0x24);
            t0 = t3;
            t0 = (t0 + 0x6C);
            { struct mv3 { int w[3]; }; *(struct mv3 *)(t0) = *(struct mv3 *)(t1); }
        }
        t4 = 0x1;
        if (t8 == 0) {
            if ((*(int *)(((int)stk + 8))) != 1) {
                if (t10 != 1) {
                    t2 = 0x0;
                    *(unsigned char *)((t3 + 0x0)) = t2;
                    t33 = t2;
                } else {
                    *(unsigned char *)((t3 + 0x0)) = t4;
                    t33 = 0xC187798;
                }
            } else {
                *(unsigned char *)((t3 + 0x0)) = t4;
                t33 = 0xC187798;
            }
        } else {
            *(unsigned int *)(((int)stk + 8)) = t4;
            *(unsigned char *)((t3 + 0x0)) = t4;
            t33 = 0xC187798;
        }
        t10 = (t10 - 1);
        t2 = t33;
    }
}

int FUN_0c134780(int a4, int a5)
{
    int stk[4];
    int t13;
    register int t15;
    register int t17;
    register int t19;
    register int t21;
    register int t22;
    register float u25;
    register float u26;
    register float u27;
    register float t28;
    register int t30;
    register int t32;
    register int t34;
    register int t36;
    register int t38;

    *(unsigned int *)(((int)stk + 0)) = a5;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x4)) = *(struct mv3 *)(((*(int *)((a4 + 0x10))) + 0x380C)); }
    (((struct o4_float *)(((int)stk + 0)))->v) = (((((struct o4_float *)(((int)stk + 0)))->v)) - ((((struct o28_float *)(a4))->v)));
    (((struct o4_float *)((((int)stk + 0) + 0x4)))->v) = (((((struct o4_float *)((((int)stk + 0) + 0x4)))->v)) - ((((struct o2C_float *)(a4))->v)));
    (((struct o8_float *)((((int)stk + 0) + 0x4)))->v) = (((((struct o8_float *)((((int)stk + 0) + 0x4)))->v)) - ((((struct o30_float *)(a4))->v)));
    if (((((struct o4_float *)(((int)stk + 0)))->v)) == 0.0f) {
        (((struct o4_float *)(((int)stk + 0)))->v) = 9.99999997e-07f;
    }
    t13 = math_atan_angle16(((-((((struct o8_float *)((((int)stk + 0) + 0x4)))->v))) / ((((struct o4_float *)(((int)stk + 0)))->v))));
    t15 = (0xFFFF & t13);
    if (0.0f > ((((struct o4_float *)(((int)stk + 0)))->v))) {
        t15 = ((0xFFFF & t13) + 0x8000);
    }
    t17 = *(int *)((a4 + 0x38));
    t19 = (unsigned short)((unsigned short)(0x4000 + t15) - t17);
    if (((unsigned short)((unsigned short)(0x4000 + t15) - t17) & 0x8000) != 0) {
        t19 = ((unsigned short)((unsigned short)(0x4000 + t15) - t17) | 0xFFFF0000);
    }
    t21 = *(int *)(((int)stk + 0));
    t22 = (-(int)(((float)t21 * 65536.0f) / 360.0f));
    if ((int)t19 > 0) {
        t22 = (int)(((float)t21 * 65536.0f) / 360.0f);
    }
    *(unsigned int *)((a4 + 0x38)) = (unsigned short)((*(int *)((a4 + 0x38))) + t22);
    u25 = (((struct o8_float *)((((int)stk + 0) + 0x4)))->v);
    u26 = (((struct o4_float *)(((int)stk + 0)))->v);
    u27 = (u25 * u25);
    u27 = u27 + u26 * u26;
    t28 = math_signed_sqrt(u27);
    t30 = math_atan_angle16(((-t28) / ((((struct o4_float *)((((int)stk + 0) + 0x4)))->v))));
    t32 = t30;
    if (0.0f > ((((struct o4_float *)((((int)stk + 0) + 0x4)))->v))) {
        t32 = (t30 + 0x8000);
    }
    t34 = *(int *)((a4 + 0x34));
    t36 = (unsigned short)((-(unsigned short)(0x4000 + t32)) - t34);
    if ((0x8000 & (unsigned short)((-(unsigned short)(0x4000 + t32)) - t34)) != 0) {
        t36 = ((unsigned short)((-(unsigned short)(0x4000 + t32)) - t34) | 0xFFFF0000);
    }
    t38 = (-(int)(((float)t21 * 65536.0f) / 360.0f));
    if ((int)t36 > 0) {
        t38 = (int)(((float)t21 * 65536.0f) / 360.0f);
    }
    *(unsigned int *)((a4 + 0x34)) = (unsigned short)((*(int *)((a4 + 0x34))) + t38);
    return 0x4;
}

int FUN_0c0ffbbc(int a4, float f4)
{
    int stk[1];

    register int R3;
    register int R12;
    register float F3;
    register float F8;
    register float F11;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register float w0_0;
    register float w0_1;
    v0_0 = a4;
    w0_0 = f4;
    v0_1 = (0x0);
    if (((*(signed char *)((v0_0 + 0x14))) != 0)) goto L_C0FFBDC;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    (((struct o15_uchar *)(v0_0))->v) = v0_1;
    (((struct o16_uchar *)(v0_0))->v) = v0_1;
    L_C0FFBDC:;
    v0_5 = *(signed char *)((v0_0 + 0x2));
    v0_4 = (v0_5);
    v0_2 = (0xC472B24);
    v0_3 = (0xC472B28);
    w0_1 = (1.0f);
    if ((v0_5 == 0)) goto L_C0FFCA0;
    if ((v0_4 == 1)) goto L_C0FFC14;
    if (!((v0_4 == 2))) goto L_C0FFCA2;
    if (((*(int *)((v0_3 + 0x0))) == 2)) goto L_C0FFCA0;
    return FUN_0c03f346(v0_0, v0_1, v0_2, v0_3);
    L_C0FFCA2:;
    v0_1 = *(signed char *)((v0_0 + 0x15));
    v0_4 = (v0_1);
    if ((v0_1 == 0)) goto L_C0FFCB2;
    if ((v0_4 == 1)) goto L_C0FFCBA;
    L_C0FFCD2:;
    return v0_4;
    L_C0FFCBA:;
    v0_4 = (0xB0);
    if ((w0_0 == ((((struct oB0_float *)(v0_0))->v)))) goto L_C0FFCD2;
    (((struct oBC_float *)(v0_0))->v) = w0_0;
    (((struct oB8_float *)(v0_0))->v) = w0_0;
    (((struct oB4_float *)(v0_0))->v) = w0_0;
    (((struct oB0_float *)(v0_0))->v) = w0_0;
    v0_4 = (0xB0);
    goto L_C0FFCD2;
    L_C0FFCB2:;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    goto L_C0FFCBA;
    L_C0FFCA0:;
    w0_0 = (w0_1);
    goto L_C0FFCA2;
    L_C0FFC14:;
    w0_0 = (w0_1);
    if (((*(signed char *)0xC5429A8) != 0)) goto L_C0FFC22;
    v0_4 = (v0_1);
    L_C0FFC24:;
    v0_3 = ((*(int *)((v0_3 + 0x0))));
    if (((*(int *)((v0_2 + 0x30))) != 0)) goto L_C0FFC30;
    v0_2 = (v0_1);
    L_C0FFC32:;
    *(unsigned int *)(((int)stk + 0)) = v0_3;
    if ((v0_3 == 0)) goto L_C0FFC40;
    if (((*(int *)(((int)stk + 0))) == 1)) goto L_C0FFC40;
    v0_2 = ((v0_2 + 0x1));
    L_C0FFC40:;
    v0_5 = (0xC1FBA14);
    v0_3 = ((((((((v0_4 << 1) + v0_4) << 2) << 2) << 1) + 0xC1FBA44) + ((((v0_2 << 1) + v0_2) << 2) << 1)));
    L_C0FFC84:;
    if (((int)v0_1 < (int)((((struct oC0_int *)(v0_0))->v)))) goto L_C0FFC62;
    goto L_C0FFCA2;
    L_C0FFC62:;
    { struct mv4 { int w[4]; }; *(struct mv4 *)(((*(int *)((((0xC4 + v0_0) + (v0_1 << 2)) + 0x0))) + 0x14)) = *(struct mv4 *)(((((*(int *)(((v0_1 << 2) + v0_3))) << 2) << 2) + v0_5)); }
    v0_1 = ((v0_1 + 0x1));
    goto L_C0FFC84;
    L_C0FFC30:;
    v0_2 = (0x2);
    goto L_C0FFC32;
    L_C0FFC22:;
    v0_4 = (0x1);
    goto L_C0FFC24;
}
