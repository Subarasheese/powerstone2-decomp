/* Straight-line functions with calls and guards (batch gen_et): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
struct o0_int { int v; };
struct o10_float { char p[0x10]; float v; };
struct o10_int { char p[0x10]; int v; };
struct o126_uchar { char p[0x126]; unsigned char v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o18_int { char p[0x18]; int v; };
struct o1B_uchar { char p[0x1B]; unsigned char v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o20_int { char p[0x20]; int v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o40_float { char p[0x40]; float v; };
struct o41C_uchar { char p[0x41C]; unsigned char v; };
struct o420_ushort { char p[0x420]; unsigned short v; };
struct o423_uchar { char p[0x423]; unsigned char v; };
struct o424_uchar { char p[0x424]; unsigned char v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o78_int { char p[0x78]; int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o8_int { char p[0x8]; int v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o90_float { char p[0x90]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct oA0_int { char p[0xA0]; int v; };
struct oA0_uint { char p[0xA0]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAA_uchar { char p[0xAA]; unsigned char v; };
struct oAB_uchar { char p[0xAB]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oD0_int { char p[0xD0]; int v; };
struct oD4_int { char p[0xD4]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int, int);
int FUN_0c058542(int, int);
int FUN_0c058716(int, int);
int FUN_0c0588bc(int, int, int, int, int, int);
int FUN_0c058a6e(int, int, int, int, int, int);
int FUN_0c059e9a(int, int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c064f80(int);
int FUN_0c07e2f4(int, int);
int FUN_0c0c212c(int);
int FUN_0c0c2ab6(int, int);
int FUN_0c0c2d56(int, int, int);
extern int FUN_0c0c4b76();
extern int FUN_0c0c4bcc();
extern int FUN_0c0c4c1c();
extern int FUN_0c0c5024();
extern int FUN_0c0c52c4();
extern int FUN_0c0c8c08();
extern int FUN_0c0c8c36();
extern int FUN_0c0d409c();
int FUN_0c0d4122(int, int, int);
int FUN_0c0f15e0(int);
int FUN_0c0f1640(int);
extern int FUN_0c143a30();
int FUN_0c1453c4(int, int, int);
int FUN_0c148d64(int, int, int);
int FUN_0c16b2cc(int, int, int, int);
float math_cos_angle16(int);
int math_mat_get_translate(int, int);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int math_vec3_mul_xyz(int, float, float, float);
int nlAddVector3op(int, int, int);
int nlRand(void);
int nlSubVector3op(int, int, int);
void FUN_0c120654(int a4, int a5, int a6, int a7);
int FUN_0c032a48(int a4, int a5, int a6, int a7);
int FUN_0c0f1688(int a4, int a5, int a6, int a7);
int FUN_0c14a58a(int a4, int a5, int a6, int a7);
int FUN_0c12e584(int a4, int a5, int a6, int a7);
float FUN_0c1491e4(int a4, int a5, int a6, int a7);
int FUN_0c152ad4(int a4, int a5, int a6, int a7);
int FUN_0c11a2a8(int a4, int a5, int a6, int a7);
int FUN_0c167196(int a4, int a5, int a6, int a7);
int FUN_0c16b38e(int a4, int a5, int a6, int a7);
int FUN_0c0332b6(int a4, int a5, int a6, int a7, float f4);

void FUN_0c120654(int a4, int a5, int a6, int a7)
{
    int stk[10];
    register int t0;
    register int t2;
    register int t3;
    register int t10;
    register int t26;
    register int t46;
    register int t51;
    register int t53;
    register int t55;
    register int t57;
    register int t59;
    register int t61;
    register int t64;
    register int t71;
    register int t73;

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a6;
    t0 = FUN_0c03f444(0x5, 0x0, 0xB, a7);
    if (t0 != 0) {
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = 0x80;
        t2 = *(int *)0xC4B410C;
        t3 = 0xB;
        if ((*(int *)(((int)stk + 0))) != 0) {
            t3 = 0xC;
        }
        FUN_0c03744a(((((struct oC4_int *)(t0))->v)), 0x0, t3, t2);
        FUN_0c03744a(((((struct oC8_int *)(t0))->v)), 0x0, 0xA, (*(int *)0xC4B410C));
        t10 = *(int *)0xC4B410C;
        if ((int)a5 > (int)0xF423F) {
            FUN_0c03744a(((((struct oCC_int *)(t0))->v)), 0x0, 0x9F, t10);
        } else {
            FUN_0c03744a(((((struct oCC_int *)(t0))->v)), 0x0, 0x9E, t10);
            if ((int)a5 < (int)0x3E8) {
                *(unsigned char *)((((((struct oCC_int *)(t0))->v)) + 0x0)) = 0x0;
            } else {
                *(unsigned char *)((((((struct oCC_int *)(t0))->v)) + 0x0)) = 0x1;
            }
        }
        t26 = a5;
        if ((int)a5 > (int)0x5F5E0FF) {
            t26 = 0x5F5E0FF;
        }
        t46 = 0x8;
        if ((int)t26 >= (int)0x989680) {
        } else {
            t46 = 0x7;
            if ((int)t26 >= (int)0xF4240) {
            } else {
                t46 = 0x6;
                if ((int)t26 >= (int)0x186A0) {
                } else {
                    t46 = 0x5;
                    if ((int)t26 >= (int)0x2710) {
                    } else {
                        t46 = 0x4;
                        if ((int)t26 >= (int)0x3E8) {
                        } else {
                            t46 = 0x3;
                            if ((int)t26 >= (int)0x64) {
                            } else {
                                t46 = 0x1;
                                if ((int)t26 >= (int)0xA) {
                                    t46 = 0x2;
                                }
                            }
                        }
                    }
                }
            }
        }
        *(unsigned int *)(((((int)stk + 0) + 0x8) + 0x1C)) = ((int)((int)t26 / (int)0x989680));
        t51 = (int)((int)t26 % (int)0x989680);
        *(unsigned int *)(((((int)stk + 0) + 0x8) + 0x18)) = ((int)((int)t51 / (int)0xF4240));
        t53 = (int)((int)t51 % (int)0xF4240);
        *(unsigned int *)(((((int)stk + 0) + 0x8) + 0x14)) = ((int)((int)t53 / (int)0x186A0));
        t55 = (int)((int)t53 % (int)0x186A0);
        *(unsigned int *)(((((int)stk + 0) + 0x8) + 0x10)) = ((int)((int)t55 / (int)0x2710));
        t57 = (int)((int)t55 % (int)0x2710);
        *(unsigned int *)(((((int)stk + 0) + 0x8) + 0xC)) = ((int)((int)t57 / (int)0x3E8));
        t59 = (int)((int)t57 % (int)0x3E8);
        *(unsigned int *)(((((int)stk + 0) + 0x8) + 0x8)) = ((int)((int)t59 / (int)0x64));
        t61 = (int)((int)t59 % (int)0x64);
        *(unsigned int *)(((((int)stk + 0) + 0x8) + 0x4)) = ((int)((int)t61 / (int)0xA));
        *(unsigned int *)(((((int)stk + 0) + 0x8) + 0x0)) = ((int)((int)t61 % (int)0xA));
        t64 = 0x0;
        for (;;) {
            FUN_0c03744a((*(int *)((((0xC4 + t0) + (t64 << 2)) + 0xC))), (*(int *)(((((int)stk + 0) + 0x8) + (t64 << 2)))), 0x0, (*(int *)0xC4B410C));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((*(int *)((((0xC4 + t0) + (t64 << 2)) + 0xC))) + 0x6C)) = *(struct mv3 *)(((((t64 << 1) + t64) << 2) + 0xC201908)); }
            t71 = (t64 << 2);
            t73 = ((int)t46 > (int)t64);
            t64 = (t64 + 0x1);
            *(unsigned char *)(((*(int *)(((t71 + (0xC4 + t0)) + 0xC))) + 0x0)) = ((t73) ? 1 : 0);
            if ((int)t64 >= (int)0x8) {
                break;
            }
        }
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC1205C4;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)((*(int *)(((int)stk + 4)))); }
    }
}

int FUN_0c032a48(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;

    t2 = *(signed char *)((a4 + 0x14));
    if (t2 != 0) {
        if (t2 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        t2 = *(signed char *)((a4 + 0x15));
        if (t2 != 0) {
            if (t2 == 1) {
                t3 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t3 - 1);
                t4 = (short)(t3 - 1);
                if ((short)(t3 - 1) == 0) {
                    *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x1;
                    (((struct o8C_float *)(((((struct oC8_int *)(a4))->v))))->v) = 0.0f;
                    *(unsigned short *)((a4 + 0x1C)) = 0xA;
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    t4 = 0x15;
                }
                t3 = t4;
            } else {
                if (t2 == 2) {
                    t4 = (((struct oC8_int *)(a4))->v);
                    (((struct o8C_float *)(t4))->v) = (((((struct o8C_float *)(t4))->v)) + 0.0500000007f);
                    t4 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t4 - 1);
                    t5 = (short)(t4 - 1);
                    if ((short)(t4 - 1) == 0) {
                        *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
                        *(unsigned short *)((a4 + 0x1C)) = 0xA;
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        t5 = 0x15;
                    }
                    t4 = t5;
                } else {
                    if (t2 == 3) {
                        t5 = (((struct oC8_int *)(a4))->v);
                        (((struct o8C_float *)(t5))->v) = (((((struct o8C_float *)(t5))->v)) - 0.0500000007f);
                        t5 = *(short *)((a4 + 0x1C));
                        *(unsigned short *)((a4 + 0x1C)) = (t5 - 1);
                        t6 = (short)(t5 - 1);
                        if ((short)(t5 - 1) == 0) {
                            *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x0;
                            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                            t6 = 0x15;
                        }
                        t5 = t6;
                    } else {
                        t6 = t2;
                        if (t2 == 4) {
                            if (((*(signed char *)0xC5421F8) != 0) && (t0 = *(signed char *)0xC5421F9, t0 == 7)) {
                                t2 = t0;
                            } else {
                                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                                t2 = 0x14;
                            }
                            t6 = t2;
                        }
                        t5 = t6;
                    }
                    t4 = t5;
                }
                t3 = t4;
            }
            t0 = t3;
        } else {
            t2 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t2 - 1);
            if ((short)(t2 - 1) == 0) {
                t2 = (((struct oC4_int *)(a4))->v);
                FUN_0c03744a(t2, 0x0, (*(signed char *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC1A9914) + 0x18))), (*(int *)0xC4B40D0));
                *(unsigned char *)((t2 + 0x0)) = 0x0;
                *(unsigned short *)((t2 + 0x6)) = 0x11F;
                { struct mv3 { int w[3]; }; *(struct mv3 *)((t2 + 0x6C)) = *(struct mv3 *)((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC1A9914)); }
                { struct mv3 { int w[3]; }; *(struct mv3 *)((0x84 + t2)) = *(struct mv3 *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC1A9914) + 0xC)); }
                t2 = (((struct oC8_int *)(a4))->v);
                FUN_0c03744a(t2, 0x1, (*(signed char *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC1A9914) + 0x19))), (*(int *)0xC4B40D0));
                *(unsigned char *)((t2 + 0x0)) = 0x0;
                *(unsigned short *)((t2 + 0x6)) = 0x31F;
                { struct mv3 { int w[3]; }; *(struct mv3 *)((t2 + 0x6C)) = *(struct mv3 *)((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC1A9914)); }
                { struct mv3 { int w[3]; }; *(struct mv3 *)((0x84 + t2)) = *(struct mv3 *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC1A9914) + 0xC)); }
                (((struct o18_float *)(t2))->v) = 0.0f;
                (((struct o1C_float *)(t2))->v) = 0.0f;
                (((struct o20_float *)(t2))->v) = 1.0f;
                t2 = *(signed char *)((a4 + 0x2));
                *(unsigned short *)((a4 + 0x1C)) = ((((t2 << 2) + t2) << 1) + 0x1);
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            }
            t2 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t2 - 1);
            t3 = (short)(t2 - 1);
            if ((short)(t2 - 1) == 0) {
                *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x1;
                (((struct o8C_float *)(((((struct oC8_int *)(a4))->v))))->v) = 0.0f;
                *(unsigned short *)((a4 + 0x1C)) = 0xA;
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                t3 = 0x15;
            }
            t0 = t3;
        }
        return t0;
    }
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct oAC_ushort *)(a4))->v) = 0xF;
    (((struct oA9_uchar *)(a4))->v) = 0x21;
    *(unsigned short *)((a4 + 0x1C)) = 0x1;
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 == 1) {
            t2 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t2 - 1);
            t3 = (short)(t2 - 1);
            if ((short)(t2 - 1) == 0) {
                *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x1;
                (((struct o8C_float *)(((((struct oC8_int *)(a4))->v))))->v) = 0.0f;
                *(unsigned short *)((a4 + 0x1C)) = 0xA;
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                t3 = 0x15;
            }
            t2 = t3;
        } else {
            if (t0 == 2) {
                t3 = (((struct oC8_int *)(a4))->v);
                (((struct o8C_float *)(t3))->v) = (((((struct o8C_float *)(t3))->v)) + 0.0500000007f);
                t3 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t3 - 1);
                t4 = (short)(t3 - 1);
                if ((short)(t3 - 1) == 0) {
                    *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
                    *(unsigned short *)((a4 + 0x1C)) = 0xA;
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    t4 = 0x15;
                }
                t3 = t4;
            } else {
                if (t0 == 3) {
                    t4 = (((struct oC8_int *)(a4))->v);
                    (((struct o8C_float *)(t4))->v) = (((((struct o8C_float *)(t4))->v)) - 0.0500000007f);
                    t4 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t4 - 1);
                    t5 = (short)(t4 - 1);
                    if ((short)(t4 - 1) == 0) {
                        *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x0;
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        t5 = 0x15;
                    }
                    t4 = t5;
                } else {
                    t5 = t0;
                    if (t0 == 4) {
                        if (((*(signed char *)0xC5421F8) != 0) && (t1 = *(signed char *)0xC5421F9, t1 == 7)) {
                            t0 = t1;
                        } else {
                            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                            t0 = 0x14;
                        }
                        t5 = t0;
                    }
                    t4 = t5;
                }
                t3 = t4;
            }
            t2 = t3;
        }
        t0 = t2;
    } else {
        t1 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
        if ((short)(t1 - 1) == 0) {
            t1 = (((struct oC4_int *)(a4))->v);
            FUN_0c03744a(t1, 0x0, (*(signed char *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC1A9914) + 0x18))), (*(int *)0xC4B40D0));
            *(unsigned char *)((t1 + 0x0)) = 0x0;
            *(unsigned short *)((t1 + 0x6)) = 0x11F;
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x6C)) = *(struct mv3 *)((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC1A9914)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((0x84 + t1)) = *(struct mv3 *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC1A9914) + 0xC)); }
            t1 = (((struct oC8_int *)(a4))->v);
            FUN_0c03744a(t1, 0x1, (*(signed char *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC1A9914) + 0x19))), (*(int *)0xC4B40D0));
            *(unsigned char *)((t1 + 0x0)) = 0x0;
            *(unsigned short *)((t1 + 0x6)) = 0x31F;
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x6C)) = *(struct mv3 *)((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC1A9914)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((0x84 + t1)) = *(struct mv3 *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC1A9914) + 0xC)); }
            (((struct o18_float *)(t1))->v) = 0.0f;
            (((struct o1C_float *)(t1))->v) = 0.0f;
            (((struct o20_float *)(t1))->v) = 1.0f;
            t1 = *(signed char *)((a4 + 0x2));
            *(unsigned short *)((a4 + 0x1C)) = ((((t1 << 2) + t1) << 1) + 0x1);
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        }
        t1 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
        t2 = (short)(t1 - 1);
        if ((short)(t1 - 1) == 0) {
            *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x1;
            (((struct o8C_float *)(((((struct oC8_int *)(a4))->v))))->v) = 0.0f;
            *(unsigned short *)((a4 + 0x1C)) = 0xA;
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            t2 = 0x15;
        }
        t0 = t2;
    }
    return t0;
}

int FUN_0c0f1688(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        t0 = *(signed char *)((a4 + 0x41D));
        if ((unsigned int)t0 >= (unsigned int)0xC) {
            return t0;
        }
        switch ((t0 << 1)) {
            case 0:
            {
                return ((int (*)(int, int, int, int))(FUN_0c0d409c))(a4, a5, a6, a7);
            }
            case 2:
            {
                t0 = *(signed char *)((a4 + 0x2));
                return FUN_0c0d4122(a4, (((t0 << 2) << 2) + 0xC1CD624), (*(int *)(((((t0 << 2) << 2) + 0xC1CD624) + 0xC))));
            }
            case 4:
            {
                return ((int (*)(int, int, int))(FUN_0c0c4b76))(a4, a5, a6);
            }
            case 6:
            {
                return ((int (*)(int, int, int))(FUN_0c0c4bcc))(a4, a5, a6);
            }
            case 8:
            {
                return ((int (*)(int, int, int))(FUN_0c0c4c1c))(a4, a5, a6);
            }
            case 10:
            {
                return ((int (*)(int, int, int))(FUN_0c0c5024))(a4, a5, a6);
            }
            case 12:
            {
                return ((int (*)(int, int, int))(FUN_0c0c52c4))(a4, a5, a6);
            }
            case 14:
            {
                return ((int (*)(int, int, int, int))(FUN_0c0c8c08))(a4, a5, a6, a7);
            }
            case 16:
            {
                return ((int (*)(int, int, int, int))(FUN_0c0c8c36))(a4, a5, a6, a7);
            }
            case 18:
            case 20:
            {
                return FUN_0c0f15e0(a4);
            }
            default:
            {
                return FUN_0c0f1640(a4);
            }
        }
    }
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct o41C_uchar *)(a4))->v) = 0xC3;
    (((struct o424_uchar *)(a4))->v) = 0x4;
    FUN_0c0c2d56(a4, 0x0, (*(signed char *)((a4 + 0x1))));
    *(unsigned short *)((a4 + 0x1C)) = 0x0;
    FUN_0c0c2ab6(a4, (*(signed char *)(((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738B8) + 0x12))));
    FUN_0c0c212c(a4);
    (((struct o420_ushort *)(a4))->v) = (*(short *)(((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738B8) + 0x1A)));
    (((struct o160_float *)(a4))->v) = (float)(*(short *)(((0xC2738B8 + ((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34)) + 0x1A)));
    (((struct o423_uchar *)(a4))->v) = 0xFFFFFFFF;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)(((((*(signed char *)((a4 + 0x2))) << 2) << 2) + 0xC1CD624)); }
    *(unsigned int *)((a4 + 0x38)) = (*(int *)((((((*(signed char *)((a4 + 0x2))) << 2) << 2) + 0xC1CD624) + 0xC)));
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct o126_uchar *)(a4))->v) = 0x0;
    (((struct oAA_uchar *)(a4))->v) = 0x1;
    (((struct oAB_uchar *)(a4))->v) = 0x2;
    t0 = *(signed char *)((a4 + 0x41D));
    if ((unsigned int)t0 >= (unsigned int)0xC) {
        return t0;
    }
    switch ((t0 << 1)) {
        case 0:
        {
            return ((int (*)(int))(FUN_0c0d409c))(a4);
        }
        case 2:
        {
            t0 = *(signed char *)((a4 + 0x2));
            return FUN_0c0d4122(a4, (((t0 << 2) << 2) + 0xC1CD624), (*(int *)(((((t0 << 2) << 2) + 0xC1CD624) + 0xC))));
        }
        case 4:
        {
            return ((int (*)(int))(FUN_0c0c4b76))(a4);
        }
        case 6:
        {
            return ((int (*)(int))(FUN_0c0c4bcc))(a4);
        }
        case 8:
        {
            return ((int (*)(int))(FUN_0c0c4c1c))(a4);
        }
        case 10:
        {
            return ((int (*)(int))(FUN_0c0c5024))(a4);
        }
        case 12:
        {
            return ((int (*)(int))(FUN_0c0c52c4))(a4);
        }
        case 14:
        {
            return ((int (*)(int))(FUN_0c0c8c08))(a4);
        }
        case 16:
        {
            return ((int (*)(int))(FUN_0c0c8c36))(a4);
        }
        case 18:
        case 20:
        {
            return FUN_0c0f15e0(a4);
        }
        default:
        {
            return FUN_0c0f1640(a4);
        }
    }
}

int FUN_0c14a58a(int a4, int a5, int a6, int a7)
{
    int stk[5];

    register int R1;
    register int R2;
    register int R3;
    register float F2;
    register float F3;
    register float F4;
    register float F5;
    register float F6;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    v0_6 = a4;
    v0_4 = a5;
    v0_1 = a6;
    v0_2 = a7;
    v0_5 = *(signed char *)((v0_6 + 0x14));
    v0_3 = (v0_5);
    v0_0 = (v0_6);
    v0_6 = (0x0);
    if ((v0_5 == 0)) goto L_C14A5B4;
    if ((v0_3 == 1)) goto L_C14A5C0;
    L_C14A796:;
    return v0_3;
    L_C14A5C0:;
    if (!(((*(signed char *)(((*(int *)((v0_0 + 0x10))) + 0x1B))) != 0))) goto L_C14A790;
    v0_7 = *(signed char *)((v0_0 + 0x15));
    v0_3 = (v0_7);
    v0_4 = (0xC058204);
    v0_5 = (0x3);
    v0_4 = (0xC202A68);
    v0_8 = (0xC17C130);
    if ((v0_7 == 0)) goto L_C14A618;
    if ((v0_3 == 1)) goto L_C14A628;
    if ((v0_3 == 2)) goto L_C14A642;
    v0_3 = (0x22);
    if ((((((struct o22_short *)(v0_0))->v)) == 0)) goto L_C14A6E6;
    v0_7 = *(short *)((v0_0 + v0_3));
    *(unsigned short *)((v0_0 + v0_3)) = (v0_7 - 1);
    if (((int)(short)(v0_7 - 1) > 0)) goto L_C14A6E6;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_0 + 0x28)) = *(struct mv3 *)(0xC202A5C); }
    goto L_C14A6E6;
    L_C14A790:;
    v0_3 = ((FUN_0c03f346(v0_0, v0_4, v0_1, v0_2)));
    goto L_C14A796;
    L_C14A6E6:;
    *(unsigned int *)(((int)stk + 4)) = v0_6;
    v0_6 = (0x0);
    v0_8 = ((0x0 + v0_4));
    w0_0 = (0.0f);
    L_C14A764:;
    if (((unsigned int)(*(int *)(((int)stk + 4))) < (unsigned int)v0_5)) goto L_C14A708;
    v0_3 = (((struct oC4_int *)(v0_0))->v);
    (((struct o80_uint *)(v0_3))->v) = (((((struct o80_int *)(v0_3))->v)) + 0x444);
    v0_3 = (((struct oC8_int *)(v0_0))->v);
    (((struct o80_uint *)(v0_3))->v) = (((((struct o80_int *)(v0_3))->v)) - 0x444);
    v0_5 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_5 - 1);
    v0_3 = ((short)(v0_5 - 1));
    if (((int)(short)(v0_5 - 1) > 0)) goto L_C14A796;
    goto L_C14A790;
    L_C14A708:;
    v0_7 = *(int *)((((0xC4 + v0_0) + v0_6) + 0x0));
    *(unsigned int *)(((int)stk + 0)) = v0_8;
    nlSubVector3op((((int)stk + 0) + 0x8), 0xC202AA4, (v0_8 + 0x4));
    w0_1 = (((struct o10_float *)((*(int *)(((int)stk + 0)))))->v);
    math_vec3_mul_xyz((((int)stk + 0) + 0x8), w0_1, w0_1, w0_1);
    nlAddVector3op((0x84 + v0_7), (0x84 + v0_7), (((int)stk + 0) + 0x8));
    w0_2 = (((struct o18_float *)(v0_7))->v);
    (((struct o18_float *)(v0_7))->v) = (w0_2 - w0_1);
    v0_3 = (0x18);
    v0_7 = (v0_7);
    if ((!(0.0f > (w0_2 - w0_1)))) goto L_C14A750;
    *(float *)((v0_7 + v0_3)) = w0_0;
    L_C14A750:;
    w0_1 = *(float *)((v0_7 + v0_3));
    (((struct o20_float *)(v0_7))->v) = w0_1;
    (((struct o1C_float *)(v0_7))->v) = w0_1;
    *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x1);
    v0_6 = ((v0_6 + 0x4));
    v0_8 = ((v0_8 + 0x14));
    goto L_C14A764;
    L_C14A642:;
    *(unsigned int *)(((int)stk + 0)) = v0_6;
    v0_3 = (0xC14A6FC);
    v0_6 = (0x0);
    v0_7 = ((0x0 + v0_4));
    w0_0 = (0.25f);
    L_C14A68C:;
    if (((unsigned int)(*(int *)(((int)stk + 0))) < (unsigned int)v0_5)) goto L_C14A650;
    v0_1 = (((struct oC4_int *)(v0_0))->v);
    (((struct o80_uint *)(v0_1))->v) = (((((struct o80_int *)(v0_1))->v)) + 0x444);
    v0_1 = (((struct oC8_int *)(v0_0))->v);
    (((struct o80_uint *)(v0_1))->v) = (((((struct o80_int *)(v0_1))->v)) - 0x444);
    v0_1 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_1 - 1);
    v0_3 = ((short)(v0_1 - 1));
    if (((int)(short)(v0_1 - 1) > 0)) goto L_C14A796;
    v0_3 = (0xA);
    L_C14A6BA:;
    *(unsigned short *)((v0_0 + 0x1C)) = v0_3;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    v0_3 = (0x15);
    goto L_C14A796;
    L_C14A650:;
    v0_1 = *(int *)((((0xC4 + v0_0) + v0_6) + 0x0));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x8)) = *(struct mv3 *)((v0_7 + 0x4)); }
    math_vec3_mul_xyz((((int)stk + 0) + 0x8), w0_0, w0_0, w0_0);
    v0_1 = nlAddVector3op((0x84 + v0_1), (0x84 + v0_1), (((int)stk + 0) + 0x8));
    *(unsigned int *)(((int)stk + 0)) = ((*(int *)(((int)stk + 0))) + 0x1);
    v0_3 = (v0_1);
    v0_6 = ((v0_6 + 0x4));
    v0_7 = ((v0_7 + 0x14));
    goto L_C14A68C;
    L_C14A628:;
    v0_1 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_1 - 1);
    v0_3 = ((short)(v0_1 - 1));
    if (((int)(short)(v0_1 - 1) <= 0)) goto L_C14A638;
    goto L_C14A796;
    L_C14A638:;
    (((struct oA8_uchar *)(v0_0))->v) = 0x1;
    v0_3 = (0x4);
    goto L_C14A6BA;
    L_C14A618:;
    (((struct oA8_uchar *)(v0_0))->v) = v0_6;
    *(unsigned short *)((v0_0 + 0x1C)) = 0x9;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    goto L_C14A628;
    L_C14A5B4:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    (((struct o15_uchar *)(v0_0))->v) = v0_6;
    goto L_C14A5C0;
}

int FUN_0c12e584(int a4, int a5, int a6, int a7)
{
    int stk[5];
    register int t0;
    register int t49;
    int t3;
    register int t5;
    register int t8;
    register int t10;
    register int t17;
    register int t19;
    register int t25;
    register int t27;
    register int t33;
    register int t35;
    register int t41;
    register int t43;

    *(unsigned char *)(((int)stk + 16)) = a5;
    t0 = FUN_0c03f444(0x1, 0x0, 0x5, a7);
    t49 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned int *)((t0 + 0x4)) = 0xC12E7D0;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)((a4 + 0x28)); }
        (((struct o4C_float *)(t0))->v) = 0.0f;
        (((struct o50_float *)(t0))->v) = -40.0f;
        (((struct o54_float *)(t0))->v) = 0.0f;
        (((struct o58_float *)(t0))->v) = 0.0f;
        (((struct o5C_float *)(t0))->v) = -1.0f;
        (((struct o60_float *)(t0))->v) = 0.0f;
        (((struct o48_float *)(t0))->v) = 1.0f;
        (((struct o44_float *)(t0))->v) = 1.0f;
        (((struct o40_float *)(t0))->v) = 1.0f;
        *(unsigned int *)((t0 + 0x34)) = 0x4000;
        *(unsigned int *)((t0 + 0x38)) = 0x0;
        *(unsigned int *)((t0 + 0x3C)) = 0x0;
        *(unsigned int *)((t0 + 0x10)) = a4;
        (((struct o1B_uchar *)(t0))->v) = (*(signed char *)(((int)stk + 16)));
        t3 = *(signed char *)(((int)stk + 16));
        t5 = 0x60;
        if (((int)t3 >= (int)0x5) && ((0x1 & t3) == 0)) {
            t5 = 0x61;
        }
        FUN_0c07e2f4(t0, t5);
        *(int *)((int)stk + 12) = 0x0;
        *(int *)((int)stk + 8) = 0x0;
        *(int *)((int)stk + 4) = 0x0;
        *(int *)((int)stk + 0) = 0x100;
        FUN_0c064d24(t0, 0x1, 0x40, 0x0, 0x100, 0x0, 0x0, 0x0);
        (((struct oA8_uchar *)(t0))->v) = 0x0;
        (((struct oAC_ushort *)(t0))->v) = 0x1F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        t8 = (((struct oC4_int *)(t0))->v);
        t10 = *(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)));
        *(unsigned int *)(((int)stk + 16)) = 0xC201D54;
        FUN_0c03744a(t8, (*(int *)(((*(int *)(((int)stk + 16))) + 0x0))), ((((struct o0_int *)0xC201D58)->v)), t10);
        *(unsigned short *)((t8 + 0x6)) = 0x41F;
        (((struct o14_float *)(t8))->v) = 1.0f;
        (((struct o8C_float *)(t8))->v) = 1.0f;
        *(unsigned short *)((t0 + 0x1C)) = ((unsigned char)(*(signed char *)((0xC2A1264 + (*(signed char *)((t0 + 0x1B)))))) + 0xA);
        t17 = (((struct oC8_int *)(t0))->v);
        t19 = *(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)));
        *(unsigned int *)(((int)stk + 16)) = 0xC201D5C;
        FUN_0c03744a(t17, (*(int *)(((*(int *)(((int)stk + 16))) + 0x0))), ((((struct o8_int *)0xC201D58)->v)), t19);
        *(unsigned short *)((t17 + 0x6)) = 0x41F;
        (((struct o14_float *)(t17))->v) = 1.0f;
        (((struct o74_float *)(t17))->v) = (((((struct o74_float *)(t17))->v)) + 200.0f);
        (((struct o8C_float *)(t17))->v) = 0.0f;
        (((struct o88_float *)(t17))->v) = 0.0f;
        (((struct o84_float *)(t17))->v) = 0.0f;
        t25 = (((struct oCC_int *)(t0))->v);
        t27 = *(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)));
        *(unsigned int *)(((int)stk + 16)) = 0xC201D64;
        FUN_0c03744a(t25, (*(int *)(((*(int *)(((int)stk + 16))) + 0x0))), ((((struct o10_int *)0xC201D58)->v)), t27);
        *(unsigned short *)((t25 + 0x6)) = 0x41F;
        (((struct o14_float *)(t25))->v) = 1.0f;
        (((struct o74_float *)(t25))->v) = (((((struct o74_float *)(t25))->v)) + 50.0f);
        (((struct o8C_float *)(t25))->v) = 0.0f;
        (((struct o88_float *)(t25))->v) = 0.0f;
        (((struct o84_float *)(t25))->v) = 0.0f;
        *(unsigned short *)((t0 + 0x1E)) = 0xA;
        (((struct o20_ushort *)(t0))->v) = 0x0;
        t33 = (((struct oD0_int *)(t0))->v);
        t35 = *(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)));
        *(unsigned int *)(((int)stk + 16)) = 0xC201D6C;
        FUN_0c03744a(t33, (*(int *)(((*(int *)(((int)stk + 16))) + 0x0))), ((((struct o18_int *)0xC201D58)->v)), t35);
        *(unsigned short *)((t33 + 0x6)) = 0x41F;
        (((struct o14_float *)(t33))->v) = 1.0f;
        (((struct o74_float *)(t33))->v) = (((((struct o74_float *)(t33))->v)) - 100.0f);
        (((struct o8C_float *)(t33))->v) = 1.0f;
        (((struct o88_float *)(t33))->v) = 1.0f;
        (((struct o84_float *)(t33))->v) = 1.0f;
        t41 = (((struct oD4_int *)(t0))->v);
        t43 = *(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)));
        *(unsigned int *)(((int)stk + 16)) = 0xC201D74;
        FUN_0c03744a(t41, (*(int *)(((*(int *)(((int)stk + 16))) + 0x0))), ((((struct o20_int *)0xC201D58)->v)), t43);
        *(unsigned short *)((t41 + 0x6)) = 0x1F;
        (((struct o74_float *)(t41))->v) = (((((struct o74_float *)(t41))->v)) - 0.0f);
        (((struct o8C_float *)(t41))->v) = 1.0f;
        (((struct o88_float *)(t41))->v) = 1.0f;
        (((struct o84_float *)(t41))->v) = 1.0f;
        t49 = 0x84;
    }
    return t49;
}

float FUN_0c1491e4(int a4, int a5, int a6, int a7)
{
    int stk[4];

    register int R1;
    register int R2;
    register int R3;
    register float F0;
    register float F3;
    register float F12;
    register float F13;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    v0_4 = a4;
    v0_0 = a5;
    v0_6 = a6;
    v0_5 = a7;
    v0_7 = *(signed char *)((v0_4 + 0x16));
    v0_3 = (v0_7);
    v0_2 = (0x14);
    v0_1 = (0xC2029D8);
    v0_0 = (v0_4);
    w0_0 = (1.5f);
    if ((v0_7 == 0)) goto L_C14922C;
    if ((v0_3 == 1)) goto L_C149262;
    if ((v0_3 == 2)) goto L_C1492B2;
    if ((v0_3 != 3)) goto L_C149216;
    if (((int)(*(short *)((v0_0 + 0x1E))) <= 0)) goto L_C1493A2;
    *(unsigned short *)((v0_0 + 0x1E)) = ((*(short *)((v0_0 + 0x1E))) - 1);
    v0_2 = *(short *)(((0x1E + v0_0) + 0x0));
    v0_3 = *(signed char *)((v0_0 + 0x2));
    w0_1 = (((struct o4_float *)(((((v0_3 << 1) + v0_3) << 2) + v0_1)))->v);
    *(unsigned short *)(((int)stk + 0)) = v0_2;
    w0_2 = ((float)v0_2 * (math_sin_angle16(((*(short *)(((int)stk + 0))) << 13))));
    w0_1 = w0_1;
    w0_1 = w0_1 + w0_0 * w0_2;
    (((struct o2C_float *)(v0_0))->v) = w0_1;
    F0 = (w0_0);
    L_C1493A2:;
    v0_2 = (((struct oCC_int *)(v0_0))->v);
    (((struct o78_uint *)(v0_2))->v) = (((((struct o78_int *)(v0_2))->v)) - 0x111);
    (((struct o78_uint *)((*(int *)(((0xC4 + v0_0) + 0x4)))))->v) = ((((struct o78_int *)((*(int *)(((0xC4 + v0_0) + 0x8)))))->v));
    v0_2 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_2 - 1);
    v0_3 = ((short)(v0_2 - 1));
    v0_4 = ((0xC4 + v0_0));
    if (((int)(short)(v0_2 - 1) > 0)) goto L_C1493EC;
    v0_2 = *(signed char *)((v0_0 + 0x2));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_0 + 0x28)) = *(struct mv3 *)((v0_1 + (((v0_2 << 1) + v0_2) << 2))); }
    v0_3 = ((FUN_0c148d64(v0_0, 0x3, 0x0)));
    L_C1493EC:;
    return F0;
    L_C149216:;
    goto L_C1493EC;
    L_C1492B2:;
    v0_3 = (((struct oCC_int *)(v0_0))->v);
    (((struct o78_uint *)(v0_3))->v) = (((((struct o78_int *)(v0_3))->v)) + 0x444);
    (((struct o78_uint *)((*(int *)(((0xC4 + v0_0) + 0x4)))))->v) = ((((struct o78_int *)((*(int *)(((0xC4 + v0_0) + 0x8)))))->v));
    v0_4 = ((0xC4 + v0_0));
    if (((*(short *)((v0_0 + 0x1C))) != 5)) goto L_C1492E8;
    FUN_0c1453c4(v0_0, (*(short *)((v0_0 + 0x1E))), 0x1);
    *(unsigned short *)((v0_0 + 0x1E)) = v0_2;
    L_C1492E8:;
    if (((int)(*(short *)((v0_0 + 0x1C))) > (int)0x5)) goto L_C149324;
    *(unsigned short *)((v0_0 + 0x1E)) = ((*(short *)((v0_0 + 0x1E))) - 1);
    v0_4 = *(signed char *)((v0_0 + 0x2));
    v0_3 = *(short *)((v0_0 + 0x1E));
    *(unsigned short *)(((int)stk + 0)) = v0_3;
    w0_1 = (((struct o4_float *)((v0_1 + (((v0_4 << 1) + v0_4) << 2))))->v);
    w0_2 = ((float)v0_3 * (math_sin_angle16(((*(short *)(((int)stk + 0))) << 13))));
    w0_1 = w0_1;
    w0_1 = w0_1 + w0_0 * w0_2;
    (((struct o2C_float *)(v0_0))->v) = w0_1;
    F0 = (w0_0);
    L_C149324:;
    v0_1 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_1 - 1);
    v0_3 = ((short)(v0_1 - 1));
    if (((int)(short)(v0_1 - 1) > 0)) goto L_C1493EC;
    v0_3 = (v0_2);
    L_C149334:;
    *(unsigned short *)((v0_0 + 0x1C)) = v0_3;
    (((struct o16_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x16))) + 0x1);
    v0_3 = (0x16);
    goto L_C1493EC;
    L_C149262:;
    v0_1 = (((struct oCC_int *)(v0_0))->v);
    (((struct o78_uint *)(v0_1))->v) = (((((struct o78_int *)(v0_1))->v)) - 0x111);
    (((struct o78_uint *)((*(int *)(((0xC4 + v0_0) + 0x4)))))->v) = ((((struct o78_int *)((*(int *)(((0xC4 + v0_0) + 0x8)))))->v));
    v0_4 = ((0xC4 + v0_0));
    if (((int)(*(short *)((v0_0 + 0x1C))) > (int)0x4)) goto L_C14929E;
    if ((((((struct o20_short *)(v0_0))->v)) != 0)) goto L_C14929E;
    v0_1 = ((int (*)(int, int, int, int))(FUN_0c143a30))(v0_0, 0x1, v0_6, v0_5);
    (((struct o20_ushort *)(v0_0))->v) = 0x1;
    L_C14929E:;
    v0_1 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_1 - 1);
    v0_3 = ((short)(v0_1 - 1));
    if (((int)(short)(v0_1 - 1) <= 0)) goto L_C1492AE;
    goto L_C1493EC;
    L_C1492AE:;
    v0_3 = (0xA);
    goto L_C149334;
    L_C14922C:;
    *(unsigned short *)((v0_0 + 0x1C)) = v0_2;
    (((struct o20_ushort *)(v0_0))->v) = 0x0;
    math_mat_get_translate((v0_0 + 0x64), (((int)stk + 0) + 0x4));
    FUN_0c059e9a((((short)(*(signed char *)((v0_0 + 0x1))) * (short)0x3938) + 0xC532498), 0x9, (((int)stk + 0) + 0x4));
    (((struct o16_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x16))) + 0x1);
    goto L_C149262;
}

int FUN_0c152ad4(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register float u0;
    register float u1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                return FUN_0c03f346(a4, a5, a6, a7);
            }
            if (t0 == 3) {
                return FUN_0c03f346(a4, a5, a6, a7);
            }
            return t0;
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0x1;
        *(unsigned short *)((a4 + 0x1E)) = 0x0;
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    t1 = (short)(t0 - 1);
    if ((short)(t0 - 1) != 0) {
    } else {
        *(unsigned short *)((a4 + 0x1C)) = 0x1;
        t0 = *(short *)((a4 + 0x1E));
        t2 = *(int *)((((t0 << 2) + (0xC4 + a4)) + 0x0));
        t3 = t0;
        if ((*(signed char *)((t2 + 0x0))) == 0) {
            *(unsigned char *)((t2 + 0x0)) = 0x1;
            (((struct o14_float *)(t2))->v) = 1.0f;
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t2 + 0x6C)) = *(struct mv3 *)(0xC2033DC); }
            t0 = nlRand();
            t4 = ((~(((~t0) + 0x1) & 0x1F)) + 0x1);
            if ((int)t0 >= 0) {
                t4 = (t0 & 0x1F);
            }
            (((struct o7C_uint *)(t2))->v) = (((t4 << 8) << 2) << 1);
            t0 = nlRand();
            t4 = ((~(((~t0) + 0x1) & 0xF)) + 0x1);
            if ((int)t0 >= 0) {
                t4 = (t0 & 0xF);
            }
            (((struct o8C_float *)(t2))->v) = ((float)(t4 + 0x5) / 10.0f);
            (((struct o88_float *)(t2))->v) = ((float)(t4 + 0x5) / 10.0f);
            (((struct o84_float *)(t2))->v) = ((float)(t4 + 0x5) / 10.0f);
            (((struct o94_float *)(t2))->v) = ((float)((int)((int)(nlRand()) % (int)0xA)) + 14.0f);
            (((struct oA0_uint *)(t2))->v) = 0xFFFFFFFF;
            t0 = (int)((int)(nlRand()) % (int)0x6);
            (((struct o90_float *)(t2))->v) = ((math_cos_angle16(((-((((struct o7C_int *)(t2))->v))) + 0x14000))) * (float)(t0 + 0x2));
            (((struct o98_float *)(t2))->v) = ((math_sin_angle16(((-((((struct o7C_int *)(t2))->v))) + 0x14000))) * (float)(t0 + 0x2));
            *(unsigned short *)((a4 + 0x1C)) = 0x6;
            t0 = (int)((int)((*(short *)((a4 + 0x1E))) + 0x1) % (int)0xA);
            *(unsigned short *)((a4 + 0x1E)) = t0;
            t3 = t0;
        }
        t1 = t3;
    }
    t0 = t1;
    t1 = 0x0;
    for (;;) {
        t2 = *(int *)((((0xC4 + a4) + t1) + 0x0));
        if ((*(signed char *)((t2 + 0x0))) != 0) {
            t0 = 0x6C;
            t3 = t0;
            t3 = (t3 + 0x24);
            t3 = (t3 + t2);
            u0 = (*(float *)((t2 + t0)));
            u1 = (*(float *)((t3 + 0x0)));
            u0 = (u0 + u1);
            *(float *)((t2 + t0)) = u0;
            t0 = 0x74;
            t3 = t0;
            t3 = (t3 + 0x24);
            t3 = (t3 + t2);
            u0 = (*(float *)((t2 + t0)));
            u1 = (*(float *)((t3 + 0x0)));
            u0 = (u0 + u1);
            *(float *)((t2 + t0)) = u0;
            t0 = 0x70;
            t3 = t0;
            t3 = (t3 + 0x24);
            t3 = (t3 + t2);
            u0 = (*(float *)((t2 + t0)));
            u1 = (*(float *)((t3 + 0x0)));
            u0 = (u0 + u1);
            *(float *)((t2 + t0)) = u0;
            t0 = (t0 + 0x24);
            u0 = (*(float *)((t2 + t0)));
            u1 = (float)((((struct oA0_int *)(t2))->v));
            u0 = (u0 + u1);
            *(float *)((t2 + t0)) = u0;
            t0 = (t0 + 0x1C);
            u1 = (*(float *)(((*(int *)((a4 + 0x10))) + t0)));
            t0 = 0x18;
            *(float *)((t2 + t0)) = u1;
            t0 = 0xB0;
            u1 = (*(float *)(((*(int *)((a4 + 0x10))) + t0)));
            t0 = 0x1C;
            *(float *)((t2 + t0)) = u1;
            t0 = 0xB0;
            u1 = (*(float *)(((*(int *)((a4 + 0x10))) + t0)));
            t0 = 0x20;
            *(float *)((t2 + t0)) = u1;
            t0 = 0x70;
            u0 = (*(float *)((t2 + t0)));
            u1 = 0.0f;
            if (u1 > u0) {
                *(unsigned char *)((t2 + 0x0)) = 0x0;
            }
        }
        t1 = (t1 + 0x4);
        if ((unsigned int)t1 >= (unsigned int)0x28) {
            break;
        }
    }
    if ((int)(*(signed char *)(((*(int *)((a4 + 0x10))) + 0x14))) >= (int)0x2) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    return 0x14;
}

int FUN_0c11a2a8(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;
    register float u2;

    if ((*(signed char *)((0x14 + (*(int *)((a4 + 0x10)))))) == 80) {
        (((struct o14_uchar *)(a4))->v) = 0x63;
    }
    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 == 1) {
            t1 = *(short *)((a4 + 0x1C));
            if (((int)t1 >= 0) && ((int)t1 <= (int)0xA)) {
                FUN_0c058a6e((0xB0 + a4), 0xC2A0CA0, 0xC2A0C90, (*(short *)((a4 + 0x1C))), 0xA, 0x0);
            }
            t1 = *(short *)((a4 + 0x1C));
            if (((int)t1 >= (int)0xA) && ((int)t1 <= (int)0x14)) {
                FUN_0c058a6e((0xB0 + a4), 0xC2A0C90, 0xC2A0CA0, (*(short *)((a4 + 0x1C))), 0x14, 0xA);
            }
            t1 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t1 + 0x1);
            t2 = (short)(t1 + 0x1);
            if ((int)(short)(t1 + 0x1) > (int)0x14) {
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
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    FUN_0c03744a(((((struct oC4_int *)(a4))->v)), (*(signed char *)((a4 + 0x2))), 0x23, (*(int *)0xC4B410C));
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct oAC_ushort *)(a4))->v) = 0x20F;
    (((struct oA9_uchar *)(a4))->v) = 0x21;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)(((*(int *)((a4 + 0x10))) + 0x28)); }
    t0 = nlRand();
    t1 = ((~(((~t0) + 0x1) & 0xF)) + 0x1);
    if ((int)t0 >= 0) {
        t1 = (t0 & 0xF);
    }
    t0 = nlRand();
    t2 = ((~(((~t0) + 0x1) & 0xF)) + 0x1);
    if ((int)t0 >= 0) {
        t2 = (t0 & 0xF);
    }
    u0 = (((float)t2 * 360.0f) / 16.0f);
    u1 = ((u0 * 65536.0f) / 360.0f);
    u0 = (((float)t1 * 50.0f) / 16.0f);
    u2 = ((((struct o28_float *)(a4))->v));
    u2 = u2 + u0 * (math_cos_angle16(((int)(u1 + 0.5f) & 0xFFFF)));
    (((struct o28_float *)(a4))->v) = u2;
    u0 = (((float)t1 * 50.0f) / 16.0f);
    u2 = ((((struct o2C_float *)(a4))->v));
    u2 = u2 + u0 * (math_sin_angle16(((int)(u1 + 0.5f) & 0xFFFF)));
    (((struct o2C_float *)(a4))->v) = u2;
    t0 = nlRand();
    t2 = ((~(((~t0) + 0x1) & 0xF)) + 0x1);
    if ((int)t0 >= 0) {
        t2 = (t0 & 0xF);
    }
    u0 = (((float)t2 * 360.0f) / 16.0f);
    u1 = math_sin_angle16((0xFFFF & (int)((((u0 * 65536.0f) / 360.0f)) + (*(float *)0xC11A4F4))));
    u0 = (((float)t1 * 50.0f) / 16.0f);
    u2 = ((((struct o30_float *)(a4))->v));
    u2 = u2 + u0 * u1;
    (((struct o30_float *)(a4))->v) = u2;
    t0 = *(short *)((a4 + 0x1C));
    if (((int)t0 >= 0) && ((int)t0 <= (int)0xA)) {
        FUN_0c058a6e((0xB0 + a4), 0xC2A0CA0, 0xC2A0C90, (*(short *)((a4 + 0x1C))), 0xA, 0x0);
    }
    t0 = *(short *)((a4 + 0x1C));
    if (((int)t0 >= (int)0xA) && ((int)t0 <= (int)0x14)) {
        FUN_0c058a6e((0xB0 + a4), 0xC2A0C90, 0xC2A0CA0, (*(short *)((a4 + 0x1C))), 0x14, 0xA);
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
    t1 = (short)(t0 + 0x1);
    if ((int)(short)(t0 + 0x1) > (int)0x14) {
        (((struct o14_uchar *)(a4))->v) = 0x63;
        t1 = 0x14;
    }
    return t1;
}

int FUN_0c167196(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    register int t2;
    register int t3;

    t2 = *(signed char *)((a4 + 0x14));
    if (t2 != 0) {
        if (t2 == 1) {
            if ((int)(*(short *)((a4 + 0x1C))) <= (int)((((struct o0_int *)0xC2A34C4)->v))) {
                FUN_0c0588bc((((((struct oC4_int *)(a4))->v)) + 0x84), 0xC2A34F8, 0xC2A34EC, (*(short *)((a4 + 0x1C))), (((((struct o0_int *)0xC2A34C4)->v))), 0x0);
                FUN_0c0588bc((((((struct oC8_int *)(a4))->v)) + 0x84), 0xC2A3510, 0xC2A3504, (*(short *)((a4 + 0x1C))), (((((struct o0_int *)0xC2A34C4)->v))), 0x0);
            }
            t2 = *(short *)((a4 + 0x1C));
            if (((int)t2 >= (int)((((struct o4_int *)0xC2A34C4)->v))) && (t0 = (((struct o0_int *)0xC2A34C4)->v), (int)t2 <= (int)t0)) {
                FUN_0c058a6e((((((struct oC4_int *)(a4))->v)) + 0x14), 0xC2A34DC, 0xC2A34CC, (*(short *)((a4 + 0x1C))), (((((struct o0_int *)0xC2A34C4)->v))), (((((struct o4_int *)0xC2A34C4)->v))));
                FUN_0c058a6e((((((struct oC8_int *)(a4))->v)) + 0x14), 0xC2A34DC, 0xC2A34CC, (*(short *)((a4 + 0x1C))), (((((struct o0_int *)0xC2A34C4)->v))), (((((struct o4_int *)0xC2A34C4)->v))));
            }
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
            t2 = (short)(t0 + 0x1);
            if ((int)(short)(t0 + 0x1) > (int)((((struct o0_int *)0xC2A34C4)->v))) {
                (((struct o14_uchar *)(a4))->v) = 0x3;
                t2 = 0x14;
            }
            return t2;
        }
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x0, 0x53, (*(int *)0xC4B40CC));
    FUN_0c03744a(((((struct oC8_int *)(a4))->v)), 0x1, 0x53, (*(int *)0xC4B40CC));
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct oAC_ushort *)(a4))->v) = 0xF;
    (((struct oA9_uchar *)(a4))->v) = 0x21;
    *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
    *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x21F;
    t0 = (((struct oC4_int *)(a4))->v);
    t2 = nlRand();
    t3 = ((~(((~t2) + 0x1) & 0x3)) + 0x1);
    if ((int)t2 >= 0) {
        t3 = (t2 & 0x3);
    }
    t2 = (t3 * 0x1E);
    if ((int)(t3 * 0x1E) < 0) {
        t2 = ((t3 * 0x1E) + 0x3);
    }
    (((struct o80_uint *)(t0))->v) = ((int)(((((float)((t2 >> 1) >> 1) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF);
    { struct mv4 { int w[4]; }; *(struct mv4 *)((((((struct oC4_int *)(a4))->v)) + 0x14)) = *(struct mv4 *)(0xC2A34CC); }
    *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x1;
    *(unsigned short *)((((((struct oC8_int *)(a4))->v)) + 0x6)) = 0x21F;
    { struct mv4 { int w[4]; }; *(struct mv4 *)((((((struct oC8_int *)(a4))->v)) + 0x14)) = *(struct mv4 *)(0xC2A34CC); }
    if ((int)(*(short *)((a4 + 0x1C))) <= (int)((((struct o0_int *)0xC2A34C4)->v))) {
        FUN_0c0588bc((((((struct oC4_int *)(a4))->v)) + 0x84), 0xC2A34F8, 0xC2A34EC, (*(short *)((a4 + 0x1C))), (((((struct o0_int *)0xC2A34C4)->v))), 0x0);
        FUN_0c0588bc((((((struct oC8_int *)(a4))->v)) + 0x84), 0xC2A3510, 0xC2A3504, (*(short *)((a4 + 0x1C))), (((((struct o0_int *)0xC2A34C4)->v))), 0x0);
    }
    t0 = *(short *)((a4 + 0x1C));
    if (((int)t0 >= (int)((((struct o4_int *)0xC2A34C4)->v))) && (t1 = (((struct o0_int *)0xC2A34C4)->v), (int)t0 <= (int)t1)) {
        FUN_0c058a6e((((((struct oC4_int *)(a4))->v)) + 0x14), 0xC2A34DC, 0xC2A34CC, (*(short *)((a4 + 0x1C))), (((((struct o0_int *)0xC2A34C4)->v))), (((((struct o4_int *)0xC2A34C4)->v))));
        FUN_0c058a6e((((((struct oC8_int *)(a4))->v)) + 0x14), 0xC2A34DC, 0xC2A34CC, (*(short *)((a4 + 0x1C))), (((((struct o0_int *)0xC2A34C4)->v))), (((((struct o4_int *)0xC2A34C4)->v))));
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
    t1 = (short)(t0 + 0x1);
    if ((int)(short)(t0 + 0x1) > (int)((((struct o0_int *)0xC2A34C4)->v))) {
        (((struct o14_uchar *)(a4))->v) = 0x3;
        t1 = 0x14;
    }
    return t1;
}

int FUN_0c16b38e(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t0;
    register int t1;
    register int t7;
    register int t16;
    register float u26;
    register int t28;
    register int t58;
    register int t71;
    register int t86;
    register int t88;
    register int t93;
    register float u110;
    register int t111;
    register int t115;
    register int t120;
    register int t8;
    register int t9;
    register int t10;
    register int t106;

    t0 = *(signed char *)((a4 + 0x1));
    t1 = *(signed char *)((a4 + 0x14));
    if (t1 != 0) {
        if (t1 != 1) {
            if (t1 == 2) {
                if ((*(signed char *)(((0x41C + a4) + 0x3))) != 0) {
                    t7 = *(int *)((a4 + 0x10));
                    if ((t7 != 0) && ((t8 = *(signed char *)((t7 + 0x14)), t8 == 3) || ((t9 = *(signed char *)((t7 + 0x14)), t9 == 99) || (t10 = *(int *)((t7 + 0x4)), t10 == 0)))) {
                        (((struct o14_uchar *)(a4))->v) = 0x63;
                    }
                }
                t16 = (((struct oC4_int *)(a4))->v);
                (((struct o80_uint *)(t16))->v) = (((((struct o80_int *)(t16))->v)) + 0x71C);
                if (!(((((struct o48_float *)(a4))->v)) > (*(float *)((0xC203BBC + ((*(signed char *)(((0x41C + a4) + 0x3))) << 2)))))) {
                    (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + 0.0199999996f);
                }
                u26 = (((struct o48_float *)(a4))->v);
                (((struct o44_float *)(a4))->v) = u26;
                (((struct o40_float *)(a4))->v) = u26;
                if ((*(signed char *)(((0x41C + a4) + 0x3))) == 0) {
                    t28 = *(short *)((a4 + 0x1E));
                    *(unsigned short *)((a4 + 0x1E)) = (t28 - 1);
                    if ((int)(short)(t28 - 1) <= 0) {
                        *(unsigned short *)((a4 + 0x1E)) = 0xA;
                        FUN_0c16b2cc(a4, 0x0, a6, a7);
                    }
                }
                if ((*(signed char *)((a4 + 0x131))) != 0) {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                } else {
                    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
                    math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
                }
                t58 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t58 - 1);
                t120 = (short)(t58 - 1);
                if ((int)(short)(t58 - 1) <= 0) {
                    (((struct o14_uchar *)(a4))->v) = 0x63;
                    t120 = 0x14;
                }
            } else {
                t120 = (FUN_0c03f346(a4, a5, a6, a7));
            }
        } else {
            t71 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t71 - 1);
            t120 = (short)(t71 - 1);
            if ((int)(short)(t71 - 1) <= 0) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                *(unsigned short *)((a4 + 0x1C)) = 0xF0;
                t120 = 0xF0;
            }
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        if ((*(signed char *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x2))) == 13) {
            *(unsigned int *)((a4 + 0x34)) = 0x0;
            t106 = a5;
        } else {
            t86 = FUN_0c064f80((((short)t0 * (short)0x3938) + 0xC532498));
            if (t86 == 0) {
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)((0x380C + (((short)t0 * (short)0x3938) + 0xC532498))); }
                *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) + 100.0f);
                t88 = FUN_0c058716(a4, ((int)stk + 0));
                t93 = 0x0;
                if ((int)t88 <= (int)0x4000) {
                    t93 = 0x38E3;
                    if ((int)t88 > (int)0x38E3) {
                    } else {
                        t93 = t88;
                        if ((int)t88 < 0) {
                            t93 = 0x0;
                        }
                    }
                    t106 = 0x38E3;
                }
                *(unsigned int *)((a4 + 0x34)) = t93;
            }
        }
        FUN_0c058542(a4, t106);
        (((struct oAC_ushort *)(a4))->v) = 0x31;
        u110 = *(float *)((0xC203BB0 + ((*(signed char *)(((0x41C + a4) + 0x3))) << 2)));
        (((struct o48_float *)(a4))->v) = u110;
        (((struct o44_float *)(a4))->v) = u110;
        (((struct o40_float *)(a4))->v) = u110;
        *(unsigned short *)((a4 + 0x1E)) = 0x0;
        t111 = *(signed char *)(((0x41C + a4) + 0x3));
        *(unsigned short *)((a4 + 0x1C)) = ((t111 << 2) + t111);
        if ((*(signed char *)(((0x41C + a4) + 0x3))) != 0) {
            (((struct o12A_ushort *)(a4))->v) = 0x0;
        }
        (((struct o12E_ushort *)(a4))->v) = 0x0;
        t115 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t115 - 1);
        t120 = (short)(t115 - 1);
        if ((int)(short)(t115 - 1) <= 0) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            *(unsigned short *)((a4 + 0x1C)) = 0xF0;
            t120 = 0xF0;
        }
    }
    return t120;
}

int FUN_0c0332b6(int a4, int a5, int a6, int a7, float f4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
    } else {
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0xF;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        *(unsigned short *)((a4 + 0x1C)) = 0x1;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                t1 = (((struct oC4_int *)(a4))->v);
                (((struct o74_float *)(t1))->v) = (((((struct o74_float *)(t1))->v)) - 0.200000003f);
                t1 = (((struct oC8_int *)(a4))->v);
                (((struct o74_float *)(t1))->v) = (((((struct o74_float *)(t1))->v)) - 0.200000003f);
                t1 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
                t2 = (short)(t1 - 1);
                if ((short)(t1 - 1) == 0) {
                    *(unsigned short *)((a4 + 0x1C)) = 0x19;
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    t2 = 0x15;
                }
                t1 = t2;
            } else {
                if (t0 == 3) {
                    t2 = (((struct oC8_int *)(a4))->v);
                    (((struct o8C_float *)(t2))->v) = (((((struct o8C_float *)(t2))->v)) - 0.00999999978f);
                    t2 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t2 - 1);
                    t3 = (short)(t2 - 1);
                    if ((short)(t2 - 1) == 0) {
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        t3 = 0x15;
                    }
                    t2 = t3;
                } else {
                    t3 = t0;
                    if (t0 == 4) {
                        t0 = *(signed char *)0xC541F41;
                        t3 = (unsigned char)t0;
                        if ((unsigned char)t0 != 9) {
                            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                            t3 = 0x14;
                        }
                    }
                    t2 = t3;
                }
                t1 = t2;
            }
            t0 = t1;
        } else {
            t1 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
            t2 = (short)(t1 - 1);
            if ((short)(t1 - 1) == 0) {
                *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
                *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x1;
                (((struct o74_float *)(((((struct oC4_int *)(a4))->v))))->v) = 0.0f;
                (((struct o74_float *)(((((struct oC8_int *)(a4))->v))))->v) = 0.0f;
                (((struct o8C_float *)(((((struct oC8_int *)(a4))->v))))->v) = 0.25f;
                *(unsigned short *)((a4 + 0x1C)) = 0x19;
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                t2 = 0x15;
            }
            t0 = t2;
        }
        t1 = t0;
    } else {
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        if ((short)(t0 - 1) == 0) {
            t0 = (((struct oC4_int *)(a4))->v);
            FUN_0c03744a(t0, 0x0, (*(signed char *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC1A9AD4) + 0x18))), (*(int *)0xC4B40D0));
            *(unsigned char *)((t0 + 0x0)) = 0x0;
            *(unsigned short *)((t0 + 0x6)) = 0x11F;
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x6C)) = *(struct mv3 *)((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC1A9AD4)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((0x84 + t0)) = *(struct mv3 *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC1A9AD4) + 0xC)); }
            t0 = (((struct oC8_int *)(a4))->v);
            FUN_0c03744a(t0, 0x1, (*(signed char *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC1A9AD4) + 0x19))), (*(int *)0xC4B40D0));
            *(unsigned char *)((t0 + 0x0)) = 0x0;
            *(unsigned short *)((t0 + 0x6)) = 0x11F;
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x6C)) = *(struct mv3 *)((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC1A9AD4)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((0x84 + t0)) = *(struct mv3 *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC1A9AD4) + 0xC)); }
            *(unsigned short *)((a4 + 0x1C)) = 0x1;
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        }
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        t2 = (short)(t0 - 1);
        if ((short)(t0 - 1) == 0) {
            *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
            *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x1;
            (((struct o74_float *)(((((struct oC4_int *)(a4))->v))))->v) = 0.0f;
            (((struct o74_float *)(((((struct oC8_int *)(a4))->v))))->v) = 0.0f;
            (((struct o8C_float *)(((((struct oC8_int *)(a4))->v))))->v) = 0.25f;
            *(unsigned short *)((a4 + 0x1C)) = 0x19;
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            t2 = 0x15;
        }
        t1 = t2;
    }
    return t1;
}
