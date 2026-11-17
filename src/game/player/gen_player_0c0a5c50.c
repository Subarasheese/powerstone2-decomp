/* game/player: functions 0C0A5C50-0C0A5FFA, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o12E_short { char p[0x12E]; short v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o168_float { char p[0x168]; float v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o2C_float { char p[0x2C]; float v; };
struct o3728_uchar { char p[0x3728]; unsigned char v; };
struct o374B_uchar { char p[0x374B]; unsigned char v; };
struct o3770_int { char p[0x3770]; int v; };
struct o3830_ushort { char p[0x3830]; unsigned short v; };
struct o8C_float { char p[0x8C]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
int FUN_0c037bf6(int, int, int);
int FUN_0c038362(int);
int thunk_FUN_0c058310(int, int);
int FUN_0c073566(int, int);
int FUN_0c07363a(int, int);
int FUN_0c07d086(int, int, float);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c0a3058(int, int, int, int);
int FUN_0c14f238(int, int, int, int);
int FUN_0c0a5c50(int a4);
int FUN_0c0a5d88(int a4, int a5, int a6);
int FUN_0c0a5ee2(int a4);

int FUN_0c0a5c50(int a4)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;
    register float u1;
    register float u2;

    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    FUN_0c0a3058(a4, (*(signed char *)((a4 + 0x1))), 0x5, 0x2);
    t1 = *(int *)(((0x118 + a4) + 0x4));
    t2 = (((struct o118_int *)(a4))->v);
    (((struct oA0_float *)(t1))->v) = 1.0f;
    (((struct o9C_float *)(t1))->v) = 1.0f;
    (((struct oA0_float *)(t2))->v) = 1.0f;
    (((struct o9C_float *)(t2))->v) = 1.0f;
    t1 = *(int *)(((0x118 + a4) + 0x4));
    t2 = (((struct o118_int *)(a4))->v);
    (((struct o98_float *)(t1))->v) = 1.0f;
    (((struct o98_float *)(t2))->v) = 1.0f;
    (((struct o94_float *)(t1))->v) = 1.0f;
    (((struct o94_float *)(t2))->v) = 1.0f;
    FUN_0c0a3058(((((struct o3770_int *)(a4))->v)), 0xFFFFFFFF, 0x5, 0x18);
    t1 = (((struct o3770_int *)(a4))->v);
    t2 = *(int *)(((t1 + 0x118) + 0x4));
    t3 = (((struct o118_int *)(t1))->v);
    (((struct oA0_float *)(t2))->v) = 1.0f;
    (((struct o9C_float *)(t2))->v) = 1.0f;
    (((struct oA0_float *)(t3))->v) = 1.0f;
    (((struct o9C_float *)(t3))->v) = 1.0f;
    t1 = (((struct o3770_int *)(a4))->v);
    t2 = *(int *)(((t1 + 0x118) + 0x4));
    t3 = (((struct o118_int *)(t1))->v);
    (((struct o98_float *)(t2))->v) = 1.0f;
    (((struct o98_float *)(t3))->v) = 1.0f;
    (((struct o94_float *)(t2))->v) = 1.0f;
    (((struct o94_float *)(t3))->v) = 1.0f;
    (((struct o3728_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x0;
    (((struct o17_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x0;
    *(unsigned int *)((((((struct o3770_int *)(a4))->v)) + 0x38)) = (unsigned short)((*(int *)((a4 + 0x38))) + 0x8000);
    u1 = *(float *)0xC541098;
    if ((((((struct o168_float *)(a4))->v)) > u1) && (t0 = (((struct o3770_int *)(a4))->v), u0 = (((struct o168_float *)(t0))->v), u0 > u1)) {
        u0 = (((struct o168_float *)(a4))->v);
        u1 = (((struct o168_float *)(((((struct o3770_int *)(a4))->v))))->v);
        u2 = u1;
        if (u1 > u0) {
            u2 = u0;
        }
        (((struct o2C_float *)(a4))->v) = u2;
    }
    FUN_0c07d086(a4, 0x0, 100.0f);
    t0 = (((struct o3770_int *)(a4))->v);
    (((struct o3830_ushort *)(t0))->v) = (((((struct o12E_short *)(t0))->v)) ^ 0xF);
    (((struct o374B_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x1;
    return 0x374B;
}

int FUN_0c0a5d88(int a4, int a5, int a6)
{
    int stk[5];
    register int t10;
    register int t22;

    FUN_0c037bf6(a4, a5, a6);
    if (((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v)) == (*(float *)0xC0A5EA4)) {
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532594))) + 0x28), ((int)stk + 0));
        FUN_0c14f238(((int)stk + 0), (a4 + 0x34), (*(signed char *)((a4 + 0x1))), 0x1);
        t10 = (((struct o3770_int *)(a4))->v);
        (((struct o15_uchar *)(t10))->v) = ((*(signed char *)((t10 + 0x15))) + 0x1);
        FUN_0c073566(a4, 0x29);
        FUN_0c07363a(a4, 0x29);
    }
    FUN_0c038362(a4);
    t22 = 0x3770;
    if (((((struct o3770_int *)(a4))->v)) != 0) {
        (((struct o374B_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x1;
        t22 = 0x374B;
    }
    return t22;
}

int FUN_0c0a5ee2(int a4)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;
    register float u1;
    register float u2;

    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    FUN_0c0a3058(a4, (*(signed char *)((a4 + 0x1))), 0x5, 0x3);
    t1 = *(int *)(((0x118 + a4) + 0x4));
    t2 = (((struct o118_int *)(a4))->v);
    (((struct oA0_float *)(t1))->v) = 1.0f;
    (((struct o9C_float *)(t1))->v) = 1.0f;
    (((struct oA0_float *)(t2))->v) = 1.0f;
    (((struct o9C_float *)(t2))->v) = 1.0f;
    t1 = *(int *)(((0x118 + a4) + 0x4));
    t2 = (((struct o118_int *)(a4))->v);
    (((struct o98_float *)(t1))->v) = 1.0f;
    (((struct o98_float *)(t2))->v) = 1.0f;
    (((struct o94_float *)(t1))->v) = 1.0f;
    (((struct o94_float *)(t2))->v) = 1.0f;
    FUN_0c07e79c(((((struct o3770_int *)(a4))->v)), 0xFFFFFFFF, 0x5, 0x2D, 0xFFFFFFFF, 0x5, 0x2D);
    t1 = (((struct o3770_int *)(a4))->v);
    t2 = *(int *)(((t1 + 0x118) + 0x4));
    t3 = (((struct o118_int *)(t1))->v);
    (((struct oA0_float *)(t2))->v) = 1.0f;
    (((struct o9C_float *)(t2))->v) = 1.0f;
    (((struct oA0_float *)(t3))->v) = 1.0f;
    (((struct o9C_float *)(t3))->v) = 1.0f;
    t1 = (((struct o3770_int *)(a4))->v);
    t2 = *(int *)(((t1 + 0x118) + 0x4));
    t3 = (((struct o118_int *)(t1))->v);
    (((struct o98_float *)(t2))->v) = 1.0f;
    (((struct o98_float *)(t3))->v) = 1.0f;
    (((struct o94_float *)(t2))->v) = 1.0f;
    (((struct o94_float *)(t3))->v) = 1.0f;
    (((struct o3728_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x0;
    (((struct o17_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x1;
    u1 = *(float *)0xC541098;
    if ((((((struct o168_float *)(a4))->v)) > u1) && (t0 = (((struct o3770_int *)(a4))->v), u0 = (((struct o168_float *)(t0))->v), u0 > u1)) {
        u0 = (((struct o168_float *)(a4))->v);
        u1 = (((struct o168_float *)(((((struct o3770_int *)(a4))->v))))->v);
        u2 = u1;
        if (u1 > u0) {
            u2 = u0;
        }
        (((struct o2C_float *)(a4))->v) = u2;
    }
    FUN_0c07d086(a4, 0x1, 100.0f);
    t0 = (((struct o3770_int *)(a4))->v);
    (((struct o3830_ushort *)(t0))->v) = (((((struct o12E_short *)(t0))->v)) & 0xFFFFFFF0);
    (((struct o374B_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x1;
    return 0x374B;
}
