/* Straight-line functions with calls and guards (batch gen_no): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC_float { char p[0xC]; float v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c037498(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c058a6e(int, int, int, int, int, int);
int FUN_0c05a080(int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c07e2f4(int, int);
int FUN_0c07e3ae(int, int);
int FUN_0c187798(void);
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c1670c4(int a4, int a5, int a6);
int FUN_0c16bd38(int a4, int a5, int a6, int a7);
int FUN_0c11c6dc(int a4, int a5, int a6, int a7);
int FUN_0c1332b4(int a4);

int FUN_0c1670c4(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    t0 = (~((int)0x1 << (int)a4));
    if ((int)a4 < 0) {
        t0 = 0xF;
    }
    t1 = FUN_0c03f444(0x1, 0x0, 0x1);
    t2 = 0x0;
    if (t1 != 0) {
        FUN_0c07e3ae(t1, 0x34);
        FUN_0c064d24(t1, 0x3, 0x9, 0x0, 0x100, (t0), (t0), 0xFFFFFFF0);
        FUN_0c187798();
        FUN_0c187798();
        u0 = (((struct o0_float *)0xC1671D0)->v);
        (((struct o4C_float *)(t1))->v) = (u0 * (math_sin_angle16((*(int *)((a6 + 0x4))))));
        (((struct o54_float *)(t1))->v) = (u0 * (math_cos_angle16((*(int *)((a6 + 0x4))))));
        (((struct o50_float *)(t1))->v) = 0.0f;
        u0 = (((struct oC_float *)0xC1671D0)->v);
        (((struct o58_float *)(t1))->v) = (u0 * (math_sin_angle16((*(int *)((a6 + 0x4))))));
        (((struct o5C_float *)(t1))->v) = 0.0f;
        (((struct o60_float *)(t1))->v) = (u0 * (math_cos_angle16((*(int *)((a6 + 0x4))))));
        FUN_0c187798();
        t2 = t1;
    }
    return t2;
}

int FUN_0c16bd38(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    t0 = (~((int)0x1 << (int)a4));
    if ((int)a4 < 0) {
        t0 = 0xF;
    }
    if (a7 != 0) {
        t1 = FUN_0c03f444(0x1, 0x0, 0x1);
        t2 = 0x0;
        if (t1 != 0) {
            FUN_0c07e3ae(t1, 0x10);
            FUN_0c064d24(t1, 0x3, 0x4F, 0x0, 0x100, (t0), 0x0, 0xFFFFFEF0);
            FUN_0c187798();
            FUN_0c187798();
            u0 = *(float *)0xC16BE3C;
            (((struct o4C_float *)(t1))->v) = (u0 * (math_sin_angle16((*(int *)((a6 + 0x4))))));
            (((struct o54_float *)(t1))->v) = (u0 * (math_cos_angle16((*(int *)((a6 + 0x4))))));
            (((struct o50_float *)(t1))->v) = 0.0f;
            (((struct o5C_float *)(t1))->v) = 0.0f;
            FUN_0c187798();
            t2 = t1;
        }
        t0 = t2;
    } else {
        t1 = FUN_0c03f444(0x5, 0x0, 0x2);
        t2 = 0x0;
        if (t1 != 0) {
            FUN_0c187798();
            FUN_0c187798();
            u0 = *(float *)0xC16BE3C;
            (((struct o4C_float *)(t1))->v) = (u0 * (math_sin_angle16((*(int *)((a6 + 0x4))))));
            (((struct o54_float *)(t1))->v) = (u0 * (math_cos_angle16((*(int *)((a6 + 0x4))))));
            (((struct o50_float *)(t1))->v) = 0.0f;
            (((struct o5C_float *)(t1))->v) = 0.0f;
            FUN_0c187798();
            t2 = t1;
        }
        t0 = t2;
    }
    return t0;
}

int FUN_0c11c6dc(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 99) {
                return t0;
            }
            return FUN_0c03f346(a4, a5, a6, a7);
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x4, 0x16, (*(int *)0xC4B410C));
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0x21F;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        FUN_0c187798();
        FUN_0c05a080(0x1B, 0x0);
    }
    t0 = *(short *)((a4 + 0x1C));
    if (((int)t0 >= 0) && ((int)t0 <= (int)0x3B)) {
        FUN_0c058a6e((0xB0 + a4), 0xC2A0CA0, 0xC2A0C90, (*(short *)((a4 + 0x1C))), 0x3C, 0x0);
    }
    t0 = *(short *)((a4 + 0x1C));
    if (((int)t0 >= (int)0x3D) && ((int)t0 <= (int)0x78)) {
        FUN_0c058a6e((0xB0 + a4), 0xC2A0C90, 0xC2A0CA0, (*(short *)((a4 + 0x1C))), 0x78, 0x3C);
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
    t1 = (short)(t0 + 0x1);
    if ((int)(short)(t0 + 0x1) > (int)0x78) {
        (((struct o14_uchar *)(a4))->v) = 0x63;
        t1 = 0x14;
    }
    return t1;
}

int FUN_0c1332b4(int a4)
{
    register int t0;
    register float u4;

    t0 = FUN_0c03f444(0x1, 0x0, 0x1);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned int *)((t0 + 0x4)) = 0xC1330CC;
        FUN_0c187798();
        FUN_0c187798();
        u4 = *(float *)0xC133410;
        (((struct o48_float *)(t0))->v) = u4;
        (((struct o44_float *)(t0))->v) = u4;
        (((struct o40_float *)(t0))->v) = u4;
        *(unsigned int *)((t0 + 0x10)) = a4;
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0x1F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        FUN_0c037498(((((struct oC4_int *)(t0))->v)), 0x0, 0x1, (*(int *)((((*(signed char *)((t0 + 0x1))) << 2) + 0xC4B40FC))));
        *(unsigned char *)((((((struct oC4_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(t0))->v)) + 0x6)) = 0x3F;
        *(volatile int *)((t0 + 0xC4));
        FUN_0c187798();
        FUN_0c064d24(t0, 0x1, 0x33, 0x0, 0x100, (~((int)0x1 << (int)(*(signed char *)((t0 + 0x1))))), 0x0, 0xF0);
        return FUN_0c07e2f4(t0, 0x61);
    }
    return t0;
}
