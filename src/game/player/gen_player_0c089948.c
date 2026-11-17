/* game/player: functions 0C089948-0C08A2D8, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17C_float { char p[0x17C]; float v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o376C_int { char p[0x376C]; int v; };
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c085eac(int, int);
int FUN_0c087b64(int);
int FUN_0c0c224c(int, int);
int FUN_0c089948(int a4);
int FUN_0c089c02(int a4, int a5, int a6, int a7);
int FUN_0c089e5a(int a4, int a5, int a6, int a7);
int FUN_0c08a286(int a4, int a5, int a6, int a7);

int FUN_0c089948(int a4)
{
    int stk[9];
    float u1;
    register int t7;
    register int t8;
    register int t12;
    register int t13;

    if (((*(signed char *)((a4 + 0x3731))) != 2) && (u1 = (((struct o17C_float *)(a4))->v), u1 > 0.0f)) {
        if ((*(signed char *)((a4 + 0x2))) != 10) {
            *(int *)((int)stk + 8) = 0xE;
            *(int *)((int)stk + 4) = 0x3;
            *(int *)((int)stk + 0) = 0xFFFFFFFF;
            t7 = 0xE;
            t8 = 0xFFFFFFFF;
            t12 = 0xFFFFFFFF;
            t13 = 0xE;
        } else {
            *(int *)((int)stk + 8) = 0x0;
            *(int *)((int)stk + 4) = 0x3;
            t12 = *(signed char *)((a4 + 0x1));
            *(unsigned int *)(((int)stk + 12)) = t12;
            t8 = t12;
            *(int *)((int)stk + 0) = t8;
            t7 = 0x0;
            t13 = 0x0;
        }
        FUN_0c07e79c(a4, t12, 0x3, t13, t8, 0x3, t7);
        FUN_0c0c224c(a4, ((((struct o376C_int *)(a4))->v)));
        (((struct o16_uchar *)(a4))->v) = 0x0;
    } else {
        *(int *)((int)stk + 8) = 0xD;
        *(int *)((int)stk + 4) = 0x3;
        *(int *)((int)stk + 0) = 0xFFFFFFFF;
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0xD, 0xFFFFFFFF, 0x3, 0xD);
        FUN_0c0c224c(a4, ((((struct o376C_int *)(a4))->v)));
        FUN_0c085eac(a4, 0x6);
        (((struct o16_uchar *)(a4))->v) = 0x1;
    }
    (((struct o22_ushort *)(a4))->v) = 0x0;
    return 0x22;
}

int FUN_0c089c02(int a4, int a5, int a6, int a7)
{
    register int t2;

    if (!(((((struct o17C_float *)(a4))->v)) > 0.0f)) {
        return FUN_0c087b64(a4);
    }
    t2 = *(signed char *)((a4 + 0x16));
    if (t2 != 0) {
        if (t2 != 1) {
            return t2;
        }
        return ((int (*)(int, int, int, int))(0xC089B86))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC089A1A))(a4, a5, a6, a7);
}

int FUN_0c089e5a(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return ((int (*)(int, int, int, int))(0xC089D48))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC089D02))(a4, a5, a6, a7);
}

int FUN_0c08a286(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return ((int (*)(int, int, int, int))(0xC08A00E))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC089F4E))(a4, a5, a6, a7);
}
