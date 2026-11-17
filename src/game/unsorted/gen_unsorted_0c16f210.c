/* game/unsorted: functions 0C16F210-0C16F310, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o378C_float { char p[0x378C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c07e3ae(int, int);
int FUN_0c0c2ab6(int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c187798(void);
int FUN_0c16f210(int a4, int a5);

int FUN_0c16f210(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t3;
    register float u0;

    t0 = FUN_0c037320(0xD, (*(int *)0xC4B40CC));
    t1 = t0;
    if (t0 != 0) {
        t0 = FUN_0c03f444(0x1, 0x0, 0x1);
        t1 = t0;
        if (t0 != 0) {
            FUN_0c03733c(t0, 0xD, (*(int *)0xC4B40CC));
            *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
            *(unsigned int *)((t0 + 0x4)) = 0xC16F14C;
            FUN_0c187798();
            (((struct o40_float *)(t0))->v) = (((((struct o378C_float *)(a4))->v)) * (1.0f + 1.0f));
            u0 = (((struct o378C_float *)(a4))->v);
            (((struct o48_float *)(t0))->v) = u0;
            (((struct o44_float *)(t0))->v) = u0;
            (((struct oA8_uchar *)(t0))->v) = 0x1;
            (((struct oAC_ushort *)(t0))->v) = 0x21F;
            (((struct oA9_uchar *)(t0))->v) = 0x21;
            (((struct oB8_float *)(t0))->v) = 0.300000012f;
            (((struct oB4_float *)(t0))->v) = 0.300000012f;
            (((struct oBC_float *)(t0))->v) = 0.899999976f;
            *(unsigned char *)((((((struct oC4_int *)(t0))->v)) + 0x0)) = 0x1;
            *(unsigned short *)((((((struct oC4_int *)(t0))->v)) + 0x6)) = 0x20F;
            t3 = (((struct oC4_int *)(t0))->v);
            (((struct o8C_float *)(t3))->v) = 1.0f;
            (((struct o88_float *)(t3))->v) = 1.0f;
            (((struct o84_float *)(t3))->v) = 1.0f;
            t3 = (((struct oC4_int *)(t0))->v);
            (((struct o1C_float *)(t3))->v) = 0.300000012f;
            (((struct o18_float *)(t3))->v) = 0.300000012f;
            (((struct o20_float *)(((((struct oC4_int *)(t0))->v))))->v) = 0.899999976f;
            FUN_0c07e3ae(t0, 0xA6);
            FUN_0c0c2ab6(t0, 0x48);
            t3 = *(int *)((a4 + 0x38));
            *(unsigned int *)((t0 + 0x38)) = t3;
            (((struct o4C_float *)(t0))->v) = ((math_sin_angle16(t3)) * 40.0f);
            (((struct o54_float *)(t0))->v) = ((math_cos_angle16((*(int *)((t0 + 0x38))))) * 40.0f);
            *(unsigned short *)((t0 + 0x1C)) = 0x32;
            t1 = 0x32;
        }
    }
    return t1;
}
