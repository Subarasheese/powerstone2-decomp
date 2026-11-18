/* game/unsorted: functions 0C148D04-0C149556, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

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
struct o26_uchar { char p[0x26]; unsigned char v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
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
int FUN_0c149000(int);
int FUN_0c14914c(int);
int FUN_0c1491e4(int);
extern int FUN_0c187798();
int FUN_0c148d04(int a4, int a5);
int FUN_0c148d64(int a4, int a5, int a6);
int FUN_0c148d80(int a4);
int FUN_0c148e48(int a4, int a5);
int FUN_0c1493fe(int a4);
int FUN_0c14947e(int a4, int a5, int a6, int a7);

int FUN_0c148d04(int a4, int a5)
{
    FUN_0c064d5a(a4, ((((a5 << 1) + a5) << 2) + 0xC2029E4));
    (((struct o128_ushort *)(a4))->v) = ((int)0x1 << (int)(*(signed char *)((a4 + 0x1))));
    (((struct o12A_ushort *)(a4))->v) = ((~((int)0x1 << (int)(*(signed char *)((a4 + 0x1))))) & ((((struct o12A_short *)(a4))->v)));
    *(unsigned short *)((((0x12A + a4) + 0x2) + 0x0)) = ((~((int)0x1 << (int)(*(signed char *)((a4 + 0x1))))) & (*(short *)((((0x12A + a4) + 0x2) + 0x0))));
    (((struct o12E_ushort *)(a4))->v) = (~((int)0x1 << (int)(*(signed char *)((a4 + 0x1)))));
    return 0x12E;
}

int FUN_0c148d64(int a4, int a5, int a6)
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

int FUN_0c148d80(int a4)
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
            FUN_0c148d64(a4, 0x5, 0x0);
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


int FUN_0c1493fe(int a4)
{
    int stk[3];
    register int t0;
    register int t4;
    register int t23;
    register int t30;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        t30 = t0;
        if (t0 != 1) {
        } else {
            (((struct oA8_uchar *)(a4))->v) = ((((*(short *)((a4 + 0x1C))) & 0x4) >> 1) >> 1);
            t4 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t4 - 1);
            t30 = (short)(t4 - 1);
            if ((int)(short)(t4 - 1) <= 0) {
                FUN_0c0b21ac(a4, 0x6);
                (((struct o130_uchar *)(a4))->v) = 0x0;
                t30 = (FUN_0c148d64(a4, 0x1, 0x12C));
            }
        }
    } else {
        *(unsigned short *)((a4 + 0x1C)) = 0x3C;
        FUN_0c148d04(a4, 0x1);
        math_mat_get_translate((a4 + 0x64), ((int)stk + 0));
        FUN_0c059e9a((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532498), 0x3, ((int)stk + 0));
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = ((((*(short *)((a4 + 0x1C))) & 0x4) >> 1) >> 1);
        t23 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t23 - 1);
        t30 = (short)(t23 - 1);
        if ((int)(short)(t23 - 1) <= 0) {
            FUN_0c0b21ac(a4, 0x6);
            (((struct o130_uchar *)(a4))->v) = 0x0;
            t30 = (FUN_0c148d64(a4, 0x1, 0x12C));
        }
    }
    return t30;
}

int FUN_0c14947e(int a4, int a5, int a6, int a7)
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
        FUN_0c148d64(a4, 0x3, 0x0);
        (((struct o26_uchar *)(a4))->v) = 0x1;
    }
    FUN_0c148d80(a4);
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        if (t0 != 5) {
                            return t0;
                        }
                        return FUN_0c1493fe(a4);
                    }
                    return FUN_0c1491e4(a4);
                }
                return FUN_0c14914c(a4);
            }
            return ((int (*)(int, int, int, int))(0xC1490BA))(a4, a5, a6, a7);
        }
        return FUN_0c149000(a4);
    }
    return FUN_0c148d64(a4, 0x3, 0x0);
}
