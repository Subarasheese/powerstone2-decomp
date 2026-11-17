/* game/item: functions 0C16AC5C-0C16BD10, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
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
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oD0_int { char p[0xD0]; int v; };
struct oD4_int { char p[0xD4]; int v; };
int FUN_0c037498(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c058542(int, int, float);
int FUN_0c0585a8(int, int, int, float);
int FUN_0c058716(int, int);
int FUN_0c064f80(int);
int FUN_0c16af78(int, int, int);
int FUN_0c16af86(int, int, int, int);
extern int FUN_0c16afb6();
int FUN_0c16b2cc(int, int);
int math_vec3_accumulate(int, int);
extern int FUN_0c18778c();
int FUN_0c187798(void);
int FUN_0c16b38e(int a4, int a5, int a6, int a7);
int FUN_0c16b5a6(int a4, int a5, int a6, int a7, float f4);

int FUN_0c16b38e(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t0;
    register int t1;
    register int t7;
    register int t16;
    register float u26;
    register int t28;
    register int t58;
    register int t71;
    register int t86;
    register int t89;
    register int t94;
    register float u111;
    register int t112;
    register int t116;
    register int t121;
    register int t8;
    register int t9;
    register int t10;
    register int t107;

    t0 = *(signed char *)((a4 + 0x1));
    t1 = *(signed char *)((a4 + 0x14));
    if (t1 != 0) {
        if (t1 != 1) {
            if (t1 == 2) {
                if ((*(signed char *)(((0x41C + a4) + 0x3))) != 0) {
                    t7 = *(int *)((a4 + 0x10));
                    if ((t7 != 0) && ((t8 = *(signed char *)((t7 + 0x14)), t8 == 3) || ((t9 = *(signed char *)((t7 + 0x14)), t9 == 99) || (t10 = *(int *)((t7 + 0x4)), t10 == 0)))) {
                        (((struct o14_uchar *)(a4))->v) = 0x63;
                    }
                }
                t16 = (((struct oC4_int *)(a4))->v);
                (((struct o80_uint *)(t16))->v) = (((((struct o80_int *)(t16))->v)) + 0x71C);
                if (!(((((struct o48_float *)(a4))->v)) > (*(float *)((0xC203BBC + ((*(signed char *)(((0x41C + a4) + 0x3))) << 2)))))) {
                    (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + 0.0199999996f);
                }
                u26 = (((struct o48_float *)(a4))->v);
                (((struct o44_float *)(a4))->v) = u26;
                (((struct o40_float *)(a4))->v) = u26;
                if ((*(signed char *)(((0x41C + a4) + 0x3))) == 0) {
                    t28 = *(short *)((a4 + 0x1E));
                    *(unsigned short *)((a4 + 0x1E)) = (t28 - 1);
                    if ((int)(short)(t28 - 1) <= 0) {
                        *(unsigned short *)((a4 + 0x1E)) = 0xA;
                        FUN_0c16b2cc(a4, 0x0);
                    }
                }
                if ((*(signed char *)((a4 + 0x131))) != 0) {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                } else {
                    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
                    math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
                }
                t58 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t58 - 1);
                t121 = (short)(t58 - 1);
                if ((int)(short)(t58 - 1) <= 0) {
                    (((struct o14_uchar *)(a4))->v) = 0x63;
                    t121 = 0x14;
                }
            } else {
                t121 = (FUN_0c03f346(a4, a5, a6, a7));
            }
        } else {
            t71 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t71 - 1);
            t121 = (short)(t71 - 1);
            if ((int)(short)(t71 - 1) <= 0) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                *(unsigned short *)((a4 + 0x1C)) = 0xF0;
                t121 = 0xF0;
            }
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        if ((*(signed char *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x2))) == 13) {
            *(unsigned int *)((a4 + 0x34)) = 0x0;
            t107 = a5;
        } else {
            t86 = FUN_0c064f80((((short)t0 * (short)0x3938) + 0xC532498));
            if (t86 == 0) {
                FUN_0c187798();
                *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) + 100.0f);
                t89 = FUN_0c058716(a4, ((int)stk + 0));
                t94 = 0x0;
                if ((int)t89 <= (int)0x4000) {
                    t94 = 0x38E3;
                    if ((int)t89 > (int)0x38E3) {
                    } else {
                        t94 = t89;
                        if ((int)t89 < 0) {
                            t94 = 0x0;
                        }
                    }
                    t107 = 0x38E3;
                }
                *(unsigned int *)((a4 + 0x34)) = t94;
            }
        }
        FUN_0c058542(a4, t107, 15.0f);
        (((struct oAC_ushort *)(a4))->v) = 0x31;
        u111 = *(float *)((0xC203BB0 + ((*(signed char *)(((0x41C + a4) + 0x3))) << 2)));
        (((struct o48_float *)(a4))->v) = u111;
        (((struct o44_float *)(a4))->v) = u111;
        (((struct o40_float *)(a4))->v) = u111;
        *(unsigned short *)((a4 + 0x1E)) = 0x0;
        t112 = *(signed char *)(((0x41C + a4) + 0x3));
        *(unsigned short *)((a4 + 0x1C)) = ((t112 << 2) + t112);
        if ((*(signed char *)(((0x41C + a4) + 0x3))) != 0) {
            (((struct o12A_ushort *)(a4))->v) = 0x0;
        }
        (((struct o12E_ushort *)(a4))->v) = 0x0;
        t116 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t116 - 1);
        t121 = (short)(t116 - 1);
        if ((int)(short)(t116 - 1) <= 0) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            *(unsigned short *)((a4 + 0x1C)) = 0xF0;
            t121 = 0xF0;
        }
    }
    return t121;
}

int FUN_0c16b5a6(int a4, int a5, int a6, int a7, float f4)
{
    int stk[3];
    register int t0;
    register int t1;
    register int t6;
    register int t8;
    register int t10;
    register int t12;
    register int t16;
    register int t17;
    register int t18;
    register int t22;
    register int t23;
    register int t30;
    register int t32;
    register float u33;
    register int t37;
    register int t38;
    register int t39;
    register int t49;
    register float u50;
    register int t54;
    register int t55;
    register int t56;
    register int t58;
    register int t60;
    register int t62;
    register int t64;
    register int t66;
    register int t80;
    register int t84;
    register int t86;
    register float u89;
    register int t91;
    register float u92;
    register int t93;
    register int t95;
    register int t97;
    register int t99;
    register int t101;
    register int t103;
    register int t106;
    register int t107;
    register int t108;
    register int t114;
    register int t157;
    register int t161;
    register int t163;
    register float u166;
    register int t168;
    register float u169;
    register int t170;
    register int t172;
    register int t174;
    register int t176;
    register int t178;
    register int t180;
    register int t183;
    register int t184;
    register int t185;
    register int t191;
    register int t210;
    register float u28;

    t0 = *(signed char *)((a4 + 0x1));
    t1 = *(signed char *)((a4 + 0x14));
    if (t1 != 0) {
        if (t1 != 1) {
            if (t1 == 2) {
                if ((*(signed char *)((a4 + 0x15))) == 0) {
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x0;
                    *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x0;
                    t6 = (((struct oCC_int *)(a4))->v);
                    *(unsigned short *)((t6 + 0x6)) = ((*(short *)((t6 + 0x6))) | 0x210);
                    t8 = (((struct oD0_int *)(a4))->v);
                    *(unsigned short *)((t8 + 0x6)) = ((*(short *)((t8 + 0x6))) | 0x210);
                    t10 = (((struct oD4_int *)(a4))->v);
                    *(unsigned short *)((t10 + 0x6)) = ((*(short *)((t10 + 0x6))) | 0x210);
                    t12 = (((struct oD4_int *)(a4))->v);
                    (((struct o8C_float *)(t12))->v) = 1.0f;
                    (((struct o88_float *)(t12))->v) = 1.0f;
                    (((struct o84_float *)(t12))->v) = 1.0f;
                    *(volatile int *)(((0xC4 + a4) + 0x8));
                    *(volatile int *)(((0xC4 + a4) + 0x10));
                    *(volatile int *)(((0xC4 + a4) + 0xC));
                    t16 = ((int (*)(int, int, int))(FUN_0c187798))((0xC4 + a4), a5, a6);
                    t17 = ((int (*)(void))(FUN_0c187798))();
                    t18 = (((struct oD4_int *)(a4))->v);
                    (((struct o20_float *)(t18))->v) = f4;
                    (((struct o1C_float *)(t18))->v) = f4;
                    (((struct o18_float *)(t18))->v) = f4;
                    *(volatile int *)(((0xC4 + a4) + 0xC));
                    *(volatile int *)(((0xC4 + a4) + 0x10));
                    *(volatile int *)(((0xC4 + a4) + 0x8));
                    t22 = ((int (*)(int, float))(FUN_0c18778c))((0xC4 + a4), f4);
                    t23 = ((int (*)(void))(FUN_0c18778c))();
                } else {
                    u28 = 1.0f;
                }
                t30 = (((struct oD4_int *)(a4))->v);
                (((struct o8C_float *)(t30))->v) = (((((struct o8C_float *)(t30))->v)) + u28);
                t32 = (((struct oD4_int *)(a4))->v);
                u33 = (((struct o8C_float *)(t32))->v);
                (((struct o88_float *)(t32))->v) = u33;
                (((struct o84_float *)(t32))->v) = u33;
                *(volatile int *)(((0xC4 + a4) + 0x8));
                *(volatile int *)(((0xC4 + a4) + 0x10));
                *(volatile int *)(((0xC4 + a4) + 0xC));
                t37 = ((int (*)(int))(FUN_0c187798))((0xC4 + a4));
                t38 = ((int (*)(void))(FUN_0c187798))();
                t39 = (((struct oD4_int *)(a4))->v);
                (((struct o20_float *)(t39))->v) = (((((struct o20_float *)(t39))->v)) - 0.200000003f);
                if (!(((((struct o20_float *)(((((struct oD4_int *)(a4))->v))))->v)) > 0.0f)) {
                    (((struct o20_float *)(((((struct oD4_int *)(a4))->v))))->v) = 0.0f;
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                }
                t49 = (((struct oD4_int *)(a4))->v);
                u50 = (((struct o20_float *)(t49))->v);
                (((struct o1C_float *)(t49))->v) = u50;
                (((struct o18_float *)(t49))->v) = u50;
                *(volatile int *)(((0xC4 + a4) + 0xC));
                *(volatile int *)(((0xC4 + a4) + 0x10));
                *(volatile int *)(((0xC4 + a4) + 0x8));
                t54 = ((int (*)(int))(FUN_0c18778c))((0xC4 + a4));
                t55 = ((int (*)(void))(FUN_0c18778c))();
                t56 = (((struct oCC_int *)(a4))->v);
                (((struct o78_uint *)(t56))->v) = (((((struct o78_int *)(t56))->v)) + 0x71C);
                t58 = (((struct oCC_int *)(a4))->v);
                (((struct o7C_uint *)(t58))->v) = (((((struct o7C_int *)(t58))->v)) + 0x1C71);
                t60 = (((struct oD0_int *)(a4))->v);
                (((struct o78_uint *)(t60))->v) = (((((struct o78_int *)(t60))->v)) + 0x71C);
                t62 = (((struct oD0_int *)(a4))->v);
                (((struct o7C_uint *)(t62))->v) = (((((struct o7C_int *)(t62))->v)) + 0x1C71);
                t64 = (((struct oD4_int *)(a4))->v);
                (((struct o78_uint *)(t64))->v) = (((((struct o78_int *)(t64))->v)) + 0x71C);
                t66 = (((struct oD4_int *)(a4))->v);
                (((struct o7C_uint *)(t66))->v) = (((((struct o7C_int *)(t66))->v)) + 0x1C71);
                t210 = 0x7C;
            } else {
                t210 = (FUN_0c03f346(a4, a5, a6, a7));
            }
        } else {
            if ((*(signed char *)((a4 + 0x131))) != 0) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                (((struct o15_uchar *)(a4))->v) = 0x0;
            }
            t80 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t80 - 1);
            if ((int)(short)(t80 - 1) <= 0) {
                (((struct o14_uchar *)(a4))->v) = 0x63;
            }
            t84 = (((struct oC4_int *)(a4))->v);
            (((struct o7C_uint *)(t84))->v) = (((((struct o7C_int *)(t84))->v)) - 0x1555);
            t86 = (((struct oC8_int *)(a4))->v);
            u89 = 1.5f;
            if (((*(short *)((a4 + 0x1C))) & 1) != 0) {
                u89 = 1.0f;
            }
            (((struct o84_float *)(t86))->v) = u89;
            t91 = (((struct oC8_int *)(a4))->v);
            u92 = (((struct o84_float *)(t91))->v);
            (((struct o8C_float *)(t91))->v) = u92;
            (((struct o88_float *)(t91))->v) = u92;
            t93 = (((struct oCC_int *)(a4))->v);
            (((struct o78_uint *)(t93))->v) = (((((struct o78_int *)(t93))->v)) + 0x71C);
            t95 = (((struct oCC_int *)(a4))->v);
            (((struct o7C_uint *)(t95))->v) = (((((struct o7C_int *)(t95))->v)) + 0x1C71);
            t97 = (((struct oD0_int *)(a4))->v);
            (((struct o78_uint *)(t97))->v) = (((((struct o78_int *)(t97))->v)) + 0x71C);
            t99 = (((struct oD0_int *)(a4))->v);
            (((struct o7C_uint *)(t99))->v) = (((((struct o7C_int *)(t99))->v)) + 0x1C71);
            t101 = (((struct oD4_int *)(a4))->v);
            (((struct o78_uint *)(t101))->v) = (((((struct o78_int *)(t101))->v)) + 0x71C);
            t103 = (((struct oD4_int *)(a4))->v);
            (((struct o7C_uint *)(t103))->v) = (((((struct o7C_int *)(t103))->v)) + 0x1C71);
            if ((*(signed char *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x2))) == 13) {
                t106 = ((int (*)(int, float))(FUN_0c16afb6))(a4, f4);
                t107 = ((int (*)(void))(FUN_0c187798))();
            } else {
                t108 = ((int (*)(int, int, int))(FUN_0c187798))(t91, a5, a6);
            }
            *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) + 100.0f);
            FUN_0c0585a8(a4, ((int)stk + 0), 0x2D8, 10.0f);
            t114 = FUN_0c16af86(a4, 0x2, 0x2, 0x4);
            if (t114 != 0) {
                FUN_0c037498(((((struct oCC_int *)(a4))->v)), (*(signed char *)(((0x41C + a4) + 0x1))), 0x40, (*(int *)0xC4B40CC));
                FUN_0c037498(((((struct oD0_int *)(a4))->v)), (*(signed char *)(((0x41C + a4) + 0x1))), 0x40, (*(int *)0xC4B40CC));
                FUN_0c037498(((((struct oD4_int *)(a4))->v)), (*(signed char *)(((0x41C + a4) + 0x1))), 0x40, (*(int *)0xC4B40CC));
            }
            math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
            t210 = (math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58)));
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0xB4;
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0x1F;
        (((struct o48_float *)(a4))->v) = 1.5f;
        (((struct o44_float *)(a4))->v) = 1.5f;
        (((struct o40_float *)(a4))->v) = 1.5f;
        *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0xF;
        *(unsigned short *)((((((struct oC8_int *)(a4))->v)) + 0x6)) = 0x31;
        *(unsigned short *)((((((struct oCC_int *)(a4))->v)) + 0x6)) = 0xF;
        *(unsigned short *)((((((struct oD0_int *)(a4))->v)) + 0x6)) = 0xF;
        *(unsigned short *)((((((struct oD4_int *)(a4))->v)) + 0x6)) = 0xF;
        FUN_0c16af78(a4, 0x2, 0x2);
        (((struct o12E_ushort *)(a4))->v) = 0x0;
        (((struct o78_uint *)(((((struct oCC_int *)(a4))->v))))->v) = 0x4000;
        (((struct o78_uint *)(((((struct oD0_int *)(a4))->v))))->v) = 0x0;
        (((struct o78_uint *)(((((struct oD4_int *)(a4))->v))))->v) = 0xFFFFC000;
        if ((*(signed char *)((a4 + 0x131))) != 0) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            (((struct o15_uchar *)(a4))->v) = 0x0;
        }
        t157 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t157 - 1);
        if ((int)(short)(t157 - 1) <= 0) {
            (((struct o14_uchar *)(a4))->v) = 0x63;
        }
        t161 = (((struct oC4_int *)(a4))->v);
        (((struct o7C_uint *)(t161))->v) = (((((struct o7C_int *)(t161))->v)) - 0x1555);
        t163 = (((struct oC8_int *)(a4))->v);
        u166 = 1.5f;
        if (((*(short *)((a4 + 0x1C))) & 1) != 0) {
            u166 = 1.0f;
        }
        (((struct o84_float *)(t163))->v) = u166;
        t168 = (((struct oC8_int *)(a4))->v);
        u169 = (((struct o84_float *)(t168))->v);
        (((struct o8C_float *)(t168))->v) = u169;
        (((struct o88_float *)(t168))->v) = u169;
        t170 = (((struct oCC_int *)(a4))->v);
        (((struct o78_uint *)(t170))->v) = (((((struct o78_int *)(t170))->v)) + 0x71C);
        t172 = (((struct oCC_int *)(a4))->v);
        (((struct o7C_uint *)(t172))->v) = (((((struct o7C_int *)(t172))->v)) + 0x1C71);
        t174 = (((struct oD0_int *)(a4))->v);
        (((struct o78_uint *)(t174))->v) = (((((struct o78_int *)(t174))->v)) + 0x71C);
        t176 = (((struct oD0_int *)(a4))->v);
        (((struct o7C_uint *)(t176))->v) = (((((struct o7C_int *)(t176))->v)) + 0x1C71);
        t178 = (((struct oD4_int *)(a4))->v);
        (((struct o78_uint *)(t178))->v) = (((((struct o78_int *)(t178))->v)) + 0x71C);
        t180 = (((struct oD4_int *)(a4))->v);
        (((struct o7C_uint *)(t180))->v) = (((((struct o7C_int *)(t180))->v)) + 0x1C71);
        if ((*(signed char *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x2))) == 13) {
            t183 = ((int (*)(int))(FUN_0c16afb6))(a4);
            t184 = ((int (*)(void))(FUN_0c187798))();
        } else {
            t185 = ((int (*)(int))(FUN_0c187798))(t168);
        }
        *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) + 100.0f);
        FUN_0c0585a8(a4, ((int)stk + 0), 0x2D8, 10.0f);
        t191 = FUN_0c16af86(a4, 0x2, 0x2, 0x4);
        if (t191 != 0) {
            FUN_0c037498(((((struct oCC_int *)(a4))->v)), (*(signed char *)(((0x41C + a4) + 0x1))), 0x40, (*(int *)0xC4B40CC));
            FUN_0c037498(((((struct oD0_int *)(a4))->v)), (*(signed char *)(((0x41C + a4) + 0x1))), 0x40, (*(int *)0xC4B40CC));
            FUN_0c037498(((((struct oD4_int *)(a4))->v)), (*(signed char *)(((0x41C + a4) + 0x1))), 0x40, (*(int *)0xC4B40CC));
        }
        math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
        t210 = (math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58)));
    }
    return t210;
}
