/* game/unsorted: functions 0C16638C-0C1670B8, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o404_int { char p[0x404]; int v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o8_int { char p[0x8]; int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c0588bc(int, int, int, int, int, int);
int FUN_0c058a6e(int, int, int, int, int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c07e3ae(int, int);
int FUN_0c15f9b4(int, int, int, int);
int FUN_0c15fa0c(int, int, int, int, float);
int FUN_0c166772(int, int, int, int);
int math_atan2_angle16(float, float);
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c17c130(int, int, int);
int FUN_0c18778c(void);
extern int FUN_0c187798();
int FUN_0c1667be(int a4, int a5, int a6, int a7);
int FUN_0c166b08(int a4, int a5, int a6, int a7);
int FUN_0c166fac(int a4, int a5, int a6, int a7);

int FUN_0c1667be(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t24;
    register int t38;
    register int t43;
    register int t44;
    register int t49;
    register int t52;
    register int t55;
    register int t56;
    register int t46;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            t56 = (FUN_0c03f346(a4, a5, a6, a7));
        } else {
            if ((int)(*(short *)((a4 + 0x1C))) <= (int)0x14) {
                FUN_0c0588bc((a4 + 0x40), 0xC2A33FC, 0xC2A33F0, (*(short *)((a4 + 0x1C))), 0x14, 0x0);
                if ((int)(*(short *)((a4 + 0x1C))) <= (int)0x14) {
                    FUN_0c0588bc((((((struct oC4_int *)(a4))->v)) + 0x84), 0xC2A3414, 0xC2A3408, (*(short *)((a4 + 0x1C))), 0x14, 0x0);
                }
            }
            if ((int)(*(short *)((a4 + 0x1C))) <= (int)0x4) {
                FUN_0c058a6e((((((struct oC4_int *)(a4))->v)) + 0x14), 0xC2A3354, 0xC2A3344, (*(short *)((a4 + 0x1C))), 0x4, 0x0);
            }
            t24 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t24 + 0x1);
            t56 = (short)(t24 + 0x1);
            if ((int)(short)(t24 + 0x1) > (int)0x14) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t56 = 0x14;
            }
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(volatile int *)((a4 + 0xC4));
        t38 = ((int (*)(int, int, int))(FUN_0c187798))(a4, a5, a6);
        FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x9, 0x34, (*(int *)0xC4B40CC));
        *(volatile int *)((a4 + 0xC4));
        t43 = ((int (*)(void))(FUN_0c187798))();
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0x3F;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        t44 = ((int (*)(int))(FUN_0c187798))(0x1);
        *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = t46;
        *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x21F;
        *(volatile int *)((a4 + 0xC4));
        t49 = ((int (*)(int))(FUN_0c187798))(t46);
        *(volatile int *)((a4 + 0xC4));
        FUN_0c18778c();
        t52 = (((struct oC4_int *)(a4))->v);
        t55 = math_atan2_angle16(((((struct o70_float *)(t52))->v)), ((((struct o6C_float *)(t52))->v)));
        (((struct o80_uint *)(t52))->v) = ((t55 - 16384) & 0xFFFF);
        t56 = ((t55 - 16384) & 0xFFFF);
    }
    return t56;
}

int FUN_0c166b08(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    register int t2;
    register int t3;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 == 1) {
            t1 = (((struct oC4_int *)(a4))->v);
            (((struct o80_uint *)(t1))->v) = (((((struct o80_int *)(t1))->v)) + ((((struct o0_int *)0xC2A3438)->v)));
            t1 = (((struct oC8_int *)(a4))->v);
            (((struct o80_uint *)(t1))->v) = (((((struct o80_int *)(t1))->v)) - ((((struct o4_int *)0xC2A3438)->v)));
            t1 = (((struct oCC_int *)(a4))->v);
            (((struct o80_uint *)(t1))->v) = (((((struct o80_int *)(t1))->v)) + ((((struct o8_int *)0xC2A3438)->v)));
            if ((int)(*(short *)((a4 + 0x1C))) <= (int)0x1E) {
                FUN_0c0588bc((((((struct oC4_int *)(a4))->v)) + 0x84), 0xC2A3338, 0xC2A332C, (*(short *)((a4 + 0x1C))), 0x1E, 0x0);
                FUN_0c0588bc((((((struct oC8_int *)(a4))->v)) + 0x84), 0xC2A3338, 0xC2A332C, (*(short *)((a4 + 0x1C))), 0x1E, 0x0);
                FUN_0c0588bc((((((struct oCC_int *)(a4))->v)) + 0x84), 0xC2A3338, 0xC2A332C, (*(short *)((a4 + 0x1C))), 0x1E, 0x0);
            }
            if ((*(signed char *)((a4 + 0x131))) != 0) {
                *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
                t1 = *(signed char *)((a4 + 0x2));
                switch (t1) {
                case 0:
                    if ((int)(*(short *)((a4 + 0x1E))) < (int)0x1) {
                        FUN_0c07e3ae(a4, 0x7A);
                    }
                    FUN_0c15f9b4((*(signed char *)((a4 + 0x1))), (a4 + 0x28), (a4 + 0x34), 0x1);
                    break;
                case 1:
                    if ((int)(*(short *)((a4 + 0x1E))) < (int)0x1) {
                        FUN_0c07e3ae(a4, 0x7B);
                    }
                    FUN_0c15f9b4((*(signed char *)((a4 + 0x1))), (a4 + 0x28), (a4 + 0x34), 0x1);
                    break;
                case 2:
                    if ((int)(*(short *)((a4 + 0x1E))) < (int)0x1) {
                        FUN_0c07e3ae(a4, 0x7C);
                    }
                    FUN_0c15f9b4((*(signed char *)((a4 + 0x1))), (a4 + 0x28), (a4 + 0x34), 0x1);
                    break;
                case 3:
                    if ((int)(*(short *)((a4 + 0x1E))) < (int)0x1) {
                        FUN_0c07e3ae(a4, 0x7D);
                    }
                    FUN_0c15f9b4((*(signed char *)((a4 + 0x1))), (a4 + 0x28), (a4 + 0x34), 0x1);
                    break;
                case 4:
                    if ((int)(*(short *)((a4 + 0x1E))) < (int)0x1) {
                        FUN_0c07e3ae(a4, 0x7E);
                    }
                    FUN_0c15fa0c((*(signed char *)((a4 + 0x1))), (a4 + 0x28), (a4 + 0x34), 0x2, (*(float *)0xC16701C));
                    break;
                }
            } else {
                if (((((struct o404_int *)(a4))->v)) != 0) {
                    *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
                    t1 = *(signed char *)((a4 + 0x2));
                    switch (t1) {
                    case 0:
                        if ((int)(*(short *)((a4 + 0x1E))) < (int)0x1) {
                            FUN_0c07e3ae(a4, 0x7A);
                        }
                        FUN_0c15f9b4((*(signed char *)((a4 + 0x1))), (a4 + 0x28), (a4 + 0x34), 0x1);
                        break;
                    case 1:
                        if ((int)(*(short *)((a4 + 0x1E))) < (int)0x1) {
                            FUN_0c07e3ae(a4, 0x7B);
                        }
                        FUN_0c15f9b4((*(signed char *)((a4 + 0x1))), (a4 + 0x28), (a4 + 0x34), 0x1);
                        break;
                    case 2:
                        if ((int)(*(short *)((a4 + 0x1E))) < (int)0x1) {
                            FUN_0c07e3ae(a4, 0x7C);
                        }
                        FUN_0c15f9b4((*(signed char *)((a4 + 0x1))), (a4 + 0x28), (a4 + 0x34), 0x1);
                        break;
                    case 3:
                        if ((int)(*(short *)((a4 + 0x1E))) < (int)0x1) {
                            FUN_0c07e3ae(a4, 0x7D);
                        }
                        FUN_0c15f9b4((*(signed char *)((a4 + 0x1))), (a4 + 0x28), (a4 + 0x34), 0x1);
                        break;
                    case 4:
                        if ((int)(*(short *)((a4 + 0x1E))) < (int)0x1) {
                            FUN_0c07e3ae(a4, 0x7E);
                        }
                        FUN_0c15fa0c((*(signed char *)((a4 + 0x1))), (a4 + 0x28), (a4 + 0x34), 0x2, (*(float *)0xC16701C));
                        break;
                    }
                }
            }
            t1 = *(short *)((a4 + 0x1C));
            if (((int)t1 >= (int)0x14) && ((int)t1 < (int)0x1E)) {
                FUN_0c17c130((a4 + 0x4C), (a4 + 0x4C), (a4 + 0x58));
            }
            FUN_0c17c130((a4 + 0x28), (a4 + 0x28), (a4 + 0x4C));
            t1 = *(signed char *)((a4 + 0x2));
            if (t1 != 0) {
                if ((t1 != 1) && (t1 != 2)) {
                    t1 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t1 + 0x1);
                    t2 = (short)(t1 + 0x1);
                    if ((int)(short)(t1 + 0x1) > (int)0x5A) {
                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                        t2 = 0x14;
                    }
                    t1 = t2;
                } else {
                    if ((int)(*(short *)((a4 + 0x1E))) < (int)0x1) {
                        t2 = *(short *)((a4 + 0x1C));
                        *(unsigned short *)((a4 + 0x1C)) = (t2 + 0x1);
                        t3 = (short)(t2 + 0x1);
                        if ((int)(short)(t2 + 0x1) > (int)0x5A) {
                            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                            t3 = 0x14;
                        }
                        t2 = t3;
                    } else {
                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                        t2 = 0x14;
                    }
                    t1 = t2;
                }
                t2 = t1;
            } else {
                if ((int)(*(short *)((a4 + 0x1E))) < (int)0x1) {
                    t1 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t1 + 0x1);
                    t3 = (short)(t1 + 0x1);
                    if ((int)(short)(t1 + 0x1) > (int)0x5A) {
                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                        t3 = 0x14;
                    }
                    t1 = t3;
                } else {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    t1 = 0x14;
                }
                t2 = t1;
            }
            return t2;
        }
        if (t0 == 2) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        return t0;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct oAC_ushort *)(a4))->v) = 0xF;
    (((struct oA9_uchar *)(a4))->v) = 0x21;
    (((struct o4C_float *)(a4))->v) = ((math_sin_angle16((*(int *)((a4 + 0x38))))) * 10.0f);
    (((struct o54_float *)(a4))->v) = ((math_cos_angle16((*(int *)((a4 + 0x38))))) * 10.0f);
    (((struct o50_float *)(a4))->v) = 0.0f;
    (((struct o58_float *)(a4))->v) = ((math_sin_angle16((*(int *)((a4 + 0x38))))) * 4.0f);
    (((struct o5C_float *)(a4))->v) = 0.0f;
    (((struct o60_float *)(a4))->v) = ((math_cos_angle16((*(int *)((a4 + 0x38))))) * 4.0f);
    FUN_0c166772((*(signed char *)((a4 + 0x1))), (a4 + 0x28), (a4 + 0x34), (*(signed char *)((a4 + 0x2))));
    t0 = *(signed char *)((a4 + 0x2));
    t1 = *(int *)0xC4B40CC;
    if ((t0 != 0) && (t0 != 1)) {
        if ((t0 != 2) && (t0 != 3)) {
            if (t0 != 4) {
            } else {
                FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x5, 0x34, t1);
                FUN_0c03744a(((((struct oC8_int *)(a4))->v)), 0x4, 0x34, (*(int *)0xC4B40CC));
                FUN_0c03744a(((((struct oCC_int *)(a4))->v)), 0x6, 0x34, (*(int *)0xC4B40CC));
                *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
                *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x1F;
                *(volatile int *)((a4 + 0xC4));
                FUN_0c187798();
                *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x1;
                *(unsigned short *)((((((struct oC8_int *)(a4))->v)) + 0x6)) = 0x1F;
                *(volatile int *)((a4 + 0xC8));
                FUN_0c187798();
                *(unsigned char *)((((((struct oCC_int *)(a4))->v)) + 0x0)) = 0x1;
                *(unsigned short *)((((((struct oCC_int *)(a4))->v)) + 0x6)) = 0x1F;
                *(volatile int *)((a4 + 0xCC));
                FUN_0c187798();
                FUN_0c187798();
            }
        } else {
            FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x0, 0x34, t1);
            FUN_0c03744a(((((struct oC8_int *)(a4))->v)), 0x1, 0x34, (*(int *)0xC4B40CC));
            *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
            *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x1F;
            *(volatile int *)((a4 + 0xC4));
            FUN_0c187798();
            *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x1;
            *(unsigned short *)((((((struct oC8_int *)(a4))->v)) + 0x6)) = 0x1F;
            *(volatile int *)((a4 + 0xC8));
            FUN_0c187798();
            FUN_0c187798();
        }
    } else {
        FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x0, 0x34, t1);
        *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x1F;
        *(volatile int *)((a4 + 0xC4));
        FUN_0c187798();
        FUN_0c187798();
    }
    t0 = (((struct oC4_int *)(a4))->v);
    (((struct o80_uint *)(t0))->v) = (((((struct o80_int *)(t0))->v)) + ((((struct o0_int *)0xC2A3438)->v)));
    t0 = (((struct oC8_int *)(a4))->v);
    (((struct o80_uint *)(t0))->v) = (((((struct o80_int *)(t0))->v)) - ((((struct o4_int *)0xC2A3438)->v)));
    t0 = (((struct oCC_int *)(a4))->v);
    (((struct o80_uint *)(t0))->v) = (((((struct o80_int *)(t0))->v)) + ((((struct o8_int *)0xC2A3438)->v)));
    if ((int)(*(short *)((a4 + 0x1C))) <= (int)0x1E) {
        FUN_0c0588bc((((((struct oC4_int *)(a4))->v)) + 0x84), 0xC2A3338, 0xC2A332C, (*(short *)((a4 + 0x1C))), 0x1E, 0x0);
        FUN_0c0588bc((((((struct oC8_int *)(a4))->v)) + 0x84), 0xC2A3338, 0xC2A332C, (*(short *)((a4 + 0x1C))), 0x1E, 0x0);
        FUN_0c0588bc((((((struct oCC_int *)(a4))->v)) + 0x84), 0xC2A3338, 0xC2A332C, (*(short *)((a4 + 0x1C))), 0x1E, 0x0);
    }
    if ((*(signed char *)((a4 + 0x131))) != 0) {
        *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
        t0 = *(signed char *)((a4 + 0x2));
        switch (t0) {
        case 0:
            if ((int)(*(short *)((a4 + 0x1E))) < (int)0x1) {
                FUN_0c07e3ae(a4, 0x7A);
            }
            FUN_0c15f9b4((*(signed char *)((a4 + 0x1))), (a4 + 0x28), (a4 + 0x34), 0x1);
            break;
        case 1:
            if ((int)(*(short *)((a4 + 0x1E))) < (int)0x1) {
                FUN_0c07e3ae(a4, 0x7B);
            }
            FUN_0c15f9b4((*(signed char *)((a4 + 0x1))), (a4 + 0x28), (a4 + 0x34), 0x1);
            break;
        case 2:
            if ((int)(*(short *)((a4 + 0x1E))) < (int)0x1) {
                FUN_0c07e3ae(a4, 0x7C);
            }
            FUN_0c15f9b4((*(signed char *)((a4 + 0x1))), (a4 + 0x28), (a4 + 0x34), 0x1);
            break;
        case 3:
            if ((int)(*(short *)((a4 + 0x1E))) < (int)0x1) {
                FUN_0c07e3ae(a4, 0x7D);
            }
            FUN_0c15f9b4((*(signed char *)((a4 + 0x1))), (a4 + 0x28), (a4 + 0x34), 0x1);
            break;
        case 4:
            if ((int)(*(short *)((a4 + 0x1E))) < (int)0x1) {
                FUN_0c07e3ae(a4, 0x7E);
            }
            FUN_0c15fa0c((*(signed char *)((a4 + 0x1))), (a4 + 0x28), (a4 + 0x34), 0x2, (*(float *)0xC16701C));
            break;
        }
    } else {
        if (((((struct o404_int *)(a4))->v)) != 0) {
            *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
            t0 = *(signed char *)((a4 + 0x2));
            switch (t0) {
            case 0:
                if ((int)(*(short *)((a4 + 0x1E))) < (int)0x1) {
                    FUN_0c07e3ae(a4, 0x7A);
                }
                FUN_0c15f9b4((*(signed char *)((a4 + 0x1))), (a4 + 0x28), (a4 + 0x34), 0x1);
                break;
            case 1:
                if ((int)(*(short *)((a4 + 0x1E))) < (int)0x1) {
                    FUN_0c07e3ae(a4, 0x7B);
                }
                FUN_0c15f9b4((*(signed char *)((a4 + 0x1))), (a4 + 0x28), (a4 + 0x34), 0x1);
                break;
            case 2:
                if ((int)(*(short *)((a4 + 0x1E))) < (int)0x1) {
                    FUN_0c07e3ae(a4, 0x7C);
                }
                FUN_0c15f9b4((*(signed char *)((a4 + 0x1))), (a4 + 0x28), (a4 + 0x34), 0x1);
                break;
            case 3:
                if ((int)(*(short *)((a4 + 0x1E))) < (int)0x1) {
                    FUN_0c07e3ae(a4, 0x7D);
                }
                FUN_0c15f9b4((*(signed char *)((a4 + 0x1))), (a4 + 0x28), (a4 + 0x34), 0x1);
                break;
            case 4:
                if ((int)(*(short *)((a4 + 0x1E))) < (int)0x1) {
                    FUN_0c07e3ae(a4, 0x7E);
                }
                FUN_0c15fa0c((*(signed char *)((a4 + 0x1))), (a4 + 0x28), (a4 + 0x34), 0x2, (*(float *)0xC16701C));
                break;
            }
        }
    }
    t0 = *(short *)((a4 + 0x1C));
    if (((int)t0 >= (int)0x14) && ((int)t0 < (int)0x1E)) {
        FUN_0c17c130((a4 + 0x4C), (a4 + 0x4C), (a4 + 0x58));
    }
    FUN_0c17c130((a4 + 0x28), (a4 + 0x28), (a4 + 0x4C));
    t0 = *(signed char *)((a4 + 0x2));
    if (t0 != 0) {
        if ((t0 != 1) && (t0 != 2)) {
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
            t1 = (short)(t0 + 0x1);
            if ((int)(short)(t0 + 0x1) > (int)0x5A) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t1 = 0x14;
            }
            t0 = t1;
        } else {
            if ((int)(*(short *)((a4 + 0x1E))) < (int)0x1) {
                t1 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t1 + 0x1);
                t2 = (short)(t1 + 0x1);
                if ((int)(short)(t1 + 0x1) > (int)0x5A) {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    t2 = 0x14;
                }
                t1 = t2;
            } else {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t1 = 0x14;
            }
            t0 = t1;
        }
        t1 = t0;
    } else {
        if ((int)(*(short *)((a4 + 0x1E))) < (int)0x1) {
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
            t2 = (short)(t0 + 0x1);
            if ((int)(short)(t0 + 0x1) > (int)0x5A) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t2 = 0x14;
            }
            t0 = t2;
        } else {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t0 = 0x14;
        }
        t1 = t0;
    }
    return t1;
}

int FUN_0c166fac(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    int t2;
    register int t3;

    t0 = FUN_0c03f444(0x1, 0x0, 0x3);
    t1 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = a4;
        *(unsigned int *)((t0 + 0x4)) = 0xC166B08;
        t2 = 0x4;
        if ((int)a7 > (int)0x4) {
        } else {
            t3 = a7;
            if ((int)a7 < 0) {
                t3 = 0x0;
            }
            t2 = t3;
        }
        *(unsigned char *)((t0 + 0x2)) = t2;
        t2 = *(signed char *)((t0 + 0x2));
        switch (t2) {
        case 0:
            FUN_0c07e3ae(t0, 0x7A);
            break;
        case 1:
            FUN_0c07e3ae(t0, 0x7B);
            break;
        case 2:
            FUN_0c07e3ae(t0, 0x7C);
            break;
        case 3:
            FUN_0c07e3ae(t0, 0x7D);
            break;
        case 4:
            FUN_0c07e3ae(t0, 0x7E);
            break;
        }
        t2 = *(signed char *)((t0 + 0x2));
        if ((t2 != 0) && ((t2 != 1) && (t2 != 2))) {
            if (t2 != 3) {
                if (t2 != 4) {
                    t2 = (~((int)0x1 << (int)a4));
                } else {
                    FUN_0c064d24(t0, 0x3, 0x54, 0x2, 0x100, (~((int)0x1 << (int)a4)), 0x0, 0x0);
                }
                t3 = t2;
            } else {
                FUN_0c064d24(t0, 0x3, 0x53, 0x2, 0x100, (~((int)0x1 << (int)a4)), 0x0, 0x0);
            }
            t2 = t3;
        } else {
            FUN_0c064d24(t0, 0x3, 0x53, 0x0, 0x100, (~((int)0x1 << (int)a4)), 0x0, 0x0);
        }
        t0 = ((int (*)(int))(FUN_0c187798))(t2);
        t1 = (((int (*)(void))(FUN_0c187798))());
    }
    return t1;
}
