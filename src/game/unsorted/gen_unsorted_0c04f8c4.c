/* game/unsorted: functions 0C04F8C4-0C04FE0E, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o34_float { char p[0x34]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oB0_float { char p[0xB0]; float v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oC_float { char p[0xC]; float v; };
struct oD0_int { char p[0xD0]; int v; };
struct oD4_int { char p[0xD4]; int v; };
struct oD8_int { char p[0xD8]; int v; };
struct oDC_int { char p[0xDC]; int v; };
struct oE0_int { char p[0xE0]; int v; };
struct oE4_int { char p[0xE4]; int v; };
struct oE8_int { char p[0xE8]; int v; };
struct oEC_int { char p[0xEC]; int v; };
struct oF0_int { char p[0xF0]; int v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c04f8c4(int a4, int a5, int a6, int a7, float f4, float f5, float f6);

int FUN_0c04f8c4(int a4, int a5, int a6, int a7, float f4, float f5, float f6)
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
    register int t14;
    register float u0;
    register float u1;
    register float u2;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
            } else {
                FUN_0c03f346(a4, a5, a6, a7);
            }
        } else {
            t0 = *(signed char *)0xC542236;
            if (t0 != 0) {
                if (t0 != 1) {
                    if (t0 == 2) {
                        if (((*(signed char *)0xC542366) & 0x2) == 0) {
                            t1 = (((struct oDC_int *)(a4))->v);
                            u0 = (((struct o24_float *)0xC241398)->v);
                            (((struct o6C_float *)(t1))->v) = ((u0 + ((((((((struct o3C_float *)0xC241398)->v)) - u0) * (float)(*(short *)((a4 + 0x1C)))) / 100.0f))) + -150.0f);
                            u0 = (((struct o28_float *)0xC241398)->v);
                            t2 = t1;
                            t1 = 0xC2413BC;
                            u1 = (((((struct o0_float *)0xC2413D8)->v)) - u0);
                            u2 = u0;
                            t3 = (*(short *)((a4 + 0x1C)));
                        } else {
                            t4 = (((struct oE0_int *)(a4))->v);
                            u0 = (((struct o30_float *)0xC241398)->v);
                            (((struct o6C_float *)(t4))->v) = ((u0 + ((((((((struct o3C_float *)0xC241398)->v)) - u0) * (float)(*(short *)((a4 + 0x1C)))) / 100.0f))) + -150.0f);
                            u0 = (((struct o34_float *)0xC241398)->v);
                            t2 = t4;
                            t1 = 0xC2413C8;
                            u1 = (((((struct o0_float *)0xC2413D8)->v)) - u0);
                            u2 = u0;
                            t3 = (*(short *)((a4 + 0x1C)));
                        }
                        (((struct o70_float *)(t2))->v) = (u2 + (((u1 * (float)t3) / 100.0f)));
                        t3 = t2;
                        t2 = t1;
                        t1 = 0xC2413D4;
                    } else {
                        if (t0 == 3) {
                            if (((*(signed char *)0xC542366) & 0x8) == 0) {
                                t4 = (((struct oE4_int *)(a4))->v);
                                u0 = (((struct o3C_float *)0xC241398)->v);
                                (((struct o6C_float *)(t4))->v) = ((u0 + ((((((((struct o8_float *)0xC2413D8)->v)) - u0) * (float)(*(short *)((a4 + 0x1C)))) / 100.0f))) + -150.0f);
                                u0 = (((struct o0_float *)0xC2413D8)->v);
                                t5 = t4;
                                t4 = 0xC2413E0;
                                u1 = (((((struct oC_float *)0xC2413D8)->v)) - u0);
                                u2 = u0;
                                t6 = (*(short *)((a4 + 0x1C)));
                            } else {
                                t7 = (((struct oE8_int *)(a4))->v);
                                u0 = (((struct o3C_float *)0xC241398)->v);
                                (((struct o6C_float *)(t7))->v) = ((u0 + ((((((((struct o14_float *)0xC2413D8)->v)) - u0) * (float)(*(short *)((a4 + 0x1C)))) / 100.0f))) + -150.0f);
                                u0 = (((struct o0_float *)0xC2413D8)->v);
                                t5 = t7;
                                t4 = 0xC2413EC;
                                u1 = (((((struct o18_float *)0xC2413D8)->v)) - u0);
                                u2 = u0;
                                t6 = (*(short *)((a4 + 0x1C)));
                            }
                            (((struct o70_float *)(t5))->v) = (u2 + (((u1 * (float)t6) / 100.0f)));
                            t6 = t5;
                            t5 = 0xC2413D4;
                            t7 = t4;
                        } else {
                            t4 = a5;
                            t8 = a6;
                            t9 = a7;
                            if (t0 == 4) {
                                if (((*(signed char *)0xC542366) & 0x8) == 0) {
                                    t0 = (((struct oEC_int *)(a4))->v);
                                    u0 = (((struct o8_float *)0xC2413D8)->v);
                                    (((struct o6C_float *)(t0))->v) = ((u0 + ((((((((struct o20_float *)0xC2413D8)->v)) - u0) * (float)(*(short *)((a4 + 0x1C)))) / 100.0f))) + -150.0f);
                                    u0 = (((struct oC_float *)0xC2413D8)->v);
                                    t10 = t0;
                                    t0 = 0xC2413E0;
                                    u1 = (((((struct o24_float *)0xC2413D8)->v)) - u0);
                                    u2 = u0;
                                    t11 = (*(short *)((a4 + 0x1C)));
                                } else {
                                    t12 = (((struct oF0_int *)(a4))->v);
                                    u0 = (((struct o14_float *)0xC2413D8)->v);
                                    (((struct o6C_float *)(t12))->v) = ((u0 + ((((((((struct o20_float *)0xC2413D8)->v)) - u0) * (float)(*(short *)((a4 + 0x1C)))) / 100.0f))) + -150.0f);
                                    u0 = (((struct o18_float *)0xC2413D8)->v);
                                    t10 = t12;
                                    t0 = 0xC2413EC;
                                    u1 = (((((struct o24_float *)0xC2413D8)->v)) - u0);
                                    u2 = u0;
                                    t11 = (*(short *)((a4 + 0x1C)));
                                }
                                (((struct o70_float *)(t10))->v) = (u2 + (((u1 * (float)t11) / 100.0f)));
                                t4 = t10;
                                t8 = t0;
                                t9 = 0xC2413F8;
                            }
                            t6 = t4;
                            t5 = t8;
                            t7 = t9;
                        }
                        t3 = t6;
                        t2 = t5;
                        t1 = t7;
                    }
                    t0 = t3;
                    t3 = t2;
                    t2 = t1;
                } else {
                    t1 = *(signed char *)0xC542366;
                    if ((t1 & 0x1) == 0) {
                        if (((*(signed char *)0xC542366) & 0x2) == 0) {
                            t4 = (((struct oCC_int *)(a4))->v);
                            u0 = (((struct oC_float *)0xC241398)->v);
                            (((struct o6C_float *)(t4))->v) = ((u0 + ((((((((struct o24_float *)0xC241398)->v)) - u0) * (float)(*(short *)((a4 + 0x1C)))) / 100.0f))) + -150.0f);
                            u0 = (((struct o10_float *)0xC241398)->v);
                            t5 = t4;
                            t4 = 0xC2413BC;
                            u1 = (((((struct o28_float *)0xC241398)->v)) - u0);
                            u2 = u0;
                            t6 = (*(short *)((a4 + 0x1C)));
                        } else {
                            t7 = (((struct oD0_int *)(a4))->v);
                            u0 = (((struct oC_float *)0xC241398)->v);
                            (((struct o6C_float *)(t7))->v) = ((u0 + ((((((((struct o30_float *)0xC241398)->v)) - u0) * (float)(*(short *)((a4 + 0x1C)))) / 100.0f))) + -150.0f);
                            u0 = (((struct o10_float *)0xC241398)->v);
                            t5 = t7;
                            t4 = 0xC2413C8;
                            u1 = (((((struct o34_float *)0xC241398)->v)) - u0);
                            u2 = u0;
                            t6 = (*(short *)((a4 + 0x1C)));
                        }
                        (((struct o70_float *)(t5))->v) = (u2 + (((u1 * (float)t6) / 100.0f)));
                        t6 = t5;
                        t5 = t4;
                        t4 = 0xC2413A4;
                    } else {
                        if ((t1 & 0x2) == 0) {
                            t1 = (((struct oD4_int *)(a4))->v);
                            u0 = (((struct o18_float *)0xC241398)->v);
                            (((struct o6C_float *)(t1))->v) = ((u0 + ((((((((struct o24_float *)0xC241398)->v)) - u0) * (float)(*(short *)((a4 + 0x1C)))) / 100.0f))) + -150.0f);
                            u0 = (((struct o1C_float *)0xC241398)->v);
                            t7 = t1;
                            t1 = 0xC2413BC;
                            u1 = (((((struct o28_float *)0xC241398)->v)) - u0);
                            u2 = u0;
                            t8 = (*(short *)((a4 + 0x1C)));
                        } else {
                            t9 = (((struct oD8_int *)(a4))->v);
                            u0 = (((struct o18_float *)0xC241398)->v);
                            (((struct o6C_float *)(t9))->v) = ((u0 + ((((((((struct o30_float *)0xC241398)->v)) - u0) * (float)(*(short *)((a4 + 0x1C)))) / 100.0f))) + -150.0f);
                            u0 = (((struct o1C_float *)0xC241398)->v);
                            t7 = t9;
                            t1 = 0xC2413C8;
                            u1 = (((((struct o34_float *)0xC241398)->v)) - u0);
                            u2 = u0;
                            t8 = (*(short *)((a4 + 0x1C)));
                        }
                        (((struct o70_float *)(t7))->v) = (u2 + (((u1 * (float)t8) / 100.0f)));
                        t6 = t7;
                        t5 = 0xC2413B0;
                        t4 = t1;
                    }
                    t0 = t6;
                    t3 = t5;
                    t2 = t4;
                }
                t1 = t0;
                t0 = t3;
                t3 = t2;
            } else {
                if (((*(signed char *)0xC542366) & 0x1) == 0) {
                    t2 = (((struct oC4_int *)(a4))->v);
                    u0 = (((struct o0_float *)0xC241398)->v);
                    (((struct o6C_float *)(t2))->v) = ((u0 + ((((((((struct oC_float *)0xC241398)->v)) - u0) * (float)(*(short *)((a4 + 0x1C)))) / 100.0f))) + -150.0f);
                    u0 = (((struct o4_float *)0xC241398)->v);
                    t4 = t2;
                    t2 = 0xC2413A4;
                    t5 = 0xC241398;
                    u1 = (((((struct o10_float *)0xC241398)->v)) - u0);
                    u2 = u0;
                    t6 = (*(short *)((a4 + 0x1C)));
                } else {
                    t7 = (((struct oC8_int *)(a4))->v);
                    u0 = (((struct o0_float *)0xC241398)->v);
                    (((struct o6C_float *)(t7))->v) = ((u0 + ((((((((struct o18_float *)0xC241398)->v)) - u0) * (float)(*(short *)((a4 + 0x1C)))) / 100.0f))) + -150.0f);
                    u0 = (((struct o4_float *)0xC241398)->v);
                    t4 = t7;
                    t2 = 0xC241398;
                    t5 = 0xC2413B0;
                    u1 = (((((struct o1C_float *)0xC241398)->v)) - u0);
                    u2 = u0;
                    t6 = (*(short *)((a4 + 0x1C)));
                }
                (((struct o70_float *)(t4))->v) = (u2 + (((u1 * (float)t6) / 100.0f)));
                t1 = t4;
                t0 = t2;
                t3 = t5;
            }
            t2 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t2 + 0x1);
            if ((short)((t2 + 0x1) - 1) == 100) {
                (((struct o14_uchar *)(a4))->v) = 0x0;
            }
            t2 = t1;
            t1 = t0;
            t0 = t3;
        }
        t3 = t2;
        t2 = t1;
        t1 = t0;
    } else {
        t0 = 0x0;
        t4 = a5;
        for (;;) {
            if ((unsigned int)t0 >= (unsigned int)0x30) {
                break;
            }
            t4 = 0xC4;
            t4 = (t4 + a4);
            t4 = (t4 + t0);
            t4 = (*(int *)((t4 + 0x0)));
            t0 = (t0 + 0x4);
            *(unsigned char *)((t4 + 0x0)) = 0x0;
        }
        t0 = *(signed char *)0xC542236;
        switch (t0) {
        case 4:
            if (((*(signed char *)0xC542366) & 0x8) != 0) {
                t0 = ((((struct oF0_int *)(a4))->v));
            } else {
                t0 = ((((struct oEC_int *)(a4))->v));
            }
            *(unsigned char *)((t0 + 0x0)) = 0x1;
            break;
        case 3:
            t0 = 0xE4;
            if (((*(signed char *)0xC542366) & 0x8) != 0) {
                t0 = 0xE8;
            }
            *(unsigned char *)(((*(int *)((a4 + t0))) + 0x0)) = 0x1;
            break;
        case 2:
            if (((*(signed char *)0xC542366) & 0x2) != 0) {
                t0 = ((((struct oE0_int *)(a4))->v));
            } else {
                t0 = ((((struct oDC_int *)(a4))->v));
            }
            *(unsigned char *)((t0 + 0x0)) = 0x1;
            break;
        case 1:
            t0 = *(signed char *)0xC542366;
            if ((t0 & 0x1) != 0) {
                if (((*(signed char *)0xC542366) & 0x2) != 0) {
                    t5 = ((((struct oD8_int *)(a4))->v));
                } else {
                    t5 = ((((struct oD4_int *)(a4))->v));
                }
                t6 = t5;
            } else {
                if ((t0 & 0x2) != 0) {
                    t0 = ((((struct oD0_int *)(a4))->v));
                } else {
                    t0 = ((((struct oCC_int *)(a4))->v));
                }
                t6 = t0;
            }
            *(unsigned char *)((t6 + 0x0)) = 0x1;
            break;
        case 0:
            if (((*(signed char *)0xC542366) & 0x1) != 0) {
                t0 = ((((struct oC8_int *)(a4))->v));
            } else {
                t0 = ((((struct oC4_int *)(a4))->v));
            }
            *(unsigned char *)((t0 + 0x0)) = 0x1;
            break;
        }
        *(unsigned short *)((a4 + 0x1C)) = 0x0;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t0 = *(signed char *)0xC542236;
        if (t0 != 0) {
            if (t0 != 1) {
                if (t0 == 2) {
                    if (((*(signed char *)0xC542366) & 0x2) == 0) {
                        t5 = (((struct oDC_int *)(a4))->v);
                        u0 = (((struct o24_float *)0xC241398)->v);
                        (((struct o6C_float *)(t5))->v) = ((u0 + ((((((((struct o3C_float *)0xC241398)->v)) - u0) * (float)(*(short *)((a4 + 0x1C)))) / 100.0f))) + -150.0f);
                        u0 = (((struct o28_float *)0xC241398)->v);
                        t6 = t5;
                        t5 = 0xC2413BC;
                        u1 = (((((struct o0_float *)0xC2413D8)->v)) - u0);
                        u2 = u0;
                        t7 = (*(short *)((a4 + 0x1C)));
                    } else {
                        t8 = (((struct oE0_int *)(a4))->v);
                        u0 = (((struct o30_float *)0xC241398)->v);
                        (((struct o6C_float *)(t8))->v) = ((u0 + ((((((((struct o3C_float *)0xC241398)->v)) - u0) * (float)(*(short *)((a4 + 0x1C)))) / 100.0f))) + -150.0f);
                        u0 = (((struct o34_float *)0xC241398)->v);
                        t6 = t8;
                        t5 = 0xC2413C8;
                        u1 = (((((struct o0_float *)0xC2413D8)->v)) - u0);
                        u2 = u0;
                        t7 = (*(short *)((a4 + 0x1C)));
                    }
                    (((struct o70_float *)(t6))->v) = (u2 + (((u1 * (float)t7) / 100.0f)));
                    t7 = t6;
                    t6 = t5;
                    t5 = 0xC2413D4;
                } else {
                    if (t0 == 3) {
                        if (((*(signed char *)0xC542366) & 0x8) == 0) {
                            t8 = (((struct oE4_int *)(a4))->v);
                            u0 = (((struct o3C_float *)0xC241398)->v);
                            (((struct o6C_float *)(t8))->v) = ((u0 + ((((((((struct o8_float *)0xC2413D8)->v)) - u0) * (float)(*(short *)((a4 + 0x1C)))) / 100.0f))) + -150.0f);
                            u0 = (((struct o0_float *)0xC2413D8)->v);
                            t9 = t8;
                            t8 = 0xC2413E0;
                            u1 = (((((struct oC_float *)0xC2413D8)->v)) - u0);
                            u2 = u0;
                            t10 = (*(short *)((a4 + 0x1C)));
                        } else {
                            t11 = (((struct oE8_int *)(a4))->v);
                            u0 = (((struct o3C_float *)0xC241398)->v);
                            (((struct o6C_float *)(t11))->v) = ((u0 + ((((((((struct o14_float *)0xC2413D8)->v)) - u0) * (float)(*(short *)((a4 + 0x1C)))) / 100.0f))) + -150.0f);
                            u0 = (((struct o0_float *)0xC2413D8)->v);
                            t9 = t11;
                            t8 = 0xC2413EC;
                            u1 = (((((struct o18_float *)0xC2413D8)->v)) - u0);
                            u2 = u0;
                            t10 = (*(short *)((a4 + 0x1C)));
                        }
                        (((struct o70_float *)(t9))->v) = (u2 + (((u1 * (float)t10) / 100.0f)));
                        t10 = t9;
                        t9 = 0xC2413D4;
                        t11 = t8;
                    } else {
                        t8 = t4;
                        t4 = 0x30;
                        t12 = a7;
                        if (t0 == 4) {
                            if (((*(signed char *)0xC542366) & 0x8) == 0) {
                                t0 = (((struct oEC_int *)(a4))->v);
                                u0 = (((struct o8_float *)0xC2413D8)->v);
                                (((struct o6C_float *)(t0))->v) = ((u0 + ((((((((struct o20_float *)0xC2413D8)->v)) - u0) * (float)(*(short *)((a4 + 0x1C)))) / 100.0f))) + -150.0f);
                                u0 = (((struct oC_float *)0xC2413D8)->v);
                                t8 = t0;
                                t0 = 0xC2413E0;
                                u1 = (((((struct o24_float *)0xC2413D8)->v)) - u0);
                                u2 = u0;
                                t14 = (*(short *)((a4 + 0x1C)));
                            } else {
                                t8 = (((struct oF0_int *)(a4))->v);
                                u0 = (((struct o14_float *)0xC2413D8)->v);
                                (((struct o6C_float *)(t8))->v) = ((u0 + ((((((((struct o20_float *)0xC2413D8)->v)) - u0) * (float)(*(short *)((a4 + 0x1C)))) / 100.0f))) + -150.0f);
                                u0 = (((struct o18_float *)0xC2413D8)->v);
                                t0 = 0xC2413EC;
                                u1 = (((((struct o24_float *)0xC2413D8)->v)) - u0);
                                u2 = u0;
                                t14 = (*(short *)((a4 + 0x1C)));
                            }
                            (((struct o70_float *)(t8))->v) = (u2 + (((u1 * (float)t14) / 100.0f)));
                            t4 = t0;
                            t12 = 0xC2413F8;
                        }
                        t10 = t8;
                        t9 = t4;
                        t11 = t12;
                    }
                    t7 = t10;
                    t6 = t9;
                    t5 = t11;
                }
                t0 = t7;
                t4 = t6;
                t6 = t5;
            } else {
                t5 = *(signed char *)0xC542366;
                if ((t5 & 0x1) == 0) {
                    if (((*(signed char *)0xC542366) & 0x2) == 0) {
                        t7 = (((struct oCC_int *)(a4))->v);
                        u0 = (((struct oC_float *)0xC241398)->v);
                        (((struct o6C_float *)(t7))->v) = ((u0 + ((((((((struct o24_float *)0xC241398)->v)) - u0) * (float)(*(short *)((a4 + 0x1C)))) / 100.0f))) + -150.0f);
                        u0 = (((struct o10_float *)0xC241398)->v);
                        t8 = t7;
                        t7 = 0xC2413BC;
                        u1 = (((((struct o28_float *)0xC241398)->v)) - u0);
                        u2 = u0;
                        t9 = (*(short *)((a4 + 0x1C)));
                    } else {
                        t10 = (((struct oD0_int *)(a4))->v);
                        u0 = (((struct oC_float *)0xC241398)->v);
                        (((struct o6C_float *)(t10))->v) = ((u0 + ((((((((struct o30_float *)0xC241398)->v)) - u0) * (float)(*(short *)((a4 + 0x1C)))) / 100.0f))) + -150.0f);
                        u0 = (((struct o10_float *)0xC241398)->v);
                        t8 = t10;
                        t7 = 0xC2413C8;
                        u1 = (((((struct o34_float *)0xC241398)->v)) - u0);
                        u2 = u0;
                        t9 = (*(short *)((a4 + 0x1C)));
                    }
                    (((struct o70_float *)(t8))->v) = (u2 + (((u1 * (float)t9) / 100.0f)));
                    t9 = t8;
                    t8 = t7;
                    t7 = 0xC2413A4;
                } else {
                    if ((t5 & 0x2) == 0) {
                        t5 = (((struct oD4_int *)(a4))->v);
                        u0 = (((struct o18_float *)0xC241398)->v);
                        (((struct o6C_float *)(t5))->v) = ((u0 + ((((((((struct o24_float *)0xC241398)->v)) - u0) * (float)(*(short *)((a4 + 0x1C)))) / 100.0f))) + -150.0f);
                        u0 = (((struct o1C_float *)0xC241398)->v);
                        t10 = t5;
                        t5 = 0xC2413BC;
                        u1 = (((((struct o28_float *)0xC241398)->v)) - u0);
                        u2 = u0;
                        t11 = (*(short *)((a4 + 0x1C)));
                    } else {
                        t12 = (((struct oD8_int *)(a4))->v);
                        u0 = (((struct o18_float *)0xC241398)->v);
                        (((struct o6C_float *)(t12))->v) = ((u0 + ((((((((struct o30_float *)0xC241398)->v)) - u0) * (float)(*(short *)((a4 + 0x1C)))) / 100.0f))) + -150.0f);
                        u0 = (((struct o1C_float *)0xC241398)->v);
                        t10 = t12;
                        t5 = 0xC2413C8;
                        u1 = (((((struct o34_float *)0xC241398)->v)) - u0);
                        u2 = u0;
                        t11 = (*(short *)((a4 + 0x1C)));
                    }
                    (((struct o70_float *)(t10))->v) = (u2 + (((u1 * (float)t11) / 100.0f)));
                    t9 = t10;
                    t8 = 0xC2413B0;
                    t7 = t5;
                }
                t0 = t9;
                t4 = t8;
                t6 = t7;
            }
            t5 = t0;
            t0 = t4;
            t4 = t6;
        } else {
            if (((*(signed char *)0xC542366) & 0x1) == 0) {
                t6 = (((struct oC4_int *)(a4))->v);
                u0 = (((struct o0_float *)0xC241398)->v);
                (((struct o6C_float *)(t6))->v) = ((u0 + ((((((((struct oC_float *)0xC241398)->v)) - u0) * (float)(*(short *)((a4 + 0x1C)))) / 100.0f))) + -150.0f);
                u0 = (((struct o4_float *)0xC241398)->v);
                t7 = t6;
                t6 = 0xC2413A4;
                t8 = 0xC241398;
                u1 = (((((struct o10_float *)0xC241398)->v)) - u0);
                u2 = u0;
                t9 = (*(short *)((a4 + 0x1C)));
            } else {
                t10 = (((struct oC8_int *)(a4))->v);
                u0 = (((struct o0_float *)0xC241398)->v);
                (((struct o6C_float *)(t10))->v) = ((u0 + ((((((((struct o18_float *)0xC241398)->v)) - u0) * (float)(*(short *)((a4 + 0x1C)))) / 100.0f))) + -150.0f);
                u0 = (((struct o4_float *)0xC241398)->v);
                t7 = t10;
                t6 = 0xC241398;
                t8 = 0xC2413B0;
                u1 = (((((struct o1C_float *)0xC241398)->v)) - u0);
                u2 = u0;
                t9 = (*(short *)((a4 + 0x1C)));
            }
            (((struct o70_float *)(t7))->v) = (u2 + (((u1 * (float)t9) / 100.0f)));
            t5 = t7;
            t0 = t6;
            t4 = t8;
        }
        t6 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t6 + 0x1);
        if ((short)((t6 + 0x1) - 1) == 100) {
            (((struct o14_uchar *)(a4))->v) = 0x0;
        }
        t3 = t5;
        t2 = t0;
        t1 = t4;
    }
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        return FUN_0c03f346(a4, t3, t2, t1);
                    }
                    (((struct oB0_float *)(a4))->v) = (((((struct oB0_float *)(a4))->v)) - 0.0500000007f);
                    t0 = *(short *)((a4 + 0x1E));
                    *(unsigned short *)((a4 + 0x1E)) = (t0 - 1);
                    t1 = (short)(t0 - 1);
                    if ((short)(t0 - 1) == 0) {
                        *(unsigned short *)((a4 + 0x1E)) = 0x3C;
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        t1 = 0x15;
                    }
                    return t1;
                }
                t0 = *(short *)((a4 + 0x1E));
                *(unsigned short *)((a4 + 0x1E)) = (t0 - 1);
                t1 = (short)(t0 - 1);
                if ((short)(t0 - 1) == 0) {
                    *(unsigned short *)((a4 + 0x1E)) = 0x14;
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    t1 = 0x15;
                }
                return t1;
            }
            (((struct oB0_float *)(a4))->v) = (((((struct oB0_float *)(a4))->v)) + 0.0500000007f);
            t0 = *(short *)((a4 + 0x1E));
            *(unsigned short *)((a4 + 0x1E)) = (t0 - 1);
            t1 = (short)(t0 - 1);
            if ((short)(t0 - 1) == 0) {
                *(unsigned short *)((a4 + 0x1E)) = 0x78;
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                t1 = 0x15;
            }
            return t1;
        }
    } else {
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oB0_float *)(a4))->v) = 0.0f;
        *(unsigned short *)((a4 + 0x1E)) = 0xB4;
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    }
    t0 = *(short *)((a4 + 0x1E));
    *(unsigned short *)((a4 + 0x1E)) = (t0 - 1);
    t1 = (short)(t0 - 1);
    if ((short)(t0 - 1) == 0) {
        *(unsigned short *)((a4 + 0x1E)) = 0x14;
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t1 = 0x15;
    }
    return t1;
}
