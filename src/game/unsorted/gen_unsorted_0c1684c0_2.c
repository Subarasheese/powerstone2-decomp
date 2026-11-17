/* game/unsorted: functions 0C1684C0-0C1689DE, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o12C_ushort { char p[0x12C]; unsigned short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o404_int { char p[0x404]; int v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c15f9b4(int, int, int, int);
int FUN_0c17c130(int, int, int);
int FUN_0c187798(int);
int FUN_0c16868c(int a4, int a5, int a6);
int FUN_0c1687dc(int a4, int a5, int a6, int a7, float f4);

int FUN_0c16868c(int a4, int a5, int a6)
{
    int stk[3];
    register int t0;
    register int t6;
    register int t5;

    *(unsigned char *)(((int)stk + 8)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 0)) = a6;
    t0 = FUN_0c03f444(0x5, 0x0, 0x2);
    t6 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((int)stk + 8)));
        *(unsigned int *)((t0 + 0x4)) = 0xC1684C0;
        *(volatile int *)(((int)stk + 4));
        t6 = FUN_0c187798(t0);
        *(unsigned int *)((t5 + 0x38)) = (*(int *)(((int)stk + 0)));
    }
    return t6;
}

int FUN_0c1687dc(int a4, int a5, int a6, int a7, float f4)
{
    int t0;
    register int t1;
    int t2;
    register int t3;

    t3 = *(signed char *)((a4 + 0x14));
    if (t3 != 0) {
        if (t3 != 1) {
            if (t3 == 2) {
                return FUN_0c03f346(a4, a5, a6, a7);
            }
            return t3;
        }
        t3 = (((struct oC4_int *)(a4))->v);
        (((struct o80_uint *)(t3))->v) = (((((struct o80_int *)(t3))->v)) + 0x800);
        t3 = (((struct oC8_int *)(a4))->v);
        (((struct o80_uint *)(t3))->v) = (((((struct o80_int *)(t3))->v)) - 0x800);
        if (((*(signed char *)((a4 + 0x131))) == 0) && (t0 = (((struct o404_int *)(a4))->v), t0 == 0)) {
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
            if ((int)(short)((t0 - 1) + 0x1) <= 0) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                return 0x14;
            }
            t0 = *(short *)((a4 + 0x1E));
            *(unsigned short *)((a4 + 0x1E)) = (t0 + 0x1);
            if ((int)(short)((t0 + 0x1) - 1) < (int)0xA) {
                (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) + 0.100000001f);
                (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) + 0.100000001f);
                (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + 0.100000001f);
            }
            return FUN_0c17c130((a4 + 0x28), (a4 + 0x28), (a4 + 0x4C));
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x0, 0x3D, (*(int *)0xC4B40CC));
        FUN_0c03744a(((((struct oC8_int *)(a4))->v)), 0x1, 0x3D, (*(int *)0xC4B40CC));
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0x1F;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        FUN_0c187798(0x1);
        *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = t1;
        *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0xF;
        *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = t1;
        *(unsigned short *)((((((struct oC8_int *)(a4))->v)) + 0x6)) = 0xF;
        (((struct o12C_ushort *)(a4))->v) = 0x0;
        (((struct o12E_ushort *)(a4))->v) = 0xF0;
        t0 = (((struct oC4_int *)(a4))->v);
        (((struct o80_uint *)(t0))->v) = (((((struct o80_int *)(t0))->v)) + 0x800);
        t0 = (((struct oC8_int *)(a4))->v);
        (((struct o80_uint *)(t0))->v) = (((((struct o80_int *)(t0))->v)) - 0x800);
        if (((*(signed char *)((a4 + 0x131))) == 0) && (t2 = (((struct o404_int *)(a4))->v), t2 == 0)) {
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
            if ((int)(short)((t0 - 1) + 0x1) <= 0) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                return 0x14;
            }
            t0 = *(short *)((a4 + 0x1E));
            *(unsigned short *)((a4 + 0x1E)) = (t0 + 0x1);
            if ((int)(short)((t0 + 0x1) - 1) < (int)0xA) {
                (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) + 0.100000001f);
                (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) + 0.100000001f);
                (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + 0.100000001f);
            }
            return FUN_0c17c130((a4 + 0x28), (a4 + 0x28), (a4 + 0x4C));
        }
    }
    FUN_0c15f9b4((*(signed char *)((a4 + 0x1))), (a4 + 0x28), (a4 + 0x34), 0x2);
    (((struct o14_uchar *)(a4))->v) = 0x2;
    return 0x14;
}
