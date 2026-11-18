/* Straight-line functions with calls and guards (batch gen_dc): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o10_uchar { char p[0x10]; unsigned char v; };
struct o118_int { char p[0x118]; int v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o3759_uchar { char p[0x3759]; unsigned char v; };
struct o3760_int { char p[0x3760]; int v; };
struct o3780_float { char p[0x3780]; float v; };
struct o37B8_float { char p[0x37B8]; float v; };
struct o380C_float { char p[0x380C]; float v; };
struct o3810_float { char p[0x3810]; float v; };
struct o3814_float { char p[0x3814]; float v; };
struct o430_short { char p[0x430]; short v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o8C_int { char p[0x8C]; int v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
int FUN_0c037bf6(int);
int FUN_0c059e60(int, int);
int FUN_0c064f80(int);
int FUN_0c07d030(int, int);
int FUN_0c07d1fc(int);
int FUN_0c07daea(int, int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07eaf4(int);
int FUN_0c07ebd0(int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c0819c2(int, int);
int FUN_0c085cac(int, int, int);
int FUN_0c085d0c(int, int, int, int);
int FUN_0c129b94(int, int);
int FUN_0c130890(int, int);
int FUN_0c13f398(int);
int FUN_0c140130(int);
int FUN_0c140b18(int, int);
int FUN_0c158dc8(int, int, int, int, int, int, int, int);
int FUN_0c15a260(int, int, int, int, int, int, int, int);
int math_atan_angle16(float);
float math_cos_angle16(int);
float math_signed_sqrt(float);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int FUN_0c093c8e(int a4);
int FUN_0c093a3c(int a4);
int FUN_0c08ecfc(int a4);
int FUN_0c0a0318(int a4);
int FUN_0c0acdf8(int a4);

int FUN_0c093c8e(int a4)
{
    int stk[10];
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
    register int t53;
    register int t56;
    register int t107;
    register int t69;
    register int t71;
    register int t74;
    register int t75;
    register int t77;
    register int t78;
    register int t82;
    register int t83;
    register int t84;
    register int t85;

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
    if ((short)(t17 + 0x1) == 12) {
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
        FUN_0c129b94(a4, 0x1);
        FUN_0c059e60(a4, 0x0);
        FUN_0c059e60(a4, 0x20);
    }
    t53 = *(short *)((a4 + 0x1C));
    if (((int)t53 >= (int)0x2) && ((int)t53 <= (int)0x16)) {
        t56 = (((struct o430_short *)(a4))->v);
        if ((0x200 & (unsigned short)t56) == 0) {
            if ((0x80 & (unsigned short)t56) != 0) {
                *(unsigned short *)((a4 + 0x1E)) = 0x1;
            }
        } else {
            *(unsigned short *)((a4 + 0x1E)) = 0x1;
        }
    }
    t107 = 0x37B8;
    if (((((struct o37B8_float *)(a4))->v)) != 0.0f) {
        t69 = *(short *)((a4 + 0x1C));
        t107 = t69;
        if ((int)t69 >= (int)0x11) {
            t71 = *(short *)((a4 + 0x1E));
            t107 = t71;
            if (t71 != 0) {
                FUN_0c07d030(a4, 0x0);
                if ((*(signed char *)((a4 + 0x375A))) == 0) {
                    *(int *)((int)stk + 8) = 0x10;
                    *(int *)((int)stk + 4) = 0x1;
                    t74 = *(signed char *)((a4 + 0x1));
                    *(unsigned int *)(((int)stk + 12)) = t74;
                    t75 = t74;
                    *(int *)((int)stk + 0) = t75;
                    FUN_0c07e79c(a4, t74, 0x1, 0x10, t75, 0x1, 0x10);
                } else {
                    *(int *)((int)stk + 8) = 0x13;
                    *(int *)((int)stk + 4) = 0x1;
                    t77 = *(signed char *)((a4 + 0x1));
                    *(unsigned int *)(((int)stk + 12)) = t77;
                    t78 = t77;
                    *(int *)((int)stk + 0) = t78;
                    FUN_0c07e79c(a4, t77, 0x1, 0x13, t78, 0x1, 0x13);
                }
                t82 = *(int *)(((0x118 + a4) + 0x4));
                t83 = (((struct o118_int *)(a4))->v);
                (((struct oA0_float *)(t82))->v) = 1.0f;
                (((struct o9C_float *)(t82))->v) = 1.0f;
                (((struct oA0_float *)(t83))->v) = 1.0f;
                (((struct o9C_float *)(t83))->v) = 1.0f;
                t84 = *(int *)(((0x118 + a4) + 0x4));
                t85 = (((struct o118_int *)(a4))->v);
                (((struct o98_float *)(t84))->v) = 1.0f;
                (((struct o98_float *)(t85))->v) = 1.0f;
                (((struct o94_float *)(t84))->v) = 1.0f;
                (((struct o94_float *)(t85))->v) = 1.0f;
                *(unsigned short *)((a4 + 0x1C)) = 0x0;
                *(unsigned short *)((a4 + 0x1E)) = 0x0;
                (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                t107 = 0x17;
            }
        }
    }
    return t107;
}

int FUN_0c093a3c(int a4)
{
    int stk[10];
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
    register int t53;
    register int t56;
    register int t107;
    register int t69;
    register int t71;
    register int t74;
    register int t75;
    register int t77;
    register int t78;
    register int t82;
    register int t83;
    register int t84;
    register int t85;

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
    if ((short)(t17 + 0x1) == 14) {
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
        FUN_0c129b94(a4, 0x0);
        FUN_0c059e60(a4, 0x0);
        FUN_0c059e60(a4, 0x20);
    }
    t53 = *(short *)((a4 + 0x1C));
    if (((int)t53 >= (int)0x2) && ((int)t53 <= (int)0x16)) {
        t56 = (((struct o430_short *)(a4))->v);
        if ((0x200 & (unsigned short)t56) == 0) {
            if ((0x80 & (unsigned short)t56) != 0) {
                *(unsigned short *)((a4 + 0x1E)) = 0x1;
            }
        } else {
            *(unsigned short *)((a4 + 0x1E)) = 0x1;
        }
    }
    t107 = 0x37B8;
    if (((((struct o37B8_float *)(a4))->v)) != 0.0f) {
        t69 = *(short *)((a4 + 0x1C));
        t107 = t69;
        if ((int)t69 >= (int)0x14) {
            t71 = *(short *)((a4 + 0x1E));
            t107 = t71;
            if (t71 != 0) {
                FUN_0c07d030(a4, 0x0);
                if ((*(signed char *)((a4 + 0x375A))) == 0) {
                    *(int *)((int)stk + 8) = 0xF;
                    *(int *)((int)stk + 4) = 0x1;
                    t74 = *(signed char *)((a4 + 0x1));
                    *(unsigned int *)(((int)stk + 12)) = t74;
                    t75 = t74;
                    *(int *)((int)stk + 0) = t75;
                    FUN_0c07e79c(a4, t74, 0x1, 0xF, t75, 0x1, 0xF);
                } else {
                    *(int *)((int)stk + 8) = 0x12;
                    *(int *)((int)stk + 4) = 0x1;
                    t77 = *(signed char *)((a4 + 0x1));
                    *(unsigned int *)(((int)stk + 12)) = t77;
                    t78 = t77;
                    *(int *)((int)stk + 0) = t78;
                    FUN_0c07e79c(a4, t77, 0x1, 0x12, t78, 0x1, 0x12);
                }
                t82 = *(int *)(((0x118 + a4) + 0x4));
                t83 = (((struct o118_int *)(a4))->v);
                (((struct oA0_float *)(t82))->v) = 1.0f;
                (((struct o9C_float *)(t82))->v) = 1.0f;
                (((struct oA0_float *)(t83))->v) = 1.0f;
                (((struct o9C_float *)(t83))->v) = 1.0f;
                t84 = *(int *)(((0x118 + a4) + 0x4));
                t85 = (((struct o118_int *)(a4))->v);
                (((struct o98_float *)(t84))->v) = 1.0f;
                (((struct o98_float *)(t85))->v) = 1.0f;
                (((struct o94_float *)(t84))->v) = 1.0f;
                (((struct o94_float *)(t85))->v) = 1.0f;
                *(unsigned short *)((a4 + 0x1C)) = 0x0;
                *(unsigned short *)((a4 + 0x1E)) = 0x0;
                (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                t107 = 0x17;
            }
        }
    }
    return t107;
}

int FUN_0c08ecfc(int a4)
{
    int stk[5];
    register int t3;
    register int t23;
    register int t33;
    register int t38;
    register int t39;
    register int t41;
    register int t42;
    register int t43;
    register int t44;
    register int t48;
    register int t58;
    register int t59;
    register int t61;
    register int t62;
    register int t63;
    register int t4;
    register float u5;
    register float u6;
    float u7;
    register int t68;
    register int t69;

    FUN_0c0819c2(a4, 0x1555);
    FUN_0c037bf6(a4);
    t3 = FUN_0c064f80(((((struct o3760_int *)(a4))->v)));
    if ((t3 != 0) && ((t4 = (((struct o3760_int *)(a4))->v), u5 = (((struct o2C_float *)(a4))->v), u6 = (((struct o2C_float *)(t4))->v), u5 > u6) && (u7 = (((struct o3780_float *)(a4))->v), 200.0f > u7))) {
        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((((struct o28_float *)(((((struct o3760_int *)(a4))->v))))->v)) - ((((struct o28_float *)(a4))->v))) / 6.0f));
        (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((((struct o30_float *)(((((struct o3760_int *)(a4))->v))))->v)) - ((((struct o30_float *)(a4))->v))) / 6.0f));
    }
    if ((*(signed char *)((a4 + 0x131))) != 0) {
        t23 = FUN_0c07d1fc(a4);
        if (t23 != 0) {
            *(unsigned short *)((a4 + 0x1E)) = 0x1;
        }
    }
    t33 = FUN_0c07ecc6(a4, 0x0, 0x0);
    if (t33 == 0) {
        math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
        return math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    }
    if (t33 == 2) {
        return FUN_0c085cac(a4, 0x6, 0x0);
    }
    if ((*(short *)((a4 + 0x1E))) != 0) {
        *(int *)((int)stk + 12) = 0x5;
        *(int *)((int)stk + 8) = 0x2;
        t38 = *(signed char *)((a4 + 0x1));
        *(unsigned int *)(((int)stk + 16)) = t38;
        t39 = t38;
        *(int *)((int)stk + 4) = t39;
        FUN_0c07e79c(a4, t38, 0x2, 0x5, t39, 0x2, 0x5);
        t41 = *(int *)(((0x118 + a4) + 0x4));
        t42 = (((struct o118_int *)(a4))->v);
        (((struct oA0_float *)(t41))->v) = 1.0f;
        (((struct o9C_float *)(t41))->v) = 1.0f;
        (((struct oA0_float *)(t42))->v) = 1.0f;
        (((struct o9C_float *)(t42))->v) = 1.0f;
        t43 = *(int *)(((0x118 + a4) + 0x4));
        t44 = (((struct o118_int *)(a4))->v);
        (((struct o98_float *)(t43))->v) = 1.0f;
        (((struct o98_float *)(t44))->v) = 1.0f;
        (((struct o94_float *)(t43))->v) = 1.0f;
        (((struct o94_float *)(t44))->v) = 1.0f;
        if ((*(signed char *)((a4 + 0x371A))) == 0) {
            *(int *)((int)stk + 12) = 0xC1C5F74;
            *(int *)((int)stk + 8) = 0xC1C5F68;
            *(int *)((int)stk + 4) = 0x52;
            *(int *)((int)stk + 0) = 0x15;
            FUN_0c158dc8((*(signed char *)((a4 + 0x1))), 0x1, 0x5, 0x1, 0x15, 0x52, 0xC1C5F68, 0xC1C5F74);
        } else {
            *(int *)((int)stk + 12) = 0xC1C5F8C;
            *(int *)((int)stk + 8) = 0xC1C5F80;
            *(int *)((int)stk + 4) = 0x52;
            *(int *)((int)stk + 0) = 0x15;
            t48 = *(signed char *)((a4 + 0x1));
            (((struct o10_uchar *)(((int)stk + 0)))->v) = t48;
            FUN_0c15a260((*(signed char *)(((int)stk + 16))), 0x1, 0x5, (*(int *)((((((struct o8C_int *)((*(int *)((((signed char)t48 << 2) + 0xC4B40FC)))))->v)) + 0x0))), 0x15, 0x52, 0xC1C5F80, 0xC1C5F8C);
        }
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        FUN_0c0819c2(a4, 0x78E3);
    } else {
        *(int *)((int)stk + 12) = 0x6;
        *(int *)((int)stk + 8) = 0x2;
        t58 = *(signed char *)((a4 + 0x1));
        *(unsigned int *)(((int)stk + 16)) = t58;
        t59 = t58;
        *(int *)((int)stk + 4) = t59;
        FUN_0c07e79c(a4, t58, 0x2, 0x6, t59, 0x2, 0x6);
        t61 = *(int *)(((0x118 + a4) + 0x4));
        t62 = (((struct o118_int *)(a4))->v);
        (((struct oA0_float *)(t61))->v) = 1.0f;
        (((struct o9C_float *)(t61))->v) = 1.0f;
        (((struct oA0_float *)(t62))->v) = 1.0f;
        (((struct o9C_float *)(t62))->v) = 1.0f;
        t63 = *(int *)(((0x118 + a4) + 0x4));
        t68 = (((struct o118_int *)(a4))->v);
        (((struct o98_float *)(t63))->v) = 1.0f;
        (((struct o98_float *)(t68))->v) = 1.0f;
        (((struct o94_float *)(t63))->v) = 1.0f;
        (((struct o94_float *)(t68))->v) = 1.0f;
        (((struct o16_uchar *)(a4))->v) = 0x3;
        t69 = (0x118 + a4);
    }
    return FUN_0c07daea(a4, t68, t69);
}

int FUN_0c0a0318(int a4)
{
    register int t0;
    int t1;
    register int t2;
    int t3;
    register int t4;
    register int t5;
    register int t6;
    register float u0;
    register float u1;

    if (((*(short *)((a4 + 0x1C))) == 0) && ((t0 = *(short *)((a4 + 0x1E)), t0 == 0) && (t1 = (((struct o118_int *)(a4))->v), u0 = (((struct o8C_float *)(t1))->v), !(21.0f > u0)))) {
        FUN_0c130890(a4, (*(short *)((a4 + 0x1C))));
        FUN_0c059e60(a4, 0x23);
        FUN_0c07d030(a4, 0x2);
        *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
    }
    if (((*(short *)((a4 + 0x1C))) != 0) && ((t2 = *(short *)((a4 + 0x1E)), t2 == 0) && (t3 = (((struct o118_int *)(a4))->v), u1 = (((struct o8C_float *)(t3))->v), !(4.0f > u1)))) {
        FUN_0c130890(a4, (*(short *)((a4 + 0x1C))));
        FUN_0c059e60(a4, 0x23);
        *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
    }
    t0 = (((struct o430_short *)(a4))->v);
    if (((0x200 & (unsigned short)t0) == 0) && ((0x80 & (unsigned short)t0) == 0)) {
    } else {
        (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) + 0x1);
    }
    (((struct o3759_uchar *)(a4))->v) = 0x2;
    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 == 0) {
        t0 = FUN_0c07ebd0(a4);
        t1 = t0;
        if (t0 != 0) {
            t0 = *(short *)((0xC5413E8 + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x2F8)));
            t2 = FUN_0c07eaf4(a4);
            t3 = *(int *)((a4 + 0x38));
            t6 = (unsigned short)((unsigned short)(t0 + t2) - t3);
            if ((0x8000 & (unsigned short)((unsigned short)(t0 + t2) - t3)) != 0) {
                t6 = ((unsigned short)((unsigned short)(t0 + t2) - t3) | 0xFFFF0000);
            }
            if ((int)t6 <= (int)0xFFFFFDDE) {
                *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) - 0x222);
            } else {
                if ((int)t6 >= (int)0x222) {
                    *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + 0x222);
                } else {
                    *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + (((int)((unsigned int)((int)((unsigned int)t6 + (unsigned int)0x0)) + ((((int)0x0 > (int)t6)) ? 1u : 0u))) >> 1));
                }
            }
            t1 = t2;
        }
        t0 = t1;
    } else {
        t1 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t1 + 0x1);
        if (((int)(short)(t1 + 0x1) >= (int)0x8) && ((t4 = *(short *)((a4 + 0x1C)), (int)t4 >= (int)0x10) || (t5 = (((struct o20_short *)(a4))->v), t5 == 0))) {
            FUN_0c07e79c(a4, 0xFFFFFFFF, 0x4, 0x3C, 0xFFFFFFFF, 0x4, 0x3C);
            (((struct o4C_float *)(a4))->v) = (-((math_sin_angle16((*(int *)((a4 + 0x38))))) * 3.79999995f));
            (((struct o54_float *)(a4))->v) = (-((math_cos_angle16((*(int *)((a4 + 0x38))))) * 3.79999995f));
            (((struct o60_float *)(a4))->v) = 0.0f;
            (((struct o58_float *)(a4))->v) = 0.0f;
            (((struct o50_float *)(a4))->v) = 25.0f;
            (((struct o5C_float *)(a4))->v) = (*(float *)0xC0A0594);
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            t1 = 0x15;
        } else {
            t2 = *(short *)((a4 + 0x1C));
            t3 = ((~(((~t2) + 0x1) & 0x1)) + 0x1);
            if ((int)t2 >= 0) {
                t3 = (t2 & 0x1);
            }
            if (t3 != 0) {
                t2 = *(signed char *)((a4 + 0x1));
                t3 = 0x19;
                t4 = (t2);
                t5 = t2;
                t2 = 0x19;
            } else {
                t6 = *(signed char *)((a4 + 0x1));
                t3 = 0x1A;
                t4 = (t6);
                t5 = t6;
                t2 = 0x1A;
            }
            FUN_0c07e79c(a4, t5, 0x1, t2, t4, 0x1, t3);
            *(unsigned short *)((a4 + 0x1E)) = 0x0;
            (((struct o20_ushort *)(a4))->v) = 0x0;
            t2 = FUN_0c07ebd0(a4);
            t3 = t2;
            if (t2 != 0) {
                t2 = *(short *)((0xC5413E8 + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x2F8)));
                t4 = FUN_0c07eaf4(a4);
                t5 = *(int *)((a4 + 0x38));
                t6 = (unsigned short)((unsigned short)(t2 + t4) - t5);
                if ((0x8000 & (unsigned short)((unsigned short)(t2 + t4) - t5)) != 0) {
                    t6 = ((unsigned short)((unsigned short)(t2 + t4) - t5) | 0xFFFF0000);
                }
                if ((int)t6 <= (int)0xFFFFFDDE) {
                    *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) - 0x222);
                } else {
                    if ((int)t6 >= (int)0x222) {
                        *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + 0x222);
                    } else {
                        *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + (((int)((unsigned int)((int)((unsigned int)t6 + (unsigned int)0x0)) + ((((int)0x0 > (int)t6)) ? 1u : 0u))) >> 1));
                    }
                }
                t3 = t4;
            }
            t1 = t3;
        }
        t0 = t1;
    }
    return t0;
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
