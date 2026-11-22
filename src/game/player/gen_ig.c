/* Straight-line functions with calls and guards (batch gen_ig): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o3760_int { char p[0x3760]; int v; };
struct o377C_int { char p[0x377C]; int v; };
struct o3780_float { char p[0x3780]; float v; };
struct o3790_float { char p[0x3790]; float v; };
struct o380C_float { char p[0x380C]; float v; };
struct o3810_float { char p[0x3810]; float v; };
struct o3814_float { char p[0x3814]; float v; };
struct o40_float { char p[0x40]; float v; };
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
int FUN_0c037bf6(int);
int FUN_0c038362(int);
int FUN_0c059df2(int, int);
int FUN_0c059e60(int, int);
int FUN_0c059f20(int, int);
int FUN_0c064f80(int);
int FUN_0c07d1fc(int);
int FUN_0c07daea(int, int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07eaf4(int);
int FUN_0c07ebd0(int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c085cac(int, int, int);
int FUN_0c085d0c(int, int, int, int);
int FUN_0c0a3058(int, int, int, int);
int FUN_0c129ec4(int, int);
int FUN_0c13f398(int);
int FUN_0c140130(int);
int FUN_0c140b18(int, int);
int math_atan_angle16(float);
float math_cos_angle16(int);
float math_signed_sqrt(float);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int FUN_0c070c7c(int a4, float f4);
int FUN_0c06f4e8(int a4);
int FUN_0c0acdf8(int a4);
int FUN_0c0a3cf8(int a4);
int FUN_0c093eee(int a4);

int FUN_0c070c7c(int a4, float f4)
{
    register int t0;
    register int t1;
    float u0;
    register float u1;

    if ((*(signed char *)((((((struct o377C_int *)(a4))->v)) + 0x0))) == 0) {
        t0 = FUN_0c064f80(((((struct o377C_int *)(a4))->v)));
        if ((t0 != 0) && (u0 = (((struct o3810_float *)(a4))->v), u1 = (((struct o2C_float *)(a4))->v), u1 > u0)) {
            u0 = ((((((struct o30_float *)(a4))->v)) - ((((struct o3814_float *)(a4))->v))) * (((((struct o30_float *)(a4))->v)) - ((((struct o3814_float *)(a4))->v))));
            u0 = u0 + ((((((struct o28_float *)(a4))->v)) - ((((struct o380C_float *)(a4))->v)))) * ((((((struct o28_float *)(a4))->v)) - ((((struct o380C_float *)(a4))->v))));
            u1 = math_signed_sqrt(u0);
            if (200.0f > u1) {
                (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((((struct o380C_float *)(a4))->v)) - ((((struct o28_float *)(a4))->v))) / 6.0f));
                (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((((struct o3814_float *)(a4))->v)) - ((((struct o30_float *)(a4))->v))) / 6.0f));
            }
        }
    }
    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    }
    math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    if ((*(signed char *)((a4 + 0x131))) != 0) {
        t0 = FUN_0c07d1fc(a4);
        if (t0 != 0) {
            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 180.0f);
            t0 = *(signed char *)((a4 + 0x1));
            FUN_0c07e79c(a4, t0, 0x2, 0x6, (t0), 0x2, 0x6);
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            return 0x15;
        }
    }
    if (0.0f > ((((struct o50_float *)(a4))->v))) {
        t0 = FUN_0c07ecc6(a4, 0x0, 0x0);
        if (t0 != 0) {
            if (t0 == 2) {
                return FUN_0c085cac(a4, 0x6, 0x0);
            }
            t0 = 0x9;
            if ((*(signed char *)((a4 + 0x2))) != 15) {
                t0 = 0x7;
            }
            t1 = *(signed char *)((a4 + 0x1));
            FUN_0c07e79c(a4, t1, 0x2, t0, (t1), 0x2, (t0));
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
            FUN_0c07daea(a4, t1, t0);
            (((struct o15_uchar *)(a4))->v) = 0x5;
            return 0x15;
        }
        return FUN_0c038362(a4);
    }
    return FUN_0c038362(a4);
}

int FUN_0c06f4e8(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;

    t0 = FUN_0c07ebd0(a4);
    if (t0 == 0) {
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x2, 0x5, 0xFFFFFFFF, 0x2, 0x5);
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
        (((struct o15_uchar *)(a4))->v) = 0x1;
        return 0x15;
    }
    t0 = *(short *)((0xC5413E8 + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x2F8)));
    t1 = FUN_0c07eaf4(a4);
    t2 = *(int *)((a4 + 0x38));
    t3 = (unsigned short)((t0 + t1) - t2);
    if ((0x8000 & (unsigned short)((t0 + t1) - t2)) != 0) {
        t3 = ((unsigned short)((t0 + t1) - t2) | 0xFFFF0000);
    }
    if ((int)t3 <= (int)0xFFFFF8E4) {
        *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) - 0x71C);
    } else {
        if ((int)t3 >= (int)0x71C) {
            *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + 0x71C);
        } else {
            *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + (((int)((unsigned int)((int)((unsigned int)t3 + (unsigned int)0x0)) + ((((int)0x0 > (int)t3)) ? 1u : 0u))) >> 1));
        }
    }
    *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) & 0xFFFF);
    t0 = *(signed char *)((a4 + 0x2));
    t1 = *(signed char *)(((0x371C + a4) + 0x0));
    (((struct o3790_float *)(a4))->v) = ((((struct o40_float *)(((((((t1 << 1) + t1) << 2) << 2) << 1) + ((((((t0 << 1) + t0) << 2) << 2) << 2) + 0xC259E54))))->v));
    (((struct o4C_float *)(a4))->v) = ((math_sin_angle16((*(int *)((a4 + 0x38))))) * ((((struct o3790_float *)(a4))->v)));
    (((struct o54_float *)(a4))->v) = ((math_cos_angle16((*(int *)((a4 + 0x38))))) * ((((struct o3790_float *)(a4))->v)));
    (((struct o60_float *)(a4))->v) = 0.0f;
    (((struct o58_float *)(a4))->v) = 0.0f;
    (((struct o5C_float *)(a4))->v) = 0.0f;
    (((struct o50_float *)(a4))->v) = 0.0f;
    FUN_0c037bf6(a4);
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    u0 = (((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v);
    if (((int)u0 != 19) && ((int)u0 != 39)) {
        return (int)u0;
    }
    return FUN_0c059df2((*(signed char *)((a4 + 0x1))), 0xE);
}

int FUN_0c0acdf8(int a4)
{
    int stk[6];
    register float u5;
    register int t13;
    register int t17;
    register float u18;
    register float u19;
    register float u20;
    register float u21;
    register float u22;
    register float u23;
    register float u24;
    register float u26;
    register float u28;
    register int t30;
    register int t32;
    register float u35;
    register float t36;
    register int t37;
    register int t39;
    register int t67;
    register int t60;

    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    u5 = 20.0f;
    if ((*(signed char *)((a4 + 0x375A))) == 0) {
        u5 = 10.0f;
    }
    (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) - (((((struct o4C_float *)(a4))->v)) / u5));
    (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) - (((((struct o50_float *)(a4))->v)) / u5));
    (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) - (((((struct o54_float *)(a4))->v)) / u5));
    t13 = FUN_0c037bf6(a4);
    if ((unsigned char)t13 != 0) {
        FUN_0c085d0c(a4, 0x0, 0x0, 0x0);
    }
    t17 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t17 + 0x1);
    if ((short)(t17 + 0x1) == 16) {
        u18 = (((struct o28_float *)(a4))->v);
        u19 = (((struct o380C_float *)(a4))->v);
        u20 = (((struct o2C_float *)(a4))->v);
        u21 = (((struct o3810_float *)(a4))->v);
        u22 = (((struct o30_float *)(a4))->v);
        u23 = (((struct o3814_float *)(a4))->v);
        u24 = (u19 - u18);
        if ((u19 - u18) == 0.0f) {
            u24 = 9.99999997e-07f;
        }
        u26 = (u21 - u20);
        if ((u21 - u20) == 0.0f) {
            u26 = 9.99999997e-07f;
        }
        u28 = (u23 - u22);
        if ((u23 - u22) == 0.0f) {
            u28 = 9.99999997e-07f;
        }
        t30 = math_atan_angle16(((-u28) / u24));
        t32 = t30;
        if (0.0f > u24) {
            t32 = (t30 + 0x8000);
        }
        *(unsigned int *)((a4 + 0x38)) = (unsigned short)(t32 + 0x4000);
        if ((*(signed char *)((a4 + 0x375A))) != 0) {
            u35 = (u28 * u28);
            u35 = u35 + u24 * u24;
            t36 = math_signed_sqrt(u35);
            t37 = math_atan_angle16(((-t36) / u26));
            t39 = t37;
            if (0.0f > u26) {
                t39 = (t37 + 0x8000);
            }
            *(unsigned int *)((a4 + 0x34)) = (-(unsigned short)(t39 + 0x4000));
        }
        FUN_0c140b18(a4, 0x0);
        FUN_0c13f398(a4);
        if ((*(signed char *)((a4 + 0x375A))) == 0) {
            FUN_0c140130(a4);
        }
    }
    t67 = 0x375A;
    if ((*(signed char *)((a4 + 0x375A))) != 0) {
        t60 = *(short *)((a4 + 0x1C));
        t67 = t60;
        if (t60 == 30) {
            *(unsigned int *)((a4 + 0x34)) = 0x0;
            (((struct o5C_float *)(a4))->v) = -1.0f;
            (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
            t67 = 0x17;
        }
    }
    return t67;
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

int FUN_0c093eee(int a4)
{
    int stk[6];
    register float u5;
    register int t13;
    register int t17;
    register float u18;
    register float u19;
    register float u20;
    register float u21;
    register float u22;
    register float u23;
    register float u24;
    register float u26;
    register float u28;
    register int t30;
    register int t32;
    register float u35;
    register float t36;
    register int t37;
    register int t39;

    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    u5 = 20.0f;
    if ((*(signed char *)((a4 + 0x375A))) == 0) {
        u5 = 10.0f;
    }
    (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) - (((((struct o4C_float *)(a4))->v)) / u5));
    (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) - (((((struct o50_float *)(a4))->v)) / u5));
    (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) - (((((struct o54_float *)(a4))->v)) / u5));
    t13 = FUN_0c037bf6(a4);
    if ((unsigned char)t13 != 0) {
        FUN_0c085d0c(a4, 0x0, 0x0, 0x0);
    }
    t17 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t17 + 0x1);
    if ((short)(t17 + 0x1) == 29) {
        u18 = (((struct o28_float *)(a4))->v);
        u19 = (((struct o380C_float *)(a4))->v);
        u20 = (((struct o2C_float *)(a4))->v);
        u21 = (((struct o3810_float *)(a4))->v);
        u22 = (((struct o30_float *)(a4))->v);
        u23 = (((struct o3814_float *)(a4))->v);
        u24 = (u19 - u18);
        if ((u19 - u18) == 0.0f) {
            u24 = 9.99999997e-07f;
        }
        u26 = (u21 - u20);
        if ((u21 - u20) == 0.0f) {
            u26 = 9.99999997e-07f;
        }
        u28 = (u23 - u22);
        if ((u23 - u22) == 0.0f) {
            u28 = 9.99999997e-07f;
        }
        t30 = math_atan_angle16(((-u28) / u24));
        t32 = t30;
        if (0.0f > u24) {
            t32 = (t30 + 0x8000);
        }
        *(unsigned int *)((a4 + 0x38)) = (unsigned short)(t32 + 0x4000);
        if ((*(signed char *)((a4 + 0x375A))) != 0) {
            u35 = (u28 * u28);
            u35 = u35 + u24 * u24;
            t36 = math_signed_sqrt(u35);
            t37 = math_atan_angle16(((-t36) / u26));
            t39 = t37;
            if (0.0f > u26) {
                t39 = (t37 + 0x8000);
            }
            *(unsigned int *)((a4 + 0x34)) = (-(unsigned short)(t39 + 0x4000));
        }
        FUN_0c129ec4(a4, 0x2);
        FUN_0c059e60(a4, 0x1);
        return FUN_0c059e60(a4, 0x20);
    }
    return (short)(t17 + 0x1);
}
