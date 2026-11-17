/* game/unsorted: functions 0C02DC1C-0C02EC54, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c02e078(int, int, int);
int FUN_0c02f874(int, int);
int FUN_0c03ee04(int);
int nlSelectMatrixStack(int);
int FUN_0c17e740(float, float, float);
int FUN_0c02e346(void);

int FUN_0c02e346(void)
{
    int stk[9];
    register int t2;
    register int t8;
    register float u14;
    register float u15;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t34;
    int t28;
    register int t30;
    register int t31;

    t8 = *(int *)0xC532450;
    t2 = (nlSelectMatrixStack(0x1));
    for (;;) {
        if (t8 == 0) {
            break;
        }
        t7 = 0xA8;
        t7 = (t7 + t8);
        t5 = (*(signed char *)((t7 + 0x0)));
        if (t5 != 0) {
            t5 = 0xC03EE04;
            t2 = (*(signed char *)((t7 + 0x1)));
            t2 = (FUN_0c03ee04(t2));
            t2 = (*(short *)((t7 + 0x4)));
            t2 = (unsigned short)t2;
            if ((t2 & 0x200) != 0) {
                t2 = 0x14;
                t5 = 0xC17E740;
                u14 = *(float *)((t7 + t2));
                t2 = 0x10;
                u15 = *(float *)((t7 + t2));
                t2 = 0xC;
                t2 = (FUN_0c17e740((*(float *)((t7 + t2))), u15, u14));
            }
            t6 = t7;
            t6 = (t6 + 0x1C);
            *(unsigned int *)(((int)stk + 0)) = 0x0;
            for (;;) {
                t2 = 0xC0;
                t3 = (*(int *)(((int)stk + 0)));
                t4 = (*(int *)((t8 + t2)));
                if ((int)t3 >= (int)t4) {
                    break;
                }
                t7 = (*(int *)((t6 + 0x0)));
                t4 = (*(int *)((t7 + 0xC)));
                if ((t4 != 0) && (t28 = *(int *)0xC20EA8C, t2 = t28, t2 != 3)) {
                    t2 = (FUN_0c02f874(t8, t7));
                } else {
                    t30 = t3;
                    t31 = t4;
                }
                t3 = t30;
                t4 = t31;
                t2 = (FUN_0c02e078(t8, t7, 0x0));
                t5 = (*(int *)(((int)stk + 0)));
                t6 = (t6 + 0x4);
                t5 = (t5 + 0x1);
                *(unsigned int *)(((int)stk + 0)) = t5;
            }
        } else {
            t34 = t5;
        }
        t8 = (*(int *)((t8 + 0xC)));
        t5 = t34;
    }
    return t2;
}
