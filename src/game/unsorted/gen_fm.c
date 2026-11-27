/* Straight-line functions with calls and guards (batch gen_fm): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o131_uchar { char p[0x131]; unsigned char v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o26_uchar { char p[0x26]; unsigned char v; };
struct o26A0_int { char p[0x26A0]; int v; };
struct o26A4_int { char p[0x26A4]; int v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o3728_uchar { char p[0x3728]; unsigned char v; };
struct o372A_uchar { char p[0x372A]; unsigned char v; };
struct o374B_uchar { char p[0x374B]; unsigned char v; };
struct o3770_int { char p[0x3770]; int v; };
struct o3780_float { char p[0x3780]; float v; };
struct o378C_float { char p[0x378C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o41C_uchar { char p[0x41C]; unsigned char v; };
struct o41D_uchar { char p[0x41D]; unsigned char v; };
struct o44_float { char p[0x44]; float v; };
struct o445_uchar { char p[0x445]; unsigned char v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oD4_int { char p[0xD4]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03744a(int, int, int, int);
extern int FUN_0c037bf6();
int FUN_0c038362(int);
extern int FUN_0c03f346();
int FUN_0c03f444(int, int, int);
int FUN_0c0582de(int, int);
int FUN_0c059dae(int, int);
int FUN_0c07d1fc(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c085d0c(int, int, int, int);
int FUN_0c0b1c7e(int);
int FUN_0c0b1d20(int, int);
int FUN_0c0b2888(int, int, int, int);
int FUN_0c0c212c(int);
int FUN_0c0eb734(int);
int FUN_0c0eb758(int);
extern int FUN_0c0eb8ca();
int FUN_0c0eb9a2(int);
int FUN_0c1480bc(int, int);
int FUN_0c148196(int);
int FUN_0c148248(int);
int FUN_0c1482f2(int);
int FUN_0c14f238(int, int, int, int);
int FUN_0c152d18(int);
float FUN_0c17c450(int);
float math_cos_angle16(int);
float math_sin_angle16(int);
float math_vec2_cos_between(float, float, float, float);
int nlRand(void);
int nlSubVector3op(int, int, int);
int nlVoidUnitVector(int);
int thunk_FUN_0c058310(int, int);
int FUN_0c15d194(int a4, int a5);
int FUN_0c160dac(int a4);
int FUN_0c14831c(int a4, int a5, int a6, int a7, float f4);
int FUN_0c0b2064(int a4, float f4);
int FUN_0c15c1c0(int a4, int a5, int a6, int a7);
int FUN_0c09a738(int a4, int a5, int a6, int a7);
float FUN_0c0b2ac2(int a4, float f4);
int FUN_0c0ebc60(int a4, int a5, int a6, int a7, float f4);

int FUN_0c15d194(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t3;
    register int t4;
    register float u0;

    t0 = FUN_0c037320((*(int *)(((a5 << 2) + 0xC2A2B54))), (*(int *)0xC4B40D8));
    t1 = t0;
    if ((int)t0 < 0) {
    } else {
        t0 = FUN_0c03f444(0x5, 0x0, 0x2);
        t1 = t0;
        if (t0 == 0) {
        } else {
            *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
            *(unsigned char *)((t0 + 0x2)) = a5;
            *(unsigned int *)((t0 + 0x4)) = 0xC15D044;
            (((struct oA8_uchar *)(t0))->v) = 0x1;
            (((struct oAC_ushort *)(t0))->v) = 0xF;
            (((struct oA9_uchar *)(t0))->v) = 0x21;
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)((a4 + 0x28)); }
            u0 = (((struct o378C_float *)(a4))->v);
            (((struct o48_float *)(t0))->v) = u0;
            (((struct o44_float *)(t0))->v) = u0;
            (((struct o40_float *)(t0))->v) = u0;
            (((struct o54_float *)(t0))->v) = 0.0f;
            (((struct o50_float *)(t0))->v) = 0.0f;
            (((struct o4C_float *)(t0))->v) = 0.0f;
            *(unsigned short *)((t0 + 0x1C)) = 0x0;
            t3 = (((struct oC4_int *)(t0))->v);
            FUN_0c03744a(t3, 0x1, (*(int *)((((a5 << 2) + 0xC2A2B54) + 0x0))), (*(int *)0xC4B40D8));
            *(unsigned char *)((t3 + 0x0)) = 0x1;
            *(unsigned short *)((t3 + 0x6)) = 0xF;
            (((struct o8C_float *)(t3))->v) = 1.0f;
            (((struct o88_float *)(t3))->v) = 1.0f;
            (((struct o84_float *)(t3))->v) = 1.0f;
            t3 = (((struct oC8_int *)(t0))->v);
            FUN_0c03744a(t3, 0x2, (*(int *)((((a5 << 2) + 0xC2A2B54) + 0x0))), (*(int *)0xC4B40D8));
            *(unsigned char *)((t3 + 0x0)) = 0x1;
            *(unsigned short *)((t3 + 0x6)) = 0x20F;
            (((struct o8C_float *)(t3))->v) = 1.0f;
            (((struct o88_float *)(t3))->v) = 1.0f;
            (((struct o84_float *)(t3))->v) = 1.0f;
            t4 = *(signed char *)((0x3719 + (((short)(*(signed char *)((t0 + 0x1))) * (short)0x3938) + 0xC532498)));
            (((struct o18_float *)(t3))->v) = (*(float *)((((((t4 << 1) + t4) << 2) + 0xC2A2B6C) + 0x0)));
            t4 = *(signed char *)((0x3719 + (((short)(*(signed char *)((t0 + 0x1))) * (short)0x3938) + 0xC532498)));
            (((struct o1C_float *)(t3))->v) = ((((struct o4_float *)(((((t4 << 1) + t4) << 2) + 0xC2A2B6C)))->v));
            t4 = *(signed char *)(((0xC532498 + ((short)(*(signed char *)((t0 + 0x1))) * (short)0x3938)) + 0x3719));
            (((struct o20_float *)(t3))->v) = ((((struct o8_float *)((0xC2A2B6C + (((t4 << 1) + t4) << 2))))->v));
            t1 = 0x20;
        }
    }
    return t1;
}

int FUN_0c160dac(int a4)
{
    int stk[4];
    register int t24;
    register float u33;
    register int t48;
    register float u62;
    int t20;
    register int t21;
    register int t78;

    *(unsigned int *)(((int)stk + 0)) = (*(int *)((a4 + 0x10)));
    if (((int)((unsigned int)(*(int *)0xC542260) % (unsigned int)0x5)) == 0) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x4)) = *(struct mv3 *)((a4 + 0x28)); }
        *(float *)(((int)stk + 8)) = ((*(float *)(((int)stk + 8))) + (float)((int)((int)(nlRand()) % (int)0x64)));
        *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) + (float)(((int)((int)(nlRand()) % (int)0xA0)) - 80));
        *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) + (float)(((int)((int)(nlRand()) % (int)0xA0)) - 80));
        FUN_0c152d18((((int)stk + 0) + 0x4));
    }
    if (((*(signed char *)0xC540F98) == 0) && (t20 = *(int *)(((int)stk + 0)), t21 = *(signed char *)((0x3715 + t20)), t21 != 23)) {
        t24 = *(signed char *)((a4 + 0x14));
        if (t24 != 0) {
            if (t24 != 1) {
                if (t24 != 2) {
                    t78 = t24;
                    if (t24 != 3) {
                    } else {
                        t78 = (FUN_0c03f346(a4));
                    }
                } else {
                    u33 = (((struct o40_float *)(a4))->v);
                    (((struct o40_float *)(a4))->v) = (u33 - 0.100000001f);
                    (((struct o48_float *)(a4))->v) = (u33 - 0.100000001f);
                    t78 = 0x40;
                    if (!(((((struct o40_float *)(a4))->v)) > 0.0f)) {
                        (((struct o48_float *)(a4))->v) = 0.0f;
                        (((struct o40_float *)(a4))->v) = 0.0f;
                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                        t78 = 0x14;
                    }
                }
            } else {
                t48 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t48 - 1);
                t78 = (short)(t48 - 1);
                if ((int)(short)(t48 - 1) <= 0) {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    t78 = 0x14;
                }
            }
        } else {
            u62 = (((struct o40_float *)(a4))->v);
            (((struct o40_float *)(a4))->v) = (u62 + 0.100000001f);
            (((struct o48_float *)(a4))->v) = (u62 + 0.100000001f);
            t78 = 0x40;
            if (!(1.0f > ((((struct o40_float *)(a4))->v)))) {
                (((struct o48_float *)(a4))->v) = 1.0f;
                (((struct o40_float *)(a4))->v) = 1.0f;
                *(unsigned short *)((a4 + 0x1C)) = 0x3C;
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t78 = 0x14;
            }
        }
    } else {
        t78 = (FUN_0c03f346(a4));
    }
    return t78;
}

int FUN_0c14831c(int a4, int a5, int a6, int a7, float f4)
{
    int stk[10];

    register int R1;
    register int R2;
    register int R3;
    register int R10;
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
    v0_4 = a4;
    v0_5 = a5;
    v0_6 = a6;
    v0_0 = a7;
    w0_0 = f4;
    v0_7 = *(signed char *)((v0_4 + 0x14));
    v0_1 = (v0_7);
    v0_2 = (0x0);
    v0_3 = ((((short)(*(signed char *)((v0_4 + 0x1))) * (short)0x3938) + 0xC532498));
    v0_4 = (v0_4);
    if ((v0_7 == 0)) goto L_C148374;
    if ((v0_1 == 1)) goto L_C1483A8;
    L_C14845A:;
    return v0_1;
    L_C1483A8:;
    FUN_0c148196(v0_4);
    *(unsigned int *)((v0_4 + 0x34)) = ((((struct o26A0_int *)(v0_3))->v));
    *(unsigned int *)((v0_4 + 0x38)) = ((((struct o26A4_int *)(v0_3))->v));
    v0_7 = *(signed char *)((v0_4 + 0x15));
    v0_1 = (v0_7);
    if ((v0_7 == 0)) goto L_C1483C8;
    if ((v0_1 == 1)) goto L_C1483DE;
    goto L_C14845A;
    L_C1483DE:;
    v0_1 = (FUN_0c1482f2(v0_3)) == 0;
    if (v0_1) goto L_C148450;
    v0_1 = (0x131);
    if (((*(signed char *)((v0_4 + 0x131))) == 0)) goto L_C14845A;
    v0_5 = FUN_0c07d1fc(v0_4);
    v0_1 = (v0_5);
    if ((v0_5 == 0)) goto L_C14845A;
    (((struct o131_uchar *)(v0_4))->v) = v0_2;
    v0_5 = FUN_0c148248(v0_4);
    v0_1 = (v0_5);
    v0_6 = (v0_5);
    if ((v0_5 == 0)) goto L_C14845A;
    *(unsigned char *)(((int)stk + 0)) = (v0_6 - 1);
    (((struct o372A_uchar *)(v0_3))->v) = (v0_6 - 1);
    (((struct o3728_uchar *)(v0_3))->v) = v0_2;
    FUN_0c0b2888(v0_3, 0x21, 0x0, v0_0);
    *(unsigned int *)(((int)stk + 4)) = (v0_6 - 1);
    thunk_FUN_0c058310(((*(int *)((((v0_6 - 1) * 0x3938) + 0xC53255C))) + 0x28), (((int)stk + 0) + 0x8));
    FUN_0c14f238((((int)stk + 0) + 0x8), (v0_3 + 0x34), (*(signed char *)(((int)stk + 0))), 0x2);
    FUN_0c059dae((*(int *)(((int)stk + 4))), 0x0);
    L_C148450:;
    FUN_0c1480bc(v0_4, 0x0);
    (((struct o15_uchar *)(v0_4))->v) = v0_2;
    v0_1 = (0x15);
    goto L_C14845A;
    L_C1483C8:;
    v0_0 = FUN_0c1482f2(v0_3);
    v0_1 = (v0_0);
    if ((v0_0 == 0)) goto L_C14845A;
    FUN_0c1480bc(v0_4, 0x2);
    (((struct o15_uchar *)(v0_4))->v) = 0x1;
    v0_1 = (0x15);
    goto L_C14845A;
    L_C148374:;
    v0_1 = (0x3714);
    if (((*(signed char *)(((*(int *)((v0_4 + 0x10))) + 0x3714))) == 0)) goto L_C14845A;
    (((struct o14_uchar *)(v0_4))->v) = ((*(signed char *)((v0_4 + 0x14))) + 0x1);
    (((struct o15_uchar *)(v0_4))->v) = v0_2;
    (((struct o26_uchar *)(v0_4))->v) = 0x1;
    (((struct oA4_uint *)(v0_4))->v) = (((((struct oD4_int *)(v0_3))->v)) + 0x28);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_4 + 0x28)) = *(struct mv3 *)((0x2694 + v0_3)); }
    goto L_C1483A8;
}



int FUN_0c09a738(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    if (((((struct o3770_int *)(a4))->v)) == 0) {
        return FUN_0c085d0c(a4, a5, a6, a7);
    }
    t0 = ((int (*)(int, int, int))(FUN_0c037bf6))(((((struct o3770_int *)(a4))->v)), a5, a6);
    FUN_0c038362(((((struct o3770_int *)(a4))->v)));
    t0 = ((int (*)(int))(FUN_0c037bf6))(a4);
    FUN_0c038362(a4);
    t0 = (((struct o20_short *)(a4))->v);
    (((struct o20_ushort *)(a4))->v) = (t0 - 1);
    if ((short)(t0 - 1) == 0) {
        t0 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t0, 0x5, 0x3, (t0), 0x5, 0x3);
        t0 = *(int *)(((0x118 + a4) + 0x4));
        t1 = (((struct o118_int *)(a4))->v);
        (((struct oA0_float *)(t0))->v) = 1.0f;
        (((struct o9C_float *)(t0))->v) = 1.0f;
        (((struct oA0_float *)(t1))->v) = 1.0f;
        (((struct o9C_float *)(t1))->v) = 1.0f;
        t0 = *(int *)(((0x118 + a4) + 0x4));
        t1 = (((struct o118_int *)(a4))->v);
        (((struct o98_float *)(t0))->v) = 1.0f;
        (((struct o98_float *)(t1))->v) = 1.0f;
        (((struct o94_float *)(t0))->v) = 1.0f;
        (((struct o94_float *)(t1))->v) = 1.0f;
        FUN_0c07e79c(((((struct o3770_int *)(a4))->v)), 0xFFFFFFFF, 0x5, 0x5, 0xFFFFFFFF, 0x5, 0x5);
        t0 = (((struct o3770_int *)(a4))->v);
        t1 = *(int *)(((t0 + 0x118) + 0x4));
        t2 = (((struct o118_int *)(t0))->v);
        (((struct oA0_float *)(t1))->v) = 1.0f;
        (((struct o9C_float *)(t1))->v) = 1.0f;
        (((struct oA0_float *)(t2))->v) = 1.0f;
        (((struct o9C_float *)(t2))->v) = 1.0f;
        t0 = (((struct o3770_int *)(a4))->v);
        t1 = *(int *)(((t0 + 0x118) + 0x4));
        t2 = (((struct o118_int *)(t0))->v);
        (((struct o98_float *)(t1))->v) = 1.0f;
        (((struct o98_float *)(t2))->v) = 1.0f;
        (((struct o94_float *)(t1))->v) = 1.0f;
        (((struct o94_float *)(t2))->v) = 1.0f;
        (((struct o445_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x1;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct o3770_int *)(a4))->v)) + 0x28)) = *(struct mv3 *)((a4 + 0x28)); }
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    }
    (((struct o374B_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x1;
    return 0x374B;
}

float FUN_0c0b2ac2(int a4, float f4)
{
    int stk[15];
    register float t7;
    register int t8;
    register int t10;
    register int t11;
    register int t12;
    register float u14;
    register float u15;
    register float u24;
    register float u25;
    register float u26;
    register float u30;
    register int t9;
    register float u13;
    register float u16;
    register int t36;
    register float u37;
    register float u38;

    *(unsigned int *)(((int)stk + 4)) = (*(signed char *)((a4 + 0x1)));
    FUN_0c0b1c7e((((int)stk + 0) + 0x2C));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x20)) = *(struct mv3 *)(0xC1C65D4); }
    FUN_0c0582de((((int)stk + 0) + 0x20), (((((struct oD4_int *)(a4))->v)) + 0x28));
    (((struct o8_float *)((((int)stk + 0) + 0x14)))->v) = (math_cos_angle16((*(int *)((a4 + 0x38)))));
    t7 = math_sin_angle16((*(int *)((a4 + 0x38))));
    (((struct o14_float *)(((int)stk + 0)))->v) = t7;
    *(unsigned int *)(((int)stk + 0)) = (((int)stk + 0) + 0x3C);
    t8 = 0xC0B2B6C;
    t10 = (((int)stk + 0) + 0x2C);
    t11 = (((int)stk + 0) + 0x2C);
    t12 = (((int)stk + 0) + 0x2C);
    u14 = f4;
    u15 = 999999.0f;
    for (;;) {
        if ((unsigned int)t12 >= (unsigned int)(*(int *)(((int)stk + 0)))) {
            break;
        }
        t8 = (*(signed char *)((a4 + 0x1)));
        t8 = (FUN_0c0b1d20((*(int *)((t12 + 0x0))), t8));
        if (t8 == 0) {
            t8 = (nlSubVector3op((((int)stk + 0) + 0x8), ((((*(int *)((t11 + 0x0))) * 0x3938) + 0xC532498) + 0x28), (((int)stk + 0) + 0x20)));
            t9 = 0xC17C450;
            t8 = 0x10;
            u24 = *(float *)((((int)stk + 0) + t8));
            t8 = 0x8;
            u25 = *(float *)((((int)stk + 0) + t8));
            t8 = 0x8;
            u26 = *(float *)(((((int)stk + 0) + 0x14) + t8));
            u16 = (FUN_0c17c450((((int)stk + 0) + 0x8)));
            u14 = ((((struct o14_float *)(((int)stk + 0)))->v));
            u14 = (math_vec2_cos_between(u14, u26, u25, u24));
            u14 = (u14 - 1.0f);
            t8 = 0xC0B2C14;
            u13 = (*(float *)((t8 + 0x0)));
            if (u13 > u14) {
                u30 = u14;
                u30 *= -5.0f;
                u14 = u30;
            } else {
                u14 = 1.0f;
            }
            u14 = (u14 * u16);
            if (u15 > u14) {
                t9 = (*(int *)((t10 + 0x0)));
                u15 = u16;
                *(unsigned int *)(((int)stk + 4)) = t9;
                t36 = t9;
            }
            u37 = u13;
            u38 = u14;
        }
        u13 = u37;
        u14 = u38;
        t12 = (t12 + 0x4);
        t9 = t36;
        t11 = (t11 + 0x4);
        t10 = (t10 + 0x4);
    }
    *(unsigned int *)((a4 + 0x10)) = (((*(int *)(((int)stk + 4))) * 0x3938) + 0xC532498);
    (((struct o3780_float *)(a4))->v) = u15;
    return t7;
}

