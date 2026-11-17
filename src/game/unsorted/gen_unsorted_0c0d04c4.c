/* game/unsorted: functions 0C0D04C4-0C0D04F0, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0d04c4(int a4, int a5);

int FUN_0c0d04c4(int a4, int a5)
{
    register int t0;
    register int t1;

    *(unsigned short *)((a4 + 0x0)) = 0x1;
    if ((*(int *)((a5 + 0x0))) != 0) {
        t0 = *(short *)((a4 + 0x0));
        *(unsigned short *)((a4 + 0x0)) = (t0 | 0x2);
        t1 = (t0 | 0x2);
    }
    t0 = t1;
    if ((*(int *)((a5 + 0x4))) != 0) {
        t1 = *(short *)((a4 + 0x0));
        *(unsigned short *)((a4 + 0x0)) = (t1 | 0x4);
        t0 = (t1 | 0x4);
    }
    t1 = t0;
    if ((*(int *)((a5 + 0x8))) != 0) {
        t0 = *(short *)((a4 + 0x0));
        *(unsigned short *)((a4 + 0x0)) = (t0 | 0x8);
        t1 = (t0 | 0x8);
    }
    return t1;
}
