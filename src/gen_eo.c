/* Straight-line functions with calls and guards (batch gen_eo): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o10_float { char p[0x10]; float v; };
struct o128_ushort { char p[0x128]; unsigned short v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12E_short { char p[0x12E]; short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o136_uchar { char p[0x136]; unsigned char v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAA_uchar { char p[0xAA]; unsigned char v; };
struct oAB_uchar { char p[0xAB]; unsigned char v; };
struct oC_float { char p[0xC]; float v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oD0_int { char p[0xD0]; int v; };
int FUN_0c02dca4(int);
int FUN_0c02de40(int);
extern int FUN_0c02e078();
int FUN_0c02e406(int, int, int, int, int);
int FUN_0c02fb24(int, int);
int FUN_0c03934e(int);
int FUN_0c03a028(int);
int FUN_0c03ee04(int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c042fe0(void);
int FUN_0c05258e(int, int, int, int, int);
int FUN_0c059c7a(int, int);
int FUN_0c059e9a(int, int, int);
int FUN_0c06593a(int, int);
int FUN_0c07e420(int, int);
int FUN_0c0df294(int);
int FUN_0c0df2f0(int);
int FUN_0c0df30a(int);
int FUN_0c0e2390(int, int, int);
extern int FUN_0c143074();
int FUN_0c17b4b0(int);
int FUN_0c17c130(int, int, int);
int FUN_0c17c450(int);
int FUN_0c17e290(int, int);
int FUN_0c17e740(float, float, float);
int FUN_0c187798(int, int, int);
int math_atan2_angle16(float, float);
int math_atan_angle16(float);
float math_signed_sqrt(float);
int math_vec3_mul_xyz(int, float, float, float);
int thunk_FUN_0c05abb2(int, int);
void FUN_0c02e43c(int a4);
int FUN_0c0df40c(int a4, int a5, int a6, int a7);
int FUN_0c143118(int a4, float f4, float f5, float f6);

void FUN_0c02e43c(int a4)
{
    int stk[11];
    register int t5;
    register int t23;
    register int t30;
    register int t31;
    register int t55;
    register int t32;
    register int t34;
    register int t35;
    register int t36;
    register int t37;
    register int t58;
    register int t60;
    register int t61;
    register int t63;
    register int t64;
    register int t65;
    register int t66;
    register int t67;
    register int t201;
    register int t202;
    register int t215;
    int t216;
    register int t250;
    register int t251;
    register int t264;
    register int t294;
    register int t295;
    register int t33;
    int t39;
    register int t42;
    int t48;
    register int t51;
    register int t62;
    register int t175;
    register int t176;
    register int t177;
    int t98;
    register int t99;
    register int t101;
    register int t102;
    register int t103;
    int t109;
    int t130;
    register int t131;
    register int t133;
    register int t134;
    register int t135;
    int t141;
    int t149;
    register int t150;
    register int t151;
    register int t152;
    int t154;
    register int t155;
    register int t157;
    register int t158;
    register int t159;
    int t165;
    int t205;
    int t254;
    int t298;

    *(unsigned int *)(((int)stk + 4)) = (0xA8 + a4);
    if ((*(signed char *)(((0xA8 + a4) + 0x0))) == 0) {
        return;
    }
    FUN_0c17b4b0(0x1);
    FUN_0c03ee04((*(signed char *)(((*(int *)(((int)stk + 4))) + 0x1))));
    t5 = *(signed char *)((a4 + 0x2));
    if (t5 == 12) {
        FUN_0c02de40(a4);
    } else {
        if (t5 != 13) {
            FUN_0c02dca4(a4);
        }
    }
    if (((unsigned short)(*(short *)(((*(int *)(((int)stk + 4))) + 0x4))) & 0x200) != 0) {
        t55 = *(int *)(((int)stk + 4));
        FUN_0c17e740(((((struct oC_float *)(t55))->v)), ((((struct o10_float *)(t55))->v)), ((((struct o14_float *)(t55))->v)));
    }
    t23 = *(int *)0xC20EA8C;
    t32 = t23;
    if (t23 != 3) {
        FUN_0c03934e(a4);
        t32 = (FUN_0c03a028(a4));
    }
    t30 = *(int *)(((int)stk + 4));
    t31 = *(int *)(((*(int *)(((int)stk + 4))) + 0x18));
    if ((int)t31 > 0) {
        t34 = t33;
        t35 = (t30 + 0x1C);
        t36 = 0x0;
        for (;;) {
            t37 = *(int *)((t35 + 0x0));
            t35 = (t35 + 0x4);
            if (((*(int *)((t37 + 0xC))) != 0) && (t39 = *(int *)0xC20EA8C, t32 = t39, t32 != 3)) {
                t34 = a4;
                t32 = (FUN_0c02fb24(t34, t37));
            } else {
                t42 = t34;
            }
            t32 = (*(signed char *)((a4 + 0x1)));
            t34 = t42;
            t34 = (*(int *)((t37 + 0x8)));
            t32 = (FUN_0c17e290(t34, ((t32 << 2) << 2)));
            t34 = a4;
            t32 = (((int (*)(int, int, int, int, int, int, int, int, int, int, int, int))(FUN_0c02e078))(t34, t37, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28)));
            t32 = (*(signed char *)((a4 + 0x2)));
            t34 = t32;
            if ((t32 != 12) && (t48 = (t32 == 12), t32 = t34, t32 != 13)) {
                t51 = t34;
            } else {
                t34 = (*(int *)(((int)stk + 4)));
                t32 = (FUN_0c02e406(t34, t37, 0x0, 0x0, *(int *)((int)stk + 0)));
            }
            t36 = (t36 + 0x1);
            t34 = t51;
            if ((int)t36 >= (int)t31) {
                break;
            }
        }
        t55 = t37;
        t64 = t34;
    }
    *(unsigned int *)(((int)stk + 0)) = (0x444 + a4);
    t58 = *(signed char *)((a4 + 0x371A));
    *(unsigned int *)(((int)stk + 8)) = (t58 << 2);
    t60 = *(int *)((((t58 << 2) + ((0x444 + a4) + 0x4)) + 0x0));
    t61 = (0x444 + a4);
    t63 = (t58 * 0x10E0);
    t65 = 0x0;
    t66 = (((*(int *)(((int)stk + 0))) + 0x24) + (t58 * 0x10E0));
    t67 = t55;
    for (;;) {
        if ((int)t65 >= (int)t60) {
            break;
        }
        t67 = t66;
        t61 = (*(signed char *)((t67 + 0x3)));
        if (t61 == 2) {
            t61 = (*(signed char *)((t67 + 0x4)));
            t63 = (*(int *)(((int)stk + 0)));
            t62 = t61;
            t61 = (*(signed char *)((t63 + 0x1)));
            t177 = t64;
            if (t62 == t61) {
                t63 = (*(int *)((t67 + 0xC)));
                if ((t63 != 0) && (t98 = (t63 == 0), t63 = 0xC20EA8C, t99 = *(int *)((t63 + 0x0)), t61 = t99, t61 != 3)) {
                    t64 = a4;
                    t61 = (FUN_0c02fb24(t64, t67));
                } else {
                    t101 = t62;
                    t102 = t63;
                    t103 = t64;
                }
                t61 = (*(signed char *)((a4 + 0x1)));
                t62 = t101;
                t63 = t102;
                t64 = t103;
                t63 = 0xC17E290;
                t64 = (*(int *)((t67 + 0x8)));
                t61 = (FUN_0c17e290(t64, ((t61 << 2) << 2)));
                t64 = a4;
                t61 = (((int (*)(int, int, int, int, int, int, int, int, int, int, int, int))(FUN_0c02e078))(t64, t67, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28)));
                t61 = (*(signed char *)((a4 + 0x2)));
                t64 = t61;
                if ((t61 != 12) && (t109 = (t61 == 12), t61 = t64, t61 != 13)) {
                    t177 = t64;
                } else {
                    t64 = (*(int *)(((int)stk + 4)));
                    t61 = (FUN_0c02e406(t64, t67, 0x0, 0x0, *(int *)((int)stk + 0)));
                }
            } else {
                t175 = t62;
                t176 = t63;
            }
        } else {
            if (t61 == 3) {
                t61 = (*(signed char *)((t67 + 0x4)));
                t63 = (*(int *)(((int)stk + 0)));
                t62 = t61;
                t61 = (*(signed char *)((t63 + 0x2)));
                t177 = t64;
                if (t62 == t61) {
                    t63 = (*(int *)((t67 + 0xC)));
                    if ((t63 != 0) && (t130 = (t63 == 0), t63 = 0xC20EA8C, t131 = *(int *)((t63 + 0x0)), t61 = t131, t61 != 3)) {
                        t64 = a4;
                        t61 = (FUN_0c02fb24(t64, t67));
                    } else {
                        t133 = t62;
                        t134 = t63;
                        t135 = t64;
                    }
                    t61 = (*(signed char *)((a4 + 0x1)));
                    t62 = t133;
                    t63 = t134;
                    t64 = t135;
                    t64 = (*(int *)((t67 + 0x8)));
                    t61 = (FUN_0c17e290(t64, ((t61 << 2) << 2)));
                    t64 = a4;
                    t61 = (((int (*)(int, int, int, int, int, int, int, int, int, int, int, int))(FUN_0c02e078))(t64, t67, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28)));
                    t61 = (*(signed char *)((a4 + 0x2)));
                    t64 = t61;
                    if ((t61 != 12) && (t141 = (t61 == 12), t61 = t64, t61 != 13)) {
                        t177 = t64;
                    } else {
                        t64 = (*(int *)(((int)stk + 4)));
                        t61 = (FUN_0c02e406(t64, t67, 0x0, 0x0, *(int *)((int)stk + 0)));
                    }
                } else {
                    t175 = t62;
                    t176 = t63;
                }
            } else {
                t61 = (*(signed char *)((t67 + 0x3)));
                t177 = t64;
                if ((t61 == 4) && (t149 = *(signed char *)((t67 + 0x4)), t150 = (t61 == 4), t61 = t149, t151 = *(int *)(((int)stk + 0)), t63 = t151, t62 = t61, t152 = *(signed char *)((t63 + 0x3)), t61 = t152, t62 != t61)) {
                    t175 = t62;
                    t176 = t63;
                } else {
                    t63 = (*(int *)((t67 + 0xC)));
                    if ((t63 != 0) && (t154 = (t63 == 0), t63 = 0xC20EA8C, t155 = *(int *)((t63 + 0x0)), t61 = t155, t61 != 3)) {
                        t64 = a4;
                        t61 = (FUN_0c02fb24(t64, t67));
                    } else {
                        t157 = t62;
                        t158 = t63;
                        t159 = t64;
                    }
                    t61 = (*(signed char *)((a4 + 0x1)));
                    t62 = t157;
                    t63 = t158;
                    t64 = t159;
                    t64 = (*(int *)((t67 + 0x8)));
                    t61 = (FUN_0c17e290(t64, ((t61 << 2) << 2)));
                    t64 = a4;
                    t61 = (((int (*)(int, int, int, int, int, int, int, int, int, int, int, int))(FUN_0c02e078))(t64, t67, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28)));
                    t61 = (*(signed char *)((a4 + 0x2)));
                    t64 = t61;
                    if ((t61 != 12) && (t165 = (t61 == 12), t61 = t64, t61 != 13)) {
                        t177 = t64;
                    } else {
                        t64 = (*(int *)(((int)stk + 4)));
                        t61 = (FUN_0c02e406(t64, t67, 0x0, 0x0, *(int *)((int)stk + 0)));
                    }
                }
            }
        }
        t66 = (t66 + 0x90);
        t62 = t175;
        t63 = t176;
        t64 = t177;
        t65 = (t65 + 0x1);
    }
    if ((int)(*(int *)(((((*(int *)(((int)stk + 0))) + 0xC) + (*(int *)(((int)stk + 8)))) + 0x0))) > 0) {
        if ((int)(*(signed char *)(((*(int *)(((int)stk + 0))) + 0x1))) >= (int)(*(int *)(((((*(int *)(((int)stk + 0))) + 0xC) + (*(int *)(((int)stk + 8)))) + 0x0)))) {
            *(unsigned char *)(((0x1 + (*(int *)(((int)stk + 0)))) + 0x0)) = ((*(int *)(((((*(int *)(((int)stk + 0))) + 0xC) + (*(int *)(((int)stk + 8)))) + 0x0))) - 1);
        }
        t201 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x1));
        t202 = *(int *)(((int)stk + 0));
        if (((*(int *)(((((t202 + 0x21E4) + (t58 * 0x2D0)) + (((((t201 << 2) << 1) + t201) << 2) << 2)) + 0xC))) != 0) && (t205 = *(int *)0xC20EA8C, t205 != 3)) {
            FUN_0c02fb24(a4, (((t202 + 0x21E4) + (t58 * 0x2D0)) + (((((t201 << 2) << 1) + t201) << 2) << 2)));
        }
        FUN_0c17e290((*(int *)(((((t202 + 0x21E4) + (t58 * 0x2D0)) + (((((t201 << 2) << 1) + t201) << 2) << 2)) + 0x8))), (((*(signed char *)((a4 + 0x1))) << 2) << 2));
        t215 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int, int))(FUN_0c02e078))(a4, (((t202 + 0x21E4) + (t58 * 0x2D0)) + (((((t201 << 2) << 1) + t201) << 2) << 2)), 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
        t216 = *(signed char *)((a4 + 0x2));
        if ((t216 != 12) && (t216 != 13)) {
        } else {
            FUN_0c02e406((*(int *)(((int)stk + 4))), (((t202 + 0x21E4) + (t58 * 0x2D0)) + (((((t201 << 2) << 1) + t201) << 2) << 2)), 0x0, 0x0, *(int *)((int)stk + 0));
        }
    }
    if ((int)(*(int *)(((((*(int *)(((int)stk + 0))) + 0x14) + (*(int *)(((int)stk + 8)))) + 0x0))) > 0) {
        if ((int)(*(signed char *)(((*(int *)(((int)stk + 0))) + 0x2))) >= (int)(*(int *)(((((*(int *)(((int)stk + 0))) + 0x14) + (*(int *)(((int)stk + 8)))) + 0x0)))) {
            *(unsigned char *)(((0x2 + (*(int *)(((int)stk + 0)))) + 0x0)) = ((*(int *)(((((*(int *)(((int)stk + 0))) + 0x14) + (*(int *)(((int)stk + 8)))) + 0x0))) - 1);
        }
        t250 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x2));
        t251 = *(int *)(((int)stk + 0));
        if (((*(int *)(((((t251 + 0x2784) + (t58 * 0x2D0)) + (((((t250 << 2) << 1) + t250) << 2) << 2)) + 0xC))) != 0) && (t254 = *(int *)0xC20EA8C, t254 != 3)) {
            FUN_0c02fb24(a4, (((t251 + 0x2784) + (t58 * 0x2D0)) + (((((t250 << 2) << 1) + t250) << 2) << 2)));
        }
        FUN_0c17e290((*(int *)(((((t251 + 0x2784) + (t58 * 0x2D0)) + (((((t250 << 2) << 1) + t250) << 2) << 2)) + 0x8))), (((*(signed char *)((a4 + 0x1))) << 2) << 2));
        t264 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int, int))(FUN_0c02e078))(a4, (((t251 + 0x2784) + (t58 * 0x2D0)) + (((((t250 << 2) << 1) + t250) << 2) << 2)), 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
    }
    if ((int)(*(int *)(((((*(int *)(((int)stk + 0))) + 0x1C) + (*(int *)(((int)stk + 8)))) + 0x0))) > 0) {
        if ((int)(*(signed char *)(((*(int *)(((int)stk + 0))) + 0x3))) >= (int)(*(int *)(((((*(int *)(((int)stk + 0))) + 0x1C) + (*(int *)(((int)stk + 8)))) + 0x0)))) {
            *(unsigned char *)(((0x3 + (*(int *)(((int)stk + 0)))) + 0x0)) = ((*(int *)(((((*(int *)(((int)stk + 0))) + 0x1C) + (*(int *)(((int)stk + 8)))) + 0x0))) - 1);
        }
        t294 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x3));
        t295 = *(int *)(((int)stk + 0));
        if (((*(int *)(((((t295 + 0x2D24) + (t58 * 0x2D0)) + (((((t294 << 2) << 1) + t294) << 2) << 2)) + 0xC))) != 0) && (t298 = *(int *)0xC20EA8C, t298 != 3)) {
            FUN_0c02fb24(a4, (((t295 + 0x2D24) + (t58 * 0x2D0)) + (((((t294 << 2) << 1) + t294) << 2) << 2)));
        }
        FUN_0c17e290((*(int *)(((((t295 + 0x2D24) + (t58 * 0x2D0)) + (((((t294 << 2) << 1) + t294) << 2) << 2)) + 0x8))), (((*(signed char *)((a4 + 0x1))) << 2) << 2));
        ((int (*)(int, int))(FUN_0c02e078))(a4, (((t295 + 0x2D24) + (t58 * 0x2D0)) + (((((t294 << 2) << 1) + t294) << 2) << 2)));
    return;
    }
}

int FUN_0c0df40c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;

    if ((*(signed char *)0xC54223C) != 1) {
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAA_uchar *)(a4))->v) = 0x1;
        (((struct oAB_uchar *)(a4))->v) = 0x8;
        t0 = ((int (*)(int, int, int))(FUN_0c187798))(a4, a5, a6);
        (((struct o128_ushort *)(a4))->v) = 0x40;
        FUN_0c07e420(a4, 0x2);
        (((struct o12E_ushort *)(a4))->v) = (((((struct o12E_short *)(a4))->v)) | 0x10);
        (((struct o22_ushort *)(a4))->v) = 0x0;
    }
    t0 = FUN_0c042fe0();
    if (t0 == 0) {
        return t0;
    }
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 == 4) {
                        if ((*(short *)((a4 + 0x1E))) != 0) {
                            *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) - 1);
                            if (((*(short *)((a4 + 0x1E))) & 0x1) != 0) {
                                (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + (float)((*(short *)((a4 + 0x1E))) << 1));
                            } else {
                                (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) - (float)((*(short *)((a4 + 0x1E))) << 1));
                            }
                            if ((*(short *)((a4 + 0x1E))) == 0) {
                                (((struct o30_float *)(a4))->v) = ((((struct o60_float *)(a4))->v));
                            }
                        }
                        t1 = *(short *)((a4 + 0x1C));
                        *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
                        t2 = (short)(t1 - 1);
                        if ((int)(short)(t1 - 1) <= 0) {
                            (((struct o15_uchar *)(a4))->v) = 0x3;
                            (((struct o4C_float *)(a4))->v) = 0.0f;
                            (((struct o12A_ushort *)(a4))->v) = 0xFFFFFFFF;
                            (((struct o136_uchar *)(a4))->v) = 0x0;
                            (((struct o20_ushort *)(a4))->v) = 0x0;
                            t2 = 0x20;
                        }
                        t1 = t2;
                    } else {
                        t1 = t0;
                    }
                    return t1;
                }
                (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) + 0.200000003f);
                if (((((struct o4C_float *)(a4))->v)) > 5.5999999f) {
                    (((struct o4C_float *)(a4))->v) = 5.5999999f;
                }
                (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
                t0 = (((struct oC4_int *)(a4))->v);
                (((struct o80_uint *)(t0))->v) = (((((struct o80_int *)(t0))->v)) - (int)((((((struct o4C_float *)(a4))->v)) * 26214.4004f) / 360.0f));
                FUN_0c0df30a(a4);
                t0 = *(signed char *)0xC54098D;
                if (t0 == 11) {
                    (((struct o15_uchar *)(a4))->v) = 0x5;
                    return (FUN_0c05258e(0x2, 0x1E, 0x100, 0x1E, 0x0));
                }
                t1 = t0;
                t0 = 0x0;
                t2 = 0x0;
                for (;;) {
                    if ((*(int *)(((0xC540D94 + t2) + 0x4))) != 0) {
                        t1 = (FUN_0c06593a(a4, (*(int *)(((0xC540D94 + t0) + 0x4)))));
                        if (t1 != 0) {
                            break;
                        }
                        t2 = (t2 + 0x4);
                        t0 = (t0 + 0x4);
                        if ((unsigned int)t2 >= (unsigned int)0x10) {
                            t1 = 0x20;
                            t3 = *(short *)((a4 + t1));
                            *(unsigned short *)((a4 + t1)) = (t3 + 0x1);
                            if ((int)(short)(t3 + 0x1) >= (int)0x3C) {
                                t1 = 0x136;
                                *(unsigned char *)((a4 + t1)) = 0x0;
                                t1 = 0x20;
                                *(unsigned short *)((a4 + t1)) = 0x0;
                                t1 = (thunk_FUN_0c05abb2(0x43, (a4 + 0x28)));
                                return FUN_0c0df2f0(a4);
                            }
                            return FUN_0c0df2f0(a4);
                        }
                        continue;
                    }
                    t2 = (t2 + 0x4);
                    t0 = (t0 + 0x4);
                    if ((unsigned int)t2 >= (unsigned int)0x10) {
                        t1 = 0x20;
                        t3 = *(short *)((a4 + t1));
                        *(unsigned short *)((a4 + t1)) = (t3 + 0x1);
                        if ((int)(short)(t3 + 0x1) >= (int)0x3C) {
                            t1 = 0x136;
                            *(unsigned char *)((a4 + t1)) = 0x0;
                            t1 = 0x20;
                            *(unsigned short *)((a4 + t1)) = 0x0;
                            t1 = (thunk_FUN_0c05abb2(0x43, (a4 + 0x28)));
                            return FUN_0c0df2f0(a4);
                        }
                        return FUN_0c0df2f0(a4);
                    }
                }
                (((struct o15_uchar *)(a4))->v) = 0x4;
                *(unsigned short *)((a4 + 0x1C)) = 0x1E;
                *(unsigned short *)((a4 + 0x1E)) = 0x14;
                (((struct o12A_ushort *)(a4))->v) = 0x0;
                thunk_FUN_0c05abb2(0x44, (a4 + 0x28));
                FUN_0c05258e(0x2, 0x14, 0x100, 0x1E, 0x0);
                t0 = (((struct o20_short *)(a4))->v);
                (((struct o20_ushort *)(a4))->v) = (t0 + 0x1);
                if ((int)(short)(t0 + 0x1) >= (int)0x3C) {
                    (((struct o136_uchar *)(a4))->v) = 0x0;
                    (((struct o20_ushort *)(a4))->v) = 0x0;
                    thunk_FUN_0c05abb2(0x43, (a4 + 0x28));
                }
                return FUN_0c0df2f0(a4);
            }
            *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
            if (((*(short *)((a4 + 0x1E))) & 0x1) != 0) {
                u0 = (((((struct o30_float *)(a4))->v)) + 10.0f);
            } else {
                u0 = (((((struct o30_float *)(a4))->v)) - 10.0f);
            }
            (((struct o30_float *)(a4))->v) = u0;
            if ((*(short *)0xC540994) == 120) {
                FUN_0c0df294(a4);
            }
            t0 = *(signed char *)0xC54098D;
            if (t0 != 9) {
                return t0;
            }
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            (((struct o30_float *)(a4))->v) = ((((struct o60_float *)(a4))->v));
            (((struct o4C_float *)(a4))->v) = 0.0f;
            (((struct o12A_ushort *)(a4))->v) = 0xFFFFFFFF;
            (((struct o136_uchar *)(a4))->v) = 0x0;
            (((struct o20_ushort *)(a4))->v) = 0x0;
            thunk_FUN_0c05abb2(0x43, (a4 + 0x28));
            return FUN_0c059c7a(0x8, 0x0);
        }
    } else {
        t0 = ((int (*)(void))(FUN_0c187798))();
        (((struct o12A_ushort *)(a4))->v) = 0x0;
    }
    t0 = *(signed char *)0xC54098D;
    t1 = t0;
    if (t0 != 8) {
    } else {
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        *(unsigned short *)((a4 + 0x1E)) = 0x0;
        t1 = 0x0;
    }
    return t1;
}

int FUN_0c143118(int a4, float f4, float f5, float f6)
{
    int stk[4];

    register int R1;
    register int R2;
    register int R3;
    register float F0;
    register float F2;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    v0_3 = a4;
    w0_0 = f5;
    w0_0 = f6;
    *(unsigned int *)(((int)stk + 0)) = (((short)(*(signed char *)((v0_3 + 0x1))) * (short)0x3938) + 0xC532498);
    v0_8 = *(signed char *)((v0_3 + 0x14));
    v0_7 = (v0_8);
    v0_4 = (0xC532498);
    v0_5 = (0x1);
    v0_0 = (v0_3);
    v0_1 = (0x0);
    v0_2 = (0x5);
    v0_6 = (0x100);
    w0_0 = (0.0f);
    if ((v0_8 == 0)) goto L_C14315A;
    if ((v0_7 == 1)) goto L_C1431A2;
    if ((v0_7 != 2)) goto L_C143156;
    L_C143474:;
    v0_7 = ((FUN_0c03f346(v0_0, v0_1, v0_2, v0_6)));
    L_C14347A:;
    return v0_7;
    L_C143156:;
    goto L_C143474;
    L_C1431A2:;
    v0_7 = *(signed char *)(((((short)(*(signed char *)((v0_0 + 0x1))) * (short)0x3938) + v0_4) + 0x14));
    v0_3 = (v0_7);
    if ((v0_7 == 1)) goto L_C1431C0;
    if (!((v0_3 != 3))) goto L_C1431C0;
    v0_7 = (0x18E3);
    v0_3 = (v0_1);
    goto L_C1431E6;
    L_C1431C0:;
    v0_7 = ((FUN_0c03f346(v0_0, v0_1, v0_2, v0_6)));
    goto L_C14347A;
    L_C1431E6:;
    if (((int)v0_3 < (int)((((struct oC0_int *)(v0_0))->v)))) goto L_C1431D0;
    v0_3 = *(signed char *)((v0_0 + 0x15));
    v0_7 = (v0_3);
    w0_1 = (0.100000001f);
    w0_2 = (1.0f);
    if ((v0_3 == 0)) goto L_C143228;
    if ((v0_7 == 1)) goto L_C1432AC;
    if ((v0_7 == 2)) goto L_C1432F4;
    goto L_C14347A;
    L_C1432F4:;
    v0_7 = (((struct oD0_int *)(v0_0))->v);
    (((struct o8C_float *)(v0_7))->v) = (((((struct o8C_float *)(v0_7))->v)) - 0.0500000007f);
    v0_3 = (v0_7);
    FPUL_ = (0x3D4CCCCD);
    if ((((((struct o8C_float *)(v0_7))->v)) > 0.0f)) goto L_C143312;
    (((struct o8C_float *)(v0_3))->v) = w0_0;
    L_C143312:;
    (((struct o18_float *)(v0_3))->v) = (((((struct o18_float *)(v0_3))->v)) - 0.0222222228f);
    w0_2 = (((struct o18_float *)(v0_3))->v);
    v0_7 = (0x18);
    w0_3 = (w0_2);
    FPUL_ = (0x3CB60B61);
    if ((w0_2 > 0.0f)) goto L_C14332A;
    *(float *)((v0_3 + v0_7)) = w0_0;
    L_C14332A:;
    w0_2 = *(float *)((v0_3 + v0_7));
    (((struct o20_float *)(v0_3))->v) = w0_2;
    (((struct o1C_float *)(v0_3))->v) = w0_2;
    v0_7 = (((struct oC8_int *)(v0_0))->v);
    (((struct o88_float *)(v0_7))->v) = (((((struct o88_float *)(v0_7))->v)) - w0_1);
    v0_3 = (v0_7);
    if ((((((struct o88_float *)(v0_7))->v)) > 0.0f)) goto L_C14334C;
    (((struct o88_float *)(v0_3))->v) = w0_0;
    L_C14334C:;
    (((struct o84_float *)(v0_3))->v) = ((((struct o88_float *)(v0_3))->v));
    v0_7 = (((struct oCC_int *)(v0_0))->v);
    (((struct o88_float *)(v0_7))->v) = (((((struct o88_float *)(v0_7))->v)) - w0_1);
    v0_3 = (v0_7);
    if ((((((struct o88_float *)(v0_7))->v)) > 0.0f)) goto L_C14336C;
    (((struct o88_float *)(v0_3))->v) = w0_0;
    L_C14336C:;
    (((struct o84_float *)(v0_3))->v) = ((((struct o88_float *)(v0_3))->v));
    v0_8 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_8 - 1);
    v0_7 = ((short)(v0_8 - 1));
    if (((int)(short)(v0_8 - 1) > 0)) goto L_C14347A;
    *(unsigned short *)((v0_0 + 0x1C)) = 0x10;
    (((struct o20_ushort *)(v0_0))->v) = v0_2;
    (((struct o15_uchar *)(v0_0))->v) = v0_1;
    (((struct o12A_ushort *)(v0_0))->v) = (~(((int)v0_5 << (int)(*(signed char *)((v0_0 + 0x1)))) | v0_6));
    (((struct o136_uchar *)(v0_0))->v) = v0_1;
    *(volatile int *)(((int)stk + 0));
    FUN_0c187798(v0_3, v0_1, v0_2);
    FUN_0c0e2390((v0_0 + 0x4C), (((int)stk + 0) + 0x4), (v0_0 + 0x28));
    FUN_0c17c450((v0_0 + 0x4C));
    math_vec3_mul_xyz((v0_0 + 0x4C), 27.0f, 27.0f, 27.0f);
    w0_0 = (((struct o4C_float *)(v0_0))->v);
    w0_1 = (((struct o54_float *)(v0_0))->v);
    w0_1 = (w0_1 * w0_1);
    w0_1 = w0_1 + w0_0 * w0_0;
    w0_0 = math_signed_sqrt(w0_1);
    *(unsigned int *)((v0_0 + 0x38)) = (math_atan2_angle16(((((struct o4C_float *)(v0_0))->v)), ((((struct o54_float *)(v0_0))->v))));
    w0_2 = (w0_0);
    w0_1 = (0.0f);
    if ((w0_0 != 0.0f)) goto L_C14344C;
    if ((w0_1 > ((((struct o50_float *)(v0_0))->v)))) goto L_C143410;
    *(unsigned int *)((v0_0 + 0x34)) = 0xFFFFC000;
    L_C14345C:;
    v0_7 = ((FUN_0c059e9a((((short)(*(signed char *)((v0_0 + 0x1))) * (short)0x3938) + v0_4), 0x23, (v0_0 + 0x28))));
    goto L_C14347A;
    L_C143410:;
    *(unsigned int *)((v0_0 + 0x34)) = 0x4000;
    goto L_C14345C;
    L_C14344C:;
    *(unsigned int *)((v0_0 + 0x34)) = (math_atan_angle16(((-((((struct o50_float *)(v0_0))->v))) / w0_2)));
    goto L_C14345C;
    L_C1432AC:;
    v0_3 = (((struct oD0_int *)(v0_0))->v);
    w0_0 = (((struct o18_float *)(v0_3))->v);
    (((struct o18_float *)(v0_3))->v) = (w0_0 + w0_1);
    v0_7 = (0x18);
    v0_3 = (v0_3);
    if ((w0_2 > (w0_0 + w0_1))) goto L_C1432C0;
    *(float *)((v0_3 + v0_7)) = w0_2;
    L_C1432C0:;
    w0_0 = *(float *)((v0_3 + v0_7));
    (((struct o20_float *)(v0_3))->v) = w0_0;
    (((struct o1C_float *)(v0_3))->v) = w0_0;
    FUN_0c17c130((v0_0 + 0x28), (v0_0 + 0x28), (v0_0 + 0x4C));
    L_C1432DA:;
    v0_7 = ((((int (*)(int, int, int))(FUN_0c143074))(v0_0, v0_1, v0_2)));
    goto L_C14347A;
    L_C143228:;
    FUN_0c17c130((v0_0 + 0x28), (v0_0 + 0x28), (v0_0 + 0x4C));
    v0_3 = (((struct oC8_int *)(v0_0))->v);
    (((struct o88_float *)(v0_3))->v) = (((((struct o88_float *)(v0_3))->v)) + 0.200000003f);
    (((struct o84_float *)(v0_3))->v) = ((((struct o88_float *)(v0_3))->v));
    v0_3 = (((struct oCC_int *)(v0_0))->v);
    (((struct o88_float *)(v0_3))->v) = (((((struct o88_float *)(v0_3))->v)) + 0.200000003f);
    (((struct o84_float *)(v0_3))->v) = ((((struct o88_float *)(v0_3))->v));
    v0_4 = (((struct oD0_int *)(v0_0))->v);
    (((struct o18_float *)(v0_4))->v) = (((((struct o18_float *)(v0_4))->v)) + w0_1);
    (((struct o8C_float *)(v0_4))->v) = (((((struct o8C_float *)(v0_4))->v)) + 0.200000003f);
    v0_3 = (v0_4);
    if ((w0_2 > ((((struct o8C_float *)(v0_4))->v)))) goto L_C14329E;
    v0_1 = *(int *)(((0xC4 + v0_0) + 0x8));
    v0_2 = *(int *)(((0xC4 + v0_0) + 0x4));
    (((struct o84_float *)(v0_1))->v) = w0_2;
    (((struct o88_float *)(v0_1))->v) = w0_2;
    (((struct o84_float *)(v0_2))->v) = w0_2;
    (((struct o88_float *)(v0_2))->v) = w0_2;
    (((struct o8C_float *)(v0_3))->v) = w0_2;
    (((struct o18_float *)(v0_3))->v) = w0_2;
    (((struct o15_uchar *)(v0_0))->v) = v0_5;
    v0_1 = ((0xC4 + v0_0));
    v0_2 = (v0_2);
    L_C14329E:;
    w0_0 = (((struct o18_float *)(v0_3))->v);
    (((struct o20_float *)(v0_3))->v) = w0_0;
    (((struct o1C_float *)(v0_3))->v) = w0_0;
    goto L_C1432DA;
    L_C1431D0:;
    v0_8 = *(int *)((((v0_3 << 2) + (0xC4 + v0_0)) + 0x0));
    (((struct o80_uint *)(v0_8))->v) = (((((struct o80_int *)(v0_8))->v)) + v0_7);
    v0_3 = ((v0_3 + 0x1));
    goto L_C1431E6;
    L_C14315A:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    (((struct o15_uchar *)(v0_0))->v) = v0_1;
    (((struct oA8_uchar *)(v0_0))->v) = v0_5;
    *(unsigned short *)((v0_0 + 0x1C)) = 0x10;
    *(unsigned short *)((v0_0 + 0x1E)) = v0_2;
    (((struct o20_ushort *)(v0_0))->v) = v0_2;
    v0_3 = (((struct oD0_int *)(v0_0))->v);
    *(unsigned short *)((v0_3 + 0x6)) = ((*(short *)((v0_3 + 0x6))) | 0x200);
    (((struct o20_float *)(v0_3))->v) = w0_0;
    (((struct o1C_float *)(v0_3))->v) = w0_0;
    (((struct o18_float *)(v0_3))->v) = w0_0;
    (((struct o12A_ushort *)(v0_0))->v) = (~(((int)v0_5 << (int)(*(signed char *)((v0_0 + 0x1)))) | v0_6));
    (((struct o136_uchar *)(v0_0))->v) = v0_1;
    goto L_C1431A2;
}
