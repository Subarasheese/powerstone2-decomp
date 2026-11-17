/* game/unsorted: functions 0C0214E0-0C0217F2, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0214e0(void);
int FUN_0c0573cc(int, int, int);
int FUN_0c05b05c(void);
int FUN_0c0217b6(void);

int FUN_0c0217b6(void)
{
    register int t1;

    FUN_0c0214e0();
    t1 = *(signed char *)0xC30AA33;
    if (t1 == 9) {
        *(unsigned char *)0xC309860 = ((*(signed char *)0xC309860) + 0x1);
        *(unsigned short *)0xC30540C = 0x20;
        FUN_0c05b05c();
        *(unsigned char *)0xC30EFA5 = 0x0;
        return FUN_0c0573cc(0x0, 0x0, 0x14);
    }
    return t1;
}
