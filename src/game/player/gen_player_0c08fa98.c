/* game/player: functions 0C08FA98-0C090DF4, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o10_uchar { char p[0x10]; unsigned char v; };
struct o118_int { char p[0x118]; int v; };
struct o11C_int { char p[0x11C]; int v; };
struct o1200_uchar { char p[0x1200]; unsigned char v; };
struct o1668_uchar { char p[0x1668]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o1C_uchar { char p[0x1C]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o3731_uchar { char p[0x3731]; unsigned char v; };
struct o3749_uchar { char p[0x3749]; unsigned char v; };
struct o374A_uchar { char p[0x374A]; unsigned char v; };
struct o3760_int { char p[0x3760]; int v; };
struct o37A0_float { char p[0x37A0]; float v; };
struct o430_short { char p[0x430]; short v; };
struct o446_uchar { char p[0x446]; unsigned char v; };
struct o447_uchar { char p[0x447]; unsigned char v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o8C_int { char p[0x8C]; int v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
int FUN_0c037bf6(int);
int FUN_0c038362(int);
int FUN_0c05258e(int, int, int, int, int);
int FUN_0c059e60(int, int);
int FUN_0c070320(int);
int FUN_0c07d030(int, int);
int FUN_0c07da48(int);
int FUN_0c07daea(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07ec9a(int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c0819c2(int, int);
int FUN_0c085cac(int, int, int);
int FUN_0c085d0c(int);
int FUN_0c125edc(int);
int FUN_0c126358(int, int);
int FUN_0c1272a8(int, int);
int FUN_0c1277c4(int);
int FUN_0c127bfc(int, int);
int FUN_0c128088(int);
int FUN_0c14f9d6(int, int);
int FUN_0c158dc8(int, int, int, int, int, int, int, int);
int FUN_0c15a260(int, int, int, int, int, int, int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int FUN_0c08fa98(int a4);
int FUN_0c08fb74(int a4);
int FUN_0c08fee4(int a4);
int FUN_0c08ff28(int a4);
int FUN_0c090300(int a4);
int FUN_0c090414(int a4);
int FUN_0c09052a(int a4);
int FUN_0c0905b4(int a4);
int FUN_0c090630(int a4);
int FUN_0c090650(int a4);
int FUN_0c0908b4(int a4);
int FUN_0c090932(int a4);
int FUN_0c090a50(int a4);
int FUN_0c090ae4(int a4);
int FUN_0c090b78(int a4);
int FUN_0c090cb8(int a4);
int FUN_0c090dbc(int a4, int a5, int a6, int a7);

int FUN_0c08fa98(int a4)
{
    register int t0;
    register int t1;

    (((struct o50_float *)(a4))->v) = 0.0f;
    (((struct o54_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    (((struct o60_float *)(a4))->v) = 0.0f;
    (((struct o58_float *)(a4))->v) = 0.0f;
    *(unsigned short *)((a4 + 0x1C)) = 0x0;
    *(unsigned short *)((a4 + 0x1E)) = 0x0;
    (((struct o20_ushort *)(a4))->v) = 0x0;
    if ((*(signed char *)((a4 + 0x3731))) == 0) {
        (((struct o22_ushort *)(a4))->v) = 0x1;
    } else {
        (((struct o22_ushort *)(a4))->v) = 0x0;
    }
    t0 = *(int *)(((((((((struct o20_short *)(a4))->v)) << 2) << 2) << 1) + 0xC1C6090));
    t1 = *(signed char *)((a4 + 0x1));
    FUN_0c07e79c(a4, t1, 0x1, t0, (t1), 0x1, (t0));
    t0 = *(int *)(((0x118 + a4) + 0x4));
    t1 = (((struct o118_int *)(a4))->v);
    (((struct oA0_float *)(t0))->v) = 1.0f;
    (((struct o9C_float *)(t0))->v) = 1.0f;
    (((struct oA0_float *)(t1))->v) = 1.0f;
    (((struct o9C_float *)(t1))->v) = 1.0f;
    t0 = *(int *)(((0x118 + a4) + 0x4));
    t1 = (((struct o118_int *)(a4))->v);
    (((struct o98_float *)(t0))->v) = 1.0f;
    (((struct o98_float *)(t1))->v) = 1.0f;
    (((struct o94_float *)(t0))->v) = 1.0f;
    (((struct o94_float *)(t1))->v) = 1.0f;
    (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
    return FUN_0c07d030(a4, 0x0);
}


int FUN_0c08fee4(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x17));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return FUN_0c08fb74(a4);
    }
    return FUN_0c08fa98(a4);
}

int FUN_0c08ff28(int a4)
{
    register int t0;
    register int t1;

    (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
    t0 = *(signed char *)((a4 + 0x1));
    FUN_0c07e79c(a4, t0, 0x1, 0x1B, (t0), 0x1, 0x1B);
    t0 = *(int *)(((0x118 + a4) + 0x4));
    t1 = (((struct o118_int *)(a4))->v);
    (((struct oA0_float *)(t0))->v) = 1.0f;
    (((struct o9C_float *)(t0))->v) = 1.0f;
    (((struct oA0_float *)(t1))->v) = 1.0f;
    (((struct o9C_float *)(t1))->v) = 1.0f;
    t0 = *(int *)(((0x118 + a4) + 0x4));
    t1 = (((struct o118_int *)(a4))->v);
    (((struct o98_float *)(t0))->v) = 1.0f;
    (((struct o98_float *)(t1))->v) = 1.0f;
    (((struct o94_float *)(t0))->v) = 1.0f;
    (((struct o94_float *)(t1))->v) = 1.0f;
    if ((*(signed char *)((a4 + 0x371A))) == 0) {
        *(unsigned short *)((((0x468 + a4) + 0x2D0) + 0x6)) = 0x1F;
        t0 = (0x2D0 + (0x468 + a4));
    } else {
        *(unsigned short *)((((0x468 + a4) + 0x13B0) + 0x6)) = 0x1F;
        t0 = (0x13B0 + (0x468 + a4));
    }
    (((struct o8C_float *)(t0))->v) = (1.0f + 1.0f);
    *(unsigned int *)((a4 + 0x10)) = ((((struct o3760_int *)(a4))->v));
    FUN_0c059e60(a4, 0xB);
    FUN_0c0819c2(a4, 0x71C);
    FUN_0c037bf6(a4);
    (((struct o3749_uchar *)(a4))->v) = 0x1;
    *(unsigned short *)((a4 + 0x1C)) = 0x14;
    *(unsigned short *)((a4 + 0x1E)) = 0x3;
    return 0x3;
}

int FUN_0c090300(int a4)
{
    int stk[9];
    int t4;
    int t5;
    int t7;
    int t2;

    (((struct o374A_uchar *)(a4))->v) = 0x1;
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    t2 = FUN_0c07ecc6(a4, 0x0, 0x0);
    if (t2 != 0) {
        FUN_0c07ec9a(a4);
        *(int *)((int)stk + 28) = 0x1D;
        *(int *)((int)stk + 24) = 0x1;
        t4 = *(signed char *)(a4 + 0x1);
        *(unsigned int *)(((int)stk + 32)) = t4;
        t5 = t4;
        *(int *)((int)stk + 20) = t5;
        FUN_0c07e79c(a4, t4, 0x1, 0x1D, t5, 0x1, 0x1D);
        *(int *)((int)stk + 16) = 0xC1C5F74;
        *(int *)((int)stk + 12) = 0xC1C5F68;
        *(int *)((int)stk + 8) = 0x42;
        *(int *)((int)stk + 4) = 0x10;
        t7 = *(signed char *)(a4 + 0x1);
        (((struct o1C_uchar *)(((int)stk + 4)))->v) = t7;
        FUN_0c15a260((*(signed char *)(((int)stk + 32))), 0x1, 0x5, (*(int *)((((((struct o8C_int *)((*(int *)((((signed char)t7 << 2) + 0xC4B40FC)))))->v)) + 0x0))), 0x10, 0x42, 0xC1C5F68, 0xC1C5F74);
        FUN_0c125edc(a4);
        FUN_0c05258e(0x2, 0x14, 0x100, 0x1E, 0x0);
        FUN_0c128088(a4);
        FUN_0c07daea(a4);
        FUN_0c059e60(a4, 0x24);
        (((struct o20_ushort *)(a4))->v) = 0x10;
        (((struct o17_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x17)) + 0x1);
    }
    FUN_0c037bf6(a4);
    return FUN_0c038362(a4);
}

int FUN_0c090414(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;
    register float u2;

    (((struct o3749_uchar *)(a4))->v) = 0x1;
    if ((int)((((struct o20_short *)(a4))->v)) > 0) {
        (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) - 1);
    }
    t0 = (((struct o20_short *)(a4))->v);
    t1 = (int)((unsigned int)((int)((unsigned int)t0 + (unsigned int)0x0)) + ((((int)0x0 > (int)t0)) ? 1u : 0u));
    u0 = math_cos_angle16((*(int *)((a4 + 0x38))));
    t0 = (((struct o20_short *)(a4))->v);
    t2 = (int)((unsigned int)((int)((unsigned int)t0 + (unsigned int)0x0)) + ((((int)0x0 > (int)t0)) ? 1u : 0u));
    u1 = math_sin_angle16((*(int *)((a4 + 0x38))));
    if ((((((struct o20_short *)(a4))->v)) & 0x1) != 0) {
        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + (((float)(t2 >> 1) * u1)));
        u2 = (((((struct o30_float *)(a4))->v)) + (((float)(t1 >> 1) * u0)));
    } else {
        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) - (((float)(t2 >> 1) * u1)));
        u2 = (((((struct o30_float *)(a4))->v)) - (((float)(t1 >> 1) * u0)));
    }
    (((struct o30_float *)(a4))->v) = u2;
    t0 = FUN_0c037bf6(a4);
    t1 = (unsigned char)t0;
    if ((unsigned char)t0 != 0) {
        t0 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t0, 0x1, 0x1E, (t0), 0x1, 0x1E);
        u0 = *(float *)0xC090570;
        t0 = (((struct o118_int *)(a4))->v);
        (((struct o98_float *)(t0))->v) = u0;
        (((struct o94_float *)(t0))->v) = u0;
        t0 = (((struct o11C_int *)(a4))->v);
        (((struct o98_float *)(t0))->v) = u0;
        (((struct o94_float *)(t0))->v) = u0;
        if ((*(signed char *)((a4 + 0x371A))) == 0) {
            *(unsigned short *)((((0x468 + a4) + 0x2D0) + 0x6)) = 0xF;
            (((struct o8C_float *)((0x2D0 + (0x468 + a4))))->v) = 1.0f;
            t0 = 0x8C;
        } else {
            *(unsigned short *)((((0x468 + a4) + 0x13B0) + 0x6)) = 0xF;
            (((struct o8C_float *)((0x13B0 + (0x468 + a4))))->v) = 1.0f;
            (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
            t0 = 0x17;
        }
        t1 = t0;
    }
    return t1;
}

int FUN_0c09052a(int a4)
{
    register int t0;

    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        return FUN_0c085d0c(a4);
    }
    return (unsigned char)t0;
}

int FUN_0c0905b4(int a4)
{
    register int t0;
    register int t1;

    (((struct o54_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    (((struct o50_float *)(a4))->v) = ((((struct o0_float *)0xC090684)->v));
    (((struct o5C_float *)(a4))->v) = ((((struct o4_float *)0xC090684)->v));
    t0 = *(signed char *)((a4 + 0x1));
    FUN_0c07e79c(a4, t0, 0x1, 0x11, (t0), 0x1, 0x11);
    t0 = *(int *)(((0x118 + a4) + 0x4));
    t1 = (((struct o118_int *)(a4))->v);
    (((struct oA0_float *)(t0))->v) = 1.0f;
    (((struct o9C_float *)(t0))->v) = 1.0f;
    (((struct oA0_float *)(t1))->v) = 1.0f;
    (((struct o9C_float *)(t1))->v) = 1.0f;
    t0 = *(int *)(((0x118 + a4) + 0x4));
    t1 = (((struct o118_int *)(a4))->v);
    (((struct o98_float *)(t0))->v) = 1.0f;
    (((struct o98_float *)(t1))->v) = 1.0f;
    (((struct o94_float *)(t0))->v) = 1.0f;
    (((struct o94_float *)(t1))->v) = 1.0f;
    *(unsigned short *)((a4 + 0x1C)) = 0x0;
    (((struct o17_uchar *)(a4))->v) = 0x1;
    return 0x17;
}

int FUN_0c090630(int a4)
{
    FUN_0c0905b4(a4);
    *(unsigned short *)((a4 + 0x1E)) = 0x0;
    FUN_0c059e60(a4, 0x9);
    return FUN_0c07d030(a4, 0x0);
}


int FUN_0c0908b4(int a4)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x1));
    FUN_0c07e79c(a4, t0, 0x1, 0x19, (t0), 0x1, 0x19);
    t0 = *(int *)(((0x118 + a4) + 0x4));
    t1 = (((struct o118_int *)(a4))->v);
    (((struct oA0_float *)(t0))->v) = 1.0f;
    (((struct o9C_float *)(t0))->v) = 1.0f;
    (((struct oA0_float *)(t1))->v) = 1.0f;
    (((struct o9C_float *)(t1))->v) = 1.0f;
    t0 = *(int *)(((0x118 + a4) + 0x4));
    t1 = (((struct o118_int *)(a4))->v);
    (((struct o98_float *)(t0))->v) = 1.0f;
    (((struct o98_float *)(t1))->v) = 1.0f;
    (((struct o94_float *)(t0))->v) = 1.0f;
    (((struct o94_float *)(t1))->v) = 1.0f;
    *(unsigned short *)((a4 + 0x1C)) = 0x0;
    *(unsigned short *)((a4 + 0x1E)) = 0x0;
    (((struct o20_ushort *)(a4))->v) = 0x0;
    (((struct o446_uchar *)(a4))->v) = 0x2;
    (((struct o447_uchar *)(a4))->v) = 0x3;
    (((struct o1668_uchar *)(a4))->v) = 0x0;
    (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
    return 0x17;
}

int FUN_0c090932(int a4)
{
    int stk[5];
    register int t6;
    register int t23;
    register int t45;

    *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
    if ((*(short *)((a4 + 0x1C))) == 26) {
        if ((*(signed char *)((a4 + 0x371A))) == 0) {
            *(int *)((int)stk + 12) = 0xC1C5FD4;
            *(int *)((int)stk + 8) = 0xC1C5FC8;
            *(int *)((int)stk + 4) = 0x42;
            *(int *)((int)stk + 0) = 0x70;
            FUN_0c158dc8((*(signed char *)((a4 + 0x1))), 0x1, 0xC, 0x1, 0x70, 0x42, 0xC1C5FC8, 0xC1C5FD4);
        } else {
            *(int *)((int)stk + 12) = 0xC1C5FEC;
            *(int *)((int)stk + 8) = 0xC1C5FE0;
            *(int *)((int)stk + 4) = 0x42;
            *(int *)((int)stk + 0) = 0x70;
            t6 = *(signed char *)((a4 + 0x1));
            (((struct o10_uchar *)(((int)stk + 0)))->v) = t6;
            FUN_0c15a260((*(signed char *)(((int)stk + 16))), 0x1, 0xB, (*(int *)((((((struct o8C_int *)((*(int *)((((signed char)t6 << 2) + 0xC4B40FC)))))->v)) + 0x0))), 0x70, 0x42, 0xC1C5FE0, 0xC1C5FEC);
        }
    }
    if ((*(short *)((a4 + 0x1C))) == 25) {
        FUN_0c07d030(a4, 0x2);
        FUN_0c126358(a4, 0x73);
    }
    t23 = *(short *)((a4 + 0x1C));
    if (((int)t23 > (int)0x1F) && ((int)t23 < (int)0x88)) {
        if (((int)((int)t23 % (int)0x5)) == 0) {
            FUN_0c127bfc(a4, (0x3 & (*(short *)((a4 + 0x1C)))));
            FUN_0c059e60(a4, 0x22);
        }
    }
    if ((*(short *)((a4 + 0x1C))) == 0x8C) {
        (((struct o1668_uchar *)(a4))->v) = 0x1;
        (((struct o446_uchar *)(a4))->v) = 0x0;
        (((struct o447_uchar *)(a4))->v) = 0x0;
        (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0x3C;
    }
    FUN_0c038362(a4);
    t45 = FUN_0c037bf6(a4);
    if ((unsigned char)t45 != 0) {
        return FUN_0c085d0c(a4);
    }
    return (unsigned char)t45;
}

int FUN_0c090a50(int a4)
{
    register int t0;

    if ((*(short *)((a4 + 0x1C))) != 0) {
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        return (t0 - 1);
    }
    FUN_0c038362(a4);
    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        return FUN_0c085d0c(a4);
    }
    return (unsigned char)t0;
}

int FUN_0c090ae4(int a4)
{
    register int t0;
    register int t1;

    (((struct o54_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    (((struct o50_float *)(a4))->v) = 0.0f;
    (((struct o5C_float *)(a4))->v) = (*(float *)0xC090BC0);
    t0 = *(signed char *)((a4 + 0x1));
    FUN_0c07e79c(a4, t0, 0x1, 0x1A, (t0), 0x1, 0x1A);
    t0 = *(int *)(((0x118 + a4) + 0x4));
    t1 = (((struct o118_int *)(a4))->v);
    (((struct oA0_float *)(t0))->v) = 1.0f;
    (((struct o9C_float *)(t0))->v) = 1.0f;
    (((struct oA0_float *)(t1))->v) = 1.0f;
    (((struct o9C_float *)(t1))->v) = 1.0f;
    t0 = *(int *)(((0x118 + a4) + 0x4));
    t1 = (((struct o118_int *)(a4))->v);
    (((struct o98_float *)(t0))->v) = 1.0f;
    (((struct o98_float *)(t1))->v) = 1.0f;
    (((struct o94_float *)(t0))->v) = 1.0f;
    (((struct o94_float *)(t1))->v) = 1.0f;
    *(unsigned short *)((a4 + 0x1C)) = 0x0;
    *(unsigned short *)((a4 + 0x1E)) = 0x0;
    (((struct o20_ushort *)(a4))->v) = 0x0;
    (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
    (((struct o446_uchar *)(a4))->v) = 0x2;
    (((struct o447_uchar *)(a4))->v) = 0x3;
    (((struct o1668_uchar *)(a4))->v) = 0x0;
    return 0x1668;
}

int FUN_0c090b78(int a4)
{
    int stk[5];
    register int t6;
    register int t29;
    register int t51;
    register float u21;

    *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
    if ((*(short *)((a4 + 0x1C))) == 26) {
        if ((*(signed char *)((a4 + 0x371A))) == 0) {
            *(int *)((int)stk + 12) = 0xC1C5FD4;
            *(int *)((int)stk + 8) = 0xC1C5FC8;
            *(int *)((int)stk + 4) = 0x42;
            *(int *)((int)stk + 0) = 0x70;
            FUN_0c158dc8((*(signed char *)((a4 + 0x1))), 0x1, 0xC, 0x1, 0x70, 0x42, 0xC1C5FC8, 0xC1C5FD4);
        } else {
            *(int *)((int)stk + 12) = 0xC1C5FEC;
            *(int *)((int)stk + 8) = 0xC1C5FE0;
            *(int *)((int)stk + 4) = 0x42;
            *(int *)((int)stk + 0) = 0x70;
            t6 = *(signed char *)((a4 + 0x1));
            (((struct o10_uchar *)(((int)stk + 0)))->v) = t6;
            FUN_0c15a260((*(signed char *)(((int)stk + 16))), 0x1, 0xB, (*(int *)((((((struct o8C_int *)((*(int *)((((signed char)t6 << 2) + 0xC4B40FC)))))->v)) + 0x0))), 0x70, 0x42, 0xC1C5FE0, 0xC1C5FEC);
        }
    }
    if (((*(short *)((a4 + 0x1C))) & 32) != 0) {
        u21 = ((((struct o0_float *)0xC090CF8)->v));
    } else {
        u21 = ((((struct o4_float *)0xC090CF8)->v));
    }
    (((struct o50_float *)(a4))->v) = u21;
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    if ((*(short *)((a4 + 0x1C))) == 25) {
        FUN_0c07d030(a4, 0x2);
        FUN_0c126358(a4, 0x73);
    }
    t29 = *(short *)((a4 + 0x1C));
    if (((int)t29 > (int)0x1F) && ((int)t29 < (int)0x88)) {
        if (((int)((int)t29 % (int)0x5)) == 0) {
            FUN_0c127bfc(a4, (0x3 & (*(short *)((a4 + 0x1C)))));
            FUN_0c059e60(a4, 0x22);
        }
    }
    if ((*(short *)((a4 + 0x1C))) == 0x8C) {
        (((struct o1668_uchar *)(a4))->v) = 0x1;
        (((struct o446_uchar *)(a4))->v) = 0x0;
        (((struct o447_uchar *)(a4))->v) = 0x0;
        (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
        *(unsigned short *)((a4 + 0x1E)) = 0x3C;
    }
    FUN_0c038362(a4);
    t51 = FUN_0c037bf6(a4);
    if ((unsigned char)t51 != 0) {
        return FUN_0c085d0c(a4);
    }
    return (unsigned char)t51;
}

int FUN_0c090cb8(int a4)
{
    register int t0;
    register int t1;
    register float u0;

    *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
    if ((int)(*(short *)((a4 + 0x1C))) < (int)0xD0) {
        u0 = 2.29999995f;
        if (((*(short *)((a4 + 0x1C))) & 32) != 0) {
        } else {
            u0 = ((((struct o0_float *)0xC090DF8)->v));
        }
        (((struct o50_float *)(a4))->v) = u0;
        t0 = (a4 + 0x28);
        t1 = (a4 + 0x4C);
    } else {
        if ((*(short *)((a4 + 0x1C))) == 0xD0) {
            (((struct o50_float *)(a4))->v) = ((((struct o4_float *)0xC090DF8)->v));
            (((struct o5C_float *)(a4))->v) = -1.0f;
            t0 = (a4 + 0x28);
            t1 = (a4 + 0x4C);
        } else {
            math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
            t0 = (a4 + 0x4C);
            t1 = (a4 + 0x58);
        }
    }
    math_vec3_accumulate(t0, t1);
    if ((*(short *)((a4 + 0x1E))) != 0) {
        t0 = *(short *)((a4 + 0x1E));
        *(unsigned short *)((a4 + 0x1E)) = (t0 - 1);
        return (t0 - 1);
    }
    FUN_0c038362(a4);
    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        return FUN_0c085d0c(a4);
    }
    return (unsigned char)t0;
}

int FUN_0c090dbc(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x375A));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        if (t0 != 5) {
                            return t0;
                        }
                        return ((int (*)(int, int, int, int))(0xC090578))(a4, a5, a6, a7);
                    }
                    return ((int (*)(int, int, int, int))(0xC090D98))(a4, a5, a6, a7);
                }
                return ((int (*)(int, int, int, int))(0xC090868))(a4, a5, a6, a7);
            }
            return ((int (*)(int, int, int, int))(0xC090578))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC090AC0))(a4, a5, a6, a7);
    }
    return FUN_0c08fee4(a4);
}
