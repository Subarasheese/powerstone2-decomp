/* Straight-line functions with calls and guards (batch gen_fu): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
struct o10_float { char p[0x10]; float v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12C_ushort { char p[0x12C]; unsigned short v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o168_float { char p[0x168]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o378C_float { char p[0x378C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o420_float { char p[0x420]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAA_uchar { char p[0xAA]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c037498(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c07e2f4(int, int);
int FUN_0c07e3ae(int, int);
int FUN_0c0c2ab6(int, int);
int FUN_0c0c2d56(int, int, int);
int FUN_0c1502e8(int, int, int, int, int, int);
int math_atan2_angle16(float, float);
float math_cos_angle16(int);
int math_mat_get_translate(int, int);
float math_signed_sqrt(float);
float math_sin_angle16(int);
int nlAddVector3op(int, int, int, Stk3);
int nlRand(void);
int nlSubVector3op(int, int, int);
int FUN_0c16f210(int a4, int a5);
int FUN_0c0e294c(int a4);
int FUN_0c0e8790(int a4, int a5, int a6, int a7);
int FUN_0c142868(int a4);
int FUN_0c1350d4(int a4, int a5);
int FUN_0c16ce4c(int a4);
int FUN_0c04be78(int a4);
int FUN_0c158ca0(int a4, int a5, int a6);
int FUN_0c14f734(int a4, int a5, int a6, int a7, float f4);
int FUN_0c162770(int a4, int a5, int a6, int a7);

int FUN_0c16f210(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t3;
    register float u0;

    t0 = FUN_0c037320(0xD, (*(int *)0xC4B40CC));
    t1 = t0;
    if (t0 != 0) {
        t0 = FUN_0c03f444(0x1, 0x0, 0x1);
        t1 = t0;
        if (t0 != 0) {
            FUN_0c03733c(t0, 0xD, (*(int *)0xC4B40CC));
            *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
            *(unsigned int *)((t0 + 0x4)) = 0xC16F14C;
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)(a5); }
            (((struct o40_float *)(t0))->v) = (((((struct o378C_float *)(a4))->v)) * (1.0f + 1.0f));
            u0 = (((struct o378C_float *)(a4))->v);
            (((struct o48_float *)(t0))->v) = u0;
            (((struct o44_float *)(t0))->v) = u0;
            (((struct oA8_uchar *)(t0))->v) = 0x1;
            (((struct oAC_ushort *)(t0))->v) = 0x21F;
            (((struct oA9_uchar *)(t0))->v) = 0x21;
            (((struct oB8_float *)(t0))->v) = 0.300000012f;
            (((struct oB4_float *)(t0))->v) = 0.300000012f;
            (((struct oBC_float *)(t0))->v) = 0.899999976f;
            *(unsigned char *)((((((struct oC4_int *)(t0))->v)) + 0x0)) = 0x1;
            *(unsigned short *)((((((struct oC4_int *)(t0))->v)) + 0x6)) = 0x20F;
            t3 = (((struct oC4_int *)(t0))->v);
            (((struct o8C_float *)(t3))->v) = 1.0f;
            (((struct o88_float *)(t3))->v) = 1.0f;
            (((struct o84_float *)(t3))->v) = 1.0f;
            t3 = (((struct oC4_int *)(t0))->v);
            (((struct o1C_float *)(t3))->v) = 0.300000012f;
            (((struct o18_float *)(t3))->v) = 0.300000012f;
            (((struct o20_float *)(((((struct oC4_int *)(t0))->v))))->v) = 0.899999976f;
            FUN_0c07e3ae(t0, 0xA6);
            FUN_0c0c2ab6(t0, 0x48);
            t3 = *(int *)((a4 + 0x38));
            *(unsigned int *)((t0 + 0x38)) = t3;
            (((struct o4C_float *)(t0))->v) = ((math_sin_angle16(t3)) * 40.0f);
            (((struct o54_float *)(t0))->v) = ((math_cos_angle16((*(int *)((t0 + 0x38))))) * 40.0f);
            *(unsigned short *)((t0 + 0x1C)) = 0x32;
            t1 = 0x32;
        }
    }
    return t1;
}

int FUN_0c0e294c(int a4)
{
    register int t3;
    register int t4;
    register int t5;
    register int t8;
    register int t9;
    register int t18;
    register float u13;

    nlRand();
    t3 = 0xC1CB03C;
    t4 = (-(int)(((float)((int)((int)(nlRand()) % (int)0x1E)) * 65536.0f) / 360.0f));
    t5 = 0xC1CB03C;
    for (;;) {
        t8 = FUN_0c037320((*(int *)((t3 + 0x0))), (*(int *)0xC4B410C));
        t9 = FUN_0c03f444(0x5, 0x0, t8);
        t18 = t9;
        if (t9 != 0) {
            FUN_0c03733c(t9, (*(int *)((t5 + 0x0))), (*(int *)0xC4B410C));
            *(unsigned int *)((t9 + 0x4)) = 0xC0E2888;
            *(unsigned char *)((t9 + 0x1)) = 0xFFFFFFFF;
            (((struct oAC_ushort *)(t9))->v) = 0x1F;
            (((struct oA9_uchar *)(t9))->v) = 0x21;
            u13 = (((struct o4_float *)(t5))->v);
            (((struct o48_float *)(t9))->v) = u13;
            (((struct o44_float *)(t9))->v) = u13;
            (((struct o40_float *)(t9))->v) = u13;
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t9 + 0x28)) = *(struct mv3 *)(a4); }
            (((struct o2C_float *)(t9))->v) = (((((struct o2C_float *)(t9))->v)) + ((((struct o8_float *)(t5))->v)));
            (((struct o4C_float *)(t9))->v) = ((math_cos_angle16(t4)) * 6.0f);
            (((struct o54_float *)(t9))->v) = ((math_sin_angle16(t4)) * 6.0f);
            (((struct o50_float *)(t9))->v) = 16.0f;
            *(unsigned int *)((t9 + 0x38)) = t4;
            t4 = (t4 + 0x71C);
            t18 = 0x50;
        }
        t3 = (t3 + 0xC);
        t5 = (t5 + 0xC);
        if ((unsigned int)t3 >= (unsigned int)0xC1CB084) {
            break;
        }
    }
    return t18;
}

int FUN_0c0e8790(int a4, int a5, int a6, int a7)
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
            return FUN_0c03f346(a4, 0xC1CC14C, a6, a7);
        }
        if ((*(signed char *)((t1 + 0x15))) == 0) {
            return FUN_0c0c2d56(a4, 0x1, (*(signed char *)((a4 + 0x1))));
        }
        if ((*(signed char *)((t1 + 0x15))) == 1) {
            t0 = *(signed char *)((a4 + 0x2));
            { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)(((0xC1CC14C + (((t0 << 2) + t0) << 2)) + 0x4)); }
            *(unsigned short *)((a4 + 0x1C)) = 0x0;
            t0 = 0x0;
        } else {
            t2 = *(short *)((a4 + 0x1C));
            if ((int)t2 <= 0) {
                FUN_0c0c2d56(a4, 0x2, (*(signed char *)((a4 + 0x1))));
                math_mat_get_translate((a4 + 0x64), (a4 + 0x28));
                (((struct oA4_uint *)(a4))->v) = 0x0;
                (((struct oA8_uchar *)(a4))->v) = 0x1;
                FUN_0c0c2ab6(a4, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738CA))));
                (((struct oAA_uchar *)(a4))->v) = 0x1;
                t0 = 0xAA;
            } else {
                (((struct oA8_uchar *)(a4))->v) = (((t2 & 0x4) >> 1) >> 1);
                t2 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t2 - 1);
                t0 = (t2 - 1);
            }
        }
        return t0;
    }
    *(unsigned short *)(((0x12A + a4) + 0x4)) = 0x0;
    (((struct o12A_ushort *)(a4))->v) = 0x0;
    (((struct o12C_ushort *)(a4))->v) = 0x0;
    (((struct oA8_uchar *)(a4))->v) = 0x0;
    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    if (t1 == 0) {
        return FUN_0c03f346(a4, 0xC1CC14C, (0x12A + a4), a7);
    }
    if ((*(signed char *)((t1 + 0x15))) == 0) {
        return FUN_0c0c2d56(a4, 0x1, (*(signed char *)((a4 + 0x1))));
    }
    if ((*(signed char *)((t1 + 0x15))) == 1) {
        t0 = *(signed char *)((a4 + 0x2));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)(((0xC1CC14C + (((t0 << 2) + t0) << 2)) + 0x4)); }
        *(unsigned short *)((a4 + 0x1C)) = 0x0;
        t0 = 0x0;
    } else {
        t1 = *(short *)((a4 + 0x1C));
        if ((int)t1 <= 0) {
            FUN_0c0c2d56(a4, 0x2, (*(signed char *)((a4 + 0x1))));
            math_mat_get_translate((a4 + 0x64), (a4 + 0x28));
            (((struct oA4_uint *)(a4))->v) = 0x0;
            (((struct oA8_uchar *)(a4))->v) = 0x1;
            FUN_0c0c2ab6(a4, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738CA))));
            (((struct oAA_uchar *)(a4))->v) = 0x1;
            t2 = 0xAA;
        } else {
            (((struct oA8_uchar *)(a4))->v) = (((t1 & 0x4) >> 1) >> 1);
            t1 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
            t2 = (t1 - 1);
        }
        t0 = t2;
    }
    return t0;
}

int FUN_0c142868(int a4)
{
    register int t2;
    register float u3;
    register int t4;
    register int t5;
    register int t18;
    register int t13;
    register int t14;

    t2 = FUN_0c037320(0x2, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
    u3 = *(float *)0xC1429BC;
    t4 = 0x0;
    for (;;) {
        t5 = FUN_0c03f444(0x5, 0x0, t2);
        t18 = t5;
        if (t5 != 0) {
            FUN_0c03733c(t5, 0x2, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
            (((struct oAC_ushort *)(t5))->v) = 0x1F;
            (((struct oA9_uchar *)(t5))->v) = (*(signed char *)((a4 + 0xA9)));
            *(unsigned short *)((((((struct oC4_int *)(t5))->v)) + 0x6)) = 0xF;
            *(unsigned int *)((t5 + 0x4)) = 0xC142960;
            *(unsigned char *)((t5 + 0x1)) = (*(signed char *)((a4 + 0x1)));
            *(unsigned char *)((t5 + 0x2)) = t4;
            *(unsigned int *)((t5 + 0x10)) = a4;
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t5 + 0x40)) = *(struct mv3 *)(0xC2024F4); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t5 + 0x28)) = *(struct mv3 *)((a4 + 0x28)); }
            (((struct o2C_float *)(t5))->v) = ((((struct o168_float *)(a4))->v));
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t5 + 0x34)) = *(struct mv3 *)((a4 + 0x34)); }
            t13 = *(int *)(((t4 << 2) + 0xC202500));
            t14 = *(int *)((t5 + 0x38));
            *(unsigned int *)((t5 + 0x38)) = (t14 + (t13 + 0x4000));
            (((struct o54_float *)(t5))->v) = ((math_cos_angle16(((t14 + (t13 + 0x4000)) + 0x4000))) * u3);
            (((struct o4C_float *)(t5))->v) = ((math_sin_angle16(((*(int *)((t5 + 0x38))) + 0x4000))) * u3);
            (((struct o50_float *)(t5))->v) = 0.0f;
            t18 = 0x50;
        }
        t4 = (t4 + 0x1);
        if ((int)t4 >= (int)0x2) {
            break;
        }
    }
    return t18;
}

int FUN_0c1350d4(int a4, int a5)
{
    int stk[5];
    register int t2;
    register int t3;
    register int t18;
    register float u6;
    register int t14;
    register int t15;

    *(unsigned char *)(((int)stk + 16)) = a5;
    t2 = FUN_0c037320(0x5, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
    t3 = FUN_0c03f444(0x1, 0x0, t2);
    t18 = t3;
    if (t3 != 0) {
        *(unsigned char *)((t3 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned int *)((t3 + 0x4)) = 0xC1351CA;
        *(unsigned int *)((t3 + 0x10)) = a4;
        *(unsigned char *)((t3 + 0x2)) = (*(signed char *)(((int)stk + 16)));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t3 + 0x34)) = *(struct mv3 *)((a4 + 0x34)); }
        u6 = *(float *)0xC135254;
        (((struct o48_float *)(t3))->v) = u6;
        (((struct o44_float *)(t3))->v) = u6;
        (((struct o40_float *)(t3))->v) = u6;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t3 + 0x28)) = *(struct mv3 *)((a4 + 0x28)); }
        (((struct o2C_float *)(t3))->v) = (((((struct o2C_float *)(t3))->v)) - 50.0f);
        (((struct oA8_uchar *)(t3))->v) = 0x1;
        (((struct oAC_ushort *)(t3))->v) = 0x1F;
        (((struct oA9_uchar *)(t3))->v) = 0x21;
        FUN_0c037498(((((struct oC4_int *)(t3))->v)), 0x0, 0x5, (*(int *)((((*(signed char *)((t3 + 0x1))) << 2) + 0xC4B40FC))));
        *(unsigned char *)((((((struct oC4_int *)(t3))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(t3))->v)) + 0x6)) = 0x1F;
        t14 = (((struct oC4_int *)(t3))->v);
        (((struct o8C_float *)(t14))->v) = 1.0f;
        (((struct o88_float *)(t14))->v) = 1.0f;
        (((struct o84_float *)(t14))->v) = 1.0f;
        *(int *)((int)stk + 12) = 0xF0;
        *(int *)((int)stk + 8) = 0x0;
        t15 = *(signed char *)((t3 + 0x1));
        *(int *)((int)stk + 4) = (~((int)0x1 << (int)t15));
        *(int *)((int)stk + 0) = 0x100;
        FUN_0c064d24(t3, 0x1, 0x35, 0x2, 0x100, (~((int)0x1 << (int)t15)), 0x0, 0xF0);
        FUN_0c07e2f4(t3, 0x65);
        (((struct o12C_ushort *)(t3))->v) = 0x0;
        t18 = 0x12C;
    }
    return t18;
}

int FUN_0c16ce4c(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;

    u0 = *(float *)0xC16CF94;
    t0 = 0x0;
    for (;;) {
        t2 = FUN_0c037320(0x4D, (*(int *)0xC4B40D8));
        t3 = FUN_0c03f444(0x1, 0x0, t2);
        t1 = t3;
        if (t3 != 0) {
            *(unsigned int *)((t3 + 0x4)) = 0xC16CF42;
            *(unsigned char *)((t3 + 0x1)) = 0xFFFFFFFF;
            *(unsigned char *)((t3 + 0x2)) = t0;
            FUN_0c03744a(((((struct oC4_int *)(t3))->v)), 0x1, 0x4D, (*(int *)0xC4B40D8));
            (((struct oA8_uchar *)(t3))->v) = 0x1;
            (((struct oAC_ushort *)(t3))->v) = 0x2F;
            (((struct oA9_uchar *)(t3))->v) = 0x21;
            (((struct o48_float *)(t3))->v) = 1.0f;
            (((struct o44_float *)(t3))->v) = 1.0f;
            (((struct o40_float *)(t3))->v) = 1.0f;
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t3 + 0x28)) = *(struct mv3 *)((a4 + 0x28)); }
            *(unsigned int *)((t3 + 0x10)) = a4;
            *(unsigned short *)((((((struct oC4_int *)(t3))->v)) + 0x6)) = 0x3F;
            t2 = (((struct oC4_int *)(t3))->v);
            (((struct o8C_float *)(t2))->v) = u0;
            (((struct o88_float *)(t2))->v) = u0;
            (((struct o84_float *)(t2))->v) = u0;
            FUN_0c07e3ae(t3, (*(signed char *)0xC27489F));
            FUN_0c064d24(t3, 0x3, 0x9, 0x0, 0x100, (~((int)0x1 << (int)(*(signed char *)((t3 + 0x1))))), 0x0, 0x0);
            (((struct o12A_ushort *)(t3))->v) = 0x0;
            t1 = 0x12A;
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x6) {
            break;
        }
    }
    return t1;
}

int FUN_0c04be78(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;

    t0 = FUN_0c037320(0x0, (*(int *)0xC4B410C));
    t1 = FUN_0c03f444(0x5, 0x0, t0);
    t0 = t1;
    if (t1 != 0) {
        FUN_0c03733c(t1, 0x0, (*(int *)0xC4B410C));
        (((struct oA8_uchar *)(t1))->v) = 0x1;
        (((struct oAC_ushort *)(t1))->v) = 0x1F;
        (((struct oA9_uchar *)(t1))->v) = 0x80;
        *(unsigned char *)((t1 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t1 + 0x4)) = 0xC04BE0E;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x28)) = *(struct mv3 *)(a4); }
        (((struct o50_float *)(t1))->v) = 0.0f;
        (((struct o5C_float *)(t1))->v) = -2.0f;
        t2 = nlRand();
        t3 = ((~(((~t2) + 0x1) & 0x3)) + 0x1);
        if ((int)t2 >= 0) {
            t3 = (t2 & 0x3);
        }
        u0 = 0.25f;
        u0 = u0 + 0.125f * (float)t3;
        (((struct o40_float *)(t1))->v) = u0;
        (((struct o48_float *)(t1))->v) = u0;
        (((struct o44_float *)(t1))->v) = u0;
        t2 = nlRand();
        t3 = ((~(((~t2) + 0x1) & 0x1F)) + 0x1);
        if ((int)t2 >= 0) {
            t3 = (t2 & 0x1F);
        }
        *(unsigned int *)((t1 + 0x34)) = (((t3 << 8) << 2) << 1);
        t2 = nlRand();
        t3 = ((~(((~t2) + 0x1) & 0x1F)) + 0x1);
        if ((int)t2 >= 0) {
            t3 = (t2 & 0x1F);
        }
        *(unsigned int *)((t1 + 0x38)) = (((t3 << 8) << 2) << 1);
        t2 = nlRand();
        t3 = ((~(((~t2) + 0x1) & 0x1F)) + 0x1);
        if ((int)t2 >= 0) {
            t3 = (t2 & 0x1F);
        }
        *(unsigned int *)((t1 + 0x3C)) = (((t3 << 8) << 2) << 1);
        t0 = (((t3 << 8) << 2) << 1);
    }
    return t0;
}

int FUN_0c158ca0(int a4, int a5, int a6)
{
    int stk[6];
    register int t1;
    register int t2;
    register int t24;
    register float u12;
    register float u13;
    register float u14;
    register float u15;
    register float u16;
    register float t17;
    register float t18;
    register float u21;

    *(unsigned int *)(((int)stk + 8)) = a4;
    *(unsigned int *)(((int)stk + 0)) = a5;
    *(unsigned int *)(((int)stk + 4)) = a6;
    t1 = FUN_0c037320(0x15, (*(int *)0xC4B40CC));
    t2 = FUN_0c03f444(0x5, 0x0, t1);
    t24 = t2;
    if (t2 != 0) {
        FUN_0c03733c(t2, 0x15, (*(int *)0xC4B40CC));
        (((struct oAC_ushort *)(t2))->v) = 0x1F;
        (((struct oA9_uchar *)(t2))->v) = 0x21;
        *(unsigned char *)((t2 + 0x1)) = 0xFFFFFFFF;
        *(unsigned char *)((t2 + 0x2)) = (*(signed char *)(((int)stk + 8)));
        *(unsigned int *)((t2 + 0x4)) = 0xC1589D6;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t2 + 0x28)) = *(struct mv3 *)((*(int *)(((int)stk + 0)))); }
        (((struct o2C_float *)(t2))->v) = (((((struct o2C_float *)(t2))->v)) + 200.0f);
        (((struct o40_float *)(t2))->v) = 0.699999988f;
        (((struct o44_float *)(t2))->v) = 0.699999988f;
        (((struct o48_float *)(t2))->v) = 0.699999988f;
        nlSubVector3op((((int)stk + 0) + 0xC), (*(int *)(((int)stk + 4))), (*(int *)(((int)stk + 0))));
        *(float *)(((int)stk + 16)) = ((*(float *)(((int)stk + 16))) + 100.0f);
        u12 = *(float *)(((int)stk + 12));
        u13 = *(float *)(((int)stk + 20));
        u14 = *(float *)(((int)stk + 16));
        u15 = (u13 * u13);
        u15 = u15 + u12 * u12;
        u16 = u15;
        u16 = u16 + u14 * u14;
        t17 = math_signed_sqrt(u15);
        t18 = math_signed_sqrt(u16);
        u21 = *(float *)(((int)stk + 16));
        *(unsigned int *)((t2 + 0x38)) = (math_atan2_angle16(((*(float *)(((int)stk + 12))) / t17), ((*(float *)(((int)stk + 20))) / t17)));
        t24 = math_atan2_angle16((-((u21 / t18) * 1.0f)), (t17 / t18));
        *(unsigned int *)((t2 + 0x34)) = t24;
    }
    return t24;
}

int FUN_0c14f734(int a4, int a5, int a6, int a7, float f4)
{
    int stk[5];
    register int t2;
    register int t24;
    register int t3;
    register int t7;
    register int t9;

    t2 = (int)((int)(unsigned short)a6 % (int)(*(signed char *)((0xC20324C + (*(signed char *)((0xC53249A + ((short)(signed char)a7 * (short)0x3938))))))));
    t24 = t2;
    if (t2 == 0) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)(a4); }
        t3 = *(int *)0xC542260;
        nlAddVector3op(((int)stk + 8), ((int)stk + 8), (((((0x7 & ((unsigned int)t3 >> 1)) << 1) + (0x7 & ((unsigned int)t3 >> 1))) << 2) + 0xC20318C), *(Stk3 *)(((int)stk + 8)));
        t7 = *(int *)0xC542260;
        *(int *)((int)stk + 4) = (((((t7 & 0x3) << 1) + (t7 & 0x3)) << 2) + 0xC2031EC);
        *(int *)((int)stk + 0) = 0xC202D30;
        t9 = FUN_0c1502e8(0x2, 0x1, 0x1, (((int)stk + 0) + 0x8), 0xC202D30, (((((t7 & 0x3) << 1) + (t7 & 0x3)) << 2) + 0xC2031EC));
        t24 = t9;
        if (t9 != 0) {
            if ((unsigned short)a6 == 0) {
                (((struct o420_float *)(t9))->v) = 3.0f;
            } else {
                (((struct o420_float *)(t9))->v) = ((float)(unsigned short)a6 / (1.0f + 1.0f));
                if (((float)(unsigned short)a6 / (1.0f + 1.0f)) > (1.0f + 1.0f)) {
                    (((struct o420_float *)(t9))->v) = (1.0f + 1.0f);
                }
            }
            { struct mv4 { int w[4]; }; *(struct mv4 *)((((((struct oC4_int *)(t9))->v)) + 0x14)) = *(struct mv4 *)(0xC202D54); }
            *(unsigned short *)((t9 + 0x1E)) = 0x0;
            t24 = 0x0;
        }
    }
    return t24;
}

int FUN_0c162770(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;

    t0 = (~((int)0x1 << (int)a4));
    if ((int)a4 < 0) {
        t0 = 0x44F;
    }
    t1 = FUN_0c037320((*(int *)((a7 + 0x0))), (*(int *)0xC4B40CC));
    t2 = FUN_0c03f444(0x1, 0x0, t1);
    t1 = 0x0;
    if (t2 != 0) {
        FUN_0c03733c(t2, (*(int *)((a7 + 0x0))), (*(int *)0xC4B40CC));
        *(unsigned char *)((t2 + 0x1)) = a4;
        (((struct oAC_ushort *)(t2))->v) = 0xF;
        (((struct oA9_uchar *)(t2))->v) = 0x21;
        FUN_0c07e3ae(t2, (*(int *)((a7 + 0x8))));
        FUN_0c064d24(t2, 0x3, (*(int *)((a7 + 0x4))), 0x0, 0x100, (t0), (t0), 0xF0);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t2 + 0x28)) = *(struct mv3 *)(a5); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t2 + 0x34)) = *(struct mv3 *)(a6); }
        u0 = (((struct oC_float *)(a7))->v);
        u1 = (((struct o10_float *)(a7))->v);
        (((struct o54_float *)(t2))->v) = (u0 * (math_cos_angle16((*(int *)((a6 + 0x4))))));
        (((struct o4C_float *)(t2))->v) = (u0 * (math_sin_angle16((*(int *)((a6 + 0x4))))));
        (((struct o50_float *)(t2))->v) = 0.0f;
        (((struct o5C_float *)(t2))->v) = u1;
        (((struct o48_float *)(t2))->v) = 1.0f;
        (((struct o44_float *)(t2))->v) = 1.0f;
        (((struct o40_float *)(t2))->v) = 1.0f;
        t1 = t2;
    }
    return t1;
}
