/* Straight-line functions with calls and guards (batch gen_mn): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o12C_ushort { char p[0x12C]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o168_float { char p[0x168]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c037498(int, int, int, int);
int FUN_0c03f346(int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c07e2f4(int, int);
int FUN_0c07e3ae(int, int);
int FUN_0c179ac0(void);
int FUN_0c187798(void);
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c13f98c(int a4, int a5, int a6);
int FUN_0c142868(int a4);
int FUN_0c164d20(int a4, int a5);
int FUN_0c16be0a(int a4, int a5, int a6, int a7);
int FUN_0c1350d4(int a4, int a5);

int FUN_0c13f98c(int a4, int a5, int a6)
{
    register int t0;
    int t1;
    register int t2;
    register int t3;

    *(volatile int *)((a4 + 0x10));
    t3 = ((int (*)(int, int, int))(FUN_0c187798))(a4, a5, a6);
    *(volatile int *)((t0 + 0x10));
    t3 = ((int (*)(int))(FUN_0c187798))(t0);
    t0 = *(int *)((t2 + 0x10));
    if (((*(signed char *)((t0 + 0x3715))) == 26) && (t1 = *(signed char *)((t0 + 0x17)), t1 == 2)) {
        t1 = *(signed char *)((t2 + 0x14));
        if (t1 != 0) {
            if (t1 != 1) {
                return FUN_0c03f346(t2, t0);
            }
        } else {
            *(unsigned short *)((((((struct oC4_int *)(t2))->v)) + 0x6)) = 0x1F;
            t1 = (((struct oC4_int *)(t2))->v);
            (((struct o70_float *)(t1))->v) = (((((struct o70_float *)(t1))->v)) + 100.0f);
            t1 = (((struct oC4_int *)(t2))->v);
            (((struct o74_float *)(t1))->v) = (((((struct o74_float *)(t1))->v)) + 150.0f);
            (((struct o84_float *)(((((struct oC4_int *)(t2))->v))))->v) = 1.0f;
            (((struct o88_float *)(((((struct oC4_int *)(t2))->v))))->v) = 1.0f;
            (((struct o8C_float *)(((((struct oC4_int *)(t2))->v))))->v) = 0.100000001f;
            *(unsigned short *)((t2 + 0x1C)) = 0x1E;
            (((struct o14_uchar *)(t2))->v) = ((*(signed char *)((t2 + 0x14))) + 0x1);
        }
        t1 = (((struct oC4_int *)(t2))->v);
        (((struct o8C_float *)(t1))->v) = (((((struct o8C_float *)(t1))->v)) + 0.100000001f);
        t1 = *(short *)((t2 + 0x1C));
        *(unsigned short *)((t2 + 0x1C)) = (t1 - 1);
        t3 = (short)(t1 - 1);
        if ((short)(t1 - 1) == 0) {
            (((struct o14_uchar *)(t2))->v) = ((*(signed char *)((t2 + 0x14))) + 0x1);
            t3 = 0x14;
        }
        return t3;
    }
    return FUN_0c03f346(t2, t0);
}

int FUN_0c142868(int a4)
{
    register int t2;
    register float u3;
    register int t4;
    register int t5;
    register int t21;
    register int t16;
    register int t17;

    t2 = FUN_0c037320(0x2, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
    u3 = *(float *)0xC1429BC;
    t4 = 0x0;
    for (;;) {
        t5 = FUN_0c03f444(0x5, 0x0, t2);
        t21 = t5;
        if (t5 != 0) {
            FUN_0c03733c(t5, 0x2, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
            (((struct oAC_ushort *)(t5))->v) = 0x1F;
            (((struct oA9_uchar *)(t5))->v) = (*(signed char *)((a4 + 0xA9)));
            *(unsigned short *)((((((struct oC4_int *)(t5))->v)) + 0x6)) = 0xF;
            *(unsigned int *)((t5 + 0x4)) = 0xC142960;
            *(unsigned char *)((t5 + 0x1)) = (*(signed char *)((a4 + 0x1)));
            *(unsigned char *)((t5 + 0x2)) = t4;
            *(unsigned int *)((t5 + 0x10)) = a4;
            FUN_0c187798();
            FUN_0c187798();
            (((struct o2C_float *)(t5))->v) = ((((struct o168_float *)(a4))->v));
            FUN_0c187798();
            t16 = *(int *)(((t4 << 2) + 0xC202500));
            t17 = *(int *)((t5 + 0x38));
            *(unsigned int *)((t5 + 0x38)) = (t17 + (t16 + 0x4000));
            (((struct o54_float *)(t5))->v) = ((math_cos_angle16(((t17 + (t16 + 0x4000)) + 0x4000))) * u3);
            (((struct o4C_float *)(t5))->v) = ((math_sin_angle16(((*(int *)((t5 + 0x38))) + 0x4000))) * u3);
            (((struct o50_float *)(t5))->v) = 0.0f;
            t21 = 0x50;
        }
        t4 = (t4 + 0x1);
        if ((int)t4 >= (int)0x2) {
            break;
        }
    }
    return t21;
}

int FUN_0c164d20(int a4, int a5)
{
    int stk[10];
    register int t0;
    register int t25;
    register int t4;
    register int t5;
    register int t7;
    register int t8;
    register float t12;
    register float u15;
    register float u22;

    *(unsigned char *)(((int)stk + 20)) = a4;
    *(unsigned int *)(((int)stk + 16)) = a5;
    t0 = FUN_0c03f444(0x1, 0x0, 0x2);
    t25 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((int)stk + 20)));
        *(unsigned int *)((t0 + 0x4)) = 0xC164A28;
        *(unsigned char *)((t0 + 0x2)) = 0x0;
        *(unsigned short *)((t0 + 0x1C)) = 0x0;
        *(volatile int *)(((int)stk + 16));
        FUN_0c187798();
        *(unsigned int *)(((int)stk + 16)) = (((int)stk + 16) + 0xC);
        t4 = FUN_0c179ac0();
        t5 = ((~(((~t4) + 0x1) & 0xF)) + 0x1);
        if ((int)t4 >= 0) {
            t5 = (t4 & 0xF);
        }
        *(unsigned int *)(((((int)stk + 16) + 0xC) + 0x0)) = (((t5 << 8) << 2) << 2);
        *(unsigned int *)(((int)stk + 20)) = (((int)stk + 16) + 0x10);
        t7 = FUN_0c179ac0();
        t8 = ((~(((~t7) + 0x1) & 0xF)) + 0x1);
        if ((int)t7 >= 0) {
            t8 = (t7 & 0xF);
        }
        *(unsigned int *)(((((int)stk + 16) + 0x10) + 0x0)) = (((t8 << 8) << 2) << 2);
        *(int *)((int)stk + 12) = (t0 + 0x28);
        t12 = math_cos_angle16((*(int *)(((*(int *)(((int)stk + 16))) + 0x0))));
        *(unsigned int *)(((int)stk + 24)) = 0xC2A32F4;
        u15 = ((((struct o28_float *)(t0))->v));
        u15 = u15 + (*(float *)0xC2A32F4) * t12;
        (((struct o28_float *)(t0))->v) = u15;
        *(int *)((int)stk + 12) = (t0 + 0x2C);
        u22 = ((((struct o2C_float *)(t0))->v));
        u22 = u22 + (*(float *)(((*(int *)(((int)stk + 24))) + 0x0))) * (math_sin_angle16((*(int *)(((*(int *)(((int)stk + 20))) + 0x0)))));
        (((struct o2C_float *)(t0))->v) = u22;
        FUN_0c07e3ae(t0, 0x74);
        *(int *)((int)stk + 12) = 0x0;
        *(int *)((int)stk + 8) = 0x0;
        *(int *)((int)stk + 4) = 0xFFFFFFFF;
        *(int *)((int)stk + 0) = 0x100;
        t25 = (FUN_0c064d24(t0, 0x3, 0x6, 0x0, 0x100, 0xFFFFFFFF, 0x0, 0x0));
    }
    return t25;
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
        t1 = FUN_0c03f444(0x1, 0x0, 0x1);
        t2 = 0x0;
        if (t1 != 0) {
            FUN_0c07e3ae(t1, 0x9C);
            FUN_0c064d24(t1, 0x3, 0x4F, 0x0, 0x100, (t0), 0x0, 0xFFFFFEF0);
            FUN_0c187798();
            FUN_0c187798();
            u0 = *(float *)0xC16BF34;
            (((struct o4C_float *)(t1))->v) = (u0 * (math_sin_angle16((*(int *)((a6 + 0x4))))));
            (((struct o54_float *)(t1))->v) = (u0 * (math_cos_angle16((*(int *)((a6 + 0x4))))));
            (((struct o50_float *)(t1))->v) = 0.0f;
            (((struct o5C_float *)(t1))->v) = 0.0f;
            FUN_0c187798();
            t2 = t1;
        }
        t0 = t2;
    } else {
        t1 = FUN_0c03f444(0x5, 0x0, 0x2);
        t2 = 0x0;
        if (t1 != 0) {
            FUN_0c187798();
            FUN_0c187798();
            u0 = *(float *)0xC16BF34;
            (((struct o4C_float *)(t1))->v) = (u0 * (math_sin_angle16((*(int *)((a6 + 0x4))))));
            (((struct o54_float *)(t1))->v) = (u0 * (math_cos_angle16((*(int *)((a6 + 0x4))))));
            (((struct o50_float *)(t1))->v) = 0.0f;
            (((struct o5C_float *)(t1))->v) = 0.0f;
            FUN_0c187798();
            t2 = t1;
        }
        t0 = t2;
    }
    return t0;
}

int FUN_0c1350d4(int a4, int a5)
{
    int stk[5];
    register int t2;
    register int t3;
    register int t20;
    register float u7;
    register int t16;
    register int t17;

    *(unsigned char *)(((int)stk + 16)) = a5;
    t2 = FUN_0c037320(0x5, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
    t3 = FUN_0c03f444(0x1, 0x0, t2);
    t20 = t3;
    if (t3 != 0) {
        *(unsigned char *)((t3 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned int *)((t3 + 0x4)) = 0xC1351CA;
        *(unsigned int *)((t3 + 0x10)) = a4;
        *(unsigned char *)((t3 + 0x2)) = (*(signed char *)(((int)stk + 16)));
        FUN_0c187798();
        u7 = *(float *)0xC135254;
        (((struct o48_float *)(t3))->v) = u7;
        (((struct o44_float *)(t3))->v) = u7;
        (((struct o40_float *)(t3))->v) = u7;
        FUN_0c187798();
        (((struct o2C_float *)(t3))->v) = (((((struct o2C_float *)(t3))->v)) - 50.0f);
        (((struct oA8_uchar *)(t3))->v) = 0x1;
        (((struct oAC_ushort *)(t3))->v) = 0x1F;
        (((struct oA9_uchar *)(t3))->v) = 0x21;
        FUN_0c037498(((((struct oC4_int *)(t3))->v)), 0x0, 0x5, (*(int *)((((*(signed char *)((t3 + 0x1))) << 2) + 0xC4B40FC))));
        *(unsigned char *)((((((struct oC4_int *)(t3))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(t3))->v)) + 0x6)) = 0x1F;
        t16 = (((struct oC4_int *)(t3))->v);
        (((struct o8C_float *)(t16))->v) = 1.0f;
        (((struct o88_float *)(t16))->v) = 1.0f;
        (((struct o84_float *)(t16))->v) = 1.0f;
        *(int *)((int)stk + 12) = 0xF0;
        *(int *)((int)stk + 8) = 0x0;
        t17 = *(signed char *)((t3 + 0x1));
        *(int *)((int)stk + 4) = (~((int)0x1 << (int)t17));
        *(int *)((int)stk + 0) = 0x100;
        FUN_0c064d24(t3, 0x1, 0x35, 0x2, 0x100, (~((int)0x1 << (int)t17)), 0x0, 0xF0);
        FUN_0c07e2f4(t3, 0x65);
        (((struct o12C_ushort *)(t3))->v) = 0x0;
        t20 = 0x12C;
    }
    return t20;
}
