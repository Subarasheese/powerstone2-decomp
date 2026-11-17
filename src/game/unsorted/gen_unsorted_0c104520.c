/* game/unsorted: functions 0C104520-0C10462C, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB0_float { char p[0xB0]; float v; };
extern int FUN_0c03f346();
float math_sin_angle16(int);
int FUN_0c104520(int a4);

int FUN_0c104520(int a4)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;

    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o15_uchar *)(a4))->v) = 0x0;
        (((struct o22_ushort *)(a4))->v) = 0x0;
        (((struct o48_float *)(a4))->v) = 1.0f;
    }
    (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) + 0x1);
    u0 = math_sin_angle16((((((((struct o22_short *)(a4))->v)) << 8) << 2) << 1));
    u1 = ((math_sin_angle16((((((((struct o22_short *)(a4))->v)) << 8) << 2) << 2))) * 0.0700000003f);
    u1 = u1 + 0.100000001f * u0;
    (((struct o40_float *)(a4))->v) = (u1 + 0.829999983f);
    (((struct o44_float *)(a4))->v) = (u1 + 0.829999983f);
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                (((struct oB0_float *)(a4))->v) = (((((struct oB0_float *)(a4))->v)) - 0.100000001f);
                if (0.0f > ((((struct oB0_float *)(a4))->v))) {
                    return FUN_0c03f346(a4);
                }
                return 0xB0;
            }
            t0 = *(signed char *)0xC541F43;
            t1 = t0;
            if (t0 == 0) {
                t0 = *(signed char *)0xC541F44;
                t1 = t0;
                if (t0 == 0) {
                    (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x400);
                    (((struct oB0_float *)(a4))->v) = 1.0f;
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    t1 = 0x15;
                }
            }
            return t1;
        }
    } else {
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x400);
        (((struct oB0_float *)(a4))->v) = 0.0f;
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    }
    (((struct oB0_float *)(a4))->v) = (((((struct oB0_float *)(a4))->v)) + 0.100000001f);
    t0 = 0xB0;
    if (((((struct oB0_float *)(a4))->v)) > 1.0f) {
        (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) & 0xFBFF);
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t0 = 0x15;
    }
    return t0;
}
