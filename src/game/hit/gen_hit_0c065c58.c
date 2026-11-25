/* game/hit: functions 0C065C58-0C065C9C, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o404_int { char p[0x404]; int v; };
int nlLocate(int, int);
int dbg_printf(int, ...);
int FUN_0c065c58(int a4);

int FUN_0c065c58(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = (((struct o404_int *)(a4))->v);
    t1 = (nlLocate(0x0, 0xF));
    t2 = t0;
    for (;;) {
        if (t2 == 0) {
            break;
        }
        t0 = (*(int *)((t2 + 0x4)));
        *(volatile int *)((t0 + 0x4));
        t1 = (*(signed char *)((t0 + 0x2)));
        *(volatile signed char *)((t0 + 0x0));
        t1 = (dbg_printf(0xC1C4BCC));
        t2 = (*(int *)((t2 + 0x0)));
    }
    return t1;
}
