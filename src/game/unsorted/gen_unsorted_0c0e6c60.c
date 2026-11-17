/* game/unsorted: functions 0C0E6C60-0C0E6DC6, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o10_float { char p[0x10]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o6C_float { char p[0x6C]; float v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct oB0_float { char p[0xB0]; float v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oC_float { char p[0xC]; float v; };
float math_cos_angle16(int);
float FUN_0c0e6c60(int a4);

float FUN_0c0e6c60(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register float u0;
    register float u1;

    t0 = *(int *)(((((*(signed char *)((a4 + 0x2))) << 2) << 1) + 0xC288114));
    t1 = *(short *)((a4 + 0x1C));
    t2 = *(short *)((a4 + 0x1E));
    t3 = *(int *)((((((((short)t1 << 1) + (short)t1) << 2) << 1) + t0) + 0x0));
    u0 = (((struct o10_float *)((t0 + ((((((short)t1 - 1) << 1) + ((short)t1 - 1)) << 2) << 1))))->v);
    u1 = ((((((struct o10_float *)(((((((short)t1 << 1) + (short)t1) << 2) << 1) + t0)))->v)) - u0) * ((float)t2 / (float)t3));
    (((struct o30_float *)(a4))->v) = ((u0 + u1) * (math_cos_angle16((*(int *)(((*(int *)((a4 + 0x10))) + 0x34))))));
    u0 = (((struct o4_float *)((t0 + ((((((short)t1 - 1) << 1) + ((short)t1 - 1)) << 2) << 1))))->v);
    (((struct o44_float *)(a4))->v) = ((((((((struct o4_float *)(((((((short)t1 << 1) + (short)t1) << 2) << 1) + t0)))->v)) - u0) * ((float)t2 / (float)t3))) + u0);
    u0 = (((struct o8_float *)((t0 + ((((((short)t1 - 1) << 1) + ((short)t1 - 1)) << 2) << 1))))->v);
    u1 = u0;
    u1 = u1 + (((float)t2 / (float)t3)) * ((((((struct o8_float *)(((((((short)t1 << 1) + (short)t1) << 2) << 1) + t0)))->v)) - u0));
    (((struct oB0_float *)(a4))->v) = u1;
    u0 = (((struct oC_float *)((t0 + ((((((short)t1 - 1) << 1) + ((short)t1 - 1)) << 2) << 1))))->v);
    (((struct o6C_float *)(((((struct oC4_int *)(a4))->v))))->v) = (u0 + (((((((struct oC_float *)(((((((short)t1 << 1) + (short)t1) << 2) << 1) + t0)))->v)) - u0) * ((float)t2 / (float)t3))));
    (((struct o6C_float *)((*(int *)(((0xC4 + a4) + 0x4)))))->v) = (-((((struct o6C_float *)(((((struct oC4_int *)(a4))->v))))->v)));
    t4 = *(int *)(((t0 + ((((((short)t1 - 1) << 1) + ((short)t1 - 1)) << 2) << 1)) + 0x14));
    (((struct o7C_uint *)(((((struct oC8_int *)(a4))->v))))->v) = (t4 + (int)((float)((*(int *)((((((((short)t1 << 1) + (short)t1) << 2) << 1) + t0) + 0x14))) - t4) * ((float)t2 / (float)t3)));
    (((struct o7C_uint *)(((((struct oC4_int *)(a4))->v))))->v) = (-((((struct o7C_int *)((*(int *)(((0xC4 + a4) + 0x4)))))->v)));
    return ((float)t2 / (float)t3);
}
