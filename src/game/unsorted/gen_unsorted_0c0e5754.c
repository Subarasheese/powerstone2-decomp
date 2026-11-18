/* game/unsorted: functions 0C0E5754-0C0E5AA8, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC0_int { char p[0xC0]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
extern int FUN_0c03f346();
int FUN_0c03f444(int, int, int);
int FUN_0c0d04c4(int, int);
int FUN_0c187798(void);
int FUN_0c0e5754(int a4, int a5, int a6, int a7);
int FUN_0c0e5874(int a4);

int FUN_0c0e5754(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        (((struct o28_float *)(a4))->v) = ((((struct o28_float *)((*(int *)((a4 + 0x10)))))->v));
        (((struct o30_float *)(a4))->v) = ((((struct o30_float *)((*(int *)((a4 + 0x10)))))->v));
        t0 = *(signed char *)((a4 + 0x15));
        if (t0 != 0) {
            if (t0 != 1) {
                if (t0 != 2) {
                    return t0;
                }
                u0 = (((struct o44_float *)(a4))->v);
                (((struct o44_float *)(a4))->v) = (u0 - 0.0500000007f);
                if (!((u0 - 0.0500000007f) > 0.0f)) {
                    return ((int (*)(int, int, int, int))(FUN_0c03f346))(a4, a5, a6, a7);
                }
                return 0x44;
            }
            t0 = *(signed char *)(((*(int *)((a4 + 0x10))) + 0x15));
            t1 = t0;
            if ((t0 == 3) || (t0 == 8)) {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                (((struct oAC_ushort *)(a4))->v) = 0x1F;
                t1 = 0xAC;
            }
            return t1;
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o15_uchar *)(a4))->v) = 0x0;
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        *(unsigned short *)((a4 + 0x1C)) = 0x0;
        FUN_0c0d04c4((0xAC + a4), (a4 + 0x34));
        t0 = 0x0;
        t1 = 0x0;
        for (;;) {
            if ((int)t1 >= (int)((((struct oC0_int *)(a4))->v))) {
                break;
            }
            t0 = t1;
            t0 = (t0 << 2);
            t0 = (t0 + (0xC4 + a4));
            t0 = (*(int *)((t0 + 0x0)));
            FUN_0c0d04c4((t0 + 0x6), (t0 + 0x78));
            t1 = (t1 + 0x1);
        }
        (((struct o28_float *)(a4))->v) = ((((struct o28_float *)((*(int *)((a4 + 0x10)))))->v));
        (((struct o30_float *)(a4))->v) = ((((struct o30_float *)((*(int *)((a4 + 0x10)))))->v));
        t0 = *(signed char *)((a4 + 0x15));
        if (t0 != 0) {
            if (t0 != 1) {
                if (t0 != 2) {
                    return t0;
                }
                u0 = (((struct o44_float *)(a4))->v);
                (((struct o44_float *)(a4))->v) = (u0 - 0.0500000007f);
                if (!((u0 - 0.0500000007f) > 0.0f)) {
                    return ((int (*)(int))(FUN_0c03f346))(a4);
                }
                return 0x44;
            }
            t0 = *(signed char *)(((*(int *)((a4 + 0x10))) + 0x15));
            t1 = t0;
            if ((t0 == 3) || (t0 == 8)) {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                (((struct oAC_ushort *)(a4))->v) = 0x1F;
                t1 = 0xAC;
            }
            return t1;
        }
    }
    u0 = (((struct o44_float *)(a4))->v);
    (((struct o44_float *)(a4))->v) = (u0 + 0.0500000007f);
    t0 = 0x44;
    if (!(1.0f > (u0 + 0.0500000007f))) {
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        (((struct o44_float *)(a4))->v) = 1.0f;
        (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) & 0xFFEF);
        t0 = 0xAC;
    }
    return t0;
}


