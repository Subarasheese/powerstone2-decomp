/* game/player: functions 0C0879C4-0C087B80, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17C_float { char p[0x17C]; float v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o376C_int { char p[0x376C]; int v; };
struct o50_float { char p[0x50]; float v; };
struct o8C_float { char p[0x8C]; float v; };
int FUN_0c037bf6(int, int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c081dfc(int);
int FUN_0c085d0c(int);
int FUN_0c085eac(int, int);
int FUN_0c085f66(int);
int FUN_0c0c224c(int, int, int, int, int, int, int, int);
int FUN_0c0c2380(int, int);
int FUN_0c0c3054(int, int, int);
int FUN_0c0879c4(int a4);
int FUN_0c087a42(int a4, int a5, int a6);
int FUN_0c087ae8(int a4, int a5, int a6);

int FUN_0c0879c4(int a4)
{
    int stk[5];
    register int t10;

    if (((((struct o17C_float *)(a4))->v)) > 0.0f) {
        *(int *)((int)stk + 8) = 0xC;
        *(int *)((int)stk + 4) = 0x3;
        *(int *)((int)stk + 0) = 0xFFFFFFFF;
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0xC, 0xFFFFFFFF, 0x3, 0xC);
        FUN_0c0c224c(a4, ((((struct o376C_int *)(a4))->v)), 0x0, 0x0, *(int *)((int)stk + 12), *(int *)((int)stk + 12 + 4), *(int *)((int)stk + 12 + 8), *(int *)((int)stk + 12 + 12));
        FUN_0c085eac(a4, 0x6);
        t10 = 0x0;
    } else {
        *(int *)((int)stk + 8) = 0xD;
        *(int *)((int)stk + 4) = 0x3;
        *(int *)((int)stk + 0) = 0xFFFFFFFF;
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0xD, 0xFFFFFFFF, 0x3, 0xD);
        FUN_0c0c224c(a4, ((((struct o376C_int *)(a4))->v)), 0x0, 0x0, *(int *)((int)stk + 12), *(int *)((int)stk + 12 + 4), *(int *)((int)stk + 12 + 8), *(int *)((int)stk + 12 + 12));
        FUN_0c085eac(a4, 0x6);
        t10 = 0x1;
    }
    (((struct o16_uchar *)(a4))->v) = t10;
    (((struct o22_ushort *)(a4))->v) = 0x0;
    return 0x22;
}

int FUN_0c087a42(int a4, int a5, int a6)
{
    register int t0;
    register int t1;

    t0 = FUN_0c037bf6(a4, a5, a6);
    if ((unsigned char)t0 != 0) {
        t0 = FUN_0c085f66(a4);
        if (t0 == 0) {
            FUN_0c081dfc(a4);
        }
        return FUN_0c085d0c(a4);
    }
    if (!(10.0f > ((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v)))) {
        if (((((struct o22_short *)(a4))->v)) == 0) {
            (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) + 0x1);
            t0 = *(signed char *)((a4 + 0x1));
            t1 = 0x1;
            if ((*(signed char *)((a4 + 0x3731))) == 0) {
                t1 = 0x0;
            }
            FUN_0c0c3054(((((struct o376C_int *)(a4))->v)), t0, t1);
            return FUN_0c0c2380(a4, ((((struct o376C_int *)(a4))->v)));
        }
        return 0x22;
    }
    return 0x8C;
}

int FUN_0c087ae8(int a4, int a5, int a6)
{
    register int t0;
    register int t1;

    t0 = FUN_0c037bf6(a4, a5, a6);
    if ((unsigned char)t0 != 0) {
        t0 = FUN_0c085f66(a4);
        if (t0 == 0) {
            FUN_0c081dfc(a4);
        }
        (((struct o50_float *)(a4))->v) = 0.0f;
        return FUN_0c085d0c(a4);
    }
    if (!((*(float *)0xC087BA0) > ((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v)))) {
        if (((((struct o22_short *)(a4))->v)) == 0) {
            (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) + 0x1);
            t0 = *(signed char *)((a4 + 0x1));
            t1 = 0x1;
            if ((*(signed char *)((a4 + 0x3731))) == 0) {
                t1 = 0x0;
            }
            FUN_0c0c3054(((((struct o376C_int *)(a4))->v)), t0, t1);
            return FUN_0c0c2380(a4, ((((struct o376C_int *)(a4))->v)));
        }
        return 0x22;
    }
    return 0x8C;
}
