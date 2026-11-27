/* Straight-line functions with calls and guards (batch gen_akb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c016334(int, int);
int FUN_0c187e08(int, int);
int strlen(int);
int FUN_0c01811c(int a4, int a5);

int FUN_0c01811c(int a4, int a5)
{
    int stk[3];

    register int R1;
    register int R2;
    register int R3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    v0_1 = *(int *)((int)stk + 0);
    v0_1 = a4;
    v0_0 = a5;
    v0_1 = v0_1;
    *(unsigned int *)(((int)stk + 4)) = v0_0;
    v0_3 = v0_1;
    v0_1 = FUN_0c016334(v0_3, v0_0);
    v0_2 = (v0_1);
    v0_3 = ((v0_0 + v0_3));
    v0_0 = ((((int)stk + 0) + 0x8));
    if ((v0_1 == 1)) goto L_C018144;
    if ((v0_2 == 2)) goto L_C01814E;
    L_C018172:;
    v0_2 = (0x0);
    L_C018174:;
    return v0_2;
    L_C01814E:;
    *(unsigned char *)((v0_0 + 0x0)) = (*(signed char *)((v0_3 + 0x0)));
    *(unsigned char *)((v0_0 + 0x1)) = (*(signed char *)((v0_3 + 0x1)));
    *(unsigned char *)((v0_0 + 0x2)) = 0x0;
    L_C01815A:;
    v0_1 = (FUN_0c187e08((*(int *)0xC20C908), v0_0)) == 0;
    if (v0_1) goto L_C018172;
    v0_2 = ((strlen(v0_0)));
    goto L_C018174;
    L_C018144:;
    *(unsigned char *)((v0_0 + 0x0)) = (*(signed char *)((v0_3 + 0x0)));
    *(unsigned char *)((v0_0 + 0x1)) = 0x0;
    goto L_C01815A;
}
