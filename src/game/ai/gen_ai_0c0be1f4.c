/* game/ai: functions 0C0BE1F4-0C0BE270, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
struct o78_int { char p[0x78]; int v; };
int ai_clear_op_state(void);
float math_signed_sqrt(float);
int FUN_0c0be1f4(int a4);

int FUN_0c0be1f4(int a4)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;

    t0 = *(signed char *)0xC472462;
    t1 = (((struct o78_int *)((((unsigned short)(unsigned char)t0 * (unsigned short)0x264) + 0xC471ACC)))->v);
    u0 = (((struct o28_float *)(t1))->v);
    u1 = (((struct o28_float *)(a4))->v);
    u2 = (((struct o30_float *)(a4))->v);
    u3 = (((struct o30_float *)(t1))->v);
    u4 = ((u3 - u2) * (u3 - u2));
    u4 = u4 + ((u0 - u1)) * ((u0 - u1));
    (((struct o22_ushort *)((((unsigned short)(unsigned char)t0 * (unsigned short)0x264) + 0xC471ACC)))->v) = (int)(math_signed_sqrt(u4));
    (((struct o4_ushort *)0xC47245C)->v) = 0x1;
    ai_clear_op_state();
    t0 = *(signed char *)0xC472462;
    *(unsigned int *)(((0xC471AD4 + ((unsigned short)(unsigned char)t0 * (unsigned short)0x264)) + 0x0)) = ((((struct o0_int *)0xC47245C)->v));
    return ((unsigned short)(unsigned char)t0 * (unsigned short)0x264);
}
