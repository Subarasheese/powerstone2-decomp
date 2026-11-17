/* game/stage: functions 0C0CEF24-0C0CF2F4, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0c2a80(int);
int FUN_0c0c47a4(int, int, int);
int FUN_0c0c4bcc(int, int, int);
int FUN_0c0c4c1c(int, int, int);
int FUN_0c0c5024(int, int, int);
int FUN_0c0c8c08(int, int, int);
int FUN_0c0c8c36(int, int, int);
int FUN_0c0c8fd4(int, int, int);
int FUN_0c0cefac(int, int, int);
int FUN_0c0cf16e(int, int, int);
int FUN_0c0cf1f4(int);
int FUN_0c0cf280(int a4, int a5, int a6, int a7);

int FUN_0c0cf280(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x41D));
    if ((unsigned int)t0 < (unsigned int)0xC) {
        switch ((t0 << 1)) {
            case 0:
            {
                return FUN_0c0cefac(a4, a5, a6);
            }
            case 2:
            {
                return FUN_0c0c47a4(a4, a5, a6);
            }
            case 4:
            {
                return FUN_0c0cf16e(a4, a5, a6);
            }
            case 6:
            {
                return FUN_0c0c4bcc(a4, a5, a6);
            }
            case 8:
            {
                return FUN_0c0c4c1c(a4, a5, a6);
            }
            case 10:
            {
                return FUN_0c0c5024(a4, a5, a6);
            }
            case 12:
            {
                return ((int (*)(int, int, int, int))(0xC0CF1E4))(a4, a5, a6, a7);
            }
            case 14:
            {
                return FUN_0c0c8c08(a4, a5, a6);
            }
            case 16:
            {
                return FUN_0c0c8c36(a4, a5, a6);
            }
            case 18:
            {
                return FUN_0c0c8fd4(a4, a5, a6);
            }
            case 20:
            {
                return FUN_0c0cf1f4(a4);
            }
            default:
            {
                return FUN_0c0c2a80(a4);
            }
        }
    }
    return t0;
}
