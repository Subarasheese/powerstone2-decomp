/* Straight-line functions with calls and guards (batch gen_bx): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o131_uchar { char p[0x131]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o168_float { char p[0x168]; float v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o1A_uchar { char p[0x1A]; unsigned char v; };
struct o1B_uchar { char p[0x1B]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o3728_uchar { char p[0x3728]; unsigned char v; };
struct o372A_uchar { char p[0x372A]; unsigned char v; };
struct o376C_int { char p[0x376C]; int v; };
struct o380C_float { char p[0x380C]; float v; };
struct o3810_float { char p[0x3810]; float v; };
struct o3814_float { char p[0x3814]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct oE4_int { char p[0xE4]; int v; };
struct oF4_int { char p[0xF4]; int v; };
int FUN_0c037bf6(int, int, int);
int FUN_0c038362(int);
int FUN_0c059e60(int, int);
int FUN_0c064f80(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c07f610(int);
int FUN_0c081dfc(int);
int FUN_0c085cac(int, int, int);
int FUN_0c085f66(int);
int FUN_0c0b507a(int, int, int);
int FUN_0c0b5b8e(int, int);
int FUN_0c0c2d56(int, int, int);
int FUN_0c14ada0(int, int, int, int, int);
int FUN_0c187798(int);
int math_atan_angle16(float);
float math_cos_angle16(int);
float math_signed_sqrt(float);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int nlRand(void);
int FUN_0c0b5c58(int a4, int a5, int a6);
int FUN_0c08a00e(int a4, int a5, int a6);


int FUN_0c08a00e(int a4, int a5, int a6)
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

    t0 = *(signed char *)((a4 + 0x17));
    if (t0 != 0) {
        if (t0 == 1) {
            FUN_0c037bf6(a4, a5, a6);
            t1 = (((struct o22_short *)(a4))->v);
            (((struct o22_ushort *)(a4))->v) = (t1 - 1);
            if ((short)(t1 - 1) != 0) {
                if (!(((((struct o50_float *)(a4))->v)) > 0.0f)) {
                    t1 = FUN_0c07ecc6(a4, 0x0, 0x0);
                    if (t1 != 0) {
                        t1 = 0xD;
                        if ((*(signed char *)((a4 + 0x371D))) == 2) {
                        } else {
                            t2 = FUN_0c085f66(a4);
                            if (t2 == 0) {
                                FUN_0c081dfc(a4);
                            } else {
                                FUN_0c0c2d56(((((struct o376C_int *)(a4))->v)), 0x4, (*(signed char *)((a4 + 0x1))));
                            }
                            t1 = 0x6;
                        }
                        return (FUN_0c085cac(a4, t1, 0x0));
                    }
                }
                if ((*(signed char *)((a4 + 0x131))) != 0) {
                    (((struct o131_uchar *)(a4))->v) = 0x0;
                    t1 = FUN_0c07f610(a4);
                    if (t1 != 0) {
                        t2 = FUN_0c064f80((((t1 - 1) * 0x3938) + 0xC532498));
                        if (t2 != 0) {
                            (((struct o2C_float *)(a4))->v) = ((*(float *)((((t1 - 1) * 0x3938) + 0xC5324C4))) + -1.0f);
                            (((struct o372A_uchar *)(a4))->v) = (t1 - 1);
                            (((struct o3728_uchar *)(a4))->v) = 0x0;
                            return (FUN_0c085cac(a4, 0x21, 0x3));
                        }
                        return math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
                    }
                    return math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
                }
                return math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
            }
            t1 = 0xD;
            if ((*(signed char *)((a4 + 0x371D))) == 2) {
            } else {
                t2 = FUN_0c085f66(a4);
                if (t2 == 0) {
                    FUN_0c081dfc(a4);
                } else {
                    FUN_0c0c2d56(((((struct o376C_int *)(a4))->v)), 0x4, (*(signed char *)((a4 + 0x1))));
                }
                t1 = 0x6;
            }
            return (FUN_0c085cac(a4, t1, 0x0));
        }
        return t0;
    }
    FUN_0c037bf6(a4, a5, a6);
    t0 = *(short *)((a4 + 0x1E));
    *(unsigned short *)((a4 + 0x1E)) = (t0 - 1);
    t1 = (short)(t0 - 1);
    if ((short)(t0 - 1) != 0) {
    } else {
        u0 = (((struct o3810_float *)(a4))->v);
        u1 = (((struct o2C_float *)(a4))->v);
        if (((*(signed char *)((a4 + 0x3731))) != 0) && !(((u1 - u0) + -50.0f) > 0.0f)) {
            (((struct o50_float *)(a4))->v) = -17.5f;
            (((struct o5C_float *)(a4))->v) = 0.0f;
            (((struct o4C_float *)(a4))->v) = ((math_sin_angle16((*(int *)((a4 + 0x38))))) * 17.5f);
            (((struct o54_float *)(a4))->v) = ((math_cos_angle16((*(int *)((a4 + 0x38))))) * 17.5f);
        } else {
            u2 = (((struct o380C_float *)(a4))->v);
            u3 = (((struct o28_float *)(a4))->v);
            u4 = (((struct o3814_float *)(a4))->v);
            u5 = (((struct o30_float *)(a4))->v);
            u6 = ((u5 - u4) * (u5 - u4));
            u6 = u6 + ((u3 - u2)) * ((u3 - u2));
            u2 = math_signed_sqrt(u6);
            u3 = u2;
            if (u2 == 0.0f) {
                u3 = 9.99999975e-06f;
            }
            t0 = math_atan_angle16((((u1 - u0) + -50.0f) / u3));
            *(unsigned int *)((a4 + 0x34)) = t0;
            if ((int)t0 < (int)0x2000) {
                *(unsigned int *)((a4 + 0x34)) = 0x2000;
            }
            if ((int)(*(int *)((a4 + 0x34))) > (int)0x31C7) {
                *(unsigned int *)((a4 + 0x34)) = 0x31C7;
            }
            (((struct o50_float *)(a4))->v) = (-((math_sin_angle16((*(int *)((a4 + 0x34))))) * 24.7000008f));
            u0 = math_sin_angle16((*(int *)((a4 + 0x38))));
            u1 = (u0 * (math_cos_angle16((*(int *)((a4 + 0x34))))));
            (((struct o4C_float *)(a4))->v) = (u1 * 24.7000008f);
            u0 = math_cos_angle16((*(int *)((a4 + 0x38))));
            u1 = (u0 * (math_cos_angle16((*(int *)((a4 + 0x34))))));
            (((struct o54_float *)(a4))->v) = (u1 * 24.7000008f);
            (((struct o60_float *)(a4))->v) = 0.0f;
            (((struct o5C_float *)(a4))->v) = 0.0f;
            (((struct o58_float *)(a4))->v) = 0.0f;
            *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) - 0x1555);
        }
        (((struct o22_ushort *)(a4))->v) = 0xB4;
        (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
        t1 = 0x17;
    }
    return t1;
}
