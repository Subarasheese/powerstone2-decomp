/* game/player: functions 0C138C84-0C13A014, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o10_int { char p[0x10]; int v; };
struct o118_int { char p[0x118]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o8C_float { char p[0x8C]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC_int { char p[0xC]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int);
int FUN_0c03f444(int, int, int);
int FUN_0c0588bc(int, int, int, int, int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c07e2f4(int, int);
int FUN_0c138fae(int);
int FUN_0c1393f4(int);
int FUN_0c139d06(int, int, int, int, int);
float math_signed_sqrt(float);
int math_atan2_angle16(float, float);
float math_cos_angle16(int);
float math_sin_angle16(int);
extern int FUN_0c18778c();
int FUN_0c187798(void);
int FUN_0c139168(int a4, int a5, int a6);
int FUN_0c1392d8(int a4, int a5, int a6);
int FUN_0c139d98(int a4, int a5, int a6);

int FUN_0c139168(int a4, int a5, int a6)
{
    int stk[8];
    register int t0;
    register int t39;
    register int t13;
    register int t15;
    register int t18;
    register int t19;
    register float u21;
    register float u22;
    register float u23;
    register float t24;
    register float u25;
    register int t28;
    register int t30;
    register int t33;
    register int t34;
    register int t37;

    *(unsigned char *)(((int)stk + 16)) = a4;
    t0 = FUN_0c03f444(0x1, 0x0, 0x1);
    t39 = t0;
    if (t0 == 0) {
    } else {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((int)stk + 16)));
        *(unsigned int *)((t0 + 0x4)) = 0xC139010;
        FUN_0c187798();
        (((struct o4_float *)(((int)stk + 16)))->v) = ((*(float *)((a5 + 0x0))) - (*(float *)((a6 + 0x0))));
        (((struct o4_float *)((((int)stk + 16) + 0x4)))->v) = (((((struct o4_float *)(a5))->v)) - ((((struct o4_float *)(a6))->v)));
        (((struct o8_float *)((((int)stk + 16) + 0x4)))->v) = (((((struct o8_float *)(a5))->v)) - ((((struct o8_float *)(a6))->v)));
        if (((((struct o8_float *)((((int)stk + 16) + 0x4)))->v)) == 0.0f) {
            (((struct o8_float *)((((int)stk + 16) + 0x4)))->v) = 9.99999997e-07f;
        }
        t13 = math_atan2_angle16(((((struct o4_float *)(((int)stk + 16)))->v)), ((((struct o8_float *)((((int)stk + 16) + 0x4)))->v)));
        t15 = (t13 & 0xFFFF);
        if ((int)((t13 & 0xFFFF) - (*(int *)((t0 + 0x38)))) > (int)0x8000) {
            t15 = ((t13 & 0xFFFF) - 0x10000);
        }
        t18 = *(int *)((t0 + 0x38));
        t19 = t15;
        if ((int)(t15 - (*(int *)((t0 + 0x38)))) < (int)0xFFFF8000) {
            t19 = (t15 + 0x10000);
        }
        *(unsigned int *)((t0 + 0x38)) = ((t18 + (t19 - t18)) & 0xFFFF);
        u21 = (((struct o8_float *)((((int)stk + 16) + 0x4)))->v);
        u22 = (((struct o4_float *)(((int)stk + 16)))->v);
        u23 = (u21 * u21);
        u23 = u23 + u22 * u22;
        t24 = math_signed_sqrt(u23);
        u25 = t24;
        if (t24 == 0.0f) {
            u25 = 9.99999997e-07f;
        }
        t28 = math_atan2_angle16((-((((struct o4_float *)((((int)stk + 16) + 0x4)))->v))), u25);
        t30 = (t28 & 0xFFFF);
        if ((int)((t28 & 0xFFFF) - (*(int *)((t0 + 0x34)))) > (int)0x8000) {
            t30 = ((t28 & 0xFFFF) - 0x10000);
        }
        t33 = *(int *)((t0 + 0x34));
        t34 = t30;
        if ((int)(t30 - (*(int *)((t0 + 0x34)))) < (int)0xFFFF8000) {
            t34 = (t30 + 0x10000);
        }
        *(unsigned int *)((t0 + 0x34)) = ((t33 + (t34 - t33)) & 0xFFFF);
        FUN_0c07e2f4(t0, 0x32);
        *(int *)((int)stk + 12) = 0x0;
        *(int *)((int)stk + 8) = 0x0;
        t37 = *(signed char *)((t0 + 0x1));
        *(int *)((int)stk + 4) = (~((int)0x1 << (int)t37));
        *(int *)((int)stk + 0) = 0x100;
        t39 = (FUN_0c064d24(t0, 0x3, 0x9, 0x0, 0x100, (~((int)0x1 << (int)t37)), 0x0, 0x0));
    }
    return t39;
}

int FUN_0c1392d8(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;

    t0 = *(signed char *)((a4 + 0x1));
    t1 = ((int (*)(int, int, int))(FUN_0c187798))(a4, a5, a6);
    u0 = math_sin_angle16((*(int *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x38))));
    u1 = ((((struct o28_float *)(a4))->v));
    u1 = u1 + ((((struct o0_float *)0xC2A1C4C)->v)) * u0;
    (((struct o28_float *)(a4))->v) = u1;
    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o4_float *)0xC2A1C4C)->v)));
    u0 = math_cos_angle16((*(int *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x38))));
    u1 = ((((struct o30_float *)(a4))->v));
    u1 = u1 + ((((struct o8_float *)0xC2A1C4C)->v)) * u0;
    (((struct o30_float *)(a4))->v) = u1;
    t0 = ((int (*)(void))(FUN_0c187798))();
    if ((*(signed char *)((0xC535BAD + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938)))) != 26) {
        (((struct o14_uchar *)(a4))->v) = 0x2;
    }
    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            return FUN_0c03f346(a4);
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0xF;
        t0 = ((int (*)(void))(FUN_0c187798))();
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
    t1 = (short)(t0 + 0x1);
    if ((int)(short)(t0 + 0x1) > (int)0xA0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t1 = 0x14;
    }
    return t1;
}

int FUN_0c139d98(int a4, int a5, int a6)
{
    int stk[8];
    register int t0;
    register int t5;
    register int t8;
    register int t9;
    register int t23;
    register int t32;
    register int t34;
    register int t63;
    register int t70;
    register int t74;
    register int t76;
    register int t84;
    register int t88;
    register int t90;
    register int t98;
    register int t114;
    register int t7;
    register int t146;
    register int t104;
    register int t18;
    register int t24;
    register int t58;
    int t72;
    int t86;

    t0 = *(signed char *)((a4 + 0x1));
    if ((*(signed char *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x3715))) != 26) {
        (((struct o14_uchar *)(a4))->v) = 0x3;
    }
    *(volatile signed char *)((a4 + 0x1));
    t5 = ((int (*)(int, int, int))(FUN_0c187798))(0x3, 0xC532498, a6);
    *(volatile signed char *)((a4 + 0x1));
    t8 = ((int (*)(int, int))(FUN_0c187798))(0x0, t7);
    t9 = *(signed char *)((a4 + 0x14));
    if (t9 != 0) {
        if (t9 != 1) {
            if (t9 != 2) {
                t104 = (FUN_0c03f346(a4));
            } else {
                if ((int)(*(short *)((a4 + 0x1E))) < (int)0x2) {
                    if (((int)((int)(*(short *)((a4 + 0x1C))) % (int)t18)) == 0) {
                        t23 = (*(int *)((0xC2A1DC8 + (((*(short *)((a4 + 0x1E))) << 1) << 2))));
                        for (;;) {
                            if ((int)t23 > (int)(*(int *)((((((*(short *)((a4 + 0x1E))) << 1) << 2) + 0xC2A1DC8) + 0x4)))) {
                                break;
                            }
                            t24 = t23;
                            t24 = (t24 << 2);
                            *(unsigned int *)(((int)stk + 20)) = 0x0;
                            *(unsigned int *)(((int)stk + 24)) = (*(int *)((t24 + 0xC2A1CD8)));
                            *(unsigned int *)(((int)stk + 28)) = 0x0;
                            *(float *)(((int)stk + 8)) = (*(float *)(((0xC2A1D08 + t24) + 0x0)));
                            (((struct o4_float *)(((int)stk + 8)))->v) = (*(float *)((t24 + 0xC2A1D38)));
                            *(float *)(((int)stk + 16)) = (*(float *)(((0xC2A1D08 + t24) + 0x0)));
                            t32 = *(int *)((t24 + 0xC2A1D68));
                            t34 = (*(int *)((0xC2A1D98 + t24)));
                            *(int *)((int)stk + 4) = t34;
                            FUN_0c139d06((*(signed char *)(((0x1 + (((short)t0 * (short)0x3938) + 0xC532498)) + 0x0))), (((int)stk + 4) + 0x4), (((int)stk + 4) + 0x10), t32, t34);
                            t23 = (t23 + 0x1);
                        }
                        *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
                    }
                    t58 = t18;
                }
                if ((*(short *)((a4 + 0x1C))) == 0) {
                    FUN_0c1393f4((*(signed char *)((a4 + 0x1))));
                } else {
                }
                if (((*(short *)((a4 + 0x1C))) & 1) != 0) {
                    *(volatile int *)((a4 + 0xC4));
                    *(volatile short *)((a4 + 0x20));
                    t63 = ((int (*)(int))(FUN_0c18778c))(t58);
                    (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) + 0x1);
                }
                t70 = *(short *)((a4 + 0x1C));
                if (((int)t70 >= (int)((((struct o4_int *)0xC2A1DE0)->v))) && (t72 = (((struct o8_int *)0xC2A1DE0)->v), (int)t70 <= (int)t72)) {
                    t74 = ((((struct o4_int *)0xC2A1DE0)->v));
                    *(int *)((int)stk + 4) = t74;
                    t76 = ((((struct o8_int *)0xC2A1DE0)->v));
                    *(int *)((int)stk + 0) = t76;
                    FUN_0c0588bc((((((struct oC4_int *)(a4))->v)) + 0x84), 0xC2A1BCC, 0xC2A1BC0, (*(short *)((a4 + 0x1C))), t76, t74);
                }
                t84 = *(short *)((a4 + 0x1C));
                if (((int)t84 >= (int)((((struct oC_int *)0xC2A1DE0)->v))) && (t86 = (((struct o10_int *)0xC2A1DE0)->v), (int)t84 <= (int)t86)) {
                    t88 = ((((struct oC_int *)0xC2A1DE0)->v));
                    *(int *)((int)stk + 4) = t88;
                    t90 = ((((struct o10_int *)0xC2A1DE0)->v));
                    *(int *)((int)stk + 0) = t90;
                    FUN_0c0588bc((((((struct oC4_int *)(a4))->v)) + 0x84), 0xC2A1BC0, 0xC2A1BCC, (*(short *)((a4 + 0x1C))), t90, t88);
                }
                t98 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t98 + 0x1);
                t104 = (short)(t98 + 0x1);
                if ((int)(short)(t98 + 0x1) > (int)((((struct o0_int *)0xC2A1DE0)->v))) {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    t104 = 0x14;
                }
            }
            t146 = t104;
        } else {
            t114 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t114 + 0x1);
            t146 = (short)(t114 + 0x1);
            if ((int)(short)(t114 + 0x1) <= (int)0x14) {
            } else {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                *(unsigned short *)((a4 + 0x1C)) = 0x0;
                FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x0, 0x10, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
                (((struct oA8_uchar *)(a4))->v) = 0x1;
                (((struct oAC_ushort *)(a4))->v) = 0xF;
                (((struct oA9_uchar *)(a4))->v) = 0x21;
                *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x21F;
                *(volatile int *)((a4 + 0xC4));
                t146 = (((int (*)(void))(FUN_0c18778c))());
            }
        }
    } else {
        t146 = 0x8C;
        if (20.0f > ((((struct o8C_float *)(((((struct o118_int *)((((short)t0 * (short)0x3938) + 0xC532498)))->v))))->v))) {
        } else {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t146 = (FUN_0c138fae((*(signed char *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x1)))));
        }
    }
    return t146;
}
