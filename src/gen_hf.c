/* Straight-line functions with calls and guards (batch gen_hf): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o3715_uchar { char p[0x3715]; unsigned char v; };
struct o3728_uchar { char p[0x3728]; unsigned char v; };
struct o372C_uchar { char p[0x372C]; unsigned char v; };
struct o3741_uchar { char p[0x3741]; unsigned char v; };
struct o3747_uchar { char p[0x3747]; unsigned char v; };
struct o374A_uchar { char p[0x374A]; unsigned char v; };
struct o3757_uchar { char p[0x3757]; unsigned char v; };
struct o3770_int { char p[0x3770]; int v; };
struct o3770_uint { char p[0x3770]; unsigned int v; };
struct o37A4_float { char p[0x37A4]; float v; };
struct o37BC_float { char p[0x37BC]; float v; };
struct o382E_ushort { char p[0x382E]; unsigned short v; };
struct o3838_ushort { char p[0x3838]; unsigned short v; };
struct o383E_short { char p[0x383E]; short v; };
struct o383E_ushort { char p[0x383E]; unsigned short v; };
struct o3840_short { char p[0x3840]; short v; };
struct o3840_ushort { char p[0x3840]; unsigned short v; };
struct o4_float { char p[0x4]; float v; };
struct o418_int { char p[0x418]; int v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o8C_float { char p[0x8C]; float v; };
int FUN_0c022050(void);
int FUN_0c0220c4(int, int, int);
int FUN_0c0222a4(int, int, int);
int FUN_0c02aa9e(void);
int FUN_0c02fa8a(int, int, int, int);
int FUN_0c037bf6(int);
int FUN_0c03f346(int, int, int);
int FUN_0c05258e(int, int, int, int, int);
int FUN_0c058adc(int, int, int);
int FUN_0c059dae(int, int);
int FUN_0c059e60(int, int);
int FUN_0c067734(int);
int FUN_0c07340e(int);
int FUN_0c073566(int, int);
int FUN_0c07363a(int, int);
int FUN_0c07bdd0(int, int);
int FUN_0c07c4b0(int, int);
int FUN_0c07d6cc(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07eaf4(int);
int FUN_0c07ebd0(int);
int FUN_0c085d0c(int, int, int, int);
int FUN_0c090e12(int);
int FUN_0c09e190(int);
int FUN_0c0b507a(int, int, int);
float FUN_0c0bb2e0(int, int, float);
int FUN_0c0bb67c(int);
int FUN_0c0bb6cc(int);
int FUN_0c0c43c0(int, int);
int FUN_0c1478b8(int, int, int);
int FUN_0c147c10(int, int);
int FUN_0c14f238(int, int, int, int);
int FUN_0c179ac0(void);
extern int FUN_0c17b1a0();
int FUN_0c17c450(int);
int FUN_0c1864e0(int, int);
int FUN_0c186740(int, int);
extern int FUN_0c187798();
float math_cos_angle16(int);
float math_sin_angle16(int);
int nlCalcPoint(int, int);
int nlCalcVector(int, int);
int nlInvertMatrix(int);
int thunk_FUN_0c058310(int, int);
int FUN_0c147c60(int a4, int a5, int a6);
int FUN_0c02f874(int a4, int a5, int a6);
int FUN_0c02fb24(int a4, int a5, int a6);
int FUN_0c082aa4(int a4, int a5);
int FUN_0c0b711a(int a4);
int FUN_0c027d88(void);
int FUN_0c07434c(int a4, int a5, float f4);
int FUN_0c09e38c(int a4, int a5, int a6, int a7);

int FUN_0c147c60(int a4, int a5, int a6)
{
    int stk[13];

    register int R1;
    register int R2;
    register int R3;
    int R13;
    register float F0;
    register float F2;
    register float F3;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    v0_3 = a4;
    v0_5 = a5;
    v0_1 = a6;
    v0_0 = ((int (*)(int, int, int))(FUN_0c187798))(v0_3, v0_5, v0_1);
    FUN_0c058adc((((int)stk + 4) + 0x24), (((int)stk + 4) + 0x24), (((short)(*(signed char *)((v0_3 + 0x2))) * (short)0x3938) + 0xC532E38));
    v0_0 = ((int (*)(void))(FUN_0c187798))();
    v0_2 = *(signed char *)((v0_3 + 0x14));
    v0_4 = (v0_2);
    v0_0 = (v0_3);
    if ((v0_2 == 0)) goto L_C147CBC;
    if ((v0_4 == 1)) goto L_C147CCE;
    v0_4 = ((FUN_0c03f346(v0_0, v0_5, v0_1)));
    L_C147E5E:;
    return v0_4;
    L_C147CCE:;
    *(unsigned int *)(((int)stk + 8)) = 0x0;
    *(unsigned int *)(((int)stk + 20)) = 0xC2A2714;
    *(unsigned int *)(((int)stk + 16)) = (((int)stk + 4) + 0x18);
    *(unsigned int *)(((int)stk + 12)) = ((((int)stk + 4) + 0x18) + 0x4);
    *(unsigned int *)(((int)stk + 4)) = ((((int)stk + 4) + 0x18) + 0x8);
    *(unsigned int *)(((int)stk + 24)) = 0xC2A270C;
    v0_4 = (0xC147D38);
    v0_1 = (0xC2A2710);
    v0_2 = (0xC179AC0);
    v0_2 = (0x168);
    R13 = (0xFFFF);
    v0_3 = (((((int)stk + 4) + 0x18) + 0x8));
    v0_5 = (0xC2A270C);
    v0_3 = (0xC179BF0);
    v0_3 = (0xC2A2718);
    w0_0 = (0.5f);
    w0_1 = (360.0f);
    w0_2 = (65536.0f);
    L_C147E46:;
    if (((int)(*(int *)(((int)stk + 8))) >= (int)(*(int *)(((*(int *)(((int)stk + 20))) + 0x0))))) goto L_C147E54;
    v0_4 = (*(int *)(((int)stk + 16)));
    *(int *)((int)stk + 0) = v0_4;
    v0_5 = *(int *)((v0_1 + 0x0));
    *(unsigned int *)((v0_4 + 0x0)) = ((int)((int)(((int)((int)(FUN_0c179ac0()) % (int)v0_5)) * v0_2) / (int)v0_5));
    v0_4 = (*(int *)(((int)stk + 12)));
    *(int *)((int)stk + 0) = v0_4;
    v0_5 = *(int *)((v0_1 + 0x0));
    *(unsigned int *)((v0_4 + 0x0)) = ((int)((int)(((int)((int)(FUN_0c179ac0()) % (int)v0_5)) * v0_2) / (int)v0_5));
    v0_4 = (*(int *)(((int)stk + 4)));
    *(int *)((int)stk + 0) = v0_4;
    v0_5 = *(int *)((v0_1 + 0x0));
    *(unsigned int *)((v0_4 + 0x0)) = ((int)((int)(((int)((int)(FUN_0c179ac0()) % (int)v0_5)) * v0_2) / (int)v0_5));
    w0_3 = math_cos_angle16(((int)(((((float)(*(int *)(((*(int *)(((int)stk + 16))) + 0x0))) * w0_2) / w0_1)) + w0_0) & R13));
    *(float *)(((int)stk + 40)) = (w0_3 * (*(float *)((v0_3 + 0x0))));
    w0_3 = math_sin_angle16(((int)(((((float)(*(int *)(((*(int *)(((int)stk + 12))) + 0x0))) * w0_2) / w0_1)) + w0_0) & R13));
    *(float *)(((int)stk + 44)) = (w0_3 * (*(float *)((v0_3 + 0x0))));
    w0_3 = math_sin_angle16(((int)(((((float)(*(int *)(((*(int *)(((int)stk + 4))) + 0x0))) * w0_2) / w0_1)) + w0_0) & R13));
    *(float *)(((int)stk + 48)) = (w0_3 * (*(float *)((v0_3 + 0x0))));
    FUN_0c1478b8((*(signed char *)((v0_0 + 0x1))), (*(signed char *)((v0_0 + 0x2))), (((int)stk + 4) + 0x24));
    v0_5 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_5 + 0x1);
    v0_4 = ((short)(v0_5 + 0x1));
    if (((int)(short)(v0_5 + 0x1) <= (int)(*(int *)(((*(int *)(((int)stk + 24))) + 0x0))))) goto L_C147E40;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    v0_4 = (0x14);
    L_C147E40:;
    *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) + 0x1);
    goto L_C147E46;
    L_C147E54:;
    goto L_C147E5E;
    L_C147CBC:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    FUN_0c147c10((*(signed char *)((v0_0 + 0x1))), (*(signed char *)((v0_0 + 0x2))));
    goto L_C147CCE;
}

int FUN_0c02f874(int a4, int a5, int a6)
{
    int stk[17];
    register int t112;
    register int t1;
    register int t3;
    register int t5;
    register int t7;
    register int t10;
    register int t11;
    register int t25;
    register int t26;
    register int t106;
    register int t28;
    register int t30;
    register int t31;
    register int t32;
    register int t33;
    register float u34;
    register float u35;
    register int t38;
    register int t41;
    register int t44;
    register int t47;
    register int t48;
    register int t50;
    register float u54;
    register float u57;
    register float u60;
    register float u63;
    register float u66;
    register float u69;
    register int t99;
    register int t102;
    register int t103;
    register int t4;
    register int t6;
    register int t27;
    register int t29;
    register int t85;
    register int t86;
    register int t101;
    register int t104;

    t112 = 0xA8;
    if ((*(signed char *)((a4 + 0xA8))) == 0) {
    } else {
        t1 = *(int *)((a5 + 0xC));
        *(unsigned int *)(((int)stk + 12)) = (0xC4 + a4);
        *(unsigned int *)(((int)stk + 0)) = 0xC3BB3E0;
        *(unsigned int *)(((int)stk + 16)) = (*(int *)((t1 + 0x0)));
        *(unsigned int *)(((int)stk + 8)) = 0x0;
        t3 = 0xA8;
        t5 = 0xC3BB9E0;
        t7 = (t1 + 0x4);
        for (;;) {
            if ((int)(*(int *)(((int)stk + 8))) >= (int)(*(int *)(((int)stk + 16)))) {
                break;
            }
            t10 = *(int *)((t7 + 0x0));
            t7 = (t7 + 0x4);
            t7 = (t7 + 0x4);
            *(unsigned int *)(((int)stk + 4)) = t10;
            t11 = *(int *)((t7 + 0x0));
            t7 = (t7 + 0x4);
            t3 = (*(int *)(((int)stk + 12)));
            t3 = (FUN_0c17b1a0(((*(int *)(((t11 << 2) + t3))) + 0x28), a5, a6));
            t4 = (*(int *)(((int)stk + 4)));
            t6 = 0x0;
            if ((int)t4 > 0) {
                for (;;) {
                    t3 = (nlCalcPoint(t7, (*(int *)(((int)stk + 0)))));
                    t3 = (nlCalcVector((t7 + 0xC), t5));
                    t4 = (*(int *)(((int)stk + 0)));
                    t6 = (t6 + 0x1);
                    t7 = (t7 + 0x18);
                    t4 = (t4 + 0xC);
                    *(unsigned int *)(((int)stk + 0)) = t4;
                    t5 = (t5 + 0xC);
                    if ((int)t6 >= (int)(*(int *)(((int)stk + 4)))) {
                        break;
                    }
                }
            }
            t4 = (*(int *)(((int)stk + 8)));
            t4 = (t4 + 0x1);
            *(unsigned int *)(((int)stk + 8)) = t4;
        }
        FUN_0c17b1a0((a5 + 0x28), a5, a6);
        t25 = *(int *)((a5 + 0x10));
        t26 = *(int *)((t25 + 0x0));
        t106 = (nlInvertMatrix(0x0));
        if ((int)t26 > 0) {
            t28 = t27;
            t30 = t29;
            t31 = 0x0;
            t32 = (t25 + 0x4);
            for (;;) {
                t33 = *(int *)((t32 + 0x0));
                t32 = (t32 + 0x4);
                *(unsigned int *)(((int)stk + 0)) = t33;
                u34 = *(float *)((t32 + 0x0));
                t32 = (t32 + 0x4);
                u35 = *(float *)((t32 + 0x0));
                t32 = (t32 + 0x4);
                if (u34 == 0.0f) {
                    t32 = (t32 + 0x4);
                    *(volatile int *)((t32 + 0x0));
                    t38 = ((int (*)(int, int))(FUN_0c187798))(t28, t30);
                    *(volatile int *)((t32 + 0x0));
                    t41 = ((int (*)(void))(FUN_0c187798))();
                    t32 = (t32 + 0x4);
                } else {
                    if (u35 == 0.0f) {
                        *(volatile int *)((t32 + 0x0));
                        t44 = ((int (*)(int, int))(FUN_0c187798))(t28, t30);
                        *(volatile int *)((t32 + 0x0));
                        t32 = (t32 + 0x4);
                        t47 = ((int (*)(void))(FUN_0c187798))();
                        t32 = (t32 + 0x4);
                    } else {
                        t48 = *(int *)((t32 + 0x0));
                        t32 = (t32 + 0x4);
                        t50 = *(int *)((t32 + 0x0));
                        t32 = (t32 + 0x4);
                        t28 = (((t48 << 1) + t48) << 2);
                        t30 = (((t50 << 1) + t50) << 2);
                        t30 = (t30 + 0xC3BB3E0);
                        t28 = (t28 + 0xC3BB3E0);
                        u54 = ((*(float *)((t30 + 0x0))) * u35);
                        u54 = u54 + u34 * (*(float *)((t28 + 0x0)));
                        *(float *)(((int)stk + 56)) = u54;
                        u57 = (((((struct o4_float *)(t30))->v)) * u35);
                        u57 = u57 + u34 * ((((struct o4_float *)(t28))->v));
                        *(float *)(((int)stk + 60)) = u57;
                        u60 = (((((struct o8_float *)(t30))->v)) * u35);
                        u60 = u60 + u34 * ((((struct o8_float *)(t28))->v));
                        t30 = (((t50 << 1) + t50) << 2);
                        t28 = (((t48 << 1) + t48) << 2);
                        t30 = (t30 + 0xC3BB9E0);
                        t28 = (t28 + 0xC3BB9E0);
                        *(float *)(((int)stk + 64)) = u60;
                        u63 = ((*(float *)((t30 + 0x0))) * u35);
                        u63 = u63 + u34 * (*(float *)((t28 + 0x0)));
                        *(float *)(((int)stk + 44)) = u63;
                        u66 = (((((struct o4_float *)(t30))->v)) * u35);
                        u66 = u66 + u34 * ((((struct o4_float *)(t28))->v));
                        *(float *)(((int)stk + 48)) = u66;
                        u69 = (((((struct o8_float *)(t30))->v)) * u35);
                        u69 = u69 + u34 * ((((struct o8_float *)(t28))->v));
                        *(float *)(((int)stk + 52)) = u69;
                        t85 = t28;
                        t86 = t30;
                    }
                }
                t28 = t85;
                t30 = t86;
                t30 = ((int)stk + 0);
                t28 = ((int)stk + 0);
                t30 = (t30 + 0x20);
                t28 = (t28 + 0x38);
                nlCalcPoint(t28, t30);
                t30 = ((int)stk + 0);
                t28 = ((int)stk + 0);
                t30 = (t30 + 0x14);
                t28 = (t28 + 0x2C);
                nlCalcVector(t28, t30);
                t28 = ((int)stk + 0);
                t28 = (t28 + 0x14);
                FUN_0c17c450(t28);
                t28 = (*(int *)(((int)stk + 0)));
                *(volatile int *)((a5 + 0x8));
                t28 = (t28 << 2);
                t99 = ((int (*)(int))(FUN_0c187798))(t28);
                *(volatile int *)((a5 + 0x8));
                t28 = t101;
                t102 = ((int (*)(int))(FUN_0c187798))(t28);
                t103 = *(int *)((a5 + 0x8));
                t31 = (t31 + 0x1);
                t30 = 0x1;
                t28 = t104;
                *(unsigned int *)((t28 + t103)) = ((*(int *)((t104 + t103))) | t30);
                if ((int)t31 < (int)t26) continue;
                break;
            }
            t106 = t103;
        }
        t112 = t106;
    }
    return t112;
}

int FUN_0c02fb24(int a4, int a5, int a6)
{
    int stk[18];
    register int t119;
    register int t3;
    register int t5;
    register int t6;
    register int t7;
    register int t10;
    register int t14;
    register int t15;
    register int t26;
    register int t28;
    register int t29;
    register int t112;
    register int t32;
    register int t34;
    register int t35;
    register int t36;
    register int t37;
    register float u38;
    register float u39;
    register int t42;
    register int t43;
    register int t46;
    register int t47;
    register int t50;
    register int t51;
    register int t54;
    register int t55;
    register int t56;
    register int t58;
    register float u62;
    register float u65;
    register float u68;
    register float u71;
    register float u74;
    register float u77;
    register int t105;
    register int t108;
    register int t109;
    register int t8;
    register int t9;
    register int t30;
    register int t31;
    register int t33;
    register int t91;
    register int t93;
    register int t94;
    register int t107;

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 12)) = (*(signed char *)((a4 + 0x371A)));
    t6 = *(signed char *)(((*(int *)(((int)stk + 4))) + 0xA8));
    t119 = 0xA8;
    if (t6 == 0) {
    } else {
        t3 = *(int *)((a5 + 0xC));
        *(unsigned int *)(((int)stk + 0)) = 0xC3BB9E0;
        *(unsigned int *)(((int)stk + 16)) = (*(int *)((t3 + 0x0)));
        *(unsigned int *)(((int)stk + 8)) = 0x0;
        t5 = 0xA8;
        t7 = 0xC3BB3E0;
        t10 = (t3 + 0x4);
        for (;;) {
            if ((int)(*(int *)(((int)stk + 8))) >= (int)(*(int *)(((int)stk + 16)))) {
                break;
            }
            t8 = *(int *)((t10 + 0x0));
            t10 = (t10 + 0x4);
            t14 = *(int *)((t10 + 0x0));
            t10 = (t10 + 0x4);
            t15 = *(int *)((t10 + 0x0));
            t10 = (t10 + 0x4);
            *(unsigned int *)(((int)stk + 20)) = t15;
            t5 = (FUN_0c02fa8a((*(int *)(((int)stk + 4))), (*(int *)(((int)stk + 12))), t14, t15));
            t6 = 0xC17B1A0;
            t5 = (((int (*)(int))(FUN_0c17b1a0))(t5));
            t9 = 0x0;
            if ((int)t8 > 0) {
                for (;;) {
                    t6 = 0xC17A870;
                    t5 = (nlCalcPoint(t10, t7));
                    t5 = (nlCalcVector((t10 + 0xC), (*(int *)(((int)stk + 0)))));
                    t6 = (*(int *)(((int)stk + 0)));
                    t9 = (t9 + 0x1);
                    t7 = (t7 + 0xC);
                    t6 = (t6 + 0xC);
                    t10 = (t10 + 0x18);
                    *(unsigned int *)(((int)stk + 0)) = t6;
                    if ((int)t9 >= (int)t8) {
                        break;
                    }
                }
            }
            t6 = (*(int *)(((int)stk + 8)));
            t6 = (t6 + 0x1);
            *(unsigned int *)(((int)stk + 8)) = t6;
        }
        t26 = ((int (*)(int, int, int))(FUN_0c17b1a0))((a5 + 0x28), a5, a6);
        t28 = *(int *)((a5 + 0x10));
        t29 = *(int *)((t28 + 0x0));
        t112 = (nlInvertMatrix(0x0));
        if ((int)t29 > 0) {
            t32 = t31;
            t34 = t33;
            t35 = 0x0;
            t36 = (t28 + 0x4);
            for (;;) {
                t37 = *(int *)((t36 + 0x0));
                t36 = (t36 + 0x4);
                u38 = *(float *)((t36 + 0x0));
                t36 = (t36 + 0x4);
                u39 = *(float *)((t36 + 0x0));
                t36 = (t36 + 0x4);
                if (u38 == 0.0f) {
                    t36 = (t36 + 0x4);
                    t30 = (*(int *)((t36 + 0x0)));
                    t42 = t30;
                    t30 = (t30 << 1);
                    t30 = (t30 + t42);
                    t30 = (t30 << 2);
                    t30 = (t30 + 0xC3BB3E0);
                    t43 = ((int (*)(int, int))(FUN_0c187798))(t32, t34);
                    t30 = (*(int *)((t36 + 0x0)));
                    t46 = t30;
                    t30 = (t30 << 1);
                    t30 = (t30 + t46);
                    t30 = (t30 << 2);
                    t30 = (t30 + 0xC3BB9E0);
                    t47 = ((int (*)(void))(FUN_0c187798))();
                    t36 = (t36 + 0x4);
                } else {
                    if (u39 == 0.0f) {
                        t30 = (*(int *)((t36 + 0x0)));
                        t50 = t30;
                        t30 = (t30 << 1);
                        t30 = (t30 + t50);
                        t30 = (t30 << 2);
                        t30 = (t30 + 0xC3BB3E0);
                        t51 = ((int (*)(int, int))(FUN_0c187798))(t32, t34);
                        t30 = *(int *)((t36 + 0x0));
                        t36 = (t36 + 0x4);
                        t54 = t30;
                        t30 = (t30 << 1);
                        t30 = (t30 + t54);
                        t30 = (t30 << 2);
                        t30 = (t30 + 0xC3BB9E0);
                        t55 = ((int (*)(void))(FUN_0c187798))();
                        t36 = (t36 + 0x4);
                    } else {
                        t56 = *(int *)((t36 + 0x0));
                        t36 = (t36 + 0x4);
                        t58 = *(int *)((t36 + 0x0));
                        t36 = (t36 + 0x4);
                        t32 = (((t56 << 1) + t56) << 2);
                        t34 = (((t58 << 1) + t58) << 2);
                        t34 = (t34 + 0xC3BB3E0);
                        t32 = (t32 + 0xC3BB3E0);
                        u62 = ((*(float *)((t34 + 0x0))) * u39);
                        u62 = u62 + u38 * (*(float *)((t32 + 0x0)));
                        *(float *)(((int)stk + 60)) = u62;
                        u65 = (((((struct o4_float *)(t34))->v)) * u39);
                        u65 = u65 + u38 * ((((struct o4_float *)(t32))->v));
                        *(float *)(((int)stk + 64)) = u65;
                        u68 = (((((struct o8_float *)(t34))->v)) * u39);
                        u68 = u68 + u38 * ((((struct o8_float *)(t32))->v));
                        t32 = (((t58 << 1) + t58) << 2);
                        t34 = (((t56 << 1) + t56) << 2);
                        t32 = (t32 + 0xC3BB9E0);
                        t34 = (t34 + 0xC3BB9E0);
                        *(float *)(((int)stk + 68)) = u68;
                        u71 = ((*(float *)((t32 + 0x0))) * u39);
                        u71 = u71 + u38 * (*(float *)((t34 + 0x0)));
                        *(float *)(((int)stk + 48)) = u71;
                        u74 = (((((struct o4_float *)(t32))->v)) * u39);
                        u74 = u74 + u38 * ((((struct o4_float *)(t34))->v));
                        *(float *)(((int)stk + 52)) = u74;
                        u77 = (((((struct o8_float *)(t32))->v)) * u39);
                        u77 = u77 + u38 * ((((struct o8_float *)(t34))->v));
                        *(float *)(((int)stk + 56)) = u77;
                        t91 = t30;
                        t93 = t32;
                        t94 = t34;
                    }
                }
                t30 = t91;
                t32 = t93;
                t34 = t94;
                t34 = ((int)stk + 0);
                t32 = ((int)stk + 0);
                t34 = (t34 + 0x24);
                t32 = (t32 + 0x3C);
                nlCalcPoint(t32, t34);
                t30 = 0xC17A8D0;
                t34 = ((int)stk + 0);
                t32 = ((int)stk + 0);
                t34 = (t34 + 0x18);
                t32 = (t32 + 0x30);
                nlCalcVector(t32, t34);
                *(volatile int *)((a5 + 0x8));
                t32 = t37;
                t30 = ((int)stk + 0);
                t32 = (t32 << 2);
                t30 = (t30 + 0x24);
                t105 = ((int (*)(int))(FUN_0c187798))(t32);
                *(volatile int *)((a5 + 0x8));
                t30 = ((int)stk + 0);
                t30 = (t30 + 0x18);
                t32 = t107;
                t108 = ((int (*)(int))(FUN_0c187798))(t32);
                t109 = *(int *)((a5 + 0x8));
                t35 = (t35 + 0x1);
                t34 = 0x1;
                t30 = (*(int *)((t32 + t109)));
                t30 = (t30 | t34);
                *(unsigned int *)((t32 + t109)) = t30;
                if ((int)t35 < (int)t29) continue;
                break;
            }
            t112 = t109;
        }
        t119 = t112;
    }
    return t119;
}

int FUN_0c082aa4(int a4, int a5)
{
    int stk[4];
    register int t25;
    register int t38;
    register int t69;
    int t8;
    int t26;

    *(unsigned char *)(((int)stk + 12)) = a5;
    (((struct o3715_uchar *)(a4))->v) = 0xF;
    FUN_0c067734(a4);
    *(unsigned short *)((a4 + 0x1C)) = 0x1E;
    *(unsigned short *)((a4 + 0x1E)) = 0x0;
    (((struct o22_ushort *)(a4))->v) = 0x0;
    (((struct o3747_uchar *)(a4))->v) = 0x4;
    (((struct o37A4_float *)(a4))->v) = 0.0f;
    (((struct o382E_ushort *)(a4))->v) = 0x0;
    (((struct o374A_uchar *)(a4))->v) = 0x1;
    (((struct o5C_float *)(a4))->v) = 0.0f;
    (((struct o60_float *)(a4))->v) = 0.0f;
    (((struct o58_float *)(a4))->v) = 0.0f;
    (((struct o50_float *)(a4))->v) = 0.0f;
    (((struct o54_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    if ((*(signed char *)((a4 + 0x371D))) == 2) {
        (((struct o16_uchar *)(a4))->v) = 0x2;
        *(int *)((int)stk + 8) = 0x5A;
        *(int *)((int)stk + 4) = 0x4;
        *(int *)((int)stk + 0) = 0xFFFFFFFF;
        t69 = (FUN_0c07e79c(a4, 0xFFFFFFFF, 0x4, 0x5A, 0xFFFFFFFF, 0x4, 0x5A));
    } else {
        if ((((((struct o37BC_float *)(a4))->v)) == 0.0f) && (t8 = *(signed char *)((a4 + 0x3742)), t8 == 0)) {
            if ((*(signed char *)((a4 + 0x372C))) == 1) {
                *(volatile signed char *)((a4 + 0x2));
                *(int *)((int)stk + 8) = 0x38;
                *(int *)((int)stk + 4) = 0x4;
                *(int *)((int)stk + 0) = 0xFFFFFFFF;
                FUN_0c07e79c(a4, 0xFFFFFFFF, 0x4, 0x38, 0xFFFFFFFF, 0x4, 0x38);
            } else {
                *(volatile signed char *)((a4 + 0x2));
                *(int *)((int)stk + 8) = 0x37;
                *(int *)((int)stk + 4) = 0x4;
                *(int *)((int)stk + 0) = 0xFFFFFFFF;
                FUN_0c07e79c(a4, 0xFFFFFFFF, 0x4, 0x37, 0xFFFFFFFF, 0x4, 0x37);
            }
            (((struct o20_ushort *)(a4))->v) = 0x0;
        } else {
            if ((*(signed char *)((a4 + 0x3742))) != 0) {
                (((struct o37BC_float *)(a4))->v) = (*(float *)((0xC25AFA8 + ((*(signed char *)((a4 + 0x2))) << 2))));
            }
            t25 = FUN_0c07ebd0(a4);
            if ((t25 == 0) && (t26 = *(signed char *)(((int)stk + 12)), t26 == 0)) {
                if ((*(signed char *)((a4 + 0x372C))) == 1) {
                    *(volatile signed char *)((a4 + 0x2));
                    *(int *)((int)stk + 8) = 0x38;
                    *(int *)((int)stk + 4) = 0x4;
                    *(int *)((int)stk + 0) = 0xFFFFFFFF;
                    FUN_0c07e79c(a4, 0xFFFFFFFF, 0x4, 0x38, 0xFFFFFFFF, 0x4, 0x38);
                } else {
                    *(volatile signed char *)((a4 + 0x2));
                    *(int *)((int)stk + 8) = 0x37;
                    *(int *)((int)stk + 4) = 0x4;
                    *(int *)((int)stk + 0) = 0xFFFFFFFF;
                    FUN_0c07e79c(a4, 0xFFFFFFFF, 0x4, 0x37, 0xFFFFFFFF, 0x4, 0x37);
                }
                (((struct o20_ushort *)(a4))->v) = 0xA;
            } else {
                *(int *)((int)stk + 8) = 0x39;
                *(int *)((int)stk + 4) = 0x4;
                *(int *)((int)stk + 0) = 0xFFFFFFFF;
                FUN_0c07e79c(a4, 0xFFFFFFFF, 0x4, 0x39, 0xFFFFFFFF, 0x4, 0x39);
                *(unsigned int *)((a4 + 0x38)) = (FUN_0c07d6cc(a4));
                (((struct o16_uchar *)(a4))->v) = 0x1;
                *(unsigned short *)((a4 + 0x1C)) = 0x3C;
                *(unsigned short *)((a4 + 0x1E)) = 0x0;
                (((struct o20_ushort *)(a4))->v) = 0x4;
                t38 = *(signed char *)(((int)stk + 12));
                switch (t38) {
                case 0:
                    *(unsigned int *)((a4 + 0x38)) = ((unsigned short)((*(short *)((0xC5413E8 + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x2F8)))) + (FUN_0c07eaf4(a4))) & 0xFFFF);
                    break;
                case 1:
                    *(unsigned short *)((a4 + 0x1E)) = 0x14;
                    break;
                case 2:
                    *(unsigned short *)((a4 + 0x1E)) = 0x14;
                    *(unsigned int *)((a4 + 0x38)) = (unsigned short)((*(int *)((a4 + 0x38))) + 0x8000);
                    break;
                }
            }
        }
        (((struct o372C_uchar *)(a4))->v) = 0x0;
        t69 = 0x372C;
    }
    return t69;
}



int FUN_0c07434c(int a4, int a5, float f4)
{
    register int t0;
    int t1;
    register int t2;
    int t3;
    int t4;
    int t5;
    register int t6;
    register int t7;
    float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;

    t6 = 0x160;
    if (((((struct o160_float *)(a4))->v)) > 0.0f) {
        u0 = (((struct o160_float *)(a4))->v);
        t7 = *(short *)((((((struct o418_int *)(a4))->v)) + 0x2));
        u1 = (float)t7;
        if ((float)t7 != 0.0f) {
            u1 = (FUN_0c0bb2e0(a4, (*(signed char *)((a4 + 0x373F))), (float)t7));
        }
        u2 = u1;
        if (((*(signed char *)0xC54235E) == 2) && ((t0 = *(signed char *)0xC54223C, t0 == 0) && (t1 = *(signed char *)0xC542363, t2 = *(signed char *)((a4 + 0x373F)), t1 == t2))) {
            u2 = (u1 * 0.600000024f);
        }
        u1 = u2;
        if ((((((struct o383E_short *)(a4))->v)) != 0) && (t3 = *(signed char *)((a4 + 0x3757)), t3 != 0)) {
            u1 = (u2 * 0.5f);
        }
        t0 = *(signed char *)((((((struct o418_int *)(a4))->v)) + 0x13));
        u2 = u1;
        if (((unsigned char)t0 != 0) && (t4 = *(signed char *)((a4 + 0x373F)), t4 != -1)) {
            t1 = FUN_0c0c43c0((((short)(*(signed char *)((a4 + 0x373F))) * (short)0x3938) + 0xC532498), (unsigned char)t0);
            u3 = u1;
            if (t1 != 0) {
                u4 = *(float *)((((unsigned short)(unsigned char)t0 * (unsigned short)0x1C) + 0xC276308));
                u5 = u1;
                if (3.0f > u4) {
                    u5 = (u1 * u4);
                }
                u3 = u5;
            }
            u2 = u3;
        }
        u1 = (((struct o160_float *)(a4))->v);
        (((struct o160_float *)(a4))->v) = (u1 - u2);
        if (!((u1 - u2) > 0.0f)) {
            (((struct o160_float *)(a4))->v) = 0.0f;
            (((struct o383E_ushort *)(a4))->v) = 0x0;
            (((struct o3757_uchar *)(a4))->v) = 0x0;
            if ((((unsigned char)(*(signed char *)((0x12 + ((((struct o418_int *)(a4))->v))))) & 16) == 0) && (t5 = *(signed char *)((a4 + 0x371D)), t5 != 4)) {
                (((struct o160_float *)(a4))->v) = 0.0f;
                if (a5 == 0) {
                    if (((((struct o3840_short *)(a4))->v)) == 0x270F) {
                        (((struct o3840_ushort *)(a4))->v) = 0x4B0;
                        FUN_0c05258e(0x2, 0x14, 0x100, 0x1E, 0x0);
                    }
                } else {
                    (((struct o160_float *)(a4))->v) = 1.0f;
                }
            } else {
                if (((((struct o3840_short *)(a4))->v)) != 0x270F) {
                } else {
                    (((struct o160_float *)(a4))->v) = 1.0f;
                }
            }
            if (!(((((struct o160_float *)(a4))->v)) > 0.0f)) {
                if ((*(signed char *)((a4 + 0x373F))) != -1) {
                    FUN_0c07c4b0((*(signed char *)((a4 + 0x373F))), 0x5);
                    FUN_0c0bb67c((((short)(*(signed char *)((a4 + 0x373F))) * (short)0x3938) + 0xC532498));
                }
                FUN_0c0bb6cc(a4);
            }
        } else {
            FUN_0c07340e(a4);
        }
        (((struct o37BC_float *)(a4))->v) = (((((struct o37BC_float *)(a4))->v)) - (float)(unsigned char)(*(signed char *)((((((struct o418_int *)(a4))->v)) + 0x9))));
        if (0.0f > ((((struct o37BC_float *)(a4))->v))) {
            (((struct o37BC_float *)(a4))->v) = 0.0f;
        }
        (((struct o3741_uchar *)(a4))->v) = ((*(signed char *)((((((struct o418_int *)(a4))->v)) + 0xE))) & 0x7);
        (((struct o3838_ushort *)(a4))->v) = 0x5A;
        if ((((((struct o160_float *)(a4))->v)) == 0.0f) && (u0 != 0.0f)) {
            FUN_0c059e60(a4, 0x11);
        }
        t6 = 0x0;
    }
    return t6;
}

int FUN_0c09e38c(int a4, int a5, int a6, int a7)
{
    register int t4;
    int t1;

    if (((int)(*(signed char *)((a4 + 0x16))) < (int)0x2) && (t1 = (((struct o3770_int *)(a4))->v), t1 == 0)) {
        return FUN_0c085d0c(a4, a5, a6, a7);
    }
    t4 = *(signed char *)((a4 + 0x16));
    if (t4 != 0) {
        if (t4 != 1) {
            if (t4 != 2) {
                return t4;
            }
            return FUN_0c090e12(a4);
        }
        return ((int (*)(int, int, int, int))(0xC09E2EC))(a4, a5, a6, a7);
    }
    return FUN_0c09e190(a4);
}
