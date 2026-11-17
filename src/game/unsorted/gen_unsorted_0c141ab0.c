/* game/unsorted: functions 0C141AB0-0C141C9C, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o24_short { char p[0x24]; short v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
float math_sin_angle16(int);
int FUN_0c18778c(void);
int FUN_0c187798(void);
int FUN_0c141ab0(int a4, int a5);
int FUN_0c141b86(int a4, int a5, int a6, int a7);

int FUN_0c141ab0(int a4, int a5)
{
    register int t0;
    register int t3;
    register int t4;
    register int t16;
    register float u12;

    t0 = 0x0;
    for (;;) {
        t3 = FUN_0c037320(0x5, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
        t4 = FUN_0c03f444(0x5, 0x0, t3);
        t16 = t4;
        if (t4 != 0) {
            FUN_0c03733c(t4, 0x5, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
            (((struct oAC_ushort *)(t4))->v) = 0x21F;
            (((struct oA9_uchar *)(t4))->v) = (*(signed char *)((a4 + 0xA9)));
            *(unsigned int *)((t4 + 0x4)) = 0xC141B86;
            *(unsigned char *)((t4 + 0x1)) = (*(signed char *)((a4 + 0x1)));
            *(unsigned char *)((t4 + 0x2)) = t0;
            *(unsigned int *)((t4 + 0x10)) = a4;
            (((struct o22_ushort *)(t4))->v) = ((((struct o24_short *)(a4))->v));
            (((struct oA4_uint *)(t4))->v) = a5;
            *(unsigned int *)((t4 + 0x34)) = 0x71C;
            u12 = *(float *)(((t0 << 2) + 0xC20234C));
            (((struct o44_float *)(t4))->v) = u12;
            (((struct o40_float *)(t4))->v) = u12;
            (((struct o48_float *)(t4))->v) = 0.0f;
            FUN_0c187798();
            *(volatile signed char *)((t4 + 0x1));
            t16 = (FUN_0c18778c());
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x4) {
            break;
        }
    }
    return t16;
}

int FUN_0c141b86(int a4, int a5, int a6, int a7)
{
    register int t0;
    register float u0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o15_uchar *)(a4))->v) = 0x0;
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        *(unsigned short *)((a4 + 0x1C)) = 0x0;
    }
    if ((*(signed char *)((0xC5324B0 + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938)))) != 0) {
        t0 = (((struct oC4_int *)(a4))->v);
        (((struct o80_uint *)(t0))->v) = (((((struct o80_int *)(t0))->v)) + 0x238E);
        t0 = *(signed char *)((a4 + 0x15));
        if (t0 != 0) {
            if (t0 != 1) {
                if (t0 != 2) {
                    return t0;
                }
                (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) - 0.100000001f);
                (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) - 0.100000001f);
                if (!(((((struct o40_float *)(a4))->v)) > 0.0f)) {
                    return FUN_0c03f346(a4, a5, a6, a7);
                }
                return 0x40;
            }
            *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
            u0 = 1.0f;
            u0 = u0 + 0.400000006f * (math_sin_angle16(((*(short *)((a4 + 0x1C))) << 14)));
            (((struct o48_float *)(a4))->v) = u0;
            t0 = 0x14;
            if ((int)(*(signed char *)(((*(int *)((a4 + 0x10))) + 0x14))) > (int)0x1) {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                t0 = 0x15;
            }
            return t0;
        }
        (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + 0.100000001f);
        t0 = 0x48;
        if ((*(float *)((0xC20234C + ((*(signed char *)((a4 + 0x2))) << 2)))) > ((((struct o48_float *)(a4))->v))) {
        } else {
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            t0 = 0x15;
        }
        return t0;
    }
    return FUN_0c03f346(a4, a5, a6, a7);
}
