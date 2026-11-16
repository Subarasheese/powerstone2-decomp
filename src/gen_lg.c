/* Straight-line functions with calls and guards (batch gen_lg): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o114_int { char p[0x114]; int v; };
struct o118_int { char p[0x118]; int v; };
struct o11C_int { char p[0x11C]; int v; };
struct o126_uchar { char p[0x126]; unsigned char v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12E_short { char p[0x12E]; short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o14_float { char p[0x14]; float v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o168_float { char p[0x168]; float v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o17C_float { char p[0x17C]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o18_uchar { char p[0x18]; unsigned char v; };
struct o19_uchar { char p[0x19]; unsigned char v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o23_uchar { char p[0x23]; unsigned char v; };
struct o26A0_uint { char p[0x26A0]; unsigned int v; };
struct o26A4_uint { char p[0x26A4]; unsigned int v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2C_int { char p[0x2C]; int v; };
struct o30_float { char p[0x30]; float v; };
struct o3715_uchar { char p[0x3715]; unsigned char v; };
struct o3716_uchar { char p[0x3716]; unsigned char v; };
struct o3717_uchar { char p[0x3717]; unsigned char v; };
struct o371D_uchar { char p[0x371D]; unsigned char v; };
struct o371E_uchar { char p[0x371E]; unsigned char v; };
struct o3728_uchar { char p[0x3728]; unsigned char v; };
struct o3729_uchar { char p[0x3729]; unsigned char v; };
struct o372F_uchar { char p[0x372F]; unsigned char v; };
struct o3732_uchar { char p[0x3732]; unsigned char v; };
struct o3739_uchar { char p[0x3739]; unsigned char v; };
struct o3743_uchar { char p[0x3743]; unsigned char v; };
struct o374B_uchar { char p[0x374B]; unsigned char v; };
struct o3770_int { char p[0x3770]; int v; };
struct o3770_uint { char p[0x3770]; unsigned int v; };
struct o378C_float { char p[0x378C]; float v; };
struct o37A0_float { char p[0x37A0]; float v; };
struct o37A4_float { char p[0x37A4]; float v; };
struct o382A_short { char p[0x382A]; short v; };
struct o382A_ushort { char p[0x382A]; unsigned short v; };
struct o3830_ushort { char p[0x3830]; unsigned short v; };
struct o3850_int { char p[0x3850]; int v; };
struct o3850_short { char p[0x3850]; short v; };
struct o3850_uint { char p[0x3850]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_float { char p[0x40]; float v; };
struct o404_int { char p[0x404]; int v; };
struct o41C_uchar { char p[0x41C]; unsigned char v; };
struct o41D_uchar { char p[0x41D]; unsigned char v; };
struct o426_short { char p[0x426]; short v; };
struct o426_ushort { char p[0x426]; unsigned short v; };
struct o42C_short { char p[0x42C]; short v; };
struct o430_short { char p[0x430]; short v; };
struct o44_float { char p[0x44]; float v; };
struct o445_uchar { char p[0x445]; unsigned char v; };
struct o446_uchar { char p[0x446]; unsigned char v; };
struct o447_uchar { char p[0x447]; unsigned char v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4E0_uint { char p[0x4E0]; unsigned int v; };
struct o5_uchar { char p[0x5]; unsigned char v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o584_float { char p[0x584]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o68_int { char p[0x68]; int v; };
struct o78_int { char p[0x78]; int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o9_uchar { char p[0x9]; unsigned char v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC_float { char p[0xC]; float v; };
struct oC4_int { char p[0xC4]; int v; };
struct oE0_int { char p[0xE0]; int v; };
struct oE4_int { char p[0xE4]; int v; };
struct oF0_int { char p[0xF0]; int v; };
struct oF4_int { char p[0xF4]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c037498(int, int, int, int);
int FUN_0c037bf6(int);
int FUN_0c038362(int);
int FUN_0c0392bc(int);
int FUN_0c03a6c4(void);
int FUN_0c03a70a(void);
int FUN_0c03bd76(void);
int FUN_0c03e6b2(int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c05253c(int, int, int, int, int, int);
int FUN_0c059dae(int, int);
int FUN_0c059df2(int, int);
int FUN_0c059e60(int, int);
int FUN_0c059fae(int, int, int);
int FUN_0c05b052(int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c064e70(int, int);
int FUN_0c064ee4(int, int);
int FUN_0c064fba(int, int, int);
int FUN_0c064fd4(int, int, int);
int FUN_0c0650b0(int, int, int);
int FUN_0c06514e(int, int, int);
int FUN_0c0651f8(int, int, int);
int FUN_0c0652c4(int, int, int, float, float);
int FUN_0c065396(int, int, int);
int FUN_0c065434(int, int, int, float, float);
int FUN_0c06551a(int, int, int);
int FUN_0c0655c0(int, int, int);
int FUN_0c0676ce(int);
int FUN_0c070320(int);
int FUN_0c073566(int, int);
int FUN_0c07363a(int, int);
int FUN_0c0752a8(int);
int FUN_0c075328(int);
int FUN_0c07a6aa(int);
int FUN_0c07d086(int, int, float);
extern int FUN_0c07db58();
int FUN_0c07e3ae(int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07eaf4(int);
int FUN_0c07ebd0(int);
int FUN_0c080364(int, int);
int FUN_0c0819c2(int, int);
int FUN_0c081dfc(int);
int FUN_0c08515a(int, int);
int FUN_0c085256(int, int);
int FUN_0c085cac(int, int, int);
int FUN_0c085d0c(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c08e382(int);
int FUN_0c091448(int, int);
int FUN_0c0c212c(int);
int FUN_0c0c28f6(int, int);
int FUN_0c0c2944(int, int, int, int, int);
int FUN_0c0c2ce4(int);
int FUN_0c0c2d56(int, int, int);
int FUN_0c0dade0(int, int);
int FUN_0c0dbfd0(int);
int FUN_0c0dc000(int);
float FUN_0c0e2340(int);
int FUN_0c117944(int, ...);
int FUN_0c117d14(void);
int FUN_0c13009a(int, int, int);
int FUN_0c133aec(int);
int FUN_0c14f238(int, int, int, int);
int FUN_0c14f960(int, int);
int FUN_0c150be8(int, int);
int FUN_0c152d18(int);
int FUN_0c15360e(int);
int FUN_0c15acb0(int, int, int);
int FUN_0c179ac0(void);
int FUN_0c17c4d0(int);
int FUN_0c187798(int, int, int);
int buMountDisk(int, int, int);
int buUnmount(int);
int math_atan2_angle16(int, int, int, int, float, float);
int math_atan_angle16(float);
float math_cos_angle16(int);
float math_signed_sqrt(float);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int thunk_FUN_0c058310(int, int);
int thunk_FUN_0c05abb2(int, int);
int vmu_lcd_refresh(int);
int vmu_load_vmgame_data(int);
int FUN_0c06cf84(int a4);
int FUN_0c162860(int a4, int a5);
int FUN_0c067294(int a4, int a5, int a6);
int FUN_0c0db21c(int a4, int a5, int a6);
int FUN_0c066a14(int a4, int a5, int a6);
int FUN_0c0cf03a(int a4);
int FUN_0c08de10(int a4, int a5, int a6, int a7);
int FUN_0c0918ea(int a4);
int FUN_0c095a1c(int a4);
int FUN_0c09e980(int a4);
int FUN_0c0a0f18(int a4);
int FUN_0c03b800(void);
int FUN_0c03c210(int a4);
int FUN_0c0655dc(int a4, int a5, int a6, int a7, int a8, float f4, float f5);
int FUN_0c07aabc(int a4, int a5, int a6);
int FUN_0c07d536(int a4);
int FUN_0c0b2888(int a4, int a5, int a6);
int FUN_0c13022a(int a4, int a5, int a6, int a7);
int FUN_0c15acfe(int a4, int a5, int a6, int a7);
int FUN_0c15b91c(int a4, int a5, int a6, int a7);
int FUN_0c06eafc(int a4, float f4);
int FUN_0c0dc03a(int a4, int a5, int a6, int a7);
int FUN_0c107ec0(int a4, int a5, int a6, int a7);
int FUN_0c13f4a0(int a4, int a5, int a6, int a7);
int FUN_0c030110(int a4, int a5, int a6);

int FUN_0c06cf84(int a4)
{
    int stk[3];
    register int t0;
    register int t8;
    register int t9;
    register int t10;
    register int t12;
    register int t23;
    register float u62;
    register int t63;
    register int t64;
    register int t65;

    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        (((struct o20_ushort *)(a4))->v) = 0x0;
    }
    if ((*(short *)((a4 + 0x1C))) != 0) {
        t8 = *(int *)((a4 + 0x38));
        t9 = (((struct o3850_short *)(a4))->v);
        t10 = *(int *)((a4 + 0x38));
        t12 = (unsigned short)(t9 - t8);
        if ((0x8000 & (unsigned short)(t9 - t8)) != 0) {
            t12 = ((unsigned short)(t9 - t8) | 0xFFFF0000);
        }
        *(unsigned int *)((a4 + 0x38)) = (unsigned short)(t10 + ((int)((int)t12 / (int)(*(short *)((a4 + 0x1C))))));
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
    } else {
        *(unsigned int *)((a4 + 0x38)) = ((((struct o3850_int *)(a4))->v));
    }
    t23 = FUN_0c07ebd0(a4);
    if (t23 != 0) {
        (((struct o3850_uint *)(a4))->v) = (unsigned short)((*(short *)((0xC5413E8 + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x2F8)))) + (FUN_0c07eaf4(a4)));
        FUN_0c080364(a4, ((((struct o3850_int *)(a4))->v)));
        if (((unsigned short)((((struct o430_short *)(a4))->v)) & 0x3C00) != 0) {
            *(unsigned short *)((a4 + 0x1C)) = 0xA;
        }
        math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
        t65 = 0x20;
        if (((((struct o20_short *)(a4))->v)) == 0) {
            t65 = 0x8C;
            if (((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v)) > ((((struct o8_float *)0xC06D124)->v))) {
                FUN_0c15360e(a4);
                FUN_0c059fae((*(signed char *)((a4 + 0x1))), 0x2, ((((struct o22_short *)(a4))->v)));
                (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) ^ 0x1);
                (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) + 0x1);
                t65 = 0x20;
            }
        }
    } else {
        *(unsigned int *)((a4 + 0x38)) = ((((struct o3850_int *)(a4))->v));
        FUN_0c085cac(a4, 0x0, 0x0);
        u62 = (((struct o0_float *)0xC06D124)->v);
        t63 = (((struct o118_int *)(a4))->v);
        (((struct o98_float *)(t63))->v) = u62;
        (((struct o94_float *)(t63))->v) = u62;
        t64 = (((struct o11C_int *)(a4))->v);
        (((struct o98_float *)(t64))->v) = u62;
        (((struct o94_float *)(t64))->v) = u62;
        t65 = 0x94;
    }
    return t65;
}

int FUN_0c162860(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t0 = *(signed char *)(((((a5 << 2) + a5) + 0xC2A2FC8) + 0x1));
    if ((int)t0 <= 0) {
        t1 = FUN_0c037320((*(signed char *)(((((a5 << 2) + a5) + 0xC2A2FC8) + 0x0))), (*(int *)0xC4B40CC));
        t2 = FUN_0c03f444(0x1, 0x0, t1);
        if (t2 != 0) {
            FUN_0c03733c(t2, (*(signed char *)(((((a5 << 2) + a5) + 0xC2A2FC8) + 0x0))), (*(int *)0xC4B40CC));
        }
        t1 = t2;
    } else {
        t2 = FUN_0c03f444(0x1, 0x0, t0);
        if (t2 != 0) {
            if ((int)t0 > 0) {
                t3 = 0x0;
                t4 = 0x0;
                for (;;) {
                    FUN_0c037498((*(int *)((((0xC4 + t2) + t4) + 0x0))), (*(signed char *)(((((a5 << 2) + a5) + 0xC2A2FC8) + 0x2))), (*(signed char *)(((((a5 << 2) + a5) + 0xC2A2FC8) + 0x0))), (*(int *)0xC4B40CC));
                    *(unsigned char *)(((*(int *)((((0xC4 + t2) + t4) + 0x0))) + 0x0)) = 0x1;
                    t3 = (t3 + 0x1);
                    *(unsigned short *)(((*(int *)((((0xC4 + t2) + t4) + 0x0))) + 0x6)) = 0xF;
                    t4 = (t4 + 0x4);
                    if ((int)t3 >= (int)t0) {
                        break;
                    }
                }
            }
        }
        t1 = t2;
    }
    if (t1 != 0) {
        *(unsigned char *)((t1 + 0x1)) = a4;
        (((struct oAC_ushort *)(t1))->v) = 0xF;
        (((struct oA9_uchar *)(t1))->v) = 0x21;
        t0 = (~((int)0x1 << (int)a4));
        if ((int)a4 < 0) {
            t0 = 0xF;
        }
        FUN_0c07e3ae(t1, (*(signed char *)(((((a5 << 2) + a5) + 0xC2A2FC8) + 0x4))));
        FUN_0c064d24(t1, 0x3, (*(signed char *)(((((a5 << 2) + a5) + 0xC2A2FC8) + 0x3))), 0x0, 0x100, (t0), (t0), 0xF0);
    }
    return t1;
}

int FUN_0c067294(int a4, int a5, int a6)
{
    register int t0;
    register int t39;
    register int t1;
    register int t2;
    register int t8;
    register int t9;
    register int t12;
    register float u23;
    register int t10;
    register int t11;
    int t25;
    register int t28;
    int t34;

    t0 = *(signed char *)((a4 + 0x2));
    t39 = t0;
    if (t0 == 14) {
    } else {
        t1 = ((int (*)(int, int, int))(FUN_0c187798))(a4, a5, a6);
        t2 = ((int (*)(void))(FUN_0c187798))();
        FUN_0c03733c(a4, 0x0, (*(int *)(((((*(signed char *)(((0x371A + a4) + 0x0))) << 2) + (0xC4B40DC + (((*(signed char *)((a4 + 0x1))) << 2) << 1))) + 0x0))));
        t8 = ((int (*)(void))(FUN_0c187798))();
        t9 = ((int (*)(void))(FUN_0c187798))();
        t12 = 0x0;
        for (;;) {
            if ((int)t12 >= (int)((((struct o114_int *)(a4))->v))) {
                break;
            }
            t11 = 0x118;
            t11 = (t11 + a4);
            t10 = (*(int *)((((t12 << 2) + t11) + 0x0)));
            t12 = (t12 + 0x1);
            (((struct o88_float *)(t10))->v) = ((*(float *)((((*(signed char *)(((0x371A + a4) + 0x0))) << 2) + ((((*(signed char *)((a4 + 0x2))) << 2) << 1) + 0xC1C59CC)))));
        }
        u23 = *(float *)(((((*(signed char *)(((0x371A + a4) + 0x0))) << 2) + (0xC1C594C + (((*(signed char *)((a4 + 0x2))) << 2) << 1))) + 0x0));
        (((struct o48_float *)(a4))->v) = u23;
        (((struct o44_float *)(a4))->v) = u23;
        (((struct o40_float *)(a4))->v) = u23;
        (((struct o378C_float *)(a4))->v) = u23;
        if (((*(signed char *)((a4 + 0x2))) == 1) && (t25 = *(signed char *)((a4 + 0x371A)), t25 != 0)) {
            t28 = (((((struct oAC_short *)(a4))->v)) | 0x800);
        } else {
            t28 = (((((struct oAC_short *)(a4))->v)) & 0xF7FF);
        }
        (((struct oAC_ushort *)(a4))->v) = t28;
        FUN_0c0676ce((*(signed char *)((a4 + 0x1))));
        FUN_0c0392bc(a4);
        if (((*(signed char *)((a4 + 0x2))) == 7) && (t34 = *(signed char *)((a4 + 0x371A)), t34 != 0)) {
            FUN_0c133aec(a4);
        }
        t39 = (FUN_0c03e6b2((*(signed char *)((a4 + 0x1))), 0x0));
    }
    return t39;
}

int FUN_0c0db21c(int a4, int a5, int a6)
{

    register int R1;
    register int R2;
    register int R3;
    register int R7;
    register int R10;
    register int R12;
    register float F2;
    register float F3;
    register float F4;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    v0_1 = a4;
    v0_3 = a5;
    v0_4 = a6;
    v0_5 = *(signed char *)((v0_1 + 0x14));
    v0_2 = (v0_5);
    v0_0 = (v0_1);
    if ((v0_5 == 0)) goto L_C0DB254;
    if ((v0_2 == 1)) goto L_C0DB27A;
    if ((v0_2 == 2)) goto L_C0DB286;
    return FUN_0c03f346(v0_0, v0_3, v0_4, R7);
    L_C0DB286:;
    (((struct o28_float *)(v0_0))->v) = (((((struct o28_float *)(v0_0))->v)) + ((((struct o4C_float *)(v0_0))->v)));
    (((struct o2C_float *)(v0_0))->v) = (((((struct o2C_float *)(v0_0))->v)) + ((((struct o50_float *)(v0_0))->v)));
    (((struct o30_float *)(v0_0))->v) = (((((struct o30_float *)(v0_0))->v)) + ((((struct o54_float *)(v0_0))->v)));
    (((struct o4C_float *)(v0_0))->v) = (((((struct o4C_float *)(v0_0))->v)) + ((((struct o58_float *)(v0_0))->v)));
    (((struct o50_float *)(v0_0))->v) = (((((struct o50_float *)(v0_0))->v)) + ((((struct o5C_float *)(v0_0))->v)));
    (((struct o54_float *)(v0_0))->v) = (((((struct o54_float *)(v0_0))->v)) + ((((struct o60_float *)(v0_0))->v)));
    *(unsigned int *)((v0_0 + 0x34)) = ((*(int *)((v0_0 + 0x34))) + ((((struct o0_int *)0xC287DA0)->v)));
    *(unsigned int *)((v0_0 + 0x38)) = ((*(int *)((v0_0 + 0x38))) + ((((struct o4_int *)0xC287DA0)->v)));
    *(unsigned int *)((v0_0 + 0x3C)) = ((*(int *)((v0_0 + 0x3C))) + ((((struct o8_int *)0xC287DA0)->v)));
    v0_3 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_3 - 1);
    v0_2 = ((short)(v0_3 - 1));
    v0_1 = (0xC287DA0);
    if (((short)(v0_3 - 1) != 0)) goto L_C0DB34C;
    FUN_0c0dade0(v0_0, 0x0);
    thunk_FUN_0c05abb2(0x50, 0x0);
    v0_1 = *(int *)((0xC287DAC + (((int)((int)(FUN_0c179ac0()) % (int)0x5)) << 2)));
    FUN_0c0c2944(v0_1, 0x0, 0x0, (v0_0 + 0x28), 0xFFFFFFFF);
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    v0_2 = (0x14);
    L_C0DB34C:;
    return v0_2;
    L_C0DB27A:;
    *(unsigned short *)((v0_0 + 0x1C)) = 0x3C;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    goto L_C0DB286;
    L_C0DB254:;
    (((struct oA8_uchar *)(v0_0))->v) = 0x1;
    v0_1 = ((int (*)(int, int, int))(FUN_0c187798))(v0_1, v0_3, v0_4);
    v0_1 = ((int (*)(void))(FUN_0c187798))();
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    goto L_C0DB27A;
}

int FUN_0c066a14(int a4, int a5, int a6)
{
    int stk[7];
    register int t0;
    register int t2;
    register int t10;
    register float t11;
    register float t32;
    register float t53;
    register int t3;
    register int t67;

    *(unsigned int *)(((int)stk + 0)) = a4;
    t0 = ((int (*)(int, int, int))(FUN_0c187798))(a4, a5, a6);
    *(volatile int *)(((int)stk + 0));
    t2 = ((int (*)(void))(FUN_0c187798))();
    *(float *)(((int)stk + 4)) = (((((struct o8_float *)(t3))->v)) - ((((struct o8_float *)(a5))->v)));
    *(float *)(((int)stk + 12)) = (((((struct o8_float *)((t3 + 0x8)))->v)) - ((((struct o8_float *)((a5 + 0x8)))->v)));
    *(float *)(((int)stk + 8)) = (((((struct o4_float *)((t3 + 0x8)))->v)) - ((((struct o4_float *)((a5 + 0x8)))->v)));
    t10 = *(signed char *)((a5 + 0x1));
    if (t10 != 0) {
        if (t10 != 1) {
            t67 = t10;
            if (t10 != 2) {
            } else {
                t11 = FUN_0c0e2340((((int)stk + 0) + 0x4));
                if (t11 != 0.0f) {
                    FUN_0c17c4d0((((int)stk + 0) + 0x4));
                    *(float *)(((int)stk + 16)) = ((*(float *)(((int)stk + 4))) * ((((struct o14_float *)(a5))->v)));
                    *(float *)(((int)stk + 24)) = ((*(float *)(((int)stk + 12))) * ((((struct o14_float *)(a5))->v)));
                    *(float *)(((int)stk + 20)) = ((*(float *)(((int)stk + 8))) * ((((struct o18_float *)(a5))->v)));
                }
                t67 = (math_vec3_accumulate((*(int *)(((int)stk + 0))), (((int)stk + 0) + 0x10)));
            }
        } else {
            t32 = FUN_0c0e2340((((int)stk + 0) + 0x4));
            if (t32 != 0.0f) {
                FUN_0c17c4d0((((int)stk + 0) + 0x4));
                *(float *)(((int)stk + 16)) = ((*(float *)(((int)stk + 4))) * ((((struct o14_float *)(a5))->v)));
                *(float *)(((int)stk + 24)) = ((*(float *)(((int)stk + 12))) * ((((struct o1C_float *)(a5))->v)));
                *(float *)(((int)stk + 20)) = ((*(float *)(((int)stk + 8))) * ((((struct o18_float *)(a5))->v)));
            }
            t67 = (math_vec3_accumulate((*(int *)(((int)stk + 0))), (((int)stk + 0) + 0x10)));
        }
    } else {
        t53 = FUN_0c0e2340((((int)stk + 0) + 0x4));
        if (t53 != 0.0f) {
            FUN_0c17c4d0((((int)stk + 0) + 0x4));
            *(float *)(((int)stk + 16)) = ((*(float *)(((int)stk + 4))) * ((((struct o14_float *)(a5))->v)));
            *(float *)(((int)stk + 24)) = ((*(float *)(((int)stk + 12))) * ((((struct o14_float *)(a5))->v)));
            *(float *)(((int)stk + 20)) = ((*(float *)(((int)stk + 8))) * ((((struct o14_float *)(a5))->v)));
        }
        t67 = (math_vec3_accumulate((*(int *)(((int)stk + 0))), (((int)stk + 0) + 0x10)));
    }
    return t67;
}

int FUN_0c0cf03a(int a4)
{

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R6;
    register int R10;
    register int R11;
    register int R12;
    register float F0;
    register float F1;
    register float F2;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register float w0_0;
    v0_3 = a4;
    v0_1 = FUN_0c0c2ce4(v0_3);
    v0_0 = (v0_3);
    v0_3 = (v0_1);
    if ((v0_1 == 0)) goto L_C0CF096;
    if ((v0_3 != 2)) goto L_C0CF088;
    return FUN_0c0c2d56(v0_0, 0x3, (*(signed char *)((v0_0 + 0x1))));
    L_C0CF088:;
    (((struct o50_float *)(v0_0))->v) = 0.0f;
    (((struct o5C_float *)(v0_0))->v) = ((((struct o0_float *)0xC0CF1B0)->v));
    L_C0CF096:;
    (((struct o2C_float *)(v0_0))->v) = (((((struct o2C_float *)(v0_0))->v)) + ((((struct o50_float *)(v0_0))->v)));
    (((struct o50_float *)(v0_0))->v) = (((((struct o50_float *)(v0_0))->v)) + ((((struct o5C_float *)(v0_0))->v)));
    v0_2 = *(int *)0xC542260;
    v0_1 = (0xC5421F8);
    v0_3 = (((v0_2 << 1) + (v0_2 << 2)));
    v0_3 = ((((((struct oC4_int *)(v0_0))->v)) + 0x70));
    w0_0 = ((float)((v0_2 << 1) + (v0_2 << 2)));
    FPUL_ = (((v0_2 << 1) + (v0_2 << 2)));
    if (((int)((v0_2 << 1) + (v0_2 << 2)) >= 0)) goto L_C0CF0D6;
    w0_0 = ((w0_0 + 4.2949673e+09f));
    FPUL_ = (0x4F800000);
    L_C0CF0D6:;
    w0_0 = math_sin_angle16((int)((w0_0 * ((((struct oC_float *)0xC0CF1B0)->v))) / ((((struct o10_float *)0xC0CF1B0)->v))));
    *(float *)((v0_3 + 0x0)) = (w0_0 * ((((struct o18_float *)0xC0CF1B0)->v)));
    *(unsigned int *)((v0_0 + 0x38)) = ((*(int *)((v0_0 + 0x38))) + 0x222);
    v0_2 = ((int)((unsigned int)((((struct o68_int *)(v0_1))->v)) % (unsigned int)0x3C)) != ((int)((int)(FUN_0c179ac0()) % (int)0xA));
    if (v0_2) goto L_C0CF11E;
    FUN_0c152d18((v0_0 + 0x28));
    L_C0CF11E:;
    v0_2 = *(signed char *)((v0_0 + 0x1B));
    v0_3 = (v0_2);
    if ((v0_2 == 1)) goto L_C0CF164;
    v0_3 = (0x41C);
    if (((int)(unsigned char)(*(signed char *)((v0_0 + 0x41C))) >= (int)0xC0)) goto L_C0CF164;
    v0_2 = (((struct o426_short *)(v0_0))->v);
    (((struct o426_ushort *)(v0_0))->v) = (v0_2 + 0x1);
    if (((int)(short)(v0_2 + 0x1) < (int)0x12C)) goto L_C0CF14E;
    FUN_0c0c2d56(v0_0, 0xB, (*(signed char *)((v0_0 + 0x1))));
    L_C0CF14E:;
    v0_3 = (0x426);
    if (((int)((((struct o426_short *)(v0_0))->v)) <= (int)0xB4)) goto L_C0CF164;
    v0_1 = *(signed char *)((v0_1 + 0x68));
    (((struct oA8_uchar *)(v0_0))->v) = (v0_1 & 0x1);
    v0_3 = ((v0_1 & 0x1));
    L_C0CF164:;
    return v0_3;
}


int FUN_0c0918ea(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x1));
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
    t1 = *(int *)(((t0 + 0x118) + 0x4));
    t2 = (((struct o118_int *)(t0))->v);
    (((struct oA0_float *)(t1))->v) = 1.0f;
    (((struct o9C_float *)(t1))->v) = 1.0f;
    (((struct oA0_float *)(t2))->v) = 1.0f;
    (((struct o9C_float *)(t2))->v) = 1.0f;
    t0 = (((struct o3770_int *)(a4))->v);
    t1 = *(int *)(((t0 + 0x118) + 0x4));
    t2 = (((struct o118_int *)(t0))->v);
    (((struct o98_float *)(t1))->v) = 1.0f;
    (((struct o98_float *)(t2))->v) = 1.0f;
    (((struct o94_float *)(t1))->v) = 1.0f;
    (((struct o94_float *)(t2))->v) = 1.0f;
    (((struct o446_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x1;
    (((struct o447_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x1;
    (((struct o445_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x1;
    (((struct o3728_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = (*(signed char *)((a4 + 0x3728)));
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
    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
    *(unsigned short *)((a4 + 0x1C)) = 0x0;
    return 0x0;
}


int FUN_0c09e980(int a4)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x18));
    if (t0 != 0) {
        if (t0 == 1) {
            return t0;
        }
        if (t0 != 2) {
            if (t0 != 3) {
                if (t0 != 4) {
                    return t0;
                }
                t0 = FUN_0c064ee4(a4, 0x2);
                if (t0 != 0) {
                    (((struct o37A4_float *)(a4))->v) = 0.0f;
                } else {
                    FUN_0c070320(a4);
                }
                t0 = FUN_0c037bf6(a4);
                if ((unsigned char)t0 != 0) {
                    FUN_0c085cac(a4, 0xE, 0x0);
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
                    return 0x94;
                }
                return FUN_0c038362(a4);
            }
        } else {
            FUN_0c059df2((*(signed char *)((a4 + 0x1))), 0x1);
            FUN_0c059e60(a4, 0x5);
            (((struct o18_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x18))) + 0x1);
        }
        t0 = FUN_0c064ee4(a4, 0x2);
        if (t0 != 0) {
            (((struct o37A4_float *)(a4))->v) = 0.0f;
        } else {
            FUN_0c070320(a4);
        }
        t0 = FUN_0c037bf6(a4);
        if ((unsigned char)t0 != 0) {
            FUN_0c07e79c(a4, 0xFFFFFFFF, 0x4, 0x2A, 0xFFFFFFFF, 0x4, 0x2A);
            FUN_0c037bf6(a4);
            (((struct o18_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x18))) + 0x1);
            return 0x18;
        }
        return FUN_0c038362(a4);
    }
    FUN_0c037bf6(a4);
    return FUN_0c038362(a4);
}

int FUN_0c0a0f18(int a4)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        FUN_0c037bf6(a4);
        t0 = *(signed char *)((a4 + 0x17));
        if (t0 == 1) {
            if ((int)((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v)) == 0x8E) {
                return FUN_0c059df2((*(signed char *)((a4 + 0x1))), 0xE);
            }
            return 0x8C;
        }
        return t0;
    }
    t0 = *(signed char *)((a4 + 0x17));
    if (t0 != 0) {
        if (t0 != 1) {
            if ((t0 != 2) && (t0 != 3)) {
            } else {
                t0 = *(signed char *)((a4 + 0x1));
                FUN_0c07e79c(a4, t0, 0x6, 0x4, (t0), 0x6, 0x4);
            }
        } else {
            t0 = *(signed char *)((a4 + 0x1));
            FUN_0c07e79c(a4, t0, 0x6, 0x3, (t0), 0x6, 0x3);
            *(unsigned short *)((a4 + 0x1C)) = 0x0;
        }
    } else {
        if ((*(signed char *)((a4 + 0x371C))) == 0) {
            t0 = *(signed char *)((a4 + 0x1));
            t1 = 0x2;
            t2 = (t0);
            t3 = t0;
            t0 = 0x2;
        } else {
            t3 = *(signed char *)((a4 + 0x1));
            t1 = 0x8;
            t2 = (t3);
            t0 = 0x8;
        }
        FUN_0c07e79c(a4, t3, 0x6, t0, t2, 0x6, t1);
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
    FUN_0c037bf6(a4);
    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    return 0x15;
}

int FUN_0c03b800(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t1 = *(signed char *)0xC5429CC;
    t2 = 0xC3C9FE4;
    t3 = 0xC5429C8;
    for (;;) { t0 = *(int *)t2; t2 = (t2 + 4); if ((unsigned int)((0xC3C9FE4 + 1628)) < (unsigned int)t2) break; *(unsigned int *)t3 = t0; t3 = (t3 + 4); }
    (((struct o23_uchar *)0xC5429A9)->v) = t1;
    t0 = 0x0;
    for (;;) {
        t1 = *(signed char *)(((0xC3CA66D + t0) + 0x0));
        t2 = (0xC54237C + t0);
        t0 = (t0 + 0x1);
        *(unsigned char *)((t2 + 0x0)) = t1;
        if ((int)t0 >= (int)0x5) {
            break;
        }
    }
    t0 = 0x0;
    for (;;) {
        t1 = *(int *)(((0xC3CA640 + t0) + 0x0));
        t2 = (0xC54229C + t0);
        t0 = (t0 + 0x4);
        *(unsigned int *)((t2 + 0x0)) = t1;
        if ((unsigned int)t0 >= (unsigned int)0x14) {
            break;
        }
    }
    t0 = 0x0;
    for (;;) {
        t1 = *(signed char *)(((0xC3CA668 + t0) + 0x0));
        t2 = (0xC542267 + t0);
        t0 = (t0 + 0x1);
        *(unsigned char *)((t2 + 0x0)) = t1;
        if ((int)t0 >= (int)0x5) {
            break;
        }
    }
    t0 = 0x0;
    for (;;) {
        t1 = 0x0;
        for (;;) {
            *(unsigned char *)((t1 + (0xC542271 + (t0 << 2)))) = (*(signed char *)((((0xC3CA654 + (t0 << 2)) + t1) + 0x0)));
            t1 = (t1 + 0x1);
            if ((int)t1 >= (int)0x4) {
                break;
            }
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x5) {
            break;
        }
    }
    t0 = 0x0;
    for (;;) {
        t1 = *(signed char *)(((0xC3CA6A1 + t0) + 0x0));
        t2 = (0xC542386 + t0);
        t0 = (t0 + 0x1);
        *(unsigned char *)((t2 + 0x0)) = t1;
        if ((int)t0 >= (int)0x5) {
            break;
        }
    }
    t0 = 0x0;
    for (;;) {
        t1 = *(int *)(((0xC3CA674 + t0) + 0x0));
        t2 = (0xC5422F8 + t0);
        t0 = (t0 + 0x4);
        *(unsigned int *)((t2 + 0x0)) = t1;
        if ((unsigned int)t0 >= (unsigned int)0x14) {
            break;
        }
    }
    t0 = 0x0;
    for (;;) {
        t1 = *(signed char *)(((0xC3CA69C + t0) + 0x0));
        t2 = (0xC5422C4 + t0);
        t0 = (t0 + 0x1);
        *(unsigned char *)((t2 + 0x0)) = t1;
        if ((int)t0 >= (int)0x5) {
            break;
        }
    }
    t0 = 0x0;
    for (;;) {
        t1 = 0x0;
        for (;;) {
            *(unsigned char *)((t1 + (0xC5422CE + (t0 << 2)))) = (*(signed char *)((((0xC3CA688 + (t0 << 2)) + t1) + 0x0)));
            t1 = (t1 + 0x1);
            if ((int)t1 >= (int)0x4) {
                break;
            }
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x5) {
            break;
        }
    }
    (((struct o0_uchar *)0xC5429A9)->v) = (*(signed char *)0xC5429CC);
    (((struct o4_uchar *)0xC5429A9)->v) = (*(signed char *)0xC5429C8);
    (((struct o5_uchar *)0xC5429A9)->v) = (*(signed char *)0xC5429CA);
    t0 = *(signed char *)0xC542B8A;
    (((struct o9_uchar *)0xC5429A9)->v) = t0;
    return t0;
}

int FUN_0c03c210(int a4)
{
    int stk[3];

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R6;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register int v0_9;
    v0_8 = a4;
    *(unsigned int *)(((int)stk + 0)) = (*(int *)0xC3C9FB8);
    *(unsigned int *)(((int)stk + 4)) = 0xC3C9E10;
    v0_9 = *(signed char *)0xC3C9FCE;
    v0_4 = (v0_9);
    v0_3 = (0x34);
    v0_5 = (0xC3C9FB8);
    v0_6 = (0xC3C9FB4);
    v0_0 = (0xC3C9FCE);
    v0_1 = (0xC3C9FB0);
    v0_2 = (0x1);
    v0_7 = (0xC3C9E10);
    if ((v0_9 == 0)) goto L_C03C250;
    if ((v0_4 == 1)) goto L_C03C262;
    if ((v0_4 == 2)) goto L_C03C2A0;
    if ((v0_4 == 3)) goto L_C03C2D2;
    if ((v0_4 == 4)) goto L_C03C300;
    L_C03C32A:;
    v0_4 = (0xFFFFFFFF);
    L_C03C32C:;
    return v0_4;
    L_C03C300:;
    if (((*(int *)((v0_1 + 0x0))) != 0)) goto L_C03C32A;
    FUN_0c03bd76();
    FUN_0c03a6c4();
    vmu_lcd_refresh((*(int *)((v0_5 + 0x0))));
    *(unsigned char *)((v0_0 + 0x0)) = 0x0;
    *(unsigned int *)0xC4B1078 = 0x0;
    v0_4 = ((*(int *)(((((*(int *)((v0_5 + 0x0))) * v0_3) + v0_7) + 0x8))));
    goto L_C03C32C;
    L_C03C2D2:;
    if (((*(int *)((v0_1 + 0x0))) != 0)) goto L_C03C32A;
    v0_4 = *(int *)((v0_6 + 0x0));
    v0_5 = (v0_4);
    if ((v0_4 != (*(int *)(((int)stk + 0))))) goto L_C03C2FA;
    v0_3 = vmu_load_vmgame_data((*(int *)((((v0_5 * v0_3) + (*(int *)(((int)stk + 4)))) + 0x0))));
    v0_4 = (v0_3);
    if ((v0_3 == 0)) goto L_C03C2F8;
    if ((v0_4 == -1)) goto L_C03C32A;
    goto L_C03C32A;
    L_C03C2F8:;
    *(unsigned int *)((v0_1 + 0x0)) = v0_2;
    L_C03C2FA:;
    *(unsigned char *)((v0_0 + 0x0)) = 0x4;
    goto L_C03C32A;
    L_C03C2A0:;
    if (((*(int *)((v0_1 + 0x0))) != 0)) goto L_C03C32A;
    v0_4 = *(int *)(((int)stk + 0));
    v0_5 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 8)) = ((v0_4 * v0_3) + v0_5);
    v0_3 = (buMountDisk((*(int *)(((*(int *)(((int)stk + 8))) + 0x0))), 0xC3CC820, ((((*(int *)((((v0_4 * v0_3) + v0_5) + 0xC))) << 8) << 1) + 0x20))) != 0;
    if (v0_3) goto L_C03C32A;
    *(unsigned int *)((v0_1 + 0x0)) = v0_2;
    L_C03C2CC:;
    *(unsigned char *)((v0_0 + 0x0)) = 0x3;
    goto L_C03C32A;
    L_C03C262:;
    if (((*(int *)((v0_6 + 0x0))) == (*(int *)((v0_5 + 0x0))))) goto L_C03C2CC;
    if (((*(int *)((v0_6 + 0x0))) == -1)) goto L_C03C29A;
    if (((*(int *)((v0_1 + 0x0))) != 0)) goto L_C03C32A;
    v0_1 = (buUnmount((*(int *)(((((*(int *)((v0_6 + 0x0))) * v0_3) + v0_7) + 0x0))))) != 0;
    if (v0_1) goto L_C03C32A;
    *(unsigned int *)(((((*(int *)((v0_6 + 0x0))) * v0_3) + v0_7) + 0x4)) = 0x12;
    *(unsigned int *)((v0_6 + 0x0)) = 0xFFFFFFFF;
    L_C03C29A:;
    *(unsigned char *)((v0_0 + 0x0)) = 0x2;
    goto L_C03C32A;
    L_C03C250:;
    *(unsigned int *)0xC4B1078 = v0_2;
    *(unsigned int *)((v0_5 + 0x0)) = v0_8;
    FUN_0c03a70a();
    vmu_lcd_refresh((*(int *)((v0_5 + 0x0))));
    *(unsigned char *)((v0_0 + 0x0)) = v0_2;
    goto L_C03C262;
}

int FUN_0c0655dc(int a4, int a5, int a6, int a7, int a8, float f4, float f5)
{
    int stk[5];

    register int R2;
    register int R3;
    register int R8;
    register float F2;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register float w0_0;
    register float w0_1;
    v0_0 = a4;
    v0_1 = a5;
    v0_2 = a6;
    v0_3 = a7;
    w0_0 = f4;
    w0_1 = f5;
    *(unsigned int *)(((int)stk + 4)) = v0_0;
    *(unsigned int *)(((int)stk + 0)) = v0_1;
    *(float *)(((int)stk + 16)) = 0.0f;
    *(float *)(((int)stk + 12)) = 0.0f;
    *(float *)(((int)stk + 8)) = 0.0f;
    v0_7 = *(signed char *)((v0_2 + 0x1));
    v0_4 = (v0_7);
    v0_5 = (v0_2);
    v0_6 = (v0_3);
    if ((v0_7 == 0)) goto L_C06560E;
    if ((v0_4 == 1)) goto L_C06564A;
    if ((v0_4 == 2)) goto L_C065686;
    L_C0656BE:;
    if (((*(float *)(((int)stk + 12))) == 0.0f)) goto L_C0656D0;
    *(unsigned int *)((a8 + 0x0)) = 0x0;
    v0_0 = (0x0);
    L_C0656FC:;
    return v0_0;
    L_C0656D0:;
    if (((*(float *)(((int)stk + 16))) != 0.0f)) goto L_C0656E2;
    *(float *)(((int)stk + 16)) = (*(float *)0xC065774);
    L_C0656E2:;
    v0_0 = math_atan2_angle16(v0_0, v0_1, v0_2, v0_3, (*(float *)(((int)stk + 8))), (*(float *)(((int)stk + 16))));
    *(unsigned int *)((a8 + 0x0)) = v0_0;
    v0_0 = ((FUN_0c0655c0((*(int *)(((int)stk + 4))), v0_0, (*(int *)(((int)stk + 0))))));
    goto L_C0656FC;
    L_C065686:;
    v0_7 = *(signed char *)((v0_6 + 0x1));
    v0_4 = (v0_7);
    if ((v0_7 == 0)) goto L_C065698;
    if ((v0_4 == 1)) goto L_C0656A6;
    if ((v0_4 == 2)) goto L_C0656B4;
    goto L_C0656BE;
    L_C0656B4:;
    FUN_0c06551a(v0_5, v0_6, (((int)stk + 0) + 0x8));
    goto L_C0656BE;
    L_C0656A6:;
    FUN_0c065434(v0_5, v0_6, (((int)stk + 0) + 0x8), w0_0, w0_1);
    goto L_C0656BE;
    L_C065698:;
    FUN_0c065396(v0_5, v0_6, (((int)stk + 0) + 0x8));
    goto L_C0656BE;
    L_C06564A:;
    v0_7 = *(signed char *)((v0_6 + 0x1));
    v0_4 = (v0_7);
    if ((v0_7 == 0)) goto L_C06565C;
    if ((v0_4 == 1)) goto L_C06566A;
    if ((v0_4 == 2)) goto L_C065678;
    goto L_C0656BE;
    L_C065678:;
    FUN_0c0652c4(v0_5, v0_6, (((int)stk + 0) + 0x8), w0_0, w0_1);
    goto L_C0656BE;
    L_C06566A:;
    FUN_0c0651f8(v0_5, v0_6, (((int)stk + 0) + 0x8));
    goto L_C0656BE;
    L_C06565C:;
    FUN_0c06514e(v0_5, v0_6, (((int)stk + 0) + 0x8));
    goto L_C0656BE;
    L_C06560E:;
    v0_7 = *(signed char *)((v0_6 + 0x1));
    v0_4 = (v0_7);
    if ((v0_7 == 0)) goto L_C065620;
    if ((v0_4 == 1)) goto L_C06562E;
    if ((v0_4 == 2)) goto L_C06563C;
    goto L_C0656BE;
    L_C06563C:;
    FUN_0c0650b0(v0_5, v0_6, (((int)stk + 0) + 0x8));
    goto L_C0656BE;
    L_C06562E:;
    FUN_0c064fd4(v0_5, v0_6, (((int)stk + 0) + 0x8));
    goto L_C0656BE;
    L_C065620:;
    FUN_0c064fba(v0_5, v0_6, (((int)stk + 0) + 0x8));
    goto L_C0656BE;
}

int FUN_0c07aabc(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register float u0;

    if ((*(short *)((a4 + 0x1C))) == 0) {
        t0 = ((int (*)(int, int, int))(FUN_0c07db58))(a4, a5, a6);
        FUN_0c08e382(a4);
        if ((*(signed char *)((a4 + 0x135))) != 2) {
            FUN_0c150be8((a4 + 0x28), (*(int *)((a4 + 0x38))));
        }
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
    }
    t0 = FUN_0c075328(a4);
    if ((signed char)t0 == 0) {
        t1 = FUN_0c0752a8(a4);
        if (t1 != 1) {
            if (t1 != 2) {
                FUN_0c037bf6(a4);
                math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
                return math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
            }
            return FUN_0c07a6aa(a4);
        }
        u0 = (((struct o0_float *)0xC07AC60)->v);
        (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) * u0);
        (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) * u0);
        (((struct o50_float *)(a4))->v) = ((((struct o4_float *)0xC07AC60)->v));
        (((struct o5C_float *)(a4))->v) = ((((struct o8_float *)0xC07AC60)->v));
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x4, 0x34, 0xFFFFFFFF, 0x4, 0x34);
        (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
        FUN_0c05253c(0x3, 0x1, 0x14, 0xA, 0x14, 0x0);
        t1 = ((int (*)(int))(FUN_0c07db58))(a4);
        FUN_0c08e382(a4);
        t1 = *(signed char *)((a4 + 0x135));
        if (t1 != 2) {
            return FUN_0c150be8((a4 + 0x28), (*(int *)((a4 + 0x38))));
        }
        return t1;
    }
    return (signed char)t0;
}

int FUN_0c07d536(int a4)
{
    int t0;

    if ((((((struct o382A_short *)(a4))->v)) == 0) && (t0 = *(signed char *)((a4 + 0x3743)), t0 == 0)) {
        if ((*(signed char *)((a4 + 0x371E))) != (*(signed char *)((a4 + 0x371F)))) {
            (((struct o371E_uchar *)(a4))->v) = (*(signed char *)((a4 + 0x371F)));
            return FUN_0c0676ce((*(signed char *)((a4 + 0x1))));
        }
        return 0x371F;
    }
    t0 = *(signed char *)((a4 + 0x3743));
    if ((unsigned char)t0 != 32) {
        if ((unsigned char)t0 != 64) {
            if ((unsigned char)t0 != 96) {
                if ((unsigned char)t0 != 0x80) {
                    if ((unsigned char)t0 != 0xA0) {
                        if ((unsigned char)t0 != 0xC0) {
                        } else {
                            (((struct o371E_uchar *)(a4))->v) = (*(signed char *)((a4 + 0x371F)));
                            if ((unsigned int)((int)((unsigned int)(*(int *)0xC542260) % (unsigned int)0x2D)) > (unsigned int)0x1E) {
                                if (((int)((unsigned int)(*(int *)0xC542260) % (unsigned int)0x3)) != 0) {
                                    (((struct o371E_uchar *)(a4))->v) = 0xA;
                                }
                            }
                            FUN_0c0676ce((*(signed char *)((a4 + 0x1))));
                        }
                    } else {
                        (((struct o371E_uchar *)(a4))->v) = 0x6;
                        FUN_0c0676ce((*(signed char *)((a4 + 0x1))));
                    }
                } else {
                    (((struct o371E_uchar *)(a4))->v) = 0x5;
                    FUN_0c0676ce((*(signed char *)((a4 + 0x1))));
                }
            } else {
                t0 = *(int *)0xC542260;
                if (((unsigned int)(t0 & 0x6) >> 1) != 0) {
                    if (((unsigned int)(t0 & 0x6) >> 1) != 1) {
                        if (((unsigned int)(t0 & 0x6) >> 1) != 2) {
                            if (((unsigned int)(t0 & 0x6) >> 1) != 3) {
                            } else {
                                (((struct o371E_uchar *)(a4))->v) = (*(signed char *)((a4 + 0x371F)));
                            }
                        } else {
                            (((struct o371E_uchar *)(a4))->v) = 0x8;
                        }
                    } else {
                        (((struct o371E_uchar *)(a4))->v) = (*(signed char *)((a4 + 0x371F)));
                    }
                } else {
                    (((struct o371E_uchar *)(a4))->v) = 0x7;
                }
                FUN_0c0676ce((*(signed char *)((a4 + 0x1))));
            }
        } else {
            (((struct o371E_uchar *)(a4))->v) = 0x4;
            FUN_0c0676ce((*(signed char *)((a4 + 0x1))));
        }
    } else {
        (((struct o371E_uchar *)(a4))->v) = 0x9;
        FUN_0c0676ce((*(signed char *)((a4 + 0x1))));
    }
    t0 = (((struct o382A_short *)(a4))->v);
    (((struct o382A_ushort *)(a4))->v) = (t0 - 1);
    if ((int)(short)(t0 - 1) <= 0) {
        (((struct o3743_uchar *)(a4))->v) = 0x0;
        (((struct o382A_ushort *)(a4))->v) = 0x0;
    }
    return 0x382A;
}


int FUN_0c13022a(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;

    if ((*(signed char *)((a4 + 0x14))) == 0) {
        if ((*(signed char *)((a4 + 0x15))) == 0) {
            if (((*(signed char *)((a4 + 0x131))) == 0) && (t0 = (((struct o404_int *)(a4))->v), t0 == 0)) {
                t0 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
                if ((int)(short)(t0 + 0x1) >= (int)0xA) {
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                }
                math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
                t0 = (((struct oC4_int *)(a4))->v);
                (((struct o78_uint *)(t0))->v) = (((((struct o78_int *)(t0))->v)) + 0x1555);
                t0 = 0x78;
            } else {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                t0 = 0x15;
            }
            t1 = t0;
        } else {
            t0 = ((*(int *)((a4 + 0x38))) + 0x8000);
            t2 = 0x0;
            for (;;) {
                t0 = (t0 + 0x2000);
                t3 = ((~(((~t2) + 0x1) & 0x1)) + 0x1);
                if ((int)t2 >= 0) {
                    t3 = (t2 & 0x1);
                }
                FUN_0c13009a(a4, t0, t3);
                t2 = (t2 + 0x1);
                if ((int)t2 >= (int)0x7) {
                    break;
                }
            }
            FUN_0c059e60((*(int *)((a4 + 0x10))), 0x21);
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t1 = 0x14;
        }
        return t1;
    }
    t0 = *(short *)((a4 + 0x1C));
    t1 = ((~(((~t0) + 0x1) & 0x1)) + 0x1);
    if ((int)t0 >= 0) {
        t1 = (t0 & 0x1);
    }
    (((struct oA8_uchar *)(a4))->v) = t1;
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
    if ((int)(short)(t0 + 0x1) >= (int)0x14) {
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    return (short)(t0 + 0x1);
}

int FUN_0c15acfe(int a4, int a5, int a6, int a7)
{
    int stk[13];
    register int t2;
    register int t7;
    register float u24;
    register float u26;
    register float u28;

    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(unsigned int *)(((int)stk + 4)) = 0x0;
        *(unsigned int *)(((int)stk + 12)) = 0xC2A2AE4;
        *(unsigned int *)(((int)stk + 8)) = (((int)stk + 4) + 0xC);
        t2 = 0x14;
        for (;;) {
            if ((int)(*(int *)(((int)stk + 4))) >= (int)(*(int *)(((*(int *)(((int)stk + 12))) + 0x0)))) {
                break;
            }
            t7 = (*(int *)(((int)stk + 8)));
            *(int *)((int)stk + 0) = t7;
            t2 = (FUN_0c179ac0());
            if ((int)t2 >= 0) {
                t2 = (t2 & 0xF);
            } else {
                t2 = (~t2);
                t2 = (t2 + 0x1);
                t2 = (t2 & 0xF);
                t2 = (~t2);
                t2 = (t2 + 0x1);
            }
            t2 = (t2 << 8);
            t2 = (t2 << 2);
            t2 = (t2 << 2);
            *(unsigned int *)((t7 + 0x0)) = t2;
            t2 = (FUN_0c179ac0());
            if ((int)t2 >= 0) {
                t2 = (t2 & 0xF);
            } else {
                t2 = (~t2);
                t2 = (t2 + 0x1);
                t2 = (t2 & 0xF);
                t2 = (~t2);
                t2 = (t2 + 0x1);
            }
            t2 = (t2 << 8);
            t2 = (t2 << 2);
            t2 = (t2 << 2);
            *(unsigned int *)((((((int)stk + 4) + 0xC) + 0x4) + 0x0)) = t2;
            t2 = (FUN_0c179ac0());
            if ((int)t2 >= 0) {
                t2 = (t2 & 0xF);
            } else {
                t2 = (~t2);
                t2 = (t2 + 0x1);
                t2 = (t2 & 0xF);
                t2 = (~t2);
                t2 = (t2 + 0x1);
            }
            t2 = (t2 << 8);
            t2 = (t2 << 2);
            t2 = (t2 << 2);
            *(unsigned int *)((((((int)stk + 4) + 0xC) + 0x8) + 0x0)) = t2;
            t2 = 0x24;
            *(float *)((((int)stk + 4) + t2)) = (math_cos_angle16((*(int *)(((*(int *)(((int)stk + 8))) + 0x0)))));
            t2 = 0x28;
            *(float *)((((int)stk + 4) + t2)) = (math_sin_angle16((*(int *)((((((int)stk + 4) + 0xC) + 0x4) + 0x0)))));
            t2 = 0x2C;
            *(float *)((((int)stk + 4) + t2)) = (math_sin_angle16((*(int *)((((((int)stk + 4) + 0xC) + 0x8) + 0x0)))));
            t2 = 0x24;
            u24 = *(float *)((((int)stk + 4) + t2));
            t2 = 0x24;
            *(float *)((((int)stk + 4) + t2)) = (u24 * ((((struct o0_float *)0xC2A2B00)->v)));
            t2 = 0x28;
            u26 = *(float *)((((int)stk + 4) + t2));
            t2 = 0x28;
            *(float *)((((int)stk + 4) + t2)) = (u26 * ((((struct o0_float *)0xC2A2B00)->v)));
            t2 = 0x2C;
            u28 = *(float *)((((int)stk + 4) + t2));
            t2 = 0x2C;
            *(float *)((((int)stk + 4) + t2)) = (u28 * ((((struct o0_float *)0xC2A2B00)->v)));
            t2 = 0x18;
            *(float *)((((int)stk + 4) + t2)) = ((((struct o4_float *)0xC2A2B00)->v));
            t2 = 0x1C;
            *(float *)((((int)stk + 4) + t2)) = ((((struct o4_float *)0xC2A2B00)->v));
            t2 = 0x20;
            *(float *)((((int)stk + 4) + t2)) = ((((struct o4_float *)0xC2A2B00)->v));
            t2 = (FUN_0c15acb0((a4 + 0x28), (((int)stk + 4) + 0x24), (((int)stk + 4) + 0x18)));
            *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x1);
        }
    }
    return (FUN_0c03f346(a4, a5, a6, a7));
}

int FUN_0c15b91c(int a4, int a5, int a6, int a7)
{
    int stk[6];
    register int t0;
    register int t5;
    register float u21;
    register float u22;
    register float u26;
    register float u27;
    register float u31;
    register float u32;
    register int t42;
    register int t43;
    register int t58;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        t58 = t0;
        if (t0 == 1) {
            t58 = (FUN_0c03f346(a4, a5, a6, a7));
        }
    } else {
        t5 = *(int *)((a4 + 0x10));
        *(volatile signed char *)((t5 + 0x1));
        FUN_0c187798(a4, a5, a6);
        thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532564))) + 0x28), ((int)stk + 0));
        *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) - (*(float *)(((int)stk + 0))));
        *(float *)(((int)stk + 16)) = ((*(float *)(((int)stk + 16))) - (*(float *)(((int)stk + 4))));
        *(float *)(((int)stk + 20)) = ((*(float *)(((int)stk + 20))) - (*(float *)(((int)stk + 8))));
        FUN_0c17c4d0((((int)stk + 0) + 0xC));
        u21 = ((*(float *)(((int)stk + 12))) * ((((struct o378C_float *)(t5))->v)));
        u22 = (*(float *)(((int)stk + 0)));
        u22 = u22 + 100.0f * u21;
        (((struct o28_float *)(a4))->v) = u22;
        u26 = ((*(float *)(((int)stk + 20))) * ((((struct o378C_float *)(t5))->v)));
        u27 = (*(float *)(((int)stk + 8)));
        u27 = u27 + 100.0f * u26;
        (((struct o30_float *)(a4))->v) = u27;
        u31 = ((*(float *)(((int)stk + 16))) * ((((struct o378C_float *)(t5))->v)));
        u32 = (*(float *)(((int)stk + 4)));
        u32 = u32 + 100.0f * u31;
        (((struct o2C_float *)(a4))->v) = u32;
        if (((*(int *)0xC542260) & 7) == 0) {
            FUN_0c14f960((*(signed char *)((a4 + 0x1))), (a4 + 0x28));
        }
        t42 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t42 - 1);
        if ((int)(short)(t42 - 1) <= 0) {
            *(unsigned short *)((a4 + 0x1C)) = 0x5;
            t43 = *(short *)((a4 + 0x1E));
            *(unsigned short *)((a4 + 0x1E)) = (t43 + 0x1);
            if ((int)(short)(t43 + 0x1) > (int)0x3) {
                *(unsigned short *)((a4 + 0x1E)) = 0x0;
            }
        }
        FUN_0c03744a(((((struct oC4_int *)(a4))->v)), (*(short *)((a4 + 0x1E))), 0x13, (*(int *)0xC4B40CC));
        if (((*(signed char *)((t5 + 0x3715))) == 32) && (t58 = *(signed char *)((t5 + 0x3739)), t58 == 11)) {
        } else {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t58 = 0x14;
        }
    }
    return t58;
}

int FUN_0c06eafc(int a4, float f4)
{
    int stk[4];
    register int t19;
    register int t21;
    register int t22;
    register int t27;
    register int t60;
    register int t62;
    register int t89;

    if (((unsigned short)((((struct o42C_short *)(a4))->v)) & 0x2000) != 0) {
        if ((*(signed char *)((a4 + 0x372F))) != 0) {
            if ((*(signed char *)((a4 + 0x3715))) == 35) {
                FUN_0c085256(a4, 0x2);
            }
            (((struct o372F_uchar *)(a4))->v) = 0x0;
        }
        (((struct o50_float *)(a4))->v) = 5.0f;
        t19 = FUN_0c08515a(a4, 0x3);
        *(unsigned int *)(((int)stk + 12)) = t19;
        if (t19 != 0) {
            t21 = FUN_0c0c28f6((*(int *)((t19 + 0x4))), (((int)stk + 0) + 0x8));
            if (t21 != 0) {
                t22 = FUN_0c0c28f6(a4, (((int)stk + 0) + 0x4));
                if (t22 != 0) {
                    t27 = 0x50;
                    if ((*(float *)(((int)stk + 8))) > (*(float *)(((int)stk + 4)))) {
                        (((struct o50_float *)(a4))->v) = 5.0f;
                        t27 = 0x17C;
                    }
                    *(float *)((a4 + t27)) = 0.0f;
                }
            }
        }
        t89 = 0x0;
    } else {
        t89 = 0x0;
        if (((unsigned short)((((struct o42C_short *)(a4))->v)) & 0x1000) != 0) {
            if ((*(signed char *)((a4 + 0x372F))) != 1) {
                if ((*(signed char *)((a4 + 0x3715))) == 35) {
                    FUN_0c085256(a4, 0x2);
                }
                (((struct o372F_uchar *)(a4))->v) = 0x1;
            }
            t60 = FUN_0c08515a(a4, 0x3);
            *(unsigned int *)(((int)stk + 12)) = t60;
            t89 = 0x0;
            if (t60 != 0) {
                t62 = FUN_0c064e70((*(int *)((t60 + 0x4))), ((int)stk + 0));
                t89 = 0x0;
                if (t62 != 0) {
                    if ((((((struct o2C_float *)(a4))->v)) + -11.71f) > (*(float *)(((int)stk + 0)))) {
                        (((struct o50_float *)(a4))->v) = -11.71f;
                        t89 = 0x0;
                    } else {
                        (((struct o2C_float *)(a4))->v) = (((((struct o168_float *)(a4))->v)) + -1.0f);
                        (((struct o17C_float *)(a4))->v) = 1.0f;
                        (((struct o50_float *)(a4))->v) = 0.0f;
                        t89 = 0x1;
                    }
                }
            }
        }
    }
    return t89;
}

int FUN_0c0dc03a(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        t0 = *(signed char *)((a4 + 0x41D));
        if (t0 != 0) {
            if (t0 != 1) {
                if (t0 != 2) {
                    if (t0 != 4) {
                        if (t0 != 5) {
                            t1 = t0;
                            if ((t0 == 7) || ((t0 == 3) || ((t0 == 6) || ((t0 == 9) || ((t0 == 10) || (t0 == 11)))))) {
                                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                                t1 = 0x14;
                            }
                            return t1;
                        }
                        return ((int (*)(int, int, int, int))(0xC0DC028))(a4, a5, a6, a7);
                    }
                    return FUN_0c0dc000(a4);
                }
                return ((int (*)(int, int, int, int))(0xC0DBFF8))(a4, a5, a6, a7);
            }
            return FUN_0c0dbfd0(a4);
        }
        return ((int (*)(int, int, int, int))(0xC0DBFBE))(a4, a5, a6, a7);
    }
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        t1 = t0;
        if (t0 != 1) {
        } else {
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
            t2 = (short)(t0 - 1);
            if ((short)(t0 - 1) == 0) {
                (((struct o12E_ushort *)(a4))->v) = 0x0;
                (((struct oA8_uchar *)(a4))->v) = 0x0;
                (((struct o2C_float *)(a4))->v) = 20.0f;
                (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + 30.0f);
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                (((struct o15_uchar *)(a4))->v) = 0x0;
                t2 = 0x15;
            }
            t1 = t2;
        }
        t0 = t1;
    } else {
        (((struct o41C_uchar *)(a4))->v) = 0xCD;
        (((struct o41D_uchar *)(a4))->v) = 0x2;
        FUN_0c0c212c(a4);
        (((struct o126_uchar *)(a4))->v) = 0x1;
        (((struct o12A_ushort *)(a4))->v) = 0x0;
        *(unsigned short *)(((0x12A + a4) + 0x2)) = 0x0;
        *(unsigned short *)(((0x12A + a4) + 0x4)) = 0x0;
        *(unsigned short *)((a4 + 0x1C)) = 0x1;
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t1 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
        t2 = (short)(t1 - 1);
        if ((short)(t1 - 1) == 0) {
            (((struct o12E_ushort *)(a4))->v) = 0x0;
            (((struct oA8_uchar *)(a4))->v) = 0x0;
            (((struct o2C_float *)(a4))->v) = 20.0f;
            (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + 30.0f);
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            (((struct o15_uchar *)(a4))->v) = 0x0;
            t2 = 0x15;
        }
        t0 = t2;
    }
    return t0;
}

int FUN_0c107ec0(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        if (t0 != 5) {
                            if (t0 != 80) {
                                t1 = t0;
                                if ((t0 == 98) || (t0 == 99)) {
                                    (((struct o14_uchar *)(a4))->v) = 0x50;
                                    t1 = 0x14;
                                }
                                return t1;
                            }
                            (((struct o14_uchar *)(((((struct o0_int *)0xC474B98)->v))))->v) = 0x63;
                            (((struct o0_uint *)0xC474B98)->v) = 0x0;
                            (((struct o0_uint *)0xC473CC0)->v) = 0xFFFFFFFF;
                            (((struct o4_uint *)0xC473CC0)->v) = 0xFFFFFFFF;
                            (((struct o8_uint *)0xC473CC0)->v) = 0xFFFFFFFF;
                            return FUN_0c03f346(a4, 0xC473CC0, 0xFFFFFFFF, a7);
                        }
                        return ((int (*)(int, int, int, int))(0xC107C84))(a4, 0x50, a6, a7);
                    }
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    (((struct o15_uchar *)(a4))->v) = 0x0;
                    return ((int (*)(int, int, int, int))(0xC107C84))(a4, 0x50, a6, a7);
                }
                t0 = (((struct o2C_int *)0xC473CC0)->v);
                if (t0 != 0) {
                    if (t0 != 1) {
                        if (t0 != 2) {
                            return t0;
                        }
                        return ((int (*)(int, int, int, int))(0xC10740C))(a4, 0x50, a6, a7);
                    }
                    return ((int (*)(int, int, int, int))(0xC107654))(a4, 0x50, a6, a7);
                }
                return ((int (*)(int, int, int, int))(0xC107A38))(a4, 0x50, a6, a7);
            }
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            (((struct o15_uchar *)(a4))->v) = 0x0;
            FUN_0c117944(0xFFFFFFFF);
            t0 = FUN_0c117d14();
            (((struct o0_uint *)0xC474B98)->v) = t0;
            return t0;
        }
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
        t1 = (short)(t0 + 0x1);
        if ((int)(short)(t0 + 0x1) > (int)0x2BC) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t1 = 0x14;
        }
        return t1;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    *(unsigned short *)((a4 + 0x1C)) = 0x0;
    FUN_0c05b052(0x28, 0x1);
    (((struct o41C_uchar *)(a4))->v) = 0x0;
    (((struct o14_uchar *)(((((struct o14_int *)0xC474B98)->v))))->v) = 0xA;
    return 0x14;
}

int FUN_0c13f4a0(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 == 3) {
                    return FUN_0c03f346(a4, 0xA, a6, a7);
                }
                return t0;
            }
            t0 = (((struct oC4_int *)(a4))->v);
            u0 = (((struct o8C_float *)(t0))->v);
            (((struct o8C_float *)(t0))->v) = (u0 + 0.0500000007f);
            (((struct o88_float *)(t0))->v) = (u0 + 0.0500000007f);
            (((struct o84_float *)(t0))->v) = (u0 + 0.0500000007f);
            t0 = (((struct oC4_int *)(a4))->v);
            u0 = (((struct o20_float *)(t0))->v);
            (((struct o20_float *)(t0))->v) = (u0 - 0.100000001f);
            (((struct o1C_float *)(t0))->v) = (u0 - 0.100000001f);
            (((struct o18_float *)(t0))->v) = (u0 - 0.100000001f);
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
            t1 = (short)(t0 - 1);
            if ((short)(t0 - 1) == 0) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t1 = 0x14;
            }
            return t1;
        }
    } else {
        *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x1F;
        (((struct o84_float *)(((((struct oC4_int *)(a4))->v))))->v) = 0.0f;
        (((struct o88_float *)(((((struct oC4_int *)(a4))->v))))->v) = 0.0f;
        (((struct o8C_float *)(((((struct oC4_int *)(a4))->v))))->v) = 0.0f;
        *(unsigned short *)((a4 + 0x1C)) = 0xA;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    t0 = (((struct oC4_int *)(a4))->v);
    u0 = (((struct o8C_float *)(t0))->v);
    (((struct o8C_float *)(t0))->v) = (u0 + 0.0500000007f);
    (((struct o88_float *)(t0))->v) = (u0 + 0.0500000007f);
    (((struct o84_float *)(t0))->v) = (u0 + 0.0500000007f);
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    t1 = (short)(t0 - 1);
    if ((short)(t0 - 1) == 0) {
        *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x21F;
        (((struct o18_float *)(((((struct oC4_int *)(a4))->v))))->v) = 1.0f;
        (((struct o1C_float *)(((((struct oC4_int *)(a4))->v))))->v) = 1.0f;
        (((struct o20_float *)(((((struct oC4_int *)(a4))->v))))->v) = 1.0f;
        *(unsigned short *)((a4 + 0x1C)) = 0xA;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t1 = 0x14;
    }
    return t1;
}

int FUN_0c030110(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    u0 = math_signed_sqrt((float)(((short)a5 * (short)a5) + ((short)a6 * (short)a6)));
    *(unsigned short *)((a4 + 0xE)) = (int)u0;
    if ((int)(unsigned short)(int)u0 <= (int)0xF) {
        *(unsigned short *)((a4 + 0xE)) = 0x0;
        t0 = 0x0;
    } else {
        u0 = (float)(short)a5;
        if ((float)(short)a5 == 0.0f) {
            u0 = 9.99999997e-07f;
        }
        *(unsigned short *)((a4 + 0xC)) = ((math_atan_angle16(((-(float)(short)a6) / u0))) & 0xFFFF);
        if (0.0f > u0) {
            *(unsigned short *)((a4 + 0xC)) = ((*(short *)((a4 + 0xC))) + 0x8000);
        }
        *(unsigned short *)((a4 + 0xC)) = ((*(short *)((a4 + 0xC))) + 0x4000);
        if ((*(short *)((a4 + 0xC))) == 0) {
            *(unsigned short *)((a4 + 0xC)) = 0x1;
        }
        t1 = (int)((int)((unsigned short)(*(short *)((a4 + 0xC))) + 0x1000) / (int)0x2000);
        t2 = 0x1000;
        if ((t1 & 0x7) != 0) {
            t2 = 0x1400;
            if ((t1 & 0x7) != 1) {
                t2 = 0x400;
                if ((t1 & 0x7) != 2) {
                    t2 = 0x2400;
                    if ((t1 & 0x7) != 3) {
                        t2 = 0x2000;
                        if ((t1 & 0x7) != 4) {
                            t2 = 0x2800;
                            if ((t1 & 0x7) != 5) {
                                t2 = 0x800;
                                if ((t1 & 0x7) != 6) {
                                    t2 = 0x1800;
                                    if ((t1 & 0x7) != 7) {
                                        t2 = 0x0;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) | t2);
        t1 = *(short *)((a4 + 0x10));
        *(unsigned short *)((a4 + 0x10)) = (t1 | t2);
        t0 = (t1 | t2);
    }
    return t0;
}
