/* game/unsorted: functions 0C0D352C-0C0D36D8, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o2C_float { char p[0x2C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB0_float { char p[0xB0]; float v; };
struct oC0_int { char p[0xC0]; int v; };
extern int FUN_0c03f346();
int math_mat_get_translate(int, int);
int FUN_0c0d04c4(int, int);
int FUN_0c17c130(int, int, int);
int FUN_0c0d352c(int a4, int a5, int a6, int a7);

int FUN_0c0d352c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    if ((*(signed char *)0xC54223C) != 0) {
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 == 3) {
                    return FUN_0c03f346(a4, a5, a6, a7);
                }
                return t0;
            }
            if (!(-10.0f > ((((struct o50_float *)(a4))->v)))) {
                (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) - 0.0250000004f);
            }
            if (!(-10.0f > ((((struct o54_float *)(a4))->v)))) {
                (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) - 0.100000001f);
            }
            FUN_0c17c130((a4 + 0x28), (a4 + 0x28), (a4 + 0x4C));
            if (-1500.0f > ((((struct o2C_float *)(a4))->v))) {
                (((struct oB0_float *)(a4))->v) = ((((((struct o2C_float *)(a4))->v)) + 2300.0f) / 800.0f);
                if (0.0f > ((((struct oB0_float *)(a4))->v))) {
                    (((struct oB0_float *)(a4))->v) = 0.0f;
                }
            }
            if ((*(signed char *)((a4 + 0x2))) == 1) {
                *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) + 0xB6);
            }
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
            t1 = (short)(t0 - 1);
            if ((int)(short)(t0 - 1) <= 0) {
                (((struct o14_uchar *)(a4))->v) = 0x3;
                t1 = 0x14;
            }
            return t1;
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oA4_uint *)(a4))->v) = ((*(int *)((((*(signed char *)((a4 + 0x1B))) << 2) + 0xC540D94))) + 0x64);
        FUN_0c0d04c4((0xAC + a4), (a4 + 0x34));
        t0 = 0x0;
        for (;;) {
            if ((int)t0 >= (int)((((struct oC0_int *)(a4))->v))) {
                break;
            }
            t1 = t0;
            t1 = (t1 << 2);
            t1 = (t1 + (0xC4 + a4));
            t1 = (*(int *)((t1 + 0x0)));
            FUN_0c0d04c4((t1 + 0x6), (t1 + 0x78));
            t0 = (t0 + 0x1);
        }
    }
    t0 = *(signed char *)((0x14 + (*(int *)((0xC540D94 + ((*(signed char *)((a4 + 0x1B))) << 2))))));
    t1 = t0;
    if (t0 == 2) {
        (((struct o14_uchar *)(a4))->v) = 0x2;
        math_mat_get_translate((a4 + 0x64), (a4 + 0x28));
        (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x402);
        (((struct oB0_float *)(a4))->v) = 1.0f;
        (((struct oA4_uint *)(a4))->v) = 0x0;
        (((struct o50_float *)(a4))->v) = -1.0f;
        (((struct o54_float *)(a4))->v) = 0.0f;
        *(unsigned short *)((a4 + 0x1C)) = 0x384;
        t1 = 0x384;
    }
    return t1;
}
