/* game/unsorted: functions 0C0F79AC-0C0F7A0E, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03f346(int, int);
int FUN_0c0cff96(int, int);
int FUN_0c0f79ac(int a4);

int FUN_0c0f79ac(int a4)
{
    register int t8;
    register int t14;

    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    FUN_0c0cff96((*(int *)((((((struct oC4_int *)(a4))->v)) + 0x8))), 0xC1FB2A8);
    t8 = *(signed char *)((a4 + 0x15));
    if (t8 == 0) {
        t14 = t8;
        if ((int)(unsigned char)(*(signed char *)0xC541F43) >= (int)0xB) {
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            t14 = *(short *)0xC541F4E;
            *(unsigned short *)((a4 + 0x1C)) = t14;
        }
        return t14;
    }
    if ((int)(unsigned char)(*(signed char *)0xC541F43) >= (int)0xC) {
        return FUN_0c03f346(a4, 0xC541F3C);
    }
    return t8;
}
