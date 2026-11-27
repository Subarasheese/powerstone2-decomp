/* game/unsorted: functions 0C0E4F8C-0C0E5710, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o126_uchar { char p[0x126]; unsigned char v; };
struct o128_ushort { char p[0x128]; unsigned short v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12C_ushort { char p[0x12C]; unsigned short v; };
struct o12E_short { char p[0x12E]; short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o130_uchar { char p[0x130]; unsigned char v; };
struct o132_uchar { char p[0x132]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o376C_uint { char p[0x376C]; unsigned int v; };
struct o426_short { char p[0x426]; short v; };
struct o426_ushort { char p[0x426]; unsigned short v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o88_float { char p[0x88]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
int FUN_0c05ab12(int, int);
int FUN_0c0c216e(int);
int FUN_0c0c221e(int);
int FUN_0c0c2ab6(int, int, int, int);
int FUN_0c0c2ce4(int);
int FUN_0c0c2d56(int, int, int);
int FUN_0c0e524e(int);
int FUN_0c0e8e4c(int);
int FUN_0c15aed8(int);
float math_cos_angle16(int);
int nlRand(void);
float math_sin_angle16(int);
extern int FUN_0c187798();
int FUN_0c0e4f8c(int a4, int a5, int a6);
float FUN_0c0e4ffc(int a4);
int FUN_0c0e504e(int a4);
int FUN_0c0e50aa(int a4, int a5, int a6, int a7);
int FUN_0c0e51a8(int a4, int a5, int a6);
int FUN_0c0e5350(int a4);
int FUN_0c0e5372(int a4, int a5, int a6);

int FUN_0c0e4f8c(int a4, int a5, int a6)
{
    register int t0;
    register int t1;

    FUN_0c0c2d56(a4, a5, a6);
    t0 = *(signed char *)((a4 + 0x41D));
    t1 = t0;
    if ((unsigned int)t0 < (unsigned int)0xC) {
        switch ((t0 << 1)) {
            case 0:
            case 2:
            case 4:
            case 6:
            case 8:
            case 12:
            case 16:
            case 18:
            case 20:
            case 22:
            {
                *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
                t0 = *(int *)(((0xC4 + a4) + 0x4));
                *(unsigned char *)(((*(int *)(((0xC4 + a4) + 0x8))) + 0x0)) = 0x0;
                *(unsigned char *)((t0 + 0x0)) = 0x0;
            }
                break;
            default:
            {
                *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
                t0 = *(int *)(((0xC4 + a4) + 0x4));
                *(unsigned char *)(((*(int *)(((0xC4 + a4) + 0x8))) + 0x0)) = 0x1;
                *(unsigned char *)((t0 + 0x0)) = 0x1;
            }
                break;
        }
        t1 = 0xC4;
    }
    return t1;
}

float FUN_0c0e4ffc(int a4)
{
    register float u0;
    register int t1;
    register int t2;
    register float u5;
    register float u8;
    register int t9;
    int t10;
    register float u13;
    register float u16;

    u0 = *(float *)0xC0E50DC;
    t1 = (((struct oC8_int *)(a4))->v);
    t2 = *(int *)0xC542260;
    u5 = (float)(t2 & 0x1);
    if ((int)(t2 & 0x1) < 0) {
        u5 = ((float)(t2 & 0x1) + 4.2949673e+09f);
    }
    u8 = u0;
    u8 = u8 + u0 * u5;
    (((struct o88_float *)(t1))->v) = u8;
    t9 = (((struct oCC_int *)(a4))->v);
    t10 = *(int *)0xC542260;
    u13 = (float)(0x1 & t10);
    if ((int)(0x1 & t10) < 0) {
        u13 = ((float)(0x1 & t10) + 4.2949673e+09f);
    }
    u16 = u0;
    u16 = u16 + u0 * u13;
    (((struct o88_float *)(t9))->v) = u16;
    return u0;
}

int FUN_0c0e504e(int a4)
{
    register int t0;
    register float u0;

    if ((*(signed char *)((a4 + 0x132))) != 0) {
        (((struct o132_uchar *)(a4))->v) = 0x0;
        if (!(((((struct o160_float *)(a4))->v)) > 0.0f)) {
            return FUN_0c0e4f8c(a4, 0xA, (*(signed char *)((a4 + 0x1))));
        }
        (((struct o130_uchar *)(a4))->v) = 0xA;
    }
    if ((*(signed char *)((a4 + 0x130))) != 0) {
        u0 = *(float *)0xC0E50E4;
        (((struct oBC_float *)(a4))->v) = u0;
        (((struct oB8_float *)(a4))->v) = u0;
        (((struct o130_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x130))) - 1);
        t0 = 0x130;
    } else {
        (((struct oBC_float *)(a4))->v) = 1.0f;
        (((struct oB8_float *)(a4))->v) = 1.0f;
        (((struct oB4_float *)(a4))->v) = 1.0f;
        t0 = 0xB4;
    }
    return t0;
}

int FUN_0c0e50aa(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
    } else {
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        FUN_0c0c2ab6(a4, 0x39, a6, a7);
        (((struct o126_uchar *)(a4))->v) = 0x3;
        (((struct o12E_ushort *)(a4))->v) = 0xFFFFFFFF;
        t0 = *(int *)(((0xC4 + a4) + 0x4));
        *(unsigned char *)(((*(int *)(((0xC4 + a4) + 0x8))) + 0x0)) = 0x0;
        *(unsigned char *)((t0 + 0x0)) = 0x0;
        (((struct o50_float *)(a4))->v) = 0.0f;
        (((struct o5C_float *)(a4))->v) = -2.0f;
    }
    t0 = FUN_0c0c2ce4(a4);
    if (t0 != 0) {
        if (t0 == 2) {
            return FUN_0c0e4f8c(a4, 0x3, (*(signed char *)((a4 + 0x1))));
        }
        (((struct o50_float *)(a4))->v) = 0.0f;
        (((struct o5C_float *)(a4))->v) = -2.0f;
    }
    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
    (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
    t0 = FUN_0c0c221e(a4);
    if (t0 == 0) {
        t0 = (((struct o426_short *)(a4))->v);
        (((struct o426_ushort *)(a4))->v) = (t0 + 0x1);
        if ((int)(short)(t0 + 0x1) >= (int)0x258) {
            return FUN_0c0e4f8c(a4, 0xB, (*(signed char *)((a4 + 0x1))));
        }
        t0 = 0x426;
        if ((int)((((struct o426_short *)(a4))->v)) > (int)0x1E0) {
            t1 = *(signed char *)0xC542260;
            (((struct oA8_uchar *)(a4))->v) = (t1 & 0x1);
            t0 = (t1 & 0x1);
        }
        return t0;
    }
    return FUN_0c0e4f8c(a4, 0xB, (*(signed char *)((a4 + 0x1))));
}

int FUN_0c0e51a8(int a4, int a5, int a6)
{
    int t0;
    register int t1;

    t1 = *(signed char *)((a4 + 0x1));
    if (((*(signed char *)(((((short)t1 * (short)0x3938) + 0xC532498) + 0x3721))) == (*(signed char *)((a4 + 0x41C)))) && (t0 = *(signed char *)(((((short)t1 * (short)0x3938) + 0xC532498) + 0x3715)), t0 == 42)) {
        if ((*(signed char *)((a4 + 0x15))) != 0) {
            
        } else {
            *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
            t0 = *(int *)(((0xC4 + a4) + 0x4));
            *(unsigned char *)(((*(int *)(((0xC4 + a4) + 0x8))) + 0x0)) = 0x0;
            *(unsigned char *)((t0 + 0x0)) = 0x0;
            (((struct o128_ushort *)(a4))->v) = ((int)0x1 << (int)(*(signed char *)((a4 + 0x1))));
            (((struct o12E_ushort *)(a4))->v) = (((((struct o12E_short *)(a4))->v)) & (~((int)0x1 << (int)(*(signed char *)((a4 + 0x1))))));
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        }
        (((struct o376C_uint *)((((short)t1 * (short)0x3938) + 0xC532498)))->v) = a4;
        return 0x376C;
    }
    return FUN_0c0e4f8c(a4, 0x2, (*(signed char *)((a4 + 0x1))));
}

int FUN_0c0e5350(int a4)
{
    FUN_0c0e524e(a4);
    FUN_0c0e8e4c(a4);
    FUN_0c0c216e(a4);
    return FUN_0c0e4f8c(a4, 0x5, (*(signed char *)((a4 + 0x1))));
}

