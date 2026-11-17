/* game/unsorted: functions 0C110168-0C112910, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oDC_int { char p[0xDC]; int v; };
struct oE0_int { char p[0xE0]; int v; };
struct oE4_int { char p[0xE4]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int);
int FUN_0c058a6e(int, int, int, int, int, int);
int FUN_0c1116a8(int, int, int);
int FUN_0c1171f0(int);
int FUN_0c1173dc(int, int);
int FUN_0c187798(int, int, int);
int FUN_0c1117a0(int a4, int a5, int a6);
int FUN_0c1118ac(int a4, int a5, int a6);
int FUN_0c111f38(int a4);

int FUN_0c1117a0(int a4, int a5, int a6)
{
    int t0;
    register int t1;

    if (((int)(*(int *)(((*(int *)0xC4739A4) + 0x38))) >= 0) && (t0 = *(signed char *)((a4 + 0x14)), t0 != 0)) {
        (((struct o14_uchar *)(a4))->v) = (*(signed char *)(((*(int *)((a4 + 0x10))) + 0x14)));
    }
    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if ((t0 != 2) && (t0 != 3)) {
                if (t0 != 4) {
                    return t0;
                }
                t1 = FUN_0c1116a8(a4, a5, a6);
                if ((int)(*(int *)(((*(int *)0xC4739A4) + 0x38))) < 0) {
                    return FUN_0c03f346(a4);
                }
                return t1;
            }
            return FUN_0c1116a8(a4, a5, a6);
        }
        return t0;
    }
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct oAC_ushort *)(a4))->v) = 0x1F;
    (((struct oA9_uchar *)(a4))->v) = 0x21;
    FUN_0c187798(a4, a5, a6);
    (((struct o14_uchar *)(a4))->v) = (*(signed char *)(((*(int *)((a4 + 0x10))) + 0x14)));
    t0 = 0x0;
    if ((int)(*(int *)((0xC473C74 + ((*(int *)(((*(int *)0xC4739A4) + 0x34))) << 2)))) >= 0) {
        t0 = (*(int *)((((*(int *)((0xC473C74 + ((*(int *)(((*(int *)0xC4739A4) + 0x34))) << 2)))) << 2) + 0xC474410)));
    }
    *(unsigned short *)((a4 + 0x1C)) = t0;
    return t0;
}

int FUN_0c1118ac(int a4, int a5, int a6)
{
    int t0;
    register int t1;
    register int t2;

    if (((int)(*(int *)(((*(int *)0xC4739A4) + 0x38))) >= 0) && (t0 = *(signed char *)((a4 + 0x14)), t0 != 0)) {
        (((struct o14_uchar *)(a4))->v) = (*(signed char *)(((*(int *)((a4 + 0x10))) + 0x14)));
    }
    t0 = *(signed char *)((a4 + 0x14));
    t1 = *(int *)0xC4739A4;
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        return t0;
                    }
                    t2 = FUN_0c058a6e((0xB0 + a4), 0xC29106C, 0xC29107C, (*(int *)((t1 + 0x38))), ((*(int *)((t1 + 0x3C)))), 0x0);
                    if ((int)(*(int *)(((*(int *)0xC4739A4) + 0x38))) < 0) {
                        return FUN_0c03f346(a4);
                    }
                    return t2;
                }
                return (FUN_0c058a6e((0xB0 + a4), 0xC29106C, 0xC29107C, (*(int *)((t1 + 0x38))), ((*(int *)((t1 + 0x3C)))), 0x0));
            }
            return (FUN_0c058a6e((0xB0 + a4), 0xC29106C, 0xC29107C, (*(int *)((t1 + 0x38))), ((*(int *)((t1 + 0x3C)))), 0x0));
        }
        return t0;
    }
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct oAC_ushort *)(a4))->v) = 0x61F;
    (((struct oA9_uchar *)(a4))->v) = 0x21;
    (((struct o14_uchar *)(a4))->v) = (*(signed char *)(((*(int *)((a4 + 0x10))) + 0x14)));
    t0 = 0x0;
    if ((int)(*(int *)((0xC473C74 + ((*(int *)(((*(int *)0xC4739A4) + 0x34))) << 2)))) >= 0) {
        t0 = (*(int *)((((*(int *)((0xC473C74 + ((*(int *)(((*(int *)0xC4739A4) + 0x34))) << 2)))) << 2) + 0xC474410)));
    }
    *(unsigned short *)((a4 + 0x1C)) = t0;
    FUN_0c187798(0xC473C74, t0, a6);
    FUN_0c1171f0(a4);
    t0 = *(short *)((a4 + 0x1C));
    *(volatile int *)0xC4B410C;
    return FUN_0c1173dc(((((struct oC4_int *)(a4))->v)), t0);
}

int FUN_0c111f38(int a4)
{
    int stk[7];
    register int t9;
    register int t10;
    register int t12;
    register int t16;
    register int t20;
    register int t22;
    register int t30;
    register int t36;
    int t39;
    int t40;
    int t41;
    register int t42;
    register int t43;
    register int t44;
    register int t67;
    register int t141;
    register int t142;
    register int t164;
    register int t165;
    int t2;
    register int t61;
    register int t62;
    register int t63;
    register int t65;
    register int t54;
    register int t93;
    register int t94;
    register int t97;
    register int t87;
    register int t168;
    register int t169;
    register int t170;
    register int t173;
    register int t176;

    if (((int)(*(int *)(((*(int *)0xC4739A4) + 0x38))) >= 0) && (t2 = *(signed char *)((a4 + 0x14)), t2 != 0)) {
        (((struct o14_uchar *)(a4))->v) = (*(signed char *)(((*(int *)((a4 + 0x10))) + 0x14)));
    }
    t9 = *(signed char *)((a4 + 0x14));
    t10 = *(int *)0xC4739A4;
    if (t9 != 0) {
        if (t9 == 1) {
            return t9;
        }
        if (t9 == 2) {
            *(int *)((int)stk + 4) = 0x0;
            t12 = (*(int *)((t10 + 0x3C)));
            *(int *)((int)stk + 0) = t12;
            return (FUN_0c058a6e((0xB0 + a4), 0xC29106C, 0xC29107C, (*(int *)((t10 + 0x38))), t12, 0x0));
        }
        if (t9 == 3) {
            *(int *)((int)stk + 4) = 0x0;
            t16 = (*(int *)((t10 + 0x3C)));
            *(int *)((int)stk + 0) = t16;
            return (FUN_0c058a6e((0xB0 + a4), 0xC29106C, 0xC29107C, (*(int *)((t10 + 0x38))), t16, 0x0));
        }
        if (t9 == 4) {
            *(int *)((int)stk + 4) = 0x0;
            t20 = (*(int *)((t10 + 0x3C)));
            *(int *)((int)stk + 0) = t20;
            t22 = FUN_0c058a6e((0xB0 + a4), 0xC29106C, 0xC29107C, (*(int *)((t10 + 0x38))), t20, 0x0);
            if ((int)(*(int *)(((*(int *)0xC4739A4) + 0x38))) < 0) {
                return FUN_0c03f346(a4);
            }
            return t22;
        }
        return t9;
    }
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct oAC_ushort *)(a4))->v) = 0x61F;
    (((struct oA9_uchar *)(a4))->v) = 0x21;
    (((struct o14_uchar *)(a4))->v) = (*(signed char *)(((*(int *)((a4 + 0x10))) + 0x14)));
    FUN_0c1171f0(a4);
    t30 = *(int *)((0xC473C74 + ((*(int *)(((*(int *)0xC4739A4) + 0x34))) << 2)));
    t36 = t30;
    if ((int)t30 >= 0) {
        t36 = (*(int *)((((*(int *)((0xC473C74 + ((*(int *)(((*(int *)0xC4739A4) + 0x34))) << 2)))) << 2) + 0xC474410)));
    }
    *(unsigned int *)(((int)stk + 20)) = 0x0;
    *(unsigned int *)(((int)stk + 16)) = 0x0;
    *(unsigned int *)(((int)stk + 24)) = (((((t36 << 2) << 1) - t36) * 0xE) + 0xC29620E);
    *(unsigned int *)(((int)stk + 8)) = (((t36 - 160) << 2) + 0xC2A08E0);
    t39 = 0xC2A08E0;
    t40 = (((((t36 << 2) << 1) - t36) * 0xE) + 0xC29620E);
    t41 = 0xFFFFFF60;
    t42 = 0xC473C74;
    t43 = 0x0;
    for (;;) {
        t44 = *(short *)((((((((t36 << 2) << 1) - t36) + t43) * 0xE) + 0xC29620E) + 0x0));
        if ((t44 != -1) && (((int)t44 >= 0) && (t41 = 0xB6, (int)t44 <= (int)t41))) {
            t39 = t43;
            t39 = (t39 << 2);
            *(unsigned int *)(((int)stk + 12)) = t39;
            t41 = (*(int *)(((int)stk + 8)));
            t40 = (*(int *)((t41 + 0x0)));
            t40 = (t40 << 2);
            t41 = (*(int *)((t40 + 0xC473D04)));
            t40 = 0x2000;
            if ((t41 & t40) != 0) {
                t42 = (((t36 << 2) << 1) - t36);
                t42 = (t42 + t43);
                t41 = (*(int *)(((int)stk + 12)));
                *(volatile int *)0xC4B410C;
                t42 = (t42 * 0xE);
                t42 = (t42 + 0xC29620E);
                t42 = (*(short *)((t42 + 0x0)));
                t54 = ((0xC4 + a4) + t41);
            } else {
                t42 = 0xB9;
                t41 = (*(int *)(((int)stk + 12)));
                *(volatile int *)0xC4B410C;
                t54 = (((t42 + 0xB) + a4) + t41);
            }
            FUN_0c1173dc((*(int *)((t54 + 0x0))), t42);
        } else {
            t61 = t39;
            t62 = t40;
            t63 = t41;
            t65 = t42;
        }
        t39 = t61;
        t40 = t62;
        t41 = t63;
        t42 = t65;
        t67 = *(short *)((((((((t36 << 2) << 1) - t36) + t43) * 0xE) + 0xC29620E) + 0x2));
        if ((t67 != -1) && (((int)t67 >= 0) && (t41 = 0xB6, (int)t67 <= (int)t41))) {
            t39 = (*(int *)(((int)stk + 8)));
            t41 = (*(int *)((t39 + 0x0)));
            t39 = 0x2000;
            t41 = (t41 << 2);
            t40 = (*(int *)((t41 + 0xC473D04)));
            if ((t40 & t39) != 0) {
                t40 = (*(int *)(((int)stk + 24)));
                t41 = (*(int *)(((int)stk + 16)));
                t42 = *(short *)((t40 + 0x2));
                *(volatile int *)0xC4B410C;
                t87 = ((0xC4 + a4) + t41);
            } else {
                t42 = 0xB9;
                t41 = (*(int *)(((int)stk + 20)));
                *(volatile int *)0xC4B410C;
                t87 = (((t42 + 0xB) + a4) + t41);
            }
            FUN_0c1173dc((*(int *)((t87 + 0xC))), t42);
        } else {
            t93 = t39;
            t94 = t40;
            t97 = t42;
        }
        t39 = t93;
        t40 = t94;
        t41 = (*(int *)(((int)stk + 20)));
        t42 = t97;
        t43 = (t43 + 0x1);
        t41 = (t41 + 0x4);
        *(unsigned int *)(((int)stk + 20)) = t41;
        t41 = 0x3;
        t40 = (*(int *)(((int)stk + 16)));
        t40 = (t40 + 0x4);
        *(unsigned int *)(((int)stk + 16)) = t40;
        t39 = (*(int *)(((int)stk + 24)));
        t39 = (t39 + 0xE);
        *(unsigned int *)(((int)stk + 24)) = t39;
        if ((int)t43 >= (int)t41) {
            break;
        }
    }
    if ((*(short *)((0xC29620E + ((((t36 << 2) << 1) - t36) * 0xE)))) != -1) {
        FUN_0c03744a(((((struct oDC_int *)(a4))->v)), 0xD, 0x4, (*(int *)0xC4B410C));
    }
    if ((*(short *)((0xC29620E + (((((t36 << 2) << 1) - t36) + 0x1) * 0xE)))) != -1) {
        FUN_0c03744a(((((struct oE0_int *)(a4))->v)), 0xD, 0x4, (*(int *)0xC4B410C));
    }
    if ((*(short *)((0xC29620E + (((((t36 << 2) << 1) - t36) + 0x2) * 0xE)))) != -1) {
        FUN_0c03744a(((((struct oE4_int *)(a4))->v)), 0xD, 0x4, (*(int *)0xC4B410C));
    }
    if ((*(short *)((0xC29620E + ((((t36 << 2) << 1) - t36) * 0xE)))) == -1) {
        if ((*(short *)((0xC29620E + (((((t36 << 2) << 1) - t36) + 0x1) * 0xE)))) == -1) {
            if ((*(short *)((0xC29620E + (((((t36 << 2) << 1) - t36) + 0x2) * 0xE)))) == -1) {
                *(volatile int *)0xC4B410C;
                FUN_0c1173dc(((((struct oC4_int *)(a4))->v)), 0xB8);
                t141 = 0x4;
                for (;;) {
                    t142 = ((0xC4 + a4) + t141);
                    t141 = (t141 + 0x4);
                    *(unsigned char *)(((*(int *)((t142 + 0x0))) + 0x0)) = 0x0;
                    if ((unsigned int)t141 >= (unsigned int)0x24) {
                        break;
                    }
                }
            }
        }
    }
    t164 = 0x0;
    t165 = 0x18;
    for (;;) {
        *(volatile int *)((((0xC4 + a4) + t164) + 0x0));
        FUN_0c187798(t164, t165, 0xC2913E0);
        t164 = (t168 + 0x4);
        t165 = t169;
        if ((unsigned int)t164 >= (unsigned int)t169) {
            break;
        }
    }
    *(volatile int *)((a4 + 0xDC));
    FUN_0c187798(t164, t165, t170);
    *(volatile int *)((a4 + 0xE0));
    FUN_0c187798(0x0, 0x0, t173);
    *(volatile int *)((a4 + 0xE4));
    return (FUN_0c187798(0x0, 0x0, t176));
}
