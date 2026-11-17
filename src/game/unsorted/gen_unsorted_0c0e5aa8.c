/* game/unsorted: functions 0C0E5AA8-0C0E5B30, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o28_float { char p[0x28]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c0e5aa8(int a4);

int FUN_0c0e5aa8(int a4)
{
    register int t0;
    register int t1;

    t0 = FUN_0c037320(0x37, (*(int *)0xC4B410C));
    t1 = FUN_0c03f444(0x2, 0x0, t0);
    t0 = t1;
    if (t1 != 0) {
        FUN_0c03733c(t1, 0x37, (*(int *)0xC4B410C));
        (((struct oAC_ushort *)(t1))->v) = 0xF;
        (((struct oA9_uchar *)(t1))->v) = 0x21;
        *(unsigned int *)((t1 + 0x4)) = 0xC0E590C;
        *(unsigned char *)((t1 + 0x1)) = 0xFFFFFFFF;
        (((struct o28_float *)(t1))->v) = (*(float *)((a4 + 0x0)));
        (((struct o30_float *)(t1))->v) = ((((struct o8_float *)(a4))->v));
        (((struct o48_float *)(t1))->v) = 1.0f;
        (((struct o44_float *)(t1))->v) = 1.0f;
        (((struct o40_float *)(t1))->v) = 1.0f;
        t0 = (FUN_0c064d24(t1, 0x2, 0x7, 0x1, 0x10, 0x0, 0x100, 0xFFFFFFEF));
    }
    return t0;
}
