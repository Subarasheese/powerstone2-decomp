/* Straight-line functions with calls and guards (batch gen_ka): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0374bc(int a4, int a5, int a6, int a7);

int FUN_0c0374bc(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t0 = *(int *)((((((a5 << 2) << 2) << 1) + (a6 + 0x10)) + 0x18));
    t1 = *(int *)((((((a5 << 2) << 2) << 1) + (a6 + 0x10)) + 0x1C));
    if ((int)t0 > 0) {
        t2 = 0x0;
        t3 = t1;
        t1 = 0x0;
        for (;;) {
            t4 = *(int *)((((0xC4 + a4) + t2) + 0x0));
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t4 + 0x6C)) = *(struct mv3 *)((t3 + 0x24)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t4 + 0x78)) = *(struct mv3 *)((t3 + 0x30)); }
            t1 = (t1 + 0x1);
            t3 = (t3 + 0x3C);
            t2 = (t2 + 0x4);
            if ((int)t1 >= (int)t0) {
                break;
            }
        }
    }
    return 0x0;
}
