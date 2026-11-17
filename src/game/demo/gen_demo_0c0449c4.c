/* game/demo: functions 0C0449C4-0C0460CE, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_uchar { unsigned char v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o1E_uchar { char p[0x1E]; unsigned char v; };
struct o1F_uchar { char p[0x1F]; unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o23_uchar { char p[0x23]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o30_float { char p[0x30]; float v; };
struct o3720_uchar { char p[0x3720]; unsigned char v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o56_uchar { char p[0x56]; unsigned char v; };
struct o58_float { char p[0x58]; float v; };
struct o5A_uchar { char p[0x5A]; unsigned char v; };
struct o5B_uchar { char p[0x5B]; unsigned char v; };
struct o5C_float { char p[0x5C]; float v; };
struct o5_uchar { char p[0x5]; unsigned char v; };
struct o60_float { char p[0x60]; float v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o81_uchar { char p[0x81]; unsigned char v; };
struct oA_short { char p[0xA]; short v; };
struct oA_ushort { char p[0xA]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC_short { char p[0xC]; short v; };
struct oC_ushort { char p[0xC]; unsigned short v; };
struct oE_short { char p[0xE]; short v; };
struct oE_ushort { char p[0xE]; unsigned short v; };
int FUN_0c036de8(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03d358(int);
int FUN_0c03ea04(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c03eff6(void);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c0435f4(int);
int FUN_0c044e1c(int);
int FUN_0c04523c(void);
int FUN_0c047064(int, int, int, int);
int FUN_0c047476(void);
int FUN_0c05261c(int);
int FUN_0c056e44(int, int);
int FUN_0c0573cc(int, int, int);
int FUN_0c0573d8(void);
int thunk_FUN_0c05abb2(int, int);
int FUN_0c05a292(int, int, int, int, int);
int FUN_0c05aab6(int, int);
int FUN_0c05ab04(int);
int FUN_0c05af8a(void);
int thunk_FUN_0c06494c(void);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c06780e(int);
int FUN_0c06785c(void);
int FUN_0c07c1ca(int);
int FUN_0c085cac(int, int, int);
int FUN_0c0d04b4(int);
int FUN_0c1539c0(int);
float math_signed_sqrt(float);
int FUN_0c179ac0(void);
int FUN_0c0449c4(int a4, float f4, float f5, float f6, float f7);
int FUN_0c044d5e(int a4);
int FUN_0c045020(int a4, int a5, int a6, int a7);
int FUN_0c045068(void);
int FUN_0c04537c(void);
int FUN_0c045392(int a4, int a5, int a6, int a7);
int FUN_0c0453ca(void);
int FUN_0c0453f0(int a4, int a5, int a6, int a7);
int FUN_0c04549c(void);
int FUN_0c0457a6(void);
int FUN_0c04587e(int a4, int a5, int a6, int a7);
int FUN_0c045942(int a4, int a5, int a6);
int FUN_0c045a22(void);
int FUN_0c045cf4(int a4, int a5, int a6);
int FUN_0c045f10(int a4, int a5, int a6);

int FUN_0c0449c4(int a4, float f4, float f5, float f6, float f7)
{
    int stk[10];
    register int t0;
    register int t1;
    register int t2;
    register int t4;
    register int t5;
    register int t8;
    register int t9;
    register int t10;
    register float u14;
    register int t66;
    register int t68;
    register int t71;
    register int t73;
    register int t76;
    register int t80;
    register int t89;
    register float u90;
    register int t92;
    register int t100;
    register int t111;
    register int t139;
    register int t114;
    register int t115;
    register int t128;
    register int t116;
    register int t117;
    register int t118;
    int t119;
    register int t121;
    register int t122;
    register int t6;
    register int t7;
    register float u11;
    register float u12;
    register float u13;
    register int t120;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                t1 = (((struct o20_short *)(a4))->v);
                *(unsigned int *)(((int)stk + 16)) = (t1 << 2);
                t2 = *(int *)(((t1 << 2) + 0xC240454));
                t8 = *(int *)(((int)stk + 16));
                t4 = *(int *)((t8 + 0xC24048C));
                t5 = 0xC044B58;
                t9 = 0x0;
                t10 = 0x0;
                u14 = f7;
                for (;;) {
                    if ((int)t9 < (int)0x4) {
                        t10 = t9;
                        t10 = (t10 << 1);
                        t8 = t9;
                        t10 = (t10 + t8);
                        t10 = (t10 << 2);
                        *(unsigned int *)(((int)stk + 20)) = t10;
                        t10 = (t10 + 0xC40DD28);
                        t8 = (*(int *)(((int)stk + 20)));
                        t5 = 0x4;
                        t7 = t5;
                        t8 = (t8 + 0xC40DD58);
                        *(unsigned int *)(((int)stk + 16)) = t8;
                        u12 = (*(float *)((t10 + 0x0)));
                        u13 = (*(float *)((t8 + 0x0)));
                        u12 = (u12 + u13);
                        *(float *)((t10 + 0x0)) = u12;
                        t8 = (*(int *)(((int)stk + 16)));
                        u12 = (*(float *)((t10 + t5)));
                        t7 = (t7 + t8);
                        u13 = (*(float *)((t7 + 0x0)));
                        u12 = (u12 + u13);
                        *(float *)((t10 + t5)) = u12;
                        t5 = 0x8;
                        t8 = (*(int *)(((int)stk + 16)));
                        t7 = t5;
                        u12 = (*(float *)((t10 + t5)));
                        t7 = (t7 + t8);
                        u13 = (*(float *)((t7 + 0x0)));
                        u12 = (u12 + u13);
                        *(float *)((t10 + t5)) = u12;
                        t8 = (*(int *)(((int)stk + 16)));
                        t7 = (*(int *)(((int)stk + 20)));
                        t7 = (t7 + 0xC40DD88);
                        *(unsigned int *)(((int)stk + 24)) = t7;
                        t5 = 0x4;
                        u12 = (*(float *)((t8 + 0x0)));
                        t6 = t5;
                        u13 = (*(float *)((t7 + 0x0)));
                        u12 = (u12 + u13);
                        *(float *)((t8 + 0x0)) = u12;
                        t7 = (*(int *)(((int)stk + 24)));
                        t8 = (*(int *)(((int)stk + 16)));
                        t6 = (t6 + t7);
                        u12 = (*(float *)((t8 + t5)));
                        u13 = (*(float *)((t6 + 0x0)));
                        u12 = (u12 + u13);
                        *(float *)((t8 + t5)) = u12;
                        t5 = 0x8;
                        t7 = (*(int *)(((int)stk + 24)));
                        t6 = t5;
                        t8 = (*(int *)(((int)stk + 16)));
                        t6 = (t6 + t7);
                        u12 = (*(float *)((t8 + t5)));
                        u13 = (*(float *)((t6 + 0x0)));
                        t6 = 0xC40DCBC;
                        u12 = (u12 + u13);
                        *(float *)((t8 + t5)) = u12;
                        t8 = (t9 * 0x3938);
                        t8 = (t8 + 0xC532498);
                        t7 = t8;
                        *(unsigned int *)(((int)stk + 16)) = t8;
                        t5 = (*(signed char *)((t7 + 0x2)));
                        t5 = (t5 << 2);
                        t7 = (*(int *)((t6 + t5)));
                        t5 = 0xC4;
                        t7 = (*(int *)((t7 + t5)));
                        t5 = 0x6C;
                        *(unsigned int *)(((int)stk + 36)) = t7;
                        u14 = (*(float *)((t7 + t5)));
                        t7 = t2;
                        t5 = (*(short *)((a4 + 0x1E)));
                        u13 = (*(float *)((t10 + 0x0)));
                        t5 = (t5 << 2);
                        t5 = (t5 + t7);
                        u13 = (u13 + u14);
                        t5 = (*(signed char *)((t9 + t5)));
                        t5 = (unsigned char)t5;
                        t5 = (t5 << 2);
                        u12 = (*(float *)((t4 + t5)));
                        t5 = 0x28;
                        u11 = (*(float *)((a4 + t5)));
                        t5 = (*(short *)((a4 + 0x1C)));
                        u11 = (u11 + u12);
                        t7 = t5;
                        t5 = 0x28;
                        u11 = (u11 - u14);
                        u12 = (float)t7;
                        u11 = (u11 + -100.0f);
                        u11 = (u11 * u12);
                        u11 = (u11 / 60.0f);
                        u13 = (u13 + u11);
                        u13 = (u13 + 100.0f);
                        *(float *)((t8 + t5)) = u13;
                        t8 = (*(int *)(((int)stk + 16)));
                        t7 = t8;
                        t5 = (*(signed char *)((t7 + 0x2)));
                        t5 = (t5 << 2);
                        t7 = (*(int *)((t6 + t5)));
                        t5 = 0xC4;
                        t7 = (*(int *)((t7 + t5)));
                        t5 = 0x70;
                        *(unsigned int *)(((int)stk + 32)) = t7;
                        u14 = (*(float *)((t7 + t5)));
                        t5 = 0x4;
                        u13 = (*(float *)((t10 + t5)));
                        t5 = 0x2C;
                        u12 = (*(float *)((a4 + t5)));
                        t5 = (*(short *)((a4 + 0x1C)));
                        u13 = (u13 + u14);
                        u12 = (u12 - u14);
                        t7 = t5;
                        t5 = 0x2C;
                        u11 = (float)t7;
                        u12 = (u12 * u11);
                        u12 = (u12 / 60.0f);
                        u13 = (u13 + u12);
                        *(float *)((t8 + t5)) = u13;
                        t8 = (*(int *)(((int)stk + 16)));
                        t7 = t8;
                        t5 = (*(signed char *)((t7 + 0x2)));
                        t5 = (t5 << 2);
                        t7 = (*(int *)((t6 + t5)));
                        t5 = 0xC4;
                        t7 = (*(int *)((t7 + t5)));
                        *(unsigned int *)(((int)stk + 28)) = t7;
                        t5 = 0x74;
                        u14 = (*(float *)((t7 + t5)));
                        t5 = 0x8;
                        u13 = (*(float *)((t10 + t5)));
                        t5 = 0x30;
                        u12 = (*(float *)((a4 + t5)));
                        t9 = (t9 + 0x1);
                        t5 = (*(short *)((a4 + 0x1C)));
                        u13 = (u13 + u14);
                        u12 = (u12 - u14);
                        t7 = t5;
                        t5 = 0x30;
                        u11 = (float)t7;
                        u12 = (u12 * u11);
                        u12 = (u12 / 60.0f);
                        u13 = (u13 + u12);
                        *(float *)((t8 + t5)) = u13;
                        continue;
                    }
                    break;
                }
                t66 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t66 + 0x1);
                t68 = (short)(t66 + 0x1);
                if ((int)(short)(t66 + 0x1) >= (int)0x3C) {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    t68 = 0x14;
                }
                return t68;
            }
            if (t0 == 3) {
                t71 = *(signed char *)0xC541F41;
                t73 = (unsigned char)t71;
                if ((unsigned char)t71 == 3) {
                    *(unsigned short *)((a4 + 0x1C)) = 0x1E;
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    t73 = 0x14;
                }
                return t73;
            }
            if (t0 == 4) {
                t76 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t76 - 1);
                t80 = (short)(t76 - 1);
                if ((short)(t76 - 1) == 0) {
                    thunk_FUN_0c05abb2(0x9, 0x0);
                    FUN_0c07c1ca(0x1D);
                    *(unsigned short *)((a4 + 0x1C)) = 0x93;
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    t80 = 0x14;
                }
                return t80;
            }
            if (t0 == 5) {
                (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + -30.0f);
                t89 = 0xC532498;
                u90 = -30.0f;
                for (;;) {
                    if ((unsigned int)t89 >= (unsigned int)0xC540978) {
                        break;
                    }
                    u90 = ((((struct o2C_float *)(a4))->v));
                    u90 = (u90 + 100.0f);
                    (((struct o2C_float *)(t89))->v) = u90;
                    t89 = (t89 + 0x3938);
                }
                t92 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t92 - 1);
                t100 = (short)(t92 - 1);
                if ((short)(t92 - 1) == 0) {
                    *(unsigned char *)0xC542235 = 0x1;
                    FUN_0c1539c0(t89);
                    FUN_0c05261c((*(int *)0xC241C30));
                    thunk_FUN_0c05abb2(0xA, 0x0);
                    thunk_FUN_0c05abb2(0xB, 0x0);
                    FUN_0c07c1ca(0x1E);
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    t100 = 0x14;
                }
                return t100;
            }
            if (t0 == 6) {
                return t0;
            }
            return FUN_0c03f346(a4, 0xC40DD28, 0xC40DD88, 0xC40DD58);
        }
        *(unsigned int *)(((int)stk + 16)) = 0xC541F40;
        t111 = *(signed char *)0xC541F41;
        t139 = (unsigned char)t111;
        if ((unsigned char)t111 != 2) {
        } else {
            t114 = *(int *)(((int)stk + 16));
            t115 = *(signed char *)((t114 + 0x2));
            t128 = (unsigned char)t115;
            if ((unsigned char)t115 != 3) {
            } else {
                t116 = 0xC044AEC;
                t117 = 0xC059CFC;
                t118 = 0x0;
                for (;;) {
                    if ((unsigned int)t118 >= (unsigned int)0x30) {
                        break;
                    }
                    t117 = t118;
                    t116 = 0x4;
                    t117 = (t117 + 0xC40DD28);
                    *(float *)((t117 + 0x0)) = 0.0f;
                    *(float *)((t117 + t116)) = 0.0f;
                    t116 = 0x8;
                    *(float *)((t117 + t116)) = 0.0f;
                    t117 = t118;
                    t116 = 0x4;
                    t117 = (t117 + 0xC40DD58);
                    *(float *)((t117 + 0x0)) = 0.0f;
                    *(float *)((t117 + t116)) = 33.0f;
                    t116 = 0x8;
                    *(float *)((t117 + t116)) = 0.0f;
                    t117 = t118;
                    t116 = 0x4;
                    t117 = (t117 + 0xC40DD88);
                    t118 = (t118 + 0xC);
                    *(float *)((t117 + 0x0)) = 0.0f;
                    *(float *)((t117 + t116)) = -1.0f;
                    t116 = 0x8;
                    *(float *)((t117 + t116)) = 0.0f;
                }
                t119 = t114;
                t121 = 0x0;
                t122 = 0xFFFFFFFF;
                for (;;) {
                    if ((int)t121 >= (int)0x4) {
                        break;
                    }
                    t119 = (*(signed char *)0xC3BD447);
                    t120 = 0x1;
                    t120 = ((int)t120 << (int)t121);
                    t119 = (unsigned char)t119;
                    t121 = (t121 + 0x1);
                    if ((t120 & t119) != 0) {
                        t122 = (t122 + 0x1);
                    }
                }
                *(unsigned short *)((a4 + 0x1E)) = ((int)((int)(FUN_0c179ac0()) % (int)t122));
                (((struct o20_ushort *)(a4))->v) = t122;
                *(unsigned short *)((a4 + 0x1C)) = 0x0;
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t128 = 0x14;
            }
            t139 = t128;
        }
        return t139;
    }
    *(int *)((int)stk + 12) = 0xF;
    *(int *)((int)stk + 8) = 0x0;
    *(int *)((int)stk + 4) = 0x0;
    *(int *)((int)stk + 0) = 0x40;
    FUN_0c064d24(a4, 0x3, 0x2A, 0x1, 0x40, 0x0, 0x0, 0xF);
    (((struct o40_float *)(a4))->v) = 1.0f;
    (((struct o44_float *)(a4))->v) = 1.0f;
    (((struct o48_float *)(a4))->v) = 1.0f;
    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 4500.0f);
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    return 0x14;
}

int FUN_0c044d5e(int a4)
{
    register int t20;

    if (((unsigned char)(*(signed char *)0xC3BD445) & ((int)0x1 << (int)a4)) != 0) {
        if ((((int)0x1 << (int)a4) & (unsigned char)(*(signed char *)0xC3BD448)) != 0) {
            *(unsigned char *)((((a4 * 0x3938) + 0xC532498) + 0x2)) = (*(signed char *)(((a4 * 0x98) + 0xC541D25)));
        } else {
            *(unsigned char *)((((a4 * 0x3938) + 0xC532498) + 0x2)) = (*(int *)((((a4 << 2) + 0xC2402DC) + 0x0)));
            FUN_0c03d358(a4);
        }
        *(unsigned int *)0xC40DC60 = 0x4EB;
        (((struct o5A_uchar *)((0xC541CDC + (a4 * 0x98))))->v) = ((*(signed char *)((((0xC541CDC + (a4 * 0x98)) + 0x5A) + 0x0))) + 0x1);
        (((struct o5B_uchar *)((0xC541CDC + (a4 * 0x98))))->v) = 0x0;
        t20 = 0x5B;
    } else {
        t20 = 0xC3BD445;
        if ((((int)0x1 << (int)a4) & (unsigned char)(*(signed char *)0xC3BD447)) == 0) {
            t20 = *(int *)((((a4 << 2) + 0xC2402DC) + 0x0));
            *(unsigned char *)((((a4 * 0x3938) + 0xC532498) + 0x2)) = t20;
        }
    }
    return t20;
}

int FUN_0c045020(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((0xC541D36 + (a4 * 0x98)));
    if (t0 != 0) {
        if (t0 != 1) {
            return ((int (*)(int, int, int, int))(0xC044FF8))(a4, a5, a6, a7);
        }
        return FUN_0c044e1c(a4);
    }
    FUN_0c044d5e(a4);
    return FUN_0c044e1c(a4);
}

int FUN_0c045068(void)
{
    int stk[11];
    int t8;
    register int t17;
    register int t18;
    register int t19;
    register int t20;
    register int t21;
    register int t23;
    register int t24;
    register int t26;
    register int t27;
    register int t30;
    register int t9;
    register int t25;

    (((struct o0_uchar *)0xC542346)->v) = 0x4;
    (((struct o1_uchar *)0xC542346)->v) = 0xF;
    FUN_0c0573d8();
    FUN_0c03eff6();
    FUN_0c036de8(0x4, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
    FUN_0c05af8a();
    *(int *)((int)stk + 0) = 0xFFFFFFFF;
    FUN_0c05a292(0xA, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF);
    FUN_0c056e44(0x20, 0x0);
    FUN_0c0d04b4(0xC240800);
    FUN_0c03ea04(0x1, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
    t8 = *(signed char *)0xC5429B4;
    if (((t8 != 0) && ((t8 != 4) && (t8 != 2))) || (t9 = *(signed char *)0xC5429CB, t9 == 0)) {
    } else {
        FUN_0c047476();
    }
    (((struct o0_uchar *)0xC542237)->v) = 0xA;
    (((struct o5_uchar *)0xC542237)->v) = 0x0;
    (((struct o0_float *)0xC541098)->v) = ((((struct o0_float *)0xC2402EC)->v));
    (((struct o4_float *)0xC541098)->v) = ((((struct o4_float *)0xC2402EC)->v));
    thunk_FUN_0c06494c();
    *(unsigned int *)(((int)stk + 4)) = 0xC532498;
    t17 = 0xE4E0;
    t18 = 0xC532498;
    t19 = 0xC2402DC;
    t20 = 0xC532498;
    for (;;) {
        t21 = *(signed char *)((t18 + 0x2));
        t23 = t21;
        if ((t21 == 12) || ((t21 == 13) || (t17 = 0x10, (int)t21 >= (int)t17))) {
            t23 = *(int *)((t19 + 0x0));
            *(unsigned char *)((t20 + 0x2)) = t23;
        }
        t18 = (t18 + 0x3938);
        t19 = (t19 + 0x4);
        t20 = (t20 + 0x3938);
        if ((unsigned int)t18 >= (unsigned int)0xC540978) {
            break;
        }
    }
    *(unsigned int *)(((int)stk + 8)) = 0xC2407FC;
    t24 = t23;
    t26 = 0x0;
    t27 = t21;
    for (;;) {
        if ((int)t26 >= (int)(*(int *)(((*(int *)(((int)stk + 8))) + 0x0)))) {
            break;
        }
        t25 = t26;
        t25 = (t25 << 2);
        t25 = (t25 << 2);
        t30 = *(int *)0xC4B410C;
        *(unsigned int *)(((int)stk + 4)) = (t25 + 0xC24049C);
        t24 = (FUN_0c037320((*(int *)(((t25 + 0xC24049C) + 0xC))), t30));
        t24 = (FUN_0c03f444((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))), 0x0, t24));
        t27 = t24;
        if (t24 != 0) {
            t24 = 0xFFFFFFFF;
            t25 = (t25 + 0xC24049C);
            *(unsigned char *)((t27 + 0x1)) = t24;
            *(unsigned int *)(((int)stk + 4)) = t25;
            *(unsigned int *)((t27 + 0x4)) = (*(int *)((t25 + 0x4)));
            t24 = (*(int *)(((int)stk + 4)));
            t24 = (*(signed char *)((t24 + 0x8)));
            *(unsigned char *)((t27 + 0x2)) = t24;
            t24 = (FUN_0c03733c(t27, (*(int *)(((*(int *)(((int)stk + 4))) + 0xC))), (*(int *)0xC4B410C)));
            t24 = 0xA8;
            *(unsigned char *)((t27 + t24)) = 0x1;
            t24 = (t24 + 0x4);
            *(unsigned short *)((t27 + t24)) = 0xF;
            t24 = (t24 - 3);
            *(unsigned char *)((t27 + t24)) = 0x1;
        }
        t26 = (t26 + 0x1);
    }
    (((struct o1E_uchar *)0xC542346)->v) = 0x0;
    (((struct o23_uchar *)0xC542237)->v) = 0x0;
    (((struct o0_uchar *)0xC541F42)->v) = ((*(signed char *)0xC541F42) + 0x1);
    (((struct o1_uchar *)0xC541F42)->v) = 0x0;
    return 0x0;
}

int FUN_0c04537c(void)
{
    (((struct o0_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F41) + 0x1);
    (((struct o3_uchar *)0xC541F41)->v) = 0x0;
    (((struct o2_uchar *)0xC541F41)->v) = 0x0;
    (((struct o1_uchar *)0xC541F41)->v) = 0x0;
    return 0x0;
}

int FUN_0c045392(int a4, int a5, int a6, int a7)
{
    register int t1;

    (((struct o3_uchar *)0xC40F820)->v) = 0x0;
    (((struct o2_uchar *)0xC40F820)->v) = 0x0;
    (((struct o1_uchar *)0xC40F820)->v) = 0x0;
    (((struct o0_uchar *)0xC40F820)->v) = 0x0;
    FUN_0c047064(0xC40F820, a5, a6, a7);
    t1 = *(signed char *)0xC541F42;
    if ((unsigned char)t1 != 0) {
        if ((unsigned char)t1 != 1) {
            FUN_0c04537c();
        } else {
            FUN_0c04523c();
        }
    } else {
        FUN_0c045068();
        FUN_0c04523c();
    }
    return ((int (*)(void))(0xC046042))();
}

int FUN_0c0453ca(void)
{
    register int t0;

    (((struct oA_ushort *)0xC541F42)->v) = 0x3C;
    t0 = *(signed char *)0xC541F42;
    (((struct o0_uchar *)0xC541F42)->v) = (t0 + 0x1);
    return (t0 + 0x1);
}

int FUN_0c0453f0(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t0 = (((struct oA_short *)0xC541F42)->v);
    (((struct oA_ushort *)0xC541F42)->v) = (t0 - 1);
    t1 = (short)(t0 - 1);
    if ((short)(t0 - 1) == 0) {
        (((struct oA_ushort *)0xC541F42)->v) = 0x708;
        (((struct oE_ushort *)0xC541F42)->v) = 0x0;
        (((struct oC_ushort *)0xC541F42)->v) = 0x0;
        (((struct o0_uchar *)0xC541F42)->v) = ((*(signed char *)0xC541F42) + 0x1);
        (((struct o1_uchar *)0xC541F42)->v) = 0x0;
        t0 = 0x0;
        t2 = 0x0;
        for (;;) {
            *(unsigned char *)(((((t2 << 2) + t2) + 0xC40F7F8) + 0x0)) = t2;
            t4 = 0x0;
            if ((int)t2 < (int)0x4) {
                t4 = 0x1;
            }
            *(unsigned char *)(((((t2 << 2) + t2) + 0xC40F7F8) + 0x1)) = t4;
            t4 = 0x1;
            if ((((int)0x1 << (int)t2) & (unsigned char)(*(signed char *)0xC3BD447)) != 0) {
                t4 = 0x0;
            }
            *(unsigned char *)(((((t2 << 2) + t2) + 0xC40F7F8) + 0x2)) = t4;
            t4 = 0x0;
            if ((int)t2 < (int)0x4) {
                t0 = 0xC53249A;
                t4 = (*(signed char *)((t0 + (t2 * 0x3938))));
            }
            *(unsigned char *)(((((t2 << 2) + t2) + 0xC40F7F8) + 0x3)) = t4;
            t3 = t2;
            t4 = (((t2 << 2) + t2) + 0xC40F7F8);
            t2 = (t2 + 0x1);
            *(unsigned char *)((t4 + 0x4)) = t3;
            if ((int)t2 >= (int)0x8) {
                break;
            }
        }
        t1 = t3;
    }
    return t1;
}

int FUN_0c04549c(void)
{
    int stk[1];
    register int t3;
    register int t4;
    register int t6;
    register int t10;
    register int t18;
    register int t16;
    register int t22;
    register int t23;
    register int t24;
    register int t29;
    register int t30;
    register int t32;
    register int t40;
    register int t41;
    register int t44;
    register int t54;
    register int t55;
    register int t58;
    register int t68;
    register int t79;
    register int t80;
    register int t81;
    register int t83;
    register int t88;
    register int t89;
    register int t90;
    register int t91;
    register int t108;
    register int t109;
    register int t110;
    register int t111;
    register int t116;
    register int t117;
    register int t118;
    register int t136;
    register int t137;
    register int t138;
    register int t148;
    register int t149;
    register int t150;
    register int t1;
    register int t2;
    register int t160;

    (((struct o0_uchar *)0xC541F42)->v) = ((*(signed char *)0xC541F42) + 0x1);
    (((struct o1_uchar *)0xC541F42)->v) = 0x0;
    (((struct o0_uchar *)0xC542344)->v) = 0x0;
    (((struct o2_uchar *)0xC542344)->v) = 0x0;
    (((struct o3_uchar *)0xC542344)->v) = 0x0;
    t3 = 0x0;
    for (;;) {
        t4 = *(signed char *)(((((t3 << 2) + t3) + 0xC40F7F8) + 0x1));
        t18 = t4;
        if (t4 != 0) {
            t1 = 0x1;
            t2 = (*(signed char *)(((((t3 << 2) + t3) + 0xC40F7F8) + 0x0)));
            t6 = *(signed char *)(((((t3 << 2) + t3) + 0xC40F7F8) + 0x4));
            t1 = ((int)t1 << (int)t2);
            t2 = (*(signed char *)(((0xC542334 + t6) + 0x0)));
            t2 = (t2 | t1);
            *(unsigned char *)(((0xC542334 + t6) + 0x0)) = t2;
            t2 = 0x1;
            t2 = ((int)t2 << (int)t3);
            (((struct o2_uchar *)0xC542344)->v) = ((*(signed char *)0xC542346) + 0x1);
            t10 = ((*(signed char *)0xC542347) | t2);
            t2 = (t3 * 0x3938);
            (((struct o3_uchar *)0xC542344)->v) = t10;
            t18 = *(signed char *)(((((t3 << 2) + t3) + 0xC40F7F8) + 0x3));
            t2 = (t2 + 0xC532498);
            *(unsigned char *)((t2 + 0x2)) = t18;
        }
        if ((int)t3 < (int)0x4) {
            t1 = t3;
            t1 = (t1 << 2);
            t1 = (t1 + t3);
            t1 = (t1 + 0xC40F7F8);
            t2 = (t3 * 0x3938);
            t2 = (t2 + 0xC532498);
            t16 = 0x0;
            if ((*(signed char *)((t1 + 0x2))) != 0) {
                t16 = 0x1;
            }
            (((struct o3720_uchar *)(t2))->v) = t16;
            t18 = 0x3720;
        }
        t3 = (t3 + 0x1);
        if ((int)t3 >= (int)0x8) {
            break;
        }
    }
    t22 = t18;
    t23 = 0x0;
    for (;;) {
        t24 = *(signed char *)(((0xC542334 + t23) + 0x0));
        t23 = (t23 + 0x1);
        if (t24 != 0) {
            t22 = 0x14C;
            *(unsigned char *)((0xC5421F8 + t22)) = ((*(signed char *)((0xC5421F8 + t22))) + 0x1);
        }
        if ((int)t23 >= (int)0x8) {
            break;
        }
    }
    *(unsigned int *)(((int)stk + 0)) = 0xC532498;
    t29 = 0xC532498;
    t30 = 0xC40F7F8;
    for (;;) {
        t32 = (0x3719 + t29);
        t29 = (t29 + 0x3938);
        *(unsigned char *)((t32 + 0x0)) = (*(signed char *)((t30 + 0x4)));
        t30 = (t30 + 0x5);
        if ((unsigned int)t29 >= (unsigned int)0xC540978) {
            break;
        }
    }
    if (((unsigned short)(*(short *)(((((((((int)stk + 0) << 2) + ((int)stk + 0)) << 2) << 1) + 0xC542854) + 0x10))) & 0x200) == 0) {
        t40 = *(short *)(((((((((int)stk + 0) << 2) + ((int)stk + 0)) << 2) << 1) + 0xC542854) + 0x14));
        if (((unsigned short)t40 & 0x400) != 0) {
            t41 = (((struct oC_short *)0xC541F42)->v);
            (((struct oC_ushort *)0xC541F42)->v) = (t41 + 0x1);
            if ((int)(short)(t41 + 0x1) > (int)0x3) {
                (((struct oC_ushort *)0xC541F42)->v) = 0x0;
            }
        } else {
            if (((unsigned short)t40 & 0x800) != 0) {
                t44 = (((struct oC_short *)0xC541F42)->v);
                (((struct oC_ushort *)0xC541F42)->v) = (t44 - 1);
                if ((int)(short)(t44 - 1) < 0) {
                    (((struct oC_ushort *)0xC541F42)->v) = 0x3;
                }
            }
        }
        t54 = *(short *)(((((((((int)stk + 0) << 2) + ((int)stk + 0)) << 2) << 1) + 0xC542854) + 0x14));
        if (((unsigned short)t54 & 0x2000) != 0) {
            t55 = (((struct oE_short *)0xC541F42)->v);
            (((struct oE_ushort *)0xC541F42)->v) = (t55 - 1);
            t160 = (unsigned short)t54;
            if ((int)(short)(t55 - 1) < 0) {
                (((struct oE_ushort *)0xC541F42)->v) = 0x7;
                t160 = 0x7;
            }
        } else {
            t160 = (unsigned short)t54;
            if (((unsigned short)t54 & 0x1000) != 0) {
                t58 = (((struct oE_short *)0xC541F42)->v);
                (((struct oE_ushort *)0xC541F42)->v) = (t58 + 0x1);
                t160 = (unsigned short)t54;
                if ((int)(short)(t58 + 0x1) > (int)0x7) {
                    (((struct oE_ushort *)0xC541F42)->v) = 0x0;
                    t160 = 0x0;
                }
            }
        }
    } else {
        t68 = (((struct oC_short *)0xC541F42)->v);
        if (t68 != 0) {
            if (t68 != 1) {
                if (t68 != 2) {
                    t160 = t68;
                    if (t68 != 3) {
                    } else {
                        t79 = *(short *)(((((((((int)stk + 0) << 2) + ((int)stk + 0)) << 2) << 1) + 0xC542854) + 0x14));
                        if (((unsigned short)t79 & 0x400) != 0) {
                            t80 = (((struct oE_short *)0xC541F42)->v);
                            t81 = *(signed char *)(((((t80 << 2) + t80) + 0xC40F7F8) + 0x4));
                            *(unsigned char *)(((((t80 << 2) + t80) + 0xC40F7F8) + 0x4)) = (t81 + 0x1);
                            t160 = (signed char)(t81 + 0x1);
                            if ((int)(signed char)(t81 + 0x1) > (int)((*(signed char *)0xC542346) - 1)) {
                                t83 = (((struct oE_short *)0xC541F42)->v);
                                *(unsigned char *)(((0xC40F7F8 + ((t83 << 2) + t83)) + 0x4)) = 0x0;
                                t160 = 0x0;
                            }
                        } else {
                            t160 = (unsigned short)t79;
                            if (((unsigned short)t79 & 0x800) != 0) {
                                t88 = (((struct oE_short *)0xC541F42)->v);
                                t89 = *(signed char *)(((((t88 << 2) + t88) + 0xC40F7F8) + 0x4));
                                *(unsigned char *)(((((t88 << 2) + t88) + 0xC40F7F8) + 0x4)) = (t89 - 1);
                                t160 = (signed char)(t89 - 1);
                                if ((int)(signed char)(t89 - 1) < 0) {
                                    t90 = (((struct oE_short *)0xC541F42)->v);
                                    t91 = *(signed char *)0xC542346;
                                    *(unsigned char *)(((0xC40F7F8 + ((t90 << 2) + t90)) + 0x4)) = (t91 - 1);
                                    t160 = (t91 - 1);
                                }
                            }
                        }
                    }
                } else {
                    t108 = *(short *)(((((((((int)stk + 0) << 2) + ((int)stk + 0)) << 2) << 1) + 0xC542854) + 0x14));
                    if (((unsigned short)t108 & 0x400) != 0) {
                        t109 = (((struct oE_short *)0xC541F42)->v);
                        t110 = *(signed char *)(((((t109 << 2) + t109) + 0xC40F7F8) + 0x3));
                        *(unsigned char *)(((((t109 << 2) + t109) + 0xC40F7F8) + 0x3)) = (t110 + 0x1);
                        t160 = (signed char)(t110 + 0x1);
                        if ((int)(signed char)(t110 + 0x1) <= (int)0xF) {
                        } else {
                            t111 = (((struct oE_short *)0xC541F42)->v);
                            *(unsigned char *)(((0xC40F7F8 + ((t111 << 2) + t111)) + 0x3)) = 0x0;
                            t160 = 0x0;
                        }
                    } else {
                        t160 = (unsigned short)t108;
                        if (((unsigned short)t108 & 0x800) == 0) {
                        } else {
                            t116 = (((struct oE_short *)0xC541F42)->v);
                            t117 = *(signed char *)(((((t116 << 2) + t116) + 0xC40F7F8) + 0x3));
                            *(unsigned char *)(((((t116 << 2) + t116) + 0xC40F7F8) + 0x3)) = (t117 - 1);
                            t160 = (signed char)(t117 - 1);
                            if ((int)(signed char)(t117 - 1) >= 0) {
                            } else {
                                t118 = (((struct oE_short *)0xC541F42)->v);
                                *(unsigned char *)(((0xC40F7F8 + ((t118 << 2) + t118)) + 0x3)) = 0xF;
                                t160 = 0xF;
                            }
                        }
                    }
                }
            } else {
                t136 = *(short *)(((((((((int)stk + 0) << 2) + ((int)stk + 0)) << 2) << 1) + 0xC542854) + 0x14));
                t160 = (unsigned short)t136;
                if (((unsigned short)t136 & 0xC00) == 0) {
                } else {
                    t137 = (((struct oE_short *)0xC541F42)->v);
                    t138 = *(signed char *)(((((t137 << 2) + t137) + 0xC40F7F8) + 0x2));
                    *(unsigned char *)(((((t137 << 2) + t137) + 0xC40F7F8) + 0x2)) = (t138 ^ 0x1);
                    t160 = (t138 ^ 0x1);
                }
            }
        } else {
            t148 = *(short *)(((((((((int)stk + 0) << 2) + ((int)stk + 0)) << 2) << 1) + 0xC542854) + 0x14));
            t160 = (unsigned short)t148;
            if (((unsigned short)t148 & 0xC00) == 0) {
            } else {
                t149 = (((struct oE_short *)0xC541F42)->v);
                t150 = *(signed char *)(((((t149 << 2) + t149) + 0xC40F7F8) + 0x1));
                *(unsigned char *)(((((t149 << 2) + t149) + 0xC40F7F8) + 0x1)) = (t150 ^ 0x1);
                t160 = (t150 ^ 0x1);
            }
        }
    }
    return t160;
}

int FUN_0c0457a6(void)
{
    int stk[8];
    register int t6;
    register int t7;
    register int t8;
    register int t9;
    register int t5;
    register float u10;
    register int t27;
    register int t28;

    FUN_0c06780e(((unsigned char)(*(signed char *)0xC3BD447) & (*(signed char *)0xC542347)));
    FUN_0c036de8(0x5, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
    FUN_0c06785c();
    t6 = 0xC532498;
    t7 = 0xC532498;
    t8 = 0xC532498;
    t9 = 0xC532498;
    for (;;) {
        if ((*(signed char *)((t8 + 0x3714))) != 0) {
            t7 = 0x17;
            t6 = t9;
            FUN_0c085cac(t6, t7, 0x10);
            t5 = ((((struct oC4_int *)((*(int *)((0xC40DCBC + ((*(signed char *)((t9 + 0x2))) << 2))))))->v));
            u10 = ((((struct o6C_float *)(t5))->v));
            (((struct o28_float *)(t9))->v) = u10;
            t5 = ((((struct oC4_int *)((*(int *)((0xC40DCBC + ((*(signed char *)((t9 + 0x2))) << 2))))))->v));
            u10 = ((((struct o70_float *)(t5))->v));
            (((struct o2C_float *)(t9))->v) = u10;
            t5 = ((((struct oC4_int *)((*(int *)((0xC40DCBC + ((*(signed char *)((t9 + 0x2))) << 2))))))->v));
            u10 = ((((struct o74_float *)(t5))->v));
            (((struct o30_float *)(t9))->v) = u10;
            (((struct o4C_float *)(t9))->v) = 0.0f;
            (((struct o50_float *)(t9))->v) = 0.0f;
            (((struct o54_float *)(t9))->v) = 0.0f;
            (((struct o58_float *)(t9))->v) = 0.0f;
            (((struct o5C_float *)(t9))->v) = 0.0f;
            (((struct o60_float *)(t9))->v) = 0.0f;
        } else {
            t27 = t6;
            t28 = t7;
        }
        t8 = (t8 + 0x3938);
        t6 = t27;
        t7 = t28;
        t9 = (t9 + 0x3938);
        if ((unsigned int)t8 >= (unsigned int)0xC540978) {
            break;
        }
    }
    *(unsigned char *)0xC542235 = 0x0;
    FUN_0c056e44(0x20, 0xB);
    (((struct oA_ushort *)0xC541F42)->v) = 0x5A;
    (((struct o0_uchar *)0xC541F42)->v) = ((*(signed char *)0xC541F42) + 0x1);
    (((struct o1_uchar *)0xC541F42)->v) = 0x0;
    return 0x0;
}

int FUN_0c04587e(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t37;
    register int t3;
    register int t4;
    register int t20;
    int t1;
    register int t2;

    t0 = (((struct oA_short *)0xC541F42)->v);
    (((struct oA_ushort *)0xC541F42)->v) = (t0 - 1);
    t37 = (short)(t0 - 1);
    if ((short)(t0 - 1) == 0) {
        t3 = 0x0;
        t4 = 0x0;
        for (;;) {
            if ((int)t3 >= (int)0x4) {
                break;
            }
            t1 = (*(signed char *)0xC3BD447);
            t2 = 0x1;
            t2 = ((int)t2 << (int)t3);
            t1 = (unsigned char)t1;
            t3 = (t3 + 0x1);
            if ((t2 & t1) != 0) {
                t4 = (t4 + 0x1);
            }
        }
        if (t4 == 2) {
            if ((*(signed char *)0xC5429B4) == 0) {
                *(unsigned char *)0xC542361 = 0x0;
                FUN_0c0435f4(0x0);
                (((struct oA_ushort *)0xC541F42)->v) = 0x708;
                (((struct o0_uchar *)0xC541F42)->v) = ((*(signed char *)0xC541F42) + 0x1);
                (((struct o1_uchar *)0xC541F42)->v) = 0x0;
            }
            t20 = *(signed char *)0xC5429B4;
            t37 = t20;
            if (t20 == 4) {
                *(unsigned char *)0xC542361 = 0x1;
                (((struct o0_uchar *)0xC541F42)->v) = ((*(signed char *)0xC541F42) + 0x1);
                (((struct o0_uchar *)0xC541F42)->v) = ((*(signed char *)0xC541F42) + 0x1);
                (((struct o1_uchar *)0xC541F42)->v) = 0x0;
                t37 = 0x0;
            }
        } else {
            (((struct o0_uchar *)0xC541F42)->v) = ((*(signed char *)0xC541F42) + 0x1);
            (((struct o0_uchar *)0xC541F42)->v) = ((*(signed char *)0xC541F42) + 0x1);
            (((struct o1_uchar *)0xC541F42)->v) = 0x0;
            t37 = 0x0;
        }
    }
    return t37;
}

int FUN_0c045942(int a4, int a5, int a6)
{
    register int t0;
    register int t3;
    register int t28;
    register int t39;
    register int t1;
    int t2;
    register int t4;

    t0 = (((struct oA_short *)0xC541F42)->v);
    (((struct oA_ushort *)0xC541F42)->v) = (t0 - 1);
    if ((short)(t0 - 1) != 0) {
        t3 = 0x0;
        for (;;) {
            if ((int)t3 >= (int)0x4) {
                break;
            }
            t2 = (*(signed char *)0xC3BD446);
            t1 = 0x1;
            t1 = ((int)t1 << (int)t3);
            t2 = (unsigned char)t2;
            if ((t1 & t2) != 0) {
                t4 = t3;
            }
            t3 = (t3 + 0x1);
        }
        if (((unsigned short)(*(short *)(((((((t4 << 2) + t4) << 2) << 1) + 0xC542854) + 0x14))) & 0x2000) != 0) {
            *(unsigned char *)0xC542361 = 0x0;
            FUN_0c05aab6(t4, 0x1);
        }
        if (((unsigned short)(*(short *)(((((((t4 << 2) + t4) << 2) << 1) + 0xC542854) + 0x14))) & 0x1000) != 0) {
            *(unsigned char *)0xC542361 = 0x1;
            FUN_0c05aab6(t4, 0x1);
        }
        t28 = *(short *)(((((((t4 << 2) + t4) << 2) << 1) + 0xC542854) + 0x10));
        t39 = t28;
        if (((0x200 & (unsigned short)t28) == 0) && (((0x80 & (unsigned short)t28) == 0) && ((0x100 & (unsigned short)t28) == 0))) {
        } else {
            FUN_0c05aab6(t4, 0x2);
            (((struct o0_uchar *)0xC541F42)->v) = ((*(signed char *)0xC541F42) + 0x1);
            (((struct o1_uchar *)0xC541F42)->v) = 0x0;
            t39 = 0x0;
        }
    } else {
        (((struct o0_uchar *)0xC541F42)->v) = ((*(signed char *)0xC541F42) + 0x1);
        (((struct o1_uchar *)0xC541F42)->v) = 0x0;
        t39 = 0x0;
    }
    return t39;
}

int FUN_0c045a22(void)
{
    (((struct o0_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F41) + 0x1);
    (((struct o3_uchar *)0xC541F41)->v) = 0x0;
    (((struct o2_uchar *)0xC541F41)->v) = 0x0;
    (((struct o1_uchar *)0xC541F41)->v) = 0x0;
    return 0x0;
}

int FUN_0c045cf4(int a4, int a5, int a6)
{
    int stk[2];
    register int t0;
    register int t49;
    register int t1;
    register int t41;
    register int t34;
    register int t8;
    register int t9;
    register int t19;
    register int t20;
    int t56;
    register int t60;
    register int t62;
    register float u67;
    register float t68;
    register int t76;
    register int t77;
    register int t84;
    register int t98;
    register int t29;
    register int t57;
    register float u58;
    register float u59;

    t0 = *(signed char *)0xC541F43;
    if ((unsigned char)t0 != 0) {
        t49 = (unsigned char)t0;
        if ((unsigned char)t0 == 1) {
            t1 = *(signed char *)0xC542236;
            t41 = 0x3E;
            if (t1 == 0) {
                t34 = 0x169;
                if ((*(signed char *)0xC542361) == 0) {
                    if ((int)((((struct oC_short *)0xC541F42)->v)) < (int)0x2) {
                        *(unsigned char *)0xC542366 = ((*(signed char *)0xC542366) & (~((int)0x1 << (int)(signed char)t1)));
                        t8 = 0x16E;
                        t9 = 0x0;
                        for (;;) {
                            if ((((int)0x1 << (int)t9) & (unsigned char)(*(signed char *)0xC3BD447)) != 0) {
                                t8 = 0x83;
                                *(unsigned char *)((((t9 * 0x98) + 0xC541CDC) + t8)) = ((*(signed char *)((((t9 * 0x98) + 0xC541CDC) + t8))) & (~((int)0x1 << (int)(*(signed char *)0xC542236))));
                            }
                            t9 = (t9 + 0x1);
                            if ((int)t9 >= (int)0x4) {
                                break;
                            }
                        }
                        t29 = t8;
                    } else {
                        *(unsigned char *)0xC542366 = ((*(signed char *)0xC542366) | ((int)0x1 << (int)(signed char)t1));
                        t19 = 0x16E;
                        t20 = 0x0;
                        for (;;) {
                            if ((((int)0x1 << (int)t20) & (unsigned char)(*(signed char *)0xC3BD447)) != 0) {
                                t19 = 0x83;
                                *(unsigned char *)((((t20 * 0x98) + 0xC541CDC) + t19)) = ((*(signed char *)((((t20 * 0x98) + 0xC541CDC) + t19))) | ((int)0x1 << (int)(*(signed char *)0xC542236)));
                            }
                            t20 = (t20 + 0x1);
                            if ((int)t20 >= (int)0x4) {
                                break;
                            }
                        }
                        t29 = t19;
                    }
                    t34 = t29;
                }
                t41 = t34;
            }
            (((struct o0_uchar *)0xC541F42)->v) = ((*(signed char *)0xC541F42) + 0x1);
            (((struct o1_uchar *)0xC541F42)->v) = 0x0;
            t49 = t41;
        }
        t98 = t49;
    } else {
        *(unsigned int *)(((int)stk + 0)) = 0x0;
        t56 = 0xFFFFFFFF;
        for (;;) {
            t60 = *(int *)(((int)stk + 0));
            if ((*(signed char *)((((t60 * 0x3938) + 0xC532498) + 0x3714))) != 0) {
                t57 = 0x0;
                for (;;) {
                    t62 = *(int *)(((t57 << 2) + 0xC40DD14));
                    *(unsigned int *)(((int)stk + 4)) = t62;
                    u58 = ((((struct o28_float *)(((t60 * 0x3938) + 0xC532498)))->v));
                    u59 = ((((struct o30_float *)(((t60 * 0x3938) + 0xC532498)))->v));
                    u58 = (u58 - ((((struct o28_float *)(t62))->v)));
                    u59 = (u59 - ((((struct o30_float *)(t62))->v)));
                    u67 = (u59 * u59);
                    u67 = u67 + u58 * u58;
                    t68 = math_signed_sqrt(u67);
                    if ((300.0f > t68) && (t56 == -1)) {
                        t56 = t57;
                        FUN_0c085cac(((t60 * 0x3938) + 0xC532498), 0x17, 0x11);
                    }
                    t57 = (t57 + 0x1);
                    if ((int)t57 >= (int)0x5) {
                        break;
                    }
                }
            }
            t76 = *(int *)(((int)stk + 0));
            *(unsigned int *)(((int)stk + 0)) = (t76 + 0x1);
            if ((int)(t76 + 0x1) >= (int)0x4) {
                break;
            }
        }
        t77 = (((struct oA_short *)0xC541F42)->v);
        (((struct oA_ushort *)0xC541F42)->v) = (t77 - 1);
        t84 = t56;
        if ((short)(t77 - 1) == 0) {
            t84 = ((int)((int)(FUN_0c179ac0()) % (int)0x5));
        }
        t98 = t84;
        if (t84 == -1) {
        } else {
            (((struct oC_ushort *)0xC541F42)->v) = t84;
            *(unsigned char *)0xC3BD449 = ((*(signed char *)0xC3BD449) | (*(signed char *)0xC3BD447));
            (((struct o0_uchar *)0xC542235)->v) = 0x0;
            FUN_0c05ab04(0xCB);
            FUN_0c056e44(0x20, (((((struct oC_short *)0xC541F42)->v)) + 0x2));
            FUN_0c0573cc(0xFFFFFFFF, 0x0, 0x5A);
            (((struct o1F_uchar *)0xC542235)->v) = 0x1;
            (((struct o1_uchar *)0xC541F42)->v) = ((*(signed char *)0xC541F43) + 0x1);
            t98 = 0x5C;
        }
    }
    return t98;
}

int FUN_0c045f10(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t0 = *(signed char *)0xC541F43;
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 1) {
            (((struct o0_uchar *)0xC541F41)->v) = 0x4;
            (((struct o3_uchar *)0xC541F41)->v) = 0x0;
            (((struct o2_uchar *)0xC541F41)->v) = 0x0;
            (((struct o1_uchar *)0xC541F41)->v) = 0x0;
            t0 = 0x0;
        } else {
            t1 = *(short *)0xC541F50;
            *(unsigned short *)0xC541F50 = (t1 - 1);
            t2 = (short)(t1 - 1);
            if ((int)(short)(t1 - 1) <= 0) {
                t1 = *(signed char *)0xC541F43;
                (((struct o2_uchar *)0xC541F41)->v) = (t1 + 0x1);
                t2 = (t1 + 0x1);
            }
            t0 = t2;
        }
        t1 = t0;
    } else {
        (((struct o0_uchar *)0xC542360)->v) = (*(short *)0xC541F4E);
        if ((*(signed char *)0xC542361) == 0) {
            (((struct o5_uchar *)0xC542360)->v) = (*(signed char *)0xC542360);
        }
        if ((*(signed char *)0xC542361) == 0) {
            t0 = 0xE4E0;
            t2 = 0xC541CDC;
            t3 = 0xC532498;
            for (;;) {
                if ((*(signed char *)((t3 + 0x3714))) != 0) {
                    (((struct o56_uchar *)(t2))->v) = (*(signed char *)0xC542236);
                    t0 = (*(signed char *)((t2 + 0x56)));
                    t4 = (*(signed char *)0xC542360);
                    t0 = (t0 + (0x84 + t2));
                    (((struct o81_uchar *)(t2))->v) = t4;
                    *(unsigned char *)((t0 + 0x0)) = t4;
                }
                t3 = (t3 + 0x3938);
                t2 = (t2 + 0x98);
                if ((unsigned int)t3 >= (unsigned int)0xC540978) {
                    break;
                }
            }
        }
        *(unsigned short *)0xC541F50 = 0x5A;
        (((struct o2_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F43) + 0x1);
        t0 = *(short *)0xC541F50;
        *(unsigned short *)0xC541F50 = (t0 - 1);
        t2 = (short)(t0 - 1);
        if ((int)(short)(t0 - 1) <= 0) {
            t0 = *(signed char *)0xC541F43;
            (((struct o2_uchar *)0xC541F41)->v) = (t0 + 0x1);
            t2 = (t0 + 0x1);
        }
        t1 = t2;
    }
    return t1;
}
