/* game/player: functions 0C08A2D8-0C08A81C, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17C_float { char p[0x17C]; float v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o376C_int { char p[0x376C]; int v; };
struct o383A_short { char p[0x383A]; short v; };
struct o383A_ushort { char p[0x383A]; unsigned short v; };
struct o383C_short { char p[0x383C]; short v; };
struct o383C_ushort { char p[0x383C]; unsigned short v; };
struct o50_float { char p[0x50]; float v; };
struct o5C_float { char p[0x5C]; float v; };
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c085eac(int, int);
int FUN_0c0c224c(int, int);
int FUN_0c0c3010(int, int, int);
int FUN_0c08a2d8(int a4);
int FUN_0c08a4d6(int a4, int a5, int a6, int a7);
int FUN_0c08a726(int a4, int a5, int a6, int a7);
int FUN_0c08a742(int a4);

int FUN_0c08a2d8(int a4)
{
    int stk[7];
    register int t13;
    register int t15;
    register int t16;

    if (((((struct o17C_float *)(a4))->v)) > 0.0f) {
        *(int *)((int)stk + 8) = 0x1C;
        *(int *)((int)stk + 4) = 0x3;
        *(int *)((int)stk + 0) = 0xFFFFFFFF;
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0x1C, 0xFFFFFFFF, 0x3, 0x1C);
        FUN_0c0c224c(a4, ((((struct o376C_int *)(a4))->v)));
        FUN_0c085eac(a4, 0x3);
        (((struct o16_uchar *)(a4))->v) = 0x0;
    } else {
        *(int *)((int)stk + 8) = 0x1D;
        *(int *)((int)stk + 4) = 0x3;
        *(int *)((int)stk + 0) = 0xFFFFFFFF;
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0x1D, 0xFFFFFFFF, 0x3, 0x1D);
        FUN_0c0c224c(a4, ((((struct o376C_int *)(a4))->v)));
        FUN_0c085eac(a4, 0x6);
        (((struct o16_uchar *)(a4))->v) = 0x1;
    }
    (((struct o22_ushort *)(a4))->v) = 0x0;
    t13 = 0x383C;
    if ((int)((((struct o383A_short *)(a4))->v)) > (int)((((struct o383C_short *)(a4))->v))) {
        t13 = 0x383A;
    }
    t15 = *(short *)((a4 + t13));
    if ((int)t15 > (int)0x258) {
        *(unsigned short *)((a4 + 0x1C)) = 0x4;
    } else {
        if ((int)t15 > (int)0x168) {
            *(unsigned short *)((a4 + 0x1C)) = 0x3;
        } else {
            if ((int)t15 > (int)0x78) {
                *(unsigned short *)((a4 + 0x1C)) = 0x2;
            } else {
                t16 = 0x0;
                if ((int)t15 > (int)0x3C) {
                    t16 = 0x1;
                }
                *(unsigned short *)((a4 + 0x1C)) = t16;
            }
        }
    }
    (((struct o383C_ushort *)(a4))->v) = 0x0;
    (((struct o383A_ushort *)(a4))->v) = 0x0;
    return 0x383A;
}

int FUN_0c08a4d6(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return ((int (*)(int, int, int, int))(0xC08A452))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC08A3B0))(a4, a5, a6, a7);
}

int FUN_0c08a726(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return ((int (*)(int, int, int, int))(0xC08A696))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC08A5D0))(a4, a5, a6, a7);
}

int FUN_0c08a742(int a4)
{
    int stk[5];
    register int t13;

    if (((((struct o17C_float *)(a4))->v)) > 0.0f) {
        *(int *)((int)stk + 8) = 0xE1;
        *(int *)((int)stk + 4) = 0x3;
        *(int *)((int)stk + 0) = 0xFFFFFFFF;
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0xE1, 0xFFFFFFFF, 0x3, 0xE1);
        FUN_0c0c224c(a4, ((((struct o376C_int *)(a4))->v)));
        FUN_0c085eac(a4, 0x6);
        FUN_0c0c3010(((((struct o376C_int *)(a4))->v)), (*(signed char *)((a4 + 0x1))), 0x0);
        t13 = 0x16;
    } else {
        *(int *)((int)stk + 8) = 0xE8;
        *(int *)((int)stk + 4) = 0x3;
        *(int *)((int)stk + 0) = 0xFFFFFFFF;
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0xE8, 0xFFFFFFFF, 0x3, 0xE8);
        FUN_0c085eac(a4, 0x6);
        FUN_0c0c3010(((((struct o376C_int *)(a4))->v)), (*(signed char *)((a4 + 0x1))), 0x1);
        (((struct o50_float *)(a4))->v) = 0.0f;
        (((struct o5C_float *)(a4))->v) = -2.0f;
        (((struct o16_uchar *)(a4))->v) = 0x1;
        t13 = 0x17;
    }
    *(unsigned char *)((a4 + t13)) = 0x0;
    return t13;
}
