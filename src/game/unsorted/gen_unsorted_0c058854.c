/* game/unsorted: functions 0C058854-0C0588A4, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c058854(int a4, int a5, int a6, int a7);

int FUN_0c058854(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = (unsigned short)a5;
    if ((int)((unsigned short)a5 - (unsigned short)a6) > (int)0x8000) {
        t1 = 0x10000;
        t0 = ((unsigned short)a5 - 0x10000);
    }
    t2 = t0;
    if ((int)(t0 - (unsigned short)a6) < (int)0xFFFF8000) {
        t2 = (t0 + 0x10000);
    }
    t0 = t2;
    if (((int)(t2 - (unsigned short)a6) >= (int)(a7 & 0x7FFF)) || ((int)(t2 - (unsigned short)a6) <= (int)(-(a7 & 0x7FFF)))) {
        t3 = (-(a7 & 0x7FFF));
        if ((int)(t2 - (unsigned short)a6) >= 0) {
            t3 = (a7 & 0x7FFF);
        }
        t0 = ((unsigned short)a6 + t3);
    }
    *(unsigned int *)((a4 + 0x0)) = (unsigned short)t0;
    return t1;
}
