/* game/effect: functions 0C135B00-0C135F72, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c037498(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int FUN_0c187798(void);
int FUN_0c135b00(int a4, int a5, int a6, int a7, float f4);
int FUN_0c135bc8(int a4);
int FUN_0c135c10(int a4, int a5, int a6);
int FUN_0c135d1a(int a4);
int FUN_0c135d78(int a4, int a5, int a6, int a7);
struct o1C_short { char p[0x1C]; short v; };
struct o1C_ushort { char p[0x1C]; unsigned short v; };
struct o38_int { char p[0x38]; int v; };



int FUN_0c135bc8(int a4)
{
    register int t0;

    t0 = (((struct o20_short *)(a4))->v);
    (((struct o20_ushort *)(a4))->v) = (t0 - 1);
    if ((int)(short)(t0 - 1) < 0) {
        (((struct o20_ushort *)(a4))->v) = 0x4;
        t0 = (((struct o22_short *)(a4))->v);
        (((struct o22_ushort *)(a4))->v) = (t0 + 0x1);
        if ((int)(short)(t0 + 0x1) > (int)0x7) {
            (((struct o22_ushort *)(a4))->v) = 0x0;
        }
        return FUN_0c037498(((((struct oC4_int *)(a4))->v)), ((((struct o22_short *)(a4))->v)), 0x2, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
    }
    return 0x20;
}

int FUN_0c135c10(int a4, int a5, int a6)
{

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R7;
    register int R8;
    register int R12;
    register float F2;
    register float F4;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register float w0_0;
    v0_0 = a4;
    v0_2 = *(signed char *)((v0_0 + 0x14));
    v0_1 = (v0_2);
    v0_0 = (v0_0);
    if ((v0_2 == 0)) goto L_C135C26;
    if ((v0_1 == 1)) goto L_C135C64;
    return FUN_0c03f346(v0_0, R5, a6, R7);
    L_C135C64:;
    v0_2 = *(signed char *)((v0_0 + 0x15));
    v0_1 = (v0_2);
    if ((v0_2 == 0)) goto L_C135C74;
    if (!((v0_1 == 1))) goto L_C135CF0;
    w0_0 = *(float *)0xC135D64;
    v0_1 = (((struct oC4_int *)(v0_0))->v);
    (((struct o18_float *)(v0_1))->v) = (((((struct o18_float *)(v0_1))->v)) - w0_0);
    v0_1 = (((struct oC4_int *)(v0_0))->v);
    (((struct o1C_float *)(v0_1))->v) = (((((struct o1C_float *)(v0_1))->v)) - w0_0);
    v0_1 = (((struct oC4_int *)(v0_0))->v);
    (((struct o20_float *)(v0_1))->v) = (((((struct o20_float *)(v0_1))->v)) - w0_0);
    w0_0 = (0.0f);
    if ((!(0.0f > ((((struct o18_float *)(((((struct oC4_int *)(v0_0))->v))))->v))))) goto L_C135CF0;
    (((struct o18_float *)(((((struct oC4_int *)(v0_0))->v))))->v) = w0_0;
    (((struct o1C_float *)(((((struct oC4_int *)(v0_0))->v))))->v) = w0_0;
    (((struct o20_float *)(((((struct oC4_int *)(v0_0))->v))))->v) = w0_0;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    goto L_C135CF0;
    L_C135CF0:;
    FUN_0c135bc8(v0_0);
    math_vec3_accumulate((v0_0 + 0x28), (v0_0 + 0x4C));
    return math_vec3_accumulate((v0_0 + 0x4C), (v0_0 + 0x58));
    L_C135C74:;
    v0_2 = *(signed char *)((v0_0 + 0x2));
    v0_1 = (v0_2);
    if ((v0_2 == 0)) goto L_C135C82;
    if ((v0_1 == 1)) goto L_C135C82;
    L_C135C82:;
    v0_1 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_1 - 1);
    if (((int)(short)(v0_1 - 1) > 0)) goto L_C135CF0;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    goto L_C135CF0;
    L_C135C26:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    *(unsigned short *)((v0_0 + 0x1E)) = 0x0;
    v0_2 = *(signed char *)((v0_0 + 0x2));
    v0_1 = (v0_2);
    if ((v0_2 == 0)) goto L_C135C5C;
    if ((v0_1 == 1)) goto L_C135C5C;
    L_C135C5C:;
    (((struct o50_float *)(v0_0))->v) = (1.0f + 1.0f);
    goto L_C135C64;
}

int FUN_0c135d1a(int a4)
{
    register int t0;

    t0 = (((struct o20_short *)(a4))->v);
    (((struct o20_ushort *)(a4))->v) = (t0 - 1);
    if ((int)(short)(t0 - 1) < 0) {
        (((struct o20_ushort *)(a4))->v) = 0x4;
        t0 = (((struct o22_short *)(a4))->v);
        (((struct o22_ushort *)(a4))->v) = (t0 + 0x1);
        if ((int)(short)(t0 + 0x1) > (int)0xF) {
            (((struct o22_ushort *)(a4))->v) = 0x0;
        }
        return FUN_0c037498(((((struct oC4_int *)(a4))->v)), ((((struct o22_short *)(a4))->v)), 0x2, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
    }
    return 0x20;
}

int FUN_0c135d78(int a4, int a5, int a6, int a7)
{
    int t0;
    float u0;

    t0 = *(signed char *)(a4 + 0x14);
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                t0 = (((struct o1C_short *)(a4))->v);
                (((struct o1C_ushort *)(a4))->v) = (t0 - 1);
                if ((short)(t0 - 1) == 0) {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x14)) + 0x1);
                }
                t0 = (((struct oC4_int *)(a4))->v);
                (((struct o18_float *)(t0))->v) = (((((struct o18_float *)(t0))->v)) - 0.100000001f);
                t0 = (((struct oC4_int *)(a4))->v);
                (((struct o1C_float *)(t0))->v) = (((((struct o1C_float *)(t0))->v)) - 0.100000001f);
                t0 = (((struct oC4_int *)(a4))->v);
                (((struct o20_float *)(t0))->v) = (((((struct o20_float *)(t0))->v)) - 0.100000001f);
                if (0.0f > ((((struct o18_float *)(((((struct oC4_int *)(a4))->v))))->v))) {
                    (((struct o18_float *)(((((struct oC4_int *)(a4))->v))))->v) = 0.0f;
                }
                if (0.0f > ((((struct o1C_float *)(((((struct oC4_int *)(a4))->v))))->v))) {
                    (((struct o1C_float *)(((((struct oC4_int *)(a4))->v))))->v) = 0.0f;
                }
                if (0.0f > ((((struct o20_float *)(((((struct oC4_int *)(a4))->v))))->v))) {
                    (((struct o20_float *)(((((struct oC4_int *)(a4))->v))))->v) = 0.0f;
                }
                (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
                (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
                (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o54_float *)(a4))->v)));
                return FUN_0c135d1a(a4);
            }
            return FUN_0c03f346(a4, a5, a6, a7);
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x14)) + 0x1);
        (((struct o15_uchar *)(a4))->v) = 0x0;
        (((struct o1C_ushort *)(a4))->v) = 0x0;
        (((struct o4C_float *)(a4))->v) = ((math_sin_angle16(((((struct o38_int *)(a4))->v)))) * (float)((*(signed char *)(a4 + 0x2)) << 1));
        (((struct o54_float *)(a4))->v) = ((math_cos_angle16(((((struct o38_int *)(a4))->v)))) * (float)((*(signed char *)(a4 + 0x2)) << 1));
        (((struct o50_float *)(a4))->v) = 0.0f;
        (((struct o48_float *)(a4))->v) = 0.00999999978f;
    }
    (((struct o1C_ushort *)(a4))->v) = (((((struct o1C_short *)(a4))->v)) + 0x1);
    u0 = (0.0500000007f) + 0.0299999993f * (float)(*(signed char *)(a4 + 0x2));
    if (u0 > ((((struct o48_float *)(a4))->v))) {
        (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + 0.00999999978f);
    }
    u0 = (((struct o48_float *)(a4))->v);
    (((struct o44_float *)(a4))->v) = u0;
    (((struct o40_float *)(a4))->v) = u0;
    (((struct o84_float *)(((((struct oC4_int *)(a4))->v))))->v) = ((((struct o40_float *)(a4))->v));
    (((struct o88_float *)(((((struct oC4_int *)(a4))->v))))->v) = ((((struct o44_float *)(a4))->v));
    (((struct o8C_float *)(((((struct oC4_int *)(a4))->v))))->v) = ((((struct o48_float *)(a4))->v));
    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
    (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o54_float *)(a4))->v)));
    if ((int)((((struct o1C_short *)(a4))->v)) >= (int)0x14) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x14)) + 0x1);
        (((struct o1C_ushort *)(a4))->v) = 0xA;
        (((struct o4C_float *)(a4))->v) = ((math_sin_angle16(((((struct o38_int *)(a4))->v)))) * (1.0f + 1.0f));
        (((struct o54_float *)(a4))->v) = ((math_cos_angle16(((((struct o38_int *)(a4))->v)))) * (1.0f + 1.0f));
        (((struct o50_float *)(a4))->v) = (1.0f + 1.0f);
    }
    return FUN_0c135d1a(a4);
}
