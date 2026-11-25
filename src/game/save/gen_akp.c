/* Straight-line functions with calls and guards (batch gen_akp): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c03add8(void);
int FUN_0c03ae7a(void);
int FUN_0c03aeec(void);
int FUN_0c03b05a(void);
int FUN_0c03b14a(void);
int FUN_0c03b1c8(void);
int FUN_0c03da62(int);
int FUN_0c03da82(int a4, int a5, int a6, int a7);

int FUN_0c03da82(int a4, int a5, int a6, int a7)
{

    register int R1;
    register int R2;
    register int R3;
    register int R10;
    register int R12;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    v0_2 = a4;
    v0_0 = FUN_0c03add8();
    *(unsigned int *)((v0_2 + 0x4)) = v0_0;
    v0_1 = (0xC3DC240);
    v0_2 = (v0_2);
    if (((int)v0_0 >= 0)) goto L_C03DAB0;
    v0_0 = (0xFFFFFFFF);
    L_C03DB06:;
    return v0_0;
    L_C03DAB0:;
    if (((*(int *)((v0_2 + 0x4))) == 0)) goto L_C03DAF2;
    *(unsigned int *)((v0_2 + 0xC)) = (FUN_0c03ae7a());
    *(unsigned int *)((v0_2 + 0x8)) = (FUN_0c03b14a());
    *(unsigned int *)((v0_2 + 0x10)) = (FUN_0c03aeec());
    *(unsigned int *)((v0_2 + 0x18)) = (FUN_0c03b05a());
    *(unsigned int *)((v0_2 + 0x14)) = (FUN_0c03b1c8());
    if (((*(int *)((v0_2 + 0xC))) == 0)) goto L_C03DAE6;
    FUN_0c03da62(v0_2);
    *(unsigned char *)((v0_1 + 0x2)) = 0x6;
    L_C03DB00:;
    *(unsigned char *)((v0_1 + 0x3)) = 0x0;
    v0_0 = (0x1);
    goto L_C03DB06;
    L_C03DAE6:;
    if (((*(int *)((v0_2 + 0x8))) == 0)) goto L_C03DAF2;
    *(unsigned char *)((v0_1 + 0x2)) = 0x8;
    goto L_C03DB00;
    L_C03DAF2:;
    if (((*(signed char *)((v0_2 + 0x2))) != 4)) goto L_C03DAFC;
    v0_0 = (0x0);
    goto L_C03DB06;
    L_C03DAFC:;
    *(unsigned char *)((v0_1 + 0x2)) = 0x4;
    goto L_C03DB00;
}
