/* game/unsorted: functions 0C13299C-0C132B88, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c037320(int, int);
int FUN_0c037498(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int thunk_FUN_0c058310(int, int);
extern int FUN_0c187798();
int FUN_0c13299c(int a4);
int FUN_0c132a60(int a4, int a5, int a6, int a7);

int FUN_0c13299c(int a4)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = FUN_0c037320(0x1, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
    t1 = FUN_0c03f444(0x5, 0x0, t0);
    t0 = t1;
    if (t1 != 0) {
        *(unsigned char *)((t1 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned int *)((t1 + 0x4)) = 0xC132A60;
        FUN_0c187798();
        FUN_0c187798();
        u0 = *(float *)0xC132A94;
        (((struct o48_float *)(t1))->v) = u0;
        (((struct o44_float *)(t1))->v) = u0;
        (((struct o40_float *)(t1))->v) = u0;
        (((struct oA8_uchar *)(t1))->v) = 0x1;
        (((struct oAC_ushort *)(t1))->v) = 0x1F;
        (((struct oA9_uchar *)(t1))->v) = 0x21;
        thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC53258C))) + 0x28), (t1 + 0x28));
        FUN_0c037498(((((struct oC4_int *)(t1))->v)), 0x0, 0x1, (*(int *)((((*(signed char *)((t1 + 0x1))) << 2) + 0xC4B40FC))));
        *(unsigned char *)((((((struct oC4_int *)(t1))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(t1))->v)) + 0x6)) = 0x3F;
        *(volatile int *)((t1 + 0xC4));
        t0 = FUN_0c187798();
        *(unsigned int *)((t1 + 0x10)) = a4;
    }
    return t0;
}

int FUN_0c132a60(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    register int t2;
    register int t3;
    register float u0;

    t2 = *(signed char *)((a4 + 0x14));
    if (t2 != 0) {
        if (t2 != 1) {
            return FUN_0c03f346(a4, 0x0, a6, a7);
        }
        if (1.0f > ((((struct o48_float *)(a4))->v))) {
            (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + 0.00999999978f);
        }
        u0 = (((struct o48_float *)(a4))->v);
        (((struct o44_float *)(a4))->v) = u0;
        (((struct o40_float *)(a4))->v) = u0;
        (((struct o84_float *)(((((struct oC4_int *)(a4))->v))))->v) = ((((struct o40_float *)(a4))->v));
        (((struct o88_float *)(((((struct oC4_int *)(a4))->v))))->v) = ((((struct o44_float *)(a4))->v));
        (((struct o8C_float *)(((((struct oC4_int *)(a4))->v))))->v) = ((((struct o48_float *)(a4))->v));
        t2 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t2 - 1);
        if ((int)(short)(t2 - 1) < 0) {
            *(unsigned short *)((a4 + 0x1C)) = 0x4;
            t2 = *(short *)((a4 + 0x1E));
            *(unsigned short *)((a4 + 0x1E)) = (t2 + 0x1);
            if ((int)(short)(t2 + 0x1) > (int)0x7) {
                *(unsigned short *)((a4 + 0x1E)) = 0x0;
            }
            FUN_0c037498(((((struct oC4_int *)(a4))->v)), (*(short *)((a4 + 0x1E))), 0x1, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
            *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
            *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x3F;
            *(volatile int *)((a4 + 0xC4));
            FUN_0c187798();
        }
        t2 = *(int *)((a4 + 0x10));
        t3 = 0x16;
        if (((*(signed char *)((t2 + 0x375A))) != 0) && (t0 = *(signed char *)((t2 + 0x16)), (int)t0 <= (int)0x1)) {
        } else {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t3 = 0x14;
        }
        return t3;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    *(unsigned short *)((a4 + 0x1C)) = 0x4;
    *(unsigned short *)((a4 + 0x1E)) = 0x0;
    if (1.0f > ((((struct o48_float *)(a4))->v))) {
        (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + 0.00999999978f);
    }
    u0 = (((struct o48_float *)(a4))->v);
    (((struct o44_float *)(a4))->v) = u0;
    (((struct o40_float *)(a4))->v) = u0;
    (((struct o84_float *)(((((struct oC4_int *)(a4))->v))))->v) = ((((struct o40_float *)(a4))->v));
    (((struct o88_float *)(((((struct oC4_int *)(a4))->v))))->v) = ((((struct o44_float *)(a4))->v));
    (((struct o8C_float *)(((((struct oC4_int *)(a4))->v))))->v) = ((((struct o48_float *)(a4))->v));
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    if ((int)(short)(t0 - 1) < 0) {
        *(unsigned short *)((a4 + 0x1C)) = 0x4;
        t0 = *(short *)((a4 + 0x1E));
        *(unsigned short *)((a4 + 0x1E)) = (t0 + 0x1);
        if ((int)(short)(t0 + 0x1) > (int)0x7) {
            *(unsigned short *)((a4 + 0x1E)) = 0x0;
        }
        FUN_0c037498(((((struct oC4_int *)(a4))->v)), (*(short *)((a4 + 0x1E))), 0x1, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
        *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x3F;
        *(volatile int *)((a4 + 0xC4));
        FUN_0c187798();
    }
    t0 = *(int *)((a4 + 0x10));
    t2 = 0x16;
    if (((*(signed char *)((t0 + 0x375A))) != 0) && (t1 = *(signed char *)((t0 + 0x16)), (int)t1 <= (int)0x1)) {
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t2 = 0x14;
    }
    return t2;
}
