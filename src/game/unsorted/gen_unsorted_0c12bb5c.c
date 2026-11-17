/* game/unsorted: functions 0C12BB5C-0C12BB9C, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c12bb5c(int a4, int a5, int a6, int a7);

int FUN_0c12bb5c(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    register int t2;

    t2 = *(signed char *)((a4 + 0x14));
    if (t2 != 0) {
        if (t2 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        t2 = *(int *)((a4 + 0x10));
        if (((int)(*(signed char *)((t2 + 0x17))) <= (int)0x3) && (t0 = *(signed char *)((t2 + 0x3715)), t0 == 26)) {
            t2 = t0;
        } else {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t2 = 0x14;
        }
        return t2;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    t0 = *(int *)((a4 + 0x10));
    if (((int)(*(signed char *)((t0 + 0x17))) <= (int)0x3) && (t1 = *(signed char *)((t0 + 0x3715)), t1 == 26)) {
        t0 = t1;
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t0 = 0x14;
    }
    return t0;
}
