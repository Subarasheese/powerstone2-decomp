/* game/unsorted: functions 0C080364-0C080C6A, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o10_float { char p[0x10]; float v; };
struct o118_int { char p[0x118]; int v; };
struct o11C_int { char p[0x11C]; int v; };
struct o18_float { char p[0x18]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o3715_uchar { char p[0x3715]; unsigned char v; };
struct o3717_uchar { char p[0x3717]; unsigned char v; };
struct o3718_uchar { char p[0x3718]; unsigned char v; };
struct o372E_uchar { char p[0x372E]; unsigned char v; };
struct o3780_float { char p[0x3780]; float v; };
struct o3790_float { char p[0x3790]; float v; };
struct o37B0_float { char p[0x37B0]; float v; };
struct o3818_short { char p[0x3818]; short v; };
struct o40_float { char p[0x40]; float v; };
struct o42A_short { char p[0x42A]; short v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4_float { char p[0x4]; float v; };
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
struct oC_float { char p[0xC]; float v; };
int FUN_0c037bf6(int);
int FUN_0c059ff8(int, int);
int FUN_0c067734(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07e868(int, int);
int FUN_0c07ec9a(int);
int FUN_0c085cac(int, int, int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
float FUN_0c080364(int a4, int a5);
int FUN_0c080586(int a4, int a5, int a6, int a7);
int FUN_0c0805cc(int a4);
float FUN_0c08076a(int a4, float f4, float f5);
int FUN_0c080acc(int a4);

float FUN_0c080364(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;

    (((struct o60_float *)(a4))->v) = 0.0f;
    (((struct o58_float *)(a4))->v) = 0.0f;
    if ((*(signed char *)((a4 + 0x371D))) != 2) {
        if ((*(signed char *)((a4 + 0x372F))) != 3) {
            t0 = *(signed char *)((a4 + 0x2));
            t1 = *(signed char *)(((0x371C + a4) + 0x0));
            (((struct o4C_float *)(a4))->v) = ((math_sin_angle16(a5)) * ((((struct o4_float *)((((((((t0 << 1) + t0) << 2) << 2) << 2) + 0xC259E54) + (((((t1 << 1) + t1) << 2) << 2) << 1))))->v)));
            t0 = *(signed char *)((a4 + 0x2));
            t1 = *(signed char *)((a4 + 0x371C));
            t2 = 0x4;
            t3 = ((0xC259E54 + (((((t0 << 1) + t0) << 2) << 2) << 2)) + (((((t1 << 1) + t1) << 2) << 2) << 1));
            u0 = (math_cos_angle16(a5));
        } else {
            t0 = *(signed char *)((a4 + 0x2));
            t1 = *(signed char *)(((0x371C + a4) + 0x0));
            (((struct o4C_float *)(a4))->v) = ((math_sin_angle16(a5)) * ((((struct o8_float *)((((((((t0 << 1) + t0) << 2) << 2) << 2) + 0xC259E54) + (((((t1 << 1) + t1) << 2) << 2) << 1))))->v)));
            t0 = *(signed char *)((a4 + 0x2));
            t1 = *(signed char *)((a4 + 0x371C));
            t2 = 0x8;
            t3 = ((0xC259E54 + (((((t0 << 1) + t0) << 2) << 2) << 2)) + (((((t1 << 1) + t1) << 2) << 2) << 1));
            u0 = (math_cos_angle16(a5));
        }
        u1 = *(float *)((t3 + t2));
        (((struct o54_float *)(a4))->v) = (u0 * u1);
        u2 = (u0 * u1);
    } else {
        t0 = *(signed char *)((a4 + 0x2));
        t1 = *(signed char *)(((0x371C + a4) + 0x0));
        (((struct o4C_float *)(a4))->v) = ((math_sin_angle16(a5)) * ((((struct o4_float *)((((((((t0 << 1) + t0) << 2) << 2) << 2) + 0xC259E54) + (((((t1 << 1) + t1) << 2) << 2) << 1))))->v)));
        t0 = *(signed char *)((a4 + 0x2));
        t1 = *(signed char *)(((0x371C + a4) + 0x0));
        (((struct o54_float *)(a4))->v) = ((math_cos_angle16(a5)) * ((((struct o4_float *)((((((((t0 << 1) + t0) << 2) << 2) << 2) + 0xC259E54) + (((((t1 << 1) + t1) << 2) << 2) << 1))))->v)));
        u0 = *(float *)0xC0805C4;
        t0 = *(signed char *)((a4 + 0x2));
        t1 = *(signed char *)(((0x371C + a4) + 0x0));
        u1 = (((struct o37B0_float *)(a4))->v);
        u3 = (((struct o4C_float *)(a4))->v);
        u4 = ((math_sin_angle16(a5)) * ((((struct o4_float *)((((((((t0 << 1) + t0) << 2) << 2) << 2) + 0xC259E54) + (((((t1 << 1) + t1) << 2) << 2) << 1))))->v)));
        u5 = ((u4 * (u1 + -1.0f)) / u0);
        u1 = u3;
        u1 = u1 + u0 * u5;
        (((struct o4C_float *)(a4))->v) = u1;
        t0 = *(signed char *)((a4 + 0x2));
        t1 = *(signed char *)(((0x371C + a4) + 0x0));
        u1 = (((struct o54_float *)(a4))->v);
        u3 = (((struct o37B0_float *)(a4))->v);
        u4 = ((math_cos_angle16(a5)) * ((((struct o4_float *)(((0xC259E54 + (((((t0 << 1) + t0) << 2) << 2) << 2)) + (((((t1 << 1) + t1) << 2) << 2) << 1))))->v)));
        u5 = ((u4 * (u3 + -1.0f)) / u0);
        u3 = u1;
        u3 = u3 + u0 * u5;
        (((struct o54_float *)(a4))->v) = u3;
        u2 = u0;
    }
    return u2;
}

int FUN_0c080586(int a4, int a5, int a6, int a7)
{
    *(volatile signed char *)((a4 + 0x371D));
    (((struct o3717_uchar *)(a4))->v) = 0x1;
    (((struct o3718_uchar *)(a4))->v) = 0x0;
    FUN_0c085cac(a4, 0x1, 0x0, a7);
    return 0x1;
}

int FUN_0c0805cc(int a4)
{
    int t0;
    register int t1;

    (((struct o3715_uchar *)(a4))->v) = 0x0;
    (((struct o372E_uchar *)(a4))->v) = 0x0;
    (((struct o5C_float *)(a4))->v) = 0.0f;
    (((struct o60_float *)(a4))->v) = 0.0f;
    (((struct o58_float *)(a4))->v) = 0.0f;
    (((struct o50_float *)(a4))->v) = 0.0f;
    (((struct o54_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    FUN_0c067734(a4);
    t1 = *(signed char *)((a4 + 0x371D));
    if (t1 != 2) {
        if (t1 != 3) {
            if (t1 == 5) {
                return (FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0xB9, 0xFFFFFFFF, 0x3, 0xB9));
            }
            if (t1 == 6) {
                return (FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0xD6, 0xFFFFFFFF, 0x3, 0xD6));
            }
            return FUN_0c07e868(a4, 0x0);
        }
        return (FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0x9B, 0xFFFFFFFF, 0x3, 0x9B));
    }
    FUN_0c07ec9a(a4);
    if (((*(signed char *)((a4 + 0x3753))) == -1) && (t0 = (((struct o3818_short *)(a4))->v), (unsigned short)t0 == 2)) {
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x0, 0x3, 0xFFFFFFFF, 0x0, 0x3);
        t0 = (((struct o118_int *)(a4))->v);
        (((struct o98_float *)(t0))->v) = 10.0f;
        (((struct o94_float *)(t0))->v) = 10.0f;
    } else {
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x0, 0x3, 0xFFFFFFFF, 0x0, 0x3);
        t0 = *(signed char *)((a4 + 0x3716));
        if ((t0 != 0) && (t0 != 6)) {
            t0 = (((struct o118_int *)(a4))->v);
            (((struct o98_float *)(t0))->v) = 10.0f;
            (((struct o94_float *)(t0))->v) = 10.0f;
        } else {
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
        }
    }
    t0 = (((struct o11C_int *)(a4))->v);
    (((struct o98_float *)(t0))->v) = 10.0f;
    (((struct o94_float *)(t0))->v) = 10.0f;
    return FUN_0c037bf6(a4);
}

float FUN_0c08076a(int a4, float f4, float f5)
{
    int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;
    register float u2;

    t1 = *(signed char *)((a4 + 0x371D));
    switch (t1) {
    case 3:
        (((struct o3790_float *)(a4))->v) = ((((struct o0_float *)0xC25AA54)->v));
        break;
    case 5:
        (((struct o3790_float *)(a4))->v) = ((((struct o10_float *)0xC25AA54)->v));
        break;
    case 6:
        (((struct o3790_float *)(a4))->v) = ((((struct o20_float *)0xC25AA54)->v));
        break;
    default:
        t1 = *(signed char *)((a4 + 0x2));
        t2 = *(signed char *)(((0x371C + a4) + 0x0));
        (((struct o3790_float *)(a4))->v) = ((((struct o40_float *)(((((((t2 << 1) + t2) << 2) << 2) << 1) + (0xC259E54 + (((((t1 << 1) + t1) << 2) << 2) << 2)))))->v));
        if (!(((((struct o0_float *)0xC0808FC)->v)) > ((((struct o3780_float *)(a4))->v))) && (t0 = (((struct o42A_short *)(a4))->v), t0 != 0)) {
            u0 = (((struct o3790_float *)(a4))->v);
            u1 = (((float)(unsigned short)((((struct o42A_short *)(a4))->v)) / ((((struct o4_float *)0xC0808FC)->v))) * u0);
            u2 = (u1 * ((((struct o8_float *)0xC0808FC)->v)));
            u2 = u2 + ((((struct oC_float *)0xC0808FC)->v)) * u0;
            (((struct o3790_float *)(a4))->v) = u2;
        }
        break;
    }
    if ((unsigned char)(*(signed char *)((a4 + 0x38AC))) == 62) {
        (((struct o3790_float *)(a4))->v) = (((((struct o3790_float *)(a4))->v)) * ((((struct o10_float *)0xC0808FC)->v)));
    }
    if ((*(signed char *)0xC5429B4) == 4) {
        (((struct o3790_float *)(a4))->v) = (((((struct o3790_float *)(a4))->v)) * ((((struct o18_float *)0xC0808FC)->v)));
    }
    (((struct o4C_float *)(a4))->v) = ((math_sin_angle16((*(int *)((a4 + 0x38))))) * ((((struct o3790_float *)(a4))->v)));
    u0 = math_cos_angle16((*(int *)((a4 + 0x38))));
    u1 = (((struct o3790_float *)(a4))->v);
    (((struct o54_float *)(a4))->v) = (u0 * u1);
    (((struct o60_float *)(a4))->v) = 0.0f;
    (((struct o58_float *)(a4))->v) = 0.0f;
    (((struct o5C_float *)(a4))->v) = 0.0f;
    (((struct o50_float *)(a4))->v) = 0.0f;
    return (u0 * u1);
}

int FUN_0c080acc(int a4)
{
    register int t0;
    int t1;

    (((struct o3715_uchar *)(a4))->v) = 0x2;
    (((struct o372E_uchar *)(a4))->v) = 0x0;
    t0 = *(signed char *)((a4 + 0x371D));
    if (t0 != 3) {
        if (t0 != 5) {
            if (t0 != 6) {
                if ((*(signed char *)((0xC2738BD + ((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x3721))) * (unsigned short)0x34)))) == 12) {
                    FUN_0c07e868(a4, 0x0);
                    t0 = (((struct o118_int *)(a4))->v);
                    (((struct o98_float *)(t0))->v) = 14.0f;
                    (((struct o94_float *)(t0))->v) = 14.0f;
                    t0 = (((struct o11C_int *)(a4))->v);
                    (((struct o98_float *)(t0))->v) = 14.0f;
                    (((struct o94_float *)(t0))->v) = 14.0f;
                    *(unsigned short *)((a4 + 0x1C)) = 0xE;
                    *(unsigned short *)((a4 + 0x1E)) = 0x1D;
                    t0 = 0x1D;
                } else {
                    FUN_0c07e868(a4, 0x3);
                    t1 = *(signed char *)((a4 + 0x2));
                    if ((t1 != 2) && ((t1 != 6) && (t1 != 7))) {
                    } else {
                        FUN_0c059ff8((*(signed char *)((a4 + 0x1))), (*(signed char *)((a4 + 0x135))));
                    }
                    *(unsigned short *)((a4 + 0x1C)) = 0xE;
                    (((struct o58_float *)(a4))->v) = (-(((((struct o4C_float *)(a4))->v)) / (float)(*(short *)((a4 + 0x1C)))));
                    (((struct o60_float *)(a4))->v) = (-(((((struct o54_float *)(a4))->v)) / (float)(*(short *)((a4 + 0x1C)))));
                    (((struct o5C_float *)(a4))->v) = 0.0f;
                    (((struct o50_float *)(a4))->v) = 0.0f;
                    t0 = 0x50;
                }
                t1 = t0;
            } else {
                FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0xDB, 0xFFFFFFFF, 0x3, 0xDB);
                *(unsigned short *)((a4 + 0x1C)) = 0xE;
                (((struct o58_float *)(a4))->v) = (-(((((struct o4C_float *)(a4))->v)) / (float)(*(short *)((a4 + 0x1C)))));
                (((struct o60_float *)(a4))->v) = (-(((((struct o54_float *)(a4))->v)) / (float)(*(short *)((a4 + 0x1C)))));
                (((struct o5C_float *)(a4))->v) = 0.0f;
                (((struct o50_float *)(a4))->v) = 0.0f;
                t1 = 0x50;
            }
            t0 = t1;
        } else {
            FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0xC0, 0xFFFFFFFF, 0x3, 0xC0);
            *(unsigned short *)((a4 + 0x1C)) = 0xE;
            (((struct o58_float *)(a4))->v) = (-(((((struct o4C_float *)(a4))->v)) / (float)(*(short *)((a4 + 0x1C)))));
            (((struct o60_float *)(a4))->v) = (-(((((struct o54_float *)(a4))->v)) / (float)(*(short *)((a4 + 0x1C)))));
            (((struct o5C_float *)(a4))->v) = 0.0f;
            (((struct o50_float *)(a4))->v) = 0.0f;
            t0 = 0x50;
        }
        t1 = t0;
    } else {
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0xA1, 0xFFFFFFFF, 0x3, 0xA1);
        *(unsigned short *)((a4 + 0x1C)) = 0xE;
        (((struct o58_float *)(a4))->v) = (-(((((struct o4C_float *)(a4))->v)) / (float)(*(short *)((a4 + 0x1C)))));
        (((struct o60_float *)(a4))->v) = (-(((((struct o54_float *)(a4))->v)) / (float)(*(short *)((a4 + 0x1C)))));
        (((struct o5C_float *)(a4))->v) = 0.0f;
        (((struct o50_float *)(a4))->v) = 0.0f;
        t1 = 0x50;
    }
    return t1;
}
