/* game/player: functions 0C07AC90-0C07BB64, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o118_int { char p[0x118]; int v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o2C_float { char p[0x2C]; float v; };
struct o372C_uchar { char p[0x372C]; unsigned char v; };
struct o374A_uchar { char p[0x374A]; unsigned char v; };
struct o3756_uchar { char p[0x3756]; unsigned char v; };
struct o3770_int { char p[0x3770]; int v; };
struct o382E_ushort { char p[0x382E]; unsigned short v; };
struct o8C_float { char p[0x8C]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c037bf6(int);
int FUN_0c038362(int);
int thunk_FUN_0c058310(int, int);
int FUN_0c07ac90(int);
int FUN_0c07aca0(int);
int FUN_0c07b840(int);
int FUN_0c07e2c4(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c085d0c(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0c2944(int, int, int, int, int);
int FUN_0c07b038(int a4);
int FUN_0c07b456(int a4, int a5, int a6, int a7);
int FUN_0c07bac8(int a4);

int FUN_0c07b038(int a4)
{
    int stk[5];
    int t0;
    register int t1;
    register int t11;

    t0 = *(signed char *)((a4 + 0x3728));
    if ((t0 != 0) && (t0 != 1)) {
        if (t0 != 2) {
        } else {
            t1 = FUN_0c037bf6(a4);
            if ((unsigned char)t1 != 0) {
                (((struct o3756_uchar *)(a4))->v) = 0x3C;
                (((struct o374A_uchar *)(a4))->v) = 0x3C;
                (((struct o382E_ushort *)(a4))->v) = 0x0;
                FUN_0c085d0c(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 12), *(int *)((int)stk + 12 + 4), *(int *)((int)stk + 12 + 8), *(int *)((int)stk + 12 + 12), *(int *)((int)stk + 12 + 16), *(int *)((int)stk + 12 + 20), *(int *)((int)stk + 12 + 24), *(int *)((int)stk + 12 + 28));
            }
            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) - (1.0f + 1.0f));
        }
        return FUN_0c038362(a4);
    }
    t11 = FUN_0c037bf6(a4);
    if ((unsigned char)t11 != 0) {
        *(int *)((int)stk + 8) = 0x21;
        *(int *)((int)stk + 4) = 0x5;
        *(int *)((int)stk + 0) = 0xFFFFFFFF;
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x5, 0x21, 0xFFFFFFFF, 0x5, 0x21);
        (((struct o372C_uchar *)(a4))->v) = 0x0;
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        return 0x16;
    }
    return FUN_0c038362(a4);
}

int FUN_0c07b456(int a4, int a5, int a6, int a7)
{
    int stk[6];
    register int t3;
    register int t10;
    register int t11;
    register int t12;
    register int t13;
    register int t20;
    int t1;
    int t18;

    if ((((((struct o22_short *)(a4))->v)) == 0) && (t1 = (((struct o3770_int *)(a4))->v), t1 == 0)) {
        return (FUN_0c085d0c(a4, a5, a6, a7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28)));
    }
    t3 = FUN_0c037bf6(a4);
    if ((unsigned char)t3 != 0) {
        *(unsigned int *)((a4 + 0x38)) = (unsigned short)((*(int *)((a4 + 0x38))) + 0x8000);
        FUN_0c085d0c(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
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
        return (FUN_0c037bf6(a4));
    }
    if (!(((((struct o0_float *)0xC07B628)->v)) > ((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v))) && (t18 = (((struct o22_short *)(a4))->v), t18 == 0)) {
        (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) + 0x1);
        t20 = (((struct o3770_int *)(a4))->v);
        (((struct o15_uchar *)(t20))->v) = ((*(signed char *)((t20 + 0x15))) + 0x1);
        if ((unsigned char)(*(signed char *)((a4 + 0x3721))) == 50) {
            thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((((((struct o3770_int *)(a4))->v)) + 0x1))) * (short)0x3938) + 0xC532564))) + 0x28), ((int)stk + 4));
            *(float *)(((int)stk + 8)) = ((*(float *)(((int)stk + 8))) + ((((struct oC_float *)0xC07B628)->v)));
            *(int *)((int)stk + 0) = 0xFFFFFFFF;
            FUN_0c0c2944(0x11, 0x0, 0x0, (((int)stk + 0) + 0x4), 0xFFFFFFFF);
        }
    }
    return (FUN_0c038362(a4));
}

int FUN_0c07bac8(int a4)
{
    register int t0;
    int t2;

    t0 = FUN_0c07e2c4(a4);
    if (t0 == 0) {
        t2 = *(signed char *)((a4 + 0x3729));
        if ((t2 != 0) && (t2 != 1)) {
            if (t2 != 2) {
                if (t2 != 3) {
                    return t2;
                }
                return FUN_0c07b840(a4);
            }
            return FUN_0c07aca0(a4);
        }
        return FUN_0c07ac90(a4);
    }
    return t0;
}
