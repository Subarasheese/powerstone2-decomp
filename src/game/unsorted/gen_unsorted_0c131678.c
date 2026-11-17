/* game/unsorted: functions 0C131678-0C131764, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o3818_short { char p[0x3818]; short v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oE4_int { char p[0xE4]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c187798(void);
int FUN_0c131678(int a4, int a5);

int FUN_0c131678(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t3;

    t0 = FUN_0c037320(0x4, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
    t1 = t0;
    if (t0 != 0) {
        t0 = FUN_0c03f444(0x5, 0x0, 0x1);
        t1 = t0;
        if (t0 != 0) {
            *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
            *(unsigned int *)((t0 + 0x4)) = 0xC131644;
            FUN_0c187798();
            FUN_0c187798();
            FUN_0c187798();
            (((struct oA8_uchar *)(t0))->v) = 0x1;
            (((struct oAC_ushort *)(t0))->v) = 0xD;
            (((struct oA9_uchar *)(t0))->v) = 0x21;
            *(unsigned short *)((t0 + 0x1C)) = 0x0;
            *(unsigned short *)((t0 + 0x1E)) = a5;
            (((struct o20_ushort *)(t0))->v) = (*(signed char *)((a4 + 0x3753)));
            (((struct o22_ushort *)(t0))->v) = ((((struct o3818_short *)(a4))->v));
            t3 = (((struct oC4_int *)(t0))->v);
            FUN_0c03744a(t3, 0x0, 0x4, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
            *(unsigned char *)((t3 + 0x0)) = 0x1;
            *(unsigned short *)((t3 + 0x6)) = 0xF;
            FUN_0c187798();
            (((struct o7C_uint *)(t3))->v) = 0x0;
            (((struct o80_uint *)(t3))->v) = 0x0;
            (((struct o78_uint *)(t3))->v) = 0x0;
            (((struct o74_float *)(t3))->v) = 0.0f;
            (((struct o70_float *)(t3))->v) = 0.0f;
            (((struct o6C_float *)(t3))->v) = 0.0f;
            *(unsigned int *)((t0 + 0x10)) = a4;
            (((struct oA4_uint *)(t0))->v) = (((((struct oE4_int *)(a4))->v)) + 0x28);
            t1 = 0xA4;
        }
    }
    return t1;
}
