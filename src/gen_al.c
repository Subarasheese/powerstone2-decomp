/* Straight-line functions with calls and guards (batch gen_al): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oE4_int { char p[0xE4]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03e5f4(int, float);
int FUN_0c03e642(int, int, int, int, float);
int FUN_0c03f444(int, int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c07e3ae(int, int);
int FUN_0c0dccb0(int);
int FUN_0c17c450(int);
int FUN_0c187798(void);
int FUN_0c1371a0(int a4, int a5, int a6);
int FUN_0c14a1bc(int a4);
int FUN_0c0dade0(int a4, int a5);
int FUN_0c03e874(int a4);

int FUN_0c1371a0(int a4, int a5, int a6)
{
    int stk[7];
    register int t0;

    *(unsigned char *)(((int)stk + 24)) = a4;
    *(unsigned int *)(((int)stk + 16)) = a5;
    *(unsigned int *)(((int)stk + 20)) = a6;
    t0 = FUN_0c03f444(0x1, 0x0, 0x3);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((int)stk + 24)));
        *(unsigned int *)((t0 + 0x4)) = 0xC136FF4;
        *(unsigned int *)((t0 + 0x10)) = (*(int *)(((int)stk + 20)));
        *(volatile int *)((t0 + 0xCC));
        *(volatile int *)(((int)stk + 16));
        FUN_0c187798();
        FUN_0c187798();
        FUN_0c07e3ae(t0, 0x31);
        *(int *)((int)stk + 12) = 0xF0;
        *(int *)((int)stk + 8) = 0x0;
        *(int *)((int)stk + 4) = 0x0;
        *(int *)((int)stk + 0) = 0x100;
        FUN_0c064d24(t0, 0x3, 0x9, 0x0, 0x100, 0x0, 0x0, 0xF0);
        return t0;
    }
    return 0x0;
}

int FUN_0c14a1bc(int a4)
{
    register int t0;
    register int t1;

    t0 = FUN_0c037320(0x2, (*(int *)(((((*(signed char *)((a4 + 0x1))) << 2) << 1) + 0xC4B40E0))));
    t1 = FUN_0c03f444(0x5, 0x0, t0);
    t0 = t1;
    if (t1 != 0) {
        FUN_0c03733c(t1, 0x2, (*(int *)(((((*(signed char *)((a4 + 0x1))) << 2) << 1) + 0xC4B40E0))));
        *(unsigned int *)((t1 + 0x4)) = 0xC14A23C;
        *(unsigned char *)((t1 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        (((struct oAC_ushort *)(t1))->v) = 0x41F;
        (((struct oA9_uchar *)(t1))->v) = (*(signed char *)((a4 + 0xA9)));
        *(unsigned int *)((t1 + 0x10)) = a4;
        (((struct oA4_uint *)(t1))->v) = (((((struct oE4_int *)(a4))->v)) + 0x28);
        FUN_0c187798();
        (((struct o48_float *)(t1))->v) = 1.0f;
        (((struct o44_float *)(t1))->v) = 1.0f;
        (((struct o40_float *)(t1))->v) = 1.0f;
        t0 = 0x40;
    }
    return t0;
}

int FUN_0c0dade0(int a4, int a5)
{
    int stk[2];
    register int t1;
    register int t2;
    register int t9;

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    t1 = FUN_0c037320(0x95, (*(int *)0xC4B410C));
    t2 = FUN_0c03f444(0x5, 0x0, t1);
    t9 = t2;
    if (t2 != 0) {
        *(unsigned char *)((t2 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t2 + 0x4)) = 0xC0DAE5E;
        *(unsigned int *)((t2 + 0x10)) = (*(int *)(((int)stk + 0)));
        *(unsigned char *)((t2 + 0x2)) = (*(signed char *)(((int)stk + 4)));
        FUN_0c03733c(t2, 0x95, (*(int *)0xC4B410C));
        (((struct oAC_ushort *)(t2))->v) = 0x3F;
        (((struct oA9_uchar *)(t2))->v) = 0x21;
        *(volatile int *)(((int)stk + 0));
        FUN_0c187798();
        *(unsigned int *)((t2 + 0x38)) = 0x0;
        *(unsigned int *)((t2 + 0x3C)) = 0x0;
        *(unsigned int *)((t2 + 0x34)) = 0x0;
        (((struct o44_float *)(t2))->v) = (1.0f + 1.0f);
        (((struct o48_float *)(t2))->v) = (1.0f + 1.0f);
        (((struct o40_float *)(t2))->v) = (1.0f + 1.0f);
        t9 = 0x40;
    }
    return t9;
}

int FUN_0c03e874(int a4)
{
    int stk[4];
    register int t0;

    *(unsigned int *)(((int)stk + 0)) = a4;
    t0 = *(signed char *)((a4 + 0xC1B76FC));
    FUN_0c03e642(0x0, (*(int *)((((((t0 << 2) + t0) << 2) + 0xC1B742C) + 0x0))), (((((t0 << 2) + t0) << 2) + 0xC1B742C) + 0x4), (*(int *)((((((t0 << 2) + t0) << 2) + 0xC1B742C) + 0x10))), 1.0f);
    FUN_0c03e5f4(0x0, (*(float *)((((*(int *)(((int)stk + 0))) << 2) + 0xC1B7704))));
    FUN_0c03e642(0x7, (*(int *)((((((t0 << 2) + t0) << 2) + 0xC1B742C) + 0x0))), (((((t0 << 2) + t0) << 2) + 0xC1B742C) + 0x4), (*(int *)((((((t0 << 2) + t0) << 2) + 0xC1B742C) + 0x10))), 1.0f);
    FUN_0c187798();
    FUN_0c17c450((((int)stk + 0) + 0x4));
    FUN_0c0dccb0((((int)stk + 0) + 0x4));
    return (FUN_0c03e642(0x6, (*(int *)((((((t0 << 2) + t0) << 2) + 0xC1B742C) + 0x0))), (((((t0 << 2) + t0) << 2) + 0xC1B742C) + 0x4), (*(int *)((((((t0 << 2) + t0) << 2) + 0xC1B742C) + 0x10))), 1.0f));
}
