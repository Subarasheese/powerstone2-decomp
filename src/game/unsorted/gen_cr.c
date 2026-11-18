/* Straight-line functions with calls and guards (batch gen_cr): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o118_int { char p[0x118]; int v; };
struct o11C_int { char p[0x11C]; int v; };
struct o126_uchar { char p[0x126]; unsigned char v; };
struct o12E_short { char p[0x12E]; short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o130_uchar { char p[0x130]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o19_uchar { char p[0x19]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o30_float { char p[0x30]; float v; };
struct o372C_uchar { char p[0x372C]; unsigned char v; };
struct o3746_uchar { char p[0x3746]; unsigned char v; };
struct o3749_uchar { char p[0x3749]; unsigned char v; };
struct o378C_float { char p[0x378C]; float v; };
struct o3790_float { char p[0x3790]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o404_int { char p[0x404]; int v; };
struct o418_int { char p[0x418]; int v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAA_uchar { char p[0xAA]; unsigned char v; };
struct oAB_uchar { char p[0xAB]; unsigned char v; };
int FUN_0c037bf6(int, int, int);
int FUN_0c05253c(int, int, int, int, int, int);
int FUN_0c05261c(int);
int FUN_0c059e60(int, int);
int FUN_0c059e9a(int, int, int);
int FUN_0c05aab6(int, int);
int FUN_0c05aae4(int, int);
int FUN_0c05cdc0(int, int, int);
int FUN_0c05d144(void);
int FUN_0c05d16a(void);
int FUN_0c078558(int);
int FUN_0c07a6aa(int);
int FUN_0c07d1fc(int);
int FUN_0c07db58(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c0847dc(int);
int FUN_0c085cac(int, int, int);
int FUN_0c0b21ac(int, int);
int FUN_0c0c2ab6(int, int);
int FUN_0c0c2ce4(int);
extern int FUN_0c0c2d56();
int FUN_0c0c5a88(int);
int FUN_0c149560(int, int);
int FUN_0c1495c0(int, int, int);
int FUN_0c15fa88(int);
int FUN_0c1632e0(int, int, int, float);
int FUN_0c17c450(int);
float math_cos_angle16(int);
int math_mat_get_translate(int, int);
float math_signed_sqrt(float);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int FUN_0c06b1de(int a4, float f4);
int FUN_0c0c8606(int a4, int a5, int a6, int a7);
int FUN_0c098f18(int a4, int a5, int a6);
int FUN_0c0769f8(int a4);
int FUN_0c0d4984(int a4, int a5, int a6, int a7);
int FUN_0c078674(int a4);
int FUN_0c079cc0(int a4);
int FUN_0c05c662(int a4, int a5, int a6);
int FUN_0c149c00(int a4);
int FUN_0c079ea8(int a4);
int FUN_0c07cad0(int a4, int a5);

int FUN_0c06b1de(int a4, float f4)
{
    register int t0;
    register float u0;

    (((struct o3790_float *)(a4))->v) = (((((struct o3790_float *)(a4))->v)) - ((((((struct o3790_float *)(a4))->v)) + -5.0f) / (float)(*(short *)((a4 + 0x1E)))));
    t0 = *(short *)((a4 + 0x1E));
    *(unsigned short *)((a4 + 0x1E)) = (t0 - 1);
    if ((short)(t0 - 1) == 0) {
        (((struct o3790_float *)(a4))->v) = 0.0f;
        (((struct o15_uchar *)(a4))->v) = 0x1;
        return 0x15;
    }
    if ((*(short *)((a4 + 0x1E))) == 10) {
        FUN_0c0847dc(a4);
        u0 = *(float *)0xC06B348;
        t0 = (((struct o118_int *)(a4))->v);
        (((struct o98_float *)(t0))->v) = u0;
        (((struct o94_float *)(t0))->v) = u0;
        t0 = (((struct o11C_int *)(a4))->v);
        (((struct o98_float *)(t0))->v) = u0;
        (((struct o94_float *)(t0))->v) = u0;
    }
    (((struct o3749_uchar *)(a4))->v) = 0x0;
    (((struct o4C_float *)(a4))->v) = ((math_sin_angle16((*(int *)((a4 + 0x38))))) * ((((struct o3790_float *)(a4))->v)));
    (((struct o54_float *)(a4))->v) = ((math_cos_angle16((*(int *)((a4 + 0x38))))) * ((((struct o3790_float *)(a4))->v)));
    return 0x54;
}

int FUN_0c0c8606(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = FUN_0c07d1fc(a4);
    if (t0 != 0) {
        *(unsigned char *)((a4 + 0x1)) = (t0 - 1);
        return (FUN_0c0c2d56(a4, 0x9, (*(signed char *)((a4 + 0x1)))));
    }
    if (((((struct o404_int *)(a4))->v)) != 0) {
        t0 = FUN_0c0c2ce4(a4);
        if (t0 == 2) {
            t0 = 0x3;
            t1 = (*(signed char *)((a4 + 0x1)));
        } else {
            FUN_0c1632e0(0xFFFFFFFF, (a4 + 0x28), 0x3, (*(float *)0xC0C8728));
            FUN_0c05aae4(0xD1, (a4 + 0x28));
            t0 = 0xB;
            t1 = (*(signed char *)((a4 + 0x1)));
        }
        return (FUN_0c0c2d56(a4, t0, t1));
    }
    *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) + 0x38E);
    return FUN_0c0c5a88(a4);
}

int FUN_0c098f18(int a4, int a5, int a6)
{
    register int t0;
    register int t1;

    FUN_0c037bf6(a4, a5, a6);
    if (!(((((struct o50_float *)(a4))->v)) > 0.0f)) {
        t0 = FUN_0c07ecc6(a4, 0x0, 0x0);
        if (t0 != 0) {
            FUN_0c07db58(a4);
            FUN_0c05261c((*(int *)0xC241C20));
            t0 = *(signed char *)((a4 + 0x1));
            FUN_0c07e79c(a4, t0, 0x2, 0xC, (t0), 0x2, 0xC);
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
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            return 0x15;
        }
    }
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    return math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
}

int FUN_0c0769f8(int a4)
{
    register int t0;
    register int t1;
    register float u0;

    FUN_0c05253c(0x3, 0x1, 0x14, 0xA, 0x14, 0x0);
    FUN_0c07e79c(a4, 0xFFFFFFFF, 0x4, 0x35, 0xFFFFFFFF, 0x4, 0x35);
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
    FUN_0c037bf6(a4, t1, t0);
    FUN_0c059e60(a4, 0x3F);
    (((struct o372C_uchar *)(a4))->v) = 0x0;
    (((struct o22_ushort *)(a4))->v) = 0x3C;
    u0 = (((struct o0_float *)0xC076AE0)->v);
    (((struct o40_float *)(a4))->v) = (((((struct o378C_float *)(a4))->v)) * u0);
    (((struct o44_float *)(a4))->v) = (((((struct o378C_float *)(a4))->v)) * ((((struct o4_float *)0xC076AE0)->v)));
    (((struct o48_float *)(a4))->v) = (((((struct o378C_float *)(a4))->v)) * u0);
    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
    return 0x16;
}

int FUN_0c0d4984(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
    } else {
        t0 = ((int (*)(int, int, int, int))(FUN_0c0c2d56))(a4, 0x2, (*(signed char *)((a4 + 0x1))), a7);
        (((struct oAA_uchar *)(a4))->v) = 0x1;
        (((struct oAB_uchar *)(a4))->v) = 0x5;
        FUN_0c0c2ab6(a4, 0x38);
        (((struct o12E_ushort *)(a4))->v) = (((((struct o12E_short *)(a4))->v)) | 0xFF);
        (((struct o126_uchar *)(a4))->v) = 0x3;
        (((struct o19_uchar *)(a4))->v) = 0x0;
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    }
    t0 = FUN_0c0c2ce4(a4);
    if (t0 != 0) {
        (((struct o50_float *)(a4))->v) = 0.0f;
        (((struct o5C_float *)(a4))->v) = (*(float *)0xC0D4AC4);
    }
    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
    (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
    if (!(((((struct o2C_float *)(a4))->v)) > (*(float *)0xC541098))) {
        t0 = *(signed char *)((a4 + 0x1));
        return ((int (*)(int, int, int))(FUN_0c0c2d56))(a4, 0x0, t0);
    }
    return 0x2C;
}

int FUN_0c078674(int a4)
{
    register int t0;

    if (0.0f > ((((struct o50_float *)(a4))->v))) {
        t0 = FUN_0c07ecc6(a4, 0x0, 0x0);
        if (t0 != 0) {
            if (t0 == 2) {
                return FUN_0c07a6aa(a4);
            }
            (((struct o50_float *)(a4))->v) = 0.0f;
        }
    }
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    if ((int)(short)(t0 - 1) <= 0) {
        FUN_0c078558(a4);
        return FUN_0c085cac(a4, 0x10, 0x0);
    }
    return (short)(t0 - 1);
}

int FUN_0c079cc0(int a4)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x373B));
    *(unsigned short *)((a4 + 0x1C)) = (*(signed char *)(((0xC1C5C48 + ((t0 << 1) + (t0 << 2))) + ((unsigned char)(*(signed char *)((((((struct o418_int *)(a4))->v)) + 0x8))) - 1))));
    t0 = *(short *)((a4 + 0x1C));
    FUN_0c07e79c(a4, 0xFFFFFFFF, 0x4, t0, 0xFFFFFFFF, 0x4, (t0));
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
    FUN_0c037bf6(a4, t1, t0);
    *(unsigned short *)((a4 + 0x1C)) = 0x3C;
    (((struct o5C_float *)(a4))->v) = 0.0f;
    (((struct o60_float *)(a4))->v) = 0.0f;
    (((struct o58_float *)(a4))->v) = 0.0f;
    (((struct o50_float *)(a4))->v) = 0.0f;
    (((struct o54_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    (((struct o3746_uchar *)(a4))->v) = 0x19;
    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
    return 0x16;
}

int FUN_0c05c662(int a4, int a5, int a6)
{
    register int t0;
    int t1;
    register int t2;
    int t3;
    register int t4;
    register int t5;

    if ((unsigned char)(*(signed char *)0xC541F41) == 99) {
        FUN_0c05cdc0(a4, a5, a6);
    } else {
        t5 = ((int (*)(void))((*(int *)((((unsigned char)(*(signed char *)0xC541F41) << 2) + 0xC25789C)))))();
    }
    t5 = *(signed char *)0xC541F41;
    if ((((unsigned char)t5 == 99) && ((t0 = *(signed char *)0xC541F42, t0 != 0) && (t1 = *(signed char *)0xC541F44, (int)(unsigned char)t1 > (int)0x1))) || ((((unsigned char)t5 == 3) && ((t2 = *(signed char *)0xC541F42, t2 != 0) && (t3 = *(signed char *)0xC541F44, (int)(unsigned char)t3 > (int)0x1))) || ((t4 = *(signed char *)0xC541F41, (unsigned char)t4 == 99) || ((unsigned char)t4 == 3)))) {
        return FUN_0c05d16a();
    }
    t0 = FUN_0c05d144();
    if (t0 != 0) {
        (((struct o0_uchar *)0xC541F41)->v) = 0x63;
        (((struct o3_uchar *)0xC541F41)->v) = 0x0;
        (((struct o2_uchar *)0xC541F41)->v) = 0x0;
        (((struct o1_uchar *)0xC541F41)->v) = 0x0;
        return FUN_0c05aab6(0x0, 0x0);
    }
    return t0;
}

int FUN_0c149c00(int a4)
{
    int stk[3];
    register int t0;
    register int t4;
    register int t23;
    register int t30;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        t30 = t0;
        if (t0 != 1) {
        } else {
            (((struct oA8_uchar *)(a4))->v) = ((((*(short *)((a4 + 0x1C))) & 0x4) >> 1) >> 1);
            t4 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t4 - 1);
            t30 = (short)(t4 - 1);
            if ((int)(short)(t4 - 1) <= 0) {
                FUN_0c0b21ac(a4, 0x7);
                (((struct o130_uchar *)(a4))->v) = 0x0;
                t30 = (FUN_0c1495c0(a4, 0x1, 0x12C));
            }
        }
    } else {
        *(unsigned short *)((a4 + 0x1C)) = 0x3C;
        FUN_0c149560(a4, 0x1);
        math_mat_get_translate((a4 + 0x64), ((int)stk + 0));
        FUN_0c059e9a((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532498), 0x3, ((int)stk + 0));
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = ((((*(short *)((a4 + 0x1C))) & 0x4) >> 1) >> 1);
        t23 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t23 - 1);
        t30 = (short)(t23 - 1);
        if ((int)(short)(t23 - 1) <= 0) {
            FUN_0c0b21ac(a4, 0x7);
            (((struct o130_uchar *)(a4))->v) = 0x0;
            t30 = (FUN_0c1495c0(a4, 0x1, 0x12C));
        }
    }
    return t30;
}

int FUN_0c079ea8(int a4)
{
    register int t0;
    register int t1;

    FUN_0c07e79c(a4, 0xFFFFFFFF, 0x4, 0x5F, 0xFFFFFFFF, 0x4, 0x5F);
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
    FUN_0c037bf6(a4, t1, t0);
    FUN_0c059e60(a4, 0x3F);
    *(unsigned short *)((a4 + 0x1C)) = 0xB4;
    *(unsigned short *)((a4 + 0x1E)) = 0x0;
    (((struct o5C_float *)(a4))->v) = 0.0f;
    (((struct o60_float *)(a4))->v) = 0.0f;
    (((struct o58_float *)(a4))->v) = 0.0f;
    (((struct o50_float *)(a4))->v) = 0.0f;
    (((struct o54_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    (((struct o5C_float *)(a4))->v) = (*(float *)0xC07A000);
    (((struct o3746_uchar *)(a4))->v) = 0x23;
    FUN_0c15fa88(a4);
    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
    return 0x16;
}

int FUN_0c07cad0(int a4, int a5)
{
    int stk[4];
    register float u5;
    register float u6;
    register float u7;
    register float t8;
    register float u9;
    register float u10;
    register float u11;
    register float t12;
    register float u15;
    register float u21;
    register float t22;

    *(float *)(((int)stk + 4)) = (((((struct o28_float *)(a5))->v)) - ((((struct o28_float *)(a4))->v)));
    *(float *)(((int)stk + 12)) = (((((struct o30_float *)(a5))->v)) - ((((struct o30_float *)(a4))->v)));
    *(float *)(((int)stk + 8)) = 0.0f;
    FUN_0c17c450(((int)stk + 4));
    u5 = (((struct o4C_float *)(a4))->v);
    u6 = (((struct o54_float *)(a4))->v);
    u7 = (u6 * u6);
    u7 = u7 + u5 * u5;
    t8 = math_signed_sqrt(u7);
    *(float *)(((int)stk + 0)) = t8;
    u9 = *(float *)(((int)stk + 4));
    u10 = *(float *)(((int)stk + 12));
    u11 = (u10 * u10);
    u11 = u11 + u9 * u9;
    t12 = math_signed_sqrt(u11);
    u15 = (t8 * t12);
    if ((t8 * t12) == 0.0f) {
        u15 = (*(float *)0xC07CBE8);
    }
    u21 = (((((struct o54_float *)(a4))->v)) * (*(float *)(((int)stk + 12))));
    u21 = u21 + (*(float *)(((int)stk + 4))) * ((((struct o4C_float *)(a4))->v));
    t22 = math_cos_angle16(0x1C71);
    return ((((u21 / u15) > t22)) ? 1 : 0);
}
