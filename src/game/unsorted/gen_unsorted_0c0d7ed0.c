/* game/unsorted: functions 0C0D7ED0-0C0D7F40, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o126_uchar { char p[0x126]; unsigned char v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c187798(int, int, int);
int FUN_0c0d7ed0(int a4, int a5, int a6, int a7);

int FUN_0c0d7ed0(int a4, int a5, int a6, int a7)
{
    register int t11;
    register int t8;

    if ((int)(*(signed char *)0xC54223C) > (int)0x1) {
        return FUN_0c03f346(a4, 0x1, a6, a7);
    }
    t11 = *(signed char *)((a4 + 0x14));
    if (t11 != 0) {
        
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        *(volatile signed char *)((a4 + 0x2));
        FUN_0c187798(a4, 0x1, a6);
        *(unsigned int *)((t8 + 0x38)) = (int)(((float)(*(int *)((0xC2876A4 + ((*(signed char *)((t8 + 0x2))) << 2)))) * 65536.0f) / 360.0f);
        (((struct o126_uchar *)(t8))->v) = 0x2;
        t11 = 0x126;
    }
    return t11;
}
