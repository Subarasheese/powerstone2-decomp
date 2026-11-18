/* Straight-line functions with calls and guards (batch gen_ft): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
struct o0_float { float v; };
struct o0_int { int v; };
struct o10_float { char p[0x10]; float v; };
struct o126_uchar { char p[0x126]; unsigned char v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12C_ushort { char p[0x12C]; unsigned short v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o3790_float { char p[0x3790]; float v; };
struct o3794_float { char p[0x3794]; float v; };
struct o3810_float { char p[0x3810]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o40_float { char p[0x40]; float v; };
struct o404_int { char p[0x404]; int v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o90_float { char p[0x90]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oE4_int { char p[0xE4]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c037498(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int, int);
int FUN_0c0582de(int, int, Stk3);
int FUN_0c0588bc(int, int, int, int, int, int);
int FUN_0c058a6e(int, int, int, int, int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c07e2f4(int, int);
int FUN_0c07e3ae(int, int);
int FUN_0c0c2ab6(int, int);
int FUN_0c0c2d56(int, int, int);
int FUN_0c1171f0(int);
int FUN_0c13a640(int, int, int);
int FUN_0c13a90e(int, int, int, int);
int FUN_0c13abe2(int, int, int, int);
int FUN_0c13b08c(int, int, int, int);
int FUN_0c13b35e(int, int, int, int);
int FUN_0c13b632(int, int, int, int);
int FUN_0c144924(int, int);
int FUN_0c144984(int, int, int);
extern int FUN_0c150010();
float FUN_0c17c450(int);
float math_cos_angle16(int);
int math_mat_get_translate(int, int);
int math_mat_transform_vector(int, int);
float math_signed_sqrt(float);
float math_sin_angle16(int);
int math_vec3_mul_xyz(int, float, float, float);
int nlAddVector3op(int, int, int);
int nlCopyMatrix(int, int, int, int, int);
float nlInnerProduct(int, int);
int nlRand(void);
float nlScalor(int);
int nlSubVector3op(int, int, int);
int thunk_FUN_0c058310(int, int);
int FUN_0c1353a4(int a4, int a5, int a6, int a7);
int FUN_0c13c3c0(int a4, int a5, int a6, int a7);
float FUN_0c07043c(int a4, float f4, float f5, float f6, float f7);
int FUN_0c0e88b8(int a4, int a5, int a6, int a7);
void FUN_0c157938(int a4, int a5, int a6, int a7);
int FUN_0c15d494(int a4, int a5, int a6, int a7, int a8, float f4);
int FUN_0c13b6a8(int a4, int a5, int a6, int a7);
int FUN_0c148f08(int a4, int a5, int a6, float f4, float f5);
int FUN_0c164d20(int a4, int a5, int a6, int a7);
int FUN_0c16be0a(int a4, int a5, int a6, int a7);
void FUN_0c14a9d8(int a4, int a5, int a6, int a7);
int FUN_0c1575d4(int a4, int a5, int a6, int a7);
int FUN_0c157c34(int a4, int a5, int a6, int a7);
int FUN_0c157f20(int a4, int a5, int a6, int a7);
int FUN_0c0d7d0c(int a4, int a5, int a6, int a7);
int FUN_0c0d96d8(int a4, int a5, int a6, int a7);
int FUN_0c13ac58(int a4, int a5, int a6, int a7);
int FUN_0c13e268(int a4, int a5, int a6, int a7);
int FUN_0c145132(int a4);
int FUN_0c11846a(int a4, int a5, int a6, int a7);
void FUN_0c126618(int a4, int a5, int a6, int a7);
int FUN_0c1689ec(int a4, int a5, int a6, int a7);

int FUN_0c1353a4(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t0;
    register int t25;
    register int t5;
    register int t6;

    *(unsigned char *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 0)) = a6;
    *(unsigned int *)(((int)stk + 8)) = a7;
    t0 = FUN_0c03f444(0x5, 0x0, 0x1, a7);
    t25 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned int *)((t0 + 0x4)) = 0xC1354F8;
        *(unsigned int *)((t0 + 0x10)) = a4;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x40)) = *(struct mv3 *)((*(int *)(((int)stk + 8)))); }
        *(unsigned char *)((t0 + 0x2)) = (*(signed char *)(((int)stk + 4)));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x34)) = *(struct mv3 *)((a4 + 0x34)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)((*(int *)(((int)stk + 0)))); }
        (((struct o20_ushort *)(t0))->v) = 0x4;
        t5 = nlRand();
        t6 = ((~(((~t5) + 0x1) & 0xF)) + 0x1);
        if ((int)t5 >= 0) {
            t6 = (t5 & 0xF);
        }
        (((struct o22_ushort *)(t0))->v) = t6;
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0x1F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        FUN_0c037498(((((struct oC4_int *)(t0))->v)), ((((struct o22_short *)(t0))->v)), 0x2, (*(int *)((((*(signed char *)((t0 + 0x1))) << 2) + 0xC4B40FC))));
        *(unsigned char *)((((((struct oC4_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(t0))->v)) + 0x6)) = 0x23F;
        (((struct o84_float *)(((((struct oC4_int *)(t0))->v))))->v) = ((((struct o40_float *)(t0))->v));
        (((struct o88_float *)(((((struct oC4_int *)(t0))->v))))->v) = ((((struct o44_float *)(t0))->v));
        (((struct o8C_float *)(((((struct oC4_int *)(t0))->v))))->v) = ((((struct o48_float *)(t0))->v));
        (((struct o14_float *)(((((struct oC4_int *)(t0))->v))))->v) = 1.0f;
        (((struct o18_float *)(((((struct oC4_int *)(t0))->v))))->v) = 1.0f;
        (((struct o1C_float *)(((((struct oC4_int *)(t0))->v))))->v) = 1.0f;
        (((struct o20_float *)(((((struct oC4_int *)(t0))->v))))->v) = 1.0f;
        t25 = 0x20;
    }
    return t25;
}

int FUN_0c13c3c0(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;

    t0 = FUN_0c03f444(0x5, 0x0, 0x1, a7);
    t1 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)((a4 + 0x28)); }
        *(unsigned int *)((t0 + 0x4)) = 0xC13C292;
        *(unsigned char *)((t0 + 0x2)) = 0xFFFFFFFF;
        u0 = *(float *)0xC13C510;
        u1 = ((((struct o28_float *)(t0))->v));
        u1 = u1 + 1.0f * (((float)((int)((int)(nlRand()) % (int)0xF1)) + u0));
        (((struct o28_float *)(t0))->v) = u1;
        u1 = ((((struct o30_float *)(t0))->v));
        u1 = u1 + 1.0f * (((float)((int)((int)(nlRand()) % (int)0xF1)) + u0));
        (((struct o30_float *)(t0))->v) = u1;
        (((struct o2C_float *)(t0))->v) = (((((struct o2C_float *)(t0))->v)) + 120.0f);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x40)) = *(struct mv3 *)(0xC2A20DC); }
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0x1F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        (((struct oAC_ushort *)(t0))->v) = (((((struct oAC_short *)(t0))->v)) | 0x200);
        (((struct oBC_float *)(t0))->v) = 0.0f;
        (((struct oB8_float *)(t0))->v) = 0.0f;
        (((struct oB4_float *)(t0))->v) = 0.0f;
        FUN_0c037498(((((struct oC4_int *)(t0))->v)), 0x0, 0xB, (*(int *)((((*(signed char *)((t0 + 0x1))) << 2) + 0xC4B40FC))));
        *(unsigned char *)((((((struct oC4_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(t0))->v)) + 0x6)) = 0xF;
        *(unsigned int *)((t0 + 0x10)) = a4;
        t1 = 0xF;
    }
    return t1;
}

float FUN_0c07043c(int a4, float f4, float f5, float f6, float f7)
{
    int stk[5];
    register float t4;
    register float u8;
    register float u11;
    register float u13;
    register float u14;
    register float u16;
    register float u18;
    register float u23;
    register float t27;

    *(float *)(((int)stk + 0)) = f6;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x8)) = *(struct mv3 *)((0x380C + a4)); }
    *(float *)(((int)stk + 8)) = ((*(float *)(((int)stk + 8))) - ((((struct o28_float *)(a4))->v)));
    *(float *)(((int)stk + 12)) = 0.0f;
    *(float *)(((int)stk + 16)) = ((*(float *)(((int)stk + 16))) - ((((struct o30_float *)(a4))->v)));
    t4 = nlScalor((((int)stk + 0) + 0x8));
    u8 = t4;
    if ((*(signed char *)((a4 + 0x2))) == 4) {
        u8 = (t4 + (*(float *)0xC0705A8));
    }
    u11 = u8;
    if (!(u8 > f7)) {
        u11 = f7;
    }
    u13 = *(float *)(((int)stk + 0));
    u14 = u11;
    if (!(u13 > u11)) {
        u14 = u13;
    }
    u16 = (f5 * (-(f4 / f5)));
    u18 = (u16 * (-(f4 / f5)));
    (((struct o3790_float *)(a4))->v) = (((((f4 * (-(f4 / f5)))) - u18) / (1.0f + 1.0f)) + _builtin_fabsf((((((struct o2C_float *)(a4))->v)) - ((((struct o3810_float *)(a4))->v)))));
    *(unsigned int *)(((int)stk + 4)) = (0x3790 + a4);
    (((struct o4_float *)((0x3790 + a4)))->v) = ((math_signed_sqrt(((((((struct o3790_float *)(a4))->v)) * (1.0f + 1.0f)) / (-f5)))) + (-(f4 / f5)));
    u23 = (((struct o3794_float *)(a4))->v);
    (((struct o4C_float *)(a4))->v) = ((math_sin_angle16((*(int *)((a4 + 0x38))))) * (u14 / u23));
    t27 = math_cos_angle16((*(int *)((a4 + 0x38))));
    (((struct o54_float *)(a4))->v) = (t27 * (u14 / u23));
    (((struct o50_float *)(a4))->v) = f4;
    (((struct o5C_float *)(a4))->v) = f5;
    (((struct o60_float *)(a4))->v) = 0.0f;
    (((struct o58_float *)(a4))->v) = 0.0f;
    return (t27 * (u14 / u23));
}

int FUN_0c0e88b8(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x2));
    t1 = *(int *)((((*(int *)((0xC1CC14C + (((t0 << 2) + t0) << 2)))) << 2) + 0xC540D94));
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        if (t1 == 0) {
            return ((int (*)(int, int, int, int))(FUN_0c03f346))(a4, a5, a6, a7);
        }
        if ((*(signed char *)((t1 + 0x15))) == 0) {
            *(unsigned short *)((a4 + 0x1C)) = 0x78;
        }
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        t2 = (short)(t0 - 1);
        if ((int)(short)(t0 - 1) <= 0) {
            t0 = 0x15;
            if ((*(signed char *)((t1 + 0x15))) != 0) {
                FUN_0c0c2d56(a4, 0x0, (*(signed char *)((a4 + 0x1))));
                *(unsigned short *)(((0x12A + a4) + 0x4)) = 0x0;
                (((struct o12A_ushort *)(a4))->v) = 0x0;
                (((struct o12C_ushort *)(a4))->v) = 0x0;
                *(unsigned short *)((a4 + 0x1C)) = 0x3C;
                t0 = 0x3C;
            }
            t2 = t0;
        }
        return t2;
    }
    *(unsigned short *)((a4 + 0x1C)) = 0x12C;
    (((struct oA8_uchar *)(a4))->v) = 0x0;
    t0 = *(signed char *)((a4 + 0x2));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)(((0xC1CC14C + (((t0 << 2) + t0) << 2)) + 0x4)); }
    t0 = *(signed char *)((a4 + 0x2));
    *(unsigned int *)((a4 + 0x38)) = (*(int *)(((0xC1CC14C + (((t0 << 2) + t0) << 2)) + 0x10)));
    if (t1 != 0) {
        (((struct oA4_uint *)(a4))->v) = (t1 + 0x64);
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        *(unsigned int *)((a4 + 0x3C)) = 0x0;
        *(unsigned int *)((a4 + 0x34)) = 0x0;
        FUN_0c0c2ab6(a4, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738CA))));
        *(unsigned short *)(((0x12A + a4) + 0x4)) = 0x0;
        (((struct o12A_ushort *)(a4))->v) = 0x0;
        (((struct o12C_ushort *)(a4))->v) = 0x0;
        if (t1 == 0) {
            return ((int (*)(int))(FUN_0c03f346))(a4);
        }
        if ((*(signed char *)((t1 + 0x15))) == 0) {
            *(unsigned short *)((a4 + 0x1C)) = 0x78;
        }
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        t2 = (short)(t0 - 1);
        if ((int)(short)(t0 - 1) <= 0) {
            t0 = 0x15;
            if ((*(signed char *)((t1 + 0x15))) != 0) {
                FUN_0c0c2d56(a4, 0x0, (*(signed char *)((a4 + 0x1))));
                *(unsigned short *)(((0x12A + a4) + 0x4)) = 0x0;
                (((struct o12A_ushort *)(a4))->v) = 0x0;
                (((struct o12C_ushort *)(a4))->v) = 0x0;
                *(unsigned short *)((a4 + 0x1C)) = 0x3C;
                t0 = 0x3C;
            }
            t2 = t0;
        }
        return t2;
    }
    return ((int (*)(int, int, int, int))(FUN_0c03f346))(a4, a5, a6, a7);
}

void FUN_0c157938(int a4, int a5, int a6, int a7)
{
    int stk[8];
    register int t0;
    register float u3;
    register int t11;
    register float u14;
    register float u15;
    register float u16;
    register float t18;
    register float t21;

    *(unsigned char *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 0)) = a5;
    t0 = FUN_0c03f444(0x5, 0x0, 0x1, a7);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((int)stk + 4)));
        *(unsigned int *)((t0 + 0x4)) = 0xC157790;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)((*(int *)(((int)stk + 0)))); }
        u3 = (((struct o0_float *)0xC157A64)->v);
        *(unsigned int *)(((((int)stk + 0) + 0x14) + 0x0)) = (int)(((float)((int)((int)(nlRand()) % (int)((((struct o8_int *)0xC2A2834)->v)))) * u3) / (float)((((struct o8_int *)0xC2A2834)->v)));
        t11 = *(int *)(((((int)stk + 0) + 0x14) + 0x0));
        u14 = (((struct o18_float *)0xC157A64)->v);
        u15 = ((((struct o0_float *)0xC2A2834)->v));
        u15 = u15 + ((((struct o4_float *)0xC2A2834)->v)) * (float)((int)((int)(nlRand()) % (int)((((struct oC_int *)0xC2A2834)->v))));
        u16 = (((struct o1C_float *)0xC157A64)->v);
        t18 = math_cos_angle16(((int)(((((float)t11 * u16) / u3)) + u14) & 0xFFFF));
        (((struct o8_float *)(((int)stk + 0)))->v) = (t18 * u15);
        t21 = math_sin_angle16(((int)(((((float)(*(int *)(((((int)stk + 0) + 0x14) + 0x0))) * u16) / u3)) + u14) & 0xFFFF));
        (((struct o4_float *)((((int)stk + 0) + 0x8)))->v) = (t21 * u15);
        (((struct o8_float *)((((int)stk + 0) + 0x8)))->v) = 0.0f;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC4_int *)(t0))->v)) + 0x6C)) = *(struct mv3 *)((((int)stk + 0) + 0x8)); }
    }
}

int FUN_0c15d494(int a4, int a5, int a6, int a7, int a8, float f4)
{
    int stk[5];
    register int t0;
    register int t20;
    register float u1;
    register int t4;

    *(unsigned char *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 0)) = a5;
    *(unsigned int *)(((int)stk + 8)) = a6;
    *(unsigned int *)(((int)stk + 12)) = a7;
    *(float *)(((int)stk + 16)) = f4;
    t0 = FUN_0c03f444(0x5, 0x0, 0x2, a7);
    t20 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC15D31C;
        (((struct oAC_ushort *)(t0))->v) = 0x1F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        u1 = *(float *)(((int)stk + 16));
        (((struct o48_float *)(t0))->v) = u1;
        (((struct o44_float *)(t0))->v) = u1;
        (((struct o40_float *)(t0))->v) = u1;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)((*(int *)(((int)stk + 0)))); }
        *(unsigned char *)((t0 + 0x2)) = (*(signed char *)(((int)stk + 4)));
        t4 = 0x0;
        for (;;) {
            FUN_0c037498((*(int *)((((0xC4 + t0) + (t4 << 2)) + 0x0))), t4, (*(int *)((((*(signed char *)((t0 + 0x2))) << 2) + 0xC20373C))), (*(int *)0xC4B40CC));
            *(unsigned char *)(((*(int *)((((0xC4 + t0) + (t4 << 2)) + 0x0))) + 0x0)) = 0x1;
            *(unsigned short *)(((*(int *)((((0xC4 + t0) + (t4 << 2)) + 0x0))) + 0x6)) = 0xF;
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((*(int *)((((0xC4 + t0) + (t4 << 2)) + 0x0))) + 0x6C)) = *(struct mv3 *)(((((t4 << 1) + t4) << 2) + 0xC203744)); }
            t4 = (t4 + 0x1);
            if ((int)t4 >= (int)0x2) {
                break;
            }
        }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC4_int *)(t0))->v)) + 0x78)) = *(struct mv3 *)((*(int *)(((int)stk + 8)))); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC8_int *)(t0))->v)) + 0x78)) = *(struct mv3 *)((*(int *)(((int)stk + 12)))); }
        *(unsigned short *)((t0 + 0x1C)) = a8;
        t20 = a8;
    }
    return t20;
}

int FUN_0c13b6a8(int a4, int a5, int a6, int a7)
{
    int stk[3];

    register int R1;
    register int R2;
    register int R3;
    register float F3;
    register float F15;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    v0_0 = a4;
    v0_2 = a5;
    v0_3 = a6;
    v0_4 = a7;
    v0_5 = *(signed char *)((v0_0 + 0x14));
    v0_1 = (v0_5);
    v0_0 = (v0_0);
    if ((v0_5 == 0)) goto L_C13B6C2;
    if ((v0_1 == 1)) goto L_C13B6DA;
    v0_1 = ((FUN_0c03f346(v0_0, v0_2, v0_3, v0_4)));
    L_C13B798:;
    return v0_1;
    L_C13B6DA:;
    if (((*(short *)((v0_0 + 0x1C))) != 0)) goto L_C13B708;
    v0_2 = *(short *)((v0_0 + 0x1C));
    v0_1 = (v0_2);
    if (((int)v0_2 < 0)) goto L_C13B6EA;
    v0_1 = ((v0_1 & 0x3));
    L_C13B6F4:;
    if ((v0_1 != 0)) goto L_C13B708;
    FUN_0c13b35e((*(signed char *)((v0_0 + 0x1))), (v0_0 + 0x28), (v0_0 + 0x34), 0x2);
    L_C13B708:;
    if (((*(short *)((v0_0 + 0x1C))) != 4)) goto L_C13B77A;
    v0_1 = *(int *)((((short)(*(signed char *)((v0_0 + 0x1))) * (short)0x3938) + 0xC532560));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)(0xC2A1FD4); }
    *(float *)(((int)stk + 0)) = ((*(float *)(((int)stk + 0))) * 3.0f);
    FUN_0c0582de(((int)stk + 0), (v0_1 + 0x28), *(Stk3 *)(((int)stk + 0)));
    FUN_0c13b08c((*(signed char *)((v0_0 + 0x1))), ((int)stk + 0), (v0_0 + 0x34), (*(signed char *)((v0_0 + 0x2))));
    v0_1 = *(int *)((((short)(*(signed char *)((v0_0 + 0x1))) * (short)0x3938) + 0xC532560));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)(0xC2A1FE0); }
    *(float *)(((int)stk + 0)) = ((*(float *)(((int)stk + 0))) * 3.0f);
    FUN_0c0582de(((int)stk + 0), (v0_1 + 0x28), *(Stk3 *)(((int)stk + 0)));
    FUN_0c13b08c((*(signed char *)((v0_0 + 0x1))), ((int)stk + 0), (v0_0 + 0x34), (*(signed char *)((v0_0 + 0x2))));
    L_C13B77A:;
    v0_2 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_2 + 0x1);
    v0_1 = ((short)(v0_2 + 0x1));
    if (((int)(short)(v0_2 + 0x1) <= (int)0x14)) goto L_C13B798;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    v0_1 = (0x14);
    goto L_C13B798;
    L_C13B6EA:;
    v0_1 = (((~(((~v0_1) + 0x1) & 0x3)) + 0x1));
    goto L_C13B6F4;
    L_C13B6C2:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    FUN_0c13b632((*(signed char *)((v0_0 + 0x1))), (v0_0 + 0x28), (v0_0 + 0x34), 0x2);
    goto L_C13B6DA;
}

int FUN_0c148f08(int a4, int a5, int a6, float f4, float f5)
{
    int stk[6];
    register int t1;
    register int t2;
    register int t5;
    register float u7;
    register float u8;
    register int t0;
    register float u6;
    register float u9;
    float u13;

    t1 = a5;
    t2 = a6;
    t5 = 0x0;
    u7 = f4;
    u8 = f5;
    for (;;) {
        if ((int)t5 >= (int)0x4) {
            return 0x0;
        }
        if (t5 != (*(signed char *)((a4 + 0x1)))) {
            t1 = 0x3938;
            t2 = 0xC532498;
            t0 = (*(signed char *)((((t5 * t1) + t2) + 0x3714)));
            if ((t0 != 0) && (u13 = (((struct o160_float *)(((t5 * t1) + t2)))->v), u13 > 0.0f)) {
                t0 = 0xC187798;
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)((((t5 * t1) + t2) + 0x28)); }
                t1 = ((int)stk + 0);
                u9 = 0.0f;
                t1 = (t1 + 0xC);
                *(float *)(((int)stk + 4)) = u9;
                math_mat_get_translate((a4 + 0x64), t1);
                t2 = ((int)stk + 0);
                t1 = ((int)stk + 0);
                *(float *)(((int)stk + 16)) = u9;
                t2 = (t2 + 0xC);
                nlSubVector3op((((int)stk + 0) + 0xC), t1, t2);
                u6 = (FUN_0c17c450((((int)stk + 0) + 0xC)));
                u7 = u6;
                u8 = ((((struct o0_float *)0xC149030)->v));
                if (!(u8 > u7)) {
                    u8 = ((((struct o4_float *)0xC149030)->v));
                    if (u8 > u7) {
                        *(float *)(((int)stk + 4)) = u9;
                        t1 = a4;
                        u7 = 1.0f;
                        t1 = (t1 + 0x64);
                        *(float *)(((int)stk + 0)) = u9;
                        *(float *)(((int)stk + 8)) = u7;
                        math_mat_transform_vector(((int)stk + 0), t1);
                        *(float *)(((int)stk + 4)) = u9;
                        u6 = (FUN_0c17c450(((int)stk + 0)));
                        u9 = ((((struct o10_float *)0xC149030)->v));
                        t1 = ((int)stk + 0);
                        u6 = (nlInnerProduct((((int)stk + 0) + 0xC), t1));
                        if (!(u9 > u6)) {
                            break;
                        }
                        t5 = (t5 + 0x1);
                        continue;
                    }
                    t5 = (t5 + 0x1);
                    continue;
                }
                break;
            }
            t5 = (t5 + 0x1);
            continue;
        }
        t5 = (t5 + 0x1);
    }
    *(unsigned short *)((a4 + 0x1E)) = t5;
    return 0x1;
}

int FUN_0c164d20(int a4, int a5, int a6, int a7)
{
    int stk[10];
    register int t0;
    register int t24;
    register int t3;
    register int t4;
    register int t6;
    register int t7;
    register float t11;
    register float u14;
    register float u21;

    *(unsigned char *)(((int)stk + 20)) = a4;
    *(unsigned int *)(((int)stk + 16)) = a5;
    t0 = FUN_0c03f444(0x1, 0x0, 0x2, a7);
    t24 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((int)stk + 20)));
        *(unsigned int *)((t0 + 0x4)) = 0xC164A28;
        *(unsigned char *)((t0 + 0x2)) = 0x0;
        *(unsigned short *)((t0 + 0x1C)) = 0x0;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)((*(int *)(((int)stk + 16)))); }
        *(unsigned int *)(((int)stk + 16)) = (((int)stk + 16) + 0xC);
        t3 = nlRand();
        t4 = ((~(((~t3) + 0x1) & 0xF)) + 0x1);
        if ((int)t3 >= 0) {
            t4 = (t3 & 0xF);
        }
        *(unsigned int *)(((((int)stk + 16) + 0xC) + 0x0)) = (((t4 << 8) << 2) << 2);
        *(unsigned int *)(((int)stk + 20)) = (((int)stk + 16) + 0x10);
        t6 = nlRand();
        t7 = ((~(((~t6) + 0x1) & 0xF)) + 0x1);
        if ((int)t6 >= 0) {
            t7 = (t6 & 0xF);
        }
        *(unsigned int *)(((((int)stk + 16) + 0x10) + 0x0)) = (((t7 << 8) << 2) << 2);
        *(int *)((int)stk + 12) = (t0 + 0x28);
        t11 = math_cos_angle16((*(int *)(((*(int *)(((int)stk + 16))) + 0x0))));
        *(unsigned int *)(((int)stk + 24)) = 0xC2A32F4;
        u14 = ((((struct o28_float *)(t0))->v));
        u14 = u14 + (*(float *)0xC2A32F4) * t11;
        (((struct o28_float *)(t0))->v) = u14;
        *(int *)((int)stk + 12) = (t0 + 0x2C);
        u21 = ((((struct o2C_float *)(t0))->v));
        u21 = u21 + (*(float *)(((*(int *)(((int)stk + 24))) + 0x0))) * (math_sin_angle16((*(int *)(((*(int *)(((int)stk + 20))) + 0x0)))));
        (((struct o2C_float *)(t0))->v) = u21;
        FUN_0c07e3ae(t0, 0x74);
        *(int *)((int)stk + 12) = 0x0;
        *(int *)((int)stk + 8) = 0x0;
        *(int *)((int)stk + 4) = 0xFFFFFFFF;
        *(int *)((int)stk + 0) = 0x100;
        t24 = (FUN_0c064d24(t0, 0x3, 0x6, 0x0, 0x100, 0xFFFFFFFF, 0x0, 0x0));
    }
    return t24;
}

int FUN_0c16be0a(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    t0 = (~((int)0x1 << (int)a4));
    if ((int)a4 < 0) {
        t0 = 0xF;
    }
    if (a7 != 0) {
        t1 = FUN_0c03f444(0x1, 0x0, 0x1, a7);
        t2 = 0x0;
        if (t1 != 0) {
            FUN_0c07e3ae(t1, 0x9C);
            FUN_0c064d24(t1, 0x3, 0x4F, 0x0, 0x100, (t0), 0x0, 0xFFFFFEF0);
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x28)) = *(struct mv3 *)(a5); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x34)) = *(struct mv3 *)(a6); }
            u0 = *(float *)0xC16BF34;
            (((struct o4C_float *)(t1))->v) = (u0 * (math_sin_angle16((*(int *)((a6 + 0x4))))));
            (((struct o54_float *)(t1))->v) = (u0 * (math_cos_angle16((*(int *)((a6 + 0x4))))));
            (((struct o50_float *)(t1))->v) = 0.0f;
            (((struct o5C_float *)(t1))->v) = 0.0f;
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x40)) = *(struct mv3 *)(0xC2A393C); }
            t2 = t1;
        }
        t0 = t2;
    } else {
        t1 = FUN_0c03f444(0x5, 0x0, 0x2, a7);
        t2 = 0x0;
        if (t1 != 0) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x28)) = *(struct mv3 *)(a5); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x34)) = *(struct mv3 *)(a6); }
            u0 = *(float *)0xC16BF34;
            (((struct o4C_float *)(t1))->v) = (u0 * (math_sin_angle16((*(int *)((a6 + 0x4))))));
            (((struct o54_float *)(t1))->v) = (u0 * (math_cos_angle16((*(int *)((a6 + 0x4))))));
            (((struct o50_float *)(t1))->v) = 0.0f;
            (((struct o5C_float *)(t1))->v) = 0.0f;
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x40)) = *(struct mv3 *)(0xC2A393C); }
            t2 = t1;
        }
        t0 = t2;
    }
    return t0;
}

void FUN_0c14a9d8(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t0;
    register float u1;
    register int t2;
    register int t3;
    register int t4;
    register int t10;
    register float u14;

    t0 = FUN_0c03f444(0x1, 0x0, 0x3, a7);
    if (t0 != 0) {
        u1 = (((struct o0_float *)0xC14AB30)->v);
        t2 = 0x0;
        t3 = 0xC202AD4;
        t4 = 0x0;
        for (;;) {
            t10 = *(int *)((((0xC4 + t0) + t4) + 0x0));
            FUN_0c03744a(t10, (*(signed char *)((t3 + 0x0))), (*(signed char *)((t3 + 0x1))), (*(int *)(((((*(signed char *)((a4 + 0x1))) << 2) << 1) + 0xC4B40E0))));
            t2 = (t2 + 0x1);
            (((struct o8C_float *)(t10))->v) = 0.0f;
            (((struct o88_float *)(t10))->v) = 0.0f;
            (((struct o84_float *)(t10))->v) = 0.0f;
            (((struct o20_float *)(t10))->v) = u1;
            (((struct o1C_float *)(t10))->v) = u1;
            (((struct o18_float *)(t10))->v) = u1;
            t3 = (t3 + 0x14);
            *(unsigned short *)((t10 + 0x6)) = 0x21F;
            t4 = (t4 + 0x4);
            if ((unsigned int)t2 >= (unsigned int)0x3) {
                break;
            }
        }
        *(unsigned int *)((t0 + 0x4)) = 0xC14AB60;
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        (((struct oAC_ushort *)(t0))->v) = 0x1F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        *(unsigned int *)((t0 + 0x10)) = a4;
        (((struct oA4_uint *)(t0))->v) = 0x0;
        u14 = (((struct o10_float *)0xC14AB30)->v);
        (((struct o44_float *)(t0))->v) = u14;
        (((struct o40_float *)(t0))->v) = u14;
        (((struct o48_float *)(t0))->v) = ((((struct o14_float *)0xC14AB30)->v));
        FUN_0c07e2f4(t0, 0x1);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)(0xC202AB0); }
        FUN_0c0582de(((int)stk + 0), (((((struct oE4_int *)(a4))->v)) + 0x28), *(Stk3 *)(((int)stk + 0)));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)(((int)stk + 0)); }
        *(unsigned int *)((t0 + 0x34)) = 0xFFFFC000;
    }
}

int FUN_0c1575d4(int a4, int a5, int a6, int a7)
{
    int stk[4];
    register int t1;
    register int t20;
    register int t2;
    register int t3;
    register int t13;
    register int t4;

    *(unsigned char *)(((int)stk + 4)) = a4;
    *(unsigned char *)(((int)stk + 0)) = a5;
    t1 = FUN_0c03f444(0x5, 0x0, (*(signed char *)0xC20350D), a7);
    t20 = t1;
    if (t1 != 0) {
        t2 = *(signed char *)(((int)stk + 4));
        *(unsigned int *)(((int)stk + 12)) = ((short)t2 * (short)0x3938);
        *(unsigned int *)(((int)stk + 8)) = (((short)t2 * (short)0x3938) + 0xC532498);
        t3 = 0x0;
        for (;;) {
            if ((int)t3 >= (int)((((struct oC0_int *)(t1))->v))) {
                break;
            }
            t4 = t3;
            t4 = (t4 << 2);
            t4 = (t4 + (0xC4 + t1));
            t4 = (*(int *)((t4 + 0x0)));
            FUN_0c03744a(t4, t3, 0x2, (*(int *)0xC4B40CC));
            *(unsigned short *)((t4 + 0x6)) = 0x0;
            { struct mv3 { int w[3]; }; *(struct mv3 *)((0x84 + t4)) = *(struct mv3 *)(0xC203538); }
            (((struct o68_uint *)(t4))->v) = 0x0;
            nlCopyMatrix((t4 + 0x28), ((*(int *)(((((*(signed char *)((0xC203500 + t3))) << 2) + (0xC4 + (*(int *)(((int)stk + 8))))) + 0x0))) + 0x28), 0x0, 0x0, *(int *)((int)stk + 0));
            t3 = (t3 + 0x1);
        }
        (((struct oA8_uchar *)(t1))->v) = 0x1;
        t13 = *(signed char *)(((int)stk + 0));
        (((struct oAC_ushort *)(t1))->v) = (*(short *)((((((t13 << 2) + t13) << 2) + 0xC203510) + 0x0)));
        (((struct oA9_uchar *)(t1))->v) = (*(signed char *)((((*(int *)(((int)stk + 12))) + 0xC532498) + 0xA9)));
        { struct mv4 { int w[4]; }; *(struct mv4 *)((0xB0 + t1)) = *(struct mv4 *)((((((t13 << 2) + t13) << 2) + 0xC203510) + 0x4)); }
        *(unsigned char *)((t1 + 0x1)) = (*(signed char *)(((int)stk + 4)));
        *(unsigned char *)((t1 + 0x2)) = (*(signed char *)(((int)stk + 0)));
        *(unsigned int *)((t1 + 0x4)) = 0xC1576C8;
        t20 = *(short *)((((((t13 << 2) + t13) << 2) + 0xC203510) + 0x2));
        *(unsigned short *)((t1 + 0x1C)) = t20;
    }
    return t20;
}

int FUN_0c157c34(int a4, int a5, int a6, int a7)
{
    int stk[7];
    register int t0;
    register int t22;
    register float u2;
    register int t10;
    register float u13;
    register float u14;
    register float u15;
    register float t17;
    register float t20;

    *(unsigned int *)(((int)stk + 0)) = a4;
    t0 = FUN_0c03f444(0x5, 0x0, 0x1, a7);
    t22 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC157A36;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)((*(int *)(((int)stk + 0)))); }
        u2 = (((struct o0_float *)0xC157D8C)->v);
        *(unsigned int *)(((((int)stk + 0) + 0x10) + 0x0)) = (int)(((float)((int)((int)(nlRand()) % (int)((((struct o0_int *)0xC2A28C4)->v)))) * u2) / (float)((((struct o0_int *)0xC2A28C4)->v)));
        t10 = *(int *)(((((int)stk + 0) + 0x10) + 0x0));
        u13 = (((struct o18_float *)0xC157D8C)->v);
        u14 = ((((struct o0_float *)0xC2A2868)->v));
        u14 = u14 + ((((struct o4_float *)0xC2A2868)->v)) * (float)((int)((int)(nlRand()) % (int)((((struct o4_int *)0xC2A28C4)->v))));
        u15 = (((struct o1C_float *)0xC157D8C)->v);
        t17 = math_cos_angle16(((int)(((((float)t10 * u13) / u2)) + u15) & 0xFFFF));
        *(float *)(((int)stk + 4)) = (t17 * u14);
        t20 = math_sin_angle16(((int)(((((float)(*(int *)(((((int)stk + 0) + 0x10) + 0x0))) * u13) / u2)) + u15) & 0xFFFF));
        *(float *)(((int)stk + 8)) = (t20 * u14);
        *(float *)(((int)stk + 12)) = 0.0f;
        t22 = (nlAddVector3op((t0 + 0x28), (t0 + 0x28), (((int)stk + 0) + 0x4)));
    }
    return t22;
}

int FUN_0c157f20(int a4, int a5, int a6, int a7)
{
    int stk[7];
    register int t0;
    register int t22;
    register float u2;
    register int t10;
    register float u13;
    register float u14;
    register float u15;
    register float t17;
    register float t20;

    *(unsigned int *)(((int)stk + 0)) = a4;
    t0 = FUN_0c03f444(0x5, 0x0, 0x1, a7);
    t22 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC157D28;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)((*(int *)(((int)stk + 0)))); }
        u2 = (((struct o0_float *)0xC158048)->v);
        *(unsigned int *)(((((int)stk + 0) + 0x10) + 0x0)) = (int)(((float)((int)((int)(nlRand()) % (int)((((struct o0_int *)0xC2A294C)->v)))) * u2) / (float)((((struct o0_int *)0xC2A294C)->v)));
        t10 = *(int *)(((((int)stk + 0) + 0x10) + 0x0));
        u13 = (((struct o18_float *)0xC158048)->v);
        u14 = ((((struct o0_float *)0xC2A28F0)->v));
        u14 = u14 + ((((struct o4_float *)0xC2A28F0)->v)) * (float)((int)((int)(nlRand()) % (int)((((struct o4_int *)0xC2A294C)->v))));
        u15 = (((struct o1C_float *)0xC158048)->v);
        t17 = math_cos_angle16(((int)(((((float)t10 * u13) / u2)) + u15) & 0xFFFF));
        *(float *)(((int)stk + 4)) = (t17 * u14);
        t20 = math_sin_angle16(((int)(((((float)(*(int *)(((((int)stk + 0) + 0x10) + 0x0))) * u13) / u2)) + u15) & 0xFFFF));
        *(float *)(((int)stk + 8)) = (t20 * u14);
        *(float *)(((int)stk + 12)) = 0.0f;
        t22 = (nlAddVector3op((t0 + 0x28), (t0 + 0x28), (((int)stk + 0) + 0x4)));
    }
    return t22;
}

int FUN_0c0d7d0c(int a4, int a5, int a6, int a7)
{
    register int t0;
    int t1;
    register int t2;

    t2 = *(signed char *)((a4 + 0x14));
    if (t2 != 0) {
        if (t2 != 1) {
            if (t2 != 2) {
                t2 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t2 - 1);
                if ((short)(t2 - 1) == 0) {
                    return FUN_0c03f346(a4, 0x1, a6, a7);
                }
                return (short)(t2 - 1);
            }
            if (((int)(*(signed char *)0xC54223C) > 0) && ((t0 = *(signed char *)((a4 + 0x2)), (int)t0 >= 0) && (t1 = *(signed char *)((a4 + 0x2)), (int)t1 < (int)0x2))) {
                *(unsigned short *)((a4 + 0x1C)) = 0x384;
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            }
            t0 = 0x44;
            if ((int)(*(signed char *)0xC54223C) > (int)0x1) {
                t1 = *(signed char *)((a4 + 0x2));
                t2 = t1;
                if ((int)t1 >= (int)0x2) {
                    t1 = *(signed char *)((a4 + 0x2));
                    t2 = t1;
                    if ((int)t1 < (int)0x8) {
                        *(unsigned short *)((a4 + 0x1C)) = 0x1;
                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                        t2 = 0x14;
                    }
                }
                t0 = t2;
            }
            return t0;
        }
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        t1 = (short)(t0 - 1);
        if ((short)(t0 - 1) == 0) {
            (((struct oA8_uchar *)(a4))->v) = 0x1;
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t1 = 0x14;
        }
        return t1;
    }
    t0 = *(signed char *)((a4 + 0x2));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)((0xC2875EC + (((t0 << 1) + t0) << 2))); }
    *(unsigned int *)((a4 + 0x38)) = (int)(((float)(*(int *)((0xC28764C + ((*(signed char *)((a4 + 0x2))) << 2)))) * 65536.0f) / 360.0f);
    (((struct o126_uchar *)(a4))->v) = 0x2;
    (((struct oA8_uchar *)(a4))->v) = 0x0;
    t0 = *(signed char *)((a4 + 0x2));
    t1 = 0x1;
    if (((int)t0 >= (int)0x2) && ((int)t0 < (int)0x8)) {
        t1 = 0x708;
    }
    *(unsigned short *)((a4 + 0x1C)) = t1;
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    t1 = (short)(t0 - 1);
    if ((short)(t0 - 1) == 0) {
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t1 = 0x14;
    }
    return t1;
}

int FUN_0c0d96d8(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t13;
    register float u1;
    register int t2;
    register int t4;
    register int t10;

    t0 = FUN_0c03f444(0x5, 0x0, 0x6, a7);
    t13 = t0;
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x4)) = 0xC0D97CA;
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        u1 = (((struct o0_float *)0xC0D9838)->v);
        t2 = 0x0;
        for (;;) {
            t4 = *(int *)((((t2 << 2) + (0xC4 + t0)) + 0x0));
            FUN_0c03744a(t4, 0x0, 0x22, (*(int *)0xC4B410C));
            *(unsigned char *)((t4 + 0x0)) = 0x1;
            *(unsigned short *)((t4 + 0x6)) = 0x31;
            (((struct o6C_float *)(t4))->v) = (float)((int)((int)(nlRand()) % (int)0x85));
            (((struct o70_float *)(t4))->v) = 0.0f;
            t10 = t2;
            t2 = (t2 + 0x1);
            (((struct o74_float *)(t4))->v) = ((float)((int)((int)(nlRand()) % (int)0xC8)) - (((float)t10 * u1)));
            if ((int)t2 >= (int)0x6) {
                break;
            }
        }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)((a4 + 0x28)); }
        (((struct o30_float *)(t0))->v) = ((((struct o18_float *)0xC0D9838)->v));
        *(unsigned int *)((t0 + 0x38)) = 0x0;
        *(unsigned int *)((t0 + 0x3C)) = 0x0;
        *(unsigned int *)((t0 + 0x34)) = 0x0;
        (((struct o44_float *)(t0))->v) = 1.0f;
        (((struct o48_float *)(t0))->v) = 1.0f;
        (((struct o40_float *)(t0))->v) = 1.0f;
        t13 = 0x40;
    }
    return t13;
}

int FUN_0c13ac58(int a4, int a5, int a6, int a7)
{
    int stk[3];

    register int R1;
    register int R2;
    register int R3;
    register float F3;
    register float F15;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    v0_0 = a4;
    v0_2 = a5;
    v0_3 = a6;
    v0_4 = a7;
    v0_5 = *(signed char *)((v0_0 + 0x14));
    v0_1 = (v0_5);
    v0_0 = (v0_0);
    if ((v0_5 == 0)) goto L_C13AC72;
    if ((v0_1 == 1)) goto L_C13AC8A;
    v0_1 = ((FUN_0c03f346(v0_0, v0_2, v0_3, v0_4)));
    L_C13AD40:;
    return v0_1;
    L_C13AC8A:;
    if (((*(short *)((v0_0 + 0x1C))) != 0)) goto L_C13ACB8;
    v0_2 = *(short *)((v0_0 + 0x1C));
    v0_1 = (v0_2);
    if (((int)v0_2 < 0)) goto L_C13AC9A;
    v0_1 = ((v0_1 & 0x3));
    L_C13ACA4:;
    if ((v0_1 != 0)) goto L_C13ACB8;
    FUN_0c13a90e((*(signed char *)((v0_0 + 0x1))), (v0_0 + 0x28), (v0_0 + 0x34), 0x2);
    L_C13ACB8:;
    if (((*(short *)((v0_0 + 0x1C))) != 4)) goto L_C13AD22;
    v0_1 = *(int *)((((short)(*(signed char *)((v0_0 + 0x1))) * (short)0x3938) + 0xC532560));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)(0xC2A1EAC); }
    *(float *)(((int)stk + 0)) = ((*(float *)(((int)stk + 0))) * 3.0f);
    FUN_0c0582de(((int)stk + 0), (v0_1 + 0x28), *(Stk3 *)(((int)stk + 0)));
    FUN_0c13a640((*(signed char *)((v0_0 + 0x1))), ((int)stk + 0), (v0_0 + 0x34));
    v0_1 = *(int *)((((short)(*(signed char *)((v0_0 + 0x1))) * (short)0x3938) + 0xC532560));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)(0xC2A1EB8); }
    *(float *)(((int)stk + 0)) = ((*(float *)(((int)stk + 0))) * 3.0f);
    FUN_0c0582de(((int)stk + 0), (v0_1 + 0x28), *(Stk3 *)(((int)stk + 0)));
    FUN_0c13a640((*(signed char *)((v0_0 + 0x1))), ((int)stk + 0), (v0_0 + 0x34));
    L_C13AD22:;
    v0_2 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_2 + 0x1);
    v0_1 = ((short)(v0_2 + 0x1));
    if (((int)(short)(v0_2 + 0x1) <= (int)0x14)) goto L_C13AD40;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    v0_1 = (0x14);
    goto L_C13AD40;
    L_C13AC9A:;
    v0_1 = (((~(((~v0_1) + 0x1) & 0x3)) + 0x1));
    goto L_C13ACA4;
    L_C13AC72:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    FUN_0c13abe2((*(signed char *)((v0_0 + 0x1))), (v0_0 + 0x28), (v0_0 + 0x34), 0x2);
    goto L_C13AC8A;
}

int FUN_0c13e268(int a4, int a5, int a6, int a7)
{
    int stk[5];
    register int t0;
    register int t22;
    register float u3;
    register int t11;

    *(unsigned char *)(((int)stk + 16)) = a5;
    t0 = FUN_0c03f444(0x1, 0x0, 0x1, a7);
    t22 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned int *)((t0 + 0x4)) = 0xC13E3D8;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)((a4 + 0x28)); }
        *(unsigned char *)((t0 + 0x2)) = (*(signed char *)(((int)stk + 16)));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x34)) = *(struct mv3 *)((a4 + 0x34)); }
        u3 = *(float *)0xC13E3BC;
        (((struct o48_float *)(t0))->v) = u3;
        (((struct o44_float *)(t0))->v) = u3;
        (((struct o40_float *)(t0))->v) = u3;
        (((struct oA8_uchar *)(t0))->v) = 0x0;
        (((struct oAC_ushort *)(t0))->v) = 0x231;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        (((struct oBC_float *)(t0))->v) = 1.0f;
        (((struct oB8_float *)(t0))->v) = 1.0f;
        (((struct oB4_float *)(t0))->v) = 1.0f;
        FUN_0c037498(((((struct oC4_int *)(t0))->v)), 0x0, 0x4, (*(int *)((((*(signed char *)((t0 + 0x1))) << 2) + 0xC4B40FC))));
        *(unsigned char *)((((((struct oC4_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(t0))->v)) + 0x6)) = 0xF;
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        if ((*(signed char *)(((int)stk + 16))) != 0) {
            *(int *)((int)stk + 12) = 0xF0;
            *(int *)((int)stk + 8) = 0x0;
            t11 = *(signed char *)((t0 + 0x1));
            *(int *)((int)stk + 4) = (~((int)0x1 << (int)t11));
            *(int *)((int)stk + 0) = 0x100;
            FUN_0c064d24(t0, 0x1, 0x32, 0x2, 0x100, (~((int)0x1 << (int)t11)), 0x0, 0xF0);
            FUN_0c07e2f4(t0, 0x63);
        }
        t22 = thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((t0 + 0x1))) * (short)0x3938) + 0xC53256C))) + 0x28), (t0 + 0x28));
        *(unsigned int *)((t0 + 0x10)) = a4;
    }
    return t22;
}

int FUN_0c145132(int a4)
{
    int stk[5];

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R6;
    register int R7;
    register int R11;
    register int R12;
    register float F2;
    register float F3;
    register float F5;
    register float F6;
    register float F15;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register float w0_0;
    register float w0_1;
    v0_0 = a4;
    *(unsigned int *)(((int)stk + 4)) = (*(signed char *)((v0_0 + 0x2)));
    v0_2 = *(signed char *)((v0_0 + 0x16));
    v0_1 = (v0_2);
    v0_0 = (v0_0);
    if ((v0_2 == 0)) goto L_C145164;
    if ((v0_1 == 1)) goto L_C145184;
    if ((v0_1 == 2)) goto L_C1451EA;
    L_C14521A:;
    return v0_1;
    L_C1451EA:;
    (((struct o48_float *)(v0_0))->v) = (((((struct o48_float *)(v0_0))->v)) - 0.0319999978f);
    w0_0 = (((struct o14_float *)0xC145248)->v);
    v0_1 = (0x48);
    w0_1 = (w0_0);
    FPUL_ = (0x3D03126E);
    if ((((((struct o48_float *)(v0_0))->v)) > w0_0)) goto L_C14520E;
    *(float *)((v0_0 + v0_1)) = w0_1;
    FUN_0c144984(v0_0, 0x1, 0x3C);
    L_C14520E:;
    w0_0 = (((struct o48_float *)(v0_0))->v);
    (((struct o44_float *)(v0_0))->v) = w0_0;
    (((struct o40_float *)(v0_0))->v) = w0_0;
    v0_1 = (0x40);
    goto L_C14521A;
    L_C145184:;
    v0_1 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 0)) = (((v0_1 << 1) + v0_1) << 2);
    nlSubVector3op((((int)stk + 0) + 0x8), ((*(int *)(((int)stk + 0))) + 0xC2028B4), ((((v0_1 << 1) + v0_1) << 2) + 0xC2028FC));
    w0_0 = (((struct o0_float *)0xC145248)->v);
    math_vec3_mul_xyz((((int)stk + 0) + 0x8), w0_0, w0_0, w0_0);
    nlAddVector3op((v0_0 + 0x28), (v0_0 + 0x28), (((int)stk + 0) + 0x8));
    v0_2 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_2 - 1);
    v0_1 = ((short)(v0_2 - 1));
    if (((int)(short)(v0_2 - 1) > 0)) goto L_C14521A;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_0 + 0x28)) = *(struct mv3 *)(((*(int *)(((int)stk + 0))) + 0xC2028B4)); }
    (((struct o16_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x16))) + 0x1);
    v0_1 = (0x16);
    goto L_C14521A;
    L_C145164:;
    (((struct o48_float *)(v0_0))->v) = 1.0f;
    (((struct o44_float *)(v0_0))->v) = 1.0f;
    (((struct o40_float *)(v0_0))->v) = 1.0f;
    FUN_0c144924(v0_0, 0x1);
    *(unsigned short *)((v0_0 + 0x1C)) = 0xA;
    (((struct o16_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x16))) + 0x1);
    goto L_C145184;
}

int FUN_0c11846a(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;

    if (((*(int *)0xC474B8C) == 0) && (t0 = *(signed char *)((a4 + 0x14)), t0 == 0)) {
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
            if ((int)(*(short *)((a4 + 0x1C))) <= (int)0x8) {
                FUN_0c058a6e((0xB0 + a4), 0xC291CE0, 0xC291CF0, (*(short *)((a4 + 0x1C))), 0x8, 0x0);
                t0 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
                t1 = (t0 + 0x1);
            } else {
                (((struct o14_uchar *)(a4))->v) = 0x63;
                t1 = 0x14;
            }
            return t1;
        }
        if ((int)(*(short *)((a4 + 0x1C))) <= (int)0x2) {
            FUN_0c058a6e((0xB0 + a4), 0xC291CF0, 0xC291CE0, (*(short *)((a4 + 0x1C))), 0x2, 0x0);
            t0 = ((*(short *)((a4 + 0x1C))) + 0x1);
        } else {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t0 = 0x0;
        }
        *(unsigned short *)((a4 + 0x1C)) = t0;
        return t0;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct oAC_ushort *)(a4))->v) = 0x61F;
    (((struct oA9_uchar *)(a4))->v) = 0x21;
    FUN_0c1171f0(a4);
    FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x13, 0x8, (*(int *)0xC4B410C));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC4_int *)(a4))->v)) + 0x6C)) = *(struct mv3 *)(((*(int *)(((((*(signed char *)((a4 + 0x2))) << 2) + (0xC4 + (*(int *)0xC474B8C))) + 0x0))) + 0x6C)); }
    if ((int)(*(short *)((a4 + 0x1C))) <= (int)0x2) {
        FUN_0c058a6e((0xB0 + a4), 0xC291CF0, 0xC291CE0, (*(short *)((a4 + 0x1C))), 0x2, 0x0);
        t0 = ((*(short *)((a4 + 0x1C))) + 0x1);
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t0 = 0x0;
    }
    *(unsigned short *)((a4 + 0x1C)) = t0;
    return t0;
}

void FUN_0c126618(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;
    register float u1;

    t0 = FUN_0c03f444(0x5, 0x1, 0x2, a7);
    if (t0 != 0) {
        u0 = (((struct o0_float *)0xC126750)->v);
        u1 = (((struct o4_float *)0xC126750)->v);
        t1 = 0x0;
        for (;;) {
            if ((int)t1 >= (int)((((struct oC0_int *)(t0))->v))) {
                break;
            }
            t2 = t1;
            t2 = (t2 << 2);
            t3 = t1;
            t2 = (t2 + (0xC4 + t0));
            t3 = (t3 << 2);
            t3 = (t3 << 1);
            t3 = (t3 + 0xC201B00);
            t2 = (*(int *)((t2 + 0x0)));
            FUN_0c03744a(t2, (*(int *)((t3 + 0x0))), (*(int *)((t3 + 0x4))), (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
            t3 = t1 == 0;
            t1 = (t1 + 0x1);
            if (t3) {
                t3 = 0x468;
                t3 = (t3 + a4);
                (((struct o68_uint *)(t2))->v) = (((((short)(*(signed char *)((a4 + 0x371A))) * (short)(0x10E0)) + t3) + 0x2D0) + 0x28);
            } else {
                (((struct o74_float *)(t2))->v) = u0;
                (((struct o90_float *)(t2))->v) = 0.0f;
                (((struct o94_float *)(t2))->v) = u1;
                (((struct o98_float *)(t2))->v) = 1.0f;
            }
        }
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = (*(signed char *)((a4 + 0xA9)));
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned int *)((t0 + 0x4)) = 0xC126708;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)((a4 + 0x28)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x34)) = *(struct mv3 *)((a4 + 0x34)); }
        *(unsigned int *)((t0 + 0x10)) = a4;
    }
}

int FUN_0c1689ec(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    register int t2;

    t2 = *(signed char *)((a4 + 0x14));
    if (t2 != 0) {
        if (t2 != 1) {
            if (t2 != 2) {
                return t2;
            }
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        if (((*(signed char *)((a4 + 0x131))) == 0) && (t0 = (((struct o404_int *)(a4))->v), t0 == 0)) {
            FUN_0c0588bc((a4 + 0x40), 0xC2A3798, 0xC2A378C, (*(short *)((a4 + 0x1C))), 0x3C, 0x0);
            nlAddVector3op((a4 + 0x28), (a4 + 0x28), (a4 + 0x4C));
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
            t2 = (short)(t0 + 0x1);
            if ((int)(short)(t0 + 0x1) > (int)0x3C) {
                (((struct o14_uchar *)(a4))->v) = 0x2;
                t2 = 0x14;
            }
            t0 = t2;
        } else {
            t2 = ((int (*)(int, int, int, float, float, float, float))(FUN_0c150010))((a4 + 0x28), a5, a6, 1.0f, 1.0f, 1.0f, 1.0f);
            (((struct o14_uchar *)(a4))->v) = 0x2;
            t0 = 0x14;
        }
        return t0;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct oAC_ushort *)(a4))->v) = 0x1F;
    (((struct oA9_uchar *)(a4))->v) = 0x21;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x40)) = *(struct mv3 *)(0xC2A378C); }
    (((struct o4C_float *)(a4))->v) = ((math_sin_angle16((*(int *)((a4 + 0x38))))) * 10.0f);
    (((struct o50_float *)(a4))->v) = 0.0f;
    (((struct o54_float *)(a4))->v) = ((math_cos_angle16((*(int *)((a4 + 0x38))))) * 10.0f);
    FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x0, 0x31, (*(int *)0xC4B40CC));
    if (((*(signed char *)((a4 + 0x131))) == 0) && (t1 = (((struct o404_int *)(a4))->v), t1 == 0)) {
        FUN_0c0588bc((a4 + 0x40), 0xC2A3798, 0xC2A378C, (*(short *)((a4 + 0x1C))), 0x3C, 0x0);
        nlAddVector3op((a4 + 0x28), (a4 + 0x28), (a4 + 0x4C));
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
        t1 = (short)(t0 + 0x1);
        if ((int)(short)(t0 + 0x1) > (int)0x3C) {
            (((struct o14_uchar *)(a4))->v) = 0x2;
            t1 = 0x14;
        }
        t0 = t1;
    } else {
        t1 = ((int (*)(int, float, float, float, float))(FUN_0c150010))((a4 + 0x28), 1.0f, 1.0f, 1.0f, 1.0f);
        (((struct o14_uchar *)(a4))->v) = 0x2;
        t0 = 0x14;
    }
    return t0;
}
