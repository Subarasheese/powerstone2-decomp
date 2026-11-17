/* game/menu/option: functions 0C02AAE4-0C02AB16, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c018e74(int);
int FUN_0c01cb7c(void);
int FUN_0c01e9e4(void);
int FUN_0c0573c0(int, int, int);
int FUN_0c02aae4(void);

int FUN_0c02aae4(void)
{
    *(unsigned char *)0xC30985A = ((*(signed char *)0xC30985A) + 0x1);
    *(unsigned short *)0xC30540C = 0x0;
    FUN_0c01e9e4();
    FUN_0c01cb7c();
    FUN_0c018e74(0x4A);
    *(unsigned short *)0xC30EF6C = 0x14;
    return FUN_0c0573c0(0xFF000000, 0x0, 0x14);
}
