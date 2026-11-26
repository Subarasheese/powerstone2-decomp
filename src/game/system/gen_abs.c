/* Straight-line functions with calls and guards (batch gen_abs): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c02cf88(void);

int FUN_0c02cf88(void)
{
    int stk[5];
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t16;
    register int t12;
    register int t17;
    register int t20;
    register int t28;

    *(unsigned int *)(((int)stk + 0)) = 0xC83C61C;
    t0 = 0x0;
    for (;;) {
        t1 = *(int *)(((0xC83C664 + t0) + 0x0));
        t2 = *(int *)(((0xC83C620 + t0) + 0x0));
        t3 = t0;
        t0 = (t0 + 0x4);
        *(unsigned int *)(((((int)stk + 0) + 0x4) + t3)) = (t2 | t1);
        if ((unsigned int)t0 >= (unsigned int)0x10) {
            break;
        }
    }
    t4 = 0xC543024;
    t5 = 0xC543024;
    t6 = (((int)stk + 0) + 0x4);
    t7 = 0x0;
    t8 = 0x0;
    for (;;) {
        t16 = 0;
        if ((int)(*(signed char *)((((t8 * 0x34) + 0xC2738B8) + 0x3))) > (int)((*(signed char *)0xC5429B3) + 0x2)) {
            t12 = *(signed char *)0xC542A08;
            if (t12 != 0) {
                if ((((int)0x1 << (int)t7) & (*(int *)((t6 + 0x0)))) != 0) {
                    t16 = 1;
                } else {
                    *(unsigned char *)((t4 + 0x0)) = 0x0;
                }
            } else {
                *(unsigned char *)((t4 + 0x0)) = 0x0;
            }
        } else {
            t16 = 1;
        }
        if (t16) {
            t17 = *(signed char *)((((t8 * 0x34) + 0xC2738B8) + 0x1));
            if ((int)t17 >= 0) {
                t20 = *(signed char *)((((t8 * 0x34) + 0xC2738B8) + 0x10));
                if (t20 != 7) {
                    t28 = *(signed char *)((((t8 * 0x34) + 0xC2738B8) + 0x10));
                    if (t28 != 8) {
                        *(unsigned char *)((t5 + 0x0)) = 0x1;
                    } else {
                        *(unsigned char *)((t4 + 0x0)) = 0x0;
                    }
                } else {
                    *(unsigned char *)((t4 + 0x0)) = 0x0;
                    t28 = t20;
                }
            } else {
                *(unsigned char *)((t4 + 0x0)) = 0x0;
                t28 = t17;
            }
        } else {
            t28 = t12;
        }
        t7 = (t7 + 0x1);
        t8 = (t8 + 0x1);
        if ((int)t7 > (int)0x1F) {
            t7 = 0x0;
            t6 = (t6 + 0x4);
        }
        t4 = (t4 + 0x1);
        t5 = (t5 + 0x1);
        if ((int)t8 > (int)0x8F) {
            break;
        }
    }
    return t28;
}
