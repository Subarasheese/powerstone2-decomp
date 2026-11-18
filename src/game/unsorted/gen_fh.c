/* Straight-line functions with calls and guards (batch gen_fh): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o10_float { char p[0x10]; float v; };
struct o10_int { char p[0x10]; int v; };
struct o135_uchar { char p[0x135]; unsigned char v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o18_int { char p[0x18]; int v; };
struct o1C_int { char p[0x1C]; int v; };
struct o20_int { char p[0x20]; int v; };
struct o20_uchar { char p[0x20]; unsigned char v; };
struct o24_int { char p[0x24]; int v; };
struct o24_short { char p[0x24]; short v; };
struct o28_float { char p[0x28]; float v; };
struct o28_int { char p[0x28]; int v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2C_int { char p[0x2C]; int v; };
struct o30_float { char p[0x30]; float v; };
struct o30_int { char p[0x30]; int v; };
struct o34_int { char p[0x34]; int v; };
struct o3717_uchar { char p[0x3717]; unsigned char v; };
struct o3718_uchar { char p[0x3718]; unsigned char v; };
struct o3768_int { char p[0x3768]; int v; };
struct o376C_uint { char p[0x376C]; unsigned int v; };
struct o3790_float { char p[0x3790]; float v; };
struct o37C8_float { char p[0x37C8]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o74_float { char p[0x74]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o8C_int { char p[0x8C]; int v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAA_uchar { char p[0xAA]; unsigned char v; };
struct oAB_uchar { char p[0xAB]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c037498(int, int, int, int);
int FUN_0c03f346(int);
int FUN_0c03f444(int, int, int, int);
int FUN_0c0582de(int, int);
int FUN_0c0600c0(int, float, float, float, float);
int FUN_0c060c80(int, int, int);
int FUN_0c0612ee(int);
int FUN_0c061416(int, int, int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c07e2f4(int, int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c081ee8(int, int);
int FUN_0c085cac(int, int, int);
int FUN_0c0c2d56(int, int, int);
int FUN_0c0c30a8(int, int, int);
int FUN_0c0d4672(int);
int FUN_0c11f9c8(int, int, int);
int FUN_0c15009e(int, float, float, float, float, float);
int FUN_0c157938(int, int, int);
int FUN_0c157c34(int, int, int);
int FUN_0c157f20(int, int, int);
int FUN_0c1582e8(int, int, int);
int FUN_0c1585c4(int, int, int);
int FUN_0c15b478(int, int, int, int, int, int, int, int);
int FUN_0c162c4e(int, int, int, int);
int math_angle_between_points_xz(int, int);
float math_cos_angle16(int);
float math_interval_overlap(float, float, float, float);
int math_mat_transform_vector(int, int);
float math_signed_sqrt(float);
float math_sin_angle16(int);
int nlAddVector3op(int, int, int);
int thunk_FUN_0c05abb2(int, int);
int FUN_0c15ffcc(int a4, int a5, int a6, int a7, float f4);
int FUN_0c1585f6(int a4);
int FUN_0c130364(int a4, int a5, int a6, int a7);
int FUN_0c0637ce(int a4, int a5, int a6);
int FUN_0c06b2d2(int a4);
int FUN_0c0d4bac(int a4);

int FUN_0c15ffcc(int a4, int a5, int a6, int a7, float f4)
{
    int stk[5];
    register int t0;
    register int t34;
    register int t4;
    register int t5;
    register int t12;
    register int t13;
    register int t16;
    register int t18;

    *(unsigned char *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 16)) = a5;
    *(unsigned int *)(((int)stk + 8)) = a6;
    *(unsigned int *)(((int)stk + 0)) = a7;
    *(float *)(((int)stk + 12)) = f4;
    t0 = FUN_0c03f444(0x5, 0x0, 0x7, a7);
    t34 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC15FE00;
        (((struct oAC_ushort *)(t0))->v) = 0x1;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)((*(int *)(((int)stk + 0)))); }
        *(unsigned char *)((t0 + 0x2)) = (*(signed char *)(((int)stk + 4)));
        (((struct o48_float *)(t0))->v) = 1.0f;
        (((struct o44_float *)(t0))->v) = 1.0f;
        (((struct o40_float *)(t0))->v) = 1.0f;
        (((struct oA4_uint *)(t0))->v) = (*(int *)(((int)stk + 8)));
        *(unsigned int *)(((int)stk + 0)) = 0xC203988;
        t4 = 0x0;
        t5 = 0x0;
        for (;;) {
            FUN_0c037498((*(int *)((((0xC4 + t0) + t5) + 0x0))), (*(int *)((t5 + 0xC20396C))), 0x3B, (*(int *)0xC4B40CC));
            *(unsigned char *)(((*(int *)((((0xC4 + t0) + t5) + 0x0))) + 0x0)) = 0x0;
            *(unsigned short *)(((*(int *)((((0xC4 + t0) + t5) + 0x0))) + 0x6)) = 0x9;
            t12 = *(int *)(((int)stk + 0));
            t13 = *(int *)((((0xC4 + t0) + t5) + 0x0));
            *(unsigned int *)(((int)stk + 0)) = (t12 + 0xC);
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t13 + 0x6C)) = *(struct mv3 *)(((t12 + 0xC) - 12)); }
            t4 = (t4 + 0x1);
            (((struct o80_uint *)((*(int *)((((0xC4 + t0) + t5) + 0x0)))))->v) = (*(int *)((t5 + 0xC2039DC)));
            t16 = *(int *)((((0xC4 + t0) + t5) + 0x0));
            (((struct o8C_float *)(t16))->v) = 1.0f;
            (((struct o88_float *)(t16))->v) = 1.0f;
            (((struct o84_float *)(t16))->v) = 1.0f;
            t5 = (t5 + 0x4);
            if ((int)t4 >= (int)0x7) {
                break;
            }
        }
        *(unsigned short *)((((((struct oC4_int *)(t0))->v)) + 0x6)) = 0x31;
        t18 = (((struct oC4_int *)(t0))->v);
        (((struct o8C_float *)(t18))->v) = 4.0f;
        (((struct o88_float *)(t18))->v) = 4.0f;
        (((struct o84_float *)(t18))->v) = 4.0f;
        (((struct o74_float *)(((((struct oC8_int *)(t0))->v))))->v) = (*(float *)(((int)stk + 12)));
        (((struct o68_uint *)((*(int *)(((0xC4 + t0) + 0x4)))))->v) = (((((struct oC4_int *)(t0))->v)) + 0x28);
        (((struct o68_uint *)((*(int *)(((0xC4 + t0) + 0x8)))))->v) = ((*(int *)(((0xC4 + t0) + 0x4))) + 0x28);
        (((struct o68_uint *)((*(int *)(((0xC4 + t0) + 0xC)))))->v) = ((*(int *)(((0xC4 + t0) + 0x4))) + 0x28);
        (((struct o68_uint *)((*(int *)(((0xC4 + t0) + 0x10)))))->v) = ((*(int *)(((0xC4 + t0) + 0x4))) + 0x28);
        (((struct o68_uint *)((*(int *)(((0xC4 + t0) + 0x14)))))->v) = ((*(int *)(((0xC4 + t0) + 0x4))) + 0x28);
        (((struct o68_uint *)((*(int *)(((0xC4 + t0) + 0x18)))))->v) = ((*(int *)(((0xC4 + t0) + 0x4))) + 0x28);
        t34 = *(short *)(((int)stk + 16));
        *(unsigned short *)((t0 + 0x1C)) = t34;
    }
    return t34;
}

int FUN_0c1585f6(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;
    register int t10;
    register int t11;
    register int t12;
    register int t13;

    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC5324C0)); }
    nlAddVector3op((a4 + 0x28), (a4 + 0x28), (((((struct oC4_int *)(a4))->v)) + 0x6C));
    if ((*(signed char *)((a4 + 0x14))) != 0) {
        return FUN_0c03f346(a4);
    }
    t5 = *(short *)((a4 + 0x1C));
    t6 = 0xC2A2A2C;
    t7 = t5;
    if (((int)t5 >= (int)((((struct o4_int *)0xC2A2A2C)->v))) && (t0 = (((struct o8_int *)0xC2A2A2C)->v), (int)t5 <= (int)t0)) {
        t0 = t5;
        t8 = 0xC2A2A50;
        t9 = 0xC2A2A2C;
        t10 = t5;
        t5 = 0x0;
        for (;;) {
            if ((int)t5 >= (int)((((struct o30_int *)0xC2A2A2C)->v))) {
                break;
            }
            t0 = (*(short *)((a4 + 0x1E)));
            t11 = t0;
            t0 = ((((struct o2C_int *)0xC2A2A2C)->v));
            t0 = ((int)((int)t11 % (int)t0));
            if (t0 == 0) {
                t0 = (*(signed char *)((a4 + 0x1)));
                t9 = a4;
                t9 = (t9 + 0x28);
                t8 = t0;
                t0 = (FUN_0c157938(t8, t9, t10));
            } else {
                t11 = t8;
                t12 = t9;
                t13 = t10;
            }
            t0 = (*(short *)((a4 + 0x1E)));
            t8 = t11;
            t9 = t12;
            t10 = t13;
            t5 = (t5 + 0x1);
            t0 = (t0 + 0x1);
            *(unsigned short *)((a4 + 0x1E)) = t0;
        }
        t6 = t9;
        t7 = t10;
    }
    t0 = *(short *)((a4 + 0x1C));
    t5 = t7;
    if (((int)t0 >= (int)((((struct oC_int *)0xC2A2A2C)->v))) && (t1 = (((struct o10_int *)0xC2A2A2C)->v), (int)t0 <= (int)t1)) {
        if (((int)((int)(*(short *)((a4 + 0x1C))) % (int)((((struct o24_int *)0xC2A2A2C)->v)))) == 0) {
            FUN_0c157c34((a4 + 0x28), t6, t7);
        } else {
            t0 = t7;
        }
        t5 = t0;
    }
    t0 = *(short *)((a4 + 0x1C));
    t1 = t5;
    if (((int)t0 >= (int)((((struct oC_int *)0xC2A2A2C)->v))) && (t2 = (((struct o10_int *)0xC2A2A2C)->v), (int)t0 <= (int)t2)) {
        if (((int)((int)(*(short *)((a4 + 0x1C))) % (int)((((struct o34_int *)0xC2A2A2C)->v)))) == 0) {
            FUN_0c157f20((a4 + 0x28), t0, t5);
        } else {
            t0 = t5;
        }
        t1 = t0;
    }
    t0 = *(short *)((a4 + 0x1C));
    t2 = t1;
    if (((int)t0 >= (int)((((struct o14_int *)0xC2A2A2C)->v))) && (t3 = (((struct o18_int *)0xC2A2A2C)->v), (int)t0 <= (int)t3)) {
        if (((int)((int)(*(short *)((a4 + 0x1C))) % (int)((((struct o28_int *)0xC2A2A2C)->v)))) == 0) {
            FUN_0c1582e8((*(signed char *)((a4 + 0x1))), (a4 + 0x28), t1);
        } else {
            t0 = t1;
        }
        t2 = t0;
    }
    t0 = *(short *)((a4 + 0x1C));
    if (((int)t0 >= (int)((((struct o1C_int *)0xC2A2A2C)->v))) && (t4 = (((struct o20_int *)0xC2A2A2C)->v), (int)t0 <= (int)t4)) {
        t1 = 0x10;
        for (;;) {
            FUN_0c1585c4((a4 + 0x28), t0, t2);
            t1 = (t1 - 0x1);
            if (t1 == 0) {
                break;
            }
        }
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
    t1 = (short)(t0 + 0x1);
    if ((int)(short)(t0 + 0x1) > (int)((((struct o0_int *)0xC2A2A2C)->v))) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t1 = 0x14;
    }
    return t1;
}

int FUN_0c130364(int a4, int a5, int a6, int a7)
{
    int stk[9];
    register int t0;
    register int t34;
    register float u6;
    register float u13;
    register int t18;
    register int t28;

    t0 = FUN_0c03f444(0x1, 0x0, 0x1, a7);
    t34 = t0;
    if (t0 == 0) {
    } else {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct o14_uchar *)(t0))->v) = 0x0;
        (((struct o15_uchar *)(t0))->v) = 0x0;
        *(unsigned short *)((t0 + 0x1C)) = 0x0;
        *(unsigned short *)((t0 + 0x1E)) = 0x0;
        *(unsigned int *)((t0 + 0x4)) = 0xC13022A;
        *(unsigned int *)((t0 + 0x10)) = a4;
        (((struct oAC_ushort *)(t0))->v) = 0x5;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)((a4 + 0x28)); }
        *(int *)((int)stk + 28) = (t0 + 0x28);
        u6 = ((((struct o28_float *)(t0))->v));
        u6 = u6 + (math_sin_angle16((*(int *)((a4 + 0x38))))) * ((((struct o0_float *)0xC2A1374)->v));
        (((struct o28_float *)(t0))->v) = u6;
        (((struct o2C_float *)(t0))->v) = (((((struct o2C_float *)(t0))->v)) + ((((struct o4_float *)0xC2A1374)->v)));
        *(int *)((int)stk + 28) = (t0 + 0x30);
        u13 = ((((struct o30_float *)(t0))->v));
        u13 = u13 + (math_cos_angle16((*(int *)((a4 + 0x38))))) * ((((struct o8_float *)0xC2A1374)->v));
        (((struct o30_float *)(t0))->v) = u13;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x34)) = *(struct mv3 *)((a4 + 0x34)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x40)) = *(struct mv3 *)(0xC2A135C); }
        (((struct o4C_float *)(t0))->v) = ((math_sin_angle16((*(int *)((t0 + 0x38))))) * 37.0f);
        (((struct o50_float *)(t0))->v) = 0.0f;
        (((struct o54_float *)(t0))->v) = ((math_cos_angle16((*(int *)((t0 + 0x38))))) * 37.0f);
        *(int *)((int)stk + 28) = 0xF0;
        *(int *)((int)stk + 24) = 0x0;
        t18 = *(signed char *)((t0 + 0x1));
        *(int *)((int)stk + 20) = (~((int)0x1 << (int)t18));
        *(int *)((int)stk + 16) = 0x100;
        FUN_0c064d24(t0, 0x1, 0x14, 0x0, 0x100, (~((int)0x1 << (int)t18)), 0x0, 0xF0);
        FUN_0c07e2f4(t0, 0x62);
        FUN_0c03744a(((((struct oC4_int *)(t0))->v)), 0x0, 0x2, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
        *(unsigned char *)((((((struct oC4_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(t0))->v)) + 0x6)) = 0xB;
        (((struct o80_uint *)(((((struct oC4_int *)(t0))->v))))->v) = 0x4000;
        *(int *)((int)stk + 12) = 0xC2A13AC;
        *(int *)((int)stk + 8) = 0xC2A13A0;
        *(int *)((int)stk + 4) = 0x6F;
        *(int *)((int)stk + 0) = 0x1D;
        t28 = *(signed char *)((t0 + 0x1));
        (((struct o20_uchar *)(((int)stk + 0)))->v) = t28;
        t34 = (FUN_0c15b478((*(signed char *)(((int)stk + 32))), (t0 + 0x64), t0, (*(int *)((((((struct o8C_int *)((*(int *)((((signed char)t28 << 2) + 0xC4B40FC)))))->v)) + 0x0))), 0x1D, 0x6F, 0xC2A13A0, 0xC2A13AC));
    }
    return t34;
}

int FUN_0c0637ce(int a4, int a5, int a6)
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

    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x4)) = *(struct mv3 *)(0xC1C4B6C); }
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
    u10 = (((struct o4_float *)((a4 + 0x8)))->v);
    *(float *)(((int)stk + 4)) = u10;
    u11 = (((struct o10_float *)((a4 + 0x8)))->v);
    u12 = (((struct o4_float *)((a6 + 0x8)))->v);
    u13 = (((struct oC_float *)((a6 + 0x8)))->v);
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

int FUN_0c06b2d2(int a4)
{
    int stk[5];
    register int t0;
    register int t10;
    register int t11;
    register int t22;
    register int t27;
    register int t29;
    register int t30;
    register int t32;
    register int t43;
    register int t48;
    register int t50;
    register int t51;
    register int t53;
    register int t65;
    register int t1;
    register int t2;
    register int t79;
    register int t69;

    t0 = (((struct o3768_int *)(a4))->v);
    if ((t0 != 0) && ((t1 = *(signed char *)((t0 + 0x41C)), (unsigned char)t1 == 72) || (t2 = *(signed char *)((t0 + 0x41C)), (unsigned char)t2 == 70))) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)((0x37C4 + a4)) = *(struct mv3 *)((((((struct o3768_int *)(a4))->v)) + 0x28)); }
        if (0.0f > ((((struct o50_float *)(a4))->v))) {
            if (!(((((struct o2C_float *)(a4))->v)) > (((((struct o37C8_float *)(a4))->v)) + 50.0f))) {
                t10 = FUN_0c0c30a8(((((struct o3768_int *)(a4))->v)), 0x0, a4);
                if (t10 != 0) {
                    t11 = (((struct o3768_int *)(a4))->v);
                    *(unsigned int *)(((int)stk + 4)) = t11;
                    FUN_0c11f9c8((*(signed char *)((a4 + 0x1))), (unsigned char)(*(signed char *)(((*(int *)(((int)stk + 4))) + 0x41C))), ((((struct o24_short *)(t11))->v)));
                    FUN_0c081ee8(a4, ((((struct o3768_int *)(a4))->v)));
                }
                (((struct o3717_uchar *)(a4))->v) = 0x40;
                (((struct o3718_uchar *)(a4))->v) = 0x0;
                t79 = (FUN_0c085cac(a4, 0x40, 0x0));
            } else {
                t22 = math_angle_between_points_xz((a4 + 0x28), (0x37C4 + a4));
                (((struct o4C_float *)(a4))->v) = (-((math_sin_angle16(t22)) * ((((struct o3790_float *)(a4))->v))));
                (((struct o54_float *)(a4))->v) = (-((math_cos_angle16(t22)) * ((((struct o3790_float *)(a4))->v))));
                t27 = *(int *)((a4 + 0x38));
                t29 = *(int *)((((((struct o3768_int *)(a4))->v)) + 0x38));
                t30 = *(short *)((a4 + 0x1C));
                t32 = (unsigned short)(t27 - t29);
                if ((0x8000 & (unsigned short)(t27 - t29)) != 0) {
                    t32 = ((unsigned short)(t27 - t29) | 0xFFFF0000);
                }
                t79 = (int)((int)t32 / (int)t30);
                *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + t79);
            }
        } else {
            t43 = math_angle_between_points_xz((a4 + 0x28), (0x37C4 + a4));
            (((struct o4C_float *)(a4))->v) = (-((math_sin_angle16(t43)) * ((((struct o3790_float *)(a4))->v))));
            (((struct o54_float *)(a4))->v) = (-((math_cos_angle16(t43)) * ((((struct o3790_float *)(a4))->v))));
            t48 = *(int *)((a4 + 0x38));
            t50 = *(int *)((((((struct o3768_int *)(a4))->v)) + 0x38));
            t51 = *(short *)((a4 + 0x1C));
            t53 = (unsigned short)(t48 - t50);
            if ((0x8000 & (unsigned short)(t48 - t50)) != 0) {
                t53 = ((unsigned short)(t48 - t50) | 0xFFFF0000);
            }
            t79 = (int)((int)t53 / (int)t51);
            *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + t79);
        }
    } else {
        t79 = 0x50;
        if (!(0.0f > ((((struct o50_float *)(a4))->v)))) {
        } else {
            t65 = FUN_0c07ecc6(a4, 0x0, 0x0);
            *(unsigned int *)(((int)stk + 0)) = t65;
            t79 = t65;
            if (t65 == 0) {
            } else {
                if ((*(int *)(((int)stk + 0))) == 2) {
                    (((struct o3717_uchar *)(a4))->v) = 0x6;
                    (((struct o3718_uchar *)(a4))->v) = 0x1;
                    t69 = 0x1;
                } else {
                    (((struct o3717_uchar *)(a4))->v) = 0x6;
                    (((struct o3718_uchar *)(a4))->v) = 0x0;
                    t69 = 0x0;
                }
                t79 = (FUN_0c085cac(a4, 0x6, t69));
            }
        }
    }
    return t79;
}

int FUN_0c0d4bac(int a4)
{
    int stk[7];
    register int t1;
    register int t59;
    register int t3;
    register int t4;
    register int t9;
    register float u40;
    register int t43;

    *(unsigned int *)(((int)stk + 0)) = (((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532498);
    t1 = FUN_0c0d4672(a4);
    t59 = t1;
    if (t1 != 0) {
    } else {
        t3 = *(signed char *)((a4 + 0x15));
        if (t3 != 0) {
            if (t3 != 1) {
            } else {
                t4 = (((struct oCC_int *)(a4))->v);
                (((struct o8C_float *)(t4))->v) = (((((struct o8C_float *)(t4))->v)) + 0.0199999996f);
                if (!(1.0f > ((((struct o8C_float *)(((((struct oCC_int *)(a4))->v))))->v)))) {
                    (((struct o8C_float *)(((((struct oCC_int *)(a4))->v))))->v) = 1.0f;
                    t9 = (((struct oCC_int *)(a4))->v);
                    *(unsigned short *)((t9 + 0x6)) = ((*(short *)((t9 + 0x6))) & 0xFFEF);
                    FUN_0c0c2d56(a4, 0x5, (*(signed char *)((a4 + 0x1))));
                    (((struct oAA_uchar *)(a4))->v) = 0x1;
                    (((struct oAB_uchar *)(a4))->v) = 0x5;
                }
            }
        } else {
            (((struct oAA_uchar *)(a4))->v) = 0x1;
            (((struct oAB_uchar *)(a4))->v) = 0x5;
            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x10)) = *(struct mv3 *)(0xC1C8114); }
            FUN_0c0582de((((int)stk + 0) + 0x10), (((((struct oC8_int *)(a4))->v)) + 0x28));
            *(float *)(((int)stk + 4)) = 0.0f;
            *(float *)(((int)stk + 8)) = ((((struct o10_float *)0xC1C8100)->v));
            *(float *)(((int)stk + 12)) = ((((struct oC_float *)0xC1C8100)->v));
            math_mat_transform_vector((((int)stk + 0) + 0x4), (((((struct oC8_int *)(a4))->v)) + 0x28));
            FUN_0c162c4e((*(signed char *)((a4 + 0x1))), ((((struct o0_int *)0xC1C8100)->v)), (((int)stk + 0) + 0x10), (((int)stk + 0) + 0x4));
            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x10)) = *(struct mv3 *)(0xC1C812C); }
            FUN_0c0582de((((int)stk + 0) + 0x10), (((((struct oC8_int *)(a4))->v)) + 0x28));
            u40 = (((struct o0_float *)0xC0D4D68)->v);
            FUN_0c15009e((((int)stk + 0) + 0x10), u40, u40, u40, ((((struct o8_float *)0xC1C8100)->v)), (1.0f + 1.0f));
            t43 = (((struct oCC_int *)(a4))->v);
            *(unsigned short *)((t43 + 0x6)) = ((*(short *)((t43 + 0x6))) | 0x10);
            (((struct o8C_float *)(((((struct oCC_int *)(a4))->v))))->v) = ((((struct o8_float *)0xC0D4D68)->v));
            thunk_FUN_0c05abb2(0x46, (a4 + 0x28));
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        }
        (((struct o376C_uint *)((*(int *)(((int)stk + 0)))))->v) = a4;
        t59 = 0x376C;
    }
    return t59;
}
