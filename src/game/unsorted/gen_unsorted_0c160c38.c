/* game/unsorted: functions 0C160C38-0C160C66, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o20_ushort { char p[0x20]; unsigned short v; };
struct o24_short { char p[0x24]; short v; };
int FUN_0c03f444(int, int, int);
int FUN_0c160c38(int a4);

int FUN_0c160c38(int a4)
{
    register int t0;
    register int t3;

    t0 = FUN_0c03f444(0x5, 0x0, 0x1);
    t3 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned int *)((t0 + 0x4)) = 0xC160A42;
        *(unsigned int *)((t0 + 0x10)) = a4;
        (((struct o20_ushort *)(t0))->v) = ((((struct o24_short *)(a4))->v));
        t3 = 0x20;
    }
    return t3;
}
