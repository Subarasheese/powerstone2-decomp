/* game/unsorted: functions 0C0A997C-0C0A9C78, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c037bf6(int);
int FUN_0c0725fa(int);
int FUN_0c07d774(int);
int FUN_0c085d0c(int);
int FUN_0c0a997c(int a4);
int FUN_0c0a9a0a(int a4, int a5, int a6, int a7);

int FUN_0c0a997c(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = *(short *)((a4 + 0x1C));
    if (((int)(short)t0 < (int)0x14) && ((short)t0 != 0)) {
        t0 = FUN_0c07d774(a4);
        t1 = *(int *)((a4 + 0x38));
        t2 = *(short *)((a4 + 0x1C));
        t3 = (unsigned short)(t0 - t1);
        if ((0x8000 & (unsigned short)(t0 - t1)) != 0) {
            t3 = ((unsigned short)(t0 - t1) | 0xFFFF0000);
        }
        *(unsigned int *)((a4 + 0x38)) = (unsigned short)((*(int *)((a4 + 0x38))) + ((int)((int)t3 / (int)t2)));
    }
    if ((*(short *)((a4 + 0x1C))) != 0) {
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
    }
    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        return FUN_0c085d0c(a4);
    }
    return (unsigned char)t0;
}

int FUN_0c0a9a0a(int a4, int a5, int a6, int a7)
{
    if ((*(signed char *)((a4 + 0x371C))) == 0) {
        return FUN_0c0725fa(a4);
    }
    return ((int (*)(int, int, int, int))(0xC0A99E6))(a4, a5, a6, a7);
}
