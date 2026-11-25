/* Straight-line functions with calls and guards (batch gen_nu): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o118_int { char p[0x118]; int v; };
struct o11C_int { char p[0x11C]; int v; };
struct o126_uchar { char p[0x126]; unsigned char v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o37A0_float { char p[0x37A0]; float v; };
struct o37B0_float { char p[0x37B0]; float v; };
struct o3868_int { char p[0x3868]; int v; };
struct o3868_uint { char p[0x3868]; unsigned int v; };
struct o3928_float { char p[0x3928]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o90_float { char p[0x90]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
extern int FUN_0c037bf6();
int FUN_0c038362(int);
int FUN_0c05258e(int, int, int, int, int);
int FUN_0c059e60(int, int);
int FUN_0c073682(int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c0b1d20(int, int);
int FUN_0c147fd0(int, int, int, int, float);
int math_atan2_angle16(float, float);
float math_signed_sqrt(float);
int math_vec3_accumulate(int, int);
int FUN_0c0b4074(int a4, int a5, int a6);

int FUN_0c0b4074(int a4, int a5, int a6)
{
    int stk[5];
    register int t0;
    register int t83;
    register int t1;
    register int t2;
    register int t3;
    register int t5;
    register int t14;
    register int t16;
    register int t24;
    register int t17;
    register int t18;
    register int t31;
    register int t49;
    register int t50;
    register int t52;
    register int t53;
    register float u55;
    register int t56;
    register float u60;
    register float u64;
    register float u66;
    register float t67;
    register float u68;
    register int t73;
    register int t84;
    register int t88;
    register int t94;
    register int t95;
    register int t96;
    register float u99;
    register int t100;
    register int t110;
    register int t41;
    register int R1008;
    register int R1012;
    register int R1016;

    R1008 = *(int *)((int)stk + 4);
    R1012 = *(int *)((int)stk + 8);
    R1016 = *(int *)((int)stk + 12);

    t0 = *(signed char *)((a4 + 0x16));
    t83 = 0;
    if (t0 != 0) {
        if (t0 == 1) {
            t83 = 1;
        } else {
            if (t0 == 2) {
                t1 = ((int (*)(int, int, int))(FUN_0c037bf6))(a4, a5, a6);
                if ((unsigned char)t1 != 0) {
                    (((struct o37B0_float *)(a4))->v) = 1.0f;
                    R1016 = 0x0;
                    R1012 = 0x0;
                    t2 = *(signed char *)((a4 + 0x1));
                    *(unsigned int *)(((int)stk + 16)) = t2;
                    t3 = t2;
                    R1008 = t3;
                    FUN_0c07e79c(a4, t2, 0x0, 0x0, t3, 0x0, 0x0);
                    t5 = *(signed char *)((a4 + 0x1));
                    *(unsigned char *)(((int)stk + 16)) = t5;
                    FUN_0c147fd0((*(signed char *)(((int)stk + 16))), t5, 0xC1C661C, 0xC1C6628, 10.0f);
                    *(unsigned short *)((a4 + 0x1C)) = 0x55;
                    FUN_0c059e60(a4, 0x2A);
                    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                    t41 = 0x16;
                } else {
                    t41 = (FUN_0c038362(a4));
                }
            } else {
                if (t0 == 3) {
                    t14 = ((int (*)(int, int, int))(FUN_0c037bf6))(a4, a5, a6);
                    FUN_0c038362(a4);
                    t16 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t16 - 1);
                    t24 = (short)(t16 - 1);
                    if ((int)(short)(t16 - 1) <= 0) {
                        t17 = (short)(t16 - 1);
                        t18 = 0x0;
                        for (;;) {
                            if ((int)t18 >= (int)0x4) {
                                break;
                            }
                            t17 = (*(signed char *)((a4 + 0x1)));
                            t17 = (FUN_0c0b1d20(t18, t17));
                            if (t17 == 0) {
                                t17 = (FUN_0c073682(((t18 * 0x3938) + 0xC532498), 0x11));
                            }
                            t18 = (t18 + 0x1);
                        }
                        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                        t24 = 0x16;
                    }
                    t41 = t24;
                } else {
                    t31 = ((int (*)(int, int, int))(FUN_0c037bf6))(a4, a5, a6);
                    t41 = (FUN_0c038362(a4));
                }
            }
        }
    } else {
        (((struct o37B0_float *)(a4))->v) = 1.0f;
        R1016 = 0x8;
        R1012 = 0x0;
        t49 = *(signed char *)((a4 + 0x1));
        *(unsigned int *)(((int)stk + 16)) = t49;
        t50 = t49;
        R1008 = t50;
        FUN_0c07e79c(a4, t49, 0x0, 0x8, t50, 0x0, 0x8);
        t52 = (((struct o118_int *)(a4))->v);
        (((struct o98_float *)(t52))->v) = 10.0f;
        (((struct o94_float *)(t52))->v) = 10.0f;
        t53 = (((struct o11C_int *)(a4))->v);
        (((struct o98_float *)(t53))->v) = 10.0f;
        (((struct o94_float *)(t53))->v) = 10.0f;
        (((struct o3928_float *)(a4))->v) = 3.0f;
        (((struct o37B0_float *)(a4))->v) = ((((struct o3928_float *)(a4))->v));
        u55 = (((struct o37B0_float *)(a4))->v);
        t56 = *(int *)(((0x118 + a4) + 0x4));
        (((struct o90_float *)(((((struct o118_int *)(a4))->v))))->v) = u55;
        (((struct o90_float *)(t56))->v) = u55;
        (((struct o12E_ushort *)(a4))->v) = 0x0;
        (((struct o126_uchar *)(a4))->v) = 0x1;
        FUN_0c059e60(a4, 0x22);
        (((struct o37A0_float *)(a4))->v) = 0.0f;
        (((struct o5C_float *)(a4))->v) = -3.5999999f;
        (((struct o50_float *)(a4))->v) = (-(((((struct o5C_float *)(a4))->v)) * 30.0f));
        (((struct o60_float *)(a4))->v) = 0.0f;
        (((struct o58_float *)(a4))->v) = 0.0f;
        u60 = (((struct o50_float *)(a4))->v);
        u64 = (((((struct o5C_float *)(a4))->v)) * (((((struct o4_float *)0xC1C6634)->v)) - ((((struct o2C_float *)(a4))->v))));
        u66 = (u64 * 4.0f);
        t67 = math_signed_sqrt((((u60 * u60)) - u66));
        u68 = (((struct o5C_float *)(a4))->v);
        *(unsigned short *)((a4 + 0x1C)) = (int)(((-u60) - t67) / (u68 * (1.0f + 1.0f)));
        (((struct o4C_float *)(a4))->v) = ((((((struct o0_float *)0xC1C6634)->v)) - ((((struct o28_float *)(a4))->v))) / (((-u60) - t67) / (u68 * (1.0f + 1.0f))));
        (((struct o54_float *)(a4))->v) = ((((((struct o8_float *)0xC1C6634)->v)) - ((((struct o30_float *)(a4))->v))) / (((-u60) - t67) / (u68 * (1.0f + 1.0f))));
        t73 = *(int *)((a4 + 0x38));
        *(unsigned int *)((a4 + 0x38)) = (t73 & 0xFFFF);
        if ((int)(t73 & 0xFFFF) > (int)0x8000) {
            *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) - 0x10000);
        }
        (((struct o3868_uint *)(a4))->v) = (math_atan2_angle16((-((((struct o0_float *)0xC1C6634)->v))), (-((((struct o8_float *)0xC1C6634)->v)))));
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        t83 = 1;
    }
    if (t83) {
        t84 = ((int (*)(int))(FUN_0c037bf6))(a4);
        FUN_0c038362(a4);
        math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
        math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
        t88 = *(int *)((a4 + 0x38));
        *(unsigned int *)((a4 + 0x38)) = (t88 + 0xE38);
        if ((int)(t88 + 0xE38) > (int)((((struct o3868_int *)(a4))->v))) {
            *(unsigned int *)((a4 + 0x38)) = ((((struct o3868_int *)(a4))->v));
        }
        t94 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t94 - 1);
        t110 = (short)(t94 - 1);
        if ((int)(short)(t94 - 1) > 0) {
        } else {
            { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)(0xC1C6634); }
            (((struct o37B0_float *)(a4))->v) = 1.0f;
            R1016 = 0x9;
            R1012 = 0x0;
            t95 = *(signed char *)((a4 + 0x1));
            *(unsigned int *)(((int)stk + 16)) = t95;
            t96 = t95;
            R1008 = t96;
            FUN_0c07e79c(a4, t95, 0x0, 0x9, t96, 0x0, 0x9);
            (((struct o37B0_float *)(a4))->v) = ((((struct o3928_float *)(a4))->v));
            u99 = (((struct o37B0_float *)(a4))->v);
            t100 = *(int *)(((0x118 + a4) + 0x4));
            (((struct o90_float *)(((((struct o118_int *)(a4))->v))))->v) = u99;
            (((struct o90_float *)(t100))->v) = u99;
            *(int *)((int)stk + 0) = 0x0;
            FUN_0c05258e(0x2, 0x28, 0x100, 0x3C, 0x0);
            FUN_0c059e60(a4, 0x21);
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
            t110 = 0x16;
        }
    } else {
        t110 = t41;
    }
    return t110;
}
