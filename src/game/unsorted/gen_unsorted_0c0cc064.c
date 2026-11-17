/* game/unsorted: functions 0C0CC064-0C0CC094, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0cd5c0(int, int, int, int);
int FUN_0c0cc064(int a4);

int FUN_0c0cc064(int a4)
{
    register int t0;

    t0 = 0x0;
    for (;;) {
        if ((int)t0 >= (int)(*(signed char *)((a4 + 0x424)))) {
            break;
        }
        FUN_0c0cd5c0(0x2, 0x0, (a4 + 0x28), 0x0);
        t0 = (t0 + 0x1);
    }
    return 0x424;
}
