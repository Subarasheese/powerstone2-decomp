/* game/hit: functions 0C01FAA0-0C021470, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_short { short v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o0_ushort { unsigned short v; };
struct o10_uchar { char p[0x10]; unsigned char v; };
struct o16_short { char p[0x16]; short v; };
struct o16_ushort { char p[0x16]; unsigned short v; };
struct o18_short { char p[0x18]; short v; };
struct o18_ushort { char p[0x18]; unsigned short v; };
struct o1A_short { char p[0x1A]; short v; };
struct o1A_ushort { char p[0x1A]; unsigned short v; };
struct o1C_uchar { char p[0x1C]; unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o20_uchar { char p[0x20]; unsigned char v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_uchar { char p[0x22]; unsigned char v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o24_ushort { char p[0x24]; unsigned short v; };
struct o26_uchar { char p[0x26]; unsigned char v; };
struct o26_ushort { char p[0x26]; unsigned short v; };
struct o28_uchar { char p[0x28]; unsigned char v; };
struct o2_short { char p[0x2]; short v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o2_ushort { char p[0x2]; unsigned short v; };
struct o30_uchar { char p[0x30]; unsigned char v; };
struct o32_uchar { char p[0x32]; unsigned char v; };
struct o39_uchar { char p[0x39]; unsigned char v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o4_short { char p[0x4]; short v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
struct o8_uchar { char p[0x8]; unsigned char v; };
struct oA_uchar { char p[0xA]; unsigned char v; };
struct oD_uchar { char p[0xD]; unsigned char v; };
struct oE_uchar { char p[0xE]; unsigned char v; };
struct oF_uchar { char p[0xF]; unsigned char v; };
int FUN_0c01b990(void);
int FUN_0c02b182(int);
int FUN_0c038548(int);
int FUN_0c038e88(int);
int FUN_0c03ec80(void);
int FUN_0c03f40c(int);
int FUN_0c0433f0(void);
int FUN_0c0433f8(void);
int FUN_0c0524bc(void);
int FUN_0c0573c0(int, int, int);
int FUN_0c059c54(int);
int FUN_0c05b048(int, int);
int dbg_set_cell_size(int, int);
int FUN_0c17a4c0(int, int);
int FUN_0c17a550(int);
int dbg_printf(int, ...);
int FUN_0c183280(void);
int FUN_0c1832a4(int, int, int, int);
int FUN_0c18330c(int, int, int, int, int, int);
int FUN_0c183480(int, int, int);
int FUN_0c18353e(int, int, int);
int FUN_0c1837cc(int, int);
int FUN_0c1839f8(int, int, int, int);
int FUN_0c183a4e(void);
int FUN_0c1878f0(void);
int FUN_0c187d88(int);
int FUN_0c187d98(int, int, int);
int FUN_0c01faa0(void);
void FUN_0c01fbdc(void);
int FUN_0c01fc62(int a4, int a5, int a6, int a7);
int FUN_0c01fce0(int a4, int a5, int a6, int a7);
void FUN_0c01fd10(void);
int FUN_0c01fd34(void);
int FUN_0c02032a(void);
int FUN_0c0205a0(void);
int FUN_0c02068e(void);
void FUN_0c0206b0(void);
int FUN_0c0206b4(int a4, int a5, int a6, int a7);
int FUN_0c0206be(void);
int FUN_0c020950(void);
int FUN_0c0209c6(int a4, int a5, int a6, int a7);
void FUN_0c020e8a(void);
int FUN_0c020e94(int a4, int a5, int a6, int a7);
int FUN_0c020eac(void);
int FUN_0c020f1c(int a4, int a5, int a6, int a7);
int FUN_0c020f98(void);
int FUN_0c020fe0(void);

int FUN_0c01faa0(void)
{
    register int t0;
    register int t4;

    t0 = *(signed char *)0xC30AF89;
    if (t0 != 0) {
        if ((signed char)t0 == 2) {
            *(unsigned char *)0xC309858 = 0x6;
        } else {
            *(unsigned char *)0xC309858 = 0x1;
        }
        t4 = (signed char)t0;
    } else {
        *(unsigned char *)0xC309858 = 0x6;
    }
    *(unsigned char *)0xC3052CA = 0x0;
    return t4;
}

void FUN_0c01fbdc(void)
{
    
}

int FUN_0c01fc62(int a4, int a5, int a6, int a7)
{
    int stk[1];
    register int t2;

    FUN_0c01fce0(a4, a5, a6, a7);
    FUN_0c1832a4(0xC309728, 0xC309628, 0x100, 0x100);
    t2 = FUN_0c18330c(0x1, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4));
    *(unsigned int *)0xC305430 = t2;
    if (t2 == -1) {
        *(unsigned char *)0xC309828 = 0x0;
    } else {
        *(unsigned char *)0xC309828 = 0x1;
    }
    return t2;
}

int FUN_0c01fce0(int a4, int a5, int a6, int a7)
{
    register int t4;

    if ((*(signed char *)0xC309828) != 0) {
        FUN_0c1839f8((*(int *)0xC305430), a5, a6, a7);
        t4 = FUN_0c183a4e();
        *(unsigned char *)0xC309828 = 0x0;
        (((struct o1_uchar *)0xC3054C5)->v) = 0x0;
        (((struct o0_uchar *)0xC3054C5)->v) = 0x0;
        *(unsigned char *)0xC30AF8A = 0x0;
    }
    return t4;
}

void FUN_0c01fd10(void)
{
    (((struct o0_uchar *)0xC309858)->v) = 0x0;
    (((struct o1_uchar *)0xC309858)->v) = 0x0;
    (((struct o2_uchar *)0xC309858)->v) = 0x0;
    (((struct o3_uchar *)0xC309858)->v) = 0x0;
    (((struct oA_uchar *)0xC309858)->v) = 0x0;
    (((struct o8_uchar *)0xC309858)->v) = 0x0;
    (((struct o0_ushort *)0xC30AC28)->v) = 0x0;
    (((struct o2_ushort *)0xC30AC28)->v) = 0x0;
}

int FUN_0c01fd34(void)
{
    register int t2;

    t2 = ((int (*)(void))((*(int *)((((*(signed char *)0xC309858) << 2) + 0xC20E520)))))();
    return (*(signed char *)0xC309862);
}

int FUN_0c02032a(void)
{
    int stk[3];
    register int t1;
    register int t16;
    register int t6;

    *(unsigned int *)0xC83C6C0 = 0x1;
    t1 = FUN_0c1837cc((*(int *)0xC305430), 0xC305434);
    t16 = t1;
    if ((*(signed char *)0xC30543E) != 0) {
        if ((*(signed char *)0xC3054C4) == 0) {
            FUN_0c1878f0();
            t6 = FUN_0c187d88(((int)stk + 0));
            t16 = FUN_0c18353e((*(int *)0xC305430), ((int)stk + 0), t6);
            (((struct o20_uchar *)0xC309830)->v) = 0x0;
            (((struct o0_uint *)0xC309830)->v) = 0x0;
        } else {
            (((struct o28_uchar *)0xC309830)->v) = ((*(signed char *)0xC309858) + 0x1);
            t16 = t1;
        }
        (((struct o28_uchar *)0xC309830)->v) = ((*(signed char *)0xC309858) + 0x1);
    }
    (((struct o32_uchar *)0xC309830)->v) = 0x0;
    *(unsigned int *)0xC3054C0 = 0x0;
    return t16;
}

int FUN_0c0205a0(void)
{
    int stk[4];
    register int t5;
    int t8;
    register int t10;
    register int t13;
    register int t14;
    register int t16;
    register int t19;
    register int t3;

    *(unsigned int *)0xC83C6C0 = 0x1;
    FUN_0c1837cc((*(int *)0xC305430), 0xC305434);
    if ((*(signed char *)0xC30543E) == 0) {
        (((struct o0_uchar *)0xC309858)->v) = 0x10;
        (((struct oA_uchar *)0xC309858)->v) = 0xFFFFFFFA;
        t19 = 0x10;
    } else {
        for (;;) {
            t5 = FUN_0c183480((*(int *)0xC305430), ((int)stk + 0), 0x1);
            if (t5 != 0) {
                t8 = *(signed char *)(((int)stk + 0));
                if ((((unsigned char)(*(signed char *)((0xC206298 + (unsigned char)t8))) & 0x7) == 0) && ((t8 != 10) && (t8 != 13))) continue;
                t3 = 0xC305440;
                if ((t8 != 10) && (t8 != 13)) {
                    t10 = *(int *)0xC3054C0;
                    *(unsigned int *)0xC3054C0 = (t10 + 0x1);
                    *(unsigned char *)((t3 + ((t10 + 0x1) - 1))) = (*(signed char *)(((int)stk + 0)));
                    continue;
                }
                *(unsigned char *)((t3 + (*(int *)0xC3054C0))) = 0x0;
                *(unsigned int *)0xC3054C0 = 0x0;
                t13 = FUN_0c187d98(t3, 0xC1A89A0, 0x4);
                if (t13 == 0) {
                    break;
                }
                t14 = FUN_0c187d98(t3, 0xC1A89B0, 0x5);
                if (t14 == 0) {
                    (((struct o0_uchar *)0xC309858)->v) = 0x7;
                    (((struct oA_uchar *)0xC309858)->v) = 0x3;
                    return t14;
                }
                continue;
            }
            (((struct oA_uchar *)0xC309858)->v) = 0x0;
            return t5;
        }
        FUN_0c1878f0();
        t16 = FUN_0c187d88((((int)stk + 0) + 0x4));
        t19 = FUN_0c18353e((*(int *)0xC305430), (((int)stk + 0) + 0x4), t16);
        (((struct oA_uchar *)0xC309858)->v) = 0x0;
    }
    return t19;
}

int FUN_0c02068e(void)
{
    register int t0;
    register int t1;

    *(unsigned int *)0xC83C6C0 = 0x1;
    t0 = (((struct o0_int *)0xC30983C)->v);
    (((struct o0_uint *)0xC30983C)->v) = (t0 - 1);
    t1 = 0xC83C6C0;
    if ((int)(t0 - 1) <= 0) {
        (((struct o1C_uchar *)0xC30983C)->v) = 0x7;
        (((struct o26_uchar *)0xC30983C)->v) = 0x3;
        t1 = 0x3;
    }
    return t1;
}

void FUN_0c0206b0(void)
{
    
}

int FUN_0c0206b4(int a4, int a5, int a6, int a7)
{
    *(unsigned char *)0xC309858 = ((*(signed char *)0xC309858) + 0x1);
    return FUN_0c01fce0(0xC309858, a5, a6, a7);
}

int FUN_0c0206be(void)
{
    (((struct o0_uchar *)0xC309858)->v) = 0x7;
    (((struct o1_uchar *)0xC3054C5)->v) = 0x0;
    (((struct o0_uchar *)0xC3054C5)->v) = 0x0;
    (((struct oA_uchar *)0xC309858)->v) = 0xFFFFFFF9;
    return 0xC3054C6;
}

int FUN_0c020950(void)
{
    register int t0;
    register int t1;

    (((struct o30_uchar *)0xC309829)->v) = 0x0;
    (((struct o39_uchar *)0xC309829)->v) = 0x0;
    (((struct o1_uchar *)0xC309584)->v) = 0x1;
    (((struct o0_uchar *)0xC309584)->v) = 0x1;
    (((struct o1_uchar *)0xC307580)->v) = 0x1;
    (((struct o0_uchar *)0xC307580)->v) = 0x1;
    (((struct o3_uchar *)0xC3054C6)->v) = 0x0;
    (((struct o2_uchar *)0xC3054C6)->v) = 0x0;
    (((struct o2_uchar *)0xC309584)->v) = 0x0;
    (((struct o1_uchar *)0xC309829)->v) = 0x0;
    (((struct o0_uchar *)0xC309829)->v) = 0x0;
    (((struct o0_uchar *)0xC3054C6)->v) = 0x1;
    t0 = 0xC309588;
    t1 = 0x0;
    for (;;) {
        *(unsigned short *)((t0 + 0xC)) = 0x0;
        t1 = (t1 + 0x1);
        *(unsigned short *)((t0 + 0xE)) = 0x0;
        *(unsigned int *)((t0 + 0x0)) = 0x0;
        *(unsigned char *)((t0 + 0x4)) = 0x0;
        *(unsigned short *)((t0 + 0x16)) = 0x0;
        *(unsigned short *)((t0 + 0x14)) = 0x0;
        *(unsigned short *)((t0 + 0x10)) = 0x0;
        *(unsigned short *)((t0 + 0x12)) = 0x0;
        *(unsigned short *)((t0 + 0x1E)) = 0x0;
        *(unsigned short *)((t0 + 0x1C)) = 0x0;
        *(unsigned short *)((t0 + 0x18)) = 0x0;
        *(unsigned short *)((t0 + 0x1A)) = 0x0;
        (((struct o26_ushort *)(t0))->v) = 0x0;
        (((struct o24_ushort *)(t0))->v) = 0x0;
        (((struct o20_ushort *)(t0))->v) = 0x0;
        (((struct o22_ushort *)(t0))->v) = 0x0;
        t0 = (t0 + 0x28);
        if ((int)(unsigned char)t1 >= (int)0x4) {
            break;
        }
    }
    return 0x22;
}

int FUN_0c0209c6(int a4, int a5, int a6, int a7)
{
    int stk[7];
    int t9;
    register int t11;
    register int t18;
    register int t20;
    int t23;
    register int t25;
    register int t28;
    register int t30;
    register int t31;
    register int t46;
    register int t51;
    register int t54;
    register int t55;
    register int t56;
    register int t60;
    register int t63;
    register int t64;
    register int t65;
    register int t69;
    register int t71;
    register int t74;
    register int t75;
    register int t76;
    register int t80;
    register int t89;
    register int t90;
    register int t7;
    int t44;

    *(unsigned char *)(((int)stk + 8)) = a4;
    if ((int)(*(short *)0xC30AC2A) > (int)0x4B0) {
        FUN_0c01fce0(0xC30AC2A, a5, a6, a7);
    } else {
        *(unsigned short *)0xC30AC2A = ((*(short *)0xC30AC2A) + 0x1);
        t7 = 0xC30AC2A;
    }
    t9 = *(signed char *)0xC309862;
    if (t9 != 0) {
        if ((t9 != 1) && (t9 != 3)) {
            if (t9 != 2) {
                if (t9 == 4) {
                    t11 = (((struct o0_int *)0xC309840)->v);
                    (((struct o0_uint *)0xC309840)->v) = (t11 - 1);
                    if ((int)(t11 - 1) <= 0) {
                        (((struct o22_uchar *)0xC309840)->v) = 0x5;
                    }
                }
            } else {
                *(volatile int *)0xC305430;
                t18 = FUN_0c183280();
                if (t18 != 0) {
                    for (;;) {
                        t20 = FUN_0c183480((*(int *)0xC305430), ((int)stk + 0), 0x1);
                        if (t20 != 0) {
                            t23 = *(signed char *)(((int)stk + 0));
                            if ((((unsigned char)(*(signed char *)((0xC206298 + (unsigned char)t23))) & 7) == 0) && ((t23 != 10) && (t23 != 13))) continue;
                            if ((t23 != 10) && (t23 != 13)) {
                                t25 = *(int *)0xC3054C0;
                                *(unsigned int *)0xC3054C0 = (t25 + 0x1);
                                *(unsigned char *)((0xC305440 + ((t25 + 0x1) - 1))) = (*(signed char *)(((int)stk + 0)));
                                continue;
                            }
                            *(unsigned char *)((0xC305440 + (*(int *)0xC3054C0))) = 0x0;
                            *(unsigned int *)0xC3054C0 = 0x0;
                            t28 = FUN_0c187d98(0xC305440, 0xC1A89D0, 0x2);
                            if (t28 == 0) {
                                break;
                            }
                            continue;
                        }
                        return (*(signed char *)0xC309862);
                    }
                    t30 = ((int (*)(void))(FUN_0c1878f0))();
                    t31 = FUN_0c187d88((((int)stk + 0) + 0xC));
                    FUN_0c18353e((*(int *)0xC305430), (((int)stk + 0) + 0xC), t31);
                    (((struct o22_uchar *)0xC309840)->v) = 0x4;
                }
            }
        } else {
            for (;;) {
                t46 = FUN_0c183480((*(int *)0xC305430), (((int)stk + 0) + 0x4), 0x1);
                if (t46 == 0) {
                    break;
                }
                t44 = (*(signed char *)(((int)stk + 4)));
                if (((unsigned char)(*(signed char *)((0xC206298 + (unsigned char)t44))) & 7) == 0) {
                    if (t44 != 10) {
                        if (t44 == 13) {
                            if ((t44 != 10) && (t44 != 13)) {
                                t51 = *(int *)0xC3054C0;
                                *(unsigned int *)0xC3054C0 = (t51 + 0x1);
                                *(unsigned char *)(((((t51 + 0x1) - 1) + 0xC305440) + 0x0)) = (*(signed char *)(((int)stk + 4)));
                                continue;
                            }
                            *(unsigned char *)((0xC305440 + (*(int *)0xC3054C0))) = 0x0;
                            *(unsigned int *)0xC3054C0 = 0x0;
                            t54 = FUN_0c187d98(0xC305440, 0xC1A89C0, 0x4);
                            if (t54 == 0) {
                                t55 = ((int (*)(void))(FUN_0c1878f0))();
                                t56 = FUN_0c187d88((((int)stk + 0) + 0xC));
                                FUN_0c18353e((*(int *)0xC305430), (((int)stk + 0) + 0xC), t56);
                                (((struct o22_uchar *)0xC309840)->v) = 0x3;
                                return (*(signed char *)0xC309862);
                            }
                            t60 = FUN_0c187d98(0xC305440, 0xC1A89B0, 0x5);
                            if (t60 == 0) {
                                (((struct o22_uchar *)0xC309840)->v) = 0x5;
                                return (*(signed char *)0xC309862);
                            }
                            continue;
                        }
                        continue;
                    }
                    *(unsigned char *)((0xC305440 + (*(int *)0xC3054C0))) = 0x0;
                    *(unsigned int *)0xC3054C0 = 0x0;
                    t63 = FUN_0c187d98(0xC305440, 0xC1A89C0, 0x4);
                    if (t63 == 0) {
                        t64 = ((int (*)(void))(FUN_0c1878f0))();
                        t65 = FUN_0c187d88((((int)stk + 0) + 0xC));
                        FUN_0c18353e((*(int *)0xC305430), (((int)stk + 0) + 0xC), t65);
                        (((struct o22_uchar *)0xC309840)->v) = 0x3;
                        return (*(signed char *)0xC309862);
                    }
                    t69 = FUN_0c187d98(0xC305440, 0xC1A89B0, 0x5);
                    if (t69 == 0) {
                        (((struct o22_uchar *)0xC309840)->v) = 0x5;
                        return (*(signed char *)0xC309862);
                    }
                    continue;
                }
                if ((t44 != 10) && (t44 != 13)) {
                    t71 = *(int *)0xC3054C0;
                    *(unsigned int *)0xC3054C0 = (t71 + 0x1);
                    *(unsigned char *)(((((t71 + 0x1) - 1) + 0xC305440) + 0x0)) = (*(signed char *)(((int)stk + 4)));
                    continue;
                }
                *(unsigned char *)((0xC305440 + (*(int *)0xC3054C0))) = 0x0;
                *(unsigned int *)0xC3054C0 = 0x0;
                t74 = FUN_0c187d98(0xC305440, 0xC1A89C0, 0x4);
                if (t74 == 0) {
                    t75 = ((int (*)(void))(FUN_0c1878f0))();
                    t76 = FUN_0c187d88((((int)stk + 0) + 0xC));
                    FUN_0c18353e((*(int *)0xC305430), (((int)stk + 0) + 0xC), t76);
                    (((struct o22_uchar *)0xC309840)->v) = 0x3;
                    return (*(signed char *)0xC309862);
                }
                t80 = FUN_0c187d98(0xC305440, 0xC1A89B0, 0x5);
                if (t80 == 0) {
                    (((struct o22_uchar *)0xC309840)->v) = 0x5;
                    return (*(signed char *)0xC309862);
                }
            }
        }
    } else {
        if ((*(signed char *)(((int)stk + 8))) == 0) {
            t89 = ((int (*)(int))(FUN_0c1878f0))(t7);
            t90 = FUN_0c187d88((((int)stk + 0) + 0xC));
            FUN_0c18353e((*(int *)0xC305430), (((int)stk + 0) + 0xC), t90);
            (((struct o22_uchar *)0xC309840)->v) = 0x2;
        } else {
            (((struct o22_uchar *)0xC309840)->v) = 0x1;
        }
        *(unsigned int *)0xC3054C0 = 0x0;
    }
    return (*(signed char *)0xC309862);
}

void FUN_0c020e8a(void)
{
    *(unsigned char *)0xC309858 = ((*(signed char *)0xC309858) + 0x1);
}

int FUN_0c020e94(int a4, int a5, int a6, int a7)
{
    register int t1;

    *(unsigned char *)0xC309858 = ((*(signed char *)0xC309858) + 0x1);
    t1 = FUN_0c01fce0(0xC309858, a5, a6, a7);
    *(unsigned short *)0xC3052C8 = 0x12C;
    return t1;
}

int FUN_0c020eac(void)
{
    register int t3;

    dbg_set_cell_size(0x10, 0x10);
    FUN_0c17a550(0xFFC00000);
    FUN_0c17a4c0(0xD, 0xF);
    t3 = dbg_printf(0xC1A89D4);
    *(unsigned char *)0xC309858 = 0x0;
    return t3;
}

int FUN_0c020f1c(int a4, int a5, int a6, int a7)
{
    (((struct o0_uchar *)0xC309860)->v) = ((*(signed char *)0xC309860) + 0x1);
    (((struct o2_uchar *)0xC309860)->v) = 0x1;
    (((struct o1_uchar *)0xC3054C5)->v) = 0x0;
    (((struct o0_uchar *)0xC3054C5)->v) = 0x0;
    *(unsigned char *)0xC30AF8A = 0x0;
    return FUN_0c01fce0(0xC309860, a5, a6, a7);
}

int FUN_0c020f98(void)
{
    register int t2;

    *(unsigned int *)0xC83C6C0 = 0x1;
    t2 = ((int (*)(void))((*(int *)((((*(signed char *)0xC309860) << 2) + 0xC20E588)))))();
    FUN_0c03f40c(0x5);
    FUN_0c038548(0x5);
    FUN_0c038e88(0x5);
    FUN_0c03f40c(0x8);
    FUN_0c038e88(0x8);
    FUN_0c0524bc();
    FUN_0c03ec80();
    return FUN_0c02b182(0x0);
}

int FUN_0c020fe0(void)
{
    int t7;

    *(unsigned char *)0xC309860 = ((*(signed char *)0xC309860) + 0x1);
    FUN_0c01b990();
    *(volatile signed char *)0xC309993;
    *(unsigned int *)0xC30A50C = ((*(int *)0xC30A50C) + (FUN_0c0433f8()));
    (((struct o0_ushort *)0xC309BCA)->v) = (((((struct o0_short *)0xC309BCA)->v)) + 0x1);
    (((struct o16_ushort *)0xC30540C)->v) = (((((struct o16_short *)0xC30540C)->v)) + 0x1);
    t7 = FUN_0c0433f0();
    if (((0x1 & t7) != 0) && ((0x4 & t7) != 0)) {
        (((struct o2_ushort *)0xC309BCA)->v) = (((((struct o2_short *)0xC309BCA)->v)) + 0x1);
        (((struct o0_ushort *)0xC309C6C)->v) = (((((struct o0_short *)0xC309C6C)->v)) + 0x1);
        (((struct o18_ushort *)0xC30540C)->v) = (((((struct o18_short *)0xC30540C)->v)) + 0x1);
        (((struct o0_ushort *)0xC30A3E8)->v) = (((((struct o0_short *)0xC30A3E8)->v)) + 0x1);
    } else {
        if (((0x1 & t7) == 0) && ((0x4 & t7) == 0)) {
            (((struct o4_ushort *)0xC309BCA)->v) = (((((struct o4_short *)0xC309BCA)->v)) + 0x1);
            (((struct o2_ushort *)0xC309C6C)->v) = (((((struct o2_short *)0xC309C6C)->v)) + 0x1);
            (((struct o1A_ushort *)0xC30540C)->v) = (((((struct o1A_short *)0xC30540C)->v)) + 0x1);
            (((struct o2_ushort *)0xC30A3E8)->v) = (((((struct o2_short *)0xC30A3E8)->v)) + 0x1);
        } else {
            if (((0x1 & t7) != 0) && ((0x4 & t7) == 0)) {
                if ((*(signed char *)0xC309993) != 0) {
                    (((struct o4_ushort *)0xC309BCA)->v) = (((((struct o4_short *)0xC309BCA)->v)) + 0x1);
                    (((struct o2_ushort *)0xC309C6C)->v) = (((((struct o2_short *)0xC309C6C)->v)) + 0x1);
                    (((struct o1A_ushort *)0xC30540C)->v) = (((((struct o1A_short *)0xC30540C)->v)) + 0x1);
                    (((struct o0_ushort *)0xC30A3E8)->v) = (((((struct o0_short *)0xC30A3E8)->v)) + 0x1);
                } else {
                    (((struct o2_ushort *)0xC309BCA)->v) = (((((struct o2_short *)0xC309BCA)->v)) + 0x1);
                    (((struct o0_ushort *)0xC309C6C)->v) = (((((struct o0_short *)0xC309C6C)->v)) + 0x1);
                    (((struct o18_ushort *)0xC30540C)->v) = (((((struct o18_short *)0xC30540C)->v)) + 0x1);
                    (((struct o2_ushort *)0xC30A3E8)->v) = (((((struct o2_short *)0xC30A3E8)->v)) + 0x1);
                }
            } else {
                if (((0x1 & t7) == 0) && ((t7 & 0x4) != 0)) {
                    if ((*(signed char *)0xC309993) == 0) {
                        (((struct o4_ushort *)0xC309BCA)->v) = (((((struct o4_short *)0xC309BCA)->v)) + 0x1);
                        (((struct o2_ushort *)0xC309C6C)->v) = (((((struct o2_short *)0xC309C6C)->v)) + 0x1);
                        (((struct o1A_ushort *)0xC30540C)->v) = (((((struct o1A_short *)0xC30540C)->v)) + 0x1);
                        (((struct o0_ushort *)0xC30A3E8)->v) = (((((struct o0_short *)0xC30A3E8)->v)) + 0x1);
                    } else {
                        (((struct o2_ushort *)0xC309BCA)->v) = (((((struct o2_short *)0xC309BCA)->v)) + 0x1);
                        (((struct o0_ushort *)0xC309C6C)->v) = (((((struct o0_short *)0xC309C6C)->v)) + 0x1);
                        (((struct o18_ushort *)0xC30540C)->v) = (((((struct o18_short *)0xC30540C)->v)) + 0x1);
                        (((struct o2_ushort *)0xC30A3E8)->v) = (((((struct o2_short *)0xC30A3E8)->v)) + 0x1);
                    }
                }
            }
        }
    }
    (((struct o10_uchar *)0xC30540C)->v) = 0x0;
    (((struct oF_uchar *)0xC30540C)->v) = 0x0;
    (((struct oE_uchar *)0xC30540C)->v) = 0x0;
    (((struct oD_uchar *)0xC30540C)->v) = 0x0;
    if ((int)((((struct o0_short *)0xC309BCA)->v)) >= (int)0xA) {
        (((struct oE_uchar *)0xC30540C)->v) = 0x1;
        (((struct oD_uchar *)0xC30540C)->v) = 0x1;
    }
    FUN_0c059c54(0x14);
    FUN_0c05b048(0x1E, 0x0);
    (((struct o0_uchar *)0xC30EFA5)->v) = 0x1;
    FUN_0c0573c0(0xFFFFFFFF, 0x0, 0x14);
    (((struct o0_ushort *)0xC30540C)->v) = 0x1A;
    (((struct o2_ushort *)0xC30540C)->v) = 0x14;
    *(unsigned int *)0xC30EFA8 = 0xE10;
    return 0xC30540E;
}
