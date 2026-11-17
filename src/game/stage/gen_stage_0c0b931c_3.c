/* game/stage: functions 0C0B931C-0C0BA196, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c037bf6(int, int, int);
int FUN_0c038362(int);
int FUN_0c070320(int);
int FUN_0c070690(int, int, int);
int FUN_0c070980(int);
int FUN_0c07101a(int, int, int, int);
int FUN_0c071ae4(int);
int FUN_0c072bd4(int);
int FUN_0c07309e(int);
int FUN_0c07da48(int);
int FUN_0c085d0c(int);
int FUN_0c0b9430(int);
int FUN_0c0b9f22(int);
int FUN_0c0ba0c8(int a4, int a5, int a6, int a7);

int FUN_0c0ba0c8(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x3732));
    if (t0 != 0) {
        if (t0 != 2) {
            if (t0 != 3) {
                if (t0 != 4) {
                    if (t0 != 5) {
                        if (t0 != 6) {
                            if (t0 != 7) {
                                if (t0 != 8) {
                                    if (t0 != 9) {
                                        if (t0 != 12) {
                                            if (t0 != 13) {
                                                if (t0 != 14) {
                                                    t0 = FUN_0c037bf6(a4, a5, a6);
                                                    if ((unsigned char)t0 != 0) {
                                                        return FUN_0c085d0c(a4);
                                                    }
                                                    FUN_0c038362(a4);
                                                    FUN_0c07da48(a4);
                                                    return FUN_0c070320(a4);
                                                }
                                                return FUN_0c07309e(a4);
                                            }
                                            return FUN_0c072bd4(a4);
                                        }
                                        return ((int (*)(int, int, int, int))(0xC0B9E58))(a4, a5, a6, a7);
                                    }
                                    return FUN_0c071ae4(a4);
                                }
                                return ((int (*)(int, int, int, int))(0xC0B9BAC))(a4, a5, a6, a7);
                            }
                            return ((int (*)(int, int, int, int))(0xC0B9916))(a4, a5, a6, a7);
                        }
                        return FUN_0c0b9430(a4);
                    }
                    return FUN_0c07101a(a4, a5, a6, a7);
                }
                return FUN_0c070980(a4);
            }
            return FUN_0c070690(a4, a5, a6);
        }
        return FUN_0c0b9f22(a4);
    }
    t0 = FUN_0c037bf6(a4, a5, a6);
    if ((unsigned char)t0 != 0) {
        return FUN_0c085d0c(a4);
    }
    FUN_0c038362(a4);
    FUN_0c07da48(a4);
    return FUN_0c070320(a4);
}
