/* game/effect: functions 0C115DC8-0C1171F0, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c116c2e(int, int, int);
int FUN_0c116cde(int, int);
int FUN_0c116d34(int, int, int, int);
int FUN_0c116e44(int);
int FUN_0c116f60(int);
int FUN_0c117078(int, int);
int FUN_0c117136(int, int);
int FUN_0c11719c(int a4, int a5, int a6, int a7);

int FUN_0c11719c(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)(((0x41C + a4) + 0x0));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        if (t0 != 5) {
                            if (t0 != 6) {
                                return t0;
                            }
                            return FUN_0c116f60(a4);
                        }
                        return FUN_0c117136(a4, (0x41C + a4));
                    }
                    return FUN_0c117078(a4, (0x41C + a4));
                }
                return FUN_0c116d34(a4, (0x41C + a4), a6, a7);
            }
            return FUN_0c116e44(a4);
        }
        return FUN_0c116cde(a4, (0x41C + a4));
    }
    return FUN_0c116c2e(a4, (0x41C + a4), a6);
}
