/* game/unsorted: functions 0C13B818-0C13C78E, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oE4_int { char p[0xE4]; int v; };
struct oF4_int { char p[0xF4]; int v; };
int FUN_0c037498(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c187798(int, int, int);
int FUN_0c13c150(int a4);

int FUN_0c13c150(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t1 = FUN_0c03f444(0x5, 0x0, 0x2);
    t2 = t1;
    if (t1 != 0) {
        *(unsigned char *)((t1 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned int *)((t1 + 0x4)) = 0xC13BFC4;
        *(unsigned int *)((t1 + 0x10)) = a4;
        (((struct o48_float *)(t1))->v) = 0.0f;
        (((struct o44_float *)(t1))->v) = 0.0f;
        (((struct o40_float *)(t1))->v) = 0.0f;
        (((struct oA8_uchar *)(t1))->v) = 0x0;
        (((struct oAC_ushort *)(t1))->v) = 0xF;
        (((struct oA9_uchar *)(t1))->v) = 0x21;
        t3 = 0x0;
        for (;;) {
            FUN_0c037498((*(int *)((((0xC4 + t1) + (t3 << 2)) + 0x0))), t3, 0x3, (*(int *)((0xC4B40FC + ((*(signed char *)((t1 + 0x1))) << 2)))));
            *(unsigned char *)(((*(int *)((((0xC4 + t1) + (t3 << 2)) + 0x0))) + 0x0)) = 0x1;
            t4 = *(int *)((((t3 << 2) + (0xC4 + t1)) + 0x0));
            t3 = (t3 + 0x1);
            *(unsigned short *)((t4 + 0x6)) = 0x1F;
            if ((int)t3 >= (int)0x2) {
                break;
            }
        }
        (((struct o68_uint *)(((((struct oC4_int *)(t1))->v))))->v) = (((((struct oE4_int *)((((short)(*(signed char *)((t1 + 0x1))) * (short)0x3938) + 0xC532498)))->v)) + 0x28);
        (((struct o68_uint *)(((((struct oC8_int *)(t1))->v))))->v) = (((((struct oF4_int *)((0xC532498 + ((short)(*(signed char *)((t1 + 0x1))) * (short)0x3938))))->v)) + 0x28);
        (((struct o78_uint *)(((((struct oC4_int *)(t1))->v))))->v) = 0x4000;
        (((struct o78_uint *)(((((struct oC8_int *)(t1))->v))))->v) = 0x4000;
        (((struct o80_uint *)(((((struct oC4_int *)(t1))->v))))->v) = 0x4000;
        (((struct o80_uint *)(((((struct oC8_int *)(t1))->v))))->v) = 0x4000;
        *(volatile int *)((t1 + 0xC4));
        t3 = ((int (*)(int))(FUN_0c187798))(0xC2020E8);
        *(volatile int *)((t1 + 0xC8));
        t3 = ((int (*)(int))(FUN_0c187798))(t0);
        *(volatile int *)(((0xC4 + t1) + 0x0));
        *(volatile int *)(((0xC4 + t1) + 0x4));
        t0 = ((int (*)(int))(FUN_0c187798))((0xC4 + t1));
        t2 = (((int (*)(void))(FUN_0c187798))());
    }
    return t2;
}
