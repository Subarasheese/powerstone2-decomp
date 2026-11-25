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
int nlRand(void);
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


