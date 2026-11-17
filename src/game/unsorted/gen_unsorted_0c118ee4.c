/* game/unsorted: functions 0C118EE4-0C119266, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o6C_float { char p[0x6C]; float v; };
int FUN_0c037498(int, int, int, int);
int FUN_0c118ee4(int a4, int a5, float f4, float f5);

int FUN_0c118ee4(int a4, int a5, float f4, float f5)
{
    int stk[1];
    register int t0;
    register int t1;
    register int t45;
    register int t14;
    register int t15;
    register int t16;
    int t17;
    register float u39;
    register int t40;

    t0 = *(int *)((a4 + 0x10));
    t1 = a5;
    if ((int)a5 < 0) {
        t1 = 0x0;
    }
    t15 = t1;
    if ((int)t1 > (int)(*(int *)((0xC291E24 + ((*(signed char *)(((t0 + 0x41C) + 0x4))) << 2))))) {
        t15 = (*(int *)((0xC291E24 + ((*(signed char *)(((t0 + 0x41C) + 0x4))) << 2))));
    }
    t16 = *(int *)((((*(signed char *)(((t0 + 0x41C) + 0x4))) << 2) + 0xC291E14));
    t17 = *(int *)((((*(signed char *)(((t0 + 0x41C) + 0x4))) << 2) + 0xC291E04));
    t45 = 0xC291E04;
    if ((int)t17 > 0) {
        t14 = 0x0;
        for (;;) {
            *(unsigned int *)(((int)stk + 0)) = ((int)((int)t15 / (int)t16));
            t15 = ((int)((int)t15 % (int)t16));
            t16 = ((int)((int)t16 / (int)0xA));
            FUN_0c037498((*(int *)(((((t17 - 1) << 2) + (0xC4 + a4)) + 0x0))), (*(int *)(((int)stk + 0))), 0x1, (*(int *)0xC4B410C));
            if ((*(int *)(((int)stk + 0))) == 0) {
                if ((t14 != 1) && (t17 != 1)) {
                    *(unsigned char *)(((*(int *)(((((t17 - 1) << 2) + (0xC4 + a4)) + 0x0))) + 0x0)) = 0x0;
                } else {
                    *(unsigned char *)(((*(int *)(((((t17 - 1) << 2) + (0xC4 + a4)) + 0x0))) + 0x0)) = 0x1;
                }
            } else {
                t14 = 0x1;
                *(unsigned char *)(((*(int *)(((((t17 - 1) << 2) + (0xC4 + a4)) + 0x0))) + 0x0)) = 0x1;
            }
            u39 = 8.0f;
            u39 = u39 + 15.0f * ((float)(0x1 - t17));
            (((struct o6C_float *)((*(int *)((((0xC4 + a4) + ((t17 - 1) << 2)) + 0x0)))))->v) = u39;
            t40 = *(int *)(((((t17 - 1) << 2) + (0xC4 + a4)) + 0x0));
            t17 = (t17 - 1);
            *(unsigned short *)((t40 + 0x6)) = 0xF;
            if ((int)t17 <= 0) {
                break;
            }
        }
        t45 = 0xF;
    }
    return t45;
}
