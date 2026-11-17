/* game/network: functions 0C02396C-0C023B30, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c013f2e(void);
int FUN_0c01a9c0(void);
int FUN_0c01c714(int, int, int);
int FUN_0c01cd2c(int);
int FUN_0c021f28(void);
int FUN_0c022050(void);
int FUN_0c0220c4(int, int, int);
int FUN_0c0221b0(void);
int FUN_0c0222a4(int, int, int);
int FUN_0c02a94e(void);
int FUN_0c05aab6(int, int);
int FUN_0c1864e0(int, int, int);
int FUN_0c02396c(void);
int FUN_0c0239bc(int a4, int a5, int a6);

int FUN_0c02396c(void)
{
    int stk[3];
    register int t1;
    register int t6;
    register int t9;

    FUN_0c013f2e();
    t1 = *(short *)0xC30EF6C;
    *(unsigned short *)0xC30EF6C = (t1 - 1);
    if ((int)(short)(t1 - 1) < (int)0x2) {
        *(unsigned char *)0xC30985A = ((*(signed char *)0xC30985A) + 0x1);
    }
    t6 = FUN_0c022050();
    t9 = t6;
    if (t6 != 0) {
        FUN_0c0220c4(((int)stk + 0), (((int)stk + 0) + 0x4), (((int)stk + 0) + 0x8));
        t9 = (FUN_0c0222a4(((int)stk + 0), (((int)stk + 0) + 0x4), (((int)stk + 0) + 0x8)));
    }
    return t9;
}

int FUN_0c0239bc(int a4, int a5, int a6)
{
    int stk[3];

    register int R1;
    register int R2;
    register int R3;
    register int R8;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    v0_3 = a4;
    v0_1 = a5;
    v0_0 = a6;
    if (((*(int *)0xC30A3F8) == 0)) goto L_C0239DC;
    v0_2 = ((FUN_0c02a94e()));
    L_C023B20:;
    return v0_2;
    L_C0239DC:;
    *(unsigned short *)0xC30EF6C = 0x0;
    FUN_0c013f2e();
    v0_1 = (FUN_0c022050()) == 0;
    v0_0 = (0x0);
    if (v0_1) goto L_C023AA2;
    FUN_0c0220c4((((int)stk + 0) + 0x8), ((int)stk + 0), (((int)stk + 0) + 0x4));
    v0_1 = *(signed char *)(((int)stk + 8));
    v0_3 = (v0_1);
    if ((v0_1 != 98)) goto L_C023A3C;
    if (((*(signed char *)(((int)stk + 4))) != 5)) goto L_C023A3C;
    FUN_0c1864e0((*(int *)0xC309994), ((int)stk + 0), 0x1);
    v0_1 = (0xC309BEC);
    v0_2 = (0xC309994);
    v0_3 = (0xC1864E0);
    v0_3 = (v0_0);
    L_C023A2E:;
    if (((int)v0_3 < (int)(unsigned char)(*(signed char *)(((int)stk + 0))))) goto L_C023A22;
    *(unsigned char *)((v0_3 + 0xC309BEC)) = v0_0;
    L_C023AA2:;
    v0_1 = FUN_0c021f28();
    v0_2 = (v0_1);
    if ((v0_1 != 0)) goto L_C023B20;
    v0_3 = (0xC30A51C);
    if (((*(short *)0xC30A51C) != 2)) goto L_C023AB6;
    *(unsigned short *)((v0_3 + 0x0)) = v0_0;
    L_C023AB6:;
    v0_1 = (short)(FUN_0c01cd2c(0x101)) == 0;
    if (v0_1) goto L_C023AE4;
    if (((*(short *)0xC30A51C) != 0)) goto L_C023AE4;
    *(unsigned char *)0xC30985A = ((*(signed char *)0xC30985A) + 0x1);
    *(unsigned short *)0xC30EF6C = v0_0;
    v0_2 = ((FUN_0c05aab6(0x0, 0x3)));
    goto L_C023B20;
    L_C023AE4:;
    v0_2 = *(signed char *)0xC305414;
    FUN_0c01c714(0xC305414, 0x4, 0x2);
    v0_0 = (v0_2);
    v0_3 = (0xC305414);
    v0_1 = (0xC30541D);
    if ((v0_2 == (*(signed char *)0xC305414))) goto L_C023AFC;
    *(unsigned char *)((v0_1 + 0x0)) = v0_0;
    L_C023AFC:;
    v0_0 = *(int *)0xC5426EC;
    v0_2 = (v0_0);
    if ((v0_0 == 1)) goto L_C023B20;
    v0_0 = *(signed char *)0xC305414;
    v0_2 = (v0_0);
    if ((v0_0 != 2)) goto L_C023B20;
    v0_3 = (0xC305414);
    if (((int)(*(signed char *)((v0_1 + 0x0))) >= (int)0x2)) goto L_C023B1C;
    *(unsigned char *)((v0_3 + 0x0)) = 0x3;
    goto L_C023B20;
    L_C023B1C:;
    *(unsigned char *)((v0_3 + 0x0)) = 0x1;
    v0_2 = (0x1);
    goto L_C023B20;
    L_C023A22:;
    FUN_0c1864e0((*(int *)((v0_2 + 0x0))), (v0_3 + v0_1), 0x1);
    v0_3 = ((v0_3 + 0x1));
    goto L_C023A2E;
    L_C023A3C:;
    if ((v0_3 != 101)) goto L_C023A94;
    if (((*(signed char *)(((int)stk + 4))) != 6)) goto L_C023A94;
    FUN_0c0221b0();
    *(unsigned int *)0xC30A3F8 = 0x1;
    v0_2 = ((FUN_0c01a9c0()));
    goto L_C023B20;
    L_C023A94:;
    FUN_0c0222a4((((int)stk + 0) + 0x8), ((int)stk + 0), (((int)stk + 0) + 0x4));
    goto L_C023AA2;
}
