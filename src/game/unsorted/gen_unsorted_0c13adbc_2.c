/* game/unsorted: functions 0C13ADBC-0C13B7A2, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c0582de(int);
int FUN_0c13b08c(int, int, int, int);
int FUN_0c13b35e(int, int, int, int);
int FUN_0c13b632(int, int, int, int);
int FUN_0c187798(int, int);
int FUN_0c13b6a8(int a4, int a5, int a6, int a7);

int FUN_0c13b6a8(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t0;
    register int t13;
    register int t4;
    register int t5;
    register int t36;
    register int t52;
    register int t53;
    register int t81;
    register int t86;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            t86 = (FUN_0c03f346(a4, a5, a6, a7));
        } else {
            t13 = a4;
            if ((*(short *)((a4 + 0x1C))) == 0) {
                t4 = *(short *)((a4 + 0x1C));
                t5 = ((~(((~t4) + 0x1) & 0x3)) + 0x1);
                if ((int)t4 >= 0) {
                    t5 = (t4 & 0x3);
                }
                if (t5 == 0) {
                    FUN_0c13b35e((*(signed char *)((a4 + 0x1))), (a4 + 0x28), (a4 + 0x34), 0x2);
                } else {
                    t13 = a4;
                }
            }
            if ((*(short *)((a4 + 0x1C))) == 4) {
                FUN_0c187798(t13, ((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532560))) + 0x28));
                *(float *)(((int)stk + 0)) = ((*(float *)(((int)stk + 0))) * 3.0f);
                FUN_0c0582de(((int)stk + 0));
                FUN_0c13b08c((*(signed char *)((a4 + 0x1))), ((int)stk + 0), (a4 + 0x34), (*(signed char *)((a4 + 0x2))));
                FUN_0c187798(0x0, ((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532560))) + 0x28));
                *(float *)(((int)stk + 0)) = ((*(float *)(((int)stk + 0))) * 3.0f);
                FUN_0c0582de(((int)stk + 0));
                FUN_0c13b08c((*(signed char *)((a4 + 0x1))), ((int)stk + 0), (a4 + 0x34), (*(signed char *)((a4 + 0x2))));
            }
            t36 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t36 + 0x1);
            t86 = (short)(t36 + 0x1);
            if ((int)(short)(t36 + 0x1) > (int)0x14) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t86 = 0x14;
            }
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        FUN_0c13b632((*(signed char *)((a4 + 0x1))), (a4 + 0x28), (a4 + 0x34), 0x2);
        if ((*(short *)((a4 + 0x1C))) == 0) {
            t52 = *(short *)((a4 + 0x1C));
            t53 = ((~(((~t52) + 0x1) & 0x3)) + 0x1);
            if ((int)t52 >= 0) {
                t53 = (t52 & 0x3);
            }
            if (t53 == 0) {
                FUN_0c13b35e((*(signed char *)((a4 + 0x1))), (a4 + 0x28), (a4 + 0x34), 0x2);
            }
        }
        if ((*(short *)((a4 + 0x1C))) == 4) {
            FUN_0c187798(0x0, ((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532560))) + 0x28));
            *(float *)(((int)stk + 0)) = ((*(float *)(((int)stk + 0))) * 3.0f);
            FUN_0c0582de(((int)stk + 0));
            FUN_0c13b08c((*(signed char *)((a4 + 0x1))), ((int)stk + 0), (a4 + 0x34), (*(signed char *)((a4 + 0x2))));
            FUN_0c187798(0x0, ((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532560))) + 0x28));
            *(float *)(((int)stk + 0)) = ((*(float *)(((int)stk + 0))) * 3.0f);
            FUN_0c0582de(((int)stk + 0));
            FUN_0c13b08c((*(signed char *)((a4 + 0x1))), ((int)stk + 0), (a4 + 0x34), (*(signed char *)((a4 + 0x2))));
        }
        t81 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t81 + 0x1);
        t86 = (short)(t81 + 0x1);
        if ((int)(short)(t81 + 0x1) > (int)0x14) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t86 = 0x14;
        }
    }
    return t86;
}
