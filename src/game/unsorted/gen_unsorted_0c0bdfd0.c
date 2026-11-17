/* game/unsorted: functions 0C0BDFD0-0C0BDFE8, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o3824_short { char p[0x3824]; short v; };
int FUN_0c0bdfd0(int a4);

int FUN_0c0bdfd0(int a4)
{
    register int t1;

    t1 = (((struct o3824_short *)(a4))->v);
    *(unsigned short *)(((0xC471AEE + ((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264)) + 0x0)) = t1;
    return t1;
}
