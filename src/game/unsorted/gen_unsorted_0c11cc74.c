/* game/unsorted: functions 0C11CC74-0C11CCA8, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c037320(int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c11cc74(int a4);

int FUN_0c11cc74(int a4)
{
    register int t0;
    register int t1;

    t0 = FUN_0c037320(0x17, (*(int *)0xC4B410C));
    t1 = FUN_0c03f444(0x5, 0x1, t0);
    t0 = t1;
    if (t1 != 0) {
        *(unsigned char *)((t1 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t1 + 0x4)) = 0xC11CB50;
        *(unsigned int *)((t1 + 0x10)) = a4;
        t0 = 0xFFFFFFFF;
    }
    return t0;
}
