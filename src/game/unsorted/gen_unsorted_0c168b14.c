/* game/unsorted: functions 0C168B14-0C168BB8, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c03f346(int);
int FUN_0c03f444(int, int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c07e3ae(int, int);
int FUN_0c187798(void);
int FUN_0c168b14(int a4);

int FUN_0c168b14(int a4)
{
    register int t0;
    register int t1;

    if ((*(signed char *)((a4 + 0x14))) == 0) {
        if ((*(signed char *)((a4 + 0x2))) == 1) {
            t0 = FUN_0c03f444(0x1, 0x0, 0x1);
            if (t0 != 0) {
                *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
                *(unsigned int *)((t0 + 0x4)) = 0xC1689EC;
                t1 = *(signed char *)((a4 + 0x1));
                FUN_0c07e3ae(t0, 0x51);
                FUN_0c064d24(t0, 0x3, 0x9, 0x0, 0x100, (~((int)0x1 << (int)t1)), 0x0, 0xF0);
                FUN_0c187798();
                FUN_0c187798();
            }
        } else {
            t0 = FUN_0c03f444(0x5, 0x0, 0x1);
            if (t0 != 0) {
                *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
                *(unsigned int *)((t0 + 0x4)) = 0xC1689EC;
                FUN_0c187798();
                FUN_0c187798();
            }
        }
    }
    return FUN_0c03f346(a4);
}
