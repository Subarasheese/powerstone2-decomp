/* game/player: functions 0C09EBBC-0C09EC62, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c037bf6(int);
int FUN_0c038362(int);
int FUN_0c059ef6(int, int);
int FUN_0c070320(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c085cac(int, int, int);
int FUN_0c085d0c(int);
int FUN_0c09ebbc(int a4);
int FUN_0c09ebe6(int a4);
int FUN_0c09ec36(int a4);

int FUN_0c09ebbc(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x1));
    return (FUN_0c07e79c(a4, t0, 0x1, 0x7, (t0), 0x1, 0x7));
}

int FUN_0c09ebe6(int a4)
{
    int t0;

    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        return FUN_0c085d0c(a4);
    }
    t0 = FUN_0c07ecc6(a4, 0x0, 0x0);
    if ((t0 != 0) && (t0 != 1)) {
        return FUN_0c085cac(a4, 0x6, 0x0);
    }
    FUN_0c038362(a4);
    return FUN_0c070320(a4);
}

int FUN_0c09ec36(int a4)
{
    int stk[4];

    *(int *)((int)stk + 12) = a4;
    *(int *)((int)stk + 8) = 0x3;
    *(int *)((int)stk + 4) = 0x2;
    *(int *)((int)stk + 0) = 0xFFFFFFFF;
    FUN_0c07e79c(a4, 0xFFFFFFFF, 0x2, 0x3, 0xFFFFFFFF, 0x2, 0x3);
    return FUN_0c059ef6((*(signed char *)(((*(int *)(((int)stk + 12))) + 0x1))), 0x1);
}
