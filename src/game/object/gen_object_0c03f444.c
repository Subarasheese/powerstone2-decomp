/* game/object: functions 0C03F444-0C03F4C4, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c03f258(int, int);
int FUN_0c03f346(int);
int FUN_0c03f444(int a4, int a5, int a6, int a7);

int FUN_0c03f444(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t2;

    t0 = FUN_0c03f258(a4, 0x1);
    if (t0 != 0) {
        t2 = ((int (*)(int, int, int, int))((*(int *)(((a5 << 2) + 0xC240298)))))(t0, a6, a6, a7);
        if (t2 == 0) {
            FUN_0c03f346(t0);
            return 0x0;
        }
        return t0;
    }
    return 0x0;
}
