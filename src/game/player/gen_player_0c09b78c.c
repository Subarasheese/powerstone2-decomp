/* game/player: functions 0C09B78C-0C09B7C8, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o15_uchar { char p[0x15]; unsigned char v; };
int FUN_0c037bf6(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c09b78c(int a4);

int FUN_0c09b78c(int a4)
{
    register int t0;
    register int t3;

    t0 = FUN_0c037bf6(a4);
    t3 = (unsigned char)t0;
    if ((unsigned char)t0 != 0) {
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x4, 0x38, 0xFFFFFFFF, 0x4, 0x38);
        *(unsigned short *)((a4 + 0x1C)) = 0x1E;
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t3 = 0x15;
    }
    return t3;
}
