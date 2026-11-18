/* game/unsorted: functions 0C113800-0C11502E, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uchar { char p[0x10]; unsigned char v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o18_uchar { char p[0x18]; unsigned char v; };
struct o1C_int { char p[0x1C]; int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o20_int { char p[0x20]; int v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o2C_int { char p[0x2C]; int v; };
struct o2C_uint { char p[0x2C]; unsigned int v; };
struct o34_uint { char p[0x34]; unsigned int v; };
struct o38_int { char p[0x38]; int v; };
struct o40_int { char p[0x40]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o60_int { char p[0x60]; int v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uchar { char p[0x8]; unsigned char v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o90_float { char p[0x90]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oD0_int { char p[0xD0]; int v; };
struct oD4_int { char p[0xD4]; int v; };
struct oD8_int { char p[0xD8]; int v; };
struct oE4_int { char p[0xE4]; int v; };
int FUN_0c036606(void);
int FUN_0c03744a(int, int, int, int);
extern int FUN_0c037bf6();
int FUN_0c038566(void);
int res_cockpit_faces_release_all(void);
int FUN_0c03ea04(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c058a6e(int, int, int, int, int, int);
int FUN_0c05aab6(int, int);
int FUN_0c0676ce(int);
int FUN_0c06780e(int);
int FUN_0c06785c(void);
int FUN_0c104c7a(int);
int FUN_0c104d70(void);
int FUN_0c104db8(void);
int FUN_0c105014(int, int);
int FUN_0c1053d8(int, int);
int FUN_0c106510(void);
int FUN_0c11296c(int, int);
int FUN_0c11309e(void);
int FUN_0c113142(void);
int FUN_0c1171f0(int);
int FUN_0c1173a0(void);
int FUN_0c118412(int);
int FUN_0c11e1e0(int, int, int, int);
int FUN_0c11e964(int);
extern int FUN_0c187798();
int FUN_0c113800(int a4, int a5);
int FUN_0c11383a(int a4, int a5, int a6, int a7);
int FUN_0c113a74(void);
int FUN_0c113a9c(int a4, int a5, int a6, int a7);
int FUN_0c113ba4(int a4);
int FUN_0c113bd8(int a4, int a5, int a6, int a7);
int FUN_0c113e72(void);
int FUN_0c113e9a(int a4, int a5, int a6, int a7);
int FUN_0c113fe4(int a4);
int FUN_0c114044(int a4);
int FUN_0c1141f4(int a4, int a5, int a6);
int FUN_0c11468c(int a4);
int FUN_0c114be2(void);
int FUN_0c114c34(void);
int FUN_0c114ff0(void);

int FUN_0c113800(int a4, int a5)
{
    int stk[2];
    register int t0;

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 0)) = a5;
    t0 = FUN_0c03f444(0x8, 0x0, 0x7);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC113650;
        *(unsigned char *)((t0 + 0x2)) = (*(signed char *)(((int)stk + 4)));
        *(unsigned short *)((t0 + 0x1E)) = (*(int *)(((int)stk + 0)));
        return t0;
    }
    return 0x0;
}


int FUN_0c113a74(void)
{
    register int t0;

    t0 = FUN_0c03f444(0x8, 0x1, 0x4);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC11383A;
        return t0;
    }
    return 0x0;
}


int FUN_0c113ba4(int a4)
{
    register int t0;

    t0 = FUN_0c03f444(0x8, 0x0, 0x1);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC113A9C;
        *(unsigned char *)((t0 + 0x2)) = a4;
        return t0;
    }
    return 0x0;
}

int FUN_0c113bd8(int a4, int a5, int a6, int a7)
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
            if ((int)(short)(t1 + 0x1) >= (int)0x10) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                *(unsigned short *)((a4 + 0x1C)) = 0x0;
                t2 = 0x0;
            }
            return t2;
        }
        if (t0 == 2) {
            t1 = *(int *)0xC474778;
            if (t1 != 0) {
                if (t1 != 1) {
                    if (t1 != 2) {
                        t2 = t1;
                        if (t1 != 3) {
                        } else {
                            (((struct o70_float *)((*(int *)(((0xC4 + a4) + 0x14)))))->v) = ((((struct o70_float *)((*(int *)(((0xC4 + a4) + 0x10)))))->v));
                            t2 = 0x70;
                        }
                        t1 = t2;
                    } else {
                        (((struct o70_float *)((*(int *)(((0xC4 + a4) + 0x14)))))->v) = ((((struct o70_float *)((*(int *)(((0xC4 + a4) + 0xC)))))->v));
                        t1 = 0x70;
                    }
                    t2 = t1;
                } else {
                    (((struct o70_float *)((*(int *)(((0xC4 + a4) + 0x14)))))->v) = ((((struct o70_float *)((*(int *)(((0xC4 + a4) + 0x8)))))->v));
                    t2 = 0x70;
                }
                t1 = t2;
            } else {
                (((struct o70_float *)((*(int *)(((0xC4 + a4) + 0x14)))))->v) = ((((struct o70_float *)((*(int *)(((0xC4 + a4) + 0x4)))))->v));
                t1 = 0x70;
            }
            return t1;
        }
        if (t0 == 10) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            *(unsigned short *)((a4 + 0x1C)) = 0x0;
            u0 = *(float *)0xC113ECC;
            t1 = 0x0;
            for (;;) {
                t2 = ((0xC4 + a4) + t1);
                t1 = (t1 + 0x4);
                (((struct o90_float *)((*(int *)((t2 + 0x0)))))->v) = u0;
                if ((unsigned int)t1 >= (unsigned int)0x28) {
                    break;
                }
            }
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
                return FUN_0c03f346(a4, t2, a6, a7);
            }
            return (short)(t1 + 0x1);
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
                return FUN_0c03f346(a4, t2, a6, a7);
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
    FUN_0c03744a(((((struct oCC_int *)(a4))->v)), 0x7, 0xC, (*(int *)0xC4B410C));
    FUN_0c03744a(((((struct oD0_int *)(a4))->v)), 0x8, 0xC, (*(int *)0xC4B410C));
    FUN_0c03744a(((((struct oD4_int *)(a4))->v)), 0x9, 0xC, (*(int *)0xC4B410C));
    FUN_0c03744a(((((struct oD8_int *)(a4))->v)), 0xD, 0xC, (*(int *)0xC4B410C));
    FUN_0c03744a(((((struct oE4_int *)(a4))->v)), 0xA, 0xC, (*(int *)0xC4B410C));
    *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x0;
    *(unsigned char *)((((((struct oCC_int *)(a4))->v)) + 0x0)) = 0x0;
    *(unsigned char *)((((((struct oD0_int *)(a4))->v)) + 0x0)) = 0x0;
    *(unsigned char *)((((((struct oD4_int *)(a4))->v)) + 0x0)) = 0x0;
    t0 = *(int *)0xC474778;
    switch (t0) {
    case 0:
        (((struct o70_float *)((*(int *)(((0xC4 + a4) + 0x14)))))->v) = ((((struct o70_float *)((*(int *)(((0xC4 + a4) + 0x4)))))->v));
        break;
    case 1:
        (((struct o70_float *)((*(int *)(((0xC4 + a4) + 0x14)))))->v) = ((((struct o70_float *)((*(int *)(((0xC4 + a4) + 0x8)))))->v));
        break;
    case 2:
        (((struct o70_float *)((*(int *)(((0xC4 + a4) + 0x14)))))->v) = ((((struct o70_float *)((*(int *)(((0xC4 + a4) + 0xC)))))->v));
        break;
    case 3:
        (((struct o70_float *)((*(int *)(((0xC4 + a4) + 0x14)))))->v) = ((((struct o70_float *)((*(int *)(((0xC4 + a4) + 0x10)))))->v));
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
    t0 = 0x0;
    for (;;) {
        t1 = *(int *)((((0xC4 + a4) + t0) + 0x0));
        t0 = (t0 + 0x4);
        (((struct o6C_float *)(t1))->v) = (((((struct o6C_float *)(t1))->v)) + ((((struct o90_float *)(t1))->v)));
        if ((unsigned int)t0 >= (unsigned int)0x28) {
            break;
        }
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
    t1 = (short)(t0 + 0x1);
    if ((int)(short)(t0 + 0x1) >= (int)0x10) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0x0;
        t1 = 0x0;
    }
    return t1;
}

int FUN_0c113e72(void)
{
    register int t0;

    t0 = FUN_0c03f444(0x8, 0x1, 0xA);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC113BD8;
        return t0;
    }
    return 0x0;
}

int FUN_0c113e9a(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 == 99) {
                    return FUN_0c03f346(a4, a5, a6, a7);
                }
                return t0;
            }
            if ((int)(*(short *)((a4 + 0x1C))) <= (int)0x8) {
                FUN_0c058a6e((0xB0 + a4), 0xC2916E0, 0xC2916F0, (*(short *)((a4 + 0x1C))), 0x8, 0x0);
                t0 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
                t1 = (t0 + 0x1);
            } else {
                (((struct o14_uchar *)(a4))->v) = 0x63;
                t1 = 0x14;
            }
            return t1;
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0x61F;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        FUN_0c1171f0(a4);
        FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0xE, 0xC, (*(int *)0xC4B410C));
        FUN_0c03744a(((((struct oC8_int *)(a4))->v)), 0x6, 0xC, (*(int *)0xC4B410C));
        FUN_0c03744a(((((struct oCC_int *)(a4))->v)), 0x7, 0xC, (*(int *)0xC4B410C));
        FUN_0c03744a(((((struct oD0_int *)(a4))->v)), 0x8, 0xC, (*(int *)0xC4B410C));
        FUN_0c03744a(((((struct oD4_int *)(a4))->v)), 0x9, 0xC, (*(int *)0xC4B410C));
        *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x0;
        *(unsigned char *)((((((struct oCC_int *)(a4))->v)) + 0x0)) = 0x0;
        *(unsigned char *)((((((struct oD0_int *)(a4))->v)) + 0x0)) = 0x0;
        *(unsigned char *)((((((struct oD4_int *)(a4))->v)) + 0x0)) = 0x0;
        (((struct o70_float *)(((((struct oC4_int *)(a4))->v))))->v) = ((((struct o70_float *)((*(int *)(((((*(signed char *)((a4 + 0x2))) << 2) + (0xC4 + a4)) + 0x4)))))->v));
    }
    if ((int)(*(short *)((a4 + 0x1C))) <= (int)0x2) {
        FUN_0c058a6e((0xB0 + a4), 0xC2916F0, 0xC2916E0, (*(short *)((a4 + 0x1C))), 0x2, 0x0);
        t0 = ((*(short *)((a4 + 0x1C))) + 0x1);
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t0 = 0x0;
    }
    *(unsigned short *)((a4 + 0x1C)) = t0;
    return t0;
}

int FUN_0c113fe4(int a4)
{
    register int t0;

    t0 = FUN_0c03f444(0x8, 0x0, 0x5);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC113E9A;
        *(unsigned char *)((t0 + 0x2)) = a4;
        return t0;
    }
    return 0x0;
}

int FUN_0c114044(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 == 1) {
            t1 = (((struct o20_short *)(a4))->v);
            (((struct o20_ushort *)(a4))->v) = (t1 + 0x1);
            t2 = 0x20;
            if ((int)(short)(t1 + 0x1) <= (int)0xA) {
            } else {
                (((struct o16_uchar *)(a4))->v) = 0x0;
                t2 = 0x16;
            }
            t1 = t2;
        } else {
            t2 = t0;
            if (t0 == 2) {
                t0 = (((struct o20_short *)(a4))->v);
                (((struct o20_ushort *)(a4))->v) = (t0 + 0x1);
                t2 = 0x20;
                if ((int)(short)(t0 + 0x1) > (int)0x10) {
                    (((struct o15_uchar *)(a4))->v) = 0x0;
                    (((struct o16_uchar *)(a4))->v) = 0x0;
                    t2 = 0x16;
                }
            }
            t1 = t2;
        }
        t0 = t1;
    } else {
        t1 = FUN_0c1053d8(((((struct o0_int *)0xC474774)->v)), 0x3);
        (((struct o0_uint *)0xC474774)->v) = t1;
        *(unsigned int *)((((t1 << 2) + 0xC47477C) + 0x0)) = (FUN_0c105014((*(int *)((((t1 << 2) + 0xC47477C) + 0x0))), (*(int *)((((*(int *)(((t1 << 2) + 0xC2918B8))) << 2) + 0xC473A2C)))));
        t1 = FUN_0c104c7a(0x800);
        if (t1 != 0) {
            FUN_0c113800(((((struct o0_int *)0xC474774)->v)), 0x0);
        }
        t1 = FUN_0c104c7a(0x400);
        if (t1 != 0) {
            FUN_0c113800(((((struct o0_int *)0xC474774)->v)), 0x1);
        }
        if (((((struct o8_int *)0xC474774)->v)) == 0) {
            (((struct o0_uchar *)0xC53CF74)->v) = 0x0;
        } else {
            (((struct o0_uchar *)0xC53CF74)->v) = (*(int *)(((((((((struct o8_int *)0xC474774)->v)) - 1) << 2) + 0xC4739AC) + 0x0)));
        }
        if (((((struct oC_int *)0xC474774)->v)) == 0) {
            (((struct o10_uchar *)0xC53CF74)->v) = 0x0;
        } else {
            (((struct o10_uchar *)0xC53CF74)->v) = ((((struct o40_int *)((((((((struct oC_int *)0xC474774)->v)) - 1) << 2) + 0xC4739AC)))->v));
        }
        if (((((struct o10_int *)0xC474774)->v)) == 0) {
            (((struct o8_uchar *)0xC53CF74)->v) = 0x0;
        } else {
            (((struct o8_uchar *)0xC53CF74)->v) = (*(int *)(((((((((struct o10_int *)0xC474774)->v)) - 1) << 2) + 0xC4739AC) + 0x20)));
        }
        if (((((struct o14_int *)0xC474774)->v)) == 0) {
            (((struct o18_uchar *)0xC53CF74)->v) = 0x0;
        } else {
            (((struct o18_uchar *)0xC53CF74)->v) = ((((struct o60_int *)((((((((struct o14_int *)0xC474774)->v)) - 1) << 2) + 0xC4739AC)))->v));
        }
        t1 = FUN_0c104d70();
        if (t1 != 0) {
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
            (((struct o20_ushort *)(a4))->v) = 0x0;
        }
        t1 = FUN_0c104db8();
        t2 = t1;
        if (t1 != 0) {
            (((struct o16_uchar *)(a4))->v) = 0x2;
            (((struct o20_ushort *)(a4))->v) = 0x0;
            (((struct o14_uchar *)((*(int *)0xC474C14)))->v) = 0x63;
            *(unsigned int *)0xC474C14 = 0x0;
            t1 = FUN_0c118412(0x3);
            *(unsigned int *)0xC474B8C = t1;
            t2 = t1;
        }
        t0 = t2;
    }
    return t0;
}


int FUN_0c11468c(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = FUN_0c1053d8((*(int *)0xC474778), 0x3);
    *(unsigned int *)0xC474778 = t0;
    *(unsigned char *)0xC53CE26 = t0;
    FUN_0c0676ce((*(signed char *)0xC539709));
    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        t1 = t0;
        if (t0 != 1) {
        } else {
            t0 = (((struct o20_short *)(a4))->v);
            (((struct o20_ushort *)(a4))->v) = (t0 + 0x1);
            t2 = 0x20;
            if ((int)(short)(t0 + 0x1) > (int)0xA) {
                (((struct o16_uchar *)(a4))->v) = 0x0;
                t2 = 0x16;
            }
            t1 = t2;
        }
        t0 = t1;
    } else {
        t1 = FUN_0c104db8();
        t2 = t1;
        if (t1 != 0) {
            (((struct o15_uchar *)(a4))->v) = 0x0;
            (((struct o16_uchar *)(a4))->v) = 0x0;
            (((struct o14_uchar *)((*(int *)0xC474C1C)))->v) = 0x63;
            *(unsigned int *)0xC474C1C = 0x0;
            t1 = FUN_0c118412(0x3);
            *(unsigned int *)0xC474B8C = t1;
            t2 = t1;
        }
        t0 = t2;
    }
    return t0;
}

int FUN_0c114be2(void)
{
    register int t0;

    t0 = FUN_0c03f444(0x5, 0x0, 0x0);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC114748;
        return t0;
    }
    return 0x0;
}

int FUN_0c114c34(void)
{
    int stk[15];
    register int t0;
    register int t1;
    register int t7;
    register int t27;
    register int t34;
    register int t54;
    register int t55;
    register int t56;
    register int t57;
    register int t58;
    register int t59;
    register int t60;
    register int t61;
    register int t62;
    register int t63;
    register int t76;
    register int t92;
    register int t93;
    register int t94;
    register int t112;
    register int t113;
    register int t131;
    register int t132;
    register int t150;
    register int t151;
    register int t166;
    register int t18;
    register int t41;
    register int t42;
    int t43;
    register int t45;
    register int t111;
    register int t130;
    register int t149;

    t0 = *(signed char *)0xC541F45;
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 == 1) {
            t1 = *(signed char *)0xC541F46;
            if ((unsigned char)t1 != 0) {
                t18 = (unsigned char)t1;
                if ((unsigned char)t1 != 1) {
                } else {
                    t7 = *(signed char *)((0x14 + ((((struct o0_int *)0xC474C0C)->v))));
                    t18 = t7;
                    if (t7 == 99) {
                        (((struct o0_uchar *)0xC541F45)->v) = ((*(signed char *)0xC541F45) + 0x1);
                        (((struct o1_uchar *)0xC541F45)->v) = 0x0;
                        t18 = 0x0;
                    }
                }
            } else {
                (((struct o1_uchar *)0xC541F45)->v) = ((*(signed char *)0xC541F46) + 0x1);
                t18 = FUN_0c114be2();
                (((struct o0_uint *)0xC474C0C)->v) = t18;
            }
            return t18;
        }
        if ((unsigned char)t0 == 2) {
            t27 = *(signed char *)0xC541F46;
            if ((unsigned char)t27 != 0) {
                if ((unsigned char)t27 != 1) {
                    if ((unsigned char)t27 != 2) {
                        return (unsigned char)t27;
                    }
                    FUN_0c114ff0();
                    return FUN_0c106510();
                }
                t34 = *(signed char *)((0x14 + ((((struct o8_int *)0xC474C0C)->v))));
                if (t34 == 99) {
                    (((struct o1_uchar *)0xC541F45)->v) = ((*(signed char *)0xC541F46) + 0x1);
                    (((struct o8_uint *)0xC474C0C)->v) = 0x0;
                }
                return t34;
            }
            (((struct o1_uchar *)0xC541F45)->v) = ((*(signed char *)0xC541F46) + 0x1);
            if ((((((struct o0_int *)0xC47477C)->v)) == 0) && ((t41 = (((struct o4_int *)0xC47477C)->v), t41 == 0) && ((t42 = (((struct o8_int *)0xC47477C)->v), t42 == 0) && (t43 = (((struct oC_int *)0xC47477C)->v), t43 == 0)))) {
                (((struct o1_uchar *)0xC541F45)->v) = 0x2;
                t45 = 0x2;
            } else {
                t45 = FUN_0c11309e();
                (((struct o8_uint *)0xC474C0C)->v) = t45;
            }
            return t45;
        }
        return (unsigned char)t0;
    }
    (((struct o0_uchar *)0xC541F45)->v) = ((*(signed char *)0xC541F45) + 0x1);
    (((struct o1_uchar *)0xC541F45)->v) = 0x0;
    t54 = FUN_0c11e964(0x200100);
    (((struct o0_uint *)0xC473A2C)->v) = 0x0;
    (((struct o4_uint *)0xC473A2C)->v) = 0x0;
    (((struct o8_uint *)0xC473A2C)->v) = 0x0;
    (((struct oC_uint *)0xC473A2C)->v) = 0x0;
    t55 = 0xC4739AC;
    for (;;) {
        t56 = t55;
        t57 = 0x0;
        for (;;) {
            t57 = (t57 + 0x1);
            *(unsigned int *)((t56 + 0x0)) = 0x0;
            t56 = (t56 + 0x4);
            if ((int)t57 >= (int)0x8) {
                break;
            }
        }
        t55 = (t55 + 0x20);
        if ((unsigned int)t55 >= (unsigned int)0xC473A2C) {
            break;
        }
    }
    *(unsigned int *)(((int)stk + 0)) = 0x0;
    *(unsigned int *)(((int)stk + 24)) = 0xC473A2C;
    *(unsigned int *)(((int)stk + 16)) = 0xC27B588;
    *(unsigned int *)(((int)stk + 20)) = 0xC4739AC;
    t58 = t54;
    t59 = t56;
    t60 = t55;
    t61 = t57;
    t62 = 0xC473A2C;
    t63 = 0x80;
    for (;;) {
        if ((int)(*(int *)(((int)stk + 0))) >= (int)((((struct o0_int *)0xC474714)->v))) {
            break;
        }
        t60 = 0x0;
        *(unsigned int *)(((int)stk + 8)) = (((*(int *)(((int)stk + 0))) << 2) + 0xC474410);
        for (;;) {
            t62 = (*(int *)(((int)stk + 16)));
            t59 = 0x0;
            t61 = (*(int *)(((int)stk + 20)));
            t63 = (*(int *)(((int)stk + 24)));
            for (;;) {
                t58 = t59;
                t58 = (t58 << 2);
                t58 = (t58 << 1);
                if (((*(int *)(((*(int *)(((int)stk + 8))) + 0x0))) + 0x1) == (unsigned char)(*(signed char *)((((0xC27B588 + t58) + t60) + 0x0)))) {
                    t58 = t59;
                    t58 = (t58 << 2);
                    t58 = (t58 + 0xC473A2C);
                    *(unsigned int *)(((int)stk + 12)) = t58;
                    t58 = (*(int *)((t58 + 0x0)));
                    *(unsigned int *)(((int)stk + 4)) = t61;
                    t58 = (t58 << 2);
                    t76 = (t58 + t61);
                    t58 = t60;
                    *(unsigned int *)((t76 + 0x0)) = (unsigned char)(*(signed char *)((t62 + t58)));
                    t58 = (*(int *)(((int)stk + 4)));
                    if ((*(int *)((((*(int *)(((*(int *)(((int)stk + 12))) + 0x0))) << 2) + t58))) != 0) {
                        *(unsigned int *)((t63 + 0x0)) = ((*(int *)((t63 + 0x0))) + 0x1);
                    }
                }
                t59 = (t59 + 0x1);
                t63 = (t63 + 0x4);
                t62 = (t62 + 0x8);
                t61 = (t61 + 0x20);
                if ((int)t59 >= (int)0x4) {
                    break;
                }
            }
            t60 = (t60 + 0x1);
            if ((int)t60 >= (int)0x8) {
                break;
            }
        }
        *(unsigned int *)(((int)stk + 0)) = ((*(int *)(((int)stk + 0))) + 0x1);
    }
    t92 = FUN_0c11e964(0x8100);
    (((struct o0_uint *)0xC47477C)->v) = 0x0;
    t93 = (((struct o0_int *)0xC474714)->v);
    if (t93 != 0) {
        t94 = 0x0;
        for (;;) {
            if ((int)t94 >= (int)((((struct o0_int *)0xC473A2C)->v))) {
                break;
            }
            t92 = t94;
            t93 = (*(int *)0xC474410);
            t92 = (t92 << 2);
            t93 = (t93 + 0x1);
            if ((*(int *)((0xC4739AC + t92))) == t93) {
                t93 = t94;
                t93 = (t93 + 0x1);
                (((struct o0_uint *)0xC47477C)->v) = t93;
            }
            t94 = (t94 + 0x1);
        }
    }
    FUN_0c11e964(0x10100);
    (((struct o4_uint *)0xC47477C)->v) = 0x0;
    t112 = (((struct o0_int *)0xC474714)->v);
    if (t112 != 0) {
        t113 = 0x0;
        for (;;) {
            if ((int)t113 >= (int)((((struct o8_int *)0xC473A2C)->v))) {
                break;
            }
            t112 = (*(int *)0xC474410);
            t112 = (t112 + 0x1);
            if (((((struct o40_int *)(((t113 << 2) + 0xC4739AC)))->v)) == t112) {
                t111 = t113;
                t111 = (t111 + 0x1);
                (((struct o4_uint *)0xC47477C)->v) = t111;
            }
            t113 = (t113 + 0x1);
        }
    }
    FUN_0c11e964(0x20100);
    (((struct o8_uint *)0xC47477C)->v) = 0x0;
    t131 = (((struct o0_int *)0xC474714)->v);
    if (t131 != 0) {
        t132 = 0x0;
        for (;;) {
            if ((int)t132 >= (int)((((struct o4_int *)0xC473A2C)->v))) {
                break;
            }
            t131 = (*(int *)0xC474410);
            t131 = (t131 + 0x1);
            if ((*(int *)((((t132 << 2) + 0xC4739AC) + 0x20))) == t131) {
                t130 = t132;
                t130 = (t130 + 0x1);
                (((struct o8_uint *)0xC47477C)->v) = t130;
            }
            t132 = (t132 + 0x1);
        }
    }
    FUN_0c11e964(0x40100);
    (((struct oC_uint *)0xC47477C)->v) = 0x0;
    t150 = (((struct o0_int *)0xC474714)->v);
    if (t150 != 0) {
        t151 = 0x0;
        for (;;) {
            if ((int)t151 >= (int)((((struct oC_int *)0xC473A2C)->v))) {
                break;
            }
            t150 = (*(int *)0xC474410);
            t150 = (t150 + 0x1);
            if (((((struct o60_int *)(((t151 << 2) + 0xC4739AC)))->v)) == t150) {
                t149 = t151;
                t149 = (t149 + 0x1);
                (((struct oC_uint *)0xC47477C)->v) = t149;
            }
            t151 = (t151 + 0x1);
        }
    }
    *(unsigned int *)(((int)stk + 4)) = 0xC473D04;
    t166 = 0xC473D04;
    for (;;) {
        *(unsigned int *)((t166 + 0x0)) = (((((*(int *)((t166 + 0x0))) & 0xFFFFFFBF) & 0xFFFFFF7F) & 0xFFFFFEFF) & 0xFFFFFDFF);
        t166 = (t166 + 0x4);
        if ((unsigned int)t166 >= (unsigned int)0xC474004) {
            break;
        }
    }
    *(int *)((int)stk + 56) = 0xFFFFFF7F;
    *(unsigned char *)0xC5397B0 = 0x1;
    *(unsigned char *)0xC535BAC = 0x0;
    (((struct o14_uchar *)(((((struct o1C_int *)0xC474B8C)->v))))->v) = 0x1E;
    (((struct o14_uchar *)(((((struct o20_int *)0xC474B8C)->v))))->v) = 0x1E;
    (((struct o2C_uint *)0xC474B8C)->v) = (FUN_0c113142());
    (((struct o34_uint *)0xC474714)->v) = 0x0;
    (((struct o0_uint *)0xC474B8C)->v) = (FUN_0c118412(0x3));
    (((struct o4_uint *)0xC474714)->v) = 0x5;
    (((struct o4_uint *)0xC474B8C)->v) = (FUN_0c1173a0());
    (((struct o14_uchar *)(((((struct o38_int *)0xC474B8C)->v))))->v) = 0x32;
    return 0x14;
}

int FUN_0c114ff0(void)
{
    *(unsigned char *)0xC5397B0 = 0x0;
    *(unsigned char *)0xC535BAC = 0x1;
    (((struct o14_uchar *)(((((struct o1C_int *)0xC474B8C)->v))))->v) = 0x14;
    (((struct o14_uchar *)(((((struct o20_int *)0xC474B8C)->v))))->v) = 0x14;
    (((struct o14_uchar *)(((((struct o2C_int *)0xC474B8C)->v))))->v) = 0x63;
    (((struct o2C_uint *)0xC474B8C)->v) = 0x0;
    (((struct o14_uchar *)(((((struct o0_int *)0xC474B8C)->v))))->v) = 0x63;
    (((struct o0_uint *)0xC474B8C)->v) = 0x0;
    (((struct o14_uchar *)(((((struct o4_int *)0xC474B8C)->v))))->v) = 0x63;
    (((struct o4_uint *)0xC474B8C)->v) = 0x0;
    (((struct o14_uchar *)(((((struct o38_int *)0xC474B8C)->v))))->v) = 0x28;
    return 0x14;
}
