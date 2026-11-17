/* game/math: functions 0C05821C-0C058270, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

float math_signed_sqrt(float);
float math_vec2_cos_between(float f4, float f5, float f6, float f7);

float math_vec2_cos_between(float f4, float f5, float f6, float f7)
{
    register float u0;
    register float u1;
    register float u2;

    u0 = (f5 * f5);
    u0 = u0 + f4 * f4;
    u1 = math_signed_sqrt(u0);
    u0 = (f7 * f7);
    u0 = u0 + f6 * f6;
    u2 = math_signed_sqrt(u0);
    u0 = (u1 * u2);
    if ((u1 * u2) == 0.0f) {
        u0 = (*(float *)0xC058448);
    }
    u1 = (f5 * f7);
    u1 = u1 + f6 * f4;
    return (u1 / u0);
}
