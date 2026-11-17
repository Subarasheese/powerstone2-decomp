/* game/unsorted: functions 0C100048-0C10008E, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c100048(int a4, int a5, int a6, int a7);

int FUN_0c100048(int a4, int a5, int a6, int a7)
{
    register int t14;

    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o15_uchar *)(a4))->v) = 0x0;
    }
    if ((*(signed char *)((a4 + 0x15))) == 0) {
        if (((*(int *)0xC472BA0) == (*(short *)((a4 + 0x1C)))) && (t14 = *(int *)0xC472B28, t14 == 2)) {
        } else {
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            t14 = 0x15;
        }
        return t14;
    }
    return FUN_0c03f346(a4, a5, a6, a7);
}
