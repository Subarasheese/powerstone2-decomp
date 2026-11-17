/* game/unsorted: functions 0C14D34C-0C14D584, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c059e60(int, int);
int FUN_0c14d34c(int, int, int, int, int, int, int, int);
int FUN_0c179ac0(void);
extern int FUN_0c187798();
int FUN_0c14d478(int a4, int a5, int a6, int a7);

int FUN_0c14d478(int a4, int a5, int a6, int a7)
{
    int stk[6];
    register int t6;
    register int t8;
    register int t23;
    register int t24;
    register int t31;
    register int t44;

    if ((*(signed char *)((0x3715 + (*(int *)((a4 + 0x10)))))) != 26) {
        (((struct o14_uchar *)(a4))->v) = 0x1;
    }
    if ((*(signed char *)((a4 + 0x14))) == 0) {
        t6 = *(short *)((a4 + 0x1E));
        *(unsigned short *)((a4 + 0x1E)) = (t6 - 1);
        t44 = (short)(t6 - 1);
        if ((int)(short)(t6 - 1) <= 0) {
            t8 = *(signed char *)((a4 + 0x18));
            if (t8 != -1) {
                FUN_0c187798(0xC532498, t8, a6);
            } else {
                *(volatile signed char *)((a4 + 0x1));
                FUN_0c187798(0xC532498, t8, a6);
            }
            *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) + 1200.0f);
            *(float *)(((int)stk + 0)) = ((*(float *)(((int)stk + 0))) + ((float)((int)((int)(FUN_0c179ac0()) % (int)0x12C)) + -150.0f));
            *(float *)(((int)stk + 8)) = ((*(float *)(((int)stk + 8))) + ((float)((int)((int)(FUN_0c179ac0()) % (int)0x12C)) + -150.0f));
            FUN_0c14d34c(a4, ((int)stk + 0), 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12));
            *(unsigned short *)((a4 + 0x1E)) = 0x7;
            t23 = *(short *)((a4 + 0x1C));
            t24 = ((~(((~t23) + 0x1) & 0x1)) + 0x1);
            if ((int)t23 >= 0) {
                t24 = (t23 & 0x1);
            }
            if (t24 != 0) {
                FUN_0c059e60((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532498), 0x23);
            }
            t31 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t31 + 0x1);
            t44 = (short)(t31 + 0x1);
            if ((int)(short)(t31 + 0x1) >= (int)0xC) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t44 = 0x14;
            }
        }
    } else {
        t44 = (FUN_0c03f346(a4, a5, a6, a7));
    }
    return t44;
}
