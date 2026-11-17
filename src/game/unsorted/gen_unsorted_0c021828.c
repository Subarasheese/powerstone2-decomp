/* game/unsorted: functions 0C021828-0C021868, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c059c54(int);
int FUN_0c05aca8(int, int);
int FUN_0c05b05c(void);
int FUN_0c021828(void);

int FUN_0c021828(void)
{
    register int t1;

    t1 = *(short *)0xC30540C;
    *(unsigned short *)0xC30540C = (t1 - 1);
    if ((short)(t1 - 1) == 0) {
        *(unsigned char *)0xC309860 = ((*(signed char *)0xC309860) + 0x1);
        FUN_0c059c54(0x13);
        FUN_0c05aca8(0x1, 0x0);
        t1 = FUN_0c05b05c();
        *(unsigned char *)0xC30EFA5 = 0x0;
        *(unsigned short *)0xC30540C = 0x3C;
    }
    return t1;
}
