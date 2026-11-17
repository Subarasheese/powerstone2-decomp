/* game/unsorted: functions 0C0C8BE8-0C0C8C08, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0c5326(int, int, int, int);
int FUN_0c0c7114(int, int, int, int);
int FUN_0c0c8be8(int a4, int a5, int a6, int a7);

int FUN_0c0c8be8(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x1));
    if ((*(signed char *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x3731))) == 0) {
        return FUN_0c0c5326(a4, (((short)t0 * (short)0x3938) + 0xC532498), a6, a7);
    }
    return FUN_0c0c7114(a4, (((short)t0 * (short)0x3938) + 0xC532498), a6, a7);
}
