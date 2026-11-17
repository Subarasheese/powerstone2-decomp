/* game/hit: functions 0C0E33CC-0C0E3CCC, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0e343a(void);
int FUN_0c0e3440(int);
int FUN_0c0e34a8(int a4);

int FUN_0c0e34a8(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x2));
    if (t0 != 2) {
        if (t0 != 3) {
            return t0;
        }
        return FUN_0c0e3440(a4);
    }
    return FUN_0c0e343a();
}
