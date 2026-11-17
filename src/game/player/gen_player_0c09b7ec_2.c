/* game/player: functions 0C09B7EC-0C09B8C8, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c037bf6(int);
int FUN_0c085d0c(int);
int FUN_0c09b8a2(int a4);

int FUN_0c09b8a2(int a4)
{
    register int t1;

    FUN_0c037bf6(a4);
    t1 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
    if ((int)(short)(t1 - 1) <= 0) {
        return FUN_0c085d0c(a4);
    }
    return (short)(t1 - 1);
}
