/* Straight-line functions with calls and guards (batch gen_ax): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o11C_int { char p[0x11C]; int v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o372C_uchar { char p[0x372C]; unsigned char v; };
struct o3790_float { char p[0x3790]; float v; };
struct o3794_float { char p[0x3794]; float v; };
struct o37A0_float { char p[0x37A0]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o42C_short { char p[0x42C]; short v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
extern int FUN_0c037bf6();
int FUN_0c05253c(int, int, int, int, int, int);
int FUN_0c06c134(int);
int FUN_0c073fe2(int, int);
int FUN_0c0752a8(int);
int FUN_0c07a6aa(int);
int FUN_0c07db58(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07eaf4(int);
int FUN_0c07ebd0(int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c08515a(int, int);
int FUN_0c085cac(int, int, int);
int FUN_0c085d0c(int, int, int, int);
int FUN_0c08e382(int);
int FUN_0c1312e2(int);
int FUN_0c150be8(int, int);
float math_cos_angle16(int);
float math_signed_sqrt(float);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int FUN_0c06f0be(int a4, int a5, int a6);
int FUN_0c079324(int a4);
int FUN_0c09f772(int a4, int a5, int a6);
int FUN_0c0787e4(int a4);

int FUN_0c06f0be(int a4, int a5, int a6)
{
    int stk[12];
    register int t3;
    register int t13;
    register int t14;
    register int t17;
    register int t18;
    register int t19;
    register int t20;
    register int t38;
    register int t48;
    register int t58;
    register int t59;
    register int t62;
    register int t63;
    register int t64;
    register int t65;
    register int t83;
    register int t102;
    register int t103;
    register int t119;
    register int t120;
    register int t121;
    register int t122;
    int t4;
    int t12;
    register int t21;
    int t39;
    register float u40;
    register float u41;
    int t49;
    int t57;
    register int t66;
    register int t92;
    register int t93;
    register int t94;
    register int t96;
    register int t110;
    register int t111;
    register int t112;
    register int t114;
    int t124;

    FUN_0c06c134(a4);
    if ((*(short *)((a4 + 0x1E))) != 0) {
        *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) - 1);
        t3 = FUN_0c07ebd0(a4);
        if ((t3 == 0) && (t4 = *(short *)((a4 + 0x1E)), t4 == 0)) {
            if (((*(signed char *)((a4 + 0x2))) == 8) && (t12 = *(signed char *)((a4 + 0x371C)), t12 != 0)) {
                *(int *)((int)stk + 8) = 0x23;
                *(int *)((int)stk + 4) = 0x0;
                t13 = *(signed char *)((a4 + 0x1));
                *(unsigned int *)(((int)stk + 12)) = t13;
                t14 = t13;
                *(int *)((int)stk + 0) = t14;
                FUN_0c07e79c(a4, t13, 0x0, 0x23, t14, 0x0, 0x23);
                (((struct o16_uchar *)(a4))->v) = 0x3;
                t21 = 0x16;
            } else {
                FUN_0c085d0c(a4, 0x0, 0x0, 0x0);
                t17 = *(int *)(((0x118 + a4) + 0x4));
                t18 = (((struct o118_int *)(a4))->v);
                (((struct oA0_float *)(t17))->v) = 1.0f;
                (((struct o9C_float *)(t17))->v) = 1.0f;
                (((struct oA0_float *)(t18))->v) = 1.0f;
                (((struct o9C_float *)(t18))->v) = 1.0f;
                t19 = *(int *)(((0x118 + a4) + 0x4));
                t20 = (((struct o118_int *)(a4))->v);
                (((struct o98_float *)(t19))->v) = 1.0f;
                (((struct o98_float *)(t20))->v) = 1.0f;
                (((struct o94_float *)(t19))->v) = 1.0f;
                (((struct o94_float *)(t20))->v) = 1.0f;
                t21 = 0x94;
            }
            return t21;
        }
        if ((*(short *)((a4 + 0x1E))) == 0) {
            *(unsigned int *)((a4 + 0x38)) = (unsigned short)((*(short *)((0xC5413E8 + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x2F8)))) + (FUN_0c07eaf4(a4)));
        }
        (((struct o4C_float *)(a4))->v) = (((math_sin_angle16((*(int *)((a4 + 0x38))))) * 300.0f) / 25.0f);
        (((struct o54_float *)(a4))->v) = (((math_cos_angle16((*(int *)((a4 + 0x38))))) * 300.0f) / 25.0f);
        math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
        return FUN_0c037bf6(a4);
    }
    t38 = FUN_0c08515a(a4, 0x4);
    if ((t38 != 0) && (t39 = *(int *)((t38 + 0x4)), u40 = (((struct o2C_float *)(a4))->v), u41 = (((struct o2C_float *)(t39))->v), !(u41 > u40))) {
        t48 = FUN_0c07ebd0(a4);
        if ((t48 == 0) && (t49 = *(short *)((a4 + 0x1E)), t49 == 0)) {
            if (((*(signed char *)((a4 + 0x2))) == 8) && (t57 = *(signed char *)((a4 + 0x371C)), t57 != 0)) {
                *(int *)((int)stk + 8) = 0x23;
                *(int *)((int)stk + 4) = 0x0;
                t58 = *(signed char *)((a4 + 0x1));
                *(unsigned int *)(((int)stk + 12)) = t58;
                t59 = t58;
                *(int *)((int)stk + 0) = t59;
                FUN_0c07e79c(a4, t58, 0x0, 0x23, t59, 0x0, 0x23);
                (((struct o16_uchar *)(a4))->v) = 0x3;
                t66 = 0x16;
            } else {
                FUN_0c085d0c(a4, 0x0, 0x0, 0x0);
                t62 = *(int *)(((0x118 + a4) + 0x4));
                t63 = (((struct o118_int *)(a4))->v);
                (((struct oA0_float *)(t62))->v) = 1.0f;
                (((struct o9C_float *)(t62))->v) = 1.0f;
                (((struct oA0_float *)(t63))->v) = 1.0f;
                (((struct o9C_float *)(t63))->v) = 1.0f;
                t64 = *(int *)(((0x118 + a4) + 0x4));
                t65 = (((struct o118_int *)(a4))->v);
                (((struct o98_float *)(t64))->v) = 1.0f;
                (((struct o98_float *)(t65))->v) = 1.0f;
                (((struct o94_float *)(t64))->v) = 1.0f;
                (((struct o94_float *)(t65))->v) = 1.0f;
                t66 = 0x94;
            }
            return t66;
        }
        if ((*(short *)((a4 + 0x1E))) == 0) {
            *(unsigned int *)((a4 + 0x38)) = (unsigned short)((*(short *)((0xC5413E8 + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x2F8)))) + (FUN_0c07eaf4(a4)));
        }
        (((struct o4C_float *)(a4))->v) = (((math_sin_angle16((*(int *)((a4 + 0x38))))) * 300.0f) / 25.0f);
        (((struct o54_float *)(a4))->v) = (((math_cos_angle16((*(int *)((a4 + 0x38))))) * 300.0f) / 25.0f);
        math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
        return FUN_0c037bf6(a4);
    }
    t83 = *(signed char *)((a4 + 0x2));
    if (t83 != 8) {
        if (t83 != 10) {
        } else {
            if ((*(signed char *)((a4 + 0x371C))) != 0) {
                *(int *)((int)stk + 8) = 0x26;
                *(int *)((int)stk + 4) = 0x0;
                t94 = *(signed char *)((a4 + 0x1));
                *(unsigned int *)(((int)stk + 12)) = t94;
                t93 = t94;
                *(int *)((int)stk + 0) = t93;
                t92 = 0x26;
                t96 = 0x26;
            } else {
                *(int *)((int)stk + 8) = 0x12;
                *(int *)((int)stk + 4) = 0x0;
                t94 = *(signed char *)((a4 + 0x1));
                *(unsigned int *)(((int)stk + 12)) = t94;
                t93 = t94;
                *(int *)((int)stk + 0) = t93;
                t92 = 0x12;
                t96 = 0x12;
            }
            FUN_0c07e79c(a4, t94, 0x0, t96, t93, 0x0, t92);
        }
        *(int *)((int)stk + 8) = 0x12;
        *(int *)((int)stk + 4) = 0x0;
        t102 = *(signed char *)((a4 + 0x1));
        *(unsigned int *)(((int)stk + 12)) = t102;
        t103 = t102;
        *(int *)((int)stk + 0) = t103;
        FUN_0c07e79c(a4, t102, 0x0, 0x12, t103, 0x0, 0x12);
    } else {
        if ((*(signed char *)((a4 + 0x371C))) != 0) {
            *(int *)((int)stk + 8) = 0x22;
            *(int *)((int)stk + 4) = 0x0;
            t112 = *(signed char *)((a4 + 0x1));
            *(unsigned int *)(((int)stk + 12)) = t112;
            t111 = t112;
            *(int *)((int)stk + 0) = t111;
            t110 = 0x22;
            t114 = 0x22;
        } else {
            *(int *)((int)stk + 8) = 0x12;
            *(int *)((int)stk + 4) = 0x0;
            t112 = *(signed char *)((a4 + 0x1));
            *(unsigned int *)(((int)stk + 12)) = t112;
            t111 = t112;
            *(int *)((int)stk + 0) = t111;
            t110 = 0x12;
            t114 = 0x12;
        }
        FUN_0c07e79c(a4, t112, 0x0, t114, t111, 0x0, t110);
    }
    t119 = *(int *)(((0x118 + a4) + 0x4));
    t120 = (((struct o118_int *)(a4))->v);
    (((struct oA0_float *)(t119))->v) = 1.0f;
    (((struct o9C_float *)(t119))->v) = 1.0f;
    (((struct oA0_float *)(t120))->v) = 1.0f;
    (((struct o9C_float *)(t120))->v) = 1.0f;
    t121 = *(int *)(((0x118 + a4) + 0x4));
    t122 = (((struct o118_int *)(a4))->v);
    (((struct o98_float *)(t121))->v) = 1.0f;
    (((struct o98_float *)(t122))->v) = 1.0f;
    (((struct o94_float *)(t121))->v) = 1.0f;
    (((struct o94_float *)(t122))->v) = 1.0f;
    if (((*(signed char *)((a4 + 0x2))) == 8) && (t124 = *(signed char *)((a4 + 0x371C)), t124 != 0)) {
        return FUN_0c085cac(a4, 0x1, 0x1);
    }
    (((struct o20_ushort *)(a4))->v) = 0x0;
    (((struct o22_ushort *)(a4))->v) = 0xC;
    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) - 100.0f);
    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
    return 0x16;
}

int FUN_0c079324(int a4)
{
    int t0;
    register int t1;
    register float u0;

    t1 = FUN_0c0752a8(a4);
    if (t1 != 1) {
        if (t1 != 2) {
            if ((0.0f > ((((struct o50_float *)(a4))->v))) && (t0 = (((struct o22_short *)(a4))->v), t0 == 0)) {
                FUN_0c07e79c(a4, 0xFFFFFFFF, 0x4, 0x29, 0xFFFFFFFF, 0x4, 0x29);
                u0 = *(float *)0xC0794E0;
                t0 = (((struct o118_int *)(a4))->v);
                (((struct o98_float *)(t0))->v) = u0;
                (((struct o94_float *)(t0))->v) = u0;
                t0 = (((struct o11C_int *)(a4))->v);
                (((struct o98_float *)(t0))->v) = u0;
                (((struct o94_float *)(t0))->v) = u0;
                (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) + 0x1);
            }
            FUN_0c037bf6(a4);
            math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
            return math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
        }
        return FUN_0c07a6aa(a4);
    }
    FUN_0c05253c(0x3, 0x1, 0x14, 0xA, 0x14, 0x0);
    FUN_0c07db58(a4);
    FUN_0c08e382(a4);
    if ((*(signed char *)((a4 + 0x135))) != 2) {
        FUN_0c150be8((a4 + 0x28), (*(int *)((a4 + 0x38))));
    }
    (((struct o372C_uchar *)(a4))->v) = 0x0;
    FUN_0c07e79c(a4, 0xFFFFFFFF, 0x4, 0x2A, 0xFFFFFFFF, 0x4, 0x2A);
    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
    return 0x16;
}

int FUN_0c09f772(int a4, int a5, int a6)
{
    int stk[3];
    register int t1;
    register int t2;
    register int t25;
    int t8;
    int t31;

    if (!(((((struct o50_float *)(a4))->v)) > 0.0f)) {
        t1 = FUN_0c07ecc6(a4, 0x0, 0x0);
        if (t1 != 0) {
            (((struct o60_float *)(a4))->v) = 0.0f;
            (((struct o58_float *)(a4))->v) = 0.0f;
            (((struct o54_float *)(a4))->v) = 0.0f;
            (((struct o4C_float *)(a4))->v) = 0.0f;
            return FUN_0c085cac(a4, 0x6, 0x0);
        }
        t2 = ((int (*)(int))(FUN_0c037bf6))(a4);
        if ((unsigned char)t2 != 0) {
            FUN_0c085d0c(a4, 0x0, 0x0, 0x0);
        }
        if (!(5.0f > ((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v))) && (t8 = *(short *)((a4 + 0x1C)), t8 == 0)) {
            FUN_0c1312e2(a4);
            (((struct o4C_float *)(a4))->v) = (-((math_sin_angle16((*(int *)((a4 + 0x38))))) * 5.5f));
            (((struct o54_float *)(a4))->v) = (-((math_cos_angle16((*(int *)((a4 + 0x38))))) * 5.5f));
            (((struct o58_float *)(a4))->v) = ((-((((struct o4C_float *)(a4))->v))) / 20.0f);
            (((struct o60_float *)(a4))->v) = ((-((((struct o54_float *)(a4))->v))) / 20.0f);
            (((struct o50_float *)(a4))->v) = 12.0f;
            (((struct o5C_float *)(a4))->v) = ((((struct o37A0_float *)(a4))->v));
            *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
        }
    } else {
        t25 = ((int (*)(int, int, int))(FUN_0c037bf6))(a4, a5, a6);
        if ((unsigned char)t25 != 0) {
            FUN_0c085d0c(a4, 0x0, 0x0, 0x0);
        }
        if (!(5.0f > ((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v))) && (t31 = *(short *)((a4 + 0x1C)), t31 == 0)) {
            FUN_0c1312e2(a4);
            (((struct o4C_float *)(a4))->v) = (-((math_sin_angle16((*(int *)((a4 + 0x38))))) * 5.5f));
            (((struct o54_float *)(a4))->v) = (-((math_cos_angle16((*(int *)((a4 + 0x38))))) * 5.5f));
            (((struct o58_float *)(a4))->v) = ((-((((struct o4C_float *)(a4))->v))) / 20.0f);
            (((struct o60_float *)(a4))->v) = ((-((((struct o54_float *)(a4))->v))) / 20.0f);
            (((struct o50_float *)(a4))->v) = 12.0f;
            (((struct o5C_float *)(a4))->v) = ((((struct o37A0_float *)(a4))->v));
            *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
        }
    }
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    return math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
}

int FUN_0c0787e4(int a4)
{
    register int t0;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;

    u0 = (((struct o28_float *)(a4))->v);
    u1 = (((struct o4_float *)((0x3790 + a4)))->v);
    u2 = (((struct o30_float *)(a4))->v);
    u3 = (((struct o3790_float *)(a4))->v);
    u4 = ((u2 - u1) * (u2 - u1));
    u4 = u4 + ((u0 - u3)) * ((u0 - u3));
    u0 = math_signed_sqrt(u4);
    if (u0 > 10.0f) {
        (((struct o3790_float *)(a4))->v) = ((((struct o28_float *)(a4))->v));
        (((struct o3794_float *)(a4))->v) = ((((struct o30_float *)(a4))->v));
    }
    u0 = (1.0f + 1.0f);
    if (((unsigned short)((((struct o42C_short *)(a4))->v)) & 0x3C00) != 0) {
        u0 = 4.0f;
    }
    t0 = *(signed char *)((a4 + 0x1));
    u1 = u0;
    if (((*(short *)((a4 + 0x1C))) & 2) != 0) {
        u2 = u0;
        u2 *= -1.0f;
        u1 = u2;
    }
    u0 = math_sin_angle16(((*(int *)((((short)t0 * (short)0x2F8) + 0xC5413E8))) + 0x4000));
    u2 = ((((struct o3790_float *)(a4))->v));
    u2 = u2 + u1 * u0;
    (((struct o28_float *)(a4))->v) = u2;
    u0 = math_cos_angle16(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x2F8) + 0xC5413E8))) + 0x4000));
    u2 = ((((struct o3794_float *)(a4))->v));
    u2 = u2 + u1 * u0;
    (((struct o30_float *)(a4))->v) = u2;
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    if ((int)(short)(t0 - 1) <= 0) {
        return FUN_0c073fe2((((short)(*(signed char *)((a4 + 0x373F))) * (short)0x3938) + 0xC532498), (*(signed char *)((a4 + 0x1))));
    }
    return (short)(t0 - 1);
}
