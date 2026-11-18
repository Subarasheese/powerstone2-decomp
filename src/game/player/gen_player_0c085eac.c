/* game/player: functions 0C085EAC-0C0866A8, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17C_float { char p[0x17C]; float v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o372D_uchar { char p[0x372D]; unsigned char v; };
struct o3731_uchar { char p[0x3731]; unsigned char v; };
struct o3760_uint { char p[0x3760]; unsigned int v; };
struct o376C_int { char p[0x376C]; int v; };
struct o377C_uint { char p[0x377C]; unsigned int v; };
struct o37A0_float { char p[0x37A0]; float v; };
struct o420_short { char p[0x420]; short v; };
struct o430_short { char p[0x430]; short v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c064f80(int);
int FUN_0c07ce58(int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c085d0c(int, int, int, int);
int FUN_0c086322(int);
int FUN_0c0c224c(int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c187798(int, int);
int FUN_0c085eac(int a4, int a5);
int FUN_0c085f66(int a4);
int FUN_0c085ffa(int a4, int a5);
int FUN_0c08602a(int a4, int a5, int a6, int a7);
int FUN_0c086030(int a4, int a5, int a6, int a7);
int FUN_0c086036(int a4);
int FUN_0c086248(int a4);
int FUN_0c08668c(int a4, int a5, int a6, int a7);


int FUN_0c085f66(int a4)
{
    int t0;

    if (((((struct o376C_int *)(a4))->v)) != 0) {
        t0 = *(signed char *)((0xC2738CF + ((unsigned short)(unsigned char)(*(signed char *)((0x41C + ((((struct o376C_int *)(a4))->v))))) * (unsigned short)0x34)));
        if (t0 != 0) {
            if ((t0 != 1) && (t0 != 2)) {
                return 0x0;
            }
            if (((((struct o420_short *)(((((struct o376C_int *)(a4))->v))))->v)) != 0) {
                return 0x1;
            }
            return 0x0;
        }
        t0 = *(signed char *)((((((struct o376C_int *)(a4))->v)) + 0x41D));
        if (t0 != 4) {
            if (t0 == 7) {
                return 0x1;
            }
            return 0x0;
        }
        return 0x1;
    }
    return 0x0;
}

int FUN_0c085ffa(int a4, int a5)
{
    if ((((unsigned short)((((struct o430_short *)(a4))->v)) & a5) & 0x200) != 0) {
        (((struct o3731_uchar *)(a4))->v) = 0x0;
        return 0x1;
    }
    if ((((unsigned short)((((struct o430_short *)(a4))->v)) & a5) & 128) != 0) {
        (((struct o3731_uchar *)(a4))->v) = 0x2;
        return 0x1;
    }
    return 0x0;
}

int FUN_0c08602a(int a4, int a5, int a6, int a7)
{
    return FUN_0c085d0c(a4, a5, a6, a7);
}

int FUN_0c086030(int a4, int a5, int a6, int a7)
{
    return FUN_0c085d0c(a4, a5, a6, a7);
}

int FUN_0c086036(int a4)
{
    int stk[9];
    register int t28;
    int t4;
    register int t9;
    register int t10;
    register int t11;
    register int t14;

    if (((((struct o17C_float *)(a4))->v)) > 0.0f) {
        if (((*(signed char *)((a4 + 0x2))) == 8) && (t4 = *(signed char *)((a4 + 0x371C)), t4 != 0)) {
            *(int *)((int)stk + 8) = 0x19;
            *(int *)((int)stk + 4) = 0x2;
            t11 = *(signed char *)((a4 + 0x1));
            *(unsigned int *)(((int)stk + 12)) = t11;
            t10 = t11;
            *(int *)((int)stk + 0) = t10;
            t9 = 0x19;
            t14 = 0x19;
        } else {
            *(int *)((int)stk + 8) = 0x2;
            *(int *)((int)stk + 4) = 0x2;
            t11 = *(signed char *)((a4 + 0x1));
            *(unsigned int *)(((int)stk + 12)) = t11;
            t10 = t11;
            *(int *)((int)stk + 0) = t10;
            t9 = 0x2;
            t14 = 0x2;
        }
        FUN_0c07e79c(a4, t11, 0x2, t14, t10, 0x2, t9);
        FUN_0c0c224c(a4, ((((struct o376C_int *)(a4))->v)));
        FUN_0c085eac(a4, 0x6);
        t28 = 0x0;
    } else {
        *(int *)((int)stk + 8) = 0x16;
        *(int *)((int)stk + 4) = 0x2;
        *(int *)((int)stk + 0) = 0xFFFFFFFF;
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x2, 0x16, 0xFFFFFFFF, 0x2, 0x16);
        FUN_0c0c224c(a4, ((((struct o376C_int *)(a4))->v)));
        FUN_0c085eac(a4, 0x6);
        (((struct o4C_float *)(a4))->v) = ((math_sin_angle16((*(int *)((a4 + 0x38))))) * 5.0f);
        (((struct o54_float *)(a4))->v) = ((math_cos_angle16((*(int *)((a4 + 0x38))))) * 5.0f);
        (((struct o50_float *)(a4))->v) = 18.0f;
        (((struct o5C_float *)(a4))->v) = -1.22500002f;
        (((struct o60_float *)(a4))->v) = 0.0f;
        (((struct o58_float *)(a4))->v) = 0.0f;
        t28 = 0x1;
    }
    (((struct o16_uchar *)(a4))->v) = t28;
    (((struct o22_ushort *)(a4))->v) = 0x0;
    return 0x22;
}

int FUN_0c086248(int a4)
{
    int stk[6];
    register float u0;
    register int t18;

    u0 = (((struct o0_float *)0xC086368)->v);
    if (((((struct o17C_float *)(a4))->v)) > 0.0f) {
        *(int *)((int)stk + 8) = 0x1C;
        *(int *)((int)stk + 4) = 0x3;
        *(int *)((int)stk + 0) = 0xFFFFFFFF;
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0x1C, 0xFFFFFFFF, 0x3, 0x1C);
        FUN_0c0c224c(a4, ((((struct o376C_int *)(a4))->v)));
        FUN_0c085eac(a4, 0x6);
        *(unsigned short *)((a4 + 0x1C)) = 0x9;
        (((struct o4C_float *)(a4))->v) = u0;
        (((struct o58_float *)(a4))->v) = ((-u0) / (float)(*(short *)((a4 + 0x1C))));
        (((struct o5C_float *)(a4))->v) = 0.0f;
        (((struct o50_float *)(a4))->v) = 0.0f;
        t18 = 0x0;
    } else {
        *(int *)((int)stk + 8) = 0x1D;
        *(int *)((int)stk + 4) = 0x3;
        *(int *)((int)stk + 0) = 0xFFFFFFFF;
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0x1D, 0xFFFFFFFF, 0x3, 0x1D);
        FUN_0c0c224c(a4, ((((struct o376C_int *)(a4))->v)));
        FUN_0c085eac(a4, 0x6);
        *(unsigned short *)((a4 + 0x1C)) = 0x14;
        (((struct o4C_float *)(a4))->v) = u0;
        (((struct o58_float *)(a4))->v) = ((-u0) / (float)(*(short *)((a4 + 0x1C))));
        (((struct o50_float *)(a4))->v) = ((((struct oC_float *)0xC086368)->v));
        if (!(0.0f > ((((struct o5C_float *)(a4))->v)))) {
            (((struct o5C_float *)(a4))->v) = ((((struct o37A0_float *)(a4))->v));
        }
        t18 = 0x1;
    }
    (((struct o16_uchar *)(a4))->v) = t18;
    (((struct o22_ushort *)(a4))->v) = 0x0;
    return 0x22;
}

int FUN_0c08668c(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return ((int (*)(int, int, int, int))(0xC086538))(a4, a5, a6, a7);
    }
    return FUN_0c086322(a4);
}
