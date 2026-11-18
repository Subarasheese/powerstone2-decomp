/* Straight-line functions with calls and guards (batch gen_gp): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o11C_int { char p[0x11C]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o168_float { char p[0x168]; float v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o48_short { char p[0x48]; short v; };
struct o4A_short { char p[0x4A]; short v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oDC_int { char p[0xDC]; int v; };
struct oE0_int { char p[0xE0]; int v; };
struct oE4_int { char p[0xE4]; int v; };
int FUN_0c03744a(int, int, int, int);
extern int FUN_0c037bf6();
int FUN_0c03f346(int);
int FUN_0c058a6e(int, int, int, int, int, int);
int FUN_0c059e60(int, int);
int FUN_0c059f20(int, int);
int FUN_0c05f22c(int);
int FUN_0c07d030(int, int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c085cac(int, int, int);
int FUN_0c0a3058(int, int, int, int);
int FUN_0c0a3080(int, int, int, int, float);
int FUN_0c1171f0(int);
int FUN_0c1173dc(int, int, int, int);
int FUN_0c136784(int);
int FUN_0c13691a(int);
int FUN_0c1373e2(int);
int FUN_0c14fc70(int, int);
int FUN_0c187a88(int, int, int);
int FUN_0c1965cc(int, int, int);
int FUN_0c19c906(int, int);
int FUN_0c19f98c(int, int);
int FUN_0c1a0388(int, int);
int FUN_0c1a0ec4(int, int, int);
int FUN_0c1a0ff0(int, int);
int FUN_0c1a11d0(int, int, int);
int FUN_0c1a1354(int, int);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int nlAddVector3op(int, int, int);
void FUN_0c111a30(int a4);
int FUN_0c0fa966(int a4);
int FUN_0c19fad6(int a4, int a5, int a6);
void FUN_0c0a4b38(int a4, int a5, int a6, int a7, float f4, float f5);

void FUN_0c111a30(int a4)
{
    int stk[10];
    register int t9;
    register int t10;
    register int t12;
    register int t16;
    register int t20;
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
    register int t292;
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

    if (((int)(*(int *)(((*(int *)0xC4739A4) + 0x38))) >= 0) && (t2 = *(signed char *)((a4 + 0x14)), t2 != 0)) {
        (((struct o14_uchar *)(a4))->v) = (*(signed char *)(((*(int *)((a4 + 0x10))) + 0x14)));
    }
    t9 = *(signed char *)((a4 + 0x14));
    t10 = *(int *)0xC4739A4;
    if (t9 != 0) {
        if (t9 == 1) {
            return;
        }
        if (t9 == 2) {
            *(int *)((int)stk + 4) = 0x0;
            t12 = (*(int *)((t10 + 0x3C)));
            *(int *)((int)stk + 0) = t12;
            FUN_0c058a6e((0xB0 + a4), 0xC29106C, 0xC29107C, (*(int *)((t10 + 0x38))), t12, 0x0);
            return;
        }
        if (t9 == 3) {
            *(int *)((int)stk + 4) = 0x0;
            t16 = (*(int *)((t10 + 0x3C)));
            *(int *)((int)stk + 0) = t16;
            FUN_0c058a6e((0xB0 + a4), 0xC29106C, 0xC29107C, (*(int *)((t10 + 0x38))), t16, 0x0);
            return;
        }
        if (t9 == 4) {
            *(int *)((int)stk + 4) = 0x0;
            t20 = (*(int *)((t10 + 0x3C)));
            *(int *)((int)stk + 0) = t20;
            FUN_0c058a6e((0xB0 + a4), 0xC29106C, 0xC29107C, (*(int *)((t10 + 0x38))), t20, 0x0);
            if ((int)(*(int *)(((*(int *)0xC4739A4) + 0x38))) < 0) {
                FUN_0c03f346(a4);
    return;
            }
            return;
        }
        return;
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
                FUN_0c1173dc(t39, t40, t41, t42);
                t40 = 0xB9;
                t41 = 0x0;
                t39 = t40;
                t39 = (t39 + 0xB);
                t39 = (t39 + a4);
                t42 = (*(int *)0xC4B410C);
                t39 = (t39 + (*(int *)(((int)stk + 24))));
                t39 = (*(int *)((t39 + 0xC)));
                FUN_0c1173dc(t39, t40, t41, t42);
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
                FUN_0c1173dc(t39, t40, t41, t42);
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
                FUN_0c1173dc(t39, t40, t41, t42);
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
                FUN_0c1173dc(t39, t40, t41, t42);
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
                FUN_0c1173dc(t39, t40, t41, t42);
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
                FUN_0c1173dc(t39, t40, t41, t42);
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
                FUN_0c1173dc(t39, t40, t41, t42);
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
                FUN_0c1173dc(t39, t40, t41, t42);
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
                FUN_0c1173dc(t39, t40, t41, t42);
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
                FUN_0c1173dc(((((struct oC4_int *)(a4))->v)), 0xB8, 0x0, (*(int *)0xC4B410C));
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
    t290 = 0xC29135C;
    for (;;) {
        *(unsigned short *)(((*(int *)((((0xC4 + a4) + t289) + 0x0))) + 0x6)) = 0x1F;
        t292 = t290;
        t290 = (t290 + 0xC);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((*(int *)((((0xC4 + a4) + t289) + 0x0))) + 0x6C)) = *(struct mv3 *)(t292); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((*(int *)((((0xC4 + a4) + t289) + 0x0))) + 0x84)) = *(struct mv3 *)(0xC2913C8); }
        t289 = (t289 + 0x4);
        if ((unsigned int)t289 >= (unsigned int)0x18) {
            break;
        }
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oDC_int *)(a4))->v)) + 0x6C)) = *(struct mv3 *)(0xC2913A4); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oE0_int *)(a4))->v)) + 0x6C)) = *(struct mv3 *)(0xC2913B0); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oE4_int *)(a4))->v)) + 0x6C)) = *(struct mv3 *)(0xC2913BC); }
}

int FUN_0c0fa966(int a4)
{
    int stk[10];

    register int R1;
    register int R2;
    register int R3;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register int v0_9;
    v0_7 = a4;
    v0_8 = *(signed char *)((v0_7 + 0x14));
    v0_6 = (v0_8);
    v0_2 = (0x5);
    v0_0 = (0xC058A6E);
    v0_3 = (0xC28E85C);
    v0_0 = (0x0);
    v0_1 = (v0_7);
    v0_5 = (0xC28E794);
    v0_4 = (0xC28E60C);
    if ((v0_8 == 0)) goto L_C0FA99E;
    if ((v0_6 == 1)) goto L_C0FAA14;
    if ((v0_6 != 99)) goto L_C0FA99A;
    L_C0FAD78:;
    return v0_6;
    L_C0FA99A:;
    goto L_C0FAD78;
    L_C0FAA14:;
    v0_7 = *(signed char *)((0x14 + (*(int *)((v0_1 + 0x10)))));
    v0_6 = (v0_7);
    if ((v0_7 != 99)) goto L_C0FAA22;
    goto L_C0FAD78;
    L_C0FAA22:;
    if (((*(signed char *)((0x14 + (*(int *)((v0_1 + 0x10)))))) != 1)) goto L_C0FAA34;
    (((struct oA8_uchar *)(v0_1))->v) = 0x1;
    L_C0FAA38:;
    v0_6 = *(short *)(((*(int *)((v0_1 + 0x10))) + 0x1C));
    v0_7 = (v0_6);
    if ((v0_6 == 10)) goto L_C0FAA52;
    if ((v0_7 == 9)) goto L_C0FAA52;
    if (!((v0_7 != 8))) goto L_C0FAA52;
    FUN_0c03744a(((((struct oC4_int *)(v0_1))->v)), 0x0, (*(int *)((((((*(short *)(((*(int *)((v0_1 + 0x10))) + 0x1C))) << 2) << 1) + v0_5) + 0x0))), (*(int *)0xC4B4118));
    FUN_0c03744a(((((struct oC8_int *)(v0_1))->v)), 0x0, (*(int *)((((((*(short *)(((*(int *)((v0_1 + 0x10))) + 0x1C))) << 2) << 1) + v0_5) + 0x4))), (*(int *)0xC4B4118));
    *(unsigned char *)((((((struct oC4_int *)(v0_1))->v)) + 0x0)) = 0x1;
    *(unsigned char *)((((((struct oC8_int *)(v0_1))->v)) + 0x0)) = 0x1;
    v0_5 = *(short *)(((*(int *)((v0_1 + 0x10))) + 0x1C));
    nlAddVector3op((((((struct oC4_int *)(v0_1))->v)) + 0x6C), 0xC28E5E4, (0xC28E64C + (((v0_5 << 1) + v0_5) << 2)));
    v0_5 = *(short *)(((*(int *)((v0_1 + 0x10))) + 0x1C));
    nlAddVector3op((((((struct oC8_int *)(v0_1))->v)) + 0x6C), 0xC28E5E4, (0xC28E64C + (((v0_5 << 1) + v0_5) << 2)));
    goto L_C0FAB0E;
    L_C0FAA52:;
    *(unsigned char *)((((((struct oC4_int *)(v0_1))->v)) + 0x0)) = v0_0;
    *(unsigned char *)((((((struct oC8_int *)(v0_1))->v)) + 0x0)) = v0_0;
    L_C0FAB0E:;
    v0_5 = (0x19);
    if (((int)(*(short *)((v0_1 + 0x1C))) <= (int)0x19)) goto L_C0FAB42;
    v0_6 = v0_5;
    *(int *)((int)stk + 12) = v0_6;
    *(int *)((int)stk + 8) = 0x32;
    v0_7 = *(short *)((v0_1 + 0x1C));
    *(unsigned int *)(((int)stk + 20)) = v0_3;
    *(unsigned int *)(((int)stk + 16)) = (v0_3 + 0x10);
    FUN_0c058a6e((((((struct oC4_int *)(v0_1))->v)) + 0x14), (v0_3 + 0x10), v0_3, v0_7, 0x32, v0_6);
    v0_5 = v0_5;
    *(int *)((int)stk + 4) = v0_5;
    *(int *)((int)stk + 0) = 0x32;
    v0_6 = *(short *)((v0_1 + 0x1C));
    v0_7 = *(int *)(((int)stk + 20));
    v0_8 = *(int *)(((int)stk + 16));
    *(unsigned int *)(((int)stk + 4)) = v0_5;
    *(unsigned int *)(((int)stk + 0)) = 0x32;
    v0_5 = (v0_8);
    v0_7 = (v0_7);
    v0_6 = (v0_6);
    L_C0FAB68:;
    FUN_0c058a6e((((((struct oC8_int *)(v0_1))->v)) + 0x14), v0_5, v0_7, v0_6, *(int *)((int)stk + 0), *(int *)((int)stk + 4));
    v0_5 = *(short *)((v0_1 + 0x1C));
    *(unsigned short *)((v0_1 + 0x1C)) = (v0_5 + 0x1);
    if (((int)(short)(v0_5 + 0x1) <= (int)0x32)) goto L_C0FAB86;
    *(unsigned short *)((v0_1 + 0x1C)) = v0_0;
    L_C0FAB86:;
    v0_5 = (FUN_0c05f22c(0x400)) == 0;
    if (v0_5) goto L_C0FABB6;
    v0_6 = (0x16);
    if (((*(signed char *)((v0_1 + 0x16))) != 0)) goto L_C0FABB6;
    *(unsigned char *)((v0_1 + v0_6)) = ((*(signed char *)((v0_1 + v0_6))) + 0x1);
    { struct mv4 { int w[4]; }; *(struct mv4 *)(((*(int *)(((0xC4 + v0_1) + 0x8))) + 0x14)) = *(struct mv4 *)((((((struct oC4_int *)(v0_1))->v)) + 0x14)); }
    (((struct o20_ushort *)(v0_1))->v) = v0_0;
    L_C0FABB6:;
    v0_5 = *(signed char *)((v0_1 + 0x16));
    v0_6 = (v0_5);
    if ((v0_5 == 0)) goto L_C0FAC88;
    if ((v0_6 == 1)) goto L_C0FABF0;
    if ((v0_6 == 2)) goto L_C0FAC14;
    if (!((v0_6 == 3))) goto L_C0FAC88;
    *(int *)((int)stk + 12) = 0x0;
    *(int *)((int)stk + 8) = 0x19;
    FUN_0c058a6e((((int)stk + 8) + 0x10), v0_3, (v0_3 + 0x10), (*(short *)((v0_1 + 0x1C))), 0x19, 0x0);
    *(int *)((int)stk + 4) = 0x0;
    v0_5 = v0_2;
    *(int *)((int)stk + 0) = v0_5;
    FUN_0c058a6e((((((struct oC4_int *)(v0_1))->v)) + 0x14), (((int)stk + 0) + 0x18), 0xC28E60C, ((((struct o20_short *)(v0_1))->v)), v0_5, 0x0);
    v0_5 = (((struct o20_short *)(v0_1))->v);
    (((struct o20_ushort *)(v0_1))->v) = (v0_5 + 0x1);
    if (((int)(short)(v0_5 + 0x1) <= (int)v0_2)) goto L_C0FAC88;
    (((struct o16_uchar *)(v0_1))->v) = v0_0;
    goto L_C0FAC84;
    L_C0FAC88:;
    v0_5 = (FUN_0c05f22c(0x800)) == 0;
    if (v0_5) goto L_C0FACB8;
    v0_6 = (0x17);
    if (((*(signed char *)((v0_1 + 0x17))) != 0)) goto L_C0FACB8;
    *(unsigned char *)((v0_1 + v0_6)) = ((*(signed char *)((v0_1 + v0_6))) + 0x1);
    { struct mv4 { int w[4]; }; *(struct mv4 *)(((*(int *)(((0xC4 + v0_1) + 0xC))) + 0x14)) = *(struct mv4 *)(((*(int *)(((0xC4 + v0_1) + 0x4))) + 0x14)); }
    (((struct o22_ushort *)(v0_1))->v) = v0_0;
    L_C0FACB8:;
    v0_5 = *(signed char *)((v0_1 + 0x17));
    v0_6 = (v0_5);
    if ((v0_5 == 0)) goto L_C0FAD78;
    if ((v0_6 == 1)) goto L_C0FACD0;
    if ((v0_6 == 2)) goto L_C0FAD08;
    if ((v0_6 == 3)) goto L_C0FAD30;
    goto L_C0FAD78;
    L_C0FAD30:;
    *(int *)((int)stk + 12) = 0x0;
    *(int *)((int)stk + 8) = 0x19;
    FUN_0c058a6e((((int)stk + 8) + 0x10), v0_3, (v0_3 + 0x10), (*(short *)((v0_1 + 0x1C))), 0x19, 0x0);
    *(int *)((int)stk + 4) = 0x0;
    v0_3 = v0_2;
    *(int *)((int)stk + 0) = v0_3;
    FUN_0c058a6e((((((struct oC8_int *)(v0_1))->v)) + 0x14), (((int)stk + 0) + 0x18), 0xC28E60C, ((((struct o20_short *)(v0_1))->v)), v0_3, 0x0);
    v0_3 = (((struct o22_short *)(v0_1))->v);
    (((struct o22_ushort *)(v0_1))->v) = (v0_3 + 0x1);
    v0_6 = (0x22);
    if (((int)(short)(v0_3 + 0x1) <= (int)v0_2)) goto L_C0FAD78;
    (((struct o17_uchar *)(v0_1))->v) = v0_0;
    L_C0FAD74:;
    (((struct o22_ushort *)(v0_1))->v) = v0_0;
    v0_6 = (0x22);
    goto L_C0FAD78;
    L_C0FAD08:;
    { struct mv4 { int w[4]; }; *(struct mv4 *)((((((struct oC8_int *)(v0_1))->v)) + 0x14)) = *(struct mv4 *)(v0_4); }
    v0_2 = (((struct o22_short *)(v0_1))->v);
    (((struct o22_ushort *)(v0_1))->v) = (v0_2 + 0x1);
    v0_6 = (0x22);
    if (((int)(short)(v0_2 + 0x1) <= (int)0x4)) goto L_C0FAD78;
    (((struct o17_uchar *)(v0_1))->v) = ((*(signed char *)((v0_1 + 0x17))) + 0x1);
    goto L_C0FAD74;
    L_C0FACD0:;
    { struct mv4 { int w[4]; }; *(struct mv4 *)((((((struct oC8_int *)(v0_1))->v)) + 0x14)) = *(struct mv4 *)(v0_4); }
    v0_2 = (((struct o22_short *)(v0_1))->v);
    (((struct o22_ushort *)(v0_1))->v) = (v0_2 + 0x1);
    v0_6 = (0x22);
    if (((int)(short)(v0_2 + 0x1) <= (int)0x8)) goto L_C0FAD78;
    (((struct o17_uchar *)(v0_1))->v) = v0_0;
    v0_6 = (0x17);
    goto L_C0FAD78;
    L_C0FAC84:;
    (((struct o20_ushort *)(v0_1))->v) = v0_0;
    goto L_C0FAC88;
    L_C0FAC14:;
    { struct mv4 { int w[4]; }; *(struct mv4 *)((((((struct oC4_int *)(v0_1))->v)) + 0x14)) = *(struct mv4 *)(v0_4); }
    v0_5 = (((struct o20_short *)(v0_1))->v);
    (((struct o20_ushort *)(v0_1))->v) = (v0_5 + 0x1);
    if (((int)(short)(v0_5 + 0x1) <= (int)0x4)) goto L_C0FAC88;
    (((struct o16_uchar *)(v0_1))->v) = ((*(signed char *)((v0_1 + 0x16))) + 0x1);
    goto L_C0FAC84;
    L_C0FABF0:;
    { struct mv4 { int w[4]; }; *(struct mv4 *)((((((struct oC4_int *)(v0_1))->v)) + 0x14)) = *(struct mv4 *)(v0_4); }
    v0_5 = (((struct o20_short *)(v0_1))->v);
    (((struct o20_ushort *)(v0_1))->v) = (v0_5 + 0x1);
    if (((int)(short)(v0_5 + 0x1) <= (int)0x8)) goto L_C0FAC88;
    (((struct o16_uchar *)(v0_1))->v) = v0_0;
    goto L_C0FAC88;
    L_C0FAB42:;
    v0_6 = v0_0;
    *(int *)((int)stk + 12) = v0_6;
    v0_7 = v0_5;
    *(int *)((int)stk + 8) = v0_7;
    v0_8 = *(short *)((v0_1 + 0x1C));
    *(unsigned int *)(((int)stk + 16)) = (v0_3 + 0x10);
    *(unsigned int *)(((int)stk + 20)) = v0_3;
    FUN_0c058a6e((((((struct oC4_int *)(v0_1))->v)) + 0x14), v0_3, (v0_3 + 0x10), v0_8, v0_7, v0_6);
    v0_7 = v0_0;
    *(int *)((int)stk + 4) = v0_7;
    v0_5 = v0_5;
    *(int *)((int)stk + 0) = v0_5;
    v0_6 = *(short *)((v0_1 + 0x1C));
    v0_8 = *(int *)(((int)stk + 16));
    v0_9 = *(int *)(((int)stk + 20));
    *(unsigned int *)(((int)stk + 4)) = v0_7;
    *(unsigned int *)(((int)stk + 0)) = v0_5;
    v0_5 = (v0_9);
    v0_7 = (v0_8);
    v0_6 = (v0_6);
    goto L_C0FAB68;
    L_C0FAA34:;
    (((struct oA8_uchar *)(v0_1))->v) = v0_0;
    goto L_C0FAA38;
    L_C0FA99E:;
    (((struct o14_uchar *)(v0_1))->v) = ((*(signed char *)((v0_1 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(v0_1))->v) = 0x1;
    (((struct oAC_ushort *)(v0_1))->v) = 0x1F;
    (((struct oA9_uchar *)(v0_1))->v) = 0x21;
    (((struct o30_float *)(v0_1))->v) = (1.0f + 1.0f);
    FUN_0c1171f0(v0_1);
    FUN_0c03744a(((((struct oC4_int *)(v0_1))->v)), 0x0, (*(int *)((((((*(short *)(((*(int *)((v0_1 + 0x10))) + 0x1C))) << 2) << 1) + v0_5) + 0x0))), (*(int *)0xC4B4118));
    FUN_0c03744a(((((struct oC8_int *)(v0_1))->v)), 0x0, (*(int *)((((((*(short *)(((*(int *)((v0_1 + 0x10))) + 0x1C))) << 2) << 1) + v0_5) + 0x4))), (*(int *)0xC4B4118));
    v0_6 = (((struct oC4_int *)(v0_1))->v);
    *(unsigned short *)((v0_6 + 0x6)) = ((*(short *)((v0_6 + 0x6))) | 0x600);
    v0_6 = (((struct oC8_int *)(v0_1))->v);
    *(unsigned short *)((v0_6 + 0x6)) = ((*(short *)((v0_6 + 0x6))) | 0x600);
    goto L_C0FAA14;
}

int FUN_0c19fad6(int a4, int a5, int a6)
{
    int stk[36];
    register int t60;
    register int t150;

    register int R1;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register int v0_9;
    v0_6 = a4;
    v0_0 = a5;
    v0_1 = a6;
    *(unsigned short *)(((int)stk + 8)) = v0_1;
    v0_7 = *(signed char *)((v0_6 + 0xA));
    v0_9 = *(int *)((v0_6 + 0x0));
    v0_4 = *(int *)(((((unsigned short)(unsigned char)v0_7 * (unsigned short)0x8C) + v0_9) + 0x4));
    *(unsigned short *)(((int)stk + 4)) = (FUN_0c1a0ff0((((int)stk + 0) + 0xC), v0_0));
    v0_8 = *(signed char *)(((int)stk + 34));
    v0_3 = (0x0);
    v0_1 = (0xC8B72C0);
    v0_2 = (v0_0);
    v0_0 = (v0_6);
    v0_4 = (v0_4);
    v0_6 = ((unsigned char)v0_8);
    v0_5 = ((((unsigned short)(unsigned char)v0_7 * (unsigned short)0x8C) + v0_9));
    v0_7 = ((((unsigned short)(unsigned char)v0_7 * (unsigned short)0x8C) + v0_9));
    if (((unsigned char)v0_8 != 6)) goto L_C19FB2E;
    if (((*(short *)(((int)stk + 24))) != 0)) goto L_C19FB2E;
    if (((*(signed char *)(((int)stk + 30))) == 0)) goto L_C19FB60;
    L_C19FB2E:;
    if ((v0_6 == 6)) goto L_C19FB3C;
    *(unsigned int *)((v0_0 + 0x10)) = ((*(int *)((v0_0 + 0x10))) + 0x1);
    L_C19FBA6:;
    *(unsigned int *)((v0_2 + 0x0)) = (FUN_0c1a0ec4((((int)stk + 0) + 0xC), (*(int *)((v0_2 + 0x0))), 0x1));
    v0_5 = (0x40);
    L_C19FEE2:;
    return v0_5;
    L_C19FB3C:;
    *(unsigned int *)((v0_0 + 0x14)) = ((*(int *)((v0_0 + 0x14))) + 0x1);
    goto L_C19FBA6;
    L_C19FB60:;
    *(unsigned short *)(((int)stk + 4)) = ((*(short *)(((int)stk + 4))) + (FUN_0c1a1354((((int)stk + 0) + 0x4C), v0_2)));
    if (((*(signed char *)(((int)stk + 101))) != 0)) goto L_C19FB92;
    if (((*(signed char *)(((int)stk + 102))) != 0)) goto L_C19FB92;
    if (((*(signed char *)(((int)stk + 100))) != 0)) goto L_C19FB92;
    if (((*(signed char *)(((int)stk + 98))) != 0)) goto L_C19FBB8;
    L_C19FB92:;
    *(unsigned int *)((v0_0 + 0x14)) = ((*(int *)((v0_0 + 0x14))) + 0x1);
    *(unsigned int *)((v0_2 + 0x0)) = (FUN_0c1a11d0((((int)stk + 0) + 0x4C), (*(int *)((v0_2 + 0x0))), 0x0));
    goto L_C19FBA6;
    L_C19FBB8:;
    if (((*(int *)(((int)stk + 12))) != (*(int *)((v0_4 + 0x8))))) goto L_C19FBE0;
    if (((*(int *)(((int)stk + 16))) != (*(int *)((v0_4 + 0xC))))) goto L_C19FBE0;
    if (((*(short *)(((int)stk + 76))) != ((((struct o48_short *)(v0_4))->v)))) goto L_C19FBE0;
    if (!(((*(short *)(((int)stk + 78))) == ((((struct o4A_short *)(v0_4))->v))))) goto L_C19FBE0;
    if ((v0_7 == v0_5)) goto L_C19FC14;
    if ((v0_4 != v0_5)) goto L_C19FC0A;
    *(unsigned char *)((v0_0 + 0xA)) = (*(signed char *)((v0_7 + 0x0)));
    goto L_C19FC14;
    L_C19FBE0:;
    if ((v0_4 == v0_5)) goto L_C19FBF0;
    v0_6 = *(int *)((v0_4 + 0x4));
    *(unsigned int *)((v0_0 + 0x20)) = ((*(int *)((v0_0 + 0x20))) + 0x1);
    v0_7 = v0_4;
    v0_4 = (v0_6);
    v0_7 = v0_7;
    goto L_C19FBB8;
    L_C19FBF0:;
    *(unsigned int *)((v0_0 + 0x24)) = ((*(int *)((v0_0 + 0x24))) + 0x1);
    *(unsigned char *)((v0_0 + 0xA)) = (*(signed char *)((v0_7 + 0x0)));
    L_C19FE98:;
    *(unsigned char *)(((int)stk + 34)) = (*(signed char *)((v0_4 + 0x0)));
    { struct mv16 { int w[16]; }; *(struct mv16 *)((v0_4 + 0x8)) = *(struct mv16 *)((((int)stk + 0) + 0xC)); }
    v0_1 = (((int)stk + 0) + 0x4C);
    v0_3 = ((((int)stk + 0) + 0x4C) + 68);
    v0_5 = (v0_4 + 0x48);
    for (;;) { t60 = *(int *)v0_1; v0_1 = (v0_1 + 4); if ((unsigned int)v0_3 < (unsigned int)v0_1) break; *(unsigned int *)v0_5 = t60; v0_5 = (v0_5 + 4); }
    *(unsigned char *)((v0_0 + 0xB)) = (*(signed char *)((v0_4 + 0x0)));
    *(unsigned int *)((v0_0 + 0x18)) = ((*(int *)((v0_0 + 0x18))) + 0x1);
    v0_0 = FUN_0c1a11d0((((int)stk + 0) + 0x4C), (*(int *)((v0_2 + 0x0))), 0x0);
    *(unsigned int *)((v0_2 + 0x0)) = v0_0;
    *(unsigned int *)((v0_2 + 0x0)) = (FUN_0c1a0ec4((((int)stk + 0) + 0xC), v0_0, 0x1));
    v0_5 = (0x70);
    goto L_C19FEE2;
    L_C19FC14:;
    v0_5 = ((v0_4 + 0x48));
    if (((*(signed char *)(((int)stk + 31))) == (*(signed char *)((v0_4 + 0x1B))))) goto L_C19FC28;
    goto L_C19FE98;
    L_C19FC28:;
    if (((*(signed char *)(((int)stk + 35))) == (*(signed char *)((v0_4 + 0x1F))))) goto L_C19FC38;
    goto L_C19FE98;
    L_C19FC38:;
    if (((*(signed char *)(((int)stk + 32))) == (*(signed char *)((v0_4 + 0x1C))))) goto L_C19FC48;
    goto L_C19FE98;
    L_C19FC48:;
    if (((*(signed char *)(((int)stk + 29))) == (*(signed char *)((v0_4 + 0x19))))) goto L_C19FC58;
    goto L_C19FE98;
    L_C19FC58:;
    if (((*(signed char *)(((int)stk + 33))) == (*(signed char *)((v0_4 + 0x1D))))) goto L_C19FC68;
    goto L_C19FE98;
    L_C19FC68:;
    if (((*(signed char *)(((int)stk + 103))) == (*(signed char *)((v0_4 + 0x63))))) goto L_C19FC78;
    goto L_C19FE98;
    L_C19FC78:;
    if (((int)(unsigned char)(*(signed char *)(((int)stk + 35))) <= 0)) goto L_C19FC9C;
    v0_6 = (FUN_0c1965cc((((int)stk + 0) + 0x24), (v0_4 + 0x20), (unsigned char)(*(signed char *)(((int)stk + 35))))) == 0;
    if (v0_6) goto L_C19FC9C;
    goto L_C19FE98;
    L_C19FC9C:;
    if (((int)(unsigned char)(*(signed char *)(((int)stk + 103))) <= 0)) goto L_C19FCC0;
    v0_6 = (FUN_0c1965cc((((int)stk + 0) + 0x68), (v0_4 + 0x64), (unsigned char)(*(signed char *)(((int)stk + 103))))) == 0;
    if (v0_6) goto L_C19FCC0;
    goto L_C19FE98;
    L_C19FCC0:;
    v0_6 = ((*(short *)(((int)stk + 92))));
    if (((*(signed char *)(((int)stk + 97))) == 0)) goto L_C19FCDC;
    *(unsigned int *)(((int)stk + 0)) = (unsigned short)v0_6;
    v0_3 = (0x1);
    v0_1 = ((FUN_0c19f98c(v0_1, (unsigned short)v0_6)));
    L_C19FCEA:;
    v0_6 = *(short *)(((int)stk + 88));
    v0_7 = *(short *)((v0_5 + 0xC));
    *(unsigned int *)(((int)stk + 0)) = ((unsigned short)v0_6 - (unsigned short)v0_7);
    v0_8 = (((unsigned short)v0_6 - (unsigned short)v0_7));
    if ((((unsigned short)v0_6 - (unsigned short)v0_7) == 0)) goto L_C19FD08;
    v0_3 = ((v0_3 | 0x2));
    v0_1 = ((FUN_0c19f98c(v0_1, v0_8)));
    L_C19FD08:;
    v0_6 = *(int *)((v0_5 + 0x8));
    v0_7 = *(int *)(((int)stk + 84));
    *(unsigned int *)(((int)stk + 0)) = (v0_7 - v0_6);
    v0_8 = ((v0_7 - v0_6));
    if (((v0_7 - v0_6) == 0)) goto L_C19FD2C;
    if (((unsigned int)v0_8 <= (unsigned int)0xFFFF)) goto L_C19FD20;
    goto L_C19FE98;
    L_C19FD20:;
    v0_3 = ((v0_3 | 0x4));
    v0_1 = ((FUN_0c19f98c(v0_1, (*(int *)(((int)stk + 0))))));
    L_C19FD2C:;
    v0_5 = *(int *)((v0_5 + 0x4));
    v0_6 = *(int *)(((int)stk + 80));
    v0_7 = ((v0_6 - v0_5));
    if (((v0_6 - v0_5) == 0)) goto L_C19FD4E;
    if (((unsigned int)v0_7 <= (unsigned int)0xFFFF)) goto L_C19FD42;
    goto L_C19FE98;
    L_C19FD42:;
    v0_3 = ((v0_3 | 0x8));
    v0_1 = ((FUN_0c19f98c(v0_1, v0_7)));
    L_C19FD4E:;
    v0_5 = ((short)v0_3);
    if (((short)v0_3 == 0)) goto L_C19FD70;
    if ((v0_5 != 11)) goto L_C19FD5C;
    goto L_C19FE98;
    L_C19FD5C:;
    if ((v0_5 != 15)) goto L_C19FD64;
    goto L_C19FE98;
    L_C19FD64:;
    if ((v0_5 == 12)) goto L_C19FDA4;
    if (!((v0_5 == 8))) goto L_C19FDCE;
    if ((v0_7 != ((unsigned short)(*(short *)((v0_4 + 0x10))) - (*(short *)(((int)stk + 4)))))) goto L_C19FDCE;
    v0_3 = (0xF);
    goto L_C19FDCC;
    L_C19FDCE:;
    v0_5 = *(short *)(((int)stk + 22));
    v0_6 = *(short *)((v0_4 + 0x12));
    v0_7 = (((unsigned short)v0_5 - (unsigned short)v0_6));
    if ((((unsigned short)v0_5 - (unsigned short)v0_6) == 1)) goto L_C19FDEC;
    v0_3 = ((v0_3 | 0x20));
    v0_1 = ((FUN_0c19f98c(v0_1, v0_7)));
    L_C19FDEC:;
    if (((*(signed char *)(((int)stk + 99))) == 0)) goto L_C19FDF8;
    v0_3 = ((v0_3 | 0x10));
    L_C19FDF8:;
    *(unsigned int *)(((int)stk + 4)) = (unsigned short)(*(short *)(((int)stk + 90)));
    { struct mv16 { int w[16]; }; *(struct mv16 *)((v0_4 + 0x8)) = *(struct mv16 *)((((int)stk + 0) + 0xC)); }
    v0_5 = (((int)stk + 0) + 0x4C);
    v0_6 = ((((int)stk + 0) + 0x4C) + 68);
    v0_7 = (v0_4 + 0x48);
    for (;;) { t150 = *(int *)v0_5; v0_5 = (v0_5 + 4); if ((unsigned int)v0_6 < (unsigned int)v0_5) break; *(unsigned int *)v0_7 = t150; v0_7 = (v0_7 + 4); }
    v0_1 = ((v0_1 - 0xC8B72C0));
    if (((*(short *)(((int)stk + 8))) == 0)) goto L_C19FE2E;
    if (!(((*(signed char *)((v0_0 + 0xB))) == (*(signed char *)((v0_4 + 0x0)))))) goto L_C19FE2E;
    v0_4 = FUN_0c1a0388((*(int *)((v0_2 + 0x0))), (v0_1 + 0x3));
    *(unsigned int *)((v0_2 + 0x0)) = v0_4;
    v0_2 = *(int *)((v0_4 + 0x0));
    *(unsigned char *)((v0_2 + 0x0)) = v0_3;
    v0_6 = (v0_2);
    goto L_C19FE62;
    L_C19FE2E:;
    v0_5 = FUN_0c1a0388((*(int *)((v0_2 + 0x0))), (v0_1 + 0x4));
    *(unsigned int *)((v0_2 + 0x0)) = v0_5;
    v0_2 = *(int *)((v0_5 + 0x0));
    *(unsigned char *)((v0_2 + 0x0)) = (v0_3 | 0x40);
    *(unsigned char *)(((v0_2 + 0x1) + 0x0)) = (*(signed char *)((v0_4 + 0x0)));
    *(unsigned char *)((v0_0 + 0xB)) = (*(signed char *)((v0_4 + 0x0)));
    v0_6 = ((v0_2 + 0x1));
    L_C19FE62:;
    v0_2 = FUN_0c19c906((v0_6 + 0x1), (*(int *)(((int)stk + 4))));
    FUN_0c187a88(v0_2, 0xC8B72C0, (short)v0_1);
    *(unsigned int *)((v0_0 + 0x1C)) = ((*(int *)((v0_0 + 0x1C))) + 0x1);
    v0_5 = (0x80);
    goto L_C19FEE2;
    L_C19FDCC:;
    v0_1 = (0xC8B72C0);
    goto L_C19FDCE;
    L_C19FDA4:;
    if ((v0_7 != (*(int *)(((int)stk + 0))))) goto L_C19FDCE;
    if ((v0_7 != ((unsigned short)(*(short *)((v0_4 + 0x10))) - (*(short *)(((int)stk + 4)))))) goto L_C19FDCE;
    v0_3 = (0xB);
    goto L_C19FDCC;
    L_C19FD70:;
    v0_5 = *(short *)(((0x10 + v0_4) + 0x0));
    v0_6 = ((unsigned short)v0_5);
    if (((unsigned short)(*(short *)(((int)stk + 20))) != (unsigned short)v0_5)) goto L_C19FD84;
    goto L_C19FE98;
    L_C19FD84:;
    if ((v0_6 == (*(short *)(((int)stk + 4))))) goto L_C19FDCE;
    goto L_C19FE98;
    L_C19FCDC:;
    v0_7 = (unsigned short)v0_6 == (unsigned short)(*(short *)((v0_5 + 0x10)));
    v0_6 = ((unsigned short)v0_6);
    if (v0_7) goto L_C19FCEA;
    goto L_C19FE98;
    L_C19FC0A:;
    *(unsigned int *)((v0_7 + 0x4)) = (*(int *)((v0_4 + 0x4)));
    *(unsigned int *)((v0_4 + 0x4)) = (*(int *)((v0_5 + 0x4)));
    *(unsigned int *)((v0_5 + 0x4)) = v0_4;
    goto L_C19FC14;
}

void FUN_0c0a4b38(int a4, int a5, int a6, int a7, float f4, float f5)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
                t1 = *(short *)((a4 + 0x1E));
                if (t1 == 0) {
                    u0 = (((struct o2C_float *)(a4))->v);
                    u1 = (((struct o168_float *)(a4))->v);
                    if (!((u1 + 60.0f) > u0)) {
                        if (!(u0 > (u1 + -60.0f))) {
                            *(unsigned short *)((a4 + 0x1E)) = 0xA;
                            (((struct o50_float *)(a4))->v) = ((((struct o2C_float *)(a4))->v));
                            (((struct o5C_float *)(a4))->v) = ((((((struct o168_float *)(a4))->v)) - ((((struct o2C_float *)(a4))->v))) + 300.0f);
                        }
                    }
                } else {
                    *(unsigned short *)((a4 + 0x1E)) = (t1 - 1);
                    if ((int)(short)(t1 - 1) > 0) {
                        (((struct o2C_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + (((((((struct o5C_float *)(a4))->v)) * (float)((-(*(short *)((a4 + 0x1E)))) + 0xA)) / 10.0f)));
                    }
                }
                FUN_0c0a3080(a4, a5, a6, a7, 7.0f);
                (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
                (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o54_float *)(a4))->v)));
                t1 = (((struct o20_short *)(a4))->v);
                (((struct o20_ushort *)(a4))->v) = (t1 + 0x1);
                u0 = ((((struct o2C_float *)(a4))->v));
                u0 = u0 + 5.0f * (math_sin_angle16(((((short)(t1 + 0x1) << 8) << 2) << 1)));
                (((struct o2C_float *)(a4))->v) = u0;
                t1 = ((int (*)(int))(FUN_0c037bf6))(a4);
                FUN_0c136784(a4);
                if ((int)(*(short *)((a4 + 0x1C))) <= (int)(*(int *)0xC25D354)) {
                } else {
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    FUN_0c0a3058(a4, (*(signed char *)((a4 + 0x1))), 0x1, 0x14);
                    t1 = *(int *)(((0x118 + a4) + 0x4));
                    t2 = (((struct o118_int *)(a4))->v);
                    (((struct oA0_float *)(t1))->v) = 1.0f;
                    (((struct o9C_float *)(t1))->v) = 1.0f;
                    (((struct oA0_float *)(t2))->v) = 1.0f;
                    (((struct o9C_float *)(t2))->v) = 1.0f;
                    t1 = *(int *)(((0x118 + a4) + 0x4));
                    t2 = (((struct o118_int *)(a4))->v);
                    (((struct o98_float *)(t1))->v) = 1.0f;
                    (((struct o98_float *)(t2))->v) = 1.0f;
                    (((struct o94_float *)(t1))->v) = 1.0f;
                    (((struct o94_float *)(t2))->v) = 1.0f;
                }
                return;
            }
            if (t0 == 3) {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                FUN_0c0a3058(a4, (*(signed char *)((a4 + 0x1))), 0x1, 0x14);
                t1 = *(int *)(((0x118 + a4) + 0x4));
                t2 = (((struct o118_int *)(a4))->v);
                (((struct oA0_float *)(t1))->v) = 1.0f;
                (((struct o9C_float *)(t1))->v) = 1.0f;
                (((struct oA0_float *)(t2))->v) = 1.0f;
                (((struct o9C_float *)(t2))->v) = 1.0f;
                t1 = *(int *)(((0x118 + a4) + 0x4));
                t2 = (((struct o118_int *)(a4))->v);
                (((struct o98_float *)(t1))->v) = 1.0f;
                (((struct o98_float *)(t2))->v) = 1.0f;
                (((struct o94_float *)(t1))->v) = 1.0f;
                (((struct o94_float *)(t2))->v) = 1.0f;
                return;
            }
            if (t0 == 4) {
                t1 = ((int (*)(int, int, int))(FUN_0c037bf6))(a4, a5, a6);
                if (!(33.0f > ((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v)))) {
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    (((struct o50_float *)(a4))->v) = -13.5f;
                    (((struct o5C_float *)(a4))->v) = -2.0f;
                }
                return;
            }
            if (t0 == 5) {
                t1 = ((int (*)(int, int, int))(FUN_0c037bf6))(a4, a5, a6);
                if (!(((((struct o50_float *)(a4))->v)) > 0.0f)) {
                    t1 = FUN_0c07ecc6(a4, 0x0, 0x0);
                    if (t1 != 0) {
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        FUN_0c0a3058(a4, 0xFFFFFFFF, 0x4, 0x2A);
                        FUN_0c059f20((*(signed char *)((a4 + 0x1))), (*(signed char *)((a4 + 0x135))));
                        FUN_0c14fc70((*(signed char *)((a4 + 0x1))), (a4 + 0x28));
    return;
                    }
                    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
                    math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    return;
                }
                math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
                math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    return;
            }
            if (t0 == 6) {
                t0 = ((int (*)(int, int, int))(FUN_0c037bf6))(a4, a5, a6);
                if ((unsigned char)t0 != 0) {
                    FUN_0c085cac(a4, 0xE, 0x0);
    return;
                }
                return;
            }
            return;
        }
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
        u0 = (((struct o2C_float *)(a4))->v);
        (((struct o2C_float *)(a4))->v) = (((((((((struct o50_float *)(a4))->v)) - u0) * ((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v))) / 53.0f)) + u0);
        t0 = ((int (*)(int, int, int))(FUN_0c037bf6))(a4, a5, a6);
        if (53.0f > ((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v))) {
            return;
        }
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x4C)) = *(struct mv3 *)(0xC25D238); }
        FUN_0c07d030(a4, 0x1);
        FUN_0c1373e2((*(signed char *)((a4 + 0x1))));
        FUN_0c13691a((*(signed char *)((a4 + 0x1))));
        FUN_0c059e60(a4, 0xA);
    return;
    }
    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    *(unsigned short *)((a4 + 0x1C)) = 0x0;
    *(unsigned short *)((a4 + 0x1E)) = 0x0;
    FUN_0c0a3058(a4, (*(signed char *)((a4 + 0x1))), 0x1, 0x13);
    t0 = (((struct o118_int *)(a4))->v);
    (((struct o98_float *)(t0))->v) = 5.0f;
    (((struct o94_float *)(t0))->v) = 5.0f;
    t0 = (((struct o11C_int *)(a4))->v);
    (((struct o98_float *)(t0))->v) = 5.0f;
    (((struct o94_float *)(t0))->v) = 5.0f;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x4C)) = *(struct mv3 *)(0xC25D238); }
    if ((((((struct o168_float *)(a4))->v)) + 300.0f) > ((((struct o2C_float *)(a4))->v))) {
        u0 = (((((struct o168_float *)(a4))->v)) + 300.0f);
    } else {
        u0 = ((((struct o2C_float *)(a4))->v));
    }
    (((struct o50_float *)(a4))->v) = u0;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x58)) = *(struct mv3 *)(0xC25D238); }
}
