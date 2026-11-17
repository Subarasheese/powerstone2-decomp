/* game/unsorted: functions 0C0F7B60-0C0F7EE0, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int);
int FUN_0c03f444(int, int, int);
int FUN_0c0cff96(int, int);
int FUN_0c0f7b60(int a4, int a5);
int FUN_0c0f7bca(int a4);
int FUN_0c0f7c1c(void);

int FUN_0c0f7b60(int a4, int a5)
{
    int stk[2];
    register int t0;
    register int t6;
    register int t2;

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 0)) = a5;
    t0 = FUN_0c03f444(0x5, 0x0, 0x1);
    t6 = t0;
    if (t0 != 0) {
        t2 = (((struct oC4_int *)(t0))->v);
        FUN_0c03744a(t2, 0x0, 0x6, (*(int *)0xC4B410C));
        *(unsigned short *)((t2 + 0x6)) = 0x21F;
        (((struct o88_float *)(t2))->v) = (1.0f + 1.0f);
        (((struct o84_float *)(t2))->v) = (1.0f + 1.0f);
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = 0x80;
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned char *)((t0 + 0x2)) = (*(signed char *)(((int)stk + 4)));
        *(unsigned int *)((t0 + 0x4)) = 0xC0F7AAE;
        t6 = *(int *)(((int)stk + 0));
        *(unsigned short *)((t0 + 0x1C)) = t6;
    }
    return t6;
}

int FUN_0c0f7bca(int a4)
{
    register int t0;

    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) - 0x38E);
    }
    t0 = (((struct oC4_int *)(a4))->v);
    (((struct o80_uint *)(t0))->v) = (((((struct o80_int *)(t0))->v)) + 0x5B);
    t0 = FUN_0c0cff96((*(int *)((((((struct oC4_int *)(a4))->v)) + 0x8))), 0xC1FB2C8);
    if ((int)(unsigned char)(*(signed char *)0xC541F43) >= (int)0xE) {
        return FUN_0c03f346(a4);
    }
    return t0;
}

int FUN_0c0f7c1c(void)
{
    register int t0;
    register int t1;

    t0 = FUN_0c037320(0xD, (*(int *)0xC4B410C));
    t1 = FUN_0c03f444(0x5, 0x0, t0);
    t0 = t1;
    if (t1 != 0) {
        FUN_0c03733c(t1, 0xD, (*(int *)0xC4B410C));
        (((struct oA8_uchar *)(t1))->v) = 0x1;
        (((struct oAC_ushort *)(t1))->v) = 0xF;
        (((struct oA9_uchar *)(t1))->v) = 0x80;
        *(unsigned char *)((t1 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t1 + 0x4)) = 0xC0F7BCA;
        t0 = 0xFFFFFFFF;
    }
    return t0;
}
