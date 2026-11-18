/* Straight-line functions with calls and guards (batch gen_ej): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o10_float { char p[0x10]; float v; };
struct o118_int { char p[0x118]; int v; };
struct o11C_int { char p[0x11C]; int v; };
struct o126_uchar { char p[0x126]; unsigned char v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
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
struct o4_int { char p[0x4]; int v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
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
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC_float { char p[0xC]; float v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oD0_int { char p[0xD0]; int v; };
struct oD4_int { char p[0xD4]; int v; };
struct oD8_int { char p[0xD8]; int v; };
struct oDC_int { char p[0xDC]; int v; };
struct oEC_int { char p[0xEC]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c037498(int, int, int, int);
extern int FUN_0c037bf6();
int FUN_0c038362(int);
int FUN_0c03f444(int, int, int, int);
int FUN_0c05258e(int, int, int, int, int);
int FUN_0c059e60(int, int);
int FUN_0c05f22c(int);
int FUN_0c05f254(int);
int FUN_0c073682(int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c0b1d20(int, int);
int FUN_0c0fa5dc(void);
int FUN_0c1171f0(int);
int FUN_0c147fd0(int, int, int, int, float);
int FUN_0c162860(int, int);
int math_atan2_angle16(float, float);
float math_signed_sqrt(float);
int math_vec3_accumulate(int, int);
int nlAddVector3op(int, int, int);
int FUN_0c16b9ec(int a4, int a5, int a6, int a7);
int FUN_0c0b4074(int a4, int a5, int a6);
int FUN_0c0fa600(int a4);

int FUN_0c16b9ec(int a4, int a5, int a6, int a7)
{
    int stk[9];
    register int t1;
    register int t7;
    register int t11;
    register int t12;
    register int t14;
    register int t34;
    register int t37;
    register int t38;
    register int t40;
    register int t57;
    register int t66;
    register int t56;
    register int t8;
    register int t9;
    register int t13;
    register int t20;
    register int t21;
    register int t23;
    register int t35;
    register int t39;
    register int t44;
    register int t45;

    *(unsigned int *)(((int)stk + 0)) = a6;
    if (a7 != 0) {
        if (a7 != 1) {
            t1 = FUN_0c162860((*(signed char *)((a4 + 0x1))), a7);
            if (t1 != 0) {
                *(unsigned int *)((t1 + 0x4)) = 0xC16B9D2;
                *(unsigned char *)((t1 + 0x2)) = a7;
                { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x28)) = *(struct mv3 *)(a5); }
                { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x34)) = *(struct mv3 *)((*(int *)(((int)stk + 0)))); }
            }
        } else {
            t7 = a7;
            t11 = a4;
            t12 = a5;
            t14 = 0x0;
            for (;;) {
                if ((int)t14 >= (int)0x3) {
                    break;
                }
                t7 = (*(signed char *)((a4 + 0x1)));
                t12 = a7;
                t11 = t7;
                t7 = (FUN_0c162860(t11, t12));
                t11 = t7;
                if (t7 != 0) {
                    t9 = 0xC16B9D2;
                    *(unsigned int *)((t11 + 0x4)) = 0xC16B9D2;
                    t7 = a7;
                    t8 = t11;
                    t9 = a5;
                    *(unsigned char *)((t11 + 0x2)) = t7;
                    t8 = (t8 + 0x28);
                    t7 = 0xC;
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(t8) = *(struct mv3 *)(t9); }
                    t8 = t11;
                    t9 = (*(int *)(((int)stk + 0)));
                    t8 = (t8 + 0x34);
                    t7 = 0xC;
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(t8) = *(struct mv3 *)(t9); }
                    t12 = 0x41C;
                    t12 = (t12 + t11);
                    t7 = t14;
                    *(unsigned char *)((t12 + 0x3)) = t7;
                    t7 = (*(signed char *)((t12 + 0x3)));
                    if (t7 == 0) {
                        t13 = t11;
                    } else {
                        *(unsigned int *)((t11 + 0x10)) = t13;
                    }
                    t20 = t8;
                    t21 = t9;
                    t23 = t12;
                }
                t8 = t20;
                t14 = (t14 + 0x1);
                t9 = t21;
                t12 = t23;
            }
            t56 = a7;
        }
    } else {
        t34 = a7;
        t37 = a4;
        t38 = 0x0;
        for (;;) {
            if ((int)t38 >= (int)0x5) {
                break;
            }
            t39 = 0x0;
            t40 = 0x5;
            for (;;) {
                if ((int)t39 >= (int)0x3) {
                    break;
                }
                t34 = (*(signed char *)((a4 + 0x1)));
                t37 = t34;
                t34 = (FUN_0c162860(t37, a7));
                t37 = t34;
                if (t34 != 0) {
                    *(unsigned int *)((t37 + 0x4)) = 0xC16B9D2;
                    t34 = a7;
                    t35 = t37;
                    t40 = a5;
                    *(unsigned char *)((t37 + 0x2)) = t34;
                    t35 = (t35 + 0x28);
                    t34 = 0xC;
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(t35) = *(struct mv3 *)(t40); }
                    t35 = t37;
                    t40 = (*(int *)(((int)stk + 0)));
                    t35 = (t35 + 0x34);
                    t34 = 0xC;
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(t35) = *(struct mv3 *)(t40); }
                    t35 = 0x41C;
                    t37 = (t37 + t35);
                    t34 = t39;
                    *(unsigned char *)((t37 + 0x2)) = t34;
                    t34 = t38;
                    *(unsigned char *)((t37 + 0x3)) = t34;
                    t44 = t35;
                    t45 = t40;
                }
                t35 = t44;
                t39 = (t39 + 0x1);
                t40 = t45;
            }
            t38 = (t38 + 0x1);
        }
        t56 = a7;
    }
    *(int *)((int)stk + 32) = a7;
    *(unsigned int *)(((int)stk + 20)) = a4;
    *(unsigned int *)(((int)stk + 24)) = a7;
    t57 = FUN_0c03f444(0x5, 0x0, 0x1, t56);
    t66 = t57;
    if (t57 != 0) {
        (((struct oAC_ushort *)(t57))->v) = 0x1F;
        (((struct oA9_uchar *)(t57))->v) = 0x21;
        *(unsigned int *)((t57 + 0x4)) = 0xC16BB24;
        *(unsigned char *)((t57 + 0x2)) = (*(signed char *)(((int)stk + 24)));
        (((struct o48_float *)(t57))->v) = 0.0f;
        (((struct o44_float *)(t57))->v) = 0.0f;
        (((struct o40_float *)(t57))->v) = 0.0f;
        FUN_0c037498(((((struct oC4_int *)(t57))->v)), (0x3 & (*(signed char *)((t57 + 0x2)))), 0x4B, (*(int *)0xC4B40CC));
        *(unsigned char *)((((((struct oC4_int *)(t57))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(t57))->v)) + 0x6)) = 0xF;
        *(unsigned int *)((t57 + 0x10)) = (*(int *)(((int)stk + 20)));
        t66 = 0xF;
    }
    return t66;
}

int FUN_0c0b4074(int a4, int a5, int a6)
{
    int stk[5];
    register int t0;
    register int t1;
    register int t5;
    register int t11;
    register int t12;
    register int t13;
    register float u16;
    register int t17;
    register int t27;
    register int t28;
    register int t29;
    register int t31;
    register int t40;
    register int t42;
    register int t50;
    register int t43;
    register int t44;
    register int t57;
    register int t85;
    register int t86;
    register int t88;
    register int t89;
    register float u91;
    register int t92;
    register float u96;
    register float u100;
    register float u102;
    register float t103;
    register float u104;
    register int t109;
    register int t118;
    register int t122;
    register int t128;
    register int t129;
    register int t130;
    register float u133;
    register int t134;
    register int t144;
    register int t75;
    register int t67;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 == 1) {
            t1 = ((int (*)(int, int, int))(FUN_0c037bf6))(a4, a5, a6);
            FUN_0c038362(a4);
            math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
            math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
            t5 = *(int *)((a4 + 0x38));
            *(unsigned int *)((a4 + 0x38)) = (t5 + 0xE38);
            if ((int)(t5 + 0xE38) > (int)((((struct o3868_int *)(a4))->v))) {
                *(unsigned int *)((a4 + 0x38)) = ((((struct o3868_int *)(a4))->v));
            }
            t11 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t11 - 1);
            t75 = (short)(t11 - 1);
            if ((int)(short)(t11 - 1) > 0) {
            } else {
                { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)(0xC1C6634); }
                (((struct o37B0_float *)(a4))->v) = 1.0f;
                *(int *)((int)stk + 12) = 0x9;
                *(int *)((int)stk + 8) = 0x0;
                t12 = *(signed char *)((a4 + 0x1));
                *(unsigned int *)(((int)stk + 16)) = t12;
                t13 = t12;
                *(int *)((int)stk + 4) = t13;
                FUN_0c07e79c(a4, t12, 0x0, 0x9, t13, 0x0, 0x9);
                (((struct o37B0_float *)(a4))->v) = ((((struct o3928_float *)(a4))->v));
                u16 = (((struct o37B0_float *)(a4))->v);
                t17 = *(int *)(((0x118 + a4) + 0x4));
                (((struct o90_float *)(((((struct o118_int *)(a4))->v))))->v) = u16;
                (((struct o90_float *)(t17))->v) = u16;
                *(int *)((int)stk + 0) = 0x0;
                FUN_0c05258e(0x2, 0x28, 0x100, 0x3C, 0x0);
                FUN_0c059e60(a4, 0x21);
                (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                t75 = 0x16;
            }
        } else {
            if (t0 == 2) {
                t27 = ((int (*)(int, int, int))(FUN_0c037bf6))(a4, a5, a6);
                if ((unsigned char)t27 != 0) {
                    (((struct o37B0_float *)(a4))->v) = 1.0f;
                    *(int *)((int)stk + 12) = 0x0;
                    *(int *)((int)stk + 8) = 0x0;
                    t28 = *(signed char *)((a4 + 0x1));
                    *(unsigned int *)(((int)stk + 16)) = t28;
                    t29 = t28;
                    *(int *)((int)stk + 4) = t29;
                    FUN_0c07e79c(a4, t28, 0x0, 0x0, t29, 0x0, 0x0);
                    t31 = *(signed char *)((a4 + 0x1));
                    *(unsigned char *)(((int)stk + 16)) = t31;
                    FUN_0c147fd0((*(signed char *)(((int)stk + 16))), t31, 0xC1C661C, 0xC1C6628, 10.0f);
                    *(unsigned short *)((a4 + 0x1C)) = 0x55;
                    FUN_0c059e60(a4, 0x2A);
                    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                    t67 = 0x16;
                } else {
                    t67 = (FUN_0c038362(a4));
                }
            } else {
                if (t0 == 3) {
                    t40 = ((int (*)(int, int, int))(FUN_0c037bf6))(a4, a5, a6);
                    FUN_0c038362(a4);
                    t42 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t42 - 1);
                    t50 = (short)(t42 - 1);
                    if ((int)(short)(t42 - 1) <= 0) {
                        t43 = (short)(t42 - 1);
                        t44 = 0x0;
                        for (;;) {
                            if ((int)t44 >= (int)0x4) {
                                break;
                            }
                            t43 = (*(signed char *)((a4 + 0x1)));
                            t43 = (FUN_0c0b1d20(t44, t43));
                            if (t43 == 0) {
                                t43 = (FUN_0c073682(((t44 * 0x3938) + 0xC532498), 0x11));
                            }
                            t44 = (t44 + 0x1);
                        }
                        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                        t50 = 0x16;
                    }
                    t67 = t50;
                } else {
                    t57 = ((int (*)(int, int, int))(FUN_0c037bf6))(a4, a5, a6);
                    t67 = (FUN_0c038362(a4));
                }
            }
            t75 = t67;
        }
        t144 = t75;
    } else {
        (((struct o37B0_float *)(a4))->v) = 1.0f;
        *(int *)((int)stk + 12) = 0x8;
        *(int *)((int)stk + 8) = 0x0;
        t85 = *(signed char *)((a4 + 0x1));
        *(unsigned int *)(((int)stk + 16)) = t85;
        t86 = t85;
        *(int *)((int)stk + 4) = t86;
        FUN_0c07e79c(a4, t85, 0x0, 0x8, t86, 0x0, 0x8);
        t88 = (((struct o118_int *)(a4))->v);
        (((struct o98_float *)(t88))->v) = 10.0f;
        (((struct o94_float *)(t88))->v) = 10.0f;
        t89 = (((struct o11C_int *)(a4))->v);
        (((struct o98_float *)(t89))->v) = 10.0f;
        (((struct o94_float *)(t89))->v) = 10.0f;
        (((struct o3928_float *)(a4))->v) = 3.0f;
        (((struct o37B0_float *)(a4))->v) = ((((struct o3928_float *)(a4))->v));
        u91 = (((struct o37B0_float *)(a4))->v);
        t92 = *(int *)(((0x118 + a4) + 0x4));
        (((struct o90_float *)(((((struct o118_int *)(a4))->v))))->v) = u91;
        (((struct o90_float *)(t92))->v) = u91;
        (((struct o12E_ushort *)(a4))->v) = 0x0;
        (((struct o126_uchar *)(a4))->v) = 0x1;
        FUN_0c059e60(a4, 0x22);
        (((struct o37A0_float *)(a4))->v) = 0.0f;
        (((struct o5C_float *)(a4))->v) = -3.5999999f;
        (((struct o50_float *)(a4))->v) = (-(((((struct o5C_float *)(a4))->v)) * 30.0f));
        (((struct o60_float *)(a4))->v) = 0.0f;
        (((struct o58_float *)(a4))->v) = 0.0f;
        u96 = (((struct o50_float *)(a4))->v);
        u100 = (((((struct o5C_float *)(a4))->v)) * (((((struct o4_float *)0xC1C6634)->v)) - ((((struct o2C_float *)(a4))->v))));
        u102 = (u100 * 4.0f);
        t103 = math_signed_sqrt((((u96 * u96)) - u102));
        u104 = (((struct o5C_float *)(a4))->v);
        *(unsigned short *)((a4 + 0x1C)) = (int)(((-u96) - t103) / (u104 * (1.0f + 1.0f)));
        (((struct o4C_float *)(a4))->v) = ((((((struct o0_float *)0xC1C6634)->v)) - ((((struct o28_float *)(a4))->v))) / (((-u96) - t103) / (u104 * (1.0f + 1.0f))));
        (((struct o54_float *)(a4))->v) = ((((((struct o8_float *)0xC1C6634)->v)) - ((((struct o30_float *)(a4))->v))) / (((-u96) - t103) / (u104 * (1.0f + 1.0f))));
        t109 = *(int *)((a4 + 0x38));
        *(unsigned int *)((a4 + 0x38)) = (t109 & 0xFFFF);
        if ((int)(t109 & 0xFFFF) > (int)0x8000) {
            *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) - 0x10000);
        }
        (((struct o3868_uint *)(a4))->v) = (math_atan2_angle16((-((((struct o0_float *)0xC1C6634)->v))), (-((((struct o8_float *)0xC1C6634)->v)))));
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        t118 = ((int (*)(int))(FUN_0c037bf6))(a4);
        FUN_0c038362(a4);
        math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
        math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
        t122 = *(int *)((a4 + 0x38));
        *(unsigned int *)((a4 + 0x38)) = (t122 + 0xE38);
        if ((int)(t122 + 0xE38) > (int)((((struct o3868_int *)(a4))->v))) {
            *(unsigned int *)((a4 + 0x38)) = ((((struct o3868_int *)(a4))->v));
        }
        t128 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t128 - 1);
        t144 = (short)(t128 - 1);
        if ((int)(short)(t128 - 1) > 0) {
        } else {
            { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)(0xC1C6634); }
            (((struct o37B0_float *)(a4))->v) = 1.0f;
            *(int *)((int)stk + 12) = 0x9;
            *(int *)((int)stk + 8) = 0x0;
            t129 = *(signed char *)((a4 + 0x1));
            *(unsigned int *)(((int)stk + 16)) = t129;
            t130 = t129;
            *(int *)((int)stk + 4) = t130;
            FUN_0c07e79c(a4, t129, 0x0, 0x9, t130, 0x0, 0x9);
            (((struct o37B0_float *)(a4))->v) = ((((struct o3928_float *)(a4))->v));
            u133 = (((struct o37B0_float *)(a4))->v);
            t134 = *(int *)(((0x118 + a4) + 0x4));
            (((struct o90_float *)(((((struct o118_int *)(a4))->v))))->v) = u133;
            (((struct o90_float *)(t134))->v) = u133;
            *(int *)((int)stk + 0) = 0x0;
            FUN_0c05258e(0x2, 0x28, 0x100, 0x3C, 0x0);
            FUN_0c059e60(a4, 0x21);
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
            t144 = 0x16;
        }
    }
    return t144;
}

int FUN_0c0fa600(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 == 1) {
            t1 = FUN_0c05f254(0x100);
            if (t1 != 0) {
                t1 = FUN_0c05f254(0x2000);
                if (t1 != 0) {
                    (((struct o10_float *)0xC28E61C)->v) = (((((struct o10_float *)0xC28E61C)->v)) + 1.0f);
                }
                t1 = FUN_0c05f254(0x1000);
                if (t1 != 0) {
                    (((struct o10_float *)0xC28E61C)->v) = (((((struct o10_float *)0xC28E61C)->v)) - 1.0f);
                }
                t1 = FUN_0c05f254(0x800);
                if (t1 != 0) {
                    (((struct oC_float *)0xC28E61C)->v) = (((((struct oC_float *)0xC28E61C)->v)) - 1.0f);
                }
                t1 = FUN_0c05f254(0x400);
                if (t1 != 0) {
                    (((struct oC_float *)0xC28E61C)->v) = (((((struct oC_float *)0xC28E61C)->v)) + 1.0f);
                }
            } else {
                t1 = FUN_0c05f254(0x2000);
                if (t1 != 0) {
                    (((struct o4_float *)0xC28E61C)->v) = (((((struct o4_float *)0xC28E61C)->v)) + 1.0f);
                }
                t1 = FUN_0c05f254(0x1000);
                if (t1 != 0) {
                    (((struct o4_float *)0xC28E61C)->v) = (((((struct o4_float *)0xC28E61C)->v)) - 1.0f);
                }
                t1 = FUN_0c05f254(0x800);
                if (t1 != 0) {
                    (((struct o0_float *)0xC28E61C)->v) = (((((struct o0_float *)0xC28E61C)->v)) - 1.0f);
                }
                t1 = FUN_0c05f254(0x400);
                if (t1 != 0) {
                    (((struct o0_float *)0xC28E61C)->v) = (((((struct o0_float *)0xC28E61C)->v)) + 1.0f);
                }
            }
            t1 = 0x0;
            for (;;) {
                t2 = *(int *)((((0xC4 + a4) + t1) + 0xC));
                nlAddVector3op((t2 + 0x6C), (0x90 + t2), 0xC28E61C);
                t1 = (t1 + 0x4);
                if ((unsigned int)t1 >= (unsigned int)0x10) {
                    break;
                }
            }
            t1 = (((struct oC8_int *)(a4))->v);
            nlAddVector3op((t1 + 0x6C), (0x90 + t1), 0xC28E61C);
            t1 = (((struct oCC_int *)(a4))->v);
            nlAddVector3op((t1 + 0x6C), (0x90 + t1), 0xC28E628);
            t1 = FUN_0c05f22c(0x8000);
            if (t1 != 0) {
                return FUN_0c0fa5dc();
            }
            return t1;
        }
        
        return t0;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct oAC_ushort *)(a4))->v) = 0x1F;
    (((struct oA9_uchar *)(a4))->v) = 0x21;
    (((struct o30_float *)(a4))->v) = (1.0f + 1.0f);
    FUN_0c1171f0(a4);
    FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x0, 0x60, ((((struct o0_int *)0xC4B4118)->v)));
    FUN_0c03744a(((((struct oEC_int *)(a4))->v)), 0x0, 0x0, ((((struct o4_int *)0xC4B4118)->v)));
    FUN_0c03744a(((((struct oC8_int *)(a4))->v)), 0x0, 0x61, ((((struct o0_int *)0xC4B4118)->v)));
    t0 = (((struct oC8_int *)(a4))->v);
    *(unsigned short *)((t0 + 0x6)) = ((*(short *)((t0 + 0x6))) | 0x600);
    { struct mv4 { int w[4]; }; *(struct mv4 *)((t0 + 0x14)) = *(struct mv4 *)(0xC28E60C); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x90 + t0)) = *(struct mv3 *)((t0 + 0x6C)); }
    nlAddVector3op((t0 + 0x6C), (0x90 + t0), 0xC28E61C);
    FUN_0c03744a(((((struct oCC_int *)(a4))->v)), 0x0, 0x62, ((((struct o0_int *)0xC4B4118)->v)));
    t0 = (((struct oCC_int *)(a4))->v);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x90 + t0)) = *(struct mv3 *)((t0 + 0x6C)); }
    nlAddVector3op((t0 + 0x6C), (0x90 + t0), 0xC28E628);
    FUN_0c03744a(((((struct oD0_int *)(a4))->v)), 0x0, 0x63, ((((struct o0_int *)0xC4B4118)->v)));
    t0 = (((struct oD0_int *)(a4))->v);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x90 + t0)) = *(struct mv3 *)((t0 + 0x6C)); }
    nlAddVector3op((t0 + 0x6C), (0x90 + t0), 0xC28E61C);
    FUN_0c03744a(((((struct oD4_int *)(a4))->v)), 0x0, 0x64, ((((struct o0_int *)0xC4B4118)->v)));
    t0 = (((struct oD4_int *)(a4))->v);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x90 + t0)) = *(struct mv3 *)((t0 + 0x6C)); }
    nlAddVector3op((t0 + 0x6C), (0x90 + t0), 0xC28E61C);
    FUN_0c03744a(((((struct oD8_int *)(a4))->v)), 0x0, 0x65, ((((struct o0_int *)0xC4B4118)->v)));
    t0 = (((struct oD8_int *)(a4))->v);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x90 + t0)) = *(struct mv3 *)((t0 + 0x6C)); }
    nlAddVector3op((t0 + 0x6C), (0x90 + t0), 0xC28E61C);
    FUN_0c03744a(((((struct oDC_int *)(a4))->v)), 0x0, 0x66, ((((struct o0_int *)0xC4B4118)->v)));
    t0 = (((struct oDC_int *)(a4))->v);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x90 + t0)) = *(struct mv3 *)((t0 + 0x6C)); }
    nlAddVector3op((t0 + 0x6C), (0x90 + t0), 0xC28E61C);
    t0 = FUN_0c05f254(0x100);
    if (t0 != 0) {
        t0 = FUN_0c05f254(0x2000);
        if (t0 != 0) {
            (((struct o10_float *)0xC28E61C)->v) = (((((struct o10_float *)0xC28E61C)->v)) + 1.0f);
        }
        t0 = FUN_0c05f254(0x1000);
        if (t0 != 0) {
            (((struct o10_float *)0xC28E61C)->v) = (((((struct o10_float *)0xC28E61C)->v)) - 1.0f);
        }
        t0 = FUN_0c05f254(0x800);
        if (t0 != 0) {
            (((struct oC_float *)0xC28E61C)->v) = (((((struct oC_float *)0xC28E61C)->v)) - 1.0f);
        }
        t0 = FUN_0c05f254(0x400);
        if (t0 != 0) {
            (((struct oC_float *)0xC28E61C)->v) = (((((struct oC_float *)0xC28E61C)->v)) + 1.0f);
        }
    } else {
        t0 = FUN_0c05f254(0x2000);
        if (t0 != 0) {
            (((struct o4_float *)0xC28E61C)->v) = (((((struct o4_float *)0xC28E61C)->v)) + 1.0f);
        }
        t0 = FUN_0c05f254(0x1000);
        if (t0 != 0) {
            (((struct o4_float *)0xC28E61C)->v) = (((((struct o4_float *)0xC28E61C)->v)) - 1.0f);
        }
        t0 = FUN_0c05f254(0x800);
        if (t0 != 0) {
            (((struct o0_float *)0xC28E61C)->v) = (((((struct o0_float *)0xC28E61C)->v)) - 1.0f);
        }
        t0 = FUN_0c05f254(0x400);
        if (t0 != 0) {
            (((struct o0_float *)0xC28E61C)->v) = (((((struct o0_float *)0xC28E61C)->v)) + 1.0f);
        }
    }
    t0 = 0x0;
    for (;;) {
        t1 = *(int *)((((0xC4 + a4) + t0) + 0xC));
        nlAddVector3op((t1 + 0x6C), (0x90 + t1), 0xC28E61C);
        t0 = (t0 + 0x4);
        if ((unsigned int)t0 >= (unsigned int)0x10) {
            break;
        }
    }
    t0 = (((struct oC8_int *)(a4))->v);
    nlAddVector3op((t0 + 0x6C), (0x90 + t0), 0xC28E61C);
    t0 = (((struct oCC_int *)(a4))->v);
    nlAddVector3op((t0 + 0x6C), (0x90 + t0), 0xC28E628);
    t0 = FUN_0c05f22c(0x8000);
    if (t0 != 0) {
        return FUN_0c0fa5dc();
    }
    return t0;
}
