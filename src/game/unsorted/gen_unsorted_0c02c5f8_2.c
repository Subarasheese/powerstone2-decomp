/* game/unsorted: functions 0C02C5F8-0C02CA8E, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c02c828(void);
int FUN_0c02c89c(void);
int FUN_0c03ec80(void);
int FUN_0c04a556(int, int, int, int);
int FUN_0c0524bc(void);
int FUN_0c07c25a(void);
int FUN_0c10208a(int, int);
int FUN_0c02c8c2(int a4, int a5, int a6, int a7);

int FUN_0c02c8c2(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)0xC541F41;
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 1) {
            if ((unsigned char)t0 != 4) {
                if ((unsigned char)t0 != 5) {
                } else {
                    FUN_0c02c89c();
                }
            } else {
                FUN_0c04a556(a4, a5, a6, a7);
            }
        } else {
            FUN_0c10208a(a4, a5);
        }
    } else {
        FUN_0c02c828();
    }
    FUN_0c0524bc();
    FUN_0c03ec80();
    return FUN_0c07c25a();
}
