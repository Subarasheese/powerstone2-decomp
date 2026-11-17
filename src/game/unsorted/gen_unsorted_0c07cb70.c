/* game/unsorted: functions 0C07CB70-0C07CBDA, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o2C_float { char p[0x2C]; float v; };
int FUN_0c064e70(int, int);
int FUN_0c08515a(int, int);
int FUN_0c07cb70(int a4, int a5, int a6, int a7, float f4, float f5);

int FUN_0c07cb70(int a4, int a5, int a6, int a7, float f4, float f5)
{
    int stk[1];
    register int t36;
    register int t1;
    register int t3;
    register float u4;
    register float u5;
    register float u9;
    register int t12;

    t36 = 0x0;
    if ((*(signed char *)((a4 + 0x3721))) == 0) {
        t1 = FUN_0c08515a(a4, 0x4);
        t36 = 0x0;
        if (t1 != 0) {
            t3 = FUN_0c064e70((*(int *)((t1 + 0x4))), ((int)stk + 0));
            t36 = 0x0;
            if (t3 != 0) {
                u4 = *(float *)(((int)stk + 0));
                u5 = (((struct o2C_float *)(a4))->v);
                u9 = (u4 - u5);
                if (0.0f > (u4 - u5)) {
                    u9 = ((-(*(float *)(((int)stk + 0)))) + u5);
                }
                t36 = 0x0;
                if (8.0f > u9) {
                    t12 = ((int (*)(int, int, int, int, float, float))(0xC07CAD0))(a4, (*(int *)((t1 + 0x4))), a6, a7, u9, (u4 - u5));
                    t36 = 0x0;
                    if (t12 != 0) {
                        t36 = 0x1;
                    }
                }
            }
        }
    }
    return t36;
}
