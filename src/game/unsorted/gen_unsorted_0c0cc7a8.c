/* game/unsorted: functions 0C0CC7A8-0C0CC88C, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0c2a80(int);
int FUN_0c0c3e3a(int, int, int);
int FUN_0c0c4bcc(int);
int FUN_0c0c4c1c(int);
int FUN_0c0c5024(int);
int FUN_0c0c52c4(int);
int FUN_0c0c8c36(int);
int FUN_0c0c9568(int);
int FUN_0c0d01f2(int);
int FUN_0c0cc7a8(int a4, int a5, int a6, int a7);

int FUN_0c0cc7a8(int a4, int a5, int a6, int a7)
{
    register int t1;

    FUN_0c0c3e3a(a4, a5, a6);
    t1 = *(signed char *)((a4 + 0x41D));
    if ((unsigned int)t1 < (unsigned int)0xC) {
        switch ((t1 << 1)) {
            case 0:
            {
                return ((int (*)(int, int, int, int))(0xC0CC094))(a4, a5, a6, a7);
            }
            case 2:
            {
                return ((int (*)(int, int, int, int))(0xC0CC29E))(a4, a5, a6, a7);
            }
            case 4:
            {
                return ((int (*)(int, int, int, int))(0xC0CC2B0))(a4, a5, a6, a7);
            }
            case 6:
            {
                return FUN_0c0c4bcc(a4);
            }
            case 8:
            {
                return FUN_0c0c4c1c(a4);
            }
            case 10:
            {
                return FUN_0c0c5024(a4);
            }
            case 12:
            {
                return FUN_0c0c52c4(a4);
            }
            case 14:
            case 16:
            {
                return FUN_0c0c8c36(a4);
            }
            case 18:
            {
                return ((int (*)(int, int, int, int))(0xC0CC450))(a4, a5, a6, a7);
            }
            case 20:
            {
                return FUN_0c0c9568(a4);
            }
            default:
            {
                if ((unsigned char)(*(signed char *)(((0x428 + a4) + 0x0))) == 0xC1) {
                    FUN_0c0d01f2((*(signed char *)((a4 + 0x424))));
                }
                return FUN_0c0c2a80(a4);
            }
        }
    }
    return t1;
}
