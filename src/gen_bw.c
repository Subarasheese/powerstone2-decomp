/* Straight-line functions with calls and guards (batch gen_bw): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c037bf6(int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c171962(int a4, int a5, int a6, int a7);

int FUN_0c171962(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x2));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        return FUN_0c037bf6(a4);
    }
    return t0;
}
