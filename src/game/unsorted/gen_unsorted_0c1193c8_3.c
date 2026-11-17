/* game/unsorted: functions 0C1193C8-0C11A28A, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o41C_ushort { char p[0x41C]; unsigned short v; };
int FUN_0c03f444(int, int, int);
int FUN_0c187798(int, int);
int FUN_0c11a22e(int a4, int a5, int a6);

int FUN_0c11a22e(int a4, int a5, int a6)
{
    register int t0;
    register int t5;

    t0 = FUN_0c03f444(0x5, 0x0, 0x14);
    t5 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC119F90;
        *(unsigned int *)((t0 + 0x10)) = a4;
        (((struct o41C_ushort *)(t0))->v) = a5;
        if (a6 != 0) {
            t5 = (FUN_0c187798(t0, 0xC291E64));
        } else {
            t5 = (FUN_0c187798(t0, 0xC291E64));
        }
    }
    return t5;
}
