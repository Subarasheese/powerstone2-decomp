/* game/player: functions 0C097D50-0C098118, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o3770_uint { char p[0x3770]; unsigned int v; };
int FUN_0c097e72(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c097fde(int);
int FUN_0c0980e0(int a4, int a5, int a6, int a7);

int FUN_0c0980e0(int a4, int a5, int a6, int a7)
{
    int stk[2];
    register int t0;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
        } else {
            FUN_0c097fde(a4);
        }
    } else {
        FUN_0c097e72(a4, a5, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
    }
    (((struct o3770_uint *)(a4))->v) = 0x0;
    return 0x3770;
}
