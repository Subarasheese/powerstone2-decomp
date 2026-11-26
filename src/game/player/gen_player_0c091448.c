/* game/player: functions 0C091448-0C091EB0, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o10_uchar { char p[0x10]; unsigned char v; };
struct o118_int { char p[0x118]; int v; };
struct o12E_short { char p[0x12E]; short v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o168_float { char p[0x168]; float v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o2C_float { char p[0x2C]; float v; };
struct o3728_uchar { char p[0x3728]; unsigned char v; };
struct o374B_uchar { char p[0x374B]; unsigned char v; };
struct o3770_int { char p[0x3770]; int v; };
struct o3770_uint { char p[0x3770]; unsigned int v; };
struct o37A4_float { char p[0x37A4]; float v; };
struct o3830_ushort { char p[0x3830]; unsigned short v; };
struct o445_uchar { char p[0x445]; unsigned char v; };
struct o446_uchar { char p[0x446]; unsigned char v; };
struct o447_uchar { char p[0x447]; unsigned char v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o8C_int { char p[0x8C]; int v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
struct oC4_int { char p[0xC4]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oD4_int { char p[0xD4]; int v; };
struct oF4_int { char p[0xF4]; int v; };
int FUN_0c037bf6(int, int, int);
int FUN_0c038362(int);
int FUN_0c05258e(int, int, int, int, int);
int thunk_FUN_0c058310(int, int);
int FUN_0c059dae(int, int);
int FUN_0c059df2(int, int);
int FUN_0c059e60(int, int);
int FUN_0c070320(int);
int FUN_0c073566(int, int);
int FUN_0c07363a(int, int);
int FUN_0c07d086(int, int, float);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07ec9a(int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c085d0c(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0918bc(int, int, int, int);
int FUN_0c091b30(int, int, int, int);
int FUN_0c14f238(int, int, int, int);
int FUN_0c158dc8(int, int, int, int, int, int, int, int);
int FUN_0c15a260(int, int, int, int, int, int, int, int);
int FUN_0c091448(int a4, int a5);
int FUN_0c091498(int a4);
int FUN_0c0915ac(int a4, int a5, int a6);
int FUN_0c0918ea(int a4);
int FUN_0c091a44(int a4, int a5, int a6);
int FUN_0c091b90(int a4, int a5, int a6, int a7);
struct o11C_int { char p[0x11C]; int v; };
struct o1C_ushort { char p[0x1C]; unsigned short v; };
struct o1E_ushort { char p[0x1E]; unsigned short v; };


int FUN_0c091448(int a4, int a5)
{
    register int t0;
    register float u0;
    register float u1;
    register float u2;

    u0 = *(float *)0xC541098;
    t0 = 0x168;
    if (u0 > ((((struct o168_float *)(a4))->v))) {
        t0 = 0x2C;
    }
    u1 = *(float *)((a4 + t0));
    t0 = 0x168;
    if (u0 > ((((struct o168_float *)(a5))->v))) {
        t0 = 0x2C;
    }
    u0 = *(float *)((a5 + t0));
    u2 = u1;
    if (u1 > u0) {
        u2 = u0;
    }
    (((struct o2C_float *)(a4))->v) = u2;
    (((struct o2C_float *)(a5))->v) = u2;
    return 0x2C;
}

int FUN_0c091498(int a4)
{
    int t0;
    int t1;
    int t2;

    t0 = *(signed char *)(a4 + 0x1);
    FUN_0c07e79c(a4, t0, 0x5, 0x2, (t0), 0x5, 0x2);
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
    FUN_0c07e79c(((((struct o3770_int *)(a4))->v)), 0xFFFFFFFF, 0x5, 0x1, 0xFFFFFFFF, 0x5, 0x1);
    t0 = (((struct o3770_int *)(a4))->v);
    t1 = (((struct o11C_int *)(t0))->v);
    t2 = (((struct o118_int *)(t0))->v);
    (((struct oA0_float *)(t1))->v) = 1.0f;
    (((struct o9C_float *)(t1))->v) = 1.0f;
    (((struct oA0_float *)(t2))->v) = 1.0f;
    (((struct o9C_float *)(t2))->v) = 1.0f;
    t0 = (((struct o3770_int *)(a4))->v);
    t1 = (((struct o11C_int *)(t0))->v);
    t2 = (((struct o118_int *)(t0))->v);
    (((struct o98_float *)(t1))->v) = 1.0f;
    (((struct o98_float *)(t2))->v) = 1.0f;
    (((struct o94_float *)(t1))->v) = 1.0f;
    (((struct o94_float *)(t2))->v) = 1.0f;
    (((struct o445_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x1;
    (((struct o446_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x1;
    (((struct o447_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x1;
    (((struct o447_uchar *)(a4))->v) = 0x1;
    FUN_0c059df2((*(signed char *)((((((struct o3770_int *)(a4))->v)) + 0x1))), 0x18);
    FUN_0c07d086(a4, 0x0, (*(float *)0xC091624));
    FUN_0c091448(a4, ((((struct o3770_int *)(a4))->v)));
    t0 = (((struct o3770_int *)(a4))->v);
    (((struct o3830_ushort *)(t0))->v) = (((((struct o12E_short *)(t0))->v)) ^ 0xF);
    (((struct o374B_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x1;
    (((struct o1C_ushort *)(a4))->v) = 0x0;
    (((struct o1E_ushort *)(a4))->v) = 0x0;
    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x15)) + 0x1);
    return 0x15;
}

int FUN_0c0915ac(int a4, int a5, int a6)
{
    int stk[15];
    register int t0;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t7;
    register int t23;
    register int t84;
    register int t143;
    register int t148;
    register int t162;

    t0 = FUN_0c037bf6(a4, a5, a6);
    if ((unsigned char)t0 != 0) {
        FUN_0c085d0c(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 16), *(int *)((int)stk + 16 + 4), *(int *)((int)stk + 16 + 8), *(int *)((int)stk + 16 + 12), *(int *)((int)stk + 16 + 16), *(int *)((int)stk + 16 + 20), *(int *)((int)stk + 16 + 24), *(int *)((int)stk + 16 + 28));
        t2 = *(int *)(((0x118 + a4) + 0x4));
        t3 = (((struct o118_int *)(a4))->v);
        (((struct oA0_float *)(t2))->v) = 1.0f;
        (((struct o9C_float *)(t2))->v) = 1.0f;
        (((struct oA0_float *)(t3))->v) = 1.0f;
        (((struct o9C_float *)(t3))->v) = 1.0f;
        t4 = *(int *)(((0x118 + a4) + 0x4));
        t5 = (((struct o118_int *)(a4))->v);
        (((struct o98_float *)(t4))->v) = 1.0f;
        (((struct o98_float *)(t5))->v) = 1.0f;
        (((struct o94_float *)(t4))->v) = 1.0f;
        (((struct o94_float *)(t5))->v) = 1.0f;
        t162 = 0x94;
    } else {
        FUN_0c038362(a4);
        t7 = FUN_0c07ecc6(a4, 0x0, 0x0);
        if (t7 == 2) {
            FUN_0c07ec9a(a4);
            (((struct o50_float *)(a4))->v) = 0.0f;
            (((struct o37A4_float *)(a4))->v) = 0.0f;
        } else {
            FUN_0c070320(a4);
        }
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
        if ((*(short *)((a4 + 0x1C))) == (*(int *)((((((*(short *)((a4 + 0x1E))) << 2) << 1) + 0xC25CC70) + 0x0)))) {
            t23 = *(int *)((((((*(short *)((a4 + 0x1E))) << 2) << 1) + 0xC25CC70) + 0x4));
            switch (t23) {
            case 0:
                thunk_FUN_0c058310((((((struct oD4_int *)((((short)(*(signed char *)((((((struct o3770_int *)(a4))->v)) + 0x1))) * (short)0x3938) + 0xC532498)))->v)) + 0x28), (((int)stk + 16) + 0x4));
                FUN_0c059dae((*(signed char *)((((((struct o3770_int *)(a4))->v)) + 0x1))), 0x7);
                FUN_0c059df2((*(signed char *)((a4 + 0x1))), 0x14);
                FUN_0c059e60(a4, 0x0);
                break;
            case 1:
                thunk_FUN_0c058310((((((struct oC4_int *)((((short)(*(signed char *)((((((struct o3770_int *)(a4))->v)) + 0x1))) * (short)0x3938) + 0xC532498)))->v)) + 0x28), (((int)stk + 16) + 0x4));
                FUN_0c059dae((*(signed char *)((((((struct o3770_int *)(a4))->v)) + 0x1))), 0x7);
                FUN_0c059df2((*(signed char *)((a4 + 0x1))), 0x14);
                FUN_0c059e60(a4, 0x0);
                break;
            case 2:
                thunk_FUN_0c058310((((((struct oCC_int *)((((short)(*(signed char *)((((((struct o3770_int *)(a4))->v)) + 0x1))) * (short)0x3938) + 0xC532498)))->v)) + 0x28), (((int)stk + 16) + 0x4));
                FUN_0c059dae((*(signed char *)((((((struct o3770_int *)(a4))->v)) + 0x1))), 0x7);
                FUN_0c059df2((*(signed char *)((a4 + 0x1))), 0x14);
                FUN_0c059e60(a4, 0x0);
                break;
            }
            FUN_0c14f238((((int)stk + 16) + 0x4), (a4 + 0x34), (*(signed char *)((a4 + 0x1))), 0x5);
            FUN_0c073566(a4, 0x30);
            *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
        }
        if ((*(short *)((a4 + 0x1C))) != 41) {
            t84 = *(short *)((a4 + 0x1C));
            if (t84 == 69) {
                FUN_0c059e60(((((struct o3770_int *)(a4))->v)), 0x4);
            } else {
                if (t84 == 96) {
                    FUN_0c059e60(((((struct o3770_int *)(a4))->v)), 0x3);
                }
            }
        } else {
            FUN_0c059e60(((((struct o3770_int *)(a4))->v)), 0x3);
        }
        if ((*(short *)((a4 + 0x1C))) == 0x8A) {
            thunk_FUN_0c058310((((((struct oCC_int *)((((short)(*(signed char *)((((((struct o3770_int *)(a4))->v)) + 0x1))) * (short)0x3938) + 0xC532498)))->v)) + 0x28), (((int)stk + 16) + 0x4));
            FUN_0c14f238((((int)stk + 16) + 0x4), (a4 + 0x34), (*(signed char *)((a4 + 0x1))), 0x5);
            (((struct o445_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x1;
            FUN_0c059dae((*(signed char *)((((((struct o3770_int *)(a4))->v)) + 0x1))), 0xA);
            FUN_0c073566(a4, 0x31);
            FUN_0c07363a(a4, 0x31);
        }
        if ((*(short *)((a4 + 0x1C))) == 1) {
            thunk_FUN_0c058310((((((struct oF4_int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532498)))->v)) + 0x28), (((int)stk + 16) + 0x4));
            FUN_0c14f238((((int)stk + 16) + 0x4), (a4 + 0x34), (*(signed char *)((a4 + 0x1))), 0x1);
            FUN_0c059dae((*(signed char *)((((((struct o3770_int *)(a4))->v)) + 0x1))), 0x6);
        }
        t143 = *(short *)((a4 + 0x1C));
        t162 = t143;
        if (t143 == 36) {
            if ((*(signed char *)((a4 + 0x371A))) == 0) {
                *(int *)((int)stk + 12) = 0xC1C5F74;
                *(int *)((int)stk + 8) = 0xC1C5F68;
                *(int *)((int)stk + 4) = 0x42;
                *(int *)((int)stk + 0) = 0x7C;
                t162 = (FUN_0c158dc8((*(signed char *)((a4 + 0x1))), 0x1, 0x5, 0x1, 0x7C, 0x42, 0xC1C5F68, 0xC1C5F74));
            } else {
                *(int *)((int)stk + 12) = 0xC1C5F8C;
                *(int *)((int)stk + 8) = 0xC1C5F80;
                *(int *)((int)stk + 4) = 0x42;
                *(int *)((int)stk + 0) = 0x7C;
                t148 = *(signed char *)((a4 + 0x1));
                (((struct o10_uchar *)(((int)stk + 0)))->v) = t148;
                t162 = (FUN_0c15a260((*(signed char *)(((int)stk + 16))), 0x1, 0x5, (*(int *)((((((struct o8C_int *)((*(int *)((((signed char)t148 << 2) + 0xC4B40FC)))))->v)) + 0x0))), 0x7C, 0x42, 0xC1C5F80, 0xC1C5F8C));
            }
        }
    }
    return t162;
}

int FUN_0c0918ea(int a4)
{
    int t0;
    int t1;
    int t2;

    t0 = *(signed char *)(a4 + 0x1);
    FUN_0c07e79c(a4, t0, 0x2, 0xC, (t0), 0x2, 0xC);
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
    FUN_0c07e79c(((((struct o3770_int *)(a4))->v)), 0xFFFFFFFF, 0x5, 0x26, 0xFFFFFFFF, 0x5, 0x26);
    t0 = (((struct o3770_int *)(a4))->v);
    t1 = (((struct o11C_int *)(t0))->v);
    t2 = (((struct o118_int *)(t0))->v);
    (((struct oA0_float *)(t1))->v) = 1.0f;
    (((struct o9C_float *)(t1))->v) = 1.0f;
    (((struct oA0_float *)(t2))->v) = 1.0f;
    (((struct o9C_float *)(t2))->v) = 1.0f;
    t0 = (((struct o3770_int *)(a4))->v);
    t1 = (((struct o11C_int *)(t0))->v);
    t2 = (((struct o118_int *)(t0))->v);
    (((struct o98_float *)(t1))->v) = 1.0f;
    (((struct o98_float *)(t2))->v) = 1.0f;
    (((struct o94_float *)(t1))->v) = 1.0f;
    (((struct o94_float *)(t2))->v) = 1.0f;
    (((struct o446_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x1;
    (((struct o447_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x1;
    (((struct o445_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x1;
    (((struct o3728_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = (*(signed char *)(a4 + 0x3728));
    FUN_0c091448(a4, ((((struct o3770_int *)(a4))->v)));
    t0 = (((struct o3770_int *)(a4))->v);
    (((struct o54_float *)(t0))->v) = 0.0f;
    (((struct o4C_float *)(t0))->v) = 0.0f;
    (((struct o50_float *)(((((struct o3770_int *)(a4))->v))))->v) = -10.0f;
    FUN_0c07d086(a4, 0x0, 100.0f);
    t0 = (((struct o3770_int *)(a4))->v);
    (((struct o3830_ushort *)(t0))->v) = (((((struct o12E_short *)(t0))->v)) ^ 0xF);
    (((struct o374B_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x1;
    (((struct o16_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x0;
    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x16)) + 0x1);
    (((struct o1C_ushort *)(a4))->v) = 0x0;
    return 0x0;
}

int FUN_0c091a44(int a4, int a5, int a6)
{
    register int t0;
    register int t1;

    FUN_0c037bf6(a4, a5, a6);
    FUN_0c038362(a4);
    *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
    if ((*(short *)((a4 + 0x1C))) == 28) {
        FUN_0c059dae((*(signed char *)((((((struct o3770_int *)(a4))->v)) + 0x1))), 0xA);
    }
    if ((*(short *)((a4 + 0x1C))) == 33) {
        FUN_0c059e60(((((struct o3770_int *)(a4))->v)), 0x3);
    }
    if ((*(short *)((a4 + 0x1C))) == 49) {
        t0 = (((struct o3770_int *)(a4))->v);
        (((struct o16_uchar *)(t0))->v) = ((*(signed char *)((t0 + 0x16))) + 0x1);
        FUN_0c073566(a4, 0x34);
        FUN_0c05258e(0x2, 0x14, 0x400, 0xF, 0x0);
    }
    t0 = *(short *)((a4 + 0x1C));
    t1 = t0;
    if (t0 == 72) {
        (((struct o54_float *)(a4))->v) = 0.0f;
        (((struct o4C_float *)(a4))->v) = 0.0f;
        (((struct o60_float *)(a4))->v) = 0.0f;
        (((struct o58_float *)(a4))->v) = 0.0f;
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        t1 = 0x16;
    }
    return t1;
}

int FUN_0c091b90(int a4, int a5, int a6, int a7)
{
    int t0;

    t0 = *(signed char *)((a4 + 0x3728));
    if ((t0 != 0) && (t0 == 3)) {
        FUN_0c091b30(a4, a5, a6, a7);
    } else {
        FUN_0c0918bc(a4, a5, a6, a7);
    }
    (((struct o3770_uint *)(a4))->v) = 0x0;
    return 0x3770;
}
