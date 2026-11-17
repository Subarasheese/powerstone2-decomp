/* game/unsorted: functions 0C10489C-0C104910, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c10489c(void);

int FUN_0c10489c(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = 0xC473038;
    for (;;) {
        *(unsigned int *)((t0 + 0x0)) = 0x0;
        t0 = (t0 + 0x4);
        if ((unsigned int)t0 >= (unsigned int)0xC473048) {
            break;
        }
    }
    t0 = 0xC473048;
    for (;;) {
        *(unsigned int *)((t0 + 0x0)) = 0x0;
        t0 = (t0 + 0x4);
        if ((unsigned int)t0 >= (unsigned int)0xC473058) {
            break;
        }
    }
    t0 = 0x0;
    for (;;) {
        t2 = 0x0;
        for (;;) {
            t3 = ((((((((t0 << 2) << 1) + t0) << 2) << 1) + 0xC472DF8) + t2) + 0x120);
            t1 = (((((((t0 << 2) << 1) + t0) << 2) << 1) + 0xC472DF8) + t2);
            t2 = (t2 + 0x8);
            *(unsigned int *)((t1 + 0x0)) = 0x0;
            *(unsigned int *)((t1 + 0x4)) = 0x0;
            *(unsigned int *)((t3 + 0x0)) = 0x0;
            *(unsigned int *)((t3 + 0x4)) = 0x0;
            if ((unsigned int)t2 >= (unsigned int)0x48) {
                break;
            }
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x4) {
            break;
        }
    }
    return t1;
}
