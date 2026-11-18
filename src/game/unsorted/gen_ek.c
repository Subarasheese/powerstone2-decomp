/* Straight-line functions with calls and guards (batch gen_ek): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
struct o0_float { float v; };
struct o0_int { int v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12C_ushort { char p[0x12C]; unsigned short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o8_int { char p[0x8]; int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oD0_int { char p[0xD0]; int v; };
struct oD4_int { char p[0xD4]; int v; };
struct oD8_int { char p[0xD8]; int v; };
struct oDC_int { char p[0xDC]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c0588bc(int, int, int, int, int, int);
int FUN_0c05a080(int, int);
int FUN_0c0659d6(int, int, int);
int FUN_0c07e420(int, int);
int FUN_0c0d805c(int);
int FUN_0c11ab06(int);
int FUN_0c126194(int);
int FUN_0c15af80(int, int, int);
int math_atan2_angle16(int, int, int, int, float, float);
int math_atan_angle16(float);
float math_cos_angle16(int);
float math_signed_sqrt(float);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int nlAddVector3op(int, int, int);
int nlRand(void);
int nlSubVector3op(int, int, int, Stk3);
int thunk_FUN_0c05abb2(int, int);
int FUN_0c11b3ae(int a4, int a5, int a6, int a7);
int FUN_0c0d8f18(int a4, int a5, int a6, int a7, float f4, float f5);
int FUN_0c15b00c(int a4, int a5, int a6, int a7);
float FUN_0c127d88(int a4, int a5, int a6, int a7);

int FUN_0c11b3ae(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    register int t2;
    register int t3;
    register float u0;
    register float u1;

    if (((*(short *)(((*(int *)((a4 + 0x10))) + 0x1C))) == ((*(signed char *)((a4 + 0x2))) + 0x1)) && (t0 = *(signed char *)((a4 + 0x14)), (int)t0 < (int)0xA)) {
        (((struct o14_uchar *)(a4))->v) = 0x63;
    }
    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x200);
                u0 = ((((struct o0_float *)0xC2920A8)->v));
                u0 = u0 + ((((struct o18_float *)0xC2920A8)->v)) * (math_sin_angle16((*(short *)((a4 + 0x1E)))));
                (((struct o2C_float *)(a4))->v) = u0;
                t2 = (((struct o20_short *)(a4))->v);
                t3 = ((~(((~t2) + 0x1) & 0x3)) + 0x1);
                if ((int)t2 >= 0) {
                    t3 = (t2 & 0x3);
                }
                if (t3 == 0) {
                    FUN_0c11ab06(a4);
                    (((struct o22_ushort *)(a4))->v) = ((-((((struct o22_short *)(a4))->v))) + 0x1);
                }
                (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) + 0x1);
                return 0x20;
            }
            if (t0 == 80) {
                t2 = *(short *)((a4 + 0x1E));
                if (((int)t2 >= 0) && ((int)t2 <= (int)0x1E)) {
                    FUN_0c0588bc((a4 + 0x28), 0xC2920B0, (a4 + 0x4C), (*(short *)((a4 + 0x1E))), 0x1E, 0x0);
                    u0 = (((float)(*(short *)((a4 + 0x1E))) * 180.0f) / 30.0f);
                    u1 = math_sin_angle16(((int)((((u0 * 65536.0f) / 360.0f)) + (*(float *)0xC11B6F0)) & 0xFFFF));
                    u0 = ((((struct o2C_float *)(a4))->v));
                    u0 = u0 + u1 * ((((struct o1C_float *)0xC2920A8)->v));
                    (((struct o2C_float *)(a4))->v) = u0;
                    t2 = *(short *)((a4 + 0x1E));
                    *(unsigned short *)((a4 + 0x1E)) = (t2 + 0x1);
                    return (t2 + 0x1);
                }
                return FUN_0c03f346(a4, a5, a6, a7);
            }
            t2 = t0;
            if (t0 == 99) {
                *(unsigned short *)((a4 + 0x1E)) = 0x0;
                { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x4C)) = *(struct mv3 *)((a4 + 0x28)); }
                (((struct o14_uchar *)(a4))->v) = 0x50;
                t2 = 0x14;
            }
            return t2;
        }
        if (((*(short *)((a4 + 0x1E))) == 20) && (t1 = *(signed char *)((a4 + 0x2)), t1 == 0)) {
            FUN_0c05a080(0x1, 0x0);
        }
        t0 = *(short *)((a4 + 0x1E));
        if (((int)t0 >= 0) && ((int)t0 <= (int)0x1E)) {
            FUN_0c0588bc((a4 + 0x28), 0xC2920A4, 0xC292098, (*(short *)((a4 + 0x1E))), 0x1E, 0x0);
            t0 = *(short *)((a4 + 0x1E));
            if (((int)t0 >= 0) && ((int)t0 <= (int)0x1E)) {
                FUN_0c0588bc((a4 + 0x40), (a4 + 0x4C), 0xC2A0C78, (*(short *)((a4 + 0x1E))), 0x1E, 0x0);
            }
        }
        u0 = (((float)(*(short *)((a4 + 0x1E))) * 180.0f) / 30.0f);
        u1 = math_sin_angle16(((int)((((u0 * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF));
        u0 = ((((struct o2C_float *)(a4))->v));
        u0 = u0 + u1 * ((((struct o14_float *)0xC2920A8)->v));
        (((struct o2C_float *)(a4))->v) = u0;
        t0 = *(short *)((a4 + 0x1E));
        *(unsigned short *)((a4 + 0x1E)) = (t0 + 0x1);
        t1 = (short)(t0 + 0x1);
        if ((int)(short)(t0 + 0x1) <= (int)0x1E) {
        } else {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            *(unsigned short *)((a4 + 0x1E)) = 0x0;
            t1 = 0x0;
        }
        return t1;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct oAC_ushort *)(a4))->v) = 0xF;
    (((struct oA9_uchar *)(a4))->v) = 0x21;
    FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x0, 0x25, (*(int *)0xC4B410C));
    FUN_0c03744a(((((struct oC8_int *)(a4))->v)), 0x0, 0x26, (*(int *)0xC4B410C));
    FUN_0c03744a(((((struct oCC_int *)(a4))->v)), 0x0, 0x27, (*(int *)0xC4B410C));
    FUN_0c03744a(((((struct oD0_int *)(a4))->v)), 0x0, 0x28, (*(int *)0xC4B410C));
    FUN_0c03744a(((((struct oD4_int *)(a4))->v)), 0x0, 0x29, (*(int *)0xC4B410C));
    FUN_0c03744a(((((struct oD8_int *)(a4))->v)), 0x0, 0x30, (*(int *)0xC4B410C));
    return (FUN_0c03744a(((((struct oDC_int *)(a4))->v)), 0x0, 0x31, (*(int *)0xC4B410C)));
}

int FUN_0c0d8f18(int a4, int a5, int a6, int a7, float f4, float f5)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;

    if ((int)(*(signed char *)0xC54223C) > (int)0x1) {
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        t0 = *(signed char *)((a4 + 0x15));
        switch (t0) {
        case 0:
            t0 = FUN_0c0659d6(a4, 0x0, 0x1);
            if (t0 == 0) {
            } else {
                thunk_FUN_0c05abb2(0x41, 0x0);
                (((struct o50_float *)(a4))->v) = -10.0f;
                *(unsigned short *)((a4 + 0x1C)) = 0x1E;
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            }
            break;
        case 1:
            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
            (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) - (((((struct o50_float *)(a4))->v)) / 1.29999995f));
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
            if ((short)(t0 - 1) != 0) {
            } else {
                thunk_FUN_0c05abb2(0x41, 0x0);
                (((struct o50_float *)(a4))->v) = -10.0f;
                *(unsigned short *)((a4 + 0x1C)) = 0xF;
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            }
            break;
        case 2:
            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
            (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) - (((((struct o50_float *)(a4))->v)) / 1.29999995f));
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
            if ((short)(t0 - 1) == 0) {
                thunk_FUN_0c05abb2(0x41, 0x0);
                (((struct o50_float *)(a4))->v) = -10.0f;
                *(unsigned short *)((a4 + 0x1C)) = 0xF;
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            }
            break;
        case 3:
            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
            (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) - (((((struct o50_float *)(a4))->v)) / 1.29999995f));
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
            if ((short)(t0 - 1) == 0) {
                thunk_FUN_0c05abb2(0x41, 0x0);
                (((struct o50_float *)(a4))->v) = 0.0f;
                (((struct o5C_float *)(a4))->v) = -1.0f;
                *(unsigned short *)((a4 + 0x1C)) = 0xF;
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            }
            break;
        case 4:
            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
            (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
            if ((short)(t0 - 1) == 0) {
                FUN_0c0d805c(a4);
                (((struct oA8_uchar *)(a4))->v) = 0x0;
                (((struct o12E_ushort *)(a4))->v) = 0xFCF;
                (((struct o12C_ushort *)(a4))->v) = 0x0;
                (((struct o12A_ushort *)(a4))->v) = 0xF;
                (((struct o50_float *)(a4))->v) = 0.0f;
                (((struct o5C_float *)(a4))->v) = -1.0f;
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            }
            break;
        case 5:
            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
            (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
            break;
        }
        u0 = (((struct o2C_float *)(a4))->v);
        u1 = *(float *)0xC54109C;
        if (u0 > (u1 + -1000.0f)) {
            t0 = 0xC0D9230;
            if (!((u1 + 1000.0f) > u0)) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t0 = 0x14;
            }
            t1 = t0;
        } else {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t1 = 0x14;
        }
        return t1;
    }
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        t1 = t0;
        if (t0 != 1) {
        } else {
            u0 = (((struct o2C_float *)(a4))->v);
            u1 = *(float *)0xC54109C;
            t0 = 0x2C;
            if (!(u0 > (u1 + -1000.0f))) {
            } else {
                t2 = 0xC0D9054;
                if (!((u1 + 1000.0f) > u0)) {
                } else {
                    (((struct oAC_ushort *)(a4))->v) = 0xF;
                    (((struct oA9_uchar *)(a4))->v) = 0x21;
                    (((struct oA8_uchar *)(a4))->v) = 0x1;
                    (((struct o12E_ushort *)(a4))->v) = 0xFCF;
                    (((struct o12C_ushort *)(a4))->v) = 0x0;
                    (((struct o12A_ushort *)(a4))->v) = 0x0;
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    (((struct o15_uchar *)(a4))->v) = 0x0;
                    t2 = 0x15;
                }
                t0 = t2;
            }
            t1 = t0;
        }
        t0 = t1;
    } else {
        (((struct oAC_ushort *)(a4))->v) = 0x0;
        (((struct oA9_uchar *)(a4))->v) = 0x0;
        (((struct oA8_uchar *)(a4))->v) = 0x0;
        (((struct o12E_ushort *)(a4))->v) = 0x0;
        (((struct o12C_ushort *)(a4))->v) = 0x0;
        (((struct o12A_ushort *)(a4))->v) = 0x0;
        FUN_0c07e420(a4, 0x3);
        t1 = *(signed char *)((a4 + 0x2));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)((0xC287918 + (((t1 << 1) + t1) << 2))); }
        *(unsigned int *)((a4 + 0x38)) = (int)(((float)(*(int *)((0xC287948 + ((*(signed char *)((a4 + 0x2))) << 2)))) * 65536.0f) / 360.0f);
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        u0 = (((struct o2C_float *)(a4))->v);
        u1 = *(float *)0xC54109C;
        t1 = 0x2C;
        if (!(u0 > (u1 + -1000.0f))) {
        } else {
            t2 = 0xC0D9054;
            if (!((u1 + 1000.0f) > u0)) {
            } else {
                (((struct oAC_ushort *)(a4))->v) = 0xF;
                (((struct oA9_uchar *)(a4))->v) = 0x21;
                (((struct oA8_uchar *)(a4))->v) = 0x1;
                (((struct o12E_ushort *)(a4))->v) = 0xFCF;
                (((struct o12C_ushort *)(a4))->v) = 0x0;
                (((struct o12A_ushort *)(a4))->v) = 0x0;
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                (((struct o15_uchar *)(a4))->v) = 0x0;
                t2 = 0x15;
            }
            t1 = t2;
        }
        t0 = t1;
    }
    return t0;
}

int FUN_0c15b00c(int a4, int a5, int a6, int a7)
{
    int stk[17];
    register int t0;
    register int t2;
    register int t4;
    register int t5;
    register int t7;
    register int t8;
    register int t10;
    register int t11;
    register float u13;
    register int t16;
    register int t17;
    register float u22;
    register float u23;
    register float u28;
    register float u29;
    register float t32;
    register float u39;
    register float u40;
    register float u41;
    register int t54;
    register int t68;
    register int t69;
    register int t71;
    register int t72;
    register int t74;
    register int t75;
    register float u77;
    register int t80;
    register int t81;
    register float u86;
    register float u87;
    register float u92;
    register float u93;
    register float t96;
    register float u103;
    register float u104;
    register float u105;
    register int t108;
    register int t110;
    register int t111;
    register int t113;
    register int t114;
    register int t116;
    register int t117;
    register float u119;
    register int t122;
    register int t123;
    register float u128;
    register float u129;
    register float u134;
    register float u135;
    register float t138;
    register float u145;
    register float u146;
    register float u147;
    register int t160;
    register int t165;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 == 1) {
            t2 = (((struct o4_int *)0xC2A2ACC)->v);
            if (((int)((int)(*(short *)((a4 + 0x1C))) % (int)t2)) != (t2 - 1)) {
            } else {
                *(unsigned int *)(((int)stk + 16)) = (((int)stk + 4) + 0x10);
                t4 = nlRand();
                t5 = ((~(((~t4) + 0x1) & 0xF)) + 0x1);
                if ((int)t4 >= 0) {
                    t5 = (t4 & 0xF);
                }
                *(unsigned int *)(((((int)stk + 4) + 0x10) + 0x0)) = (((t5 << 8) << 2) << 2);
                *(unsigned int *)(((int)stk + 4)) = ((((int)stk + 4) + 0x10) + 0x4);
                t7 = nlRand();
                t8 = ((~(((~t7) + 0x1) & 0xF)) + 0x1);
                if ((int)t7 >= 0) {
                    t8 = (t7 & 0xF);
                }
                *(unsigned int *)((((((int)stk + 4) + 0x10) + 0x4) + 0x0)) = (((t8 << 8) << 2) << 2);
                *(unsigned int *)(((int)stk + 8)) = ((((int)stk + 4) + 0x10) + 0x8);
                t10 = nlRand();
                t11 = ((~(((~t10) + 0x1) & 0xF)) + 0x1);
                if ((int)t10 >= 0) {
                    t11 = (t10 & 0xF);
                }
                *(unsigned int *)((((((int)stk + 4) + 0x10) + 0x8) + 0x0)) = (((t11 << 8) << 2) << 2);
                *(unsigned int *)(((int)stk + 12)) = 0xC2A2AF8;
                u13 = (((struct o2C_float *)0xC2A2ACC)->v);
                t16 = (int)((int)(nlRand()) % (int)((((struct o8_int *)0xC2A2ACC)->v)));
                t17 = (((struct o8_int *)0xC2A2ACC)->v);
                u22 = (((u13 * (float)t16) / (float)t17) / (1.0f + 1.0f));
                u23 = ((((struct o28_float *)(a4))->v));
                u23 = u23 + u22 * (math_cos_angle16((*(int *)(((*(int *)(((int)stk + 16))) + 0x0)))));
                *(float *)(((int)stk + 56)) = u23;
                u28 = (((u13 * (float)t16) / (float)t17) / (1.0f + 1.0f));
                u29 = ((((struct o2C_float *)(a4))->v));
                u29 = u29 + u28 * (math_sin_angle16((*(int *)(((*(int *)(((int)stk + 4))) + 0x0)))));
                *(float *)(((int)stk + 60)) = u29;
                t32 = math_sin_angle16((*(int *)(((*(int *)(((int)stk + 8))) + 0x0))));
                *(float *)(((int)stk + 0)) = t32;
                u39 = (((struct o30_float *)(a4))->v);
                u40 = (((*(float *)(((*(int *)(((int)stk + 12))) + 0x0))) * (float)((int)((int)(nlRand()) % (int)((((struct o8_int *)0xC2A2ACC)->v))))) / (float)((((struct o8_int *)0xC2A2ACC)->v)));
                u41 = u39;
                u41 = u41 + u40 * t32;
                *(float *)(((int)stk + 64)) = u41;
                *(float *)(((int)stk + 44)) = 0.0f;
                *(float *)(((int)stk + 48)) = 0.0f;
                *(float *)(((int)stk + 52)) = 0.0f;
                { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x1C)) = *(struct mv3 *)((((int)stk + 4) + 0x28)); }
                FUN_0c15af80((((int)stk + 4) + 0x34), (((int)stk + 4) + 0x28), (((int)stk + 4) + 0x1C));
            }
            math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
            t54 = *(short *)((a4 + 0x1C));
            if (t54 == ((((struct o0_int *)0xC2A2ACC)->v))) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t165 = 0x14;
            } else {
                *(unsigned short *)((a4 + 0x1C)) = (t54 + 0x1);
                t165 = (t54 + 0x1);
            }
        } else {
            t165 = (FUN_0c03f346(a4, a5, a6, a7));
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(unsigned int *)(((int)stk + 4)) = (((int)stk + 4) + 0x10);
        t68 = nlRand();
        t69 = ((~(((~t68) + 0x1) & 0xF)) + 0x1);
        if ((int)t68 >= 0) {
            t69 = (t68 & 0xF);
        }
        *(unsigned int *)(((((int)stk + 4) + 0x10) + 0x0)) = (((t69 << 8) << 2) << 2);
        *(unsigned int *)(((int)stk + 8)) = ((((int)stk + 4) + 0x10) + 0x4);
        t71 = nlRand();
        t72 = ((~(((~t71) + 0x1) & 0xF)) + 0x1);
        if ((int)t71 >= 0) {
            t72 = (t71 & 0xF);
        }
        *(unsigned int *)((((((int)stk + 4) + 0x10) + 0x4) + 0x0)) = (((t72 << 8) << 2) << 2);
        *(unsigned int *)(((int)stk + 12)) = ((((int)stk + 4) + 0x10) + 0x8);
        t74 = nlRand();
        t75 = ((~(((~t74) + 0x1) & 0xF)) + 0x1);
        if ((int)t74 >= 0) {
            t75 = (t74 & 0xF);
        }
        *(unsigned int *)((((((int)stk + 4) + 0x10) + 0x8) + 0x0)) = (((t75 << 8) << 2) << 2);
        *(unsigned int *)(((int)stk + 16)) = 0xC2A2AF8;
        u77 = (((struct o2C_float *)0xC2A2ACC)->v);
        t80 = (int)((int)(nlRand()) % (int)((((struct o8_int *)0xC2A2ACC)->v)));
        t81 = (((struct o8_int *)0xC2A2ACC)->v);
        u86 = (((u77 * (float)t80) / (float)t81) / (1.0f + 1.0f));
        u87 = ((((struct o28_float *)(a4))->v));
        u87 = u87 + u86 * (math_cos_angle16((*(int *)(((*(int *)(((int)stk + 4))) + 0x0)))));
        *(float *)(((int)stk + 56)) = u87;
        u92 = (((u77 * (float)t80) / (float)t81) / (1.0f + 1.0f));
        u93 = ((((struct o2C_float *)(a4))->v));
        u93 = u93 + u92 * (math_sin_angle16((*(int *)(((*(int *)(((int)stk + 8))) + 0x0)))));
        *(float *)(((int)stk + 60)) = u93;
        t96 = math_sin_angle16((*(int *)(((*(int *)(((int)stk + 12))) + 0x0))));
        *(float *)(((int)stk + 0)) = t96;
        u103 = (((struct o30_float *)(a4))->v);
        u104 = (((*(float *)(((*(int *)(((int)stk + 16))) + 0x0))) * (float)((int)((int)(nlRand()) % (int)((((struct o8_int *)0xC2A2ACC)->v))))) / (float)((((struct o8_int *)0xC2A2ACC)->v)));
        u105 = u103;
        u105 = u105 + u104 * t96;
        *(float *)(((int)stk + 64)) = u105;
        *(float *)(((int)stk + 44)) = 0.0f;
        *(float *)(((int)stk + 48)) = 0.0f;
        *(float *)(((int)stk + 52)) = 0.0f;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x1C)) = *(struct mv3 *)((((int)stk + 4) + 0x28)); }
        FUN_0c15af80((((int)stk + 4) + 0x34), (((int)stk + 4) + 0x28), (((int)stk + 4) + 0x1C));
        t108 = (((struct o4_int *)0xC2A2ACC)->v);
        if (((int)((int)(*(short *)((a4 + 0x1C))) % (int)t108)) != (t108 - 1)) {
        } else {
            *(unsigned int *)(((int)stk + 16)) = (((int)stk + 4) + 0x10);
            t110 = nlRand();
            t111 = ((~(((~t110) + 0x1) & 0xF)) + 0x1);
            if ((int)t110 >= 0) {
                t111 = (t110 & 0xF);
            }
            *(unsigned int *)(((((int)stk + 4) + 0x10) + 0x0)) = (((t111 << 8) << 2) << 2);
            *(unsigned int *)(((int)stk + 4)) = ((((int)stk + 4) + 0x10) + 0x4);
            t113 = nlRand();
            t114 = ((~(((~t113) + 0x1) & 0xF)) + 0x1);
            if ((int)t113 >= 0) {
                t114 = (t113 & 0xF);
            }
            *(unsigned int *)((((((int)stk + 4) + 0x10) + 0x4) + 0x0)) = (((t114 << 8) << 2) << 2);
            *(unsigned int *)(((int)stk + 8)) = ((((int)stk + 4) + 0x10) + 0x8);
            t116 = nlRand();
            t117 = ((~(((~t116) + 0x1) & 0xF)) + 0x1);
            if ((int)t116 >= 0) {
                t117 = (t116 & 0xF);
            }
            *(unsigned int *)((((((int)stk + 4) + 0x10) + 0x8) + 0x0)) = (((t117 << 8) << 2) << 2);
            *(unsigned int *)(((int)stk + 12)) = 0xC2A2AF8;
            u119 = (((struct o2C_float *)0xC2A2ACC)->v);
            t122 = (int)((int)(nlRand()) % (int)((((struct o8_int *)0xC2A2ACC)->v)));
            t123 = (((struct o8_int *)0xC2A2ACC)->v);
            u128 = (((u119 * (float)t122) / (float)t123) / (1.0f + 1.0f));
            u129 = ((((struct o28_float *)(a4))->v));
            u129 = u129 + u128 * (math_cos_angle16((*(int *)(((*(int *)(((int)stk + 16))) + 0x0)))));
            *(float *)(((int)stk + 56)) = u129;
            u134 = (((u119 * (float)t122) / (float)t123) / (1.0f + 1.0f));
            u135 = ((((struct o2C_float *)(a4))->v));
            u135 = u135 + u134 * (math_sin_angle16((*(int *)(((*(int *)(((int)stk + 4))) + 0x0)))));
            *(float *)(((int)stk + 60)) = u135;
            t138 = math_sin_angle16((*(int *)(((*(int *)(((int)stk + 8))) + 0x0))));
            *(float *)(((int)stk + 0)) = t138;
            u145 = (((struct o30_float *)(a4))->v);
            u146 = (((*(float *)(((*(int *)(((int)stk + 12))) + 0x0))) * (float)((int)((int)(nlRand()) % (int)((((struct o8_int *)0xC2A2ACC)->v))))) / (float)((((struct o8_int *)0xC2A2ACC)->v)));
            u147 = u145;
            u147 = u147 + u146 * t138;
            *(float *)(((int)stk + 64)) = u147;
            *(float *)(((int)stk + 44)) = 0.0f;
            *(float *)(((int)stk + 48)) = 0.0f;
            *(float *)(((int)stk + 52)) = 0.0f;
            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x1C)) = *(struct mv3 *)((((int)stk + 4) + 0x28)); }
            FUN_0c15af80((((int)stk + 4) + 0x34), (((int)stk + 4) + 0x28), (((int)stk + 4) + 0x1C));
        }
        math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
        t160 = *(short *)((a4 + 0x1C));
        if (t160 == ((((struct o0_int *)0xC2A2ACC)->v))) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t165 = 0x14;
        } else {
            *(unsigned short *)((a4 + 0x1C)) = (t160 + 0x1);
            t165 = (t160 + 0x1);
        }
    }
    return t165;
}

float FUN_0c127d88(int a4, int a5, int a6, int a7)
{
    int stk[3];

    register int R1;
    register int R2;
    register int R3;
    register int R8;
    register int R9;
    register int R10;
    register int R11;
    int R12;
    register float F0;
    register float F2;
    register float F3;
    register float F4;
    register float F13;
    register float F14;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    v0_1 = a4;
    v0_5 = a5;
    v0_3 = a6;
    v0_4 = a7;
    v0_7 = *(signed char *)((v0_1 + 0x14));
    v0_6 = (v0_7);
    v0_2 = (0x1);
    v0_0 = (v0_1);
    v0_1 = ((*(int *)((v0_1 + 0x10))));
    if ((v0_7 == 0)) goto L_C127DFC;
    if ((v0_6 == 1)) goto L_C127E28;
    if ((v0_6 != 2)) goto L_C127DB2;
    w0_0 = (((struct o40_float *)(v0_0))->v);
    (((struct o40_float *)(v0_0))->v) = (w0_0 - 0.100000001f);
    (((struct o48_float *)(v0_0))->v) = (w0_0 - 0.100000001f);
    (((struct o44_float *)(v0_0))->v) = (w0_0 - 0.100000001f);
    v0_1 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_1 - 1);
    v0_6 = ((short)(v0_1 - 1));
    FPUL_ = (0x3DCCCCCD);
    if (((short)(v0_1 - 1) != 0)) goto L_C12806A;
    (((struct o14_uchar *)(v0_0))->v) = 0x4;
    v0_6 = (0x14);
    L_C12806A:;
    return F0;
    L_C127DB2:;
    if ((v0_6 != 3)) goto L_C127DBA;
    FUN_0c126194(v0_0);
    L_C128064:;
    v0_6 = ((FUN_0c03f346(v0_0, v0_5, v0_3, v0_4)));
    goto L_C12806A;
    L_C127DBA:;
    goto L_C128064;
    L_C127E28:;
    v0_5 = (((struct oC4_int *)(v0_0))->v);
    (((struct o7C_uint *)(v0_5))->v) = (((((struct o7C_int *)(v0_5))->v)) + 0x11C7);
    v0_6 = (0x20);
    if (!((((((struct o20_short *)(v0_0))->v)) != 0))) goto L_C127FB8;
    *(unsigned short *)((v0_0 + v0_6)) = ((*(short *)((v0_0 + v0_6))) - 1);
    v0_5 = *(short *)((v0_0 + 0x1E));
    *(unsigned short *)((v0_0 + 0x1E)) = (v0_5 - 1);
    v0_6 = ((short)(v0_5 - 1));
    if (((int)(short)(v0_5 - 1) <= 0)) goto L_C127E58;
    goto L_C127FB8;
    L_C127FB8:;
    nlAddVector3op((v0_0 + 0x28), (v0_0 + 0x28), (v0_0 + 0x4C));
    *(unsigned short *)((v0_0 + 0x1C)) = ((*(short *)((v0_0 + 0x1C))) - 1);
    v0_1 = (0x0);
    if (((*(short *)((v0_0 + 0x1C))) != 0)) goto L_C127FE8;
    (((struct o12A_ushort *)(v0_0))->v) = v0_1;
    (((struct o12E_ushort *)(v0_0))->v) = v0_1;
    (((struct o14_uchar *)(v0_0))->v) = 0x2;
    *(unsigned short *)((v0_0 + 0x1C)) = 0xA;
    L_C127FE8:;
    if (((*(signed char *)((v0_0 + 0x131))) != 0)) goto L_C127FF8;
    v0_6 = (0x132);
    if (((*(signed char *)((v0_0 + 0x132))) == 0)) goto L_C12806A;
    L_C127FF8:;
    (((struct o12A_ushort *)(v0_0))->v) = v0_1;
    (((struct o12E_ushort *)(v0_0))->v) = v0_1;
    (((struct o14_uchar *)(v0_0))->v) = 0x3;
    v0_6 = (0x14);
    goto L_C12806A;
    L_C127E58:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)((0x380C + v0_1)); }
    *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) + 100.0f);
    nlSubVector3op(((int)stk + 0), ((int)stk + 0), (v0_0 + 0x28), *(Stk3 *)(((int)stk + 0)));
    w0_0 = (9.99999997e-07f);
    if (((*(float *)(((int)stk + 0))) != 0.0f)) goto L_C127E8C;
    *(float *)(((int)stk + 0)) = w0_0;
    L_C127E8C:;
    v0_5 = !(0.0f > (*(float *)(((int)stk + 0))));
    R12 = (0x8000);
    v0_1 = ((0xFFFF & (math_atan_angle16(((-(*(float *)(((int)stk + 8)))) / (*(float *)(((int)stk + 0))))))));
    if (v0_5) goto L_C127EAC;
    v0_1 = ((v0_1 + R12));
    L_C127EAC:;
    v0_5 = *(int *)((v0_0 + 0x38));
    v0_6 = ((unsigned short)((unsigned short)(0x4000 + v0_1) - v0_5) & R12) == 0;
    v0_1 = ((unsigned short)((unsigned short)(0x4000 + v0_1) - v0_5));
    if (v0_6) goto L_C127EC2;
    v0_1 = ((v0_1 | 0xFFFF0000));
    L_C127EC2:;
    if (((int)v0_1 <= 0)) goto L_C127F00;
    v0_5 = (0xAAA);
    if (((int)v0_1 <= (int)0xAAA)) goto L_C127F08;
    v0_1 = (v0_5);
    L_C127F08:;
    *(unsigned int *)((v0_0 + 0x38)) = (unsigned short)((*(int *)((v0_0 + 0x38))) + v0_1);
    w0_2 = *(float *)(((int)stk + 8));
    w0_1 = *(float *)(((int)stk + 0));
    w0_2 = (w0_2 * w0_2);
    w0_2 = w0_2 + w0_1 * w0_1;
    w0_1 = math_signed_sqrt(w0_2);
    w0_2 = (w0_1);
    if ((w0_1 != 0.0f)) goto L_C127F2E;
    w0_2 = (w0_0);
    L_C127F2E:;
    v0_3 = math_atan2_angle16(v0_1, v0_5, v0_3, v0_4, (-(*(float *)(((int)stk + 4)))), w0_2);
    v0_4 = *(int *)((v0_0 + 0x34));
    v0_1 = ((unsigned short)(v0_3 - v0_4));
    if (((R12 & (unsigned short)(v0_3 - v0_4)) == 0)) goto L_C127F48;
    v0_1 = ((v0_1 | 0xFFFF0000));
    L_C127F48:;
    if (((int)v0_1 <= 0)) goto L_C127F56;
    v0_5 = (0x71C);
    if (((int)v0_1 <= (int)0x71C)) goto L_C127F5E;
    v0_1 = (v0_5);
    L_C127F5E:;
    *(unsigned int *)((v0_0 + 0x34)) = (unsigned short)((*(int *)((v0_0 + 0x34))) + v0_1);
    *(unsigned short *)((v0_0 + 0x1E)) = v0_2;
    (((struct o58_float *)(v0_0))->v) = (((((struct o58_float *)(v0_0))->v)) + 0.277777791f);
    (((struct o50_float *)(v0_0))->v) = ((math_sin_angle16((-(*(int *)((v0_0 + 0x34)))))) * ((((struct o58_float *)(v0_0))->v)));
    (((struct o4C_float *)(v0_0))->v) = ((math_cos_angle16(((-(*(int *)((v0_0 + 0x38)))) + 0x14000))) * ((((struct o58_float *)(v0_0))->v)));
    (((struct o54_float *)(v0_0))->v) = ((math_sin_angle16(((-(*(int *)((v0_0 + 0x38)))) + 0x14000))) * ((((struct o58_float *)(v0_0))->v)));
    goto L_C127FB8;
    L_C127F56:;
    v0_5 = (0xFFFFF8E4);
    if (((int)v0_1 >= (int)0xFFFFF8E4)) goto L_C127F5E;
    v0_1 = (v0_5);
    goto L_C127F5E;
    L_C127F00:;
    v0_5 = (0xFFFFF556);
    if (((int)v0_1 >= (int)0xFFFFF556)) goto L_C127F08;
    v0_1 = (v0_5);
    goto L_C127F08;
    L_C127DFC:;
    *(unsigned short *)((v0_0 + 0x1C)) = 0x5A;
    *(unsigned short *)((v0_0 + 0x1E)) = 0x19;
    (((struct o20_ushort *)(v0_0))->v) = 0x28;
    (((struct oA8_uchar *)(v0_0))->v) = v0_2;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    (((struct o12A_ushort *)(v0_0))->v) = (~((int)v0_2 << (int)(*(signed char *)((v0_0 + 0x1)))));
    (((struct o12E_ushort *)(v0_0))->v) = 0xFFFFFFF0;
    goto L_C127E28;
}
