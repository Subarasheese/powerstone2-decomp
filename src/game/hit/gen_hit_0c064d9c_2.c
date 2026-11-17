/* game/hit: functions 0C064D9C-0C065C58, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o404_int { char p[0x404]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
float math_interval_overlap(float, float, float, float, float, float, float);
float FUN_0c064d9c(int);
int FUN_0c064f8e(int, int);
int FUN_0c064fba(int, int, int);
int FUN_0c064fd4(int, int, int);
int FUN_0c0650b0(int, int, int, float);
int FUN_0c06514e(int, int, int);
int FUN_0c0651f8(int, int, int);
int FUN_0c065396(int, int, int, float);
int FUN_0c06551a(int, int, int, float);
int FUN_0c0655dc(int, int, int, int, int, float);
int FUN_0c0652c4(int a4, int a5, int a6, float f4, float f5, float f6, float f7, float f8, float f9, float f10);
int FUN_0c065434(int a4, int a5, int a6, float f4, float f5, float f6, float f7, float f8, float f9, float f10);
int FUN_0c06570c(int a4, int a5, int a6, float f4, float f5, float f6, float f7, float f8, float f9, float f10);
int FUN_0c06588a(int a4, int a5, int a6, int a7, float f4);

int FUN_0c0652c4(int a4, int a5, int a6, float f4, float f5, float f6, float f7, float f8, float f9, float f10)
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
    register float t17;
    register int t22;
    float u19;

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
    t17 = math_interval_overlap((u15 + u16), (u15 - u16), (u13 + u14), (u13 - u14), f8, f9, f10);
    (((struct o4_float *)(((int)stk + 0)))->v) = t17;
    t22 = 0x4;
    if (!(t17 > (*(float *)((((int)stk + 0) + 0x0)))) && (u19 = (((struct o8_float *)(((int)stk + 0)))->v), !(t17 > u19))) {
    } else {
        *(float *)((a6 + 0x0)) = (((((struct o8_float *)(a4))->v)) - ((((struct o8_float *)(a5))->v)));
        t22 = 0x8;
    }
    *(float *)((a6 + t22)) = ((*(float *)(((a4 + 0x8) + t22))) - (*(float *)(((a5 + 0x8) + t22))));
    return 0x1;
}

int FUN_0c065434(int a4, int a5, int a6, float f4, float f5, float f6, float f7, float f8, float f9, float f10)
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
    register float t17;
    register float u18;
    register float u29;
    register int t31;
    float u19;
    float u30;

    u0 = (((struct o8_float *)(a4))->v);
    u1 = (((struct o8_float *)(a5))->v);
    u2 = (((struct oC_float *)((a4 + 0x8)))->v);
    u3 = (((struct oC_float *)((a5 + 0x8)))->v);
    u4 = (u0 - u1);
    if (0.0f > (u0 - u1)) {
        u4 = ((-u0) + u1);
    }
    *(float *)((((int)stk + 0) + 0x0)) = ((u3 + u2) - u4);
    u6 = (((struct oC_float *)((a4 + 0x8)))->v);
    u7 = (((struct o14_float *)((a5 + 0x8)))->v);
    u8 = (((struct o8_float *)((a4 + 0x8)))->v);
    u9 = (((struct o8_float *)((a5 + 0x8)))->v);
    u11 = (u8 - u9);
    if (0.0f > (u8 - u9)) {
        u11 = ((-u8) + u9);
    }
    (((struct o8_float *)(((int)stk + 0)))->v) = ((u7 + u6) - u11);
    u13 = (((struct o4_float *)((a4 + 0x8)))->v);
    u14 = (((struct o10_float *)((a4 + 0x8)))->v);
    u15 = (((struct o4_float *)((a5 + 0x8)))->v);
    u16 = (((struct o10_float *)((a5 + 0x8)))->v);
    t17 = math_interval_overlap((u15 + u16), (u15 - u16), (u13 + u14), (u13 - u14), f8, f9, f10);
    (((struct o4_float *)(((int)stk + 0)))->v) = t17;
    u18 = *(float *)((((int)stk + 0) + 0x0));
    if (!(u18 > t17) && (u19 = (((struct o8_float *)(((int)stk + 0)))->v), !(u18 > u19))) {
        *(float *)((a6 + 0x0)) = (((((struct o8_float *)(a4))->v)) - ((((struct o8_float *)(a5))->v)));
    } else {
        u29 = (((struct o8_float *)(((int)stk + 0)))->v);
        t31 = 0x4;
        if (((*(float *)((((int)stk + 0) + 0x0))) > u29) && (u30 = (((struct o4_float *)(((int)stk + 0)))->v), u30 > u29)) {
            t31 = 0x8;
        }
        *(float *)((a6 + t31)) = ((*(float *)(((a4 + 0x8) + t31))) - (*(float *)(((a5 + 0x8) + t31))));
    }
    return 0x1;
}

int FUN_0c06570c(int a4, int a5, int a6, float f4, float f5, float f6, float f7, float f8, float f9, float f10)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x1));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            t0 = *(signed char *)((a5 + 0x1));
            if (t0 != 0) {
                if (t0 != 1) {
                    if (t0 != 2) {
                        return t0;
                    }
                    return FUN_0c06551a(a4, a5, a6, f4);
                }
                return FUN_0c065434(a4, a5, a6, f4, f5, f6, f7, f8, f9, f10);
            }
            return FUN_0c065396(a4, a5, a6, f4);
        }
        t0 = *(signed char *)((a5 + 0x1));
        if (t0 != 0) {
            if (t0 != 1) {
                if (t0 != 2) {
                    return t0;
                }
                return FUN_0c0652c4(a4, a5, a6, f4, f5, f6, f7, f8, f9, f10);
            }
            return FUN_0c0651f8(a4, a5, a6);
        }
        return FUN_0c06514e(a4, a5, a6);
    }
    t0 = *(signed char *)((a5 + 0x1));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            return FUN_0c0650b0(a4, a5, a6, f4);
        }
        return FUN_0c064fd4(a4, a5, a6);
    }
    return FUN_0c064fba(a4, a5, a6);
}

int FUN_0c06588a(int a4, int a5, int a6, int a7, float f4)
{
    int stk[12];
    register int t56;
    int t2;
    int t6;
    int t8;
    register int t10;
    register int t11;
    register int t13;
    register float u15;
    register float u52;
    register float u53;
    register int t35;
    register int t3;
    register int t4;
    register int t5;
    register int t7;
    register int t9;
    register int t12;
    register float u14;
    register int t31;
    register int t34;
    register int t46;
    register int t47;
    register int t48;
    register int t49;
    register int t50;
    register int t51;
    register float u43;
    register float u44;

    *(unsigned short *)(((int)stk + 8)) = a6;
    *(unsigned int *)(((int)stk + 12)) = a7;
    t13 = (((struct o404_int *)(a4))->v);
    t2 = FUN_0c064f8e(a4, (((int)stk + 4) + 0xC));
    t56 = 0x0;
    if (t2 != 0) {
        t6 = t5;
        t8 = t7;
        t10 = t9;
        t11 = 0x0;
        u15 = f4;
        for (;;) {
            if (t13 == 0) {
                break;
            }
            t2 = (*(short *)(((int)stk + 8)));
            t8 = 0x10;
            t12 = (*(int *)((t13 + 0x8)));
            t6 = t2;
            t4 = t6;
            t10 = 0x0;
            if ((t4 & t8) != 0) {
                t8 = (*(int *)((t13 + 0x4)));
                if ((t8 != 0) && (t2 = 0x128, t31 = *(short *)((t8 + t2)), t3 = t31, (t3 & t6) != 0)) {
                    t10 = 0x1;
                } else {
                    if (t8 == 0) {
                        t10 = 0x1;
                    }
                }
            } else {
                t8 = (*(int *)((t13 + 0x4)));
                if ((t8 != 0) && (t2 = 0x128, t34 = *(short *)((t8 + t2)), t3 = t34, (t3 & t6) != 0)) {
                    t10 = 0x1;
                }
            }
            u52 = u14;
            u53 = u15;
            if (t10 != 0) {
                t4 = ((int)stk + 4);
                t2 = 0x4C;
                t35 = t4;
                *(int *)((int)stk + 0) = t35;
                t8 = (*(int *)((((int)stk + 0) + t2)));
                t10 = ((int)stk + 0);
                t10 = (t10 + 0x10);
                t6 = (*(int *)(((int)stk + 12)));
                t2 = (FUN_0c0655dc(t6, t8, t10, t12, t35, u15));
                if (t2 != 0) {
                    t6 = t12;
                    u14 = (*(float *)((a5 + 0x0)));
                    u15 = (FUN_0c064d9c(t6));
                    if (u15 > u14) {
                        *(float *)((a5 + 0x0)) = u15;
                        t11 = 0x1;
                    }
                    u43 = u14;
                    u44 = u15;
                } else {
                    t46 = t2;
                }
                u52 = u43;
                u53 = u44;
            } else {
                t46 = t2;
                t47 = t3;
                t48 = t4;
                t49 = t6;
                t50 = t8;
                t51 = t10;
            }
            u14 = u52;
            u15 = u53;
            t2 = t46;
            t13 = (*(int *)((t13 + 0x0)));
            t3 = t47;
            t4 = t48;
            t6 = t49;
            t8 = t50;
            t10 = t51;
        }
        t56 = t11;
    }
    return t56;
}
