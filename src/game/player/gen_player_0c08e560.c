/* game/player: functions 0C08E560-0C08E782, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o10_uchar { char p[0x10]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o50_float { char p[0x50]; float v; };
struct o8C_int { char p[0x8C]; int v; };
int FUN_0c037bf6(int);
int FUN_0c038362(int);
int FUN_0c059ef6(int, int);
int FUN_0c070320(int);
int FUN_0c07da48(int a4);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c085cac(int, int, int);
int FUN_0c085d0c(int);
int FUN_0c158dc8(int, int, int, int, int, int, int, int);
int FUN_0c15a260(int, int, int, int, int, int, int, int);
int math_vec3_accumulate(int, int);
int FUN_0c08e560(int a4);
int FUN_0c08e590(int a4);
int FUN_0c08e634(int a4);
int FUN_0c08e6f6(int a4);
int FUN_0c08e756(int a4);

int FUN_0c08e560(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x1));
    FUN_0c07e79c(a4, t0, 0x1, 0x8, (t0), 0x1, 0x8);
    (((struct o20_ushort *)(a4))->v) = 0x0;
    return 0x20;
}

int FUN_0c08e590(int a4)
{
    int stk[5];
    register int t6;
    register int t18;

    (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) + 0x1);
    if (((((struct o20_short *)(a4))->v)) == 12) {
        if ((*(signed char *)((a4 + 0x371A))) == 0) {
            *(int *)((int)stk + 12) = 0xC1C5F74;
            *(int *)((int)stk + 8) = 0xC1C5F68;
            *(int *)((int)stk + 4) = 0x52;
            *(int *)((int)stk + 0) = 0x18;
            FUN_0c158dc8((*(signed char *)((a4 + 0x1))), 0x1, 0x5, 0x1, 0x18, 0x52, 0xC1C5F68, 0xC1C5F74);
        } else {
            *(int *)((int)stk + 12) = 0xC1C5F8C;
            *(int *)((int)stk + 8) = 0xC1C5F80;
            *(int *)((int)stk + 4) = 0x52;
            *(int *)((int)stk + 0) = 0x18;
            t6 = *(signed char *)((a4 + 0x1));
            (((struct o10_uchar *)(((int)stk + 0)))->v) = t6;
            FUN_0c15a260((*(signed char *)(((int)stk + 16))), 0x1, 0x5, (*(int *)((((((struct o8C_int *)((*(int *)((((signed char)t6 << 2) + 0xC4B40FC)))))->v)) + 0x0))), 0x18, 0x52, 0xC1C5F80, 0xC1C5F8C);
        }
    }
    t18 = FUN_0c037bf6(a4);
    if ((unsigned char)t18 != 0) {
        return FUN_0c085d0c(a4);
    }
    FUN_0c038362(a4);
    FUN_0c07da48(a4);
    return FUN_0c070320(a4);
}

int FUN_0c08e634(int a4)
{
    int stk[5];
    register int t0;
    register int t1;
    register int t6;
    register int t12;

    *(int *)((int)stk + 12) = 0xB;
    *(int *)((int)stk + 8) = 0x1;
    t0 = *(signed char *)((a4 + 0x1));
    *(unsigned int *)(((int)stk + 16)) = t0;
    t1 = t0;
    *(int *)((int)stk + 4) = t1;
    FUN_0c07e79c(a4, t0, 0x1, 0xB, t1, 0x1, 0xB);
    if ((*(signed char *)((a4 + 0x371A))) == 0) {
        *(int *)((int)stk + 12) = 0xC1C5F74;
        *(int *)((int)stk + 8) = 0xC1C5F68;
        *(int *)((int)stk + 4) = 0x52;
        *(int *)((int)stk + 0) = 0x14;
        t12 = (FUN_0c158dc8((*(signed char *)((a4 + 0x1))), 0x1, 0x5, 0x1, 0x14, 0x52, 0xC1C5F68, 0xC1C5F74));
    } else {
        *(int *)((int)stk + 12) = 0xC1C5F8C;
        *(int *)((int)stk + 8) = 0xC1C5F80;
        *(int *)((int)stk + 4) = 0x52;
        *(int *)((int)stk + 0) = 0x14;
        t6 = *(signed char *)((a4 + 0x1));
        (((struct o10_uchar *)(((int)stk + 0)))->v) = t6;
        t12 = (FUN_0c15a260((*(signed char *)(((int)stk + 16))), 0x1, 0x5, (*(int *)((((((struct o8C_int *)((*(int *)((((signed char)t6 << 2) + 0xC4B40FC)))))->v)) + 0x0))), 0x14, 0x52, 0xC1C5F80, 0xC1C5F8C));
    }
    return t12;
}

int FUN_0c08e6f6(int a4)
{
    register int t0;

    if (!(((((struct o50_float *)(a4))->v)) > 0.0f)) {
        t0 = FUN_0c07ecc6(a4, 0x0, 0x0);
        if (t0 != 0) {
            return FUN_0c085cac(a4, 0x6, 0x0);
        }
    }
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        return FUN_0c085d0c(a4);
    }
    return (unsigned char)t0;
}

int FUN_0c08e756(int a4)
{
    int stk[4];

    *(int *)((int)stk + 12) = a4;
    *(int *)((int)stk + 8) = 0x3;
    *(int *)((int)stk + 4) = 0x2;
    *(int *)((int)stk + 0) = 0xFFFFFFFF;
    FUN_0c07e79c(a4, 0xFFFFFFFF, 0x2, 0x3, 0xFFFFFFFF, 0x2, 0x3);
    return FUN_0c059ef6((*(signed char *)(((*(int *)(((int)stk + 12))) + 0x1))), 0x1);
}
