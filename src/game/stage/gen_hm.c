/* Straight-line functions with calls and guards (batch gen_hm): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o74_float { char p[0x74]; float v; };
struct oC0_int { char p[0xC0]; int v; };
int FUN_0c03f346(int);
int FUN_0c0582de(int, int);
int FUN_0c14c1b4(int, int, int, int, int);
int math_vec3_mul_xyz(int, float, float, float);
int FUN_0c0b5f0a(int a4, int a5);
int FUN_0c0f8096(int a4);

int FUN_0c0b5f0a(int a4, int a5)
{
    int stk[10];
    register int t0;
    register int t2;
    register int t4;
    register int t5;
    register int t7;
    register int t14;

    t0 = 0xF4;
    if (a5 == 0) {
        t0 = 0xE4;
    }
    t2 = *(int *)((a4 + t0));
    *(unsigned int *)(((int)stk + 12)) = ((((a5 << 1) + a5) << 2) + 0xC1C6810);
    t4 = ((a5 * 0x3C) + 0xC1C6828);
    t5 = 0x5;
    for (;;) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 12) + 0x10)) = *(struct mv3 *)((*(int *)(((int)stk + 12)))); }
        t7 = t4;
        t4 = (t4 + 0xC);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 12) + 0x4)) = *(struct mv3 *)(t7); }
        *(int *)((int)stk + 8) = 0x10;
        FUN_0c14c1b4(a4, (t2 + 0x28), (((int)stk + 8) + 0x14), (((int)stk + 8) + 0x8), 0x10);
        *(float *)(((int)stk + 36)) = ((*(float *)(((int)stk + 36))) + 50.0f);
        *(float *)(((int)stk + 16)) = ((*(float *)(((int)stk + 16))) + 50.0f);
        *(int *)((int)stk + 4) = 0x1;
        FUN_0c14c1b4(a4, (t2 + 0x28), (((int)stk + 4) + 0x18), (((int)stk + 4) + 0xC), 0x1);
        *(float *)(((int)stk + 36)) = ((*(float *)(((int)stk + 36))) - 130.0f);
        *(float *)(((int)stk + 16)) = ((*(float *)(((int)stk + 16))) + 50.0f);
        *(int *)((int)stk + 0) = 0x2;
        t14 = FUN_0c14c1b4(a4, (t2 + 0x28), (((int)stk + 0) + 0x1C), (((int)stk + 0) + 0x10), 0x2);
        t5 = (t5 - 0x1);
        if (t5 == 0) {
            break;
        }
    }
    return t14;
}

int FUN_0c0f8096(int a4)
{
    int stk[3];
    register int t9;
    register int t19;
    register int t10;
    register float u11;

    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)(0xC1FB31C); }
    FUN_0c0582de(((int)stk + 0), ((*(int *)((a4 + 0x10))) + 0x64));
    (((struct o28_float *)(a4))->v) = (((*(float *)(((int)stk + 0))) * 650.0f) / 7640.0f);
    (((struct o2C_float *)(a4))->v) = (((*(float *)(((int)stk + 4))) * 650.0f) / 7640.0f);
    (((struct o30_float *)(a4))->v) = -10.0f;
    t9 = 0x0;
    for (;;) {
        if ((int)t9 >= (int)((((struct oC0_int *)(a4))->v))) {
            break;
        }
        t10 = 0xC4;
        t10 = (t10 + a4);
        t10 = (t10 + (t9 << 2));
        t10 = (*(int *)((t10 + 0x0)));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t10 + 0x6C)) = *(struct mv3 *)((a4 + 0x28)); }
        (((struct o74_float *)(t10))->v) = 0.0f;
        u11 = (*(float *)((0xC1FB2F8 + (t9 << 2))));
        math_vec3_mul_xyz((t10 + 0x6C), u11, u11, u11);
        t9 = (t9 + 0x1);
    }
    t19 = 0xC0;
    if ((int)(unsigned char)(*(signed char *)0xC541F43) >= (int)0xC) {
        t19 = (FUN_0c03f346(a4));
    }
    return t19;
}
