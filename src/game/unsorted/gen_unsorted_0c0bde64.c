/* game/unsorted: functions 0C0BDE64-0C0BDEDC, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
int ai_clear_op_state(void);
int FUN_0c0bde64(void);
int FUN_0c0bdea2(void);

int FUN_0c0bde64(void)
{
    register int t0;

    t0 = *(signed char *)0xC472462;
    (((struct o22_ushort *)((((unsigned short)(unsigned char)t0 * (unsigned short)0x264) + 0xC471ACC)))->v) = (*(short *)(((((unsigned short)(unsigned char)t0 * (unsigned short)0x264) + 0xC471ACC) + 0x14)));
    (((struct o4_ushort *)0xC47245C)->v) = 0x1;
    ai_clear_op_state();
    t0 = (((struct o0_int *)0xC47245C)->v);
    *(unsigned int *)(((0xC471AD4 + ((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264)) + 0x0)) = t0;
    return t0;
}

int FUN_0c0bdea2(void)
{
    *(unsigned short *)(((0xC471AE0 + ((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264)) + 0x0)) = 0x0;
    (((struct o4_ushort *)0xC47245C)->v) = 0x1;
    ai_clear_op_state();
    *(unsigned int *)((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471AD4)) = ((((struct o0_int *)0xC47245C)->v));
    return 0xC471AD4;
}
