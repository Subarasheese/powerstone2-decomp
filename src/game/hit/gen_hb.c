/* Straight-line functions with calls and guards (batch gen_hb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
struct o0_int { int v; };
struct o10_float { char p[0x10]; float v; };
struct o135_uchar { char p[0x135]; unsigned char v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o1D4_uint { char p[0x1D4]; unsigned int v; };
struct o2C8_int { char p[0x2C8]; int v; };
struct o2C8_uint { char p[0x2C8]; unsigned int v; };
struct o2CC_int { char p[0x2CC]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o48_int { char p[0x48]; int v; };
struct o48_uint { char p[0x48]; unsigned int v; };
struct o4C_int { char p[0x4C]; int v; };
struct o4C_uint { char p[0x4C]; unsigned int v; };
struct o50_int { char p[0x50]; int v; };
struct o50_uint { char p[0x50]; unsigned int v; };
struct o54_int { char p[0x54]; int v; };
struct o54_uint { char p[0x54]; unsigned int v; };
struct o58_int { char p[0x58]; int v; };
struct o58_uint { char p[0x58]; unsigned int v; };
struct o5C_int { char p[0x5C]; int v; };
struct o5C_uint { char p[0x5C]; unsigned int v; };
struct o78_int { char p[0x78]; int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o94_uchar { char p[0x94]; unsigned char v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC_float { char p[0xC]; float v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c037498(int, int, int, int);
int FUN_0c03f346(int);
int FUN_0c0522e2(int, int);
int FUN_0c052364(int, int);
int FUN_0c054c90(int, int, int);
int FUN_0c059e60(int, int);
int FUN_0c060028(int, int, int);
int FUN_0c060c80(int, int, int);
int FUN_0c061222(int, int);
int FUN_0c061284(int, int);
int FUN_0c0612cc(int, int);
int FUN_0c061416(int, int, int, int);
int FUN_0c06151a(int, int, int, int, float);
int FUN_0c07e2f4(int, int);
int FUN_0c1171f0(int);
int FUN_0c1377a8(int, int, int, int, Stk3);
int FUN_0c137a9a(int, int, int, int, Stk3);
int FUN_0c137c7c(int, int, int, int);
int FUN_0c1965cc(int, int, int);
int FUN_0c19d2b4(int, int, int, int);
int FUN_0c1a02cc(int, int, int);
int FUN_0c1a03b2(int, int);
int FUN_0c1a14c0(int);
int FUN_0c1a14dc(int, int, int);
int FUN_0c1a1574(int, int);
float math_interval_overlap(float, float, float, float);
float math_signed_sqrt(float);
float math_sin_angle16(int);
int strlen(int);
int FUN_0c19ccc0(int a4, int a5, int a6);
int FUN_0c061a10(int a4, int a5, int a6, int a7);
int FUN_0c137cb4(int a4, int a5, int a6, int a7);
int FUN_0c0fd6e4(int a4);
int FUN_0c062c50(int a4, int a5, int a6, int a7);
int FUN_0c054a6c(int a4, int a5, int a6);

int FUN_0c19ccc0(int a4, int a5, int a6)
{
    int stk[119];
    register int t101;
    register int t4;
    register int t6;
    register int t9;
    register int t10;
    register int t11;
    register int t15;
    register int t17;
    register int t18;
    register int t20;
    register int t39;
    register int t40;
    register int t71;
    register int t42;
    register int t43;
    register int t44;
    register int t45;
    register int t46;
    register int t50;
    register int t52;
    register int t53;
    register int t55;
    register int t81;
    register int t95;
    register int t96;
    register int t12;
    int t13;
    register int t14;
    register int t27;
    register int t47;
    int t48;
    register int t49;
    register int t62;
    register int t63;
    register int t64;
    register int t82;
    register int t94;

    (((struct o1D4_uint *)(((int)stk + 4)))->v) = a6;
    *(unsigned int *)(((int)stk + 4)) = (*(int *)((a4 + 0x30)));
    *(unsigned int *)(((int)stk + 16)) = 0x0;
    t101 = 0xFFFFFFFF;
    if ((*(signed char *)((a5 + 0x1))) != (*(signed char *)((a4 + 0x1)))) {
    } else {
        *(unsigned short *)(((int)stk + 12)) = (*(short *)((a5 + 0x2)));
        t4 = FUN_0c1a02cc((0x1D4 + ((int)stk + 4)), 0xC8B5DB4, 0x1);
        t6 = 0xFFFFFFFF;
        if ((short)t4 != 1) {
        } else {
            t6 = (unsigned char)(*(signed char *)0xC8B5DB4);
        }
        *(unsigned short *)(((int)stk + 8)) = t6;
        if ((short)t6 != -1) {
            *(unsigned int *)(((int)stk + 16)) = (0x118 + ((int)stk + 4));
            if ((int)(short)t6 > 0) {
                t9 = (0x118 + ((int)stk + 4));
                t10 = 0x0;
                for (;;) {
                    t11 = t9;
                    *(int *)((int)stk + 0) = t11;
                    t9 = (t9 + 0x1);
                    if (((0x1D8 + ((int)stk + 0)) != 0) && ((t12 = *(int *)(((int)stk + 472)), t12 != 0) && (t13 = *(int *)(((int)stk + 472)), t14 = *(short *)((t13 + 0x4)), (int)(unsigned short)t14 > (int)0x1))) {
                        t15 = *(int *)(((int)stk + 472));
                        *(unsigned short *)(((0x4 + t15) + 0x0)) = ((*(short *)((0x4 + t15))) - 1);
                        t17 = *(int *)(((int)stk + 472));
                        t18 = *(int *)((t17 + 0x0));
                        *(unsigned int *)((t17 + 0x0)) = (t18 + 0x1);
                        t27 = (unsigned char)(*(signed char *)((((t18 + 0x1) - 1) + 0x0)));
                    } else {
                        t20 = FUN_0c1a02cc((0x1D8 + ((int)stk + 0)), 0xC8B5DB4, 0x1);
                        t27 = 0xFFFFFFFF;
                        if ((short)t20 != 1) {
                        } else {
                            t27 = (unsigned char)(*(signed char *)0xC8B5DB4);
                        }
                    }
                    t10 = (t10 + 0x1);
                    *(unsigned char *)((t11 + 0x0)) = t27;
                    if ((int)t10 >= (int)(short)t6) {
                        break;
                    }
                }
            }
        }
        t42 = *(short *)(((int)stk + 8));
        t39 = *(short *)(((int)stk + 12));
        t40 = ((t39 - t42) - 1);
        if ((int)(short)((t39 - t42) - 1) < 0) {
            t40 = 0x0;
        }
        if ((short)t40 != 0) {
            t71 = (0x158 + ((int)stk + 4));
            if ((int)(short)t40 > 0) {
                t43 = t40;
                t44 = (0x158 + ((int)stk + 4));
                t45 = 0x0;
                for (;;) {
                    t46 = t44;
                    *(int *)((int)stk + 0) = t46;
                    t44 = (t44 + 0x1);
                    if (((0x1D8 + ((int)stk + 0)) != 0) && ((t47 = *(int *)(((int)stk + 472)), t47 != 0) && (t48 = *(int *)(((int)stk + 472)), t49 = *(short *)((t48 + 0x4)), (int)(unsigned short)t49 > (int)0x1))) {
                        t50 = *(int *)(((int)stk + 472));
                        *(unsigned short *)(((0x4 + t50) + 0x0)) = ((*(short *)((0x4 + t50))) - 1);
                        t52 = *(int *)(((int)stk + 472));
                        t53 = *(int *)((t52 + 0x0));
                        *(unsigned int *)((t52 + 0x0)) = (t53 + 0x1);
                        t62 = (unsigned char)(*(signed char *)((((t53 + 0x1) - 1) + 0x0)));
                        t63 = t42;
                        t64 = t43;
                    } else {
                        t43 = 0x1D8;
                        t42 = 0xC1A02CC;
                        t43 = (t43 + ((int)stk + 0));
                        t55 = FUN_0c1a02cc(t43, 0xC8B5DB4, 0x1);
                        t62 = 0xFFFFFFFF;
                        if ((short)t55 != 1) {
                        } else {
                            t62 = (unsigned char)(*(signed char *)0xC8B5DB4);
                        }
                    }
                    t45 = (t45 + 0x1);
                    t42 = t63;
                    t43 = t64;
                    *(unsigned char *)((t46 + 0x0)) = t62;
                    if ((int)t45 >= (int)(short)t40) {
                        break;
                    }
                }
                t71 = t44;
            }
            *(unsigned char *)((t71 + 0x0)) = 0x0;
        }
        (((struct o94_uchar *)(((int)stk + 4)))->v) = (*(signed char *)((a5 + 0x1)));
        t81 = *(int *)(((*(int *)(((int)stk + 4))) + 0x4));
        for (t82 = 0; ; t82++) { *(unsigned char *)(((0x94 + ((int)stk + 4)) + 0x1) + t82) = *(unsigned char *)(t81 + t82); if (*(unsigned char *)(t81 + t82) == 0) break; }
        *(unsigned short *)(((int)stk + 4)) = (strlen((*(int *)(((*(int *)(((int)stk + 4))) + 0x4)))));
        FUN_0c1a14c0((0x17C + ((int)stk + 4)));
        FUN_0c1a14dc((0x17C + ((int)stk + 4)), (0x94 + ((int)stk + 4)), ((*(short *)(((int)stk + 4))) + 0x1));
        FUN_0c1a14dc((0x17C + ((int)stk + 4)), 0xC8B5DB9, (unsigned short)(*(short *)0xC8B5DB6));
        FUN_0c1a1574((((int)stk + 4) + 0x10), (0x17C + ((int)stk + 4)));
        FUN_0c1965cc((((int)stk + 4) + 0x10), (*(int *)(((int)stk + 16))), 0x10);
        for (t94 = 0; ; t94++) { *(unsigned char *)((((int)stk + 4) + 0x10) + t94) = *(unsigned char *)(0xC20AA44 + t94); if (*(unsigned char *)(0xC20AA44 + t94) == 0) break; }
        *(unsigned short *)(((int)stk + 8)) = 0x3;
        *(unsigned short *)(((int)stk + 4)) = 0x0;
        t95 = strlen((((int)stk + 4) + 0x10));
        t96 = FUN_0c1a03b2((((int)stk + 4) + 0x10), t95);
        FUN_0c19d2b4(a4, (*(short *)(((int)stk + 8))), (*(signed char *)((a5 + 0x1))), t96);
        t101 = (*(short *)(((int)stk + 4)));
    }
    return t101;
}

int FUN_0c061a10(int a4, int a5, int a6, int a7)
{
    int stk[11];
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u8;
    register float t9;
    register float u10;
    register float u11;
    register float u12;
    register float u13;
    float t14;
    register int t96;
    register int t15;
    register int t42;
    register int t54;
    register int t57;
    register float u60;
    register float u63;
    int t40;

    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x10)) = *(struct mv3 *)(0xC1C4A88); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x4)) = *(struct mv3 *)(0xC1C4A94); }
    u0 = (((struct oC_float *)((a7 + 0x8)))->v);
    u1 = (((struct oC_float *)((a6 + 0x8)))->v);
    *(float *)(((int)stk + 0)) = (u1 + u0);
    u2 = (((struct o8_float *)((a6 + 0x8)))->v);
    u3 = (((struct o8_float *)((a7 + 0x8)))->v);
    u4 = (((struct o8_float *)(a7))->v);
    u5 = (((struct o8_float *)(a6))->v);
    u8 = ((u2 - u3) * (u2 - u3));
    u8 = u8 + ((u5 - u4)) * ((u5 - u4));
    t9 = math_signed_sqrt(u8);
    u10 = (((struct o4_float *)((a7 + 0x8)))->v);
    u11 = (((struct o10_float *)((a7 + 0x8)))->v);
    u12 = (((struct o4_float *)((a6 + 0x8)))->v);
    *(float *)(((int)stk + 4)) = u12;
    u13 = (((struct oC_float *)((a6 + 0x8)))->v);
    t14 = math_interval_overlap((u12 + u13), (u12 - u13), (u10 + u11), (u10 - u11));
    t96 = 0x0;
    if (!(((u1 + u0) - t9) > 0.0f)) {
    } else {
        t96 = 0x0;
        if (!(t14 > 0.0f)) {
        } else {
            t15 = FUN_0c061284(a4, a5);
            if (t15 != 0) {
                (((struct o135_uchar *)(a4))->v) = (*(signed char *)((a7 + 0x4)));
                (((struct o135_uchar *)(a5))->v) = (*(signed char *)((a6 + 0x4)));
                t96 = 0x2;
            } else {
                if ((t14 > 9.0f) && (t14 > ((u1 + u0) - t9))) {
                    FUN_0c06151a(a4, a5, a6, a7, ((u1 + u0) - t9));
                } else {
                    if (((((struct o4_float *)((a6 + 0x8)))->v)) > ((((struct o4_float *)((a7 + 0x8)))->v))) {
                        if (((*(signed char *)((a5 + 0x0))) == 0) && (t40 = *(signed char *)((a4 + 0x126)), t40 == 0)) {
                            FUN_0c06151a(a4, a5, a6, a7, ((u1 + u0) - t9));
                        } else {
                            t42 = FUN_0c0612cc(a4, a5);
                            if (t42 != 0) {
                                *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) - t14);
                                FUN_0c060c80(a5, (((int)stk + 4) + 0x4), a7);
                            } else {
                                *(float *)(((int)stk + 24)) = ((*(float *)(((int)stk + 24))) + t14);
                                FUN_0c060c80(a4, (((int)stk + 4) + 0x10), a6);
                                FUN_0c061222(a5, a4);
                                (((struct o135_uchar *)(a4))->v) = (*(signed char *)((a7 + 0x4)));
                                FUN_0c061416(a4, a6, (a6 + 0x8), (a7 + 0x8));
                            }
                        }
                    } else {
                        FUN_0c060028((a7 + 0x8), (a6 + 0x8), (((int)stk + 4) + 0x1C));
                        t54 = FUN_0c0612cc(a5, a4);
                        if (t54 != 0) {
                            *(float *)(((int)stk + 24)) = ((*(float *)(((int)stk + 24))) - t14);
                            FUN_0c060c80(a4, (((int)stk + 4) + 0x10), a6);
                        } else {
                            t57 = FUN_0c0612cc(a4, a5);
                            if (t57 != 0) {
                                u60 = ((*(float *)(((int)stk + 32))) * ((u1 + u0) - t9));
                                u60 = -u60;
                                *(float *)(((int)stk + 8)) = ((*(float *)(((int)stk + 8))) + u60);
                                u63 = ((*(float *)(((int)stk + 40))) * ((u1 + u0) - t9));
                                u63 = -u63;
                                *(float *)(((int)stk + 16)) = ((*(float *)(((int)stk + 16))) + u63);
                            } else {
                                *(float *)(((int)stk + 20)) = ((*(float *)(((int)stk + 20))) + ((((*(float *)(((int)stk + 32))) * ((u1 + u0) - t9)) / (1.0f + 1.0f))));
                                *(float *)(((int)stk + 28)) = ((*(float *)(((int)stk + 28))) + ((((*(float *)(((int)stk + 40))) * ((u1 + u0) - t9)) / (1.0f + 1.0f))));
                                *(float *)(((int)stk + 8)) = (-(*(float *)(((int)stk + 20))));
                                *(float *)(((int)stk + 16)) = (-(*(float *)(((int)stk + 28))));
                                FUN_0c060c80(a4, (((int)stk + 4) + 0x10), a6);
                            }
                            FUN_0c060c80(a5, (((int)stk + 4) + 0x4), a7);
                            (((struct o135_uchar *)(a5))->v) = (*(signed char *)((a6 + 0x4)));
                        }
                    }
                }
                t96 = 0x1;
            }
        }
    }
    return t96;
}

int FUN_0c137cb4(int a4, int a5, int a6, int a7)
{
    int stk[3];

    register int R1;
    register int R2;
    register int R3;
    register float F3;
    register float F4;
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
    v0_6 = a4;
    v0_0 = a6;
    v0_1 = a7;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_6 + 0x28)) = *(struct mv3 *)(((((short)(*(signed char *)((v0_6 + 0x1))) * (short)0x3938) + 0xC532498) + 0x28)); }
    v0_8 = *(signed char *)((v0_6 + 0x14));
    v0_7 = (v0_8);
    v0_2 = (0xC2A1954);
    v0_3 = (0xC532498);
    v0_5 = (0xC);
    v0_4 = (v0_6);
    w0_0 = (60.0f);
    if ((v0_8 == 0)) goto L_C137CFE;
    if ((v0_7 == 1)) goto L_C137D96;
    if ((v0_7 != 2)) goto L_C137CFA;
    (((struct o14_uchar *)(v0_4))->v) = ((*(signed char *)((v0_4 + 0x14))) + 0x1);
    v0_7 = (0x14);
    L_C137EDA:;
    return v0_7;
    L_C137CFA:;
    FUN_0c059e60((((short)(*(signed char *)((v0_4 + 0x1))) * (short)0x3938) + v0_3), 0x22);
    v0_7 = ((FUN_0c03f346(v0_4)));
    goto L_C137EDA;
    L_C137D96:;
    if ((((int)((int)(*(short *)((v0_4 + 0x1C))) % (int)0x7)) != 0)) goto L_C137DAC;
    FUN_0c07e2f4(v0_4, 0x30);
    L_C137DAC:;
    v0_6 = (0x0);
    v0_7 = (v0_2);
    L_C137E1A:;
    if (((unsigned int)v0_6 < (unsigned int)v0_5)) goto L_C137DE0;
    v0_5 = (int)((int)(*(short *)((v0_4 + 0x1C))) % (int)((((struct o0_int *)0xC2A1940)->v)));
    v0_7 = (v0_5);
    if ((v0_5 != 0)) goto L_C137E6A;
    v0_5 = v0_2;
    v0_6 = v0_2;
    v0_2 = ((v0_2 + 0x24));
    v0_8 = (0x0);
    v0_5 = v0_5;
    v0_6 = v0_6;
    L_C137E66:;
    if (!(((unsigned int)v0_5 < (unsigned int)v0_2))) goto L_C137E6A;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)((v0_4 + 0x28)); }
    *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) + w0_0);
    v0_7 = ((FUN_0c1377a8((*(signed char *)((v0_4 + 0x1))), ((int)stk + 0), ((*(int *)((((0xC4 + v0_4) + v0_8) + 0x0))) + 0x78), v0_5, *(Stk3 *)(((int)stk + 0)))));
    v0_8 = ((v0_8 + 0x4));
    v0_5 = ((v0_5 + 0xC));
    goto L_C137E66;
    L_C137E6A:;
    if ((((int)((int)(*(short *)((v0_4 + 0x1C))) % (int)((((struct o4_int *)0xC2A1940)->v)))) != 0)) goto L_C137E84;
    FUN_0c137c7c((*(signed char *)((v0_4 + 0x1))), (v0_4 + 0x28), v0_0, v0_1);
    L_C137E84:;
    *(unsigned short *)((v0_4 + 0x1C)) = ((*(short *)((v0_4 + 0x1C))) + 0x1);
    if (((*(signed char *)((0x3715 + (((short)(*(signed char *)((v0_4 + 0x1))) * (short)0x3938) + v0_3)))) != 26)) goto L_C137EB0;
    v0_7 = (0x15);
    if (((int)(*(signed char *)(((v0_3 + ((short)(*(signed char *)((v0_4 + 0x1))) * (short)0x3938)) + 0x15))) <= (int)0x2)) goto L_C137EDA;
    L_C137EB0:;
    (((struct o14_uchar *)(v0_4))->v) = ((*(signed char *)((v0_4 + 0x14))) + 0x1);
    v0_7 = (0x14);
    goto L_C137EDA;
    L_C137DE0:;
    v0_8 = *(int *)((((0xC4 + v0_4) + v0_6) + 0x0));
    (((struct o78_uint *)(v0_8))->v) = (((((struct o78_int *)(v0_8))->v)) + (*(int *)((v0_7 + 0x0))));
    v0_8 = *(int *)((((0xC4 + v0_4) + v0_6) + 0x0));
    (((struct o7C_uint *)(v0_8))->v) = (((((struct o7C_int *)(v0_8))->v)) + (*(int *)((v0_7 + 0x4))));
    v0_8 = *(int *)((((0xC4 + v0_4) + v0_6) + 0x0));
    (((struct o80_uint *)(v0_8))->v) = (((((struct o80_int *)(v0_8))->v)) + (*(int *)((v0_7 + 0x8))));
    v0_6 = ((v0_6 + 0x4));
    v0_7 = ((v0_7 + 0xC));
    goto L_C137E1A;
    L_C137CFE:;
    (((struct o14_uchar *)(v0_4))->v) = ((*(signed char *)((v0_4 + 0x14))) + 0x1);
    FUN_0c059e60((((short)(*(signed char *)((v0_4 + 0x1))) * (short)0x3938) + v0_3), 0x21);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_4 + 0x28)) = *(struct mv3 *)(((((short)(*(signed char *)((v0_4 + 0x1))) * (short)0x3938) + v0_3) + 0x28)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_4 + 0x40)) = *(struct mv3 *)(0xC2A1948); }
    (((struct oAC_ushort *)(v0_4))->v) = 0xF;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)((v0_4 + 0x28)); }
    *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) + w0_0);
    v0_6 = (0x0);
    v0_7 = ((v0_2 + 0x24));
    L_C137D8A:;
    if (((unsigned int)v0_6 < (unsigned int)v0_5)) goto L_C137D5C;
    FUN_0c137a9a((*(signed char *)((v0_4 + 0x1))), ((int)stk + 0), v0_0, v0_1, *(Stk3 *)(((int)stk + 0)));
    goto L_C137D96;
    L_C137D5C:;
    (((struct o78_uint *)((*(int *)((((0xC4 + v0_4) + v0_6) + 0x0)))))->v) = (*(int *)((v0_7 + 0x0)));
    (((struct o7C_uint *)((*(int *)((((0xC4 + v0_4) + v0_6) + 0x0)))))->v) = (*(int *)((v0_7 + 0x4)));
    (((struct o80_uint *)((*(int *)((((0xC4 + v0_4) + v0_6) + 0x0)))))->v) = (*(int *)((v0_7 + 0x8)));
    v0_6 = ((v0_6 + 0x4));
    v0_7 = ((v0_7 + 0xC));
    goto L_C137D8A;
}

int FUN_0c0fd6e4(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    t0 = *(signed char *)((a4 + 0x14));
    t1 = *(int *)((a4 + 0x10));
    if (t0 != 0) {
        t2 = t0;
        if (t0 != 1) {
        } else {
            { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC8_int *)(a4))->v)) + 0x6C)) = *(struct mv3 *)(0xC28EBFC); }
            if ((*(signed char *)((0xA8 + (*(int *)((a4 + 0x10)))))) == 1) {
                (((struct oA8_uchar *)(a4))->v) = 0x1;
            } else {
                (((struct oA8_uchar *)(a4))->v) = 0x0;
            }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)((a4 + 0x4C)); }
            FUN_0c1171f0(a4);
            t0 = *(signed char *)((a4 + 0x15));
            switch (t0) {
            case 0:
                if ((*(signed char *)(((t1 + 0x41C) + 0x0))) != 1) {
                } else {
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                }
                break;
            case 1:
                if ((*(signed char *)(((t1 + 0x41C) + 0x0))) != 0) {
                    if ((int)(*(short *)((a4 + 0x1E))) < (int)0x20) {
                        *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x4);
                        if ((int)(*(short *)((a4 + 0x1E))) >= (int)0x20) {
                            *(unsigned short *)((a4 + 0x1E)) = 0x20;
                            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        }
                    }
                } else {
                    (((struct o15_uchar *)(a4))->v) = 0x3;
                }
                break;
            case 2:
                if ((*(signed char *)(((t1 + 0x41C) + 0x0))) == 0) {
                    (((struct o15_uchar *)(a4))->v) = 0x3;
                }
                break;
            case 3:
                if ((*(signed char *)(((t1 + 0x41C) + 0x0))) == 1) {
                    (((struct o15_uchar *)(a4))->v) = 0x1;
                } else {
                    if ((int)(*(short *)((a4 + 0x1E))) > 0) {
                        *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) - 1);
                        if ((int)(*(short *)((a4 + 0x1E))) <= 0) {
                            *(unsigned short *)((a4 + 0x1E)) = 0x0;
                            (((struct o15_uchar *)(a4))->v) = 0x0;
                        }
                    }
                }
                break;
            }
            if ((*(signed char *)((a4 + 0x15))) != 0) {
                t0 = (((struct oC4_int *)(a4))->v);
                (((struct o7C_uint *)(t0))->v) = (int)((float)((((struct o7C_int *)(t0))->v)) + (((float)((((struct o4_int *)0xC28EC14)->v)) * ((float)(*(short *)((a4 + 0x1E))) / 32.0f))));
                t0 = (((struct oC8_int *)(a4))->v);
                u0 = (((((struct o8_float *)0xC28EC14)->v)) * (math_sin_angle16((*(short *)((a4 + 0x1C))))));
                (((struct o7C_uint *)(t0))->v) = ((int)((((u0 * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF);
                *(unsigned short *)((a4 + 0x1C)) = (int)((float)(*(short *)((a4 + 0x1C))) + (((float)((((struct o0_int *)0xC28EC14)->v)) * ((float)(*(short *)((a4 + 0x1E))) / 32.0f))));
                (((struct o14_float *)(((((struct oC8_int *)(a4))->v))))->v) = ((float)(*(short *)((a4 + 0x1E))) / 32.0f);
            } else {
                (((struct o14_float *)(((((struct oC8_int *)(a4))->v))))->v) = 0.0f;
            }
            t2 = 0x14;
        }
        t0 = t2;
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o15_uchar *)(a4))->v) = 0x0;
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0x1F;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x4C)) = *(struct mv3 *)(0xC28EBF0); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x34)) = *(struct mv3 *)(0xC28EC08); }
        FUN_0c037498(((((struct oC4_int *)(a4))->v)), 0x0, 0x1A, (*(int *)0xC4B410C));
        FUN_0c037498(((((struct oC8_int *)(a4))->v)), 0x0, 0x1B, (*(int *)0xC4B410C));
        t2 = (((struct oC8_int *)(a4))->v);
        *(unsigned short *)((t2 + 0x6)) = ((*(short *)((t2 + 0x6))) | 0x400);
        *(unsigned short *)((a4 + 0x1E)) = 0x0;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC8_int *)(a4))->v)) + 0x6C)) = *(struct mv3 *)(0xC28EBFC); }
        if ((*(signed char *)((0xA8 + (*(int *)((a4 + 0x10)))))) == 1) {
            (((struct oA8_uchar *)(a4))->v) = 0x1;
        } else {
            (((struct oA8_uchar *)(a4))->v) = 0x0;
        }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)((a4 + 0x4C)); }
        FUN_0c1171f0(a4);
        t2 = *(signed char *)((a4 + 0x15));
        switch (t2) {
        case 0:
            if ((*(signed char *)(((t1 + 0x41C) + 0x0))) != 1) {
            } else {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            }
            break;
        case 1:
            if ((*(signed char *)(((t1 + 0x41C) + 0x0))) != 0) {
                if ((int)(*(short *)((a4 + 0x1E))) < (int)0x20) {
                    *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x4);
                    if ((int)(*(short *)((a4 + 0x1E))) >= (int)0x20) {
                        *(unsigned short *)((a4 + 0x1E)) = 0x20;
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    }
                }
            } else {
                (((struct o15_uchar *)(a4))->v) = 0x3;
            }
            break;
        case 2:
            if ((*(signed char *)(((t1 + 0x41C) + 0x0))) == 0) {
                (((struct o15_uchar *)(a4))->v) = 0x3;
            }
            break;
        case 3:
            if ((*(signed char *)(((t1 + 0x41C) + 0x0))) == 1) {
                (((struct o15_uchar *)(a4))->v) = 0x1;
            } else {
                if ((int)(*(short *)((a4 + 0x1E))) > 0) {
                    *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) - 1);
                    if ((int)(*(short *)((a4 + 0x1E))) <= 0) {
                        *(unsigned short *)((a4 + 0x1E)) = 0x0;
                        (((struct o15_uchar *)(a4))->v) = 0x0;
                    }
                }
            }
            break;
        }
        if ((*(signed char *)((a4 + 0x15))) != 0) {
            t1 = (((struct oC4_int *)(a4))->v);
            (((struct o7C_uint *)(t1))->v) = (int)((float)((((struct o7C_int *)(t1))->v)) + (((float)((((struct o4_int *)0xC28EC14)->v)) * ((float)(*(short *)((a4 + 0x1E))) / 32.0f))));
            t1 = (((struct oC8_int *)(a4))->v);
            u0 = (((((struct o8_float *)0xC28EC14)->v)) * (math_sin_angle16((*(short *)((a4 + 0x1C))))));
            (((struct o7C_uint *)(t1))->v) = ((int)((((u0 * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF);
            *(unsigned short *)((a4 + 0x1C)) = (int)((float)(*(short *)((a4 + 0x1C))) + (((float)((((struct o0_int *)0xC28EC14)->v)) * ((float)(*(short *)((a4 + 0x1E))) / 32.0f))));
            (((struct o14_float *)(((((struct oC8_int *)(a4))->v))))->v) = ((float)(*(short *)((a4 + 0x1E))) / 32.0f);
        } else {
            (((struct o14_float *)(((((struct oC8_int *)(a4))->v))))->v) = 0.0f;
        }
        t0 = 0x14;
    }
    return t0;
}

int FUN_0c062c50(int a4, int a5, int a6, int a7)
{
    int stk[8];
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u8;
    register float t9;
    register float u10;
    register float u11;
    register float u12;
    register float u13;
    float t14;
    register int t125;
    register int t15;
    register int t92;
    register int t102;
    register float u76;
    register float u77;
    int t78;
    register int t79;
    register float u80;
    register float u81;
    int t82;

    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x10)) = *(struct mv3 *)(0xC1C4B18); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x4)) = *(struct mv3 *)(0xC1C4B24); }
    u0 = (((struct oC_float *)((a7 + 0x8)))->v);
    u1 = (((struct oC_float *)((a6 + 0x8)))->v);
    *(float *)(((int)stk + 0)) = (u1 + u0);
    u2 = (((struct o8_float *)((a6 + 0x8)))->v);
    u3 = (((struct o8_float *)((a7 + 0x8)))->v);
    u4 = (((struct o8_float *)(a7))->v);
    u5 = (((struct o8_float *)(a6))->v);
    u8 = ((u2 - u3) * (u2 - u3));
    u8 = u8 + ((u5 - u4)) * ((u5 - u4));
    t9 = math_signed_sqrt(u8);
    u10 = (((struct o4_float *)((a7 + 0x8)))->v);
    u11 = (((struct o10_float *)((a7 + 0x8)))->v);
    *(float *)(((int)stk + 4)) = u11;
    u12 = (((struct o4_float *)((a6 + 0x8)))->v);
    u13 = (((struct o10_float *)((a6 + 0x8)))->v);
    t14 = math_interval_overlap((u12 + u13), (u12 - u13), (u10 + u11), (u10 - u11));
    t125 = 0x0;
    if (!(((u1 + u0) - t9) > 0.0f)) {
    } else {
        t125 = 0x0;
        if (!(t14 > 0.0f)) {
        } else {
            t15 = FUN_0c061284(a4, a5);
            if (t15 != 0) {
                (((struct o135_uchar *)(a4))->v) = (*(signed char *)((a7 + 0x4)));
                (((struct o135_uchar *)(a5))->v) = (*(signed char *)((a6 + 0x4)));
                t125 = 0x2;
            } else {
                if ((t14 > 9.0f) && (t14 > ((u1 + u0) - t9))) {
                    FUN_0c06151a(a4, a5, a6, a7, ((u1 + u0) - t9));
                } else {
                    if ((((*(signed char *)((a4 + 0x0))) == 0) && ((u76 = (((struct o4_float *)((a6 + 0x8)))->v), u77 = (((struct o4_float *)((a7 + 0x8)))->v), !(u76 > u77)) && (t78 = *(signed char *)((a5 + 0x126)), t78 == 0))) || ((t79 = *(signed char *)((a5 + 0x0)), t79 == 0) && ((u80 = (((struct o4_float *)((a6 + 0x8)))->v), u81 = (((struct o4_float *)((a7 + 0x8)))->v), !(u81 > u80)) && (t82 = *(signed char *)((a4 + 0x126)), t82 == 0)))) {
                        FUN_0c06151a(a4, a5, a6, a7, ((u1 + u0) - t9));
                    } else {
                        if (((((struct o4_float *)((a6 + 0x8)))->v)) > ((((struct o4_float *)((a7 + 0x8)))->v))) {
                            t92 = FUN_0c0612cc(a4, a5);
                            if (t92 != 0) {
                                *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) - t14);
                                FUN_0c060c80(a5, (((int)stk + 4) + 0x4), a7);
                            } else {
                                *(float *)(((int)stk + 24)) = ((*(float *)(((int)stk + 24))) + t14);
                                FUN_0c060c80(a4, (((int)stk + 4) + 0x10), a6);
                                FUN_0c061222(a5, a4);
                                (((struct o135_uchar *)(a4))->v) = (*(signed char *)((a7 + 0x4)));
                                FUN_0c061416(a4, a6, (a6 + 0x8), (a7 + 0x8));
                            }
                        } else {
                            t102 = FUN_0c0612cc(a5, a4);
                            if (t102 != 0) {
                                *(float *)(((int)stk + 24)) = ((*(float *)(((int)stk + 24))) - t14);
                                FUN_0c060c80(a4, (((int)stk + 4) + 0x10), a6);
                            } else {
                                *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) + t14);
                                FUN_0c060c80(a5, (((int)stk + 4) + 0x4), a7);
                                FUN_0c061222(a4, a5);
                                (((struct o135_uchar *)(a5))->v) = (*(signed char *)((a6 + 0x4)));
                                FUN_0c061416(a5, a7, (a7 + 0x8), (a6 + 0x8));
                            }
                        }
                    }
                }
                t125 = 0x1;
            }
        }
    }
    return t125;
}

int FUN_0c054a6c(int a4, int a5, int a6)
{
    register int t0;
    register int t1;

    if (((*(int *)((((((struct o2C8_int *)(a4))->v)) + 0x14))) & 0x100) != 0) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((0xBC + a4) + 0x24)) = *(struct mv3 *)(((0xBC + a4) + 0xC)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((0xEC + a4) + 0x24)) = *(struct mv3 *)(((0xEC + a4) + 0xC)); }
        *(unsigned int *)(((0x17C + a4) + 0xC)) = (*(int *)(((0x17C + a4) + 0x4)));
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((0x11C + a4) + 0x24)) = *(struct mv3 *)(((0x11C + a4) + 0xC)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((0x14C + a4) + 0x24)) = *(struct mv3 *)(((0x14C + a4) + 0xC)); }
        (((struct o48_uint *)((0x19C + a4)))->v) = (*(int *)(((0x19C + a4) + 0x18)));
        (((struct o4C_uint *)((0x19C + a4)))->v) = (*(int *)(((0x19C + a4) + 0x1C)));
        (((struct o50_uint *)((0x19C + a4)))->v) = (*(int *)(((0x19C + a4) + 0x20)));
        (((struct o54_uint *)((0x19C + a4)))->v) = (*(int *)(((0x19C + a4) + 0x24)));
        (((struct o58_uint *)((0x19C + a4)))->v) = (*(int *)(((0x19C + a4) + 0x28)));
        (((struct o5C_uint *)((0x19C + a4)))->v) = (*(int *)(((0x19C + a4) + 0x2C)));
        (((struct oC_float *)((0x18C + a4)))->v) = ((((struct o4_float *)((0x18C + a4)))->v));
    } else {
        if (((*(int *)((((((struct o2C8_int *)(a4))->v)) + 0x14))) & 0x200) != 0) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((0xBC + a4) + 0xC)) = *(struct mv3 *)(((0xBC + a4) + 0x24)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((0xEC + a4) + 0xC)) = *(struct mv3 *)(((0xEC + a4) + 0x24)); }
            *(unsigned int *)(((0x17C + a4) + 0x4)) = (*(int *)(((0x17C + a4) + 0xC)));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((0x11C + a4) + 0xC)) = *(struct mv3 *)(((0x11C + a4) + 0x24)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((0x14C + a4) + 0xC)) = *(struct mv3 *)(((0x14C + a4) + 0x24)); }
            *(unsigned int *)(((0x19C + a4) + 0x18)) = ((((struct o48_int *)((0x19C + a4)))->v));
            *(unsigned int *)(((0x19C + a4) + 0x1C)) = ((((struct o4C_int *)((0x19C + a4)))->v));
            *(unsigned int *)(((0x19C + a4) + 0x20)) = ((((struct o50_int *)((0x19C + a4)))->v));
            *(unsigned int *)(((0x19C + a4) + 0x24)) = ((((struct o54_int *)((0x19C + a4)))->v));
            *(unsigned int *)(((0x19C + a4) + 0x28)) = ((((struct o58_int *)((0x19C + a4)))->v));
            *(unsigned int *)(((0x19C + a4) + 0x2C)) = ((((struct o5C_int *)((0x19C + a4)))->v));
            (((struct o4_float *)((0x18C + a4)))->v) = ((((struct oC_float *)((0x18C + a4)))->v));
        }
    }
    t0 = *(signed char *)((((((struct o2C8_int *)(a4))->v)) + 0x4));
    if (t0 != -3) {
        if (t0 != -1) {
            if (t0 != -2) {
                (((struct o2C8_uint *)(a4))->v) = (((((struct o2C8_int *)(a4))->v)) + 0x80);
                FUN_0c054c90(a4, a5, a6);
                t0 = 0x0;
            } else {
                (((struct o2C8_uint *)(a4))->v) = ((((((*(signed char *)((((((struct o2C8_int *)(a4))->v)) + 0x5))) << 2) << 2) << 2) << 1) + ((((struct o2CC_int *)(a4))->v)));
                FUN_0c054c90(a4, a5, a6);
                t0 = 0xFFFFFFFE;
            }
            t1 = t0;
        } else {
            if ((*(signed char *)((((((struct o2C8_int *)(a4))->v)) + 0x5))) == -1) {
                FUN_0c052364((*(signed char *)((a4 + 0x0))), 0xFFFFFFFF);
            } else {
                FUN_0c054c90(a4, a5, a6);
            }
            t1 = 0xFFFFFFFF;
        }
        t0 = t1;
    } else {
        FUN_0c0522e2(a4, (*(int *)((((*(signed char *)((((((struct o2C8_int *)(a4))->v)) + 0x5))) << 2) + 0xC241B54))));
        t0 = 0xFFFFFFFD;
    }
    return t0;
}
