/* game/unsorted: functions 0C1325A4-0C13265C, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oE4_int { char p[0xE4]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c187798(int, int);
int FUN_0c1325a4(int a4);

int FUN_0c1325a4(int a4)
{
    register int t1;
    register int t2;

    t1 = FUN_0c037320(0xB, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
    t2 = FUN_0c03f444(0x5, 0x0, t1);
    t1 = t2;
    if (t2 != 0) {
        FUN_0c03733c(t2, 0xB, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
        (((struct oA8_uchar *)(t2))->v) = 0x1;
        *(unsigned char *)((t2 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        (((struct oAC_ushort *)(t2))->v) = 0xF;
        (((struct oA9_uchar *)(t2))->v) = 0x21;
        (((struct o14_uchar *)(t2))->v) = 0x0;
        (((struct o15_uchar *)(t2))->v) = 0x0;
        *(unsigned short *)((t2 + 0x1C)) = 0x0;
        *(unsigned short *)((t2 + 0x1E)) = 0x0;
        (((struct o28_float *)(t2))->v) = -2.0f;
        (((struct o2C_float *)(t2))->v) = -12.0f;
        (((struct o30_float *)(t2))->v) = 22.0f;
        *(unsigned int *)((t2 + 0x34)) = 0xC17;
        *(unsigned int *)((t2 + 0x38)) = 0xF99B;
        *(unsigned int *)((t2 + 0x3C)) = 0x1555;
        FUN_0c187798(0x0, 0x1);
        *(unsigned int *)((t2 + 0x10)) = a4;
        (((struct oA4_uint *)(t2))->v) = (((((struct oE4_int *)(a4))->v)) + 0x28);
        *(unsigned int *)((t2 + 0x4)) = 0xC132570;
        *(unsigned char *)((((((struct oC4_int *)(t2))->v)) + 0x0)) = t1;
        *(unsigned short *)((((((struct oC4_int *)(t2))->v)) + 0x6)) = t1;
    }
    return t1;
}
