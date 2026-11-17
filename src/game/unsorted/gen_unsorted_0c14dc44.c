/* game/unsorted: functions 0C14DC44-0C14DDDA, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_float { char p[0x14]; float v; };
struct o17C_float { char p[0x17C]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c14dc44(int a4);

int FUN_0c14dc44(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = FUN_0c037320(0x19, (*(int *)0xC4B40D8));
    t1 = FUN_0c03f444(0x2, 0x0, (t0 + 0x1));
    t0 = t1;
    if (t1 == 0) {
    } else {
        *(unsigned char *)((t1 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned int *)((t1 + 0x4)) = 0xC14DBD0;
        (((struct oA8_uchar *)(t1))->v) = 0x1;
        (((struct oAC_ushort *)(t1))->v) = 0xF;
        (((struct oA9_uchar *)(t1))->v) = (*(signed char *)((a4 + 0xA9)));
        *(unsigned int *)((t1 + 0x3C)) = 0x0;
        *(unsigned int *)((t1 + 0x38)) = 0x0;
        *(unsigned int *)((t1 + 0x34)) = 0x0;
        (((struct o30_float *)(t1))->v) = 0.0f;
        (((struct o2C_float *)(t1))->v) = 0.0f;
        (((struct o28_float *)(t1))->v) = 0.0f;
        (((struct o48_float *)(t1))->v) = 1.0f;
        (((struct o44_float *)(t1))->v) = 1.0f;
        (((struct o40_float *)(t1))->v) = 1.0f;
        *(unsigned int *)((t1 + 0x10)) = a4;
        (((struct o17C_float *)(t1))->v) = 1.0f;
        t2 = (((struct oC4_int *)(t1))->v);
        FUN_0c03744a(t2, 0x0, 0x19, (*(int *)0xC4B40D8));
        *(unsigned char *)((t2 + 0x0)) = 0x1;
        *(unsigned short *)((t2 + 0x6)) = 0x41F;
        (((struct o6C_float *)(t2))->v) = 0.0f;
        (((struct o70_float *)(t2))->v) = -8.0f;
        (((struct o74_float *)(t2))->v) = -47.0f;
        (((struct o78_uint *)(t2))->v) = 0xC000;
        (((struct o80_uint *)(t2))->v) = 0x0;
        (((struct o7C_uint *)(t2))->v) = 0x0;
        (((struct o8C_float *)(t2))->v) = 0.5f;
        (((struct o88_float *)(t2))->v) = 0.5f;
        (((struct o84_float *)(t2))->v) = 0.5f;
        (((struct o14_float *)(t2))->v) = 1.0f;
        (((struct o68_uint *)(t2))->v) = (0x2BF0 + a4);
        t2 = (((struct oC8_int *)(t1))->v);
        FUN_0c03744a(t2, 0x0, 0x19, (*(int *)0xC4B40D8));
        *(unsigned char *)((t2 + 0x0)) = 0x1;
        *(unsigned short *)((t2 + 0x6)) = 0x41F;
        (((struct o6C_float *)(t2))->v) = 0.0f;
        (((struct o70_float *)(t2))->v) = -8.0f;
        (((struct o74_float *)(t2))->v) = 42.0f;
        (((struct o78_uint *)(t2))->v) = 0xC000;
        (((struct o7C_uint *)(t2))->v) = 0x8000;
        (((struct o80_uint *)(t2))->v) = 0x0;
        (((struct o8C_float *)(t2))->v) = 0.5f;
        (((struct o88_float *)(t2))->v) = 0.5f;
        (((struct o84_float *)(t2))->v) = 0.5f;
        (((struct o14_float *)(t2))->v) = 1.0f;
        (((struct o68_uint *)(t2))->v) = (0x2C80 + a4);
        t2 = (((struct oCC_int *)(t1))->v);
        FUN_0c03744a(t2, 0x1, 0x19, (*(int *)0xC4B40D8));
        *(unsigned char *)((t2 + 0x0)) = 0x1;
        *(unsigned short *)((t2 + 0x6)) = 0x41F;
        (((struct o6C_float *)(t2))->v) = 0.0f;
        (((struct o70_float *)(t2))->v) = -8.0f;
        (((struct o74_float *)(t2))->v) = 42.0f;
        (((struct o78_uint *)(t2))->v) = 0xC000;
        (((struct o7C_uint *)(t2))->v) = 0x8000;
        (((struct o80_uint *)(t2))->v) = 0x0;
        (((struct o8C_float *)(t2))->v) = 0.5f;
        (((struct o88_float *)(t2))->v) = 0.5f;
        (((struct o84_float *)(t2))->v) = 0.5f;
        (((struct o14_float *)(t2))->v) = 1.0f;
        (((struct o68_uint *)(t2))->v) = (0x2D10 + a4);
        t0 = 0x68;
    }
    return t0;
}
