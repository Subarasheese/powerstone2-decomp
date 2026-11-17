/* game/unsorted: functions 0C02F7A0-0C02F7EC, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c176b90(int);
int FUN_0c17f3a0(int, int);
int FUN_0c02f7a0(void);

int FUN_0c02f7a0(void)
{
    register int t0;

    t0 = *(int *)0xC4B41D8;
    if (t0 == 1) {
        *(unsigned int *)0xC4B41D8 = 0x0;
        FUN_0c176b90(0x3E8);
        FUN_0c17f3a0(0xC4B1408, 0x0);
        FUN_0c176b90(0x428);
        return FUN_0c17f3a0(0xC4B2384, 0x0);
    }
    return t0;
}
