/* game/unsorted: functions 0C09258C-0C0925D6, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o12E_short { char p[0x12E]; short v; };
struct o374B_uchar { char p[0x374B]; unsigned char v; };
struct o3830_ushort { char p[0x3830]; unsigned short v; };
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c085204(int, float);
int FUN_0c09258c(int a4);

int FUN_0c09258c(int a4)
{
    register int t1;

    (((struct o3830_ushort *)(a4))->v) = (((((struct o12E_short *)(a4))->v)) ^ 0x40);
    (((struct o374B_uchar *)(a4))->v) = 0x1;
    t1 = *(signed char *)((a4 + 0x1));
    FUN_0c07e79c(a4, t1, 0x2, 0xA, (t1), 0x2, 0xA);
    FUN_0c085204(a4, 0.100000001f);
    *(unsigned short *)((a4 + 0x1C)) = 0xA;
    return 0xA;
}
