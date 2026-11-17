/* game/unsorted: functions 0C0389DC-0C0392BC, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o114_int { char p[0x114]; int v; };
struct o118_int { char p[0x118]; int v; };
struct o68_int { char p[0x68]; int v; };
int FUN_0c038c1c(int);
int FUN_0c038d8a(int);
int nlCalcPoint(int, int);
int nlStoreMatrix(int);
extern int FUN_0c17b1a0();
int nlMultiMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScaleV(int);
int nlSetTranslate(int);
int nlTranslateV(int);
int nlUnitMatrix(void);
int FUN_0c0389dc(int a4, int a5, int a6, int a7);
int FUN_0c038a3a(int a4, int a5, int a6);
int FUN_0c038b42(int a4, int a5, int a6);
int FUN_0c038e88(int a4);
int FUN_0c038ec2(int a4);
int FUN_0c038ee0(int a4);
int FUN_0c038f1a(int a4);

int FUN_0c0389dc(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    if ((0x1 & (short)a4) != 0) {
        t0 = (nlTranslateV(a5));
    }
    t1 = t0;
    if ((0x8 & (short)a4) != 0) {
        t1 = (nlRotateAZ((*(int *)((a6 + 0x8)))));
    }
    t0 = t1;
    if ((0x4 & (short)a4) != 0) {
        t0 = (nlRotateAY((*(int *)((a6 + 0x4)))));
    }
    t1 = t0;
    if ((0x2 & (short)a4) != 0) {
        t1 = (nlRotateAX((*(int *)((a6 + 0x0)))));
    }
    if (((short)a4 & 0x10) != 0) {
        return nlScaleV(a7);
    }
    return t1;
}

int FUN_0c038a3a(int a4, int a5, int a6)
{
    int stk[4];
    register int t1;
    register int t31;
    register int t7;
    register int t11;
    register int t13;
    register int t23;

    *(unsigned int *)(((int)stk + 0)) = (*(signed char *)0xC5421DC);
    t1 = *(short *)((a5 + 0x6));
    t31 = (unsigned short)t1;
    if (((unsigned short)t1 & 0x13F) != 0) {
        if (((((struct o68_int *)(a5))->v)) != 0) {
            t7 = ((int (*)(int, int, int))(FUN_0c17b1a0))(((((struct o68_int *)(a5))->v)), a5, a6);
        } else {
            t11 = (a4 + 0x64);
            if (((((struct o114_int *)(a4))->v)) != 0) {
                t11 = (((((struct o118_int *)(a4))->v)) + 0x24);
            }
            t13 = ((int (*)(int, int, int))(FUN_0c17b1a0))(t11, a5, a6);
        }
        if (((unsigned short)(*(short *)((a5 + 0x6))) & 32) != 0) {
            nlCalcPoint((a5 + 0x6C), (((int)stk + 0) + 0x4));
            nlUnitMatrix();
            FUN_0c0389dc(((*(short *)((a5 + 0x6))) & 0xFFFFFFFE), (a5 + 0x6C), (a5 + 0x78), (0x84 + a5));
            nlStoreMatrix((a5 + 0x28));
            t23 = ((int (*)(int))(FUN_0c17b1a0))((((*(int *)(((int)stk + 0))) * 0x2F8) + 0xC541174));
            nlSetTranslate((((int)stk + 0) + 0x4));
            nlMultiMatrix((a5 + 0x28));
        } else {
            FUN_0c0389dc((*(short *)((a5 + 0x6))), (a5 + 0x6C), (a5 + 0x78), (0x84 + a5));
        }
        t31 = (nlStoreMatrix((a5 + 0x28)));
    }
    return t31;
}

int FUN_0c038b42(int a4, int a5, int a6)
{
    int stk[5];
    register int t1;
    register int t25;
    register int t9;
    register int t17;
    register int t7;

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 4)) = (*(signed char *)0xC5421DC);
    t1 = *(short *)((a5 + 0x6));
    t25 = (unsigned short)t1;
    if (((unsigned short)t1 & 0x13F) != 0) {
        if (((((struct o68_int *)(a5))->v)) != 0) {
            t7 = ((((struct o68_int *)(a5))->v));
        } else {
            t7 = ((*(int *)(((int)stk + 0))) + 0x64);
        }
        t9 = ((int (*)(int, int, int))(FUN_0c17b1a0))(t7, a5, a6);
        if (((unsigned short)(*(short *)((a5 + 0x6))) & 32) != 0) {
            nlCalcPoint((a5 + 0x6C), (((int)stk + 0) + 0x8));
            nlUnitMatrix();
            FUN_0c0389dc(((*(short *)((a5 + 0x6))) & 0xFFFFFFFE), (a5 + 0x6C), (a5 + 0x78), (0x84 + a5));
            nlStoreMatrix((a5 + 0x28));
            t17 = ((int (*)(int))(FUN_0c17b1a0))((((*(int *)(((int)stk + 4))) * 0x2F8) + 0xC541174));
            nlSetTranslate((((int)stk + 0) + 0x8));
            nlMultiMatrix((a5 + 0x28));
        } else {
            FUN_0c0389dc((*(short *)((a5 + 0x6))), (a5 + 0x6C), (a5 + 0x78), (0x84 + a5));
        }
        t25 = (nlStoreMatrix((a5 + 0x28)));
    }
    return t25;
}

int FUN_0c038e88(int a4)
{
    register int t1;
    register int t2;

    t1 = 0xC532434;
    t2 = (*(int *)(((a4 << 2) + 0xC532434)));
    for (;;) {
        if (t2 == 0) {
            break;
        }
        t1 = (FUN_0c038c1c(t2));
        t2 = (*(int *)((t2 + 0xC)));
    }
    return t1;
}

int FUN_0c038ec2(int a4)
{
    register int t1;
    register int t2;

    t1 = 0xC532434;
    t2 = (*(int *)(((a4 << 2) + 0xC532434)));
    for (;;) {
        if (t2 == 0) {
            break;
        }
        t1 = (FUN_0c038d8a(t2));
        t2 = (*(int *)((t2 + 0xC)));
    }
    return t1;
}

int FUN_0c038ee0(int a4)
{
    int t1;
    register int t2;
    register int t3;
    register float u4;
    register float u5;
    register float u10;
    register int t11;
    register int t12;
    register float u13;
    register int t15;
    register float u16;
    register float u17;

    t1 = 0xC532434;
    t2 = a4;
    t3 = (*(int *)(((a4 << 2) + 0xC532434)));
    for (;;) {
        if (t3 == 0) {
            break;
        }
        t1 = 0x178;
        u5 = 0.0f;
        u4 = (*(float *)((t3 + t1)));
        if ((u4 == u5) && ((t1 = 0x17C, u10 = *(float *)((t3 + t1)), t11 = (u4 == u5), u4 = u10, u4 == u5) && (t1 = 0x180, t12 = (u4 == u5), u5 = 0.0f, u13 = *(float *)((t3 + t1)), u4 = u13, u4 == u5))) {
            t15 = t2;
            u16 = u4;
            u17 = u5;
        } else {
            t2 = t3;
            t1 = (FUN_0c038c1c(t2));
        }
        u4 = u16;
        u5 = u17;
        t3 = (*(int *)((t3 + 0xC)));
        t2 = t15;
    }
    return t1;
}

int FUN_0c038f1a(int a4)
{
    int t1;
    register int t2;
    register int t3;
    register float u4;
    register float u5;
    register float u10;
    register int t11;
    register int t12;
    register float u13;
    register int t15;
    register float u16;
    register float u17;

    t1 = 0xC532434;
    t2 = a4;
    t3 = (*(int *)(((a4 << 2) + 0xC532434)));
    for (;;) {
        if (t3 == 0) {
            break;
        }
        t1 = 0x178;
        u5 = 0.0f;
        u4 = (*(float *)((t3 + t1)));
        if ((u4 == u5) && ((t1 = 0x17C, u10 = *(float *)((t3 + t1)), t11 = (u4 == u5), u4 = u10, u4 == u5) && (t1 = 0x180, t12 = (u4 == u5), u5 = 0.0f, u13 = *(float *)((t3 + t1)), u4 = u13, u4 == u5))) {
            t15 = t2;
            u16 = u4;
            u17 = u5;
        } else {
            t2 = t3;
            t1 = (FUN_0c038d8a(t2));
        }
        u4 = u16;
        u5 = u17;
        t3 = (*(int *)((t3 + 0xC)));
        t2 = t15;
    }
    return t1;
}
