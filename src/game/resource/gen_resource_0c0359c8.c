/* game/resource: functions 0C0359C8-0C03731E, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
int sys_load_file(int, int, int, int);
int FUN_0c02af32(void);
int FUN_0c0100b0(int, int);
int FUN_0c02d104(int);
int FUN_0c036518(int, int);
int FUN_0c036a9c(int, int, int, int, int);
int FUN_0c039ee6(int);
int FUN_0c0612f4(int, int, int, int);
int FUN_0c176b90(int);
int FUN_0c0ddc30(void);
int FUN_0c17a170(void);
int FUN_0c17df90(int, int);
int FUN_0c17e0f0(void);
int FUN_0c17e260(void);
int FUN_0c17f060(int, int);
int FUN_0c17f180(int);
int FUN_0c17f3a0(int, int);
int FUN_0c187a88(int, int, int);
int FUN_0c0359c8(void);
int FUN_0c035b9c(int a4, int a5, int a6, int a7);
int FUN_0c035bc6(int a4, int a5, int a6, int a7);
int FUN_0c035bf0(int a4, int a5, int a6, int a7);
int FUN_0c035c1a(int a4, int a5, int a6, int a7);
int FUN_0c035c44(int a4, int a5, int a6, int a7);
int res_model_release(int a4);
int FUN_0c035ca4(int a4, int a5);
int res_model_register(int a4);
int FUN_0c035d74(int a4, int a5, int a6);
int FUN_0c035e24(int a4);
int FUN_0c035e46(int a4, int a5);
int FUN_0c036024(int a4);
int FUN_0c0360be(void);
int FUN_0c0365c8(int a4);
int FUN_0c0365f0(int a4);
int FUN_0c03681e(void);
int FUN_0c036908(int a4, int a5, int a6, int a7);
int FUN_0c0369b8(void);
void FUN_0c0369f0(void);
int FUN_0c036a34(int a4, int a5, int a6);
int FUN_0c036b28(int a4);
int FUN_0c036b46(int a4);
int FUN_0c036b76(void);
int FUN_0c036c04(void);
int FUN_0c036c38(void);
int FUN_0c036c70(void);
int FUN_0c036cac(void);
int FUN_0c036d58(int a4);
int FUN_0c036dc4(void);

int FUN_0c0359c8(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    (((struct o0_uint *)0xC4B40CC)->v) = 0xC5830C0;
    (((struct o4_uint *)0xC4B40CC)->v) = 0xC5E30C0;
    (((struct o8_uint *)0xC4B40CC)->v) = 0xC6030C0;
    (((struct oC_uint *)0xC4B40CC)->v) = 0xC60B0C0;
    (((struct o0_uint *)0xC4B410C)->v) = 0xC5430C0;
    (((struct o4_uint *)0xC4B410C)->v) = 0xC8230C0;
    (((struct o8_uint *)0xC4B410C)->v) = 0xC828BC0;
    (((struct oC_uint *)0xC4B410C)->v) = 0xC82ABC0;
    (((struct o10_uint *)0xC4B410C)->v) = 0xC83ABC0;
    t0 = 0x0;
    t1 = 0xC4B40FC;
    t2 = 0xC6B70C0;
    t3 = 0xC7EB0C0;
    for (;;) {
        t4 = (((t0 << 2) << 1) + 0xC4B40DC);
        t5 = (t0 * 0x16000);
        t0 = (t0 + 0x1);
        *(unsigned int *)((t4 + 0x0)) = (((t5 << 2) + 0xC5430C0) + 0x148000);
        *(unsigned int *)((t4 + 0x4)) = t2;
        *(unsigned int *)((t1 + 0x0)) = t3;
        t3 = (t3 + 0xE000);
        t1 = (t1 + 0x4);
        t2 = (t2 + 0x58000);
        if ((int)t0 >= (int)0x4) {
            break;
        }
    }
    (((struct o14_uint *)0xC4B410C)->v) = ((((struct o10_int *)0xC4B40CC)->v));
    *(unsigned int *)0xC4B4524 = 0xC900000;
    t0 = 0xC4B4528;
    t1 = 0xCA00000;
    for (;;) {
        *(unsigned int *)((t0 + 0x0)) = t1;
        t0 = (t0 + 0x4);
        t1 = (t1 + 0x40000);
        if ((unsigned int)t0 >= (unsigned int)0xC4B4538) {
            break;
        }
    }
    *(unsigned int *)0xC4C0568 = 0xC4B4540;
    t0 = 0xC4C0558;
    t1 = 0xC4B8540;
    for (;;) {
        *(unsigned int *)((t0 + 0x0)) = t1;
        t0 = (t0 + 0x4);
        t1 = (t1 + 0x2000);
        if ((unsigned int)t0 >= (unsigned int)0xC4C0568) {
            break;
        }
    }
    t0 = 0xC4F458C;
    t1 = 0xC4C0580;
    for (;;) {
        *(unsigned int *)((t0 + 0x0)) = t1;
        t0 = (t0 + 0x4);
        t1 = (t1 + 0x8000);
        if ((unsigned int)t0 >= (unsigned int)0xC4F459C) {
            break;
        }
    }
    (((struct o0_uint *)0xC4F459C)->v) = 0xC4E0580;
    (((struct o4_uint *)0xC4F459C)->v) = 0xC4E4580;
    return t4;
}

int FUN_0c035b9c(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = sys_load_file(a5, a4, a6, a7);
    *(unsigned int *)0xC3BD45C = (((a5 + t0) & 0xFFFFFFE0) + 0x20);
    return t0;
}

int FUN_0c035bc6(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = sys_load_file(0xCB00000, a4, a6, a7);
    *(unsigned int *)0xC3BD45C = (((0xCB00000 + t0) & 0xFFFFFFE0) + 0x20);
    return t0;
}

int FUN_0c035bf0(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = sys_load_file(0xCB00000, a4, a6, a7);
    *(unsigned int *)0xC3BD45C = (((0xCB00000 + t0) & 0xFFFFFFE0) + 0x20);
    return t0;
}

int FUN_0c035c1a(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = sys_load_file(a5, a4, a6, a7);
    *(unsigned int *)0xC3BD45C = (((a5 + t0) & 0xFFFFFFE0) + 0x20);
    return t0;
}

int FUN_0c035c44(int a4, int a5, int a6, int a7)
{
    int t5;

    t5 = FUN_0c0612f4(a4, (*(int *)0xC3BD45C), (((int)((unsigned int)((int)((unsigned int)a5 + (unsigned int)0x0)) + ((((int)0x0 > (int)a5)) ? 1u : 0u))) >> 1), a7);
    FUN_0c0100b0((*(int *)0xC3BD45C), ((0xFFFFFFE0 & (t5 << 1)) + 0x20));
    return (t5 << 1);
}

int res_model_release(int a4)
{
    if ((*(signed char *)((a4 + 0x0))) != 0) {
        FUN_0c176b90((*(short *)((a4 + 0x2))));
        FUN_0c17f3a0((*(int *)((a4 + 0x4))), 0x0);
        *(unsigned char *)((a4 + 0x0)) = 0x0;
    }
    return 0x0;
}

int FUN_0c035ca4(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;

    t0 = (FUN_0c176b90(a5));
    t1 = 0x0;
    t2 = 0x0;
    for (;;) {
        if ((int)t2 >= (int)(*(int *)((a4 + 0xC)))) {
            break;
        }
        t3 = a4;
        t3 = (t3 + 0x10);
        t3 = (t3 + (((t2 << 2) << 2) << 1));
        t4 = 0x0;
        t5 = (((t2 << 2) << 2) << 1);
        for (;;) {
            if ((int)t4 >= (int)(*(int *)((t3 + 0x18)))) {
                break;
            }
            t5 = (*(int *)((t3 + 0x1C)));
            t6 = (t4 * 0x3C);
            t5 = (t5 + t6);
            if ((*(int *)((t5 + 0x0))) != 0) {
                t5 = 0xC17E260;
                *(volatile int *)((((*(int *)((t3 + 0x1C))) + t6) + 0x0));
                t0 = (FUN_0c17e260());
                t1 = (t1 + t0);
            } else {
                t6 = t5;
            }
            t4 = (t4 + 0x1);
            t5 = t6;
        }
        t2 = (t2 + 0x1);
    }
    return t1;
}

int res_model_register(int a4)
{
    if ((*(signed char *)((a4 + 0x0))) == 0) {
        FUN_0c176b90((*(short *)((a4 + 0x2))));
        FUN_0c17f060((*(int *)((a4 + 0x4))), 0x0);
        *(unsigned char *)((a4 + 0x0)) = 0x1;
    }
    return 0x0;
}

int FUN_0c035d74(int a4, int a5, int a6)
{
    int stk[3];
    register int t0;
    register int t4;
    register int t6;
    register int t12;
    register int t14;
    register int t5;
    register int t13;
    register int t15;
    register int t16;
    register int t17;

    *(unsigned int *)(((int)stk + 8)) = a5;
    *(unsigned int *)(((int)stk + 4)) = a6;
    t0 = *(int *)((a4 + 0x8));
    *(unsigned int *)(((int)stk + 0)) = 0x0;
    FUN_0c187a88(0xC3BD660, t0, (((*(int *)((a4 + 0x4))) << 2) << 2));
    t4 = 0x0;
    t6 = t5;
    for (;;) {
        if ((int)t4 >= (int)(*(int *)((a4 + 0x4)))) {
            break;
        }
        t6 = t4;
        t6 = (t6 << 2);
        t6 = (t6 << 2);
        t6 = (t6 + 0xC3BD660);
        t4 = (t4 + 0x1);
        *(unsigned int *)((t6 + 0x8)) = (((*(int *)((t6 + 0x8))) & 0x3FFFFF) + ((*(int *)(((int)stk + 4)))));
    }
    t12 = (FUN_0c176b90((*(int *)(((int)stk + 8)))));
    t14 = 0x0;
    for (;;) {
        if ((int)t14 >= (int)(*(int *)((a4 + 0xC)))) {
            break;
        }
        t16 = t14;
        t16 = (t16 << 2);
        t16 = (t16 << 2);
        t16 = (t16 << 1);
        t16 = (t16 + (a4 + 0x10));
        t17 = 0x0;
        for (;;) {
            if ((int)t17 >= (int)(*(int *)((t16 + 0x18)))) {
                break;
            }
            t15 = 0x3C;
            t15 = (t17 * t15);
            t13 = (*(int *)((((*(int *)((t16 + 0x1C))) + t15) + 0x0)));
            if (t13 != 0) {
                t12 = (FUN_0c17df90((*(int *)((((*(int *)((t16 + 0x1C))) + t15) + 0x0))), 0xC3BD660));
                t13 = (*(int *)(((int)stk + 0)));
                t13 = (t13 + t12);
                *(unsigned int *)(((int)stk + 0)) = t13;
            }
            t17 = (t17 + 0x1);
        }
        t14 = (t14 + 0x1);
    }
    return (*(int *)(((int)stk + 0)));
}

int FUN_0c035e24(int a4)
{
    if ((*(signed char *)((a4 + 0x0))) != 0) {
        FUN_0c176b90((*(short *)((a4 + 0x2))));
        FUN_0c17f180((*(int *)((a4 + 0x4))));
    }
    return 0x0;
}

int FUN_0c035e46(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;

    t0 = (FUN_0c176b90(a5));
    t1 = 0x0;
    t2 = 0x0;
    for (;;) {
        if ((int)t2 >= (int)(*(int *)((a4 + 0xC)))) {
            break;
        }
        t3 = a4;
        t3 = (t3 + 0x10);
        t3 = (t3 + (((t2 << 2) << 2) << 1));
        t4 = 0x0;
        t5 = (((t2 << 2) << 2) << 1);
        for (;;) {
            if ((int)t4 >= (int)(*(int *)((t3 + 0x18)))) {
                break;
            }
            t5 = (*(int *)((t3 + 0x1C)));
            t6 = (t4 * 0x3C);
            t5 = (t5 + t6);
            if ((*(int *)((t5 + 0x0))) != 0) {
                t5 = 0xC17E0F0;
                *(volatile int *)((((*(int *)((t3 + 0x1C))) + t6) + 0x0));
                t0 = (FUN_0c17e0f0());
                t1 = (t1 + t0);
            } else {
                t6 = t5;
            }
            t4 = (t4 + 0x1);
            t5 = t6;
        }
        t2 = (t2 + 0x1);
    }
    return t1;
}

int FUN_0c036024(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;

    *(unsigned int *)(((a4 << 2) + 0xC3BD44C)) = 0xFFFFFFFF;
    FUN_0c039ee6(a4);
    t0 = (0xC4B40DC + ((a4 << 2) << 1));
    t1 = (((a4 << 1) << 2) + 0xC4B4124);
    t2 = 0x0;
    t3 = (((a4 << 1) << 2) + 0xC4B4124);
    t4 = (((a4 << 1) << 2) + 0xC4B4124);
    t5 = (0xC1AA618 + ((a4 << 2) << 1));
    for (;;) {
        t6 = *(int *)(((t2 << 2) + (0xC4B40DC + ((a4 << 2) << 1))));
        if ((*(int *)((t3 + 0x0))) != 0) {
            t1 = (*(int *)((t5 + 0x0)));
            FUN_0c035ca4(t6, t1);
            *(unsigned int *)((t4 + 0x0)) = 0x0;
        } else {
            t6 = t0;
            t7 = t1;
        }
        t2 = (t2 + 0x1);
        t0 = t6;
        t1 = t7;
        t5 = (t5 + 0x4);
        t4 = (t4 + 0x4);
        t3 = (t3 + 0x4);
        if ((int)t2 >= (int)0x2) {
            break;
        }
    }
    t0 = *(int *)(((a4 << 2) + 0xC4B40FC));
    if ((*(int *)(((a4 << 2) + 0xC4B4144))) != 0) {
        FUN_0c035ca4(t0, (*(int *)(((a4 << 2) + 0xC1AA638))));
        *(unsigned int *)(((a4 << 2) + 0xC4B4144)) = 0x0;
    }
    return 0xC4B4144;
}

int FUN_0c0360be(void)
{
    register int t0;
    register int t1;

    t0 = 0x0;
    for (;;) {
        t1 = FUN_0c036024((signed char)t0);
        t0 = (t0 + 0x1);
        if ((int)(signed char)t0 >= (int)0x4) {
            break;
        }
    }
    return t1;
}

int FUN_0c0365c8(int a4)
{
    int stk[1];

    *(unsigned char *)(((int)stk + 0)) = a4;
    return FUN_0c036024((*(signed char *)(((int)stk + 0))));
}

int FUN_0c0365f0(int a4)
{
    int stk[2];
    register int t0;

    *(unsigned char *)(((int)stk + 0)) = a4;
    t0 = *(signed char *)(((int)stk + 0));
    *(unsigned int *)(((int)stk + 4)) = t0;
    FUN_0c036024(t0);
    return FUN_0c036518((*(int *)(((int)stk + 4))), 0x1);
}

int FUN_0c03681e(void)
{
    register int t0;
    register int t1;

    t0 = *(int *)0xC4B410C;
    if ((*(int *)0xC4B4154) != 0) {
        t1 = FUN_0c035ca4(t0, 0x96);
        *(unsigned int *)0xC4B4154 = 0x0;
        t0 = t1;
    }
    return t0;
}

int FUN_0c036908(int a4, int a5, int a6, int a7)
{
    FUN_0c035bc6(0x24, a5, a6, a7);
    return res_model_register(0xC241F90);
}

int FUN_0c0369b8(void)
{
    register int t0;

    t0 = FUN_0c02af32();
    if ((*(int *)0xC4B41F0) != 0) {
        *(unsigned int *)0xC4B41F0 = 0x0;
    }
    return t0;
}

void FUN_0c0369f0(void)
{
    if ((*(int *)0xC4B41FC) != 0) {
        *(unsigned int *)0xC4B41FC = 0x0;
        FUN_0c02d104(0xC4B41FC);
    return;
    }
}

int FUN_0c036a34(int a4, int a5, int a6)
{
    if ((*(int *)(((a5 << 2) + 0xC4B4124))) != 0) {
        FUN_0c035ca4((*(int *)((a6 + 0x0))), a4);
        *(unsigned int *)(((a5 << 2) + 0xC4B4124)) = 0x0;
    }
    return 0xC4B4124;
}

int FUN_0c036b28(int a4)
{
    return FUN_0c036a34((*(int *)((((((a4 << 2) + a4) << 2) + 0xC1AA7E4) + 0x8))), (*(int *)((((((a4 << 2) + a4) << 2) + 0xC1AA7E4) + 0xC))), (*(int *)((((((a4 << 2) + a4) << 2) + 0xC1AA7E4) + 0x10))));
}

int FUN_0c036b46(int a4)
{
    return (FUN_0c036a9c((*(int *)((((((a4 << 2) + a4) << 2) + 0xC1AA7E4) + 0x0))), (*(int *)((((((a4 << 2) + a4) << 2) + 0xC1AA7E4) + 0x4))), (*(int *)((((((a4 << 2) + a4) << 2) + 0xC1AA7E4) + 0x8))), (*(int *)((((((a4 << 2) + a4) << 2) + 0xC1AA7E4) + 0xC))), ((*(int *)((((((a4 << 2) + a4) << 2) + 0xC1AA7E4) + 0x10))))));
}

int FUN_0c036b76(void)
{
    register int t30;

    FUN_0c036b28(0x0);
    FUN_0c036b28(0x2);
    FUN_0c036b28(0xC);
    FUN_0c036b28(0xF);
    FUN_0c036b28(0x10);
    FUN_0c036b28(0x11);
    FUN_0c036b28(0x12);
    FUN_0c036b28(0x13);
    FUN_0c036b28(0x14);
    FUN_0c036b28(0x15);
    FUN_0c036b28(0x23);
    FUN_0c036b28(0x24);
    FUN_0c036b28(0x25);
    FUN_0c036b28(0x26);
    FUN_0c036b28(0x27);
    FUN_0c036b28(0x28);
    if ((*(signed char *)0xC5429A8) == 0) {
        FUN_0c036b28(0x3);
        FUN_0c036b28(0x9);
        FUN_0c036b28(0xD);
        FUN_0c036b28(0x1B);
        FUN_0c036b28(0x1D);
        return FUN_0c036b28(0x21);
    }
    FUN_0c036b28(0x4);
    FUN_0c036b28(0xA);
    FUN_0c036b28(0xE);
    FUN_0c036b28(0x22);
    if ((*(signed char *)0xC5429A8) == 1) {
        FUN_0c036b28(0x1C);
        t30 = 0x1E;
    } else {
        FUN_0c036b28(0x2A);
        t30 = 0x2B;
    }
    return FUN_0c036b28(t30);
}

int FUN_0c036c04(void)
{
    register int t3;
    register int t4;

    FUN_0c036b76();
    FUN_0c036b28(0x1);
    FUN_0c036b28(0xB);
    t3 = *(signed char *)0xC5429A8;
    if (t3 == 0) {
        return FUN_0c036b28(0x5);
    }
    t4 = 0x29;
    if (t3 == 1) {
        t4 = 0x6;
    }
    return FUN_0c036b28(t4);
}

int FUN_0c036c38(void)
{
    FUN_0c036b28(0x16);
    FUN_0c036b28(0x17);
    FUN_0c036b28(0x18);
    FUN_0c036b28(0x19);
    return FUN_0c036b28(0x1A);
}

int FUN_0c036c70(void)
{
    FUN_0c0ddc30();
    FUN_0c17a170();
    FUN_0c035e46(((((struct o8_int *)0xC4B40CC)->v)), 0x1E);
    FUN_0c035e46((*(int *)0xC4B4110), 0x2BC);
    FUN_0c035e46(((((struct o0_int *)0xC4B40CC)->v)), 0x64);
    FUN_0c035e46(((((struct o4_int *)0xC4B40CC)->v)), 0x32);
    FUN_0c035e46(((((struct oC_int *)0xC4B40CC)->v)), 0x7D);
    return FUN_0c035e24(0xC241F90);
}

int FUN_0c036cac(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;

    t0 = 0xC4B4124;
    t1 = 0xC4B4144;
    t2 = 0x0;
    for (;;) {
        if ((*(int *)((t1 + 0x0))) != 0) {
            t3 = t2;
            t0 = (*(int *)((0xC4B40FC + t3)));
            t3 = (FUN_0c035e46(t0, (*(int *)((0xC1AA638 + t3)))));
        } else {
            t4 = t0;
        }
        t1 = (t1 + 0x4);
        t0 = t4;
        t2 = (t2 + 0x4);
        if ((unsigned int)t1 >= (unsigned int)0xC4B4154) {
            break;
        }
    }
    t1 = t3;
    t2 = t0;
    t0 = 0x0;
    for (;;) {
        t3 = 0x0;
        t4 = (((t0 << 1) << 2) + 0xC4B4124);
        t5 = 0x0;
        for (;;) {
            if ((*(int *)((t4 + 0x0))) != 0) {
                t2 = 0xC4B40DC;
                t2 = (t2 + ((t0 << 2) << 1));
                t2 = (t2 + t5);
                t2 = (*(int *)((t2 + 0x0)));
                t1 = (FUN_0c035e46(t2, (*(int *)((((0xC1AA618 + ((t0 << 2) << 1)) + t5) + 0x0)))));
            } else {
                t7 = t2;
            }
            t6 = 0x2;
            t2 = t7;
            t3 = (t3 + 0x1);
            t5 = (t5 + 0x4);
            t4 = (t4 + 0x4);
            if ((int)t3 >= (int)t6) {
                break;
            }
        }
        t6 = 0x4;
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)t6) {
            break;
        }
    }
    if ((*(int *)0xC4B4154) != 0) {
        return FUN_0c035e46((*(int *)0xC4B410C), 0x96);
    }
    return t1;
}

int FUN_0c036d58(int a4)
{
    if ((*(int *)((((*(int *)((((((a4 << 2) + a4) << 2) + 0xC1AA7E4) + 0xC))) << 2) + 0xC4B4124))) != 0) {
        return FUN_0c035e46((*(int *)(((*(int *)((((((a4 << 2) + a4) << 2) + 0xC1AA7E4) + 0x10))) + 0x0))), (*(int *)((((((a4 << 2) + a4) << 2) + 0xC1AA7E4) + 0x8))));
    }
    return 0xC4B4124;
}

int FUN_0c036dc4(void)
{
    register int t2;

    FUN_0c036d58(0x2);
    t2 = 0xA;
    if ((*(signed char *)0xC5429A8) == 0) {
        t2 = 0x9;
    }
    FUN_0c036d58(t2);
    return FUN_0c036d58(0xC);
}
