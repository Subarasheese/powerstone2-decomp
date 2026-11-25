/* Straight-line functions with calls and guards (batch gen_ajb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int buMountDisk(int);
int buUnmount(int);
int FUN_0c03ad28(void);

int FUN_0c03ad28(void)
{
    int stk[1];

    register int R0;
    register int R1;
    register int R2;
    register int R3;
    register int R4;
    register int R5;
    register int R6;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    if (((*(int *)0xC3C9FB0) != 0)) goto L_C03ADC4;
    if (((*(int *)0xC4B1078) != 0)) goto L_C03ADC4;
    *(unsigned int *)(((int)stk + 0)) = 0xC3CC820;
    v0_0 = (0xC3C9E10);
    v0_1 = (0x34);
    v0_2 = (0xC3C9FB4);
    v0_3 = (0xC3C9E10);
    v0_4 = (0xC3C9E10);
    v0_5 = (0xC3C9FB0);
    if (((unsigned int)0xC3C9E10 >= (unsigned int)0xC3C9FB0)) goto L_C03ADC4;
    L_C03AD64:;
    v0_6 = *(int *)((v0_4 + 0x4));
    R0 = (v0_6);
    if ((v0_6 != 18)) goto L_C03ADBC;
    if (((*(int *)((v0_4 + 0x8))) != 0xFFFF0000)) goto L_C03ADBC;
    v0_6 = *(int *)((v0_2 + 0x0));
    v0_7 = (v0_6);
    if ((v0_6 == -1)) goto L_C03AD9E;
    v0_6 = buUnmount((*(int *)((((v0_7 * v0_1) + v0_0) + 0x0))));
    R0 = (v0_6);
    if ((v0_6 != 0)) goto L_C03ADBC;
    *(unsigned int *)(((((*(int *)((v0_2 + 0x0))) * v0_1) + v0_0) + 0x4)) = 0x12;
    *(unsigned int *)((v0_2 + 0x0)) = 0xFFFFFFFF;
    L_C03ADC4:;
    return R0;
    L_C03ADBC:;
    v0_6 = (unsigned int)(v0_4 + 0x34) < (unsigned int)v0_5;
    v0_3 = ((v0_3 + 0x34));
    v0_4 = ((v0_4 + 0x34));
    if (v0_6) goto L_C03AD64;
    goto L_C03ADC4;
    L_C03AD9E:;
    v0_6 = buMountDisk((*(int *)((v0_3 + 0x0))));
    R0 = (v0_6);
    if ((v0_6 != 0)) goto L_C03ADBC;
    *(unsigned int *)0xC3C9FB0 = 0x1;
    goto L_C03ADC4;
}
