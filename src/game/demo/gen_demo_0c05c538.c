/* game/demo: functions 0C05C538-0C05C5D8, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c05c538(void);

int FUN_0c05c538(void)
{
    register int t0;
    register int t12;

    t0 = 0x0;
    for (;;) {
        *(unsigned char *)(((0xC542271 + (t0 << 2)) + 0x0)) = (*(signed char *)(((*(int *)((((t0 << 2) + 0xC25784C) + 0x0))) + 0x0)));
        *(unsigned char *)(((0xC542271 + (t0 << 2)) + 0x1)) = (*(signed char *)(((*(int *)((((t0 << 2) + 0xC25784C) + 0x0))) + 0x1)));
        *(unsigned char *)(((0xC542271 + (t0 << 2)) + 0x2)) = (*(signed char *)(((*(int *)((((t0 << 2) + 0xC25784C) + 0x0))) + 0x2)));
        *(unsigned char *)(((0xC5422CE + (t0 << 2)) + 0x0)) = (*(signed char *)(((*(int *)((((t0 << 2) + 0xC257874) + 0x0))) + 0x0)));
        *(unsigned char *)(((0xC5422CE + (t0 << 2)) + 0x1)) = (*(signed char *)(((*(int *)((((t0 << 2) + 0xC257874) + 0x0))) + 0x1)));
        t12 = *(signed char *)(((*(int *)((((t0 << 2) + 0xC257874) + 0x0))) + 0x2));
        *(unsigned char *)(((0xC5422CE + (t0 << 2)) + 0x2)) = t12;
        *(unsigned int *)(((0xC54229C + (t0 << 2)) + 0x0)) = (*(int *)((((t0 << 2) + 0xC1C37E8) + 0x0)));
        *(unsigned char *)(((0xC542267 + t0) + 0x0)) = t0;
        *(unsigned int *)((((t0 << 2) + 0xC5422F8) + 0x0)) = (*(int *)((((t0 << 2) + 0xC1C37E8) + 0x0)));
        *(unsigned char *)(((0xC5422C4 + t0) + 0x0)) = t0;
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0xA) {
            break;
        }
    }
    return t12;
}
