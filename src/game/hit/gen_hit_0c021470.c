/* game/hit: functions 0C021470-0C02149C, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
int FUN_0c01fce0(int, int, int, int);
int FUN_0c021470(int a4, int a5, int a6, int a7);

int FUN_0c021470(int a4, int a5, int a6, int a7)
{
    FUN_0c01fce0(a4, a5, a6, a7);
    (((struct o1_uchar *)0xC3054C5)->v) = 0x0;
    (((struct o0_uchar *)0xC3054C5)->v) = 0x0;
    *(unsigned char *)0xC30AF8A = 0x0;
    *(unsigned char *)0xC309860 = ((*(signed char *)0xC309860) + 0x1);
    *(unsigned char *)0xC30AA33 = 0x0;
    *(unsigned short *)0xC305412 = 0xE10;
    return 0xC30AA33;
}
