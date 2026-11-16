/* Straight-line functions with calls and guards (batch gen_cb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o10_float { char p[0x10]; float v; };
struct o118_int { char p[0x118]; int v; };
struct o12C_ushort { char p[0x12C]; unsigned short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o14_float { char p[0x14]; float v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o24_short { char p[0x24]; short v; };
struct o2C_float { char p[0x2C]; float v; };
struct o3717_uchar { char p[0x3717]; unsigned char v; };
struct o3718_uchar { char p[0x3718]; unsigned char v; };
struct o378C_float { char p[0x378C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o41C_uchar { char p[0x41C]; unsigned char v; };
struct o41D_uchar { char p[0x41D]; unsigned char v; };
struct o422_uchar { char p[0x422]; unsigned char v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC_float { char p[0xC]; float v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c036b28(int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c037ac4(int, int, int, int, int);
int FUN_0c037bf6(int);
int FUN_0c038362(int);
int FUN_0c03f444(int, int, int);
int FUN_0c064d5a(int, int);
int FUN_0c07d838(int, int, int, int, int, int);
int FUN_0c07d9dc(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07ebe6(int);
int FUN_0c07f18c(int);
int FUN_0c07fea4(int, int);
extern int FUN_0c085cac();
int FUN_0c0e340c(int);
int FUN_0c0e6dd8(int, int);
int FUN_0c150160(int, int, float, float, float, float);
int FUN_0c179ac0(void);
int FUN_0c17a670(float);
int FUN_0c187798(void);
int gfx_set_fog_color(int);
int math_mat_get_translate(int, int);
float math_signed_sqrt(float);
int pl_no_ground(int);
int thunk_FUN_0c05abb2(int, int);
int thunk_FUN_0c2b5b00(int);
int FUN_0c0f4f28(int a4);
int FUN_0c126c4c(int a4);
int FUN_0c136d54(int a4, int a5, int a6, int a7);
int FUN_0c1606f4(int a4, int a5);
int FUN_0c036b76(void);
int FUN_0c03e958(int a4, float f4, float f5);
int FUN_0c04bcaa(int a4);
int FUN_0c06e718(int a4);
int FUN_0c06e7e4(int a4);
int FUN_0c069a04(int a4, int a5, int a6, int a7);
int FUN_0c0ced88(int a4, int a5);
int FUN_0c0e360c(int a4);
int FUN_0c0f4448(int a4);

int FUN_0c0f4f28(int a4)
{
    int stk[10];
    register float u2;
    register float u3;
    register int t4;
    register int t10;

    *(unsigned int *)(((int)stk + 0)) = a4;
    math_mat_get_translate((((((struct oC4_int *)(a4))->v)) + 0x28), (((int)stk + 0) + 0x4));
    u2 = (((struct o0_float *)0xC0F503C)->v);
    u3 = (((struct o4_float *)0xC0F503C)->v);
    t4 = 0x0;
    for (;;) {
        FUN_0c187798();
        *(float *)(((int)stk + 28)) = ((*(float *)(((int)stk + 28))) + ((float)t4 + u2));
        *(float *)(((int)stk + 24)) = 0.0f;
        *(float *)(((int)stk + 16)) = 0.0f;
        *(float *)(((int)stk + 20)) = 1.0f;
        t10 = FUN_0c150160((((int)stk + 0) + 0x1C), (((int)stk + 0) + 0x10), ((((struct o14_float *)0xC0F503C)->v)), ((((struct o10_float *)0xC0F503C)->v)), ((((struct oC_float *)0xC0F503C)->v)), u3);
        t4 = (t4 + 0x6F);
        if ((int)t4 >= (int)0x456) {
            break;
        }
    }
    return t10;
}

int FUN_0c126c4c(int a4)
{
    register int t0;
    register int t11;
    register int t1;

    t0 = FUN_0c03f444(0x5, 0x1, 0x4);
    t11 = t0;
    if (t0 != 0) {
        t1 = 0x0;
        for (;;) {
            if ((int)t1 >= (int)((((struct oC0_int *)(t0))->v))) {
                break;
            }
            FUN_0c03744a((*(int *)((((t1 << 2) + (0xC4 + t0)) + 0x0))), (t1 + 0x1), 0xE, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
            t1 = (t1 + 0x1);
        }
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = (*(signed char *)((a4 + 0xA9)));
        *(unsigned int *)((t0 + 0x10)) = a4;
        *(unsigned int *)((t0 + 0x4)) = 0xC126CDC;
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        FUN_0c187798();
        FUN_0c187798();
        *(unsigned short *)((t0 + 0x1C)) = 0x50;
        t11 = 0x50;
    }
    return t11;
}

int FUN_0c136d54(int a4, int a5, int a6, int a7)
{
    int stk[4];
    register int t0;
    register int t5;
    register int t7;
    register int t12;
    register int t15;
    register int t20;
    register int t6;
    register int t13;
    register int t14;
    register int t21;

    *(unsigned char *)(((int)stk + 12)) = a4;
    *(unsigned int *)(((int)stk + 0)) = a5;
    *(unsigned int *)(((int)stk + 4)) = a6;
    *(unsigned int *)(((int)stk + 8)) = a7;
    t0 = FUN_0c03f444(0x1, 0x0, 0x2);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((int)stk + 12)));
        *(unsigned int *)((t0 + 0x4)) = 0xC136AB4;
        *(unsigned int *)((t0 + 0x10)) = (*(int *)(((int)stk + 8)));
        *(volatile int *)((t0 + 0xC8));
        *(volatile int *)(((int)stk + 4));
        t5 = ((int (*)(int))(FUN_0c187798))(t0);
        t7 = (((struct oC8_int *)(t6))->v);
        (((struct o70_float *)(t7))->v) = (((((struct o70_float *)(t7))->v)) + (*(float *)0xC2A17D4));
        *(volatile int *)((t6 + 0xC8));
        *(volatile int *)(((int)stk + 0));
        t12 = ((int (*)(int, int))(FUN_0c187798))(t6, 0xC2A17D4);
        t15 = (((struct oC8_int *)(t14))->v);
        (((struct o88_float *)(t15))->v) = (((((struct o88_float *)(t15))->v)) + ((((struct o4_float *)(t13))->v)));
        *(volatile int *)(((*(int *)((t14 + 0x10))) + 0xC8));
        t20 = ((int (*)(int, int))(FUN_0c187798))(t14, t13);
        return t21;
    }
    return 0x0;
}

int FUN_0c1606f4(int a4, int a5)
{
    register int t0;
    register int t5;
    register int t3;

    t0 = FUN_0c03f444(0x5, 0x0, 0x1);
    t5 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned char *)((t0 + 0x2)) = a5;
        *(unsigned int *)((t0 + 0x4)) = 0xC1605F4;
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        *(unsigned int *)((t0 + 0x10)) = a4;
        *(unsigned short *)((t0 + 0x1C)) = 0x0;
        *(unsigned short *)((t0 + 0x1E)) = 0x0;
        (((struct o20_ushort *)(t0))->v) = 0xF;
        t3 = (((struct oC4_int *)(t0))->v);
        FUN_0c03744a(t3, 0x0, 0x12, (*(int *)0xC4B40CC));
        *(unsigned char *)((t3 + 0x0)) = 0x1;
        *(unsigned short *)((t3 + 0x6)) = 0x3F;
        (((struct o8C_float *)(t3))->v) = 0.0f;
        (((struct o88_float *)(t3))->v) = 0.0f;
        (((struct o84_float *)(t3))->v) = 0.0f;
        (((struct o6C_float *)(t3))->v) = 0.0f;
        (((struct o70_float *)(t3))->v) = 200.0f;
        (((struct o74_float *)(t3))->v) = 0.0f;
        (((struct o68_uint *)(t3))->v) = (a4 + 0x64);
        t5 = 0x68;
    }
    return t5;
}

int FUN_0c036b76(void)
{
    register int t30;

    FUN_0c036b28(0x0);
    FUN_0c036b28(0x2);
    FUN_0c036b28(0xC);
    FUN_0c036b28(0xF);
    FUN_0c036b28(0x10);
    FUN_0c036b28(0x11);
    FUN_0c036b28(0x12);
    FUN_0c036b28(0x13);
    FUN_0c036b28(0x14);
    FUN_0c036b28(0x15);
    FUN_0c036b28(0x23);
    FUN_0c036b28(0x24);
    FUN_0c036b28(0x25);
    FUN_0c036b28(0x26);
    FUN_0c036b28(0x27);
    FUN_0c036b28(0x28);
    if ((*(signed char *)0xC5429A8) == 0) {
        FUN_0c036b28(0x3);
        FUN_0c036b28(0x9);
        FUN_0c036b28(0xD);
        FUN_0c036b28(0x1B);
        FUN_0c036b28(0x1D);
        return FUN_0c036b28(0x21);
    }
    FUN_0c036b28(0x4);
    FUN_0c036b28(0xA);
    FUN_0c036b28(0xE);
    FUN_0c036b28(0x22);
    if ((*(signed char *)0xC5429A8) == 1) {
        FUN_0c036b28(0x1C);
        t30 = 0x1E;
    } else {
        FUN_0c036b28(0x2A);
        t30 = 0x2B;
    }
    return FUN_0c036b28(t30);
}

int FUN_0c03e958(int a4, float f4, float f5)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    u0 = math_signed_sqrt((f5 / (f4 / 16384.0f)));
    if ((int)((0x80 + (-(int)u0)) & 0x7F) > 0) {
        t0 = 0x0;
        for (;;) {
            t1 = t0;
            t2 = t0;
            t0 = (t0 + 0x1);
            *(float *)((0xC4789F8 + (t1 << 2))) = (1.0f - ((float)t2 / (float)((0x80 + (-(int)u0)) & 0x7F)));
            if ((int)t0 >= (int)((0x80 + (-(int)u0)) & 0x7F)) {
                break;
            }
        }
    }
    if ((unsigned int)((((0x80 + (-(int)u0)) & 0x7F) << 2) + 0xC4789F8) < (unsigned int)0xC478BFC) {
        t0 = ((((0x80 + (-(int)u0)) & 0x7F) << 2) + 0xC4789F8);
        for (;;) {
            *(float *)((t0 + 0x0)) = 0.0f;
            t0 = (t0 + 0x4);
            if ((unsigned int)t0 >= (unsigned int)0xC478BFC) {
                break;
            }
        }
    }
    thunk_FUN_0c2b5b00(0xC4789F8);
    gfx_set_fog_color(a4);
    return FUN_0c17a670(f4);
}

int FUN_0c04bcaa(int a4)
{
    int stk[4];
    register int t0;
    register int t1;
    register float u4;
    register int t5;
    register int t6;
    register float u9;
    register int t11;

    *(unsigned int *)(((int)stk + 0)) = a4;
    t0 = FUN_0c179ac0();
    t1 = ((~(((~t0) + 0x1) & 0x1F)) + 0x1);
    if ((int)t0 >= 0) {
        t1 = (t0 & 0x1F);
    }
    u4 = -1000.0f;
    u4 = u4 + 2000.0f * (((float)t1 / 32.0f));
    *(float *)(((int)stk + 4)) = u4;
    *(float *)(((int)stk + 8)) = 0.0f;
    t5 = FUN_0c179ac0();
    t6 = ((~(((~t5) + 0x1) & 0x1F)) + 0x1);
    if ((int)t5 >= 0) {
        t6 = (t5 & 0x1F);
    }
    u9 = -1000.0f;
    u9 = u9 + 2000.0f * (((float)t6 / 32.0f));
    *(float *)(((int)stk + 12)) = u9;
    t11 = 0x41;
    if ((*(int *)(((int)stk + 0))) == 0) {
        t11 = 0x40;
    }
    return (thunk_FUN_0c05abb2(t11, (((int)stk + 0) + 0x4)));
}

int FUN_0c06e718(int a4)
{
    register int t0;
    register int t4;
    register int t5;

    t0 = 0x0;
    for (;;) {
        if ((int)(*(short *)((((((signed char)t0 << 2) << 2) + 0xC1C5B7C) + 0x0))) > (int)(*(short *)((a4 + 0x1C)))) {
            break;
        }
        t0 = (t0 + 0x1);
    }
    t4 = *(short *)((a4 + 0x1C));
    t5 = *(short *)((((((signed char)t0 << 2) << 2) + 0xC1C5B7C) + 0x0));
    (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) + ((((((((struct o4_float *)(((((signed char)t0 << 2) << 2) + 0xC1C5B7C)))->v)) * ((((struct o378C_float *)(a4))->v)))) - ((((struct o40_float *)(a4))->v))) / (float)(t5 - t4)));
    (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) + ((((((((struct o8_float *)(((((signed char)t0 << 2) << 2) + 0xC1C5B7C)))->v)) * ((((struct o378C_float *)(a4))->v)))) - ((((struct o44_float *)(a4))->v))) / (float)(t5 - t4)));
    (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + ((((((((struct oC_float *)(((((signed char)t0 << 2) << 2) + 0xC1C5B7C)))->v)) * ((((struct o378C_float *)(a4))->v)))) - ((((struct o48_float *)(a4))->v))) / (float)(t5 - t4)));
    return 0x48;
}

int FUN_0c06e7e4(int a4)
{
    register int t0;
    register int t1;

    FUN_0c07e79c(a4, 0xFFFFFFFF, 0x4, 0x3F, 0xFFFFFFFF, 0x4, 0x3F);
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
    *(unsigned short *)((a4 + 0x1E)) = 0x0;
    (((struct o40_float *)(a4))->v) = (((((struct o0_float *)0xC1C5B80)->v)) * ((((struct o378C_float *)(a4))->v)));
    (((struct o44_float *)(a4))->v) = (((((struct o4_float *)0xC1C5B80)->v)) * ((((struct o378C_float *)(a4))->v)));
    (((struct o48_float *)(a4))->v) = (((((struct o8_float *)0xC1C5B80)->v)) * ((((struct o378C_float *)(a4))->v)));
    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
    return 0x16;
}

int FUN_0c069a04(int a4, int a5, int a6, int a7)
{
    int stk[2];
    register int t0;
    register int t2;
    register int t4;
    register int t5;
    register int t6;
    register int t7;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        t2 = FUN_0c07ebe6(a4);
        if (t2 != 0) {
            (((struct o3717_uchar *)(a4))->v) = 0x5;
            (((struct o3718_uchar *)(a4))->v) = 0x6;
            return ((int (*)(int, int, int))(FUN_0c085cac))(a4, 0x5, 0x6);
        }
        return t2;
    }
    if ((*(signed char *)((a4 + 0x371D))) == 2) {
        (((struct o3717_uchar *)(a4))->v) = 0x0;
        (((struct o3718_uchar *)(a4))->v) = 0x0;
        return ((int (*)(int, int, int, int))(FUN_0c085cac))(a4, 0x0, 0x0, a7);
    }
    t4 = FUN_0c07f18c(a4);
    if (t4 != 0) {
        t5 = FUN_0c07fea4(a4, 0x0);
        if (t5 == 0) {
            t6 = FUN_0c07d838(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4));
            if (t6 != 0) {
                return FUN_0c07d9dc(a4);
            }
            return t6;
        }
        return t5;
    }
    t7 = FUN_0c07d838(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4));
    if (t7 != 0) {
        return FUN_0c07d9dc(a4);
    }
    return t7;
}

int FUN_0c0ced88(int a4, int a5)
{
    register int t0;
    register int t4;

    t0 = FUN_0c03f444(0x9, 0x0, 0x0);
    t4 = t0;
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x4)) = 0xC0CED40;
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = 0x40;
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        (((struct o41C_uchar *)(t0))->v) = 0xCB;
        *(unsigned int *)((t0 + 0x10)) = a4;
        *(unsigned short *)((t0 + 0x1C)) = ((((struct o24_short *)(a4))->v));
        (((struct oA8_uchar *)(t0))->v) = 0x0;
        (((struct o41D_uchar *)(t0))->v) = 0x2;
        (((struct o422_uchar *)(t0))->v) = 0x0;
        FUN_0c187798();
        *(unsigned char *)((t0 + 0x2)) = a5;
        (((struct o48_float *)(t0))->v) = 0.5f;
        (((struct o44_float *)(t0))->v) = 0.5f;
        (((struct o40_float *)(t0))->v) = 0.5f;
        FUN_0c064d5a(t0, 0xC278A84);
        (((struct o12E_ushort *)(t0))->v) = 0x0;
        (((struct o12C_ushort *)(t0))->v) = 0x0;
        t4 = 0x12C;
    }
    return t4;
}

int FUN_0c0e360c(int a4)
{
    int t0;
    int t1;
    int t2;
    register float u0;
    register float u1;
    register float u2;

    FUN_0c0e340c(a4);
    if ((((((struct o2C_float *)(a4))->v)) > ((((struct o0_float *)0xC0E3714)->v))) && (t0 = *(short *)((a4 + 0x1C)), (t0 & 0x7) == 0)) {
        FUN_0c0e6dd8(a4, 0x0);
    }
    u2 = (((struct o2C_float *)(a4))->v);
    if ((u2 > ((((struct o4_float *)0xC0E3714)->v))) && ((u0 = (((struct o8_float *)0xC0E3714)->v), u0 > u2) && (t1 = *(short *)((a4 + 0x1C)), (t1 & 0x7) == 0))) {
        FUN_0c0e6dd8(a4, 0x1);
    }
    u0 = (((struct o2C_float *)(a4))->v);
    if ((u0 > ((((struct oC_float *)0xC0E3714)->v))) && ((u1 = (((struct o4_float *)0xC0E3714)->v), u1 > u0) && (t2 = *(short *)((a4 + 0x1C)), (t2 & 0x7) == 0))) {
        FUN_0c0e6dd8(a4, 0x2);
    }
    t0 = 0x16;
    if ((*(signed char *)((a4 + 0x15))) == (*(signed char *)((a4 + 0x16)))) {
        (((struct oA8_uchar *)(a4))->v) = 0x0;
        *(unsigned short *)((a4 + 0x1C)) = 0x0;
        (((struct o12E_ushort *)(a4))->v) = 0x0;
        t0 = 0x12E;
    }
    return t0;
}

int FUN_0c0f4448(int a4)
{
    register int t0;

    if ((*(signed char *)((a4 + 0x16))) == 0) {
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        FUN_0c037ac4(a4, 0x0, 0xFFFFFFFF, 0x3, 0x48);
        FUN_0c037ac4(a4, 0x1, 0xFFFFFFFF, 0x3, 0x48);
    }
    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        t0 = pl_no_ground(a4);
        if (t0 != 0) {
            (((struct o15_uchar *)(a4))->v) = 0x7;
            (((struct o16_uchar *)(a4))->v) = 0x0;
            t0 = 0x17;
        } else {
            (((struct o15_uchar *)(a4))->v) = 0x2;
            t0 = 0x16;
        }
        *(unsigned char *)((a4 + t0)) = 0x0;
    }
    return FUN_0c038362(a4);
}
