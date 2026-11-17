/* game/effect: functions 0C03DFE4-0C03E5AE, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c03dfe4(void);
int thunk_FUN_0c03e08c(int a4, int a5, int a6, int a7);
int FUN_0c03e08c(int a4, int a5, int a6, int a7);

int FUN_0c03dfe4(void)
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
    v0_4 = (0x0);
    v0_0 = (0xC5421F8);
    v0_1 = (0x0);
    v0_2 = (0x6);
    v0_3 = (0x0);
    L_C03DFF2:;
    if (((*(signed char *)((((0x184 + v0_0) + v0_1) + 0x0))) == 0)) goto L_C03E026;
    v0_6 = (int)((unsigned int)(*(int *)((((v0_1 << 2) + (0xA4 + v0_0)) + 0x0))) % (unsigned int)0x64);
    v0_5 = (v0_6);
    if ((v0_6 != 0)) goto L_C03E026;
    v0_6 = *(int *)((((v0_1 << 2) + (0xA4 + v0_0)) + 0x0));
    v0_5 = (v0_6);
    if (((unsigned int)v0_6 > (unsigned int)0xC350)) goto L_C03E02C;
    L_C03E026:;
    v0_5 = (int)(v0_1 + 0x1) < (int)v0_2;
    v0_1 = ((v0_1 + 0x1));
    if (v0_5) goto L_C03DFF2;
    L_C03E02C:;
    v0_5 = (int)v0_1 >= (int)0x5;
    v0_1 = (v0_4);
    if (v0_5) goto L_C03E036;
    v0_3 = (0x1);
    L_C03E036:;
    if (((*(signed char *)((((0x18E + v0_0) + v0_1) + 0x0))) == 0)) goto L_C03E06A;
    v0_4 = (int)((unsigned int)(*(int *)((((v0_1 << 2) + (0x100 + v0_0)) + 0x0))) % (unsigned int)0x64);
    v0_5 = (v0_4);
    if ((v0_4 != 0)) goto L_C03E06A;
    v0_4 = *(int *)((((v0_1 << 2) + (0x100 + v0_0)) + 0x0));
    v0_5 = (v0_4);
    if (((unsigned int)v0_4 > (unsigned int)0xC350)) goto L_C03E070;
    L_C03E06A:;
    v0_4 = (int)(v0_1 + 0x1) < (int)v0_2;
    v0_1 = ((v0_1 + 0x1));
    if (v0_4) goto L_C03E036;
    L_C03E070:;
    if (((int)v0_1 >= (int)0x5)) goto L_C03E078;
    v0_3 = (0x1);
    L_C03E078:;
    return v0_3;
}

int thunk_FUN_0c03e08c(int a4, int a5, int a6, int a7)
{
    return FUN_0c03e08c(a4, a5, a6, a7);
}

int FUN_0c03e08c(int a4, int a5, int a6, int a7)
{
    if ((*(signed char *)((a5 + 0x0))) == 0) {
        return a4;
    }
    return ((int (*)(int, int, int, int))(0xC03E086))(a4, a5, a6, a7);
}
