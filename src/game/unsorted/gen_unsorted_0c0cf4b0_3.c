/* game/unsorted: functions 0C0CF4B0-0C0CF8F4, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c03f346(int);
int FUN_0c0c3e3a(int, int, int);
int FUN_0c0c9568(int);
int FUN_0c0cf4fe(int);
int FUN_0c0cf594(int);
int FUN_0c0cf770(int a4, int a5, int a6);

int FUN_0c0cf770(int a4, int a5, int a6)
{
    register int t1;

    FUN_0c0c3e3a(a4, a5, a6);
    t1 = *(signed char *)((a4 + 0x41D));
    if (t1 != 0) {
        if (t1 != 9) {
            if (t1 != 10) {
                if (t1 != 11) {
                    return t1;
                }
                return FUN_0c03f346(a4);
            }
            return FUN_0c0c9568(a4);
        }
        return FUN_0c0cf594(a4);
    }
    return FUN_0c0cf4fe(a4);
}
