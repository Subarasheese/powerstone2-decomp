/* Straight-line functions with calls and guards (batch gen_df): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o380C_float { char p[0x380C]; float v; };
struct o3810_float { char p[0x3810]; float v; };
struct o3814_float { char p[0x3814]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
int FUN_0c037bf6(int);
int FUN_0c059e60(int, int);
int FUN_0c085d0c(int, int, int, int);
int FUN_0c129ec4(int, int);
int FUN_0c13f398(int);
int FUN_0c140130(int);
int FUN_0c140b18(int, int);
int math_atan_angle16(float);
float math_signed_sqrt(float);
int math_vec3_accumulate(int, int);
int FUN_0c0acff2(int a4);
int FUN_0c093eee(int a4);

int FUN_0c0acff2(int a4)
{
    int stk[6];
    register float u5;
    register int t13;
    register float u14;
    register float u15;
    register float u16;
    register float u17;
    register float u18;
    register float u19;
    register float u20;
    register float u22;
    register float u24;
    register int t26;
    register int t28;
    register float u31;
    register float t32;
    register int t33;
    register int t35;
    register int t41;
    register int t45;

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
    t13 = *(int *)((a4 + 0x10));
    u14 = (((struct o28_float *)(a4))->v);
    u15 = (((struct o28_float *)(t13))->v);
    u16 = (((struct o2C_float *)(t13))->v);
    u17 = (((struct o2C_float *)(a4))->v);
    u18 = (((struct o30_float *)(t13))->v);
    u19 = (((struct o30_float *)(a4))->v);
    u20 = (u15 - u14);
    if ((u15 - u14) == 0.0f) {
        u20 = 9.99999997e-07f;
    }
    u22 = (u16 - u17);
    if ((u16 - u17) == 0.0f) {
        u22 = 9.99999997e-07f;
    }
    u24 = (u18 - u19);
    if ((u18 - u19) == 0.0f) {
        u24 = 9.99999997e-07f;
    }
    t26 = math_atan_angle16(((-u24) / u20));
    t28 = t26;
    if (0.0f > u20) {
        t28 = (t26 + 0x8000);
    }
    *(unsigned int *)((a4 + 0x38)) = (unsigned short)(t28 + 0x4000);
    if ((*(signed char *)((a4 + 0x375A))) != 0) {
        u31 = (u24 * u24);
        u31 = u31 + u20 * u20;
        t32 = math_signed_sqrt(u31);
        t33 = math_atan_angle16(((-t32) / u22));
        t35 = t33;
        if (0.0f > u22) {
            t35 = (t33 + 0x8000);
        }
        *(unsigned int *)((a4 + 0x34)) = (-(unsigned short)(t35 + 0x4000));
    }
    t41 = FUN_0c037bf6(a4);
    if ((unsigned char)t41 != 0) {
        FUN_0c085d0c(a4, 0x0, 0x0, 0x0);
    }
    t45 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t45 + 0x1);
    if ((short)(t45 + 0x1) == 6) {
        FUN_0c13f398(a4);
        if ((*(signed char *)((a4 + 0x375A))) == 0) {
            FUN_0c140130(a4);
        }
        return FUN_0c140b18(a4, 0x2);
    }
    return (short)(t45 + 0x1);
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
