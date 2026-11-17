/* game/unsorted: functions 0C141684-0C1416CC, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o78_int { char p[0x78]; int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c141684(int a4, int a5, int a6, int a7);

int FUN_0c141684(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = (((struct oC4_int *)(a4))->v);
    if ((*(signed char *)(((*(int *)((a4 + 0x10))) + 0x3715))) == (*(short *)((a4 + 0x1E)))) {
        t1 = *(signed char *)((a4 + 0x14));
        if (t1 != 0) {
            if (t1 != 1) {
                return t1;
            }
        } else {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        }
        (((struct o78_uint *)(t0))->v) = (((((struct o78_int *)(t0))->v)) + (*(int *)((a4 + 0x34))));
        t1 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
        if ((int)(short)(t1 - 1) <= 0) {
            return FUN_0c03f346(a4, t0, a6, a7);
        }
        return (short)(t1 - 1);
    }
    return FUN_0c03f346(a4, t0, a6, a7);
}
