/* game/unsorted: functions 0C15B478-0C15B4C0, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o24_short { char p[0x24]; short v; };
struct o41C_uint { char p[0x41C]; unsigned int v; };
int FUN_0c15a104(int, int, int, int, int, int, int, int);
int FUN_0c15b478(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11);

int FUN_0c15b478(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11)
{
    register int t0;
    register int t2;

    t0 = FUN_0c15a104(a4, a5, a7, 0xC2036B0, ((short)(a8 >> 0)), ((signed char)(a9 >> 0)), a10, a11);
    t2 = t0;
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x4)) = 0xC15B4C0;
        *(unsigned int *)((t0 + 0x10)) = a6;
        (((struct o41C_uint *)(t0))->v) = (unsigned short)((((struct o24_short *)(a6))->v));
        t2 = 0x41C;
    }
    return t2;
}
