/* game/unsorted: functions 0C0D8F18-0C0D9220, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12C_ushort { char p[0x12C]; unsigned short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o2C_float { char p[0x2C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
int FUN_0c03f346(int, int, int, int);
int thunk_FUN_0c05abb2(int, int);
int FUN_0c0659d6(int, int, int);
int FUN_0c07e420(int, int);
int FUN_0c0d805c(int);
extern int FUN_0c187798();
int FUN_0c0d8f18(int a4, int a5, int a6, int a7, float f4, float f5);

int FUN_0c0d8f18(int a4, int a5, int a6, int a7, float f4, float f5)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;

    if ((int)(*(signed char *)0xC54223C) > (int)0x1) {
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        t0 = *(signed char *)((a4 + 0x15));
        switch (t0) {
        case 0:
            t0 = FUN_0c0659d6(a4, 0x0, 0x1);
            if (t0 == 0) {
            } else {
                thunk_FUN_0c05abb2(0x41, 0x0);
                (((struct o50_float *)(a4))->v) = -10.0f;
                *(unsigned short *)((a4 + 0x1C)) = 0x1E;
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            }
            break;
        case 1:
            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
            (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) - (((((struct o50_float *)(a4))->v)) / 1.29999995f));
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
            if ((short)(t0 - 1) != 0) {
            } else {
                thunk_FUN_0c05abb2(0x41, 0x0);
                (((struct o50_float *)(a4))->v) = -10.0f;
                *(unsigned short *)((a4 + 0x1C)) = 0xF;
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            }
            break;
        case 2:
            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
            (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) - (((((struct o50_float *)(a4))->v)) / 1.29999995f));
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
            if ((short)(t0 - 1) == 0) {
                thunk_FUN_0c05abb2(0x41, 0x0);
                (((struct o50_float *)(a4))->v) = -10.0f;
                *(unsigned short *)((a4 + 0x1C)) = 0xF;
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            }
            break;
        case 3:
            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
            (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) - (((((struct o50_float *)(a4))->v)) / 1.29999995f));
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
            if ((short)(t0 - 1) == 0) {
                thunk_FUN_0c05abb2(0x41, 0x0);
                (((struct o50_float *)(a4))->v) = 0.0f;
                (((struct o5C_float *)(a4))->v) = -1.0f;
                *(unsigned short *)((a4 + 0x1C)) = 0xF;
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            }
            break;
        case 4:
            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
            (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
            if ((short)(t0 - 1) == 0) {
                FUN_0c0d805c(a4);
                (((struct oA8_uchar *)(a4))->v) = 0x0;
                (((struct o12E_ushort *)(a4))->v) = 0xFCF;
                (((struct o12C_ushort *)(a4))->v) = 0x0;
                (((struct o12A_ushort *)(a4))->v) = 0xF;
                (((struct o50_float *)(a4))->v) = 0.0f;
                (((struct o5C_float *)(a4))->v) = -1.0f;
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            }
            break;
        case 5:
            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
            (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
            break;
        }
        u0 = (((struct o2C_float *)(a4))->v);
        u1 = *(float *)0xC54109C;
        if (u0 > (u1 + -1000.0f)) {
            t0 = 0xC0D9230;
            if (!((u1 + 1000.0f) > u0)) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t0 = 0x14;
            }
            t1 = t0;
        } else {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t1 = 0x14;
        }
        return t1;
    }
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        t1 = t0;
        if (t0 != 1) {
        } else {
            u0 = (((struct o2C_float *)(a4))->v);
            u1 = *(float *)0xC54109C;
            t0 = 0x2C;
            if (!(u0 > (u1 + -1000.0f))) {
            } else {
                t2 = 0xC0D9054;
                if (!((u1 + 1000.0f) > u0)) {
                } else {
                    (((struct oAC_ushort *)(a4))->v) = 0xF;
                    (((struct oA9_uchar *)(a4))->v) = 0x21;
                    (((struct oA8_uchar *)(a4))->v) = 0x1;
                    (((struct o12E_ushort *)(a4))->v) = 0xFCF;
                    (((struct o12C_ushort *)(a4))->v) = 0x0;
                    (((struct o12A_ushort *)(a4))->v) = 0x0;
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    (((struct o15_uchar *)(a4))->v) = 0x0;
                    t2 = 0x15;
                }
                t0 = t2;
            }
            t1 = t0;
        }
        t0 = t1;
    } else {
        (((struct oAC_ushort *)(a4))->v) = 0x0;
        (((struct oA9_uchar *)(a4))->v) = 0x0;
        (((struct oA8_uchar *)(a4))->v) = 0x0;
        (((struct o12E_ushort *)(a4))->v) = 0x0;
        (((struct o12C_ushort *)(a4))->v) = 0x0;
        (((struct o12A_ushort *)(a4))->v) = 0x0;
        FUN_0c07e420(a4, 0x3);
        *(volatile signed char *)((a4 + 0x2));
        FUN_0c187798();
        *(unsigned int *)((a4 + 0x38)) = (int)(((float)(*(int *)((0xC287948 + ((*(signed char *)((a4 + 0x2))) << 2)))) * 65536.0f) / 360.0f);
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        u0 = (((struct o2C_float *)(a4))->v);
        u1 = *(float *)0xC54109C;
        t1 = 0x2C;
        if (!(u0 > (u1 + -1000.0f))) {
        } else {
            t2 = 0xC0D9054;
            if (!((u1 + 1000.0f) > u0)) {
            } else {
                (((struct oAC_ushort *)(a4))->v) = 0xF;
                (((struct oA9_uchar *)(a4))->v) = 0x21;
                (((struct oA8_uchar *)(a4))->v) = 0x1;
                (((struct o12E_ushort *)(a4))->v) = 0xFCF;
                (((struct o12C_ushort *)(a4))->v) = 0x0;
                (((struct o12A_ushort *)(a4))->v) = 0x0;
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                (((struct o15_uchar *)(a4))->v) = 0x0;
                t2 = 0x15;
            }
            t1 = t2;
        }
        t0 = t1;
    }
    return t0;
}
