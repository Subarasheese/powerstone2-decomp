/* Straight-line functions with calls and guards (batch gen_aky): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c013b20(int);
int FUN_0c013b44(int a4, int a5, int a6);

int FUN_0c013b44(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = a5;
    t1 = 0x0;
    for (;;) {
        t2 = FUN_0c013b20((*(signed char *)((t0 + 0x0))));
        if (t2 == 0) {
            if ((int)(t1 + 0x1) < (int)a6) {
                t2 = *(signed char *)((t0 + 0x0));
                t0 = (t0 + 0x1);
                t3 = t1;
                t1 = (t1 + 0x1);
                *(unsigned char *)((a4 + t3)) = t2;
            } else {
                break;
            }
        }
        t2 = *(signed char *)((t0 + 0x0));
        t0 = (t0 + 0x1);
        t3 = t1;
        t1 = (t1 + 0x1);
        *(unsigned char *)((a4 + t3)) = t2;
        if ((int)t1 >= (int)a6) {
            break;
        }
    }
    *(unsigned char *)((a4 + t1)) = 0x0;
    return t1;
}
