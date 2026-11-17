/* game/unsorted: functions 0C0D4558-0C0D45BE, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oC0_int { char p[0xC0]; int v; };
int FUN_0c0d04c4(int, int);
int FUN_0c0d4558(int a4);

int FUN_0c0d4558(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        
        t1 = t0;
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        FUN_0c0d04c4((0xAC + a4), (a4 + 0x34));
        t0 = 0x0;
        for (;;) {
            if ((int)t0 >= (int)((((struct oC0_int *)(a4))->v))) {
                break;
            }
            t2 = t0;
            t2 = (t2 << 2);
            t2 = (t2 + (0xC4 + a4));
            t2 = (*(int *)((t2 + 0x0)));
            FUN_0c0d04c4((t2 + 0x6), (t2 + 0x78));
            t0 = (t0 + 0x1);
        }
        t1 = 0xC0;
    }
    return t1;
}
