/* game/unsorted: functions 0C0D14E4-0C0D1734, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o136_uchar { char p[0x136]; unsigned char v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o2C_float { char p[0x2C]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB0_float { char p[0xB0]; float v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c07e420(int, int);
int FUN_0c17c130(int, int, int);
int FUN_0c0d14e4(int a4, int a5, int a6, int a7, float f4);

int FUN_0c0d14e4(int a4, int a5, int a6, int a7, float f4)
{
    register int t0;
    register int t1;
    register int t2;

    if ((*(signed char *)0xC54223C) != 0) {
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) - 0.300000012f);
                (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) - 0.699999988f);
                FUN_0c17c130((a4 + 0x28), (a4 + 0x28), (a4 + 0x4C));
                if ((*(signed char *)((a4 + 0x2))) == 1) {
                    *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) + 0xB6);
                }
                if (-1500.0f > ((((struct o2C_float *)(a4))->v))) {
                    (((struct oB0_float *)(a4))->v) = ((((((struct o2C_float *)(a4))->v)) + 2300.0f) / 800.0f);
                    if (0.0f > ((((struct oB0_float *)(a4))->v))) {
                        (((struct oB0_float *)(a4))->v) = 0.0f;
                    }
                }
                t1 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
                t2 = (short)(t1 - 1);
                if ((int)(short)(t1 - 1) <= 0) {
                    (((struct o14_uchar *)(a4))->v) = 0x3;
                    t2 = 0x14;
                }
                return t2;
            }
            if (t0 == 3) {
                return FUN_0c03f346(a4, a5, a6, a7);
            }
            return t0;
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o16_uchar *)(a4))->v) = 0x0;
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct o12A_ushort *)(a4))->v) = 0xFFFFFFFF;
        (((struct o136_uchar *)(a4))->v) = 0x0;
        (((struct o20_ushort *)(a4))->v) = 0x0;
        FUN_0c07e420(a4, 0x1);
        if ((int)(*(signed char *)((a4 + 0x1B))) >= 0) {
            (((struct oA4_uint *)(a4))->v) = ((*(int *)(((((*(signed char *)((a4 + 0x1B))) << 2) + 0xC540D94) + 0x0))) + 0x64);
        }
    }
    t0 = *(signed char *)0xC54098D;
    t1 = *(signed char *)((a4 + 0x16));
    switch (t1) {
    case 0:
        if ((int)t0 < (int)0x4) {
        } else {
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        }
        break;
    case 1:
        if ((int)t0 < (int)0x6) {
        } else {
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        }
        break;
    case 2:
        if ((int)t0 >= (int)0x7) {
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
            *(unsigned short *)((a4 + 0x1C)) = 0x1A4;
        }
        break;
    case 3:
        t1 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
        if ((int)(short)(t1 - 1) < 0) {
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
            *(unsigned short *)((a4 + 0x1C)) = 0xF0;
        }
        break;
    case 4:
        t1 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
        if ((int)(short)(t1 - 1) < 0) {
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        }
        break;
    }
    *(unsigned int *)((a4 + 0x3C)) = ((*(int *)((a4 + 0x3C))) + (*(int *)(((0xC1C79D0 + (((*(signed char *)((a4 + 0x16))) << 2) << 1)) + ((*(signed char *)((a4 + 0x2))) << 2)))));
    t0 = (((struct o20_short *)(a4))->v);
    (((struct o20_ushort *)(a4))->v) = (t0 + 0x1);
    if ((int)(short)(t0 + 0x1) >= (int)0x3C) {
        (((struct o136_uchar *)(a4))->v) = 0x0;
        (((struct o20_ushort *)(a4))->v) = 0x0;
    }
    t0 = *(signed char *)((0x14 + (*(int *)((0xC540D94 + ((*(signed char *)((a4 + 0x1B))) << 2))))));
    t1 = t0;
    if (t0 == 2) {
        (((struct o14_uchar *)(a4))->v) = 0x2;
        (((struct oA4_uint *)(a4))->v) = 0x0;
        (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x400);
        (((struct oB0_float *)(a4))->v) = 1.0f;
        (((struct o50_float *)(a4))->v) = 5.0f;
        (((struct o54_float *)(a4))->v) = 5.0f;
        if ((*(signed char *)((a4 + 0x2))) == 0) {
            (((struct o4C_float *)(a4))->v) = 5.0f;
        } else {
            (((struct o4C_float *)(a4))->v) = -5.0f;
        }
        *(unsigned short *)((a4 + 0x1C)) = 0x258;
        (((struct o12A_ushort *)(a4))->v) = 0x0;
        t1 = 0x12A;
    }
    return t1;
}
