/* Straight-line functions with calls and guards (batch gen_ox): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o118_int { char p[0x118]; int v; };
struct o12E_short { char p[0x12E]; short v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17C_float { char p[0x17C]; float v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o3715_uchar { char p[0x3715]; unsigned char v; };
struct o371D_uchar { char p[0x371D]; unsigned char v; };
struct o3724_uchar { char p[0x3724]; unsigned char v; };
struct o374B_uchar { char p[0x374B]; unsigned char v; };
struct o3768_int { char p[0x3768]; int v; };
struct o376C_int { char p[0x376C]; int v; };
struct o3770_int { char p[0x3770]; int v; };
struct o37A4_float { char p[0x37A4]; float v; };
struct o38_short { char p[0x38]; short v; };
struct o38_ushort { char p[0x38]; unsigned short v; };
struct o3830_ushort { char p[0x3830]; unsigned short v; };
struct o386C_uchar { char p[0x386C]; unsigned char v; };
struct o3874_uchar { char p[0x3874]; unsigned char v; };
struct o387C_uchar { char p[0x387C]; unsigned char v; };
struct o3884_uchar { char p[0x3884]; unsigned char v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o6_uchar { char p[0x6]; unsigned char v; };
struct o60_float { char p[0x60]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
extern int FUN_0c037bf6();
int FUN_0c038362(int);
int FUN_0c059dae(int, int);
int FUN_0c059df2(int, int);
int FUN_0c059e60(int, int);
int FUN_0c073566(int, int);
int FUN_0c07363a(int, int);
int FUN_0c07d086(int, int, float);
int FUN_0c07d666(int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07ebb0(int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c081dfc(int, int, int, int);
int FUN_0c085256(int, int);
extern int FUN_0c085d0c();
int FUN_0c085eac(int, int);
int FUN_0c0b1cf2(void);
int FUN_0c0b23b4(int);
int FUN_0c0b29b8(int);
int FUN_0c0b2d30(int, int, int, int);
int FUN_0c0b43b4(int);
int FUN_0c0b47a0(int, int, int, int, int, int, int, int, int);
int FUN_0c0c224c(int, int);
int FUN_0c0c3010(int, int, int);
int FUN_0c0c30a8(int, int, int);
int FUN_0c0c418c(int);
int FUN_0c14f238(int, int, int, int);
int FUN_0c179ac0(void);
int FUN_0c1864e0(int, int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int thunk_FUN_0c0385e0(int);
int thunk_FUN_0c058310(int, int);
int FUN_0c085398(int a4, int a5, int a6, int a7);
int FUN_0c0221b0(void);
int FUN_0c0b8fe4(int a4, int a5, int a6, int a7);
int FUN_0c08752e(int a4);
int FUN_0c0b2c18(int a4, float f4);
int FUN_0c09a9f0(int a4, int a5, int a6, int a7);
int FUN_0c0c42c4(int a4);

int FUN_0c085398(int a4, int a5, int a6, int a7)
{
    int stk[1];
    register int t3;
    register int t40;
    register int t41;
    register int t42;
    register int t43;

    *(unsigned char *)(((int)stk + 0)) = a5;
    (((struct o3715_uchar *)(a4))->v) = 0x23;
    FUN_0c081dfc(a4, a5, a6, a7);
    (((struct o371D_uchar *)(a4))->v) = 0x0;
    (((struct o3724_uchar *)(a4))->v) = 0x0;
    if (((((struct o3768_int *)(a4))->v)) != 0) {
        t3 = FUN_0c0c30a8(((((struct o3768_int *)(a4))->v)), 0x3, a4);
        if (t3 != 0) {
            if ((*(signed char *)(((int)stk + 0))) == 0) {
                *(unsigned int *)((a4 + 0x38)) = (FUN_0c07d666((a4 + 0x28), (((((struct o3768_int *)(a4))->v)) + 0x28)));
            }
            (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(((((struct o3768_int *)(a4))->v))))->v)) - (((math_sin_angle16((*(int *)((a4 + 0x38))))) * 10.0f)));
            (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(((((struct o3768_int *)(a4))->v))))->v)) - (((math_cos_angle16((*(int *)((a4 + 0x38))))) * 10.0f)));
        }
    }
    (((struct o5C_float *)(a4))->v) = 0.0f;
    (((struct o60_float *)(a4))->v) = 0.0f;
    (((struct o58_float *)(a4))->v) = 0.0f;
    (((struct o50_float *)(a4))->v) = 0.0f;
    (((struct o54_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    if ((*(signed char *)(((int)stk + 0))) == 0) {
        FUN_0c059df2((*(signed char *)((a4 + 0x1))), 0xE);
        FUN_0c059e60(a4, 0x0);
        FUN_0c085256(a4, 0x0);
        (((struct o16_uchar *)(a4))->v) = 0x1;
        *(unsigned short *)((a4 + 0x1C)) = 0xF;
    } else {
        FUN_0c085256(a4, 0x1);
    }
    t40 = *(int *)(((0x118 + a4) + 0x4));
    t41 = (((struct o118_int *)(a4))->v);
    (((struct oA0_float *)(t40))->v) = 1.0f;
    (((struct o9C_float *)(t40))->v) = 1.0f;
    (((struct oA0_float *)(t41))->v) = 1.0f;
    (((struct o9C_float *)(t41))->v) = 1.0f;
    t42 = *(int *)(((0x118 + a4) + 0x4));
    t43 = (((struct o118_int *)(a4))->v);
    (((struct o98_float *)(t42))->v) = 1.0f;
    (((struct o98_float *)(t43))->v) = 1.0f;
    (((struct o94_float *)(t42))->v) = 1.0f;
    (((struct o94_float *)(t43))->v) = 1.0f;
    return 0x94;
}

int FUN_0c0221b0(void)
{
    int stk[1];
    register int t0;
    register int t1;
    register int t21;
    register int t34;

    (((struct o6_uchar *)0xC30B700)->v) = 0x0;
    (((struct o4_ushort *)0xC30B700)->v) = 0x0;
    (((struct o1_uchar *)0xC30B700)->v) = 0x0;
    (((struct o0_uchar *)0xC30B700)->v) = 0x0;
    t0 = 0x0;
    t1 = 0xC30A34C;
    for (;;) {
        FUN_0c1864e0((*(int *)0xC309994), t1, 0x1);
        t0 = (t0 + 0x1);
        t1 = (t1 + 0x1);
        if ((int)t0 >= (int)0x6) {
            break;
        }
    }
    FUN_0c1864e0((*(int *)0xC309994), 0xC30A3E6, 0x1);
    FUN_0c1864e0((*(int *)0xC309994), 0xC30A3E8, 0x1);
    FUN_0c1864e0((*(int *)0xC309994), 0xC30A3E9, 0x1);
    FUN_0c1864e0((*(int *)0xC309994), 0xC30A3EA, 0x1);
    FUN_0c1864e0((*(int *)0xC309994), 0xC30A3EB, 0x1);
    FUN_0c1864e0((*(int *)0xC309994), 0xC30A3EC, 0x1);
    FUN_0c1864e0((*(int *)0xC309994), 0xC30A3ED, 0x1);
    FUN_0c1864e0((*(int *)0xC309994), ((int)stk + 0), 0x1);
    t21 = 0x0;
    for (;;) {
        if ((int)t21 >= (int)(unsigned char)(*(signed char *)(((int)stk + 0)))) {
            break;
        }
        FUN_0c1864e0((*(int *)0xC309994), (t21 + 0xC30A354), 0x1);
        t21 = (t21 + 0x1);
    }
    *(unsigned char *)((t21 + 0xC30A354)) = 0x0;
    FUN_0c1864e0((*(int *)0xC309994), ((int)stk + 0), 0x1);
    FUN_0c1864e0((*(int *)0xC309994), 0xC309E06, 0x1);
    FUN_0c1864e0((*(int *)0xC309994), 0xC309E07, 0x1);
    (((struct o0_uchar *)0xC309E06)->v) = ((*(signed char *)0xC309E06) & 0x7F);
    (((struct o1_uchar *)0xC309E06)->v) = ((*(signed char *)0xC309E07) & 0x7F);
    t34 = 0x0;
    for (;;) {
        if ((int)t34 >= (int)((unsigned char)(*(signed char *)(((int)stk + 0))) - 2)) {
            break;
        }
        FUN_0c1864e0((*(int *)0xC309994), (t34 + 0xC30A366), 0x1);
        t34 = (t34 + 0x1);
    }
    *(unsigned char *)((t34 + 0xC30A366)) = 0x0;
    return 0xC30A366;
}

int FUN_0c0b8fe4(int a4, int a5, int a6, int a7)
{
    int stk[5];
    register int t7;
    register int t10;
    register int t13;

    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
    (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o54_float *)(a4))->v)));
    if (((((struct o3770_int *)(a4))->v)) != 0) {
        if ((*(short *)((a4 + 0x1C))) != 0) {
            t7 = FUN_0c037bf6(a4, a5, a6);
            if ((unsigned char)t7 == 0) {
                return (FUN_0c038362(a4));
            }
            return (FUN_0c085d0c(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28)));
        }
        t10 = (((struct o3770_int *)(a4))->v);
        (((struct o3830_ushort *)(t10))->v) = (((((struct o12E_short *)(t10))->v)) ^ 0xF);
        (((struct o374B_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x1;
        t13 = FUN_0c037bf6(a4, a5, a6);
        if ((unsigned char)t13 != 0) {
            FUN_0c059e60(a4, 0x2);
            thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC53258C))) + 0x28), ((int)stk + 0));
            FUN_0c14f238(((int)stk + 0), (a4 + 0x34), (*(signed char *)((a4 + 0x1))), 0x1);
            FUN_0c059dae((*(signed char *)((((((struct o3770_int *)(a4))->v)) + 0x1))), 0x3);
            FUN_0c073566(a4, 0x31);
            FUN_0c07363a(a4, 0x31);
            *(unsigned short *)((a4 + 0x1C)) = 0x1;
            return (FUN_0c085d0c(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28)));
        }
        FUN_0c038362(a4);
        return (FUN_0c07d086(a4, 0x0, 0.0f));
    }
    return (FUN_0c085d0c(a4, a5, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28)));
}

int FUN_0c08752e(int a4)
{
    int stk[8];
    register int t3;
    register int t5;
    register int t21;

    if (((((struct o17C_float *)(a4))->v)) > 0.0f) {
        t3 = 0xD1;
        if ((unsigned char)(*(signed char *)((a4 + 0x3721))) != 32) {
            t3 = 0x29;
        }
        t5 = t3;
        *(int *)((int)stk + 8) = t5;
        *(int *)((int)stk + 4) = 0x3;
        *(int *)((int)stk + 0) = 0xFFFFFFFF;
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, t3, 0xFFFFFFFF, 0x3, t5);
        FUN_0c0c224c(a4, ((((struct o376C_int *)(a4))->v)));
        FUN_0c085eac(a4, 0x6);
        *(unsigned short *)((a4 + 0x1C)) = 0x14;
        FUN_0c0c3010(((((struct o376C_int *)(a4))->v)), (*(signed char *)((a4 + 0x1))), 0x0);
        t21 = 0x0;
    } else {
        *(int *)((int)stk + 8) = 0x2A;
        *(int *)((int)stk + 4) = 0x3;
        *(int *)((int)stk + 0) = 0xFFFFFFFF;
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0x2A, 0xFFFFFFFF, 0x3, 0x2A);
        FUN_0c0c224c(a4, ((((struct o376C_int *)(a4))->v)));
        FUN_0c085eac(a4, 0x6);
        *(unsigned short *)((a4 + 0x1C)) = 0x14;
        FUN_0c0c3010(((((struct o376C_int *)(a4))->v)), (*(signed char *)((a4 + 0x1))), 0x1);
        t21 = 0x1;
    }
    (((struct o16_uchar *)(a4))->v) = t21;
    (((struct o22_ushort *)(a4))->v) = 0x0;
    (((struct o20_ushort *)(a4))->v) = 0x0;
    return 0x20;
}

int FUN_0c0b2c18(int a4, float f4)
{
    int stk[3];
    register float u13;
    register int t37;
    register int t44;

    if (!(((((struct o2C_float *)((0x38F8 + a4)))->v)) > 0.0f)) {
        (((struct o28_float *)((0x38F8 + a4)))->v) = (((((struct o28_float *)((0x38F8 + a4)))->v)) + 0.416666657f);
        if (((((struct o28_float *)((0x38F8 + a4)))->v)) > 200.0f) {
            (((struct o28_float *)((0x38F8 + a4)))->v) = 200.0f;
        }
    }
    (((struct o38_ushort *)((0x38F8 + a4)))->v) = (((((struct o38_short *)((0x38F8 + a4)))->v)) - 1);
    if ((int)((((struct o38_short *)((0x38F8 + a4)))->v)) < 0) {
        (((struct o38_ushort *)((0x38F8 + a4)))->v) = 0x12C;
        u13 = 2.29999995f;
        u13 = u13 + 0.100000001f * (float)(((unsigned int)(unsigned char)(*(signed char *)0xC542242) >> 2) & 0x7);
        if (u13 > ((((struct o30_float *)((0x38F8 + a4)))->v))) {
            (((struct o30_float *)((0x38F8 + a4)))->v) = (((((struct o30_float *)((0x38F8 + a4)))->v)) + (((*(float *)((0xC1C6B68 + ((FUN_0c0b1cf2()) << 2)))) + -1.0f) / 12.0f));
        }
    }
    t37 = FUN_0c07ecc6(a4, 0x0, 0x0);
    if (t37 != 0) {
        (((struct o37A4_float *)(a4))->v) = 0.0f;
    } else {
        FUN_0c07ebb0(a4);
    }
    FUN_0c0b29b8(a4);
    FUN_0c0b23b4(a4);
    t44 = *(signed char *)((a4 + 0x14));
    switch (t44) {
    case 0:
        FUN_0c0b2d30(a4, 0x0, 0x0, 0x0);
        break;
    case 1:
        FUN_0c0b43b4(a4);
        break;
    case 2:
        FUN_0c0b47a0(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16));
        break;
    }
    return thunk_FUN_0c0385e0(a4);
}

int FUN_0c09a9f0(int a4, int a5, int a6, int a7)
{
    int stk[2];
    register int t2;
    register int t9;
    register int t11;
    register int t12;
    register int t13;
    register int t14;
    register int t15;
    register int t25;

    if (((((struct o3770_int *)(a4))->v)) == 0) {
        return ((int (*)(int, int, int, int))(FUN_0c085d0c))(a4, a5, a6, a7);
    }
    t2 = ((int (*)(int, int, int))(FUN_0c037bf6))(((((struct o3770_int *)(a4))->v)), a5, a6);
    if ((unsigned char)t2 != 0) {
        *(unsigned short *)((a4 + 0x1C)) = 0x1;
        FUN_0c073566(a4, 0x31);
        FUN_0c07363a(a4, 0x31);
    }
    FUN_0c038362(((((struct o3770_int *)(a4))->v)));
    t9 = ((int (*)(int))(FUN_0c037bf6))(a4);
    if ((unsigned char)t9 != 0) {
        *(unsigned int *)((a4 + 0x38)) = (unsigned short)((*(int *)((a4 + 0x38))) + 0x8000);
        t11 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int, int))(FUN_0c085d0c))(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
        t12 = *(int *)(((0x118 + a4) + 0x4));
        t13 = (((struct o118_int *)(a4))->v);
        (((struct oA0_float *)(t12))->v) = 1.0f;
        (((struct o9C_float *)(t12))->v) = 1.0f;
        (((struct oA0_float *)(t13))->v) = 1.0f;
        (((struct o9C_float *)(t13))->v) = 1.0f;
        t14 = *(int *)(((0x118 + a4) + 0x4));
        t15 = (((struct o118_int *)(a4))->v);
        (((struct o98_float *)(t14))->v) = 1.0f;
        (((struct o98_float *)(t15))->v) = 1.0f;
        (((struct o94_float *)(t14))->v) = 1.0f;
        (((struct o94_float *)(t15))->v) = 1.0f;
    }
    FUN_0c038362(a4);
    t25 = 0x3770;
    if (((((struct o3770_int *)(a4))->v)) != 0) {
        (((struct o374B_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x1;
        t25 = 0x374B;
    }
    return t25;
}

int FUN_0c0c42c4(int a4)
{
    int t0;
    register int t1;

    t0 = (int)((unsigned int)(*(int *)0xC542260) % (unsigned int)0x5);
    if (t0 != 0) {
        if (t0 != 1) {
            if ((t0 != 2) && ((t0 != 3) && (t0 != 4))) {
            } else {
                (((struct o386C_uchar *)(a4))->v) = (*(signed char *)((0xC27337C + ((int)((int)(FUN_0c179ac0()) % (int)0x6)))));
                t0 = FUN_0c179ac0();
                t1 = ((~(((~t0) + 0x1) & 0x3)) + 0x1);
                if ((int)t0 >= 0) {
                    t1 = (t0 & 0x3);
                }
                (((struct o3874_uchar *)(a4))->v) = (*(signed char *)(((t1 + 0xC27337C) + 0x6)));
                t0 = FUN_0c179ac0();
                t1 = ((~(((~t0) + 0x1) & 0x3)) + 0x1);
                if ((int)t0 >= 0) {
                    t1 = (t0 & 0x3);
                }
                (((struct o387C_uchar *)(a4))->v) = (*(signed char *)(((t1 + 0xC27337C) + 0xC)));
                t0 = FUN_0c179ac0();
                t1 = ((~(((~t0) + 0x1) & 0x3)) + 0x1);
                if ((int)t0 >= 0) {
                    t1 = (t0 & 0x3);
                }
                (((struct o3884_uchar *)(a4))->v) = (*(signed char *)((((0xC27337C + t1) + 0x12) + 0x0)));
            }
        } else {
            (((struct o386C_uchar *)(a4))->v) = 0x5D;
            (((struct o3874_uchar *)(a4))->v) = 0x5E;
            (((struct o387C_uchar *)(a4))->v) = 0x5F;
            (((struct o3884_uchar *)(a4))->v) = 0x6E;
        }
    } else {
        (((struct o386C_uchar *)(a4))->v) = 0x59;
        (((struct o3874_uchar *)(a4))->v) = 0x5A;
        (((struct o387C_uchar *)(a4))->v) = 0x5B;
        (((struct o3884_uchar *)(a4))->v) = 0x5C;
    }
    return FUN_0c0c418c((*(signed char *)((a4 + 0x1))));
}
