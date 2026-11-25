/* Straight-line functions with calls and guards (batch gen_iu): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o118_int { char p[0x118]; int v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o374B_uchar { char p[0x374B]; unsigned char v; };
struct o3756_uchar { char p[0x3756]; unsigned char v; };
struct o376C_int { char p[0x376C]; int v; };
struct o3774_int { char p[0x3774]; int v; };
struct o378C_float { char p[0x378C]; float v; };
struct o37A0_float { char p[0x37A0]; float v; };
struct o3830_ushort { char p[0x3830]; unsigned short v; };
struct o3850_int { char p[0x3850]; int v; };
struct o3850_uint { char p[0x3850]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o42C_short { char p[0x42C]; short v; };
struct o430_short { char p[0x430]; short v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
int FUN_0c037bf6(int, int, int);
int FUN_0c05261c(int);
int FUN_0c059e60(int, int);
int FUN_0c073fe2(int, int);
int FUN_0c07a6aa(int);
int FUN_0c07d2c4(int, int);
int FUN_0c07da48(int);
int FUN_0c07e2f4(int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07eaf4(int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c081dfc(int);
int FUN_0c08515a(int, int);
int FUN_0c085cac(int, int, int);
int FUN_0c085d0c(int);
int FUN_0c085f66(int);
int FUN_0c0c28f6(int, int);
int FUN_0c0c2d56(int, int, int);
int FUN_0c12cb8c(int, int);
int FUN_0c14fc70(int, int);
int math_angle_between_points_xz(int, int);
float math_cos_angle16(int);
float math_signed_sqrt(float);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int FUN_0c06ee64(int a4, int a5, int a6);
int FUN_0c077a8e(int a4, int a5, int a6);
int FUN_0c099438(int a4, int a5, int a6);
int FUN_0c08bc8e(int a4, int a5, int a6, float f4);
int FUN_0c077d70(int a4, int a5, int a6);
int FUN_0c08bb94(int a4, int a5, int a6, float f4);
int FUN_0c0794ec(int a4, int a5, int a6);



int FUN_0c099438(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register float u0;

    FUN_0c037bf6(a4, a5, a6);
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    t0 = *(short *)((a4 + 0x1E));
    *(unsigned short *)((a4 + 0x1E)) = (t0 - 1);
    if ((int)(short)(t0 - 1) <= 0) {
        *(unsigned short *)((a4 + 0x1E)) = 0xA;
        FUN_0c07e2f4(a4, 0x64);
    }
    t0 = (((struct o20_short *)(a4))->v);
    (((struct o20_ushort *)(a4))->v) = (t0 - 1);
    if ((int)(short)(t0 - 1) <= 0) {
        FUN_0c059e60(a4, 0x20);
        (((struct o20_ushort *)(a4))->v) = 0x19;
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    if ((int)(short)(t0 - 1) <= 0) {
        t0 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t0, 0x1, 0x16, (t0), 0x1, 0x16);
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t0 = 0x15;
    } else {
        t1 = FUN_0c07ecc6(a4, 0x0, 0x0);
        if (t1 != 0) {
            if (((unsigned short)((((struct o430_short *)(a4))->v)) & 0x100) != 0) {
                (((struct o50_float *)(a4))->v) = ((((struct o0_float *)0xC09962C)->v));
                (((struct o5C_float *)(a4))->v) = ((((struct o4_float *)0xC09962C)->v));
            }
            if (0.0f > ((((struct o50_float *)(a4))->v))) {
                (((struct o50_float *)(a4))->v) = 0.0f;
            }
            FUN_0c12cb8c(a4, 0x1);
            t1 = (((struct o22_short *)(a4))->v);
            (((struct o22_ushort *)(a4))->v) = (t1 - 1);
            if ((short)(t1 - 1) == 0) {
                (((struct o22_ushort *)(a4))->v) = 0xA;
                FUN_0c05261c((*(int *)0xC241C1C));
                FUN_0c14fc70((*(signed char *)((a4 + 0x1))), (a4 + 0x28));
            }
        }
        FUN_0c07da48(a4);
        if (((unsigned short)((((struct o42C_short *)(a4))->v)) & 0x3C00) != 0) {
            (((struct o3850_uint *)(a4))->v) = ((*(int *)((0xC5413E8 + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x2F8)))) + (FUN_0c07eaf4(a4)));
            *(unsigned int *)((a4 + 0x38)) = ((((struct o3850_int *)(a4))->v));
        }
        u0 = (((struct o24_float *)0xC09962C)->v);
        (((struct o4C_float *)(a4))->v) = ((math_sin_angle16((*(int *)((a4 + 0x38))))) * u0);
        (((struct o54_float *)(a4))->v) = ((math_cos_angle16((*(int *)((a4 + 0x38))))) * u0);
        t0 = 0x54;
    }
    return t0;
}

int FUN_0c08bc8e(int a4, int a5, int a6, float f4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x17));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            t0 = FUN_0c037bf6(a4, a5, a6);
            if ((unsigned char)t0 != 0) {
                t0 = FUN_0c085f66(a4);
                if (t0 == 0) {
                    FUN_0c081dfc(a4);
                } else {
                    FUN_0c0c2d56(((((struct o376C_int *)(a4))->v)), 0x4, (*(signed char *)((a4 + 0x1))));
                }
                return FUN_0c085d0c(a4);
            }
            if (!(((((struct o50_float *)(a4))->v)) > 0.0f)) {
                t0 = FUN_0c07ecc6(a4, 0x0, 0x0);
                if (t0 != 0) {
                    *(unsigned int *)((a4 + 0x34)) = 0x0;
                    t0 = FUN_0c085f66(a4);
                    if (t0 == 0) {
                        FUN_0c081dfc(a4);
                    } else {
                        FUN_0c0c2d56(((((struct o376C_int *)(a4))->v)), 0x4, (*(signed char *)((a4 + 0x1))));
                    }
                    return FUN_0c085cac(a4, 0x6, 0x0);
                }
            }
            math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
            return math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
        }
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        t1 = (short)(t0 - 1);
        if ((int)(short)(t0 - 1) > 0) {
        } else {
            FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0x3A, 0xFFFFFFFF, 0x3, 0x3A);
            t0 = *(int *)(((0x118 + a4) + 0x4));
            t2 = (((struct o118_int *)(a4))->v);
            (((struct oA0_float *)(t0))->v) = 1.0f;
            (((struct o9C_float *)(t0))->v) = 1.0f;
            (((struct oA0_float *)(t2))->v) = 1.0f;
            (((struct o9C_float *)(t2))->v) = 1.0f;
            t0 = *(int *)(((0x118 + a4) + 0x4));
            t2 = (((struct o118_int *)(a4))->v);
            (((struct o98_float *)(t0))->v) = 1.0f;
            (((struct o98_float *)(t2))->v) = 1.0f;
            (((struct o94_float *)(t0))->v) = 1.0f;
            (((struct o94_float *)(t2))->v) = 1.0f;
            (((struct o50_float *)(a4))->v) = -0.0f;
            (((struct o5C_float *)(a4))->v) = ((((struct o37A0_float *)(a4))->v));
            (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
            t1 = 0x17;
        }
        return t1;
    }
    t0 = FUN_0c037bf6(a4, a5, a6);
    t1 = (unsigned char)t0;
    if ((unsigned char)t0 == 0) {
    } else {
        *(unsigned short *)((a4 + 0x1C)) = 0xA;
        (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
        t1 = 0x17;
    }
    return t1;
}

int FUN_0c077d70(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;

    FUN_0c037bf6(a4, a5, a6);
    if (((((struct o3774_int *)(a4))->v)) != 0) {
        t0 = math_angle_between_points_xz((a4 + 0x28), (((((struct o3774_int *)(a4))->v)) + 0x28));
        t1 = (((struct o3774_int *)(a4))->v);
        u0 = (((struct o28_float *)(t1))->v);
        u1 = (((struct o28_float *)(a4))->v);
        u2 = (((struct o30_float *)(t1))->v);
        u3 = (((struct o30_float *)(a4))->v);
        u4 = ((u3 - u2) * (u3 - u2));
        u4 = u4 + ((u1 - u0)) * ((u1 - u0));
        u0 = math_signed_sqrt(u4);
        (((struct o4C_float *)(a4))->v) = (((math_sin_angle16(t0)) * u0) / (float)(*(short *)((a4 + 0x1C))));
        (((struct o54_float *)(a4))->v) = (((math_cos_angle16(t0)) * u0) / (float)(*(short *)((a4 + 0x1C))));
        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
        (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o54_float *)(a4))->v)));
        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((((struct o2C_float *)(((((struct o3774_int *)(a4))->v))))->v)) - ((((struct o2C_float *)(a4))->v))) / (float)(*(short *)((a4 + 0x1C)))));
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    t1 = (short)(t0 - 1);
    if ((short)(t0 - 1) == 0) {
        *(unsigned short *)((a4 + 0x1C)) = 0x12C;
        if (((((struct o3774_int *)(a4))->v)) != 0) {
            *(unsigned int *)((a4 + 0x38)) = (unsigned short)((*(int *)((((((struct o3774_int *)(a4))->v)) + 0x38))) + 0x8000);
        }
        (((struct o3756_uchar *)(a4))->v) = 0x1;
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        t1 = 0x16;
    }
    return t1;
}

int FUN_0c08bb94(int a4, int a5, int a6, float f4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x17));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            t0 = FUN_0c037bf6(a4, a5, a6);
            if ((unsigned char)t0 != 0) {
                t1 = FUN_0c085f66(a4);
                if (t1 == 0) {
                    FUN_0c081dfc(a4);
                } else {
                    FUN_0c0c2d56(((((struct o376C_int *)(a4))->v)), 0x4, (*(signed char *)((a4 + 0x1))));
                }
                return FUN_0c085d0c(a4);
            }
            return (unsigned char)t0;
        }
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        t1 = (short)(t0 - 1);
        if ((int)(short)(t0 - 1) <= 0) {
            FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0x38, 0xFFFFFFFF, 0x3, 0x38);
            t0 = *(int *)(((0x118 + a4) + 0x4));
            t2 = (((struct o118_int *)(a4))->v);
            (((struct oA0_float *)(t0))->v) = 1.0f;
            (((struct o9C_float *)(t0))->v) = 1.0f;
            (((struct oA0_float *)(t2))->v) = 1.0f;
            (((struct o9C_float *)(t2))->v) = 1.0f;
            t0 = *(int *)(((0x118 + a4) + 0x4));
            t2 = (((struct o118_int *)(a4))->v);
            (((struct o98_float *)(t0))->v) = 1.0f;
            (((struct o98_float *)(t2))->v) = 1.0f;
            (((struct o94_float *)(t0))->v) = 1.0f;
            (((struct o94_float *)(t2))->v) = 1.0f;
            (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
            t1 = 0x17;
        }
        return t1;
    }
    t0 = FUN_0c037bf6(a4, a5, a6);
    t1 = (unsigned char)t0;
    if ((unsigned char)t0 != 0) {
        *(unsigned short *)((a4 + 0x1C)) = 0x13;
        (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
        t1 = 0x17;
    }
    return t1;
}

int FUN_0c0794ec(int a4, int a5, int a6)
{
    register int t0;
    register float u0;
    register float u1;

    FUN_0c037bf6(a4, a5, a6);
    u0 = (((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v);
    u1 = 1.30499995f;
    if ((u0 > 7.0f) && (26.0f > u0)) {
        u1 = 2.6099999f;
    }
    *(unsigned int *)((a4 + 0x38)) = (unsigned short)((*(int *)((a4 + 0x38))) + 0x1F8);
    u0 = ((((struct o28_float *)(a4))->v));
    u0 = u0 + u1 * (math_sin_angle16((*(int *)((a4 + 0x38)))));
    (((struct o28_float *)(a4))->v) = u0;
    u0 = ((((struct o30_float *)(a4))->v));
    u0 = u0 + u1 * (math_cos_angle16((*(int *)((a4 + 0x38)))));
    (((struct o30_float *)(a4))->v) = u0;
    t0 = FUN_0c07ecc6(a4, 0x0, 0x0);
    if (t0 != 1) {
        if (t0 != 2) {
            (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o37A0_float *)(a4))->v)));
            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
            if ((int)(short)(t0 - 1) > 0) {
                t0 = FUN_0c07d2c4(a4, (0x3744 + a4));
                if (t0 == 0) {
                    return FUN_0c085d0c(a4);
                }
                return t0;
            }
            return FUN_0c085d0c(a4);
        }
        return FUN_0c07a6aa(a4);
    }
    (((struct o50_float *)(a4))->v) = 0.0f;
    (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o37A0_float *)(a4))->v)));
    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    if ((int)(short)(t0 - 1) > 0) {
        t0 = FUN_0c07d2c4(a4, (0x3744 + a4));
        if (t0 == 0) {
            return FUN_0c085d0c(a4);
        }
        return t0;
    }
    return FUN_0c085d0c(a4);
}
