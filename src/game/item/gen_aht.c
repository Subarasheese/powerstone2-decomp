/* Straight-line functions with calls and guards (batch gen_aht): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c162860(int, int);
int FUN_0c16bca2(int, int, int, int);
int FUN_0c16b9ec(int a4, int a5, int a6, int a7);

int FUN_0c16b9ec(int a4, int a5, int a6, int a7)
{
    int stk[1];

    register int R1;
    register int R2;
    register int R3;
    register int R11;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    v0_0 = a4;
    v0_5 = a5;
    v0_1 = a6;
    v0_2 = a7;
    *(unsigned int *)(((int)stk + 0)) = v0_1;
    v0_7 = (v0_2);
    v0_3 = (0xC162860);
    v0_4 = (0x3);
    v0_3 = (v0_2);
    v0_5 = (v0_5);
    v0_6 = (v0_0);
    if ((v0_2 == 0)) goto L_C16BA1A;
    if ((v0_7 == 1)) goto L_C16BA74;
    v0_4 = FUN_0c162860((*(signed char *)((v0_6 + 0x1))), v0_3);
    v0_0 = (v0_4);
    if ((v0_4 == 0)) goto L_C16BB0C;
    *(unsigned int *)((v0_0 + 0x4)) = 0xC16B9D2;
    *(unsigned char *)((v0_0 + 0x2)) = v0_3;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_0 + 0x28)) = *(struct mv3 *)(v0_5); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_0 + 0x34)) = *(struct mv3 *)((*(int *)(((int)stk + 0)))); }
    L_C16BB0C:;
    return FUN_0c16bca2(v0_6, v0_3, v0_1, v0_2);
    L_C16BA74:;
    v0_7 = (0x0);
    L_C16BAD4:;
    if (((int)v0_7 < (int)v0_4)) goto L_C16BA78;
    goto L_C16BB0C;
    L_C16BA78:;
    v0_8 = FUN_0c162860((*(signed char *)((v0_6 + 0x1))), v0_3);
    v0_0 = (v0_8);
    if ((v0_8 == 0)) goto L_C16BAD2;
    *(unsigned int *)((v0_0 + 0x4)) = 0xC16B9D2;
    *(unsigned char *)((v0_0 + 0x2)) = v0_3;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_0 + 0x28)) = *(struct mv3 *)(v0_5); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_0 + 0x34)) = *(struct mv3 *)((*(int *)(((int)stk + 0)))); }
    *(unsigned char *)(((0x41C + v0_0) + 0x3)) = v0_7;
    if (((*(signed char *)(((0x41C + v0_0) + 0x3))) != 0)) goto L_C16BAD0;
    R11 = (v0_0);
    L_C16BAD2:;
    v0_7 = ((v0_7 + 0x1));
    goto L_C16BAD4;
    L_C16BAD0:;
    *(unsigned int *)((v0_0 + 0x10)) = R11;
    goto L_C16BAD2;
    L_C16BA1A:;
    R11 = (0x0);
    L_C16BA6A:;
    if (((int)R11 < (int)0x5)) goto L_C16BA1E;
    goto L_C16BB0C;
    L_C16BA1E:;
    v0_7 = (0x0);
    L_C16BA64:;
    if (((int)v0_7 < (int)v0_4)) goto L_C16BA22;
    R11 = ((R11 + 0x1));
    goto L_C16BA6A;
    L_C16BA22:;
    v0_8 = FUN_0c162860((*(signed char *)((v0_6 + 0x1))), v0_3);
    v0_0 = (v0_8);
    if ((v0_8 == 0)) goto L_C16BA62;
    *(unsigned int *)((v0_0 + 0x4)) = 0xC16B9D2;
    *(unsigned char *)((v0_0 + 0x2)) = v0_3;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_0 + 0x28)) = *(struct mv3 *)(v0_5); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_0 + 0x34)) = *(struct mv3 *)((*(int *)(((int)stk + 0)))); }
    *(unsigned char *)(((v0_0 + 0x41C) + 0x2)) = v0_7;
    *(unsigned char *)(((v0_0 + 0x41C) + 0x3)) = R11;
    L_C16BA62:;
    v0_7 = ((v0_7 + 0x1));
    goto L_C16BA64;
}
