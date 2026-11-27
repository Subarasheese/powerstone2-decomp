/* game/unsorted: functions 0C04A99C-0C04CC56, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o30_float { char p[0x30]; float v; };
struct o3714_uchar { char p[0x3714]; unsigned char v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o50_float { char p[0x50]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c036de8(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c038548(int);
int FUN_0c038566(void);
int FUN_0c038e88(int);
int res_cockpit_faces_release_all(void);
int FUN_0c038f70(void);
int FUN_0c03ea04(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c03efec(void);
int FUN_0c03eff6(void);
int FUN_0c03f0aa(void);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f40c(int);
int FUN_0c03f444(int, int, int);
int FUN_0c04cc64(void);
int FUN_0c04ceb0(void);
int FUN_0c04d6f4(void);
int FUN_0c05258e(int, int, int, int, int);
int FUN_0c0527e6(void);
int FUN_0c056e44(int, int);
int FUN_0c0573c0(int, int, int);
int FUN_0c0573cc(int, int, int);
int FUN_0c059c54(int);
int thunk_FUN_0c05abb2(int, int);
int FUN_0c05aeac(void);
int FUN_0c05af8a(void);
int FUN_0c05af9a(int, int, int);
int FUN_0c05b052(int, int);
int FUN_0c060c00(void);
int FUN_0c063f24(void);
int FUN_0c067784(void);
int FUN_0c067a58(void);
int FUN_0c07bf00(int, int);
int FUN_0c07c436(void);
int FUN_0c085cac(int, int, int);
int FUN_0c085d0c(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0b507a(int, int, int);
int FUN_0c0cfc04(void);
float math_cos_angle16(int);
int nlRand(void);
float math_sin_angle16(int);
int FUN_0c187798(void);
int FUN_0c04a99c(int a4);
int FUN_0c04b172(void);
int FUN_0c04b218(void);
int FUN_0c04b35a(int a4, int a5, int a6, int a7);
int FUN_0c04b3ae(int a4, int a5);
int FUN_0c04b648(void);
int FUN_0c04b7c4(void);
int FUN_0c04bb00(void);
int FUN_0c04bb7e(int a4, int a5, int a6, int a7);
int FUN_0c04bc04(void);
int FUN_0c04bcaa(int a4);
int FUN_0c04bd6c(int a4);
int FUN_0c04bddc(void);
int FUN_0c04be0e(int a4, int a5, int a6, int a7);
int FUN_0c04be78(int a4);
int FUN_0c04bf9c(int a4, int a5, int a6, int a7);
int FUN_0c04c0d4(void);
int FUN_0c04c11e(int a4, int a5, int a6, int a7);
int FUN_0c04c1d4(void);
int FUN_0c04c438(void);
int FUN_0c04c5f4(void);
int FUN_0c04c87c(int a4);
int FUN_0c04ca56(void);
int FUN_0c04cb24(int a4);


int FUN_0c04b172(void)
{
    register int t0;
    int t2;
    register int t3;

    t0 = 0x0;
    for (;;) {
        if (((((int)0x1 << (int)t0) & (unsigned char)(*(signed char *)0xC3BD447)) != 0) && (t2 = (int)(((unsigned int)(((t0 << 2) + t0) << 2)) >> 31), t3 = *(short *)(((((((t0 << 2) + t0) << 2) << 1) + 0xC5426C4) + 0x14)), ((unsigned short)t3 & 0x40) != 0)) {
            break;
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x4) {
            return 0x0;
        }
    }
    return 0x1;
}

int FUN_0c04b218(void)
{
    register int t0;

    t0 = 0x0;
    for (;;) {
        if ((*(signed char *)((((t0 * 0x3938) + 0xC532498) + 0x2))) == 13) {
            break;
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x4) {
            return 0xFFFFFFFF;
        }
    }
    return t0;
}

int FUN_0c04b35a(int a4, int a5, int a6, int a7)
{
    register float u9;
    register float u10;
    register int t11;

    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) - ((((struct o5C_float *)(a4))->v)));
    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) - ((((struct o50_float *)(a4))->v)));
    u9 = *(float *)0xC04B474;
    u10 = (((struct o2C_float *)(a4))->v);
    t11 = *(signed char *)0xC541F44;
    if (((((u9 > u10)) ? 1 : 0) | ((((int)(unsigned char)t11 >= (int)0x7)) ? 1 : 0)) != 0) {
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    return ((((u9 > u10)) ? 1 : 0) | ((((int)(unsigned char)t11 >= (int)0x7)) ? 1 : 0));
}


int FUN_0c04b648(void)
{
    register int t0;
    register int t1;

    t0 = FUN_0c03f444(0x5, 0x0, 0x0);
    t1 = t0;
    if (t0 != 0) {
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = 0x80;
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC04B528;
        t1 = 0xFFFFFFFF;
    }
    return t1;
}

int FUN_0c04b7c4(void)
{
    register int t0;
    register int t4;

    t0 = FUN_0c03f444(0x5, 0x0, 0x1);
    t4 = t0;
    if (t0 != 0) {
        FUN_0c03744a(((((struct oC4_int *)(t0))->v)), 0x7, 0xE, (*(int *)0xC4B40CC));
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = 0x80;
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC04B67A;
        t4 = 0xFFFFFFFF;
    }
    return t4;
}

int FUN_0c04bb00(void)
{
    register int t0;
    register int t1;
    register int t6;

    t0 = 0x0;
    for (;;) {
        t1 = FUN_0c03f444(0x5, 0x0, 0x1);
        t6 = t1;
        if (t1 != 0) {
            FUN_0c03744a(((((struct oC4_int *)(t1))->v)), t0, 0xE, (*(int *)0xC4B40CC));
            (((struct oA8_uchar *)(t1))->v) = 0x0;
            (((struct oAC_ushort *)(t1))->v) = 0xF;
            (((struct oA9_uchar *)(t1))->v) = 0x80;
            *(unsigned char *)((t1 + 0x1)) = 0xFFFFFFFF;
            *(unsigned int *)((t1 + 0x4)) = 0xC04B808;
            *(unsigned char *)((t1 + 0x2)) = t0;
            *(unsigned short *)((t1 + 0x1C)) = ((((t0 << 2) + t0) << 1) + 0x78);
            t6 = ((((t0 << 2) + t0) << 1) + 0x78);
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x7) {
            break;
        }
    }
    return t6;
}

int FUN_0c04bb7e(int a4, int a5, int a6, int a7)
{

    register int R2;
    register int R3;
    register int R5;
    register float F2;
    register float F3;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    v0_0 = a4;
    v0_2 = *(signed char *)((v0_0 + 0x14));
    v0_1 = (v0_2);
    if ((v0_2 == 0)) goto L_C04BB8E;
    if ((v0_1 == 1)) goto L_C04BB96;
    return FUN_0c03f346(v0_0, R5, a6, a7);
    L_C04BB96:;
    (((struct o30_float *)(v0_0))->v) = (((((struct o30_float *)(v0_0))->v)) - 80.0f);
    v0_2 = *(signed char *)((v0_0 + 0x2));
    v0_1 = ((v0_2 & 0x3));
    R5 = (0x16C);
    FPUL_ = (0x42A00000);
    if (((v0_2 & 0x3) == 0)) goto L_C04BBBE;
    if ((v0_1 == 1)) goto L_C04BBC6;
    if ((v0_1 == 2)) goto L_C04BBCC;
    if (!((v0_1 == 3))) goto L_C04BBE2;
    v0_2 = (((*(int *)((v0_0 + 0x3C))) + R5));
    goto L_C04BBD8;
    L_C04BBE2:;
    return v0_1;
    L_C04BBD8:;
    *(unsigned int *)((v0_0 + 0x3C)) = v0_2;
    goto L_C04BBE2;
    L_C04BBCC:;
    *(unsigned int *)((v0_0 + 0x3C)) = ((*(int *)((v0_0 + 0x3C))) - R5);
    goto L_C04BBE2;
    L_C04BBC6:;
    v0_2 = (((*(int *)((v0_0 + 0x3C))) - R5));
    goto L_C04BBD8;
    L_C04BBBE:;
    *(unsigned int *)((v0_0 + 0x3C)) = ((*(int *)((v0_0 + 0x3C))) + R5);
    goto L_C04BBE2;
    L_C04BB8E:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    goto L_C04BB96;
}

int FUN_0c04bc04(void)
{
    register float u0;
    register float u1;
    int t2;
    register int t4;
    register int t5;
    register int t9;

    u0 = (((struct o0_float *)0xC04BD3C)->v);
    u1 = (((struct o4_float *)0xC04BD3C)->v);
    t2 = 0x0;
    for (;;) {
        t4 = FUN_0c037320(((t2 & 0x1) + 0x10), (*(int *)0xC4B410C));
        t5 = FUN_0c03f444(0x5, 0x0, t4);
        t9 = t5;
        if (t5 != 0) {
            FUN_0c03733c(t5, ((t2 & 0x1) + 0x10), (*(int *)0xC4B410C));
            (((struct oA8_uchar *)(t5))->v) = 0x1;
            (((struct oAC_ushort *)(t5))->v) = 0xF;
            (((struct oA9_uchar *)(t5))->v) = 0x21;
            *(unsigned char *)((t5 + 0x1)) = 0xFFFFFFFF;
            *(unsigned int *)((t5 + 0x4)) = 0xC04BB7E;
            *(unsigned char *)((t5 + 0x2)) = t2;
            (((struct o30_float *)(t5))->v) = ((((-((float)(0xFE & t2) * u1)) / (1.0f + 1.0f))) + u0);
            t9 = 0x30;
        }
        t2 = (t2 + 0x1);
        if ((int)t2 >= (int)0x30) {
            break;
        }
    }
    return t9;
}


int FUN_0c04bd6c(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0x19;
        *(unsigned short *)((a4 + 0x1E)) = 0x19;
        (((struct o20_ushort *)(a4))->v) = 0x0;
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    t1 = (short)(t0 - 1);
    if ((int)(short)(t0 - 1) <= 0) {
        *(unsigned short *)((a4 + 0x1C)) = (*(short *)((a4 + 0x1E)));
        t0 = nlRand();
        t2 = ((~(((~t0) + 0x1) & 0xF)) + 0x1);
        if ((int)t0 >= 0) {
            t2 = (t0 & 0xF);
        }
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + t2);
        FUN_0c04bcaa(((((struct o20_short *)(a4))->v)));
        (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) + 0x1);
        (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) & 0x1);
        t1 = 0x20;
    }
    return t1;
}

int FUN_0c04bddc(void)
{
    register int t0;
    register int t1;

    t0 = FUN_0c03f444(0x5, 0x0, 0x0);
    t1 = t0;
    if (t0 != 0) {
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = 0x80;
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC04BD6C;
        t1 = 0xFFFFFFFF;
    }
    return t1;
}

int FUN_0c04be0e(int a4, int a5, int a6, int a7)
{
    int t10;

    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) - ((((struct o5C_float *)(a4))->v)));
    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) - ((((struct o50_float *)(a4))->v)));
    if (!(-1000.0f > ((((struct o2C_float *)(a4))->v))) && (t10 = *(signed char *)0xC541F44, (int)(unsigned char)t10 <= (int)0xB)) {
        return 0x2C;
    }
    return FUN_0c03f346(a4, a5, a6, a7);
}


int FUN_0c04bf9c(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t16;
    register int t22;
    register int t23;
    register int t25;
    register int t26;
    register float u29;
    register float u31;
    register int t49;

    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0x3C;
        *(unsigned short *)((a4 + 0x1E)) = 0x14;
        (((struct o50_float *)(a4))->v) = 3000.0f;
    }
    if ((int)(unsigned char)(*(signed char *)0xC541F44) > (int)0xB) {
        t49 = (FUN_0c03f346(a4, a5, a6, a7));
    } else {
        if ((int)(unsigned char)(*(signed char *)0xC541F44) >= (int)0xA) {
            (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + 45.0f);
        }
        t16 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t16 - 1);
        t49 = (short)(t16 - 1);
        if ((int)(short)(t16 - 1) <= 0) {
            *(unsigned short *)((a4 + 0x1E)) = (int)((float)(*(short *)((a4 + 0x1E))) * 0.800000012f);
            if ((int)(*(short *)((a4 + 0x1E))) < (int)0x3) {
                *(unsigned short *)((a4 + 0x1E)) = 0x3;
            }
            *(unsigned short *)((a4 + 0x1C)) = (*(short *)((a4 + 0x1E)));
            t22 = nlRand();
            t23 = ((~(((~t22) + 0x1) & 0x3F)) + 0x1);
            if ((int)t22 >= 0) {
                t23 = (t22 & 0x3F);
            }
            t25 = nlRand();
            t26 = ((~(((~t25) + 0x1) & 0x3F)) + 0x1);
            if ((int)t25 >= 0) {
                t26 = (t25 & 0x3F);
            }
            u29 = ((float)(t26 + 0x10) * 10.0f);
            *(float *)(((int)stk + 8)) = (u29 * (math_cos_angle16(((t23 << 8) << 2))));
            u31 = ((float)(t26 + 0x10) * 10.0f);
            *(float *)(((int)stk + 0)) = (u31 * (math_sin_angle16(((t23 << 8) << 2))));
            if (!(0.0f > (*(float *)(((int)stk + 8))))) {
                *(float *)(((int)stk + 8)) = (-(*(float *)(((int)stk + 8))));
            }
            *(float *)(((int)stk + 4)) = ((((struct o50_float *)(a4))->v));
            *(volatile short *)((a4 + 0x20));
            t49 = (FUN_0c04be78(((int)stk + 0)));
        }
    }
    return t49;
}

int FUN_0c04c0d4(void)
{
    register int t0;
    register int t1;

    t0 = FUN_0c037320(0x1, (*(int *)0xC4B410C));
    t1 = FUN_0c03f444(0x5, 0x0, t0);
    t0 = t1;
    if (t1 != 0) {
        FUN_0c03733c(t1, 0x1, (*(int *)0xC4B410C));
        (((struct oA8_uchar *)(t1))->v) = 0x1;
        (((struct oAC_ushort *)(t1))->v) = 0xF;
        (((struct oA9_uchar *)(t1))->v) = 0x80;
        *(unsigned char *)((t1 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t1 + 0x4)) = 0xC04BF9C;
        t0 = 0xFFFFFFFF;
    }
    return t0;
}

int FUN_0c04c11e(int a4, int a5, int a6, int a7)
{
    register int t0;

    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    if ((int)(unsigned char)(*(signed char *)0xC541F44) > (int)0xB) {
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
    (((struct o28_float *)(a4))->v) = (math_sin_angle16(((*(short *)((a4 + 0x1C))) << 14)));
    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) - (1.0f + 1.0f));
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned int *)((a4 + 0x34)) = (int)((float)((t0 << 2) << 1) * (math_sin_angle16((t0 << 14))));
    t0 = *(signed char *)((a4 + 0x2));
    if (t0 == 0) {
        *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + 0xFA4);
    }
    return t0;
}

int FUN_0c04c1d4(void)
{
    register int t0;
    register int t1;

    t0 = FUN_0c037320(0x7, (*(int *)0xC4B410C));
    t1 = FUN_0c03f444(0x5, 0x0, t0);
    if (t1 != 0) {
        FUN_0c03733c(t1, 0x7, (*(int *)0xC4B410C));
        (((struct oA8_uchar *)(t1))->v) = 0x1;
        (((struct oAC_ushort *)(t1))->v) = 0xF;
        (((struct oA9_uchar *)(t1))->v) = 0x80;
        *(unsigned char *)((t1 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t1 + 0x4)) = 0xC04C11E;
        *(unsigned char *)((t1 + 0x2)) = 0x0;
        *(unsigned short *)((t1 + 0x1C)) = 0x0;
    }
    t0 = FUN_0c037320(0x8, (*(int *)0xC4B410C));
    t1 = FUN_0c03f444(0x5, 0x0, t0);
    t0 = t1;
    if (t1 != 0) {
        FUN_0c03733c(t1, 0x8, (*(int *)0xC4B410C));
        (((struct oA8_uchar *)(t1))->v) = 0x1;
        (((struct oAC_ushort *)(t1))->v) = 0xF;
        (((struct oA9_uchar *)(t1))->v) = 0x80;
        *(unsigned char *)((t1 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t1 + 0x4)) = 0xC04C11E;
        *(unsigned char *)((t1 + 0x2)) = 0x1;
        *(unsigned short *)((t1 + 0x1C)) = 0x1;
        t0 = 0x1;
    }
    return t0;
}

int FUN_0c04c438(void)
{
    register int t0;
    register int t2;
    register int t3;
    register int t6;

    t0 = 0x2;
    for (;;) {
        t2 = FUN_0c037320(t0, (*(int *)0xC4B410C));
        t3 = FUN_0c03f444(0x5, 0x0, t2);
        t6 = t3;
        if (t3 != 0) {
            FUN_0c03733c(t3, t0, (*(int *)0xC4B410C));
            (((struct oA8_uchar *)(t3))->v) = 0x1;
            (((struct oAC_ushort *)(t3))->v) = 0xF;
            (((struct oA9_uchar *)(t3))->v) = 0x80;
            *(unsigned char *)((t3 + 0x1)) = 0xFFFFFFFF;
            *(unsigned int *)((t3 + 0x4)) = 0xC04C270;
            *(unsigned char *)((t3 + 0x2)) = t0;
            t6 = t0;
        }
        t0 = (t0 + 0x1);
        if ((int)t0 > (int)0x6) {
            break;
        }
    }
    return t6;
}

int FUN_0c04c5f4(void)
{
    register int t0;
    register int t1;

    t0 = FUN_0c037320(0x9, (*(int *)0xC4B410C));
    t1 = FUN_0c03f444(0x5, 0x0, t0);
    if (t1 != 0) {
        FUN_0c03733c(t1, 0x9, (*(int *)0xC4B410C));
        (((struct oA8_uchar *)(t1))->v) = 0x1;
        (((struct oAC_ushort *)(t1))->v) = 0x21F;
        (((struct oA9_uchar *)(t1))->v) = 0x80;
        (((struct oBC_float *)(t1))->v) = 1.0f;
        (((struct oB8_float *)(t1))->v) = 1.0f;
        (((struct oB4_float *)(t1))->v) = 1.0f;
        *(unsigned char *)((t1 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t1 + 0x4)) = 0xC04C4AA;
        *(unsigned char *)((t1 + 0x2)) = 0x0;
        (((struct o48_float *)(t1))->v) = 1.0f;
        (((struct o40_float *)(t1))->v) = 1.0f;
        (((struct o44_float *)(t1))->v) = 0.0f;
    }
    t0 = FUN_0c037320(0xA, (*(int *)0xC4B410C));
    t1 = FUN_0c03f444(0x5, 0x0, t0);
    t0 = t1;
    if (t1 != 0) {
        FUN_0c03733c(t1, 0xA, (*(int *)0xC4B410C));
        (((struct oA8_uchar *)(t1))->v) = 0x1;
        (((struct oAC_ushort *)(t1))->v) = 0x21F;
        (((struct oA9_uchar *)(t1))->v) = 0x80;
        (((struct oBC_float *)(t1))->v) = 1.0f;
        (((struct oB8_float *)(t1))->v) = 1.0f;
        (((struct oB4_float *)(t1))->v) = 1.0f;
        *(unsigned char *)((t1 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t1 + 0x4)) = 0xC04C4AA;
        *(unsigned char *)((t1 + 0x2)) = 0x1;
        (((struct o48_float *)(t1))->v) = 1.0f;
        (((struct o40_float *)(t1))->v) = 1.0f;
        (((struct o44_float *)(t1))->v) = 0.0f;
        t0 = 0x44;
    }
    return t0;
}

int FUN_0c04c87c(int a4)
{
    register int t0;
    register int t1;

    t0 = FUN_0c037320(0xB, (*(int *)0xC4B410C));
    t1 = FUN_0c03f444(0x1, 0x0, t0);
    t0 = t1;
    if (t1 != 0) {
        FUN_0c03733c(t1, 0xB, (*(int *)0xC4B410C));
        (((struct oA8_uchar *)(t1))->v) = 0x0;
        (((struct oAC_ushort *)(t1))->v) = 0x1F;
        (((struct oA9_uchar *)(t1))->v) = 0x80;
        *(unsigned char *)((t1 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t1 + 0x4)) = 0xC04C6C4;
        *(unsigned int *)((t1 + 0x10)) = a4;
        t0 = 0xFFFFFFFF;
    }
    return t0;
}

int FUN_0c04ca56(void)
{
    register int t0;
    register int t8;
    register int t1;
    register int t2;
    register int t4;
    register float u7;

    t0 = FUN_0c03f444(0x5, 0x0, 0x9);
    t8 = t0;
    if (t0 != 0) {
        t1 = 0x0;
        t2 = 0x0;
        for (;;) {
            t4 = *(int *)((((0xC4 + t0) + t2) + 0x0));
            FUN_0c03744a(t4, 0x0, (*(int *)((0xC1B7E64 + t2))), (*(int *)0xC4B410C));
            *(unsigned short *)((t4 + 0x6)) = 0x3F;
            t1 = (t1 + 0x1);
            u7 = *(float *)((t2 + 0xC1B7E88));
            (((struct o88_float *)(t4))->v) = u7;
            (((struct o84_float *)(t4))->v) = u7;
            (((struct o8C_float *)(t4))->v) = 1.0f;
            t2 = (t2 + 0x4);
            if ((unsigned int)t1 >= (unsigned int)0x9) {
                break;
            }
        }
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = 0x80;
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC04C8D4;
        t8 = 0xFFFFFFFF;
    }
    return t8;
}

