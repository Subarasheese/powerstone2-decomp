/* game/unsorted: functions 0C058ADC-0C058B48, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlCalcPoint(int, int);
int FUN_0c0e09f0(int, int, int, int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlUnitMatrix(void);
int FUN_0c058adc(int a4, int a5, int a6);
int FUN_0c058b06(int a4, int a5, int a6);

int FUN_0c058adc(int a4, int a5, int a6)
{
    int stk[3];

    *(unsigned int *)(((int)stk + 8)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 0)) = a6;
    nlPushMatrix(a6);
    FUN_0c0e09f0(0x0, (*(int *)(((int)stk + 0))), 0x0, 0x0, *(int *)((int)stk + 0));
    nlCalcPoint((*(int *)(((int)stk + 4))), (*(int *)(((int)stk + 8))));
    return nlPopMatrix(0x1);
}

int FUN_0c058b06(int a4, int a5, int a6)
{
    int stk[18];

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 0)) = a6;
    nlPushMatrix((((int)stk + 0) + 0x8));
    nlUnitMatrix();
    nlRotateAZ((*(int *)((a5 + 0x8))));
    nlRotateAY((*(int *)((a5 + 0x4))));
    nlRotateAX((*(int *)((a5 + 0x0))));
    nlCalcPoint((*(int *)(((int)stk + 0))), (*(int *)(((int)stk + 4))));
    return (nlPopMatrix(0x1));
}
