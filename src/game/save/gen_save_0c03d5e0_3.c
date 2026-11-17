/* game/save: functions 0C03D5E0-0C03DFC0, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c03aeec(int);
int FUN_0c03b9d0(int);
int FUN_0c03c210(int);
int FUN_0c03df6a(int);
float FUN_0c03d860(int a4);

float FUN_0c03d860(int a4)
{

    register int R1;
    register int R2;
    register int R3;
    register int R12;
    register float F0;
    register float F4;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    v0_2 = a4;
    v0_3 = *(signed char *)((v0_2 + 0x3));
    v0_1 = (v0_3);
    v0_0 = (v0_2);
    if ((v0_3 == 0)) goto L_C03D87C;
    if ((v0_1 == 1)) goto L_C03D884;
    if ((v0_1 == 2)) goto L_C03D898;
    if ((v0_1 == 3)) goto L_C03D8DA;
    L_C03D8EE:;
    return F0;
    L_C03D8DA:;
    v0_2 = FUN_0c03c210((*(int *)((v0_0 + 0x1C))));
    v0_1 = (v0_2);
    if ((v0_2 == -1)) goto L_C03D8EE;
    *(unsigned char *)((v0_0 + 0x2)) = 0x7;
    L_C03D8EA:;
    *(unsigned char *)((v0_0 + 0x3)) = 0x0;
    v0_1 = (0x0);
    goto L_C03D8EE;
    L_C03D898:;
    v0_2 = FUN_0c03aeec(v0_2);
    *(unsigned int *)((v0_0 + 0x10)) = v0_2;
    v0_1 = (v0_2);
    if (((int)v0_2 < 0)) goto L_C03D8EE;
    if (!(((((int)0x1 << (int)(*(int *)((v0_0 + 0x1C)))) & (*(int *)((v0_0 + 0x10)))) == 0))) goto L_C03D8B0;
    v0_1 = (0x7);
    goto L_C03D8D6;
    L_C03D8B0:;
    v0_1 = *(signed char *)((v0_0 + 0x3));
    *(unsigned char *)((v0_0 + 0x3)) = (v0_1 + 0x1);
    v0_1 = ((v0_1 + 0x1));
    goto L_C03D8EE;
    L_C03D8D6:;
    *(unsigned char *)((v0_0 + 0x2)) = v0_1;
    goto L_C03D8EA;
    L_C03D884:;
    v0_2 = FUN_0c03b9d0((*(int *)((v0_0 + 0x1C))));
    v0_1 = (v0_2);
    if ((v0_2 == 0)) goto L_C03D8B0;
    if ((v0_1 == -1)) goto L_C03D8EE;
    v0_1 = (0x8);
    goto L_C03D8D6;
    L_C03D87C:;
    *(unsigned char *)((v0_0 + 0x3)) = ((*(signed char *)((v0_0 + 0x3))) + 0x1);
    FUN_0c03df6a(v0_2);
    goto L_C03D884;
}
