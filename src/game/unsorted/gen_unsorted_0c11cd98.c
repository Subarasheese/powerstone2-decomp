/* game/unsorted: functions 0C11CD98-0C11E19C, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_int { char p[0x10]; int v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o2C_int { char p[0x2C]; int v; };
struct o30_int { char p[0x30]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oC_int { char p[0xC]; int v; };
struct oD0_int { char p[0xD0]; int v; };
struct oD4_int { char p[0xD4]; int v; };
struct oD8_int { char p[0xD8]; int v; };
struct oDC_int { char p[0xDC]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c05258e(int, int, int, int, int);
int FUN_0c058a6e(int, int, int, int, int, int);
int FUN_0c05a080(int, int);
int FUN_0c05afc8(int, int, int);
int FUN_0c0cff96(int, int);
int FUN_0c11a22e(int, int, int);
int FUN_0c11aed4(int, int, int);
int FUN_0c11b374(int, int);
int FUN_0c11b6ba(int);
int FUN_0c11bae2(int, int);
int FUN_0c11c036(int, int);
int FUN_0c11c2a8(int, int);
int FUN_0c11c4c8(int);
int FUN_0c11c672(int, int);
int FUN_0c11c7ac(int);
int FUN_0c11c8b2(void);
int FUN_0c11c8be(int);
int FUN_0c11cb1c(int);
int FUN_0c11cc74(int);
float math_cos_angle16(int);
int FUN_0c179ac0(void);
float math_sin_angle16(int);
int FUN_0c187798(void);
int FUN_0c11cd98(int a4);
int FUN_0c11cdfc(int a4, int a5, int a6, int a7);
int FUN_0c11cffe(int a4);
void FUN_0c11d032(int a4, int a5, int a6, int a7, float f4, float f5, float f6);
int FUN_0c11dbaa(void);
int FUN_0c11dbdc(int a4, int a5, int a6, int a7);
int FUN_0c11dc7e(void);
int FUN_0c11dcb0(int a4, int a5, int a6, int a7);

int FUN_0c11cd98(int a4)
{
    register int t0;
    register int t1;

    t0 = FUN_0c037320(0x21, (*(int *)0xC4B410C));
    t1 = FUN_0c03f444(0x5, 0x1, t0);
    t0 = t1;
    if (t1 != 0) {
        *(unsigned char *)((t1 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t1 + 0x4)) = 0xC11CCD0;
        *(unsigned int *)((t1 + 0x10)) = a4;
        t0 = 0xFFFFFFFF;
    }
    return t0;
}

int FUN_0c11cdfc(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    if ((*(signed char *)((0x14 + (*(int *)((a4 + 0x10)))))) != 2) {
        (((struct o14_uchar *)(a4))->v) = 0x63;
    }
    t0 = *(signed char *)((a4 + 0x14));
    switch (t0) {
    case 0:
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0x0;
        FUN_0c03733c(a4, 0x20, (*(int *)0xC4B410C));
        (((struct oA8_uchar *)(a4))->v) = 0x0;
        (((struct oAC_ushort *)(a4))->v) = 0x21F;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        t0 = ((int (*)(void))(FUN_0c187798))();
        t0 = ((int (*)(int))(FUN_0c187798))(((((struct oC4_int *)(a4))->v)));
        t0 = ((int (*)(int))(FUN_0c187798))(((((struct oC8_int *)(a4))->v)));
        t0 = ((int (*)(int))(FUN_0c187798))(((((struct oCC_int *)(a4))->v)));
        t0 = ((int (*)(int))(FUN_0c187798))(((((struct oD0_int *)(a4))->v)));
        t0 = ((int (*)(int))(FUN_0c187798))(((((struct oD4_int *)(a4))->v)));
        t0 = ((int (*)(int))(FUN_0c187798))(((((struct oD8_int *)(a4))->v)));
        t0 = ((int (*)(int))(FUN_0c187798))(((((struct oDC_int *)(a4))->v)));
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        break;
    case 1:
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        break;
    case 2:
        break;
    default:
        if (t0 == 99) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        return t0;
    }
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    if ((int)(*(short *)((a4 + 0x1C))) < (int)0x64) {
        FUN_0c058a6e((0xB0 + a4), 0xC2A0CA0, 0xC2A0C90, (*(short *)((a4 + 0x1C))), 0x64, 0x0);
    }
    FUN_0c0cff96((*(int *)((((((struct oC4_int *)(a4))->v)) + 0x8))), 0xC29232C);
    FUN_0c0cff96((*(int *)((((((struct oC8_int *)(a4))->v)) + 0x8))), 0xC292344);
    FUN_0c0cff96((*(int *)((((((struct oCC_int *)(a4))->v)) + 0x8))), 0xC29235C);
    FUN_0c0cff96((*(int *)((((((struct oD0_int *)(a4))->v)) + 0x8))), 0xC292374);
    FUN_0c0cff96((*(int *)((((((struct oD4_int *)(a4))->v)) + 0x8))), 0xC29238C);
    FUN_0c0cff96((*(int *)((((((struct oD4_int *)(a4))->v)) + 0x8))), 0xC2923A4);
    FUN_0c0cff96((*(int *)((((((struct oD4_int *)(a4))->v)) + 0x8))), 0xC2923BC);
    t0 = *(short *)((a4 + 0x1C));
    if (((int)t0 >= (int)0x65) && ((int)t0 <= (int)0xC8)) {
        FUN_0c058a6e((0xB0 + a4), 0xC2A0C90, 0xC2A0CA0, (*(short *)((a4 + 0x1C))), 0xC8, 0x64);
    }
    t0 = *(short *)((a4 + 0x1C));
    t1 = t0;
    if ((int)t0 < (int)0xC8) {
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int FUN_0c11cffe(int a4)
{
    register int t0;
    register int t1;

    t0 = FUN_0c037320(0x20, (*(int *)0xC4B410C));
    t1 = FUN_0c03f444(0x5, 0x1, t0);
    t0 = t1;
    if (t1 != 0) {
        *(unsigned char *)((t1 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t1 + 0x4)) = 0xC11CDFC;
        *(unsigned int *)((t1 + 0x10)) = a4;
        t0 = 0xFFFFFFFF;
    }
    return t0;
}

void FUN_0c11d032(int a4, int a5, int a6, int a7, float f4, float f5, float f6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;
    register float u1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 == 1) {
            return;
        }
        if (t0 == 2) {
            t1 = FUN_0c179ac0();
            t2 = ((~(((~t1) + 0x1) & 0xF)) + 0x1);
            if ((int)t1 >= 0) {
                t2 = (t1 & 0xF);
            }
            t1 = (((struct oD0_int *)(a4))->v);
            t3 = ((int (*)(void))(FUN_0c187798))();
            u0 = (((float)t2 * 360.0f) / 16.0f);
            u1 = ((u0 * 65536.0f) / 360.0f);
            u0 = ((((struct o6C_float *)(t1))->v));
            u0 = u0 + ((((struct o0_float *)0xC29242C)->v)) * (math_cos_angle16(((int)(u1 + 0.5f) & 0xFFFF)));
            (((struct o6C_float *)(t1))->v) = u0;
            u0 = ((((struct o70_float *)(t1))->v));
            u0 = u0 + ((((struct o0_float *)0xC29242C)->v)) * (math_sin_angle16(((int)(u1 + 0.5f) & 0xFFFF)));
            (((struct o70_float *)(t1))->v) = u0;
            t1 = FUN_0c179ac0();
            t2 = ((~(((~t1) + 0x1) & 0xF)) + 0x1);
            if ((int)t1 >= 0) {
                t2 = (t1 & 0xF);
            }
            t1 = (((struct oD8_int *)(a4))->v);
            t3 = ((int (*)(void))(FUN_0c187798))();
            u0 = (((float)t2 * 360.0f) / 16.0f);
            u1 = ((u0 * 65536.0f) / 360.0f);
            u0 = ((((struct o6C_float *)(t1))->v));
            u0 = u0 + ((((struct o0_float *)0xC29242C)->v)) * (math_cos_angle16(((int)(u1 + 0.5f) & 0xFFFF)));
            (((struct o6C_float *)(t1))->v) = u0;
            u0 = ((((struct o70_float *)(t1))->v));
            u0 = u0 + ((((struct o0_float *)0xC29242C)->v)) * (math_sin_angle16(((int)(u1 + 0.5f) & 0xFFFF)));
            (((struct o70_float *)(t1))->v) = u0;
            t1 = FUN_0c179ac0();
            t2 = ((~(((~t1) + 0x1) & 0xF)) + 0x1);
            if ((int)t1 >= 0) {
                t2 = (t1 & 0xF);
            }
            t1 = (((struct oD4_int *)(a4))->v);
            t3 = ((int (*)(void))(FUN_0c187798))();
            u0 = (((float)t2 * 360.0f) / 16.0f);
            u1 = ((u0 * 65536.0f) / 360.0f);
            u0 = ((((struct o6C_float *)(t1))->v));
            u0 = u0 + ((((struct o0_float *)0xC29242C)->v)) * (math_cos_angle16(((int)(u1 + 0.5f) & 0xFFFF)));
            (((struct o6C_float *)(t1))->v) = u0;
            u0 = ((((struct o70_float *)(t1))->v));
            u0 = u0 + ((((struct o0_float *)0xC29242C)->v)) * (math_sin_angle16(((int)(u1 + 0.5f) & 0xFFFF)));
            (((struct o70_float *)(t1))->v) = u0;
            t1 = FUN_0c179ac0();
            t2 = ((~(((~t1) + 0x1) & 0xF)) + 0x1);
            if ((int)t1 >= 0) {
                t2 = (t1 & 0xF);
            }
            t1 = (((struct oDC_int *)(a4))->v);
            t3 = ((int (*)(void))(FUN_0c187798))();
            u0 = (((float)t2 * 360.0f) / 16.0f);
            u1 = ((u0 * 65536.0f) / 360.0f);
            u0 = ((((struct o6C_float *)(t1))->v));
            u0 = u0 + ((((struct o0_float *)0xC29242C)->v)) * (math_cos_angle16(((int)(u1 + 0.5f) & 0xFFFF)));
            (((struct o6C_float *)(t1))->v) = u0;
            u0 = ((((struct o70_float *)(t1))->v));
            u0 = u0 + ((((struct o0_float *)0xC29242C)->v)) * (math_sin_angle16(((int)(u1 + 0.5f) & 0xFFFF)));
            (((struct o70_float *)(t1))->v) = u0;
            return;
        }
        if (t0 == 3) {
            t1 = FUN_0c179ac0();
            t2 = ((~(((~t1) + 0x1) & 0xF)) + 0x1);
            if ((int)t1 >= 0) {
                t2 = (t1 & 0xF);
            }
            t1 = (((struct oD0_int *)(a4))->v);
            t3 = ((int (*)(void))(FUN_0c187798))();
            u0 = (((float)t2 * 360.0f) / 16.0f);
            u1 = ((u0 * 65536.0f) / 360.0f);
            u0 = ((((struct o6C_float *)(t1))->v));
            u0 = u0 + ((((struct o4_float *)0xC29242C)->v)) * (math_cos_angle16(((int)(u1 + 0.5f) & 0xFFFF)));
            (((struct o6C_float *)(t1))->v) = u0;
            u0 = ((((struct o70_float *)(t1))->v));
            u0 = u0 + ((((struct o4_float *)0xC29242C)->v)) * (math_sin_angle16(((int)(u1 + 0.5f) & 0xFFFF)));
            (((struct o70_float *)(t1))->v) = u0;
            t1 = FUN_0c179ac0();
            t2 = ((~(((~t1) + 0x1) & 0xF)) + 0x1);
            if ((int)t1 >= 0) {
                t2 = (t1 & 0xF);
            }
            t1 = (((struct oD8_int *)(a4))->v);
            t3 = ((int (*)(void))(FUN_0c187798))();
            u0 = (((float)t2 * 360.0f) / 16.0f);
            u1 = ((u0 * 65536.0f) / 360.0f);
            u0 = ((((struct o6C_float *)(t1))->v));
            u0 = u0 + ((((struct o4_float *)0xC29242C)->v)) * (math_cos_angle16(((int)(u1 + 0.5f) & 0xFFFF)));
            (((struct o6C_float *)(t1))->v) = u0;
            u0 = ((((struct o70_float *)(t1))->v));
            u0 = u0 + ((((struct o4_float *)0xC29242C)->v)) * (math_sin_angle16(((int)(u1 + 0.5f) & 0xFFFF)));
            (((struct o70_float *)(t1))->v) = u0;
            t1 = FUN_0c179ac0();
            t2 = ((~(((~t1) + 0x1) & 0xF)) + 0x1);
            if ((int)t1 >= 0) {
                t2 = (t1 & 0xF);
            }
            t1 = (((struct oD4_int *)(a4))->v);
            t3 = ((int (*)(void))(FUN_0c187798))();
            u0 = (((float)t2 * 360.0f) / 16.0f);
            u1 = ((u0 * 65536.0f) / 360.0f);
            u0 = ((((struct o6C_float *)(t1))->v));
            u0 = u0 + ((((struct o4_float *)0xC29242C)->v)) * (math_cos_angle16(((int)(u1 + 0.5f) & 0xFFFF)));
            (((struct o6C_float *)(t1))->v) = u0;
            u0 = ((((struct o70_float *)(t1))->v));
            u0 = u0 + ((((struct o4_float *)0xC29242C)->v)) * (math_sin_angle16(((int)(u1 + 0.5f) & 0xFFFF)));
            (((struct o70_float *)(t1))->v) = u0;
            t1 = FUN_0c179ac0();
            t2 = ((~(((~t1) + 0x1) & 0xF)) + 0x1);
            if ((int)t1 >= 0) {
                t2 = (t1 & 0xF);
            }
            t1 = (((struct oDC_int *)(a4))->v);
            t3 = ((int (*)(void))(FUN_0c187798))();
            u0 = (((float)t2 * 360.0f) / 16.0f);
            u1 = ((u0 * 65536.0f) / 360.0f);
            u0 = ((((struct o6C_float *)(t1))->v));
            u0 = u0 + ((((struct o4_float *)0xC29242C)->v)) * (math_cos_angle16(((int)(u1 + 0.5f) & 0xFFFF)));
            (((struct o6C_float *)(t1))->v) = u0;
            u0 = ((((struct o70_float *)(t1))->v));
            u0 = u0 + ((((struct o4_float *)0xC29242C)->v)) * (math_sin_angle16(((int)(u1 + 0.5f) & 0xFFFF)));
            (((struct o70_float *)(t1))->v) = u0;
            return;
        }
        if (t0 == 4) {
            t1 = FUN_0c179ac0();
            t2 = ((~(((~t1) + 0x1) & 0xF)) + 0x1);
            if ((int)t1 >= 0) {
                t2 = (t1 & 0xF);
            }
            t1 = (((struct oD0_int *)(a4))->v);
            t3 = ((int (*)(void))(FUN_0c187798))();
            u0 = (((float)t2 * 360.0f) / 16.0f);
            u1 = ((u0 * 65536.0f) / 360.0f);
            u0 = ((((struct o6C_float *)(t1))->v));
            u0 = u0 + ((((struct o0_float *)0xC29242C)->v)) * (math_cos_angle16(((int)(u1 + 0.5f) & 0xFFFF)));
            (((struct o6C_float *)(t1))->v) = u0;
            u0 = ((((struct o70_float *)(t1))->v));
            u0 = u0 + ((((struct o0_float *)0xC29242C)->v)) * (math_sin_angle16(((int)(u1 + 0.5f) & 0xFFFF)));
            (((struct o70_float *)(t1))->v) = u0;
            t1 = FUN_0c179ac0();
            t2 = ((~(((~t1) + 0x1) & 0xF)) + 0x1);
            if ((int)t1 >= 0) {
                t2 = (t1 & 0xF);
            }
            t1 = (((struct oD8_int *)(a4))->v);
            t3 = ((int (*)(void))(FUN_0c187798))();
            u0 = (((float)t2 * 360.0f) / 16.0f);
            u1 = ((u0 * 65536.0f) / 360.0f);
            u0 = ((((struct o6C_float *)(t1))->v));
            u0 = u0 + ((((struct o0_float *)0xC29242C)->v)) * (math_cos_angle16(((int)(u1 + 0.5f) & 0xFFFF)));
            (((struct o6C_float *)(t1))->v) = u0;
            u0 = ((((struct o70_float *)(t1))->v));
            u0 = u0 + ((((struct o0_float *)0xC29242C)->v)) * (math_sin_angle16(((int)(u1 + 0.5f) & 0xFFFF)));
            (((struct o70_float *)(t1))->v) = u0;
            t1 = FUN_0c179ac0();
            t2 = ((~(((~t1) + 0x1) & 0xF)) + 0x1);
            if ((int)t1 >= 0) {
                t2 = (t1 & 0xF);
            }
            t1 = (((struct oD4_int *)(a4))->v);
            t3 = ((int (*)(void))(FUN_0c187798))();
            u0 = (((float)t2 * 360.0f) / 16.0f);
            u1 = ((u0 * 65536.0f) / 360.0f);
            u0 = ((((struct o6C_float *)(t1))->v));
            u0 = u0 + ((((struct o0_float *)0xC29242C)->v)) * (math_cos_angle16(((int)(u1 + 0.5f) & 0xFFFF)));
            (((struct o6C_float *)(t1))->v) = u0;
            u0 = ((((struct o70_float *)(t1))->v));
            u0 = u0 + ((((struct o0_float *)0xC29242C)->v)) * (math_sin_angle16(((int)(u1 + 0.5f) & 0xFFFF)));
            (((struct o70_float *)(t1))->v) = u0;
            t1 = FUN_0c179ac0();
            t2 = ((~(((~t1) + 0x1) & 0xF)) + 0x1);
            if ((int)t1 >= 0) {
                t2 = (t1 & 0xF);
            }
            t1 = (((struct oDC_int *)(a4))->v);
            t3 = ((int (*)(void))(FUN_0c187798))();
            u0 = (((float)t2 * 360.0f) / 16.0f);
            u1 = ((u0 * 65536.0f) / 360.0f);
            u0 = ((((struct o6C_float *)(t1))->v));
            u0 = u0 + ((((struct o0_float *)0xC29242C)->v)) * (math_cos_angle16(((int)(u1 + 0.5f) & 0xFFFF)));
            (((struct o6C_float *)(t1))->v) = u0;
            u0 = ((((struct o70_float *)(t1))->v));
            u0 = u0 + ((((struct o0_float *)0xC29242C)->v)) * (math_sin_angle16(((int)(u1 + 0.5f) & 0xFFFF)));
            (((struct o70_float *)(t1))->v) = u0;
            t1 = FUN_0c179ac0();
            t2 = ((~(((~t1) + 0x1) & 0xF)) + 0x1);
            if ((int)t1 >= 0) {
                t2 = (t1 & 0xF);
            }
            t1 = (((struct oC8_int *)(a4))->v);
            t3 = ((int (*)(void))(FUN_0c187798))();
            u0 = (((float)t2 * 360.0f) / 16.0f);
            u1 = ((u0 * 65536.0f) / 360.0f);
            u0 = ((((struct o6C_float *)(t1))->v));
            u0 = u0 + ((((struct o8_float *)0xC29242C)->v)) * (math_cos_angle16(((int)(u1 + 0.5f) & 0xFFFF)));
            (((struct o6C_float *)(t1))->v) = u0;
            u0 = ((((struct o70_float *)(t1))->v));
            u0 = u0 + ((((struct o8_float *)0xC29242C)->v)) * (math_sin_angle16(((int)(u1 + 0.5f) & 0xFFFF)));
            (((struct o70_float *)(t1))->v) = u0;
            t1 = FUN_0c179ac0();
            t2 = ((~(((~t1) + 0x1) & 0xF)) + 0x1);
            if ((int)t1 >= 0) {
                t2 = (t1 & 0xF);
            }
            t1 = (((struct oCC_int *)(a4))->v);
            t3 = ((int (*)(void))(FUN_0c187798))();
            u0 = (((float)t2 * 360.0f) / 16.0f);
            u1 = ((u0 * 65536.0f) / 360.0f);
            u0 = ((((struct o6C_float *)(t1))->v));
            u0 = u0 + ((((struct o8_float *)0xC29242C)->v)) * (math_cos_angle16(((int)(u1 + 0.5f) & 0xFFFF)));
            (((struct o6C_float *)(t1))->v) = u0;
            u0 = ((((struct o70_float *)(t1))->v));
            u0 = u0 + ((((struct o8_float *)0xC29242C)->v)) * (math_sin_angle16(((int)(u1 + 0.5f) & 0xFFFF)));
            (((struct o70_float *)(t1))->v) = u0;
            return;
        }
        if (t0 == 5) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            (((struct o15_uchar *)(a4))->v) = 0x0;
            t1 = *(signed char *)((a4 + 0x15));
            if (t1 != 0) {
                if (t1 != 1) {
                    return;
                }
                u0 = (((float)(*(short *)((a4 + 0x1E))) * 90.0f) / 60.0f);
                (((struct o78_uint *)(((((struct oC8_int *)(a4))->v))))->v) = ((int)((((u0 * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF);
                t1 = *(short *)((a4 + 0x1E));
                *(unsigned short *)((a4 + 0x1E)) = (t1 + 0x1);
                if ((int)(short)(t1 + 0x1) <= (int)0x3C) {
                    return;
                }
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                FUN_0c05258e(0x2, 0x14, 0x100, 0x1E, 0x0);
                FUN_0c05a080(0xD, 0x0);
    return;
            }
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            *(unsigned short *)((a4 + 0x1E)) = 0x0;
            t1 = ((int (*)(int, int, int))(FUN_0c187798))(((((struct oD0_int *)(a4))->v)), a5, a6);
            t1 = ((int (*)(int))(FUN_0c187798))(((((struct oD8_int *)(a4))->v)));
            t1 = ((int (*)(int))(FUN_0c187798))(((((struct oD4_int *)(a4))->v)));
            t1 = ((int (*)(int))(FUN_0c187798))(((((struct oDC_int *)(a4))->v)));
            t1 = ((int (*)(int))(FUN_0c187798))(((((struct oC8_int *)(a4))->v)));
            t1 = ((int (*)(int))(FUN_0c187798))(((((struct oCC_int *)(a4))->v)));
            u0 = (((float)(*(short *)((a4 + 0x1E))) * f4) / f6);
            (((struct o78_uint *)(((((struct oC8_int *)(a4))->v))))->v) = ((int)((((u0 * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF);
            t1 = *(short *)((a4 + 0x1E));
            *(unsigned short *)((a4 + 0x1E)) = (t1 + 0x1);
            if ((int)(short)(t1 + 0x1) <= (int)0x3C) {
                return;
            }
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            FUN_0c05258e(0x2, 0x14, 0x100, 0x1E, 0x0);
            FUN_0c05a080(0xD, 0x0);
    return;
        }
        if (t0 == 6) {
            t1 = *(signed char *)((a4 + 0x15));
            if (t1 != 0) {
                if (t1 != 1) {
                    return;
                }
                u0 = (((float)(*(short *)((a4 + 0x1E))) * 90.0f) / 60.0f);
                (((struct o78_uint *)(((((struct oC8_int *)(a4))->v))))->v) = ((int)((((u0 * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF);
                t1 = *(short *)((a4 + 0x1E));
                *(unsigned short *)((a4 + 0x1E)) = (t1 + 0x1);
                if ((int)(short)(t1 + 0x1) <= (int)0x3C) {
                    return;
                }
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                FUN_0c05258e(0x2, 0x14, 0x100, 0x1E, 0x0);
                FUN_0c05a080(0xD, 0x0);
    return;
            }
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            *(unsigned short *)((a4 + 0x1E)) = 0x0;
            t1 = ((int (*)(int, int, int))(FUN_0c187798))(((((struct oD0_int *)(a4))->v)), a5, a6);
            t1 = ((int (*)(int))(FUN_0c187798))(((((struct oD8_int *)(a4))->v)));
            t1 = ((int (*)(int))(FUN_0c187798))(((((struct oD4_int *)(a4))->v)));
            t1 = ((int (*)(int))(FUN_0c187798))(((((struct oDC_int *)(a4))->v)));
            t1 = ((int (*)(int))(FUN_0c187798))(((((struct oC8_int *)(a4))->v)));
            t1 = ((int (*)(int))(FUN_0c187798))(((((struct oCC_int *)(a4))->v)));
            u0 = (((float)(*(short *)((a4 + 0x1E))) * f4) / f6);
            (((struct o78_uint *)(((((struct oC8_int *)(a4))->v))))->v) = ((int)((((u0 * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF);
            t1 = *(short *)((a4 + 0x1E));
            *(unsigned short *)((a4 + 0x1E)) = (t1 + 0x1);
            if ((int)(short)(t1 + 0x1) <= (int)0x3C) {
                return;
            }
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            FUN_0c05258e(0x2, 0x14, 0x100, 0x1E, 0x0);
            FUN_0c05a080(0xD, 0x0);
    return;
        }
        if (t0 == 7) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            (((struct o15_uchar *)(a4))->v) = 0x0;
            t1 = *(signed char *)((a4 + 0x15));
            if (t1 != 0) {
                if (t1 != 1) {
                    return;
                }
                u0 = (-(((float)(*(short *)((a4 + 0x1E))) * 90.0f) / 60.0f));
                (((struct o78_uint *)(((((struct oC8_int *)(a4))->v))))->v) = ((int)(((((u0 + 90.0f) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF);
                t1 = *(short *)((a4 + 0x1E));
                *(unsigned short *)((a4 + 0x1E)) = (t1 + 0x1);
                if ((int)(short)(t1 + 0x1) <= (int)0x3C) {
                    return;
                }
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                FUN_0c05258e(0x2, 0x14, 0x100, 0x1E, 0x0);
                FUN_0c05a080(0xD, 0x0);
    return;
            }
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            *(unsigned short *)((a4 + 0x1E)) = 0x0;
            u0 = (-(((float)(*(short *)((a4 + 0x1E))) * 90.0f) / 60.0f));
            (((struct o78_uint *)(((((struct oC8_int *)(a4))->v))))->v) = ((int)(((((u0 + 90.0f) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF);
            t1 = *(short *)((a4 + 0x1E));
            *(unsigned short *)((a4 + 0x1E)) = (t1 + 0x1);
            if ((int)(short)(t1 + 0x1) <= (int)0x3C) {
                return;
            }
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            FUN_0c05258e(0x2, 0x14, 0x100, 0x1E, 0x0);
            FUN_0c05a080(0xD, 0x0);
    return;
        }
        if (t0 == 8) {
            t1 = *(signed char *)((a4 + 0x15));
            if (t1 != 0) {
                if (t1 != 1) {
                    return;
                }
                u0 = (-(((float)(*(short *)((a4 + 0x1E))) * 90.0f) / 60.0f));
                (((struct o78_uint *)(((((struct oC8_int *)(a4))->v))))->v) = ((int)(((((u0 + 90.0f) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF);
                t1 = *(short *)((a4 + 0x1E));
                *(unsigned short *)((a4 + 0x1E)) = (t1 + 0x1);
                if ((int)(short)(t1 + 0x1) <= (int)0x3C) {
                    return;
                }
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                FUN_0c05258e(0x2, 0x14, 0x100, 0x1E, 0x0);
                FUN_0c05a080(0xD, 0x0);
    return;
            }
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            *(unsigned short *)((a4 + 0x1E)) = 0x0;
            u0 = (-(((float)(*(short *)((a4 + 0x1E))) * 90.0f) / 60.0f));
            (((struct o78_uint *)(((((struct oC8_int *)(a4))->v))))->v) = ((int)(((((u0 + 90.0f) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF);
            t1 = *(short *)((a4 + 0x1E));
            *(unsigned short *)((a4 + 0x1E)) = (t1 + 0x1);
            if ((int)(short)(t1 + 0x1) <= (int)0x3C) {
                return;
            }
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            FUN_0c05258e(0x2, 0x14, 0x100, 0x1E, 0x0);
            FUN_0c05a080(0xD, 0x0);
    return;
        }
        if (t0 == 11) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            (((struct o15_uchar *)(a4))->v) = 0x0;
            t1 = *(signed char *)((a4 + 0x15));
            if (t1 != 0) {
                if (t1 != 1) {
                } else {
                    u0 = (((float)(*(short *)((a4 + 0x1E))) * 90.0f) / 30.0f);
                    (((struct o7C_uint *)(((((struct oCC_int *)(a4))->v))))->v) = ((int)((((u0 * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF);
                    t1 = *(short *)((a4 + 0x1E));
                    *(unsigned short *)((a4 + 0x1E)) = (t1 + 0x1);
                    if ((int)(short)(t1 + 0x1) > (int)0x1E) {
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    }
                }
            } else {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                *(unsigned short *)((a4 + 0x1E)) = 0x0;
                t1 = ((int (*)(int, int, int))(FUN_0c187798))(((((struct oD0_int *)(a4))->v)), a5, a6);
                t1 = ((int (*)(int))(FUN_0c187798))(((((struct oD8_int *)(a4))->v)));
                t1 = ((int (*)(int))(FUN_0c187798))(((((struct oD4_int *)(a4))->v)));
                t1 = ((int (*)(int))(FUN_0c187798))(((((struct oDC_int *)(a4))->v)));
                t1 = ((int (*)(int))(FUN_0c187798))(((((struct oC8_int *)(a4))->v)));
                t1 = ((int (*)(int))(FUN_0c187798))(((((struct oCC_int *)(a4))->v)));
                u0 = (((float)(*(short *)((a4 + 0x1E))) * f4) / f5);
                (((struct o7C_uint *)(((((struct oCC_int *)(a4))->v))))->v) = ((int)((((u0 * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF);
                t1 = *(short *)((a4 + 0x1E));
                *(unsigned short *)((a4 + 0x1E)) = (t1 + 0x1);
                if ((int)(short)(t1 + 0x1) > (int)0x1E) {
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                }
            }
            return;
        }
        if (t0 == 12) {
            t1 = *(signed char *)((a4 + 0x15));
            if (t1 != 0) {
                if (t1 != 1) {
                } else {
                    u0 = (((float)(*(short *)((a4 + 0x1E))) * 90.0f) / 30.0f);
                    (((struct o7C_uint *)(((((struct oCC_int *)(a4))->v))))->v) = ((int)((((u0 * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF);
                    t1 = *(short *)((a4 + 0x1E));
                    *(unsigned short *)((a4 + 0x1E)) = (t1 + 0x1);
                    if ((int)(short)(t1 + 0x1) > (int)0x1E) {
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    }
                }
            } else {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                *(unsigned short *)((a4 + 0x1E)) = 0x0;
                t1 = ((int (*)(int, int, int))(FUN_0c187798))(((((struct oD0_int *)(a4))->v)), a5, a6);
                t1 = ((int (*)(int))(FUN_0c187798))(((((struct oD8_int *)(a4))->v)));
                t1 = ((int (*)(int))(FUN_0c187798))(((((struct oD4_int *)(a4))->v)));
                t1 = ((int (*)(int))(FUN_0c187798))(((((struct oDC_int *)(a4))->v)));
                t1 = ((int (*)(int))(FUN_0c187798))(((((struct oC8_int *)(a4))->v)));
                t1 = ((int (*)(int))(FUN_0c187798))(((((struct oCC_int *)(a4))->v)));
                u0 = (((float)(*(short *)((a4 + 0x1E))) * f4) / f5);
                (((struct o7C_uint *)(((((struct oCC_int *)(a4))->v))))->v) = ((int)((((u0 * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF);
                t1 = *(short *)((a4 + 0x1E));
                *(unsigned short *)((a4 + 0x1E)) = (t1 + 0x1);
                if ((int)(short)(t1 + 0x1) > (int)0x1E) {
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                }
            }
            return;
        }
        if (t0 == 13) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            (((struct o15_uchar *)(a4))->v) = 0x0;
            t1 = *(signed char *)((a4 + 0x15));
            if (t1 != 0) {
                if (t1 != 1) {
                } else {
                    u0 = (-(((float)(*(short *)((a4 + 0x1E))) * 90.0f) / 30.0f));
                    (((struct o7C_uint *)(((((struct oCC_int *)(a4))->v))))->v) = ((int)(((((u0 + 90.0f) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF);
                    t1 = *(short *)((a4 + 0x1E));
                    *(unsigned short *)((a4 + 0x1E)) = (t1 + 0x1);
                    if ((int)(short)(t1 + 0x1) > (int)0x1E) {
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    }
                }
            } else {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                *(unsigned short *)((a4 + 0x1E)) = 0x0;
                u0 = (-(((float)(*(short *)((a4 + 0x1E))) * 90.0f) / 30.0f));
                (((struct o7C_uint *)(((((struct oCC_int *)(a4))->v))))->v) = ((int)(((((u0 + 90.0f) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF);
                t1 = *(short *)((a4 + 0x1E));
                *(unsigned short *)((a4 + 0x1E)) = (t1 + 0x1);
                if ((int)(short)(t1 + 0x1) > (int)0x1E) {
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                }
            }
            return;
        }
        if (t0 == 14) {
            t1 = *(signed char *)((a4 + 0x15));
            if (t1 != 0) {
                if (t1 != 1) {
                } else {
                    u0 = (-(((float)(*(short *)((a4 + 0x1E))) * 90.0f) / 30.0f));
                    (((struct o7C_uint *)(((((struct oCC_int *)(a4))->v))))->v) = ((int)(((((u0 + 90.0f) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF);
                    t1 = *(short *)((a4 + 0x1E));
                    *(unsigned short *)((a4 + 0x1E)) = (t1 + 0x1);
                    if ((int)(short)(t1 + 0x1) > (int)0x1E) {
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    }
                }
            } else {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                *(unsigned short *)((a4 + 0x1E)) = 0x0;
                u0 = (-(((float)(*(short *)((a4 + 0x1E))) * 90.0f) / 30.0f));
                (((struct o7C_uint *)(((((struct oCC_int *)(a4))->v))))->v) = ((int)(((((u0 + 90.0f) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF);
                t1 = *(short *)((a4 + 0x1E));
                *(unsigned short *)((a4 + 0x1E)) = (t1 + 0x1);
                if ((int)(short)(t1 + 0x1) > (int)0x1E) {
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                }
            }
            return;
        }
        if (t0 == 10) {
            FUN_0c03f346(a4, a5, a6, a7);
    return;
        }
        switch (t0) {
        case 20:
            (((struct o14_uchar *)(a4))->v) = 0x0;
            (((struct oA8_uchar *)(a4))->v) = 0x1;
            break;
        case 30:
            (((struct oA8_uchar *)(a4))->v) = 0x0;
            break;
        case 99:
            (((struct o14_uchar *)(a4))->v) = 0xA;
            break;
        }
        return;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    *(unsigned short *)((a4 + 0x1C)) = 0x0;
    FUN_0c03733c(a4, 0x14, (*(int *)0xC4B410C));
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct oAC_ushort *)(a4))->v) = 0x1F;
    (((struct oA9_uchar *)(a4))->v) = 0x21;
    t0 = ((int (*)(void))(FUN_0c187798))();
    t0 = ((int (*)(int))(FUN_0c187798))(((((struct oC4_int *)(a4))->v)));
    t0 = ((int (*)(int))(FUN_0c187798))(((((struct oC8_int *)(a4))->v)));
    t0 = ((int (*)(int))(FUN_0c187798))(((((struct oCC_int *)(a4))->v)));
    t0 = ((int (*)(int))(FUN_0c187798))(((((struct oD0_int *)(a4))->v)));
    t0 = ((int (*)(int))(FUN_0c187798))(((((struct oD8_int *)(a4))->v)));
    t0 = ((int (*)(int))(FUN_0c187798))(((((struct oD4_int *)(a4))->v)));
    t0 = ((int (*)(int))(FUN_0c187798))(((((struct oDC_int *)(a4))->v)));
}

int FUN_0c11dbaa(void)
{
    register int t1;
    register int t2;

    t1 = FUN_0c037320(0x14, (*(int *)0xC4B410C));
    t2 = FUN_0c03f444(0x5, 0x1, t1);
    if (t2 != 0) {
        *(unsigned char *)((t2 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t2 + 0x4)) = 0xC11D032;
        return t2;
    }
    return 0x0;
}

int FUN_0c11dbdc(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if ((t0 != 1) && (t0 != 2)) {
            if (t0 != 10) {
                if (t0 != 20) {
                    if (t0 != 30) {
                        t1 = t0;
                        if (t0 != 99) {
                        } else {
                            (((struct o14_uchar *)(a4))->v) = 0xA;
                            t1 = 0x14;
                        }
                        t2 = t1;
                    } else {
                        (((struct oA8_uchar *)(a4))->v) = 0x0;
                        t2 = 0xA8;
                    }
                    t1 = t2;
                } else {
                    (((struct o14_uchar *)(a4))->v) = 0x0;
                    (((struct oA8_uchar *)(a4))->v) = 0x1;
                    t1 = 0xA8;
                }
                return t1;
            }
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        return t0;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    FUN_0c03733c(a4, 0x15, (*(int *)0xC4B410C));
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct oAC_ushort *)(a4))->v) = 0x1F;
    (((struct oA9_uchar *)(a4))->v) = 0x21;
    return (FUN_0c187798());
}

int FUN_0c11dc7e(void)
{
    register int t1;
    register int t2;

    t1 = FUN_0c037320(0x15, (*(int *)0xC4B410C));
    t2 = FUN_0c03f444(0x5, 0x0, t1);
    if (t2 != 0) {
        *(unsigned char *)((t2 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t2 + 0x4)) = 0xC11DBDC;
        return t2;
    }
    return 0x0;
}

int FUN_0c11dcb0(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    register int t2;
    register int t3;

    t2 = *(signed char *)((a4 + 0x14));
    if (t2 != 0) {
        if (t2 == 1) {
            return t2;
        }
        if (t2 != 2) {
            if (t2 == 10) {
                (((struct o14_uchar *)(a4))->v) = 0x2;
                *(unsigned short *)((a4 + 0x1C)) = 0x0;
                *(unsigned short *)((a4 + 0x1E)) = 0x0;
                return 0x0;
            }
            if (t2 == 20) {
                (((struct o14_uchar *)(a4))->v) = 0x1;
                (((struct o14_uchar *)(((((struct o0_int *)0xC473C48)->v))))->v) = 0x14;
                (((struct o14_uchar *)(((((struct o4_int *)0xC473C48)->v))))->v) = 0x14;
                return 0x14;
            }
            if (t2 == 30) {
                (((struct o14_uchar *)(((((struct o0_int *)0xC473C48)->v))))->v) = 0x1E;
                (((struct o14_uchar *)(((((struct o4_int *)0xC473C48)->v))))->v) = 0x1E;
                return 0x14;
            }
            if (t2 == 80) {
                return FUN_0c03f346(a4, a5, a6, a7);
            }
            t3 = t2;
            if (t2 == 99) {
                (((struct o14_uchar *)(a4))->v) = 0x50;
                (((struct o14_uchar *)(((((struct o0_int *)0xC473C48)->v))))->v) = 0x63;
                (((struct o14_uchar *)(((((struct o4_int *)0xC473C48)->v))))->v) = 0x63;
                t3 = 0x14;
            }
            return t3;
        }
        if ((*(short *)((a4 + 0x1E))) == 0) {
            FUN_0c11cd98(a4);
            FUN_0c11a22e(a4, ((((struct o0_int *)0xC473CC0)->v)), 0x0);
            FUN_0c11a22e(a4, ((((struct o4_int *)0xC473CC0)->v)), 0x1);
        }
        if ((*(short *)((a4 + 0x1E))) == 0) {
            FUN_0c05a080(0x20, 0x0);
            FUN_0c05afc8(0x20, 0x1, 0x1);
            (((struct o14_uchar *)(((((struct o0_int *)0xC473C48)->v))))->v) = 0x2;
        }
        if ((*(short *)((a4 + 0x1E))) == 1) {
            FUN_0c05afc8(0x20, 0x20, 0x28);
        }
        if ((*(short *)((a4 + 0x1E))) == 40) {
            FUN_0c05afc8(0x20, 0x40, 0x1);
        }
        t2 = *(short *)((a4 + 0x1E));
        if (((int)t2 >= (int)0x3C) && ((int)t2 <= (int)0xC8)) {
            if ((*(short *)((a4 + 0x1E))) == 60) {
                FUN_0c05a080(0x8, 0x0);
            }
            if ((*(short *)((a4 + 0x1E))) == 0xC8) {
                FUN_0c05a080(0x9, 0x0);
            }
            if (((int)((int)(*(short *)((a4 + 0x1E))) % (int)0x28)) == 0) {
                FUN_0c11c2a8(0x0, 0x0);
                FUN_0c11c2a8(0x0, 0x1);
            }
        }
        if (((((struct o8_int *)0xC473CC0)->v)) != -1) {
            if ((*(short *)((a4 + 0x1E))) == 120) {
                FUN_0c11bae2(((((struct o8_int *)0xC473CC0)->v)), 0x0);
            }
            if ((*(short *)((a4 + 0x1E))) == 124) {
                FUN_0c11bae2(((((struct o8_int *)0xC473CC0)->v)), 0x1);
            }
            if ((*(short *)((a4 + 0x1E))) == 0x80) {
                FUN_0c11bae2(((((struct o8_int *)0xC473CC0)->v)), 0x2);
            }
            if ((*(short *)((a4 + 0x1E))) == 0x84) {
                FUN_0c11bae2(((((struct o8_int *)0xC473CC0)->v)), 0x3);
            }
        }
        if ((*(short *)((a4 + 0x1E))) == 120) {
            FUN_0c11c4c8(a4);
        }
        if ((*(short *)((a4 + 0x1E))) == 0x8C) {
            (((struct o14_uchar *)(((((struct o0_int *)0xC473C48)->v))))->v) = 0x3;
        }
        t2 = *(short *)((a4 + 0x1E));
        if (((int)t2 >= (int)0x8C) && ((int)t2 <= (int)0x12C)) {
            t2 = *(short *)((a4 + 0x1E));
            t3 = ((~(((~t2) + 0x1) & 0x1)) + 0x1);
            if ((int)t2 >= 0) {
                t3 = (t2 & 0x1);
            }
            if (t3 == 0) {
                FUN_0c11c036(0x0, 0x3C);
                FUN_0c11c036(0x1, 0x3C);
            }
        }
        if (((((struct o8_int *)0xC473CC0)->v)) != -1) {
            if ((*(short *)((a4 + 0x1E))) == 0xDC) {
                (((struct o14_uchar *)(((((struct o0_int *)0xC473C48)->v))))->v) = 0xB;
            }
            if ((*(short *)((a4 + 0x1E))) == 0x118) {
                (((struct o14_uchar *)(((((struct o0_int *)0xC473C48)->v))))->v) = 0xD;
            }
        }
        if ((*(short *)((a4 + 0x1E))) == 0x140) {
            (((struct o14_uchar *)(((((struct o0_int *)0xC473C48)->v))))->v) = 0x4;
        }
        if ((*(short *)((a4 + 0x1E))) == 0x12C) {
            FUN_0c11cc74(a4);
            FUN_0c11cb1c(a4);
            FUN_0c11cb1c(a4);
        }
        t2 = *(short *)((a4 + 0x1E));
        if (((int)t2 >= (int)((((struct o0_int *)0xC2922E4)->v))) && (t0 = (((struct o4_int *)0xC2922E4)->v), (int)t2 <= (int)t0)) {
            if (((int)((int)(*(short *)((a4 + 0x1E))) % (int)((((struct o8_int *)0xC2922E4)->v)))) == ((((struct oC_int *)0xC2922E4)->v))) {
                FUN_0c11c672(a4, 0x0);
            }
            if (((int)((int)(*(short *)((a4 + 0x1E))) % (int)((((struct o10_int *)0xC2922E4)->v)))) == ((((struct o14_int *)0xC2922E4)->v))) {
                FUN_0c11c672(a4, 0x1);
            }
        }
        t0 = *(short *)((a4 + 0x1E));
        if (((int)t0 >= (int)((((struct o0_int *)0xC2922E4)->v))) && (t1 = (((struct o4_int *)0xC2922E4)->v), (int)t0 <= (int)t1)) {
            t0 = (((struct o0_int *)0xC292438)->v);
            (((struct o20_ushort *)(a4))->v) = (((int)((int)((((((struct o4_int *)0xC292438)->v)) - t0) * ((*(short *)((a4 + 0x1E))) - ((((struct o0_int *)0xC2922E4)->v)))) / (int)((((struct o4_int *)0xC2922E4)->v)))) + t0);
            if ((*(short *)((a4 + 0x1E))) == ((((struct o0_int *)0xC2922E4)->v))) {
                FUN_0c05a080(0x10, 0x0);
            }
            if (((int)((int)((*(short *)((a4 + 0x1E))) - ((((struct o0_int *)0xC2922E4)->v))) % (int)((((struct o20_short *)(a4))->v)))) == 0) {
                t0 = FUN_0c179ac0();
                t1 = ((~(((~t0) + 0x1) & 0xF)) + 0x1);
                if ((int)t0 >= 0) {
                    t1 = (t0 & 0xF);
                }
                t0 = 0xF;
                if (t1 == 0) {
                    t0 = 0x10;
                }
                FUN_0c05a080(t0, 0x0);
            }
        }
        if ((*(short *)((a4 + 0x1E))) == 0x212) {
            FUN_0c11c7ac(a4);
        }
        if ((*(short *)((a4 + 0x1E))) == 0x226) {
            FUN_0c05a080(0x16, 0x0);
            (((struct o14_uchar *)(((((struct o0_int *)0xC473C48)->v))))->v) = 0x5;
            FUN_0c05afc8(0x20, 0x0, 0x1);
        }
        if ((*(short *)((a4 + 0x1E))) == 0x2BC) {
            FUN_0c11c8be(a4);
            if ((*(short *)((a4 + 0x1E))) == 0x2BC) {
                FUN_0c11cffe(a4);
            }
        }
        t0 = (((struct o2C_int *)0xC473CC0)->v);
        switch (t0) {
        case 0:
            if ((*(short *)((a4 + 0x1E))) == 0x29E) {
                if (((((struct oC_int *)0xC473CC0)->v)) != -1) {
                    FUN_0c11aed4(a4, ((((struct oC_int *)0xC473CC0)->v)), 0x0);
                }
                if (((((struct o10_int *)0xC473CC0)->v)) != -1) {
                    FUN_0c11aed4(a4, ((((struct o10_int *)0xC473CC0)->v)), 0x1);
                }
                if (((((struct o14_int *)0xC473CC0)->v)) != -1) {
                    FUN_0c11aed4(a4, ((((struct o14_int *)0xC473CC0)->v)), 0x2);
                }
            }
            break;
        case 1:
            if ((*(short *)((a4 + 0x1E))) == 0x29E) {
                FUN_0c11b6ba(a4);
            }
            break;
        case 2:
            if ((*(short *)((a4 + 0x1E))) == 0x29E) {
                if (((((struct oC_int *)0xC473CC0)->v)) != -1) {
                    FUN_0c11b374(a4, 0x0);
                }
                if (((((struct o10_int *)0xC473CC0)->v)) != -1) {
                    FUN_0c11b374(a4, 0x1);
                }
                if (((((struct o14_int *)0xC473CC0)->v)) != -1) {
                    FUN_0c11b374(a4, 0x2);
                }
            }
            break;
        }
        if ((*(short *)((a4 + 0x1E))) == 0x384) {
            (((struct o14_uchar *)(((((struct o0_int *)0xC473C48)->v))))->v) = 0x7;
        }
        if ((int)(*(short *)((a4 + 0x1E))) < (int)0x7D0) {
            *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
        }
        t0 = (((struct o30_int *)0xC473CC0)->v);
        t1 = t0;
        if (t0 == 1) {
            FUN_0c11c8b2();
            (((struct o14_uchar *)(a4))->v) = 0x1;
            t1 = (FUN_0c05afc8(0x20, 0x0, 0x1));
        }
        return t1;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct o0_uint *)0xC473C48)->v) = (FUN_0c11dbaa());
    t0 = FUN_0c11dc7e();
    (((struct o4_uint *)0xC473C48)->v) = t0;
    return t0;
}
