/* Straight-line functions with calls and guards (batch gen_n): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_float { char p[0x10]; float v; };
struct o10_uchar { char p[0x10]; unsigned char v; };
struct o118_int { char p[0x118]; int v; };
struct o11C_int { char p[0x11C]; int v; };
struct o12C_ushort { char p[0x12C]; unsigned short v; };
struct o12E_short { char p[0x12E]; short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o130_uchar { char p[0x130]; unsigned char v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o168_float { char p[0x168]; float v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o17C_float { char p[0x17C]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o187_uchar { char p[0x187]; unsigned char v; };
struct o1B_uchar { char p[0x1B]; unsigned char v; };
struct o1C_float { char p[0x1C]; float v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o20_short { char p[0x20]; short v; };
struct o20_uchar { char p[0x20]; unsigned char v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o21_uchar { char p[0x21]; unsigned char v; };
struct o22_short { char p[0x22]; short v; };
struct o22_uchar { char p[0x22]; unsigned char v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o23_uchar { char p[0x23]; unsigned char v; };
struct o24_uchar { char p[0x24]; unsigned char v; };
struct o25_uchar { char p[0x25]; unsigned char v; };
struct o26_uchar { char p[0x26]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o30_float { char p[0x30]; float v; };
struct o3715_uchar { char p[0x3715]; unsigned char v; };
struct o371D_uchar { char p[0x371D]; unsigned char v; };
struct o3722_uchar { char p[0x3722]; unsigned char v; };
struct o372F_uchar { char p[0x372F]; unsigned char v; };
struct o376C_uint { char p[0x376C]; unsigned int v; };
struct o37A4_float { char p[0x37A4]; float v; };
struct o37B0_float { char p[0x37B0]; float v; };
struct o37B4_float { char p[0x37B4]; float v; };
struct o37C0_float { char p[0x37C0]; float v; };
struct o38_int { char p[0x38]; int v; };
struct o38_uint { char p[0x38]; unsigned int v; };
struct o3842_short { char p[0x3842]; short v; };
struct o3850_int { char p[0x3850]; int v; };
struct o3850_uint { char p[0x3850]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o48_int { char p[0x48]; int v; };
struct o4C_float { char p[0x4C]; float v; };
struct o5_uchar { char p[0x5]; unsigned char v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o6_uchar { char p[0x6]; unsigned char v; };
struct o60_float { char p[0x60]; float v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o6C_float { char p[0x6C]; float v; };
struct o7_uchar { char p[0x7]; unsigned char v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o8_uchar { char p[0x8]; unsigned char v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o8C_float { char p[0x8C]; float v; };
struct o8C_int { char p[0x8C]; int v; };
struct o9_uchar { char p[0x9]; unsigned char v; };
struct o94_float { char p[0x94]; float v; };
struct o964_uint { char p[0x964]; unsigned int v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA_uchar { char p[0xA]; unsigned char v; };
struct oA0_float { char p[0xA0]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB_uchar { char p[0xB]; unsigned char v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC0_uint { char p[0xC0]; unsigned int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oE_uchar { char p[0xE]; unsigned char v; };
struct oF_uchar { char p[0xF]; unsigned char v; };
struct oF4_int { char p[0xF4]; int v; };
int FUN_0c012c34(int);
int FUN_0c01cb7c(void);
int FUN_0c01cc56(int, int);
int FUN_0c035e46(int, int);
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c037498(int, int, int, int);
int FUN_0c037bf6(int);
int FUN_0c038362(int);
int FUN_0c03f346(int);
int FUN_0c03f444(int, int, int);
int FUN_0c03f6be(int);
int FUN_0c03fef2(int, int, int, int);
int FUN_0c04307c(void);
int FUN_0c05879c(int, int, int, float);
int FUN_0c059e60(int, int);
int FUN_0c059e9a(int, int, int);
int FUN_0c05a292(int, int, int, int, int);
int FUN_0c05b052(void);
int FUN_0c05e566(int, int, int, int);
int FUN_0c05e59a(int, int);
int FUN_0c060454(int, int);
int FUN_0c06475c(int, int, float);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
float FUN_0c064d9c(int);
int FUN_0c064ee4(int, int);
int FUN_0c064f80(int);
int FUN_0c07043c(int, float, float, float, float);
int FUN_0c07ce58(int, int);
int FUN_0c07d030(int, int);
int FUN_0c07d774(int);
int FUN_0c07e3ae(int, int);
int FUN_0c07e420(int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07eaf4(int);
int FUN_0c07ec9a(int);
int FUN_0c080364(int, int);
int FUN_0c081dfc(int);
int FUN_0c085d0c(int);
int FUN_0c0b1cf2(void);
int FUN_0c0b21ac(int, int);
int FUN_0c0b2888(int, int, int, int);
int FUN_0c0bc25e(void);
int FUN_0c0c2ab6(int, int);
int FUN_0c0f3d1c(int);
int FUN_0c0f3db8(int, int, int);
int FUN_0c0f3dc8(int, int);
int FUN_0c0f3e66(int, float);
int FUN_0c104cc8(int);
int FUN_0c10de48(int);
int FUN_0c117944(int, ...);
int FUN_0c117d54(void);
int FUN_0c117e76(void);
int FUN_0c11e28e(int);
int FUN_0c12ae74(int, int);
int FUN_0c12b51c(int, int);
int FUN_0c144924(int, int);
int FUN_0c144984(int, int, int);
int FUN_0c148494(int, int, int);
int FUN_0c14f0c2(int, int);
int FUN_0c14f8aa(int, int, int);
int FUN_0c150160(int, int, float, float, float, float);
int FUN_0c1502e8(int, int, int, int, int, int);
int FUN_0c158dc8(int, int, int, int, int, int, int, int);
int FUN_0c15a260(int, int, int, int, int, int, int, int);
int FUN_0c15f9b4(int, int, int, int);
int FUN_0c15fa0c(int, int, int, int, float);
int FUN_0c16bd38(int, int, int, int);
int FUN_0c16f890(int, int, int, int, int);
int FUN_0c16fad0(int);
int FUN_0c176b90(int);
int FUN_0c179ac0(void);
int FUN_0c17a4c0(int, int);
int FUN_0c17a550(int);
int FUN_0c17df90(int, int);
int FUN_0c18778c(int, int);
int FUN_0c187798(void);
int FUN_0c187a88(int, int, int);
int dbg_printf(int, ...);
int math_mat_get_translate(int, int);
float math_signed_sqrt(float);
int math_vec3_accumulate(int, int);
int math_vec3_mul_xyz(int, float, float, float);
int pl_ryoma_cue_table_next(int, int, int, int);
int thunk_FUN_0c058310(int, int);
int FUN_0c035d74(int a4, int a5, int a6);
int FUN_0c090f6c(int a4);
int FUN_0c0a3a58(int a4);
int FUN_0c0f5264(int a4);
int FUN_0c0f41ac(int a4);
int FUN_0c13f734(int a4, int a5);
int FUN_0c16c016(int a4);
int FUN_0c02d944(void);
int FUN_0c04f420(void);
int FUN_0c05e604(int a4, int a5, int a6);
int FUN_0c082874(int a4);
int FUN_0c097aa4(int a4);
int FUN_0c097c60(int a4);
int FUN_0c0de650(int a4, int a5);
int FUN_0c10e716(int a4);
int FUN_0c126358(int a4, int a5);
int FUN_0c1267e0(int a4, int a5);
int FUN_0c12d748(int a4);
int FUN_0c145224(int a4);
void FUN_0c14f238(int a4, int a5, int a6, int a7);
int FUN_0c15009e(int a4, int a5, int a6, float f4, float f5, float f6, float f7, float f8);
int FUN_0c16fafc(void);
int FUN_0c036cac(void);
int FUN_0c03f6de(int a4, int a5);
int FUN_0c060daa(int a4, int a5);
int FUN_0c07ecc6(int a4, int a5, int a6);
int FUN_0c08fa98(int a4);
int FUN_0c0af5c8(int a4);
int FUN_0c0ba7e4(int a4);
int FUN_0c148690(int a4);
int FUN_0c168fa8(int a4, int a5, int a6, int a7);
int FUN_0c01c2e0(int a4);
int FUN_0c02c184(int a4);
int FUN_0c040838(int a4, int a5, int a6, int a7);
int FUN_0c06514e(int a4, int a5, int a6);
int FUN_0c07c858(int a4);
int FUN_0c07c9c0(int a4);
int FUN_0c09ef24(int a4);
int FUN_0c0bbb16(int a4);
int FUN_0c0c0e88(void);

int FUN_0c035d74(int a4, int a5, int a6)
{
    int stk[3];
    register int t0;
    register int t4;
    register int t6;
    register int t12;
    register int t14;
    register int t5;
    register int t13;
    register int t15;
    register int t16;
    register int t17;

    *(unsigned int *)(((int)stk + 8)) = a5;
    *(unsigned int *)(((int)stk + 4)) = a6;
    t0 = *(int *)((a4 + 0x8));
    *(unsigned int *)(((int)stk + 0)) = 0x0;
    FUN_0c187a88(0xC3BD660, t0, (((*(int *)((a4 + 0x4))) << 2) << 2));
    t4 = 0x0;
    t6 = t5;
    for (;;) {
        if ((int)t4 >= (int)(*(int *)((a4 + 0x4)))) {
            break;
        }
        t6 = t4;
        t6 = (t6 << 2);
        t6 = (t6 << 2);
        t6 = (t6 + 0xC3BD660);
        t4 = (t4 + 0x1);
        *(unsigned int *)((t6 + 0x8)) = (((*(int *)((t6 + 0x8))) & 0x3FFFFF) + ((*(int *)(((int)stk + 4)))));
    }
    t12 = (FUN_0c176b90((*(int *)(((int)stk + 8)))));
    t14 = 0x0;
    for (;;) {
        if ((int)t14 >= (int)(*(int *)((a4 + 0xC)))) {
            break;
        }
        t16 = t14;
        t16 = (t16 << 2);
        t16 = (t16 << 2);
        t16 = (t16 << 1);
        t16 = (t16 + (a4 + 0x10));
        t17 = 0x0;
        for (;;) {
            if ((int)t17 >= (int)(*(int *)((t16 + 0x18)))) {
                break;
            }
            t15 = 0x3C;
            t15 = (t17 * t15);
            t13 = (*(int *)((((*(int *)((t16 + 0x1C))) + t15) + 0x0)));
            if (t13 != 0) {
                t12 = (FUN_0c17df90((*(int *)((((*(int *)((t16 + 0x1C))) + t15) + 0x0))), 0xC3BD660));
                t13 = (*(int *)(((int)stk + 0)));
                t13 = (t13 + t12);
                *(unsigned int *)(((int)stk + 0)) = t13;
            }
            t17 = (t17 + 0x1);
        }
        t14 = (t14 + 0x1);
    }
    return (*(int *)(((int)stk + 0)));
}

int FUN_0c090f6c(int a4)
{
    int stk[5];
    register int t2;
    register int t10;
    register int t20;

    (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) + 0x1);
    t2 = (((struct o22_short *)(a4))->v);
    pl_ryoma_cue_table_next(a4, (((t2 << 1) + t2) + 0xC1C6130), ((((struct o20_short *)(a4))->v)), (a4 + 0x22));
    if (((((struct o20_short *)(a4))->v)) == 37) {
        if ((*(signed char *)((a4 + 0x371A))) == 0) {
            *(int *)((int)stk + 12) = 0xC1C5FD4;
            *(int *)((int)stk + 8) = 0xC1C5FC8;
            *(int *)((int)stk + 4) = 0x42;
            *(int *)((int)stk + 0) = 0x1C;
            FUN_0c158dc8((*(signed char *)((a4 + 0x1))), 0x1, 0xC, 0x1, 0x1C, 0x42, 0xC1C5FC8, 0xC1C5FD4);
        } else {
            *(int *)((int)stk + 12) = 0xC1C5FEC;
            *(int *)((int)stk + 8) = 0xC1C5FE0;
            *(int *)((int)stk + 4) = 0x42;
            *(int *)((int)stk + 0) = 0x1C;
            t10 = *(signed char *)((a4 + 0x1));
            (((struct o10_uchar *)(((int)stk + 0)))->v) = t10;
            FUN_0c15a260((*(signed char *)(((int)stk + 16))), 0x1, 0xB, (*(int *)((((((struct o8C_int *)((*(int *)((((signed char)t10 << 2) + 0xC4B40FC)))))->v)) + 0x0))), 0x1C, 0x42, 0xC1C5FE0, 0xC1C5FEC);
        }
    }
    t20 = FUN_0c037bf6(a4);
    if ((unsigned char)t20 != 0) {
        return FUN_0c085d0c(a4);
    }
    return (unsigned char)t20;
}

int FUN_0c0a3a58(int a4)
{
    int t0;
    register int t1;
    register int t2;
    float u0;
    register float u1;
    register float u2;
    register float u3;

    u2 = (((struct o0_float *)0xC0A3B64)->v);
    u3 = (((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v);
    if (!(u2 > u3) && (u0 = (((struct o4_float *)0xC0A3B64)->v), !(u3 > u0))) {
        t1 = (a4 + 0x28);
        t2 = (a4 + 0x4C);
        if (!(((((struct oC_float *)0xC0A3B64)->v)) > ((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v)))) {
            math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
            t1 = (a4 + 0x4C);
            t2 = (a4 + 0x58);
        }
        math_vec3_accumulate(t1, t2);
    }
    u0 = (((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v);
    if (!(u2 > u0) && ((u1 = (((struct o10_float *)0xC0A3B64)->v), !(u0 > u1)) && (t0 = *(int *)0xC542260, (t0 & 3) == 0))) {
        FUN_0c14f8aa((*(signed char *)((a4 + 0x1))), (a4 + 0x28), 0x2);
    }
    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        return FUN_0c085d0c(a4);
    }
    return FUN_0c038362(a4);
}

int FUN_0c0f5264(int a4)
{
    int stk[9];
    register float u2;
    register float u3;
    register int t4;
    register int t15;

    math_mat_get_translate((((((struct oC4_int *)(a4))->v)) + 0x28), ((int)stk + 0));
    u2 = (((struct o0_float *)0xC0F5344)->v);
    u3 = (((struct o4_float *)0xC0F5344)->v);
    t4 = 0x0;
    for (;;) {
        FUN_0c187798();
        *(float *)(((int)stk + 24)) = ((*(float *)(((int)stk + 24))) + ((float)t4 + ((((struct oC_float *)0xC0F5344)->v))));
        *(float *)(((int)stk + 28)) = ((*(float *)(((int)stk + 28))) + ((((struct o10_float *)0xC0F5344)->v)));
        *(float *)(((int)stk + 32)) = ((*(float *)(((int)stk + 32))) - u2);
        *(float *)(((int)stk + 12)) = 0.0f;
        *(float *)(((int)stk + 16)) = 1.0f;
        *(float *)(((int)stk + 20)) = ((((struct o54_float *)(a4))->v));
        t15 = FUN_0c150160((((int)stk + 0) + 0x18), (((int)stk + 0) + 0xC), ((((struct o1C_float *)0xC0F5344)->v)), ((((struct o18_float *)0xC0F5344)->v)), ((((struct o14_float *)0xC0F5344)->v)), u3);
        t4 = (t4 + 0x6F);
        if ((int)t4 >= (int)0x456) {
            break;
        }
    }
    return t15;
}

int FUN_0c0f41ac(int a4)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x17));
    if (t0 != 0) {
        if (t0 != 1) {
        } else {
            t0 = *(signed char *)(((0x41C + a4) + 0x3));
            FUN_0c05879c(a4, (((short)(*(signed char *)(((0x41C + a4) + 0x2))) * (short)0x3938) + 0xC5324C0), (*(int *)(((((t0 << 2) << 2) + 0xC1C585C) + 0x4))), (*(float *)(((((t0 << 2) << 2) + 0xC1C585C) + 0x0))));
            t0 = FUN_0c0f3e66(a4, ((((struct o8_float *)((0xC1C585C + (((*(signed char *)(((0x41C + a4) + 0x3))) << 2) << 2))))->v)));
            if (t0 == 0) {
                t0 = (((struct o20_short *)(a4))->v);
                (((struct o20_ushort *)(a4))->v) = (t0 - 1);
                if ((int)(short)(t0 - 1) <= 0) {
                    FUN_0c0f3db8(a4, 0x5, 0x0);
                }
            } else {
                FUN_0c0f3db8(a4, 0x5, 0x0);
            }
        }
    } else {
        (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
        (((struct o20_ushort *)(a4))->v) = (*(int *)((((((*(signed char *)(((0x41C + a4) + 0x3))) << 2) << 2) + 0xC1C585C) + 0xC)));
        t0 = FUN_0c179ac0();
        t1 = ((~(((~t0) + 0x1) & 0x1)) + 0x1);
        if ((int)t0 >= 0) {
            t1 = (t0 & 0x1);
        }
        FUN_0c0f3dc8(a4, t1);
        t0 = *(signed char *)(((0x41C + a4) + 0x3));
        FUN_0c05879c(a4, (((short)(*(signed char *)(((0x41C + a4) + 0x2))) * (short)0x3938) + 0xC5324C0), (*(int *)(((((t0 << 2) << 2) + 0xC1C585C) + 0x4))), (*(float *)(((((t0 << 2) << 2) + 0xC1C585C) + 0x0))));
        t0 = FUN_0c0f3e66(a4, ((((struct o8_float *)((0xC1C585C + (((*(signed char *)(((0x41C + a4) + 0x3))) << 2) << 2))))->v)));
        if (t0 == 0) {
            t0 = (((struct o20_short *)(a4))->v);
            (((struct o20_ushort *)(a4))->v) = (t0 - 1);
            if ((int)(short)(t0 - 1) <= 0) {
                FUN_0c0f3db8(a4, 0x5, 0x0);
            }
        } else {
            FUN_0c0f3db8(a4, 0x5, 0x0);
        }
    }
    return FUN_0c0f3d1c(a4);
}

int FUN_0c13f734(int a4, int a5)
{
    int stk[1];
    register int t2;
    register int t3;
    register int t15;

    *(unsigned char *)(((int)stk + 0)) = a5;
    t2 = FUN_0c037320(0x6, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
    t3 = FUN_0c03f444(0x5, 0x0, t2);
    t15 = t3;
    if (t3 != 0) {
        *(unsigned char *)((t3 + 0x1)) = 0xFFFFFFFF;
        *(unsigned char *)((t3 + 0x2)) = (*(signed char *)(((int)stk + 0)));
        *(unsigned int *)((t3 + 0x4)) = 0xC13F7E4;
        *(unsigned int *)((t3 + 0x10)) = a4;
        FUN_0c03733c(t3, 0x6, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
        (((struct oA8_uchar *)(t3))->v) = 0x1;
        (((struct oAC_ushort *)(t3))->v) = 0x20F;
        (((struct oA9_uchar *)(t3))->v) = 0x21;
        thunk_FUN_0c058310(((*(int *)(((((*(int *)((((unsigned char)(*(signed char *)(((int)stk + 0))) << 2) + 0xC2A222C))) << 2) + (0xC53255C + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938))) + 0x0))) + 0x28), (t3 + 0x28));
        (((struct o48_float *)(t3))->v) = 1.0f;
        (((struct o44_float *)(t3))->v) = 1.0f;
        (((struct o40_float *)(t3))->v) = 1.0f;
        FUN_0c187798();
        (((struct o2C_float *)(t3))->v) = ((((struct o2C_float *)(a4))->v));
        t15 = 0x2C;
    }
    return t15;
}

int FUN_0c16c016(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
        } else {
            if ((*(signed char *)((a4 + 0x2))) == 1) {
                t0 = FUN_0c16bd38((*(signed char *)((a4 + 0x1))), (a4 + 0x28), (a4 + 0x34), 0x1);
                if (t0 == 0) {
                } else {
                    FUN_0c03744a(((((struct oC4_int *)(t0))->v)), 0x0, 0x29, (*(int *)0xC4B40CC));
                    *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
                    *(unsigned int *)((t0 + 0x4)) = 0xC16BF02;
                    *(unsigned short *)((t0 + 0x1C)) = 0x3C;
                    FUN_0c187798();
                }
            } else {
                t0 = FUN_0c16bd38((*(signed char *)((a4 + 0x1))), (a4 + 0x28), (a4 + 0x34), 0x0);
                if (t0 != 0) {
                    FUN_0c03744a(((((struct oC4_int *)(t0))->v)), 0x0, 0x29, (*(int *)0xC4B40CC));
                    *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
                    *(unsigned int *)((t0 + 0x4)) = 0xC16BF02;
                    *(unsigned short *)((t0 + 0x1C)) = 0x3C;
                    FUN_0c187798();
                }
            }
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        if ((*(signed char *)((a4 + 0x2))) == 1) {
            t0 = FUN_0c16bd38((*(signed char *)((a4 + 0x1))), (a4 + 0x28), (a4 + 0x34), 0x1);
            if (t0 == 0) {
            } else {
                FUN_0c03744a(((((struct oC4_int *)(t0))->v)), 0x0, 0x29, (*(int *)0xC4B40CC));
                *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
                *(unsigned int *)((t0 + 0x4)) = 0xC16BF02;
                *(unsigned short *)((t0 + 0x1C)) = 0x3C;
                FUN_0c187798();
            }
        } else {
            t0 = FUN_0c16bd38((*(signed char *)((a4 + 0x1))), (a4 + 0x28), (a4 + 0x34), 0x0);
            if (t0 != 0) {
                FUN_0c03744a(((((struct oC4_int *)(t0))->v)), 0x0, 0x29, (*(int *)0xC4B40CC));
                *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
                *(unsigned int *)((t0 + 0x4)) = 0xC16BF02;
                *(unsigned short *)((t0 + 0x1C)) = 0x3C;
                FUN_0c187798();
            }
        }
    }
    return FUN_0c03f346(a4);
}

int FUN_0c02d944(void)
{
    register int t0;

    (((struct o0_uchar *)0xC541F62)->v) = 0x0;
    (((struct o0_uchar *)0xC5429A8)->v) = 0x0;
    (((struct o0_uchar *)0xC541F62)->v) = 0x1;
    (((struct o0_uchar *)0xC5429A8)->v) = 0x1;
    t0 = *(signed char *)0xC541F68;
    (((struct o1_uchar *)0xC5429A8)->v) = t0;
    (((struct o24_uchar *)0xC5429A8)->v) = t0;
    (((struct o3_uchar *)0xC541F62)->v) = 0x1;
    *(unsigned char *)0xC5423BD = 0x0;
    (((struct o7_uchar *)0xC541F62)->v) = 0x0;
    (((struct o8_uchar *)0xC541F62)->v) = 0x0;
    (((struct o4_uchar *)0xC541F62)->v) = 0x1;
    (((struct o2_uchar *)0xC5429A8)->v) = 0x0;
    (((struct o3_uchar *)0xC5429A8)->v) = 0x0;
    (((struct o7_uchar *)0xC5429A8)->v) = 0x0;
    (((struct o5_uchar *)0xC541F62)->v) = 0x1;
    (((struct o4_uchar *)0xC5429A8)->v) = 0x1;
    (((struct oE_uchar *)0xC541F62)->v) = 0x0;
    (((struct o9_uchar *)0xC5429A8)->v) = 0x0;
    (((struct oF_uchar *)0xC541F62)->v) = 0x1;
    (((struct o8_uchar *)0xC5429A8)->v) = 0x1;
    (((struct oB_uchar *)0xC5429A8)->v) = 0x0;
    (((struct o0_uchar *)0xC542B8A)->v) = 0x0;
    (((struct oA_uchar *)0xC5429A8)->v) = 0x0;
    (((struct o1_uchar *)0xC542B8A)->v) = 0x0;
    (((struct o9_uchar *)0xC541F62)->v) = 0x3;
    (((struct o5_uchar *)0xC5429A8)->v) = 0x3;
    (((struct o20_uchar *)0xC5429A8)->v) = 0x3;
    (((struct oA_uchar *)0xC541F62)->v) = 0x2;
    (((struct o6_uchar *)0xC5429A8)->v) = 0x2;
    (((struct o22_uchar *)0xC5429A8)->v) = 0x2;
    (((struct oB_uchar *)0xC541F62)->v) = 0x0;
    (((struct o21_uchar *)0xC5429A8)->v) = 0x0;
    (((struct o23_uchar *)0xC5429A8)->v) = 0x0;
    (((struct o25_uchar *)0xC5429A8)->v) = 0xF;
    (((struct o26_uchar *)0xC5429A8)->v) = 0xF;
    (((struct o0_uchar *)0xC542A08)->v) = 0x0;
    (((struct o1_uchar *)0xC542A08)->v) = 0x2;
    (((struct o2_uchar *)0xC542A08)->v) = 0x0;
    (((struct o3_uchar *)0xC542A08)->v) = 0x2;
    (((struct o4_uchar *)0xC542A08)->v) = 0x1;
    return 0x44;
}

int FUN_0c04f420(void)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    t0 = FUN_0c037320(0x1, (*(int *)0xC4B410C));
    t1 = FUN_0c03f444(0x8, 0x0, t0);
    t0 = t1;
    if (t1 != 0) {
        *(unsigned char *)((t1 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t1 + 0x4)) = 0xC04F358;
        FUN_0c03733c(t1, 0x1, (*(int *)0xC4B410C));
        u0 = (((struct o0_float *)0xC04F550)->v);
        (((struct o28_float *)(t1))->v) = (((((struct o28_float *)(t1))->v)) / u0);
        (((struct o2C_float *)(t1))->v) = (((((struct o2C_float *)(t1))->v)) / u0);
        (((struct o30_float *)(t1))->v) = ((((struct o4_float *)0xC04F550)->v));
        u0 = (((struct o8_float *)0xC04F550)->v);
        (((struct o44_float *)(t1))->v) = u0;
        (((struct o40_float *)(t1))->v) = u0;
        (((struct o48_float *)(t1))->v) = ((((struct oC_float *)0xC04F550)->v));
        (((struct oAC_ushort *)(t1))->v) = 0x21F;
        (((struct oA9_uchar *)(t1))->v) = 0x21;
        t2 = (((struct oC4_int *)(t1))->v);
        FUN_0c03744a(t2, 0x0, 0x1, (*(int *)0xC4B410C));
        *(unsigned char *)((t2 + 0x0)) = 0x1;
        *(unsigned short *)((t2 + 0x6)) = 0x1F;
        (((struct o6C_float *)(t2))->v) = ((((struct o0_float *)0xC241398)->v));
        (((struct o70_float *)(t2))->v) = ((((struct o4_float *)0xC241398)->v));
        (((struct o74_float *)(((((struct oC4_int *)(t1))->v))))->v) = ((((struct o18_float *)0xC04F550)->v));
        t0 = 0x74;
    }
    return t0;
}

int FUN_0c05e604(int a4, int a5, int a6)
{
    register int t0;
    register int t1;

    t0 = *(short *)0xC5426D8;
    if (((unsigned short)t0 & 0x2000) != 0) {
        t1 = *(signed char *)(((0xC541F40 + a5) + 0x0));
        if (t1 == 0) {
            *(unsigned char *)(((0xC541F40 + a5) + 0x0)) = (0xFF + a4);
        } else {
            *(unsigned char *)(((0xC541F40 + a5) + 0x0)) = (t1 - 1);
        }
    } else {
        if (((unsigned short)t0 & 0x1000) != 0) {
            if ((unsigned char)(*(signed char *)(((0xC541F40 + a5) + 0x0))) == (a4 - 1)) {
                *(unsigned char *)(((0xC541F40 + a5) + 0x0)) = 0x0;
            } else {
                *(unsigned char *)(((0xC541F40 + a5) + 0x0)) = ((*(signed char *)(((0xC541F40 + a5) + 0x0))) + 0x1);
            }
        }
    }
    t0 = *(signed char *)((a5 + 0xC541F40));
    FUN_0c05e566(0xC1C4258, ((*(int *)((((((unsigned char)t0 << 2) << 2) + a6) + 0x0))) - 2), (*(int *)((((((unsigned char)t0 << 2) << 2) + a6) + 0x4))), 0xFFFFFFFF);
    return FUN_0c05e59a(a6, a4);
}


int FUN_0c097aa4(int a4)
{
    int t0;

    if ((*(short *)((a4 + 0x1C))) == 20) {
        FUN_0c07d030(a4, 0x2);
        FUN_0c059e60(a4, 0xA);
        FUN_0c059e60(a4, 0x23);
    }
    t0 = *(short *)((a4 + 0x1C));
    if ((t0 != 54) && ((t0 != 60) && ((t0 != 66) && ((t0 != 72) && ((t0 != 78) && ((t0 != 84) && ((t0 != 90) && (t0 != 96)))))))) {
    } else {
        FUN_0c12ae74(a4, ((int)((int)((*(short *)((a4 + 0x1C))) - 54) / (int)0x3)));
        FUN_0c12ae74(a4, (((int)((int)((*(short *)((a4 + 0x1C))) - 54) / (int)0x3)) + 0x1));
    }
    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
    return (t0 + 0x1);
}

int FUN_0c097c60(int a4)
{
    int t0;

    if ((*(short *)((a4 + 0x1C))) == 20) {
        FUN_0c07d030(a4, 0x2);
        FUN_0c059e60(a4, 0xA);
        FUN_0c059e60(a4, 0x23);
    }
    t0 = *(short *)((a4 + 0x1C));
    if ((t0 != 54) && ((t0 != 60) && ((t0 != 66) && ((t0 != 72) && ((t0 != 78) && ((t0 != 84) && ((t0 != 90) && (t0 != 96)))))))) {
    } else {
        FUN_0c12b51c(a4, ((int)((int)((*(short *)((a4 + 0x1C))) - 54) / (int)0x3)));
        FUN_0c12b51c(a4, (((int)((int)((*(short *)((a4 + 0x1C))) - 54) / (int)0x3)) + 0x1));
    }
    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
    return (t0 + 0x1);
}

int FUN_0c0de650(int a4, int a5)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = FUN_0c037320(0x14, (*(int *)0xC4B410C));
    t1 = FUN_0c03f444(0x1, 0x0, t0);
    t0 = t1;
    if (t1 != 0) {
        FUN_0c03733c(t1, 0x14, (*(int *)0xC4B410C));
        *(unsigned int *)((t1 + 0x4)) = 0xC0DE528;
        *(unsigned char *)((t1 + 0x1)) = 0xFFFFFFFF;
        *(unsigned char *)((t1 + 0x3)) = a5;
        (((struct oAC_ushort *)(t1))->v) = 0xF;
        (((struct oA9_uchar *)(t1))->v) = 0x21;
        FUN_0c07e420(t1, 0x5);
        (((struct o48_float *)(t1))->v) = 1.0f;
        (((struct o44_float *)(t1))->v) = 1.0f;
        (((struct o40_float *)(t1))->v) = 1.0f;
        FUN_0c064d24(t1, 0x2, 0xC, 0x0, 0x100, 0xF, 0x0, 0xFFFFFFFF);
        FUN_0c187798();
        u0 = ((((struct o2C_float *)(t1))->v));
        u0 = u0 + 20.0f * ((float)((((a5 << 2) << 2) - a5) + 0x78));
        (((struct o2C_float *)(t1))->v) = u0;
        t0 = 0x2C;
    }
    return t0;
}

int FUN_0c10e716(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
    } else {
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        (((struct o17_uchar *)(a4))->v) = 0x0;
        t0 = 0x3;
        for (;;) {
            FUN_0c11e28e(0xB6);
            t0 = (t0 - 0x1);
            if (t0 == 0) {
                break;
            }
        }
    }
    t0 = *(signed char *)((a4 + 0x17));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            t0 = FUN_0c104cc8(0x3FCF);
            if (t0 != 0) {
                FUN_0c10de48(a4);
                return FUN_0c05b052();
            }
            return t0;
        }
        t0 = FUN_0c117d54();
        if ((int)t0 < 0) {
            (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
            return FUN_0c117e76();
        }
        return t0;
    }
    (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
    return (FUN_0c117944(0xE8));
}

int FUN_0c126358(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t4;

    t0 = FUN_0c037320(0x7, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
    t1 = FUN_0c03f444(0x1, 0x0, t0);
    t0 = t1;
    if (t1 != 0) {
        FUN_0c03733c(t1, 0x7, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
        t2 = 0x0;
        for (;;) {
            if ((int)t2 >= (int)((((struct oC0_int *)(t1))->v))) {
                break;
            }
            t0 = 0xC4;
            t0 = (t0 + t1);
            t4 = (*(int *)((((t2 << 2) + t0) + 0x0)));
            t0 = *(short *)((0xC201AFC + (t2 << 1)));
            t2 = (t2 + 0x1);
            *(unsigned short *)((t4 + 0x6)) = t0;
        }
        *(unsigned char *)((t1 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        (((struct oAC_ushort *)(t1))->v) = 0x20F;
        (((struct oA9_uchar *)(t1))->v) = 0x21;
        *(unsigned int *)((t1 + 0x4)) = 0xC126406;
        (((struct o48_float *)(t1))->v) = 1.0f;
        (((struct o44_float *)(t1))->v) = 1.0f;
        (((struct o40_float *)(t1))->v) = 1.0f;
        (((struct oBC_float *)(t1))->v) = 1.0f;
        (((struct oB8_float *)(t1))->v) = 1.0f;
        (((struct oB4_float *)(t1))->v) = 1.0f;
        *(unsigned int *)((t1 + 0x10)) = a4;
        *(unsigned short *)((t1 + 0x1E)) = a5;
        *(unsigned short *)((t1 + 0x1C)) = a5;
        t2 = *(short *)((t1 + 0x1E));
        t0 = t2;
        if (t2 == 0) {
            *(unsigned short *)((t1 + 0x1E)) = 0x1;
            t0 = 0x1;
        }
    }
    return t0;
}

int FUN_0c1267e0(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t4;
    register int t5;

    t0 = FUN_0c03f444(0x5, 0x0, 0x1);
    t1 = t0;
    if (t0 != 0) {
        t2 = 0x0;
        for (;;) {
            if ((int)t2 >= (int)((((struct oC0_int *)(t0))->v))) {
                break;
            }
            t5 = t2;
            t5 = (t5 << 2);
            t5 = (t5 << 1);
            t4 = t2;
            t5 = (t5 + 0xC201B10);
            t4 = (t4 << 2);
            FUN_0c03744a((*(int *)((((0xC4 + t0) + t4) + 0x0))), (*(int *)((t5 + 0x0))), (*(int *)((t5 + 0x4))), (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
            t5 = 0xC4;
            t2 = (t2 + 0x1);
            t5 = (t5 + t0);
            t4 = (t4 + t5);
            t5 = ((((struct oF4_int *)(a4))->v));
            t5 = (t5 + 0x28);
            (((struct o68_uint *)((*(int *)((t4 + 0x0)))))->v) = t5;
        }
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = (*(signed char *)((a4 + 0xA9)));
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned int *)((t0 + 0x4)) = 0xC12688E;
        *(unsigned short *)((t0 + 0x1C)) = 0x0;
        *(unsigned short *)((t0 + 0x1E)) = a5;
        (((struct o20_ushort *)(t0))->v) = 0x0;
        t1 = 0x20;
    }
    return t1;
}

int FUN_0c12d748(int a4)
{
    int stk[1];
    register int t0;
    register int t12;
    register int t4;

    t0 = FUN_0c03f444(0x5, 0x0, 0x1);
    t12 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned int *)((t0 + 0x4)) = 0xC12D7F6;
        FUN_0c187798();
        FUN_0c187798();
        (((struct o54_float *)(t0))->v) = 0.0f;
        (((struct o50_float *)(t0))->v) = 0.0f;
        (((struct o4C_float *)(t0))->v) = 0.0f;
        (((struct o48_float *)(t0))->v) = 1.0f;
        (((struct o44_float *)(t0))->v) = 1.0f;
        (((struct o40_float *)(t0))->v) = 1.0f;
        *(unsigned int *)((t0 + 0x10)) = a4;
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0x1F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        t4 = *(signed char *)((t0 + 0x1));
        *(unsigned char *)(((int)stk + 0)) = t4;
        FUN_0c037498(((((struct oC4_int *)(t0))->v)), (*(signed char *)(((int)stk + 0))), 0x0, (*(int *)((((signed char)t4 << 2) + 0xC4B40FC))));
        *(unsigned char *)((((((struct oC4_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(t0))->v)) + 0x6)) = 0x41F;
        (((struct o14_float *)(((((struct oC4_int *)(t0))->v))))->v) = 1.0f;
        *(unsigned short *)((t0 + 0x1E)) = 0xA;
        t12 = 0xA;
    }
    return t12;
}

int FUN_0c145224(int a4)
{
    int stk[3];
    register int t0;
    register int t4;
    register int t8;
    register int t26;
    register int t30;
    register int t36;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        t36 = t0;
        if (t0 != 1) {
        } else {
            (((struct oA8_uchar *)(a4))->v) = ((((*(short *)((a4 + 0x1C))) & 0x4) >> 1) >> 1);
            t4 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t4 - 1);
            t36 = (short)(t4 - 1);
            if ((int)(short)(t4 - 1) <= 0) {
                FUN_0c0b21ac(a4, 0x5);
                (((struct o130_uchar *)(a4))->v) = 0x0;
                t8 = *(int *)((0xC1C6B9C + (((FUN_0c0b1cf2()) << 2) << 1)));
                t36 = (FUN_0c144984(a4, 0x1, t8));
            }
        }
    } else {
        *(unsigned short *)((a4 + 0x1C)) = 0x3C;
        FUN_0c144924(a4, 0x1);
        math_mat_get_translate((a4 + 0x64), ((int)stk + 0));
        FUN_0c059e9a((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532498), 0x3, ((int)stk + 0));
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = ((((*(short *)((a4 + 0x1C))) & 0x4) >> 1) >> 1);
        t26 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t26 - 1);
        t36 = (short)(t26 - 1);
        if ((int)(short)(t26 - 1) <= 0) {
            FUN_0c0b21ac(a4, 0x5);
            (((struct o130_uchar *)(a4))->v) = 0x0;
            t30 = *(int *)((0xC1C6B9C + (((FUN_0c0b1cf2()) << 2) << 1)));
            t36 = (FUN_0c144984(a4, 0x1, t30));
        }
    }
    return t36;
}

void FUN_0c14f238(int a4, int a5, int a6, int a7)
{
    if ((int)(signed char)a7 < (int)0xE) {
        if ((unsigned int)(signed char)a7 < (unsigned int)0xE) {
            switch (((signed char)a7 << 1)) {
                case 0:
                case 10:
                case 12:
                {
                    FUN_0c14f0c2(0x0, a4);
    return;
                }
                case 2:
                case 14:
                {
                    FUN_0c14f0c2(0x1, a4);
    return;
                }
                case 4:
                case 16:
                {
                    FUN_0c14f0c2(0x2, a4);
    return;
                }
                case 6:
                case 8:
                {
                    FUN_0c14f0c2(0x3, a4);
    return;
                }
                case 18:
                {
                    FUN_0c15f9b4(a6, a4, a5, 0x0);
                    return;
                }
                case 20:
                {
                    FUN_0c15f9b4(a6, a4, a5, 0x1);
                    return;
                }
                case 22:
                {
                    FUN_0c15f9b4(a6, a4, a5, 0x2);
                    return;
                }
                case 24:
                {
                    FUN_0c15fa0c(a6, a4, a5, 0x2, (1.0f + 1.0f));
    return;
                }
                default:
                {
                    FUN_0c15f9b4(a6, a4, a5, 0x3);
                    return;
                }
            }
        }
        return;
    }
}

int FUN_0c15009e(int a4, int a5, int a6, float f4, float f5, float f6, float f7, float f8)
{
    int stk[12];
    register int t0;
    register int t3;
    register int t5;
    register int t14;

    *(float *)(((int)stk + 20)) = f4;
    *(float *)(((int)stk + 8)) = f5;
    *(float *)(((int)stk + 16)) = f6;
    *(float *)(((int)stk + 12)) = f7;
    t0 = ((int (*)(int, int, int))(FUN_0c187798))(a4, a5, a6);
    *(volatile int *)0xC542260;
    t3 = ((int (*)(void))(FUN_0c187798))();
    math_vec3_mul_xyz((((int)stk + 8) + 0x10), f8, f8, f8);
    *(int *)((int)stk + 4) = (((int)stk + 8) + 0x10);
    *(int *)((int)stk + 0) = 0x0;
    t5 = FUN_0c1502e8(0x0, 0x1, 0x1, (((int)stk + 0) + 0x24), 0x0, (((int)stk + 8) + 0x10));
    t14 = t5;
    if (t5 != 0) {
        (((struct o14_float *)(((((struct oC4_int *)(t5))->v))))->v) = 1.0f;
        (((struct o18_float *)(((((struct oC4_int *)(t5))->v))))->v) = (*(float *)(((int)stk + 20)));
        (((struct o1C_float *)(((((struct oC4_int *)(t5))->v))))->v) = (*(float *)(((int)stk + 8)));
        (((struct o20_float *)(((((struct oC4_int *)(t5))->v))))->v) = (*(float *)(((int)stk + 16)));
        (((struct o4_float *)((0x41C + t5)))->v) = (*(float *)(((int)stk + 12)));
        *(unsigned short *)((t5 + 0x1E)) = 0x0;
        t14 = 0x0;
    }
    return t14;
}

int FUN_0c16fafc(void)
{
    register int t0;
    register int t1;

    t0 = (((struct o4_int *)0xC475A64)->v);
    if (t0 != 0) {
        if (t0 != 1) {
            t1 = t0;
            if (t0 != 2) {
            } else {
                (((struct o0_uint *)0xC475A64)->v) = 0x0;
                t0 = (((struct o0_int *)0xC475AAC)->v);
                if (t0 != 0) {
                    t1 = t0;
                } else {
                    FUN_0c16fad0(0x1);
                    (((struct o8_uint *)0xC475AAC)->v) = 0x0;
                    (((struct o38_uint *)0xC475A64)->v) = 0x0;
                    t1 = 0x50;
                }
            }
            t0 = t1;
        } else {
            FUN_0c16f890(0xC475AAC, 0x0, 0x1, 0x1, 0x1);
            if ((((((struct o38_int *)0xC475AAC)->v)) & 0x200) != 0) {
                (((struct o4_uint *)0xC475A64)->v) = (((((struct o4_int *)0xC475A64)->v)) + 0x1);
            }
            FUN_0c17a550(0xFFFF0000);
            FUN_0c17a4c0(0x14, 0x2);
            dbg_printf(0xC203EEC);
            FUN_0c17a4c0(0x1E, 0x2);
            if (((((struct o0_int *)0xC475AAC)->v)) == 0) {
                t1 = 0xC203EF4;
            } else {
                t1 = 0xC203EF8;
            }
            t0 = (dbg_printf(t1));
        }
        t1 = t0;
    } else {
        (((struct o4_uint *)0xC475A64)->v) = (((((struct o4_int *)0xC475A64)->v)) + 0x1);
        (((struct o0_uint *)0xC475AAC)->v) = 0x1;
        FUN_0c16f890(0xC475AAC, 0x0, 0x1, 0x1, 0x1);
        if ((((((struct o38_int *)0xC475AAC)->v)) & 0x200) != 0) {
            (((struct o4_uint *)0xC475A64)->v) = (((((struct o4_int *)0xC475A64)->v)) + 0x1);
        }
        FUN_0c17a550(0xFFFF0000);
        FUN_0c17a4c0(0x14, 0x2);
        dbg_printf(0xC203EEC);
        FUN_0c17a4c0(0x1E, 0x2);
        if (((((struct o0_int *)0xC475AAC)->v)) == 0) {
            t0 = 0xC203EF4;
        } else {
            t0 = 0xC203EF8;
        }
        t1 = (dbg_printf(t0));
    }
    return t1;
}

int FUN_0c036cac(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;

    t0 = 0xC4B4124;
    t1 = 0xC4B4144;
    t2 = 0x0;
    for (;;) {
        if ((*(int *)((t1 + 0x0))) != 0) {
            t3 = t2;
            t0 = (*(int *)((0xC4B40FC + t3)));
            t3 = (FUN_0c035e46(t0, (*(int *)((0xC1AA638 + t3)))));
        } else {
            t4 = t0;
        }
        t1 = (t1 + 0x4);
        t0 = t4;
        t2 = (t2 + 0x4);
        if ((unsigned int)t1 >= (unsigned int)0xC4B4154) {
            break;
        }
    }
    t1 = t3;
    t2 = t0;
    t0 = 0x0;
    for (;;) {
        t3 = 0x0;
        t4 = (((t0 << 1) << 2) + 0xC4B4124);
        t5 = 0x0;
        for (;;) {
            if ((*(int *)((t4 + 0x0))) != 0) {
                t2 = 0xC4B40DC;
                t2 = (t2 + ((t0 << 2) << 1));
                t2 = (t2 + t5);
                t2 = (*(int *)((t2 + 0x0)));
                t1 = (FUN_0c035e46(t2, (*(int *)((((0xC1AA618 + ((t0 << 2) << 1)) + t5) + 0x0)))));
            } else {
                t7 = t2;
            }
            t6 = 0x2;
            t2 = t7;
            t3 = (t3 + 0x1);
            t5 = (t5 + 0x4);
            t4 = (t4 + 0x4);
            if ((int)t3 >= (int)t6) {
                break;
            }
        }
        t6 = 0x4;
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)t6) {
            break;
        }
    }
    if ((*(int *)0xC4B4154) != 0) {
        return FUN_0c035e46((*(int *)0xC4B410C), 0x96);
    }
    return t1;
}

int FUN_0c03f6de(int a4, int a5)
{
    register int t0;
    register int t9;
    register int t1;
    register int t2;
    register int t3;

    t0 = (((struct oC0_int *)(a4))->v);
    t9 = 0x1;
    if ((int)t0 < (int)(t0 + a5)) {
        t1 = (t0 << 2);
        t2 = t0;
        t3 = (t0 << 2);
        for (;;) {
            FUN_0c03f6be(((0xC4 + a4) + t3));
            if ((*(int *)((((0xC4 + a4) + t3) + 0x0))) == 0) {
                break;
            }
            *(unsigned char *)(((*(int *)((((0xC4 + a4) + t1) + 0x0))) + 0x1)) = 0x1;
            t2 = (t2 + 0x1);
            t1 = (t1 + 0x4);
            (((struct oC0_uint *)(a4))->v) = (((((struct oC0_int *)(a4))->v)) + 0x1);
            t3 = (t3 + 0x4);
            if ((int)t2 >= (int)(t0 + a5)) {
                return 0x1;
            }
        }
        t9 = 0x0;
    }
    return t9;
}

int FUN_0c060daa(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;
    register float u0;
    register float u1;

    t0 = *(signed char *)((a5 + 0x3));
    t1 = 0x0;
    if ((int)t0 > 0) {
        t2 = t0;
        t3 = 0x0;
        t4 = a5;
        t5 = 0x0;
        t6 = 0x0;
        t7 = a5;
        for (;;) {
            if (((*(signed char *)((t7 + 0x0))) & 0x4) != 0) {
                t8 = t6;
                t8 = (t8 << 2);
                t8 = (t8 << 2);
                t8 = (t8 << 1);
                t2 = 0x20;
                t2 = (FUN_0c18778c(t3, t4));
                t4 = 0x184;
                t4 = (t4 + a4);
                t4 = (t4 + t8);
                t3 = a4;
                t2 = (FUN_0c060454(t3, t4));
                t2 = (*(signed char *)((t7 + 0x1)));
                if (t2 != 0) {
                    if (t2 != 1) {
                        t3 = 0x184;
                        t2 = 0x18;
                        t3 = (t3 + a4);
                        t3 = (t3 + t8);
                    } else {
                        t3 = 0x184;
                        t3 = (t3 + a4);
                        t3 = (t3 + t8);
                        t2 = 0x18;
                    }
                } else {
                    t3 = 0x184;
                    t3 = (t3 + a4);
                    t3 = (t3 + t8);
                    t2 = 0x14;
                }
                u0 = *(float *)((t3 + t2));
                t2 = 0xC;
                u1 = *(float *)((t3 + t2));
                t4 = 0x184;
                t4 = (t4 + a4);
                t4 = (t4 + t8);
                t3 = a4;
                t2 = (FUN_0c06475c(t3, t4, (u1 + u0)));
                t6 = (t6 + 0x1);
            } else {
                t8 = t3;
                t9 = t4;
            }
            t5 = (t5 + 0x1);
            t3 = t8;
            t4 = t9;
            t7 = (t7 + 0x20);
            if ((int)t5 >= (int)t0) {
                break;
            }
        }
        t1 = t6;
    }
    (((struct o187_uchar *)(a4))->v) = t1;
    return 0x187;
}


int FUN_0c08fa98(int a4)
{
    register int t0;
    register int t1;

    (((struct o50_float *)(a4))->v) = 0.0f;
    (((struct o54_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    (((struct o60_float *)(a4))->v) = 0.0f;
    (((struct o58_float *)(a4))->v) = 0.0f;
    *(unsigned short *)((a4 + 0x1C)) = 0x0;
    *(unsigned short *)((a4 + 0x1E)) = 0x0;
    (((struct o20_ushort *)(a4))->v) = 0x0;
    if ((*(signed char *)((a4 + 0x3731))) == 0) {
        (((struct o22_ushort *)(a4))->v) = 0x1;
    } else {
        (((struct o22_ushort *)(a4))->v) = 0x0;
    }
    t0 = *(int *)(((((((((struct o20_short *)(a4))->v)) << 2) << 2) << 1) + 0xC1C6090));
    t1 = *(signed char *)((a4 + 0x1));
    FUN_0c07e79c(a4, t1, 0x1, t0, (t1), 0x1, (t0));
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
    (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
    return FUN_0c07d030(a4, 0x0);
}

int FUN_0c0af5c8(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = FUN_0c037bf6(a4);
    t1 = (unsigned char)t0;
    if ((unsigned char)t0 != 0) {
        t0 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t0, 0x2, 0xB, (t0), 0x2, 0xB);
        t0 = *(int *)(((0x118 + a4) + 0x4));
        t2 = (((struct o118_int *)(a4))->v);
        (((struct oA0_float *)(t0))->v) = 1.0f;
        (((struct o9C_float *)(t0))->v) = 1.0f;
        (((struct oA0_float *)(t2))->v) = 1.0f;
        (((struct o9C_float *)(t2))->v) = 1.0f;
        t0 = *(int *)(((0x118 + a4) + 0x4));
        t2 = (((struct o118_int *)(a4))->v);
        (((struct o98_float *)(t0))->v) = 1.0f;
        (((struct o98_float *)(t2))->v) = 1.0f;
        (((struct o94_float *)(t0))->v) = 1.0f;
        (((struct o94_float *)(t2))->v) = 1.0f;
        *(unsigned int *)((a4 + 0x38)) = (unsigned short)((*(int *)((a4 + 0x38))) + 0x8000);
        FUN_0c07ce58(a4, ((((short)(*(signed char *)((a4 + 0x2))) * (short)0x78) + 0xC25B194) + 0x18));
        *(unsigned int *)((a4 + 0x38)) = (FUN_0c07d774(a4));
        FUN_0c07043c(a4, 35.0f, -3.5f, 500.0f, 100.0f);
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        *(unsigned short *)((a4 + 0x1E)) = 0x2;
        t1 = 0x2;
    }
    return t1;
}

int FUN_0c0ba7e4(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    FUN_0c07d030(a4, 0x0);
    if ((*(signed char *)((a4 + 0x375A))) != 3) {
        t0 = *(signed char *)((a4 + 0x1));
        t1 = 0xE;
        t2 = (t0);
        t3 = t0;
        t0 = 0xE;
    } else {
        t3 = *(signed char *)((a4 + 0x1));
        t1 = 0xF;
        t2 = (t3);
        t0 = 0xF;
    }
    FUN_0c07e79c(a4, t3, 0x1, t0, t2, 0x1, t1);
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
    *(unsigned short *)((a4 + 0x1C)) = 0x0;
    if ((*(signed char *)((a4 + 0x3731))) == 0) {
        (((struct o20_ushort *)(a4))->v) = 0x4;
        (((struct o3850_uint *)(a4))->v) = (FUN_0c07d774(a4));
    } else {
        (((struct o20_ushort *)(a4))->v) = 0x0;
    }
    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    return 0x15;
}

int FUN_0c148690(int a4)
{
    int t0;
    register int t1;
    register int t2;

    t1 = *(signed char *)((a4 + 0x1));
    t2 = (((struct o22_short *)(a4))->v);
    if (((*(signed char *)(((((short)t1 * (short)0x3938) + 0xC532498) + 0x3721))) == (*(signed char *)((a4 + 0x41C)))) && (t0 = *(signed char *)(((((short)t1 * (short)0x3938) + 0xC532498) + 0x3715)), t0 == 18)) {
        t0 = FUN_0c04307c();
        if (t0 != 0) {
            return FUN_0c148494(a4, 0x2, (*(signed char *)((a4 + 0x1))));
        }
        t0 = *(signed char *)((a4 + 0x15));
        if (t0 != 0) {
            if (t0 != 1) {
            } else {
                (((struct o964_uint *)((((short)t2 * (short)0x3938) + 0xC532498)))->v) = ((*(int *)(((((short)t2 * (short)0x3938) + 0xC532498) + 0x38))) - (*(int *)(((((short)t1 * (short)0x3938) + 0xC532498) + 0x38))));
            }
        } else {
            FUN_0c148494(a4, 0x5, (*(signed char *)((a4 + 0x1))));
            FUN_0c0c2ab6(a4, 0x15);
            (((struct o12E_ushort *)(a4))->v) = (((((struct o12E_short *)(a4))->v)) & (~((int)0x1 << (int)(*(signed char *)((a4 + 0x1))))));
            (((struct o12C_ushort *)(a4))->v) = 0x0;
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        }
        (((struct o376C_uint *)((((short)t1 * (short)0x3938) + 0xC532498)))->v) = a4;
        return 0x376C;
    }
    return FUN_0c148494(a4, 0x2, (*(signed char *)((a4 + 0x1))));
}

int FUN_0c168fa8(int a4, int a5, int a6, int a7)
{
    int stk[8];
    register int t0;
    register int t2;
    register int t16;
    register int t7;

    *(unsigned int *)(((int)stk + 20)) = a4;
    *(unsigned int *)(((int)stk + 28)) = a5;
    *(unsigned int *)(((int)stk + 24)) = a6;
    *(unsigned int *)(((int)stk + 16)) = a7;
    t0 = 0x5;
    if (a7 != 0) {
        t0 = 0x1;
    }
    t2 = FUN_0c03f444(t0, 0x0, 0x2);
    t16 = t2;
    if (t2 != 0) {
        *(unsigned char *)((t2 + 0x1)) = (*(signed char *)(((int)stk + 20)));
        *(unsigned int *)((t2 + 0x4)) = 0xC168C20;
        *(unsigned char *)((t2 + 0x2)) = (*(int *)(((int)stk + 16)));
        if ((*(signed char *)((t2 + 0x2))) == 1) {
            FUN_0c07e3ae(t2, 0x54);
            t7 = *(int *)(((int)stk + 20));
            *(unsigned int *)(((int)stk + 16)) = (~((int)0x1 << (int)t7));
            *(int *)((int)stk + 12) = 0x0;
            *(int *)((int)stk + 8) = 0x0;
            *(int *)((int)stk + 4) = (~((int)0x1 << (int)t7));
            *(int *)((int)stk + 0) = 0x100;
            FUN_0c064d24(t2, 0x3, 0x9, 0x0, 0x100, (~((int)0x1 << (int)t7)), 0x0, 0x0);
        }
        *(volatile int *)(((int)stk + 28));
        FUN_0c187798();
        *(volatile int *)(((int)stk + 24));
        t16 = (FUN_0c187798());
    }
    return t16;
}

int FUN_0c01c2e0(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)0xC309BE4;
    t1 = a4;
    if ((int)(signed char)a4 > (int)0x24) {
        t1 = 0x24;
    }
    t2 = t0;
    if ((int)(signed char)t0 > (int)0x24) {
        t2 = 0x24;
    }
    if ((signed char)t1 != (signed char)t2) {
        FUN_0c05a292(0xC, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF);
        FUN_0c01cb7c();
        t0 = FUN_0c01cc56(0x8, 0xC01C004);
        (((struct o20_ushort *)(t0))->v) = (signed char)t1;
        (((struct o22_ushort *)(t0))->v) = (signed char)t2;
        *(unsigned char *)(((FUN_0c01cc56((*(short *)(((((signed char)t1 << 2) + 0xC20E2B4) + 0x0))), 0xC01BBA8)) + 0x2)) = 0x0;
        t0 = *(short *)(((((signed char)t1 << 2) + 0xC20E2B4) + 0x2));
        t2 = t0;
        if (t0 != 0) {
            t0 = FUN_0c01cc56((*(short *)((((((signed char)t1 << 2) + 0xC20E2B4) + 0x2) + 0x0))), 0xC01BBA8);
            t2 = 0x2;
            if ((*(short *)((((((signed char)t1 << 2) + 0xC20E2B4) + 0x2) + 0x0))) == 41) {
                t2 = 0x1;
            }
            *(unsigned char *)((t0 + 0x2)) = t2;
        }
        *(unsigned char *)0xC305046 = 0x1;
        t0 = t2;
    }
    return t0;
}

int FUN_0c02c184(int a4)
{
    register int t1;

    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o1B_uchar *)(a4))->v) = 0x0;
        (((struct o22_ushort *)(a4))->v) = 0x0;
        (((struct o40_float *)(a4))->v) = 1.0f;
        (((struct o44_float *)(a4))->v) = 1.0f;
        (((struct o28_float *)(a4))->v) = (*(float *)((((*(signed char *)0xC30A347) << 2) + 0xC20E8B0)));
        (((struct o2C_float *)(a4))->v) = 50.0f;
    }
    if (((*(signed char *)((((short)(*(signed char *)0xC305416) * (short)0x86) + 0xC309E0C))) != 0) && (t1 = *(signed char *)0xC30985A, t1 == 4)) {
        (((struct oA8_uchar *)(a4))->v) = 0x1;
    } else {
        (((struct oA8_uchar *)(a4))->v) = 0x0;
    }
    FUN_0c012c34(a4);
    t1 = 0xC30EF22;
    if ((*(signed char *)0xC30EF20) != (*(signed char *)0xC30EF22)) {
        (((struct o28_float *)(a4))->v) = (*(float *)((((*(signed char *)0xC30A347) << 2) + 0xC20E8B0)));
        t1 = 0x28;
    }
    if ((*(signed char *)0xC30EF24) != 0) {
        (((struct o1B_uchar *)(a4))->v) = 0x0;
        (((struct o22_ushort *)(a4))->v) = 0x0;
        (((struct o40_float *)(a4))->v) = 1.0f;
        (((struct o44_float *)(a4))->v) = 1.0f;
        t1 = 0x44;
    }
    return t1;
}

int FUN_0c040838(int a4, int a5, int a6, int a7)
{
    int stk[1];
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t26;
    register int t29;

    *(unsigned int *)(((int)stk + 0)) = 0x0;
    t0 = 0xC532498;
    t1 = 0xC532498;
    t2 = 0x0;
    t3 = 0xC532498;
    t4 = 0xC532498;
    for (;;) {
        t26 = 0x3714;
        t29 = t0;
        if ((*(signed char *)((((t2 * 0x3938) + 0xC532498) + 0x3714))) != 0) {
            if ((*(signed char *)((((t2 * 0x3938) + 0xC532498) + 0x2))) == 12) {
                *(unsigned int *)((((t2 * 0x3938) + 0xC532498) + 0x38)) = 0x0;
                (((struct o30_float *)(((t2 * 0x3938) + 0xC532498)))->v) = 0.0f;
                (((struct o2C_float *)(((t2 * 0x3938) + 0xC532498)))->v) = 0.0f;
                (((struct o28_float *)(((t2 * 0x3938) + 0xC532498)))->v) = 0.0f;
                t0 = ((t2 * 0x3938) + 0xC532498);
                FUN_0c0b2888(t0, 0x13, 0x0, a7);
                t0 = ((t2 * 0x3938) + 0xC532498);
                t26 = (FUN_0c059e60(t0, 0x10));
            } else {
                if ((*(signed char *)((t1 + 0x2))) == 13) {
                    *(unsigned int *)((t4 + 0x38)) = 0x0;
                    (((struct o30_float *)(t4))->v) = 0.0f;
                    (((struct o2C_float *)(t4))->v) = 0.0f;
                    (((struct o28_float *)(t4))->v) = 0.0f;
                    t26 = 0x28;
                    t29 = t0;
                } else {
                    t0 = (*(int *)(((int)stk + 0)));
                    t26 = FUN_0c03fef2(t0, (t3 + 0x28), a6, a7);
                    *(unsigned int *)((t3 + 0x38)) = t26;
                    *(unsigned int *)(((int)stk + 0)) = ((*(int *)(((int)stk + 0))) + 0x1);
                }
            }
        }
        t0 = t29;
        t2 = (t2 + 0x1);
        t3 = (t3 + 0x3938);
        t4 = (t4 + 0x3938);
        t1 = (t1 + 0x3938);
        if ((int)t2 >= (int)0x4) {
            break;
        }
    }
    return t26;
}

int FUN_0c06514e(int a4, int a5, int a6)
{
    int stk[3];
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u6;
    register float u7;
    register float u8;
    register float u9;
    register float u11;
    register float u13;
    register float u14;
    register float u15;
    register float u16;
    register float u18;
    register int t24;
    float u21;

    u0 = (((struct o8_float *)(a4))->v);
    u1 = (((struct o8_float *)(a5))->v);
    u2 = (((struct oC_float *)((a5 + 0x8)))->v);
    u3 = (((struct oC_float *)((a4 + 0x8)))->v);
    u4 = (u0 - u1);
    if (0.0f > (u0 - u1)) {
        u4 = ((-u0) + u1);
    }
    *(float *)((((int)stk + 0) + 0x0)) = ((u3 + u2) - u4);
    u6 = (((struct oC_float *)((a5 + 0x8)))->v);
    u7 = (((struct o14_float *)((a4 + 0x8)))->v);
    u8 = (((struct o8_float *)((a4 + 0x8)))->v);
    u9 = (((struct o8_float *)((a5 + 0x8)))->v);
    u11 = (u8 - u9);
    if (0.0f > (u8 - u9)) {
        u11 = ((-u8) + u9);
    }
    (((struct o8_float *)(((int)stk + 0)))->v) = ((u7 + u6) - u11);
    u13 = (((struct oC_float *)((a5 + 0x8)))->v);
    u14 = (((struct o10_float *)((a4 + 0x8)))->v);
    u15 = (((struct o4_float *)((a4 + 0x8)))->v);
    u16 = (((struct o4_float *)((a5 + 0x8)))->v);
    u18 = (u15 - u16);
    if (0.0f > (u15 - u16)) {
        u18 = ((-u15) + u16);
    }
    (((struct o4_float *)(((int)stk + 0)))->v) = ((u14 + u13) - u18);
    t24 = 0x4;
    if (!(((u14 + u13) - u18) > (*(float *)((((int)stk + 0) + 0x0)))) && (u21 = (((struct o8_float *)(((int)stk + 0)))->v), !(((u14 + u13) - u18) > u21))) {
    } else {
        *(float *)((a6 + 0x0)) = (((((struct o8_float *)(a4))->v)) - ((((struct o8_float *)(a5))->v)));
        t24 = 0x8;
    }
    *(float *)((a6 + t24)) = ((*(float *)(((a4 + 0x8) + t24))) - (*(float *)(((a5 + 0x8) + t24))));
    return 0x1;
}

int FUN_0c07c858(int a4)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x446));
    *(unsigned char *)((((((short)(*(signed char *)((a4 + 0x371A))) * (short)0x2D0) + (0x2BC8 + a4)) + (((((t0 << 2) << 1) + t0) << 2) << 2)) + 0x0)) = 0x1;
    t0 = *(signed char *)((a4 + 0x447));
    *(unsigned char *)((((((short)(*(signed char *)((a4 + 0x371A))) * (short)0x2D0) + (0x3168 + a4)) + (((((t0 << 2) << 1) + t0) << 2) << 2)) + 0x0)) = 0x1;
    t0 = *(int *)(((0xC4 + a4) + 0x3C));
    *(unsigned char *)((((((struct o48_int *)((0xC4 + a4)))->v)) + 0x0)) = 0x1;
    *(unsigned char *)((t0 + 0x0)) = 0x1;
    if ((*(signed char *)((a4 + 0x371D))) == 6) {
        t0 = *(int *)(((0xC4 + a4) + 0x3C));
        *(unsigned char *)((((((struct o48_int *)((0xC4 + a4)))->v)) + 0x0)) = 0x0;
        *(unsigned char *)((t0 + 0x0)) = 0x0;
    }
    t0 = *(signed char *)((a4 + 0x3721));
    t1 = (unsigned char)t0;
    if (((unsigned char)t0 != 41) && ((unsigned char)t0 != 42)) {
    } else {
        t0 = *(signed char *)((a4 + 0x446));
        *(unsigned char *)((((((short)(*(signed char *)((a4 + 0x371A))) * (short)0x2D0) + (0x2BC8 + a4)) + (((((t0 << 2) << 1) + t0) << 2) << 2)) + 0x0)) = 0x0;
        t1 = 0x446;
    }
    return t1;
}

int FUN_0c07c9c0(int a4)
{
    register int t1;
    register int t2;
    register int t6;
    register float u0;
    register float u1;
    register float u2;

    t1 = 0x1;
    if (((((struct o0_float *)0xC07CAB4)->v)) > ((((struct o17C_float *)(a4))->v))) {
    } else {
        t2 = FUN_0c064f80(a4);
        t1 = 0x0;
        if ((t2 == 0) && (t1 = *(signed char *)((a4 + 0x3715)), t1 != 38)) {
            t1 = 0x0;
            if (((((struct o37C0_float *)(a4))->v)) > (((((struct o168_float *)(a4))->v)) + ((((struct o8_float *)0xC07CAB4)->v)))) {
                t2 = 0x0;
                if (((((struct o2C_float *)(a4))->v)) > (((((struct o37C0_float *)(a4))->v)) + ((((struct oC_float *)0xC07CAB4)->v)))) {
                    t2 = 0x0;
                    if (((((struct o37C0_float *)(a4))->v)) > ((((struct o2C_float *)(a4))->v))) {
                        t2 = (((struct o3842_short *)(a4))->v);
                        u0 = (((struct o28_float *)(a4))->v);
                        t6 = *(short *)(((0x3842 + a4) + 0x2));
                        u1 = (((struct o30_float *)(a4))->v);
                        u2 = (((float)t6 - u1) * ((float)t6 - u1));
                        u2 = u2 + (((float)t2 - u0)) * (((float)t2 - u0));
                        u0 = math_signed_sqrt(u2);
                        t2 = 0x0;
                        if (!(u0 > ((((struct o14_float *)0xC07CAB4)->v)))) {
                            t2 = 0x2;
                        }
                    }
                }
                t1 = t2;
            }
        }
    }
    return t1;
}

int FUN_0c09ef24(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = FUN_0c037bf6(a4);
    t1 = (unsigned char)t0;
    if ((unsigned char)t0 != 0) {
        t0 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t0, 0x2, 0xC, (t0), 0x2, 0xC);
        t0 = *(int *)(((0x118 + a4) + 0x4));
        t2 = (((struct o118_int *)(a4))->v);
        (((struct oA0_float *)(t0))->v) = 1.0f;
        (((struct o9C_float *)(t0))->v) = 1.0f;
        (((struct oA0_float *)(t2))->v) = 1.0f;
        (((struct o9C_float *)(t2))->v) = 1.0f;
        t0 = *(int *)(((0x118 + a4) + 0x4));
        t2 = (((struct o118_int *)(a4))->v);
        (((struct o98_float *)(t0))->v) = 1.0f;
        (((struct o98_float *)(t2))->v) = 1.0f;
        (((struct o94_float *)(t0))->v) = 1.0f;
        (((struct o94_float *)(t2))->v) = 1.0f;
        *(unsigned int *)((a4 + 0x38)) = (unsigned short)((*(int *)((a4 + 0x38))) + 0x8000);
        FUN_0c07ce58(a4, ((((short)(*(signed char *)((a4 + 0x2))) * (short)0x78) + 0xC25B194) + 0x18));
        *(unsigned int *)((a4 + 0x38)) = (FUN_0c07d774(a4));
        FUN_0c07043c(a4, ((((struct o8_float *)0xC09F034)->v)), ((((struct o4_float *)0xC09F034)->v)), ((((struct o0_float *)0xC09F034)->v)), 1.0f);
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t1 = 0x15;
    }
    return t1;
}

int FUN_0c0bbb16(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;
    register int t10;
    float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;

    t3 = 0xE4E0;
    t4 = 0xC540978;
    t5 = 0x0;
    t6 = 0x2710;
    t7 = 0xC532498;
    for (;;) {
        t8 = t0;
        if ((t7 != a4) && ((t1 = *(signed char *)((t7 + 0x3714)), t2 = t1, t2 != 0) && (u0 = (((struct o160_float *)(t7))->v), u0 > 0.0f))) {
            t3 = (unsigned short)t6;
            u1 = ((((struct o30_float *)(t7))->v));
            u1 = (u1 - ((((struct o30_float *)(a4))->v)));
            u2 = ((((struct o28_float *)(t7))->v));
            u2 = (u2 - ((((struct o28_float *)(a4))->v)));
            u3 = u2;
            u4 = (u1 * u1);
            u4 = u4 + u3 * u2;
            u1 = u4;
            u3 = (math_signed_sqrt(u1));
            t0 = (t3);
            t2 = (int)u3;
            t2 = (unsigned short)t2;
            if ((int)t0 > (int)t2) {
                u3 = (math_signed_sqrt(u1));
                t5 = t7;
                t6 = (int)u3;
            } else {
                t9 = t0;
            }
            t8 = t9;
        } else {
            t9 = t3;
            t10 = t4;
        }
        t0 = t8;
        t2 = 0xC540978;
        t3 = t9;
        t4 = t10;
        t7 = (t7 + 0x3938);
        if ((unsigned int)t7 >= (unsigned int)t2) {
            break;
        }
    }
    return t5;
}

int FUN_0c0c0e88(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = (((struct o0_int *)0xC47245C)->v);
    (((struct o0_uint *)0xC47245C)->v) = (t0 + 0x2);
    t1 = *(short *)((((t0 + 0x2) - 2) + 0x0));
    t0 = *(signed char *)((0xC471ACC + ((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264)));
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 1) {
            t2 = (unsigned char)t0;
            if ((unsigned char)t0 != 2) {
            } else {
                (((struct o4_ushort *)0xC47245C)->v) = 0x1;
                t0 = FUN_0c0bc25e();
                *(unsigned int *)(((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC) + 0x8)) = ((((struct o0_int *)0xC47245C)->v));
                t2 = t0;
            }
            t0 = t2;
        } else {
            (((struct o4_ushort *)0xC47245C)->v) = 0x0;
            t2 = *(signed char *)0xC472462;
            t3 = *(short *)(((((unsigned short)(unsigned char)t2 * (unsigned short)0x264) + 0xC471ACC) + 0x16));
            *(unsigned short *)(((((unsigned short)(unsigned char)t2 * (unsigned short)0x264) + 0xC471ACC) + 0x16)) = (t3 - 1);
            if ((unsigned short)(t3 - 1) == 0) {
                t2 = *(signed char *)0xC472462;
                *(unsigned char *)(((((unsigned short)(unsigned char)t2 * (unsigned short)0x264) + 0xC471ACC) + 0x0)) = ((*(signed char *)(((((unsigned short)(unsigned char)t2 * (unsigned short)0x264) + 0xC471ACC) + 0x0))) + 0x1);
            }
            t0 = (unsigned short)(t3 - 1);
        }
        t2 = t0;
    } else {
        (((struct o4_ushort *)0xC47245C)->v) = 0x0;
        *(unsigned short *)(((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC) + 0x16)) = t1;
        t0 = *(signed char *)0xC472462;
        *(unsigned char *)(((((unsigned short)(unsigned char)t0 * (unsigned short)0x264) + 0xC471ACC) + 0x0)) = ((*(signed char *)(((((unsigned short)(unsigned char)t0 * (unsigned short)0x264) + 0xC471ACC) + 0x0))) + 0x1);
        (((struct o4_ushort *)0xC47245C)->v) = 0x0;
        t0 = *(signed char *)0xC472462;
        t1 = *(short *)(((((unsigned short)(unsigned char)t0 * (unsigned short)0x264) + 0xC471ACC) + 0x16));
        *(unsigned short *)(((((unsigned short)(unsigned char)t0 * (unsigned short)0x264) + 0xC471ACC) + 0x16)) = (t1 - 1);
        if ((unsigned short)(t1 - 1) == 0) {
            t0 = *(signed char *)0xC472462;
            *(unsigned char *)(((((unsigned short)(unsigned char)t0 * (unsigned short)0x264) + 0xC471ACC) + 0x0)) = ((*(signed char *)(((((unsigned short)(unsigned char)t0 * (unsigned short)0x264) + 0xC471ACC) + 0x0))) + 0x1);
        }
        t2 = (unsigned short)(t1 - 1);
    }
    return t2;
}
