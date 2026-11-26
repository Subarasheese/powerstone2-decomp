/* game/save: functions 0C03D254-0C03D314, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c187a88(int, int, int);
int memset(int, int, int);
int strcpy(int, int);
int syRtcGetDate(int);
int buSaveFile(int, int, int, int, int, int);
int buMakeBackupFileImage(int, int);
int FUN_0c03d254(void);
int FUN_0c03d2bc(int a4);

int FUN_0c03d254(void)
{
    int stk[24];

    memset(((int)stk + 0), 0x0, 0x60);
    strcpy(((int)stk + 0), 0xC20FF94);
    strcpy((((int)stk + 0) + 0x12), 0xC20FFA6);
    FUN_0c187a88((((int)stk + 0) + 0x34), 0xC20FFC8, 0x10);
    *(unsigned int *)(((int)stk + 68)) = 0xC20FFD8;
    *(unsigned int *)(((int)stk + 72)) = 0xC20FFF8;
    *(unsigned short *)(((int)stk + 76)) = 0x1;
    *(unsigned short *)(((int)stk + 78)) = 0x1;
    *(unsigned int *)(((int)stk + 80)) = 0x0;
    *(unsigned short *)(((int)stk + 84)) = 0x0;
    *(unsigned int *)(((int)stk + 88)) = 0xC3CB888;
    *(unsigned int *)(((int)stk + 92)) = 0x198;
    return (buMakeBackupFileImage(0xC3DBC40, ((int)stk + 0)));
}

int FUN_0c03d2bc(int a4)
{
    int stk[9];

    *(unsigned int *)(((int)stk + 8)) = a4;
    *(unsigned int *)(((int)stk + 12)) = (FUN_0c03d254());
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
    return (buSaveFile((*(int *)(((int)stk + 8))), 0xC1B7228, 0xC3DBC40, (*(int *)(((int)stk + 12))), (((int)stk + 4) + 0xC), 0x80000000));
}
