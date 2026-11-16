/* Straight-line functions with calls and guards (batch gen_cu): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c03f346(int, int, int, int);
int FUN_0c18422a(void);
int pl_ayame_frame_hook(int, int, int, int);
int thunk_FUN_0c03f346(int a4, int a5, int a6, int a7);
int FUN_0c01e99c(void);
int FUN_0c01ea2c(void);
int FUN_0c01ea32(int a4, int a5, int a6, int a7);
int FUN_0c021f10(void);

int thunk_FUN_0c03f346(int a4, int a5, int a6, int a7)
{
    return FUN_0c03f346(a4, a5, a6, a7);
}

int FUN_0c01e99c(void)
{
    return (*(signed char *)0xC309993);
}

int FUN_0c01ea2c(void)
{
    return FUN_0c18422a();
}

int FUN_0c01ea32(int a4, int a5, int a6, int a7)
{
    return pl_ayame_frame_hook(0x0, a5, a6, a7);
}

int FUN_0c021f10(void)
{
    return (*(short *)0xC5426D8);
}
