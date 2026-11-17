/* game/ai: functions 0C0C0E88-0C0C0F32, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
int ai_clear_op_state(void);
int FUN_0c0c0e88(void);

int FUN_0c0c0e88(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = (((struct o0_int *)0xC47245C)->v);
    (((struct o0_uint *)0xC47245C)->v) = (t0 + 0x2);
    t1 = *(short *)((((t0 + 0x2) - 2) + 0x0));
    t0 = *(signed char *)((0xC471ACC + ((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264)));
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 1) {
            t2 = (unsigned char)t0;
            if ((unsigned char)t0 != 2) {
            } else {
                (((struct o4_ushort *)0xC47245C)->v) = 0x1;
                t0 = ai_clear_op_state();
                *(unsigned int *)(((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC) + 0x8)) = ((((struct o0_int *)0xC47245C)->v));
                t2 = t0;
            }
            t0 = t2;
        } else {
            (((struct o4_ushort *)0xC47245C)->v) = 0x0;
            t2 = *(signed char *)0xC472462;
            t3 = *(short *)(((((unsigned short)(unsigned char)t2 * (unsigned short)0x264) + 0xC471ACC) + 0x16));
            *(unsigned short *)(((((unsigned short)(unsigned char)t2 * (unsigned short)0x264) + 0xC471ACC) + 0x16)) = (t3 - 1);
            if ((unsigned short)(t3 - 1) == 0) {
                t2 = *(signed char *)0xC472462;
                *(unsigned char *)(((((unsigned short)(unsigned char)t2 * (unsigned short)0x264) + 0xC471ACC) + 0x0)) = ((*(signed char *)(((((unsigned short)(unsigned char)t2 * (unsigned short)0x264) + 0xC471ACC) + 0x0))) + 0x1);
            }
            t0 = (unsigned short)(t3 - 1);
        }
        t2 = t0;
    } else {
        (((struct o4_ushort *)0xC47245C)->v) = 0x0;
        *(unsigned short *)(((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC) + 0x16)) = t1;
        t0 = *(signed char *)0xC472462;
        *(unsigned char *)(((((unsigned short)(unsigned char)t0 * (unsigned short)0x264) + 0xC471ACC) + 0x0)) = ((*(signed char *)(((((unsigned short)(unsigned char)t0 * (unsigned short)0x264) + 0xC471ACC) + 0x0))) + 0x1);
        (((struct o4_ushort *)0xC47245C)->v) = 0x0;
        t0 = *(signed char *)0xC472462;
        t1 = *(short *)(((((unsigned short)(unsigned char)t0 * (unsigned short)0x264) + 0xC471ACC) + 0x16));
        *(unsigned short *)(((((unsigned short)(unsigned char)t0 * (unsigned short)0x264) + 0xC471ACC) + 0x16)) = (t1 - 1);
        if ((unsigned short)(t1 - 1) == 0) {
            t0 = *(signed char *)0xC472462;
            *(unsigned char *)(((((unsigned short)(unsigned char)t0 * (unsigned short)0x264) + 0xC471ACC) + 0x0)) = ((*(signed char *)(((((unsigned short)(unsigned char)t0 * (unsigned short)0x264) + 0xC471ACC) + 0x0))) + 0x1);
        }
        t2 = (unsigned short)(t1 - 1);
    }
    return t2;
}
