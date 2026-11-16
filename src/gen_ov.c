/* Straight-line functions with calls and guards (batch gen_ov): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o12E_short { char p[0x12E]; short v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o374B_uchar { char p[0x374B]; unsigned char v; };
struct o376C_int { char p[0x376C]; int v; };
struct o3770_int { char p[0x3770]; int v; };
struct o378C_float { char p[0x378C]; float v; };
struct o3830_ushort { char p[0x3830]; unsigned short v; };
struct o445_uchar { char p[0x445]; unsigned char v; };
struct o4C_float { char p[0x4C]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o8C_float { char p[0x8C]; float v; };
int FUN_0c037bf6(int, int, int);
int FUN_0c038362(int);
int FUN_0c059dae(int, int);
int FUN_0c059e60(int, int);
int FUN_0c073566(int, int);
int FUN_0c07363a(int, int);
int FUN_0c07d086(int, int, float);
int FUN_0c081dfc(int);
int FUN_0c085d0c(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c085f66(int);
int FUN_0c0c2d56(int, int, int);
int FUN_0c14f238(int, int, int, int);
int FUN_0c16f210(int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int thunk_FUN_0c058310(int, int);
int FUN_0c097fde(int a4, int a5, int a6, int a7);
int FUN_0c0ae000(int a4, int a5, int a6, int a7);
int FUN_0c0871fa(int a4, int a5, int a6);

int FUN_0c097fde(int a4, int a5, int a6, int a7)
{
    int stk[6];
    register int t3;
    register int t8;
    register int t11;
    register int t14;
    register float u20;
    register int t49;

    if (((((struct o3770_int *)(a4))->v)) != 0) {
        if ((*(short *)((a4 + 0x1C))) != 0) {
            t3 = FUN_0c037bf6(a4, a5, a6);
            if ((unsigned char)t3 == 0) {
                t49 = (FUN_0c038362(a4));
            } else {
                t49 = (FUN_0c085d0c(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28)));
            }
        } else {
            t8 = (((struct o3770_int *)(a4))->v);
            (((struct o3830_ushort *)(t8))->v) = (((((struct o12E_short *)(t8))->v)) ^ 0xF);
            (((struct o374B_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x1;
            t11 = FUN_0c037bf6(a4, a5, a6);
            if ((unsigned char)t11 != 0) {
                t49 = (FUN_0c085d0c(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28)));
            } else {
                FUN_0c038362(a4);
                t14 = *(short *)((a4 + 0x1E));
                *(unsigned short *)((a4 + 0x1E)) = (t14 - 1);
                if ((short)(t14 - 1) == 0) {
                    (((struct o445_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x1;
                }
                u20 = (((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v);
                t49 = (int)u20;
                if ((int)u20 == 97) {
                    FUN_0c059e60(a4, 0x2);
                    thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC5325A4))) + 0x28), ((int)stk + 0));
                    FUN_0c14f238(((int)stk + 0), (a4 + 0x34), (*(signed char *)((a4 + 0x1))), 0x1);
                    FUN_0c059dae((*(signed char *)((((((struct o3770_int *)(a4))->v)) + 0x1))), 0x3);
                    FUN_0c073566(a4, 0x31);
                    FUN_0c07363a(a4, 0x31);
                    *(unsigned short *)((a4 + 0x1C)) = 0x1;
                    t49 = 0x1;
                }
            }
        }
    } else {
        t49 = (FUN_0c085d0c(a4, a5, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28)));
    }
    return t49;
}

int FUN_0c0ae000(int a4, int a5, int a6, int a7)
{
    int stk[5];
    register int t7;
    register int t10;
    register int t14;

    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
    (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o54_float *)(a4))->v)));
    if (((((struct o3770_int *)(a4))->v)) != 0) {
        if ((*(short *)((a4 + 0x1C))) != 0) {
            t7 = FUN_0c037bf6(a4, a5, a6);
            if ((unsigned char)t7 != 0) {
                return (FUN_0c085d0c(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28)));
            }
            return (FUN_0c038362(a4));
        }
        t10 = (((struct o3770_int *)(a4))->v);
        (((struct o3830_ushort *)(t10))->v) = (((((struct o12E_short *)(t10))->v)) ^ 0xF);
        (((struct o374B_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x1;
        FUN_0c037bf6(a4, a5, a6);
        t14 = *(short *)((a4 + 0x1E));
        *(unsigned short *)((a4 + 0x1E)) = (t14 - 1);
        if ((short)(t14 - 1) == 0) {
            FUN_0c059e60(a4, 0x2);
            thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC53258C))) + 0x28), ((int)stk + 0));
            FUN_0c14f238(((int)stk + 0), (a4 + 0x34), (*(signed char *)((a4 + 0x1))), 0x1);
            FUN_0c059dae((*(signed char *)((((((struct o3770_int *)(a4))->v)) + 0x1))), 0x3);
            FUN_0c073566(a4, 0x31);
            FUN_0c07363a(a4, 0x31);
            *(unsigned short *)((a4 + 0x1C)) = 0x1;
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            return 0x15;
        }
        FUN_0c038362(a4);
        return (FUN_0c07d086(a4, 0x0, 0.0f));
    }
    return (FUN_0c085d0c(a4, a5, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28)));
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
