/* game/sound: functions 0C05A344-0C05A3E4, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c035bf0(int);
int FUN_0c05a40c(int);
int FUN_0c05a4a6(int, int);
int FUN_0c05af8a(void);
int FUN_0c05b15c(void);
int FUN_0c1803fc(int, int);
int FUN_0c18098e(int);
int FUN_0c05a344(void);
int FUN_0c05a396(int a4);

int FUN_0c05a344(void)
{
    FUN_0c05af8a();
    FUN_0c18098e(0x7);
    FUN_0c18098e(0x6);
    FUN_0c18098e(0x5);
    FUN_0c18098e(0x4);
    FUN_0c18098e(0x3);
    FUN_0c18098e(0x51);
    FUN_0c05a40c(0x0);
    FUN_0c035bf0(0xE1);
    FUN_0c1803fc(0xCB00000, 0x3);
    FUN_0c05a4a6(0x3, 0x7F);
    FUN_0c05a4a6(0x7, 0x7F);
    return FUN_0c05b15c();
}

int FUN_0c05a396(int a4)
{
    FUN_0c05af8a();
    FUN_0c18098e(0x7);
    FUN_0c18098e(0x6);
    FUN_0c18098e(0x5);
    FUN_0c18098e(0x4);
    FUN_0c18098e(0x3);
    FUN_0c035bf0((*(int *)(((a4 << 2) + 0xC1C3274))));
    FUN_0c1803fc(0xCB00000, 0x3);
    FUN_0c05a4a6(0x3, 0x7F);
    return FUN_0c05b15c();
}
