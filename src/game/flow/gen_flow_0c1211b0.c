/* game/flow: functions 0C1211B0-0C1211D4, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c1211b0(void);

int FUN_0c1211b0(void)
{
    register int t0;

    t0 = *(signed char *)0xC4759E2;
    if (((unsigned short)(*(short *)((0xC542868 + ((((t0 << 2) + t0) << 2) << 1)))) & 0x8040) != 0) {
        return 0x1;
    }
    return 0x0;
}
