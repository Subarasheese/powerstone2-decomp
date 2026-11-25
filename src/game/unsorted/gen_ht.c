/* Straight-line functions with calls and guards (batch gen_ht): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o126_uchar { char p[0x126]; unsigned char v; };
struct o12E_short { char p[0x12E]; short v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17C_float { char p[0x17C]; float v; };
struct o180_int { char p[0x180]; int v; };
struct o180_uint { char p[0x180]; unsigned int v; };
struct o19C_uint { char p[0x19C]; unsigned int v; };
struct o1A0_uint { char p[0x1A0]; unsigned int v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o24_float { char p[0x24]; float v; };
struct o24_short { char p[0x24]; short v; };
struct o240_uint { char p[0x240]; unsigned int v; };
struct o244_uint { char p[0x244]; unsigned int v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2C8_uint { char p[0x2C8]; unsigned int v; };
struct o2EC_uint { char p[0x2EC]; unsigned int v; };
struct o30_float { char p[0x30]; float v; };
struct o3726_uchar { char p[0x3726]; unsigned char v; };
struct o372C_uchar { char p[0x372C]; unsigned char v; };
struct o3818_short { char p[0x3818]; short v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_short { char p[0x4]; short v; };
struct o40_float { char p[0x40]; float v; };
struct o404_int { char p[0x404]; int v; };
struct o41C_float { char p[0x41C]; float v; };
struct o41C_ushort { char p[0x41C]; unsigned short v; };
struct o44_float { char p[0x44]; float v; };
struct o46C_int { char p[0x46C]; int v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o64_ushort { char p[0x64]; unsigned short v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct oA4_int { char p[0xA4]; int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC_float { char p[0xC]; float v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oD0_int { char p[0xD0]; int v; };
int FUN_0c037bf6(int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int, int);
int FUN_0c0522be(int);
int FUN_0c052364(int, int);
int FUN_0c052640(int, int, int);
int FUN_0c056e44(int, int);
int FUN_0c064d5a(int, int);
int FUN_0c074602(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c0c2d56(int, int, int);
int FUN_0c107084(void);
int FUN_0c115120(int, int, int, int, float);
int FUN_0c11b708(int, int, int, int);
int FUN_0c13dffc(int);
int FUN_0c14304a(int);
int FUN_0c145dd2(int, int, int, int);
int FUN_0c150010(int, int, int, Stk3, float, float, float, float);
int FUN_0c1502e8(int, int, int, int, int, int);
int FUN_0c15b478(int, int, int, int, int, int, int, int);
int FUN_0c15d386(int, int, int, int, int);
int FUN_0c16516e(int, int, int);
int FUN_0c172168(void);
int FUN_0c173558(int, int, int);
int FUN_0c175898(void);
extern float FUN_0c17c450();
int math_atan2_angle16(float, float);
int math_mat_get_translate(int, int);
int memset(int, int, int);
int nlAddVector3op(int, int, int);
float nlInnerProduct(int, int);
int nlInvertMatrix(int);
int nlLookAt(int, int, int);
float nlScalor(int);
int nlSelectMatrixStack(int);
int nlStoreMatrix(int);
int nlSubVector3op(int, int, int);
int nlUnitMatrix(void);
int thunk_FUN_0c058310(int, int);
int cam_set_view_matrix(int a4);
int FUN_0c14f824(int a4, int a5);
int FUN_0c14eaaa(int a4, int a5, int a6, int a7);
int FUN_0c0e91a0(void);
int FUN_0c07a208(int a4);
int FUN_0c143074(int a4);
int FUN_0c11bae2(int a4, int a5, int a6, int a7);
int FUN_0c15fa88(int a4, int a5, int a6, int a7);
int FUN_0c13e09e(int a4, int a5, int a6, int a7, float f4);
int FUN_0c0c3e3a(int a4);
int FUN_0c0d30ea(int a4, int a5);
int FUN_0c0d7ed0(int a4, int a5, int a6, int a7);
void FUN_0c14767c(int a4, int a5, int a6, int a7, int a8, float f4);
void FUN_0c147fd0(int a4, int a5, int a6, int a7, float f4);
void FUN_0c14803c(int a4, int a5, int a6, int a7, float f4);
int FUN_0c15fb04(int a4, int a5, int a6, int a7);
int FUN_0c0e82fc(int a4, int a5, int a6, int a7);
int FUN_0c145eb2(int a4, int a5, int a6);
int FUN_0c15fa0c(int a4, int a5, int a6, int a7, float f4);
void FUN_0c1718d4(int a4, int a5);
void FUN_0c053ccc(int a4, int a5, int a6, int a7, int a8);
void FUN_0c063ea0(int a4, float f4);
void FUN_0c147f54(int a4, int a5, int a6, int a7);
void FUN_0c1679c2(int a4, int a5, int a6, int a7);
int FUN_0c0dc1bc(int a4, int a5, int a6, int a7);
void FUN_0c139d06(int a4, int a5, int a6, int a7, int a8);
int FUN_0c16e0f2(int a4, int a5, int a6, int a7);
int FUN_0c0373ee(int a4, int a5, int a6, int a7);
void FUN_0c11a22e(int a4, int a5, int a6, int a7);
int FUN_0c1070c4(int a4, int a5, int a6, int a7, float f4);
int FUN_0c15f9b4(int a4, int a5, int a6, int a7);
int FUN_0c1758d4(int a4, int a5, int a6);
void FUN_0c1377a8(int a4, int a5, int a6, int a7);
void FUN_0c11c036(int a4, int a5, int a6, int a7);
void FUN_0c11c2a8(int a4, int a5, int a6, int a7);
void FUN_0c14607c(int a4, int a5, int a6, int a7);
void FUN_0c1463b8(int a4, int a5, int a6, int a7);
int FUN_0c0c3ed4(int a4);
void FUN_0c15acb0(int a4, int a5, int a6, int a7);
void FUN_0c13a90e(int a4, int a5, int a6, int a7);
void FUN_0c13abe2(int a4, int a5, int a6, int a7);
void FUN_0c13b08c(int a4, int a5, int a6, int a7);
void FUN_0c13b35e(int a4, int a5, int a6, int a7);
void FUN_0c13b632(int a4, int a5, int a6, int a7);
void FUN_0c13b7c0(int a4, int a5, int a6, int a7);
void FUN_0c1470ea(int a4, int a5, int a6, int a7, float f4);
int FUN_0c150286(int a4, int a5, int a6, int a7, int a8, float f4);
void FUN_0c166772(int a4, int a5, int a6, int a7);
int FUN_0c136f78(int a4, int a5, int a6, int a7);
int FUN_0c1609f8(int a4, int a5, int a6, int a7);
int FUN_0c03744a(int a4, int a5, int a6, int a7);
int FUN_0c0ced40(int a4, int a5, int a6, int a7);
int FUN_0c0dd78a(int a4, int a5, int a6);
int FUN_0c146b30(int a4, int a5, int a6, int a7);
void FUN_0c16695a(int a4, int a5, int a6, int a7);
void FUN_0c168bb8(int a4, int a5, int a6, int a7);
void FUN_0c16c150(int a4, int a5, int a6, int a7);
void FUN_0c16c1bc(int a4, int a5, int a6, int a7);
void FUN_0c13a640(int a4, int a5, int a6, int a7);
void FUN_0c13a758(int a4, int a5, int a6, int a7);
void FUN_0c13ad68(int a4, int a5, int a6, int a7);
void FUN_0c13b1a8(int a4, int a5, int a6, int a7);
void FUN_0c15b320(int a4, int a5, int a6, int a7);
void FUN_0c163cc0(int a4, int a5, int a6, int a7);
void FUN_0c1673e0(int a4, int a5, int a6, int a7);
void FUN_0c03f608(int a4);
void FUN_0c03f78a(int a4);
void FUN_0c03f90c(int a4);
void FUN_0c03fa8c(int a4);
void FUN_0c0deb00(int a4, int a5, int a6, int a7);
int FUN_0c11563c(int a4, float f4);
void FUN_0c1478b8(int a4, int a5, int a6, int a7);
int FUN_0c0528f4(int a4);
void FUN_0c056be6(int a4, int a5);
void FUN_0c14672c(int a4, int a5, int a6, int a7);
void FUN_0c1468e8(int a4, int a5, int a6, int a7);
int FUN_0c15aed8(int a4, int a5, int a6, int a7);
void FUN_0c15b42c(int a4, int a5, int a6, int a7);
void FUN_0c160d32(int a4, int a5, int a6, int a7);
int FUN_0c0f105c(int a4, float f4);
void FUN_0c168160(int a4, int a5, int a6, int a7);
void FUN_0c16868c(int a4, int a5, int a6, int a7);
int FUN_0c056c28(int a4, int a5);
int FUN_0c0dd7d2(int a4, int a5, int a6);
void FUN_0c0f2960(int a4);
void FUN_0c15877c(int a4, int a5, int a6, int a7);
int FUN_0c03fcfc(int a4);
int FUN_0c03fbcc(int a4);
int FUN_0c0c8f70(int a4);
void FUN_0c0d613e(int a4, int a5);

int cam_set_view_matrix(int a4)
{
    int stk[6];

    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0xC)) = *(struct mv3 *)((0xC8 + a4)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)((0xF8 + a4)); }
    FUN_0c052640(a4, (((int)stk + 0) + 0xC), ((int)stk + 0));
    (((struct o2EC_uint *)(a4))->v) = (math_atan2_angle16(((*(float *)(((int)stk + 12))) - (*(float *)(((int)stk + 0)))), ((*(float *)(((int)stk + 20))) - (*(float *)(((int)stk + 8))))));
    nlSelectMatrixStack(0x2);
    nlUnitMatrix();
    nlLookAt((((int)stk + 0) + 0xC), ((int)stk + 0), ((((struct o180_int *)(a4))->v)));
    nlStoreMatrix((a4 + 0x78));
    nlStoreMatrix((a4 + 0x38));
    nlInvertMatrix((a4 + 0x78));
    return (nlSelectMatrixStack(0x1));
}

int FUN_0c14f824(int a4, int a5)
{
    int stk[6];
    register int t0;
    register int t4;
    register int t7;
    register int t9;

    *(unsigned char *)(((int)stk + 8)) = a4;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 8) + 0x4)) = *(struct mv3 *)(a5); }
    t0 = *(int *)0xC542260;
    nlAddVector3op((((int)stk + 8) + 0x4), (((int)stk + 8) + 0x4), (((((0x7 & ((unsigned int)t0 >> 1)) << 1) + (0x7 & ((unsigned int)t0 >> 1))) << 2) + 0xC202DA8));
    t4 = *(int *)0xC542260;
    *(int *)((int)stk + 4) = (((((t4 & 0x3) << 1) + (t4 & 0x3)) << 2) + 0xC202E08);
    *(int *)((int)stk + 0) = 0x0;
    t7 = FUN_0c1502e8((*(signed char *)(((int)stk + 8))), 0x1, 0x1, (((int)stk + 0) + 0xC), 0x0, (((((t4 & 0x3) << 1) + (t4 & 0x3)) << 2) + 0xC202E08));
    t9 = t7;
    if (t7 != 0) {
        { struct mv4 { int w[4]; }; *(struct mv4 *)((((((struct oC4_int *)(t7))->v)) + 0x14)) = *(struct mv4 *)(0xC202D54); }
        (((struct o4_float *)((0x41C + t7)))->v) = 1.0f;
        *(unsigned short *)((t7 + 0x1E)) = 0x0;
        t9 = 0x0;
    }
    return t9;
}

int FUN_0c14eaaa(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t3;
    register int t4;

    t0 = *(signed char *)(((0x41C + a4) + 0x5));
    *(unsigned char *)(((0x41C + a4) + 0x5)) = (t0 - 1);
    t1 = (signed char)(t0 - 1);
    if ((signed char)(t0 - 1) == 0) {
        t0 = *(int *)(((((*(signed char *)(((0x41C + a4) + 0x4))) << 2) + (0xC4 + a4)) + 0x18));
        if ((*(signed char *)((t0 + 0x0))) != 0) {
            *(unsigned char *)(((0x41C + a4) + 0x5)) = 0x1;
            t1 = 0x1;
        } else {
            *(unsigned char *)(((0x41C + a4) + 0x5)) = 0x2;
            t3 = *(signed char *)(((0x41C + a4) + 0x4));
            t4 = ((~(((~(t3 + 0x1)) + 0x1) & 0x1)) + 0x1);
            if ((int)(t3 + 0x1) >= 0) {
                t4 = ((t3 + 0x1) & 0x1);
            }
            *(unsigned char *)(((0x41C + a4) + 0x4)) = t4;
            t3 = (((struct oD0_int *)(a4))->v);
            *(unsigned char *)((t0 + 0x0)) = 0x1;
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x6C)) = *(struct mv3 *)((t3 + 0x6C)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x78)) = *(struct mv3 *)((t3 + 0x78)); }
            *(unsigned short *)((t0 + 0x6)) = ((*(short *)((t0 + 0x6))) | 0x400);
            (((struct o14_float *)(t0))->v) = 1.0f;
            t1 = 0x14;
        }
    }
    return t1;
}

int FUN_0c0e91a0(void)
{
    register int t1;
    register int t2;
    register int t3;
    register int t0;
    register int t7;

    t1 = 0x0;
    t2 = 0x0;
    t3 = 0x0;
    for (;;) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)((0xC541068 + t3)) = *(struct mv3 *)((0xC1CCC00 + t3)); }
        if ((*(int *)0xC540D94) != 0) {
            t0 = 0x6F0;
            t0 = (t0 + 0xC540978);
            t0 = (t0 + t2);
            t7 = (nlAddVector3op(t0, t0, ((*(int *)0xC540D94) + 0x28)));
        } else {
            (((struct o8_float *)((0xC541068 + t1)))->v) = 0.0f;
            (((struct o4_float *)((0xC541068 + t1)))->v) = 0.0f;
            *(float *)(((0xC541068 + t1) + 0x0)) = 0.0f;
            t7 = 0x4;
        }
        t3 = (t3 + 0xC);
        t1 = (t1 + 0xC);
        t2 = (t2 + 0xC);
        if ((unsigned int)t3 >= (unsigned int)0x30) {
            break;
        }
    }
    return t7;
}

int FUN_0c07a208(int a4)
{
    thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532564))) + 0x28), (a4 + 0x28));
    FUN_0c074602(a4);
    (((struct o5C_float *)(a4))->v) = (((((struct o5C_float *)(a4))->v)) / 10.0f);
    FUN_0c07e79c(a4, 0xFFFFFFFF, 0x4, 0x30, 0xFFFFFFFF, 0x4, 0x30);
    FUN_0c037bf6(a4);
    (((struct o372C_uchar *)(a4))->v) = 0x0;
    (((struct o3726_uchar *)(a4))->v) = 0x0;
    *(unsigned short *)((a4 + 0x1C)) = 0x78;
    *(unsigned short *)((a4 + 0x1E)) = 0x3;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x37C4 + a4)) = *(struct mv3 *)((a4 + 0x28)); }
    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
    return 0x16;
}

int FUN_0c143074(int a4)
{
    int stk[6];

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register float w0_0;
    register float w0_1;
    v0_2 = a4;
    v0_1 = (0x20);
    v0_0 = (v0_2);
    if ((((((struct o20_short *)(v0_2))->v)) == 0)) goto L_C14308C;
    *(unsigned short *)((v0_0 + v0_1)) = ((*(short *)((v0_0 + v0_1))) - 1);
    L_C1430DA:;
    v0_2 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_2 - 1);
    v0_1 = ((short)(v0_2 - 1));
    if (((int)(short)(v0_2 - 1) > 0)) goto L_C1430EA;
    L_C1430E6:;
    v0_1 = ((FUN_0c14304a(v0_0)));
    L_C1430EA:;
    return v0_1;
    L_C14308C:;
    v0_1 = (0x404);
    if ((((((struct o404_int *)(v0_0))->v)) == 0)) goto L_C1430DA;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0xC)) = *(struct mv3 *)((0x178 + v0_0)); }
    w0_1 = ((float (*)(int))(FUN_0c17c450))((((int)stk + 0) + 0xC));
    w0_0 = (w0_1);
    if ((w0_1 == 0.0f)) goto L_C1430DA;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)((v0_0 + 0x4C)); }
    w0_1 = ((float (*)(int, Stk3))(FUN_0c17c450))(((int)stk + 0), *(Stk3 *)(((int)stk + 0)));
    w0_0 = (w0_1);
    if ((w0_1 == 0.0f)) goto L_C1430DA;
    w0_1 = nlInnerProduct((((int)stk + 0) + 0xC), ((int)stk + 0));
    w0_0 = (w0_1);
    if ((-0.5f > w0_1)) goto L_C1430E6;
    goto L_C1430DA;
}

int FUN_0c11bae2(int a4, int a5, int a6, int a7)
{
    int stk[12];
    register int t0;
    register int t10;
    register int t5;

    *(unsigned int *)(((int)stk + 16)) = a4;
    *(unsigned int *)(((int)stk + 20)) = a5;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 16) + 0x14)) = *(struct mv3 *)(0xC1FC7F4); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 16) + 0x8)) = *(struct mv3 *)(0xC1FC800); }
    t0 = FUN_0c03f444(0x5, 0x0, 0x1, a7);
    t10 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC11B708;
        *(unsigned char *)((t0 + 0x2)) = (*(signed char *)(((int)stk + 20)));
        *(unsigned short *)((t0 + 0x1E)) = (*(int *)(((int)stk + 16)));
        FUN_0c11b708(t0, 0x0, 0x0, 0x0);
        *(int *)((int)stk + 12) = (((int)stk + 16) + 0x8);
        *(int *)((int)stk + 8) = (((int)stk + 12) + 0x18);
        *(int *)((int)stk + 4) = 0x64;
        t5 = (*(int *)0xC2920C8);
        *(int *)((int)stk + 0) = t5;
        t10 = (FUN_0c15b478(0xFFFFFFFF, (t0 + 0x64), t0, (*(int *)((((((struct o46C_int *)((*(int *)0xC4B410C)))->v)) + 0x0))), t5, 0x64, (((int)stk + 12) + 0x18), (((int)stk + 16) + 0x8)));
    }
    return t10;
}

int FUN_0c15fa88(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t5;
    register int t3;

    t0 = FUN_0c03f444(0x5, 0x0, 0x1, a7);
    t5 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned int *)((t0 + 0x4)) = 0xC15FB04;
        *(unsigned int *)((t0 + 0x10)) = a4;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)((a4 + 0x28)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x34)) = *(struct mv3 *)((a4 + 0x34)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x40)) = *(struct mv3 *)((a4 + 0x40)); }
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0x1F;
        (((struct oA9_uchar *)(t0))->v) = 0x1;
        t3 = (((struct oC4_int *)(t0))->v);
        FUN_0c03744a(t3, 0x0, 0x4E, (*(int *)0xC4B40CC));
        *(unsigned char *)((t3 + 0x0)) = 0x1;
        *(unsigned short *)((t3 + 0x6)) = 0xF;
        t5 = 0xF;
    }
    return t5;
}



int FUN_0c0d30ea(int a4, int a5)
{
    int stk[6];
    register float u0;
    register int t10;
    register int t11;
    register float u4;

    *(unsigned int *)(((int)stk + 4)) = a5;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x8)) = *(struct mv3 *)((a4 + 0x28)); }
    u0 = (((struct o0_float *)0xC0D31E4)->v);
    if ((*(signed char *)((a4 + 0x2))) != 0) {
        u4 = ((*(float *)(((int)stk + 12))) - u0);
    } else {
        u4 = ((*(float *)(((int)stk + 12))) + u0);
    }
    *(float *)(((int)stk + 12)) = u4;
    *(float *)(((int)stk + 16)) = ((*(float *)(((int)stk + 16))) + u0);
    *(float *)(((int)stk + 20)) = ((*(float *)(((int)stk + 20))) - ((((struct o4_float *)0xC0D31E4)->v)));
    t10 = (*(int *)(((int)stk + 4)));
    *(int *)((int)stk + 0) = t10;
    t11 = *(signed char *)((a4 + 0x2));
    *(unsigned int *)(((int)stk + 8)) = (0xC1C7F0C + ((((t11 << 1) + t11) << 2) << 1));
    return (FUN_0c15d386(0x1, (((int)stk + 0) + 0xC), (*(int *)(((int)stk + 8))), ((0xC1C7F0C + ((((t11 << 1) + t11) << 2) << 1)) + 0xC), t10));
}

int FUN_0c0d7ed0(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    if ((int)(*(signed char *)0xC54223C) > (int)0x1) {
        return FUN_0c03f346(a4, 0x1, a6, a7);
    }
    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        
        t1 = t0;
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        t0 = *(signed char *)((a4 + 0x2));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)((0xC28768C + (((t0 << 1) + t0) << 2))); }
        *(unsigned int *)((a4 + 0x38)) = (int)(((float)(*(int *)((0xC2876A4 + ((*(signed char *)((a4 + 0x2))) << 2)))) * 65536.0f) / 360.0f);
        (((struct o126_uchar *)(a4))->v) = 0x2;
        t1 = 0x126;
    }
    return t1;
}

void FUN_0c14767c(int a4, int a5, int a6, int a7, int a8, float f4)
{
    int stk[5];
    register int t0;

    *(unsigned char *)(((int)stk + 12)) = a4;
    *(unsigned char *)(((int)stk + 8)) = a5;
    *(unsigned int *)(((int)stk + 4)) = a6;
    *(unsigned int *)(((int)stk + 0)) = a7;
    *(float *)(((int)stk + 16)) = f4;
    t0 = FUN_0c03f444(0x5, 0x0, 0x4, a7);
    if (t0 != 0) {
        (((struct o41C_float *)(t0))->v) = (*(float *)(((int)stk + 16)));
        *(unsigned int *)(((0x41C + t0) + 0x4)) = (*(int *)((a8 + 0x4)));
        *(unsigned int *)(((0x41C + t0) + 0x8)) = (*(int *)((a8 + 0x8)));
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((int)stk + 12)));
        *(unsigned char *)((t0 + 0x2)) = (*(signed char *)(((int)stk + 8)));
        *(unsigned int *)((t0 + 0x4)) = 0xC1472DC;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oCC_int *)(t0))->v)) + 0x6C)) = *(struct mv3 *)((*(int *)(((int)stk + 4)))); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oCC_int *)(t0))->v)) + 0x84)) = *(struct mv3 *)((*(int *)(((int)stk + 0)))); }
    }
}

void FUN_0c147fd0(int a4, int a5, int a6, int a7, float f4)
{
    int stk[5];
    register int t0;

    *(unsigned char *)(((int)stk + 12)) = a4;
    *(unsigned char *)(((int)stk + 8)) = a5;
    *(unsigned int *)(((int)stk + 4)) = a6;
    *(unsigned int *)(((int)stk + 0)) = a7;
    *(float *)(((int)stk + 16)) = f4;
    t0 = FUN_0c03f444(0x5, 0x0, 0x1, a7);
    if (t0 != 0) {
        (((struct o41C_float *)(t0))->v) = (*(float *)(((int)stk + 16)));
        *(unsigned int *)(((0x41C + t0) + 0x4)) = 0x4;
        *(unsigned int *)(((0x41C + t0) + 0x8)) = 0x1C;
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((int)stk + 12)));
        *(unsigned char *)((t0 + 0x2)) = (*(signed char *)(((int)stk + 8)));
        *(unsigned int *)((t0 + 0x4)) = 0xC147EC0;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC4_int *)(t0))->v)) + 0x6C)) = *(struct mv3 *)((*(int *)(((int)stk + 4)))); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC4_int *)(t0))->v)) + 0x84)) = *(struct mv3 *)((*(int *)(((int)stk + 0)))); }
    }
}

void FUN_0c14803c(int a4, int a5, int a6, int a7, float f4)
{
    int stk[5];
    register int t0;

    *(unsigned char *)(((int)stk + 12)) = a4;
    *(unsigned char *)(((int)stk + 8)) = a5;
    *(unsigned int *)(((int)stk + 4)) = a6;
    *(unsigned int *)(((int)stk + 0)) = a7;
    *(float *)(((int)stk + 16)) = f4;
    t0 = FUN_0c03f444(0x5, 0x0, 0x1, a7);
    if (t0 != 0) {
        (((struct o41C_float *)(t0))->v) = (*(float *)(((int)stk + 16)));
        *(unsigned int *)(((0x41C + t0) + 0x4)) = 0x8;
        *(unsigned int *)(((0x41C + t0) + 0x8)) = 0x1C;
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((int)stk + 12)));
        *(unsigned char *)((t0 + 0x2)) = (*(signed char *)(((int)stk + 8)));
        *(unsigned int *)((t0 + 0x4)) = 0xC147EC0;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC4_int *)(t0))->v)) + 0x6C)) = *(struct mv3 *)((*(int *)(((int)stk + 4)))); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC4_int *)(t0))->v)) + 0x84)) = *(struct mv3 *)((*(int *)(((int)stk + 0)))); }
    }
}


int FUN_0c0e82fc(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = FUN_0c03f444(0x2, 0x0, 0x0, a7);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC0E8190;
        (((struct o48_float *)(t0))->v) = 1.0f;
        (((struct o44_float *)(t0))->v) = 1.0f;
        (((struct o40_float *)(t0))->v) = 1.0f;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)((a4 + 0x28)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x4C)) = *(struct mv3 *)(0xC1CC130); }
        *(unsigned int *)((t0 + 0x10)) = a4;
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct o41C_ushort *)(t0))->v) = ((((struct o24_short *)(a4))->v));
        return FUN_0c064d5a(t0, 0xC1CC124);
    }
    return t0;
}

int FUN_0c145eb2(int a4, int a5, int a6)
{
    register float u0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    { struct mv3 { int w[3]; }; *(struct mv3 *)(a4) = *(struct mv3 *)(a5); }
    u0 = *(float *)0xC145F3C;
    t1 = 0xC145F3C;
    t2 = 0x0;
    t3 = 0x0;
    t4 = 0xC2A23CC;
    for (;;) {
        if (!(u0 > (*(float *)((((((t3 << 2) + t3) << 2) + 0xC2A23CC) + 0x0))))) {
            break;
        }
        t1 = (FUN_0c145dd2(a4, a4, a6, t4));
        t4 = (t4 + 0x14);
        t3 = (t3 + 0x1);
        t2 = (t2 | t1);
    }
    return t2;
}

int FUN_0c15fa0c(int a4, int a5, int a6, int a7, float f4)
{
    int stk[5];
    register int t0;
    register int t6;
    register float u5;

    *(unsigned char *)(((int)stk + 16)) = a4;
    *(unsigned int *)(((int)stk + 8)) = a5;
    *(unsigned int *)(((int)stk + 4)) = a6;
    *(unsigned int *)(((int)stk + 12)) = a7;
    *(float *)(((int)stk + 0)) = f4;
    t0 = FUN_0c03f444(0x5, 0x0, 0x2, a7);
    t6 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((int)stk + 16)));
        *(unsigned int *)((t0 + 0x4)) = 0xC15F6EC;
        *(unsigned char *)((t0 + 0x2)) = (*(signed char *)(((int)stk + 12)));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)((*(int *)(((int)stk + 8)))); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x34)) = *(struct mv3 *)((*(int *)(((int)stk + 4)))); }
        u5 = *(float *)(((int)stk + 0));
        (((struct o48_float *)(t0))->v) = u5;
        (((struct o44_float *)(t0))->v) = u5;
        (((struct o40_float *)(t0))->v) = u5;
        (((struct oAC_ushort *)(t0))->v) = 0x1F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        t6 = 0xA9;
    }
    return t6;
}

void FUN_0c1718d4(int a4, int a5)
{
    int stk[24];
    int t0;

    { struct mv12 { int w[12]; }; *(struct mv12 *)((((int)stk + 0) + 0x30)) = *(struct mv12 *)(0xC204118); }
    { struct mv12 { int w[12]; }; *(struct mv12 *)(((int)stk + 0)) = *(struct mv12 *)(0xC204148); }
    t0 = *(signed char *)(((((short)(signed char)a5 * (short)0x58) + 0xC475DC8) + 0x1));
    if ((t0 != 6) && ((t0 != 7) && (t0 != 8))) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)(((((int)stk + 0) + 0x30) + ((((signed char)a5 << 1) + (signed char)a5) << 2))); }
    } else {
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)((((int)stk + 0) + ((((signed char)a5 << 1) + (signed char)a5) << 2))); }
    }
}

void FUN_0c053ccc(int a4, int a5, int a6, int a7, int a8)
{
    register int t0;
    register int t1;
    register int t2;

    FUN_0c0522be(0xC241508);
    t0 = 0xC5410FC;
    for (;;) {
        (((struct o1A0_uint *)(t0))->v) = a4;
        (((struct o19C_uint *)(t0))->v) = a5;
        t1 = (0x1FC + t0);
        t0 = (t0 + 0x2F8);
        *(unsigned int *)((t1 + 0x4)) = a6;
        *(unsigned int *)((t1 + 0x0)) = a6;
        if ((unsigned int)t0 >= (unsigned int)0xC541CDC) {
            break;
        }
    }
    *(unsigned int *)0xC40F834 = a7;
    if ((int)a7 > 0) {
        t0 = a8;
        t1 = 0xC40F838;
        t2 = 0x0;
        for (;;) {
            t0 = (t0 + 0xC);
            { struct mv3 { int w[3]; }; *(struct mv3 *)(t1) = *(struct mv3 *)(((t0 + 0xC) - 12)); }
            t2 = (t2 + 0x1);
            t1 = (t1 + 0xC);
            if ((int)t2 >= (int)a7) {
                break;
            }
        }
    }
}

void FUN_0c063ea0(int a4, float f4)
{
    register int t3;
    register int t4;
    register float u7;
    register int t0;
    register int t1;
    register int t2;
    register float u5;
    register int t21;
    register int t22;
    register int t23;
    register float u24;
    register float u17;

    t3 = a4;
    t4 = a4;
    u7 = f4;
    for (;;) {
        if (t4 == 0) {
            break;
        }
        t1 = ((((struct o12E_short *)(t4))->v));
        if (t1 != 0) {
            t3 = 0x178;
            t3 = (t3 + t4);
            nlSubVector3op(t3, (t4 + 0x28), (0x178 + t4));
            u7 = ((((struct o17C_float *)(t4))->v));
            if (u7 > (0.0f)) {
                u5 = (*(float *)0xC063F94);
                if (u5 > u7) {
                    (((struct o17C_float *)(t4))->v) = 0.0f;
                }
                u17 = u5;
            }
            u24 = u17;
        } else {
            t21 = t1;
            t22 = t2;
            t23 = t3;
            u24 = u5;
        }
        u5 = u24;
        t0 = 0x16C;
        t1 = t21;
        t2 = t22;
        t3 = t23;
        t1 = t4;
        t2 = 0xC187798;
        t1 = (t1 + 0x28);
        t0 = (t0 + t4);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(t0) = *(struct mv3 *)(t1); }
        t4 = (*(int *)((t4 + 0xC)));
    }
}

void FUN_0c147f54(int a4, int a5, int a6, int a7)
{
    int stk[4];
    register int t0;

    *(unsigned char *)(((int)stk + 12)) = a4;
    *(unsigned char *)(((int)stk + 8)) = a5;
    *(unsigned int *)(((int)stk + 4)) = a6;
    *(unsigned int *)(((int)stk + 0)) = a7;
    t0 = FUN_0c03f444(0x5, 0x0, 0x1, a7);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((int)stk + 12)));
        *(unsigned char *)((t0 + 0x2)) = (*(signed char *)(((int)stk + 8)));
        (((struct o41C_float *)(t0))->v) = 1.0f;
        *(unsigned int *)(((0x41C + t0) + 0x4)) = 0x4;
        *(unsigned int *)(((0x41C + t0) + 0x8)) = 0x1C;
        *(unsigned int *)((t0 + 0x4)) = 0xC147EC0;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC4_int *)(t0))->v)) + 0x6C)) = *(struct mv3 *)((*(int *)(((int)stk + 4)))); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC4_int *)(t0))->v)) + 0x84)) = *(struct mv3 *)((*(int *)(((int)stk + 0)))); }
    }
}

void FUN_0c1679c2(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t0;
    register int t7;

    *(unsigned char *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 8)) = a6;
    t0 = ((int (*)(int, int, int, int))(FUN_0c03f444))(0x5, 0x0, 0x1, a7);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((int)stk + 0)));
        *(unsigned int *)((t0 + 0x4)) = 0xC1675F6;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)((*(int *)(((int)stk + 4)))); }
    }
    t7 = ((int (*)(int, int, int))(FUN_0c03f444))(0x5, 0x0, 0x1);
    if (t7 != 0) {
        *(unsigned char *)((t7 + 0x1)) = (*(signed char *)(((int)stk + 0)));
        *(unsigned int *)((t7 + 0x4)) = 0xC167764;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t7 + 0x28)) = *(struct mv3 *)((*(int *)(((int)stk + 4)))); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t7 + 0x34)) = *(struct mv3 *)((*(int *)(((int)stk + 8)))); }
    }
}

int FUN_0c0dc1bc(int a4, int a5, int a6, int a7)
{
    register int t0;

    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        t0 = *(signed char *)((a4 + 0x2));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)((0xC287EE0 + (((t0 << 1) + t0) << 2))); }
        *(unsigned int *)((a4 + 0x38)) = (int)(((float)(*(int *)((0xC287F10 + ((*(signed char *)((a4 + 0x2))) << 2)))) * 65536.0f) / 360.0f);
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        return 0x14;
    }
    t0 = *(signed char *)0xC54098D;
    if (t0 == 3) {
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    return t0;
}

void FUN_0c139d06(int a4, int a5, int a6, int a7, int a8)
{
    int stk[4];
    register int t0;

    *(unsigned char *)(((int)stk + 12)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 0)) = a6;
    *(unsigned int *)(((int)stk + 8)) = a7;
    t0 = FUN_0c03f444(0x5, 0x0, 0x4, a7);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((int)stk + 12)));
        *(unsigned int *)((t0 + 0x4)) = 0xC139718;
        *(unsigned short *)((t0 + 0x1E)) = (*(short *)(((int)stk + 8)));
        (((struct o78_uint *)(((((struct oC8_int *)(t0))->v))))->v) = a8;
        (((struct o78_uint *)(((((struct oCC_int *)(t0))->v))))->v) = a8;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oD0_int *)(t0))->v)) + 0x6C)) = *(struct mv3 *)((*(int *)(((int)stk + 4)))); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oD0_int *)(t0))->v)) + 0x78)) = *(struct mv3 *)((*(int *)(((int)stk + 0)))); }
    }
}

int FUN_0c16e0f2(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t7;

    t0 = FUN_0c03f444(0x1, 0x0, 0x0, a7);
    t7 = t0;
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x4)) = 0xC16E01C;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)((a4 + 0x28)); }
        (((struct o28_float *)(t0))->v) = (((((struct o28_float *)(t0))->v)) + ((((struct o4C_float *)(t0))->v)));
        (((struct o2C_float *)(t0))->v) = (((((struct o2C_float *)(t0))->v)) + ((((struct o50_float *)(t0))->v)));
        (((struct o30_float *)(t0))->v) = (((((struct o30_float *)(t0))->v)) + ((((struct o54_float *)(t0))->v)));
        *(unsigned short *)((t0 + 0x1C)) = 0x64;
        *(unsigned short *)((t0 + 0x1E)) = 0x1;
        t7 = 0x1;
    }
    return t7;
}

int FUN_0c0373ee(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t0 = *(int *)((((((a5 << 2) << 2) << 1) + (a6 + 0x10)) + 0x18));
    t1 = *(int *)((((((a5 << 2) << 2) << 1) + (a6 + 0x10)) + 0x1C));
    if ((int)t0 > 0) {
        t2 = 0x0;
        t3 = t1;
        t1 = 0x0;
        for (;;) {
            t4 = *(int *)((((0xC4 + a4) + t2) + 0x0));
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t4 + 0x6C)) = *(struct mv3 *)((t3 + 0x24)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t4 + 0x78)) = *(struct mv3 *)((t3 + 0x30)); }
            t1 = (t1 + 0x1);
            t3 = (t3 + 0x3C);
            t2 = (t2 + 0x4);
            if ((int)t1 >= (int)t0) {
                break;
            }
        }
    }
    return 0x0;
}

void FUN_0c11a22e(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = FUN_0c03f444(0x5, 0x0, 0x14, a7);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC119F90;
        *(unsigned int *)((t0 + 0x10)) = a4;
        (((struct o41C_ushort *)(t0))->v) = a5;
        if (a6 != 0) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)(0xC291E70); }
        } else {
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)(0xC291E64); }
        }
    }
}

int FUN_0c1070c4(int a4, int a5, int a6, int a7, float f4)
{
    register int t0;
    register float u0;

    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC473CA8) = *(struct mv3 *)(0xC290AB4); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC473CB4) = *(struct mv3 *)(0xC290ACC); }
    FUN_0c115120(0x8, a5, a6, a7, f4);
    u0 = *(float *)0xC1071C4;
    t0 = (((struct o0_int *)0xC5325B0)->v);
    (((struct o98_float *)(t0))->v) = u0;
    (((struct o94_float *)(t0))->v) = u0;
    t0 = (((struct o4_int *)0xC5325B0)->v);
    (((struct o98_float *)(t0))->v) = u0;
    (((struct o94_float *)(t0))->v) = u0;
    FUN_0c056e44(0x23, 0x6);
    (((struct o1C_uint *)0xC473CE0)->v) = 0x0;
    (((struct o0_uint *)0xC473CE0)->v) = 0x0;
    (((struct o10_uint *)0xC473CE0)->v) = 0x0;
    return FUN_0c107084();
}

int FUN_0c15f9b4(int a4, int a5, int a6, int a7)
{
    int stk[4];
    register int t0;
    register int t5;

    *(unsigned char *)(((int)stk + 12)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 0)) = a6;
    *(unsigned int *)(((int)stk + 8)) = a7;
    t0 = FUN_0c03f444(0x5, 0x0, 0x2, a7);
    t5 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((int)stk + 12)));
        *(unsigned int *)((t0 + 0x4)) = 0xC15F6EC;
        *(unsigned char *)((t0 + 0x2)) = (*(signed char *)(((int)stk + 8)));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)((*(int *)(((int)stk + 4)))); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x34)) = *(struct mv3 *)((*(int *)(((int)stk + 0)))); }
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        t5 = 0xA9;
    }
    return t5;
}

int FUN_0c1758d4(int a4, int a5, int a6)
{
    int stk[6];
    register int t1;
    register int t16;

    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0xC)) = *(struct mv3 *)(0xC204844); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)(0xC204850); }
    *(unsigned int *)0xC542260 = ((*(int *)0xC542260) + 0x1);
    t1 = *(signed char *)0xC541F44;
    if ((unsigned char)t1 != 0) {
        t16 = (unsigned char)t1;
        if ((unsigned char)t1 != 1) {
        } else {
            t16 = (FUN_0c175898());
        }
    } else {
        t16 = (FUN_0c173558(a4, a5, a6));
    }
    if ((*(signed char *)0xC475DBE) != 0) {
        t16 = (FUN_0c172168());
    }
    return t16;
}

void FUN_0c1377a8(int a4, int a5, int a6, int a7)
{
    int stk[4];
    register int t0;

    *(unsigned char *)(((int)stk + 12)) = a4;
    *(unsigned int *)(((int)stk + 8)) = a5;
    *(unsigned int *)(((int)stk + 4)) = a6;
    *(unsigned int *)(((int)stk + 0)) = a7;
    t0 = FUN_0c03f444(0x5, 0x0, 0x4, a7);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((int)stk + 12)));
        *(unsigned int *)((t0 + 0x4)) = 0xC137414;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)((*(int *)(((int)stk + 8)))); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x34)) = *(struct mv3 *)((*(int *)(((int)stk + 4)))); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oD0_int *)(t0))->v)) + 0x78)) = *(struct mv3 *)((*(int *)(((int)stk + 0)))); }
    }
}

void FUN_0c11c036(int a4, int a5, int a6, int a7)
{
    int stk[2];
    register int t0;

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    t0 = FUN_0c03f444(0x5, 0x0, 0x1, a7);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC11BB5E;
        *(unsigned char *)((t0 + 0x2)) = (*(signed char *)(((int)stk + 4)));
        if ((*(int *)(((int)stk + 0))) != 0) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)(0xC292178); }
        } else {
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)(0xC292184); }
        }
    }
}

void FUN_0c11c2a8(int a4, int a5, int a6, int a7)
{
    int stk[2];
    register int t0;

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 0)) = a5;
    t0 = FUN_0c03f444(0x5, 0x0, 0x1, a7);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC11C0B0;
        *(unsigned char *)((t0 + 0x2)) = (*(signed char *)(((int)stk + 4)));
        if ((*(int *)(((int)stk + 0))) != 0) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)(0xC292218); }
        } else {
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)(0xC29220C); }
        }
    }
}

void FUN_0c14607c(int a4, int a5, int a6, int a7)
{
    int stk[4];
    register int t0;

    *(unsigned char *)(((int)stk + 8)) = a4;
    *(unsigned char *)(((int)stk + 12)) = a5;
    *(unsigned int *)(((int)stk + 4)) = a6;
    *(unsigned int *)(((int)stk + 0)) = a7;
    t0 = FUN_0c03f444(0x5, 0x0, 0x1, a7);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((int)stk + 12)));
        *(unsigned char *)((t0 + 0x2)) = (*(signed char *)(((int)stk + 8)));
        *(unsigned int *)((t0 + 0x4)) = 0xC145F1A;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)((*(int *)(((int)stk + 4)))); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x34)) = *(struct mv3 *)((*(int *)(((int)stk + 0)))); }
    }
}

void FUN_0c1463b8(int a4, int a5, int a6, int a7)
{
    int stk[4];
    register int t0;

    *(unsigned char *)(((int)stk + 12)) = a4;
    *(unsigned char *)(((int)stk + 8)) = a5;
    *(unsigned int *)(((int)stk + 4)) = a6;
    *(unsigned int *)(((int)stk + 0)) = a7;
    t0 = FUN_0c03f444(0x5, 0x0, 0x10, a7);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((int)stk + 12)));
        *(unsigned char *)((t0 + 0x2)) = (*(signed char *)(((int)stk + 8)));
        *(unsigned int *)((t0 + 0x4)) = 0xC1460CC;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)((*(int *)(((int)stk + 4)))); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x34)) = *(struct mv3 *)((*(int *)(((int)stk + 0)))); }
    }
}

int FUN_0c0c3ed4(int a4)
{
    int stk[3];

    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)((a4 + 0x28)); }
    if (((((struct oA4_int *)(a4))->v)) != 0) {
        math_mat_get_translate(((((struct oA4_int *)(a4))->v)), ((int)stk + 0));
    }
    if ((*(float *)0xC541098) > (*(float *)(((int)stk + 4)))) {
        FUN_0c0c2d56(a4, 0xB, 0x0);
        return 0x1;
    }
    return 0x0;
}

void FUN_0c15acb0(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = FUN_0c03f444(0x5, 0x0, 0x0, a7);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC15ABCC;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)(a4); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x4C)) = *(struct mv3 *)(a5); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x58)) = *(struct mv3 *)(a6); }
    }
}

void FUN_0c13a90e(int a4, int a5, int a6, int a7)
{
    int stk[4];
    register int t0;

    *(unsigned char *)(((int)stk + 12)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 0)) = a6;
    *(unsigned int *)(((int)stk + 8)) = a7;
    t0 = FUN_0c03f444(0x1, 0x0, 0x1, a7);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((int)stk + 12)));
        *(unsigned int *)((t0 + 0x4)) = 0xC13A79E;
        *(unsigned char *)((t0 + 0x2)) = (*(signed char *)(((int)stk + 8)));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)((*(int *)(((int)stk + 4)))); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x34)) = *(struct mv3 *)((*(int *)(((int)stk + 0)))); }
    }
}

void FUN_0c13abe2(int a4, int a5, int a6, int a7)
{
    int stk[4];
    register int t0;

    *(unsigned char *)(((int)stk + 12)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 0)) = a6;
    *(unsigned int *)(((int)stk + 8)) = a7;
    t0 = FUN_0c03f444(0x1, 0x0, 0x2, a7);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((int)stk + 12)));
        *(unsigned int *)((t0 + 0x4)) = 0xC13A990;
        *(unsigned char *)((t0 + 0x2)) = (*(signed char *)(((int)stk + 8)));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)((*(int *)(((int)stk + 4)))); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x34)) = *(struct mv3 *)((*(int *)(((int)stk + 0)))); }
    }
}

void FUN_0c13b08c(int a4, int a5, int a6, int a7)
{
    int stk[4];
    register int t0;

    *(unsigned char *)(((int)stk + 12)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 0)) = a6;
    *(unsigned int *)(((int)stk + 8)) = a7;
    t0 = FUN_0c03f444(0x1, 0x0, 0x2, a7);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((int)stk + 12)));
        *(unsigned int *)((t0 + 0x4)) = 0xC13ADBC;
        *(unsigned char *)((t0 + 0x2)) = (*(signed char *)(((int)stk + 8)));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)((*(int *)(((int)stk + 4)))); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x34)) = *(struct mv3 *)((*(int *)(((int)stk + 0)))); }
    }
}

void FUN_0c13b35e(int a4, int a5, int a6, int a7)
{
    int stk[4];
    register int t0;

    *(unsigned char *)(((int)stk + 12)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 0)) = a6;
    *(unsigned int *)(((int)stk + 8)) = a7;
    t0 = FUN_0c03f444(0x1, 0x0, 0x1, a7);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((int)stk + 12)));
        *(unsigned int *)((t0 + 0x4)) = 0xC13B1EE;
        *(unsigned char *)((t0 + 0x2)) = (*(signed char *)(((int)stk + 8)));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)((*(int *)(((int)stk + 4)))); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x34)) = *(struct mv3 *)((*(int *)(((int)stk + 0)))); }
    }
}

void FUN_0c13b632(int a4, int a5, int a6, int a7)
{
    int stk[4];
    register int t0;

    *(unsigned char *)(((int)stk + 12)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 0)) = a6;
    *(unsigned int *)(((int)stk + 8)) = a7;
    t0 = FUN_0c03f444(0x1, 0x0, 0x2, a7);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((int)stk + 12)));
        *(unsigned int *)((t0 + 0x4)) = 0xC13B3E0;
        *(unsigned char *)((t0 + 0x2)) = (*(signed char *)(((int)stk + 8)));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)((*(int *)(((int)stk + 4)))); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x34)) = *(struct mv3 *)((*(int *)(((int)stk + 0)))); }
    }
}

void FUN_0c13b7c0(int a4, int a5, int a6, int a7)
{
    int stk[4];
    register int t0;

    *(unsigned char *)(((int)stk + 12)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 0)) = a6;
    *(unsigned int *)(((int)stk + 8)) = a7;
    t0 = FUN_0c03f444(0x1, 0x0, 0x2, a7);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((int)stk + 12)));
        *(unsigned int *)((t0 + 0x4)) = 0xC13B6A8;
        *(unsigned char *)((t0 + 0x2)) = (*(signed char *)(((int)stk + 8)));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)((*(int *)(((int)stk + 4)))); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x34)) = *(struct mv3 *)((*(int *)(((int)stk + 0)))); }
    }
}

void FUN_0c1470ea(int a4, int a5, int a6, int a7, float f4)
{
    int stk[4];
    register int t0;

    *(unsigned char *)(((int)stk + 4)) = a4;
    *(unsigned char *)(((int)stk + 12)) = a5;
    *(unsigned int *)(((int)stk + 8)) = a6;
    *(float *)(((int)stk + 0)) = f4;
    t0 = FUN_0c03f444(0x5, 0x0, 0x1, a7);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((int)stk + 12)));
        *(unsigned char *)((t0 + 0x2)) = (*(signed char *)(((int)stk + 4)));
        *(unsigned int *)((t0 + 0x4)) = 0xC146FDA;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)((*(int *)(((int)stk + 8)))); }
        (((struct o41C_float *)(t0))->v) = (*(float *)(((int)stk + 0)));
    }
}

int FUN_0c150286(int a4, int a5, int a6, int a7, int a8, float f4)
{
    register int t0;
    register int t2;

    t0 = FUN_0c1502e8(0x0, 0x1, 0x1, a4, a5, a6);
    t2 = t0;
    if (t0 != 0) {
        { struct mv4 { int w[4]; }; *(struct mv4 *)((((((struct oC4_int *)(t0))->v)) + 0x14)) = *(struct mv4 *)(a7); }
        (((struct o4_float *)((0x41C + t0)))->v) = f4;
        *(unsigned short *)((t0 + 0x1E)) = ((short)(a8 >> 0));
        t2 = ((short)(a8 >> 0));
    }
    return t2;
}

void FUN_0c166772(int a4, int a5, int a6, int a7)
{
    int stk[4];
    register int t0;

    *(unsigned char *)(((int)stk + 12)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 0)) = a6;
    *(unsigned int *)(((int)stk + 8)) = a7;
    t0 = FUN_0c03f444(0x5, 0x0, 0x2, a7);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((int)stk + 12)));
        *(unsigned int *)((t0 + 0x4)) = 0xC16638C;
        *(unsigned char *)((t0 + 0x2)) = (*(signed char *)(((int)stk + 8)));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)((*(int *)(((int)stk + 4)))); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x34)) = *(struct mv3 *)((*(int *)(((int)stk + 0)))); }
    }
}

int FUN_0c136f78(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t0;

    *(unsigned char *)(((int)stk + 8)) = a4;
    *(unsigned int *)(((int)stk + 0)) = a5;
    *(unsigned int *)(((int)stk + 4)) = a6;
    t0 = FUN_0c03f444(0x5, 0x0, 0x2, a7);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((int)stk + 8)));
        *(unsigned int *)((t0 + 0x4)) = 0xC136DE4;
        *(unsigned int *)((t0 + 0x10)) = (*(int *)(((int)stk + 4)));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC8_int *)(t0))->v)) + 0x6C)) = *(struct mv3 *)((*(int *)(((int)stk + 0)))); }
        return t0;
    }
    return 0x0;
}

int FUN_0c1609f8(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t0;
    register int t7;

    *(unsigned char *)(((int)stk + 8)) = a4;
    *(unsigned int *)(((int)stk + 0)) = a5;
    *(unsigned int *)(((int)stk + 4)) = a6;
    t0 = FUN_0c03f444(0x5, 0x0, 0x1, a7);
    t7 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((int)stk + 8)));
        *(unsigned int *)((t0 + 0x4)) = 0xC16079C;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC4_int *)(t0))->v)) + 0x6C)) = *(struct mv3 *)((*(int *)(((int)stk + 4)))); }
        *(unsigned int *)((t0 + 0x10)) = (*(int *)(((int)stk + 0)));
        (((struct o20_ushort *)(t0))->v) = ((((struct o24_short *)((*(int *)(((int)stk + 0)))))->v));
        t7 = 0x20;
    }
    return t7;
}

int FUN_0c03744a(int a4, int a5, int a6, int a7)
{
    register int t1;

    t1 = *(int *)((((((a6 << 2) << 2) << 1) + (a7 + 0x10)) + 0x1C));
    *(unsigned int *)((a4 + 0x8)) = (*(int *)((((a5 * 0x3C) + t1) + 0x0)));
    *(unsigned int *)((a4 + 0xC)) = 0x0;
    *(unsigned int *)((a4 + 0x10)) = 0x0;
    (((struct o68_uint *)(a4))->v) = 0x0;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x6C)) = *(struct mv3 *)((((a5 * 0x3C) + t1) + 0x24)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x78)) = *(struct mv3 *)((((a5 * 0x3C) + t1) + 0x30)); }
    return 0x0;
}

int FUN_0c0ced40(int a4, int a5, int a6, int a7)
{
    register int t9;

    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)(((*(int *)((a4 + 0x10))) + 0x28)); }
    if ((*(short *)((a4 + 0x1C))) == (unsigned short)((((struct o24_short *)((*(int *)((a4 + 0x10)))))->v))) {
        t9 = *(signed char *)((a4 + 0x2));
        if (t9 == 0) {
            if ((*(signed char *)(((*(int *)((a4 + 0x10))) + 0x1B))) != 0) {
                if (((((struct o30_float *)(a4))->v)) > (*(float *)0xC0CEE28)) {
                    return FUN_0c03f346(a4, a5, a6, a7);
                }
                return 0x30;
            }
            return 0x1B;
        }
        return t9;
    }
    return FUN_0c03f346(a4, a5, a6, a7);
}

int FUN_0c0dd78a(int a4, int a5, int a6)
{
    int stk[3];
    register int t1;
    register int t9;

    *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
    t1 = *(short *)((a4 + 0x1E));
    t9 = t1;
    if ((t1 & 3) == 0) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)((a4 + 0x28)); }
        *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) - ((((struct o0_float *)0xC0DD858)->v)));
        t9 = (FUN_0c150010(((int)stk + 0), a5, a6, *(Stk3 *)(((int)stk + 0)), ((((struct o10_float *)0xC0DD858)->v)), ((((struct oC_float *)0xC0DD858)->v)), ((((struct o8_float *)0xC0DD858)->v)), ((((struct o4_float *)0xC0DD858)->v))));
    }
    return t9;
}

int FUN_0c146b30(int a4, int a5, int a6, int a7)
{
    int stk[4];
    register int t0;
    register int t5;

    *(unsigned char *)(((int)stk + 8)) = a4;
    *(unsigned char *)(((int)stk + 12)) = a5;
    *(unsigned int *)(((int)stk + 4)) = a6;
    *(unsigned int *)(((int)stk + 0)) = a7;
    t0 = FUN_0c03f444(0x5, 0x0, 0x2, a7);
    t5 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((int)stk + 12)));
        *(unsigned char *)((t0 + 0x2)) = (*(signed char *)(((int)stk + 8)));
        *(unsigned int *)((t0 + 0x4)) = 0xC14692A;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)((*(int *)(((int)stk + 4)))); }
        t5 = *(int *)(((int)stk + 0));
        *(unsigned short *)((t0 + 0x1E)) = t5;
    }
    return t5;
}

void FUN_0c16695a(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t0;

    *(unsigned char *)(((int)stk + 8)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 0)) = a6;
    t0 = FUN_0c03f444(0x5, 0x0, 0x1, a7);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((int)stk + 8)));
        *(unsigned int *)((t0 + 0x4)) = 0xC1667BE;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)((*(int *)(((int)stk + 4)))); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC4_int *)(t0))->v)) + 0x6C)) = *(struct mv3 *)((*(int *)(((int)stk + 0)))); }
    }
}

void FUN_0c168bb8(int a4, int a5, int a6, int a7)
{
    int stk[4];
    register int t0;

    *(unsigned int *)(((int)stk + 12)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 0)) = a6;
    *(unsigned int *)(((int)stk + 8)) = a7;
    t0 = FUN_0c03f444(0x5, 0x0, 0x1, a7);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((int)stk + 12)));
        *(unsigned int *)((t0 + 0x4)) = 0xC168B14;
        *(unsigned char *)((t0 + 0x2)) = (*(signed char *)(((int)stk + 8)));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)((*(int *)(((int)stk + 4)))); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x34)) = *(struct mv3 *)((*(int *)(((int)stk + 0)))); }
    }
}

void FUN_0c16c150(int a4, int a5, int a6, int a7)
{
    int stk[4];
    register int t0;

    *(unsigned int *)(((int)stk + 12)) = a4;
    *(unsigned int *)(((int)stk + 8)) = a5;
    *(unsigned int *)(((int)stk + 0)) = a6;
    *(unsigned int *)(((int)stk + 4)) = a7;
    t0 = FUN_0c03f444(0x5, 0x0, 0x1, a7);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((int)stk + 12)));
        *(unsigned int *)((t0 + 0x4)) = 0xC16C016;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)((*(int *)(((int)stk + 8)))); }
        *(unsigned char *)((t0 + 0x2)) = (*(signed char *)(((int)stk + 4)));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x34)) = *(struct mv3 *)((*(int *)(((int)stk + 0)))); }
    }
}

void FUN_0c16c1bc(int a4, int a5, int a6, int a7)
{
    int stk[4];
    register int t0;

    *(unsigned int *)(((int)stk + 12)) = a4;
    *(unsigned int *)(((int)stk + 8)) = a5;
    *(unsigned int *)(((int)stk + 0)) = a6;
    *(unsigned int *)(((int)stk + 4)) = a7;
    t0 = FUN_0c03f444(0x5, 0x0, 0x1, a7);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((int)stk + 12)));
        *(unsigned int *)((t0 + 0x4)) = 0xC16C0C6;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)((*(int *)(((int)stk + 8)))); }
        *(unsigned char *)((t0 + 0x2)) = (*(signed char *)(((int)stk + 4)));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x34)) = *(struct mv3 *)((*(int *)(((int)stk + 0)))); }
    }
}

void FUN_0c13a640(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t0;

    *(unsigned char *)(((int)stk + 8)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 0)) = a6;
    t0 = FUN_0c03f444(0x1, 0x0, 0x2, a7);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((int)stk + 8)));
        *(unsigned int *)((t0 + 0x4)) = 0xC13A36C;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)((*(int *)(((int)stk + 4)))); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x34)) = *(struct mv3 *)((*(int *)(((int)stk + 0)))); }
    }
}

void FUN_0c13a758(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t0;

    *(unsigned char *)(((int)stk + 8)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 0)) = a6;
    t0 = FUN_0c03f444(0x5, 0x0, 0x2, a7);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((int)stk + 8)));
        *(unsigned int *)((t0 + 0x4)) = 0xC13A686;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)((*(int *)(((int)stk + 4)))); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x34)) = *(struct mv3 *)((*(int *)(((int)stk + 0)))); }
    }
}

void FUN_0c13ad68(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t0;

    *(unsigned char *)(((int)stk + 8)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 0)) = a6;
    t0 = FUN_0c03f444(0x1, 0x0, 0x2, a7);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((int)stk + 8)));
        *(unsigned int *)((t0 + 0x4)) = 0xC13AC58;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)((*(int *)(((int)stk + 4)))); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x34)) = *(struct mv3 *)((*(int *)(((int)stk + 0)))); }
    }
}

void FUN_0c13b1a8(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t0;

    *(unsigned char *)(((int)stk + 8)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 0)) = a6;
    t0 = FUN_0c03f444(0x5, 0x0, 0x2, a7);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((int)stk + 8)));
        *(unsigned int *)((t0 + 0x4)) = 0xC13B0D8;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)((*(int *)(((int)stk + 4)))); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x34)) = *(struct mv3 *)((*(int *)(((int)stk + 0)))); }
    }
}

void FUN_0c15b320(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = FUN_0c03f444(0x5, 0x0, 0x0, a7);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC15B00C;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)(a4); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x4C)) = *(struct mv3 *)(a5); }
    }
}

void FUN_0c163cc0(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t0;

    *(unsigned char *)(((int)stk + 8)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 0)) = a6;
    t0 = FUN_0c03f444(0x5, 0x0, 0x2, a7);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((int)stk + 8)));
        *(unsigned int *)((t0 + 0x4)) = 0xC163AFC;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)((*(int *)(((int)stk + 4)))); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x34)) = *(struct mv3 *)((*(int *)(((int)stk + 0)))); }
    }
}

void FUN_0c1673e0(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t0;

    *(unsigned char *)(((int)stk + 8)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 0)) = a6;
    t0 = FUN_0c03f444(0x5, 0x0, 0x2, a7);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((int)stk + 8)));
        *(unsigned int *)((t0 + 0x4)) = 0xC167196;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)((*(int *)(((int)stk + 4)))); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x34)) = *(struct mv3 *)((*(int *)(((int)stk + 0)))); }
    }
}

void FUN_0c03f608(int a4)
{
    register int t1;

    memset(a4, 0x0, 0x90);
    t1 = *(int *)0xC3F3474;
    *(unsigned int *)0xC3F3474 = (t1 + 0x1);
    *(unsigned int *)(((((t1 + 0x1) - 1) << 2) + 0xC3F2A74)) = a4;
    *(unsigned char *)((a4 + 0x0)) = (*(signed char *)0xC1B7A22);
    *(unsigned short *)((a4 + 0x6)) = ((((struct o4_short *)0xC1B7A1C)->v));
    (((struct o24_float *)(a4))->v) = ((((struct o0_float *)0xC1B7A1C)->v));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x84 + a4)) = *(struct mv3 *)(0xC1B7A10); }
}

void FUN_0c03f78a(int a4)
{
    register int t1;

    memset(a4, 0x0, 0xA8);
    t1 = *(int *)0xC3F8A78;
    *(unsigned int *)0xC3F8A78 = (t1 + 0x1);
    *(unsigned int *)(((((t1 + 0x1) - 1) << 2) + 0xC3F8878)) = a4;
    *(unsigned char *)((a4 + 0x0)) = (*(signed char *)0xC1B7A22);
    *(unsigned short *)((a4 + 0x6)) = ((((struct o4_short *)0xC1B7A1C)->v));
    (((struct o24_float *)(a4))->v) = ((((struct o0_float *)0xC1B7A1C)->v));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x84 + a4)) = *(struct mv3 *)(0xC1B7A10); }
}

void FUN_0c03f90c(int a4)
{
    register int t1;

    memset(a4, 0x0, 0x83C);
    t1 = *(int *)0xC40927C;
    *(unsigned int *)0xC40927C = (t1 + 0x1);
    *(unsigned int *)(((((t1 + 0x1) - 1) << 2) + 0xC4091FC)) = a4;
    *(unsigned char *)((a4 + 0x0)) = (*(signed char *)0xC1B7A22);
    *(unsigned short *)((a4 + 0x6)) = ((((struct o4_short *)0xC1B7A1C)->v));
    (((struct o24_float *)(a4))->v) = ((((struct o0_float *)0xC1B7A1C)->v));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x84 + a4)) = *(struct mv3 *)(0xC1B7A10); }
}

void FUN_0c03fa8c(int a4)
{
    register int t1;

    memset(a4, 0x0, 0x90);
    t1 = *(int *)0xC40C0C0;
    *(unsigned int *)0xC40C0C0 = (t1 + 0x1);
    *(unsigned int *)(((((t1 + 0x1) - 1) << 2) + 0xC40BF80)) = a4;
    *(unsigned char *)((a4 + 0x0)) = (*(signed char *)0xC1B7A22);
    *(unsigned short *)((a4 + 0x6)) = ((((struct o4_short *)0xC1B7A1C)->v));
    (((struct o24_float *)(a4))->v) = ((((struct o0_float *)0xC1B7A1C)->v));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x84 + a4)) = *(struct mv3 *)(0xC1B7A10); }
}

void FUN_0c0deb00(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = FUN_0c03f444(0x5, 0x0, 0x1, a7);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC0DEA08;
        (((struct oAC_ushort *)(t0))->v) = 0x1;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)(a4); }
        *(unsigned int *)((t0 + 0x38)) = a5;
    }
}

int FUN_0c11563c(int a4, float f4)
{
    int stk[4];
    register float t4;

    *(float *)(((int)stk + 0)) = f4;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x4)) = *(struct mv3 *)(0xC2A0C78); }
    *(float *)(((int)stk + 4)) = (((((struct o0_float *)0xC473CA8)->v)) - ((((struct o28_float *)(a4))->v)));
    *(float *)(((int)stk + 12)) = (((((struct o8_float *)0xC473CA8)->v)) - ((((struct o30_float *)(a4))->v)));
    t4 = nlScalor((((int)stk + 0) + 0x4));
    return ((((*(float *)(((int)stk + 0))) > t4)) ? 1 : 0);
}

void FUN_0c1478b8(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t0;

    *(unsigned char *)(((int)stk + 8)) = a4;
    *(unsigned char *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 0)) = a6;
    t0 = FUN_0c03f444(0x5, 0x0, 0x1, a7);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((int)stk + 8)));
        *(unsigned char *)((t0 + 0x2)) = (*(signed char *)(((int)stk + 4)));
        *(unsigned int *)((t0 + 0x4)) = 0xC1476EC;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC4_int *)(t0))->v)) + 0x6C)) = *(struct mv3 *)((*(int *)(((int)stk + 0)))); }
    }
}

int FUN_0c0528f4(int a4)
{
    *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0xC8 + a4)) = *(struct mv3 *)(0xC1B8E88); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0xF8 + a4)) = *(struct mv3 *)(0xC1B8E94); }
    (((struct o180_uint *)(a4))->v) = 0x0;
    (((struct o240_uint *)(a4))->v) = 0xC2414B4;
    (((struct o244_uint *)(a4))->v) = 0xC2414C0;
    return FUN_0c052364((*(signed char *)((a4 + 0x0))), 0xFFFFFFFF);
}

void FUN_0c056be6(int a4, int a5)
{
    int stk[6];
    register int t1;
    register int t2;
    register int t3;
    register int t5;
    register int t6;

    *(unsigned int *)(((int)stk + 0)) = a5;
    { struct mv5 { int w[5]; }; *(struct mv5 *)((((int)stk + 0) + 0x4)) = *(struct mv5 *)(a4); }
    *(unsigned char *)(((int)stk + 12)) = 0xFFFFFFFF;
    FUN_0c0522be((((int)stk + 0) + 0x4));
    t1 = 0xC5410FC;
    for (;;) {
        t2 = *(int *)(((int)stk + 0));
        t3 = t2;
        t5 = (0x248 + t1);
        for (;;) { t6 = *(int *)t3; t3 = (t3 + 4); if ((unsigned int)((t2 + 128)) < (unsigned int)t3) break; *(unsigned int *)t5 = t6; t5 = (t5 + 4); }
        t1 = (t1 + 0x2F8);
        if ((unsigned int)t1 >= (unsigned int)0xC541CDC) {
            break;
        }
    }
}

void FUN_0c14672c(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t0;

    *(unsigned char *)(((int)stk + 4)) = a4;
    *(unsigned char *)(((int)stk + 8)) = a5;
    *(unsigned int *)(((int)stk + 0)) = a6;
    t0 = FUN_0c03f444(0x5, 0x0, 0x1, a7);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((int)stk + 8)));
        *(unsigned char *)((t0 + 0x2)) = (*(signed char *)(((int)stk + 4)));
        *(unsigned int *)((t0 + 0x4)) = 0xC1464CE;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)((*(int *)(((int)stk + 0)))); }
    }
}

void FUN_0c1468e8(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t0;

    *(unsigned char *)(((int)stk + 4)) = a4;
    *(unsigned char *)(((int)stk + 8)) = a5;
    *(unsigned int *)(((int)stk + 0)) = a6;
    t0 = FUN_0c03f444(0x5, 0x0, 0x1, a7);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((int)stk + 8)));
        *(unsigned char *)((t0 + 0x2)) = (*(signed char *)(((int)stk + 4)));
        *(unsigned int *)((t0 + 0x4)) = 0xC14676E;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)((*(int *)(((int)stk + 0)))); }
    }
}

int FUN_0c15aed8(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t2;

    t0 = FUN_0c03f444(0x5, 0x0, 0x1, a7);
    t2 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC15AE60;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)(a4); }
        (((struct o2C_float *)(t0))->v) = (((((struct o2C_float *)(t0))->v)) + 200.0f);
        t2 = 0x2C;
    }
    return t2;
}

void FUN_0c15b42c(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = FUN_0c03f444(0x5, 0x0, 0x1, a7);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC15B366;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)(a4); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x4C)) = *(struct mv3 *)(a5); }
    }
}

void FUN_0c160d32(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = FUN_0c03f444(0x5, 0x0, 0x1, a7);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC160C7C;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)(a5); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x34)) = *(struct mv3 *)(a6); }
    }
}

int FUN_0c0f105c(int a4, float f4)
{
    register int t0;
    register int t6;
    register float u2;

    t0 = *(signed char *)((a4 + 0x2));
    t6 = t0;
    if (t0 == 1) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)(((*(int *)((a4 + 0x10))) + 0x28)); }
        u2 = *(float *)0xC0F10BC;
        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) - u2);
        (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + u2);
        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 50.0f);
        t6 = 0x2C;
    }
    return t6;
}

void FUN_0c168160(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t0;

    *(unsigned char *)(((int)stk + 8)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 0)) = a6;
    t0 = FUN_0c03f444(0x5, 0x0, 0x2, a7);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((int)stk + 8)));
        *(unsigned int *)((t0 + 0x4)) = 0xC167F94;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)((*(int *)(((int)stk + 4)))); }
        *(unsigned int *)((t0 + 0x38)) = (*(int *)(((int)stk + 0)));
    }
}

void FUN_0c16868c(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t0;

    *(unsigned char *)(((int)stk + 8)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 0)) = a6;
    t0 = FUN_0c03f444(0x5, 0x0, 0x2, a7);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((int)stk + 8)));
        *(unsigned int *)((t0 + 0x4)) = 0xC1684C0;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)((*(int *)(((int)stk + 4)))); }
        *(unsigned int *)((t0 + 0x38)) = (*(int *)(((int)stk + 0)));
    }
}

int FUN_0c056c28(int a4, int a5)
{
    int stk[6];
    register int t1;

    *(unsigned int *)(((int)stk + 0)) = a5;
    { struct mv5 { int w[5]; }; *(struct mv5 *)((((int)stk + 0) + 0x4)) = *(struct mv5 *)(a4); }
    *(unsigned char *)(((int)stk + 12)) = 0xFFFFFFFE;
    FUN_0c0522be((((int)stk + 0) + 0x4));
    t1 = 0xC5410FC;
    for (;;) {
        (((struct o2C8_uint *)(t1))->v) = (*(int *)(((int)stk + 0)));
        t1 = (t1 + 0x2F8);
        if ((unsigned int)t1 >= (unsigned int)0xC541CDC) {
            break;
        }
    }
    return 0x2C8;
}

int FUN_0c0dd7d2(int a4, int a5, int a6)
{
    int stk[3];

    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)((a4 + 0x28)); }
    *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) - ((((struct o0_float *)0xC0DD858)->v)));
    return (FUN_0c150010(((int)stk + 0), a5, a6, *(Stk3 *)(((int)stk + 0)), ((((struct o10_float *)0xC0DD858)->v)), ((((struct oC_float *)0xC0DD858)->v)), ((((struct o8_float *)0xC0DD858)->v)), ((((struct o4_float *)0xC0DD858)->v))));
}

void FUN_0c0f2960(int a4)
{
    if ((*(signed char *)((a4 + 0x14))) != 0) {
        
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)(((((*(signed char *)((a4 + 0x2))) << 2) << 2) + 0xC1CE168)); }
    }
}

void FUN_0c15877c(int a4, int a5, int a6, int a7)
{
    int stk[2];
    register int t0;

    *(unsigned char *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 0)) = a5;
    t0 = FUN_0c03f444(0x5, 0x0, 0x1, a7);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((int)stk + 4)));
        *(unsigned int *)((t0 + 0x4)) = 0xC1585F6;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC4_int *)(t0))->v)) + 0x6C)) = *(struct mv3 *)((*(int *)(((int)stk + 0)))); }
    }
}

int FUN_0c03fcfc(int a4)
{
    register int t1;

    memset(a4, 0x0, 0xAC);
    t1 = *(int *)0xC40DC48;
    *(unsigned int *)0xC40DC48 = (t1 + 0x1);
    *(unsigned int *)(((((t1 + 0x1) - 1) << 2) + 0xC40DC28)) = a4;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x18)) = *(struct mv3 *)(0xC1B7A24); }
    (((struct o64_ushort *)(a4))->v) = (*(short *)0xC1B7A30);
    return 0x64;
}

int FUN_0c03fbcc(int a4)
{
    register int t1;

    memset(a4, 0x0, 0xAC);
    t1 = *(int *)0xC40D6C4;
    *(unsigned int *)0xC40D6C4 = (t1 + 0x1);
    *(unsigned int *)(((((t1 + 0x1) - 1) << 2) + 0xC40D644)) = a4;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x18)) = *(struct mv3 *)(0xC1B7A24); }
    (((struct o64_ushort *)(a4))->v) = (*(short *)0xC1B7A30);
    return 0x64;
}

int FUN_0c0c8f70(int a4)
{
    int stk[3];

    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)((a4 + 0x28)); }
    *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) + 400.0f);
    return (FUN_0c16516e((*(signed char *)((a4 + 0x1))), ((int)stk + 0), (a4 + 0x28)));
}

void FUN_0c0d613e(int a4, int a5)
{
    register int t0;

    t0 = *(signed char *)0xC54223C;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((a4 * 0x3938) + 0xC5324C0)) = *(struct mv3 *)(((((((t0 << 1) + t0) << 2) << 2) + 0xC1C94D4) + (((a5 << 1) + a5) << 2))); }
}
