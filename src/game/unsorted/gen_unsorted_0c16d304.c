/* game/unsorted: functions 0C16D304-0C16DD0E, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o8_float { char p[0x8]; float v; };
int FUN_0c037ac4(int, int, int, int, int);
int FUN_0c037bf6(int);
int FUN_0c038362(int);
int FUN_0c059e0e(int, int, int);
int FUN_0c064f80(int);
int FUN_0c06588a(int, int, int, int);
int FUN_0c07e3ae(int, int);
int math_atan2_angle16(int, int, float, float);
int nlCalcPoint(int, int);
int nlRotateAY(int);
int nlUnitMatrix(void);
int math_vec3_accumulate(int, int);
float FUN_0c0e2240(int, int);
int FUN_0c187798(int, int, int);
int FUN_0c16d304(int a4);
int FUN_0c16d330(int a4);
int FUN_0c16d384(int a4);
int FUN_0c16d3d6(int a4);
int FUN_0c16d404(int a4, int a5, int a6, float f4);
int FUN_0c16d468(int a4, int a5);
int FUN_0c16d4ec(int a4);
float FUN_0c16d538(int a4, float f4);
int FUN_0c16d5b4(int a4);
int FUN_0c16d72c(int a4);
int FUN_0c16d832(int a4, int a5, int a6, int a7, float f4);
int FUN_0c16da30(int a4);
int FUN_0c16dabc(int a4);
int FUN_0c16db1c(int a4);
int FUN_0c16db88(int a4);
int FUN_0c16dba8(int a4);

int FUN_0c16d304(int a4)
{
    if ((*(short *)(((0x41C + a4) + 0x2))) == 0) {
        (((struct o15_uchar *)(a4))->v) = 0x4;
        (((struct o16_uchar *)(a4))->v) = 0x0;
        (((struct o17_uchar *)(a4))->v) = 0x0;
        *(volatile signed char *)((a4 + 0x2));
        *(unsigned short *)(((0x41C + a4) + 0x2)) = 0xB4;
        return 0x1;
    }
    return 0x0;
}

int FUN_0c16d330(int a4)
{
    register float t1;

    t1 = FUN_0c0e2240((a4 + 0x28), ((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532498) + 0x28));
    *(volatile signed char *)((a4 + 0x2));
    if ((*(float *)0xC16D44C) > t1) {
        (((struct o15_uchar *)(a4))->v) = 0x1;
        (((struct o16_uchar *)(a4))->v) = 0x0;
        (((struct o17_uchar *)(a4))->v) = 0x0;
        return 0x1;
    }
    return 0x0;
}

int FUN_0c16d384(int a4)
{
    register float t1;

    t1 = FUN_0c0e2240((a4 + 0x28), ((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532498) + 0x28));
    *(volatile signed char *)((a4 + 0x2));
    if (t1 > (*(float *)0xC16D450)) {
        (((struct o15_uchar *)(a4))->v) = 0x2;
        (((struct o16_uchar *)(a4))->v) = 0x0;
        (((struct o17_uchar *)(a4))->v) = 0x0;
        return 0x1;
    }
    return 0x0;
}

int FUN_0c16d3d6(int a4)
{
    if ((*(signed char *)(((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532498) + 0x3715))) == 5) {
        (((struct o15_uchar *)(a4))->v) = 0x3;
        (((struct o16_uchar *)(a4))->v) = 0x0;
        (((struct o17_uchar *)(a4))->v) = 0x0;
        return 0x1;
    }
    return 0x0;
}

int FUN_0c16d404(int a4, int a5, int a6, float f4)
{
    int stk[5];

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 0)) = a5;
    FUN_0c187798(a4, a5, a6);
    *(float *)(((int)stk + 16)) = f4;
    nlUnitMatrix();
    nlRotateAY((*(int *)(((*(int *)(((int)stk + 4))) + 0x38))));
    return (nlCalcPoint((((int)stk + 0) + 0x8), (*(int *)(((int)stk + 0)))));
}

int FUN_0c16d468(int a4, int a5)
{
    int stk[3];
    register float u4;
    register float u5;
    int t11;
    register int t13;
    register int t16;
    register int t17;
    register int t19;

    *(float *)((((int)stk + 0) + 0x0)) = ((*(float *)((a5 + 0x0))) - ((((struct o28_float *)(a4))->v)));
    (((struct o4_float *)(((int)stk + 0)))->v) = (((((struct o4_float *)(a5))->v)) - ((((struct o2C_float *)(a4))->v)));
    u4 = (((struct o30_float *)(a4))->v);
    u5 = (((struct o8_float *)(a5))->v);
    (((struct o8_float *)(((int)stk + 0)))->v) = (u5 - u4);
    if ((u5 - u4) == 0.0f) {
        (((struct o8_float *)(((int)stk + 0)))->v) = (*(float *)0xC16D58C);
    }
    t11 = math_atan2_angle16(a4, a5, (*(float *)((((int)stk + 0) + 0x0))), ((((struct o8_float *)(((int)stk + 0)))->v)));
    t13 = (0xFFFF & t11);
    if ((int)((0xFFFF & t11) - (*(int *)((a4 + 0x38)))) > (int)0x8000) {
        t13 = ((0xFFFF & t11) - 0x10000);
    }
    t16 = *(int *)((a4 + 0x38));
    t17 = t13;
    if ((int)(t13 - (*(int *)((a4 + 0x38)))) < (int)0xFFFF8000) {
        t17 = (t13 + 0x10000);
    }
    t19 = (int)((int)(t17 - t16) / (int)0xA);
    *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + t19);
    return t19;
}

int FUN_0c16d4ec(int a4)
{
    register int t0;
    register float u4;

    t0 = FUN_0c064f80(a4);
    if (t0 != 0) {
        (((struct o50_float *)(a4))->v) = 0.0f;
    }
    u4 = (((struct o0_float *)0xC16D5A8)->v);
    if (u4 > ((((struct o50_float *)(a4))->v))) {
        (((struct o50_float *)(a4))->v) = u4;
    }
    (((struct o5C_float *)(a4))->v) = ((((struct o4_float *)0xC16D5A8)->v));
    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
    (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
    return 0x50;
}

float FUN_0c16d538(int a4, float f4)
{
    int stk[3];
    register int t2;
    register float u3;

    *(float *)(((int)stk + 8)) = f4;
    *(float *)(((int)stk + 4)) = ((((struct o2C_float *)(a4))->v));
    *(int *)((int)stk + 0) = 0x8000;
    t2 = FUN_0c06588a(a4, (((int)stk + 0) + 0x4), 0xF0, (*(int *)((a4 + 0x38))));
    if (t2 != 0) {
        u3 = *(float *)(((int)stk + 4));
        if ((((((struct o2C_float *)(a4))->v)) + (*(float *)(((int)stk + 8)))) > u3) {
            return u3;
        }
        return -1.0f;
    }
    return -1.0f;
}

int FUN_0c16d5b4(int a4)
{
    if ((*(signed char *)((a4 + 0x16))) == 0) {
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        FUN_0c037ac4(a4, 0x0, 0xFFFFFFFF, 0x7, 0x3);
        (((struct o54_float *)(a4))->v) = 0.0f;
        (((struct o4C_float *)(a4))->v) = 0.0f;
    }
    FUN_0c037bf6(a4);
    FUN_0c038362(a4);
    FUN_0c16d384(a4);
    FUN_0c16d3d6(a4);
    FUN_0c16d304(a4);
    return FUN_0c16d4ec(a4);
}

int FUN_0c16d72c(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            (((struct o15_uchar *)(a4))->v) = 0x2;
            (((struct o16_uchar *)(a4))->v) = 0x0;
            return 0x16;
        }
    } else {
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        (((struct o17_uchar *)(a4))->v) = 0x0;
        FUN_0c037ac4(a4, 0x0, 0xFFFFFFFF, 0x7, 0x6);
        (((struct o50_float *)(a4))->v) = (*(float *)0xC16D898);
        (((struct o5C_float *)(a4))->v) = -1.0f;
    }
    t0 = *(signed char *)((a4 + 0x17));
    switch (t0) {
    case 0:
        t0 = FUN_0c037bf6(a4);
        if ((unsigned char)t0 != 0) {
            (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
            FUN_0c037ac4(a4, 0x0, 0xFFFFFFFF, 0x7, 0x7);
        }
        FUN_0c038362(a4);
        break;
    case 1:
        FUN_0c037bf6(a4);
        FUN_0c038362(a4);
        t0 = FUN_0c064f80(a4);
        if (t0 != 0) {
            (((struct o50_float *)(a4))->v) = 0.0f;
            (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
            FUN_0c037ac4(a4, 0x0, 0xFFFFFFFF, 0x7, 0x8);
        }
        break;
    case 2:
        t0 = FUN_0c037bf6(a4);
        if ((unsigned char)t0 != 0) {
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        }
        break;
    }
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    return math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
}

int FUN_0c16d832(int a4, int a5, int a6, int a7, float f4)
{
    int stk[4];

    register int R1;
    register int R2;
    register int R3;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register float w0_0;
    v0_2 = a4;
    v0_3 = a5;
    v0_1 = a6;
    v0_0 = a7;
    w0_0 = f4;
    v0_5 = *(signed char *)((v0_2 + 0x16));
    v0_3 = (v0_5);
    v0_0 = (0xC037AC4);
    v0_4 = (0x0);
    v0_0 = (v0_2);
    if ((v0_5 == 0)) goto L_C16D854;
    if ((v0_3 == 1)) goto L_C16D876;
    (((struct o15_uchar *)(v0_0))->v) = 0x2;
    (((struct o16_uchar *)(v0_0))->v) = v0_4;
    v0_3 = (0x16);
    L_C16DA22:;
    return v0_3;
    L_C16D876:;
    v0_2 = *(signed char *)((v0_0 + 0x17));
    v0_3 = (v0_2);
    v0_5 = (0xC037BF6);
    if ((v0_2 == 0)) goto L_C16D8AC;
    if ((v0_3 == 1)) goto L_C16D8F2;
    if ((v0_3 == 2)) goto L_C16D976;
    if ((v0_3 != 3)) goto L_C16D890;
    v0_1 = (unsigned char)(FUN_0c037bf6(v0_0)) == 0;
    if (v0_1) goto L_C16DA0E;
    (((struct o16_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x16))) + 0x1);
    L_C16DA0E:;
    v0_3 = ((FUN_0c038362(v0_0)));
    goto L_C16DA22;
    L_C16D890:;
    goto L_C16DA22;
    L_C16D976:;
    if (((*(signed char *)((v0_0 + 0x131))) == 0)) goto L_C16D98C;
    (((struct o54_float *)(v0_0))->v) = 0.0f;
    (((struct o4C_float *)(v0_0))->v) = 0.0f;
    (((struct o12A_ushort *)(v0_0))->v) = v0_4;
    L_C16D98C:;
    v0_1 = (((struct o20_short *)(v0_0))->v);
    (((struct o20_ushort *)(v0_0))->v) = (v0_1 - 1);
    if (((int)(short)(v0_1 - 1) > 0)) goto L_C16D9B6;
    (((struct o17_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x17))) + 0x1);
    *(int *)((int)stk + 0) = 0x8;
    FUN_0c037ac4(v0_0, 0x0, 0xFFFFFFFF, 0x7, 0x8);
    (((struct o12A_ushort *)(v0_0))->v) = v0_4;
    L_C16D9B6:;
    FUN_0c037bf6(v0_0);
    math_vec3_accumulate((v0_0 + 0x28), (v0_0 + 0x4C));
    v0_3 = ((math_vec3_accumulate((v0_0 + 0x4C), (v0_0 + 0x58))));
    goto L_C16DA22;
    L_C16D8F2:;
    v0_2 = (unsigned char)(FUN_0c037bf6(v0_0)) != 0;
    if (v0_2) goto L_C16D900;
    goto L_C16DA0E;
    L_C16D900:;
    (((struct o17_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x17))) + 0x1);
    *(int *)((int)stk + 0) = 0x7;
    FUN_0c037ac4(v0_0, 0x0, 0xFFFFFFFF, 0x7, 0x7);
    v0_3 = (((int)stk + 4));
    if (((*(signed char *)((v0_0 + 0x2))) == 0)) goto L_C16D926;
    w0_0 = (20.0f);
    L_C16D92A:;
    FUN_0c16d404(v0_0, v0_3, v0_1, w0_0);
    (((struct o4C_float *)(v0_0))->v) = (*(float *)(((int)stk + 4)));
    (((struct o54_float *)(v0_0))->v) = (*(float *)(((int)stk + 12)));
    (((struct o20_ushort *)(v0_0))->v) = 0x14;
    v0_2 = (v0_0);
    if (((*(signed char *)((v0_0 + 0x2))) == 0)) goto L_C16D950;
    v0_3 = (0x8F);
    L_C16D952:;
    FUN_0c07e3ae(v0_2, v0_3);
    (((struct o12A_ushort *)(v0_0))->v) = (~((int)0x1 << (int)(*(signed char *)((v0_0 + 0x1)))));
    FUN_0c059e0e((*(signed char *)((v0_0 + 0x1))), 0x55, (v0_0 + 0x28));
    goto L_C16DA0E;
    L_C16D950:;
    v0_3 = (0x78);
    goto L_C16D952;
    L_C16D926:;
    w0_0 = (40.0f);
    goto L_C16D92A;
    L_C16D8AC:;
    FUN_0c037bf6(v0_0);
    FUN_0c038362(v0_0);
    FUN_0c16d468(v0_0, (((short)(*(signed char *)((v0_0 + 0x1))) * (short)0x3938) + 0xC535CA4));
    v0_1 = (((struct o20_short *)(v0_0))->v);
    (((struct o20_ushort *)(v0_0))->v) = (v0_1 - 1);
    v0_3 = (0x20);
    if (((int)(short)(v0_1 - 1) <= 0)) goto L_C16D8D8;
    goto L_C16DA22;
    L_C16D8D8:;
    (((struct o17_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x17))) + 0x1);
    *(int *)((int)stk + 0) = 0x6;
    v0_3 = ((FUN_0c037ac4(v0_0, 0x0, 0xFFFFFFFF, 0x7, 0x6)));
    goto L_C16DA22;
    L_C16D854:;
    (((struct o16_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x16))) + 0x1);
    (((struct o17_uchar *)(v0_0))->v) = v0_4;
    *(int *)((int)stk + 0) = 0x4;
    FUN_0c037ac4(v0_0, 0x0, 0xFFFFFFFF, 0x7, 0x4);
    (((struct o20_ushort *)(v0_0))->v) = 0x3C;
    goto L_C16D876;
}

int FUN_0c16da30(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                (((struct o15_uchar *)(a4))->v) = 0x1;
                (((struct o16_uchar *)(a4))->v) = 0x0;
                return 0x16;
            }
            t0 = FUN_0c037bf6(a4);
            if ((unsigned char)t0 != 0) {
                (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
            }
            return FUN_0c038362(a4);
        }
    } else {
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        FUN_0c037ac4(a4, 0x0, 0xFFFFFFFF, 0x7, 0x9);
    }
    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        FUN_0c037ac4(a4, 0x0, 0xFFFFFFFF, 0x7, 0xA);
    }
    return FUN_0c038362(a4);
}

int FUN_0c16dabc(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            (((struct o15_uchar *)(a4))->v) = 0x1;
            (((struct o16_uchar *)(a4))->v) = 0x0;
            return 0x16;
        }
    } else {
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        FUN_0c037ac4(a4, 0x0, 0xFFFFFFFF, 0x7, 0x3);
    }
    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
    }
    return FUN_0c038362(a4);
}

int FUN_0c16db1c(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            (((struct o15_uchar *)(a4))->v) = 0x1;
            (((struct o16_uchar *)(a4))->v) = 0x0;
            return 0x16;
        }
    } else {
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        FUN_0c037ac4(a4, 0x0, 0xFFFFFFFF, 0x7, 0x3);
    }
    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
    }
    return FUN_0c038362(a4);
}

int FUN_0c16db88(int a4)
{
    if (((((struct o2C_float *)(a4))->v)) > (*(float *)0xC541098)) {
        if ((*(signed char *)0xC540F98) != 0) {
            return 0x1;
        }
        return 0x0;
    }
    return 0x1;
}

int FUN_0c16dba8(int a4)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x1));
    t1 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
    if ((int)(short)(t1 - 1) > 0) {
        if (!(((((struct o160_float *)((((short)t0 * (short)0x3938) + 0xC532498)))->v)) > 0.0f)) {
            return 0x1;
        }
        return 0x0;
    }
    return 0x1;
}
