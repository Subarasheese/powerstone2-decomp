/* Straight-line functions with calls and guards (batch gen_ag): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12C_ushort { char p[0x12C]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o22_short { char p[0x22]; short v; };
struct o28_float { char p[0x28]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB0_float { char p[0xB0]; float v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c037498(int, int, int, int);
int FUN_0c03f004(void);
int FUN_0c03f346(int, int, int, int);
int FUN_0c0c2ab6(int, int);
int FUN_0c0c2d56(int, int, int);
int FUN_0c0cf440(int, int, int);
int FUN_0c0e2700(int, int, int, int);
int FUN_0c16af86(int, int, int, int);
int FUN_0c187798(int, int, int);
int math_atan2_angle16(float, float);
int math_vec3_accumulate(int, int);
int FUN_0c131258(int a4, int a5, int a6, int a7);
int FUN_0c0ef2e0(int a4, int a5, int a6);
int FUN_0c16b224(int a4, int a5, int a6, int a7);
int FUN_0c031354(int a4, int a5, int a6, int a7);
int FUN_0c0f59c8(int a4);
int FUN_0c0f8920(int a4, int a5, int a6, int a7);
int FUN_0c1250a8(int a4, int a5, int a6, int a7);
int FUN_0c1251ce(int a4, int a5, int a6, int a7);
int FUN_0c03f258(int a4, int a5);
int FUN_0c04f0c4(int a4, int a5, int a6, int a7);

int FUN_0c131258(int a4, int a5, int a6, int a7)
{
    register int t19;
    register int t14;

    if ((*(signed char *)((a4 + 0x14))) == 0) {
        if ((*(signed char *)((0x3715 + (*(int *)((a4 + 0x10)))))) == 7) {
            if (!(((((struct o8C_float *)((*(int *)((0xC5325B0 + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938))))))->v)) > (*(float *)0xC1313AC))) {
                if ((unsigned short)(*(short *)((0xC535CB0 + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938)))) != 0x11B) {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    return FUN_0c03f346(a4, a5, a6, a7);
                }
                *(volatile int *)((a4 + 0x10));
                FUN_0c187798(a4, a5, a6);
                *(unsigned int *)((t14 + 0x34)) = ((*(int *)(((*(int *)((t14 + 0x10))) + 0x34))) + 0xE38);
                *(unsigned int *)((t14 + 0x38)) = (*(int *)(((*(int *)((t14 + 0x10))) + 0x38)));
                t19 = (((struct oC4_int *)(t14))->v);
                (((struct o7C_uint *)(t19))->v) = (((((struct o7C_int *)(t19))->v)) + 0xAAA);
                return 0x7C;
            }
        }
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    return FUN_0c03f346(a4, a5, a6, a7);
}

int FUN_0c0ef2e0(int a4, int a5, int a6)
{
    int stk[4];
    register float u5;
    register float u6;
    register int t12;
    register int t14;
    register int t17;
    register int t18;
    register int t21;

    *(unsigned int *)(((int)stk + 0)) = a5;
    FUN_0c187798(a4, a5, a6);
    (((struct o4_float *)(((int)stk + 0)))->v) = (((((struct o28_float *)((*(int *)((a4 + 0x10)))))->v)) - ((((struct o28_float *)(a4))->v)));
    u5 = (((struct o30_float *)(a4))->v);
    u6 = (((struct o30_float *)((*(int *)((a4 + 0x10)))))->v);
    (((struct o8_float *)((((int)stk + 0) + 0x4)))->v) = (u6 - u5);
    if ((u6 - u5) == 0.0f) {
        (((struct o8_float *)((((int)stk + 0) + 0x4)))->v) = (*(float *)0xC0EF40C);
    }
    t12 = math_atan2_angle16(((((struct o4_float *)(((int)stk + 0)))->v)), ((((struct o8_float *)((((int)stk + 0) + 0x4)))->v)));
    t14 = t12;
    if ((int)(t12 - (*(int *)((a4 + 0x38)))) > (int)0x8000) {
        t14 = (t12 - 0x10000);
    }
    t17 = *(int *)((a4 + 0x38));
    t18 = t14;
    if ((int)(t14 - (*(int *)((a4 + 0x38)))) < (int)0xFFFF8000) {
        t18 = (t14 + 0x10000);
    }
    t21 = (int)((int)(t18 - t17) / (int)(*(int *)(((int)stk + 0))));
    *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + t21);
    return t21;
}

int FUN_0c16b224(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0x1E;
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    if ((int)(short)(t0 - 1) <= 0) {
        (((struct o14_uchar *)(a4))->v) = 0x63;
    }
    t0 = FUN_0c16af86(a4, 0x4, 0x3, 0x6);
    if (t0 != 0) {
        FUN_0c037498(((((struct oC4_int *)(a4))->v)), (*(signed char *)(((0x41C + a4) + 0x1))), 0x43, (*(int *)0xC4B40CC));
    }
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    return math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
}

int FUN_0c031354(int a4, int a5, int a6, int a7)
{

    register int R2;
    register int R3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    v0_0 = a4;
    v0_3 = *(signed char *)((v0_0 + 0x14));
    v0_1 = (v0_3);
    v0_2 = (0x1);
    if ((v0_3 == 0)) goto L_C031366;
    if ((v0_1 == 1)) goto L_C031374;
    return FUN_0c03f346(v0_0, v0_2, a6, a7);
    L_C031374:;
    v0_3 = *(signed char *)((v0_0 + 0x15));
    v0_1 = (v0_3);
    if ((v0_3 == 0)) goto L_C031390;
    if ((v0_1 == 1)) goto L_C0313AC;
    if ((v0_1 == 2)) goto L_C0313C2;
    if ((v0_1 == 3)) goto L_C0313C2;
    if (!((v0_1 == 4))) goto L_C0313D6;
    v0_1 = (0x14);
    goto L_C0313C8;
    L_C0313D6:;
    return v0_1;
    L_C0313C8:;
    *(unsigned char *)((v0_0 + v0_1)) = ((*(signed char *)((v0_0 + v0_1))) + 0x1);
    goto L_C0313D6;
    L_C0313C2:;
    v0_1 = (0x15);
    goto L_C0313C8;
    L_C0313AC:;
    v0_2 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_2 - 1);
    v0_1 = ((short)(v0_2 - 1));
    if (((short)(v0_2 - 1) != 0)) goto L_C0313D6;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    v0_1 = (0x15);
    goto L_C0313D6;
    L_C031390:;
    v0_1 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_1 - 1);
    if (((short)(v0_1 - 1) != 0)) goto L_C0313AC;
    (((struct oA8_uchar *)(v0_0))->v) = v0_2;
    *(unsigned short *)((v0_0 + 0x1C)) = 0x3C;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    goto L_C0313AC;
    L_C031366:;
    *(unsigned short *)((v0_0 + 0x1C)) = v0_2;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    goto L_C031374;
}

int FUN_0c0f59c8(int a4)
{
    register int t1;

    FUN_0c0cf440((a4 + 0x28), 0x0, 0x0);
    t1 = *(signed char *)0xC542237;
    if (t1 == 7) {
        FUN_0c0e2700((a4 + 0x28), 0xF, 0xFFFFFFFF, 0x1);
    } else {
        if (t1 == 9) {
            FUN_0c0e2700((a4 + 0x28), 0x10, 0xFFFFFFFF, 0x1);
        }
    }
    FUN_0c0c2d56(a4, 0xB, (*(signed char *)((a4 + 0x1))));
    FUN_0c0c2ab6(a4, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738CA))));
    *(unsigned short *)(((0x12A + a4) + 0x4)) = 0x0;
    (((struct o12A_ushort *)(a4))->v) = 0x0;
    (((struct o12C_ushort *)(a4))->v) = 0x0;
    (((struct oAC_ushort *)(a4))->v) = 0xF;
    (((struct oA8_uchar *)(a4))->v) = 0x0;
    return 0xA8;
}

int FUN_0c0f8920(int a4, int a5, int a6, int a7)
{
    register float u0;

    u0 = *(float *)0xC0F8A18;
    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        if ((*(signed char *)((a4 + 0x2))) != 0) {
            (((struct oB0_float *)(a4))->v) = u0;
        } else {
            (((struct oB0_float *)(a4))->v) = 0.0f;
        }
    }
    if ((*(signed char *)((a4 + 0x2))) != 0) {
        (((struct oB0_float *)(a4))->v) = (((((struct oB0_float *)(a4))->v)) - (u0 / (float)(*(short *)((a4 + 0x1C)))));
        if (!(((((struct oB0_float *)(a4))->v)) > 0.0f)) {
            (((struct oB0_float *)(a4))->v) = 0.0f;
        }
    } else {
        (((struct oB0_float *)(a4))->v) = (((((struct oB0_float *)(a4))->v)) + (u0 / (float)(*(short *)((a4 + 0x1C)))));
        if (!(u0 > ((((struct oB0_float *)(a4))->v)))) {
            (((struct oB0_float *)(a4))->v) = u0;
        }
    }
    if ((int)(unsigned char)(*(signed char *)0xC541F43) >= (int)((((struct o22_short *)(a4))->v))) {
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    return 0x22;
}

int FUN_0c1250a8(int a4, int a5, int a6, int a7)
{
    register int t0;
    register float u0;

    u0 = (((struct o40_float *)(a4))->v);
    (((struct o40_float *)(a4))->v) = (u0 + 0.0352941193f);
    (((struct o48_float *)(a4))->v) = (u0 + 0.0352941193f);
    (((struct o44_float *)(a4))->v) = (u0 + 0.0352941193f);
    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        (((struct oB4_float *)(a4))->v) = (((((struct oB4_float *)(a4))->v)) * 0.800000012f);
        u0 = (((struct oB4_float *)(a4))->v);
        (((struct oBC_float *)(a4))->v) = u0;
        (((struct oB8_float *)(a4))->v) = u0;
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        if ((int)(short)(t0 - 1) <= 0) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        return (short)(t0 - 1);
    }
    t0 = 0x40;
    if (((((struct o40_float *)(a4))->v)) > (*(float *)0xC125198)) {
        (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x200);
        (((struct oBC_float *)(a4))->v) = 1.0f;
        (((struct oB8_float *)(a4))->v) = 1.0f;
        (((struct oB4_float *)(a4))->v) = 1.0f;
        *(unsigned short *)((a4 + 0x1C)) = 0x8;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t0 = 0x14;
    }
    return t0;
}

int FUN_0c1251ce(int a4, int a5, int a6, int a7)
{
    register int t0;
    register float u0;

    u0 = (((struct o40_float *)(a4))->v);
    (((struct o40_float *)(a4))->v) = (u0 + 0.0233333334f);
    (((struct o48_float *)(a4))->v) = (u0 + 0.0233333334f);
    (((struct o44_float *)(a4))->v) = (u0 + 0.0233333334f);
    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        (((struct oB4_float *)(a4))->v) = (((((struct oB4_float *)(a4))->v)) * 0.800000012f);
        u0 = (((struct oB4_float *)(a4))->v);
        (((struct oBC_float *)(a4))->v) = u0;
        (((struct oB8_float *)(a4))->v) = u0;
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        if ((int)(short)(t0 - 1) <= 0) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        return (short)(t0 - 1);
    }
    t0 = 0x40;
    if (((((struct o40_float *)(a4))->v)) > (*(float *)0xC1252AC)) {
        (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x200);
        (((struct oBC_float *)(a4))->v) = 1.0f;
        (((struct oB8_float *)(a4))->v) = 1.0f;
        (((struct oB4_float *)(a4))->v) = 1.0f;
        *(unsigned short *)((a4 + 0x1C)) = 0x8;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t0 = 0x14;
    }
    return t0;
}


int FUN_0c04f0c4(int a4, int a5, int a6, int a7)
{

    register int R2;
    register int R5;
    register float F2;
    register float F3;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    v0_1 = a4;
    v0_2 = *(signed char *)((v0_1 + 0x14));
    v0_0 = (v0_2);
    if ((v0_2 == 0)) goto L_C04F0D4;
    if ((v0_0 == 1)) goto L_C04F0E2;
    return FUN_0c03f346(v0_1, R5, a6, a7);
    L_C04F0E2:;
    (((struct o30_float *)(v0_1))->v) = (((((struct o30_float *)(v0_1))->v)) + 80.0f);
    v0_2 = *(signed char *)((v0_1 + 0x2));
    v0_0 = ((v0_2 & 0x3));
    R5 = (0x16C);
    FPUL_ = (0x42A00000);
    if (((v0_2 & 0x3) == 0)) goto L_C04F10A;
    if ((v0_0 == 1)) goto L_C04F11A;
    if ((v0_0 == 2)) goto L_C04F122;
    if (!((v0_0 == 3))) goto L_C04F144;
    v0_2 = (((struct oC4_int *)(v0_1))->v);
    v0_0 = (0x80);
    v0_1 = (v0_2);
    v0_2 = ((((((struct o80_int *)(v0_2))->v)) + R5));
    goto L_C04F138;
    L_C04F144:;
    return v0_0;
    L_C04F138:;
    *(unsigned int *)((v0_1 + v0_0)) = v0_2;
    goto L_C04F144;
    L_C04F122:;
    v0_0 = (0x80);
    v0_1 = (((((struct oC4_int *)(v0_1))->v)));
    L_C04F128:;
    v0_2 = (((*(int *)((v0_1 + v0_0))) - R5));
    goto L_C04F138;
    L_C04F11A:;
    v0_0 = (0x80);
    v0_1 = (((((struct oC4_int *)(v0_1))->v)));
    goto L_C04F128;
    L_C04F10A:;
    v0_0 = (((struct oC4_int *)(v0_1))->v);
    (((struct o80_uint *)(v0_0))->v) = (((((struct o80_int *)(v0_0))->v)) + R5);
    v0_0 = (0x80);
    goto L_C04F144;
    L_C04F0D4:;
    (((struct oA8_uchar *)(v0_1))->v) = 0x1;
    (((struct o14_uchar *)(v0_1))->v) = ((*(signed char *)((v0_1 + 0x14))) + 0x1);
    goto L_C04F0E2;
}
