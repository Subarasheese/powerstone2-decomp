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

int FUN_0c161830(int a4, int a5, int a6, int a7)
{
    int stk[12];
    register int t0;
    register int t22;
    register int t30;
    register int t37;
    register float u44;
    register float u49;
    register float u50;
    register float t54;
    register float u67;
    register float u82;
    register float u83;
    register float u84;
    register float t85;
    register float u87;
    register int t89;
    register int t95;
    register int t111;
    register int t112;
    register float u114;
    register float u115;
    register float t118;
    register float u127;
    register float u128;
    register float u129;
    register float t130;
    register float u133;
    register int t139;
    register int t2;
    register int t3;
    int t4;
    register int t159;
    register float u19;
    int t23;
    register int t24;
    register int t40;
    register int t41;
    register int t72;
    register float u73;

    t0 = *(int *)((a4 + 0x10));
    if (((unsigned char)(*(signed char *)((((0x389C + t0) + 0x8) + 0x0))) == 36) && ((t2 = *(short *)((((0x389C + t0) + 0x8) + 0x2)), t3 = (((struct o24_short *)(a4))->v), t2 == t3) && (t4 = *(signed char *)((t0 + 0x3714)), t4 != 0))) {
        if (((unsigned short)((((struct oAC_short *)((*(int *)((a4 + 0x10)))))->v)) & 0x400) != 0) {
            (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x400);
            u19 = ((((struct oB0_float *)((*(int *)((a4 + 0x10)))))->v));
        } else {
            (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) & 0xFBFF);
            u19 = 1.0f;
        }
        (((struct oB0_float *)(a4))->v) = u19;
        t22 = *(signed char *)(((*(int *)((a4 + 0x10))) + 0xA8));
        (((struct oA8_uchar *)(a4))->v) = t22;
        if ((t22 != 0) && (t23 = *(int *)((a4 + 0x10)), t24 = (((struct o38A8_short *)(t23))->v), (int)t24 < (int)0x3C)) {
            (((struct oA8_uchar *)(a4))->v) = ((*(signed char *)0xC542260) & 0x1);
        }
        t30 = *(signed char *)((a4 + 0x14));
        if (t30 != 0) {
            if (t30 != 1) {
            } else {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                (((struct o50_float *)(a4))->v) = 0.0f;
                (((struct oA8_uchar *)(a4))->v) = 0x1;
            }
            t37 = FUN_0c064f80((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532498));
            if (t37 != 0) {
                t40 = 0x2C;
                t41 = (0xC532498 + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938));
            } else {
                t40 = 0x168;
                t41 = (0xC532498 + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938));
            }
            u44 = *(float *)((t41 + t40));
            math_mat_get_translate((((((struct oC4_int *)(a4))->v)) + 0x28), (((int)stk + 0) + 0x18));
            (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) - 5.0f);
            (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) - (1.0f + 1.0f));
            u49 = (((struct o2C_float *)(a4))->v);
            u50 = (((struct o50_float *)(a4))->v);
            (((struct o2C_float *)(a4))->v) = (u49 + u50);
            if (!((u49 + u50) > (u44 + 25.0f))) {
                (((struct o2C_float *)(a4))->v) = (u44 + 25.0f);
                (((struct o50_float *)(a4))->v) = 0.0f;
                (((struct o4C_float *)(a4))->v) = 0.0f;
            }
            FUN_0c0e2390((((int)stk + 0) + 0xC), (a4 + 0x28), (((int)stk + 0) + 0x18));
            t54 = FUN_0c0e2340((((int)stk + 0) + 0xC));
            if (40.0f > t54) {
                if (t54 != 0.0f) {
                    math_vec3_mul_xyz((((int)stk + 0) + 0xC), (40.0f / t54), (40.0f / t54), (40.0f / t54));
                } else {
                    *(float *)(((int)stk + 20)) = 0.0f;
                    *(float *)(((int)stk + 12)) = 0.0f;
                    *(float *)(((int)stk + 16)) = -40.0f;
                }
                FUN_0c17c130((a4 + 0x28), (((int)stk + 0) + 0x18), (((int)stk + 0) + 0xC));
                t72 = 0x0;
                u73 = 40.0f;
            } else {
                t72 = 0x0;
                u67 = t54;
                if (t54 > 120.0f) {
                    math_vec3_mul_xyz((((int)stk + 0) + 0xC), (120.0f / t54), (120.0f / t54), (120.0f / t54));
                    FUN_0c17c130((a4 + 0x28), (((int)stk + 0) + 0x18), (((int)stk + 0) + 0xC));
                    t72 = 0x1;
                    u67 = 120.0f;
                }
                u73 = u67;
            }
            nlSelectMatrixStack(0x1);
            nlUnitMatrix();
            nlSetTranslate((a4 + 0x28));
            nlInvertMatrix(0x0);
            FUN_0c0e2390((((int)stk + 0) + 0xC), (((int)stk + 0) + 0x18), (a4 + 0x28));
            if (t72 != 0) {
                u82 = *(float *)(((int)stk + 12));
                u83 = *(float *)(((int)stk + 16));
                u84 = (u83 * u83);
                u84 = u84 + u82 * u82;
                t85 = math_signed_sqrt(u84);
                u87 = t85;
                if (t85 == 0.0f) {
                    u87 = -9.99999975e-06f;
                }
                t89 = (((struct oC8_int *)(a4))->v);
                (((struct o80_uint *)(t89))->v) = (math_atan2_angle16((*(float *)(((int)stk + 12))), (-(*(float *)(((int)stk + 16))))));
                (((struct o78_uint *)(t89))->v) = (math_atan_angle16(((-(*(float *)(((int)stk + 20)))) / u87)));
                t95 = (((struct o22_short *)(a4))->v);
                (((struct o22_ushort *)(a4))->v) = (t95 - 1);
                if ((int)(short)(t95 - 1) <= 0) {
                    FUN_0c059df2((*(signed char *)((a4 + 0x1))), 0x5D);
                    (((struct o22_ushort *)(a4))->v) = 0x28;
                }
            }
            FUN_0c187798();
            t111 = 0x2;
            for (;;) {
                t112 = *(int *)((((t111 << 2) + (0xC4 + a4)) + 0x0));
                math_mat_get_translate((t112 + 0x28), (((int)stk + 0) + 0xC));
                u114 = (((struct o4C_float *)(a4))->v);
                u115 = *(float *)(((int)stk + 16));
                *(float *)(((int)stk + 16)) = (u115 + u114);
                if ((u44 + 25.0f) > (u115 + u114)) {
                    *(float *)(((int)stk + 16)) = (u44 + 25.0f);
                }
                FUN_0c0e2390((((int)stk + 0) + 0x24), (((int)stk + 0) + 0xC), (((int)stk + 0) + 0x18));
                t118 = FUN_0c0e2340((((int)stk + 0) + 0x24));
                if (t118 > (((4.0999999f - (float)t111) / 4.0f) * u73)) {
                    math_vec3_mul_xyz((((int)stk + 0) + 0x24), ((((4.0999999f - (float)t111) / 4.0f) * u73) / t118), ((((4.0999999f - (float)t111) / 4.0f) * u73) / t118), ((((4.0999999f - (float)t111) / 4.0f) * u73) / t118));
                    FUN_0c17c130((((int)stk + 0) + 0xC), (((int)stk + 0) + 0x18), (((int)stk + 0) + 0x24));
                }
                nlCalcPoint((((int)stk + 0) + 0xC), (t112 + 0x6C));
                FUN_0c0e2390((((int)stk + 0) + 0x24), ((int)stk + 0), (((int)stk + 0) + 0xC));
                FUN_0c187798();
                u127 = *(float *)(((int)stk + 36));
                u128 = *(float *)(((int)stk + 40));
                u129 = (u128 * u128);
                u129 = u129 + u127 * u127;
                t130 = math_signed_sqrt(u129);
                u133 = t130;
                if (t130 == 0.0f) {
                    u133 = (*(float *)0xC161D64);
                }
                (((struct o80_uint *)(t112))->v) = (math_atan2_angle16((*(float *)(((int)stk + 36))), (-(*(float *)(((int)stk + 40))))));
                t139 = math_atan_angle16(((-(*(float *)(((int)stk + 44)))) / u133));
                t111 = (t111 + 0x1);
                (((struct o78_uint *)(t112))->v) = t139;
                if ((int)t111 < (int)0x5) continue;
                break;
            }
            t159 = t139;
        } else {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            (((struct oA8_uchar *)(a4))->v) = 0x0;
            (((struct o22_ushort *)(a4))->v) = 0x0;
            t159 = 0x22;
        }
    } else {
        t159 = (FUN_0c03f346(a4, t0, a6, a7));
    }
    return t159;
}

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

