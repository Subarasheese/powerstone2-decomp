/* game/player: functions 0C0B141C-0C0B1C4E, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o10_float { char p[0x10]; float v; };
struct o118_int { char p[0x118]; int v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o3728_uchar { char p[0x3728]; unsigned char v; };
struct o3770_int { char p[0x3770]; int v; };
struct o3770_uint { char p[0x3770]; unsigned int v; };
struct o446_uchar { char p[0x446]; unsigned char v; };
struct o447_uchar { char p[0x447]; unsigned char v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c037bf6(int);
int FUN_0c038362(int);
int thunk_FUN_0c058310(int, int);
int FUN_0c059dae(int, int);
int FUN_0c059df2(int, int);
int FUN_0c073566(int, int);
int FUN_0c07363a(int, int);
int FUN_0c07d086(int, int, float);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c07f566(void);
int FUN_0c085cac(int, int, int);
int FUN_0c085d0c(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c091448(int, int);
int FUN_0c0ae748(int);
int FUN_0c0ae750(int, int);
int FUN_0c0b1856(int);
int FUN_0c0b18d8(int);
int FUN_0c14f238(int, int, int, int);
int FUN_0c150010(int, float, float, float, float);
float math_cos_angle16(int);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int FUN_0c0b141c(int a4);
int FUN_0c0b1452(int a4, int a5, int a6, int a7);
int FUN_0c0b159c(int a4, int a5, int a6, int a7);
int FUN_0c0b175e(int a4);
int FUN_0c0b187a(int a4, int a5, int a6, int a7);
int FUN_0c0b1b7c(int a4, int a5, int a6, int a7);
int FUN_0c0b1bae(int a4);
int FUN_0c0b1bc4(int a4);
struct o11C_int { char p[0x11C]; int v; };
struct o1C_ushort { char p[0x1C]; unsigned short v; };
struct o1E_ushort { char p[0x1E]; unsigned short v; };


int FUN_0c0b141c(int a4)
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

int FUN_0c0b1452(int a4, int a5, int a6, int a7)
{
    int stk[16];
    int t2;
    int t11;
    int t14;
    int t3;
    int t5;
    int t6;
    int t7;
    int t31;
    int t16;
    int t15;
    int t13;
    int t12;
    int t8;

    if (((((struct o3770_int *)(a4))->v)) == 0) {
        t31 = (FUN_0c085d0c(a4, a5, a6, a7, *(int *)((int)stk + 24), *(int *)((int)stk + 24 + 4), *(int *)((int)stk + 24 + 8), *(int *)((int)stk + 24 + 12), *(int *)((int)stk + 24 + 16), *(int *)((int)stk + 24 + 20), *(int *)((int)stk + 24 + 24), *(int *)((int)stk + 24 + 28)));
    } else {
        *(int *)((int)stk + 20) = 0x10;
        *(int *)((int)stk + 16) = 0x2;
        t2 = *(signed char *)(a4 + 0x1);
        *(unsigned int *)(((int)stk + 32)) = t2;
        t3 = t2;
        *(int *)((int)stk + 12) = t3;
        FUN_0c07e79c(a4, t2, 0x2, 0x10, t3, 0x2, 0x10);
        t5 = *(int *)(((0x118 + a4) + 0x4));
        t6 = (((struct o118_int *)(a4))->v);
        (((struct oA0_float *)(t5))->v) = 1.0f;
        (((struct o9C_float *)(t5))->v) = 1.0f;
        (((struct oA0_float *)(t6))->v) = 1.0f;
        (((struct o9C_float *)(t6))->v) = 1.0f;
        t7 = *(int *)(((0x118 + a4) + 0x4));
        t8 = (((struct o118_int *)(a4))->v);
        (((struct o98_float *)(t7))->v) = 1.0f;
        (((struct o98_float *)(t8))->v) = 1.0f;
        (((struct o94_float *)(t7))->v) = 1.0f;
        (((struct o94_float *)(t8))->v) = 1.0f;
        *(int *)((int)stk + 8) = 0x32;
        *(int *)((int)stk + 4) = 0x5;
        *(int *)((int)stk + 0) = 0xFFFFFFFF;
        FUN_0c07e79c(((((struct o3770_int *)(a4))->v)), 0xFFFFFFFF, 0x5, 0x32, 0xFFFFFFFF, 0x5, 0x32);
        t11 = (((struct o3770_int *)(a4))->v);
        *(unsigned int *)(((int)stk + 28)) = t11;
        t12 = (((struct o11C_int *)(t11))->v);
        t13 = (((struct o118_int *)(t11))->v);
        (((struct oA0_float *)(t12))->v) = 1.0f;
        (((struct o9C_float *)(t12))->v) = 1.0f;
        (((struct oA0_float *)(t13))->v) = 1.0f;
        (((struct o9C_float *)(t13))->v) = 1.0f;
        t14 = (((struct o3770_int *)(a4))->v);
        *(unsigned int *)(((int)stk + 24)) = t14;
        t15 = (((struct o11C_int *)(t14))->v);
        t16 = (((struct o118_int *)(t14))->v);
        (((struct o98_float *)(t15))->v) = 1.0f;
        (((struct o98_float *)(t16))->v) = 1.0f;
        (((struct o94_float *)(t15))->v) = 1.0f;
        (((struct o94_float *)(t16))->v) = 1.0f;
        FUN_0c0ae748(a4);
        (((struct o3728_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x0;
        FUN_0c091448(a4, ((((struct o3770_int *)(a4))->v)));
        thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)(a4 + 0x1)) * (short)0x3938) + 0xC53258C))) + 0x28), (((int)stk + 24) + 0xC));
        FUN_0c14f238((((int)stk + 24) + 0xC), (a4 + 0x34), (*(signed char *)(a4 + 0x1)), 0x1);
        (((struct o446_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x1;
        (((struct o447_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x1;
        FUN_0c07d086(a4, 0x0, (*(float *)0xC0B15E0));
        (((struct o1C_ushort *)(a4))->v) = 0x0;
        (((struct o1E_ushort *)(a4))->v) = 0x0;
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x15)) + 0x1);
        t31 = 0x15;
    }
    return t31;
}

int FUN_0c0b159c(int a4, int a5, int a6, int a7)
{
    int stk[11];
    register int t6;
    register int t41;
    register int t42;
    register int t43;
    register float u45;
    register int t59;

    if (((((struct o3770_int *)(a4))->v)) == 0) {
        t59 = (FUN_0c085d0c(a4, a5, a6, a7, *(int *)((int)stk + 12), *(int *)((int)stk + 12 + 4), *(int *)((int)stk + 12 + 8), *(int *)((int)stk + 12 + 12), *(int *)((int)stk + 12 + 16), *(int *)((int)stk + 12 + 20), *(int *)((int)stk + 12 + 24), *(int *)((int)stk + 12 + 28)));
    } else {
        FUN_0c0ae750(a4, 0x6);
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
        if ((int)(*(short *)((a4 + 0x1C))) >= (int)0x20) {
            t6 = *(short *)((a4 + 0x1C));
            if ((t6 & 0x3) == 0) {
                thunk_FUN_0c058310(((*(int *)(((((*(int *)((((0x1 & (*(short *)((a4 + 0x1E)))) << 2) + 0xC1C65CC))) << 2) + (0xC53255C + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938))) + 0x0))) + 0x28), (((int)stk + 12) + 0x4));
                FUN_0c150010((((int)stk + 12) + 0x4), 1.0f, 1.0f, 1.0f, 0.5f);
                FUN_0c059df2((*(signed char *)((a4 + 0x1))), 0x40);
            } else {
                if ((t6 & 0x3) == 2) {
                    FUN_0c073566(a4, 0x30);
                    thunk_FUN_0c058310(((*(int *)(((((*(int *)(((((*(short *)((a4 + 0x1E))) & 0x3) << 2) + 0xC1C65BC))) << 2) + (0xC53255C + ((short)(*(signed char *)((((((struct o3770_int *)(a4))->v)) + 0x1))) * (short)0x3938))) + 0x0))) + 0x28), (((int)stk + 12) + 0x4));
                    FUN_0c14f238((((int)stk + 12) + 0x4), (a4 + 0x34), (*(signed char *)((((((struct o3770_int *)(a4))->v)) + 0x1))), 0x0);
                    FUN_0c059dae((*(signed char *)((((((struct o3770_int *)(a4))->v)) + 0x1))), 0x2);
                    *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
                }
            }
        }
        t41 = FUN_0c037bf6(a4);
        if ((unsigned char)t41 != 0) {
            *(int *)((int)stk + 8) = 0x11;
            *(int *)((int)stk + 4) = 0x2;
            t42 = *(signed char *)((a4 + 0x1));
            *(unsigned int *)(((int)stk + 12)) = t42;
            t43 = t42;
            *(int *)((int)stk + 0) = t43;
            FUN_0c07e79c(a4, t42, 0x2, 0x11, t43, 0x2, 0x11);
            u45 = (((struct o0_float *)0xC0B17C0)->v);
            (((struct o54_float *)(a4))->v) = (-((math_cos_angle16((*(int *)((a4 + 0x38))))) * u45));
            (((struct o4C_float *)(a4))->v) = (-((math_sin_angle16((*(int *)((a4 + 0x38))))) * u45));
            (((struct o60_float *)(a4))->v) = 0.0f;
            (((struct o58_float *)(a4))->v) = 0.0f;
            (((struct o50_float *)(a4))->v) = ((((struct oC_float *)0xC0B17C0)->v));
            (((struct o5C_float *)(a4))->v) = ((((struct o10_float *)0xC0B17C0)->v));
            FUN_0c07363a(a4, 0x30);
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            t59 = 0x15;
        } else {
            t59 = (FUN_0c038362(a4));
        }
    }
    return t59;
}

int FUN_0c0b175e(int a4)
{
    int t0;

    FUN_0c037bf6(a4);
    t0 = FUN_0c07ecc6(a4, 0x0, 0x0);
    if (!(((((struct o50_float *)(a4))->v)) > 0.0f) && (t0 != 0)) {
        if (t0 == 2) {
            return FUN_0c085cac(a4, 0x6, 0x0);
        }
        t0 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t0, 0x2, 0x7, (t0), 0x2, 0x7);
        (((struct o5C_float *)(a4))->v) = 0.0f;
        (((struct o60_float *)(a4))->v) = 0.0f;
        (((struct o58_float *)(a4))->v) = 0.0f;
        (((struct o50_float *)(a4))->v) = 0.0f;
        (((struct o54_float *)(a4))->v) = 0.0f;
        (((struct o4C_float *)(a4))->v) = 0.0f;
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        return 0x15;
    }
    FUN_0c038362(a4);
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    return math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
}

int FUN_0c0b187a(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x15));
    switch (t0) {
    case 0:
        FUN_0c0b1452(a4, a5, a6, a7);
        break;
    case 1:
        FUN_0c0b159c(a4, a5, a6, a7);
        break;
    case 2:
        FUN_0c0b175e(a4);
        break;
    case 3:
        FUN_0c0b1856(a4);
        break;
    }
    (((struct o3770_uint *)(a4))->v) = 0x0;
    return 0x3770;
}

int FUN_0c0b1b7c(int a4, int a5, int a6, int a7)
{
    int t0;

    t0 = *(signed char *)((a4 + 0x3728));
    if ((t0 != 0) && ((t0 != 1) && ((t0 != 2) && (t0 == 3)))) {
        FUN_0c0b18d8(a4);
    } else {
        FUN_0c0b187a(a4, a5, a6, a7);
    }
    (((struct o3770_uint *)(a4))->v) = 0x0;
    return 0x3770;
}

int FUN_0c0b1bae(int a4)
{
    FUN_0c037bf6(a4);
    return FUN_0c038362(((((struct o3770_int *)(a4))->v)));
}

int FUN_0c0b1bc4(int a4)
{
    register int t0;

    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        return FUN_0c085cac(a4, 0xE, 0x0);
    }
    return FUN_0c038362(a4);
}
