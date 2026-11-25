/* Straight-line functions with calls and guards (batch gen_aji): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c03f004(void);
int FUN_0c03f258(int a4, int a5);

int FUN_0c03f258(int a4, int a5)
{
    int stk[2];

    register int R3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    v0_0 = *(int *)((int)stk + 0);
    v0_2 = *(int *)((int)stk + 4);
    v0_1 = a4;
    v0_5 = a5;
    v0_0 = v0_1;
    v0_2 = v0_5;
    v0_3 = FUN_0c03f004();
    v0_1 = (v0_3);
    if ((v0_3 != 0)) goto L_C03F274;
    return 0x0;
    L_C03F274:;
    *(unsigned char *)((v0_1 + 0x0)) = (v0_0);
    v0_5 = v0_2;
    v0_6 = (v0_5);
    v0_2 = (((v0_0) << 2));
    v0_3 = (0xC532434);
    v0_4 = (0xC53245C);
    if ((v0_5 == 0)) goto L_C03F28E;
    if (!((v0_6 == 1))) goto L_C03F2D0;
    v0_0 = (v0_2 + v0_4);
    v0_4 = *(int *)(((v0_2 + v0_4) + 0x0));
    *(unsigned int *)((v0_1 + 0x8)) = v0_4;
    *(unsigned int *)(((v0_0) + 0x0)) = v0_1;
    *(unsigned int *)((v0_1 + 0xC)) = 0x0;
    v0_5 = (v0_4);
    if ((v0_4 != 0)) goto L_C03F2CE;
    *(unsigned int *)((v0_3 + v0_2)) = v0_1;
    goto L_C03F2D0;
    L_C03F2D0:;
    return v0_1;
    L_C03F2CE:;
    *(unsigned int *)((v0_5 + 0xC)) = v0_1;
    goto L_C03F2D0;
    L_C03F28E:;
    v0_0 = (v0_2 + v0_3);
    v0_3 = *(int *)(((v0_2 + v0_3) + 0x0));
    *(unsigned int *)((v0_1 + 0xC)) = v0_3;
    *(unsigned int *)(((v0_0) + 0x0)) = v0_1;
    *(unsigned int *)((v0_1 + 0x8)) = 0x0;
    v0_5 = (v0_3);
    if ((v0_3 != 0)) goto L_C03F2AC;
    *(unsigned int *)((v0_4 + v0_2)) = v0_1;
    goto L_C03F2D0;
    L_C03F2AC:;
    *(unsigned int *)((v0_5 + 0x8)) = v0_1;
    goto L_C03F2D0;
}
