/* game/demo: functions 0C05C5F0-0C05D106, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o3714_uchar { char p[0x3714]; unsigned char v; };
struct o3719_uchar { char p[0x3719]; unsigned char v; };
struct o3720_uchar { char p[0x3720]; unsigned char v; };
struct o38_int { char p[0x38]; int v; };
struct o3C_int { char p[0x3C]; int v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o4_float { char p[0x4]; float v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c030dd0(int, int);
int FUN_0c036de8(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c038548(int);
int FUN_0c038e88(int);
int FUN_0c03ea04(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c03eff6(void);
int FUN_0c03f40c(int);
int FUN_0c040034(void);
int FUN_0c0527e6(void);
int FUN_0c0573c0(int, int, int);
int FUN_0c0573cc(int, int, int);
int FUN_0c057cfa(int, int);
int FUN_0c059c7a(int, int);
int FUN_0c05aab6(int, int);
int game_reset_objects(void);
int FUN_0c05b1d4(void);
int FUN_0c05b1e8(void);
int FUN_0c05b204(void);
int FUN_0c05f7a0(int);
int FUN_0c06785c(void);
int FUN_0c0bb47e(void);
int FUN_0c0f6cac(void);
extern int FUN_0c0f7874();
int FUN_0c14e8d0(void);
int FUN_0c15ecc6(int);
int FUN_0c179ac0(void);
int FUN_0c187798(int, int, int);
int memset(int, int, int);
int FUN_0c187cac(int, int, int, int, int);
int FUN_0c05c5f0(int a4, float f4, float f5);
int FUN_0c05c632(void);
int FUN_0c05c70a(void);
int FUN_0c05c71c(void);
int FUN_0c05c774(void);
int FUN_0c05c934(void);
int FUN_0c05c9a6(void);
int FUN_0c05ca80(int a4, int a5, int a6, float f4);
int FUN_0c05cba4(int a4, int a5, int a6);
int FUN_0c05cf04(void);
int FUN_0c05cf3c(void);
int FUN_0c05cf6c(int a4);
int FUN_0c05cf8e(void);
int FUN_0c05cf9a(void);
int FUN_0c05d05c(void);

int FUN_0c05c5f0(int a4, float f4, float f5)
{
    int stk[7];
    register float u0;

    u0 = (((struct o0_float *)0xC05C73C)->v);
    *(float *)((((int)stk + 0) + 0x0)) = (f4 * u0);
    (((struct o4_float *)(((int)stk + 0)))->v) = ((((struct o4_float *)0xC05C73C)->v));
    (((struct o8_float *)(((int)stk + 0)))->v) = (f5 * u0);
    (((struct oC_float *)(((int)stk + 0)))->v) = u0;
    (((struct o10_float *)(((int)stk + 0)))->v) = 0.0f;
    (((struct o18_float *)(((int)stk + 0)))->v) = 1.0f;
    (((struct o14_float *)(((int)stk + 0)))->v) = 1.0f;
    return (FUN_0c057cfa(((int)stk + 0), a4));
}

int FUN_0c05c632(void)
{
    *(unsigned char *)0xC541F40 = ((*(signed char *)0xC541F40) + 0x1);
    FUN_0c03eff6();
    if ((*(signed char *)0xC541F66) != 0) {
        if ((*(signed char *)0xC5429AA) != 0) {
            return FUN_0c05b1e8();
        }
        return FUN_0c05b1d4();
    }
    return FUN_0c05b204();
}

int FUN_0c05c70a(void)
{
    FUN_0c05f7a0(0x4);
    return FUN_0c05aab6(0x0, 0x3);
}

int FUN_0c05c71c(void)
{
    register int t0;

    t0 = *(signed char *)0xC541F40;
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 1) {
            return FUN_0c05c70a();
        }
        return ((int (*)(void))(0xC05C662))();
    }
    FUN_0c05c632();
    return ((int (*)(void))(0xC05C662))();
}

int FUN_0c05c774(void)
{
    int stk[52];
    register int t0;
    register int t12;
    register int t13;
    register int t18;
    register int t30;
    register int t31;
    register int t32;

    t0 = 0x0;
    for (;;) {
        *(unsigned char *)(((0xC4 + ((int)stk + 0)) + t0)) = (*(signed char *)(((0xC542267 + t0) + 0x0)));
        *(unsigned char *)((((t0 << 2) + (0x9C + ((int)stk + 0))) + 0x0)) = (*(signed char *)(((0xC542271 + (t0 << 2)) + 0x0)));
        *(unsigned char *)((((t0 << 2) + (0x9C + ((int)stk + 0))) + 0x1)) = (*(signed char *)(((0xC542271 + (t0 << 2)) + 0x1)));
        *(unsigned char *)((((t0 << 2) + (0x9C + ((int)stk + 0))) + 0x2)) = (*(signed char *)(((0xC542271 + (t0 << 2)) + 0x2)));
        *(unsigned int *)(((((int)stk + 0) + 0x74) + (t0 << 2))) = (*(int *)(((0xC54229C + (t0 << 2)) + 0x0)));
        *(unsigned char *)((((((int)stk + 0) + 0x68) + t0) + 0x0)) = (*(signed char *)(((0xC54237C + t0) + 0x0)));
        *(unsigned char *)((((((int)stk + 0) + 0x5C) + t0) + 0x0)) = (*(signed char *)(((0xC5422C4 + t0) + 0x0)));
        *(unsigned char *)((((((int)stk + 0) + 0x34) + (t0 << 2)) + 0x0)) = (*(signed char *)(((0xC5422CE + (t0 << 2)) + 0x0)));
        *(unsigned char *)((((((int)stk + 0) + 0x34) + (t0 << 2)) + 0x1)) = (*(signed char *)(((0xC5422CE + (t0 << 2)) + 0x1)));
        *(unsigned char *)((((((int)stk + 0) + 0x34) + (t0 << 2)) + 0x2)) = (*(signed char *)(((0xC5422CE + (t0 << 2)) + 0x2)));
        *(unsigned int *)(((((int)stk + 0) + 0xC) + (t0 << 2))) = (*(int *)(((0xC5422F8 + (t0 << 2)) + 0x0)));
        t12 = t0;
        t13 = (0xC542386 + t0);
        t0 = (t0 + 0x1);
        *(unsigned char *)((((int)stk + 0) + t12)) = (*(signed char *)((t13 + 0x0)));
        if ((int)t0 >= (int)0xA) {
            break;
        }
    }
    memset(0xC5421F8, 0x0, 0x1A4);
    t18 = 0x0;
    for (;;) {
        *(unsigned char *)(((0xC542267 + t18) + 0x0)) = (*(signed char *)(((0xC4 + ((int)stk + 0)) + t18)));
        *(unsigned char *)(((0xC542271 + (t18 << 2)) + 0x0)) = (*(signed char *)((((t18 << 2) + (0x9C + ((int)stk + 0))) + 0x0)));
        *(unsigned char *)(((0xC542271 + (t18 << 2)) + 0x1)) = (*(signed char *)((((t18 << 2) + (0x9C + ((int)stk + 0))) + 0x1)));
        *(unsigned char *)(((0xC542271 + (t18 << 2)) + 0x2)) = (*(signed char *)((((t18 << 2) + (0x9C + ((int)stk + 0))) + 0x2)));
        *(unsigned int *)(((0xC54229C + (t18 << 2)) + 0x0)) = (*(int *)(((((int)stk + 0) + 0x74) + (t18 << 2))));
        *(unsigned char *)(((0xC54237C + t18) + 0x0)) = (*(signed char *)((((((int)stk + 0) + 0x68) + t18) + 0x0)));
        *(unsigned char *)(((0xC5422C4 + t18) + 0x0)) = (*(signed char *)((((((int)stk + 0) + 0x5C) + t18) + 0x0)));
        *(unsigned char *)(((0xC5422CE + (t18 << 2)) + 0x0)) = (*(signed char *)((((((int)stk + 0) + 0x34) + (t18 << 2)) + 0x0)));
        *(unsigned char *)(((0xC5422CE + (t18 << 2)) + 0x1)) = (*(signed char *)((((((int)stk + 0) + 0x34) + (t18 << 2)) + 0x1)));
        *(unsigned char *)(((0xC5422CE + (t18 << 2)) + 0x2)) = (*(signed char *)((((((int)stk + 0) + 0x34) + (t18 << 2)) + 0x2)));
        *(unsigned int *)(((0xC5422F8 + (t18 << 2)) + 0x0)) = (*(int *)(((((int)stk + 0) + 0xC) + (t18 << 2))));
        t30 = *(signed char *)((((int)stk + 0) + t18));
        t31 = t18;
        t32 = (0xC542386 + t18);
        t18 = (t18 + 0x1);
        *(unsigned char *)((t32 + 0x0)) = t30;
        if ((int)t18 >= (int)0xA) {
            break;
        }
    }
    return t31;
}

int FUN_0c05c934(void)
{
    register int t6;

    (((struct o0_uchar *)0xC541F41)->v) = 0x1;
    (((struct o3_uchar *)0xC541F41)->v) = 0x0;
    (((struct o2_uchar *)0xC541F41)->v) = 0x0;
    (((struct o1_uchar *)0xC541F41)->v) = 0x0;
    game_reset_objects();
    (((struct o8_uint *)0xC542440)->v) = 0x0;
    (((struct o4_uint *)0xC542440)->v) = 0x0;
    (((struct o0_uint *)0xC542440)->v) = 0x0;
    FUN_0c03eff6();
    FUN_0c0527e6();
    FUN_0c05c774();
    if ((*(signed char *)0xC5421E2) != 0) {
        (((struct o0_uchar *)0xC541F41)->v) = 0x63;
    } else {
        t6 = *(signed char *)0xC54209D;
        if (t6 != 0) {
            if ((signed char)t6 == 1) {
                (((struct o0_uchar *)0xC541F41)->v) = 0x5;
            } else {
                (((struct o0_uchar *)0xC541F41)->v) = 0xA;
            }
        }
    }
    *(unsigned char *)0xC5421E2 = 0x0;
    *(unsigned char *)0xC54209D = 0x0;
    return 0x161;
}

int FUN_0c05c9a6(void)
{
    int stk[2];
    register int t18;

    if ((unsigned char)(*(signed char *)0xC541F42) == 0) {
        (((struct o1_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F42) + 0x1);
        *(unsigned short *)0xC541F4E = 0x12C;
        (((struct o8_uint *)0xC542440)->v) = 0x0;
        (((struct o4_uint *)0xC542440)->v) = 0x0;
        (((struct o0_uint *)0xC542440)->v) = 0x0;
        FUN_0c03eff6();
        FUN_0c036de8(0x3, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
        FUN_0c03ea04(0x3, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
        FUN_0c0527e6();
        game_reset_objects();
        FUN_0c059c7a(0x16, 0x0);
        FUN_0c0573c0(0xFFFFFFFF, 0x0, 0x1E);
        FUN_0c14e8d0();
    }
    if ((*(short *)0xC541F4E) == 33) {
        FUN_0c0573cc(0xFFFFFFFF, 0x0, 0x1E);
    }
    t18 = *(short *)0xC541F4E;
    *(unsigned short *)0xC541F4E = (t18 - 1);
    if ((short)(t18 - 1) == 0) {
        (((struct o0_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F41) + 0x1);
        (((struct o1_uchar *)0xC541F41)->v) = 0x0;
    }
    FUN_0c03f40c(0x5);
    FUN_0c038e88(0x5);
    FUN_0c03f40c(0x8);
    return FUN_0c038e88(0x8);
}

int FUN_0c05ca80(int a4, int a5, int a6, float f4)
{
    int stk[3];
    register int t0;
    register int t1;
    register int t2;
    register int t6;
    register int t17;
    register int t24;
    register int t31;
    register int t44;
    register int t45;
    register int t49;
    register int t60;
    register int t67;
    register int t74;

    t0 = *(signed char *)0xC541F42;
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 1) {
        } else {
            t1 = ((int (*)(int, int, int, float))(FUN_0c0f7874))(0xC541F42, a5, a6, f4);
            t2 = *(signed char *)0xC541F44;
            if ((unsigned char)t2 != 0) {
                if ((unsigned char)t2 != 1) {
                    if ((unsigned char)t2 != 2) {
                        if ((unsigned char)t2 != 3) {
                        } else {
                            t6 = *(short *)0xC541F50;
                            *(unsigned short *)0xC541F50 = (t6 - 1);
                            if ((int)(short)(t6 - 1) <= 0) {
                                (((struct o0_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F41) + 0x1);
                                (((struct o1_uchar *)0xC541F41)->v) = 0x0;
                                (((struct o2_uchar *)0xC541F41)->v) = 0x0;
                            }
                        }
                    } else {
                        if (((*(int *)0xC542098) & 16) != 0) {
                            FUN_0c05cf8e();
                        }
                        FUN_0c0f6cac();
                        t17 = *(short *)0xC541F50;
                        *(unsigned short *)0xC541F50 = (t17 - 1);
                        if ((int)(short)(t17 - 1) <= 0) {
                            (((struct o3_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F44) + 0x1);
                            *(unsigned short *)0xC541F50 = 0x21;
                            FUN_0c0573cc(0xFFFFFFFF, 0x0, 0x1E);
                        }
                    }
                } else {
                    t24 = *(short *)0xC541F50;
                    *(unsigned short *)0xC541F50 = (t24 - 1);
                    if ((int)(short)(t24 - 1) <= 0) {
                        (((struct o3_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F44) + 0x1);
                        *(unsigned short *)0xC541F50 = 0x12C;
                    }
                }
            } else {
                (((struct o3_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F44) + 0x1);
                *(unsigned short *)0xC541F50 = 0xB4;
                t31 = *(short *)0xC541F50;
                *(unsigned short *)0xC541F50 = (t31 - 1);
                if ((int)(short)(t31 - 1) <= 0) {
                    (((struct o3_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F44) + 0x1);
                    *(unsigned short *)0xC541F50 = 0x12C;
                }
            }
        }
    } else {
        (((struct o1_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F42) + 0x1);
        (((struct o2_uchar *)0xC541F41)->v) = 0x0;
        (((struct o3_uchar *)0xC541F41)->v) = 0x0;
        FUN_0c03eff6();
        FUN_0c036de8(0x2, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
        FUN_0c0573c0(0xFFFFFFFF, 0x0, 0x1E);
        t44 = ((int (*)(void))(FUN_0c0f7874))();
        t45 = *(signed char *)0xC541F44;
        if ((unsigned char)t45 != 0) {
            if ((unsigned char)t45 != 1) {
                if ((unsigned char)t45 != 2) {
                    if ((unsigned char)t45 != 3) {
                    } else {
                        t49 = *(short *)0xC541F50;
                        *(unsigned short *)0xC541F50 = (t49 - 1);
                        if ((int)(short)(t49 - 1) <= 0) {
                            (((struct o0_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F41) + 0x1);
                            (((struct o1_uchar *)0xC541F41)->v) = 0x0;
                            (((struct o2_uchar *)0xC541F41)->v) = 0x0;
                        }
                    }
                } else {
                    if (((*(int *)0xC542098) & 16) != 0) {
                        FUN_0c05cf8e();
                    }
                    FUN_0c0f6cac();
                    t60 = *(short *)0xC541F50;
                    *(unsigned short *)0xC541F50 = (t60 - 1);
                    if ((int)(short)(t60 - 1) <= 0) {
                        (((struct o3_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F44) + 0x1);
                        *(unsigned short *)0xC541F50 = 0x21;
                        FUN_0c0573cc(0xFFFFFFFF, 0x0, 0x1E);
                    }
                }
            } else {
                t67 = *(short *)0xC541F50;
                *(unsigned short *)0xC541F50 = (t67 - 1);
                if ((int)(short)(t67 - 1) <= 0) {
                    (((struct o3_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F44) + 0x1);
                    *(unsigned short *)0xC541F50 = 0x12C;
                }
            }
        } else {
            (((struct o3_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F44) + 0x1);
            *(unsigned short *)0xC541F50 = 0xB4;
            t74 = *(short *)0xC541F50;
            *(unsigned short *)0xC541F50 = (t74 - 1);
            if ((int)(short)(t74 - 1) <= 0) {
                (((struct o3_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F44) + 0x1);
                *(unsigned short *)0xC541F50 = 0x12C;
            }
        }
    }
    FUN_0c03f40c(0x5);
    FUN_0c038548(0x5);
    FUN_0c038e88(0x5);
    FUN_0c03f40c(0x8);
    return FUN_0c038e88(0x8);
}

int FUN_0c05cba4(int a4, int a5, int a6)
{
    int stk[13];
    int t5;
    register int t6;
    register int t8;
    register int t10;
    register int t30;
    register int t31;
    register int t40;
    register int t49;
    register int t62;
    register int t71;
    register int t75;

    FUN_0c187798(a4, a5, a6);
    { struct mvb23 { char b[23]; }; *(struct mvb23 *)(((int)stk + 0)) = *(struct mvb23 *)(0xC1C3C38); }
    if ((unsigned char)(*(signed char *)0xC541F42) == 0) {
        (((struct o1_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F42) + 0x1);
        (((struct o2_uchar *)0xC541F41)->v) = 0x0;
        *(unsigned short *)0xC541F4E = 0x21;
        FUN_0c0573c0(0xFFFFFFFF, 0x0, 0x1E);
        FUN_0c03eff6();
        *(unsigned char *)0xC5429B4 = 0x0;
        t5 = 0x0;
        t6 = 0x0;
        for (;;) {
            (((struct o3714_uchar *)(((t6 * 0x3938) + 0xC532498)))->v) = 0x1;
            (((struct o3720_uchar *)(((t6 * 0x3938) + 0xC532498)))->v) = 0x1;
            (((struct o3719_uchar *)(((t6 * 0x3938) + 0xC532498)))->v) = t6;
            for (;;) {
                t8 = (int)((int)(FUN_0c179ac0()) % (int)0xC);
                t10 = t8;
                if ((*(int *)((0xC1C3BDC + (t8 << 2)))) == -1) {
                    t10 = 0x0;
                }
                if ((((int)0x1 << (int)t10) & t5) == 0) {
                    break;
                }
            }
            *(unsigned char *)((((t6 * 0x3938) + 0xC532498) + 0x2)) = t10;
            t6 = (t6 + 0x1);
            t5 = (t5 | ((int)0x1 << (int)t10));
            if ((int)t6 >= (int)0x4) {
                break;
            }
        }
        *(unsigned char *)0xC542237 = ((int)((int)(FUN_0c179ac0()) % (int)0x5));
        *(unsigned char *)0xC5421F8 = 0x0;
        FUN_0c036de8(0x8, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
        FUN_0c036de8(0x10, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
        FUN_0c06785c();
        FUN_0c0bb47e();
    }
    FUN_0c040034();
    t30 = *(signed char *)0xC541F43;
    if ((unsigned char)t30 != 0) {
        if ((unsigned char)t30 != 1) {
            if ((unsigned char)t30 != 2) {
                if ((unsigned char)t30 != 3) {
                    t31 = *(short *)0xC541F4E;
                    *(unsigned short *)0xC541F4E = (t31 - 1);
                    t75 = (unsigned char)t30;
                    if ((int)(short)(t31 - 1) <= 0) {
                        (((struct o0_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F41) + 0x1);
                        (((struct o1_uchar *)0xC541F41)->v) = 0x0;
                        t75 = 0x0;
                    }
                } else {
                    FUN_0c057cfa((((int)stk + 0) + 0x18), ((int)stk + 0));
                    if (((*(int *)0xC542098) & 16) != 0) {
                        FUN_0c05cf8e();
                    }
                    t40 = *(short *)0xC541F4E;
                    *(unsigned short *)0xC541F4E = (t40 - 1);
                    t75 = (short)(t40 - 1);
                    if ((int)(short)(t40 - 1) <= 0) {
                        (((struct o2_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F43) + 0x1);
                        FUN_0c0573cc(0xFFFFFFFF, 0x0, 0x1E);
                        *(unsigned short *)0xC541F4E = 0x21;
                        t75 = 0x21;
                    }
                }
            } else {
                t49 = *(short *)0xC541F4E;
                *(unsigned short *)0xC541F4E = (t49 - 1);
                t75 = (unsigned char)t30;
                if ((int)(short)(t49 - 1) <= 0) {
                    (((struct o2_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F43) + 0x1);
                    *(unsigned short *)0xC541F4E = 0x708;
                    t75 = 0x708;
                }
            }
        } else {
            FUN_0c057cfa((((int)stk + 0) + 0x18), ((int)stk + 0));
            if (((*(int *)0xC542098) & 16) != 0) {
                FUN_0c05cf8e();
            }
            t62 = *(short *)0xC541F4E;
            *(unsigned short *)0xC541F4E = (t62 - 1);
            t75 = (short)(t62 - 1);
            if ((int)(short)(t62 - 1) <= 0) {
                (((struct o2_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F43) + 0x1);
                FUN_0c15ecc6(0x0);
                *(unsigned short *)0xC541F4E = 0x384;
                t75 = 0x384;
            }
        }
    } else {
        t71 = *(short *)0xC541F4E;
        *(unsigned short *)0xC541F4E = (t71 - 1);
        t75 = (unsigned char)t30;
        if ((int)(short)(t71 - 1) <= 0) {
            (((struct o2_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F43) + 0x1);
            *(unsigned short *)0xC541F4E = 0x4B0;
            t75 = 0x4B0;
        }
    }
    return t75;
}

int FUN_0c05cf04(void)
{
    return 0x1;
}

int FUN_0c05cf3c(void)
{
    register int t0;

    t0 = FUN_0c05cf04();
    if ((int)t0 > (int)0x1) {
        FUN_0c187cac(0xC4B107C, 0x0, 0x0, 0x0, 0xC1C3DC0);
        return FUN_0c05c5f0(0xC4B107C, ((((struct o4_float *)0xC05D114)->v)), ((((struct o0_float *)0xC05D114)->v)));
    }
    return t0;
}

int FUN_0c05cf6c(int a4)
{
    FUN_0c05cf3c();
    return FUN_0c05c5f0((*(int *)(((((a4 << 2) << 2) + 0xC1C3C50) + 0xC))), (*(float *)(((((a4 << 2) << 2) + 0xC1C3C50) + 0x0))), ((((struct o4_float *)((((a4 << 2) << 2) + 0xC1C3C50)))->v)));
}

int FUN_0c05cf8e(void)
{
    return FUN_0c05cf6c(((((*(signed char *)0xC5429B5) == 0)) ? 1 : 0));
}

int FUN_0c05cf9a(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    if ((*(signed char *)0xC5429B5) == 0) {
        t0 = (((struct o38_int *)0xC5423D0)->v);
        if (t0 == 0) {
            t1 = (((struct o0_int *)0xC5423D0)->v);
            if (t1 != 0) {
                if (t1 != 1) {
                    if (t1 != 2) {
                        return t1;
                    }
                    return FUN_0c05cf6c(0x4);
                }
                return FUN_0c05cf6c(0x3);
            }
            return FUN_0c05cf6c(0x2);
        }
        t1 = t0;
        t0 = 0x0;
        for (;;) {
            if ((unsigned int)t0 > (unsigned int)((((struct o3C_int *)0xC5423D0)->v))) {
                break;
            }
            t2 = t0;
            t2 = (t2 << 1);
            t1 = t0;
            t2 = (t2 + t1);
            t1 = 0xC54239C;
            t1 = (t1 + 0x28);
            t3 = *(int *)(((((t0 << 2) << 2) + t1) + 0xC));
            if (t3 != 0) {
                if (t3 != 1) {
                    if (t3 != 2) {
                        t3 = t1;
                    } else {
                        t4 = 0x7;
                        if (((((struct o3C_int *)0xC5423D0)->v)) == 3) {
                            t4 = 0xD;
                        }
                        FUN_0c05cf6c((t4 + t2));
                    }
                    t4 = t3;
                } else {
                    t3 = 0x6;
                    if (((((struct o3C_int *)0xC5423D0)->v)) == 3) {
                        t3 = 0xC;
                    }
                    FUN_0c05cf6c((t3 + t2));
                }
                t3 = t4;
            } else {
                t4 = 0x5;
                if (((((struct o3C_int *)0xC5423D0)->v)) == 3) {
                    t4 = 0xB;
                }
                FUN_0c05cf6c((t4 + t2));
            }
            t0 = (t0 + 0x1);
            t1 = t3;
        }
        return 0x70;
    }
    return FUN_0c05cf6c(0x0);
}

int FUN_0c05d05c(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    if ((*(signed char *)0xC5429B5) == 0) {
        if (((((struct o3C_int *)0xC5423CC)->v)) == 0) {
            t0 = 0xC2578D0;
            if (((((struct o0_int *)0xC5423CC)->v)) == 1) {
                t0 = 0xC2578CC;
            }
            t1 = (FUN_0c030dd0(t0, 0x0));
        } else {
            t0 = 0x0;
            for (;;) {
                if ((unsigned int)t0 > (unsigned int)(*(int *)0xC54240C)) {
                    break;
                }
                t2 = *(int *)0xC54240C;
                if ((*(int *)(((((t0 << 2) << 2) + 0xC5423C4) + 0x8))) == 1) {
                    t3 = 0xC2578D4;
                    if (t2 == 3) {
                        t3 = 0xC2578E4;
                    }
                    FUN_0c030dd0(t3, t0);
                } else {
                    t3 = 0xC2578DC;
                    if (t2 == 3) {
                        t3 = 0xC2578F4;
                    }
                    FUN_0c030dd0(t3, t0);
                }
                t0 = (t0 + 0x1);
            }
            t1 = 0x70;
        }
        t0 = t1;
    }
    return t0;
}
