/* game/hit: functions 0C066108-0C066C7A, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o10_float { char p[0x10]; float v; };
struct o128_short { char p[0x128]; short v; };
struct o12A_short { char p[0x12A]; short v; };
struct o12C_short { char p[0x12C]; short v; };
struct o14_float { char p[0x14]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o24_short { char p[0x24]; short v; };
struct o414_int { char p[0x414]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
float math_interval_overlap(float, float, float, float, float, float, float);
int FUN_0c066708(int, int);
int FUN_0c06693a(int, int, int);
int math_vec3_accumulate(int, int);
float FUN_0c0e2240(int, int);
float FUN_0c0e2340(int);
int FUN_0c17c4d0(int);
int FUN_0c187798(int, int, int);
int FUN_0c066108(int a4, int a5, float f4, float f5, float f6, float f7, float f8, float f9, float f10);
int FUN_0c0662e4(int a4, int a5, float f4, float f5, float f6, float f7, float f8, float f9, float f10);
int FUN_0c0663a8(int a4, int a5);
int FUN_0c0664d8(int a4, int a5, float f4, float f5, float f6, float f7, float f8, float f9, float f10);
int FUN_0c066598(int a4, int a5);
int FUN_0c0665d4(int a4, int a5);
int FUN_0c066810(int a4, int a5);
int FUN_0c066898(int a4, int a5);
int FUN_0c066996(int a4, int a5);
int FUN_0c0669cc(int a4, int a5);
int FUN_0c066a14(int a4, int a5, int a6);
int FUN_0c066b5c(int a4, int a5, int a6, int a7, int a8);
int FUN_0c066b82(int a4);

int FUN_0c066108(int a4, int a5, float f4, float f5, float f6, float f7, float f8, float f9, float f10)
{
    int stk[3];
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u6;
    register float u7;
    register float u8;
    register float u9;
    register float u11;
    register float u13;
    register float u14;
    register float u15;
    register float u16;
    register int t21;
    register float u19;
    float u20;

    u0 = (((struct o8_float *)(a4))->v);
    u1 = (((struct o8_float *)(a5))->v);
    u2 = (((struct oC_float *)((a5 + 0x8)))->v);
    u3 = (((struct oC_float *)((a4 + 0x8)))->v);
    u4 = (u0 - u1);
    if (0.0f > (u0 - u1)) {
        u4 = ((-u0) + u1);
    }
    *(float *)((((int)stk + 0) + 0x0)) = ((u3 + u2) - u4);
    u6 = (((struct oC_float *)((a5 + 0x8)))->v);
    u7 = (((struct o14_float *)((a4 + 0x8)))->v);
    u8 = (((struct o8_float *)((a4 + 0x8)))->v);
    u9 = (((struct o8_float *)((a5 + 0x8)))->v);
    u11 = (u8 - u9);
    if (0.0f > (u8 - u9)) {
        u11 = ((-u8) + u9);
    }
    (((struct o8_float *)(((int)stk + 0)))->v) = ((u7 + u6) - u11);
    u13 = (((struct o4_float *)((a5 + 0x8)))->v);
    u14 = (((struct o10_float *)((a5 + 0x8)))->v);
    u15 = (((struct o4_float *)((a4 + 0x8)))->v);
    u16 = (((struct o10_float *)((a4 + 0x8)))->v);
    (((struct o4_float *)(((int)stk + 0)))->v) = (math_interval_overlap((u15 + u16), (u15 - u16), (u13 + u14), (u13 - u14), f8, f9, f10));
    t21 = 0x0;
    if (!(0.0f > (*(float *)((((int)stk + 0) + 0x0)))) && ((u19 = (((struct o8_float *)(((int)stk + 0)))->v), !(0.0f > u19)) && (u20 = (((struct o4_float *)(((int)stk + 0)))->v), !(0.0f > u20)))) {
        t21 = 0x1;
    }
    return t21;
}

int FUN_0c0662e4(int a4, int a5, float f4, float f5, float f6, float f7, float f8, float f9, float f10)
{
    int stk[3];
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u6;
    register float u7;
    register float u8;
    register float u9;
    register float u11;
    register float u13;
    register float u14;
    register float u15;
    register float u16;
    register int t21;
    register float u19;
    float u20;

    u0 = (((struct o8_float *)(a5))->v);
    u1 = (((struct o8_float *)(a4))->v);
    u2 = (((struct oC_float *)((a4 + 0x8)))->v);
    u3 = (((struct oC_float *)((a5 + 0x8)))->v);
    u4 = (u0 - u1);
    if (0.0f > (u0 - u1)) {
        u4 = ((-u0) + u1);
    }
    *(float *)((((int)stk + 0) + 0x0)) = ((u3 + u2) - u4);
    u6 = (((struct oC_float *)((a4 + 0x8)))->v);
    u7 = (((struct o14_float *)((a5 + 0x8)))->v);
    u8 = (((struct o8_float *)((a5 + 0x8)))->v);
    u9 = (((struct o8_float *)((a4 + 0x8)))->v);
    u11 = (u8 - u9);
    if (0.0f > (u8 - u9)) {
        u11 = ((-u8) + u9);
    }
    (((struct o8_float *)(((int)stk + 0)))->v) = ((u7 + u6) - u11);
    u13 = (((struct o4_float *)((a4 + 0x8)))->v);
    u14 = (((struct o10_float *)((a4 + 0x8)))->v);
    u15 = (((struct o4_float *)((a5 + 0x8)))->v);
    u16 = (((struct o10_float *)((a5 + 0x8)))->v);
    (((struct o4_float *)(((int)stk + 0)))->v) = (math_interval_overlap((u15 + u16), (u15 - u16), (u13 + u14), (u13 - u14), f8, f9, f10));
    t21 = 0x0;
    if (!(0.0f > (*(float *)((((int)stk + 0) + 0x0)))) && ((u19 = (((struct o8_float *)(((int)stk + 0)))->v), !(0.0f > u19)) && (u20 = (((struct o4_float *)(((int)stk + 0)))->v), !(0.0f > u20)))) {
        t21 = 0x1;
    }
    return t21;
}

int FUN_0c0663a8(int a4, int a5)
{
    int stk[3];
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u6;
    register float u7;
    register float u8;
    register float u9;
    register float u11;
    register float u13;
    register float u14;
    register float u15;
    register float u16;
    register float u18;
    register float u21;
    float u22;

    u0 = *(float *)((a4 + 0x0));
    u1 = *(float *)((a5 + 0x0));
    u2 = (((struct oC_float *)(a4))->v);
    u3 = (((struct oC_float *)(a5))->v);
    u4 = (u0 - u1);
    if (0.0f > (u0 - u1)) {
        u4 = ((-u0) + u1);
    }
    *(float *)((((int)stk + 0) + 0x0)) = ((u2 + u3) - u4);
    u6 = (((struct o10_float *)(a4))->v);
    u7 = (((struct o10_float *)(a5))->v);
    u8 = (((struct o4_float *)(a4))->v);
    u9 = (((struct o4_float *)(a5))->v);
    u11 = (u8 - u9);
    if (0.0f > (u8 - u9)) {
        u11 = ((-u8) + u9);
    }
    (((struct o4_float *)(((int)stk + 0)))->v) = ((u6 + u7) - u11);
    u13 = (((struct o14_float *)(a4))->v);
    u14 = (((struct o14_float *)(a5))->v);
    u15 = (((struct o8_float *)(a4))->v);
    u16 = (((struct o8_float *)(a5))->v);
    u18 = (u15 - u16);
    if (0.0f > (u15 - u16)) {
        u18 = ((-u15) + u16);
    }
    (((struct o8_float *)(((int)stk + 0)))->v) = ((u13 + u14) - u18);
    if (!(0.0f > (*(float *)((((int)stk + 0) + 0x0)))) && ((u21 = (((struct o8_float *)(((int)stk + 0)))->v), !(0.0f > u21)) && (u22 = (((struct o4_float *)(((int)stk + 0)))->v), !(0.0f > u22)))) {
        return 0x1;
    }
    return 0x0;
}

int FUN_0c0664d8(int a4, int a5, float f4, float f5, float f6, float f7, float f8, float f9, float f10)
{
    int stk[3];
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u6;
    register float u7;
    register float u8;
    register float u9;
    register float u11;
    register float u13;
    register float u14;
    register float u15;
    register float u16;
    register int t21;
    register float u19;
    float u20;

    u0 = *(float *)((a4 + 0x0));
    u1 = *(float *)((a5 + 0x0));
    u2 = (((struct oC_float *)(a5))->v);
    u3 = (((struct oC_float *)(a4))->v);
    u4 = (u0 - u1);
    if (0.0f > (u0 - u1)) {
        u4 = ((-u0) + u1);
    }
    *(float *)((((int)stk + 0) + 0x0)) = ((u3 + u2) - u4);
    u6 = (((struct oC_float *)(a5))->v);
    u7 = (((struct o14_float *)(a4))->v);
    u8 = (((struct o8_float *)(a4))->v);
    u9 = (((struct o8_float *)(a5))->v);
    u11 = (u8 - u9);
    if (0.0f > (u8 - u9)) {
        u11 = ((-u8) + u9);
    }
    (((struct o8_float *)(((int)stk + 0)))->v) = ((u7 + u6) - u11);
    u13 = (((struct o4_float *)(a5))->v);
    u14 = (((struct o10_float *)(a5))->v);
    u15 = (((struct o4_float *)(a4))->v);
    u16 = (((struct o10_float *)(a4))->v);
    (((struct o4_float *)(((int)stk + 0)))->v) = (math_interval_overlap((u15 + u16), (u15 - u16), (u13 + u14), (u13 - u14), f8, f9, f10));
    t21 = 0x0;
    if (!(0.0f > (*(float *)((((int)stk + 0) + 0x0)))) && ((u19 = (((struct o8_float *)(((int)stk + 0)))->v), !(0.0f > u19)) && (u20 = (((struct o4_float *)(((int)stk + 0)))->v), !(0.0f > u20)))) {
        t21 = 0x1;
    }
    return t21;
}

int FUN_0c066598(int a4, int a5)
{
    register float u0;
    register float u1;
    register float t2;

    u0 = (((struct oC_float *)(a5))->v);
    u1 = (((struct oC_float *)(a4))->v);
    t2 = FUN_0c0e2240(a4, a5);
    if (!(0.0f > ((u1 + u0) - t2))) {
        return 0x1;
    }
    return 0x0;
}

int FUN_0c0665d4(int a4, int a5)
{
    int stk[3];
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u6;
    register float u7;
    register float u8;
    register float u9;
    register float u11;
    register float u13;
    register float u14;
    register float u15;
    register float u16;
    register float u18;
    register float u21;
    float u22;

    u0 = *(float *)((a4 + 0x0));
    u1 = *(float *)((a5 + 0x0));
    u2 = (((struct oC_float *)(a4))->v);
    u3 = (((struct oC_float *)(a5))->v);
    u4 = (u0 - u1);
    if (0.0f > (u0 - u1)) {
        u4 = ((-u0) + u1);
    }
    *(float *)((((int)stk + 0) + 0x0)) = ((u2 + u3) - u4);
    u6 = (((struct oC_float *)(a5))->v);
    u7 = (((struct o14_float *)(a4))->v);
    u8 = (((struct o8_float *)(a4))->v);
    u9 = (((struct o8_float *)(a5))->v);
    u11 = (u8 - u9);
    if (0.0f > (u8 - u9)) {
        u11 = ((-u8) + u9);
    }
    (((struct o8_float *)(((int)stk + 0)))->v) = ((u7 + u6) - u11);
    u13 = (((struct oC_float *)(a5))->v);
    u14 = (((struct o10_float *)(a4))->v);
    u15 = (((struct o4_float *)(a4))->v);
    u16 = (((struct o4_float *)(a5))->v);
    u18 = (u15 - u16);
    if (0.0f > (u15 - u16)) {
        u18 = ((-u15) + u16);
    }
    (((struct o4_float *)(((int)stk + 0)))->v) = ((u14 + u13) - u18);
    if (!(0.0f > (*(float *)((((int)stk + 0) + 0x0)))) && ((u21 = (((struct o8_float *)(((int)stk + 0)))->v), !(0.0f > u21)) && (u22 = (((struct o4_float *)(((int)stk + 0)))->v), !(0.0f > u22)))) {
        return 0x1;
    }
    return 0x0;
}

int FUN_0c066810(int a4, int a5)
{
    int stk[3];

    register int R6;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    v0_5 = a4;
    v0_4 = a5;
    v0_0 = (v0_4);
    v0_1 = (v0_5);
    v0_2 = (((0x184 + v0_5) + 0x140));
    v0_3 = (((0x184 + v0_4) + 0x140));
    v0_5 = (0x140);
    v0_5 = (0x0);
    L_C06687C:;
    if (((int)v0_5 < (int)(*(signed char *)((v0_2 + 0x3))))) goto L_C06683A;
    v0_0 = (0x0);
    L_C066884:;
    return v0_0;
    L_C06683A:;
    v0_6 = (((((v0_5 << 2) << 2) << 1) + v0_2));
    if ((((*(signed char *)((((((v0_5 << 2) << 2) << 1) + v0_2) + 0x0))) & 1) == 0)) goto L_C06687A;
    v0_7 = (0x0);
    L_C066874:;
    if (!(((int)v0_7 < (int)(*(signed char *)((v0_3 + 0x3)))))) goto L_C06687A;
    v0_4 = (((((v0_7 << 2) << 2) << 1) + v0_3));
    if ((((*(signed char *)((((((v0_7 << 2) << 2) << 1) + v0_3) + 0x0))) & 2) == 0)) goto L_C066872;
    v0_4 = (FUN_0c066708(v0_6, v0_4)) == 0;
    if (v0_4) goto L_C066872;
    FUN_0c06693a(v0_1, v0_0, ((int)stk + 0));
    v0_0 = (0x1);
    goto L_C066884;
    L_C06687A:;
    v0_5 = ((v0_5 + 0x1));
    goto L_C06687C;
    L_C066872:;
    v0_7 = ((v0_7 + 0x1));
    goto L_C066874;
}

int FUN_0c066898(int a4, int a5)
{
    register int t4;
    register int t19;
    int t2;
    int t3;

    if (((((((struct o128_short *)(a4))->v)) & ((((struct o12C_short *)(a5))->v))) != 0) && (t2 = (((struct o12A_short *)(a4))->v), t3 = (((struct o128_short *)(a5))->v), (t2 & t3) != 0)) {
        t4 = FUN_0c066996(a4, a5);
        if (t4 != 0) {
            FUN_0c066810(a4, a5);
        }
    }
    if ((((((struct o128_short *)(a5))->v)) & ((((struct o12C_short *)(a4))->v))) != 0) {
        if ((((((struct o12A_short *)(a5))->v)) & ((((struct o128_short *)(a4))->v))) != 0) {
            t19 = FUN_0c066996(a5, a4);
            if (t19 != 0) {
                return FUN_0c066810(a5, a4);
            }
            return t19;
        }
        return 0x128;
    }
    return 0x12C;
}

int FUN_0c066996(int a4, int a5)
{
    register int t1;

    if ((int)(*(signed char *)((a4 + 0x136))) < (int)0x13) {
        t1 = 0x0;
        for (;;) {
            if ((int)t1 >= (int)(*(signed char *)((a4 + 0x136)))) {
                return 0x1;
            }
            if ((*(short *)((((t1 << 1) + (0x138 + a4)) + 0x0))) == ((((struct o24_short *)(a5))->v))) {
                break;
            }
            t1 = (t1 + 0x1);
        }
        return 0x0;
    }
    return 0x0;
}

int FUN_0c0669cc(int a4, int a5)
{
    register int t1;
    register int t2;
    register int t3;
    register int t0;
    register int t4;
    register int t6;
    register int t7;

    t1 = a4;
    t2 = a5;
    t3 = a4;
    for (;;) {
        if (t3 == 0) {
            break;
        }
        t4 = a5;
        for (;;) {
            if (t4 == 0) {
                break;
            }
            if (t3 != t4) {
                t2 = t4;
                t1 = t3;
                t0 = (FUN_0c066898(t1, t2));
            } else {
                t6 = t1;
                t7 = t2;
            }
            t4 = (*(int *)((t4 + 0xC)));
            t1 = t6;
            t2 = t7;
        }
        t3 = (*(int *)((t3 + 0xC)));
    }
    return t0;
}


int FUN_0c066b5c(int a4, int a5, int a6, int a7, int a8)
{
    int stk[2];
    register int t0;
    int t1;
    register int t5;
    register int t6;

    *(unsigned int *)(((int)stk + 4)) = a6;
    *(unsigned int *)(((int)stk + 0)) = a7;
    t0 = (((struct o414_int *)(a4))->v);
    if ((t0 != 0) && (t1 = *(signed char *)((t0 + 0xD)), ((unsigned char)t1 & 128) != 0)) {
        t5 = a8;
        t6 = (*(int *)(((int)stk + 0)));
    } else {
        t5 = (*(int *)(((int)stk + 0)));
        t6 = a8;
    }
    return FUN_0c066a14((*(int *)(((int)stk + 4))), t5, t6);
}

int FUN_0c066b82(int a4)
{
    int stk[11];
    register int t1;
    register int t10;
    register int t11;
    register int t38;
    register int t47;
    int t0;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t32;
    int t33;
    register int t34;
    int t35;
    register int t43;
    register int t46;

    *(unsigned int *)(((int)stk + 4)) = 0x0;
    *(unsigned int *)(((int)stk + 16)) = 0xC4FB64C;
    *(unsigned int *)(((int)stk + 8)) = 0xC4FDBCC;
    *(unsigned int *)(((int)stk + 20)) = 0xC4F90BC;
    t1 = a4;
    for (;;) {
        *(unsigned int *)(((int)stk + 12)) = (*(int *)(((int)stk + 16)));
        *(unsigned int *)(((int)stk + 28)) = (((*(int *)(((int)stk + 4))) << 2) + 0xC4FB63C);
        t10 = *(int *)(((int)stk + 20));
        *(unsigned int *)(((int)stk + 24)) = t10;
        t11 = 0x0;
        for (;;) {
            if ((int)t11 >= (int)(*(int *)(((*(int *)(((int)stk + 28))) + 0x0)))) {
                break;
            }
            t1 = t11;
            t1 = (t1 << 1);
            t1 = (t1 + t11);
            t1 = (t1 << 2);
            t1 = (t1 + (*(int *)(((int)stk + 24))));
            t3 = (*(int *)((t1 + 0x4)));
            t5 = (*(int *)((t1 + 0x0)));
            t4 = 0x0;
            for (;;) {
                if ((int)t4 >= (int)(*(int *)(((*(int *)(((int)stk + 8))) + 0x0)))) {
                    break;
                }
                t1 = t4;
                t1 = (t1 << 1);
                t1 = (t1 + t4);
                t1 = (t1 << 2);
                t1 = (t1 + (*(int *)(((int)stk + 12))));
                t6 = (*(int *)((t1 + 0x0)));
                t38 = (*(int *)((t1 + 0x4)));
                if ((t5 != t6) && ((t0 = 0x128, t32 = *(short *)((t5 + t0)), t0 = (t0 + 0x4), t33 = *(short *)((t6 + t0)), (t32 & t33) != 0) && (t0 = 0x12A, t34 = *(short *)((t5 + t0)), t10 = t34, t0 = (t0 - 2), t35 = *(short *)((t6 + t0)), (t10 & t35) != 0))) {
                    t1 = t5;
                    t0 = (FUN_0c066996(t1, t6));
                    if (t0 != 0) {
                        t1 = t3;
                        t0 = (FUN_0c066708(t1, t38));
                        if (t0 != 0) {
                            *(int *)((int)stk + 0) = t38;
                            t1 = t5;
                            t0 = (FUN_0c066b5c(t1, t6, (((int)stk + 0) + 0x20), t3, t38));
                            t1 = t5;
                            t0 = (FUN_0c06693a(t1, t6, (((int)stk + 4) + 0x1C)));
                        }
                    }
                } else {
                    t43 = t10;
                    t46 = t1;
                }
                t10 = t43;
                t4 = (t4 + 0x1);
                t1 = t46;
            }
            t11 = (t11 + 0x1);
        }
        t47 = *(int *)(((int)stk + 4));
        *(unsigned int *)(((int)stk + 4)) = (t47 + 0x1);
        *(unsigned int *)(((int)stk + 16)) = ((*(int *)(((int)stk + 16))) + 0x960);
        *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) + 0x4);
        t0 = (*(int *)(((int)stk + 20)));
        t0 = (t0 + 0x960);
        *(unsigned int *)(((int)stk + 20)) = t0;
        if ((int)(t47 + 0x1) >= (int)0x4) {
            break;
        }
    }
    return t0;
}
