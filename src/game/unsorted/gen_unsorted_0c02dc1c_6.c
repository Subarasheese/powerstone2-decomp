/* game/unsorted: functions 0C02DC1C-0C02EC54, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c02dca4(int);
int FUN_0c02de40(int);
extern int FUN_0c02e078();
int FUN_0c02e406(int, int, int, int, int);
int FUN_0c02fb24(int, int);
int FUN_0c03934e(int);
int FUN_0c03a028(int);
int FUN_0c03ee04(int);
int nlSelectMatrixStack(int);
int FUN_0c17e290(int, int);
int FUN_0c17e740(float, float, float);
void FUN_0c02e43c(int a4);

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
    nlSelectMatrixStack(0x1);
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
