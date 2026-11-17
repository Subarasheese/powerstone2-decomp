/* game/menu/option: functions 0C0584B0-0C0584F0, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0584b0(int a4, int a5, int a6, int a7);

int FUN_0c0584b0(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = *(int *)((a5 + 0x0));
    if ((int)a4 >= 0) {
        t1 = a6;
        if (((int)(unsigned short)t0 > (int)a6) && ((int)(unsigned short)t0 < (int)0x8000)) {
        } else {
            t2 = (unsigned short)t0;
            if ((int)(unsigned short)t0 < (int)a7) {
                t3 = a7;
                if ((int)(unsigned short)t0 <= (int)0x8000) {
                    t3 = (unsigned short)t0;
                }
                t2 = t3;
            }
            t1 = t2;
        }
        t2 = t1;
    } else {
        t1 = a7;
        if (((int)(unsigned short)t0 >= (int)a7) || ((int)(unsigned short)t0 <= (int)0x8000)) {
            t3 = (unsigned short)t0;
            if (((int)(unsigned short)t0 > (int)a6) && ((int)(unsigned short)t0 < (int)0x8000)) {
                t3 = a6;
            }
            t1 = t3;
        }
        t2 = t1;
    }
    *(unsigned int *)((a5 + 0x0)) = t2;
    return t2;
}
