/* Straight-line functions with calls and guards (batch gen_mu): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c058a6e(int, int, int, int, int, int);
int FUN_0c0de874(int, int, int, int);
int FUN_0c0f0728(int);
int FUN_0c1171f0(int);
int FUN_0c1517ac(int);
int FUN_0c187798(void);
int thunk_FUN_0c05abb2(int, int);
int FUN_0c0f076c(int a4, int a5, int a6);
int FUN_0c11846a(int a4, int a5, int a6, int a7);
int FUN_0c128498(int a4, int a5, int a6, int a7, float f4);
int FUN_0c04378c(int a4, int a5, int a6, int a7);
int FUN_0c151802(int a4, int a5, int a6, int a7);
int FUN_0c0dea08(int a4);

int FUN_0c0f076c(int a4, int a5, int a6)
{

    register int R1;
    register int R2;
    register int R3;
    register int R7;
    register int R8;
    register int R10;
    register int R12;
    register float F0;
    register float F2;
    register float F3;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register float w0_0;
    v0_0 = a4;
    v0_2 = *(signed char *)((v0_0 + 0x14));
    v0_1 = (v0_2);
    if ((v0_2 == 0)) goto L_C0F077C;
    if ((v0_1 == 1)) goto L_C0F0790;
    return FUN_0c03f346(v0_0, a5, a6, R7);
    L_C0F0790:;
    v0_2 = *(signed char *)((v0_0 + 0x15));
    v0_1 = (v0_2);
    if ((v0_2 == 0)) goto L_C0F07CC;
    if (!((v0_1 == 1))) goto L_C0F0852;
    (((struct o44_float *)(v0_0))->v) = (((((struct o44_float *)(v0_0))->v)) + 0.00499999989f);
    (((struct o2C_float *)(v0_0))->v) = (((((struct o2C_float *)(v0_0))->v)) - 1.0f);
    (((struct oBC_float *)(v0_0))->v) = (((((struct oBC_float *)(v0_0))->v)) - 0.0500000007f);
    v0_1 = (0xBC);
    w0_0 = (0.0f);
    FPUL_ = (0x3D4CCCCD);
    if ((((((struct oBC_float *)(v0_0))->v)) > 0.0f)) goto L_C0F0846;
    *(float *)((v0_0 + v0_1)) = w0_0;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    goto L_C0F0846;
    L_C0F0852:;
    return FUN_0c0f0728(v0_0);
    L_C0F0846:;
    w0_0 = (((struct oBC_float *)(v0_0))->v);
    (((struct oB8_float *)(v0_0))->v) = w0_0;
    (((struct oB4_float *)(v0_0))->v) = w0_0;
    goto L_C0F0852;
    L_C0F07CC:;
    w0_0 = (((struct o40_float *)(v0_0))->v);
    (((struct o40_float *)(v0_0))->v) = (w0_0 + 0.100000001f);
    (((struct o44_float *)(v0_0))->v) = (w0_0 + 0.100000001f);
    v0_1 = (0x40);
    w0_0 = (1.0f);
    FPUL_ = (0x3DCCCCCD);
    if ((!(((((struct o40_float *)(v0_0))->v)) > 1.0f))) goto L_C0F0852;
    *(float *)((v0_0 + v0_1)) = w0_0;
    (((struct o48_float *)(v0_0))->v) = w0_0;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    (((struct oAC_ushort *)(v0_0))->v) = (((((struct oAC_short *)(v0_0))->v)) | 0x200);
    (((struct oBC_float *)(v0_0))->v) = w0_0;
    (((struct oB8_float *)(v0_0))->v) = w0_0;
    (((struct oB4_float *)(v0_0))->v) = w0_0;
    goto L_C0F0852;
    L_C0F077C:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    (((struct o15_uchar *)(v0_0))->v) = 0x0;
    (((struct oA8_uchar *)(v0_0))->v) = 0x1;
    goto L_C0F0790;
}

int FUN_0c11846a(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;

    if (((*(int *)0xC474B8C) == 0) && (t0 = *(signed char *)((a4 + 0x14)), t0 == 0)) {
        (((struct o14_uchar *)(a4))->v) = 0x63;
    }
    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 99) {
                    return t0;
                }
                return FUN_0c03f346(a4, a5, a6, a7);
            }
            if ((int)(*(short *)((a4 + 0x1C))) <= (int)0x8) {
                FUN_0c058a6e((0xB0 + a4), 0xC291CE0, 0xC291CF0, (*(short *)((a4 + 0x1C))), 0x8, 0x0);
                t0 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
                t1 = (t0 + 0x1);
            } else {
                (((struct o14_uchar *)(a4))->v) = 0x63;
                t1 = 0x14;
            }
            return t1;
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0x61F;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        FUN_0c1171f0(a4);
        FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x13, 0x8, (*(int *)0xC4B410C));
        *(volatile int *)((a4 + 0xC4));
        *(volatile int *)(((((*(signed char *)((a4 + 0x2))) << 2) + (0xC4 + (*(int *)0xC474B8C))) + 0x0));
        FUN_0c187798();
    }
    if ((int)(*(short *)((a4 + 0x1C))) <= (int)0x2) {
        FUN_0c058a6e((0xB0 + a4), 0xC291CF0, 0xC291CE0, (*(short *)((a4 + 0x1C))), 0x2, 0x0);
        t0 = ((*(short *)((a4 + 0x1C))) + 0x1);
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t0 = 0x0;
    }
    *(unsigned short *)((a4 + 0x1C)) = t0;
    return t0;
}

int FUN_0c128498(int a4, int a5, int a6, int a7, float f4)
{
    int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if ((t0 != 3) && (t0 != 4)) {
                    return t0;
                }
                return FUN_0c03f346(a4, a5, a6, a7);
            }
            t0 = (((struct oC4_int *)(a4))->v);
            (((struct o84_float *)(t0))->v) = (((((struct o84_float *)(t0))->v)) + 0.100000001f);
            t0 = (((struct oC4_int *)(a4))->v);
            (((struct o88_float *)(t0))->v) = (((((struct o88_float *)(t0))->v)) + 0.100000001f);
            t0 = (((struct oC4_int *)(a4))->v);
            (((struct o18_float *)(t0))->v) = (((((struct o18_float *)(t0))->v)) - 0.0333333351f);
            t0 = (((struct oC4_int *)(a4))->v);
            (((struct o1C_float *)(t0))->v) = (((((struct o1C_float *)(t0))->v)) - 0.0333333351f);
            t0 = (((struct oC4_int *)(a4))->v);
            (((struct o20_float *)(t0))->v) = (((((struct o20_float *)(t0))->v)) - 0.0333333351f);
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
            t1 = (short)(t0 - 1);
            if ((short)(t0 - 1) == 0) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t1 = 0x14;
            }
            return t1;
        }
    } else {
        *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0xF;
        *(unsigned short *)((a4 + 0x1C)) = 0x1;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    t1 = (short)(t0 - 1);
    if ((short)(t0 - 1) == 0) {
        *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x21F;
        (((struct o18_float *)(((((struct oC4_int *)(a4))->v))))->v) = 1.0f;
        (((struct o1C_float *)(((((struct oC4_int *)(a4))->v))))->v) = 1.0f;
        (((struct o20_float *)(((((struct oC4_int *)(a4))->v))))->v) = 1.0f;
        *(unsigned short *)((a4 + 0x1C)) = 0x1E;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t1 = 0x14;
    }
    return t1;
}

int FUN_0c04378c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    return FUN_0c03f346(a4, 0xB6, a6, a7);
                }
                (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) - 0.0199999996f);
                *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + 0xB6);
                t0 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
                t1 = (short)(t0 - 1);
                if ((short)(t0 - 1) == 0) {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    t1 = 0x14;
                }
                return t1;
            }
            (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) + 0.0199999996f);
            *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + 0xB6);
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
            t1 = (short)(t0 - 1);
            if ((short)(t0 - 1) == 0) {
                *(unsigned short *)((a4 + 0x1C)) = 0x32;
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t1 = 0x14;
            }
            return t1;
        }
        t0 = *(signed char *)0xC541F41;
        t1 = (unsigned char)t0;
        if ((unsigned char)t0 == 3) {
            t0 = *(signed char *)0xC541F42;
            t1 = (unsigned char)t0;
            if ((unsigned char)t0 == 1) {
                t0 = *(signed char *)0xC541F43;
                t1 = (unsigned char)t0;
                if ((unsigned char)t0 == 1) {
                    t0 = *(signed char *)((a4 + 0x2));
                    t1 = t0;
                    if ((*(short *)0xC541F4E) == t0) {
                        *(unsigned short *)((a4 + 0x1C)) = 0x32;
                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                        t1 = 0x14;
                    }
                }
            }
        }
        return t1;
    }
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct oAC_ushort *)(a4))->v) = 0x1F;
    (((struct oA9_uchar *)(a4))->v) = 0x1;
    (((struct o28_float *)(a4))->v) = ((((struct o28_float *)((*(int *)((a4 + 0x10)))))->v));
    (((struct o30_float *)(a4))->v) = ((((struct o30_float *)((*(int *)((a4 + 0x10)))))->v));
    (((struct o40_float *)(a4))->v) = 1.0f;
    (((struct o44_float *)(a4))->v) = 0.0f;
    (((struct o48_float *)(a4))->v) = 1.0f;
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    return 0x14;
}

int FUN_0c151802(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0xF;
        (((struct o48_float *)(a4))->v) = 1.0f;
        (((struct o44_float *)(a4))->v) = 1.0f;
        (((struct o40_float *)(a4))->v) = 1.0f;
        (((struct o50_float *)(a4))->v) = 0.300000012f;
        (((struct o4C_float *)(a4))->v) = 0.300000012f;
        (((struct o54_float *)(a4))->v) = 0.0f;
        (((struct o5C_float *)(a4))->v) = -0.0199999996f;
        (((struct o58_float *)(a4))->v) = -0.0199999996f;
        (((struct o60_float *)(a4))->v) = 0.0f;
        (((struct o14_float *)(((((struct oC4_int *)(a4))->v))))->v) = 1.0f;
    }
    FUN_0c1517ac(a4);
    if (!(((((struct o4C_float *)(a4))->v)) > 0.0f)) {
        (((struct o4C_float *)(a4))->v) = 0.0f;
        (((struct o58_float *)(a4))->v) = 0.0f;
    }
    if (!(((((struct o50_float *)(a4))->v)) > 0.0f)) {
        (((struct o50_float *)(a4))->v) = 0.0f;
        (((struct o5C_float *)(a4))->v) = 0.0f;
    }
    if (!(((((struct o54_float *)(a4))->v)) > 0.0f)) {
        (((struct o54_float *)(a4))->v) = 0.0f;
        (((struct o60_float *)(a4))->v) = 0.0f;
    }
    t0 = (((struct oC4_int *)(a4))->v);
    (((struct o14_float *)(t0))->v) = (((((struct o14_float *)(t0))->v)) + -0.0666666701f);
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    t1 = (short)(t0 - 1);
    if ((short)(t0 - 1) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o14_float *)(((((struct oC4_int *)(a4))->v))))->v) = 0.0f;
        t1 = 0x14;
    }
    return t1;
}

int FUN_0c0dea08(int a4)
{

    register int R2;
    register int R3;
    int R4;
    int R6;
    register int R7;
    register float F2;
    register float F3;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    R4 = a4;
    v0_2 = *(signed char *)((R4 + 0x14));
    v0_1 = (v0_2);
    v0_0 = (R4);
    if ((v0_2 == 0)) goto L_C0DEA1E;
    if ((v0_1 == 1)) goto L_C0DEA2E;
    L_C0DEAEE:;
    return v0_1;
    L_C0DEA2E:;
    v0_3 = *(signed char *)((v0_0 + 0x15));
    v0_1 = (v0_3);
    R4 = (0x1);
    v0_2 = (0x0);
    R6 = (0x3);
    if ((v0_3 == 0)) goto L_C0DEA44;
    if ((v0_1 == 1)) goto L_C0DEA7C;
    if ((((*(short *)((v0_0 + 0x1C))) & R4) != 0)) goto L_C0DEAD8;
    v0_1 = ((*(short *)((v0_0 + 0x1E))));
    if ((((*(short *)((v0_0 + 0x1C))) & R6) != 0)) goto L_C0DEACC;
    R6 = (R4);
    L_C0DEACE:;
    FUN_0c0de874((v0_0 + 0x28), (*(int *)((v0_0 + 0x38))), R6, v0_1);
    L_C0DEAD8:;
    v0_3 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_3 - 1);
    v0_1 = ((short)(v0_3 - 1));
    if (((int)(short)(v0_3 - 1) > 0)) goto L_C0DEAEE;
    return FUN_0c03f346(v0_0, v0_2, R6, R7);
    L_C0DEACC:;
    R6 = (v0_2);
    goto L_C0DEACE;
    L_C0DEA7C:;
    if ((((*(short *)((v0_0 + 0x1C))) & R4) != 0)) goto L_C0DEAA0;
    *(unsigned short *)((v0_0 + 0x1E)) = ((*(short *)((v0_0 + 0x1E))) + 0x1);
    v0_1 = ((*(short *)((v0_0 + 0x1E))));
    if ((((*(short *)((v0_0 + 0x1C))) & R6) != 0)) goto L_C0DEA94;
    R6 = (R4);
    L_C0DEA96:;
    FUN_0c0de874((v0_0 + 0x28), (*(int *)((v0_0 + 0x38))), R6, v0_1);
    L_C0DEAA0:;
    v0_1 = *(short *)((v0_0 + 0x1E));
    FPUL_ = (v0_1);
    if ((30.0f > (float)v0_1)) goto L_C0DEAD8;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    goto L_C0DEAD8;
    L_C0DEA94:;
    R6 = (v0_2);
    goto L_C0DEA96;
    L_C0DEA44:;
    if ((((*(short *)((v0_0 + 0x1C))) & 7) != 0)) goto L_C0DEA58;
    FUN_0c0de874((v0_0 + 0x28), (*(int *)((v0_0 + 0x38))), 0x0, (*(short *)((v0_0 + 0x1E))));
    L_C0DEA58:;
    v0_2 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_2 - 1);
    v0_1 = ((short)(v0_2 - 1));
    if (((int)(short)(v0_2 - 1) > 0)) goto L_C0DEAEE;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    *(unsigned short *)((v0_0 + 0x1C)) = 0x5A;
    return thunk_FUN_0c05abb2(0x51, 0x0);
    L_C0DEA1E:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    *(unsigned short *)((v0_0 + 0x1C)) = 0x3C;
    *(unsigned short *)((v0_0 + 0x1E)) = 0x5;
    goto L_C0DEA2E;
}
