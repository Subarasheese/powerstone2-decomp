/* game/unsorted: functions 0C166270-0C166360, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c07e3ae(int, int);
int FUN_0c0c2ab6(int, int);
int FUN_0c166270(int a4);

int FUN_0c166270(int a4)
{
    register int t1;
    register int t2;
    register int t5;

    t1 = FUN_0c037320(0x2F, (*(int *)0xC4B40CC));
    if ((int)t1 >= 0) {
        t2 = FUN_0c03f444(0x1, 0x0, 0x1);
        if (t2 != 0) {
            *(unsigned char *)((t2 + 0x1)) = (*(signed char *)((a4 + 0x1)));
            *(unsigned int *)((t2 + 0x4)) = 0xC1661A0;
            *(unsigned int *)((t2 + 0x3C)) = 0x0;
            *(unsigned int *)((t2 + 0x34)) = 0x0;
            (((struct o48_float *)(t2))->v) = 0.0f;
            (((struct o44_float *)(t2))->v) = 0.0f;
            (((struct o40_float *)(t2))->v) = 0.0f;
            (((struct oA8_uchar *)(t2))->v) = 0x1;
            (((struct oAC_ushort *)(t2))->v) = 0x1F;
            (((struct oA9_uchar *)(t2))->v) = 0x21;
            (((struct oA4_uint *)(t2))->v) = (a4 + 0x64);
            (((struct o28_float *)(t2))->v) = 0.0f;
            (((struct o2C_float *)(t2))->v) = 35.0f;
            (((struct o30_float *)(t2))->v) = 0.0f;
            *(unsigned int *)((t2 + 0x38)) = 0x8000;
            t5 = (((struct oC4_int *)(t2))->v);
            FUN_0c03744a(t5, 0x0, 0x2F, (*(int *)0xC4B40CC));
            *(unsigned char *)((t5 + 0x0)) = 0x1;
            *(unsigned short *)((t5 + 0x6)) = 0xF;
            (((struct o8C_float *)(t5))->v) = 1.0f;
            (((struct o88_float *)(t5))->v) = 1.0f;
            (((struct o84_float *)(t5))->v) = 1.0f;
            (((struct o80_uint *)(t5))->v) = 0x0;
            (((struct o7C_uint *)(t5))->v) = 0x0;
            (((struct o78_uint *)(t5))->v) = 0x0;
            (((struct o74_float *)(t5))->v) = 0.0f;
            (((struct o70_float *)(t5))->v) = 0.0f;
            (((struct o6C_float *)(t5))->v) = 0.0f;
            *(unsigned int *)((t2 + 0x10)) = a4;
            FUN_0c07e3ae(t2, (*(signed char *)0xC27455E));
            return FUN_0c0c2ab6(t2, (*(signed char *)0xC274563));
        }
        return t2;
    }
    return t1;
}
