/* Straight-line functions with calls and guards (batch gen_cs): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o118_int { char p[0x118]; int v; };
struct o12E_short { char p[0x12E]; short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o168_float { char p[0x168]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o3739_uchar { char p[0x3739]; unsigned char v; };
struct o3746_uchar { char p[0x3746]; unsigned char v; };
struct o374B_uchar { char p[0x374B]; unsigned char v; };
struct o376C_uint { char p[0x376C]; unsigned int v; };
struct o378C_float { char p[0x378C]; float v; };
struct o3790_float { char p[0x3790]; float v; };
struct o382A_ushort { char p[0x382A]; unsigned short v; };
struct o3830_ushort { char p[0x3830]; unsigned short v; };
struct o384C_short { char p[0x384C]; short v; };
struct o3850_int { char p[0x3850]; int v; };
struct o3850_uint { char p[0x3850]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
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
struct o70_float { char p[0x70]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC_float { char p[0xC]; float v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c037bf6(int, int, int);
int FUN_0c03f444(int, int, int, int);
int FUN_0c059df2(int, int);
int FUN_0c059e60(int, int);
int FUN_0c07043c(int, float, float, float, float);
int FUN_0c073fe2(int, int);
int FUN_0c074602(int);
int FUN_0c07bdd0(int, int);
int FUN_0c07ce58(int, int);
int FUN_0c07d6cc(int);
int FUN_0c07d774(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c085d0c(int);
int FUN_0c0a3058(int, int, int, int);
int FUN_0c0c2ab6(int, int);
int FUN_0c0c2d56(int, int, int, int);
int FUN_0c1575d4(int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int FUN_0c0a6f14(int a4, int a5, int a6);
int FUN_0c0d188c(int a4, int a5, int a6, int a7);
int FUN_0c06db90(int a4, int a5, int a6);
int FUN_0c078ea4(int a4);
int FUN_0c079f48(int a4);
int FUN_0c0a71e2(int a4, int a5, int a6);
int FUN_0c07810c(int a4);
int FUN_0c076664(int a4);
int FUN_0c07896c(int a4);
int FUN_0c0a41a6(int a4, int a5, int a6);
int FUN_0c05164e(int a4, int a5, int a6, int a7);

int FUN_0c0a6f14(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;

    (((struct o374B_uchar *)(a4))->v) = 0x1;
    FUN_0c037bf6(a4, a5, a6);
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    t1 = (short)(t0 - 1);
    if ((int)(short)(t0 - 1) <= 0) {
        FUN_0c07ce58(a4, ((((short)(*(signed char *)((a4 + 0x2))) * (short)0x78) + 0xC25B194) + 0x30));
        *(unsigned int *)((a4 + 0x38)) = (FUN_0c07d774(a4));
        FUN_0c07043c(a4, ((((struct o8_float *)0xC0A7040)->v)), ((((struct o4_float *)0xC0A7040)->v)), ((((struct o0_float *)0xC0A7040)->v)), 1.0f);
        FUN_0c0a3058(a4, (*(signed char *)((a4 + 0x1))), 0x2, 0xA);
        t0 = *(int *)(((0x118 + a4) + 0x4));
        t2 = (((struct o118_int *)(a4))->v);
        (((struct oA0_float *)(t0))->v) = 1.0f;
        (((struct o9C_float *)(t0))->v) = 1.0f;
        (((struct oA0_float *)(t2))->v) = 1.0f;
        (((struct o9C_float *)(t2))->v) = 1.0f;
        t0 = *(int *)(((0x118 + a4) + 0x4));
        t2 = (((struct o118_int *)(a4))->v);
        (((struct o98_float *)(t0))->v) = 1.0f;
        (((struct o98_float *)(t2))->v) = 1.0f;
        (((struct o94_float *)(t0))->v) = 1.0f;
        (((struct o94_float *)(t2))->v) = 1.0f;
        *(unsigned short *)((a4 + 0x1C)) = 0x5;
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        t1 = 0x16;
    }
    return t1;
}

int FUN_0c0d188c(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;

    t1 = *(signed char *)((a4 + 0x1));
    if (((*(signed char *)(((((short)t1 * (short)0x3938) + 0xC532498) + 0x3721))) == (*(signed char *)((a4 + 0x41C)))) && (t0 = *(signed char *)(((((short)t1 * (short)0x3938) + 0xC532498) + 0x3715)), t0 == 18)) {
        t0 = *(signed char *)((a4 + 0x15));
        if (t0 != 0) {
            if (t0 != 1) {
            } else {
                if ((int)(*(signed char *)(((((short)t1 * (short)0x3938) + 0xC532498) + 0x15))) < (int)0x2) {
                    *(unsigned int *)((a4 + 0x38)) = (*(int *)(((((short)t1 * (short)0x3938) + 0xC532498) + 0x38)));
                }
            }
        } else {
            FUN_0c0c2d56(a4, 0x5, (*(signed char *)((a4 + 0x1))), a7);
            FUN_0c0c2ab6(a4, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738CA))));
            (((struct o12E_ushort *)(a4))->v) = (((((struct o12E_short *)(a4))->v)) & (~((int)0x1 << (int)(*(signed char *)((a4 + 0x1))))));
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        }
        (((struct o376C_uint *)((((short)t1 * (short)0x3938) + 0xC532498)))->v) = a4;
        return 0x376C;
    }
    return FUN_0c0c2d56(a4, 0x2, (*(signed char *)((a4 + 0x1))), a7);
}

int FUN_0c06db90(int a4, int a5, int a6)
{
    register int t0;
    register float u0;

    FUN_0c037bf6(a4, a5, a6);
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    if ((short)((t0 - 1) + 0x1) != 0) {
        t0 = FUN_0c07d6cc(a4);
        *(unsigned int *)((a4 + 0x38)) = t0;
        (((struct o3850_uint *)(a4))->v) = (unsigned short)(t0 + ((((struct o384C_short *)(a4))->v)));
        u0 = ((((struct o28_float *)(a4))->v));
        u0 = u0 + ((((struct o3790_float *)(a4))->v)) * (math_sin_angle16(((((struct o3850_int *)(a4))->v))));
        (((struct o28_float *)(a4))->v) = u0;
        u0 = ((((struct o30_float *)(a4))->v));
        u0 = u0 + ((((struct o3790_float *)(a4))->v)) * (math_cos_angle16(((((struct o3850_int *)(a4))->v))));
        (((struct o30_float *)(a4))->v) = u0;
        if (((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v)) == 1.0f) {
            return FUN_0c1575d4((*(signed char *)((a4 + 0x1))), 0x0);
        }
        return 0x8C;
    }
    return FUN_0c085d0c(a4);
}

int FUN_0c078ea4(int a4)
{
    register int t0;
    register int t1;

    FUN_0c07e79c(a4, 0xFFFFFFFF, 0x4, 0x57, 0xFFFFFFFF, 0x4, 0x57);
    t0 = *(int *)(((0x118 + a4) + 0x4));
    t1 = (((struct o118_int *)(a4))->v);
    (((struct oA0_float *)(t0))->v) = 1.0f;
    (((struct o9C_float *)(t0))->v) = 1.0f;
    (((struct oA0_float *)(t1))->v) = 1.0f;
    (((struct o9C_float *)(t1))->v) = 1.0f;
    t0 = *(int *)(((0x118 + a4) + 0x4));
    t1 = (((struct o118_int *)(a4))->v);
    (((struct o98_float *)(t0))->v) = 1.0f;
    (((struct o98_float *)(t1))->v) = 1.0f;
    (((struct o94_float *)(t0))->v) = 1.0f;
    (((struct o94_float *)(t1))->v) = 1.0f;
    FUN_0c059e60(a4, 0x3F);
    (((struct o5C_float *)(a4))->v) = 0.0f;
    (((struct o60_float *)(a4))->v) = 0.0f;
    (((struct o58_float *)(a4))->v) = 0.0f;
    (((struct o50_float *)(a4))->v) = 0.0f;
    (((struct o54_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    *(unsigned short *)((a4 + 0x1C)) = 0x78;
    (((struct o3746_uchar *)(a4))->v) = 0x19;
    (((struct o382A_ushort *)(a4))->v) = 0x82;
    FUN_0c07bdd0(a4, 0xC);
    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
    return 0x16;
}

int FUN_0c079f48(int a4)
{
    register int t0;
    register float u11;

    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    if ((int)(short)(t0 - 1) <= 0) {
        (((struct o382A_ushort *)(a4))->v) = 0x0;
        (((struct o3739_uchar *)(a4))->v) = 0x0;
        return FUN_0c073fe2((((short)(*(signed char *)((a4 + 0x373F))) * (short)0x3938) + 0xC532498), (*(signed char *)((a4 + 0x1))));
    }
    if (0.0f > ((((struct o50_float *)(a4))->v))) {
        if (((((struct o168_float *)(a4))->v)) > (((((struct o2C_float *)(a4))->v)) - ((((((struct o378C_float *)(a4))->v)) * 30.0f)))) {
            u11 = ((((struct o168_float *)(a4))->v));
            u11 = u11 + 30.0f * ((((struct o378C_float *)(a4))->v));
            (((struct o2C_float *)(a4))->v) = u11;
            (((struct o50_float *)(a4))->v) = 0.0f;
            return 0x50;
        }
    }
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    return math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
}

int FUN_0c0a71e2(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;

    (((struct o374B_uchar *)(a4))->v) = 0x1;
    t0 = FUN_0c037bf6(a4, a5, a6);
    t1 = (unsigned char)t0;
    if ((unsigned char)t0 != 0) {
        FUN_0c0a3058(a4, (*(signed char *)((a4 + 0x1))), 0x2, 0x17);
        t0 = *(int *)(((0x118 + a4) + 0x4));
        t2 = (((struct o118_int *)(a4))->v);
        (((struct oA0_float *)(t0))->v) = 1.0f;
        (((struct o9C_float *)(t0))->v) = 1.0f;
        (((struct oA0_float *)(t2))->v) = 1.0f;
        (((struct o9C_float *)(t2))->v) = 1.0f;
        t0 = *(int *)(((0x118 + a4) + 0x4));
        t2 = (((struct o118_int *)(a4))->v);
        (((struct o98_float *)(t0))->v) = 1.0f;
        (((struct o98_float *)(t2))->v) = 1.0f;
        (((struct o94_float *)(t0))->v) = 1.0f;
        (((struct o94_float *)(t2))->v) = 1.0f;
        FUN_0c07ce58(a4, ((((short)(*(signed char *)((a4 + 0x2))) * (short)0x78) + 0xC25B194) + 0x30));
        *(unsigned int *)((a4 + 0x38)) = (FUN_0c07d774(a4));
        FUN_0c07043c(a4, ((((struct o8_float *)0xC0A7338)->v)), ((((struct o4_float *)0xC0A7338)->v)), ((((struct o0_float *)0xC0A7338)->v)), 1.0f);
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t1 = 0x15;
    }
    return t1;
}

int FUN_0c07810c(int a4)
{
    register int t0;
    register int t1;

    FUN_0c07e79c(a4, 0xFFFFFFFF, 0x5, 0x21, 0xFFFFFFFF, 0x5, 0x21);
    t0 = *(int *)(((0x118 + a4) + 0x4));
    t1 = (((struct o118_int *)(a4))->v);
    (((struct oA0_float *)(t0))->v) = 1.0f;
    (((struct o9C_float *)(t0))->v) = 1.0f;
    (((struct oA0_float *)(t1))->v) = 1.0f;
    (((struct o9C_float *)(t1))->v) = 1.0f;
    t0 = *(int *)(((0x118 + a4) + 0x4));
    t1 = (((struct o118_int *)(a4))->v);
    (((struct o98_float *)(t0))->v) = 1.0f;
    (((struct o98_float *)(t1))->v) = 1.0f;
    (((struct o94_float *)(t0))->v) = 1.0f;
    (((struct o94_float *)(t1))->v) = 1.0f;
    *(unsigned short *)((a4 + 0x1C)) = 0xB4;
    *(unsigned short *)((a4 + 0x1E)) = 0x0;
    (((struct o50_float *)(a4))->v) = (*(float *)0xC0781C8);
    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 15.0f);
    FUN_0c059e60(a4, 0x3F);
    FUN_0c059df2((*(signed char *)((a4 + 0x1))), 0x29);
    (((struct o3746_uchar *)(a4))->v) = 0x14;
    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
    return 0x16;
}

int FUN_0c076664(int a4)
{
    register int t0;
    register int t1;

    FUN_0c074602(a4);
    (((struct o50_float *)(a4))->v) = 16.0f;
    (((struct o5C_float *)(a4))->v) = -1.0f;
    t0 = 0x4F;
    if ((*(signed char *)((a4 + 0x372C))) == 0) {
        t1 = 0x42;
        t0 = 0x42;
    } else {
        t1 = 0x4F;
    }
    FUN_0c07e79c(a4, 0xFFFFFFFF, 0x4, t0, 0xFFFFFFFF, 0x4, t1);
    t0 = *(int *)(((0x118 + a4) + 0x4));
    t1 = (((struct o118_int *)(a4))->v);
    (((struct oA0_float *)(t0))->v) = 1.0f;
    (((struct o9C_float *)(t0))->v) = 1.0f;
    (((struct oA0_float *)(t1))->v) = 1.0f;
    (((struct o9C_float *)(t1))->v) = 1.0f;
    t0 = *(int *)(((0x118 + a4) + 0x4));
    t1 = (((struct o118_int *)(a4))->v);
    (((struct o98_float *)(t0))->v) = 1.0f;
    (((struct o98_float *)(t1))->v) = 1.0f;
    (((struct o94_float *)(t0))->v) = 1.0f;
    (((struct o94_float *)(t1))->v) = 1.0f;
    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
    return 0x16;
}

int FUN_0c07896c(int a4)
{
    register int t0;
    register int t1;

    FUN_0c07e79c(a4, 0xFFFFFFFF, 0x4, 0x50, 0xFFFFFFFF, 0x4, 0x50);
    t0 = *(int *)(((0x118 + a4) + 0x4));
    t1 = (((struct o118_int *)(a4))->v);
    (((struct oA0_float *)(t0))->v) = 1.0f;
    (((struct o9C_float *)(t0))->v) = 1.0f;
    (((struct oA0_float *)(t1))->v) = 1.0f;
    (((struct o9C_float *)(t1))->v) = 1.0f;
    t0 = *(int *)(((0x118 + a4) + 0x4));
    t1 = (((struct o118_int *)(a4))->v);
    (((struct o98_float *)(t0))->v) = 1.0f;
    (((struct o98_float *)(t1))->v) = 1.0f;
    (((struct o94_float *)(t0))->v) = 1.0f;
    (((struct o94_float *)(t1))->v) = 1.0f;
    *(unsigned short *)((a4 + 0x1C)) = 0x0;
    (((struct o5C_float *)(a4))->v) = 0.0f;
    (((struct o60_float *)(a4))->v) = 0.0f;
    (((struct o58_float *)(a4))->v) = 0.0f;
    (((struct o50_float *)(a4))->v) = 0.0f;
    (((struct o54_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    (((struct o3830_ushort *)(a4))->v) = (((((struct o12E_short *)(a4))->v)) ^ 0x800);
    (((struct o374B_uchar *)(a4))->v) = 0x1;
    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
    return 0x16;
}

int FUN_0c0a41a6(int a4, int a5, int a6)
{
    register int t0;
    register int t1;

    t0 = FUN_0c037bf6(a4, a5, a6);
    if ((unsigned char)t0 != 0) {
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        (((struct o50_float *)(a4))->v) = -25.0f;
        (((struct o5C_float *)(a4))->v) = -1.5f;
        FUN_0c0a3058(a4, (*(signed char *)((a4 + 0x1))), 0x2, 0x12);
        t0 = *(int *)(((0x118 + a4) + 0x4));
        t1 = (((struct o118_int *)(a4))->v);
        (((struct oA0_float *)(t0))->v) = 1.0f;
        (((struct o9C_float *)(t0))->v) = 1.0f;
        (((struct oA0_float *)(t1))->v) = 1.0f;
        (((struct o9C_float *)(t1))->v) = 1.0f;
        t0 = *(int *)(((0x118 + a4) + 0x4));
        t1 = (((struct o118_int *)(a4))->v);
        (((struct o98_float *)(t0))->v) = 1.0f;
        (((struct o98_float *)(t1))->v) = 1.0f;
        (((struct o94_float *)(t0))->v) = 1.0f;
        (((struct o94_float *)(t1))->v) = 1.0f;
        return 0x94;
    }
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    return math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
}

int FUN_0c05164e(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    t0 = FUN_0c03f444(0x8, 0x0, 0x1, a7);
    t1 = t0;
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x4)) = 0xC051538;
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        u0 = (((struct o0_float *)0xC051780)->v);
        (((struct o28_float *)(t0))->v) = (((((struct o28_float *)(t0))->v)) / u0);
        (((struct o2C_float *)(t0))->v) = (((((struct o2C_float *)(t0))->v)) / u0);
        (((struct o30_float *)(t0))->v) = ((((struct o4_float *)0xC051780)->v));
        u0 = (((struct o8_float *)0xC051780)->v);
        (((struct o44_float *)(t0))->v) = u0;
        (((struct o40_float *)(t0))->v) = u0;
        (((struct o48_float *)(t0))->v) = ((((struct oC_float *)0xC051780)->v));
        (((struct oAC_ushort *)(t0))->v) = 0x1F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        t2 = (((struct oC4_int *)(t0))->v);
        FUN_0c03744a(t2, 0x0, (*(signed char *)0xC241464), (*(int *)0xC4B410C));
        *(unsigned char *)((t2 + 0x0)) = 0x0;
        *(unsigned short *)((t2 + 0x6)) = 0x1F;
        (((struct o6C_float *)(t2))->v) = ((((struct o1C_float *)0xC051780)->v));
        (((struct o70_float *)(t2))->v) = ((((struct o20_float *)0xC051780)->v));
        t1 = 0x70;
    }
    return t1;
}
