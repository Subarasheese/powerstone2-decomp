/* Straight-line functions with calls and guards (batch gen_ajv): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

extern int FUN_0c03fef2();
int FUN_0c0d5188(void);
int FUN_0c040740(int a4, int a5, int a6, int a7);

int FUN_0c040740(int a4, int a5, int a6, int a7)
{

    register int R0;
    register int R1;
    register int R2;
    register int R3;
    register int R8;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    v0_4 = (0xC540978);
    v0_2 = (0x0);
    v0_3 = (0xC532498);
    v0_0 = (0xC532498);
    v0_1 = (0x3938);
    v0_5 = (0xC532498);
    v0_6 = (0x0);
    L_C04076E:;
    if (((unsigned int)v0_5 < (unsigned int)v0_4)) goto L_C040762;
    if (((int)v0_6 > (int)0x2)) goto L_C0407B4;
    v0_0 = (v0_3);
    L_C040794:;
    if (!(((unsigned int)v0_3 < (unsigned int)v0_4))) goto L_C040826;
    R0 = (0x3714);
    if (((*(signed char *)((v0_3 + 0x3714))) == 0)) goto L_C040790;
    v0_5 = ((int (*)(int, int))(FUN_0c03fef2))(v0_2, (v0_0 + 0x28));
    *(unsigned int *)((v0_0 + 0x38)) = v0_5;
    R0 = (v0_5);
    v0_2 = ((v0_2 + 0x2));
    goto L_C040790;
    L_C040826:;
    return R0;
    L_C040790:;
    v0_3 = ((v0_3 + v0_1));
    v0_0 = ((v0_0 + v0_1));
    goto L_C040794;
    L_C0407B4:;
    v0_3 = (FUN_0c0d5188()) == 0;
    if (v0_3) goto L_C04080C;
    if (((*(signed char *)0xC30541F) != 0)) goto L_C04080C;
    *(unsigned int *)(((v0_0 + 0x38) + 0x0)) = (((int (*)(int, int))(FUN_0c03fef2))(0x0, (v0_0 + 0x28)));
    *(unsigned int *)(((v0_1 + v0_0) + 0x38)) = (((int (*)(int, int))(FUN_0c03fef2))(0x2, ((v0_1 + v0_0) + 0x28)));
    *(unsigned int *)((((0x7270 + v0_0) + 0x38) + 0x0)) = (((int (*)(int, int))(FUN_0c03fef2))(0x1, ((0x7270 + v0_0) + 0x28)));
    v0_2 = ((int (*)(int, int))(FUN_0c03fef2))(0x3, ((v0_0 + 0xABA8) + 0x28));
    *(unsigned int *)(((v0_0 + 0xABA8) + 0x38)) = v0_2;
    R0 = (v0_2);
    v0_1 = ((v0_1 + v0_0));
    goto L_C040826;
    L_C04080C:;
    v0_3 = v0_2;
    v0_2 = (0x4);
    v0_3 = v0_3;
    L_C040810:;
    v0_4 = ((int (*)(int, int))(FUN_0c03fef2))(v0_3, (((v0_3 * v0_1) + v0_0) + 0x28));
    v0_5 = (int)(v0_3 + 0x1) < (int)v0_2;
    *(unsigned int *)((((v0_3 * v0_1) + v0_0) + 0x38)) = v0_4;
    R0 = (v0_4);
    v0_3 = ((v0_3 + 0x1));
    if (v0_5) goto L_C040810;
    goto L_C040826;
    L_C040762:;
    v0_7 = (*(signed char *)((v0_5 + 0x3714))) == 0;
    R0 = (0x3714);
    v0_5 = ((v0_5 + v0_1));
    if (v0_7) goto L_C04076E;
    v0_6 = ((v0_6 + 0x1));
    goto L_C04076E;
}
