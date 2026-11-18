/* game/menu/select: functions 0C0FE108-0C0FFCDA, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o28_float { char p[0x28]; float v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o30_uint { char p[0x30]; unsigned int v; };
struct o34_int { char p[0x34]; int v; };
struct o34_uint { char p[0x34]; unsigned int v; };
struct o38_int { char p[0x38]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oB0_float { char p[0xB0]; float v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC_float { char p[0xC]; float v; };
struct oC_uint { char p[0xC]; unsigned int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03add8(int, int, int, int);
int FUN_0c03ae7a(void);
int FUN_0c03aeec(void);
int FUN_0c03af6a(void);
int FUN_0c03afdc(void);
int FUN_0c03b05a(void);
int FUN_0c03b0cc(void);
int FUN_0c03b14a(void);
int FUN_0c03b1c8(void);
int FUN_0c03b25a(void);
int FUN_0c03b2e8(void);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c05aab6(int, int);
int FUN_0c05f222(void);
int FUN_0c05f22c(int);
int FUN_0c05f7a0(void);
int FUN_0c05f826(void);
int FUN_0c101d38(int);
int FUN_0c101d52(int, int);
int FUN_0c1213c4(int);
int FUN_0c18778c(int, int, int, int, float, float, float, float, float, float, float, float);
int memset(int, int, int);
int FUN_0c0fe108(int a4, float f4);
int FUN_0c0fe116(void);
int FUN_0c0fe154(int a4);
void FUN_0c0fe178(int a4);
int FUN_0c0fe17e(void);
int FUN_0c0fe23a(void);
int FUN_0c0fe2a6(int a4);
int FUN_0c0fe328(int a4, int a5, int a6, int a7);
int FUN_0c0fe3a0(void);
int FUN_0c0fe3d0(void);
int FUN_0c0fe496(void);
int FUN_0c0fe4ec(int a4);
int FUN_0c0ff8b4(int a4);
int FUN_0c0ffaa2(void);
int FUN_0c0ffbbc(int a4, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11);

int FUN_0c0fe108(int a4, float f4)
{
    (((struct oBC_float *)(a4))->v) = f4;
    (((struct oB8_float *)(a4))->v) = f4;
    (((struct oB4_float *)(a4))->v) = f4;
    return 0xB4;
}

int FUN_0c0fe116(void)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = 0x0;
    t1 = 0x0;
    for (;;) {
        t2 = FUN_0c101d38(t1);
        if (t2 != 0) {
            t0 = (t0 | ((int)0x1 << (int)t1));
        }
        t1 = (t1 + 0x1);
        if ((int)t1 >= (int)0x4) {
            break;
        }
    }
    return t0;
}

int FUN_0c0fe154(int a4)
{
    register int t0;
    int t1;

    t0 = FUN_0c05f22c(a4);
    if ((t0 != 0) && (t1 = *(int *)0xC472B4C, t1 == 0)) {
        return t0;
    }
    return 0x0;
}

void FUN_0c0fe178(int a4)
{
    *(unsigned int *)0xC472B4C = a4;
}

int FUN_0c0fe17e(void)
{
    int t0;
    int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;

    t2 = 0x0;
    for (;;) {
        if ((int)t2 >= (int)0x4) {
            break;
        }
        t4 = 0x2000;
        t5 = 0xC472B24;
        t6 = 0xC5429A8;
        t3 = (FUN_0c101d52(t2, t4));
        if (t3 != 0) {
            t3 = 0x74;
            t7 = *(int *)((t5 + t3));
            *(unsigned int *)((t5 + t3)) = (t7 - 1);
            if ((int)(t7 - 1) < 0) {
                *(unsigned int *)((t5 + t3)) = 0x4;
            }
            if (((*(signed char *)((t6 + 0x0))) != 0) && (t0 = *(int *)((t5 + t3)), t3 = t0, t3 == 3)) {
                t3 = 0x74;
                *(unsigned int *)((t5 + t3)) = ((*(int *)((t5 + t3))) - 1);
            }
            t5 = 0xC05AAB6;
            t3 = (FUN_0c05aab6(t2, 0x6));
            t7 = 0xC05AAB6;
        } else {
            t4 = 0x1000;
            t3 = (FUN_0c101d52(t2, t4));
            t4 = t5;
            if (t3 != 0) {
                t3 = 0x74;
                t8 = *(int *)((t5 + t3));
                *(unsigned int *)((t5 + t3)) = (t8 + 0x1);
                if ((int)(t8 + 0x1) > (int)0x4) {
                    *(unsigned int *)((t5 + t3)) = 0x0;
                }
                if (((*(signed char *)((t6 + 0x0))) != 0) && (t1 = *(int *)((t5 + t3)), t3 = t1, t3 == 3)) {
                    t3 = 0x74;
                    *(unsigned int *)((t5 + t3)) = ((*(int *)((t5 + t3))) + 0x1);
                }
                t3 = (FUN_0c05aab6(t2, 0x6));
                t4 = 0xC05AAB6;
            }
            t7 = t4;
        }
        t2 = (t2 + 0x1);
        t5 = t7;
    }
    return t3;
}

int FUN_0c0fe23a(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t0 = 0x0;
    for (;;) {
        if ((int)t0 >= (int)0x4) {
            break;
        }
        t2 = 0x2000;
        t3 = 0xC472B24;
        t1 = (FUN_0c101d52(t0, t2));
        if (t1 != 0) {
            t1 = 0x74;
            if ((*(int *)((t3 + t1))) != 0) {
                *(unsigned int *)((t3 + t1)) = 0x0;
            } else {
                t1 = 0x74;
                *(unsigned int *)((t3 + t1)) = 0x4;
            }
            t3 = 0xC05AAB6;
            t1 = (FUN_0c05aab6(t0, 0x6));
            t4 = 0xC05AAB6;
        } else {
            t2 = 0x1000;
            t1 = (FUN_0c101d52(t0, t2));
            t2 = t3;
            if (t1 != 0) {
                t1 = 0x74;
                if ((*(int *)((t3 + t1))) == 0) {
                    t1 = 0x74;
                    *(unsigned int *)((t3 + t1)) = 0x4;
                } else {
                    *(unsigned int *)((t3 + t1)) = 0x0;
                }
                t1 = (FUN_0c05aab6(t0, 0x6));
                t2 = 0xC05AAB6;
            }
            t4 = t2;
        }
        t0 = (t0 + 0x1);
        t3 = t4;
    }
    return t1;
}

int FUN_0c0fe2a6(int a4)
{
    register int t0;
    register int t1;

    if ((int)((((struct o34_int *)0xC472B60)->v)) < 0) {
        (((struct o34_uint *)0xC472B60)->v) = 0x0;
    }
    t0 = 0x0;
    for (;;) {
        if ((((int)0x1 << (int)((((struct o34_int *)0xC472B60)->v))) & ((((struct o0_int *)0xC472B60)->v))) != 0) {
            break;
        }
        t1 = (((struct o34_int *)0xC472B60)->v);
        (((struct o34_uint *)0xC472B60)->v) = (t1 + a4);
        if ((int)(t1 + a4) > (int)0x7) {
            (((struct o34_uint *)0xC472B60)->v) = 0x0;
        } else {
            if ((int)((((struct o34_int *)0xC472B60)->v)) < 0) {
                (((struct o34_uint *)0xC472B60)->v) = 0x7;
            }
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x8) {
            if (0x0 != 0) {
                (((struct o30_uint *)0xC472B60)->v) = (((((struct o34_int *)0xC472B60)->v)) >> 1);
                return 0x6C;
            }
            (((struct o30_uint *)0xC472B60)->v) = 0xFFFFFFFF;
            (((struct o34_uint *)0xC472B60)->v) = 0xFFFFFFFF;
            return 0x70;
        }
    }
    if (0x1 != 0) {
        (((struct o30_uint *)0xC472B60)->v) = (((((struct o34_int *)0xC472B60)->v)) >> 1);
        t0 = 0x6C;
    } else {
        (((struct o30_uint *)0xC472B60)->v) = 0xFFFFFFFF;
        (((struct o34_uint *)0xC472B60)->v) = 0xFFFFFFFF;
        t0 = 0x70;
    }
    return t0;
}

int FUN_0c0fe328(int a4, int a5, int a6, int a7)
{
    register int t10;

    (((struct o0_uint *)0xC472B60)->v) = (FUN_0c03add8(a4, a5, a6, a7));
    (((struct o4_uint *)0xC472B60)->v) = (FUN_0c03b14a());
    (((struct o8_uint *)0xC472B60)->v) = (FUN_0c03ae7a());
    (((struct oC_uint *)0xC472B60)->v) = (FUN_0c03aeec());
    (((struct o10_uint *)0xC472B60)->v) = (FUN_0c03b1c8());
    (((struct o14_uint *)0xC472B60)->v) = (FUN_0c03af6a());
    (((struct o18_uint *)0xC472B60)->v) = (FUN_0c03b0cc());
    (((struct o1C_uint *)0xC472B60)->v) = (FUN_0c03afdc());
    (((struct o20_uint *)0xC472B60)->v) = (FUN_0c03b05a());
    (((struct o24_uint *)0xC472B60)->v) = (FUN_0c03b25a());
    t10 = FUN_0c03b2e8();
    (((struct o28_uint *)0xC472B60)->v) = t10;
    return t10;
}

int FUN_0c0fe3a0(void)
{
    (((struct o0_uint *)0xC472B60)->v) = 0x0;
    (((struct o4_uint *)0xC472B60)->v) = 0x0;
    (((struct o8_uint *)0xC472B60)->v) = 0x0;
    (((struct oC_uint *)0xC472B60)->v) = 0x0;
    (((struct o10_uint *)0xC472B60)->v) = 0x0;
    (((struct o14_uint *)0xC472B60)->v) = 0x0;
    (((struct o18_uint *)0xC472B60)->v) = 0x0;
    (((struct o1C_uint *)0xC472B60)->v) = 0x0;
    (((struct o20_uint *)0xC472B60)->v) = 0x0;
    (((struct o24_uint *)0xC472B60)->v) = 0x0;
    (((struct o28_uint *)0xC472B60)->v) = 0x0;
    return 0x64;
}

int FUN_0c0fe3d0(void)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = 0x0;
    for (;;) {
        t1 = *(int *)0xC472B94;
        t2 = FUN_0c101d52(t0, 0x800);
        if (t2 != 0) {
            t2 = *(int *)0xC472B94;
            *(unsigned int *)0xC472B94 = (t2 - 1);
            if ((int)(t2 - 1) < 0) {
                *(unsigned int *)0xC472B94 = 0x7;
            }
            FUN_0c0fe2a6(0xFFFFFFFF);
        } else {
            t2 = FUN_0c101d52(t0, 0x400);
            if (t2 != 0) {
                t2 = *(int *)0xC472B94;
                *(unsigned int *)0xC472B94 = (t2 + 0x1);
                if ((int)(t2 + 0x1) > (int)0x7) {
                    *(unsigned int *)0xC472B94 = 0x0;
                }
                FUN_0c0fe2a6(0x1);
            }
        }
        if (t1 != (*(int *)0xC472B94)) {
            FUN_0c05aab6(t0, 0x5);
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x4) {
            break;
        }
    }
    return FUN_0c0fe2a6(0x1);
}

int FUN_0c0fe496(void)
{
    int t1;

    FUN_0c05f826();
    t1 = *(int *)0xC472B50;
    if ((t1 != 0) && (t1 != 1)) {
        if (t1 != 2) {
            if (t1 != 3) {
                if (t1 != 4) {
                    if (t1 != 5) {
                        if (t1 != 6) {
                            return FUN_0c05f222();
                        }
                        return (FUN_0c1213c4(0x0));
                    }
                    return (FUN_0c1213c4(0x2));
                }
                return (FUN_0c1213c4(0x0));
            }
            return FUN_0c05f222();
        }
        return FUN_0c05f7a0();
    }
    return FUN_0c05f222();
}

int FUN_0c0fe4ec(int a4)
{
    register int t0;

    t0 = memset(0xC472B24, 0x0, 0x80);
    *(unsigned int *)0xC472B50 = a4;
    return t0;
}

int FUN_0c0ff8b4(int a4)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;

    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o15_uchar *)(a4))->v) = 0x0;
        *(unsigned short *)((a4 + 0x1C)) = 0x0;
    }
    t0 = (((struct o0_int *)0xC472B28)->v);
    u0 = 1.0f;
    if ((t0 != 1) && (t0 != 0)) {
        u0 = ((((struct o0_float *)0xC0FFAD0)->v));
    }
    u1 = (((struct o4_float *)0xC0FFAD0)->v);
    u2 = (((struct o8_float *)0xC0FFAD0)->v);
    u3 = (((struct oC_float *)0xC0FFAD0)->v);
    t0 = *(signed char *)((a4 + 0x2));
    if ((t0 != 0) && (t0 != 1)) {
        t1 = t0;
        if (t0 != 2) {
        } else {
            t0 = *(signed char *)((a4 + 0x3));
            t2 = 0x0;
            if ((*(signed char *)((a4 + 0x3))) == ((((struct o0_int *)0xC472B90)->v))) {
                t2 = 0x1;
            }
            u4 = (u0 * 1.0f);
            if ((((int)((((struct o34_int *)0xC472B28)->v)) << (int)(-t0)) & 0x1) == 0) {
                u4 = (u0 * u3);
            }
            FUN_0c0fe108(a4, u4);
            t0 = *(short *)((a4 + 0x1C));
            t3 = t0;
            if (t0 != t2) {
                *(unsigned short *)((a4 + 0x1C)) = t2;
                t0 = *(signed char *)((a4 + 0x3));
                FUN_0c03733c(a4, (*(int *)((((*(signed char *)((a4 + 0x2))) << 2) + ((((((t0 << 1) + t0) << 2) << 1) + 0xC290610) + (((t2 << 1) + t2) << 2))))), (*(int *)0xC4B4118));
                t0 = *(signed char *)((a4 + 0x3));
                if (t0 != 0) {
                    if (t0 != 1) {
                        if (t0 != 2) {
                            t2 = t0;
                            if (t0 != 3) {
                            } else {
                                (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + u1);
                                t2 = 0x28;
                            }
                            t0 = t2;
                        } else {
                            (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + u2);
                            t0 = 0x28;
                        }
                        t2 = t0;
                    } else {
                        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) - u2);
                        t2 = 0x28;
                    }
                    t0 = t2;
                } else {
                    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) - u1);
                    t0 = 0x28;
                }
                t3 = t0;
            }
            t1 = t3;
        }
        t0 = t1;
    } else {
        t1 = *(signed char *)((a4 + 0x3));
        t2 = 0x0;
        if ((((*(signed char *)((a4 + 0x3))) << 1) + (*(signed char *)((a4 + 0x2)))) == ((((struct o4_int *)0xC472B90)->v))) {
            t2 = 0x1;
        }
        u4 = (u0 * 1.0f);
        if ((((int)((((struct o38_int *)0xC472B28)->v)) << (int)(-((t1 << 1) + (*(signed char *)((a4 + 0x2)))))) & 0x1) == 0) {
            u4 = (u0 * u3);
        }
        FUN_0c0fe108(a4, u4);
        t1 = *(short *)((a4 + 0x1C));
        t3 = t1;
        if (t1 == t2) {
        } else {
            *(unsigned short *)((a4 + 0x1C)) = t2;
            t1 = *(signed char *)((a4 + 0x3));
            FUN_0c03733c(a4, (*(int *)((((*(signed char *)((a4 + 0x2))) << 2) + ((((((t1 << 1) + t1) << 2) << 1) + 0xC290610) + (((t2 << 1) + t2) << 2))))), (*(int *)0xC4B4118));
            t1 = *(signed char *)((a4 + 0x3));
            if (t1 != 0) {
                if (t1 != 1) {
                    if (t1 != 2) {
                        t2 = t1;
                        if (t1 != 3) {
                        } else {
                            (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + u1);
                            t2 = 0x28;
                        }
                        t1 = t2;
                    } else {
                        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + u2);
                        t1 = 0x28;
                    }
                    t2 = t1;
                } else {
                    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) - u2);
                    t2 = 0x28;
                }
                t1 = t2;
            } else {
                (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) - u1);
                t1 = 0x28;
            }
            t3 = t1;
        }
        t0 = t3;
    }
    return t0;
}

int FUN_0c0ffaa2(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register float u0;
    register float u1;
    register float u2;

    t0 = 0xC0FFAD4;
    t1 = 0x0;
    for (;;) {
        if ((int)t1 >= (int)0x4) {
            break;
        }
        t2 = t1;
        t2 = (t2 << 1);
        t3 = t1;
        t2 = (t2 + t3);
        t2 = (t2 << 2);
        t2 = (t2 << 1);
        t2 = (t2 + 0xC290610);
        t4 = 0x0;
        for (;;) {
            t0 = t4;
            t3 = 0xC037320;
            t0 = (t0 << 2);
            t0 = (FUN_0c037320((*(int *)((t2 + t0))), (*(int *)0xC4B4118)));
            t0 = (FUN_0c03f444(0x5, 0x0, t0));
            t5 = t0;
            if (t0 != 0) {
                t0 = t4;
                t0 = (t0 << 2);
                t3 = 0xC03733C;
                t0 = (FUN_0c03733c(t5, (*(int *)((t2 + t0))), (*(int *)0xC4B4118)));
                t0 = 0xA8;
                t3 = 0x20F;
                *(unsigned char *)((t5 + t0)) = 0x1;
                t0 = (t0 + 0x4);
                *(unsigned short *)((t5 + t0)) = t3;
                t0 = (t0 - 3);
                *(unsigned char *)((t5 + t0)) = 0x80;
                t0 = (t0 + 0x13);
                *(float *)((t5 + t0)) = 1.0f;
                t0 = (t0 - 4);
                *(float *)((t5 + t0)) = 1.0f;
                t0 = (t0 - 4);
                *(float *)((t5 + t0)) = 1.0f;
                t0 = 0xFFFFFFFF;
                *(unsigned char *)((t5 + 0x1)) = t0;
                t0 = t4;
                *(unsigned char *)((t5 + 0x2)) = t0;
                t0 = t1;
                *(unsigned char *)((t5 + 0x3)) = t0;
                t3 = 0xC0FF8B4;
                *(unsigned int *)((t5 + 0x4)) = 0xC0FF8B4;
                t0 = (*(signed char *)((t5 + 0x3)));
                if (t0 != 0) {
                    if (t0 != 1) {
                        if (t0 != 2) {
                            if (t0 != 3) {
                            } else {
                                t0 = 0x28;
                                u0 = (*(float *)((t5 + t0)));
                                u0 = (u0 + 210.0f);
                                *(float *)((t5 + t0)) = u0;
                                u1 = u0;
                            }
                            u2 = u1;
                        } else {
                            t0 = 0x28;
                            u0 = (*(float *)((t5 + t0)));
                            u0 = (u0 + 70.0f);
                            *(float *)((t5 + t0)) = u0;
                            u2 = u0;
                        }
                        u1 = u2;
                    } else {
                        t0 = 0x28;
                        u0 = (*(float *)((t5 + t0)));
                        u0 = (u0 - 70.0f);
                        *(float *)((t5 + t0)) = u0;
                        u1 = u0;
                    }
                    u2 = u1;
                } else {
                    t0 = 0x28;
                    u0 = (*(float *)((t5 + t0)));
                    u0 = (u0 - 210.0f);
                    *(float *)((t5 + t0)) = u0;
                    u2 = u0;
                }
                t5 = 0xC0FF8B4;
                u1 = u2;
            }
            u0 = u1;
            t3 = t5;
            t4 = (t4 + 0x1);
            if ((int)t4 >= (int)0x3) {
                break;
            }
        }
        t1 = (t1 + 0x1);
    }
    return t0;
}

