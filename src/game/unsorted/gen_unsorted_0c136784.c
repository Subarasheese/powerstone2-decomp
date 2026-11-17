/* game/unsorted: functions 0C136784-0C1367B8, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o371E_uchar { char p[0x371E]; unsigned char v; };
int FUN_0c0676ce(int);
int FUN_0c136784(int a4);

int FUN_0c136784(int a4)
{
    register int t1;

    t1 = (int)((unsigned int)(*(int *)0xC542260) % (unsigned int)0x6);
    if (t1 == 0) {
        (((struct o371E_uchar *)(a4))->v) = (*(signed char *)((a4 + 0x1)));
    } else {
        (((struct o371E_uchar *)(a4))->v) = (*(signed char *)((t1 + 0xC2A16BC)));
    }
    return FUN_0c0676ce((*(signed char *)((a4 + 0x1))));
}
