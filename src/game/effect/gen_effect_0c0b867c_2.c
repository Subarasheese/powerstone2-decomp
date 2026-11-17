/* game/effect: functions 0C0B867C-0C0B8BC8, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0b867c(int);
int FUN_0c0b8874(int);
int FUN_0c0b8992(int, int);
int FUN_0c0b8b98(int a4, int a5);

int FUN_0c0b8b98(int a4, int a5)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x375A));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        if (t0 != 5) {
                            return t0;
                        }
                        return FUN_0c0b8992(a4, a5);
                    }
                    return FUN_0c0b8874(a4);
                }
                return FUN_0c0b867c(a4);
            }
            return FUN_0c0b8992(a4, a5);
        }
        return FUN_0c0b8874(a4);
    }
    return FUN_0c0b867c(a4);
}
