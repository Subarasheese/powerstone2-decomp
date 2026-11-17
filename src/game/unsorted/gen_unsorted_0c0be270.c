/* game/unsorted: functions 0C0BE270-0C0BE39C, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o2C_float { char p[0x2C]; float v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
struct o78_int { char p[0x78]; int v; };
int ai_clear_op_state(void);
int FUN_0c0be270(int a4);
int FUN_0c0be2b6(int a4);
int FUN_0c0be362(void);

int FUN_0c0be270(int a4)
{
    register int t0;
    register float u3;

    t0 = *(signed char *)0xC472462;
    u3 = (((struct o2C_float *)(((((struct o78_int *)((((unsigned short)(unsigned char)t0 * (unsigned short)0x264) + 0xC471ACC)))->v))))->v);
    (((struct o22_ushort *)((((unsigned short)(unsigned char)t0 * (unsigned short)0x264) + 0xC471ACC)))->v) = (int)(u3 - ((((struct o2C_float *)(a4))->v)));
    *(unsigned int *)(((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC) + 0x8)) = ((((struct o0_int *)0xC47245C)->v));
    ai_clear_op_state();
    (((struct o4_ushort *)0xC47245C)->v) = 0x1;
    return 0x1;
}

int FUN_0c0be2b6(int a4)
{
    register int t0;
    register float u3;

    t0 = *(signed char *)0xC472462;
    u3 = (((struct o2C_float *)(((((struct o78_int *)((((unsigned short)(unsigned char)t0 * (unsigned short)0x264) + 0xC471ACC)))->v))))->v);
    (((struct o22_ushort *)((((unsigned short)(unsigned char)t0 * (unsigned short)0x264) + 0xC471ACC)))->v) = (int)(((((struct o2C_float *)(a4))->v)) - u3);
    *(unsigned int *)(((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC) + 0x8)) = ((((struct o0_int *)0xC47245C)->v));
    ai_clear_op_state();
    (((struct o4_ushort *)0xC47245C)->v) = 0x1;
    return 0x1;
}

int FUN_0c0be362(void)
{
    (((struct o22_ushort *)((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC)))->v) = (*(signed char *)0xC542236);
    *(unsigned int *)(((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC) + 0x8)) = ((((struct o0_int *)0xC47245C)->v));
    ai_clear_op_state();
    (((struct o4_ushort *)0xC47245C)->v) = 0x1;
    return 0x1;
}
