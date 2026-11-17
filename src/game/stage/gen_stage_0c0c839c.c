/* game/stage: functions 0C0C839C-0C0C85BA, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0c839c(int a4, int a5, int a6, int a7);
int FUN_0c0c85aa(int a4, int a5, int a6, int a7);

int FUN_0c0c839c(int a4, int a5, int a6, int a7)
{
    if ((*(signed char *)((a4 + 0x41D))) == 7) {
        return ((int (*)(int, int, int, int))(0xC0C81FE))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC0C82DC))(a4, a5, a6, a7);
}

int FUN_0c0c85aa(int a4, int a5, int a6, int a7)
{
    if ((*(signed char *)((a4 + 0x41D))) == 7) {
        return ((int (*)(int, int, int, int))(0xC0C83DC))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC0C848C))(a4, a5, a6, a7);
}
