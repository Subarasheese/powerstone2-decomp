/* game/player: functions 0C0A7B2C-0C0A80A2, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o50_float { char p[0x50]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
int FUN_0c037bf6(int);
int FUN_0c05258e(int, int, int, int, int);
int FUN_0c059e60(int, int);
int FUN_0c059f20(int, int);
int FUN_0c059f78(int, int);
int FUN_0c07d1fc(int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c085cac(int, int, int);
int FUN_0c085d0c(int);
int FUN_0c0a3058(int, int, int, int);
int FUN_0c0a7b2c(int);
int FUN_0c0a7d5c(int);
int FUN_0c1366b0(int, int, int);
int FUN_0c14f9d6(int, int);
int math_vec3_accumulate(int, int);
int FUN_0c0a7c10(int a4);
int FUN_0c0a7d0a(int a4);
int FUN_0c0a7e0e(int a4);
int FUN_0c0a7fe0(int a4);
int FUN_0c0a8002(int a4);

int FUN_0c0a7c10(int a4)
{
    int stk[1];
    register int t11;
    register int t14;
    register int t24;
    register int t25;
    register int t26;
    register int t27;
    register int t37;
    register int t38;
    register int t39;
    register int t40;

    if ((int)((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v)) == 34) {
        FUN_0c059f20((*(signed char *)((a4 + 0x1))), (*(signed char *)((a4 + 0x135))));
    }
    FUN_0c037bf6(a4);
    if (!(((((struct o50_float *)(a4))->v)) > 0.0f)) {
        t11 = FUN_0c07ecc6(a4, 0x0, 0x0);
        if (t11 != 0) {
            if ((*(signed char *)((a4 + 0x131))) != 0) {
                t14 = FUN_0c07d1fc(a4);
                *(unsigned int *)(((int)stk + 0)) = t14;
                if (t14 == 0) {
                    if ((*(int *)(((int)stk + 0))) == 2) {
                        return FUN_0c085cac(a4, 0x6, 0x0);
                    }
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    FUN_0c059f20((*(signed char *)((a4 + 0x1))), (*(signed char *)((a4 + 0x135))));
                    FUN_0c14f9d6((*(signed char *)((a4 + 0x1))), (a4 + 0x28));
                    FUN_0c0a3058(a4, (*(signed char *)((a4 + 0x1))), 0x2, 0xD);
                    t24 = *(int *)(((0x118 + a4) + 0x4));
                    t25 = (((struct o118_int *)(a4))->v);
                    (((struct oA0_float *)(t24))->v) = 1.0f;
                    (((struct o9C_float *)(t24))->v) = 1.0f;
                    (((struct oA0_float *)(t25))->v) = 1.0f;
                    (((struct o9C_float *)(t25))->v) = 1.0f;
                    t26 = *(int *)(((0x118 + a4) + 0x4));
                    t27 = (((struct o118_int *)(a4))->v);
                    (((struct o98_float *)(t26))->v) = 1.0f;
                    (((struct o98_float *)(t27))->v) = 1.0f;
                    (((struct o94_float *)(t26))->v) = 1.0f;
                    (((struct o94_float *)(t27))->v) = 1.0f;
                    return 0x94;
                }
                return FUN_0c085cac(a4, 0x6, 0x0);
            }
            if ((*(int *)(((int)stk + 0))) == 2) {
                return FUN_0c085cac(a4, 0x6, 0x0);
            }
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            FUN_0c059f20((*(signed char *)((a4 + 0x1))), (*(signed char *)((a4 + 0x135))));
            FUN_0c14f9d6((*(signed char *)((a4 + 0x1))), (a4 + 0x28));
            FUN_0c0a3058(a4, (*(signed char *)((a4 + 0x1))), 0x2, 0xD);
            t37 = *(int *)(((0x118 + a4) + 0x4));
            t38 = (((struct o118_int *)(a4))->v);
            (((struct oA0_float *)(t37))->v) = 1.0f;
            (((struct o9C_float *)(t37))->v) = 1.0f;
            (((struct oA0_float *)(t38))->v) = 1.0f;
            (((struct o9C_float *)(t38))->v) = 1.0f;
            t39 = *(int *)(((0x118 + a4) + 0x4));
            t40 = (((struct o118_int *)(a4))->v);
            (((struct o98_float *)(t39))->v) = 1.0f;
            (((struct o98_float *)(t40))->v) = 1.0f;
            (((struct o94_float *)(t39))->v) = 1.0f;
            (((struct o94_float *)(t40))->v) = 1.0f;
            return 0x94;
        }
    }
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    return math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
}

int FUN_0c0a7d0a(int a4)
{
    register int t0;

    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        return FUN_0c085d0c(a4);
    }
    return (unsigned char)t0;
}

int FUN_0c0a7e0e(int a4)
{
    int stk[2];
    register float u1;
    register int t16;
    register int t19;
    register int t23;
    register int t24;
    register int t25;
    register int t26;
    register int t36;
    register int t37;
    register int t38;
    register int t39;
    register int t49;
    register int t50;
    register int t51;
    register int t52;

    u1 = (((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v);
    if ((int)u1 != 13) {
        if ((int)u1 != 25) {
        } else {
            FUN_0c059f78((*(signed char *)((a4 + 0x1))), (*(signed char *)((a4 + 0x135))));
        }
    } else {
        FUN_0c059e60(a4, 0x1);
    }
    FUN_0c037bf6(a4);
    if (!(((((struct o50_float *)(a4))->v)) > 0.0f)) {
        t16 = FUN_0c07ecc6(a4, 0x0, 0x0);
        if (t16 != 0) {
            *(int *)((int)stk + 0) = 0x0;
            FUN_0c05258e(0x2, 0x14, 0x100, 0x1E, 0x0);
            if ((*(signed char *)((a4 + 0x131))) != 0) {
                t19 = FUN_0c07d1fc(a4);
                *(unsigned int *)(((int)stk + 4)) = t19;
                if (t19 != 0) {
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    FUN_0c0a3058(a4, (*(signed char *)((a4 + 0x1))), 0x2, 0x18);
                    t23 = *(int *)(((0x118 + a4) + 0x4));
                    t24 = (((struct o118_int *)(a4))->v);
                    (((struct oA0_float *)(t23))->v) = 1.0f;
                    (((struct o9C_float *)(t23))->v) = 1.0f;
                    (((struct oA0_float *)(t24))->v) = 1.0f;
                    (((struct o9C_float *)(t24))->v) = 1.0f;
                    t25 = *(int *)(((0x118 + a4) + 0x4));
                    t26 = (((struct o118_int *)(a4))->v);
                    (((struct o98_float *)(t25))->v) = 1.0f;
                    (((struct o98_float *)(t26))->v) = 1.0f;
                    (((struct o94_float *)(t25))->v) = 1.0f;
                    (((struct o94_float *)(t26))->v) = 1.0f;
                    return 0x94;
                }
                if ((*(int *)(((int)stk + 4))) == 2) {
                    return FUN_0c085cac(a4, 0x6, 0x0);
                }
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                FUN_0c059f20((*(signed char *)((a4 + 0x1))), (*(signed char *)((a4 + 0x135))));
                FUN_0c1366b0((*(signed char *)((a4 + 0x1))), (a4 + 0x28), 0x1);
                FUN_0c0a3058(a4, (*(signed char *)((a4 + 0x1))), 0x2, 0x18);
                t36 = *(int *)(((0x118 + a4) + 0x4));
                t37 = (((struct o118_int *)(a4))->v);
                (((struct oA0_float *)(t36))->v) = 1.0f;
                (((struct o9C_float *)(t36))->v) = 1.0f;
                (((struct oA0_float *)(t37))->v) = 1.0f;
                (((struct o9C_float *)(t37))->v) = 1.0f;
                t38 = *(int *)(((0x118 + a4) + 0x4));
                t39 = (((struct o118_int *)(a4))->v);
                (((struct o98_float *)(t38))->v) = 1.0f;
                (((struct o98_float *)(t39))->v) = 1.0f;
                (((struct o94_float *)(t38))->v) = 1.0f;
                (((struct o94_float *)(t39))->v) = 1.0f;
                return 0x94;
            }
            if ((*(int *)(((int)stk + 4))) == 2) {
                return FUN_0c085cac(a4, 0x6, 0x0);
            }
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            FUN_0c059f20((*(signed char *)((a4 + 0x1))), (*(signed char *)((a4 + 0x135))));
            FUN_0c1366b0((*(signed char *)((a4 + 0x1))), (a4 + 0x28), 0x1);
            FUN_0c0a3058(a4, (*(signed char *)((a4 + 0x1))), 0x2, 0x18);
            t49 = *(int *)(((0x118 + a4) + 0x4));
            t50 = (((struct o118_int *)(a4))->v);
            (((struct oA0_float *)(t49))->v) = 1.0f;
            (((struct o9C_float *)(t49))->v) = 1.0f;
            (((struct oA0_float *)(t50))->v) = 1.0f;
            (((struct o9C_float *)(t50))->v) = 1.0f;
            t51 = *(int *)(((0x118 + a4) + 0x4));
            t52 = (((struct o118_int *)(a4))->v);
            (((struct o98_float *)(t51))->v) = 1.0f;
            (((struct o98_float *)(t52))->v) = 1.0f;
            (((struct o94_float *)(t51))->v) = 1.0f;
            (((struct o94_float *)(t52))->v) = 1.0f;
            return 0x94;
        }
    }
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    return math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
}

int FUN_0c0a7fe0(int a4)
{
    register int t0;

    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        return FUN_0c085d0c(a4);
    }
    return (unsigned char)t0;
}

int FUN_0c0a8002(int a4)
{
    register int t0;

    if ((*(signed char *)((a4 + 0x371C))) != 0) {
        t0 = *(signed char *)((a4 + 0x15));
        if (t0 != 0) {
            if (t0 != 1) {
                if (t0 != 2) {
                    return t0;
                }
                return FUN_0c0a7fe0(a4);
            }
            return FUN_0c0a7e0e(a4);
        }
        return FUN_0c0a7d5c(a4);
    }
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            return FUN_0c0a7d0a(a4);
        }
        return FUN_0c0a7c10(a4);
    }
    return FUN_0c0a7b2c(a4);
}
