/* Straight-line functions with calls and guards (batch gen_sp): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c11e7f0(int a4, int a5);

int FUN_0c11e7f0(int a4, int a5)
{

    register int R1;
    register int R2;
    register int R3;
    int R5;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    v0_2 = a4;
    R5 = a5;
    v0_0 = (0x0);
    v0_3 = ((((v0_2 + 0x1) * 0x34) + 0xC2738B8));
    if (((0x1 & R5) == 0)) goto L_C11E80E;
    v0_2 = *(signed char *)((v0_3 + 0x3));
    v0_1 = (v0_2);
    if ((v0_2 != 1)) goto L_C11E80E;
    v0_0 = (0x1);
    L_C11E80E:;
    v0_2 = (0x2);
    if (((R5 & 0x2) == 0)) goto L_C11E81E;
    v0_4 = *(signed char *)((v0_3 + 0x3));
    v0_1 = (v0_4);
    if ((v0_4 != 2)) goto L_C11E81E;
    v0_0 = ((v0_0 | v0_2));
    L_C11E81E:;
    v0_2 = (0x4);
    if (((R5 & 0x4) == 0)) goto L_C11E82E;
    v0_4 = *(signed char *)((v0_3 + 0x3));
    v0_1 = (v0_4);
    if ((v0_4 != 3)) goto L_C11E82E;
    v0_0 = ((v0_0 | v0_2));
    L_C11E82E:;
    v0_2 = (0x8);
    if (((R5 & 0x8) == 0)) goto L_C11E83E;
    v0_4 = *(signed char *)((v0_3 + 0x3));
    v0_1 = (v0_4);
    if ((v0_4 != 4)) goto L_C11E83E;
    v0_0 = ((v0_0 | v0_2));
    L_C11E83E:;
    v0_2 = (0x10);
    if (((R5 & 0x10) == 0)) goto L_C11E84E;
    v0_4 = *(signed char *)((v0_3 + 0x3));
    v0_1 = (v0_4);
    if ((v0_4 != 5)) goto L_C11E84E;
    v0_0 = ((v0_0 | v0_2));
    L_C11E84E:;
    v0_2 = (0x20);
    if (((R5 & 0x20) == 0)) goto L_C11E85E;
    v0_4 = *(signed char *)((v0_3 + 0x3));
    v0_1 = (v0_4);
    if ((v0_4 != 6)) goto L_C11E85E;
    v0_0 = ((v0_0 | v0_2));
    L_C11E85E:;
    v0_2 = (0x40);
    if (((R5 & 0x40) == 0)) goto L_C11E86E;
    v0_4 = *(signed char *)((v0_3 + 0x3));
    v0_1 = (v0_4);
    if ((v0_4 != 7)) goto L_C11E86E;
    v0_0 = ((v0_0 | v0_2));
    L_C11E86E:;
    v0_2 = (0x80);
    if (((R5 & 0x80) == 0)) goto L_C11E87C;
    v0_3 = *(signed char *)((v0_3 + 0x3));
    v0_1 = (v0_3);
    if ((v0_3 != 8)) goto L_C11E87C;
    v0_0 = ((v0_0 | v0_2));
    L_C11E87C:;
    return v0_0;
}
