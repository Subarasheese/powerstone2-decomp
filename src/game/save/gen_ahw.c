/* Straight-line functions with calls and guards (batch gen_ahw): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c03b25a(void);

int FUN_0c03b25a(void)
{

    register int R1;
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
    register int v0_8;
    v0_0 = (0xC3C9E10);
    v0_1 = (0xC3C9FB0);
    v0_2 = (0xC3C9E10);
    if (((unsigned int)0xC3C9E10 >= (unsigned int)0xC3C9FB0)) goto L_C03B288;
    L_C03B270:;
    if (((*(int *)((v0_0 + 0x4))) != 18)) goto L_C03B282;
    if (((*(int *)((v0_0 + 0x8))) != 0xFFFF0000)) goto L_C03B282;
    v0_0 = (0xFFFFFFFF);
    L_C03B2CC:;
    return v0_0;
    L_C03B282:;
    v0_3 = (unsigned int)(v0_0 + 0x34) < (unsigned int)v0_1;
    v0_0 = ((v0_0 + 0x34));
    if (v0_3) goto L_C03B270;
    L_C03B288:;
    v0_3 = (0x6);
    v0_4 = (0x1);
    v0_5 = (0x8);
    v0_6 = (0x0);
    v0_0 = (0x0);
    v0_1 = (0x34);
    L_C03B296:;
    v0_7 = *(int *)((((v0_0 * v0_1) + v0_2) + 0x4));
    v0_8 = (v0_7);
    if ((v0_7 == 18)) goto L_C03B2B0;
    if ((v0_8 != 1)) goto L_C03B2C2;
    L_C03B2B0:;
    if (((int)(*(int *)((((v0_0 * v0_1) + v0_2) + 0x2C))) < (int)v0_3)) goto L_C03B2C2;
    v0_6 = ((v0_6 | ((int)v0_4 << (int)v0_0)));
    L_C03B2C2:;
    v0_7 = (int)(v0_0 + 0x1) < (int)v0_5;
    v0_0 = ((v0_0 + 0x1));
    if (v0_7) goto L_C03B296;
    v0_0 = (v0_6);
    goto L_C03B2CC;
}
