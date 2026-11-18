/* Straight-line functions with calls and guards (batch gen_ce): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o376C_int { char p[0x376C]; int v; };
struct o8C_float { char p[0x8C]; float v; };
int FUN_0c037bf6(int, int, int);
int FUN_0c059df2(int, int);
int FUN_0c081dfc(int);
int FUN_0c085d0c(int, int, int, int);
int FUN_0c085f66(int);
int FUN_0c0c2d56(int, int, int);
int FUN_0c0cd8b4(int, int, int);
int FUN_0c14f9d6(int, int);
int FUN_0c150be8(int, int);
int FUN_0c1512a0(int, int);
int FUN_0c15c344(int, int, int);
int FUN_0c16f454(int, int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c087610(int a4, int a5, int a6);

int FUN_0c087610(int a4, int a5, int a6)
{
    int stk[6];
    register int t0;
    register int t4;
    register float u19;
    register float u23;
    register int t48;
    register float u65;
    register float u69;
    register int t96;
    int t14;

    t0 = FUN_0c037bf6(a4, a5, a6);
    if ((unsigned char)t0 != 0) {
        t4 = FUN_0c085f66(a4);
        if (t4 == 0) {
            FUN_0c081dfc(a4);
        } else {
            FUN_0c0c2d56(((((struct o376C_int *)(a4))->v)), 0x4, (*(signed char *)((a4 + 0x1))));
        }
        t96 = (FUN_0c085d0c(a4, 0x0, 0x0, 0x0));
    } else {
        if (!(19.0f > ((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v))) && (t14 = (((struct o22_short *)(a4))->v), t14 == 0)) {
            (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) + 0x1);
            u19 = ((((struct o28_float *)(a4))->v));
            u19 = u19 + 200.0f * (math_sin_angle16((*(int *)((a4 + 0x38)))));
            *(float *)(((int)stk + 0)) = u19;
            u23 = ((((struct o30_float *)(a4))->v));
            u23 = u23 + 200.0f * (math_cos_angle16((*(int *)((a4 + 0x38)))));
            *(float *)(((int)stk + 8)) = u23;
            *(float *)(((int)stk + 4)) = ((((struct o2C_float *)(a4))->v));
            if ((*(signed char *)((a4 + 0x135))) == 2) {
                FUN_0c1512a0(0x1, ((int)stk + 0));
            } else {
                FUN_0c14f9d6((*(signed char *)((a4 + 0x1))), ((int)stk + 0));
                FUN_0c150be8(((int)stk + 0), (unsigned short)((*(int *)((a4 + 0x38))) + 0x8000));
            }
            if ((unsigned char)(*(signed char *)((a4 + 0x3721))) == 29) {
                FUN_0c15c344(a4, ((int)stk + 0), 0x0);
                FUN_0c059df2((*(signed char *)((a4 + 0x1))), 0x52);
            }
            if ((unsigned char)(*(signed char *)((a4 + 0x3721))) == 30) {
                FUN_0c16f454(a4, ((int)stk + 0), 0x0);
            }
            (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) + 0x1);
        }
        t48 = *(signed char *)((a4 + 0x3721));
        t96 = (unsigned char)t48;
        if ((unsigned char)t48 == 31) {
            t96 = 0x8C;
            if (!((*(float *)0xC08781C) > ((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v)))) {
                if (((((struct o20_short *)(a4))->v)) == 0) {
                    if ((*(signed char *)((a4 + 0x131))) == 0) {
                        u65 = ((((struct o28_float *)(a4))->v));
                        u65 = u65 + 200.0f * (math_sin_angle16((*(int *)((a4 + 0x38)))));
                        *(float *)(((int)stk + 0)) = u65;
                        u69 = ((((struct o30_float *)(a4))->v));
                        u69 = u69 + 200.0f * (math_cos_angle16((*(int *)((a4 + 0x38)))));
                        *(float *)(((int)stk + 8)) = u69;
                        *(float *)(((int)stk + 4)) = ((((struct o2C_float *)(a4))->v));
                        FUN_0c0cd8b4(a4, 0x26, ((int)stk + 0));
                    }
                    (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) + 0x1);
                }
                t96 = 0x20;
            }
        }
    }
    return t96;
}
