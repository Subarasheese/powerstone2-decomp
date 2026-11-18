/* Straight-line functions with calls and guards (batch gen_gw): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
struct o12C_ushort { char p[0x12C]; unsigned short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o404_int { char p[0x404]; int v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c03733c(int, int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c07e3ae(int, int);
int FUN_0c150010(int, int, int, float, float, float, float);
int FUN_0c15f9b4(int, int, int, int);
int FUN_0c1675dc(int, int, int);
int math_atan2_angle16(int, int, int, int, float, float);
float math_signed_sqrt(float);
int nlAddVector3op(int, int, int);
int nlCalcPoint(int, int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlUnitMatrix(void);
int FUN_0c167b36(int a4, int a5, int a6, int a7);
int FUN_0c0349f6(int a4, int a5, int a6, int a7);
int FUN_0c031ed4(int a4, int a5, int a6, int a7, float f4);

int FUN_0c167b36(int a4, int a5, int a6, int a7)
{
    int stk[6];

    register int R1;
    register int R3;
    register int R8;
    int R12;
    register float F0;
    register float F1;
    register float F2;
    register float F3;
    register float F4;
    register float F6;
    register float F7;
    register float F14;
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
    register float w0_0;
    register float w0_1;
    register float w0_2;
    v0_1 = a4;
    v0_2 = a5;
    v0_3 = a6;
    v0_4 = a7;
    v0_6 = *(signed char *)((v0_1 + 0x14));
    v0_5 = (v0_6);
    v0_0 = (v0_1);
    w0_0 = (1.0f);
    if ((v0_6 == 0)) goto L_C167B80;
    if ((v0_5 == 1)) goto L_C167BF8;
    if ((v0_5 != 2)) goto L_C167B62;
    v0_5 = ((FUN_0c03f346(v0_0, v0_2, v0_3, v0_4)));
    L_C167E36:;
    return v0_5;
    L_C167B62:;
    goto L_C167E36;
    L_C167BF8:;
    if ((((*(int *)0xC542260) & 7) != 0)) goto L_C167C08;
    FUN_0c07e3ae(v0_0, 0x36);
    L_C167C08:;
    if (((*(signed char *)((v0_0 + 0x131))) == 0)) goto L_C167C32;
    FUN_0c150010((v0_0 + 0x28), v0_2, v0_3, w0_0, w0_0, w0_0, w0_0);
    FUN_0c15f9b4((*(signed char *)((v0_0 + 0x1))), (v0_0 + 0x28), (v0_0 + 0x34), 0x2);
    L_C167C32:;
    if ((((((struct o404_int *)(v0_0))->v)) == 0)) goto L_C167C84;
    FUN_0c15f9b4((*(signed char *)((v0_0 + 0x1))), (v0_0 + 0x28), (v0_0 + 0x34), 0x2);
    (((struct o20_ushort *)(v0_0))->v) = (((((struct o20_short *)(v0_0))->v)) + 0x1);
    L_C167C92:;
    v0_5 = (((struct oC4_int *)(v0_0))->v);
    (((struct o80_uint *)(v0_5))->v) = (((((struct o80_int *)(v0_5))->v)) + 0xCCD);
    FUN_0c1675dc((*(signed char *)((v0_0 + 0x1))), (((int)stk + 0) + 0xC), v0_3);
    *(float *)(((int)stk + 16)) = ((*(float *)(((int)stk + 16))) + 100.0f);
    *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) - ((((struct o28_float *)(v0_0))->v)));
    *(float *)(((int)stk + 16)) = ((*(float *)(((int)stk + 16))) - ((((struct o2C_float *)(v0_0))->v)));
    w0_1 = (((struct o30_float *)(v0_0))->v);
    w0_2 = *(float *)(((int)stk + 20));
    *(float *)(((int)stk + 20)) = (w0_2 - w0_1);
    w0_0 = (9.99999997e-07f);
    if (((w0_2 - w0_1) != 0.0f)) goto L_C167CF0;
    *(float *)(((int)stk + 20)) = w0_0;
    L_C167CF0:;
    v0_6 = math_atan2_angle16(v0_1, v0_2, v0_3, v0_4, (*(float *)(((int)stk + 12))), (*(float *)(((int)stk + 20))));
    R12 = (0xFFFF);
    v0_5 = (0x10000);
    v0_1 = ((v0_6 & 0xFFFF));
    if (((int)((v0_6 & 0xFFFF) - (*(int *)((v0_0 + 0x38)))) <= (int)0x8000)) goto L_C167D12;
    v0_1 = ((v0_1 - v0_5));
    L_C167D12:;
    v0_8 = ((*(int *)((v0_0 + 0x38))));
    if (((int)(v0_1 - (*(int *)((v0_0 + 0x38)))) >= (int)0xFFFF8000)) goto L_C167D22;
    v0_1 = ((v0_1 + v0_5));
    L_C167D22:;
    v0_9 = (int)(v0_1 - v0_8) < 0;
    v0_6 = (0x200);
    v0_7 = (0xFFFFFE00);
    v0_1 = ((v0_1 - v0_8));
    if (v0_9) goto L_C167D58;
    if (((int)v0_1 <= (int)v0_6)) goto L_C167D5E;
    v0_1 = (v0_6);
    L_C167D5E:;
    *(unsigned int *)((v0_0 + 0x38)) = (((*(int *)((v0_0 + 0x38))) + v0_1) & R12);
    w0_1 = *(float *)(((int)stk + 12));
    w0_2 = *(float *)(((int)stk + 20));
    w0_2 = (w0_2 * w0_2);
    w0_2 = w0_2 + w0_1 * w0_1;
    w0_1 = math_signed_sqrt(w0_2);
    w0_2 = (w0_1);
    if ((w0_1 != 0.0f)) goto L_C167D88;
    w0_2 = (w0_0);
    L_C167D88:;
    v0_2 = math_atan2_angle16(v0_1, v0_2, v0_3, v0_4, (-(*(float *)(((int)stk + 16)))), w0_2);
    v0_1 = ((v0_2 & R12));
    if (((int)((v0_2 & R12) - (*(int *)((v0_0 + 0x34)))) <= (int)0x8000)) goto L_C167DA4;
    v0_1 = ((v0_1 - v0_5));
    L_C167DA4:;
    v0_8 = ((*(int *)((v0_0 + 0x34))));
    if (((int)(v0_1 - (*(int *)((v0_0 + 0x34)))) >= (int)0xFFFF8000)) goto L_C167DB4;
    v0_1 = ((v0_1 + v0_5));
    L_C167DB4:;
    v0_2 = (int)(v0_1 - v0_8) < 0;
    v0_1 = ((v0_1 - v0_8));
    if (v0_2) goto L_C167DC2;
    if (((int)v0_1 <= (int)v0_6)) goto L_C167DC8;
    v0_1 = (v0_6);
    L_C167DC8:;
    *(unsigned int *)((v0_0 + 0x34)) = (((*(int *)((v0_0 + 0x34))) + v0_1) & R12);
    nlUnitMatrix();
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)(0xC2A351C); }
    *(float *)(((int)stk + 8)) = 30.0f;
    nlRotateAY((*(int *)((v0_0 + 0x38))));
    nlRotateAX((*(int *)((v0_0 + 0x34))));
    nlCalcPoint(((int)stk + 0), (v0_0 + 0x4C));
    nlAddVector3op((v0_0 + 0x28), (v0_0 + 0x28), (v0_0 + 0x4C));
    if (((int)((((struct o20_short *)(v0_0))->v)) > (int)0xA)) goto L_C167E26;
    v0_1 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_1 + 0x1);
    v0_5 = ((short)(v0_1 + 0x1));
    if (((int)(short)(v0_1 + 0x1) <= (int)0x64)) goto L_C167E36;
    L_C167E26:;
    (((struct o14_uchar *)(v0_0))->v) = 0x2;
    v0_5 = (0x14);
    goto L_C167E36;
    L_C167DC2:;
    if (((int)v0_1 >= (int)v0_7)) goto L_C167DC8;
    v0_1 = (v0_7);
    goto L_C167DC8;
    L_C167D58:;
    if (((int)v0_1 >= (int)v0_7)) goto L_C167D5E;
    v0_1 = (v0_7);
    goto L_C167D5E;
    L_C167C84:;
    v0_5 = (0x20);
    if (((int)((((struct o20_short *)(v0_0))->v)) <= 0)) goto L_C167C92;
    *(unsigned short *)((v0_0 + v0_5)) = ((*(short *)((v0_0 + v0_5))) - 1);
    goto L_C167C92;
    L_C167B80:;
    (((struct o14_uchar *)(v0_0))->v) = 0x1;
    (((struct oA8_uchar *)(v0_0))->v) = 0x1;
    (((struct oAC_ushort *)(v0_0))->v) = 0xF;
    (((struct oA9_uchar *)(v0_0))->v) = 0x21;
    *(unsigned char *)((((((struct oC4_int *)(v0_0))->v)) + 0x0)) = 0x1;
    *(unsigned short *)((((((struct oC4_int *)(v0_0))->v)) + 0x6)) = 0x1F;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_0 + 0x40)) = *(struct mv3 *)(0xC2A3528); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC4_int *)(v0_0))->v)) + 0x84)) = *(struct mv3 *)(0xC2A3528); }
    (((struct o84_float *)(((((struct oC4_int *)(v0_0))->v))))->v) = w0_0;
    (((struct o88_float *)(((((struct oC4_int *)(v0_0))->v))))->v) = w0_0;
    (((struct o8C_float *)(((((struct oC4_int *)(v0_0))->v))))->v) = w0_0;
    (((struct o12C_ushort *)(v0_0))->v) = 0x0;
    (((struct o12E_ushort *)(v0_0))->v) = 0xF0;
    (((struct o22_ushort *)(v0_0))->v) = (*(signed char *)(((*(int *)((0xC535BF8 + ((short)(*(signed char *)((v0_0 + 0x1))) * (short)0x3938)))) + 0x1)));
    v0_1 = (0xC2A3528);
    goto L_C167BF8;
}

int FUN_0c0349f6(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
    } else {
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0xF;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        *(unsigned short *)((a4 + 0x1C)) = 0x1;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 == 4) {
                        if ((*(short *)((a4 + 0x1E))) != 0) {
                            *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) - 1);
                        }
                        if ((*(signed char *)((a4 + 0x2))) != 0) {
                            (((struct o20_ushort *)(a4))->v) = ((int)((int)((int)((int)(*(short *)((a4 + 0x1E))) / (int)0x3C)) % (int)0xA));
                        } else {
                            (((struct o20_ushort *)(a4))->v) = ((int)((int)((int)((int)(*(short *)((a4 + 0x1E))) / (int)0x3C)) / (int)0xA));
                            if (((((struct o20_short *)(a4))->v)) != 0) {
                                (((struct oA8_uchar *)(a4))->v) = 0x1;
                            } else {
                                (((struct oA8_uchar *)(a4))->v) = 0x0;
                            }
                        }
                        FUN_0c03733c(a4, (((((struct o20_short *)(a4))->v)) + 0x63), (*(int *)0xC4B410C));
                        t1 = (((struct oC4_int *)(a4))->v);
                        *(unsigned char *)((t1 + 0x0)) = 0x1;
                        *(unsigned short *)((t1 + 0x6)) = 0x11F;
                        { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x6C)) = *(struct mv3 *)((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC1AA2EC)); }
                        (((struct o74_float *)(t1))->v) = -5.0f;
                        { struct mv3 { int w[3]; }; *(struct mv3 *)((0x84 + t1)) = *(struct mv3 *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC1AA2EC) + 0xC)); }
                        t1 = (((struct oC8_int *)(a4))->v);
                        *(unsigned char *)((t1 + 0x0)) = 0x1;
                        *(unsigned short *)((t1 + 0x6)) = 0x11F;
                        (((struct o74_float *)(t1))->v) = 0.0f;
                        (((struct o70_float *)(t1))->v) = 0.0f;
                        (((struct o6C_float *)(t1))->v) = 0.0f;
                        (((struct o88_float *)(t1))->v) = 1.0f;
                        (((struct o84_float *)(t1))->v) = 1.0f;
                        (((struct o8C_float *)(t1))->v) = 0.0f;
                        t1 = *(signed char *)0xC541F41;
                        t2 = (unsigned char)t1;
                        if ((unsigned char)t1 != 3) {
                            *(unsigned short *)((a4 + 0x1C)) = 0x14;
                            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                            t2 = 0x15;
                        }
                        t1 = t2;
                    } else {
                        if (t0 == 5) {
                            t0 = (((struct oC8_int *)(a4))->v);
                            (((struct o8C_float *)(t0))->v) = (((((struct o8C_float *)(t0))->v)) - 0.0500000007f);
                            t0 = (((struct oC4_int *)(a4))->v);
                            (((struct o74_float *)(t0))->v) = (((((struct o74_float *)(t0))->v)) + 0.25f);
                            t0 = *(short *)((a4 + 0x1C));
                            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
                            t2 = (short)(t0 - 1);
                            if ((short)(t0 - 1) == 0) {
                                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                                t2 = 0x15;
                            }
                            t0 = t2;
                        } else {
                            t2 = (((struct oC8_int *)(a4))->v);
                            (((struct o8C_float *)(t2))->v) = (((((struct o8C_float *)(t2))->v)) + 0.0500000007f);
                            t2 = 0x8C;
                            if (!(-0.0f > ((((struct o8C_float *)(((((struct oC8_int *)(a4))->v))))->v)))) {
                                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                                t2 = 0x14;
                            }
                            t0 = t2;
                        }
                        t1 = t0;
                    }
                    t0 = t1;
                } else {
                    t1 = (((struct oC8_int *)(a4))->v);
                    (((struct o8C_float *)(t1))->v) = (((((struct o8C_float *)(t1))->v)) - 0.0250000004f);
                    t1 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
                    t2 = (short)(t1 - 1);
                    if ((short)(t1 - 1) != 0) {
                    } else {
                        (((struct o8C_float *)(((((struct oC8_int *)(a4))->v))))->v) = 0.0f;
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        t2 = 0x15;
                    }
                    t0 = t2;
                }
                t1 = t0;
            } else {
                t0 = (((struct oC4_int *)(a4))->v);
                (((struct o74_float *)(t0))->v) = (((((struct o74_float *)(t0))->v)) - 0.25f);
                t0 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
                t2 = (short)(t0 - 1);
                if ((short)(t0 - 1) != 0) {
                } else {
                    *(unsigned short *)((a4 + 0x1C)) = 0x14;
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    t2 = 0x15;
                }
                t1 = t2;
            }
            t0 = t1;
        } else {
            t1 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
            t2 = (short)(t1 - 1);
            if ((short)(t1 - 1) != 0) {
            } else {
                *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
                *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x1;
                *(unsigned short *)((a4 + 0x1C)) = 0x14;
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                t2 = 0x15;
            }
            t0 = t2;
        }
        t1 = t0;
    } else {
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        t2 = (short)(t0 - 1);
        if ((short)(t0 - 1) != 0) {
        } else {
            t0 = (((struct oC4_int *)(a4))->v);
            *(unsigned char *)((t0 + 0x0)) = 0x0;
            *(unsigned short *)((t0 + 0x6)) = 0x11F;
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x6C)) = *(struct mv3 *)((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC1AA2EC)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((0x84 + t0)) = *(struct mv3 *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC1AA2EC) + 0xC)); }
            t0 = (((struct oC8_int *)(a4))->v);
            *(unsigned char *)((t0 + 0x0)) = 0x0;
            *(unsigned short *)((t0 + 0x6)) = 0x11F;
            (((struct o74_float *)(t0))->v) = 0.0f;
            (((struct o70_float *)(t0))->v) = 0.0f;
            (((struct o6C_float *)(t0))->v) = 0.0f;
            (((struct o88_float *)(t0))->v) = 1.0f;
            (((struct o84_float *)(t0))->v) = 1.0f;
            (((struct o8C_float *)(t0))->v) = 0.5f;
            *(unsigned short *)((a4 + 0x1C)) = 0x1;
            *(unsigned short *)((a4 + 0x1E)) = 0x4B0;
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            t2 = 0x15;
        }
        t1 = t2;
    }
    return t1;
}

int FUN_0c031ed4(int a4, int a5, int a6, int a7, float f4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
    } else {
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0xF;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        *(unsigned short *)((a4 + 0x1C)) = 0x1;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 == 1) {
            t1 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
            t2 = (short)(t1 - 1);
            if ((short)(t1 - 1) == 0) {
                *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
                *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x1;
                (((struct o74_float *)(((((struct oC4_int *)(a4))->v))))->v) = 0.0f;
                (((struct o74_float *)(((((struct oC8_int *)(a4))->v))))->v) = 0.0f;
                (((struct o8C_float *)(((((struct oC8_int *)(a4))->v))))->v) = 1.0f;
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                t2 = 0x15;
            }
            t1 = t2;
        } else {
            if (t0 == 2) {
                t2 = (((struct oC4_int *)(a4))->v);
                (((struct o74_float *)(t2))->v) = (((((struct o74_float *)(t2))->v)) - 0.200000003f);
                t2 = (((struct oC8_int *)(a4))->v);
                (((struct o74_float *)(t2))->v) = (((((struct o74_float *)(t2))->v)) - 0.200000003f);
                t2 = 0x74;
                if (!(((((struct o74_float *)(((((struct oC8_int *)(a4))->v))))->v)) > -5.0f)) {
                    *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    t2 = 0x15;
                }
                t1 = t2;
            } else {
                if (t0 == 3) {
                    t2 = (((struct oC8_int *)(a4))->v);
                    (((struct o8C_float *)(t2))->v) = (((((struct o8C_float *)(t2))->v)) - 0.0399999991f);
                    t2 = 0x8C;
                    if (0.0f > ((((struct o8C_float *)(((((struct oC8_int *)(a4))->v))))->v))) {
                        t1 = *(signed char *)((a4 + 0x2));
                        *(unsigned short *)((a4 + 0x1C)) = ((-((t1 << 2) + t1)) + 0x3C);
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        t2 = 0x15;
                    }
                    t1 = t2;
                } else {
                    t2 = t0;
                    if (t0 == 4) {
                        t0 = *(short *)((a4 + 0x1C));
                        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
                        t2 = (short)(t0 - 1);
                        if ((short)(t0 - 1) == 0) {
                            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                            t2 = 0x14;
                        }
                    }
                    t1 = t2;
                }
            }
        }
        t0 = t1;
    } else {
        t1 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
        if ((short)(t1 - 1) != 0) {
        } else {
            if ((int)(*(signed char *)((a4 + 0x2))) < (int)0x6) {
                t1 = (((struct oC4_int *)(a4))->v);
                *(unsigned char *)((t1 + 0x0)) = 0x0;
                *(unsigned short *)((t1 + 0x6)) = 0x11F;
                { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x6C)) = *(struct mv3 *)((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC1A963C)); }
                { struct mv3 { int w[3]; }; *(struct mv3 *)((0x84 + t1)) = *(struct mv3 *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC1A963C) + 0xC)); }
                t1 = (((struct oC8_int *)(a4))->v);
                FUN_0c03744a(t1, 0x1, (*(signed char *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC1A963C) + 0x19))), (*(int *)0xC4B40D0));
                *(unsigned char *)((t1 + 0x0)) = 0x0;
                *(unsigned short *)((t1 + 0x6)) = 0x31F;
                { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x6C)) = *(struct mv3 *)((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC1A963C)); }
                { struct mv3 { int w[3]; }; *(struct mv3 *)((0x84 + t1)) = *(struct mv3 *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC1A963C) + 0xC)); }
                (((struct o18_float *)(t1))->v) = 0.0f;
                (((struct o1C_float *)(t1))->v) = 0.0f;
                (((struct o20_float *)(t1))->v) = 1.0f;
            } else {
                t1 = (((struct oC4_int *)(a4))->v);
                *(unsigned char *)((t1 + 0x0)) = 0x0;
                *(unsigned short *)((t1 + 0x6)) = 0x11F;
                { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x6C)) = *(struct mv3 *)((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC1A963C)); }
                { struct mv3 { int w[3]; }; *(struct mv3 *)((0x84 + t1)) = *(struct mv3 *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC1A963C) + 0xC)); }
                t1 = (((struct oC8_int *)(a4))->v);
                FUN_0c03744a(t1, 0x1, (*(signed char *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC1A963C) + 0x19))), (*(int *)0xC4B40D0));
                *(unsigned char *)((t1 + 0x0)) = 0x0;
                *(unsigned short *)((t1 + 0x6)) = 0x31F;
                { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x6C)) = *(struct mv3 *)((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC1A963C)); }
                { struct mv3 { int w[3]; }; *(struct mv3 *)((0x84 + t1)) = *(struct mv3 *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC1A963C) + 0xC)); }
                (((struct o18_float *)(t1))->v) = 1.0f;
                (((struct o1C_float *)(t1))->v) = 0.300000012f;
                (((struct o20_float *)(t1))->v) = 0.0f;
            }
            t1 = *(signed char *)((a4 + 0x2));
            *(unsigned short *)((a4 + 0x1C)) = (((t1 << 2) + t1) + 0x1);
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        }
        t1 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
        t2 = (short)(t1 - 1);
        if ((short)(t1 - 1) == 0) {
            *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
            *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x1;
            (((struct o74_float *)(((((struct oC4_int *)(a4))->v))))->v) = 0.0f;
            (((struct o74_float *)(((((struct oC8_int *)(a4))->v))))->v) = 0.0f;
            (((struct o8C_float *)(((((struct oC8_int *)(a4))->v))))->v) = 1.0f;
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            t2 = 0x15;
        }
        t0 = t2;
    }
    return t0;
}
