/* Straight-line functions with calls and guards (batch gen_nh): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_short { short v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o0_ushort { unsigned short v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_uchar { char p[0x10]; unsigned char v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o11_uchar { char p[0x11]; unsigned char v; };
struct o118_int { char p[0x118]; int v; };
struct o12_uchar { char p[0x12]; unsigned char v; };
struct o128_ushort { char p[0x128]; unsigned short v; };
struct o12E_short { char p[0x12E]; short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o131_uchar { char p[0x131]; unsigned char v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o17C_float { char p[0x17C]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o18_uchar { char p[0x18]; unsigned char v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1B_uchar { char p[0x1B]; unsigned char v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1C_int { char p[0x1C]; int v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o20_int { char p[0x20]; int v; };
struct o20_uchar { char p[0x20]; unsigned char v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o24_float { char p[0x24]; float v; };
struct o26_uchar { char p[0x26]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2C_int { char p[0x2C]; int v; };
struct o2C_uint { char p[0x2C]; unsigned int v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o30_float { char p[0x30]; float v; };
struct o31_uchar { char p[0x31]; unsigned char v; };
struct o32_uchar { char p[0x32]; unsigned char v; };
struct o35_uchar { char p[0x35]; unsigned char v; };
struct o36_uchar { char p[0x36]; unsigned char v; };
struct o3714_uchar { char p[0x3714]; unsigned char v; };
struct o3717_uchar { char p[0x3717]; unsigned char v; };
struct o3718_uchar { char p[0x3718]; unsigned char v; };
struct o3719_uchar { char p[0x3719]; unsigned char v; };
struct o3720_uchar { char p[0x3720]; unsigned char v; };
struct o374B_uchar { char p[0x374B]; unsigned char v; };
struct o376C_int { char p[0x376C]; int v; };
struct o376C_uint { char p[0x376C]; unsigned int v; };
struct o377C_int { char p[0x377C]; int v; };
struct o38_int { char p[0x38]; int v; };
struct o383A_short { char p[0x383A]; short v; };
struct o383A_ushort { char p[0x383A]; unsigned short v; };
struct o383C_short { char p[0x383C]; short v; };
struct o383C_ushort { char p[0x383C]; unsigned short v; };
struct o3850_short { char p[0x3850]; short v; };
struct o3850_uint { char p[0x3850]; unsigned int v; };
struct o3D_uchar { char p[0x3D]; unsigned char v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_float { char p[0x40]; float v; };
struct o41C_uchar { char p[0x41C]; unsigned char v; };
struct o41D_uchar { char p[0x41D]; unsigned char v; };
struct o420_ushort { char p[0x420]; unsigned short v; };
struct o423_uchar { char p[0x423]; unsigned char v; };
struct o424_uchar { char p[0x424]; unsigned char v; };
struct o44_float { char p[0x44]; float v; };
struct o44_uchar { char p[0x44]; unsigned char v; };
struct o446_uchar { char p[0x446]; unsigned char v; };
struct o447_uchar { char p[0x447]; unsigned char v; };
struct o45_uchar { char p[0x45]; unsigned char v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o5_uchar { char p[0x5]; unsigned char v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o54_ushort { char p[0x54]; unsigned short v; };
struct o58_float { char p[0x58]; float v; };
struct o58_int { char p[0x58]; int v; };
struct o58_uint { char p[0x58]; unsigned int v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o618_int { char p[0x618]; int v; };
struct o61C_int { char p[0x61C]; int v; };
struct o61C_uint { char p[0x61C]; unsigned int v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA_ushort { char p[0xA]; unsigned short v; };
struct oA0_float { char p[0xA0]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB_uchar { char p[0xB]; unsigned char v; };
struct oB0_float { char p[0xB0]; float v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC_uchar { char p[0xC]; unsigned char v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oD_uchar { char p[0xD]; unsigned char v; };
struct oD0_int { char p[0xD0]; int v; };
struct oD4_int { char p[0xD4]; int v; };
struct oE_uchar { char p[0xE]; unsigned char v; };
struct oF_uchar { char p[0xF]; unsigned char v; };
int FUN_0c01f6f8(void);
int FUN_0c01fce0(int, int, int, int);
int FUN_0c036606(void);
int FUN_0c036de8(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c037498(int, int, int, int);
int FUN_0c037bf6(int);
int FUN_0c03ea04(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c043010(void);
int FUN_0c0433b0(void);
int FUN_0c056e44(int, int);
int FUN_0c058a6e(int, int, int, int, int, int);
int FUN_0c05ada4(int);
int FUN_0c05c008(void);
int FUN_0c05c052(void);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c067008(int);
int FUN_0c06780e(int);
int FUN_0c06785c(void);
int FUN_0c070320(int);
int FUN_0c07053a(int, int, float);
int FUN_0c07d1fc(int);
int FUN_0c07d774(int);
int FUN_0c07da48(int);
int FUN_0c07e2f4(int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07eaf4(int);
int FUN_0c07ebd0(int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c080320(int, float);
int FUN_0c085204(int, float);
int FUN_0c085cac(int, int, int);
int FUN_0c085d0c(int);
int FUN_0c085eac(int, int);
int FUN_0c0c212c(int);
int FUN_0c0c216e(int);
int FUN_0c0c224c(int, int);
int FUN_0c0c241a(int);
int FUN_0c0c25c4(int);
int FUN_0c0c2aa2(int, int);
int FUN_0c0c2ab6(int, int);
int FUN_0c0e4f8c(int, int, int);
int FUN_0c0e4ffc(int);
int FUN_0c0fd368(int, int, int);
int FUN_0c10019c(int, int, float, float);
int FUN_0c10b6e4(int);
int FUN_0c10eeac(int);
int FUN_0c111680(void);
int FUN_0c113142(void);
int FUN_0c115d96(void);
int FUN_0c1171f0(int);
int FUN_0c1173a0(void);
int FUN_0c1173dc(int, int);
int FUN_0c118412(int);
int FUN_0c118e94(void);
int FUN_0c119c94(void);
int FUN_0c11e19c(void);
int FUN_0c148d64(int, int, int);
int FUN_0c148d80(int);
int FUN_0c149000(int);
int FUN_0c14914c(int);
int FUN_0c1491e4(int);
int FUN_0c1493fe(int);
int FUN_0c14f824(int, int);
int FUN_0c150010(int, float, float, float, float);
int FUN_0c16defa(int, int, int, int, int, int, int);
int FUN_0c1718d4(int, int);
int FUN_0c17193c(int, int);
int FUN_0c172030(int, int, int, int, int, int, int);
int FUN_0c179ac0(void);
int FUN_0c181bb0(void);
int FUN_0c181c30(float);
int FUN_0c186380(void);
int FUN_0c186740(int, int);
int FUN_0c18778c(void);
int FUN_0c187798(void);
float math_cos_angle16(int);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int nlUnitMatrix(void);
int FUN_0c0abcd4(int a4);
int FUN_0c0ba1c4(int a4);
int FUN_0c0ca682(int a4, int a5, int a6, int a7, int a8);
int FUN_0c0ce760(int a4, int a5, int a6, int a7, int a8);
int FUN_0c0cec08(int a4, int a5, int a6, int a7, int a8);
int FUN_0c0d039e(int a4, int a5);
int FUN_0c0d09ec(int a4);
int FUN_0c0fd5b8(int a4);
int FUN_0c100780(int a4);
int FUN_0c1082b8(int a4, int a5, int a6, int a7);
int FUN_0c11fbec(int a4);
int FUN_0c133644(int a4, int a5);
int FUN_0c16a464(int a4, int a5);
int FUN_0c173454(int a4);
void FUN_0c02bbe4(int a4, int a5, int a6, int a7);
int FUN_0c0457a6(void);
int FUN_0c076d1c(int a4);
int FUN_0c08a2d8(int a4);
int FUN_0c08f434(int a4);
int FUN_0c09654c(int a4);
int FUN_0c0aadce(int a4);
int FUN_0c0b825e(int a4);
int FUN_0c0e524e(int a4);
int FUN_0c1000c4(int a4);
int FUN_0c10c616(int a4);
int FUN_0c113a9c(int a4, int a5, int a6, int a7);
int FUN_0c13beec(int a4);
int FUN_0c14947e(int a4, int a5, int a6, int a7);
int FUN_0c04a5c4(int a4, int a5);
int FUN_0c05c084(void);
int FUN_0c07bb70(int a4);
int FUN_0c16e01c(int a4, int a5, int a6, int a7);
int FUN_0c029d84(int a4, int a5, int a6, int a7);
int FUN_0c08c70a(int a4, int a5, int a6, int a7);

int FUN_0c0abcd4(int a4)
{
    register int t0;
    register int t1;

    FUN_0c037bf6(a4);
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    if ((*(signed char *)((a4 + 0x131))) != 0) {
        t0 = FUN_0c07d1fc(a4);
        if (t0 != 0) {
            (((struct o131_uchar *)(a4))->v) = 0x0;
            t0 = *(signed char *)((a4 + 0x1));
            FUN_0c07e79c(a4, t0, 0x0, 0xA, (t0), 0x0, 0xA);
            (((struct o16_uchar *)(a4))->v) = 0x2;
            return 0x16;
        }
    }
    t0 = 0x50;
    if (0.0f > ((((struct o50_float *)(a4))->v))) {
        t1 = FUN_0c07ecc6(a4, 0x0, 0x0);
        t0 = t1;
        if (t1 != 0) {
            t1 = *(signed char *)((a4 + 0x1));
            FUN_0c07e79c(a4, t1, 0x2, 0x11, (t1), 0x2, 0x11);
            (((struct o16_uchar *)(a4))->v) = 0x3;
            t0 = 0x16;
        }
    }
    return t0;
}

int FUN_0c0ba1c4(int a4)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x1));
    FUN_0c07e79c(a4, t0, 0x1, 0x10, (t0), 0x1, 0x10);
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
    FUN_0c080320(a4, 0.800000012f);
    if ((*(signed char *)((a4 + 0x375A))) == 1) {
        (((struct o4C_float *)(a4))->v) = ((math_sin_angle16((*(int *)((a4 + 0x38))))) * 15.0f);
        (((struct o54_float *)(a4))->v) = ((math_cos_angle16((*(int *)((a4 + 0x38))))) * 15.0f);
        (((struct o58_float *)(a4))->v) = ((-((((struct o4C_float *)(a4))->v))) / 20.0f);
        (((struct o60_float *)(a4))->v) = ((-((((struct o54_float *)(a4))->v))) / 20.0f);
        *(unsigned short *)((a4 + 0x1C)) = 0x14;
    } else {
        (((struct o60_float *)(a4))->v) = 0.0f;
        (((struct o58_float *)(a4))->v) = 0.0f;
        (((struct o54_float *)(a4))->v) = 0.0f;
        (((struct o4C_float *)(a4))->v) = 0.0f;
    }
    (((struct o5C_float *)(a4))->v) = 0.0f;
    (((struct o50_float *)(a4))->v) = 0.0f;
    (((struct o3850_uint *)(a4))->v) = 0x1C71;
    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    return 0x15;
}

int FUN_0c0ca682(int a4, int a5, int a6, int a7, int a8)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((((a4 * 0x34) + 0xC2738B8) + 0x1));
    t1 = FUN_0c037320((signed char)t0, (*(int *)0xC4B40D8));
    t2 = t0;
    t0 = t1;
    if ((int)t1 < 0) {
        t2 = 0x0;
        t0 = (FUN_0c037320(0x0, (*(int *)0xC4B40D8)));
    }
    t1 = FUN_0c03f444(0x9, 0x0, t0);
    t0 = 0x0;
    if (t1 != 0) {
        FUN_0c03733c(t1, (signed char)t2, (*(int *)0xC4B40D8));
        *(unsigned int *)((t1 + 0x4)) = 0xC0CA5D8;
        (((struct oAC_ushort *)(t1))->v) = 0x1F;
        (((struct oA9_uchar *)(t1))->v) = 0x40;
        FUN_0c0c25c4(t1);
        (((struct o41D_uchar *)(t1))->v) = 0x0;
        (((struct o41C_uchar *)(t1))->v) = a4;
        (((struct o424_uchar *)(t1))->v) = a5;
        (((struct o1B_uchar *)(t1))->v) = a6;
        FUN_0c0c2ab6(t1, (*(signed char *)(((((unsigned short)(unsigned char)(*(signed char *)((t1 + 0x41C))) * (unsigned short)0x34) + 0xC2738B8) + 0x12))));
        (((struct o420_ushort *)(t1))->v) = (*(short *)(((0xC2738B8 + (a4 * 0x34)) + 0x1A)));
        FUN_0c0c212c(t1);
        FUN_0c187798();
        FUN_0c0c2aa2(t1, a8);
        t0 = t1;
    }
    return t0;
}

int FUN_0c0ce760(int a4, int a5, int a6, int a7, int a8)
{
    int stk[7];
    register int t0;
    register int t2;
    register int t3;
    register int t4;
    register int t27;
    register int t5;

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 8)) = a5;
    *(unsigned int *)(((int)stk + 12)) = a6;
    *(unsigned int *)(((int)stk + 4)) = a7;
    t0 = *(int *)(((int)stk + 0));
    *(unsigned int *)(((int)stk + 16)) = (t0 * 0x34);
    (((struct o18_uchar *)(((int)stk + 0)))->v) = (*(signed char *)((((t0 * 0x34) + 0xC2738B8) + 0x1)));
    t2 = *(signed char *)(((int)stk + 24));
    t3 = *(int *)0xC4B40D8;
    *(unsigned int *)(((int)stk + 20)) = t2;
    t4 = FUN_0c037320(t2, t3);
    t27 = 0x0;
    if ((int)t4 >= 0) {
        t5 = FUN_0c03f444(0x9, 0x0, t4);
        t27 = 0x0;
        if (t5 != 0) {
            FUN_0c03733c(t5, (*(int *)(((int)stk + 20))), (*(int *)0xC4B40D8));
            *(unsigned int *)((t5 + 0x4)) = 0xC0CE6EC;
            (((struct oAC_ushort *)(t5))->v) = 0x1F;
            (((struct oA9_uchar *)(t5))->v) = 0x40;
            FUN_0c0c25c4(t5);
            (((struct o41D_uchar *)(t5))->v) = 0x0;
            (((struct o41C_uchar *)(t5))->v) = (*(int *)(((int)stk + 0)));
            (((struct o424_uchar *)(t5))->v) = (*(int *)(((int)stk + 8)));
            (((struct o1B_uchar *)(t5))->v) = (*(int *)(((int)stk + 12)));
            FUN_0c0c2ab6(t5, (*(signed char *)(((((unsigned short)(unsigned char)(*(signed char *)((t5 + 0x41C))) * (unsigned short)0x34) + 0xC2738B8) + 0x12))));
            (((struct o420_ushort *)(t5))->v) = (*(short *)(((0xC2738B8 + (*(int *)(((int)stk + 16)))) + 0x1A)));
            FUN_0c0c212c(t5);
            *(volatile int *)(((int)stk + 4));
            FUN_0c187798();
            FUN_0c0c2aa2(t5, a8);
            FUN_0c0c241a(t5);
            t27 = t5;
        }
    }
    return t27;
}

int FUN_0c0cec08(int a4, int a5, int a6, int a7, int a8)
{
    int stk[7];
    register int t0;
    register int t2;
    register int t3;
    register int t4;
    register int t28;
    register int t5;

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 8)) = a5;
    *(unsigned int *)(((int)stk + 12)) = a6;
    *(unsigned int *)(((int)stk + 4)) = a7;
    t0 = *(int *)(((int)stk + 0));
    *(unsigned int *)(((int)stk + 16)) = (t0 * 0x34);
    (((struct o18_uchar *)(((int)stk + 0)))->v) = (*(signed char *)((((t0 * 0x34) + 0xC2738B8) + 0x1)));
    t2 = *(signed char *)(((int)stk + 24));
    t3 = *(int *)0xC4B40D8;
    *(unsigned int *)(((int)stk + 20)) = t2;
    t4 = FUN_0c037320(t2, t3);
    t28 = 0x0;
    if ((int)t4 >= 0) {
        t5 = FUN_0c03f444(0x9, 0x0, t4);
        t28 = 0x0;
        if (t5 != 0) {
            FUN_0c03744a(((((struct oC4_int *)(t5))->v)), 0x0, (*(int *)(((int)stk + 20))), (*(int *)0xC4B40D8));
            *(unsigned int *)((t5 + 0x4)) = 0xC0CEB94;
            (((struct oAC_ushort *)(t5))->v) = 0x1F;
            (((struct oA9_uchar *)(t5))->v) = 0x40;
            FUN_0c0c25c4(t5);
            (((struct o41D_uchar *)(t5))->v) = 0x0;
            (((struct o41C_uchar *)(t5))->v) = (*(int *)(((int)stk + 0)));
            (((struct o424_uchar *)(t5))->v) = (*(int *)(((int)stk + 8)));
            (((struct o1B_uchar *)(t5))->v) = (*(int *)(((int)stk + 12)));
            FUN_0c0c2ab6(t5, (*(signed char *)(((((unsigned short)(unsigned char)(*(signed char *)((t5 + 0x41C))) * (unsigned short)0x34) + 0xC2738B8) + 0x12))));
            (((struct o420_ushort *)(t5))->v) = (*(short *)(((0xC2738B8 + (*(int *)(((int)stk + 16)))) + 0x1A)));
            FUN_0c0c212c(t5);
            *(volatile int *)(((int)stk + 4));
            FUN_0c187798();
            FUN_0c0c2aa2(t5, a8);
            FUN_0c0c241a(t5);
            t28 = t5;
        }
    }
    return t28;
}

int FUN_0c0d039e(int a4, int a5)
{

    register int R0;
    register int R1;
    register int R2;
    register int R3;
    register int R11;
    register int R12;
    register int R13;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    v0_1 = a4;
    v0_0 = a5;
    v0_2 = R13;
    v0_3 = R12;
    v0_4 = R11;
    R11 = (0xC0);
    R13 = (0xFFFFFFFF);
    v0_2 = (v0_1);
    v0_3 = (0xC540978);
    v0_4 = (0x0);
    L_C0D046A:;
    if (((int)v0_2 <= (int)v0_0)) goto L_C0D03B2;
    return R0;
    L_C0D03B2:;
    R12 = (v0_4);
    L_C0D0434:;
    v0_1 = (int)R12 < (int)((((struct o61C_int *)(v0_3))->v));
    if (!(v0_1)) goto L_C0D043C;
    v0_5 = (*(int *)((((0x5A0 + v0_3) + (R12 << 2)) + 0x0))) != v0_2;
    v0_1 = ((R12 << 2));
    if (v0_5) goto L_C0D0432;
    v0_5 = (int)R12 >= (int)((((struct o618_int *)(v0_3))->v));
    R0 = (0x618);
    if (v0_5) goto L_C0D040E;
    *(unsigned int *)((v0_3 + R0)) = ((*(int *)((v0_3 + R0))) - 1);
    *(unsigned int *)((((0x5A0 + v0_3) + v0_1) + 0x0)) = (*(int *)(((((((struct o618_int *)(v0_3))->v)) << 2) + (0x5A0 + v0_3))));
    (((struct o61C_uint *)(v0_3))->v) = (((((struct o61C_int *)(v0_3))->v)) - 1);
    *(unsigned int *)(((0x5A0 + v0_3) + (((((struct o618_int *)(v0_3))->v)) << 2))) = (*(int *)((((((((struct o61C_int *)(v0_3))->v)) << 2) + (0x5A0 + v0_3)) + 0x0)));
    goto L_C0D043C;
    L_C0D043C:;
    R12 = (v0_4);
    L_C0D043E:;
    v0_5 = *(signed char *)((((0x62C + v0_3) + R12) + 0x1));
    R0 = (v0_5);
    v0_1 = (((0x62C + v0_3) + R12));
    if ((v0_5 != v0_2)) goto L_C0D0462;
    (((struct o423_uchar *)((*(int *)((v0_1 + 0x4)))))->v) = R13;
    *(unsigned char *)((v0_1 + 0x0)) = v0_4;
    *(unsigned char *)((v0_1 + 0x1)) = R13;
    *(unsigned int *)((v0_1 + 0x4)) = v0_4;
    *(unsigned short *)((v0_1 + 0x8)) = v0_4;
    R0 = (v0_4);
    L_C0D0468:;
    v0_2 = ((v0_2 + 0x1));
    goto L_C0D046A;
    L_C0D0462:;
    v0_1 = (unsigned int)(R12 + 0xC) < (unsigned int)R11;
    R12 = ((R12 + 0xC));
    if (v0_1) goto L_C0D043E;
    goto L_C0D0468;
    L_C0D040E:;
    (((struct o61C_uint *)(v0_3))->v) = (((((struct o61C_int *)(v0_3))->v)) - 1);
    *(unsigned int *)((((0x5A0 + v0_3) + v0_1) + 0x0)) = (*(int *)(((((((struct o61C_int *)(v0_3))->v)) << 2) + (0x5A0 + v0_3))));
    goto L_C0D043C;
    L_C0D0432:;
    R12 = ((R12 + 0x1));
    goto L_C0D0434;
}


int FUN_0c0fd5b8(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(int *)((a4 + 0x10));
    t1 = *(signed char *)((a4 + 0x14));
    if (t1 != 0) {
        if (t1 != 1) {
            return t1;
        }
        if ((*(signed char *)((0xA8 + (*(int *)((a4 + 0x10)))))) == 1) {
            (((struct oA8_uchar *)(a4))->v) = 0x1;
        } else {
            (((struct oA8_uchar *)(a4))->v) = 0x0;
        }
        if ((*(signed char *)(((0x41C + t0) + 0x0))) == 1) {
            (((struct o58_uint *)(a4))->v) = (((((struct o58_int *)(a4))->v)) + 0x1);
        } else {
            (((struct o58_uint *)(a4))->v) = 0x0;
        }
        t1 = FUN_0c05ada4(0x1);
        t2 = (int)((int)t1 / (int)0x64);
        FUN_0c0fd368(a4, ((int)((int)t1 % (int)0x64)), 0x0);
        FUN_0c0fd368(a4, ((int)((int)t2 % (int)0x3C)), 0x1);
        return FUN_0c0fd368(a4, ((int)((int)((int)((int)t2 / (int)0x3C)) % (int)0x3C)), 0x2);
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct oAC_ushort *)(a4))->v) = 0x1F;
    (((struct oA9_uchar *)(a4))->v) = 0x21;
    FUN_0c1171f0(a4);
    (((struct o58_uint *)(a4))->v) = 0x0;
    if ((*(signed char *)((0xA8 + (*(int *)((a4 + 0x10)))))) == 1) {
        (((struct oA8_uchar *)(a4))->v) = 0x1;
    } else {
        (((struct oA8_uchar *)(a4))->v) = 0x0;
    }
    if ((*(signed char *)(((0x41C + t0) + 0x0))) == 1) {
        (((struct o58_uint *)(a4))->v) = (((((struct o58_int *)(a4))->v)) + 0x1);
    } else {
        (((struct o58_uint *)(a4))->v) = 0x0;
    }
    t0 = FUN_0c05ada4(0x1);
    t1 = (int)((int)t0 / (int)0x64);
    FUN_0c0fd368(a4, ((int)((int)t0 % (int)0x64)), 0x0);
    FUN_0c0fd368(a4, ((int)((int)t1 % (int)0x3C)), 0x1);
    return FUN_0c0fd368(a4, ((int)((int)((int)((int)t1 / (int)0x3C)) % (int)0x3C)), 0x2);
}


int FUN_0c1082b8(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 99) {
                return t0;
            }
            return FUN_0c03f346(a4, a5, a6, a7);
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0x1F;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
    }
    *(volatile int *)(((*(int *)((a4 + 0x10))) + 0xC4));
    t0 = ((int (*)(int, int, int))(FUN_0c187798))(a4, a5, a6);
    FUN_0c1171f0(a4);
    if ((*(int *)((0xC473CC0 + ((*(signed char *)((a4 + 0x2))) << 2)))) != -1) {
        t0 = *(int *)((0xC473CC0 + ((*(signed char *)((a4 + 0x2))) << 2)));
        *(volatile int *)0xC4B410C;
        FUN_0c1173dc(((((struct oC4_int *)(a4))->v)), t0);
        *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
        t0 = (((struct oC4_int *)(a4))->v);
        *(unsigned short *)((t0 + 0x6)) = ((*(short *)((t0 + 0x6))) | 0x200);
        *(volatile int *)((a4 + 0xC4));
        *(volatile signed char *)((a4 + 0x2));
        t0 = ((int (*)(void))(FUN_0c187798))();
        *(volatile int *)((a4 + 0xC4));
        FUN_0c18778c();
    } else {
        *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x0;
    }
    t0 = *(signed char *)((0x14 + (*(int *)((a4 + 0x10)))));
    t1 = t0;
    if (t0 == 80) {
        (((struct o14_uchar *)(a4))->v) = 0x63;
        t1 = 0x14;
    }
    return t1;
}

int FUN_0c11fbec(int a4)
{
    register int t0;
    register int t1;
    register int t3;
    register int t4;

    t0 = 0x0;
    if ((*(signed char *)0xC542264) != 0) {
        t1 = *(int *)0xC475204;
        t0 = 0x7;
        if ((unsigned int)t1 <= (unsigned int)0x7080) {
        } else {
            t3 = 0x6;
            if ((unsigned int)t1 <= (unsigned int)0x7E90) {
            } else {
                t4 = 0x5;
                if ((unsigned int)t1 <= (unsigned int)0x8CA0) {
                } else {
                    t4 = 0x4;
                    if ((unsigned int)t1 <= (unsigned int)0x9AB0) {
                    } else {
                        t4 = 0x3;
                        if ((unsigned int)t1 <= (unsigned int)0xA8C0) {
                        } else {
                            t4 = 0x2;
                            if ((unsigned int)t1 <= (unsigned int)0xB6D0) {
                            } else {
                                t4 = 0x0;
                                if ((unsigned int)t1 <= (unsigned int)0xC4E0) {
                                    t4 = 0x1;
                                }
                            }
                        }
                    }
                }
                t3 = t4;
            }
            t0 = t3;
        }
        t1 = *(signed char *)((((0xC1C71E0 + (((*(signed char *)0xC5429AD) << 2) << 1)) + t0) + 0x0));
        t0 = 0x0;
        if ((int)(unsigned char)t1 > 0) {
            t3 = FUN_0c179ac0();
            t4 = ((~(((~t3) + 0x1) & 0x7)) + 0x1);
            if ((int)t3 >= 0) {
                t4 = (t3 & 0x7);
            }
            t0 = ((unsigned char)(*(signed char *)(((0xC1C7220 + (((unsigned char)t1 << 2) << 1)) + t4))) + 0x1);
        }
    }
    return t0;
}

int FUN_0c133644(int a4, int a5)
{
    int stk[5];
    register int t0;
    register int t13;

    *(unsigned char *)(((int)stk + 16)) = a5;
    t0 = FUN_0c03f444(0x1, 0x0, 0x1);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned int *)((t0 + 0x4)) = 0xC1333CC;
        FUN_0c187798();
        FUN_0c187798();
        (((struct o48_float *)(t0))->v) = 0.100000001f;
        (((struct o44_float *)(t0))->v) = 0.100000001f;
        (((struct o40_float *)(t0))->v) = 0.100000001f;
        *(unsigned int *)((t0 + 0x10)) = a4;
        *(unsigned char *)((t0 + 0x2)) = (*(signed char *)(((int)stk + 16)));
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0x1F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        FUN_0c037498(((((struct oC4_int *)(t0))->v)), 0x0, 0x1, (*(int *)((((*(signed char *)((t0 + 0x1))) << 2) + 0xC4B40FC))));
        *(unsigned char *)((((((struct oC4_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(t0))->v)) + 0x6)) = 0x3F;
        *(volatile int *)((t0 + 0xC4));
        FUN_0c187798();
        *(int *)((int)stk + 12) = 0xF0;
        *(int *)((int)stk + 8) = 0x0;
        t13 = *(signed char *)((t0 + 0x1));
        *(int *)((int)stk + 4) = (~((int)0x1 << (int)t13));
        *(int *)((int)stk + 0) = 0x100;
        FUN_0c064d24(t0, 0x1, 0x33, 0x0, 0x100, (~((int)0x1 << (int)t13)), 0x0, 0xF0);
        return FUN_0c07e2f4(t0, 0x62);
    }
    return t0;
}

int FUN_0c16a464(int a4, int a5)
{
    int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x2));
    if ((t0 != 0) && (t0 != 1)) {
        t0 = (((struct oC4_int *)(a4))->v);
        t1 = 0x0;
        if (a5 != 0) {
            t1 = 0x1555;
        }
        (((struct o78_uint *)(t0))->v) = t1;
        t0 = (((struct oC8_int *)(a4))->v);
        t1 = 0x0;
        if (a5 != 0) {
            t1 = 0xFFFFEAAB;
        }
        (((struct o78_uint *)(t0))->v) = t1;
        t0 = (((struct oCC_int *)(a4))->v);
        t1 = 0x0;
        if (a5 != 0) {
            t1 = 0xFFFFEAAB;
        }
        (((struct o78_uint *)(t0))->v) = t1;
        t0 = (((struct oD0_int *)(a4))->v);
        t1 = 0x0;
        if (a5 != 0) {
            t1 = 0xFFFFEAAB;
        }
        (((struct o78_uint *)(t0))->v) = t1;
        t0 = (((struct oD4_int *)(a4))->v);
        t1 = 0x0;
        if (a5 != 0) {
            t1 = 0xFFFFEAAB;
        }
        (((struct o78_uint *)(t0))->v) = t1;
    } else {
        t0 = (((struct oC4_int *)(a4))->v);
        t1 = 0x0;
        if (a5 != 0) {
            t1 = 0x1555;
        }
        (((struct o78_uint *)(t0))->v) = t1;
        t0 = (((struct oC8_int *)(a4))->v);
        t1 = 0x0;
        if (a5 != 0) {
            t1 = 0xFFFFEAAB;
        }
        (((struct o78_uint *)(t0))->v) = t1;
        t0 = (((struct oCC_int *)(a4))->v);
        t1 = 0x0;
        if (a5 != 0) {
            t1 = 0xFFFFEAAB;
        }
        (((struct o78_uint *)(t0))->v) = t1;
    }
    return 0x78;
}

int FUN_0c173454(int a4)
{
    register float u0;

    FUN_0c067008(a4);
    FUN_0c1718d4((((short)(signed char)a4 * (short)0x3938) + 0xC532498), a4);
    FUN_0c17193c((((short)(signed char)a4 * (short)0x3938) + 0xC532498), a4);
    (((struct o3D_uchar *)((((short)(signed char)a4 * (short)0x58) + 0xC475DC8)))->v) = 0x0;
    (((struct o45_uchar *)((((short)(signed char)a4 * (short)0x58) + 0xC475DC8)))->v) = 0x0;
    *(unsigned char *)(((((short)(signed char)a4 * (short)0x58) + 0xC475DC8) + 0x1)) = 0x0;
    *(unsigned char *)(((((short)(signed char)a4 * (short)0x58) + 0xC475DC8) + 0x3)) = 0x0;
    (((struct o44_uchar *)((((short)(signed char)a4 * (short)0x58) + 0xC475DC8)))->v) = 0x0;
    *(unsigned char *)(((((short)(signed char)a4 * (short)0x58) + 0xC475DC8) + 0xA)) = 0x0;
    *(unsigned char *)(((((short)(signed char)a4 * (short)0x58) + 0xC475DC8) + 0x9)) = 0x0;
    *(unsigned char *)(((((short)(signed char)a4 * (short)0x58) + 0xC475DC8) + 0x7)) = 0x0;
    *(unsigned char *)(((((short)(signed char)a4 * (short)0x58) + 0xC475DC8) + 0x6)) = 0x0;
    *(unsigned char *)(((((short)(signed char)a4 * (short)0x58) + 0xC475DC8) + 0x4)) = 0x0;
    *(unsigned char *)(((((short)(signed char)a4 * (short)0x58) + 0xC475DC8) + 0x8)) = a4;
    *(unsigned char *)(((((short)(signed char)a4 * (short)0x58) + 0xC475DC8) + 0x5)) = a4;
    *(unsigned int *)(((((short)(signed char)a4 * (short)0x58) + 0xC475DC8) + 0x38)) = 0x0;
    *(unsigned char *)(((((short)(signed char)a4 * (short)0x58) + 0xC475DC8) + 0xB)) = 0x0;
    (((struct o18_float *)((((short)(signed char)a4 * (short)0x58) + 0xC475DC8)))->v) = 1.0f;
    (((struct o1C_float *)((((short)(signed char)a4 * (short)0x58) + 0xC475DC8)))->v) = 1.0f;
    (((struct o11_uchar *)((((short)(signed char)a4 * (short)0x58) + 0xC475DC8)))->v) = 0x0;
    *(unsigned char *)((((((short)(signed char)a4 * (short)0x58) + 0xC475DC8) + 0x12) + 0x5)) = 0x0;
    *(unsigned char *)((((((short)(signed char)a4 * (short)0x58) + 0xC475DC8) + 0x12) + 0x4)) = 0x0;
    *(unsigned char *)((((((short)(signed char)a4 * (short)0x58) + 0xC475DC8) + 0x12) + 0x3)) = 0x0;
    *(unsigned char *)((((((short)(signed char)a4 * (short)0x58) + 0xC475DC8) + 0x12) + 0x2)) = 0x0;
    *(unsigned char *)((((((short)(signed char)a4 * (short)0x58) + 0xC475DC8) + 0x12) + 0x1)) = 0x0;
    (((struct o12_uchar *)((((short)(signed char)a4 * (short)0x58) + 0xC475DC8)))->v) = 0x0;
    u0 = (((struct o28_float *)((((short)(signed char)a4 * (short)0x3938) + 0xC532498)))->v);
    (((struct o20_float *)((((short)(signed char)a4 * (short)0x58) + 0xC475DC8)))->v) = u0;
    u0 = (((struct o2C_float *)((((short)(signed char)a4 * (short)0x3938) + 0xC532498)))->v);
    (((struct o24_float *)((((short)(signed char)a4 * (short)0x58) + 0xC475DC8)))->v) = u0;
    u0 = (((struct o30_float *)((((short)(signed char)a4 * (short)0x3938) + 0xC532498)))->v);
    (((struct o28_float *)((((short)(signed char)a4 * (short)0x58) + 0xC475DC8)))->v) = u0;
    (((struct o54_ushort *)((((short)(signed char)a4 * (short)0x58) + 0xC475DC8)))->v) = 0x0;
    *(unsigned short *)(((((short)(signed char)a4 * (short)0x3938) + 0xC532498) + 0x1C)) = 0x0;
    return (FUN_0c172030(a4, (*(signed char *)(((((short)(signed char)a4 * (short)0x58) + 0xC475DC8) + 0x5))), (*(signed char *)(((((short)(signed char)a4 * (short)0x58) + 0xC475DC8) + 0x6))), (unsigned char)(*(signed char *)(((((short)(signed char)a4 * (short)0x58) + 0xC475DC8) + 0x7))), ((*(signed char *)(((((short)(signed char)a4 * (short)0x58) + 0xC475DC8) + 0x8)))), ((*(signed char *)(((((short)(signed char)a4 * (short)0x58) + 0xC475DC8) + 0x9)))), (unsigned char)(*(signed char *)(((((short)(signed char)a4 * (short)0x58) + 0xC475DC8) + 0xA)))));
}

void FUN_0c02bbe4(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;

    (((struct o10_uchar *)0xC30EF15)->v) = (*(signed char *)0xC30EF24);
    t1 = *(signed char *)0xC30EF15;
    if ((unsigned char)t1 != 0) {
        if ((unsigned char)t1 != 1) {
            if ((unsigned char)t1 != 16) {
            } else {
                (((struct oF_uchar *)0xC30EF15)->v) = 0x1;
                if ((*(signed char *)0xC30985A) == 4) {
                    (((struct o0_uchar *)0xC30EF15)->v) = 0x0;
                    (((struct oF_uchar *)0xC30EF15)->v) = 0x0;
                }
            }
        } else {
            if ((*(signed char *)0xC30A34A) == 0) {
                (((struct o0_uchar *)0xC30EF15)->v) = 0x0;
                (((struct o36_uchar *)0xC30EF15)->v) = 0x0;
                (((struct o35_uchar *)0xC30EF15)->v) = 0x0;
            }
        }
    } else {
        (((struct oD_uchar *)0xC30EF15)->v) = (*(signed char *)0xC30EF20);
        (((struct oE_uchar *)0xC30EF15)->v) = (*(signed char *)0xC30EF21);
        (((struct oB_uchar *)0xC30EF15)->v) = (*(signed char *)0xC30A347);
        (((struct oC_uchar *)0xC30EF15)->v) = (*(signed char *)0xC305416);
        t1 = *(signed char *)0xC30EF23;
        if ((*(signed char *)0xC30EF21) != t1) {
            t2 = *(signed char *)0xC30EF21;
            if ((int)(signed char)t2 < (int)t1) {
                if ((int)(signed char)t2 < (int)(*(signed char *)0xC30EF46)) {
                    (((struct o31_uchar *)0xC30EF15)->v) = t2;
                    (((struct o32_uchar *)0xC30EF15)->v) = ((*(signed char *)0xC30EF47) - 1);
                }
            } else {
                if ((int)(signed char)t2 > (int)(*(signed char *)0xC30EF47)) {
                    (((struct o32_uchar *)0xC30EF15)->v) = t2;
                    (((struct o31_uchar *)0xC30EF15)->v) = ((*(signed char *)0xC30EF46) + 0x1);
                }
            }
        }
        if ((*(signed char *)0xC30A51A) == 0) {
            if (((*(signed char *)0xC30EFA2) == 0) && (t0 = *(signed char *)0xC30985A, (int)t0 > (int)0x4)) {
                t0 = *(signed char *)0xC30A34A;
                if (t0 != 1) {
                    if (t0 != 2) {
                        (((struct o0_uchar *)0xC30EF15)->v) = 0x10;
                    } else {
                        (((struct o36_uchar *)0xC30EF15)->v) = 0x1;
                        (((struct o0_uchar *)0xC30EF15)->v) = 0x1;
                    }
                } else {
                    (((struct o35_uchar *)0xC30EF15)->v) = 0x1;
                    (((struct o0_uchar *)0xC30EF15)->v) = 0x1;
                }
            }
        }
    }
}

int FUN_0c0457a6(void)
{
    int stk[8];
    register int t6;
    register int t7;
    register int t8;
    register int t9;
    register int t5;
    register float u10;
    register int t27;
    register int t28;

    FUN_0c06780e(((unsigned char)(*(signed char *)0xC3BD447) & (*(signed char *)0xC542347)));
    FUN_0c036de8(0x5, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
    FUN_0c06785c();
    t6 = 0xC532498;
    t7 = 0xC532498;
    t8 = 0xC532498;
    t9 = 0xC532498;
    for (;;) {
        if ((*(signed char *)((t8 + 0x3714))) != 0) {
            t7 = 0x17;
            t6 = t9;
            FUN_0c085cac(t6, t7, 0x10);
            t5 = ((((struct oC4_int *)((*(int *)((0xC40DCBC + ((*(signed char *)((t9 + 0x2))) << 2))))))->v));
            u10 = ((((struct o6C_float *)(t5))->v));
            (((struct o28_float *)(t9))->v) = u10;
            t5 = ((((struct oC4_int *)((*(int *)((0xC40DCBC + ((*(signed char *)((t9 + 0x2))) << 2))))))->v));
            u10 = ((((struct o70_float *)(t5))->v));
            (((struct o2C_float *)(t9))->v) = u10;
            t5 = ((((struct oC4_int *)((*(int *)((0xC40DCBC + ((*(signed char *)((t9 + 0x2))) << 2))))))->v));
            u10 = ((((struct o74_float *)(t5))->v));
            (((struct o30_float *)(t9))->v) = u10;
            (((struct o4C_float *)(t9))->v) = 0.0f;
            (((struct o50_float *)(t9))->v) = 0.0f;
            (((struct o54_float *)(t9))->v) = 0.0f;
            (((struct o58_float *)(t9))->v) = 0.0f;
            (((struct o5C_float *)(t9))->v) = 0.0f;
            (((struct o60_float *)(t9))->v) = 0.0f;
        } else {
            t27 = t6;
            t28 = t7;
        }
        t8 = (t8 + 0x3938);
        t6 = t27;
        t7 = t28;
        t9 = (t9 + 0x3938);
        if ((unsigned int)t8 >= (unsigned int)0xC540978) {
            break;
        }
    }
    *(unsigned char *)0xC542235 = 0x0;
    FUN_0c056e44(0x20, 0xB);
    (((struct oA_ushort *)0xC541F42)->v) = 0x5A;
    (((struct o0_uchar *)0xC541F42)->v) = ((*(signed char *)0xC541F42) + 0x1);
    (((struct o1_uchar *)0xC541F42)->v) = 0x0;
    return 0x0;
}

int FUN_0c076d1c(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register float u0;

    t0 = FUN_0c07ebd0(a4);
    t1 = t0;
    if (t0 != 0) {
        t0 = *(short *)((0xC5413E8 + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x2F8)));
        t2 = FUN_0c07eaf4(a4);
        t3 = *(int *)((a4 + 0x38));
        t4 = (unsigned short)((unsigned short)(t0 + t2) - t3);
        if ((0x8000 & (unsigned short)((unsigned short)(t0 + t2) - t3)) != 0) {
            t4 = ((unsigned short)((unsigned short)(t0 + t2) - t3) | 0xFFFF0000);
        }
        if ((int)t4 <= (int)0xFFFFE000) {
            *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) - 0x2000);
        } else {
            if ((int)t4 >= (int)0x2000) {
                *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + 0x2000);
            } else {
                *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + (((int)((unsigned int)((int)((unsigned int)t4 + (unsigned int)0x0)) + ((((int)0x0 > (int)t4)) ? 1u : 0u))) >> 1));
            }
        }
        t0 = *(int *)((a4 + 0x38));
        *(unsigned int *)((a4 + 0x38)) = (t0 & 0xFFFF);
        u0 = *(float *)0xC076EF4;
        (((struct o4C_float *)(a4))->v) = ((math_sin_angle16((t0 & 0xFFFF))) * u0);
        (((struct o54_float *)(a4))->v) = ((math_cos_angle16((*(int *)((a4 + 0x38))))) * u0);
        t1 = 0x54;
    }
    return t1;
}

int FUN_0c08a2d8(int a4)
{
    int stk[7];
    register int t13;
    register int t15;
    register int t16;

    if (((((struct o17C_float *)(a4))->v)) > 0.0f) {
        *(int *)((int)stk + 8) = 0x1C;
        *(int *)((int)stk + 4) = 0x3;
        *(int *)((int)stk + 0) = 0xFFFFFFFF;
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0x1C, 0xFFFFFFFF, 0x3, 0x1C);
        FUN_0c0c224c(a4, ((((struct o376C_int *)(a4))->v)));
        FUN_0c085eac(a4, 0x3);
        (((struct o16_uchar *)(a4))->v) = 0x0;
    } else {
        *(int *)((int)stk + 8) = 0x1D;
        *(int *)((int)stk + 4) = 0x3;
        *(int *)((int)stk + 0) = 0xFFFFFFFF;
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0x1D, 0xFFFFFFFF, 0x3, 0x1D);
        FUN_0c0c224c(a4, ((((struct o376C_int *)(a4))->v)));
        FUN_0c085eac(a4, 0x6);
        (((struct o16_uchar *)(a4))->v) = 0x1;
    }
    (((struct o22_ushort *)(a4))->v) = 0x0;
    t13 = 0x383C;
    if ((int)((((struct o383A_short *)(a4))->v)) > (int)((((struct o383C_short *)(a4))->v))) {
        t13 = 0x383A;
    }
    t15 = *(short *)((a4 + t13));
    if ((int)t15 > (int)0x258) {
        *(unsigned short *)((a4 + 0x1C)) = 0x4;
    } else {
        if ((int)t15 > (int)0x168) {
            *(unsigned short *)((a4 + 0x1C)) = 0x3;
        } else {
            if ((int)t15 > (int)0x78) {
                *(unsigned short *)((a4 + 0x1C)) = 0x2;
            } else {
                t16 = 0x0;
                if ((int)t15 > (int)0x3C) {
                    t16 = 0x1;
                }
                *(unsigned short *)((a4 + 0x1C)) = t16;
            }
        }
    }
    (((struct o383C_ushort *)(a4))->v) = 0x0;
    (((struct o383A_ushort *)(a4))->v) = 0x0;
    return 0x383A;
}

int FUN_0c08f434(int a4)
{
    register int t0;
    register int t1;

    (((struct o374B_uchar *)(a4))->v) = 0x1;
    if ((*(short *)((a4 + 0x1C))) != 0) {
        *(unsigned int *)((a4 + 0x38)) = (unsigned short)((*(int *)((a4 + 0x38))) + ((int)((int)(unsigned short)(((((struct o3850_short *)(a4))->v)) - (*(int *)((a4 + 0x38)))) / (int)(*(short *)((a4 + 0x1C))))));
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
    }
    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 50.0f);
        *(unsigned int *)((a4 + 0x38)) = (FUN_0c07d774(a4));
        FUN_0c07053a(a4, 0x1E, (*(float *)0xC08F58C));
        (((struct o5C_float *)(a4))->v) = 0.0f;
        t0 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t0, 0x2, 0x7, (t0), 0x2, 0x7);
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
        (((struct o446_uchar *)(a4))->v) = 0x1;
        (((struct o447_uchar *)(a4))->v) = 0x1;
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
    }
    return FUN_0c085204(a4, 0.0f);
}

int FUN_0c09654c(int a4)
{
    register int t0;
    register int t1;

    (((struct o374B_uchar *)(a4))->v) = 0x1;
    if ((*(short *)((a4 + 0x1C))) != 0) {
        *(unsigned int *)((a4 + 0x38)) = (unsigned short)((*(int *)((a4 + 0x38))) + ((int)((int)(unsigned short)((FUN_0c07d774(a4)) - (*(int *)((a4 + 0x38)))) / (int)(*(short *)((a4 + 0x1C))))));
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
    }
    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 50.0f);
        *(unsigned int *)((a4 + 0x38)) = (FUN_0c07d774(a4));
        FUN_0c07053a(a4, 0x1E, 30.0f);
        (((struct o5C_float *)(a4))->v) = -1.5f;
        t0 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t0, 0x2, 0x7, (t0), 0x2, 0x7);
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
        (((struct o446_uchar *)(a4))->v) = 0x1;
        (((struct o447_uchar *)(a4))->v) = 0x1;
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
    }
    return FUN_0c085204(a4, 0.0f);
}

int FUN_0c0aadce(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
    } else {
        if ((*(signed char *)((a4 + 0x17))) != 0) {
            t0 = *(signed char *)((a4 + 0x1));
            t1 = 0x0;
            t2 = (t0);
            t3 = t0;
            t0 = 0x0;
        } else {
            t3 = *(signed char *)((a4 + 0x1));
            t1 = 0x1;
            t2 = (t3);
            t0 = 0x1;
        }
        FUN_0c07e79c(a4, t3, 0x6, t0, t2, 0x6, t1);
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
    }
    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        return FUN_0c085d0c(a4);
    }
    return (unsigned char)t0;
}

int FUN_0c0b825e(int a4)
{
    register int t0;
    register int t1;

    (((struct o374B_uchar *)(a4))->v) = 0x1;
    if ((*(short *)((a4 + 0x1C))) != 0) {
        *(unsigned int *)((a4 + 0x38)) = (unsigned short)((*(int *)((a4 + 0x38))) + ((int)((int)(unsigned short)((FUN_0c07d774(a4)) - (*(int *)((a4 + 0x38)))) / (int)(*(short *)((a4 + 0x1C))))));
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
    }
    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        t0 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t0, 0x2, 0xB, (t0), 0x2, 0xB);
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
        (((struct o446_uchar *)(a4))->v) = 0x1;
        (((struct o447_uchar *)(a4))->v) = 0x1;
        *(unsigned int *)((a4 + 0x38)) = (FUN_0c07d774(a4));
        FUN_0c07053a(a4, 0x1E, 30.0f);
        (((struct o5C_float *)(a4))->v) = -1.5f;
        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 50.0f);
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
    }
    return FUN_0c085204(a4, 0.0f);
}

int FUN_0c0e524e(int a4)
{
    int t0;
    register int t1;
    register float u0;

    t1 = *(signed char *)((a4 + 0x1));
    if (((*(signed char *)(((((short)t1 * (short)0x3938) + 0xC532498) + 0x3721))) == (*(signed char *)((a4 + 0x41C)))) && (t0 = *(signed char *)(((((short)t1 * (short)0x3938) + 0xC532498) + 0x3715)), t0 == 42)) {
        t0 = *(signed char *)((a4 + 0x15));
        if (t0 != 0) {
            if (t0 != 1) {
            } else {
                FUN_0c0e4ffc(a4);
                t0 = *(int *)(((((short)t1 * (short)0x3938) + 0xC532498) + 0x38));
                *(unsigned int *)((a4 + 0x38)) = t0;
                u0 = ((((struct o28_float *)((((short)t1 * (short)0x3938) + 0xC532498)))->v));
                u0 = u0 + 79.0f * (math_sin_angle16(t0));
                (((struct o28_float *)(a4))->v) = u0;
                u0 = ((((struct o30_float *)((((short)t1 * (short)0x3938) + 0xC532498)))->v));
                u0 = u0 + 79.0f * (math_cos_angle16((*(int *)((a4 + 0x38)))));
                (((struct o30_float *)(a4))->v) = u0;
                (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)((((short)t1 * (short)0x3938) + 0xC532498)))->v)) + -10.0f);
            }
        } else {
            FUN_0c0e4f8c(a4, 0x5, (*(signed char *)((a4 + 0x1))));
            (((struct o128_ushort *)(a4))->v) = ((int)0x1 << (int)(*(signed char *)((a4 + 0x1))));
            (((struct o12E_ushort *)(a4))->v) = (((((struct o12E_short *)(a4))->v)) & (~(((int)0x1 << (int)(*(signed char *)((a4 + 0x1)))) | 0xF0)));
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            FUN_0c0e4ffc(a4);
            t0 = *(int *)(((((short)t1 * (short)0x3938) + 0xC532498) + 0x38));
            *(unsigned int *)((a4 + 0x38)) = t0;
            u0 = ((((struct o28_float *)((((short)t1 * (short)0x3938) + 0xC532498)))->v));
            u0 = u0 + 79.0f * (math_sin_angle16(t0));
            (((struct o28_float *)(a4))->v) = u0;
            u0 = ((((struct o30_float *)((((short)t1 * (short)0x3938) + 0xC532498)))->v));
            u0 = u0 + 79.0f * (math_cos_angle16((*(int *)((a4 + 0x38)))));
            (((struct o30_float *)(a4))->v) = u0;
            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)((((short)t1 * (short)0x3938) + 0xC532498)))->v)) + -10.0f);
        }
        t0 = FUN_0c0c216e(a4);
        if (t0 != 0) {
            return FUN_0c0e4f8c(a4, 0xA, (*(signed char *)((a4 + 0x1))));
        }
        (((struct o376C_uint *)((((short)t1 * (short)0x3938) + 0xC532498)))->v) = a4;
        return 0x376C;
    }
    return FUN_0c0e4f8c(a4, 0x2, (*(signed char *)((a4 + 0x1))));
}

int FUN_0c1000c4(int a4)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = FUN_0c037320((*(int *)((((((a4 << 2) + a4) << 2) + 0xC1FB6CC) + 0x0))), (*(int *)0xC4B4118));
    t1 = FUN_0c03f444(0x5, 0x0, t0);
    if (t1 != 0) {
        FUN_0c03733c(t1, (*(int *)((((((a4 << 2) + a4) << 2) + 0xC1FB6CC) + 0x0))), (*(int *)0xC4B4118));
        (((struct oA8_uchar *)(t1))->v) = 0x1;
        (((struct oAC_ushort *)(t1))->v) = 0xF;
        (((struct oA9_uchar *)(t1))->v) = 0x80;
        *(unsigned char *)((t1 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t1 + 0x4)) = 0xC100048;
        *(unsigned short *)((t1 + 0x1C)) = a4;
        if ((int)(*(int *)((((((a4 << 2) + a4) << 2) + 0xC1FB6CC) + 0x4))) >= 0) {
            u0 = (((struct o0_float *)0xC10020C)->v);
            t0 = FUN_0c10019c(a4, (*(int *)((((((*(int *)((((((a4 << 2) + a4) << 2) + 0xC1FB6CC) + 0x4))) << 2) << 1) + 0xC1FB6AC) + 0x0))), u0, 1.0f);
            if ((int)(*(int *)((((((*(int *)((((((a4 << 2) + a4) << 2) + 0xC1FB6CC) + 0x4))) << 2) << 1) + 0xC1FB6AC) + 0x4))) >= 0) {
                return FUN_0c10019c(a4, (*(int *)((((((*(int *)((((((a4 << 2) + a4) << 2) + 0xC1FB6CC) + 0x4))) << 2) << 1) + 0xC1FB6AC) + 0x4))), u0, ((((struct o8_float *)0xC10020C)->v)));
            }
            return t0;
        }
        return a4;
    }
    return t1;
}

int FUN_0c10c616(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            *(unsigned char *)0xC535BAC = 0x1;
            (((struct o0_uint *)0xC474B8C)->v) = (FUN_0c118412(0x4));
            (((struct o14_uchar *)(((((struct o1C_int *)0xC474B8C)->v))))->v) = 0x14;
            (((struct o14_uchar *)(((((struct o20_int *)0xC474B8C)->v))))->v) = 0x14;
            (((struct o14_uchar *)(((((struct o2C_int *)0xC474B8C)->v))))->v) = 0x63;
            (((struct o2C_uint *)0xC474B8C)->v) = 0x0;
            (((struct o14_uchar *)(((((struct o4_int *)0xC474B8C)->v))))->v) = 0x63;
            (((struct o4_uint *)0xC474B8C)->v) = 0x0;
            *(unsigned int *)0xC474718 = 0x3;
            (((struct o4_uint *)0xC474B8C)->v) = (FUN_0c1173a0());
            (((struct o14_uchar *)(((((struct o38_int *)0xC474B8C)->v))))->v) = 0x28;
            return FUN_0c10b6e4(a4);
        }
        return t0;
    }
    *(unsigned char *)0xC535BAC = 0x0;
    (((struct o14_uchar *)(((((struct o0_int *)0xC474B8C)->v))))->v) = 0x63;
    (((struct o0_uint *)0xC474B8C)->v) = 0x0;
    (((struct o14_uchar *)(((((struct o1C_int *)0xC474B8C)->v))))->v) = 0x1E;
    (((struct o14_uchar *)(((((struct o20_int *)0xC474B8C)->v))))->v) = 0x1E;
    (((struct o14_uchar *)(((((struct o4_int *)0xC474B8C)->v))))->v) = 0x63;
    (((struct o4_uint *)0xC474B8C)->v) = 0x0;
    *(unsigned int *)0xC474718 = 0x6;
    (((struct o4_uint *)0xC474B8C)->v) = (FUN_0c1173a0());
    (((struct o2C_uint *)0xC474B8C)->v) = (FUN_0c113142());
    (((struct o14_uchar *)(((((struct o38_int *)0xC474B8C)->v))))->v) = 0x32;
    FUN_0c10eeac(a4);
    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
    (((struct o17_uchar *)(a4))->v) = 0x0;
    return 0x17;
}

int FUN_0c113a9c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 99) {
                    return t0;
                }
                return FUN_0c03f346(a4, a5, a6, a7);
            }
            if ((int)(*(short *)((a4 + 0x1C))) <= (int)0x8) {
                FUN_0c058a6e((0xB0 + a4), 0xC2916C0, 0xC2916D0, (*(short *)((a4 + 0x1C))), 0x8, 0x0);
                t0 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
                t1 = (t0 + 0x1);
            } else {
                (((struct o14_uchar *)(a4))->v) = 0x63;
                t1 = 0x14;
            }
            return t1;
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0x61F;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        FUN_0c1171f0(a4);
        FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x10, 0xC, (*(int *)0xC4B410C));
        *(volatile int *)((a4 + 0xC4));
        *(volatile signed char *)((a4 + 0x2));
        FUN_0c187798();
    }
    if ((int)(*(short *)((a4 + 0x1C))) <= (int)0x2) {
        FUN_0c058a6e((0xB0 + a4), 0xC2916D0, 0xC2916C0, (*(short *)((a4 + 0x1C))), 0x2, 0x0);
        t0 = ((*(short *)((a4 + 0x1C))) + 0x1);
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t0 = 0x0;
    }
    *(unsigned short *)((a4 + 0x1C)) = t0;
    return t0;
}

int FUN_0c13beec(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;

    t0 = FUN_0c03f444(0x5, 0x1, 0x8);
    t1 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        FUN_0c187798();
        *(unsigned int *)((t0 + 0x4)) = 0xC13BCA6;
        *(unsigned int *)((t0 + 0x10)) = a4;
        u0 = (((struct o0_float *)0xC13C040)->v);
        (((struct o48_float *)(t0))->v) = u0;
        (((struct o44_float *)(t0))->v) = u0;
        (((struct o40_float *)(t0))->v) = u0;
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        (((struct oAC_ushort *)(t0))->v) = (((((struct oAC_short *)(t0))->v)) | 0x400);
        u0 = (((struct o4_float *)0xC13C040)->v);
        (((struct oB0_float *)(t0))->v) = u0;
        (((struct oAC_ushort *)(t0))->v) = (((((struct oAC_short *)(t0))->v)) | 0x200);
        (((struct oB4_float *)(t0))->v) = 1.0f;
        (((struct oB8_float *)(t0))->v) = 0.0f;
        (((struct oBC_float *)(t0))->v) = u0;
        t2 = 0x0;
        t3 = 0x0;
        for (;;) {
            FUN_0c037498((*(int *)((((0xC4 + t0) + t3) + 0x0))), 0x0, 0x7, (*(int *)0xC4B40CC));
            *(unsigned char *)(((*(int *)((((0xC4 + t0) + t3) + 0x0))) + 0x0)) = 0x1;
            t2 = (t2 + 0x1);
            *(unsigned short *)(((*(int *)((((0xC4 + t0) + t3) + 0x0))) + 0x6)) = 0x31;
            t3 = (t3 + 0x4);
            if ((int)t2 >= (int)0x8) {
                break;
            }
        }
        t1 = 0x31;
    }
    return t1;
}

int FUN_0c14947e(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
    } else {
        if ((*(signed char *)((0xC535BAC + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938)))) == 0) {
            (((struct oA8_uchar *)(a4))->v) = 0x0;
            return 0xA8;
        }
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o15_uchar *)(a4))->v) = 0x0;
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        FUN_0c148d64(a4, 0x3, 0x0);
        (((struct o26_uchar *)(a4))->v) = 0x1;
    }
    FUN_0c148d80(a4);
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        if (t0 != 5) {
                            return t0;
                        }
                        return FUN_0c1493fe(a4);
                    }
                    return FUN_0c1491e4(a4);
                }
                return FUN_0c14914c(a4);
            }
            return ((int (*)(int, int, int, int))(0xC1490BA))(a4, a5, a6, a7);
        }
        return FUN_0c149000(a4);
    }
    return FUN_0c148d64(a4, 0x3, 0x0);
}

int FUN_0c04a5c4(int a4, int a5)
{
    int stk[1];
    register int t0;
    register int t24;
    register int t29;

    *(unsigned char *)0xC3BD447 = 0x0;
    (((struct o5_uchar *)0xC54235E)->v) = 0xFFFFFFFF;
    (((struct o3_uchar *)0xC54235E)->v) = 0x1;
    (((struct o0_uchar *)0xC54235E)->v) = 0x0;
    (((struct o0_uchar *)0xC542235)->v) = 0x1;
    *(unsigned int *)(((int)stk + 0)) = 0x0;
    t0 = 0x0;
    for (;;) {
        (((struct o3714_uchar *)(((t0 * 0x3938) + 0xC532498)))->v) = (*(signed char *)((((t0 << 2) + a4) + 0x0)));
        (((struct o3720_uchar *)(((t0 * 0x3938) + 0xC532498)))->v) = (*(signed char *)((((t0 << 2) + a4) + 0x3)));
        *(unsigned char *)((((t0 * 0x3938) + 0xC532498) + 0x2)) = (*(signed char *)((((t0 << 2) + a4) + 0x1)));
        if ((*(signed char *)((((t0 * 0x3938) + 0xC532498) + 0x2))) == 12) {
            (((struct o5_uchar *)0xC54235E)->v) = t0;
            (((struct o3720_uchar *)(((t0 * 0x3938) + 0xC532498)))->v) = 0x1;
            (((struct o0_uchar *)0xC54235E)->v) = 0x1;
        } else {
            if ((*(signed char *)((((t0 * 0x3938) + 0xC532498) + 0x2))) == 13) {
                (((struct o5_uchar *)0xC54235E)->v) = t0;
                (((struct o3720_uchar *)(((t0 * 0x3938) + 0xC532498)))->v) = 0x1;
                (((struct o0_uchar *)0xC54235E)->v) = 0x2;
            } else {
                if ((*(signed char *)((((t0 << 2) + a4) + 0x0))) != 0) {
                    *(unsigned char *)0xC3BD447 = ((*(signed char *)0xC3BD447) | ((int)0x1 << (int)t0));
                }
            }
        }
        (((struct o3719_uchar *)(((t0 * 0x3938) + 0xC532498)))->v) = (*(signed char *)((((t0 << 2) + a4) + 0x2)));
        t24 = *(signed char *)((((t0 * 0x3938) + 0xC532498) + 0x3714));
        t29 = ((int)0x1 << (int)t0);
        t0 = (t0 + 0x1);
        if (t24 != 0) {
            *(unsigned int *)(((int)stk + 0)) = ((*(int *)(((int)stk + 0))) | t29);
        }
        if ((int)t0 >= (int)0x4) {
            break;
        }
    }
    (((struct o2_uchar *)0xC542235)->v) = a5;
    (((struct o2_uchar *)0xC54235E)->v) = a5;
    return (*(int *)(((int)stk + 0)));
}

int FUN_0c05c084(void)
{

    register int R0;
    register int R1;
    register int R3;
    register int R8;
    register int R12;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    v0_0 = *(signed char *)0xC3BD445;
    v0_1 = (v0_0);
    if (((unsigned char)v0_0 == 0)) goto L_C05C120;
    if (((*(signed char *)0xC542254) != 0)) goto L_C05C120;
    v0_2 = *(signed char *)0xC541F41;
    R0 = ((unsigned char)v0_2);
    v0_0 = (0xC541F3C);
    v0_3 = (0xC541F41);
    if (((unsigned char)v0_2 == 9)) goto L_C05C120;
    if (((*(signed char *)0xC3BD447) == 0)) goto L_C05C0C2;
    v0_2 = *(signed char *)((v0_3 + 0x0));
    R0 = ((unsigned char)v0_2);
    if (((unsigned char)v0_2 == 1)) goto L_C05C120;
    *(unsigned char *)0xC54225C = v0_1;
    R0 = (0x9);
    L_C05C11A:;
    *(unsigned char *)((v0_0 + 0x5)) = R0;
    *(unsigned char *)((v0_0 + 0x6)) = 0x0;
    R0 = (0x0);
    L_C05C120:;
    return R0;
    L_C05C0C2:;
    v0_1 = *(signed char *)0xC5429B4;
    v0_2 = (v0_1);
    if ((v0_1 == 0)) goto L_C05C0D4;
    if ((v0_2 != 4)) goto L_C05C108;
    L_C05C0D4:;
    if (((*(signed char *)0xC5429CF) != 0)) goto L_C05C0E4;
    v0_1 = (FUN_0c05c008()) == 0;
    if (v0_1) goto L_C05C108;
    L_C05C0E4:;
    if (((unsigned char)(*(signed char *)0xC541F41) != 5)) goto L_C05C108;
    if (((*(signed char *)0xC5421F9) != 7)) goto L_C05C108;
    v0_1 = (FUN_0c05c052()) == 0;
    if (v0_1) goto L_C05C108;
    return FUN_0c0433b0();
    L_C05C108:;
    v0_1 = *(signed char *)((v0_0 + 0x5));
    R0 = ((unsigned char)v0_1);
    if (((unsigned char)v0_1 == 1)) goto L_C05C120;
    *(unsigned char *)0xC54225C = (*(signed char *)0xC3BD445);
    R0 = (0x1);
    goto L_C05C11A;
}

int FUN_0c07bb70(int a4)
{
    int stk[2];
    register int t0;
    register int t301;
    register int t137;
    register int t18;
    register int t26;
    register int t33;
    register int t39;
    register int t53;
    register float u59;
    register int t164;
    register int t172;
    register int t179;
    register int t185;
    register int t199;
    register float u205;

    t0 = *(signed char *)0xC541F3D;
    t301 = (unsigned char)t0;
    if ((unsigned char)t0 != 1) {
        if ((*(signed char *)0xC54235E) != 0) {
            t137 = *(signed char *)((a4 + 0x1));
            t301 = t137;
            if (t137 != (*(signed char *)0xC542363)) {
                if ((*(signed char *)0xC542A0E) != 0) {
                    t18 = *(signed char *)0xC5429B4;
                    t137 = t18;
                    if (t18 != 2) {
                        t26 = *(signed char *)0xC5429B4;
                        t137 = t26;
                        if (t26 != 3) {
                            t33 = *(signed char *)0xC541F41;
                            t137 = (unsigned char)t33;
                            if ((unsigned char)t33 == 5) {
                                t39 = *(signed char *)0xC5421F9;
                                t137 = t39;
                                if (t39 == 3) {
                                    t137 = 0x3714;
                                    if ((*(signed char *)((a4 + 0x3714))) != 0) {
                                        t137 = 0xA8;
                                        if ((*(signed char *)((a4 + 0xA8))) != 0) {
                                            t137 = 0x160;
                                            if (((((struct o160_float *)(a4))->v)) > 0.0f) {
                                                t53 = (((struct o377C_int *)(a4))->v);
                                                t137 = 0x377C;
                                                if ((t53 != 0) && (a4 != t53)) {
                                                    nlUnitMatrix();
                                                    FUN_0c181c30(3.0f);
                                                    FUN_0c187798();
                                                    u59 = 10.0f;
                                                    if ((*(signed char *)((a4 + 0x371D))) != 4) {
                                                        u59 = 100.0f;
                                                    }
                                                    *(float *)(((int)stk + 0)) = ((*(float *)(((int)stk + 0))) + u59);
                                                    FUN_0c187798();
                                                    *(volatile int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC2593C4));
                                                    t137 = (FUN_0c181bb0());
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                t301 = t137;
            }
        } else {
            t301 = 0x166;
            if ((*(signed char *)0xC542A0E) != 0) {
                t164 = *(signed char *)0xC5429B4;
                t301 = t164;
                if (t164 != 2) {
                    t172 = *(signed char *)0xC5429B4;
                    t301 = t172;
                    if (t172 != 3) {
                        t179 = *(signed char *)0xC541F41;
                        t301 = (unsigned char)t179;
                        if ((unsigned char)t179 == 5) {
                            t185 = *(signed char *)0xC5421F9;
                            t301 = t185;
                            if (t185 == 3) {
                                t301 = 0x3714;
                                if ((*(signed char *)((a4 + 0x3714))) != 0) {
                                    t301 = 0xA8;
                                    if ((*(signed char *)((a4 + 0xA8))) != 0) {
                                        t301 = 0x160;
                                        if (((((struct o160_float *)(a4))->v)) > 0.0f) {
                                            t199 = (((struct o377C_int *)(a4))->v);
                                            t301 = 0x377C;
                                            if ((t199 != 0) && (a4 != t199)) {
                                                nlUnitMatrix();
                                                FUN_0c181c30(3.0f);
                                                FUN_0c187798();
                                                u205 = 10.0f;
                                                if ((*(signed char *)((a4 + 0x371D))) != 4) {
                                                    u205 = 100.0f;
                                                }
                                                *(float *)(((int)stk + 0)) = ((*(float *)(((int)stk + 0))) + u205);
                                                FUN_0c187798();
                                                *(volatile int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC2593C4));
                                                t301 = (FUN_0c181bb0());
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return t301;
}

int FUN_0c16e01c(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t0;
    register int t5;
    register int t28;
    register int t33;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        t33 = t0;
        if (t0 != 1) {
        } else {
            t33 = (FUN_0c03f346(a4, a5, a6, a7));
        }
    } else {
        t5 = *(short *)((a4 + 0x1E));
        *(unsigned short *)((a4 + 0x1E)) = (t5 - 1);
        if ((short)(t5 - 1) == 0) {
            *(float *)(((int)stk + 0)) = (((((struct o28_float *)(a4))->v)) + (float)(((int)((int)(FUN_0c179ac0()) % (int)0xC8)) - 100));
            *(float *)(((int)stk + 4)) = (((((struct o2C_float *)(a4))->v)) + (float)(((int)((int)(FUN_0c179ac0()) % (int)0xC8)) - 100));
            *(float *)(((int)stk + 8)) = (((((struct o30_float *)(a4))->v)) + (float)(((int)((int)(FUN_0c179ac0()) % (int)0xC8)) - 100));
            FUN_0c16defa(a4, ((int)stk + 0), 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8));
            FUN_0c14f824((*(signed char *)((a4 + 0x1))), ((int)stk + 0));
            FUN_0c150010(((int)stk + 0), 1.0f, 1.0f, 1.0f, 1.0f);
            *(unsigned short *)((a4 + 0x1E)) = (((int)((int)(FUN_0c179ac0()) % (int)0x6)) + 0x3);
        }
        t28 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t28 - 1);
        t33 = (short)(t28 - 1);
        if ((int)(short)(t28 - 1) <= 0) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t33 = 0x14;
        }
    }
    return t33;
}


int FUN_0c08c70a(int a4, int a5, int a6, int a7)
{
    int t0;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        t0 = *(signed char *)((a4 + 0x17));
        if (t0 != 0) {
            if (t0 != 1) {
                return t0;
            }
            return ((int (*)(int, int, int, int))(0xC08C68C))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC08C52C))(a4, a5, a6, a7);
    }
    t0 = FUN_0c07ecc6(a4, 0x0, 0x0);
    if ((t0 != 0) && (t0 != 1)) {
        (((struct o3717_uchar *)(a4))->v) = 0x6;
        (((struct o3718_uchar *)(a4))->v) = 0x0;
        return FUN_0c085cac(a4, 0x6, 0x0);
    }
    FUN_0c07da48(a4);
    FUN_0c070320(a4);
    t0 = *(signed char *)((a4 + 0x17));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            return ((int (*)(int, int, int, int))(0xC08C482))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC08C33E))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC08C1FE))(a4, a5, a6, a7);
}
