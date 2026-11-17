/* game/player: functions 0C056BA4-0C056E06, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c056be6(int);
int FUN_0c187798(int);
int FUN_0c056dc6(void);

int FUN_0c056dc6(void)
{
    int stk[32];
    register int t0;
    register int t2;
    register int t4;
    register int t7;
    register int t3;
    register int t5;
    register int t6;

    t0 = 0xC1B9734;
    t2 = ((int)stk + 0);
    for (;;) { t3 = *(int *)t0; t0 = (t0 + 4); if ((unsigned int)((0xC1B9734 + 128)) < (unsigned int)t0) break; *(unsigned int *)t2 = t3; t2 = (t2 + 4); }
    t4 = ((int (*)(int, int, int))(FUN_0c187798))(0xC5410FC, ((int)stk + 0), ((int)stk + 0));
    t7 = ((int (*)(int, int))(FUN_0c187798))(t6, t5);
    return (FUN_0c056be6(0xC2419C4));
}
