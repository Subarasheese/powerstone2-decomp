/* game/effect: functions 0C0A46D4-0C0A5ABC, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o118_int { char p[0x118]; int v; };
struct o28_float { char p[0x28]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o3850_int { char p[0x3850]; int v; };
struct o3850_uint { char p[0x3850]; unsigned int v; };
struct o42C_short { char p[0x42C]; short v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o8C_float { char p[0x8C]; float v; };
int FUN_0c037bf6(int);
int FUN_0c038362(int);
int FUN_0c07e2f4(int, int);
int FUN_0c07eaf4(int, int, int);
int FUN_0c085d0c(int);
int FUN_0c0a4884(int);
int FUN_0c0a4b38(int);
int FUN_0c14f824(int, int);
int FUN_0c14f8aa(int, int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
extern int FUN_0c187798();
int FUN_0c0a46d4(int a4, int a5, int a6, int a7);
int FUN_0c0a4f3a(int a4, int a5, int a6);
int FUN_0c0a5a82(int a4, int a5, int a6, int a7);

int FUN_0c0a46d4(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    float u0;
    register float u1;

    if (((unsigned short)((((struct o42C_short *)(a4))->v)) & 0x3C00) != 0) {
        (((struct o3850_uint *)(a4))->v) = ((*(int *)((0xC5413E8 + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x2F8)))) + (FUN_0c07eaf4(a4, a5, a6)));
        (((struct o4C_float *)(a4))->v) = ((math_sin_angle16(((((struct o3850_int *)(a4))->v)))) * (*(float *)0xC25D344));
        u1 = (math_cos_angle16(((((struct o3850_int *)(a4))->v))));
    } else {
        (((struct o4C_float *)(a4))->v) = ((math_sin_angle16((*(int *)((a4 + 0x38))))) * (*(float *)0xC25D344));
        u1 = (math_cos_angle16((*(int *)((a4 + 0x38)))));
    }
    (((struct o54_float *)(a4))->v) = (u1 * (*(float *)0xC25D344));
    u1 = (((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v);
    if (!(12.0f > u1) && !(u1 > 30.0f)) {
        t1 = *(short *)((a4 + 0x1C));
        t2 = ((~(((~t1) + 0x1) & 0x7)) + 0x1);
        if ((int)t1 >= 0) {
            t2 = (t1 & 0x7);
        }
        if (t2 == 0) {
            FUN_0c07e2f4(a4, 0x5);
        }
    }
    if ((int)((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v)) == 30) {
        FUN_0c07e2f4(a4, 0x6);
    }
    t1 = FUN_0c037bf6(a4);
    if ((unsigned char)t1 != 0) {
        FUN_0c187798(0xC25D238);
        FUN_0c187798(t0);
        return FUN_0c085d0c(a4);
    }
    u1 = (((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v);
    if (!(((((struct o0_float *)0xC0A4938)->v)) > u1) && (u0 = (((struct o4_float *)0xC0A4938)->v), !(u1 > u0))) {
        u0 = (((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v);
        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
        (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o54_float *)(a4))->v)));
        t0 = ((~(((~(int)u0) + 0x1) & 0x7)) + 0x1);
        if ((int)(int)u0 >= 0) {
            t0 = ((int)u0 & 0x7);
        }
        if (t0 == 0) {
            FUN_0c14f824((*(signed char *)((a4 + 0x1))), (a4 + 0x28));
        }
    }
    *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
    return FUN_0c038362(a4);
}

int FUN_0c0a4f3a(int a4, int a5, int a6)
{
    int stk[3];
    register int t0;
    register float u4;
    register float u8;
    register int t11;
    register float u15;
    register float u19;

    t0 = ((int (*)(int, int, int))(FUN_0c187798))(a4, a5, a6);
    u4 = (*(float *)(((int)stk + 0)));
    u4 = u4 + 40.0f * (math_sin_angle16(((*(int *)((a4 + 0x38))) + 0x4000)));
    *(float *)(((int)stk + 0)) = u4;
    u8 = (*(float *)(((int)stk + 8)));
    u8 = u8 + 40.0f * (math_cos_angle16(((*(int *)((a4 + 0x38))) + 0x4000)));
    *(float *)(((int)stk + 8)) = u8;
    FUN_0c14f8aa((*(signed char *)((a4 + 0x1))), ((int)stk + 0), 0x2);
    t11 = ((int (*)(void))(FUN_0c187798))();
    u15 = (*(float *)(((int)stk + 0)));
    u15 = u15 + 40.0f * (math_sin_angle16(((*(int *)((a4 + 0x38))) - 16384)));
    *(float *)(((int)stk + 0)) = u15;
    u19 = (*(float *)(((int)stk + 8)));
    u19 = u19 + 40.0f * (math_cos_angle16(((*(int *)((a4 + 0x38))) - 16384)));
    *(float *)(((int)stk + 8)) = u19;
    return (FUN_0c14f8aa((*(signed char *)((a4 + 0x1))), ((int)stk + 0), 0x2));
}

int FUN_0c0a5a82(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x375A));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        if (t0 != 5) {
                            return t0;
                        }
                        return FUN_0c0a4b38(a4);
                    }
                    return ((int (*)(int, int, int, int))(0xC0A57F0))(a4, a5, a6, a7);
                }
                return ((int (*)(int, int, int, int))(0xC0A5564))(a4, a5, a6, a7);
            }
            return FUN_0c0a4884(a4);
        }
        return ((int (*)(int, int, int, int))(0xC0A5588))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC0A5564))(a4, a5, a6, a7);
}
