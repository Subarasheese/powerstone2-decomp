/* game/unsorted: functions 0C149560-0C149F2C, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o126_uchar { char p[0x126]; unsigned char v; };
struct o128_ushort { char p[0x128]; unsigned short v; };
struct o12A_short { char p[0x12A]; short v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o130_uchar { char p[0x130]; unsigned char v; };
struct o132_uchar { char p[0x132]; unsigned char v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o26_uchar { char p[0x26]; unsigned char v; };
struct o40_float { char p[0x40]; float v; };
struct o41C_uchar { char p[0x41C]; unsigned char v; };
struct o420_ushort { char p[0x420]; unsigned short v; };
struct o423_uchar { char p[0x423]; unsigned char v; };
struct o424_uchar { char p[0x424]; unsigned char v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o70_float { char p[0x70]; float v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAA_uchar { char p[0xAA]; unsigned char v; };
struct oAB_uchar { char p[0xAB]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03f444(int, int, int);
int math_mat_get_translate(int, int);
int FUN_0c059e9a(int, int, int);
int FUN_0c064d5a(int, int);
int FUN_0c0b21ac(int, int);
int FUN_0c0c212c(int);
int FUN_0c0c2ab6(int, int);
int FUN_0c0c2d56(int, int, int);
extern int FUN_0c0c4b76();
extern int FUN_0c0c4c1c();
extern int FUN_0c0c5024();
extern int FUN_0c0c52c4();
extern int FUN_0c0c8c08();
extern int FUN_0c0c8c36();
int FUN_0c0d409c(int);
int FUN_0c187798(void);
int FUN_0c149560(int a4, int a5);
int FUN_0c1495c0(int a4, int a5, int a6);
int FUN_0c1495dc(int a4);
int FUN_0c1496a4(int a4, int a5);
int FUN_0c149ca4(int a4, int a5, int a6, int a7);
int FUN_0c149dbe(int a4, int a5, int a6, int a7);

int FUN_0c149560(int a4, int a5)
{
    FUN_0c064d5a(a4, ((((a5 << 1) + a5) << 2) + 0xC202A14));
    (((struct o128_ushort *)(a4))->v) = ((int)0x1 << (int)(*(signed char *)((a4 + 0x1))));
    (((struct o12A_ushort *)(a4))->v) = ((~((int)0x1 << (int)(*(signed char *)((a4 + 0x1))))) & ((((struct o12A_short *)(a4))->v)));
    *(unsigned short *)((((0x12A + a4) + 0x2) + 0x0)) = ((~((int)0x1 << (int)(*(signed char *)((a4 + 0x1))))) & (*(short *)((((0x12A + a4) + 0x2) + 0x0))));
    (((struct o12E_ushort *)(a4))->v) = (~((int)0x1 << (int)(*(signed char *)((a4 + 0x1)))));
    return 0x12E;
}

int FUN_0c1495c0(int a4, int a5, int a6)
{
    register int t0;

    (((struct o15_uchar *)(a4))->v) = a5;
    (((struct o16_uchar *)(a4))->v) = 0x0;
    t0 = a5;
    if (a5 == 1) {
        *(unsigned short *)((a4 + 0x1C)) = a6;
        t0 = a6;
    }
    return t0;
}

int FUN_0c1495dc(int a4)
{
    int stk[3];
    register int t10;
    register int t19;

    if ((*(signed char *)((a4 + 0x132))) != 0) {
        (((struct o132_uchar *)(a4))->v) = 0x0;
        (((struct o130_uchar *)(a4))->v) = 0xA;
        math_mat_get_translate((a4 + 0x64), ((int)stk + 0));
        FUN_0c059e9a((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532498), 0xB, ((int)stk + 0));
        if (!(((((struct o160_float *)(a4))->v)) > 0.0f)) {
            FUN_0c1495c0(a4, 0x5, 0x0);
            (((struct o130_uchar *)(a4))->v) = 0x0;
            return 0x130;
        }
        if ((int)(*(signed char *)((a4 + 0x130))) > 0) {
            (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x200);
            (((struct oB4_float *)(a4))->v) = 1.0f;
            (((struct oBC_float *)(a4))->v) = 0.300000012f;
            (((struct oB8_float *)(a4))->v) = 0.300000012f;
            (((struct o130_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x130))) - 1);
            t10 = 0x130;
        } else {
            (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) & 0xFDFF);
            t10 = 0xAC;
        }
        return t10;
    }
    if ((int)(*(signed char *)((a4 + 0x130))) > 0) {
        (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x200);
        (((struct oB4_float *)(a4))->v) = 1.0f;
        (((struct oBC_float *)(a4))->v) = 0.300000012f;
        (((struct oB8_float *)(a4))->v) = 0.300000012f;
        (((struct o130_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x130))) - 1);
        t19 = 0x130;
    } else {
        (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) & 0xFDFF);
        t19 = 0xAC;
    }
    return t19;
}


int FUN_0c149ca4(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
    } else {
        if ((*(signed char *)((0xC535BAC + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938)))) == 0) {
            (((struct oA8_uchar *)(a4))->v) = 0x0;
            return 0xA8;
        }
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o15_uchar *)(a4))->v) = 0x0;
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct o26_uchar *)(a4))->v) = 0x1;
        FUN_0c1495c0(a4, 0x3, 0x0);
    }
    FUN_0c1495dc(a4);
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 5) {
                        if (t0 != 4) {
                            return t0;
                        }
                        return ((int (*)(int, int, int, int))(0xC14996E))(a4, a5, a6, a7);
                    }
                    return ((int (*)(int, int, int, int))(0xC149C00))(a4, a5, a6, a7);
                }
                return ((int (*)(int, int, int, int))(0xC1498E4))(a4, a5, a6, a7);
            }
            return ((int (*)(int, int, int, int))(0xC14984A))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC149762))(a4, a5, a6, a7);
    }
    return FUN_0c1495c0(a4, 0x3, 0x0);
}

int FUN_0c149dbe(int a4, int a5, int a6, int a7)
{
    int stk[2];
    register int t0;
    register int t3;
    register int t5;
    register int t12;
    register int t17;
    register int t19;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) + 0x1);
        (((struct o70_float *)(((((struct oC4_int *)(a4))->v))))->v) = 0.0f;
        t3 = *(signed char *)((a4 + 0x41D));
        if ((unsigned int)t3 < (unsigned int)0xC) {
            switch ((t3 << 1)) {
                case 0:
                case 2:
                {
                    return FUN_0c0d409c(a4);
                }
                case 4:
                {
                    t5 = ((int (*)(int, int, int))(FUN_0c0c4b76))(a4, a5, a6);
                    return ((int (*)(int, int, int, int))(0xC149D80))(a4, a5, a6, a7);
                }
                case 6:
                case 18:
                case 20:
                case 22:
                {
                    return ((int (*)(int, int, int, int))(0xC149D70))(a4, a5, a6, a7);
                }
                case 8:
                {
                    return ((int (*)(int, int, int))(FUN_0c0c4c1c))(a4, a5, a6);
                }
                case 10:
                {
                    return ((int (*)(int, int, int))(FUN_0c0c5024))(a4, a5, a6);
                }
                case 12:
                {
                    return ((int (*)(int, int, int))(FUN_0c0c52c4))(a4, a5, a6);
                }
                case 14:
                {
                    return ((int (*)(int, int, int, int))(FUN_0c0c8c08))(a4, a5, a6, a7);
                }
                default:
                {
                    return ((int (*)(int, int, int, int))(FUN_0c0c8c36))(a4, a5, a6, a7);
                }
            }
        }
        return t3;
    }
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct o41C_uchar *)(a4))->v) = 0xC3;
    (((struct o424_uchar *)(a4))->v) = 0xD;
    FUN_0c0c2d56(a4, 0x0, (*(signed char *)((a4 + 0x1))));
    FUN_0c0c2ab6(a4, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738CA))));
    t12 = *(short *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738D2));
    (((struct o160_float *)(a4))->v) = (float)t12;
    (((struct o420_ushort *)(a4))->v) = (int)(float)t12;
    FUN_0c0c212c(a4);
    (((struct o423_uchar *)(a4))->v) = 0xFFFFFFFF;
    *(unsigned int *)((a4 + 0x3C)) = 0x0;
    *(unsigned int *)((a4 + 0x38)) = 0x0;
    *(unsigned int *)((a4 + 0x34)) = 0x0;
    *(unsigned short *)((a4 + 0x1C)) = 0x2;
    (((struct o126_uchar *)(a4))->v) = 0x0;
    (((struct oAA_uchar *)(a4))->v) = 0x1;
    (((struct oAB_uchar *)(a4))->v) = 0x4;
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) + 0x1);
    (((struct o70_float *)(((((struct oC4_int *)(a4))->v))))->v) = 0.0f;
    t17 = *(signed char *)((a4 + 0x41D));
    if ((unsigned int)t17 < (unsigned int)0xC) {
        switch ((t17 << 1)) {
            case 0:
            case 2:
            {
                return FUN_0c0d409c(a4);
            }
            case 4:
            {
                t19 = ((int (*)(int, int, int, int, int, int))(FUN_0c0c4b76))(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4));
                return ((int (*)(int, int, int, int))(0xC149D80))(a4, a5, a6, a7);
            }
            case 6:
            case 18:
            case 20:
            case 22:
            {
                return ((int (*)(int, int, int, int))(0xC149D70))(a4, a5, a6, a7);
            }
            case 8:
            {
                return ((int (*)(int))(FUN_0c0c4c1c))(a4);
            }
            case 10:
            {
                return ((int (*)(int))(FUN_0c0c5024))(a4);
            }
            case 12:
            {
                return ((int (*)(int))(FUN_0c0c52c4))(a4);
            }
            case 14:
            {
                return ((int (*)(int))(FUN_0c0c8c08))(a4);
            }
            default:
            {
                return ((int (*)(int))(FUN_0c0c8c36))(a4);
            }
        }
    }
    return t17;
}
