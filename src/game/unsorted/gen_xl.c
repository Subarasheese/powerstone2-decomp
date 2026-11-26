/* Straight-line functions with calls and guards (batch gen_xl): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o68_uint { char p[0x68]; unsigned int v; };
int FUN_0c037518(int, int, int, int);
int FUN_0c0375d8(int, int, int);
int FUN_0c037646(int a4, int a5, int a6);

int FUN_0c037646(int a4, int a5, int a6)
{
    int stk[12];

    register int R2;
    register int R3;
    register int R7;
    register int R13;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    v0_3 = a4;
    v0_0 = a5;
    v0_1 = a6;
    *(unsigned int *)(((int)stk + 12)) = v0_3;
    *(unsigned int *)(((int)stk + 8)) = v0_0;
    *(unsigned int *)(((int)stk + 20)) = v0_1;
    v0_1 = *(int *)(((int)stk + 12));
    *(unsigned int *)(((int)stk + 24)) = (((int)stk + 0) + 0x28);
    *(unsigned int *)(((int)stk + 28)) = (((int)stk + 0) + 0x2C);
    v0_0 = *(int *)(((int)stk + 8));
    *(unsigned int *)(((int)stk + 32)) = (v0_0 * 0x10E0);
    *(unsigned int *)(((int)stk + 0)) = (v0_0 << 2);
    *(unsigned int *)(((int)stk + 4)) = (v0_0 * 0x2D0);
    *(unsigned int *)(((int)stk + 0)) = (*(int *)(((int)stk + 0)));
    v0_0 = (0x1);
    v0_1 = ((v0_1 + 0x444));
    L_C037792:;
    if (((int)v0_0 >= (int)0x5)) goto L_C03779C;
    v0_3 = *(int *)(((int)stk + 20));
    v0_4 = (v0_0);
    v0_2 = ((*(int *)((((v0_3 + 0x10) + (((v0_0 << 2) << 2) << 1)) + 0x18))));
    v0_3 = (((v0_3 + 0x10) + (((v0_0 << 2) << 2) << 1)));
    if ((v0_0 == 1)) goto L_C0376B8;
    if ((v0_4 == 2)) goto L_C0376CE;
    if ((v0_4 == 3)) goto L_C0376E4;
    if (!((v0_4 == 4))) goto L_C03771A;
    *(unsigned int *)(((int)stk + 36)) = ((0x2D24 + v0_1) + (*(int *)(((int)stk + 4))));
    v0_4 = (((v0_1 + 0x1C) + (*(int *)(((int)stk + 0)))));
    goto L_C037718;
    L_C03771A:;
    *(unsigned int *)(((int)stk + 16)) = 0x0;
    v0_4 = ((*(int *)(((int)stk + 36))));
    v0_3 = ((*(int *)((v0_3 + 0x1C))));
    if (((int)v0_2 <= 0)) goto L_C037780;
    L_C037726:;
    *(unsigned int *)((v0_4 + 0x8)) = (*(int *)((v0_3 + 0x0)));
    *(unsigned int *)((v0_4 + 0xC)) = (*(int *)((v0_3 + 0x4)));
    *(unsigned int *)((v0_4 + 0x10)) = (*(int *)((v0_3 + 0x8)));
    *(unsigned int *)(((*(int *)(((int)stk + 24))) + 0x0)) = (*(int *)((v0_3 + 0xC)));
    *(unsigned int *)(((*(int *)(((int)stk + 28))) + 0x0)) = (*(int *)((v0_3 + 0x10)));
    (((struct o68_uint *)(v0_4))->v) = (FUN_0c037518((*(int *)(((int)stk + 12))), v0_1, (*(int *)(((int)stk + 8))), (((int)stk + 0) + 0x28)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_4 + 0x6C)) = *(struct mv3 *)((v0_3 + 0x24)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_4 + 0x78)) = *(struct mv3 *)((v0_3 + 0x30)); }
    v0_5 = *(int *)(((int)stk + 16));
    *(unsigned int *)(((int)stk + 16)) = (v0_5 + 0x1);
    v0_6 = (v0_3);
    v0_4 = ((v0_4 + 0x90));
    v0_3 = ((v0_3 + 0x3C));
    if (((int)(v0_5 + 0x1) < (int)v0_2)) goto L_C037726;
    L_C037780:;
    if ((v0_0 != 1)) goto L_C037790;
    FUN_0c0375d8((*(int *)(((int)stk + 12))), (*(int *)(((int)stk + 8))), (*(int *)(((int)stk + 20))));
    L_C037790:;
    v0_0 = ((v0_0 + 0x1));
    goto L_C037792;
    L_C037718:;
    *(unsigned int *)((v0_4 + 0x0)) = v0_2;
    goto L_C03771A;
    L_C0376E4:;
    *(unsigned int *)(((int)stk + 36)) = ((0x2784 + v0_1) + (*(int *)(((int)stk + 4))));
    v0_4 = (((v0_1 + 0x14) + (*(int *)(((int)stk + 0)))));
    goto L_C037718;
    L_C0376CE:;
    *(unsigned int *)(((int)stk + 36)) = ((0x21E4 + v0_1) + (*(int *)(((int)stk + 4))));
    v0_4 = (((v0_1 + 0xC) + (*(int *)(((int)stk + 0)))));
    goto L_C037718;
    L_C0376B8:;
    *(unsigned int *)(((int)stk + 36)) = ((v0_1 + 0x24) + (*(int *)(((int)stk + 32))));
    v0_4 = (((v0_1 + 0x4) + (*(int *)(((int)stk + 0)))));
    goto L_C037718;
    L_C03779C:;
    return 0x0;
}
