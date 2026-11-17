/* game/unsorted: functions 0C14E040-0C14E222, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o38E5_uchar { char p[0x38E5]; unsigned char v; };
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
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB0_float { char p[0xB0]; float v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oD0_int { char p[0xD0]; int v; };
struct oD4_int { char p[0xD4]; int v; };
struct oD8_int { char p[0xD8]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c14e040(int a4);

int FUN_0c14e040(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = FUN_0c03f444(0x5, 0x0, 0x6);
    t1 = 0x0;
    if (t0 == 0) {
    } else {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned int *)((t0 + 0x4)) = 0xC14DE18;
        *(unsigned int *)((t0 + 0x10)) = a4;
        *(unsigned char *)((t0 + 0x2)) = 0x4A;
        (((struct o38E5_uchar *)((*(int *)((t0 + 0x10)))))->v) = 0x1;
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0x61F;
        (((struct oA9_uchar *)(t0))->v) = 0x1;
        (((struct oB4_float *)(t0))->v) = 1.0f;
        (((struct oB8_float *)(t0))->v) = 0.899999976f;
        (((struct oBC_float *)(t0))->v) = 0.899999976f;
        (((struct o40_float *)(t0))->v) = 1.79999995f;
        (((struct o44_float *)(t0))->v) = 1.0f;
        (((struct o48_float *)(t0))->v) = 1.0f;
        (((struct oB0_float *)(t0))->v) = 0.899999976f;
        t2 = (((struct oC4_int *)(t0))->v);
        FUN_0c03744a(t2, 0x0, 0x49, (*(int *)0xC4B40D8));
        *(unsigned char *)((t2 + 0x0)) = 0x1;
        *(unsigned short *)((t2 + 0x6)) = 0xF;
        (((struct o7C_uint *)(t2))->v) = 0xFFFFEAAB;
        (((struct o6C_float *)(t2))->v) = 0.0f;
        (((struct o70_float *)(t2))->v) = 35.0f;
        (((struct o74_float *)(t2))->v) = -8.0f;
        (((struct o78_uint *)(t2))->v) = 0x0;
        (((struct o7C_uint *)(t2))->v) = 0x1E00;
        (((struct o80_uint *)(t2))->v) = 0x0;
        (((struct o68_uint *)(t2))->v) = (((((struct oC4_int *)(a4))->v)) + 0x28);
        t2 = (((struct oC8_int *)(t0))->v);
        FUN_0c03744a(t2, 0x1, 0x49, (*(int *)0xC4B40D8));
        *(unsigned char *)((t2 + 0x0)) = 0x1;
        *(unsigned short *)((t2 + 0x6)) = 0xF;
        (((struct o68_uint *)(t2))->v) = (((((struct oC4_int *)(t0))->v)) + 0x28);
        t2 = (((struct oCC_int *)(t0))->v);
        FUN_0c03744a(t2, 0x2, 0x49, (*(int *)0xC4B40D8));
        *(unsigned char *)((t2 + 0x0)) = 0x1;
        *(unsigned short *)((t2 + 0x6)) = 0xF;
        (((struct o68_uint *)(t2))->v) = (((((struct oC8_int *)(t0))->v)) + 0x28);
        t2 = (((struct oD0_int *)(t0))->v);
        FUN_0c03744a(t2, 0x0, 0x49, (*(int *)0xC4B40D8));
        *(unsigned char *)((t2 + 0x0)) = 0x1;
        *(unsigned short *)((t2 + 0x6)) = 0xF;
        (((struct o7C_uint *)(t2))->v) = 0x1555;
        (((struct o6C_float *)(t2))->v) = 0.0f;
        (((struct o70_float *)(t2))->v) = 35.0f;
        (((struct o74_float *)(t2))->v) = -8.0f;
        (((struct o78_uint *)(t2))->v) = 0x0;
        (((struct o7C_uint *)(t2))->v) = 0x6200;
        (((struct o80_uint *)(t2))->v) = 0x0;
        (((struct o68_uint *)(t2))->v) = (((((struct oC4_int *)(a4))->v)) + 0x28);
        t2 = (((struct oD4_int *)(t0))->v);
        FUN_0c03744a(t2, 0x1, 0x49, (*(int *)0xC4B40D8));
        *(unsigned char *)((t2 + 0x0)) = 0x1;
        *(unsigned short *)((t2 + 0x6)) = 0xF;
        (((struct o68_uint *)(t2))->v) = (((((struct oD0_int *)(t0))->v)) + 0x28);
        t2 = (((struct oD8_int *)(t0))->v);
        FUN_0c03744a(t2, 0x2, 0x49, (*(int *)0xC4B40D8));
        *(unsigned char *)((t2 + 0x0)) = 0x1;
        *(unsigned short *)((t2 + 0x6)) = 0xF;
        (((struct o68_uint *)(t2))->v) = (((((struct oD4_int *)(t0))->v)) + 0x28);
        t1 = t0;
    }
    return t1;
}
