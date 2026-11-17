/* game/unsorted: functions 0C0EEF50-0C0EF0C4, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o41C_int { char p[0x41C]; int v; };
struct o41C_uint { char p[0x41C]; unsigned int v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
float math_cos_angle16(int);
float FUN_0c0eef50(int a4, int a5);

float FUN_0c0eef50(int a4, int a5)
{
    register float t1;
    register float u2;
    register float u4;

    t1 = math_cos_angle16(((((struct o41C_int *)(a4))->v)));
    u2 = ((t1 + 1.0f) / (1.0f + 1.0f));
    if (!(((t1 + 1.0f) / (1.0f + 1.0f)) > 0.0f)) {
        u2 = 0.0f;
    }
    u4 = u2;
    if (!(1.0f > u2)) {
        u4 = 1.0f;
    }
    (((struct o41C_uint *)(a4))->v) = (((((struct o41C_int *)(a4))->v)) + a5);
    (((struct oBC_float *)(a4))->v) = u4;
    (((struct oB8_float *)(a4))->v) = u4;
    (((struct oB4_float *)(a4))->v) = u4;
    return (t1 + 1.0f);
}
