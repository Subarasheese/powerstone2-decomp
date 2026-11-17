/* game/unsorted: functions 0C16EEA8-0C16F120, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c16eea8(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c179ac0(void);
int FUN_0c187798(int, int, int);
int FUN_0c16f000(int a4, int a5, int a6, int a7);

int FUN_0c16f000(int a4, int a5, int a6, int a7)
{
    int stk[5];
    register int t1;
    register int t3;
    register int t19;
    register int t30;

    if ((*(signed char *)((a4 + 0x14))) == 0) {
        t1 = *(short *)((a4 + 0x1E));
        *(unsigned short *)((a4 + 0x1E)) = (t1 - 1);
        t30 = (short)(t1 - 1);
        if ((int)(short)(t1 - 1) <= 0) {
            t3 = *(signed char *)((a4 + 0x18));
            if (t3 != -1) {
                FUN_0c187798(0xC532498, t3, a6);
            } else {
                *(volatile signed char *)((a4 + 0x1));
                FUN_0c187798(0xC532498, t3, a6);
            }
            *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) + (*(float *)0xC16F130));
            *(float *)(((int)stk + 0)) = ((*(float *)(((int)stk + 0))) + (float)(((int)((int)(FUN_0c179ac0()) % (int)0x64)) - 50));
            *(float *)(((int)stk + 8)) = ((*(float *)(((int)stk + 8))) + (float)(((int)((int)(FUN_0c179ac0()) % (int)0x64)) - 50));
            FUN_0c16eea8(a4, ((int)stk + 0), 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
            *(unsigned short *)((a4 + 0x1E)) = 0xA;
            t19 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t19 + 0x1);
            t30 = (short)(t19 + 0x1);
            if ((int)(short)(t19 + 0x1) >= (int)0x6) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t30 = 0x14;
            }
        }
    } else {
        t30 = (FUN_0c03f346(a4, a5, a6, a7));
    }
    return t30;
}
