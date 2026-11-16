/* Straight-line functions with calls and guards (batch gen_on): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o10_uchar { char p[0x10]; unsigned char v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o18_uchar { char p[0x18]; unsigned char v; };
struct o19_uchar { char p[0x19]; unsigned char v; };
struct o26A0_uint { char p[0x26A0]; unsigned int v; };
struct o26A4_uint { char p[0x26A4]; unsigned int v; };
struct o28_float { char p[0x28]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o3715_uchar { char p[0x3715]; unsigned char v; };
struct o3716_uchar { char p[0x3716]; unsigned char v; };
struct o3717_uchar { char p[0x3717]; unsigned char v; };
struct o371D_uchar { char p[0x371D]; unsigned char v; };
struct o3729_uchar { char p[0x3729]; unsigned char v; };
struct o3732_uchar { char p[0x3732]; unsigned char v; };
struct o3739_uchar { char p[0x3739]; unsigned char v; };
struct o3749_uchar { char p[0x3749]; unsigned char v; };
struct o374B_uchar { char p[0x374B]; unsigned char v; };
struct o3760_int { char p[0x3760]; int v; };
struct o3768_int { char p[0x3768]; int v; };
struct o3770_int { char p[0x3770]; int v; };
struct o3770_uint { char p[0x3770]; unsigned int v; };
struct o3790_float { char p[0x3790]; float v; };
struct o37A0_float { char p[0x37A0]; float v; };
struct o37C4_float { char p[0x37C4]; float v; };
struct o37CC_float { char p[0x37CC]; float v; };
struct o382A_ushort { char p[0x382A]; unsigned short v; };
struct o3830_ushort { char p[0x3830]; unsigned short v; };
struct o4_float { char p[0x4]; float v; };
struct o445_uchar { char p[0x445]; unsigned char v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4E0_uint { char p[0x4E0]; unsigned int v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o584_float { char p[0x584]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o8C_int { char p[0x8C]; int v; };
int FUN_0c037bf6(int, int, int);
int FUN_0c07c4b0(int, int);
int FUN_0c07d030(int, int);
int FUN_0c07d666(int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c0819c2(int, int);
int FUN_0c081dfc(int, int, int, int);
int FUN_0c081ee8(int, int);
int FUN_0c083384(int, int);
int FUN_0c085d0c(int, int, int, int);
int FUN_0c125704(int, int, int);
int FUN_0c15a260(int, int, int, int, int, int, int, int);
int FUN_0c187798(void);
float math_cos_angle16(int);
float math_signed_sqrt(float);
float math_sin_angle16(int);
int FUN_0c083440(int a4, int a5, int a6, int a7);
int FUN_0c0b2888(int a4, int a5, int a6, int a7);
int FUN_0c08fff0(int a4, int a5, int a6);
int FUN_0c084bbc(int a4, int a5, int a6, int a7);

int FUN_0c083440(int a4, int a5, int a6, int a7)
{
    int stk[9];
    register int t0;
    register int t10;
    register float u11;
    register float u12;
    register float u13;
    register float u14;
    register float u17;
    register int t27;
    register int t28;
    int t1;

    (((struct o3715_uchar *)(a4))->v) = 0x12;
    t0 = (((struct o3768_int *)(a4))->v);
    if ((t0 != 0) && (t1 = *(signed char *)((t0 + 0x41C)), (unsigned char)t1 == 0xC4)) {
        FUN_0c081dfc(a4, a5, a6, a7);
        FUN_0c07c4b0((*(signed char *)((a4 + 0x1))), 0x5);
        FUN_0c081ee8(a4, ((((struct o3768_int *)(a4))->v)));
        FUN_0c083384(a4, (0x37C4 + a4));
        (((struct o50_float *)(a4))->v) = ((((struct o0_float *)0xC0835FC)->v));
        (((struct o5C_float *)(a4))->v) = ((((struct o4_float *)0xC0835FC)->v));
        t10 = FUN_0c07d666((a4 + 0x28), (0x37C4 + a4));
        u11 = (((struct o37C4_float *)(a4))->v);
        u12 = (((struct o28_float *)(a4))->v);
        u13 = (((struct o37CC_float *)(a4))->v);
        u14 = (((struct o30_float *)(a4))->v);
        u17 = ((u14 - u13) * (u14 - u13));
        u17 = u17 + ((u12 - u11)) * ((u12 - u11));
        (((struct o3790_float *)(a4))->v) = (math_signed_sqrt(u17));
        *(unsigned short *)((a4 + 0x1C)) = (int)((((((struct o50_float *)(a4))->v)) / ((((struct o5C_float *)(a4))->v))) * (1.0f + 1.0f));
        (((struct o3790_float *)(a4))->v) = (((((struct o3790_float *)(a4))->v)) / (float)(*(short *)((a4 + 0x1C))));
        (((struct o60_float *)(a4))->v) = 0.0f;
        (((struct o58_float *)(a4))->v) = 0.0f;
        (((struct o4C_float *)(a4))->v) = (-((math_sin_angle16(t10)) * ((((struct o3790_float *)(a4))->v))));
        (((struct o54_float *)(a4))->v) = (-((math_cos_angle16(t10)) * ((((struct o3790_float *)(a4))->v))));
        *(int *)((int)stk + 8) = 0x8;
        *(int *)((int)stk + 4) = 0x0;
        t27 = *(signed char *)((a4 + 0x1));
        *(unsigned int *)(((int)stk + 12)) = t27;
        t28 = t27;
        *(int *)((int)stk + 0) = t28;
        FUN_0c07e79c(a4, t27, 0x0, 0x8, t28, 0x0, 0x8);
        (((struct o3830_ushort *)(a4))->v) = 0x0;
        (((struct o374B_uchar *)(a4))->v) = 0x1;
        return 0x374B;
    }
    return FUN_0c085d0c(a4, a5, a6, a7);
}

int FUN_0c0b2888(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    (((struct o14_uchar *)(a4))->v) = 0x0;
    (((struct o3715_uchar *)(a4))->v) = a5;
    (((struct o19_uchar *)(a4))->v) = 0x0;
    (((struct o18_uchar *)(a4))->v) = 0x0;
    (((struct o17_uchar *)(a4))->v) = 0x0;
    (((struct o16_uchar *)(a4))->v) = 0x0;
    (((struct o3716_uchar *)(a4))->v) = (*(signed char *)((a4 + 0x3715)));
    (((struct o3715_uchar *)(a4))->v) = a5;
    (((struct o37A0_float *)(a4))->v) = -2.0f;
    if (a5 != 7) {
        if (a5 != 32) {
            if (a5 != 33) {
                (((struct o584_float *)(a4))->v) = 1.0f;
                (((struct o4E0_uint *)(a4))->v) = 0x0;
                (((struct o26A4_uint *)(a4))->v) = 0x0;
                (((struct o26A0_uint *)(a4))->v) = 0x0;
                t0 = 0x26A0;
            } else {
                (((struct o14_uchar *)(a4))->v) = 0x2;
                (((struct o371D_uchar *)(a4))->v) = 0x0;
                (((struct o3729_uchar *)(a4))->v) = a6;
                (((struct o3770_uint *)(a4))->v) = (((short)(*(signed char *)((a4 + 0x372A))) * (short)0x3938) + 0xC532498);
                (((struct o14_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x3;
                t1 = (((struct o3770_int *)(a4))->v);
                (((struct o18_uchar *)(t1))->v) = 0x0;
                (((struct o17_uchar *)(t1))->v) = 0x0;
                (((struct o16_uchar *)(t1))->v) = 0x0;
                (((struct o15_uchar *)(t1))->v) = 0x0;
                (((struct o3770_uint *)(((((struct o3770_int *)(a4))->v))))->v) = a4;
                t1 = (((struct o3770_int *)(a4))->v);
                (((struct o3716_uchar *)(t1))->v) = (*(signed char *)((t1 + 0x3715)));
                (((struct o3715_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x22;
                (((struct o3729_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = a6;
                (((struct o371D_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x0;
                (((struct o3717_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x63;
                t1 = *(signed char *)((a4 + 0x372A));
                *(unsigned char *)((t1 + 0xC471A98)) = ((*(signed char *)((t1 + 0xC471A98))) + 0x1);
                FUN_0c081dfc(((((struct o3770_int *)(a4))->v)), a5, a6, a7);
                (((struct o382A_ushort *)(((((struct o3770_int *)(a4))->v))))->v) = 0x0;
                t0 = 0x382A;
            }
            t1 = t0;
        } else {
            (((struct o14_uchar *)(a4))->v) = 0x1;
            (((struct o3739_uchar *)(a4))->v) = a6;
            (((struct o445_uchar *)(a4))->v) = 0x1;
            (((struct o584_float *)(a4))->v) = 1.0f;
            (((struct o4E0_uint *)(a4))->v) = 0x0;
            (((struct o26A4_uint *)(a4))->v) = 0x0;
            (((struct o26A0_uint *)(a4))->v) = 0x0;
            t1 = 0x26A0;
        }
        t0 = t1;
    } else {
        (((struct o3732_uchar *)(a4))->v) = a6;
        (((struct o584_float *)(a4))->v) = 1.0f;
        (((struct o4E0_uint *)(a4))->v) = 0x0;
        (((struct o26A4_uint *)(a4))->v) = 0x0;
        (((struct o26A0_uint *)(a4))->v) = 0x0;
        t0 = 0x26A0;
    }
    return t0;
}

int FUN_0c08fff0(int a4, int a5, int a6)
{
    int stk[5];
    register int t2;
    register int t3;
    register int t4;
    register int t11;
    register int t20;
    register int t28;

    if ((int)(*(short *)((a4 + 0x1E))) > 0) {
        *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) - 1);
    } else {
        t2 = FUN_0c037bf6(a4, a5, a6);
        if ((unsigned char)t2 != 0) {
            *(int *)((int)stk + 12) = 0x1B;
            *(int *)((int)stk + 8) = 0x1;
            t3 = *(signed char *)((a4 + 0x1));
            *(unsigned int *)(((int)stk + 16)) = t3;
            t4 = t3;
            *(int *)((int)stk + 4) = t4;
            FUN_0c07e79c(a4, t3, 0x1, 0x1B, t4, 0x1, 0x1B);
        }
    }
    t11 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t11 - 1);
    if ((int)(short)(t11 - 1) <= 0) {
        (((struct o4C_float *)(a4))->v) = ((math_cos_angle16(((-(*(int *)((a4 + 0x38)))) + 0x14000))) * 6.0f);
        (((struct o54_float *)(a4))->v) = ((math_sin_angle16(((-(*(int *)((a4 + 0x38)))) + 0x14000))) * 6.0f);
        (((struct o60_float *)(a4))->v) = 0.0f;
        (((struct o58_float *)(a4))->v) = 0.0f;
        (((struct o50_float *)(a4))->v) = 35.0f;
        (((struct o5C_float *)(a4))->v) = -1.0f;
        *(unsigned short *)((a4 + 0x1C)) = 0x0;
        (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
        *(unsigned int *)((a4 + 0x10)) = ((((struct o3760_int *)(a4))->v));
        FUN_0c07d030(a4, 0x1);
        FUN_0c125704(a4, 0x24, 0xA);
        *(int *)((int)stk + 12) = 0xC1C5F74;
        *(int *)((int)stk + 8) = 0xC1C5F68;
        *(int *)((int)stk + 4) = 0x50;
        *(int *)((int)stk + 0) = 0x24;
        t20 = *(signed char *)((a4 + 0x1));
        (((struct o10_uchar *)(((int)stk + 0)))->v) = t20;
        FUN_0c15a260((*(signed char *)(((int)stk + 16))), 0x1, 0x5, (*(int *)((((((struct o8C_int *)((*(int *)((((signed char)t20 << 2) + 0xC4B40FC)))))->v)) + 0x0))), 0x24, 0x50, 0xC1C5F68, 0xC1C5F74);
        t28 = 0x0;
    } else {
        FUN_0c0819c2(a4, 0x71C);
        t28 = 0x1;
    }
    (((struct o3749_uchar *)(a4))->v) = t28;
    return 0x3749;
}

int FUN_0c084bbc(int a4, int a5, int a6, int a7)
{
    int stk[4];
    register int t0;
    register int t7;
    register float u8;
    register float u9;
    register float u10;
    register float u11;
    register float u14;
    register int t24;
    register int t25;
    register int t1;
    register int t2;

    *(unsigned char *)(((int)stk + 12)) = a5;
    (((struct o3715_uchar *)(a4))->v) = 0x1E;
    t0 = (((struct o3768_int *)(a4))->v);
    if ((t0 != 0) && ((t1 = *(signed char *)((t0 + 0x41C)), (unsigned char)t1 == 72) || (t2 = *(signed char *)((t0 + 0x41C)), (unsigned char)t2 == 70))) {
        FUN_0c081dfc(a4, a5, a6, a7);
        (((struct o15_uchar *)(a4))->v) = (*(signed char *)(((int)stk + 12)));
        *(volatile int *)((a4 + 0x3768));
        FUN_0c187798();
        (((struct o50_float *)(a4))->v) = 30.0f;
        (((struct o5C_float *)(a4))->v) = -2.5f;
        t7 = FUN_0c07d666((a4 + 0x28), (0x37C4 + a4));
        u8 = (((struct o37C4_float *)(a4))->v);
        u9 = (((struct o28_float *)(a4))->v);
        u10 = (((struct o37CC_float *)(a4))->v);
        u11 = (((struct o30_float *)(a4))->v);
        u14 = ((u11 - u10) * (u11 - u10));
        u14 = u14 + ((u9 - u8)) * ((u9 - u8));
        (((struct o3790_float *)(a4))->v) = (math_signed_sqrt(u14));
        *(unsigned short *)((a4 + 0x1C)) = (int)((((((struct o50_float *)(a4))->v)) / ((((struct o5C_float *)(a4))->v))) * (1.0f + 1.0f));
        (((struct o3790_float *)(a4))->v) = (((((struct o3790_float *)(a4))->v)) / (float)(*(short *)((a4 + 0x1C))));
        (((struct o60_float *)(a4))->v) = 0.0f;
        (((struct o58_float *)(a4))->v) = 0.0f;
        (((struct o4C_float *)(a4))->v) = (-((math_sin_angle16(t7)) * ((((struct o3790_float *)(a4))->v))));
        (((struct o54_float *)(a4))->v) = (-((math_cos_angle16(t7)) * ((((struct o3790_float *)(a4))->v))));
        *(int *)((int)stk + 8) = 0x8;
        *(int *)((int)stk + 4) = 0x0;
        t24 = *(signed char *)((a4 + 0x1));
        *(unsigned int *)(((int)stk + 12)) = t24;
        t25 = t24;
        *(int *)((int)stk + 0) = t25;
        return (FUN_0c07e79c(a4, t24, 0x0, 0x8, t25, 0x0, 0x8));
    }
    return FUN_0c085d0c(a4, a5, a6, a7);
}
