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
struct o1C_short { char p[0x1C]; short v; };
struct o1C_ushort { char p[0x1C]; unsigned short v; };


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
    int t0;
    int t1;

    t0 = *(signed char *)(a4 + 0x14);
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 == 99) {
                    return FUN_0c03f346(a4, a5, a6, a7);
                }
                return t0;
            }
            if ((int)((((struct o1C_short *)(a4))->v)) <= (int)0x8) {
                FUN_0c058a6e((0xB0 + a4), 0xC2916E0, 0xC2916F0, ((((struct o1C_short *)(a4))->v)), 0x8, 0x0);
                t0 = (((struct o1C_short *)(a4))->v);
                (((struct o1C_ushort *)(a4))->v) = (t0 + 0x1);
                t1 = (t0 + 0x1);
            } else {
                (((struct o14_uchar *)(a4))->v) = 0x63;
                t1 = 0x14;
            }
            return t1;
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x14)) + 0x1);
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
        (((struct o70_float *)(((((struct oC4_int *)(a4))->v))))->v) = ((((struct o70_float *)((*(int *)(((((*(signed char *)(a4 + 0x2)) << 2) + (0xC4 + a4)) + 0x4)))))->v));
    }
    if ((int)((((struct o1C_short *)(a4))->v)) <= (int)0x2) {
        FUN_0c058a6e((0xB0 + a4), 0xC2916F0, 0xC2916E0, ((((struct o1C_short *)(a4))->v)), 0x2, 0x0);
        t0 = (((((struct o1C_short *)(a4))->v)) + 0x1);
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x14)) + 0x1);
        t0 = 0x0;
    }
    (((struct o1C_ushort *)(a4))->v) = t0;
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
    int t1;
    int t0;
    int t2;

    t0 = *(signed char *)(a4 + 0x16);
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
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x16)) + 0x1);
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
