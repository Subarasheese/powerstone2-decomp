/* game/stage: functions 0C0B5EE0-0C0B7322, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o118_int { char p[0x118]; int v; };
struct o11C_int { char p[0x11C]; int v; };
struct o12C_ushort { char p[0x12C]; unsigned short v; };
struct o131_uchar { char p[0x131]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o1A_uchar { char p[0x1A]; unsigned char v; };
struct o1B_uchar { char p[0x1B]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o3728_uchar { char p[0x3728]; unsigned char v; };
struct o372A_uchar { char p[0x372A]; unsigned char v; };
struct o38CC_uint { char p[0x38CC]; unsigned int v; };
struct o38D0_uint { char p[0x38D0]; unsigned int v; };
struct o38D4_uint { char p[0x38D4]; unsigned int v; };
struct o445_uchar { char p[0x445]; unsigned char v; };
struct o4_float { char p[0x4]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
int FUN_0c037bf6(int);
int FUN_0c038362(int);
int FUN_0c05258e(int, int, int, int, int);
int thunk_FUN_0c058310(int, int);
int FUN_0c059dae(int, int);
int FUN_0c059e60(int, int);
int FUN_0c07d1fc(int, int, int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c0b507a(int, int, int);
int FUN_0c0b51e4(int);
int FUN_0c0b6e98(int a4);
int FUN_0c14a1bc(int);
int FUN_0c14a314(int, int);
int FUN_0c14a4c0(int, int);
int FUN_0c14a9d8(int);
int FUN_0c14b644(int);
int FUN_0c14b7bc(int);
int FUN_0c14bd7c(int);
int FUN_0c14c1b4(int, int, int, int, int);
int FUN_0c14cd44(int, int, int, int, int, int, int);
int FUN_0c14f238(int, int, int, int);
float math_cos_angle16(int);
int FUN_0c179ac0(void);
int FUN_0c187798(void);
int FUN_0c0b5ee0(int a4, int a5);
int FUN_0c0b5f0a(int a4, int a5, int a6);
int FUN_0c0b62e0(int a4);
int FUN_0c0b6322(int a4);
int FUN_0c0b65f8(int a4);
int FUN_0c0b6766(int a4, int a5);
int FUN_0c0b6862(int a4);
int FUN_0c0b6a18(int a4);
int FUN_0c0b6b58(int a4, int a5, float f4);
int FUN_0c0b6fc0(int a4);
int FUN_0c0b7034(int a4);

int FUN_0c0b5ee0(int a4, int a5)
{
    if (a4 != a5) {
        if ((*(signed char *)((((a4 * 0x3938) + 0xC532498) + 0x3714))) != 0) {
            if (!(((((struct o160_float *)(((a4 * 0x3938) + 0xC532498)))->v)) > 0.0f)) {
                return 0xFFFFFFFF;
            }
            return 0x0;
        }
        return 0xFFFFFFFF;
    }
    return 0xFFFFFFFF;
}

int FUN_0c0b5f0a(int a4, int a5, int a6)
{
    int stk[10];
    register int t0;
    register int t2;
    register int t4;
    register int t5;
    register int t7;
    register int t9;
    register int t16;

    t0 = 0xF4;
    if (a5 == 0) {
        t0 = 0xE4;
    }
    t2 = *(int *)((a4 + t0));
    *(unsigned int *)(((int)stk + 12)) = ((((a5 << 1) + a5) << 2) + 0xC1C6810);
    t4 = ((a5 * 0x3C) + 0xC1C6828);
    t5 = 0x5;
    for (;;) {
        *(volatile int *)(((int)stk + 12));
        t7 = ((int (*)(int, int, int))(FUN_0c187798))(a4, ((((a5 << 1) + a5) << 2) + 0xC1C6810), a6);
        t4 = (t4 + 0xC);
        t9 = ((int (*)(void))(FUN_0c187798))();
        *(int *)((int)stk + 8) = 0x10;
        FUN_0c14c1b4(a4, (t2 + 0x28), (((int)stk + 8) + 0x14), (((int)stk + 8) + 0x8), 0x10);
        *(float *)(((int)stk + 36)) = ((*(float *)(((int)stk + 36))) + 50.0f);
        *(float *)(((int)stk + 16)) = ((*(float *)(((int)stk + 16))) + 50.0f);
        *(int *)((int)stk + 4) = 0x1;
        FUN_0c14c1b4(a4, (t2 + 0x28), (((int)stk + 4) + 0x18), (((int)stk + 4) + 0xC), 0x1);
        *(float *)(((int)stk + 36)) = ((*(float *)(((int)stk + 36))) - 130.0f);
        *(float *)(((int)stk + 16)) = ((*(float *)(((int)stk + 16))) + 50.0f);
        *(int *)((int)stk + 0) = 0x2;
        t16 = FUN_0c14c1b4(a4, (t2 + 0x28), (((int)stk + 0) + 0x1C), (((int)stk + 0) + 0x10), 0x2);
        t5 = (t5 - 0x1);
        if (t5 == 0) {
            break;
        }
    }
    return t16;
}

int FUN_0c0b62e0(int a4)
{
    (((struct o20_ushort *)(a4))->v) = ((int)((unsigned int)(FUN_0c179ac0()) % (unsigned int)0x5));
    *(volatile short *)((a4 + 0x20));
    return (FUN_0c187798());
}

int FUN_0c0b6322(int a4)
{
    int stk[8];
    register int t0;
    register int t11;
    register int t15;
    register int t16;
    register int t18;
    register int t19;
    register int t26;
    register int t28;
    register int t39;
    register int t52;
    register int t57;
    register int t59;
    register int t74;
    register int t76;
    register int t77;
    register int t96;
    register int t97;
    register int t99;
    register int t100;
    register int t104;
    register int t106;
    register int t107;
    register int t120;
    int t2;
    register float u3;
    int t12;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 == 3) {
                    (((struct o1A_uchar *)((0x38F8 + a4)))->v) = 0x2;
                    if (((*(short *)((a4 + 0x1C))) == 0) && (t2 = (((struct o118_int *)(a4))->v), u3 = (((struct o8C_float *)(t2))->v), !(15.0f > u3))) {
                        *(unsigned short *)((a4 + 0x1C)) = 0x1;
                        thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC53257C))) + 0x28), (((int)stk + 12) + 0x8));
                        *(int *)((int)stk + 8) = 0x0;
                        FUN_0c05258e(0x2, 0x14, 0x100, 0x1E, 0x0);
                        FUN_0c14a9d8(a4);
                    }
                    t11 = FUN_0c037bf6(a4);
                    if (((unsigned char)t11 != 0) && (t12 = *(short *)((a4 + 0x1C)), t12 != 0)) {
                        *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) - 1);
                        if ((int)(*(short *)((a4 + 0x1E))) > 0) {
                            *(int *)((int)stk + 8) = 0xA;
                            *(int *)((int)stk + 4) = 0x1;
                            t15 = *(signed char *)((a4 + 0x1));
                            *(unsigned int *)(((int)stk + 12)) = t15;
                            t16 = t15;
                            *(int *)((int)stk + 0) = t16;
                            FUN_0c07e79c(a4, t15, 0x1, 0xA, t16, 0x1, 0xA);
                            t18 = (((struct o118_int *)(a4))->v);
                            (((struct o98_float *)(t18))->v) = 30.0f;
                            (((struct o94_float *)(t18))->v) = 30.0f;
                            t19 = (((struct o11C_int *)(a4))->v);
                            (((struct o98_float *)(t19))->v) = 30.0f;
                            (((struct o94_float *)(t19))->v) = 30.0f;
                            *(unsigned short *)((a4 + 0x1C)) = 0x2D;
                            FUN_0c0b62e0(a4);
                            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) - 1);
                            t120 = (FUN_0c14b7bc(a4));
                        } else {
                            t26 = *(int *)((((((((struct o20_short *)(a4))->v)) << 2) << 1) + 0xC1C68A4));
                            *(unsigned int *)(((int)stk + 16)) = t26;
                            *(int *)((int)stk + 8) = t26;
                            *(int *)((int)stk + 4) = 0x1;
                            t28 = *(signed char *)((a4 + 0x1));
                            *(unsigned int *)(((int)stk + 12)) = t28;
                            *(int *)((int)stk + 0) = t28;
                            FUN_0c07e79c(a4, (*(int *)(((int)stk + 12))), 0x1, (*(int *)(((int)stk + 16))), t28, 0x1, t26);
                            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                            (((struct o1B_uchar *)(a4))->v) = 0x2;
                            t120 = 0x1B;
                        }
                    } else {
                        t120 = (FUN_0c038362(a4));
                    }
                } else {
                    t120 = t0;
                    if (t0 == 4) {
                        t39 = FUN_0c037bf6(a4);
                        if ((unsigned char)t39 != 0) {
                            t120 = (FUN_0c0b507a(a4, 0x0, 0x0));
                        } else {
                            t120 = (FUN_0c038362(a4));
                        }
                    }
                }
            } else {
                (((struct o1A_uchar *)((0x38F8 + a4)))->v) = 0x2;
                FUN_0c037bf6(a4);
                t52 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t52 - 1);
                if ((int)(short)(t52 - 1) > 0) {
                    t120 = (FUN_0c038362(a4));
                } else {
                    t57 = *(int *)((((((((struct o20_short *)(a4))->v)) << 2) << 1) + 0xC1C68A0));
                    *(unsigned int *)(((int)stk + 16)) = t57;
                    *(int *)((int)stk + 8) = t57;
                    *(int *)((int)stk + 4) = 0x1;
                    t59 = *(signed char *)((a4 + 0x1));
                    *(unsigned int *)(((int)stk + 12)) = t59;
                    *(int *)((int)stk + 0) = t59;
                    FUN_0c07e79c(a4, (*(int *)(((int)stk + 12))), 0x1, (*(int *)(((int)stk + 16))), t59, 0x1, t57);
                    *(unsigned short *)((a4 + 0x1C)) = 0x0;
                    FUN_0c14a4c0(a4, (*(short *)((a4 + 0x1C))));
                    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                    t120 = 0x16;
                }
            }
        } else {
            (((struct o1A_uchar *)((0x38F8 + a4)))->v) = 0x1;
            t74 = FUN_0c037bf6(a4);
            if ((unsigned char)t74 == 0) {
                t120 = (FUN_0c038362(a4));
            } else {
                *(int *)((int)stk + 8) = 0xA;
                *(int *)((int)stk + 4) = 0x1;
                t76 = *(signed char *)((a4 + 0x1));
                *(unsigned int *)(((int)stk + 12)) = t76;
                t77 = t76;
                *(int *)((int)stk + 0) = t77;
                FUN_0c07e79c(a4, t76, 0x1, 0xA, t77, 0x1, 0xA);
                FUN_0c059e60(a4, 0x23);
                FUN_0c14a314(a4, 0x0);
                FUN_0c14a314(a4, 0xF);
                FUN_0c14a314(a4, 0x1E);
                FUN_0c14a1bc(a4);
                (((struct o1B_uchar *)(a4))->v) = 0x1;
                *(unsigned short *)((a4 + 0x1C)) = 0x3C;
                FUN_0c0b62e0(a4);
                (((struct o1A_uchar *)((0x38F8 + a4)))->v) = 0x2;
                (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                t120 = (FUN_0c14b7bc(a4));
            }
        }
    } else {
        *(int *)((int)stk + 8) = 0x9;
        *(int *)((int)stk + 4) = 0x1;
        t96 = *(signed char *)((a4 + 0x1));
        *(unsigned int *)(((int)stk + 12)) = t96;
        t97 = t96;
        *(int *)((int)stk + 0) = t97;
        FUN_0c07e79c(a4, t96, 0x1, 0x9, t97, 0x1, 0x9);
        *(unsigned short *)((a4 + 0x1E)) = 0x5;
        (((struct o20_ushort *)(a4))->v) = 0x0;
        (((struct o1B_uchar *)(a4))->v) = 0x0;
        t99 = FUN_0c179ac0();
        t100 = ((~(((~t99) + 0x1) & 0x1)) + 0x1);
        if ((int)t99 >= 0) {
            t100 = (t99 & 0x1);
        }
        (((struct o1B_uchar *)((0x38F8 + a4)))->v) = (*(signed char *)((((0x38F8 + a4) + 0x18) + t100)));
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        (((struct o1A_uchar *)((0x38F8 + a4)))->v) = 0x1;
        t104 = FUN_0c037bf6(a4);
        if ((unsigned char)t104 == 0) {
            t120 = (FUN_0c038362(a4));
        } else {
            *(int *)((int)stk + 8) = 0xA;
            *(int *)((int)stk + 4) = 0x1;
            t106 = *(signed char *)((a4 + 0x1));
            *(unsigned int *)(((int)stk + 12)) = t106;
            t107 = t106;
            *(int *)((int)stk + 0) = t107;
            FUN_0c07e79c(a4, t106, 0x1, 0xA, t107, 0x1, 0xA);
            FUN_0c059e60(a4, 0x23);
            FUN_0c14a314(a4, 0x0);
            FUN_0c14a314(a4, 0xF);
            FUN_0c14a314(a4, 0x1E);
            FUN_0c14a1bc(a4);
            (((struct o1B_uchar *)(a4))->v) = 0x1;
            *(unsigned short *)((a4 + 0x1C)) = 0x3C;
            FUN_0c0b62e0(a4);
            (((struct o1A_uchar *)((0x38F8 + a4)))->v) = 0x2;
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
            t120 = (FUN_0c14b7bc(a4));
        }
    }
    return t120;
}

int FUN_0c0b65f8(int a4)
{
    register int t0;
    register int t4;
    register int t6;
    register int t7;
    int t16;
    register int t22;
    register int t23;
    int t28;
    register int t33;
    register int t35;
    int t40;
    register int t45;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        t4 = FUN_0c037bf6(a4);
                        if ((unsigned char)t4 != 0) {
                            return FUN_0c0b507a(a4, 0x0, 0x0);
                        }
                        return FUN_0c038362(a4);
                    }
                    FUN_0c037bf6(a4);
                    t6 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t6 - 1);
                    if ((int)(short)(t6 - 1) <= 0) {
                        t7 = *(signed char *)((a4 + 0x1));
                        FUN_0c07e79c(a4, t7, 0x1, 0x8, (t7), 0x1, 0x8);
                        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                        return 0x16;
                    }
                    return FUN_0c038362(a4);
                }
                FUN_0c037bf6(a4);
                if (!(91.0f > ((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v)))) {
                    *(unsigned short *)((a4 + 0x1C)) = 0x19;
                    FUN_0c14bd7c(a4);
                    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                    return 0x16;
                }
                return FUN_0c038362(a4);
            }
            t16 = *(short *)((a4 + 0x1C));
            if (((int)t16 > (int)0xA) && ((0x1 & t16) != 0)) {
                FUN_0c14b644(a4);
            }
            FUN_0c037bf6(a4);
            t22 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t22 - 1);
            if ((int)(short)(t22 - 1) <= 0) {
                t23 = *(signed char *)((a4 + 0x1));
                FUN_0c07e79c(a4, t23, 0x1, 0x7, (t23), 0x1, 0x7);
                (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                return 0x16;
            }
            return FUN_0c038362(a4);
        }
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
        t28 = *(short *)((a4 + 0x1C));
        if (((int)t28 > (int)0x7D) && ((0x1 & t28) != 0)) {
            FUN_0c14b644(a4);
        }
        t33 = FUN_0c037bf6(a4);
        if ((unsigned char)t33 != 0) {
            *(unsigned short *)((a4 + 0x1C)) = 0x3C;
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
            return 0x16;
        }
        return FUN_0c038362(a4);
    }
    t35 = *(signed char *)((a4 + 0x1));
    FUN_0c07e79c(a4, t35, 0x1, 0x6, (t35), 0x1, 0x6);
    *(unsigned short *)((a4 + 0x1C)) = 0x0;
    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
    *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
    t40 = *(short *)((a4 + 0x1C));
    if (((int)t40 > (int)0x7D) && ((0x1 & t40) != 0)) {
        FUN_0c14b644(a4);
    }
    t45 = FUN_0c037bf6(a4);
    if ((unsigned char)t45 != 0) {
        *(unsigned short *)((a4 + 0x1C)) = 0x3C;
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        return 0x16;
    }
    return FUN_0c038362(a4);
}

int FUN_0c0b6766(int a4, int a5)
{
    int stk[12];

    register int R2;
    register int R3;
    register int R6;
    register int R7;
    register int R11;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    v0_1 = a4;
    v0_2 = a5;
    v0_3 = *(signed char *)((v0_1 + 0x16));
    v0_4 = (v0_3);
    v0_0 = (v0_2);
    v0_1 = (v0_1);
    if ((v0_3 == 0)) goto L_C0B6794;
    if ((v0_4 == 1)) goto L_C0B67BA;
    if ((v0_4 == 2)) goto L_C0B6834;
    L_C0B6854:;
    return v0_4;
    L_C0B6834:;
    v0_0 = (unsigned char)(FUN_0c037bf6(v0_1)) == 0;
    if (v0_0) goto L_C0B684E;
    L_C0B6840:;
    v0_4 = ((FUN_0c0b507a(v0_1, 0x0, 0x0)));
    goto L_C0B6854;
    L_C0B684E:;
    v0_4 = ((FUN_0c038362(v0_1)));
    goto L_C0B6854;
    L_C0B67BA:;
    v0_3 = (unsigned char)(FUN_0c037bf6(v0_1)) != 0;
    if (v0_3) goto L_C0B6840;
    if (((*(signed char *)((v0_1 + 0x131))) == 0)) goto L_C0B684E;
    v0_2 = (FUN_0c07d1fc(v0_1, v0_2, R6, R7)) == 0;
    if (v0_2) goto L_C0B684E;
    (((struct o131_uchar *)(v0_1))->v) = 0x0;
    v0_2 = FUN_0c0b51e4(v0_1);
    v0_3 = (v0_2);
    if ((v0_2 == 0)) goto L_C0B684E;
    (((struct o372A_uchar *)(v0_1))->v) = (v0_3 - 1);
    (((struct o3728_uchar *)(v0_1))->v) = v0_0;
    FUN_0c0b507a(v0_1, 0x21, 0x0);
    thunk_FUN_0c058310(((*(int *)((((v0_3 - 1) * 0x3938) + 0xC53255C))) + 0x28), (((int)stk + 12) + 0x4));
    FUN_0c14f238((((int)stk + 12) + 0x4), (v0_1 + 0x34), (v0_3 - 1), 0x2);
    v0_4 = ((FUN_0c059dae((signed char)(v0_3 - 1), 0x0)));
    goto L_C0B6854;
    L_C0B6794:;
    v0_3 = v0_0;
    *(int *)((int)stk + 8) = v0_3;
    *(int *)((int)stk + 4) = 0x5;
    v0_4 = *(signed char *)((v0_1 + 0x1));
    *(unsigned int *)(((int)stk + 12)) = v0_4;
    v0_5 = v0_4;
    *(int *)((int)stk + 0) = v0_5;
    FUN_0c07e79c(v0_1, v0_4, 0x5, v0_0, v0_5, 0x5, v0_3);
    *(unsigned short *)((v0_1 + 0x1C)) = 0x0;
    (((struct o16_uchar *)(v0_1))->v) = ((*(signed char *)((v0_1 + 0x16))) + 0x1);
    goto L_C0B67BA;
}

int FUN_0c0b6862(int a4)
{
    int stk[9];
    register int t0;
    register int t1;
    register int t8;
    register int t13;
    register int t9;
    register int t10;
    register int t16;
    register int t19;
    register int t20;
    register int t22;
    register int t23;
    register int t27;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                t1 = FUN_0c037bf6(a4);
                if ((unsigned char)t1 != 0) {
                    return FUN_0c0b507a(a4, 0x0, 0x0);
                }
                return FUN_0c038362(a4);
            }
            (((struct o1A_uchar *)((0x38F8 + a4)))->v) = 0x1;
            FUN_0c037bf6(a4);
            FUN_0c038362(a4);
            if (((*(short *)((a4 + 0x1C))) & 3) == 0) {
                FUN_0c14cd44(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 12), *(int *)((int)stk + 12 + 4), *(int *)((int)stk + 12 + 8));
            }
            t8 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t8 - 1);
            t13 = (short)(t8 - 1);
            if ((int)(short)(t8 - 1) <= 0) {
                *(int *)((int)stk + 8) = 0x16;
                *(int *)((int)stk + 4) = 0x1;
                t9 = *(signed char *)((a4 + 0x1));
                *(unsigned int *)(((int)stk + 12)) = t9;
                t10 = t9;
                *(int *)((int)stk + 0) = t10;
                FUN_0c07e79c(a4, t9, 0x1, 0x16, t10, 0x1, 0x16);
                (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                t13 = 0x16;
            }
            return t13;
        }
        (((struct o1A_uchar *)((0x38F8 + a4)))->v) = 0x1;
        t16 = FUN_0c037bf6(a4);
        if ((unsigned char)t16 != 0) {
            *(unsigned short *)((a4 + 0x1C)) = 0x14;
            FUN_0c059e60(a4, 0x24);
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
            return 0x16;
        }
        return FUN_0c038362(a4);
    }
    *(int *)((int)stk + 8) = 0x15;
    *(int *)((int)stk + 4) = 0x1;
    t19 = *(signed char *)((a4 + 0x1));
    *(unsigned int *)(((int)stk + 12)) = t19;
    t20 = t19;
    *(int *)((int)stk + 0) = t20;
    FUN_0c07e79c(a4, t19, 0x1, 0x15, t20, 0x1, 0x15);
    t22 = FUN_0c179ac0();
    t23 = ((~(((~t22) + 0x1) & 0x1)) + 0x1);
    if ((int)t22 >= 0) {
        t23 = (t22 & 0x1);
    }
    (((struct o1B_uchar *)((0x38F8 + a4)))->v) = (*(signed char *)((((0x38F8 + a4) + 0x18) + t23)));
    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
    (((struct o1A_uchar *)((0x38F8 + a4)))->v) = 0x1;
    t27 = FUN_0c037bf6(a4);
    if ((unsigned char)t27 != 0) {
        *(unsigned short *)((a4 + 0x1C)) = 0x14;
        FUN_0c059e60(a4, 0x24);
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        return 0x16;
    }
    return FUN_0c038362(a4);
}

int FUN_0c0b6a18(int a4)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x3739));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 4) {
                    return FUN_0c0b7034(a4);
                }
                t0 = *(signed char *)((a4 + 0x16));
                if (t0 != 0) {
                    if (t0 != 1) {
                        return t0;
                    }
                } else {
                    t0 = *(signed char *)((a4 + 0x1));
                    FUN_0c07e79c(a4, t0, 0x0, 0x0, (t0), 0x0, 0x0);
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
                    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                }
                FUN_0c037bf6(a4);
                return FUN_0c038362(a4);
            }
            return FUN_0c0b6fc0(a4);
        }
        return FUN_0c0b6e98(a4);
    }
    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
    } else {
        t0 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t0, 0x4, 0x3, (t0), 0x4, 0x3);
        FUN_0c059e60(a4, 0x6);
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
    }
    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        return FUN_0c0b507a(a4, 0x0, 0x0);
    }
    return FUN_0c038362(a4);
}

int FUN_0c0b6b58(int a4, int a5, float f4)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;
    register float u2;

    t0 = *(signed char *)((a4 + 0x17));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 == 3) {
                    u0 = math_cos_angle16((((((((struct o20_short *)(a4))->v)) << 8) << 2) << 2));
                    u1 = (((float)((((struct o22_short *)(a4))->v)) / 60.0f) * (-u0));
                    u2 = 280.424103f;
                    u2 = u2 + 50.0f * u1;
                    (((struct o74_float *)((0x240 + (0x468 + a4))))->v) = u2;
                    u1 = (((float)((((struct o22_short *)(a4))->v)) / 60.0f) * (-u0));
                    u0 = (1.0f + 1.0f);
                    u0 = u0 + 1.0f * u1;
                    (((struct o88_float *)(((0x468 + a4) + 0x2D0)))->v) = u0;
                    (((struct o84_float *)(((0x468 + a4) + 0x2D0)))->v) = u0;
                    (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) + 0x1);
                    (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) - 1);
                    t1 = 0x22;
                    if ((int)((((struct o22_short *)(a4))->v)) <= 0) {
                        (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                        t1 = 0x17;
                    }
                    t2 = t1;
                } else {
                    if (t0 == 4) {
                        t1 = 0x16;
                        if ((int)(*(signed char *)((a4 + 0x16))) >= (int)0x3) {
                            (((struct o22_ushort *)(a4))->v) = 0xA;
                            (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                            t1 = 0x17;
                        }
                        t2 = t1;
                    } else {
                        t1 = t0;
                        if (t0 == 5) {
                            u0 = (((struct o0_float *)0xC0B6F10)->v);
                            t0 = (((struct o22_short *)(a4))->v);
                            u1 = (((struct o4_float *)0xC0B6F10)->v);
                            (((struct o7C_uint *)(((0x468 + a4) + 0x120)))->v) = (int)(((float)t0 / u0) * u1);
                            (((struct o7C_uint *)(((0x468 + a4) + 0x1B0)))->v) = (-(int)(((float)t0 / u0) * u1));
                            u1 = 80.4241104f;
                            u1 = u1 + ((((struct o8_float *)0xC0B6F10)->v)) * (((float)((((struct o22_short *)(a4))->v)) / u0));
                            (((struct o74_float *)(((0x468 + a4) + 0x240)))->v) = u1;
                            t0 = (((struct o22_short *)(a4))->v);
                            (((struct o88_float *)(((0x468 + a4) + 0x2D0)))->v) = (((float)t0 / u0) * (1.0f + 1.0f));
                            (((struct o84_float *)(((0x468 + a4) + 0x2D0)))->v) = (((float)t0 / u0) * (1.0f + 1.0f));
                            (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) - 1);
                            t0 = 0x22;
                            if ((int)((((struct o22_short *)(a4))->v)) <= 0) {
                                (((struct o7C_uint *)((0x120 + (0x468 + a4))))->v) = 0x0;
                                (((struct o7C_uint *)((0x1B0 + (0x468 + a4))))->v) = 0x0;
                                (((struct o78_uint *)(((0x468 + a4) + 0x240)))->v) = 0x0;
                                (((struct o74_float *)((0x240 + (0x468 + a4))))->v) = 80.4241104f;
                                (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                                t0 = 0x17;
                            }
                            t1 = t0;
                        }
                        t2 = t1;
                    }
                }
                t0 = t2;
            } else {
                u0 = (((float)((((struct o22_short *)(a4))->v)) / 60.0f) * (math_cos_angle16((((((((struct o20_short *)(a4))->v)) << 8) << 2) << 2))));
                (((struct o7C_uint *)((0x120 + (0x468 + a4))))->v) = (0x4000 - (int)(u0 * 5461.0f));
                (((struct o7C_uint *)((0x1B0 + (0x468 + a4))))->v) = ((int)(u0 * 5461.0f) - 16384);
                u0 = math_cos_angle16((((((((struct o20_short *)(a4))->v)) << 8) << 2) << 2));
                (((struct o78_uint *)(((0x468 + a4) + 0x240)))->v) = (int)((-u0) * 5461.0f);
                u1 = (((float)((((struct o22_short *)(a4))->v)) / 60.0f) * (-u0));
                u2 = 80.4241104f;
                u2 = u2 + 200.0f * u1;
                (((struct o74_float *)((0x240 + (0x468 + a4))))->v) = u2;
                u1 = (((float)((((struct o22_short *)(a4))->v)) / 60.0f) * (-u0));
                u0 = (1.0f + 1.0f);
                u0 = u0 + 1.0f * u1;
                (((struct o88_float *)(((0x468 + a4) + 0x2D0)))->v) = u0;
                (((struct o84_float *)(((0x468 + a4) + 0x2D0)))->v) = u0;
                (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) + 0x1);
                (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) - 1);
                t1 = 0x20;
                if ((int)((((struct o20_short *)(a4))->v)) < (int)0x8) {
                } else {
                    (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                    t1 = 0x17;
                }
                t0 = t1;
            }
            t1 = t0;
        } else {
            u0 = math_cos_angle16((((((((struct o20_short *)(a4))->v)) << 8) << 2) << 2));
            (((struct o7C_uint *)((0x120 + (0x468 + a4))))->v) = (0x4000 - (int)(u0 * 16384.0f));
            (((struct o7C_uint *)((0x1B0 + (0x468 + a4))))->v) = ((int)(u0 * 16384.0f) - 16384);
            (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) + 0x1);
            t0 = 0x20;
            if ((int)((((struct o20_short *)(a4))->v)) < (int)0x4) {
            } else {
                FUN_0c059e60(a4, 0x25);
                (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                t0 = 0x17;
            }
            t1 = t0;
        }
        t0 = t1;
    } else {
        (((struct o7C_uint *)(((0x468 + a4) + 0x120)))->v) = 0x0;
        (((struct o7C_uint *)(((0x468 + a4) + 0x1B0)))->v) = 0x0;
        (((struct o78_uint *)(((0x468 + a4) + 0x240)))->v) = 0x0;
        (((struct o74_float *)((0x240 + (0x468 + a4))))->v) = 80.4241104f;
        (((struct o20_ushort *)(a4))->v) = 0x0;
        (((struct o22_ushort *)(a4))->v) = 0x3C;
        *(unsigned short *)((((0x468 + a4) + 0x2D0) + 0x6)) = 0x1F;
        (((struct o78_uint *)(((0x468 + a4) + 0x2D0)))->v) = 0xFFFFC000;
        (((struct o88_float *)(((0x468 + a4) + 0x2D0)))->v) = 1.0f;
        (((struct o84_float *)(((0x468 + a4) + 0x2D0)))->v) = 1.0f;
        (((struct o8C_float *)((0x2D0 + (0x468 + a4))))->v) = 1.0f;
        (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
        u0 = math_cos_angle16((((((((struct o20_short *)(a4))->v)) << 8) << 2) << 2));
        (((struct o7C_uint *)((0x120 + (0x468 + a4))))->v) = (0x4000 - (int)(u0 * 16384.0f));
        (((struct o7C_uint *)((0x1B0 + (0x468 + a4))))->v) = ((int)(u0 * 16384.0f) - 16384);
        (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) + 0x1);
        t1 = 0x20;
        if ((int)((((struct o20_short *)(a4))->v)) < (int)0x4) {
        } else {
            FUN_0c059e60(a4, 0x25);
            (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
            t1 = 0x17;
        }
        t0 = t1;
    }
    return t0;
}

int FUN_0c0b6fc0(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
    } else {
        t0 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t0, 0x4, 0x0, (t0), 0x4, 0x0);
        FUN_0c059e60(a4, 0x9);
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
    }
    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        return FUN_0c0b507a(a4, 0x0, 0x0);
    }
    return FUN_0c038362(a4);
}

int FUN_0c0b7034(int a4)
{
    register int t0;
    register float u0;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            (((struct o445_uchar *)(a4))->v) = 0x1;
            FUN_0c037bf6(a4);
            return FUN_0c038362(a4);
        }
    } else {
        t0 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t0, 0x4, 0x0, (t0), 0x4, 0x0);
        (((struct o12C_ushort *)(a4))->v) = 0x0;
        FUN_0c059e60(a4, 0xA);
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
    }
    (((struct o445_uchar *)(a4))->v) = 0x1;
    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        t0 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t0, 0x6, 0x4, (t0), 0x6, 0x4);
        (((struct o38CC_uint *)(a4))->v) = 0x0;
        (((struct o38D0_uint *)(a4))->v) = 0x0;
        (((struct o38D4_uint *)(a4))->v) = 0x0;
        u0 = *(float *)0xC0B7188;
        t0 = (((struct o118_int *)(a4))->v);
        (((struct o98_float *)(t0))->v) = u0;
        (((struct o94_float *)(t0))->v) = u0;
        t0 = (((struct o11C_int *)(a4))->v);
        (((struct o98_float *)(t0))->v) = u0;
        (((struct o94_float *)(t0))->v) = u0;
        return 0x94;
    }
    return FUN_0c038362(a4);
}
