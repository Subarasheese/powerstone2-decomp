/* game/debug: functions 0C0D0CC8-0C0D14D4, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c052c00(int, int, int);
int FUN_0c0cfecc(int, int, int);
int FUN_0c179ac0(void);
int FUN_0c187798(int, int, int);
int FUN_0c0d0d00(int a4, int a5, int a6);
int FUN_0c0d0d26(void);
int thunk_FUN_0c0d0d26(void);
int FUN_0c0d0e68(int a4);
int FUN_0c0d0e88(void);
int FUN_0c0d0e8c(void);


int FUN_0c0d0d26(void)
{
    int stk[4];
    register int t0;
    register int t2;
    register int t3;
    register int t4;
    register int t6;
    register int t7;
    register int t10;
    register int t11;
    register int t13;

    t0 = 0x0;
    for (;;) {
        *(unsigned int *)((((int)stk + 0) + (t0 << 2))) = t0;
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x4) {
            break;
        }
    }
    t2 = 0xA;
    for (;;) {
        t3 = FUN_0c179ac0();
        t4 = ((~(((~t3) + 0x1) & 0x3)) + 0x1);
        if ((int)t3 >= 0) {
            t4 = (t3 & 0x3);
        }
        t6 = FUN_0c179ac0();
        t7 = ((~(((~t6) + 0x1) & 0x3)) + 0x1);
        if ((int)t6 >= 0) {
            t7 = (t6 & 0x3);
        }
        t10 = *(int *)((((t4 << 2) + ((int)stk + 0)) + 0x0));
        t2 = (t2 - 0x1);
        *(unsigned int *)((((t4 << 2) + ((int)stk + 0)) + 0x0)) = (*(int *)((((t7 << 2) + ((int)stk + 0)) + 0x0)));
        *(unsigned int *)((((t7 << 2) + ((int)stk + 0)) + 0x0)) = t10;
        if (t2 == 0) {
            break;
        }
    }
    t11 = 0x0;
    for (;;) {
        t13 = FUN_0c0d0d00((*(int *)((((int)stk + 0) + (t11 << 2)))), t11, t7);
        t11 = (t11 + 0x1);
        if ((int)t11 >= (int)0x4) {
            break;
        }
    }
    return t13;
}

int thunk_FUN_0c0d0d26(void)
{
    return FUN_0c0d0d26();
}

int FUN_0c0d0e68(int a4)
{
    register int t1;

    t1 = 0x0;
    if ((*(signed char *)0xC54223C) == 1) {
        t1 = 0x2000;
    }
    return FUN_0c052c00(t1, 0x1555, a4);
}

int FUN_0c0d0e88(void)
{
    return FUN_0c0d0e68(0xA);
}

int FUN_0c0d0e8c(void)
{
    register int t0;
    register int t4;

    t0 = *(signed char *)0xC54223C;
    t4 = FUN_0c0cfecc((*(int *)(((((t0 << 2) << 1) + 0xC1C7928) + 0x0))), 0xC540996, (*(int *)(((((t0 << 2) << 1) + 0xC1C7928) + 0x4))));
    if ((int)t4 < 0) {
        return 0xFFFFFFFF;
    }
    return 0x0;
}


