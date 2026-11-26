/* Straight-line functions with calls and guards (batch gen_aet): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

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

    t0 = (((struct o0_int *)0xC47245C)->v);
    (((struct o0_uint *)0xC47245C)->v) = (t0 + 0x2);
    t1 = *(short *)((((t0 + 0x2) - 2) + 0x0));
    t0 = *(signed char *)((0xC471ACC + ((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264)));
    if ((unsigned char)t0 != 0) {
    } else {
        (((struct o4_ushort *)0xC47245C)->v) = 0x0;
        *(unsigned short *)(((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC) + 0x16)) = t1;
        t1 = *(signed char *)0xC472462;
        *(unsigned char *)(((((unsigned short)(unsigned char)t1 * (unsigned short)0x264) + 0xC471ACC) + 0x0)) = ((*(signed char *)(((((unsigned short)(unsigned char)t1 * (unsigned short)0x264) + 0xC471ACC) + 0x0))) + 0x1);
    }
    if (((unsigned char)t0 == 0) || ((unsigned char)t0 == 1)) {
        (((struct o4_ushort *)0xC47245C)->v) = 0x0;
        t1 = *(signed char *)0xC472462;
        t2 = *(short *)(((((unsigned short)(unsigned char)t1 * (unsigned short)0x264) + 0xC471ACC) + 0x16));
        *(unsigned short *)(((((unsigned short)(unsigned char)t1 * (unsigned short)0x264) + 0xC471ACC) + 0x16)) = (t2 - 1);
        if ((unsigned short)(t2 - 1) == 0) {
            t1 = *(signed char *)0xC472462;
            *(unsigned char *)(((((unsigned short)(unsigned char)t1 * (unsigned short)0x264) + 0xC471ACC) + 0x0)) = ((*(signed char *)(((((unsigned short)(unsigned char)t1 * (unsigned short)0x264) + 0xC471ACC) + 0x0))) + 0x1);
        }
        t1 = (unsigned short)(t2 - 1);
    } else {
        t2 = (unsigned char)t0;
        if ((unsigned char)t0 != 2) {
        } else {
            (((struct o4_ushort *)0xC47245C)->v) = 0x1;
            t0 = ai_clear_op_state();
            *(unsigned int *)(((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC) + 0x8)) = ((((struct o0_int *)0xC47245C)->v));
            t2 = t0;
        }
        t1 = t2;
    }
    return t1;
}
