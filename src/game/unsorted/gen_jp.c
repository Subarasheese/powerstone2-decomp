/* Straight-line functions with calls and guards (batch gen_jp): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o8C_float { char p[0x8C]; float v; };
int FUN_0c037bf6(int, int, int);
int FUN_0c059df2(int, int);
int FUN_0c087e6e(int a4, int a5, int a6);
int FUN_0c087d04(int a4, int a5, int a6);

int FUN_0c087e6e(int a4, int a5, int a6)
{
    register int t0;

    t0 = FUN_0c037bf6(a4, a5, a6);
    if ((unsigned char)t0 != 0) {
        *(unsigned short *)((a4 + 0x1E)) = 0x6;
        (((struct o20_ushort *)(a4))->v) = 0x0;
        (((struct o22_ushort *)(a4))->v) = 0x0;
        (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
        return 0x17;
    }
    if (!(18.0f > ((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v)))) {
        if (((((struct o22_short *)(a4))->v)) == 0) {
            (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) + 0x1);
            return FUN_0c059df2((*(signed char *)((a4 + 0x1))), 0x71);
        }
        return 0x22;
    }
    return 0x8C;
}

int FUN_0c087d04(int a4, int a5, int a6)
{
    register int t0;

    t0 = FUN_0c037bf6(a4, a5, a6);
    if ((unsigned char)t0 != 0) {
        *(unsigned short *)((a4 + 0x1E)) = 0xF;
        (((struct o20_ushort *)(a4))->v) = 0x0;
        (((struct o22_ushort *)(a4))->v) = 0x0;
        (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
        return 0x17;
    }
    t0 = 0x8C;
    if (!(9.0f > ((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v)))) {
        if (((((struct o22_short *)(a4))->v)) == 0) {
            FUN_0c059df2((*(signed char *)((a4 + 0x1))), 0x71);
            (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) + 0x1);
        }
        t0 = 0x22;
    }
    return t0;
}
