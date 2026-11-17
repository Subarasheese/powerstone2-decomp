/* game/object: functions 0C03F40C-0C03F42C, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c03f40c(int a4, int a5, int a6, int a7);

int FUN_0c03f40c(int a4, int a5, int a6, int a7)
{
    register int t1;
    register int t2;

    t1 = 0xC532434;
    t2 = (*(int *)(((a4 << 2) + 0xC532434)));
    for (;;) {
        if (t2 == 0) {
            break;
        }
        t1 = (((int (*)(int, int, int, int))((*(int *)((t2 + 0x4)))))(t2, a5, a6, a7));
        t2 = (*(int *)((t2 + 0xC)));
    }
    return t1;
}
