/* game/unsorted: functions 0C0BDDF8-0C0BDE64, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
int ai_clear_op_state(void);
int FUN_0c0bddf8(void);
int FUN_0c0bde1e(void);

int FUN_0c0bddf8(void)
{
    register int t2;

    (((struct o4_ushort *)0xC47245C)->v) = 0x1;
    ai_clear_op_state();
    t2 = (((struct o0_int *)0xC47245C)->v);
    *(unsigned int *)(((0xC471AD4 + ((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264)) + 0x0)) = t2;
    return t2;
}

int FUN_0c0bde1e(void)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)0xC472462;
    t1 = (((struct o0_int *)0xC47245C)->v);
    (((struct o0_uint *)0xC47245C)->v) = (t1 + 0x2);
    *(unsigned short *)(((0xC471AE0 + ((unsigned short)(unsigned char)t0 * (unsigned short)0x264)) + 0x0)) = (*(short *)((((t1 + 0x2) - 2) + 0x0)));
    (((struct o4_ushort *)0xC47245C)->v) = 0x1;
    ai_clear_op_state();
    *(unsigned int *)((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471AD4)) = ((((struct o0_int *)0xC47245C)->v));
    return 0xC471AD4;
}
