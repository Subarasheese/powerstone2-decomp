/* game/ai: functions 0C0BD53C-0C0BDD48, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
int ai_clear_op_state(void);
int ai_script_branch(void);
int FUN_0c0bd9ee(void);
int FUN_0c0bdab0(void);
int FUN_0c0bdafc(void);
int FUN_0c0bdba2(void);
int FUN_0c0bdbe0(void);
int FUN_0c0bdc1e(void);
int FUN_0c0bdcba(void);
int FUN_0c0bdcf8(void);

int FUN_0c0bd9ee(void)
{
    register int t0;
    register int t1;

    t0 = *(short *)((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471AEE));
    t1 = (((struct o0_int *)0xC47245C)->v);
    (((struct o0_uint *)0xC47245C)->v) = (t1 + 0x2);
    if ((int)t0 <= (int)(*(short *)((((t1 + 0x2) - 2) + 0x0)))) {
        ai_script_branch();
    }
    *(unsigned int *)(((0xC471AD4 + ((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264)) + 0x0)) = ((((struct o0_int *)0xC47245C)->v));
    t0 = ai_clear_op_state();
    (((struct o4_ushort *)0xC47245C)->v) = 0x1;
    return t0;
}

int FUN_0c0bdab0(void)
{
    register int t0;
    register int t1;

    t0 = *(short *)((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471AEE));
    t1 = (((struct o0_int *)0xC47245C)->v);
    (((struct o0_uint *)0xC47245C)->v) = (t1 + 0x2);
    if (t0 != (*(short *)((((t1 + 0x2) - 2) + 0x0)))) {
        ai_script_branch();
    }
    *(unsigned int *)(((0xC471AD4 + ((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264)) + 0x0)) = ((((struct o0_int *)0xC47245C)->v));
    t0 = ai_clear_op_state();
    (((struct o4_ushort *)0xC47245C)->v) = 0x1;
    return t0;
}

int FUN_0c0bdafc(void)
{
    register int t0;
    register int t1;

    t0 = *(short *)((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471AEE));
    t1 = (((struct o0_int *)0xC47245C)->v);
    (((struct o0_uint *)0xC47245C)->v) = (t1 + 0x2);
    if (t0 == (*(short *)((((t1 + 0x2) - 2) + 0x0)))) {
        ai_script_branch();
    }
    *(unsigned int *)(((0xC471AD4 + ((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264)) + 0x0)) = ((((struct o0_int *)0xC47245C)->v));
    t0 = ai_clear_op_state();
    (((struct o4_ushort *)0xC47245C)->v) = 0x1;
    return t0;
}

int FUN_0c0bdba2(void)
{
    register int t10;

    if ((*(short *)((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471AEE))) != 0) {
        ai_script_branch();
    }
    *(unsigned int *)(((0xC471AD4 + ((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264)) + 0x0)) = ((((struct o0_int *)0xC47245C)->v));
    t10 = ai_clear_op_state();
    (((struct o4_ushort *)0xC47245C)->v) = 0x1;
    return t10;
}

int FUN_0c0bdbe0(void)
{
    register int t10;

    if ((*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471AEC))) == 0) {
        ai_script_branch();
    }
    *(unsigned int *)(((0xC471AD4 + ((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264)) + 0x0)) = ((((struct o0_int *)0xC47245C)->v));
    t10 = ai_clear_op_state();
    (((struct o4_ushort *)0xC47245C)->v) = 0x1;
    return t10;
}

int FUN_0c0bdc1e(void)
{
    register int t10;

    if ((*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471AEC))) != 0) {
        ai_script_branch();
    }
    *(unsigned int *)(((0xC471AD4 + ((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264)) + 0x0)) = ((((struct o0_int *)0xC47245C)->v));
    t10 = ai_clear_op_state();
    (((struct o4_ushort *)0xC47245C)->v) = 0x1;
    return t10;
}

int FUN_0c0bdcba(void)
{
    register int t10;

    if ((*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471AED))) != 0) {
        ai_script_branch();
    }
    *(unsigned int *)(((0xC471AD4 + ((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264)) + 0x0)) = ((((struct o0_int *)0xC47245C)->v));
    t10 = ai_clear_op_state();
    (((struct o4_ushort *)0xC47245C)->v) = 0x1;
    return t10;
}

int FUN_0c0bdcf8(void)
{
    register int t3;

    ai_script_branch();
    *(unsigned int *)(((0xC471AD4 + ((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264)) + 0x0)) = ((((struct o0_int *)0xC47245C)->v));
    t3 = ai_clear_op_state();
    (((struct o4_ushort *)0xC47245C)->v) = 0x1;
    return t3;
}
