/* game/player: functions 0C056BA4-0C056E06, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c056be6(int, int);
int FUN_0c187798(int, int, int);
int FUN_0c056ce0(int a4, int a5);

int FUN_0c056ce0(int a4, int a5)
{
    int stk[32];
    register int t0;
    register int t2;
    register int t3;
    register int t5;

    t0 = 0xC1B9634;
    t2 = ((int)stk + 0);
    for (;;) { t3 = *(int *)t0; t0 = (t0 + 4); if ((unsigned int)((0xC1B9634 + 128)) < (unsigned int)t0) break; *(unsigned int *)t2 = t3; t2 = (t2 + 4); }
    FUN_0c187798(a4, a5, ((int)stk + 0));
    *(unsigned int *)((((int)stk + 0) + 0x20)) = t5;
    return (FUN_0c056be6(0xC24199C, ((int)stk + 0)));
}
