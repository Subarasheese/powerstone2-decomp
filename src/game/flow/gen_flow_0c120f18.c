/* game/flow: functions 0C120F18-0C1211B0, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o4_int { char p[0x4]; int v; };
int FUN_0c05c5f0(int, float, float);
int FUN_0c187cac(int, int, int, int, int);
int FUN_0c120f18(int a4);
int FUN_0c12105e(int a4, int a5);
int FUN_0c1210e8(void);

int FUN_0c120f18(int a4)
{
    int stk[1];
    register int t4;
    register int t9;
    register int t13;
    register int t22;
    register int t34;
    register int t35;
    register int t36;
    register int t37;
    register int t39;
    register int t43;
    register int t44;
    register int t60;
    register int t25;
    int t2;
    register int t3;
    register int t6;
    register int t7;
    register int t8;
    register int t12;
    register int t16;
    register int t17;
    register int t18;
    register int t19;
    register int t20;
    register int t56;

    if (a4 != 0) {
        if ((*(signed char *)0xC5429B4) == 2) {
            t4 = 0x0;
            for (;;) {
                if ((((int)(*(signed char *)((((t4 * 0x34) + 0xC2738B8) + 0x3))) > (int)0x2) && ((t6 = *(signed char *)((t4 + 0xC542A14)), t3 = t6, t3 = (unsigned char)t3, t3 == 0) && (t2 = 0x81, (int)t4 < (int)t2))) || ((t7 = *(signed char *)((((t4 * 0x34) + 0xC2738B8) + 0x1)), (int)t7 < 0) || (t8 = *(signed char *)((((t4 * 0x34) + 0xC2738B8) + 0x10)), t8 == 7))) {
                    *(unsigned char *)((0xC543024 + t4)) = 0x0;
                } else {
                    *(unsigned char *)((0xC543024 + t4)) = 0x1;
                }
                t9 = t4;
                t4 = (t4 + 0x1);
                if ((int)t4 > (int)0x8F) {
                    break;
                }
            }
            t25 = t9;
        } else {
            t13 = 0x0;
            for (;;) {
                if ((((int)(*(signed char *)((((t13 * 0x34) + 0xC2738B8) + 0x3))) > (int)((*(signed char *)0xC5429B3) + 0x2)) && ((t12 = 0xC542A08, t16 = *(signed char *)((t12 + 0x0)), t16 == 0) || (t17 = *(signed char *)((t13 + 0xC542A14)), (unsigned char)t17 == 0))) || ((t18 = *(signed char *)((((t13 * 0x34) + 0xC2738B8) + 0x1)), (int)t18 < 0) || ((t19 = *(signed char *)((((t13 * 0x34) + 0xC2738B8) + 0x10)), t19 == 7) || (t20 = *(signed char *)((((t13 * 0x34) + 0xC2738B8) + 0x10)), t20 == 8)))) {
                    *(unsigned char *)((0xC543024 + t13)) = 0x0;
                } else {
                    *(unsigned char *)((0xC543024 + t13)) = 0x1;
                }
                t22 = t13;
                t13 = (t13 + 0x1);
                if ((int)t13 > (int)0x8F) {
                    break;
                }
            }
            t25 = t22;
        }
        t60 = t25;
    } else {
        *(unsigned int *)(((int)stk + 0)) = 0xC543024;
        t34 = 0x0;
        t35 = 0xC2738B8;
        t36 = 0xC543024;
        t37 = 0xC543024;
        for (;;) {
            *(unsigned int *)(((int)stk + 0)) = ((t34 * 0x34) + 0xC2738B8);
            t39 = *(signed char *)0xC5429B3;
            if ((int)(*(signed char *)((((t34 * 0x34) + 0xC2738B8) + 0x3))) <= (int)(t39 + 0x2)) {
                t43 = *(signed char *)(((0x10) + (*(int *)(((int)stk + 0)))));
                if (t43 != 7) {
                    *(unsigned char *)((0xC543024 + t34)) = 0x1;
                    t44 = *(signed char *)0xC5429B3;
                    *(unsigned char *)(((int)stk + 0)) = t44;
                    t56 = t44;
                    if (t44 != 0) {
                        t56 = *(signed char *)((t35 + 0x3));
                        if (t56 == ((*(signed char *)(((int)stk + 0))) + 0x2)) {
                            *(unsigned char *)((t36 + 0x0)) = 0x2;
                        }
                    }
                } else {
                    *(unsigned char *)((t37 + 0x0)) = 0x0;
                    t56 = t43;
                }
            } else {
                *(unsigned char *)((t37 + 0x0)) = 0x0;
                t56 = (t39 + 0x2);
            }
            t34 = (t34 + 0x1);
            t37 = (t37 + 0x1);
            t36 = (t36 + 0x1);
            t35 = (t35 + 0x34);
            if ((int)t34 > (int)0x79) {
                break;
            }
        }
        t60 = t56;
    }
    return t60;
}

int FUN_0c12105e(int a4, int a5)
{
    register int t0;
    register int t1;

    *(unsigned int *)(((a5 + 0x14) + 0x0)) = ((int)((int)a4 / (int)0xE10));
    t0 = (int)((int)a4 % (int)0xE10);
    *(unsigned int *)((a5 + 0x10)) = ((int)((int)(*(int *)(((a5 + 0x14) + 0x0))) % (int)0xA));
    *(unsigned int *)(((a5 + 0x14) + 0x0)) = ((int)((int)(*(int *)(((a5 + 0x14) + 0x0))) / (int)0xA));
    *(unsigned int *)(((a5 + 0xC) + 0x0)) = ((int)((int)t0 / (int)0x3C));
    t1 = (int)((int)t0 % (int)0x3C);
    *(unsigned int *)((a5 + 0x8)) = ((int)((int)(*(int *)(((a5 + 0xC) + 0x0))) % (int)0xA));
    *(unsigned int *)(((a5 + 0xC) + 0x0)) = ((int)((int)(*(int *)(((a5 + 0xC) + 0x0))) / (int)0xA));
    *(unsigned int *)(((a5 + 0x4) + 0x0)) = t1;
    *(unsigned int *)((a5 + 0x0)) = ((int)((int)t1 % (int)0xA));
    t0 = (int)((int)(*(int *)(((a5 + 0x4) + 0x0))) / (int)0xA);
    *(unsigned int *)(((a5 + 0x4) + 0x0)) = t0;
    return t0;
}

int FUN_0c1210e8(void)
{
    int stk[25];

    FUN_0c12105e((((((struct o4_int *)0xC475200)->v)) + ((((struct o0_int *)0xC475200)->v))), (((int)stk + 56) + 0x14));
    *(int *)((int)stk + 52) = ((*(int *)(((((int)stk + 56) + 0x14) + 0x0))));
    *(unsigned int *)(((int)stk + 64)) = ((((int)stk + 56) + 0x14) + 0x4);
    *(int *)((int)stk + 48) = ((*(int *)((((((int)stk + 56) + 0x14) + 0x4) + 0x0))));
    *(unsigned int *)(((int)stk + 72)) = ((((int)stk + 56) + 0x14) + 0x8);
    *(int *)((int)stk + 44) = ((*(int *)((((((int)stk + 56) + 0x14) + 0x8) + 0x0))));
    *(unsigned int *)(((int)stk + 56)) = ((((int)stk + 56) + 0x14) + 0xC);
    *(int *)((int)stk + 40) = ((*(int *)((((((int)stk + 56) + 0x14) + 0xC) + 0x0))));
    *(unsigned int *)(((int)stk + 60)) = ((((int)stk + 56) + 0x14) + 0x10);
    *(int *)((int)stk + 36) = ((*(int *)((((((int)stk + 56) + 0x14) + 0x10) + 0x0))));
    *(unsigned int *)(((int)stk + 68)) = ((((int)stk + 56) + 0x14) + 0x14);
    *(int *)((int)stk + 32) = ((*(int *)((((((int)stk + 56) + 0x14) + 0x14) + 0x0))));
    *(int *)((int)stk + 28) = 0xC2019F8;
    FUN_0c187cac(0xC4B107C, 0x0, 0x0, 0x0, 0xC2019F8);
    FUN_0c05c5f0(0xC4B107C, 1.0f, (1.0f + 1.0f));
    FUN_0c12105e(((((struct o0_int *)0xC475200)->v)), (((int)stk + 56) + 0x14));
    *(int *)((int)stk + 24) = ((*(int *)(((((int)stk + 56) + 0x14) + 0x0))));
    *(int *)((int)stk + 20) = ((*(int *)(((*(int *)(((int)stk + 64))) + 0x0))));
    *(int *)((int)stk + 16) = ((*(int *)(((*(int *)(((int)stk + 72))) + 0x0))));
    *(int *)((int)stk + 12) = ((*(int *)(((*(int *)(((int)stk + 56))) + 0x0))));
    *(int *)((int)stk + 8) = ((*(int *)(((*(int *)(((int)stk + 60))) + 0x0))));
    *(int *)((int)stk + 4) = ((*(int *)(((*(int *)(((int)stk + 68))) + 0x0))));
    *(int *)((int)stk + 0) = 0xC201A14;
    FUN_0c187cac(0xC4B107C, 0x0, 0x0, 0x0, 0xC201A14);
    return (FUN_0c05c5f0(0xC4B107C, 1.0f, (*(float *)0xC1211F0)));
}
