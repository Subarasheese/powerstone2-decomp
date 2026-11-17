/* game/unsorted: functions 0C01A3A4-0C01B4B6, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c01ab62(int);
int thunk_FUN_0c03f346(int);
int FUN_0c01ab14(int a4);

int FUN_0c01ab14(int a4)
{
    register int t0;
    register int t1;

    if ((*(signed char *)0xC309993) == 0) {
        if ((*(signed char *)((a4 + 0x3))) != 0) {
            t0 = (*(signed char *)0xC30A3E6);
        } else {
            t0 = (*(signed char *)0xC309BE4);
        }
        t1 = t0;
    } else {
        if ((*(signed char *)((a4 + 0x3))) == 0) {
            t0 = (*(signed char *)0xC30A3E6);
        } else {
            t0 = (*(signed char *)0xC309BE4);
        }
        t1 = t0;
    }
    if ((*(signed char *)((a4 + 0x1A))) != (signed char)t1) {
        if ((*(signed char *)((a4 + 0x2))) == 0) {
            FUN_0c01ab62((*(signed char *)((a4 + 0x3))));
        }
        return thunk_FUN_0c03f346(a4);
    }
    return 0x1A;
}
