/* game/unsorted: functions 0C0BEB98-0C0BFD2E, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
struct o78_uint { char p[0x78]; unsigned int v; };
int ai_clear_op_state(void);
int FUN_0c179ac0(void);
int FUN_0c187798(int, int, int);
int FUN_0c0bfba4(int a4);

int FUN_0c0bfba4(int a4)
{
    register int t0;
    int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;
    register int t10;
    register int t11;
    register int t12;
    int t13;
    register int t14;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;

    t9 = 0xC532498;
    t10 = 0xC532498;
    t11 = 0xC532498;
    t12 = 0x0;
    for (;;) {
        if ((unsigned int)t9 >= (unsigned int)0xC540978) {
            break;
        }
        t13 = 0x3714;
        t14 = (*(signed char *)((t9 + t13)));
        if ((t14 != 0) && ((t13 = 0x160, u0 = 0.0f, u1 = *(float *)((t11 + t13)), u2 = u1, u2 == u0) && (t13 = 0x3719, t0 = a4, t1 = *(signed char *)((t10 + t13)), t2 = (t14 == 0), t14 = t1, t13 = 0x3719, t3 = *(signed char *)((t0 + t13)), t4 = t3, t14 == t4))) {
            t12 = (t12 + 0x1);
        }
        t9 = (t9 + 0x3938);
        t11 = (t11 + 0x3938);
        t10 = (t10 + 0x3938);
    }
    if (t12 != 0) {
        t0 = (int)((int)(FUN_0c179ac0()) % (int)t12);
        t1 = t0;
        t2 = 0xC18760C;
        t3 = 0x0;
        t4 = 0xC532498;
        t9 = 0xC532498;
        t10 = 0xC532498;
        t11 = 0x0;
        for (;;) {
            if ((int)t3 >= (int)0x4) {
                break;
            }
            t1 = 0x3714;
            t13 = (t3 * 0x3938);
            t13 = (t13 + 0xC532498);
            t2 = (*(signed char *)((t13 + t1)));
            if ((t2 != 0) && ((t1 = 0x160, u3 = 0.0f, u4 = *(float *)((t9 + t1)), u5 = u4, u5 == u3) && (t1 = 0x3719, t5 = (t2 == 0), t2 = a4, t6 = *(signed char *)((t10 + t1)), t13 = t6, t1 = 0x3719, t7 = *(signed char *)((t2 + t1)), t8 = t7, t13 == t8))) {
                t13 = t0;
                t14 = t11 == t13;
                t11 = (t11 + 0x1);
                if (t14) {
                    t12 = t4;
                }
            }
            t10 = (t10 + 0x3938);
            t9 = (t9 + 0x3938);
            t3 = (t3 + 0x1);
            t4 = (t4 + 0x3938);
        }
        (((struct o78_uint *)((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC)))->v) = t12;
        *(volatile signed char *)0xC472462;
        FUN_0c187798(t3, t4, t9);
        (((struct o22_ushort *)((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC)))->v) = 0x1;
    } else {
        (((struct o22_ushort *)((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC)))->v) = 0x0;
    }
    *(unsigned int *)(((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC) + 0x8)) = ((((struct o0_int *)0xC47245C)->v));
    t0 = ai_clear_op_state();
    (((struct o4_ushort *)0xC47245C)->v) = 0x1;
    return t0;
}
