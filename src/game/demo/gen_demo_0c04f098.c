/* game/demo: functions 0C04F098-0C04F0B4, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c03f444(int, int, int);
int staffroll_create(void);

int staffroll_create(void)
{
    register int t0;

    t0 = FUN_0c03f444(0x8, 0x0, 0x0);
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x4)) = 0xC04EFC8;
    }
    return t0;
}
