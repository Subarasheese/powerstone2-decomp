/* game/unsorted: functions 0C0DE650-0C0DE6FE, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o2C_float { char p[0x2C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c07e420(int, int);
int FUN_0c187798(void);
int FUN_0c0de650(int a4, int a5);

int FUN_0c0de650(int a4, int a5)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = FUN_0c037320(0x14, (*(int *)0xC4B410C));
    t1 = FUN_0c03f444(0x1, 0x0, t0);
    t0 = t1;
    if (t1 != 0) {
        FUN_0c03733c(t1, 0x14, (*(int *)0xC4B410C));
        *(unsigned int *)((t1 + 0x4)) = 0xC0DE528;
        *(unsigned char *)((t1 + 0x1)) = 0xFFFFFFFF;
        *(unsigned char *)((t1 + 0x3)) = a5;
        (((struct oAC_ushort *)(t1))->v) = 0xF;
        (((struct oA9_uchar *)(t1))->v) = 0x21;
        FUN_0c07e420(t1, 0x5);
        (((struct o48_float *)(t1))->v) = 1.0f;
        (((struct o44_float *)(t1))->v) = 1.0f;
        (((struct o40_float *)(t1))->v) = 1.0f;
        FUN_0c064d24(t1, 0x2, 0xC, 0x0, 0x100, 0xF, 0x0, 0xFFFFFFFF);
        FUN_0c187798();
        u0 = ((((struct o2C_float *)(t1))->v));
        u0 = u0 + 20.0f * ((float)((((a5 << 2) << 2) - a5) + 0x78));
        (((struct o2C_float *)(t1))->v) = u0;
        t0 = 0x2C;
    }
    return t0;
}
