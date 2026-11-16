/* Straight-line functions with calls and guards (batch gen_bp): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o3717_uchar { char p[0x3717]; unsigned char v; };
struct o3718_uchar { char p[0x3718]; unsigned char v; };
struct o374A_uchar { char p[0x374A]; unsigned char v; };
struct o3756_uchar { char p[0x3756]; unsigned char v; };
struct o382E_ushort { char p[0x382E]; unsigned short v; };
struct o49_uchar { char p[0x49]; unsigned char v; };
int FUN_0c037bf6(int);
int FUN_0c038362(int);
int FUN_0c085cac(int, int, int, int);
int FUN_0c085d0c(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0ae750(int, int);
int FUN_0c187798(void);
int math_vec3_accumulate(int, int);
int nlCalcPoint(int, int);
int nlCalcVector(int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
extern int thunk_FUN_0c03f346();
int FUN_0c06ce8a(int a4);
int FUN_0c080586(int a4, int a5, int a6, int a7);
int FUN_0c0b10a2(int a4);
int FUN_0c017be8(int a4, int a5, int a6, int a7);
int FUN_0c0582ac(int a4, int a5);
int FUN_0c0582de(int a4, int a5);
int FUN_0c0ac09c(int a4);

int FUN_0c06ce8a(int a4)
{
    int stk[2];
    register int t0;
    register int t4;
    register int t5;

    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        FUN_0c085d0c(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
    }
    t4 = *(signed char *)((a4 + 0x15));
    t5 = t4;
    if (t4 == 2) {
        (((struct o3756_uchar *)(a4))->v) = 0x1E;
        (((struct o374A_uchar *)(a4))->v) = 0x1E;
        (((struct o382E_ushort *)(a4))->v) = 0x0;
        t5 = 0x382E;
    }
    return t5;
}

int FUN_0c080586(int a4, int a5, int a6, int a7)
{
    *(volatile signed char *)((a4 + 0x371D));
    (((struct o3717_uchar *)(a4))->v) = 0x1;
    (((struct o3718_uchar *)(a4))->v) = 0x0;
    FUN_0c085cac(a4, 0x1, 0x0, a7);
    return 0x1;
}

int FUN_0c0b10a2(int a4)
{
    int stk[2];
    register int t0;
    register int t6;

    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        FUN_0c085d0c(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
    }
    FUN_0c038362(a4);
    t6 = 0x4;
    if ((*(signed char *)((a4 + 0x17))) == 0) {
        t6 = 0x3;
    }
    return FUN_0c0ae750(a4, t6);
}

int FUN_0c017be8(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = ((int (*)(int, int, int, int))(thunk_FUN_0c03f346))((*(int *)(((*(int *)0xC304BA0) + 0x20))), a5, a6, a7);
    t0 = ((int (*)(int))(thunk_FUN_0c03f346))((*(int *)(((*(int *)0xC304BA0) + 0x24))));
    t0 = ((int (*)(int))(thunk_FUN_0c03f346))((*(int *)(((*(int *)0xC304BA0) + 0x2C))));
    t0 = ((int (*)(int))(thunk_FUN_0c03f346))((*(int *)(((*(int *)0xC304BA0) + 0x30))));
    (((struct o49_uchar *)((*(int *)0xC304BA0)))->v) = 0x0;
    return 0x49;
}

int FUN_0c0582ac(int a4, int a5)
{
    int stk[5];

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    nlPushMatrix(a5);
    *(volatile int *)(((int)stk + 0));
    FUN_0c187798();
    nlCalcVector((((int)stk + 0) + 0x8), (*(int *)(((int)stk + 0))));
    return (nlPopMatrix(0x1));
}

int FUN_0c0582de(int a4, int a5)
{
    int stk[5];

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    nlPushMatrix(a5);
    *(volatile int *)(((int)stk + 0));
    FUN_0c187798();
    nlCalcPoint((((int)stk + 0) + 0x8), (*(int *)(((int)stk + 0))));
    return (nlPopMatrix(0x1));
}

int FUN_0c0ac09c(int a4)
{
    int stk[2];
    register int t0;

    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        FUN_0c085d0c(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
    }
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    return math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
}
