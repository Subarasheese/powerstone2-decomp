/* game/unsorted: functions 0C15FFCC-0C16014C, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o74_float { char p[0x74]; float v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c037498(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c187798(void);
int FUN_0c15ffcc(int a4, int a5, int a6, int a7, float f4);

int FUN_0c15ffcc(int a4, int a5, int a6, int a7, float f4)
{
    int stk[5];
    register int t0;
    register int t36;
    register int t5;
    register int t6;
    register int t13;
    register int t18;
    register int t20;

    *(unsigned char *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 16)) = a5;
    *(unsigned int *)(((int)stk + 8)) = a6;
    *(unsigned int *)(((int)stk + 0)) = a7;
    *(float *)(((int)stk + 12)) = f4;
    t0 = FUN_0c03f444(0x5, 0x0, 0x7);
    t36 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC15FE00;
        (((struct oAC_ushort *)(t0))->v) = 0x1;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        *(volatile int *)(((int)stk + 0));
        FUN_0c187798();
        *(unsigned char *)((t0 + 0x2)) = (*(signed char *)(((int)stk + 4)));
        (((struct o48_float *)(t0))->v) = 1.0f;
        (((struct o44_float *)(t0))->v) = 1.0f;
        (((struct o40_float *)(t0))->v) = 1.0f;
        (((struct oA4_uint *)(t0))->v) = (*(int *)(((int)stk + 8)));
        *(unsigned int *)(((int)stk + 0)) = 0xC203988;
        t5 = 0x0;
        t6 = 0x0;
        for (;;) {
            FUN_0c037498((*(int *)((((0xC4 + t0) + t6) + 0x0))), (*(int *)((t6 + 0xC20396C))), 0x3B, (*(int *)0xC4B40CC));
            *(unsigned char *)(((*(int *)((((0xC4 + t0) + t6) + 0x0))) + 0x0)) = 0x0;
            *(unsigned short *)(((*(int *)((((0xC4 + t0) + t6) + 0x0))) + 0x6)) = 0x9;
            t13 = *(int *)(((int)stk + 0));
            *(volatile int *)((((0xC4 + t0) + t6) + 0x0));
            *(unsigned int *)(((int)stk + 0)) = (t13 + 0xC);
            FUN_0c187798();
            t5 = (t5 + 0x1);
            (((struct o80_uint *)((*(int *)((((0xC4 + t0) + t6) + 0x0)))))->v) = (*(int *)((t6 + 0xC2039DC)));
            t18 = *(int *)((((0xC4 + t0) + t6) + 0x0));
            (((struct o8C_float *)(t18))->v) = 1.0f;
            (((struct o88_float *)(t18))->v) = 1.0f;
            (((struct o84_float *)(t18))->v) = 1.0f;
            t6 = (t6 + 0x4);
            if ((int)t5 >= (int)0x7) {
                break;
            }
        }
        *(unsigned short *)((((((struct oC4_int *)(t0))->v)) + 0x6)) = 0x31;
        t20 = (((struct oC4_int *)(t0))->v);
        (((struct o8C_float *)(t20))->v) = 4.0f;
        (((struct o88_float *)(t20))->v) = 4.0f;
        (((struct o84_float *)(t20))->v) = 4.0f;
        (((struct o74_float *)(((((struct oC8_int *)(t0))->v))))->v) = (*(float *)(((int)stk + 12)));
        (((struct o68_uint *)((*(int *)(((0xC4 + t0) + 0x4)))))->v) = (((((struct oC4_int *)(t0))->v)) + 0x28);
        (((struct o68_uint *)((*(int *)(((0xC4 + t0) + 0x8)))))->v) = ((*(int *)(((0xC4 + t0) + 0x4))) + 0x28);
        (((struct o68_uint *)((*(int *)(((0xC4 + t0) + 0xC)))))->v) = ((*(int *)(((0xC4 + t0) + 0x4))) + 0x28);
        (((struct o68_uint *)((*(int *)(((0xC4 + t0) + 0x10)))))->v) = ((*(int *)(((0xC4 + t0) + 0x4))) + 0x28);
        (((struct o68_uint *)((*(int *)(((0xC4 + t0) + 0x14)))))->v) = ((*(int *)(((0xC4 + t0) + 0x4))) + 0x28);
        (((struct o68_uint *)((*(int *)(((0xC4 + t0) + 0x18)))))->v) = ((*(int *)(((0xC4 + t0) + 0x4))) + 0x28);
        t36 = *(short *)(((int)stk + 16));
        *(unsigned short *)((t0 + 0x1C)) = t36;
    }
    return t36;
}
