/* game/math: functions 0C058328-0C0583BC, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o4_float { char p[0x4]; float v; };
extern float FUN_0c058328();
float FUN_0c058390(int a4, int a5, float f4);

float FUN_0c058390(int a4, int a5, float f4)
{
    register float t2;

    *(float *)((a5 + 0x0)) = (((float (*)(int, int, float))(FUN_0c058328))(a4, 0x0, f4));
    (((struct o4_float *)(a5))->v) = (((float (*)(int, int))(FUN_0c058328))(a4, 0x1));
    t2 = ((float (*)(int, int))(FUN_0c058328))(a4, 0x2);
    (((struct o4_float *)((a5 + 0x4)))->v) = t2;
    return t2;
}
