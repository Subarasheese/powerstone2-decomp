/* game/object: functions 0C0C224C-0C0C3A48, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o12A_short { char p[0x12A]; short v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12E_short { char p[0x12E]; short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o131_uchar { char p[0x131]; unsigned char v; };
struct o132_uchar { char p[0x132]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o24_short { char p[0x24]; short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o3768_uint { char p[0x3768]; unsigned int v; };
struct o3832_short { char p[0x3832]; short v; };
struct o404_int { char p[0x404]; int v; };
struct o40_float { char p[0x40]; float v; };
struct o41D_uchar { char p[0x41D]; unsigned char v; };
struct o41F_uchar { char p[0x41F]; unsigned char v; };
struct o422_uchar { char p[0x422]; unsigned char v; };
struct o423_uchar { char p[0x423]; unsigned char v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA4_int { char p[0xA4]; int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAA_uchar { char p[0xAA]; unsigned char v; };
struct oAB_uchar { char p[0xAB]; unsigned char v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c03f346(int);
int math_mat_transform_vector(int, int);
int math_mat_get_translate(int, int);
int FUN_0c064d5a(int, int);
int FUN_0c064e70(int, int);
int FUN_0c064ee4(int, int);
int FUN_0c064f80(int);
int FUN_0c064f8e(int, int);
int FUN_0c080320(int, float);
int FUN_0c0c43c0(int, int);
int FUN_0c0c9884(int, int, int, int, int);
int FUN_0c0c9fea(int, int, int, int, int);
int FUN_0c0ca33c(int, int, int, int, float);
int FUN_0c0ca682(int, int, int, int, int);
int FUN_0c0caaf0(int, int, int, int, int);
int FUN_0c0cbdbc(int, int, int, int, int);
int FUN_0c0cc8b0(int, int, int, int, int, int, int);
int FUN_0c0ce760(int, int, int, int, int);
int FUN_0c0cec08(int, int, int, int, int);
int FUN_0c0cf2f4(int, int, int, int, int, int);
int FUN_0c0d00e4(int, int);
int FUN_0c0d0110(int, int);
float FUN_0c0e2340(int);
extern int FUN_0c187798();
extern float _builtin_sqrtf(float);
void FUN_0c0c224c(int a4, int a5);
int FUN_0c0c22e6(int a4, int a5);
void FUN_0c0c2380(int a4, int a5);
int FUN_0c0c241a(int a4, int a5, int a6, float f4);
int FUN_0c0c25c4(int a4);
int FUN_0c0c283a(int a4);
int FUN_0c0c2870(int a4);
float FUN_0c0c28b2(int a4);
int FUN_0c0c28f6(int a4, int a5);
int FUN_0c0c2928(int a4, int a5, int a6, int a7, int a8, int a9, int a10);
int FUN_0c0c2944(int a4, int a5, int a6, int a7, int a8, float f4);
int FUN_0c0c2a80(int a4);
int FUN_0c0c2aa2(int a4, int a5);
int FUN_0c0c2ab6(int a4, int a5);
int FUN_0c0c2c30(int a4);
int FUN_0c0c2ce4(int a4);
void FUN_0c0c3010(int a4, int a5, int a6, float f4);
void FUN_0c0c3054(int a4, int a5, int a6, float f4);
int FUN_0c0c30a8(int a4, int a5, int a6);
int FUN_0c0c3258(int a4, int a5);
float FUN_0c0c32ec(int a4, int a5, int a6);

void FUN_0c0c224c(int a4, int a5)
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
            t0 = (0xC25BD20 + ((((*(signed char *)((0xC27630E + ((unsigned short)(unsigned char)(*(signed char *)((a5 + 0x41C))) * (unsigned short)0x1C)))) << 2) << 2) << 2));
        } else {
            t0 = (0xC25BD20 + ((((*(signed char *)((0xC2738C1 + ((unsigned short)(unsigned char)(*(signed char *)((a5 + 0x41C))) * (unsigned short)0x34)))) << 2) << 2) << 2));
        }
        FUN_0c080320(a4, (*(float *)((((t1 << 2) + t0) + 0x0))));
    return;
    }
}

int FUN_0c0c22e6(int a4, int a5)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x2));
    t1 = t0;
    if (t0 == 8) {
        t1 = t0;
        if ((*(signed char *)((0xC535BB4 + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938)))) != 0) {
            t1 = 0xC;
        }
    }
    t0 = FUN_0c0c43c0(a4, (unsigned char)a5);
    if (t0 != 0) {
        t0 = (0xC25BD20 + ((((*(signed char *)((0xC27630E + ((unsigned short)(unsigned char)a5 * (unsigned short)0x1C)))) << 2) << 2) << 2));
    } else {
        t0 = (0xC25BD20 + ((((*(signed char *)((0xC2738C1 + ((unsigned short)(unsigned char)a5 * (unsigned short)0x34)))) << 2) << 2) << 2));
    }
    return FUN_0c080320(a4, (*(float *)((((t1 << 2) + t0) + 0x0))));
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

int FUN_0c0c241a(int a4, int a5, int a6, float f4)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    int t5;
    register int t6;
    register int t7;
    register int t8;
    register float u0;

    if (((unsigned char)(*(signed char *)((a4 + 0x41C))) == 0xC2) && (t0 = *(signed char *)((a4 + 0x2)), t0 != 0)) {
        t1 = t0;
    } else {
        t0 = 0x41C;
        if ((unsigned char)(*(signed char *)((a4 + 0x41C))) == 0xC6) {
        } else {
            t2 = 0xC6;
            t3 = 0x0;
            t4 = a6;
            u0 = f4;
            for (;;) {
                if ((int)t3 < (int)((((struct oC0_int *)(a4))->v))) {
                    t5 = 0xC4;
                    t4 = t3;
                    t4 = (t4 << 2);
                    t5 = (t5 + a4);
                    u0 = 1.0f;
                    t5 = (t5 + t4);
                    t6 = 0xC3;
                    t5 = (*(int *)((t5 + 0x0)));
                    (((struct o8C_float *)(t5))->v) = u0;
                    (((struct o88_float *)(t5))->v) = u0;
                    (((struct o84_float *)(t5))->v) = u0;
                    t5 = 0xC2738B8;
                    t7 = *(signed char *)((a4 + 0x41C));
                    t8 = t5;
                    if ((unsigned char)t7 != t6) {
                        if ((unsigned char)t7 != 76) {
                            if ((unsigned char)t7 != 102) {
                                t2 = (*(signed char *)((a4 + 0x41C)));
                                t2 = (unsigned char)t2;
                                t2 = ((unsigned short)t2 * (unsigned short)0x34);
                                t8 = (t8 + t2);
                                t2 = (*(signed char *)((t8 + 0x19)));
                                if ((int)t3 < (int)t2) {
                                    t4 = (t4 + (0xC4 + a4));
                                    t2 = (*(int *)((t4 + 0x0)));
                                    *(unsigned char *)((t2 + 0x0)) = 0x1;
                                } else {
                                    t2 = 0xC4;
                                    t2 = (t2 + a4);
                                    t4 = (t4 + t2);
                                    *(unsigned char *)(((*(int *)((t4 + 0x0))) + 0x0)) = 0x0;
                                }
                            } else {
                                t2 = 0x34;
                                t8 = (t8 + ((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)t2));
                                if ((int)t3 < (int)(*(signed char *)((t8 + 0x19)))) {
                                    t6 = 0xC4;
                                    t6 = (t6 + a4);
                                    t6 = (t6 + t4);
                                    *(unsigned char *)(((*(int *)((t6 + 0x0))) + 0x0)) = 0x1;
                                } else {
                                    t6 = (*(int *)((((0xC4 + a4) + t4) + 0x0)));
                                    *(unsigned char *)((t6 + 0x0)) = 0x0;
                                }
                                t6 = *(signed char *)((a4 + 0x41D));
                                t5 = t6;
                                if ((t6 != 4) && (t5 != 5)) {
                                    if (t5 == 7) {
                                        t4 = (t4 + (0xC4 + a4));
                                        t2 = (*(int *)((t4 + 0x0)));
                                        *(unsigned char *)((t2 + 0x0)) = 0x1;
                                    }
                                } else {
                                    t4 = (t4 + (0xC4 + a4));
                                    t2 = (*(int *)((t4 + 0x0)));
                                    *(unsigned char *)((t2 + 0x0)) = 0x1;
                                }
                            }
                        } else {
                            if (t3 == 0) {
                                t2 = 0xC4;
                                t8 = 0xF;
                                t2 = (t2 + a4);
                                t2 = (t2 + t4);
                                *(unsigned short *)(((*(int *)((t2 + 0x0))) + 0x6)) = t8;
                            } else {
                                t2 = 0xC4;
                                t8 = 0x2F;
                                t2 = (t2 + a4);
                                t2 = (t2 + t4);
                                *(unsigned short *)(((*(int *)((t2 + 0x0))) + 0x6)) = t8;
                            }
                            t2 = 0x34;
                            t5 = (t5 + ((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)t2));
                            if ((int)t3 < (int)(*(signed char *)((t5 + 0x19)))) {
                                t4 = (t4 + (0xC4 + a4));
                                t2 = (*(int *)((t4 + 0x0)));
                                *(unsigned char *)((t2 + 0x0)) = 0x1;
                            } else {
                                t2 = 0xC4;
                                t2 = (t2 + a4);
                                t4 = (t4 + t2);
                                *(unsigned char *)(((*(int *)((t4 + 0x0))) + 0x0)) = 0x0;
                            }
                        }
                    } else {
                        t5 = 0xC27883C;
                        t6 = *(signed char *)((a4 + 0x424));
                        t2 = t6;
                        if ((int)t3 >= (int)(*(signed char *)((((((t6 << 2) + t2) << 1) + t5) + 0x9)))) {
                            t2 = 0xC4;
                            t2 = (t2 + a4);
                            t4 = (t4 + t2);
                            *(unsigned char *)(((*(int *)((t4 + 0x0))) + 0x0)) = 0x0;
                        } else {
                            t4 = (t4 + (0xC4 + a4));
                            t2 = (*(int *)((t4 + 0x0)));
                            *(unsigned char *)((t2 + 0x0)) = 0x1;
                        }
                    }
                    t3 = (t3 + 0x1);
                    continue;
                }
                break;
            }
            if ((unsigned char)(*(signed char *)((a4 + 0x41C))) == 71) {
                (((struct o68_uint *)(((((struct oC4_int *)(a4))->v))))->v) = 0x0;
                (((struct o68_uint *)(((((struct oC8_int *)(a4))->v))))->v) = 0x0;
            }
            (((struct oA8_uchar *)(a4))->v) = 0x1;
            t0 = 0xA8;
        }
        t1 = t0;
    }
    return t1;
}

int FUN_0c0c25c4(int a4)
{

    register int R1;
    register int R2;
    register int R3;
    register int R9;
    register int R10;
    register int R11;
    register int R12;
    register int R13;
    register int R14;
    register float F12;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    v0_0 = a4;
    (((struct o48_float *)(v0_0))->v) = 1.0f;
    (((struct o44_float *)(v0_0))->v) = 1.0f;
    (((struct o40_float *)(v0_0))->v) = 1.0f;
    v0_4 = *(signed char *)((v0_0 + 0x41C));
    v0_3 = ((unsigned char)v0_4);
    v0_1 = (0xF);
    v0_2 = (0x1F);
    w0_0 = (1.0f);
    w0_1 = (0.699999988f);
    w0_2 = (0.5f);
    if (((unsigned char)v0_4 == 14)) goto L_C0C2646;
    if ((v0_3 == 38)) goto L_C0C264C;
    if ((v0_3 == 39)) goto L_C0C264C;
    if ((v0_3 == 55)) goto L_C0C2654;
    if ((v0_3 == 8)) goto L_C0C267C;
    if ((v0_3 == 9)) goto L_C0C26AC;
    if ((v0_3 == 10)) goto L_C0C26BE;
    if ((v0_3 == 0xC9)) goto L_C0C26CC;
    if ((v0_3 == 76)) goto L_C0C26F8;
    if ((v0_3 != 75)) goto L_C0C2612;
    v0_2 = *(signed char *)((v0_0 + 0x41D));
    v0_1 = (v0_2);
    if ((v0_2 == 4)) goto L_C0C272E;
    if ((v0_1 != 5)) goto L_C0C2734;
    L_C0C272E:;
    w0_0 = (0.400000006f);
    L_C0C2738:;
    (((struct o48_float *)(v0_0))->v) = w0_0;
    (((struct o44_float *)(v0_0))->v) = w0_0;
    (((struct o40_float *)(v0_0))->v) = w0_0;
    v0_3 = (0x40);
    L_C0C2836:;
    return v0_3;
    L_C0C2734:;
    w0_0 = (0.300000012f);
    goto L_C0C2738;
    L_C0C2612:;
    if ((v0_3 != 102)) goto L_C0C261A;
    v0_3 = *(signed char *)((v0_0 + 0x41D));
    v0_4 = (v0_3);
    if ((v0_3 == 4)) goto L_C0C2768;
    if ((v0_4 == 5)) goto L_C0C2768;
    if ((v0_4 == 6)) goto L_C0C2768;
    if (!((v0_4 != 7))) goto L_C0C2768;
    *(unsigned short *)((((((struct oC8_int *)(v0_0))->v)) + 0x6)) = v0_1;
    v0_0 = (((struct oC8_int *)(v0_0))->v);
    (((struct o8C_float *)(v0_0))->v) = w0_0;
    (((struct o84_float *)(v0_0))->v) = w0_0;
    v0_3 = (0x84);
    goto L_C0C2836;
    L_C0C2768:;
    (((struct o48_float *)(v0_0))->v) = w0_1;
    (((struct o44_float *)(v0_0))->v) = w0_1;
    (((struct o40_float *)(v0_0))->v) = w0_1;
    *(unsigned short *)((((((struct oC8_int *)(v0_0))->v)) + 0x6)) = v0_2;
    v0_1 = (((struct oC8_int *)(v0_0))->v);
    (((struct o8C_float *)(v0_1))->v) = 1.39999998f;
    (((struct o84_float *)(v0_1))->v) = 1.39999998f;
    (((struct o88_float *)(((((struct oC8_int *)(v0_0))->v))))->v) = 1.20000005f;
    v0_3 = (0x88);
    goto L_C0C2836;
    L_C0C261A:;
    if ((v0_3 != 121)) goto L_C0C2622;
    (((struct o48_float *)(v0_0))->v) = w0_2;
    (((struct o44_float *)(v0_0))->v) = w0_2;
    (((struct o40_float *)(v0_0))->v) = w0_2;
    v0_3 = (0x40);
    goto L_C0C2836;
    L_C0C2622:;
    if (!((v0_3 != 100))) goto L_C0C27E2;
    if ((v0_3 != 115)) goto L_C0C2632;
    goto L_C0C27E2;
    L_C0C27E2:;
    v0_2 = *(signed char *)((v0_0 + 0x41D));
    v0_1 = (v0_2);
    if ((v0_2 == 4)) goto L_C0C27F4;
    v0_3 = (v0_1);
    if ((v0_1 != 5)) goto L_C0C2836;
    L_C0C27F4:;
    w0_0 = *(float *)0xC0C28DC;
    (((struct o48_float *)(v0_0))->v) = w0_0;
    (((struct o44_float *)(v0_0))->v) = w0_0;
    (((struct o40_float *)(v0_0))->v) = w0_0;
    v0_3 = (0x40);
    goto L_C0C2836;
    L_C0C2632:;
    if (!((v0_3 != 7))) goto L_C0C2806;
    if ((v0_3 != 45)) goto L_C0C2642;
    goto L_C0C2806;
    L_C0C2806:;
    if (((*(signed char *)((v0_0 + 0x41D))) != 7)) goto L_C0C2824;
    *(unsigned short *)((((((struct oC4_int *)(v0_0))->v)) + 0x6)) = v0_2;
    (((struct o88_float *)(((((struct oC4_int *)(v0_0))->v))))->v) = w0_1;
    v0_3 = (0x88);
    goto L_C0C2836;
    L_C0C2824:;
    *(unsigned short *)((((((struct oC4_int *)(v0_0))->v)) + 0x6)) = v0_1;
    (((struct o88_float *)(((((struct oC4_int *)(v0_0))->v))))->v) = w0_0;
    v0_3 = (0x88);
    goto L_C0C2836;
    L_C0C2642:;
    goto L_C0C2836;
    L_C0C26F8:;
    v0_2 = *(signed char *)((v0_0 + 0x41D));
    v0_1 = (v0_2);
    if ((v0_2 == 4)) goto L_C0C270E;
    v0_3 = (v0_1);
    if ((v0_1 == 5)) goto L_C0C270E;
    goto L_C0C2836;
    L_C0C270E:;
    (((struct o48_float *)(v0_0))->v) = w0_1;
    (((struct o44_float *)(v0_0))->v) = w0_1;
    (((struct o40_float *)(v0_0))->v) = w0_1;
    v0_3 = (0x40);
    goto L_C0C2836;
    L_C0C26CC:;
    v0_2 = *(signed char *)((v0_0 + 0x41D));
    v0_1 = (v0_2);
    if ((v0_2 == 4)) goto L_C0C26EA;
    if ((v0_1 == 5)) goto L_C0C26EA;
    v0_3 = (v0_1);
    if ((v0_1 == 6)) goto L_C0C26EA;
    goto L_C0C2836;
    L_C0C26EA:;
    (((struct o48_float *)(v0_0))->v) = w0_2;
    (((struct o44_float *)(v0_0))->v) = w0_2;
    (((struct o40_float *)(v0_0))->v) = w0_2;
    v0_3 = (0x40);
    goto L_C0C2836;
    L_C0C26BE:;
    (((struct o48_float *)(v0_0))->v) = w0_0;
    (((struct o44_float *)(v0_0))->v) = w0_0;
    (((struct o40_float *)(v0_0))->v) = w0_0;
    v0_3 = (0x40);
    goto L_C0C2836;
    L_C0C26AC:;
    (((struct o48_float *)(v0_0))->v) = 0.75f;
    (((struct o44_float *)(v0_0))->v) = 0.75f;
    v0_3 = (0x40);
    w0_0 = (0.75f);
    L_C0C26BA:;
    *(float *)((v0_0 + v0_3)) = w0_0;
    goto L_C0C2836;
    L_C0C267C:;
    (((struct o48_float *)(v0_0))->v) = 0.550000012f;
    (((struct o44_float *)(v0_0))->v) = 0.550000012f;
    v0_3 = (0x40);
    w0_0 = (0.550000012f);
    goto L_C0C26BA;
    L_C0C2654:;
    v0_2 = *(signed char *)((v0_0 + 0x41D));
    v0_1 = (v0_2);
    if ((v0_2 == 4)) goto L_C0C266A;
    v0_3 = (v0_1);
    if ((v0_1 == 5)) goto L_C0C266A;
    goto L_C0C2836;
    L_C0C266A:;
    (((struct o48_float *)(v0_0))->v) = 0.529999971f;
    (((struct o44_float *)(v0_0))->v) = 0.529999971f;
    (((struct o40_float *)(v0_0))->v) = 0.529999971f;
    v0_3 = (0x40);
    goto L_C0C2836;
    L_C0C264C:;
    w0_0 = (0.330000013f);
    L_C0C2650:;
    v0_3 = (0x44);
    goto L_C0C26BA;
    L_C0C2646:;
    w0_0 = (0.200000003f);
    goto L_C0C2650;
}

int FUN_0c0c283a(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x1));
    if ((*(signed char *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x3721))) == (*(signed char *)((a4 + 0x41C)))) {
        if (((((struct o3832_short *)((((short)t0 * (short)0x3938) + 0xC532498)))->v)) == ((((struct o24_short *)(a4))->v))) {
            if ((*(signed char *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x3715))) != 8) {
                return 0x1;
            }
            return 0x0;
        }
        return 0x1;
    }
    return 0x1;
}

int FUN_0c0c2870(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x1));
    if ((*(signed char *)((0xC2738B8 + ((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34)))) != 2) {
        if ((*(signed char *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x3721))) == (*(signed char *)((a4 + 0x41C)))) {
            if (((((struct o3832_short *)((((short)t0 * (short)0x3938) + 0xC532498)))->v)) != ((((struct o24_short *)(a4))->v))) {
                return 0x1;
            }
            return 0x0;
        }
        return 0x1;
    }
    return 0x0;
}

float FUN_0c0c28b2(int a4)
{
    register int t3;

    t3 = 0x14;
    if ((*(signed char *)((a4 + 0x1))) != 0) {
        
        t3 = 0x18;
    }
    return (((((struct oC_float *)(a4))->v)) + (*(float *)((a4 + t3))));
}

int FUN_0c0c28f6(int a4, int a5)
{
    int stk[9];
    register int t0;

    *(unsigned int *)(((int)stk + 0)) = a5;
    t0 = FUN_0c064f8e(a4, (((int)stk + 0) + 0x4));
    if (t0 != 0) {
        *(float *)(((*(int *)(((int)stk + 0))) + 0x0)) = (FUN_0c0c28b2((((int)stk + 0) + 0x4)));
        return 0x1;
    }
    return 0x0;
}

int FUN_0c0c2928(int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
    return (FUN_0c0cc8b0(a4, a5, a6, a7, a8, a9, a10));
}

int FUN_0c0c2944(int a4, int a5, int a6, int a7, int a8, float f4)
{
    register int t0;

    if ((*(signed char *)((((a4 * 0x34) + 0xC2738B8) + 0x1))) == -1) {
        return 0x0;
    }
    if (a4 == 78) {
        return (FUN_0c0ce760(0x4E, a5, a6, a7, a8));
    }
    if (a4 == 54) {
        return (FUN_0c0cec08(0x36, a5, a6, a7, a8));
    }
    if (a4 == 70) {
        return (FUN_0c0c9fea(0x46, a5, a6, a7, a8));
    }
    if (a4 == 0xC2) {
        return (FUN_0c0c2928(0xC6, 0x1E, 0x7, 0x0, a7, 0xFFFFFFFF, 0x0));
    }
    if ((a4 != 8) && ((a4 != 9) && (a4 != 10))) {
        t0 = *(signed char *)((((a4 * 0x34) + 0xC2738B8) + 0x0));
        if (t0 == 2) {
            return FUN_0c0ca33c(a4, 0x0, a6, ((a4 * 0x34) + 0xC2738B8), f4);
        }
        if (t0 == 3) {
            t0 = (FUN_0c0ca682(a4, a5, a6, a7, a8));
        } else {
            if ((*(signed char *)((((a4 * 0x34) + 0xC2738B8) + 0x0))) == 4) {
                t0 = (FUN_0c0cbdbc(a4, a5, a6, a7, a8));
            } else {
                t0 = *(signed char *)((((a4 * 0x34) + 0xC2738B8) + 0x0));
                if ((t0 != 0) && (t0 != 1)) {
                    t0 = 0x0;
                    if ((*(signed char *)((((a4 * 0x34) + 0xC2738B8) + 0x0))) == 9) {
                        t0 = (FUN_0c0cf2f4(a4, a5, 0x2, a7, 0xFFFFFFFF, 0x0));
                    }
                } else {
                    t0 = (FUN_0c0c9884(a4, a5, a6, a7, a8));
                }
            }
        }
        return t0;
    }
    return (FUN_0c0caaf0(a4, a5, a6, a7, a8));
}

int FUN_0c0c2a80(int a4)
{
    if ((*(signed char *)((a4 + 0x423))) != -1) {
        FUN_0c0d0110(a4, (*(signed char *)((a4 + 0x423))));
    }
    return FUN_0c03f346(a4);
}

int FUN_0c0c2aa2(int a4, int a5)
{
    register int t0;

    (((struct o423_uchar *)(a4))->v) = a5;
    t0 = *(signed char *)((a4 + 0x423));
    if (t0 != -1) {
        return FUN_0c0d00e4(a4, a5);
    }
    return t0;
}

int FUN_0c0c2ab6(int a4, int a5)
{
    register int t0;
    int t1;

    if ((*(signed char *)((a4 + 0x0))) != 9) {
        FUN_0c064d5a(a4, (((((signed char)a5 << 1) + (signed char)a5) << 2) + 0xC27894C));
        (((struct o12A_ushort *)(a4))->v) = (((((struct o12A_short *)(a4))->v)) & (~((int)0x1 << (int)(*(signed char *)((a4 + 0x1))))));
    } else {
        t0 = *(signed char *)((a4 + 0x41C));
        if ((unsigned char)t0 != 0xC3) {
            t1 = a5;
            if ((unsigned char)t0 != 0xC8) {
            } else {
                if ((signed char)a5 == 0) {
                    t0 = (*(signed char *)((((((*(signed char *)((a4 + 0x424))) << 2) << 1) + 0xC278904) + 0x2)));
                } else {
                    t0 = (*(signed char *)((((((*(signed char *)((a4 + 0x424))) << 2) << 1) + 0xC278904) + 0x3)));
                }
                t1 = t0;
            }
            t0 = t1;
        } else {
            if ((signed char)a5 == 0) {
                t1 = *(signed char *)((a4 + 0x424));
                t0 = (*(signed char *)((((((t1 << 2) + t1) << 1) + 0xC27883C) + 0x2)));
            } else {
                t1 = *(signed char *)((a4 + 0x41F));
                if ((t1 != 2) && (t1 != 3)) {
                    t1 = *(signed char *)((a4 + 0x424));
                    t0 = (*(signed char *)((((((t1 << 2) + t1) << 1) + 0xC27883C) + 0x3)));
                } else {
                    t1 = *(signed char *)((a4 + 0x424));
                    t0 = (*(signed char *)((((((t1 << 2) + t1) << 1) + 0xC27883C) + 0x4)));
                }
            }
        }
        FUN_0c064d5a(a4, (((((signed char)t0 << 1) + (signed char)t0) << 2) + 0xC27894C));
        (((struct o12A_ushort *)(a4))->v) = (((((struct o12A_short *)(a4))->v)) & (~((int)0x1 << (int)(*(signed char *)((a4 + 0x1))))));
        t0 = *(signed char *)((a4 + 0x41D));
        if ((t0 == 4) || ((t0 == 5) || ((t0 == 7) || (t0 == 8)))) {
            (((struct o12E_ushort *)(a4))->v) = (((((struct o12E_short *)(a4))->v)) & (~((int)0x1 << (int)(*(signed char *)((a4 + 0x1))))));
        }
    }
    (((struct o132_uchar *)(a4))->v) = 0x0;
    (((struct o131_uchar *)(a4))->v) = 0x0;
    return 0x0;
}

int FUN_0c0c2c30(int a4)
{
    register int t0;
    int t1;
    int t2;

    if (((unsigned char)(*(signed char *)((a4 + 0x41C))) != 0xCC) && ((t0 = *(signed char *)((a4 + 0x41D)), t0 == 4) || ((t0 == 5) || ((t0 == 7) || (((t0 == 0) || (t0 == 1)) && (t1 = *(signed char *)((a4 + 0x1B)), t1 == 3)))))) {
        (((struct oAA_uchar *)(a4))->v) = 0x0;
        return 0xAA;
    }
    if (((unsigned char)(*(signed char *)((a4 + 0x41C))) == 0xC2) && (t2 = *(signed char *)((a4 + 0x2)), t2 != 0)) {
        (((struct oAA_uchar *)(a4))->v) = 0x1;
        (((struct oAB_uchar *)(a4))->v) = 0x1;
        return 0xAB;
    }
    if ((unsigned char)(*(signed char *)((a4 + 0x41C))) == 0xC6) {
        t0 = 0x3;
        if (((*(signed char *)((a4 + 0x19))) & 0x1) != 0) {
            t0 = 0x2;
        }
        (((struct oAA_uchar *)(a4))->v) = t0;
        (((struct oAB_uchar *)(a4))->v) = 0x1;
        return 0xAB;
    }
    if ((*(signed char *)((0x16 + (((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738B8)))) != -1) {
        (((struct oAA_uchar *)(a4))->v) = 0x1;
        (((struct oAB_uchar *)(a4))->v) = (*(signed char *)(((0xC2738B8 + ((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34)) + 0x16)));
        t0 = 0xAB;
    } else {
        (((struct oAA_uchar *)(a4))->v) = 0x0;
        t0 = 0xAA;
    }
    return t0;
}

int FUN_0c0c2ce4(int a4)
{
    int t0;

    if (((*(signed char *)0xC542237) == 0) && (t0 = *(signed char *)0xC54223C, t0 == 1)) {
        if (!(((((struct o2C_float *)(a4))->v)) > 1000.0f)) {
            (((struct o2C_float *)(a4))->v) = 1000.0f;
            return 0x1;
        }
        return 0x0;
    }
    t0 = FUN_0c064ee4(a4, 0x2);
    if (t0 != 0) {
        return 0x2;
    }
    t0 = FUN_0c064f80(a4);
    if (t0 != 0) {
        return 0x1;
    }
    return 0x0;
}

void FUN_0c0c3010(int a4, int a5, int a6, float f4)
{
    if (a4 != 0) {
        if ((*(signed char *)((a4 + 0x0))) == 9) {
            (((struct o15_uchar *)(a4))->v) = 0x0;
            (((struct o16_uchar *)(a4))->v) = 0x0;
            *(unsigned short *)((a4 + 0x1C)) = 0x0;
            *(unsigned short *)((a4 + 0x1E)) = 0x0;
            (((struct o41D_uchar *)(a4))->v) = 0x7;
            (((struct o41F_uchar *)(a4))->v) = a6;
            *(unsigned char *)((a4 + 0x1)) = a5;
            FUN_0c0c241a(a4, a5, a6, f4);
            FUN_0c0c2c30(a4);
    return;
        }
        return;
    }
}

void FUN_0c0c3054(int a4, int a5, int a6, float f4)
{
    if (a4 != 0) {
        if ((*(signed char *)((a4 + 0x0))) == 9) {
            (((struct o15_uchar *)(a4))->v) = 0x0;
            (((struct o16_uchar *)(a4))->v) = 0x0;
            *(unsigned short *)((a4 + 0x1C)) = 0x0;
            *(unsigned short *)((a4 + 0x1E)) = 0x0;
            (((struct o41D_uchar *)(a4))->v) = 0x8;
            (((struct o41F_uchar *)(a4))->v) = a6;
            *(unsigned char *)((a4 + 0x1)) = a5;
            FUN_0c0c241a(a4, a5, a6, f4);
            FUN_0c0c2c30(a4);
    return;
        }
        return;
    }
}

int FUN_0c0c30a8(int a4, int a5, int a6)
{
    int stk[1];

    register int R1;
    register int R2;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    v0_0 = a4;
    v0_2 = a5;
    v0_1 = a6;
    if ((v0_0 != 0)) goto L_C0C30B8;
    L_C0C3240:;
    v0_7 = (0x0);
    L_C0C3242:;
    return v0_7;
    L_C0C30B8:;
    v0_5 = *(signed char *)((v0_0 + 0x41C));
    *(unsigned int *)(((int)stk + 0)) = (unsigned char)v0_5;
    v0_3 = (0xC3);
    v0_4 = (v0_5);
    if (((unsigned char)v0_5 == 0xC3)) goto L_C0C30E4;
    if ((((*(signed char *)((((unsigned short)(unsigned char)v0_4 * (unsigned short)0x34) + 0xC2738C0))) & ((int)0x1 << (int)(signed char)v0_2)) == ((int)0x1 << (int)(signed char)v0_2))) goto L_C0C3114;
    L_C0C30E4:;
    if (((*(int *)(((int)stk + 0))) == v0_3)) goto L_C0C30EE;
    goto L_C0C3240;
    L_C0C30EE:;
    v0_4 = *(signed char *)((v0_0 + 0x424));
    if ((((*(signed char *)(((((v0_4 << 2) + v0_4) << 1) + 0xC278843))) & ((int)0x1 << (int)(signed char)v0_2)) == ((int)0x1 << (int)(signed char)v0_2))) goto L_C0C3114;
    goto L_C0C3240;
    L_C0C3114:;
    v0_7 = ((signed char)v0_2);
    v0_6 = (0x1);
    v0_5 = (0xC278D18);
    v0_4 = (0xC2738B8);
    if (((signed char)v0_2 == 0)) goto L_C0C3134;
    if ((v0_7 == 1)) goto L_C0C318C;
    if ((v0_7 == 2)) goto L_C0C31C8;
    if ((v0_7 != 3)) goto L_C0C3130;
    if (((*(signed char *)((v0_0 + 0x41D))) != 2)) goto L_C0C3240;
    *(volatile signed char *)((v0_0 + 0x422));
    *(volatile signed char *)((v0_1 + 0x1));
    L_C0C323C:;
    v0_7 = (0x1);
    goto L_C0C3242;
    L_C0C3130:;
    goto L_C0C323C;
    L_C0C31C8:;
    if (((*(signed char *)((v0_0 + 0x41D))) != 2)) goto L_C0C3240;
    if ((((*(signed char *)((v0_0 + 0x422))) & ((int)v0_6 << (int)(*(signed char *)((v0_1 + 0x1))))) != 0)) goto L_C0C323C;
    v0_6 = *(signed char *)((v0_0 + 0x41C));
    *(unsigned int *)(((int)stk + 0)) = (unsigned char)v0_6;
    v0_2 = (v0_6);
    if (((unsigned char)v0_6 == v0_3)) goto L_C0C3202;
    if ((((*(short *)((v0_5 + ((*(signed char *)(((((unsigned short)(unsigned char)v0_2 * (unsigned short)0x34) + v0_4) + 0x4))) << 1)))) & ((int)0x1 << (int)(*(signed char *)((v0_1 + 0x2))))) != 0)) goto L_C0C323C;
    L_C0C3202:;
    if (((*(int *)(((int)stk + 0))) != v0_3)) goto L_C0C3240;
    v0_0 = *(signed char *)((v0_0 + 0x424));
    if ((((*(short *)((v0_5 + ((*(signed char *)((0xC278842 + (((v0_0 << 2) + v0_0) << 1)))) << 1)))) & ((int)0x1 << (int)(*(signed char *)((v0_1 + 0x2))))) == 0)) goto L_C0C3240;
    goto L_C0C323C;
    L_C0C318C:;
    if (((*(signed char *)((v0_0 + 0x41D))) != 5)) goto L_C0C3240;
    v0_1 = *(signed char *)((v0_1 + 0x3721));
    v0_0 = ((unsigned char)v0_1);
    if (((unsigned char)v0_1 == 15)) goto L_C0C3240;
    if ((v0_0 == 37)) goto L_C0C3240;
    goto L_C0C323C;
    L_C0C3134:;
    if (((*(signed char *)((v0_0 + 0x41D))) == 2)) goto L_C0C3140;
    goto L_C0C3240;
    L_C0C3140:;
    if ((((*(signed char *)((v0_0 + 0x422))) & ((int)v0_6 << (int)(*(signed char *)((v0_1 + 0x1))))) != 0)) goto L_C0C3152;
    goto L_C0C3240;
    L_C0C3152:;
    v0_2 = (0x34);
    if ((((*(short *)((v0_5 + ((*(signed char *)(((((unsigned short)(unsigned char)(*(signed char *)((v0_0 + 0x41C))) * (unsigned short)0x34) + v0_4) + 0x4))) << 1)))) & ((int)v0_6 << (int)(*(signed char *)((v0_1 + 0x2))))) == 0)) goto L_C0C3240;
    v0_0 = *(signed char *)(((((unsigned short)(unsigned char)(*(signed char *)((v0_0 + 0x41C))) * (unsigned short)v0_2) + v0_4) + 0x0));
    v0_2 = (v0_0);
    if ((v0_0 == 0)) goto L_C0C323C;
    if ((v0_2 != 1)) goto L_C0C3240;
    goto L_C0C323C;
}

int FUN_0c0c3258(int a4, int a5)
{
    int stk[1];
    register int t3;
    register int t4;
    register int t12;
    register int t20;
    int t2;
    int t11;
    int t19;

    if (((*(signed char *)(((((unsigned short)(unsigned char)(*(signed char *)((a5 + 0x41C))) * (unsigned short)0x34) + 0xC2738B8) + 0x0))) == 0) && (t2 = *(signed char *)((a5 + 0x41D)), t2 == 8)) {
        t3 = *(signed char *)((a5 + 0x41C));
        *(unsigned int *)(((int)stk + 0)) = (unsigned char)t3;
        if ((unsigned char)t3 == 0xC3) {
            t4 = *(signed char *)((a5 + 0x424));
            if (((*(short *)((((*(signed char *)(((((t4 << 2) + t4) << 1) + 0xC278844))) << 1) + 0xC278D18))) & ((int)0x1 << (int)(*(signed char *)((a4 + 0x2))))) == 0) {
                if (((*(int *)(((int)stk + 0))) == 0xC3) && (t11 = *(signed char *)((a4 + 0x371C)), t11 != 0)) {
                    return 0x1;
                }
                t12 = *(signed char *)((a5 + 0x41C));
                *(unsigned char *)(((int)stk + 0)) = t12;
                if ((unsigned char)t12 != 0xC3) {
                    if (((*(short *)((((*(signed char *)(((0xC2738B8 + ((unsigned short)(unsigned char)(*(signed char *)(((int)stk + 0))) * (unsigned short)0x34)) + 0x14))) << 1) + 0xC278D18))) & ((int)0x1 << (int)(*(signed char *)((a4 + 0x2))))) != 0) {
                        return 0x1;
                    }
                    return 0x0;
                }
                return 0x0;
            }
            return 0x1;
        }
        if (((*(int *)(((int)stk + 0))) == 0xC3) && (t19 = *(signed char *)((a4 + 0x371C)), t19 != 0)) {
            return 0x1;
        }
        t20 = *(signed char *)((a5 + 0x41C));
        *(unsigned char *)(((int)stk + 0)) = t20;
        if ((unsigned char)t20 != 0xC3) {
            if (((*(short *)((((*(signed char *)(((0xC2738B8 + ((unsigned short)(unsigned char)(*(signed char *)(((int)stk + 0))) * (unsigned short)0x34)) + 0x14))) << 1) + 0xC278D18))) & ((int)0x1 << (int)(*(signed char *)((a4 + 0x2))))) != 0) {
                return 0x1;
            }
            return 0x0;
        }
        return 0x0;
    }
    return 0x0;
}

