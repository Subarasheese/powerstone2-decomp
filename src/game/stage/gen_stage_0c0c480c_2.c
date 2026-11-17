/* game/stage: functions 0C0C480C-0C0C4BAA, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0c3e3a(int, int, int);
int FUN_0c0c488e(int);
int FUN_0c0c48e8(int);
int FUN_0c0c4b76(int a4, int a5, int a6);

int FUN_0c0c4b76(int a4, int a5, int a6)
{
    register int t0;
    register int t2;

    t0 = FUN_0c0c3e3a(a4, a5, a6);
    if (t0 == 0) {
        t2 = *(signed char *)((a4 + 0x15));
        if (t2 != 0) {
            if (t2 != 1) {
                return t2;
            }
            return FUN_0c0c48e8(a4);
        }
        return FUN_0c0c488e(a4);
    }
    return t0;
}
