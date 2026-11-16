/* Straight-line functions with calls and guards (batch gen_je): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o12E_short { char p[0x12E]; short v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o168_float { char p[0x168]; float v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o2C_float { char p[0x2C]; float v; };
struct o3728_uchar { char p[0x3728]; unsigned char v; };
struct o374B_uchar { char p[0x374B]; unsigned char v; };
struct o3770_int { char p[0x3770]; int v; };
struct o3830_ushort { char p[0x3830]; unsigned short v; };
struct o445_uchar { char p[0x445]; unsigned char v; };
struct o446_uchar { char p[0x446]; unsigned char v; };
struct o447_uchar { char p[0x447]; unsigned char v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c07d086(int, int, float);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c085d0c(int, int, int, int);
int FUN_0c0e2390(int, int, int);
int FUN_0c179ac0(void);
int FUN_0c17c130(int, int, int);
int FUN_0c187798(int);
int math_vec3_mul_xyz(int, float, float, float);
int FUN_0c14b20c(int a4);
int FUN_0c09a5ac(int a4, int a5, int a6, int a7);
int FUN_0c0fc9b8(int a4, int a5, int a6);

int FUN_0c14b20c(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = FUN_0c03f444(0x5, 0x0, 0x2);
    if (t0 == 0) {
        return t0;
    }
    t1 = 0x0;
    for (;;) {
        t2 = *(int *)((((0xC4 + t0) + t1) + 0x0));
        FUN_0c03744a(t2, 0x8, 0xA, (*(int *)(((((*(signed char *)((a4 + 0x1))) << 2) << 1) + 0xC4B40E0))));
        t1 = (t1 + 0x4);
        *(unsigned short *)((t2 + 0x6)) = 0x1F;
        if ((unsigned int)t1 >= (unsigned int)0x8) {
            break;
        }
    }
    *(unsigned int *)((t0 + 0x4)) = 0xC14B39C;
    *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
    (((struct oA8_uchar *)(t0))->v) = 0x1;
    (((struct oAC_ushort *)(t0))->v) = 0x21;
    (((struct oA9_uchar *)(t0))->v) = 0x21;
    *(unsigned int *)((t0 + 0x10)) = a4;
    FUN_0c187798(0x21);
    t1 = FUN_0c179ac0();
    t2 = ((~(((~t1) + 0x1) & 0x1F)) + 0x1);
    if ((int)t1 >= 0) {
        t2 = (t1 & 0x1F);
    }
    (((struct o4C_float *)(t0))->v) = ((((float)t2 / 32.0f) + -0.5f) * 80.0f);
    t1 = FUN_0c179ac0();
    t2 = ((~(((~t1) + 0x1) & 0x1F)) + 0x1);
    if ((int)t1 >= 0) {
        t2 = (t1 & 0x1F);
    }
    (((struct o50_float *)(t0))->v) = ((((float)t2 / 32.0f) + -0.5f) * 80.0f);
    t1 = FUN_0c179ac0();
    t2 = ((~(((~t1) + 0x1) & 0x1F)) + 0x1);
    if ((int)t1 >= 0) {
        t2 = (t1 & 0x1F);
    }
    (((struct o54_float *)(t0))->v) = ((((float)t2 / 32.0f) + -0.5f) * 80.0f);
    FUN_0c17c130((t0 + 0x28), (t0 + 0x28), (t0 + 0x4C));
    FUN_0c0e2390((t0 + 0x4C), (t0 + 0x4C), (a4 + 0x4C));
    return math_vec3_mul_xyz((t0 + 0x4C), 0.100000001f, 0.100000001f, 0.100000001f);
}

int FUN_0c09a5ac(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;
    register float u1;
    register float u2;

    if (((((struct o3770_int *)(a4))->v)) == 0) {
        return FUN_0c085d0c(a4, a5, a6, a7);
    }
    t1 = *(signed char *)((a4 + 0x1));
    FUN_0c07e79c(a4, t1, 0x5, 0x2, (t1), 0x5, 0x2);
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
    FUN_0c07e79c(((((struct o3770_int *)(a4))->v)), 0xFFFFFFFF, 0x5, 0x4, 0xFFFFFFFF, 0x5, 0x4);
    t1 = (((struct o3770_int *)(a4))->v);
    t2 = *(int *)(((t1 + 0x118) + 0x4));
    t3 = (((struct o118_int *)(t1))->v);
    (((struct oA0_float *)(t2))->v) = 1.0f;
    (((struct o9C_float *)(t2))->v) = 1.0f;
    (((struct oA0_float *)(t3))->v) = 1.0f;
    (((struct o9C_float *)(t3))->v) = 1.0f;
    t1 = (((struct o3770_int *)(a4))->v);
    t2 = *(int *)(((t1 + 0x118) + 0x4));
    t3 = (((struct o118_int *)(t1))->v);
    (((struct o98_float *)(t2))->v) = 1.0f;
    (((struct o98_float *)(t3))->v) = 1.0f;
    (((struct o94_float *)(t2))->v) = 1.0f;
    (((struct o94_float *)(t3))->v) = 1.0f;
    (((struct o445_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x1;
    (((struct o3728_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x0;
    u1 = *(float *)0xC541098;
    if ((((((struct o168_float *)(a4))->v)) > u1) && (t0 = (((struct o3770_int *)(a4))->v), u0 = (((struct o168_float *)(t0))->v), u0 > u1)) {
        u0 = (((struct o168_float *)(a4))->v);
        u1 = (((struct o168_float *)(((((struct o3770_int *)(a4))->v))))->v);
        u2 = u1;
        if (u1 > u0) {
            u2 = u0;
        }
        (((struct o2C_float *)(a4))->v) = (u2 + -1.0f);
    }
    t0 = (((struct o3770_int *)(a4))->v);
    (((struct o3830_ushort *)(t0))->v) = (((((struct o12E_short *)(t0))->v)) ^ 0xF);
    (((struct o374B_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x1;
    (((struct o446_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x1;
    (((struct o447_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x1;
    FUN_0c07d086(a4, 0x0, (*(float *)0xC09A778));
    *(unsigned short *)((a4 + 0x1C)) = 0x0;
    *(unsigned short *)((a4 + 0x1E)) = 0x63;
    (((struct o20_ushort *)(a4))->v) = 0x52;
    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    return 0x15;
}

int FUN_0c0fc9b8(int a4, int a5, int a6)
{
    int stk[2];
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t10;
    register int t11;
    register int t27;
    register int t28;
    register int t29;
    register int t30;
    register int t31;
    register int t35;
    register int t36;
    register int t50;
    register int t1;
    register int t26;

    if (a6 == 0) {
        t2 = 0x2;
        t3 = 0x0;
        t4 = 0x2;
        t5 = 0xA;
        t6 = a5;
        for (;;) {
            if ((int)t4 <= 0) {
                break;
            }
            t1 = t6;
            t50 = t5;
            t50 = ((int)((int)t1 / (int)t50));
            t1 = t6;
            *(unsigned int *)(((int)stk + 0)) = t50;
            t50 = t5;
            t50 = ((int)((int)t1 % (int)t50));
            t6 = t50;
            t50 = 0xA;
            t1 = t5;
            t50 = ((int)((int)t1 / (int)t50));
            t2 = t4;
            t2 = (t2 - 1);
            t2 = (t2 << 2);
            t10 = *(int *)(((int)stk + 0));
            t1 = 0xC03744A;
            t5 = t50;
            t11 = *(int *)0xC4B410C;
            *(unsigned int *)(((int)stk + 4)) = t2;
            t2 = (t2 + (0xC4 + a4));
            t2 = (*(int *)((t2 + 0x0)));
            t50 = (FUN_0c03744a(t2, 0x0, (t10 + 0x28), t11));
            t2 = 0xC4;
            t2 = (t2 + a4);
            t50 = 0xC28EB48;
            t2 = (t2 + (*(int *)(((int)stk + 4))));
            t2 = (*(int *)((t2 + 0x0)));
            t1 = t2;
            t1 = (t1 + 0x6C);
            t50 = 0xC;
            t50 = (FUN_0c187798(t2));
            t1 = (*(int *)(((int)stk + 0)));
            if (t1 == 0) {
                t50 = t3;
                if (t50 != 1) {
                    t50 = t4;
                    
                }
            } else {
                t3 = 0x1;
            }
            t4 = (t4 - 1);
            *(unsigned char *)((t2 + 0x0)) = 0x1;
        }
    } else {
        t27 = 0x2;
        t28 = 0x0;
        t29 = 0x2;
        t30 = 0xA;
        t31 = a5;
        for (;;) {
            if ((int)t29 <= 0) {
                break;
            }
            t26 = t31;
            t50 = t30;
            t50 = ((int)((int)t26 / (int)t50));
            t26 = t31;
            *(unsigned int *)(((int)stk + 0)) = t50;
            t50 = t30;
            t50 = ((int)((int)t26 % (int)t50));
            t31 = t50;
            t50 = 0xA;
            t26 = t30;
            t50 = ((int)((int)t26 / (int)t50));
            t27 = t29;
            t27 = (t27 - 1);
            t27 = (t27 << 2);
            t35 = *(int *)(((int)stk + 0));
            t30 = t50;
            t36 = *(int *)0xC4B410C;
            *(unsigned int *)(((int)stk + 4)) = t27;
            t27 = (t27 + (0xC4 + a4));
            t27 = (*(int *)((t27 + 0x8)));
            t50 = (FUN_0c03744a(t27, 0x0, (t35 + 0x28), t36));
            t27 = 0xC4;
            t27 = (t27 + a4);
            t50 = 0xC28EB60;
            t27 = (t27 + (*(int *)(((int)stk + 4))));
            t27 = (*(int *)((t27 + 0x8)));
            t26 = t27;
            t26 = (t26 + 0x6C);
            t50 = 0xC;
            t50 = (FUN_0c187798(t27));
            t26 = (*(int *)(((int)stk + 0)));
            if (t26 == 0) {
                t50 = t28;
                if (t50 != 1) {
                    t50 = t29;
                    
                }
            } else {
                t28 = 0x1;
            }
            t29 = (t29 - 1);
            *(unsigned char *)((t27 + 0x0)) = 0x1;
        }
    }
    return t50;
}
