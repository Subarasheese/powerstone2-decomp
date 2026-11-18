/* Straight-line functions with calls and guards (batch gen_fl): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o100_int { char p[0x100]; int v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o168_float { char p[0x168]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o1B_uchar { char p[0x1B]; unsigned char v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAA_uchar { char p[0xAA]; unsigned char v; };
struct oAB_uchar { char p[0xAB]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC_float { char p[0xC]; float v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oD0_int { char p[0xD0]; int v; };
struct oD4_int { char p[0xD4]; int v; };
struct oD8_int { char p[0xD8]; int v; };
struct oDC_int { char p[0xDC]; int v; };
struct oE0_int { char p[0xE0]; int v; };
struct oE4_int { char p[0xE4]; int v; };
struct oE8_int { char p[0xE8]; int v; };
struct oEC_int { char p[0xEC]; int v; };
struct oF0_int { char p[0xF0]; int v; };
struct oF4_int { char p[0xF4]; int v; };
struct oF8_int { char p[0xF8]; int v; };
struct oFC_int { char p[0xFC]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c037498(int, int, int, int);
int FUN_0c03f444(int, int, int, int);
int FUN_0c0582de(int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c07e3ae(int, int);
float FUN_0c17c450(int);
int math_atan2_angle16(float, float);
float math_cos_angle16(int);
int math_mat_get_translate(int, int);
float math_signed_sqrt(float);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int nlRand(void);
int nlSubVector3op(int, int, int);
int thunk_FUN_0c058310(int, int);
int FUN_0c1402c4(int a4, int a5, int a6, int a7);
int FUN_0c14c1b4(int a4, int a5, int a6, int a7, int a8);
int FUN_0c163358(int a4, int a5, int a6, int a7);
int FUN_0c12ebe4(int a4, int a5, int a6, int a7);
int FUN_0c13caec(int a4, int a5, int a6, int a7);
int FUN_0c124da6(int a4, int a5, int a6, int a7, float f4, float f5);
int FUN_0c0f6b1c(int a4, int a5, int a6, int a7);
int FUN_0c15e078(int a4, int a5, int a6, int a7);
int FUN_0c12f69c(int a4, int a5, int a6, int a7);

int FUN_0c1402c4(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t65;

    t0 = FUN_0c03f444(0x5, 0x0, 0x10, a7);
    t65 = t0;
    if (t0 == 0) {
    } else {
        *(unsigned int *)((t0 + 0x4)) = 0xC140464;
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x10)) = a4;
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x34)) = *(struct mv3 *)((a4 + 0x34)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)((a4 + 0x28)); }
        FUN_0c03744a(((((struct oC4_int *)(t0))->v)), 0x0, 0x10, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
        FUN_0c03744a(((((struct oC8_int *)(t0))->v)), 0x1, 0x10, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
        FUN_0c03744a(((((struct oCC_int *)(t0))->v)), 0x2, 0x10, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
        FUN_0c03744a(((((struct oD0_int *)(t0))->v)), 0x2, 0x10, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
        FUN_0c03744a(((((struct oD4_int *)(t0))->v)), 0x2, 0x10, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
        FUN_0c03744a(((((struct oD8_int *)(t0))->v)), 0x2, 0x10, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
        FUN_0c03744a(((((struct oDC_int *)(t0))->v)), 0x3, 0x10, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
        FUN_0c03744a(((((struct oE0_int *)(t0))->v)), 0x3, 0x10, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
        FUN_0c03744a(((((struct oE4_int *)(t0))->v)), 0x3, 0x10, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
        FUN_0c03744a(((((struct oE8_int *)(t0))->v)), 0x4, 0x10, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
        FUN_0c03744a(((((struct oEC_int *)(t0))->v)), 0x4, 0x10, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
        FUN_0c03744a(((((struct oF0_int *)(t0))->v)), 0x4, 0x10, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
        FUN_0c03744a(((((struct oF4_int *)(t0))->v)), 0x4, 0x10, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
        FUN_0c03744a(((((struct oF8_int *)(t0))->v)), 0x4, 0x10, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
        FUN_0c03744a(((((struct oFC_int *)(t0))->v)), 0x4, 0x10, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
        t65 = (FUN_0c03744a(((((struct o100_int *)(t0))->v)), 0x4, 0x10, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2))))));
    }
    return t65;
}

int FUN_0c14c1b4(int a4, int a5, int a6, int a7, int a8)
{
    int stk[6];
    register int t0;
    register int t26;
    register int t1;
    register int t2;
    register int t6;
    register float u20;
    register float u21;
    register float u22;
    register float t23;
    register int t25;

    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 8)) = a6;
    *(unsigned int *)(((int)stk + 0)) = a7;
    t0 = FUN_0c03f444(0x5, 0x0, 0x2, a7);
    t26 = t0;
    if (t0 != 0) {
        t1 = 0x0;
        t2 = 0x0;
        for (;;) {
            t6 = *(int *)((((0xC4 + t0) + t2) + 0x0));
            FUN_0c03744a(t6, 0x0, 0xA, (*(int *)(((((*(signed char *)((a4 + 0x1))) << 2) << 1) + 0xC4B40E0))));
            *(unsigned short *)((t6 + 0x6)) = 0x1F;
            t2 = (t2 + 0x4);
            (((struct o8C_float *)(t6))->v) = 1.0f;
            (((struct o84_float *)(t6))->v) = 1.0f;
            (((struct o88_float *)(t6))->v) = 0.0f;
            (((struct o7C_uint *)(t6))->v) = t1;
            t1 = (t1 + 0x4000);
            if ((unsigned int)t2 >= (unsigned int)0x8) {
                break;
            }
        }
        *(unsigned int *)((t0 + 0x4)) = 0xC14C374;
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned char *)((t0 + 0x2)) = a8;
        *(unsigned short *)((t0 + 0x1E)) = a8;
        (((struct o20_ushort *)(t0))->v) = a8;
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        *(unsigned int *)((t0 + 0x10)) = a4;
        (((struct oA4_uint *)(t0))->v) = 0x0;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0xC)) = *(struct mv3 *)((*(int *)(((int)stk + 8)))); }
        *(float *)(((int)stk + 16)) = ((*(float *)(((int)stk + 16))) - 110.599998f);
        FUN_0c0582de((((int)stk + 0) + 0xC), (*(int *)(((int)stk + 4))));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x58)) = *(struct mv3 *)((((int)stk + 0) + 0xC)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)((((int)stk + 0) + 0xC)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((0x41C + t0)) = *(struct mv3 *)((*(int *)(((int)stk + 0)))); }
        (((struct o4_float *)((0x41C + t0)))->v) = (((((struct o4_float *)((0x41C + t0)))->v)) + 110.599998f);
        nlSubVector3op((((int)stk + 0) + 0xC), (t0 + 0x28), (0x41C + t0));
        (((struct oC_float *)((0x41C + t0)))->v) = (FUN_0c17c450((((int)stk + 0) + 0xC)));
        *(unsigned int *)((t0 + 0x38)) = (math_atan2_angle16((*(float *)(((int)stk + 12))), (*(float *)(((int)stk + 20)))));
        u20 = *(float *)(((int)stk + 12));
        u21 = *(float *)(((int)stk + 20));
        u22 = (u21 * u21);
        u22 = u22 + u20 * u20;
        t23 = math_signed_sqrt(u22);
        t25 = math_atan2_angle16((-(*(float *)(((int)stk + 16)))), t23);
        *(unsigned int *)((t0 + 0x34)) = (t25 + 0x4000);
        t26 = (t25 + 0x4000);
    }
    return t26;
}

int FUN_0c163358(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = (~((int)0x1 << (int)a6));
    if ((int)a6 < 0) {
        t0 = 0xF;
    }
    t1 = 0x5;
    if (a7 != 0) {
        t1 = 0x1;
    }
    t2 = FUN_0c03f444(t1, 0x0, 0x1, a7);
    t1 = t2;
    if (t2 == 0) {
    } else {
        t3 = (((struct oC4_int *)(t2))->v);
        FUN_0c03744a(t3, 0x0, 0x9, (*(int *)0xC4B40CC));
        *(unsigned char *)((t2 + 0x1)) = a6;
        *(unsigned char *)((t2 + 0x2)) = a7;
        *(unsigned int *)((t2 + 0x4)) = 0xC163514;
        (((struct oAC_ushort *)(t2))->v) = 0x21;
        (((struct oA9_uchar *)(t2))->v) = 0x21;
        if (a7 != 0) {
            FUN_0c07e3ae(t2, (*(signed char *)0xC273962));
            FUN_0c064d24(t2, 0x3, 0x9, 0x0, 0x100, (t0), 0x0, 0xFFFFFFF0);
        }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t2 + 0x28)) = *(struct mv3 *)(a4); }
        *(unsigned int *)((t2 + 0x38)) = a5;
        (((struct o54_float *)(t2))->v) = ((math_cos_angle16(a5)) * 30.0f);
        (((struct o4C_float *)(t2))->v) = ((math_sin_angle16(a5)) * 30.0f);
        (((struct o50_float *)(t2))->v) = -1.0f;
        (((struct o58_float *)(t2))->v) = (((((struct o4C_float *)(t2))->v)) / -30.0f);
        (((struct o5C_float *)(t2))->v) = 0.119999997f;
        (((struct o60_float *)(t2))->v) = (((((struct o54_float *)(t2))->v)) / -30.0f);
        (((struct o48_float *)(t2))->v) = 1.0f;
        (((struct o44_float *)(t2))->v) = 1.0f;
        (((struct o40_float *)(t2))->v) = 1.0f;
        *(unsigned short *)((t3 + 0x6)) = 0x219;
        t0 = (int)((int)(nlRand()) % (int)0x14);
        (((struct o80_uint *)(t3))->v) = (int)(((float)((((t0 << 2) << 1) + t0) << 1) * 65536.0f) / 360.0f);
        (((struct o8C_float *)(t3))->v) = 0.5f;
        (((struct o88_float *)(t3))->v) = 0.5f;
        (((struct o84_float *)(t3))->v) = 0.5f;
        (((struct o18_float *)(t3))->v) = 0.0f;
        (((struct o1C_float *)(t3))->v) = 0.0f;
        (((struct o20_float *)(t3))->v) = 0.0f;
        t1 = 0x20;
    }
    return t1;
}

int FUN_0c12ebe4(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t3;

    t0 = FUN_0c03f444(0x5, 0x0, 0x1, a7);
    t1 = t0;
    if (t0 == 0) {
    } else {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned int *)((t0 + 0x4)) = 0xC12ED48;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)((a4 + 0x28)); }
        (((struct o54_float *)(t0))->v) = 0.0f;
        (((struct o50_float *)(t0))->v) = 0.0f;
        (((struct o4C_float *)(t0))->v) = 0.0f;
        (((struct o48_float *)(t0))->v) = 0.0f;
        (((struct o44_float *)(t0))->v) = 0.0f;
        (((struct o40_float *)(t0))->v) = 0.0f;
        (((struct o14_uchar *)(t0))->v) = a5;
        (((struct o15_uchar *)(t0))->v) = 0x0;
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0x1F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        t1 = (((struct oC4_int *)(t0))->v);
        FUN_0c03744a(t1, (*(int *)((((((((signed char)a5 << 1) + (signed char)a5) << 2) << 1) + 0xC201D7C) + 0x0))), (*(int *)((((((((signed char)a5 << 1) + (signed char)a5) << 2) << 1) + 0xC201D7C) + 0x4))), (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
        *(unsigned short *)((t1 + 0x6)) = 0x20F;
        (((struct o20_float *)(t1))->v) = 1.0f;
        (((struct o1C_float *)(t1))->v) = 1.0f;
        (((struct o18_float *)(t1))->v) = 1.0f;
        (((struct o14_float *)(t1))->v) = 1.0f;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x40)) = *(struct mv3 *)((((((((signed char)a5 << 1) + (signed char)a5) << 2) << 1) + 0xC201D7C) + 0xC)); }
        *(unsigned int *)((t0 + 0x10)) = a4;
        if ((signed char)a5 != 0) {
            if ((signed char)a5 != 1) {
                if ((signed char)a5 != 2) {
                    if ((signed char)a5 != 3) {
                        if ((signed char)a5 != 4) {
                            if ((signed char)a5 != 5) {
                                if ((signed char)a5 != 6) {
                                    if ((signed char)a5 != 7) {
                                        t1 = (signed char)a5;
                                        if ((signed char)a5 != 8) {
                                        } else {
                                            *(unsigned short *)((t0 + 0x1C)) = 0x14;
                                            t1 = 0x14;
                                        }
                                        t3 = t1;
                                    } else {
                                        *(unsigned short *)((t0 + 0x1C)) = 0x3C;
                                        t3 = 0x3C;
                                    }
                                    t1 = t3;
                                } else {
                                    *(unsigned short *)((t0 + 0x1C)) = 0x3C;
                                    t1 = 0x3C;
                                }
                                t3 = t1;
                            } else {
                                *(unsigned short *)((t0 + 0x1C)) = 0x3C;
                                t3 = 0x3C;
                            }
                            t1 = t3;
                        } else {
                            *(unsigned short *)((t0 + 0x1C)) = 0x1E;
                            (((struct o2C_float *)(t0))->v) = ((((struct o168_float *)(a4))->v));
                            t1 = 0x2C;
                        }
                        t3 = t1;
                    } else {
                        *(unsigned short *)((t0 + 0x1C)) = 0x3C;
                        t3 = 0x3C;
                    }
                    t1 = t3;
                } else {
                    *(unsigned short *)((t0 + 0x1C)) = 0x3C;
                    (((struct o2C_float *)(t0))->v) = ((((struct o168_float *)(a4))->v));
                    t1 = 0x2C;
                }
                t3 = t1;
            } else {
                thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532564))) + 0x28), (t0 + 0x28));
                *(unsigned short *)((t0 + 0x1C)) = 0x14;
                t3 = 0x14;
            }
            t1 = t3;
        } else {
            *(unsigned short *)((t0 + 0x1C)) = 0x3D;
            t1 = 0x3D;
        }
    }
    return t1;
}

int FUN_0c13caec(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t0;
    register int t33;
    register int t1;
    register int t5;
    register int t6;
    register int t7;
    register int t17;
    register int t18;
    register int t19;
    register int t29;

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned char *)(((int)stk + 0)) = a5;
    *(unsigned int *)(((int)stk + 8)) = 0x8;
    t0 = FUN_0c03f444(0x5, 0x1, 0x8, a7);
    t33 = t0;
    if (t0 != 0) {
        t1 = *(int *)(((int)stk + 4));
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((t1 + 0x1)));
        *(unsigned int *)((t0 + 0x4)) = 0xC13C930;
        *(unsigned char *)((t0 + 0x2)) = (*(signed char *)(((int)stk + 0)));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x34)) = *(struct mv3 *)((t1 + 0x34)); }
        math_mat_get_translate((t1 + 0x64), (t0 + 0x28));
        (((struct o48_float *)(t0))->v) = 1.0f;
        (((struct o44_float *)(t0))->v) = 1.0f;
        (((struct o40_float *)(t0))->v) = 1.0f;
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0x1F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        t5 = 0xC2A210C;
        t6 = 0x0;
        t7 = 0x0;
        for (;;) {
            FUN_0c037498((*(int *)((((0xC4 + t0) + t7) + 0x0))), 0x1, 0x7, (*(int *)((((*(signed char *)((t0 + 0x1))) << 2) + 0xC4B40FC))));
            *(unsigned char *)(((*(int *)((((0xC4 + t0) + t7) + 0x0))) + 0x0)) = 0x1;
            *(unsigned short *)(((*(int *)((((0xC4 + t0) + t7) + 0x0))) + 0x6)) = 0xF;
            (((struct o80_uint *)((*(int *)((((0xC4 + t0) + t7) + 0x0)))))->v) = t6;
            math_vec3_accumulate(((*(int *)((((0xC4 + t0) + t7) + 0x0))) + 0x6C), t5);
            t7 = (t7 + 0x4);
            t5 = (t5 + 0xC);
            t6 = (t6 + 0x8000);
            if ((unsigned int)t7 >= (unsigned int)0x8) {
                break;
            }
        }
        *(unsigned int *)(((int)stk + 0)) = 0x2;
        t17 = 0xE38;
        t18 = 0xC2A2124;
        t19 = 0x8;
        for (;;) {
            FUN_0c037498((*(int *)((((0xC4 + t0) + t19) + 0x0))), 0x2, 0x7, (*(int *)((((*(signed char *)((t0 + 0x1))) << 2) + 0xC4B40FC))));
            *(unsigned char *)(((*(int *)((((0xC4 + t0) + t19) + 0x0))) + 0x0)) = 0x1;
            *(unsigned short *)(((*(int *)((((0xC4 + t0) + t19) + 0x0))) + 0x6)) = 0xF;
            (((struct o80_uint *)((*(int *)((((0xC4 + t0) + t19) + 0x0)))))->v) = t17;
            math_vec3_accumulate(((*(int *)((((0xC4 + t0) + t19) + 0x0))) + 0x6C), t18);
            t29 = *(int *)(((int)stk + 0));
            t18 = (t18 + 0xC);
            t17 = (t17 + 0x71C);
            *(unsigned int *)(((int)stk + 0)) = (t29 + 0x1);
            t19 = (t19 + 0x4);
            if ((int)(t29 + 0x1) >= (int)(*(int *)(((int)stk + 8)))) {
                break;
            }
        }
        *(unsigned int *)((t0 + 0x10)) = (*(int *)(((int)stk + 4)));
        (((struct o1B_uchar *)(t0))->v) = (*(signed char *)0xC54223C);
        t33 = 0x1B;
    }
    return t33;
}

int FUN_0c124da6(int a4, int a5, int a6, int a7, float f4, float f5)
{
    int stk[1];
    register int t0;
    register int t39;
    register int t1;
    register int t26;
    int t16;
    register int t19;
    register int t23;
    register int t24;

    *(unsigned char *)(((int)stk + 0)) = a5;
    t0 = *(signed char *)(((int)stk + 0));
    t39 = t0;
    if (t0 == 0) {
        t1 = FUN_0c03f444(0x5, 0x0, 0x3, a7);
        t26 = t1;
        if (t1 != 0) {
            *(unsigned char *)((t1 + 0x1)) = (*(signed char *)((a4 + 0x1)));
            (((struct oA8_uchar *)(t1))->v) = 0x1;
            (((struct oAC_ushort *)(t1))->v) = 0xF;
            (((struct oA9_uchar *)(t1))->v) = 0x21;
            *(unsigned int *)((t1 + 0x4)) = 0xC124C04;
            *(unsigned int *)((t1 + 0x10)) = a4;
            (((struct o14_uchar *)(t1))->v) = (*(signed char *)(((int)stk + 0)));
            FUN_0c03744a(((((struct oC4_int *)(t1))->v)), 0x0, 0x9, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
            FUN_0c03744a(((((struct oC8_int *)(t1))->v)), 0x1, 0x9, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
            FUN_0c03744a(((((struct oCC_int *)(t1))->v)), 0x2, 0x9, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x34)) = *(struct mv3 *)((a4 + 0x34)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x28)) = *(struct mv3 *)((a4 + 0x28)); }
            (((struct o48_float *)(t1))->v) = 1.0f;
            (((struct o44_float *)(t1))->v) = 1.0f;
            (((struct o40_float *)(t1))->v) = 1.0f;
            *(unsigned short *)((t1 + 0x1C)) = 0x0;
            t16 = 0x0;
            for (;;) {
                *(unsigned char *)(((*(int *)((((0xC4 + t1) + (t16 << 2)) + 0x0))) + 0x0)) = 0x1;
                *(unsigned short *)(((*(int *)((((t16 << 2) + (0xC4 + t1)) + 0x0))) + 0x6)) = 0x1F;
                if ((t16 != 0) && (t16 != 1)) {
                    t24 = t16;
                    if (t16 != 2) {
                    } else {
                        t19 = *(int *)((((t16 << 2) + (0xC4 + t1)) + 0x0));
                        (((struct o8C_float *)(t19))->v) = 0.800000012f;
                        (((struct o88_float *)(t19))->v) = 0.800000012f;
                        (((struct o84_float *)(t19))->v) = 0.800000012f;
                        t24 = 0x84;
                    }
                } else {
                    t23 = *(int *)((((t16 << 2) + (0xC4 + t1)) + 0x0));
                    (((struct o8C_float *)(t23))->v) = 1.0f;
                    (((struct o88_float *)(t23))->v) = 1.0f;
                    (((struct o84_float *)(t23))->v) = 1.0f;
                    t24 = 0x84;
                }
                t16 = (t16 + 0x1);
                if ((int)t16 >= (int)0x3) {
                    break;
                }
            }
            t26 = t24;
        }
        t39 = t26;
    }
    return t39;
}

int FUN_0c0f6b1c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = FUN_0c03f444(0x2, 0x0, 0x6, a7);
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x4)) = 0xC0F6454;
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        *(unsigned char *)((t0 + 0x2)) = a4;
        (((struct o48_float *)(t0))->v) = 1.0f;
        (((struct o44_float *)(t0))->v) = 1.0f;
        (((struct o40_float *)(t0))->v) = 1.0f;
        FUN_0c064d24(t0, 0x3, 0x1C, 0x1, 0x40, 0x0, 0x0, 0x10);
        t1 = 0x0;
        t2 = 0x0;
        for (;;) {
            t2 = (t2 + 0x1);
            *(unsigned short *)(((*(int *)((((0xC4 + t0) + t1) + 0x0))) + 0x6)) = 0x1F;
            *(unsigned char *)(((*(int *)((((0xC4 + t0) + t1) + 0x0))) + 0x0)) = 0x0;
            t3 = *(int *)((((0xC4 + t0) + t1) + 0x0));
            *(unsigned short *)((t3 + 0x6)) = ((*(short *)((t3 + 0x6))) | 0x200);
            t3 = *(int *)((((0xC4 + t0) + t1) + 0x0));
            (((struct o20_float *)(t3))->v) = 1.0f;
            (((struct o1C_float *)(t3))->v) = 1.0f;
            (((struct o18_float *)(t3))->v) = 1.0f;
            t1 = (t1 + 0x4);
            if ((int)t2 >= (int)0x6) {
                break;
            }
        }
        FUN_0c037498(((((struct oC4_int *)(t0))->v)), 0x0, 0x2C, (*(int *)0xC4B40CC));
        FUN_0c037498(((((struct oC8_int *)(t0))->v)), 0x1, 0x2C, (*(int *)0xC4B40CC));
        FUN_0c037498(((((struct oCC_int *)(t0))->v)), (a4 + 0xB), 0x2C, (*(int *)0xC4B40CC));
        FUN_0c037498(((((struct oD0_int *)(t0))->v)), 0x3, 0x2C, (*(int *)0xC4B40CC));
        FUN_0c037498(((((struct oD4_int *)(t0))->v)), (a4 + 0x4), 0x2C, (*(int *)0xC4B40CC));
        FUN_0c037498(((((struct oD8_int *)(t0))->v)), 0x2, 0x2C, (*(int *)0xC4B40CC));
        t1 = (((struct oD4_int *)(t0))->v);
        (((struct o8C_float *)(t1))->v) = 1.04999995f;
        (((struct o88_float *)(t1))->v) = 1.04999995f;
        (((struct o84_float *)(t1))->v) = 1.04999995f;
        (((struct oAA_uchar *)(t0))->v) = 0x1;
        (((struct oAB_uchar *)(t0))->v) = 0x4;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)(a6); }
        (((struct o2C_float *)(t0))->v) = (((((struct o2C_float *)(t0))->v)) + 240.0f);
        *(unsigned int *)((t0 + 0x38)) = a5;
    }
    return t0;
}

int FUN_0c15e078(int a4, int a5, int a6, int a7)
{
    int stk[6];
    register int t0;
    register int t22;
    register int t3;
    register int t4;
    register int t6;
    register int t9;
    register int t21;

    *(unsigned char *)(((int)stk + 8)) = a4;
    t0 = FUN_0c03f444(0x5, 0x0, 0x8, a7);
    t22 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((int)stk + 8)));
        *(unsigned int *)((t0 + 0x4)) = 0xC15DF9C;
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        (((struct oA4_uint *)(t0))->v) = 0x0;
        *(unsigned int *)((t0 + 0x3C)) = 0x0;
        *(unsigned int *)((t0 + 0x38)) = 0x0;
        *(unsigned int *)((t0 + 0x34)) = 0x0;
        (((struct o48_float *)(t0))->v) = 1.0f;
        (((struct o44_float *)(t0))->v) = 1.0f;
        (((struct o40_float *)(t0))->v) = 1.0f;
        *(unsigned short *)((t0 + 0x1C)) = 0x3C;
        *(unsigned char *)(((int)stk + 0)) = 0x0;
        *(unsigned int *)(((int)stk + 4)) = (((short)(*(signed char *)(((int)stk + 8))) * (short)0x3938) + 0xC532498);
        t3 = 0xC203808;
        t4 = 0x0;
        for (;;) {
            t6 = *(int *)((((0xC4 + t0) + t4) + 0x0));
            FUN_0c03744a(t6, 0x0, 0x21, (*(int *)0xC4B40CC));
            t9 = *(signed char *)((t3 + 0x0));
            t3 = (t3 + 0x1);
            thunk_FUN_0c058310(((*(int *)((((t9 << 2) + (0xC4 + (*(int *)(((int)stk + 4))))) + 0x0))) + 0x28), (((int)stk + 0) + 0xC));
            *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) + ((float)((int)((int)(nlRand()) % (int)0x1E)) + -15.0f));
            *(float *)(((int)stk + 16)) = ((*(float *)(((int)stk + 16))) + ((float)((int)((int)(nlRand()) % (int)0x1E)) + -15.0f));
            *(float *)(((int)stk + 20)) = ((*(float *)(((int)stk + 20))) + ((float)((int)((int)(nlRand()) % (int)0x1E)) + -15.0f));
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t6 + 0x6C)) = *(struct mv3 *)((((int)stk + 0) + 0xC)); }
            *(unsigned char *)((t6 + 0x0)) = 0x1;
            *(unsigned short *)((t6 + 0x6)) = 0x21;
            (((struct o8C_float *)(t6))->v) = 1.0f;
            (((struct o88_float *)(t6))->v) = 1.0f;
            (((struct o84_float *)(t6))->v) = 1.0f;
            t21 = *(signed char *)(((int)stk + 0));
            *(unsigned char *)(((int)stk + 0)) = (t21 + 0x1);
            t4 = (t4 + 0x4);
            if ((int)(signed char)(t21 + 0x1) >= (int)0x8) {
                break;
            }
        }
        t22 = 0x84;
    }
    return t22;
}

int FUN_0c12f69c(int a4, int a5, int a6, int a7)
{
    int stk[1];
    register int t1;
    register int t36;
    register int t3;
    register int t13;
    register int t2;
    register int t4;

    *(unsigned char *)(((int)stk + 0)) = a5;
    t1 = FUN_0c03f444(0x5, 0x0, (*(int *)0xC201E68), a7);
    t36 = t1;
    if (t1 == 0) {
    } else {
        t3 = 0x0;
        for (;;) {
            if ((int)t3 >= (int)((((struct oC0_int *)(t1))->v))) {
                break;
            }
            t4 = 0xC4;
            t2 = t3;
            t2 = (t2 << 2);
            t4 = (t4 + t1);
            t4 = (t4 + t2);
            t4 = (*(int *)((t4 + 0x0)));
            FUN_0c03744a(t4, (*(int *)((t2 + 0xC201E64))), 0x0, (*(int *)((((*(signed char *)(((0x1 + a4) + 0x0))) << 2) + 0xC4B40FC))));
            *(unsigned short *)((t4 + 0x6)) = 0x41F;
            t3 = (t3 + 0x1);
            (((struct o14_float *)(t4))->v) = 1.0f;
        }
        (((struct oA8_uchar *)(t1))->v) = 0x1;
        (((struct oAC_ushort *)(t1))->v) = 0x1F;
        (((struct oA9_uchar *)(t1))->v) = 0x21;
        *(unsigned char *)((t1 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned int *)((t1 + 0x4)) = 0xC12F828;
        *(unsigned int *)((t1 + 0x10)) = a4;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x28)) = *(struct mv3 *)((a4 + 0x28)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x34)) = *(struct mv3 *)((a4 + 0x34)); }
        (((struct o54_float *)(t1))->v) = 0.0f;
        (((struct o50_float *)(t1))->v) = 0.0f;
        (((struct o4C_float *)(t1))->v) = 0.0f;
        (((struct o48_float *)(t1))->v) = 0.0f;
        (((struct o44_float *)(t1))->v) = 0.0f;
        (((struct o40_float *)(t1))->v) = 0.0f;
        *(unsigned short *)((t1 + 0x1C)) = 0x14;
        *(unsigned short *)((t1 + 0x1E)) = 0x32;
        (((struct o20_ushort *)(t1))->v) = 0x40;
        (((struct o15_uchar *)(t1))->v) = (*(signed char *)(((int)stk + 0)));
        t13 = *(signed char *)(((int)stk + 0));
        if (t13 != 0) {
            t36 = t13;
            if (t13 != 10) {
            } else {
                (((struct o14_uchar *)(t1))->v) = 0xA;
                (((struct o28_float *)(t1))->v) = (((((struct o28_float *)(t1))->v)) + 0.0f);
                (((struct o2C_float *)(t1))->v) = (((((struct o2C_float *)(t1))->v)) + 100.0f);
                (((struct o30_float *)(t1))->v) = (((((struct o30_float *)(t1))->v)) + 0.0f);
                *(unsigned int *)((t1 + 0x34)) = ((*(int *)((t1 + 0x34))) - 0x4000);
                *(unsigned int *)((t1 + 0x38)) = ((*(int *)((t1 + 0x38))) + 0x4000);
                t36 = 0x30;
            }
        } else {
            (((struct o14_uchar *)(t1))->v) = 0xA;
            (((struct oA4_uint *)(t1))->v) = (((((struct oF4_int *)(a4))->v)) + 0x28);
            (((struct o28_float *)(t1))->v) = -20.0f;
            (((struct o2C_float *)(t1))->v) = 0.0f;
            (((struct o30_float *)(t1))->v) = 0.0f;
            *(unsigned int *)((t1 + 0x34)) = ((*(int *)((t1 + 0x34))) + 0x4000);
            *(unsigned int *)((t1 + 0x3C)) = ((*(int *)((t1 + 0x3C))) + 0x38E);
            t36 = 0x30;
        }
    }
    return t36;
}
