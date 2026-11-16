/* Straight-line functions with calls and guards (batch gen_aq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o3818_short { char p[0x3818]; short v; };
int FUN_0c03f346(int);
int FUN_0c0dc2d0(int, int);
int FUN_0c0e2700(int, int, int, int);
int FUN_0c15ab94(int);
int FUN_0c15ae2e(int);
int FUN_0c187798(int, int, int);
int math_mat_get_translate(int, int);
int FUN_0c15ae60(int a4, int a5, int a6);
int FUN_0c16166c(int a4);
int FUN_0c03ae7a(int a4, int a5, int a6, int a7);
int FUN_0c03af6a(int a4, int a5, int a6, int a7);

int FUN_0c15ae60(int a4, int a5, int a6)
{
    int stk[3];
    register int t0;
    register int t8;
    register int t22;
    register int t28;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
            } else {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                *(unsigned short *)((a4 + 0x1C)) = 0x0;
                FUN_0c187798(a4, a5, a6);
                FUN_0c15ab94(((int)stk + 0));
            }
            t28 = (FUN_0c03f346(a4));
        } else {
            t8 = *(short *)((a4 + 0x1C));
            if (t8 == (*(int *)0xC2A2AAC)) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t28 = 0x14;
            } else {
                *(unsigned short *)((a4 + 0x1C)) = (t8 + 0x1);
                t28 = (t8 + 0x1);
            }
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        FUN_0c187798(a4, a5, a6);
        FUN_0c15ae2e(((int)stk + 0));
        t22 = *(short *)((a4 + 0x1C));
        if (t22 == (*(int *)0xC2A2AAC)) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t28 = 0x14;
        } else {
            *(unsigned short *)((a4 + 0x1C)) = (t22 + 0x1);
            t28 = (t22 + 0x1);
        }
    }
    return t28;
}

int FUN_0c16166c(int a4)
{
    int t0;
    register int t1;

    t1 = *(signed char *)((a4 + 0x1));
    if (((*(signed char *)(((((short)t1 * (short)0x3938) + 0xC532498) + 0x3715))) == 17) && (t0 = (((struct o3818_short *)((((short)t1 * (short)0x3938) + 0xC532498)))->v), (unsigned short)t0 == 0x447)) {
        return 0x3818;
    }
    t0 = *(signed char *)0xC542237;
    if (t0 != 1) {
        if (t0 != 6) {
        } else {
            math_mat_get_translate((a4 + 0x64), (a4 + 0x28));
            FUN_0c0e2700((a4 + 0x28), 0xE, 0xFFFFFFFF, 0x2);
        }
    } else {
        math_mat_get_translate((a4 + 0x64), (a4 + 0x28));
        FUN_0c0dc2d0(a4, 0x30);
    }
    return FUN_0c03f346(a4);
}

int FUN_0c03ae7a(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t4;
    register int t5;
    register int t11;
    register int t12;
    register int t13;
    register int t18;
    int t2;
    register int t3;
    register int t10;

    if ((unsigned int)0xC3C9E10 < (unsigned int)0xC3C9FB0) {
        t0 = 0xC3C9E10;
        for (;;) {
            if (((*(int *)((t0 + 0x4))) == 18) && (t2 = *(int *)((t0 + 0x8)), t2 == 0xFFFF0000)) {
                break;
            }
            t0 = (t0 + 0x34);
            if ((unsigned int)t0 >= (unsigned int)0xC3C9FB0) {
                t0 = 0x0;
                t4 = 0x0;
                for (;;) {
                    t5 = *(int *)((((t0 * 0x34) + 0xC3C9E10) + 0x4));
                    if ((t5 == 18) || (t5 == 1)) {
                        if ((*(int *)((((t0 * 0x34) + 0xC3C9E10) + 0x14))) == 2) {
                            t3 = 0x1;
                            t3 = ((int)t3 << (int)t0);
                            t4 = (t4 | t3);
                        }
                    }
                    t0 = (t0 + 0x1);
                    if ((int)t0 >= (int)0x8) {
                        break;
                    }
                }
                return t4;
            }
        }
        t18 = 0xFFFFFFFF;
    } else {
        t11 = 0x0;
        t12 = 0x0;
        for (;;) {
            t13 = *(int *)((((t11 * 0x34) + 0xC3C9E10) + 0x4));
            if ((t13 == 18) || (t13 == 1)) {
                if ((*(int *)((((t11 * 0x34) + 0xC3C9E10) + 0x14))) == 2) {
                    t10 = 0x1;
                    t10 = ((int)t10 << (int)t11);
                    t12 = (t12 | t10);
                }
            }
            t11 = (t11 + 0x1);
            if ((int)t11 >= (int)0x8) {
                break;
            }
        }
        t18 = t12;
    }
    return t18;
}

int FUN_0c03af6a(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t4;
    register int t5;
    register int t11;
    register int t12;
    register int t13;
    register int t18;
    int t2;
    register int t3;
    register int t10;

    if ((unsigned int)0xC3C9E10 < (unsigned int)0xC3C9FB0) {
        t0 = 0xC3C9E10;
        for (;;) {
            if (((*(int *)((t0 + 0x4))) == 18) && (t2 = *(int *)((t0 + 0x8)), t2 == 0xFFFF0000)) {
                break;
            }
            t0 = (t0 + 0x34);
            if ((unsigned int)t0 >= (unsigned int)0xC3C9FB0) {
                t0 = 0x0;
                t4 = 0x0;
                for (;;) {
                    t5 = *(int *)((((t0 * 0x34) + 0xC3C9E10) + 0x4));
                    if ((t5 == 18) || (t5 == 1)) {
                        if ((*(int *)((((t0 * 0x34) + 0xC3C9E10) + 0x1C))) == 2) {
                            t3 = 0x1;
                            t3 = ((int)t3 << (int)t0);
                            t4 = (t4 | t3);
                        }
                    }
                    t0 = (t0 + 0x1);
                    if ((int)t0 >= (int)0x8) {
                        break;
                    }
                }
                return t4;
            }
        }
        t18 = 0xFFFFFFFF;
    } else {
        t11 = 0x0;
        t12 = 0x0;
        for (;;) {
            t13 = *(int *)((((t11 * 0x34) + 0xC3C9E10) + 0x4));
            if ((t13 == 18) || (t13 == 1)) {
                if ((*(int *)((((t11 * 0x34) + 0xC3C9E10) + 0x1C))) == 2) {
                    t10 = 0x1;
                    t10 = ((int)t10 << (int)t11);
                    t12 = (t12 | t10);
                }
            }
            t11 = (t11 + 0x1);
            if ((int)t11 >= (int)0x8) {
                break;
            }
        }
        t18 = t12;
    }
    return t18;
}
