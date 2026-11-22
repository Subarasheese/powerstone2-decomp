/* Straight-line functions with calls and guards (batch gen_ix): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o3746_uchar { char p[0x3746]; unsigned char v; };
struct o3790_float { char p[0x3790]; float v; };
struct o3794_float { char p[0x3794]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
int FUN_0c037bf6(int, int, int);
int FUN_0c038362(int);
int FUN_0c059e60(int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c085d0c(int);
int FUN_0c096144(int, int, int);
int FUN_0c096214(int);
int FUN_0c096330(int);
int FUN_0c0963e6(int);
int FUN_0c096438(int);
int FUN_0c09b958(int);
int FUN_0c09ba40(int, int, int);
int FUN_0c09bc34(int);
int FUN_0c09bc60(int);
int FUN_0c09be0c(int, int, int);
int FUN_0c09beb4(int);
int FUN_0c09bfc2(int);
int FUN_0c09ec84(int);
int FUN_0c09ed56(int);
int FUN_0c09f494(int);
int FUN_0c09f580(int);
int FUN_0c09f6fe(int);
int FUN_0c099366(int a4, int a5, int a6);
int FUN_0c09c510(int a4, int a5, int a6, int a7);
int FUN_0c07944c(int a4, int a5, int a6);
int FUN_0c079484(int a4, int a5, int a6);
int FUN_0c09648c(int a4, int a5, int a6);
int FUN_0c078792(int a4);
int FUN_0c09bd86(int a4, int a5, int a6);
int FUN_0c099f0a(int a4, int a5, int a6);
int FUN_0c09c020(int a4, int a5, int a6);
int FUN_0c09f720(int a4, int a5, int a6);
int FUN_0c06f3a8(int a4, int a5, int a6);
int FUN_0c077a72(int a4);
int FUN_0c09697c(int a4, int a5, int a6, int a7);
int FUN_0c09ee98(int a4, int a5, int a6);

int FUN_0c099366(int a4, int a5, int a6)
{
    register float u2;
    register int t6;

    FUN_0c037bf6(a4, a5, a6);
    FUN_0c038362(a4);
    u2 = *(float *)0xC0994D4;
    (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) - u2);
    (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) - u2);
    (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) - u2);
    t6 = (((struct o20_short *)(a4))->v);
    (((struct o20_ushort *)(a4))->v) = (t6 - 1);
    if ((short)(t6 - 1) == 0) {
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    }
    (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) - 1);
    return 0x22;
}


int FUN_0c07944c(int a4, int a5, int a6)
{
    register int t0;
    register int t3;

    t0 = FUN_0c037bf6(a4, a5, a6);
    t3 = (unsigned char)t0;
    if ((unsigned char)t0 != 0) {
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x4, 0x37, 0xFFFFFFFF, 0x4, 0x37);
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        t3 = 0x16;
    }
    return t3;
}

int FUN_0c079484(int a4, int a5, int a6)
{
    register int t0;
    register int t3;

    t0 = FUN_0c037bf6(a4, a5, a6);
    t3 = (unsigned char)t0;
    if ((unsigned char)t0 != 0) {
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x4, 0x54, 0xFFFFFFFF, 0x4, 0x54);
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        t3 = 0x16;
    }
    return t3;
}

int FUN_0c09648c(int a4, int a5, int a6)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        return t0;
                    }
                    return FUN_0c096438(a4);
                }
                return FUN_0c0963e6(a4);
            }
            return FUN_0c096330(a4);
        }
        return FUN_0c096214(a4);
    }
    return FUN_0c096144(a4, a5, a6);
}

int FUN_0c078792(int a4)
{
    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
    *(unsigned short *)((a4 + 0x1C)) = 0x78;
    *(unsigned short *)((a4 + 0x1E)) = 0x0;
    (((struct o3790_float *)(a4))->v) = ((((struct o28_float *)(a4))->v));
    (((struct o3794_float *)(a4))->v) = ((((struct o30_float *)(a4))->v));
    (((struct o3746_uchar *)(a4))->v) = 0x16;
    return FUN_0c059e60(a4, 0x3F);
}

int FUN_0c09bd86(int a4, int a5, int a6)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    return t0;
                }
                return FUN_0c09bc60(a4);
            }
            return FUN_0c09bc34(a4);
        }
        return FUN_0c09ba40(a4, a5, a6);
    }
    return FUN_0c09b958(a4);
}

int FUN_0c099f0a(int a4, int a5, int a6)
{
    register int t0;

    t0 = FUN_0c037bf6(a4, a5, a6);
    if ((unsigned char)t0 != 0) {
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        return 0x15;
    }
    return FUN_0c038362(a4);
}

int FUN_0c09c020(int a4, int a5, int a6)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            return FUN_0c09bfc2(a4);
        }
        return FUN_0c09beb4(a4);
    }
    return FUN_0c09be0c(a4, a5, a6);
}

int FUN_0c09f720(int a4, int a5, int a6)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            return FUN_0c09f6fe(a4);
        }
        return FUN_0c09f580(a4);
    }
    return FUN_0c09f494(a4);
}

int FUN_0c06f3a8(int a4, int a5, int a6)
{
    register int t0;

    t0 = FUN_0c037bf6(a4, a5, a6);
    if ((unsigned char)t0 != 0) {
        return FUN_0c085d0c(a4);
    }
    return (unsigned char)t0;
}

int FUN_0c077a72(int a4)
{
    register int t0;
    register int t2;

    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    t2 = (short)(t0 - 1);
    if ((short)(t0 - 1) == 0) {
        *(unsigned short *)((a4 + 0x1C)) = 0x6;
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        t2 = 0x16;
    }
    return t2;
}


int FUN_0c09ee98(int a4, int a5, int a6)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return FUN_0c09ed56(a4);
    }
    return FUN_0c09ec84(a4);
}
