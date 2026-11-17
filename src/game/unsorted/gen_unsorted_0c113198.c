/* game/unsorted: functions 0C113198-0C1137D6, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o10_int { char p[0x10]; int v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o90_float { char p[0x90]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oC_int { char p[0xC]; int v; };
struct oD0_int { char p[0xD0]; int v; };
struct oD4_int { char p[0xD4]; int v; };
struct oD8_int { char p[0xD8]; int v; };
struct oDC_int { char p[0xDC]; int v; };
struct oE0_int { char p[0xE0]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c058a6e(int, int, int, int, int, int);
int FUN_0c1171f0(int);
int FUN_0c1174e4(int, int);
int FUN_0c113198(int a4, int a5, int a6, int a7);
int FUN_0c113628(void);
int FUN_0c113650(int a4, int a5, int a6, int a7);

int FUN_0c113198(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 == 1) {
            t1 = 0x0;
            for (;;) {
                t2 = *(int *)((((0xC4 + a4) + t1) + 0x0));
                t1 = (t1 + 0x4);
                (((struct o6C_float *)(t2))->v) = (((((struct o6C_float *)(t2))->v)) + ((((struct o90_float *)(t2))->v)));
                if ((unsigned int)t1 >= (unsigned int)0x28) {
                    break;
                }
            }
            t1 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t1 + 0x1);
            t2 = (short)(t1 + 0x1);
            if ((int)(short)(t1 + 0x1) < (int)0x10) {
            } else {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                *(unsigned short *)((a4 + 0x1C)) = 0x0;
                t2 = 0x0;
            }
            return t2;
        }
        if (t0 == 2) {
            *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x1;
            *(unsigned char *)((((((struct oCC_int *)(a4))->v)) + 0x0)) = 0x1;
            *(unsigned char *)((((((struct oD0_int *)(a4))->v)) + 0x0)) = 0x1;
            *(unsigned char *)((((((struct oD4_int *)(a4))->v)) + 0x0)) = 0x1;
            FUN_0c03744a(((((struct oC8_int *)(a4))->v)), 0x6, 0xC, (*(int *)0xC4B410C));
            if (((((struct o8_int *)0xC474774)->v)) != 0) {
                t1 = (((struct o8_int *)0xC474774)->v);
                *(volatile int *)0xC4B410C;
                FUN_0c1174e4(((((struct oC8_int *)(a4))->v)), ((*(int *)((((t1 - 1) << 2) + 0xC4739AC))) - 1));
            }
            FUN_0c03744a(((((struct oCC_int *)(a4))->v)), 0x7, 0xC, (*(int *)0xC4B410C));
            if (((((struct oC_int *)0xC474774)->v)) != 0) {
                t1 = (((struct oC_int *)0xC474774)->v);
                *(volatile int *)0xC4B410C;
                FUN_0c1174e4(((((struct oCC_int *)(a4))->v)), ((*(int *)((((t1 - 1) << 2) + 0xC4739EC))) - 1));
            }
            FUN_0c03744a(((((struct oD0_int *)(a4))->v)), 0x8, 0xC, (*(int *)0xC4B410C));
            if (((((struct o10_int *)0xC474774)->v)) != 0) {
                t1 = (((struct o10_int *)0xC474774)->v);
                *(volatile int *)0xC4B410C;
                FUN_0c1174e4(((((struct oD0_int *)(a4))->v)), ((*(int *)((((t1 - 1) << 2) + 0xC4739CC))) - 1));
            }
            FUN_0c03744a(((((struct oD4_int *)(a4))->v)), 0x9, 0xC, (*(int *)0xC4B410C));
            if (((((struct o14_int *)0xC474774)->v)) != 0) {
                t1 = (((struct o14_int *)0xC474774)->v);
                *(volatile int *)0xC4B410C;
                FUN_0c1174e4(((((struct oD4_int *)(a4))->v)), ((*(int *)((((t1 - 1) << 2) + 0xC473A0C))) - 1));
            }
            t1 = (((struct o0_int *)0xC474774)->v);
            if (t1 != 0) {
                if (t1 != 1) {
                    if (t1 != 2) {
                        t2 = t1;
                        if (t1 != 3) {
                        } else {
                            (((struct o70_float *)((*(int *)(((0xC4 + a4) + 0x18)))))->v) = ((((struct o70_float *)((*(int *)(((0xC4 + a4) + 0x10)))))->v));
                            (((struct o70_float *)((*(int *)(((0xC4 + a4) + 0x1C)))))->v) = ((((struct o70_float *)((*(int *)(((0xC4 + a4) + 0x10)))))->v));
                            t2 = 0x70;
                        }
                        t1 = t2;
                    } else {
                        (((struct o70_float *)((*(int *)(((0xC4 + a4) + 0x18)))))->v) = ((((struct o70_float *)((*(int *)(((0xC4 + a4) + 0xC)))))->v));
                        (((struct o70_float *)((*(int *)(((0xC4 + a4) + 0x1C)))))->v) = ((((struct o70_float *)((*(int *)(((0xC4 + a4) + 0xC)))))->v));
                        t1 = 0x70;
                    }
                    t2 = t1;
                } else {
                    (((struct o70_float *)((*(int *)(((0xC4 + a4) + 0x18)))))->v) = ((((struct o70_float *)((*(int *)(((0xC4 + a4) + 0x8)))))->v));
                    (((struct o70_float *)((*(int *)(((0xC4 + a4) + 0x1C)))))->v) = ((((struct o70_float *)((*(int *)(((0xC4 + a4) + 0x8)))))->v));
                    t2 = 0x70;
                }
                t1 = t2;
            } else {
                (((struct o70_float *)((*(int *)(((0xC4 + a4) + 0x18)))))->v) = ((((struct o70_float *)((*(int *)(((0xC4 + a4) + 0x4)))))->v));
                (((struct o70_float *)((*(int *)(((0xC4 + a4) + 0x1C)))))->v) = ((((struct o70_float *)((*(int *)(((0xC4 + a4) + 0x4)))))->v));
                t1 = 0x70;
            }
            return t1;
        }
        if (t0 == 10) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x0;
            *(unsigned char *)((((((struct oCC_int *)(a4))->v)) + 0x0)) = 0x0;
            *(unsigned char *)((((((struct oD0_int *)(a4))->v)) + 0x0)) = 0x0;
            *(unsigned char *)((((((struct oD4_int *)(a4))->v)) + 0x0)) = 0x0;
            *(unsigned short *)((a4 + 0x1C)) = 0x0;
            u0 = *(float *)0xC113688;
            t1 = 0x0;
            for (;;) {
                t2 = ((0xC4 + a4) + t1);
                t1 = (t1 + 0x4);
                (((struct o90_float *)((*(int *)((t2 + 0x0)))))->v) = u0;
                if ((unsigned int)t1 >= (unsigned int)0x28) {
                    break;
                }
            }
            return 0x90;
        }
        if (t0 == 11) {
            t1 = 0x0;
            for (;;) {
                t2 = *(int *)((((0xC4 + a4) + t1) + 0x0));
                t1 = (t1 + 0x4);
                (((struct o6C_float *)(t2))->v) = (((((struct o6C_float *)(t2))->v)) + ((((struct o90_float *)(t2))->v)));
                if ((unsigned int)t1 >= (unsigned int)0x28) {
                    break;
                }
            }
            t1 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t1 + 0x1);
            if ((int)(short)(t1 + 0x1) >= (int)0x10) {
                return FUN_0c03f346(a4, 0x10, t2, a7);
            }
            return (short)(t1 + 0x1);
        }
        t1 = t0;
        if (t0 == 99) {
            (((struct o14_uchar *)(a4))->v) = 0xA;
            t1 = 0x14;
        }
        return t1;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct oAC_ushort *)(a4))->v) = 0x1F;
    (((struct oA9_uchar *)(a4))->v) = 0x21;
    FUN_0c1171f0(a4);
    FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x1, 0xC, (*(int *)0xC4B410C));
    FUN_0c03744a(((((struct oC8_int *)(a4))->v)), 0x6, 0xC, (*(int *)0xC4B410C));
    if (((((struct o8_int *)0xC474774)->v)) != 0) {
        t0 = (((struct o8_int *)0xC474774)->v);
        *(volatile int *)0xC4B410C;
        FUN_0c1174e4(((((struct oC8_int *)(a4))->v)), ((*(int *)((((t0 - 1) << 2) + 0xC4739AC))) - 1));
    }
    FUN_0c03744a(((((struct oCC_int *)(a4))->v)), 0x7, 0xC, (*(int *)0xC4B410C));
    if (((((struct oC_int *)0xC474774)->v)) != 0) {
        t0 = (((struct oC_int *)0xC474774)->v);
        *(volatile int *)0xC4B410C;
        FUN_0c1174e4(((((struct oCC_int *)(a4))->v)), ((*(int *)((((t0 - 1) << 2) + 0xC4739EC))) - 1));
    }
    FUN_0c03744a(((((struct oD0_int *)(a4))->v)), 0x8, 0xC, (*(int *)0xC4B410C));
    if (((((struct o10_int *)0xC474774)->v)) != 0) {
        t0 = (((struct o10_int *)0xC474774)->v);
        *(volatile int *)0xC4B410C;
        FUN_0c1174e4(((((struct oD0_int *)(a4))->v)), ((*(int *)((((t0 - 1) << 2) + 0xC4739CC))) - 1));
    }
    FUN_0c03744a(((((struct oD4_int *)(a4))->v)), 0x9, 0xC, (*(int *)0xC4B410C));
    if (((((struct o14_int *)0xC474774)->v)) != 0) {
        t0 = (((struct o14_int *)0xC474774)->v);
        *(volatile int *)0xC4B410C;
        FUN_0c1174e4(((((struct oD4_int *)(a4))->v)), ((*(int *)((((t0 - 1) << 2) + 0xC473A0C))) - 1));
    }
    FUN_0c03744a(((((struct oDC_int *)(a4))->v)), 0x2, 0xC, (*(int *)0xC4B410C));
    FUN_0c03744a(((((struct oE0_int *)(a4))->v)), 0x3, 0xC, (*(int *)0xC4B410C));
    t0 = (((struct o0_int *)0xC474774)->v);
    switch (t0) {
    case 0:
        (((struct o70_float *)((*(int *)(((0xC4 + a4) + 0x18)))))->v) = ((((struct o70_float *)((*(int *)(((0xC4 + a4) + 0x4)))))->v));
        (((struct o70_float *)((*(int *)(((0xC4 + a4) + 0x1C)))))->v) = ((((struct o70_float *)((*(int *)(((0xC4 + a4) + 0x4)))))->v));
        break;
    case 1:
        (((struct o70_float *)((*(int *)(((0xC4 + a4) + 0x18)))))->v) = ((((struct o70_float *)((*(int *)(((0xC4 + a4) + 0x8)))))->v));
        (((struct o70_float *)((*(int *)(((0xC4 + a4) + 0x1C)))))->v) = ((((struct o70_float *)((*(int *)(((0xC4 + a4) + 0x8)))))->v));
        break;
    case 2:
        (((struct o70_float *)((*(int *)(((0xC4 + a4) + 0x18)))))->v) = ((((struct o70_float *)((*(int *)(((0xC4 + a4) + 0xC)))))->v));
        (((struct o70_float *)((*(int *)(((0xC4 + a4) + 0x1C)))))->v) = ((((struct o70_float *)((*(int *)(((0xC4 + a4) + 0xC)))))->v));
        break;
    case 3:
        (((struct o70_float *)((*(int *)(((0xC4 + a4) + 0x18)))))->v) = ((((struct o70_float *)((*(int *)(((0xC4 + a4) + 0x10)))))->v));
        (((struct o70_float *)((*(int *)(((0xC4 + a4) + 0x1C)))))->v) = ((((struct o70_float *)((*(int *)(((0xC4 + a4) + 0x10)))))->v));
        break;
    }
    t0 = 0x0;
    for (;;) {
        t1 = *(int *)((((0xC4 + a4) + t0) + 0x0));
        t0 = (t0 + 0x4);
        (((struct o6C_float *)(t1))->v) = (((((struct o6C_float *)(t1))->v)) - 300.0f);
        (((struct o90_float *)(t1))->v) = 18.75f;
        if ((unsigned int)t0 >= (unsigned int)0x28) {
            break;
        }
    }
    *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x0;
    *(unsigned char *)((((((struct oCC_int *)(a4))->v)) + 0x0)) = 0x0;
    *(unsigned char *)((((((struct oD0_int *)(a4))->v)) + 0x0)) = 0x0;
    *(unsigned char *)((((((struct oD4_int *)(a4))->v)) + 0x0)) = 0x0;
    return 0xD4;
}

int FUN_0c113628(void)
{
    register int t0;

    t0 = FUN_0c03f444(0x8, 0x2, 0xA);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC113198;
        return t0;
    }
    return 0x0;
}

int FUN_0c113650(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                if ((int)(*(short *)((a4 + 0x1C))) <= (int)0x8) {
                    FUN_0c058a6e((0xB0 + a4), 0xC291550, 0xC291560, (*(short *)((a4 + 0x1C))), 0x8, 0x0);
                    t1 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t1 + 0x1);
                    t2 = (t1 + 0x1);
                } else {
                    (((struct o14_uchar *)(a4))->v) = 0x63;
                    t2 = 0x14;
                }
                return t2;
            }
            if (t0 == 99) {
                return FUN_0c03f346(a4, a5, a6, a7);
            }
            return t0;
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0x61F;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        FUN_0c1171f0(a4);
        FUN_0c03744a(((((struct oC8_int *)(a4))->v)), 0x6, 0xC, (*(int *)0xC4B410C));
        FUN_0c03744a(((((struct oCC_int *)(a4))->v)), 0x7, 0xC, (*(int *)0xC4B410C));
        FUN_0c03744a(((((struct oD0_int *)(a4))->v)), 0x8, 0xC, (*(int *)0xC4B410C));
        FUN_0c03744a(((((struct oD4_int *)(a4))->v)), 0x9, 0xC, (*(int *)0xC4B410C));
        FUN_0c03744a(((((struct oD8_int *)(a4))->v)), 0xB, 0xC, (*(int *)0xC4B410C));
        FUN_0c03744a(((((struct oDC_int *)(a4))->v)), 0xC, 0xC, (*(int *)0xC4B410C));
        *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x0;
        *(unsigned char *)((((((struct oCC_int *)(a4))->v)) + 0x0)) = 0x0;
        *(unsigned char *)((((((struct oD0_int *)(a4))->v)) + 0x0)) = 0x0;
        *(unsigned char *)((((((struct oD4_int *)(a4))->v)) + 0x0)) = 0x0;
        (((struct o70_float *)((*(int *)(((0xC4 + a4) + 0x14)))))->v) = ((((struct o70_float *)((*(int *)(((((*(signed char *)((a4 + 0x2))) << 2) + (0xC4 + a4)) + 0x4)))))->v));
        (((struct o70_float *)((*(int *)(((0xC4 + a4) + 0x18)))))->v) = ((((struct o70_float *)((*(int *)(((((*(signed char *)((a4 + 0x2))) << 2) + (0xC4 + a4)) + 0x4)))))->v));
        if ((*(short *)((a4 + 0x1E))) != 0) {
            *(unsigned char *)((((((struct oD8_int *)(a4))->v)) + 0x0)) = 0x0;
        } else {
            *(unsigned char *)((((((struct oDC_int *)(a4))->v)) + 0x0)) = 0x0;
        }
    }
    if ((int)(*(short *)((a4 + 0x1C))) <= (int)0x2) {
        FUN_0c058a6e((0xB0 + a4), 0xC291560, 0xC291550, (*(short *)((a4 + 0x1C))), 0x2, 0x0);
        t0 = ((*(short *)((a4 + 0x1C))) + 0x1);
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t0 = 0x0;
    }
    *(unsigned short *)((a4 + 0x1C)) = t0;
    return t0;
}
