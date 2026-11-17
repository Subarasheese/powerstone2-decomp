/* game/unsorted: functions 0C12380C-0C1238D8, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c187798(void);
int FUN_0c12380c(int a4, int a5);

int FUN_0c12380c(int a4, int a5)
{
    int stk[1];
    register int t0;
    register int t11;
    register int t6;

    *(unsigned char *)(((int)stk + 0)) = a5;
    t0 = FUN_0c03f444(0x1, 0x0, 0x1);
    t11 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned int *)((t0 + 0x4)) = 0xC12360C;
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0x20F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        FUN_0c187798();
        (((struct o2C_float *)(t0))->v) = (((((struct o2C_float *)(t0))->v)) + 250.0f);
        FUN_0c187798();
        (((struct o48_float *)(t0))->v) = 1.0f;
        (((struct o44_float *)(t0))->v) = 1.0f;
        (((struct o40_float *)(t0))->v) = 1.0f;
        *(unsigned char *)((t0 + 0x2)) = (*(signed char *)(((int)stk + 0)));
        t6 = (((struct oC4_int *)(t0))->v);
        FUN_0c03744a(t6, (*(signed char *)((t0 + 0x2))), 0x7, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
        *(unsigned char *)((t6 + 0x0)) = 0x1;
        *(unsigned short *)((t6 + 0x6)) = 0x21F;
        (((struct o18_float *)(t6))->v) = 1.0f;
        (((struct o20_float *)(t6))->v) = 1.0f;
        (((struct o1C_float *)(t6))->v) = 1.0f;
        (((struct o8C_float *)(t6))->v) = 0.0f;
        (((struct o88_float *)(t6))->v) = 0.0f;
        (((struct o84_float *)(t6))->v) = 0.0f;
        *(unsigned short *)((t0 + 0x1C)) = 0x0;
        *(unsigned short *)((t0 + 0x1E)) = 0x0;
        *(unsigned int *)((t0 + 0x10)) = a4;
        t11 = 0x0;
    }
    return t11;
}
