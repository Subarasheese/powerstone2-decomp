/* game/unsorted: functions 0C0BB4AC-0C0BB518, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
int FUN_0c0bb4ac(void);

int FUN_0c0bb4ac(void)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)0xC5429AD;
    t1 = *(signed char *)0xC542236;
    if ((int)(unsigned char)(*(signed char *)0xC542242) < (int)(unsigned char)(*(signed char *)(((((t0 << 1) + (t0 << 2)) + 0xC25D98C) + t1)))) {
        (((struct o0_uchar *)0xC542242)->v) = (*(signed char *)((((((t0 << 1) + (t0 << 2)) + 0xC25D98C) + t1) + 0x0)));
    }
    t0 = *(signed char *)0xC5429AD;
    t1 = *(signed char *)0xC542236;
    if ((int)(unsigned char)(*(signed char *)0xC542242) > (int)(unsigned char)(*(signed char *)(((((t0 << 1) + (t0 << 2)) + 0xC25D95C) + t1)))) {
        (((struct o0_uchar *)0xC542242)->v) = (*(signed char *)((((((t0 << 1) + (t0 << 2)) + 0xC25D95C) + t1) + 0x0)));
    }
    t0 = *(signed char *)0xC542242;
    (((struct o1_uchar *)0xC542242)->v) = ((t0 << 2) << 1);
    return ((t0 << 2) << 1);
}
