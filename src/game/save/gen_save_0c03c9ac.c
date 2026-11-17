/* game/save: functions 0C03C9AC-0C03CD56, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c03a6c4(void);
int FUN_0c03a70a(void);
int vmu_lcd_refresh(int);
int FUN_0c03e536(int);
int FUN_0c187a88(int, int, int);
int memset(int, int, int);
int strcpy(int, int);
int syRtcGetDate(int);
int buUnmount(int);
int buDeleteFile(int);
int buSaveFile(int, int, int, int, int, int);
int buMountDisk(int, int, int);
int FUN_0c2b2fc4(int, int);
int FUN_0c03c9ac(void);
int FUN_0c03c9c8(void);
int FUN_0c03ca30(int a4);
int FUN_0c03cacc(int a4);
int FUN_0c03cbf2(int a4);
int FUN_0c03cbfa(int a4);

int FUN_0c03c9ac(void)
{
    memset(0xC3CB108, 0x0, 0x780);
    return FUN_0c03e536(0xC3CB148);
}

int FUN_0c03c9c8(void)
{
    int stk[24];

    memset(((int)stk + 0), 0x0, 0x60);
    strcpy(((int)stk + 0), 0xC20FD30);
    strcpy((((int)stk + 0) + 0x12), 0xC20FD42);
    FUN_0c187a88((((int)stk + 0) + 0x34), 0xC20FD64, 0x10);
    *(unsigned int *)(((int)stk + 68)) = 0xC20FD74;
    *(unsigned int *)(((int)stk + 72)) = 0xC20FD94;
    *(unsigned short *)(((int)stk + 76)) = 0x1;
    *(unsigned short *)(((int)stk + 78)) = 0x1;
    *(unsigned int *)(((int)stk + 80)) = 0x0;
    *(unsigned short *)(((int)stk + 84)) = 0x0;
    *(unsigned int *)(((int)stk + 88)) = 0xC3CB108;
    *(unsigned int *)(((int)stk + 92)) = 0x780;
    return (FUN_0c2b2fc4(0xC3CBA20, ((int)stk + 0)));
}

int FUN_0c03ca30(int a4)
{
    int stk[9];

    *(unsigned int *)(((int)stk + 8)) = a4;
    *(unsigned int *)(((int)stk + 12)) = (FUN_0c03c9c8());
    syRtcGetDate((((int)stk + 8) + 0x10));
    *(unsigned short *)(((int)stk + 16)) = (*(short *)(((int)stk + 24)));
    *(unsigned char *)(((int)stk + 18)) = (*(signed char *)(((int)stk + 26)));
    *(unsigned char *)(((int)stk + 19)) = (*(signed char *)(((int)stk + 27)));
    *(unsigned char *)(((int)stk + 20)) = (*(signed char *)(((int)stk + 28)));
    *(unsigned char *)(((int)stk + 21)) = (*(signed char *)(((int)stk + 29)));
    *(unsigned char *)(((int)stk + 22)) = (*(signed char *)(((int)stk + 30)));
    *(unsigned char *)(((int)stk + 23)) = (*(signed char *)(((int)stk + 31)));
    *(int *)((int)stk + 4) = 0x80000000;
    *(int *)((int)stk + 0) = (((int)stk + 4) + 0xC);
    return (buSaveFile((*(int *)(((int)stk + 8))), 0xC1B7218, 0xC3CBA20, (*(int *)(((int)stk + 12))), (((int)stk + 4) + 0xC), 0x80000000));
}

int FUN_0c03cacc(int a4)
{
    int stk[2];

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
    v0_6 = a4;
    *(unsigned int *)(((int)stk + 0)) = (*(int *)0xC3C9FB8);
    v0_7 = *(signed char *)0xC3C9FCE;
    v0_8 = (v0_7);
    v0_3 = (0xC3C9E10);
    v0_4 = (0x34);
    v0_0 = (0xC3C9FCE);
    v0_1 = (0xC3C9FB0);
    v0_5 = (0xC3C9FB4);
    v0_2 = (0x1);
    v0_9 = (0xC3C9FB8);
    if ((v0_7 == 0)) goto L_C03CB0A;
    if ((v0_8 == 1)) goto L_C03CB1C;
    if ((v0_8 == 2)) goto L_C03CB5A;
    if ((v0_8 == 3)) goto L_C03CB8A;
    if ((v0_8 == 4)) goto L_C03CBB6;
    L_C03CBDC:;
    v0_8 = (0xFFFFFFFF);
    L_C03CBDE:;
    return v0_8;
    L_C03CBB6:;
    if (((*(int *)((v0_1 + 0x0))) != 0)) goto L_C03CBDC;
    FUN_0c03a6c4();
    vmu_lcd_refresh((*(int *)((v0_9 + 0x0))));
    *(unsigned char *)((v0_0 + 0x0)) = 0x0;
    *(unsigned int *)0xC4B1078 = 0x0;
    v0_8 = ((*(int *)(((((*(int *)((v0_9 + 0x0))) * v0_4) + v0_3) + 0x8))));
    goto L_C03CBDE;
    L_C03CB8A:;
    if (((*(int *)((v0_1 + 0x0))) != 0)) goto L_C03CBDC;
    if (((*(int *)((v0_5 + 0x0))) != (*(int *)(((int)stk + 0))))) goto L_C03CBB0;
    FUN_0c03c9ac();
    v0_3 = (FUN_0c03ca30((*(int *)(((((*(int *)((v0_5 + 0x0))) * v0_4) + v0_3) + 0x0))))) != 0;
    if (v0_3) goto L_C03CBDC;
    *(unsigned int *)((v0_1 + 0x0)) = v0_2;
    L_C03CBB0:;
    *(unsigned char *)((v0_0 + 0x0)) = 0x4;
    goto L_C03CBDC;
    L_C03CB5A:;
    if (((*(int *)((v0_1 + 0x0))) != 0)) goto L_C03CBDC;
    v0_5 = *(int *)(((int)stk + 0));
    *(unsigned int *)(((int)stk + 4)) = ((v0_5 * v0_4) + v0_3);
    v0_3 = (buMountDisk((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))), 0xC3CC820, ((((*(int *)((((v0_5 * v0_4) + v0_3) + 0xC))) << 8) << 1) + 0x20))) != 0;
    if (v0_3) goto L_C03CBDC;
    *(unsigned int *)((v0_1 + 0x0)) = v0_2;
    L_C03CB84:;
    *(unsigned char *)((v0_0 + 0x0)) = 0x3;
    goto L_C03CBDC;
    L_C03CB1C:;
    if (((*(int *)((v0_5 + 0x0))) == (*(int *)((v0_9 + 0x0))))) goto L_C03CB84;
    if (((*(int *)((v0_5 + 0x0))) == -1)) goto L_C03CB54;
    if (((*(int *)((v0_1 + 0x0))) != 0)) goto L_C03CBDC;
    v0_1 = (buUnmount((*(int *)(((((*(int *)((v0_5 + 0x0))) * v0_4) + v0_3) + 0x0))))) != 0;
    if (v0_1) goto L_C03CBDC;
    *(unsigned int *)(((((*(int *)((v0_5 + 0x0))) * v0_4) + v0_3) + 0x4)) = 0x12;
    *(unsigned int *)((v0_5 + 0x0)) = 0xFFFFFFFF;
    L_C03CB54:;
    *(unsigned char *)((v0_0 + 0x0)) = 0x2;
    goto L_C03CBDC;
    L_C03CB0A:;
    *(unsigned int *)0xC4B1078 = v0_2;
    *(unsigned int *)((v0_9 + 0x0)) = v0_6;
    FUN_0c03a70a();
    vmu_lcd_refresh((*(int *)((v0_9 + 0x0))));
    *(unsigned char *)((v0_0 + 0x0)) = v0_2;
    goto L_C03CB1C;
}

int FUN_0c03cbf2(int a4)
{
    return buDeleteFile(a4);
}

int FUN_0c03cbfa(int a4)
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
    v0_4 = (0xC3C9FB8);
    v0_5 = (0xC3C9FB4);
    v0_0 = (0xC3C9FCE);
    v0_1 = (0xC3C9FB0);
    v0_2 = (0x1);
    v0_6 = (0xC3C9E10);
    if ((v0_8 == 0)) goto L_C03CC3A;
    if ((v0_9 == 1)) goto L_C03CC4C;
    if ((v0_9 == 2)) goto L_C03CC8A;
    if ((v0_9 == 3)) goto L_C03CCF4;
    if ((v0_9 == 4)) goto L_C03CD1A;
    L_C03CD40:;
    v0_9 = (0xFFFFFFFF);
    L_C03CD42:;
    return v0_9;
    L_C03CD1A:;
    if (((*(int *)((v0_1 + 0x0))) != 0)) goto L_C03CD40;
    FUN_0c03a6c4();
    vmu_lcd_refresh((*(int *)((v0_4 + 0x0))));
    *(unsigned char *)((v0_0 + 0x0)) = 0x0;
    *(unsigned int *)0xC4B1078 = 0x0;
    v0_9 = ((*(int *)(((((*(int *)((v0_4 + 0x0))) * v0_3) + v0_6) + 0x8))));
    goto L_C03CD42;
    L_C03CCF4:;
    if (((*(int *)((v0_1 + 0x0))) != 0)) goto L_C03CD40;
    v0_5 = *(int *)((v0_5 + 0x0));
    v0_4 = (v0_5);
    if ((v0_5 != (*(int *)(((int)stk + 0))))) goto L_C03CD14;
    v0_3 = (FUN_0c03cbf2((*(int *)((((v0_4 * v0_3) + (*(int *)(((int)stk + 4)))) + 0x0))))) != 0;
    if (v0_3) goto L_C03CD40;
    *(unsigned int *)((v0_1 + 0x0)) = v0_2;
    L_C03CD14:;
    *(unsigned char *)((v0_0 + 0x0)) = 0x4;
    goto L_C03CD40;
    L_C03CC8A:;
    if (((*(int *)((v0_1 + 0x0))) != 0)) goto L_C03CD40;
    v0_4 = *(int *)(((int)stk + 0));
    v0_5 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 8)) = ((v0_4 * v0_3) + v0_5);
    v0_3 = (buMountDisk((*(int *)(((*(int *)(((int)stk + 8))) + 0x0))), 0xC3CC820, ((((*(int *)((((v0_4 * v0_3) + v0_5) + 0xC))) << 8) << 1) + 0x20))) != 0;
    if (v0_3) goto L_C03CD40;
    *(unsigned int *)((v0_1 + 0x0)) = v0_2;
    L_C03CCB6:;
    *(unsigned char *)((v0_0 + 0x0)) = 0x3;
    goto L_C03CD40;
    L_C03CC4C:;
    if (((*(int *)((v0_5 + 0x0))) == (*(int *)((v0_4 + 0x0))))) goto L_C03CCB6;
    if (((*(int *)((v0_5 + 0x0))) == -1)) goto L_C03CC84;
    if (((*(int *)((v0_1 + 0x0))) != 0)) goto L_C03CD40;
    v0_1 = (buUnmount((*(int *)(((((*(int *)((v0_5 + 0x0))) * v0_3) + v0_6) + 0x0))))) != 0;
    if (v0_1) goto L_C03CD40;
    *(unsigned int *)(((((*(int *)((v0_5 + 0x0))) * v0_3) + v0_6) + 0x4)) = 0x12;
    *(unsigned int *)((v0_5 + 0x0)) = 0xFFFFFFFF;
    L_C03CC84:;
    *(unsigned char *)((v0_0 + 0x0)) = 0x2;
    goto L_C03CD40;
    L_C03CC3A:;
    *(unsigned int *)0xC4B1078 = v0_2;
    *(unsigned int *)((v0_4 + 0x0)) = v0_7;
    FUN_0c03a70a();
    vmu_lcd_refresh((*(int *)((v0_4 + 0x0))));
    *(unsigned char *)((v0_0 + 0x0)) = v0_2;
    goto L_C03CC4C;
}
