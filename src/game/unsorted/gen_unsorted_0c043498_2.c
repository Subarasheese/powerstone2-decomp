/* game/unsorted: functions 0C043498-0C0449B6, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int mdl_vtx_iter_begin(int, int);
int mdl_vtx_iter_next(void);
int mdl_vtx_get_pos(int);
int mdl_vtx_set_pos(int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c0cff96(int, int);
int math_atan_angle16(float);
float math_cos_angle16(int);
int FUN_0c179ac0(void);
float math_sin_angle16(int);
extern int FUN_0c187798();
int FUN_0c04378c(int a4, int a5, int a6, int a7);
int FUN_0c04387a(int a4, int a5, int a6, int a7);
int FUN_0c043ae4(int a4, int a5, int a6, int a7);
int FUN_0c043bf6(int a4, int a5, int a6, int a7);
int FUN_0c043d94(int a4, int a5, int a6, int a7);
int FUN_0c044022(int a4, int a5, int a6, int a7);
int FUN_0c044034(int a4, int a5, int a6, int a7);
int FUN_0c0444d2(int a4);

int FUN_0c04378c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    return FUN_0c03f346(a4, 0xB6, a6, a7);
                }
                (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) - 0.0199999996f);
                *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + 0xB6);
                t0 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
                t1 = (short)(t0 - 1);
                if ((short)(t0 - 1) == 0) {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    t1 = 0x14;
                }
                return t1;
            }
            (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) + 0.0199999996f);
            *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + 0xB6);
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
            t1 = (short)(t0 - 1);
            if ((short)(t0 - 1) == 0) {
                *(unsigned short *)((a4 + 0x1C)) = 0x32;
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t1 = 0x14;
            }
            return t1;
        }
        t0 = *(signed char *)0xC541F41;
        t1 = (unsigned char)t0;
        if ((unsigned char)t0 == 3) {
            t0 = *(signed char *)0xC541F42;
            t1 = (unsigned char)t0;
            if ((unsigned char)t0 == 1) {
                t0 = *(signed char *)0xC541F43;
                t1 = (unsigned char)t0;
                if ((unsigned char)t0 == 1) {
                    t0 = *(signed char *)((a4 + 0x2));
                    t1 = t0;
                    if ((*(short *)0xC541F4E) == t0) {
                        *(unsigned short *)((a4 + 0x1C)) = 0x32;
                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                        t1 = 0x14;
                    }
                }
            }
        }
        return t1;
    }
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct oAC_ushort *)(a4))->v) = 0x1F;
    (((struct oA9_uchar *)(a4))->v) = 0x1;
    (((struct o28_float *)(a4))->v) = ((((struct o28_float *)((*(int *)((a4 + 0x10)))))->v));
    (((struct o30_float *)(a4))->v) = ((((struct o30_float *)((*(int *)((a4 + 0x10)))))->v));
    (((struct o40_float *)(a4))->v) = 1.0f;
    (((struct o44_float *)(a4))->v) = 0.0f;
    (((struct o48_float *)(a4))->v) = 1.0f;
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    return 0x14;
}

int FUN_0c04387a(int a4, int a5, int a6, int a7)
{
    int stk[10];
    register int t0;
    register float u6;
    register int t11;
    register int t12;
    register int t14;
    register int t15;
    register int t16;
    register float u29;
    register float t34;
    register float u36;
    register float u37;
    register int t60;
    register int t61;
    register int t63;
    register int t64;
    register int t73;
    register int t44;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            t44 = (FUN_0c03f346(a4, a5, a6, a7));
        } else {
            *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x222);
            *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x16C);
            u6 = 0.5f;
            u6 = u6 + 0.300000012f * (math_sin_angle16((*(short *)((a4 + 0x1E)))));
            (((struct oBC_float *)(a4))->v) = u6;
            (((struct oB8_float *)(a4))->v) = u6;
            (((struct oB4_float *)(a4))->v) = u6;
            t11 = *(int *)(((((((((*(signed char *)((a4 + 0x2))) << 1) + 0x58) << 2) << 2) << 1) + ((*(int *)0xC4B410C) + 0x10)) + 0x1C));
            *(unsigned int *)(((int)stk + 20)) = t11;
            t12 = *(int *)((t11 + 0x0));
            *(unsigned int *)(((int)stk + 4)) = t12;
            mdl_vtx_iter_begin(t12, t12);
            t14 = 0x0;
            t15 = 0x0;
            for (;;) {
                t16 = mdl_vtx_iter_next();
                if (t16 != 0) {
                    break;
                }
                mdl_vtx_get_pos((((int)stk + 4) + 0x18));
                t15 = t14;
                t15 = (t15 << 1);
                t15 = (t15 + t14);
                t15 = (t15 << 2);
                if (((((struct o4_float *)((t15 + 0xC40DDB8)))->v)) > 10.0f) {
                    *(float *)(((int)stk + 12)) = (*(float *)(((t15 + 0xC40DDB8) + 0x0)));
                    *(float *)(((int)stk + 8)) = ((((struct o8_float *)((t15 + 0xC40DDB8)))->v));
                    if ((*(float *)(((int)stk + 12))) == 0.0f) {
                        *(float *)(((int)stk + 12)) = 9.99999997e-07f;
                    }
                    if ((*(float *)(((int)stk + 8))) == 0.0f) {
                        *(float *)(((int)stk + 8)) = 9.99999997e-07f;
                    }
                    *(unsigned int *)(((int)stk + 4)) = (unsigned short)(math_atan_angle16(((*(float *)(((int)stk + 12))) / (*(float *)(((int)stk + 8))))));
                    t15 = (t15 + 0xC40DDB8);
                    *(unsigned int *)(((int)stk + 16)) = t15;
                    u29 = (((struct o4_float *)(t15))->v);
                    *(float *)(((int)stk + 24)) = u29;
                    *(float *)(((int)stk + 0)) = u29;
                    t34 = math_cos_angle16((int)((float)(*(short *)((a4 + 0x1C))) + ((((float)(*(int *)(((int)stk + 4))) * (*(float *)0xC043B58)) / 56.0f))));
                    u36 = ((*(float *)(((int)stk + 24))) * t34);
                    u37 = u29;
                    u37 = u37 + 0.200000003f * u36;
                    *(float *)(((int)stk + 32)) = u37;
                    mdl_vtx_set_pos((((int)stk + 4) + 0x18));
                }
                t14 = (t14 + 0x1);
            }
            t44 = t16;
        }
        t73 = t44;
    } else {
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0x21F;
        (((struct oA9_uchar *)(a4))->v) = 0x1;
        (((struct o28_float *)(a4))->v) = ((((struct o28_float *)((*(int *)((a4 + 0x10)))))->v));
        (((struct o30_float *)(a4))->v) = ((((struct o30_float *)((*(int *)((a4 + 0x10)))))->v));
        (((struct o40_float *)(a4))->v) = 1.0f;
        (((struct o44_float *)(a4))->v) = 1.0f;
        (((struct o48_float *)(a4))->v) = 1.0f;
        (((struct oBC_float *)(a4))->v) = 0.0f;
        (((struct oB8_float *)(a4))->v) = 0.0f;
        (((struct oB4_float *)(a4))->v) = 0.0f;
        t60 = *(int *)(((((*(int *)0xC4B410C) + 0x10) + ((((((*(signed char *)((a4 + 0x2))) << 1) + 0x58) << 2) << 2) << 1)) + 0x1C));
        *(unsigned int *)(((int)stk + 20)) = t60;
        t61 = *(int *)((t60 + 0x0));
        *(unsigned int *)(((int)stk + 4)) = t61;
        mdl_vtx_iter_begin(t61, t61);
        t63 = 0x0;
        for (;;) {
            t64 = mdl_vtx_iter_next();
            if (t64 != 0) {
                break;
            }
            mdl_vtx_get_pos((((int)stk + 4) + 0x18));
            if ((*(float *)(((int)stk + 32))) > 1.0f) {
                FUN_0c187798();
            }
            t63 = (t63 + 0x1);
        }
        *(unsigned short *)((a4 + 0x1C)) = 0x0;
        *(unsigned short *)((a4 + 0x1E)) = 0x0;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t73 = 0x14;
    }
    return t73;
}

int FUN_0c043ae4(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return FUN_0c03f346(a4, a5, a6, a7);
            }
            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
            (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
            return 0x50;
        }
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x444);
        u0 = ((((struct o2C_float *)(a4))->v));
        u0 = u0 + (*(float *)0xC043C1C) * (math_sin_angle16((*(short *)((a4 + 0x1C)))));
        (((struct o2C_float *)(a4))->v) = u0;
        t0 = *(signed char *)0xC541F41;
        t1 = (unsigned char)t0;
        if ((unsigned char)t0 == 3) {
            t0 = *(signed char *)0xC541F42;
            t1 = (unsigned char)t0;
            if ((unsigned char)t0 == 1) {
                t0 = *(signed char *)0xC541F43;
                t1 = (unsigned char)t0;
                if ((unsigned char)t0 == 1) {
                    (((struct o50_float *)(a4))->v) = 0.0f;
                    (((struct o5C_float *)(a4))->v) = 1.0f;
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    t1 = 0x14;
                }
            }
        }
        return t1;
    }
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct oAC_ushort *)(a4))->v) = 0x1F;
    (((struct oA9_uchar *)(a4))->v) = 0x1;
    t0 = (((struct oC4_int *)(a4))->v);
    (((struct o70_float *)(t0))->v) = (((((struct o70_float *)(t0))->v)) + 200.0f);
    (((struct o28_float *)(a4))->v) = ((((struct o28_float *)((*(int *)((a4 + 0x10)))))->v));
    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)((*(int *)((a4 + 0x10)))))->v)) + 500.0f);
    (((struct o30_float *)(a4))->v) = ((((struct o30_float *)((*(int *)((a4 + 0x10)))))->v));
    (((struct o40_float *)(a4))->v) = 1.0f;
    (((struct o44_float *)(a4))->v) = 1.0f;
    (((struct o48_float *)(a4))->v) = 1.0f;
    *(unsigned short *)((a4 + 0x1C)) = 0x0;
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    return 0x14;
}

int FUN_0c043bf6(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        t1 = (short)(t0 - 1);
        if ((short)(t0 - 1) == 0) {
            *(unsigned short *)((a4 + 0x1C)) = 0x8;
            t0 = *(short *)((a4 + 0x1E));
            if (t0 != 0) {
                if (t0 != 1) {
                    if (t0 != 2) {
                        t2 = t0;
                        if (t0 != 3) {
                        } else {
                            *(unsigned short *)((a4 + 0x1E)) = 0x0;
                            t2 = (FUN_0c0cff96((*(int *)((((((struct oCC_int *)(a4))->v)) + 0x8))), 0xC2403FC));
                        }
                        t0 = t2;
                    } else {
                        *(unsigned short *)((a4 + 0x1E)) = 0x3;
                        t0 = (FUN_0c0cff96((*(int *)((((((struct oCC_int *)(a4))->v)) + 0x8))), 0xC2403E4));
                    }
                    t2 = t0;
                } else {
                    *(unsigned short *)((a4 + 0x1E)) = 0x2;
                    t2 = (FUN_0c0cff96((*(int *)((((((struct oCC_int *)(a4))->v)) + 0x8))), 0xC2403CC));
                }
                t0 = t2;
            } else {
                *(unsigned short *)((a4 + 0x1E)) = 0x1;
                t0 = (FUN_0c0cff96((*(int *)((((((struct oCC_int *)(a4))->v)) + 0x8))), 0xC2403B4));
            }
            t1 = t0;
        }
        return t1;
    }
    *(unsigned int *)(((0xC40DD14 + ((*(signed char *)((a4 + 0x2))) << 2)) + 0x0)) = a4;
    t0 = FUN_0c037320((((*(signed char *)((a4 + 0x2))) << 1) + 0x57), (*(int *)0xC4B410C));
    t1 = FUN_0c03f444(0x5, 0x0, t0);
    if (t1 != 0) {
        *(unsigned char *)((t1 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t1 + 0x4)) = 0xC04378C;
        *(unsigned int *)((t1 + 0x10)) = a4;
        *(unsigned char *)((t1 + 0x2)) = (*(signed char *)((a4 + 0x2)));
        FUN_0c03733c(t1, (((*(signed char *)((a4 + 0x2))) << 1) + 0x57), (*(int *)0xC4B410C));
    }
    t0 = FUN_0c037320((((*(signed char *)((a4 + 0x2))) << 1) + 0x58), (*(int *)0xC4B410C));
    t1 = FUN_0c03f444(0x5, 0x0, t0);
    if (t1 != 0) {
        *(unsigned char *)((t1 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t1 + 0x4)) = 0xC04387A;
        *(unsigned int *)((t1 + 0x10)) = a4;
        *(unsigned char *)((t1 + 0x2)) = (*(signed char *)((a4 + 0x2)));
        FUN_0c03733c(t1, (((*(signed char *)((a4 + 0x2))) << 1) + 0x58), (*(int *)0xC4B410C));
    }
    t0 = FUN_0c037320(0x41, (*(int *)0xC4B40CC));
    t1 = FUN_0c03f444(0x5, 0x0, t0);
    if (t1 != 0) {
        *(unsigned char *)((t1 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t1 + 0x4)) = 0xC043AE4;
        *(unsigned int *)((t1 + 0x10)) = a4;
        *(unsigned char *)((t1 + 0x2)) = (*(signed char *)((a4 + 0x2)));
        FUN_0c03733c(t1, 0x41, (*(int *)0xC4B40CC));
    }
    *(unsigned short *)((a4 + 0x1C)) = 0x8;
    *(unsigned short *)((a4 + 0x1E)) = 0x0;
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    return 0x14;
}

int FUN_0c043d94(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t21;
    register int t23;
    register int t28;
    register int t30;
    register int t34;
    register int t36;
    register int t39;
    register int t40;
    register int t43;
    register int t59;
    register float u62;
    register int t63;
    register float u66;
    register int t67;
    register int t86;
    register int t89;
    register int t109;
    register int t111;
    register int t116;
    register int t118;
    register int t121;
    register int t132;
    register int t41;
    int t42;
    register int t87;
    int t88;
    register int t140;
    int t129;
    int t144;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 == 3) {
                    t21 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t21 - 1);
                    t23 = (short)(t21 - 1);
                    if ((short)(t21 - 1) == 0) {
                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                        t23 = 0x14;
                    }
                    return t23;
                }
                if (t0 != 4) {
                    if (t0 != 5) {
                        if (t0 == 6) {
                            t28 = *(short *)((a4 + 0x1C));
                            *(unsigned short *)((a4 + 0x1C)) = (t28 - 1);
                            t30 = (short)(t28 - 1);
                            if ((short)(t28 - 1) == 0) {
                                *(unsigned short *)((a4 + 0x1C)) = 0x14;
                                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                                t30 = 0x14;
                            }
                            return t30;
                        }
                        if (t0 == 7) {
                            (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + 100.0f);
                            t34 = *(short *)((a4 + 0x1C));
                            *(unsigned short *)((a4 + 0x1C)) = (t34 - 1);
                            t36 = (short)(t34 - 1);
                            if ((short)(t34 - 1) == 0) {
                                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                                t36 = 0x14;
                            }
                            return t36;
                        }
                        return FUN_0c03f346(a4, 0x0, a6, a7);
                    }
                    t39 = (((struct o20_short *)(a4))->v);
                    if (t39 != 0) {
                        if (t39 != 1) {
                            if (t39 != 2) {
                            } else {
                                *(unsigned short *)((a4 + 0x1E)) = 0x1;
                                t40 = 0x1;
                                t43 = 0x0;
                                for (;;) {
                                    if ((int)t43 >= (int)0x4) {
                                        break;
                                    }
                                    t42 = (*(signed char *)0xC3BD445);
                                    t41 = 0x1;
                                    t41 = ((int)t41 << (int)t43);
                                    t42 = (unsigned char)t42;
                                    if ((t41 & t42) != 0) {
                                        t42 = (t43 * 0x3938);
                                        t42 = (t42 + 0xC532498);
                                        t40 = (*(signed char *)((t42 + 0x2)));
                                        t42 = t40;
                                        t40 = (*(signed char *)((a4 + 0x2)));
                                        if (t42 == t40) {
                                            t40 = 0x0;
                                            *(unsigned short *)((a4 + 0x1E)) = t40;
                                        }
                                    }
                                    t43 = (t43 + 0x1);
                                }
                                if ((*(short *)((a4 + 0x1E))) != 0) {
                                    (((struct o20_ushort *)(a4))->v) = 0x0;
                                }
                            }
                        } else {
                            *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x666);
                            t59 = (((struct oC4_int *)(a4))->v);
                            u62 = 1.0f;
                            u62 = u62 + 0.5f * (math_sin_angle16((*(short *)((a4 + 0x1C)))));
                            (((struct o84_float *)(t59))->v) = u62;
                            t63 = (((struct oC4_int *)(a4))->v);
                            u66 = 1.0f;
                            u66 = u66 + 0.5f * (math_sin_angle16((*(short *)((a4 + 0x1C)))));
                            (((struct o88_float *)(t63))->v) = u66;
                            t67 = *(short *)((a4 + 0x1E));
                            *(unsigned short *)((a4 + 0x1E)) = (t67 - 1);
                            if ((short)(t67 - 1) == 0) {
                                (((struct o20_ushort *)(a4))->v) = 0x2;
                            }
                        }
                    } else {
                        t86 = t39;
                        t89 = 0x0;
                        for (;;) {
                            if ((int)t89 >= (int)0x4) {
                                break;
                            }
                            t88 = (*(signed char *)0xC3BD445);
                            t87 = 0x1;
                            t87 = ((int)t87 << (int)t89);
                            t88 = (unsigned char)t88;
                            if ((t87 & t88) != 0) {
                                t88 = (t89 * 0x3938);
                                t88 = (t88 + 0xC532498);
                                t86 = (*(signed char *)((t88 + 0x2)));
                                t88 = t86;
                                t86 = (*(signed char *)((a4 + 0x2)));
                                if (t88 == t86) {
                                    t86 = 0x0;
                                    *(unsigned short *)((a4 + 0x1C)) = t86;
                                    t86 = 0x14;
                                    *(unsigned short *)((a4 + 0x1E)) = t86;
                                    t86 = 0x20;
                                    *(unsigned short *)((a4 + t86)) = 0x1;
                                }
                            }
                            t89 = (t89 + 0x1);
                        }
                    }
                    t109 = *(signed char *)0xC541F43;
                    t111 = (unsigned char)t109;
                    if ((unsigned char)t109 != 2) {
                        *(unsigned short *)((a4 + 0x1C)) = 0x3C;
                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                        t111 = 0x14;
                    }
                    return t111;
                }
                *(unsigned short *)((a4 + 0x1C)) = 0x0;
                *(unsigned short *)((a4 + 0x1E)) = 0x0;
                (((struct o20_ushort *)(a4))->v) = 0x2;
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                return 0x14;
            }
            (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) - 100.0f);
            t116 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t116 - 1);
            t118 = (short)(t116 - 1);
            if ((short)(t116 - 1) == 0) {
                *(unsigned short *)((a4 + 0x1C)) = 0x14;
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t118 = 0x14;
            }
            return t118;
        }
        t121 = *(signed char *)((a4 + 0x2));
        if ((t121 == 14) && (t140 = *(signed char *)0xC5429B2, t140 != 2)) {
        } else {
            t140 = t121;
            if ((t121 == 15) && (t129 = *(signed char *)0xC5429B2, t129 == 0)) {
            } else {
                t132 = *(signed char *)0xC541F43;
                t140 = (unsigned char)t132;
                if ((unsigned char)t132 != 2) {
                } else {
                    (((struct oA8_uchar *)(a4))->v) = 0x1;
                    *(unsigned short *)((a4 + 0x1C)) = 0x14;
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    t140 = 0x14;
                }
            }
        }
        return t140;
    }
    (((struct oA8_uchar *)(a4))->v) = 0x0;
    if (((*(signed char *)0xC541F62) != 0) && (t144 = *(signed char *)((a4 + 0x2)), t144 == 0)) {
        FUN_0c03733c(a4, 0x56, (*(int *)0xC4B410C));
    }
    (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + 2000.0f);
    *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x1F;
    (((struct o84_float *)(((((struct oC4_int *)(a4))->v))))->v) = 1.0f;
    (((struct o88_float *)(((((struct oC4_int *)(a4))->v))))->v) = 1.0f;
    (((struct o8C_float *)(((((struct oC4_int *)(a4))->v))))->v) = 1.0f;
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    return 0x14;
}

int FUN_0c044022(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    return t0;
}

int FUN_0c044034(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t22;
    register int t25;
    register int t26;
    int t27;
    register int t36;
    register float u41;
    register int t51;
    register float u56;
    register int t57;
    register int t59;
    register int t63;
    register int t65;
    register int t67;
    register int t70;
    register int t72;
    register int t74;
    register int t78;
    register int t80;
    register int t82;
    register int t85;
    register int t96;
    register int t110;
    register int t111;
    register int t23;
    register int t24;
    register int t29;
    register int t43;
    int t44;
    register int t46;
    register int t104;
    int t93;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 == 4) {
                        *(unsigned short *)((a4 + 0x1C)) = 0x0;
                        *(unsigned short *)((a4 + 0x1E)) = (int)(((float)((int)((int)(FUN_0c179ac0()) % (int)0x3C)) * 65536.0f) / 360.0f);
                        FUN_0c179ac0();
                        (((struct o20_ushort *)(a4))->v) = 0x5;
                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                        return 0x14;
                    }
                    if (t0 == 5) {
                        t25 = (((struct oC4_int *)(a4))->v);
                        (((struct o78_uint *)(t25))->v) = 0x0;
                        t22 = 0x78;
                        t26 = 0x0;
                        t27 = a6;
                        for (;;) {
                            if ((int)t26 >= (int)0x4) {
                                break;
                            }
                            t24 = (*(signed char *)0xC3BD445);
                            t27 = 0x1;
                            t27 = ((int)t27 << (int)t26);
                            t24 = (unsigned char)t24;
                            if (((t24 & t27) != 0) || (t25 = 0xC542364, t29 = *(signed char *)((t25 + 0x0)), t23 = t29, (t23 & t27) != 0)) {
                                t25 = (t26 * 0x3938);
                                t25 = (t25 + 0xC532498);
                                t22 = (*(signed char *)((t25 + 0x2)));
                                t25 = t22;
                                t22 = (*(signed char *)((a4 + 0x2)));
                                if (t25 == t22) {
                                    t22 = 0xC4;
                                    t25 = (*(int *)((a4 + t22)));
                                    t22 = 0x78;
                                    *(unsigned int *)((t25 + t22)) = 0x1555;
                                }
                            }
                            t26 = (t26 + 0x1);
                        }
                        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + (int)(((float)((((struct o20_short *)(a4))->v)) * 65536.0f) / 360.0f));
                        t36 = (((struct oC4_int *)(a4))->v);
                        u41 = ((((struct o70_float *)(t36))->v));
                        u41 = u41 + 5.0f * (math_sin_angle16(((*(short *)((a4 + 0x1C))) + (*(short *)((a4 + 0x1E))))));
                        (((struct o70_float *)(t36))->v) = u41;
                        if (((unsigned char)(*(signed char *)0xC541F41) == 1) && ((t43 = *(signed char *)0xC541F42, (unsigned char)t43 == 1) && (t44 = *(signed char *)0xC541F43, (unsigned char)t44 == 2))) {
                            t46 = (unsigned char)t44;
                        } else {
                            (((struct o22_ushort *)(a4))->v) = 0x3C;
                            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                            t46 = 0x14;
                        }
                        return t46;
                    }
                    if (t0 == 6) {
                        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + (int)(((float)((((struct o20_short *)(a4))->v)) * 65536.0f) / 360.0f));
                        t51 = (((struct oC4_int *)(a4))->v);
                        u56 = ((((struct o70_float *)(t51))->v));
                        u56 = u56 + 5.0f * (math_sin_angle16(((*(short *)((a4 + 0x1C))) + (*(short *)((a4 + 0x1E))))));
                        (((struct o70_float *)(t51))->v) = u56;
                        t57 = (((struct o22_short *)(a4))->v);
                        (((struct o22_ushort *)(a4))->v) = (t57 - 1);
                        t59 = 0x22;
                        if ((short)(t57 - 1) == 0) {
                            *(unsigned short *)((a4 + 0x1C)) = 0x14;
                            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                            t59 = 0x14;
                        }
                        return t59;
                    }
                    if (t0 == 7) {
                        (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + 100.0f);
                        t63 = (((struct oC8_int *)(a4))->v);
                        (((struct o8C_float *)(t63))->v) = (((((struct o8C_float *)(t63))->v)) + 0.200000003f);
                        t65 = *(short *)((a4 + 0x1C));
                        *(unsigned short *)((a4 + 0x1C)) = (t65 - 1);
                        t67 = (short)(t65 - 1);
                        if ((short)(t65 - 1) == 0) {
                            (((struct oA8_uchar *)(a4))->v) = 0x0;
                            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                            t67 = 0x14;
                        }
                        return t67;
                    }
                    if (t0 == 8) {
                        return t0;
                    }
                    return FUN_0c03f346(a4, a5, a6, a7);
                }
                t70 = (((struct oC8_int *)(a4))->v);
                (((struct o8C_float *)(t70))->v) = (((((struct o8C_float *)(t70))->v)) + 0.0500000007f);
                t72 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t72 - 1);
                t74 = (short)(t72 - 1);
                if ((short)(t72 - 1) != 0) {
                } else {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    t74 = 0x14;
                }
                return t74;
            }
            (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) - 100.0f);
            t78 = (((struct oC8_int *)(a4))->v);
            (((struct o8C_float *)(t78))->v) = (((((struct o8C_float *)(t78))->v)) - 0.0500000007f);
            t80 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t80 - 1);
            t82 = (short)(t80 - 1);
            if ((short)(t80 - 1) != 0) {
            } else {
                *(unsigned short *)((a4 + 0x1C)) = 0x14;
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t82 = 0x14;
            }
            return t82;
        }
        t85 = *(signed char *)((a4 + 0x2));
        if ((t85 == 14) && (t104 = *(signed char *)0xC5429B2, t104 != 2)) {
        } else {
            t104 = t85;
            if ((t85 == 15) && (t93 = *(signed char *)0xC5429B2, t93 == 0)) {
            } else {
                t96 = *(signed char *)0xC541F43;
                t104 = (unsigned char)t96;
                if ((unsigned char)t96 != 2) {
                } else {
                    (((struct oA8_uchar *)(a4))->v) = 0x1;
                    *(unsigned short *)((a4 + 0x1C)) = 0x14;
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    t104 = 0x14;
                }
            }
        }
        return t104;
    }
    *(unsigned int *)(((0xC40DC64 + ((*(signed char *)((a4 + 0x2))) << 2)) + 0x0)) = a4;
    (((struct oA8_uchar *)(a4))->v) = 0x0;
    (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + 2000.0f);
    *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0xF;
    t110 = (((struct oC8_int *)(a4))->v);
    *(unsigned short *)((t110 + 0x6)) = 0x1F;
    (((struct o84_float *)(t110))->v) = 1.0f;
    (((struct o88_float *)(t110))->v) = 1.0f;
    (((struct o8C_float *)(t110))->v) = 0.0f;
    t111 = (((struct oCC_int *)(a4))->v);
    *(unsigned short *)((t111 + 0x6)) = 0x20F;
    *(unsigned char *)((t111 + 0x0)) = 0x0;
    (((struct o14_float *)(t111))->v) = 0.0f;
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    return 0x14;
}

int FUN_0c0444d2(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;
    register int t10;
    register int t11;
    register int t12;
    register int t13;
    register int t14;
    register int t15;
    register int t16;
    register int t17;
    register int t18;
    register int t19;
    register int t20;
    register int t21;
    register int t22;
    register int t23;
    register int t24;
    register int t25;
    register int t26;
    register int t27;
    register int t28;
    register int t29;
    register int t30;
    register int t31;
    register int t32;
    register int t33;
    register int t34;
    register int t35;
    register int t36;
    register int t37;
    register int t38;
    register int t39;
    register int t40;
    register int t41;
    register int t42;
    register int t43;
    register int t44;
    register int t45;
    register int t46;
    register int t47;
    register int t48;
    register int t49;
    register int t50;
    register int t51;
    register int t52;
    register int t53;
    register int t54;
    register int t55;
    register int t56;
    register int t57;
    register int t58;

    t57 = *(signed char *)((a4 + 0x14));
    if (t57 != 0) {
        if (t57 != 1) {
            if (t57 != 2) {
                if (t57 == 3) {
                    *(volatile int *)((0xC40DC64 + ((*(signed char *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x3938) + 0xC532498) + 0x2))) << 2)));
                    t58 = ((int (*)(int, int, int))(FUN_0c187798))(a4, 0x0, 0x1);
                    *(volatile int *)((0xC40DC64 + ((*(signed char *)(((((short)(*(signed char *)((t1 + 0x2))) * (short)0x3938) + t0) + 0x2))) << 2)));
                    t0 = ((int (*)(int))(FUN_0c187798))(t1);
                    *(volatile int *)((t3 + 0xC4));
                    *(volatile int *)(((*(int *)((0xC40DC64 + ((*(signed char *)(((((short)(*(signed char *)((t3 + 0x2))) * (short)0x3938) + t2) + 0x2))) << 2)))) + 0xC4));
                    t0 = ((int (*)(int))(FUN_0c187798))(t3);
                    *(volatile int *)((t5 + 0xC4));
                    *(volatile int *)(((*(int *)((0xC40DC64 + ((*(signed char *)(((((short)(*(signed char *)((t5 + 0x2))) * (short)0x3938) + t4) + 0x2))) << 2)))) + 0xC4));
                    t0 = ((int (*)(int))(FUN_0c187798))(t5);
                    t0 = *(signed char *)0xC54225A;
                    t1 = t0;
                    if ((t0 & ((int)t7 << (int)(*(signed char *)((t8 + 0x2))))) == 0) {
                    } else {
                        t0 = (((struct oCC_int *)((*(int *)((0xC40DC64 + ((*(signed char *)(((((short)(*(signed char *)((t8 + 0x2))) * (short)0x3938) + t6) + 0x2))) << 2))))))->v);
                        (((struct o18_float *)(t0))->v) = 1.0f;
                        (((struct o1C_float *)(t0))->v) = 1.0f;
                        (((struct o20_float *)(t0))->v) = 1.0f;
                        *(unsigned char *)((t0 + 0x0)) = t7;
                        *(unsigned short *)((t8 + 0x1C)) = 0x14;
                        (((struct o14_uchar *)(t8))->v) = ((*(signed char *)((t8 + 0x14))) + 0x1);
                        t1 = 0x14;
                    }
                    return t1;
                }
                if (t57 == 4) {
                    *(volatile int *)((0xC40DC64 + ((*(signed char *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x3938) + 0xC532498) + 0x2))) << 2)));
                    t0 = ((int (*)(int, int, int))(FUN_0c187798))(a4, 0x0, 0x1);
                    *(volatile int *)((0xC40DC64 + ((*(signed char *)(((((short)(*(signed char *)((t10 + 0x2))) * (short)0x3938) + t9) + 0x2))) << 2)));
                    t0 = ((int (*)(int))(FUN_0c187798))(t10);
                    *(volatile int *)((t12 + 0xC4));
                    *(volatile int *)(((*(int *)((0xC40DC64 + ((*(signed char *)(((((short)(*(signed char *)((t12 + 0x2))) * (short)0x3938) + t11) + 0x2))) << 2)))) + 0xC4));
                    t0 = ((int (*)(int))(FUN_0c187798))(t12);
                    *(volatile int *)((t14 + 0xC4));
                    *(volatile int *)(((*(int *)((0xC40DC64 + ((*(signed char *)(((((short)(*(signed char *)((t14 + 0x2))) * (short)0x3938) + t13) + 0x2))) << 2)))) + 0xC4));
                    t0 = ((int (*)(int))(FUN_0c187798))(t14);
                    t0 = (((struct oCC_int *)((*(int *)((0xC40DC64 + ((*(signed char *)(((((short)(*(signed char *)((t17 + 0x2))) * (short)0x3938) + t15) + 0x2))) << 2))))))->v);
                    if (((((struct o18_float *)(t0))->v)) > 0.0f) {
                        (((struct o18_float *)(t0))->v) = (((((struct o18_float *)(t0))->v)) - 0.0500000007f);
                        (((struct o1C_float *)(t0))->v) = (((((struct o1C_float *)(t0))->v)) - 0.0500000007f);
                        (((struct o20_float *)(t0))->v) = (((((struct o20_float *)(t0))->v)) - 0.0500000007f);
                        if (0.0f > ((((struct o18_float *)(t0))->v))) {
                            (((struct o18_float *)(t0))->v) = 0.0f;
                            (((struct o1C_float *)(t0))->v) = 0.0f;
                            (((struct o20_float *)(t0))->v) = 0.0f;
                            *(unsigned char *)((t0 + 0x0)) = t16;
                        }
                    }
                    t0 = *(short *)((t17 + 0x1C));
                    *(unsigned short *)((t17 + 0x1C)) = (t0 - 1);
                    t1 = (short)(t0 - 1);
                    if ((short)(t0 - 1) != 0) {
                    } else {
                        *(unsigned short *)((t17 + 0x1C)) = 0x14;
                        (((struct o14_uchar *)(t17))->v) = ((*(signed char *)((t17 + 0x14))) + 0x1);
                        t1 = 0x14;
                    }
                    return t1;
                }
                if (t57 == 5) {
                    *(volatile int *)((0xC40DC64 + ((*(signed char *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x3938) + 0xC532498) + 0x2))) << 2)));
                    t0 = ((int (*)(int, int, int))(FUN_0c187798))(a4, 0x0, 0x1);
                    *(volatile int *)((0xC40DC64 + ((*(signed char *)(((((short)(*(signed char *)((t19 + 0x2))) * (short)0x3938) + t18) + 0x2))) << 2)));
                    t0 = ((int (*)(int))(FUN_0c187798))(t19);
                    *(volatile int *)((t21 + 0xC4));
                    *(volatile int *)(((*(int *)((0xC40DC64 + ((*(signed char *)(((((short)(*(signed char *)((t21 + 0x2))) * (short)0x3938) + t20) + 0x2))) << 2)))) + 0xC4));
                    t0 = ((int (*)(int))(FUN_0c187798))(t21);
                    *(volatile int *)((t23 + 0xC4));
                    *(volatile int *)(((*(int *)((0xC40DC64 + ((*(signed char *)(((((short)(*(signed char *)((t23 + 0x2))) * (short)0x3938) + t22) + 0x2))) << 2)))) + 0xC4));
                    t0 = ((int (*)(int))(FUN_0c187798))(t23);
                    t0 = *(short *)((t24 + 0x1C));
                    *(unsigned short *)((t24 + 0x1C)) = (t0 - 1);
                    t1 = (short)(t0 - 1);
                    if ((short)(t0 - 1) != 0) {
                    } else {
                        (((struct o14_uchar *)(t24))->v) = ((*(signed char *)((t24 + 0x14))) + 0x1);
                        t1 = 0x14;
                    }
                    return t1;
                }
                if (t57 == 6) {
                    *(volatile int *)((0xC40DC64 + ((*(signed char *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x3938) + 0xC532498) + 0x2))) << 2)));
                    t0 = ((int (*)(int, int, int))(FUN_0c187798))(a4, 0x0, 0x1);
                    *(volatile int *)((0xC40DC64 + ((*(signed char *)(((((short)(*(signed char *)((t26 + 0x2))) * (short)0x3938) + t25) + 0x2))) << 2)));
                    t0 = ((int (*)(int))(FUN_0c187798))(t26);
                    *(volatile int *)((t28 + 0xC4));
                    *(volatile int *)(((*(int *)((0xC40DC64 + ((*(signed char *)(((((short)(*(signed char *)((t28 + 0x2))) * (short)0x3938) + t27) + 0x2))) << 2)))) + 0xC4));
                    t0 = ((int (*)(int))(FUN_0c187798))(t28);
                    *(volatile int *)((t30 + 0xC4));
                    *(volatile int *)(((*(int *)((0xC40DC64 + ((*(signed char *)(((((short)(*(signed char *)((t30 + 0x2))) * (short)0x3938) + t29) + 0x2))) << 2)))) + 0xC4));
                    t0 = ((int (*)(int))(FUN_0c187798))(t30);
                    t0 = 0xA8;
                    if ((*(signed char *)(((*(int *)((0xC40DC64 + ((*(signed char *)(((((short)(*(signed char *)((t32 + 0x2))) * (short)0x3938) + t31) + 0x2))) << 2)))) + 0xA8))) == 0) {
                        (((struct o14_uchar *)(t32))->v) = ((*(signed char *)((t32 + 0x14))) + 0x1);
                        t0 = 0x14;
                    }
                    return t0;
                }
                if (t57 == 8) {
                    t0 = 0xA8;
                    if ((*(signed char *)(((*(int *)((0xC40DC64 + ((*(signed char *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x3938) + 0xC532498) + 0x2))) << 2)))) + 0xA8))) == 0) {
                    } else {
                        *(volatile int *)((0xC40DC64 + ((*(signed char *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x3938) + 0xC532498) + 0x2))) << 2)));
                        t1 = ((int (*)(int, int, int))(FUN_0c187798))(a4, 0x0, 0x1);
                        *(volatile int *)((0xC40DC64 + ((*(signed char *)(((((short)(*(signed char *)((t34 + 0x2))) * (short)0x3938) + t33) + 0x2))) << 2)));
                        t1 = ((int (*)(int))(FUN_0c187798))(t34);
                        *(volatile int *)((t36 + 0xC4));
                        *(volatile int *)(((*(int *)((0xC40DC64 + ((*(signed char *)(((((short)(*(signed char *)((t36 + 0x2))) * (short)0x3938) + t35) + 0x2))) << 2)))) + 0xC4));
                        t1 = ((int (*)(int))(FUN_0c187798))(t36);
                        *(volatile int *)((t38 + 0xC4));
                        *(volatile int *)(((*(int *)((0xC40DC64 + ((*(signed char *)(((((short)(*(signed char *)((t38 + 0x2))) * (short)0x3938) + t37) + 0x2))) << 2)))) + 0xC4));
                        t1 = ((int (*)(int))(FUN_0c187798))(t38);
                        (((struct oA8_uchar *)(t40))->v) = t39;
                        (((struct o14_uchar *)(t40))->v) = ((*(signed char *)((t40 + 0x14))) + 0x1);
                        t0 = 0x14;
                    }
                    return t0;
                }
                if (t57 == 9) {
                    *(volatile int *)((0xC40DC64 + ((*(signed char *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x3938) + 0xC532498) + 0x2))) << 2)));
                    t0 = ((int (*)(int, int, int))(FUN_0c187798))(a4, 0x0, 0x1);
                    *(volatile int *)((0xC40DC64 + ((*(signed char *)(((((short)(*(signed char *)((t42 + 0x2))) * (short)0x3938) + t41) + 0x2))) << 2)));
                    t0 = ((int (*)(int))(FUN_0c187798))(t42);
                    *(volatile int *)((t44 + 0xC4));
                    *(volatile int *)(((*(int *)((0xC40DC64 + ((*(signed char *)(((((short)(*(signed char *)((t44 + 0x2))) * (short)0x3938) + t43) + 0x2))) << 2)))) + 0xC4));
                    t0 = ((int (*)(int))(FUN_0c187798))(t44);
                    *(volatile int *)((t46 + 0xC4));
                    *(volatile int *)(((*(int *)((0xC40DC64 + ((*(signed char *)(((((short)(*(signed char *)((t46 + 0x2))) * (short)0x3938) + t45) + 0x2))) << 2)))) + 0xC4));
                    t0 = ((int (*)(int))(FUN_0c187798))(t46);
                    t0 = 0xA8;
                    if ((*(signed char *)(((*(int *)((0xC40DC64 + ((*(signed char *)(((((short)(*(signed char *)((t48 + 0x2))) * (short)0x3938) + t47) + 0x2))) << 2)))) + 0xA8))) == 0) {
                        (((struct o14_uchar *)(t48))->v) = ((*(signed char *)((t48 + 0x14))) + 0x1);
                        t0 = 0x14;
                    }
                    return t0;
                }
                return FUN_0c03f346(a4, 0x0, 0x1, 0xC532498);
            }
            t0 = 0xA8;
            if ((*(signed char *)(((*(int *)((0xC40DC64 + ((*(signed char *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x3938) + 0xC532498) + 0x2))) << 2)))) + 0xA8))) == 0) {
            } else {
                *(volatile int *)((0xC40DC64 + ((*(signed char *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x3938) + 0xC532498) + 0x2))) << 2)));
                t1 = ((int (*)(int, int, int))(FUN_0c187798))(a4, 0x0, 0x1);
                *(volatile int *)((0xC40DC64 + ((*(signed char *)(((((short)(*(signed char *)((t50 + 0x2))) * (short)0x3938) + t49) + 0x2))) << 2)));
                t1 = ((int (*)(int))(FUN_0c187798))(t50);
                *(volatile int *)((t52 + 0xC4));
                *(volatile int *)(((*(int *)((0xC40DC64 + ((*(signed char *)(((((short)(*(signed char *)((t52 + 0x2))) * (short)0x3938) + t51) + 0x2))) << 2)))) + 0xC4));
                t1 = ((int (*)(int))(FUN_0c187798))(t52);
                (((struct o78_uint *)(((((struct oC4_int *)(t54))->v))))->v) = 0x1555;
                *(volatile int *)((t54 + 0xC4));
                *(volatile int *)(((*(int *)((0xC40DC64 + ((*(signed char *)(((((short)(*(signed char *)((t54 + 0x2))) * (short)0x3938) + t53) + 0x2))) << 2)))) + 0xC4));
                t1 = ((int (*)(int))(FUN_0c187798))(t54);
                (((struct oA8_uchar *)(t56))->v) = t55;
                (((struct o14_uchar *)(t56))->v) = ((*(signed char *)((t56 + 0x14))) + 0x1);
                t0 = 0x14;
            }
            return t0;
        }
        if (((unsigned char)(*(signed char *)0xC3BD445) & ((int)0x1 << (int)(*(signed char *)((a4 + 0x2))))) != 0) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        }
        t0 = *(signed char *)((a4 + 0x2));
        t1 = t0;
        if (((unsigned char)(*(signed char *)0xC3BD447) & ((int)0x1 << (int)t0)) == 0) {
        } else {
            (((struct o14_uchar *)(a4))->v) = 0x8;
            t1 = 0x8;
        }
        return t1;
    }
    (((struct oA8_uchar *)(a4))->v) = 0x0;
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    return 0x14;
}
