/* Straight-line functions with calls and guards (batch gen_fs): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
struct o0_float { float v; };
struct o10_float { char p[0x10]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o430_short { char p[0x430]; short v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c037498(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int, int);
int FUN_0c058b06(int, int, int);
int FUN_0c059e60(int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c07e2f4(int, int);
int FUN_0c07e3ae(int, int);
int FUN_0c14d34c(int, int, int, int, int, int, int, int);
int FUN_0c168160(int, int, int);
int FUN_0c16868c(int, int, int);
float FUN_0c17c450(int);
float math_cos_angle16(int);
int math_mat_get_translate(int, int);
int math_mat_transform_vector(int, int);
float math_sin_angle16(int);
int nlAddVector3op(int, int, int);
float nlInnerProduct(int, int);
extern int nlRand();
int nlSubVector3op(int, int, int);
int thunk_FUN_0c058310(int, int);
int FUN_0c15d044(int a4, int a5, int a6, int a7);
int FUN_0c132ba4(int a4, int a5, int a6, int a7);
int FUN_0c16819e(int a4, int a5, int a6, int a7, int a8);
int FUN_0c1686ca(int a4, int a5, int a6, int a7, int a8);
int FUN_0c144b8e(int a4, int a5, int a6, float f4, float f5);
int FUN_0c167a28(int a4, int a5, int a6, int a7);
int FUN_0c14d478(int a4, int a5, int a6, int a7);
int FUN_0c12d070(int a4, int a5, int a6, int a7);

int FUN_0c15d044(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;

    t1 = *(signed char *)((a4 + 0x1));
    t2 = *(signed char *)((a4 + 0x14));
    if (t2 != 0) {
        if (t2 != 1) {
            return t2;
        }
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)(((((short)t1 * (short)0x3938) + 0xC532498) + 0x28)); }
    if (((unsigned short)((((struct o430_short *)((((short)t1 * (short)0x3938) + 0xC532498)))->v)) & 0x3C00) != 0) {
        t2 = (int)((int)(nlRand()) % (int)0x24);
        t3 = (int)((int)(nlRand()) % (int)0x5);
        u0 = math_sin_angle16((int)(((float)(((t2 << 2) + t2) << 1) * 65536.0f) / 360.0f));
        (((struct o4C_float *)(a4))->v) = (u0 * ((float)t3 + 3.0f));
        u0 = math_cos_angle16((int)(((float)(((t2 << 2) + t2) << 1) * 65536.0f) / 360.0f));
        (((struct o54_float *)(a4))->v) = (u0 * ((float)t3 + 3.0f));
        *(unsigned short *)((a4 + 0x1C)) = 0x5;
    }
    if ((*(short *)((a4 + 0x1C))) != 0) {
        t2 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t2 - 1);
        if ((short)(t2 - 1) == 0) {
            (((struct o54_float *)(a4))->v) = 0.0f;
            (((struct o4C_float *)(a4))->v) = 0.0f;
        }
    }
    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
    (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o54_float *)(a4))->v)));
    if (((*(signed char *)(((((short)t1 * (short)0x3938) + 0xC532498) + 0x3715))) == 32) && (t0 = *(signed char *)(((((short)t1 * (short)0x3938) + 0xC532498) + 0x3739)), t0 == 27)) {
        t1 = t0;
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t1 = 0x14;
    }
    return t1;
}

int FUN_0c132ba4(int a4, int a5, int a6, int a7)
{
    int stk[5];
    register int t0;
    register float u3;
    register int t9;
    register int t10;
    register int t11;

    *(unsigned char *)(((int)stk + 16)) = a5;
    t0 = FUN_0c03f444(0x1, 0x0, 0x1, a7);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned int *)((t0 + 0x4)) = 0xC132D70;
        *(unsigned char *)((t0 + 0x2)) = (*(signed char *)(((int)stk + 16)));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)((a4 + 0x28)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x34)) = *(struct mv3 *)((a4 + 0x34)); }
        u3 = *(float *)0xC132D08;
        (((struct o48_float *)(t0))->v) = u3;
        (((struct o44_float *)(t0))->v) = u3;
        (((struct o40_float *)(t0))->v) = u3;
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0x1F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC53258C))) + 0x28), (t0 + 0x28));
        t9 = (*(int *)((0xC4B40FC + ((*(signed char *)((t0 + 0x1))) << 2))));
        *(int *)((int)stk + 12) = t9;
        t10 = nlRand();
        t11 = ((~(((~t10) + 0x1) & 0xF)) + 0x1);
        if ((int)t10 >= 0) {
            t11 = (t10 & 0xF);
        }
        FUN_0c037498(((((struct oC4_int *)(t0))->v)), t11, 0x2, t9);
        *(unsigned char *)((((((struct oC4_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(t0))->v)) + 0x6)) = 0x23F;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC4_int *)(t0))->v)) + 0x84)) = *(struct mv3 *)((t0 + 0x40)); }
        (((struct o18_float *)(((((struct oC4_int *)(t0))->v))))->v) = 0.0f;
        (((struct o1C_float *)(((((struct oC4_int *)(t0))->v))))->v) = 0.0f;
        (((struct o20_float *)(((((struct oC4_int *)(t0))->v))))->v) = 0.0f;
        *(unsigned int *)((t0 + 0x10)) = a4;
        *(int *)((int)stk + 12) = 0x0;
        *(int *)((int)stk + 8) = 0x0;
        *(int *)((int)stk + 4) = 0x0;
        *(int *)((int)stk + 0) = 0x100;
        FUN_0c064d24(t0, 0x1, 0x36, 0x2, 0x100, 0x0, 0x0, 0x0);
        FUN_0c07e2f4(t0, 0x60);
    }
    return t0;
}

int FUN_0c16819e(int a4, int a5, int a6, int a7, int a8)
{
    int stk[10];
    register int t2;
    register int t21;
    register int t4;
    register int t5;
    register int t13;
    register float u14;

    *(unsigned int *)(((int)stk + 24)) = a5;
    *(unsigned int *)(((int)stk + 16)) = a6;
    *(unsigned int *)(((int)stk + 20)) = a7;
    t5 = (~((int)0x1 << (int)a4));
    if ((int)a4 < 0) {
        t5 = 0xF;
    }
    t2 = FUN_0c03f444(0x1, 0x0, 0x2, a7);
    t21 = 0x0;
    if (t2 != 0) {
        FUN_0c07e3ae(t2, 0x47);
        *(int *)((int)stk + 12) = 0xFFFFFEF0;
        t4 = t5;
        *(int *)((int)stk + 8) = t4;
        *(int *)((int)stk + 4) = t5;
        *(int *)((int)stk + 0) = 0x100;
        FUN_0c064d24(t2, 0x3, 0x9, 0x0, 0x100, t5, t4, 0xFFFFFEF0);
        *(unsigned char *)((t2 + 0x1)) = a4;
        FUN_0c058b06((((int)stk + 16) + 0xC), (*(int *)(((int)stk + 16))), (*(int *)(((int)stk + 20))));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t2 + 0x28)) = *(struct mv3 *)((*(int *)(((int)stk + 24)))); }
        nlAddVector3op((t2 + 0x28), (t2 + 0x28), (((int)stk + 16) + 0xC));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t2 + 0x34)) = *(struct mv3 *)((*(int *)(((int)stk + 16)))); }
        t13 = *(int *)((t2 + 0x38));
        *(unsigned int *)((t2 + 0x38)) = (t13 + a8);
        u14 = *(float *)0xC2A361C;
        (((struct o4C_float *)(t2))->v) = (u14 * (math_sin_angle16((t13 + a8))));
        (((struct o54_float *)(t2))->v) = (u14 * (math_cos_angle16((*(int *)((t2 + 0x38))))));
        (((struct o50_float *)(t2))->v) = 0.0f;
        (((struct o5C_float *)(t2))->v) = 0.0f;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t2 + 0x40)) = *(struct mv3 *)(0xC2A35C0); }
        FUN_0c168160((*(signed char *)((t2 + 0x1))), (t2 + 0x28), (*(int *)((t2 + 0x38))));
        t21 = t2;
    }
    return t21;
}

int FUN_0c1686ca(int a4, int a5, int a6, int a7, int a8)
{
    int stk[10];
    register int t2;
    register int t21;
    register int t4;
    register int t5;
    register int t13;
    register float u14;

    *(unsigned int *)(((int)stk + 24)) = a5;
    *(unsigned int *)(((int)stk + 16)) = a6;
    *(unsigned int *)(((int)stk + 20)) = a7;
    t5 = (~((int)0x1 << (int)a4));
    if ((int)a4 < 0) {
        t5 = 0xF;
    }
    t2 = FUN_0c03f444(0x1, 0x0, 0x2, a7);
    t21 = 0x0;
    if (t2 != 0) {
        FUN_0c07e3ae(t2, 0x48);
        *(int *)((int)stk + 12) = 0xFFFFFEF0;
        t4 = t5;
        *(int *)((int)stk + 8) = t4;
        *(int *)((int)stk + 4) = t5;
        *(int *)((int)stk + 0) = 0x100;
        FUN_0c064d24(t2, 0x3, 0x9, 0x0, 0x100, t5, t4, 0xFFFFFEF0);
        *(unsigned char *)((t2 + 0x1)) = a4;
        FUN_0c058b06((((int)stk + 16) + 0xC), (*(int *)(((int)stk + 16))), (*(int *)(((int)stk + 20))));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t2 + 0x28)) = *(struct mv3 *)((*(int *)(((int)stk + 24)))); }
        nlAddVector3op((t2 + 0x28), (t2 + 0x28), (((int)stk + 16) + 0xC));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t2 + 0x34)) = *(struct mv3 *)((*(int *)(((int)stk + 16)))); }
        t13 = *(int *)((t2 + 0x38));
        *(unsigned int *)((t2 + 0x38)) = (t13 + a8);
        u14 = *(float *)0xC2A3718;
        (((struct o4C_float *)(t2))->v) = (u14 * (math_sin_angle16((t13 + a8))));
        (((struct o54_float *)(t2))->v) = (u14 * (math_cos_angle16((*(int *)((t2 + 0x38))))));
        (((struct o50_float *)(t2))->v) = 0.0f;
        (((struct o5C_float *)(t2))->v) = 0.0f;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t2 + 0x40)) = *(struct mv3 *)(0xC2A369C); }
        FUN_0c16868c((*(signed char *)((t2 + 0x1))), (t2 + 0x28), (*(int *)((t2 + 0x38))));
        t21 = t2;
    }
    return t21;
}

int FUN_0c144b8e(int a4, int a5, int a6, float f4, float f5)
{
    int stk[6];
    register int t1;
    register int t2;
    register int t5;
    register float u7;
    register float u8;
    register int t0;
    register float u6;
    register float u9;
    float u13;

    t1 = a5;
    t2 = a6;
    t5 = 0x0;
    u7 = f4;
    u8 = f5;
    for (;;) {
        if ((int)t5 >= (int)0x4) {
            return 0x0;
        }
        if (t5 != (*(signed char *)((a4 + 0x1)))) {
            t1 = 0x3938;
            t2 = 0xC532498;
            t0 = (*(signed char *)((((t5 * t1) + t2) + 0x3714)));
            if ((t0 != 0) && (u13 = (((struct o160_float *)(((t5 * t1) + t2)))->v), u13 > 0.0f)) {
                t0 = 0xC187798;
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)((((t5 * t1) + t2) + 0x28)); }
                t1 = ((int)stk + 0);
                u9 = 0.0f;
                t1 = (t1 + 0xC);
                *(float *)(((int)stk + 4)) = u9;
                math_mat_get_translate((a4 + 0x64), t1);
                t2 = ((int)stk + 0);
                t1 = ((int)stk + 0);
                *(float *)(((int)stk + 16)) = u9;
                t2 = (t2 + 0xC);
                nlSubVector3op((((int)stk + 0) + 0xC), t1, t2);
                u6 = (FUN_0c17c450((((int)stk + 0) + 0xC)));
                u7 = u6;
                u8 = ((((struct o0_float *)0xC144CCC)->v));
                if (!(u8 > u7)) {
                    u8 = ((((struct o4_float *)0xC144CCC)->v));
                    if (u8 > u7) {
                        *(float *)(((int)stk + 4)) = u9;
                        t1 = a4;
                        u7 = 1.0f;
                        t1 = (t1 + 0x64);
                        *(float *)(((int)stk + 0)) = u9;
                        *(float *)(((int)stk + 8)) = u7;
                        math_mat_transform_vector(((int)stk + 0), t1);
                        *(float *)(((int)stk + 4)) = u9;
                        u6 = (FUN_0c17c450(((int)stk + 0)));
                        u9 = ((((struct o10_float *)0xC144CCC)->v));
                        t1 = ((int)stk + 0);
                        u6 = (nlInnerProduct((((int)stk + 0) + 0xC), t1));
                        if (!(u9 > u6)) {
                            break;
                        }
                        t5 = (t5 + 0x1);
                        continue;
                    }
                    t5 = (t5 + 0x1);
                    continue;
                }
                break;
            }
            t5 = (t5 + 0x1);
            continue;
        }
        t5 = (t5 + 0x1);
    }
    *(unsigned short *)((a4 + 0x1E)) = t5;
    return 0x1;
}

int FUN_0c167a28(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    t0 = (~((int)0x1 << (int)a4));
    if ((int)a4 < 0) {
        t0 = 0xF;
    }
    if (a7 != 0) {
        t1 = FUN_0c03f444(0x1, 0x0, 0x1, a7);
        t2 = 0x0;
        if (t1 != 0) {
            FUN_0c07e3ae(t1, 0x36);
            FUN_0c064d24(t1, 0x3, 0x9, 0x0, 0x100, (t0), (t0), 0xFFFFFFF0);
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x28)) = *(struct mv3 *)(a5); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x34)) = *(struct mv3 *)(a6); }
            (((struct o4C_float *)(t1))->v) = (10.0f * (math_sin_angle16((*(int *)((a6 + 0x4))))));
            (((struct o54_float *)(t1))->v) = (10.0f * (math_cos_angle16((*(int *)((a6 + 0x4))))));
            (((struct o50_float *)(t1))->v) = 0.0f;
            (((struct o5C_float *)(t1))->v) = 0.0f;
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x40)) = *(struct mv3 *)(0xC2A3528); }
            t2 = t1;
        }
        t0 = t2;
    } else {
        t1 = FUN_0c03f444(0x5, 0x0, 0x1, a7);
        t2 = 0x0;
        if (t1 != 0) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x28)) = *(struct mv3 *)(a5); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x34)) = *(struct mv3 *)(a6); }
            u0 = *(float *)0xC167B70;
            (((struct o4C_float *)(t1))->v) = (u0 * (math_sin_angle16((*(int *)((a6 + 0x4))))));
            (((struct o54_float *)(t1))->v) = (u0 * (math_cos_angle16((*(int *)((a6 + 0x4))))));
            (((struct o50_float *)(t1))->v) = 0.0f;
            (((struct o5C_float *)(t1))->v) = 0.0f;
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x40)) = *(struct mv3 *)(0xC2A3528); }
            t2 = t1;
        }
        t0 = t2;
    }
    return t0;
}

int FUN_0c14d478(int a4, int a5, int a6, int a7)
{
    int stk[6];
    register int t6;
    register int t8;
    register int t21;
    register int t22;
    register int t29;
    register int t42;

    if ((*(signed char *)((0x3715 + (*(int *)((a4 + 0x10)))))) != 26) {
        (((struct o14_uchar *)(a4))->v) = 0x1;
    }
    if ((*(signed char *)((a4 + 0x14))) == 0) {
        t6 = *(short *)((a4 + 0x1E));
        *(unsigned short *)((a4 + 0x1E)) = (t6 - 1);
        t42 = (short)(t6 - 1);
        if ((int)(short)(t6 - 1) <= 0) {
            t8 = *(signed char *)((a4 + 0x18));
            if (t8 != -1) {
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)((((t8 * 0x3938) + 0xC532498) + 0x28)); }
            } else {
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)(((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532498) + 0x380C)); }
            }
            *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) + 1200.0f);
            *(float *)(((int)stk + 0)) = ((*(float *)(((int)stk + 0))) + ((float)((int)((int)(((int (*)(Stk3))(nlRand))(*(Stk3 *)(((int)stk + 0)))) % (int)0x12C)) + -150.0f));
            *(float *)(((int)stk + 8)) = ((*(float *)(((int)stk + 8))) + ((float)((int)((int)(((int (*)(void))(nlRand))()) % (int)0x12C)) + -150.0f));
            FUN_0c14d34c(a4, ((int)stk + 0), 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12));
            *(unsigned short *)((a4 + 0x1E)) = 0x7;
            t21 = *(short *)((a4 + 0x1C));
            t22 = ((~(((~t21) + 0x1) & 0x1)) + 0x1);
            if ((int)t21 >= 0) {
                t22 = (t21 & 0x1);
            }
            if (t22 != 0) {
                FUN_0c059e60((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532498), 0x23);
            }
            t29 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t29 + 0x1);
            t42 = (short)(t29 + 0x1);
            if ((int)(short)(t29 + 0x1) >= (int)0xC) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t42 = 0x14;
            }
        }
    } else {
        t42 = (FUN_0c03f346(a4, a5, a6, a7));
    }
    return t42;
}

int FUN_0c12d070(int a4, int a5, int a6, int a7)
{
    int stk[1];
    register int t0;
    register int t29;
    register int t3;
    register int t16;
    register int t18;

    *(unsigned char *)(((int)stk + 0)) = a5;
    t0 = FUN_0c03f444(0x5, 0x0, 0x1, a7);
    t29 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned int *)((t0 + 0x4)) = 0xC12D170;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)((a4 + 0x28)); }
        (((struct o54_float *)(t0))->v) = 0.0f;
        (((struct o50_float *)(t0))->v) = 0.0f;
        (((struct o4C_float *)(t0))->v) = 0.0f;
        (((struct o48_float *)(t0))->v) = 1.0f;
        (((struct o44_float *)(t0))->v) = 1.0f;
        (((struct o40_float *)(t0))->v) = 1.0f;
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0x21;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        (((struct o14_uchar *)(t0))->v) = (*(signed char *)(((int)stk + 0)));
        (((struct o15_uchar *)(t0))->v) = 0x0;
        t3 = *(signed char *)(((int)stk + 0));
        t29 = t3;
        if (t3 == 0) {
            FUN_0c037498(((((struct oC4_int *)(t0))->v)), 0x0, 0x1, (*(int *)((((*(signed char *)((t0 + 0x1))) << 2) + 0xC4B40FC))));
            *(unsigned char *)((((((struct oC4_int *)(t0))->v)) + 0x0)) = 0x0;
            *(unsigned short *)((((((struct oC4_int *)(t0))->v)) + 0x6)) = 0x21F;
            (((struct o18_float *)(((((struct oC4_int *)(t0))->v))))->v) = 1.0f;
            (((struct o1C_float *)(((((struct oC4_int *)(t0))->v))))->v) = 1.0f;
            (((struct o20_float *)(((((struct oC4_int *)(t0))->v))))->v) = 1.0f;
            (((struct o84_float *)(((((struct oC4_int *)(t0))->v))))->v) = 0.0f;
            (((struct o88_float *)(((((struct oC4_int *)(t0))->v))))->v) = 0.0f;
            (((struct o8C_float *)(((((struct oC4_int *)(t0))->v))))->v) = 0.0f;
            t16 = (((struct oC4_int *)(t0))->v);
            (((struct o70_float *)(t16))->v) = (((((struct o70_float *)(t16))->v)) + 150.0f);
            t18 = (((struct oC4_int *)(t0))->v);
            (((struct o74_float *)(t18))->v) = (((((struct o74_float *)(t18))->v)) + 200.0f);
            *(unsigned int *)((t0 + 0x10)) = a4;
            *(unsigned short *)((t0 + 0x1C)) = 0x4;
            t29 = 0x4;
        }
    }
    return t29;
}
