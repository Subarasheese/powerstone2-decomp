/* game/math: functions 0C058270-0C0582AC, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
int FUN_0c058270(int a4, int a5, int a6);

int FUN_0c058270(int a4, int a5, int a6)
{
    register float u0;

    u0 = (((((struct o8_float *)(a5))->v)) * ((((struct o4_float *)(a6))->v)));
    *(float *)((a4 + 0x0)) = (((((((struct o4_float *)(a5))->v)) * ((((struct o8_float *)(a6))->v)))) - u0);
    u0 = ((*(float *)((a5 + 0x0))) * ((((struct o8_float *)(a6))->v)));
    (((struct o4_float *)(a4))->v) = (((((((struct o8_float *)(a5))->v)) * (*(float *)((a6 + 0x0))))) - u0);
    u0 = (((((struct o4_float *)(a5))->v)) * (*(float *)((a6 + 0x0))));
    (((struct o8_float *)(a4))->v) = ((((*(float *)((a5 + 0x0))) * ((((struct o4_float *)(a6))->v)))) - u0);
    return 0x8;
}
