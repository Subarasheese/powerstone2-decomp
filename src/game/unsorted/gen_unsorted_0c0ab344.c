/* game/unsorted: functions 0C0AB344-0C0AB3E4, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o28_float { char p[0x28]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o5C_float { char p[0x5C]; float v; };
int FUN_0c037bf6(int);
int FUN_0c038362(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c085d0c(int);
int FUN_0c0ab344(int a4);
int FUN_0c0ab3aa(int a4);


int FUN_0c0ab3aa(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x1));
    FUN_0c07e79c(a4, t0, 0x1, 0xA, (t0), 0x1, 0xA);
    (((struct o50_float *)(a4))->v) = ((((struct o0_float *)0xC0AB49C)->v));
    (((struct o5C_float *)(a4))->v) = ((((struct o4_float *)0xC0AB49C)->v));
    return 0x5C;
}
