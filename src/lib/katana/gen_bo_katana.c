/* Straight-line functions with calls and guards (batch gen_bo): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c037bf6(int, int, int);
int FUN_0c187a88(int, int, int, int);
int FUN_0c2eb978(int, int, int);
int mwRnaCreate_8c1f1d9c(int, int, int, int);
int mwRnaSetNumChan(int, int, int, int);
int mwRnaSetOutPan(int, int, int, int);
int mwRnaSetPlaySw(int, int, int, int);
int mwRnaSetSfreq(int, int, int, int);
int mwRnaSetTransSw(int, int, int, int);
int vmsfs_isformat(int, int, int, int);
int FUN_0c01d26e(int a4, int a5, int a6, int a7);
int FUN_0c01d262(int a4, int a5, int a6, int a7);
int FUN_0c01e992(int a4, int a5, int a6, int a7);
int FUN_0c01e988(int a4, int a5, int a6, int a7);
int FUN_0c2c3148(void);
int FUN_0c2b260a(void);
int thunk_FUN_0c2c5202(int a4, int a5, int a6, int a7);
int thunk_FUN_0c2c5b3a(int a4, int a5, int a6, int a7);
int thunk_FUN_0c2c52e0(int a4, int a5, int a6, int a7);
int FUN_0c2fbc3e(int a4, int a5, int a6);
int thunk_FUN_0c2c5bd0(int a4, int a5, int a6, int a7);
int thunk_FUN_0c2c5a3c(int a4, int a5, int a6, int a7);
int FUN_0c2fbc44(int a4, int a5, int a6);
int thunk_FUN_0c2c4cb8(int a4, int a5, int a6, int a7);
int thunk_FUN_0c2c067e(int a4, int a5, int a6, int a7);
int FUN_0c2fbc38(int a4, int a5, int a6);
int FUN_0c06c4d6(int a4, int a5, int a6);


int FUN_0c2c3148(void)
{
    return 0x7FFFFFFF;
}

int FUN_0c2b260a(void)
{
    return (*(int *)0xC3036FC);
}

int thunk_FUN_0c2c5202(int a4, int a5, int a6, int a7)
{
    return mwRnaSetTransSw(a4, a5, a6, a7);
}

int thunk_FUN_0c2c5b3a(int a4, int a5, int a6, int a7)
{
    return mwRnaSetSfreq(a4, a5, a6, a7);
}

int thunk_FUN_0c2c52e0(int a4, int a5, int a6, int a7)
{
    return mwRnaSetPlaySw(a4, a5, a6, a7);
}

int FUN_0c2fbc3e(int a4, int a5, int a6)
{
    return FUN_0c2eb978(0x8, a5, a6);
}

int thunk_FUN_0c2c5bd0(int a4, int a5, int a6, int a7)
{
    return mwRnaSetOutPan(a4, a5, a6, a7);
}

int thunk_FUN_0c2c5a3c(int a4, int a5, int a6, int a7)
{
    return mwRnaSetNumChan(a4, a5, a6, a7);
}

int FUN_0c2fbc44(int a4, int a5, int a6)
{
    return FUN_0c2eb978(0xB, a5, a6);
}

int thunk_FUN_0c2c4cb8(int a4, int a5, int a6, int a7)
{
    return mwRnaCreate_8c1f1d9c(a4, a5, a6, a7);
}

int thunk_FUN_0c2c067e(int a4, int a5, int a6, int a7)
{
    return vmsfs_isformat(a4, a5, a6, a7);
}

int FUN_0c2fbc38(int a4, int a5, int a6)
{
    return FUN_0c2eb978(0x7, a5, a6);
}

