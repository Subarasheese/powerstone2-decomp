/* game/unsorted: functions 0C14A9D8-0C14AACC, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oE4_int { char p[0xE4]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c0582de(int, int);
int FUN_0c07e2f4(int, int);
int FUN_0c187798(void);
int FUN_0c14a9d8(int a4);

int FUN_0c14a9d8(int a4)
{
    int stk[3];
    register int t0;
    register int t21;
    register float u1;
    register int t2;
    register int t3;
    register int t4;
    register int t10;
    register float u14;

    t0 = FUN_0c03f444(0x1, 0x0, 0x3);
    t21 = t0;
    if (t0 != 0) {
        u1 = (((struct o0_float *)0xC14AB30)->v);
        t2 = 0x0;
        t3 = 0xC202AD4;
        t4 = 0x0;
        for (;;) {
            t10 = *(int *)((((0xC4 + t0) + t4) + 0x0));
            FUN_0c03744a(t10, (*(signed char *)((t3 + 0x0))), (*(signed char *)((t3 + 0x1))), (*(int *)(((((*(signed char *)((a4 + 0x1))) << 2) << 1) + 0xC4B40E0))));
            t2 = (t2 + 0x1);
            (((struct o8C_float *)(t10))->v) = 0.0f;
            (((struct o88_float *)(t10))->v) = 0.0f;
            (((struct o84_float *)(t10))->v) = 0.0f;
            (((struct o20_float *)(t10))->v) = u1;
            (((struct o1C_float *)(t10))->v) = u1;
            (((struct o18_float *)(t10))->v) = u1;
            t3 = (t3 + 0x14);
            *(unsigned short *)((t10 + 0x6)) = 0x21F;
            t4 = (t4 + 0x4);
            if ((unsigned int)t2 >= (unsigned int)0x3) {
                break;
            }
        }
        *(unsigned int *)((t0 + 0x4)) = 0xC14AB60;
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        (((struct oAC_ushort *)(t0))->v) = 0x1F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        *(unsigned int *)((t0 + 0x10)) = a4;
        (((struct oA4_uint *)(t0))->v) = 0x0;
        u14 = (((struct o10_float *)0xC14AB30)->v);
        (((struct o44_float *)(t0))->v) = u14;
        (((struct o40_float *)(t0))->v) = u14;
        (((struct o48_float *)(t0))->v) = ((((struct o14_float *)0xC14AB30)->v));
        FUN_0c07e2f4(t0, 0x1);
        FUN_0c187798();
        FUN_0c0582de(((int)stk + 0), (((((struct oE4_int *)(a4))->v)) + 0x28));
        t21 = FUN_0c187798();
        *(unsigned int *)((t0 + 0x34)) = 0xFFFFC000;
    }
    return t21;
}
