/* Straight-line functions with calls and guards (batch gen_ad): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o126_uchar { char p[0x126]; unsigned char v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c037bf6(int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c085d0c(int);
int FUN_0c11fcc6(int);
int FUN_0c11fe4a(int, int, int);
int FUN_0c1502e8(int, int, int, int, int, int);
int FUN_0c187798(int, int, int);
int FUN_0c11ff8a(int a4, int a5, int a6, int a7);
int FUN_0c150010(int a4, int a5, int a6, float f4, float f5, float f6, float f7);
int FUN_0c0bb09c(int a4);
int FUN_0c0d7e24(int a4, int a5, int a6, int a7);

int FUN_0c11ff8a(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t2;

    t2 = *(signed char *)((a4 + 0x14));
    if (t2 != 0) {
        if (t2 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        if (((*(signed char *)((a4 + 0x2))) & 4) != 0) {
            return FUN_0c11fe4a(a4, a5, a6);
        }
        FUN_0c11fcc6(a4);
        if (((int)(*(signed char *)0xC4750AD) <= (int)0x1) && (t0 = *(signed char *)0xC4750AE, (int)t0 <= (int)0x2)) {
            t2 = t0;
        } else {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t2 = 0x14;
        }
        return t2;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    if (((*(signed char *)((a4 + 0x2))) & 4) != 0) {
        return FUN_0c11fe4a(a4, a5, a6);
    }
    FUN_0c11fcc6(a4);
    if (((int)(*(signed char *)0xC4750AD) <= (int)0x1) && (t0 = *(signed char *)0xC4750AE, (int)t0 <= (int)0x2)) {
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t0 = 0x14;
    }
    return t0;
}

int FUN_0c150010(int a4, int a5, int a6, float f4, float f5, float f6, float f7)
{
    int stk[9];
    register int t1;
    register int t3;
    register int t12;

    *(float *)(((int)stk + 20)) = f4;
    *(float *)(((int)stk + 8)) = f5;
    *(float *)(((int)stk + 16)) = f6;
    *(float *)(((int)stk + 12)) = f7;
    FUN_0c187798(a4, a5, a6);
    t1 = *(int *)0xC542260;
    *(int *)((int)stk + 4) = (((((t1 & 0x3) << 1) + (t1 & 0x3)) << 2) + 0xC2030D8);
    *(int *)((int)stk + 0) = 0x0;
    t3 = FUN_0c1502e8(0x0, 0x1, 0x1, (((int)stk + 0) + 0x18), 0x0, (((((t1 & 0x3) << 1) + (t1 & 0x3)) << 2) + 0xC2030D8));
    t12 = t3;
    if (t3 != 0) {
        (((struct o14_float *)(((((struct oC4_int *)(t3))->v))))->v) = 1.0f;
        (((struct o18_float *)(((((struct oC4_int *)(t3))->v))))->v) = (*(float *)(((int)stk + 20)));
        (((struct o1C_float *)(((((struct oC4_int *)(t3))->v))))->v) = (*(float *)(((int)stk + 8)));
        (((struct o20_float *)(((((struct oC4_int *)(t3))->v))))->v) = (*(float *)(((int)stk + 16)));
        (((struct o4_float *)((0x41C + t3)))->v) = (*(float *)(((int)stk + 12)));
        *(unsigned short *)((t3 + 0x1E)) = 0x0;
        t12 = 0x0;
    }
    return t12;
}

int FUN_0c0bb09c(int a4)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        t0 = FUN_0c037bf6(a4);
        if ((unsigned char)t0 != 0) {
            return FUN_0c085d0c(a4);
        }
        return (unsigned char)t0;
    }
    t0 = *(signed char *)((a4 + 0x1));
    FUN_0c07e79c(a4, t0, 0x6, 0x0, (t0), 0x6, 0x0);
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
    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    return 0x15;
}

int FUN_0c0d7e24(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    t1 = *(signed char *)((a4 + 0x14));
    if (t1 != 0) {
        if (t1 != 1) {
            t2 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t2 - 1);
            if ((short)(t2 - 1) == 0) {
                return FUN_0c03f346(a4, a5, a6, a7);
            }
            return (short)(t2 - 1);
        }
        t2 = t1;
        if ((int)(*(signed char *)0xC54223C) > 0) {
            *(unsigned short *)((a4 + 0x1C)) = 0x384;
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t2 = 0x14;
        }
        return t2;
    }
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    *(volatile signed char *)((a4 + 0x2));
    FUN_0c187798(a4, a5, a6);
    *(unsigned int *)((t0 + 0x38)) = (int)(((float)(*(int *)((0xC287684 + ((*(signed char *)((t0 + 0x2))) << 2)))) * 65536.0f) / 360.0f);
    (((struct o126_uchar *)(t0))->v) = 0x2;
    (((struct o14_uchar *)(t0))->v) = ((*(signed char *)((t0 + 0x14))) + 0x1);
    if ((int)(*(signed char *)0xC54223C) > 0) {
        *(unsigned short *)((t0 + 0x1C)) = 0x384;
        (((struct o14_uchar *)(t0))->v) = ((*(signed char *)((t0 + 0x14))) + 0x1);
    }
    return 0x14;
}
