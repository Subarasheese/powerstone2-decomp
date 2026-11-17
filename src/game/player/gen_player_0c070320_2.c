/* game/player: functions 0C070320-0C0717A8, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c037bf6(int, int, int);
int FUN_0c038362(int);
int FUN_0c070320(int);
int FUN_0c0709e8(int);
int FUN_0c070c7c(int);
int FUN_0c070e64(int);
int FUN_0c070f34(int);
int FUN_0c070ff8(int);
int FUN_0c085d0c(int);
int FUN_0c070690(int a4, int a5, int a6);
int FUN_0c07101a(int a4, int a5, int a6, int a7);

int FUN_0c070690(int a4, int a5, int a6)
{
    register int t0;

    t0 = FUN_0c037bf6(a4, a5, a6);
    if ((unsigned char)t0 != 0) {
        return FUN_0c085d0c(a4);
    }
    FUN_0c038362(a4);
    return FUN_0c070320(a4);
}

int FUN_0c07101a(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        if (t0 != 5) {
                            return t0;
                        }
                        return FUN_0c070ff8(a4);
                    }
                    return FUN_0c070f34(a4);
                }
                return FUN_0c070e64(a4);
            }
            return FUN_0c070c7c(a4);
        }
        return ((int (*)(int, int, int, int))(0xC070AA8))(a4, a5, a6, a7);
    }
    return FUN_0c0709e8(a4);
}
