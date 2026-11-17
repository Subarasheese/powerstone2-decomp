/* game/player: functions 0C09DEA8-0C09E174, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o18_uchar { char p[0x18]; unsigned char v; };
struct o1B_uchar { char p[0x1B]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o8C_float { char p[0x8C]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
int FUN_0c037bf6(int);
int FUN_0c07daea(int, int, int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07f566(void);
int FUN_0c085d0c(int);
extern int FUN_0c12f304();
int FUN_0c09dea8(int a4);
int FUN_0c09df38(int a4, int a5, int a6, int a7);
int FUN_0c09df88(int a4, int a5, int a6, int a7);
int FUN_0c09dfa4(int a4);
int FUN_0c09e13e(int a4);

int FUN_0c09dea8(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    if ((*(signed char *)((a4 + 0x17))) != 0) {
        t0 = *(signed char *)((a4 + 0x1));
        t1 = 0x0;
        t2 = (t0);
        t3 = t0;
        t0 = 0x0;
    } else {
        t3 = *(signed char *)((a4 + 0x1));
        t1 = 0x1;
        t2 = (t3);
        t0 = 0x1;
    }
    FUN_0c07e79c(a4, t3, 0x6, t0, t2, 0x6, t1);
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
    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
    (((struct o20_ushort *)(a4))->v) = 0x0;
    return 0x20;
}

int FUN_0c09df38(int a4, int a5, int a6, int a7)
{
    register int t0;
    int t1;
    register float u0;
    register float u1;

    if (((*(signed char *)((a4 + 0x17))) != 0) && ((t0 = (((struct o20_short *)(a4))->v), t0 == 0) && (t1 = (((struct o118_int *)(a4))->v), u0 = *(float *)0xC09E02C, u1 = (((struct o8C_float *)(t1))->v), !(u0 > u1)))) {
        (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) + 0x1);
        FUN_0c07daea(a4, a5, a6, a7);
    }
    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        return FUN_0c085d0c(a4);
    }
    return (unsigned char)t0;
}

int FUN_0c09df88(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return FUN_0c09df38(a4, a5, a6, a7);
    }
    return FUN_0c09dea8(a4);
}

int FUN_0c09dfa4(int a4)
{
    int stk[8];
    register int t0;
    register int t4;
    register int t7;
    register int t15;
    register int t19;
    register int t20;
    register int t26;
    register int t27;
    register int t34;
    register int t35;
    register int t37;
    register int t38;
    register int t48;
    register int t49;
    register int t51;
    register int t52;
    register int t61;
    register int t62;
    register int t63;
    register int t64;
    register int t66;
    register int t69;
    register int t41;
    register int t55;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 == 1) {
            t4 = *(signed char *)((a4 + 0x18));
            if ((t4 == 1) || (t4 == 3)) {
                *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
                if ((*(short *)((a4 + 0x1C))) == 93) {
                    t7 = ((int (*)(int, int))(FUN_0c12f304))(a4, 0x0);
                    (((struct o1B_uchar *)(a4))->v) = 0x0;
                }
            }
            return FUN_0c037bf6(a4);
        }
        return t0;
    }
    t15 = *(signed char *)((a4 + 0x17));
    switch (t15) {
    case 0:
        if ((*(signed char *)((a4 + 0x371A))) == 0) {
            *(int *)((int)stk + 8) = 0x2;
            *(int *)((int)stk + 4) = 0x6;
            t48 = *(signed char *)((a4 + 0x1));
            *(unsigned int *)(((int)stk + 12)) = t48;
            t49 = t48;
            *(int *)((int)stk + 0) = t49;
            FUN_0c07e79c(a4, t48, 0x6, 0x2, t49, 0x6, 0x2);
            t55 = 0x0;
        } else {
            *(int *)((int)stk + 8) = 0xD;
            *(int *)((int)stk + 4) = 0x6;
            t51 = *(signed char *)((a4 + 0x1));
            *(unsigned int *)(((int)stk + 12)) = t51;
            t52 = t51;
            *(int *)((int)stk + 0) = t52;
            FUN_0c07e79c(a4, t51, 0x6, 0xD, t52, 0x6, 0xD);
            t55 = 0x1;
        }
        (((struct o18_uchar *)(a4))->v) = t55;
        break;
    case 1:
        if ((*(signed char *)((a4 + 0x371A))) == 0) {
            *(int *)((int)stk + 8) = 0x3;
            *(int *)((int)stk + 4) = 0x6;
            t34 = *(signed char *)((a4 + 0x1));
            *(unsigned int *)(((int)stk + 12)) = t34;
            t35 = t34;
            *(int *)((int)stk + 0) = t35;
            FUN_0c07e79c(a4, t34, 0x6, 0x3, t35, 0x6, 0x3);
            t41 = 0x2;
        } else {
            *(int *)((int)stk + 8) = 0xD;
            *(int *)((int)stk + 4) = 0x6;
            t37 = *(signed char *)((a4 + 0x1));
            *(unsigned int *)(((int)stk + 12)) = t37;
            t38 = t37;
            *(int *)((int)stk + 0) = t38;
            FUN_0c07e79c(a4, t37, 0x6, 0xD, t38, 0x6, 0xD);
            t41 = 0x3;
        }
        (((struct o18_uchar *)(a4))->v) = t41;
        break;
    case 2:
        *(int *)((int)stk + 8) = 0x4;
        *(int *)((int)stk + 4) = 0x6;
        t26 = *(signed char *)((a4 + 0x1));
        *(unsigned int *)(((int)stk + 12)) = t26;
        t27 = t26;
        *(int *)((int)stk + 0) = t27;
        FUN_0c07e79c(a4, t26, 0x6, 0x4, t27, 0x6, 0x4);
        (((struct o18_uchar *)(a4))->v) = 0x4;
        break;
    case 3:
        *(int *)((int)stk + 8) = 0x5;
        *(int *)((int)stk + 4) = 0x6;
        t19 = *(signed char *)((a4 + 0x1));
        *(unsigned int *)(((int)stk + 12)) = t19;
        t20 = t19;
        *(int *)((int)stk + 0) = t20;
        FUN_0c07e79c(a4, t19, 0x6, 0x5, t20, 0x6, 0x5);
        (((struct o18_uchar *)(a4))->v) = 0x5;
        break;
    }
    t61 = *(int *)(((0x118 + a4) + 0x4));
    t62 = (((struct o118_int *)(a4))->v);
    (((struct oA0_float *)(t61))->v) = 1.0f;
    (((struct o9C_float *)(t61))->v) = 1.0f;
    (((struct oA0_float *)(t62))->v) = 1.0f;
    (((struct o9C_float *)(t62))->v) = 1.0f;
    t63 = *(int *)(((0x118 + a4) + 0x4));
    t64 = (((struct o118_int *)(a4))->v);
    (((struct o98_float *)(t63))->v) = 1.0f;
    (((struct o98_float *)(t64))->v) = 1.0f;
    (((struct o94_float *)(t63))->v) = 1.0f;
    (((struct o94_float *)(t64))->v) = 1.0f;
    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    *(unsigned short *)((a4 + 0x1C)) = 0x0;
    t66 = *(signed char *)((a4 + 0x18));
    if ((t66 == 1) || (t66 == 3)) {
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
        if ((*(short *)((a4 + 0x1C))) == 93) {
            t69 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int, int))(FUN_0c12f304))(a4, 0x0, t63, 0x0, *(int *)((int)stk + 12), *(int *)((int)stk + 12 + 4), *(int *)((int)stk + 12 + 8), *(int *)((int)stk + 12 + 12), *(int *)((int)stk + 12 + 16), *(int *)((int)stk + 12 + 20), *(int *)((int)stk + 12 + 24), *(int *)((int)stk + 12 + 28));
            (((struct o1B_uchar *)(a4))->v) = 0x0;
        }
    }
    return FUN_0c037bf6(a4);
}

int FUN_0c09e13e(int a4)
{
    register int t0;

    t0 = FUN_0c07f566();
    if (t0 != 0) {
        return 0x1;
    }
    t0 = FUN_0c07f566();
    if (t0 != 0) {
        return 0x0;
    }
    return 0x63;
}
