/* game/unsorted: functions 0C0BFD48-0C0BFE52, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
int ai_clear_op_state(void);
int FUN_0c179ac0(void);
int FUN_0c0bfd48(void);
int FUN_0c0bfdfe(void);

int FUN_0c0bfd48(void)
{
    register int t0;
    register float u0;
    register float u1;
    register float u2;

    t0 = *(signed char *)0xC472462;
    u0 = (((struct o0_float *)0xC0BFE54)->v);
    u1 = (((struct o4_float *)0xC0BFE54)->v);
    u2 = u1;
    u2 = u2 + u0 * (float)((int)((int)(FUN_0c179ac0()) % (int)0x64));
    (((struct o6C_float *)((((unsigned short)(unsigned char)t0 * (unsigned short)0x264) + 0xC471ACC)))->v) = (float)(short)(int)u2;
    (((struct o70_float *)((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC)))->v) = 0.0f;
    t0 = *(signed char *)0xC472462;
    u2 = u1;
    u2 = u2 + u0 * (float)((int)((int)(FUN_0c179ac0()) % (int)0x64));
    (((struct o74_float *)((((unsigned short)(unsigned char)t0 * (unsigned short)0x264) + 0xC471ACC)))->v) = (float)(short)(int)u2;
    *(unsigned int *)(((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC) + 0x8)) = ((((struct o0_int *)0xC47245C)->v));
    t0 = ai_clear_op_state();
    (((struct o4_ushort *)0xC47245C)->v) = 0x1;
    return t0;
}

int FUN_0c0bfdfe(void)
{
    register int t5;

    (((struct o6C_float *)((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC)))->v) = 0.0f;
    (((struct o70_float *)((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC)))->v) = 0.0f;
    (((struct o74_float *)((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC)))->v) = 0.0f;
    *(unsigned int *)(((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC) + 0x8)) = ((((struct o0_int *)0xC47245C)->v));
    t5 = ai_clear_op_state();
    (((struct o4_ushort *)0xC47245C)->v) = 0x1;
    return t5;
}
