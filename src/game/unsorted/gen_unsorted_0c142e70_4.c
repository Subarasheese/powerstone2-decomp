/* game/unsorted: functions 0C142E70-0C143FE0, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c187798(int);
int FUN_0c143a30(int a4, int a5);

int FUN_0c143a30(int a4, int a5)
{
    register int t0;
    register int t18;
    register int t1;
    register int t2;
    register int t3;
    register int t7;
    register int t16;

    t0 = FUN_0c03f444(0x5, 0x0, 0x4);
    t18 = t0;
    if (t0 != 0) {
        t1 = 0x0;
        t2 = 0xC202704;
        t3 = 0x0;
        for (;;) {
            t7 = *(int *)((((0xC4 + t0) + t3) + 0x0));
            FUN_0c03744a(t7, (*(signed char *)((t2 + 0x0))), 0x8, (*(int *)(((((*(signed char *)((a4 + 0x1))) << 2) << 1) + 0xC4B40E0))));
            t1 = (t1 + 0x1);
            (((struct o8C_float *)(t7))->v) = 0.0f;
            (((struct o88_float *)(t7))->v) = 0.0f;
            (((struct o84_float *)(t7))->v) = 0.0f;
            (((struct o20_float *)(t7))->v) = 1.0f;
            (((struct o1C_float *)(t7))->v) = 1.0f;
            (((struct o18_float *)(t7))->v) = 1.0f;
            t2 = (t2 + 0x1);
            *(unsigned short *)((t7 + 0x6)) = 0x21F;
            t3 = (t3 + 0x4);
            if ((unsigned int)t1 >= (unsigned int)0x4) {
                break;
            }
        }
        *(unsigned int *)((t0 + 0x4)) = 0xC143B66;
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        *(unsigned int *)((t0 + 0x10)) = a4;
        (((struct oA4_uint *)(t0))->v) = ((*(int *)(((((*(int *)(((a5 << 2) + 0xC2026FC))) << 2) + (0xC4 + a4)) + 0x0))) + 0x28);
        FUN_0c187798((a5 << 2));
        *(unsigned int *)((t0 + 0x34)) = (*(int *)((t16 + 0xC2026F4)));
        t18 = 0xC2026F4;
    }
    return t18;
}
