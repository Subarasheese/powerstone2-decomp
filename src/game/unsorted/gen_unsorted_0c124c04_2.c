/* game/unsorted: functions 0C124C04-0C124F08, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
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
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c187798(void);
int FUN_0c124da6(int a4, int a5, int a6, int a7, float f4, float f5);

int FUN_0c124da6(int a4, int a5, int a6, int a7, float f4, float f5)
{
    int stk[1];
    register int t0;
    register int t40;
    register int t1;
    register int t28;
    int t18;
    register int t21;
    register int t25;
    register int t26;

    *(unsigned char *)(((int)stk + 0)) = a5;
    t0 = *(signed char *)(((int)stk + 0));
    t40 = t0;
    if (t0 == 0) {
        t1 = FUN_0c03f444(0x5, 0x0, 0x3);
        t28 = t1;
        if (t1 != 0) {
            *(unsigned char *)((t1 + 0x1)) = (*(signed char *)((a4 + 0x1)));
            (((struct oA8_uchar *)(t1))->v) = 0x1;
            (((struct oAC_ushort *)(t1))->v) = 0xF;
            (((struct oA9_uchar *)(t1))->v) = 0x21;
            *(unsigned int *)((t1 + 0x4)) = 0xC124C04;
            *(unsigned int *)((t1 + 0x10)) = a4;
            (((struct o14_uchar *)(t1))->v) = (*(signed char *)(((int)stk + 0)));
            FUN_0c03744a(((((struct oC4_int *)(t1))->v)), 0x0, 0x9, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
            FUN_0c03744a(((((struct oC8_int *)(t1))->v)), 0x1, 0x9, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
            FUN_0c03744a(((((struct oCC_int *)(t1))->v)), 0x2, 0x9, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
            FUN_0c187798();
            FUN_0c187798();
            (((struct o48_float *)(t1))->v) = 1.0f;
            (((struct o44_float *)(t1))->v) = 1.0f;
            (((struct o40_float *)(t1))->v) = 1.0f;
            *(unsigned short *)((t1 + 0x1C)) = 0x0;
            t18 = 0x0;
            for (;;) {
                *(unsigned char *)(((*(int *)((((0xC4 + t1) + (t18 << 2)) + 0x0))) + 0x0)) = 0x1;
                *(unsigned short *)(((*(int *)((((t18 << 2) + (0xC4 + t1)) + 0x0))) + 0x6)) = 0x1F;
                if ((t18 != 0) && (t18 != 1)) {
                    t26 = t18;
                    if (t18 != 2) {
                    } else {
                        t21 = *(int *)((((t18 << 2) + (0xC4 + t1)) + 0x0));
                        (((struct o8C_float *)(t21))->v) = 0.800000012f;
                        (((struct o88_float *)(t21))->v) = 0.800000012f;
                        (((struct o84_float *)(t21))->v) = 0.800000012f;
                        t26 = 0x84;
                    }
                } else {
                    t25 = *(int *)((((t18 << 2) + (0xC4 + t1)) + 0x0));
                    (((struct o8C_float *)(t25))->v) = 1.0f;
                    (((struct o88_float *)(t25))->v) = 1.0f;
                    (((struct o84_float *)(t25))->v) = 1.0f;
                    t26 = 0x84;
                }
                t18 = (t18 + 0x1);
                if ((int)t18 >= (int)0x3) {
                    break;
                }
            }
            t28 = t26;
        }
        t40 = t28;
    }
    return t40;
}
