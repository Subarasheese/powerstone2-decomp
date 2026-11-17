/* game/player: functions 0C0A3058-0C0A4DFE, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o10_float { char p[0x10]; float v; };
struct o118_int { char p[0x118]; int v; };
struct o14_float { char p[0x14]; float v; };
struct o48_int { char p[0x48]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c037bf6(int);
int FUN_0c038362(int);
int FUN_0c05883a(int, int, int, float, float, float);
int FUN_0c058854(int, int, int, int);
int FUN_0c07e2f4(int, int);
int FUN_0c07eaf4(int, int, int, int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c085cac(int, int, int);
int FUN_0c085d0c(int);
int FUN_0c14f8aa(int, int, int);
int math_vec3_accumulate(int, int);
extern int FUN_0c187798();
int FUN_0c0a30dc(int a4, int a5, int a6, int a7);
int FUN_0c0a36c8(int a4, int a5, int a6);
int FUN_0c0a3a58(int a4);
int FUN_0c0a458a(int a4);
int FUN_0c0a45ac(int a4, int a5, int a6, int a7);

int FUN_0c0a30dc(int a4, int a5, int a6, int a7)
{
    register int t1;
    register int t2;

    t1 = *(short *)((0xC5413E8 + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x2F8)));
    t2 = FUN_0c07eaf4(a4, a5, a6, a7);
    return FUN_0c058854((a4 + 0x38), (unsigned short)(t1 + t2), (*(int *)((a4 + 0x38))), 0x100);
}

int FUN_0c0a36c8(int a4, int a5, int a6)
{
    int stk[7];

    register int R3;
    register float F2;
    register float F3;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_10;
    register int v0_11;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register int v0_9;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    v0_1 = a4;
    v0_3 = a5;
    v0_4 = a6;
    *(unsigned int *)(((int)stk + 8)) = 0xC25D2D8;
    v0_10 = ((((struct o50_float *)(v0_1))->v)) > 0.0f;
    v0_9 = (0x50);
    v0_2 = ((((((struct o48_int *)((0xC4 + v0_1)))->v)) + 0x84));
    v0_0 = (v0_1);
    v0_5 = ((((((struct o118_int *)(v0_1))->v)) + 0x8C));
    v0_6 = (((*(int *)(((0xC4 + v0_1) + 0x3C))) + 0x84));
    v0_1 = ((0xC4 + v0_1));
    v0_8 = (0xC25D2C0);
    v0_7 = (0xC25D2F0);
    if (v0_10) goto L_C0A3752;
    v0_10 = FUN_0c07ecc6(v0_0, 0x0, 0x0);
    v0_9 = (v0_10);
    if ((v0_10 == 0)) goto L_C0A3752;
    *(volatile int *)((v0_0 + 0x100));
    v0_1 = ((int (*)(int, int, int))(FUN_0c187798))(v0_1, v0_3, v0_4);
    *(volatile int *)((v0_0 + 0x10C));
    v0_1 = ((int (*)(void))(FUN_0c187798))();
    return FUN_0c085cac(v0_0, 0x6, 0x0);
    L_C0A3752:;
    if ((((int)((unsigned int)(*(int *)0xC542260) % (unsigned int)0x3)) != 0)) goto L_C0A3768;
    FUN_0c07e2f4(v0_0, 0xC);
    L_C0A3768:;
    *(unsigned int *)(((int)stk + 0)) = (v0_7 + 0x14);
    v0_9 = *(int *)(((v0_7 + 0x14) + 0x0));
    FPUL_ = (v0_9);
    if (((float)v0_9 > (*(float *)((v0_5 + 0x0))))) goto L_C0A3790;
    v0_2 = ((int (*)(int, int, int))(FUN_0c187798))(v0_1, v0_3, v0_4);
    v0_2 = ((int (*)(void))(FUN_0c187798))();
    L_C0A395A:;
    v0_2 = (unsigned char)(FUN_0c037bf6(v0_0)) == 0;
    if (v0_2) goto L_C0A3990;
    v0_1 = ((int (*)(int, int, int))(FUN_0c187798))(v0_1, v0_3, v0_4);
    v0_1 = ((int (*)(void))(FUN_0c187798))();
    return FUN_0c085d0c(v0_0);
    L_C0A3990:;
    math_vec3_accumulate((v0_0 + 0x28), (v0_0 + 0x4C));
    return math_vec3_accumulate((v0_0 + 0x4C), (v0_0 + 0x58));
    L_C0A3790:;
    *(unsigned int *)(((int)stk + 4)) = (v0_7 + 0x10);
    *(unsigned int *)(((int)stk + 20)) = (v0_8 + 0x10);
    *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 8))) + 0x10);
    v0_10 = *(int *)(((*(int *)(((int)stk + 4))) + 0x0));
    v0_9 = ((v0_8 + 0x10));
    v0_11 = (0xC05883A);
    FPUL_ = (v0_10);
    if (((float)v0_10 > (*(float *)((v0_5 + 0x0))))) goto L_C0A381C;
    FUN_0c05883a(v0_6, (*(int *)(((*(int *)(((int)stk + 0))) + 0x0))), (*(int *)(((*(int *)(((int)stk + 4))) + 0x0))), ((((struct o14_float *)(v0_8))->v)), (*(float *)((v0_9 + 0x0))), (*(float *)((v0_5 + 0x0))));
    w0_0 = *(float *)((v0_6 + 0x0));
    (((struct o8_float *)(v0_6))->v) = w0_0;
    (((struct o4_float *)(v0_6))->v) = w0_0;
    v0_3 = ((*(int *)(((*(int *)(((int)stk + 0))) + 0x0))));
    v0_4 = ((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))));
    w0_1 = (((((struct o14_float *)((*(int *)(((int)stk + 8)))))->v)));
    w0_0 = ((*(float *)(((*(int *)(((int)stk + 12))) + 0x0))));
    w0_2 = ((*(float *)((v0_5 + 0x0))));
    L_C0A394C:;
    FUN_0c05883a(v0_2, v0_3, v0_4, w0_1, w0_0, w0_2);
    L_C0A3950:;
    w0_0 = *(float *)((v0_2 + 0x0));
    (((struct o8_float *)(v0_2))->v) = w0_0;
    (((struct o4_float *)(v0_2))->v) = w0_0;
    goto L_C0A395A;
    L_C0A381C:;
    *(unsigned int *)(((int)stk + 0)) = (v0_7 + 0xC);
    *(unsigned int *)(((int)stk + 16)) = (v0_8 + 0xC);
    *(unsigned int *)(((int)stk + 24)) = ((*(int *)(((int)stk + 8))) + 0xC);
    v0_10 = *(int *)(((*(int *)(((int)stk + 0))) + 0x0));
    v0_9 = ((v0_8 + 0xC));
    FPUL_ = (v0_10);
    if (((float)v0_10 > (*(float *)((v0_5 + 0x0))))) goto L_C0A386E;
    FUN_0c05883a(v0_6, (*(int *)(((*(int *)(((int)stk + 4))) + 0x0))), (*(int *)(((*(int *)(((int)stk + 0))) + 0x0))), (*(float *)(((*(int *)(((int)stk + 20))) + 0x0))), (*(float *)((v0_9 + 0x0))), (*(float *)((v0_5 + 0x0))));
    w0_0 = *(float *)((v0_6 + 0x0));
    (((struct o8_float *)(v0_6))->v) = w0_0;
    (((struct o4_float *)(v0_6))->v) = w0_0;
    v0_3 = ((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))));
    v0_4 = ((*(int *)(((*(int *)(((int)stk + 0))) + 0x0))));
    w0_0 = ((*(float *)(((*(int *)(((int)stk + 24))) + 0x0))));
    w0_2 = ((*(float *)((v0_5 + 0x0))));
    L_C0A386A:;
    v0_9 = ((*(int *)(((int)stk + 12))));
    L_C0A38BC:;
    FUN_0c05883a(v0_2, v0_3, v0_4, (*(float *)((v0_9 + 0x0))), w0_0, w0_2);
    goto L_C0A3950;
    L_C0A386E:;
    *(unsigned int *)(((int)stk + 4)) = (v0_7 + 0x8);
    *(unsigned int *)(((int)stk + 20)) = (v0_8 + 0x8);
    *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 8))) + 0x8);
    v0_10 = *(int *)(((v0_7 + 0x8) + 0x0));
    v0_9 = ((v0_7 + 0x8));
    FPUL_ = (v0_10);
    if (((float)v0_10 > (*(float *)((v0_5 + 0x0))))) goto L_C0A38C6;
    *(unsigned int *)(((int)stk + 4)) = v0_9;
    FUN_0c05883a(v0_6, (*(int *)(((*(int *)(((int)stk + 0))) + 0x0))), (*(int *)((v0_9 + 0x0))), (*(float *)(((*(int *)(((int)stk + 16))) + 0x0))), (*(float *)(((*(int *)(((int)stk + 20))) + 0x0))), (*(float *)((v0_5 + 0x0))));
    w0_0 = *(float *)((v0_6 + 0x0));
    (((struct o8_float *)(v0_6))->v) = w0_0;
    (((struct o4_float *)(v0_6))->v) = w0_0;
    v0_9 = ((*(int *)(((int)stk + 24))));
    v0_3 = ((*(int *)(((*(int *)(((int)stk + 0))) + 0x0))));
    v0_4 = ((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))));
    w0_0 = ((*(float *)(((*(int *)(((int)stk + 12))) + 0x0))));
    w0_2 = ((*(float *)((v0_5 + 0x0))));
    goto L_C0A38BC;
    L_C0A38C6:;
    *(unsigned int *)(((int)stk + 0)) = (v0_7 + 0x4);
    *(unsigned int *)(((int)stk + 24)) = (v0_8 + 0x4);
    *(unsigned int *)(((int)stk + 16)) = ((*(int *)(((int)stk + 8))) + 0x4);
    v0_10 = *(int *)(((*(int *)(((int)stk + 0))) + 0x0));
    v0_9 = ((v0_8 + 0x4));
    FPUL_ = (v0_10);
    if (((float)v0_10 > (*(float *)((v0_5 + 0x0))))) goto L_C0A3916;
    FUN_0c05883a(v0_6, (*(int *)(((*(int *)(((int)stk + 4))) + 0x0))), (*(int *)(((*(int *)(((int)stk + 0))) + 0x0))), (*(float *)(((*(int *)(((int)stk + 20))) + 0x0))), (*(float *)((v0_9 + 0x0))), (*(float *)((v0_5 + 0x0))));
    w0_0 = *(float *)((v0_6 + 0x0));
    (((struct o8_float *)(v0_6))->v) = w0_0;
    (((struct o4_float *)(v0_6))->v) = w0_0;
    v0_3 = ((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))));
    v0_4 = ((*(int *)(((*(int *)(((int)stk + 0))) + 0x0))));
    w0_0 = ((*(float *)(((*(int *)(((int)stk + 16))) + 0x0))));
    w0_2 = ((*(float *)((v0_5 + 0x0))));
    goto L_C0A386A;
    L_C0A3916:;
    v0_10 = *(int *)((v0_7 + 0x0));
    FPUL_ = (v0_10);
    if (((float)v0_10 > (*(float *)((v0_5 + 0x0))))) goto L_C0A395A;
    FUN_0c05883a(v0_6, (*(int *)(((*(int *)(((int)stk + 0))) + 0x0))), (*(int *)((v0_7 + 0x0))), (*(float *)((v0_9 + 0x0))), (*(float *)((v0_8 + 0x0))), (*(float *)((v0_5 + 0x0))));
    w0_0 = *(float *)((v0_6 + 0x0));
    (((struct o8_float *)(v0_6))->v) = w0_0;
    (((struct o4_float *)(v0_6))->v) = w0_0;
    v0_3 = ((*(int *)(((*(int *)(((int)stk + 0))) + 0x0))));
    v0_4 = ((*(int *)((v0_7 + 0x0))));
    w0_1 = ((*(float *)(((*(int *)(((int)stk + 16))) + 0x0))));
    w0_0 = ((*(float *)(((*(int *)(((int)stk + 8))) + 0x0))));
    w0_2 = ((*(float *)((v0_5 + 0x0))));
    goto L_C0A394C;
}

int FUN_0c0a3a58(int a4)
{
    int t0;
    register int t1;
    register int t2;
    float u0;
    register float u1;
    register float u2;
    register float u3;

    u2 = (((struct o0_float *)0xC0A3B64)->v);
    u3 = (((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v);
    if (!(u2 > u3) && (u0 = (((struct o4_float *)0xC0A3B64)->v), !(u3 > u0))) {
        t1 = (a4 + 0x28);
        t2 = (a4 + 0x4C);
        if (!(((((struct oC_float *)0xC0A3B64)->v)) > ((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v)))) {
            math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
            t1 = (a4 + 0x4C);
            t2 = (a4 + 0x58);
        }
        math_vec3_accumulate(t1, t2);
    }
    u0 = (((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v);
    if (!(u2 > u0) && ((u1 = (((struct o10_float *)0xC0A3B64)->v), !(u0 > u1)) && (t0 = *(int *)0xC542260, (t0 & 3) == 0))) {
        FUN_0c14f8aa((*(signed char *)((a4 + 0x1))), (a4 + 0x28), 0x2);
    }
    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        return FUN_0c085d0c(a4);
    }
    return FUN_0c038362(a4);
}

int FUN_0c0a458a(int a4)
{
    register int t0;

    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        return FUN_0c085d0c(a4);
    }
    return (unsigned char)t0;
}

int FUN_0c0a45ac(int a4, int a5, int a6, int a7)
{
    register int t0;

    if ((*(signed char *)((a4 + 0x371C))) != 0) {
        t0 = *(signed char *)((a4 + 0x15));
        if (t0 != 0) {
            if (t0 != 1) {
                if (t0 != 2) {
                    if (t0 != 3) {
                        if (t0 != 4) {
                            return t0;
                        }
                        return FUN_0c0a458a(a4);
                    }
                    return ((int (*)(int, int, int, int))(0xC0A44F0))(a4, a5, a6, a7);
                }
                return ((int (*)(int, int, int, int))(0xC0A4456))(a4, a5, a6, a7);
            }
            return ((int (*)(int, int, int, int))(0xC0A4260))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC0A41A6))(a4, a5, a6, a7);
    }
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        if (t0 != 5) {
                            return t0;
                        }
                        return ((int (*)(int, int, int, int))(0xC0A4164))(a4, a5, a6, a7);
                    }
                    return ((int (*)(int, int, int, int))(0xC0A40DC))(a4, a5, a6, a7);
                }
                return ((int (*)(int, int, int, int))(0xC0A4004))(a4, a5, a6, a7);
            }
            return ((int (*)(int, int, int, int))(0xC0A3E66))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC0A3CF8))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC0A3C52))(a4, a5, a6, a7);
}
