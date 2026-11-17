/* game/unsorted: functions 0C0E2194-0C0E2358, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o30_float { char p[0x30]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
extern int FUN_0c03f346();
int FUN_0c179ac0(void);
int FUN_0c0e2194(int a4, int a5, int a6, int a7);

int FUN_0c0e2194(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register float u0;

    if ((*(signed char *)0xC54223C) != 2) {
        return ((int (*)(int, int, int, int))(FUN_0c03f346))(a4, a5, a6, a7);
    }
    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        t0 = *(signed char *)((a4 + 0x15));
        if (t0 != 0) {
            if (t0 != 1) {
                if (t0 != 2) {
                    if (t0 != 3) {
                        return t0;
                    }
                    *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) - 0x1111);
                    (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + (*(float *)((0xC1CA744 + ((*(signed char *)((a4 + 0x3))) << 2)))));
                    u0 = (((struct o48_float *)(a4))->v);
                    (((struct o44_float *)(a4))->v) = u0;
                    (((struct o40_float *)(a4))->v) = u0;
                    (((struct oB4_float *)(a4))->v) = (((((struct oB4_float *)(a4))->v)) - 0.0666666701f);
                    if (0.0f > ((((struct oB4_float *)(a4))->v))) {
                        (((struct oB4_float *)(a4))->v) = 0.0f;
                    }
                    u0 = (((struct oB4_float *)(a4))->v);
                    (((struct oBC_float *)(a4))->v) = u0;
                    (((struct oB8_float *)(a4))->v) = u0;
                    t0 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
                    if ((int)(short)(t0 - 1) <= 0) {
                        return ((int (*)(int, int, int, int))(FUN_0c03f346))(a4, 0xA, a6, a7);
                    }
                    return (short)(t0 - 1);
                }
                *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + 0x1111);
                (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + (*(float *)((0xC1CA738 + ((*(signed char *)((a4 + 0x3))) << 2)))));
                u0 = (((struct o48_float *)(a4))->v);
                (((struct o44_float *)(a4))->v) = u0;
                (((struct o40_float *)(a4))->v) = u0;
                t0 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
                t1 = (short)(t0 - 1);
                if ((int)(short)(t0 - 1) <= 0) {
                    *(unsigned short *)((a4 + 0x1C)) = 0xF;
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x200);
                    (((struct oBC_float *)(a4))->v) = 1.0f;
                    (((struct oB8_float *)(a4))->v) = 1.0f;
                    (((struct oB4_float *)(a4))->v) = 1.0f;
                    t1 = 0xB4;
                }
                return t1;
            }
        } else {
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            *(unsigned short *)((a4 + 0x1C)) = 0xA;
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        u0 = ((((struct o30_float *)(a4))->v));
        u0 = u0 + 50.0f * (((float)((int)((int)(FUN_0c179ac0()) % (int)0x7)) + -3.0f));
        (((struct o30_float *)(a4))->v) = u0;
        *(unsigned char *)((a4 + 0x3)) = ((int)((int)(FUN_0c179ac0()) % (int)0x3));
        (((struct o48_float *)(a4))->v) = 0.0f;
        (((struct o44_float *)(a4))->v) = 0.0f;
        (((struct o40_float *)(a4))->v) = 0.0f;
        t0 = *(signed char *)((a4 + 0x15));
        if (t0 != 0) {
            if (t0 != 1) {
                if (t0 != 2) {
                    if (t0 != 3) {
                        return t0;
                    }
                    *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) - 0x1111);
                    (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + (*(float *)((0xC1CA744 + ((*(signed char *)((a4 + 0x3))) << 2)))));
                    u0 = (((struct o48_float *)(a4))->v);
                    (((struct o44_float *)(a4))->v) = u0;
                    (((struct o40_float *)(a4))->v) = u0;
                    (((struct oB4_float *)(a4))->v) = (((((struct oB4_float *)(a4))->v)) - 0.0666666701f);
                    if (0.0f > ((((struct oB4_float *)(a4))->v))) {
                        (((struct oB4_float *)(a4))->v) = 0.0f;
                    }
                    u0 = (((struct oB4_float *)(a4))->v);
                    (((struct oBC_float *)(a4))->v) = u0;
                    (((struct oB8_float *)(a4))->v) = u0;
                    t0 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
                    if ((int)(short)(t0 - 1) <= 0) {
                        return ((int (*)(int, int))(FUN_0c03f346))(a4, 0xA);
                    }
                    return (short)(t0 - 1);
                }
                *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + 0x1111);
                (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + (*(float *)((0xC1CA738 + ((*(signed char *)((a4 + 0x3))) << 2)))));
                u0 = (((struct o48_float *)(a4))->v);
                (((struct o44_float *)(a4))->v) = u0;
                (((struct o40_float *)(a4))->v) = u0;
                t0 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
                t1 = (short)(t0 - 1);
                if ((int)(short)(t0 - 1) <= 0) {
                    *(unsigned short *)((a4 + 0x1C)) = 0xF;
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x200);
                    (((struct oBC_float *)(a4))->v) = 1.0f;
                    (((struct oB8_float *)(a4))->v) = 1.0f;
                    (((struct oB4_float *)(a4))->v) = 1.0f;
                    t1 = 0xB4;
                }
                return t1;
            }
        } else {
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            *(unsigned short *)((a4 + 0x1C)) = 0xA;
        }
    }
    *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + 0x888);
    (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + (*(float *)((0xC1CA72C + ((*(signed char *)((a4 + 0x3))) << 2)))));
    u0 = (((struct o48_float *)(a4))->v);
    (((struct o44_float *)(a4))->v) = u0;
    (((struct o40_float *)(a4))->v) = u0;
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    t1 = (short)(t0 - 1);
    if ((int)(short)(t0 - 1) <= 0) {
        *(unsigned short *)((a4 + 0x1C)) = 0xA;
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t1 = 0x15;
    }
    return t1;
}
