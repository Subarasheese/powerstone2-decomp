/* game/demo: functions 0C175898-0C17592C, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c172168(void);
int FUN_0c173558(void);
int FUN_0c1736e8(int);
extern int FUN_0c187798();
int FUN_0c175898(void);
int FUN_0c1758d4(int a4, int a5, int a6);

int FUN_0c175898(void)
{
    FUN_0c1736e8(0x0);
    FUN_0c1736e8(0x1);
    FUN_0c1736e8(0x2);
    return FUN_0c1736e8(0x3);
}

int FUN_0c1758d4(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t3;
    register int t14;

    t0 = ((int (*)(int, int, int))(FUN_0c187798))(a4, a5, a6);
    t1 = ((int (*)(void))(FUN_0c187798))();
    *(unsigned int *)0xC542260 = ((*(int *)0xC542260) + 0x1);
    t3 = *(signed char *)0xC541F44;
    if ((unsigned char)t3 != 0) {
        t14 = (unsigned char)t3;
        if ((unsigned char)t3 != 1) {
        } else {
            t14 = (FUN_0c175898());
        }
    } else {
        t14 = (FUN_0c173558());
    }
    if ((*(signed char *)0xC475DBE) != 0) {
        t14 = (FUN_0c172168());
    }
    return t14;
}
