/* game/player: functions 0C0870EC-0C087610, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17C_float { char p[0x17C]; float v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o376C_int { char p[0x376C]; int v; };
struct o378C_float { char p[0x378C]; float v; };
struct o8C_float { char p[0x8C]; float v; };
int FUN_0c037bf6(int, int, int);
int FUN_0c038362(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c081dfc(int);
int FUN_0c085d0c(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c085eac(int, int);
int FUN_0c085f66(int);
int FUN_0c087318(int);
int FUN_0c0c224c(int, int);
int FUN_0c0c2d56(int, int, int);
int FUN_0c0c3010(int, int, int);
int FUN_0c16f210(int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c0870ec(int a4, int a5, int a6, int a7);
int FUN_0c0871fa(int a4, int a5, int a6);
int FUN_0c0874f6(int a4, int a5, int a6, int a7);
int FUN_0c08752e(int a4);

int FUN_0c0870ec(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            return ((int (*)(int, int, int, int))(0xC086EA4))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC086D1C))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC086BEC))(a4, a5, a6, a7);
}

int FUN_0c0871fa(int a4, int a5, int a6)
{
    int stk[6];
    register int t0;
    register int t1;
    register float u21;
    register float u24;
    register float u28;
    register int t54;

    t0 = FUN_0c037bf6(a4, a5, a6);
    if ((unsigned char)t0 != 0) {
        t1 = FUN_0c085f66(a4);
        if (t1 == 0) {
            FUN_0c081dfc(a4);
        } else {
            FUN_0c0c2d56(((((struct o376C_int *)(a4))->v)), 0x4, (*(signed char *)((a4 + 0x1))));
        }
        t54 = (FUN_0c085d0c(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28)));
    } else {
        FUN_0c038362(a4);
        t54 = 0x3721;
        if ((unsigned char)(*(signed char *)((a4 + 0x3721))) == 0xCF) {
            t54 = 0x8C;
            if (!(14.0f > ((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v)))) {
                if (((((struct o22_short *)(a4))->v)) == 0) {
                    u21 = ((((struct o28_float *)(a4))->v));
                    u21 = u21 + 160.0f * (math_sin_angle16((*(int *)((a4 + 0x38)))));
                    *(float *)(((int)stk + 0)) = u21;
                    u24 = ((((struct o2C_float *)(a4))->v));
                    u24 = u24 + 90.0f * ((((struct o378C_float *)(a4))->v));
                    *(float *)(((int)stk + 4)) = u24;
                    u28 = ((((struct o30_float *)(a4))->v));
                    u28 = u28 + 160.0f * (math_cos_angle16((*(int *)((a4 + 0x38)))));
                    *(float *)(((int)stk + 8)) = u28;
                    FUN_0c16f210(a4, ((int)stk + 0));
                    (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) + 0x1);
                }
                t54 = 0x22;
            }
        }
    }
    return t54;
}

int FUN_0c0874f6(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x17));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return ((int (*)(int, int, int, int))(0xC087478))(a4, a5, a6, a7);
    }
    return FUN_0c087318(a4);
}

int FUN_0c08752e(int a4)
{
    int stk[8];
    register int t3;
    register int t5;
    register int t21;

    if (((((struct o17C_float *)(a4))->v)) > 0.0f) {
        t3 = 0xD1;
        if ((unsigned char)(*(signed char *)((a4 + 0x3721))) != 32) {
            t3 = 0x29;
        }
        t5 = t3;
        *(int *)((int)stk + 8) = t5;
        *(int *)((int)stk + 4) = 0x3;
        *(int *)((int)stk + 0) = 0xFFFFFFFF;
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, t3, 0xFFFFFFFF, 0x3, t5);
        FUN_0c0c224c(a4, ((((struct o376C_int *)(a4))->v)));
        FUN_0c085eac(a4, 0x6);
        *(unsigned short *)((a4 + 0x1C)) = 0x14;
        FUN_0c0c3010(((((struct o376C_int *)(a4))->v)), (*(signed char *)((a4 + 0x1))), 0x0);
        t21 = 0x0;
    } else {
        *(int *)((int)stk + 8) = 0x2A;
        *(int *)((int)stk + 4) = 0x3;
        *(int *)((int)stk + 0) = 0xFFFFFFFF;
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0x2A, 0xFFFFFFFF, 0x3, 0x2A);
        FUN_0c0c224c(a4, ((((struct o376C_int *)(a4))->v)));
        FUN_0c085eac(a4, 0x6);
        *(unsigned short *)((a4 + 0x1C)) = 0x14;
        FUN_0c0c3010(((((struct o376C_int *)(a4))->v)), (*(signed char *)((a4 + 0x1))), 0x1);
        t21 = 0x1;
    }
    (((struct o16_uchar *)(a4))->v) = t21;
    (((struct o22_ushort *)(a4))->v) = 0x0;
    (((struct o20_ushort *)(a4))->v) = 0x0;
    return 0x20;
}
