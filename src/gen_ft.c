/* Straight-line functions with calls and guards (batch gen_ft): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o118_int { char p[0x118]; int v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17C_float { char p[0x17C]; float v; };
struct o18_int { char p[0x18]; int v; };
struct o1C_int { char p[0x1C]; int v; };
struct o20_int { char p[0x20]; int v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o24_float { char p[0x24]; float v; };
struct o24_int { char p[0x24]; int v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o34_float { char p[0x34]; float v; };
struct o374B_uchar { char p[0x374B]; unsigned char v; };
struct o376C_uint { char p[0x376C]; unsigned int v; };
struct o3818_short { char p[0x3818]; short v; };
struct o40_float { char p[0x40]; float v; };
struct o404_int { char p[0x404]; int v; };
struct o41C_short { char p[0x41C]; short v; };
struct o44_float { char p[0x44]; float v; };
struct o446_uchar { char p[0x446]; unsigned char v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c037bf6(int);
extern int FUN_0c03f346();
int FUN_0c03f444(int, int, int);
int FUN_0c05261c(int);
int FUN_0c059df2(int, int);
int FUN_0c05a080(int, int);
int FUN_0c064ee4(int, int);
int FUN_0c07d1fc(int);
int FUN_0c07daea(int, int, int);
int FUN_0c07db58(int);
int FUN_0c07e328(int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c085cac(int, int, int);
int FUN_0c0c213c(int);
int FUN_0c0c283a(int);
extern int FUN_0c0c2ab6();
int FUN_0c0c2d56(int, int, int);
int FUN_0c118810(int, int);
int FUN_0c150010(int, float, float, float, float);
int FUN_0c1512a0(int, int);
int FUN_0c16328c(int, int, int, float);
int FUN_0c17c130(int, int, int);
extern int FUN_0c187798();
int math_atan2_angle16(float, float);
int math_atan_angle16(float);
float math_cos_angle16(int);
float math_signed_sqrt(float);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int FUN_0c072260(int a4);
int FUN_0c120906(int a4, int a5, int a6, int a7, int a8);
int FUN_0c119f90(int a4, int a5, int a6, int a7);
int FUN_0c1629b0(int a4, int a5, int a6, int a7);
int FUN_0c0c86d8(int a4, int a5, int a6, int a7);

int FUN_0c072260(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    if ((int)(short)(t0 - 1) > 0) {
        (((struct o374B_uchar *)(a4))->v) = 0x1;
    }
    FUN_0c037bf6(a4);
    if (0.0f > ((((struct o17C_float *)(a4))->v))) {
        (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) / (1.0f + 1.0f));
    }
    if (((((struct o50_float *)(a4))->v)) > 0.0f) {
        math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
        return math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    }
    t0 = FUN_0c07ecc6(a4, 0x0, 0x0);
    if (t0 == 0) {
        math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
        return math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    }
    if (t0 != 1) {
        return FUN_0c085cac(a4, 0x6, 0x0);
    }
    t0 = *(signed char *)((a4 + 0x2));
    if (t0 == 4) {
        FUN_0c07db58(a4);
        FUN_0c05261c((*(int *)0xC241C20));
        t1 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t1, 0x2, 0xC, (t1), 0x2, 0xC);
        t1 = *(int *)(((0x118 + a4) + 0x4));
        t2 = (((struct o118_int *)(a4))->v);
        (((struct oA0_float *)(t1))->v) = 1.0f;
        (((struct o9C_float *)(t1))->v) = 1.0f;
        (((struct oA0_float *)(t2))->v) = 1.0f;
        (((struct o9C_float *)(t2))->v) = 1.0f;
        t1 = *(int *)(((0x118 + a4) + 0x4));
        t2 = (((struct o118_int *)(a4))->v);
        (((struct o98_float *)(t1))->v) = 1.0f;
        (((struct o98_float *)(t2))->v) = 1.0f;
        (((struct o94_float *)(t1))->v) = 1.0f;
        (((struct o94_float *)(t2))->v) = 1.0f;
        (((struct o16_uchar *)(a4))->v) = 0x3;
        return 0x16;
    }
    if (t0 == 9) {
        FUN_0c07db58(a4);
        FUN_0c05261c((*(int *)0xC241C20));
        *(unsigned int *)((a4 + 0x38)) = (unsigned short)((*(int *)((a4 + 0x38))) + 0x8000);
        t0 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t0, 0x2, 0x4, (t0), 0x2, 0x4);
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
        (((struct o16_uchar *)(a4))->v) = 0x4;
        return 0x16;
    }
    if ((*(signed char *)((a4 + 0x131))) != 0) {
        t0 = FUN_0c07d1fc(a4);
        if (t0 != 0) {
            if ((*(signed char *)((a4 + 0x2))) == 7) {
                t0 = *(signed char *)((a4 + 0x1));
                FUN_0c07e79c(a4, t0, 0x1, 0x7, (t0), 0x1, 0x7);
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
                (((struct o16_uchar *)(a4))->v) = 0x3;
                math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
                return math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
            }
            return FUN_0c085cac(a4, 0x6, 0x0);
        }
    }
    t0 = *(signed char *)((a4 + 0x2));
    if (t0 == 7) {
        return FUN_0c085cac(a4, 0x6, 0x0);
    }
    if (t0 != 2) {
        *(unsigned int *)((a4 + 0x38)) = (unsigned short)((*(int *)((a4 + 0x38))) + 0x8000);
    }
    t0 = *(signed char *)((a4 + 0x1));
    FUN_0c07e79c(a4, t0, 0x2, 0x7, (t0), 0x2, 0x7);
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
    FUN_0c07daea(a4, t1, t0);
    (((struct o446_uchar *)(a4))->v) = 0x1;
    *(unsigned short *)((a4 + 0x1C)) = 0x23;
    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
    return 0x16;
}

int FUN_0c120906(int a4, int a5, int a6, int a7, int a8)
{
    int stk[10];
    register int t0;
    register int t91;
    register int t4;
    register int t6;
    register int t11;
    register int t14;
    register int t15;
    register int t26;
    register int t33;
    register int t41;
    register int t44;
    register int t45;
    register int t46;
    register int t57;
    register int t77;
    register int t81;
    register int t82;

    *(unsigned int *)(((int)stk + 0)) = a6;
    *(unsigned int *)(((int)stk + 8)) = a7;
    t0 = FUN_0c03f444(0x5, 0x0, 0xD);
    t91 = t0;
    if (t0 != 0) {
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = 0x80;
        FUN_0c03744a(((((struct oC4_int *)(t0))->v)), 0x0, 0x1D, (*(int *)0xC4B410C));
        t4 = a5;
        if ((int)a5 > (int)0x3E7) {
            t4 = 0x3E7;
        }
        if ((int)t4 >= (int)0x64) {
            *(unsigned int *)(((int)stk + 12)) = 0x3;
        } else {
            t6 = 0x1;
            if ((int)t4 >= (int)0xA) {
                t6 = 0x2;
            }
            *(unsigned int *)(((int)stk + 12)) = t6;
        }
        *(unsigned int *)(((((int)stk + 0) + 0x10) + 0x8)) = ((int)((int)t4 / (int)0x64));
        t11 = (int)((int)t4 % (int)0x64);
        *(unsigned int *)(((((int)stk + 0) + 0x10) + 0x4)) = ((int)((int)t11 / (int)0xA));
        *(unsigned int *)(((((int)stk + 0) + 0x10) + 0x0)) = ((int)((int)t11 % (int)0xA));
        t14 = 0x0;
        for (;;) {
            t15 = *(int *)0xC4B410C;
            *(unsigned int *)(((int)stk + 4)) = (t14 << 2);
            FUN_0c03744a((*(int *)((((0xC4 + t0) + (t14 << 2)) + 0x4))), (*(int *)(((((int)stk + 0) + 0x10) + (t14 << 2)))), 0x10, t15);
            *(volatile int *)((((0xC4 + t0) + (*(int *)(((int)stk + 4)))) + 0x4));
            FUN_0c187798();
            t26 = ((int)(*(int *)(((int)stk + 12))) > (int)t14);
            t14 = (t14 + 0x1);
            *(unsigned char *)(((*(int *)((((0xC4 + t0) + (*(int *)(((int)stk + 4)))) + 0x4))) + 0x0)) = ((t26) ? 1 : 0);
            if ((int)t14 >= (int)0x3) {
                break;
            }
        }
        if ((int)(*(int *)(((int)stk + 0))) > (int)0x3E7) {
            *(unsigned int *)(((int)stk + 0)) = 0x3E7;
        }
        if ((int)(*(int *)(((int)stk + 0))) >= (int)0x64) {
            *(unsigned int *)(((int)stk + 4)) = 0x3;
        } else {
            t33 = 0x1;
            if ((int)(*(int *)(((int)stk + 0))) >= (int)0xA) {
                t33 = 0x2;
            }
            *(unsigned int *)(((int)stk + 4)) = t33;
        }
        *(unsigned int *)(((((int)stk + 0) + 0x10) + 0x8)) = ((int)((int)(*(int *)(((int)stk + 0))) / (int)0x64));
        t41 = (int)((int)(*(int *)(((int)stk + 0))) % (int)0x64);
        *(unsigned int *)(((int)stk + 0)) = t41;
        *(unsigned int *)(((((int)stk + 0) + 0x10) + 0x4)) = ((int)((int)t41 / (int)0xA));
        t44 = (int)((int)(*(int *)(((int)stk + 0))) % (int)0xA);
        *(unsigned int *)(((int)stk + 0)) = t44;
        *(unsigned int *)(((((int)stk + 0) + 0x10) + 0x0)) = t44;
        t45 = 0x0;
        for (;;) {
            t46 = *(int *)0xC4B410C;
            *(unsigned int *)(((int)stk + 0)) = (t45 << 2);
            FUN_0c03744a((*(int *)((((0xC4 + t0) + (t45 << 2)) + 0x10))), (*(int *)(((((int)stk + 0) + 0x10) + (t45 << 2)))), 0x10, t46);
            *(volatile int *)((((0xC4 + t0) + (*(int *)(((int)stk + 0)))) + 0x10));
            FUN_0c187798();
            t57 = ((int)(*(int *)(((int)stk + 4))) > (int)t45);
            t45 = (t45 + 0x1);
            *(unsigned char *)(((*(int *)((((0xC4 + t0) + (*(int *)(((int)stk + 0)))) + 0x10))) + 0x0)) = ((t57) ? 1 : 0);
            if ((int)t45 >= (int)0x3) {
                break;
            }
        }
        if ((int)(*(int *)(((int)stk + 8))) > (int)0x57030) {
            *(unsigned int *)(((int)stk + 8)) = 0x57030;
        }
        *(unsigned int *)((((((int)stk + 0) + 0x10) + 0x14) + 0x0)) = ((int)((int)(*(int *)(((int)stk + 8))) / (int)0xE10));
        *(unsigned int *)(((int)stk + 8)) = ((int)((int)(*(int *)(((int)stk + 8))) % (int)0xE10));
        *(unsigned int *)(((((int)stk + 0) + 0x10) + 0x10)) = ((int)((int)(*(int *)((((((int)stk + 0) + 0x10) + 0x14) + 0x0))) % (int)0xA));
        *(unsigned int *)((((((int)stk + 0) + 0x10) + 0x14) + 0x0)) = ((int)((int)(*(int *)((((((int)stk + 0) + 0x10) + 0x14) + 0x0))) / (int)0xA));
        *(unsigned int *)((((((int)stk + 0) + 0x10) + 0xC) + 0x0)) = ((int)((int)(*(int *)(((int)stk + 8))) / (int)0x3C));
        *(unsigned int *)(((int)stk + 8)) = ((int)((int)(*(int *)(((int)stk + 8))) % (int)0x3C));
        *(unsigned int *)(((((int)stk + 0) + 0x10) + 0x8)) = ((int)((int)(*(int *)((((((int)stk + 0) + 0x10) + 0xC) + 0x0))) % (int)0xA));
        *(unsigned int *)((((((int)stk + 0) + 0x10) + 0xC) + 0x0)) = ((int)((int)(*(int *)((((((int)stk + 0) + 0x10) + 0xC) + 0x0))) / (int)0xA));
        t77 = *(int *)(((int)stk + 8));
        *(unsigned int *)((((((int)stk + 0) + 0x10) + 0x4) + 0x0)) = t77;
        *(unsigned int *)(((((int)stk + 0) + 0x10) + 0x0)) = ((int)((int)t77 % (int)0xA));
        *(unsigned int *)((((((int)stk + 0) + 0x10) + 0x4) + 0x0)) = ((int)((int)(*(int *)((((((int)stk + 0) + 0x10) + 0x4) + 0x0))) / (int)0xA));
        t81 = 0xC2019B0;
        t82 = 0x0;
        for (;;) {
            FUN_0c03744a((*(int *)((((0xC4 + t0) + t82) + 0x1C))), (*(int *)(((((int)stk + 0) + 0x10) + t82))), 0x10, (*(int *)0xC4B410C));
            t81 = (t81 + 0xC);
            *(volatile int *)((((0xC4 + t0) + t82) + 0x1C));
            FUN_0c187798();
            t82 = (t82 + 0x4);
            if ((unsigned int)t82 >= (unsigned int)0x18) {
                break;
            }
        }
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC120888;
        t91 = (FUN_0c187798());
    }
    return t91;
}

int FUN_0c119f90(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;
    register float u2;
    register float u3;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 == 3) {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    (((struct o20_ushort *)(a4))->v) = 0x0;
                    *(unsigned short *)((a4 + 0x1E)) = 0x0;
                    (((struct o4C_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) / (float)((((struct o14_int *)0xC291E68)->v)));
                    (((struct o54_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) / (float)((((struct o14_int *)0xC291E68)->v)));
                    (((struct o50_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) / (float)((((struct o14_int *)0xC291E68)->v)));
                    FUN_0c05a080(0xC, 0x0);
                    (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) + ((((struct o24_int *)0xC291E68)->v)));
                    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o30_float *)0xC291E68)->v)));
                    (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) - ((((struct o4C_float *)(a4))->v)));
                    (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) - ((((struct o54_float *)(a4))->v)));
                    (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) + ((((struct o34_float *)0xC291E68)->v)));
                    t1 = *(short *)((a4 + 0x1E));
                    *(unsigned short *)((a4 + 0x1E)) = (t1 + 0x1);
                    t2 = (short)(t1 + 0x1);
                    if ((int)(short)(t1 + 0x1) > (int)((((struct o14_int *)0xC291E68)->v))) {
                        (((struct o14_uchar *)(a4))->v) = 0x63;
                        t2 = 0x63;
                    }
                    return t2;
                }
                if (t0 == 4) {
                    (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) + ((((struct o24_int *)0xC291E68)->v)));
                    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o30_float *)0xC291E68)->v)));
                    (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) - ((((struct o4C_float *)(a4))->v)));
                    (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) - ((((struct o54_float *)(a4))->v)));
                    (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) + ((((struct o34_float *)0xC291E68)->v)));
                    t1 = *(short *)((a4 + 0x1E));
                    *(unsigned short *)((a4 + 0x1E)) = (t1 + 0x1);
                    t2 = (short)(t1 + 0x1);
                    if ((int)(short)(t1 + 0x1) > (int)((((struct o14_int *)0xC291E68)->v))) {
                        (((struct o14_uchar *)(a4))->v) = 0x63;
                        t2 = 0x63;
                    }
                    return t2;
                }
                if (t0 == 99) {
                    return FUN_0c03f346(a4, a5, a6, a7);
                }
                return t0;
            }
            (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) + ((((struct o1C_int *)0xC291E68)->v)));
            t0 = (((struct o41C_short *)(a4))->v);
            u0 = ((*(float *)(((((t0 << 1) + t0) << 2) + 0xC29FA30))) + ((((struct o0_float *)0xC291E68)->v)));
            u0 = u0 + ((((struct o28_float *)0xC291E68)->v)) * (math_sin_angle16(((((struct o20_short *)(a4))->v))));
            (((struct o2C_float *)(a4))->v) = u0;
            *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + ((((struct o20_int *)0xC291E68)->v)));
            u0 = (((struct o4C_float *)(a4))->v);
            u1 = (((struct o2C_float *)0xC291E68)->v);
            u2 = ((((-(math_cos_angle16((*(short *)((a4 + 0x1E)))))) + 1.0f) / (1.0f + 1.0f)) * ((((struct o4C_float *)(a4))->v)));
            u3 = u0;
            u3 = u3 + u1 * u2;
            (((struct o40_float *)(a4))->v) = u3;
            u0 = (((struct o50_float *)(a4))->v);
            u1 = (((struct o2C_float *)0xC291E68)->v);
            u2 = ((((-(math_cos_angle16((*(short *)((a4 + 0x1E)))))) + 1.0f) / (1.0f + 1.0f)) * ((((struct o50_float *)(a4))->v)));
            u3 = u0;
            u3 = u3 + u1 * u2;
            (((struct o44_float *)(a4))->v) = u3;
            u0 = (((struct o54_float *)(a4))->v);
            u1 = (((struct o2C_float *)0xC291E68)->v);
            u2 = ((((-(math_cos_angle16((*(short *)((a4 + 0x1E)))))) + 1.0f) / (1.0f + 1.0f)) * ((((struct o54_float *)(a4))->v)));
            u3 = u0;
            u3 = u3 + u1 * u2;
            (((struct o48_float *)(a4))->v) = u3;
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
            t1 = (short)(t0 + 0x1);
            if ((int)(short)(t0 + 0x1) > (int)0xC8) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t1 = 0x14;
            }
            return t1;
        }
        (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) + ((((struct o18_int *)0xC291E68)->v)));
        t0 = (((struct o41C_short *)(a4))->v);
        u0 = ((*(float *)(((((t0 << 1) + t0) << 2) + 0xC29FA30))) + ((((struct o0_float *)0xC291E68)->v)));
        u0 = u0 + ((((struct o24_float *)0xC291E68)->v)) * (math_sin_angle16(((((struct o20_short *)(a4))->v))));
        (((struct o2C_float *)(a4))->v) = u0;
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
        t1 = (short)(t0 + 0x1);
        if ((int)(short)(t0 + 0x1) <= (int)0x8C) {
        } else {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t1 = 0x14;
        }
        return t1;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    t0 = ((int (*)(int, int, int))(FUN_0c187798))(0xC291E80, a5, a6);
    *(volatile short *)(((0x41C + a4) + 0x0));
    t0 = ((int (*)(void))(FUN_0c187798))();
    FUN_0c118810(a4, ((((struct o41C_short *)(a4))->v)));
    return (((int (*)(void))(FUN_0c187798))());
}

int FUN_0c1629b0(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    int t2;
    int t3;
    int t4;
    register int t5;
    int t6;
    int t7;
    register int t8;
    register float u0;
    register float u1;
    register float u2;

    t8 = *(signed char *)((a4 + 0x14));
    if (t8 != 0) {
        if (t8 != 1) {
            return t8;
        }
        if ((*(short *)((a4 + 0x1E))) != 0) {
            *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) - 1);
            if ((*(short *)((a4 + 0x1E))) == 0) {
                (((struct o12E_ushort *)(a4))->v) = 0xF0;
            }
        }
        t8 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t8 - 1);
        if ((int)(short)(t8 - 1) <= 0) {
            return ((int (*)(int, int, int, int))(FUN_0c03f346))(a4, a5, a6, a7);
        }
        t8 = *(signed char *)((a4 + 0x15));
        if (t8 != 0) {
            if (t8 != 1) {
                return t8;
            }
            if (((*(signed char *)((a4 + 0x131))) == 0) && (t0 = *(signed char *)((a4 + 0x132)), t0 == 0)) {
                if (((((struct o404_int *)(a4))->v)) != 0) {
                    FUN_0c059df2((*(signed char *)((a4 + 0x1))), 0x4B);
                    FUN_0c150010((a4 + 0x28), 1.0f, 1.0f, 1.0f, (1.0f + 1.0f));
                    return ((int (*)(int))(FUN_0c03f346))(a4);
                }
                t0 = (((struct o20_short *)(a4))->v);
                (((struct o20_ushort *)(a4))->v) = (t0 + 0x1);
                if ((int)(short)(t0 + 0x1) <= (int)0xA) {
                    t0 = (((struct oC8_int *)(a4))->v);
                    (((struct o8C_float *)(t0))->v) = (((((struct o8C_float *)(t0))->v)) + 0.200000003f);
                }
                return FUN_0c17c130((a4 + 0x28), (a4 + 0x28), (a4 + 0x4C));
            }
            return ((int (*)(int, int, int, int))(FUN_0c03f346))(a4, a5, a6, a7);
        }
        t0 = FUN_0c064ee4(a4, 0x2);
        if (t0 != 0) {
            FUN_0c1512a0(0xA, (a4 + 0x28));
            return ((int (*)(int))(FUN_0c03f346))(a4);
        }
        if (((*(signed char *)((a4 + 0x131))) == 0) && ((t1 = *(signed char *)((a4 + 0x132)), t1 == 0) && (t2 = (((struct o404_int *)(a4))->v), t2 == 0))) {
            if ((((int)((int)(*(short *)((a4 + 0x1C))) % (int)0xC)) == 0) && (t3 = *(int *)0xC532488, (int)t3 > (int)0x14)) {
                FUN_0c150010((a4 + 0x28), 1.0f, 1.0f, 1.0f, ((((struct o60_float *)(a4))->v)));
            }
            if (((((struct o22_short *)(a4))->v)) != 0) {
                (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) - 1);
            } else {
                (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) - ((((struct o5C_float *)(a4))->v)));
                u0 = (((struct o4C_float *)(a4))->v);
                u1 = (((struct o54_float *)(a4))->v);
                u2 = (u1 * u1);
                u2 = u2 + u0 * u0;
                u0 = math_signed_sqrt(u2);
                *(unsigned int *)((a4 + 0x38)) = (math_atan2_angle16(((((struct o4C_float *)(a4))->v)), ((((struct o54_float *)(a4))->v))));
                u1 = u0;
                if (u0 == 0.0f) {
                    u1 = 9.99999975e-06f;
                }
                *(unsigned int *)((a4 + 0x34)) = (math_atan_angle16(((-((((struct o50_float *)(a4))->v))) / u1)));
            }
            return FUN_0c17c130((a4 + 0x28), (a4 + 0x28), (a4 + 0x4C));
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        u0 = (((struct o4C_float *)(a4))->v);
        u1 = (((struct o54_float *)(a4))->v);
        u2 = (u1 * u1);
        u2 = u2 + u0 * u0;
        u0 = math_signed_sqrt(u2);
        *(unsigned int *)((a4 + 0x38)) = (math_atan2_angle16(((((struct o4C_float *)(a4))->v)), ((((struct o54_float *)(a4))->v))));
        *(unsigned int *)((a4 + 0x34)) = (math_atan_angle16((((((struct o50_float *)(a4))->v)) / u0)));
        t0 = *(signed char *)((a4 + 0x15));
        if (t0 != 0) {
            if (t0 != 1) {
            } else {
                *(unsigned short *)((a4 + 0x1E)) = 0xF;
                *(unsigned short *)((a4 + 0x1C)) = 0x3C;
                (((struct o20_ushort *)(a4))->v) = 0x0;
                FUN_0c150010((a4 + 0x28), 1.0f, 1.0f, 1.0f, 1.0f);
                (((struct o74_float *)(((((struct oC8_int *)(a4))->v))))->v) = -16.5f;
                (((struct o8C_float *)(((((struct oC8_int *)(a4))->v))))->v) = 0.0f;
            }
        } else {
            *(unsigned short *)((a4 + 0x1E)) = 0xF;
            *(unsigned short *)((a4 + 0x1C)) = 0x78;
        }
        if ((*(short *)((a4 + 0x1E))) != 0) {
            *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) - 1);
            if ((*(short *)((a4 + 0x1E))) == 0) {
                (((struct o12E_ushort *)(a4))->v) = 0xF0;
            }
        }
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        if ((int)(short)(t0 - 1) <= 0) {
            return ((int (*)(int))(FUN_0c03f346))(a4);
        }
        t0 = *(signed char *)((a4 + 0x15));
        if (t0 != 0) {
            if (t0 != 1) {
                return t0;
            }
            if (((*(signed char *)((a4 + 0x131))) == 0) && (t4 = *(signed char *)((a4 + 0x132)), t4 == 0)) {
                if (((((struct o404_int *)(a4))->v)) != 0) {
                    FUN_0c059df2((*(signed char *)((a4 + 0x1))), 0x4B);
                    FUN_0c150010((a4 + 0x28), 1.0f, 1.0f, 1.0f, (1.0f + 1.0f));
                    return ((int (*)(int))(FUN_0c03f346))(a4);
                }
                t0 = (((struct o20_short *)(a4))->v);
                (((struct o20_ushort *)(a4))->v) = (t0 + 0x1);
                if ((int)(short)(t0 + 0x1) <= (int)0xA) {
                    t0 = (((struct oC8_int *)(a4))->v);
                    (((struct o8C_float *)(t0))->v) = (((((struct o8C_float *)(t0))->v)) + 0.200000003f);
                }
                return FUN_0c17c130((a4 + 0x28), (a4 + 0x28), (a4 + 0x4C));
            }
            return ((int (*)(int))(FUN_0c03f346))(a4);
        }
        t0 = FUN_0c064ee4(a4, 0x2);
        if (t0 != 0) {
            FUN_0c1512a0(0xA, (a4 + 0x28));
            return ((int (*)(int))(FUN_0c03f346))(a4);
        }
        if (((*(signed char *)((a4 + 0x131))) == 0) && ((t5 = *(signed char *)((a4 + 0x132)), t5 == 0) && (t6 = (((struct o404_int *)(a4))->v), t6 == 0))) {
            if ((((int)((int)(*(short *)((a4 + 0x1C))) % (int)0xC)) == 0) && (t7 = *(int *)0xC532488, (int)t7 > (int)0x14)) {
                FUN_0c150010((a4 + 0x28), 1.0f, 1.0f, 1.0f, ((((struct o60_float *)(a4))->v)));
            }
            if (((((struct o22_short *)(a4))->v)) != 0) {
                (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) - 1);
            } else {
                (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) - ((((struct o5C_float *)(a4))->v)));
                u0 = (((struct o4C_float *)(a4))->v);
                u1 = (((struct o54_float *)(a4))->v);
                u2 = (u1 * u1);
                u2 = u2 + u0 * u0;
                u0 = math_signed_sqrt(u2);
                *(unsigned int *)((a4 + 0x38)) = (math_atan2_angle16(((((struct o4C_float *)(a4))->v)), ((((struct o54_float *)(a4))->v))));
                u1 = u0;
                if (u0 == 0.0f) {
                    u1 = 9.99999975e-06f;
                }
                *(unsigned int *)((a4 + 0x34)) = (math_atan_angle16(((-((((struct o50_float *)(a4))->v))) / u1)));
            }
            return FUN_0c17c130((a4 + 0x28), (a4 + 0x28), (a4 + 0x4C));
        }
    }
    FUN_0c16328c((*(signed char *)((a4 + 0x1))), (a4 + 0x28), 0x2, 0.200000003f);
    return ((int (*)(int))(FUN_0c03f346))(a4);
}

int FUN_0c0c86d8(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    register int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    register int t8;
    register int t9;
    register float u0;

    t8 = *(signed char *)((a4 + 0x1));
    if ((*(signed char *)((a4 + 0x41F))) == 0) {
        t9 = *(signed char *)((a4 + 0x15));
        switch (t9) {
        case 0:
            *(unsigned short *)((a4 + 0x1C)) = 0x0;
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            if (!(7.0f > ((((struct o8C_float *)(((((struct o118_int *)((((short)t8 * (short)0x3938) + 0xC532498)))->v))))->v))) && (t1 = *(short *)((a4 + 0x1C)), t1 == 0)) {
                t0 = ((int (*)(int, int, int, int))(FUN_0c0c2ab6))(a4, (*(signed char *)(((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738B8) + 0x13))), a6, a7);
                FUN_0c07e328(a4, (*(signed char *)(((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738B8) + 0xE))));
                FUN_0c0c213c(a4);
                *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
            }
            if ((*(signed char *)(((((short)t8 * (short)0x3938) + 0xC532498) + 0x17))) == 0) {
            } else {
                t0 = ((int (*)(int, int))(FUN_0c0c2ab6))(a4, 0x41);
                FUN_0c07e328(a4, (*(signed char *)(((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738B8) + 0xF))));
                *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x0;
                *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x1;
                *(unsigned short *)((a4 + 0x1C)) = 0x0;
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            }
            break;
        case 1:
            if (!(7.0f > ((((struct o8C_float *)(((((struct o118_int *)((((short)t8 * (short)0x3938) + 0xC532498)))->v))))->v))) && (t0 = *(short *)((a4 + 0x1C)), t0 == 0)) {
                t0 = ((int (*)(int, int, int, int))(FUN_0c0c2ab6))(a4, (*(signed char *)(((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738B8) + 0x13))), a6, a7);
                FUN_0c07e328(a4, (*(signed char *)(((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738B8) + 0xE))));
                FUN_0c0c213c(a4);
                *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
            }
            if ((*(signed char *)(((((short)t8 * (short)0x3938) + 0xC532498) + 0x17))) == 0) {
            } else {
                t0 = ((int (*)(int, int))(FUN_0c0c2ab6))(a4, 0x41);
                FUN_0c07e328(a4, (*(signed char *)(((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738B8) + 0xF))));
                *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x0;
                *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x1;
                *(unsigned short *)((a4 + 0x1C)) = 0x0;
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            }
            break;
        case 2:
            if ((unsigned short)((((struct o3818_short *)((((short)t8 * (short)0x3938) + 0xC532498)))->v)) == 0x338) {
                (((struct o12A_ushort *)(a4))->v) = 0x0;
            }
            if (12.0f > ((((struct o8C_float *)(((((struct o118_int *)((((short)t8 * (short)0x3938) + 0xC532498)))->v))))->v))) {
            } else {
                if ((*(short *)((a4 + 0x1C))) == 0) {
                    *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
                    *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x0;
                    *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
                }
            }
            break;
        }
    } else {
        t0 = *(signed char *)((a4 + 0x15));
        switch (t0) {
        case 0:
            *(unsigned short *)((a4 + 0x1C)) = 0x0;
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            if (!(17.0f > ((((struct o8C_float *)(((((struct o118_int *)((((short)t8 * (short)0x3938) + 0xC532498)))->v))))->v))) && (t6 = *(short *)((a4 + 0x1C)), t6 == 0)) {
                t0 = ((int (*)(int, int, int, int))(FUN_0c0c2ab6))(a4, (*(signed char *)(((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738B8) + 0x13))), a6, a7);
                FUN_0c07e328(a4, (*(signed char *)(((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738B8) + 0xE))));
                FUN_0c0c213c(a4);
                *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
            }
            u0 = (((struct o8C_float *)(((((struct o118_int *)((((short)t8 * (short)0x3938) + 0xC532498)))->v))))->v);
            if ((22.0f > u0) && (t7 = *(signed char *)(((((short)t8 * (short)0x3938) + 0xC532498) + 0x17)), t7 == 0)) {
            } else {
                t0 = ((int (*)(int, int))(FUN_0c0c2ab6))(a4, 0x41);
                FUN_0c07e328(a4, (*(signed char *)(((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738B8) + 0xF))));
                *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x0;
                *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x1;
                *(unsigned short *)((a4 + 0x1C)) = 0x0;
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            }
            break;
        case 1:
            if (!(17.0f > ((((struct o8C_float *)(((((struct o118_int *)((((short)t8 * (short)0x3938) + 0xC532498)))->v))))->v))) && (t4 = *(short *)((a4 + 0x1C)), t4 == 0)) {
                t0 = ((int (*)(int, int, int, int))(FUN_0c0c2ab6))(a4, (*(signed char *)(((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738B8) + 0x13))), a6, a7);
                FUN_0c07e328(a4, (*(signed char *)(((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738B8) + 0xE))));
                FUN_0c0c213c(a4);
                *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
            }
            u0 = (((struct o8C_float *)(((((struct o118_int *)((((short)t8 * (short)0x3938) + 0xC532498)))->v))))->v);
            if ((22.0f > u0) && (t5 = *(signed char *)(((((short)t8 * (short)0x3938) + 0xC532498) + 0x17)), t5 == 0)) {
            } else {
                t0 = ((int (*)(int, int))(FUN_0c0c2ab6))(a4, 0x41);
                FUN_0c07e328(a4, (*(signed char *)(((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738B8) + 0xF))));
                *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x0;
                *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x1;
                *(unsigned short *)((a4 + 0x1C)) = 0x0;
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            }
            break;
        case 2:
            if ((unsigned short)((((struct o3818_short *)((((short)t8 * (short)0x3938) + 0xC532498)))->v)) == 0x33A) {
                (((struct o12A_ushort *)(a4))->v) = 0x0;
            }
            if (((unsigned short)((((struct o3818_short *)((((short)t8 * (short)0x3938) + 0xC532498)))->v)) == 0x33A) && ((t2 = (((struct o118_int *)((((short)t8 * (short)0x3938) + 0xC532498)))->v), u0 = (((struct o8C_float *)(t2))->v), !(7.0f > u0)) && (t3 = *(short *)((a4 + 0x1C)), t3 == 0))) {
                *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
                *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x0;
                *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
            }
            break;
        }
    }
    if ((*(signed char *)(((((short)t8 * (short)0x3938) + 0xC532498) + 0x3715))) != 8) {
        return FUN_0c0c2d56(a4, 0x5, (*(signed char *)((a4 + 0x1))));
    }
    t0 = FUN_0c0c283a(a4);
    if (t0 != 0) {
        return FUN_0c0c2d56(a4, 0x6, (*(signed char *)((a4 + 0x1))));
    }
    (((struct o376C_uint *)((((short)t8 * (short)0x3938) + 0xC532498)))->v) = a4;
    return 0x376C;
}
