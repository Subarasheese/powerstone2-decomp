/* game/unsorted: functions 0C0CB6A4-0C0CBFE8, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o10_float { char p[0x10]; float v; };
struct o12E_short { char p[0x12E]; short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1B_uchar { char p[0x1B]; unsigned char v; };
struct o2C_float { char p[0x2C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o41C_uchar { char p[0x41C]; unsigned char v; };
struct o41D_uchar { char p[0x41D]; unsigned char v; };
struct o420_ushort { char p[0x420]; unsigned short v; };
struct o424_uchar { char p[0x424]; unsigned char v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o78_int { char p[0x78]; int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oC_float { char p[0xC]; float v; };
struct oD0_int { char p[0xD0]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c065b96(int, int, int, int, float);
int FUN_0c0c212c(int);
int FUN_0c0c2a80(int);
int FUN_0c0c2aa2(int, int);
int FUN_0c0c2ab6(int, int);
int FUN_0c0c2ce4(int);
int FUN_0c0c2d56(int, int, int);
int FUN_0c0c3e3a(int);
int FUN_0c0c47a4(int);
int FUN_0c0c4bcc(int);
int FUN_0c0c4c1c(int);
int FUN_0c0c5024(int);
int FUN_0c0c52c4(int);
int FUN_0c0c8c08(int);
int FUN_0c0c8c36(int);
int FUN_0c0d01f2(int);
int math_atan_angle16(float);
float math_cos_angle16(int);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
extern int FUN_0c187798();
int FUN_0c0cb6a4(int a4);
int FUN_0c0cb6c2(int a4);
int FUN_0c0cb776(int a4);
int FUN_0c0cb896(int a4);
int FUN_0c0cb914(int a4);
int FUN_0c0cb982(int a4);
int FUN_0c0cba00(int a4);
int FUN_0c0cbcb0(int a4, int a5, int a6, int a7);
int FUN_0c0cbdbc(int a4, int a5, int a6, int a7, int a8);
int FUN_0c0cbf6e(int a4, int a5, int a6, float f4);

int FUN_0c0cb6a4(int a4)
{
    register int t3;

    t3 = 0x166;
    if ((*(signed char *)0xC54235E) != 0) {
        (((struct o12E_ushort *)(a4))->v) = (((((struct o12E_short *)(a4))->v)) | ((int)0x1 << (int)(*(signed char *)0xC542363)));
        t3 = 0x12E;
    }
    return t3;
}

int FUN_0c0cb6c2(int a4)
{
    int stk[1];
    int t6;
    register int t9;
    register int t11;
    register float u15;
    register float u16;
    register int t17;

    if (((((struct o4C_float *)(a4))->v)) == 0.0f) {
        (((struct o4C_float *)(a4))->v) = ((((struct o0_float *)0xC0CB794)->v));
    }
    t6 = math_atan_angle16(((-((((struct o54_float *)(a4))->v))) / ((((struct o4C_float *)(a4))->v))));
    t9 = (0xFFFF & t6);
    if (0.0f > ((((struct o4C_float *)(a4))->v))) {
        t9 = ((0xFFFF & t6) + 0x8000);
    }
    t11 = FUN_0c065b96(a4, (unsigned short)(0x4000 + t9), 0x4000, ((int)stk + 0), 0.0f);
    if (t11 != 0) {
        u15 = (((struct o14_float *)0xC0CB794)->v);
        u16 = (((struct o18_float *)0xC0CB794)->v);
        t17 = *(int *)(((int)stk + 0));
        if ((((t17 + 0x2000) & 0xC000) != 0) && (((t17 + 0x2000) & 0xC000) != 0x8000)) {
            if ((((t17 + 0x2000) & 0xC000) == 0x4000) || (((t17 + 0x2000) & 0xC000) == 0xC000)) {
                (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) * u15);
                (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) * u16);
            }
        } else {
            (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) * u16);
            (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) * u15);
        }
        return 0x1;
    }
    return 0x0;
}

int FUN_0c0cb776(int a4)
{
    (((struct o48_float *)(a4))->v) = 1.5f;
    (((struct o44_float *)(a4))->v) = 1.5f;
    (((struct o40_float *)(a4))->v) = 1.5f;
    return 0x40;
}

int FUN_0c0cb896(int a4)
{
    register int t1;

    if (0.0f > ((((struct o50_float *)(a4))->v))) {
        t1 = FUN_0c0c2ce4(a4);
        if (t1 != 0) {
            return FUN_0c0c2d56(a4, 0x2, (*(signed char *)((a4 + 0x1))));
        }
    }
    FUN_0c0cb6c2(a4);
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    return math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
}

int FUN_0c0cb914(int a4)
{
    register int t1;

    if (0.0f > ((((struct o50_float *)(a4))->v))) {
        t1 = FUN_0c0c2ce4(a4);
        if (t1 != 0) {
            return FUN_0c0c2d56(a4, 0x2, (*(signed char *)((a4 + 0x1))));
        }
    }
    FUN_0c0cb6c2(a4);
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    return math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
}

int FUN_0c0cb982(int a4)
{
    (((struct o5C_float *)(a4))->v) = 0.0f;
    (((struct o60_float *)(a4))->v) = 0.0f;
    (((struct o58_float *)(a4))->v) = 0.0f;
    (((struct o50_float *)(a4))->v) = 0.0f;
    (((struct o54_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    FUN_0c0cb776(a4);
    (((struct o50_float *)(a4))->v) = 0.0f;
    (((struct o5C_float *)(a4))->v) = (*(float *)0xC0CBA34);
    FUN_0c0c2ab6(a4, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738CA))));
    FUN_0c0cb6a4(a4);
    *(unsigned short *)((a4 + 0x1C)) = 0x438;
    *(unsigned short *)((a4 + 0x1E)) = 0x0;
    *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
    *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x1;
    *(unsigned char *)((((((struct oCC_int *)(a4))->v)) + 0x0)) = 0x1;
    *(unsigned char *)((((((struct oD0_int *)(a4))->v)) + 0x0)) = 0x1;
    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    return 0x15;
}


int FUN_0c0cbcb0(int a4, int a5, int a6, int a7)
{
    int t0;

    if ((*(signed char *)((a4 + 0x41D))) != 10) {
        if (((*(signed char *)0xC542237) == 0) && (t0 = *(signed char *)0xC54223C, t0 == 1)) {
            FUN_0c0c2d56(a4, 0xB, 0x0);
        }
        FUN_0c0c3e3a(a4);
    }
    t0 = *(signed char *)((a4 + 0x41D));
    if ((unsigned int)t0 < (unsigned int)0xC) {
        switch ((t0 << 1)) {
            case 0:
            {
                return ((int (*)(int, int, int, int))(0xC0CB95E))(a4, a5, a6, a7);
            }
            case 2:
            {
                return FUN_0c0c47a4(a4);
            }
            case 4:
            {
                return ((int (*)(int, int, int, int))(0xC0CBC6C))(a4, a5, a6, a7);
            }
            case 6:
            {
                return FUN_0c0c4bcc(a4);
            }
            case 8:
            {
                return FUN_0c0c4c1c(a4);
            }
            case 10:
            {
                return FUN_0c0c5024(a4);
            }
            case 12:
            {
                return FUN_0c0c52c4(a4);
            }
            case 14:
            {
                return FUN_0c0c8c08(a4);
            }
            case 16:
            {
                return FUN_0c0c8c36(a4);
            }
            case 18:
            case 20:
            {
                return FUN_0c0c2a80(a4);
            }
            default:
            {
                FUN_0c0d01f2((*(signed char *)((a4 + 0x424))));
                return FUN_0c0c2a80(a4);
            }
        }
    }
    return t0;
}


int FUN_0c0cbf6e(int a4, int a5, int a6, float f4)
{
    int stk[4];
    register int t2;
    register int t10;
    register float u3;

    *(unsigned int *)(((int)stk + 12)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned char *)(((int)stk + 8)) = a6;
    *(int *)((int)stk + 0) = 0xFFFFFFFF;
    t2 = FUN_0c0cbdbc(0xC1, (*(signed char *)(((int)stk + 8))), 0x1, (*(int *)(((int)stk + 12))), 0xFFFFFFFF);
    t10 = 0x0;
    if (t2 != 0) {
        u3 = (((struct o0_float *)0xC0CC048)->v);
        (((struct o4C_float *)(t2))->v) = (((math_sin_angle16((*(int *)(((int)stk + 4))))) * f4) / u3);
        (((struct o54_float *)(t2))->v) = (((math_cos_angle16((*(int *)(((int)stk + 4))))) * f4) / u3);
        (((struct o60_float *)(t2))->v) = 0.0f;
        (((struct o58_float *)(t2))->v) = 0.0f;
        (((struct o50_float *)(t2))->v) = ((((struct oC_float *)0xC0CC048)->v));
        (((struct o5C_float *)(t2))->v) = ((((struct o10_float *)0xC0CC048)->v));
        t10 = 0x1;
    }
    return t10;
}
