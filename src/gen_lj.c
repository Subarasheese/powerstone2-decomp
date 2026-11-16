/* Straight-line functions with calls and guards (batch gen_lj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o64_uint { char p[0x64]; unsigned int v; };
struct o670_uint { char p[0x670]; unsigned int v; };
struct o674_uint { char p[0x674]; unsigned int v; };
struct o68_int { char p[0x68]; int v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o6C_int { char p[0x6C]; int v; };
struct o6C_uint { char p[0x6C]; unsigned int v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o90_float { char p[0x90]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB4_float { char p[0xB4]; float v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c037f40(int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c0e2390(int, int, int);
int FUN_0c17b4b0(int);
int FUN_0c17c130(int, int, int);
int FUN_0c18778c(void);
extern int FUN_0c187798();
int FUN_0c187a88(int, int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int math_vec3_sub_scaled(int, int, int, float);
int nlStoreMatrix(int);
int nlUnitMatrix(void);
float FUN_0c038362(int a4);
int FUN_0c15a104(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11);
int FUN_0c0de728(int a4, int a5, int a6, int a7);
int FUN_0c126220(int a4, int a5, int a6);
int FUN_0c128e32(int a4, int a5, int a6, int a7);

float FUN_0c038362(int a4)
{
    int stk[10];
    register int t0;
    register float u1;
    register float u4;
    register float u6;
    register float u7;
    register float u9;
    register float u14;
    register float u17;
    register float u19;
    register float u20;
    register float t28;
    register float u29;
    register float t31;
    register float u32;
    register float u34;
    register float u36;
    register float u37;
    register float u42;
    register float u44;
    register float u45;

    t0 = (((struct o118_int *)(a4))->v);
    u1 = (((struct o98_float *)(t0))->v);
    u4 = u1;
    if (!(u1 > 0.0f)) {
        u4 = ((((struct o90_float *)(t0))->v));
    }
    u6 = (((struct o94_float *)(t0))->v);
    u7 = (((struct o98_float *)(t0))->v);
    u9 = (((struct o90_float *)(t0))->v);
    *(unsigned int *)(((int)stk + 0)) = ((((struct o68_int *)(t0))->v));
    FUN_0c037f40((((int)stk + 0) + 0x1C), ((int)stk + 0));
    *(unsigned int *)(((int)stk + 0)) = ((((struct o6C_int *)(t0))->v));
    FUN_0c037f40((((int)stk + 0) + 0x10), ((int)stk + 0));
    math_vec3_sub_scaled((((int)stk + 0) + 0x4), (((int)stk + 0) + 0x10), (((int)stk + 0) + 0x1C), (((u7 - u6) + u9) / u4));
    u14 = (((struct o98_float *)(t0))->v);
    u17 = u14;
    if (!(u14 > 0.0f)) {
        u17 = ((((struct o90_float *)(t0))->v));
    }
    u19 = (((struct o94_float *)(t0))->v);
    u20 = (((struct o98_float *)(t0))->v);
    *(unsigned int *)(((int)stk + 0)) = ((((struct o68_int *)(t0))->v));
    FUN_0c037f40((((int)stk + 0) + 0x1C), ((int)stk + 0));
    *(unsigned int *)(((int)stk + 0)) = ((((struct o6C_int *)(t0))->v));
    FUN_0c037f40((((int)stk + 0) + 0x10), ((int)stk + 0));
    math_vec3_sub_scaled((((int)stk + 0) + 0x1C), (((int)stk + 0) + 0x10), (((int)stk + 0) + 0x1C), ((u20 - u19) / u17));
    FUN_0c0e2390((((int)stk + 0) + 0x1C), (((int)stk + 0) + 0x4), (((int)stk + 0) + 0x1C));
    t28 = math_sin_angle16((*(int *)((a4 + 0x38))));
    u29 = (((struct o40_float *)(a4))->v);
    t31 = math_cos_angle16((*(int *)((a4 + 0x38))));
    u32 = (((struct o40_float *)(a4))->v);
    u34 = (t28 * u29);
    u36 = (t31 * u32);
    u37 = (((((struct o24_float *)(((int)stk + 0)))->v)) * u34);
    u37 = u37 + u36 * (*(float *)(((int)stk + 28)));
    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + u37);
    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o20_float *)(((int)stk + 0)))->v)));
    u42 = (t28 * u29);
    u44 = (t31 * u32);
    u45 = (-(((((struct o1C_float *)(((int)stk + 0)))->v)) * u42));
    u45 = u45 + u44 * (*(float *)(((int)stk + 36)));
    (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + u45);
    return (t31 * u32);
}

int FUN_0c15a104(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11)
{
    int stk[4];
    register int t0;
    register int t29;
    register int t2;
    register int t9;
    register int t10;
    register int t20;
    register int t23;
    register int t22;

    *(unsigned char *)(((int)stk + 8)) = a4;
    *(unsigned int *)(((int)stk + 0)) = a5;
    *(unsigned int *)(((int)stk + 4)) = a6;
    *(unsigned int *)(((int)stk + 12)) = a7;
    t0 = FUN_0c03f444(0x5, 0x2, 0x1);
    t29 = 0x0;
    if (t0 != 0) {
        t2 = (((struct oC4_int *)(t0))->v);
        *(unsigned int *)((t2 + 0x8)) = (*(int *)(((int)stk + 4)));
        *(unsigned int *)((t2 + 0xC)) = 0x0;
        *(unsigned int *)((t2 + 0x10)) = 0x0;
        (((struct o68_uint *)(t2))->v) = (*(int *)(((int)stk + 0)));
        FUN_0c187a88((((0x90 + t2) + 0x4) & 0xFFFFFFF8), (*(int *)((t2 + 0x8))), 0x678);
        *(unsigned int *)((t2 + 0x8)) = (((0x90 + t2) + 0x4) & 0xFFFFFFF8);
        *(unsigned char *)((t2 + 0x0)) = 0x1;
        *(unsigned short *)((t2 + 0x6)) = 0x0;
        (((struct oA8_uchar *)(t0))->v) = 0x0;
        (((struct oAC_ushort *)(t0))->v) = 0x200;
        (((struct oA9_uchar *)(t0))->v) = 0x0;
        *(volatile int *)(((int)stk + 12));
        FUN_0c18778c();
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((int)stk + 8)));
        *(unsigned short *)((t0 + 0x1E)) = ((short)(a8 >> 0));
        (((struct o16_uchar *)(t0))->v) = ((signed char)(a9 >> 0));
        t9 = ((int (*)(void))(FUN_0c187798))();
        t10 = ((int (*)(void))(FUN_0c187798))();
        FUN_0c17b4b0(0x1);
        nlUnitMatrix();
        nlStoreMatrix((t2 + 0x28));
        nlStoreMatrix((t0 + 0x64));
        (((struct o64_uint *)((*(int *)((t2 + 0x8)))))->v) = 0x608;
        (((struct o6C_uint *)((*(int *)((t2 + 0x8)))))->v) = 0x30;
        (((struct o670_uint *)((*(int *)((t2 + 0x8)))))->v) = 0x0;
        (((struct o674_uint *)((*(int *)((t2 + 0x8)))))->v) = 0x30;
        *(volatile int *)((t2 + 0x8));
        t20 = ((int (*)(int))(FUN_0c187798))(0xC2035B4);
        *(volatile int *)((t2 + 0x8));
        t23 = ((int (*)(int))(FUN_0c187798))(t22);
        *(unsigned int *)(((*(int *)((t2 + 0x8))) + 0x3C)) = 0xFFFFFFFF;
        *(volatile int *)((t2 + 0x8));
        FUN_0c18778c();
        *(volatile int *)((t2 + 0x8));
        FUN_0c18778c();
        t29 = t0;
    }
    return t29;
}

int FUN_0c0de728(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = (((struct oC4_int *)(a4))->v);
    t1 = *(signed char *)((a4 + 0x14));
    if (t1 != 0) {
        if (t1 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        if (((*(short *)((a4 + 0x1C))) & 3) == 0) {
            *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
            if ((int)(*(short *)((a4 + 0x1E))) > (int)0x7) {
                *(unsigned short *)((a4 + 0x1E)) = 0x7;
            }
            FUN_0c03744a(t0, (*(short *)((a4 + 0x1E))), 0x9, (*(int *)0xC4B40CC));
        }
        (((struct o84_float *)(t0))->v) = (((((struct o84_float *)(t0))->v)) + 0.140000001f);
        u0 = (((struct o84_float *)(t0))->v);
        (((struct o8C_float *)(t0))->v) = u0;
        (((struct o88_float *)(t0))->v) = u0;
        t1 = *(signed char *)((a4 + 0x15));
        if (t1 != 0) {
            if (t1 != 1) {
                u0 = (((struct o18_float *)(t0))->v);
                (((struct o18_float *)(t0))->v) = (u0 - 0.0500000007f);
                (((struct o20_float *)(t0))->v) = (u0 - 0.0500000007f);
                (((struct o1C_float *)(t0))->v) = (u0 - 0.0500000007f);
                t1 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t1 + 0x1);
                if ((int)(short)(t1 + 0x1) >= (int)0xA) {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    *(unsigned short *)((a4 + 0x1C)) = 0x0;
                }
            } else {
                t1 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t1 + 0x1);
                if ((int)(short)(t1 + 0x1) >= (int)0xA) {
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    *(unsigned short *)((a4 + 0x1C)) = 0x0;
                }
            }
        } else {
            u0 = (((struct o18_float *)(t0))->v);
            (((struct o18_float *)(t0))->v) = (u0 + 0.0799999982f);
            (((struct o20_float *)(t0))->v) = (u0 + 0.0799999982f);
            (((struct o1C_float *)(t0))->v) = (u0 + 0.0799999982f);
            t1 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t1 + 0x1);
            if ((int)(short)(t1 + 0x1) < (int)0xA) {
            } else {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                *(unsigned short *)((a4 + 0x1C)) = 0x0;
            }
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        *(unsigned short *)((a4 + 0x1C)) = 0x0;
        *(unsigned short *)((a4 + 0x1E)) = 0x0;
        if (((*(short *)((a4 + 0x1C))) & 3) == 0) {
            *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
            if ((int)(*(short *)((a4 + 0x1E))) > (int)0x7) {
                *(unsigned short *)((a4 + 0x1E)) = 0x7;
            }
            FUN_0c03744a(t0, (*(short *)((a4 + 0x1E))), 0x9, (*(int *)0xC4B40CC));
        }
        (((struct o84_float *)(t0))->v) = (((((struct o84_float *)(t0))->v)) + 0.140000001f);
        u0 = (((struct o84_float *)(t0))->v);
        (((struct o8C_float *)(t0))->v) = u0;
        (((struct o88_float *)(t0))->v) = u0;
        t1 = *(signed char *)((a4 + 0x15));
        if (t1 != 0) {
            if (t1 != 1) {
                u0 = (((struct o18_float *)(t0))->v);
                (((struct o18_float *)(t0))->v) = (u0 - 0.0500000007f);
                (((struct o20_float *)(t0))->v) = (u0 - 0.0500000007f);
                (((struct o1C_float *)(t0))->v) = (u0 - 0.0500000007f);
                t1 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t1 + 0x1);
                if ((int)(short)(t1 + 0x1) >= (int)0xA) {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    *(unsigned short *)((a4 + 0x1C)) = 0x0;
                }
            } else {
                t1 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t1 + 0x1);
                if ((int)(short)(t1 + 0x1) >= (int)0xA) {
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    *(unsigned short *)((a4 + 0x1C)) = 0x0;
                }
            }
        } else {
            u0 = (((struct o18_float *)(t0))->v);
            (((struct o18_float *)(t0))->v) = (u0 + 0.0799999982f);
            (((struct o20_float *)(t0))->v) = (u0 + 0.0799999982f);
            (((struct o1C_float *)(t0))->v) = (u0 + 0.0799999982f);
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
            if ((int)(short)(t0 + 0x1) < (int)0xA) {
            } else {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                *(unsigned short *)((a4 + 0x1C)) = 0x0;
            }
        }
    }
    FUN_0c17c130((a4 + 0x4C), (a4 + 0x4C), (a4 + 0x58));
    return FUN_0c17c130((a4 + 0x28), (a4 + 0x28), (a4 + 0x4C));
}

int FUN_0c126220(int a4, int a5, int a6)
{

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R7;
    register int R10;
    register int R12;
    register int R13;
    register int R14;
    register float F3;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    v0_0 = a4;
    v0_2 = *(signed char *)((v0_0 + 0x14));
    v0_1 = (v0_2);
    if ((v0_2 == 0)) goto L_C126238;
    if ((v0_1 == 1)) goto L_C126246;
    if ((v0_1 != 2)) goto L_C126234;
    return FUN_0c03f346(v0_0, R5, a6, R7);
    L_C126234:;
    L_C126346:;
    return v0_1;
    L_C126246:;
    (((struct o48_float *)(v0_0))->v) = (((((struct o48_float *)(v0_0))->v)) + 0.100000001f);
    v0_2 = *(signed char *)((v0_0 + 0x15));
    v0_1 = (v0_2);
    R5 = (0x6);
    w0_0 = (0.100000001f);
    if ((v0_2 == 0)) goto L_C12626C;
    if ((v0_1 == 1)) goto L_C12627A;
    if ((v0_1 == 2)) goto L_C1262C8;
    if ((v0_1 == 3)) goto L_C1262EE;
    goto L_C126346;
    L_C1262EE:;
    (((struct oB4_float *)(v0_0))->v) = (((((struct oB4_float *)(v0_0))->v)) - 0.0500000007f);
    w0_1 = (((struct oB4_float *)(v0_0))->v);
    v0_1 = (0xB4);
    w0_2 = (w0_1);
    w0_2 = (0.0f);
    FPUL_ = (0x3D4CCCCD);
    if ((!(0.0f > w0_1))) goto L_C126306;
    *(float *)((v0_0 + v0_1)) = w0_2;
    L_C126306:;
    w0_1 = *(float *)((v0_0 + v0_1));
    *(float *)((v0_0 + (v0_1 + 0x8))) = w0_1;
    *(float *)((v0_0 + ((v0_1 + 0x8) - 4))) = w0_1;
    (((struct o40_float *)(v0_0))->v) = (((((struct o40_float *)(v0_0))->v)) - w0_0);
    v0_1 = (0x40);
    w0_1 = (0.200000003f);
    if ((!(0.200000003f > ((((struct o40_float *)(v0_0))->v))))) goto L_C126326;
    *(float *)((v0_0 + v0_1)) = w0_1;
    L_C126326:;
    w0_2 = (((struct o44_float *)(v0_0))->v);
    (((struct o44_float *)(v0_0))->v) = (w0_2 - w0_0);
    v0_1 = (0x44);
    if ((!(w0_1 > (w0_2 - w0_0)))) goto L_C126346;
    *(float *)((v0_0 + v0_1)) = w0_1;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    v0_1 = (0x14);
    goto L_C126346;
    L_C1262C8:;
    (((struct o40_float *)(v0_0))->v) = (((((struct o40_float *)(v0_0))->v)) - w0_0);
    (((struct o44_float *)(v0_0))->v) = (((((struct o44_float *)(v0_0))->v)) + w0_0);
    *(unsigned short *)((v0_0 + 0x1C)) = ((*(short *)((v0_0 + 0x1C))) - 1);
    v0_2 = *(short *)((v0_0 + 0x1C));
    v0_1 = (v0_2);
    if ((v0_2 != 0)) goto L_C126346;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    v0_1 = (0x15);
    goto L_C126346;
    L_C12627A:;
    (((struct o40_float *)(v0_0))->v) = (((((struct o40_float *)(v0_0))->v)) + w0_0);
    *(unsigned short *)((v0_0 + 0x1C)) = ((*(short *)((v0_0 + 0x1C))) - 1);
    v0_2 = *(short *)((v0_0 + 0x1C));
    v0_1 = (v0_2);
    if ((v0_2 != 0)) goto L_C126346;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    *(unsigned short *)((v0_0 + 0x1C)) = R5;
    v0_1 = (R5);
    goto L_C126346;
    L_C12626C:;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    *(unsigned short *)((v0_0 + 0x1C)) = R5;
    goto L_C12627A;
    L_C126238:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(v0_0))->v) = 0x1;
    goto L_C126246;
}

int FUN_0c128e32(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register float u0;

    if ((*(signed char *)((0x3715 + (*(int *)((a4 + 0x10)))))) != 26) {
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    return FUN_0c03f346(a4, a5, a6, a7);
                }
                t0 = *(short *)((a4 + 0x1E));
                *(unsigned short *)((a4 + 0x1E)) = (t0 - 1);
                if ((short)(t0 - 1) != 0) {
                    t0 = (((struct oC4_int *)(a4))->v);
                    (((struct o8C_float *)(t0))->v) = 0.0f;
                    (((struct o88_float *)(t0))->v) = 0.0f;
                    (((struct o84_float *)(t0))->v) = 0.0f;
                    t0 = (((struct oC4_int *)(a4))->v);
                    (((struct o20_float *)(t0))->v) = 1.0f;
                    (((struct o1C_float *)(t0))->v) = 1.0f;
                    (((struct o18_float *)(t0))->v) = 1.0f;
                    *(unsigned short *)((a4 + 0x1C)) = 0x14;
                    t0 = 0x2;
                } else {
                    t0 = ((*(signed char *)((a4 + 0x14))) + 0x1);
                }
                (((struct o14_uchar *)(a4))->v) = t0;
                return 0x14;
            }
            t0 = (((struct oC4_int *)(a4))->v);
            (((struct o7C_uint *)(t0))->v) = (((((struct o7C_int *)(t0))->v)) + 0x4FA);
            t0 = (((struct oC4_int *)(a4))->v);
            u0 = (((struct o8C_float *)(t0))->v);
            (((struct o8C_float *)(t0))->v) = (u0 + 0.0500000007f);
            (((struct o88_float *)(t0))->v) = (u0 + 0.0500000007f);
            (((struct o84_float *)(t0))->v) = (u0 + 0.0500000007f);
        }
    } else {
        *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x21F;
        t0 = (((struct oC4_int *)(a4))->v);
        (((struct o8C_float *)(t0))->v) = 0.0f;
        (((struct o88_float *)(t0))->v) = 0.0f;
        (((struct o84_float *)(t0))->v) = 0.0f;
        t0 = (((struct oC4_int *)(a4))->v);
        (((struct o20_float *)(t0))->v) = 1.0f;
        (((struct o1C_float *)(t0))->v) = 1.0f;
        (((struct o18_float *)(t0))->v) = 1.0f;
        *(unsigned short *)((a4 + 0x1C)) = 0x1;
        *(unsigned short *)((a4 + 0x1E)) = 0xA;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    t1 = (short)(t0 - 1);
    if ((short)(t0 - 1) == 0) {
        *(unsigned short *)((a4 + 0x1C)) = 0x14;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t1 = 0x14;
    }
    return t1;
}
