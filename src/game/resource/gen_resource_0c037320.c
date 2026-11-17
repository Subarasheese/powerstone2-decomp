/* game/resource: functions 0C037320-0C03733C, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c037320(int a4, int a5);

int FUN_0c037320(int a4, int a5)
{
    if ((int)(*(int *)((a5 + 0xC))) <= (int)a4) {
        return 0xFFFFFFFF;
    }
    return (*(int *)((((((a4 << 2) << 2) << 1) + (a5 + 0x10)) + 0x18)));
}
