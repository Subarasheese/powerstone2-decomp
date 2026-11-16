/* Straight-line functions with calls and guards (batch gen_dq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o14_float { char p[0x14]; float v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o18_int { char p[0x18]; int v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o24_int { char p[0x24]; int v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o34_float { char p[0x34]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o426_short { char p[0x426]; short v; };
struct o426_ushort { char p[0x426]; unsigned short v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oA4_int { char p[0xA4]; int v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAA_uchar { char p[0xAA]; unsigned char v; };
struct oAB_uchar { char p[0xAB]; unsigned char v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oEC_int { char p[0xEC]; int v; };
int FUN_0c0582ac(int, int);
int FUN_0c059df2(int, int);
int FUN_0c05aae4(int, int);
int FUN_0c07d2c4(int, int);
int FUN_0c07dbd8(int, int);
int FUN_0c07e328(int, int);
int FUN_0c0c2ab6(int, int);
int FUN_0c0c2ce4(int);
int FUN_0c0c2d56(int, int, int);
int FUN_0c0c3e3a(int, int, int);
int FUN_0c0c7f4c(int);
int FUN_0c0c8c90(int);
int FUN_0c0c8d00(int, int, int, int, int, int);
int FUN_0c0c8e8c(int);
int FUN_0c0c8f2e(int);
int FUN_0c0c8f70(int, int, int);
int FUN_0c1614c8(int, int);
int FUN_0c1632e0(int, int, int, float);
int FUN_0c17b4b0(int);
int FUN_0c17e740(float, float, float);
extern int FUN_0c18778c();
int FUN_0c187798(void);
int math_mat_get_translate(int, int);
int nlObjPut(int);
int nlObjPutTrnsl(int, float);
int nlUnitMatrix(void);
int FUN_0c057402(float f4, float f5);
int FUN_0c0c8fd4(int a4, int a5, int a6);

int FUN_0c057402(float f4, float f5)
{
    register int t1;
    register int t2;
    int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register float u0;
    register float u1;
    register float u2;

    FUN_0c17b4b0(0x1);
    nlUnitMatrix();
    t4 = 0x1F;
    if ((*(signed char *)0xC54244F) == 0) {
    } else {
        t5 = *(signed char *)0xC54244E;
        t6 = *(signed char *)0xC54244C;
        if (t6 != 0) {
            if (t6 == 1) {
                if ((*(signed char *)0xC54244D) == 0) {
                    u0 = ((float)(*(signed char *)0xC54244F) / (float)(signed char)t5);
                } else {
                    u1 = ((float)((*(signed char *)0xC54244F) - 1) / (float)(signed char)t5);
                    u1 = -u1;
                    u0 = (u1 + 1.0f);
                }
                (((struct oC_float *)0xC40FA58)->v) = -320.0f;
                (((struct o0_float *)0xC40FA58)->v) = -320.0f;
                (((struct o24_float *)0xC40FA58)->v) = 320.0f;
                (((struct o18_float *)0xC40FA58)->v) = 320.0f;
                (((struct o2C_float *)0xC40FA58)->v) = -100.0f;
                (((struct o20_float *)0xC40FA58)->v) = -100.0f;
                (((struct o14_float *)0xC40FA58)->v) = -100.0f;
                (((struct o8_float *)0xC40FA58)->v) = -100.0f;
                (((struct o0_uint *)0xC40FA58)->v) = (((((struct o0_int *)0xC40FA58)->v)) | 0x1);
                (((struct oC_uint *)0xC40FA58)->v) = (((((struct oC_int *)0xC40FA58)->v)) | 0x1);
                (((struct o18_uint *)0xC40FA58)->v) = (((((struct o18_int *)0xC40FA58)->v)) | 0x1);
                (((struct o24_uint *)0xC40FA58)->v) = (((((struct o24_int *)0xC40FA58)->v)) | 0x1);
                t7 = *(int *)0xC542450;
                u1 = (float)((unsigned int)(t7 & 0xFF0000) >> 16);
                if ((int)((unsigned int)(t7 & 0xFF0000) >> 16) < 0) {
                    u1 = ((float)((unsigned int)(t7 & 0xFF0000) >> 16) + 4.2949673e+09f);
                }
                (((struct o34_float *)0xC40FA58)->v) = (u1 / 255.0f);
                t7 = *(int *)0xC542450;
                u1 = (float)((unsigned int)(t7 & 0xFF00) >> 8);
                if ((int)((unsigned int)(t7 & 0xFF00) >> 8) < 0) {
                    u1 = ((float)((unsigned int)(t7 & 0xFF00) >> 8) + 4.2949673e+09f);
                }
                (((struct o38_float *)0xC40FA58)->v) = (u1 / 255.0f);
                t7 = *(int *)0xC542450;
                u1 = (float)(unsigned char)t7;
                if ((int)(unsigned char)t7 < 0) {
                    u1 = ((float)(unsigned char)t7 + 4.2949673e+09f);
                }
                (((struct o3C_float *)0xC40FA58)->v) = (u1 / 255.0f);
                t7 = ((int (*)(int, int, int, int, float, float, float, float))(FUN_0c18778c))(0xC40FA88, 0xC40FA64, 0xC40FA70, 0xC40FA58, 255.0f, 640.0f, 320.0f, -320.0f);
                (((struct o0_float *)0xC1BFA34)->v) = f5;
                (((struct o20_float *)0xC1BFA34)->v) = f5;
                FUN_0c17e740(1.0f, 1.0f, 1.0f);
                if (0x1 == 0) {
                } else {
                    u1 = -37.5f;
                    for (;;) {
                        u2 = (u0 * 3.125f);
                        (((struct o1C_float *)0xC40FA58)->v) = u1;
                        (((struct o4_float *)0xC40FA58)->v) = u1;
                        (((struct o28_float *)0xC40FA58)->v) = (u2 + u1);
                        (((struct o10_float *)0xC40FA58)->v) = (u2 + u1);
                        t7 = ((int (*)(void))(FUN_0c187798))();
                        t7 = ((int (*)(void))(FUN_0c187798))();
                        t7 = ((int (*)(void))(FUN_0c187798))();
                        t7 = ((int (*)(void))(FUN_0c187798))();
                        nlObjPut(0xC1BFA20);
                        u1 = (u1 + 3.125f);
                        if (!(37.5f > u1)) {
                            break;
                        }
                    }
                }
            } else {
                if (t6 == 2) {
                    *(volatile signed char *)0xC54244D;
                } else {
                    if (t6 == 3) {
                        if ((*(signed char *)0xC54244D) == 0) {
                            u0 = ((float)(*(signed char *)0xC54244F) / (float)(signed char)t5);
                        } else {
                            u1 = ((float)((*(signed char *)0xC54244F) - 1) / (float)(signed char)t5);
                            u1 = -u1;
                            u0 = (u1 + 1.0f);
                        }
                        (((struct o0_float *)0xC40FA58)->v) = (u0 + -0.5f);
                        (((struct o18_float *)0xC40FA58)->v) = -0.5f;
                        (((struct oC_float *)0xC40FA58)->v) = -0.5f;
                        (((struct o24_float *)0xC40FA58)->v) = -1.0f;
                        (((struct o10_float *)0xC40FA58)->v) = 0.5f;
                        (((struct o4_float *)0xC40FA58)->v) = 0.5f;
                        (((struct o28_float *)0xC40FA58)->v) = -0.5f;
                        (((struct o1C_float *)0xC40FA58)->v) = -0.5f;
                        (((struct o2C_float *)0xC40FA58)->v) = -1.0f;
                        (((struct o20_float *)0xC40FA58)->v) = -1.0f;
                        (((struct o14_float *)0xC40FA58)->v) = -1.0f;
                        (((struct o8_float *)0xC40FA58)->v) = -1.0f;
                        (((struct o0_uint *)0xC40FA58)->v) = (((((struct o0_int *)0xC40FA58)->v)) | 0x1);
                        (((struct oC_uint *)0xC40FA58)->v) = (((((struct oC_int *)0xC40FA58)->v)) | 0x1);
                        (((struct o18_uint *)0xC40FA58)->v) = (((((struct o18_int *)0xC40FA58)->v)) | 0x1);
                        (((struct o24_uint *)0xC40FA58)->v) = (((((struct o24_int *)0xC40FA58)->v)) | 0x1);
                        t6 = *(int *)0xC542450;
                        u1 = (float)((unsigned int)(t6 & 0xFF0000) >> 16);
                        if ((int)((unsigned int)(t6 & 0xFF0000) >> 16) < 0) {
                            u1 = ((float)((unsigned int)(t6 & 0xFF0000) >> 16) + 4.2949673e+09f);
                        }
                        (((struct o34_float *)0xC40FA58)->v) = (u1 / 255.0f);
                        t6 = *(int *)0xC542450;
                        u1 = (float)((unsigned int)(t6 & 0xFF00) >> 8);
                        if ((int)((unsigned int)(t6 & 0xFF00) >> 8) < 0) {
                            u1 = ((float)((unsigned int)(t6 & 0xFF00) >> 8) + 4.2949673e+09f);
                        }
                        (((struct o38_float *)0xC40FA58)->v) = (u1 / 255.0f);
                        t6 = *(int *)0xC542450;
                        u1 = (float)(unsigned char)t6;
                        if ((int)(unsigned char)t6 < 0) {
                            u1 = ((float)(unsigned char)t6 + 4.2949673e+09f);
                        }
                        (((struct o3C_float *)0xC40FA58)->v) = (u1 / 255.0f);
                        t6 = ((int (*)(int, int, int, float, float, float, float))(FUN_0c18778c))(0xC40FA88, (signed char)t5, 0xC40FA58, 255.0f, 640.0f, 320.0f, -320.0f);
                        (((struct o0_float *)0xC1BFA34)->v) = f5;
                        (((struct o20_float *)0xC1BFA34)->v) = f5;
                        FUN_0c17e740(1.0f, 1.0f, 1.0f);
                        t6 = ((int (*)(void))(FUN_0c187798))();
                        t6 = ((int (*)(void))(FUN_0c187798))();
                        t6 = ((int (*)(void))(FUN_0c187798))();
                        t6 = ((int (*)(void))(FUN_0c187798))();
                        nlObjPut(0xC1BFA20);
                        (((struct oC_float *)0xC40FA58)->v) = (0.5f - u0);
                        (((struct o24_float *)0xC40FA58)->v) = 0.5f;
                        (((struct o18_float *)0xC40FA58)->v) = 0.5f;
                        (((struct o0_float *)0xC40FA58)->v) = 0.5f;
                        (((struct o4_float *)0xC40FA58)->v) = 0.5f;
                        (((struct o1C_float *)0xC40FA58)->v) = -0.5f;
                        (((struct o10_float *)0xC40FA58)->v) = -0.5f;
                        (((struct o28_float *)0xC40FA58)->v) = -1.0f;
                        (((struct o0_uint *)0xC40FA58)->v) = (((((struct o0_int *)0xC40FA58)->v)) | 0x1);
                        (((struct oC_uint *)0xC40FA58)->v) = (((((struct oC_int *)0xC40FA58)->v)) | 0x1);
                        (((struct o18_uint *)0xC40FA58)->v) = (((((struct o18_int *)0xC40FA58)->v)) | 0x1);
                        (((struct o24_uint *)0xC40FA58)->v) = (((((struct o24_int *)0xC40FA58)->v)) | 0x1);
                        t6 = ((int (*)(void))(FUN_0c187798))();
                        t6 = ((int (*)(void))(FUN_0c187798))();
                        t6 = ((int (*)(void))(FUN_0c187798))();
                        t6 = ((int (*)(void))(FUN_0c187798))();
                        nlObjPut(0xC1BFA20);
                    }
                }
            }
        } else {
            if ((*(signed char *)0xC54244D) == 0) {
                u0 = ((float)(*(signed char *)0xC54244F) / (float)(signed char)t5);
            } else {
                u1 = ((float)((*(signed char *)0xC54244F) - 1) / (float)(signed char)t5);
                u1 = -u1;
                u0 = (u1 + 1.0f);
            }
            (((struct oC_float *)0xC40FA58)->v) = -320.0f;
            (((struct o0_float *)0xC40FA58)->v) = -320.0f;
            (((struct o24_float *)0xC40FA58)->v) = 320.0f;
            (((struct o18_float *)0xC40FA58)->v) = 320.0f;
            (((struct o1C_float *)0xC40FA58)->v) = -240.0f;
            (((struct o4_float *)0xC40FA58)->v) = -240.0f;
            (((struct o28_float *)0xC40FA58)->v) = 240.0f;
            (((struct o10_float *)0xC40FA58)->v) = 240.0f;
            (((struct o2C_float *)0xC40FA58)->v) = -1.0f;
            (((struct o20_float *)0xC40FA58)->v) = -1.0f;
            (((struct o14_float *)0xC40FA58)->v) = -1.0f;
            (((struct o8_float *)0xC40FA58)->v) = -1.0f;
            (((struct o0_uint *)0xC40FA58)->v) = (((((struct o0_int *)0xC40FA58)->v)) | 0x1);
            (((struct oC_uint *)0xC40FA58)->v) = (((((struct oC_int *)0xC40FA58)->v)) | 0x1);
            (((struct o18_uint *)0xC40FA58)->v) = (((((struct o18_int *)0xC40FA58)->v)) | 0x1);
            (((struct o24_uint *)0xC40FA58)->v) = (((((struct o24_int *)0xC40FA58)->v)) | 0x1);
            t5 = ((int (*)(int, int, int))(FUN_0c187798))(0xC40FA88, 0xC40FA58, 0xC40FA70);
            t5 = ((int (*)(void))(FUN_0c187798))();
            t5 = ((int (*)(int, int, int))(FUN_0c187798))(0x0, 0x0, t4);
            t4 = ((int (*)(void))(FUN_0c187798))();
            t4 = *(int *)0xC542450;
            u1 = (float)((unsigned int)(t4 & 0xFF0000) >> 16);
            if ((int)((unsigned int)(t4 & 0xFF0000) >> 16) < 0) {
                u1 = ((float)((unsigned int)(t4 & 0xFF0000) >> 16) + 4.2949673e+09f);
            }
            (((struct o4_float *)(t1))->v) = (u1 / f4);
            t4 = *(int *)0xC542450;
            u1 = (float)((unsigned int)(t4 & 0xFF00) >> 8);
            if ((int)((unsigned int)(t4 & 0xFF00) >> 8) < 0) {
                u1 = ((float)((unsigned int)(t4 & 0xFF00) >> 8) + 4.2949673e+09f);
            }
            (((struct o8_float *)(t1))->v) = (u1 / f4);
            t4 = *(int *)0xC542450;
            u1 = (float)(unsigned char)t4;
            if ((int)(unsigned char)t4 < 0) {
                u1 = ((float)(unsigned char)t4 + 4.2949673e+09f);
            }
            (((struct oC_float *)(t1))->v) = (u1 / f4);
            *(float *)((t1 + 0x0)) = 1.0f;
            t4 = ((int (*)(int, float))(FUN_0c18778c))(t1, f4);
            (((struct o0_float *)0xC1BFA34)->v) = f5;
            (((struct o20_float *)0xC1BFA34)->v) = f5;
            FUN_0c17e740(1.0f, 1.0f, 1.0f);
            nlObjPutTrnsl(0xC1BFA20, u0);
        }
        if (((*(signed char *)0xC54208F) == 0) && ((t2 = *(signed char *)0xC542092, t2 == 0) && (t3 = *(signed char *)0xC478BFC, t3 == 0))) {
            (((struct o0_uchar *)0xC54244F)->v) = ((*(signed char *)0xC54244F) - 1);
        }
        t4 = 0x1F;
        if ((*(signed char *)0xC54244F) == 0) {
            t1 = 0x1D;
            if ((*(signed char *)0xC54244D) != 0) {
                (((struct o0_uchar *)0xC54244F)->v) = 0x1;
                t1 = 0x1F;
            }
            t4 = t1;
        }
    }
    return t4;
}

int FUN_0c0c8fd4(int a4, int a5, int a6)
{
    int stk[6];
    register int t0;
    register int t1;
    register int t8;
    register int t10;
    register int t12;
    register int t20;
    register int t42;
    register int t59;
    register int t81;
    register int t111;
    register int t119;
    register int t141;
    register int t158;
    register int t180;
    register int t212;
    register int t214;
    register int t215;
    register int t223;
    register int t245;
    register int t262;
    register int t284;
    register int t313;
    register int t321;
    register int t343;
    register int t360;
    register int t382;
    register int t422;
    register int t425;
    register int t448;
    register int t452;
    register int t453;
    register int t455;
    int t490;
    register int t498;
    register int t503;
    register int t537;
    register int t610;
    register int t611;
    register int t615;
    register int t616;
    register int t666;
    register int t670;
    register int t671;
    register int t729;
    register int t731;
    register int t746;
    int t415;
    float u612;
    float u667;

    t0 = *(signed char *)((a4 + 0x1));
    t1 = *(signed char *)((a4 + 0x41C));
    if ((unsigned char)t1 != 55) {
        if ((unsigned char)t1 != 73) {
            if ((unsigned char)t1 == 36) {
                FUN_0c07dbd8((((short)t0 * (short)0x3938) + 0xC532498), (unsigned char)(*(signed char *)((a4 + 0x41C))));
                t746 = (FUN_0c0c2d56(a4, 0xB, (*(signed char *)((a4 + 0x1)))));
            } else {
                if ((unsigned char)t1 == 53) {
                    t8 = FUN_0c0c3e3a(a4, a5, a6);
                    t746 = t8;
                    if (t8 != 0) {
                    } else {
                        t10 = *(signed char *)((a4 + 0x15));
                        if (t10 != 0) {
                            t746 = t10;
                            if (t10 != 1) {
                            } else {
                                FUN_0c0c7f4c(a4);
                                t12 = FUN_0c0c2ce4(a4);
                                if (t12 != 0) {
                                    if (t12 == 2) {
                                        t746 = (FUN_0c0c2d56(a4, 0x3, (*(signed char *)((a4 + 0x1)))));
                                    } else {
                                        (((struct o50_float *)(a4))->v) = 0.0f;
                                        (((struct o5C_float *)(a4))->v) = -2.0f;
                                        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
                                        (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
                                        if ((*(signed char *)((a4 + 0x131))) == 0) {
                                            t20 = (((struct o426_short *)(a4))->v);
                                            (((struct o426_ushort *)(a4))->v) = (t20 + 0x1);
                                            if ((int)(short)(t20 + 0x1) > (int)0x4B0) {
                                                FUN_0c0c2d56(a4, 0xB, (*(signed char *)((a4 + 0x1))));
                                            }
                                        } else {
                                            FUN_0c0c2d56(a4, 0xB, (*(signed char *)((a4 + 0x1))));
                                        }
                                        t746 = 0x426;
                                        if ((int)((((struct o426_short *)(a4))->v)) <= (int)0x438) {
                                        } else {
                                            t42 = *(signed char *)0xC542260;
                                            (((struct oA8_uchar *)(a4))->v) = (t42 & 0x1);
                                            t746 = (t42 & 0x1);
                                        }
                                    }
                                } else {
                                    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
                                    (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
                                    if ((*(signed char *)((a4 + 0x131))) == 0) {
                                        t59 = (((struct o426_short *)(a4))->v);
                                        (((struct o426_ushort *)(a4))->v) = (t59 + 0x1);
                                        if ((int)(short)(t59 + 0x1) > (int)0x4B0) {
                                            FUN_0c0c2d56(a4, 0xB, (*(signed char *)((a4 + 0x1))));
                                        }
                                    } else {
                                        FUN_0c0c2d56(a4, 0xB, (*(signed char *)((a4 + 0x1))));
                                    }
                                    t746 = 0x426;
                                    if ((int)((((struct o426_short *)(a4))->v)) <= (int)0x438) {
                                    } else {
                                        t81 = *(signed char *)0xC542260;
                                        (((struct oA8_uchar *)(a4))->v) = (t81 & 0x1);
                                        t746 = (t81 & 0x1);
                                    }
                                }
                            }
                        } else {
                            FUN_0c0c2ab6(a4, (*(signed char *)(((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738B8) + 0x13))));
                            FUN_0c07e328(a4, (*(signed char *)(((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738B8) + 0xE))));
                            (((struct o12A_ushort *)(a4))->v) = 0xF;
                            (((struct o426_ushort *)(a4))->v) = 0x0;
                            *(unsigned short *)((a4 + 0x1C)) = 0x0;
                            *(unsigned int *)((a4 + 0x3C)) = 0x0;
                            (((struct o48_float *)(a4))->v) = 1.29999995f;
                            (((struct o44_float *)(a4))->v) = 1.29999995f;
                            (((struct o40_float *)(a4))->v) = 1.29999995f;
                            (((struct oAA_uchar *)(a4))->v) = 0x1;
                            (((struct oAB_uchar *)(a4))->v) = (*(signed char *)(((0xC2738B8 + ((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34)) + 0x16)));
                            (((struct o50_float *)(a4))->v) = 0.0f;
                            (((struct o5C_float *)(a4))->v) = -2.0f;
                            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                            FUN_0c0c7f4c(a4);
                            t111 = FUN_0c0c2ce4(a4);
                            if (t111 != 0) {
                                if (t111 == 2) {
                                    t746 = (FUN_0c0c2d56(a4, 0x3, (*(signed char *)((a4 + 0x1)))));
                                } else {
                                    (((struct o50_float *)(a4))->v) = 0.0f;
                                    (((struct o5C_float *)(a4))->v) = -2.0f;
                                    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
                                    (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
                                    if ((*(signed char *)((a4 + 0x131))) == 0) {
                                        t119 = (((struct o426_short *)(a4))->v);
                                        (((struct o426_ushort *)(a4))->v) = (t119 + 0x1);
                                        if ((int)(short)(t119 + 0x1) > (int)0x4B0) {
                                            FUN_0c0c2d56(a4, 0xB, (*(signed char *)((a4 + 0x1))));
                                        }
                                    } else {
                                        FUN_0c0c2d56(a4, 0xB, (*(signed char *)((a4 + 0x1))));
                                    }
                                    t746 = 0x426;
                                    if ((int)((((struct o426_short *)(a4))->v)) <= (int)0x438) {
                                    } else {
                                        t141 = *(signed char *)0xC542260;
                                        (((struct oA8_uchar *)(a4))->v) = (t141 & 0x1);
                                        t746 = (t141 & 0x1);
                                    }
                                }
                            } else {
                                (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
                                (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
                                if ((*(signed char *)((a4 + 0x131))) == 0) {
                                    t158 = (((struct o426_short *)(a4))->v);
                                    (((struct o426_ushort *)(a4))->v) = (t158 + 0x1);
                                    if ((int)(short)(t158 + 0x1) > (int)0x4B0) {
                                        FUN_0c0c2d56(a4, 0xB, (*(signed char *)((a4 + 0x1))));
                                    }
                                } else {
                                    FUN_0c0c2d56(a4, 0xB, (*(signed char *)((a4 + 0x1))));
                                }
                                t746 = 0x426;
                                if ((int)((((struct o426_short *)(a4))->v)) <= (int)0x438) {
                                } else {
                                    t180 = *(signed char *)0xC542260;
                                    (((struct oA8_uchar *)(a4))->v) = (t180 & 0x1);
                                    t746 = (t180 & 0x1);
                                }
                            }
                        }
                    }
                } else {
                    if ((unsigned char)t1 == 114) {
                        t212 = FUN_0c0c3e3a(a4, a5, a6);
                        t746 = t212;
                        if (t212 != 0) {
                        } else {
                            t214 = *(signed char *)((a4 + 0x15));
                            if (t214 != 0) {
                                t746 = t214;
                                if (t214 != 1) {
                                } else {
                                    t215 = FUN_0c0c2ce4(a4);
                                    if (t215 != 0) {
                                        if (t215 == 2) {
                                            t746 = (FUN_0c0c2d56(a4, 0x3, (*(signed char *)((a4 + 0x1)))));
                                        } else {
                                            (((struct o50_float *)(a4))->v) = 0.0f;
                                            (((struct o5C_float *)(a4))->v) = -2.0f;
                                            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
                                            (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
                                            if ((*(signed char *)((a4 + 0x131))) == 0) {
                                                t223 = (((struct o426_short *)(a4))->v);
                                                (((struct o426_ushort *)(a4))->v) = (t223 + 0x1);
                                                if ((int)(short)(t223 + 0x1) > (int)0x4B0) {
                                                    FUN_0c0c2d56(a4, 0xB, (*(signed char *)((a4 + 0x1))));
                                                }
                                            } else {
                                                FUN_0c0c2d56(a4, 0xB, (*(signed char *)((a4 + 0x1))));
                                            }
                                            t746 = 0x426;
                                            if ((int)((((struct o426_short *)(a4))->v)) <= (int)0x438) {
                                            } else {
                                                t245 = *(signed char *)0xC542260;
                                                (((struct oA8_uchar *)(a4))->v) = (t245 & 0x1);
                                                t746 = (t245 & 0x1);
                                            }
                                        }
                                    } else {
                                        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
                                        (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
                                        if ((*(signed char *)((a4 + 0x131))) == 0) {
                                            t262 = (((struct o426_short *)(a4))->v);
                                            (((struct o426_ushort *)(a4))->v) = (t262 + 0x1);
                                            if ((int)(short)(t262 + 0x1) > (int)0x4B0) {
                                                FUN_0c0c2d56(a4, 0xB, (*(signed char *)((a4 + 0x1))));
                                            }
                                        } else {
                                            FUN_0c0c2d56(a4, 0xB, (*(signed char *)((a4 + 0x1))));
                                        }
                                        t746 = 0x426;
                                        if ((int)((((struct o426_short *)(a4))->v)) <= (int)0x438) {
                                        } else {
                                            t284 = *(signed char *)0xC542260;
                                            (((struct oA8_uchar *)(a4))->v) = (t284 & 0x1);
                                            t746 = (t284 & 0x1);
                                        }
                                    }
                                }
                            } else {
                                FUN_0c0c2ab6(a4, (*(signed char *)(((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738B8) + 0x13))));
                                FUN_0c07e328(a4, (*(signed char *)(((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738B8) + 0xE))));
                                (((struct o12A_ushort *)(a4))->v) = 0xF;
                                (((struct o426_ushort *)(a4))->v) = 0x0;
                                *(unsigned int *)((a4 + 0x3C)) = 0x0;
                                (((struct o48_float *)(a4))->v) = 1.29999995f;
                                (((struct o44_float *)(a4))->v) = 1.29999995f;
                                (((struct o40_float *)(a4))->v) = 1.29999995f;
                                (((struct oAA_uchar *)(a4))->v) = 0x1;
                                (((struct oAB_uchar *)(a4))->v) = (*(signed char *)(((0xC2738B8 + ((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34)) + 0x16)));
                                (((struct o50_float *)(a4))->v) = 0.0f;
                                (((struct o5C_float *)(a4))->v) = -2.0f;
                                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                                t313 = FUN_0c0c2ce4(a4);
                                if (t313 != 0) {
                                    if (t313 == 2) {
                                        t746 = (FUN_0c0c2d56(a4, 0x3, (*(signed char *)((a4 + 0x1)))));
                                    } else {
                                        (((struct o50_float *)(a4))->v) = 0.0f;
                                        (((struct o5C_float *)(a4))->v) = -2.0f;
                                        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
                                        (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
                                        if ((*(signed char *)((a4 + 0x131))) == 0) {
                                            t321 = (((struct o426_short *)(a4))->v);
                                            (((struct o426_ushort *)(a4))->v) = (t321 + 0x1);
                                            if ((int)(short)(t321 + 0x1) > (int)0x4B0) {
                                                FUN_0c0c2d56(a4, 0xB, (*(signed char *)((a4 + 0x1))));
                                            }
                                        } else {
                                            FUN_0c0c2d56(a4, 0xB, (*(signed char *)((a4 + 0x1))));
                                        }
                                        t746 = 0x426;
                                        if ((int)((((struct o426_short *)(a4))->v)) <= (int)0x438) {
                                        } else {
                                            t343 = *(signed char *)0xC542260;
                                            (((struct oA8_uchar *)(a4))->v) = (t343 & 0x1);
                                            t746 = (t343 & 0x1);
                                        }
                                    }
                                } else {
                                    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
                                    (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
                                    if ((*(signed char *)((a4 + 0x131))) == 0) {
                                        t360 = (((struct o426_short *)(a4))->v);
                                        (((struct o426_ushort *)(a4))->v) = (t360 + 0x1);
                                        if ((int)(short)(t360 + 0x1) > (int)0x4B0) {
                                            FUN_0c0c2d56(a4, 0xB, (*(signed char *)((a4 + 0x1))));
                                        }
                                    } else {
                                        FUN_0c0c2d56(a4, 0xB, (*(signed char *)((a4 + 0x1))));
                                    }
                                    t746 = 0x426;
                                    if ((int)((((struct o426_short *)(a4))->v)) <= (int)0x438) {
                                    } else {
                                        t382 = *(signed char *)0xC542260;
                                        (((struct oA8_uchar *)(a4))->v) = (t382 & 0x1);
                                        t746 = (t382 & 0x1);
                                    }
                                }
                            }
                        }
                    } else {
                        t746 = (unsigned char)t1;
                        if ((unsigned char)t1 == 77) {
                            if (((*(signed char *)0xC542237) == 0) && (t415 = *(signed char *)0xC540F98, t415 != 0)) {
                                t746 = (FUN_0c0c2d56(a4, 0xB, (*(signed char *)((a4 + 0x1)))));
                            } else {
                                t422 = *(signed char *)((a4 + 0x15));
                                if (t422 != 0) {
                                    if (t422 != 1) {
                                        if (t422 != 2) {
                                            t425 = FUN_0c0c2ce4(a4);
                                            if (t425 != 0) {
                                                if (t425 == 2) {
                                                    t746 = (FUN_0c0c2d56(a4, 0x3, (*(signed char *)((a4 + 0x1)))));
                                                } else {
                                                    (((struct o50_float *)(a4))->v) = 0.0f;
                                                    (((struct o5C_float *)(a4))->v) = -2.0f;
                                                    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
                                                    (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
                                                    t746 = 0x50;
                                                }
                                            } else {
                                                (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
                                                (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
                                                t746 = 0x50;
                                            }
                                        } else {
                                            t448 = *(short *)((a4 + 0x1E));
                                            *(unsigned short *)((a4 + 0x1E)) = (t448 - 1);
                                            if ((int)(short)(t448 - 1) <= 0) {
                                                t746 = (FUN_0c0c2d56(a4, 0xB, (*(signed char *)((a4 + 0x1)))));
                                            } else {
                                                t452 = *(short *)((a4 + 0x1E));
                                                t453 = ((~(((~t452) + 0x1) & 0x1)) + 0x1);
                                                if ((int)t452 >= 0) {
                                                    t453 = (t452 & 0x1);
                                                }
                                                (((struct oA8_uchar *)(a4))->v) = t453;
                                                t455 = FUN_0c0c2ce4(a4);
                                                if (t455 != 0) {
                                                    if (t455 == 2) {
                                                        t746 = (FUN_0c0c2d56(a4, 0x3, (*(signed char *)((a4 + 0x1)))));
                                                    } else {
                                                        (((struct o50_float *)(a4))->v) = 0.0f;
                                                        (((struct o5C_float *)(a4))->v) = -2.0f;
                                                        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
                                                        (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
                                                        t746 = 0x50;
                                                    }
                                                } else {
                                                    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
                                                    (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
                                                    t746 = 0x50;
                                                }
                                            }
                                        }
                                    } else {
                                        t490 = *(short *)((a4 + 0x1C));
                                        if ((t490 != 120) && ((t490 != 0x8C) && (t490 != 0xA0))) {
                                        } else {
                                            FUN_0c0c8f70(a4, a5, a6);
                                            FUN_0c059df2((*(signed char *)((a4 + 0x1))), 0x72);
                                        }
                                        t498 = *(short *)((a4 + 0x1C));
                                        *(unsigned short *)((a4 + 0x1C)) = (t498 + 0x1);
                                        if ((int)(short)(t498 + 0x1) >= (int)0xAA) {
                                            *(unsigned short *)((a4 + 0x1E)) = 0x3C;
                                            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                                        }
                                        t503 = FUN_0c0c2ce4(a4);
                                        if (t503 != 0) {
                                            if (t503 == 2) {
                                                t746 = (FUN_0c0c2d56(a4, 0x3, (*(signed char *)((a4 + 0x1)))));
                                            } else {
                                                (((struct o50_float *)(a4))->v) = 0.0f;
                                                (((struct o5C_float *)(a4))->v) = -2.0f;
                                                (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
                                                (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
                                                t746 = 0x50;
                                            }
                                        } else {
                                            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
                                            (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
                                            t746 = 0x50;
                                        }
                                    }
                                } else {
                                    FUN_0c1614c8(a4, 0x2);
                                    FUN_0c0c2ab6(a4, (*(signed char *)(((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738B8) + 0x12))));
                                    *(unsigned short *)((a4 + 0x1C)) = 0x0;
                                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                                    t537 = FUN_0c0c2ce4(a4);
                                    if (t537 != 0) {
                                        if (t537 == 2) {
                                            t746 = (FUN_0c0c2d56(a4, 0x3, (*(signed char *)((a4 + 0x1)))));
                                        } else {
                                            (((struct o50_float *)(a4))->v) = 0.0f;
                                            (((struct o5C_float *)(a4))->v) = -2.0f;
                                            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
                                            (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
                                            t746 = 0x50;
                                        }
                                    } else {
                                        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
                                        (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
                                        t746 = 0x50;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            t610 = *(signed char *)((a4 + 0x15));
            if (t610 != 0) {
                t746 = t610;
                if (t610 != 1) {
                } else {
                    t611 = FUN_0c07d2c4((((short)t0 * (short)0x3938) + 0xC532498), (a4 + 0x1E));
                    if ((t611 != 0) && (u612 = (((struct o160_float *)((((short)t0 * (short)0x3938) + 0xC532498)))->v), u612 > 0.0f)) {
                        t615 = *(signed char *)0xC542235;
                        t746 = t615;
                        if (t615 != 2) {
                        } else {
                            t616 = *(short *)((a4 + 0x1C));
                            *(unsigned short *)((a4 + 0x1C)) = (t616 - 1);
                            t746 = (short)(t616 - 1);
                            if ((int)(short)(t616 - 1) > 0) {
                            } else {
                                math_mat_get_translate(((((struct oA4_int *)(a4))->v)), (((int)stk + 0) + 0xC));
                                FUN_0c187798();
                                FUN_0c0582ac(((int)stk + 0), ((((struct oA4_int *)(a4))->v)));
                                *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) + (*(float *)(((int)stk + 0))));
                                *(float *)(((int)stk + 16)) = ((*(float *)(((int)stk + 16))) + (*(float *)(((int)stk + 4))));
                                *(float *)(((int)stk + 20)) = ((*(float *)(((int)stk + 20))) + (*(float *)(((int)stk + 8))));
                                FUN_0c187798();
                                FUN_0c1632e0(0xFFFFFFFF, (a4 + 0x28), 0x11, 0.5f);
                                FUN_0c05aae4(0xD1, (a4 + 0x28));
                                t746 = (FUN_0c0c2d56(a4, 0xB, (*(signed char *)((a4 + 0x1)))));
                            }
                        }
                    } else {
                        math_mat_get_translate(((((struct oA4_int *)(a4))->v)), (((int)stk + 0) + 0xC));
                        FUN_0c187798();
                        FUN_0c0582ac(((int)stk + 0), ((((struct oA4_int *)(a4))->v)));
                        *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) + (*(float *)(((int)stk + 0))));
                        *(float *)(((int)stk + 16)) = ((*(float *)(((int)stk + 16))) + (*(float *)(((int)stk + 4))));
                        *(float *)(((int)stk + 20)) = ((*(float *)(((int)stk + 20))) + (*(float *)(((int)stk + 8))));
                        FUN_0c187798();
                        t746 = (FUN_0c0c2d56(a4, 0x6, (*(signed char *)((a4 + 0x1)))));
                    }
                }
            } else {
                (((struct o28_float *)(a4))->v) = 17.0f;
                (((struct o2C_float *)(a4))->v) = -17.0f;
                (((struct o30_float *)(a4))->v) = 0.0f;
                *(unsigned int *)((a4 + 0x34)) = 0x0;
                *(unsigned int *)((a4 + 0x38)) = 0x4000;
                *(unsigned int *)((a4 + 0x3C)) = 0x0;
                (((struct oA4_uint *)(a4))->v) = (((((struct oEC_int *)((0xC532498 + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938))))->v)) + 0x28);
                *(unsigned short *)((a4 + 0x1C)) = 0xB4;
                (((struct o12A_ushort *)(a4))->v) = 0x0;
                *(unsigned short *)(((0x12A + a4) + 0x2)) = 0x0;
                *(unsigned short *)(((0x12A + a4) + 0x4)) = 0x0;
                *(unsigned short *)((a4 + 0x1E)) = 0x1E;
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                t666 = FUN_0c07d2c4((((short)t0 * (short)0x3938) + 0xC532498), (a4 + 0x1E));
                if ((t666 != 0) && (u667 = (((struct o160_float *)((((short)t0 * (short)0x3938) + 0xC532498)))->v), u667 > 0.0f)) {
                    t670 = *(signed char *)0xC542235;
                    t746 = t670;
                    if (t670 != 2) {
                    } else {
                        t671 = *(short *)((a4 + 0x1C));
                        *(unsigned short *)((a4 + 0x1C)) = (t671 - 1);
                        t746 = (short)(t671 - 1);
                        if ((int)(short)(t671 - 1) > 0) {
                        } else {
                            math_mat_get_translate(((((struct oA4_int *)(a4))->v)), (((int)stk + 0) + 0xC));
                            FUN_0c187798();
                            FUN_0c0582ac(((int)stk + 0), ((((struct oA4_int *)(a4))->v)));
                            *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) + (*(float *)(((int)stk + 0))));
                            *(float *)(((int)stk + 16)) = ((*(float *)(((int)stk + 16))) + (*(float *)(((int)stk + 4))));
                            *(float *)(((int)stk + 20)) = ((*(float *)(((int)stk + 20))) + (*(float *)(((int)stk + 8))));
                            FUN_0c187798();
                            FUN_0c1632e0(0xFFFFFFFF, (a4 + 0x28), 0x11, 0.5f);
                            FUN_0c05aae4(0xD1, (a4 + 0x28));
                            t746 = (FUN_0c0c2d56(a4, 0xB, (*(signed char *)((a4 + 0x1)))));
                        }
                    }
                } else {
                    math_mat_get_translate(((((struct oA4_int *)(a4))->v)), (((int)stk + 0) + 0xC));
                    FUN_0c187798();
                    FUN_0c0582ac(((int)stk + 0), ((((struct oA4_int *)(a4))->v)));
                    *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) + (*(float *)(((int)stk + 0))));
                    *(float *)(((int)stk + 16)) = ((*(float *)(((int)stk + 16))) + (*(float *)(((int)stk + 4))));
                    *(float *)(((int)stk + 20)) = ((*(float *)(((int)stk + 20))) + (*(float *)(((int)stk + 8))));
                    FUN_0c187798();
                    t746 = (FUN_0c0c2d56(a4, 0x6, (*(signed char *)((a4 + 0x1)))));
                }
            }
        }
    } else {
        t729 = FUN_0c0c3e3a(a4, a5, a6);
        t746 = t729;
        if (t729 != 0) {
        } else {
            t731 = *(signed char *)((a4 + 0x15));
            if (t731 != 0) {
                if (t731 != 1) {
                    if (t731 != 2) {
                        t746 = t731;
                        if (t731 != 3) {
                        } else {
                            t746 = (FUN_0c0c8f2e(a4));
                        }
                    } else {
                        t746 = (FUN_0c0c8e8c(a4));
                    }
                } else {
                    t746 = (FUN_0c0c8d00(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4)));
                }
            } else {
                t746 = (FUN_0c0c8c90(a4));
            }
        }
    }
    return t746;
}
