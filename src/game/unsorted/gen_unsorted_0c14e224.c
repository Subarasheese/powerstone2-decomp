/* game/unsorted: functions 0C14E224-0C14E592, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c07e2f4(int, int);
float math_sin_angle16(int);
int FUN_0c14e224(int a4, int a5, int a6, int a7);

int FUN_0c14e224(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    int t2;
    register int t3;
    register int t4;
    register float u0;
    register float u1;

    t3 = *(signed char *)((a4 + 0x1));
    t4 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t4 - 1);
    if ((((int)(short)(t4 - 1) > 0) && (t0 = *(signed char *)(((((short)t3 * (short)0x3938) + 0xC532498) + 0x3715)), t0 == 26)) || (t1 = *(signed char *)((a4 + 0x14)), (int)t1 >= (int)0x4)) {
    } else {
        (((struct o14_uchar *)(a4))->v) = 0x4;
    }
    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 4) {
                t1 = (((struct oC4_int *)(a4))->v);
                *(unsigned short *)((t1 + 0x6)) = ((*(short *)((t1 + 0x6))) | 0x200);
                t1 = (((struct oC4_int *)(a4))->v);
                (((struct o20_float *)(t1))->v) = 1.0f;
                (((struct o1C_float *)(t1))->v) = 1.0f;
                (((struct o18_float *)(t1))->v) = 1.0f;
                t1 = (((struct oC8_int *)(a4))->v);
                *(unsigned short *)((t1 + 0x6)) = ((*(short *)((t1 + 0x6))) | 0x200);
                t1 = (((struct oC8_int *)(a4))->v);
                (((struct o20_float *)(t1))->v) = 1.0f;
                (((struct o1C_float *)(t1))->v) = 1.0f;
                (((struct o18_float *)(t1))->v) = 1.0f;
                (((struct o12A_ushort *)(a4))->v) = 0x0;
                *(unsigned short *)((a4 + 0x1E)) = 0xF;
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t1 = (((struct oC4_int *)(a4))->v);
                (((struct o80_uint *)(t1))->v) = (((((struct o80_int *)(t1))->v)) + 0x11C7);
                t1 = (((struct oC4_int *)(a4))->v);
                (((struct o84_float *)(t1))->v) = (((((struct o84_float *)(t1))->v)) + 0.0200000014f);
                t1 = (((struct oC4_int *)(a4))->v);
                (((struct o88_float *)(t1))->v) = ((((struct o84_float *)(t1))->v));
                t1 = (((struct oC4_int *)(a4))->v);
                (((struct o18_float *)(t1))->v) = (((((struct o18_float *)(t1))->v)) / 1.5f);
                t1 = (((struct oC4_int *)(a4))->v);
                u0 = (((struct o18_float *)(t1))->v);
                (((struct o20_float *)(t1))->v) = u0;
                (((struct o1C_float *)(t1))->v) = u0;
                t1 = (((struct oC8_int *)(a4))->v);
                (((struct o80_uint *)(t1))->v) = (((((struct o80_int *)(t1))->v)) + 0x888);
                t1 = (((struct oC8_int *)(a4))->v);
                (((struct o84_float *)(t1))->v) = (((((struct o84_float *)(t1))->v)) + 0.0333333351f);
                t1 = (((struct oC8_int *)(a4))->v);
                (((struct o88_float *)(t1))->v) = ((((struct o84_float *)(t1))->v));
                t1 = (((struct oC8_int *)(a4))->v);
                (((struct o18_float *)(t1))->v) = (((((struct o18_float *)(t1))->v)) / 1.20000005f);
                t1 = (((struct oC8_int *)(a4))->v);
                u0 = (((struct o18_float *)(t1))->v);
                (((struct o20_float *)(t1))->v) = u0;
                (((struct o1C_float *)(t1))->v) = u0;
                t1 = *(short *)((a4 + 0x1E));
                *(unsigned short *)((a4 + 0x1E)) = (t1 - 1);
                t4 = (short)(t1 - 1);
                if ((int)(short)(t1 - 1) <= 0) {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    t4 = 0x14;
                }
                return t4;
            }
            if (t0 == 5) {
                t1 = (((struct oC4_int *)(a4))->v);
                (((struct o80_uint *)(t1))->v) = (((((struct o80_int *)(t1))->v)) + 0x11C7);
                t1 = (((struct oC4_int *)(a4))->v);
                (((struct o84_float *)(t1))->v) = (((((struct o84_float *)(t1))->v)) + 0.0200000014f);
                t1 = (((struct oC4_int *)(a4))->v);
                (((struct o88_float *)(t1))->v) = ((((struct o84_float *)(t1))->v));
                t1 = (((struct oC4_int *)(a4))->v);
                (((struct o18_float *)(t1))->v) = (((((struct o18_float *)(t1))->v)) / 1.5f);
                t1 = (((struct oC4_int *)(a4))->v);
                u0 = (((struct o18_float *)(t1))->v);
                (((struct o20_float *)(t1))->v) = u0;
                (((struct o1C_float *)(t1))->v) = u0;
                t1 = (((struct oC8_int *)(a4))->v);
                (((struct o80_uint *)(t1))->v) = (((((struct o80_int *)(t1))->v)) + 0x888);
                t1 = (((struct oC8_int *)(a4))->v);
                (((struct o84_float *)(t1))->v) = (((((struct o84_float *)(t1))->v)) + 0.0333333351f);
                t1 = (((struct oC8_int *)(a4))->v);
                (((struct o88_float *)(t1))->v) = ((((struct o84_float *)(t1))->v));
                t1 = (((struct oC8_int *)(a4))->v);
                (((struct o18_float *)(t1))->v) = (((((struct o18_float *)(t1))->v)) / 1.20000005f);
                t1 = (((struct oC8_int *)(a4))->v);
                u0 = (((struct o18_float *)(t1))->v);
                (((struct o20_float *)(t1))->v) = u0;
                (((struct o1C_float *)(t1))->v) = u0;
                t1 = *(short *)((a4 + 0x1E));
                *(unsigned short *)((a4 + 0x1E)) = (t1 - 1);
                t4 = (short)(t1 - 1);
                if ((int)(short)(t1 - 1) <= 0) {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    t4 = 0x14;
                }
                return t4;
            }
            if (t0 == 6) {
                return FUN_0c03f346(a4, a5, a6, a7);
            }
            return t0;
        }
        t0 = (((struct oC4_int *)(a4))->v);
        (((struct o80_uint *)(t0))->v) = (((((struct o80_int *)(t0))->v)) + (int)((((((struct o4C_float *)(a4))->v)) * 65536.0f) / 360.0f));
        t0 = (((struct oC4_int *)(a4))->v);
        u0 = math_sin_angle16((int)(((float)(((*(short *)((a4 + 0x1C))) << 2) << 1) * 65536.0f) / 360.0f));
        u1 = 0.699999988f;
        u1 = u1 + 0.200000003f * u0;
        (((struct o88_float *)(t0))->v) = u1;
        (((struct o84_float *)(t0))->v) = u1;
        t0 = (((struct oC8_int *)(a4))->v);
        (((struct o80_uint *)(t0))->v) = (((((struct o80_int *)(t0))->v)) + (int)(((((((struct o4C_float *)(a4))->v)) / (1.0f + 1.0f)) * 65536.0f) / 360.0f));
        t0 = (((struct oC8_int *)(a4))->v);
        (((struct o84_float *)(t0))->v) = (((((struct o84_float *)(t0))->v)) + 0.0437499993f);
        if (!(0.699999988f > ((((struct o84_float *)(((((struct oC8_int *)(a4))->v))))->v)))) {
            (((struct o84_float *)(((((struct oC8_int *)(a4))->v))))->v) = 0.699999988f;
        }
        t0 = (((struct oC8_int *)(a4))->v);
        (((struct o88_float *)(t0))->v) = ((((struct o84_float *)(t0))->v));
        if ((*(short *)((a4 + 0x1E))) == 1) {
            (((struct o12A_ushort *)(a4))->v) = 0x0;
            *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
        }
        if (!(28.0f > ((((struct o8C_float *)(((((struct o118_int *)((((short)t3 * (short)0x3938) + 0xC532498)))->v))))->v))) && (t2 = *(short *)((a4 + 0x1E)), t2 == 0)) {
            FUN_0c07e2f4(a4, 0x66);
            *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
        }
        t0 = 0x8C;
        if (32.0f > ((((struct o8C_float *)(((((struct o118_int *)((((short)t3 * (short)0x3938) + 0xC532498)))->v))))->v))) {
        } else {
            (((struct o14_uchar *)(a4))->v) = 0x4;
            t0 = 0x14;
        }
        return t0;
    }
    if (45.0f > ((((struct o4C_float *)(a4))->v))) {
        (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) + 4.0f);
    }
    t0 = (((struct oC4_int *)(a4))->v);
    (((struct o80_uint *)(t0))->v) = (((((struct o80_int *)(t0))->v)) + (int)((((((struct o4C_float *)(a4))->v)) * 65536.0f) / 360.0f));
    (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + 0.0533333346f);
    if (!(0.800000012f > ((((struct o48_float *)(a4))->v)))) {
        (((struct o48_float *)(a4))->v) = 0.800000012f;
    }
    u0 = (((struct o40_float *)(a4))->v);
    (((struct o40_float *)(a4))->v) = (u0 + 0.0466666669f);
    if (!(0.699999988f > (u0 + 0.0466666669f))) {
        (((struct o40_float *)(a4))->v) = 0.699999988f;
        *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((a4 + 0x1E)) = 0x0;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    (((struct o44_float *)(a4))->v) = ((((struct o40_float *)(a4))->v));
    return 0x44;
}
