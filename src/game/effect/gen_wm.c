/* Straight-line functions with calls and guards (batch gen_wm): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

extern int FUN_0c187cac();
int thunk_FUN_0c03e08c(int, int);
int FUN_0c03e114(int a4, int a5, int a6, int a7);

int FUN_0c03e114(int a4, int a5, int a6, int a7)
{
    int stk[70];
    register int t0;
    register int t1;
    register int t18;
    register int t21;
    register int t22;
    register int t39;
    register int t42;
    register int t12;
    register int t13;
    register int t33;
    register int t34;
    register int R1008;
    register int R1012;
    register int R1016;
    register int R1020;
    register int R1024;

    R1008 = *(int *)((int)stk + 4);
    R1012 = *(int *)((int)stk + 8);
    R1016 = *(int *)((int)stk + 12);
    R1020 = *(int *)((int)stk + 16);
    R1024 = *(int *)((int)stk + 20);

    R1020 = a4;
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
        t12 = (*(signed char *)(((0xC542267 + t1) + 0x0)));
        R1016 = t12;
        t13 = (*(int *)((((t1 << 2) + 0xC54229C) + 0x0)));
        R1012 = t13;
    } else {
        R1016 = 0x0;
        R1012 = 0x0;
        t12 = 0x0;
        t13 = 0x0;
    }
    R1008 = 0xC1B72BC;
    t18 = ((int (*)(int, int, int, int, int, int, int))(FUN_0c187cac))((((int)stk + 16) + 0x8), a5, a6, a7, 0xC1B72BC, t13, t12);
    t21 = thunk_FUN_0c03e08c((R1020), (((int)stk + 16) + 0x8));
    R1024 = t21;
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
        t33 = (*(signed char *)(((0xC5422C4 + t22) + 0x0)));
        R1016 = t33;
        t34 = (*(int *)((((t22 << 2) + 0xC5422F8) + 0x0)));
        R1012 = t34;
    } else {
        R1016 = 0x0;
        R1012 = 0x0;
        t33 = 0x0;
        t34 = 0x0;
    }
    R1008 = 0xC1B72D0;
    t39 = ((int (*)(int, int, int, int, int, int, int))(FUN_0c187cac))((((int)stk + 16) + 0x8), 0x0, 0x0, 0x0, 0xC1B72D0, t34, t33);
    R1020 = (thunk_FUN_0c03e08c((R1024), (((int)stk + 16) + 0x8)));
    *(int *)((int)stk + 0) = 0xC1B72E4;
    t42 = ((int (*)(int, int, int, int, int))(FUN_0c187cac))((((int)stk + 16) + 0x8), 0x0, 0x0, 0x0, 0xC1B72E4);
    return (thunk_FUN_0c03e08c((R1020), (((int)stk + 16) + 0x8)));
}
