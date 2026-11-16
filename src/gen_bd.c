/* Straight-line functions with calls and guards (batch gen_bd): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o3770_int { char p[0x3770]; int v; };
struct o3770_uint { char p[0x3770]; unsigned int v; };
struct o42C_short { char p[0x42C]; short v; };
struct o50_float { char p[0x50]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c037bf6(int);
int FUN_0c03f346(int);
int FUN_0c03f444(int, int, int);
int FUN_0c06eafc(int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c085256(int, int);
int FUN_0c085cac(int, int, int);
int FUN_0c085d0c(int, int, int, int);
int FUN_0c091bba(int);
int FUN_0c091bd0(int);
int FUN_0c091d8a(int);
int FUN_0c0cff96(int, int);
int FUN_0c0e2390(int, int, int);
int FUN_0c17c450(int);
int FUN_0c187798(int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int math_vec2_cos_between(float, float, float, float);
int math_vec3_accumulate(int, int);
int FUN_0c1377a8(int a4, int a5, int a6, int a7);
int FUN_0c091e5c(int a4, int a5, int a6, int a7);
int FUN_0c06ec2a(int a4);
int FUN_0c0963e6(int a4);
int FUN_0c0b1d64(int a4);
int FUN_0c0f7bca(int a4);

int FUN_0c1377a8(int a4, int a5, int a6, int a7)
{
    int stk[4];
    register int t0;
    register int t11;
    register int t4;
    register int t7;

    *(unsigned char *)(((int)stk + 12)) = a4;
    *(unsigned int *)(((int)stk + 8)) = a5;
    *(unsigned int *)(((int)stk + 4)) = a6;
    *(unsigned int *)(((int)stk + 0)) = a7;
    t0 = FUN_0c03f444(0x5, 0x0, 0x4);
    t11 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((int)stk + 12)));
        *(unsigned int *)((t0 + 0x4)) = 0xC137414;
        *(volatile int *)(((int)stk + 8));
        FUN_0c187798(t0);
        *(volatile int *)(((int)stk + 4));
        FUN_0c187798(t4);
        *(volatile int *)((t7 + 0xD0));
        *(volatile int *)(((int)stk + 0));
        t11 = (FUN_0c187798(t7));
    }
    return t11;
}

int FUN_0c091e5c(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;

    t1 = (((struct o3770_int *)(a4))->v);
    if ((t1 != 0) && (t0 = *(signed char *)((t1 + 0x14)), t0 == 2)) {
        t0 = *(signed char *)((a4 + 0x3728));
        if ((t0 != 0) && (t0 != 1)) {
            if (t0 != 2) {
                FUN_0c091d8a(a4);
            } else {
                FUN_0c091bd0(a4);
            }
        } else {
            FUN_0c091bba(a4);
        }
        (((struct o3770_uint *)(((((struct o3770_int *)(a4))->v))))->v) = a4;
        return 0x3770;
    }
    return FUN_0c085d0c(a4, a5, a6, a7);
}

int FUN_0c06ec2a(int a4)
{
    register int t1;

    if (((unsigned short)((((struct o42C_short *)(a4))->v)) & 0x3000) != 0) {
        t1 = FUN_0c06eafc(a4);
        if (t1 != 0) {
            return FUN_0c085cac(a4, 0x6, 0x0);
        }
        FUN_0c037bf6(a4);
        return math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    }
    FUN_0c085256(a4, 0x1);
    (((struct o16_uchar *)(a4))->v) = 0x0;
    return 0x16;
}

int FUN_0c0963e6(int a4)
{
    register int t10;
    register int t4;

    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    FUN_0c037bf6(a4);
    t10 = 0x50;
    if (0.0f > ((((struct o50_float *)(a4))->v))) {
        t4 = FUN_0c07ecc6(a4, 0x0, 0x0);
        t10 = t4;
        if (t4 != 0) {
            FUN_0c085cac(a4, 0x6, 0x0);
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
            t10 = 0x16;
        }
    }
    return t10;
}

int FUN_0c0b1d64(int a4)
{
    int stk[6];

    (((struct o8_float *)(((int)stk + 0)))->v) = (math_cos_angle16((*(int *)((a4 + 0x38)))));
    *(float *)((((int)stk + 0) + 0x0)) = (math_sin_angle16((*(int *)((a4 + 0x38)))));
    FUN_0c0e2390((((int)stk + 0) + 0xC), ((*(int *)((a4 + 0x10))) + 0x28), (a4 + 0x28));
    FUN_0c17c450((((int)stk + 0) + 0xC));
    return (math_vec2_cos_between((*(float *)((((int)stk + 0) + 0x0))), ((((struct o8_float *)(((int)stk + 0)))->v)), (*(float *)(((int)stk + 12))), (*(float *)(((int)stk + 20)))));
}

int FUN_0c0f7bca(int a4)
{
    register int t0;

    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) - 0x38E);
    }
    t0 = (((struct oC4_int *)(a4))->v);
    (((struct o80_uint *)(t0))->v) = (((((struct o80_int *)(t0))->v)) + 0x5B);
    t0 = FUN_0c0cff96((*(int *)((((((struct oC4_int *)(a4))->v)) + 0x8))), 0xC1FB2C8);
    if ((int)(unsigned char)(*(signed char *)0xC541F43) >= (int)0xE) {
        return FUN_0c03f346(a4);
    }
    return t0;
}
