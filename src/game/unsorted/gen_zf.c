/* Straight-line functions with calls and guards (batch gen_zf): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0d0378(int, int);
int FUN_0c0d039e(int, int);
int FUN_0c0f1d14(int a4, int a5);

int FUN_0c0f1d14(int a4, int a5)
{

    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    v0_0 = a4;
    v0_1 = a5;
    v0_2 = (v0_0);
    v0_3 = (0xC0D039E);
    v0_3 = (0xC0D0378);
    if ((v0_0 == 0)) goto L_C0F1D36;
    if ((v0_2 == 1)) goto L_C0F1D4A;
    if ((v0_2 == 2)) goto L_C0F1D5E;
    if ((v0_2 == 3)) goto L_C0F1D72;
    L_C0F1D88:;
    return v0_2;
    L_C0F1D72:;
    if ((v0_1 == 0)) goto L_C0F1D82;
    v0_0 = (0x6);
    v0_1 = (0x7);
    L_C0F1D7A:;
    v0_2 = ((FUN_0c0d039e(v0_0, v0_1)));
    goto L_C0F1D88;
    L_C0F1D82:;
    v0_2 = ((FUN_0c0d0378(0x6, 0x7)));
    goto L_C0F1D88;
    L_C0F1D5E:;
    if ((v0_1 == 0)) goto L_C0F1D68;
    v0_0 = (0x4);
    v0_1 = (0x5);
    goto L_C0F1D7A;
    L_C0F1D68:;
    v0_2 = ((FUN_0c0d0378(0x4, 0x5)));
    goto L_C0F1D88;
    L_C0F1D4A:;
    if ((v0_1 == 0)) goto L_C0F1D54;
    v0_0 = (0x2);
    v0_1 = (0x3);
    goto L_C0F1D7A;
    L_C0F1D54:;
    v0_2 = ((FUN_0c0d0378(0x2, 0x3)));
    goto L_C0F1D88;
    L_C0F1D36:;
    if ((v0_1 == 0)) goto L_C0F1D40;
    v0_0 = (0x0);
    v0_1 = (0x1);
    goto L_C0F1D7A;
    L_C0F1D40:;
    v0_2 = ((FUN_0c0d0378(0x0, 0x1)));
    goto L_C0F1D88;
}
