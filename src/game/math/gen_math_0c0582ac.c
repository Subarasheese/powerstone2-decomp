/* game/math: functions 0C0582AC-0C058310, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlCalcPoint(int, int);
int nlCalcVector(int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int FUN_0c187798(void);
int math_mat_transform_vector(int a4, int a5);
int FUN_0c0582de(int a4, int a5);

int math_mat_transform_vector(int a4, int a5)
{
    int stk[5];

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    nlPushMatrix(a5);
    *(volatile int *)(((int)stk + 0));
    FUN_0c187798();
    nlCalcVector((((int)stk + 0) + 0x8), (*(int *)(((int)stk + 0))));
    return (nlPopMatrix(0x1));
}

int FUN_0c0582de(int a4, int a5)
{
    int stk[5];

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    nlPushMatrix(a5);
    *(volatile int *)(((int)stk + 0));
    FUN_0c187798();
    nlCalcPoint((((int)stk + 0) + 0x8), (*(int *)(((int)stk + 0))));
    return (nlPopMatrix(0x1));
}
