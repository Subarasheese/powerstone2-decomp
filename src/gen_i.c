/* Straight-line functions with calls and guards (batch gen_i): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12C_ushort { char p[0x12C]; unsigned short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int);
int FUN_0c03f444(int, int, int);
extern int FUN_0c064d24();
int FUN_0c0cff96(int, int);
float FUN_0c0e2340(int);
int FUN_0c179ac0(void);
int FUN_0c17c130(int, int, int);
int FUN_0c187798(void);
int math_vec3_mul_xyz(int, float, float, float);
int thunk_FUN_0c058310(int, int);
int thunk_FUN_0c05abb2(int, int);
int FUN_0c0d9b62(int a4, int a5);
int FUN_0c13f5dc(int a4, int a5);
int FUN_0c0e60b0(int a4, float f4);
int FUN_0c0f7f52(int a4);
int FUN_0c14a7c0(int a4);

int FUN_0c0d9b62(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = FUN_0c03f444(0x2, 0x0, 0x1);
    t1 = t0;
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x4)) = 0xC0D9B1C;
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned char *)((t0 + 0x2)) = a5;
        *(unsigned int *)((t0 + 0x10)) = a4;
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        FUN_0c187798();
        FUN_0c187798();
        FUN_0c187798();
        (((struct oA8_uchar *)(t0))->v) = 0x0;
        if (a5 != 0) {
            if (a5 != 1) {
            } else {
                t2 = ((int (*)(int, int, int, int, int, int, int, int))(FUN_0c064d24))(t0, 0x2, 0xD, 0x1, 0x10, 0x0, 0x0, 0x0);
            }
        } else {
            t2 = ((int (*)(int, int, int, int))(FUN_0c064d24))(t0, 0x2, 0xC, 0x1);
        }
        (((struct o12E_ushort *)(t0))->v) = 0xFFFFFFFF;
        (((struct o12C_ushort *)(t0))->v) = 0xC00;
        (((struct o12A_ushort *)(t0))->v) = 0x0;
        t1 = 0x12A;
    }
    return t1;
}

int FUN_0c13f5dc(int a4, int a5)
{
    int stk[1];
    register int t2;
    register int t3;
    register int t19;

    *(unsigned char *)(((int)stk + 0)) = a5;
    t2 = FUN_0c037320(0x8, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
    t3 = FUN_0c03f444(0x5, 0x0, t2);
    t19 = t3;
    if (t3 != 0) {
        *(unsigned int *)((t3 + 0x4)) = 0xC13F696;
        *(unsigned char *)((t3 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t3 + 0x10)) = a4;
        FUN_0c03733c(t3, 0x8, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
        (((struct oA8_uchar *)(t3))->v) = 0x1;
        (((struct oAC_ushort *)(t3))->v) = 0x1F;
        (((struct oA9_uchar *)(t3))->v) = 0x21;
        thunk_FUN_0c058310(((*(int *)(((((*(int *)((((unsigned char)(*(signed char *)(((int)stk + 0))) << 2) + 0xC2A2224))) << 2) + (0xC53255C + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938))) + 0x0))) + 0x28), (t3 + 0x28));
        (((struct o48_float *)(t3))->v) = 1.0f;
        (((struct o44_float *)(t3))->v) = 1.0f;
        (((struct o40_float *)(t3))->v) = 1.0f;
        FUN_0c187798();
        (((struct o2C_float *)(t3))->v) = ((((struct o2C_float *)(a4))->v));
        if ((*(signed char *)(((int)stk + 0))) != 0) {
            *(unsigned int *)((t3 + 0x38)) = ((*(int *)((t3 + 0x38))) + 0x8000);
        }
        t19 = 0x2C;
    }
    return t19;
}

int FUN_0c0e60b0(int a4, float f4)
{
    int stk[6];
    register int t1;
    register int t4;
    register int t6;
    register float u7;
    register float u8;
    register int t19;
    register float u23;
    register float u10;
    register float u11;
    register float u12;
    register float u13;
    register float u26;
    register int t2;
    register int t3;
    register int t5;
    register int t20;
    register int t21;
    register int t22;
    register float u17;

    t1 = 0xC0E61DC;
    t4 = a4;
    t6 = 0x0;
    u7 = f4;
    u8 = ((((struct o0_float *)0xC0E61DC)->v));
    for (;;) {
        if ((int)t6 >= (int)0x4) {
            break;
        }
        t1 = 0x3714;
        t2 = (t6 * 0x3938);
        t2 = (t2 + 0xC532498);
        t3 = (*(signed char *)((t2 + t1)));
        t19 = t1;
        u23 = u7;
        if (t3 != 0) {
            t1 = 0x28;
            t3 = 0xC17C2A0;
            u10 = *(float *)((t2 + t1));
            t4 = ((int)stk + 0);
            u11 = *(float *)((a4 + t1));
            t1 = 0xC;
            *(float *)((((int)stk + 0) + t1)) = (u10 - u11);
            t1 = 0x30;
            u12 = *(float *)((t2 + t1));
            u13 = *(float *)((a4 + t1));
            t1 = 0x14;
            *(float *)((((int)stk + 0) + t1)) = (u12 - u13);
            t1 = 0x10;
            *(float *)((((int)stk + 0) + t1)) = 0.0f;
            t4 = (t4 + 0xC);
            u7 = (FUN_0c0e2340(t4));
            if (u8 > u7) {
                t3 = 0xC187798;
                u8 = u7;
                t2 = ((int)stk + 0);
                t1 = 0xC;
                t1 = (FUN_0c187798());
                t5 = t6;
                t19 = t1;
            } else {
                u17 = u7;
            }
            u23 = u17;
        } else {
            t20 = t2;
            t21 = t3;
            t22 = t4;
        }
        u7 = u23;
        t1 = t19;
        t2 = t20;
        t6 = (t6 + 0x1);
        t3 = t21;
        t4 = t22;
    }
    u26 = (((struct o10_float *)0xC0E61DC)->v);
    math_vec3_mul_xyz(((int)stk + 0), (u26 / u8), (u26 / u8), (u26 / u8));
    FUN_0c17c130((a4 + 0x28), (a4 + 0x28), ((int)stk + 0));
    (((struct o2C_float *)(a4))->v) = ((((struct o2C_float *)(((t5 * 0x3938) + 0xC532498)))->v));
    return 0x2C;
}

int FUN_0c0f7f52(int a4)
{
    register int t19;
    register float u28;

    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oBC_float *)(a4))->v) = 0.0f;
        (((struct oB8_float *)(a4))->v) = 0.0f;
        (((struct oB4_float *)(a4))->v) = 0.0f;
        (((struct o20_ushort *)(a4))->v) = 0x0;
        thunk_FUN_0c05abb2(0x3, 0x0);
        (((struct o8_uint *)0xC542440)->v) = 0xFF212B33;
        (((struct o4_uint *)0xC542440)->v) = 0xFF212B33;
        (((struct o0_uint *)0xC542440)->v) = 0xFF212B33;
    }
    FUN_0c0cff96((*(int *)((((((struct oC8_int *)(a4))->v)) + 0x8))), 0xC1FB2E0);
    t19 = *(signed char *)((a4 + 0x15));
    if (t19 != 0) {
        if (t19 != 1) {
            if (t19 != 2) {
                return t19;
            }
            if ((int)(unsigned char)(*(signed char *)0xC541F43) > (int)0x10) {
                return FUN_0c03f346(a4, 0x10);
            }
            return t19;
        }
        if ((int)(unsigned char)(*(signed char *)0xC541F43) >= (int)0x10) {
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            t19 = 0x15;
        }
        return t19;
    }
    (((struct oB4_float *)(a4))->v) = (((((struct oB4_float *)(a4))->v)) + 0.0500000007f);
    if (!(1.0f > ((((struct oB4_float *)(a4))->v)))) {
        (((struct oB4_float *)(a4))->v) = 1.0f;
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    }
    u28 = (((struct oB4_float *)(a4))->v);
    (((struct oBC_float *)(a4))->v) = u28;
    (((struct oB8_float *)(a4))->v) = u28;
    return 0xB8;
}

int FUN_0c14a7c0(int a4)
{
    register float u0;
    register int t1;
    register int t2;
    register int t14;
    register int t3;
    register int t4;

    u0 = *(float *)0xC14A8CC;
    t1 = 0x2;
    for (;;) {
        t2 = FUN_0c03f444(0x5, 0x0, 0x1);
        t14 = t2;
        if (t2 != 0) {
            t3 = FUN_0c179ac0();
            t4 = ((~(((~t3) + 0x1) & 0x1)) + 0x1);
            if ((int)t3 >= 0) {
                t4 = (t3 & 0x1);
            }
            FUN_0c03744a(((((struct oC4_int *)(t2))->v)), (t4 + 0x2), 0x9, (*(int *)(((((*(signed char *)((a4 + 0x1))) << 2) << 1) + 0xC4B40E0))));
            *(unsigned char *)((t2 + 0x1)) = (*(signed char *)((a4 + 0x1)));
            *(unsigned char *)((t2 + 0x2)) = 0xD;
            (((struct oAC_ushort *)(t2))->v) = 0xF;
            (((struct oA9_uchar *)(t2))->v) = 0x21;
            *(unsigned int *)((t2 + 0x4)) = 0xC14A878;
            (((struct o48_float *)(t2))->v) = 1.0f;
            (((struct o44_float *)(t2))->v) = 1.0f;
            (((struct o40_float *)(t2))->v) = 1.0f;
            FUN_0c187798();
            (((struct o30_float *)(t2))->v) = (((((struct o30_float *)(t2))->v)) + u0);
            t14 = 0x30;
        }
        t1 = (t1 - 0x1);
        if (t1 == 0) {
            break;
        }
    }
    return t14;
}
