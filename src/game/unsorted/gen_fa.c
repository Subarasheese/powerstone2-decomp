/* Straight-line functions with calls and guards (batch gen_fa): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
struct o0_float { float v; };
struct o0_int { int v; };
struct o10_float { char p[0x10]; float v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12C_ushort { char p[0x12C]; unsigned short v; };
struct o135_uchar { char p[0x135]; unsigned char v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o18_uchar { char p[0x18]; unsigned char v; };
struct o1B_uchar { char p[0x1B]; unsigned char v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o378C_float { char p[0x378C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o41C_int { char p[0x41C]; int v; };
struct o41C_uchar { char p[0x41C]; unsigned char v; };
struct o41C_uint { char p[0x41C]; unsigned int v; };
struct o41D_uchar { char p[0x41D]; unsigned char v; };
struct o420_ushort { char p[0x420]; unsigned short v; };
struct o424_uchar { char p[0x424]; unsigned char v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o70_float { char p[0x70]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oD0_int { char p[0xD0]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c037498(int, int, int, int);
int FUN_0c03f346(int);
int FUN_0c03f444(int, int, int);
int FUN_0c060c80(int, int, int);
int FUN_0c0612ee(int);
int FUN_0c06130a(int, int, int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c07e2f4(int, int);
int FUN_0c07e3ae(int, int);
int FUN_0c0c212c(int);
int FUN_0c0c25c4(int);
int FUN_0c0c2aa2(int, int);
int FUN_0c0c2ab6(int, int);
int FUN_0c0cb6a4(int);
int FUN_0c0cb776(int);
int FUN_0c0d01f2(int);
int FUN_0c12fa44(int, int, int, int, float);
int FUN_0c1614c8(int, int);
int FUN_0c163670(int, int, int);
float math_cos_angle16(int);
float math_interval_overlap(Stk3, float, float, float, float, float, float, float);
float math_sin_angle16(int);
int nlCalcPoint(int, int);
int nlRand(void);
int nlRotateAX(int);
int nlRotateAY(int);
int nlUnitMatrix(void);
int nlVoidUnitVector(int);
int thunk_FUN_0c058310(int, int);
int FUN_0c12fcf4(int a4, int a5, int a6);
int FUN_0c1636ae(int a4, int a5, int a6);
int FUN_0c13d4ac(int a4, int a5, int a6);
int FUN_0c122d34(int a4);
int FUN_0c0630cc(int a4, int a5, int a6, float f4, float f5, float f6, float f7, float f8, float f9, float f10);
int FUN_0c0cbdbc(int a4, int a5, int a6, int a7, int a8);
int FUN_0c0caaf0(int a4, int a5, int a6, int a7, int a8);

int FUN_0c12fcf4(int a4, int a5, int a6)
{
    int stk[6];
    register int t2;
    register int t3;
    register int t39;
    register float u13;
    register float u20;
    register int t23;
    register int t28;
    int t26;

    *(unsigned char *)(((int)stk + 16)) = a5;
    *(unsigned char *)(((int)stk + 20)) = a6;
    t2 = FUN_0c037320(0x2, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
    t3 = FUN_0c03f444(0x1, 0x0, t2);
    t39 = t3;
    if (t3 != 0) {
        FUN_0c03733c(t3, 0x2, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
        *(unsigned char *)((t3 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned char *)((t3 + 0x2)) = (*(signed char *)(((int)stk + 16)));
        (((struct oA8_uchar *)(t3))->v) = 0x1;
        (((struct oAC_ushort *)(t3))->v) = 0x5;
        (((struct oA9_uchar *)(t3))->v) = 0x21;
        (((struct o14_uchar *)(t3))->v) = 0x0;
        (((struct o15_uchar *)(t3))->v) = 0x0;
        *(unsigned short *)((t3 + 0x1C)) = 0x0;
        *(unsigned short *)((t3 + 0x1E)) = 0x0;
        (((struct o20_ushort *)(t3))->v) = 0x12C;
        *(unsigned int *)((t3 + 0x4)) = 0xC12FB0A;
        *(unsigned int *)((t3 + 0x10)) = a4;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t3 + 0x28)) = *(struct mv3 *)((a4 + 0x28)); }
        *(int *)((int)stk + 12) = (t3 + 0x28);
        u13 = ((((struct o28_float *)(t3))->v));
        u13 = u13 + (math_sin_angle16((*(int *)((a4 + 0x38))))) * ((((struct o0_float *)0xC2A1338)->v));
        (((struct o28_float *)(t3))->v) = u13;
        (((struct o2C_float *)(t3))->v) = (((((struct o2C_float *)(t3))->v)) + ((((struct o4_float *)0xC2A1338)->v)));
        *(int *)((int)stk + 12) = (t3 + 0x30);
        u20 = ((((struct o30_float *)(t3))->v));
        u20 = u20 + (math_cos_angle16((*(int *)((a4 + 0x38))))) * ((((struct o8_float *)0xC2A1338)->v));
        (((struct o30_float *)(t3))->v) = u20;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t3 + 0x34)) = *(struct mv3 *)((a4 + 0x34)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t3 + 0x40)) = *(struct mv3 *)(0xC2A1344); }
        FUN_0c12fa44((t3 + 0x4C), (a4 + 0x28), (0x380C + a4), (*(int *)((a4 + 0x38))), 30.0f);
        *(int *)((int)stk + 12) = 0xF0;
        *(int *)((int)stk + 8) = 0x0;
        t23 = *(signed char *)((t3 + 0x1));
        *(int *)((int)stk + 4) = (~((int)0x1 << (int)t23));
        *(int *)((int)stk + 0) = 0x100;
        FUN_0c064d24(t3, 0x1, 0x32, 0x0, 0x100, (~((int)0x1 << (int)t23)), 0x0, 0xF0);
        t28 = 0x61;
        if (((*(signed char *)(((int)stk + 20))) == 1) && (t26 = *(signed char *)(((int)stk + 16)), t26 == 2)) {
            t28 = 0x60;
        }
        FUN_0c07e2f4(t3, t28);
        *(unsigned char *)((((((struct oC4_int *)(t3))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(t3))->v)) + 0x6)) = 0xB;
        (((struct o80_uint *)(((((struct oC4_int *)(t3))->v))))->v) = 0x4000;
        *(unsigned char *)((((((struct oC8_int *)(t3))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC8_int *)(t3))->v)) + 0x6)) = 0x21B;
        (((struct o18_float *)(((((struct oC8_int *)(t3))->v))))->v) = 0.5f;
        (((struct o1C_float *)(((((struct oC8_int *)(t3))->v))))->v) = 0.5f;
        (((struct o20_float *)(((((struct oC8_int *)(t3))->v))))->v) = 0.5f;
        (((struct o80_uint *)(((((struct oC8_int *)(t3))->v))))->v) = 0x4000;
        t39 = 0x80;
    }
    return t39;
}

int FUN_0c1636ae(int a4, int a5, int a6)
{
    int stk[7];
    register int t1;
    register int t49;
    register int t2;
    register int t7;
    register int t8;
    int t12;
    register int t13;
    register int t27;

    *(unsigned int *)(((int)stk + 24)) = a4;
    *(unsigned char *)(((int)stk + 20)) = a5;
    *(unsigned int *)(((int)stk + 16)) = a6;
    t1 = FUN_0c037320(0x18, (*(int *)0xC4B40CC));
    t49 = t1;
    if ((int)t1 < 0) {
    } else {
        t2 = FUN_0c03f444(0x1, 0x0, 0x1);
        t49 = t2;
        if (t2 == 0) {
        } else {
            FUN_0c037498(((((struct oC4_int *)(t2))->v)), 0x0, 0x18, (*(int *)0xC4B40CC));
            *(unsigned char *)((t2 + 0x1)) = (*(int *)(((int)stk + 16)));
            (((struct oA8_uchar *)(t2))->v) = 0x1;
            (((struct oAC_ushort *)(t2))->v) = 0x3F;
            (((struct oA9_uchar *)(t2))->v) = 0x21;
            *(unsigned short *)((t2 + 0x1C)) = 0x0;
            t7 = nlRand();
            t8 = ((~(((~t7) + 0x1) & 0x7)) + 0x1);
            if ((int)t7 >= 0) {
                t8 = (t7 & 0x7);
            }
            *(unsigned short *)((t2 + 0x1E)) = t8;
            (((struct o20_ushort *)(t2))->v) = t1;
            (((struct o22_ushort *)(t2))->v) = 0x0;
            *(unsigned int *)((t2 + 0x4)) = 0xC1638B4;
            *(unsigned char *)((t2 + 0x2)) = (*(signed char *)(((int)stk + 20)));
            FUN_0c163670(t2, 0x2, 0x0);
            t12 = *(signed char *)(((int)stk + 20));
            if ((t12 == 0) || (t12 == 3)) {
                *(int *)((int)stk + 12) = 0x1F0;
                *(int *)((int)stk + 8) = 0x0;
                t13 = *(int *)(((int)stk + 16));
                *(int *)((int)stk + 4) = (~((int)0x1 << (int)t13));
                *(int *)((int)stk + 0) = 0x100;
                FUN_0c064d24(t2, 0x3, 0x3C, 0x0, 0x100, (~((int)0x1 << (int)t13)), 0x0, 0x1F0);
                FUN_0c07e3ae(t2, (*(signed char *)0xC273B02));
                (((struct o1B_uchar *)(t2))->v) = 0x0;
                if (t12 != 3) {
                    FUN_0c07e3ae(t2, (*(signed char *)0xC273B03));
                    (((struct o12A_ushort *)(t2))->v) = 0x0;
                    (((struct o1B_uchar *)(t2))->v) = 0xF;
                }
            }
            (((struct o12C_ushort *)(t2))->v) = 0x0;
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t2 + 0x28)) = *(struct mv3 *)((*(int *)(((int)stk + 24)))); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t2 + 0x34)) = *(struct mv3 *)(0xC2A3018); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t2 + 0x4C)) = *(struct mv3 *)(0xC2A3000); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t2 + 0x58)) = *(struct mv3 *)(0xC2A3024); }
            (((struct o48_float *)(t2))->v) = 0.100000001f;
            (((struct o44_float *)(t2))->v) = 0.100000001f;
            (((struct o40_float *)(t2))->v) = 0.100000001f;
            t27 = (((struct oC4_int *)(t2))->v);
            *(unsigned char *)((t27 + 0x0)) = 0x1;
            *(unsigned short *)((t27 + 0x6)) = 0x231;
            (((struct o18_float *)(t27))->v) = 1.0f;
            (((struct o1C_float *)(t27))->v) = 1.0f;
            (((struct o20_float *)(t27))->v) = 1.0f;
            if (t12 != 0) {
                if ((t12 != 1) && (t12 != 2)) {
                    t49 = t12;
                    if (t12 != 3) {
                    } else {
                        (((struct o84_float *)(t27))->v) = 1.0f;
                        (((struct o88_float *)(t27))->v) = 1.5f;
                        t49 = 0x88;
                    }
                } else {
                    (((struct o84_float *)(t27))->v) = 0.5f;
                    (((struct o88_float *)(t27))->v) = 0.5f;
                    t49 = 0x88;
                }
            } else {
                (((struct o84_float *)(t27))->v) = 0.75f;
                (((struct o88_float *)(t27))->v) = 1.0f;
                t49 = 0x88;
            }
        }
    }
    return t49;
}

int FUN_0c13d4ac(int a4, int a5, int a6)
{
    int stk[9];
    register int t2;
    register int t3;
    register int t52;
    register int t4;
    register int t9;
    register int t19;
    register int t32;
    register int t36;
    register int t40;

    *(unsigned char *)(((int)stk + 16)) = a5;
    *(unsigned int *)(((int)stk + 20)) = a6;
    t2 = FUN_0c037320(0xA, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
    t3 = FUN_0c03f444(0x1, 0x0, t2);
    t52 = t3;
    if (t3 == 0) {
    } else {
        if ((int)t2 > 0) {
            t4 = 0x0;
            for (;;) {
                FUN_0c037498((*(int *)((((0xC4 + t3) + (t4 << 2)) + 0x0))), t4, 0xA, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
                t9 = (t4 << 2);
                t4 = (t4 + 0x1);
                *(unsigned char *)(((*(int *)((((0xC4 + t3) + t9) + 0x0))) + 0x0)) = 0x1;
                *(unsigned short *)(((*(int *)(((t9 + (0xC4 + t3)) + 0x0))) + 0x6)) = 0xF;
                if ((int)t4 >= (int)t2) {
                    break;
                }
            }
        }
        *(unsigned char *)((t3 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned char *)((t3 + 0x2)) = (*(signed char *)(((int)stk + 16)));
        *(unsigned int *)((t3 + 0x4)) = 0xC13D28A;
        *(unsigned int *)((t3 + 0x10)) = a4;
        (((struct o48_float *)(t3))->v) = 1.0f;
        (((struct o44_float *)(t3))->v) = 1.0f;
        (((struct o40_float *)(t3))->v) = 1.0f;
        (((struct oA8_uchar *)(t3))->v) = 0x1;
        (((struct oAC_ushort *)(t3))->v) = 0x1F;
        (((struct oA9_uchar *)(t3))->v) = 0x21;
        *(int *)((int)stk + 12) = 0xF0;
        *(int *)((int)stk + 8) = 0x0;
        t19 = *(signed char *)((t3 + 0x1));
        *(int *)((int)stk + 4) = (~((int)0x1 << (int)t19));
        *(int *)((int)stk + 0) = 0x100;
        FUN_0c064d24(t3, 0x1, 0x31, 0x0, 0x100, (~((int)0x1 << (int)t19)), 0x0, 0xF0);
        FUN_0c07e2f4(t3, 0x61);
        (((struct o41C_uint *)(t3))->v) = (*(int *)(((int)stk + 20)));
        if ((*(signed char *)((t3 + 0x2))) == 0) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t3 + 0x28)) = *(struct mv3 *)((a4 + 0x28)); }
        } else {
            thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((t3 + 0x1))) * (short)0x3938) + 0xC53256C))) + 0x28), (t3 + 0x28));
        }
        t32 = 0x38E3;
        if ((*(signed char *)((t3 + 0x2))) != 0) {
            t32 = 0x2000;
        }
        *(unsigned int *)((t3 + 0x34)) = t32;
        *(unsigned int *)((t3 + 0x38)) = (*(int *)((a4 + 0x38)));
        nlUnitMatrix();
        t36 = (((struct o41C_int *)(t3))->v);
        nlRotateAY((*(int *)(((((t36 << 1) + t36) << 2) + 0xC202140))));
        t40 = (((struct o41C_int *)(t3))->v);
        nlRotateAX((*(int *)(((((t40 << 1) + t40) << 2) + 0xC20213C))));
        nlCalcPoint(0xC2A216C, (((int)stk + 16) + 0x8));
        nlUnitMatrix();
        nlRotateAY((*(int *)((t3 + 0x38))));
        nlRotateAX((*(int *)((t3 + 0x34))));
        nlCalcPoint((((int)stk + 16) + 0x8), (t3 + 0x4C));
        *(unsigned char *)((((((struct oCC_int *)(t3))->v)) + 0x0)) = 0x0;
        t52 = 0xCC;
    }
    return t52;
}


int FUN_0c0630cc(int a4, int a5, int a6, float f4, float f5, float f6, float f7, float f8, float f9, float f10)
{
    int stk[6];
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u6;
    register float u7;
    register float u8;
    register float u9;
    register float u11;
    register float u13;
    register float u14;
    register float u15;
    register float u16;
    register int t149;
    register int t21;
    register float u60;
    register float u97;
    register float u19;
    float u20;
    register float u61;
    register float u62;
    float u98;
    register float u111;
    register float u117;
    register float u128;

    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)(0xC1C4B3C); }
    u0 = (((struct o8_float *)(a4))->v);
    u1 = (((struct o8_float *)(a6))->v);
    u2 = (((struct oC_float *)((a6 + 0x8)))->v);
    u3 = (((struct oC_float *)((a4 + 0x8)))->v);
    u4 = (u0 - u1);
    if (0.0f > (u0 - u1)) {
        u4 = ((-u0) + u1);
    }
    (((struct oC_float *)(((int)stk + 0)))->v) = ((u3 + u2) - u4);
    u6 = (((struct oC_float *)((a6 + 0x8)))->v);
    u7 = (((struct o14_float *)((a4 + 0x8)))->v);
    u8 = (((struct o8_float *)((a4 + 0x8)))->v);
    u9 = (((struct o8_float *)((a6 + 0x8)))->v);
    u11 = (u8 - u9);
    if (0.0f > (u8 - u9)) {
        u11 = ((-u8) + u9);
    }
    (((struct o8_float *)((((int)stk + 0) + 0xC)))->v) = ((u7 + u6) - u11);
    u13 = (((struct o4_float *)((a6 + 0x8)))->v);
    u14 = (((struct o10_float *)((a6 + 0x8)))->v);
    u15 = (((struct o4_float *)((a4 + 0x8)))->v);
    u16 = (((struct o10_float *)((a4 + 0x8)))->v);
    (((struct o4_float *)((((int)stk + 0) + 0xC)))->v) = (math_interval_overlap(*(Stk3 *)(((int)stk + 0)), (u15 + u16), (u15 - u16), (u13 + u14), (u13 - u14), f8, f9, f10));
    t149 = 0x0;
    if ((((((struct oC_float *)(((int)stk + 0)))->v)) > 0.0f) && ((u19 = (((struct o8_float *)((((int)stk + 0) + 0xC)))->v), u19 > 0.0f) && (u20 = (((struct o4_float *)((((int)stk + 0) + 0xC)))->v), u20 > 0.0f))) {
        t21 = FUN_0c0612ee(a5);
        if (t21 != 0) {
            (((struct o135_uchar *)(a5))->v) = (*(signed char *)((a4 + 0x4)));
            t149 = 0x2;
        } else {
            u60 = (((struct o4_float *)((((int)stk + 0) + 0xC)))->v);
            if ((u60 > 9.0f) && ((u61 = (((struct oC_float *)(((int)stk + 0)))->v), u60 > u61) || (u62 = (((struct o8_float *)((((int)stk + 0) + 0xC)))->v), u60 > u62))) {
                u97 = (((struct oC_float *)(((int)stk + 0)))->v);
                if (!(u97 > u60) && (u98 = (((struct o8_float *)((((int)stk + 0) + 0xC)))->v), !(u97 > u98))) {
                    if (((((struct o8_float *)(a4))->v)) > ((((struct o8_float *)(a6))->v))) {
                        u111 = (-(*(float *)(((int)stk + 12))));
                    } else {
                        u111 = (*(float *)(((int)stk + 12)));
                    }
                    *(float *)(((int)stk + 0)) = u111;
                } else {
                    if (((((struct o8_float *)((a4 + 0x8)))->v)) > ((((struct o8_float *)((a6 + 0x8)))->v))) {
                        u117 = (-(*(float *)(((int)stk + 20))));
                    } else {
                        u117 = (*(float *)(((int)stk + 20)));
                    }
                    *(float *)(((int)stk + 8)) = u117;
                }
                FUN_0c060c80(a5, ((int)stk + 0), a6);
            } else {
                if (((((struct o4_float *)((a4 + 0x8)))->v)) > ((((struct o4_float *)((a6 + 0x8)))->v))) {
                    u128 = (-(*(float *)(((int)stk + 16))));
                } else {
                    u128 = (*(float *)(((int)stk + 16)));
                }
                *(float *)(((int)stk + 4)) = u128;
                FUN_0c060c80(a5, ((int)stk + 0), a6);
                if (((((struct o4_float *)((a6 + 0x8)))->v)) > ((((struct o4_float *)((a4 + 0x8)))->v))) {
                    (((struct o135_uchar *)(a5))->v) = (*(signed char *)((a4 + 0x4)));
                    FUN_0c06130a(a5, a6, (a6 + 0x8), (a4 + 0x8));
                }
            }
            t149 = 0x1;
        }
    }
    return t149;
}

int FUN_0c0cbdbc(int a4, int a5, int a6, int a7, int a8)
{
    int stk[6];
    register int t0;
    register int t2;
    register int t3;
    register int t4;
    register int t7;
    register int t9;
    register int t11;
    register int t60;

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a6;
    *(unsigned int *)(((int)stk + 8)) = a7;
    t0 = *(int *)(((int)stk + 0));
    *(unsigned int *)(((int)stk + 16)) = (t0 * 0x34);
    (((struct o14_uchar *)(((int)stk + 0)))->v) = (*(signed char *)((((t0 * 0x34) + 0xC2738B8) + 0x1)));
    t2 = *(signed char *)(((int)stk + 20));
    t3 = *(int *)0xC4B40CC;
    *(unsigned int *)(((int)stk + 12)) = t2;
    t4 = FUN_0c037320(t2, t3);
    if ((int)t4 <= 0) {
        FUN_0c0d01f2(a5);
        t60 = 0x0;
    } else {
        t7 = FUN_0c037320(0x1C, (*(int *)0xC4B40CC));
        if ((int)t7 <= 0) {
            FUN_0c0d01f2(a5);
            t60 = 0x0;
        } else {
            t9 = a5;
            if ((int)a5 >= (int)0x7) {
                t9 = 0x0;
            }
            t11 = FUN_0c03f444(0x9, 0x0, 0x4);
            if (t11 == 0) {
                FUN_0c0d01f2(t9);
                t60 = 0x0;
            } else {
                FUN_0c03744a(((((struct oC4_int *)(t11))->v)), t9, (*(int *)(((int)stk + 12))), (*(int *)0xC4B40CC));
                FUN_0c03744a(((((struct oC8_int *)(t11))->v)), 0x0, 0x1C, (*(int *)0xC4B40CC));
                FUN_0c03744a(((((struct oCC_int *)(t11))->v)), 0x1, 0x1C, (*(int *)0xC4B40CC));
                FUN_0c03744a(((((struct oD0_int *)(t11))->v)), 0x2, 0x1C, (*(int *)0xC4B40CC));
                *(unsigned int *)((t11 + 0x4)) = 0xC0CBCB0;
                (((struct oAC_ushort *)(t11))->v) = 0x1F;
                (((struct oA9_uchar *)(t11))->v) = 0x40;
                FUN_0c0cb776(t11);
                (((struct o41D_uchar *)(t11))->v) = 0x0;
                (((struct o41C_uchar *)(t11))->v) = (*(int *)(((int)stk + 0)));
                (((struct o424_uchar *)(t11))->v) = t9;
                (((struct o1B_uchar *)(t11))->v) = (*(int *)(((int)stk + 4)));
                FUN_0c0c212c(t11);
                FUN_0c0c2ab6(t11, (*(signed char *)(((((unsigned short)(unsigned char)(*(signed char *)((t11 + 0x41C))) * (unsigned short)0x34) + 0xC2738B8) + 0x12))));
                FUN_0c0cb6a4(t11);
                (((struct o420_ushort *)(t11))->v) = (*(short *)(((0xC2738B8 + (*(int *)(((int)stk + 16)))) + 0x1A)));
                { struct mv3 { int w[3]; }; *(struct mv3 *)((t11 + 0x28)) = *(struct mv3 *)((*(int *)(((int)stk + 8)))); }
                *(unsigned short *)((((((struct oC4_int *)(t11))->v)) + 0x6)) = 0x15;
                *(unsigned short *)((((((struct oC8_int *)(t11))->v)) + 0x6)) = 0x7;
                *(unsigned short *)((((((struct oCC_int *)(t11))->v)) + 0x6)) = 0x20;
                *(unsigned short *)((((((struct oD0_int *)(t11))->v)) + 0x6)) = 0x11;
                (((struct o70_float *)(((((struct oD0_int *)(t11))->v))))->v) = -50.0f;
                *(unsigned char *)((((((struct oC4_int *)(t11))->v)) + 0x0)) = 0x1;
                *(unsigned char *)((((((struct oC8_int *)(t11))->v)) + 0x0)) = 0x0;
                *(unsigned char *)((((((struct oCC_int *)(t11))->v)) + 0x0)) = 0x0;
                *(unsigned char *)((((((struct oD0_int *)(t11))->v)) + 0x0)) = 0x0;
                FUN_0c0c2aa2(t11, a8);
                t60 = t11;
            }
        }
    }
    return t60;
}

int FUN_0c0caaf0(int a4, int a5, int a6, int a7, int a8)
{
    int stk[7];
    register int t0;
    register int t2;
    register int t3;
    register int t4;
    register int t57;
    register int t6;
    register int t7;
    register int t27;

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 8)) = a5;
    *(unsigned int *)(((int)stk + 4)) = a6;
    *(unsigned int *)(((int)stk + 12)) = a7;
    t0 = *(int *)(((int)stk + 0));
    *(unsigned int *)(((int)stk + 20)) = (t0 * 0x34);
    (((struct o18_uchar *)(((int)stk + 0)))->v) = (*(signed char *)((((t0 * 0x34) + 0xC2738B8) + 0x1)));
    t2 = *(signed char *)(((int)stk + 24));
    t3 = (((struct oC_int *)0xC4B40CC)->v);
    *(unsigned int *)(((int)stk + 16)) = t2;
    t4 = FUN_0c037320(t2, t3);
    t57 = 0x0;
    if ((int)t4 < 0) {
    } else {
        t6 = FUN_0c037320(0x27, ((((struct o0_int *)0xC4B40CC)->v)));
        t57 = 0x0;
        if ((int)t6 < 0) {
        } else {
            t7 = FUN_0c03f444(0x9, 0x0, (t4 + t6));
            t57 = 0x0;
            if (t7 == 0) {
            } else {
                FUN_0c03733c(t7, (*(int *)(((int)stk + 16))), ((((struct oC_int *)0xC4B40CC)->v)));
                FUN_0c03744a(((((struct oD0_int *)(t7))->v)), 0x0, 0x27, ((((struct o0_int *)0xC4B40CC)->v)));
                (((struct o68_uint *)((*(int *)(((0xC4 + t7) + 0xC)))))->v) = (((((struct oC4_int *)(t7))->v)) + 0x28);
                *(unsigned int *)((t7 + 0x4)) = 0xC0CA928;
                (((struct oAC_ushort *)(t7))->v) = 0x21F;
                (((struct oA9_uchar *)(t7))->v) = 0x40;
                FUN_0c0c25c4(t7);
                (((struct o41D_uchar *)(t7))->v) = 0x0;
                (((struct o41C_uchar *)(t7))->v) = (*(int *)(((int)stk + 0)));
                (((struct o424_uchar *)(t7))->v) = (*(int *)(((int)stk + 8)));
                (((struct o1B_uchar *)(t7))->v) = (*(int *)(((int)stk + 4)));
                FUN_0c0c2ab6(t7, (*(signed char *)(((((unsigned short)(unsigned char)(*(signed char *)((t7 + 0x41C))) * (unsigned short)0x34) + 0xC2738B8) + 0x12))));
                (((struct o12C_ushort *)(t7))->v) = 0x0;
                (((struct o420_ushort *)(t7))->v) = (*(short *)(((0xC2738B8 + (*(int *)(((int)stk + 20)))) + 0x1A)));
                FUN_0c0c212c(t7);
                { struct mv3 { int w[3]; }; *(struct mv3 *)((t7 + 0x28)) = *(struct mv3 *)((*(int *)(((int)stk + 12)))); }
                (((struct oB4_float *)(t7))->v) = 1.0f;
                (((struct oB8_float *)(t7))->v) = 1.0f;
                (((struct oBC_float *)(t7))->v) = 1.0f;
                t27 = *(signed char *)((t7 + 0x41C));
                if ((unsigned char)t27 != 8) {
                    if ((unsigned char)t27 != 9) {
                        if ((unsigned char)t27 != 10) {
                        } else {
                            (((struct o22_ushort *)(t7))->v) = 0x1E0;
                        }
                    } else {
                        (((struct o22_ushort *)(t7))->v) = 0x168;
                    }
                } else {
                    (((struct o22_ushort *)(t7))->v) = 0x12C;
                }
                *(unsigned char *)((((((struct oC8_int *)(t7))->v)) + 0x0)) = 0x1;
                *(unsigned char *)((((((struct oCC_int *)(t7))->v)) + 0x0)) = 0x0;
                *(unsigned char *)((((((struct oD0_int *)(t7))->v)) + 0x0)) = 0x0;
                FUN_0c0c2aa2(t7, a8);
                FUN_0c1614c8(t7, 0x0);
                t57 = t7;
            }
        }
    }
    return t57;
}
