/* game/unsorted: functions 0C15E078-0C15E960, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c15e246(int, int);
int FUN_0c15e5d4(int, int);
int FUN_0c15e64a(int, int);
int FUN_0c15e7e4(int, int);
int FUN_0c15e918(int a4);

int FUN_0c15e918(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x2));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        if (t0 != 5) {
                            if (t0 != 6) {
                                return t0;
                            }
                            return FUN_0c15e7e4(a4, 0x0);
                        }
                        return FUN_0c15e64a(a4, 0x1);
                    }
                    return FUN_0c15e5d4(a4, 0x1);
                }
                return FUN_0c15e246(a4, 0x1);
            }
            return FUN_0c15e64a(a4, 0x0);
        }
        return FUN_0c15e5d4(a4, 0x0);
    }
    return FUN_0c15e246(a4, 0x0);
}
