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
int nlRand(void);
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


int FUN_0c0457a6(void)
{
    int t9;
    int t6;
    int t8;
    int t7;
    int t27;
    int t28;
    int s0;
    int s28;
    int s24;
    int s20;
    int s16;
    int s12;
    int s8;
    int s4;

    FUN_0c06780e(((unsigned char)(*(signed char *)0xC3BD447) & (*(signed char *)0xC542347)));
    FUN_0c036de8(0x5, 0x0, 0x0, 0x0, s0, s4, s8, s12, s16, s20, s24, s28);
    FUN_0c06785c();
    t6 = 0xC532498;
    t7 = 0xC532498;
    t8 = 0xC532498;
    t9 = 0xC532498;
    for (;;) {
        if ((*(signed char *)(t8 + 0x3714)) != 0) {
            t7 = 0x17;
            t6 = t9;
            FUN_0c085cac(t6, 0x17, 0x10);
            (((struct o28_float *)(t9))->v) = ((((struct o6C_float *)(((((struct oC4_int *)((*(int *)((0xC40DCBC + ((*(signed char *)(t9 + 0x2)) << 2))))))->v))))->v));
            (((struct o2C_float *)(t9))->v) = ((((struct o70_float *)(((((struct oC4_int *)((*(int *)((0xC40DCBC + ((*(signed char *)(t9 + 0x2)) << 2))))))->v))))->v));
            (((struct o30_float *)(t9))->v) = ((((struct o74_float *)(((((struct oC4_int *)((*(int *)((0xC40DCBC + ((*(signed char *)(t9 + 0x2)) << 2))))))->v))))->v));
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
    int t9;
    int t20;
    int t57;
    int qm0;
    int t84;
    int t0;
    int t1;
    float u58;
    float u59;
    float t68;
    int t60;
    int t29;
    int t77;
    int t76;
    int t62;
    int t19;
    int t8;
    int t34;
    int t41;
    int t49;
    int t98;
    int t56;
    int s0;

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
                                *(unsigned char *)((((t9 * 0x98) + 0xC541CDC) + 0x83)) = ((*(signed char *)((((t9 * 0x98) + 0xC541CDC) + 0x83))) & (~((int)0x1 << (int)(*(signed char *)0xC542236))));
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
                                *(unsigned char *)((((t20 * 0x98) + 0xC541CDC) + 0x83)) = ((*(signed char *)((((t20 * 0x98) + 0xC541CDC) + 0x83))) | ((int)0x1 << (int)(*(signed char *)0xC542236)));
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
        (*(unsigned int *)&s0) = 0x0;
        t56 = 0xFFFFFFFF;
        for (;;) {
            t60 = s0;
            qm0 = (t60 * 0x3938);
            if ((*(signed char *)(((qm0 + 0xC532498) + 0x3714))) != 0) {
                t57 = 0x0;
                for (;;) {
                    t62 = *(int *)(((t57 << 2) + 0xC40DD14));
                    u58 = (((((struct o28_float *)((qm0 + 0xC532498)))->v)) - ((((struct o28_float *)(t62))->v)));
                    u59 = (((((struct o30_float *)((qm0 + 0xC532498)))->v)) - ((((struct o30_float *)(t62))->v)));
                    t68 = math_signed_sqrt(((u59 * u59) + u58 * u58));
                    if ((300.0f > t68) && (t56 == -1)) {
                        t56 = t57;
                        FUN_0c085cac((qm0 + 0xC532498), 0x17, 0x11);
                    }
                    t57 = (t57 + 0x1);
                    if ((int)t57 >= (int)0x5) {
                        break;
                    }
                }
            }
            t76 = s0;
            (*(unsigned int *)&s0) = (t76 + 0x1);
            if ((int)(t76 + 0x1) >= (int)0x4) {
                break;
            }
        }
        t77 = (((struct oA_short *)0xC541F42)->v);
        (((struct oA_ushort *)0xC541F42)->v) = (t77 - 1);
        t84 = t56;
        if ((short)(t77 - 1) == 0) {
            t84 = ((int)((int)(nlRand()) % (int)0x5));
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

