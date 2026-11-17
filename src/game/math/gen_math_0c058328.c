/* game/math: functions 0C058328-0C0583BC, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
int math_signed_sqrt(float);
int FUN_0c058328(int a4, int a5);

int FUN_0c058328(int a4, int a5)
{
    register float u0;
    register float u1;
    register float u2;
    register float u3;

    u0 = (((struct o4_float *)((a4 + ((a5 << 2) << 2))))->v);
    u1 = *(float *)(((a4 + ((a5 << 2) << 2)) + 0x0));
    u2 = (((struct o8_float *)((a4 + ((a5 << 2) << 2))))->v);
    u3 = (u0 * u0);
    u3 = u3 + u1 * u1;
    u0 = u3;
    u0 = u0 + u2 * u2;
    return (math_signed_sqrt(u0));
}
