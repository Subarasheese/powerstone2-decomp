/* game/player: functions 0C0A96C0-0C0A9726, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o12E_short { char p[0x12E]; short v; };
struct o374B_uchar { char p[0x374B]; unsigned char v; };
struct o3830_ushort { char p[0x3830]; unsigned short v; };
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c085204(int, float);
int FUN_0c0a96c0(int a4);

int FUN_0c0a96c0(int a4)
{
    register int t9;
    register int t10;
    register int t4;
    register int t5;

    (((struct o3830_ushort *)(a4))->v) = (((((struct o12E_short *)(a4))->v)) ^ 0x800);
    (((struct o374B_uchar *)(a4))->v) = 0x1;
    t9 = 0xFFFFFFFF;
    t10 = 0x1F;
    if ((*(signed char *)((a4 + 0x371C))) != 0) {
        t9 = *(signed char *)((a4 + 0x1));
        t4 = 0x17;
        t5 = (t9);
        t10 = 0x17;
    } else {
        t4 = 0x1F;
        t5 = 0xFFFFFFFF;
    }
    FUN_0c07e79c(a4, t9, 0x2, t10, t5, 0x2, t4);
    *(unsigned short *)((a4 + 0x1C)) = 0xA;
    return FUN_0c085204(a4, 0.100000001f);
}
