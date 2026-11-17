/* game/stage: functions 0C08DC88-0C08DFAC, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o3770_uint { char p[0x3770]; unsigned int v; };
int FUN_0c08dcbe(int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c08de10(int);
int FUN_0c08df42(int a4, int a5, int a6, int a7);

int FUN_0c08df42(int a4, int a5, int a6, int a7)
{
    int stk[2];
    register int t0;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
        } else {
            FUN_0c08de10(a4);
        }
    } else {
        FUN_0c08dcbe(a4, a5, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
    }
    (((struct o3770_uint *)(a4))->v) = 0x0;
    return 0x3770;
}
