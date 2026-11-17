/* game/unsorted: functions 0C0CBFE8-0C0CC03E, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o374D_uchar { char p[0x374D]; unsigned char v; };
int FUN_0c0d0238(void);
int FUN_0c0cbfe8(int a4);

int FUN_0c0cbfe8(int a4)
{
    register int t0;
    int t1;
    register int t2;

    t2 = *(signed char *)((a4 + 0x2));
    if ((t2 != 12) && ((t2 != 13) && ((t0 = *(signed char *)0xC540F9A, (int)t0 > 0) && (t1 = *(signed char *)((a4 + 0x374D)), (int)t1 < (int)0x3)))) {
        t0 = FUN_0c0d0238();
        if ((int)t0 >= 0) {
            *(unsigned char *)((((*(signed char *)((a4 + 0x374D))) + (0x374E + a4)) + 0x0)) = t0;
            (((struct o374D_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x374D))) + 0x1);
            return 0x1;
        }
        return 0x0;
    }
    return 0x0;
}
