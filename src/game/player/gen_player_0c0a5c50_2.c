/* game/player: functions 0C0A5C50-0C0A5FFA, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c037bf6(int);
int FUN_0c038362(int);
int FUN_0c085d0c(int);
int FUN_0c0a5e0a(int a4);

int FUN_0c0a5e0a(int a4)
{
    register int t0;

    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        return FUN_0c085d0c(a4);
    }
    return FUN_0c038362(a4);
}
