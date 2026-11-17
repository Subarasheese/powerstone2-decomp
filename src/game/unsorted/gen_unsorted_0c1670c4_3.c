/* game/unsorted: functions 0C1670C4-0C1675BE, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o12C_ushort { char p[0x12C]; unsigned short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o404_int { char p[0x404]; int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c15f9b4(int, int, int, int);
int FUN_0c17c130(int, int, int);
int FUN_0c187798(int, int, int);
int FUN_0c167426(int a4, int a5, int a6, int a7, float f4);

int FUN_0c167426(int a4, int a5, int a6, int a7, float f4)
{
    int t0;
    register int t1;
    register int t2;
    int t3;
    register int t4;
    register float u0;

    t4 = *(signed char *)((a4 + 0x14));
    if (t4 != 0) {
        if (t4 != 1) {
            if (t4 == 2) {
                return FUN_0c03f346(a4, a5, a6, a7);
            }
            return t4;
        }
        if (((*(signed char *)((a4 + 0x131))) == 0) && (t0 = (((struct o404_int *)(a4))->v), t0 == 0)) {
            if ((int)(*(short *)((a4 + 0x1C))) < (int)0x1E) {
                u0 = *(float *)0xC1675C0;
                t0 = (((struct oC4_int *)(a4))->v);
                (((struct o84_float *)(t0))->v) = (((((struct o84_float *)(t0))->v)) + u0);
                t0 = (((struct oC4_int *)(a4))->v);
                (((struct o88_float *)(t0))->v) = (((((struct o88_float *)(t0))->v)) + u0);
                t0 = (((struct oC4_int *)(a4))->v);
                (((struct o8C_float *)(t0))->v) = (((((struct o8C_float *)(t0))->v)) + 0.0333333351f);
            }
            t0 = *(short *)((a4 + 0x1C));
            if (((int)t0 >= (int)0x14) && ((int)t0 < (int)0x1E)) {
                FUN_0c17c130((a4 + 0x4C), (a4 + 0x4C), (a4 + 0x58));
            }
            FUN_0c17c130((a4 + 0x28), (a4 + 0x28), (a4 + 0x4C));
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
            if ((int)(short)(t0 + 0x1) > (int)0x5A) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                return 0x14;
            }
            return (short)(t0 + 0x1);
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0xF;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        t0 = ((int (*)(int, int, int))(FUN_0c187798))(0x1, 0xC2A3498, a6);
        *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = t1;
        *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x1F;
        *(volatile int *)((a4 + 0xC4));
        t0 = ((int (*)(int, int))(FUN_0c187798))(t1, t2);
        (((struct o8C_float *)(((((struct oC4_int *)(a4))->v))))->v) = 0.0f;
        (((struct o12C_ushort *)(a4))->v) = 0x0;
        (((struct o12E_ushort *)(a4))->v) = 0xF0;
        if (((*(signed char *)((a4 + 0x131))) == 0) && (t3 = (((struct o404_int *)(a4))->v), t3 == 0)) {
            if ((int)(*(short *)((a4 + 0x1C))) < (int)0x1E) {
                u0 = *(float *)0xC1675C0;
                t0 = (((struct oC4_int *)(a4))->v);
                (((struct o84_float *)(t0))->v) = (((((struct o84_float *)(t0))->v)) + u0);
                t0 = (((struct oC4_int *)(a4))->v);
                (((struct o88_float *)(t0))->v) = (((((struct o88_float *)(t0))->v)) + u0);
                t0 = (((struct oC4_int *)(a4))->v);
                (((struct o8C_float *)(t0))->v) = (((((struct o8C_float *)(t0))->v)) + 0.0333333351f);
            }
            t0 = *(short *)((a4 + 0x1C));
            if (((int)t0 >= (int)0x14) && ((int)t0 < (int)0x1E)) {
                FUN_0c17c130((a4 + 0x4C), (a4 + 0x4C), (a4 + 0x58));
            }
            FUN_0c17c130((a4 + 0x28), (a4 + 0x28), (a4 + 0x4C));
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
            if ((int)(short)(t0 + 0x1) > (int)0x5A) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                return 0x14;
            }
            return (short)(t0 + 0x1);
        }
    }
    FUN_0c15f9b4((*(signed char *)((a4 + 0x1))), (a4 + 0x28), (a4 + 0x34), 0x0);
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    return 0x14;
}
