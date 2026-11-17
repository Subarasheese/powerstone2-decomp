/* game/object: functions 0C03F444-0C03F4C4, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c03f346(int);
int FUN_0c03f444(int, int, int);
int FUN_0c03fb78(int, int);
int FUN_0c03f48a(int a4, int a5, int a6, int a7);

int FUN_0c03f48a(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = FUN_0c03f444(a4, a5, a6);
    if (t0 != 0) {
        t1 = FUN_0c03fb78(t0, a7);
        if (t1 == 0) {
            FUN_0c03f346(t0);
            return 0x0;
        }
        return t0;
    }
    return 0x0;
}
