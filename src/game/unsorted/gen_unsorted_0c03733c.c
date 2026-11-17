/* game/unsorted: functions 0C03733C-0C037492, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o68_uint { char p[0x68]; unsigned int v; };
extern int FUN_0c187798();
int FUN_0c03733c(int a4, int a5, int a6);

int FUN_0c03733c(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;
    register int t10;

    t5 = *(int *)((((((a5 << 2) << 2) << 1) + (a6 + 0x10)) + 0x18));
    t6 = *(int *)((((((a5 << 2) << 2) << 1) + (a6 + 0x10)) + 0x1C));
    if ((int)t5 > 0) {
        t7 = 0x0;
        t8 = 0x0;
        t9 = t6;
        for (;;) {
            t6 = *(int *)((((0xC4 + a4) + t7) + 0x0));
            *(unsigned int *)((t6 + 0x8)) = (*(int *)((t9 + 0x0)));
            *(unsigned int *)((t6 + 0xC)) = (*(int *)((t9 + 0x4)));
            *(unsigned int *)((t6 + 0x10)) = (*(int *)((t9 + 0x8)));
            t10 = *(int *)(((t9 + 0xC) + 0x4));
            if ((int)(*(int *)(((t9 + 0xC) + 0x0))) < 0) {
                (((struct o68_uint *)(t6))->v) = 0x0;
            } else {
                (((struct o68_uint *)(t6))->v) = ((*(int *)((((t10 << 2) + (0xC4 + a4)) + 0x0))) + 0x28);
            }
            t10 = ((int (*)(int, int, int))(FUN_0c187798))(a4, t6, t9);
            t6 = ((int (*)(int, int, int))(FUN_0c187798))(0x0, t0, t1);
            t8 = (t8 + 0x1);
            t9 = (t9 + 0x3C);
            t7 = (t2 + 0x4);
            if ((int)t8 >= (int)t5) {
                break;
            }
        }
    } else {
        t0 = a5;
        t1 = a6;
    }
    t2 = ((int (*)(int, int, int))(FUN_0c187798))(t3, t0, t1);
    t0 = ((int (*)(int))(FUN_0c187798))(t4);
    return 0x0;
}
