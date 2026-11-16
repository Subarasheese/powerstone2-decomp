/* Straight-line functions with calls and guards (batch gen_pw): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o118_int { char p[0x118]; int v; };
struct o12E_short { char p[0x12E]; short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o374B_uchar { char p[0x374B]; unsigned char v; };
struct o4_int { char p[0x4]; int v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o78_int { char p[0x78]; int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c037bf6(int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c07043c(int, float, float, float, float);
int FUN_0c07ce58(int, int);
int FUN_0c07d774(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c085d0c(int);
int FUN_0c0d04c4(int, int);
int FUN_0c115120(int);
int FUN_0c11e1e0(int, int, int, int);
extern int FUN_0c187798();
int FUN_0c0af884(int a4, int a5, int a6);
int FUN_0c0e00a4(int a4, int a5, int a6, int a7);
int FUN_0c13d66e(int a4, int a5, int a6, int a7);
int FUN_0c08dfec(int a4, int a5, int a6);
int FUN_0c095154(int a4, int a5, int a6);
int FUN_0c09818c(int a4, int a5, int a6);
int FUN_0c11550e(int a4, int a5, int a6);
int FUN_0c12e04c(int a4, int a5, int a6, int a7);
int FUN_0c139446(int a4, int a5, int a6, int a7);

int FUN_0c0af884(int a4, int a5, int a6)
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
        FUN_0c07043c(a4, 35.0f, -3.5f, 500.0f, 100.0f);
        t0 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t0, 0x2, 0xB, (t0), 0x2, 0xB);
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
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t1 = 0x15;
    }
    return t1;
}

int FUN_0c0e00a4(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    if ((*(signed char *)0xC54223C) != 1) {
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        t1 = t0;
        if (t0 != 1) {
        } else {
            *(volatile int *)0xC540D94;
            t0 = ((int (*)(int, int, int))(FUN_0c187798))(a4, a5, a6);
            (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + 2300.0f);
            t1 = 0x28;
        }
        t0 = t1;
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o15_uchar *)(a4))->v) = 0x0;
        (((struct oA8_uchar *)(a4))->v) = 0x0;
        (((struct o12E_ushort *)(a4))->v) = (((((struct o12E_short *)(a4))->v)) & 0xFFFFFFBF);
        FUN_0c0d04c4((0xAC + a4), (a4 + 0x34));
        t1 = 0x0;
        t2 = 0x0;
        for (;;) {
            if ((int)t2 >= (int)((((struct oC0_int *)(a4))->v))) {
                break;
            }
            t1 = t2;
            t1 = (t1 << 2);
            t1 = (t1 + (0xC4 + a4));
            t1 = (*(int *)((t1 + 0x0)));
            FUN_0c0d04c4((t1 + 0x6), (t1 + 0x78));
            t2 = (t2 + 0x1);
        }
        *(volatile int *)0xC540D94;
        t1 = ((int (*)(void))(FUN_0c187798))();
        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + 2300.0f);
        t0 = 0x28;
    }
    return t0;
}

int FUN_0c13d66e(int a4, int a5, int a6, int a7)
{

    register int R2;
    register int R3;
    register float F2;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register float w0_0;
    register float w0_1;
    v0_0 = a4;
    v0_2 = *(signed char *)((v0_0 + 0x14));
    v0_1 = (v0_2);
    if ((v0_2 == 0)) goto L_C13D67E;
    if ((v0_1 == 1)) goto L_C13D690;
    return FUN_0c03f346(v0_0, a5, a6, a7);
    L_C13D690:;
    v0_2 = *(signed char *)((v0_0 + 0x15));
    v0_1 = (v0_2);
    w0_0 = (0.100000001f);
    if ((v0_2 == 0)) goto L_C13D6A4;
    if (!((v0_1 == 1))) goto L_C13D6FA;
    v0_1 = (0xBC);
    if ((!(((((struct oBC_float *)(v0_0))->v)) > 0.0f))) goto L_C13D6FA;
    *(float *)((v0_0 + v0_1)) = ((*(float *)((v0_0 + v0_1))) - w0_0);
    w0_0 = *(float *)((v0_0 + v0_1));
    *(float *)((v0_0 + (v0_1 - 4))) = w0_0;
    *(float *)((v0_0 + ((v0_1 - 4) - 4))) = w0_0;
    w0_0 = (w0_0);
    goto L_C13D6FA;
    L_C13D6FA:;
    v0_2 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_2 - 1);
    v0_1 = ((short)(v0_2 - 1));
    if (((int)(short)(v0_2 - 1) > 0)) goto L_C13D714;
    (((struct o14_uchar *)(v0_0))->v) = 0x63;
    v0_1 = (0x14);
    L_C13D714:;
    return v0_1;
    L_C13D6A4:;
    w0_1 = (((struct o48_float *)(v0_0))->v);
    (((struct o48_float *)(v0_0))->v) = (w0_1 + w0_0);
    (((struct o44_float *)(v0_0))->v) = (w0_1 + w0_0);
    (((struct o40_float *)(v0_0))->v) = (w0_1 + w0_0);
    w0_0 = (1.0f);
    if ((1.0f > ((((struct o48_float *)(v0_0))->v)))) goto L_C13D6FA;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    (((struct oAC_ushort *)(v0_0))->v) = (((((struct oAC_short *)(v0_0))->v)) | 0x200);
    (((struct oBC_float *)(v0_0))->v) = w0_0;
    (((struct oB8_float *)(v0_0))->v) = w0_0;
    (((struct oB4_float *)(v0_0))->v) = w0_0;
    goto L_C13D6FA;
    L_C13D67E:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    (((struct o15_uchar *)(v0_0))->v) = 0x0;
    *(unsigned short *)((v0_0 + 0x1C)) = 0x3C;
    goto L_C13D690;
}

int FUN_0c08dfec(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        t0 = FUN_0c037bf6(a4, a5, a6);
        if ((unsigned char)t0 != 0) {
            return FUN_0c085d0c(a4);
        }
        return (unsigned char)t0;
    }
    if ((*(signed char *)((a4 + 0x17))) != 0) {
        t0 = *(signed char *)((a4 + 0x1));
        t1 = 0x0;
        t2 = (t0);
        t3 = t0;
        t0 = 0x0;
    } else {
        t3 = *(signed char *)((a4 + 0x1));
        t1 = 0x1;
        t2 = (t3);
        t0 = 0x1;
    }
    FUN_0c07e79c(a4, t3, 0x6, t0, t2, 0x6, t1);
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

int FUN_0c095154(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        t0 = FUN_0c037bf6(a4, a5, a6);
        if ((unsigned char)t0 != 0) {
            return FUN_0c085d0c(a4);
        }
        return (unsigned char)t0;
    }
    if ((*(signed char *)((a4 + 0x17))) != 0) {
        t0 = *(signed char *)((a4 + 0x1));
        t1 = 0x0;
        t2 = (t0);
        t3 = t0;
        t0 = 0x0;
    } else {
        t3 = *(signed char *)((a4 + 0x1));
        t1 = 0x1;
        t2 = (t3);
        t0 = 0x1;
    }
    FUN_0c07e79c(a4, t3, 0x6, t0, t2, 0x6, t1);
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

int FUN_0c09818c(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        t0 = FUN_0c037bf6(a4, a5, a6);
        if ((unsigned char)t0 != 0) {
            return FUN_0c085d0c(a4);
        }
        return (unsigned char)t0;
    }
    if ((*(signed char *)((a4 + 0x17))) != 0) {
        t0 = *(signed char *)((a4 + 0x1));
        t1 = 0x0;
        t2 = (t0);
        t3 = t0;
        t0 = 0x0;
    } else {
        t3 = *(signed char *)((a4 + 0x1));
        t1 = 0x1;
        t2 = (t3);
        t0 = 0x1;
    }
    FUN_0c07e79c(a4, t3, 0x6, t0, t2, 0x6, t1);
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

int FUN_0c11550e(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)0xC5324AC;
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        t0 = FUN_0c037bf6(0xC532498, a5, a6);
        if ((unsigned char)t0 != 0) {
            return FUN_0c115120(0x1);
        }
        return (unsigned char)t0;
    }
    FUN_0c037bf6(0xC532498, a5, a6);
    t0 = 0x8C;
    if ((int)(int)((((struct o8C_float *)(((((struct o0_int *)0xC5325B0)->v))))->v)) > (int)(*(int *)0xC291908)) {
        *(unsigned char *)0xC5324AC = ((*(signed char *)0xC5324AC) + 0x1);
        FUN_0c11e1e0(0xC532498, (*(signed char *)0xC532499), 0x6, 0x39);
        t1 = (((struct o4_int *)0xC5325B0)->v);
        t2 = (((struct o0_int *)0xC5325B0)->v);
        (((struct oA0_float *)(t1))->v) = 1.0f;
        (((struct o9C_float *)(t1))->v) = 1.0f;
        (((struct oA0_float *)(t2))->v) = 1.0f;
        (((struct o9C_float *)(t2))->v) = 1.0f;
        t1 = (((struct o4_int *)0xC5325B0)->v);
        t2 = (((struct o0_int *)0xC5325B0)->v);
        (((struct o98_float *)(t1))->v) = 1.0f;
        (((struct o98_float *)(t2))->v) = 1.0f;
        (((struct o94_float *)(t1))->v) = 1.0f;
        (((struct o94_float *)(t2))->v) = 1.0f;
        t0 = 0x94;
    }
    return t0;
}

int FUN_0c12e04c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = (((struct oC4_int *)(a4))->v);
    if ((*(signed char *)((0x3715 + (*(int *)((a4 + 0x10)))))) != 26) {
        (((struct o14_uchar *)(a4))->v) = 0xFFFFFFFF;
    }
    if ((*(signed char *)((a4 + 0x14))) == 0) {
        t1 = *(short *)((a4 + 0x1E));
        (((struct o18_float *)(t0))->v) = ((float)t1 / 5.0f);
        if (!(1.0f > ((float)t1 / 5.0f))) {
            (((struct o18_float *)(t0))->v) = 1.0f;
        }
        u0 = (((struct o18_float *)(t0))->v);
        (((struct o20_float *)(t0))->v) = u0;
        (((struct o1C_float *)(t0))->v) = u0;
        *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
        (((struct o78_uint *)(t0))->v) = (((((struct o78_int *)(t0))->v)) + 0x1000);
        (((struct o7C_uint *)(t0))->v) = (((((struct o7C_int *)(t0))->v)) + 0x1000);
        (((struct o80_uint *)(t0))->v) = (((((struct o80_int *)(t0))->v)) + 0x1000);
        if (((((struct o84_float *)(t0))->v)) > 0.0f) {
            (((struct o84_float *)(t0))->v) = (((((struct o84_float *)(t0))->v)) - 0.0333333351f);
            (((struct o88_float *)(t0))->v) = (((((struct o88_float *)(t0))->v)) - 0.0333333351f);
            (((struct o8C_float *)(t0))->v) = (((((struct o8C_float *)(t0))->v)) - 0.0333333351f);
            t1 = 0x8C;
        } else {
            (((struct o8C_float *)(t0))->v) = 0.0f;
            (((struct o88_float *)(t0))->v) = 0.0f;
            (((struct o84_float *)(t0))->v) = 0.0f;
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t1 = 0x14;
        }
        return t1;
    }
    return FUN_0c03f346(a4, t0, a6, a7);
}

int FUN_0c139446(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
    *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
    if ((int)(*(short *)((a4 + 0x1E))) > (int)0x2) {
        *(unsigned short *)((a4 + 0x1E)) = 0x0;
    }
    FUN_0c03744a(((((struct oC4_int *)(a4))->v)), (*(short *)((a4 + 0x1E))), 0xC, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct oAC_ushort *)(a4))->v) = 0xF;
    *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
    *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0xF;
    (((struct o6C_float *)(((((struct oC4_int *)(a4))->v))))->v) = 0.0f;
    (((struct o70_float *)(((((struct oC4_int *)(a4))->v))))->v) = 0.0f;
    (((struct o74_float *)(((((struct oC4_int *)(a4))->v))))->v) = (*(float *)0xC139540);
    t0 = *(short *)((a4 + 0x1C));
    t1 = t0;
    if ((int)t0 > (int)0xA) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t1 = 0x14;
    }
    return t1;
}
