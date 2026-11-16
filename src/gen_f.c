/* Straight-line functions with calls and guards (batch gen_f): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c03744a(int, int, int, int);
int FUN_0c187798(int, int);
int FUN_0c1105d8(int a4, int a5);

int FUN_0c1105d8(int a4, int a5)
{
    register int t1;
    register int t2;
    register int t4;
    register int t6;
    register int t7;
    register int t8;
    register int t0;
    register int t3;
    register int t5;

    t1 = a4;
    t2 = a5;
    t4 = 0x0;
    t6 = 0x64;
    t7 = a5;
    t8 = 0x3;
    for (;;) {
        if ((int)t8 <= 0) {
            break;
        }
        t0 = t6;
        t0 = ((int)((int)t7 / (int)t0));
        t5 = t0;
        t0 = t6;
        t0 = ((int)((int)t7 % (int)t0));
        t7 = t0;
        t0 = 0xA;
        t0 = ((int)((int)t6 / (int)t0));
        t6 = t0;
        t0 = a4;
        t3 = t8;
        t1 = 0xC4;
        t3 = (t3 - 1);
        t1 = (t1 + t0);
        t3 = (t3 << 2);
        t2 = t5;
        t1 = (t1 + t3);
        t1 = (*(int *)((t1 + 0x0)));
        t0 = (FUN_0c03744a(t1, t2, 0x5, (*(int *)0xC4B410C)));
        t2 = 0xC4;
        t0 = a4;
        t2 = (t2 + t0);
        t1 = 0xC291128;
        t2 = (t2 + t3);
        t2 = (*(int *)((t2 + 0x0)));
        t0 = 0xC;
        t0 = (FUN_0c187798(t1, t2));
        t1 = 0x1;
        if (t5 == 0) {
            t0 = t4;
            if (t0 != 1) {
                t0 = t8;
                if (t0 != 1) {
                    *(unsigned char *)((t2 + 0x0)) = 0x0;
                } else {
                    *(unsigned char *)((t2 + 0x0)) = t1;
                }
            } else {
                *(unsigned char *)((t2 + 0x0)) = t1;
            }
        } else {
            t4 = t1;
            *(unsigned char *)((t2 + 0x0)) = t1;
        }
        t8 = (t8 - 1);
    }
    return t0;
}
