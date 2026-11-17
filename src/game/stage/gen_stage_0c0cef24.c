/* game/stage: functions 0C0CEF24-0C0CF2F4, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o10_float { char p[0x10]; float v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o426_short { char p[0x426]; short v; };
struct o426_ushort { char p[0x426]; unsigned short v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o68_int { char p[0x68]; int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB0_float { char p[0xB0]; float v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c0c25c4(int);
int FUN_0c0c2ab6(int, int);
int FUN_0c0c2ce4(int);
int FUN_0c0c2d56(int, int, int);
int FUN_0c0c3e3a(int, int, int);
int FUN_0c152d18(int);
int FUN_0c179ac0(void);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int FUN_0c0cef24(int a4);
int FUN_0c0cefac(int a4, int a5, int a6, int a7);
int FUN_0c0cefe0(int a4);
int FUN_0c0cf03a(int a4);
int FUN_0c0cf16e(int a4, int a5, int a6);
int FUN_0c0cf1f4(int a4);

int FUN_0c0cef24(int a4)
{
    register int t1;

    if (0.0f > ((((struct o50_float *)(a4))->v))) {
        t1 = FUN_0c0c2ce4(a4);
        if (t1 != 0) {
            return FUN_0c0c2d56(a4, 0x2, (*(signed char *)((a4 + 0x1))));
        }
    }
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    return math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
}

int FUN_0c0cefac(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t2;

    t0 = FUN_0c0c3e3a(a4, a5, a6);
    if (t0 == 0) {
        t2 = *(signed char *)((a4 + 0x15));
        if (t2 != 0) {
            if (t2 != 1) {
                return t2;
            }
            return FUN_0c0cef24(a4);
        }
        return ((int (*)(int, int, int, int))(0xC0CEE44))(a4, a5, a6, a7);
    }
    return t0;
}

int FUN_0c0cefe0(int a4)
{
    (((struct o5C_float *)(a4))->v) = 0.0f;
    (((struct o60_float *)(a4))->v) = 0.0f;
    (((struct o58_float *)(a4))->v) = 0.0f;
    (((struct o50_float *)(a4))->v) = 0.0f;
    (((struct o54_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    FUN_0c0c25c4(a4);
    (((struct o50_float *)(a4))->v) = 0.0f;
    (((struct o5C_float *)(a4))->v) = (*(float *)0xC0CF074);
    FUN_0c0c2ab6(a4, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738CA))));
    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    return 0x15;
}

int FUN_0c0cf03a(int a4)
{

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R6;
    register int R10;
    register int R11;
    register int R12;
    register float F0;
    register float F1;
    register float F2;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register float w0_0;
    v0_3 = a4;
    v0_1 = FUN_0c0c2ce4(v0_3);
    v0_0 = (v0_3);
    v0_3 = (v0_1);
    if ((v0_1 == 0)) goto L_C0CF096;
    if ((v0_3 != 2)) goto L_C0CF088;
    return FUN_0c0c2d56(v0_0, 0x3, (*(signed char *)((v0_0 + 0x1))));
    L_C0CF088:;
    (((struct o50_float *)(v0_0))->v) = 0.0f;
    (((struct o5C_float *)(v0_0))->v) = ((((struct o0_float *)0xC0CF1B0)->v));
    L_C0CF096:;
    (((struct o2C_float *)(v0_0))->v) = (((((struct o2C_float *)(v0_0))->v)) + ((((struct o50_float *)(v0_0))->v)));
    (((struct o50_float *)(v0_0))->v) = (((((struct o50_float *)(v0_0))->v)) + ((((struct o5C_float *)(v0_0))->v)));
    v0_2 = *(int *)0xC542260;
    v0_1 = (0xC5421F8);
    v0_3 = (((v0_2 << 1) + (v0_2 << 2)));
    v0_3 = ((((((struct oC4_int *)(v0_0))->v)) + 0x70));
    w0_0 = ((float)((v0_2 << 1) + (v0_2 << 2)));
    FPUL_ = (((v0_2 << 1) + (v0_2 << 2)));
    if (((int)((v0_2 << 1) + (v0_2 << 2)) >= 0)) goto L_C0CF0D6;
    w0_0 = ((w0_0 + 4.2949673e+09f));
    FPUL_ = (0x4F800000);
    L_C0CF0D6:;
    w0_0 = math_sin_angle16((int)((w0_0 * ((((struct oC_float *)0xC0CF1B0)->v))) / ((((struct o10_float *)0xC0CF1B0)->v))));
    *(float *)((v0_3 + 0x0)) = (w0_0 * ((((struct o18_float *)0xC0CF1B0)->v)));
    *(unsigned int *)((v0_0 + 0x38)) = ((*(int *)((v0_0 + 0x38))) + 0x222);
    v0_2 = ((int)((unsigned int)((((struct o68_int *)(v0_1))->v)) % (unsigned int)0x3C)) != ((int)((int)(FUN_0c179ac0()) % (int)0xA));
    if (v0_2) goto L_C0CF11E;
    FUN_0c152d18((v0_0 + 0x28));
    L_C0CF11E:;
    v0_2 = *(signed char *)((v0_0 + 0x1B));
    v0_3 = (v0_2);
    if ((v0_2 == 1)) goto L_C0CF164;
    v0_3 = (0x41C);
    if (((int)(unsigned char)(*(signed char *)((v0_0 + 0x41C))) >= (int)0xC0)) goto L_C0CF164;
    v0_2 = (((struct o426_short *)(v0_0))->v);
    (((struct o426_ushort *)(v0_0))->v) = (v0_2 + 0x1);
    if (((int)(short)(v0_2 + 0x1) < (int)0x12C)) goto L_C0CF14E;
    FUN_0c0c2d56(v0_0, 0xB, (*(signed char *)((v0_0 + 0x1))));
    L_C0CF14E:;
    v0_3 = (0x426);
    if (((int)((((struct o426_short *)(v0_0))->v)) <= (int)0xB4)) goto L_C0CF164;
    v0_1 = *(signed char *)((v0_1 + 0x68));
    (((struct oA8_uchar *)(v0_0))->v) = (v0_1 & 0x1);
    v0_3 = ((v0_1 & 0x1));
    L_C0CF164:;
    return v0_3;
}

int FUN_0c0cf16e(int a4, int a5, int a6)
{
    register int t0;
    register int t2;

    t0 = FUN_0c0c3e3a(a4, a5, a6);
    if (t0 == 0) {
        t2 = *(signed char *)((a4 + 0x15));
        if (t2 != 0) {
            if (t2 != 1) {
                return t2;
            }
            return FUN_0c0cf03a(a4);
        }
        return FUN_0c0cefe0(a4);
    }
    return t0;
}

int FUN_0c0cf1f4(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
    } else {
        (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x400);
        (((struct oB0_float *)(a4))->v) = 1.0f;
        *(unsigned short *)((a4 + 0x1C)) = 0x2D;
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    }
    *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + 0xE38);
    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + (1.0f + 1.0f));
    if (((((struct oB0_float *)(a4))->v)) > 0.0f) {
        (((struct oB0_float *)(a4))->v) = (((((struct oB0_float *)(a4))->v)) - 0.0222222228f);
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    if ((int)(short)(t0 - 1) <= 0) {
        return FUN_0c0c2d56(a4, 0xB, (*(signed char *)((a4 + 0x1))));
    }
    return (short)(t0 - 1);
}
