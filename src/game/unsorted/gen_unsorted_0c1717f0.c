/* game/unsorted: functions 0C1717F0-0C171896, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c03681e(void);
int FUN_0c036864(int);
int FUN_0c036b46(int);
int FUN_0c036b76(void);
int FUN_0c036de8(int, int, int);
int FUN_0c173370(void);
int FUN_0c1717f0(int a4, int a5, int a6);

int FUN_0c1717f0(int a4, int a5, int a6)
{
    int stk[3];
    register int t0;
    register int t3;

    t0 = *(signed char *)0xC475DC3;
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return FUN_0c036de8(0x15, a5, a6);
    }
    FUN_0c03681e();
    FUN_0c036b76();
    t3 = *(signed char *)0xC542237;
    if (t3 != 10) {
        if (t3 != 11) {
            if (t3 != 12) {
                if (t3 != 13) {
                    if (t3 != 14) {
                        *(unsigned char *)0xC475DBC = 0x0;
                        FUN_0c173370();
                        if ((int)(*(signed char *)0xC542237) <= (int)0x9) {
                            return FUN_0c036864((*(signed char *)0xC542237));
                        }
                        return 0x3F;
                    }
                    *(unsigned char *)0xC475DBC = 0x6;
                    FUN_0c173370();
                    return (FUN_0c036b46(0x7));
                }
                *(unsigned char *)0xC475DBC = 0x6;
                FUN_0c173370();
                return (FUN_0c036b46(0x26));
            }
            *(unsigned char *)0xC475DBC = 0x6;
            FUN_0c173370();
            return (FUN_0c036b46(0x25));
        }
        return (FUN_0c036b46(0x14));
    }
    return (FUN_0c036b46(0x2));
}
