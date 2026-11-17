/* game/player: functions 0C0720B4-0C072C34, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o16_uchar { char p[0x16]; unsigned char v; };
int FUN_0c037bf6(int, int, int);
int FUN_0c038362(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c081dfc(int);
int FUN_0c072782(int a4, int a5, int a6);

int FUN_0c072782(int a4, int a5, int a6)
{
    register int t0;

    t0 = FUN_0c037bf6(a4, a5, a6);
    if ((unsigned char)t0 != 0) {
        t0 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t0, 0x2, 0x0, (t0), 0x2, 0x0);
        FUN_0c081dfc(a4);
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        return 0x16;
    }
    return FUN_0c038362(a4);
}
