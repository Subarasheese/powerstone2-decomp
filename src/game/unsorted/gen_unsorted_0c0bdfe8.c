/* game/unsorted: functions 0C0BDFE8-0C0BE022, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
int ai_clear_op_state(void);
int FUN_0c0bdfe8(int a4);

int FUN_0c0bdfe8(int a4)
{
    (((struct o22_ushort *)((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC)))->v) = (*(signed char *)((a4 + 0x374D)));
    *(unsigned int *)(((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC) + 0x8)) = ((((struct o0_int *)0xC47245C)->v));
    ai_clear_op_state();
    (((struct o4_ushort *)0xC47245C)->v) = 0x1;
    return 0x1;
}
