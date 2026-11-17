/* game/player: functions 0C090E0C-0C091054, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o10_uchar { char p[0x10]; unsigned char v; };
struct o118_int { char p[0x118]; int v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o446_uchar { char p[0x446]; unsigned char v; };
struct o447_uchar { char p[0x447]; unsigned char v; };
struct o8C_int { char p[0x8C]; int v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
int FUN_0c037bf6(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c085d0c(int);
int pl_ryoma_cue_table_next(int, int, int, int);
int FUN_0c12695c(int);
int FUN_0c158dc8(int, int, int, int, int, int, int, int);
int FUN_0c15a260(int, int, int, int, int, int, int, int);
int FUN_0c090e0c(int a4);
int FUN_0c090f10(int a4);
int FUN_0c090f6c(int a4);
int FUN_0c09101c(int a4);

int FUN_0c090e0c(int a4)
{
    int stk[5];
    register int t1;
    register int t2;
    register int t7;
    register int t16;
    register int t17;
    register int t23;
    register int t24;
    register int t25;
    register int t26;

    if ((*(signed char *)((a4 + 0x17))) == 0) {
        *(int *)((int)stk + 12) = 0x0;
        *(int *)((int)stk + 8) = 0x6;
        t1 = *(signed char *)((a4 + 0x1));
        *(unsigned int *)(((int)stk + 16)) = t1;
        t2 = t1;
        *(int *)((int)stk + 4) = t2;
        FUN_0c07e79c(a4, t1, 0x6, 0x0, t2, 0x6, 0x0);
        if ((*(signed char *)((a4 + 0x371A))) == 0) {
            *(int *)((int)stk + 12) = 0xC1C5F74;
            *(int *)((int)stk + 8) = 0xC1C5F68;
            *(int *)((int)stk + 4) = 0x52;
            *(int *)((int)stk + 0) = 0x3E;
            FUN_0c158dc8((*(signed char *)((a4 + 0x1))), 0x1, 0x5, 0x1, 0x3E, 0x52, 0xC1C5F68, 0xC1C5F74);
        } else {
            *(int *)((int)stk + 12) = 0xC1C5F8C;
            *(int *)((int)stk + 8) = 0xC1C5F80;
            *(int *)((int)stk + 4) = 0x52;
            *(int *)((int)stk + 0) = 0x3E;
            t7 = *(signed char *)((a4 + 0x1));
            (((struct o10_uchar *)(((int)stk + 0)))->v) = t7;
            FUN_0c15a260((*(signed char *)(((int)stk + 16))), 0x1, 0x5, (*(int *)((((((struct o8C_int *)((*(int *)((((signed char)t7 << 2) + 0xC4B40FC)))))->v)) + 0x0))), 0x3E, 0x52, 0xC1C5F80, 0xC1C5F8C);
        }
    } else {
        FUN_0c12695c(a4);
        *(int *)((int)stk + 12) = 0x1;
        *(int *)((int)stk + 8) = 0x6;
        t16 = *(signed char *)((a4 + 0x1));
        *(unsigned int *)(((int)stk + 16)) = t16;
        t17 = t16;
        *(int *)((int)stk + 4) = t17;
        FUN_0c07e79c(a4, t16, 0x6, 0x1, t17, 0x6, 0x1);
        (((struct o446_uchar *)(a4))->v) = 0x2;
        (((struct o447_uchar *)(a4))->v) = 0x3;
        (((struct o20_ushort *)(a4))->v) = 0x0;
        (((struct o22_ushort *)(a4))->v) = 0x0;
    }
    t23 = *(int *)(((0x118 + a4) + 0x4));
    t24 = (((struct o118_int *)(a4))->v);
    (((struct oA0_float *)(t23))->v) = 1.0f;
    (((struct o9C_float *)(t23))->v) = 1.0f;
    (((struct oA0_float *)(t24))->v) = 1.0f;
    (((struct o9C_float *)(t24))->v) = 1.0f;
    t25 = *(int *)(((0x118 + a4) + 0x4));
    t26 = (((struct o118_int *)(a4))->v);
    (((struct o98_float *)(t25))->v) = 1.0f;
    (((struct o98_float *)(t26))->v) = 1.0f;
    (((struct o94_float *)(t25))->v) = 1.0f;
    (((struct o94_float *)(t26))->v) = 1.0f;
    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    return 0x15;
}

int FUN_0c090f10(int a4)
{
    register int t0;

    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        return FUN_0c085d0c(a4);
    }
    return (unsigned char)t0;
}

int FUN_0c090f6c(int a4)
{
    int stk[5];
    register int t2;
    register int t10;
    register int t20;

    (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) + 0x1);
    t2 = (((struct o22_short *)(a4))->v);
    pl_ryoma_cue_table_next(a4, (((t2 << 1) + t2) + 0xC1C6130), ((((struct o20_short *)(a4))->v)), (a4 + 0x22));
    if (((((struct o20_short *)(a4))->v)) == 37) {
        if ((*(signed char *)((a4 + 0x371A))) == 0) {
            *(int *)((int)stk + 12) = 0xC1C5FD4;
            *(int *)((int)stk + 8) = 0xC1C5FC8;
            *(int *)((int)stk + 4) = 0x42;
            *(int *)((int)stk + 0) = 0x1C;
            FUN_0c158dc8((*(signed char *)((a4 + 0x1))), 0x1, 0xC, 0x1, 0x1C, 0x42, 0xC1C5FC8, 0xC1C5FD4);
        } else {
            *(int *)((int)stk + 12) = 0xC1C5FEC;
            *(int *)((int)stk + 8) = 0xC1C5FE0;
            *(int *)((int)stk + 4) = 0x42;
            *(int *)((int)stk + 0) = 0x1C;
            t10 = *(signed char *)((a4 + 0x1));
            (((struct o10_uchar *)(((int)stk + 0)))->v) = t10;
            FUN_0c15a260((*(signed char *)(((int)stk + 16))), 0x1, 0xB, (*(int *)((((((struct o8C_int *)((*(int *)((((signed char)t10 << 2) + 0xC4B40FC)))))->v)) + 0x0))), 0x1C, 0x42, 0xC1C5FE0, 0xC1C5FEC);
        }
    }
    t20 = FUN_0c037bf6(a4);
    if ((unsigned char)t20 != 0) {
        return FUN_0c085d0c(a4);
    }
    return (unsigned char)t20;
}

int FUN_0c09101c(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
    } else {
        FUN_0c090e0c(a4);
    }
    if ((*(signed char *)((a4 + 0x17))) == 0) {
        return FUN_0c090f10(a4);
    }
    return FUN_0c090f6c(a4);
}
