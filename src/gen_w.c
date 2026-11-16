/* Straight-line functions with calls and guards (batch gen_w): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o118_int { char p[0x118]; int v; };
struct o11C_int { char p[0x11C]; int v; };
struct o128_ushort { char p[0x128]; unsigned short v; };
struct o12A_short { char p[0x12A]; short v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o130_uchar { char p[0x130]; unsigned char v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o168_float { char p[0x168]; float v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o17C_float { char p[0x17C]; float v; };
struct o18_uchar { char p[0x18]; unsigned char v; };
struct o1A_uchar { char p[0x1A]; unsigned char v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o24_short { char p[0x24]; short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o3715_uchar { char p[0x3715]; unsigned char v; };
struct o371D_uchar { char p[0x371D]; unsigned char v; };
struct o371E_uchar { char p[0x371E]; unsigned char v; };
struct o3721_uchar { char p[0x3721]; unsigned char v; };
struct o3723_uchar { char p[0x3723]; unsigned char v; };
struct o372B_uchar { char p[0x372B]; unsigned char v; };
struct o372D_uchar { char p[0x372D]; unsigned char v; };
struct o372E_uchar { char p[0x372E]; unsigned char v; };
struct o3742_uchar { char p[0x3742]; unsigned char v; };
struct o3743_uchar { char p[0x3743]; unsigned char v; };
struct o3749_uchar { char p[0x3749]; unsigned char v; };
struct o3752_uchar { char p[0x3752]; unsigned char v; };
struct o3756_uchar { char p[0x3756]; unsigned char v; };
struct o3757_uchar { char p[0x3757]; unsigned char v; };
struct o375C_uchar { char p[0x375C]; unsigned char v; };
struct o375D_uchar { char p[0x375D]; unsigned char v; };
struct o376C_int { char p[0x376C]; int v; };
struct o376C_uint { char p[0x376C]; unsigned int v; };
struct o3770_int { char p[0x3770]; int v; };
struct o3774_int { char p[0x3774]; int v; };
struct o377C_int { char p[0x377C]; int v; };
struct o37B0_float { char p[0x37B0]; float v; };
struct o37BC_float { char p[0x37BC]; float v; };
struct o37E8_float { char p[0x37E8]; float v; };
struct o37EC_float { char p[0x37EC]; float v; };
struct o37F0_float { char p[0x37F0]; float v; };
struct o37F4_float { char p[0x37F4]; float v; };
struct o37FC_float { char p[0x37FC]; float v; };
struct o381E_ushort { char p[0x381E]; unsigned short v; };
struct o3820_ushort { char p[0x3820]; unsigned short v; };
struct o382A_ushort { char p[0x382A]; unsigned short v; };
struct o3838_ushort { char p[0x3838]; unsigned short v; };
struct o383E_ushort { char p[0x383E]; unsigned short v; };
struct o3858_uint { char p[0x3858]; unsigned int v; };
struct o385C_uint { char p[0x385C]; unsigned int v; };
struct o3860_uint { char p[0x3860]; unsigned int v; };
struct o3864_int { char p[0x3864]; int v; };
struct o3864_uint { char p[0x3864]; unsigned int v; };
struct o38DD_uchar { char p[0x38DD]; unsigned char v; };
struct o38DE_uchar { char p[0x38DE]; unsigned char v; };
struct o38DF_uchar { char p[0x38DF]; unsigned char v; };
struct o4_float { char p[0x4]; float v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
struct o40_float { char p[0x40]; float v; };
struct o404_int { char p[0x404]; int v; };
struct o404_uint { char p[0x404]; unsigned int v; };
struct o41C_float { char p[0x41C]; float v; };
struct o41C_int { char p[0x41C]; int v; };
struct o41C_uint { char p[0x41C]; unsigned int v; };
struct o42C_short { char p[0x42C]; short v; };
struct o42C_ushort { char p[0x42C]; unsigned short v; };
struct o42E_short { char p[0x42E]; short v; };
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
struct o68_uint { char p[0x68]; unsigned int v; };
struct o7C_int { char p[0x7C]; int v; };
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
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB0_float { char p[0xB0]; float v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oE4_int { char p[0xE4]; int v; };
int FUN_0c0185b4(void);
int FUN_0c02c828(void);
int FUN_0c02c89c(void);
int FUN_0c035ca4(int, int);
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c037498(int, int, int, int);
int FUN_0c037bf6(int);
int FUN_0c039ee6(int);
int FUN_0c03b05a(void);
int FUN_0c03cbfa(void);
int FUN_0c03df6a(int, int, int, int);
int FUN_0c03ea04(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c03ec80(void);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c04a556(void);
int FUN_0c04f148(int, int);
int FUN_0c04f29e(void);
int FUN_0c04f420(void);
int FUN_0c04f5a4(void);
int FUN_0c04fe1c(void);
int FUN_0c0506e8(void);
int FUN_0c0524bc(void);
int FUN_0c0573c0(int, int, int);
int FUN_0c059e60(int, int);
int FUN_0c05f22c(int);
int FUN_0c05ffa4(int, int, int);
int FUN_0c060180(int, int, int, int, int, int, int, int);
int FUN_0c0601da(int, int);
int FUN_0c064d5a(int, int);
int FUN_0c064f80(int);
int FUN_0c0673ea(int);
int FUN_0c0676ce(int);
int FUN_0c06e718(int);
int FUN_0c07c25a(void);
int FUN_0c07d030(int, int);
int FUN_0c07daea(int);
int FUN_0c07e2f4(int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07e868(int, int);
int FUN_0c07eaf4(int);
int FUN_0c07ebd0(int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c080320(int, float);
int FUN_0c085d0c(int);
int FUN_0c085eac(int, int);
int FUN_0c0b21ac(int, int);
int FUN_0c0bc25e(void);
int FUN_0c0c224c(int, int, int, int, int, int, int, int);
int FUN_0c0c2a80(int);
int FUN_0c0c3010(int, int, int);
int FUN_0c0c3e3a(int, int, int);
int FUN_0c0c43c0(int, int);
int FUN_0c0c4770(int);
int FUN_0c0c47a4(int);
int FUN_0c0c4b76(int);
int FUN_0c0c4bcc(int);
int FUN_0c0c52c4(int);
int FUN_0c0c9db8(int);
int FUN_0c0c9e1e(int);
int FUN_0c0d04b4(int);
int FUN_0c0d5188(void);
int FUN_0c0ed5e4(int, int, int);
int FUN_0c10208a(void);
int FUN_0c105cf4(int);
int FUN_0c105d08(int, int, float);
int FUN_0c105e8c(int);
int FUN_0c1061e8(int);
int FUN_0c117944(int, ...);
int FUN_0c117d54(void);
int FUN_0c117e76(void);
int FUN_0c13fa88(int, int);
int FUN_0c13fc40(int, int);
int FUN_0c179ac0(void);
int FUN_0c180bec(int, int, int);
int FUN_0c181bb0(void);
int FUN_0c181c30(float);
int FUN_0c186740(int, int);
int FUN_0c18778c(void);
int FUN_0c187798(int);
float math_cos_angle16(int);
float math_signed_sqrt(float);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int nlUnitMatrix(void);
int thunk_FUN_0c115dc8(void);
int FUN_0c0ad768(int a4);
int FUN_0c1447ac(int a4);
int FUN_0c14d5de(int a4, int a5);
int FUN_0c04c1d4(void);
int FUN_0c02c8c2(void);
int FUN_0c05a5d4(void);
int FUN_0c064372(int a4, int a5, int a6, float f4);
int FUN_0c07e700(int a4, int a5, int a6, int a7);
int FUN_0c0827d8(int a4);
int FUN_0c0895a8(int a4);
int FUN_0c08c162(int a4);
int FUN_0c0c0b3a(int a4);
int FUN_0c0cb12e(int a4, int a5, int a6, int a7);
int FUN_0c0e6b48(int a4, int a5, int a6, int a7);
int FUN_0c1056b6(int a4, int a5, int a6, int a7);
int FUN_0c106414(int a4, int a5, int a6, int a7, float f4);
int FUN_0c12bac0(int a4, int a5);
int FUN_0c14c008(int a4);
int FUN_0c1524d4(int a4);
int FUN_0c152f08(int a4);
int FUN_0c172168(void);
int FUN_0c02fa8a(int a4, int a5, int a6, int a7);
int FUN_0c036024(int a4);
int FUN_0c04ca56(void);
int FUN_0c0516d8(void);
int FUN_0c064a56(int a4, int a5, int a6);
int FUN_0c065cb0(int a4);
int FUN_0c067438(int a4);
int FUN_0c06e872(int a4);
int FUN_0c071c68(int a4);
int FUN_0c07b0ca(int a4);
int FUN_0c080c90(int a4);
int FUN_0c0bbbd8(int a4);
void FUN_0c0c2380(int a4, int a5);
int FUN_0c0c9f50(int a4, int a5, int a6, int a7);
int FUN_0c0d0ac6(float f4);
float FUN_0c0ec550(int a4, float f4);
int FUN_0c0ed620(int a4);
int FUN_0c142366(int a4, int a5, int a6, int a7);
int FUN_0c15bebc(int a4, int a5, int a6, int a7);
int FUN_0c028600(int a4, int a5);
int FUN_0c03db62(int a4, int a5, int a6, int a7);
void FUN_0c0606e0(int a4, int a5, int a6);
int FUN_0c07d2f2(int a4);
int FUN_0c0f02c4(int a4);

int FUN_0c0ad768(int a4)
{
    register int t0;
    register int t1;

    *(unsigned int *)((a4 + 0x10)) = ((((struct o377C_int *)(a4))->v));
    (((struct o50_float *)(a4))->v) = 0.0f;
    (((struct o60_float *)(a4))->v) = 0.0f;
    (((struct o5C_float *)(a4))->v) = 0.0f;
    (((struct o58_float *)(a4))->v) = 0.0f;
    FUN_0c07d030(a4, 0x2);
    FUN_0c059e60(a4, 0xB);
    t0 = *(signed char *)((a4 + 0x1));
    FUN_0c07e79c(a4, t0, 0x1, 0x13, (t0), 0x1, 0x13);
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
    FUN_0c13fa88(a4, 0x0);
    FUN_0c13fc40(a4, 0x0);
    *(unsigned short *)((a4 + 0x1C)) = 0x0;
    *(unsigned short *)((a4 + 0x1E)) = 0x0;
    (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
    return 0x17;
}

int FUN_0c1447ac(int a4)
{
    register int t0;
    register int t11;

    t0 = FUN_0c03f444(0x2, 0x0, 0x0);
    t11 = t0;
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x4)) = 0xC14484A;
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = 0x0;
        *(unsigned int *)((t0 + 0x10)) = a4;
        (((struct o48_float *)(t0))->v) = 1.0f;
        (((struct o44_float *)(t0))->v) = 1.0f;
        (((struct o40_float *)(t0))->v) = 1.0f;
        FUN_0c064d5a(t0, 0xC20289C);
        (((struct o128_ushort *)(t0))->v) = ((int)0x1 << (int)(*(signed char *)((t0 + 0x1))));
        (((struct o12A_ushort *)(t0))->v) = ((~((int)0x1 << (int)(*(signed char *)((t0 + 0x1))))) & ((((struct o12A_short *)(t0))->v)));
        *(unsigned short *)((((0x12A + t0) + 0x2) + 0x0)) = ((~((int)0x1 << (int)(*(signed char *)((t0 + 0x1))))) & (*(short *)((((0x12A + t0) + 0x2) + 0x0))));
        (((struct o12E_ushort *)(t0))->v) = (~((int)0x1 << (int)(*(signed char *)((t0 + 0x1)))));
        FUN_0c0b21ac(t0, 0x3);
        (((struct o41C_float *)(t0))->v) = ((((struct o160_float *)(t0))->v));
        t11 = 0x160;
    }
    return t11;
}

int FUN_0c14d5de(int a4, int a5)
{
    register int t0;
    register int t10;

    t0 = FUN_0c03f444(0x1, 0x0, 0x1);
    t10 = t0;
    if (t0 != 0) {
        FUN_0c03744a(((((struct oC4_int *)(t0))->v)), 0x3, 0x47, (*(int *)0xC4B40CC));
        *(unsigned char *)((((((struct oC4_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(t0))->v)) + 0x6)) = 0xF;
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0x1F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        *(unsigned int *)((t0 + 0x4)) = 0xC14D5AC;
        *(unsigned int *)((t0 + 0x10)) = a4;
        *(unsigned int *)((t0 + 0x38)) = (*(int *)((0xC5324D0 + ((short)(*(signed char *)((t0 + 0x1))) * (short)0x3938))));
        (((struct o48_float *)(t0))->v) = 0.800000012f;
        (((struct o44_float *)(t0))->v) = 0.800000012f;
        (((struct o40_float *)(t0))->v) = 0.800000012f;
        FUN_0c187798(0x1);
        (((struct o50_float *)(t0))->v) = 0.0f;
        (((struct o5C_float *)(t0))->v) = 2.20000005f;
        *(unsigned short *)((t0 + 0x1C)) = 0x3C;
        t10 = 0x3C;
    }
    return t10;
}

int FUN_0c04c1d4(void)
{
    register int t0;
    register int t1;

    t0 = FUN_0c037320(0x7, (*(int *)0xC4B410C));
    t1 = FUN_0c03f444(0x5, 0x0, t0);
    if (t1 != 0) {
        FUN_0c03733c(t1, 0x7, (*(int *)0xC4B410C));
        (((struct oA8_uchar *)(t1))->v) = 0x1;
        (((struct oAC_ushort *)(t1))->v) = 0xF;
        (((struct oA9_uchar *)(t1))->v) = 0x80;
        *(unsigned char *)((t1 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t1 + 0x4)) = 0xC04C11E;
        *(unsigned char *)((t1 + 0x2)) = 0x0;
        *(unsigned short *)((t1 + 0x1C)) = 0x0;
    }
    t0 = FUN_0c037320(0x8, (*(int *)0xC4B410C));
    t1 = FUN_0c03f444(0x5, 0x0, t0);
    t0 = t1;
    if (t1 != 0) {
        FUN_0c03733c(t1, 0x8, (*(int *)0xC4B410C));
        (((struct oA8_uchar *)(t1))->v) = 0x1;
        (((struct oAC_ushort *)(t1))->v) = 0xF;
        (((struct oA9_uchar *)(t1))->v) = 0x80;
        *(unsigned char *)((t1 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t1 + 0x4)) = 0xC04C11E;
        *(unsigned char *)((t1 + 0x2)) = 0x1;
        *(unsigned short *)((t1 + 0x1C)) = 0x1;
        t0 = 0x1;
    }
    return t0;
}


int FUN_0c05a5d4(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register float u0;
    register float u1;

    t0 = 0x0;
    for (;;) {
        if ((int)(*(int *)((((((t0 << 2) + t0) << 2) + 0xC46DE94) + 0x0))) > 0) {
            t2 = *(int *)((((((t0 << 2) + t0) << 2) + 0xC46DE94) + 0x0));
            *(unsigned int *)((((((t0 << 2) + t0) << 2) + 0xC46DE94) + 0x0)) = (t2 - 1);
            t3 = *(int *)((((((t0 << 2) + t0) << 2) + 0xC46DE94) + 0x4));
            t4 = *(int *)((((((t0 << 2) + t0) << 2) + 0xC46DE94) + 0x4));
            u0 = (float)(t3 - (t2 - 1));
            if ((float)(t3 - (t2 - 1)) == 0.0f) {
                u0 = 1.0f;
            }
            if ((float)t4 == 0.0f) {
                *(unsigned int *)((((((t0 << 2) + t0) << 2) + 0xC46DE94) + 0x4)) = 0x1;
            }
            t2 = *(int *)((((((t0 << 2) + t0) << 2) + 0xC46DE94) + 0x8));
            u1 = ((float)((*(int *)((((((t0 << 2) + t0) << 2) + 0xC46DE94) + 0xC))) - t2) * (u0 / (float)(*(int *)((((((t0 << 2) + t0) << 2) + 0xC46DE94) + 0x4)))));
            *(unsigned int *)((((((t0 << 2) + t0) << 2) + 0xC46DE94) + 0x10)) = (int)(u1 + (float)t2);
            t1 = (FUN_0c180bec(t0, 0xA6, (int)(u1 + (float)t2)));
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x10) {
            break;
        }
    }
    return t1;
}

int FUN_0c064372(int a4, int a5, int a6, float f4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;

    t0 = 0x0;
    for (;;) {
        if ((((int)0x1 << (int)t0) & a6) != 0) {
            t2 = 0x960;
            t3 = t0;
            t3 = (t3 << 2);
            t4 = 0xC4F6B2C;
            t5 = 0x0;
            t6 = 0x0;
            t3 = (t3 + 0xC4F90AC);
            t2 = (t0 * t2);
            t2 = (t2 + t4);
            t1 = t2;
            t7 = 0xC4F90AC;
            for (;;) {
                t4 = (*(int *)((t3 + 0x0)));
                if ((int)t6 >= (int)t4) {
                    break;
                }
                t7 = t6;
                t7 = (t7 << 1);
                t4 = t6;
                t7 = (t7 + t4);
                t7 = (t7 << 2);
                t6 = (t6 + 0x1);
                if (((*(int *)((t7 + t1)))) == a4) {
                    t5 = 0x1;
                }
            }
            if (t5 == 0) {
                t5 = *(int *)((t3 + 0x0));
                t1 = 0x8;
                t6 = t2;
                t4 = t5;
                *(float *)((((((t5 << 1) + t4) << 2) + t2) + t1)) = f4;
                t2 = *(int *)((t3 + 0x0));
                t4 = t2;
                *(unsigned int *)((((((t2 << 1) + t4) << 2) + t6) + 0x4)) = a5;
                t2 = *(int *)((t3 + 0x0));
                *(unsigned int *)((t3 + 0x0)) = (t2 + 0x1);
                t4 = ((t2 + 0x1) - 1);
                t6 = (t6 + (((((t2 + 0x1) - 1) << 1) + t4) << 2));
                *(unsigned int *)((t6 + 0x0)) = a4;
            }
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x4) {
            break;
        }
    }
    return t1;
}

int FUN_0c07e700(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;

    t1 = 0x0;
    t2 = 0xC1C5DC4;
    t3 = 0xC1C5DC4;
    t4 = 0xC1C5DC4;
    for (;;) {
        if ((unsigned short)(*(short *)(((((t1 << 2) << 1) + 0xC1C5DC4) + 0x0))) == 0x9999) {
            t5 = 0x446;
            *(unsigned char *)((a4 + t5)) = 0x0;
            t5 = (t5 + 0x1);
            *(unsigned char *)((a4 + t5)) = 0x0;
            t5 = (t5 - 2);
            *(unsigned char *)((a4 + t5)) = 0x0;
            return t5;
        }
        if (((unsigned short)(*(short *)((t3 + 0x0))) == (a7 + (a6 << 8))) && (t0 = *(signed char *)((t3 + 0x4)), t5 = t0, t5 == (signed char)a5)) {
            t6 = 0x8C;
            t5 = (*(short *)((t2 + 0x2)));
            t5 = (unsigned short)t5;
            t6 = (t6 + ((((struct o11C_int *)(a4))->v)));
            if ((int)t5 <= (int)(int)((*(float *)((t6 + 0x0))))) {
                break;
            }
            t2 = (t2 + 0x8);
            t3 = (t3 + 0x8);
            t1 = (t1 + 0x1);
            t4 = (t4 + 0x8);
            continue;
        }
        t2 = (t2 + 0x8);
        t3 = (t3 + 0x8);
        t1 = (t1 + 0x1);
        t4 = (t4 + 0x8);
    }
    (((struct o446_uchar *)(a4))->v) = (*(signed char *)((t4 + 0x6)));
    (((struct o447_uchar *)(a4))->v) = (*(signed char *)((t4 + 0x7)));
    t0 = *(signed char *)((t4 + 0x5));
    (((struct o445_uchar *)(a4))->v) = t0;
    return t0;
}

int FUN_0c0827d8(int a4)
{
    register int t0;

    (((struct o3715_uchar *)(a4))->v) = 0xC;
    (((struct o371D_uchar *)(a4))->v) = 0x1;
    t0 = FUN_0c07ebd0(a4);
    if (t0 != 0) {
        *(unsigned int *)((a4 + 0x38)) = ((*(int *)((0xC5413E8 + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x2F8)))) + (FUN_0c07eaf4(a4)));
    }
    t0 = FUN_0c064f80(a4);
    if (t0 != 0) {
        t0 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t0, 0x2, 0x2, (t0), 0x2, 0x2);
        t0 = 0xE;
    } else {
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x2, 0x16, 0xFFFFFFFF, 0x2, 0x16);
        t0 = 0xB;
    }
    *(unsigned short *)((a4 + 0x1C)) = t0;
    (((struct o372D_uchar *)(a4))->v) = 0x0;
    t0 = 0x3731;
    if ((*(signed char *)((a4 + 0x3731))) == 0) {
        (((struct o372D_uchar *)(a4))->v) = 0x8;
        t0 = 0x372D;
    }
    return t0;
}

int FUN_0c0895a8(int a4)
{
    int stk[5];
    register int t10;

    if (((((struct o17C_float *)(a4))->v)) > 0.0f) {
        *(int *)((int)stk + 8) = 0x83;
        *(int *)((int)stk + 4) = 0x3;
        *(int *)((int)stk + 0) = 0xFFFFFFFF;
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0x83, 0xFFFFFFFF, 0x3, 0x83);
        FUN_0c0c224c(a4, ((((struct o376C_int *)(a4))->v)), 0x0, 0x0, *(int *)((int)stk + 12), *(int *)((int)stk + 12 + 4), *(int *)((int)stk + 12 + 8), *(int *)((int)stk + 12 + 12));
        FUN_0c085eac(a4, 0x3);
        t10 = 0x0;
    } else {
        *(int *)((int)stk + 8) = 0x85;
        *(int *)((int)stk + 4) = 0x3;
        *(int *)((int)stk + 0) = 0xFFFFFFFF;
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0x85, 0xFFFFFFFF, 0x3, 0x85);
        FUN_0c0c224c(a4, ((((struct o376C_int *)(a4))->v)), 0x0, 0x0, *(int *)((int)stk + 12), *(int *)((int)stk + 12 + 4), *(int *)((int)stk + 12 + 8), *(int *)((int)stk + 12 + 12));
        FUN_0c085eac(a4, 0x6);
        (((struct o50_float *)(a4))->v) = 0.0f;
        (((struct o5C_float *)(a4))->v) = -0.0799999982f;
        (((struct o60_float *)(a4))->v) = 0.0f;
        (((struct o58_float *)(a4))->v) = 0.0f;
        (((struct o54_float *)(a4))->v) = 0.0f;
        (((struct o4C_float *)(a4))->v) = 0.0f;
        t10 = 0x1;
    }
    (((struct o16_uchar *)(a4))->v) = t10;
    (((struct o17_uchar *)(a4))->v) = 0x0;
    return 0x17;
}


int FUN_0c0c0b3a(int a4)
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
            (((struct o42C_ushort *)(a4))->v) = (((((struct o42C_short *)(a4))->v)) | t1);
            t2 = *(signed char *)0xC472462;
            *(unsigned char *)(((((unsigned short)(unsigned char)t2 * (unsigned short)0x264) + 0xC471ACC) + 0x0)) = ((*(signed char *)(((((unsigned short)(unsigned char)t2 * (unsigned short)0x264) + 0xC471ACC) + 0x0))) + 0x1);
            t0 = 0x42C;
        }
        t2 = t0;
    } else {
        (((struct o4_ushort *)0xC47245C)->v) = 0x0;
        t0 = 0x42E;
        if (((unsigned short)((((struct o42E_short *)(a4))->v)) & (unsigned short)t1) == 0) {
            t3 = *(signed char *)0xC472462;
            *(unsigned char *)(((((unsigned short)(unsigned char)t3 * (unsigned short)0x264) + 0xC471ACC) + 0x0)) = ((*(signed char *)(((((unsigned short)(unsigned char)t3 * (unsigned short)0x264) + 0xC471ACC) + 0x0))) + 0x1);
            (((struct o4_ushort *)0xC47245C)->v) = 0x0;
            (((struct o42C_ushort *)(a4))->v) = (((((struct o42C_short *)(a4))->v)) | t1);
            t1 = *(signed char *)0xC472462;
            *(unsigned char *)(((((unsigned short)(unsigned char)t1 * (unsigned short)0x264) + 0xC471ACC) + 0x0)) = ((*(signed char *)(((((unsigned short)(unsigned char)t1 * (unsigned short)0x264) + 0xC471ACC) + 0x0))) + 0x1);
            t0 = 0x42C;
        }
        t2 = t0;
    }
    return t2;
}

int FUN_0c0cb12e(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;

    t1 = *(signed char *)((a4 + 0x1));
    (((struct o28_float *)(a4))->v) = ((((struct o28_float *)((((short)t1 * (short)0x3938) + 0xC532498)))->v));
    (((struct o30_float *)(a4))->v) = ((((struct o30_float *)((((short)t1 * (short)0x3938) + 0xC532498)))->v));
    t2 = *(signed char *)((a4 + 0x14));
    if (t2 != 0) {
        if (t2 != 1) {
        } else {
            t2 = 0;
            if (((((struct o168_float *)(a4))->v)) > (((((struct o50_float *)(a4))->v)) + 1.0f)) {
                u0 = (((struct o50_float *)(a4))->v);
                u1 = (((struct o168_float *)(a4))->v);
                u2 = _builtin_fabsf((u1 - u0));
                if (4.0f > _builtin_fabsf((u1 - u0))) {
                    u3 = (((struct o50_float *)(a4))->v);
                    u4 = (((struct o168_float *)(a4))->v);
                    u5 = (((struct o2C_float *)((((short)t1 * (short)0x3938) + 0xC532498)))->v);
                    (((struct o2C_float *)((((short)t1 * (short)0x3938) + 0xC532498)))->v) = (u5 + _builtin_fabsf((u4 - u3)));
                    _builtin_fabsf((u4 - u3));
                    u2 = (u5 + _builtin_fabsf((u4 - u3)));
                }
                t2 = ((4.0f > _builtin_fabsf((u1 - u0))));
            } else {
                t2 = (0);
            }
            (((struct o50_float *)(a4))->v) = ((((struct o168_float *)(a4))->v));
        }
    } else {
        u0 = (((struct o2C_float *)((((short)t1 * (short)0x3938) + 0xC532498)))->v);
        (((struct o50_float *)(a4))->v) = u0;
        (((struct o2C_float *)(a4))->v) = u0;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    if (((*(signed char *)(((((short)t1 * (short)0x3938) + 0xC532498) + 0x3714))) != 0) && (t0 = *(signed char *)(((((short)t1 * (short)0x3938) + 0xC532498) + 0x3715)), t0 == 41)) {
        return t0;
    }
    return FUN_0c03f346(a4, (((short)t1 * (short)0x3938) + 0xC532498), a6, a7);
}

int FUN_0c0e6b48(int a4, int a5, int a6, int a7)
{

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register float F2;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register float w0_0;
    v0_0 = a4;
    v0_2 = *(signed char *)((v0_0 + 0x14));
    v0_1 = (v0_2);
    if ((v0_2 == 0)) goto L_C0E6B58;
    if ((v0_1 == 1)) goto L_C0E6B78;
    L_C0E6BE0:;
    return v0_1;
    L_C0E6B78:;
    v0_2 = *(signed char *)((v0_0 + 0x15));
    v0_1 = (v0_2);
    w0_0 = ((*(float *)0xC0E6C44));
    if ((v0_2 == 0)) goto L_C0E6B94;
    if ((v0_1 == 1)) goto L_C0E6BA8;
    if ((v0_1 == 2)) goto L_C0E6BB6;
    if ((v0_1 == 3)) goto L_C0E6BCA;
    goto L_C0E6BE0;
    L_C0E6BCA:;
    (((struct oB0_float *)(v0_0))->v) = (((((struct oB0_float *)(v0_0))->v)) - w0_0);
    v0_1 = (0xB0);
    if ((((((struct oB0_float *)(v0_0))->v)) > 0.0f)) goto L_C0E6BE0;
    return FUN_0c03f346(v0_0, R5, a6, a7);
    L_C0E6BB6:;
    v0_2 = *(short *)(((*(int *)((v0_0 + 0x10))) + 0x1C));
    v0_1 = (v0_2);
    if (((int)v0_2 > (int)0x28)) goto L_C0E6BE0;
    L_C0E6BC0:;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    v0_1 = (0x15);
    goto L_C0E6BE0;
    L_C0E6BA8:;
    v0_2 = *(signed char *)((0x15 + (*(int *)((v0_0 + 0x10)))));
    v0_1 = (v0_2);
    if ((v0_2 != 1)) goto L_C0E6BE0;
    goto L_C0E6BC0;
    L_C0E6B94:;
    (((struct oB0_float *)(v0_0))->v) = (((((struct oB0_float *)(v0_0))->v)) + w0_0);
    v0_1 = (0xB0);
    if ((!(1.0f > ((((struct oB0_float *)(v0_0))->v))))) goto L_C0E6BC0;
    goto L_C0E6BE0;
    L_C0E6B58:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    (((struct o15_uchar *)(v0_0))->v) = 0x0;
    (((struct oA8_uchar *)(v0_0))->v) = 0x1;
    *(unsigned short *)((v0_0 + 0x1C)) = 0x0;
    (((struct oB0_float *)(v0_0))->v) = 0.0f;
    goto L_C0E6B78;
}

int FUN_0c1056b6(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            return ((int (*)(int, int, int, int))(0xC1055E8))(a4, a5, a6, a7);
        }
    } else {
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    }
    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            t1 = t0;
            if (t0 != 2) {
            } else {
                t0 = FUN_0c05f22c(0x3FCF);
                t1 = t0;
                if (t0 != 0) {
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    t1 = 0x15;
                }
            }
            return t1;
        }
        t0 = FUN_0c117d54();
        if ((int)t0 < 0) {
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
            return FUN_0c117e76();
        }
        return t0;
    }
    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
    return (FUN_0c117944(0x1F));
}

int FUN_0c106414(int a4, int a5, int a6, int a7, float f4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 99) {
                return t0;
            }
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        t0 = *(signed char *)((a4 + 0x15));
        if (t0 != 0) {
            if (t0 != 1) {
                if (t0 != 2) {
                    return t0;
                }
                return FUN_0c1061e8(a4);
            }
            return FUN_0c105e8c(a4);
        }
        return FUN_0c105d08(a4, a5, f4);
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    t0 = FUN_0c105cf4(a4);
    if (t0 != 0) {
        (((struct o15_uchar *)(a4))->v) = 0x0;
    } else {
        t0 = thunk_FUN_0c115dc8();
        if (t0 != 0) {
            (((struct o15_uchar *)(a4))->v) = 0x1;
        } else {
            (((struct o15_uchar *)(a4))->v) = 0x2;
        }
    }
    (((struct o16_uchar *)(a4))->v) = 0x0;
    return 0x16;
}

int FUN_0c12bac0(int a4, int a5)
{
    int stk[1];
    register int t2;
    register int t3;
    register int t14;
    register int t7;

    *(unsigned char *)(((int)stk + 0)) = a5;
    t2 = FUN_0c037320(0x1, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
    t3 = FUN_0c03f444(0x5, 0x0, t2);
    t14 = t3;
    if (t3 != 0) {
        *(unsigned int *)((t3 + 0x4)) = 0xC12BB5C;
        *(unsigned char *)((t3 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t3 + 0x10)) = a4;
        FUN_0c03733c(t3, 0x1, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
        (((struct oA8_uchar *)(t3))->v) = 0x1;
        (((struct oAC_ushort *)(t3))->v) = 0xF;
        (((struct oA9_uchar *)(t3))->v) = 0x21;
        t7 = *(signed char *)(((int)stk + 0));
        (((struct o68_uint *)(((((struct oC4_int *)(t3))->v))))->v) = ((*(int *)(((((*(int *)(((((unsigned char)t7 << 2) + 0xC2A1114) + 0x0))) << 2) + (0xC4 + a4)) + 0x0))) + 0x28);
        (((struct o68_uint *)(((((struct oC8_int *)(t3))->v))))->v) = ((*(int *)(((((*(int *)(((((unsigned char)t7 << 2) + 0xC2A1114) + 0x0))) << 2) + (0xC4 + a4)) + 0x0))) + 0x28);
        t14 = 0x68;
    }
    return t14;
}

int FUN_0c14c008(int a4)
{
    register int t0;
    register int t15;

    t0 = FUN_0c03f444(0x1, 0x0, 0x1);
    t15 = t0;
    if (t0 != 0) {
        FUN_0c03744a(((((struct oC4_int *)(t0))->v)), 0x1, 0x9, (*(int *)(((((*(signed char *)((a4 + 0x1))) << 2) << 1) + 0xC4B40E0))));
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned char *)((t0 + 0x2)) = 0xD;
        (((struct oAC_ushort *)(t0))->v) = 0x1F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        *(unsigned int *)((t0 + 0x10)) = a4;
        *(unsigned int *)((t0 + 0x4)) = 0xC14C0A4;
        (((struct o48_float *)(t0))->v) = 0.0f;
        (((struct o44_float *)(t0))->v) = 0.0f;
        (((struct o40_float *)(t0))->v) = 0.0f;
        (((struct o28_float *)(t0))->v) = ((((struct o28_float *)(a4))->v));
        (((struct o2C_float *)(t0))->v) = ((((struct o0_float *)0xC14C148)->v));
        (((struct o30_float *)(t0))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o4_float *)0xC14C148)->v)));
        FUN_0c07e2f4(t0, 0x6);
        FUN_0c064d5a(t0, 0xC202C00);
        t15 = *(signed char *)((t0 + 0x1));
        (((struct o12A_ushort *)(t0))->v) = ((~((int)0x1 << (int)t15)) & ((((struct o12A_short *)(t0))->v)));
    }
    return t15;
}

int FUN_0c1524d4(int a4)
{
    register int t0;
    register int t9;
    register float u3;
    register int t6;
    register int t7;

    t0 = FUN_0c03f444(0x5, 0x1, 0xA);
    t9 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC152A2C;
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = 0x1;
        *(unsigned int *)((t0 + 0x3C)) = 0x0;
        *(unsigned int *)((t0 + 0x38)) = 0x0;
        *(unsigned int *)((t0 + 0x34)) = 0x0;
        (((struct o48_float *)(t0))->v) = 1.0f;
        (((struct o44_float *)(t0))->v) = 1.0f;
        (((struct o40_float *)(t0))->v) = 1.0f;
        (((struct o28_float *)(t0))->v) = ((((struct o28_float *)(a4))->v));
        (((struct o30_float *)(t0))->v) = ((((struct o30_float *)(a4))->v));
        u3 = (((struct o168_float *)(a4))->v);
        (((struct o2C_float *)(t0))->v) = u3;
        (((struct o41C_float *)(t0))->v) = u3;
        (((struct o2C_float *)(t0))->v) = (((((struct o2C_float *)(t0))->v)) + 500.0f);
        (((struct oB0_float *)(t0))->v) = 1.0f;
        *(unsigned int *)((t0 + 0x10)) = a4;
        (((struct o22_ushort *)(t0))->v) = ((((struct o24_short *)(a4))->v));
        (((struct o1A_uchar *)(t0))->v) = 0x0;
        t6 = 0x0;
        t7 = 0x0;
        for (;;) {
            t7 = (t7 + 0x1);
            *(unsigned char *)(((*(int *)((((0xC4 + t0) + t6) + 0x0))) + 0x0)) = 0x0;
            t6 = (t6 + 0x4);
            if ((int)(signed char)t7 >= (int)0xA) {
                break;
            }
        }
        t9 = 0x1A;
    }
    return t9;
}

int FUN_0c152f08(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = FUN_0c03f444(0x5, 0x1, 0x1);
    t1 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC152FA4;
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0x21;
        (((struct oA9_uchar *)(t0))->v) = 0x1;
        *(unsigned int *)((t0 + 0x3C)) = 0x0;
        *(unsigned int *)((t0 + 0x38)) = 0x0;
        *(unsigned int *)((t0 + 0x34)) = 0x0;
        (((struct o48_float *)(t0))->v) = 1.0f;
        (((struct o44_float *)(t0))->v) = 1.0f;
        (((struct o40_float *)(t0))->v) = 1.0f;
        *(unsigned int *)((t0 + 0x10)) = a4;
        FUN_0c037498(((((struct oC4_int *)(t0))->v)), 0x0, 0x1D, (*(int *)0xC4B40CC));
        *(unsigned char *)((((((struct oC4_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(t0))->v)) + 0x6)) = 0xF;
        t2 = (((struct oC4_int *)(t0))->v);
        t0 = FUN_0c179ac0();
        t3 = ((~(((~t0) + 0x1) & 0xF)) + 0x1);
        if ((int)t0 >= 0) {
            t3 = (t0 & 0xF);
        }
        (((struct o80_uint *)(t2))->v) = (((t3 << 8) << 2) << 2);
        t1 = (((t3 << 8) << 2) << 2);
    }
    return t1;
}

int FUN_0c172168(void)
{
    register float u2;
    register float u3;
    register int t4;
    register float u6;
    register int t8;

    nlUnitMatrix();
    FUN_0c181c30(1.0f);
    u2 = (((struct o0_float *)0xC172270)->v);
    u3 = (((struct o4_float *)0xC172270)->v);
    t4 = 0x0;
    for (;;) {
        u6 = ((float)t4 * ((((struct o8_float *)0xC172270)->v)));
        FUN_0c181bb0();
        t8 = FUN_0c181bb0();
        t4 = (t4 + 0x1);
        if ((int)t4 > (int)0x14) {
            break;
        }
    }
    return t8;
}

int FUN_0c02fa8a(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    if (a6 != 0) {
        t0 = ((((a5 * 0x10E0) + ((0x444 + a4) + 0x24)) + (((((a7 << 2) << 1) + a7) << 2) << 2)) + 0x28);
        if (a6 != 1) {
            t1 = ((((0x21E4 + (0x444 + a4)) + (a5 * 0x2D0)) + (((((a7 << 2) << 1) + a7) << 2) << 2)) + 0x28);
            if (a6 != 2) {
                t1 = ((((0x2784 + (0x444 + a4)) + (a5 * 0x2D0)) + (((((a7 << 2) << 1) + a7) << 2) << 2)) + 0x28);
                if (a6 != 3) {
                    t1 = ((((0x2D24 + (0x444 + a4)) + (a5 * 0x2D0)) + (((((a7 << 2) << 1) + a7) << 2) << 2)) + 0x28);
                    if (a6 != 4) {
                        t1 = 0x0;
                    }
                }
            }
            t0 = t1;
        }
        t1 = t0;
    } else {
        t1 = ((*(int *)((((a7 << 2) + (0xC4 + a4)) + 0x0))) + 0x28);
    }
    return t1;
}

int FUN_0c036024(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;

    *(unsigned int *)(((a4 << 2) + 0xC3BD44C)) = 0xFFFFFFFF;
    FUN_0c039ee6(a4);
    t0 = (0xC4B40DC + ((a4 << 2) << 1));
    t1 = (((a4 << 1) << 2) + 0xC4B4124);
    t2 = 0x0;
    t3 = (((a4 << 1) << 2) + 0xC4B4124);
    t4 = (((a4 << 1) << 2) + 0xC4B4124);
    t5 = (0xC1AA618 + ((a4 << 2) << 1));
    for (;;) {
        t6 = *(int *)(((t2 << 2) + (0xC4B40DC + ((a4 << 2) << 1))));
        if ((*(int *)((t3 + 0x0))) != 0) {
            t1 = (*(int *)((t5 + 0x0)));
            FUN_0c035ca4(t6, t1);
            *(unsigned int *)((t4 + 0x0)) = 0x0;
        } else {
            t6 = t0;
            t7 = t1;
        }
        t2 = (t2 + 0x1);
        t0 = t6;
        t1 = t7;
        t5 = (t5 + 0x4);
        t4 = (t4 + 0x4);
        t3 = (t3 + 0x4);
        if ((int)t2 >= (int)0x2) {
            break;
        }
    }
    t0 = *(int *)(((a4 << 2) + 0xC4B40FC));
    if ((*(int *)(((a4 << 2) + 0xC4B4144))) != 0) {
        FUN_0c035ca4(t0, (*(int *)(((a4 << 2) + 0xC1AA638))));
        *(unsigned int *)(((a4 << 2) + 0xC4B4144)) = 0x0;
    }
    return 0xC4B4144;
}

int FUN_0c04ca56(void)
{
    register int t0;
    register int t8;
    register int t1;
    register int t2;
    register int t4;
    register float u7;

    t0 = FUN_0c03f444(0x5, 0x0, 0x9);
    t8 = t0;
    if (t0 != 0) {
        t1 = 0x0;
        t2 = 0x0;
        for (;;) {
            t4 = *(int *)((((0xC4 + t0) + t2) + 0x0));
            FUN_0c03744a(t4, 0x0, (*(int *)((0xC1B7E64 + t2))), (*(int *)0xC4B410C));
            *(unsigned short *)((t4 + 0x6)) = 0x3F;
            t1 = (t1 + 0x1);
            u7 = *(float *)((t2 + 0xC1B7E88));
            (((struct o88_float *)(t4))->v) = u7;
            (((struct o84_float *)(t4))->v) = u7;
            (((struct o8C_float *)(t4))->v) = 1.0f;
            t2 = (t2 + 0x4);
            if ((unsigned int)t1 >= (unsigned int)0x9) {
                break;
            }
        }
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = 0x80;
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC04C8D4;
        t8 = 0xFFFFFFFF;
    }
    return t8;
}


int FUN_0c064a56(int a4, int a5, int a6)
{
    register int t4;
    register int t5;
    register int t6;

    if ((int)(*(int *)0xC4F6B28) <= (int)0x1) {
        return 0xFFFFFFFF;
    }
    t6 = (((struct o404_int *)(a4))->v);
    t4 = *(int *)0xC4F45A4;
    if (t6 != 0) {
        t5 = t6;
        for (;;) {
            if (t6 == 0) {
                *(unsigned int *)0xC4F45A4 = (*(int *)((t4 + 0x0)));
                *(unsigned int *)0xC4F6B28 = ((*(int *)0xC4F6B28) - 1);
                *(unsigned int *)((t4 + 0x0)) = 0x0;
                *(unsigned int *)((t4 + 0x4)) = a5;
                *(unsigned int *)((t4 + 0x8)) = a6;
                *(unsigned int *)((t5 + 0x0)) = t4;
                return 0x0;
            }
            if ((*(int *)((t6 + 0x8))) == a6) {
                break;
            }
            t6 = (*(int *)((t6 + 0x0)));
            if (t6 != 0) {
                t5 = t6;
            }
        }
        return 0x1;
    }
    *(unsigned int *)0xC4F45A4 = (*(int *)((t4 + 0x0)));
    *(unsigned int *)0xC4F6B28 = ((*(int *)0xC4F6B28) - 1);
    *(unsigned int *)((t4 + 0x0)) = 0x0;
    *(unsigned int *)((t4 + 0x4)) = a5;
    *(unsigned int *)((t4 + 0x8)) = a6;
    (((struct o404_uint *)(a4))->v) = t4;
    return 0x0;
}

int FUN_0c065cb0(int a4)
{
    int stk[9];
    register int t7;
    register int t8;
    register int t10;
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t22;
    register int t20;

    t7 = a4;
    for (;;) {
        if (t7 == 0) {
            break;
        }
        t0 = 0x125;
        t6 = 0x184;
        t8 = *(signed char *)((t7 + t0));
        t0 = (*(signed char *)((t7 + 0x1)));
        t6 = (t6 + t7);
        t2 = 0xC05FFA4;
        t6 = (t6 + 0x140);
        t10 = t0;
        t0 = 0x124;
        t0 = (FUN_0c05ffa4((*(signed char *)((t7 + t0))), t10, t8));
        t5 = t0;
        t0 = (*(signed char *)((t5 + 0x3)));
        *(unsigned int *)(((int)stk + 0)) = 0x0;
        t3 = t0;
        t4 = 0x0;
        if ((int)t3 > 0) {
            for (;;) {
                t0 = (*(signed char *)((t5 + 0x0)));
                if ((t0 & 3) != 0) {
                    t2 = 0xC18778C;
                    t1 = t5;
                    t0 = 0x20;
                    t0 = (FUN_0c18778c());
                    t0 = (*(signed char *)((t6 + 0x2)));
                    t2 = 0xC060180;
                    t0 = (FUN_0c060180(t7, (t6 + 0x8), t0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12)));
                    t1 = 0xC0601DA;
                    t0 = (FUN_0c0601da((t7 + 0x40), t6));
                    t2 = (*(int *)(((int)stk + 0)));
                    t6 = (t6 + 0x20);
                    t2 = (t2 + 0x1);
                    *(unsigned int *)(((int)stk + 0)) = t2;
                    t20 = t2;
                }
                t2 = t20;
                t4 = (t4 + 0x1);
                t5 = (t5 + 0x20);
                if ((int)t4 >= (int)t3) {
                    break;
                }
            }
            t22 = t2;
        }
        t1 = 0x184;
        t2 = t22;
        t0 = (*(int *)(((int)stk + 0)));
        t1 = (t1 + t7);
        t1 = (t1 + 0x140);
        *(unsigned char *)((t1 + 0x3)) = t0;
        t7 = (*(int *)((t7 + 0xC)));
    }
    return t0;
}

int FUN_0c067438(int a4)
{
    (((struct o372B_uchar *)(a4))->v) = 0x0;
    (((struct o37B0_float *)(a4))->v) = 1.0f;
    (((struct o3756_uchar *)(a4))->v) = 0x0;
    *(unsigned char *)(((0x3749 + a4) + 0x2)) = 0x0;
    *(unsigned char *)(((0x3749 + a4) + 0x1)) = 0x0;
    (((struct o3749_uchar *)(a4))->v) = 0x0;
    (((struct o3743_uchar *)(a4))->v) = 0x0;
    (((struct o382A_ushort *)(a4))->v) = 0x0;
    (((struct o371E_uchar *)(a4))->v) = (*(signed char *)((a4 + 0x371F)));
    FUN_0c0676ce((*(signed char *)((a4 + 0x1))));
    (((struct o3820_ushort *)(a4))->v) = 0x0;
    (((struct o381E_ushort *)(a4))->v) = 0x0;
    (((struct o37BC_float *)(a4))->v) = (*(float *)((0xC25AFA8 + ((*(signed char *)((a4 + 0x2))) << 2))));
    (((struct o3838_ushort *)(a4))->v) = 0x0;
    (((struct o3742_uchar *)(a4))->v) = 0x0;
    FUN_0c0673ea(a4);
    (((struct o3721_uchar *)(a4))->v) = 0x0;
    (((struct o376C_uint *)(a4))->v) = 0x0;
    (((struct o3757_uchar *)(a4))->v) = 0x0;
    (((struct o383E_ushort *)(a4))->v) = 0x0;
    (((struct o3752_uchar *)(a4))->v) = 0x0;
    (((struct o37F4_float *)(a4))->v) = 0.0f;
    (((struct o37FC_float *)(a4))->v) = 0.0f;
    (((struct o371D_uchar *)(a4))->v) = 0x0;
    (((struct o375C_uchar *)(a4))->v) = 0x0;
    (((struct o375D_uchar *)(a4))->v) = 0x0;
    (((struct o38DF_uchar *)(a4))->v) = 0x0;
    (((struct o38DE_uchar *)(a4))->v) = 0x0;
    (((struct o38DD_uchar *)(a4))->v) = 0x0;
    return 0x38DD;
}

int FUN_0c06e872(int a4)
{
    register int t0;
    register float u0;

    *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
    t0 = *(short *)((a4 + 0x1C));
    if (((int)t0 >= (int)0x11) && ((int)t0 <= (int)0x3C)) {
        *(unsigned int *)((a4 + 0x38)) = (unsigned short)((*(int *)((a4 + 0x38))) + 0x5D1);
        u0 = ((((struct o28_float *)(a4))->v));
        u0 = u0 + 3.56999993f * (math_sin_angle16((*(int *)((a4 + 0x38)))));
        (((struct o28_float *)(a4))->v) = u0;
        u0 = ((((struct o30_float *)(a4))->v));
        u0 = u0 + 3.56999993f * (math_cos_angle16((*(int *)((a4 + 0x38)))));
        (((struct o30_float *)(a4))->v) = u0;
    }
    t0 = *(short *)((a4 + 0x1E));
    *(unsigned short *)((a4 + 0x1E)) = (t0 + 0x1);
    if ((short)(t0 + 0x1) == 8) {
        FUN_0c059e60(a4, 0xD);
    }
    FUN_0c06e718(a4);
    FUN_0c037bf6(a4);
    t0 = *(short *)((a4 + 0x1C));
    if ((int)t0 >= (int)0x23) {
        return FUN_0c085d0c(a4);
    }
    return t0;
}

int FUN_0c071c68(int a4)
{
    register int t0;

    FUN_0c037bf6(a4);
    if (0.0f > ((((struct o50_float *)(a4))->v))) {
        if ((*(short *)((a4 + 0x1C))) == 0) {
            FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0xBD, 0xFFFFFFFF, 0x3, 0xBD);
            t0 = (((struct o118_int *)(a4))->v);
            (((struct o98_float *)(t0))->v) = 20.0f;
            (((struct o94_float *)(t0))->v) = 20.0f;
            t0 = (((struct o11C_int *)(a4))->v);
            (((struct o98_float *)(t0))->v) = 20.0f;
            (((struct o94_float *)(t0))->v) = 20.0f;
            *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
        }
        if (0.0f > ((((struct o50_float *)(a4))->v))) {
            t0 = FUN_0c07ecc6(a4, 0x0, 0x0);
            if (t0 != 0) {
                FUN_0c07daea(a4);
                return FUN_0c085d0c(a4);
            }
        }
    }
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    return math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
}

int FUN_0c07b0ca(int a4)
{
    register int t2;

    (((struct o372B_uchar *)(a4))->v) = 0x1;
    (((struct oA4_uint *)(a4))->v) = (((((struct oE4_int *)(((((struct o3770_int *)(a4))->v))))->v)) + 0x28);
    t2 = (((struct o3770_int *)(a4))->v);
    (((struct o37E8_float *)(a4))->v) = ((*(float *)(((((*(signed char *)(((0x371A + t2) + 0x0))) << 2) + (0xC1C5D20 + (((*(signed char *)((t2 + 0x2))) << 2) << 1))) + 0x0))) * 53.2999992f);
    (((struct o37EC_float *)(a4))->v) = -22.5f;
    (((struct o37F0_float *)(a4))->v) = -15.0f;
    (((struct o3858_uint *)(a4))->v) = 0x8000;
    (((struct o385C_uint *)(a4))->v) = 0x0;
    (((struct o3860_uint *)(a4))->v) = 0x0;
    if (((((struct o160_float *)(a4))->v)) != 0.0f) {
        FUN_0c037bf6(a4);
    }
    (((struct o28_float *)(a4))->v) = ((((struct o28_float *)(((((struct o3770_int *)(a4))->v))))->v));
    (((struct o2C_float *)(a4))->v) = ((((struct o2C_float *)(((((struct o3770_int *)(a4))->v))))->v));
    (((struct o30_float *)(a4))->v) = ((((struct o30_float *)(((((struct o3770_int *)(a4))->v))))->v));
    *(unsigned int *)((a4 + 0x38)) = (*(int *)((((((struct o3770_int *)(a4))->v)) + 0x38)));
    return 0x3770;
}

int FUN_0c080c90(int a4)
{
    register int t0;

    (((struct o3715_uchar *)(a4))->v) = 0x4;
    (((struct o372E_uchar *)(a4))->v) = 0x0;
    (((struct o3723_uchar *)(a4))->v) = 0x0;
    *(unsigned short *)((a4 + 0x1C)) = 0x0;
    (((struct o5C_float *)(a4))->v) = 0.0f;
    (((struct o60_float *)(a4))->v) = 0.0f;
    (((struct o58_float *)(a4))->v) = 0.0f;
    (((struct o50_float *)(a4))->v) = 0.0f;
    (((struct o54_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    t0 = *(signed char *)((a4 + 0x371D));
    if (t0 != 3) {
        if (t0 != 5) {
            if (t0 != 6) {
                return FUN_0c07e868(a4, 0x5);
            }
            return (FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0xD7, 0xFFFFFFFF, 0x3, 0xD7));
        }
        return (FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0xBA, 0xFFFFFFFF, 0x3, 0xBA));
    }
    return (FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0x9E, 0xFFFFFFFF, 0x3, 0x9E));
}

int FUN_0c0bbbd8(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t5;
    float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;

    t2 = 0x2710;
    t3 = 0xC532498;
    for (;;) {
        if ((t3 != a4) && ((t0 = *(signed char *)((t3 + 0x3714)), t1 = t0, t1 != 0) && (u0 = (((struct o160_float *)(t3))->v), u0 > 0.0f))) {
            u1 = ((((struct o30_float *)(t3))->v));
            u1 = (u1 - ((((struct o30_float *)(a4))->v)));
            u2 = ((((struct o28_float *)(t3))->v));
            u2 = (u2 - ((((struct o28_float *)(a4))->v)));
            u3 = u2;
            u4 = (u1 * u1);
            u4 = u4 + u3 * u2;
            u1 = u4;
            u3 = (math_signed_sqrt(u4));
            t1 = (int)u3;
            t1 = (unsigned short)t1;
            if ((int)((unsigned short)t2) > (int)t1) {
                u3 = (math_signed_sqrt(u1));
                t2 = (int)u3;
            } else {
                t5 = t1;
            }
        } else {
            t5 = t1;
        }
        t3 = (t3 + 0x3938);
        t1 = t5;
        if ((unsigned int)t3 >= (unsigned int)0xC540978) {
            break;
        }
    }
    return t2;
}

void FUN_0c0c2380(int a4, int a5)
{
    register int t0;
    register int t1;

    if (a5 != 0) {
        t0 = *(signed char *)((a4 + 0x2));
        t1 = t0;
        if (t0 == 8) {
            t1 = t0;
            if ((*(signed char *)((0xC535BB4 + ((short)(*(signed char *)((a5 + 0x1))) * (short)0x3938)))) != 0) {
                t1 = 0xC;
            }
        }
        t0 = FUN_0c0c43c0(a4, (unsigned char)(*(signed char *)((a5 + 0x41C))));
        if (t0 != 0) {
            t0 = (0xC25BD20 + ((((*(signed char *)((0xC27630F + ((unsigned short)(unsigned char)(*(signed char *)((a5 + 0x41C))) * (unsigned short)0x1C)))) << 2) << 2) << 2));
        } else {
            t0 = (0xC25BD20 + ((((*(signed char *)((0xC2738C2 + ((unsigned short)(unsigned char)(*(signed char *)((a5 + 0x41C))) * (unsigned short)0x34)))) << 2) << 2) << 2));
        }
        FUN_0c080320(a4, (*(float *)((((t1 << 2) + t0) + 0x0))));
    return;
    }
}

int FUN_0c0c9f50(int a4, int a5, int a6, int a7)
{
    register int t1;

    FUN_0c0c3e3a(a4, a5, a6);
    t1 = *(signed char *)((a4 + 0x41D));
    if ((unsigned int)t1 < (unsigned int)0xC) {
        switch ((t1 << 1)) {
            case 0:
            {
                return FUN_0c0c4770(a4);
            }
            case 2:
            {
                return FUN_0c0c47a4(a4);
            }
            case 4:
            {
                return FUN_0c0c4b76(a4);
            }
            case 6:
            {
                return FUN_0c0c4bcc(a4);
            }
            case 8:
            {
                return FUN_0c0c9db8(a4);
            }
            case 10:
            {
                return FUN_0c0c9e1e(a4);
            }
            case 12:
            {
                return FUN_0c0c52c4(a4);
            }
            case 14:
            case 16:
            {
                return ((int (*)(int, int, int, int))(0xC0C9F38))(a4, a5, a6, a7);
            }
            default:
            {
                return FUN_0c0c2a80(a4);
            }
        }
    }
    return t1;
}

int FUN_0c0d0ac6(float f4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;

    t3 = FUN_0c179ac0();
    t4 = ((~(((~t3) + 0x1) & 0x3FF)) + 0x1);
    if ((int)t3 >= 0) {
        t4 = (t3 & 0x3FF);
    }
    u2 = *(float *)0xC0D0BB4;
    t3 = 0xC0D0BB4;
    t5 = 0x0;
    t6 = t0;
    t0 = t1;
    u3 = 1.0f;
    u4 = ((float)t4 + 1.0f);
    u5 = f4;
    for (;;) {
        if ((unsigned int)t5 >= (unsigned int)0x4) {
            break;
        }
        t3 = t5;
        t6 = 0xC1C74A8;
        t3 = (t3 << 2);
        u4 = (*(float *)((t6 + t3)));
        u3 = 0.0f;
        if ((u4 != u3) && (((int)t5 <= 0) || (u0 = *(float *)((t6 + t3)), t2 = (u4 == u3), u4 = u0, u1 = *(float *)(((((t5 - 1) << 2) + t6) + 0x0)), u3 = u1, u4 != u3))) {
            u5 = (*(float *)((t6 + t3)));
            t0 = (*(int *)((0xC1C7498 + t3)));
            if (!(u5 > (((float)t4 + 1.0f) / u2))) {
                t5 = (t5 + 0x1);
                continue;
            }
            break;
        }
        t5 = (t5 + 0x1);
    }
    return t0;
}

float FUN_0c0ec550(int a4, float f4)
{
    register int t0;
    register float u0;
    register float u1;
    register float u2;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
        } else {
            u0 = math_cos_angle16((int)(((float)(*(short *)(((*(int *)0xC540E1C) + 0x1E))) * ((((struct o0_float *)0xC0EC620)->v))) / ((((struct o4_float *)0xC0EC620)->v))));
            u1 = (((-u0) + 1.0f) / (1.0f + 1.0f));
            if (0.0f > (((-u0) + 1.0f) / (1.0f + 1.0f))) {
                u1 = 0.0f;
            }
            u0 = u1;
            if (u1 > 1.0f) {
                u0 = 1.0f;
            }
            u1 = (float)((((struct o41C_int *)(a4))->v));
            u1 = u1 + u0 * (float)(*(int *)((0xC1CCF60 + (((*(signed char *)((a4 + 0x2))) - 2) << 2))));
            (((struct o80_uint *)(((((struct oC4_int *)(a4))->v))))->v) = (int)u1;
            u1 = u0;
        }
        u0 = u1;
    } else {
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        (((struct o41C_uint *)(a4))->v) = ((((struct o80_int *)(((((struct oC4_int *)(a4))->v))))->v));
        u1 = math_cos_angle16((int)(((float)(*(short *)(((*(int *)0xC540E1C) + 0x1E))) * ((((struct o0_float *)0xC0EC620)->v))) / ((((struct o4_float *)0xC0EC620)->v))));
        u2 = (((-u1) + 1.0f) / (1.0f + 1.0f));
        if (0.0f > (((-u1) + 1.0f) / (1.0f + 1.0f))) {
            u2 = 0.0f;
        }
        u1 = u2;
        if (u2 > 1.0f) {
            u1 = 1.0f;
        }
        u2 = (float)((((struct o41C_int *)(a4))->v));
        u2 = u2 + u1 * (float)(*(int *)((0xC1CCF60 + (((*(signed char *)((a4 + 0x2))) - 2) << 2))));
        (((struct o80_uint *)(((((struct oC4_int *)(a4))->v))))->v) = (int)u2;
        u0 = u1;
    }
    return u0;
}

int FUN_0c0ed620(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    if ((*(signed char *)((a4 + 0x16))) == 0) {
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        (((struct o17_uchar *)(a4))->v) = 0x0;
        (((struct o20_ushort *)(a4))->v) = 0x3C;
    }
    t0 = *(signed char *)((a4 + 0x17));
    if (t0 != 0) {
        t1 = t0;
        if (t0 != 1) {
        } else {
            t0 = (((struct o22_short *)(a4))->v);
            (((struct o22_ushort *)(a4))->v) = (t0 - 1);
            if ((int)(short)(t0 - 1) <= 0) {
                (((struct o22_ushort *)(a4))->v) = 0xB4;
                (((struct o18_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x18))) ^ 0x1);
            }
            t0 = 0x0;
            for (;;) {
                t3 = *(int *)((((0xC4 + a4) + t0) + 0x0));
                t4 = 0xFFFFF1C8;
                if ((*(signed char *)((a4 + 0x18))) != 0) {
                    t4 = 0xE38;
                }
                t2 = FUN_0c0ed5e4(t4, (t3 + 0x7C), 0xB4);
                t0 = (t0 + 0x4);
                if ((unsigned int)t0 >= (unsigned int)0x20) {
                    break;
                }
            }
            t1 = t2;
        }
        t0 = t1;
    } else {
        (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
        (((struct o22_ushort *)(a4))->v) = 0xB4;
        (((struct o18_uchar *)(a4))->v) = 0x0;
        t1 = (((struct o22_short *)(a4))->v);
        (((struct o22_ushort *)(a4))->v) = (t1 - 1);
        if ((int)(short)(t1 - 1) <= 0) {
            (((struct o22_ushort *)(a4))->v) = 0xB4;
            (((struct o18_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x18))) ^ 0x1);
        }
        t1 = 0x0;
        for (;;) {
            t3 = *(int *)((((0xC4 + a4) + t1) + 0x0));
            t4 = 0xFFFFF1C8;
            if ((*(signed char *)((a4 + 0x18))) != 0) {
                t4 = 0xE38;
            }
            t2 = FUN_0c0ed5e4(t4, (t3 + 0x7C), 0xB4);
            t1 = (t1 + 0x4);
            if ((unsigned int)t1 >= (unsigned int)0x20) {
                break;
            }
        }
        t0 = t2;
    }
    return t0;
}

int FUN_0c142366(int a4, int a5, int a6, int a7)
{
    register int t0;
    register float u0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o15_uchar *)(a4))->v) = 0x0;
        (((struct oA8_uchar *)(a4))->v) = 0x1;
    }
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        u0 = (((struct o40_float *)(a4))->v);
        (((struct o40_float *)(a4))->v) = (u0 + 0.0500000007f);
        (((struct o48_float *)(a4))->v) = (u0 + 0.0500000007f);
        (((struct o44_float *)(a4))->v) = (u0 + 0.0500000007f);
        (((struct oB4_float *)(a4))->v) = (((((struct oB4_float *)(a4))->v)) - 0.25f);
        u0 = (((struct oB4_float *)(a4))->v);
        (((struct oBC_float *)(a4))->v) = u0;
        (((struct oB8_float *)(a4))->v) = u0;
        if (!(((((struct oB4_float *)(a4))->v)) > 0.0f)) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        return 0xB4;
    }
    u0 = (((struct o40_float *)(a4))->v);
    (((struct o40_float *)(a4))->v) = (u0 + 0.25f);
    (((struct o48_float *)(a4))->v) = (u0 + 0.25f);
    (((struct o44_float *)(a4))->v) = (u0 + 0.25f);
    t0 = 0x40;
    if (!(1.0f > ((((struct o40_float *)(a4))->v)))) {
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t0 = 0x15;
    }
    return t0;
}

int FUN_0c15bebc(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    if (((((struct o24_short *)((*(int *)((a4 + 0x10)))))->v)) != ((((struct o22_short *)(a4))->v))) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t0 = 0x14;
    } else {
        t1 = (((struct oC4_int *)(a4))->v);
        (((struct o7C_uint *)(t1))->v) = (((((struct o7C_int *)(t1))->v)) + (int)(((float)((int)((int)(FUN_0c179ac0()) % (int)0x1E)) * ((((struct o0_float *)0xC15BFE4)->v))) / ((((struct o4_float *)0xC15BFE4)->v))));
        (((struct o84_float *)(t1))->v) = (((((struct o84_float *)(t1))->v)) + 0.25f);
        if (!(1.0f > ((((struct o84_float *)(t1))->v)))) {
            (((struct o84_float *)(t1))->v) = ((((struct oC_float *)0xC15BFE4)->v));
        }
        u0 = (((struct o84_float *)(t1))->v);
        (((struct o88_float *)(t1))->v) = u0;
        (((struct o8C_float *)(t1))->v) = u0;
        t0 = 0x8C;
    }
    return t0;
}


int FUN_0c03db62(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    register int t2;
    register int t3;
    register int t4;

    t0 = *(signed char *)((a4 + 0x3));
    if (t0 != 0) {
        if (t0 != 1) {
            t1 = t0;
            if (t0 != 2) {
            } else {
                *(volatile int *)((a4 + 0x1C));
                t0 = FUN_0c03cbfa();
                t2 = t0;
                if ((t0 == 0) || (t0 != -1)) {
                    *(unsigned char *)((a4 + 0x3)) = 0x1;
                    *(unsigned int *)((a4 + 0x1C)) = ((*(int *)((a4 + 0x1C))) + 0x1);
                    t2 = 0x1;
                }
                t1 = t2;
            }
            t0 = t1;
        } else {
            t1 = FUN_0c03b05a();
            *(unsigned int *)((a4 + 0x18)) = t1;
            t2 = t1;
            if ((int)t1 >= 0) {
                t1 = *(int *)((a4 + 0x1C));
                if ((int)t1 < (int)0x8) {
                    t3 = t1;
                    for (;;) {
                        if ((((int)0x1 << (int)t3) & (*(int *)((a4 + 0x18)))) != 0) {
                            break;
                        }
                        t3 = (t3 + 0x1);
                        if ((int)t3 >= (int)0x8) {
                            if ((int)0xFFFFFFFF < 0) {
                                t3 = 0xC3DC240;
                                *(unsigned char *)((t3 + 0x2)) = 0x3;
                                *(unsigned char *)((t3 + 0x3)) = 0x0;
                                return 0x0;
                            }
                            *(unsigned int *)((a4 + 0x1C)) = 0xFFFFFFFF;
                            *(unsigned char *)((a4 + 0x3)) = ((*(signed char *)((a4 + 0x3))) + 0x1);
                            t3 = (*(int *)((a4 + 0x1C)));
                            t1 = FUN_0c03cbfa();
                            if ((t1 != 0) && (t1 == -1)) {
                                return t1;
                            }
                            *(unsigned char *)((a4 + 0x3)) = 0x1;
                            *(unsigned int *)((a4 + 0x1C)) = ((*(int *)((a4 + 0x1C))) + 0x1);
                            return 0x1;
                        }
                    }
                    t1 = t3;
                } else {
                    t1 = 0xFFFFFFFF;
                }
                if ((int)t1 < 0) {
                    (((struct o0_uchar *)0xC3DC242)->v) = 0x3;
                    (((struct o1_uchar *)0xC3DC242)->v) = 0x0;
                    t3 = 0x0;
                } else {
                    *(unsigned int *)((a4 + 0x1C)) = t1;
                    *(unsigned char *)((a4 + 0x3)) = ((*(signed char *)((a4 + 0x3))) + 0x1);
                    *(volatile int *)((a4 + 0x1C));
                    t1 = FUN_0c03cbfa();
                    t4 = t1;
                    if ((t1 == 0) || (t1 != -1)) {
                        *(unsigned char *)((a4 + 0x3)) = 0x1;
                        *(unsigned int *)((a4 + 0x1C)) = ((*(int *)((a4 + 0x1C))) + 0x1);
                        t4 = 0x1;
                    }
                    t3 = t4;
                }
                t2 = t3;
            }
            t0 = t2;
        }
        t1 = t0;
    } else {
        *(unsigned char *)((a4 + 0x3)) = ((*(signed char *)((a4 + 0x3))) + 0x1);
        FUN_0c03df6a(a4, a5, a6, a7);
        (((struct o20_ushort *)(a4))->v) = 0x0;
        *(unsigned int *)((a4 + 0x1C)) = 0x0;
        t0 = FUN_0c03b05a();
        *(unsigned int *)((a4 + 0x18)) = t0;
        t2 = t0;
        if ((int)t0 >= 0) {
            t0 = *(int *)((a4 + 0x1C));
            if ((int)t0 < (int)0x8) {
                t3 = t0;
                for (;;) {
                    if ((((int)0x1 << (int)t3) & (*(int *)((a4 + 0x18)))) != 0) {
                        break;
                    }
                    t3 = (t3 + 0x1);
                    if ((int)t3 >= (int)0x8) {
                        if ((int)0xFFFFFFFF < 0) {
                            t3 = 0xC3DC240;
                            *(unsigned char *)((t3 + 0x2)) = 0x3;
                            *(unsigned char *)((t3 + 0x3)) = 0x0;
                            return 0x0;
                        }
                        *(unsigned int *)((a4 + 0x1C)) = 0xFFFFFFFF;
                        *(unsigned char *)((a4 + 0x3)) = ((*(signed char *)((a4 + 0x3))) + 0x1);
                        t3 = (*(int *)((a4 + 0x1C)));
                        t0 = FUN_0c03cbfa();
                        if ((t0 != 0) && (t0 == -1)) {
                            return t0;
                        }
                        *(unsigned char *)((a4 + 0x3)) = 0x1;
                        *(unsigned int *)((a4 + 0x1C)) = ((*(int *)((a4 + 0x1C))) + 0x1);
                        return 0x1;
                    }
                }
                t0 = t3;
            } else {
                t0 = 0xFFFFFFFF;
            }
            if ((int)t0 < 0) {
                (((struct o0_uchar *)0xC3DC242)->v) = 0x3;
                (((struct o1_uchar *)0xC3DC242)->v) = 0x0;
                t3 = 0x0;
            } else {
                *(unsigned int *)((a4 + 0x1C)) = t0;
                *(unsigned char *)((a4 + 0x3)) = ((*(signed char *)((a4 + 0x3))) + 0x1);
                *(volatile int *)((a4 + 0x1C));
                t0 = FUN_0c03cbfa();
                t4 = t0;
                if ((t0 == 0) || (t0 != -1)) {
                    *(unsigned char *)((a4 + 0x3)) = 0x1;
                    *(unsigned int *)((a4 + 0x1C)) = ((*(int *)((a4 + 0x1C))) + 0x1);
                    t4 = 0x1;
                }
                t3 = t4;
            }
            t2 = t3;
        }
        t1 = t2;
    }
    return t1;
}

void FUN_0c0606e0(int a4, int a5, int a6)
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

    t0 = 0x0;
    for (;;) {
        if ((((int)0x1 << (int)t0) & a6) != 0) {
            t1 = 0xC4FDBCC;
            t2 = t0;
            t2 = (t2 << 2);
            t3 = 0xC4FB63C;
            t1 = (t1 + t2);
            t4 = 0xC4FB64C;
            t5 = *(int *)((t1 + 0x0));
            t3 = (t3 + t2);
            t2 = (t0 * 0x960);
            t6 = t5;
            t4 = (t4 + t2);
            t7 = t3;
            t3 = (*(int *)((t3 + 0x0)));
            t8 = 0xC4F90BC;
            t9 = ((((t5 << 1) + t6) << 2) + t4);
            t6 = t3;
            t3 = (t3 << 1);
            t3 = (t3 + t6);
            t8 = (t8 + t2);
            t3 = (t3 << 2);
            t3 = (t3 + t8);
            *(unsigned int *)((t3 + 0x4)) = a5;
            *(unsigned int *)((t9 + 0x4)) = a5;
            t2 = *(int *)((t1 + 0x0));
            *(unsigned int *)((t1 + 0x0)) = (t2 + 0x1);
            t6 = ((t2 + 0x1) - 1);
            t4 = (t4 + (((((t2 + 0x1) - 1) << 1) + t6) << 2));
            t6 = (*(int *)((t7 + 0x0)));
            t6 = (t6 + 0x1);
            *(unsigned int *)((t7 + 0x0)) = t6;
            t6 = (t6 - 1);
            t1 = t6;
            t6 = (t6 << 1);
            t6 = (t6 + t1);
            t6 = (t6 << 2);
            t8 = (t8 + t6);
            *(unsigned int *)((t8 + 0x0)) = a4;
            *(unsigned int *)((t4 + 0x0)) = a4;
        }
        t6 = 0x4;
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)t6) {
            break;
        }
    }
}

int FUN_0c07d2f2(int a4)
{
    register int t7;

    if ((*(signed char *)((a4 + 0x3715))) == 26) {
        (((struct o3752_uchar *)(a4))->v) = 0x0;
        return 0x3752;
    }
    if (((((struct o3774_int *)(a4))->v)) != 0) {
        t7 = ((((((struct o3864_int *)(a4))->v)) - (int)(((float)(*(signed char *)((a4 + 0x373D))) * 737280.0f) / 360.0f)) & 0xFFFF);
    } else {
        t7 = (((*(int *)((a4 + 0x38))) - (int)(((float)(*(signed char *)((a4 + 0x373D))) * 737280.0f) / 360.0f)) & 0xFFFF);
    }
    (((struct o3864_uint *)(a4))->v) = t7;
    if ((int)(*(signed char *)((a4 + 0x130))) < 0) {
        (((struct o130_uchar *)(a4))->v) = 0x0;
    }
    (((struct o3752_uchar *)(a4))->v) = 0x1;
    return 0x3752;
}

int FUN_0c0f02c4(int a4)
{
    register int t0;
    register int t1;

    if ((*(signed char *)(((0x428 + a4) + 0x1))) != 0) {
        t0 = *(short *)(((0x428 + a4) + 0x2));
        *(unsigned short *)(((0x428 + a4) + 0x2)) = (t0 - 1);
        if ((int)(short)(t0 - 1) <= 0) {
            *(unsigned char *)(((0x428 + a4) + 0x1)) = ((*(signed char *)(((0x428 + a4) + 0x1))) ^ 0x1);
            *(unsigned short *)(((0x428 + a4) + 0x2)) = (((int)((int)(FUN_0c179ac0()) % (int)0x3C)) + 0x3C);
        }
        t0 = *(short *)(((0x428 + a4) + 0x2));
        if ((t0 & 0x7) != 0) {
            if ((t0 & 0x7) != 2) {
                if ((t0 & 0x7) != 4) {
                    t1 = (t0 & 0x7);
                    if ((t0 & 0x7) != 6) {
                    } else {
                        (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) - (1.0f + 1.0f));
                        t1 = 0x30;
                    }
                    t0 = t1;
                } else {
                    (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + (1.0f + 1.0f));
                    t0 = 0x30;
                }
                t1 = t0;
            } else {
                (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) - (1.0f + 1.0f));
                t1 = 0x28;
            }
            t0 = t1;
        } else {
            (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + (1.0f + 1.0f));
            t0 = 0x28;
        }
        t1 = t0;
    } else {
        t0 = *(short *)(((0x428 + a4) + 0x2));
        *(unsigned short *)(((0x428 + a4) + 0x2)) = (t0 - 1);
        t1 = (short)(t0 - 1);
        if ((int)(short)(t0 - 1) <= 0) {
            *(unsigned char *)(((0x428 + a4) + 0x1)) = ((*(signed char *)(((0x428 + a4) + 0x1))) ^ 0x1);
            t0 = (int)((int)(FUN_0c179ac0()) % (int)0xA);
            *(unsigned short *)(((0x428 + a4) + 0x2)) = (t0 + 0x5);
            t1 = (t0 + 0x5);
        }
    }
    return t1;
}
