/* Straight-line functions with calls and guards (batch gen_ahx): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c03b2e8(void);

int FUN_0c03b2e8(void)
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
    if (((unsigned int)0xC3C9E10 >= (unsigned int)0xC3C9FB0)) goto L_C03B316;
    L_C03B2FE:;
    if (((*(int *)((v0_0 + 0x4))) != 18)) goto L_C03B310;
    if (((*(int *)((v0_0 + 0x8))) != 0xFFFF0000)) goto L_C03B310;
    v0_0 = (0xFFFFFFFF);
    L_C03B35A:;
    return v0_0;
    L_C03B310:;
    v0_3 = (unsigned int)(v0_0 + 0x34) < (unsigned int)v0_1;
    v0_0 = ((v0_0 + 0x34));
    if (v0_3) goto L_C03B2FE;
    L_C03B316:;
    v0_3 = (0x5);
    v0_4 = (0x1);
    v0_5 = (0x8);
    v0_6 = (0x0);
    v0_0 = (0x0);
    v0_1 = (0x34);
    L_C03B324:;
    v0_7 = *(int *)((((v0_0 * v0_1) + v0_2) + 0x4));
    v0_8 = (v0_7);
    if ((v0_7 == 18)) goto L_C03B33E;
    if ((v0_8 != 1)) goto L_C03B350;
    L_C03B33E:;
    if (((int)(*(int *)((((v0_0 * v0_1) + v0_2) + 0x2C))) < (int)v0_3)) goto L_C03B350;
    v0_6 = ((v0_6 | ((int)v0_4 << (int)v0_0)));
    L_C03B350:;
    v0_7 = (int)(v0_0 + 0x1) < (int)v0_5;
    v0_0 = ((v0_0 + 0x1));
    if (v0_7) goto L_C03B324;
    v0_0 = (v0_6);
    goto L_C03B35A;
}
