/* game/unsorted: functions 0C1238F8-0C123CCC, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oE0_int { char p[0xE0]; int v; };
struct oF0_int { char p[0xF0]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f444(int, int, int);
extern int FUN_0c187798();
int FUN_0c1238f8(int a4, int a5, int a6);

int FUN_0c1238f8(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;

    if (((signed char)a5 != 0) && ((signed char)a5 != 2)) {
        if ((signed char)a5 == 1) {
            t0 = FUN_0c03f444(0x5, 0x0, 0x6);
            t1 = t0;
            if (t0 != 0) {
                *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
                (((struct oA8_uchar *)(t0))->v) = 0x1;
                (((struct oA9_uchar *)(t0))->v) = 0x21;
                (((struct oAC_ushort *)(t0))->v) = 0x1F;
                *(unsigned int *)((t0 + 0x4)) = 0xC123CFC;
                *(unsigned int *)((t0 + 0x10)) = a4;
                (((struct o14_uchar *)(t0))->v) = a5;
                (((struct o2C_float *)(t0))->v) = 0.0f;
                (((struct o30_float *)(t0))->v) = 0.0f;
                (((struct o28_float *)(t0))->v) = 0.0f;
                FUN_0c187798();
                (((struct o48_float *)(t0))->v) = 1.0f;
                (((struct o44_float *)(t0))->v) = 1.0f;
                (((struct o40_float *)(t0))->v) = 1.0f;
                t2 = 0x0;
                for (;;) {
                    *(unsigned char *)(((*(int *)((((0xC4 + t0) + (t2 << 2)) + 0x0))) + 0x0)) = 0x1;
                    *(unsigned short *)(((*(int *)((((0xC4 + t0) + (t2 << 2)) + 0x0))) + 0x6)) = 0x1F;
                    t3 = *(int *)((((0xC4 + t0) + (t2 << 2)) + 0x0));
                    (((struct o8C_float *)(t3))->v) = 1.0f;
                    (((struct o84_float *)(t3))->v) = 1.0f;
                    (((struct o88_float *)((*(int *)((((0xC4 + t0) + (t2 << 2)) + 0x0)))))->v) = 0.0f;
                    (((struct o6C_float *)((*(int *)((((0xC4 + t0) + (t2 << 2)) + 0x0)))))->v) = (*(float *)((((((t2 << 1) + t2) << 2) + 0xC201A8C) + 0x0)));
                    (((struct o70_float *)((*(int *)((((0xC4 + t0) + (t2 << 2)) + 0x0)))))->v) = ((((struct o4_float *)(((((t2 << 1) + t2) << 2) + 0xC201A8C)))->v));
                    (((struct o74_float *)((*(int *)((((0xC4 + t0) + (t2 << 2)) + 0x0)))))->v) = ((((struct o8_float *)(((((t2 << 1) + t2) << 2) + 0xC201A8C)))->v));
                    FUN_0c03744a((*(int *)((((0xC4 + t0) + (t2 << 2)) + 0x0))), 0x0, 0x1, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
                    t3 = (int)t2 < (int)0x3;
                    t4 = (t2 << 2);
                    t2 = (t2 + 0x1);
                    if (t3) {
                        (((struct o80_uint *)((*(int *)((((0xC4 + t0) + t4) + 0x0)))))->v) = 0x6000;
                        (((struct o78_uint *)((*(int *)((((0xC4 + t0) + t4) + 0x0)))))->v) = 0xE38;
                        (((struct o68_uint *)((*(int *)((((0xC4 + t0) + t4) + 0x0)))))->v) = (((((struct oF0_int *)((((short)(*(signed char *)((t0 + 0x1))) * (short)0x3938) + 0xC532498)))->v)) + 0x28);
                    } else {
                        (((struct o80_uint *)((*(int *)((((0xC4 + t0) + t4) + 0x0)))))->v) = 0xFFFFA000;
                        (((struct o78_uint *)((*(int *)((((0xC4 + t0) + t4) + 0x0)))))->v) = 0xE38;
                        (((struct o68_uint *)((*(int *)((((0xC4 + t0) + t4) + 0x0)))))->v) = (((((struct oE0_int *)((((short)(*(signed char *)((t0 + 0x1))) * (short)0x3938) + 0xC532498)))->v)) + 0x28);
                    }
                    if ((int)t2 < (int)0x6) continue;
                    break;
                }
                *(unsigned short *)((t0 + 0x1C)) = 0x0;
                t1 = 0x0;
            }
            t0 = t1;
        } else {
            t1 = (signed char)a5;
            if ((signed char)a5 == 3) {
                t2 = FUN_0c037320(0x4, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
                t3 = FUN_0c03f444(0x5, 0x0, t2);
                t4 = t3;
                if (t3 != 0) {
                    FUN_0c03733c(t3, 0x4, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
                    *(unsigned char *)((t3 + 0x1)) = (*(signed char *)((a4 + 0x1)));
                    (((struct oA8_uchar *)(t3))->v) = 0x1;
                    (((struct oA9_uchar *)(t3))->v) = 0x21;
                    (((struct oAC_ushort *)(t3))->v) = 0x1F;
                    *(unsigned int *)((t3 + 0x4)) = 0xC123CFC;
                    *(unsigned int *)((t3 + 0x10)) = a4;
                    (((struct o14_uchar *)(t3))->v) = a5;
                    (((struct o48_float *)(t3))->v) = 0.100000001f;
                    (((struct o44_float *)(t3))->v) = 0.100000001f;
                    (((struct o40_float *)(t3))->v) = 0.100000001f;
                    (((struct oA4_uint *)(t3))->v) = (((((struct oE0_int *)((0xC532498 + ((short)(*(signed char *)((t3 + 0x1))) * (short)0x3938))))->v)) + 0x28);
                    (((struct o30_float *)(t3))->v) = 0.0f;
                    (((struct o28_float *)(t3))->v) = 0.0f;
                    (((struct o2C_float *)(t3))->v) = -60.0f;
                    *(unsigned int *)((t3 + 0x34)) = 0x4000;
                    if ((int)t2 > 0) {
                        t5 = 0x0;
                        t6 = 0x0;
                        for (;;) {
                            *(unsigned char *)(((*(int *)((((0xC4 + t3) + t5) + 0x0))) + 0x0)) = 0x1;
                            t6 = (t6 + 0x1);
                            *(unsigned short *)(((*(int *)((((0xC4 + t3) + t5) + 0x0))) + 0x6)) = 0x1F;
                            t7 = *(int *)((((0xC4 + t3) + t5) + 0x0));
                            (((struct o8C_float *)(t7))->v) = 1.0f;
                            (((struct o88_float *)(t7))->v) = 1.0f;
                            (((struct o84_float *)(t7))->v) = 1.0f;
                            t5 = (t5 + 0x4);
                            if ((int)t6 >= (int)t2) {
                                break;
                            }
                        }
                    }
                    *(unsigned short *)((t3 + 0x1C)) = 0xA;
                    t4 = 0xA;
                }
                t1 = t4;
            }
            t0 = t1;
        }
        t1 = t0;
    } else {
        t0 = FUN_0c037320(0x2, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
        t2 = FUN_0c03f444(0x5, 0x0, t0);
        t3 = t2;
        if (t2 != 0) {
            FUN_0c03733c(t2, 0x2, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
            *(unsigned char *)((t2 + 0x1)) = (*(signed char *)((a4 + 0x1)));
            (((struct oA8_uchar *)(t2))->v) = 0x1;
            (((struct oA9_uchar *)(t2))->v) = 0x21;
            (((struct oAC_ushort *)(t2))->v) = 0x1F;
            *(unsigned int *)((t2 + 0x4)) = 0xC123CFC;
            *(unsigned int *)((t2 + 0x10)) = a4;
            (((struct o14_uchar *)(t2))->v) = a5;
            (((struct o30_float *)(t2))->v) = 0.0f;
            (((struct o28_float *)(t2))->v) = 0.0f;
            (((struct o2C_float *)(t2))->v) = -22.0f;
            FUN_0c187798();
            (((struct o48_float *)(t2))->v) = 1.0f;
            (((struct o44_float *)(t2))->v) = 1.0f;
            (((struct o40_float *)(t2))->v) = 1.0f;
            if ((int)t0 > 0) {
                t4 = 0x0;
                t5 = 0x0;
                for (;;) {
                    *(unsigned char *)(((*(int *)((((0xC4 + t2) + t4) + 0x0))) + 0x0)) = 0x1;
                    t5 = (t5 + 0x1);
                    *(unsigned short *)(((*(int *)((((0xC4 + t2) + t4) + 0x0))) + 0x6)) = 0x1F;
                    t6 = *(int *)((((0xC4 + t2) + t4) + 0x0));
                    (((struct o8C_float *)(t6))->v) = 1.0f;
                    (((struct o88_float *)(t6))->v) = 1.0f;
                    (((struct o84_float *)(t6))->v) = 1.0f;
                    t4 = (t4 + 0x4);
                    if ((int)t5 >= (int)t0) {
                        break;
                    }
                }
            }
            t0 = *(signed char *)((t2 + 0x1));
            (((struct oA4_uint *)(t2))->v) = ((((short)(*(signed char *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x371A))) * (short)0x10E0) + (0x468 + (((short)t0 * (short)0x3938) + 0xC532498))) + 0x28);
            *(unsigned short *)((t2 + 0x1C)) = 0x0;
            *(unsigned short *)((t2 + 0x1E)) = 0x28;
            t3 = 0x28;
        }
        t1 = t3;
    }
    return t1;
}
