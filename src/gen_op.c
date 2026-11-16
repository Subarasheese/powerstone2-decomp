/* Straight-line functions with calls and guards (batch gen_op): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o131_uchar { char p[0x131]; unsigned char v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o17C_float { char p[0x17C]; float v; };
struct o18_uchar { char p[0x18]; unsigned char v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o3715_uchar { char p[0x3715]; unsigned char v; };
struct o3716_uchar { char p[0x3716]; unsigned char v; };
struct o3717_uchar { char p[0x3717]; unsigned char v; };
struct o371D_uchar { char p[0x371D]; unsigned char v; };
struct o3729_uchar { char p[0x3729]; unsigned char v; };
struct o374A_uchar { char p[0x374A]; unsigned char v; };
struct o374B_uchar { char p[0x374B]; unsigned char v; };
struct o376C_int { char p[0x376C]; int v; };
struct o3770_int { char p[0x3770]; int v; };
struct o3770_uint { char p[0x3770]; unsigned int v; };
struct o3790_float { char p[0x3790]; float v; };
struct o3810_float { char p[0x3810]; float v; };
struct o382A_ushort { char p[0x382A]; unsigned short v; };
struct o382E_ushort { char p[0x382E]; unsigned short v; };
struct o3830_ushort { char p[0x3830]; unsigned short v; };
struct o446_uchar { char p[0x446]; unsigned char v; };
struct o447_uchar { char p[0x447]; unsigned char v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
struct oE0_int { char p[0xE0]; int v; };
struct oE4_int { char p[0xE4]; int v; };
struct oF0_int { char p[0xF0]; int v; };
struct oF4_int { char p[0xF4]; int v; };
int FUN_0c037bf6(int, int, int);
int FUN_0c038362(int);
int FUN_0c067734(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c0819c2(int, int);
int FUN_0c081dfc(int);
int FUN_0c085eac(int, int);
int FUN_0c0c224c(int, int);
int FUN_0c0c3010(int, int, int);
float FUN_0c0e2340(int);
int FUN_0c187798(void);
int math_atan_angle16(float);
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c095a1c(int a4, int a5, int a6);
int FUN_0c0838ec(int a4, int a5);
int FUN_0c087ba4(int a4);

int FUN_0c095a1c(int a4, int a5, int a6)
{
    register int t0;
    register int t1;

    t0 = FUN_0c037bf6(a4, a5, a6);
    if ((unsigned char)t0 == 0) {
    } else {
        t0 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t0, 0x2, 0x10, (t0), 0x2, 0x10);
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
        (((struct o446_uchar *)(a4))->v) = 0x1;
        (((struct o447_uchar *)(a4))->v) = 0x1;
        *(unsigned int *)((a4 + 0x38)) = (unsigned short)((*(int *)((a4 + 0x38))) + 0x8000);
        FUN_0c0819c2(a4, 0x4000);
        (((struct o4C_float *)(a4))->v) = ((math_cos_angle16(((-(*(int *)((a4 + 0x38)))) + 0x14000))) * 10.0f);
        (((struct o50_float *)(a4))->v) = 0.0f;
        (((struct o54_float *)(a4))->v) = ((math_sin_angle16(((-(*(int *)((a4 + 0x38)))) + 0x14000))) * 10.0f);
        (((struct o60_float *)(a4))->v) = 0.0f;
        (((struct o5C_float *)(a4))->v) = 0.0f;
        (((struct o58_float *)(a4))->v) = 0.0f;
        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 200.0f);
        *(unsigned short *)((((((struct oF0_int *)(a4))->v)) + 0x6)) = 0x1F;
        *(unsigned short *)((((((struct oF4_int *)(a4))->v)) + 0x6)) = 0x1F;
        *(unsigned short *)((((((struct oE0_int *)(a4))->v)) + 0x6)) = 0x1F;
        *(unsigned short *)((((((struct oE4_int *)(a4))->v)) + 0x6)) = 0x1F;
        (((struct o88_float *)(((((struct oF0_int *)(a4))->v))))->v) = 1.0f;
        (((struct o8C_float *)(((((struct oF4_int *)(a4))->v))))->v) = 1.0f;
        (((struct o88_float *)(((((struct oE0_int *)(a4))->v))))->v) = 1.0f;
        (((struct o8C_float *)(((((struct oE4_int *)(a4))->v))))->v) = 1.0f;
        *(unsigned short *)((a4 + 0x1C)) = 0x7;
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
    }
    return FUN_0c038362(a4);
}

int FUN_0c0838ec(int a4, int a5)
{
    int stk[1];
    register int t4;
    register int t6;
    register int t15;
    register int t27;

    *(unsigned char *)(((int)stk + 0)) = a5;
    (((struct o3715_uchar *)(a4))->v) = 0x21;
    (((struct o14_uchar *)(a4))->v) = 0x2;
    (((struct o17_uchar *)(a4))->v) = 0x0;
    (((struct o16_uchar *)(a4))->v) = 0x0;
    (((struct o15_uchar *)(a4))->v) = 0x0;
    (((struct o371D_uchar *)(a4))->v) = 0x0;
    (((struct o3729_uchar *)(a4))->v) = (*(signed char *)(((int)stk + 0)));
    (((struct o3770_uint *)(a4))->v) = (((short)(*(signed char *)((a4 + 0x372A))) * (short)0x3938) + 0xC532498);
    FUN_0c067734(a4);
    (((struct o14_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x3;
    t4 = (((struct o3770_int *)(a4))->v);
    (((struct o18_uchar *)(t4))->v) = 0x0;
    (((struct o17_uchar *)(t4))->v) = 0x0;
    (((struct o16_uchar *)(t4))->v) = 0x0;
    (((struct o15_uchar *)(t4))->v) = 0x0;
    (((struct o3770_uint *)(((((struct o3770_int *)(a4))->v))))->v) = a4;
    t6 = (((struct o3770_int *)(a4))->v);
    (((struct o3716_uchar *)(t6))->v) = (*(signed char *)((t6 + 0x3715)));
    (((struct o3715_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x22;
    (((struct o3729_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = (*(signed char *)(((int)stk + 0)));
    (((struct o371D_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x0;
    (((struct o3717_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x63;
    FUN_0c067734(((((struct o3770_int *)(a4))->v)));
    t15 = *(signed char *)((a4 + 0x372A));
    *(unsigned char *)((t15 + 0xC471A98)) = ((*(signed char *)((t15 + 0xC471A98))) + 0x1);
    if ((*(signed char *)((a4 + 0x3729))) != 3) {
        FUN_0c081dfc(a4);
    }
    FUN_0c081dfc(((((struct o3770_int *)(a4))->v)));
    (((struct o374A_uchar *)(a4))->v) = 0x2;
    (((struct o382E_ushort *)(a4))->v) = 0x0;
    (((struct o374B_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x2;
    (((struct o3830_ushort *)(((((struct o3770_int *)(a4))->v))))->v) = 0x0;
    t27 = *(signed char *)((a4 + 0x3729));
    if (t27 != 0) {
        switch (t27) {
        case 1:
            break;
        case 2:
            (((struct o3729_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x2;
            break;
        case 3:
            (((struct o3729_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x3;
            break;
        }
    } else {
        (((struct o3729_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x0;
    }
    (((struct o382A_ushort *)(((((struct o3770_int *)(a4))->v))))->v) = 0x0;
    return 0x382A;
}

int FUN_0c087ba4(int a4)
{
    int stk[9];
    register float t22;
    register float u23;
    register float u26;

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
        FUN_0c187798();
        *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) - ((((struct o28_float *)(a4))->v)));
        *(float *)(((int)stk + 16)) = ((*(float *)(((int)stk + 16))) - ((((struct o2C_float *)(a4))->v)));
        *(float *)(((int)stk + 20)) = ((*(float *)(((int)stk + 20))) - ((((struct o30_float *)(a4))->v)));
        t22 = FUN_0c0e2340(((int)stk + 12));
        u23 = t22;
        if (200.0f > t22) {
            u23 = 200.0f;
        }
        u26 = u23;
        if (u23 == 0.0f) {
            u26 = 9.99999975e-05f;
        }
        (((struct o3790_float *)(a4))->v) = ((((((struct o2C_float *)(a4))->v)) - ((((struct o3810_float *)(a4))->v))) + -50.0f);
        *(unsigned int *)((a4 + 0x34)) = (math_atan_angle16((((((struct o3790_float *)(a4))->v)) / u26)));
    }
    (((struct o22_ushort *)(a4))->v) = 0x0;
    return 0x22;
}
