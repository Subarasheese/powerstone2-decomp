/* game/player: functions 0C084B9C-0C084BBC, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o22_ushort { char p[0x22]; unsigned short v; };
struct o3715_uchar { char p[0x3715]; unsigned char v; };
int FUN_0c07e868(int, int);
int FUN_0c084b9c(int a4);

int FUN_0c084b9c(int a4)
{
    (((struct o3715_uchar *)(a4))->v) = 0x1D;
    FUN_0c07e868(a4, 0x2);
    (((struct o22_ushort *)(a4))->v) = 0x0;
    return 0x22;
}
