/* game/unsorted: functions 0C15E078-0C15E960, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o41C_int { char p[0x41C]; int v; };
struct o41C_uint { char p[0x41C]; unsigned int v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c179ac0(void);
float math_sin_angle16(int);
int FUN_0c187798(int, int, int);
int FUN_0c15e246(int a4, int a5, float f4, float f5);

int FUN_0c15e246(int a4, int a5, float f4, float f5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    int t4;
    register int t5;
    register int t6;
    register int t7;
    register float u0;
    register float u1;

    t4 = *(signed char *)((a4 + 0x14));
    t5 = *(int *)((a4 + 0x10));
    t6 = (((struct oC4_int *)(a4))->v);
    if (t4 != 0) {
        if (t4 != 1) {
            return FUN_0c03f346(a4, a5, t6, t5);
        }
        t4 = *(signed char *)((t5 + 0x41D));
        if ((t4 != 7) && (t4 != 5)) {
            (((struct o14_uchar *)(a4))->v) = 0x63;
        }
        (((struct o7C_uint *)(t6))->v) = (((((struct o7C_int *)(t6))->v)) + 0x38E);
        t4 = *(signed char *)((a4 + 0x15));
        if (t4 != 0) {
            t5 = t4;
            if (t4 != 1) {
            } else {
                t4 = *(short *)((a4 + 0x1E));
                *(unsigned short *)((a4 + 0x1E)) = (t4 - 1);
                if ((int)(short)(t4 - 1) <= 0) {
                    (((struct o15_uchar *)(a4))->v) = 0x0;
                    t4 = (int)((int)(FUN_0c179ac0()) % (int)0x14);
                    *(unsigned short *)((a4 + 0x1E)) = (t4 + 0xA);
                    t7 = (t4 + 0xA);
                } else {
                    t4 = (((struct o41C_int *)(a4))->v);
                    (((struct o41C_uint *)(a4))->v) = (t4 + 0x38E);
                    u0 = math_sin_angle16((t4 + 0x38E));
                    u1 = u0;
                    if (!(u0 > 0.0f)) {
                        u1 = 0.0f;
                    }
                    u0 = u1;
                    if (!(1.0f > u1)) {
                        u0 = 1.0f;
                    }
                    (((struct oBC_float *)(a4))->v) = u0;
                    (((struct oB8_float *)(a4))->v) = u0;
                    (((struct oB4_float *)(a4))->v) = u0;
                    t7 = 0xB4;
                }
                t5 = t7;
            }
            t4 = t5;
        } else {
            t5 = *(short *)((a4 + 0x1E));
            *(unsigned short *)((a4 + 0x1E)) = (t5 - 1);
            t7 = (short)(t5 - 1);
            if ((int)(short)(t5 - 1) <= 0) {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                *(unsigned short *)((a4 + 0x1E)) = 0x24;
                (((struct o41C_uint *)(a4))->v) = 0x0;
                t7 = 0x24;
            }
            t4 = t7;
        }
        return t4;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    *(unsigned short *)((a4 + 0x1E)) = 0x0;
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x200);
    (((struct oBC_float *)(a4))->v) = 0.0f;
    (((struct oB8_float *)(a4))->v) = 0.0f;
    (((struct oB4_float *)(a4))->v) = 0.0f;
    FUN_0c187798(0x0, a5, t6);
    t4 = *(signed char *)((t0 + 0x41D));
    if ((t4 != 7) && (t4 != 5)) {
        (((struct o14_uchar *)(a4))->v) = 0x63;
    }
    (((struct o7C_uint *)(t1))->v) = (((((struct o7C_int *)(t1))->v)) + 0x38E);
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        t1 = t0;
        if (t0 != 1) {
        } else {
            t0 = *(short *)((a4 + 0x1E));
            *(unsigned short *)((a4 + 0x1E)) = (t0 - 1);
            if ((int)(short)(t0 - 1) <= 0) {
                (((struct o15_uchar *)(a4))->v) = t2;
                t0 = (int)((int)(FUN_0c179ac0()) % (int)0x14);
                *(unsigned short *)((a4 + 0x1E)) = (t0 + 0xA);
                t2 = (t0 + 0xA);
            } else {
                t0 = (((struct o41C_int *)(a4))->v);
                (((struct o41C_uint *)(a4))->v) = (t0 + 0x38E);
                u0 = math_sin_angle16((t0 + 0x38E));
                u1 = u0;
                if (!(u0 > 0.0f)) {
                    u1 = 0.0f;
                }
                u0 = u1;
                if (!(1.0f > u1)) {
                    u0 = 1.0f;
                }
                (((struct oBC_float *)(a4))->v) = u0;
                (((struct oB8_float *)(a4))->v) = u0;
                (((struct oB4_float *)(a4))->v) = u0;
                t2 = 0xB4;
            }
            t1 = t2;
        }
        t0 = t1;
    } else {
        t1 = *(short *)((a4 + 0x1E));
        *(unsigned short *)((a4 + 0x1E)) = (t1 - 1);
        t2 = (short)(t1 - 1);
        if ((int)(short)(t1 - 1) <= 0) {
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            *(unsigned short *)((a4 + 0x1E)) = 0x24;
            (((struct o41C_uint *)(a4))->v) = t3;
            t2 = 0x24;
        }
        t0 = t2;
    }
    return t0;
}
