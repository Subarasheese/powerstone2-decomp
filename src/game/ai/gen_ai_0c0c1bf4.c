/* game/ai: functions 0C0C1BF4-0C0C1C1A, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
int ai_clear_op_state(void);
int FUN_0c0c1bf4(void);

int FUN_0c0c1bf4(void)
{
    register int t1;

    (((struct o4_ushort *)0xC47245C)->v) = 0x1;
    ai_clear_op_state();
    t1 = *(signed char *)0xC472462;
    *(unsigned int *)(((0xC471AD4 + ((unsigned short)(unsigned char)t1 * (unsigned short)0x264)) + 0x0)) = ((((struct o0_int *)0xC47245C)->v));
    return ((unsigned short)(unsigned char)t1 * (unsigned short)0x264);
}
