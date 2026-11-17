/* game/unsorted: functions 0C12CB8C-0C12D05C, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o78_int { char p[0x78]; int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c037498(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c07e2f4(int, int);
float math_cos_angle16(int);
int FUN_0c179ac0(void);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
extern int FUN_0c187798();
int FUN_0c12cb8c(int a4, int a5);
int FUN_0c12cf48(int a4, int a5, int a6, int a7);

int FUN_0c12cb8c(int a4, int a5)
{
    int stk[6];
    register int t0;
    register int t162;
    int t5;
    register int t15;
    register int t23;
    register int t24;
    register int t25;
    register int t26;
    register int t27;
    register float u29;
    register float u37;
    register float t38;
    register float u41;
    register float t43;
    register float u46;
    register int t58;
    register int t66;
    register int t67;
    register int t68;
    register int t69;
    register int t70;
    register float u72;
    register float u80;
    register float t81;
    register float u84;
    register float t86;
    register float u89;
    register int t108;
    register int t116;
    register int t123;
    register int t124;
    register int t125;
    register int t126;
    register int t127;
    register float u129;
    register float t143;
    register float u146;
    register float t148;
    register float u151;

    *(unsigned char *)(((int)stk + 20)) = a5;
    t0 = FUN_0c03f444(0x1, 0x0, 0x1);
    t162 = t0;
    if (t0 == 0) {
    } else {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned int *)((t0 + 0x4)) = 0xC12CF48;
        FUN_0c187798();
        FUN_0c187798();
        (((struct o54_float *)(t0))->v) = 0.0f;
        (((struct o50_float *)(t0))->v) = 0.0f;
        (((struct o4C_float *)(t0))->v) = 0.0f;
        (((struct o48_float *)(t0))->v) = 1.0f;
        (((struct o44_float *)(t0))->v) = 1.0f;
        (((struct o40_float *)(t0))->v) = 1.0f;
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0x41F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        (((struct o14_uchar *)(t0))->v) = (*(signed char *)(((int)stk + 20)));
        (((struct o15_uchar *)(t0))->v) = 0x0;
        t5 = *(signed char *)(((int)stk + 20));
        *(unsigned int *)(((int)stk + 16)) = t5;
        if ((t5 != 0) && (t5 != 2)) {
            if (t5 == 1) {
                if ((*(int *)(((int)stk + 16))) == 3) {
                    *(volatile int *)((a4 + 0x10));
                    FUN_0c187798();
                }
                t15 = *(signed char *)((t0 + 0x1));
                *(unsigned char *)(((int)stk + 16)) = t15;
                FUN_0c037498(((((struct oC4_int *)(t0))->v)), (*(signed char *)(((int)stk + 16))), 0x2, (*(int *)((((signed char)t15 << 2) + 0xC4B40FC))));
                *(unsigned char *)((((((struct oC4_int *)(t0))->v)) + 0x0)) = 0x1;
                *(unsigned short *)((((((struct oC4_int *)(t0))->v)) + 0x6)) = 0x41F;
                (((struct o14_float *)(((((struct oC4_int *)(t0))->v))))->v) = 1.0f;
                t23 = (((struct oC4_int *)(t0))->v);
                *(unsigned int *)(((int)stk + 16)) = t23;
                *(int *)((int)stk + 12) = (0x84 + t23);
                t24 = *(int *)(((int)stk + 16));
                *(int *)((int)stk + 8) = (0x88 + t24);
                t25 = *(int *)(((int)stk + 16));
                *(int *)((int)stk + 4) = (0x8C + t25);
                t26 = FUN_0c179ac0();
                t27 = ((~(((~t26) + 0x1) & 0x7)) + 0x1);
                if ((int)t26 >= 0) {
                    t27 = (t26 & 0x7);
                }
                u29 = *(float *)((0xC2A111C + (t27 << 2)));
                (((struct o8C_float *)(t25))->v) = (u29 + (1.0f + 1.0f));
                (((struct o88_float *)(t24))->v) = (u29 + (1.0f + 1.0f));
                (((struct o84_float *)(t23))->v) = (u29 + (1.0f + 1.0f));
                *(unsigned int *)((t0 + 0x34)) = ((*(int *)((t0 + 0x34))) + (int)(((float)((int)((int)(FUN_0c179ac0()) % (int)0x168)) * 65536.0f) / 360.0f));
                *(unsigned int *)((t0 + 0x3C)) = ((*(int *)((t0 + 0x3C))) + (int)(((float)((int)((int)(FUN_0c179ac0()) % (int)0x168)) * 65536.0f) / 360.0f));
                u37 = *(float *)0xC12CF88;
                t38 = math_cos_angle16(((-(*(int *)((t0 + 0x38)))) + 0x14000));
                u41 = (t38 * (math_sin_angle16(((-(*(int *)((t0 + 0x34)))) + 0x14000))));
                (((struct o4C_float *)(t0))->v) = (u41 * u37);
                t43 = math_sin_angle16(((-(*(int *)((t0 + 0x38)))) + 0x14000));
                u46 = (t43 * (math_sin_angle16(((-(*(int *)((t0 + 0x34)))) + 0x14000))));
                (((struct o54_float *)(t0))->v) = (u46 * u37);
                (((struct o50_float *)(t0))->v) = (-((math_cos_angle16(((-(*(int *)((t0 + 0x34)))) + 0x14000))) * u37));
                *(unsigned int *)((t0 + 0x10)) = a4;
                *(unsigned short *)((t0 + 0x1C)) = 0x4;
                t162 = 0x4;
            } else {
                t162 = t5;
                if (t5 == 3) {
                    if ((*(int *)(((int)stk + 16))) == 3) {
                        *(volatile int *)((a4 + 0x10));
                        FUN_0c187798();
                    }
                    t58 = *(signed char *)((t0 + 0x1));
                    *(unsigned char *)(((int)stk + 16)) = t58;
                    FUN_0c037498(((((struct oC4_int *)(t0))->v)), (*(signed char *)(((int)stk + 16))), 0x2, (*(int *)((((signed char)t58 << 2) + 0xC4B40FC))));
                    *(unsigned char *)((((((struct oC4_int *)(t0))->v)) + 0x0)) = 0x1;
                    *(unsigned short *)((((((struct oC4_int *)(t0))->v)) + 0x6)) = 0x41F;
                    (((struct o14_float *)(((((struct oC4_int *)(t0))->v))))->v) = 1.0f;
                    t66 = (((struct oC4_int *)(t0))->v);
                    *(unsigned int *)(((int)stk + 16)) = t66;
                    *(int *)((int)stk + 12) = (0x84 + t66);
                    t67 = *(int *)(((int)stk + 16));
                    *(int *)((int)stk + 8) = (0x88 + t67);
                    t68 = *(int *)(((int)stk + 16));
                    *(int *)((int)stk + 4) = (0x8C + t68);
                    t69 = FUN_0c179ac0();
                    t70 = ((~(((~t69) + 0x1) & 0x7)) + 0x1);
                    if ((int)t69 >= 0) {
                        t70 = (t69 & 0x7);
                    }
                    u72 = *(float *)((0xC2A111C + (t70 << 2)));
                    (((struct o8C_float *)(t68))->v) = (u72 + (1.0f + 1.0f));
                    (((struct o88_float *)(t67))->v) = (u72 + (1.0f + 1.0f));
                    (((struct o84_float *)(t66))->v) = (u72 + (1.0f + 1.0f));
                    *(unsigned int *)((t0 + 0x34)) = ((*(int *)((t0 + 0x34))) + (int)(((float)((int)((int)(FUN_0c179ac0()) % (int)0x168)) * 65536.0f) / 360.0f));
                    *(unsigned int *)((t0 + 0x3C)) = ((*(int *)((t0 + 0x3C))) + (int)(((float)((int)((int)(FUN_0c179ac0()) % (int)0x168)) * 65536.0f) / 360.0f));
                    u80 = *(float *)0xC12CF88;
                    t81 = math_cos_angle16(((-(*(int *)((t0 + 0x38)))) + 0x14000));
                    u84 = (t81 * (math_sin_angle16(((-(*(int *)((t0 + 0x34)))) + 0x14000))));
                    (((struct o4C_float *)(t0))->v) = (u84 * u80);
                    t86 = math_sin_angle16(((-(*(int *)((t0 + 0x38)))) + 0x14000));
                    u89 = (t86 * (math_sin_angle16(((-(*(int *)((t0 + 0x34)))) + 0x14000))));
                    (((struct o54_float *)(t0))->v) = (u89 * u80);
                    (((struct o50_float *)(t0))->v) = (-((math_cos_angle16(((-(*(int *)((t0 + 0x34)))) + 0x14000))) * u80));
                    *(unsigned int *)((t0 + 0x10)) = a4;
                    *(unsigned short *)((t0 + 0x1C)) = 0x4;
                    t162 = 0x4;
                }
            }
        } else {
            t108 = *(signed char *)((t0 + 0x1));
            *(unsigned char *)(((int)stk + 20)) = t108;
            FUN_0c037498(((((struct oC4_int *)(t0))->v)), (*(signed char *)(((int)stk + 20))), 0x2, (*(int *)((((signed char)t108 << 2) + 0xC4B40FC))));
            *(unsigned char *)((((((struct oC4_int *)(t0))->v)) + 0x0)) = 0x1;
            *(unsigned short *)((((((struct oC4_int *)(t0))->v)) + 0x6)) = 0x41F;
            (((struct o14_float *)(((((struct oC4_int *)(t0))->v))))->v) = 1.0f;
            *(int *)((int)stk + 12) = 0xF0;
            *(int *)((int)stk + 8) = 0x0;
            t116 = *(signed char *)((t0 + 0x1));
            *(int *)((int)stk + 4) = (~((int)0x1 << (int)t116));
            *(int *)((int)stk + 0) = 0x100;
            FUN_0c064d24(t0, 0x1, 0x33, 0x2, 0x100, (~((int)0x1 << (int)t116)), 0x0, 0xF0);
            FUN_0c07e2f4(t0, 0x61);
            if ((*(int *)(((int)stk + 16))) == 2) {
                *(unsigned short *)(((0x12A + t0) + 0x4)) = 0x0;
                *(unsigned short *)(((0x12A + t0) + 0x2)) = 0x0;
                (((struct o12A_ushort *)(t0))->v) = 0x0;
            }
            t123 = (((struct oC4_int *)(t0))->v);
            *(unsigned int *)(((int)stk + 16)) = t123;
            *(int *)((int)stk + 12) = (0x84 + t123);
            t124 = *(int *)(((int)stk + 16));
            *(int *)((int)stk + 8) = (0x88 + t124);
            t125 = *(int *)(((int)stk + 16));
            *(int *)((int)stk + 4) = (0x8C + t125);
            t126 = FUN_0c179ac0();
            t127 = ((~(((~t126) + 0x1) & 0x7)) + 0x1);
            if ((int)t126 >= 0) {
                t127 = (t126 & 0x7);
            }
            u129 = *(float *)((0xC2A111C + (t127 << 2)));
            (((struct o8C_float *)(t125))->v) = (u129 + 3.0f);
            (((struct o88_float *)(t124))->v) = (u129 + 3.0f);
            (((struct o84_float *)(t123))->v) = (u129 + 3.0f);
            *(unsigned int *)((t0 + 0x34)) = ((*(int *)((t0 + 0x34))) + (int)(((float)((int)((int)(FUN_0c179ac0()) % (int)0x168)) * 65536.0f) / 360.0f));
            *(unsigned int *)((t0 + 0x38)) = ((*(int *)((t0 + 0x38))) + (int)(((float)((int)((int)(FUN_0c179ac0()) % (int)0x168)) * 65536.0f) / 360.0f));
            *(unsigned int *)((t0 + 0x3C)) = ((*(int *)((t0 + 0x3C))) + (int)(((float)((int)((int)(FUN_0c179ac0()) % (int)0x168)) * 65536.0f) / 360.0f));
            *(unsigned int *)((t0 + 0x34)) = ((*(int *)((t0 + 0x34))) & 0xFFFF);
            *(unsigned int *)((t0 + 0x38)) = ((*(int *)((t0 + 0x38))) & 0xFFFF);
            *(unsigned int *)((t0 + 0x3C)) = ((*(int *)((t0 + 0x3C))) & 0xFFFF);
            t143 = math_cos_angle16(((-(*(int *)((t0 + 0x38)))) + 0x14000));
            u146 = (t143 * (math_sin_angle16(((-(*(int *)((t0 + 0x34)))) + 0x14000))));
            (((struct o4C_float *)(t0))->v) = (u146 * 60.0f);
            t148 = math_sin_angle16(((-(*(int *)((t0 + 0x38)))) + 0x14000));
            u151 = (t148 * (math_sin_angle16(((-(*(int *)((t0 + 0x34)))) + 0x14000))));
            (((struct o54_float *)(t0))->v) = (u151 * 60.0f);
            (((struct o50_float *)(t0))->v) = (-((math_cos_angle16(((-(*(int *)((t0 + 0x34)))) + 0x14000))) * 60.0f));
            *(unsigned int *)((t0 + 0x10)) = a4;
            *(unsigned short *)((t0 + 0x1C)) = 0xA;
            t162 = 0xA;
        }
    }
    return t162;
}

int FUN_0c12cf48(int a4, int a5, int a6, int a7)
{
    int t0;

    t0 = *(signed char *)((a4 + 0x14));
    if ((t0 != 0) && (t0 != 2)) {
        if ((t0 != 1) && (t0 != 3)) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        *(unsigned short *)(((0x12A + a4) + 0x4)) = 0x0;
        *(unsigned short *)(((0x12A + a4) + 0x2)) = 0x0;
        (((struct o12A_ushort *)(a4))->v) = 0x0;
        t0 = *(signed char *)((a4 + 0x15));
        if (t0 != 0) {
            if (t0 != 1) {
            } else {
                t0 = *(short *)((a4 + 0x1C));
                (((struct o14_float *)(((((struct oC4_int *)(a4))->v))))->v) = ((float)t0 / 4.0f);
                if (!(((float)t0 / 4.0f) > 0.0f)) {
                    (((struct o14_uchar *)(a4))->v) = 0xA;
                }
                *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
            }
        } else {
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
            if ((short)(t0 - 1) == 0) {
                *(unsigned short *)((a4 + 0x1C)) = 0x4;
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            }
        }
    } else {
        t0 = *(signed char *)((a4 + 0x15));
        if (t0 != 0) {
            if (t0 != 1) {
            } else {
                t0 = *(short *)((a4 + 0x1C));
                (((struct o14_float *)(((((struct oC4_int *)(a4))->v))))->v) = ((float)t0 / 4.0f);
                if (!(((float)t0 / 4.0f) > 0.0f)) {
                    (((struct o14_uchar *)(a4))->v) = 0xA;
                }
                *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
            }
        } else {
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
            if ((short)(t0 - 1) == 0) {
                *(unsigned short *)(((0x12A + a4) + 0x4)) = 0x0;
                *(unsigned short *)(((0x12A + a4) + 0x2)) = 0x0;
                (((struct o12A_ushort *)(a4))->v) = 0x0;
                *(unsigned short *)((a4 + 0x1C)) = 0x4;
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            }
        }
    }
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    t0 = (((struct oC4_int *)(a4))->v);
    (((struct o78_uint *)(t0))->v) = (((((struct o78_int *)(t0))->v)) + 0x200);
    t0 = (((struct oC4_int *)(a4))->v);
    (((struct o7C_uint *)(t0))->v) = (((((struct o7C_int *)(t0))->v)) + 0x200);
    t0 = (((struct oC4_int *)(a4))->v);
    (((struct o80_uint *)(t0))->v) = (((((struct o80_int *)(t0))->v)) + 0x200);
    return 0x80;
}
