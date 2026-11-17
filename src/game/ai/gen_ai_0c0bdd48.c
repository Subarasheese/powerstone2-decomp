/* game/ai: functions 0C0BDD48-0C0BDD8E, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
struct o80_short { char p[0x80]; short v; };
struct o80_ushort { char p[0x80]; unsigned short v; };
int ai_clear_op_state(void);
int FUN_0c0bdd48(void);

int FUN_0c0bdd48(void)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)0xC472462;
    t1 = (((struct o0_int *)0xC47245C)->v);
    (((struct o0_uint *)0xC47245C)->v) = (t1 + 0x2);
    (((struct o80_ushort *)((((unsigned short)(unsigned char)t0 * (unsigned short)0x264) + 0xC471ACC)))->v) = (((((struct o80_short *)((((unsigned short)(unsigned char)t0 * (unsigned short)0x264) + 0xC471ACC)))->v)) | (*(short *)((((t1 + 0x2) - 2) + 0x0))));
    *(unsigned int *)(((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC) + 0x8)) = ((((struct o0_int *)0xC47245C)->v));
    t0 = ai_clear_op_state();
    (((struct o4_ushort *)0xC47245C)->v) = 0x1;
    return t0;
}
