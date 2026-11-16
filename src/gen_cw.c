/* Straight-line functions with calls and guards (batch gen_cw): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o20_ushort { char p[0x20]; unsigned short v; };
int FUN_0c037bf6(int);
int FUN_0c059e60(int, int);
int FUN_0c085d0c(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c179ac0(void);
int FUN_0c187798(void);
int FUN_0c0b62e0(int a4);
int FUN_0c0a0ec0(int a4);

int FUN_0c0b62e0(int a4)
{
    (((struct o20_ushort *)(a4))->v) = ((int)((unsigned int)(FUN_0c179ac0()) % (unsigned int)0x5));
    *(volatile short *)((a4 + 0x20));
    return (FUN_0c187798());
}

int FUN_0c0a0ec0(int a4)
{
    int stk[2];
    register int t0;
    register int t5;

    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        FUN_0c085d0c(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
    }
    if ((*(signed char *)((a4 + 0x17))) != 0) {
        t5 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t5 - 1);
        if ((short)(t5 - 1) == 0) {
            return FUN_0c059e60(a4, 0x24);
        }
        return (short)(t5 - 1);
    }
    return 0x17;
}
