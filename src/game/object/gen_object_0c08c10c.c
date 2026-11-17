/* game/object: functions 0C08C10C-0C08C91C, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17C_float { char p[0x17C]; float v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o3717_uchar { char p[0x3717]; unsigned char v; };
struct o3718_uchar { char p[0x3718]; unsigned char v; };
struct o3731_uchar { char p[0x3731]; unsigned char v; };
struct o376C_int { char p[0x376C]; int v; };
struct o46C_int { char p[0x46C]; int v; };
int FUN_0c070320(int);
int FUN_0c07da48(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c085cac(int, int, int);
int FUN_0c085eac(int, int);
int FUN_0c0c224c(int, int);
int FUN_0c0c3010(int, int, int);
int FUN_0c15b4fa(int, int, int, int, int, int, int, int, int);
int FUN_0c08c10c(int a4, int a5);
int FUN_0c08c162(int a4);
int FUN_0c08c70a(int a4, int a5, int a6, int a7);
int FUN_0c08c7de(int a4);

int FUN_0c08c10c(int a4, int a5)
{
    register int t7;

    t7 = (((struct o376C_int *)(a4))->v);
    return (FUN_0c15b4fa((*(signed char *)((a4 + 0x1))), (t7 + 0x64), t7, (*(int *)((((((struct o46C_int *)((*(int *)0xC4B40CC)))->v)) + 0x0))), ((*(signed char *)((((a5 * 0x1C) + 0xC259A2C) + 0x1))) - (*(signed char *)((((a5 * 0x1C) + 0xC259A2C) + 0x0)))), 0x52, (((a5 * 0x1C) + 0xC259A2C) + 0x4), (((a5 * 0x1C) + 0xC259A2C) + 0x10), ((*(signed char *)((((a5 * 0x1C) + 0xC259A2C) + 0x2))))));
}

int FUN_0c08c162(int a4)
{
    int stk[5];
    register int t13;

    if (((((struct o17C_float *)(a4))->v)) > 0.0f) {
        *(int *)((int)stk + 8) = 0xEB;
        *(int *)((int)stk + 4) = 0x3;
        *(int *)((int)stk + 0) = 0xFFFFFFFF;
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0xEB, 0xFFFFFFFF, 0x3, 0xEB);
        FUN_0c0c224c(a4, ((((struct o376C_int *)(a4))->v)));
        FUN_0c085eac(a4, 0x6);
        FUN_0c0c3010(((((struct o376C_int *)(a4))->v)), (*(signed char *)((a4 + 0x1))), 0x0);
        (((struct o20_ushort *)(a4))->v) = 0x0;
        t13 = 0x16;
    } else {
        *(int *)((int)stk + 8) = 0x7;
        *(int *)((int)stk + 4) = 0x3;
        *(int *)((int)stk + 0) = 0xFFFFFFFF;
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0x7, 0xFFFFFFFF, 0x3, 0x7);
        FUN_0c085eac(a4, 0x6);
        *(unsigned short *)((a4 + 0x1E)) = 0xD;
        FUN_0c0c3010(((((struct o376C_int *)(a4))->v)), (*(signed char *)((a4 + 0x1))), 0x1);
        (((struct o16_uchar *)(a4))->v) = 0x1;
        t13 = 0x17;
    }
    *(unsigned char *)((a4 + t13)) = 0x0;
    return t13;
}

int FUN_0c08c70a(int a4, int a5, int a6, int a7)
{
    int t0;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        t0 = *(signed char *)((a4 + 0x17));
        if (t0 != 0) {
            if (t0 != 1) {
                return t0;
            }
            return ((int (*)(int, int, int, int))(0xC08C68C))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC08C52C))(a4, a5, a6, a7);
    }
    t0 = FUN_0c07ecc6(a4, 0x0, 0x0);
    if ((t0 != 0) && (t0 != 1)) {
        (((struct o3717_uchar *)(a4))->v) = 0x6;
        (((struct o3718_uchar *)(a4))->v) = 0x0;
        return FUN_0c085cac(a4, 0x6, 0x0);
    }
    FUN_0c07da48(a4);
    FUN_0c070320(a4);
    t0 = *(signed char *)((a4 + 0x17));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            return ((int (*)(int, int, int, int))(0xC08C482))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC08C33E))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC08C1FE))(a4, a5, a6, a7);
}

int FUN_0c08c7de(int a4)
{
    int stk[9];

    if ((*(signed char *)((a4 + 0x3731))) != 2) {
        if (((((struct o17C_float *)(a4))->v)) > 0.0f) {
            *(int *)((int)stk + 8) = 0x3;
            *(int *)((int)stk + 4) = 0x3;
            *(int *)((int)stk + 0) = 0xFFFFFFFF;
            FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0x3, 0xFFFFFFFF, 0x3, 0x3);
            FUN_0c0c224c(a4, ((((struct o376C_int *)(a4))->v)));
            FUN_0c085eac(a4, 0x6);
            FUN_0c0c3010(((((struct o376C_int *)(a4))->v)), (*(signed char *)((a4 + 0x1))), 0x0);
            (((struct o22_ushort *)(a4))->v) = 0x0;
            (((struct o16_uchar *)(a4))->v) = 0x0;
        } else {
            *(int *)((int)stk + 8) = 0x7;
            *(int *)((int)stk + 4) = 0x3;
            *(int *)((int)stk + 0) = 0xFFFFFFFF;
            FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0x7, 0xFFFFFFFF, 0x3, 0x7);
            FUN_0c085eac(a4, 0x6);
            *(unsigned short *)((a4 + 0x1E)) = 0xD;
            FUN_0c0c3010(((((struct o376C_int *)(a4))->v)), (*(signed char *)((a4 + 0x1))), 0x1);
            (((struct o16_uchar *)(a4))->v) = 0x1;
            (((struct o17_uchar *)(a4))->v) = 0x0;
        }
        (((struct o3731_uchar *)(a4))->v) = 0x0;
    } else {
        if (((((struct o17C_float *)(a4))->v)) > 0.0f) {
            *(int *)((int)stk + 8) = 0xC;
            *(int *)((int)stk + 4) = 0x3;
            *(int *)((int)stk + 0) = 0xFFFFFFFF;
            FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0xC, 0xFFFFFFFF, 0x3, 0xC);
            FUN_0c0c224c(a4, ((((struct o376C_int *)(a4))->v)));
            FUN_0c085eac(a4, 0x6);
            (((struct o16_uchar *)(a4))->v) = 0x0;
        } else {
            *(int *)((int)stk + 8) = 0xD;
            *(int *)((int)stk + 4) = 0x3;
            *(int *)((int)stk + 0) = 0xFFFFFFFF;
            FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0xD, 0xFFFFFFFF, 0x3, 0xD);
            FUN_0c0c224c(a4, ((((struct o376C_int *)(a4))->v)));
            FUN_0c085eac(a4, 0x6);
            (((struct o16_uchar *)(a4))->v) = 0x1;
        }
        (((struct o22_ushort *)(a4))->v) = 0x0;
        (((struct o3731_uchar *)(a4))->v) = 0x2;
    }
    return 0x3731;
}
