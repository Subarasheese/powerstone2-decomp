/* game/unsorted: functions 0C0D00E4-0C0D0110, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o24_short { char p[0x24]; short v; };
int FUN_0c0d00e4(int a4, int a5);

int FUN_0c0d00e4(int a4, int a5)
{
    register int t3;

    *(unsigned char *)((((((a5 << 1) + a5) << 2) + 0xC540FA4) + 0x0)) = 0x1;
    *(unsigned char *)((((((a5 << 1) + a5) << 2) + 0xC540FA4) + 0x1)) = (*(int *)((0xC540F18 + ((*(int *)0xC540F90) << 2))));
    *(unsigned int *)((((((a5 << 1) + a5) << 2) + 0xC540FA4) + 0x4)) = a4;
    t3 = (((struct o24_short *)(a4))->v);
    *(unsigned short *)((((((a5 << 1) + a5) << 2) + 0xC540FA4) + 0x8)) = t3;
    return t3;
}
