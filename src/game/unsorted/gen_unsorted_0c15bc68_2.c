/* game/unsorted: functions 0C15BC68-0C15BE9A, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o24_short { char p[0x24]; short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c037498(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c15be1e(int a4, int a5, int a6, int a7);

int FUN_0c15be1e(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;

    t2 = *(signed char *)((a4 + 0x14));
    if (t2 != 0) {
        if (t2 != 1) {
            return t2;
        }
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    t2 = *(int *)((a4 + 0x10));
    if (((int)(*(signed char *)((t2 + 0x41D))) < (int)0x9) && (t0 = (((struct o24_short *)(t2))->v), t1 = (((struct o22_short *)(a4))->v), t0 == t1)) {
        t0 = (((struct o20_short *)(a4))->v);
        (((struct o20_ushort *)(a4))->v) = (t0 - 1);
        if ((int)(short)(t0 - 1) <= 0) {
            (((struct o20_ushort *)(a4))->v) = 0x3;
            *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
            if ((int)(*(short *)((a4 + 0x1E))) >= (int)(*(short *)((a4 + 0x1C)))) {
                *(unsigned short *)((a4 + 0x1E)) = 0x0;
            }
            return FUN_0c037498(((((struct oC4_int *)(a4))->v)), (*(short *)((a4 + 0x1E))), 0x18, (*(int *)0xC4B40CC));
        }
        return 0x20;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    return 0x14;
}
