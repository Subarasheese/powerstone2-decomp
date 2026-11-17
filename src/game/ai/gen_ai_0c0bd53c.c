/* game/ai: functions 0C0BD53C-0C0BDD48, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o28_ushort { char p[0x28]; unsigned short v; };
struct o34_ushort { char p[0x34]; unsigned short v; };
struct o4_float { char p[0x4]; float v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o78_int { char p[0x78]; int v; };
struct o7C_short { char p[0x7C]; short v; };
struct o7C_ushort { char p[0x7C]; unsigned short v; };
struct o7E_short { char p[0x7E]; short v; };
struct o7E_ushort { char p[0x7E]; unsigned short v; };
struct o80_short { char p[0x80]; short v; };
struct o80_ushort { char p[0x80]; unsigned short v; };
struct o8_float { char p[0x8]; float v; };
int FUN_0c0bbe96(int);
int ai_clear_op_state(void);
int ai_script_branch(int a4, int a5);
int FUN_0c0bd5f2(void);
int FUN_0c0bd654(int a4);
int FUN_0c0bd6f2(int a4);
int FUN_0c0bdd22(void);

int ai_script_branch(int a4, int a5)
{
    register int t2;
    register int t3;
    register int t6;
    register int t4;

    t2 = ((*(short *)(((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC) + 0x12))) + 0x1);
    t3 = a5;
    for (;;) {
        t6 = *(short *)(((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC) + 0x12));
        if ((unsigned short)t2 == (unsigned short)t6) {
            break;
        }
        t4 = (*(int *)0xC47245C);
        t4 = (*(short *)((t4 + 0x0)));
        t3 = (unsigned short)t4;
        if (t3 == 12) {
            t2 = (t2 - 1);
        }
        if (t3 == 13) {
            t2 = (t2 - 1);
            if ((unsigned short)t2 != (unsigned short)(*(short *)(((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC) + 0x12)))) {
                t2 = (t2 + 0x1);
            }
        }
        if (t3 == 6) {
            t2 = (t2 + 0x1);
        }
        if (t3 == 7) {
            t2 = (t2 + 0x1);
        }
        if (t3 == 10) {
            t2 = (t2 + 0x1);
        }
        if (t3 == 11) {
            t2 = (t2 + 0x1);
        }
        if (t3 == 8) {
            t2 = (t2 + 0x1);
        }
        t4 = (unsigned short)t4;
        if (t3 == 9) {
            t2 = (t2 + 0x1);
        }
        t3 = (*(signed char *)((0xC25DF1C + t4)));
        t3 = (unsigned char)t3;
        t3 = (unsigned short)t3;
        t3 = (t3 << 1);
        *(unsigned int *)0xC47245C = ((*(int *)0xC47245C) + t3);
    }
    return (unsigned short)t6;
}

int FUN_0c0bd5f2(void)
{
    register int t3;

    (((struct o34_ushort *)((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC)))->v) = 0x0;
    (((struct o7E_ushort *)((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC)))->v) = 0x1;
    (((struct o80_ushort *)((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC)))->v) = 0x1;
    t3 = ai_clear_op_state();
    *(unsigned short *)0xC472460 = 0x0;
    return t3;
}

int FUN_0c0bd654(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    (((struct o28_ushort *)((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC)))->v) = (*(short *)((((((struct o0_int *)0xC47245C)->v)) + 0x0)));
    if ((*(signed char *)((a4 + 0x371A))) == 0) {
        t0 = FUN_0c0bbe96(a4);
        if (t0 == 0) {
            t0 = 0xC25D9FC;
            t1 = ((unsigned char)(*(signed char *)0xC472463) << 2);
        } else {
            t0 = 0xC25DA7C;
            t1 = ((unsigned char)(*(signed char *)0xC472463) << 2);
        }
        t2 = (*(int *)((t1 + t0)));
    } else {
        t2 = (*(int *)((((unsigned char)(*(signed char *)0xC472463) << 2) + 0xC25DA3C)));
    }
    t0 = *(signed char *)0xC472462;
    t1 = (((struct o0_int *)0xC47245C)->v);
    t3 = *(int *)((t2 + 0x0));
    (((struct o0_uint *)0xC47245C)->v) = (t1 + 0x2);
    *(unsigned int *)(((((unsigned short)(unsigned char)t0 * (unsigned short)0x264) + 0xC471ACC) + 0x8)) = (*(int *)((t3 + ((unsigned short)(*(short *)((((t1 + 0x2) - 2) + 0x0))) << 2))));
    (((struct o0_uint *)0xC47245C)->v) = (*(int *)(((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC) + 0x8)));
    t0 = ai_clear_op_state();
    (((struct o4_ushort *)0xC47245C)->v) = 0x1;
    return t0;
}

int FUN_0c0bd6f2(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;

    (((struct o28_ushort *)((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC)))->v) = (*(short *)((((((struct o0_int *)0xC47245C)->v)) + 0x0)));
    if ((*(signed char *)((a4 + 0x371A))) == 0) {
        t0 = FUN_0c0bbe96(a4);
        if (t0 == 0) {
            t0 = 0xC25D9FC;
            t1 = ((unsigned char)(*(signed char *)0xC472463) << 2);
        } else {
            t0 = 0xC25DA7C;
            t1 = ((unsigned char)(*(signed char *)0xC472463) << 2);
        }
        t2 = (*(int *)((t1 + t0)));
    } else {
        t2 = (*(int *)((((unsigned char)(*(signed char *)0xC472463) << 2) + 0xC25DA3C)));
    }
    t0 = (((struct o0_int *)0xC47245C)->v);
    t1 = *(signed char *)0xC472462;
    t3 = *(int *)((t2 + 0x0));
    (((struct o0_uint *)0xC47245C)->v) = (t0 + 0x2);
    *(unsigned int *)(((((unsigned short)(unsigned char)t1 * (unsigned short)0x264) + 0xC471ACC) + 0x8)) = (*(int *)((t3 + ((unsigned short)(*(short *)((((t0 + 0x2) - 2) + 0x0))) << 2))));
    t0 = *(signed char *)0xC472462;
    *(unsigned int *)(((((unsigned short)((((struct o7C_short *)((((unsigned short)(unsigned char)t0 * (unsigned short)0x264) + 0xC471ACC)))->v)) << 2) + (0x1C4 + (((unsigned short)(unsigned char)t0 * (unsigned short)0x264) + 0xC471ACC))) + 0x0)) = ((((struct o0_int *)0xC47245C)->v));
    t0 = *(signed char *)0xC472462;
    *(unsigned int *)(((((unsigned short)((((struct o7C_short *)((((unsigned short)(unsigned char)t0 * (unsigned short)0x264) + 0xC471ACC)))->v)) << 2) + (0x174 + (((unsigned short)(unsigned char)t0 * (unsigned short)0x264) + 0xC471ACC))) + 0x0)) = ((((struct o78_int *)((((unsigned short)(unsigned char)t0 * (unsigned short)0x264) + 0xC471ACC)))->v));
    t0 = *(signed char *)0xC472462;
    t1 = (((struct o7C_short *)((((unsigned short)(unsigned char)t0 * (unsigned short)0x264) + 0xC471ACC)))->v);
    u0 = (((struct o6C_float *)((((unsigned short)(unsigned char)t0 * (unsigned short)0x264) + 0xC471ACC)))->v);
    *(float *)(((((((unsigned short)t1 << 1) + (unsigned short)t1) << 2) + (0x84 + (((unsigned short)(unsigned char)t0 * (unsigned short)0x264) + 0xC471ACC))) + 0x0)) = u0;
    t0 = *(signed char *)0xC472462;
    t1 = (((struct o7C_short *)((((unsigned short)(unsigned char)t0 * (unsigned short)0x264) + 0xC471ACC)))->v);
    u0 = (((struct o70_float *)((((unsigned short)(unsigned char)t0 * (unsigned short)0x264) + 0xC471ACC)))->v);
    (((struct o4_float *)((((((unsigned short)t1 << 1) + (unsigned short)t1) << 2) + (0x84 + (((unsigned short)(unsigned char)t0 * (unsigned short)0x264) + 0xC471ACC)))))->v) = u0;
    t0 = *(signed char *)0xC472462;
    t1 = (((struct o7C_short *)((((unsigned short)(unsigned char)t0 * (unsigned short)0x264) + 0xC471ACC)))->v);
    u0 = (((struct o74_float *)((((unsigned short)(unsigned char)t0 * (unsigned short)0x264) + 0xC471ACC)))->v);
    (((struct o8_float *)((((((unsigned short)t1 << 1) + (unsigned short)t1) << 2) + (0x84 + (((unsigned short)(unsigned char)t0 * (unsigned short)0x264) + 0xC471ACC)))))->v) = u0;
    t0 = *(signed char *)0xC472462;
    *(unsigned short *)(((((unsigned short)((((struct o7C_short *)((((unsigned short)(unsigned char)t0 * (unsigned short)0x264) + 0xC471ACC)))->v)) << 1) + (0x23C + (((unsigned short)(unsigned char)t0 * (unsigned short)0x264) + 0xC471ACC))) + 0x0)) = ((((struct o80_short *)((((unsigned short)(unsigned char)t0 * (unsigned short)0x264) + 0xC471ACC)))->v));
    t0 = *(signed char *)0xC472462;
    *(unsigned short *)(((((unsigned short)((((struct o7C_short *)((((unsigned short)(unsigned char)t0 * (unsigned short)0x264) + 0xC471ACC)))->v)) << 1) + (0x214 + (((unsigned short)(unsigned char)t0 * (unsigned short)0x264) + 0xC471ACC))) + 0x0)) = ((((struct o7E_short *)((((unsigned short)(unsigned char)t0 * (unsigned short)0x264) + 0xC471ACC)))->v));
    t0 = *(signed char *)0xC472462;
    (((struct o7C_ushort *)((((unsigned short)(unsigned char)t0 * (unsigned short)0x264) + 0xC471ACC)))->v) = (((((struct o7C_short *)((((unsigned short)(unsigned char)t0 * (unsigned short)0x264) + 0xC471ACC)))->v)) + 0x1);
    (((struct o0_uint *)0xC47245C)->v) = (*(int *)(((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC) + 0x8)));
    t0 = ai_clear_op_state();
    (((struct o4_ushort *)0xC47245C)->v) = 0x1;
    return t0;
}

int FUN_0c0bdd22(void)
{
    register int t2;

    *(unsigned int *)((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471AD4)) = ((((struct o0_int *)0xC47245C)->v));
    t2 = ai_clear_op_state();
    (((struct o4_ushort *)0xC47245C)->v) = 0x1;
    return t2;
}
