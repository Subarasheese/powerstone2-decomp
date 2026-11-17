/* game/unsorted: functions 0C0588BC-0C058962, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
int FUN_0c0588bc(int a4, int a5, int a6, int a7, int a8, int a9);
int FUN_0c058906(int a4, int a5, int a6, int a7, int a8, int a9);

int FUN_0c0588bc(int a4, int a5, int a6, int a7, int a8, int a9)
{
    register float u0;

    u0 = *(float *)((a6 + 0x0));
    *(float *)((a4 + 0x0)) = (u0 + (((((*(float *)((a5 + 0x0))) - u0) * (float)(a7 - a9)) / (float)(a8 - a9))));
    u0 = (((struct o4_float *)(a6))->v);
    (((struct o4_float *)(a4))->v) = (u0 + ((((((((struct o4_float *)(a5))->v)) - u0) * (float)(a7 - a9)) / (float)(a8 - a9))));
    u0 = (((struct o8_float *)(a6))->v);
    (((struct o8_float *)(a4))->v) = (u0 + ((((((((struct o8_float *)(a5))->v)) - u0) * (float)(a7 - a9)) / (float)(a8 - a9))));
    return 0x8;
}

int FUN_0c058906(int a4, int a5, int a6, int a7, int a8, int a9)
{
    register int t0;
    register int t1;

    t0 = *(int *)((a6 + 0x0));
    *(unsigned int *)((a4 + 0x0)) = (t0 + ((int)((int)(((*(int *)((a5 + 0x0))) - t0) * (a7 - a9)) / (int)(a8 - a9))));
    t0 = *(int *)((a6 + 0x4));
    *(unsigned int *)((a4 + 0x4)) = (((int)((int)(((*(int *)((a5 + 0x4))) - t0) * (a7 - a9)) / (int)(a8 - a9))) + t0);
    t0 = *(int *)((a6 + 0x8));
    t1 = (int)((int)(((*(int *)((a5 + 0x8))) - t0) * (a7 - a9)) / (int)(a8 - a9));
    *(unsigned int *)((a4 + 0x8)) = (t1 + t0);
    return (t1 + t0);
}
