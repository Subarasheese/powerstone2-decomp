/* game/effect: functions 0C13D04C-0C13E118, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o40_float { char p[0x40]; float v; };
struct o41C_int { char p[0x41C]; int v; };
struct o41C_uint { char p[0x41C]; unsigned int v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o78_int { char p[0x78]; int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o90_float { char p[0x90]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_int { char p[0x9C]; int v; };
struct oA0_int { char p[0xA0]; int v; };
struct oA0_uint { char p[0xA0]; unsigned int v; };
struct oA4_int { char p[0xA4]; int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c037498(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int thunk_FUN_0c058310(int, int);
int FUN_0c059e9a(int, int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c064f02(int);
int FUN_0c07e2f4(int, int);
int FUN_0c13e124(int);
float math_cos_angle16(int);
int nlRand(void);
float math_sin_angle16(int);
int nlCalcPoint(int, int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlUnitMatrix(void);
int math_vec3_accumulate(int, int);
int FUN_0c187798(void);
int FUN_0c13d04c(int a4, int a5, int a6, int a7);
int FUN_0c13d160(int a4, int a5, int a6);
int FUN_0c13d28a(int a4, int a5, int a6, int a7, float f4, float f5);
int FUN_0c13d4ac(int a4, int a5, int a6);
int FUN_0c13d66e(int a4, int a5, int a6, int a7);
int FUN_0c13d748(int a4, int a5);
int FUN_0c13d834(int a4, int a5, int a6, int a7);
int FUN_0c13d9e4(int a4);
int FUN_0c13dbe2(int a4, int a5, int a6, int a7);
int FUN_0c13dc4c(int a4);
int FUN_0c13dd14(int a4);
int FUN_0c13ddb8(int a4, int a5, int a6, int a7);
int FUN_0c13df20(int a4);
int FUN_0c13dffc(int a4);
struct o1C_short { char p[0x1C]; short v; };
struct o1C_ushort { char p[0x1C]; unsigned short v; };
struct o1E_ushort { char p[0x1E]; unsigned short v; };
struct o34_uint { char p[0x34]; unsigned int v; };
struct o3C_uint { char p[0x3C]; unsigned int v; };
struct o6_short { char p[0x6]; short v; };
struct o6_ushort { char p[0x6]; unsigned short v; };


int FUN_0c13d04c(int a4, int a5, int a6, int a7)
{
    int stk[1];

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R6;
    register float F2;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    v0_0 = a4;
    *(unsigned int *)(((int)stk + 0)) = (*(int *)((v0_0 + 0x10)));
    v0_2 = *(signed char *)((v0_0 + 0x14));
    v0_1 = (v0_2);
    v0_0 = (v0_0);
    if ((v0_2 == 0)) goto L_C13D06C;
    if ((v0_1 == 1)) goto L_C13D082;
    return FUN_0c03f346(v0_0, R5, R6, a7);
    L_C13D082:;
    math_vec3_accumulate((v0_0 + 0x28), (v0_0 + 0x4C));
    math_vec3_accumulate((v0_0 + 0x4C), (v0_0 + 0x58));
    v0_1 = (((struct oC4_int *)(v0_0))->v);
    (((struct o78_uint *)(v0_1))->v) = (((((struct o78_int *)(v0_1))->v)) + 0x71C);
    v0_2 = *(signed char *)((v0_0 + 0x15));
    v0_1 = (v0_2);
    if ((v0_2 == 0)) goto L_C13D0B8;
    if (!((v0_1 == 1))) goto L_C13D112;
    v0_1 = (0x7);
    v0_2 = (0x0);
    goto L_C13D0EC;
    L_C13D112:;
    v0_2 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_2 - 1);
    v0_1 = ((short)(v0_2 - 1));
    if (((int)(short)(v0_2 - 1) > 0)) goto L_C13D138;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    v0_1 = (0x14);
    L_C13D138:;
    return v0_1;
    L_C13D0EC:;
    FUN_0c13d4ac(v0_0, 0x0, v0_2);
    v0_3 = (int)(v0_2 + 0x1) < (int)v0_1;
    v0_2 = ((v0_2 + 0x1));
    if (v0_3) goto L_C13D0EC;
    FUN_0c059e9a((*(int *)(((int)stk + 0))), 0x25, (v0_0 + 0x28));
    FUN_0c13d9e4(v0_0);
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    goto L_C13D112;
    L_C13D0B8:;
    if (((*(signed char *)((v0_0 + 0x131))) != 0)) goto L_C13D0D4;
    v0_1 = (FUN_0c064f02(v0_0)) != 0;
    if (v0_1) goto L_C13D0D4;
    if ((((((struct o50_float *)(v0_0))->v)) > 0.0f)) goto L_C13D112;
    L_C13D0D4:;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    FUN_0c13dc4c(v0_0);
    FUN_0c13df20(v0_0);
    goto L_C13D112;
    L_C13D06C:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    *(unsigned short *)((v0_0 + 0x1C)) = 0x258;
    *(unsigned short *)((v0_0 + 0x1E)) = 0x5;
    FUN_0c13e124(v0_0);
    goto L_C13D082;
}


int FUN_0c13d28a(int a4, int a5, int a6, int a7, float f4, float f5)
{
    int t0;
    int t1;
    int t2;
    float u0;

    t0 = *(signed char *)(a4 + 0x14);
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x14)) + 0x1);
        (((struct o1C_ushort *)(a4))->v) = 0x258;
    }
    t0 = (((struct o1C_short *)(a4))->v);
    (((struct o1C_ushort *)(a4))->v) = (t0 - 1);
    if ((int)(short)(t0 - 1) <= 0) {
        (((struct o14_uchar *)(a4))->v) = 0x63;
    }
    t0 = *(signed char *)(a4 + 0x15);
    if (t0 != 0) {
        t1 = t0;
        if (t0 != 1) {
        } else {
            if ((*(signed char *)(a4 + 0x16)) == 0) {
                t0 = (((struct oCC_int *)(a4))->v);
                (((struct o88_float *)(t0))->v) = (((((struct o88_float *)(t0))->v)) + 0.200000003f);
                t0 = 0x88;
                if (!((1.0f + 1.0f) > ((((struct o88_float *)(((((struct oCC_int *)(a4))->v))))->v)))) {
                    (((struct o88_float *)(((((struct oCC_int *)(a4))->v))))->v) = (1.0f + 1.0f);
                    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x16)) + 0x1);
                    (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x200);
                    (((struct oBC_float *)(a4))->v) = 1.0f;
                    (((struct oB8_float *)(a4))->v) = 1.0f;
                    (((struct oB4_float *)(a4))->v) = 1.0f;
                    t0 = 0xB4;
                }
                t2 = t0;
            } else {
                t0 = (((struct oCC_int *)(a4))->v);
                (((struct o8C_float *)(t0))->v) = (((((struct o8C_float *)(t0))->v)) + 0.100000001f);
                t0 = (((struct oCC_int *)(a4))->v);
                (((struct o84_float *)(t0))->v) = ((((struct o8C_float *)(t0))->v));
                t0 = (((struct oCC_int *)(a4))->v);
                (((struct o88_float *)(t0))->v) = (((((struct o88_float *)(t0))->v)) - 0.200000003f);
                if (0.0f > ((((struct o88_float *)(((((struct oCC_int *)(a4))->v))))->v))) {
                    (((struct o88_float *)(((((struct oCC_int *)(a4))->v))))->v) = 0.0f;
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x14)) + 0x1);
                }
                (((struct oBC_float *)(a4))->v) = (((((struct oBC_float *)(a4))->v)) - 0.100000001f);
                if (!(((((struct oBC_float *)(a4))->v)) > 0.0f)) {
                    (((struct oBC_float *)(a4))->v) = 0.0f;
                }
                u0 = (((struct oBC_float *)(a4))->v);
                (((struct oB8_float *)(a4))->v) = u0;
                (((struct oB4_float *)(a4))->v) = u0;
                t2 = 0xB4;
            }
            t1 = t2;
        }
        t0 = t1;
    } else {
        math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
        math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
        t1 = (((struct oC4_int *)(a4))->v);
        (((struct o80_uint *)(t1))->v) = (((((struct o80_int *)(t1))->v)) + 0x71C);
        t1 = (((struct oC8_int *)(a4))->v);
        (((struct o80_uint *)(t1))->v) = (((((struct o80_int *)(t1))->v)) - 0x71C);
        t1 = FUN_0c064f02(a4);
        t2 = t1;
        if (t1 == 0) {
        } else {
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x15)) + 0x1);
            *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x0;
            *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x0;
            *(unsigned char *)((((((struct oCC_int *)(a4))->v)) + 0x0)) = 0x1;
            t1 = (((struct oCC_int *)(a4))->v);
            (((struct o6_ushort *)(t1))->v) = (((((struct o6_short *)(t1))->v)) | 0x10);
            t1 = (((struct oCC_int *)(a4))->v);
            (((struct o8C_float *)(t1))->v) = 1.0f;
            (((struct o88_float *)(t1))->v) = 1.0f;
            (((struct o84_float *)(t1))->v) = 1.0f;
            (((struct o7C_uint *)(((((struct oCC_int *)(a4))->v))))->v) = 0x8000;
            (((struct o1E_ushort *)(a4))->v) = 0x1E;
            (((struct o54_float *)(a4))->v) = 0.0f;
            (((struct o50_float *)(a4))->v) = 0.0f;
            (((struct o4C_float *)(a4))->v) = 0.0f;
            (((struct o12E_ushort *)(a4))->v) = 0x0;
            (((struct o3C_uint *)(a4))->v) = 0x0;
            (((struct o34_uint *)(a4))->v) = 0x0;
            t2 = 0x12E;
        }
        t0 = t2;
    }
    return t0;
}


int FUN_0c13d66e(int a4, int a5, int a6, int a7)
{

    register int R2;
    register int R3;
    register float F2;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register float w0_0;
    register float w0_1;
    v0_0 = a4;
    v0_2 = *(signed char *)((v0_0 + 0x14));
    v0_1 = (v0_2);
    if ((v0_2 == 0)) goto L_C13D67E;
    if ((v0_1 == 1)) goto L_C13D690;
    return FUN_0c03f346(v0_0, a5, a6, a7);
    L_C13D690:;
    v0_2 = *(signed char *)((v0_0 + 0x15));
    v0_1 = (v0_2);
    w0_0 = (0.100000001f);
    if ((v0_2 == 0)) goto L_C13D6A4;
    if (!((v0_1 == 1))) goto L_C13D6FA;
    v0_1 = (0xBC);
    if ((!(((((struct oBC_float *)(v0_0))->v)) > 0.0f))) goto L_C13D6FA;
    *(float *)((v0_0 + v0_1)) = ((*(float *)((v0_0 + v0_1))) - w0_0);
    w0_0 = *(float *)((v0_0 + v0_1));
    *(float *)((v0_0 + (v0_1 - 4))) = w0_0;
    *(float *)((v0_0 + ((v0_1 - 4) - 4))) = w0_0;
    w0_0 = (w0_0);
    goto L_C13D6FA;
    L_C13D6FA:;
    v0_2 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_2 - 1);
    v0_1 = ((short)(v0_2 - 1));
    if (((int)(short)(v0_2 - 1) > 0)) goto L_C13D714;
    (((struct o14_uchar *)(v0_0))->v) = 0x63;
    v0_1 = (0x14);
    L_C13D714:;
    return v0_1;
    L_C13D6A4:;
    w0_1 = (((struct o48_float *)(v0_0))->v);
    (((struct o48_float *)(v0_0))->v) = (w0_1 + w0_0);
    (((struct o44_float *)(v0_0))->v) = (w0_1 + w0_0);
    (((struct o40_float *)(v0_0))->v) = (w0_1 + w0_0);
    w0_0 = (1.0f);
    if ((1.0f > ((((struct o48_float *)(v0_0))->v)))) goto L_C13D6FA;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    (((struct oAC_ushort *)(v0_0))->v) = (((((struct oAC_short *)(v0_0))->v)) | 0x200);
    (((struct oBC_float *)(v0_0))->v) = w0_0;
    (((struct oB8_float *)(v0_0))->v) = w0_0;
    (((struct oB4_float *)(v0_0))->v) = w0_0;
    goto L_C13D6FA;
    L_C13D67E:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    (((struct o15_uchar *)(v0_0))->v) = 0x0;
    *(unsigned short *)((v0_0 + 0x1C)) = 0x3C;
    goto L_C13D690;
}




int FUN_0c13dbe2(int a4, int a5, int a6, int a7)
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
        (((struct o15_uchar *)(a4))->v) = 0x0;
        *(unsigned short *)((a4 + 0x1C)) = 0xA;
    }
    t0 = 0x0;
    for (;;) {
        t1 = *(int *)((((0xC4 + a4) + t0) + 0x0));
        t0 = (t0 + 0x4);
        (((struct o78_uint *)(t1))->v) = (((((struct o78_int *)(t1))->v)) + 0xE38);
        if ((unsigned int)t0 >= (unsigned int)0x8) {
            break;
        }
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    t1 = (short)(t0 - 1);
    if ((int)(short)(t0 - 1) <= 0) {
        (((struct o14_uchar *)(a4))->v) = 0x63;
        t1 = 0x14;
    }
    return t1;
}


int FUN_0c13dd14(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = (((struct o20_short *)(a4))->v);
    (((struct o20_ushort *)(a4))->v) = (t0 - 1);
    t1 = 0x20;
    if ((int)(short)(t0 - 1) <= 0) {
        (((struct o20_ushort *)(a4))->v) = 0x5;
        t0 = 0x0;
        for (;;) {
            if ((int)t0 >= (int)((((struct oC0_int *)(a4))->v))) {
                break;
            }
            t2 = *(signed char *)((((0x41C + a4) + t0) + 0x0));
            *(unsigned char *)((((0x41C + a4) + t0) + 0x0)) = (t2 + 0x1);
            if ((int)(signed char)(t2 + 0x1) > (int)0x7) {
                *(unsigned char *)((((0x41C + a4) + t0) + 0x0)) = 0x0;
            }
            FUN_0c037498((*(int *)((((t0 << 2) + (0xC4 + a4)) + 0x0))), (*(signed char *)((((0x41C + a4) + t0) + 0x0))), 0x9, (*(int *)0xC4B40CC));
            t0 = (t0 + 0x1);
        }
        t1 = 0xC0;
    }
    return t1;
}



int FUN_0c13dffc(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = (((struct o20_short *)(a4))->v);
    (((struct o20_ushort *)(a4))->v) = (t0 - 1);
    t1 = 0x20;
    if ((int)(short)(t0 - 1) <= 0) {
        (((struct o20_ushort *)(a4))->v) = 0x5;
        t0 = 0x0;
        for (;;) {
            if ((int)t0 >= (int)((((struct oC0_int *)(a4))->v))) {
                break;
            }
            t2 = *(signed char *)((((0x41C + a4) + t0) + 0x0));
            *(unsigned char *)((((0x41C + a4) + t0) + 0x0)) = (t2 + 0x1);
            if ((int)(signed char)(t2 + 0x1) > (int)0x3) {
                *(unsigned char *)((((0x41C + a4) + t0) + 0x0)) = 0x0;
            }
            FUN_0c037498((*(int *)((((t0 << 2) + (0xC4 + a4)) + 0x0))), (*(signed char *)((((0x41C + a4) + t0) + 0x0))), 0x13, (*(int *)0xC4B40CC));
            t0 = (t0 + 0x1);
        }
        t1 = 0xC0;
    }
    return t1;
}
