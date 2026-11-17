/* game/unsorted: functions 0C04F148-0C04F1D8, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o24_float { char p[0x24]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c04f148(int a4, int a5);

int FUN_0c04f148(int a4, int a5)
{
    register int t0;
    register int t1;

    t0 = FUN_0c037320(a5, (*(int *)0xC4B410C));
    t1 = FUN_0c03f444(0x5, 0x0, t0);
    t0 = t1;
    if (t1 != 0) {
        *(unsigned int *)((t1 + 0x4)) = 0xC04F0C4;
        *(unsigned char *)((t1 + 0x1)) = 0xFFFFFFFF;
        *(unsigned char *)((t1 + 0x2)) = a4;
        FUN_0c03733c(t1, a5, (*(int *)0xC4B410C));
        (((struct oAC_ushort *)(t1))->v) = 0x1F;
        (((struct oA9_uchar *)(t1))->v) = 0x21;
        (((struct o40_float *)(t1))->v) = 1.5f;
        (((struct o44_float *)(t1))->v) = 1.5f;
        (((struct o48_float *)(t1))->v) = 1.0f;
        *(unsigned short *)((((((struct oC4_int *)(t1))->v)) + 0x6)) = 0x100F;
        (((struct o24_float *)(((((struct oC4_int *)(t1))->v))))->v) = 1.5f;
        (((struct o30_float *)(t1))->v) = (((((float)(a4 & 0xFE) * 800.0f) / (1.0f + 1.0f))) + -38400.0f);
        t0 = 0x30;
    }
    return t0;
}
