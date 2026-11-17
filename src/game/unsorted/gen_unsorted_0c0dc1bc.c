/* game/unsorted: functions 0C0DC1BC-0C0DC220, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c187798(int, int, int);
int FUN_0c0dc1bc(int a4, int a5, int a6, int a7);

int FUN_0c0dc1bc(int a4, int a5, int a6, int a7)
{
    register int t0;

    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        *(volatile signed char *)((a4 + 0x2));
        FUN_0c187798(a4, a5, a6);
        *(unsigned int *)((t0 + 0x38)) = (int)(((float)(*(int *)((0xC287F10 + ((*(signed char *)((t0 + 0x2))) << 2)))) * 65536.0f) / 360.0f);
        (((struct o14_uchar *)(t0))->v) = ((*(signed char *)((t0 + 0x14))) + 0x1);
        return 0x14;
    }
    t0 = *(signed char *)0xC54098D;
    if (t0 == 3) {
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    return t0;
}
