/* game/unsorted: functions 0C0DC548-0C0DC75C, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_int { char p[0x7C]; int v; };
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
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
extern int FUN_0c187798();
int FUN_0c0dc548(void);
int FUN_0c0dc598(int a4, int a5, int a6, int a7, float f4);

int FUN_0c0dc548(void)
{
    register int t0;
    register int t1;

    t0 = FUN_0c03f444(0x5, 0x0, 0x3);
    t1 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC0DC598;
        (((struct oAC_ushort *)(t0))->v) = 0x1F;
        (((struct oA9_uchar *)(t0))->v) = 0x1;
        (((struct o30_float *)(t0))->v) = 0.0f;
        (((struct o2C_float *)(t0))->v) = 0.0f;
        (((struct o28_float *)(t0))->v) = 0.0f;
        (((struct o48_float *)(t0))->v) = 1.0f;
        (((struct o44_float *)(t0))->v) = 1.0f;
        (((struct o40_float *)(t0))->v) = 1.0f;
        *(unsigned int *)((t0 + 0x38)) = 0x0;
        *(unsigned int *)((t0 + 0x3C)) = 0x0;
        *(unsigned int *)((t0 + 0x34)) = 0x0;
        t1 = 0x40;
    }
    return t1;
}

int FUN_0c0dc598(int a4, int a5, int a6, int a7, float f4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    if ((int)(*(signed char *)0xC54223C) > (int)0x1) {
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    if ((*(signed char *)((a4 + 0x14))) == 0) {
        FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x0, 0x49, (*(int *)0xC4B40CC));
        *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x1F;
        FUN_0c03744a(((((struct oC8_int *)(a4))->v)), 0x0, 0x49, (*(int *)0xC4B40CC));
        *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC8_int *)(a4))->v)) + 0x6)) = 0x1F;
        (((struct o80_uint *)(((((struct oC8_int *)(a4))->v))))->v) = 0xFFFFC000;
        FUN_0c03744a(((((struct oCC_int *)(a4))->v)), 0x0, 0x49, (*(int *)0xC4B40CC));
        *(unsigned char *)((((((struct oCC_int *)(a4))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oCC_int *)(a4))->v)) + 0x6)) = 0x1F;
        (((struct o78_uint *)(((((struct oCC_int *)(a4))->v))))->v) = 0x8000;
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        t4 = (((struct oC4_int *)(a4))->v);
        (((struct o8C_float *)(t4))->v) = 1.0f;
        (((struct o88_float *)(t4))->v) = 1.0f;
        (((struct o84_float *)(t4))->v) = 1.0f;
        t4 = (((struct oC8_int *)(a4))->v);
        (((struct o8C_float *)(t4))->v) = 1.0f;
        (((struct o88_float *)(t4))->v) = 1.0f;
        (((struct o84_float *)(t4))->v) = 1.0f;
        t4 = (((struct oCC_int *)(a4))->v);
        (((struct o8C_float *)(t4))->v) = 1.0f;
        (((struct o88_float *)(t4))->v) = 1.0f;
        (((struct o84_float *)(t4))->v) = 1.0f;
        *(unsigned short *)((a4 + 0x1C)) = 0x0;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    *(volatile int *)((a4 + 0xC4));
    *(volatile short *)((a4 + 0x1C));
    t4 = ((int (*)(int))(FUN_0c187798))(0xC540978);
    t4 = (((struct oC4_int *)(a4))->v);
    (((struct o70_float *)(t4))->v) = (((((struct o70_float *)(t4))->v)) - 0.0f);
    t4 = (((struct oC4_int *)(a4))->v);
    (((struct o7C_uint *)(t4))->v) = (((((struct o7C_int *)(t4))->v)) + 0xB6);
    *(volatile int *)((a4 + 0xC8));
    *(volatile short *)((a4 + 0x1C));
    t4 = ((int (*)(int, int))(FUN_0c187798))(t0, 0xB6);
    t0 = (((struct oC8_int *)(a4))->v);
    (((struct o70_float *)(t0))->v) = (((((struct o70_float *)(t0))->v)) - 1000.0f);
    t0 = (((struct oC8_int *)(a4))->v);
    (((struct o7C_uint *)(t0))->v) = (((((struct o7C_int *)(t0))->v)) + t1);
    *(volatile int *)((a4 + 0xCC));
    *(volatile short *)((a4 + 0x1C));
    t0 = ((int (*)(int, int))(FUN_0c187798))(t2, t1);
    t0 = (((struct oCC_int *)(a4))->v);
    (((struct o70_float *)(t0))->v) = (((((struct o70_float *)(t0))->v)) - 2000.0f);
    t0 = (((struct oCC_int *)(a4))->v);
    (((struct o7C_uint *)(t0))->v) = (((((struct o7C_int *)(t0))->v)) + t3);
    *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 & 0x3);
    return (t0 & 0x3);
}
