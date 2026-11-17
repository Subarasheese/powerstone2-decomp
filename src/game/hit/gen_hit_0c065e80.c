/* game/hit: functions 0C065E80-0C065F0C, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o10_float { char p[0x10]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
float math_interval_overlap(float, float, float, float);
float math_signed_sqrt(float);
int FUN_0c065e80(int a4, int a5);

int FUN_0c065e80(int a4, int a5)
{
    register int t0;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u6;
    register float u7;

    u0 = (((struct oC_float *)((a5 + 0x8)))->v);
    u1 = (((struct oC_float *)((a4 + 0x8)))->v);
    u2 = (((struct o8_float *)((a4 + 0x8)))->v);
    u3 = (((struct o8_float *)((a5 + 0x8)))->v);
    u4 = (((struct o8_float *)(a5))->v);
    u5 = (((struct o8_float *)(a4))->v);
    u6 = ((u2 - u3) * (u2 - u3));
    u6 = u6 + ((u5 - u4)) * ((u5 - u4));
    u2 = math_signed_sqrt(u6);
    u3 = (((struct o4_float *)((a5 + 0x8)))->v);
    u4 = (((struct o10_float *)((a5 + 0x8)))->v);
    u5 = (((struct o4_float *)((a4 + 0x8)))->v);
    u6 = (((struct oC_float *)((a4 + 0x8)))->v);
    u7 = math_interval_overlap((u5 + u6), (u5 - u6), (u3 + u4), (u3 - u4));
    t0 = 0x0;
    if (!(0.0f > ((u1 + u0) - u2)) && !(0.0f > u7)) {
        t0 = 0x1;
    }
    return t0;
}
