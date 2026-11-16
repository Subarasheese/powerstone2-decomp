/* Straight-line functions with calls and guards (batch gen_ac): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o2C_float { char p[0x2C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB0_float { char p[0xB0]; float v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c037498(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c0582de(int, int);
int FUN_0c187798(int);
int FUN_0c1615b6(int a4, int a5, int a6, float f4);
int FUN_0c14af80(int a4);
int FUN_0c161128(int a4);

int FUN_0c1615b6(int a4, int a5, int a6, float f4)
{
    int stk[4];
    register int t2;
    register int t14;
    register float u9;
    register int t12;
    register int t10;

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 12)) = a5;
    *(float *)(((int)stk + 8)) = f4;
    *(unsigned int *)(((int)stk + 4)) = a6;
    FUN_0c037320(0x9, (*(int *)0xC4B40CC));
    t2 = FUN_0c03f444(0x5, 0x0, 0x1);
    t14 = t2;
    if (t2 != 0) {
        *(unsigned char *)((t2 + 0x1)) = (*(signed char *)(((*(int *)(((int)stk + 0))) + 0x1)));
        *(unsigned char *)((t2 + 0x2)) = (*(signed char *)(((int)stk + 4)));
        *(unsigned int *)((t2 + 0x4)) = 0xC161578;
        (((struct oA8_uchar *)(t2))->v) = 0x1;
        (((struct oAC_ushort *)(t2))->v) = 0x3F;
        (((struct oA9_uchar *)(t2))->v) = 0x21;
        *(unsigned int *)((t2 + 0x10)) = (*(int *)(((int)stk + 0)));
        *(volatile int *)(((int)stk + 12));
        FUN_0c187798(t2);
        u9 = *(float *)(((int)stk + 8));
        (((struct o48_float *)(t10))->v) = u9;
        (((struct o44_float *)(t10))->v) = u9;
        (((struct o40_float *)(t10))->v) = u9;
        *(unsigned short *)((t10 + 0x1C)) = 0x4;
        *(unsigned short *)((t10 + 0x1E)) = 0x0;
        t12 = (((struct oC4_int *)(t10))->v);
        FUN_0c03744a(t12, 0x0, 0x9, (*(int *)0xC4B40CC));
        *(unsigned char *)((t12 + 0x0)) = 0x1;
        *(unsigned short *)((t12 + 0x6)) = 0xF;
        t14 = 0xF;
    }
    return t14;
}

int FUN_0c14af80(int a4)
{
    register int t0;
    register int t2;

    t0 = FUN_0c03f444(0x5, 0x0, 0x1);
    if (t0 != 0) {
        t2 = (((struct oC4_int *)(t0))->v);
        FUN_0c037498(t2, 0x7, 0xE, (*(int *)0xC4B40CC));
        *(unsigned short *)((t2 + 0x6)) = 0x15;
        *(unsigned char *)((t2 + 0x0)) = 0x1;
        (((struct o8C_float *)(t2))->v) = (1.0f + 1.0f);
        (((struct o88_float *)(t2))->v) = (1.0f + 1.0f);
        (((struct o84_float *)(t2))->v) = (1.0f + 1.0f);
        *(unsigned int *)((t0 + 0x4)) = 0xC14B012;
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        *(unsigned int *)((t0 + 0x10)) = a4;
        FUN_0c187798(0x1);
        return FUN_0c0582de((t0 + 0x28), ((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC53257C))) + 0x28));
    }
    return t0;
}

int FUN_0c161128(int a4)
{
    int stk[1];
    register int t1;
    register int t2;
    register int t12;
    register int t9;

    *(unsigned char *)(((int)stk + 0)) = a4;
    t1 = FUN_0c037320(0x8, (*(int *)0xC4B40CC));
    t2 = FUN_0c03f444(0x5, 0x0, t1);
    t12 = t2;
    if (t2 != 0) {
        FUN_0c03733c(t2, 0x8, (*(int *)0xC4B40CC));
        *(unsigned char *)((t2 + 0x1)) = (*(signed char *)(((int)stk + 0)));
        (((struct oA8_uchar *)(t2))->v) = 0x1;
        (((struct oAC_ushort *)(t2))->v) = 0x41F;
        (((struct oA9_uchar *)(t2))->v) = 0x21;
        *(unsigned int *)((t2 + 0x4)) = 0xC1611BA;
        *(unsigned int *)((t2 + 0x10)) = (((short)(*(signed char *)(((int)stk + 0))) * (short)0x3938) + 0xC532498);
        (((struct oB0_float *)(t2))->v) = 1.0f;
        *(unsigned int *)((t2 + 0x34)) = 0x4000;
        FUN_0c187798(0xC532498);
        (((struct oA4_uint *)(t2))->v) = (((((struct oC4_int *)((t9 + ((short)(*(signed char *)((t2 + 0x1))) * (short)0x3938))))->v)) + 0x28);
        (((struct o2C_float *)(t2))->v) = (*(float *)0xC16126C);
        t12 = 0x2C;
    }
    return t12;
}
