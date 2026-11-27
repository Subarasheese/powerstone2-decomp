/* Straight-line functions with calls and guards (batch gen_ajh): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0221b0(void);
int FUN_0c1864e0(int, int, int);
int FUN_0c186740(int, int, int);
int FUN_0c187a88(int, int, int);
int FUN_0c0222a4(int a4, int a5, int a6);

int FUN_0c0222a4(int a4, int a5, int a6)
{
    int stk[5];

    register int R2;
    register int R3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    v0_3 = a4;
    v0_2 = a5;
    v0_4 = a6;
    v0_5 = *(signed char *)((v0_3 + 0x0));
    v0_0 = (v0_5);
    v0_1 = (0xC309994);
    if ((v0_5 != 101)) goto L_C0222F6;
    v0_4 = *(signed char *)((v0_4 + 0x0));
    v0_0 = (v0_4);
    if ((v0_4 != 6)) goto L_C0222F6;
    FUN_0c0221b0();
    *(unsigned char *)(((((int)stk + 0) + 0x8) + 0x0)) = 0x75;
    *(unsigned int *)(((int)stk + 4)) = ((((int)stk + 0) + 0x8) + 0x1);
    *(unsigned char *)((((((int)stk + 0) + 0x8) + 0x1) + 0x0)) = 0xA;
    *(unsigned char *)(((((int)stk + 0) + 0x8) + 0x2)) = 0x6;
    FUN_0c187a88(((((int)stk + 0) + 0x8) + 0x3), 0xC30A34C, 0x6);
    *(unsigned char *)(((((int)stk + 0) + 0x8) + 0x9)) = 0x2;
    v0_2 = (((int)stk + 0) + 0x8);
    v0_0 = ((FUN_0c186740((*(int *)((v0_1 + 0x0))), (((int)stk + 0) + 0x8), (*(signed char *)(((*(int *)(((int)stk + 4))) + 0x0))))));
    v0_2 = v0_2;
    L_C022312:;
    return v0_0;
    L_C0222F6:;
    v0_3 = (0xC1864E0);
    v0_2 = ((unsigned char)(unsigned char)(*(signed char *)((v0_2 + 0x0))));
    L_C02230A:;
    if (((int)(v0_2 - 3) > 0)) goto L_C022300;
    goto L_C022312;
    L_C022300:;
    v0_0 = ((FUN_0c1864e0((*(int *)((v0_1 + 0x0))), ((int)stk + 0), 0x1)));
    v0_2 = ((v0_2 - 1));
    goto L_C02230A;
}
