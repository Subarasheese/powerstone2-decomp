/* game/stage: functions 0C09A458-0C09B052, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o374B_uchar { char p[0x374B]; unsigned char v; };
struct o3770_int { char p[0x3770]; int v; };
struct o3770_uint { char p[0x3770]; unsigned int v; };
struct o445_uchar { char p[0x445]; unsigned char v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
int FUN_0c037bf6(int);
int FUN_0c038362(int);
int thunk_FUN_0c058310(int, int);
int FUN_0c059df2(int, int);
int FUN_0c059e60(int, int);
int FUN_0c07db58(int, int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c085d0c(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c09a5ac(int, int, int, int, int, int, int, int, int, int);
int FUN_0c09a738(int, int, int, int, int, int, int, int, int, int);
int FUN_0c09a9f0(int, int, int, int);
int FUN_0c09ab14(int, int, int, int, int, int, int, int, int, int);
int FUN_0c09acb8(int, int, int, int);
int FUN_0c14f238(int, int, int, int);
extern int FUN_0c187798();
int FUN_0c09a87c(int a4, int a5, int a6, int a7);
int FUN_0c09aace(int a4, int a5, int a6, int a7);
int FUN_0c09ae00(int a4, int a5, int a6, int a7);

int FUN_0c09a87c(int a4, int a5, int a6, int a7)
{
    int stk[15];
    register int t6;
    register int t7;
    register int t8;
    register int t10;
    register int t11;
    register int t12;
    register int t13;
    register int t16;
    register int t17;
    register int t18;
    register int t19;
    register int t20;
    register int t21;
    register int t42;

    if (((((struct o3770_int *)(a4))->v)) == 0) {
        t42 = (FUN_0c085d0c(a4, a5, a6, a7, *(int *)((int)stk + 24), *(int *)((int)stk + 24 + 4), *(int *)((int)stk + 24 + 8), *(int *)((int)stk + 24 + 12), *(int *)((int)stk + 24 + 16), *(int *)((int)stk + 24 + 20), *(int *)((int)stk + 24 + 24), *(int *)((int)stk + 24 + 28)));
    } else {
        FUN_0c037bf6(((((struct o3770_int *)(a4))->v)));
        FUN_0c038362(((((struct o3770_int *)(a4))->v)));
        t6 = FUN_0c037bf6(a4);
        if ((unsigned char)t6 == 0) {
        } else {
            *(int *)((int)stk + 20) = 0x4;
            *(int *)((int)stk + 16) = 0x5;
            t7 = *(signed char *)((a4 + 0x1));
            *(unsigned int *)(((int)stk + 32)) = t7;
            t8 = t7;
            *(int *)((int)stk + 12) = t8;
            FUN_0c07e79c(a4, t7, 0x5, 0x4, t8, 0x5, 0x4);
            t10 = *(int *)(((0x118 + a4) + 0x4));
            t11 = (((struct o118_int *)(a4))->v);
            (((struct oA0_float *)(t10))->v) = 1.0f;
            (((struct o9C_float *)(t10))->v) = 1.0f;
            (((struct oA0_float *)(t11))->v) = 1.0f;
            (((struct o9C_float *)(t11))->v) = 1.0f;
            t12 = *(int *)(((0x118 + a4) + 0x4));
            t13 = (((struct o118_int *)(a4))->v);
            (((struct o98_float *)(t12))->v) = 1.0f;
            (((struct o98_float *)(t13))->v) = 1.0f;
            (((struct o94_float *)(t12))->v) = 1.0f;
            (((struct o94_float *)(t13))->v) = 1.0f;
            *(int *)((int)stk + 8) = 0x6;
            *(int *)((int)stk + 4) = 0x5;
            *(int *)((int)stk + 0) = 0xFFFFFFFF;
            FUN_0c07e79c(((((struct o3770_int *)(a4))->v)), 0xFFFFFFFF, 0x5, 0x6, 0xFFFFFFFF, 0x5, 0x6);
            t16 = (((struct o3770_int *)(a4))->v);
            *(unsigned int *)(((int)stk + 28)) = t16;
            t17 = *(int *)(((t16 + 0x118) + 0x4));
            t18 = (((struct o118_int *)(t16))->v);
            (((struct oA0_float *)(t17))->v) = 1.0f;
            (((struct o9C_float *)(t17))->v) = 1.0f;
            (((struct oA0_float *)(t18))->v) = 1.0f;
            (((struct o9C_float *)(t18))->v) = 1.0f;
            t19 = (((struct o3770_int *)(a4))->v);
            *(unsigned int *)(((int)stk + 24)) = t19;
            t20 = *(int *)(((t19 + 0x118) + 0x4));
            t21 = (((struct o118_int *)(t19))->v);
            (((struct o98_float *)(t20))->v) = 1.0f;
            (((struct o98_float *)(t21))->v) = 1.0f;
            (((struct o94_float *)(t20))->v) = 1.0f;
            (((struct o94_float *)(t21))->v) = 1.0f;
            (((struct o445_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x1;
            FUN_0c07db58(a4, t21, (t19 + 0x118));
            FUN_0c059df2((*(signed char *)((a4 + 0x1))), 0x10);
            FUN_0c059e60(((((struct o3770_int *)(a4))->v)), 0xC);
            thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC53256C))) + 0x28), (((int)stk + 24) + 0xC));
            FUN_0c14f238((((int)stk + 24) + 0xC), (a4 + 0x34), (*(signed char *)((a4 + 0x1))), 0x3);
            *(volatile int *)((a4 + 0x3770));
            FUN_0c187798();
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        }
        FUN_0c038362(a4);
        (((struct o374B_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x1;
        t42 = 0x374B;
    }
    return t42;
}

int FUN_0c09aace(int a4, int a5, int a6, int a7)
{
    int stk[2];
    register int t0;

    t0 = *(signed char *)((a4 + 0x15));
    switch (t0) {
    case 0:
        FUN_0c09a5ac(a4, a5, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20));
        break;
    case 1:
        FUN_0c09a738(a4, a5, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20));
        break;
    case 2:
        FUN_0c09a87c(a4, a5, a6, a7);
        break;
    case 3:
        FUN_0c09a9f0(a4, a5, a6, a7);
        break;
    }
    (((struct o3770_uint *)(a4))->v) = 0x0;
    return 0x3770;
}

int FUN_0c09ae00(int a4, int a5, int a6, int a7)
{
    int stk[2];
    register int t0;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
        } else {
            FUN_0c09acb8(a4, a5, a6, a7);
        }
    } else {
        FUN_0c09ab14(a4, a5, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20));
    }
    (((struct o3770_uint *)(a4))->v) = 0x0;
    return 0x3770;
}
