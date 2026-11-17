/* game/unsorted: functions 0C04E8CC-0C04E9E2, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o1B_uchar { char p[0x1B]; unsigned char v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB0_float { char p[0xB0]; float v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c04e8cc(void);
int FUN_0c04e922(int a4, int a5, int a6, int a7);
int FUN_0c04e986(int a4, int a5);

int FUN_0c04e8cc(void)
{
    register int t0;
    register int t4;
    register int t2;

    t0 = FUN_0c03f444(0x5, 0x0, 0x1);
    t4 = t0;
    if (t0 != 0) {
        t2 = (((struct oC4_int *)(t0))->v);
        FUN_0c03733c(t0, 0xC, (*(int *)0xC4B410C));
        *(unsigned short *)((t2 + 0x6)) = 0x40F;
        (((struct o88_float *)(t2))->v) = 1.0f;
        (((struct o84_float *)(t2))->v) = 1.0f;
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = 0x80;
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC04E828;
        t4 = 0xFFFFFFFF;
    }
    return t4;
}

int FUN_0c04e922(int a4, int a5, int a6, int a7)
{
    register int t6;

    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oB0_float *)(a4))->v) = 0.0f;
        (((struct oBC_float *)(a4))->v) = 0.0f;
        (((struct oB8_float *)(a4))->v) = 0.0f;
        (((struct oB4_float *)(a4))->v) = 0.0f;
    }
    t6 = *(signed char *)((a4 + 0x15));
    if (t6 == 0) {
        (((struct oB0_float *)(a4))->v) = (((((struct oB0_float *)(a4))->v)) + (1.0f / (float)(*(short *)((a4 + 0x1E)))));
        if (!(1.0f > ((((struct oB0_float *)(a4))->v)))) {
            (((struct oB0_float *)(a4))->v) = 1.0f;
        }
        if ((int)(unsigned char)(*(signed char *)0xC541F44) >= (int)(*(signed char *)((a4 + 0x1B)))) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        return 0x1B;
    }
    return t6;
}

int FUN_0c04e986(int a4, int a5)
{
    int stk[2];
    register int t2;
    register int t7;

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 0)) = a5;
    FUN_0c037320(0xD, (*(int *)0xC4B410C));
    t2 = FUN_0c03f444(0x5, 0x0, 0x1);
    t7 = t2;
    if (t2 != 0) {
        FUN_0c03733c(t2, 0xD, (*(int *)0xC4B410C));
        (((struct oA8_uchar *)(t2))->v) = 0x1;
        (((struct oAC_ushort *)(t2))->v) = 0x40F;
        (((struct oA9_uchar *)(t2))->v) = 0x80;
        *(unsigned char *)((t2 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t2 + 0x4)) = 0xC04E922;
        *(unsigned short *)((t2 + 0x1E)) = (*(short *)(((int)stk + 4)));
        (((struct o1B_uchar *)(t2))->v) = (*(int *)(((int)stk + 0)));
        t7 = 0x1B;
    }
    return t7;
}
