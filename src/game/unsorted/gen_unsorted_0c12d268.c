/* game/unsorted: functions 0C12D268-0C12D3BE, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c037320(int, int);
int FUN_0c037498(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c187798(void);
int FUN_0c12d268(int a4, int a5);

int FUN_0c12d268(int a4, int a5)
{
    int stk[1];
    register int t2;
    register int t3;
    register int t40;
    register int t8;

    *(unsigned char *)(((int)stk + 0)) = a5;
    t2 = FUN_0c037320(0x3, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
    t3 = FUN_0c03f444(0x5, 0x0, t2);
    t40 = t3;
    if (t3 == 0) {
    } else {
        *(unsigned char *)((t3 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned int *)((t3 + 0x4)) = 0xC12D3E4;
        FUN_0c187798();
        FUN_0c187798();
        (((struct o54_float *)(t3))->v) = 0.0f;
        (((struct o50_float *)(t3))->v) = 0.0f;
        (((struct o4C_float *)(t3))->v) = 0.0f;
        (((struct o48_float *)(t3))->v) = 1.0f;
        (((struct o44_float *)(t3))->v) = 1.0f;
        (((struct o40_float *)(t3))->v) = 1.0f;
        (((struct oA8_uchar *)(t3))->v) = 0x1;
        (((struct oAC_ushort *)(t3))->v) = 0x1F;
        (((struct oA9_uchar *)(t3))->v) = 0x21;
        (((struct o14_uchar *)(t3))->v) = (*(signed char *)(((int)stk + 0)));
        (((struct o15_uchar *)(t3))->v) = 0x0;
        t8 = *(signed char *)(((int)stk + 0));
        if (t8 != 0) {
            t40 = t8;
            if (t8 != 1) {
            } else {
                FUN_0c037498(((((struct oC4_int *)(t3))->v)), 0x0, 0x4, (*(int *)((0xC4B40FC + ((*(signed char *)((t3 + 0x1))) << 2)))));
                *(unsigned char *)((((((struct oC4_int *)(t3))->v)) + 0x0)) = 0x1;
                *(unsigned short *)((((((struct oC4_int *)(t3))->v)) + 0x6)) = 0x21F;
                (((struct o18_float *)(((((struct oC4_int *)(t3))->v))))->v) = 1.0f;
                (((struct o1C_float *)(((((struct oC4_int *)(t3))->v))))->v) = 1.0f;
                (((struct o20_float *)(((((struct oC4_int *)(t3))->v))))->v) = 1.0f;
                (((struct o40_float *)(t3))->v) = 0.300000012f;
                (((struct o44_float *)(t3))->v) = 0.300000012f;
                (((struct o48_float *)(t3))->v) = 0.300000012f;
                *(unsigned int *)((t3 + 0x10)) = a4;
                *(unsigned short *)((t3 + 0x1C)) = 0x3C;
                t40 = 0x3C;
            }
        } else {
            FUN_0c037498(((((struct oC4_int *)(t3))->v)), 0x0, 0x3, (*(int *)((0xC4B40FC + ((*(signed char *)((t3 + 0x1))) << 2)))));
            *(unsigned char *)((((((struct oC4_int *)(t3))->v)) + 0x0)) = 0x1;
            *(unsigned short *)((((((struct oC4_int *)(t3))->v)) + 0x6)) = 0x21F;
            (((struct o18_float *)(((((struct oC4_int *)(t3))->v))))->v) = 1.0f;
            (((struct o1C_float *)(((((struct oC4_int *)(t3))->v))))->v) = 1.0f;
            (((struct o20_float *)(((((struct oC4_int *)(t3))->v))))->v) = 1.0f;
            (((struct o40_float *)(t3))->v) = 0.300000012f;
            (((struct o44_float *)(t3))->v) = 0.300000012f;
            (((struct o48_float *)(t3))->v) = 0.300000012f;
            (((struct o2C_float *)(t3))->v) = (((((struct o2C_float *)(t3))->v)) + 50.0f);
            *(unsigned int *)((t3 + 0x10)) = a4;
            *(unsigned short *)((t3 + 0x1C)) = 0x3C;
            t40 = 0x3C;
        }
    }
    return t40;
}
