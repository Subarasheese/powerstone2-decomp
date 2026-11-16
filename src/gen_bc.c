/* Straight-line functions with calls and guards (batch gen_bc): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o114_int { char p[0x114]; int v; };
struct o114_uint { char p[0x114]; unsigned int v; };
struct o118_int { char p[0x118]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o18_uchar { char p[0x18]; unsigned char v; };
struct o19_uchar { char p[0x19]; unsigned char v; };
struct o19C_uint { char p[0x19C]; unsigned int v; };
struct o1A_uchar { char p[0x1A]; unsigned char v; };
struct o1A0_uint { char p[0x1A0]; unsigned int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1FC_uint { char p[0x1FC]; unsigned int v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o20_short { char p[0x20]; short v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o208_uint { char p[0x208]; unsigned int v; };
struct o20C_uint { char p[0x20C]; unsigned int v; };
struct o210_uint { char p[0x210]; unsigned int v; };
struct o214_uint { char p[0x214]; unsigned int v; };
struct o218_uint { char p[0x218]; unsigned int v; };
struct o21C_uint { char p[0x21C]; unsigned int v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o220_uint { char p[0x220]; unsigned int v; };
struct o228_float { char p[0x228]; float v; };
struct o22C_float { char p[0x22C]; float v; };
struct o230_float { char p[0x230]; float v; };
struct o240_uint { char p[0x240]; unsigned int v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o30_float { char p[0x30]; float v; };
struct o3717_uchar { char p[0x3717]; unsigned char v; };
struct o3718_uchar { char p[0x3718]; unsigned char v; };
struct o3731_uchar { char p[0x3731]; unsigned char v; };
struct o374A_uchar { char p[0x374A]; unsigned char v; };
struct o3760_int { char p[0x3760]; int v; };
struct o3764_int { char p[0x3764]; int v; };
struct o376C_int { char p[0x376C]; int v; };
struct o382A_ushort { char p[0x382A]; unsigned short v; };
struct o382E_ushort { char p[0x382E]; unsigned short v; };
struct o3834_short { char p[0x3834]; short v; };
struct o38F8_int { char p[0x38F8]; int v; };
struct o38F8_uint { char p[0x38F8]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
struct o40_float { char p[0x40]; float v; };
struct o41C_int { char p[0x41C]; int v; };
struct o41C_uint { char p[0x41C]; unsigned int v; };
struct o42C_short { char p[0x42C]; short v; };
struct o430_short { char p[0x430]; short v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o5_uchar { char p[0x5]; unsigned char v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o74_short { char p[0x74]; short v; };
struct o78_int { char p[0x78]; int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o88_float { char p[0x88]; float v; };
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
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
int FUN_0c013fe8(void);
int FUN_0c01cc56(int, int);
int FUN_0c01cd40(int);
int FUN_0c01e9e4(void);
int FUN_0c021ed2(void);
int FUN_0c021ee2(void);
int FUN_0c022050(void);
int FUN_0c0220c4(int, int, int);
int FUN_0c0222a4(int, int, int);
int FUN_0c0304e8(int, int);
int FUN_0c035bf0(int);
int FUN_0c036de8(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c037498(int, int, int, int);
int FUN_0c037ac4(int, int, int, int, int);
int FUN_0c037bf6(int);
int FUN_0c038362(int);
int FUN_0c039a12(int);
int FUN_0c039f24(void);
int FUN_0c03add8(int, int, int, int);
int FUN_0c03b05a(void);
int FUN_0c03b3fc(void);
int FUN_0c03dd5c(int);
int FUN_0c03df6a(int, int, int, int);
int FUN_0c03ea04(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c03eff6(void);
int FUN_0c03f0aa(void);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c03fb58(int);
int FUN_0c03fc88(int);
int FUN_0c052184(int, int, int, int);
int FUN_0c0522be(int);
int FUN_0c052370(int);
int FUN_0c052378(int);
int FUN_0c056e44(int, int);
int FUN_0c0573c0(int, int, int);
int FUN_0c0573cc(int, int, int);
int FUN_0c059c54(int);
int FUN_0c059c7a(int, int);
int FUN_0c05a40c(int);
int FUN_0c05a4a6(int, int);
int FUN_0c05aab2(void);
int FUN_0c05aab6(int, int);
int FUN_0c05af54(int);
int FUN_0c05af8a(void);
int FUN_0c05b15c(void);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c06a264(int);
int FUN_0c070016(int);
int FUN_0c0700b0(int);
int FUN_0c070162(int, int, int, int);
int FUN_0c073ed0(int, int, int);
int FUN_0c07d15c(int);
int FUN_0c07d2c4(int, int);
int FUN_0c07e2f4(int, int);
int FUN_0c07e328(int, int);
int FUN_0c08515a(int, int);
int FUN_0c085cac(int, int, int, int);
int FUN_0c085d0c(int);
int FUN_0c0bc25e(void);
int FUN_0c0c2ab6(int, int);
int FUN_0c0c2d56(int, int, int);
int FUN_0c0c57e0(int, int, int);
int FUN_0c0ca33c(int, int, int, int);
float FUN_0c0e2240(int, int);
int FUN_0c0e33cc(int, int, int);
int FUN_0c0e34a8(int);
int FUN_0c0ef1d8(int);
int FUN_0c0ef668(int);
int FUN_0c0ef828(int);
int FUN_0c0efa28(int);
int FUN_0c0f3d1c(int);
int FUN_0c106510(void);
int FUN_0c108258(void);
int FUN_0c10852e(void);
int FUN_0c10db70(int);
int FUN_0c10dbc8(int);
int FUN_0c10dc48(int);
int FUN_0c10dd92(int);
int FUN_0c10ec34(int);
int FUN_0c10ed92(int);
int FUN_0c115120(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c116c2e(int, int, int);
int FUN_0c116cde(int, int);
int FUN_0c116d34(int, int, int, int);
int FUN_0c116e44(int);
int FUN_0c116f60(int);
int FUN_0c117078(int, int);
int FUN_0c117136(int, int);
int FUN_0c1173a0(void);
int FUN_0c11791c(void);
int FUN_0c117d14(void);
int FUN_0c119ba4(int, int);
int FUN_0c1202f8(void);
int FUN_0c120362(void);
int FUN_0c120504(int, int, int, int);
int FUN_0c1267e0(int, int);
int FUN_0c162770(int, int, int, int);
int FUN_0c16d304(int);
int FUN_0c16d3d6(int);
int FUN_0c16d4ec(int);
int FUN_0c17c2d0(int, int);
int FUN_0c1803fc(int, int);
int FUN_0c18098e(int);
int FUN_0c180a6c(int, int, int);
int FUN_0c184c48(int);
int FUN_0c187798(void);
int FUN_0c2b0de4(int);
int math_atan_angle16(float);
float math_cos_angle16(int);
float math_signed_sqrt(float);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int pl_ryoma_cue_table_next(int, int, int, int);
int FUN_0c0f821a(int a4, int a5);
int FUN_0c10356c(int a4);
int FUN_0c107346(void);
int FUN_0c11f56c(void);
int FUN_0c120da2(int a4, int a5);
int FUN_0c150d1e(int a4, int a5);
int FUN_0c1512a0(int a4, int a5);
int FUN_0c01f5c4(void);
void FUN_0c02ab74(void);
int FUN_0c02a600(int a4);
int FUN_0c02cbcc(int a4, int a5);
int FUN_0c03db0e(int a4, int a5, int a6, int a7);
int FUN_0c03fb78(int a4, int a5);
int FUN_0c03fca8(int a4, int a5);
int FUN_0c04b35a(int a4, int a5, int a6, int a7);
int FUN_0c0521ea(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11);
int FUN_0c0539c6(int a4, int a5, int a6, int a7);
float math_vec2_cos_between(float f4, float f5, float f6, float f7);
int FUN_0c05ab24(int a4, int a5, int a6);
int FUN_0c05ff24(void);
int FUN_0c060c2c(int a4, int a5, int a6, int a7, int a8);
int FUN_0c06420e(int a4, float f4, float f5);
int FUN_0c064262(int a4, float f4, float f5);
int FUN_0c06ab78(int a4, int a5, int a6, int a7);
int FUN_0c078f70(int a4, int a5, int a6, int a7);
int FUN_0c07d6cc(int a4);
int FUN_0c07d720(int a4);
int FUN_0c07efee(int a4, int a5);
int FUN_0c09ddb8(int a4, int a5, int a6, int a7);
int FUN_0c0a804e(int a4);
int FUN_0c0af7c8(int a4);
int FUN_0c0b1db6(int a4);
int FUN_0c0bfdfe(void);
int FUN_0c0e0562(int a4);
int FUN_0c0e6be4(int a4);
int FUN_0c0ec326(int a4);
int FUN_0c0f42cc(int a4);
int FUN_0c0f9116(void);
int FUN_0c0fc722(void);
int FUN_0c10ee58(int a4, int a5, int a6, int a7);
int FUN_0c11719c(int a4, int a5, int a6, int a7);
int FUN_0c137f0c(int a4);
int FUN_0c148a48(int a4);
int FUN_0c1632e0(int a4, int a5, int a6, float f4);
int FUN_0c16328c(int a4, int a5, int a6, float f4);
int FUN_0c16d330(int a4);
int FUN_0c0149e4(int a4);
int FUN_0c0243a2(void);
void FUN_0c0305d8(int a4);
int FUN_0c03da10(int a4, int a5, int a6, int a7);
int FUN_0c04d0d4(int a4);
int FUN_0c05253c(int a4, int a5, int a6, int a7, int a8, int a9);
int FUN_0c0523ce(int a4, int a5, int a6, int a7);
int FUN_0c05aec8(int a4, int a5);
int FUN_0c05a344(void);
int FUN_0c07d440(int a4);
int FUN_0c085204(int a4, float f4);
int FUN_0c08a286(int a4, int a5, int a6, int a7);
int FUN_0c0910f6(int a4);
int FUN_0c0a87d4(int a4);
int FUN_0c0c412c(int a4, int a5, int a6, int a7);
int FUN_0c0deb54(int a4, int a5, int a6);
int FUN_0c0e2116(int a4);
int FUN_0c0e39de(int a4);
float FUN_0c0e4ffc(int a4);
int FUN_0c0e3940(int a4);
int FUN_0c0e9a88(int a4, int a5, float f4);
int FUN_0c0ebda4(int a4, int a5, int a6, int a7);
float FUN_0c0eef50(int a4, int a5);
int FUN_0c0f0974(int a4, int a5);
int FUN_0c0efad4(int a4, int a5, int a6, int a7);
int FUN_0c0f4320(int a4);
int FUN_0c10726e(void);
int FUN_0c115292(int a4, int a5, int a6, float f4);
int FUN_0c11f1ac(void);
int FUN_0c1393f4(int a4);
float FUN_0c14ca80(int a4);
int FUN_0c16d384(int a4);
int FUN_0c16e9cc(int a4);
int FUN_0c16d5b4(int a4);
int FUN_0c018f40(int a4, int a5, int a6, int a7);
int FUN_0c01ce30(void);
int FUN_0c039fbc(void);
int FUN_0c058854(int a4, int a5, int a6, int a7);
int FUN_0c05f71a(void);
int FUN_0c0701c2(int a4, int a5, int a6, int a7);

int FUN_0c0f821a(int a4, int a5)
{
    int stk[2];
    register int t2;
    register int t3;
    register int t8;

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    t2 = FUN_0c037320((*(int *)(((int)stk + 0))), (*(int *)0xC4B410C));
    t3 = FUN_0c03f444(0x5, 0x0, t2);
    t8 = t3;
    if (t3 != 0) {
        FUN_0c03733c(t3, (*(int *)(((int)stk + 0))), (*(int *)0xC4B410C));
        (((struct oA8_uchar *)(t3))->v) = 0x1;
        (((struct oAC_ushort *)(t3))->v) = 0x40F;
        (((struct oA9_uchar *)(t3))->v) = 0x80;
        *(unsigned char *)((t3 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t3 + 0x4)) = 0xC0F81A8;
        t8 = *(short *)(((int)stk + 4));
        *(unsigned short *)((t3 + 0x1C)) = t8;
    }
    return t8;
}

int FUN_0c10356c(int a4)
{
    FUN_0c037498(((((struct oC8_int *)(a4))->v)), 0x0, (*(int *)(((((int)((int)(*(short *)((a4 + 0x1C))) / (int)0xA)) << 2) + ((((struct o0_int *)0xC290918)->v))))), (*(int *)0xC4B410C));
    return FUN_0c037498(((((struct oCC_int *)(a4))->v)), 0x0, (*(int *)(((((int)((int)(*(short *)((a4 + 0x1C))) % (int)0xA)) << 2) + ((((struct o4_int *)0xC290918)->v))))), (*(int *)0xC4B410C));
}

int FUN_0c107346(void)
{
    register int t6;

    *(unsigned int *)0xC474718 = 0x1;
    (((struct o0_uint *)0xC474B90)->v) = (FUN_0c1173a0());
    (((struct o14_uint *)0xC474B90)->v) = (FUN_0c119ba4(0x103, 0x1));
    (((struct o10_uint *)0xC474B90)->v) = (FUN_0c108258());
    (((struct o20_uint *)0xC474B90)->v) = (FUN_0c10852e());
    (((struct o8_uint *)0xC474B90)->v) = (FUN_0c117d14());
    (((struct o4_uint *)0xC474B90)->v) = (FUN_0c11791c());
    t6 = (((struct o4_int *)0xC474B90)->v);
    (((struct o2C_float *)(t6))->v) = (((((struct o2C_float *)(t6))->v)) + 65.0f);
    return 0x2C;
}


int FUN_0c120da2(int a4, int a5)
{
    register int t0;
    register int t5;

    t0 = FUN_0c03f444(0x5, 0x0, 0x1);
    t5 = t0;
    if (t0 != 0) {
        FUN_0c03744a(((((struct oC4_int *)(t0))->v)), 0x0, 0x1C, (*(int *)0xC4B410C));
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = 0x80;
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC120D12;
        t5 = (FUN_0c187798());
    }
    return t5;
}

int FUN_0c150d1e(int a4, int a5)
{
    int stk[2];
    register int t0;
    register int t7;

    *(unsigned char *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    t0 = FUN_0c03f444(0x5, 0x0, 0x1);
    t7 = t0;
    if (t0 != 0) {
        FUN_0c037498(((((struct oC4_int *)(t0))->v)), 0x0, 0x1F, (*(int *)0xC4B40CC));
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC150C68;
        (((struct oAC_ushort *)(t0))->v) = 0x1F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        *(volatile int *)(((int)stk + 4));
        FUN_0c187798();
        t7 = *(signed char *)(((int)stk + 0));
        *(unsigned char *)((t0 + 0x2)) = t7;
    }
    return t7;
}

int FUN_0c1512a0(int a4, int a5)
{
    int stk[2];
    register int t0;
    register int t7;

    *(unsigned char *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    t0 = FUN_0c03f444(0x5, 0x0, 0x1);
    t7 = t0;
    if (t0 != 0) {
        FUN_0c037498(((((struct oC4_int *)(t0))->v)), 0x0, 0x1A, (*(int *)0xC4B40CC));
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC151000;
        (((struct oAC_ushort *)(t0))->v) = 0x1F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        *(volatile int *)(((int)stk + 4));
        FUN_0c187798();
        t7 = *(signed char *)(((int)stk + 0));
        *(unsigned char *)((t0 + 0x2)) = t7;
    }
    return t7;
}

int FUN_0c01f5c4(void)
{
    register int t0;
    register int t1;

    t0 = FUN_0c01cd40(0x8000);
    if ((short)t0 != 0) {
        *(unsigned int *)0xC30B6F8 = ((*(int *)0xC30B6F8) + 0x1);
    } else {
        *(unsigned int *)0xC30B6F8 = 0x0;
    }
    t1 = (short)t0;
    if ((int)(*(int *)0xC30B6F8) > (int)0x3C) {
        *(unsigned short *)0xC30540C = 0x0;
        t1 = 0x0;
    }
    t0 = *(short *)0xC30540C;
    *(unsigned short *)0xC30540C = (t0 - 1);
    if ((int)(short)(t0 - 1) < 0) {
        *(unsigned char *)0xC309859 = ((*(signed char *)0xC309859) + 0x1);
        return t1;
    }
    return FUN_0c184c48(0xC3050F4);
}

void FUN_0c02ab74(void)
{
    register int t0;

    t0 = *(short *)0xC30540C;
    *(unsigned short *)0xC30540C = (t0 + 0x1);
    if ((int)(short)((t0 + 0x1) - 1) < (int)0x258) {
        if ((int)(*(short *)0xC30540C) >= (int)0x98) {
            t0 = FUN_0c021ed2();
            if (t0 == 0) {
                t0 = FUN_0c021ee2();
                if (t0 != 0) {
                    *(unsigned char *)0xC30985A = ((*(signed char *)0xC30985A) + 0x1);
                    *(unsigned short *)0xC30EF6C = 0x14;
                    FUN_0c0573cc(0xFF000000, 0x0, 0x14);
    return;
                }
                return;
            }
            *(unsigned char *)0xC30985A = ((*(signed char *)0xC30985A) + 0x1);
            *(unsigned short *)0xC30EF6C = 0x14;
            FUN_0c0573cc(0xFF000000, 0x0, 0x14);
    return;
        }
        return;
    }
    *(unsigned char *)0xC30985A = ((*(signed char *)0xC30985A) + 0x1);
    *(unsigned short *)0xC30EF6C = 0x14;
    FUN_0c0573cc(0xFF000000, 0x0, 0x14);
}

int FUN_0c02a600(int a4)
{
    int stk[3];
    register int t0;
    register int t8;
    register int t11;

    t0 = *(short *)0xC30EF6C;
    *(unsigned short *)0xC30EF6C = (t0 - 1);
    if ((int)(short)(t0 - 1) < 0) {
        *(unsigned short *)0xC30EF6C = 0x0;
        (((struct o0_uchar *)0xC30985A)->v) = ((*(signed char *)0xC30985A) + 0x1);
        (((struct o1_uchar *)0xC30985A)->v) = 0x0;
    }
    t8 = FUN_0c022050();
    t11 = t8;
    if (t8 != 0) {
        FUN_0c0220c4(((int)stk + 0), (((int)stk + 0) + 0x4), (((int)stk + 0) + 0x8));
        t11 = (FUN_0c0222a4(((int)stk + 0), (((int)stk + 0) + 0x4), (((int)stk + 0) + 0x8)));
    }
    return t11;
}

int FUN_0c02cbcc(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    t0 = 0xC83C620;
    t1 = 0x1D0C;
    t2 = 0xC2738B8;
    t3 = (((((a4 << 2) << 2) + a4) << 2) + 0xC83C620);
    t4 = 0x0;
    for (;;) {
        t5 = *(signed char *)((t2 + 0x3));
        if ((int)t5 <= (int)a5) {
            t1 = (*(int *)((t3 + 0x0)));
            t0 = 0x1;
            t0 = ((int)t0 << (int)t4);
            t1 = (t1 | t0);
            *(unsigned int *)((t3 + 0x0)) = t1;
        }
        t4 = (t4 + 0x1);
        t2 = (t2 + 0x34);
        if ((int)t4 > (int)0x1F) {
            t4 = 0x0;
            t3 = (t3 + 0x4);
        }
        if ((unsigned int)t2 > (unsigned int)0xC2755C4) {
            break;
        }
    }
    return t5;
}

int FUN_0c03db0e(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = FUN_0c03add8(a4, a5, a6, a7);
    *(unsigned int *)((a4 + 0x4)) = t0;
    t1 = t0;
    if ((int)t0 >= 0) {
        if ((*(int *)((a4 + 0x4))) == 0) {
            t0 = *(signed char *)((a4 + 0x2));
            t2 = t0;
            if (t0 != 4) {
                (((struct o0_uchar *)0xC3DC242)->v) = 0x4;
                (((struct o1_uchar *)0xC3DC242)->v) = 0x0;
                t2 = 0x0;
            }
            t0 = t2;
        } else {
            t2 = FUN_0c03b05a();
            *(unsigned int *)((a4 + 0x18)) = t2;
            if (t2 != 0) {
                (((struct o0_uchar *)0xC3DC242)->v) = 0x2;
                (((struct o1_uchar *)0xC3DC242)->v) = 0x0;
                t2 = 0x0;
            } else {
                t3 = *(signed char *)((a4 + 0x2));
                t2 = t3;
                if (t3 != 4) {
                    (((struct o0_uchar *)0xC3DC242)->v) = 0x3;
                    (((struct o1_uchar *)0xC3DC242)->v) = 0x0;
                    t2 = 0x0;
                }
            }
            t0 = t2;
        }
        t1 = t0;
    }
    return t1;
}

int FUN_0c03fb78(int a4, int a5)
{
    register int t0;
    register int t6;
    register int t1;
    register int t2;

    t0 = (((struct o114_int *)(a4))->v);
    t6 = 0x1;
    if ((int)t0 < (int)(t0 + a5)) {
        t1 = (t0 << 2);
        t2 = t0;
        for (;;) {
            FUN_0c03fb58(((0x118 + a4) + t1));
            if ((*(int *)((((0x118 + a4) + t1) + 0x0))) == 0) {
                break;
            }
            t2 = (t2 + 0x1);
            (((struct o114_uint *)(a4))->v) = (((((struct o114_int *)(a4))->v)) + 0x1);
            t1 = (t1 + 0x4);
            if ((int)t2 >= (int)(t0 + a5)) {
                return 0x1;
            }
        }
        t6 = 0x0;
    }
    return t6;
}

int FUN_0c03fca8(int a4, int a5)
{
    register int t0;
    register int t6;
    register int t1;
    register int t2;

    t0 = (((struct o114_int *)(a4))->v);
    t6 = 0x1;
    if ((int)t0 < (int)(t0 + a5)) {
        t1 = (t0 << 2);
        t2 = t0;
        for (;;) {
            FUN_0c03fc88(((0x118 + a4) + t1));
            if ((*(int *)((((0x118 + a4) + t1) + 0x0))) == 0) {
                break;
            }
            t2 = (t2 + 0x1);
            (((struct o114_uint *)(a4))->v) = (((((struct o114_int *)(a4))->v)) + 0x1);
            t1 = (t1 + 0x4);
            if ((int)t2 >= (int)(t0 + a5)) {
                return 0x1;
            }
        }
        t6 = 0x0;
    }
    return t6;
}

int FUN_0c04b35a(int a4, int a5, int a6, int a7)
{
    register float u9;
    register float u10;
    register int t11;

    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) - ((((struct o5C_float *)(a4))->v)));
    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) - ((((struct o50_float *)(a4))->v)));
    u9 = *(float *)0xC04B474;
    u10 = (((struct o2C_float *)(a4))->v);
    t11 = *(signed char *)0xC541F44;
    if (((((u9 > u10)) ? 1 : 0) | ((((int)(unsigned char)t11 >= (int)0x7)) ? 1 : 0)) != 0) {
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    return ((((u9 > u10)) ? 1 : 0) | ((((int)(unsigned char)t11 >= (int)0x7)) ? 1 : 0));
}

int FUN_0c0521ea(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11)
{
    int stk[9];
    register int t0;
    register int t6;

    *(unsigned int *)(((int)stk + 20)) = a4;
    *(unsigned int *)(((int)stk + 24)) = a5;
    *(unsigned char *)(((int)stk + 28)) = a6;
    *(unsigned char *)(((int)stk + 32)) = a7;
    t0 = 0x0;
    for (;;) {
        *(int *)((int)stk + 16) = a11;
        *(int *)((int)stk + 12) = a10;
        *(int *)((int)stk + 8) = ((signed char)(a9 >> 0));
        *(int *)((int)stk + 4) = ((signed char)(a8 >> 0));
        *(int *)((int)stk + 0) = ((*(signed char *)(((int)stk + 32))));
        t6 = FUN_0c052184(t0, (*(int *)(((int)stk + 20))), (*(int *)(((int)stk + 24))), (*(signed char *)(((int)stk + 28))));
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x4) {
            break;
        }
    }
    return t6;
}

int FUN_0c0539c6(int a4, int a5, int a6, int a7)
{
    register int t1;

    FUN_0c0522be(0xC2414E0);
    t1 = 0xC5410FC;
    for (;;) {
        (((struct o1A0_uint *)(t1))->v) = a4;
        (((struct o19C_uint *)(t1))->v) = a5;
        *(unsigned int *)(((0x1FC + t1) + 0x4)) = a6;
        (((struct o1FC_uint *)(t1))->v) = a6;
        (((struct o240_uint *)(t1))->v) = a7;
        (((struct o228_float *)(t1))->v) = 0.0f;
        (((struct o22C_float *)(t1))->v) = 0.0f;
        (((struct o230_float *)(t1))->v) = 0.0f;
        t1 = (t1 + 0x2F8);
        if ((unsigned int)t1 >= (unsigned int)0xC541CDC) {
            break;
        }
    }
    return 0x230;
}

float math_vec2_cos_between(float f4, float f5, float f6, float f7)
{
    register float u0;
    register float u1;
    register float u2;

    u0 = (f5 * f5);
    u0 = u0 + f4 * f4;
    u1 = math_signed_sqrt(u0);
    u0 = (f7 * f7);
    u0 = u0 + f6 * f6;
    u2 = math_signed_sqrt(u0);
    u0 = (u1 * u2);
    if ((u1 * u2) == 0.0f) {
        u0 = (*(float *)0xC058448);
    }
    u1 = (f5 * f7);
    u1 = u1 + f6 * f4;
    return (u1 / u0);
}

int FUN_0c05ab24(int a4, int a5, int a6)
{
    int t1;

    if (((*(signed char *)0xC5429A8) == 3) && (t1 = *(signed char *)0xC5429AB, t1 == 0)) {
        *(volatile int *)(((a6 << 2) + 0xC2576D4));
        return FUN_0c05aab2();
    }
    *(volatile int *)(((a6 << 2) + 0xC257680));
    return FUN_0c05aab2();
}

int FUN_0c05ff24(void)
{
    register int t0;
    register int t1;

    t0 = FUN_0c037320(0x4, (*(int *)0xC4B410C));
    t1 = FUN_0c03f444(0x5, 0x0, t0);
    t0 = t1;
    if (t1 != 0) {
        FUN_0c03733c(t1, 0x4, (*(int *)0xC4B410C));
        *(unsigned char *)((t1 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t1 + 0x4)) = 0xC05FECC;
        (((struct o28_float *)(t1))->v) = -215.0f;
        (((struct o30_float *)(t1))->v) = (1.0f + 1.0f);
        (((struct oAC_ushort *)(t1))->v) = 0xF;
        (((struct oA9_uchar *)(t1))->v) = 0x21;
        t0 = 0xA9;
    }
    return t0;
}

int FUN_0c060c2c(int a4, int a5, int a6, int a7, int a8)
{
    math_vec3_accumulate((a4 + 0x28), a8);
    math_vec3_accumulate((a6 + 0x8), a8);
    math_vec3_accumulate((a4 + 0x178), a8);
    FUN_0c17c2d0((a5 + 0x28), a8);
    FUN_0c17c2d0((a7 + 0x8), a8);
    return (FUN_0c17c2d0((a5 + 0x178), a8));
}

int FUN_0c06420e(int a4, float f4, float f5)
{

    register int R0;
    register int R3;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    v0_0 = a4;
    w0_0 = f4;
    w0_1 = f5;
    w0_2 = (((struct o0_float *)0xC471A5C)->v);
    v0_1 = (0xC471A5C);
    w0_3 = (w0_2);
    if ((!(w0_0 > w0_2))) goto L_C064238;
    R0 = (0x4);
    if ((!(w0_1 > ((((struct o4_float *)(v0_1))->v))))) goto L_C064224;
    R0 = (((*(int *)((v0_0 + 0x0))) | 0x1));
    L_C064248:;
    *(unsigned int *)((v0_0 + 0x0)) = R0;
    L_C06425E:;
    return R0;
    L_C064224:;
    if ((!(w0_0 > w0_3))) goto L_C064238;
    if ((!(((((struct o4_float *)0xC471A5C)->v)) > w0_1))) goto L_C064238;
    R0 = (((*(int *)((v0_0 + 0x0))) | 0x2));
    goto L_C064248;
    L_C064238:;
    if ((!(w0_3 > w0_0))) goto L_C06425E;
    if ((!(w0_1 > ((((struct o4_float *)0xC471A5C)->v))))) goto L_C06424C;
    R0 = (((*(int *)((v0_0 + 0x0))) | 0x4));
    goto L_C064248;
    L_C06424C:;
    if ((!(w0_3 > w0_0))) goto L_C06425E;
    if ((!(((((struct o4_float *)0xC471A5C)->v)) > w0_1))) goto L_C06425E;
    v0_1 = *(int *)((v0_0 + 0x0));
    *(unsigned int *)((v0_0 + 0x0)) = (v0_1 | 0x8);
    R0 = ((v0_1 | 0x8));
    goto L_C06425E;
}

int FUN_0c064262(int a4, float f4, float f5)
{

    register int R0;
    register int R3;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    v0_0 = a4;
    w0_0 = f4;
    w0_1 = f5;
    w0_2 = (((struct o0_float *)0xC471A5C)->v);
    v0_1 = (0xC471A5C);
    w0_3 = (w0_2);
    if ((!(w0_0 > w0_2))) goto L_C06428C;
    R0 = (0x4);
    if ((!(w0_1 > ((((struct o4_float *)(v0_1))->v))))) goto L_C064278;
    R0 = (((*(int *)((v0_0 + 0x0))) | 0x10));
    L_C06429C:;
    *(unsigned int *)((v0_0 + 0x0)) = R0;
    L_C0642B2:;
    return R0;
    L_C064278:;
    if ((!(w0_0 > w0_3))) goto L_C06428C;
    if ((!(((((struct o4_float *)0xC471A5C)->v)) > w0_1))) goto L_C06428C;
    R0 = (((*(int *)((v0_0 + 0x0))) | 0x20));
    goto L_C06429C;
    L_C06428C:;
    if ((!(w0_3 > w0_0))) goto L_C0642B2;
    if ((!(w0_1 > ((((struct o4_float *)0xC471A5C)->v))))) goto L_C0642A0;
    R0 = (((*(int *)((v0_0 + 0x0))) | 0x40));
    goto L_C06429C;
    L_C0642A0:;
    if ((!(w0_3 > w0_0))) goto L_C0642B2;
    if ((!(((((struct o4_float *)0xC471A5C)->v)) > w0_1))) goto L_C0642B2;
    v0_1 = *(int *)((v0_0 + 0x0));
    *(unsigned int *)((v0_0 + 0x0)) = (v0_1 | 0x80);
    R0 = ((v0_1 | 0x80));
    goto L_C0642B2;
}

int FUN_0c06ab78(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;

    t3 = (((struct o376C_int *)(a4))->v);
    if (((t3 != 0) && (t0 = *(signed char *)((t3 + 0x41C)), t1 = *(signed char *)((a4 + 0x3721)), t0 == t1)) || (t2 = *(signed char *)((a4 + 0x15)), t2 == 2)) {
        t0 = *(signed char *)((a4 + 0x15));
        if (t0 != 0) {
            if (t0 != 1) {
                if (t0 != 2) {
                    return t0;
                }
                return ((int (*)(int, int, int, int))(0xC06AAFA))(a4, t3, a6, a7);
            }
            return ((int (*)(int, int, int, int))(0xC06A4B4))(a4, t3, a6, a7);
        }
        return FUN_0c06a264(a4);
    }
    (((struct o3717_uchar *)(a4))->v) = 0x40;
    (((struct o3718_uchar *)(a4))->v) = 0x0;
    return FUN_0c085cac(a4, 0x40, 0x0, a7);
}

int FUN_0c078f70(int a4, int a5, int a6, int a7)
{
    register int t0;

    if ((*(signed char *)((a4 + 0x16))) != 0) {
        t0 = FUN_0c07d2c4(a4, ((0x3744 + a4) + 0x2));
        if (t0 == 0) {
            (((struct o382A_ushort *)(a4))->v) = 0x0;
            return FUN_0c085d0c(a4);
        }
    }
    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return ((int (*)(int, int, int, int))(0xC078F3A))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC078EA4))(a4, a5, a6, a7);
}

int FUN_0c07d6cc(int a4)
{
    register int t2;
    register float u3;
    register float u4;
    register float u7;
    register float u10;
    int t12;
    register int t14;
    register int t16;

    if (((((struct o3760_int *)(a4))->v)) == 0) {
        t16 = (*(int *)((a4 + 0x38)));
    } else {
        t2 = (((struct o3760_int *)(a4))->v);
        u3 = (((struct o28_float *)(a4))->v);
        u4 = (((struct o28_float *)(t2))->v);
        u7 = (((((struct o30_float *)(t2))->v)) - ((((struct o30_float *)(a4))->v)));
        u7 = -u7;
        u10 = (u4 - u3);
        if ((u4 - u3) == 0.0f) {
            u10 = (*(float *)0xC07D7F0);
        }
        t12 = math_atan_angle16((u7 / u10));
        t14 = (0xFFFF & t12);
        if (0.0f > u10) {
            t14 = ((0xFFFF & t12) + 0x8000);
        }
        t16 = (unsigned short)(t14 + 0x4000);
    }
    return t16;
}

int FUN_0c07d720(int a4)
{
    register int t2;
    register float u3;
    register float u4;
    register float u7;
    register float u10;
    int t12;
    register int t14;
    register int t16;

    if (((((struct o3764_int *)(a4))->v)) == 0) {
        t16 = (*(int *)((a4 + 0x38)));
    } else {
        t2 = (((struct o3764_int *)(a4))->v);
        u3 = (((struct o28_float *)(a4))->v);
        u4 = (((struct o28_float *)(t2))->v);
        u7 = (((((struct o30_float *)(t2))->v)) - ((((struct o30_float *)(a4))->v)));
        u7 = -u7;
        u10 = (u4 - u3);
        if ((u4 - u3) == 0.0f) {
            u10 = (*(float *)0xC07D7F0);
        }
        t12 = math_atan_angle16((u7 / u10));
        t14 = (0xFFFF & t12);
        if (0.0f > u10) {
            t14 = ((0xFFFF & t12) + 0x8000);
        }
        t16 = (unsigned short)(t14 + 0x4000);
    }
    return t16;
}

int FUN_0c07efee(int a4, int a5)
{
    register int t4;
    register int t6;
    int t7;

    t4 = *(int *)((0xC259414 + ((*(signed char *)((a4 + 0x2))) << 2)));
    if (((*(signed char *)((((((signed char)a5 << 2) << 2) + t4) + 0x0))) != 99) && ((t6 = *(int *)((((((signed char)a5 << 2) << 2) + t4) + 0x8)), t6 == 0) && (t7 = *(int *)((((((signed char)a5 << 2) << 2) + t4) + 0x4)), ((((((unsigned short)((((struct o430_short *)(a4))->v)) | (unsigned short)((((struct o3834_short *)(a4))->v))) | ((unsigned short)((((struct o42C_short *)(a4))->v)) & 0x3C00)) & 0x3E00) & t7) & 0x200) != 0))) {
        (((struct o3731_uchar *)(a4))->v) = 0x0;
        return 0x1;
    }
    return 0x0;
}

int FUN_0c09ddb8(int a4, int a5, int a6, int a7)
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
                        return ((int (*)(int, int, int, int))(0xC09DA94))(a4, a5, a6, a7);
                    }
                    return ((int (*)(int, int, int, int))(0xC09DD7C))(a4, a5, a6, a7);
                }
                return ((int (*)(int, int, int, int))(0xC09D358))(a4, a5, a6, a7);
            }
            return ((int (*)(int, int, int, int))(0xC09D74E))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC09C98C))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC09CFDC))(a4, a5, a6, a7);
}

int FUN_0c0a804e(int a4)
{
    register int t0;
    register int t1;

    if ((int)((((struct o38F8_int *)(a4))->v)) >= (int)0x1) {
        t0 = *(int *)(((0x38F8 + a4) + 0x4));
        *(unsigned int *)(((0x38F8 + a4) + 0x4)) = (t0 - 1);
        if ((int)(t0 - 1) < 0) {
            *(unsigned int *)(((0x38F8 + a4) + 0x4)) = 0x2D;
            (((struct o38F8_uint *)(a4))->v) = 0x0;
        }
    }
    t0 = 0x371A;
    if ((*(signed char *)((a4 + 0x371A))) != 0) {
        *(unsigned short *)(((((short)(*(signed char *)((a4 + 0x371A))) * (short)0x10E0) + (0x468 + a4)) + 0x6)) = 0xF;
        t1 = *(signed char *)((a4 + 0x371A));
        (((struct o78_uint *)((((short)t1 * (short)0x10E0) + (0x468 + a4))))->v) = (((((struct o78_int *)((((short)t1 * (short)0x10E0) + (0x468 + a4))))->v)) + 0x300);
        t0 = 0x78;
    }
    return t0;
}

int FUN_0c0af7c8(int a4)
{
    register int t0;

    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        return FUN_0c085d0c(a4);
    }
    return (unsigned char)t0;
}

int FUN_0c0b1db6(int a4)
{
    register int t39;
    int t40;
    int t46;

    if ((*(signed char *)((a4 + 0x3715))) != 32) {
        if ((*(signed char *)((a4 + 0x3715))) != 14) {
            if ((*(signed char *)((a4 + 0x3715))) != 16) {
                if ((*(signed char *)((a4 + 0x3715))) != 33) {
                    if (((*(signed char *)((a4 + 0x3715))) == 5) && ((t39 = *(signed char *)((a4 + 0x16)), (int)t39 >= (int)0x2) && (t40 = *(signed char *)((a4 + 0x16)), (int)t40 <= (int)0x4))) {
                        return 0x0;
                    }
                    if (((*(signed char *)((a4 + 0x3715))) == 7) && (t46 = *(signed char *)((a4 + 0x3732)), t46 == 0)) {
                        return 0x0;
                    }
                    return 0x1;
                }
                return 0x0;
            }
            return 0x0;
        }
        return 0x0;
    }
    return 0x0;
}

int FUN_0c0bfdfe(void)
{
    register int t5;

    (((struct o6C_float *)((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC)))->v) = 0.0f;
    (((struct o70_float *)((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC)))->v) = 0.0f;
    (((struct o74_float *)((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC)))->v) = 0.0f;
    *(unsigned int *)(((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC) + 0x8)) = ((((struct o0_int *)0xC47245C)->v));
    t5 = FUN_0c0bc25e();
    (((struct o4_ushort *)0xC47245C)->v) = 0x1;
    return t5;
}


int FUN_0c0e6be4(int a4)
{
    register int t0;
    register int t1;

    t0 = FUN_0c037320(0x48, (*(int *)0xC4B410C));
    t1 = FUN_0c03f444(0x5, 0x0, t0);
    t0 = t1;
    if (t1 != 0) {
        FUN_0c03733c(t1, 0x48, (*(int *)0xC4B410C));
        (((struct oAC_ushort *)(t1))->v) = 0x40F;
        (((struct oA9_uchar *)(t1))->v) = 0x21;
        (((struct oA4_uint *)(t1))->v) = (a4 + 0x64);
        *(unsigned int *)((t1 + 0x10)) = a4;
        *(unsigned int *)((t1 + 0x4)) = 0xC0E6B48;
        t0 = 0xA4;
    }
    return t0;
}

int FUN_0c0ec326(int a4)
{
    int stk[2];
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t8;

    *(unsigned char *)(((int)stk + 0)) = a4;
    t0 = *(signed char *)(((int)stk + 0));
    t1 = *(int *)0xC4B410C;
    *(unsigned int *)(((int)stk + 4)) = (t0 + 0xA3);
    t2 = FUN_0c037320((t0 + 0xA3), t1);
    t3 = FUN_0c03f444(0x5, 0x0, t2);
    t8 = t3;
    if (t3 != 0) {
        FUN_0c03733c(t3, (*(int *)(((int)stk + 4))), (*(int *)0xC4B410C));
        *(unsigned int *)((t3 + 0x4)) = 0xC0EC1E4;
        *(unsigned char *)((t3 + 0x1)) = 0xFFFFFFFF;
        (((struct oAC_ushort *)(t3))->v) = 0x1F;
        (((struct oA9_uchar *)(t3))->v) = 0x21;
        t8 = *(signed char *)(((int)stk + 0));
        *(unsigned char *)((t3 + 0x2)) = t8;
    }
    return t8;
}

int FUN_0c0f42cc(int a4)
{
    register int t1;
    register int t4;
    register int t6;

    t1 = *(signed char *)((((short)(*(signed char *)((a4 + 0x2))) * (short)0x34) + 0xC2738BD));
    t4 = *(signed char *)(((((t1 << 2) << 1) + 0xC1CE270) + 0x6));
    t6 = *(signed char *)(((((t1 << 2) << 1) + 0xC1CE270) + 0x7));
    FUN_0c037ac4(a4, 0x0, 0xFFFFFFFF, (unsigned char)(*(signed char *)(((((t1 << 2) << 1) + 0xC1CE270) + 0x3))), (unsigned char)(*(signed char *)(((((t1 << 2) << 1) + 0xC1CE270) + 0x4))));
    return (FUN_0c037ac4(a4, 0x1, 0xFFFFFFFF, (unsigned char)t4, (unsigned char)t6));
}

int FUN_0c0f9116(void)
{
    register int t4;
    int t2;

    *(unsigned char *)0xC5421DE = ((*(signed char *)0xC5421DE) + 0x1);
    t4 = 0x14;
    if (((*(signed char *)0xC5429A8) == 0) && (t2 = *(signed char *)0xC5421DE, (t2 & 1) != 0)) {
        t4 = 0x15;
    }
    return FUN_0c059c7a(t4, 0x0);
}

int FUN_0c0fc722(void)
{
    if ((*(signed char *)0xC542A08) == (*(signed char *)0xC472ADC)) {
        if ((*(signed char *)0xC542A09) == (*(signed char *)0xC472ADD)) {
            if ((*(signed char *)0xC542A0A) == (*(signed char *)0xC472ADE)) {
                if ((*(signed char *)0xC542A0B) == (*(signed char *)0xC472ADF)) {
                    if ((*(signed char *)0xC542A0C) == (*(signed char *)0xC472AE0)) {
                        if ((*(signed char *)0xC542A0D) == (*(signed char *)0xC472AE1)) {
                            if ((*(signed char *)0xC542A0E) != (*(signed char *)0xC472AE2)) {
                                return 0x1;
                            }
                            return 0x0;
                        }
                        return 0x1;
                    }
                    return 0x1;
                }
                return 0x1;
            }
            return 0x1;
        }
        return 0x1;
    }
    return 0x1;
}

int FUN_0c10ee58(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        if (t0 != 5) {
                            if (t0 != 6) {
                                if (t0 != 7) {
                                    return t0;
                                }
                                return ((int (*)(int, int, int, int))(0xC10EE14))(a4, a5, a6, a7);
                            }
                            return FUN_0c10dc48(a4);
                        }
                        return FUN_0c10ed92(a4);
                    }
                    return FUN_0c10ec34(a4);
                }
                return ((int (*)(int, int, int, int))(0xC10EBDA))(a4, a5, a6, a7);
            }
            return FUN_0c10dd92(a4);
        }
        return FUN_0c10dbc8(a4);
    }
    return FUN_0c10db70(a4);
}

int FUN_0c11719c(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)(((0x41C + a4) + 0x0));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        if (t0 != 5) {
                            if (t0 != 6) {
                                return t0;
                            }
                            return FUN_0c116f60(a4);
                        }
                        return FUN_0c117136(a4, (0x41C + a4));
                    }
                    return FUN_0c117078(a4, (0x41C + a4));
                }
                return FUN_0c116d34(a4, (0x41C + a4), a6, a7);
            }
            return FUN_0c116e44(a4);
        }
        return FUN_0c116cde(a4, (0x41C + a4));
    }
    return FUN_0c116c2e(a4, (0x41C + a4), a6);
}

int FUN_0c137f0c(int a4)
{
    int stk[5];
    register int t0;
    register int t5;
    register int t3;

    *(unsigned char *)(((int)stk + 16)) = a4;
    t0 = FUN_0c03f444(0x1, 0x0, 0x3);
    t5 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((int)stk + 16)));
        *(unsigned int *)((t0 + 0x4)) = 0xC137CB4;
        FUN_0c07e2f4(t0, 0x30);
        *(int *)((int)stk + 12) = 0xF0;
        *(int *)((int)stk + 8) = 0x0;
        t3 = *(signed char *)((t0 + 0x1));
        *(int *)((int)stk + 4) = (~((int)0x1 << (int)t3));
        *(int *)((int)stk + 0) = 0x100;
        t5 = (FUN_0c064d24(t0, 0x1, 0x37, 0x0, 0x100, (~((int)0x1 << (int)t3)), 0x0, 0xF0));
    }
    return t5;
}

int FUN_0c148a48(int a4)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        t1 = t0;
        if (t0 != 1) {
        } else {
            FUN_0c0c2d56(a4, 0x2, (*(signed char *)((a4 + 0x1))));
            FUN_0c0c2ab6(a4, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738CA))));
            (((struct o48_float *)(a4))->v) = 1.0f;
            (((struct o44_float *)(a4))->v) = 1.0f;
            (((struct o40_float *)(a4))->v) = 1.0f;
            t1 = 0x40;
        }
        t0 = t1;
    } else {
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        FUN_0c0c2d56(a4, 0x2, (*(signed char *)((a4 + 0x1))));
        FUN_0c0c2ab6(a4, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738CA))));
        (((struct o48_float *)(a4))->v) = 1.0f;
        (((struct o44_float *)(a4))->v) = 1.0f;
        (((struct o40_float *)(a4))->v) = 1.0f;
        t0 = 0x40;
    }
    return t0;
}

int FUN_0c1632e0(int a4, int a5, int a6, float f4)
{
    register int t0;
    register int t1;

    t0 = FUN_0c162770(a4, a5, 0xC203AE0, ((((a6 << 2) + a6) << 2) + 0xC2A2E60));
    t1 = t0;
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x4)) = 0xC163144;
        (((struct oAC_ushort *)(t0))->v) = 0x41F;
        (((struct oB0_float *)(t0))->v) = 1.0f;
        (((struct o60_float *)(t0))->v) = f4;
        (((struct o58_float *)(t0))->v) = ((f4 * (1.0f + 1.0f)) / 3.0f);
        (((struct o17_uchar *)(t0))->v) = 0x1;
        t1 = 0x17;
    }
    return t1;
}

int FUN_0c16328c(int a4, int a5, int a6, float f4)
{
    register int t0;
    register int t2;

    t0 = FUN_0c162770(a4, a5, 0xC203AE0, ((((a6 << 2) + a6) << 2) + 0xC2A2E60));
    t2 = t0;
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x4)) = 0xC163144;
        (((struct oAC_ushort *)(t0))->v) = 0x41F;
        (((struct oB0_float *)(t0))->v) = 1.0f;
        (((struct o60_float *)(t0))->v) = f4;
        (((struct o58_float *)(t0))->v) = ((f4 * (1.0f + 1.0f)) / (*(float *)0xC163354));
        (((struct o17_uchar *)(t0))->v) = 0x0;
        t2 = 0x17;
    }
    return t2;
}

int FUN_0c16d330(int a4)
{
    register float t1;

    t1 = FUN_0c0e2240((a4 + 0x28), ((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532498) + 0x28));
    *(volatile signed char *)((a4 + 0x2));
    if ((*(float *)0xC16D44C) > t1) {
        (((struct o15_uchar *)(a4))->v) = 0x1;
        (((struct o16_uchar *)(a4))->v) = 0x0;
        (((struct o17_uchar *)(a4))->v) = 0x0;
        return 0x1;
    }
    return 0x0;
}

int FUN_0c0149e4(int a4)
{
    int t0;
    register int t2;

    t2 = *(signed char *)0xC3045F1;
    if ((t2 == 4) && (t0 = *(signed char *)0xC3045F2, t0 != 0)) {
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct o28_float *)(a4))->v) = 170.0f;
        (((struct o2C_float *)(a4))->v) = -28.0f;
        t0 = 0x2C;
    } else {
        if ((t2 == 5) && (t0 = *(signed char *)0xC3045F2, t0 != 0)) {
            (((struct oA8_uchar *)(a4))->v) = 0x1;
            (((struct o28_float *)(a4))->v) = 170.0f;
            (((struct o2C_float *)(a4))->v) = -82.0f;
            t0 = 0x2C;
        } else {
            (((struct oA8_uchar *)(a4))->v) = 0x0;
            t0 = 0xA8;
        }
    }
    return t0;
}

int FUN_0c0243a2(void)
{
    int stk[3];
    register int t4;
    register int t7;

    *(unsigned char *)0xC30985A = ((*(signed char *)0xC30985A) + 0x1);
    FUN_0c01e9e4();
    FUN_0c0573c0(0xFF000000, 0x0, 0x14);
    *(unsigned short *)0xC30EF6C = 0x16;
    FUN_0c013fe8();
    t4 = FUN_0c022050();
    t7 = t4;
    if (t4 != 0) {
        FUN_0c0220c4(((int)stk + 0), (((int)stk + 0) + 0x4), (((int)stk + 0) + 0x8));
        t7 = (FUN_0c0222a4(((int)stk + 0), (((int)stk + 0) + 0x4), (((int)stk + 0) + 0x8)));
    }
    return t7;
}

void FUN_0c0305d8(int a4)
{
    int t0;
    register int t1;

    if ((*(signed char *)0xC542254) == 0) {
        if (((*(signed char *)0xC5429B5) == 0) && (t0 = (((struct o78_int *)(a4))->v), t1 = *(int *)((0xC5423D0 + ((t0 << 2) << 2))), t1 != 2)) {
            (((struct o7C_uint *)(a4))->v) = 0x0;
            *(unsigned char *)(((a4 + 0x1) + 0x3)) = 0x0;
            *(unsigned char *)(((a4 + 0x1) + 0x2)) = 0x0;
            *(unsigned char *)(((a4 + 0x1) + 0x1)) = 0x0;
            *(unsigned char *)(((a4 + 0x1) + 0x0)) = 0x0;
            return;
        }
        t0 = FUN_0c0304e8(a4, 0x0);
        if (t0 != 0) {
            FUN_0c05aab6(0x0, 0x3);
    return;
        }
        return;
    }
}

int FUN_0c03da10(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x3));
    if (t0 != 0) {
        t1 = t0;
        if (t0 != 1) {
        } else {
            t2 = (((struct o20_short *)(a4))->v);
            (((struct o20_ushort *)(a4))->v) = (t2 - 1);
            t1 = t0;
            if ((short)(t2 - 1) == 0) {
                t0 = FUN_0c03df6a(a4, a5, a6, a7);
                *(unsigned char *)0xC3DC241 = 0x4;
                t1 = t0;
            }
        }
        t0 = t1;
    } else {
        *(unsigned char *)((a4 + 0x3)) = ((*(signed char *)((a4 + 0x3))) + 0x1);
        FUN_0c03df6a(a4, a5, a6, a7);
        FUN_0c03dd5c(0x5);
        t1 = FUN_0c03b3fc();
        (((struct o20_ushort *)(a4))->v) = 0x78;
        t0 = t1;
    }
    return t0;
}

int FUN_0c04d0d4(int a4)
{
    register int t0;
    register int t1;

    t0 = FUN_0c037320(0xB, (*(int *)0xC4B410C));
    t1 = FUN_0c03f444(0x1, 0x0, t0);
    t0 = t1;
    if (t1 != 0) {
        FUN_0c03733c(t1, 0xB, (*(int *)0xC4B410C));
        (((struct oAC_ushort *)(t1))->v) = 0x1F;
        (((struct oA9_uchar *)(t1))->v) = 0x80;
        *(unsigned char *)((t1 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t1 + 0x4)) = 0xC04CEFA;
        *(unsigned int *)((t1 + 0x10)) = a4;
        t0 = 0xFFFFFFFF;
    }
    return t0;
}

int FUN_0c05253c(int a4, int a5, int a6, int a7, int a8, int a9)
{
    (((struct o208_uint *)(((a4 * 0x2F8) + 0xC5410FC)))->v) = a6;
    (((struct o20C_uint *)(((a4 * 0x2F8) + 0xC5410FC)))->v) = a7;
    if (a8 != -1) {
        if ((int)((int)((int)0x168 / (int)a7)) > (int)a8) {
            (((struct o20C_uint *)(((a4 * 0x2F8) + 0xC5410FC)))->v) = a8;
        }
    }
    (((struct o210_uint *)(((a4 * 0x2F8) + 0xC5410FC)))->v) = a8;
    (((struct o214_uint *)(((a4 * 0x2F8) + 0xC5410FC)))->v) = a8;
    (((struct o218_uint *)(((a4 * 0x2F8) + 0xC5410FC)))->v) = a5;
    (((struct o21C_uint *)(((a4 * 0x2F8) + 0xC5410FC)))->v) = a9;
    (((struct o220_uint *)(((a4 * 0x2F8) + 0xC5410FC)))->v) = 0x0;
    return 0x220;
}

int FUN_0c0523ce(int a4, int a5, int a6, int a7)
{
    register int t5;

    if ((*(signed char *)((a4 + 0x3))) == 0) {
        FUN_0c052370(a4);
    }
    t5 = *(int *)((a4 + 0x14));
    if (t5 != -1) {
        if ((*(int *)((a4 + 0x14))) != 0) {
            *(unsigned int *)((a4 + 0x14)) = ((*(int *)((a4 + 0x14))) - 1);
            return t5;
        }
        FUN_0c052378(a4);
        return ((int (*)(int, int, int, int))(0xC052340))(a4, a5, a6, a7);
    }
    return t5;
}

int FUN_0c05aec8(int a4, int a5)
{
    register int t0;
    register float u4;

    t0 = 0x2D4;
    if ((a4 & 0x7) == 1) {
        t0 = 0x2DC;
    }
    u4 = ((float)(a5 & 0x7F) * (*(float *)((0xC46DE94 + t0))));
    return FUN_0c180a6c((a4 & 0x7), 0x10A0, (int)(u4 * (*(float *)(((((a4 & 0x7) << 2) + 0xC46E174) + 0x0)))));
}


int FUN_0c07d440(int a4)
{
    register int t0;
    register int t9;
    register int t10;
    register int t11;
    register int t12;
    register int t15;
    register int t6;

    t0 = (((struct o118_int *)(a4))->v);
    if ((int)(*(signed char *)(((t0 + 0x7E) + 0x0))) < 0) {
        t6 = (*(int *)0xC4B4524);
    } else {
        t6 = (*(int *)((((*(signed char *)(((t0 + 0x7E) + 0x0))) << 2) + 0xC4B4528)));
    }
    t9 = 0x0;
    t10 = 0x0;
    for (;;) {
        t11 = (((struct o74_short *)(t0))->v);
        t12 = *(int *)((t6 + 0x4));
        t10 = (t10 + (unsigned char)(*(signed char *)((((((t11 + (short)t9) << 2) << 1) + t12) + 0x4))));
        t15 = *(signed char *)((((((t11 + (short)t9) << 2) << 1) + t12) + 0x5));
        t9 = (t9 + 0x1);
        if (((unsigned char)t15 & 0xC0) != 0) {
            break;
        }
    }
    return t10;
}

int FUN_0c085204(int a4, float f4)
{
    register int t0;
    register int t11;

    t0 = FUN_0c08515a(a4, 0x3);
    t11 = 0x1;
    if (t0 != 0) {
        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)((*(int *)((t0 + 0x4)))))->v)) - (((math_sin_angle16((*(int *)((a4 + 0x38))))) * f4)));
        (((struct o30_float *)(a4))->v) = (((((struct o30_float *)((*(int *)((t0 + 0x4)))))->v)) - (((math_cos_angle16((*(int *)((a4 + 0x38))))) * f4)));
        t11 = 0x0;
    }
    return t11;
}

int FUN_0c08a286(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return ((int (*)(int, int, int, int))(0xC08A00E))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC089F4E))(a4, a5, a6, a7);
}

int FUN_0c0910f6(int a4)
{
    register int t0;
    register int t1;

    (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) + 0x1);
    t0 = (((struct o22_short *)(a4))->v);
    pl_ryoma_cue_table_next(a4, (((t0 << 1) + t0) + 0xC1C6136), ((((struct o20_short *)(a4))->v)), (a4 + 0x22));
    if (((((struct o20_short *)(a4))->v)) == 21) {
        FUN_0c1267e0(a4, 0x4E);
    }
    t0 = FUN_0c037bf6(a4);
    t1 = (unsigned char)t0;
    if ((unsigned char)t0 != 0) {
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t1 = 0x15;
    }
    return t1;
}

int FUN_0c0a87d4(int a4)
{
    register int t0;
    register int t1;

    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 == 0) {
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        t1 = (short)(t0 - 1);
        if ((short)(t0 - 1) == 0) {
            (((struct o50_float *)(a4))->v) = -20.0f;
            (((struct o5C_float *)(a4))->v) = -2.0f;
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            t1 = 0x15;
        }
        t0 = t1;
    } else {
        (((struct o50_float *)(a4))->v) = -20.0f;
        (((struct o5C_float *)(a4))->v) = -2.0f;
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t0 = 0x15;
    }
    return t0;
}


int FUN_0c0deb54(int a4, int a5, int a6)
{
    (((struct oA4_uint *)(a4))->v) = 0x0;
    FUN_0c0c57e0(a4, a5, a6);
    FUN_0c0c2ab6(a4, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738CB))));
    FUN_0c07e328(a4, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738C6))));
    (((struct o22_ushort *)(a4))->v) = 0xB4;
    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    return 0x15;
}

int FUN_0c0e2116(int a4)
{
    register int t2;
    register int t6;

    FUN_0c037320(0x77, (*(int *)0xC4B410C));
    t2 = FUN_0c03f444(0x5, 0x0, 0x1);
    t6 = t2;
    if (t2 != 0) {
        FUN_0c03744a(((((struct oC4_int *)(t2))->v)), 0x0, 0x77, (*(int *)0xC4B410C));
        *(unsigned int *)((t2 + 0x4)) = 0xC0E1FA4;
        *(unsigned char *)((t2 + 0x1)) = 0xFFFFFFFF;
        (((struct oAC_ushort *)(t2))->v) = 0xF;
        (((struct oA9_uchar *)(t2))->v) = 0x21;
        *(unsigned int *)((t2 + 0x10)) = a4;
        t6 = 0xA9;
    }
    return t6;
}

int FUN_0c0e39de(int a4)
{
    register float u8;

    if (((((struct o20_short *)(a4))->v)) != 0) {
        (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) - 1);
        u8 = ((((struct o58_float *)(a4))->v));
        u8 = u8 + (((float)((((struct o20_short *)(a4))->v)) / (*(float *)0xC0E3A88))) * (math_cos_angle16((((((struct o20_short *)(a4))->v)) << 13)));
        (((struct o28_float *)(a4))->v) = u8;
        if (((((struct o20_short *)(a4))->v)) == 0) {
            (((struct o28_float *)(a4))->v) = ((((struct o58_float *)(a4))->v));
        }
    }
    return FUN_0c0e34a8(a4);
}

float FUN_0c0e4ffc(int a4)
{
    register float u0;
    register int t1;
    register int t2;
    register float u5;
    register float u8;
    register int t9;
    int t10;
    register float u13;
    register float u16;

    u0 = *(float *)0xC0E50DC;
    t1 = (((struct oC8_int *)(a4))->v);
    t2 = *(int *)0xC542260;
    u5 = (float)(t2 & 0x1);
    if ((int)(t2 & 0x1) < 0) {
        u5 = ((float)(t2 & 0x1) + 4.2949673e+09f);
    }
    u8 = u0;
    u8 = u8 + u0 * u5;
    (((struct o88_float *)(t1))->v) = u8;
    t9 = (((struct oCC_int *)(a4))->v);
    t10 = *(int *)0xC542260;
    u13 = (float)(0x1 & t10);
    if ((int)(0x1 & t10) < 0) {
        u13 = ((float)(0x1 & t10) + 4.2949673e+09f);
    }
    u16 = u0;
    u16 = u16 + u0 * u13;
    (((struct o88_float *)(t9))->v) = u16;
    return u0;
}

int FUN_0c0e3940(int a4)
{
    register int t1;
    register int t5;

    if ((*(signed char *)0xC54098D) == 10) {
        t1 = *(short *)0xC540994;
        t5 = 0xC1CBC14;
        if ((*(signed char *)((a4 + 0x2))) == (*(int *)(((0xC288050 + (((*(signed char *)0xC54098E) << 2) << 2)) + 0x0)))) {
            t5 = 0xC1CBC08;
        }
        FUN_0c0e33cc(a4, t5, t1);
        (((struct o15_uchar *)(a4))->v) = 0x6;
        (((struct o16_uchar *)(a4))->v) = 0x2;
    }
    return FUN_0c0e34a8(a4);
}

int FUN_0c0e9a88(int a4, int a5, float f4)
{

    register int R3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    v0_0 = a4;
    v0_1 = a5;
    w0_0 = f4;
    v0_0 = ((*(int *)((((v0_1 << 2) + (0xC4 + v0_0)) + 0x0))));
    w0_2 = (0.0f);
    w0_1 = (1.0f);
    if ((!(0.0f > w0_0))) goto L_C0E9AA6;
    v0_1 = (0x20);
    if ((!(((((struct o20_float *)(v0_0))->v)) > w0_2))) goto L_C0E9AD6;
    L_C0E9AAE:;
    w0_2 = (((struct o20_float *)(v0_0))->v);
    (((struct o20_float *)(v0_0))->v) = (w0_2 + w0_0);
    v0_1 = (0x20);
    w0_3 = (0.0f);
    if (((w0_2 + w0_0) > 0.0f)) goto L_C0E9AC4;
    *(float *)((v0_0 + v0_1)) = w0_3;
    *(unsigned char *)((v0_0 + 0x0)) = 0x0;
    L_C0E9ACC:;
    w0_0 = *(float *)((v0_0 + v0_1));
    (((struct o1C_float *)(v0_0))->v) = w0_0;
    (((struct o18_float *)(v0_0))->v) = w0_0;
    v0_1 = (0x18);
    L_C0E9AD6:;
    return v0_1;
    L_C0E9AC4:;
    if ((w0_1 > (*(float *)((v0_0 + v0_1))))) goto L_C0E9ACC;
    *(float *)((v0_0 + v0_1)) = w0_1;
    goto L_C0E9ACC;
    L_C0E9AA6:;
    v0_1 = (0x20);
    if ((!(w0_1 > ((((struct o20_float *)(v0_0))->v))))) goto L_C0E9AD6;
    goto L_C0E9AAE;
}

int FUN_0c0ebda4(int a4, int a5, int a6, int a7)
{
    register int t0;
    register float u0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 10.0f);
    if (!(90.0f > ((((struct o2C_float *)(a4))->v)))) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    u0 = (((struct oBC_float *)(a4))->v);
    (((struct oB8_float *)(a4))->v) = u0;
    (((struct oB4_float *)(a4))->v) = u0;
    return 0xB4;
}

float FUN_0c0eef50(int a4, int a5)
{
    register float t1;
    register float u2;
    register float u4;

    t1 = math_cos_angle16(((((struct o41C_int *)(a4))->v)));
    u2 = ((t1 + 1.0f) / (1.0f + 1.0f));
    if (!(((t1 + 1.0f) / (1.0f + 1.0f)) > 0.0f)) {
        u2 = 0.0f;
    }
    u4 = u2;
    if (!(1.0f > u2)) {
        u4 = 1.0f;
    }
    (((struct o41C_uint *)(a4))->v) = (((((struct o41C_int *)(a4))->v)) + a5);
    (((struct oBC_float *)(a4))->v) = u4;
    (((struct oB8_float *)(a4))->v) = u4;
    (((struct oB4_float *)(a4))->v) = u4;
    return (t1 + 1.0f);
}

int FUN_0c0f0974(int a4, int a5)
{
    register int t1;
    register int t2;

    t1 = FUN_0c037320(0x15, (*(int *)0xC4B410C));
    t2 = FUN_0c03f444(0x5, 0x0, t1);
    if (t2 != 0) {
        FUN_0c03733c(t2, 0x15, (*(int *)0xC4B410C));
        *(unsigned int *)((t2 + 0x4)) = 0xC0F0934;
        *(unsigned char *)((t2 + 0x1)) = 0xFFFFFFFF;
        (((struct oAC_ushort *)(t2))->v) = 0xF;
        (((struct oA9_uchar *)(t2))->v) = 0x21;
        *(unsigned char *)((t2 + 0x2)) = a5;
    }
    return t2;
}

int FUN_0c0efad4(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return FUN_0c03f346(a4, a5, a6, a7);
            }
            return FUN_0c0ef1d8(a4);
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct o160_float *)(a4))->v) = (1.0f + 1.0f);
    }
    t0 = *(signed char *)((a4 + 0x2));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return FUN_0c0ef668(a4);
            }
            return FUN_0c0efa28(a4);
        }
        return FUN_0c0ef828(a4);
    }
    return FUN_0c0ef668(a4);
}

int FUN_0c0f4320(int a4)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x17));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
    } else {
        (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
        FUN_0c0f42cc(a4);
    }
    t0 = FUN_0c0f3d1c(a4);
    if (t0 == 0) {
        t1 = FUN_0c037bf6(a4);
        if ((unsigned char)t1 != 0) {
            (((struct o15_uchar *)(a4))->v) = 0x2;
            (((struct o16_uchar *)(a4))->v) = 0x0;
        }
        return FUN_0c038362(a4);
    }
    return t0;
}

int FUN_0c10726e(void)
{
    int stk[2];
    register int t4;
    register int t5;

    FUN_0c05af54(0x0);
    FUN_0c187798();
    FUN_0c187798();
    FUN_0c115120(0x8, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
    t4 = (((struct o0_int *)0xC5325B0)->v);
    (((struct o98_float *)(t4))->v) = 8.0f;
    (((struct o94_float *)(t4))->v) = 8.0f;
    t5 = (((struct o4_int *)0xC5325B0)->v);
    (((struct o98_float *)(t5))->v) = 8.0f;
    (((struct o94_float *)(t5))->v) = 8.0f;
    FUN_0c056e44(0x23, 0x7);
    return FUN_0c106510();
}

int FUN_0c115292(int a4, int a5, int a6, float f4)
{
    int stk[2];
    register int t0;
    register int t13;
    register int t1;
    register int t3;
    register int t4;
    register int t5;
    register int t6;

    t0 = *(signed char *)0xC5324AC;
    t13 = t0;
    if (t0 == 0) {
        t1 = FUN_0c037bf6(0xC532498);
        t13 = (unsigned char)t1;
        if ((unsigned char)t1 != 0) {
            FUN_0c115120(0x1, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
            t3 = (((struct o4_int *)0xC5325B0)->v);
            t4 = (((struct o0_int *)0xC5325B0)->v);
            (((struct oA0_float *)(t3))->v) = 1.0f;
            (((struct o9C_float *)(t3))->v) = 1.0f;
            (((struct oA0_float *)(t4))->v) = 1.0f;
            (((struct o9C_float *)(t4))->v) = 1.0f;
            t5 = (((struct o4_int *)0xC5325B0)->v);
            t6 = (((struct o0_int *)0xC5325B0)->v);
            (((struct o98_float *)(t5))->v) = 1.0f;
            (((struct o98_float *)(t6))->v) = 1.0f;
            (((struct o94_float *)(t5))->v) = 1.0f;
            (((struct o94_float *)(t6))->v) = 1.0f;
            t13 = 0x94;
        }
    }
    return t13;
}

int FUN_0c11f1ac(void)
{
    int stk[7];

    (((struct o0_uchar *)0xC4750AD)->v) = ((*(signed char *)0xC4750AD) + 0x1);
    (((struct o1_uchar *)0xC4750AD)->v) = 0x0;
    FUN_0c03f0aa();
    FUN_0c036de8(0x1D, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
    FUN_0c059c54(0x12);
    FUN_0c1202f8();
    FUN_0c187798();
    FUN_0c187798();
    return (FUN_0c120504(0x1, 0xD, (((int)stk + 0) + 0xC), ((int)stk + 0)));
}

int FUN_0c1393f4(int a4)
{
    int stk[5];
    register int t0;
    register int t5;
    register int t3;

    *(unsigned char *)(((int)stk + 16)) = a4;
    t0 = FUN_0c03f444(0x1, 0x0, 0x0);
    t5 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((int)stk + 16)));
        *(unsigned int *)((t0 + 0x4)) = 0xC1392D8;
        FUN_0c07e2f4(t0, 0x35);
        *(int *)((int)stk + 12) = 0x0;
        *(int *)((int)stk + 8) = 0x0;
        t3 = *(signed char *)((t0 + 0x1));
        *(int *)((int)stk + 4) = (~((int)0x1 << (int)t3));
        *(int *)((int)stk + 0) = 0x100;
        t5 = (FUN_0c064d24(t0, 0x3, 0x9, 0x0, 0x100, (~((int)0x1 << (int)t3)), 0x0, 0x0));
    }
    return t5;
}

float FUN_0c14ca80(int a4)
{
    register int t0;
    register int t3;
    register float u4;
    register float u5;
    register float u6;

    t0 = (((struct o41C_int *)(a4))->v);
    (((struct o41C_uint *)(a4))->v) = (t0 + 0x2000);
    t3 = (((struct oC8_int *)(a4))->v);
    u4 = (((struct o4_float *)0xC14CB8C)->v);
    u5 = (((struct o8_float *)0xC14CB8C)->v);
    u6 = (float)(int)((math_sin_angle16((t0 + 0x2000))) * ((((struct o0_float *)0xC14CB8C)->v)));
    (((struct o80_uint *)(t3))->v) = (int)((u6 * u4) / u5);
    (((struct o80_uint *)(((((struct oCC_int *)(a4))->v))))->v) = (-(int)((u6 * u4) / u5));
    return u5;
}

int FUN_0c16d384(int a4)
{
    register float t1;

    t1 = FUN_0c0e2240((a4 + 0x28), ((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532498) + 0x28));
    *(volatile signed char *)((a4 + 0x2));
    if (t1 > (*(float *)0xC16D450)) {
        (((struct o15_uchar *)(a4))->v) = 0x2;
        (((struct o16_uchar *)(a4))->v) = 0x0;
        (((struct o17_uchar *)(a4))->v) = 0x0;
        return 0x1;
    }
    return 0x0;
}

int FUN_0c16e9cc(int a4)
{
    register int t0;
    register int t1;

    t0 = *(short *)((a4 + 0x1E));
    *(unsigned short *)((a4 + 0x1E)) = (t0 - 1);
    t1 = (short)(t0 - 1);
    if ((int)(short)(t0 - 1) <= 0) {
        *(unsigned short *)((a4 + 0x1E)) = 0x3;
        *(unsigned short *)((a4 + 0x1C)) = (((*(short *)((a4 + 0x1C))) + 0x1) & 0x7);
        t0 = (((struct oC4_int *)(a4))->v);
        FUN_0c03744a(t0, (*(short *)((a4 + 0x1C))), 0x18, (*(int *)0xC4B40CC));
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0x31;
        (((struct o48_float *)(a4))->v) = 1.0f;
        (((struct o44_float *)(a4))->v) = 1.0f;
        (((struct o40_float *)(a4))->v) = 1.0f;
        t1 = 0x40;
    }
    return t1;
}

int FUN_0c16d5b4(int a4)
{
    if ((*(signed char *)((a4 + 0x16))) == 0) {
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        FUN_0c037ac4(a4, 0x0, 0xFFFFFFFF, 0x7, 0x3);
        (((struct o54_float *)(a4))->v) = 0.0f;
        (((struct o4C_float *)(a4))->v) = 0.0f;
    }
    FUN_0c037bf6(a4);
    FUN_0c038362(a4);
    FUN_0c16d384(a4);
    FUN_0c16d3d6(a4);
    FUN_0c16d304(a4);
    return FUN_0c16d4ec(a4);
}

int FUN_0c018f40(int a4, int a5, int a6, int a7)
{
    int stk[4];
    register int t0;

    *(unsigned char *)(((int)stk + 12)) = a4;
    *(unsigned char *)(((int)stk + 8)) = a5;
    *(unsigned char *)(((int)stk + 4)) = a6;
    *(unsigned char *)(((int)stk + 0)) = a7;
    *(unsigned char *)0xC30503C = 0xFFFFFFFF;
    *(unsigned char *)0xC30EFA2 = 0x1;
    t0 = FUN_0c01cc56(0x8, 0xC018FD8);
    *(unsigned char *)((t0 + 0x3)) = (*(signed char *)(((int)stk + 12)));
    (((struct o18_uchar *)(t0))->v) = (*(signed char *)(((int)stk + 8)));
    (((struct o19_uchar *)(t0))->v) = (*(signed char *)(((int)stk + 4)));
    (((struct o1A_uchar *)(t0))->v) = (*(signed char *)(((int)stk + 0)));
    return 0x1A;
}

int FUN_0c01ce30(void)
{
    int t0;
    register int t1;
    register int t2;

    (((struct o1_uchar *)0xC30EF9C)->v) = (*(signed char *)0xC30EF9C);
    (((struct o4_uchar *)0xC30EF9C)->v) = (*(signed char *)0xC30EF9F);
    (((struct o3_uchar *)0xC30EF9C)->v) = 0x0;
    (((struct o0_uchar *)0xC30EF9C)->v) = 0x0;
    (((struct o2_uchar *)0xC30EF9C)->v) = 0x0;
    t1 = FUN_0c2b0de4(0x12);
    t2 = t1;
    if (t1 != 0) {
        (((struct o3_uchar *)0xC30EF9C)->v) = (*(signed char *)((t1 + 0x0)));
        (((struct o0_uchar *)0xC30EF9C)->v) = (*(signed char *)((t1 + 0x2)));
        t1 = *(signed char *)0xC30EF9C;
        if (((unsigned char)t1 != 0) && (t0 = *(signed char *)0xC30EF9D, (unsigned char)t1 != (unsigned char)t0)) {
            (((struct o2_uchar *)0xC30EF9C)->v) = (*(signed char *)0xC30EF9C);
        }
        t0 = *(signed char *)0xC30EFA0;
        t1 = *(signed char *)0xC30EF9F;
        (((struct o5_uchar *)0xC30EF9C)->v) = (t1 & (~t0));
        t2 = (t1 & (~t0));
    }
    return t2;
}

int FUN_0c039fbc(void)
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

    t0 = FUN_0c039f24();
    *(unsigned int *)0xC3BD890 = 0x0;
    *(unsigned int *)0xC3C7DD4 = 0x0;
    t1 = t0;
    t0 = 0xC3C7DD4;
    t2 = 0xC3BD890;
    t3 = 0xC532498;
    t4 = 0xC3C7E00;
    t5 = 0xC532498;
    for (;;) {
        if ((unsigned int)t5 >= (unsigned int)0xC540978) {
            break;
        }
        t1 = 0x3714;
        t3 = t5;
        t2 = (*(signed char *)((t3 + t1)));
        if (t2 != 0) {
            t1 = (FUN_0c039a12(t3));
            *(unsigned int *)((t4 + 0x0)) = 0x1;
        } else {
            t6 = t0;
            t7 = t2;
            t8 = t3;
        }
        t5 = (t5 + 0x3938);
        t0 = t6;
        t2 = t7;
        t3 = t8;
        t4 = (t4 + 0x4);
    }
    return t1;
}

int FUN_0c058854(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = (unsigned short)a5;
    if ((int)((unsigned short)a5 - (unsigned short)a6) > (int)0x8000) {
        t1 = 0x10000;
        t0 = ((unsigned short)a5 - 0x10000);
    }
    t2 = t0;
    if ((int)(t0 - (unsigned short)a6) < (int)0xFFFF8000) {
        t2 = (t0 + 0x10000);
    }
    t0 = t2;
    if (((int)(t2 - (unsigned short)a6) >= (int)(a7 & 0x7FFF)) || ((int)(t2 - (unsigned short)a6) <= (int)(-(a7 & 0x7FFF)))) {
        t3 = (-(a7 & 0x7FFF));
        if ((int)(t2 - (unsigned short)a6) >= 0) {
            t3 = (a7 & 0x7FFF);
        }
        t0 = ((unsigned short)a6 + t3);
    }
    *(unsigned int *)((a4 + 0x0)) = (unsigned short)t0;
    return t1;
}

int FUN_0c05f71a(void)
{
    if ((*(int *)0xC5421D8) != 0) {
        return ((*(signed char *)0xC46E1CC) + 0x1);
    }
    return 0x0;
}

int FUN_0c0701c2(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x15));
    switch (t0) {
    case 0:
        FUN_0c070016(a4);
        break;
    case 1:
        FUN_0c0700b0(a4);
        break;
    case 2:
        FUN_0c070162(a4, a5, a6, a7);
        break;
    }
    (((struct o382E_ushort *)(a4))->v) = 0x0;
    (((struct o374A_uchar *)(a4))->v) = 0x2;
    return 0x374A;
}
