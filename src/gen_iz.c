/* Straight-line functions with calls and guards (batch gen_iz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o118_int { char p[0x118]; int v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o24_short { char p[0x24]; short v; };
struct o3714_uchar { char p[0x3714]; unsigned char v; };
struct o3720_uchar { char p[0x3720]; unsigned char v; };
struct o3749_uchar { char p[0x3749]; unsigned char v; };
struct o3760_int { char p[0x3760]; int v; };
struct o4_int { char p[0x4]; int v; };
struct o40_float { char p[0x40]; float v; };
struct o41C_ushort { char p[0x41C]; unsigned short v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o82_uchar { char p[0x82]; unsigned char v; };
struct o8C_float { char p[0x8C]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
int FUN_0c016334(int, int);
int FUN_0c01811c(int, int);
int FUN_0c01817e(int, int);
int FUN_0c02b3ba(int, float, float, float);
int FUN_0c02b502(int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c037bf6(int);
int FUN_0c03f444(int, int, int);
int FUN_0c0498d8(void);
int FUN_0c049d7e(int);
int FUN_0c052364(int, int);
int FUN_0c0582de(int, int);
int FUN_0c059e60(int, int);
int FUN_0c05c5f0(int, float, float);
int FUN_0c05c632(void);
int FUN_0c05c70a(void);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c0819c2(int, int);
int FUN_0c12105e(int, int);
int FUN_0c14c1b4(int, int, int, int, int);
int FUN_0c187798(void);
int FUN_0c187cac(int, int, int, int, int);
int FUN_0c187d88(int);
int strncpy(int, int, int);
int FUN_0c01821e(int a4);
int FUN_0c0b5f0a(int a4, int a5, int a6);
int FUN_0c04193c(void);
int FUN_0c049de4(void);
int FUN_0c05c71c(void);
int FUN_0c08ff28(int a4);
int FUN_0c0e648c(int a4);
int FUN_0c1210e8(void);

int FUN_0c01821e(int a4)
{
    int stk[4];
    register int t1;
    register int t39;
    register int t5;
    register int t7;
    register int t8;
    register int t9;
    register int t10;
    register int t21;
    register int t12;
    register int t17;
    register int t34;
    register int t6;
    register int t20;
    register int t22;

    t10 = FUN_0c187d88(a4);
    t1 = (int)((int)t10 / (int)0x20);
    *(unsigned int *)(((int)stk + 8)) = (t1 + 0x1);
    *(unsigned int *)(((int)stk + 12)) = (0xE4 - ((((((t1 + 0x1) - 1) << 2) << 1) + ((t1 + 0x1) - 1)) << 1));
    *(unsigned int *)(((int)stk + 4)) = 0x0;
    t8 = *(int *)(((int)stk + 8));
    t39 = 0xC018330;
    if ((int)t8 > 0) {
        t5 = 0xC018330;
        t7 = (0xE4 - ((((((t1 + 0x1) - 1) << 2) << 1) + ((t1 + 0x1) - 1)) << 1));
        t9 = 0x0;
        for (;;) {
            t21 = t10;
            if ((int)t10 > (int)0x20) {
                t7 = 0xC016334;
                t5 = (FUN_0c016334((t9 + a4), 0x20));
                t12 = 0x20;
                if ((int)t5 < 0) {
                    t12 = 0x21;
                }
                t21 = t12;
                if (t12 != t10) {
                    *(unsigned int *)(((int)stk + 0)) = (t9 + a4);
                    t5 = (FUN_0c01817e((t9 + a4), t12));
                    t17 = (t12 - t5);
                    t5 = (FUN_0c01811c((*(int *)(((int)stk + 0))), (t12 - t5)));
                    t21 = (t17 + t5);
                }
            } else {
                t20 = t6;
                t22 = t7;
            }
            t6 = t20;
            t7 = t22;
            t8 = 0xC187DD8;
            t5 = (strncpy(0xC304E24, (t9 + a4), t21));
            t5 = t21;
            t7 = t5;
            t7 = (t7 << 1);
            t8 = t5;
            t6 = 0x280;
            t7 = (t7 + t8);
            *(unsigned char *)((0xC304E24 + t5)) = 0x0;
            t7 = (t7 << 2);
            t6 = (t6 - t7);
            t8 = 0x0;
            t6 = ((int)((unsigned int)((int)((unsigned int)t6 + (unsigned int)t8)) + ((((int)t8 > (int)t6)) ? 1u : 0u)));
            t8 = 0xC02B502;
            t6 = (t6 >> 1);
            *(unsigned int *)(((int)stk + 0)) = t6;
            t5 = (FUN_0c02b502(0x7));
            t7 = (*(int *)(((int)stk + 12)));
            t8 = (*(int *)(((int)stk + 0)));
            t34 = t8;
            t8 = 0xC02B3BA;
            t5 = (FUN_0c02b3ba(0xC304E24, (float)t34, (float)t7, 3.0f));
            t7 = (*(int *)(((int)stk + 12)));
            t10 = (t10 - t21);
            t7 = (t7 + 0x24);
            *(unsigned int *)(((int)stk + 12)) = t7;
            t8 = (*(int *)(((int)stk + 4)));
            t8 = (t8 + 0x1);
            *(unsigned int *)(((int)stk + 4)) = t8;
            t6 = (*(int *)(((int)stk + 8)));
            t9 = (t9 + t21);
            if ((int)t8 >= (int)t6) {
                break;
            }
        }
        t39 = t5;
    }
    return t39;
}

int FUN_0c0b5f0a(int a4, int a5, int a6)
{
    int stk[10];
    register int t0;
    register int t2;
    register int t4;
    register int t5;
    register int t7;
    register int t9;
    register int t16;

    t0 = 0xF4;
    if (a5 == 0) {
        t0 = 0xE4;
    }
    t2 = *(int *)((a4 + t0));
    *(unsigned int *)(((int)stk + 12)) = ((((a5 << 1) + a5) << 2) + 0xC1C6810);
    t4 = ((a5 * 0x3C) + 0xC1C6828);
    t5 = 0x5;
    for (;;) {
        *(volatile int *)(((int)stk + 12));
        t7 = ((int (*)(int, int, int))(FUN_0c187798))(a4, ((((a5 << 1) + a5) << 2) + 0xC1C6810), a6);
        t4 = (t4 + 0xC);
        t9 = ((int (*)(void))(FUN_0c187798))();
        *(int *)((int)stk + 8) = 0x10;
        FUN_0c14c1b4(a4, (t2 + 0x28), (((int)stk + 8) + 0x14), (((int)stk + 8) + 0x8), 0x10);
        *(float *)(((int)stk + 36)) = ((*(float *)(((int)stk + 36))) + 50.0f);
        *(float *)(((int)stk + 16)) = ((*(float *)(((int)stk + 16))) + 50.0f);
        *(int *)((int)stk + 4) = 0x1;
        FUN_0c14c1b4(a4, (t2 + 0x28), (((int)stk + 4) + 0x18), (((int)stk + 4) + 0xC), 0x1);
        *(float *)(((int)stk + 36)) = ((*(float *)(((int)stk + 36))) - 130.0f);
        *(float *)(((int)stk + 16)) = ((*(float *)(((int)stk + 16))) + 50.0f);
        *(int *)((int)stk + 0) = 0x2;
        t16 = FUN_0c14c1b4(a4, (t2 + 0x28), (((int)stk + 0) + 0x1C), (((int)stk + 0) + 0x10), 0x2);
        t5 = (t5 - 0x1);
        if (t5 == 0) {
            break;
        }
    }
    return t16;
}

int FUN_0c04193c(void)
{
    int t4;
    register int t8;
    register int t12;
    register int t18;
    register int t22;
    register int t26;
    register int t30;
    register int t33;
    register int t35;
    register int t37;

    t35 = *(signed char *)0xC5421FB;
    if (t35 == 0) {
        t4 = *(signed char *)0xC542239;
        if (((0xF0 & t4) != 32) && ((0xF0 & t4) != 64)) {
            t8 = 0x0;
            if (((*(int *)0xC542204) & 3) != 0) {
                t8 = 0x1;
            }
            *(unsigned char *)0xC54225E = t8;
        }
        t12 = *(int *)0xC542204;
        *(unsigned int *)0xC542204 = (t12 - 1);
        if ((int)(t12 - 1) <= 0) {
            (((struct o1_uchar *)0xC5421FA)->v) = ((*(signed char *)0xC5421FB) + 0x1);
            *(unsigned char *)0xC54225E = 0x0;
            *(unsigned int *)0xC542204 = 0x3C;
        }
        t18 = 0x0;
        if ((*(signed char *)0xC54225E) != 0) {
            t18 = 0xFFFFFFFF;
        }
        FUN_0c052364(0x0, t18);
        t22 = 0x0;
        if ((*(signed char *)0xC54225E) != 0) {
            t22 = 0xFFFFFFFF;
        }
        FUN_0c052364(0x1, t22);
        t26 = 0x0;
        if ((*(signed char *)0xC54225E) != 0) {
            t26 = 0xFFFFFFFF;
        }
        FUN_0c052364(0x2, t26);
        t30 = 0x0;
        if ((*(signed char *)0xC54225E) != 0) {
            t30 = 0xFFFFFFFF;
        }
        t37 = (FUN_0c052364(0x3, t30));
    } else {
        t33 = *(int *)0xC542204;
        *(unsigned int *)0xC542204 = (t33 - 1);
        if ((int)(t33 - 1) <= 0) {
            (((struct o0_uchar *)0xC5421FA)->v) = ((*(signed char *)0xC5421FA) + 0x1);
            (((struct o1_uchar *)0xC5421FA)->v) = 0x0;
            t35 = 0x0;
        }
        t37 = t35;
    }
    return t37;
}

int FUN_0c049de4(void)
{
    int stk[2];
    register int t2;
    register int t27;
    register int t28;
    register int t5;
    register int t7;
    register int t33;
    register int t34;
    register int t38;
    register int t0;
    register int t1;

    *(unsigned char *)0xC54235E = 0x0;
    t2 = 0x0;
    for (;;) {
        t27 = t0;
        t28 = t1;
        if (((*(signed char *)0xC542347) & ((int)0x1 << (int)t2)) != 0) {
            t1 = 0xC3BD447;
            t0 = (t2 * 0x3938);
            t0 = (t0 + 0xC532498);
            (((struct o3714_uchar *)(t0))->v) = 0x1;
            t27 = t0;
            t28 = t1;
            if ((((int)0x1 << (int)t2) & (unsigned char)(*(signed char *)((t1 + 0x0)))) == 0) {
                *(unsigned char *)((((t2 * 0x3938) + 0xC532498) + 0x2)) = 0xFFFFFFFF;
                (((struct o3720_uchar *)(((t2 * 0x3938) + 0xC532498)))->v) = 0x1;
                *(unsigned int *)(((int)stk + 0)) = ((t2 * 0x98) + 0xC541CDC);
                t5 = *(signed char *)((0x82 + ((t2 * 0x98) + 0xC541CDC)));
                *(unsigned char *)(((int)stk + 4)) = t5;
                t27 = t0;
                t28 = t1;
                if (t5 != -1) {
                    t7 = FUN_0c049d7e((*(signed char *)(((int)stk + 4))));
                    if (t7 == 0) {
                        t0 = 0x82;
                        t1 = (t2 * 0x3938);
                        t1 = (t1 + 0xC532498);
                        *(unsigned char *)((t1 + 0x2)) = (*(signed char *)((t0 + ((t2 * 0x98) + 0xC541CDC))));
                        t27 = t0;
                        t28 = t1;
                    }
                }
            }
        }
        t0 = t27;
        t1 = t28;
        t2 = (t2 + 0x1);
        if ((int)t2 >= (int)0x4) {
            break;
        }
    }
    FUN_0c0498d8();
    t33 = 0xC532498;
    t34 = 0xC541CDC;
    for (;;) {
        t38 = 0xFFFFFFFF;
        if ((*(signed char *)((t33 + 0x3720))) != 0) {
            t38 = (*(signed char *)((t33 + 0x2)));
        }
        (((struct o82_uchar *)(t34))->v) = t38;
        t34 = (t34 + 0x98);
        t33 = (t33 + 0x3938);
        if ((unsigned int)t34 >= (unsigned int)0xC541F3C) {
            break;
        }
    }
    return 0x82;
}

int FUN_0c05c71c(void)
{
    register int t0;

    t0 = *(signed char *)0xC541F40;
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 1) {
            return FUN_0c05c70a();
        }
        return ((int (*)(void))(0xC05C662))();
    }
    FUN_0c05c632();
    return ((int (*)(void))(0xC05C662))();
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

int FUN_0c0e648c(int a4)
{
    register int t0;
    register int t1;
    register int t9;
    register int t2;
    register int t4;

    t0 = *(int *)0xC540DD4;
    t1 = FUN_0c03f444(0x5, 0x0, 0x2);
    t9 = 0x0;
    if (t1 != 0) {
        t2 = 0x0;
        for (;;) {
            t4 = *(int *)((((0xC4 + t1) + t2) + 0x0));
            FUN_0c03744a(t4, 0x0, 0x55, (*(int *)0xC4B410C));
            t2 = (t2 + 0x4);
            *(unsigned short *)((t4 + 0x6)) = 0xF;
            if ((unsigned int)t2 >= (unsigned int)0x8) {
                break;
            }
        }
        *(unsigned int *)((t1 + 0x4)) = 0xC0E6168;
        *(unsigned char *)((t1 + 0x1)) = 0xFFFFFFFF;
        (((struct oAC_ushort *)(t1))->v) = 0x21F;
        (((struct oA9_uchar *)(t1))->v) = 0x21;
        (((struct o48_float *)(t1))->v) = 0.5f;
        (((struct o44_float *)(t1))->v) = 0.5f;
        (((struct o40_float *)(t1))->v) = 0.5f;
        (((struct oB4_float *)(t1))->v) = 1.0f;
        (((struct oB8_float *)(t1))->v) = 1.0f;
        (((struct oBC_float *)(t1))->v) = 0.0f;
        FUN_0c187798();
        FUN_0c0582de((t1 + 0x28), (t0 + 0x64));
        *(unsigned int *)((t1 + 0x10)) = a4;
        (((struct o41C_ushort *)(t1))->v) = ((((struct o24_short *)(a4))->v));
        t9 = t1;
    }
    return t9;
}

int FUN_0c1210e8(void)
{
    int stk[25];

    FUN_0c12105e((((((struct o4_int *)0xC475200)->v)) + ((((struct o0_int *)0xC475200)->v))), (((int)stk + 56) + 0x14));
    *(int *)((int)stk + 52) = ((*(int *)(((((int)stk + 56) + 0x14) + 0x0))));
    *(unsigned int *)(((int)stk + 64)) = ((((int)stk + 56) + 0x14) + 0x4);
    *(int *)((int)stk + 48) = ((*(int *)((((((int)stk + 56) + 0x14) + 0x4) + 0x0))));
    *(unsigned int *)(((int)stk + 72)) = ((((int)stk + 56) + 0x14) + 0x8);
    *(int *)((int)stk + 44) = ((*(int *)((((((int)stk + 56) + 0x14) + 0x8) + 0x0))));
    *(unsigned int *)(((int)stk + 56)) = ((((int)stk + 56) + 0x14) + 0xC);
    *(int *)((int)stk + 40) = ((*(int *)((((((int)stk + 56) + 0x14) + 0xC) + 0x0))));
    *(unsigned int *)(((int)stk + 60)) = ((((int)stk + 56) + 0x14) + 0x10);
    *(int *)((int)stk + 36) = ((*(int *)((((((int)stk + 56) + 0x14) + 0x10) + 0x0))));
    *(unsigned int *)(((int)stk + 68)) = ((((int)stk + 56) + 0x14) + 0x14);
    *(int *)((int)stk + 32) = ((*(int *)((((((int)stk + 56) + 0x14) + 0x14) + 0x0))));
    *(int *)((int)stk + 28) = 0xC2019F8;
    FUN_0c187cac(0xC4B107C, 0x0, 0x0, 0x0, 0xC2019F8);
    FUN_0c05c5f0(0xC4B107C, 1.0f, (1.0f + 1.0f));
    FUN_0c12105e(((((struct o0_int *)0xC475200)->v)), (((int)stk + 56) + 0x14));
    *(int *)((int)stk + 24) = ((*(int *)(((((int)stk + 56) + 0x14) + 0x0))));
    *(int *)((int)stk + 20) = ((*(int *)(((*(int *)(((int)stk + 64))) + 0x0))));
    *(int *)((int)stk + 16) = ((*(int *)(((*(int *)(((int)stk + 72))) + 0x0))));
    *(int *)((int)stk + 12) = ((*(int *)(((*(int *)(((int)stk + 56))) + 0x0))));
    *(int *)((int)stk + 8) = ((*(int *)(((*(int *)(((int)stk + 60))) + 0x0))));
    *(int *)((int)stk + 4) = ((*(int *)(((*(int *)(((int)stk + 68))) + 0x0))));
    *(int *)((int)stk + 0) = 0xC201A14;
    FUN_0c187cac(0xC4B107C, 0x0, 0x0, 0x0, 0xC201A14);
    return (FUN_0c05c5f0(0xC4B107C, 1.0f, (*(float *)0xC1211F0)));
}
