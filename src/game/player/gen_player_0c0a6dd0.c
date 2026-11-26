/* game/player: functions 0C0A6DD0-0C0A78EC, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o168_float { char p[0x168]; float v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o50_float { char p[0x50]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
int FUN_0c037bf6(int);
int FUN_0c038362(int);
int FUN_0c05258e(int, int, int, int, int);
int thunk_FUN_0c058310(int, int);
int FUN_0c059f20(int, int);
int FUN_0c07283a(int);
int FUN_0c07d1fc(int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c085cac(int, int, int);
int FUN_0c085d0c(int);
int FUN_0c0a3058(int, int, int, int);
int FUN_0c1366b0(int, int, int);
int FUN_0c14f824(int, int);
int math_vec3_accumulate(int, int);
int FUN_0c0a6dd0(int a4);
int FUN_0c0a6e8e(int a4);
int FUN_0c0a6eb0(int a4, int a5, int a6, int a7);
int FUN_0c0a7170(int a4);
int FUN_0c0a7194(int a4);
int FUN_0c0a7278(int a4);
int FUN_0c0a7430(int a4, int a5, int a6, int a7);

int FUN_0c0a6dd0(int a4)
{
    int stk[3];
    register int t17;
    register int t25;
    register int t20;
    register int t21;
    register int t22;
    register int t23;

    thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC5325A4))) + 0x28), ((int)stk + 0));
    *(float *)(((int)stk + 4)) = ((((struct o168_float *)(a4))->v));
    FUN_0c14f824((*(signed char *)((a4 + 0x1))), ((int)stk + 0));
    if ((int)((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v)) == 35) {
        FUN_0c059f20((*(signed char *)((a4 + 0x1))), (*(signed char *)((a4 + 0x135))));
    }
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    t17 = FUN_0c037bf6(a4);
    t25 = (unsigned char)t17;
    if ((unsigned char)t17 != 0) {
        FUN_0c0a3058(a4, (*(signed char *)((a4 + 0x1))), 0x2, 0x10);
        t20 = *(int *)(((0x118 + a4) + 0x4));
        t21 = (((struct o118_int *)(a4))->v);
        (((struct oA0_float *)(t20))->v) = 1.0f;
        (((struct o9C_float *)(t20))->v) = 1.0f;
        (((struct oA0_float *)(t21))->v) = 1.0f;
        (((struct o9C_float *)(t21))->v) = 1.0f;
        t22 = *(int *)(((0x118 + a4) + 0x4));
        t23 = (((struct o118_int *)(a4))->v);
        (((struct o98_float *)(t22))->v) = 1.0f;
        (((struct o98_float *)(t23))->v) = 1.0f;
        (((struct o94_float *)(t22))->v) = 1.0f;
        (((struct o94_float *)(t23))->v) = 1.0f;
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        t25 = 0x16;
    }
    return t25;
}

int FUN_0c0a6e8e(int a4)
{
    register int t0;

    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        return FUN_0c085d0c(a4);
    }
    return (unsigned char)t0;
}

int FUN_0c0a6eb0(int a4, int a5, int a6, int a7)
{
    register int t2;

    if ((*(signed char *)((a4 + 0x371C))) != 0) {
        return FUN_0c07283a(a4);
    }
    t2 = *(signed char *)((a4 + 0x16));
    if (t2 != 0) {
        if (t2 != 1) {
            if (t2 != 2) {
                return t2;
            }
            return FUN_0c0a6e8e(a4);
        }
        return FUN_0c0a6dd0(a4);
    }
    return ((int (*)(int, int, int, int))(0xC0A6CD0))(a4, a5, a6, a7);
}

int FUN_0c0a7170(int a4)
{
    register int t0;

    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        return FUN_0c085d0c(a4);
    }
    return FUN_0c038362(a4);
}

int FUN_0c0a7194(int a4)
{
    register int t0;

    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        return FUN_0c085d0c(a4);
    }
    return FUN_0c038362(a4);
}


int FUN_0c0a7430(int a4, int a5, int a6, int a7)
{
    register int t0;

    if ((*(signed char *)((a4 + 0x371C))) != 0) {
        t0 = *(signed char *)((a4 + 0x15));
        if (t0 != 0) {
            if (t0 != 1) {
                if (t0 != 2) {
                    return t0;
                }
                return ((int (*)(int, int, int, int))(0xC0A73D6))(a4, a5, a6, a7);
            }
            return FUN_0c0a7278(a4);
        }
        return ((int (*)(int, int, int, int))(0xC0A71E2))(a4, a5, a6, a7);
    }
    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        return t0;
                    }
                    return FUN_0c0a7170(a4);
                }
                return FUN_0c0a7194(a4);
            }
            return ((int (*)(int, int, int, int))(0xC0A70E6))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC0A6FB4))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC0A6F14))(a4, a5, a6, a7);
}
