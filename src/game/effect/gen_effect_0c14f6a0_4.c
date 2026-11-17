/* game/effect: functions 0C14F6A0-0C151288, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o4_float { char p[0x4]; float v; };
int FUN_0c1502e8(int, int, int, int, int, int);
int FUN_0c18778c(int);
int FUN_0c150286(int a4, int a5, int a6, int a7, int a8, float f4);

int FUN_0c150286(int a4, int a5, int a6, int a7, int a8, float f4)
{
    register int t0;
    register int t4;
    register int t3;

    t0 = FUN_0c1502e8(0x0, 0x1, 0x1, a4, a5, a6);
    t4 = t0;
    if (t0 != 0) {
        *(volatile int *)((t0 + 0xC4));
        FUN_0c18778c(t0);
        (((struct o4_float *)((0x41C + t3)))->v) = f4;
        *(unsigned short *)((t3 + 0x1E)) = ((short)(a8 >> 0));
        t4 = ((short)(a8 >> 0));
    }
    return t4;
}
