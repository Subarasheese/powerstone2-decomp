/* game/unsorted: functions 0C16EEA8-0C16F120, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o18_uchar { char p[0x18]; unsigned char v; };
struct o377C_int { char p[0x377C]; int v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAA_uchar { char p[0xAA]; unsigned char v; };
struct oAB_uchar { char p[0xAB]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c07e3ae(int, int);
int FUN_0c0c2ab6(int, int);
int FUN_0c187798(void);
int FUN_0c16eea8(int a4, int a5);
int FUN_0c16f0c6(int a4);

int FUN_0c16eea8(int a4, int a5)
{
    register int t0;
    register int t1;

    t0 = FUN_0c03f444(0x1, 0x0, 0x3);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned int *)((t0 + 0x4)) = 0xC16ED88;
        FUN_0c187798();
        (((struct oA8_uchar *)(t0))->v) = 0x0;
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        *(unsigned int *)((t0 + 0x3C)) = 0x0;
        *(unsigned int *)((t0 + 0x38)) = 0x0;
        *(unsigned int *)((t0 + 0x34)) = 0x0;
        (((struct o48_float *)(t0))->v) = 1.0f;
        (((struct o44_float *)(t0))->v) = 1.0f;
        (((struct o40_float *)(t0))->v) = 1.0f;
        (((struct oAA_uchar *)(t0))->v) = 0x1;
        (((struct oAB_uchar *)(t0))->v) = 0x2;
        *(unsigned short *)((t0 + 0x1C)) = 0x14;
        t1 = (((struct oC4_int *)(t0))->v);
        FUN_0c03744a(t1, 0x0, 0x3D, (*(int *)0xC4B40CC));
        *(unsigned char *)((t1 + 0x0)) = 0x1;
        *(unsigned short *)((t1 + 0x6)) = 0x1F;
        (((struct o78_uint *)(t1))->v) = 0x4000;
        (((struct o8C_float *)(t1))->v) = 1.0f;
        (((struct o88_float *)(t1))->v) = 1.0f;
        (((struct o84_float *)(t1))->v) = 1.0f;
        t1 = (((struct oC8_int *)(t0))->v);
        FUN_0c03744a(t1, 0x1, 0x3D, (*(int *)0xC4B40CC));
        *(unsigned char *)((t1 + 0x0)) = 0x1;
        *(unsigned short *)((t1 + 0x6)) = 0x1F;
        (((struct o78_uint *)(t1))->v) = 0x4000;
        (((struct o8C_float *)(t1))->v) = 1.0f;
        (((struct o88_float *)(t1))->v) = 1.0f;
        (((struct o84_float *)(t1))->v) = 1.0f;
        t1 = (((struct oCC_int *)(t0))->v);
        FUN_0c03744a(t1, 0x0, 0x35, (*(int *)0xC4B40CC));
        *(unsigned char *)((t1 + 0x0)) = 0x1;
        *(unsigned short *)((t1 + 0x6)) = 0x1F;
        (((struct o78_uint *)(t1))->v) = 0x4000;
        (((struct o84_float *)(t1))->v) = 0.300000012f;
        (((struct o8C_float *)(t1))->v) = 1.0f;
        (((struct o88_float *)(t1))->v) = 1.0f;
        FUN_0c07e3ae(t0, 0x9A);
        return FUN_0c0c2ab6(t0, 0x44);
    }
    return t0;
}

int FUN_0c16f0c6(int a4)
{
    int t0;
    register int t2;
    register int t3;
    register int t4;

    t2 = FUN_0c03f444(0x1, 0x0, 0x0);
    t3 = t2;
    if (t2 != 0) {
        *(unsigned char *)((t2 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned int *)((t2 + 0x4)) = 0xC16F000;
        (((struct oA8_uchar *)(t2))->v) = 0x0;
        *(unsigned short *)((t2 + 0x1C)) = 0x0;
        *(unsigned short *)((t2 + 0x1E)) = 0x0;
        t4 = (((struct o377C_int *)(a4))->v);
        if (((*(signed char *)((t4 + 0x0))) == 0) && (t0 = *(signed char *)((t4 + 0x1)), t3 = *(signed char *)0xC542363, t3 != t0)) {
            t0 = *(signed char *)((((((struct o377C_int *)(a4))->v)) + 0x1));
            (((struct o18_uchar *)(t2))->v) = t0;
            t3 = t0;
        } else {
            (((struct o18_uchar *)(t2))->v) = 0xFFFFFFFF;
            t3 = 0x18;
        }
    }
    return t3;
}
