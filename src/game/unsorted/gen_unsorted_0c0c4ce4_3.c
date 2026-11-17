/* game/unsorted: functions 0C0C4CE4-0C0C5094, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o376C_uint { char p[0x376C]; unsigned int v; };
int FUN_0c0c216e(int);
int FUN_0c0c2870(int);
int FUN_0c0c2d56(int, int, int);
int FUN_0c0c3e3a(int, int, int);
int FUN_0c0c4ce4(int);
int FUN_0c0c4d6e(int);
int FUN_0c0c5024(int a4, int a5, int a6);

int FUN_0c0c5024(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x1));
    t1 = FUN_0c0c3e3a(a4, a5, a6);
    if (t1 == 0) {
        t2 = FUN_0c0c216e(a4);
        if (t2 == 0) {
            t2 = FUN_0c0c2870(a4);
            if (t2 != 0) {
                return FUN_0c0c2d56(a4, 0x6, (*(signed char *)((a4 + 0x1))));
            }
            t2 = *(signed char *)((a4 + 0x15));
            if (t2 != 0) {
                if (t2 != 1) {
                } else {
                    FUN_0c0c4d6e(a4);
                }
            } else {
                FUN_0c0c4ce4(a4);
            }
            (((struct o376C_uint *)((((short)t0 * (short)0x3938) + 0xC532498)))->v) = a4;
            return 0x376C;
        }
        return FUN_0c0c2d56(a4, 0x6, (*(signed char *)((a4 + 0x1))));
    }
    return t1;
}
