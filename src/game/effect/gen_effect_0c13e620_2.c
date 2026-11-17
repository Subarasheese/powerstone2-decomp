/* game/effect: functions 0C13E620-0C13E808, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o2C_float { char p[0x2C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c187798(int, int, int);
int FUN_0c13e6c8(int a4, int a5, int a6, int a7);

int FUN_0c13e6c8(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register float u0;

    t4 = *(signed char *)((a4 + 0x1));
    t5 = *(signed char *)((a4 + 0x14));
    if (t5 != 0) {
        if (t5 != 1) {
            return FUN_0c03f346(a4, (((short)t4 * (short)0x3938) + 0xC532498), a6, a7);
        }
        if ((*(signed char *)((a4 + 0x15))) == 0) {
            t5 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t5 - 1);
            if ((int)(short)(t5 - 1) <= 0) {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x200);
                (((struct oBC_float *)(a4))->v) = 1.0f;
                (((struct oB8_float *)(a4))->v) = 1.0f;
                (((struct oB4_float *)(a4))->v) = 1.0f;
            }
        } else {
            (((struct oB4_float *)(a4))->v) = (((((struct oB4_float *)(a4))->v)) - 0.0500000007f);
            if (!(((((struct oB4_float *)(a4))->v)) > 0.0f)) {
                (((struct oB4_float *)(a4))->v) = 0.0f;
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            }
            u0 = (((struct oB4_float *)(a4))->v);
            (((struct oBC_float *)(a4))->v) = u0;
            (((struct oB8_float *)(a4))->v) = u0;
        }
        *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + 0x71C);
        u0 = (((struct o48_float *)(a4))->v);
        (((struct o48_float *)(a4))->v) = (u0 + 0.0199999996f);
        (((struct o44_float *)(a4))->v) = (u0 + 0.0199999996f);
        (((struct o40_float *)(a4))->v) = (u0 + 0.0199999996f);
        *(volatile int *)((a4 + 0x10));
        FUN_0c187798(a4, (((short)t4 * (short)0x3938) + 0xC532498), a6);
        if ((*(signed char *)((t1 + 0x2))) == 0) {
            u0 = (((((struct o5C_float *)(t1))->v)) + 0.5f);
        } else {
            u0 = (((((struct o5C_float *)(t1))->v)) - 0.5f);
        }
        (((struct o5C_float *)(t1))->v) = u0;
        (((struct o2C_float *)(t1))->v) = (((((struct o2C_float *)(t1))->v)) + ((((struct o5C_float *)(t1))->v)));
        t5 = *(signed char *)((t0 + 0x3715));
        t0 = t5;
        if (t5 != 26) {
            (((struct o14_uchar *)(t1))->v) = 0x63;
            t0 = 0x14;
        }
        return t0;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    *(unsigned short *)((a4 + 0x1C)) = 0x3C;
    u0 = 0.0f;
    if ((*(signed char *)((a4 + 0x2))) != 0) {
        u0 = 300.0f;
    }
    (((struct o5C_float *)(a4))->v) = u0;
    if ((*(signed char *)((a4 + 0x15))) == 0) {
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        if ((int)(short)(t0 - 1) <= 0) {
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x200);
            (((struct oBC_float *)(a4))->v) = 1.0f;
            (((struct oB8_float *)(a4))->v) = 1.0f;
            (((struct oB4_float *)(a4))->v) = 1.0f;
        }
    } else {
        (((struct oB4_float *)(a4))->v) = (((((struct oB4_float *)(a4))->v)) - 0.0500000007f);
        if (!(((((struct oB4_float *)(a4))->v)) > 0.0f)) {
            (((struct oB4_float *)(a4))->v) = 0.0f;
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        }
        u0 = (((struct oB4_float *)(a4))->v);
        (((struct oBC_float *)(a4))->v) = u0;
        (((struct oB8_float *)(a4))->v) = u0;
    }
    *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + 0x71C);
    u0 = (((struct o48_float *)(a4))->v);
    (((struct o48_float *)(a4))->v) = (u0 + 0.0199999996f);
    (((struct o44_float *)(a4))->v) = (u0 + 0.0199999996f);
    (((struct o40_float *)(a4))->v) = (u0 + 0.0199999996f);
    *(volatile int *)((a4 + 0x10));
    FUN_0c187798(a4, (((short)t4 * (short)0x3938) + 0xC532498), a6);
    if ((*(signed char *)((t3 + 0x2))) == 0) {
        u0 = (((((struct o5C_float *)(t3))->v)) + 0.5f);
    } else {
        u0 = (((((struct o5C_float *)(t3))->v)) - 0.5f);
    }
    (((struct o5C_float *)(t3))->v) = u0;
    (((struct o2C_float *)(t3))->v) = (((((struct o2C_float *)(t3))->v)) + ((((struct o5C_float *)(t3))->v)));
    t0 = *(signed char *)((t2 + 0x3715));
    t1 = t0;
    if (t0 != 26) {
        (((struct o14_uchar *)(t3))->v) = 0x63;
        t1 = 0x14;
    }
    return t1;
}
