/* game/player: functions 0C0BA7E4-0C0BA9C2, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o3850_short { char p[0x3850]; short v; };
struct o3850_uint { char p[0x3850]; unsigned int v; };
struct o8C_float { char p[0x8C]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
int FUN_0c037bf6(int);
int FUN_0c07d030(int, int);
int FUN_0c07d774(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c085d0c(int);
int FUN_0c123010(int, int);
int FUN_0c1238f8(int, int);
int FUN_0c14e5b4(int, int, int, int, int, int, int, int, int, int);
int FUN_0c14e7d8(int, int);
int FUN_0c0ba7e4(int a4);
int FUN_0c0ba890(int a4);
int FUN_0c0ba952(int a4);

int FUN_0c0ba7e4(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    FUN_0c07d030(a4, 0x0);
    if ((*(signed char *)((a4 + 0x375A))) != 3) {
        t0 = *(signed char *)((a4 + 0x1));
        t1 = 0xE;
        t2 = (t0);
        t3 = t0;
        t0 = 0xE;
    } else {
        t3 = *(signed char *)((a4 + 0x1));
        t1 = 0xF;
        t2 = (t3);
        t0 = 0xF;
    }
    FUN_0c07e79c(a4, t3, 0x1, t0, t2, 0x1, t1);
    t0 = *(int *)(((0x118 + a4) + 0x4));
    t1 = (((struct o118_int *)(a4))->v);
    (((struct oA0_float *)(t0))->v) = 1.0f;
    (((struct o9C_float *)(t0))->v) = 1.0f;
    (((struct oA0_float *)(t1))->v) = 1.0f;
    (((struct o9C_float *)(t1))->v) = 1.0f;
    t0 = *(int *)(((0x118 + a4) + 0x4));
    t1 = (((struct o118_int *)(a4))->v);
    (((struct o98_float *)(t0))->v) = 1.0f;
    (((struct o98_float *)(t1))->v) = 1.0f;
    (((struct o94_float *)(t0))->v) = 1.0f;
    (((struct o94_float *)(t1))->v) = 1.0f;
    *(unsigned short *)((a4 + 0x1C)) = 0x0;
    if ((*(signed char *)((a4 + 0x3731))) == 0) {
        (((struct o20_ushort *)(a4))->v) = 0x4;
        (((struct o3850_uint *)(a4))->v) = (FUN_0c07d774(a4));
    } else {
        (((struct o20_ushort *)(a4))->v) = 0x0;
    }
    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    return 0x15;
}

int FUN_0c0ba890(int a4)
{
    int stk[2];
    register int t0;
    register int t7;
    register int t8;
    register int t10;
    register int t43;
    register int t31;
    register int t34;

    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        return FUN_0c085d0c(a4);
    }
    if (((((struct o20_short *)(a4))->v)) != 0) {
        t7 = *(int *)((a4 + 0x38));
        t8 = (((struct o3850_short *)(a4))->v);
        t10 = (unsigned short)(t8 - t7);
        if ((0x8000 & (unsigned short)(t8 - t7)) != 0) {
            t10 = ((unsigned short)(t8 - t7) | 0xFFFF0000);
        }
        if ((int)((((struct o20_short *)(a4))->v)) > 0) {
            *(unsigned int *)((a4 + 0x38)) = (unsigned short)((*(int *)((a4 + 0x38))) + ((int)((int)t10 / (int)((((struct o20_short *)(a4))->v)))));
        }
        (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) - 1);
    }
    t43 = 0x8C;
    if (!((*(float *)0xC0BA9D8) > ((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v)))) {
        t31 = *(short *)((a4 + 0x1C));
        t43 = t31;
        if (t31 == 0) {
            FUN_0c14e5b4(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20));
            FUN_0c14e7d8(a4, 0x0);
            t34 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t34 + 0x1);
            t43 = (t34 + 0x1);
        }
    }
    return t43;
}

int FUN_0c0ba952(int a4)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x1));
    FUN_0c07e79c(a4, t0, 0x1, 0x12, (t0), 0x1, 0x12);
    t0 = *(int *)(((0x118 + a4) + 0x4));
    t1 = (((struct o118_int *)(a4))->v);
    (((struct oA0_float *)(t0))->v) = 1.0f;
    (((struct o9C_float *)(t0))->v) = 1.0f;
    (((struct oA0_float *)(t1))->v) = 1.0f;
    (((struct o9C_float *)(t1))->v) = 1.0f;
    t0 = *(int *)(((0x118 + a4) + 0x4));
    t1 = (((struct o118_int *)(a4))->v);
    (((struct o98_float *)(t0))->v) = 1.0f;
    (((struct o98_float *)(t1))->v) = 1.0f;
    (((struct o94_float *)(t0))->v) = 1.0f;
    (((struct o94_float *)(t1))->v) = 1.0f;
    FUN_0c123010(a4, 0x0);
    FUN_0c1238f8(a4, 0x1);
    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    return 0x15;
}
