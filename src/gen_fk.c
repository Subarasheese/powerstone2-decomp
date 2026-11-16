/* Straight-line functions with calls and guards (batch gen_fk): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o118_int { char p[0x118]; int v; };
struct o11C_int { char p[0x11C]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o3715_uchar { char p[0x3715]; unsigned char v; };
struct o3724_uchar { char p[0x3724]; unsigned char v; };
struct o3726_uchar { char p[0x3726]; unsigned char v; };
struct o3727_uchar { char p[0x3727]; unsigned char v; };
struct o372B_uchar { char p[0x372B]; unsigned char v; };
struct o3742_uchar { char p[0x3742]; unsigned char v; };
struct o3770_int { char p[0x3770]; int v; };
struct o3820_ushort { char p[0x3820]; unsigned short v; };
struct o38DC_uchar { char p[0x38DC]; unsigned char v; };
struct o4_float { char p[0x4]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c037bf6(int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c0588bc(int, int, int, int, int, int);
int FUN_0c058a6e(int, int, int, int, int, int);
int FUN_0c067734(int);
int FUN_0c07d666(int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07e868(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c07eaf4(int);
int FUN_0c07ebd0(int);
extern int FUN_0c187798();
int math_atan2_angle16(int, int, int, int, float, float);
float math_cos_angle16(int);
float math_signed_sqrt(float);
float math_sin_angle16(int);
int thunk_FUN_0c058310(int, int);
int FUN_0c082cb2(int a4, int a5);
int FUN_0c158014(int a4, int a5, int a6, int a7);

int FUN_0c082cb2(int a4, int a5)
{
    int stk[14];
    int t2;
    register int t26;
    register int t27;
    register int t60;
    register int t61;
    register int t62;
    register int t63;
    register int t64;
    register float u86;
    register int t102;
    register int t103;
    register int t104;

    *(unsigned char *)(((int)stk + 12)) = a5;
    (((struct o3715_uchar *)(a4))->v) = 0x10;
    (((struct o3742_uchar *)(a4))->v) = 0x0;
    FUN_0c067734(a4);
    (((struct o20_ushort *)(a4))->v) = (*(signed char *)(((int)stk + 12)));
    t2 = *(signed char *)(((int)stk + 12));
    if (t2 != 0) {
        if ((t2 != 4) && (t2 != 9)) {
            t104 = t2;
            if (t2 == 5) {
            } else {
                if (t2 == 6) {
                    if (((((struct o160_float *)(a4))->v)) != 0.0f) {
                        *(int *)((int)stk + 8) = 0xA;
                        *(int *)((int)stk + 4) = 0x0;
                        *(int *)((int)stk + 0) = 0xFFFFFFFF;
                        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x0, 0xA, 0xFFFFFFFF, 0x0, 0xA);
                    } else {
                        *(int *)((int)stk + 8) = 0xB;
                        *(int *)((int)stk + 4) = 0x0;
                        *(int *)((int)stk + 0) = 0xFFFFFFFF;
                        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x0, 0xB, 0xFFFFFFFF, 0x0, 0xB);
                    }
                    *(unsigned short *)((a4 + 0x1C)) = 0x10;
                    t104 = 0x10;
                } else {
                    t104 = t2;
                    if (t2 == 7) {
                    } else {
                        if (t2 == 8) {
                            thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532564))) + 0x28), (a4 + 0x28));
                            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 40.0f);
                            *(int *)((int)stk + 8) = 0x3C;
                            *(int *)((int)stk + 4) = 0x4;
                            *(int *)((int)stk + 0) = 0xFFFFFFFF;
                            FUN_0c07e79c(a4, 0xFFFFFFFF, 0x4, 0x3C, 0xFFFFFFFF, 0x4, 0x3C);
                            FUN_0c037bf6(a4);
                            (((struct o50_float *)(a4))->v) = 28.0f;
                            (((struct o5C_float *)(a4))->v) = -2.0f;
                            if (((((struct o3770_int *)(a4))->v)) != 0) {
                                *(unsigned int *)((a4 + 0x38)) = ((*(int *)((((((struct o3770_int *)(a4))->v)) + 0x38))) - 16384);
                            }
                            (((struct o4C_float *)(a4))->v) = (-((math_sin_angle16((*(int *)((a4 + 0x38))))) * 9.0f));
                            (((struct o54_float *)(a4))->v) = (-((math_cos_angle16((*(int *)((a4 + 0x38))))) * 9.0f));
                            (((struct o60_float *)(a4))->v) = 0.0f;
                            (((struct o58_float *)(a4))->v) = 0.0f;
                            (((struct o372B_uchar *)(a4))->v) = 0x0;
                            (((struct oA4_uint *)(a4))->v) = 0x0;
                            t104 = 0xA4;
                        } else {
                            FUN_0c07e868(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 12), *(int *)((int)stk + 12 + 4), *(int *)((int)stk + 12 + 8), *(int *)((int)stk + 12 + 12), *(int *)((int)stk + 12 + 16), *(int *)((int)stk + 12 + 20), *(int *)((int)stk + 12 + 24), *(int *)((int)stk + 12 + 28));
                            t26 = (((struct o118_int *)(a4))->v);
                            (((struct o98_float *)(t26))->v) = 8.0f;
                            (((struct o94_float *)(t26))->v) = 8.0f;
                            t27 = (((struct o11C_int *)(a4))->v);
                            (((struct o98_float *)(t27))->v) = 8.0f;
                            (((struct o94_float *)(t27))->v) = 8.0f;
                            *(unsigned short *)((a4 + 0x1C)) = 0x8;
                            *(unsigned short *)((a4 + 0x1E)) = 0x0;
                            (((struct o3820_ushort *)(a4))->v) = 0x5;
                            t104 = 0x3820;
                        }
                    }
                }
            }
        } else {
            *(int *)((int)stk + 8) = 0x3C;
            *(int *)((int)stk + 4) = 0x4;
            *(int *)((int)stk + 0) = 0xFFFFFFFF;
            FUN_0c07e79c(a4, 0xFFFFFFFF, 0x4, 0x3C, 0xFFFFFFFF, 0x4, 0x3C);
            t60 = *(int *)(((0x118 + a4) + 0x4));
            t61 = (((struct o118_int *)(a4))->v);
            (((struct oA0_float *)(t60))->v) = 1.0f;
            (((struct o9C_float *)(t60))->v) = 1.0f;
            (((struct oA0_float *)(t61))->v) = 1.0f;
            (((struct o9C_float *)(t61))->v) = 1.0f;
            t62 = *(int *)(((0x118 + a4) + 0x4));
            t63 = (((struct o118_int *)(a4))->v);
            (((struct o98_float *)(t62))->v) = 1.0f;
            (((struct o98_float *)(t63))->v) = 1.0f;
            (((struct o94_float *)(t62))->v) = 1.0f;
            (((struct o94_float *)(t63))->v) = 1.0f;
            (((struct o3820_ushort *)(a4))->v) = 0x5;
            t64 = FUN_0c07ebd0(a4);
            if (t64 != 0) {
                *(unsigned int *)((a4 + 0x38)) = (unsigned short)(((*(short *)((0xC5413E8 + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x2F8)))) + (FUN_0c07eaf4(a4))) + 0x8000);
            } else {
                if (t2 == 4) {
                    *(float *)(((int)stk + 16)) = (((((struct o28_float *)(a4))->v)) - ((((struct o4C_float *)(a4))->v)));
                    *(float *)(((int)stk + 20)) = (((((struct o2C_float *)(a4))->v)) - ((((struct o50_float *)(a4))->v)));
                    *(float *)(((int)stk + 24)) = (((((struct o30_float *)(a4))->v)) - ((((struct o54_float *)(a4))->v)));
                    *(unsigned int *)((a4 + 0x38)) = (FUN_0c07d666((a4 + 0x28), (((int)stk + 12) + 0x4)));
                } else {
                    *(unsigned int *)((a4 + 0x38)) = (unsigned short)((*(int *)((a4 + 0x38))) + 0x8000);
                }
            }
            u86 = (((struct o8_float *)0xC25BC74)->v);
            (((struct o50_float *)(a4))->v) = ((((struct o0_float *)0xC25BC74)->v));
            (((struct o5C_float *)(a4))->v) = ((((struct o4_float *)0xC25BC74)->v));
            (((struct o4C_float *)(a4))->v) = (-((math_sin_angle16((*(int *)((a4 + 0x38))))) * u86));
            (((struct o54_float *)(a4))->v) = (-((math_cos_angle16((*(int *)((a4 + 0x38))))) * u86));
            (((struct o3724_uchar *)(a4))->v) = 0x0;
            (((struct o3726_uchar *)(a4))->v) = 0x0;
            (((struct o3727_uchar *)(a4))->v) = 0x0;
            *(unsigned short *)((a4 + 0x1C)) = 0xF;
            (((struct o38DC_uchar *)(a4))->v) = 0xA;
            t104 = 0x38DC;
        }
    } else {
        FUN_0c07e868(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 12), *(int *)((int)stk + 12 + 4), *(int *)((int)stk + 12 + 8), *(int *)((int)stk + 12 + 12), *(int *)((int)stk + 12 + 16), *(int *)((int)stk + 12 + 20), *(int *)((int)stk + 12 + 24), *(int *)((int)stk + 12 + 28));
        t102 = (((struct o118_int *)(a4))->v);
        (((struct o98_float *)(t102))->v) = 8.0f;
        (((struct o94_float *)(t102))->v) = 8.0f;
        t103 = (((struct o11C_int *)(a4))->v);
        (((struct o98_float *)(t103))->v) = 8.0f;
        (((struct o94_float *)(t103))->v) = 8.0f;
        *(unsigned short *)((a4 + 0x1C)) = 0x8;
        *(unsigned short *)((a4 + 0x1E)) = 0x0;
        (((struct o3820_ushort *)(a4))->v) = 0x5;
        t104 = 0x3820;
    }
    return t104;
}

int FUN_0c158014(int a4, int a5, int a6, int a7)
{
    int stk[5];

    register int R1;
    register int R3;
    register int R8;
    register int R9;
    int R10;
    register float F0;
    register float F2;
    register float F3;
    register float F4;
    register float F14;
    register float F15;
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
    register float w0_0;
    register float w0_1;
    register float w0_2;
    v0_4 = a4;
    v0_5 = a5;
    v0_6 = a6;
    v0_7 = a7;
    v0_2 = *(signed char *)((v0_4 + 0x14));
    v0_8 = (v0_2);
    v0_1 = (0xC2A29B8);
    v0_0 = (v0_4);
    if ((v0_2 == 0)) goto L_C15807C;
    if ((v0_8 == 1)) goto L_C1580CC;
    v0_8 = ((FUN_0c03f346(v0_0, v0_5, v0_6, v0_7)));
    L_C1582D2:;
    return v0_8;
    L_C1580CC:;
    *(volatile signed char *)((v0_0 + 0x1));
    v0_2 = ((int (*)(int, int, int))(FUN_0c187798))(v0_4, v0_5, v0_6);
    *(float *)((((int)stk + 8) + 0x0)) = ((*(float *)((((int)stk + 8) + 0x0))) - ((((struct o28_float *)(v0_0))->v)));
    (((struct o4_float *)(((int)stk + 8)))->v) = (((((struct o4_float *)(((int)stk + 8)))->v)) - ((((struct o2C_float *)(v0_0))->v)));
    (((struct o8_float *)(((int)stk + 8)))->v) = (((((struct o8_float *)(((int)stk + 8)))->v)) - ((((struct o30_float *)(v0_0))->v)));
    v0_8 = (0x8);
    v0_2 = (((int)stk + 8));
    w0_0 = (9.99999997e-07f);
    if ((((((struct o8_float *)(((int)stk + 8)))->v)) != 0.0f)) goto L_C158114;
    *(float *)((v0_2 + v0_8)) = w0_0;
    L_C158114:;
    v0_8 = math_atan2_angle16(v0_4, v0_5, v0_6, v0_7, (*(float *)((v0_2 + 0x0))), (*(float *)((v0_2 + v0_8))));
    R10 = (0xFFFF);
    v0_3 = (0x10000);
    v0_4 = ((v0_8 & 0xFFFF));
    if (((int)((v0_8 & 0xFFFF) - (*(int *)((v0_0 + 0x38)))) <= (int)0x8000)) goto L_C158132;
    v0_4 = ((v0_4 - v0_3));
    L_C158132:;
    v0_8 = ((*(int *)((v0_0 + 0x38))));
    if (((int)(v0_4 - (*(int *)((v0_0 + 0x38)))) >= (int)0xFFFF8000)) goto L_C158142;
    v0_4 = ((v0_4 + v0_3));
    L_C158142:;
    *(unsigned int *)((v0_0 + 0x38)) = ((v0_8 + (v0_4 - v0_8)) & R10);
    w0_2 = (((struct o8_float *)(v0_2))->v);
    w0_1 = *(float *)((v0_2 + 0x0));
    w0_2 = (w0_2 * w0_2);
    w0_2 = w0_2 + w0_1 * w0_1;
    w0_1 = math_signed_sqrt(w0_2);
    v0_8 = (0x4);
    w0_2 = (w0_1);
    if ((w0_1 != 0.0f)) goto L_C15816E;
    w0_2 = (w0_0);
    L_C15816E:;
    v0_2 = math_atan2_angle16(v0_4, v0_5, v0_6, v0_7, (-(*(float *)((v0_2 + v0_8)))), w0_2);
    v0_4 = ((v0_2 & R10));
    if (((int)((v0_2 & R10) - (*(int *)((v0_0 + 0x34)))) <= (int)0x8000)) goto L_C158188;
    v0_4 = ((v0_4 - v0_3));
    L_C158188:;
    v0_8 = ((*(int *)((v0_0 + 0x34))));
    if (((int)(v0_4 - (*(int *)((v0_0 + 0x34)))) >= (int)0xFFFF8000)) goto L_C158198;
    v0_4 = ((v0_4 + v0_3));
    L_C158198:;
    *(unsigned int *)((v0_0 + 0x34)) = ((v0_8 + (v0_4 - v0_8)) & R10);
    v0_5 = *(short *)((v0_0 + 0x1C));
    R10 = (v0_1);
    v0_3 = (0xC2A2954);
    v0_2 = (0xC2A2954);
    v0_4 = (v0_5);
    if (((int)v0_5 < (int)(*(int *)0xC2A2958))) goto L_C15821A;
    if (((int)v0_4 > (int)(*(int *)((v0_2 + 0x8))))) goto L_C15821A;
    v0_8 = ((*(int *)((v0_3 + 0x4))));
    v0_4 = v0_8;
    *(int *)((int)stk + 4) = v0_4;
    v0_3 = (*(int *)((v0_3 + 0x8)));
    *(int *)((int)stk + 0) = v0_3;
    FUN_0c0588bc((((((struct oC4_int *)(v0_0))->v)) + 0x84), (R10 + 0xC), R10, (*(short *)((v0_0 + 0x1C))), v0_3, v0_4);
    L_C15821A:;
    v0_5 = *(short *)((v0_0 + 0x1C));
    v0_3 = (v0_2);
    v0_4 = (v0_5);
    if (((int)v0_5 < (int)(*(int *)((v0_2 + 0xC))))) goto L_C15824E;
    if (((int)v0_4 > (int)(*(int *)((v0_3 + 0x10))))) goto L_C15824E;
    v0_4 = (*(int *)((v0_3 + 0xC)));
    *(int *)((int)stk + 4) = v0_4;
    v0_3 = (*(int *)((v0_3 + 0x10)));
    *(int *)((int)stk + 0) = v0_3;
    FUN_0c0588bc((((((struct oC4_int *)(v0_0))->v)) + 0x84), (v0_1 + 0x24), (v0_1 + 0x18), (*(short *)((v0_0 + 0x1C))), v0_3, v0_4);
    L_C15824E:;
    v0_5 = *(short *)((v0_0 + 0x1C));
    R10 = (0xC2A2978);
    v0_3 = (0xC2A2978);
    v0_1 = (v0_2);
    v0_4 = (v0_5);
    if (((int)v0_5 < (int)(*(int *)((v0_2 + 0x14))))) goto L_C158282;
    if (((int)v0_4 > (int)(*(int *)((v0_1 + 0x18))))) goto L_C158282;
    v0_4 = (*(int *)((v0_1 + 0x14)));
    *(int *)((int)stk + 4) = v0_4;
    v0_1 = (*(int *)((v0_1 + 0x18)));
    *(int *)((int)stk + 0) = v0_1;
    FUN_0c058a6e((((((struct oC4_int *)(v0_0))->v)) + 0x14), (R10 + 0x10), R10, (*(short *)((v0_0 + 0x1C))), v0_1, v0_4);
    L_C158282:;
    v0_5 = *(short *)((v0_0 + 0x1C));
    v0_1 = (v0_2);
    v0_4 = (v0_5);
    if (((int)v0_5 < (int)(*(int *)((v0_2 + 0x1C))))) goto L_C1582B4;
    if (((int)v0_4 > (int)(*(int *)((v0_1 + 0x20))))) goto L_C1582B4;
    v0_4 = (*(int *)((v0_1 + 0x1C)));
    *(int *)((int)stk + 4) = v0_4;
    v0_1 = (*(int *)((v0_1 + 0x20)));
    *(int *)((int)stk + 0) = v0_1;
    FUN_0c058a6e((((((struct oC4_int *)(v0_0))->v)) + 0x14), (v0_3 + 0x30), (v0_3 + 0x20), (*(short *)((v0_0 + 0x1C))), v0_1, v0_4);
    L_C1582B4:;
    v0_1 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_1 + 0x1);
    v0_8 = ((short)(v0_1 + 0x1));
    if (((int)(short)(v0_1 + 0x1) <= (int)(*(int *)((v0_2 + 0x0))))) goto L_C1582D2;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    v0_8 = (0x14);
    goto L_C1582D2;
    L_C15807C:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(v0_0))->v) = 0x1;
    (((struct oAC_ushort *)(v0_0))->v) = 0xF;
    (((struct oA9_uchar *)(v0_0))->v) = 0x21;
    FUN_0c03744a(((((struct oC4_int *)(v0_0))->v)), 0x1, 0x14, (*(int *)0xC4B40CC));
    *(unsigned short *)((((((struct oC4_int *)(v0_0))->v)) + 0x6)) = 0x1F;
    *(volatile int *)((v0_0 + 0xC4));
    v0_2 = ((int (*)(void))(FUN_0c187798))();
    (((struct o7C_uint *)(((((struct oC4_int *)(v0_0))->v))))->v) = (*(int *)0xC2A29E8);
    goto L_C1580CC;
}
