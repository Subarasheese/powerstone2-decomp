/* Straight-line functions with calls and guards (batch gen_lj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o10_uchar { char p[0x10]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o8C_int { char p[0x8C]; int v; };
int FUN_0c037bf6(int, int, int);
int FUN_0c038362(int);
int FUN_0c070320(int);
int FUN_0c07da48(int);
int FUN_0c085d0c(int, int, int, int);
int FUN_0c158dc8(int, int, int, int, int, int, int, int);
int FUN_0c15a260(int, int, int, int, int, int, int, int);
int FUN_0c08e226(int a4, int a5, int a6);

/* manual: when the slot counter reaches the row's count, runs one or two callee calls chosen by the row's mode (flag at +0x371A picks FUN_0c158dc8 or FUN_0c15a260), then the end-of-step chain; 35 cases, 346 of 346 instructions */
int FUN_0c08e226(int a4, int a5, int a6)
{
    int row = 0xC1C6040 + (((signed char *)a4)[0x3733] * 5) * 4;
    register int R7;
    int m;
    short n;
    if (*(int *)(row + 8) >= 0) {
        n = *(short *)(a4 + 0x20) + 1;
        *(unsigned short *)(a4 + 0x20) = n;
        if (n == *(int *)(row + 12)) {
            m = *(int *)(row + 8);
            if (m == 2 || m == 3) {
                FUN_0c158dc8(((signed char *)a4)[1], 0, m == 2 ? 14 : 17,
                    ((signed char *)a4)[0x371A] ? 6 : 5, *(int *)(row + 16), 0x53, 0xC1C6028, 0xC1C6034);
            } else {
                if (m != 1) {
                    int k = m == 4 ? 0x42 : 0x52;
                    if (((signed char *)a4)[0x371A] == 0)
                        FUN_0c158dc8(((signed char *)a4)[1], 1, 5, 1, *(int *)(row + 16), k, 0xC1C5F68, 0xC1C5F74);
                    else
                        FUN_0c15a260(((signed char *)a4)[1], 1, 5, **(int **)(*(int *)(0xC4B40FC + ((signed char *)a4)[1] * 4) + 0x8C), *(int *)(row + 16), k, 0xC1C5F80, 0xC1C5F8C);
                }
                if (m != 0 && m != 4) {
                    if (((signed char *)a4)[0x371A] == 0)
                        FUN_0c158dc8(((signed char *)a4)[1], 1, 10, 1, *(int *)(row + 16), 0x42, 0xC1C5FC8, 0xC1C5FD4);
                    else
                        FUN_0c15a260(((signed char *)a4)[1], 1, 7, **(int **)(*(int *)(0xC4B40FC + ((signed char *)a4)[1] * 4) + 0x8C), *(int *)(row + 16), 0x42, 0xC1C5FE0, 0xC1C5FEC);
                }
            }
        }
    }
    if ((unsigned char)FUN_0c037bf6(a4, a5, a6) == 0) {
        FUN_0c038362(a4);
        FUN_0c07da48(a4);
        return FUN_0c070320(a4);
    }
    return FUN_0c085d0c(a4, a5, a6, R7);
}
