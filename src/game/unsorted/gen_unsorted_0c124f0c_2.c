/* game/unsorted: functions 0C124F0C-0C1254D4, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

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
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f444(int, int, int);
extern int FUN_0c187798();
int FUN_0c125254(int a4, int a5);

int FUN_0c125254(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;

    if ((signed char)a5 != 0) {
        if ((signed char)a5 != 1) {
            if ((signed char)a5 == 2) {
                t8 = FUN_0c03f444(0x5, 0x0, 0x1);
                t9 = t8;
                if (t8 == 0) {
                } else {
                    *(unsigned char *)((t8 + 0x1)) = (*(signed char *)((a4 + 0x1)));
                    (((struct oA8_uchar *)(t8))->v) = 0x1;
                    (((struct oAC_ushort *)(t8))->v) = 0x1F;
                    (((struct oA9_uchar *)(t8))->v) = 0x21;
                    *(unsigned int *)((t8 + 0x4)) = 0xC12512E;
                    *(unsigned int *)((t8 + 0x10)) = a4;
                    FUN_0c187798(t8);
                    FUN_0c187798(t0);
                    (((struct o48_float *)(t1))->v) = 0.699999988f;
                    (((struct o44_float *)(t1))->v) = 0.699999988f;
                    (((struct o40_float *)(t1))->v) = 0.699999988f;
                    *(unsigned short *)((t1 + 0x1C)) = 0x0;
                    t0 = (((struct oC4_int *)(t1))->v);
                    FUN_0c03744a(t0, 0x2, 0xA, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
                    *(unsigned char *)((t0 + 0x0)) = 0x1;
                    *(unsigned short *)((t0 + 0x6)) = 0xF;
                    (((struct o8C_float *)(t0))->v) = 1.0f;
                    (((struct o88_float *)(t0))->v) = 1.0f;
                    (((struct o84_float *)(t0))->v) = 1.0f;
                    t9 = 0x84;
                }
                t0 = t9;
            } else {
                t1 = (signed char)a5;
                if ((signed char)a5 == 3) {
                    t8 = FUN_0c03f444(0x5, 0x0, 0x1);
                    t9 = t8;
                    if (t8 != 0) {
                        *(unsigned char *)((t8 + 0x1)) = (*(signed char *)((a4 + 0x1)));
                        (((struct oA8_uchar *)(t8))->v) = 0x1;
                        (((struct oAC_ushort *)(t8))->v) = 0x1F;
                        (((struct oA9_uchar *)(t8))->v) = 0x21;
                        *(unsigned int *)((t8 + 0x4)) = 0xC1251CE;
                        *(unsigned int *)((t8 + 0x10)) = a4;
                        FUN_0c187798(t8);
                        FUN_0c187798(t2);
                        (((struct o48_float *)(t3))->v) = 0.600000024f;
                        (((struct o44_float *)(t3))->v) = 0.600000024f;
                        (((struct o40_float *)(t3))->v) = 0.600000024f;
                        *(unsigned short *)((t3 + 0x1C)) = 0x0;
                        t2 = (((struct oC4_int *)(t3))->v);
                        FUN_0c03744a(t2, 0x3, 0xA, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
                        *(unsigned char *)((t2 + 0x0)) = 0x1;
                        *(unsigned short *)((t2 + 0x6)) = 0xF;
                        t9 = 0xF;
                    }
                    t1 = t9;
                }
                t0 = t1;
            }
            t1 = t0;
        } else {
            t0 = FUN_0c03f444(0x5, 0x0, 0x1);
            t2 = t0;
            if (t0 == 0) {
            } else {
                *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
                (((struct oA8_uchar *)(t0))->v) = 0x1;
                (((struct oAC_ushort *)(t0))->v) = 0x1F;
                (((struct oA9_uchar *)(t0))->v) = 0x21;
                *(unsigned int *)((t0 + 0x4)) = 0xC1250A8;
                *(unsigned int *)((t0 + 0x10)) = a4;
                FUN_0c187798(t0);
                FUN_0c187798(t4);
                (((struct o48_float *)(t5))->v) = 0.699999988f;
                (((struct o44_float *)(t5))->v) = 0.699999988f;
                (((struct o40_float *)(t5))->v) = 0.699999988f;
                *(unsigned short *)((t5 + 0x1C)) = 0x0;
                t0 = (((struct oC4_int *)(t5))->v);
                FUN_0c03744a(t0, 0x1, 0xA, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
                *(unsigned char *)((t0 + 0x0)) = 0x1;
                *(unsigned short *)((t0 + 0x6)) = 0xF;
                (((struct o8C_float *)(t0))->v) = 1.0f;
                (((struct o88_float *)(t0))->v) = 1.0f;
                (((struct o84_float *)(t0))->v) = 1.0f;
                t2 = 0x84;
            }
            t1 = t2;
        }
        t0 = t1;
    } else {
        t1 = FUN_0c03f444(0x5, 0x0, 0x1);
        t2 = t1;
        if (t1 == 0) {
        } else {
            *(unsigned char *)((t1 + 0x1)) = (*(signed char *)((a4 + 0x1)));
            (((struct oA8_uchar *)(t1))->v) = 0x1;
            (((struct oAC_ushort *)(t1))->v) = 0xF;
            (((struct oA9_uchar *)(t1))->v) = 0x21;
            *(unsigned int *)((t1 + 0x4)) = 0xC124F0C;
            *(unsigned int *)((t1 + 0x10)) = a4;
            FUN_0c187798(t1);
            FUN_0c187798(t6);
            (((struct o48_float *)(t7))->v) = 1.0f;
            (((struct o44_float *)(t7))->v) = 1.0f;
            (((struct o40_float *)(t7))->v) = 1.0f;
            *(unsigned short *)((t7 + 0x1C)) = 0x0;
            t1 = (((struct oC4_int *)(t7))->v);
            FUN_0c03744a(t1, 0x0, 0xA, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
            *(unsigned char *)((t1 + 0x0)) = 0x1;
            *(unsigned short *)((t1 + 0x6)) = 0x31;
            (((struct o8C_float *)(t1))->v) = 1.5f;
            (((struct o88_float *)(t1))->v) = 1.5f;
            (((struct o84_float *)(t1))->v) = 1.5f;
            t2 = 0x84;
        }
        t0 = t2;
    }
    return t0;
}
