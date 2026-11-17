/* game/flow: functions 0C121334-0C121396, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c17a4c0(int, int);
int dbg_printf(int, ...);
int FUN_0c121334(void);

int FUN_0c121334(void)
{
    register int t0;
    register int t2;
    register int t3;
    register int t6;

    t0 = 0x0;
    for (;;) {
        t2 = (((t0 << 2) + t0) << 1);
        t3 = 0x5;
        for (;;) {
            FUN_0c17a4c0(t3, (t0 + 0xA));
            *(volatile signed char *)((t2 + 0xC542A14));
            t6 = dbg_printf(0xC201A30);
            t3 = (t3 + 0x3);
            t2 = (t2 + 0x1);
            if ((int)t3 >= (int)0x35) {
                break;
            }
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0xA) {
            break;
        }
    }
    return t6;
}
