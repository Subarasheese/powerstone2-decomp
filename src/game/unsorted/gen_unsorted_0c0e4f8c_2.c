/* game/unsorted: functions 0C0E4F8C-0C0E5710, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o128_ushort { char p[0x128]; unsigned short v; };
struct o12E_short { char p[0x12E]; short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o1B_uchar { char p[0x1B]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o376C_uint { char p[0x376C]; unsigned int v; };
struct o40_float { char p[0x40]; float v; };
struct o41C_uchar { char p[0x41C]; unsigned char v; };
struct o420_ushort { char p[0x420]; unsigned short v; };
struct o422_uchar { char p[0x422]; unsigned char v; };
struct o423_uchar { char p[0x423]; unsigned char v; };
struct o424_uchar { char p[0x424]; unsigned char v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAA_uchar { char p[0xAA]; unsigned char v; };
struct oAB_uchar { char p[0xAB]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c0c216e(int);
int FUN_0c0c2a80(int);
int FUN_0c0c2ab6(int, int);
int FUN_0c0c4770(int);
int FUN_0c0c47a4(int);
int FUN_0c0c4bcc(int);
int FUN_0c0c52c4(int);
int FUN_0c0c8c36(int);
int FUN_0c0e4f8c(int, int, int);
int FUN_0c0e4ffc(int);
int FUN_0c0e504e(int);
int FUN_0c0e50aa(int);
int FUN_0c0e51a8(int);
int FUN_0c0e5350(int);
int FUN_0c0e5372(int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c187798(int, int);
int FUN_0c0e524e(int a4);
int FUN_0c0e5522(int a4);
int FUN_0c0e563e(int a4, int a5, int a6);

int FUN_0c0e524e(int a4)
{
    int t0;
    register int t1;
    register float u0;

    t1 = *(signed char *)((a4 + 0x1));
    if (((*(signed char *)(((((short)t1 * (short)0x3938) + 0xC532498) + 0x3721))) == (*(signed char *)((a4 + 0x41C)))) && (t0 = *(signed char *)(((((short)t1 * (short)0x3938) + 0xC532498) + 0x3715)), t0 == 42)) {
        t0 = *(signed char *)((a4 + 0x15));
        if (t0 != 0) {
            if (t0 != 1) {
            } else {
                FUN_0c0e4ffc(a4);
                t0 = *(int *)(((((short)t1 * (short)0x3938) + 0xC532498) + 0x38));
                *(unsigned int *)((a4 + 0x38)) = t0;
                u0 = ((((struct o28_float *)((((short)t1 * (short)0x3938) + 0xC532498)))->v));
                u0 = u0 + 79.0f * (math_sin_angle16(t0));
                (((struct o28_float *)(a4))->v) = u0;
                u0 = ((((struct o30_float *)((((short)t1 * (short)0x3938) + 0xC532498)))->v));
                u0 = u0 + 79.0f * (math_cos_angle16((*(int *)((a4 + 0x38)))));
                (((struct o30_float *)(a4))->v) = u0;
                (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)((((short)t1 * (short)0x3938) + 0xC532498)))->v)) + -10.0f);
            }
        } else {
            FUN_0c0e4f8c(a4, 0x5, (*(signed char *)((a4 + 0x1))));
            (((struct o128_ushort *)(a4))->v) = ((int)0x1 << (int)(*(signed char *)((a4 + 0x1))));
            (((struct o12E_ushort *)(a4))->v) = (((((struct o12E_short *)(a4))->v)) & (~(((int)0x1 << (int)(*(signed char *)((a4 + 0x1)))) | 0xF0)));
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            FUN_0c0e4ffc(a4);
            t0 = *(int *)(((((short)t1 * (short)0x3938) + 0xC532498) + 0x38));
            *(unsigned int *)((a4 + 0x38)) = t0;
            u0 = ((((struct o28_float *)((((short)t1 * (short)0x3938) + 0xC532498)))->v));
            u0 = u0 + 79.0f * (math_sin_angle16(t0));
            (((struct o28_float *)(a4))->v) = u0;
            u0 = ((((struct o30_float *)((((short)t1 * (short)0x3938) + 0xC532498)))->v));
            u0 = u0 + 79.0f * (math_cos_angle16((*(int *)((a4 + 0x38)))));
            (((struct o30_float *)(a4))->v) = u0;
            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)((((short)t1 * (short)0x3938) + 0xC532498)))->v)) + -10.0f);
        }
        t0 = FUN_0c0c216e(a4);
        if (t0 != 0) {
            return FUN_0c0e4f8c(a4, 0xA, (*(signed char *)((a4 + 0x1))));
        }
        (((struct o376C_uint *)((((short)t1 * (short)0x3938) + 0xC532498)))->v) = a4;
        return 0x376C;
    }
    return FUN_0c0e4f8c(a4, 0x2, (*(signed char *)((a4 + 0x1))));
}

int FUN_0c0e5522(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
    } else {
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        *(unsigned char *)((a4 + 0x3)) = 0x0;
        *(unsigned char *)((a4 + 0x2)) = 0x0;
        (((struct o420_ushort *)(a4))->v) = (*(short *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738D2)));
        (((struct o160_float *)(a4))->v) = (*(float *)0xC286EAC);
        (((struct o422_uchar *)(a4))->v) = 0x0;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oAA_uchar *)(a4))->v) = 0x1;
        (((struct oAB_uchar *)(a4))->v) = 0x2;
    }
    FUN_0c0e504e(a4);
    t0 = *(signed char *)((a4 + 0x41D));
    if ((unsigned int)t0 < (unsigned int)0xC) {
        switch ((t0 << 1)) {
            case 0:
            {
                return FUN_0c0c4770(a4);
            }
            case 2:
            {
                return FUN_0c0c47a4(a4);
            }
            case 4:
            {
                return FUN_0c0e50aa(a4);
            }
            case 6:
            {
                return FUN_0c0c4bcc(a4);
            }
            case 8:
            {
                return FUN_0c0e51a8(a4);
            }
            case 10:
            {
                return FUN_0c0e524e(a4);
            }
            case 12:
            {
                return FUN_0c0c52c4(a4);
            }
            case 14:
            {
                return FUN_0c0e5350(a4);
            }
            case 16:
            {
                return FUN_0c0c8c36(a4);
            }
            case 18:
            case 20:
            {
                return FUN_0c0e5372(a4);
            }
            default:
            {
                return FUN_0c0c2a80(a4);
            }
        }
    }
    return t0;
}

int FUN_0c0e563e(int a4, int a5, int a6)
{
    register int t0;
    register int t1;

    t0 = FUN_0c037320(0x31, (*(int *)0xC4B410C));
    t1 = FUN_0c03f444(0x9, 0x0, t0);
    if (t1 != 0) {
        FUN_0c03733c(t1, 0x31, (*(int *)0xC4B410C));
        (((struct oAC_ushort *)(t1))->v) = 0x1F;
        (((struct oA9_uchar *)(t1))->v) = 0x21;
        *(unsigned short *)((((((struct oC8_int *)(t1))->v)) + 0x6)) = 0x1F;
        t0 = (((struct oC8_int *)(t1))->v);
        (((struct o8C_float *)(t0))->v) = 1.0f;
        (((struct o88_float *)(t0))->v) = 1.0f;
        (((struct o84_float *)(t0))->v) = 1.0f;
        *(unsigned short *)((((((struct oCC_int *)(t1))->v)) + 0x6)) = 0x1F;
        t0 = (((struct oCC_int *)(t1))->v);
        (((struct o8C_float *)(t0))->v) = 1.0f;
        (((struct o88_float *)(t0))->v) = 1.0f;
        (((struct o84_float *)(t0))->v) = 1.0f;
        *(unsigned int *)((t1 + 0x4)) = 0xC0E5522;
        (((struct o48_float *)(t1))->v) = 1.0f;
        (((struct o44_float *)(t1))->v) = 1.0f;
        (((struct o40_float *)(t1))->v) = 1.0f;
        FUN_0c187798(t0, 0x1F);
        (((struct o41C_uchar *)(t1))->v) = 0xCC;
        (((struct o424_uchar *)(t1))->v) = 0x0;
        (((struct o1B_uchar *)(t1))->v) = a5;
        (((struct o423_uchar *)(t1))->v) = 0xFFFFFFFF;
        FUN_0c0e4f8c(t1, 0x0, 0xFFFFFFFF);
        FUN_0c0c2ab6(t1, 0x39);
        (((struct o422_uchar *)(t1))->v) = 0x0;
        return t1;
    }
    return 0x0;
}
