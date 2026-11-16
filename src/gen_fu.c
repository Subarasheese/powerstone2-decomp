/* Straight-line functions with calls and guards (batch gen_fu): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o2C_float { char p[0x2C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o6C_float { char p[0x6C]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c015906(void);
int FUN_0c018e74(int);
int FUN_0c018fd2(int);
int FUN_0c01ccba(void);
int FUN_0c01ccda(void);
int FUN_0c01cd2c(int);
int FUN_0c027048(void);
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c05258e(int, int, int, int, int);
int FUN_0c059e9a(int, int, int);
int FUN_0c05aab6(int, int);
int FUN_0c07c1ca(int);
int FUN_0c07e420(int, int);
int FUN_0c0d0378(int, int);
int FUN_0c0d04c4(int, int);
int FUN_0c0e2390(int, int, int);
int FUN_0c0e34e0(int);
int FUN_0c0e360c(int);
int FUN_0c0e369a(int);
int FUN_0c0e36a8(int);
int FUN_0c0e36b6(int);
int FUN_0c0e37e6(int);
int FUN_0c0e3940(int);
int FUN_0c0e3992(int);
int FUN_0c0e39de(int);
int FUN_0c0e5874(int);
int FUN_0c0e6aa2(int);
int FUN_0c0f4f28(int);
int FUN_0c1254e8(int);
int FUN_0c17c130(int, int, int);
int FUN_0c17c450(int);
int FUN_0c187798(int, int, int);
float math_sin_angle16(int);
int math_vec3_mul_xyz(int, float, float, float);
int thunk_FUN_0c05abb2(int, int);
int FUN_0c0e3a30(int a4);
int FUN_0c127954(int a4, int a5, int a6, int a7);
int FUN_0c031486(int a4, int a5, int a6, int a7);
int FUN_0c0f4fb8(int a4, int a5, int a6, int a7, float f4, float f5);
int FUN_0c014d78(int a4, int a5);

int FUN_0c0e3a30(int a4)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 == 1) {
            if ((int)(*(signed char *)((a4 + 0x15))) < (int)0x7) {
                u0 = ((((struct o2C_float *)(a4))->v));
                u0 = u0 + 0.699999988f * (math_sin_angle16(((((((struct o20_short *)(a4))->v)) << 8) << 1)));
                (((struct o2C_float *)(a4))->v) = u0;
                (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) + 0x1);
            }
            t1 = *(signed char *)((a4 + 0x15));
            if (t1 != 0) {
                if (t1 != 1) {
                    if (t1 != 2) {
                        if (t1 != 3) {
                            if (t1 != 4) {
                                if (t1 != 5) {
                                    if (t1 != 6) {
                                        if (t1 != 7) {
                                            if (t1 != 8) {
                                                return t1;
                                            }
                                            return FUN_0c0e39de(a4);
                                        }
                                        return FUN_0c0e3992(a4);
                                    }
                                    return FUN_0c0e36a8(a4);
                                }
                                return FUN_0c0e3940(a4);
                            }
                            return FUN_0c0e369a(a4);
                        }
                        return FUN_0c0e360c(a4);
                    }
                    return FUN_0c0e37e6(a4);
                }
                return FUN_0c0e34e0(a4);
            }
            return FUN_0c0e36b6(a4);
        }
        return t0;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct o20_ushort *)(a4))->v) = (*(short *)((0xC1CBC90 + (((*(signed char *)((a4 + 0x2))) - 1) << 1))));
    t0 = *(signed char *)0xC54098E;
    if ((*(signed char *)((a4 + 0x2))) == (*(int *)(((((t0 << 2) << 2) + 0xC288050) + 0x0)))) {
        (((struct o15_uchar *)(a4))->v) = 0x2;
        FUN_0c187798((((t0 << 2) << 2) + 0xC288050), 0xC1CBC08, 0x2);
        t1 = *(signed char *)((a4 + 0x2));
        FUN_0c0d0378((*(int *)((((((t1 - 1) << 2) << 1) + 0xC1CBC68) + 0x0))), (*(int *)((((((t1 - 1) << 2) << 1) + 0xC1CBC68) + 0x4))));
        FUN_0c0e5874(a4);
        FUN_0c0e6aa2(a4);
        (((struct o12E_ushort *)(a4))->v) = 0xFFFFFFEF;
    } else {
        if ((*(signed char *)((a4 + 0x2))) == (*(int *)(((((t0 << 2) << 2) + 0xC288050) + 0x4)))) {
            (((struct o15_uchar *)(a4))->v) = 0x2;
            FUN_0c187798((((t0 << 2) << 2) + 0xC288050), 0xC1CBC08, 0x2);
            t1 = *(signed char *)((a4 + 0x2));
            FUN_0c0d0378((*(int *)((((((t1 - 1) << 2) << 1) + 0xC1CBC68) + 0x0))), (*(int *)((((((t1 - 1) << 2) << 1) + 0xC1CBC68) + 0x4))));
            FUN_0c0e5874(a4);
            FUN_0c0e6aa2(a4);
            (((struct o12E_ushort *)(a4))->v) = 0xFFFFFFEF;
        } else {
            (((struct oA8_uchar *)(a4))->v) = 0x0;
            (((struct o15_uchar *)(a4))->v) = 0x0;
            FUN_0c187798((((t0 << 2) << 2) + 0xC288050), 0xC1CBC08, 0x2);
            (((struct o12E_ushort *)(a4))->v) = 0x0;
        }
    }
    FUN_0c07e420(a4, 0x4);
    (((struct oAC_ushort *)(a4))->v) = 0x3;
    t0 = 0x0;
    for (;;) {
        if ((int)t0 >= (int)((((struct oC0_int *)(a4))->v))) {
            break;
        }
        t1 = t0;
        t1 = (t1 << 2);
        t1 = (t1 + (0xC4 + a4));
        t1 = (*(int *)((t1 + 0x0)));
        FUN_0c0d04c4((t1 + 0x6), (t1 + 0x78));
        t0 = (t0 + 0x1);
    }
    if ((int)(*(signed char *)((a4 + 0x15))) < (int)0x7) {
        u0 = ((((struct o2C_float *)(a4))->v));
        u0 = u0 + 0.699999988f * (math_sin_angle16(((((((struct o20_short *)(a4))->v)) << 8) << 1)));
        (((struct o2C_float *)(a4))->v) = u0;
        (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) + 0x1);
    }
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        if (t0 != 5) {
                            if (t0 != 6) {
                                if (t0 != 7) {
                                    if (t0 != 8) {
                                        return t0;
                                    }
                                    return FUN_0c0e39de(a4);
                                }
                                return FUN_0c0e3992(a4);
                            }
                            return FUN_0c0e36a8(a4);
                        }
                        return FUN_0c0e3940(a4);
                    }
                    return FUN_0c0e369a(a4);
                }
                return FUN_0c0e360c(a4);
            }
            return FUN_0c0e37e6(a4);
        }
        return FUN_0c0e34e0(a4);
    }
    return FUN_0c0e36b6(a4);
}

int FUN_0c127954(int a4, int a5, int a6, int a7)
{
    int stk[3];

    register int R1;
    register int R3;
    register float F2;
    register float F5;
    register float F6;
    register float F15;
    register int T_;
    register int FPUL_;
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
    v0_2 = a4;
    v0_4 = a5;
    v0_1 = a6;
    v0_5 = a7;
    v0_6 = *(signed char *)((v0_2 + 0x14));
    v0_3 = (v0_6);
    v0_7 = ((*(int *)((v0_2 + 0x10))));
    v0_0 = (v0_2);
    if ((v0_6 == 0)) goto L_C12797A;
    if ((v0_3 == 1)) goto L_C1279A4;
    if ((v0_3 != 2)) goto L_C127976;
    *(unsigned short *)((v0_0 + 0x1C)) = ((*(short *)((v0_0 + 0x1C))) - 1);
    w0_0 = (0.0399999991f);
    if ((((*(short *)((v0_0 + 0x1C))) & 8) == 0)) goto L_C127B94;
    v0_2 = (((struct oC8_int *)(v0_0))->v);
    v0_3 = (0x84);
    v0_1 = (v0_2);
    w0_0 = ((((((struct o84_float *)(v0_2))->v)) + w0_0));
    L_C127B9E:;
    *(float *)((v0_1 + v0_3)) = w0_0;
    (((struct o40_float *)(v0_0))->v) = (((((struct o40_float *)(v0_0))->v)) - 0.100000001f);
    v0_1 = (((struct oC4_int *)(v0_0))->v);
    w0_0 = (((struct o40_float *)(v0_0))->v);
    (((struct o44_float *)(v0_0))->v) = w0_0;
    (((struct o48_float *)(v0_0))->v) = w0_0;
    (((struct o8C_float *)(v0_1))->v) = w0_0;
    (((struct o88_float *)(v0_1))->v) = w0_0;
    (((struct o84_float *)(v0_1))->v) = w0_0;
    w0_0 = (((struct o40_float *)(v0_0))->v);
    v0_3 = (0x40);
    w0_1 = (w0_0);
    FPUL_ = (0x3DCCCCCD);
    if ((w0_0 > 0.0f)) goto L_C127BE4;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    v0_3 = (0x14);
    L_C127BE4:;
    return v0_3;
    L_C127B94:;
    v0_2 = (((struct oC8_int *)(v0_0))->v);
    v0_3 = (0x84);
    v0_1 = (v0_2);
    w0_0 = ((((((struct o84_float *)(v0_2))->v)) - w0_0));
    goto L_C127B9E;
    L_C127976:;
    v0_3 = ((FUN_0c03f346(v0_0, v0_4, v0_1, v0_5)));
    goto L_C127BE4;
    L_C1279A4:;
    v0_2 = *(signed char *)((v0_0 + 0x15));
    v0_3 = (v0_2);
    if ((v0_2 == 0)) goto L_C1279B4;
    if ((v0_3 == 1)) goto L_C1279FE;
    goto L_C127BE4;
    L_C1279FE:;
    v0_2 = (0x4);
    w0_0 = (0.119999997f);
    if ((((*(short *)((v0_0 + 0x1C))) & 0x4) == 0)) goto L_C127A3C;
    v0_3 = (((struct oC8_int *)(v0_0))->v);
    (((struct o84_float *)(v0_3))->v) = (((((struct o84_float *)(v0_3))->v)) - w0_0);
    v0_3 = (((struct oC4_int *)(v0_0))->v);
    (((struct o84_float *)(v0_3))->v) = (((((struct o84_float *)(v0_3))->v)) + w0_0);
    L_C127A54:;
    v0_3 = (((struct oC4_int *)(v0_0))->v);
    (((struct o80_uint *)(v0_3))->v) = (((((struct o80_int *)(v0_3))->v)) + 0x5B0);
    v0_3 = (((struct oC8_int *)(v0_0))->v);
    (((struct o80_uint *)(v0_3))->v) = (((((struct o80_int *)(v0_3))->v)) + 0x2D8);
    v0_3 = (((struct oC4_int *)(v0_0))->v);
    w0_0 = (((struct o84_float *)(v0_3))->v);
    (((struct o8C_float *)(v0_3))->v) = w0_0;
    (((struct o88_float *)(v0_3))->v) = w0_0;
    v0_3 = (((struct oC8_int *)(v0_0))->v);
    w0_0 = (((struct o84_float *)(v0_3))->v);
    (((struct o8C_float *)(v0_3))->v) = w0_0;
    (((struct o88_float *)(v0_3))->v) = w0_0;
    v0_5 = *(short *)((v0_0 + 0x1E));
    *(unsigned short *)((v0_0 + 0x1E)) = (v0_5 - 1);
    v0_4 = (v0_3);
    if (((int)(short)(v0_5 - 1) > 0)) goto L_C127AF8;
    *(unsigned short *)((v0_0 + 0x1E)) = v0_2;
    v0_1 = ((int (*)(int, int, int))(FUN_0c187798))(v0_2, v0_4, v0_1);
    *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) + 100.0f);
    FUN_0c0e2390(((int)stk + 0), ((int)stk + 0), (v0_0 + 0x28));
    FUN_0c17c450((v0_0 + 0x4C));
    FUN_0c17c450(((int)stk + 0));
    FUN_0c17c130((v0_0 + 0x4C), ((int)stk + 0), ((int)stk + 0));
    FUN_0c17c450((v0_0 + 0x4C));
    math_vec3_mul_xyz((v0_0 + 0x4C), 8.0f, 8.0f, 8.0f);
    L_C127AF8:;
    FUN_0c17c130((v0_0 + 0x28), (v0_0 + 0x28), (v0_0 + 0x4C));
    v0_1 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_1 - 1);
    if (((short)(v0_1 - 1) != 0)) goto L_C127B24;
    (((struct o12A_ushort *)(v0_0))->v) = 0x0;
    (((struct o12E_ushort *)(v0_0))->v) = 0x0;
    (((struct o14_uchar *)(v0_0))->v) = 0x2;
    v0_2 = (0x0);
    L_C127B24:;
    if (((*(signed char *)((v0_0 + 0x131))) != 0)) goto L_C127B34;
    v0_3 = (0x132);
    if (((*(signed char *)((v0_0 + 0x132))) == 0)) goto L_C127BE4;
    L_C127B34:;
    (((struct o14_uchar *)(v0_0))->v) = 0x3;
    v0_3 = ((FUN_0c1254e8(v0_0)));
    goto L_C127BE4;
    L_C127A3C:;
    v0_3 = (((struct oC8_int *)(v0_0))->v);
    (((struct o84_float *)(v0_3))->v) = (((((struct o84_float *)(v0_3))->v)) + w0_0);
    v0_3 = (((struct oC4_int *)(v0_0))->v);
    (((struct o84_float *)(v0_3))->v) = (((((struct o84_float *)(v0_3))->v)) - w0_0);
    goto L_C127A54;
    L_C1279B4:;
    v0_1 = (((struct oC4_int *)(v0_0))->v);
    (((struct o88_float *)(v0_1))->v) = (((((struct o88_float *)(v0_1))->v)) - 1.0f);
    v0_1 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_1 - 1);
    v0_3 = ((short)(v0_1 - 1));
    w0_0 = (1.0f);
    if (((short)(v0_1 - 1) == 0)) goto L_C1279D2;
    goto L_C127BE4;
    L_C1279D2:;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    (((struct o88_float *)(((((struct oC4_int *)(v0_0))->v))))->v) = w0_0;
    *(unsigned short *)((v0_0 + 0x1C)) = 0xC8;
    *(unsigned short *)((v0_0 + 0x1E)) = 0x1E;
    (((struct o12A_ushort *)(v0_0))->v) = (~((int)0x1 << (int)(*(signed char *)((v0_0 + 0x1)))));
    (((struct o12E_ushort *)(v0_0))->v) = 0xFFFFFFF0;
    v0_3 = (0x12E);
    goto L_C127BE4;
    L_C12797A:;
    *(unsigned short *)((v0_0 + 0x1C)) = 0x3;
    (((struct oA8_uchar *)(v0_0))->v) = 0x1;
    (((struct o88_float *)(((((struct oC4_int *)(v0_0))->v))))->v) = 4.0f;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    FUN_0c059e9a(v0_7, 0x21, (v0_0 + 0x28));
    goto L_C1279A4;
}

int FUN_0c031486(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;

    t2 = *(signed char *)((a4 + 0x14));
    if (t2 != 0) {
        if (t2 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        t2 = *(signed char *)((a4 + 0x15));
        if (t2 != 0) {
            if (t2 != 1) {
                if (t2 == 2) {
                    t3 = (((struct oC4_int *)(a4))->v);
                    (((struct o74_float *)(t3))->v) = (((((struct o74_float *)(t3))->v)) - 0.200000003f);
                    t3 = (((struct oC8_int *)(a4))->v);
                    (((struct o74_float *)(t3))->v) = (((((struct o74_float *)(t3))->v)) - 0.200000003f);
                    t3 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t3 - 1);
                    t4 = (short)(t3 - 1);
                    if ((short)(t3 - 1) == 0) {
                        *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
                        *(unsigned short *)((a4 + 0x1C)) = 0xA;
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        t4 = 0x15;
                    }
                    t3 = t4;
                } else {
                    if (t2 == 3) {
                        t4 = (((struct oC8_int *)(a4))->v);
                        (((struct o8C_float *)(t4))->v) = (((((struct o8C_float *)(t4))->v)) - 0.0300000012f);
                        t4 = *(short *)((a4 + 0x1C));
                        *(unsigned short *)((a4 + 0x1C)) = (t4 - 1);
                        t5 = (short)(t4 - 1);
                        if ((short)(t4 - 1) == 0) {
                            *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x71F;
                            (((struct o14_float *)(((((struct oC4_int *)(a4))->v))))->v) = 1.0f;
                            *(unsigned short *)((a4 + 0x1C)) = 0x19;
                            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                            t5 = 0x15;
                        }
                        t4 = t5;
                    } else {
                        if (t2 == 4) {
                            t5 = (((struct oC4_int *)(a4))->v);
                            (((struct o1C_float *)(t5))->v) = (((((struct o1C_float *)(t5))->v)) + 0.0399999991f);
                            t5 = (((struct oC4_int *)(a4))->v);
                            (((struct o20_float *)(t5))->v) = (((((struct o20_float *)(t5))->v)) + 0.0399999991f);
                            t5 = *(short *)((a4 + 0x1C));
                            *(unsigned short *)((a4 + 0x1C)) = (t5 - 1);
                            t6 = (short)(t5 - 1);
                            if ((short)(t5 - 1) == 0) {
                                *(unsigned short *)((a4 + 0x1C)) = 0x19;
                                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                                t6 = 0x15;
                            }
                            t5 = t6;
                        } else {
                            t6 = t2;
                            if (t2 == 5) {
                                t2 = (((struct oC4_int *)(a4))->v);
                                (((struct o14_float *)(t2))->v) = (((((struct o14_float *)(t2))->v)) - 0.0399999991f);
                                t2 = *(short *)((a4 + 0x1C));
                                *(unsigned short *)((a4 + 0x1C)) = (t2 - 1);
                                t6 = (short)(t2 - 1);
                                if ((short)(t2 - 1) == 0) {
                                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                                    t6 = 0x14;
                                }
                            }
                            t5 = t6;
                        }
                        t4 = t5;
                    }
                    t3 = t4;
                }
                t2 = t3;
            } else {
                t3 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t3 - 1);
                t4 = (short)(t3 - 1);
                if ((short)(t3 - 1) != 0) {
                } else {
                    *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
                    *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x1;
                    (((struct o74_float *)(((((struct oC4_int *)(a4))->v))))->v) = 0.0f;
                    (((struct o74_float *)(((((struct oC8_int *)(a4))->v))))->v) = 0.0f;
                    (((struct o8C_float *)(((((struct oC8_int *)(a4))->v))))->v) = 0.300000012f;
                    *(unsigned short *)((a4 + 0x1C)) = 0x19;
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    t4 = 0x15;
                }
                t2 = t4;
            }
            t3 = t2;
        } else {
            t2 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t2 - 1);
            t4 = (short)(t2 - 1);
            if ((short)(t2 - 1) != 0) {
            } else {
                t2 = (((struct oC4_int *)(a4))->v);
                *(unsigned char *)((t2 + 0x0)) = 0x0;
                *(unsigned short *)((t2 + 0x6)) = 0x11F;
                *(volatile signed char *)((a4 + 0x2));
                t5 = ((int (*)(int, int, int))(FUN_0c187798))(t2, a5, a6);
                *(volatile signed char *)((a4 + 0x2));
                t2 = ((int (*)(int))(FUN_0c187798))(t0);
                t0 = (((struct oC8_int *)(a4))->v);
                FUN_0c03744a(t0, 0x1, (*(signed char *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC1A93D4) + 0x19))), (*(int *)0xC4B40D0));
                *(unsigned char *)((t0 + 0x0)) = 0x0;
                *(unsigned short *)((t0 + 0x6)) = 0x31F;
                *(volatile signed char *)((a4 + 0x2));
                t2 = ((int (*)(void))(FUN_0c187798))();
                *(volatile signed char *)((a4 + 0x2));
                t2 = ((int (*)(void))(FUN_0c187798))();
                (((struct o18_float *)(t0))->v) = 1.0f;
                (((struct o1C_float *)(t0))->v) = 0.0f;
                (((struct o20_float *)(t0))->v) = 0.0f;
                *(unsigned short *)((a4 + 0x1C)) = 0x1;
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                t4 = 0x15;
            }
            t3 = t4;
        }
        return t3;
    }
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct oAC_ushort *)(a4))->v) = 0xF;
    (((struct oA9_uchar *)(a4))->v) = 0x21;
    *(unsigned short *)((a4 + 0x1C)) = 0x1;
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                t2 = (((struct oC4_int *)(a4))->v);
                (((struct o74_float *)(t2))->v) = (((((struct o74_float *)(t2))->v)) - 0.200000003f);
                t2 = (((struct oC8_int *)(a4))->v);
                (((struct o74_float *)(t2))->v) = (((((struct o74_float *)(t2))->v)) - 0.200000003f);
                t2 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t2 - 1);
                t3 = (short)(t2 - 1);
                if ((short)(t2 - 1) == 0) {
                    *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
                    *(unsigned short *)((a4 + 0x1C)) = 0xA;
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    t3 = 0x15;
                }
                t2 = t3;
            } else {
                if (t0 == 3) {
                    t3 = (((struct oC8_int *)(a4))->v);
                    (((struct o8C_float *)(t3))->v) = (((((struct o8C_float *)(t3))->v)) - 0.0300000012f);
                    t3 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t3 - 1);
                    t4 = (short)(t3 - 1);
                    if ((short)(t3 - 1) == 0) {
                        *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x71F;
                        (((struct o14_float *)(((((struct oC4_int *)(a4))->v))))->v) = 1.0f;
                        *(unsigned short *)((a4 + 0x1C)) = 0x19;
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        t4 = 0x15;
                    }
                    t3 = t4;
                } else {
                    if (t0 == 4) {
                        t4 = (((struct oC4_int *)(a4))->v);
                        (((struct o1C_float *)(t4))->v) = (((((struct o1C_float *)(t4))->v)) + 0.0399999991f);
                        t4 = (((struct oC4_int *)(a4))->v);
                        (((struct o20_float *)(t4))->v) = (((((struct o20_float *)(t4))->v)) + 0.0399999991f);
                        t4 = *(short *)((a4 + 0x1C));
                        *(unsigned short *)((a4 + 0x1C)) = (t4 - 1);
                        t5 = (short)(t4 - 1);
                        if ((short)(t4 - 1) == 0) {
                            *(unsigned short *)((a4 + 0x1C)) = 0x19;
                            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                            t5 = 0x15;
                        }
                        t4 = t5;
                    } else {
                        t5 = t0;
                        if (t0 == 5) {
                            t0 = (((struct oC4_int *)(a4))->v);
                            (((struct o14_float *)(t0))->v) = (((((struct o14_float *)(t0))->v)) - 0.0399999991f);
                            t0 = *(short *)((a4 + 0x1C));
                            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
                            t6 = (short)(t0 - 1);
                            if ((short)(t0 - 1) == 0) {
                                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                                t6 = 0x14;
                            }
                            t5 = t6;
                        }
                        t4 = t5;
                    }
                    t3 = t4;
                }
                t2 = t3;
            }
            t0 = t2;
        } else {
            t2 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t2 - 1);
            t3 = (short)(t2 - 1);
            if ((short)(t2 - 1) != 0) {
            } else {
                *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
                *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x1;
                (((struct o74_float *)(((((struct oC4_int *)(a4))->v))))->v) = 0.0f;
                (((struct o74_float *)(((((struct oC8_int *)(a4))->v))))->v) = 0.0f;
                (((struct o8C_float *)(((((struct oC8_int *)(a4))->v))))->v) = 0.300000012f;
                *(unsigned short *)((a4 + 0x1C)) = 0x19;
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                t3 = 0x15;
            }
            t0 = t3;
        }
        t2 = t0;
    } else {
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        t3 = (short)(t0 - 1);
        if ((short)(t0 - 1) != 0) {
        } else {
            t0 = (((struct oC4_int *)(a4))->v);
            *(unsigned char *)((t0 + 0x0)) = 0x0;
            *(unsigned short *)((t0 + 0x6)) = 0x11F;
            *(volatile signed char *)((a4 + 0x2));
            t4 = ((int (*)(int, int, int))(FUN_0c187798))(t0, a5, a6);
            *(volatile signed char *)((a4 + 0x2));
            t0 = ((int (*)(int))(FUN_0c187798))(t1);
            t0 = (((struct oC8_int *)(a4))->v);
            FUN_0c03744a(t0, 0x1, (*(signed char *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC1A93D4) + 0x19))), (*(int *)0xC4B40D0));
            *(unsigned char *)((t0 + 0x0)) = 0x0;
            *(unsigned short *)((t0 + 0x6)) = 0x31F;
            *(volatile signed char *)((a4 + 0x2));
            t1 = ((int (*)(void))(FUN_0c187798))();
            *(volatile signed char *)((a4 + 0x2));
            t1 = ((int (*)(void))(FUN_0c187798))();
            (((struct o18_float *)(t0))->v) = 1.0f;
            (((struct o1C_float *)(t0))->v) = 0.0f;
            (((struct o20_float *)(t0))->v) = 0.0f;
            *(unsigned short *)((a4 + 0x1C)) = 0x1;
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            t3 = 0x15;
        }
        t2 = t3;
    }
    return t2;
}

int FUN_0c0f4fb8(int a4, int a5, int a6, int a7, float f4, float f5)
{

    register int R1;
    register int R3;
    int R4;
    int R5;
    register int R10;
    register int R12;
    register int R13;
    register float F2;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    R4 = a4;
    R5 = a5;
    v0_2 = a6;
    v0_3 = a7;
    w0_0 = f5;
    v0_0 = R13;
    v0_4 = *(signed char *)((R4 + 0x14));
    v0_1 = (v0_4);
    v0_0 = (R4);
    R4 = (0xC1CE304);
    if ((v0_4 == 0)) goto L_C0F4FD2;
    if ((v0_1 == 1)) goto L_C0F5002;
    return FUN_0c03f346(v0_0, R5, v0_2, v0_3);
    L_C0F5002:;
    v0_2 = *(signed char *)((v0_0 + 0x15));
    v0_1 = (v0_2);
    R13 = (0x0);
    if ((v0_2 == 0)) goto L_C0F501C;
    if ((v0_1 == 1)) goto L_C0F505C;
    if ((v0_1 == 2)) goto L_C0F50D4;
    if ((v0_1 == 3)) goto L_C0F50F0;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    (((struct o15_uchar *)(v0_0))->v) = R13;
    v0_1 = (0x15);
    L_C0F524A:;
    return v0_1;
    L_C0F50F0:;
    v0_2 = *(signed char *)((v0_0 + 0x16));
    v0_1 = (v0_2);
    R4 = (0x2);
    R5 = (0x4);
    w0_1 = (0.5f);
    w0_0 = (0.0f);
    if ((v0_2 == 0)) goto L_C0F510E;
    if ((v0_1 == 1)) goto L_C0F512A;
    if ((v0_1 == 2)) goto L_C0F51BE;
    goto L_C0F524A;
    L_C0F51BE:;
    *(unsigned short *)((v0_0 + 0x1E)) = ((*(short *)((v0_0 + 0x1E))) + 0x1);
    v0_1 = ((*(short *)((v0_0 + 0x1E))) & R4) == 0;
    if (v0_1) goto L_C0F51D6;
    v0_2 = (((struct oC4_int *)(v0_0))->v);
    w0_2 = (((struct o6C_float *)(v0_2))->v);
    v0_1 = (0x6C);
    v0_2 = (v0_2);
    w0_2 = ((w0_2 + w0_1));
    L_C0F51E0:;
    *(float *)((v0_2 + v0_1)) = w0_2;
    v0_1 = ((*(short *)((v0_0 + 0x1E))) & R5) == 0;
    if (v0_1) goto L_C0F51F4;
    v0_2 = (((struct oC4_int *)(v0_0))->v);
    w0_2 = (((struct o74_float *)(v0_2))->v);
    v0_1 = (0x74);
    v0_2 = (v0_2);
    w0_2 = ((w0_2 + w0_1));
    L_C0F51FE:;
    *(float *)((v0_2 + v0_1)) = w0_2;
    (((struct o2C_float *)(v0_0))->v) = (((((struct o2C_float *)(v0_0))->v)) + 5.0f);
    w0_2 = (((struct o2C_float *)(v0_0))->v);
    v0_1 = (0x2C);
    w0_1 = (w0_2);
    FPUL_ = (0x40A00000);
    if ((!(w0_2 > 5000.0f))) goto L_C0F524A;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    v0_0 = (((struct oC4_int *)(v0_0))->v);
    (((struct o74_float *)(v0_0))->v) = w0_0;
    (((struct o6C_float *)(v0_0))->v) = w0_0;
    v0_1 = (0x6C);
    goto L_C0F524A;
    L_C0F51F4:;
    v0_2 = (((struct oC4_int *)(v0_0))->v);
    w0_2 = (((struct o74_float *)(v0_2))->v);
    v0_1 = (0x74);
    v0_2 = (v0_2);
    w0_2 = ((w0_2 - w0_1));
    goto L_C0F51FE;
    L_C0F51D6:;
    v0_2 = (((struct oC4_int *)(v0_0))->v);
    w0_2 = (((struct o6C_float *)(v0_2))->v);
    v0_1 = (0x6C);
    v0_2 = (v0_2);
    w0_2 = ((w0_2 - w0_1));
    goto L_C0F51E0;
    L_C0F512A:;
    v0_1 = ((*(short *)((v0_0 + 0x1E))) & R4) == 0;
    if (v0_1) goto L_C0F513C;
    v0_2 = (((struct oC4_int *)(v0_0))->v);
    w0_2 = (((struct o6C_float *)(v0_2))->v);
    v0_1 = (0x6C);
    v0_2 = (v0_2);
    w0_2 = ((w0_2 + w0_1));
    L_C0F5146:;
    *(float *)((v0_2 + v0_1)) = w0_2;
    v0_1 = ((*(short *)((v0_0 + 0x1E))) & R5) == 0;
    if (v0_1) goto L_C0F517C;
    v0_2 = (((struct oC4_int *)(v0_0))->v);
    w0_2 = (((struct o74_float *)(v0_2))->v);
    v0_1 = (0x74);
    v0_2 = (v0_2);
    w0_2 = ((w0_2 + w0_1));
    L_C0F5186:;
    *(float *)((v0_2 + v0_1)) = w0_2;
    v0_1 = *(short *)((v0_0 + 0x1E));
    *(unsigned short *)((v0_0 + 0x1E)) = (v0_1 - 1);
    if (((int)(short)(v0_1 - 1) > 0)) goto L_C0F51AE;
    (((struct o16_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x16))) + 0x1);
    *(unsigned short *)((v0_0 + 0x1E)) = R13;
    v0_1 = (((struct oC4_int *)(v0_0))->v);
    (((struct o74_float *)(v0_1))->v) = w0_0;
    (((struct o6C_float *)(v0_1))->v) = w0_0;
    L_C0F51AE:;
    (((struct o2C_float *)(v0_0))->v) = (((((struct o2C_float *)(v0_0))->v)) + 2.5f);
    v0_1 = (0x2C);
    FPUL_ = (0x40200000);
    goto L_C0F524A;
    L_C0F517C:;
    v0_2 = (((struct oC4_int *)(v0_0))->v);
    w0_2 = (((struct o74_float *)(v0_2))->v);
    v0_1 = (0x74);
    v0_2 = (v0_2);
    w0_2 = ((w0_2 - w0_1));
    goto L_C0F5186;
    L_C0F513C:;
    v0_2 = (((struct oC4_int *)(v0_0))->v);
    w0_2 = (((struct o6C_float *)(v0_2))->v);
    v0_1 = (0x6C);
    v0_2 = (v0_2);
    w0_2 = ((w0_2 - w0_1));
    goto L_C0F5146;
    L_C0F510E:;
    (((struct o16_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x16))) + 0x1);
    *(unsigned short *)((v0_0 + 0x1E)) = 0x78;
    return thunk_FUN_0c05abb2(0x4B, (v0_0 + 0x28));
    L_C0F50D4:;
    v0_1 = *(signed char *)((v0_0 + 0x2));
    v0_2 = (int)(*(signed char *)0xC54098F) > (int)v0_1;
    v0_1 = (v0_1);
    if (v0_2) goto L_C0F50E2;
    goto L_C0F524A;
    L_C0F50E2:;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    (((struct o16_uchar *)(v0_0))->v) = R13;
    v0_1 = (0x16);
    goto L_C0F524A;
    L_C0F505C:;
    (((struct o2C_float *)(v0_0))->v) = (((((struct o2C_float *)(v0_0))->v)) - 100.0f);
    v0_1 = *(signed char *)((v0_0 + 0x2));
    w0_0 = (((struct o2C_float *)(v0_0))->v);
    v0_2 = !(w0_0 > (((((struct o4_float *)(((((v0_1 << 1) + v0_1) << 2) + R4)))->v)) + -1000.0f));
    v0_1 = (0x2C);
    w0_1 = (w0_0);
    w0_1 = (-1000.0f);
    FPUL_ = (0x42C80000);
    if (v0_2) goto L_C0F508C;
    goto L_C0F524A;
    L_C0F508C:;
    v0_1 = *(signed char *)((v0_0 + 0x2));
    (((struct o2C_float *)(v0_0))->v) = (((((struct o4_float *)((R4 + (((v0_1 << 1) + v0_1) << 2))))->v)) + w0_1);
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    thunk_FUN_0c05abb2(0x4C, (v0_0 + 0x28));
    v0_1 = R13;
    FUN_0c05258e(0x2, 0x1E, 0x100, 0x1E, v0_1);
    FUN_0c07c1ca(0x15);
    return FUN_0c0f4f28(v0_0);
    L_C0F501C:;
    v0_2 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_2 - 1);
    v0_1 = ((short)(v0_2 - 1));
    if (((int)(short)(v0_2 - 1) <= 0)) goto L_C0F50E2;
    goto L_C0F524A;
    L_C0F4FD2:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(v0_0))->v) = 0x1;
    *(volatile signed char *)((v0_0 + 0x2));
    FUN_0c187798(R4, R5, v0_2);
    *(unsigned short *)((v0_0 + 0x1C)) = (*(short *)((0xC1CE328 + ((*(signed char *)((v0_0 + 0x2))) << 1))));
    goto L_C0F5002;
}

int FUN_0c014d78(int a4, int a5)
{

    register int R1;
    register int R2;
    register int R3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    v0_0 = a5;
    v0_4 = *(signed char *)0xC3045F2;
    v0_2 = (v0_4);
    v0_0 = (0xC018E74);
    v0_3 = (0xC3045FC);
    v0_1 = (0xC3045F2);
    v0_0 = (0xC3045F8);
    if ((v0_4 == 0)) goto L_C014E18;
    if ((v0_2 != 1)) goto L_C014D9C;
    v0_3 = *(int *)((v0_0 + 0x0));
    *(unsigned int *)((v0_0 + 0x0)) = (v0_3 - 1);
    if (((int)(v0_3 - 1) <= 0)) goto L_C014FE4;
    L_C015000:;
    return v0_2;
    L_C014FE4:;
    *(unsigned char *)((v0_1 + 0x0)) = ((*(signed char *)((v0_1 + 0x0))) + 0x1);
    goto L_C015000;
    L_C014D9C:;
    if ((v0_2 != 2)) goto L_C014DA4;
    *(unsigned char *)((v0_1 + 0x0)) = ((*(signed char *)((v0_1 + 0x0))) + 0x1);
    L_C014F38:;
    *(unsigned char *)((v0_1 + 0x0)) = 0x4;
    L_C014F3C:;
    v0_4 = FUN_0c015906();
    v0_2 = ((signed char)v0_4);
    if (((signed char)v0_4 == 0)) goto L_C015000;
    if ((v0_2 == 1)) goto L_C014F56;
    if ((v0_2 == 2)) goto L_C014F5C;
    if ((v0_2 == 5)) goto L_C014F7C;
    *(unsigned char *)((v0_1 + 0x0)) = 0x5;
    goto L_C015000;
    L_C014F7C:;
    *(unsigned char *)((v0_1 + 0x0)) = 0x10;
    L_C014F80:;
    v0_1 = FUN_0c018fd2((*(signed char *)((v0_3 + 0x0))));
    *(unsigned int *)((v0_0 + 0x0)) = 0x10;
    v0_2 = (v0_1);
    goto L_C015000;
    L_C014F5C:;
    *(unsigned char *)((v0_1 + 0x0)) = 0x30;
    goto L_C014F80;
    L_C014F56:;
    *(unsigned char *)((v0_1 + 0x0)) = 0x20;
    goto L_C014F80;
    L_C014DA4:;
    if ((v0_2 != 3)) goto L_C014DAC;
    goto L_C014F38;
    L_C014DAC:;
    if ((v0_2 != 4)) goto L_C014DB4;
    goto L_C014F3C;
    L_C014DB4:;
    if ((v0_2 != 5)) goto L_C014DBC;
    *(unsigned char *)((v0_1 + 0x0)) = ((*(signed char *)((v0_1 + 0x0))) + 0x1);
    goto L_C015000;
    L_C014DBC:;
    if ((v0_2 != 6)) goto L_C014DC4;
    goto L_C015000;
    L_C014DC4:;
    if ((v0_2 != 7)) goto L_C014DCC;
    goto L_C015000;
    L_C014DCC:;
    if ((v0_2 != 8)) goto L_C014DD4;
    goto L_C015000;
    L_C014DD4:;
    if ((v0_2 != 16)) goto L_C014DDC;
    if (((*(signed char *)0xC30985B) != 0)) goto L_C014FE4;
    *(unsigned char *)((v0_1 + 0x0)) = 0x40;
    goto L_C015000;
    L_C014DDC:;
    if ((v0_2 != 17)) goto L_C014DE4;
    v0_4 = *(int *)((v0_0 + 0x0));
    *(unsigned int *)((v0_0 + 0x0)) = (v0_4 - 1);
    if (((int)(v0_4 - 1) > 0)) goto L_C015000;
    v0_2 = (0x1A);
    L_C014FDC:;
    *(unsigned char *)((v0_3 + 0x0)) = v0_2;
    v0_2 = ((FUN_0c018e74(v0_2)));
    L_C014FE0:;
    *(unsigned int *)((v0_0 + 0x0)) = 0x12C;
    goto L_C014FE4;
    L_C014DE4:;
    if ((v0_2 != 18)) goto L_C014DEC;
    goto L_C015000;
    L_C014DEC:;
    if ((v0_2 != 32)) goto L_C014DF4;
    v0_4 = *(int *)((v0_0 + 0x0));
    *(unsigned int *)((v0_0 + 0x0)) = (v0_4 - 1);
    if (((int)(v0_4 - 1) > 0)) goto L_C015000;
    *(unsigned char *)((v0_3 + 0x0)) = 0xE;
    v0_2 = ((FUN_0c018e74(0xE)));
    goto L_C014FE0;
    L_C014DF4:;
    if ((v0_2 != 33)) goto L_C014DFC;
    goto L_C015000;
    L_C014DFC:;
    if ((v0_2 != 48)) goto L_C014E04;
    v0_4 = *(int *)((v0_0 + 0x0));
    *(unsigned int *)((v0_0 + 0x0)) = (v0_4 - 1);
    if (((int)(v0_4 - 1) > 0)) goto L_C015000;
    v0_2 = (0x43);
    goto L_C014FDC;
    L_C014E04:;
    if ((v0_2 != 49)) goto L_C014E0C;
    goto L_C015000;
    L_C014E0C:;
    if ((v0_2 != 64)) goto L_C014E14;
    v0_3 = *(int *)((v0_0 + 0x0));
    *(unsigned int *)((v0_0 + 0x0)) = (v0_3 - 1);
    if (((int)(v0_3 - 1) > 0)) goto L_C015000;
    *(unsigned char *)((v0_1 + 0x0)) = 0x0;
    *(unsigned char *)0xC3045F0 = 0x0;
    goto L_C015000;
    L_C014E14:;
    goto L_C015000;
    L_C014E18:;
    v0_2 = (0xC05AAB6);
    if (((*(signed char *)0xC20BB54) == 0)) goto L_C014E7C;
    v0_2 = FUN_0c01ccba();
    if (((short)v0_2 == 0)) goto L_C014E7C;
    *(unsigned char *)((v0_1 + 0x0)) = ((*(signed char *)((v0_1 + 0x0))) + 0x1);
    FUN_0c05aab6(0x0, 0x3);
    *(unsigned char *)((v0_3 + 0x0)) = 0x35;
    FUN_0c018e74(0x35);
    *(unsigned int *)((v0_0 + 0x0)) = 0x14;
    return FUN_0c027048();
    L_C014E7C:;
    v0_2 = FUN_0c01cd2c(0x2000);
    v0_1 = (0xC01CD2C);
    v0_0 = (0xC3045F1);
    if (((short)v0_2 != 0)) goto L_C014E98;
    if (((unsigned char)(*(signed char *)0xC30EF9E) != 82)) goto L_C014EA4;
    L_C014E98:;
    *(unsigned char *)((v0_0 + 0x0)) = ((*(signed char *)((v0_0 + 0x0))) - 1);
    FUN_0c05aab6(0x0, 0x6);
    L_C014EA4:;
    v0_1 = FUN_0c01cd2c(0x1000);
    if (((short)v0_1 != 0)) goto L_C014EBC;
    if (((unsigned char)(*(signed char *)0xC30EF9E) != 81)) goto L_C014EC6;
    L_C014EBC:;
    *(unsigned char *)((v0_0 + 0x0)) = 0x0;
    FUN_0c05aab6(0x0, 0x6);
    L_C014EC6:;
    v0_1 = FUN_0c01cd2c(0x800);
    if (((short)v0_1 != 0)) goto L_C014EF6;
    if (((unsigned char)(*(signed char *)0xC30EF9E) == 80)) goto L_C014EF6;
    v0_1 = FUN_0c01cd2c(0x400);
    if (((short)v0_1 != 0)) goto L_C014EF6;
    if (((unsigned char)(*(signed char *)0xC30EF9E) != 79)) goto L_C014F02;
    L_C014EF6:;
    *(unsigned char *)((v0_0 + 0x0)) = ((*(signed char *)((v0_0 + 0x0))) + 0x1);
    FUN_0c05aab6(0x0, 0x5);
    L_C014F02:;
    v0_1 = FUN_0c01ccda();
    v0_2 = ((short)v0_1);
    if (((short)v0_1 != 0)) goto L_C014F14;
    goto L_C015000;
    L_C014F14:;
    *(unsigned char *)((v0_0 + 0x0)) = 0x3;
    v0_2 = ((FUN_0c05aab6(0x0, 0x3)));
    goto L_C015000;
}
