/* game/unsorted: functions 0C0D3F0C-0C0D3FEE, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o24_short { char p[0x24]; short v; };
struct o41C_short { char p[0x41C]; short v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oC0_int { char p[0xC0]; int v; };
int FUN_0c03f346(int, int, int, int);
int math_mat_get_translate(int, int);
int FUN_0c0c2944(int, int, int, int, int);
int FUN_0c0d04c4(int, int);
int FUN_0c0d3f0c(int a4, int a5, int a6, int a7);

int FUN_0c0d3f0c(int a4, int a5, int a6, int a7)
{
    int stk[4];
    int t6;
    register int t34;
    int t1;
    register int t2;
    register int t3;
    register int t61;
    register int t51;
    register int t33;

    if (((*(signed char *)0xC54223C) == 0) && (t1 = *(int *)((a4 + 0x10)), t2 = (((struct o41C_short *)(a4))->v), t3 = (((struct o24_short *)(t1))->v), t2 == t3)) {
        t6 = *(signed char *)((a4 + 0x14));
        if (t6 != 0) {
            if (t6 != 1) {
                t51 = t6;
                if ((t6 != 2) && (t6 != 3)) {
                } else {
                    t51 = (FUN_0c03f346(a4, a5, a6, a7));
                }
            } else {
                t51 = 0x16;
                if ((int)(*(signed char *)(((*(int *)((a4 + 0x10))) + 0x16))) > (int)0x2) {
                    math_mat_get_translate((a4 + 0x64), ((int)stk + 4));
                    *(float *)(((int)stk + 8)) = ((*(float *)(((int)stk + 8))) - 50.0f);
                    *(int *)((int)stk + 0) = 0xFFFFFFFF;
                    *(unsigned int *)(((*(int *)((a4 + 0x10))) + 0x10)) = (FUN_0c0c2944(0xC, 0x0, 0x0, (((int)stk + 0) + 0x4), 0xFFFFFFFF));
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    t51 = 0x14;
                }
            }
        } else {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            (((struct oA8_uchar *)(a4))->v) = 0x1;
            FUN_0c0d04c4((0xAC + a4), (a4 + 0x34));
            t34 = 0x0;
            for (;;) {
                if ((int)t34 >= (int)((((struct oC0_int *)(a4))->v))) {
                    break;
                }
                t33 = t34;
                t33 = (t33 << 2);
                t33 = (t33 + (0xC4 + a4));
                t33 = (*(int *)((t33 + 0x0)));
                FUN_0c0d04c4((t33 + 0x6), (t33 + 0x78));
                t34 = (t34 + 0x1);
            }
            t51 = 0x16;
            if ((int)(*(signed char *)(((*(int *)((a4 + 0x10))) + 0x16))) > (int)0x2) {
                math_mat_get_translate((a4 + 0x64), ((int)stk + 4));
                *(float *)(((int)stk + 8)) = ((*(float *)(((int)stk + 8))) - 50.0f);
                *(int *)((int)stk + 0) = 0xFFFFFFFF;
                *(unsigned int *)(((*(int *)((a4 + 0x10))) + 0x10)) = (FUN_0c0c2944(0xC, 0x0, 0x0, (((int)stk + 0) + 0x4), 0xFFFFFFFF));
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t51 = 0x14;
            }
        }
        t61 = t51;
    } else {
        t61 = (FUN_0c03f346(a4, a5, a6, a7));
    }
    return t61;
}
