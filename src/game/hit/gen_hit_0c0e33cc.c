/* game/hit: functions 0C0E33CC-0C0E3CCC, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o136_uchar { char p[0x136]; unsigned char v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o18_uchar { char p[0x18]; unsigned char v; };
struct o19_uchar { char p[0x19]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c03f346(int, int, int);
int FUN_0c042fe0(void);
int math_vec3_mul_xyz(int, float, float, float);
int thunk_FUN_0c05abb2(int, int);
int FUN_0c064d5a(int, int);
int FUN_0c07e420(int, int);
int FUN_0c0d0378(int, int);
int FUN_0c0d039e(int, int);
int FUN_0c0d04c4(int, int);
int FUN_0c0e34a8(int);
int FUN_0c0e5874(int);
int FUN_0c0e5aa8(int);
int FUN_0c0e6aa2(int);
int FUN_0c0e6dd8(int, int);
float math_cos_angle16(int);
int FUN_0c179ac0(void);
float math_sin_angle16(int);
int FUN_0c17c130(int, int, int);
int FUN_0c0e2390(int, int, int);
int FUN_0c187798(int, int, int);
int FUN_0c0e33cc(int a4, int a5, int a6);
int FUN_0c0e340c(int a4);
void FUN_0c0e343a(void);
int FUN_0c0e3440(int a4);
int FUN_0c0e34e0(int a4);
int FUN_0c0e360c(int a4);
int FUN_0c0e369a(int a4);
int FUN_0c0e36a8(int a4);
int FUN_0c0e36b6(int a4);
int FUN_0c0e37e6(int a4);
int FUN_0c0e3940(int a4);
int FUN_0c0e3992(int a4);
int FUN_0c0e39de(int a4);
int FUN_0c0e3a30(int a4);

int FUN_0c0e33cc(int a4, int a5, int a6)
{
    FUN_0c0e2390((a4 + 0x4C), a5, (a4 + 0x28));
    math_vec3_mul_xyz((a4 + 0x4C), (1.0f / (float)a6), (1.0f / (float)a6), (1.0f / (float)a6));
    *(unsigned short *)((a4 + 0x1C)) = a6;
    *(unsigned short *)((a4 + 0x1E)) = a6;
    return a6;
}

int FUN_0c0e340c(int a4)
{
    register int t2;
    register int t4;

    FUN_0c17c130((a4 + 0x28), (a4 + 0x28), (a4 + 0x4C));
    *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
    t2 = *(short *)((a4 + 0x1C));
    t4 = t2;
    if ((int)t2 <= 0) {
        (((struct o15_uchar *)(a4))->v) = (*(signed char *)((a4 + 0x16)));
        t4 = 0x15;
    }
    return t4;
}

void FUN_0c0e343a(void)
{
    
}

int FUN_0c0e3440(int a4)
{
    register int t0;
    register int t1;
    register int t3;
    register int t4;

    t0 = *(signed char *)((a4 + 0x17));
    if (t0 != 0) {
        t1 = t0;
        if (t0 != 1) {
        } else {
            (((struct o17_uchar *)(a4))->v) = 0x0;
            t1 = 0x17;
        }
        t0 = t1;
    } else {
        t1 = FUN_0c042fe0();
        t0 = t1;
        if (t1 != 0) {
            (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) + 0x1);
            t1 = 0x22;
            if ((int)((((struct o22_short *)(a4))->v)) >= (int)0x168) {
                (((struct o22_ushort *)(a4))->v) = 0x0;
                (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                t3 = FUN_0c179ac0();
                t4 = ((~(((~t3) + 0x1) & 0xF)) + 0x1);
                if ((int)t3 >= 0) {
                    t4 = (t3 & 0xF);
                }
                (((struct o18_uchar *)(a4))->v) = (*(signed char *)((0xC1CBBB0 + t4)));
                t1 = 0x18;
            }
            t0 = t1;
        }
    }
    return t0;
}

int FUN_0c0e34e0(int a4)
{
    int t0;
    int t1;
    register int t2;

    FUN_0c0e340c(a4);
    if ((*(short *)((a4 + 0x1C))) == 80) {
        thunk_FUN_0c05abb2(0x41, (a4 + 0x28));
    }
    if ((*(short *)((a4 + 0x1C))) == 40) {
        (((struct o54_float *)(a4))->v) = 0.0f;
        (((struct o4C_float *)(a4))->v) = 0.0f;
        (((struct o50_float *)(a4))->v) = -13.333333f;
        if ((*(signed char *)((a4 + 0x2))) == 3) {
            (((struct o22_ushort *)(a4))->v) = 0x0;
        }
    }
    if ((*(short *)((a4 + 0x1C))) == 10) {
        (((struct o54_float *)(a4))->v) = 0.0f;
        (((struct o50_float *)(a4))->v) = 0.0f;
        (((struct o4C_float *)(a4))->v) = 0.0f;
        t2 = *(signed char *)((a4 + 0x2));
        FUN_0c064d5a(a4, ((((((t2 - 1) << 1) + (t2 - 1)) << 2) + 0xC1CBBC0) + 0x24));
    }
    t2 = *(short *)((a4 + 0x1C));
    if ((int)t2 < (int)0x14) {
        *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) - 45);
    } else {
        if ((int)t2 < (int)0x3C) {
            *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) - 0xFFFFFF34);
        } else {
            t2 = *(short *)((a4 + 0x1C));
            if (((int)t2 > (int)0x50) && (((int)t2 < (int)0x96) && (t0 = *(short *)((a4 + 0x1C)), (t0 & 7) == 0))) {
                FUN_0c0e6dd8(a4, 0x0);
            }
        }
    }
    if (((int)(*(short *)((a4 + 0x1C))) < (int)0x32) && (t1 = *(short *)((a4 + 0x1C)), (t1 & 7) == 0)) {
        FUN_0c0e6dd8(a4, 0x0);
    }
    if ((*(short *)((a4 + 0x1C))) == 50) {
        FUN_0c0e6aa2(a4);
    }
    t0 = *(short *)((a4 + 0x1C));
    t1 = t0;
    if (t0 == 0) {
        t0 = *(signed char *)((a4 + 0x2));
        FUN_0c0d0378((*(int *)((((((t0 - 1) << 2) << 1) + 0xC1CBC68) + 0x0))), (*(int *)((((((t0 - 1) << 2) << 1) + 0xC1CBC68) + 0x4))));
        FUN_0c0e5874(a4);
        *(unsigned int *)((a4 + 0x34)) = 0x0;
        (((struct o2C_float *)(a4))->v) = 0.0f;
        t1 = 0x2C;
    }
    return t1;
}

int FUN_0c0e360c(int a4)
{
    int t0;
    int t1;
    int t2;
    register float u0;
    register float u1;
    register float u2;

    FUN_0c0e340c(a4);
    if ((((((struct o2C_float *)(a4))->v)) > ((((struct o0_float *)0xC0E3714)->v))) && (t0 = *(short *)((a4 + 0x1C)), (t0 & 0x7) == 0)) {
        FUN_0c0e6dd8(a4, 0x0);
    }
    u2 = (((struct o2C_float *)(a4))->v);
    if ((u2 > ((((struct o4_float *)0xC0E3714)->v))) && ((u0 = (((struct o8_float *)0xC0E3714)->v), u0 > u2) && (t1 = *(short *)((a4 + 0x1C)), (t1 & 0x7) == 0))) {
        FUN_0c0e6dd8(a4, 0x1);
    }
    u0 = (((struct o2C_float *)(a4))->v);
    if ((u0 > ((((struct oC_float *)0xC0E3714)->v))) && ((u1 = (((struct o4_float *)0xC0E3714)->v), u1 > u0) && (t2 = *(short *)((a4 + 0x1C)), (t2 & 0x7) == 0))) {
        FUN_0c0e6dd8(a4, 0x2);
    }
    t0 = 0x16;
    if ((*(signed char *)((a4 + 0x15))) == (*(signed char *)((a4 + 0x16)))) {
        (((struct oA8_uchar *)(a4))->v) = 0x0;
        *(unsigned short *)((a4 + 0x1C)) = 0x0;
        (((struct o12E_ushort *)(a4))->v) = 0x0;
        t0 = 0x12E;
    }
    return t0;
}

int FUN_0c0e369a(int a4)
{
    FUN_0c0e340c(a4);
    return FUN_0c0e34a8(a4);
}

int FUN_0c0e36a8(int a4)
{
    FUN_0c0e340c(a4);
    return FUN_0c0e34a8(a4);
}

int FUN_0c0e36b6(int a4)
{
    int stk[3];
    register int t0;
    register int t22;
    register int t23;
    register int t42;
    register int t34;
    int t3;
    register int t30;
    register int t31;
    register int t11;
    register int t14;

    t0 = *(signed char *)0xC54098E;
    t31 = *(signed char *)((a4 + 0x2));
    if ((t31 != (*(int *)(((((t0 << 2) << 2) + 0xC288050) + 0x0)))) && (t3 = *(int *)(((((t0 << 2) << 2) + 0xC288050) + 0x4)), t31 != t3)) {
        t30 = (((t0 << 2) << 2) + 0xC288050);
    } else {
        if ((*(signed char *)((a4 + 0x2))) == (*(int *)(((((t0 << 2) << 2) + 0xC288050) + 0x0)))) {
            FUN_0c187798((((t0 << 2) << 2) + 0xC288050), 0xC1CBC08, 0xC1CBC08);
            FUN_0c187798(0x0, 0x0, t11);
        } else {
            FUN_0c187798((((t0 << 2) << 2) + 0xC288050), 0xC1CBC08, 0xC1CBC08);
            FUN_0c187798(0x0, 0x0, t14);
        }
        *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) + (*(float *)0xC0E384C));
        FUN_0c0e33cc(a4, ((int)stk + 0), ((*(short *)0xC540994) - 40));
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct o15_uchar *)(a4))->v) = 0x1;
        (((struct o16_uchar *)(a4))->v) = 0x2;
        (((struct o19_uchar *)(a4))->v) = 0x0;
        *(unsigned int *)((a4 + 0x34)) = 0xFFFFE38F;
        t22 = *(short *)0xC540994;
        *(unsigned short *)((a4 + 0x1E)) = t22;
        *(unsigned short *)((a4 + 0x1C)) = t22;
        t23 = *(signed char *)((a4 + 0x2));
        FUN_0c064d5a(a4, (((((t23 - 1) << 1) + (t23 - 1)) << 2) + 0xC1CBBC0));
        (((struct o136_uchar *)(a4))->v) = 0x0;
        (((struct o12E_ushort *)(a4))->v) = 0xFFFFFFEF;
    }
    t42 = 0x15;
    if ((int)(*(signed char *)0xC54098D) >= (int)0x11) {
        t34 = *(signed char *)((a4 + 0x2));
        switch (t34) {
        case 1:
            *(unsigned int *)0xC540D94 = 0x0;
            break;
        case 2:
            *(unsigned int *)0xC540DD4 = 0x0;
            break;
        case 3:
            *(unsigned int *)0xC540E14 = 0x0;
            break;
        }
        t42 = (FUN_0c03f346(a4, t30, t31));
    }
    return t42;
}

int FUN_0c0e37e6(int a4)
{
    int stk[4];
    register int t0;
    register int t1;
    register int t12;
    register int t16;
    int t23;
    register int t24;
    register int t32;
    register int t38;
    register int t42;
    register int t45;
    int t3;
    register int t18;

    t0 = *(signed char *)0xC54098E;
    t1 = *(signed char *)((a4 + 0x2));
    if ((t1 != (*(int *)(((((t0 << 2) << 2) + 0xC288050) + 0x0)))) && (t3 = *(int *)(((((t0 << 2) << 2) + 0xC288050) + 0x4)), t1 != t3)) {
        t12 = ((int (*)(int, int, int))(FUN_0c187798))((((t0 << 2) << 2) + 0xC288050), 0xC1CBC08, (((t0 << 2) << 2) + 0xC288050));
        t16 = 0x28;
        if ((*(signed char *)((a4 + 0x2))) == (*(int *)(((0xC288050 + (((*(signed char *)0xC54098E) << 2) << 2)) + 0x0)))) {
            t16 = 0x1C;
        }
        *(float *)(((int)stk + 8)) = (*(float *)((t18 + t16)));
        FUN_0c0e33cc(a4, (((int)stk + 0) + 0x4), (*(short *)0xC540994));
        thunk_FUN_0c05abb2(0x42, (a4 + 0x28));
        (((struct o15_uchar *)(a4))->v) = 0x3;
        (((struct o16_uchar *)(a4))->v) = 0x0;
        t23 = *(signed char *)0xC54098D;
        if ((t23 != 4) && (t23 != 12)) {
        } else {
            t24 = ((int (*)(int))(FUN_0c187798))(t23);
            *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) + (*(float *)0xC0E3A60));
            FUN_0c0e5aa8((((int)stk + 0) + 0x4));
        }
        t32 = *(signed char *)((a4 + 0x2));
        *(unsigned int *)(((int)stk + 0)) = ((((t32 - 1) << 2) << 1) + 0xC1CBC68);
        FUN_0c0d039e((*(int *)(((*(int *)(((int)stk + 0))) + 0x0))), (*(int *)((((((t32 - 1) << 2) << 1) + 0xC1CBC68) + 0x4))));
    } else {
        t38 = *(signed char *)0xC54098D;
        if (t38 == 8) {
            t42 = *(short *)0xC540994;
            t45 = 0xC1CBC44;
            if ((*(signed char *)((a4 + 0x2))) == (*(int *)(((((t0 << 2) << 2) + 0xC288050) + 0x0)))) {
                t45 = 0xC1CBC38;
            }
            FUN_0c0e33cc(a4, t45, t42);
            (((struct o15_uchar *)(a4))->v) = 0x4;
            (((struct o16_uchar *)(a4))->v) = 0x5;
        } else {
            if (t38 == 19) {
                (((struct o15_uchar *)(a4))->v) = 0x7;
                (((struct o58_float *)(a4))->v) = ((((struct o28_float *)(a4))->v));
            }
        }
    }
    return (FUN_0c0e34a8(a4));
}

int FUN_0c0e3940(int a4)
{
    register int t1;
    register int t5;

    if ((*(signed char *)0xC54098D) == 10) {
        t1 = *(short *)0xC540994;
        t5 = 0xC1CBC14;
        if ((*(signed char *)((a4 + 0x2))) == (*(int *)(((0xC288050 + (((*(signed char *)0xC54098E) << 2) << 2)) + 0x0)))) {
            t5 = 0xC1CBC08;
        }
        FUN_0c0e33cc(a4, t5, t1);
        (((struct o15_uchar *)(a4))->v) = 0x6;
        (((struct o16_uchar *)(a4))->v) = 0x2;
    }
    return FUN_0c0e34a8(a4);
}

int FUN_0c0e3992(int a4)
{
    register float u5;

    (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) + 0x1);
    u5 = ((((struct o58_float *)(a4))->v));
    u5 = u5 + (*(float *)0xC0E3A80) * (math_cos_angle16((((((struct o20_short *)(a4))->v)) << 13)));
    (((struct o28_float *)(a4))->v) = u5;
    if ((*(signed char *)0xC54098D) == 20) {
        (((struct o15_uchar *)(a4))->v) = 0x8;
        (((struct o28_float *)(a4))->v) = ((((struct o58_float *)(a4))->v));
        (((struct o20_ushort *)(a4))->v) = 0x28;
    }
    return FUN_0c0e34a8(a4);
}

int FUN_0c0e39de(int a4)
{
    register float u8;

    if (((((struct o20_short *)(a4))->v)) != 0) {
        (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) - 1);
        u8 = ((((struct o58_float *)(a4))->v));
        u8 = u8 + (((float)((((struct o20_short *)(a4))->v)) / (*(float *)0xC0E3A88))) * (math_cos_angle16((((((struct o20_short *)(a4))->v)) << 13)));
        (((struct o28_float *)(a4))->v) = u8;
        if (((((struct o20_short *)(a4))->v)) == 0) {
            (((struct o28_float *)(a4))->v) = ((((struct o58_float *)(a4))->v));
        }
    }
    return FUN_0c0e34a8(a4);
}

int FUN_0c0e3a30(int a4)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 == 1) {
            if ((int)(*(signed char *)((a4 + 0x15))) < (int)0x7) {
                u0 = ((((struct o2C_float *)(a4))->v));
                u0 = u0 + 0.699999988f * (math_sin_angle16(((((((struct o20_short *)(a4))->v)) << 8) << 1)));
                (((struct o2C_float *)(a4))->v) = u0;
                (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) + 0x1);
            }
            t1 = *(signed char *)((a4 + 0x15));
            if (t1 != 0) {
                if (t1 != 1) {
                    if (t1 != 2) {
                        if (t1 != 3) {
                            if (t1 != 4) {
                                if (t1 != 5) {
                                    if (t1 != 6) {
                                        if (t1 != 7) {
                                            if (t1 != 8) {
                                                return t1;
                                            }
                                            return FUN_0c0e39de(a4);
                                        }
                                        return FUN_0c0e3992(a4);
                                    }
                                    return FUN_0c0e36a8(a4);
                                }
                                return FUN_0c0e3940(a4);
                            }
                            return FUN_0c0e369a(a4);
                        }
                        return FUN_0c0e360c(a4);
                    }
                    return FUN_0c0e37e6(a4);
                }
                return FUN_0c0e34e0(a4);
            }
            return FUN_0c0e36b6(a4);
        }
        return t0;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct o20_ushort *)(a4))->v) = (*(short *)((0xC1CBC90 + (((*(signed char *)((a4 + 0x2))) - 1) << 1))));
    t0 = *(signed char *)0xC54098E;
    if ((*(signed char *)((a4 + 0x2))) == (*(int *)(((((t0 << 2) << 2) + 0xC288050) + 0x0)))) {
        (((struct o15_uchar *)(a4))->v) = 0x2;
        FUN_0c187798((((t0 << 2) << 2) + 0xC288050), 0xC1CBC08, 0x2);
        t1 = *(signed char *)((a4 + 0x2));
        FUN_0c0d0378((*(int *)((((((t1 - 1) << 2) << 1) + 0xC1CBC68) + 0x0))), (*(int *)((((((t1 - 1) << 2) << 1) + 0xC1CBC68) + 0x4))));
        FUN_0c0e5874(a4);
        FUN_0c0e6aa2(a4);
        (((struct o12E_ushort *)(a4))->v) = 0xFFFFFFEF;
    } else {
        if ((*(signed char *)((a4 + 0x2))) == (*(int *)(((((t0 << 2) << 2) + 0xC288050) + 0x4)))) {
            (((struct o15_uchar *)(a4))->v) = 0x2;
            FUN_0c187798((((t0 << 2) << 2) + 0xC288050), 0xC1CBC08, 0x2);
            t1 = *(signed char *)((a4 + 0x2));
            FUN_0c0d0378((*(int *)((((((t1 - 1) << 2) << 1) + 0xC1CBC68) + 0x0))), (*(int *)((((((t1 - 1) << 2) << 1) + 0xC1CBC68) + 0x4))));
            FUN_0c0e5874(a4);
            FUN_0c0e6aa2(a4);
            (((struct o12E_ushort *)(a4))->v) = 0xFFFFFFEF;
        } else {
            (((struct oA8_uchar *)(a4))->v) = 0x0;
            (((struct o15_uchar *)(a4))->v) = 0x0;
            FUN_0c187798((((t0 << 2) << 2) + 0xC288050), 0xC1CBC08, 0x2);
            (((struct o12E_ushort *)(a4))->v) = 0x0;
        }
    }
    FUN_0c07e420(a4, 0x4);
    (((struct oAC_ushort *)(a4))->v) = 0x3;
    t0 = 0x0;
    for (;;) {
        if ((int)t0 >= (int)((((struct oC0_int *)(a4))->v))) {
            break;
        }
        t1 = t0;
        t1 = (t1 << 2);
        t1 = (t1 + (0xC4 + a4));
        t1 = (*(int *)((t1 + 0x0)));
        FUN_0c0d04c4((t1 + 0x6), (t1 + 0x78));
        t0 = (t0 + 0x1);
    }
    if ((int)(*(signed char *)((a4 + 0x15))) < (int)0x7) {
        u0 = ((((struct o2C_float *)(a4))->v));
        u0 = u0 + 0.699999988f * (math_sin_angle16(((((((struct o20_short *)(a4))->v)) << 8) << 1)));
        (((struct o2C_float *)(a4))->v) = u0;
        (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) + 0x1);
    }
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        if (t0 != 5) {
                            if (t0 != 6) {
                                if (t0 != 7) {
                                    if (t0 != 8) {
                                        return t0;
                                    }
                                    return FUN_0c0e39de(a4);
                                }
                                return FUN_0c0e3992(a4);
                            }
                            return FUN_0c0e36a8(a4);
                        }
                        return FUN_0c0e3940(a4);
                    }
                    return FUN_0c0e369a(a4);
                }
                return FUN_0c0e360c(a4);
            }
            return FUN_0c0e37e6(a4);
        }
        return FUN_0c0e34e0(a4);
    }
    return FUN_0c0e36b6(a4);
}
