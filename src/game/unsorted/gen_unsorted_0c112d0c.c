/* game/unsorted: functions 0C112D0C-0C11316A, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o40_int { char p[0x40]; int v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o60_int { char p[0x60]; int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC_int { char p[0xC]; int v; };
struct oD0_int { char p[0xD0]; int v; };
struct oD8_int { char p[0xD8]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c0cff96(int, int);
int FUN_0c104d70(void);
int FUN_0c104db8(void);
int FUN_0c104ed4(int, int);
int FUN_0c1171f0(int);
int FUN_0c17c130(int, int, int);
int FUN_0c187798(int);
int FUN_0c112d0c(int a4);
int FUN_0c112d40(int a4, int a5, int a6, int a7);
int FUN_0c112df2(void);
int FUN_0c112e48(int a4);
int FUN_0c112e8c(int a4, int a5, int a6, int a7);
int FUN_0c11309e(void);
int FUN_0c1130c6(int a4, int a5, int a6, int a7);
int FUN_0c113142(void);

int FUN_0c112d0c(int a4)
{
    register int t0;

    t0 = FUN_0c03f444(0x8, 0x1, 0x1);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC112BFA;
        *(unsigned char *)((t0 + 0x2)) = a4;
        return t0;
    }
    return 0x0;
}

int FUN_0c112d40(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 80) {
                t1 = t0;
                if (t0 != 99) {
                } else {
                    (((struct o14_uchar *)(a4))->v) = 0x50;
                    t1 = 0x14;
                }
                return t1;
            }
            return FUN_0c03f346(a4, a5, a6, a7);
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0x1F;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        FUN_0c1171f0(a4);
        FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x7, 0x3, (*(int *)0xC4B410C));
        FUN_0c187798(((((struct oC4_int *)(a4))->v)));
    }
    t0 = (((struct oC4_int *)(a4))->v);
    t1 = 0xC291520;
    if ((*(signed char *)((a4 + 0x2))) == 1) {
        t1 = 0xC29152C;
    }
    return FUN_0c17c130((t0 + 0x6C), (0x90 + t0), t1);
}

int FUN_0c112df2(void)
{
    register int t0;

    t0 = FUN_0c03f444(0x8, 0x1, 0x1);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC112D40;
        return t0;
    }
    return 0x0;
}

int FUN_0c112e48(int a4)
{
    register float u0;
    register float u1;
    register float u2;

    u0 = (((struct o0_float *)0xC112F0C)->v);
    u1 = (((struct o30_float *)(a4))->v);
    u2 = (((struct o4_float *)0xC112F0C)->v);
    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) / (u2 / (u1 + u0)));
    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) / (u2 / (u1 + u0)));
    (((struct o30_float *)(a4))->v) = ((-((((struct o30_float *)(a4))->v))) + ((((struct o8_float *)0xC112F0C)->v)));
    (((struct o40_float *)(a4))->v) = (1.0f / (u2 / (u1 + u0)));
    (((struct o44_float *)(a4))->v) = (1.0f / (u2 / (u1 + u0)));
    (((struct o48_float *)(a4))->v) = (1.0f / (u2 / (u1 + u0)));
    return 0x48;
}

int FUN_0c112e8c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 == 10) {
                    return FUN_0c03f346(a4, a5, a6, a7);
                }
                t1 = t0;
                if (t0 == 99) {
                    (((struct o14_uchar *)(a4))->v) = 0xA;
                    t1 = 0x14;
                }
                return t1;
            }
            t0 = *(short *)((a4 + 0x1E));
            *(unsigned short *)((a4 + 0x1E)) = (t0 + 0x1);
            t1 = (short)(t0 + 0x1);
            if ((int)(short)(t0 + 0x1) > (int)0xA) {
                (((struct o14_uchar *)((*(int *)0xC474C18)))->v) = 0x63;
                *(unsigned int *)0xC474C18 = 0x0;
                if ((*(short *)((a4 + 0x1C))) == 0) {
                    if (((((struct o0_int *)0xC47477C)->v)) != 0) {
                        t0 = *(int *)((0xC4739AC + ((((((struct o0_int *)0xC47477C)->v)) - 1) << 2)));
                        *(unsigned int *)((0xC473D04 + ((t0 - 1) << 2))) = ((*(int *)((0xC473D04 + ((t0 - 1) << 2)))) | 0x40);
                    }
                    if (((((struct o4_int *)0xC47477C)->v)) != 0) {
                        t0 = (((struct o40_int *)((((((((struct o4_int *)0xC47477C)->v)) - 1) << 2) + 0xC4739AC)))->v);
                        *(unsigned int *)((0xC473D04 + ((t0 - 1) << 2))) = ((*(int *)((0xC473D04 + ((t0 - 1) << 2)))) | 0x80);
                    }
                    if (((((struct o8_int *)0xC47477C)->v)) != 0) {
                        t0 = *(int *)(((((((((struct o8_int *)0xC47477C)->v)) - 1) << 2) + 0xC4739AC) + 0x20));
                        *(unsigned int *)((0xC473D04 + ((t0 - 1) << 2))) = ((*(int *)((0xC473D04 + ((t0 - 1) << 2)))) | 0x100);
                    }
                    if (((((struct oC_int *)0xC47477C)->v)) != 0) {
                        t0 = (((struct o60_int *)((((((((struct oC_int *)0xC47477C)->v)) - 1) << 2) + 0xC4739AC)))->v);
                        *(unsigned int *)((0xC473D04 + ((t0 - 1) << 2))) = ((*(int *)((0xC473D04 + ((t0 - 1) << 2)))) | 0x200);
                    }
                }
                (((struct o14_uchar *)(a4))->v) = 0x63;
                t1 = 0x14;
            }
            return t1;
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0x1F;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        FUN_0c112e48(a4);
        FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x10, 0x4, (*(int *)0xC4B410C));
        t0 = *(int *)0xC4B410C;
        t1 = 0x9;
        if ((*(signed char *)0xC5429A8) == 1) {
            t1 = 0xA;
        }
        FUN_0c03744a(((((struct oD0_int *)(a4))->v)), t1, 0x3, t0);
        FUN_0c03744a(((((struct oD8_int *)(a4))->v)), 0x6, 0x3, (*(int *)0xC4B410C));
        *(unsigned int *)0xC474C18 = (FUN_0c112df2());
        *(unsigned char *)(((*(int *)0xC474C18) + 0x2)) = (*(short *)((a4 + 0x1C)));
    }
    *(unsigned short *)((a4 + 0x1C)) = (FUN_0c104ed4((*(short *)((a4 + 0x1C))), 0x1));
    *(unsigned char *)(((*(int *)0xC474C18) + 0x2)) = (*(short *)((a4 + 0x1C)));
    t0 = FUN_0c104d70();
    if (t0 == 0) {
        t0 = FUN_0c104db8();
        t1 = t0;
        if (t0 == 0) {
        } else {
            *(unsigned short *)((a4 + 0x1C)) = 0x1;
            *(unsigned char *)(((*(int *)0xC474C18) + 0x2)) = (*(short *)((a4 + 0x1C)));
            FUN_0c112d0c((*(short *)((a4 + 0x1C))));
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            *(unsigned short *)((a4 + 0x1E)) = 0x0;
            t1 = 0x0;
        }
        t0 = t1;
    } else {
        FUN_0c112d0c((*(short *)((a4 + 0x1C))));
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(unsigned short *)((a4 + 0x1E)) = 0x0;
        t0 = 0x0;
    }
    return t0;
}

int FUN_0c11309e(void)
{
    register int t0;

    t0 = FUN_0c03f444(0x8, 0x0, 0x6);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC112E8C;
        return t0;
    }
    return 0x0;
}

int FUN_0c1130c6(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 10) {
                t1 = t0;
                if (t0 != 99) {
                } else {
                    (((struct o14_uchar *)(a4))->v) = 0xA;
                    t1 = 0x14;
                }
                return t1;
            }
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        return FUN_0c0cff96((*(int *)((((((struct oC4_int *)(a4))->v)) + 0x8))), 0xC291538);
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct oAC_ushort *)(a4))->v) = 0x1F;
    (((struct oA9_uchar *)(a4))->v) = 0x21;
    (((struct o30_float *)(a4))->v) = (*(float *)0xC113178);
    FUN_0c1171f0(a4);
    FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x0, 0x33, (*(int *)0xC4B410C));
    return FUN_0c0cff96((*(int *)((((((struct oC4_int *)(a4))->v)) + 0x8))), 0xC291538);
}

int FUN_0c113142(void)
{
    register int t0;

    t0 = FUN_0c03f444(0x8, 0x0, 0x1);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC1130C6;
        return t0;
    }
    return 0x0;
}
