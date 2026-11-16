/* Straight-line functions with calls and guards (batch gen_kf): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_uchar { unsigned char v; };
struct o100_int { char p[0x100]; int v; };
struct o118_int { char p[0x118]; int v; };
struct o12A_short { char p[0x12A]; short v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12E_short { char p[0x12E]; short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o130_uchar { char p[0x130]; unsigned char v; };
struct o131_uchar { char p[0x131]; unsigned char v; };
struct o132_uchar { char p[0x132]; unsigned char v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o168_float { char p[0x168]; float v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o18_uchar { char p[0x18]; unsigned char v; };
struct o19_uchar { char p[0x19]; unsigned char v; };
struct o1B_uchar { char p[0x1B]; unsigned char v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o371D_uchar { char p[0x371D]; unsigned char v; };
struct o3726_uchar { char p[0x3726]; unsigned char v; };
struct o3728_uchar { char p[0x3728]; unsigned char v; };
struct o3743_uchar { char p[0x3743]; unsigned char v; };
struct o374B_uchar { char p[0x374B]; unsigned char v; };
struct o3751_uchar { char p[0x3751]; unsigned char v; };
struct o3770_int { char p[0x3770]; int v; };
struct o3774_int { char p[0x3774]; int v; };
struct o378C_float { char p[0x378C]; float v; };
struct o3790_float { char p[0x3790]; float v; };
struct o3822_short { char p[0x3822]; short v; };
struct o3822_ushort { char p[0x3822]; unsigned short v; };
struct o382A_ushort { char p[0x382A]; unsigned short v; };
struct o3830_ushort { char p[0x3830]; unsigned short v; };
struct o3864_int { char p[0x3864]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o418_int { char p[0x418]; int v; };
struct o44_float { char p[0x44]; float v; };
struct o445_uchar { char p[0x445]; unsigned char v; };
struct o446_uchar { char p[0x446]; unsigned char v; };
struct o447_uchar { char p[0x447]; unsigned char v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o6C_float { char p[0x6C]; float v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB0_float { char p[0xB0]; float v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oD0_int { char p[0xD0]; int v; };
struct oD4_int { char p[0xD4]; int v; };
struct oD8_int { char p[0xD8]; int v; };
struct oDC_int { char p[0xDC]; int v; };
struct oE0_int { char p[0xE0]; int v; };
struct oE4_int { char p[0xE4]; int v; };
struct oE8_int { char p[0xE8]; int v; };
struct oEC_int { char p[0xEC]; int v; };
struct oF0_int { char p[0xF0]; int v; };
struct oF4_int { char p[0xF4]; int v; };
struct oF8_int { char p[0xF8]; int v; };
struct oFC_int { char p[0xFC]; int v; };
int FUN_0c01c62a(int);
int FUN_0c01cd2c(int);
int FUN_0c022050(void);
int FUN_0c0220c4(int, int, int);
int FUN_0c0222a4(int, int, int);
int FUN_0c02aa9e(void);
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c037498(int, int, int, int);
int FUN_0c037bf6(int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c0582de(int, int);
int FUN_0c059df2(int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c064d5a(int, int);
int FUN_0c064f80(int);
int FUN_0c067734(int);
int FUN_0c0733d2(int);
int FUN_0c0741b4(int);
int FUN_0c07429a(int);
int FUN_0c074768(int);
int FUN_0c07487e(int, int, int, int, int, int);
int FUN_0c074c80(int);
int FUN_0c07d086(int, int, float);
int FUN_0c07dbd8(int, int);
int FUN_0c07e2f4(int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c081dfc(int);
int FUN_0c085d0c(int, int, int, int);
int FUN_0c0e2390(int, int, int);
int FUN_0c151310(int);
int FUN_0c152f08(int);
int FUN_0c15d92e(int);
int FUN_0c16f626(void);
float FUN_0c17c450(int);
extern int FUN_0c17e740();
int FUN_0c1864e0(int, int);
int FUN_0c186740(int, int);
int FUN_0c187798(void);
int math_atan2_angle16(float, float);
float math_cos_angle16(int);
int math_mat_get_translate(int, int);
float math_signed_sqrt(float);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int nlCalcVector(int, int);
int nlObjPutTrnsl(int, float);
int nlRotateAX(int);
int nlRotateAY(int);
int nlUnitMatrix(void);
extern int thunk_FUN_0c03f346();
int thunk_FUN_0c058310(int, int);
float FUN_0c071b00(int a4);
int FUN_0c1402c4(int a4);
int FUN_0c027502(void);
int FUN_0c074602(int a4);
int FUN_0c14c1b4(int a4, int a5, int a6, int a7, int a8);
int FUN_0c103a3e(int a4, int a5, int a6, int a7);
int FUN_0c12ebe4(int a4, int a5);
int FUN_0c13caec(int a4, int a5);
int FUN_0c140b18(int a4, int a5);
int FUN_0c16f656(int a4, int a5, int a6, int a7);
int FUN_0c01436c(int a4);
int FUN_0c074ce8(int a4);
int FUN_0c094e54(int a4, int a5, int a6, int a7);
int FUN_0c0a68b2(int a4);
int FUN_0c0c2ab6(int a4, int a5);
int FUN_0c124da6(int a4, int a5, int a6, int a7, float f4, float f5);
int FUN_0c15da24(int a4, int a5, int a6, int a7, float f4);
int FUN_0c074054(int a4, int a5);
int FUN_0c01a3a4(int a4);
int FUN_0c0d24d0(int a4, int a5, int a6, float f4);

float FUN_0c071b00(int a4)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;
    register float u2;

    t0 = FUN_0c064f80(a4);
    if (t0 != 0) {
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0xC3, 0xFFFFFFFF, 0x3, 0xC3);
        t0 = *(signed char *)((a4 + 0x2));
        t1 = *(signed char *)(((0x371C + a4) + 0x0));
        (((struct o3790_float *)(a4))->v) = ((((struct o40_float *)(((((((t1 << 1) + t1) << 2) << 2) << 1) + (0xC259E54 + (((((t0 << 1) + t0) << 2) << 2) << 2)))))->v));
        (((struct o4C_float *)(a4))->v) = ((math_sin_angle16((*(int *)((a4 + 0x38))))) * ((((struct o3790_float *)(a4))->v)));
        u0 = math_cos_angle16((*(int *)((a4 + 0x38))));
        u1 = (((struct o3790_float *)(a4))->v);
        (((struct o54_float *)(a4))->v) = (u0 * u1);
        (((struct o60_float *)(a4))->v) = 0.0f;
        (((struct o58_float *)(a4))->v) = 0.0f;
        (((struct o50_float *)(a4))->v) = 30.0f;
        (((struct o5C_float *)(a4))->v) = -1.79999995f;
        *(unsigned short *)((a4 + 0x1C)) = 0x0;
        (((struct o15_uchar *)(a4))->v) = 0x0;
        u2 = (u0 * u1);
    } else {
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0xC4, 0xFFFFFFFF, 0x3, 0xC4);
        t0 = *(signed char *)((a4 + 0x2));
        t1 = *(signed char *)(((0x371C + a4) + 0x0));
        (((struct o3790_float *)(a4))->v) = ((((struct o40_float *)(((((((t1 << 1) + t1) << 2) << 2) << 1) + (0xC259E54 + (((((t0 << 1) + t0) << 2) << 2) << 2)))))->v));
        (((struct o4C_float *)(a4))->v) = ((math_sin_angle16((*(int *)((a4 + 0x38))))) * ((((struct o3790_float *)(a4))->v)));
        u0 = math_cos_angle16((*(int *)((a4 + 0x38))));
        u1 = (((struct o3790_float *)(a4))->v);
        (((struct o54_float *)(a4))->v) = (u0 * u1);
        (((struct o60_float *)(a4))->v) = 0.0f;
        (((struct o58_float *)(a4))->v) = 0.0f;
        (((struct o50_float *)(a4))->v) = 30.0f;
        (((struct o5C_float *)(a4))->v) = -1.79999995f;
        (((struct o15_uchar *)(a4))->v) = 0x1;
        u2 = (u0 * u1);
    }
    (((struct o131_uchar *)(a4))->v) = 0x0;
    return u2;
}

int FUN_0c1402c4(int a4)
{
    register int t0;
    register int t67;

    t0 = FUN_0c03f444(0x5, 0x0, 0x10);
    t67 = t0;
    if (t0 == 0) {
    } else {
        *(unsigned int *)((t0 + 0x4)) = 0xC140464;
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x10)) = a4;
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        FUN_0c187798();
        FUN_0c187798();
        FUN_0c03744a(((((struct oC4_int *)(t0))->v)), 0x0, 0x10, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
        FUN_0c03744a(((((struct oC8_int *)(t0))->v)), 0x1, 0x10, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
        FUN_0c03744a(((((struct oCC_int *)(t0))->v)), 0x2, 0x10, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
        FUN_0c03744a(((((struct oD0_int *)(t0))->v)), 0x2, 0x10, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
        FUN_0c03744a(((((struct oD4_int *)(t0))->v)), 0x2, 0x10, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
        FUN_0c03744a(((((struct oD8_int *)(t0))->v)), 0x2, 0x10, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
        FUN_0c03744a(((((struct oDC_int *)(t0))->v)), 0x3, 0x10, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
        FUN_0c03744a(((((struct oE0_int *)(t0))->v)), 0x3, 0x10, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
        FUN_0c03744a(((((struct oE4_int *)(t0))->v)), 0x3, 0x10, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
        FUN_0c03744a(((((struct oE8_int *)(t0))->v)), 0x4, 0x10, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
        FUN_0c03744a(((((struct oEC_int *)(t0))->v)), 0x4, 0x10, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
        FUN_0c03744a(((((struct oF0_int *)(t0))->v)), 0x4, 0x10, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
        FUN_0c03744a(((((struct oF4_int *)(t0))->v)), 0x4, 0x10, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
        FUN_0c03744a(((((struct oF8_int *)(t0))->v)), 0x4, 0x10, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
        FUN_0c03744a(((((struct oFC_int *)(t0))->v)), 0x4, 0x10, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
        t67 = (FUN_0c03744a(((((struct o100_int *)(t0))->v)), 0x4, 0x10, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2))))));
    }
    return t67;
}



int FUN_0c14c1b4(int a4, int a5, int a6, int a7, int a8)
{
    int stk[6];
    register int t0;
    register int t30;
    register int t1;
    register int t2;
    register int t6;
    register float u24;
    register float u25;
    register float u26;
    register float t27;
    register int t29;

    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 8)) = a6;
    *(unsigned int *)(((int)stk + 0)) = a7;
    t0 = FUN_0c03f444(0x5, 0x0, 0x2);
    t30 = t0;
    if (t0 != 0) {
        t1 = 0x0;
        t2 = 0x0;
        for (;;) {
            t6 = *(int *)((((0xC4 + t0) + t2) + 0x0));
            FUN_0c03744a(t6, 0x0, 0xA, (*(int *)(((((*(signed char *)((a4 + 0x1))) << 2) << 1) + 0xC4B40E0))));
            *(unsigned short *)((t6 + 0x6)) = 0x1F;
            t2 = (t2 + 0x4);
            (((struct o8C_float *)(t6))->v) = 1.0f;
            (((struct o84_float *)(t6))->v) = 1.0f;
            (((struct o88_float *)(t6))->v) = 0.0f;
            (((struct o7C_uint *)(t6))->v) = t1;
            t1 = (t1 + 0x4000);
            if ((unsigned int)t2 >= (unsigned int)0x8) {
                break;
            }
        }
        *(unsigned int *)((t0 + 0x4)) = 0xC14C374;
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned char *)((t0 + 0x2)) = a8;
        *(unsigned short *)((t0 + 0x1E)) = a8;
        (((struct o20_ushort *)(t0))->v) = a8;
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        *(unsigned int *)((t0 + 0x10)) = a4;
        (((struct oA4_uint *)(t0))->v) = 0x0;
        *(volatile int *)(((int)stk + 8));
        FUN_0c187798();
        *(float *)(((int)stk + 16)) = ((*(float *)(((int)stk + 16))) - 110.599998f);
        FUN_0c0582de((((int)stk + 0) + 0xC), (*(int *)(((int)stk + 4))));
        FUN_0c187798();
        FUN_0c187798();
        *(volatile int *)(((int)stk + 0));
        FUN_0c187798();
        (((struct o4_float *)((0x41C + t0)))->v) = (((((struct o4_float *)((0x41C + t0)))->v)) + 110.599998f);
        FUN_0c0e2390((((int)stk + 0) + 0xC), (t0 + 0x28), (0x41C + t0));
        (((struct oC_float *)((0x41C + t0)))->v) = (FUN_0c17c450((((int)stk + 0) + 0xC)));
        *(unsigned int *)((t0 + 0x38)) = (math_atan2_angle16((*(float *)(((int)stk + 12))), (*(float *)(((int)stk + 20)))));
        u24 = *(float *)(((int)stk + 12));
        u25 = *(float *)(((int)stk + 20));
        u26 = (u25 * u25);
        u26 = u26 + u24 * u24;
        t27 = math_signed_sqrt(u26);
        t29 = math_atan2_angle16((-(*(float *)(((int)stk + 16)))), t27);
        *(unsigned int *)((t0 + 0x34)) = (t29 + 0x4000);
        t30 = (t29 + 0x4000);
    }
    return t30;
}

int FUN_0c103a3e(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;
    register float u2;

    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o15_uchar *)(a4))->v) = 0x0;
        (((struct o22_ushort *)(a4))->v) = 0x0;
    }
    t0 = *(signed char *)((a4 + 0x1));
    (((struct o28_float *)(a4))->v) = (*(float *)(((((*(int *)((((((t0 << 2) << 2) << 1) + 0xC472D28) + 0xC))) << 2) + (0xC1FC61C + ((t0 << 2) << 2))) + 0x0)));
    t0 = *(signed char *)((a4 + 0x1));
    (((struct o2C_float *)(a4))->v) = (*(float *)(((((*(int *)((((((t0 << 2) << 2) << 1) + 0xC472D28) + 0x10))) << 2) + (0xC1FC65C + (((t0 << 1) + t0) << 2))) + 0x0)));
    if ((*(int *)(((((((*(signed char *)((a4 + 0x1))) << 2) << 2) << 1) + 0xC472D28) + 0x0))) != 0) {
        (((struct oA8_uchar *)(a4))->v) = 0x1;
    } else {
        (((struct oA8_uchar *)(a4))->v) = 0x0;
    }
    if ((*(signed char *)((a4 + 0x15))) == 0) {
        (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) + 0x1);
        t1 = (((struct oC4_int *)(a4))->v);
        u0 = math_sin_angle16(((((((struct o22_short *)(a4))->v)) << 8) << 2));
        u1 = (((struct o4_float *)0xC103C14)->v);
        u2 = ((math_sin_angle16((((((((struct o22_short *)(a4))->v)) << 8) << 2) << 1))) * ((((struct o0_float *)0xC103C14)->v)));
        u2 = u2 + u1 * u0;
        (((struct o6C_float *)(t1))->v) = u2;
        if (((*(signed char *)((a4 + 0x1))) & 1) != 0) {
            t1 = (((struct oC4_int *)(a4))->v);
            (((struct o6C_float *)(t1))->v) = (-((((struct o6C_float *)(t1))->v)));
        }
        t1 = *(signed char *)0xC541F44;
        t2 = (unsigned char)t1;
        if ((unsigned char)t1 == 1) {
            (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x400);
            (((struct oB0_float *)(a4))->v) = 1.0f;
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            t2 = 0x15;
        }
        return t2;
    }
    (((struct oB0_float *)(a4))->v) = (((((struct oB0_float *)(a4))->v)) - 0.0333333351f);
    if (0.0f > ((((struct oB0_float *)(a4))->v))) {
        return FUN_0c03f346(a4, 0xC472CEC, t0, a7);
    }
    return 0xB0;
}

int FUN_0c12ebe4(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t3;

    t0 = FUN_0c03f444(0x5, 0x0, 0x1);
    t1 = t0;
    if (t0 == 0) {
    } else {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned int *)((t0 + 0x4)) = 0xC12ED48;
        FUN_0c187798();
        (((struct o54_float *)(t0))->v) = 0.0f;
        (((struct o50_float *)(t0))->v) = 0.0f;
        (((struct o4C_float *)(t0))->v) = 0.0f;
        (((struct o48_float *)(t0))->v) = 0.0f;
        (((struct o44_float *)(t0))->v) = 0.0f;
        (((struct o40_float *)(t0))->v) = 0.0f;
        (((struct o14_uchar *)(t0))->v) = a5;
        (((struct o15_uchar *)(t0))->v) = 0x0;
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0x1F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        t1 = (((struct oC4_int *)(t0))->v);
        FUN_0c03744a(t1, (*(int *)((((((((signed char)a5 << 1) + (signed char)a5) << 2) << 1) + 0xC201D7C) + 0x0))), (*(int *)((((((((signed char)a5 << 1) + (signed char)a5) << 2) << 1) + 0xC201D7C) + 0x4))), (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
        *(unsigned short *)((t1 + 0x6)) = 0x20F;
        (((struct o20_float *)(t1))->v) = 1.0f;
        (((struct o1C_float *)(t1))->v) = 1.0f;
        (((struct o18_float *)(t1))->v) = 1.0f;
        (((struct o14_float *)(t1))->v) = 1.0f;
        FUN_0c187798();
        *(unsigned int *)((t0 + 0x10)) = a4;
        if ((signed char)a5 != 0) {
            if ((signed char)a5 != 1) {
                if ((signed char)a5 != 2) {
                    if ((signed char)a5 != 3) {
                        if ((signed char)a5 != 4) {
                            if ((signed char)a5 != 5) {
                                if ((signed char)a5 != 6) {
                                    if ((signed char)a5 != 7) {
                                        t1 = (signed char)a5;
                                        if ((signed char)a5 != 8) {
                                        } else {
                                            *(unsigned short *)((t0 + 0x1C)) = 0x14;
                                            t1 = 0x14;
                                        }
                                        t3 = t1;
                                    } else {
                                        *(unsigned short *)((t0 + 0x1C)) = 0x3C;
                                        t3 = 0x3C;
                                    }
                                    t1 = t3;
                                } else {
                                    *(unsigned short *)((t0 + 0x1C)) = 0x3C;
                                    t1 = 0x3C;
                                }
                                t3 = t1;
                            } else {
                                *(unsigned short *)((t0 + 0x1C)) = 0x3C;
                                t3 = 0x3C;
                            }
                            t1 = t3;
                        } else {
                            *(unsigned short *)((t0 + 0x1C)) = 0x1E;
                            (((struct o2C_float *)(t0))->v) = ((((struct o168_float *)(a4))->v));
                            t1 = 0x2C;
                        }
                        t3 = t1;
                    } else {
                        *(unsigned short *)((t0 + 0x1C)) = 0x3C;
                        t3 = 0x3C;
                    }
                    t1 = t3;
                } else {
                    *(unsigned short *)((t0 + 0x1C)) = 0x3C;
                    (((struct o2C_float *)(t0))->v) = ((((struct o168_float *)(a4))->v));
                    t1 = 0x2C;
                }
                t3 = t1;
            } else {
                thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532564))) + 0x28), (t0 + 0x28));
                *(unsigned short *)((t0 + 0x1C)) = 0x14;
                t3 = 0x14;
            }
            t1 = t3;
        } else {
            *(unsigned short *)((t0 + 0x1C)) = 0x3D;
            t1 = 0x3D;
        }
    }
    return t1;
}

int FUN_0c13caec(int a4, int a5)
{
    int stk[3];
    register int t0;
    register int t34;
    register int t1;
    register int t6;
    register int t7;
    register int t8;
    register int t18;
    register int t19;
    register int t20;
    register int t30;

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned char *)(((int)stk + 0)) = a5;
    *(unsigned int *)(((int)stk + 8)) = 0x8;
    t0 = FUN_0c03f444(0x5, 0x1, 0x8);
    t34 = t0;
    if (t0 != 0) {
        t1 = *(int *)(((int)stk + 4));
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((t1 + 0x1)));
        *(unsigned int *)((t0 + 0x4)) = 0xC13C930;
        *(unsigned char *)((t0 + 0x2)) = (*(signed char *)(((int)stk + 0)));
        FUN_0c187798();
        math_mat_get_translate((t1 + 0x64), (t0 + 0x28));
        (((struct o48_float *)(t0))->v) = 1.0f;
        (((struct o44_float *)(t0))->v) = 1.0f;
        (((struct o40_float *)(t0))->v) = 1.0f;
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0x1F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        t6 = 0xC2A210C;
        t7 = 0x0;
        t8 = 0x0;
        for (;;) {
            FUN_0c037498((*(int *)((((0xC4 + t0) + t8) + 0x0))), 0x1, 0x7, (*(int *)((((*(signed char *)((t0 + 0x1))) << 2) + 0xC4B40FC))));
            *(unsigned char *)(((*(int *)((((0xC4 + t0) + t8) + 0x0))) + 0x0)) = 0x1;
            *(unsigned short *)(((*(int *)((((0xC4 + t0) + t8) + 0x0))) + 0x6)) = 0xF;
            (((struct o80_uint *)((*(int *)((((0xC4 + t0) + t8) + 0x0)))))->v) = t7;
            math_vec3_accumulate(((*(int *)((((0xC4 + t0) + t8) + 0x0))) + 0x6C), t6);
            t8 = (t8 + 0x4);
            t6 = (t6 + 0xC);
            t7 = (t7 + 0x8000);
            if ((unsigned int)t8 >= (unsigned int)0x8) {
                break;
            }
        }
        *(unsigned int *)(((int)stk + 0)) = 0x2;
        t18 = 0xE38;
        t19 = 0xC2A2124;
        t20 = 0x8;
        for (;;) {
            FUN_0c037498((*(int *)((((0xC4 + t0) + t20) + 0x0))), 0x2, 0x7, (*(int *)((((*(signed char *)((t0 + 0x1))) << 2) + 0xC4B40FC))));
            *(unsigned char *)(((*(int *)((((0xC4 + t0) + t20) + 0x0))) + 0x0)) = 0x1;
            *(unsigned short *)(((*(int *)((((0xC4 + t0) + t20) + 0x0))) + 0x6)) = 0xF;
            (((struct o80_uint *)((*(int *)((((0xC4 + t0) + t20) + 0x0)))))->v) = t18;
            math_vec3_accumulate(((*(int *)((((0xC4 + t0) + t20) + 0x0))) + 0x6C), t19);
            t30 = *(int *)(((int)stk + 0));
            t19 = (t19 + 0xC);
            t18 = (t18 + 0x71C);
            *(unsigned int *)(((int)stk + 0)) = (t30 + 0x1);
            t20 = (t20 + 0x4);
            if ((int)(t30 + 0x1) >= (int)(*(int *)(((int)stk + 8)))) {
                break;
            }
        }
        *(unsigned int *)((t0 + 0x10)) = (*(int *)(((int)stk + 4)));
        (((struct o1B_uchar *)(t0))->v) = (*(signed char *)0xC54223C);
        t34 = 0x1B;
    }
    return t34;
}

int FUN_0c140b18(int a4, int a5)
{
    int stk[5];
    register int t2;
    register int t3;
    register float t15;
    register float u18;
    register float u19;
    register float u20;
    register float t26;
    register float u29;
    register float u30;
    register float u31;
    register int t32;

    *(unsigned char *)(((int)stk + 16)) = a5;
    t2 = FUN_0c037320(0x0, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
    t3 = FUN_0c03f444(0x1, 0x0, t2);
    if (t3 == 0) {
        return t3;
    }
    *(unsigned int *)((t3 + 0x4)) = 0xC140CC0;
    *(unsigned char *)((t3 + 0x1)) = (*(signed char *)((a4 + 0x1)));
    *(unsigned int *)((t3 + 0x10)) = a4;
    FUN_0c03733c(t3, 0x0, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
    (((struct oA8_uchar *)(t3))->v) = 0x1;
    (((struct oAC_ushort *)(t3))->v) = 0xF;
    (((struct oA9_uchar *)(t3))->v) = 0x21;
    thunk_FUN_0c058310(((*(int *)(((((*(int *)((((unsigned char)(*(signed char *)(((int)stk + 16))) << 2) + 0xC2A22FC))) << 2) + (0xC53255C + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938))) + 0x0))) + 0x28), (t3 + 0x28));
    (((struct o48_float *)(t3))->v) = 1.0f;
    (((struct o44_float *)(t3))->v) = 1.0f;
    (((struct o40_float *)(t3))->v) = 1.0f;
    FUN_0c187798();
    *(int *)((int)stk + 12) = (t3 + 0x28);
    t15 = math_sin_angle16(((-(*(int *)((t3 + 0x34)))) + 0x14000));
    u18 = (((struct o28_float *)(t3))->v);
    u19 = (t15 * (math_cos_angle16(((-(*(int *)((t3 + 0x38)))) + 0x14000))));
    u20 = u18;
    u20 = u20 + 50.0f * u19;
    (((struct o28_float *)(t3))->v) = u20;
    (((struct o2C_float *)(t3))->v) = (((((struct o2C_float *)(t3))->v)) - (((math_cos_angle16(((-(*(int *)((t3 + 0x34)))) + 0x14000))) * 50.0f)));
    *(int *)((int)stk + 12) = (t3 + 0x30);
    t26 = math_sin_angle16(((-(*(int *)((t3 + 0x34)))) + 0x14000));
    u29 = (((struct o30_float *)(t3))->v);
    u30 = (t26 * (math_sin_angle16(((-(*(int *)((t3 + 0x38)))) + 0x14000))));
    u31 = u29;
    u31 = u31 + 50.0f * u30;
    (((struct o30_float *)(t3))->v) = u31;
    *(int *)((int)stk + 12) = 0xF0;
    *(int *)((int)stk + 8) = 0x0;
    t32 = *(signed char *)((t3 + 0x1));
    *(int *)((int)stk + 4) = (~((int)0x1 << (int)t32));
    *(int *)((int)stk + 0) = 0x100;
    FUN_0c064d24(t3, 0x1, 0x30, 0x0, 0x100, (~((int)0x1 << (int)t32)), 0x0, 0xF0);
    return FUN_0c07e2f4(t3, ((*(signed char *)(((int)stk + 16))) + 0x60));
}

int FUN_0c16f656(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o15_uchar *)(a4))->v) = 0x0;
        (((struct oA8_uchar *)(a4))->v) = 0x0;
    }
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) - 1);
                    if ((int)(*(short *)((a4 + 0x1E))) <= 0) {
                        (((struct o15_uchar *)(a4))->v) = 0x0;
                    }
                    t0 = ((int (*)(int, int, int, float, float, float))(FUN_0c17e740))(a4, a5, a6, 1.0f, 1.0f, 1.0f);
                    u0 = (((float)(*(short *)((a4 + 0x1E))) / ((((struct o4_float *)0xC16F7E8)->v))) * 0.699999988f);
                } else {
                    t0 = FUN_0c16f626();
                    if (t0 != 0) {
                        (((struct o15_uchar *)(a4))->v) = 0x4;
                        *(unsigned short *)((a4 + 0x1E)) = 0x5;
                    }
                    t0 = ((int (*)(float, float, float))(FUN_0c17e740))(1.0f, 1.0f, 1.0f);
                    u0 = 0.699999988f;
                }
                u1 = u0;
            } else {
                *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
                if ((int)(*(short *)((a4 + 0x1E))) >= (int)0xF) {
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                }
                t0 = FUN_0c16f626();
                if (t0 != 0) {
                    (((struct o15_uchar *)(a4))->v) = 0x4;
                }
                t0 = ((int (*)(float, float, float))(FUN_0c17e740))(1.0f, 1.0f, 1.0f);
                u1 = (((float)(*(short *)((a4 + 0x1E))) / ((((struct o0_float *)0xC16F7E8)->v))) * 0.699999988f);
            }
            t0 = (nlObjPutTrnsl(0xC203DD0, u1));
        } else {
            *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
            if ((int)(*(short *)((a4 + 0x1C))) >= (int)0x4650) {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                *(unsigned short *)((a4 + 0x1E)) = 0x0;
            }
            t1 = FUN_0c16f626();
            t2 = t1;
            if (t1 != 0) {
                (((struct o15_uchar *)(a4))->v) = 0x0;
                t2 = 0x15;
            }
            t0 = t2;
        }
        t1 = t0;
    } else {
        *(unsigned short *)((a4 + 0x1C)) = 0x0;
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
        if ((int)(*(short *)((a4 + 0x1C))) >= (int)0x4650) {
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            *(unsigned short *)((a4 + 0x1E)) = 0x0;
        }
        t0 = FUN_0c16f626();
        t2 = t0;
        if (t0 != 0) {
            (((struct o15_uchar *)(a4))->v) = 0x0;
            t2 = 0x15;
        }
        t1 = t2;
    }
    return t1;
}

int FUN_0c01436c(int a4)
{
    register int t0;
    int t1;
    int t2;
    register float u0;

    (((struct o2C_float *)(a4))->v) = (*(float *)((((*(signed char *)0xC305415) << 2) + 0xC1A5DA4)));
    (((struct o28_float *)(a4))->v) = -154.0f;
    if (((*(signed char *)0xC30A51A) == 0) && ((t0 = *(signed char *)0xC30EFA2, t0 == 0) && (t1 = *(signed char *)((a4 + 0x15)), (int)t1 < (int)0x3))) {
        t0 = FUN_0c01cd2c(0x101);
        if (((short)t0 != 0) && (t2 = *(short *)0xC30EF6C, t2 == 0)) {
            (((struct o15_uchar *)(a4))->v) = 0x3;
            (((struct o1B_uchar *)(a4))->v) = 0x0;
            (((struct o22_ushort *)(a4))->v) = 0x0;
        }
    }
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                t1 = t0;
                if (t0 != 3) {
                } else {
                    t0 = FUN_0c01c62a(a4);
                    t2 = (signed char)t0;
                    if ((signed char)t0 != 0) {
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        t2 = 0x15;
                    }
                    t1 = t2;
                }
                t0 = t1;
            } else {
                *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
                u0 = 0.5f;
                u0 = u0 + 0.5f * (math_sin_angle16(((((*(short *)((a4 + 0x1E))) << 8) << 2) << 1)));
                (((struct oBC_float *)(a4))->v) = u0;
                (((struct oB8_float *)(a4))->v) = u0;
                (((struct oB4_float *)(a4))->v) = u0;
                t0 = 0xB4;
            }
            t1 = t0;
        } else {
            *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
            u0 = 0.5f;
            u0 = u0 + 0.5f * (math_sin_angle16(((((*(short *)((a4 + 0x1E))) << 8) << 2) << 1)));
            (((struct oB0_float *)(a4))->v) = u0;
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
            t2 = (short)(t0 - 1);
            if ((int)(short)(t0 - 1) <= 0) {
                (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) & 0xFBFF);
                *(unsigned short *)((a4 + 0x1C)) = 0x3C;
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                t2 = 0x15;
            }
            t1 = t2;
        }
        t0 = t1;
    } else {
        (((struct o28_float *)(a4))->v) = -154.0f;
        (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x200);
        (((struct oBC_float *)(a4))->v) = 0.5f;
        (((struct oB8_float *)(a4))->v) = 0.5f;
        (((struct oB4_float *)(a4))->v) = 0.5f;
        *(unsigned short *)((a4 + 0x1E)) = 0x0;
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
        u0 = 0.5f;
        u0 = u0 + 0.5f * (math_sin_angle16(((((*(short *)((a4 + 0x1E))) << 8) << 2) << 1)));
        (((struct oB0_float *)(a4))->v) = u0;
        t1 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
        t2 = (short)(t1 - 1);
        if ((int)(short)(t1 - 1) <= 0) {
            (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) & 0xFBFF);
            *(unsigned short *)((a4 + 0x1C)) = 0x3C;
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            t2 = 0x15;
        }
        t0 = t2;
    }
    return t0;
}


int FUN_0c094e54(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;
    register float u1;
    register float u2;

    if (((((struct o3770_int *)(a4))->v)) == 0) {
        return FUN_0c085d0c(a4, a5, a6, a7);
    }
    t1 = *(signed char *)((a4 + 0x1));
    FUN_0c07e79c(a4, t1, 0x2, 0xD, (t1), 0x2, 0xD);
    t1 = *(int *)(((0x118 + a4) + 0x4));
    t2 = (((struct o118_int *)(a4))->v);
    (((struct oA0_float *)(t1))->v) = 1.0f;
    (((struct o9C_float *)(t1))->v) = 1.0f;
    (((struct oA0_float *)(t2))->v) = 1.0f;
    (((struct o9C_float *)(t2))->v) = 1.0f;
    t1 = *(int *)(((0x118 + a4) + 0x4));
    t2 = (((struct o118_int *)(a4))->v);
    (((struct o98_float *)(t1))->v) = 1.0f;
    (((struct o98_float *)(t2))->v) = 1.0f;
    (((struct o94_float *)(t1))->v) = 1.0f;
    (((struct o94_float *)(t2))->v) = 1.0f;
    FUN_0c07e79c(((((struct o3770_int *)(a4))->v)), 0xFFFFFFFF, 0x5, 0x24, 0xFFFFFFFF, 0x5, 0x24);
    t1 = (((struct o3770_int *)(a4))->v);
    t2 = *(int *)(((t1 + 0x118) + 0x4));
    t3 = (((struct o118_int *)(t1))->v);
    (((struct oA0_float *)(t2))->v) = 1.0f;
    (((struct o9C_float *)(t2))->v) = 1.0f;
    (((struct oA0_float *)(t3))->v) = 1.0f;
    (((struct o9C_float *)(t3))->v) = 1.0f;
    t1 = (((struct o3770_int *)(a4))->v);
    t2 = *(int *)(((t1 + 0x118) + 0x4));
    t3 = (((struct o118_int *)(t1))->v);
    (((struct o98_float *)(t2))->v) = 1.0f;
    (((struct o98_float *)(t3))->v) = 1.0f;
    (((struct o94_float *)(t2))->v) = 1.0f;
    (((struct o94_float *)(t3))->v) = 1.0f;
    (((struct o3728_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x0;
    u1 = *(float *)0xC541098;
    if ((((((struct o168_float *)(a4))->v)) > u1) && (t0 = (((struct o3770_int *)(a4))->v), u0 = (((struct o168_float *)(t0))->v), u0 > u1)) {
        u0 = (((struct o168_float *)(a4))->v);
        u1 = (((struct o168_float *)(((((struct o3770_int *)(a4))->v))))->v);
        u2 = u1;
        if (u1 > u0) {
            u2 = u0;
        }
        (((struct o2C_float *)(a4))->v) = u2;
    }
    (((struct o446_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x1;
    (((struct o447_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x1;
    FUN_0c07d086(a4, 0x0, 100.0f);
    t0 = (((struct o3770_int *)(a4))->v);
    (((struct o3830_ushort *)(t0))->v) = (((((struct o12E_short *)(t0))->v)) ^ 0xF);
    (((struct o374B_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x1;
    *(unsigned short *)((a4 + 0x1C)) = 0x0;
    *(unsigned short *)((a4 + 0x1E)) = 0xE;
    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    return 0x15;
}

int FUN_0c0a68b2(int a4)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 == 1) {
            return FUN_0c037bf6(a4);
        }
        return t0;
    }
    if ((*(signed char *)((a4 + 0x371C))) != 0) {
        t0 = *(signed char *)((a4 + 0x17));
        switch (t0) {
        case 0:
            t0 = *(signed char *)((a4 + 0x1));
            FUN_0c07e79c(a4, t0, 0x6, 0xA, (t0), 0x6, 0xA);
            break;
        case 1:
            t0 = *(signed char *)((a4 + 0x1));
            FUN_0c07e79c(a4, t0, 0x6, 0xA, (t0), 0x6, 0xA);
            break;
        case 2:
            t0 = *(signed char *)((a4 + 0x1));
            FUN_0c07e79c(a4, t0, 0x6, 0x8, (t0), 0x6, 0x8);
            break;
        case 3:
            t0 = *(signed char *)((a4 + 0x1));
            FUN_0c07e79c(a4, t0, 0x6, 0x8, (t0), 0x6, 0x8);
            break;
        }
    } else {
        t0 = *(signed char *)((a4 + 0x17));
        switch (t0) {
        case 0:
            t0 = *(signed char *)((a4 + 0x1));
            FUN_0c07e79c(a4, t0, 0x6, 0xE, (t0), 0x6, 0xE);
            break;
        case 1:
            t0 = *(signed char *)((a4 + 0x1));
            FUN_0c07e79c(a4, t0, 0x6, 0xF, (t0), 0x6, 0xF);
            break;
        case 2:
            t0 = *(signed char *)((a4 + 0x1));
            FUN_0c07e79c(a4, t0, 0x6, 0x4, (t0), 0x6, 0x4);
            break;
        case 3:
            t0 = *(signed char *)((a4 + 0x1));
            FUN_0c07e79c(a4, t0, 0x6, 0x11, (t0), 0x6, 0x11);
            break;
        }
    }
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
    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    return FUN_0c037bf6(a4);
}

int FUN_0c0c2ab6(int a4, int a5)
{
    register int t0;
    int t1;

    if ((*(signed char *)((a4 + 0x0))) != 9) {
        FUN_0c064d5a(a4, (((((signed char)a5 << 1) + (signed char)a5) << 2) + 0xC27894C));
        (((struct o12A_ushort *)(a4))->v) = (((((struct o12A_short *)(a4))->v)) & (~((int)0x1 << (int)(*(signed char *)((a4 + 0x1))))));
    } else {
        t0 = *(signed char *)((a4 + 0x41C));
        if ((unsigned char)t0 != 0xC3) {
            t1 = a5;
            if ((unsigned char)t0 != 0xC8) {
            } else {
                if ((signed char)a5 == 0) {
                    t0 = (*(signed char *)((((((*(signed char *)((a4 + 0x424))) << 2) << 1) + 0xC278904) + 0x2)));
                } else {
                    t0 = (*(signed char *)((((((*(signed char *)((a4 + 0x424))) << 2) << 1) + 0xC278904) + 0x3)));
                }
                t1 = t0;
            }
            t0 = t1;
        } else {
            if ((signed char)a5 == 0) {
                t1 = *(signed char *)((a4 + 0x424));
                t0 = (*(signed char *)((((((t1 << 2) + t1) << 1) + 0xC27883C) + 0x2)));
            } else {
                t1 = *(signed char *)((a4 + 0x41F));
                if ((t1 != 2) && (t1 != 3)) {
                    t1 = *(signed char *)((a4 + 0x424));
                    t0 = (*(signed char *)((((((t1 << 2) + t1) << 1) + 0xC27883C) + 0x3)));
                } else {
                    t1 = *(signed char *)((a4 + 0x424));
                    t0 = (*(signed char *)((((((t1 << 2) + t1) << 1) + 0xC27883C) + 0x4)));
                }
            }
        }
        FUN_0c064d5a(a4, (((((signed char)t0 << 1) + (signed char)t0) << 2) + 0xC27894C));
        (((struct o12A_ushort *)(a4))->v) = (((((struct o12A_short *)(a4))->v)) & (~((int)0x1 << (int)(*(signed char *)((a4 + 0x1))))));
        t0 = *(signed char *)((a4 + 0x41D));
        if ((t0 == 4) || ((t0 == 5) || ((t0 == 7) || (t0 == 8)))) {
            (((struct o12E_ushort *)(a4))->v) = (((((struct o12E_short *)(a4))->v)) & (~((int)0x1 << (int)(*(signed char *)((a4 + 0x1))))));
        }
    }
    (((struct o132_uchar *)(a4))->v) = 0x0;
    (((struct o131_uchar *)(a4))->v) = 0x0;
    return 0x0;
}

int FUN_0c124da6(int a4, int a5, int a6, int a7, float f4, float f5)
{
    int stk[1];
    register int t0;
    register int t40;
    register int t1;
    register int t28;
    int t18;
    register int t21;
    register int t25;
    register int t26;

    *(unsigned char *)(((int)stk + 0)) = a5;
    t0 = *(signed char *)(((int)stk + 0));
    t40 = t0;
    if (t0 == 0) {
        t1 = FUN_0c03f444(0x5, 0x0, 0x3);
        t28 = t1;
        if (t1 != 0) {
            *(unsigned char *)((t1 + 0x1)) = (*(signed char *)((a4 + 0x1)));
            (((struct oA8_uchar *)(t1))->v) = 0x1;
            (((struct oAC_ushort *)(t1))->v) = 0xF;
            (((struct oA9_uchar *)(t1))->v) = 0x21;
            *(unsigned int *)((t1 + 0x4)) = 0xC124C04;
            *(unsigned int *)((t1 + 0x10)) = a4;
            (((struct o14_uchar *)(t1))->v) = (*(signed char *)(((int)stk + 0)));
            FUN_0c03744a(((((struct oC4_int *)(t1))->v)), 0x0, 0x9, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
            FUN_0c03744a(((((struct oC8_int *)(t1))->v)), 0x1, 0x9, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
            FUN_0c03744a(((((struct oCC_int *)(t1))->v)), 0x2, 0x9, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
            FUN_0c187798();
            FUN_0c187798();
            (((struct o48_float *)(t1))->v) = 1.0f;
            (((struct o44_float *)(t1))->v) = 1.0f;
            (((struct o40_float *)(t1))->v) = 1.0f;
            *(unsigned short *)((t1 + 0x1C)) = 0x0;
            t18 = 0x0;
            for (;;) {
                *(unsigned char *)(((*(int *)((((0xC4 + t1) + (t18 << 2)) + 0x0))) + 0x0)) = 0x1;
                *(unsigned short *)(((*(int *)((((t18 << 2) + (0xC4 + t1)) + 0x0))) + 0x6)) = 0x1F;
                if ((t18 != 0) && (t18 != 1)) {
                    t26 = t18;
                    if (t18 != 2) {
                    } else {
                        t21 = *(int *)((((t18 << 2) + (0xC4 + t1)) + 0x0));
                        (((struct o8C_float *)(t21))->v) = 0.800000012f;
                        (((struct o88_float *)(t21))->v) = 0.800000012f;
                        (((struct o84_float *)(t21))->v) = 0.800000012f;
                        t26 = 0x84;
                    }
                } else {
                    t25 = *(int *)((((t18 << 2) + (0xC4 + t1)) + 0x0));
                    (((struct o8C_float *)(t25))->v) = 1.0f;
                    (((struct o88_float *)(t25))->v) = 1.0f;
                    (((struct o84_float *)(t25))->v) = 1.0f;
                    t26 = 0x84;
                }
                t18 = (t18 + 0x1);
                if ((int)t18 >= (int)0x3) {
                    break;
                }
            }
            t28 = t26;
        }
        t40 = t28;
    }
    return t40;
}

int FUN_0c15da24(int a4, int a5, int a6, int a7, float f4)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o15_uchar *)(a4))->v) = 0x0;
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) + 0x384);
    }
    (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) - 1);
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                t1 = t0;
                if (t0 != 3) {
                } else {
                    t0 = 0x20;
                    if ((int)((((struct o20_short *)(a4))->v)) <= 0) {
                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                        t0 = 0x14;
                    }
                    t1 = t0;
                }
                t0 = t1;
            } else {
                *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
                *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
                u0 = (((float)(*(short *)((a4 + 0x1C))) / 60.0f) * (math_sin_angle16(((*(short *)((a4 + 0x1E))) << 13))));
                (((struct o40_float *)(a4))->v) = ((((u0 * 0.200000003f)) + 1.0f) / 320.0f);
                t1 = *(short *)((a4 + 0x1C));
                t2 = t1;
                if ((int)t1 <= 0) {
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    t2 = 0x15;
                }
                t0 = t2;
            }
            t1 = t0;
        } else {
            *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
            u0 = math_sin_angle16((int)(((float)(*(short *)((a4 + 0x1C))) / 20.0f) * 16384.0f));
            (((struct o40_float *)(a4))->v) = ((1.0f - ((u0 * 1.0f))) / 320.0f);
            t0 = *(short *)((a4 + 0x1C));
            t2 = t0;
            if ((int)t0 <= 0) {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                *(unsigned short *)((a4 + 0x1C)) = 0x3C;
                *(unsigned short *)((a4 + 0x1E)) = 0x0;
                t2 = 0x0;
            }
            t1 = t2;
        }
        t0 = t1;
    } else {
        t1 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
        t2 = (short)(t1 - 1);
        if ((int)(short)(t1 - 1) <= 0) {
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            *(unsigned short *)((a4 + 0x1C)) = 0x14;
            (((struct o44_float *)(a4))->v) = 0.00312500005f;
            t2 = 0x44;
        }
        t0 = t2;
    }
    return t0;
}

int FUN_0c074054(int a4, int a5)
{
    register int t0;
    register int t1;

    if ((unsigned char)(a5 & 0xF0) != 32) {
        if ((unsigned char)(a5 & 0xF0) != 64) {
            if (((unsigned char)(a5 & 0xF0) != 96) && ((unsigned char)(a5 & 0xF0) != 16)) {
                if ((unsigned char)(a5 & 0xF0) != 0x80) {
                    if ((unsigned char)(a5 & 0xF0) != 0xA0) {
                        if ((unsigned char)(a5 & 0xF0) != 0xC0) {
                            if ((unsigned char)(a5 & 0xF0) != 0xE0) {
                                if ((unsigned char)(a5 & 0xF0) == 48) {
                                    return FUN_0c07dbd8(a4, 0x41);
                                }
                                return (unsigned char)(a5 & 0xF0);
                            }
                            return FUN_0c07dbd8(a4, 0x3E);
                        }
                        (((struct o3743_uchar *)(a4))->v) = (a5 & 0xF0);
                        (((struct o382A_ushort *)(a4))->v) = 0x12C;
                        return 0x382A;
                    }
                    if ((*(signed char *)((a4 + 0x3716))) == 32) {
                        t0 = *(signed char *)((a4 + 0x373A));
                        t1 = t0;
                        if (t0 != 35) {
                            t0 = *(signed char *)((a4 + 0x373A));
                            t1 = t0;
                            if (t0 != 36) {
                                t0 = *(signed char *)((a4 + 0x373A));
                                t1 = t0;
                                if (t0 != 37) {
                                    t0 = *(signed char *)((a4 + 0x373A));
                                    t1 = t0;
                                    if (t0 != 38) {
                                        if ((unsigned char)(*(signed char *)((a4 + 0x3743))) != (unsigned char)(a5 & 0xF0)) {
                                            FUN_0c059df2((*(signed char *)((a4 + 0x1))), 0x2B);
                                        }
                                        (((struct o3743_uchar *)(a4))->v) = (a5 & 0xF0);
                                        (((struct o382A_ushort *)(a4))->v) = 0x12C;
                                        t1 = 0x382A;
                                    }
                                }
                            }
                        }
                        t0 = t1;
                    } else {
                        if ((unsigned char)(*(signed char *)((a4 + 0x3743))) != (unsigned char)(a5 & 0xF0)) {
                            FUN_0c059df2((*(signed char *)((a4 + 0x1))), 0x2B);
                        }
                        (((struct o3743_uchar *)(a4))->v) = (a5 & 0xF0);
                        (((struct o382A_ushort *)(a4))->v) = 0x12C;
                        t0 = 0x382A;
                    }
                    return t0;
                }
                if ((unsigned char)(*(signed char *)((a4 + 0x3743))) != (unsigned char)(a5 & 0xF0)) {
                    FUN_0c059df2((*(signed char *)((a4 + 0x1))), 0x2D);
                }
                (((struct o3743_uchar *)(a4))->v) = (a5 & 0xF0);
                (((struct o382A_ushort *)(a4))->v) = 0xB4;
                *(unsigned short *)((a4 + 0x1E)) = 0x0;
                return FUN_0c15d92e(a4);
            }
            if ((unsigned char)(*(signed char *)((a4 + 0x3743))) != (unsigned char)(a5 & 0xF0)) {
                FUN_0c152f08(a4);
                FUN_0c059df2((*(signed char *)((a4 + 0x1))), 0x21);
            }
            (((struct o3743_uchar *)(a4))->v) = (a5 & 0xF0);
            (((struct o382A_ushort *)(a4))->v) = 0x82;
            return 0x382A;
        }
        if ((unsigned char)(*(signed char *)((a4 + 0x3743))) != (unsigned char)(a5 & 0xF0)) {
            FUN_0c151310(a4);
        }
        (((struct o3743_uchar *)(a4))->v) = (a5 & 0xF0);
        (((struct o382A_ushort *)(a4))->v) = 0x5A;
        return (FUN_0c059df2((*(signed char *)((a4 + 0x1))), 0x22));
    }
    *(volatile signed char *)((a4 + 0x3743));
    (((struct o3743_uchar *)(a4))->v) = (a5 & 0xF0);
    (((struct o382A_ushort *)(a4))->v) = 0xB4;
    return 0x382A;
}

int FUN_0c01a3a4(int a4)
{
    int t0;
    int t1;
    register int t2;
    register int t3;
    register int t4;

    t2 = *(signed char *)((a4 + 0x14));
    t3 = *(signed char *)0xC309E06;
    if (t2 != 0) {
        if (t2 != 1) {
            if (t2 != 4) {
                return ((int (*)(int, int, int, int))(thunk_FUN_0c03f346))(a4, 0xC5426EC, 0xC309E06, 0xC5426C4);
            }
            if ((*(signed char *)0xC309E06) == 2) {
                if ((*(int *)0xC5426EC) != 0) {
                    (((struct oA8_uchar *)(a4))->v) = 0x1;
                } else {
                    (((struct oA8_uchar *)(a4))->v) = 0x0;
                }
            }
            *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
            (((struct o40_float *)(a4))->v) = ((-(math_cos_angle16(((((*(short *)((a4 + 0x1C))) << 8) << 2) << 1)))) + 1.0f);
            t2 = *(short *)((a4 + 0x1C));
            if (t2 == 0) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                return ((int (*)(int))(thunk_FUN_0c03f346))(a4);
            }
            return t2;
        }
        if (t3 == 2) {
            if ((*(int *)0xC5426EC) != 0) {
                (((struct oA8_uchar *)(a4))->v) = 0x0;
            } else {
                (((struct oA8_uchar *)(a4))->v) = 0x1;
            }
        }
        if ((*(signed char *)((a4 + 0x17))) == 0) {
            t2 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t2 - 1);
            if ((short)(t2 - 1) == 0) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x10);
                (((struct o48_float *)(a4))->v) = 1.0f;
                (((struct o44_float *)(a4))->v) = 1.0f;
                (((struct o40_float *)(a4))->v) = 1.0f;
                *(unsigned short *)((a4 + 0x1C)) = 0x8;
                if ((*(signed char *)0xC309E06) == 2) {
                    if ((*(int *)0xC5426EC) != 0) {
                        (((struct oA8_uchar *)(a4))->v) = 0x1;
                    } else {
                        (((struct oA8_uchar *)(a4))->v) = 0x0;
                    }
                }
                *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
                (((struct o40_float *)(a4))->v) = ((-(math_cos_angle16(((((*(short *)((a4 + 0x1C))) << 8) << 2) << 1)))) + 1.0f);
                t4 = *(short *)((a4 + 0x1C));
                if (t4 == 0) {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    return ((int (*)(int))(thunk_FUN_0c03f346))(a4);
                }
                return t4;
            }
            return (short)(t2 - 1);
        }
        return 0x17;
    }
    if (t3 == 2) {
        if ((*(int *)0xC5426EC) != 0) {
            (((struct oA8_uchar *)(a4))->v) = 0x0;
        } else {
            (((struct oA8_uchar *)(a4))->v) = 0x1;
        }
    }
    t2 = FUN_0c01cd2c(0x101);
    if (((short)t2 != 0) && (t0 = *(signed char *)0xC30B707, t0 != 0)) {
        if (((*(signed char *)0xC30B701) == 0) && (t1 = *(signed char *)0xC309E06, t1 != 3)) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            (((struct o17_uchar *)(a4))->v) = 0x1;
            t0 = 0x17;
        } else {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            (((struct o17_uchar *)(a4))->v) = 0x0;
            *(unsigned short *)((a4 + 0x1C)) = 0x10;
            t0 = 0x10;
        }
        t1 = t0;
    } else {
        t0 = (short)t2;
        if ((*(signed char *)0xC30B706) != 0) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            (((struct o17_uchar *)(a4))->v) = 0x0;
            *(unsigned short *)((a4 + 0x1C)) = 0x10;
            t0 = 0x10;
        }
        t1 = t0;
    }
    return t1;
}

int FUN_0c0d24d0(int a4, int a5, int a6, float f4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        t1 = t0;
        if (t0 != 1) {
        } else {
            t0 = (((struct oC8_int *)(a4))->v);
            t2 = *(signed char *)((a4 + 0x17));
            (((struct o80_uint *)(t0))->v) = (((((struct o80_int *)(t0))->v)) + (int)((float)((*(int *)((((((t2 << 1) + t2) << 2) + 0xC1C7AF0) + 0x4))) - ((((struct o80_int *)(t0))->v))) * ((((struct o8_float *)(((((t2 << 1) + t2) << 2) + 0xC1C7AF0)))->v))));
            (((struct o80_uint *)(((((struct oD0_int *)(a4))->v))))->v) = (-((((struct o80_int *)(t0))->v)));
            t0 = (((struct oCC_int *)(a4))->v);
            t2 = *(signed char *)((a4 + 0x18));
            (((struct o80_uint *)(t0))->v) = (((((struct o80_int *)(t0))->v)) + (int)((float)((*(int *)((((((t2 << 1) + t2) << 2) + 0xC1C7B14) + 0x4))) - ((((struct o80_int *)(t0))->v))) * ((((struct o8_float *)(((((t2 << 1) + t2) << 2) + 0xC1C7B14)))->v))));
            (((struct o80_uint *)(((((struct oD4_int *)(a4))->v))))->v) = (-((((struct o80_int *)(t0))->v)));
            t1 = 0x80;
        }
        t0 = t1;
    } else {
        t1 = (((struct oC8_int *)(a4))->v);
        t2 = *(signed char *)((a4 + 0x17));
        (((struct o80_uint *)(t1))->v) = (((((struct o80_int *)(t1))->v)) + (int)((float)((*(int *)((((((t2 << 1) + t2) << 2) + 0xC1C7AF0) + 0x4))) - ((((struct o80_int *)(t1))->v))) * ((((struct o8_float *)(((((t2 << 1) + t2) << 2) + 0xC1C7AF0)))->v))));
        (((struct o80_uint *)(((((struct oD0_int *)(a4))->v))))->v) = (-((((struct o80_int *)(t1))->v)));
        *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
        if ((int)(*(short *)((a4 + 0x1E))) > (int)(*(int *)((((((t2 << 1) + t2) << 2) + 0xC1C7AF0) + 0x0)))) {
            *(unsigned short *)((a4 + 0x1E)) = 0x0;
            (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
            if ((int)(*(signed char *)((a4 + 0x17))) >= (int)0x2) {
                (((struct o17_uchar *)(a4))->v) = 0x0;
            }
        }
        t1 = (((struct oCC_int *)(a4))->v);
        t2 = *(signed char *)((a4 + 0x18));
        (((struct o80_uint *)(t1))->v) = (((((struct o80_int *)(t1))->v)) + (int)((float)((*(int *)(((0xC1C7B14 + (((t2 << 1) + t2) << 2)) + 0x4))) - ((((struct o80_int *)(t1))->v))) * ((((struct o8_float *)((0xC1C7B14 + (((t2 << 1) + t2) << 2))))->v))));
        (((struct o80_uint *)(((((struct oD4_int *)(a4))->v))))->v) = (-((((struct o80_int *)(t1))->v)));
        (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) + 0x1);
        t1 = 0x20;
        if ((int)((((struct o20_short *)(a4))->v)) > (int)(*(int *)(((0xC1C7B14 + (((t2 << 1) + t2) << 2)) + 0x0)))) {
            (((struct o20_ushort *)(a4))->v) = 0x0;
            (((struct o18_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x18))) + 0x1);
            if ((int)(*(signed char *)((a4 + 0x18))) >= (int)0x3) {
                (((struct o18_uchar *)(a4))->v) = 0x0;
            }
            t1 = 0x18;
        }
        t0 = t1;
    }
    return t0;
}
