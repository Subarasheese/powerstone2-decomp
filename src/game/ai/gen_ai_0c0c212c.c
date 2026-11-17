/* game/ai: functions 0C0C212C-0C0C213C, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o422_uchar { char p[0x422]; unsigned char v; };
struct o425_uchar { char p[0x425]; unsigned char v; };
struct o426_ushort { char p[0x426]; unsigned short v; };
int FUN_0c0c212c(int a4);

int FUN_0c0c212c(int a4)
{
    (((struct o422_uchar *)(a4))->v) = 0x0;
    (((struct o425_uchar *)(a4))->v) = 0x0;
    (((struct o426_ushort *)(a4))->v) = 0x0;
    return 0x426;
}
