/* Straight-line functions with calls and guards (batch gen_js): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c087d04(int, int, int);
int FUN_0c087d60(int);
int FUN_0c087de6(void);
int FUN_0c087e4a(int a4, int a5, int a6);

int FUN_0c087e4a(int a4, int a5, int a6)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x17));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            return FUN_0c087de6();
        }
        return FUN_0c087d60(a4);
    }
    return FUN_0c087d04(a4, a5, a6);
}
