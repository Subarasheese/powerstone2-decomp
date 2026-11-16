/* Straight-line functions with calls and guards (batch gen_nk): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o24_short { char p[0x24]; short v; };
struct o3770_int { char p[0x3770]; int v; };
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
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c037498(int, int, int, int);
int FUN_0c037bf6(int);
int FUN_0c038362(int);
int FUN_0c03f444(int, int, int);
int FUN_0c0735f4(int, int);
int FUN_0c085d0c(int, int, int, int);
int FUN_0c18778c(void);
int FUN_0c187798(void);
int FUN_0c141ab0(int a4, int a5);
int FUN_0c15363c(int a4);
int FUN_0c07b5f4(int a4, int a5, int a6, int a7);

int FUN_0c141ab0(int a4, int a5)
{
    register int t0;
    register int t3;
    register int t4;
    register int t16;
    register float u12;

    t0 = 0x0;
    for (;;) {
        t3 = FUN_0c037320(0x5, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
        t4 = FUN_0c03f444(0x5, 0x0, t3);
        t16 = t4;
        if (t4 != 0) {
            FUN_0c03733c(t4, 0x5, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
            (((struct oAC_ushort *)(t4))->v) = 0x21F;
            (((struct oA9_uchar *)(t4))->v) = (*(signed char *)((a4 + 0xA9)));
            *(unsigned int *)((t4 + 0x4)) = 0xC141B86;
            *(unsigned char *)((t4 + 0x1)) = (*(signed char *)((a4 + 0x1)));
            *(unsigned char *)((t4 + 0x2)) = t0;
            *(unsigned int *)((t4 + 0x10)) = a4;
            (((struct o22_ushort *)(t4))->v) = ((((struct o24_short *)(a4))->v));
            (((struct oA4_uint *)(t4))->v) = a5;
            *(unsigned int *)((t4 + 0x34)) = 0x71C;
            u12 = *(float *)(((t0 << 2) + 0xC20234C));
            (((struct o44_float *)(t4))->v) = u12;
            (((struct o40_float *)(t4))->v) = u12;
            (((struct o48_float *)(t4))->v) = 0.0f;
            FUN_0c187798();
            *(volatile signed char *)((t4 + 0x1));
            t16 = (FUN_0c18778c());
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x4) {
            break;
        }
    }
    return t16;
}

int FUN_0c15363c(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t0 = FUN_0c03f444(0x5, 0x0, 0x4);
    t1 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned int *)((t0 + 0x4)) = 0xC153710;
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = 0x80;
        FUN_0c187798();
        FUN_0c187798();
        FUN_0c187798();
        *(unsigned int *)((t0 + 0x10)) = a4;
        t2 = (((struct oC4_int *)(t0))->v);
        FUN_0c037498(t2, 0x0, 0x14, (*(int *)0xC4B40CC));
        *(unsigned char *)((t2 + 0x0)) = 0x1;
        *(unsigned short *)((t2 + 0x6)) = 0x1F;
        FUN_0c187798();
        (((struct o88_float *)(t2))->v) = 1.0f;
        (((struct o84_float *)(t2))->v) = 1.0f;
        (((struct o8C_float *)(t2))->v) = (*(float *)0xC153780);
        t2 = 0x1;
        t3 = 0x4;
        for (;;) {
            t4 = *(int *)((((0xC4 + t0) + t3) + 0x0));
            FUN_0c037498(t4, 0x0, 0x15, (*(int *)0xC4B40CC));
            t2 = (t2 + 0x1);
            *(unsigned char *)((t4 + 0x0)) = 0x0;
            *(unsigned short *)((t4 + 0x6)) = 0x21F;
            t3 = (t3 + 0x4);
            if ((int)(signed char)t2 >= (int)0x4) {
                break;
            }
        }
        t1 = 0x21F;
    }
    return t1;
}

int FUN_0c07b5f4(int a4, int a5, int a6, int a7)
{
    register int t6;
    register int t10;

    if (((((struct o3770_int *)(a4))->v)) == 0) {
        return FUN_0c085d0c(a4, a5, a6, a7);
    }
    FUN_0c037bf6(a4);
    if (!((*(float *)0xC07B77C) > ((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v)))) {
        (((struct o20_ushort *)(a4))->v) = 0x6;
        t6 = *(signed char *)((0x3721 + ((((struct o3770_int *)(a4))->v))));
        t10 = 0xA0;
        if ((unsigned char)t6 != 49) {
            t10 = 0xA1;
            if ((unsigned char)t6 != 0xCE) {
                t10 = 0xA0;
            }
        }
        FUN_0c0735f4(a4, ((*(int *)0xC25AD18) + (((t10 << 2) + t10) << 2)));
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        return 0x15;
    }
    return FUN_0c038362(a4);
}
