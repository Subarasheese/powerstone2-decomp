/* game/unsorted: functions 0C0F7B60-0C0F7EE0, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB0_float { char p[0xB0]; float v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c0f7b60(int, int);
int FUN_0c0f8d64(int);
int FUN_0c0f7ca0(int a4);

int FUN_0c0f7ca0(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o15_uchar *)(a4))->v) = 0x0;
        (((struct o16_uchar *)(a4))->v) = 0x2;
        *(unsigned short *)((a4 + 0x1C)) = 0xFF;
        *(unsigned short *)((a4 + 0x1E)) = 0x3C;
        (((struct o22_ushort *)(a4))->v) = (*(short *)0xC541F4E);
    }
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 == 1) {
            (((struct o0_uint *)0xC542440)->v) = ((((int)((float)((unsigned int)(((((struct o4_int *)0xC542440)->v)) & 0xFF0000) >> 16) + 1.65749991f) & 0xFF) << 16) | 0xFF000000);
            (((struct o0_uint *)0xC542440)->v) = (((((struct o0_int *)0xC542440)->v)) | (((int)((float)((unsigned int)(((((struct o4_int *)0xC542440)->v)) & 0xFF00) >> 8) + 2.19300008f) & 0xFF) << 8));
            (((struct o0_uint *)0xC542440)->v) = (((((struct o0_int *)0xC542440)->v)) | (0xFF & (int)((float)(unsigned char)((((struct o4_int *)0xC542440)->v)) + 2.58824992f)));
            t1 = (((struct o0_int *)0xC542440)->v);
            (((struct o8_uint *)0xC542440)->v) = t1;
            (((struct o4_uint *)0xC542440)->v) = t1;
            (((struct oB0_float *)(a4))->v) = (((((struct oB0_float *)(a4))->v)) - 0.0500000007f);
            t1 = 0xB0;
            if (!(((((struct oB0_float *)(a4))->v)) > 0.0f)) {
                (((struct oB0_float *)(a4))->v) = 0.0f;
                (((struct oA8_uchar *)(a4))->v) = 0x0;
                (((struct o8_uint *)0xC542440)->v) = 0xFF212B33;
                (((struct o4_uint *)0xC542440)->v) = 0xFF212B33;
                (((struct o0_uint *)0xC542440)->v) = 0xFF212B33;
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                t1 = 0x15;
            }
            return t1;
        }
        if (t0 == 2) {
            if ((int)(unsigned char)(*(signed char *)0xC541F43) > (int)0x10) {
                return FUN_0c03f346(a4, 0xFF000000, 0x0, 0x2);
            }
            return t0;
        }
        return t0;
    }
    t0 = (((struct o22_short *)(a4))->v);
    (((struct o22_ushort *)(a4))->v) = (t0 - 1);
    if ((int)(short)(t0 - 1) <= (int)0x14) {
        (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x400);
        (((struct oB0_float *)(a4))->v) = 1.0f;
        (((struct o8_uint *)0xC542440)->v) = 0xFF000000;
        (((struct o4_uint *)0xC542440)->v) = 0xFF000000;
        (((struct o0_uint *)0xC542440)->v) = 0xFF000000;
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        return 0x15;
    }
    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            t1 = t0;
            if (t0 != 2) {
            } else {
                t0 = *(short *)((a4 + 0x1C));
                (((struct o0_uint *)0xC542440)->v) = ((((t0 << 16) | (t0 << 8)) | t0) | 0xFF000000);
                t0 = (((struct o0_int *)0xC542440)->v);
                (((struct o8_uint *)0xC542440)->v) = t0;
                (((struct o4_uint *)0xC542440)->v) = t0;
                *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 16);
                t0 = *(short *)((a4 + 0x1C));
                t2 = t0;
                if ((int)t0 < 0) {
                    *(unsigned short *)((a4 + 0x1C)) = (*(short *)((a4 + 0x1E)));
                    t0 = *(short *)((a4 + 0x1E));
                    *(unsigned short *)((a4 + 0x1E)) = (((int)((unsigned int)((int)((unsigned int)t0 + (unsigned int)0x0)) + ((((int)0x0 > (int)t0)) ? 1u : 0u))) >> 1);
                    if ((int)(*(short *)((a4 + 0x1E))) < (int)0xA) {
                        *(unsigned short *)((a4 + 0x1E)) = 0x5A;
                    }
                    (((struct o16_uchar *)(a4))->v) = 0x0;
                    (((struct o8_uint *)0xC542440)->v) = 0xFF000000;
                    (((struct o4_uint *)0xC542440)->v) = 0xFF000000;
                    (((struct o0_uint *)0xC542440)->v) = 0xFF000000;
                    t2 = 0x16;
                }
                t1 = t2;
            }
            t0 = t1;
        } else {
            *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
            t1 = *(short *)((a4 + 0x1C));
            t2 = t1;
            if ((int)t1 >= 0) {
            } else {
                *(unsigned short *)((a4 + 0x1C)) = 0xFF;
                (((struct o16_uchar *)(a4))->v) = 0x2;
                t2 = 0x16;
            }
            t0 = t2;
        }
        return t0;
    }
    *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
    t0 = *(short *)((a4 + 0x1C));
    if ((int)t0 >= 0) {
        return t0;
    }
    if ((int)((((struct o22_short *)(a4))->v)) <= (int)0x44) {
        return 0x22;
    }
    *(unsigned short *)((a4 + 0x1C)) = 0x20;
    (((struct o16_uchar *)(a4))->v) = 0x1;
    FUN_0c0f7b60(0x1, (*(short *)((a4 + 0x1C))));
    (((struct o8_uint *)0xC542440)->v) = 0xFFFFFFFF;
    (((struct o4_uint *)0xC542440)->v) = 0xFFFFFFFF;
    (((struct o0_uint *)0xC542440)->v) = 0xFFFFFFFF;
    FUN_0c0f8d64(0x0);
    return FUN_0c0f8d64(0x1);
}
