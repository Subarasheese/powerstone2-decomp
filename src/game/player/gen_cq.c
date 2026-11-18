/* Straight-line functions with calls and guards (batch gen_cq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o376C_int { char p[0x376C]; int v; };
struct o50_float { char p[0x50]; float v; };
struct o8C_float { char p[0x8C]; float v; };
int FUN_0c037bf6(int, int, int);
int FUN_0c059df2(int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c081dfc(int);
int FUN_0c085d0c(int);
int FUN_0c085f66(int);
int FUN_0c0c2380(int, int);
int FUN_0c0c2d56(int, int, int);
int FUN_0c0c3010(int, int, int);
int FUN_0c16f0c6(int);
int FUN_0c08bec2(int a4, int a5, int a6, int a7);
int FUN_0c08a5d0(int a4, int a5, int a6);
int FUN_0c08b400(int a4, int a5, int a6);
int FUN_0c08a3b0(int a4, int a5, int a6);

int FUN_0c08bec2(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x17));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            t0 = FUN_0c037bf6(a4, a5, a6);
            if ((unsigned char)t0 != 0) {
                t1 = FUN_0c085f66(a4);
                if (t1 == 0) {
                    FUN_0c081dfc(a4);
                } else {
                    FUN_0c0c2d56(((((struct o376C_int *)(a4))->v)), 0x4, (*(signed char *)((a4 + 0x1))));
                }
                return FUN_0c085d0c(a4);
            }
            return (unsigned char)t0;
        }
        if ((*(short *)((a4 + 0x1C))) == 10) {
            FUN_0c16f0c6(a4);
        }
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
        t1 = (short)(t0 + 0x1);
        if ((int)(short)(t0 + 0x1) >= (int)0x78) {
            FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0xE4, 0xFFFFFFFF, 0x3, 0xE4);
            (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
            t1 = 0x17;
        }
        return t1;
    }
    t0 = FUN_0c037bf6(a4, a5, a6);
    t1 = (unsigned char)t0;
    if ((unsigned char)t0 != 0) {
        FUN_0c0c3010(((((struct o376C_int *)(a4))->v)), (*(signed char *)((a4 + 0x1))), 0x0);
        *(unsigned short *)((a4 + 0x1C)) = 0x0;
        (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
        t1 = 0x17;
    }
    return t1;
}

int FUN_0c08a5d0(int a4, int a5, int a6)
{
    register int t0;

    t0 = FUN_0c037bf6(a4, a5, a6);
    if ((unsigned char)t0 != 0) {
        t0 = FUN_0c085f66(a4);
        if (t0 == 0) {
            FUN_0c081dfc(a4);
        } else {
            FUN_0c0c2d56(((((struct o376C_int *)(a4))->v)), 0x4, (*(signed char *)((a4 + 0x1))));
        }
        return FUN_0c085d0c(a4);
    }
    if (!(13.0f > ((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v)))) {
        if (((((struct o22_short *)(a4))->v)) == 0) {
            (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) + 0x1);
            FUN_0c0c3010(((((struct o376C_int *)(a4))->v)), (*(signed char *)((a4 + 0x1))), 0x0);
            return FUN_0c0c2380(a4, ((((struct o376C_int *)(a4))->v)));
        }
        return 0x22;
    }
    return 0x8C;
}

int FUN_0c08b400(int a4, int a5, int a6)
{
    register int t0;

    t0 = FUN_0c037bf6(a4, a5, a6);
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)(*(signed char *)((a4 + 0x3721))) == 13) {
            FUN_0c059df2((*(signed char *)((a4 + 0x1))), 0x46);
        }
        t0 = FUN_0c085f66(a4);
        if (t0 == 0) {
            FUN_0c081dfc(a4);
        } else {
            FUN_0c0c2d56(((((struct o376C_int *)(a4))->v)), 0x4, (*(signed char *)((a4 + 0x1))));
        }
        (((struct o50_float *)(a4))->v) = 0.0f;
        return FUN_0c085d0c(a4);
    }
    if (!((*(float *)0xC08B590) > ((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v)))) {
        if (((((struct o20_short *)(a4))->v)) == 0) {
            (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) + 0x1);
            FUN_0c0c3010(((((struct o376C_int *)(a4))->v)), (*(signed char *)((a4 + 0x1))), 0x0);
            return FUN_0c0c2380(a4, ((((struct o376C_int *)(a4))->v)));
        }
        return 0x20;
    }
    return 0x8C;
}

int FUN_0c08a3b0(int a4, int a5, int a6)
{
    register int t0;

    t0 = FUN_0c037bf6(a4, a5, a6);
    if ((unsigned char)t0 != 0) {
        t0 = FUN_0c085f66(a4);
        if (t0 == 0) {
            FUN_0c081dfc(a4);
        } else {
            FUN_0c0c2d56(((((struct o376C_int *)(a4))->v)), 0x4, (*(signed char *)((a4 + 0x1))));
        }
        return FUN_0c085d0c(a4);
    }
    if (!((*(float *)0xC08A500) > ((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v)))) {
        if (((((struct o22_short *)(a4))->v)) == 0) {
            (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) + 0x1);
            FUN_0c0c3010(((((struct o376C_int *)(a4))->v)), (*(signed char *)((a4 + 0x1))), (*(short *)((a4 + 0x1C))));
            return FUN_0c0c2380(a4, ((((struct o376C_int *)(a4))->v)));
        }
        return 0x22;
    }
    return 0x8C;
}
