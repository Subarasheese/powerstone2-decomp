/* game/resource: functions 0C0359C8-0C03731E, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o4_int { char p[0x4]; int v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
int FUN_0c02dc0c(void);
int FUN_0c035b9c(int, int, int, int);
int FUN_0c035bc6(int);
int FUN_0c035c1a(int, int);
int FUN_0c035c44(int, int);
int FUN_0c035d74(int, int, int);
int FUN_0c036024(int);
int FUN_0c0377b2(int);
int FUN_0c03859e(int);
int FUN_0c0385b2(int);
int FUN_0c039edc(int);
int FUN_0c16fa76(int);
int FUN_0c16fab2(int);
int FUN_0c187a88(int, int, int);
int memset(int, int, int);
int FUN_0c035ec2(int a4, int a5, int a6, int a7);
int FUN_0c035fb4(int a4, int a5, int a6, int a7);
int FUN_0c0360dc(int a4, int a5, int a6, int a7);
int FUN_0c036168(int a4, int a5, int a6);
int FUN_0c036314(int a4, int a5, int a6);
int FUN_0c036428(int a4, int a5, int a6);
int FUN_0c036518(int a4, int a5);
int FUN_0c036a04(void);
struct o20_int { char p[0x20]; int v; };
struct o24_int { char p[0x24]; int v; };
struct o28_int { char p[0x28]; int v; };
struct o2C_int { char p[0x2C]; int v; };
struct o30_int { char p[0x30]; int v; };
struct o34_int { char p[0x34]; int v; };
struct oC_int { char p[0xC]; int v; };


int FUN_0c035ec2(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    FUN_0c035b9c(0x0, (*(int *)0xC4B4524), a6, a7);
    FUN_0c03859e((*(int *)0xC4B4524));
    t0 = FUN_0c035c1a(0x1, 0xCB00000);
    t1 = FUN_0c035c44(0xCB00000, t0);
    FUN_0c187a88((*(int *)0xC4C0568), (*(int *)0xC3BD45C), t1);
    FUN_0c0385b2((*(int *)0xC4C0568));
    if ((*(signed char *)0xC478C2C) != 0) {
        return FUN_0c16fab2(0x1);
    }
    t0 = FUN_0c035c1a(0x2, 0xCB00000);
    t1 = FUN_0c035c44(0xCB00000, t0);
    return FUN_0c187a88((*(int *)0xC4F45A0), (*(int *)0xC3BD45C), t1);
}

int FUN_0c035fb4(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = ((int (*)(int, int, int, int))(FUN_0c035c1a))(0x15, ((((struct o0_int *)0xC4B40CC)->v)), a6, a7);
    t0 = (((struct o0_int *)0xC4B40CC)->v);
    FUN_0c0377b2(t0);
    t1 = ((int (*)(int, int))(FUN_0c035c1a))(0x16, ((((struct o4_int *)0xC4B40CC)->v)));
    t1 = (((struct o4_int *)0xC4B40CC)->v);
    FUN_0c0377b2(t1);
    t2 = FUN_0c035bc6(0x17);
    FUN_0c035c44(0xCB00000, t2);
    if (((((struct o0_int *)0xC4B415C)->v)) == 0) {
        FUN_0c035d74(t0, 0x64, (*(int *)0xC3BD45C));
        (((struct o0_uint *)0xC4B415C)->v) = 0x1;
    }
    if (((((struct o8_int *)0xC4B415C)->v)) == 0) {
        FUN_0c035d74(t1, 0x32, (*(int *)0xC3BD45C));
        (((struct o8_uint *)0xC4B415C)->v) = 0x1;
    }
    return FUN_0c02dc0c();
}

int FUN_0c0360dc(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = ((int (*)(int, int, int, int))(FUN_0c035c44))(((*(int *)(((((a7 << 1) << 2) + a6) + 0x0))) + a6), (*(int *)(((((a7 << 1) << 2) + a6) + 0x4))), a6, a7);
    FUN_0c187a88((*(int *)((((a4 << 2) + 0xC4C0558) + 0x0))), (*(int *)0xC3BD45C), t0);
    FUN_0c0385b2((*(int *)((((a4 << 2) + 0xC4C0558) + 0x0))));
    if ((*(signed char *)0xC478C2C) != 0) {
        return FUN_0c16fa76(0x1);
    }
    t0 = ((int (*)(int, int))(FUN_0c035c44))(((*(int *)((((((a7 + 0x1) << 1) << 2) + a6) + 0x0))) + a6), (*(int *)((((((a7 + 0x1) << 1) << 2) + a6) + 0x4))));
    return FUN_0c187a88((*(int *)(((a4 << 2) + 0xC4F458C))), (*(int *)0xC3BD45C), t0);
}

int FUN_0c036168(int a4, int a5, int a6)
{
    int t5;
    int t6;
    int t42;
    int t8;
    int t11;
    int t7;
    int t53;
    int t36;
    int t35;
    int t4;
    int s20;
    int s16;
    int t44;
    int t38;
    int t0;
    int s8;
    int t10;
    int s4;
    int s12;
    int s0;

    (*(unsigned int *)&s12) = a4;
    (*(unsigned int *)&s20) = a5;
    (*(unsigned int *)&s0) = 0x0;
    t0 = s12;
    (*(unsigned int *)&s16) = (t0 << 1);
    (*(unsigned int *)&s8) = (((s12) << 2) << 1);
    t4 = 0x0;
    t5 = a5;
    t6 = a6;
    t7 = (((t0 << 1) << 2) + 0xC4B4124);
    t8 = 0x0;
    t11 = 0x0;
    for (;;) {
        if ((*(int *)((0xC4B4124 + (((s16) + (s0)) << 2)))) == 0) {
            t6 = (((t8 << 1) << 2) + a6);
            t10 = (*(int *)((t11 + ((s8) + 0xC4B40DC))));
            (*(unsigned int *)&s4) = t6;
            FUN_0c187a88(t10, ((*(int *)(((s4) + 0x0))) + a6), ((((struct o4_int *)(t6))->v)));
            FUN_0c0377b2(t10);
            t5 = ((((t8 + 0x1) << 1) << 2) + a6);
            (*(unsigned int *)&s4) = t5;
            FUN_0c035c44(((*(int *)(((s4) + 0x0))) + a6), ((((struct o4_int *)(t5))->v)));
            t5 = (*(int *)((t11 + ((s8) + 0xC1AA618))));
            t6 = (*(int *)0xC3BD45C);
            t4 = (FUN_0c035d74(t10, t5, t6));
            *(unsigned int *)(t7) = 0x1;
        } else {
            t35 = t5;
            t36 = t6;
        }
        t38 = s0;
        t5 = t35;
        t6 = t36;
        t11 = (t11 + 0x4);
        (*(unsigned int *)&s0) = (t38 + 0x1);
        t7 = (t7 + 0x4);
        t8 = (t8 + 0x2);
        if ((int)(t38 + 0x1) >= (int)0x2) {
            break;
        }
    }
    t42 = s12;
    t44 = 0x40000;
    if ((unsigned int)((((struct o24_int *)(a6))->v)) <= (unsigned int)0x40000) {
        t44 = ((((struct o24_int *)(a6))->v));
    }
    FUN_0c187a88((*(int *)((0xC4B4528 + (t42 << 2)))), (((((struct o20_int *)(a6))->v)) + a6), t44);
    FUN_0c03859e((*(int *)((0xC4B4528 + (t42 << 2)))));
    if ((*(int *)((((t42 << 2) + 0xC4B4124) + 0x20))) == 0) {
        t53 = *(int *)(((t42 << 2) + 0xC4B40FC));
        (*(unsigned int *)&s0) = (0x28 + a6);
        FUN_0c187a88(t53, ((*(int *)(((s0) + 0x0))) + a6), (*(int *)(((0x28 + a6) + 0x4))));
        FUN_0c0377b2(t53);
        (*(unsigned int *)&s0) = (0x30 + a6);
        FUN_0c035c44(((*(int *)(((s0) + 0x0))) + a6), (*(int *)(((0x30 + a6) + 0x4))));
        FUN_0c035d74(t53, (*(int *)(((t42 << 2) + 0xC1AA638))), (*(int *)0xC3BD45C));
        *(unsigned int *)(((0xC4B4124 + (t42 << 2)) + 0x20)) = 0x1;
    }
    return FUN_0c0360dc((s12), (s20), a6, 0x7);
}

int FUN_0c036314(int a4, int a5, int a6)
{
    int t0;
    int qe1;
    int qe0;

    qe1 = ((0xC4B4124 + ((a4 << 1) << 2)));
    if ((*(int *)qe1) == 0) {
        t0 = *(int *)((((a4 << 2) << 1) + 0xC4B40DC));
        FUN_0c187a88(t0, ((*(int *)(a6)) + a6), ((((struct o4_int *)(a6))->v)));
        FUN_0c0377b2(t0);
        FUN_0c035c44((((((struct o8_int *)(a6))->v)) + a6), ((((struct oC_int *)(a6))->v)));
        FUN_0c035d74(t0, (*(int *)((((a4 << 2) << 1) + 0xC1AA618))), (*(int *)0xC3BD45C));
        *(unsigned int *)qe1 = 0x1;
    }
    qe0 = ((0xC4B4124 + (((a4 << 1) + 0x1) << 2)));
    if ((*(int *)qe0) == 0) {
        t0 = *(int *)((((a4 << 2) << 1) + 0xC4B40E0));
        FUN_0c187a88(t0, (((((struct o28_int *)(a6))->v)) + a6), ((((struct o2C_int *)(a6))->v)));
        FUN_0c0377b2(t0);
        FUN_0c035c44((((((struct o30_int *)(a6))->v)) + a6), ((((struct o34_int *)(a6))->v)));
        FUN_0c035d74(t0, (*(int *)((((a4 << 2) << 1) + 0xC1AA61C))), (*(int *)0xC3BD45C));
        *(unsigned int *)qe0 = 0x1;
    }
    t0 = 0x40000;
    if ((unsigned int)((((struct o24_int *)(a6))->v)) <= (unsigned int)0x40000) {
        t0 = ((((struct o24_int *)(a6))->v));
    }
    FUN_0c187a88((*(int *)((((a4 << 2) + 0xC4B4528) + 0x0))), (((((struct o20_int *)(a6))->v)) + a6), t0);
    FUN_0c03859e((*(int *)(((a4 << 2) + 0xC4B4528))));
    return FUN_0c0360dc(a4, a5, a6, 0x7);
}

int FUN_0c036428(int a4, int a5, int a6)
{
    register int t0;

    if ((*(int *)((((a4 << 1) << 2) + 0xC4B4124))) == 0) {
        t0 = *(int *)((((a4 << 2) << 1) + 0xC4B40DC));
        FUN_0c187a88(t0, ((*(int *)((a6 + 0x0))) + a6), (*(int *)((a6 + 0x4))));
        FUN_0c0377b2(t0);
        FUN_0c035c44(((*(int *)(((a6 + 0x8) + 0x0))) + a6), (*(int *)(((a6 + 0x8) + 0x4))));
        FUN_0c035d74(t0, (*(int *)(((((a4 << 2) << 1) + 0xC1AA618) + 0x0))), (*(int *)0xC3BD45C));
        *(unsigned int *)((((a4 << 1) << 2) + 0xC4B4124)) = 0x1;
    }
    t0 = 0x40000;
    if ((unsigned int)(*(int *)((a6 + 0x14))) <= (unsigned int)0x40000) {
        t0 = (*(int *)(((a6 + 0x10) + 0x4)));
    }
    FUN_0c187a88((*(int *)((((a4 << 2) + 0xC4B4528) + 0x0))), ((*(int *)(((a6 + 0x10) + 0x0))) + a6), t0);
    FUN_0c03859e((*(int *)(((a4 << 2) + 0xC4B4528))));
    return FUN_0c0360dc(a4, a5, a6, 0x3);
}

int FUN_0c036518(int a4, int a5)
{
    int t0;
    register int t9;
    register int t11;
    register int t15;

    t0 = *(signed char *)(((a4 * 0x3938) + 0xC53249A));
    FUN_0c039edc(a4);
    if ((*(int *)(((a4 << 2) + 0xC3BD44C))) != t0) {
        FUN_0c036024(a4);
    }
    *(unsigned int *)(((a4 << 2) + 0xC3BD44C)) = t0;
    if (a5 != 0) {
        t9 = *(signed char *)0xC5429A8;
        if (t9 == 0) {
            t15 = (*(int *)(((t0 << 2) + 0xC1AA648)));
        } else {
            t11 = 0xC1AA688;
            if (t9 == 3) {
                t11 = 0xC1AA6C8;
            }
            t15 = (*(int *)(((t0 << 2) + t11)));
        }
        FUN_0c035c1a(t15, 0xCB00000);
    }
    if ((t0 != 12) && (t0 != 13)) {
        if (t0 == 14) {
            return FUN_0c036428(a4, t0, 0xCB00000);
        }
        return FUN_0c036168(a4, t0, 0xCB00000);
    }
    return FUN_0c036314(a4, t0, 0xCB00000);
}

int FUN_0c036a04(void)
{
    register int t5;

    if ((*(int *)0xC4B41FC) == 0) {
        memset((*(int *)0xC4B4528), 0x0, 0x100000);
        t5 = FUN_0c035c1a(0x1B6, (*(int *)0xC4B4528));
        *(unsigned int *)0xC4B41FC = 0x1;
    }
    return t5;
}
