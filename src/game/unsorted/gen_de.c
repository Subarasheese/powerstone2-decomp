/* Straight-line functions with calls and guards (batch gen_de): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o118_int { char p[0x118]; int v; };
struct o12C_ushort { char p[0x12C]; unsigned short v; };
struct o14_float { char p[0x14]; float v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o1B_uchar { char p[0x1B]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o375A_uchar { char p[0x375A]; unsigned char v; };
struct o3760_int { char p[0x3760]; int v; };
struct o3780_float { char p[0x3780]; float v; };
struct o37C8_float { char p[0x37C8]; float v; };
struct o380C_float { char p[0x380C]; float v; };
struct o3810_float { char p[0x3810]; float v; };
struct o3814_float { char p[0x3814]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
int FUN_0c037bf6(int);
int FUN_0c059e60(int, int);
int FUN_0c059f20(int, int);
int FUN_0c064f80(int);
int FUN_0c07d030(int, int);
int FUN_0c07d1fc(int);
int FUN_0c07daea(int, int, int);
int FUN_0c07e2f4(int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c080320(int, float);
int FUN_0c085cac(int, int, int);
int FUN_0c085d0c(int);
int FUN_0c0a3058(int, int, int, int);
int FUN_0c0c2ab6(int, int);
int FUN_0c0cb6a4(int);
int FUN_0c0cb776(int);
int FUN_0c124794(int, int);
int FUN_0c13f5dc(int, int);
int FUN_0c13f734(int, int);
int FUN_0c141358(int, int);
int FUN_0c14f824(int, int);
int math_atan_angle16(float);
float math_cos_angle16(int);
int math_mat_get_translate(int, int);
float math_signed_sqrt(float);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int FUN_0c094230(int a4);
int FUN_0c0a3cf8(int a4);
int FUN_0c0ad560(int a4);
int FUN_0c0acc8c(int a4);
int FUN_0c0938dc(int a4);
int FUN_0c09d1d4(int a4);
int FUN_0c0ba2c4(int a4);
int FUN_0c0cb7b8(int a4);

int FUN_0c094230(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u6;

    u0 = (((struct o28_float *)(a4))->v);
    u1 = (((struct o380C_float *)(a4))->v);
    u2 = (((struct o2C_float *)(a4))->v);
    u3 = (((struct o3810_float *)(a4))->v);
    u4 = (((struct o30_float *)(a4))->v);
    u5 = (((struct o3814_float *)(a4))->v);
    u6 = (u1 - u0);
    if ((u1 - u0) == 0.0f) {
        u6 = 9.99999997e-07f;
    }
    u0 = (u3 - u2);
    if ((u3 - u2) == 0.0f) {
        u0 = 9.99999997e-07f;
    }
    u1 = (u5 - u4);
    if ((u5 - u4) == 0.0f) {
        u1 = 9.99999997e-07f;
    }
    t0 = math_atan_angle16(((-u1) / u6));
    t1 = t0;
    if (0.0f > u6) {
        t1 = (t0 + 0x8000);
    }
    u2 = (u1 * u1);
    u2 = u2 + u6 * u6;
    *(unsigned int *)((a4 + 0x38)) = (unsigned short)(t1 + 0x4000);
    u1 = math_signed_sqrt(u2);
    math_atan_angle16(((-u1) / u0));
    FUN_0c037bf6(a4);
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    if ((short)(t0 - 1) == 0) {
        if ((*(signed char *)((a4 + 0x375A))) == 1) {
            t0 = *(signed char *)((a4 + 0x1));
            t1 = 0x17;
            t2 = (t0);
            t3 = t0;
            t0 = 0x17;
        } else {
            t3 = *(signed char *)((a4 + 0x1));
            t1 = 0x1A;
            t2 = (t3);
            t0 = 0x1A;
        }
        FUN_0c07e79c(a4, t3, 0x1, t0, t2, 0x1, t1);
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
        *(unsigned short *)((a4 + 0x1C)) = 0x0;
        *(unsigned short *)((a4 + 0x1E)) = 0x0;
        (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
    }
    if ((*(short *)((a4 + 0x1C))) == 85) {
        FUN_0c059e60(a4, 0xA);
    }
    t0 = *(short *)((a4 + 0x1C));
    if (t0 == 27) {
        return FUN_0c07d030(a4, 0x1);
    }
    return t0;
}

int FUN_0c0a3cf8(int a4)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;
    float u2;

    t1 = *(short *)((a4 + 0x1E));
    *(unsigned short *)((a4 + 0x1E)) = (t1 + 0x1);
    if ((short)(t1 + 0x1) == 10) {
        FUN_0c059f20((*(signed char *)((a4 + 0x1))), (*(signed char *)((a4 + 0x135))));
    }
    t1 = FUN_0c064f80(((((struct o3760_int *)(a4))->v)));
    if ((t1 != 0) && ((t0 = (((struct o3760_int *)(a4))->v), u0 = (((struct o2C_float *)(a4))->v), u1 = (((struct o2C_float *)(t0))->v), u0 > u1) && (u2 = (((struct o3780_float *)(a4))->v), 200.0f > u2))) {
        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((((struct o28_float *)(((((struct o3760_int *)(a4))->v))))->v)) - ((((struct o28_float *)(a4))->v))) / 6.0f));
        (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((((struct o30_float *)(((((struct o3760_int *)(a4))->v))))->v)) - ((((struct o30_float *)(a4))->v))) / 6.0f));
    }
    if ((*(signed char *)((a4 + 0x131))) != 0) {
        t0 = FUN_0c07d1fc(a4);
        if (t0 != 0) {
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            return FUN_0c0a3058(a4, (*(signed char *)((a4 + 0x1))), 0x2, 0x5);
        }
    }
    t0 = FUN_0c07ecc6(a4, 0x0, 0x0);
    if (t0 != 0) {
        if (t0 == 2) {
            return FUN_0c085cac(a4, 0x6, 0x0);
        }
        (((struct o15_uchar *)(a4))->v) = 0x5;
        FUN_0c0a3058(a4, (*(signed char *)((a4 + 0x1))), 0x2, 0x7);
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
        return FUN_0c07daea(a4, t1, t0);
    }
    FUN_0c037bf6(a4);
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    return math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
}

int FUN_0c0ad560(int a4)
{
    int stk[3];
    int t10;
    register int t14;
    int t21;
    register int t40;
    register int t33;

    *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
    if ((*(short *)((a4 + 0x1C))) == 40) {
        FUN_0c059e60(a4, 0x22);
        if ((*(signed char *)((a4 + 0x375A))) == 1) {
            FUN_0c080320(a4, 1.0f);
        }
    }
    t10 = *(short *)((a4 + 0x1C));
    if ((t10 != 38) && ((t10 != 47) && ((t10 != 56) && ((t10 != 65) && ((t10 != 74) && ((t10 != 83) && ((t10 != 92) && ((t10 != 101) && ((t10 != 110) && ((t10 != 119) && ((t10 != 0x80) && (t10 != 0x89)))))))))))) {
    } else {
        t14 = 0x1;
        if ((*(short *)((a4 + 0x1E))) == 0) {
            t14 = 0x0;
        }
        FUN_0c13f734(a4, t14);
    }
    t21 = *(short *)((a4 + 0x1C));
    if ((t21 != 41) && ((t21 != 50) && ((t21 != 59) && ((t21 != 68) && ((t21 != 77) && ((t21 != 86) && ((t21 != 95) && ((t21 != 104) && ((t21 != 113) && ((t21 != 122) && ((t21 != 0x83) && (t21 != 0x8C)))))))))))) {
    } else {
        if ((*(short *)((a4 + 0x1E))) == 0) {
            FUN_0c13f5dc(a4, 0x0);
            FUN_0c141358(a4, 0x0);
            FUN_0c141358(a4, 0x1);
            FUN_0c141358(a4, 0x2);
            t33 = 0x1;
        } else {
            FUN_0c13f5dc(a4, 0x1);
            FUN_0c141358(a4, 0x3);
            FUN_0c141358(a4, 0x4);
            FUN_0c141358(a4, 0x5);
            t33 = 0x0;
        }
        *(unsigned short *)((a4 + 0x1E)) = t33;
    }
    t40 = FUN_0c037bf6(a4);
    if ((unsigned char)t40 != 0) {
        return FUN_0c085d0c(a4);
    }
    return (unsigned char)t40;
}

int FUN_0c0acc8c(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u6;

    u0 = (((struct o28_float *)(a4))->v);
    u1 = (((struct o380C_float *)(a4))->v);
    u2 = (((struct o2C_float *)(a4))->v);
    u3 = (((struct o3810_float *)(a4))->v);
    u4 = (((struct o30_float *)(a4))->v);
    u5 = (((struct o3814_float *)(a4))->v);
    u6 = (u1 - u0);
    if ((u1 - u0) == 0.0f) {
        u6 = 9.99999997e-07f;
    }
    u0 = (u3 - u2);
    if ((u3 - u2) == 0.0f) {
        u0 = 9.99999997e-07f;
    }
    u1 = (u5 - u4);
    if ((u5 - u4) == 0.0f) {
        u1 = 9.99999997e-07f;
    }
    t0 = math_atan_angle16(((-u1) / u6));
    t1 = t0;
    if (0.0f > u6) {
        t1 = (t0 + 0x8000);
    }
    *(unsigned int *)((a4 + 0x38)) = (unsigned short)(t1 + 0x4000);
    if ((*(signed char *)((a4 + 0x375A))) != 0) {
        u2 = (u1 * u1);
        u2 = u2 + u6 * u6;
        u1 = math_signed_sqrt(u2);
        t0 = math_atan_angle16(((-u1) / u0));
        t1 = t0;
        if (0.0f > u0) {
            t1 = (t0 + 0x8000);
        }
        *(unsigned int *)((a4 + 0x34)) = (-(unsigned short)(t1 + 0x4000));
    }
    (((struct o50_float *)(a4))->v) = 0.0f;
    (((struct o60_float *)(a4))->v) = 0.0f;
    (((struct o5C_float *)(a4))->v) = 0.0f;
    (((struct o58_float *)(a4))->v) = 0.0f;
    FUN_0c07d030(a4, 0x0);
    FUN_0c059e60(a4, 0x9);
    if ((*(signed char *)((a4 + 0x375A))) == 0) {
        t0 = *(signed char *)((a4 + 0x1));
        t1 = (t0);
        t2 = t0;
    } else {
        t0 = *(signed char *)((a4 + 0x1));
        t1 = (t0);
        t2 = t0;
    }
    FUN_0c07e79c(a4, t2, 0x1, 0xE, t1, 0x1, 0xE);
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
    *(unsigned short *)((a4 + 0x1C)) = 0x0;
    *(unsigned short *)((a4 + 0x1E)) = 0x0;
    (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
    return 0x17;
}

int FUN_0c0938dc(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u6;

    u0 = (((struct o28_float *)(a4))->v);
    u1 = (((struct o380C_float *)(a4))->v);
    u2 = (((struct o2C_float *)(a4))->v);
    u3 = (((struct o3810_float *)(a4))->v);
    u4 = (((struct o30_float *)(a4))->v);
    u5 = (((struct o3814_float *)(a4))->v);
    u6 = (u1 - u0);
    if ((u1 - u0) == 0.0f) {
        u6 = 9.99999997e-07f;
    }
    u0 = (u3 - u2);
    if ((u3 - u2) == 0.0f) {
        u0 = 9.99999997e-07f;
    }
    u1 = (u5 - u4);
    if ((u5 - u4) == 0.0f) {
        u1 = 9.99999997e-07f;
    }
    t0 = math_atan_angle16(((-u1) / u6));
    t1 = t0;
    if (0.0f > u6) {
        t1 = (t0 + 0x8000);
    }
    *(unsigned int *)((a4 + 0x38)) = (unsigned short)(t1 + 0x4000);
    if ((*(signed char *)((a4 + 0x375A))) != 0) {
        u2 = (u1 * u1);
        u2 = u2 + u6 * u6;
        u1 = math_signed_sqrt(u2);
        t0 = math_atan_angle16(((-u1) / u0));
        t1 = t0;
        if (0.0f > u0) {
            t1 = (t0 + 0x8000);
        }
        *(unsigned int *)((a4 + 0x34)) = (-(unsigned short)(t1 + 0x4000));
    }
    (((struct o50_float *)(a4))->v) = 0.0f;
    (((struct o60_float *)(a4))->v) = 0.0f;
    (((struct o5C_float *)(a4))->v) = 0.0f;
    (((struct o58_float *)(a4))->v) = 0.0f;
    FUN_0c07d030(a4, 0x0);
    if ((*(signed char *)((a4 + 0x375A))) == 0) {
        t0 = *(signed char *)((a4 + 0x1));
        t1 = 0xE;
        t2 = (t0);
        t3 = t0;
        t0 = 0xE;
    } else {
        t3 = *(signed char *)((a4 + 0x1));
        t1 = 0x11;
        t2 = (t3);
        t0 = 0x11;
    }
    FUN_0c07e79c(a4, t3, 0x1, t0, t2, 0x1, t1);
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
    *(unsigned short *)((a4 + 0x1C)) = 0x0;
    *(unsigned short *)((a4 + 0x1E)) = 0x0;
    (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
    return 0x17;
}

int FUN_0c09d1d4(int a4)
{
    int t0;
    int t1;

    if (((*(signed char *)((a4 + 0x131))) != 0) && (t0 = (((struct o22_short *)(a4))->v), (int)t0 > 0)) {
        t0 = *(short *)((a4 + 0x1E));
        *(unsigned short *)((a4 + 0x1E)) = (t0 - 1);
        if ((int)(short)(t0 - 1) <= 0) {
            (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) - 1);
            t0 = 0x66;
            if ((int)((((struct o22_short *)(a4))->v)) > 0) {
                t0 = 0x63;
            }
            FUN_0c07e2f4(a4, t0);
        }
    }
    FUN_0c037bf6(a4);
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    if ((0.0f > ((((struct o50_float *)(a4))->v))) && (t1 = (((struct o20_short *)(a4))->v), (int)t1 > 0)) {
        t0 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t0, 0x1, 0x15, (t0), 0x1, 0x15);
        FUN_0c080320(a4, 0.675000012f);
        (((struct o54_float *)(a4))->v) = 0.0f;
        (((struct o50_float *)(a4))->v) = 0.0f;
        (((struct o4C_float *)(a4))->v) = 0.0f;
        (((struct o60_float *)(a4))->v) = 0.0f;
        (((struct o5C_float *)(a4))->v) = 0.0f;
        (((struct o58_float *)(a4))->v) = 0.0f;
        (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
        (((struct o1B_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x1B))) + 0x1);
        return 0x1B;
    }
    (((struct o20_ushort *)(a4))->v) = (FUN_0c07ecc6(a4, 0x0, 0x0));
    if ((int)((((struct o20_short *)(a4))->v)) > 0) {
        if ((int)((((struct o22_short *)(a4))->v)) > 0) {
            if (((((struct o20_short *)(a4))->v)) == 2) {
                (((struct o375A_uchar *)(a4))->v) = 0x0;
                return FUN_0c085cac(a4, 0x6, 0x0);
            }
            return (FUN_0c07e2f4(a4, 0x66));
        }
        return 0x22;
    }
    return 0x20;
}

int FUN_0c0ba2c4(int a4)
{
    int stk[3];
    register int t33;
    register int t42;

    if ((*(short *)((a4 + 0x1C))) != 0) {
        if ((*(signed char *)((a4 + 0x375A))) == 1) {
            if (((int)((unsigned int)(*(int *)0xC542260) % (unsigned int)0x11)) == 0) {
                math_mat_get_translate(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC5325A4))) + 0x28), ((int)stk + 0));
                *(float *)(((int)stk + 4)) = ((((struct o2C_float *)(a4))->v));
                FUN_0c14f824((*(signed char *)((a4 + 0x1))), ((int)stk + 0));
                math_mat_get_translate(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532598))) + 0x28), ((int)stk + 0));
                *(float *)(((int)stk + 4)) = ((((struct o2C_float *)(a4))->v));
                FUN_0c14f824((*(signed char *)((a4 + 0x1))), ((int)stk + 0));
            }
        }
        math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
        math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
    }
    t33 = FUN_0c037bf6(a4);
    t42 = (unsigned char)t33;
    if ((unsigned char)t33 != 0) {
        FUN_0c080320(a4, 1.0f);
        (((struct o50_float *)(a4))->v) = 10.0f;
        (((struct o5C_float *)(a4))->v) = -1.0f;
        (((struct o60_float *)(a4))->v) = 0.0f;
        (((struct o58_float *)(a4))->v) = 0.0f;
        (((struct o54_float *)(a4))->v) = 0.0f;
        (((struct o4C_float *)(a4))->v) = 0.0f;
        *(unsigned short *)((a4 + 0x1C)) = 0x0;
        *(unsigned short *)((a4 + 0x1E)) = 0x0;
        (((struct o20_ushort *)(a4))->v) = 0x0;
        (((struct o22_ushort *)(a4))->v) = 0x0;
        (((struct o37C8_float *)(a4))->v) = ((((struct o2C_float *)(a4))->v));
        FUN_0c124794(a4, 0x0);
        FUN_0c124794(a4, 0x1);
        FUN_0c124794(a4, 0x2);
        FUN_0c124794(a4, 0x2);
        FUN_0c07d030(a4, 0x1);
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t42 = 0x15;
    }
    return t42;
}

int FUN_0c0cb7b8(int a4)
{
    register int t1;
    register float u0;
    register float u1;
    register float u2;

    (((struct oA8_uchar *)(a4))->v) = 0x1;
    FUN_0c0cb776(a4);
    FUN_0c0c2ab6(a4, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738CA))));
    FUN_0c0cb6a4(a4);
    (((struct o12C_ushort *)(a4))->v) = 0x0;
    u0 = (((struct o0_float *)0xC0CB8F0)->v);
    u1 = (((struct o4_float *)0xC0CB8F0)->v);
    t1 = *(signed char *)((a4 + 0x1B));
    if (t1 != 1) {
        if (t1 != 5) {
            if (t1 != 6) {
                (((struct o5C_float *)(a4))->v) = 0.0f;
                (((struct o60_float *)(a4))->v) = 0.0f;
                (((struct o58_float *)(a4))->v) = 0.0f;
                (((struct o50_float *)(a4))->v) = 0.0f;
                (((struct o54_float *)(a4))->v) = 0.0f;
                (((struct o4C_float *)(a4))->v) = 0.0f;
                (((struct o50_float *)(a4))->v) = u0;
                (((struct o5C_float *)(a4))->v) = u1;
                t1 = ((*(signed char *)((a4 + 0x15))) + 0x1);
            } else {
                (((struct o50_float *)(a4))->v) = u0;
                (((struct o5C_float *)(a4))->v) = u1;
                *(unsigned int *)((a4 + 0x38)) = 0x4000;
                u2 = (((struct o14_float *)0xC0CB8F0)->v);
                (((struct o4C_float *)(a4))->v) = ((math_sin_angle16(0x4000)) * u2);
                (((struct o54_float *)(a4))->v) = ((math_cos_angle16((*(int *)((a4 + 0x38))))) * u2);
                (((struct o60_float *)(a4))->v) = 0.0f;
                (((struct o58_float *)(a4))->v) = 0.0f;
                t1 = 0x2;
            }
        } else {
            (((struct o50_float *)(a4))->v) = u0;
            (((struct o5C_float *)(a4))->v) = u1;
            *(unsigned int *)((a4 + 0x38)) = 0x4000;
            u0 = (((struct o8_float *)0xC0CB8F0)->v);
            (((struct o4C_float *)(a4))->v) = ((math_sin_angle16(0x4000)) * u0);
            (((struct o54_float *)(a4))->v) = ((math_cos_angle16((*(int *)((a4 + 0x38))))) * u0);
            (((struct o60_float *)(a4))->v) = 0.0f;
            (((struct o58_float *)(a4))->v) = 0.0f;
            t1 = 0x2;
        }
        (((struct o15_uchar *)(a4))->v) = t1;
    } else {
        (((struct o15_uchar *)(a4))->v) = 0x2;
    }
    return 0x15;
}
