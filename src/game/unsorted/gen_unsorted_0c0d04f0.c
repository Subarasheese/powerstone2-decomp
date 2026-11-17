/* game/unsorted: functions 0C0D04F0-0C0D051A, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC0_int { char p[0xC0]; int v; };
int FUN_0c0d04f0(int a4);

int FUN_0c0d04f0(int a4)
{
    register int t2;
    register int t1;

    (((struct oAC_ushort *)(a4))->v) = 0xF;
    t2 = 0x0;
    for (;;) {
        if ((int)t2 >= (int)((((struct oC0_int *)(a4))->v))) {
            break;
        }
        t1 = t2;
        t1 = (t1 << 2);
        t1 = (t1 + (0xC4 + a4));
        t2 = (t2 + 0x1);
        *(unsigned short *)((((*(int *)((t1 + 0x0)))) + 0x6)) = 0xF;
    }
    return 0xC0;
}
