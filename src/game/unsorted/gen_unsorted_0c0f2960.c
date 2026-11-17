/* game/unsorted: functions 0C0F2960-0C0F299C, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
int FUN_0c187798(int, int, int);
int FUN_0c0f2960(int a4, int a5, int a6);

int FUN_0c0f2960(int a4, int a5, int a6)
{
    register int t5;

    t5 = *(signed char *)((a4 + 0x14));
    if (t5 != 0) {
        
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        *(volatile signed char *)((a4 + 0x2));
        t5 = (FUN_0c187798(a4, a5, a6));
    }
    return t5;
}
