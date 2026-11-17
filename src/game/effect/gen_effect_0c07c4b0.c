/* game/effect: functions 0C07C4B0-0C07C500, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c01e99c(void);
int FUN_0c07c4b0(int a4, int a5);

int FUN_0c07c4b0(int a4, int a5)
{
    int stk[1];

    register int R0;
    register int R2;
    register int R3;
    register int T_;
    register int v0_0;
    register int v0_1;
    v0_1 = a4;
    v0_0 = a5;
    *(unsigned int *)(((int)stk + 0)) = v0_0;
    v0_0 = (v0_1);
    if (((int)v0_1 < 0)) goto L_C07C4F8;
    v0_1 = (signed char)(FUN_0c01e99c()) != 0;
    if (v0_1) goto L_C07C4CE;
    if ((v0_0 == 0)) goto L_C07C4E2;
    L_C07C4CE:;
    v0_1 = FUN_0c01e99c();
    R0 = ((signed char)v0_1);
    if (((signed char)v0_1 == 0)) goto L_C07C4F8;
    R0 = (v0_0);
    if ((v0_0 != 2)) goto L_C07C4F8;
    L_C07C4E2:;
    *(unsigned int *)0xC542390 = ((*(int *)0xC542390) + (*(int *)(((int)stk + 0))));
    R0 = (0x198);
    v0_1 = (0xC5421F8);
    v0_0 = (0x1869F);
    if (((int)(*(int *)0xC542390) <= (int)0x1869F)) goto L_C07C4F8;
    *(unsigned int *)((v0_1 + R0)) = v0_0;
    L_C07C4F8:;
    return R0;
}
