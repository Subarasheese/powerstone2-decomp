/* Straight-line functions with calls and guards (batch gen_iy): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o2C_float { char p[0x2C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int);
int FUN_0c03f444(int, int, int);
int FUN_0c04b23c(int, int, int, int);
int FUN_0c059e9a(int, int, int);
int FUN_0c187798(int);
int thunk_FUN_0c05abb2(int, int);
int FUN_0c1625ae(int a4, int a5);
int FUN_0c04c6c4(int a4, int a5, int a6, int a7, float f4);

int FUN_0c1625ae(int a4, int a5)
{
    int stk[6];
    register int t9;
    register float u10;
    register float u6;
    register int t13;
    register int t15;
    register int t18;
    register int t39;
    register int t22;
    register int t23;
    register float u24;
    register int t26;
    register int t50;
    register float u2;

    *(unsigned int *)(((int)stk + 0)) = a4;
    if ((unsigned int)a5 >= (unsigned int)0x2710) {
    } else {
        t9 = 0x4;
        u10 = 21.0f;
        if ((unsigned int)a5 >= (unsigned int)0x3E8) {
        } else {
            t9 = 0x3;
            u6 = 22.0f;
            if ((unsigned int)a5 >= (unsigned int)0x64) {
            } else {
                t9 = 0x1;
                if ((unsigned int)a5 >= (unsigned int)0xA) {
                    t9 = 0x2;
                    u2 = 11.0f;
                }
                u6 = u2;
            }
            u10 = u6;
        }
        *(unsigned int *)(((((int)stk + 0) + 0x4) + 0xC)) = ((int)((unsigned int)a5 / (unsigned int)0x3E8));
        t13 = (int)((unsigned int)a5 % (unsigned int)0x3E8);
        *(unsigned int *)(((((int)stk + 0) + 0x4) + 0x8)) = ((int)((unsigned int)t13 / (unsigned int)0x64));
        t15 = (int)((unsigned int)t13 % (unsigned int)0x64);
        *(unsigned int *)(((((int)stk + 0) + 0x4) + 0x4)) = ((int)((unsigned int)t15 / (unsigned int)0xA));
        *(unsigned int *)(((((int)stk + 0) + 0x4) + 0x0)) = ((int)((unsigned int)t15 % (unsigned int)0xA));
        t18 = FUN_0c03f444(0x5, 0x0, t9);
        t39 = t18;
        if (t18 != 0) {
            *(unsigned char *)((t18 + 0x1)) = 0xFFFFFFFF;
            *(unsigned int *)((t18 + 0x4)) = 0xC162560;
            (((struct oA8_uchar *)(t18))->v) = 0x1;
            (((struct oAC_ushort *)(t18))->v) = 0x21;
            (((struct oA9_uchar *)(t18))->v) = 0x21;
            (((struct o48_float *)(t18))->v) = 1.0f;
            (((struct o44_float *)(t18))->v) = 1.0f;
            (((struct o40_float *)(t18))->v) = 1.0f;
            *(volatile int *)(((int)stk + 0));
            FUN_0c187798(0x21);
            (((struct o2C_float *)(t18))->v) = (((((struct o2C_float *)(t18))->v)) + 55.0f);
            *(unsigned short *)((t18 + 0x1C)) = 0x64;
            if ((int)t9 > 0) {
                t22 = 0x0;
                t23 = 0x0;
                u24 = u10;
                for (;;) {
                    t26 = *(int *)((((0xC4 + t18) + t23) + 0x0));
                    FUN_0c03744a(t26, 0x0, (*(int *)((((*(int *)(((((int)stk + 0) + 0x4) + t23))) << 2) + 0xC2A2E38))), (*(int *)0xC4B40D0));
                    *(unsigned char *)((t26 + 0x0)) = 0x1;
                    *(unsigned short *)((t26 + 0x6)) = 0x30;
                    (((struct o8C_float *)(t26))->v) = 2.20000005f;
                    (((struct o88_float *)(t26))->v) = 2.20000005f;
                    (((struct o84_float *)(t26))->v) = 2.20000005f;
                    (((struct o6C_float *)(t26))->v) = u24;
                    u24 = (u24 - 22.0f);
                    (((struct o70_float *)(t26))->v) = 0.0f;
                    t22 = (t22 + 0x1);
                    (((struct o74_float *)(t26))->v) = 0.0f;
                    t23 = (t23 + 0x4);
                    if ((int)t22 >= (int)t9) {
                        break;
                    }
                }
            }
            *(unsigned short *)((t18 + 0x1C)) = 0xE;
            t39 = 0xE;
        }
        t50 = t39;
    }
    return t50;
}

int FUN_0c04c6c4(int a4, int a5, int a6, int a7, float f4)
{
    register int t0;
    register int t1;
    register float u0;

    FUN_0c04b23c(a4, 0x0, a6, a7);
    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o48_float *)(a4))->v) = 0.0f;
        (((struct o44_float *)(a4))->v) = 0.0f;
        (((struct o40_float *)(a4))->v) = 0.0f;
    }
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 45.0f);
            t0 = *(signed char *)((a4 + 0x16));
            if (t0 != 0) {
                if (t0 != 1) {
                } else {
                    if ((int)(*(short *)0xC541F4E) <= (int)0xA) {
                        thunk_FUN_0c05abb2(0x45, (a4 + 0x28));
                        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                    }
                }
            } else {
                if ((int)(unsigned char)(*(signed char *)0xC541F44) >= (int)0xB) {
                    FUN_0c059e9a((((short)(*(signed char *)0xC542363) * (short)0x3938) + 0xC532498), 0x36, (a4 + 0x28));
                    *(unsigned short *)((a4 + 0x1C)) = 0x0;
                    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                }
            }
            t0 = *(signed char *)0xC541F44;
            if ((int)(unsigned char)t0 > (int)0xB) {
                return FUN_0c03f346(a4);
            }
            return (unsigned char)t0;
        }
        t0 = *(short *)((a4 + 0x1E));
        *(unsigned short *)((a4 + 0x1E)) = (t0 - 1);
        if ((short)(t0 - 1) == 0) {
            FUN_0c059e9a((((short)(*(signed char *)0xC542363) * (short)0x3938) + 0xC532498), 0x35, (a4 + 0x28));
        }
        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 45.0f);
        u0 = (((struct o48_float *)(a4))->v);
        (((struct o48_float *)(a4))->v) = (u0 + 0.0333333351f);
        (((struct o44_float *)(a4))->v) = (u0 + 0.0333333351f);
        (((struct o40_float *)(a4))->v) = (u0 + 0.0333333351f);
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        t1 = (short)(t0 - 1);
        if ((int)(short)(t0 - 1) <= 0) {
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            (((struct o16_uchar *)(a4))->v) = 0x0;
            t1 = 0x16;
        }
        return t1;
    }
    t0 = *(signed char *)0xC541F44;
    t1 = (unsigned char)t0;
    if ((int)(unsigned char)t0 < (int)0xA) {
    } else {
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        *(volatile int *)((a4 + 0x10));
        FUN_0c187798(0xA);
        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) - 585.0f);
        (((struct o48_float *)(a4))->v) = f4;
        (((struct o44_float *)(a4))->v) = f4;
        (((struct o40_float *)(a4))->v) = f4;
        *(unsigned short *)((a4 + 0x1C)) = 0x1E;
        *(unsigned short *)((a4 + 0x1E)) = 0x5;
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t1 = 0x15;
    }
    return t1;
}
