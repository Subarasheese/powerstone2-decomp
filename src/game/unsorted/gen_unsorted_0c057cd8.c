/* game/unsorted: functions 0C057CD8-0C057DC4, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
int FUN_0c057cd8(void);
int FUN_0c057cfa(int a4, int a5);

int FUN_0c057cd8(void)
{
    register int t1;

    if ((int)(*(int *)0xC40FAB0) < (int)0xC0) {
        t1 = *(int *)0xC40FAB0;
        *(unsigned int *)0xC40FAB0 = (t1 + 0x1);
        return ((t1 * 0x58) + 0xC40FAB8);
    }
    return 0x0;
}

int FUN_0c057cfa(int a4, int a5)
{
    int stk[3];
    register float u0;
    register float u1;
    register float u3;
    register float u5;
    register int t6;
    register int t8;
    register int t9;
    register int t10;
    register float u11;
    register float u12;
    register float u13;
    register int t14;
    register int t7;
    register int t33;
    register float u34;
    register float u29;
    register int t23;
    register float u24;

    u0 = *(float *)((a4 + 0x0));
    u1 = (((struct o4_float *)(a4))->v);
    *(float *)(((int)stk + 8)) = ((((struct o8_float *)(a4))->v));
    u3 = (((struct o10_float *)(a4))->v);
    *(float *)(((int)stk + 0)) = ((((struct o14_float *)(a4))->v));
    u5 = (((struct o18_float *)(a4))->v);
    *(float *)(((int)stk + 4)) = u5;
    t6 = 0xC057DDC;
    t8 = a4;
    t9 = a5;
    t10 = a5;
    u11 = u5;
    u12 = u3;
    u13 = u0;
    for (;;) {
        t14 = *(signed char *)((t10 + 0x0));
        if ((signed char)t14 == 0) {
            break;
        }
        t6 = (signed char)t14;
        if (t6 != 32) {
            if (t6 == 31) {
                u13 = (u13 - u1);
                t33 = t9;
                u29 = u12;
            } else {
                t6 = (FUN_0c057cd8());
                t8 = t6;
                if (t6 != 0) {
                    t6 = 0xC;
                    *(float *)((t8 + t6)) = u13;
                    t6 = 0x8;
                    u11 = (*(float *)((((int)stk + 0) + t6)));
                    t6 = 0x10;
                    *(float *)((t8 + t6)) = u11;
                    t6 = 0x14;
                    *(float *)((t8 + t6)) = 0.100000001f;
                    t6 = 0x34;
                    *(float *)((t8 + t6)) = 1.0f;
                    t6 = 0x18;
                    *(unsigned int *)((t8 + 0x30)) = 0x0;
                    *(unsigned int *)((t8 + 0x3C)) = 0x5;
                    u11 = (*(float *)(((int)stk + 0)));
                    *(float *)((t8 + t6)) = u11;
                    t6 = 0x4;
                    u11 = (*(float *)((((int)stk + 0) + t6)));
                    t6 = 0x1C;
                    *(float *)((t8 + t6)) = u11;
                    t6 = (*(int *)0xC241F98);
                    t7 = (*(int *)((((int)u3 << 2) + t6)));
                    t7 = (t7 + ((short)(signed char)t14 * (short)0x1C));
                    *(unsigned int *)((t8 + 0x4)) = t7;
                    t6 = 0x0;
                    *(unsigned char *)((t8 + 0x1)) = t6;
                    *(unsigned char *)((t8 + 0x0)) = t6;
                    t23 = t7;
                    u24 = u11;
                }
                u13 = (u13 + u1);
                u11 = u24;
                t7 = t23;
            }
            u34 = u29;
        } else {
            u13 = (u13 + u1);
            t33 = t9;
            u34 = u12;
        }
        u12 = u34;
        t10 = (t10 + 0x1);
        t9 = t33;
    }
    return t6;
}
