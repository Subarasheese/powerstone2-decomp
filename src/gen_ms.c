/* Straight-line functions with calls and guards (batch gen_ms): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c0582de(int);
int FUN_0c13a640(int, int, int);
int FUN_0c13a90e(int, int, int, int);
int FUN_0c13abe2(int, int, int, int);
int FUN_0c187798(int, int);
int FUN_0c13ac58(int a4, int a5, int a6, int a7);

int FUN_0c13ac58(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t0;
    register int t13;
    register int t4;
    register int t5;
    register int t34;
    register int t50;
    register int t51;
    register int t77;
    register int t82;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            t82 = (FUN_0c03f346(a4, a5, a6, a7));
        } else {
            t13 = a4;
            if ((*(short *)((a4 + 0x1C))) == 0) {
                t4 = *(short *)((a4 + 0x1C));
                t5 = ((~(((~t4) + 0x1) & 0x3)) + 0x1);
                if ((int)t4 >= 0) {
                    t5 = (t4 & 0x3);
                }
                if (t5 == 0) {
                    FUN_0c13a90e((*(signed char *)((a4 + 0x1))), (a4 + 0x28), (a4 + 0x34), 0x2);
                } else {
                    t13 = a4;
                }
            }
            if ((*(short *)((a4 + 0x1C))) == 4) {
                FUN_0c187798(t13, ((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532560))) + 0x28));
                *(float *)(((int)stk + 0)) = ((*(float *)(((int)stk + 0))) * 3.0f);
                FUN_0c0582de(((int)stk + 0));
                FUN_0c13a640((*(signed char *)((a4 + 0x1))), ((int)stk + 0), (a4 + 0x34));
                FUN_0c187798(0x0, ((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532560))) + 0x28));
                *(float *)(((int)stk + 0)) = ((*(float *)(((int)stk + 0))) * 3.0f);
                FUN_0c0582de(((int)stk + 0));
                FUN_0c13a640((*(signed char *)((a4 + 0x1))), ((int)stk + 0), (a4 + 0x34));
            }
            t34 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t34 + 0x1);
            t82 = (short)(t34 + 0x1);
            if ((int)(short)(t34 + 0x1) > (int)0x14) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t82 = 0x14;
            }
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        FUN_0c13abe2((*(signed char *)((a4 + 0x1))), (a4 + 0x28), (a4 + 0x34), 0x2);
        if ((*(short *)((a4 + 0x1C))) == 0) {
            t50 = *(short *)((a4 + 0x1C));
            t51 = ((~(((~t50) + 0x1) & 0x3)) + 0x1);
            if ((int)t50 >= 0) {
                t51 = (t50 & 0x3);
            }
            if (t51 == 0) {
                FUN_0c13a90e((*(signed char *)((a4 + 0x1))), (a4 + 0x28), (a4 + 0x34), 0x2);
            }
        }
        if ((*(short *)((a4 + 0x1C))) == 4) {
            FUN_0c187798(0x0, ((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532560))) + 0x28));
            *(float *)(((int)stk + 0)) = ((*(float *)(((int)stk + 0))) * 3.0f);
            FUN_0c0582de(((int)stk + 0));
            FUN_0c13a640((*(signed char *)((a4 + 0x1))), ((int)stk + 0), (a4 + 0x34));
            FUN_0c187798(0x0, ((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532560))) + 0x28));
            *(float *)(((int)stk + 0)) = ((*(float *)(((int)stk + 0))) * 3.0f);
            FUN_0c0582de(((int)stk + 0));
            FUN_0c13a640((*(signed char *)((a4 + 0x1))), ((int)stk + 0), (a4 + 0x34));
        }
        t77 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t77 + 0x1);
        t82 = (short)(t77 + 0x1);
        if ((int)(short)(t77 + 0x1) > (int)0x14) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t82 = 0x14;
        }
    }
    return t82;
}
