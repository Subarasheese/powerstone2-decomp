/* game/menu/select: functions 0C11B708-0C11C088, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o78_int { char p[0x78]; int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c037498(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c058a6e(int, int, int, int, int, int);
int FUN_0c05a080(int, int);
int FUN_0c119cc6(int, int, int, float);
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c18778c(void);
int FUN_0c187798(int);
int FUN_0c11b708(int a4, int a5, int a6, int a7);

int FUN_0c11b708(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;
    register float u2;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 == 1) {
            FUN_0c058a6e((((((struct oC4_int *)(a4))->v)) + 0x14), ((((*(signed char *)((a4 + 0x2))) << 2) << 2) + 0xC292134), 0xC2A0C90, (*(short *)((a4 + 0x1C))), 0x3C, 0x0);
            t1 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t1 + 0x1);
            t2 = (short)(t1 + 0x1);
            if ((int)(short)(t1 + 0x1) <= (int)0x3C) {
            } else {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                *(unsigned short *)((a4 + 0x1C)) = 0x0;
                t2 = 0x0;
            }
            return t2;
        }
        if (t0 == 2) {
            t1 = (((struct oC4_int *)(a4))->v);
            (((struct o78_uint *)(t1))->v) = (((((struct o78_int *)(t1))->v)) - 0x200);
            t1 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t1 + 0x1);
            if ((int)(short)(t1 + 0x1) <= (int)0x20) {
                return (short)(t1 + 0x1);
            }
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            *(unsigned short *)((a4 + 0x1C)) = 0x0;
            t1 = *(signed char *)((a4 + 0x2));
            if (t1 != 0) {
                return t1;
            }
            return FUN_0c05a080(0x15, 0x0);
        }
        if (t0 == 3) {
            if ((int)(*(short *)((a4 + 0x1C))) <= (int)((((struct o0_int *)0xC2920C8)->v))) {
                FUN_0c119cc6(0xC2920D4, 0x8, (a4 + 0x28), (((float)(*(short *)((a4 + 0x1C))) * 4.0f) / (float)((((struct o0_int *)0xC2920C8)->v))));
                u0 = (((struct o4_float *)0xC2920C8)->v);
                u1 = math_cos_angle16(((int)((((((((struct o4C_float *)(a4))->v)) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF));
                u2 = ((((struct o28_float *)(a4))->v));
                u2 = u2 + u1 * u0;
                (((struct o28_float *)(a4))->v) = u2;
                u0 = (((struct o4_float *)0xC2920C8)->v);
                u1 = math_sin_angle16(((int)((((((((struct o4C_float *)(a4))->v)) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF));
                u2 = ((((struct o2C_float *)(a4))->v));
                u2 = u2 + u1 * u0;
                (((struct o2C_float *)(a4))->v) = u2;
            }
            t0 = *(signed char *)((a4 + 0x15));
            if (t0 != 0) {
                t1 = t0;
                if (t0 != 1) {
                } else {
                    (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) + (((((struct o8_float *)0xC2920C8)->v)) / (float)((((struct o0_int *)0xC2920C8)->v))));
                    t0 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
                    t2 = (short)(t0 + 0x1);
                    if ((int)(short)(t0 + 0x1) > (int)((((struct o0_int *)0xC2920C8)->v))) {
                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                        t2 = 0x14;
                    }
                    t1 = t2;
                }
                t0 = t1;
            } else {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                t0 = 0x15;
            }
            return t0;
        }
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct oAC_ushort *)(a4))->v) = 0xF;
    (((struct oA9_uchar *)(a4))->v) = 0x21;
    t0 = *(short *)((a4 + 0x1E));
    if ((*(signed char *)((a4 + 0x2))) == 0) {
        FUN_0c05a080(0x14, 0x0);
    } else {
        t1 = a4;
    }
    if (t0 == 0x90) {
        FUN_0c037498(((((struct oC4_int *)(a4))->v)), 0x9, 0x11, (*(int *)0xC4B410C));
    } else {
        t2 = t1;
    }
    if (t0 == 0x91) {
        FUN_0c037498(((((struct oC4_int *)(a4))->v)), 0xA, 0x11, (*(int *)0xC4B410C));
    } else {
        t1 = t2;
    }
    if (((int)t0 >= (int)0x80) && ((int)t0 <= (int)0x8F)) {
        FUN_0c037498(((((struct oC4_int *)(a4))->v)), (t0 - 128), 0x10, (*(int *)0xC4B410C));
    } else {
        t2 = t1;
    }
    if (((int)t0 >= (int)0x92) && ((int)t0 <= (int)0x95)) {
        FUN_0c037498(((((struct oC4_int *)(a4))->v)), (0xFFFFFF6E + t0), 0x10, (*(int *)0xC4B410C));
    } else {
        t1 = t2;
    }
    if (((int)t0 >= (int)0x96) && ((int)t0 <= (int)0x9E)) {
        FUN_0c037498(((((struct oC4_int *)(a4))->v)), (0xFFFFFF6A + t0), 0x11, (*(int *)0xC4B410C));
    } else {
        t0 = t1;
    }
    *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x41F;
    *(volatile int *)((a4 + 0xC4));
    FUN_0c187798(t0);
    *(volatile int *)((a4 + 0xC4));
    *(volatile signed char *)((a4 + 0x2));
    FUN_0c18778c();
    if ((int)(*(short *)((a4 + 0x1C))) <= (int)((((struct o0_int *)0xC2920C8)->v))) {
        FUN_0c119cc6(0xC2920D4, 0x8, (a4 + 0x28), (((float)(*(short *)((a4 + 0x1C))) * 4.0f) / (float)((((struct o0_int *)0xC2920C8)->v))));
        u0 = math_cos_angle16(((int)((((((((struct o4C_float *)(a4))->v)) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF));
        u1 = ((((struct o28_float *)(a4))->v));
        u1 = u1 + u0 * ((((struct o4_float *)0xC2920C8)->v));
        (((struct o28_float *)(a4))->v) = u1;
        u0 = (((struct o4_float *)0xC2920C8)->v);
        u1 = math_sin_angle16(((int)((((((((struct o4C_float *)(a4))->v)) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF));
        u2 = ((((struct o2C_float *)(a4))->v));
        u2 = u2 + u1 * u0;
        (((struct o2C_float *)(a4))->v) = u2;
    }
    FUN_0c058a6e((((((struct oC4_int *)(a4))->v)) + 0x14), ((((*(signed char *)((a4 + 0x2))) << 2) << 2) + 0xC292134), 0xC2A0C90, (*(short *)((a4 + 0x1C))), 0x3C, 0x0);
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
    t1 = (short)(t0 + 0x1);
    if ((int)(short)(t0 + 0x1) <= (int)0x3C) {
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0x0;
        t1 = 0x0;
    }
    return t1;
}
