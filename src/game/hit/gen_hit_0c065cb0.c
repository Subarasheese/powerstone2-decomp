/* game/hit: functions 0C065CB0-0C065E5A, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct oC_float { char p[0xC]; float v; };
int FUN_0c05ffa4(int, int, int);
int FUN_0c060180(int, int, int, int, int, int, int, int);
int FUN_0c0601da(int, int);
float FUN_0c0e2240(int, int);
int FUN_0c18778c(void);
int FUN_0c065cb0(int a4);
int FUN_0c065e1e(int a4, int a5);

int FUN_0c065cb0(int a4)
{
    int stk[9];
    register int t7;
    register int t8;
    register int t10;
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t22;
    register int t20;

    t7 = a4;
    for (;;) {
        if (t7 == 0) {
            break;
        }
        t0 = 0x125;
        t6 = 0x184;
        t8 = *(signed char *)((t7 + t0));
        t0 = (*(signed char *)((t7 + 0x1)));
        t6 = (t6 + t7);
        t2 = 0xC05FFA4;
        t6 = (t6 + 0x140);
        t10 = t0;
        t0 = 0x124;
        t0 = (FUN_0c05ffa4((*(signed char *)((t7 + t0))), t10, t8));
        t5 = t0;
        t0 = (*(signed char *)((t5 + 0x3)));
        *(unsigned int *)(((int)stk + 0)) = 0x0;
        t3 = t0;
        t4 = 0x0;
        if ((int)t3 > 0) {
            for (;;) {
                t0 = (*(signed char *)((t5 + 0x0)));
                if ((t0 & 3) != 0) {
                    t2 = 0xC18778C;
                    t1 = t5;
                    t0 = 0x20;
                    t0 = (FUN_0c18778c());
                    t0 = (*(signed char *)((t6 + 0x2)));
                    t2 = 0xC060180;
                    t0 = (FUN_0c060180(t7, (t6 + 0x8), t0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12)));
                    t1 = 0xC0601DA;
                    t0 = (FUN_0c0601da((t7 + 0x40), t6));
                    t2 = (*(int *)(((int)stk + 0)));
                    t6 = (t6 + 0x20);
                    t2 = (t2 + 0x1);
                    *(unsigned int *)(((int)stk + 0)) = t2;
                    t20 = t2;
                }
                t2 = t20;
                t4 = (t4 + 0x1);
                t5 = (t5 + 0x20);
                if ((int)t4 >= (int)t3) {
                    break;
                }
            }
            t22 = t2;
        }
        t1 = 0x184;
        t2 = t22;
        t0 = (*(int *)(((int)stk + 0)));
        t1 = (t1 + t7);
        t1 = (t1 + 0x140);
        *(unsigned char *)((t1 + 0x3)) = t0;
        t7 = (*(int *)((t7 + 0xC)));
    }
    return t0;
}

int FUN_0c065e1e(int a4, int a5)
{
    register float u0;
    register float u1;
    register float t2;
    register int t3;

    u0 = (((struct oC_float *)((a5 + 0x8)))->v);
    u1 = (((struct oC_float *)((a4 + 0x8)))->v);
    t2 = FUN_0c0e2240((a4 + 0x8), (a5 + 0x8));
    t3 = 0x0;
    if (!(0.0f > ((u1 + u0) - t2))) {
        t3 = 0x1;
    }
    return t3;
}
