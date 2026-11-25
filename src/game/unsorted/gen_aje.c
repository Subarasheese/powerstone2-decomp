/* Straight-line functions with calls and guards (batch gen_aje): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c03f444(int, int, int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c07e3ae(int, int);
void FUN_0c16944a(int a4, int a5, int a6, int a7);

void FUN_0c16944a(int a4, int a5, int a6, int a7)
{
    int stk[6];

    register int R1;
    register int R2;
    register int R3;
    register int R8;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    v0_2 = a4;
    v0_1 = a5;
    v0_3 = a6;
    v0_0 = a7;
    *(unsigned int *)(((int)stk + 20)) = v0_1;
    *(unsigned int *)(((int)stk + 16)) = v0_3;
    v0_1 = ((~((int)0x1 << (int)v0_2)));
    v0_2 = (v0_2);
    v0_3 = (0x0);
    v0_4 = (0x0);
    L_C1694F0:;
    if (((int)v0_3 < (int)0x4)) goto L_C16946E;
    return;
    L_C16946E:;
    v0_5 = (0xC03F444);
    if ((v0_3 != 0)) goto L_C1694B8;
    v0_6 = FUN_0c03f444(0x1, 0x0, 0x1, v0_0);
    v0_5 = (v0_6);
    v0_5 = (v0_6);
    if ((v0_6 == 0)) goto L_C1694EE;
    *(unsigned char *)((v0_5 + 0x1)) = v0_2;
    *(unsigned int *)((v0_5 + 0x4)) = 0xC16906C;
    *(unsigned char *)((v0_5 + 0x2)) = v0_3;
    FUN_0c07e3ae(v0_5, 0x55);
    *(int *)((int)stk + 12) = 0xF0;
    v0_6 = v0_4;
    *(int *)((int)stk + 8) = v0_6;
    v0_7 = v0_1;
    *(int *)((int)stk + 4) = v0_7;
    *(int *)((int)stk + 0) = 0x100;
    FUN_0c064d24(v0_5, 0x3, 0x55, 0x2, 0x100, v0_7, v0_6, 0xF0);
    L_C1694D6:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_5 + 0x28)) = *(struct mv3 *)((*(int *)(((int)stk + 20)))); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_5 + 0x34)) = *(struct mv3 *)((*(int *)(((int)stk + 16)))); }
    L_C1694EE:;
    v0_3 = ((v0_3 + 0x1));
    goto L_C1694F0;
    L_C1694B8:;
    v0_6 = FUN_0c03f444(0x5, 0x0, 0x1, v0_0);
    v0_5 = (v0_6);
    v0_5 = (v0_6);
    if ((v0_6 == 0)) goto L_C1694EE;
    *(unsigned char *)((v0_5 + 0x1)) = v0_2;
    *(unsigned int *)((v0_5 + 0x4)) = 0xC16906C;
    *(unsigned char *)((v0_5 + 0x2)) = v0_3;
    goto L_C1694D6;
}
