/* game/unsorted: functions 0C0C57E0-0C0C6A94, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o12A_short { char p[0x12A]; short v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o376C_uint { char p[0x376C]; unsigned int v; };
struct o378C_float { char p[0x378C]; float v; };
struct o404_int { char p[0x404]; int v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oC8_int { char p[0xC8]; int v; };
int math_mat_get_translate(int, int);
int FUN_0c059df2(int, int);
float FUN_0c064e28(int);
int FUN_0c064f80(int);
int FUN_0c06588a(int, int, int, int);
int FUN_0c07d15c(int);
int FUN_0c07e328(int, int);
int FUN_0c0c213c(int);
int FUN_0c0c283a(int);
int FUN_0c0c2ab6(int, int);
int FUN_0c0c2ce4(int);
int FUN_0c0c2d56(int, int, int);
int FUN_0c0c4444(int);
int FUN_0c163358(int, int, int, int);
int math_atan2_angle16(int, float, float);
float math_cos_angle16(int);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int FUN_0c17c4d0(int);
int FUN_0c187798(int, int);
int FUN_0c0c57e0(int a4, int a5, int a6);
int FUN_0c0c5a88(int a4);
int FUN_0c0c5ade(int a4, int a5, int a6);
int FUN_0c0c5b78(int a4);
int FUN_0c0c5bd0(int a4);
int FUN_0c0c5d4c(int a4);
int FUN_0c0c680a(int a4);

int FUN_0c0c57e0(int a4, int a5, int a6)
{
    int stk[5];
    register int t0;
    register int t1;
    register float u5;
    register float u6;
    register float t8;
    register float u9;
    register float u11;
    register float u12;
    register float u14;
    register float u15;
    register float t17;
    register float u18;
    register float u20;
    register float u21;
    register float t28;
    register float u29;
    register float u31;
    register float u32;
    register int t33;
    register int t34;
    register int t35;
    register int t39;
    register int t43;
    register float u56;
    register float u68;
    register float t70;
    register float t72;
    register int t84;
    register float u23;
    int t36;
    register int t77;

    t0 = *(signed char *)((a4 + 0x1));
    t1 = ((int (*)(int, int, int))(FUN_0c187798))(a4, a5, a6);
    if ((*(signed char *)(((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738B8) + 0x6))) == 7) {
        u5 = (((struct o378C_float *)((((short)t0 * (short)0x3938) + 0xC532498)))->v);
        u6 = ((((struct o2C_float *)(a4))->v));
        u6 = u6 + 150.0f * u5;
        (((struct o2C_float *)(a4))->v) = u6;
        *(int *)((int)stk + 0) = (a4 + 0x28);
        t8 = math_sin_angle16((*(int *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x38))));
        u9 = (((struct o378C_float *)((((short)t0 * (short)0x3938) + 0xC532498)))->v);
        u11 = (t8 * u9);
        u12 = ((((struct o28_float *)(a4))->v));
        u12 = u12 + 50.0f * u11;
        (((struct o28_float *)(a4))->v) = u12;
        *(int *)((int)stk + 0) = (a4 + 0x30);
        u23 = 50.0f;
    } else {
        u14 = (((struct o378C_float *)((((short)t0 * (short)0x3938) + 0xC532498)))->v);
        u15 = ((((struct o2C_float *)(a4))->v));
        u15 = u15 + 170.0f * u14;
        (((struct o2C_float *)(a4))->v) = u15;
        *(int *)((int)stk + 0) = (a4 + 0x28);
        t17 = math_sin_angle16((*(int *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x38))));
        u18 = (((struct o378C_float *)((((short)t0 * (short)0x3938) + 0xC532498)))->v);
        u20 = (t17 * u18);
        u21 = ((((struct o28_float *)(a4))->v));
        u21 = u21 + 110.0f * u20;
        (((struct o28_float *)(a4))->v) = u21;
        *(int *)((int)stk + 0) = (a4 + 0x30);
        u23 = 110.0f;
    }
    t28 = math_cos_angle16((*(int *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x38))));
    u29 = (((struct o378C_float *)((((short)t0 * (short)0x3938) + 0xC532498)))->v);
    u31 = (t28 * u29);
    u32 = ((((struct o30_float *)(a4))->v));
    u32 = u32 + u23 * u31;
    (((struct o30_float *)(a4))->v) = u32;
    t33 = ((int (*)(void))(FUN_0c187798))();
    t34 = *(signed char *)((a4 + 0x1));
    t35 = *(signed char *)(((((short)t34 * (short)0x3938) + 0xC532498) + 0x2));
    t39 = t35;
    if ((t35 == 8) && (t36 = *(signed char *)(((((short)t34 * (short)0x3938) + 0xC532498) + 0x371C)), t36 != 0)) {
        t39 = 0xC;
    }
    *(unsigned int *)(((int)stk + 4)) = ((t39 << 2) << 1);
    if ((*(signed char *)((a4 + 0x41F))) == 0) {
        *(volatile signed char *)((a4 + 0x1));
        t43 = ((int (*)(int, int, int))(FUN_0c187798))(((t39 << 2) << 1), t35, (((short)t34 * (short)0x3938) + 0xC532498));
        *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) + 120.0f);
        *(float *)(((int)stk + 8)) = ((*(float *)(((int)stk + 8))) - ((((struct o28_float *)(a4))->v)));
        *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) - ((((struct o2C_float *)(a4))->v)));
        *(float *)(((int)stk + 16)) = ((*(float *)(((int)stk + 16))) - ((((struct o30_float *)(a4))->v)));
        FUN_0c17c4d0((((int)stk + 4) + 0x4));
        u56 = *(float *)(((((((((*(signed char *)(((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738B8) + 0xB))) << 2) << 2) << 2) << 1) + 0xC25B9D4) + (*(int *)(((int)stk + 4)))) + 0x0));
        (((struct o4C_float *)(a4))->v) = ((*(float *)(((int)stk + 8))) * u56);
        (((struct o50_float *)(a4))->v) = ((*(float *)(((int)stk + 12))) * u56);
        (((struct o54_float *)(a4))->v) = ((*(float *)(((int)stk + 16))) * u56);
        (((struct o60_float *)(a4))->v) = 0.0f;
        (((struct o5C_float *)(a4))->v) = 0.0f;
        (((struct o58_float *)(a4))->v) = 0.0f;
        t77 = (((((((*(signed char *)(((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738B8) + 0xB))) << 2) << 2) << 2) << 1) + 0xC25B9D4) + (*(int *)(((int)stk + 4))));
    } else {
        u68 = *(float *)(((*(int *)(((int)stk + 4))) + ((((((*(signed char *)(((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738B8) + 0xB))) << 2) << 2) << 2) << 1) + 0xC25B9D4)));
        t70 = math_sin_angle16((*(int *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x38))));
        (((struct o4C_float *)(a4))->v) = (t70 * u68);
        t72 = math_cos_angle16((*(int *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x38))));
        (((struct o54_float *)(a4))->v) = (t72 * u68);
        (((struct o50_float *)(a4))->v) = 0.0f;
        (((struct o5C_float *)(a4))->v) = 0.0f;
        (((struct o60_float *)(a4))->v) = 0.0f;
        (((struct o5C_float *)(a4))->v) = 0.0f;
        (((struct o58_float *)(a4))->v) = 0.0f;
        t77 = (((((((*(signed char *)(((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738B8) + 0xB))) << 2) << 2) << 2) << 1) + 0xC25B9D4) + (*(int *)(((int)stk + 4))));
    }
    t84 = *(short *)((t77 + 0x4));
    *(unsigned short *)((a4 + 0x1C)) = t84;
    return t84;
}

int FUN_0c0c5a88(int a4)
{
    register int t0;
    register int t1;

    if ((*(short *)((a4 + 0x1C))) != 0) {
        math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        t1 = (short)(t0 - 1);
        if ((short)(t0 - 1) == 0) {
            if (!(0.0f > ((((struct o5C_float *)(a4))->v)))) {
                (((struct o5C_float *)(a4))->v) = (*(float *)0xC0C5B64);
            }
            t1 = 0x5C;
        }
        t0 = t1;
    } else {
        math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
        t0 = (math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58)));
    }
    return t0;
}

int FUN_0c0c5ade(int a4, int a5, int a6)
{
    register int t2;

    (((struct oA4_uint *)(a4))->v) = 0x0;
    FUN_0c0c57e0(a4, a5, a6);
    if ((unsigned char)(*(signed char *)((a4 + 0x41C))) == 54) {
        t2 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (((int)((unsigned int)((int)((unsigned int)t2 + (unsigned int)0x0)) + ((((int)0x0 > (int)t2)) ? 1u : 0u))) >> 1);
    }
    if ((unsigned char)(*(signed char *)((a4 + 0x41C))) == 75) {
        FUN_0c0c2ab6(a4, 0x4D);
    } else {
        FUN_0c0c2ab6(a4, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738CB))));
    }
    FUN_0c07e328(a4, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738C6))));
    (((struct o22_ushort *)(a4))->v) = 0xB4;
    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    return 0x15;
}

int FUN_0c0c5b78(int a4)
{
    int t0;
    register int t1;
    register int t2;

    if (((unsigned char)(*(signed char *)((a4 + 0x41C))) == 0xC3) && (t0 = *(signed char *)((a4 + 0x424)), t0 == 16)) {
        t0 = FUN_0c07d15c(a4);
        if (t0 != 0) {
            t1 = FUN_0c064f80((((t0 - 1) * 0x3938) + 0xC532498));
            if (t1 == 0) {
                t0 = 0x9;
                t1 = (*(signed char *)((a4 + 0x1)));
            } else {
                t0 = 0xA;
                t1 = (*(signed char *)((a4 + 0x1)));
            }
            t2 = t0;
            t0 = t1;
        } else {
            t2 = 0xA;
            t0 = (*(signed char *)((a4 + 0x1)));
        }
        t1 = t2;
        t2 = t0;
    } else {
        t1 = 0xA;
        t2 = (*(signed char *)((a4 + 0x1)));
    }
    return FUN_0c0c2d56(a4, t1, t2);
}

int FUN_0c0c5bd0(int a4)
{
    int t3;
    register int t6;

    if ((*(signed char *)((a4 + 0x131))) == 0) {
        if (((((struct o404_int *)(a4))->v)) != 0) {
            t3 = FUN_0c0c2ce4(a4);
            if (t3 == 2) {
                return FUN_0c0c2d56(a4, 0x3, (*(signed char *)((a4 + 0x1))));
            }
            t6 = *(signed char *)((a4 + 0x41C));
            if (((unsigned char)t6 != 64) && (((unsigned char)t6 != 65) && (((unsigned char)t6 != 75) && (t3 == 1)))) {
                return FUN_0c0c2d56(a4, 0x2, (*(signed char *)((a4 + 0x1))));
            }
            return FUN_0c0c5b78(a4);
        }
        *(unsigned int *)((a4 + 0x3C)) = ((*(int *)((a4 + 0x3C))) + 0x71C);
        return FUN_0c0c5a88(a4);
    }
    return FUN_0c0c5b78(a4);
}

int FUN_0c0c5d4c(int a4)
{
    int stk[2];
    register int t0;
    register int t18;
    int t26;
    register int t29;
    register int t35;
    register int t49;
    register int t14;
    register int t15;
    int t42;
    register int t46;
    register int t47;
    int t56;
    register int t60;
    register int t61;

    t0 = (((struct o22_short *)(a4))->v);
    (((struct o22_ushort *)(a4))->v) = (t0 - 1);
    if ((short)(t0 - 1) == 0) {
        if ((unsigned char)(*(signed char *)((a4 + 0x41C))) == 0xC3) {
            if ((*(signed char *)((a4 + 0x424))) != 16) {
                t14 = 0xA;
                t15 = (*(signed char *)((a4 + 0x1)));
            } else {
                t14 = 0x9;
                t15 = (*(signed char *)((a4 + 0x1)));
            }
        } else {
            t14 = 0xA;
            t15 = (*(signed char *)((a4 + 0x1)));
        }
        return (FUN_0c0c2d56(a4, t14, t15));
    }
    t18 = *(short *)((a4 + 0x1E));
    *(unsigned short *)((a4 + 0x1E)) = (t18 - 1);
    if ((short)(t18 - 1) == 0) {
        (((struct o12A_ushort *)(a4))->v) = (((((struct o12A_short *)(a4))->v)) | 0x40);
    }
    if ((*(signed char *)((a4 + 0x131))) == 0) {
        t26 = math_atan2_angle16(a4, ((((struct o4C_float *)(a4))->v)), ((((struct o54_float *)(a4))->v)));
        *(float *)(((int)stk + 4)) = (((((struct o2C_float *)(a4))->v)) + ((((struct o0_float *)0xC0C5EC4)->v)));
        *(int *)((int)stk + 0) = 0x4000;
        t29 = FUN_0c06588a(a4, (((int)stk + 0) + 0x4), 0x410, (0xFFFF & t26));
        if (t29 != 0) {
            if ((((((struct o2C_float *)(a4))->v)) + ((((struct o8_float *)0xC0C5EC4)->v))) > (*(float *)(((int)stk + 4)))) {
                (((struct o2C_float *)(a4))->v) = ((*(float *)(((int)stk + 4))) + (FUN_0c064e28(a4)));
                t35 = FUN_0c064f80(a4);
                if (t35 != 0) {
                    (((struct o50_float *)(a4))->v) = 0.0f;
                    FUN_0c0c4444(a4);
                }
                math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
                return (math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58)));
            }
            if (((unsigned char)(*(signed char *)((a4 + 0x41C))) == 0xC3) && (t42 = *(signed char *)((a4 + 0x424)), t42 == 16)) {
                t46 = 0x9;
                t47 = (*(signed char *)((a4 + 0x1)));
            } else {
                t46 = 0xA;
                t47 = (*(signed char *)((a4 + 0x1)));
            }
            return (FUN_0c0c2d56(a4, t46, t47));
        }
        t49 = FUN_0c064f80(a4);
        if (t49 != 0) {
            (((struct o50_float *)(a4))->v) = 0.0f;
            FUN_0c0c4444(a4);
        }
        math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
        return (math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58)));
    }
    if (((unsigned char)(*(signed char *)((a4 + 0x41C))) == 0xC3) && (t56 = *(signed char *)((a4 + 0x424)), t56 == 16)) {
        t60 = 0x9;
        t61 = (*(signed char *)((a4 + 0x1)));
    } else {
        t60 = 0xA;
        t61 = (*(signed char *)((a4 + 0x1)));
    }
    return (FUN_0c0c2d56(a4, t60, t61));
}

int FUN_0c0c680a(int a4)
{
    int stk[3];

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R6;
    register int R7;
    register int R8;
    register float F2;
    register float F3;
    register float F14;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register float w0_0;
    register float w0_1;
    v0_1 = a4;
    v0_0 = *(signed char *)((v0_1 + 0x1));
    v0_2 = (FUN_0c0c283a(v0_1)) != 0;
    v0_3 = (0xC179BF0);
    v0_0 = ((((short)v0_0 * (short)0x3938) + 0xC532498));
    v0_1 = (v0_1);
    if (v0_2) goto L_C0C68B6;
    v0_4 = *(signed char *)((v0_1 + 0x15));
    v0_3 = (v0_4);
    v0_2 = (0x0);
    w0_0 = (0.200000003f);
    if ((v0_4 == 0)) goto L_C0C684A;
    if ((v0_3 == 1)) goto L_C0C68AC;
    L_C0C6A7C:;
    (((struct o376C_uint *)(v0_0))->v) = v0_1;
    v0_3 = (0x376C);
    L_C0C6A80:;
    return v0_3;
    L_C0C68AC:;
    v0_3 = (FUN_0c0c213c(v0_1)) == 0;
    if (!(v0_3)) goto L_C0C68B6;
    v0_3 = (((struct oC8_int *)(v0_1))->v);
    (((struct o80_uint *)(v0_3))->v) = (((((struct o80_int *)(v0_3))->v)) + 0x31C7);
    v0_4 = *(signed char *)((v0_1 + 0x16));
    v0_3 = (v0_4);
    if ((v0_4 == 0)) goto L_C0C6914;
    if ((v0_3 == 1)) goto L_C0C6954;
    goto L_C0C69CA;
    L_C0C68B6:;
    v0_3 = ((FUN_0c0c2d56(v0_1, 0x6, (*(signed char *)((v0_1 + 0x1))))));
    goto L_C0C6A80;
    L_C0C69CA:;
    math_mat_get_translate((v0_1 + 0x64), ((int)stk + 0));
    w0_1 = *(float *)(((int)stk + 0));
    w0_0 = ((math_sin_angle16((*(int *)((v0_0 + 0x38))))) * ((((struct o378C_float *)(v0_0))->v)));
    w0_1 = w0_1;
    w0_1 = w0_1 + 76.0f * w0_0;
    *(float *)(((int)stk + 0)) = w0_1;
    w0_0 = (*(float *)(((int)stk + 4)));
    w0_0 = w0_0 + 8.39999962f * ((((struct o378C_float *)(v0_0))->v));
    *(float *)(((int)stk + 4)) = w0_0;
    w0_1 = *(float *)(((int)stk + 8));
    w0_0 = ((math_cos_angle16((*(int *)((v0_0 + 0x38))))) * ((((struct o378C_float *)(v0_0))->v)));
    w0_1 = w0_1;
    w0_1 = w0_1 + 76.0f * w0_0;
    *(float *)(((int)stk + 8)) = w0_1;
    v0_2 = *(short *)((v0_1 + 0x1E));
    v0_3 = (v0_2);
    w0_0 = (76.0f);
    if (((int)v0_2 < 0)) goto L_C0C6A22;
    v0_3 = ((v0_3 & 0x3));
    L_C0C6A2C:;
    if ((v0_3 != 0)) goto L_C0C6A76;
    v0_2 = *(short *)((v0_1 + 0x1E));
    v0_3 = (v0_2);
    if (((int)v0_2 < 0)) goto L_C0C6A5C;
    v0_3 = ((v0_3 & 0x7));
    L_C0C6A66:;
    FUN_0c163358(((int)stk + 0), (*(int *)((v0_0 + 0x38))), (*(signed char *)((v0_0 + 0x1))), (((v0_3 == 0)) ? 1 : 0));
    L_C0C6A76:;
    *(unsigned short *)((v0_1 + 0x1E)) = ((*(short *)((v0_1 + 0x1E))) + 0x1);
    goto L_C0C6A7C;
    L_C0C6A5C:;
    v0_3 = (((~(((~v0_3) + 0x1) & 0x7)) + 0x1));
    goto L_C0C6A66;
    L_C0C6A22:;
    v0_3 = (((~(((~v0_3) + 0x1) & 0x3)) + 0x1));
    goto L_C0C6A2C;
    L_C0C6954:;
    v0_3 = (((struct oC8_int *)(v0_1))->v);
    w0_0 = math_sin_angle16(((short)((((struct o20_short *)(v0_1))->v)) * (short)0x1E));
    w0_1 = 1.0f;
    w0_1 = w0_1 + 0.5f * w0_0;
    (((struct o84_float *)(v0_3))->v) = w0_1;
    v0_3 = (((struct oC8_int *)(v0_1))->v);
    w0_0 = math_sin_angle16(((short)((((struct o20_short *)(v0_1))->v)) * (short)0x1E));
    w0_1 = 1.0f;
    w0_1 = w0_1 + 0.5f * w0_0;
    (((struct o88_float *)(v0_3))->v) = w0_1;
    v0_3 = (((struct oC8_int *)(v0_1))->v);
    v0_4 = (((struct o20_short *)(v0_1))->v);
    w0_0 = 1.0f;
    w0_0 = w0_0 + 0.25f * (math_sin_angle16((((v0_4 << 2) << 2) - v0_4)));
    (((struct o8C_float *)(v0_3))->v) = w0_0;
    v0_3 = (((struct o20_short *)(v0_1))->v);
    (((struct o20_ushort *)(v0_1))->v) = (v0_3 + 0x1);
    if (((int)(short)(v0_3 + 0x1) < (int)0xC)) goto L_C0C69CA;
    L_C0C69C6:;
    (((struct o20_ushort *)(v0_1))->v) = v0_2;
    goto L_C0C69CA;
    L_C0C6914:;
    v0_3 = (((struct oC8_int *)(v0_1))->v);
    (((struct o84_float *)(v0_3))->v) = (((((struct o84_float *)(v0_3))->v)) + w0_0);
    v0_3 = (((struct oC8_int *)(v0_1))->v);
    (((struct o88_float *)(v0_3))->v) = (((((struct o88_float *)(v0_3))->v)) + w0_0);
    v0_3 = (((struct oC8_int *)(v0_1))->v);
    (((struct o8C_float *)(v0_3))->v) = (((((struct o8C_float *)(v0_3))->v)) + w0_0);
    v0_3 = (((struct o20_short *)(v0_1))->v);
    (((struct o20_ushort *)(v0_1))->v) = (v0_3 + 0x1);
    if (((int)(short)(v0_3 + 0x1) < (int)0x3)) goto L_C0C69CA;
    (((struct o16_uchar *)(v0_1))->v) = ((*(signed char *)((v0_1 + 0x16))) + 0x1);
    goto L_C0C69C6;
    L_C0C684A:;
    *(unsigned char *)((((((struct oC8_int *)(v0_1))->v)) + 0x0)) = 0x1;
    (((struct o6C_float *)(((((struct oC8_int *)(v0_1))->v))))->v) = 0.0f;
    (((struct o70_float *)(((((struct oC8_int *)(v0_1))->v))))->v) = 13.0f;
    (((struct o74_float *)(((((struct oC8_int *)(v0_1))->v))))->v) = 110.0f;
    (((struct o84_float *)(((((struct oC8_int *)(v0_1))->v))))->v) = w0_0;
    (((struct o88_float *)(((((struct oC8_int *)(v0_1))->v))))->v) = w0_0;
    (((struct o8C_float *)(((((struct oC8_int *)(v0_1))->v))))->v) = w0_0;
    (((struct o16_uchar *)(v0_1))->v) = v0_2;
    *(unsigned short *)((v0_1 + 0x1C)) = v0_2;
    *(unsigned short *)((v0_1 + 0x1E)) = v0_2;
    (((struct o20_ushort *)(v0_1))->v) = v0_2;
    FUN_0c059df2((*(signed char *)((v0_1 + 0x1))), 0x47);
    (((struct o15_uchar *)(v0_1))->v) = ((*(signed char *)((v0_1 + 0x15))) + 0x1);
    goto L_C0C68AC;
}
