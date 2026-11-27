/* game/unsorted: functions 0C11E5BC-0C11EAE4, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c11e5bc(int a4, int a5);
int FUN_0c11e722(int a4, int a5);
int FUN_0c11e7f0(int a4, int a5);
int FUN_0c11e880(int a4, int a5, int a6, int a7);
int FUN_0c11e938(int a4);
int FUN_0c11ea4e(int a4);
int FUN_0c11ea98(int a4, int a5);


int FUN_0c11e722(int a4, int a5)
{
    int t1;
    int t2;
    int t3;
    register int t4;
    register int t5;

    t4 = 0x0;
    if ((a5 & 0x80000) != 0) {
        t4 = 0x1;
    }
    t5 = t4;
    if ((a5 & 0x2000) != 0) {
        t5 = (t4 + 0x1);
    }
    t4 = t5;
    if ((a5 & 0x100) != 0) {
        t4 = (t5 + 0x1);
    }
    t5 = (((t4 | 0x80000) | 0x2000) | 0x100);
    if (t4 != 0) {
        t4 = 0x0;
        if (((a5 & 0x80000) != 0) && (t5 = *(int *)((0xC473D04 + (a4 << 2))), (t5 & 0x400) != 0)) {
            t4 = 0x80000;
        }
        t5 = t4;
        if (((a5 & 0x800000) != 0) && (t1 = *(int *)((0xC473D04 + (a4 << 2))), (t1 & 0x4000) != 0)) {
            t5 = (t4 | 0x800000);
        }
        t1 = t5;
        if (((a5 & 0x2000) != 0) && (t2 = *(int *)((0xC473D04 + (a4 << 2))), (t2 & 0x10) != 0)) {
            t1 = (t5 | 0x2000);
        }
        t5 = t1;
        if (((a5 & 0x100) != 0) && (t3 = *(int *)(((a4 << 2) + 0xC474104)), (int)t3 > 0)) {
            t5 = (t1 | 0x100);
        }
    }
    return t5;
}


int FUN_0c11e880(int a4, int a5, int a6, int a7)
{
    int stk[52];
    register int t1;
    register int t2;
    register int t3;
    register int t6;
    register int t7;
    register int t8;
    register int t9;
    register int t10;
    register int t11;
    register int t12;
    register int t17;
    register int t24;
    register int t25;
    register int t26;
    register int t27;
    register int t0;

    *(unsigned int *)(((int)stk + 4)) = (((int)stk + 0) + 0x8);
    t1 = (((int)stk + 0) + 0x8);
    t2 = 0x0;
    t3 = 0xC474410;
    for (;;) {
        if ((int)t2 >= (int)(*(int *)0xC474714)) {
            break;
        }
        t0 = (*(int *)((t3 + 0x0)));
        t3 = (t3 + 0x4);
        t2 = (t2 + 0x1);
        *(unsigned char *)((t1 + 0x0)) = t0;
        t1 = (t1 + 0x1);
    }
    *(unsigned int *)(((int)stk + 0)) = 0xC2925CC;
    t6 = 0xFFFFFF38;
    t7 = 0x180;
    t8 = 0xC2925CC;
    t9 = t2;
    t10 = 0x0;
    t11 = a7;
    t12 = 0xC29244C;
    for (;;) {
        if ((unsigned int)t12 >= (unsigned int)(*(int *)(((int)stk + 0)))) {
            break;
        }
        t11 = (*(short *)((t12 + 0x0)));
        t12 = (t12 + 0x2);
        t6 = t11;
        if (t6 != -1) {
            t8 = 0xC474410;
            t9 = 0xC474410;
            t17 = 0x0;
            for (;;) {
                t7 = (*(int *)0xC474714);
                if ((int)t17 >= (int)t7) {
                    break;
                }
                t7 = (*(int *)((t9 + 0x0)));
                t17 = (t17 + 0x1);
                if (t11 == t7) {
                    t6 = t10;
                    t10 = (t10 + 0x1);
                    *(unsigned char *)(((((int)stk + 0) + 0x8) + t6)) = t11;
                    *(unsigned int *)((t8 + 0x0)) = 0xFFFFFFFF;
                }
                t9 = (t9 + 0x4);
                t8 = (t8 + 0x4);
            }
            continue;
        }
        break;
    }
    t26 = *(int *)(((int)stk + 4));
    if ((int)t10 > 0) {
        t24 = 0xC474410;
        t25 = 0x0;
        for (;;) {
            t27 = *(signed char *)((t26 + 0x0));
            t26 = (t26 + 0x1);
            t25 = (t25 + 0x1);
            *(unsigned int *)((t24 + 0x0)) = (unsigned char)t27;
            t24 = (t24 + 0x4);
            if ((int)t25 >= (int)t10) {
                break;
            }
        }
    }
    return t6;
}

int FUN_0c11e938(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    if ((unsigned int)0xC29244C < (unsigned int)0xC2925CC) {
        t0 = 0xC29244C;
        t1 = 0x0;
        for (;;) {
            t2 = *(short *)((t0 + 0x0));
            t0 = (t0 + 0x2);
            if (t2 != -1) {
                if (t2 == a4) {
                    break;
                }
                t1 = (t1 + 0x1);
                if ((unsigned int)t0 >= (unsigned int)0xC2925CC) {
                    return 0x0;
                }
                continue;
            }
            return 0x0;
        }
        return t1;
    }
    return 0x0;
}

int FUN_0c11ea4e(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = 0x0;
    t1 = 0x0;
    for (;;) {
        if ((*(int *)((0xC2A090C + (t1 << 2)))) == -1) {
            break;
        }
        t2 = FUN_0c11e5bc(t1, a4);
        if (t2 != 0) {
            t2 = FUN_0c11e722(t1, a4);
            if (t2 != 0) {
                t0 = (t0 + 0x1);
            }
        }
        t1 = (t1 + 0x1);
    }
    return t0;
}

int FUN_0c11ea98(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = 0x0;
    t1 = 0x0;
    for (;;) {
        if ((*(int *)((0xC2A090C + (t1 << 2)))) == -1) {
            break;
        }
        t2 = FUN_0c11e7f0(t1, a5);
        if (t2 != 0) {
            t2 = FUN_0c11e722(t1, a4);
            if (t2 != 0) {
                t0 = (t0 + 0x1);
            }
        }
        t1 = (t1 + 0x1);
    }
    return t0;
}
