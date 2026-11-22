/* game/effect: functions 0C07BC8C-0C07C496, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o10_uchar { char p[0x10]; unsigned char v; };
int FUN_0c042fe0(void);
int FUN_0c07bc8c(int);
int FUN_0c07bcc2(int);
int FUN_0c0f414e(int, int, int, int);
int pdVibMxStop(int);
int FUN_0c07bdd0(int a4, int a5);
int FUN_0c07bf00(int a4, int a5);
int FUN_0c07c01c(int a4, int a5, int a6, int a7);
int FUN_0c07c404(int a4);
int FUN_0c07c462(void);

int FUN_0c07bdd0(int a4, int a5)
{
    int stk[4];
    register int t2;
    register int t50;
    register int t3;
    register int t6;
    register int t7;
    register int t9;
    register int t10;
    register int t14;
    register int t17;
    register int t20;
    register int t22;
    register int t23;
    register int t27;
    register int t29;

    *(unsigned int *)(((int)stk + 0)) = a5;
    *(unsigned char *)(((int)stk + 12)) = (*(signed char *)0xC1C5DA0);
    *(unsigned char *)(((int)stk + 8)) = (*(signed char *)0xC1C5DA1);
    t2 = FUN_0c07bc8c(a4);
    t50 = t2;
    if (t2 == 0) {
        t3 = FUN_0c042fe0();
        t50 = t3;
        if (t3 != 0) {
            t50 = 0x3720;
            if ((*(signed char *)((a4 + 0x3720))) == 0) {
                t6 = FUN_0c07bcc2(a4);
                *(unsigned int *)(((int)stk + 4)) = t6;
                t50 = t6;
                if (t6 != 99) {
                    t7 = *(signed char *)((a4 + 0x1));
                    *(unsigned char *)(((0x4 + ((((t7 << 1) + t7) << 2) + 0xC471A9C)) + 0x0)) = 0x1;
                    t9 = *(signed char *)((a4 + 0x1));
                    t10 = *(int *)(((int)stk + 0));
                    *(unsigned char *)(((0x5 + ((((t9 << 1) + t9) << 2) + 0xC471A9C)) + 0x0)) = (*(signed char *)(((((t10 << 1) + (t10 << 2)) + 0xC25C160) + 0x0)));
                    t14 = *(signed char *)((a4 + 0x1));
                    *(unsigned char *)(((((((t14 << 1) + t14) << 2) + 0xC471A9C) + 0x6) + 0x0)) = (*(signed char *)(((((t10 << 1) + (t10 << 2)) + 0xC25C160) + 0x1)));
                    t17 = *(signed char *)((a4 + 0x1));
                    *(unsigned char *)(((((((t17 << 1) + t17) << 2) + 0xC471A9C) + 0x7) + 0x0)) = (*(signed char *)(((((t10 << 1) + (t10 << 2)) + 0xC25C160) + 0x2)));
                    t20 = *(signed char *)((a4 + 0x1));
                    *(unsigned char *)(((0x8 + ((((t20 << 1) + t20) << 2) + 0xC471A9C)) + 0x0)) = 0x0;
                    t22 = *(short *)(((((t10 << 1) + (t10 << 2)) + 0xC25C160) + 0x4));
                    t23 = t22;
                    if ((int)t22 > (int)0xFF) {
                        t23 = 0xFF;
                    }
                    *(unsigned char *)(((((int)stk + 0) + 0x8) + 0x0)) = t23;
                    FUN_0c0f414e((*(int *)(((int)stk + 4))), (((int)stk + 0) + 0xC), (((int)stk + 0) + 0x8), 0x1);
                    t27 = *(signed char *)((a4 + 0x1));
                    *(unsigned short *)((((((t27 << 1) + t27) << 2) + 0xC471A9C) + 0x0)) = 0x2;
                    t29 = *(signed char *)((a4 + 0x1));
                    t50 = *(short *)(((((t10 << 1) + (t10 << 2)) + 0xC25C160) + 0x4));
                    *(unsigned short *)(((0xC471A9C + (((t29 << 1) + t29) << 2)) + 0x2)) = t50;
                }
            }
        }
    }
    return t50;
}

int FUN_0c07bf00(int a4, int a5)
{
    int stk[4];
    register int t2;
    register int t43;
    register int t5;
    register int t6;
    register int t8;
    register int t9;
    register int t13;
    register int t16;
    register int t19;
    register int t21;
    register int t22;
    register int t26;
    register int t28;

    *(unsigned int *)(((int)stk + 0)) = a5;
    *(unsigned char *)(((int)stk + 12)) = (*(signed char *)0xC1C5DA2);
    *(unsigned char *)(((int)stk + 8)) = (*(signed char *)0xC1C5DA3);
    t2 = FUN_0c07bc8c(a4);
    t43 = t2;
    if (t2 == 0) {
        t43 = 0x3720;
        if ((*(signed char *)((a4 + 0x3720))) == 0) {
            t5 = FUN_0c07bcc2(a4);
            *(unsigned int *)(((int)stk + 4)) = t5;
            t43 = t5;
            if (t5 != 99) {
                t6 = *(signed char *)((a4 + 0x1));
                *(unsigned char *)(((0x4 + ((((t6 << 1) + t6) << 2) + 0xC471A9C)) + 0x0)) = 0x1;
                t8 = *(signed char *)((a4 + 0x1));
                t9 = *(int *)(((int)stk + 0));
                *(unsigned char *)(((0x5 + ((((t8 << 1) + t8) << 2) + 0xC471A9C)) + 0x0)) = (*(signed char *)(((((t9 << 1) + (t9 << 2)) + 0xC25C160) + 0x0)));
                t13 = *(signed char *)((a4 + 0x1));
                *(unsigned char *)(((((((t13 << 1) + t13) << 2) + 0xC471A9C) + 0x6) + 0x0)) = (*(signed char *)(((((t9 << 1) + (t9 << 2)) + 0xC25C160) + 0x1)));
                t16 = *(signed char *)((a4 + 0x1));
                *(unsigned char *)(((((((t16 << 1) + t16) << 2) + 0xC471A9C) + 0x7) + 0x0)) = (*(signed char *)(((((t9 << 1) + (t9 << 2)) + 0xC25C160) + 0x2)));
                t19 = *(signed char *)((a4 + 0x1));
                *(unsigned char *)(((0x8 + ((((t19 << 1) + t19) << 2) + 0xC471A9C)) + 0x0)) = 0x0;
                t21 = *(short *)(((((t9 << 1) + (t9 << 2)) + 0xC25C160) + 0x4));
                t22 = t21;
                if ((int)t21 > (int)0xFF) {
                    t22 = 0xFF;
                }
                *(unsigned char *)(((((int)stk + 0) + 0x8) + 0x0)) = t22;
                FUN_0c0f414e((*(int *)(((int)stk + 4))), (((int)stk + 0) + 0xC), (((int)stk + 0) + 0x8), 0x1);
                t26 = *(signed char *)((a4 + 0x1));
                *(unsigned short *)((((((t26 << 1) + t26) << 2) + 0xC471A9C) + 0x0)) = 0x2;
                t28 = *(signed char *)((a4 + 0x1));
                t43 = *(short *)(((((t9 << 1) + (t9 << 2)) + 0xC25C160) + 0x4));
                *(unsigned short *)(((0xC471A9C + (((t28 << 1) + t28) << 2)) + 0x2)) = t43;
            }
        }
    }
    return t43;
}

int FUN_0c07c01c(int a4, int a5, int a6, int a7)
{
    int stk[6];
    register int t2;
    register int t35;
    register int t5;
    register int t6;
    register int t8;
    register int t10;
    register int t13;
    register int t16;
    register int t20;
    register int t22;
    register int t24;

    *(unsigned char *)(((int)stk + 8)) = a5;
    *(unsigned char *)(((int)stk + 0)) = a6;
    *(unsigned char *)(((int)stk + 4)) = a7;
    *(unsigned char *)(((int)stk + 20)) = (*(signed char *)0xC1C5DA4);
    *(unsigned char *)(((int)stk + 16)) = (*(signed char *)0xC1C5DA5);
    t2 = FUN_0c07bc8c(a4);
    t35 = t2;
    if (t2 == 0) {
        t35 = 0x3720;
        if ((*(signed char *)((a4 + 0x3720))) == 0) {
            t5 = FUN_0c07bcc2(a4);
            *(unsigned int *)(((int)stk + 12)) = t5;
            t35 = t5;
            if (t5 != 99) {
                t6 = *(signed char *)((a4 + 0x1));
                *(unsigned char *)(((0x4 + ((((t6 << 1) + t6) << 2) + 0xC471A9C)) + 0x0)) = 0x1;
                t8 = *(signed char *)((a4 + 0x1));
                *(unsigned char *)(((0x5 + ((((t8 << 1) + t8) << 2) + 0xC471A9C)) + 0x0)) = 0x1;
                t10 = *(signed char *)((a4 + 0x1));
                *(unsigned char *)(((((((t10 << 1) + t10) << 2) + 0xC471A9C) + 0x6) + 0x0)) = (*(signed char *)(((int)stk + 8)));
                t13 = *(signed char *)((a4 + 0x1));
                *(unsigned char *)(((0x7 + ((((t13 << 1) + t13) << 2) + 0xC471A9C)) + 0x0)) = (*(signed char *)(((int)stk + 0)));
                t16 = *(signed char *)((a4 + 0x1));
                *(unsigned char *)(((0x8 + ((((t16 << 1) + t16) << 2) + 0xC471A9C)) + 0x0)) = 0x0;
                (((struct o10_uchar *)(((int)stk + 0)))->v) = 0xFF;
                FUN_0c0f414e((*(int *)(((int)stk + 12))), (((int)stk + 0) + 0x14), (((int)stk + 0) + 0x10), 0x1);
                t20 = *(signed char *)((a4 + 0x1));
                *(unsigned short *)((((((t20 << 1) + t20) << 2) + 0xC471A9C) + 0x0)) = 0x2;
                t22 = *(signed char *)((a4 + 0x1));
                t24 = *(signed char *)(((int)stk + 4));
                *(unsigned short *)(((0xC471A9C + (((t22 << 1) + t22) << 2)) + 0x2)) = (unsigned char)t24;
                t35 = (unsigned char)t24;
            }
        }
    }
    return t35;
}


int FUN_0c07c462(void)
{
    register int t2;
    register int t0;
    register int t1;

    t2 = 0x0;
    if ((unsigned int)0xC532498 < (unsigned int)0xC540978) {
        t0 = 0xC532498;
        for (;;) {
            t1 = FUN_0c07bcc2(t0);
            if (t1 != 99) {
                break;
            }
            t0 = (t0 + 0x3938);
            if ((unsigned int)t0 >= (unsigned int)0xC540978) {
                return 0x0;
            }
        }
        t2 = 0x1;
    }
    return t2;
}
