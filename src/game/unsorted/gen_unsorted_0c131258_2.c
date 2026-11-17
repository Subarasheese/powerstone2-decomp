/* game/unsorted: functions 0C131258-0C131394, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c187798(void);
int FUN_0c1312e2(int a4);

int FUN_0c1312e2(int a4)
{
    register int t0;
    register int t10;
    register int t5;

    t0 = FUN_0c03f444(0x5, 0x0, 0x1);
    t10 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        *(unsigned short *)((t0 + 0x1C)) = 0x0;
        *(unsigned int *)((t0 + 0x10)) = a4;
        (((struct o2C_float *)(t0))->v) = 0.0f;
        (((struct o30_float *)(t0))->v) = 0.0f;
        (((struct o28_float *)(t0))->v) = 0.0f;
        *(unsigned int *)((t0 + 0x34)) = ((*(int *)((a4 + 0x34))) + 0xE38);
        *(unsigned int *)((t0 + 0x3C)) = (*(int *)((a4 + 0x3C)));
        *(unsigned int *)((t0 + 0x38)) = (*(int *)((a4 + 0x38)));
        (((struct o48_float *)(t0))->v) = 1.0f;
        (((struct o40_float *)(t0))->v) = 1.0f;
        *(unsigned int *)((t0 + 0x4)) = 0xC131258;
        t5 = (((struct oC4_int *)(t0))->v);
        FUN_0c03744a(t5, 0x1, 0x4, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
        *(unsigned char *)((t5 + 0x0)) = 0x1;
        *(unsigned short *)((t5 + 0x6)) = 0xF;
        FUN_0c187798();
        (((struct o78_uint *)(t5))->v) = 0x0;
        (((struct o80_uint *)(t5))->v) = 0x0;
        (((struct o7C_uint *)(t5))->v) = 0xFFFFC000;
        (((struct o70_float *)(t5))->v) = 100.0f;
        t10 = 0x70;
    }
    return t10;
}
