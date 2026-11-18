/* Straight-line functions with calls and guards (batch gen_co): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o11C_int { char p[0x11C]; int v; };
struct o12E_short { char p[0x12E]; short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o376C_int { char p[0x376C]; int v; };
struct o404_int { char p[0x404]; int v; };
struct o50_float { char p[0x50]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
int FUN_0c037bf6(int, int, int);
int FUN_0c07e328(int, int);
int FUN_0c081dfc(int);
int FUN_0c085d0c(int, int, int, int);
int FUN_0c085f66(int);
int FUN_0c0c2380(int, int);
int FUN_0c0c2ab6(int, int);
int FUN_0c0c2ce4(int);
int FUN_0c0c2d56(int, int, int);
int FUN_0c0c3010(int, int, int);
int FUN_0c0c57e0(int, int, int);
int FUN_0c0c5a88(int);
int FUN_0c08b1c8(int a4, int a5, int a6);
int FUN_0c0c82dc(int a4, int a5, int a6);

int FUN_0c08b1c8(int a4, int a5, int a6)
{
    int stk[2];
    register int t0;
    register int t38;
    register int t18;
    register int t27;
    register int t43;
    register int t51;
    register int t52;
    int t1;
    register float u2;

    t0 = FUN_0c037bf6(a4, a5, a6);
    if (((unsigned char)t0 == 0) && (t1 = (((struct o118_int *)(a4))->v), u2 = (((struct o8C_float *)(t1))->v), 29.0f > u2)) {
        t38 = 0x8C;
        if (!((*(float *)0xC08B358) > ((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v)))) {
            t18 = *(short *)((a4 + 0x1E));
            t38 = t18;
            if (t18 == 0) {
                t38 = 0x20;
                if (((((struct o20_short *)(a4))->v)) == 0) {
                    (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) + 0x1);
                    FUN_0c0c3010(((((struct o376C_int *)(a4))->v)), (*(signed char *)((a4 + 0x1))), 0x0);
                    FUN_0c0c2380(a4, ((((struct o376C_int *)(a4))->v)));
                    t27 = *(short *)((a4 + 0x1E));
                    *(unsigned short *)((a4 + 0x1E)) = (t27 + 0x1);
                    t38 = (t27 + 0x1);
                }
            }
        }
        return t38;
    }
    t43 = FUN_0c085f66(a4);
    if (t43 == 0) {
        FUN_0c081dfc(a4);
    } else {
        FUN_0c0c2d56(((((struct o376C_int *)(a4))->v)), 0x4, (*(signed char *)((a4 + 0x1))));
    }
    (((struct o50_float *)(a4))->v) = 0.0f;
    FUN_0c085d0c(a4, 0x0, 0x0, 0x0);
    t51 = (((struct o118_int *)(a4))->v);
    (((struct o98_float *)(t51))->v) = 10.0f;
    (((struct o94_float *)(t51))->v) = 10.0f;
    t52 = (((struct o11C_int *)(a4))->v);
    (((struct o98_float *)(t52))->v) = 10.0f;
    (((struct o94_float *)(t52))->v) = 10.0f;
    return 0x94;
}

int FUN_0c0c82dc(int a4, int a5, int a6)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        if (((((struct o404_int *)(a4))->v)) == 0) {
            t0 = (((struct o22_short *)(a4))->v);
            (((struct o22_ushort *)(a4))->v) = (t0 - 1);
            if ((short)(t0 - 1) == 0) {
                t0 = FUN_0c0c2ce4(a4);
                if (t0 == 2) {
                    t0 = 0x3;
                    t1 = (*(signed char *)((a4 + 0x1)));
                } else {
                    t0 = 0x9;
                    t1 = (*(signed char *)((a4 + 0x1)));
                }
                return FUN_0c0c2d56(a4, t0, t1);
            }
            *(unsigned int *)((a4 + 0x3C)) = ((*(int *)((a4 + 0x3C))) + 0x71C);
            return FUN_0c0c5a88(a4);
        }
        t0 = FUN_0c0c2ce4(a4);
        if (t0 == 2) {
            t0 = 0x3;
            t1 = (*(signed char *)((a4 + 0x1)));
        } else {
            t0 = 0x9;
            t1 = (*(signed char *)((a4 + 0x1)));
        }
        return FUN_0c0c2d56(a4, t0, t1);
    }
    (((struct oA4_uint *)(a4))->v) = 0x0;
    FUN_0c0c57e0(a4, a5, a6);
    FUN_0c0c2ab6(a4, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738CB))));
    FUN_0c07e328(a4, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738C6))));
    (((struct o12E_ushort *)(a4))->v) = (((((struct o12E_short *)(a4))->v)) & (~((int)0x1 << (int)(*(signed char *)((a4 + 0x1))))));
    (((struct o22_ushort *)(a4))->v) = 0xB4;
    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
    return 0x16;
}
