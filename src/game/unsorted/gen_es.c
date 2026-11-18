/* Straight-line functions with calls and guards (batch gen_es): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
struct o10_float { char p[0x10]; float v; };
struct o12A_short { char p[0x12A]; short v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o376C_uint { char p[0x376C]; unsigned int v; };
struct o378C_float { char p[0x378C]; float v; };
struct o3818_short { char p[0x3818]; short v; };
struct o40_float { char p[0x40]; float v; };
struct o41C_uchar { char p[0x41C]; unsigned char v; };
struct o41D_uchar { char p[0x41D]; unsigned char v; };
struct o422_uchar { char p[0x422]; unsigned char v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o6C_float { char p[0x6C]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c037498(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int, int);
int FUN_0c0588bc(int, int, int, int, int, int);
int FUN_0c059df2(int, int);
int FUN_0c07e328(int, int);
int FUN_0c07e3fc(int, int);
int FUN_0c0c213c(int);
int FUN_0c0c25c4(int);
int FUN_0c0c283a(int);
int FUN_0c0c2ab6(int, int);
int FUN_0c0c2d56(int, int, int);
int FUN_0c1171f0(int);
int FUN_0c118ee4(int, int);
int FUN_0c168fa8(int, int, int, int);
int FUN_0c16944a(int, int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int nlAddVector3op(int, int, int);
int FUN_0c03302a(int a4, int a5, int a6, int a7, float f4);
int FUN_0c0cb448(int a4, int a5, int a6, int a7);
int FUN_0c0c7664(int a4);
int FUN_0c11902c(int a4);
int FUN_0c1507f4(int a4, int a5, int a6, int a7);

int FUN_0c03302a(int a4, int a5, int a6, int a7, float f4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
    } else {
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0xF;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        *(unsigned short *)((a4 + 0x1C)) = 0x1;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 == 1) {
            t1 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
            t2 = (short)(t1 - 1);
            if ((short)(t1 - 1) == 0) {
                *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x0;
                *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x1;
                (((struct o74_float *)(((((struct oC8_int *)(a4))->v))))->v) = 0.0f;
                (((struct o8C_float *)(((((struct oC8_int *)(a4))->v))))->v) = 1.0f;
                *(unsigned short *)((a4 + 0x1C)) = 0x19;
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                t2 = 0x15;
            }
            t1 = t2;
        } else {
            if (t0 == 2) {
                t2 = (((struct oC8_int *)(a4))->v);
                (((struct o74_float *)(t2))->v) = (((((struct o74_float *)(t2))->v)) - 0.200000003f);
                t2 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t2 - 1);
                t3 = (short)(t2 - 1);
                if ((short)(t2 - 1) == 0) {
                    *(unsigned short *)((a4 + 0x1C)) = 0x32;
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    t3 = 0x15;
                }
                t2 = t3;
            } else {
                if (t0 == 3) {
                    t3 = (((struct oC8_int *)(a4))->v);
                    (((struct o8C_float *)(t3))->v) = (((((struct o8C_float *)(t3))->v)) - 0.0199999996f);
                    t3 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t3 - 1);
                    t4 = (short)(t3 - 1);
                    if ((short)(t3 - 1) == 0) {
                        *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
                        *(unsigned short *)((a4 + 0x1C)) = 0x258;
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        t4 = 0x15;
                    }
                    t3 = t4;
                } else {
                    t4 = t0;
                    if (t0 == 4) {
                        t0 = *(short *)((a4 + 0x1C));
                        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
                        t4 = (short)(t0 - 1);
                        if ((short)(t0 - 1) == 0) {
                            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                            t4 = 0x14;
                        }
                    }
                    t3 = t4;
                }
                t2 = t3;
            }
            t1 = t2;
        }
        t0 = t1;
    } else {
        t1 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
        if ((short)(t1 - 1) == 0) {
            t1 = (((struct oC4_int *)(a4))->v);
            FUN_0c03744a(t1, 0x0, (*(signed char *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC1A9A2C) + 0x18))), (*(int *)0xC4B40D0));
            *(unsigned char *)((t1 + 0x0)) = 0x0;
            *(unsigned short *)((t1 + 0x6)) = 0x31F;
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x6C)) = *(struct mv3 *)((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC1A9A2C)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((0x84 + t1)) = *(struct mv3 *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC1A9A2C) + 0xC)); }
            (((struct o18_float *)(t1))->v) = 1.0f;
            (((struct o1C_float *)(t1))->v) = 0.0f;
            (((struct o20_float *)(t1))->v) = 0.0f;
            t1 = (((struct oC8_int *)(a4))->v);
            FUN_0c03744a(t1, 0x1, (*(signed char *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC1A9A2C) + 0x19))), (*(int *)0xC4B40D0));
            *(unsigned char *)((t1 + 0x0)) = 0x0;
            *(unsigned short *)((t1 + 0x6)) = 0x31F;
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x6C)) = *(struct mv3 *)((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC1A9A2C)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((0x84 + t1)) = *(struct mv3 *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC1A9A2C) + 0xC)); }
            (((struct o18_float *)(t1))->v) = 0.800000012f;
            (((struct o1C_float *)(t1))->v) = 0.800000012f;
            (((struct o20_float *)(t1))->v) = 0.800000012f;
            *(unsigned short *)((a4 + 0x1C)) = 0x1;
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        }
        t1 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
        t2 = (short)(t1 - 1);
        if ((short)(t1 - 1) == 0) {
            *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x0;
            *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x1;
            (((struct o74_float *)(((((struct oC8_int *)(a4))->v))))->v) = 0.0f;
            (((struct o8C_float *)(((((struct oC8_int *)(a4))->v))))->v) = 1.0f;
            *(unsigned short *)((a4 + 0x1C)) = 0x19;
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            t2 = 0x15;
        }
        t0 = t2;
    }
    return t0;
}

int FUN_0c0cb448(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    t0 = FUN_0c03f444(0x9, 0x0, 0x0, a7);
    if (t0 == 0) {
        return t0;
    }
    *(unsigned int *)((t0 + 0x4)) = 0xC0CACAC;
    (((struct oAC_ushort *)(t0))->v) = 0xF;
    (((struct oA9_uchar *)(t0))->v) = 0x40;
    *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
    (((struct o41C_uchar *)(t0))->v) = (*(signed char *)((a4 + 0x3721)));
    FUN_0c0c25c4(t0);
    (((struct oA8_uchar *)(t0))->v) = 0x0;
    (((struct o41D_uchar *)(t0))->v) = 0x1;
    (((struct o422_uchar *)(t0))->v) = 0x0;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)((a4 + 0x28)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x4C)) = *(struct mv3 *)((a4 + 0x4C)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x34)) = *(struct mv3 *)((a4 + 0x34)); }
    *(unsigned char *)((t0 + 0x2)) = a5;
    t1 = *(signed char *)((t0 + 0x2));
    if (t1 != 0) {
        if (t1 != 1) {
            if (t1 != 2) {
                if (t1 == 3) {
                    u0 = (((struct o378C_float *)(a4))->v);
                    (((struct o48_float *)(t0))->v) = u0;
                    (((struct o44_float *)(t0))->v) = u0;
                    (((struct o40_float *)(t0))->v) = u0;
                    FUN_0c0c2ab6(t0, 0x1F);
                    FUN_0c07e3fc(t0, 0x7);
                    t2 = (((struct o3818_short *)(a4))->v);
                    *(unsigned short *)((t0 + 0x1C)) = t2;
                    return t2;
                }
                if (t1 == 4) {
                    u0 = (((struct o378C_float *)(a4))->v);
                    (((struct o48_float *)(t0))->v) = u0;
                    (((struct o44_float *)(t0))->v) = u0;
                    (((struct o40_float *)(t0))->v) = u0;
                    FUN_0c0c2ab6(t0, 0x1F);
                    FUN_0c07e3fc(t0, 0x9);
                    *(unsigned short *)((t0 + 0x1C)) = ((((struct o3818_short *)(a4))->v));
                    *(unsigned short *)((t0 + 0x1E)) = 0x0;
                    return 0x0;
                }
                if (t1 == 5) {
                    u0 = (((struct o378C_float *)(a4))->v);
                    (((struct o48_float *)(t0))->v) = u0;
                    (((struct o44_float *)(t0))->v) = u0;
                    (((struct o40_float *)(t0))->v) = u0;
                    FUN_0c0c2ab6(t0, 0x1F);
                    FUN_0c07e3fc(t0, 0xB);
                    *(unsigned short *)((t0 + 0x1C)) = ((((struct o3818_short *)(a4))->v));
                    *(unsigned short *)((t0 + 0x1E)) = 0x0;
                    return 0x0;
                }
                if (t1 == 6) {
                    *(unsigned int *)((t0 + 0x4)) = 0xC0CAFC0;
                    u0 = (((struct o378C_float *)(a4))->v);
                    (((struct o48_float *)(t0))->v) = u0;
                    (((struct o44_float *)(t0))->v) = u0;
                    (((struct o40_float *)(t0))->v) = u0;
                    FUN_0c0c2ab6(t0, 0x50);
                    return FUN_0c07e328(t0, 0x8E);
                }
                return t1;
            }
            u0 = (((struct o378C_float *)(a4))->v);
            (((struct o48_float *)(t0))->v) = u0;
            (((struct o44_float *)(t0))->v) = u0;
            (((struct o40_float *)(t0))->v) = u0;
            FUN_0c0c2ab6(t0, 0x1F);
            FUN_0c07e3fc(t0, 0x6);
            *(unsigned short *)((t0 + 0x1C)) = ((((struct o3818_short *)(a4))->v));
            *(unsigned short *)((t0 + 0x1E)) = 0xF;
            return 0xF;
        }
        u0 = (((struct o378C_float *)(a4))->v);
        (((struct o48_float *)(t0))->v) = u0;
        (((struct o44_float *)(t0))->v) = u0;
        (((struct o40_float *)(t0))->v) = u0;
        FUN_0c0c2ab6(t0, 0x1F);
        t1 = 0x5;
        if ((*(signed char *)((a4 + 0x15))) == 0) {
            t1 = 0x4;
        }
        return (FUN_0c07e3fc(t0, t1));
    }
    *(unsigned short *)((t0 + 0x1C)) = (*(signed char *)((a4 + 0x1)));
    u0 = (((struct o378C_float *)(a4))->v);
    (((struct o48_float *)(t0))->v) = u0;
    (((struct o44_float *)(t0))->v) = u0;
    (((struct o40_float *)(t0))->v) = u0;
    *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x373F)));
    FUN_0c0c2ab6(t0, (*(signed char *)0xC275FCB));
    FUN_0c07e3fc(t0, 0x3);
    (((struct o12A_ushort *)(t0))->v) = (~(((int)0x1 << (int)(*(signed char *)((t0 + 0x1)))) | ((int)0x1 << (int)(*(short *)((t0 + 0x1C))))));
    t1 = 0x3740;
    if ((*(signed char *)((a4 + 0x3740))) == 0xFF) {
    } else {
        (((struct o12A_ushort *)(t0))->v) = (((((struct o12A_short *)(t0))->v)) & (~((int)0x1 << (int)(*(signed char *)((a4 + 0x3740))))));
        t1 = 0x12A;
    }
    return t1;
}

int FUN_0c0c7664(int a4)
{
    int stk[3];
    register int t0;
    register int t1;
    register int t5;
    register float t9;
    register float u11;
    register float u12;
    register float u13;
    register float u14;
    register float u16;
    register float t18;
    register float u19;
    register float u21;
    register float u22;
    register int t34;
    register int t44;
    register float t46;
    register float u48;
    register float u49;
    register float u50;
    register float u51;
    register float u53;
    register float t55;
    register float u56;
    register float u58;
    register float u59;
    register float t69;
    register float u71;
    register float u72;
    register float u73;
    register float u74;
    register float u76;
    register float t78;
    register float u79;
    register float u81;
    register float u82;
    register int t94;

    t0 = *(signed char *)((a4 + 0x1));
    t1 = FUN_0c0c283a(a4);
    if (t1 != 0) {
        t94 = (FUN_0c0c2d56(a4, 0x6, (*(signed char *)((a4 + 0x1)))));
    } else {
        t5 = *(signed char *)((a4 + 0x15));
        if (t5 != 0) {
            if (t5 == 1) {
                if (((int)((int)(*(short *)((a4 + 0x1C))) % (int)0x3)) == 0) {
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x28)); }
                    t9 = math_sin_angle16((*(int *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x38))));
                    u11 = (((struct o378C_float *)((((short)t0 * (short)0x3938) + 0xC532498)))->v);
                    u12 = (t9 * u11);
                    u13 = (*(float *)(((int)stk + 0)));
                    u13 = u13 + 80.0f * u12;
                    *(float *)(((int)stk + 0)) = u13;
                    u14 = (((struct o378C_float *)((((short)t0 * (short)0x3938) + 0xC532498)))->v);
                    u16 = (*(float *)(((int)stk + 4)));
                    u16 = u16 + 100.0f * u14;
                    *(float *)(((int)stk + 4)) = u16;
                    t18 = math_cos_angle16((*(int *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x38))));
                    u19 = (((struct o378C_float *)((((short)t0 * (short)0x3938) + 0xC532498)))->v);
                    u21 = (t18 * u19);
                    u22 = (*(float *)(((int)stk + 8)));
                    u22 = u22 + 80.0f * u21;
                    *(float *)(((int)stk + 8)) = u22;
                    if ((*(short *)((a4 + 0x1E))) == 0) {
                        FUN_0c168fa8((*(signed char *)((a4 + 0x1))), ((int)stk + 0), ((((short)t0 * (short)0x3938) + 0xC532498) + 0x34), 0x1);
                        *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
                    } else {
                        FUN_0c168fa8((*(signed char *)((a4 + 0x1))), ((int)stk + 0), ((((short)t0 * (short)0x3938) + 0xC532498) + 0x34), 0x0);
                    }
                }
                t34 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t34 - 1);
                if ((int)(short)(t34 - 1) <= 0) {
                    FUN_0c0c2d56(a4, 0x5, (*(signed char *)((a4 + 0x1))));
                }
            }
        } else {
            FUN_0c0c213c(a4);
            t44 = *(signed char *)((a4 + 0x41C));
            if ((unsigned char)t44 != 66) {
                if ((unsigned char)t44 != 67) {
                } else {
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x28)); }
                    t46 = math_sin_angle16((*(int *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x38))));
                    u48 = (((struct o378C_float *)((((short)t0 * (short)0x3938) + 0xC532498)))->v);
                    u49 = (t46 * u48);
                    u50 = (*(float *)(((int)stk + 0)));
                    u50 = u50 + 80.0f * u49;
                    *(float *)(((int)stk + 0)) = u50;
                    u51 = (((struct o378C_float *)((((short)t0 * (short)0x3938) + 0xC532498)))->v);
                    u53 = (*(float *)(((int)stk + 4)));
                    u53 = u53 + 115.0f * u51;
                    *(float *)(((int)stk + 4)) = u53;
                    t55 = math_cos_angle16((*(int *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x38))));
                    u56 = (((struct o378C_float *)((((short)t0 * (short)0x3938) + 0xC532498)))->v);
                    u58 = (t55 * u56);
                    u59 = (*(float *)(((int)stk + 8)));
                    u59 = u59 + 80.0f * u58;
                    *(float *)(((int)stk + 8)) = u59;
                    FUN_0c16944a((*(signed char *)((a4 + 0x1))), ((int)stk + 0), ((((short)t0 * (short)0x3938) + 0xC532498) + 0x34));
                    FUN_0c059df2((*(signed char *)((a4 + 0x1))), 0x70);
                    FUN_0c0c2d56(a4, 0x5, (*(signed char *)((a4 + 0x1))));
                }
            } else {
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x28)); }
                t69 = math_sin_angle16((*(int *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x38))));
                u71 = (((struct o378C_float *)((((short)t0 * (short)0x3938) + 0xC532498)))->v);
                u72 = (t69 * u71);
                u73 = (*(float *)(((int)stk + 0)));
                u73 = u73 + 80.0f * u72;
                *(float *)(((int)stk + 0)) = u73;
                u74 = (((struct o378C_float *)((((short)t0 * (short)0x3938) + 0xC532498)))->v);
                u76 = (*(float *)(((int)stk + 4)));
                u76 = u76 + 100.0f * u74;
                *(float *)(((int)stk + 4)) = u76;
                t78 = math_cos_angle16((*(int *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x38))));
                u79 = (((struct o378C_float *)((((short)t0 * (short)0x3938) + 0xC532498)))->v);
                u81 = (t78 * u79);
                u82 = (*(float *)(((int)stk + 8)));
                u82 = u82 + 80.0f * u81;
                *(float *)(((int)stk + 8)) = u82;
                FUN_0c168fa8((*(signed char *)((a4 + 0x1))), ((int)stk + 0), ((((short)t0 * (short)0x3938) + 0xC532498) + 0x34), 0x0);
                FUN_0c059df2((*(signed char *)((a4 + 0x1))), 0x67);
                *(unsigned short *)((a4 + 0x1C)) = 0x14;
                *(unsigned short *)((a4 + 0x1E)) = 0x0;
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            }
        }
        (((struct o376C_uint *)((((short)t0 * (short)0x3938) + 0xC532498)))->v) = a4;
        t94 = 0x376C;
    }
    return t94;
}

int FUN_0c11902c(int a4)
{
    int stk[6];

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R6;
    register int R7;
    register float F2;
    register float F3;
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
    register int v0_8;
    register float w0_0;
    register float w0_1;
    v0_7 = a4;
    v0_2 = *(int *)((v0_7 + 0x10));
    v0_0 = ((0x41C + v0_2));
    v0_1 = (v0_7);
    v0_7 = (0x63);
    if (((*(signed char *)((v0_2 + 0x14))) != 80)) goto L_C119056;
    (((struct o14_uchar *)(v0_1))->v) = v0_7;
    L_C119056:;
    v0_3 = *(signed char *)((v0_1 + 0x14));
    v0_6 = (v0_3);
    v0_2 = (0x1);
    if ((v0_3 == 0)) goto L_C119070;
    if ((v0_6 == 1)) goto L_C1190A8;
    if ((v0_6 != 99)) goto L_C11906C;
    return FUN_0c03f346(v0_1, R5, R6, R7);
    L_C11906C:;
    L_C119250:;
    return v0_6;
    L_C1190A8:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_1 + 0x28)) = *(struct mv3 *)(((*(int *)((v0_1 + 0x10))) + 0x28)); }
    FUN_0c1171f0(v0_1);
    v0_3 = (0x0);
    if (((int)(((*(short *)((v0_0 + 0x8))) - (*(short *)((v0_0 + 0xC)))) + (*(signed char *)((v0_1 + 0x2)))) >= (int)(*(short *)((v0_0 + 0xE))))) goto L_C11913A;
    v0_4 = *(short *)((v0_0 + 0x8));
    v0_5 = *(short *)((v0_0 + 0xC));
    v0_6 = ((*(signed char *)((v0_1 + 0x2))));
    v0_7 = ((v0_4 - v0_5));
    if (((int)(v0_4 - v0_5) >= 0)) goto L_C1190E2;
    v0_7 = (v0_3);
    L_C1190E2:;
    v0_7 = *(int *)((((v0_7 + v0_6) << 2) + 0xC474410));
    v0_8 = *(signed char *)((v0_0 + 0x4));
    v0_6 = (v0_8);
    v0_4 = (((v0_7 << 2) + 0xC474104));
    v0_5 = ((((v0_7 << 2) << 1) + 0xC29D7D0));
    v0_7 = (v0_7);
    if ((v0_8 == 0)) goto L_C119112;
    if ((v0_6 == 1)) goto L_C119112;
    if ((v0_6 == 2)) goto L_C119116;
    if (!((v0_6 == 3))) goto L_C11913A;
    R5 = ((*(int *)((v0_5 + 0x4))));
    goto L_C119136;
    L_C11913A:;
    *(unsigned int *)(((int)stk + 8)) = 0xC291D98;
    *(unsigned int *)(((int)stk + 12)) = 0xC291D80;
    *(unsigned int *)(((int)stk + 16)) = 0xC291D70;
    v0_4 = (v0_3);
    v0_5 = (0xC0588BC);
    w0_0 = (12.0f);
    L_C119226:;
    v0_5 = *(signed char *)((v0_0 + 0x4));
    v0_6 = ((v0_5 << 2));
    if (((int)v0_4 < (int)(*(int *)((0xC291E04 + (v0_5 << 2)))))) goto L_C119150;
    goto L_C119250;
    L_C119150:;
    v0_5 = ((v0_4 << 2));
    if (((int)(((*(short *)((v0_0 + 0x8))) - (*(short *)((v0_0 + 0xC)))) + (*(signed char *)((v0_1 + 0x2)))) >= (int)(*(short *)((v0_0 + 0xE))))) goto L_C11921A;
    v0_6 = *(signed char *)((v0_0 + 0x4));
    v0_7 = (v0_6);
    if ((v0_6 == 2)) goto L_C119176;
    if (!((v0_7 != 3))) goto L_C119176;
    v0_6 = v0_3;
    *(int *)((int)stk + 4) = v0_6;
    *(int *)((int)stk + 0) = 0x4;
    v0_7 = *(signed char *)((v0_1 + 0x2));
    v0_8 = *(int *)(((int)stk + 12));
    *(unsigned int *)(((int)stk + 4)) = v0_6;
    *(unsigned int *)(((int)stk + 0)) = 0x4;
    R5 = (0xC291D8C);
    R6 = (v0_8);
    R7 = (v0_7);
    goto L_C119194;
    L_C119176:;
    v0_6 = v0_3;
    *(int *)((int)stk + 4) = v0_6;
    *(int *)((int)stk + 0) = 0x4;
    v0_7 = *(signed char *)((v0_1 + 0x2));
    v0_8 = *(int *)(((int)stk + 8));
    *(unsigned int *)(((int)stk + 4)) = v0_6;
    *(unsigned int *)(((int)stk + 0)) = 0x4;
    R5 = (0xC291DA4);
    R6 = (v0_8);
    R7 = (v0_7);
    L_C119194:;
    FUN_0c0588bc(((*(int *)((((0xC4 + v0_1) + v0_5) + 0x0))) + 0x6C), R5, R6, R7, *(int *)((int)stk + 0), *(int *)((int)stk + 4));
    v0_6 = *(int *)((((0xC4 + v0_1) + v0_5) + 0x0));
    *(unsigned int *)(((int)stk + 20)) = v0_6;
    nlAddVector3op(((*(int *)(((int)stk + 20))) + 0x6C), (v0_6 + 0x6C), (v0_1 + 0x4C));
    v0_6 = *(int *)((((0xC4 + v0_1) + v0_5) + 0x0));
    w0_1 = ((((struct o6C_float *)(v0_6))->v));
    w0_1 = w0_1 + w0_0 * ((float)(v0_2 - v0_4));
    (((struct o6C_float *)(v0_6))->v) = w0_1;
    v0_6 = *(int *)((((0xC4 + v0_1) + v0_5) + 0x0));
    *(unsigned short *)((v0_6 + 0x6)) = ((*(short *)((v0_6 + 0x6))) | 0x200);
    v0_7 = *(short *)((v0_0 + 0xC));
    v0_6 = (v0_7);
    w0_1 = (w0_0);
    FPUL_ = ((v0_2 - v0_4));
    if (((*(signed char *)((v0_1 + 0x2))) != v0_7)) goto L_C119204;
    { struct mv4 { int w[4]; }; *(struct mv4 *)(((*(int *)((((0xC4 + v0_1) + v0_5) + 0x0))) + 0x14)) = *(struct mv4 *)(0xC2A0CA0); }
    L_C119224:;
    v0_4 = ((v0_4 + 0x1));
    goto L_C119226;
    L_C119204:;
    { struct mv4 { int w[4]; }; *(struct mv4 *)(((*(int *)((((0xC4 + v0_1) + v0_5) + 0x0))) + 0x14)) = *(struct mv4 *)((*(int *)(((int)stk + 16)))); }
    goto L_C119224;
    L_C11921A:;
    *(unsigned char *)(((*(int *)((((0xC4 + v0_1) + v0_5) + 0x0))) + 0x0)) = v0_3;
    goto L_C119224;
    L_C119136:;
    FUN_0c118ee4(v0_1, R5);
    goto L_C11913A;
    L_C119116:;
    R5 = ((*(int *)((v0_5 + 0x0))));
    goto L_C119136;
    L_C119112:;
    R5 = ((*(int *)((v0_4 + 0x0))));
    goto L_C119136;
    L_C119070:;
    if (((int)(*(signed char *)((v0_1 + 0x2))) >= (int)0x5)) goto L_C11908A;
    if (!(((int)(((*(short *)((v0_0 + 0x8))) - (*(short *)((v0_0 + 0xC)))) + (*(signed char *)((v0_1 + 0x2)))) < (int)(*(short *)((v0_0 + 0xE)))))) goto L_C11908A;
    (((struct o14_uchar *)(v0_1))->v) = ((*(signed char *)((v0_1 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(v0_1))->v) = v0_2;
    (((struct oAC_ushort *)(v0_1))->v) = 0x1F;
    (((struct oA9_uchar *)(v0_1))->v) = 0x21;
    v0_6 = (0xA9);
    goto L_C1190A8;
    L_C11908A:;
    (((struct o14_uchar *)(v0_1))->v) = v0_7;
    v0_6 = (0x14);
    goto L_C119250;
}

int FUN_0c1507f4(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register float u0;
    register float u1;
    register float u2;
    register float u3;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                return FUN_0c03f346(a4, a5, a6, a7);
            }
            if (t0 == 3) {
                return FUN_0c03f346(a4, a5, a6, a7);
            }
            return t0;
        }
        t0 = a4;
        t1 = 0x0;
        t2 = 0x0;
        for (;;) {
            if ((int)t2 >= (int)((((struct oC0_int *)(a4))->v))) {
                break;
            }
            t3 = t2;
            t3 = (t3 << 2);
            t3 = (t3 + (0xC4 + a4));
            t3 = (*(int *)((t3 + 0x0)));
            t4 = (*(signed char *)((t3 + 0x0)));
            if (t4 != 0) {
                t1 = (t1 + 0x1);
                t0 = 0x90;
                t0 = (t0 + t3);
                nlAddVector3op(t0, (0x90 + t3), (0x9C + t3));
                t0 = t3;
                t0 = (t0 + 0x6C);
                nlAddVector3op(t0, (t3 + 0x6C), (0x90 + t3));
                t4 = (*(signed char *)(((((0x41C + a4) + 0x8) + t2) + 0x0)));
                t4 = (t4 - 1);
                *(unsigned char *)(((((0x41C + a4) + 0x8) + t2) + 0x0)) = t4;
                t4 = (signed char)t4;
                if (t4 == 0) {
                    t5 = (0x41C + a4);
                    t5 = (t5 + 0x8);
                    t4 = 0xC4B40CC;
                    t5 = (t5 + t2);
                    *(unsigned char *)((t5 + 0x0)) = 0x4;
                    t0 = t3;
                    FUN_0c037498(t0, (*(signed char *)((((0x41C + a4) + t2) + 0x0))), 0x7, (*(int *)((t4 + 0x0))));
                    t4 = (0x41C + a4);
                    t4 = (t4 + t2);
                    t6 = *(signed char *)((t4 + 0x0));
                    *(unsigned char *)((t4 + 0x0)) = (t6 + 0x1);
                    t4 = 0xA;
                    if ((int)(signed char)(t6 + 0x1) >= (int)t4) {
                        *(unsigned char *)((t3 + 0x0)) = 0x0;
                    }
                }
                t4 = (0x41C + a4);
                t4 = (t4 + t2);
                t6 = *(signed char *)((t4 + 0x0));
                t4 = 0x5;
                if ((int)t6 >= (int)t4) {
                    t5 = (0x41C + a4);
                    t5 = (t5 + t2);
                    u0 = (float)(*(signed char *)((t5 + 0x0)));
                    u1 = (float)(*(signed char *)(((((0x41C + a4) + 0x8) + t2) + 0x0)));
                    u0 = (-u0);
                    u0 = (u0 + 15.0f);
                    u2 = u1;
                    u2 = u2 + 4.0f * u0;
                    u1 = u2;
                    u0 = (*(float *)0xC150A4C);
                    u1 = (u1 / u0);
                    (((struct o14_float *)(t3))->v) = u1;
                    t4 = t5;
                    u2 = u1;
                    u3 = u0;
                }
                u1 = u2;
                u0 = u3;
                t5 = t4;
                u2 = ((((struct o10_float *)((0x41C + a4)))->v));
                u0 = (float)(*(signed char *)((((0x41C + a4) + t2) + 0x0)));
                u1 = (float)(*(signed char *)(((((0x41C + a4) + 0x8) + t2) + 0x0)));
                u0 = (u0 * 4.0f);
                u0 = (u0 - u1);
                u0 = (u0 + 4.0f);
                u0 = (u0 / 64.0f);
                u2 = (u2 + u0);
                u2 = (u2 * 0.800000012f);
                (((struct o8C_float *)(t3))->v) = u2;
                (((struct o88_float *)(t3))->v) = u2;
                (((struct o84_float *)(t3))->v) = u2;
            } else {
                t3 = t0;
            }
            t2 = (t2 + 0x1);
            t0 = t3;
        }
        t0 = 0xC0;
        if (t1 == 0) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t0 = 0x14;
        }
        return t0;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    t0 = *(signed char *)0xC542237;
    t1 = *(signed char *)((((((((t0 << 1) + t0) << 2) << 1) + 0xC203288) + (((*(signed char *)0xC54223C) << 2) << 1)) + (*(short *)((a4 + 0x1C)))));
    t0 = 0xC203258;
    t2 = 0xC203288;
    t3 = 0x0;
    t4 = a6;
    for (;;) {
        if ((int)t3 >= (int)((((struct oC0_int *)(a4))->v))) {
            break;
        }
        t2 = (0x41C + a4);
        t2 = (t2 + t3);
        *(unsigned char *)((t2 + 0x0)) = 0x1;
        t4 = t3;
        t2 = 0xC4;
        t4 = (t4 << 2);
        t2 = (t2 + a4);
        t4 = (t4 + t2);
        t2 = 0xC187798;
        *(unsigned char *)(((((0x41C + a4) + 0x8) + t3) + 0x0)) = 0x1;
        t4 = (*(int *)((t4 + 0x0)));
        t0 = t4;
        t0 = (t0 + 0x18);
        *(unsigned char *)((t4 + 0x0)) = 0x1;
        (((struct o14_float *)(t4))->v) = 1.0f;
        { struct mv3 { int w[3]; }; *(struct mv3 *)(t0) = *(struct mv3 *)(((((t1 << 1) + t1) << 2) + 0xC203258)); }
        t3 = (t3 + 0x1);
    }
    return 0xC0;
}
