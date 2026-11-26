/* Straight-line functions with calls and guards (batch gen_ags): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c05b052(int, int);
int FUN_0c05b0b4(int, int);
int FUN_0c041a04(void);

int FUN_0c041a04(void)
{

    register int R2;
    register int R3;
    register int R5;
    register int R6;
    register int R12;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    v0_2 = *(signed char *)0xC5421FB;
    v0_0 = (v0_2);
    v0_1 = (0xC5421F8);
    v0_3 = (0xC5421FB);
    if ((v0_2 == 0)) goto L_C041A28;
    if ((v0_0 == 1)) goto L_C041A5C;
    L_C041A76:;
    return v0_0;
    L_C041A5C:;
    v0_2 = *(int *)((v0_1 + 0x18));
    *(unsigned int *)((v0_1 + 0x18)) = (v0_2 - 1);
    if (((int)(v0_2 - 1) > 0)) goto L_C041A76;
    *(unsigned char *)((v0_1 + 0x1)) = ((*(signed char *)((v0_1 + 0x1))) + 0x1);
    *(unsigned char *)((v0_1 + 0x2)) = 0x0;
    *(unsigned char *)((v0_1 + 0x3)) = 0x0;
    v0_0 = (0x0);
    goto L_C041A76;
    L_C041A28:;
    *(unsigned char *)((v0_3 + 0x0)) = ((*(signed char *)((v0_3 + 0x0))) + 0x1);
    *(unsigned int *)((v0_1 + 0x18)) = 0x3C;
    v0_2 = *(signed char *)(((v0_1 + 0x41) + 0x0));
    v0_0 = ((v0_2 & 0xF0));
    if (((v0_2 & 0xF0) == 32)) goto L_C041A48;
    if ((v0_0 == 64)) goto L_C041A48;
    v0_0 = ((FUN_0c05b0b4(0x3C, 0x0)));
    goto L_C041A5C;
    L_C041A48:;
    v0_0 = ((FUN_0c05b052(0x3C, 0x0)));
    goto L_C041A5C;
}
