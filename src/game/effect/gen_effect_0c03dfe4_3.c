/* game/effect: functions 0C03DFE4-0C03E5AE, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int thunk_FUN_0c03e08c(int, int);
int FUN_0c187cac(int, int, int, int, int);
int FUN_0c03e114(int a4, int a5, int a6, int a7);

int FUN_0c03e114(int a4, int a5, int a6, int a7)
{
    int stk[70];
    register int t0;
    register int t1;
    register int t21;
    register int t22;

    *(unsigned int *)(((int)stk + 16)) = a4;
    t0 = 0xFFFFFEF8;
    t1 = 0x0;
    for (;;) {
        if ((*(signed char *)(((0xC54237C + t1) + 0x0))) != 0) {
            t0 = 0x64;
            t0 = ((int)((unsigned int)(*(int *)((((t1 << 2) + 0xC54229C) + 0x0))) % (unsigned int)t0));
            if (t0 != 0) {
                t1 = (t1 + 0x1);
                if ((int)t1 >= (int)0x6) {
                    break;
                }
                continue;
            }
            break;
        }
        t1 = (t1 + 0x1);
        if ((int)t1 >= (int)0x6) {
            break;
        }
    }
    if ((int)t1 < (int)0x5) {
        *(int *)((int)stk + 12) = ((*(signed char *)(((0xC542267 + t1) + 0x0))));
        *(int *)((int)stk + 8) = ((*(int *)((((t1 << 2) + 0xC54229C) + 0x0))));
    } else {
        *(int *)((int)stk + 12) = 0x0;
        *(int *)((int)stk + 8) = 0x0;
    }
    *(int *)((int)stk + 4) = 0xC1B72BC;
    FUN_0c187cac((((int)stk + 16) + 0x8), a5, a6, a7, 0xC1B72BC);
    t21 = thunk_FUN_0c03e08c((*(int *)(((int)stk + 16))), (((int)stk + 16) + 0x8));
    *(unsigned int *)(((int)stk + 20)) = t21;
    t22 = 0x0;
    for (;;) {
        if ((*(signed char *)(((0xC542386 + t22) + 0x0))) != 0) {
            t21 = 0x64;
            t21 = ((int)((unsigned int)(*(int *)((((t22 << 2) + 0xC5422F8) + 0x0))) % (unsigned int)t21));
            if (t21 != 0) {
                t22 = (t22 + 0x1);
                if ((int)t22 >= (int)0x6) {
                    break;
                }
                continue;
            }
            break;
        }
        t22 = (t22 + 0x1);
        if ((int)t22 >= (int)0x6) {
            break;
        }
    }
    if ((int)t22 < (int)0x5) {
        *(int *)((int)stk + 12) = ((*(signed char *)(((0xC5422C4 + t22) + 0x0))));
        *(int *)((int)stk + 8) = ((*(int *)((((t22 << 2) + 0xC5422F8) + 0x0))));
    } else {
        *(int *)((int)stk + 12) = 0x0;
        *(int *)((int)stk + 8) = 0x0;
    }
    *(int *)((int)stk + 4) = 0xC1B72D0;
    FUN_0c187cac((((int)stk + 16) + 0x8), 0x0, 0x0, 0x0, 0xC1B72D0);
    *(unsigned int *)(((int)stk + 16)) = (thunk_FUN_0c03e08c((*(int *)(((int)stk + 20))), (((int)stk + 16) + 0x8)));
    *(int *)((int)stk + 0) = 0xC1B72E4;
    FUN_0c187cac((((int)stk + 16) + 0x8), 0x0, 0x0, 0x0, 0xC1B72E4);
    return (thunk_FUN_0c03e08c((*(int *)(((int)stk + 16))), (((int)stk + 16) + 0x8)));
}
