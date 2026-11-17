/* game/unsorted: functions 0C02FDE8-0C02FE50, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c02fde8(void);

int FUN_0c02fde8(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t0 = 0x0;
    t1 = 0xC3BC08C;
    for (;;) {
        t3 = 0x0;
        t2 = t1;
        for (;;) {
            t3 = (t3 + 0x1);
            *(unsigned char *)((t2 + 0x0)) = 0x0;
            t2 = (t2 + 0x1);
            if ((unsigned int)t3 >= (unsigned int)0x35C) {
                break;
            }
        }
        t0 = (t0 + 0x1);
        t1 = (t1 + 0x160);
        if ((int)t0 >= (int)0x2) {
            break;
        }
    }
    t0 = 0xC3BC6AC;
    t3 = t2;
    t2 = 0xC3BC6AC;
    t4 = t1;
    for (;;) {
        if ((unsigned int)t2 >= (unsigned int)0xC3BCD64) {
            break;
        }
        t0 = 0x98;
        t3 = 0x0;
        t0 = (t0 + t2);
        for (;;) {
            t1 = t0;
            t4 = 0x0;
            for (;;) {
                t4 = (t4 + 0x1);
                *(unsigned char *)((t1 + 0x0)) = 0x0;
                t1 = (t1 + 0x1);
                if ((unsigned int)t4 >= (unsigned int)0x35C) {
                    break;
                }
            }
            t3 = (t3 + 0x1);
            t0 = (t0 + 0x160);
            if ((int)t3 >= (int)0x2) {
                break;
            }
        }
        t2 = (t2 + 0x35C);
    }
    return 0x0;
}
