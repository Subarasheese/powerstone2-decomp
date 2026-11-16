/* Straight-line functions with calls and guards (batch gen_ka): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o10_uchar { char p[0x10]; unsigned char v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12E_short { char p[0x12E]; short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o131_uchar { char p[0x131]; unsigned char v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_short { char p[0x24]; short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o41C_short { char p[0x41C]; short v; };
struct o44_float { char p[0x44]; float v; };
struct o446_uchar { char p[0x446]; unsigned char v; };
struct o447_uchar { char p[0x447]; unsigned char v; };
struct o48_float { char p[0x48]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o70_float { char p[0x70]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o8C_int { char p[0x8C]; int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC_int { char p[0xC]; int v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c037bf6(int);
extern int FUN_0c03f346();
int FUN_0c03f444(int, int, int);
int FUN_0c0582de(int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c064d5a(int, int);
int FUN_0c070320(int);
int FUN_0c073ed0(int, int, int);
int FUN_0c07d15c(int);
int FUN_0c07d1fc(int);
int FUN_0c07da48(int);
int FUN_0c07e2f4(int, int);
int FUN_0c07e420(int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c085cac(int, int, int);
int FUN_0c085d0c(int);
int FUN_0c158dc8(int, int, int, int, int, int, int, int);
int FUN_0c15a260(int, int, int, int, int, int, int, int);
int FUN_0c179ac0(void);
int FUN_0c17c450(int);
extern int FUN_0c187798();
int math_mat_get_translate(int, int);
int math_vec3_accumulate(int, int);
int math_vec3_mul_xyz(int, float, float, float);
int FUN_0c16c730(void);
int FUN_0c08f50c(int a4);
int FUN_0c0e8190(int a4, int a5, int a6, int a7);
int FUN_0c140ef0(int a4, int a5);
int FUN_0c14349c(int a4, int a5, int a6, int a7);

int FUN_0c16c730(void)
{
    register int t0;
    register int t4;
    register int t35;
    register float u1;

    t0 = 0x0;
    for (;;) {
        FUN_0c037320(0x4A, ((((struct oC_int *)0xC4B40CC)->v)));
        t4 = FUN_0c03f444(0x6, 0x0, 0x3);
        t35 = t4;
        if (t4 != 0) {
            *(unsigned int *)((t4 + 0x4)) = 0xC16C8E8;
            *(unsigned char *)((t4 + 0x1)) = 0xFFFFFFFF;
            *(unsigned char *)((t4 + 0x2)) = t0;
            (((struct oA8_uchar *)(t4))->v) = 0x0;
            (((struct oAC_ushort *)(t4))->v) = 0x1F;
            (((struct oA9_uchar *)(t4))->v) = 0x21;
            FUN_0c03744a(((((struct oC4_int *)(t4))->v)), 0x0, 0x4A, ((((struct oC_int *)0xC4B40CC)->v)));
            *(unsigned short *)((((((struct oC4_int *)(t4))->v)) + 0x6)) = 0xF;
            FUN_0c03744a(((((struct oC8_int *)(t4))->v)), 0x0, 0x54, ((((struct o0_int *)0xC4B40CC)->v)));
            *(unsigned short *)((((((struct oC8_int *)(t4))->v)) + 0x6)) = 0x20F;
            (((struct o68_uint *)((*(int *)(((0xC4 + t4) + 0x4)))))->v) = (((((struct oC4_int *)(t4))->v)) + 0x28);
            FUN_0c03744a(((((struct oCC_int *)(t4))->v)), 0x1, 0x54, ((((struct o0_int *)0xC4B40CC)->v)));
            *(unsigned short *)((((((struct oCC_int *)(t4))->v)) + 0x6)) = 0xF;
            (((struct o68_uint *)((*(int *)(((0xC4 + t4) + 0x8)))))->v) = (((((struct oC4_int *)(t4))->v)) + 0x28);
            (((struct o48_float *)(t4))->v) = (1.0f + 1.0f);
            (((struct o44_float *)(t4))->v) = (1.0f + 1.0f);
            (((struct o40_float *)(t4))->v) = (1.0f + 1.0f);
            (((struct o2C_float *)(t4))->v) = ((*(float *)0xC54109C) + 4000.0f);
            u1 = ((*(float *)(((((*(signed char *)0xC542237) << 2) << 1) + 0xC203CC8))) + (*(float *)(((((t0 << 2) << 1) + 0xC203BC8) + 0x0))));
            u1 = (u1 + (float)((int)((int)(FUN_0c179ac0()) % (int)0xC9)));
            u1 = (u1 + -100.0f);
            (((struct o28_float *)(t4))->v) = u1;
            u1 = ((*(float *)(((((*(signed char *)0xC542237) << 2) << 1) + 0xC203CCC))) + ((((struct o4_float *)((((t0 << 2) << 1) + 0xC203BC8)))->v)));
            u1 = (u1 + (float)((int)((int)(FUN_0c179ac0()) % (int)0xC9)));
            u1 = (u1 + -100.0f);
            (((struct o30_float *)(t4))->v) = u1;
            t35 = 0x30;
        }
        t0 = (t0 + 0x1);
        if ((int)t0 < (int)0x20) continue;
        break;
    }
    return t35;
}

int FUN_0c08f50c(int a4)
{
    int stk[5];
    int t9;
    register int t13;
    register int t14;
    register int t15;
    register int t21;
    register int t29;
    register int t30;
    register int t27;

    if ((*(short *)((a4 + 0x1C))) != 0) {
        math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
        math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
    }
    FUN_0c07da48(a4);
    FUN_0c070320(a4);
    t9 = FUN_0c07ecc6(a4, 0x0, 0x0);
    if ((t9 != 0) && (t9 != 1)) {
        return FUN_0c085cac(a4, 0x6, 0x0);
    }
    if ((*(signed char *)((a4 + 0x131))) != 0) {
        t13 = FUN_0c07d1fc(a4);
        if (t13 != 0) {
            (((struct o131_uchar *)(a4))->v) = 0x0;
            *(int *)((int)stk + 12) = 0x8;
            *(int *)((int)stk + 8) = 0x2;
            t14 = *(signed char *)((a4 + 0x1));
            *(unsigned int *)(((int)stk + 16)) = t14;
            t15 = t14;
            *(int *)((int)stk + 4) = t15;
            FUN_0c07e79c(a4, t14, 0x2, 0x8, t15, 0x2, 0x8);
            (((struct o446_uchar *)(a4))->v) = 0x0;
            (((struct o447_uchar *)(a4))->v) = 0x0;
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
            if ((*(signed char *)((a4 + 0x371A))) == 0) {
                *(int *)((int)stk + 12) = 0xC1C5F74;
                *(int *)((int)stk + 8) = 0xC1C5F68;
                *(int *)((int)stk + 4) = 0x52;
                *(int *)((int)stk + 0) = 0x30;
                t27 = (FUN_0c158dc8((*(signed char *)((a4 + 0x1))), 0x1, 0x5, 0x1, 0x30, 0x52, 0xC1C5F68, 0xC1C5F74));
            } else {
                *(int *)((int)stk + 12) = 0xC1C5F8C;
                *(int *)((int)stk + 8) = 0xC1C5F80;
                *(int *)((int)stk + 4) = 0x52;
                *(int *)((int)stk + 0) = 0x30;
                t21 = *(signed char *)((a4 + 0x1));
                (((struct o10_uchar *)(((int)stk + 0)))->v) = t21;
                t27 = (FUN_0c15a260((*(signed char *)(((int)stk + 16))), 0x1, 0x5, (*(int *)((((((struct o8C_int *)((*(int *)((((signed char)t21 << 2) + 0xC4B40FC)))))->v)) + 0x0))), 0x30, 0x52, 0xC1C5F80, 0xC1C5F8C));
            }
            return t27;
        }
        t29 = FUN_0c037bf6(a4);
        if ((unsigned char)t29 != 0) {
            return FUN_0c085d0c(a4);
        }
        return (unsigned char)t29;
    }
    t30 = FUN_0c037bf6(a4);
    if ((unsigned char)t30 != 0) {
        return FUN_0c085d0c(a4);
    }
    return (unsigned char)t30;
}


int FUN_0c140ef0(int a4, int a5)
{
    int stk[1];
    register int t2;
    register int t3;
    register int t40;
    register int t22;
    register int t34;

    *(unsigned char *)(((int)stk + 0)) = a5;
    t2 = FUN_0c037320(0x5, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
    t3 = FUN_0c03f444(0x5, 0x0, (t2 + 0x2));
    t40 = t3;
    if (t3 == 0) {
    } else {
        *(unsigned int *)((t3 + 0x4)) = 0xC141090;
        *(unsigned char *)((t3 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned int *)((t3 + 0x10)) = a4;
        FUN_0c03733c(t3, 0x5, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
        (((struct oA8_uchar *)(t3))->v) = 0x1;
        (((struct oAC_ushort *)(t3))->v) = 0x1F;
        (((struct oA9_uchar *)(t3))->v) = 0x21;
        FUN_0c187798();
        (((struct o2C_float *)(t3))->v) = (((((struct o2C_float *)(t3))->v)) + 100.0f);
        FUN_0c187798();
        (((struct o48_float *)(t3))->v) = 1.0f;
        (((struct o44_float *)(t3))->v) = 1.0f;
        (((struct o40_float *)(t3))->v) = 1.0f;
        *(unsigned char *)((t3 + 0x2)) = (*(signed char *)(((int)stk + 0)));
        *(unsigned char *)((((((struct oC4_int *)(t3))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(t3))->v)) + 0x6)) = 0xF;
        FUN_0c03744a(((((struct oC8_int *)(t3))->v)), 0x0, 0xF, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
        *(unsigned char *)((((((struct oC8_int *)(t3))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC8_int *)(t3))->v)) + 0x6)) = 0x41F;
        (((struct o68_uint *)((*(int *)(((0xC4 + t3) + 0x4)))))->v) = (((((struct oC4_int *)(t3))->v)) + 0x28);
        t22 = (((struct oC8_int *)(t3))->v);
        (((struct o70_float *)(t22))->v) = (((((struct o70_float *)(t22))->v)) + 220.0f);
        (((struct o88_float *)(((((struct oC8_int *)(t3))->v))))->v) = 0.699999988f;
        (((struct o14_float *)(((((struct oC8_int *)(t3))->v))))->v) = 0.0f;
        FUN_0c03744a(((((struct oCC_int *)(t3))->v)), 0x1, 0xF, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
        *(unsigned char *)((((((struct oCC_int *)(t3))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oCC_int *)(t3))->v)) + 0x6)) = 0x21F;
        (((struct o68_uint *)((*(int *)(((0xC4 + t3) + 0x8)))))->v) = (((((struct oC4_int *)(t3))->v)) + 0x28);
        t34 = (((struct oCC_int *)(t3))->v);
        (((struct o70_float *)(t34))->v) = (((((struct o70_float *)(t34))->v)) + 220.0f);
        (((struct o88_float *)(((((struct oCC_int *)(t3))->v))))->v) = 0.699999988f;
        (((struct o18_float *)(((((struct oCC_int *)(t3))->v))))->v) = 0.0f;
        (((struct o1C_float *)(((((struct oCC_int *)(t3))->v))))->v) = 0.0f;
        (((struct o20_float *)(((((struct oCC_int *)(t3))->v))))->v) = 0.0f;
        t40 = 0x20;
    }
    return t40;
}

int FUN_0c14349c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;

    t1 = FUN_0c037320(0x6, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
    t2 = 0x5;
    if ((int)a6 >= 0) {
        t2 = 0x1;
    }
    t3 = FUN_0c03f444(t2, 0x0, t1);
    t1 = t3;
    if (t3 == 0) {
    } else {
        FUN_0c03733c(t3, 0x6, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
        t2 = t0;
        t0 = 0x0;
        for (;;) {
            if ((int)t0 >= (int)((((struct oC0_int *)(t3))->v))) {
                break;
            }
            t2 = t0;
            t2 = (t2 << 2);
            t2 = (t2 + (0xC4 + t3));
            t2 = (*(int *)((t2 + 0x0)));
            *(unsigned short *)((t2 + 0x6)) = 0x1F;
            t0 = (t0 + 0x1);
            (((struct o88_float *)(t2))->v) = 1.0f;
            (((struct o84_float *)(t2))->v) = 1.0f;
            (((struct o8C_float *)(t2))->v) = 1.0f;
        }
        *(unsigned int *)((t3 + 0x4)) = 0xC143608;
        *(unsigned char *)((t3 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        (((struct oAC_ushort *)(t3))->v) = 0x1F;
        (((struct oA9_uchar *)(t3))->v) = 0x21;
        *(unsigned int *)((t3 + 0x10)) = a4;
        (((struct o48_float *)(t3))->v) = 1.0f;
        (((struct o44_float *)(t3))->v) = 1.0f;
        (((struct o40_float *)(t3))->v) = 1.0f;
        t0 = ((int (*)(int, int, int))(FUN_0c187798))(t2, ((*(int *)(((((*(int *)((((a5 & 0x1) << 2) + 0xC20259C))) << 2) + (0xC4 + a4)) + 0x0))) + 0x28), 0x1F);
        FUN_0c0582de((t3 + 0x28));
        t0 = ((int (*)(void))(FUN_0c187798))();
        FUN_0c17c450((t3 + 0x4C));
        u0 = *(float *)0xC143654;
        math_vec3_mul_xyz((t3 + 0x4C), u0, u0, u0);
        if ((int)a6 >= 0) {
            FUN_0c07e2f4(t3, a6);
            (((struct o48_float *)(t3))->v) = 1.0f;
            (((struct o44_float *)(t3))->v) = 1.0f;
            (((struct o40_float *)(t3))->v) = 1.0f;
            FUN_0c064d24(t3, 0x1, 0x40, 0x0, 0x100, (~((int)0x1 << (int)(*(signed char *)((t3 + 0x1))))), 0x0, 0xF0);
        }
        *(unsigned short *)((t3 + 0x1C)) = 0x3C;
        t1 = 0x3C;
    }
    return t1;
}
