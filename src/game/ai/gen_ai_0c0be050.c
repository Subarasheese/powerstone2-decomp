/* game/ai: functions 0C0BE050-0C0BE1F4, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o3760_int { char p[0x3760]; int v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
int ai_clear_op_state(void);
float math_signed_sqrt(float);
float FUN_0c0be050(int a4);
void FUN_0c0be09a(void);
int FUN_0c0be09e(int a4);
int FUN_0c0be0da(int a4);
int FUN_0c0be116(int a4);
int FUN_0c0be15e(int a4);
int FUN_0c0be1da(int a4);

float FUN_0c0be050(int a4)
{
    register int t0;
    register float u0;
    register float u1;
    register float u2;

    t0 = *(signed char *)0xC472462;
    u0 = (((struct o28_float *)(a4))->v);
    u1 = (((struct o30_float *)(a4))->v);
    u2 = (u1 * u1);
    u2 = u2 + u0 * u0;
    u0 = math_signed_sqrt(u2);
    *(unsigned short *)(((0xC471AEE + ((unsigned short)(unsigned char)t0 * (unsigned short)0x264)) + 0x0)) = (int)u0;
    return u0;
}

void FUN_0c0be09a(void)
{
    
}

int FUN_0c0be09e(int a4)
{
    (((struct o22_ushort *)((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC)))->v) = (unsigned char)(*(signed char *)((a4 + 0x3721)));
    *(unsigned int *)(((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC) + 0x8)) = ((((struct o0_int *)0xC47245C)->v));
    ai_clear_op_state();
    (((struct o4_ushort *)0xC47245C)->v) = 0x1;
    return 0x1;
}

int FUN_0c0be0da(int a4)
{
    (((struct o22_ushort *)((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC)))->v) = (unsigned char)(*(signed char *)((a4 + 0x3721)));
    *(unsigned int *)(((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC) + 0x8)) = ((((struct o0_int *)0xC47245C)->v));
    ai_clear_op_state();
    (((struct o4_ushort *)0xC47245C)->v) = 0x1;
    return 0x1;
}

int FUN_0c0be116(int a4)
{
    register int t5;

    (((struct o22_ushort *)((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC)))->v) = (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x3721))) * (unsigned short)0x34) + 0xC2738BE)));
    *(unsigned int *)(((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC) + 0x8)) = ((((struct o0_int *)0xC47245C)->v));
    t5 = ai_clear_op_state();
    (((struct o4_ushort *)0xC47245C)->v) = 0x1;
    return t5;
}

int FUN_0c0be15e(int a4)
{
    (((struct o22_ushort *)((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC)))->v) = (*(signed char *)((a4 + 0x3715)));
    *(unsigned int *)(((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC) + 0x8)) = ((((struct o0_int *)0xC47245C)->v));
    ai_clear_op_state();
    (((struct o4_ushort *)0xC47245C)->v) = 0x1;
    return 0x1;
}

int FUN_0c0be1da(int a4)
{
    *(unsigned short *)((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471AEE)) = (*(signed char *)((0x374D + ((((struct o3760_int *)(a4))->v)))));
    return 0xC471AEE;
}
