/* Straight-line functions with calls and guards (batch gen_dv): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oDC_int { char p[0xDC]; int v; };
struct oE0_int { char p[0xE0]; int v; };
struct oE4_int { char p[0xE4]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int);
int FUN_0c058a6e(int, int, int, int, int, int);
int FUN_0c1171f0(int);
int FUN_0c1173dc(int, int);
extern int FUN_0c187798();
int FUN_0c111a30(int a4);

int FUN_0c111a30(int a4)
{
    int stk[10];
    register int t9;
    register int t10;
    register int t12;
    register int t16;
    register int t20;
    register int t22;
    register int t30;
    register int t36;
    register int t39;
    register int t40;
    register int t41;
    register int t42;
    register int t43;
    register int t85;
    register int t260;
    register int t261;
    register int t289;
    register int t290;
    register int t291;
    register int t295;
    register int t298;
    register int t303;
    register int t306;
    int t2;
    register int t207;
    register int t208;
    register int t209;
    register int t210;
    register int t80;
    register int t81;
    register int t82;
    register int t96;
    register int t97;
    register int t98;
    register int t99;
    int t102;
    register int t103;
    register int t114;
    register int t115;
    register int t116;
    register int t117;
    int t119;
    register int t120;
    register int t131;
    register int t132;
    register int t133;
    register int t134;
    int t136;
    register int t137;
    register int t148;
    register int t149;
    register int t150;
    register int t151;
    int t153;
    register int t154;
    register int t165;
    register int t166;
    register int t167;
    register int t168;
    int t170;
    register int t171;
    register int t182;
    register int t183;
    register int t184;
    register int t185;
    int t187;
    register int t188;
    register int t296;
    register int t299;
    register int t300;

    if (((int)(*(int *)(((*(int *)0xC4739A4) + 0x38))) >= 0) && (t2 = *(signed char *)((a4 + 0x14)), t2 != 0)) {
        (((struct o14_uchar *)(a4))->v) = (*(signed char *)(((*(int *)((a4 + 0x10))) + 0x14)));
    }
    t9 = *(signed char *)((a4 + 0x14));
    t10 = *(int *)0xC4739A4;
    if (t9 != 0) {
        if (t9 == 1) {
            return t9;
        }
        if (t9 == 2) {
            *(int *)((int)stk + 4) = 0x0;
            t12 = (*(int *)((t10 + 0x3C)));
            *(int *)((int)stk + 0) = t12;
            return (FUN_0c058a6e((0xB0 + a4), 0xC29106C, 0xC29107C, (*(int *)((t10 + 0x38))), t12, 0x0));
        }
        if (t9 == 3) {
            *(int *)((int)stk + 4) = 0x0;
            t16 = (*(int *)((t10 + 0x3C)));
            *(int *)((int)stk + 0) = t16;
            return (FUN_0c058a6e((0xB0 + a4), 0xC29106C, 0xC29107C, (*(int *)((t10 + 0x38))), t16, 0x0));
        }
        if (t9 == 4) {
            *(int *)((int)stk + 4) = 0x0;
            t20 = (*(int *)((t10 + 0x3C)));
            *(int *)((int)stk + 0) = t20;
            t22 = FUN_0c058a6e((0xB0 + a4), 0xC29106C, 0xC29107C, (*(int *)((t10 + 0x38))), t20, 0x0);
            if ((int)(*(int *)(((*(int *)0xC4739A4) + 0x38))) < 0) {
                return FUN_0c03f346(a4);
            }
            return t22;
        }
        return t9;
    }
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct oAC_ushort *)(a4))->v) = 0x61F;
    (((struct oA9_uchar *)(a4))->v) = 0x21;
    (((struct o14_uchar *)(a4))->v) = (*(signed char *)(((*(int *)((a4 + 0x10))) + 0x14)));
    FUN_0c1171f0(a4);
    t30 = *(int *)((0xC473C74 + ((*(int *)(((*(int *)0xC4739A4) + 0x34))) << 2)));
    t36 = t30;
    if ((int)t30 >= 0) {
        t36 = (*(int *)((((*(int *)((0xC473C74 + ((*(int *)(((*(int *)0xC4739A4) + 0x34))) << 2)))) << 2) + 0xC474410)));
    }
    *(unsigned int *)(((int)stk + 24)) = 0x0;
    *(unsigned int *)(((int)stk + 28)) = (((((t36 << 2) << 1) - t36) * 0xE) + 0xC29620E);
    *(unsigned int *)(((int)stk + 32)) = 0x0;
    *(unsigned int *)(((int)stk + 36)) = ((t36 << 2) + 0xC473D04);
    *(unsigned int *)(((int)stk + 20)) = 0xC2961FC;
    *(unsigned int *)(((int)stk + 16)) = 0xC296204;
    *(unsigned int *)(((int)stk + 12)) = 0xC296206;
    t39 = ((t36 << 2) + 0xC473D04);
    t40 = 0xC296206;
    t41 = 0xC296204;
    t42 = 0xC2961FC;
    t43 = 0x0;
    for (;;) {
        *(unsigned int *)(((int)stk + 8)) = (t43 << 2);
        if (((*(int *)(((t43 << 2) + 0xC2913D4))) & (*(int *)(((*(int *)(((int)stk + 36))) + 0x0)))) == 0) {
            if ((*(short *)(((*(int *)(((int)stk + 28))) + 0x0))) != -1) {
                t40 = 0xB9;
                t41 = 0x0;
                t39 = t40;
                t39 = (t39 + 0xB);
                t39 = (t39 + a4);
                t42 = (*(int *)0xC4B410C);
                t39 = (t39 + (*(int *)(((int)stk + 24))));
                t39 = (*(int *)((t39 + 0x0)));
                FUN_0c1173dc(t39, t40);
                t40 = 0xB9;
                t41 = 0x0;
                t39 = t40;
                t39 = (t39 + 0xB);
                t39 = (t39 + a4);
                t42 = (*(int *)0xC4B410C);
                t39 = (t39 + (*(int *)(((int)stk + 24))));
                t39 = (*(int *)((t39 + 0xC)));
                FUN_0c1173dc(t39, t40);
            } else {
                t207 = t39;
                t208 = t40;
                t209 = t41;
                t210 = t42;
            }
        } else {
            t39 = (((t36 << 2) << 1) - t36);
            t39 = (t39 + t43);
            t39 = (t39 * 0xE);
            t39 = (t39 + 0xC29620E);
            t39 = (*(short *)((t39 + 0x0)));
            if ((t39 != -1) && (((int)t39 >= 0) && ((int)t39 <= (int)0xB6))) {
                t40 = (((t36 << 2) << 1) - t36);
                t40 = (t40 + t43);
                t39 = 0xC4;
                t41 = 0x0;
                t39 = (t39 + a4);
                t42 = (*(int *)0xC4B410C);
                t40 = (t40 * 0xE);
                t39 = (t39 + (*(int *)(((int)stk + 8))));
                t40 = (t40 + 0xC29620E);
                t40 = (*(short *)((t40 + 0x0)));
                t39 = (*(int *)((t39 + 0x0)));
                FUN_0c1173dc(t39, t40);
            } else {
                t80 = t40;
                t81 = t41;
                t82 = t42;
            }
            t39 = (((t36 << 2) << 1) - t36);
            t40 = t80;
            t41 = t81;
            t42 = t82;
            t39 = (t39 + t43);
            t39 = (t39 * 0xE);
            t39 = (t39 + 0xC29620E);
            t85 = *(short *)((t39 + 0x2));
            t39 = t85;
            if ((t85 != -1) && (((int)t39 >= 0) && ((int)t39 <= (int)0xB6))) {
                t40 = (((t36 << 2) << 1) - t36);
                t40 = (t40 + t43);
                t39 = 0xC4;
                t41 = 0x0;
                t42 = (*(int *)0xC4B410C);
                t39 = (t39 + a4);
                t40 = (t40 * 0xE);
                t39 = (t39 + (*(int *)(((int)stk + 8))));
                t40 = (t40 + 0xC29620E);
                t40 = (*(short *)((t40 + 0x2)));
                t39 = (*(int *)((t39 + 0xC)));
                FUN_0c1173dc(t39, t40);
            } else {
                t96 = t39;
                t97 = t40;
                t98 = t41;
                t99 = t42;
            }
            t39 = t96;
            t40 = t97;
            t41 = t98;
            t42 = t99;
            if (((*(short *)((((((((t36 << 2) << 1) - t36) + t43) * 0xE) + 0xC29620E) + 0x0))) == 0xC0) && (t102 = *(int *)(((int)stk + 20)), t103 = *(short *)((t102 + 0x0)), t103 != -1)) {
                t40 = (*(int *)(((int)stk + 20)));
                t41 = 0x0;
                t39 = 0xC4;
                t39 = (t39 + a4);
                t42 = (*(int *)0xC4B410C);
                t40 = (*(short *)((t40 + 0x0)));
                t39 = (t39 + (*(int *)(((int)stk + 8))));
                t39 = (*(int *)((t39 + 0x0)));
                FUN_0c1173dc(t39, t40);
            } else {
                t114 = t39;
                t115 = t40;
                t116 = t41;
                t117 = t42;
            }
            t39 = t114;
            t40 = t115;
            t41 = t116;
            t42 = t117;
            if (((*(short *)((((((((t36 << 2) << 1) - t36) + t43) * 0xE) + 0xC29620E) + 0x2))) == 0xC0) && (t119 = *(int *)(((int)stk + 20)), t120 = *(short *)((t119 + 0x0)), t120 != -1)) {
                t40 = (*(int *)(((int)stk + 20)));
                t41 = 0x0;
                t39 = 0xC4;
                t39 = (t39 + a4);
                t42 = (*(int *)0xC4B410C);
                t40 = (*(short *)((t40 + 0x0)));
                t39 = (t39 + (*(int *)(((int)stk + 8))));
                t39 = (*(int *)((t39 + 0xC)));
                FUN_0c1173dc(t39, t40);
            } else {
                t131 = t39;
                t132 = t40;
                t133 = t41;
                t134 = t42;
            }
            t39 = t131;
            t40 = t132;
            t41 = t133;
            t42 = t134;
            if (((*(short *)((((((((t36 << 2) << 1) - t36) + t43) * 0xE) + 0xC29620E) + 0x0))) == 0xC1) && (t136 = *(int *)(((int)stk + 16)), t137 = *(short *)((t136 + 0x0)), t137 != -1)) {
                t40 = (*(int *)(((int)stk + 16)));
                t41 = 0x0;
                t39 = 0xC4;
                t39 = (t39 + a4);
                t42 = (*(int *)0xC4B410C);
                t40 = (*(short *)((t40 + 0x0)));
                t39 = (t39 + (*(int *)(((int)stk + 8))));
                t39 = (*(int *)((t39 + 0x0)));
                FUN_0c1173dc(t39, t40);
            } else {
                t148 = t39;
                t149 = t40;
                t150 = t41;
                t151 = t42;
            }
            t39 = t148;
            t40 = t149;
            t41 = t150;
            t42 = t151;
            if (((*(short *)((((((((t36 << 2) << 1) - t36) + t43) * 0xE) + 0xC29620E) + 0x2))) == 0xC1) && (t153 = *(int *)(((int)stk + 16)), t154 = *(short *)((t153 + 0x0)), t154 != -1)) {
                t40 = (*(int *)(((int)stk + 16)));
                t41 = 0x0;
                t39 = 0xC4;
                t39 = (t39 + a4);
                t42 = (*(int *)0xC4B410C);
                t40 = (*(short *)((t40 + 0x0)));
                t39 = (t39 + (*(int *)(((int)stk + 8))));
                t39 = (*(int *)((t39 + 0xC)));
                FUN_0c1173dc(t39, t40);
            } else {
                t165 = t39;
                t166 = t40;
                t167 = t41;
                t168 = t42;
            }
            t39 = t165;
            t40 = t166;
            t41 = t167;
            t42 = t168;
            if (((*(short *)((((((((t36 << 2) << 1) - t36) + t43) * 0xE) + 0xC29620E) + 0x0))) == 0xC2) && (t170 = *(int *)(((int)stk + 12)), t171 = *(short *)((t170 + 0x0)), t171 != -1)) {
                t40 = (*(int *)(((int)stk + 12)));
                t41 = 0x0;
                t39 = 0xC4;
                t39 = (t39 + a4);
                t42 = (*(int *)0xC4B410C);
                t40 = (*(short *)((t40 + 0x0)));
                t39 = (t39 + (*(int *)(((int)stk + 8))));
                t39 = (*(int *)((t39 + 0x0)));
                FUN_0c1173dc(t39, t40);
            } else {
                t182 = t39;
                t183 = t40;
                t184 = t41;
                t185 = t42;
            }
            t39 = t182;
            t40 = t183;
            t41 = t184;
            t42 = t185;
            if (((*(short *)((((((((t36 << 2) << 1) - t36) + t43) * 0xE) + 0xC29620E) + 0x2))) == 0xC2) && (t187 = *(int *)(((int)stk + 12)), t188 = *(short *)((t187 + 0x0)), t188 != -1)) {
                t40 = (*(int *)(((int)stk + 12)));
                t41 = 0x0;
                t39 = 0xC4;
                t39 = (t39 + a4);
                t42 = (*(int *)0xC4B410C);
                t40 = (*(short *)((t40 + 0x0)));
                t39 = (t39 + (*(int *)(((int)stk + 32))));
                t39 = (*(int *)((t39 + 0xC)));
                FUN_0c1173dc(t39, t40);
            } else {
                t207 = t39;
                t208 = t40;
                t209 = t41;
                t210 = t42;
            }
        }
        t39 = t207;
        t40 = t208;
        t41 = t209;
        t42 = t210;
        t43 = (t43 + 0x1);
        *(unsigned int *)(((int)stk + 24)) = ((*(int *)(((int)stk + 24))) + 0x4);
        *(unsigned int *)(((int)stk + 28)) = ((*(int *)(((int)stk + 28))) + 0xE);
        *(unsigned int *)(((int)stk + 32)) = ((*(int *)(((int)stk + 32))) + 0x4);
        if ((int)t43 < (int)0x3) continue;
        break;
    }
    if ((*(short *)((0xC29620E + ((((t36 << 2) << 1) - t36) * 0xE)))) != -1) {
        FUN_0c03744a(((((struct oDC_int *)(a4))->v)), 0xD, 0x4, (*(int *)0xC4B410C));
    }
    if ((*(short *)((0xC29620E + (((((t36 << 2) << 1) - t36) + 0x1) * 0xE)))) != -1) {
        FUN_0c03744a(((((struct oE0_int *)(a4))->v)), 0xD, 0x4, (*(int *)0xC4B410C));
    }
    if ((*(short *)((0xC29620E + (((((t36 << 2) << 1) - t36) + 0x2) * 0xE)))) != -1) {
        FUN_0c03744a(((((struct oE4_int *)(a4))->v)), 0xD, 0x4, (*(int *)0xC4B410C));
    }
    if ((*(short *)((0xC29620E + ((((t36 << 2) << 1) - t36) * 0xE)))) == -1) {
        if ((*(short *)((0xC29620E + (((((t36 << 2) << 1) - t36) + 0x1) * 0xE)))) == -1) {
            if ((*(short *)((0xC29620E + (((((t36 << 2) << 1) - t36) + 0x2) * 0xE)))) == -1) {
                *(volatile int *)0xC4B410C;
                FUN_0c1173dc(((((struct oC4_int *)(a4))->v)), 0xB8);
                t260 = 0x4;
                for (;;) {
                    t261 = ((0xC4 + a4) + t260);
                    t260 = (t260 + 0x4);
                    *(unsigned char *)(((*(int *)((t261 + 0x0))) + 0x0)) = 0x0;
                    if ((unsigned int)t260 >= (unsigned int)0x24) {
                        break;
                    }
                }
            }
        }
    }
    t289 = 0x0;
    t290 = 0x18;
    t291 = 0xC29135C;
    for (;;) {
        *(unsigned short *)(((*(int *)((((0xC4 + a4) + t289) + 0x0))) + 0x6)) = 0x1F;
        t291 = (t291 + 0xC);
        *(volatile int *)((((0xC4 + a4) + t289) + 0x0));
        t295 = ((int (*)(int, int, int))(FUN_0c187798))(t289, 0x1F, t290);
        t289 = t296;
        *(volatile int *)((((0xC4 + a4) + t296) + 0x0));
        t298 = ((int (*)(int))(FUN_0c187798))(t289);
        t289 = (t299 + 0x4);
        t290 = t300;
        if ((unsigned int)t289 >= (unsigned int)t300) {
            break;
        }
    }
    *(volatile int *)((a4 + 0xDC));
    t303 = ((int (*)(int, int, int))(FUN_0c187798))(t289, 0x0, t290);
    *(volatile int *)((a4 + 0xE0));
    t306 = ((int (*)(void))(FUN_0c187798))();
    *(volatile int *)((a4 + 0xE4));
    return (((int (*)(void))(FUN_0c187798))());
}
