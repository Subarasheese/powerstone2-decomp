/* Straight-line functions with calls and guards (batch gen_abl): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c03ea04(int, int);
int FUN_0c04f148(int, int);
int FUN_0c04f29e(void);
int FUN_0c04f420(void);
int FUN_0c04f5a4(void);
int FUN_0c04fe1c(void);
int FUN_0c0506e8(void);
int FUN_0c05164e(int, int);
int FUN_0c0d04b4(int);
int FUN_0c0d5188(void);
int FUN_0c0516d8(void);

int FUN_0c0516d8(void)
{
    int stk[4];

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    FUN_0c0d04b4(0xC241478);
    v0_0 = ((FUN_0c03ea04(0x4, 0x0)));
    v0_1 = (0xC241474);
    v0_2 = (0xC1B8BCC);
    v0_3 = (0x0);
    L_C051708:;
    if (((int)v0_3 < (int)(*(int *)((v0_1 + 0x0))))) goto L_C0516F8;
    if (((*(signed char *)0xC542361) != 0)) goto L_C051734;
    FUN_0c04f29e();
    FUN_0c04f420();
    FUN_0c04f5a4();
    FUN_0c04fe1c();
    v0_0 = ((FUN_0c0506e8()));
    L_C051734:;
    v0_2 = *(signed char *)0xC5429B4;
    v0_1 = (v0_2);
    if ((v0_2 == 0)) goto L_C05174C;
    v0_0 = (v0_1);
    if ((v0_1 == 4)) goto L_C05174C;
    v0_0 = (v0_1);
    if ((v0_1 != 2)) goto L_C051768;
    L_C05174C:;
    if (((*(signed char *)0xC5429CB) == 0)) goto L_C051768;
    v0_2 = FUN_0c0d5188();
    v0_0 = (v0_2);
    if ((v0_2 != 0)) goto L_C051768;
    return FUN_0c05164e(v0_1, R5);
    L_C051768:;
    return v0_0;
    L_C0516F8:;
    v0_0 = ((FUN_0c04f148(v0_3, (*(int *)((v0_2 + (v0_3 << 2)))))));
    v0_3 = ((v0_3 + 0x1));
    goto L_C051708;
}
