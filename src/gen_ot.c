/* Straight-line functions with calls and guards (batch gen_ot): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o11C_int { char p[0x11C]; int v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o3715_uchar { char p[0x3715]; unsigned char v; };
struct o371D_uchar { char p[0x371D]; unsigned char v; };
struct o3749_uchar { char p[0x3749]; unsigned char v; };
struct o376C_int { char p[0x376C]; int v; };
struct o3790_float { char p[0x3790]; float v; };
struct o382C_ushort { char p[0x382C]; unsigned short v; };
struct o3840_short { char p[0x3840]; short v; };
struct o3840_ushort { char p[0x3840]; unsigned short v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
int FUN_0c037bf6(int, int, int);
int FUN_0c059df2(int, int);
int FUN_0c067734(int);
int FUN_0c07c500(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c081dfc(int);
int FUN_0c0847dc(int);
int FUN_0c084858(int);
int FUN_0c085cac(int, int, int);
int FUN_0c085d0c(int);
int FUN_0c084924(int a4, int a5);
int FUN_0c06ccf0(int a4, int a5, int a6);

int FUN_0c084924(int a4, int a5)
{
    int stk[1];
    register int t9;
    register float u20;
    register int t21;
    register int t22;
    int t1;
    int t8;

    *(unsigned char *)(((int)stk + 0)) = a5;
    if ((((((struct o160_float *)(a4))->v)) == 0.0f) && (t1 = *(signed char *)((a4 + 0x3715)), t1 == 41)) {
        return FUN_0c07c500(a4);
    }
    (((struct o3715_uchar *)(a4))->v) = 0x1B;
    (((struct o371D_uchar *)(a4))->v) = 0x4;
    FUN_0c067734(a4);
    if ((unsigned char)(*(signed char *)((a4 + 0x3721))) != 25) {
        FUN_0c081dfc(a4);
    }
    (((struct o5C_float *)(a4))->v) = 0.0f;
    (((struct o60_float *)(a4))->v) = 0.0f;
    (((struct o58_float *)(a4))->v) = 0.0f;
    (((struct o50_float *)(a4))->v) = 0.0f;
    (((struct o54_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    (((struct o3790_float *)(a4))->v) = 0.0f;
    (((struct o382C_ushort *)(a4))->v) = 0x0;
    (((struct o3749_uchar *)(a4))->v) = 0x1;
    if ((((((struct o160_float *)(a4))->v)) == 0.0f) && (t8 = (((struct o3840_short *)(a4))->v), t8 != 0x270F)) {
        t9 = (((struct o3840_short *)(a4))->v);
        (((struct o3840_ushort *)(a4))->v) = ((t9 - ((int)((int)(short)t9 % (int)0x3C))) + 0x1E);
    }
    if ((*(signed char *)(((int)stk + 0))) == 0) {
        FUN_0c084858(a4);
        *(unsigned short *)((a4 + 0x1C)) = (((((*(signed char *)((a4 + 0x1))) << 8) << 2) << 2) << 1);
        (((struct o15_uchar *)(a4))->v) = 0x0;
    } else {
        FUN_0c0847dc(a4);
        u20 = *(float *)0xC084B6C;
        t21 = (((struct o118_int *)(a4))->v);
        (((struct o98_float *)(t21))->v) = u20;
        (((struct o94_float *)(t21))->v) = u20;
        t22 = (((struct o11C_int *)(a4))->v);
        (((struct o98_float *)(t22))->v) = u20;
        (((struct o94_float *)(t22))->v) = u20;
        *(unsigned short *)((a4 + 0x1C)) = 0x0;
        (((struct o15_uchar *)(a4))->v) = 0x1;
    }
    return 0x15;
}

int FUN_0c06ccf0(int a4, int a5, int a6)
{
    int t0;
    register int t1;
    register int t2;

    t2 = *(signed char *)((a4 + 0x16));
    if (t2 != 0) {
        if (t2 != 1) {
            return t2;
        }
        t2 = FUN_0c037bf6(a4, a5, a6);
        if ((unsigned char)t2 != 0) {
            if ((*(short *)((a4 + 0x1C))) == (*(signed char *)0xC540990)) {
                (((struct o160_float *)(a4))->v) = (((((struct o160_float *)(a4))->v)) + 300.0f);
                if (((((struct o160_float *)(a4))->v)) > 1000.0f) {
                    (((struct o160_float *)(a4))->v) = 1000.0f;
                }
                return FUN_0c085d0c(a4);
            }
            return FUN_0c085cac(a4, 0x11, 0x4);
        }
        t2 = 0x8C;
        if (!(14.0f > ((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v)))) {
            if (((((struct o22_short *)(a4))->v)) == 0) {
                if ((((((struct o376C_int *)(a4))->v)) != 0) && (t0 = (((struct o376C_int *)(a4))->v), t1 = *(signed char *)((t0 + 0x41C)), (unsigned char)t1 == 0xC9)) {
                    *(unsigned short *)((a4 + 0x1C)) = (*(signed char *)((((((struct o376C_int *)(a4))->v)) + 0x2)));
                    FUN_0c081dfc(a4);
                }
                (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) + 0x1);
            }
            t2 = 0x22;
        }
        return t2;
    }
    t0 = FUN_0c037bf6(a4, a5, a6);
    t1 = (unsigned char)t0;
    if ((unsigned char)t0 != 0) {
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0x13, 0xFFFFFFFF, 0x3, 0x13);
        t0 = (((struct o118_int *)(a4))->v);
        (((struct o98_float *)(t0))->v) = 10.0f;
        (((struct o94_float *)(t0))->v) = 10.0f;
        t0 = (((struct o11C_int *)(a4))->v);
        (((struct o98_float *)(t0))->v) = 10.0f;
        (((struct o94_float *)(t0))->v) = 10.0f;
        FUN_0c059df2((*(signed char *)((a4 + 0x1))), 0x2C);
        *(unsigned short *)((a4 + 0x1C)) = 0x0;
        (((struct o22_ushort *)(a4))->v) = 0x0;
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        t1 = 0x16;
    }
    return t1;
}
