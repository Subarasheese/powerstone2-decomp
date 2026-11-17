/* game/unsorted: functions 0C123F20-0C124BEE, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o15_uchar { char p[0x15]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c03f346(int, int, int, int);
float math_cos_angle16(int);
int FUN_0c179ac0(void);
float math_sin_angle16(int);
int FUN_0c187798(int, int, int);
int FUN_0c12409c(int a4, int a5, int a6, int a7);
int FUN_0c124286(int a4, int a5, float f4);
int FUN_0c124580(int a4, int a5, int a6, int a7);

int FUN_0c12409c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    int t6;
    register int t7;
    register int t8;
    register int t9;
    register int t10;
    register int t11;
    register float u0;

    t8 = (((struct oC4_int *)(a4))->v);
    t9 = *(signed char *)((a4 + 0x15));
    if (t9 != 0) {
        if (t9 == 1) {
            (((struct o70_float *)(t8))->v) = (((((struct o70_float *)(t8))->v)) + ((((struct o50_float *)(a4))->v)));
            (((struct o7C_uint *)(t8))->v) = (((((struct o7C_int *)(t8))->v)) + (*(int *)((a4 + 0x38))));
            (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) + ((float)((int)((int)(FUN_0c179ac0()) % (int)0x3)) + 5.0f));
            (((struct o6C_float *)(t8))->v) = ((math_cos_angle16(((-((((struct o7C_int *)(t8))->v))) + 0x10000))) * ((((struct o4C_float *)(a4))->v)));
            (((struct o74_float *)(t8))->v) = ((math_sin_angle16(((-((((struct o7C_int *)(t8))->v))) + 0x10000))) * ((((struct o4C_float *)(a4))->v)));
            if (((((struct o18_float *)(t8))->v)) > 0.0f) {
                u0 = (((struct o18_float *)(t8))->v);
                (((struct o18_float *)(t8))->v) = (u0 - 0.0399999991f);
                if (0.0f > (u0 - 0.0399999991f)) {
                    (((struct o18_float *)(t8))->v) = 0.0f;
                }
                u0 = (((struct o18_float *)(t8))->v);
                (((struct o20_float *)(t8))->v) = u0;
                (((struct o1C_float *)(t8))->v) = u0;
            }
            t10 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t10 - 1);
            t11 = (short)(t10 - 1);
            if ((short)(t10 - 1) == 0) {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                t11 = 0x15;
            }
            return t11;
        }
        if (t9 == 2) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        return t9;
    }
    (((struct o70_float *)(t8))->v) = (((((struct o70_float *)(t8))->v)) + ((((struct o50_float *)(a4))->v)));
    t9 = (((struct o7C_int *)(t8))->v);
    t10 = *(int *)((a4 + 0x38));
    (((struct o7C_uint *)(t8))->v) = (t9 + t10);
    (((struct o6C_float *)(t8))->v) = ((math_cos_angle16(((-(t9 + t10)) + 0x10000))) * ((((struct o4C_float *)(a4))->v)));
    (((struct o74_float *)(t8))->v) = ((math_sin_angle16(((-((((struct o7C_int *)(t8))->v))) + 0x10000))) * ((((struct o4C_float *)(a4))->v)));
    if (((((struct o4C_float *)(a4))->v)) > ((((struct o54_float *)(a4))->v))) {
        (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) + 5.0f);
    }
    if (1.0f > ((((struct o18_float *)(t8))->v))) {
        (((struct o18_float *)(t8))->v) = (((((struct o18_float *)(t8))->v)) + (((float)((int)((int)(FUN_0c179ac0()) % (int)0xA)) + 1.0f) / 30.0f));
        if (((((struct o18_float *)(t8))->v)) > 1.0f) {
            (((struct o18_float *)(t8))->v) = 1.0f;
        }
        u0 = (((struct o18_float *)(t8))->v);
        (((struct o20_float *)(t8))->v) = u0;
        (((struct o1C_float *)(t8))->v) = u0;
    }
    t8 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t8 - 1);
    t9 = 0x15;
    if (((short)(t8 - 1) != 0) && ((t0 = *(int *)((a4 + 0x10)), t1 = *(signed char *)((0x3715 + t0)), t1 == 26) && (((t2 = *(int *)((a4 + 0x10)), t3 = *(signed char *)((0x375A + t2)), t3 == 1) || (t4 = *(int *)((a4 + 0x10)), t5 = *(signed char *)((0x375A + t4)), t5 == 4)) && (t6 = *(int *)((a4 + 0x10)), t7 = *(signed char *)((t6 + 0x15)), (int)t7 <= (int)0x2)))) {
    } else {
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0x19;
        t9 = 0x19;
    }
    return t9;
}

int FUN_0c124286(int a4, int a5, float f4)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register float u0;
    register float u1;

    t4 = *(signed char *)((a4 + 0x15));
    if (t4 != 0) {
        if (t4 != 1) {
            if (t4 != 2) {
                return t4;
            }
            return FUN_0c03f346(a4, a5, 0x10, 0x0);
        }
        u0 = *(float *)0xC1243CC;
        t4 = 0xC1243CC;
        t5 = 0x0;
        t6 = 0x0;
        for (;;) {
            if ((unsigned int)t5 >= (unsigned int)0x10) {
                break;
            }
            t7 = 0xC4;
            t4 = 0x18;
            t6 = 0xC4;
            t7 = (t7 + a4);
            t7 = (t7 + t5);
            t8 = (*(int *)((t7 + 0x0)));
            t6 = (t6 + a4);
            t6 = (t6 + t5);
            u1 = (*(float *)((t8 + t4)));
            t5 = (t5 + 0x4);
            u1 = (u1 * u0);
            *(float *)((t8 + t4)) = u1;
            t6 = (*(int *)((t6 + 0x0)));
            u1 = (*(float *)((t6 + t4)));
            t4 = 0x20;
            *(float *)((t6 + t4)) = u1;
            t4 = 0x1C;
            *(float *)((t6 + t4)) = u1;
        }
        *(unsigned int *)((a4 + 0x38)) = (unsigned short)((*(int *)((a4 + 0x38))) + 0x5B0);
        t4 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t4 - 1);
        t5 = (short)(t4 - 1);
        if ((short)(t4 - 1) == 0) {
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            t5 = 0x15;
        }
        return t5;
    }
    *(unsigned int *)((a4 + 0x38)) = (unsigned short)((*(int *)((a4 + 0x38))) + 0x5B0);
    t4 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t4 - 1);
    if (((short)(t4 - 1) != 0) && (t0 = *(int *)((a4 + 0x10)), t1 = *(signed char *)((t0 + 0x15)), (int)t1 <= (int)0x2)) {
        t0 = *(int *)((a4 + 0x10));
        if (((*(signed char *)((t0 + 0x3715))) == 26) && ((t2 = *(signed char *)((t0 + 0x375A)), t2 == 1) || (t3 = *(signed char *)((t0 + 0x375A)), t3 == 4))) {
            if ((int)(*(signed char *)((t0 + 0x15))) > (int)0x2) {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            }
        } else {
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        }
    } else {
        t0 = (short)(t4 - 1);
        t1 = 0x0;
        t2 = 0x0;
        for (;;) {
            if ((unsigned int)t1 >= (unsigned int)0x10) {
                break;
            }
            t2 = 0xC4;
            t0 = 0x18;
            t2 = (t2 + a4);
            t2 = (t2 + t1);
            t2 = (*(int *)((t2 + 0x0)));
            t1 = (t1 + 0x4);
            *(float *)((t2 + t0)) = 1.0f;
            t0 = 0x20;
            *(float *)((t2 + t0)) = 1.0f;
            t0 = 0x1C;
            *(float *)((t2 + t0)) = 1.0f;
        }
        *(unsigned short *)((a4 + 0x1C)) = 0x14;
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    }
    return 0x15;
}

int FUN_0c124580(int a4, int a5, int a6, int a7)
{
    register int t32;
    register int t35;

    register int R1;
    register int R2;
    register int R10;
    register int R11;
    register int R12;
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
    register float w0_0;
    register float w0_1;
    v0_0 = a4;
    v0_2 = a6;
    v0_4 = *(signed char *)((v0_0 + 0x15));
    v0_3 = (v0_4);
    v0_1 = (0xE38);
    if ((v0_4 == 0)) goto L_C1245B8;
    if ((v0_3 != 1)) goto L_C124594;
    *(unsigned int *)((v0_0 + 0x38)) = ((*(int *)((v0_0 + 0x38))) + v0_1);
    v0_1 = (((struct oC4_int *)(v0_0))->v);
    w0_0 = (((struct o18_float *)(v0_1))->v);
    (((struct o18_float *)(v0_1))->v) = (w0_0 - 0.0299999993f);
    (((struct o20_float *)(v0_1))->v) = (w0_0 - 0.0299999993f);
    (((struct o1C_float *)(v0_1))->v) = (w0_0 - 0.0299999993f);
    w0_0 = (((struct o18_float *)(v0_1))->v);
    v0_3 = (0x18);
    w0_1 = (w0_0);
    FPUL_ = (0x3CF5C28F);
    if ((w0_0 > 0.0f)) goto L_C124776;
    L_C124766:;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    v0_3 = (0x15);
    L_C124776:;
    return v0_3;
    L_C124594:;
    if ((v0_3 != 2)) goto L_C12459C;
    return FUN_0c03f346(v0_0, v0_1, v0_2, a7);
    L_C12459C:;
    goto L_C124776;
    L_C1245B8:;
    if (((int)(*(short *)((v0_0 + 0x1C))) <= (int)0xB4)) goto L_C1245C4;
    goto L_C124766;
    L_C1245C4:;
    if (((*(signed char *)((0x3715 + (*(int *)((v0_0 + 0x10)))))) == 26)) goto L_C1245D2;
    goto L_C124766;
    L_C1245D2:;
    if (((*(signed char *)((0x375A + (*(int *)((v0_0 + 0x10)))))) == 1)) goto L_C1245EA;
    if (((*(signed char *)((0x375A + (*(int *)((v0_0 + 0x10)))))) == 4)) goto L_C1245EA;
    goto L_C124766;
    L_C1245EA:;
    if (((int)(*(signed char *)(((*(int *)((v0_0 + 0x10))) + 0x15))) <= (int)0x2)) goto L_C1245FA;
    goto L_C124766;
    L_C1245FA:;
    *(volatile int *)((v0_0 + 0x10));
    FUN_0c187798(v0_0, v0_1, v0_2);
    (((struct o2C_float *)(t32))->v) = (((((struct o2C_float *)(t32))->v)) + 250.0f);
    *(unsigned int *)((t32 + 0x38)) = ((*(int *)((t32 + 0x38))) + t35);
    v0_2 = *(signed char *)((t32 + 0x2));
    v0_3 = (v0_2);
    v0_0 = (t32);
    v0_1 = (t35);
    FPUL_ = (0x437A0000);
    if ((v0_2 == 0)) goto L_C12462E;
    if ((v0_3 == 1)) goto L_C12463A;
    if (!((v0_3 == 2))) goto L_C124668;
    v0_2 = (0xC2A0F20);
    v0_1 = ((((*(short *)((v0_0 + 0x1E))) << 2) << 2));
    goto L_C124666;
    L_C124668:;
    if (((int)(*(short *)((v0_0 + 0x1C))) < (int)(*(int *)((v0_1 + 0x0))))) goto L_C124678;
    *(unsigned short *)((v0_0 + 0x1E)) = ((*(short *)((v0_0 + 0x1E))) + 0x1);
    v0_1 = ((v0_1 + 0x10));
    L_C124678:;
    if (((*(int *)((v0_1 + 0x0))) == 0x3E7)) goto L_C124734;
    v0_3 = *(short *)((v0_0 + 0x1C));
    v0_2 = (((((struct oC4_int *)(v0_0))->v)));
    FPUL_ = (v0_3);
    if ((((float)(*(int *)((v0_1 + 0x0))) - (float)v0_3) == 0.0f)) goto L_C12470A;
    (((struct o84_float *)(v0_2))->v) = (((((struct o84_float *)(v0_2))->v)) + ((((((struct o4_float *)(v0_1))->v)) - ((((struct o84_float *)(v0_2))->v))) / (float)((*(int *)((v0_1 + 0x0))) - (*(short *)((v0_0 + 0x1C))))));
    (((struct o88_float *)(v0_2))->v) = (((((struct o88_float *)(v0_2))->v)) + ((((((struct o8_float *)(v0_1))->v)) - ((((struct o88_float *)(v0_2))->v))) / (float)((*(int *)((v0_1 + 0x0))) - (*(short *)((v0_0 + 0x1C))))));
    v0_3 = *(short *)((v0_0 + 0x1C));
    v0_4 = *(int *)((v0_1 + 0x0));
    (((struct o8C_float *)(v0_2))->v) = (((((struct o8C_float *)(v0_2))->v)) + ((((((struct oC_float *)(v0_1))->v)) - ((((struct o8C_float *)(v0_2))->v))) / (float)(v0_4 - v0_3)));
    FPUL_ = ((v0_4 - v0_3));
    L_C124734:;
    v0_1 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_1 + 0x1);
    v0_3 = ((v0_1 + 0x1));
    goto L_C124776;
    L_C12470A:;
    (((struct o84_float *)(v0_2))->v) = (((((struct o84_float *)(v0_2))->v)) + ((((struct o4_float *)(v0_1))->v)));
    (((struct o88_float *)(v0_2))->v) = (((((struct o88_float *)(v0_2))->v)) + ((((struct o8_float *)(v0_1))->v)));
    (((struct o8C_float *)(v0_2))->v) = (((((struct o8C_float *)(v0_2))->v)) + ((((struct oC_float *)(v0_1))->v)));
    goto L_C124734;
    L_C124666:;
    v0_1 = ((v0_1 + v0_2));
    goto L_C124668;
    L_C12463A:;
    v0_2 = (0xC2A0EF0);
    v0_1 = ((((*(short *)((v0_0 + 0x1E))) << 2) << 2));
    goto L_C124666;
    L_C12462E:;
    v0_2 = (0xC2A0EC0);
    v0_1 = ((((*(short *)((v0_0 + 0x1E))) << 2) << 2));
    goto L_C124666;
}
