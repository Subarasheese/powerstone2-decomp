/* game/effect: functions 0C135F7C-0C1361EC, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
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
int FUN_0c037498(int, int, int, int);
int FUN_0c03f444(int, int, int);
int thunk_FUN_0c058310(int, int);
int FUN_0c187798(void);
int FUN_0c135f7c(int a4);
int FUN_0c136098(int a4);

int FUN_0c135f7c(int a4)
{
    register int t0;
    register float u4;

    t0 = FUN_0c03f444(0x5, 0x0, 0x1);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned int *)((t0 + 0x4)) = 0xC135D78;
        FUN_0c187798();
        FUN_0c187798();
        u4 = *(float *)0xC1360F0;
        (((struct o48_float *)(t0))->v) = u4;
        (((struct o44_float *)(t0))->v) = u4;
        (((struct o40_float *)(t0))->v) = u4;
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0x1F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC53258C))) + 0x28), (t0 + 0x28));
        FUN_0c037498(((((struct oC4_int *)(t0))->v)), 0x0, 0x2, (*(int *)((((*(signed char *)((t0 + 0x1))) << 2) + 0xC4B40FC))));
        *(unsigned char *)((((((struct oC4_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(t0))->v)) + 0x6)) = 0x23F;
        (((struct o84_float *)(((((struct oC4_int *)(t0))->v))))->v) = ((((struct o40_float *)(t0))->v));
        (((struct o88_float *)(((((struct oC4_int *)(t0))->v))))->v) = ((((struct o44_float *)(t0))->v));
        (((struct o8C_float *)(((((struct oC4_int *)(t0))->v))))->v) = ((((struct o48_float *)(t0))->v));
        (((struct o18_float *)(((((struct oC4_int *)(t0))->v))))->v) = 1.0f;
        (((struct o1C_float *)(((((struct oC4_int *)(t0))->v))))->v) = 1.0f;
        (((struct o20_float *)(((((struct oC4_int *)(t0))->v))))->v) = 1.0f;
        *(unsigned int *)((t0 + 0x10)) = a4;
    }
    return t0;
}

int FUN_0c136098(int a4)
{
    register int t0;

    t0 = (((struct o20_short *)(a4))->v);
    (((struct o20_ushort *)(a4))->v) = (t0 - 1);
    if ((int)(short)(t0 - 1) < 0) {
        (((struct o20_ushort *)(a4))->v) = 0x4;
        t0 = (((struct o22_short *)(a4))->v);
        (((struct o22_ushort *)(a4))->v) = (t0 + 0x1);
        if ((int)(short)(t0 + 0x1) > (int)0x7) {
            (((struct o22_ushort *)(a4))->v) = 0x0;
        }
        return FUN_0c037498(((((struct oC4_int *)(a4))->v)), ((((struct o22_short *)(a4))->v)), 0x1, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
    }
    return 0x20;
}
