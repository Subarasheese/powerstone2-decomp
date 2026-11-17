/* game/player: functions 0C09F450-0C09F494, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o12E_short { char p[0x12E]; short v; };
struct o374B_uchar { char p[0x374B]; unsigned char v; };
struct o3830_ushort { char p[0x3830]; unsigned short v; };
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c085204(int, float);
int FUN_0c09f450(int a4);

int FUN_0c09f450(int a4)
{
    (((struct o3830_ushort *)(a4))->v) = (((((struct o12E_short *)(a4))->v)) ^ 0x800);
    (((struct o374B_uchar *)(a4))->v) = 0x1;
    FUN_0c07e79c(a4, 0xFFFFFFFF, 0x2, 0x1F, 0xFFFFFFFF, 0x2, 0x1F);
    *(unsigned short *)((a4 + 0x1C)) = 0xA;
    return FUN_0c085204(a4, (*(float *)0xC09F558));
}
