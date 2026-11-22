/* Straight-line functions with calls and guards (batch gen_is): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o118_int { char p[0x118]; int v; };
struct o12E_short { char p[0x12E]; short v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o1B_uchar { char p[0x1B]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o374B_uchar { char p[0x374B]; unsigned char v; };
struct o378C_float { char p[0x378C]; float v; };
struct o3830_ushort { char p[0x3830]; unsigned short v; };
struct o3850_short { char p[0x3850]; short v; };
struct o3850_uint { char p[0x3850]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
int FUN_0c037bf6(int, int, int);
int FUN_0c038362(int);
int FUN_0c05261c(int);
int FUN_0c059e60(int, int);
int FUN_0c07d030(int, int);
int FUN_0c07d774(int);
int FUN_0c07db58(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c12c728(int, int);
int FUN_0c12d268(int, int);
int FUN_0c12d85c(int, int);
int FUN_0c0995b6(int a4, int a5, int a6, float f4);
int FUN_0c0764c8(int a4);
int FUN_0c09a268(int a4);
int FUN_0c099e74(int a4, int a5, int a6);
int FUN_0c0996cc(int a4);
int FUN_0c09a316(int a4, int a5, int a6);
int FUN_0c099dec(int a4, int a5, int a6);
int FUN_0c09a18a(int a4, int a5, int a6);

int FUN_0c0995b6(int a4, int a5, int a6, float f4)
{
    register int t0;
    register float u0;
    register float u1;

    if (!(((((struct o40_float *)(a4))->v)) > ((((struct o378C_float *)(a4))->v)))) {
        u0 = (((struct o378C_float *)(a4))->v);
        (((struct o48_float *)(a4))->v) = u0;
        (((struct o44_float *)(a4))->v) = u0;
        t0 = 0x40;
        u1 = u0;
    } else {
        (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) - 0.100000001f);
        (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) - 0.100000001f);
        t0 = 0x48;
        u1 = (((((struct o48_float *)(a4))->v)) - 0.100000001f);
    }
    *(float *)((a4 + t0)) = u1;
    t0 = FUN_0c037bf6(a4, a5, a6);
    if ((unsigned char)t0 != 0) {
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        u0 = (((struct o378C_float *)(a4))->v);
        (((struct o48_float *)(a4))->v) = u0;
        (((struct o44_float *)(a4))->v) = u0;
        (((struct o40_float *)(a4))->v) = u0;
        return 0x40;
    }
    return FUN_0c038362(a4);
}

int FUN_0c0764c8(int a4)
{
    register int t0;
    register int t1;

    FUN_0c07e79c(a4, 0xFFFFFFFF, 0x4, 0x3F, 0xFFFFFFFF, 0x4, 0x3F);
    t0 = *(int *)(((0x118 + a4) + 0x4));
    t1 = (((struct o118_int *)(a4))->v);
    (((struct oA0_float *)(t0))->v) = 1.0f;
    (((struct o9C_float *)(t0))->v) = 1.0f;
    (((struct oA0_float *)(t1))->v) = 1.0f;
    (((struct o9C_float *)(t1))->v) = 1.0f;
    t0 = *(int *)(((0x118 + a4) + 0x4));
    t1 = (((struct o118_int *)(a4))->v);
    (((struct o98_float *)(t0))->v) = 1.0f;
    (((struct o98_float *)(t1))->v) = 1.0f;
    (((struct o94_float *)(t0))->v) = 1.0f;
    (((struct o94_float *)(t1))->v) = 1.0f;
    *(unsigned short *)((a4 + 0x1C)) = 0x0;
    (((struct o40_float *)(a4))->v) = (((((struct o0_float *)0xC1C5C64)->v)) * ((((struct o378C_float *)(a4))->v)));
    (((struct o44_float *)(a4))->v) = (((((struct o4_float *)0xC1C5C64)->v)) * ((((struct o378C_float *)(a4))->v)));
    (((struct o48_float *)(a4))->v) = (((((struct o8_float *)0xC1C5C64)->v)) * ((((struct o378C_float *)(a4))->v)));
    if ((*(signed char *)((a4 + 0x373F))) != -1) {
        (((struct o3830_ushort *)(a4))->v) = (((int)0x1 << (int)(*(signed char *)((a4 + 0x373F)))) ^ ((((struct o12E_short *)(a4))->v)));
        (((struct o374B_uchar *)(a4))->v) = 0x2;
    } else {
        (((struct o3830_ushort *)(a4))->v) = ((((struct o12E_short *)(a4))->v));
    }
    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
    return 0x16;
}

int FUN_0c09a268(int a4)
{
    register int t0;
    register int t1;

    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    (((struct o50_float *)(a4))->v) = 0.0f;
    (((struct o54_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    (((struct o5C_float *)(a4))->v) = 0.0f;
    (((struct o60_float *)(a4))->v) = 0.0f;
    (((struct o58_float *)(a4))->v) = 0.0f;
    t0 = *(signed char *)((a4 + 0x1));
    FUN_0c07e79c(a4, t0, 0x1, 0xE, (t0), 0x1, 0xE);
    t0 = *(int *)(((0x118 + a4) + 0x4));
    t1 = (((struct o118_int *)(a4))->v);
    (((struct oA0_float *)(t0))->v) = 1.0f;
    (((struct o9C_float *)(t0))->v) = 1.0f;
    (((struct oA0_float *)(t1))->v) = 1.0f;
    (((struct o9C_float *)(t1))->v) = 1.0f;
    t0 = *(int *)(((0x118 + a4) + 0x4));
    t1 = (((struct o118_int *)(a4))->v);
    (((struct o98_float *)(t0))->v) = 1.0f;
    (((struct o98_float *)(t1))->v) = 1.0f;
    (((struct o94_float *)(t0))->v) = 1.0f;
    (((struct o94_float *)(t1))->v) = 1.0f;
    FUN_0c07d030(a4, 0x0);
    *(unsigned short *)((a4 + 0x1C)) = 0x13;
    *(unsigned short *)((a4 + 0x1E)) = 0x25;
    if ((*(signed char *)((a4 + 0x3731))) == 0) {
        (((struct o20_ushort *)(a4))->v) = 0x4;
        t0 = FUN_0c07d774(a4);
        (((struct o3850_uint *)(a4))->v) = t0;
        t1 = t0;
    } else {
        (((struct o20_ushort *)(a4))->v) = 0x0;
        t1 = 0x20;
    }
    return t1;
}

int FUN_0c099e74(int a4, int a5, int a6)
{
    register int t0;
    register int t1;

    FUN_0c037bf6(a4, a5, a6);
    FUN_0c038362(a4);
    t0 = (((struct o20_short *)(a4))->v);
    (((struct o20_ushort *)(a4))->v) = (t0 - 1);
    if ((short)(t0 - 1) == 0) {
        FUN_0c05261c((*(int *)0xC241C20));
        FUN_0c07db58(a4);
        (((struct o20_ushort *)(a4))->v) = 0x18;
        FUN_0c12d268(a4, 0x1);
    }
    t0 = *(short *)((a4 + 0x1E));
    *(unsigned short *)((a4 + 0x1E)) = (t0 - 1);
    if ((short)(t0 - 1) == 0) {
        FUN_0c12d85c(a4, ((((struct o22_short *)(a4))->v)));
        (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) + 0x1);
        *(unsigned short *)((a4 + 0x1E)) = 0x2;
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    t1 = (short)(t0 - 1);
    if ((short)(t0 - 1) == 0) {
        t0 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t0, 0x1, 0x14, (t0), 0x1, 0x14);
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t1 = 0x15;
    }
    return t1;
}

int FUN_0c0996cc(int a4)
{
    register int t0;
    register int t1;

    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    (((struct o50_float *)(a4))->v) = 0.0f;
    (((struct o54_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    (((struct o5C_float *)(a4))->v) = 0.0f;
    (((struct o60_float *)(a4))->v) = 0.0f;
    (((struct o58_float *)(a4))->v) = 0.0f;
    t0 = *(signed char *)((a4 + 0x1));
    FUN_0c07e79c(a4, t0, 0x1, 0x15, (t0), 0x1, 0x15);
    t0 = *(int *)(((0x118 + a4) + 0x4));
    t1 = (((struct o118_int *)(a4))->v);
    (((struct oA0_float *)(t0))->v) = 1.0f;
    (((struct o9C_float *)(t0))->v) = 1.0f;
    (((struct oA0_float *)(t1))->v) = 1.0f;
    (((struct o9C_float *)(t1))->v) = 1.0f;
    t0 = *(int *)(((0x118 + a4) + 0x4));
    t1 = (((struct o118_int *)(a4))->v);
    (((struct o98_float *)(t0))->v) = 1.0f;
    (((struct o98_float *)(t1))->v) = 1.0f;
    (((struct o94_float *)(t0))->v) = 1.0f;
    (((struct o94_float *)(t1))->v) = 1.0f;
    *(unsigned short *)((a4 + 0x1C)) = 0x30;
    *(unsigned short *)((a4 + 0x1E)) = 0x3A;
    (((struct o20_ushort *)(a4))->v) = 0x41;
    (((struct o22_ushort *)(a4))->v) = 0x6F;
    (((struct o1B_uchar *)(a4))->v) = 0x10;
    return 0x1B;
}

int FUN_0c09a316(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    FUN_0c037bf6(a4, a5, a6);
    FUN_0c038362(a4);
    if (((((struct o20_short *)(a4))->v)) != 0) {
        t0 = *(int *)((a4 + 0x38));
        t1 = (((struct o3850_short *)(a4))->v);
        t2 = *(int *)((a4 + 0x38));
        t3 = (unsigned short)(t1 - t0);
        if ((0x8000 & (unsigned short)(t1 - t0)) != 0) {
            t3 = ((unsigned short)(t1 - t0) | 0xFFFF0000);
        }
        *(unsigned int *)((a4 + 0x38)) = (unsigned short)(t2 + ((int)((int)t3 / (int)((((struct o20_short *)(a4))->v)))));
        (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) - 1);
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    if ((short)(t0 - 1) == 0) {
        FUN_0c12c728(a4, 0x1);
        FUN_0c059e60(a4, 0x9);
    }
    t0 = *(short *)((a4 + 0x1E));
    *(unsigned short *)((a4 + 0x1E)) = (t0 - 1);
    t1 = (short)(t0 - 1);
    if ((short)(t0 - 1) == 0) {
        (((struct o50_float *)(a4))->v) = -12.0f;
        (((struct o5C_float *)(a4))->v) = -1.20000005f;
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t1 = 0x15;
    }
    return t1;
}

int FUN_0c099dec(int a4, int a5, int a6)
{
    register int t0;

    t0 = FUN_0c037bf6(a4, a5, a6);
    if ((unsigned char)t0 != 0) {
        t0 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t0, 0x1, 0x13, (t0), 0x1, 0x13);
        FUN_0c059e60(a4, 0xB);
        FUN_0c12d85c(a4, 0x7F);
        *(unsigned short *)((a4 + 0x1C)) = 0x5A;
        *(unsigned short *)((a4 + 0x1E)) = 0xA;
        (((struct o20_ushort *)(a4))->v) = 0x18;
        (((struct o22_ushort *)(a4))->v) = 0x0;
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        return 0x15;
    }
    FUN_0c038362(a4);
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    if ((int)(short)(t0 - 1) <= 0) {
        *(unsigned short *)((a4 + 0x1C)) = 0x14;
        return FUN_0c12d268(a4, 0x1);
    }
    return (short)(t0 - 1);
}

int FUN_0c09a18a(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    if (((((struct o20_short *)(a4))->v)) != 0) {
        t0 = *(int *)((a4 + 0x38));
        t1 = (((struct o3850_short *)(a4))->v);
        t2 = *(int *)((a4 + 0x38));
        t3 = (unsigned short)(t1 - t0);
        if ((0x8000 & (unsigned short)(t1 - t0)) != 0) {
            t3 = ((unsigned short)(t1 - t0) | 0xFFFF0000);
        }
        *(unsigned int *)((a4 + 0x38)) = (unsigned short)(t2 + ((int)((int)t3 / (int)((((struct o20_short *)(a4))->v)))));
        (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) - 1);
    }
    t0 = FUN_0c037bf6(a4, a5, a6);
    if ((unsigned char)t0 != 0) {
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        return 0x15;
    }
    FUN_0c038362(a4);
    *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
    t0 = *(short *)((a4 + 0x1E));
    *(unsigned short *)((a4 + 0x1E)) = (t0 - 1);
    if ((short)(t0 - 1) == 0) {
        FUN_0c12c728(a4, 0x0);
        return FUN_0c059e60(a4, 0x9);
    }
    return (short)(t0 - 1);
}
