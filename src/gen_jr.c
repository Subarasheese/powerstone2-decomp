/* Straight-line functions with calls and guards (batch gen_jr): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o20_uchar { char p[0x20]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o8C_int { char p[0x8C]; int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c07e2f4(int, int);
int FUN_0c15b478(int, int, int, int, int, int, int, int);
int FUN_0c179ac0(void);
int FUN_0c187798(void);
float math_cos_angle16(int);
float math_sin_angle16(int);
int thunk_FUN_0c05abb2(int, int);
int FUN_0c130364(int a4);
int FUN_0c04b3ae(int a4, int a5);

int FUN_0c130364(int a4)
{
    int stk[9];
    register int t0;
    register int t37;
    register float u7;
    register float u14;
    register int t21;
    register int t31;

    t0 = FUN_0c03f444(0x1, 0x0, 0x1);
    t37 = t0;
    if (t0 == 0) {
    } else {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct o14_uchar *)(t0))->v) = 0x0;
        (((struct o15_uchar *)(t0))->v) = 0x0;
        *(unsigned short *)((t0 + 0x1C)) = 0x0;
        *(unsigned short *)((t0 + 0x1E)) = 0x0;
        *(unsigned int *)((t0 + 0x4)) = 0xC13022A;
        *(unsigned int *)((t0 + 0x10)) = a4;
        (((struct oAC_ushort *)(t0))->v) = 0x5;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        FUN_0c187798();
        *(int *)((int)stk + 28) = (t0 + 0x28);
        u7 = ((((struct o28_float *)(t0))->v));
        u7 = u7 + (math_sin_angle16((*(int *)((a4 + 0x38))))) * ((((struct o0_float *)0xC2A1374)->v));
        (((struct o28_float *)(t0))->v) = u7;
        (((struct o2C_float *)(t0))->v) = (((((struct o2C_float *)(t0))->v)) + ((((struct o4_float *)0xC2A1374)->v)));
        *(int *)((int)stk + 28) = (t0 + 0x30);
        u14 = ((((struct o30_float *)(t0))->v));
        u14 = u14 + (math_cos_angle16((*(int *)((a4 + 0x38))))) * ((((struct o8_float *)0xC2A1374)->v));
        (((struct o30_float *)(t0))->v) = u14;
        FUN_0c187798();
        FUN_0c187798();
        (((struct o4C_float *)(t0))->v) = ((math_sin_angle16((*(int *)((t0 + 0x38))))) * 37.0f);
        (((struct o50_float *)(t0))->v) = 0.0f;
        (((struct o54_float *)(t0))->v) = ((math_cos_angle16((*(int *)((t0 + 0x38))))) * 37.0f);
        *(int *)((int)stk + 28) = 0xF0;
        *(int *)((int)stk + 24) = 0x0;
        t21 = *(signed char *)((t0 + 0x1));
        *(int *)((int)stk + 20) = (~((int)0x1 << (int)t21));
        *(int *)((int)stk + 16) = 0x100;
        FUN_0c064d24(t0, 0x1, 0x14, 0x0, 0x100, (~((int)0x1 << (int)t21)), 0x0, 0xF0);
        FUN_0c07e2f4(t0, 0x62);
        FUN_0c03744a(((((struct oC4_int *)(t0))->v)), 0x0, 0x2, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
        *(unsigned char *)((((((struct oC4_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(t0))->v)) + 0x6)) = 0xB;
        (((struct o80_uint *)(((((struct oC4_int *)(t0))->v))))->v) = 0x4000;
        *(int *)((int)stk + 12) = 0xC2A13AC;
        *(int *)((int)stk + 8) = 0xC2A13A0;
        *(int *)((int)stk + 4) = 0x6F;
        *(int *)((int)stk + 0) = 0x1D;
        t31 = *(signed char *)((t0 + 0x1));
        (((struct o20_uchar *)(((int)stk + 0)))->v) = t31;
        t37 = (FUN_0c15b478((*(signed char *)(((int)stk + 32))), (t0 + 0x64), t0, (*(int *)((((((struct o8C_int *)((*(int *)((((signed char)t31 << 2) + 0xC4B40FC)))))->v)) + 0x0))), 0x1D, 0x6F, 0xC2A13A0, 0xC2A13AC));
    }
    return t37;
}

int FUN_0c04b3ae(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    t0 = FUN_0c179ac0();
    t1 = ((~(((~t0) + 0x1) & 0x1)) + 0x1);
    if ((int)t0 >= 0) {
        t1 = (t0 & 0x1);
    }
    t0 = FUN_0c037320((t1 + 0x17), (*(int *)0xC4B410C));
    t2 = FUN_0c03f444(0x5, 0x0, t0);
    if (t2 == 0) {
        return t2;
    }
    FUN_0c03733c(t2, (t1 + 0x17), (*(int *)0xC4B410C));
    (((struct oA8_uchar *)(t2))->v) = 0x1;
    (((struct oAC_ushort *)(t2))->v) = 0x1F;
    (((struct oA9_uchar *)(t2))->v) = 0x80;
    *(unsigned char *)((t2 + 0x1)) = 0xFFFFFFFF;
    *(unsigned int *)((t2 + 0x4)) = 0xC04B35A;
    FUN_0c187798();
    (((struct o50_float *)(t2))->v) = 0.0f;
    (((struct o5C_float *)(t2))->v) = -2.0f;
    t0 = FUN_0c179ac0();
    t1 = ((~(((~t0) + 0x1) & 0x3)) + 0x1);
    if ((int)t0 >= 0) {
        t1 = (t0 & 0x3);
    }
    u0 = 0.5f;
    u0 = u0 + 0.25f * (float)t1;
    (((struct o40_float *)(t2))->v) = u0;
    (((struct o48_float *)(t2))->v) = u0;
    (((struct o44_float *)(t2))->v) = u0;
    t0 = FUN_0c179ac0();
    t1 = ((~(((~t0) + 0x1) & 0x1F)) + 0x1);
    if ((int)t0 >= 0) {
        t1 = (t0 & 0x1F);
    }
    *(unsigned int *)((t2 + 0x34)) = (((t1 << 8) << 2) << 1);
    t0 = FUN_0c179ac0();
    t1 = ((~(((~t0) + 0x1) & 0x1F)) + 0x1);
    if ((int)t0 >= 0) {
        t1 = (t0 & 0x1F);
    }
    *(unsigned int *)((t2 + 0x38)) = (((t1 << 8) << 2) << 1);
    t0 = FUN_0c179ac0();
    t1 = ((~(((~t0) + 0x1) & 0x1F)) + 0x1);
    if ((int)t0 >= 0) {
        t1 = (t0 & 0x1F);
    }
    *(unsigned int *)((t2 + 0x3C)) = (((t1 << 8) << 2) << 1);
    if (a5 != 0) {
        if (a5 != 4) {
            return a5;
        }
        return thunk_FUN_0c05abb2(0x41, (t2 + 0x28));
    }
    return thunk_FUN_0c05abb2(0x40, (t2 + 0x28));
}
