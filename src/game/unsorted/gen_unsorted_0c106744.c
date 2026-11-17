/* game/unsorted: functions 0C106744-0C107054, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c106744(int a4);
int FUN_0c10700a(int a4, int a5, int a6, int a7);

int FUN_0c106744(int a4)
{
    (((struct o14_uchar *)(a4))->v) = 0x3;
    (((struct o15_uchar *)(a4))->v) = 0x0;
    return 0x15;
}

int FUN_0c10700a(int a4, int a5, int a6, int a7)
{
    int t0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 5) {
                        if (t0 != 6) {
                            if ((t0 != 98) && (t0 != 99)) {
                                return t0;
                            }
                            return FUN_0c03f346(a4, a5, a6, a7);
                        }
                        return ((int (*)(int, int, int, int))(0xC106DEE))(a4, a5, a6, a7);
                    }
                    return ((int (*)(int, int, int, int))(0xC106D40))(a4, a5, a6, a7);
                }
                return ((int (*)(int, int, int, int))(0xC106928))(a4, a5, a6, a7);
            }
            return ((int (*)(int, int, int, int))(0xC1067FA))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC10678E))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC10678A))(a4, a5, a6, a7);
}
