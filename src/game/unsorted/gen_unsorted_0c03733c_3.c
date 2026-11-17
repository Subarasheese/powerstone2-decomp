/* game/unsorted: functions 0C03733C-0C037492, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o68_uint { char p[0x68]; unsigned int v; };
int FUN_0c187798(int, int, int);
void FUN_0c03744a(int a4, int a5, int a6, int a7);

void FUN_0c03744a(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t2 = *(int *)((((((a6 << 2) << 2) << 1) + (a7 + 0x10)) + 0x1C));
    *(unsigned int *)((a4 + 0x8)) = (*(int *)((((a5 * 0x3C) + t2) + 0x0)));
    *(unsigned int *)((a4 + 0xC)) = 0x0;
    *(unsigned int *)((a4 + 0x10)) = 0x0;
    (((struct o68_uint *)(a4))->v) = 0x0;
    t3 = ((int (*)(int, int, int))(FUN_0c187798))(a4, ((a5 * 0x3C) + t2), 0x0);
    t2 = ((int (*)(int, int))(FUN_0c187798))(t0, t1);
}
