/* Straight-line functions with calls and guards (batch gen_bs): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o3770_int { char p[0x3770]; int v; };
int FUN_0c085d0c(int, int, int, int);
int FUN_0c091498(int);
int FUN_0c0915ac(int);
int FUN_0c0918bc(int a4, int a5, int a6, int a7);

int FUN_0c0918bc(int a4, int a5, int a6, int a7)
{
    int t1;
    register int t2;

    if ((((*(signed char *)((a4 + 0x15))) != 0) && (t1 = *(short *)((a4 + 0x1C)), (int)t1 >= (int)0x8A)) || (t2 = (((struct o3770_int *)(a4))->v), t2 != 0)) {
        if ((*(signed char *)((a4 + 0x15))) == 0) {
            return FUN_0c091498(a4);
        }
        return FUN_0c0915ac(a4);
    }
    return FUN_0c085d0c(a4, a5, a6, a7);
}
