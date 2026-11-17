/* game/unsorted: functions 0C132570-0C1325A4, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c132570(int a4, int a5, int a6, int a7);

int FUN_0c132570(int a4, int a5, int a6, int a7)
{
    register int t1;
    int t2;
    register int t3;

    if ((*(signed char *)((a4 + 0x14))) == 0) {
        t1 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t1 + 0x1);
        if (((int)(short)(t1 + 0x1) < (int)0x6C) && (t2 = *(int *)((a4 + 0x10)), t3 = *(signed char *)((0x3715 + t2)), t3 == 24)) {
            return t3;
        }
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        return 0x14;
    }
    return FUN_0c03f346(a4, a5, a6, a7);
}
