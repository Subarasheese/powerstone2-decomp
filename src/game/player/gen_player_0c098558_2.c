/* game/player: functions 0C098558-0C0990CA, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c098bf0(int);
int FUN_0c098cae(int, int, int, int);
int FUN_0c098d80(int);
int FUN_0c098dca(int a4, int a5, int a6, int a7);

int FUN_0c098dca(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            return FUN_0c098d80(a4);
        }
        return FUN_0c098cae(a4, a5, a6, a7);
    }
    return FUN_0c098bf0(a4);
}
