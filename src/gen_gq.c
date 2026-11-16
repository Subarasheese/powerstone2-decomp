/* Straight-line functions with calls and guards (batch gen_gq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o10_float { char p[0x10]; float v; };
struct o100_int { char p[0x100]; int v; };
struct o10C_int { char p[0x10C]; int v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o78_int { char p[0x78]; int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB0_float { char p[0xB0]; float v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c037498(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c059c7a(int, int);
int FUN_0c05ab7e(int, int);
int FUN_0c0bc25e(void);
int FUN_0c0e2390(int, int, int);
int FUN_0c100780(int);
int FUN_0c104cc8(int);
int FUN_0c105cec(int);
int FUN_0c1061dc(void);
int FUN_0c1061e0(void);
int FUN_0c1061e4(void);
int FUN_0c1066a4(void);
int FUN_0c115120(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c1171f0(int);
int FUN_0c117944(int, ...);
int FUN_0c117d54(void);
int FUN_0c117e76(void);
int FUN_0c14aacc(int, int);
int FUN_0c179ac0(void);
int FUN_0c17c130(int, int, int);
extern int FUN_0c187798();
int FUN_0c187b48(int, int, int);
float math_signed_sqrt(float);
float math_sin_angle16(int);
int math_vec3_mul_xyz(int, float, float, float);
int FUN_0c0be738(int a4, int a5, int a6, float f4, float f5);
int FUN_0c1061e8(int a4, int a5, int a6, int a7, float f4);
int FUN_0c14ab60(int a4, int a5, int a6, int a7);
int FUN_0c03bb4c(void);
int FUN_0c0fd6e4(int a4, int a5, int a6);
int FUN_0c0ca114(int a4, int a5, int a6, int a7);

int FUN_0c0be738(int a4, int a5, int a6, float f4, float f5)
{
    int stk[67];
    int t1;
    register int t3;
    register int t4;
    register int t5;
    register float u7;
    register int t32;
    register int t38;
    register int t19;
    register int t20;
    register int t21;
    register float u22;
    register float u23;
    register float u24;
    register float u25;
    register float u28;
    register int t45;
    register int t46;
    register int t47;
    register int t48;
    register int t49;
    register int t50;
    register int t51;
    register int t52;
    register float u54;
    register float u55;
    register int t69;
    register int t99;
    register int t2;
    register float u6;
    register int t14;
    register int t15;
    register float u42;
    register float u43;
    register int t79;
    register int t80;

    t1 = 0xC0BE780;
    t3 = (*(int *)0xC532458);
    t4 = a6;
    t5 = 0x0;
    u7 = f5;
    for (;;) {
        if (t3 == 0) {
            break;
        }
        t1 = 0x41C;
        t2 = (*(signed char *)((t3 + t1)));
        t2 = (unsigned char)t2;
        t4 = (*(int *)((t3 + 0xC)));
        if ((t2 == 0xC2) && ((t14 = *(signed char *)((t3 + 0x1)), t1 = t14, t1 == -1) && (t1 = 0x41D, t15 = *(signed char *)((t3 + t1)), t1 = t15, t1 == 2))) {
            t1 = 0x2C;
            u7 = (*(float *)((t3 + t1)));
            u6 = (*(float *)((a4 + t1)));
            u7 = (u7 - u6);
            u6 = u7;
            u6 = (u6 * u7);
            if (100000.0f > u6) {
                t1 = (unsigned short)t5;
                t1 = (t1 << 2);
                t5 = (t5 + 0x1);
                *(unsigned int *)(((((int)stk + 4) + 0x8) + t1)) = t3;
            }
        }
        t3 = t4;
    }
    t32 = 0x0;
    t38 = 0x0;
    if ((int)(unsigned short)t5 > 0) {
        t19 = 0x0;
        t20 = 0x0;
        for (;;) {
            *(int *)((int)stk + 0) = (t20 + (0x88 + ((int)stk + 4)));
            t21 = *(int *)(((((int)stk + 4) + 0x8) + t20));
            *(unsigned int *)(((int)stk + 4)) = t21;
            u22 = (((struct o28_float *)(a4))->v);
            u23 = (((struct o28_float *)(t21))->v);
            u24 = (((struct o30_float *)(a4))->v);
            u25 = (((struct o30_float *)(t21))->v);
            u28 = ((u25 - u24) * (u25 - u24));
            u28 = u28 + ((u23 - u22)) * ((u23 - u22));
            t19 = (t19 + 0x1);
            *(float *)(((t20 + (0x88 + ((int)stk + 4))) + 0x0)) = (math_signed_sqrt(u28));
            t20 = (t20 + 0x4);
            if ((int)(unsigned short)t19 >= (int)(unsigned short)t5) {
                break;
            }
        }
        t32 = t20;
        t45 = (unsigned short)t19;
        t38 = t19;
    } else {
        t45 = t2;
        t46 = t3;
        t47 = 0xC2;
        t48 = t4;
        u42 = u6;
        u43 = 100000.0f;
    }
    t49 = 0x0;
    t50 = t38;
    t51 = a4;
    t52 = t32;
    u54 = u42;
    u55 = u43;
    for (;;) {
        if ((int)(unsigned short)t49 >= (int)(unsigned short)t5) {
            break;
        }
        t47 = t49;
        t52 = (unsigned short)t49;
        t48 = (unsigned short)t47;
        t52 = (t52 << 2);
        t48 = (t48 << 2);
        t45 = (unsigned short)t47;
        t46 = t48;
        t48 = (t48 + (0x88 + ((int)stk + 4)));
        *(unsigned int *)(((int)stk + 4)) = (t52 + (0x88 + ((int)stk + 4)));
        if ((int)t45 < (int)(unsigned short)t5) {
            for (;;) {
                u54 = (*(float *)(((*(int *)(((int)stk + 4))) + 0x0)));
                t47 = (t47 + 0x1);
                if (u54 > ((*(float *)((t48 + 0x0))))) {
                    t50 = t52;
                    t51 = t46;
                    t50 = (t50 + (0x88 + ((int)stk + 4)));
                    u54 = (*(float *)((t50 + 0x0)));
                    t51 = (t51 + (0x88 + ((int)stk + 4)));
                    u55 = (*(float *)((t51 + 0x0)));
                    *(float *)((t51 + 0x0)) = u54;
                    t51 = t46;
                    *(float *)((t50 + 0x0)) = u55;
                    t50 = t52;
                    t51 = (t51 + (((int)stk + 4) + 0x8));
                    t50 = (t50 + (((int)stk + 4) + 0x8));
                    *(unsigned int *)(((int)stk + 8)) = t51;
                    t45 = (*(int *)((t50 + 0x0)));
                    t51 = (*(int *)((t51 + 0x0)));
                    *(unsigned int *)(((*(int *)(((int)stk + 8))) + 0x0)) = t45;
                    *(unsigned int *)((t50 + 0x0)) = t51;
                }
                t46 = (t46 + 0x4);
                t48 = (t48 + 0x4);
                if ((int)(unsigned short)t47 >= (int)(unsigned short)t5) {
                    break;
                }
            }
        }
        t49 = (t49 + 0x1);
    }
    if ((unsigned short)t5 != 0) {
        t69 = ((int)((int)(FUN_0c179ac0()) % (int)(unsigned short)t5));
        *(int *)((int)stk + 0) = t69;
        t79 = (*(int *)(((((int)stk + 4) + 0x8) + (((int)((int)(t69 * ((int)((int)(FUN_0c179ac0()) % (int)(unsigned short)t5))) / (int)(unsigned short)t5)) << 2))));
        t80 = 0x1;
    } else {
        t79 = ((((struct o78_int *)((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC)))->v));
        t80 = 0x0;
    }
    (((struct o78_uint *)((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC)))->v) = t79;
    (((struct o6C_float *)((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC)))->v) = ((((struct o28_float *)(t79))->v));
    (((struct o70_float *)((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC)))->v) = ((((struct o2C_float *)(t79))->v));
    (((struct o74_float *)((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC)))->v) = ((((struct o30_float *)(t79))->v));
    (((struct o22_ushort *)((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC)))->v) = t80;
    *(unsigned int *)(((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC) + 0x8)) = ((((struct o0_int *)0xC47245C)->v));
    t99 = FUN_0c0bc25e();
    (((struct o4_ushort *)0xC47245C)->v) = 0x1;
    return t99;
}

int FUN_0c1061e8(int a4, int a5, int a6, int a7, float f4)
{
    int stk[4];
    register int t0;
    register int t1;
    register int t3;
    register int t6;
    register int t8;
    register int t10;
    register int t14;
    register int t19;
    register int t20;
    register int t21;
    register int t25;
    register int t34;
    register int t39;
    register int t60;
    register int t62;
    register int t63;
    register int t64;
    register int t65;
    register int t87;
    register int t95;
    register int t100;
    register int t119;
    register int t121;
    register int t122;
    register int t123;
    register int t124;
    register int t74;
    register int t134;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                t1 = *(signed char *)0xC535BAD;
                t3 = t1;
                if (t1 != 1) {
                } else {
                    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                    t3 = 0x16;
                }
                return t3;
            }
            if (t0 == 3) {
                t6 = FUN_0c117d54();
                if ((int)t6 < 0) {
                    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                    return FUN_0c117e76();
                }
                return t6;
            }
            if (t0 == 4) {
                t8 = FUN_0c104cc8(0x3FCF);
                t10 = t8;
                if (t8 != 0) {
                    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                    (((struct o17_uchar *)(a4))->v) = 0x0;
                    t10 = 0x17;
                }
                return t10;
            }
            if (t0 == 5) {
                if ((unsigned int)0xC473D04 < (unsigned int)0xC474004) {
                    t14 = 0xC473D04;
                    for (;;) {
                        if (((*(int *)((t14 + 0x0))) & 0x1000) != 0) {
                            break;
                        }
                        t14 = (t14 + 0x4);
                        if ((unsigned int)t14 >= (unsigned int)0xC474004) {
                            (((struct o16_uchar *)(a4))->v) = 0x7;
                            (((struct o17_uchar *)(a4))->v) = 0x0;
                            return 0x17;
                        }
                    }
                    (((struct o16_uchar *)(a4))->v) = 0x6;
                } else {
                    (((struct o16_uchar *)(a4))->v) = 0x7;
                }
                (((struct o17_uchar *)(a4))->v) = 0x0;
                return 0x17;
            }
            if (t0 == 6) {
                t19 = *(signed char *)((a4 + 0x17));
                if (t19 != 0) {
                    if (t19 != 1) {
                        if (t19 != 2) {
                            return t19;
                        }
                        t20 = FUN_0c104cc8(0x3FCF);
                        if (t20 != 0) {
                            return FUN_0c105cec(a4);
                        }
                        return t20;
                    }
                    t21 = FUN_0c117d54();
                    if ((int)t21 < 0) {
                        (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                        return FUN_0c117e76();
                    }
                    return t21;
                }
                (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                *(int *)((int)stk + 0) = 0x50;
                return (FUN_0c117944(0x50));
            }
            if (t0 == 7) {
                return FUN_0c105cec(a4);
            }
            return t0;
        }
        t25 = *(signed char *)((a4 + 0x17));
        if (t25 != 0) {
            if (t25 != 1) {
                if (t25 != 2) {
                    t74 = t25;
                    if (t25 != 3) {
                    } else {
                        FUN_0c1061e0();
                        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                        (((struct o17_uchar *)(a4))->v) = 0x0;
                        t74 = 0x17;
                    }
                } else {
                    t34 = FUN_0c1061e4();
                    t74 = t34;
                    if (t34 == -1) {
                    } else {
                        t39 = (*(int *)((0xC290A90 + ((((int)((int)(FUN_0c179ac0()) % (int)0x3)) + ((t34 << 1) + t34)) << 2))));
                        *(int *)((int)stk + 0) = t39;
                        FUN_0c117944(t39);
                        (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                        t74 = 0x17;
                    }
                }
            } else {
                FUN_0c1061dc();
                (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                t74 = 0x17;
            }
        } else {
            t60 = *(signed char *)0xC5324AC;
            t74 = t60;
            if (t60 != 99) {
            } else {
                FUN_0c115120(0x3, a5, a6, a7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
                t62 = (((struct o4_int *)0xC5325B0)->v);
                t63 = (((struct o0_int *)0xC5325B0)->v);
                (((struct oA0_float *)(t62))->v) = 1.0f;
                (((struct o9C_float *)(t62))->v) = 1.0f;
                (((struct oA0_float *)(t63))->v) = 1.0f;
                (((struct o9C_float *)(t63))->v) = 1.0f;
                t64 = (((struct o4_int *)0xC5325B0)->v);
                t65 = (((struct o0_int *)0xC5325B0)->v);
                (((struct o98_float *)(t64))->v) = 1.0f;
                (((struct o98_float *)(t65))->v) = 1.0f;
                (((struct o94_float *)(t64))->v) = 1.0f;
                (((struct o94_float *)(t65))->v) = 1.0f;
                (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                t74 = 0x17;
            }
        }
        return t74;
    }
    FUN_0c100780(0x0);
    FUN_0c1066a4();
    FUN_0c059c7a(0x18, 0x1);
    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
    (((struct o17_uchar *)(a4))->v) = 0x0;
    t87 = *(signed char *)((a4 + 0x17));
    if (t87 != 0) {
        if (t87 != 1) {
            if (t87 != 2) {
                t134 = t87;
                if (t87 != 3) {
                } else {
                    FUN_0c1061e0();
                    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                    (((struct o17_uchar *)(a4))->v) = 0x0;
                    t134 = 0x17;
                }
            } else {
                t95 = FUN_0c1061e4();
                t134 = t95;
                if (t95 == -1) {
                } else {
                    t100 = (*(int *)((0xC290A90 + ((((int)((int)(FUN_0c179ac0()) % (int)0x3)) + ((t95 << 1) + t95)) << 2))));
                    *(int *)((int)stk + 0) = t100;
                    FUN_0c117944(t100);
                    (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                    t134 = 0x17;
                }
            }
        } else {
            FUN_0c1061dc();
            (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
            t134 = 0x17;
        }
    } else {
        t119 = *(signed char *)0xC5324AC;
        t134 = t119;
        if (t119 != 99) {
        } else {
            FUN_0c115120(0x3, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
            t121 = (((struct o4_int *)0xC5325B0)->v);
            t122 = (((struct o0_int *)0xC5325B0)->v);
            (((struct oA0_float *)(t121))->v) = 1.0f;
            (((struct o9C_float *)(t121))->v) = 1.0f;
            (((struct oA0_float *)(t122))->v) = 1.0f;
            (((struct o9C_float *)(t122))->v) = 1.0f;
            t123 = (((struct o4_int *)0xC5325B0)->v);
            t124 = (((struct o0_int *)0xC5325B0)->v);
            (((struct o98_float *)(t123))->v) = 1.0f;
            (((struct o98_float *)(t124))->v) = 1.0f;
            (((struct o94_float *)(t123))->v) = 1.0f;
            (((struct o94_float *)(t124))->v) = 1.0f;
            (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
            t134 = 0x17;
        }
    }
    return t134;
}

int FUN_0c14ab60(int a4, int a5, int a6, int a7)
{
    int stk[5];

    register int R1;
    register int R2;
    register int R3;
    register float F2;
    register float F3;
    register float F4;
    register float F5;
    register float F6;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    v0_5 = a4;
    v0_2 = a5;
    v0_1 = a6;
    v0_4 = *(signed char *)((v0_5 + 0x14));
    v0_3 = (v0_4);
    v0_0 = (v0_5);
    v0_5 = (0x0);
    if ((v0_4 == 0)) goto L_C14AB8C;
    if ((v0_3 == 1)) goto L_C14AB98;
    L_C14AD72:;
    return v0_3;
    L_C14AB98:;
    if (!(((*(signed char *)(((*(int *)((v0_0 + 0x10))) + 0x1B))) != 0))) goto L_C14AD6C;
    v0_6 = *(signed char *)((v0_0 + 0x15));
    v0_3 = (v0_6);
    v0_2 = (0xC17C130);
    v0_2 = (0xC058204);
    v0_4 = (0x3);
    v0_2 = (0xC202AD4);
    if ((v0_6 == 0)) goto L_C14ABC2;
    if ((v0_3 == 1)) goto L_C14ABE2;
    if ((v0_3 == 2)) goto L_C14AC02;
    *(unsigned int *)(((int)stk + 4)) = v0_5;
    v0_6 = (v0_2);
    v0_5 = (v0_5);
    w0_0 = (0.0f);
    w0_1 = (0.699999988f);
    goto L_C14AD2A;
    L_C14AD6C:;
    v0_3 = ((((int (*)(int, int, int, int))(FUN_0c03f346))(v0_0, v0_2, v0_1, a7)));
    goto L_C14AD72;
    L_C14AD2A:;
    if (((unsigned int)(*(int *)(((int)stk + 4))) < (unsigned int)v0_4)) goto L_C14ACCC;
    v0_3 = (((struct oC4_int *)(v0_0))->v);
    (((struct o80_uint *)(v0_3))->v) = (((((struct o80_int *)(v0_3))->v)) + 0x5B0);
    v0_3 = (((struct oC8_int *)(v0_0))->v);
    (((struct o80_uint *)(v0_3))->v) = (((((struct o80_int *)(v0_3))->v)) - 0x5B0);
    v0_3 = *(short *)((v0_0 + 0x1E));
    *(unsigned short *)((v0_0 + 0x1E)) = (v0_3 - 1);
    if (((int)(short)(v0_3 - 1) > 0)) goto L_C14AD60;
    FUN_0c14aacc(v0_0, 0x0);
    *(unsigned short *)((v0_0 + 0x1E)) = 0x270F;
    L_C14AD60:;
    v0_4 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_4 - 1);
    v0_3 = ((short)(v0_4 - 1));
    if (((int)(short)(v0_4 - 1) > 0)) goto L_C14AD72;
    goto L_C14AD6C;
    L_C14ACCC:;
    v0_7 = *(int *)((((0xC4 + v0_0) + v0_5) + 0x0));
    *(unsigned int *)(((int)stk + 0)) = v0_6;
    FUN_0c0e2390((((int)stk + 0) + 0x8), 0xC202B10, (v0_6 + 0x4));
    w0_3 = (((struct o10_float *)((*(int *)(((int)stk + 0)))))->v);
    math_vec3_mul_xyz((((int)stk + 0) + 0x8), w0_3, w0_3, w0_3);
    FUN_0c17c130((0x84 + v0_7), (0x84 + v0_7), (((int)stk + 0) + 0x8));
    w0_2 = (((struct o18_float *)(v0_7))->v);
    w0_3 = (w0_3 * w0_1);
    (((struct o18_float *)(v0_7))->v) = (w0_2 - w0_3);
    v0_3 = (0x18);
    v0_7 = (v0_7);
    if ((!(0.0f > (w0_2 - w0_3)))) goto L_C14AD16;
    *(float *)((v0_7 + v0_3)) = w0_0;
    L_C14AD16:;
    w0_2 = *(float *)((v0_7 + v0_3));
    (((struct o20_float *)(v0_7))->v) = w0_2;
    (((struct o1C_float *)(v0_7))->v) = w0_2;
    *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x1);
    v0_6 = ((v0_6 + 0x14));
    v0_5 = ((v0_5 + 0x4));
    goto L_C14AD2A;
    L_C14AC02:;
    *(unsigned int *)(((int)stk + 0)) = v0_5;
    v0_7 = (v0_2);
    v0_5 = (v0_5);
    w0_0 = (0.25f);
    L_C14AC60:;
    if (((unsigned int)(*(int *)(((int)stk + 0))) < (unsigned int)v0_4)) goto L_C14AC24;
    v0_1 = (((struct oC4_int *)(v0_0))->v);
    (((struct o80_uint *)(v0_1))->v) = (((((struct o80_int *)(v0_1))->v)) + 0x5B0);
    v0_1 = (((struct oC8_int *)(v0_0))->v);
    (((struct o80_uint *)(v0_1))->v) = (((((struct o80_int *)(v0_1))->v)) - 0x5B0);
    v0_1 = *(short *)((v0_0 + 0x1E));
    *(unsigned short *)((v0_0 + 0x1E)) = (v0_1 - 1);
    if (((int)(short)(v0_1 - 1) > 0)) goto L_C14AC96;
    FUN_0c14aacc(v0_0, 0x1);
    *(unsigned short *)((v0_0 + 0x1E)) = 0x8;
    L_C14AC96:;
    v0_1 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_1 - 1);
    v0_3 = ((short)(v0_1 - 1));
    if (((int)(short)(v0_1 - 1) > 0)) goto L_C14AD72;
    *(unsigned short *)((v0_0 + 0x1C)) = 0xA;
    L_C14ACA6:;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    v0_3 = (0x15);
    goto L_C14AD72;
    L_C14AC24:;
    v0_3 = *(int *)((((0xC4 + v0_0) + v0_5) + 0x0));
    FUN_0c187798(v0_7, v0_2, v0_1);
    math_vec3_mul_xyz((((int)stk + 0) + 0x8), w0_0, w0_0, w0_0);
    FUN_0c17c130((0x84 + v0_3), (0x84 + v0_3), (((int)stk + 0) + 0x8));
    *(unsigned int *)(((int)stk + 0)) = ((*(int *)(((int)stk + 0))) + 0x1);
    v0_7 = ((v0_7 + 0x14));
    v0_5 = ((v0_5 + 0x4));
    goto L_C14AC60;
    L_C14ABE2:;
    v0_1 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_1 - 1);
    v0_3 = ((short)(v0_1 - 1));
    if (((int)(short)(v0_1 - 1) <= 0)) goto L_C14ABF2;
    goto L_C14AD72;
    L_C14ABF2:;
    (((struct oA8_uchar *)(v0_0))->v) = 0x1;
    *(unsigned short *)((v0_0 + 0x1C)) = 0x4;
    *(unsigned short *)((v0_0 + 0x1E)) = 0x2;
    goto L_C14ACA6;
    L_C14ABC2:;
    (((struct oA8_uchar *)(v0_0))->v) = v0_5;
    *(unsigned short *)((v0_0 + 0x1C)) = 0x4;
    FUN_0c14aacc(v0_0, 0x0);
    FUN_0c05ab7e(0x18, (v0_0 + 0x28));
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    goto L_C14ABE2;
    L_C14AB8C:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    (((struct o15_uchar *)(v0_0))->v) = v0_5;
    goto L_C14AB98;
}

int FUN_0c03bb4c(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;

    t0 = (FUN_0c187b48(0xC3CC420, 0x0, 0x4));
    t1 = 0x70;
    t2 = 0x7A;
    t3 = 0x1;
    for (;;) {
        if (t2 == 0) {
            break;
        }
        t0 = t1;
        t5 = 0xC5429C8;
        t5 = (t5 + 0x4C);
        t6 = t3;
        t6 = (t6 + t5);
        t4 = (*(signed char *)((t6 + 0x0)));
        t2 = (t2 - 1);
        t3 = (t3 + 0x1);
        *(unsigned char *)((0xC3CC420 + t0)) = t4;
        t1 = (t1 + 0x1);
    }
    *(unsigned char *)((t1 + 0xC3CC420)) = 0x0;
    t0 = (t1 + 0x1);
    t1 = 0x0;
    for (;;) {
        t2 = t0;
        t0 = (t0 + 0x1);
        t3 = (0xC542FA0 + t1);
        t1 = (t1 + 0x1);
        *(unsigned char *)((0xC3CC420 + t2)) = (*(signed char *)((t3 + 0x0)));
        if ((int)t1 >= (int)0x5) {
            break;
        }
    }
    t1 = t0;
    t0 = 0x0;
    for (;;) {
        t2 = t1;
        t1 = (t1 + 0x1);
        t5 = (0xC542F9C + t0);
        t0 = (t0 + 0x1);
        t3 = *(signed char *)((t5 + 0x0));
        *(unsigned char *)((0xC3CC420 + t2)) = t3;
        if ((int)t0 >= (int)0x4) {
            break;
        }
    }
    t0 = t2;
    t2 = t1;
    t1 = 0xC;
    for (;;) {
        if (t1 == 0) {
            break;
        }
        t0 = t2;
        t1 = (t1 - 1);
        *(unsigned char *)((0xC3CC420 + t0)) = 0x0;
        t2 = (t2 + 0x1);
    }
    t1 = t0;
    t0 = t4;
    t4 = t3;
    t3 = t5;
    t5 = t2;
    t2 = 0x16;
    t6 = 0x81;
    for (;;) {
        if (t2 == 0) {
            break;
        }
        t1 = t5;
        t4 = 0xC5429C8;
        t4 = (t4 + 0x4C);
        t3 = t6;
        t3 = (t3 + t4);
        t0 = (*(signed char *)((t3 + 0x0)));
        t2 = (t2 - 1);
        t6 = (t6 + 0x1);
        *(unsigned char *)((0xC3CC420 + t1)) = t0;
        t5 = (t5 + 0x1);
    }
    t2 = t1;
    t1 = t5;
    t5 = 0xA;
    for (;;) {
        if (t5 == 0) {
            break;
        }
        t2 = t1;
        t5 = (t5 - 1);
        *(unsigned char *)((0xC3CC420 + t2)) = 0x0;
        t1 = (t1 + 0x1);
    }
    t5 = t2;
    t2 = t0;
    t0 = t4;
    t4 = t3;
    t3 = t1;
    t1 = 0x97;
    t6 = 0x9;
    for (;;) {
        if (t6 == 0) {
            break;
        }
        t5 = t3;
        t0 = 0xC5429C8;
        t0 = (t0 + 0x4C);
        t4 = t1;
        t4 = (t4 + t0);
        t2 = (*(signed char *)((t4 + 0x0)));
        t6 = (t6 - 1);
        t1 = (t1 + 0x1);
        *(unsigned char *)((0xC3CC420 + t5)) = t2;
        t3 = (t3 + 0x1);
    }
    t1 = t5;
    t5 = t3;
    t3 = 0x7;
    for (;;) {
        if (t3 == 0) {
            break;
        }
        t1 = t5;
        t3 = (t3 - 1);
        *(unsigned char *)((0xC3CC420 + t1)) = 0x0;
        t5 = (t5 + 0x1);
    }
    t3 = t1;
    t1 = t2;
    t2 = t0;
    t0 = t4;
    t4 = t5;
    t5 = 0xA1;
    t6 = 0xA;
    for (;;) {
        if (t6 == 0) {
            break;
        }
        t3 = t4;
        t2 = 0xC5429C8;
        t2 = (t2 + 0x4C);
        t0 = t5;
        t0 = (t0 + t2);
        t1 = (*(signed char *)((t0 + 0x0)));
        t6 = (t6 - 1);
        t5 = (t5 + 0x1);
        *(unsigned char *)((0xC3CC420 + t3)) = t1;
        t4 = (t4 + 0x1);
    }
    t5 = t3;
    t3 = t4;
    t4 = 0x6;
    for (;;) {
        if (t4 == 0) {
            break;
        }
        t5 = t3;
        t4 = (t4 - 1);
        *(unsigned char *)((0xC3CC420 + t5)) = 0x0;
        t3 = (t3 + 0x1);
    }
    t4 = t5;
    t5 = t1;
    t1 = t2;
    t2 = t0;
    t0 = t3;
    t3 = 0xAB;
    t6 = 0xD;
    for (;;) {
        if (t6 == 0) {
            break;
        }
        t4 = t0;
        t1 = 0xC5429C8;
        t1 = (t1 + 0x4C);
        t2 = t3;
        t2 = (t2 + t1);
        t5 = (*(signed char *)((t2 + 0x0)));
        t6 = (t6 - 1);
        t3 = (t3 + 0x1);
        *(unsigned char *)((0xC3CC420 + t4)) = t5;
        t0 = (t0 + 0x1);
    }
    t2 = t4;
    t3 = t0;
    t0 = 0x3;
    for (;;) {
        if (t0 == 0) {
            break;
        }
        t2 = t3;
        t0 = (t0 - 1);
        *(unsigned char *)((0xC3CC420 + t2)) = 0x0;
        t3 = (t3 + 0x1);
    }
    t0 = t1;
    t1 = t3;
    t2 = 0x0;
    for (;;) {
        t4 = *(int *)0xC542B80;
        t5 = t0;
        t6 = t4;
        if ((int)t2 < (int)0x7) {
            t7 = t4;
            t4 = t2;
            for (;;) {
                t0 = 0xC1874B0;
                t4 = (t4 + 0x1);
                t7 = ((int)((int)t7 / (int)0xA));
                if ((int)t4 >= (int)0x7) {
                    break;
                }
            }
            t5 = 0xC1874B0;
            t6 = t7;
        }
        t0 = t5;
        t0 = 0xC18760C;
        t2 = (t2 + 0x1);
        t3 = t1;
        t1 = (t1 + 0x1);
        *(unsigned char *)((0xC3CC420 + t3)) = ((int)((int)t6 % (int)0xA));
        if ((int)t2 >= (int)0x8) {
            break;
        }
    }
    return t3;
}

int FUN_0c0fd6e4(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    t0 = *(signed char *)((a4 + 0x14));
    t1 = *(int *)((a4 + 0x10));
    if (t0 != 0) {
        t2 = t0;
        if (t0 != 1) {
        } else {
            *(volatile int *)((a4 + 0xC8));
            t0 = ((int (*)(int, int, int))(FUN_0c187798))(a4, a5, a6);
            if ((*(signed char *)((0xA8 + (*(int *)((a4 + 0x10)))))) == 1) {
                (((struct oA8_uchar *)(a4))->v) = 0x1;
            } else {
                (((struct oA8_uchar *)(a4))->v) = 0x0;
            }
            t0 = ((int (*)(void))(FUN_0c187798))();
            FUN_0c1171f0(a4);
            t0 = *(signed char *)((a4 + 0x15));
            switch (t0) {
            case 0:
                if ((*(signed char *)(((t1 + 0x41C) + 0x0))) != 1) {
                } else {
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                }
                break;
            case 1:
                if ((*(signed char *)(((t1 + 0x41C) + 0x0))) != 0) {
                    if ((int)(*(short *)((a4 + 0x1E))) < (int)0x20) {
                        *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x4);
                        if ((int)(*(short *)((a4 + 0x1E))) >= (int)0x20) {
                            *(unsigned short *)((a4 + 0x1E)) = 0x20;
                            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        }
                    }
                } else {
                    (((struct o15_uchar *)(a4))->v) = 0x3;
                }
                break;
            case 2:
                if ((*(signed char *)(((t1 + 0x41C) + 0x0))) == 0) {
                    (((struct o15_uchar *)(a4))->v) = 0x3;
                }
                break;
            case 3:
                if ((*(signed char *)(((t1 + 0x41C) + 0x0))) == 1) {
                    (((struct o15_uchar *)(a4))->v) = 0x1;
                } else {
                    if ((int)(*(short *)((a4 + 0x1E))) > 0) {
                        *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) - 1);
                        if ((int)(*(short *)((a4 + 0x1E))) <= 0) {
                            *(unsigned short *)((a4 + 0x1E)) = 0x0;
                            (((struct o15_uchar *)(a4))->v) = 0x0;
                        }
                    }
                }
                break;
            }
            if ((*(signed char *)((a4 + 0x15))) != 0) {
                t0 = (((struct oC4_int *)(a4))->v);
                (((struct o7C_uint *)(t0))->v) = (int)((float)((((struct o7C_int *)(t0))->v)) + (((float)((((struct o4_int *)0xC28EC14)->v)) * ((float)(*(short *)((a4 + 0x1E))) / 32.0f))));
                t0 = (((struct oC8_int *)(a4))->v);
                u0 = (((((struct o8_float *)0xC28EC14)->v)) * (math_sin_angle16((*(short *)((a4 + 0x1C))))));
                (((struct o7C_uint *)(t0))->v) = ((int)((((u0 * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF);
                *(unsigned short *)((a4 + 0x1C)) = (int)((float)(*(short *)((a4 + 0x1C))) + (((float)((((struct o0_int *)0xC28EC14)->v)) * ((float)(*(short *)((a4 + 0x1E))) / 32.0f))));
                (((struct o14_float *)(((((struct oC8_int *)(a4))->v))))->v) = ((float)(*(short *)((a4 + 0x1E))) / 32.0f);
            } else {
                (((struct o14_float *)(((((struct oC8_int *)(a4))->v))))->v) = 0.0f;
            }
            t2 = 0x14;
        }
        t0 = t2;
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o15_uchar *)(a4))->v) = 0x0;
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0x1F;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        t2 = ((int (*)(int, int, int))(FUN_0c187798))(a4, a5, a6);
        t2 = ((int (*)(void))(FUN_0c187798))();
        FUN_0c037498(((((struct oC4_int *)(a4))->v)), 0x0, 0x1A, (*(int *)0xC4B410C));
        FUN_0c037498(((((struct oC8_int *)(a4))->v)), 0x0, 0x1B, (*(int *)0xC4B410C));
        t2 = (((struct oC8_int *)(a4))->v);
        *(unsigned short *)((t2 + 0x6)) = ((*(short *)((t2 + 0x6))) | 0x400);
        *(unsigned short *)((a4 + 0x1E)) = 0x0;
        *(volatile int *)((a4 + 0xC8));
        t2 = ((int (*)(void))(FUN_0c187798))();
        if ((*(signed char *)((0xA8 + (*(int *)((a4 + 0x10)))))) == 1) {
            (((struct oA8_uchar *)(a4))->v) = 0x1;
        } else {
            (((struct oA8_uchar *)(a4))->v) = 0x0;
        }
        t2 = ((int (*)(void))(FUN_0c187798))();
        FUN_0c1171f0(a4);
        t2 = *(signed char *)((a4 + 0x15));
        switch (t2) {
        case 0:
            if ((*(signed char *)(((t1 + 0x41C) + 0x0))) != 1) {
            } else {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            }
            break;
        case 1:
            if ((*(signed char *)(((t1 + 0x41C) + 0x0))) != 0) {
                if ((int)(*(short *)((a4 + 0x1E))) < (int)0x20) {
                    *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x4);
                    if ((int)(*(short *)((a4 + 0x1E))) >= (int)0x20) {
                        *(unsigned short *)((a4 + 0x1E)) = 0x20;
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    }
                }
            } else {
                (((struct o15_uchar *)(a4))->v) = 0x3;
            }
            break;
        case 2:
            if ((*(signed char *)(((t1 + 0x41C) + 0x0))) == 0) {
                (((struct o15_uchar *)(a4))->v) = 0x3;
            }
            break;
        case 3:
            if ((*(signed char *)(((t1 + 0x41C) + 0x0))) == 1) {
                (((struct o15_uchar *)(a4))->v) = 0x1;
            } else {
                if ((int)(*(short *)((a4 + 0x1E))) > 0) {
                    *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) - 1);
                    if ((int)(*(short *)((a4 + 0x1E))) <= 0) {
                        *(unsigned short *)((a4 + 0x1E)) = 0x0;
                        (((struct o15_uchar *)(a4))->v) = 0x0;
                    }
                }
            }
            break;
        }
        if ((*(signed char *)((a4 + 0x15))) != 0) {
            t1 = (((struct oC4_int *)(a4))->v);
            (((struct o7C_uint *)(t1))->v) = (int)((float)((((struct o7C_int *)(t1))->v)) + (((float)((((struct o4_int *)0xC28EC14)->v)) * ((float)(*(short *)((a4 + 0x1E))) / 32.0f))));
            t1 = (((struct oC8_int *)(a4))->v);
            u0 = (((((struct o8_float *)0xC28EC14)->v)) * (math_sin_angle16((*(short *)((a4 + 0x1C))))));
            (((struct o7C_uint *)(t1))->v) = ((int)((((u0 * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF);
            *(unsigned short *)((a4 + 0x1C)) = (int)((float)(*(short *)((a4 + 0x1C))) + (((float)((((struct o0_int *)0xC28EC14)->v)) * ((float)(*(short *)((a4 + 0x1E))) / 32.0f))));
            (((struct o14_float *)(((((struct oC8_int *)(a4))->v))))->v) = ((float)(*(short *)((a4 + 0x1E))) / 32.0f);
        } else {
            (((struct o14_float *)(((((struct oC8_int *)(a4))->v))))->v) = 0.0f;
        }
        t0 = 0x14;
    }
    return t0;
}

int FUN_0c0ca114(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    int t4;
    register float u0;

    t3 = *(signed char *)((a4 + 0x1));
    if ((*(signed char *)((a4 + 0x14))) != 0) {
        t4 = *(signed char *)((a4 + 0x424));
        if ((t4 != 0) && (t4 != 1)) {
            if (t4 != 2) {
                if (t4 != 3) {
                } else {
                    *(unsigned char *)((((((struct o100_int *)((((short)t3 * (short)0x3938) + 0xC532498)))->v)) + 0x0)) = 0x1;
                    *(unsigned char *)((((((struct o10C_int *)((((short)t3 * (short)0x3938) + 0xC532498)))->v)) + 0x0)) = 0x1;
                }
            } else {
                t4 = *(signed char *)(((((short)t3 * (short)0x3938) + 0xC532498) + 0x446));
                *(unsigned char *)((((((short)(*(signed char *)(((((short)t3 * (short)0x3938) + 0xC532498) + 0x371A))) * (short)0x2D0) + (0x2BC8 + (((short)t3 * (short)0x3938) + 0xC532498))) + (((((t4 << 2) << 1) + t4) << 2) << 2)) + 0x0)) = 0x1;
                t4 = *(signed char *)(((((short)t3 * (short)0x3938) + 0xC532498) + 0x447));
                *(unsigned char *)((((((short)(*(signed char *)(((((short)t3 * (short)0x3938) + 0xC532498) + 0x371A))) * (short)0x2D0) + (0x3168 + (((short)t3 * (short)0x3938) + 0xC532498))) + (((((t4 << 2) << 1) + t4) << 2) << 2)) + 0x0)) = 0x1;
            }
        }
        return FUN_0c03f346(a4, (((short)t3 * (short)0x3938) + 0xC532498), 0x1, a7);
    }
    if ((*(signed char *)(((((short)t3 * (short)0x3938) + 0xC532498) + 0x3714))) != 0) {
        t4 = *(signed char *)((a4 + 0x424));
        if (((*(signed char *)(((((t4 << 2) << 1) + (0x386C + (((short)t3 * (short)0x3938) + 0xC532498))) + 0x0))) == (unsigned char)(*(signed char *)((a4 + 0x41C)))) && (t0 = *(int *)(((((t4 << 2) << 1) + (0x386C + (((short)t3 * (short)0x3938) + 0xC532498))) + 0x4)), t0 == a4)) {
            if (((*(signed char *)(((((short)t3 * (short)0x3938) + 0xC532498) + 0x371A))) == 0) && ((t1 = *(signed char *)(((((short)t3 * (short)0x3938) + 0xC532498) + 0x3715)), t1 != 32) || (t2 = *(signed char *)(((((short)t3 * (short)0x3938) + 0xC532498) + 0x3739)), t2 != 27))) {
                (((struct oA8_uchar *)(a4))->v) = (*(signed char *)(((((short)t3 * (short)0x3938) + 0xC532498) + 0xA8)));
                if (((unsigned short)((((struct oAC_short *)((((short)t3 * (short)0x3938) + 0xC532498)))->v)) & 0x400) != 0) {
                    (((struct oAC_ushort *)(a4))->v) = 0x40F;
                    u0 = ((((struct oB0_float *)((((short)t3 * (short)0x3938) + 0xC532498)))->v));
                } else {
                    (((struct oAC_ushort *)(a4))->v) = 0xF;
                    u0 = 1.0f;
                }
                (((struct oB0_float *)(a4))->v) = u0;
                t0 = *(signed char *)((a4 + 0x424));
                t1 = t0;
                if (t0 == 0) {
                } else {
                    t2 = t0;
                    if (t0 == 1) {
                    } else {
                        if (t0 != 2) {
                            t4 = t0;
                            if (t0 != 3) {
                            } else {
                                t0 = *(signed char *)(((((short)t3 * (short)0x3938) + 0xC532498) + 0x2));
                                if ((t0 != 6) && (t0 != 7)) {
                                    *(unsigned char *)((((((struct o100_int *)((((short)t3 * (short)0x3938) + 0xC532498)))->v)) + 0x0)) = 0x0;
                                    *(unsigned char *)((((((struct o10C_int *)((((short)t3 * (short)0x3938) + 0xC532498)))->v)) + 0x0)) = 0x0;
                                } else {
                                    *(unsigned char *)((((((struct o100_int *)((((short)t3 * (short)0x3938) + 0xC532498)))->v)) + 0x0)) = 0x1;
                                    *(unsigned char *)((((((struct o10C_int *)((((short)t3 * (short)0x3938) + 0xC532498)))->v)) + 0x0)) = 0x1;
                                }
                                if ((*(signed char *)(((((short)t3 * (short)0x3938) + 0xC532498) + 0x371D))) == 6) {
                                    *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x0;
                                    *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x0;
                                } else {
                                    *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
                                    *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x1;
                                }
                                t4 = 0xC8;
                            }
                            t0 = t4;
                        } else {
                            if ((unsigned char)(*(signed char *)((a4 + 0x41C))) != 112) {
                                t4 = *(signed char *)(((((short)t3 * (short)0x3938) + 0xC532498) + 0x446));
                                *(unsigned char *)((((((short)(*(signed char *)(((((short)t3 * (short)0x3938) + 0xC532498) + 0x371A))) * (short)0x2D0) + (0x2BC8 + (((short)t3 * (short)0x3938) + 0xC532498))) + (((((t4 << 2) << 1) + t4) << 2) << 2)) + 0x0)) = 0x0;
                                t4 = *(signed char *)(((((short)t3 * (short)0x3938) + 0xC532498) + 0x447));
                                *(unsigned char *)((((((short)(*(signed char *)(((((short)t3 * (short)0x3938) + 0xC532498) + 0x371A))) * (short)0x2D0) + (0x3168 + (((short)t3 * (short)0x3938) + 0xC532498))) + (((((t4 << 2) << 1) + t4) << 2) << 2)) + 0x0)) = 0x0;
                            }
                            t4 = *(signed char *)(((((short)t3 * (short)0x3938) + 0xC532498) + 0x3721));
                            if (((unsigned char)t4 != 41) && ((unsigned char)t4 != 42)) {
                                *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
                            } else {
                                *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x0;
                            }
                            t0 = 0xC4;
                        }
                        t2 = t0;
                    }
                    t1 = t2;
                }
                return t1;
            }
            (((struct oA8_uchar *)(a4))->v) = 0x0;
            return 0xA8;
        }
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    return 0x14;
}
