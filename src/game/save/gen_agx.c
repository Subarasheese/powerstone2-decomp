/* Straight-line functions with calls and guards (batch gen_agx): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c03ae7a(void);

int FUN_0c03ae7a(void)
{

    register int R2;
    register int R3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    v0_0 = (0xC3C9E10);
    v0_1 = (0xC3C9FB0);
    v0_2 = (0xC3C9E10);
    if (((unsigned int)0xC3C9E10 >= (unsigned int)0xC3C9FB0)) goto L_C03AEA4;
    L_C03AE8C:;
    if (((*(int *)((v0_0 + 0x4))) != 18)) goto L_C03AE9E;
    if (((*(int *)((v0_0 + 0x8))) != 0xFFFF0000)) goto L_C03AE9E;
    v0_0 = (0xFFFFFFFF);
    L_C03AEE4:;
    return v0_0;
    L_C03AE9E:;
    v0_3 = (unsigned int)(v0_0 + 0x34) < (unsigned int)v0_1;
    v0_0 = ((v0_0 + 0x34));
    if (v0_3) goto L_C03AE8C;
    L_C03AEA4:;
    v0_3 = (0x8);
    v0_4 = (0x0);
    v0_0 = (0x0);
    v0_1 = (0x34);
    v0_5 = (0x1);
    L_C03AEAE:;
    v0_6 = *(int *)((((v0_0 * v0_1) + v0_2) + 0x4));
    v0_7 = (v0_6);
    if ((v0_6 == 18)) goto L_C03AEC8;
    if ((v0_7 != 1)) goto L_C03AEDA;
    L_C03AEC8:;
    if (((*(int *)((((v0_0 * v0_1) + v0_2) + 0x14))) != 2)) goto L_C03AEDA;
    v0_4 = ((v0_4 | ((int)v0_5 << (int)v0_0)));
    L_C03AEDA:;
    v0_6 = (int)(v0_0 + 0x1) < (int)v0_3;
    v0_0 = ((v0_0 + 0x1));
    if (v0_6) goto L_C03AEAE;
    v0_0 = (v0_4);
    goto L_C03AEE4;
}
