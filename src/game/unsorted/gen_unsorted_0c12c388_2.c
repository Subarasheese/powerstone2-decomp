/* game/unsorted: functions 0C12C388-0C12C718, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c187798(int, int, int);
int FUN_0c12c5c6(int a4, int a5, int a6, int a7, float f4);

int FUN_0c12c5c6(int a4, int a5, int a6, int a7, float f4)
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
                    return FUN_0c03f346(a4, 0xA, a6, a7);
                }
                *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x12);
                t7 = (((struct oC4_int *)(a4))->v);
                (((struct o7C_uint *)(t7))->v) = (((((struct o7C_int *)(t7))->v)) + (*(short *)((a4 + 0x1E))));
                *(volatile int *)((a4 + 0x10));
                FUN_0c187798(a4, 0xA, a6);
                u0 = (((struct o48_float *)(t0))->v);
                (((struct o48_float *)(t0))->v) = (u0 + f4);
                (((struct o44_float *)(t0))->v) = (u0 + f4);
                (((struct o40_float *)(t0))->v) = (u0 + f4);
                u0 = (((struct oBC_float *)(t0))->v);
                (((struct oBC_float *)(t0))->v) = (u0 - f4);
                (((struct oB8_float *)(t0))->v) = (u0 - f4);
                (((struct oB4_float *)(t0))->v) = (u0 - f4);
                t7 = *(short *)((t0 + 0x1C));
                *(unsigned short *)((t0 + 0x1C)) = (t7 - 1);
                t8 = (short)(t7 - 1);
                if ((short)(t7 - 1) == 0) {
                    (((struct o14_uchar *)(t0))->v) = ((*(signed char *)((t0 + 0x14))) + 0x1);
                    t8 = 0x14;
                }
                return t8;
            }
            *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x12);
            t0 = (((struct oC4_int *)(a4))->v);
            (((struct o7C_uint *)(t0))->v) = (((((struct o7C_int *)(t0))->v)) + (*(short *)((a4 + 0x1E))));
            *(volatile int *)((a4 + 0x10));
            FUN_0c187798(a4, 0xA, a6);
            t0 = *(short *)((t4 + 0x1C));
            *(unsigned short *)((t4 + 0x1C)) = (t0 - 1);
            if (((short)(t0 - 1) != 0) && (t1 = *(int *)((t4 + 0x10)), t2 = *(signed char *)((0x3715 + t1)), t2 == 26)) {
                t0 = t2;
            } else {
                (((struct oAC_ushort *)(t4))->v) = 0x21F;
                (((struct oBC_float *)(t4))->v) = 1.0f;
                (((struct oB8_float *)(t4))->v) = 1.0f;
                (((struct oB4_float *)(t4))->v) = 1.0f;
                *(unsigned short *)((t4 + 0x1C)) = t3;
                (((struct o14_uchar *)(t4))->v) = ((*(signed char *)((t4 + 0x14))) + 0x1);
                t0 = 0x14;
            }
            return t0;
        }
        *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x12);
        t0 = (((struct oC4_int *)(a4))->v);
        (((struct o7C_uint *)(t0))->v) = (((((struct o7C_int *)(t0))->v)) + (*(short *)((a4 + 0x1E))));
        *(volatile int *)((a4 + 0x10));
        FUN_0c187798(a4, 0xA, a6);
        u0 = (((struct o48_float *)(t5))->v);
        (((struct o48_float *)(t5))->v) = (u0 + f4);
        (((struct o44_float *)(t5))->v) = (u0 + f4);
        (((struct o40_float *)(t5))->v) = (u0 + f4);
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
    *(unsigned short *)((a4 + 0x1E)) = 0x0;
    *(unsigned short *)((a4 + 0x1C)) = 0xA;
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x12);
    t0 = (((struct oC4_int *)(a4))->v);
    (((struct o7C_uint *)(t0))->v) = (((((struct o7C_int *)(t0))->v)) + (*(short *)((a4 + 0x1E))));
    *(volatile int *)((a4 + 0x10));
    FUN_0c187798(a4, 0xA, a6);
    u0 = (((struct o48_float *)(t6))->v);
    (((struct o48_float *)(t6))->v) = (u0 + f4);
    (((struct o44_float *)(t6))->v) = (u0 + f4);
    (((struct o40_float *)(t6))->v) = (u0 + f4);
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
