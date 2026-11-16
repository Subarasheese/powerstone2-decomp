/* Straight-line functions with calls and guards (batch gen_md): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_uchar { char p[0x10]; unsigned char v; };
struct o118_int { char p[0x118]; int v; };
struct o12C_ushort { char p[0x12C]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o168_float { char p[0x168]; float v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o30_float { char p[0x30]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o446_uchar { char p[0x446]; unsigned char v; };
struct o447_uchar { char p[0x447]; unsigned char v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o8C_int { char p[0x8C]; int v; };
struct o9_uchar { char p[0x9]; unsigned char v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC_float { char p[0xC]; float v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
int FUN_0c022050(void);
int FUN_0c0220c4(int, int, int);
int FUN_0c0222a4(int, int, int);
int FUN_0c02aa9e(void);
int FUN_0c03744a(int, int, int, int);
int FUN_0c037bf6(int);
int FUN_0c03f444(int, int, int);
int FUN_0c05258e(int, int, int, int, int);
int FUN_0c0573cc(int, int, int);
int FUN_0c05cf04(void);
int FUN_0c05d608(int, int);
int FUN_0c05d648(int);
int FUN_0c05d6a6(int);
int FUN_0c060c80(int, int, int);
int FUN_0c064d5a(int, int);
int FUN_0c070320(int);
int FUN_0c070980(int);
int FUN_0c07309e(int);
int FUN_0c07bc8c(int);
int FUN_0c07bcc2(int);
int FUN_0c07da48(int);
int FUN_0c07db58(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c085cac(int, int, int);
int FUN_0c0a34fc(int);
int FUN_0c0a36c8(int);
int FUN_0c0a3a58(int);
int FUN_0c0a45ac(int);
int FUN_0c0a46d4(int, int, int, int, int, int, int, int, int, int);
int FUN_0c0a6a9e(int);
int FUN_0c0a6eb0(int);
int FUN_0c0a7430(int, int);
int FUN_0c0a7a82(int, int, int, int, float, float, float, float, float, float, float);
int FUN_0c0a8002(int);
int FUN_0c0d0378(int, int);
int FUN_0c0e340c(int);
int FUN_0c0e5874(int);
int FUN_0c0e6aa2(int);
int FUN_0c0e6dd8(int, int);
int FUN_0c0f414e(int, int, int, int);
int FUN_0c12695c(int);
int FUN_0c158dc8(int, int, int, int, int, int, int, int);
int FUN_0c15a260(int, int, int, int, int, int, int, int);
int FUN_0c179ac0(void);
int FUN_0c1864e0(int, int);
int FUN_0c186740(int, int);
int FUN_0c187798(int, int, int);
int FUN_0c187d74(int, int);
float math_cos_angle16(int);
int math_vec3_accumulate(int, int);
int thunk_FUN_0c05abb2(int, int);
int FUN_0c027c84(void);
int FUN_0c05d800(int a4);
int FUN_0c061416(int a4, int a5, int a6, int a7);
int FUN_0c07bf00(int a4, int a5);
int FUN_0c090e0c(int a4);
int FUN_0c0a33a0(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10);
int FUN_0c0b9a42(int a4);
int FUN_0c0e34e0(int a4);
float FUN_0c0ecf3c(int a4, float f4);
int FUN_0c15739c(int a4);
int FUN_0c0240c4(void);


int FUN_0c05d800(int a4)
{
    register int t0;
    register int t1;

    if ((*(signed char *)0xC542254) != 0) {
        return 0x5C;
    }
    if ((*(signed char *)0xC542255) == 0) {
        t0 = *(int *)0xC542260;
        if ((t0 & 16) != 0) {
            if ((*(signed char *)0xC541F65) != 0) {
                return FUN_0c05d608(a4, 0x0);
            }
            t1 = *(int *)((0xC5423D0 + (((unsigned char)a4 << 2) << 2)));
            if (t1 != 0) {
                if (t1 != 1) {
                    if (t1 != 2) {
                        return t1;
                    }
                    return FUN_0c05d608(a4, 0x3);
                }
                t1 = FUN_0c05cf04();
                if ((unsigned int)t1 > (unsigned int)0x1) {
                    if ((unsigned int)(unsigned char)(*(signed char *)0xC542260) >= (unsigned int)0x55) {
                        if ((unsigned int)(unsigned char)(*(signed char *)0xC542260) < (unsigned int)0xAA) {
                            return FUN_0c05d648(a4);
                        }
                        return FUN_0c05d6a6(a4);
                    }
                    return FUN_0c05d608(a4, 0x2);
                }
                if ((unsigned int)(unsigned char)(*(signed char *)0xC542260) < (unsigned int)0x7F) {
                    return FUN_0c05d608(a4, 0x2);
                }
                return FUN_0c05d6a6(a4);
            }
            t1 = FUN_0c05cf04();
            if ((unsigned int)t1 > (unsigned int)0x1) {
                if ((unsigned int)(unsigned char)(*(signed char *)0xC542260) >= (unsigned int)0x55) {
                    if ((unsigned int)(unsigned char)(*(signed char *)0xC542260) < (unsigned int)0xAA) {
                        return FUN_0c05d648(a4);
                    }
                    return FUN_0c05d6a6(a4);
                }
                return FUN_0c05d608(a4, 0x1);
            }
            if ((unsigned int)(unsigned char)(*(signed char *)0xC542260) < (unsigned int)0x7F) {
                return FUN_0c05d608(a4, 0x1);
            }
            return FUN_0c05d6a6(a4);
        }
        return t0;
    }
    return 0x5D;
}

int FUN_0c061416(int a4, int a5, int a6, int a7)
{
    int stk[4];
    register int t1;
    register int t81;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u7;
    register float u8;
    register float u10;
    register float u19;
    register float u18;
    register float u54;
    register float u53;

    *(unsigned int *)(((int)stk + 0)) = a5;
    t1 = *(signed char *)((a4 + 0x0));
    t81 = (FUN_0c187798(a4, a5, a6));
    if (t1 == 0) {
        u2 = *(float *)((a7 + 0x0));
        u3 = *(float *)((a6 + 0x0));
        u4 = (((struct oC_float *)(a7))->v);
        u5 = (u2 - u3);
        if (0.0f > (u2 - u3)) {
            u5 = ((-u2) + u3);
        }
        u7 = (((struct o8_float *)(a7))->v);
        u8 = (((struct o8_float *)(a6))->v);
        u10 = (u7 - u8);
        if (0.0f > (u7 - u8)) {
            u10 = ((-u7) + u8);
        }
        t81 = 0x8;
        if (0.0f > (u4 - u5)) {
            t81 = 0xC0614B4;
            if ((((((struct o2C_float *)(a4))->v)) - ((((struct o168_float *)(a4))->v))) > 1000.0f) {
                u19 = (u4 - u5);
                if ((*(float *)((a7 + 0x0))) > (*(float *)((a6 + 0x0)))) {
                    u18 = (u4 - u5);
                    u18 = -u18;
                    u19 = u18;
                }
                *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) + u19);
                t81 = (FUN_0c060c80(a4, (((int)stk + 0) + 0x4), (*(int *)(((int)stk + 0)))));
            }
        }
        if (0.0f > (u4 - u10)) {
            t81 = 0xC0615FC;
            if ((((((struct o2C_float *)(a4))->v)) - ((((struct o168_float *)(a4))->v))) > (*(float *)0xC0615FC)) {
                u54 = (u4 - u10);
                if (((((struct o8_float *)(a7))->v)) > ((((struct o8_float *)(a6))->v))) {
                    u53 = (u4 - u10);
                    u53 = -u53;
                    u54 = u53;
                }
                *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) + u54);
                t81 = (FUN_0c060c80(a4, (((int)stk + 0) + 0x4), (*(int *)(((int)stk + 0)))));
            }
        }
    }
    return t81;
}

int FUN_0c07bf00(int a4, int a5)
{
    int stk[4];
    register int t2;
    register int t43;
    register int t5;
    register int t6;
    register int t8;
    register int t9;
    register int t13;
    register int t16;
    register int t19;
    register int t21;
    register int t22;
    register int t26;
    register int t28;

    *(unsigned int *)(((int)stk + 0)) = a5;
    *(unsigned char *)(((int)stk + 12)) = (*(signed char *)0xC1C5DA2);
    *(unsigned char *)(((int)stk + 8)) = (*(signed char *)0xC1C5DA3);
    t2 = FUN_0c07bc8c(a4);
    t43 = t2;
    if (t2 == 0) {
        t43 = 0x3720;
        if ((*(signed char *)((a4 + 0x3720))) == 0) {
            t5 = FUN_0c07bcc2(a4);
            *(unsigned int *)(((int)stk + 4)) = t5;
            t43 = t5;
            if (t5 != 99) {
                t6 = *(signed char *)((a4 + 0x1));
                *(unsigned char *)(((0x4 + ((((t6 << 1) + t6) << 2) + 0xC471A9C)) + 0x0)) = 0x1;
                t8 = *(signed char *)((a4 + 0x1));
                t9 = *(int *)(((int)stk + 0));
                *(unsigned char *)(((0x5 + ((((t8 << 1) + t8) << 2) + 0xC471A9C)) + 0x0)) = (*(signed char *)(((((t9 << 1) + (t9 << 2)) + 0xC25C160) + 0x0)));
                t13 = *(signed char *)((a4 + 0x1));
                *(unsigned char *)(((((((t13 << 1) + t13) << 2) + 0xC471A9C) + 0x6) + 0x0)) = (*(signed char *)(((((t9 << 1) + (t9 << 2)) + 0xC25C160) + 0x1)));
                t16 = *(signed char *)((a4 + 0x1));
                *(unsigned char *)(((((((t16 << 1) + t16) << 2) + 0xC471A9C) + 0x7) + 0x0)) = (*(signed char *)(((((t9 << 1) + (t9 << 2)) + 0xC25C160) + 0x2)));
                t19 = *(signed char *)((a4 + 0x1));
                *(unsigned char *)(((0x8 + ((((t19 << 1) + t19) << 2) + 0xC471A9C)) + 0x0)) = 0x0;
                t21 = *(short *)(((((t9 << 1) + (t9 << 2)) + 0xC25C160) + 0x4));
                t22 = t21;
                if ((int)t21 > (int)0xFF) {
                    t22 = 0xFF;
                }
                *(unsigned char *)(((((int)stk + 0) + 0x8) + 0x0)) = t22;
                FUN_0c0f414e((*(int *)(((int)stk + 4))), (((int)stk + 0) + 0xC), (((int)stk + 0) + 0x8), 0x1);
                t26 = *(signed char *)((a4 + 0x1));
                *(unsigned short *)((((((t26 << 1) + t26) << 2) + 0xC471A9C) + 0x0)) = 0x2;
                t28 = *(signed char *)((a4 + 0x1));
                t43 = *(short *)(((((t9 << 1) + (t9 << 2)) + 0xC25C160) + 0x4));
                *(unsigned short *)(((0xC471A9C + (((t28 << 1) + t28) << 2)) + 0x2)) = t43;
            }
        }
    }
    return t43;
}

int FUN_0c090e0c(int a4)
{
    int stk[5];
    register int t1;
    register int t2;
    register int t7;
    register int t16;
    register int t17;
    register int t23;
    register int t24;
    register int t25;
    register int t26;

    if ((*(signed char *)((a4 + 0x17))) == 0) {
        *(int *)((int)stk + 12) = 0x0;
        *(int *)((int)stk + 8) = 0x6;
        t1 = *(signed char *)((a4 + 0x1));
        *(unsigned int *)(((int)stk + 16)) = t1;
        t2 = t1;
        *(int *)((int)stk + 4) = t2;
        FUN_0c07e79c(a4, t1, 0x6, 0x0, t2, 0x6, 0x0);
        if ((*(signed char *)((a4 + 0x371A))) == 0) {
            *(int *)((int)stk + 12) = 0xC1C5F74;
            *(int *)((int)stk + 8) = 0xC1C5F68;
            *(int *)((int)stk + 4) = 0x52;
            *(int *)((int)stk + 0) = 0x3E;
            FUN_0c158dc8((*(signed char *)((a4 + 0x1))), 0x1, 0x5, 0x1, 0x3E, 0x52, 0xC1C5F68, 0xC1C5F74);
        } else {
            *(int *)((int)stk + 12) = 0xC1C5F8C;
            *(int *)((int)stk + 8) = 0xC1C5F80;
            *(int *)((int)stk + 4) = 0x52;
            *(int *)((int)stk + 0) = 0x3E;
            t7 = *(signed char *)((a4 + 0x1));
            (((struct o10_uchar *)(((int)stk + 0)))->v) = t7;
            FUN_0c15a260((*(signed char *)(((int)stk + 16))), 0x1, 0x5, (*(int *)((((((struct o8C_int *)((*(int *)((((signed char)t7 << 2) + 0xC4B40FC)))))->v)) + 0x0))), 0x3E, 0x52, 0xC1C5F80, 0xC1C5F8C);
        }
    } else {
        FUN_0c12695c(a4);
        *(int *)((int)stk + 12) = 0x1;
        *(int *)((int)stk + 8) = 0x6;
        t16 = *(signed char *)((a4 + 0x1));
        *(unsigned int *)(((int)stk + 16)) = t16;
        t17 = t16;
        *(int *)((int)stk + 4) = t17;
        FUN_0c07e79c(a4, t16, 0x6, 0x1, t17, 0x6, 0x1);
        (((struct o446_uchar *)(a4))->v) = 0x2;
        (((struct o447_uchar *)(a4))->v) = 0x3;
        (((struct o20_ushort *)(a4))->v) = 0x0;
        (((struct o22_ushort *)(a4))->v) = 0x0;
    }
    t23 = *(int *)(((0x118 + a4) + 0x4));
    t24 = (((struct o118_int *)(a4))->v);
    (((struct oA0_float *)(t23))->v) = 1.0f;
    (((struct o9C_float *)(t23))->v) = 1.0f;
    (((struct oA0_float *)(t24))->v) = 1.0f;
    (((struct o9C_float *)(t24))->v) = 1.0f;
    t25 = *(int *)(((0x118 + a4) + 0x4));
    t26 = (((struct o118_int *)(a4))->v);
    (((struct o98_float *)(t25))->v) = 1.0f;
    (((struct o98_float *)(t26))->v) = 1.0f;
    (((struct o94_float *)(t25))->v) = 1.0f;
    (((struct o94_float *)(t26))->v) = 1.0f;
    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    return 0x15;
}

int FUN_0c0a33a0(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10)
{
    int stk[2];
    register int t0;
    register int t55;

    t0 = *(signed char *)((a4 + 0x3732));
    switch (t0) {
    case 0:
        FUN_0c0a34fc(a4);
        FUN_0c07da48(a4);
        FUN_0c070320(a4);
        break;
    case 2:
        FUN_0c0a36c8(a4);
        break;
    case 3:
        FUN_0c0a3a58(a4);
        FUN_0c07da48(a4);
        FUN_0c070320(a4);
        break;
    case 4:
        FUN_0c070980(a4);
        break;
    case 5:
        FUN_0c0a45ac(a4);
        break;
    case 6:
        FUN_0c0a46d4(a4, a5, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20));
        FUN_0c07da48(a4);
        FUN_0c070320(a4);
        break;
    case 7:
        FUN_0c0a7a82(a4, a5, a6, a7, f4, f5, f6, f7, f8, f9, f10);
        break;
    case 8:
        FUN_0c0a8002(a4);
        break;
    case 9:
        FUN_0c0a6a9e(a4);
        break;
    case 12:
        FUN_0c0a7430(a4, a5);
        break;
    case 13:
        FUN_0c0a6eb0(a4);
        break;
    case 14:
        FUN_0c07309e(a4);
        break;
    }
    t55 = FUN_0c07ecc6(a4, 0x0, 0x0);
    if (t55 == 2) {
        return FUN_0c085cac(a4, 0x6, 0x0);
    }
    return t55;
}

int FUN_0c0b9a42(int a4)
{
    register int t0;
    register int t1;

    FUN_0c037bf6(a4);
    if (!(((((struct o50_float *)(a4))->v)) > 0.0f)) {
        t0 = FUN_0c07ecc6(a4, 0x0, 0x0);
        if (t0 != 0) {
            if (t0 != 1) {
                return FUN_0c085cac(a4, 0x6, 0x0);
            }
            FUN_0c05258e(0x2, 0x14, 0x100, 0x1E, 0x0);
            FUN_0c07db58(a4);
            t0 = *(signed char *)((a4 + 0x1));
            FUN_0c07e79c(a4, t0, 0x2, 0xD, (t0), 0x2, 0xD);
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

int FUN_0c0e34e0(int a4)
{
    int t0;
    int t1;
    register int t2;

    FUN_0c0e340c(a4);
    if ((*(short *)((a4 + 0x1C))) == 80) {
        thunk_FUN_0c05abb2(0x41, (a4 + 0x28));
    }
    if ((*(short *)((a4 + 0x1C))) == 40) {
        (((struct o54_float *)(a4))->v) = 0.0f;
        (((struct o4C_float *)(a4))->v) = 0.0f;
        (((struct o50_float *)(a4))->v) = -13.333333f;
        if ((*(signed char *)((a4 + 0x2))) == 3) {
            (((struct o22_ushort *)(a4))->v) = 0x0;
        }
    }
    if ((*(short *)((a4 + 0x1C))) == 10) {
        (((struct o54_float *)(a4))->v) = 0.0f;
        (((struct o50_float *)(a4))->v) = 0.0f;
        (((struct o4C_float *)(a4))->v) = 0.0f;
        t2 = *(signed char *)((a4 + 0x2));
        FUN_0c064d5a(a4, ((((((t2 - 1) << 1) + (t2 - 1)) << 2) + 0xC1CBBC0) + 0x24));
    }
    t2 = *(short *)((a4 + 0x1C));
    if ((int)t2 < (int)0x14) {
        *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) - 45);
    } else {
        if ((int)t2 < (int)0x3C) {
            *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) - 0xFFFFFF34);
        } else {
            t2 = *(short *)((a4 + 0x1C));
            if (((int)t2 > (int)0x50) && (((int)t2 < (int)0x96) && (t0 = *(short *)((a4 + 0x1C)), (t0 & 7) == 0))) {
                FUN_0c0e6dd8(a4, 0x0);
            }
        }
    }
    if (((int)(*(short *)((a4 + 0x1C))) < (int)0x32) && (t1 = *(short *)((a4 + 0x1C)), (t1 & 7) == 0)) {
        FUN_0c0e6dd8(a4, 0x0);
    }
    if ((*(short *)((a4 + 0x1C))) == 50) {
        FUN_0c0e6aa2(a4);
    }
    t0 = *(short *)((a4 + 0x1C));
    t1 = t0;
    if (t0 == 0) {
        t0 = *(signed char *)((a4 + 0x2));
        FUN_0c0d0378((*(int *)((((((t0 - 1) << 2) << 1) + 0xC1CBC68) + 0x0))), (*(int *)((((((t0 - 1) << 2) << 1) + 0xC1CBC68) + 0x4))));
        FUN_0c0e5874(a4);
        *(unsigned int *)((a4 + 0x34)) = 0x0;
        (((struct o2C_float *)(a4))->v) = 0.0f;
        t1 = 0x2C;
    }
    return t1;
}

float FUN_0c0ecf3c(int a4, float f4)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;
    register float u2;

    if ((*(signed char *)((a4 + 0x16))) == 0) {
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        (((struct o17_uchar *)(a4))->v) = 0x0;
        (((struct o12C_ushort *)(a4))->v) = 0xFFFFFFFF;
    } else {
        if ((*(signed char *)((a4 + 0x17))) == 0) {
            t0 = *(short *)(((0x41C + a4) + 0x6));
            *(unsigned short *)(((0x41C + a4) + 0x6)) = (t0 - 1);
            if ((int)(short)(t0 - 1) <= 0) {
                (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
            }
        } else {
            t0 = *(short *)(((0x41C + a4) + 0xA));
            *(unsigned short *)(((0x41C + a4) + 0xA)) = (t0 - 1);
            if ((int)(short)(t0 - 1) <= 0) {
                *(unsigned short *)(((0x41C + a4) + 0xA)) = 0x2;
                *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
            }
            if ((int)(*(short *)((a4 + 0x1E))) > (int)0x168) {
                *(unsigned short *)((a4 + 0x1E)) = 0x0;
                (((struct o17_uchar *)(a4))->v) = 0x0;
                *(unsigned short *)(((0x41C + a4) + 0x6)) = 0xA;
                t0 = FUN_0c179ac0();
                t1 = ((~(((~t0) + 0x1) & 0x7)) + 0x1);
                if ((int)t0 >= 0) {
                    t1 = (t0 & 0x7);
                }
                (((struct o15_uchar *)(a4))->v) = (*(int *)((0xC1CCF88 + (t1 << 2))));
                (((struct o16_uchar *)(a4))->v) = 0x0;
            }
            u0 = math_cos_angle16((int)(((float)(*(short *)((a4 + 0x1E))) * 65536.0f) / 360.0f));
            u1 = (((-u0) + 1.0f) / (1.0f + 1.0f));
            if (0.0f > (((-u0) + 1.0f) / (1.0f + 1.0f))) {
                u1 = 0.0f;
            }
            u2 = u1;
            if (u1 > 1.0f) {
                u2 = 1.0f;
            }
            (((struct o2C_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) - ((u2 * 50.0f)));
            u1 = ((-u0) + 1.0f);
        }
        u0 = u1;
    }
    return u0;
}

int FUN_0c15739c(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = FUN_0c03f444(0x8, 0x0, 0x3);
    t1 = t0;
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x4)) = 0xC156F78;
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned char *)((t0 + 0x2)) = a4;
        (((struct o28_float *)(t0))->v) = (((((struct o28_float *)(t0))->v)) / 320.0f);
        (((struct o2C_float *)(t0))->v) = (((((struct o2C_float *)(t0))->v)) / 320.0f);
        (((struct o30_float *)(t0))->v) = -2.0f;
        (((struct o44_float *)(t0))->v) = 0.00312500005f;
        (((struct o40_float *)(t0))->v) = 0.00312500005f;
        (((struct o48_float *)(t0))->v) = 1.56250002e-09f;
        (((struct oAC_ushort *)(t0))->v) = 0x1F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        t2 = (((struct oC4_int *)(t0))->v);
        FUN_0c03744a(t2, 0xD, 0x14, (*(int *)0xC4B40D4));
        *(unsigned char *)((t2 + 0x0)) = 0x1;
        *(unsigned short *)((t2 + 0x6)) = 0x1F;
        (((struct o6C_float *)(t2))->v) = 38.0f;
        (((struct o70_float *)(t2))->v) = -181.0f;
        (((struct o74_float *)(t2))->v) = -100000.0f;
        t2 = (((struct oC8_int *)(t0))->v);
        FUN_0c03744a(t2, 0xA, 0x10, (*(int *)0xC4B40D4));
        *(unsigned char *)((t2 + 0x0)) = 0x1;
        *(unsigned short *)((t2 + 0x6)) = 0x1F;
        (((struct o6C_float *)(t2))->v) = 38.0f;
        (((struct o70_float *)(t2))->v) = -181.0f;
        (((struct o74_float *)(t2))->v) = -200000.0f;
        t2 = (((struct oCC_int *)(t0))->v);
        FUN_0c03744a(t2, 0xB, 0x10, (*(int *)0xC4B40D4));
        *(unsigned char *)((t2 + 0x0)) = 0x1;
        *(unsigned short *)((t2 + 0x6)) = 0x1F;
        (((struct o6C_float *)(t2))->v) = 38.0f;
        (((struct o70_float *)(t2))->v) = -181.0f;
        (((struct o74_float *)(t2))->v) = -300000.0f;
        t1 = 0x74;
    }
    return t1;
}

