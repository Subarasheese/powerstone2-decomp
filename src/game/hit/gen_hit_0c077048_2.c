/* game/hit: functions 0C077048-0C07763A, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c074808(int);
int FUN_0c077048(int);
int FUN_0c0770fc(int);
int FUN_0c077206(int);
int FUN_0c0772d0(int);
int FUN_0c077338(int a4);

int FUN_0c077338(int a4)
{
    int t0;
    register int t1;

    t1 = 0x130;
    if (((int)(*(signed char *)((a4 + 0x16))) > 0) && (t0 = *(signed char *)((a4 + 0x130)), t0 != 0)) {
    } else {
        t0 = *(signed char *)((a4 + 0x16));
        switch (t0) {
        case 0:
            FUN_0c077048(a4);
            break;
        case 1:
            FUN_0c0770fc(a4);
            break;
        case 2:
            FUN_0c077206(a4);
            break;
        case 3:
            FUN_0c0772d0(a4);
            break;
        }
        t0 = 0x16;
        if ((*(signed char *)((a4 + 0x16))) != 0) {
            t0 = (FUN_0c074808(a4));
        }
        t1 = t0;
    }
    return t1;
}
