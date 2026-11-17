/* game/unsorted: functions 0C141CBC-0C141DEE, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c18778c(int);
int FUN_0c141cbc(int a4, int a5);

int FUN_0c141cbc(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;

    t1 = FUN_0c03f444(0x5, 0x0, 0x6);
    t2 = t1;
    if (t1 != 0) {
        t3 = 0xC20239C;
        t4 = 0x0;
        t5 = 0xC20239C;
        t6 = 0xC20239C;
        for (;;) {
            t7 = *(int *)((((t4 << 2) + (0xC4 + t1)) + 0x0));
            FUN_0c03744a(t7, (*(int *)((t6 + 0x0))), (*(int *)((t6 + 0x4))), (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
            *(unsigned short *)((t7 + 0x6)) = (*(short *)((t6 + 0xC)));
            if ((unsigned short)(*(short *)((t7 + 0x6))) == 31) {
                (((struct o8C_float *)(t7))->v) = 0.0f;
                (((struct o88_float *)(t7))->v) = 0.0f;
                (((struct o84_float *)(t7))->v) = 0.0f;
            }
            t4 = (t4 + 0x1);
            if ((int)(*(int *)((t3 + 0x8))) < 0) {
                (((struct o68_uint *)(t7))->v) = 0x0;
            } else {
                (((struct o68_uint *)(t7))->v) = ((*(int *)(((((*(int *)((t5 + 0x8))) << 2) + (0xC4 + t1)) + 0x0))) + 0x28);
            }
            t5 = (t5 + 0x10);
            t3 = (t3 + 0x10);
            t6 = (t6 + 0x10);
            if ((unsigned int)t4 >= (unsigned int)0x6) {
                break;
            }
        }
        *(volatile int *)((t1 + 0xC8));
        *(volatile signed char *)((a4 + 0x1));
        t3 = ((int (*)(void))(FUN_0c18778c))();
        *(volatile int *)((t1 + 0xCC));
        t3 = ((int (*)(int))(FUN_0c18778c))(0xC20247C);
        *(volatile int *)((t1 + 0xD4));
        *(volatile signed char *)((a4 + 0x1));
        t3 = ((int (*)(void))(FUN_0c18778c))();
        *(volatile int *)((t1 + 0xD8));
        t3 = ((int (*)(int))(FUN_0c18778c))(t0);
        (((struct oAC_ushort *)(t1))->v) = 0xF;
        (((struct oA9_uchar *)(t1))->v) = (*(signed char *)((a4 + 0xA9)));
        *(unsigned int *)((t1 + 0x4)) = 0xC141E24;
        *(unsigned char *)((t1 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned char *)((t1 + 0x2)) = (*(signed char *)((a4 + 0x2)));
        (((struct oA4_uint *)(t1))->v) = (a4 + 0x64);
        *(unsigned short *)((t1 + 0x1C)) = a5;
        *(unsigned int *)((t1 + 0x10)) = a4;
        (((struct o48_float *)(t1))->v) = 0.0f;
        (((struct o44_float *)(t1))->v) = 0.0f;
        (((struct o40_float *)(t1))->v) = 0.0f;
        t2 = 0x40;
    }
    return t2;
}
