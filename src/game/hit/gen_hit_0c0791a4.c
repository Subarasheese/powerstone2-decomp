/* game/hit: functions 0C0791A4-0C079214, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o382A_ushort { char p[0x382A]; unsigned short v; };
int FUN_0c07d2c4(int, int);
int FUN_0c085d0c(int);
int FUN_0c0791a4(int a4, int a5, int a6, int a7);

int FUN_0c0791a4(int a4, int a5, int a6, int a7)
{
    int t0;

    if (((int)(*(signed char *)((a4 + 0x16))) > 0) && (t0 = *(signed char *)((a4 + 0x130)), t0 != 0)) {
        return 0x130;
    }
    if ((*(signed char *)((a4 + 0x16))) == 2) {
        t0 = FUN_0c07d2c4(a4, ((0x3744 + a4) + 0x2));
        if (t0 == 0) {
            (((struct o382A_ushort *)(a4))->v) = 0x0;
            return FUN_0c085d0c(a4);
        }
    }
    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            return ((int (*)(int, int, int, int))(0xC07908A))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC07901E))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC078FF4))(a4, a5, a6, a7);
}
