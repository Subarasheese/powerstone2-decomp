/* Straight-line functions with calls and guards (batch gen_fq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o118_int { char p[0x118]; int v; };
struct o11C_int { char p[0x11C]; int v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o37B8_float { char p[0x37B8]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o8_int { char p[0x8]; int v; };
struct o8C_float { char p[0x8C]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c037498(int, int, int, int);
int FUN_0c037bf6(int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c059e60(int, int);
int FUN_0c059f20(int, int);
int FUN_0c05aae4(int, int);
int FUN_0c05aaf6(int);
int FUN_0c0657d4(int, int);
int FUN_0c0659d6(int, int, int);
int FUN_0c07d030(int, int);
int FUN_0c085cac(int, int, int, int);
int FUN_0c085d0c(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0a3058(int, int, int, int);
int FUN_0c0a31ca(int, int, int, int, int, int);
int FUN_0c12cb8c(int, int);
int FUN_0c12d748(int);
int FUN_0c136784(int);
int FUN_0c137f0c(int);
int FUN_0c179ac0(void);
float math_cos_angle16(int);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int FUN_0c0a4884(int a4, int a5, int a6, int a7);
int FUN_0c16c484(int a4, int a5, int a6, int a7);
int FUN_0c12c8d0(int a4, int a5, int a6, int a7);

int FUN_0c0a4884(int a4, int a5, int a6, int a7)
{
    int stk[6];
    register int t0;
    register int t10;
    register float t19;
    register float u22;
    register float t26;
    register float u29;
    register float u37;
    register int t38;
    register int t39;
    register int t40;
    register int t41;
    register int t44;
    register int t45;
    register int t46;
    register int t47;
    register int t65;
    register int t68;
    register int t69;
    register int t85;
    register int t93;
    register int t94;
    register int t96;
    register int t76;
    register float u32;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 == 3) {
                    if ((int)((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v)) == 25) {
                        FUN_0c059f20((*(signed char *)((a4 + 0x1))), (*(signed char *)((a4 + 0x135))));
                    }
                    t10 = FUN_0c037bf6(a4);
                    t76 = (unsigned char)t10;
                    if ((unsigned char)t10 == 0) {
                    } else {
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        t76 = 0x15;
                    }
                } else {
                    if (t0 == 4) {
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        FUN_0c0a3058(a4, 0xFFFFFFFF, 0x4, 0x35);
                        if (!(((((struct o37B8_float *)(a4))->v)) > 0.0f)) {
                            *(int *)((int)stk + 0) = (a4 + 0x28);
                            t19 = math_sin_angle16((*(int *)((a4 + 0x38))));
                            *(unsigned int *)(((int)stk + 4)) = 0xC25D348;
                            u22 = ((((struct o28_float *)(a4))->v));
                            u22 = u22 + ((((struct o0_float *)0xC25D348)->v)) * t19;
                            (((struct o28_float *)(a4))->v) = u22;
                            *(int *)((int)stk + 0) = (a4 + 0x30);
                            u32 = (math_cos_angle16((*(int *)((a4 + 0x38)))));
                        } else {
                            *(int *)((int)stk + 0) = (a4 + 0x28);
                            t26 = math_sin_angle16((*(int *)((a4 + 0x38))));
                            *(unsigned int *)(((int)stk + 4)) = 0xC25D34C;
                            u29 = ((((struct o28_float *)(a4))->v));
                            u29 = u29 + ((((struct o4_float *)0xC25D348)->v)) * t26;
                            (((struct o28_float *)(a4))->v) = u29;
                            *(int *)((int)stk + 0) = (a4 + 0x30);
                            u32 = (math_cos_angle16((*(int *)((a4 + 0x38)))));
                        }
                        u37 = ((((struct o30_float *)(a4))->v));
                        u37 = u37 + (*(float *)(((*(int *)(((int)stk + 4))) + 0x0))) * u32;
                        (((struct o30_float *)(a4))->v) = u37;
                        t38 = *(int *)(((0x118 + a4) + 0x4));
                        t39 = (((struct o118_int *)(a4))->v);
                        (((struct oA0_float *)(t38))->v) = 1.0f;
                        (((struct o9C_float *)(t38))->v) = 1.0f;
                        (((struct oA0_float *)(t39))->v) = 1.0f;
                        (((struct o9C_float *)(t39))->v) = 1.0f;
                        t40 = (((struct o118_int *)(a4))->v);
                        t41 = *(int *)(((0x118 + a4) + 0x4));
                        (((struct o98_float *)(t41))->v) = 1.0f;
                        (((struct o98_float *)(t40))->v) = 1.0f;
                        (((struct o94_float *)(t41))->v) = 1.0f;
                        (((struct o94_float *)(t40))->v) = 1.0f;
                        t76 = (FUN_0c037bf6(a4));
                    } else {
                        FUN_0c085cac(a4, 0xE, 0x0, a7);
                        t44 = *(int *)(((0x118 + a4) + 0x4));
                        t45 = (((struct o118_int *)(a4))->v);
                        (((struct oA0_float *)(t44))->v) = 1.0f;
                        (((struct o9C_float *)(t44))->v) = 1.0f;
                        (((struct oA0_float *)(t45))->v) = 1.0f;
                        (((struct o9C_float *)(t45))->v) = 1.0f;
                        t46 = *(int *)(((0x118 + a4) + 0x4));
                        t47 = (((struct o118_int *)(a4))->v);
                        (((struct o98_float *)(t46))->v) = 1.0f;
                        (((struct o98_float *)(t47))->v) = 1.0f;
                        (((struct o94_float *)(t46))->v) = 1.0f;
                        (((struct o94_float *)(t47))->v) = 1.0f;
                        t76 = 0x94;
                    }
                }
            } else {
                FUN_0c037bf6(a4);
                FUN_0c0a31ca(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4));
                math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
                math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
                *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + 0x200);
                FUN_0c136784(a4);
                t65 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t65 + 0x1);
                t76 = (short)(t65 + 0x1);
                if ((int)(short)(t65 + 0x1) <= (int)((((struct o8_int *)0xC25D348)->v))) {
                } else {
                    FUN_0c085d0c(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
                    t68 = (((struct o118_int *)(a4))->v);
                    (((struct o98_float *)(t68))->v) = 8.0f;
                    (((struct o94_float *)(t68))->v) = 8.0f;
                    t69 = (((struct o11C_int *)(a4))->v);
                    (((struct o98_float *)(t69))->v) = 8.0f;
                    (((struct o94_float *)(t69))->v) = 8.0f;
                    t76 = 0x94;
                }
            }
            return t76;
        }
        FUN_0c037bf6(a4);
        t85 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t85 + 0x1);
        if ((short)(t85 + 0x1) != 22) {
            return (short)(t85 + 0x1);
        }
    } else {
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0x0;
        FUN_0c0a3058(a4, (*(signed char *)((a4 + 0x1))), 0x1, 0x11);
        t93 = (((struct o118_int *)(a4))->v);
        (((struct o98_float *)(t93))->v) = 5.0f;
        (((struct o94_float *)(t93))->v) = 5.0f;
        t94 = (((struct o11C_int *)(a4))->v);
        (((struct o98_float *)(t94))->v) = 5.0f;
        (((struct o94_float *)(t94))->v) = 5.0f;
        FUN_0c037bf6(a4);
        t96 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t96 + 0x1);
        if ((short)(t96 + 0x1) != 22) {
            return (short)(t96 + 0x1);
        }
    }
    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    *(unsigned short *)((a4 + 0x1C)) = 0x0;
    FUN_0c059e60(a4, 0xA);
    FUN_0c07d030(a4, 0x1);
    return FUN_0c137f0c((*(signed char *)((a4 + 0x1))));
}

int FUN_0c16c484(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register float u0;
    register float u1;
    register float u2;

    if (((*(signed char *)0xC542237) == 0) && (t0 = *(signed char *)0xC540F98, t0 != 0)) {
        (((struct o14_uchar *)(a4))->v) = 0x4;
    }
    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 == 3) {
                    (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) + 0.0500000007f);
                    (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) + 0.0500000007f);
                    (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + 0.0500000007f);
                    t0 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
                    t1 = (short)(t0 - 1);
                    if ((short)(t0 - 1) == 0) {
                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                        t1 = 0x14;
                    }
                    return t1;
                }
                return FUN_0c03f346(a4, 0x3, 0x4, a7);
            }
            t0 = (((struct oC8_int *)(a4))->v);
            (((struct o18_float *)(t0))->v) = (((((struct o18_float *)(t0))->v)) + 0.00999999978f);
            (((struct o1C_float *)(t0))->v) = (((((struct o1C_float *)(t0))->v)) + 0.00999999978f);
            (((struct o20_float *)(t0))->v) = (((((struct o20_float *)(t0))->v)) + 0.00999999978f);
            t0 = *(short *)((a4 + 0x1E));
            *(unsigned short *)((a4 + 0x1E)) = (t0 - 1);
            if ((short)(t0 - 1) == 0) {
                *(unsigned short *)((a4 + 0x1E)) = 0x3;
                t0 = (((struct o20_short *)(a4))->v);
                switch (t0) {
                case 1:
                    (((struct o20_ushort *)(a4))->v) = 0x2;
                    FUN_0c03744a(((((struct oCC_int *)(a4))->v)), ((((struct o20_short *)(a4))->v)), 0x54, (*(int *)0xC4B40CC));
                    break;
                case 2:
                    (((struct o20_ushort *)(a4))->v) = 0x3;
                    FUN_0c03744a(((((struct oCC_int *)(a4))->v)), ((((struct o20_short *)(a4))->v)), 0x54, (*(int *)0xC4B40CC));
                    break;
                case 3:
                    (((struct o20_ushort *)(a4))->v) = 0x4;
                    FUN_0c03744a(((((struct oCC_int *)(a4))->v)), ((((struct o20_short *)(a4))->v)), 0x54, (*(int *)0xC4B40CC));
                    break;
                case 4:
                    (((struct o20_ushort *)(a4))->v) = 0x1;
                    FUN_0c03744a(((((struct oCC_int *)(a4))->v)), ((((struct o20_short *)(a4))->v)), 0x54, (*(int *)0xC4B40CC));
                    break;
                }
            }
            (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
            (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o54_float *)(a4))->v)));
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
            t1 = (short)(t0 - 1);
            if ((short)(t0 - 1) == 0) {
                t0 = (((struct oC4_int *)(a4))->v);
                u0 = (((struct o28_float *)(a4))->v);
                u1 = (((struct o2C_float *)(a4))->v);
                u2 = (((struct o30_float *)(a4))->v);
                FUN_0c037498(t0, 0x0, 0x20, (*(int *)0xC4B40CC));
                (((struct o28_float *)(a4))->v) = u0;
                (((struct o2C_float *)(a4))->v) = u1;
                (((struct o30_float *)(a4))->v) = u2;
                *(unsigned char *)((t0 + 0x0)) = 0x1;
                (((struct o40_float *)(a4))->v) = 0.0f;
                (((struct o44_float *)(a4))->v) = 0.0f;
                (((struct o48_float *)(a4))->v) = 0.0f;
                FUN_0c05aaf6(0xD1);
                *(unsigned short *)((a4 + 0x1C)) = 0x14;
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t1 = 0x14;
            }
            return t1;
        }
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        if ((short)(t0 - 1) != 0) {
            return (short)(t0 - 1);
        }
        (((struct o50_float *)(a4))->v) = -20.0f;
        (((struct o54_float *)(a4))->v) = 10.0f;
        *(unsigned short *)((a4 + 0x1C)) = 0x64;
        *(unsigned short *)((a4 + 0x1E)) = 0x3;
        (((struct o20_ushort *)(a4))->v) = 0x1;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        return FUN_0c05aae4(0x65, (a4 + 0x28));
    }
    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 2000.0f);
    t0 = (int)((int)(FUN_0c179ac0()) % (int)0xC8);
    (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((float)(((t0 << 2) + t0) << 1) + -2000.0f));
    t0 = *(signed char *)((a4 + 0x2));
    *(unsigned short *)((a4 + 0x1C)) = ((((int)((int)(FUN_0c179ac0()) % (int)0x14)) + (((t0 << 2) + t0) << 2)) + 0x1);
    (((struct o78_uint *)(((((struct oC4_int *)(a4))->v))))->v) = 0xFFFFEAAB;
    t0 = (((struct oC8_int *)(a4))->v);
    (((struct o18_float *)(t0))->v) = 0.0f;
    (((struct o1C_float *)(t0))->v) = 0.0f;
    (((struct o20_float *)(t0))->v) = 0.0f;
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    return 0x14;
}

int FUN_0c12c8d0(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register float u0;
    register float u1;

    t0 = *(signed char *)((a4 + 0x14));
    t1 = *(int *)((a4 + 0x10));
    if (t0 != 0) {
        if (t0 == 1) {
            t0 = *(signed char *)((a4 + 0x15));
            if (t0 != 0) {
                t2 = t0;
                if (t0 != 1) {
                } else {
                    FUN_0c059e60(t1, 0x22);
                    (((struct o14_uchar *)(a4))->v) = 0xA;
                    t2 = 0x14;
                }
                t0 = t2;
            } else {
                u0 = math_cos_angle16(((-(*(int *)((a4 + 0x38)))) + 0x14000));
                u1 = (u0 * (math_sin_angle16(((-(*(int *)((a4 + 0x34)))) + 0x14000))));
                (((struct o4C_float *)(a4))->v) = (u1 * 40.0f);
                u0 = math_sin_angle16(((-(*(int *)((a4 + 0x38)))) + 0x14000));
                u1 = (u0 * (math_sin_angle16(((-(*(int *)((a4 + 0x34)))) + 0x14000))));
                (((struct o54_float *)(a4))->v) = (u1 * 40.0f);
                (((struct o50_float *)(a4))->v) = (-((math_cos_angle16(((-(*(int *)((a4 + 0x34)))) + 0x14000))) * 40.0f));
                math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
                if (((*(short *)((a4 + 0x1C))) & 0x3) == 0) {
                    FUN_0c12d748(a4);
                }
                if ((*(short *)((a4 + 0x1E))) != 0) {
                    *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) - 1);
                } else {
                    (((struct o12E_ushort *)(a4))->v) = 0xF0;
                }
                t2 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t2 - 1);
                if ((short)(t2 - 1) != 0) {
                    t2 = FUN_0c0657d4(a4, 0x30);
                    if (t2 != 0) {
                        t2 = 0xA;
                        for (;;) {
                            if (t2 == 0) {
                                break;
                            }
                            FUN_0c12cb8c(a4, 0x0);
                            t2 = (t2 - 1);
                        }
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        t2 = 0x15;
                    } else {
                        t3 = FUN_0c0659d6(a4, 0x0, 0x63);
                        t4 = t3;
                        if (t3 != 0) {
                            t3 = 0xA;
                            for (;;) {
                                if (t3 == 0) {
                                    break;
                                }
                                FUN_0c12cb8c(a4, 0x2);
                                t3 = (t3 - 1);
                            }
                            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                            t4 = 0x15;
                        }
                        t2 = t4;
                    }
                    t3 = t2;
                } else {
                    t2 = 0xA;
                    for (;;) {
                        if (t2 == 0) {
                            break;
                        }
                        FUN_0c12cb8c(a4, 0x0);
                        t2 = (t2 - 1);
                    }
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    t3 = 0x15;
                }
                t0 = t3;
            }
            return t0;
        }
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        t2 = t0;
        if (t0 == 1) {
            FUN_0c059e60(t1, 0x22);
            (((struct o14_uchar *)(a4))->v) = 0xA;
            t2 = 0x14;
        }
        t0 = t2;
    } else {
        *(unsigned int *)((a4 + 0x34)) = (unsigned short)((*(int *)((a4 + 0x34))) + 0xB6);
        u0 = math_cos_angle16(((-(*(int *)((a4 + 0x38)))) + 0x14000));
        u1 = (u0 * (math_sin_angle16(((-(*(int *)((a4 + 0x34)))) + 0x14000))));
        (((struct o4C_float *)(a4))->v) = (u1 * 40.0f);
        u0 = math_sin_angle16(((-(*(int *)((a4 + 0x38)))) + 0x14000));
        u1 = (u0 * (math_sin_angle16(((-(*(int *)((a4 + 0x34)))) + 0x14000))));
        (((struct o54_float *)(a4))->v) = (u1 * 40.0f);
        (((struct o50_float *)(a4))->v) = (-((math_cos_angle16(((-(*(int *)((a4 + 0x34)))) + 0x14000))) * 40.0f));
        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
        (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o54_float *)(a4))->v)));
        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
        if (((*(short *)((a4 + 0x1C))) & 0x3) == 0) {
            FUN_0c12d748(a4);
        }
        if ((*(short *)((a4 + 0x1E))) != 0) {
            *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) - 1);
        } else {
            (((struct o12E_ushort *)(a4))->v) = 0xF0;
        }
        t1 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
        if ((short)(t1 - 1) != 0) {
            t1 = FUN_0c0657d4(a4, 0x30);
            if (t1 != 0) {
                t1 = 0xA;
                for (;;) {
                    if (t1 == 0) {
                        break;
                    }
                    FUN_0c12cb8c(a4, 0x0);
                    t1 = (t1 - 1);
                }
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                t1 = 0x15;
            } else {
                t2 = FUN_0c0659d6(a4, 0x0, 0x63);
                t3 = t2;
                if (t2 != 0) {
                    t2 = 0xA;
                    for (;;) {
                        if (t2 == 0) {
                            break;
                        }
                        FUN_0c12cb8c(a4, 0x2);
                        t2 = (t2 - 1);
                    }
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    t3 = 0x15;
                }
                t1 = t3;
            }
            t2 = t1;
        } else {
            t1 = 0xA;
            for (;;) {
                if (t1 == 0) {
                    break;
                }
                FUN_0c12cb8c(a4, 0x0);
                t1 = (t1 - 1);
            }
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            t2 = 0x15;
        }
        t0 = t2;
    }
    return t0;
}
