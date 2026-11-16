/* Straight-line functions with calls and guards (batch gen_jj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o94_float { char p[0x94]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c02f77e(void);
int FUN_0c02f7ec(void);
int FUN_0c02f7fc(void);
int FUN_0c02f82c(void);
int FUN_0c02f83c(void);
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int);
int FUN_0c03f444(int, int, int);
int FUN_0c0582de(int);
int FUN_0c05f22c(int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c07e2f4(int, int);
int FUN_0c0e2390(int, int, int);
int FUN_0c1171f0(int);
int FUN_0c117a6e(int, ...);
int FUN_0c179ac0(void);
int FUN_0c17c130(int, int, int);
int FUN_0c17c450(int);
int FUN_0c187798(void);
float math_cos_angle16(int);
float math_sin_angle16(int);
int math_vec3_mul_xyz(int, float, float, float);
int FUN_0c142a58(int a4, int a5, int a6, int a7, int a8);
int FUN_0c1502e8(int a4, int a5, int a6, int a7, int a8, int a9);
int FUN_0c04c8d4(int a4, int a5, int a6);
int FUN_0c0e2b30(int a4);
int FUN_0c117b58(int a4);

int FUN_0c142a58(int a4, int a5, int a6, int a7, int a8)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;

    t1 = FUN_0c037320(0x1B, (*(int *)0xC4B40CC));
    t2 = 0x5;
    if ((int)a6 >= 0) {
        t2 = 0x1;
    }
    t3 = FUN_0c03f444(t2, 0x0, t1);
    t1 = t3;
    if (t3 == 0) {
    } else {
        FUN_0c03733c(t3, 0x1B, (*(int *)0xC4B40CC));
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
            if ((a5 & 0x2) != 0) {
                (((struct o88_float *)(t2))->v) = 1.0f;
                (((struct o84_float *)(t2))->v) = 1.0f;
            } else {
                (((struct o88_float *)(t2))->v) = 3.0f;
                (((struct o84_float *)(t2))->v) = 3.0f;
            }
            t0 = (t0 + 0x1);
            (((struct o8C_float *)(t2))->v) = 1.0f;
        }
        *(unsigned int *)((t3 + 0x4)) = 0xC142BDC;
        *(unsigned char *)((t3 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        (((struct oAC_ushort *)(t3))->v) = 0x1F;
        (((struct oA9_uchar *)(t3))->v) = 0x21;
        *(unsigned int *)((t3 + 0x10)) = a4;
        (((struct o48_float *)(t3))->v) = 1.0f;
        (((struct o44_float *)(t3))->v) = 1.0f;
        (((struct o40_float *)(t3))->v) = 1.0f;
        (((struct o22_ushort *)(t3))->v) = a8;
        t0 = ((int (*)(int, int, int))(FUN_0c187798))(t2, ((*(int *)(((((*(int *)((((a5 & 0x1) << 2) + 0xC202508))) << 2) + (0xC4 + a4)) + 0x0))) + 0x28), 0x1F);
        FUN_0c0582de((t3 + 0x28));
        t0 = ((int (*)(void))(FUN_0c187798))();
        FUN_0c17c450((t3 + 0x4C));
        u0 = *(float *)0xC142C2C;
        math_vec3_mul_xyz((t3 + 0x4C), u0, u0, u0);
        if ((int)a6 >= 0) {
            FUN_0c07e2f4(t3, a6);
            (((struct o48_float *)(t3))->v) = 1.0f;
            (((struct o44_float *)(t3))->v) = 1.0f;
            (((struct o40_float *)(t3))->v) = 1.0f;
            FUN_0c064d24(t3, 0x1, 0x40, 0x0, 0x100, (~((int)0x1 << (int)(*(signed char *)((t3 + 0x1))))), 0x0, 0xFFFFFEF0);
        }
        *(unsigned short *)((t3 + 0x1C)) = 0x3C;
        t1 = 0x3C;
    }
    return t1;
}

int FUN_0c1502e8(int a4, int a5, int a6, int a7, int a8, int a9)
{
    int stk[5];
    register int t0;
    register int t1;
    register int t41;
    register int t8;
    register int t9;
    register int t10;
    register int t11;
    register int t13;
    register int t28;
    register int t29;

    *(unsigned char *)(((int)stk + 8)) = a4;
    *(unsigned char *)(((int)stk + 16)) = a5;
    *(unsigned char *)(((int)stk + 12)) = a6;
    *(unsigned int *)(((int)stk + 4)) = a7;
    t0 = *(signed char *)(((int)stk + 16));
    *(unsigned int *)(((int)stk + 0)) = t0;
    t1 = FUN_0c03f444(0x5, 0x1, t0);
    t41 = 0x0;
    if (t1 != 0) {
        *(unsigned char *)((t1 + 0x1)) = (*(signed char *)(((int)stk + 8)));
        *(unsigned char *)((t1 + 0x2)) = (*(signed char *)(((int)stk + 12)));
        (((struct oAC_ushort *)(t1))->v) = 0xF;
        (((struct oA9_uchar *)(t1))->v) = 0x21;
        *(unsigned int *)((t1 + 0x4)) = 0xC150A2C;
        FUN_0c187798();
        FUN_0c187798();
        t11 = *(int *)(((int)stk + 4));
        if ((int)(*(int *)(((int)stk + 0))) > 0) {
            t8 = a8;
            t9 = a9;
            t10 = 0x0;
            for (;;) {
                t13 = *(int *)(((((signed char)t10 << 2) + (0xC4 + t1)) + 0x0));
                FUN_0c03744a(t13, 0x0, 0x7, (*(int *)0xC4B40CC));
                *(unsigned char *)((t13 + 0x0)) = 0x0;
                *(unsigned short *)((t13 + 0x6)) = 0x638;
                if ((*(int *)(((int)stk + 4))) != 0) {
                    FUN_0c187798();
                } else {
                    FUN_0c187798();
                }
                if (a8 != 0) {
                    FUN_0c187798();
                } else {
                    FUN_0c187798();
                }
                if (a9 != 0) {
                    FUN_0c187798();
                } else {
                    FUN_0c187798();
                }
                t28 = FUN_0c179ac0();
                t29 = ((~(((~t28) + 0x1) & 0xF)) + 0x1);
                if ((int)t28 >= 0) {
                    t29 = (t28 & 0xF);
                }
                t10 = (t10 + 0x1);
                (((struct o80_uint *)(t13))->v) = (((t29 << 8) << 2) << 2);
                t9 = (t9 + 0xC);
                t8 = (t8 + 0xC);
                t11 = (t11 + 0xC);
                if ((int)(signed char)t10 >= (int)(*(int *)(((int)stk + 0)))) {
                    break;
                }
            }
        }
        t41 = t1;
    }
    return t41;
}

int FUN_0c04c8d4(int a4, int a5, int a6)
{
    int stk[9];
    register int t6;
    register int t10;
    register float u20;
    register float u26;
    register int t27;
    register int t30;
    register int t38;
    register int t39;
    register int t41;
    register int t9;
    register int t28;
    register int t29;
    register float u31;

    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    *(volatile signed char *)0xC5421DC;
    t6 = ((int (*)(int, int, int))(FUN_0c187798))(0xC5410FC, a5, a6);
    *(float *)(((int)stk + 20)) = ((*(float *)(((int)stk + 20))) + 20.0f);
    *(volatile signed char *)0xC5421DC;
    t10 = ((int (*)(int))(FUN_0c187798))(t9);
    FUN_0c0e2390((((int)stk + 0) + 0x18), ((int)stk + 0), (((int)stk + 0) + 0xC));
    if ((*(float *)(((int)stk + 32))) == 0.0f) {
        *(float *)(((int)stk + 32)) = 9.99999975e-06f;
    }
    u20 = (*(float *)(((int)stk + 16)));
    u20 = u20 + (((*(float *)(((int)stk + 28))) / (*(float *)(((int)stk + 32))))) * (*(float *)(((int)stk + 20)));
    *(float *)(((int)stk + 28)) = u20;
    u26 = (*(float *)(((int)stk + 12)));
    u26 = u26 + (((*(float *)(((int)stk + 24))) / (*(float *)(((int)stk + 32))))) * (*(float *)(((int)stk + 20)));
    *(float *)(((int)stk + 24)) = u26;
    *(float *)(((int)stk + 32)) = 10.0f;
    t27 = ((int (*)(void))(FUN_0c187798))();
    t30 = 0x0;
    for (;;) {
        if ((int)t30 >= (int)((((struct oC0_int *)(a4))->v))) {
            break;
        }
        t28 = 0xC4;
        t29 = t30;
        t29 = (t29 << 2);
        t28 = (t28 + a4);
        t28 = (t28 + t29);
        t28 = (*(int *)((t28 + 0x0)));
        FUN_0c0e2390((((int)stk + 0) + 0x18), 0xC1B7E58, (a4 + 0x28));
        u31 = (*(float *)((t29 + 0xC1B7E34)));
        math_vec3_mul_xyz((((int)stk + 0) + 0x18), u31, u31, u31);
        t38 = ((int (*)(void))(FUN_0c187798))();
        t30 = (t30 + 0x1);
    }
    t39 = *(signed char *)0xC541F44;
    t41 = (unsigned char)t39;
    if ((int)(unsigned char)t39 >= (int)0xC) {
        t41 = (FUN_0c03f346(a4));
    }
    return t41;
}

int FUN_0c0e2b30(int a4)
{
    int stk[4];
    register int t1;
    register int t2;
    register int t28;
    register int t5;
    register int t6;
    register int t8;
    register int t9;
    register float t13;
    register float u15;
    register float u17;

    *(unsigned int *)(((int)stk + 0)) = a4;
    t1 = FUN_0c037320(0x76, (*(int *)0xC4B410C));
    t2 = FUN_0c03f444(0x5, 0x0, t1);
    t28 = t2;
    if (t2 == 0) {
    } else {
        FUN_0c03733c(t2, 0x76, (*(int *)0xC4B410C));
        *(unsigned int *)((t2 + 0x4)) = 0xC0E2A8C;
        *(unsigned char *)((t2 + 0x1)) = 0xFFFFFFFF;
        (((struct oAC_ushort *)(t2))->v) = 0x31;
        (((struct oA9_uchar *)(t2))->v) = 0x21;
        (((struct o48_float *)(t2))->v) = 0.0f;
        (((struct o44_float *)(t2))->v) = 0.0f;
        (((struct o40_float *)(t2))->v) = 0.0f;
        t5 = FUN_0c179ac0();
        t6 = ((~(((~t5) + 0x1) & 0x3F)) + 0x1);
        if ((int)t5 >= 0) {
            t6 = (t5 & 0x3F);
        }
        t8 = FUN_0c179ac0();
        t9 = ((~(((~t8) + 0x1) & 0x3F)) + 0x1);
        if ((int)t8 >= 0) {
            t9 = (t8 & 0x3F);
        }
        *(float *)(((int)stk + 8)) = ((math_sin_angle16((0xFFFFFC00 + (((t6 << 2) << 2) << 2)))) * 300.0f);
        t13 = math_cos_angle16((0xFFFFFC00 + (((t6 << 2) << 2) << 2)));
        u15 = (t13 * 300.0f);
        *(float *)(((int)stk + 12)) = (u15 * (math_cos_angle16((0xFFFFE000 + ((t9 << 8) << 1)))));
        u17 = (t13 * 300.0f);
        *(float *)(((int)stk + 4)) = (u17 * (math_sin_angle16((0xFFFFE000 + ((t9 << 8) << 1)))));
        *(volatile int *)(((int)stk + 0));
        FUN_0c187798();
        (((struct o30_float *)(t2))->v) = (((((struct o30_float *)(t2))->v)) + 200.0f);
        (((struct o2C_float *)(t2))->v) = (((((struct o2C_float *)(t2))->v)) - 50.0f);
        FUN_0c17c130((t2 + 0x28), (t2 + 0x28), (((int)stk + 0) + 0x4));
        *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) / -35.0f);
        *(float *)(((int)stk + 8)) = ((*(float *)(((int)stk + 8))) / -35.0f);
        *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) / -35.0f);
        FUN_0c187798();
        (((struct o7C_uint *)(((((struct oC4_int *)(t2))->v))))->v) = 0xFFFFC000;
        t28 = 0x7C;
    }
    return t28;
}

int FUN_0c117b58(int a4)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 == 10) {
                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                        (((struct o94_float *)(((((struct oC4_int *)(a4))->v))))->v) = -18.75f;
                        t1 = (((struct oC4_int *)(a4))->v);
                        (((struct o70_float *)(t1))->v) = (((((struct o70_float *)(t1))->v)) + ((((struct o94_float *)(t1))->v)));
                        t1 = *(short *)((a4 + 0x1C));
                        *(unsigned short *)((a4 + 0x1C)) = (t1 + 0x1);
                        if ((int)(short)(t1 + 0x1) >= (int)0x10) {
                            FUN_0c02f7fc();
                            return FUN_0c03f346(a4);
                        }
                        return (short)(t1 + 0x1);
                    }
                    if (t0 == 11) {
                        t1 = (((struct oC4_int *)(a4))->v);
                        (((struct o70_float *)(t1))->v) = (((((struct o70_float *)(t1))->v)) + ((((struct o94_float *)(t1))->v)));
                        t1 = *(short *)((a4 + 0x1C));
                        *(unsigned short *)((a4 + 0x1C)) = (t1 + 0x1);
                        if ((int)(short)(t1 + 0x1) >= (int)0x10) {
                            FUN_0c02f7fc();
                            return FUN_0c03f346(a4);
                        }
                        return (short)(t1 + 0x1);
                    }
                    t1 = t0;
                    if (t0 == 99) {
                        FUN_0c02f7ec();
                        FUN_0c02f82c();
                        FUN_0c117a6e(0xFFFFFFFF);
                        (((struct o14_uchar *)(a4))->v) = 0xA;
                        t1 = 0x14;
                    }
                    return t1;
                }
                FUN_0c02f83c();
                FUN_0c02f7fc();
                t0 = FUN_0c05f22c(0x101);
                if (t0 != 0) {
                    t1 = *(int *)0xC47472C;
                    if (t1 != -1) {
                        return FUN_0c02f77e();
                    }
                    return t1;
                }
                return t0;
            }
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
            t1 = (short)(t0 + 0x1);
            if ((int)(short)(t0 + 0x1) > (int)0x4) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                *(unsigned short *)((a4 + 0x1C)) = 0x0;
                t1 = 0x0;
            }
            return t1;
        }
        t0 = (((struct oC4_int *)(a4))->v);
        (((struct o70_float *)(t0))->v) = (((((struct o70_float *)(t0))->v)) + ((((struct o94_float *)(t0))->v)));
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
        t1 = (short)(t0 + 0x1);
        if ((int)(short)(t0 + 0x1) < (int)0x10) {
        } else {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            *(unsigned short *)((a4 + 0x1C)) = 0x0;
            t1 = 0x0;
        }
        return t1;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct oAC_ushort *)(a4))->v) = 0x1F;
    (((struct oA9_uchar *)(a4))->v) = 0x21;
    FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x1, 0xD, (*(int *)0xC4B410C));
    FUN_0c1171f0(a4);
    t0 = (((struct oC4_int *)(a4))->v);
    (((struct o70_float *)(t0))->v) = (((((struct o70_float *)(t0))->v)) - 300.0f);
    (((struct o94_float *)(t0))->v) = 18.75f;
    FUN_0c02f7ec();
    return FUN_0c02f82c();
}
