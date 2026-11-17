/* game/ai: functions 0C1002F4-0C101BF6, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c038548(int);
int FUN_0c038e88(int);
int FUN_0c03f40c(int);
int FUN_0c1002f4(int, int, int, int, int, int, int, int, int, int, int);
int thunk_FUN_0c10af74(float);
int thunk_FUN_0c10c9ce(void);
int thunk_FUN_0c10f4b2(float);
int thunk_FUN_0c114c34(void);
int FUN_0c1006a2(void);
int FUN_0c100712(void);
int FUN_0c101000(void);
int FUN_0c107310(int, int, int);
int FUN_0c179ac0(void);
int FUN_0c17a4c0(int, int);
int FUN_0c100526(void);
int FUN_0c100604(int a4, int a5, int a6, float f4);

int FUN_0c100526(void)
{
    int stk[1];
    register int t1;

    if ((*(signed char *)0xC478C0B) != 0) {
        t1 = FUN_0c101000();
        if (t1 != 0) {
            FUN_0c03f40c(0x5);
            FUN_0c038548(0x5);
            FUN_0c038e88(0x5);
            FUN_0c03f40c(0x8);
            return FUN_0c038e88(0x8);
        }
    }
    FUN_0c179ac0();
    FUN_0c1002f4(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
    return FUN_0c17a4c0(0x4, 0x0);
}

int FUN_0c100604(int a4, int a5, int a6, float f4)
{
    register int t0;

    t0 = *(signed char *)0xC541F44;
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 1) {
            if ((unsigned char)t0 != 2) {
                if ((unsigned char)t0 != 3) {
                    if ((unsigned char)t0 != 4) {
                        if ((unsigned char)t0 != 5) {
                            if ((unsigned char)t0 != 6) {
                                return (unsigned char)t0;
                            }
                            return FUN_0c100712();
                        }
                        return FUN_0c1006a2();
                    }
                    return thunk_FUN_0c114c34();
                }
                return thunk_FUN_0c10f4b2(f4);
            }
            return thunk_FUN_0c10c9ce();
        }
        return thunk_FUN_0c10af74(f4);
    }
    return FUN_0c107310(a4, a5, a6);
}
