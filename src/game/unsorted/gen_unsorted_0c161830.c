/* game/unsorted: functions 0C161830-0C163134, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o10_float { char p[0x10]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o24_float { char p[0x24]; float v; };
struct o24_short { char p[0x24]; short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o38A8_short { char p[0x38A8]; short v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB0_float { char p[0xB0]; float v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c037498(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int math_vec3_mul_xyz(int, float, float, float);
int math_mat_get_translate(int, int);
int FUN_0c059df2(int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c064f80(int);
int FUN_0c07e3ae(int, int);
int FUN_0c07e3fc(int, int);
int FUN_0c07e420(int, int);
float math_signed_sqrt(float);
int math_atan_angle16(float);
int math_atan2_angle16(float, float);
float math_cos_angle16(int);
float math_sin_angle16(int);
int nlCalcPoint(int, int);
int nlInvertMatrix(int);
int nlSelectMatrixStack(int);
int nlSetTranslate(int);
int nlUnitMatrix(void);
int FUN_0c17c130(int, int, int);
float FUN_0c0e2340(int);
int FUN_0c0e2390(int, int, int);
int FUN_0c187798(void);
int FUN_0c161830(int a4, int a5, int a6, int a7);
int FUN_0c161c66(int a4);
int FUN_0c162146(int a4, int a5, int a6);
int FUN_0c162560(int a4, int a5, int a6, int a7);
int FUN_0c162770(int a4, int a5, int a6, int a7);
int FUN_0c162860(int a4, int a5);
int FUN_0c162c4e(int a4, int a5, int a6, int a7);
int FUN_0c162f8a(int a4, int a5, int a6, int a7);
int FUN_0c163116(int a4, int a5, int a6);


int FUN_0c161c66(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;

    t0 = FUN_0c037320(0x23, (*(int *)0xC4B40D8));
    t1 = 0x0;
    if ((int)t0 >= 0) {
        t2 = FUN_0c03f444(0x5, 0x0, (t0 + 0x3));
        t3 = 0x0;
        if (t2 != 0) {
            FUN_0c03733c(t2, 0x23, (*(int *)0xC4B40D8));
            if ((int)0x2 < (int)(t0 + 0x3)) {
                t4 = ((0xC4 + t2) + 0x8);
                t5 = 0x2;
                t6 = 0x1;
                for (;;) {
                    t7 = *(int *)((t4 + 0x0));
                    t4 = (t4 + 0x4);
                    FUN_0c03744a(t7, t6, 0x44, (*(int *)0xC4B40D8));
                    t5 = (t5 + 0x1);
                    t6 = (t6 + 0x1);
                    if ((int)t5 >= (int)(t0 + 0x3)) {
                        break;
                    }
                }
            }
            *(unsigned char *)((t2 + 0x1)) = (*(signed char *)((a4 + 0x1)));
            *(unsigned int *)((t2 + 0x4)) = 0xC161830;
            (((struct oA8_uchar *)(t2))->v) = 0x1;
            (((struct oAC_ushort *)(t2))->v) = 0xF;
            (((struct oA9_uchar *)(t2))->v) = 0x40;
            *(unsigned int *)((t2 + 0x10)) = a4;
            (((struct o48_float *)(t2))->v) = 1.0f;
            (((struct o44_float *)(t2))->v) = 1.0f;
            (((struct o40_float *)(t2))->v) = 1.0f;
            (((struct oA4_uint *)(t2))->v) = 0x0;
            t0 = (((struct oC4_int *)(t2))->v);
            (((struct o7C_uint *)(t0))->v) = 0x0;
            (((struct o80_uint *)(t0))->v) = 0x0;
            (((struct o78_uint *)(t0))->v) = 0x4000;
            t4 = *(int *)((0xC532598 + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938)));
            (((struct o68_uint *)(t0))->v) = (t4 + 0x28);
            math_mat_get_translate((t4 + 0x28), (t2 + 0x28));
            *(unsigned char *)((t0 + 0x0)) = 0x1;
            *(unsigned short *)((t0 + 0x6)) = 0xF;
            t0 = (((struct oC8_int *)(t2))->v);
            (((struct o74_float *)(t0))->v) = 0.0f;
            (((struct o70_float *)(t0))->v) = 0.0f;
            (((struct o6C_float *)(t0))->v) = 0.0f;
            (((struct o80_uint *)(t0))->v) = 0x0;
            (((struct o7C_uint *)(t0))->v) = 0x0;
            (((struct o78_uint *)(t0))->v) = 0x0;
            (((struct o68_uint *)(t0))->v) = 0x0;
            t3 = t2;
        }
        t1 = t3;
    }
    return t1;
}

int FUN_0c162146(int a4, int a5, int a6)
{
    int stk[1];
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t7;
    register int t24;
    register int t25;
    register int t29;
    register int t46;
    register int t58;
    register int t49;
    register int t50;
    register int t51;
    register int t64;

    *(unsigned int *)(((int)stk + 0)) = a5;
    t0 = *(int *)(((int)stk + 0));
    t1 = *(int *)0xC4B40CC;
    if (t0 != 0) {
        if (t0 != 1) {
            t64 = 0x0;
            if (t0 == 2) {
                t2 = FUN_0c037320(0xF, t1);
                t64 = 0x0;
                if ((int)t2 >= 0) {
                    t3 = FUN_0c03f444(0x5, 0x0, t2);
                    t64 = 0x0;
                    if (t3 != 0) {
                        *(unsigned char *)((t3 + 0x1)) = (*(signed char *)((a4 + 0x1)));
                        *(unsigned int *)((t3 + 0x4)) = 0xC161DA4;
                        *(unsigned char *)((t3 + 0x2)) = (*(int *)(((int)stk + 0)));
                        (((struct oA8_uchar *)(t3))->v) = 0x1;
                        (((struct oAC_ushort *)(t3))->v) = 0xF;
                        (((struct oA9_uchar *)(t3))->v) = 0x21;
                        *(unsigned int *)((t3 + 0x10)) = a4;
                        (((struct o48_float *)(t3))->v) = 1.20000005f;
                        (((struct o44_float *)(t3))->v) = 1.20000005f;
                        (((struct o40_float *)(t3))->v) = 1.20000005f;
                        (((struct o30_float *)(t3))->v) = 0.0f;
                        (((struct o2C_float *)(t3))->v) = 0.0f;
                        (((struct o28_float *)(t3))->v) = 0.0f;
                        *(unsigned int *)((t3 + 0x34)) = 0x0;
                        *(unsigned int *)((t3 + 0x38)) = 0x0;
                        *(unsigned int *)((t3 + 0x3C)) = 0x0;
                        t7 = (((struct oC4_int *)(t3))->v);
                        FUN_0c03744a(t7, 0x0, 0xF, (*(int *)0xC4B40CC));
                        *(unsigned char *)((t7 + 0x0)) = 0x1;
                        *(unsigned short *)((t7 + 0x6)) = 0xF;
                        (((struct o8C_float *)(t7))->v) = 1.0f;
                        (((struct o88_float *)(t7))->v) = 1.0f;
                        (((struct o84_float *)(t7))->v) = 1.0f;
                        t64 = t3;
                    }
                }
            }
        } else {
            t24 = FUN_0c037320(0x10, t1);
            t64 = 0x0;
            if ((int)t24 >= 0) {
                t25 = FUN_0c03f444(0x5, 0x0, t24);
                t64 = 0x0;
                if (t25 != 0) {
                    *(unsigned char *)((t25 + 0x1)) = (*(signed char *)((a4 + 0x1)));
                    *(unsigned int *)((t25 + 0x4)) = 0xC161DA4;
                    *(unsigned char *)((t25 + 0x2)) = (*(int *)(((int)stk + 0)));
                    (((struct oA8_uchar *)(t25))->v) = 0x1;
                    (((struct oAC_ushort *)(t25))->v) = 0x3F;
                    (((struct oA9_uchar *)(t25))->v) = 0x21;
                    *(unsigned int *)((t25 + 0x10)) = a4;
                    (((struct o48_float *)(t25))->v) = 2.4000001f;
                    (((struct o44_float *)(t25))->v) = 2.4000001f;
                    (((struct o40_float *)(t25))->v) = 2.4000001f;
                    (((struct o30_float *)(t25))->v) = 0.0f;
                    (((struct o2C_float *)(t25))->v) = 0.0f;
                    (((struct o28_float *)(t25))->v) = 0.0f;
                    *(unsigned int *)((t25 + 0x34)) = 0x0;
                    *(unsigned int *)((t25 + 0x38)) = 0x0;
                    *(unsigned int *)((t25 + 0x3C)) = 0x0;
                    t29 = (((struct oC4_int *)(t25))->v);
                    FUN_0c03744a(t29, 0x0, 0x10, (*(int *)0xC4B40CC));
                    *(unsigned char *)((t29 + 0x0)) = 0x1;
                    *(unsigned short *)((t29 + 0x6)) = 0xF;
                    (((struct o8C_float *)(t29))->v) = 1.0f;
                    (((struct o88_float *)(t29))->v) = 1.0f;
                    (((struct o84_float *)(t29))->v) = 1.0f;
                    t64 = t25;
                }
            }
        }
    } else {
        t46 = FUN_0c03f444(0x5, 0x0, 0x3);
        t58 = 0x0;
        if (t46 != 0) {
            *(unsigned char *)((t46 + 0x1)) = (*(signed char *)((a4 + 0x1)));
            *(unsigned int *)((t46 + 0x4)) = 0xC161DA4;
            *(unsigned char *)((t46 + 0x2)) = (*(int *)(((int)stk + 0)));
            (((struct oA8_uchar *)(t46))->v) = 0x1;
            (((struct oAC_ushort *)(t46))->v) = 0xF;
            (((struct oA9_uchar *)(t46))->v) = 0x21;
            *(unsigned int *)((t46 + 0x10)) = a4;
            (((struct o48_float *)(t46))->v) = 1.0f;
            (((struct o44_float *)(t46))->v) = 1.0f;
            (((struct o40_float *)(t46))->v) = 1.0f;
            (((struct o30_float *)(t46))->v) = 0.0f;
            (((struct o2C_float *)(t46))->v) = 0.0f;
            (((struct o28_float *)(t46))->v) = 0.0f;
            *(unsigned int *)((t46 + 0x34)) = 0x0;
            *(unsigned int *)((t46 + 0x38)) = 0x0;
            *(unsigned int *)((t46 + 0x3C)) = 0x0;
            *(unsigned int *)(((int)stk + 0)) = 0x0;
            t49 = 0x28;
            t50 = 0xF;
            t51 = a4;
            for (;;) {
                if ((unsigned int)(*(int *)(((int)stk + 0))) >= (unsigned int)0xC) {
                    break;
                }
                t51 = 0xC4;
                t50 = (*(int *)(((int)stk + 0)));
                t51 = (t51 + t46);
                t51 = (t51 + t50);
                t51 = (*(int *)((t51 + 0x0)));
                t49 = (FUN_0c03744a(t51, 0x0, 0x45, (*(int *)0xC4B40CC)));
                *(unsigned char *)((t51 + 0x0)) = 0x1;
                t49 = 0x3F;
                *(unsigned short *)((t51 + 0x6)) = t49;
                t49 = 0x8C;
                *(float *)((t51 + t49)) = (1.0f + 1.0f);
                t49 = (t49 - 4);
                *(float *)((t51 + t49)) = (1.0f + 1.0f);
                t49 = (t49 - 4);
                *(float *)((t51 + t49)) = (1.0f + 1.0f);
                t49 = 0x68;
                *(unsigned int *)((t51 + t49)) = 0x0;
                t50 = (*(int *)(((int)stk + 0)));
                t50 = (t50 + 0x4);
                *(unsigned int *)(((int)stk + 0)) = t50;
            }
            t58 = t46;
        }
        t64 = t58;
    }
    return t64;
}

int FUN_0c162560(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        if ((int)(short)(t0 - 1) < 0) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        return (short)(t0 - 1);
    }
    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 3.0f);
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    t1 = (short)(t0 - 1);
    if ((int)(short)(t0 - 1) < 0) {
        *(unsigned short *)((a4 + 0x1C)) = 0x6;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t1 = 0x14;
    }
    return t1;
}


int FUN_0c162860(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t0 = *(signed char *)(((((a5 << 2) + a5) + 0xC2A2FC8) + 0x1));
    if ((int)t0 <= 0) {
        t1 = FUN_0c037320((*(signed char *)(((((a5 << 2) + a5) + 0xC2A2FC8) + 0x0))), (*(int *)0xC4B40CC));
        t2 = FUN_0c03f444(0x1, 0x0, t1);
        if (t2 != 0) {
            FUN_0c03733c(t2, (*(signed char *)(((((a5 << 2) + a5) + 0xC2A2FC8) + 0x0))), (*(int *)0xC4B40CC));
        }
        t1 = t2;
    } else {
        t2 = FUN_0c03f444(0x1, 0x0, t0);
        if (t2 != 0) {
            if ((int)t0 > 0) {
                t3 = 0x0;
                t4 = 0x0;
                for (;;) {
                    FUN_0c037498((*(int *)((((0xC4 + t2) + t4) + 0x0))), (*(signed char *)(((((a5 << 2) + a5) + 0xC2A2FC8) + 0x2))), (*(signed char *)(((((a5 << 2) + a5) + 0xC2A2FC8) + 0x0))), (*(int *)0xC4B40CC));
                    *(unsigned char *)(((*(int *)((((0xC4 + t2) + t4) + 0x0))) + 0x0)) = 0x1;
                    t3 = (t3 + 0x1);
                    *(unsigned short *)(((*(int *)((((0xC4 + t2) + t4) + 0x0))) + 0x6)) = 0xF;
                    t4 = (t4 + 0x4);
                    if ((int)t3 >= (int)t0) {
                        break;
                    }
                }
            }
        }
        t1 = t2;
    }
    if (t1 != 0) {
        *(unsigned char *)((t1 + 0x1)) = a4;
        (((struct oAC_ushort *)(t1))->v) = 0xF;
        (((struct oA9_uchar *)(t1))->v) = 0x21;
        t0 = (~((int)0x1 << (int)a4));
        if ((int)a4 < 0) {
            t0 = 0xF;
        }
        FUN_0c07e3ae(t1, (*(signed char *)(((((a5 << 2) + a5) + 0xC2A2FC8) + 0x4))));
        FUN_0c064d24(t1, 0x3, (*(signed char *)(((((a5 << 2) + a5) + 0xC2A2FC8) + 0x3))), 0x0, 0x100, (t0), (t0), 0xF0);
    }
    return t1;
}


int FUN_0c162f8a(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = 0xC2A2EC4;
    if (a7 == 0) {
        t0 = 0xC2A2E60;
    }
    t1 = FUN_0c162770(a4, a5, a6, t0);
    t0 = t1;
    if (t1 != 0) {
        *(unsigned int *)((t1 + 0x4)) = 0xC162DAC;
        *(unsigned short *)((t1 + 0x1C)) = 0x5A;
        t0 = 0x5A;
    }
    return t0;
}

int FUN_0c163116(int a4, int a5, int a6)
{
    register int t0;
    register int t1;

    t0 = FUN_0c162770(a4, a5, a6, 0xC2A2E74);
    t1 = t0;
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x4)) = 0xC162FD0;
        *(unsigned short *)((t0 + 0x1C)) = 0x78;
        t1 = 0x78;
    }
    return t1;
}
