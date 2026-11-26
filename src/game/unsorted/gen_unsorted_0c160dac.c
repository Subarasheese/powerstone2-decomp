/* game/unsorted: functions 0C160DAC-0C161102, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o378C_float { char p[0x378C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int);
int FUN_0c03f444(int, int, int);
int FUN_0c152d18(int);
int nlRand(void);
int FUN_0c187798(int, int, int);
int FUN_0c160f66(int a4, int a5);

int FUN_0c160f66(int a4, int a5)
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
    register float u0;

    if (a5 != 0) {
        t0 = a5;
        if (a5 != 1) {
        } else {
            t1 = FUN_0c03f444(0x5, 0x0, 0x1);
            t2 = t1;
            if (t1 != 0) {
                *(unsigned char *)((t1 + 0x1)) = (*(signed char *)((a4 + 0x1)));
                *(unsigned char *)((t1 + 0x2)) = a5;
                *(unsigned int *)((t1 + 0x4)) = 0xC160F02;
                (((struct oA8_uchar *)(t1))->v) = 0x1;
                (((struct oAC_ushort *)(t1))->v) = 0x1F;
                (((struct oA9_uchar *)(t1))->v) = 0x21;
                *(unsigned int *)((t1 + 0x10)) = a4;
                u0 = (((struct o378C_float *)(a4))->v);
                (((struct o48_float *)(t1))->v) = u0;
                (((struct o44_float *)(t1))->v) = u0;
                (((struct o40_float *)(t1))->v) = u0;
                (((struct o28_float *)(t1))->v) = ((((struct o28_float *)(a4))->v));
                (((struct o2C_float *)(t1))->v) = (((((struct o2C_float *)(a4))->v)) + 5.0f);
                (((struct o30_float *)(t1))->v) = ((((struct o30_float *)(a4))->v));
                *(unsigned short *)((t1 + 0x1C)) = 0x0;
                t3 = (((struct oC4_int *)(t1))->v);
                FUN_0c03744a(t3, 0x0, 0x16, (*(int *)0xC4B40CC));
                *(unsigned char *)((t3 + 0x0)) = 0x1;
                *(unsigned short *)((t3 + 0x6)) = 0xF;
                (((struct o8C_float *)(t3))->v) = 1.0f;
                (((struct o88_float *)(t3))->v) = 1.0f;
                (((struct o84_float *)(t3))->v) = 1.0f;
                (((struct o74_float *)(t3))->v) = 0.0f;
                (((struct o70_float *)(t3))->v) = 0.0f;
                (((struct o6C_float *)(t3))->v) = 0.0f;
                t2 = 0x6C;
            }
            t0 = t2;
        }
        t1 = t0;
    } else {
        t0 = FUN_0c037320(0x16, (*(int *)0xC4B40CC));
        t2 = t0;
        if ((int)t0 >= 0) {
            t3 = FUN_0c03f444(0x5, 0x0, t0);
            t4 = t3;
            if (t3 != 0) {
                FUN_0c03733c(t3, 0x16, (*(int *)0xC4B40CC));
                *(unsigned char *)((t3 + 0x1)) = (*(signed char *)((a4 + 0x1)));
                *(unsigned char *)((t3 + 0x2)) = a5;
                *(unsigned int *)((t3 + 0x4)) = 0xC160DAC;
                (((struct oA8_uchar *)(t3))->v) = 0x1;
                (((struct oAC_ushort *)(t3))->v) = 0x1F;
                (((struct oA9_uchar *)(t3))->v) = 0x21;
                *(unsigned int *)((t3 + 0x10)) = a4;
                (((struct o48_float *)(t3))->v) = 0.0f;
                (((struct o40_float *)(t3))->v) = 0.0f;
                (((struct o44_float *)(t3))->v) = ((((struct o378C_float *)(a4))->v));
                (((struct o28_float *)(t3))->v) = ((((struct o28_float *)(a4))->v));
                (((struct o2C_float *)(t3))->v) = (((((struct o2C_float *)(a4))->v)) + 5.0f);
                (((struct o30_float *)(t3))->v) = ((((struct o30_float *)(a4))->v));
                *(unsigned short *)((t3 + 0x1C)) = 0x0;
                t5 = 0x0;
                if ((int)t0 > 0) {
                    t6 = 0x0;
                    t7 = 0x0;
                    for (;;) {
                        t8 = *(int *)((((0xC4 + t3) + t6) + 0x0));
                        *(unsigned char *)((t8 + 0x0)) = 0x1;
                        *(unsigned short *)((t8 + 0x6)) = 0xF;
                        t7 = (t7 + 0x1);
                        (((struct o8C_float *)(t8))->v) = 1.0f;
                        (((struct o88_float *)(t8))->v) = 1.0f;
                        (((struct o84_float *)(t8))->v) = 1.0f;
                        t6 = (t6 + 0x4);
                        if ((int)t7 >= (int)t0) {
                            break;
                        }
                    }
                    t5 = 0x84;
                }
                t4 = t5;
            }
            t2 = t4;
        }
        t1 = t2;
    }
    return t1;
}
