/* game/unsorted: functions 0C04F420-0C04F59C, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB0_float { char p[0xB0]; float v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c04f420(void);
int FUN_0c04f4ce(int a4, int a5, int a6, int a7);

int FUN_0c04f420(void)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    t0 = FUN_0c037320(0x1, (*(int *)0xC4B410C));
    t1 = FUN_0c03f444(0x8, 0x0, t0);
    t0 = t1;
    if (t1 != 0) {
        *(unsigned char *)((t1 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t1 + 0x4)) = 0xC04F358;
        FUN_0c03733c(t1, 0x1, (*(int *)0xC4B410C));
        u0 = (((struct o0_float *)0xC04F550)->v);
        (((struct o28_float *)(t1))->v) = (((((struct o28_float *)(t1))->v)) / u0);
        (((struct o2C_float *)(t1))->v) = (((((struct o2C_float *)(t1))->v)) / u0);
        (((struct o30_float *)(t1))->v) = ((((struct o4_float *)0xC04F550)->v));
        u0 = (((struct o8_float *)0xC04F550)->v);
        (((struct o44_float *)(t1))->v) = u0;
        (((struct o40_float *)(t1))->v) = u0;
        (((struct o48_float *)(t1))->v) = ((((struct oC_float *)0xC04F550)->v));
        (((struct oAC_ushort *)(t1))->v) = 0x21F;
        (((struct oA9_uchar *)(t1))->v) = 0x21;
        t2 = (((struct oC4_int *)(t1))->v);
        FUN_0c03744a(t2, 0x0, 0x1, (*(int *)0xC4B410C));
        *(unsigned char *)((t2 + 0x0)) = 0x1;
        *(unsigned short *)((t2 + 0x6)) = 0x1F;
        (((struct o6C_float *)(t2))->v) = ((((struct o0_float *)0xC241398)->v));
        (((struct o70_float *)(t2))->v) = ((((struct o4_float *)0xC241398)->v));
        (((struct o74_float *)(((((struct oC4_int *)(t1))->v))))->v) = ((((struct o18_float *)0xC04F550)->v));
        t0 = 0x74;
    }
    return t0;
}

