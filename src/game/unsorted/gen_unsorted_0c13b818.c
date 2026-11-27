/* game/unsorted: functions 0C13B818-0C13C78E, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o41C_int { char p[0x41C]; int v; };
struct o41C_uint { char p[0x41C]; unsigned int v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o6C_float { char p[0x6C]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o90_float { char p[0x90]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_int { char p[0x9C]; int v; };
struct o9C_uint { char p[0x9C]; unsigned int v; };
struct oA0_int { char p[0xA0]; int v; };
struct oA4_int { char p[0xA4]; int v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB0_float { char p[0xB0]; float v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c037320(int, int);
int FUN_0c037498(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c07e2f4(int, int);
int FUN_0c13e90c(int, int);
float math_cos_angle16(int);
int nlRand(void);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int FUN_0c187798(void);
int FUN_0c13b818(int a4, int a5);
int FUN_0c13b906(int a4, int a5, int a6, int a7);
int FUN_0c13bc42(int a4);
int FUN_0c13bca6(int a4, int a5, int a6, int a7);
int FUN_0c13beec(int a4);
int FUN_0c13bfc4(int a4, int a5, int a6, int a7);
int FUN_0c13c292(int a4, int a5, int a6, int a7);
int FUN_0c13c3c0(int a4);
int FUN_0c13c4c0(int a4);
int FUN_0c13c634(int a4);



int FUN_0c13bc42(int a4)
{
    register int t0;

    t0 = (((struct o41C_int *)(a4))->v);
    (((struct o41C_uint *)(a4))->v) = (t0 - 1);
    if ((int)(t0 - 1) <= 0) {
        (((struct o41C_uint *)(a4))->v) = 0x3;
        t0 = *(int *)(((0x41C + a4) + 0x4));
        *(unsigned int *)(((0x41C + a4) + 0x4)) = (t0 + 0x1);
        if ((int)(t0 + 0x1) > (int)0xF) {
            *(unsigned int *)(((0x41C + a4) + 0x4)) = 0x0;
        }
        t0 = 0x0;
        for (;;) {
            if ((int)t0 >= (int)((((struct oC0_int *)(a4))->v))) {
                break;
            }
            FUN_0c037498((*(int *)((((t0 << 2) + (0xC4 + a4)) + 0x0))), (*(int *)(((0x41C + a4) + 0x4))), 0x7, (*(int *)0xC4B40CC));
            t0 = (t0 + 0x1);
        }
        t0 = 0xC0;
    }
    return t0;
}

int FUN_0c13bca6(int a4, int a5, int a6, int a7)
{
    int stk[3];

    register int R1;
    register int R2;
    register int R3;
    register int R9;
    register int R13;
    register float F0;
    register float F1;
    register float F3;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    register float w0_4;
    v0_0 = a4;
    v0_3 = a5;
    v0_4 = *(signed char *)((v0_0 + 0x14));
    v0_2 = (v0_4);
    v0_5 = (0xC179BF0);
    v0_1 = (0xC179670);
    v0_0 = (v0_0);
    v0_1 = (0x0);
    w0_0 = (10.0f);
    if ((v0_4 == 0)) goto L_C13BCDC;
    if ((v0_2 == 1)) goto L_C13BD90;
    v0_2 = ((FUN_0c03f346(v0_0, v0_3, a6, a7)));
    L_C13BEBE:;
    return v0_2;
    L_C13BD90:;
    if (((*(signed char *)((v0_0 + 0x15))) != 0)) goto L_C13BE06;
    v0_2 = *(short *)((v0_0 + 0x1E));
    *(unsigned short *)((v0_0 + 0x1E)) = (v0_2 - 1);
    if (((int)(short)(v0_2 - 1) > 0)) goto L_C13BE06;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    v0_2 = (v0_1);
    w0_1 = (1.0f);
    L_C13BDFE:;
    if (!(((int)v0_2 < (int)((((struct oC0_int *)(v0_0))->v))))) goto L_C13BE06;
    v0_3 = *(int *)((((v0_2 << 2) + (0xC4 + v0_0)) + 0x0));
    (((struct o90_float *)(v0_3))->v) = ((math_sin_angle16(((((v0_2 << 8) << 2) << 2) << 1))) * w0_1);
    (((struct o98_float *)(v0_3))->v) = ((math_cos_angle16(((((v0_2 << 8) << 2) << 2) << 1))) * w0_1);
    (((struct o9C_uint *)(v0_3))->v) = (short)(int)(((((struct o90_float *)(v0_3))->v)) / w0_0);
    w0_2 = (((struct o98_float *)(v0_3))->v);
    (((struct oA4_uint *)(v0_3))->v) = (short)(int)(w0_2 / w0_0);
    v0_2 = ((v0_2 + 0x1));
    FPUL_ = ((int)(w0_2 / w0_0));
    goto L_C13BDFE;
    L_C13BE06:;
    (((struct oB0_float *)(v0_0))->v) = (((((struct oB0_float *)(v0_0))->v)) - 0.0199999996f);
    v0_2 = (0xB0);
    w0_0 = (0.0f);
    FPUL_ = (0x3CA3D70A);
    if ((((((struct oB0_float *)(v0_0))->v)) > 0.0f)) goto L_C13BE24;
    *(float *)((v0_0 + v0_2)) = w0_0;
    (((struct o14_uchar *)(v0_0))->v) = 0x63;
    L_C13BE24:;
    v0_5 = (0xC17C110);
    v0_1 = (v0_1);
    w0_0 = (0.100000001f);
    L_C13BE98:;
    if (((int)v0_1 < (int)((((struct oC0_int *)(v0_0))->v)))) goto L_C13BE44;
    FUN_0c13bc42(v0_0);
    v0_1 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_1 - 1);
    v0_2 = ((short)(v0_1 - 1));
    if (((int)(short)(v0_1 - 1) > 0)) goto L_C13BEBE;
    (((struct o14_uchar *)(v0_0))->v) = 0x63;
    v0_2 = (0x14);
    goto L_C13BEBE;
    L_C13BE44:;
    v0_2 = *(int *)((((v0_1 << 2) + (0xC4 + v0_0)) + 0x0));
    math_vec3_accumulate((v0_2 + 0x6C), (0x90 + v0_2));
    *(float *)(((int)stk + 0)) = (float)((((struct o9C_int *)(v0_2))->v));
    *(float *)(((int)stk + 4)) = (float)((((struct oA0_int *)(v0_2))->v));
    *(float *)(((int)stk + 8)) = (float)((((struct oA4_int *)(v0_2))->v));
    math_vec3_accumulate((0x90 + v0_2), ((int)stk + 0));
    (((struct o8C_float *)(v0_2))->v) = (((((struct o8C_float *)(v0_2))->v)) + w0_0);
    w0_1 = (((struct o8C_float *)(v0_2))->v);
    (((struct o88_float *)(v0_2))->v) = w0_1;
    (((struct o84_float *)(v0_2))->v) = w0_1;
    v0_1 = ((v0_1 + 0x1));
    goto L_C13BE98;
    L_C13BCDC:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    *(unsigned short *)((v0_0 + 0x1C)) = 0x3C;
    v0_2 = (v0_1);
    w0_2 = ((1.0f + 1.0f));
    w0_3 = (150.0f);
    w0_1 = (20.0f);
    L_C13BD84:;
    if (((int)v0_2 < (int)((((struct oC0_int *)(v0_0))->v)))) goto L_C13BD20;
    *(unsigned short *)((v0_0 + 0x1E)) = 0xA;
    goto L_C13BD90;
    L_C13BD20:;
    v0_3 = *(int *)((((v0_2 << 2) + (0xC4 + v0_0)) + 0x0));
    (((struct o6C_float *)(v0_3))->v) = ((math_sin_angle16(((((v0_2 << 8) << 2) << 2) << 1))) * w0_3);
    (((struct o74_float *)(v0_3))->v) = ((math_cos_angle16(((((v0_2 << 8) << 2) << 2) << 1))) * w0_3);
    (((struct o90_float *)(v0_3))->v) = ((math_sin_angle16(((((v0_2 << 8) << 2) << 2) << 1))) * w0_1);
    (((struct o98_float *)(v0_3))->v) = ((math_cos_angle16(((((v0_2 << 8) << 2) << 2) << 1))) * w0_1);
    (((struct o94_float *)(v0_3))->v) = w0_2;
    (((struct o9C_uint *)(v0_3))->v) = (short)(int)(((((struct o90_float *)(v0_3))->v)) / w0_0);
    w0_4 = (((struct o98_float *)(v0_3))->v);
    (((struct oA4_uint *)(v0_3))->v) = (short)(int)(w0_4 / w0_0);
    v0_2 = ((v0_2 + 0x1));
    FPUL_ = ((int)(w0_4 / w0_0));
    goto L_C13BD84;
}





int FUN_0c13c4c0(int a4)
{

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R6;
    register int R10;
    register int R12;
    register int R13;
    register float F2;
    register float F3;
    register float F4;
    register float F5;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    v0_0 = a4;
    v0_3 = *(signed char *)((v0_0 + 0x14));
    v0_2 = (v0_3);
    v0_1 = (0x1E);
    if ((v0_3 == 0)) goto L_C13C4D2;
    if ((v0_2 == 1)) goto L_C13C4E0;
    return FUN_0c03f346(v0_0, R5, R6, v0_1);
    L_C13C4E0:;
    v0_2 = *(int *)((v0_0 + 0x10));
    R5 = (0x1);
    R6 = (v0_2);
    if (((int)(*(signed char *)((v0_2 + 0x15))) > (int)0x1)) goto L_C13C4F4;
    if (!(((int)(*(signed char *)((R6 + 0x14))) <= (int)R5))) goto L_C13C4F4;
    v0_3 = *(signed char *)((v0_0 + 0x15));
    v0_2 = (v0_3);
    if ((v0_3 == 0)) goto L_C13C540;
    if ((v0_2 == 1)) goto L_C13C57A;
    goto L_C13C620;
    L_C13C4F4:;
    return FUN_0c03f346(v0_0, R5, R6, v0_1);
    L_C13C620:;
    return v0_2;
    L_C13C57A:;
    v0_1 = (((struct oC8_int *)(v0_0))->v);
    (((struct o84_float *)(v0_1))->v) = (((((struct o84_float *)(v0_1))->v)) + ((((((struct o0_float *)0xC2A20F4)->v)) + -1.0f) / 30.0f));
    v0_1 = (((struct oC8_int *)(v0_0))->v);
    (((struct o88_float *)(v0_1))->v) = (((((struct o88_float *)(v0_1))->v)) + ((((((struct o4_float *)0xC2A20F4)->v)) + -1.0f) / 30.0f));
    v0_1 = (((struct oC8_int *)(v0_0))->v);
    (((struct o8C_float *)(v0_1))->v) = (((((struct o8C_float *)(v0_1))->v)) + ((((((struct o8_float *)0xC2A20F4)->v)) + -1.0f) / 30.0f));
    v0_1 = (((struct oCC_int *)(v0_0))->v);
    (((struct o84_float *)(v0_1))->v) = (((((struct o84_float *)(v0_1))->v)) + ((((((struct oC_float *)0xC2A20F4)->v)) + -1.0f) / 30.0f));
    v0_1 = (((struct oCC_int *)(v0_0))->v);
    (((struct o88_float *)(v0_1))->v) = (((((struct o88_float *)(v0_1))->v)) + ((((((struct o10_float *)0xC2A20F4)->v)) + -1.0f) / 30.0f));
    v0_1 = (((struct oCC_int *)(v0_0))->v);
    (((struct o8C_float *)(v0_1))->v) = (((((struct o8C_float *)(v0_1))->v)) + ((((((struct o14_float *)0xC2A20F4)->v)) + -1.0f) / 30.0f));
    v0_1 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_1 - 1);
    v0_2 = ((short)(v0_1 - 1));
    if (((int)(short)(v0_1 - 1) > 0)) goto L_C13C620;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    v0_2 = (0x14);
    goto L_C13C620;
    L_C13C540:;
    v0_2 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_2 - 1);
    if (((int)(short)(v0_2 - 1) > 0)) goto L_C13C56E;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    *(unsigned short *)((v0_0 + 0x1C)) = v0_1;
    *(unsigned char *)((((((struct oC4_int *)(v0_0))->v)) + 0x0)) = 0x0;
    v0_1 = *(int *)(((0xC4 + v0_0) + 0x4));
    *(unsigned char *)(((*(int *)(((0xC4 + v0_0) + 0x8))) + 0x0)) = R5;
    *(unsigned char *)((v0_1 + 0x0)) = R5;
    L_C13C56E:;
    (((struct o2C_float *)(v0_0))->v) = (((((struct o2C_float *)(v0_0))->v)) + 1.0f);
    v0_2 = (0x2C);
    goto L_C13C620;
    L_C13C4D2:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    *(unsigned short *)((v0_0 + 0x1C)) = v0_1;
    goto L_C13C4E0;
}

