/* Straight-line functions with calls and guards (batch gen_gb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
struct o0_float { float v; };
struct o0_uchar { unsigned char v; };
struct o10_float { char p[0x10]; float v; };
struct o114_int { char p[0x114]; int v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o132_uchar { char p[0x132]; unsigned char v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o372D_uchar { char p[0x372D]; unsigned char v; };
struct o3731_uchar { char p[0x3731]; unsigned char v; };
struct o3760_uint { char p[0x3760]; unsigned int v; };
struct o376C_int { char p[0x376C]; int v; };
struct o377C_int { char p[0x377C]; int v; };
struct o377C_uint { char p[0x377C]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o64_ushort { char p[0x64]; unsigned short v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o88_float { char p[0x88]; float v; };
struct oA4_int { char p[0xA4]; int v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB0_float { char p[0xB0]; float v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oE4_int { char p[0xE4]; int v; };
int FUN_0c036de8(int);
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c037498(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c0497d8(void);
int FUN_0c049962(void);
int FUN_0c049eac(int, int, int, int);
int FUN_0c04a060(void);
int FUN_0c0588bc(int, int, int, int, int, int);
int FUN_0c058a6e(int, int, int, int, int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c064f80(int);
int FUN_0c06780e(int);
int FUN_0c06785c(void);
int FUN_0c07ce58(int, int);
int FUN_0c07e2f4(int, int);
int FUN_0c07e3ae(int, int);
int FUN_0c07e420(int, int);
int FUN_0c0b21ac(int, int);
int FUN_0c0bbf58(int, Stk3);
int FUN_0c0d04c4(int, int);
int FUN_0c0db380(int);
int FUN_0c1171f0(int);
int FUN_0c148d04(int, int);
int FUN_0c148d64(int, int, int);
int FUN_0c149560(int, int);
int FUN_0c16bd38(int, int, int, int);
int FUN_0c16eea8(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c187a88(int, int, int);
int FUN_0c191e44(void);
int FUN_0c191e7c(void);
int FUN_0c1a027c(int);
int math_mat_get_translate(int, int);
int math_mat_transform_vector(int, int, Stk3);
int math_vec3_mul_xyz(int, float, float, float);
int nlAddVector3op(int, int, int);
extern int nlRand();
float nlScalor(int);
int strlen(int);
int thunk_FUN_0c058310(int, int);
int thunk_FUN_0c05abb2(int, int);
void FUN_0c10d2b4(int a4, int a5);
void FUN_0c1101c0(int a4, int a5);
int FUN_0c16ac5c(int a4);
int FUN_0c16f000(int a4, int a5, int a6, int a7);
int FUN_0c0f8ca0(int a4, int a5, int a6, int a7);
int FUN_0c1038e8(int a4);
void FUN_0c13299c(int a4);
int FUN_0c0e8e4c(int a4);
int FUN_0c120504(int a4, int a5, int a6, int a7);
void FUN_0c1358c2(int a4);
int FUN_0c148e48(int a4, int a5);
void FUN_0c04a080(int a4, int a5, int a6, int a7);
void FUN_0c1105d8(int a4, int a5);
int FUN_0c1496a4(int a4, int a5);
int FUN_0c083384(int a4, int a5);
int FUN_0c085eac(int a4, int a5);
int FUN_0c0dbb38(int a4, int a5, int a6, int a7);
int FUN_0c13f5dc(int a4, int a5);
int FUN_0c149000(int a4);
int FUN_0c0e60b0(int a4, float f4);
int FUN_0c1325a4(int a4);
int FUN_0c0dffcc(int a4, int a5, int a6, int a7);
void FUN_0c160c7c(int a4, int a5, int a6, int a7);
int FUN_0c19c948(int a4);
int FUN_0c0f485a(int a4, int a5, int a6);
int FUN_0c112d40(int a4, int a5, int a6, int a7);
int FUN_0c118708(int a4, int a5, int a6, int a7);
int FUN_0c16c016(int a4);

void FUN_0c10d2b4(int a4, int a5)
{
    int stk[2];
    register int t3;
    register int t4;
    register int t5;
    register int t7;
    register int t8;
    register int t9;
    register int t14;
    register int t0;
    register int t1;
    register int t2;
    register int t6;

    *(unsigned int *)(((int)stk + 0)) = a4;
    t3 = a4;
    t4 = a5;
    t5 = 0x0;
    t7 = 0xA;
    t8 = a5;
    t9 = 0x2;
    for (;;) {
        if ((int)t9 <= 0) {
            break;
        }
        t0 = t8;
        t1 = 0xC1874B0;
        t6 = (int)((int)t0 / (int)t7);
        t0 = t8;
        t2 = 0xC18760C;
        t8 = ((int)((int)t0 % (int)t7));
        t0 = t7;
        t3 = t9;
        t7 = ((int)((int)t0 / (int)0xA));
        t3 = (t3 - 1);
        t1 = 0xC4;
        t3 = (t3 << 2);
        t2 = 0xC4B410C;
        t4 = t6;
        t0 = 0xC03744A;
        t1 = (t1 + (*(int *)(((int)stk + 0))));
        t14 = *(int *)((t2 + 0x0));
        *(unsigned int *)(((int)stk + 4)) = t3;
        t3 = (t3 + t1);
        t3 = (*(int *)((t3 + 0x0)));
        FUN_0c03744a(t3, t4, 0x5, t14);
        t1 = 0xC4;
        t3 = (*(int *)(((int)stk + 0)));
        t2 = (*(int *)(((int)stk + 4)));
        t3 = (t3 + t1);
        t1 = t9;
        t1 = (t1 - 1);
        t4 = 0xC290E70;
        t3 = (t3 + t2);
        t2 = t1;
        t1 = (t1 << 1);
        t3 = (*(int *)((t3 + 0x0)));
        t1 = (t1 + t2);
        t2 = 0xC187798;
        t0 = t3;
        t1 = (t1 << 2);
        t0 = (t0 + 0x6C);
        t1 = (t1 + t4);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(t0) = *(struct mv3 *)(t1); }
        t4 = 0x1;
        if (t6 == 0) {
            if (t5 != 1) {
                if (t9 != 1) {
                    *(unsigned char *)((t3 + 0x0)) = 0x0;
                } else {
                    *(unsigned char *)((t3 + 0x0)) = t4;
                }
            } else {
                *(unsigned char *)((t3 + 0x0)) = t4;
            }
        } else {
            t5 = t4;
            *(unsigned char *)((t3 + 0x0)) = t4;
        }
        t9 = (t9 - 1);
    }
}

void FUN_0c1101c0(int a4, int a5)
{
    int stk[2];
    register int t3;
    register int t4;
    register int t5;
    register int t7;
    register int t8;
    register int t9;
    register int t14;
    register int t0;
    register int t1;
    register int t2;
    register int t6;

    *(unsigned int *)(((int)stk + 0)) = a4;
    t3 = a4;
    t4 = a5;
    t5 = 0x0;
    t7 = 0xA;
    t8 = a5;
    t9 = 0x2;
    for (;;) {
        if ((int)t9 <= 0) {
            break;
        }
        t0 = t8;
        t1 = 0xC1874B0;
        t6 = (int)((int)t0 / (int)t7);
        t0 = t8;
        t2 = 0xC18760C;
        t8 = ((int)((int)t0 % (int)t7));
        t0 = t7;
        t3 = t9;
        t7 = ((int)((int)t0 / (int)0xA));
        t3 = (t3 - 1);
        t1 = 0xC4;
        t3 = (t3 << 2);
        t2 = 0xC4B410C;
        t4 = t6;
        t0 = 0xC03744A;
        t1 = (t1 + (*(int *)(((int)stk + 0))));
        t14 = *(int *)((t2 + 0x0));
        *(unsigned int *)(((int)stk + 4)) = t3;
        t3 = (t3 + t1);
        t3 = (*(int *)((t3 + 0x0)));
        FUN_0c03744a(t3, t4, 0x7, t14);
        t1 = 0xC4;
        t3 = (*(int *)(((int)stk + 0)));
        t2 = (*(int *)(((int)stk + 4)));
        t3 = (t3 + t1);
        t1 = t9;
        t1 = (t1 - 1);
        t4 = 0xC291104;
        t3 = (t3 + t2);
        t2 = t1;
        t1 = (t1 << 1);
        t3 = (*(int *)((t3 + 0x0)));
        t1 = (t1 + t2);
        t2 = 0xC187798;
        t0 = t3;
        t1 = (t1 << 2);
        t0 = (t0 + 0x6C);
        t1 = (t1 + t4);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(t0) = *(struct mv3 *)(t1); }
        t4 = 0x1;
        if (t6 == 0) {
            if (t5 != 1) {
                if (t9 != 1) {
                    *(unsigned char *)((t3 + 0x0)) = 0x0;
                } else {
                    *(unsigned char *)((t3 + 0x0)) = t4;
                }
            } else {
                *(unsigned char *)((t3 + 0x0)) = t4;
            }
        } else {
            t5 = t4;
            *(unsigned char *)((t3 + 0x0)) = t4;
        }
        t9 = (t9 - 1);
    }
}

int FUN_0c16ac5c(int a4)
{
    register int t0;
    register int t2;
    register int t3;
    register int t9;

    t0 = 0x0;
    for (;;) {
        t2 = FUN_0c037320(0x44, (*(int *)0xC4B40CC));
        t3 = FUN_0c03f444(0x1, 0x0, t2);
        t9 = t3;
        if (t3 != 0) {
            *(unsigned int *)((t3 + 0x4)) = 0xC16AD22;
            *(unsigned char *)((t3 + 0x1)) = 0xFFFFFFFF;
            *(unsigned char *)((t3 + 0x2)) = t0;
            FUN_0c03733c(t3, 0x44, (*(int *)0xC4B40CC));
            (((struct oA8_uchar *)(t3))->v) = 0x1;
            (((struct oAC_ushort *)(t3))->v) = 0x1F;
            (((struct oA9_uchar *)(t3))->v) = 0x21;
            (((struct o48_float *)(t3))->v) = 1.0f;
            (((struct o44_float *)(t3))->v) = 1.0f;
            (((struct o40_float *)(t3))->v) = 1.0f;
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t3 + 0x28)) = *(struct mv3 *)((a4 + 0x28)); }
            FUN_0c07e3ae(t3, (*(signed char *)0xC274836));
            t9 = (FUN_0c064d24(t3, 0x3, 0x11, 0x0, 0x100, 0xF, 0xF, 0xFFFFFFF0));
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x3) {
            break;
        }
    }
    return t9;
}

int FUN_0c16f000(int a4, int a5, int a6, int a7)
{
    int stk[5];
    register int t1;
    register int t3;
    register int t17;
    register int t28;

    if ((*(signed char *)((a4 + 0x14))) == 0) {
        t1 = *(short *)((a4 + 0x1E));
        *(unsigned short *)((a4 + 0x1E)) = (t1 - 1);
        t28 = (short)(t1 - 1);
        if ((int)(short)(t1 - 1) <= 0) {
            t3 = *(signed char *)((a4 + 0x18));
            if (t3 != -1) {
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)((((t3 * 0x3938) + 0xC532498) + 0x28)); }
            } else {
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)(((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532498) + 0x380C)); }
            }
            *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) + (*(float *)0xC16F130));
            *(float *)(((int)stk + 0)) = ((*(float *)(((int)stk + 0))) + (float)(((int)((int)(((int (*)(Stk3))(nlRand))(*(Stk3 *)(((int)stk + 0)))) % (int)0x64)) - 50));
            *(float *)(((int)stk + 8)) = ((*(float *)(((int)stk + 8))) + (float)(((int)((int)(((int (*)(void))(nlRand))()) % (int)0x64)) - 50));
            FUN_0c16eea8(a4, ((int)stk + 0), 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
            *(unsigned short *)((a4 + 0x1E)) = 0xA;
            t17 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t17 + 0x1);
            t28 = (short)(t17 + 0x1);
            if ((int)(short)(t17 + 0x1) >= (int)0x6) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t28 = 0x14;
            }
        }
    } else {
        t28 = (FUN_0c03f346(a4, a5, a6, a7));
    }
    return t28;
}

int FUN_0c0f8ca0(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = a5;
    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o15_uchar *)(a4))->v) = 0x0;
        (((struct oBC_float *)(a4))->v) = 0.0f;
        (((struct oB8_float *)(a4))->v) = 0.0f;
        (((struct oB4_float *)(a4))->v) = 0.0f;
        *(unsigned short *)((a4 + 0x1C)) = (*(short *)((0xC1FB528 + ((*(signed char *)((a4 + 0x2))) << 1))));
        *(unsigned short *)((a4 + 0x1E)) = 0x0;
        t0 = 0x0;
    }
    t1 = *(signed char *)((a4 + 0x15));
    if (t1 != 0) {
        if (t1 != 1) {
            return t1;
        }
        (((struct oBC_float *)(a4))->v) = (((((struct oBC_float *)(a4))->v)) - 0.0500000007f);
        if (!(((((struct oBC_float *)(a4))->v)) > 0.0f)) {
            return FUN_0c03f346(a4, t0, a6, a7);
        }
        u0 = (((struct oBC_float *)(a4))->v);
        (((struct oB8_float *)(a4))->v) = u0;
        (((struct oB4_float *)(a4))->v) = u0;
        return 0xB4;
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    if ((int)(short)(t0 - 1) <= 0) {
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        (((struct oBC_float *)(a4))->v) = 1.0f;
        (((struct oB8_float *)(a4))->v) = 1.0f;
        (((struct oB4_float *)(a4))->v) = 1.0f;
        t1 = *(signed char *)((a4 + 0x2));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)((0xC1FB52C + (((t1 << 1) + t1) << 2))); }
        t1 = 0x2;
        if ((*(signed char *)((a4 + 0x2))) != 0) {
            t1 = 0x1;
        }
        return thunk_FUN_0c05abb2(t1, 0x0);
    }
    return (short)(t0 - 1);
}

int FUN_0c1038e8(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o15_uchar *)(a4))->v) = 0x0;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x58)) = *(struct mv3 *)((a4 + 0x28)); }
        (((struct oA8_uchar *)(a4))->v) = 0x0;
    }
    t0 = *(signed char *)((a4 + 0x15));
    t1 = *(int *)0xC472CEC;
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                (((struct oB0_float *)(a4))->v) = (((((struct oB0_float *)(a4))->v)) - 0.0333333351f);
                t0 = 0xB0;
                if (0.0f > ((((struct oB0_float *)(a4))->v))) {
                    (((struct oA8_uchar *)(a4))->v) = 0x0;
                    (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) & 0xFBFF);
                    (((struct o15_uchar *)(a4))->v) = 0x0;
                    t0 = 0x15;
                }
                t2 = t0;
            } else {
                t0 = *(signed char *)((a4 + 0x2));
                t3 = t0;
                if (t1 != t0) {
                    (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x400);
                    (((struct oB0_float *)(a4))->v) = 1.0f;
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    t3 = 0x15;
                }
                t2 = t3;
            }
            t0 = t2;
        } else {
            (((struct oB0_float *)(a4))->v) = (((((struct oB0_float *)(a4))->v)) + 0.0333333351f);
            t2 = 0xB0;
            if (((((struct oB0_float *)(a4))->v)) > 1.0f) {
                (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) & 0xFBFF);
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                t2 = 0x15;
            }
            t0 = t2;
        }
        t2 = t0;
    } else {
        t0 = *(signed char *)((a4 + 0x2));
        t3 = t0;
        if (t1 == t0) {
            (((struct oA8_uchar *)(a4))->v) = 0x1;
            (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x400);
            (((struct oB0_float *)(a4))->v) = 0.0f;
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            t3 = 0x15;
        }
        t2 = t3;
    }
    return t2;
}

void FUN_0c13299c(int a4)
{
    register int t2;
    register int t3;
    register float u5;

    t2 = FUN_0c037320(0x1, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
    t3 = FUN_0c03f444(0x5, 0x0, t2);
    if (t3 != 0) {
        *(unsigned char *)((t3 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned int *)((t3 + 0x4)) = 0xC132A60;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t3 + 0x28)) = *(struct mv3 *)((a4 + 0x28)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t3 + 0x34)) = *(struct mv3 *)((a4 + 0x34)); }
        u5 = *(float *)0xC132A94;
        (((struct o48_float *)(t3))->v) = u5;
        (((struct o44_float *)(t3))->v) = u5;
        (((struct o40_float *)(t3))->v) = u5;
        (((struct oA8_uchar *)(t3))->v) = 0x1;
        (((struct oAC_ushort *)(t3))->v) = 0x1F;
        (((struct oA9_uchar *)(t3))->v) = 0x21;
        thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC53258C))) + 0x28), (t3 + 0x28));
        FUN_0c037498(((((struct oC4_int *)(t3))->v)), 0x0, 0x1, (*(int *)((((*(signed char *)((t3 + 0x1))) << 2) + 0xC4B40FC))));
        *(unsigned char *)((((((struct oC4_int *)(t3))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(t3))->v)) + 0x6)) = 0x3F;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC4_int *)(t3))->v)) + 0x84)) = *(struct mv3 *)((t3 + 0x40)); }
        *(unsigned int *)((t3 + 0x10)) = a4;
    }
}

int FUN_0c0e8e4c(int a4)
{
    register int t0;
    register int t1;

    t0 = FUN_0c037320(0x68, (*(int *)0xC4B410C));
    t1 = FUN_0c03f444(0x1, 0x0, t0);
    t0 = t1;
    if (t1 != 0) {
        FUN_0c03733c(t1, 0x68, (*(int *)0xC4B410C));
        *(unsigned int *)((t1 + 0x4)) = 0xC0E8D48;
        *(unsigned char *)((t1 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        (((struct oAC_ushort *)(t1))->v) = 0xF;
        (((struct oA9_uchar *)(t1))->v) = 0x21;
        *(unsigned int *)((t1 + 0x4)) = 0xC0E8D48;
        *(unsigned int *)((t1 + 0x38)) = (*(int *)((a4 + 0x38)));
        (((struct o5C_float *)(t1))->v) = 0.400000006f;
        (((struct o50_float *)(t1))->v) = -10.0f;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x28)) = *(struct mv3 *)((a4 + 0x28)); }
        (((struct o2C_float *)(t1))->v) = (((((struct o2C_float *)(t1))->v)) - 20.0f);
        (((struct o54_float *)(t1))->v) = 0.0f;
        (((struct o4C_float *)(t1))->v) = 0.0f;
        FUN_0c07e420(t1, 0x7);
        (((struct o48_float *)(t1))->v) = 1.0f;
        (((struct o44_float *)(t1))->v) = 1.0f;
        (((struct o40_float *)(t1))->v) = 1.0f;
        t0 = (FUN_0c064d24(t1, 0x3, 0x9, 0x1, 0x100, (~((int)0x1 << (int)(*(signed char *)((a4 + 0x1))))), 0x0, 0x0));
    }
    return t0;
}

int FUN_0c120504(int a4, int a5, int a6, int a7)
{
    int stk[4];
    register int t2;
    register int t3;
    register int t19;
    register int t4;
    register int t7;
    register float u17;

    *(unsigned char *)(((int)stk + 12)) = a4;
    *(unsigned int *)(((int)stk + 0)) = a5;
    *(unsigned int *)(((int)stk + 8)) = a6;
    *(unsigned int *)(((int)stk + 4)) = a7;
    t2 = FUN_0c037320((*(int *)(((int)stk + 0))), (*(int *)0xC4B410C));
    t3 = FUN_0c03f444(0x8, 0x0, t2);
    t19 = t3;
    if (t3 != 0) {
        if ((int)t2 > 0) {
            t4 = 0x0;
            for (;;) {
                t7 = *(int *)((((t4 << 2) + (0xC4 + t3)) + 0x0));
                FUN_0c03744a(t7, t4, (*(int *)(((int)stk + 0))), (*(int *)0xC4B410C));
                *(unsigned char *)((t7 + 0x0)) = 0x1;
                *(unsigned short *)((t7 + 0x6)) = 0x1F;
                { struct mv3 { int w[3]; }; *(struct mv3 *)((t7 + 0x6C)) = *(struct mv3 *)((*(int *)(((int)stk + 8)))); }
                { struct mv3 { int w[3]; }; *(struct mv3 *)((0x84 + t7)) = *(struct mv3 *)((*(int *)(((int)stk + 4)))); }
                t4 = (t4 + 0x1);
                if ((int)t4 >= (int)t2) {
                    break;
                }
            }
        }
        *(unsigned char *)((t3 + 0x1)) = 0xFFFFFFFF;
        *(unsigned char *)((t3 + 0x2)) = (*(signed char *)(((int)stk + 12)));
        (((struct oAC_ushort *)(t3))->v) = 0x1F;
        (((struct oA9_uchar *)(t3))->v) = 0x21;
        *(unsigned int *)((t3 + 0x4)) = 0xC1203D8;
        u17 = (((struct o0_float *)0xC120648)->v);
        (((struct o44_float *)(t3))->v) = u17;
        (((struct o40_float *)(t3))->v) = u17;
        (((struct o48_float *)(t3))->v) = ((((struct o4_float *)0xC120648)->v));
        t19 = 0x48;
    }
    return t19;
}

void FUN_0c1358c2(int a4)
{
    register int t1;
    register int t2;

    t1 = FUN_0c037320(0x20, (*(int *)0xC4B40CC));
    t2 = FUN_0c03f444(0x1, 0x0, t1);
    if (t2 != 0) {
        FUN_0c03733c(t2, 0x20, (*(int *)0xC4B40CC));
        *(unsigned char *)((((((struct oC4_int *)(t2))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(t2))->v)) + 0x6)) = 0xF;
        *(unsigned char *)((t2 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned int *)((t2 + 0x4)) = 0xC1357EE;
        (((struct oB0_float *)(t2))->v) = 1.0f;
        (((struct oA8_uchar *)(t2))->v) = 0x1;
        *(unsigned int *)((t2 + 0x10)) = a4;
        (((struct o58_float *)(t2))->v) = 0.800000012f;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t2 + 0x34)) = *(struct mv3 *)(0xC2A16B0); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t2 + 0x40)) = *(struct mv3 *)(0xC2A1698); }
        (((struct oAC_ushort *)(t2))->v) = 0x41F;
        (((struct oA9_uchar *)(t2))->v) = 0x21;
        FUN_0c064d24(t2, 0x1, 0x36, 0x2, 0x100, (~((int)0x1 << (int)(*(signed char *)((t2 + 0x1))))), 0x0, 0x0);
        FUN_0c07e2f4(t2, 0x66);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t2 + 0x28)) = *(struct mv3 *)((a4 + 0x28)); }
    }
}

int FUN_0c148e48(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = FUN_0c037320(0x2, (*(int *)(((((*(signed char *)((a4 + 0x1))) << 2) << 1) + 0xC4B40E0))));
    t1 = FUN_0c03f444(0x2, 0x0, t0);
    t0 = 0x0;
    if (t1 != 0) {
        FUN_0c03733c(t1, 0x2, (*(int *)(((((*(signed char *)((a4 + 0x1))) << 2) << 1) + 0xC4B40E0))));
        (((struct oAC_ushort *)(t1))->v) = 0x1F;
        (((struct oA9_uchar *)(t1))->v) = 0x21;
        (((struct oBC_float *)(t1))->v) = 1.0f;
        (((struct oB8_float *)(t1))->v) = 1.0f;
        (((struct oB4_float *)(t1))->v) = 1.0f;
        *(unsigned int *)((t1 + 0x4)) = 0xC14947E;
        *(unsigned char *)((t1 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned int *)((t1 + 0x10)) = a4;
        *(unsigned char *)((t1 + 0x2)) = a5;
        (((struct o48_float *)(t1))->v) = 0.0f;
        (((struct o44_float *)(t1))->v) = 0.0f;
        (((struct o40_float *)(t1))->v) = 0.0f;
        (((struct oA4_uint *)(t1))->v) = (((((struct oC4_int *)(a4))->v)) + 0x28);
        t2 = *(signed char *)((t1 + 0x2));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x28)) = *(struct mv3 *)((0xC2029D8 + (((t2 << 1) + t2) << 2))); }
        *(unsigned int *)((t1 + 0x3C)) = 0x0;
        *(unsigned int *)((t1 + 0x38)) = 0x0;
        *(unsigned int *)((t1 + 0x34)) = 0x0;
        FUN_0c148d04(t1, 0x1);
        FUN_0c0b21ac(t1, 0x6);
        t0 = t1;
    }
    return t0;
}

void FUN_0c04a080(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t17;
    register int t15;

    if ((*(signed char *)0xC542362) != 0) {
        (((struct o0_uchar *)0xC40F828)->v) = (*(signed char *)0xC3BD447);
    }
    if ((*(signed char *)0xC542377) != 0) {
        t15 = (FUN_0c04a060());
    } else {
        if ((*(signed char *)0xC542361) != 0) {
            t15 = (FUN_0c049962());
        } else {
            t15 = (FUN_0c049eac(0xC5421F8, a5, a6, a7));
        }
    }
    (((struct o4_uint *)0xC40F828)->v) = 0x0;
    t17 = 0x0;
    for (;;) {
        if ((*(signed char *)((((t17 * 0x3938) + 0xC532498) + 0x3714))) != 0) {
            (((struct o4_uint *)0xC40F828)->v) = (((((struct o4_int *)0xC40F828)->v)) | ((int)0x1 << (int)t17));
        }
        t17 = (t17 + 0x1);
        if ((int)t17 >= (int)0x4) {
            break;
        }
    }
    FUN_0c06780e(((((struct o4_int *)0xC40F828)->v)));
    FUN_0c036de8(0x6);
    FUN_0c06785c();
    FUN_0c06780e(t15);
    FUN_0c0497d8();
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC5410B8) = *(struct mv3 *)(0xC1B7D14); }
}

void FUN_0c1105d8(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;
    register int t10;

    t0 = a4;
    t1 = a5;
    t2 = 0x0;
    t3 = 0x64;
    t4 = a5;
    t5 = 0x3;
    for (;;) {
        if ((int)t5 <= 0) {
            break;
        }
        t6 = t4;
        t7 = 0xC1874B0;
        t8 = (int)((int)t6 / (int)t3);
        t6 = t4;
        t9 = t8;
        t8 = 0xC18760C;
        t4 = ((int)((int)t6 % (int)t3));
        t6 = t3;
        t3 = ((int)((int)t6 / (int)0xA));
        t10 = t5;
        t0 = 0xC4;
        t8 = 0xC4B410C;
        t10 = (t10 - 1);
        t7 = 0xC03744A;
        t0 = (t0 + a4);
        t10 = (t10 << 2);
        t1 = t9;
        t0 = (t0 + t10);
        t0 = (*(int *)((t0 + 0x0)));
        FUN_0c03744a(t0, t1, 0x5, (*(int *)((t8 + 0x0))));
        t1 = 0xC4;
        t7 = t5;
        t7 = (t7 - 1);
        t8 = t7;
        t7 = (t7 << 1);
        t1 = (t1 + a4);
        t0 = 0xC291128;
        t1 = (t1 + t10);
        t1 = (*(int *)((t1 + 0x0)));
        t7 = (t7 + t8);
        t8 = 0xC187798;
        t7 = (t7 << 2);
        t6 = t1;
        t6 = (t6 + 0x6C);
        t7 = (t7 + t0);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(t6) = *(struct mv3 *)(t7); }
        t0 = 0x1;
        if (t9 == 0) {
            if (t2 != 1) {
                if (t5 != 1) {
                    *(unsigned char *)((t1 + 0x0)) = 0x0;
                } else {
                    *(unsigned char *)((t1 + 0x0)) = t0;
                }
            } else {
                *(unsigned char *)((t1 + 0x0)) = t0;
            }
        } else {
            t2 = t0;
            *(unsigned char *)((t1 + 0x0)) = t0;
        }
        t5 = (t5 - 1);
    }
}

int FUN_0c1496a4(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = FUN_0c037320(0x1, (*(int *)(((((*(signed char *)((a4 + 0x1))) << 2) << 1) + 0xC4B40E0))));
    t1 = FUN_0c03f444(0x2, 0x0, t0);
    t0 = 0x0;
    if (t1 != 0) {
        FUN_0c03733c(t1, 0x1, (*(int *)(((((*(signed char *)((a4 + 0x1))) << 2) << 1) + 0xC4B40E0))));
        (((struct oAC_ushort *)(t1))->v) = 0x1F;
        (((struct oA9_uchar *)(t1))->v) = 0x21;
        (((struct oBC_float *)(t1))->v) = 1.0f;
        (((struct oB8_float *)(t1))->v) = 1.0f;
        (((struct oB4_float *)(t1))->v) = 1.0f;
        *(unsigned int *)((t1 + 0x4)) = 0xC149CA4;
        *(unsigned char *)((t1 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned int *)((t1 + 0x10)) = a4;
        *(unsigned char *)((t1 + 0x2)) = a5;
        (((struct o48_float *)(t1))->v) = 0.0f;
        (((struct o44_float *)(t1))->v) = 0.0f;
        (((struct o40_float *)(t1))->v) = 0.0f;
        (((struct oA4_uint *)(t1))->v) = (0x9A0 + a4);
        t2 = *(signed char *)((t1 + 0x2));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x28)) = *(struct mv3 *)((0xC202A08 + (((t2 << 1) + t2) << 2))); }
        *(unsigned int *)((t1 + 0x3C)) = 0x0;
        *(unsigned int *)((t1 + 0x38)) = 0x0;
        *(unsigned int *)((t1 + 0x34)) = 0x0;
        FUN_0c149560(t1, 0x1);
        FUN_0c0b21ac(t1, 0x7);
        t0 = t1;
    }
    return t0;
}

int FUN_0c083384(int a4, int a5)
{
    int stk[6];
    register int t33;

    t33 = 0x0;
    if (((((struct o376C_int *)(a4))->v)) != 0) {
        *(float *)(((int)stk + 12)) = ((((struct o28_float *)(((((struct o376C_int *)(a4))->v))))->v));
        *(float *)(((int)stk + 16)) = ((((struct o2C_float *)(((((struct o376C_int *)(a4))->v))))->v));
        *(float *)(((int)stk + 20)) = ((((struct o30_float *)(((((struct o376C_int *)(a4))->v))))->v));
        t33 = 0x0;
        if (((((struct oA4_int *)(((((struct o376C_int *)(a4))->v))))->v)) != 0) {
            math_mat_get_translate(((((struct oA4_int *)(((((struct o376C_int *)(a4))->v))))->v)), (((int)stk + 0) + 0xC));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)((((((struct o376C_int *)(a4))->v)) + 0x28)); }
            math_mat_transform_vector(((int)stk + 0), ((((struct oA4_int *)(((((struct o376C_int *)(a4))->v))))->v)), *(Stk3 *)(((int)stk + 0)));
            *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) + (*(float *)(((int)stk + 0))));
            *(float *)(((int)stk + 16)) = ((*(float *)(((int)stk + 16))) + (*(float *)(((int)stk + 4))));
            *(float *)(((int)stk + 20)) = ((*(float *)(((int)stk + 20))) + (*(float *)(((int)stk + 8))));
            *(float *)((a5 + 0x0)) = (*(float *)(((int)stk + 12)));
            (((struct o4_float *)(a5))->v) = (*(float *)(((int)stk + 16)));
            (((struct o8_float *)(a5))->v) = (*(float *)(((int)stk + 20)));
            t33 = 0x1;
        }
    }
    return t33;
}

int FUN_0c085eac(int a4, int a5)
{
    register int t0;
    register int t1;

    t0 = FUN_0c064f80(a4);
    if (t0 != 0) {
        t0 = *(signed char *)(((0xC25B914 + (((*(signed char *)((0xC2738C4 + ((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x3721))) * (unsigned short)0x34)))) << 2) << 2)) + (*(signed char *)((a4 + 0x2)))));
        t1 = ((t0 << 1) + t0);
    } else {
        t0 = *(signed char *)(((0xC25B914 + (((*(signed char *)((0xC2738C5 + ((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x3721))) * (unsigned short)0x34)))) << 2) << 2)) + (*(signed char *)((a4 + 0x2)))));
        t1 = ((t0 << 1) + t0);
    }
    t0 = FUN_0c07ce58(a4, (((t1 << 2) << 1) + 0xC25AFFC));
    if (t0 != 0) {
        (((struct o372D_uchar *)(a4))->v) = a5;
        if (t0 != ((*(signed char *)((a4 + 0x1))) + 0x1)) {
            (((struct o377C_uint *)(a4))->v) = (((t0 - 1) * 0x3938) + 0xC532498);
            (((struct o3760_uint *)(a4))->v) = (((t0 - 1) * 0x3938) + 0xC532498);
            { struct mv3 { int w[3]; }; *(struct mv3 *)((0x380C + a4)) = *(struct mv3 *)((((((struct o377C_int *)(a4))->v)) + 0x28)); }
        }
    } else {
        (((struct o3731_uchar *)(a4))->v) = 0x2;
    }
    return 0x0;
}


int FUN_0c13f5dc(int a4, int a5)
{
    int stk[1];
    register int t2;
    register int t3;
    register int t18;

    *(unsigned char *)(((int)stk + 0)) = a5;
    t2 = FUN_0c037320(0x8, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
    t3 = FUN_0c03f444(0x5, 0x0, t2);
    t18 = t3;
    if (t3 != 0) {
        *(unsigned int *)((t3 + 0x4)) = 0xC13F696;
        *(unsigned char *)((t3 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t3 + 0x10)) = a4;
        FUN_0c03733c(t3, 0x8, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
        (((struct oA8_uchar *)(t3))->v) = 0x1;
        (((struct oAC_ushort *)(t3))->v) = 0x1F;
        (((struct oA9_uchar *)(t3))->v) = 0x21;
        thunk_FUN_0c058310(((*(int *)(((((*(int *)((((unsigned char)(*(signed char *)(((int)stk + 0))) << 2) + 0xC2A2224))) << 2) + (0xC53255C + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938))) + 0x0))) + 0x28), (t3 + 0x28));
        (((struct o48_float *)(t3))->v) = 1.0f;
        (((struct o44_float *)(t3))->v) = 1.0f;
        (((struct o40_float *)(t3))->v) = 1.0f;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t3 + 0x34)) = *(struct mv3 *)((a4 + 0x34)); }
        (((struct o2C_float *)(t3))->v) = ((((struct o2C_float *)(a4))->v));
        if ((*(signed char *)(((int)stk + 0))) != 0) {
            *(unsigned int *)((t3 + 0x38)) = ((*(int *)((t3 + 0x38))) + 0x8000);
        }
        t18 = 0x2C;
    }
    return t18;
}

int FUN_0c149000(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        if ((int)(*(short *)((a4 + 0x1C))) > 0) {
            *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
        }
        t0 = *(short *)((a4 + 0x1C));
        if (t0 == 0) {
            return FUN_0c148d64(a4, 0x2, 0x0);
        }
        return t0;
    }
    (((struct oA8_uchar *)(a4))->v) = 0x0;
    t0 = *(signed char *)((a4 + 0x2));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)((0xC2029D8 + (((t0 << 1) + t0) << 2))); }
    (((struct o48_float *)(a4))->v) = 0.0f;
    (((struct o44_float *)(a4))->v) = 0.0f;
    (((struct o40_float *)(a4))->v) = 0.0f;
    (((struct o7C_uint *)(((((struct oC8_int *)(a4))->v))))->v) = 0x0;
    (((struct o78_uint *)(((((struct oC8_int *)(a4))->v))))->v) = 0x0;
    (((struct o78_uint *)(((((struct oCC_int *)(a4))->v))))->v) = 0x0;
    FUN_0c148d04(a4, 0x1);
    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
    if ((int)(*(short *)((a4 + 0x1C))) > 0) {
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
    }
    t0 = *(short *)((a4 + 0x1C));
    if (t0 == 0) {
        return FUN_0c148d64(a4, 0x2, 0x0);
    }
    return t0;
}

int FUN_0c0e60b0(int a4, float f4)
{
    int stk[6];
    register int t4;
    register int t6;
    register float u8;
    register float u9;
    register int t20;
    register int t21;
    register int t22;
    register float u26;
    register int t1;
    register int t2;
    register int t3;
    register int t5;
    register int t23;

    t4 = a4;
    t6 = 0x0;
    u8 = f4;
    u9 = ((((struct o0_float *)0xC0E61DC)->v));
    for (;;) {
        if ((int)t6 >= (int)0x4) {
            break;
        }
        t1 = (t6 * 0x3938);
        t1 = (t1 + 0xC532498);
        t3 = (*(signed char *)((t1 + 0x3714)));
        t20 = t1;
        t21 = t2;
        t22 = t3;
        if (t3 != 0) {
            t3 = 0xC17C2A0;
            t4 = ((int)stk + 0);
            *(float *)(((int)stk + 12)) = (((((struct o28_float *)(t1))->v)) - ((((struct o28_float *)(a4))->v)));
            *(float *)(((int)stk + 20)) = (((((struct o30_float *)(t1))->v)) - ((((struct o30_float *)(a4))->v)));
            *(float *)(((int)stk + 16)) = 0.0f;
            t4 = (t4 + 0xC);
            u8 = ((nlScalor(t4)));
            if (u9 > u8) {
                t2 = ((int)stk + 0);
                t3 = 0xC187798;
                u9 = u8;
                t2 = (t2 + 0xC);
                t1 = ((int)stk + 0);
                { struct mv3 { int w[3]; }; *(struct mv3 *)(t1) = *(struct mv3 *)(t2); }
                t5 = t6;
                t20 = t1;
                t21 = t2;
                t22 = 0xC187798;
            }
        } else {
            t23 = t4;
        }
        t1 = t20;
        t6 = (t6 + 0x1);
        t2 = t21;
        t3 = t22;
        t4 = t23;
    }
    u26 = (((struct o10_float *)0xC0E61DC)->v);
    math_vec3_mul_xyz(((int)stk + 0), (u26 / u9), (u26 / u9), (u26 / u9));
    nlAddVector3op((a4 + 0x28), (a4 + 0x28), ((int)stk + 0));
    (((struct o2C_float *)(a4))->v) = ((((struct o2C_float *)(((t5 * 0x3938) + 0xC532498)))->v));
    return 0x2C;
}

int FUN_0c1325a4(int a4)
{
    register int t0;
    register int t1;

    t0 = FUN_0c037320(0xB, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
    t1 = FUN_0c03f444(0x5, 0x0, t0);
    t0 = t1;
    if (t1 != 0) {
        FUN_0c03733c(t1, 0xB, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
        (((struct oA8_uchar *)(t1))->v) = 0x1;
        *(unsigned char *)((t1 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        (((struct oAC_ushort *)(t1))->v) = 0xF;
        (((struct oA9_uchar *)(t1))->v) = 0x21;
        (((struct o14_uchar *)(t1))->v) = 0x0;
        (((struct o15_uchar *)(t1))->v) = 0x0;
        *(unsigned short *)((t1 + 0x1C)) = 0x0;
        *(unsigned short *)((t1 + 0x1E)) = 0x0;
        (((struct o28_float *)(t1))->v) = -2.0f;
        (((struct o2C_float *)(t1))->v) = -12.0f;
        (((struct o30_float *)(t1))->v) = 22.0f;
        *(unsigned int *)((t1 + 0x34)) = 0xC17;
        *(unsigned int *)((t1 + 0x38)) = 0xF99B;
        *(unsigned int *)((t1 + 0x3C)) = 0x1555;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x40)) = *(struct mv3 *)(0xC2A1638); }
        *(unsigned int *)((t1 + 0x10)) = a4;
        (((struct oA4_uint *)(t1))->v) = (((((struct oE4_int *)(a4))->v)) + 0x28);
        *(unsigned int *)((t1 + 0x4)) = 0xC132570;
        *(unsigned char *)((((((struct oC4_int *)(t1))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(t1))->v)) + 0x6)) = 0x1;
        t0 = 0x1;
    }
    return t0;
}


void FUN_0c160c7c(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            FUN_0c03f346(a4, a5, a6, a7);
    return;
        }
        if ((int)(*(short *)((a4 + 0x1C))) <= (int)0x8) {
            FUN_0c0588bc((a4 + 0x40), 0xC2A2DE4, 0xC2A2DD8, (*(short *)((a4 + 0x1C))), 0x8, 0x0);
        }
        if ((int)(*(short *)((a4 + 0x1C))) >= (int)0x8) {
            FUN_0c058a6e((0xB0 + a4), 0xC2A2E00, 0xC2A2DF0, (*(short *)((a4 + 0x1C))), 0x18, 0x8);
        }
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
        if ((int)(short)(t0 + 0x1) > (int)0x18) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        }
        return;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x1, 0x29, (*(int *)0xC4B40CC));
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct oAC_ushort *)(a4))->v) = 0x21F;
    { struct mv4 { int w[4]; }; *(struct mv4 *)((0xB0 + a4)) = *(struct mv4 *)(0xC2A2DC8); }
}


int FUN_0c0f485a(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;
    register float u1;

    t0 = 0x0;
    t1 = a6;
    for (;;) {
        if ((int)t0 >= (int)((((struct oC0_int *)(a4))->v))) {
            break;
        }
        t1 = t0;
        t1 = (t1 << 2);
        t1 = (t1 + (0xC4 + a4));
        t1 = (*(int *)((t1 + 0x0)));
        *(unsigned char *)((t1 + 0x0)) = 0x1;
        *(unsigned short *)((t1 + 0x6)) = 0xF;
        t2 = 0x2;
        t3 = *(signed char *)((0xC2885B4 + t0));
        t2 = (t2 + t1);
        t0 = (t0 + 0x1);
        *(unsigned char *)((t2 + 0x0)) = t3;
    }
    *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x1F;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC4_int *)(a4))->v)) + 0x84)) = *(struct mv3 *)((a4 + 0x40)); }
    t0 = (a4 + 0x40);
    t2 = 0x0;
    t3 = t1;
    for (;;) {
        if ((int)t2 >= (int)((((struct o114_int *)(a4))->v))) {
            break;
        }
        t0 = 0x118;
        t3 = t2;
        t3 = (t3 << 2);
        t0 = (t0 + a4);
        u0 = 1.0f;
        t0 = (t0 + t3);
        t2 = (t2 + 0x1);
        (((struct o64_ushort *)((*(int *)((t0 + 0x0)))))->v) = 0xF;
        u1 = u0;
        u1 = u1 + (0.125f) * (((((struct o44_float *)(a4))->v)));
        u0 = u1;
        t3 = (t3 + (0x118 + a4));
        t0 = (*(int *)((t3 + 0x0)));
        (((struct o88_float *)(t0))->v) = u0;
    }
    return 0x114;
}

int FUN_0c112d40(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 80) {
                t1 = t0;
                if (t0 != 99) {
                } else {
                    (((struct o14_uchar *)(a4))->v) = 0x50;
                    t1 = 0x14;
                }
                return t1;
            }
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        t0 = (((struct oC4_int *)(a4))->v);
        t1 = 0xC291520;
        if ((*(signed char *)((a4 + 0x2))) == 1) {
            t1 = 0xC29152C;
        }
        return nlAddVector3op((t0 + 0x6C), (0x90 + t0), t1);
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct oAC_ushort *)(a4))->v) = 0x1F;
    (((struct oA9_uchar *)(a4))->v) = 0x21;
    FUN_0c1171f0(a4);
    FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x7, 0x3, (*(int *)0xC4B410C));
    t0 = (((struct oC4_int *)(a4))->v);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x90 + t0)) = *(struct mv3 *)((t0 + 0x6C)); }
    t0 = (((struct oC4_int *)(a4))->v);
    t1 = 0xC291520;
    if ((*(signed char *)((a4 + 0x2))) == 1) {
        t1 = 0xC29152C;
    }
    return nlAddVector3op((t0 + 0x6C), (0x90 + t0), t1);
}

int FUN_0c118708(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 80) {
                t1 = t0;
                if (t0 != 99) {
                } else {
                    (((struct o14_uchar *)(a4))->v) = 0x50;
                    t1 = 0x14;
                }
                return t1;
            }
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        t0 = (((struct oC4_int *)(a4))->v);
        t1 = 0xC291D58;
        if ((*(signed char *)((a4 + 0x2))) == 1) {
            t1 = 0xC291D64;
        }
        return nlAddVector3op((t0 + 0x6C), (0x90 + t0), t1);
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct oAC_ushort *)(a4))->v) = 0x1F;
    (((struct oA9_uchar *)(a4))->v) = 0x21;
    FUN_0c1171f0(a4);
    FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0xB, 0xD, (*(int *)0xC4B410C));
    t0 = (((struct oC4_int *)(a4))->v);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x90 + t0)) = *(struct mv3 *)((t0 + 0x6C)); }
    t0 = (((struct oC4_int *)(a4))->v);
    t1 = 0xC291D58;
    if ((*(signed char *)((a4 + 0x2))) == 1) {
        t1 = 0xC291D64;
    }
    return nlAddVector3op((t0 + 0x6C), (0x90 + t0), t1);
}

int FUN_0c16c016(int a4)
{

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R6;
    register int R7;
    register int R8;
    register int R9;
    register int R12;
    register int R13;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    v0_0 = a4;
    v0_2 = R13;
    v0_1 = *(signed char *)((v0_0 + 0x14));
    v0_2 = (v0_1);
    v0_0 = (v0_0);
    if ((v0_1 == 0)) goto L_C16C02E;
    if ((v0_2 == 1)) goto L_C16C036;
    L_C16C0BA:;
    return FUN_0c03f346(v0_0, R5, R6, R7);
    L_C16C036:;
    v0_1 = (*(signed char *)((v0_0 + 0x2))) != 1;
    if (v0_1) goto L_C16C07C;
    v0_1 = FUN_0c16bd38((*(signed char *)((v0_0 + 0x1))), (v0_0 + 0x28), (v0_0 + 0x34), 0x1);
    R13 = (v0_1);
    if ((v0_1 != 0)) goto L_C16C092;
    goto L_C16C0BA;
    L_C16C092:;
    FUN_0c03744a(((((struct oC4_int *)(R13))->v)), 0x0, 0x29, (*(int *)0xC4B40CC));
    *(unsigned char *)((R13 + 0x1)) = (*(signed char *)((v0_0 + 0x1)));
    *(unsigned int *)((R13 + 0x4)) = 0xC16BF02;
    *(unsigned short *)((R13 + 0x1C)) = 0x3C;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((R13 + 0x40)) = *(struct mv3 *)(0xC2A3930); }
    goto L_C16C0BA;
    L_C16C07C:;
    v0_1 = FUN_0c16bd38((*(signed char *)((v0_0 + 0x1))), (v0_0 + 0x28), (v0_0 + 0x34), 0x0);
    R13 = (v0_1);
    if ((v0_1 == 0)) goto L_C16C0BA;
    goto L_C16C092;
    L_C16C02E:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    goto L_C16C036;
}
