/* game/unsorted: functions 0C034D28-0C03598E, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o30_float { char p[0x30]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c03733c(int, int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c042fe0(void);
extern int FUN_0c187798();
int FUN_0c03508c(int a4);
int FUN_0c035426(int a4, int a5, int a6, int a7, float f4);
int FUN_0c0356ae(int a4, int a5, int a6, int a7, float f4);

int FUN_0c03508c(int a4)
{

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R6;
    register int R7;
    register int R8;
    register float F2;
    register float F3;
    register float F4;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    v0_0 = a4;
    v0_1 = (FUN_0c042fe0()) != 0;
    v0_0 = (v0_0);
    if (v0_1) goto L_C0350A4;
    L_C035216:;
    return FUN_0c03f346(v0_0, R5, R6, R7);
    L_C0350A4:;
    v0_5 = *(signed char *)((v0_0 + 0x14));
    v0_1 = (v0_5);
    v0_2 = (0x1);
    v0_3 = (0xC1AA458);
    v0_4 = (0xC20ECD4);
    if ((v0_5 == 0)) goto L_C0350EC;
    if (!((v0_1 != 1))) goto L_C0351F8;
    return FUN_0c03f346(v0_0, R5, R6, R7);
    L_C0351F8:;
    v0_1 = (((struct o22_short *)(v0_0))->v);
    (((struct o22_ushort *)(v0_0))->v) = (v0_1 - 1);
    if (((short)(v0_1 - 1) != 0)) goto L_C03524E;
    if ((((((struct o20_short *)(v0_0))->v)) != 0)) goto L_C035240;
    if ((((((struct o22_short *)(v0_0))->v)) != 0)) goto L_C035240;
    goto L_C035216;
    L_C035240:;
    (((struct o22_ushort *)(v0_0))->v) = 0x5A;
    (((struct o20_ushort *)(v0_0))->v) = (((((struct o20_short *)(v0_0))->v)) - 1);
    L_C03524E:;
    if (((*(short *)((v0_0 + 0x1E))) == ((((struct o20_short *)(v0_0))->v)))) goto L_C03534A;
    *(unsigned short *)((v0_0 + 0x1E)) = ((((struct o20_short *)(v0_0))->v));
    FUN_0c03733c(v0_0, ((*(signed char *)(((((short)(*(signed char *)((v0_0 + 0x2))) * (short)0x1C) + v0_3) + 0x18))) + (*(short *)((v0_0 + 0x1E)))), (*(int *)0xC4B40D0));
    *(volatile signed char *)((v0_0 + 0x2));
    FUN_0c187798();
    *(volatile signed char *)((v0_0 + 0x2));
    FUN_0c187798();
    *(unsigned short *)((((((struct oC4_int *)(v0_0))->v)) + 0x6)) = 0x71F;
    (((struct o14_float *)(((((struct oC4_int *)(v0_0))->v))))->v) = (*(float *)((v0_4 + (((*(short *)((v0_0 + 0x1E))) << 2) << 2))));
    (((struct o18_float *)(((((struct oC4_int *)(v0_0))->v))))->v) = ((((struct o4_float *)(((((*(short *)((v0_0 + 0x1E))) << 2) << 2) + v0_4)))->v));
    (((struct o1C_float *)(((((struct oC4_int *)(v0_0))->v))))->v) = ((((struct o8_float *)(((((*(short *)((v0_0 + 0x1E))) << 2) << 2) + v0_4)))->v));
    (((struct o20_float *)(((((struct oC4_int *)(v0_0))->v))))->v) = ((((struct oC_float *)(((((*(short *)((v0_0 + 0x1E))) << 2) << 2) + v0_4)))->v));
    *(unsigned short *)((((((struct oC8_int *)(v0_0))->v)) + 0x6)) = 0x31F;
    (((struct o18_float *)(((((struct oC8_int *)(v0_0))->v))))->v) = ((((struct o4_float *)(((((*(short *)((v0_0 + 0x1E))) << 2) << 2) + v0_4)))->v));
    (((struct o1C_float *)(((((struct oC8_int *)(v0_0))->v))))->v) = ((((struct o8_float *)(((((*(short *)((v0_0 + 0x1E))) << 2) << 2) + v0_4)))->v));
    (((struct o20_float *)(((((struct oC8_int *)(v0_0))->v))))->v) = ((((struct oC_float *)((v0_4 + (((*(short *)((v0_0 + 0x1E))) << 2) << 2))))->v));
    *(unsigned short *)((v0_0 + 0x1C)) = v0_2;
    (((struct o15_uchar *)(v0_0))->v) = 0x0;
    L_C03534A:;
    v0_2 = *(signed char *)((v0_0 + 0x15));
    v0_1 = (v0_2);
    if ((v0_2 == 0)) goto L_C03535E;
    if ((v0_1 == 1)) goto L_C03536E;
    if (!((v0_1 == 2))) goto L_C0353DC;
    (((struct o48_float *)(v0_0))->v) = (((((struct o48_float *)(v0_0))->v)) - 0.0199999996f);
    v0_2 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_2 - 1);
    v0_1 = ((short)(v0_2 - 1));
    FPUL_ = (0x3CA3D70A);
    if (((short)(v0_2 - 1) != 0)) goto L_C0353DC;
    goto L_C0353C2;
    L_C0353DC:;
    return v0_1;
    L_C0353C2:;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    v0_1 = (0x15);
    goto L_C0353DC;
    L_C03536E:;
    (((struct o30_float *)(v0_0))->v) = (((((struct o30_float *)(v0_0))->v)) - 0.25f);
    v0_2 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_2 - 1);
    v0_1 = ((short)(v0_2 - 1));
    FPUL_ = (0x3E800000);
    if (((short)(v0_2 - 1) != 0)) goto L_C0353DC;
    v0_1 = (0x5);
    L_C03538A:;
    *(unsigned short *)((v0_0 + 0x1C)) = v0_1;
    goto L_C0353C2;
    L_C03535E:;
    v0_2 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_2 - 1);
    v0_1 = ((short)(v0_2 - 1));
    if (((short)(v0_2 - 1) != 0)) goto L_C0353DC;
    v0_1 = (0x14);
    goto L_C03538A;
    L_C0350EC:;
    (((struct oA8_uchar *)(v0_0))->v) = v0_2;
    (((struct oAC_ushort *)(v0_0))->v) = 0x1F;
    (((struct oA9_uchar *)(v0_0))->v) = 0x21;
    (((struct o22_ushort *)(v0_0))->v) = 0x5A;
    (((struct o20_ushort *)(v0_0))->v) = 0x9;
    *(unsigned short *)((v0_0 + 0x1E)) = ((((struct o20_short *)(v0_0))->v));
    FUN_0c03733c(v0_0, ((*(signed char *)(((((short)(*(signed char *)((v0_0 + 0x2))) * (short)0x1C) + v0_3) + 0x18))) + (*(short *)((v0_0 + 0x1E)))), (*(int *)0xC4B40D0));
    *(volatile signed char *)((v0_0 + 0x2));
    FUN_0c187798();
    *(volatile signed char *)((v0_0 + 0x2));
    FUN_0c187798();
    *(unsigned short *)((((((struct oC4_int *)(v0_0))->v)) + 0x6)) = 0x71F;
    (((struct o14_float *)(((((struct oC4_int *)(v0_0))->v))))->v) = (*(float *)((v0_4 + (((*(short *)((v0_0 + 0x1E))) << 2) << 2))));
    (((struct o18_float *)(((((struct oC4_int *)(v0_0))->v))))->v) = ((((struct o4_float *)(((((*(short *)((v0_0 + 0x1E))) << 2) << 2) + v0_4)))->v));
    (((struct o1C_float *)(((((struct oC4_int *)(v0_0))->v))))->v) = ((((struct o8_float *)(((((*(short *)((v0_0 + 0x1E))) << 2) << 2) + v0_4)))->v));
    (((struct o20_float *)(((((struct oC4_int *)(v0_0))->v))))->v) = ((((struct oC_float *)(((((*(short *)((v0_0 + 0x1E))) << 2) << 2) + v0_4)))->v));
    *(unsigned short *)((((((struct oC8_int *)(v0_0))->v)) + 0x6)) = 0x31F;
    (((struct o18_float *)(((((struct oC8_int *)(v0_0))->v))))->v) = ((((struct o4_float *)(((((*(short *)((v0_0 + 0x1E))) << 2) << 2) + v0_4)))->v));
    (((struct o1C_float *)(((((struct oC8_int *)(v0_0))->v))))->v) = ((((struct o8_float *)(((((*(short *)((v0_0 + 0x1E))) << 2) << 2) + v0_4)))->v));
    (((struct o20_float *)(((((struct oC8_int *)(v0_0))->v))))->v) = ((((struct oC_float *)(((((*(short *)((v0_0 + 0x1E))) << 2) << 2) + v0_4)))->v));
    *(unsigned short *)((v0_0 + 0x1C)) = v0_2;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    goto L_C0351F8;
}

int FUN_0c035426(int a4, int a5, int a6, int a7, float f4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    t2 = *(signed char *)((a4 + 0x14));
    if (t2 != 0) {
        if (t2 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        t2 = *(signed char *)((a4 + 0x15));
        if (t2 != 0) {
            if (t2 != 1) {
                if (t2 == 2) {
                    t3 = (((struct oC4_int *)(a4))->v);
                    (((struct o74_float *)(t3))->v) = (((((struct o74_float *)(t3))->v)) - 0.200000003f);
                    t3 = (((struct oC8_int *)(a4))->v);
                    (((struct o74_float *)(t3))->v) = (((((struct o74_float *)(t3))->v)) - 0.200000003f);
                    t3 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t3 - 1);
                    t4 = (short)(t3 - 1);
                    if ((short)(t3 - 1) == 0) {
                        *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
                        *(unsigned short *)((a4 + 0x1C)) = 0xA;
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        t4 = 0x15;
                    }
                    t3 = t4;
                } else {
                    if (t2 == 3) {
                        t2 = (((struct oC8_int *)(a4))->v);
                        (((struct o8C_float *)(t2))->v) = (((((struct o8C_float *)(t2))->v)) - 0.0299999993f);
                        t2 = *(short *)((a4 + 0x1C));
                        *(unsigned short *)((a4 + 0x1C)) = (t2 - 1);
                        t4 = (short)(t2 - 1);
                        if ((short)(t2 - 1) == 0) {
                            *(unsigned short *)((a4 + 0x1C)) = 0xB4;
                            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                            t4 = 0x15;
                        }
                        t2 = t4;
                    } else {
                        t4 = *(short *)((a4 + 0x1C));
                        *(unsigned short *)((a4 + 0x1C)) = (t4 - 1);
                        t5 = (short)(t4 - 1);
                        if ((short)(t4 - 1) == 0) {
                            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                            t5 = 0x14;
                        }
                        t2 = t5;
                    }
                    t3 = t2;
                }
                t2 = t3;
            } else {
                t3 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t3 - 1);
                t4 = (short)(t3 - 1);
                if ((short)(t3 - 1) == 0) {
                    *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
                    *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x1;
                    (((struct o74_float *)(((((struct oC4_int *)(a4))->v))))->v) = 0.0f;
                    (((struct o74_float *)(((((struct oC8_int *)(a4))->v))))->v) = 0.0f;
                    (((struct o8C_float *)(((((struct oC8_int *)(a4))->v))))->v) = 0.300000012f;
                    *(unsigned short *)((a4 + 0x1C)) = 0x19;
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    t4 = 0x15;
                }
                t2 = t4;
            }
            t3 = t2;
        } else {
            t2 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t2 - 1);
            t4 = (short)(t2 - 1);
            if ((short)(t2 - 1) != 0) {
            } else {
                t2 = (((struct oC4_int *)(a4))->v);
                *(unsigned char *)((t2 + 0x0)) = 0x0;
                *(unsigned short *)((t2 + 0x6)) = 0x11F;
                *(volatile signed char *)((a4 + 0x2));
                t5 = ((int (*)(int, int, int))(FUN_0c187798))(t2, a5, a6);
                *(volatile signed char *)((a4 + 0x2));
                t2 = ((int (*)(int))(FUN_0c187798))(t0);
                t0 = (((struct oC8_int *)(a4))->v);
                FUN_0c03744a(t0, 0x1, (*(signed char *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC1AA474) + 0x19))), (*(int *)0xC4B40D0));
                *(unsigned char *)((t0 + 0x0)) = 0x0;
                *(unsigned short *)((t0 + 0x6)) = 0x31F;
                *(volatile signed char *)((a4 + 0x2));
                t2 = ((int (*)(void))(FUN_0c187798))();
                *(volatile signed char *)((a4 + 0x2));
                t2 = ((int (*)(void))(FUN_0c187798))();
                (((struct o18_float *)(t0))->v) = 1.0f;
                (((struct o1C_float *)(t0))->v) = 0.0f;
                (((struct o20_float *)(t0))->v) = 0.0f;
                *(unsigned short *)((a4 + 0x1C)) = 0x1;
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                t4 = 0x15;
            }
            t3 = t4;
        }
        return t3;
    }
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct oAC_ushort *)(a4))->v) = 0xF;
    (((struct oA9_uchar *)(a4))->v) = 0x21;
    *(unsigned short *)((a4 + 0x1C)) = 0x1;
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                t2 = (((struct oC4_int *)(a4))->v);
                (((struct o74_float *)(t2))->v) = (((((struct o74_float *)(t2))->v)) - 0.200000003f);
                t2 = (((struct oC8_int *)(a4))->v);
                (((struct o74_float *)(t2))->v) = (((((struct o74_float *)(t2))->v)) - 0.200000003f);
                t2 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t2 - 1);
                t3 = (short)(t2 - 1);
                if ((short)(t2 - 1) == 0) {
                    *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
                    *(unsigned short *)((a4 + 0x1C)) = 0xA;
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    t3 = 0x15;
                }
                t2 = t3;
            } else {
                if (t0 == 3) {
                    t0 = (((struct oC8_int *)(a4))->v);
                    (((struct o8C_float *)(t0))->v) = (((((struct o8C_float *)(t0))->v)) - 0.0299999993f);
                    t0 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
                    t3 = (short)(t0 - 1);
                    if ((short)(t0 - 1) == 0) {
                        *(unsigned short *)((a4 + 0x1C)) = 0xB4;
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        t3 = 0x15;
                    }
                    t0 = t3;
                } else {
                    t3 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t3 - 1);
                    t4 = (short)(t3 - 1);
                    if ((short)(t3 - 1) == 0) {
                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                        t4 = 0x14;
                    }
                    t0 = t4;
                }
                t2 = t0;
            }
            t0 = t2;
        } else {
            t2 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t2 - 1);
            t3 = (short)(t2 - 1);
            if ((short)(t2 - 1) == 0) {
                *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
                *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x1;
                (((struct o74_float *)(((((struct oC4_int *)(a4))->v))))->v) = 0.0f;
                (((struct o74_float *)(((((struct oC8_int *)(a4))->v))))->v) = 0.0f;
                (((struct o8C_float *)(((((struct oC8_int *)(a4))->v))))->v) = 0.300000012f;
                *(unsigned short *)((a4 + 0x1C)) = 0x19;
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                t3 = 0x15;
            }
            t0 = t3;
        }
        t2 = t0;
    } else {
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        t3 = (short)(t0 - 1);
        if ((short)(t0 - 1) != 0) {
        } else {
            t0 = (((struct oC4_int *)(a4))->v);
            *(unsigned char *)((t0 + 0x0)) = 0x0;
            *(unsigned short *)((t0 + 0x6)) = 0x11F;
            *(volatile signed char *)((a4 + 0x2));
            t4 = ((int (*)(int, int, int))(FUN_0c187798))(t0, a5, a6);
            *(volatile signed char *)((a4 + 0x2));
            t0 = ((int (*)(int))(FUN_0c187798))(t1);
            t0 = (((struct oC8_int *)(a4))->v);
            FUN_0c03744a(t0, 0x1, (*(signed char *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC1AA474) + 0x19))), (*(int *)0xC4B40D0));
            *(unsigned char *)((t0 + 0x0)) = 0x0;
            *(unsigned short *)((t0 + 0x6)) = 0x31F;
            *(volatile signed char *)((a4 + 0x2));
            t1 = ((int (*)(void))(FUN_0c187798))();
            *(volatile signed char *)((a4 + 0x2));
            t1 = ((int (*)(void))(FUN_0c187798))();
            (((struct o18_float *)(t0))->v) = 1.0f;
            (((struct o1C_float *)(t0))->v) = 0.0f;
            (((struct o20_float *)(t0))->v) = 0.0f;
            *(unsigned short *)((a4 + 0x1C)) = 0x1;
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            t3 = 0x15;
        }
        t2 = t3;
    }
    return t2;
}

int FUN_0c0356ae(int a4, int a5, int a6, int a7, float f4)
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
    register int t10;
    register int t11;
    register int t12;
    register int t13;
    register int t14;
    register int t15;
    register int t16;
    register int t17;
    register int t18;

    t16 = *(signed char *)((a4 + 0x14));
    if (t16 != 0) {
        if (t16 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        t16 = *(signed char *)((a4 + 0x15));
        if (t16 != 0) {
            if (t16 != 1) {
                t17 = t16;
                if (t16 != 2) {
                } else {
                    t16 = *(short *)0xC54099A;
                    t18 = *(signed char *)((a4 + 0x2));
                    switch (t18) {
                    case 0:
                        if (1.0f > (float)((int)((int)t16 / (int)0x2710))) {
                            (((struct oA8_uchar *)(a4))->v) = 0x0;
                        }
                        *(unsigned short *)((a4 + 0x1C)) = ((int)((int)((int)((int)(*(short *)0xC54099A) / (int)0x2710)) % (int)0xA));
                        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1A);
                        break;
                    case 1:
                        if (1.0f > (float)((int)((int)t16 / (int)0x3E8))) {
                            (((struct oA8_uchar *)(a4))->v) = 0x0;
                        }
                        *(unsigned short *)((a4 + 0x1C)) = ((int)((int)((int)((int)(*(short *)0xC54099A) / (int)0x3E8)) % (int)0xA));
                        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1A);
                        break;
                    case 2:
                        if (1.0f > (float)((int)((int)t16 / (int)0x64))) {
                            (((struct oA8_uchar *)(a4))->v) = 0x0;
                        }
                        *(unsigned short *)((a4 + 0x1C)) = ((int)((int)((int)((int)(*(short *)0xC54099A) / (int)0x64)) % (int)0xA));
                        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1A);
                        break;
                    case 3:
                        if (1.0f > (float)((int)((int)t16 / (int)0xA))) {
                            (((struct oA8_uchar *)(a4))->v) = 0x0;
                        }
                        *(unsigned short *)((a4 + 0x1C)) = ((int)((int)((int)((int)(*(short *)0xC54099A) / (int)0xA)) % (int)0xA));
                        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1A);
                        break;
                    case 4:
                        *(unsigned short *)((a4 + 0x1C)) = ((int)((int)t16 % (int)0xA));
                        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1A);
                        break;
                    case 5:
                        *(unsigned short *)((a4 + 0x1C)) = 0xC;
                        break;
                    }
                    FUN_0c03733c(a4, (*(short *)((a4 + 0x1C))), (*(int *)0xC4B40D0));
                    t16 = (((struct oC4_int *)(a4))->v);
                    *(unsigned char *)((t16 + 0x0)) = 0x1;
                    *(unsigned short *)((t16 + 0x6)) = 0x31F;
                    *(volatile signed char *)((a4 + 0x2));
                    t18 = ((int (*)(int, int, int))(FUN_0c187798))(t16, 0xC1AA570, 0x31F);
                    *(volatile signed char *)((a4 + 0x2));
                    t16 = ((int (*)(int, int))(FUN_0c187798))(t0, t1);
                    (((struct o18_float *)(t2))->v) = 1.0f;
                    (((struct o1C_float *)(t2))->v) = ((((struct o0_float *)0xC0359A8)->v));
                    (((struct o20_float *)(t2))->v) = 0.0f;
                    t0 = (((struct oC8_int *)(a4))->v);
                    *(unsigned char *)((t0 + 0x0)) = 0x1;
                    *(unsigned short *)((t0 + 0x6)) = t3;
                    *(volatile signed char *)((a4 + 0x2));
                    t1 = ((int (*)(int, int, int))(FUN_0c187798))(t0, t4, t3);
                    *(volatile signed char *)((a4 + 0x2));
                    t0 = ((int (*)(int, int))(FUN_0c187798))(t5, t6);
                    (((struct o18_float *)(t7))->v) = ((((struct o4_float *)0xC0359A8)->v));
                    (((struct o1C_float *)(t7))->v) = ((((struct o8_float *)0xC0359A8)->v));
                    (((struct o20_float *)(t7))->v) = f4;
                    t0 = 0x22;
                    if ((*(short *)0xC54099A) == 0) {
                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                        t0 = 0x14;
                    }
                    t17 = t0;
                }
                t0 = t17;
            } else {
                t1 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
                t2 = (short)(t1 - 1);
                if ((short)(t1 - 1) != 0) {
                } else {
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
                *(unsigned short *)((a4 + 0x1C)) = 0x1;
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                t2 = 0x15;
            }
            t1 = t2;
        }
        return t1;
    }
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct oAC_ushort *)(a4))->v) = 0xF;
    (((struct oA9_uchar *)(a4))->v) = 0x21;
    *(unsigned short *)((a4 + 0x1C)) = 0x1;
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            t1 = t0;
            if (t0 != 2) {
            } else {
                t0 = *(short *)0xC54099A;
                t2 = *(signed char *)((a4 + 0x2));
                switch (t2) {
                case 0:
                    if (1.0f > (float)((int)((int)t0 / (int)0x2710))) {
                        (((struct oA8_uchar *)(a4))->v) = 0x0;
                    }
                    *(unsigned short *)((a4 + 0x1C)) = ((int)((int)((int)((int)(*(short *)0xC54099A) / (int)0x2710)) % (int)0xA));
                    *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1A);
                    break;
                case 1:
                    if (1.0f > (float)((int)((int)t0 / (int)0x3E8))) {
                        (((struct oA8_uchar *)(a4))->v) = 0x0;
                    }
                    *(unsigned short *)((a4 + 0x1C)) = ((int)((int)((int)((int)(*(short *)0xC54099A) / (int)0x3E8)) % (int)0xA));
                    *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1A);
                    break;
                case 2:
                    if (1.0f > (float)((int)((int)t0 / (int)0x64))) {
                        (((struct oA8_uchar *)(a4))->v) = 0x0;
                    }
                    *(unsigned short *)((a4 + 0x1C)) = ((int)((int)((int)((int)(*(short *)0xC54099A) / (int)0x64)) % (int)0xA));
                    *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1A);
                    break;
                case 3:
                    if (1.0f > (float)((int)((int)t0 / (int)0xA))) {
                        (((struct oA8_uchar *)(a4))->v) = 0x0;
                    }
                    *(unsigned short *)((a4 + 0x1C)) = ((int)((int)((int)((int)(*(short *)0xC54099A) / (int)0xA)) % (int)0xA));
                    *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1A);
                    break;
                case 4:
                    *(unsigned short *)((a4 + 0x1C)) = ((int)((int)t0 % (int)0xA));
                    *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1A);
                    break;
                case 5:
                    *(unsigned short *)((a4 + 0x1C)) = 0xC;
                    break;
                }
                FUN_0c03733c(a4, (*(short *)((a4 + 0x1C))), (*(int *)0xC4B40D0));
                t0 = (((struct oC4_int *)(a4))->v);
                *(unsigned char *)((t0 + 0x0)) = 0x1;
                *(unsigned short *)((t0 + 0x6)) = 0x31F;
                *(volatile signed char *)((a4 + 0x2));
                t2 = ((int (*)(int, int, int))(FUN_0c187798))(t0, 0xC1AA570, 0x31F);
                *(volatile signed char *)((a4 + 0x2));
                t0 = ((int (*)(int, int))(FUN_0c187798))(t8, t9);
                (((struct o18_float *)(t10))->v) = 1.0f;
                (((struct o1C_float *)(t10))->v) = ((((struct o0_float *)0xC0359A8)->v));
                (((struct o20_float *)(t10))->v) = 0.0f;
                t0 = (((struct oC8_int *)(a4))->v);
                *(unsigned char *)((t0 + 0x0)) = 0x1;
                *(unsigned short *)((t0 + 0x6)) = t11;
                *(volatile signed char *)((a4 + 0x2));
                t2 = ((int (*)(int, int, int))(FUN_0c187798))(t0, t12, t11);
                *(volatile signed char *)((a4 + 0x2));
                t0 = ((int (*)(int, int))(FUN_0c187798))(t13, t14);
                (((struct o18_float *)(t15))->v) = ((((struct o4_float *)0xC0359A8)->v));
                (((struct o1C_float *)(t15))->v) = ((((struct o8_float *)0xC0359A8)->v));
                (((struct o20_float *)(t15))->v) = f4;
                t0 = 0x22;
                if ((*(short *)0xC54099A) == 0) {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    t0 = 0x14;
                }
                t1 = t0;
            }
            t0 = t1;
        } else {
            t1 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
            t2 = (short)(t1 - 1);
            if ((short)(t1 - 1) != 0) {
            } else {
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
            *(unsigned short *)((a4 + 0x1C)) = 0x1;
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            t2 = 0x15;
        }
        t1 = t2;
    }
    return t1;
}
