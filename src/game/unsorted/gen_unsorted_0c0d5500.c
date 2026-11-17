/* game/unsorted: functions 0C0D5500-0C0D557C, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c0d04c4(int, int);
int FUN_0c0d5500(int a4);

int FUN_0c0d5500(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        t1 = t0;
        if (t0 != 1) {
        } else {
            t0 = (((struct oC8_int *)(a4))->v);
            (((struct o80_uint *)(t0))->v) = (((((struct o80_int *)(t0))->v)) + 0x111);
            t1 = 0x80;
        }
        t0 = t1;
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        FUN_0c0d04c4((0xAC + a4), (a4 + 0x34));
        t1 = 0x0;
        for (;;) {
            if ((int)t1 >= (int)((((struct oC0_int *)(a4))->v))) {
                break;
            }
            if (t1 != 1) {
                t2 = t1;
                t2 = (t2 << 2);
                t2 = (t2 + (0xC4 + a4));
                t2 = (*(int *)((t2 + 0x0)));
                FUN_0c0d04c4((t2 + 0x6), (t2 + 0x78));
            }
            t1 = (t1 + 0x1);
        }
        t1 = (((struct oC8_int *)(a4))->v);
        (((struct o80_uint *)(t1))->v) = (((((struct o80_int *)(t1))->v)) + 0x111);
        t0 = 0x80;
    }
    return t0;
}
