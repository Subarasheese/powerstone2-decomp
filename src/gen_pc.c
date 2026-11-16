/* Straight-line functions with calls and guards (batch gen_pc): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o374B_uchar { char p[0x374B]; unsigned char v; };
struct o3770_int { char p[0x3770]; int v; };
struct o3830_ushort { char p[0x3830]; unsigned short v; };
struct o445_uchar { char p[0x445]; unsigned char v; };
struct o8C_float { char p[0x8C]; float v; };
int FUN_0c037bf6(int, int, int);
int FUN_0c038362(int);
int FUN_0c059dae(int, int);
int FUN_0c059e60(int, int);
int FUN_0c073566(int, int);
int FUN_0c07363a(int, int);
int FUN_0c085d0c(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c14f238(int, int, int, int);
int thunk_FUN_0c058310(int, int);
int FUN_0c094fd8(int a4, int a5, int a6, int a7);
int FUN_0c0bada0(int a4, int a5, int a6, int a7);

int FUN_0c094fd8(int a4, int a5, int a6, int a7)
{
    int stk[6];
    register int t3;
    register int t9;
    register int t12;
    register float u18;
    register int t46;

    if (((((struct o3770_int *)(a4))->v)) != 0) {
        if ((*(short *)((a4 + 0x1C))) != 0) {
            t3 = FUN_0c037bf6(a4, a5, a6);
            if ((unsigned char)t3 == 0) {
                t46 = (FUN_0c038362(a4));
            } else {
                t46 = (FUN_0c085d0c(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28)));
            }
        } else {
            (((struct o374B_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x1;
            t9 = FUN_0c037bf6(a4, a5, a6);
            if ((unsigned char)t9 != 0) {
                t46 = (FUN_0c085d0c(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28)));
            } else {
                FUN_0c038362(a4);
                t12 = *(short *)((a4 + 0x1E));
                *(unsigned short *)((a4 + 0x1E)) = (t12 - 1);
                if ((short)(t12 - 1) == 0) {
                    (((struct o445_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x1;
                }
                u18 = (((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v);
                t46 = (int)u18;
                if ((int)u18 == 34) {
                    thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532598))) + 0x28), ((int)stk + 0));
                    FUN_0c14f238(((int)stk + 0), (a4 + 0x34), (*(signed char *)((a4 + 0x1))), 0x1);
                    FUN_0c059dae((*(signed char *)((((((struct o3770_int *)(a4))->v)) + 0x1))), 0x3);
                    FUN_0c073566(a4, 0x33);
                    FUN_0c07363a(a4, 0x35);
                    *(unsigned short *)((a4 + 0x1C)) = 0x1;
                    t46 = 0x1;
                }
            }
        }
    } else {
        t46 = (FUN_0c085d0c(a4, a5, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28)));
    }
    return t46;
}

int FUN_0c0bada0(int a4, int a5, int a6, int a7)
{
    int stk[6];
    register int t2;
    register int t10;
    register int t13;
    register float u19;
    register int t43;

    if ((*(short *)((a4 + 0x1C))) != 0) {
        t2 = FUN_0c037bf6(a4, a5, a6);
        if ((unsigned char)t2 == 0) {
            t43 = (FUN_0c038362(a4));
        } else {
            t43 = (FUN_0c085d0c(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28)));
        }
    } else {
        if (((((struct o3770_int *)(a4))->v)) != 0) {
            (((struct o3830_ushort *)(((((struct o3770_int *)(a4))->v))))->v) = 0x0;
            (((struct o374B_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x1;
            t10 = FUN_0c037bf6(a4, a5, a6);
            if ((unsigned char)t10 != 0) {
                t43 = (FUN_0c085d0c(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28)));
            } else {
                FUN_0c038362(a4);
                t13 = *(short *)((a4 + 0x1E));
                *(unsigned short *)((a4 + 0x1E)) = (t13 - 1);
                if ((short)(t13 - 1) == 0) {
                    (((struct o445_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x1;
                }
                u19 = (((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v);
                t43 = (int)u19;
                if ((int)u19 == 42) {
                    FUN_0c059e60(a4, 0x2);
                    thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC53258C))) + 0x28), ((int)stk + 0));
                    *(unsigned short *)((a4 + 0x1C)) = 0x1;
                    FUN_0c073566(a4, 0x32);
                    t43 = (FUN_0c07363a(a4, 0x32));
                }
            }
        } else {
            t43 = (FUN_0c085d0c(a4, a5, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28)));
        }
    }
    return t43;
}
