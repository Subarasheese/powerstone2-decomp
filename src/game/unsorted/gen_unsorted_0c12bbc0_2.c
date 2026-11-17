/* game/unsorted: functions 0C12BBC0-0C12BE28, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o2C_float { char p[0x2C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c187798(int, int, int);
int FUN_0c12bcbe(int a4, int a5, int a6, int a7, float f4, float f5, float f6);

int FUN_0c12bcbe(int a4, int a5, int a6, int a7, float f4, float f5, float f6)
{
    register int t0;
    int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register float u0;

    t7 = *(signed char *)((a4 + 0x14));
    if (t7 != 0) {
        if (t7 != 1) {
            if (t7 != 2) {
                if (t7 != 3) {
                    return FUN_0c03f346(a4, 0x222, 0xA, a7);
                }
                t7 = (((struct oC4_int *)(a4))->v);
                (((struct o7C_uint *)(t7))->v) = (((((struct o7C_int *)(t7))->v)) + 0x222);
                *(volatile int *)((a4 + 0x10));
                FUN_0c187798(a4, 0x222, 0xA);
                if ((*(signed char *)((t0 + 0x2))) == 0) {
                    u0 = (((((struct o2C_float *)(t0))->v)) + f4);
                } else {
                    u0 = (((((struct o2C_float *)(t0))->v)) + f5);
                }
                (((struct o2C_float *)(t0))->v) = u0;
                u0 = (((struct o48_float *)(t0))->v);
                (((struct o48_float *)(t0))->v) = (u0 - f6);
                (((struct o44_float *)(t0))->v) = (u0 - f6);
                (((struct o40_float *)(t0))->v) = (u0 - f6);
                t7 = *(short *)((t0 + 0x1C));
                *(unsigned short *)((t0 + 0x1C)) = (t7 - 1);
                t8 = (short)(t7 - 1);
                if ((short)(t7 - 1) == 0) {
                    (((struct o14_uchar *)(t0))->v) = ((*(signed char *)((t0 + 0x14))) + 0x1);
                    t8 = 0x14;
                }
                return t8;
            }
            t0 = (((struct oC4_int *)(a4))->v);
            (((struct o7C_uint *)(t0))->v) = (((((struct o7C_int *)(t0))->v)) + 0x222);
            *(volatile int *)((a4 + 0x10));
            FUN_0c187798(a4, 0x222, 0xA);
            if ((*(signed char *)((t4 + 0x2))) == 0) {
                u0 = (((((struct o2C_float *)(t4))->v)) + f4);
            } else {
                u0 = (((((struct o2C_float *)(t4))->v)) + f5);
            }
            (((struct o2C_float *)(t4))->v) = u0;
            t0 = *(short *)((t4 + 0x1C));
            *(unsigned short *)((t4 + 0x1C)) = (t0 - 1);
            if (((short)(t0 - 1) != 0) && (t1 = *(int *)((t4 + 0x10)), t2 = *(signed char *)((0x3715 + t1)), t2 == 26)) {
                t0 = t2;
            } else {
                *(unsigned short *)((t4 + 0x1C)) = t3;
                (((struct o14_uchar *)(t4))->v) = ((*(signed char *)((t4 + 0x14))) + 0x1);
                t0 = 0x14;
            }
            return t0;
        }
        t0 = (((struct oC4_int *)(a4))->v);
        (((struct o7C_uint *)(t0))->v) = (((((struct o7C_int *)(t0))->v)) + 0x222);
        *(volatile int *)((a4 + 0x10));
        FUN_0c187798(a4, 0x222, 0xA);
        if ((*(signed char *)((t5 + 0x2))) == 0) {
            u0 = (((((struct o2C_float *)(t5))->v)) + f4);
        } else {
            u0 = (((((struct o2C_float *)(t5))->v)) + f5);
        }
        (((struct o2C_float *)(t5))->v) = u0;
        u0 = (((struct o48_float *)(t5))->v);
        (((struct o48_float *)(t5))->v) = (u0 + f6);
        (((struct o44_float *)(t5))->v) = (u0 + f6);
        (((struct o40_float *)(t5))->v) = (u0 + f6);
        t0 = *(short *)((t5 + 0x1C));
        *(unsigned short *)((t5 + 0x1C)) = (t0 - 1);
        t1 = (short)(t0 - 1);
        if ((short)(t0 - 1) == 0) {
            *(unsigned short *)((t5 + 0x1C)) = 0x64;
            (((struct o14_uchar *)(t5))->v) = ((*(signed char *)((t5 + 0x14))) + 0x1);
            t1 = 0x14;
        }
        return t1;
    }
    *(unsigned short *)((a4 + 0x1C)) = 0xA;
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    t0 = (((struct oC4_int *)(a4))->v);
    (((struct o7C_uint *)(t0))->v) = (((((struct o7C_int *)(t0))->v)) + 0x222);
    *(volatile int *)((a4 + 0x10));
    FUN_0c187798(a4, 0x222, 0xA);
    if ((*(signed char *)((t6 + 0x2))) == 0) {
        u0 = (((((struct o2C_float *)(t6))->v)) + f4);
    } else {
        u0 = (((((struct o2C_float *)(t6))->v)) + f5);
    }
    (((struct o2C_float *)(t6))->v) = u0;
    u0 = (((struct o48_float *)(t6))->v);
    (((struct o48_float *)(t6))->v) = (u0 + f6);
    (((struct o44_float *)(t6))->v) = (u0 + f6);
    (((struct o40_float *)(t6))->v) = (u0 + f6);
    t0 = *(short *)((t6 + 0x1C));
    *(unsigned short *)((t6 + 0x1C)) = (t0 - 1);
    t1 = (short)(t0 - 1);
    if ((short)(t0 - 1) == 0) {
        *(unsigned short *)((t6 + 0x1C)) = 0x64;
        (((struct o14_uchar *)(t6))->v) = ((*(signed char *)((t6 + 0x14))) + 0x1);
        t1 = 0x14;
    }
    return t1;
}
