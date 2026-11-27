/* Straight-line functions with calls and guards (batch gen_by): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_int { char p[0x10]; int v; };
struct o118_int { char p[0x118]; int v; };
struct o11C_int { char p[0x11C]; int v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o36_short { char p[0x36]; short v; };
struct o376C_uint { char p[0x376C]; unsigned int v; };
struct o3850_short { char p[0x3850]; short v; };
struct o3850_uint { char p[0x3850]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o7C_int { char p[0x7C]; int v; };
struct o8_int { char p[0x8]; int v; };
struct o8C_float { char p[0x8C]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
int FUN_0c03247c(void);
int FUN_0c032788(void);
int FUN_0c0329e0(void);
extern int FUN_0c037bf6();
int FUN_0c041c7e(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c041e06(void);
int FUN_0c041e4c(void);
int FUN_0c05258e(int, int, int, int, int);
int FUN_0c059c54(int);
int FUN_0c059e60(int, int);
int FUN_0c059e9a(int, int, int);
int FUN_0c05aaf6(int);
int FUN_0c05aeac(void);
int FUN_0c05b00c(void);
int FUN_0c05b048(int, int);
int FUN_0c05f22c(int);
int FUN_0c07d030(int, int);
int FUN_0c07d774(int);
extern int FUN_0c085d0c();
int FUN_0c0a3058(int, int, int, int);
int FUN_0c0a30dc(int);
int FUN_0c0c2d56(int, int, int, int);
int FUN_0c0c41c4(void);
int FUN_0c0d5188(void);
int FUN_0c104cc8(int);
int FUN_0c104d70(void);
int FUN_0c104db8(void);
int FUN_0c10527c(int, int, int);
int FUN_0c115120(int);
int FUN_0c117944(int, ...);
int FUN_0c117a6e(int, ...);
int FUN_0c117d54(void);
extern int FUN_0c117e76();
int FUN_0c11e2d0(int, int, int, int);
int FUN_0c13a044(int);
int FUN_0c147fd0(int, int, int, int, float);
int FUN_0c1495c0(int, int, int);
int FUN_0c15009e(int, float, float, float, float, float);
int FUN_0c162c4e(int, int, int, int);
float math_cos_angle16(int);
int math_mat_get_translate(int, int);
int math_mat_transform_vector(int, int);
float math_sin_angle16(int);
int nlAddVector3op(int, int, int);
int nlSubVector3op(int, int, int);
int thunk_FUN_0c05abb2(int, int);
float FUN_0c14996e(int a4, int a5, int a6, int a7, float f4, float f5, float f6);
int FUN_0c0d192c(int a4, int a5, int a6, int a7, float f4);
int FUN_0c041f28(void);
int FUN_0c0a5588(int a4, int a5, int a6);
int FUN_0c109df4(int a4, int a5, int a6, int a7);
int FUN_0c107a38(int a4, int a5, int a6, int a7);
struct o1C_short { char p[0x1C]; short v; };
struct o1C_ushort { char p[0x1C]; unsigned short v; };
struct o3714_uchar { char p[0x3714]; unsigned char v; };


float FUN_0c14996e(int a4, int a5, int a6, int a7, float f4, float f5, float f6)
{
    int v0_0;
    int stk[11];

    int v0_1;
    int v0_3;
    int v0_2;
    int v0_4;
    int v0_6;
    float w0_1;
    int v0_7;
    float w0_4;
    float w0_2;
    float w0_0;
    int FPUL_;
    int T_;
    float F15;
    float F3;
    float F2;
    int R2;
    int R1;
    float F0;
    float w0_3;
    int qe0;
    int v0_5;
    v0_2 = a4;
    v0_0 = a6;
    v0_0 = a7;
    w0_1 = f4;
    w0_0 = f5;
    w0_0 = f6;
    v0_0 = *(signed char *)0xC542363;
    v0_5 = *(signed char *)(v0_2 + 0x16);
    v0_3 = (v0_5);
    v0_1 = (0xC058310);
    v0_6 = ((0x38F8 + (((short)v0_0 * (short)0x3938) + 0xC532498)));
    v0_4 = (0x480);
    v0_1 = ((((short)v0_0 * (short)0x3938) + 0xC532498));
    v0_0 = (v0_2);
    if ((v0_5 == 0)) goto L_C1499D8;
    if ((v0_3 == 1)) goto L_C149A1A;
    if ((v0_3 == 2)) goto L_C149A86;
    if ((v0_3 != 3)) goto L_C1499AE;
    L_C149B9C:;
    v0_1 = (((struct o1C_short *)(v0_0))->v);
    (((struct o1C_ushort *)(v0_0))->v) = (v0_1 - 1);
    v0_3 = ((short)(v0_1 - 1));
    if (((int)(short)(v0_1 - 1) > 0)) goto L_C149BEE;
    (((struct o1C_ushort *)(v0_0))->v) = 0x78;
    (((struct o16_uchar *)(v0_0))->v) = ((*(signed char *)(v0_0 + 0x16)) + 0x1);
    v0_3 = (0x16);
    L_C149BEE:;
    return F0;
    L_C1499AE:;
    if ((v0_3 != 4)) goto L_C1499B6;
    if (((int)(*(signed char *)(v0_6 + 0x35)) < 0)) goto L_C149BCC;
    v0_2 = (((((struct o7C_int *)((v0_4 + (0x468 + v0_1))))->v)) + 0x5B);
    v0_3 = (0x7C);
    v0_4 = ((v0_4 + (0x468 + v0_1)));
    v0_1 = v0_2;
    L_C149BD8:;
    *(unsigned int *)((v0_4 + v0_3)) = v0_1;
    v0_1 = (((struct o1C_short *)(v0_0))->v);
    (((struct o1C_ushort *)(v0_0))->v) = (v0_1 - 1);
    v0_3 = ((short)(v0_1 - 1));
    if (((int)(short)(v0_1 - 1) > 0)) goto L_C149BEE;
    v0_3 = ((FUN_0c1495c0(v0_0, 0x3, 0x0)));
    goto L_C149BEE;
    L_C149BCC:;
    v0_2 = (((((struct o7C_int *)((v0_4 + (0x468 + v0_1))))->v)) - 91);
    v0_3 = (0x7C);
    v0_4 = ((v0_4 + (0x468 + v0_1)));
    v0_1 = v0_2;
    goto L_C149BD8;
    L_C1499B6:;
    goto L_C149BEE;
    L_C149A86:;
    if (((*(signed char *)(v0_0 + 0x17)) != 0)) goto L_C149A92;
    v0_3 = (0x17);
    L_C149B96:;
    *(unsigned char *)((v0_0 + v0_3)) = ((*(signed char *)((v0_0 + v0_3))) + 0x1);
    goto L_C149B9C;
    L_C149A92:;
    *(float *)(((int)stk + 20)) = 0.0f;
    *(float *)(((int)stk + 24)) = 0.0f;
    *(float *)(((int)stk + 28)) = (-((float)((((struct o36_short *)(v0_6))->v)) * 1.0f));
    math_mat_get_translate((v0_0 + 0x64), (((int)stk + 0) + 0x8));
    math_mat_transform_vector((((int)stk + 0) + 0x14), (v0_0 + 0x64));
    *(float *)(((int)stk + 24)) = 0.0f;
    nlSubVector3op((((int)stk + 0) + 0x20), (((int)stk + 0) + 0x14), (((int)stk + 0) + 0x8));
    if (((int)(*(signed char *)(v0_6 + 0x35)) < 0)) goto L_C149B0C;
    w0_1 = (60.0f);
    L_C149B10:;
    w0_2 = (((struct o4_float *)0xC149C1C)->v);
    w0_0 = math_sin_angle16((int)(w0_1 * w0_2));
    w0_1 = math_cos_angle16((int)(w0_1 * w0_2));
    w0_2 = *(float *)(((int)stk + 32));
    w0_4 = *(float *)(((int)stk + 40));
    w0_3 = (w0_4 * w0_0);
    w0_4 = (w0_4 * w0_1);
    w0_4 = w0_4 + w0_0 * w0_2;
    *(float *)(((int)stk + 32)) = (((w0_2 * w0_1)) - w0_3);
    *(float *)(((int)stk + 40)) = w0_4;
    nlAddVector3op((((int)stk + 0) + 0x20), (((int)stk + 0) + 0x20), (((int)stk + 0) + 0x8));
    v0_2 = *(signed char *)0xC542363;
    *(unsigned char *)(((int)stk + 4)) = v0_2;
    FUN_0c147fd0((*(signed char *)(((int)stk + 4))), v0_2, (((int)stk + 0) + 0x20), (((int)stk + 0) + 0x14), (1.0f + 1.0f));
    math_mat_get_translate((v0_0 + 0x64), (((int)stk + 0) + 0x8));
    FUN_0c059e9a(v0_1, 0x2A, (((int)stk + 0) + 0x20));
    (((struct o1C_ushort *)(v0_0))->v) = 0x3C;
    v0_3 = (0x16);
    goto L_C149B96;
    L_C149B0C:;
    w0_1 = (((((struct o0_float *)0xC149C1C)->v)));
    goto L_C149B10;
    L_C149A1A:;
    v0_5 = *(signed char *)(v0_6 + 0x35);
    v0_6 = (((struct o7C_int *)(((0x468 + v0_1) + v0_4)))->v);
    v0_3 = (0x7C);
    v0_2 = (((v0_5 << 8) - v0_6));
    v0_7 = (0x10000);
    if (((int)((v0_5 << 8) - v0_6) <= (int)0x8000)) goto L_C149A36;
    v0_2 = ((v0_2 - v0_7));
    L_C149A36:;
    if (((int)v0_2 >= (int)0xFFFF8000)) goto L_C149A3E;
    v0_2 = ((v0_2 + v0_7));
    L_C149A3E:;
    v0_7 = (0x38E);
    if (((int)v0_2 < 0)) goto L_C149A56;
    if (((int)v0_2 < (int)v0_7)) goto L_C149A6A;
    *(unsigned int *)(((v0_4 + (0x468 + v0_1)) + v0_3)) = ((*(int *)(((v0_4 + (0x468 + v0_1)) + v0_3))) + v0_7);
    goto L_C149BEE;
    L_C149A6A:;
    *(unsigned int *)(((v0_4 + (0x468 + v0_1)) + v0_3)) = ((*(int *)(((v0_4 + (0x468 + v0_1)) + v0_3))) + v0_2);
    (((struct o16_uchar *)(v0_0))->v) = ((*(signed char *)(v0_0 + 0x16)) + 0x1);
    (((struct o17_uchar *)(v0_0))->v) = 0x0;
    v0_3 = (0x17);
    goto L_C149BEE;
    L_C149A56:;
    if (((int)v0_2 > (int)0xFFFFFC72)) goto L_C149A6A;
    *(unsigned int *)(((v0_4 + (0x468 + v0_1)) + v0_3)) = ((*(int *)(((v0_4 + (0x468 + v0_1)) + v0_3))) - v0_7);
    goto L_C149BEE;
    L_C1499D8:;
    (((struct o1C_ushort *)(v0_0))->v) = 0x14;
    (((struct o16_uchar *)(v0_0))->v) = ((*(signed char *)(v0_0 + 0x16)) + 0x1);
    math_mat_get_translate((v0_0 + 0x64), (((int)stk + 0) + 0x20));
    FUN_0c059e9a(v0_1, 0x6, (((int)stk + 0) + 0x20));
    v0_3 = (0x7C);
    if (((((((struct o7C_int *)(((0x468 + v0_1) + v0_4)))->v)) & 0x8000) == 0)) goto L_C149A1A;
    qe0 = ((((0x468 + v0_1) + v0_4) + v0_3));
    *(unsigned int *)qe0 = ((*(int *)qe0) | 0xFFFF0000);
    goto L_C149A1A;
}


int FUN_0c041f28(void)
{
    int qa0;
    int t36;
    int t71;
    int qa1;
    int t37;
    int t72;
    int t27;
    int s32;
    int s28;
    int s24;
    int s20;
    int s16;
    int s12;
    int s8;
    int s4;
    int s0;
    int t67;
    int t32;
    int t14;
    int t7;
    int t70;
    int t69;
    int t35;
    int t34;
    int t17;
    int t121;

    qa1 = 0xC542239;
    qa0 = 0xC3BD447;
    t121 = 0xC5421FB;
    if ((*(signed char *)0xC5421FB) != 0) {
    } else {
        (((struct o1_uchar *)0xC5421FA)->v) = ((*(signed char *)0xC5421FB) + 0x1);
        FUN_0c041e06();
        FUN_0c05aeac();
        FUN_0c05b00c();
        FUN_0c05b048(0x1, 0x0);
        if (((*(signed char *)0xC54235E) == 1) && (t7 = *(signed char *)qa0, t7 == 0)) {
            FUN_0c059c54(0x11);
        } else {
            t17 = 0x7;
            if (((*(signed char *)0xC54235E) == 2) && (t14 = *(signed char *)qa0, t14 == 0)) {
                t17 = 0x10;
            }
            FUN_0c059c54(t17);
        }
        if (((*(signed char *)qa1) & 0xF0) == 16) {
            *(unsigned int *)0xC542208 = 0xF0;
        } else {
            *(unsigned int *)0xC542208 = 0xF0;
            if (((*(signed char *)qa1) & 0xF) == 0) {
                FUN_0c041e4c();
                FUN_0c0c41c4();
                FUN_0c03247c();
                FUN_0c05aaf6(0x85);
            } else {
                FUN_0c041e4c();
                t27 = *(signed char *)qa1;
                if (((t27 & 0xF0) != 0) && ((t27 & 0xF0) != 32)) {
                    if (((t27 & 0xF0) == 48) || ((t27 & 0xF0) == 64)) {
                        FUN_0c0329e0();
                        if ((*(signed char *)qa0) != 0) {
                            t34 = FUN_0c0d5188();
                            if ((t34 != 0) && (t32 = *(signed char *)0xC30541F, t32 == 0)) {
                                t36 = *(signed char *)0xC40DC50;
                                *(unsigned char *)qa0 = t36;
                                t35 = 0xC40DC50;
                                t37 = 0x0;
                                for (;;) {
                                    if ((int)t37 >= (int)0x4) {
                                        break;
                                    }
                                    t36 = (*(signed char *)qa0);
                                    t35 = ((int)0x1 << (int)t37);
                                    t36 = (unsigned char)t36;
                                    if ((t35 & t36) != 0) {
                                        t34 = 0x3714;
                                        t36 = (t37 * 0x3938);
                                        t36 = (t36 + 0xC532498);
                                        (((struct o3714_uchar *)(t36))->v) = 0x1;
                                    }
                                    t37 = (t37 + 0x1);
                                }
                                *(unsigned char *)qa1 = ((*(signed char *)qa1) | (*(signed char *)qa0));
                            }
                            FUN_0c05aaf6(0x87);
                        } else {
                            if ((*(signed char *)0xC54235E) != 0) {
                                FUN_0c059e60((((short)(*(signed char *)0xC542363) * (short)0x3938) + 0xC532498), 0x1F);
                                if ((*(signed char *)0xC54235E) == 2) {
                                    *(unsigned int *)0xC542208 = 0x1A4;
                                }
                            } else {
                                FUN_0c05aaf6(0x87);
                            }
                        }
                        FUN_0c0c41c4();
                    }
                } else {
                    FUN_0c032788();
                    if ((*(signed char *)qa0) != 0) {
                        t69 = FUN_0c0d5188();
                        if ((t69 != 0) && (t67 = *(signed char *)0xC30541F, t67 == 0)) {
                            t71 = *(signed char *)0xC40DC50;
                            *(unsigned char *)qa0 = t71;
                            t70 = 0xC40DC50;
                            t72 = 0x0;
                            for (;;) {
                                if ((int)t72 >= (int)0x4) {
                                    break;
                                }
                                t71 = (*(signed char *)qa0);
                                t70 = ((int)0x1 << (int)t72);
                                t71 = (unsigned char)t71;
                                if ((t70 & t71) != 0) {
                                    t69 = 0x3714;
                                    t71 = (t72 * 0x3938);
                                    t71 = (t71 + 0xC532498);
                                    (((struct o3714_uchar *)(t71))->v) = 0x1;
                                }
                                t72 = (t72 + 0x1);
                            }
                            *(unsigned char *)qa1 = ((*(signed char *)qa1) | (*(signed char *)qa0));
                        }
                        FUN_0c05aaf6(0x86);
                    } else {
                        if ((*(signed char *)0xC54235E) != 0) {
                            FUN_0c059e60((((short)(*(signed char *)0xC542363) * (short)0x3938) + 0xC532498), 0x1F);
                            if ((*(signed char *)0xC54235E) == 2) {
                                *(unsigned int *)0xC542208 = 0x1A4;
                            }
                        } else {
                            FUN_0c05aaf6(0x86);
                        }
                    }
                    FUN_0c0c41c4();
                }
            }
        }
        t121 = 0xC542208;
    }
    (((struct o0_uchar *)0xC5421FA)->v) = ((*(signed char *)0xC5421FA) + 0x1);
    (((struct o1_uchar *)0xC5421FA)->v) = 0x0;
    FUN_0c041c7e(t121, 0x0, 0x0, 0x0, s4, s8, s12, s16, s20, s24, s28, s32);
    s0 = 0x0;
    return (FUN_0c05258e(0x63, 0xA, 0x100, 0x1, 0x0));
}


int FUN_0c109df4(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    register int t2;
    register int t3;

    t3 = *(signed char *)((a4 + 0x17));
    if (t3 != 0) {
        if (t3 != 1) {
            return t3;
        }
        t3 = FUN_0c104cc8(0x2008);
        if ((t3 != 0) && (t0 = *(int *)0xC474404, t0 == 0)) {
        } else {
            t0 = FUN_0c104cc8(0x1004);
            if ((t0 != 0) && (t1 = (((struct o0_int *)0xC474714)->v), t2 = *(int *)0xC474404, t2 == (t1 - 1))) {
            } else {
                *(unsigned int *)0xC474404 = (FUN_0c10527c((*(int *)0xC474404), 0x0, (((((struct o0_int *)0xC474714)->v)) - 1)));
                t0 = FUN_0c104cc8(0x300F);
                if (t0 != 0) {
                    if ((int)(*(int *)((0xC474104 + ((*(int *)((0xC474410 + ((*(int *)0xC474404) << 2)))) << 2)))) > 0) {
                        t0 = *(int *)(((((*(int *)0xC474404) << 2) + 0xC474410) + 0x0));
                        FUN_0c117a6e(0x58, ((*(int *)((0xC474104 + (t0 << 2))))), ((*(int *)(((t0 << 2) + 0xC29DDD0)))));
                    } else {
                        FUN_0c117a6e(0x59);
                    }
                }
            }
        }
        t0 = *(int *)0xC474404;
        if (((((struct o22_short *)(a4))->v)) == 0) {
            if ((int)(*(int *)((0xC474104 + ((*(int *)((((t0 << 2) + 0xC474410) + 0x0))) << 2)))) > 0) {
                t1 = *(int *)((((t0 << 2) + 0xC474410) + 0x0));
                FUN_0c117944(0x58, ((*(int *)((((t1 << 2) + 0xC474104) + 0x0)))), ((*(int *)(((t1 << 2) + 0xC29DDD0)))));
            } else {
                FUN_0c117944(0x59);
            }
        } else {
            (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) - 1);
        }
        t0 = FUN_0c104db8();
        if (t0 != 0) {
            return ((int (*)(int, int, int, int))(0xC109CA0))(a4, a5, a6, a7);
        }
        t0 = FUN_0c104d70();
        if (t0 != 0) {
            t1 = *(int *)0xC474404;
            if ((int)(*(int *)((0xC474104 + ((*(int *)((((t1 << 2) + 0xC474410) + 0x0))) << 2)))) >= (int)0x63) {
                FUN_0c117944(0x5C);
                (((struct o22_ushort *)(a4))->v) = 0x78;
                return 0x22;
            }
            if ((int)(*(int *)(((((*(int *)((((t1 << 2) + 0xC474410) + 0x0))) << 2) << 1) + 0xC29D7D4))) > (int)((((struct o8_int *)0xC474714)->v))) {
                FUN_0c117944(0x5E);
                (((struct o22_ushort *)(a4))->v) = 0x78;
                return 0x22;
            }
            return ((int (*)(int, int, int, int))(0xC109C6A))(a4, a5, a6, a7);
        }
        return t0;
    }
    (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
    (((struct o22_ushort *)(a4))->v) = 0x0;
    if ((int)(*(int *)((0xC474104 + ((*(int *)((0xC474410 + ((*(int *)0xC474404) << 2)))) << 2)))) > 0) {
        t0 = *(int *)((0xC474410 + ((*(int *)0xC474404) << 2)));
        t1 = (FUN_0c117a6e(0x58, ((*(int *)((((t0 << 2) + 0xC474104) + 0x0)))), ((*(int *)(((t0 << 2) + 0xC29DDD0))))));
    } else {
        t1 = (FUN_0c117944(0x59));
    }
    return t1;
}

