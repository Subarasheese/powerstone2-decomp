/* Straight-line functions with calls and guards (batch gen_jq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c0588bc(int, int, int, int, int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c07e3ae(int, int);
int FUN_0c1171f0(int);
int FUN_0c1173dc(int, int);
int FUN_0c179ac0(void);
int FUN_0c18778c(void);
extern int FUN_0c187798();
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c165392(int a4, int a5, int a6, int a7);
int FUN_0c1195d4(int a4, int a5, int a6, int a7);
int FUN_0c13bfc4(int a4, int a5, int a6, int a7);
int FUN_0c13954c(int a4, int a5, int a6, int a7);

int FUN_0c165392(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = 0x5;
    if (a7 != 0) {
        t0 = 0x1;
    }
    t1 = FUN_0c03f444(t0, 0x0, 0x1);
    t0 = t1;
    if (t1 == 0) {
    } else {
        t2 = (((struct oC4_int *)(t1))->v);
        FUN_0c03744a(t2, 0x0, 0x2E, (*(int *)0xC4B40CC));
        *(unsigned char *)((t1 + 0x1)) = a6;
        *(unsigned char *)((t1 + 0x2)) = a7;
        *(unsigned int *)((t1 + 0x4)) = 0xC165188;
        (((struct oAC_ushort *)(t1))->v) = 0xF;
        (((struct oA9_uchar *)(t1))->v) = 0x21;
        t3 = (~((int)0x1 << (int)a6));
        if ((int)a6 < 0) {
            t3 = 0xF;
        }
        if (a7 != 0) {
            FUN_0c07e3ae(t1, (*(signed char *)0xC273F7A));
            FUN_0c064d24(t1, 0x3, 0x9, 0x0, 0x100, (t3), 0x0, 0xFFFFFFF0);
        } else {
            t3 = 0xF;
        }
        FUN_0c187798(t3);
        *(unsigned int *)((t1 + 0x38)) = a5;
        (((struct o54_float *)(t1))->v) = ((math_cos_angle16(a5)) * 18.0f);
        (((struct o4C_float *)(t1))->v) = ((math_sin_angle16(a5)) * 18.0f);
        (((struct o50_float *)(t1))->v) = 0.0f;
        (((struct o58_float *)(t1))->v) = (-(((((struct o4C_float *)(t1))->v)) / 45.0f));
        (((struct o5C_float *)(t1))->v) = 0.100000001f;
        (((struct o60_float *)(t1))->v) = (-(((((struct o54_float *)(t1))->v)) / 45.0f));
        (((struct o48_float *)(t1))->v) = 1.0f;
        (((struct o44_float *)(t1))->v) = 1.0f;
        (((struct o40_float *)(t1))->v) = 1.0f;
        *(unsigned short *)((t2 + 0x6)) = 0x23F;
        t1 = (int)((int)(FUN_0c179ac0()) % (int)0x14);
        (((struct o80_uint *)(t2))->v) = (int)(((float)((((t1 << 2) << 1) + t1) << 1) * 65536.0f) / 360.0f);
        (((struct o8C_float *)(t2))->v) = 0.100000001f;
        (((struct o88_float *)(t2))->v) = 0.100000001f;
        (((struct o84_float *)(t2))->v) = 0.100000001f;
        (((struct o20_float *)(t2))->v) = 0.0f;
        (((struct o1C_float *)(t2))->v) = 0.0f;
        (((struct o18_float *)(t2))->v) = 0.0f;
        *(unsigned char *)((t2 + 0x0)) = 0x1;
        t0 = 0x18;
    }
    return t0;
}

int FUN_0c1195d4(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;

    t0 = *(int *)((a4 + 0x10));
    if ((*(signed char *)((t0 + 0x14))) == 80) {
        (((struct o14_uchar *)(a4))->v) = 0x63;
    }
    t1 = *(signed char *)((a4 + 0x14));
    if (t1 != 0) {
        if (t1 != 1) {
            if (t1 == 99) {
                return FUN_0c03f346(a4, a5, a6, a7);
            }
            return t1;
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0x1F;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
    }
    *(volatile int *)((a4 + 0x10));
    t1 = ((int (*)(int, int, int))(FUN_0c187798))(t0, a5, a6);
    FUN_0c1171f0(a4);
    t1 = 0xC291D70;
    t2 = 0x0;
    for (;;) {
        t4 = *(short *)(((0x41C + t0) + 0x8));
        t5 = *(short *)(((0x41C + t0) + 0xC));
        t6 = *(int *)((((t2 << 2) + (0xC4 + a4)) + 0x0));
        t7 = (t4 - t5);
        if ((int)(t4 - t5) < 0) {
            t7 = 0x0;
        }
        t4 = *(short *)(((0x41C + t0) + 0xE));
        if ((int)(((*(short *)(((0x41C + t0) + 0x8))) - (*(short *)(((0x41C + t0) + 0xC)))) + t2) < (int)t4) {
            t1 = 0xC4B410C;
            t5 = *(int *)((((t2 + t7) << 2) + 0xC474410));
            *(volatile int *)((t1 + 0x0));
            FUN_0c1173dc(t6, t5);
            *(unsigned short *)((t6 + 0x6)) = 0x21F;
            t1 = 0xC291DF8;
            t5 = ((int (*)(void))(FUN_0c187798))();
            if (t2 == (*(short *)(((0x41C + t0) + 0xC)))) {
                t1 = 0xC2A0CA0;
                FUN_0c18778c();
            } else {
                t1 = 0xC291D70;
                FUN_0c18778c();
            }
            t1 = t6;
            t1 = (t1 + 0x6C);
            t5 = ((int (*)(void))(FUN_0c187798))();
            t1 = 0x4;
            t3 = (FUN_0c0588bc((t6 + 0x6C), 0xC291DEC, 0xC291DE0, t2, (t1), 0x0));
        } else {
            *(unsigned char *)((t6 + 0x0)) = 0x0;
            t3 = t4;
            t4 = t1;
        }
        t2 = (t2 + 0x1);
        t1 = t4;
        if ((int)t2 >= (int)0x5) {
            break;
        }
    }
    return t3;
}

int FUN_0c13bfc4(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;

    t0 = *(signed char *)((a4 + 0x1));
    t1 = *(signed char *)((a4 + 0x14));
    if (t1 != 0) {
        if (t1 != 1) {
            return FUN_0c03f346(a4, (((short)t0 * (short)0x3938) + 0xC532498), a6, a7);
        }
        t1 = *(signed char *)((a4 + 0x15));
        if (t1 != 0) {
            if (t1 != 1) {
                u0 = (((struct o48_float *)(a4))->v);
                (((struct o48_float *)(a4))->v) = (u0 - 0.100000001f);
                (((struct o44_float *)(a4))->v) = (u0 - 0.100000001f);
                (((struct o40_float *)(a4))->v) = (u0 - 0.100000001f);
                if (!(((((struct o48_float *)(a4))->v)) > 0.0f)) {
                    (((struct o48_float *)(a4))->v) = 0.0f;
                    (((struct o44_float *)(a4))->v) = 0.0f;
                    (((struct o40_float *)(a4))->v) = 0.0f;
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                }
                *(volatile int *)(((0xC4 + a4) + 0x0));
                *(volatile int *)(((0xC4 + a4) + 0x4));
                t1 = ((int (*)(int, int, int))(FUN_0c187798))(a4, (((short)t0 * (short)0x3938) + 0xC532498), (0xC4 + a4));
                t1 = ((int (*)(void))(FUN_0c187798))();
            } else {
                if ((int)(*(signed char *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x15))) >= (int)0x3) {
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                }
                t1 = a4;
                t2 = (((short)t0 * (short)0x3938) + 0xC532498);
            }
            t3 = t1;
            t1 = t2;
        } else {
            u0 = (((struct o48_float *)(a4))->v);
            (((struct o48_float *)(a4))->v) = (u0 + 0.100000001f);
            (((struct o44_float *)(a4))->v) = (u0 + 0.100000001f);
            (((struct o40_float *)(a4))->v) = (u0 + 0.100000001f);
            if (!(1.0f > ((((struct o48_float *)(a4))->v)))) {
                (((struct o48_float *)(a4))->v) = 1.0f;
                (((struct o44_float *)(a4))->v) = 1.0f;
                (((struct o40_float *)(a4))->v) = 1.0f;
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            }
            *(volatile int *)(((0xC4 + a4) + 0x0));
            *(volatile int *)(((0xC4 + a4) + 0x4));
            t2 = ((int (*)(int, int, int))(FUN_0c187798))(a4, (((short)t0 * (short)0x3938) + 0xC532498), (0xC4 + a4));
            t2 = ((int (*)(void))(FUN_0c187798))();
        }
        t2 = *(signed char *)((t1 + 0x3715));
        t1 = t2;
        if (t2 != 26) {
            (((struct o14_uchar *)(t3))->v) = 0x63;
            t1 = 0x14;
        }
        return t1;
    }
    if ((*(signed char *)((a4 + 0x15))) == 0) {
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        (((struct o16_uchar *)(a4))->v) = 0x0;
        *(unsigned short *)((a4 + 0x1C)) = 0x2;
    }
    t1 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
    if ((int)(short)(t1 - 1) > 0) {
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o15_uchar *)(a4))->v) = 0x0;
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        *(unsigned short *)((a4 + 0x1C)) = 0xB4;
    }
    t1 = *(signed char *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x3715));
    t0 = t1;
    if (t1 != 26) {
        (((struct o14_uchar *)(a4))->v) = 0x63;
        t0 = 0x14;
    }
    return t0;
}

int FUN_0c13954c(int a4, int a5, int a6, int a7)
{
    int stk[6];
    register int t0;
    register int t8;
    register int t15;
    register int t16;
    register int t26;
    register int t27;
    register int t29;
    register int t30;
    register float u35;
    register float u36;
    register float u37;
    register float u41;
    register float u42;
    register float u43;
    register int t45;
    register int t46;
    register int t54;
    register int t61;
    register int t62;
    register int t67;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            t67 = (FUN_0c03f346(a4, a5, a6, a7));
        } else {
            if (((*(short *)((a4 + 0x1C))) & 1) != 0) {
                *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
                *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) & 0x3);
            }
            *(volatile int *)((a4 + 0xC4));
            t8 = ((int (*)(int, int, int))(FUN_0c187798))(a4, a5, a6);
            FUN_0c03744a(((((struct oC4_int *)(a4))->v)), (*(short *)((a4 + 0x1E))), 0x17, (*(int *)0xC4B40CC));
            *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x2F;
            *(volatile int *)((a4 + 0xC4));
            t15 = ((int (*)(void))(FUN_0c187798))();
            t16 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t16 + 0x1);
            t67 = (short)(t16 + 0x1);
            if ((int)(short)(t16 + 0x1) >= (int)0x8) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t67 = 0x14;
            }
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0xF;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        t26 = FUN_0c179ac0();
        t27 = ((~(((~t26) + 0x1) & 0x3)) + 0x1);
        if ((int)t26 >= 0) {
            t27 = (t26 & 0x3);
        }
        *(unsigned int *)(((((int)stk + 4) + 0xC) + 0x0)) = t27;
        t29 = FUN_0c179ac0();
        t30 = ((~(((~t29) + 0x1) & 0xF)) + 0x1);
        if ((int)t29 >= 0) {
            t30 = (t29 & 0xF);
        }
        *(unsigned int *)(((((int)stk + 4) + 0x10) + 0x0)) = t30;
        *(int *)((int)stk + 0) = (a4 + 0x28);
        u35 = (((struct o28_float *)(a4))->v);
        u36 = ((float)(*(int *)(((((int)stk + 4) + 0xC) + 0x0))) * (math_cos_angle16(((((*(int *)(((((int)stk + 4) + 0x10) + 0x0))) << 8) << 2) << 2))));
        u37 = u35;
        u37 = u37 + 30.0f * u36;
        (((struct o28_float *)(a4))->v) = u37;
        *(int *)((int)stk + 0) = (a4 + 0x2C);
        u41 = (((struct o2C_float *)(a4))->v);
        u42 = ((float)(*(int *)(((((int)stk + 4) + 0xC) + 0x0))) * (math_sin_angle16(((((*(int *)(((((int)stk + 4) + 0x10) + 0x0))) << 8) << 2) << 2))));
        u43 = u41;
        u43 = u43 + 30.0f * u42;
        (((struct o2C_float *)(a4))->v) = u43;
        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 80.0f);
        t45 = FUN_0c179ac0();
        t46 = ((~(((~t45) + 0x1) & 0x3)) + 0x1);
        if ((int)t45 >= 0) {
            t46 = (t45 & 0x3);
        }
        *(unsigned short *)((a4 + 0x1E)) = t46;
        if (((*(short *)((a4 + 0x1C))) & 1) != 0) {
            *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
            *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) & 0x3);
        }
        *(volatile int *)((a4 + 0xC4));
        t54 = ((int (*)(void))(FUN_0c187798))();
        FUN_0c03744a(((((struct oC4_int *)(a4))->v)), (*(short *)((a4 + 0x1E))), 0x17, (*(int *)0xC4B40CC));
        *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x2F;
        *(volatile int *)((a4 + 0xC4));
        t61 = ((int (*)(void))(FUN_0c187798))();
        t62 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t62 + 0x1);
        t67 = (short)(t62 + 0x1);
        if ((int)(short)(t62 + 0x1) >= (int)0x8) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t67 = 0x14;
        }
    }
    return t67;
}
