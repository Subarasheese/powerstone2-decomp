/* game/unsorted: functions 0C15B42C-0C15B46C, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c03f444(int, int, int);
int FUN_0c187798(int);
int FUN_0c15b42c(int a4, int a5);

int FUN_0c15b42c(int a4, int a5)
{
    register int t0;
    register int t4;
    register int t2;

    t0 = FUN_0c03f444(0x5, 0x0, 0x1);
    t4 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC15B366;
        FUN_0c187798(t0);
        t4 = (FUN_0c187798(t2));
    }
    return t4;
}
