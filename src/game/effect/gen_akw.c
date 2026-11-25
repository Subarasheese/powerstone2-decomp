/* Straight-line functions with calls and guards (batch gen_akw): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlRand(void);
int FUN_0c115eae(int a4, int a5, int a6, int a7);

int FUN_0c115eae(int a4, int a5, int a6, int a7)
{
    int stk[17];
    register int t2;
    register int t5;
    register int t6;
    register int t9;
    register int t10;
    register int t11;
    register int t12;
    register int t18;
    register int t21;
    register int t22;
    register int t23;
    register int t24;
    register int t25;
    register int t26;
    register int t27;
    register int t28;
    register int t0;

    t2 = 0x0;
    for (;;) {
        if ((int)t2 >= (int)(*(short *)((a4 + 0x1C)))) {
            break;
        }
        t0 = t2;
        t0 = (t0 << 2);
        t0 = (t0 + (((int)stk + 4) + 0x20));
        t9 = t0;
        *(int *)((int)stk + 0) = t9;
        t5 = nlRand();
        t6 = (t5 % 0x20);
        t0 = (*(int *)((0xC2016B0 + (t6 << 2))));
        t2 = (t2 + 0x1);
        *(unsigned int *)((t9 + 0x0)) = t0;
    }
    t10 = 0x4;
    t11 = 0x0;
    for (;;) {
        t12 = 0x0;
        for (;;) {
            if ((int)t12 >= (int)(*(short *)((a4 + 0x1C)))) {
                break;
            }
            t9 = (*(int *)(((((int)stk + 4) + 0x20) + (t12 << 2))));
            t12 = (t12 + 0x1);
            if (t9 == t10) {
                t18 = (t11 << 2);
                t11 = (t11 + 0x1);
                *(unsigned int *)((((int)stk + 4) + t18)) = t10;
            }
        }
        t10 = (t10 - 1);
        if ((int)t10 < 0) {
            break;
        }
    }
    t21 = t0;
    t22 = t9;
    t23 = t12;
    t24 = t10;
    t25 = t11;
    t26 = a7;
    t27 = 0x0;
    for (;;) {
        t28 = *(short *)((a4 + 0x1C));
        if ((int)t27 >= (int)t28) {
            break;
        }
        t24 = t27;
        t24 = (t24 << 2);
        t24 = (t24 + ((int)stk + 4));
        t24 = (*(int *)((t24 + 0x0)));
        t22 = 0xC18760C;
        t24 = (t24 << 2);
        t23 = ((int)((int)(nlRand()) % (int)(*(int *)((t24 + 0xC2017CC)))));
        t23 = (t23 << 2);
        t21 = 0xC473A3C;
        t21 = (t21 + t27);
        t26 = 0xC473A3C;
        t22 = (*(int *)((t23 + (*(int *)((t24 + 0xC2A0C58))))));
        t23 = 0x0;
        t23 = (t23 + 0xC473A3C);
        t25 = 0x0;
        *(unsigned char *)((t21 + 0x0)) = t22;
        t24 = 0x0;
        t26 = (t26 + t27);
        if ((int)t27 > 0) {
            for (;;) {
                t22 = (*(signed char *)((t23 + 0x0)));
                t21 = (*(signed char *)((t26 + 0x0)));
                t24 = (t24 + 0x1);
                if (t21 == t22) {
                    t25 = 0x1;
                }
                t23 = (t23 + 0x1);
                if ((int)t24 >= (int)t27) {
                    break;
                }
            }
        }
        if (t25 != 0) {
            t27 = (t27 - 1);
        }
        t27 = (t27 + 0x1);
    }
    return t28;
}