int FUN_0c162770(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;

    t0 = (~((int)0x1 << (int)a4));
    if ((int)a4 < 0) {
        t0 = 0x44F;
    }
    t1 = FUN_0c037320((*(int *)((a7 + 0x0))), (*(int *)0xC4B40CC));
    t2 = FUN_0c03f444(0x1, 0x0, t1);
    t1 = 0x0;
    if (t2 != 0) {
        FUN_0c03733c(t2, (*(int *)((a7 + 0x0))), (*(int *)0xC4B40CC));
        *(unsigned char *)((t2 + 0x1)) = a4;
        (((struct oAC_ushort *)(t2))->v) = 0xF;
        (((struct oA9_uchar *)(t2))->v) = 0x21;
        FUN_0c07e3ae(t2, (*(int *)((a7 + 0x8))));
        FUN_0c064d24(t2, 0x3, (*(int *)((a7 + 0x4))), 0x0, 0x100, (t0), (t0), 0xF0);
        FUN_0c187798();
        FUN_0c187798();
        u0 = (((struct oC_float *)(a7))->v);
        u1 = (((struct o10_float *)(a7))->v);
        (((struct o54_float *)(t2))->v) = (u0 * (math_cos_angle16((*(int *)((a6 + 0x4))))));
        (((struct o4C_float *)(t2))->v) = (u0 * (math_sin_angle16((*(int *)((a6 + 0x4))))));
        (((struct o50_float *)(t2))->v) = 0.0f;
        (((struct o5C_float *)(t2))->v) = u1;
        (((struct o48_float *)(t2))->v) = 1.0f;
        (((struct o44_float *)(t2))->v) = 1.0f;
        (((struct o40_float *)(t2))->v) = 1.0f;
        t1 = t2;
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

int FUN_0c162c4e(int a4, int a5, int a6, int a7)
{
    int stk[8];
    register int t1;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t35;
    register int t17;
    register float u24;
    register float u26;
    register int t29;
    register int t30;
    register float u31;
    register int t28;

    *(unsigned int *)(((int)stk + 16)) = a4;
    *(unsigned int *)(((int)stk + 28)) = a6;
    *(unsigned int *)(((int)stk + 24)) = a7;
    t1 = *(int *)((((*(signed char *)0xC542237) << 2) + 0xC2A2FD8));
    t3 = *(int *)(((t1 + (a5 * 0x2C)) + 0x4));
    t4 = *(int *)(((*(int *)(((t1 + (a5 * 0x2C)) + 0x0))) + 0x0));
    t5 = FUN_0c037320(t3, t4);
    t6 = FUN_0c03f444(0x1, 0x0, t5);
    t35 = t6;
    if (t6 != 0) {
        FUN_0c03733c(t6, t3, t4);
        *(unsigned int *)((t6 + 0x4)) = 0xC1629B0;
        *(unsigned char *)((t6 + 0x1)) = (*(int *)(((int)stk + 16)));
        (((struct o15_uchar *)(t6))->v) = (*(int *)(((t1 + (a5 * 0x2C)) + 0x14)));
        (((struct oAC_ushort *)(t6))->v) = 0xF;
        (((struct oA9_uchar *)(t6))->v) = 0x21;
        if ((*(int *)(((t1 + (a5 * 0x2C)) + 0xC))) == 0) {
            FUN_0c07e3fc(t6, (*(int *)(((t1 + (a5 * 0x2C)) + 0x10))));
        } else {
            FUN_0c07e420(t6, (*(int *)(((t1 + (a5 * 0x2C)) + 0x10))));
        }
        *(int *)((int)stk + 12) = 0x0;
        t17 = *(int *)(((int)stk + 16));
        *(unsigned short *)(((int)stk + 20)) = (~((int)0x1 << (int)t17));
        *(int *)((int)stk + 8) = (~((int)0x1 << (int)t17));
        *(int *)((int)stk + 4) = (~((int)0x1 << (int)t17));
        *(int *)((int)stk + 0) = 0x100;
        FUN_0c064d24(t6, 0x3, (*(int *)(((t1 + (a5 * 0x2C)) + 0x8))), 0x1, 0x100, (~((int)0x1 << (int)t17)), (~((int)0x1 << (int)t17)), 0x0);
        *(volatile int *)(((int)stk + 28));
        FUN_0c187798();
        *(volatile int *)(((int)stk + 24));
        FUN_0c187798();
        u24 = (((struct o20_float *)((t1 + (a5 * 0x2C))))->v);
        (((struct o48_float *)(t6))->v) = u24;
        (((struct o44_float *)(t6))->v) = u24;
        (((struct o40_float *)(t6))->v) = u24;
        (((struct o5C_float *)(t6))->v) = ((((struct o1C_float *)((t1 + (a5 * 0x2C))))->v));
        u26 = (((struct o28_float *)((t1 + (a5 * 0x2C))))->v);
        (((struct o60_float *)(t6))->v) = u26;
        (((struct o22_ushort *)(t6))->v) = (*(int *)(((t1 + (a5 * 0x2C)) + 0x18)));
        t29 = t28;
        t30 = 0x0;
        u31 = u26;
        for (;;) {
            if ((int)t30 >= (int)((((struct oC0_int *)(t6))->v))) {
                break;
            }
            t29 = t30;
            t29 = (t29 << 2);
            t29 = (t29 + (0xC4 + t6));
            t29 = (*(int *)((t29 + 0x0)));
            *(unsigned short *)((t29 + 0x6)) = 0x1F;
            u31 = ((((struct o24_float *)((t1 + (a5 * 0x2C))))->v));
            t30 = (t30 + 0x1);
            (((struct o8C_float *)(t29))->v) = u31;
            (((struct o88_float *)(t29))->v) = u31;
            (((struct o84_float *)(t29))->v) = u31;
        }
        t35 = 0xC0;
    }
    return t35;
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
