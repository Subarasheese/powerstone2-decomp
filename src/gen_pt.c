/* Straight-line functions with calls and guards (batch gen_pt): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o118_int { char p[0x118]; int v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o374B_uchar { char p[0x374B]; unsigned char v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oE4_int { char p[0xE4]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c037498(int, int, int, int);
int FUN_0c037bf6(int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c0582de(int, int);
int FUN_0c07043c(int, float, float, float, float);
int FUN_0c07ce58(int, int);
int FUN_0c07d774(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c0a3058(int, int, int, int);
int FUN_0c187798(void);
int FUN_0c08f040(int a4, int a5, int a6);
int FUN_0c0a7d5c(int a4, int a5, int a6);
int FUN_0c0a7b2c(int a4, int a5, int a6);
int FUN_0c1312e2(int a4);
int FUN_0c136208(int a4);

int FUN_0c08f040(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;

    (((struct o374B_uchar *)(a4))->v) = 0x1;
    FUN_0c037bf6(a4, a5, a6);
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    t1 = (short)(t0 - 1);
    if ((int)(short)(t0 - 1) <= 0) {
        FUN_0c07ce58(a4, ((((short)(*(signed char *)((a4 + 0x2))) * (short)0x78) + 0xC25B194) + 0x30));
        *(unsigned int *)((a4 + 0x38)) = (FUN_0c07d774(a4));
        FUN_0c07043c(a4, 35.0f, -3.5f, 500.0f, 1.0f);
        t0 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t0, 0x2, 0xA, (t0), 0x2, 0xA);
        t0 = *(int *)(((0x118 + a4) + 0x4));
        t2 = (((struct o118_int *)(a4))->v);
        (((struct oA0_float *)(t0))->v) = 1.0f;
        (((struct o9C_float *)(t0))->v) = 1.0f;
        (((struct oA0_float *)(t2))->v) = 1.0f;
        (((struct o9C_float *)(t2))->v) = 1.0f;
        t0 = *(int *)(((0x118 + a4) + 0x4));
        t2 = (((struct o118_int *)(a4))->v);
        (((struct o98_float *)(t0))->v) = 1.0f;
        (((struct o98_float *)(t2))->v) = 1.0f;
        (((struct o94_float *)(t0))->v) = 1.0f;
        (((struct o94_float *)(t2))->v) = 1.0f;
        *(unsigned short *)((a4 + 0x1C)) = 0x5;
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        t1 = 0x16;
    }
    return t1;
}

int FUN_0c0a7d5c(int a4, int a5, int a6)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;

    t1 = FUN_0c037bf6(a4, a5, a6);
    if ((unsigned char)t1 != 0) {
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        FUN_0c0a3058(a4, (*(signed char *)((a4 + 0x1))), 0x2, 0x17);
        t2 = *(int *)(((0x118 + a4) + 0x4));
        t3 = (((struct o118_int *)(a4))->v);
        (((struct oA0_float *)(t2))->v) = 1.0f;
        (((struct o9C_float *)(t2))->v) = 1.0f;
        (((struct oA0_float *)(t3))->v) = 1.0f;
        (((struct o9C_float *)(t3))->v) = 1.0f;
        t2 = *(int *)(((0x118 + a4) + 0x4));
        t3 = (((struct o118_int *)(a4))->v);
        (((struct o98_float *)(t2))->v) = 1.0f;
        (((struct o98_float *)(t3))->v) = 1.0f;
        (((struct o94_float *)(t2))->v) = 1.0f;
        (((struct o94_float *)(t3))->v) = 1.0f;
        FUN_0c037bf6(a4, t3, t2);
        *(unsigned int *)((a4 + 0x38)) = (unsigned short)((*(int *)((a4 + 0x38))) + 0x8000);
        t2 = FUN_0c07ce58(a4, ((((short)(*(signed char *)((a4 + 0x2))) * (short)0x78) + 0xC25B194) + 0x18));
        if ((t2 != 0) && (t0 = *(signed char *)((a4 + 0x1)), (t0 + 0x1) != t2)) {
            *(unsigned int *)((a4 + 0x38)) = (FUN_0c07d774(a4));
        }
        return FUN_0c07043c(a4, ((((struct o8_float *)0xC0A7E60)->v)), ((((struct o4_float *)0xC0A7E60)->v)), ((((struct o0_float *)0xC0A7E60)->v)), 1.0f);
    }
    return (unsigned char)t1;
}

int FUN_0c0a7b2c(int a4, int a5, int a6)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;

    t1 = FUN_0c037bf6(a4, a5, a6);
    if ((unsigned char)t1 != 0) {
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        FUN_0c0a3058(a4, (*(signed char *)((a4 + 0x1))), 0x2, 0xC);
        t2 = *(int *)(((0x118 + a4) + 0x4));
        t3 = (((struct o118_int *)(a4))->v);
        (((struct oA0_float *)(t2))->v) = 1.0f;
        (((struct o9C_float *)(t2))->v) = 1.0f;
        (((struct oA0_float *)(t3))->v) = 1.0f;
        (((struct o9C_float *)(t3))->v) = 1.0f;
        t2 = *(int *)(((0x118 + a4) + 0x4));
        t3 = (((struct o118_int *)(a4))->v);
        (((struct o98_float *)(t2))->v) = 1.0f;
        (((struct o98_float *)(t3))->v) = 1.0f;
        (((struct o94_float *)(t2))->v) = 1.0f;
        (((struct o94_float *)(t3))->v) = 1.0f;
        FUN_0c037bf6(a4, t3, t2);
        *(unsigned int *)((a4 + 0x38)) = (unsigned short)((*(int *)((a4 + 0x38))) + 0x8000);
        t2 = FUN_0c07ce58(a4, ((((short)(*(signed char *)((a4 + 0x2))) * (short)0x78) + 0xC25B194) + 0x18));
        if ((t2 != 0) && (t0 = *(signed char *)((a4 + 0x1)), (t0 + 0x1) != t2)) {
            *(unsigned int *)((a4 + 0x38)) = (FUN_0c07d774(a4));
        }
        return FUN_0c07043c(a4, 35.0f, -3.5f, 500.0f, 1.0f);
    }
    return (unsigned char)t1;
}

int FUN_0c1312e2(int a4)
{
    register int t0;
    register int t10;
    register int t5;

    t0 = FUN_0c03f444(0x5, 0x0, 0x1);
    t10 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        *(unsigned short *)((t0 + 0x1C)) = 0x0;
        *(unsigned int *)((t0 + 0x10)) = a4;
        (((struct o2C_float *)(t0))->v) = 0.0f;
        (((struct o30_float *)(t0))->v) = 0.0f;
        (((struct o28_float *)(t0))->v) = 0.0f;
        *(unsigned int *)((t0 + 0x34)) = ((*(int *)((a4 + 0x34))) + 0xE38);
        *(unsigned int *)((t0 + 0x3C)) = (*(int *)((a4 + 0x3C)));
        *(unsigned int *)((t0 + 0x38)) = (*(int *)((a4 + 0x38)));
        (((struct o48_float *)(t0))->v) = 1.0f;
        (((struct o40_float *)(t0))->v) = 1.0f;
        *(unsigned int *)((t0 + 0x4)) = 0xC131258;
        t5 = (((struct oC4_int *)(t0))->v);
        FUN_0c03744a(t5, 0x1, 0x4, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
        *(unsigned char *)((t5 + 0x0)) = 0x1;
        *(unsigned short *)((t5 + 0x6)) = 0xF;
        FUN_0c187798();
        (((struct o78_uint *)(t5))->v) = 0x0;
        (((struct o80_uint *)(t5))->v) = 0x0;
        (((struct o7C_uint *)(t5))->v) = 0xFFFFC000;
        (((struct o70_float *)(t5))->v) = 100.0f;
        t10 = 0x70;
    }
    return t10;
}

int FUN_0c136208(int a4)
{
    register int t0;

    t0 = FUN_0c03f444(0x5, 0x0, 0x1);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        *(unsigned int *)((t0 + 0x4)) = 0xC136108;
        FUN_0c187798();
        (((struct o48_float *)(t0))->v) = 0.400000006f;
        (((struct o44_float *)(t0))->v) = 0.400000006f;
        (((struct o40_float *)(t0))->v) = 0.400000006f;
        *(unsigned int *)((t0 + 0x10)) = a4;
        FUN_0c037498(((((struct oC4_int *)(t0))->v)), 0x0, 0x1, (*(int *)((((*(signed char *)((t0 + 0x1))) << 2) + 0xC4B40FC))));
        *(unsigned char *)((((((struct oC4_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(t0))->v)) + 0x6)) = 0x3F;
        *(volatile int *)((t0 + 0xC4));
        FUN_0c187798();
        FUN_0c187798();
        return FUN_0c0582de((t0 + 0x28), (((((struct oE4_int *)((*(int *)((t0 + 0x10)))))->v)) + 0x28));
    }
    return t0;
}
