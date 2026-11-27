/* Straight-line functions with calls and guards (batch gen_akm): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0377b2(int a4);

int FUN_0c0377b2(int a4)
{

    register int R0;
    register int R2;
    register int R3;
    register int R12;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    v0_0 = a4;
    v0_1 = R12;
    *(unsigned int *)((v0_0 + 0x8)) = ((*(int *)((v0_0 + 0x8))) + v0_0);
    v0_1 = (0x0);
    R12 = (0x3C);
    v0_2 = (0x0);
    L_C037826:;
    v0_3 = (int)v0_2 < (int)(*(int *)((v0_0 + 0xC)));
    if (v0_3) goto L_C0377C4;
    return R0;
    L_C0377C4:;
    *(unsigned int *)((((((v0_2 << 2) << 2) << 1) + (v0_0 + 0x10)) + 0x1C)) = ((*(int *)((((((v0_2 << 2) << 2) << 1) + (v0_0 + 0x10)) + 0x1C))) + v0_0);
    v0_3 = (((((v0_2 << 2) << 2) << 1) + (v0_0 + 0x10)));
    v0_4 = (v0_1);
    L_C03781E:;
    v0_5 = (int)v0_4 < (int)(*(int *)((v0_3 + 0x18)));
    if (v0_5) goto L_C0377DC;
    v0_2 = ((v0_2 + 0x1));
    goto L_C037826;
    L_C0377DC:;
    v0_6 = (*(int *)((((*(int *)((v0_3 + 0x1C))) + (v0_4 * R12)) + 0x0))) == 0;
    v0_5 = ((v0_4 * R12));
    if (v0_6) goto L_C0377F4;
    v0_6 = *(int *)((v0_3 + 0x1C));
    *(unsigned int *)(((v0_6 + v0_5) + 0x0)) = ((*(int *)(((v0_6 + v0_5) + 0x0))) + v0_0);
    R0 = ((v0_6 + v0_5));
    L_C0377F4:;
    v0_6 = (*(int *)((((*(int *)((v0_3 + 0x1C))) + v0_5) + 0x4))) == 0;
    if (v0_6) goto L_C037808;
    v0_6 = *(int *)((v0_3 + 0x1C));
    *(unsigned int *)(((v0_6 + v0_5) + 0x4)) = ((*(int *)(((v0_6 + v0_5) + 0x4))) + v0_0);
    R0 = ((v0_6 + v0_5));
    L_C037808:;
    v0_6 = (*(int *)((((*(int *)((v0_3 + 0x1C))) + v0_5) + 0x8))) == 0;
    v0_4 = ((v0_4 + 0x1));
    if (v0_6) goto L_C03781E;
    v0_6 = *(int *)((v0_3 + 0x1C));
    *(unsigned int *)(((v0_6 + v0_5) + 0x8)) = ((*(int *)(((v0_6 + v0_5) + 0x8))) + v0_0);
    R0 = ((v0_6 + v0_5));
    goto L_C03781E;
}
