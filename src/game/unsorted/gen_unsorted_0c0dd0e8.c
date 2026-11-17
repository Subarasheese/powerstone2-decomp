/* game/unsorted: functions 0C0DD0E8-0C0DD194, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oC0_int { char p[0xC0]; int v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c0d04c4(int, int);
int FUN_0c0dd0e8(int a4, int a5, int a6, int a7);

int FUN_0c0dd0e8(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    register int t2;
    register int t3;

    if ((*(signed char *)0xC54223C) != 0) {
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    t2 = *(signed char *)((a4 + 0x14));
    if (t2 != 0) {
        t3 = t2;
        if (t2 == 1) {
            if (((*(signed char *)((a4 + 0x15))) == 0) && (t0 = *(signed char *)0xC54098D, (int)t0 >= (int)0x4)) {
                *(unsigned short *)(((0x4 + (0x12A + a4)) + 0x0)) = 0x0;
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            }
            t3 = 0x15;
        }
        t0 = t3;
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o15_uchar *)(a4))->v) = 0x0;
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        FUN_0c0d04c4((0xAC + a4), (a4 + 0x34));
        t2 = 0x0;
        for (;;) {
            if ((int)t2 >= (int)((((struct oC0_int *)(a4))->v))) {
                break;
            }
            t3 = t2;
            t3 = (t3 << 2);
            t3 = (t3 + (0xC4 + a4));
            t3 = (*(int *)((t3 + 0x0)));
            FUN_0c0d04c4((t3 + 0x6), (t3 + 0x78));
            t2 = (t2 + 0x1);
        }
        if (((*(signed char *)((a4 + 0x15))) == 0) && (t1 = *(signed char *)0xC54098D, (int)t1 >= (int)0x4)) {
            *(unsigned short *)(((0x4 + (0x12A + a4)) + 0x0)) = 0x0;
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        }
        t0 = 0x15;
    }
    return t0;
}
