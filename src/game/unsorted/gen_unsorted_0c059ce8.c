/* game/unsorted: functions 0C059CE8-0C059CFC, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int bgm_stop_slot(int);
int FUN_0c059ce8(int a4);

int FUN_0c059ce8(int a4)
{
    return bgm_stop_slot((*(int *)(((((a4 << 2) + a4) << 2) + 0xC1C2430))));
}
