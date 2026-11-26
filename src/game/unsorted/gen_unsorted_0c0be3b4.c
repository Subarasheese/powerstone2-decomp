/* game/unsorted: functions 0C0BE3B4-0C0BE424, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
int ai_clear_op_state(void);
int nlRand(void);
int FUN_0c0be3b4(void);
int FUN_0c0be3ca(void);

int FUN_0c0be3b4(void)
{
    *(unsigned short *)((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471AEE)) = (*(short *)0xC542230);
    return 0xC471AEE;
}

int FUN_0c0be3ca(void)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)0xC472462;
    t1 = nlRand();
    t2 = (((struct o0_int *)0xC47245C)->v);
    (((struct o0_uint *)0xC47245C)->v) = (t2 + 0x2);
    *(unsigned short *)(((0xC471AEE + ((unsigned short)(unsigned char)t0 * (unsigned short)0x264)) + 0x0)) = ((int)((int)t1 % (int)(unsigned short)(*(short *)((((t2 + 0x2) - 2) + 0x0)))));
    *(unsigned int *)(((0xC471AD4 + ((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264)) + 0x0)) = ((((struct o0_int *)0xC47245C)->v));
    t0 = ai_clear_op_state();
    (((struct o4_ushort *)0xC47245C)->v) = 0x1;
    return t0;
}
