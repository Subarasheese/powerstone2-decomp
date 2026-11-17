/* game/unsorted: functions 0C15D194-0C15D2EA, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
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
struct o4_float { char p[0x4]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c187798(void);
int FUN_0c15d194(int a4, int a5);

int FUN_0c15d194(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t3;
    register int t4;
    register float u0;

    t0 = FUN_0c037320((*(int *)(((a5 << 2) + 0xC2A2B54))), (*(int *)0xC4B40D8));
    t1 = t0;
    if ((int)t0 < 0) {
    } else {
        t0 = FUN_0c03f444(0x5, 0x0, 0x2);
        t1 = t0;
        if (t0 == 0) {
        } else {
            *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
            *(unsigned char *)((t0 + 0x2)) = a5;
            *(unsigned int *)((t0 + 0x4)) = 0xC15D044;
            (((struct oA8_uchar *)(t0))->v) = 0x1;
            (((struct oAC_ushort *)(t0))->v) = 0xF;
            (((struct oA9_uchar *)(t0))->v) = 0x21;
            FUN_0c187798();
            u0 = (((struct o378C_float *)(a4))->v);
            (((struct o48_float *)(t0))->v) = u0;
            (((struct o44_float *)(t0))->v) = u0;
            (((struct o40_float *)(t0))->v) = u0;
            (((struct o54_float *)(t0))->v) = 0.0f;
            (((struct o50_float *)(t0))->v) = 0.0f;
            (((struct o4C_float *)(t0))->v) = 0.0f;
            *(unsigned short *)((t0 + 0x1C)) = 0x0;
            t3 = (((struct oC4_int *)(t0))->v);
            FUN_0c03744a(t3, 0x1, (*(int *)((((a5 << 2) + 0xC2A2B54) + 0x0))), (*(int *)0xC4B40D8));
            *(unsigned char *)((t3 + 0x0)) = 0x1;
            *(unsigned short *)((t3 + 0x6)) = 0xF;
            (((struct o8C_float *)(t3))->v) = 1.0f;
            (((struct o88_float *)(t3))->v) = 1.0f;
            (((struct o84_float *)(t3))->v) = 1.0f;
            t3 = (((struct oC8_int *)(t0))->v);
            FUN_0c03744a(t3, 0x2, (*(int *)((((a5 << 2) + 0xC2A2B54) + 0x0))), (*(int *)0xC4B40D8));
            *(unsigned char *)((t3 + 0x0)) = 0x1;
            *(unsigned short *)((t3 + 0x6)) = 0x20F;
            (((struct o8C_float *)(t3))->v) = 1.0f;
            (((struct o88_float *)(t3))->v) = 1.0f;
            (((struct o84_float *)(t3))->v) = 1.0f;
            t4 = *(signed char *)((0x3719 + (((short)(*(signed char *)((t0 + 0x1))) * (short)0x3938) + 0xC532498)));
            (((struct o18_float *)(t3))->v) = (*(float *)((((((t4 << 1) + t4) << 2) + 0xC2A2B6C) + 0x0)));
            t4 = *(signed char *)((0x3719 + (((short)(*(signed char *)((t0 + 0x1))) * (short)0x3938) + 0xC532498)));
            (((struct o1C_float *)(t3))->v) = ((((struct o4_float *)(((((t4 << 1) + t4) << 2) + 0xC2A2B6C)))->v));
            t4 = *(signed char *)(((0xC532498 + ((short)(*(signed char *)((t0 + 0x1))) * (short)0x3938)) + 0x3719));
            (((struct o20_float *)(t3))->v) = ((((struct o8_float *)((0xC2A2B6C + (((t4 << 1) + t4) << 2))))->v));
            t1 = 0x20;
        }
    }
    return t1;
}
