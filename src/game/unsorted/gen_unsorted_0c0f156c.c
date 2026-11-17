/* game/unsorted: functions 0C0F156C-0C0F158E, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
int FUN_0c0f156c(int a4);

int FUN_0c0f156c(int a4)
{
    register int t3;

    t3 = *(signed char *)((a4 + 0x14));
    if (t3 != 0) {
        
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        t3 = 0xA8;
    }
    return t3;
}
