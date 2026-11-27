/* Straight-line functions with calls and guards (batch gen_xs): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o10_uchar { char p[0x10]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o447_uchar { char p[0x447]; unsigned char v; };
struct o8C_int { char p[0x8C]; int v; };
int FUN_0c037bf6(int);
int FUN_0c038362(int);
int FUN_0c070320(int);
int FUN_0c07da48(int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c085cac(int, int, int);
int FUN_0c085d0c(int);
int FUN_0c158dc8(int, int, int, int, int, int, int, int);
int FUN_0c15a260(int, int, int, int, int, int, int, int);
int FUN_0c08f780(int a4);

int FUN_0c08f780(int a4)
{
    int stk[5];
    register int t8;
    register int t21;
    register int t37;
    register int t41;
    register int R1004;
    register int R1008;
    register int R1012;
    register int R1016;

    R1004 = *(int *)((int)stk + 0);
    R1008 = *(int *)((int)stk + 4);
    R1012 = *(int *)((int)stk + 8);
    R1016 = *(int *)((int)stk + 12);

    (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) + 0x1);
    if (((((struct o20_short *)(a4))->v)) == 10) {
        if ((*(signed char *)((a4 + 0x371A))) == 0) {
            R1016 = 0xC1C5FD4;
            R1012 = 0xC1C5FC8;
            R1008 = 0x42;
            R1004 = 0x1A;
            FUN_0c158dc8((*(signed char *)((a4 + 0x1))), 0x1, 0xA, 0x1, 0x1A, 0x42, 0xC1C5FC8, 0xC1C5FD4);
        } else {
            R1016 = 0xC1C5FEC;
            R1012 = 0xC1C5FE0;
            R1008 = 0x42;
            R1004 = 0x1A;
            t8 = *(signed char *)((a4 + 0x1));
            (((struct o10_uchar *)(((int)stk + 0)))->v) = t8;
            FUN_0c15a260((*(signed char *)(((int)stk + 16))), 0x1, 0x7, (*(int *)((((((struct o8C_int *)((*(int *)((0xC4B40FC + (t8 << 2))))))->v)) + 0x0))), 0x1A, 0x42, 0xC1C5FE0, 0xC1C5FEC);
        }
    } else {
        if (((((struct o20_short *)(a4))->v)) == 14) {
            if ((*(signed char *)((a4 + 0x371A))) == 0) {
                R1016 = 0xC1C5F74;
                R1012 = 0xC1C5F68;
                R1008 = 0x52;
                R1004 = 0x1C;
                FUN_0c158dc8((*(signed char *)((a4 + 0x1))), 0x1, 0x5, 0x1, 0x1C, 0x52, 0xC1C5F68, 0xC1C5F74);
            } else {
                R1016 = 0xC1C5F8C;
                R1012 = 0xC1C5F80;
                R1008 = 0x52;
                R1004 = 0x1C;
                t21 = *(signed char *)((a4 + 0x1));
                (((struct o10_uchar *)(((int)stk + 0)))->v) = t21;
                FUN_0c15a260((*(signed char *)(((int)stk + 16))), 0x1, 0x5, (*(int *)((((((struct o8C_int *)((*(int *)((0xC4B40FC + (t21 << 2))))))->v)) + 0x0))), 0x1C, 0x52, 0xC1C5F80, 0xC1C5F8C);
            }
        }
    }
    t37 = FUN_0c037bf6(a4);
    if ((unsigned char)t37 != 0) {
        (((struct o447_uchar *)(a4))->v) = 0x0;
        return FUN_0c085d0c(a4);
    }
    FUN_0c038362(a4);
    FUN_0c07da48(a4);
    FUN_0c070320(a4);
    t41 = FUN_0c07ecc6(a4, 0x0, 0x0);
    if (t41 != 0) {
        if (t41 != 1) {
            return FUN_0c085cac(a4, 0x6, 0x0);
        }
        return t41;
    }
    return t41;
}
