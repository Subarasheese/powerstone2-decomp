/* game/unsorted: functions 0C15A404-0C15B40E, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
int FUN_0c03f346(int);
int FUN_0c15ab94(int);
int FUN_0c15ae2e(int);
int FUN_0c187798(int, int, int);
int FUN_0c15ae60(int a4, int a5, int a6);

int FUN_0c15ae60(int a4, int a5, int a6)
{
    int stk[3];
    register int t0;
    register int t8;
    register int t22;
    register int t28;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
            } else {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                *(unsigned short *)((a4 + 0x1C)) = 0x0;
                FUN_0c187798(a4, a5, a6);
                FUN_0c15ab94(((int)stk + 0));
            }
            t28 = (FUN_0c03f346(a4));
        } else {
            t8 = *(short *)((a4 + 0x1C));
            if (t8 == (*(int *)0xC2A2AAC)) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t28 = 0x14;
            } else {
                *(unsigned short *)((a4 + 0x1C)) = (t8 + 0x1);
                t28 = (t8 + 0x1);
            }
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        FUN_0c187798(a4, a5, a6);
        FUN_0c15ae2e(((int)stk + 0));
        t22 = *(short *)((a4 + 0x1C));
        if (t22 == (*(int *)0xC2A2AAC)) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t28 = 0x14;
        } else {
            *(unsigned short *)((a4 + 0x1C)) = (t22 + 0x1);
            t28 = (t22 + 0x1);
        }
    }
    return t28;
}
