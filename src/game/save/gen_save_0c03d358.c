/* game/save: functions 0C03D358-0C03D5C2, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c03a6c4(void);
int FUN_0c03a70a(void);
int vmu_lcd_refresh(int);
int buUnmount(int);
int buLoadFileEx(int, int, int, int, int);
int buMountDisk(int, int, int);
int FUN_0c03d358(int a4);
int FUN_0c03d3b6(int a4);
int FUN_0c03d432(int a4);
int FUN_0c03d44a(int a4);

int FUN_0c03d358(int a4)
{
    *(unsigned char *)(((0xC54234A + ((a4 << 2) + a4)) + 0x0)) = 0x0;
    *(unsigned char *)(((0xC54234A + ((a4 << 2) + a4)) + 0x1)) = 0x0;
    *(unsigned char *)(((0xC54234A + ((a4 << 2) + a4)) + 0x2)) = 0x0;
    *(unsigned char *)(((0xC54234A + ((a4 << 2) + a4)) + 0x3)) = 0x0;
    *(unsigned char *)(((((a4 << 2) + a4) + 0xC54234A) + 0x4)) = 0x0;
    *(unsigned char *)(((0xC542367 + (a4 << 2)) + 0x0)) = 0x0;
    *(unsigned char *)(((0xC542367 + (a4 << 2)) + 0x1)) = 0x0;
    *(unsigned char *)(((0xC542367 + (a4 << 2)) + 0x2)) = 0x0;
    *(unsigned char *)((((a4 << 2) + 0xC542367) + 0x3)) = 0x0;
    return 0x0;
}

int FUN_0c03d3b6(int a4)
{
    register int t8;

    *(unsigned char *)(((0xC54234A + ((a4 << 2) + a4)) + 0x0)) = (*(signed char *)0xC3CC50B);
    *(unsigned char *)(((0xC54234A + ((a4 << 2) + a4)) + 0x1)) = (*(signed char *)0xC3CC50C);
    *(unsigned char *)(((0xC54234A + ((a4 << 2) + a4)) + 0x2)) = (*(signed char *)0xC3CC50D);
    *(unsigned char *)(((0xC54234A + ((a4 << 2) + a4)) + 0x3)) = (*(signed char *)0xC3CC50E);
    *(unsigned char *)(((((a4 << 2) + a4) + 0xC54234A) + 0x4)) = (*(signed char *)0xC3CC50F);
    *(unsigned char *)(((0xC542367 + (a4 << 2)) + 0x0)) = (*(signed char *)0xC3CC510);
    *(unsigned char *)(((0xC542367 + (a4 << 2)) + 0x1)) = (*(signed char *)0xC3CC511);
    *(unsigned char *)(((0xC542367 + (a4 << 2)) + 0x2)) = (*(signed char *)0xC3CC512);
    t8 = *(signed char *)0xC3CC513;
    *(unsigned char *)((((a4 << 2) + 0xC542367) + 0x3)) = t8;
    return t8;
}

int FUN_0c03d432(int a4)
{
    return (buLoadFileEx(a4, 0xC1B71F8, 0xC3CC420, 0x5, 0x1));
}

int FUN_0c03d44a(int a4)
{
    int stk[3];

    register int R1;
    register int R2;
    register int R3;
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
    register int v0_8;
    register int v0_9;
    v0_7 = a4;
    *(unsigned int *)(((int)stk + 0)) = (*(int *)0xC3C9FB8);
    *(unsigned int *)(((int)stk + 4)) = 0xC3C9E10;
    v0_8 = *(signed char *)0xC3C9FCE;
    v0_9 = (v0_8);
    v0_3 = (0x34);
    v0_0 = (0xC3C9FCE);
    v0_4 = (0xC3C9FB8);
    v0_1 = (0xC3C9FB0);
    v0_5 = (0xC3C9FB4);
    v0_2 = (0x1);
    v0_6 = (0xC3C9E10);
    if ((v0_8 == 0)) goto L_C03D4DC;
    if ((v0_9 == 1)) goto L_C03D4EE;
    if ((v0_9 == 2)) goto L_C03D52C;
    if ((v0_9 == 3)) goto L_C03D55E;
    if ((v0_9 != 4)) goto L_C03D48A;
    if (((*(int *)((v0_1 + 0x0))) != 0)) goto L_C03D5AC;
    FUN_0c03a6c4();
    vmu_lcd_refresh((*(int *)((v0_4 + 0x0))));
    *(unsigned char *)((v0_0 + 0x0)) = 0x0;
    *(unsigned int *)0xC4B1078 = 0x0;
    v0_9 = ((*(int *)(((((*(int *)((v0_4 + 0x0))) * v0_3) + v0_6) + 0x8))));
    L_C03D5AE:;
    return v0_9;
    L_C03D5AC:;
    v0_9 = (0xFFFFFFFF);
    goto L_C03D5AE;
    L_C03D48A:;
    goto L_C03D5AC;
    L_C03D55E:;
    if (((*(int *)((v0_1 + 0x0))) != 0)) goto L_C03D5AC;
    v0_5 = *(int *)((v0_5 + 0x0));
    v0_4 = (v0_5);
    if ((v0_5 != (*(int *)(((int)stk + 0))))) goto L_C03D580;
    v0_3 = (FUN_0c03d432((*(int *)((((v0_4 * v0_3) + (*(int *)(((int)stk + 4)))) + 0x0))))) != 0;
    if (v0_3) goto L_C03D5AC;
    *(unsigned int *)((v0_1 + 0x0)) = v0_2;
    L_C03D580:;
    *(unsigned char *)((v0_0 + 0x0)) = 0x4;
    goto L_C03D5AC;
    L_C03D52C:;
    if (((*(int *)((v0_1 + 0x0))) != 0)) goto L_C03D5AC;
    v0_4 = *(int *)(((int)stk + 0));
    v0_5 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 8)) = ((v0_4 * v0_3) + v0_5);
    v0_3 = (buMountDisk((*(int *)(((*(int *)(((int)stk + 8))) + 0x0))), 0xC3CC820, ((((*(int *)((((v0_4 * v0_3) + v0_5) + 0xC))) << 8) << 1) + 0x20))) != 0;
    if (v0_3) goto L_C03D5AC;
    *(unsigned int *)((v0_1 + 0x0)) = v0_2;
    L_C03D558:;
    *(unsigned char *)((v0_0 + 0x0)) = 0x3;
    goto L_C03D5AC;
    L_C03D4EE:;
    if (((*(int *)((v0_5 + 0x0))) == (*(int *)((v0_4 + 0x0))))) goto L_C03D558;
    if (((*(int *)((v0_5 + 0x0))) == -1)) goto L_C03D526;
    if (((*(int *)((v0_1 + 0x0))) != 0)) goto L_C03D5AC;
    v0_1 = (buUnmount((*(int *)(((((*(int *)((v0_5 + 0x0))) * v0_3) + v0_6) + 0x0))))) != 0;
    if (v0_1) goto L_C03D5AC;
    *(unsigned int *)(((((*(int *)((v0_5 + 0x0))) * v0_3) + v0_6) + 0x4)) = 0x12;
    *(unsigned int *)((v0_5 + 0x0)) = 0xFFFFFFFF;
    L_C03D526:;
    *(unsigned char *)((v0_0 + 0x0)) = 0x2;
    goto L_C03D5AC;
    L_C03D4DC:;
    *(unsigned int *)0xC4B1078 = v0_2;
    *(unsigned int *)((v0_4 + 0x0)) = v0_7;
    FUN_0c03a70a();
    vmu_lcd_refresh((*(int *)((v0_4 + 0x0))));
    *(unsigned char *)((v0_0 + 0x0)) = v0_2;
    goto L_C03D4EE;
}
