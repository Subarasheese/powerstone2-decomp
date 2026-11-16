/* Straight-line functions with calls and guards (batch gen_oq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o18_uchar { char p[0x18]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o3715_uchar { char p[0x3715]; unsigned char v; };
struct o3716_uchar { char p[0x3716]; unsigned char v; };
struct o3717_uchar { char p[0x3717]; unsigned char v; };
struct o374A_uchar { char p[0x374A]; unsigned char v; };
struct o374B_uchar { char p[0x374B]; unsigned char v; };
struct o3764_int { char p[0x3764]; int v; };
struct o3770_int { char p[0x3770]; int v; };
struct o37C0_float { char p[0x37C0]; float v; };
struct o44_float { char p[0x44]; float v; };
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
int FUN_0c05258e(int, int, int, int, int);
int FUN_0c059dae(int, int);
int FUN_0c059df2(int, int);
int FUN_0c059e60(int, int);
int FUN_0c059f20(int, int);
int FUN_0c073566(int, int);
int FUN_0c07bdd0(int, int);
int FUN_0c07d666(int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07e868(int, int, int, int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c081dfc(int, int, int, int);
int FUN_0c085d0c(int, int, int, int);
int FUN_0c12ebe4(int, int);
int FUN_0c14fed8(int, int, float, float);
int FUN_0c179ac0(void);
int FUN_0c187798(void);
float math_cos_angle16(int);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int FUN_0c084a3a(int a4, int a5, int a6, int a7);
int FUN_0c08585c(int a4, int a5, int a6, int a7);
int FUN_0c09e6f0(int a4);

int FUN_0c084a3a(int a4, int a5, int a6, int a7)
{
    int stk[8];
    register int t1;
    register int t3;
    register int t9;
    register int t10;
    register int t15;
    register float u19;
    register int t20;
    register float u24;

    if (((((struct o3764_int *)(a4))->v)) == 0) {
        return FUN_0c085d0c(a4, a5, a6, a7);
    }
    (((struct o3715_uchar *)(a4))->v) = 0x1C;
    t1 = ((int (*)(int, int, int, int))(FUN_0c081dfc))(a4, a5, a6, a7);
    t3 = ((int (*)(int))(FUN_0c081dfc))(((((struct o3764_int *)(a4))->v)));
    *(int *)((int)stk + 8) = 0x26;
    *(int *)((int)stk + 4) = 0x2;
    *(int *)((int)stk + 0) = 0xFFFFFFFF;
    FUN_0c07e79c(a4, 0xFFFFFFFF, 0x2, 0x26, 0xFFFFFFFF, 0x2, 0x26);
    *(unsigned int *)((a4 + 0x38)) = (FUN_0c07d666((a4 + 0x28), (((((struct o3764_int *)(a4))->v)) + 0x28)));
    (((struct o15_uchar *)(a4))->v) = 0x0;
    (((struct o16_uchar *)(a4))->v) = 0x0;
    FUN_0c059e60(a4, 0xC);
    (((struct o14_uchar *)(((((struct o3764_int *)(a4))->v))))->v) = 0x0;
    t9 = (((struct o3764_int *)(a4))->v);
    (((struct o17_uchar *)(t9))->v) = 0x0;
    (((struct o16_uchar *)(t9))->v) = 0x0;
    t10 = (((struct o3764_int *)(a4))->v);
    (((struct o3716_uchar *)(t10))->v) = (*(signed char *)((t10 + 0x3715)));
    (((struct o3715_uchar *)(((((struct o3764_int *)(a4))->v))))->v) = 0x1C;
    *(unsigned int *)((((((struct o3764_int *)(a4))->v)) + 0x38)) = (unsigned short)((*(int *)((a4 + 0x38))) + 0x8000);
    t15 = (((struct o3764_int *)(a4))->v);
    u19 = ((((struct o28_float *)(a4))->v));
    u19 = u19 + 120.0f * (math_sin_angle16((*(int *)((a4 + 0x38)))));
    (((struct o28_float *)(t15))->v) = u19;
    t20 = (((struct o3764_int *)(a4))->v);
    u24 = ((((struct o30_float *)(a4))->v));
    u24 = u24 + 120.0f * (math_cos_angle16((*(int *)((a4 + 0x38)))));
    (((struct o30_float *)(t20))->v) = u24;
    FUN_0c07e868(((((struct o3764_int *)(a4))->v)), 0x0, 0x0, 0x0);
    *(unsigned short *)((((((struct o3764_int *)(a4))->v)) + 0x1C)) = 0x0;
    (((struct o44_float *)(((((struct o3764_int *)(a4))->v))))->v) = 0.699999988f;
    (((struct o3717_uchar *)(((((struct o3764_int *)(a4))->v))))->v) = 0x63;
    (((struct o15_uchar *)(((((struct o3764_int *)(a4))->v))))->v) = 0x1;
    (((struct o16_uchar *)(((((struct o3764_int *)(a4))->v))))->v) = 0x0;
    return 0x16;
}

int FUN_0c08585c(int a4, int a5, int a6, int a7)
{
    int stk[4];
    register int t1;
    register int t30;
    register int t31;
    register int t32;
    register int t33;

    *(unsigned char *)(((int)stk + 12)) = a5;
    (((struct o3715_uchar *)(a4))->v) = 0x26;
    (((struct o5C_float *)(a4))->v) = 0.0f;
    (((struct o60_float *)(a4))->v) = 0.0f;
    (((struct o58_float *)(a4))->v) = 0.0f;
    (((struct o50_float *)(a4))->v) = 0.0f;
    (((struct o54_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    FUN_0c081dfc(a4, a5, a6, a7);
    t1 = *(signed char *)(((int)stk + 12));
    switch (t1) {
    case 0:
        *(int *)((int)stk + 8) = 0x4;
        *(int *)((int)stk + 4) = 0x2;
        *(int *)((int)stk + 0) = 0xFFFFFFFF;
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x2, 0x4, 0xFFFFFFFF, 0x2, 0x4);
        FUN_0c059df2((*(signed char *)((a4 + 0x1))), 0xE);
        FUN_0c059e60(a4, 0x0);
        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 1.0f);
        break;
    case 1:
        FUN_0c059df2((*(signed char *)((a4 + 0x1))), 0xE);
        *(int *)((int)stk + 8) = 0x5;
        *(int *)((int)stk + 4) = 0x2;
        *(int *)((int)stk + 0) = 0xFFFFFFFF;
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x2, 0x5, 0xFFFFFFFF, 0x2, 0x5);
        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 1.0f);
        (((struct o15_uchar *)(a4))->v) = 0x1;
        break;
    case 2:
        *(int *)((int)stk + 8) = 0x4;
        *(int *)((int)stk + 4) = 0x2;
        *(int *)((int)stk + 0) = 0xFFFFFFFF;
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x2, 0x4, 0xFFFFFFFF, 0x2, 0x4);
        FUN_0c059df2((*(signed char *)((a4 + 0x1))), 0xE);
        FUN_0c059e60(a4, 0x0);
        (((struct o2C_float *)(a4))->v) = (((((struct o37C0_float *)(a4))->v)) + 3.0f);
        break;
    }
    t30 = *(int *)(((0x118 + a4) + 0x4));
    t31 = (((struct o118_int *)(a4))->v);
    (((struct oA0_float *)(t30))->v) = 1.0f;
    (((struct o9C_float *)(t30))->v) = 1.0f;
    (((struct oA0_float *)(t31))->v) = 1.0f;
    (((struct o9C_float *)(t31))->v) = 1.0f;
    t32 = *(int *)(((0x118 + a4) + 0x4));
    t33 = (((struct o118_int *)(a4))->v);
    (((struct o98_float *)(t32))->v) = 1.0f;
    (((struct o98_float *)(t33))->v) = 1.0f;
    (((struct o94_float *)(t32))->v) = 1.0f;
    (((struct o94_float *)(t33))->v) = 1.0f;
    return 0x94;
}

int FUN_0c09e6f0(int a4)
{
    register int t0;
    register int t1;

    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    *(volatile int *)((a4 + 0x3770));
    FUN_0c187798();
    (((struct o374B_uchar *)(a4))->v) = 0x2;
    (((struct o374B_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x2;
    (((struct o374A_uchar *)(a4))->v) = 0x1;
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    if ((short)(t0 - 1) == 0) {
        t0 = FUN_0c179ac0();
        t1 = ((~(((~t0) + 0x1) & 0x1)) + 0x1);
        if ((int)t0 >= 0) {
            t1 = (t0 & 0x1);
        }
        *(unsigned short *)((a4 + 0x1C)) = (t1 + 0x1);
        FUN_0c12ebe4(a4, 0x1);
    }
    t0 = 0x50;
    if (0.0f > ((((struct o50_float *)(a4))->v))) {
        t1 = FUN_0c07ecc6(a4, 0x0, 0x0);
        t0 = t1;
        if (t1 != 0) {
            FUN_0c059dae((*(signed char *)((((((struct o3770_int *)(a4))->v)) + 0x1))), 0x3);
            FUN_0c073566(a4, 0x33);
            FUN_0c05258e(0x2, 0x14, 0x100, 0x1E, 0x0);
            FUN_0c12ebe4(a4, 0x2);
            FUN_0c12ebe4(a4, 0x3);
            FUN_0c12ebe4(a4, 0x7);
            FUN_0c14fed8((*(signed char *)((a4 + 0x1))), (a4 + 0x28), 1.0f, 200.0f);
            FUN_0c059f20((*(signed char *)((a4 + 0x1))), (*(signed char *)((a4 + 0x135))));
            FUN_0c059e60(a4, 0x2);
            FUN_0c059e60(a4, 0x24);
            FUN_0c07bdd0(a4, 0x24);
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
            t1 = (((struct o3770_int *)(a4))->v);
            (((struct o18_uchar *)(t1))->v) = ((*(signed char *)((t1 + 0x18))) + 0x1);
            *(unsigned short *)((a4 + 0x1C)) = 0x1;
            *(unsigned short *)((a4 + 0x1E)) = 0x27;
            t0 = 0x27;
        }
    }
    return t0;
}
