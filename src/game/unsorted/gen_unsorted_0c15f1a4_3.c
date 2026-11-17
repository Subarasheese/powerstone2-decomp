/* game/unsorted: functions 0C15F1A4-0C15FCF8, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o3818_short { char p[0x3818]; short v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
extern int FUN_0c03f346();
extern int FUN_0c187798();
int FUN_0c15fb04(int a4, int a5, int a6, int a7);

int FUN_0c15fb04(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;

    t6 = *(signed char *)((a4 + 0x14));
    if (t6 != 0) {
        if (t6 != 1) {
            return ((int (*)(int, int, int, int))(FUN_0c03f346))(a4, a5, a6, a7);
        }
        *(volatile int *)((a4 + 0x10));
        t6 = ((int (*)(int, int, int))(FUN_0c187798))(a4, a5, a6);
        *(volatile int *)((t0 + 0x10));
        t6 = ((int (*)(int))(FUN_0c187798))(t0);
        *(volatile int *)((t1 + 0x10));
        t0 = ((int (*)(int))(FUN_0c187798))(t1);
        if ((unsigned short)((((struct o3818_short *)((*(int *)((t2 + 0x10)))))->v)) != 0x45F) {
            (((struct o14_uchar *)(t2))->v) = ((*(signed char *)((t2 + 0x14))) + 0x1);
            return ((int (*)(int))(FUN_0c03f346))(t2);
        }
        return 0x3818;
    }
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    *(volatile int *)((a4 + 0x10));
    t0 = ((int (*)(int, int, int))(FUN_0c187798))(a4, a5, a6);
    *(volatile int *)((t3 + 0x10));
    t0 = ((int (*)(int))(FUN_0c187798))(t3);
    *(volatile int *)((t4 + 0x10));
    t0 = ((int (*)(int))(FUN_0c187798))(t4);
    if ((unsigned short)((((struct o3818_short *)((*(int *)((t5 + 0x10)))))->v)) != 0x45F) {
        (((struct o14_uchar *)(t5))->v) = ((*(signed char *)((t5 + 0x14))) + 0x1);
        return ((int (*)(int))(FUN_0c03f346))(t5);
    }
    return 0x3818;
}
