/* game/menu/select: functions 0C0FD0E8-0C0FE0E4, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o10_int { char p[0x10]; int v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o30_float { char p[0x30]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oD0_int { char p[0xD0]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c037498(int, int, int, int);
int FUN_0c058a6e(int, int, int, int, int, int);
int FUN_0c1171f0(int);
float math_sin_angle16(int);
extern int FUN_0c187798();
int FUN_0c0fd6e4(int a4, int a5, int a6);
int FUN_0c0fde34(int a4, int a5, int a6);

int FUN_0c0fd6e4(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    t0 = *(signed char *)((a4 + 0x14));
    t1 = *(int *)((a4 + 0x10));
    if (t0 != 0) {
        t2 = t0;
        if (t0 != 1) {
        } else {
            *(volatile int *)((a4 + 0xC8));
            t0 = ((int (*)(int, int, int))(FUN_0c187798))(a4, a5, a6);
            if ((*(signed char *)((0xA8 + (*(int *)((a4 + 0x10)))))) == 1) {
                (((struct oA8_uchar *)(a4))->v) = 0x1;
            } else {
                (((struct oA8_uchar *)(a4))->v) = 0x0;
            }
            t0 = ((int (*)(void))(FUN_0c187798))();
            FUN_0c1171f0(a4);
            t0 = *(signed char *)((a4 + 0x15));
            switch (t0) {
            case 0:
                if ((*(signed char *)(((t1 + 0x41C) + 0x0))) != 1) {
                } else {
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                }
                break;
            case 1:
                if ((*(signed char *)(((t1 + 0x41C) + 0x0))) != 0) {
                    if ((int)(*(short *)((a4 + 0x1E))) < (int)0x20) {
                        *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x4);
                        if ((int)(*(short *)((a4 + 0x1E))) >= (int)0x20) {
                            *(unsigned short *)((a4 + 0x1E)) = 0x20;
                            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        }
                    }
                } else {
                    (((struct o15_uchar *)(a4))->v) = 0x3;
                }
                break;
            case 2:
                if ((*(signed char *)(((t1 + 0x41C) + 0x0))) == 0) {
                    (((struct o15_uchar *)(a4))->v) = 0x3;
                }
                break;
            case 3:
                if ((*(signed char *)(((t1 + 0x41C) + 0x0))) == 1) {
                    (((struct o15_uchar *)(a4))->v) = 0x1;
                } else {
                    if ((int)(*(short *)((a4 + 0x1E))) > 0) {
                        *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) - 1);
                        if ((int)(*(short *)((a4 + 0x1E))) <= 0) {
                            *(unsigned short *)((a4 + 0x1E)) = 0x0;
                            (((struct o15_uchar *)(a4))->v) = 0x0;
                        }
                    }
                }
                break;
            }
            if ((*(signed char *)((a4 + 0x15))) != 0) {
                t0 = (((struct oC4_int *)(a4))->v);
                (((struct o7C_uint *)(t0))->v) = (int)((float)((((struct o7C_int *)(t0))->v)) + (((float)((((struct o4_int *)0xC28EC14)->v)) * ((float)(*(short *)((a4 + 0x1E))) / 32.0f))));
                t0 = (((struct oC8_int *)(a4))->v);
                u0 = (((((struct o8_float *)0xC28EC14)->v)) * (math_sin_angle16((*(short *)((a4 + 0x1C))))));
                (((struct o7C_uint *)(t0))->v) = ((int)((((u0 * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF);
                *(unsigned short *)((a4 + 0x1C)) = (int)((float)(*(short *)((a4 + 0x1C))) + (((float)((((struct o0_int *)0xC28EC14)->v)) * ((float)(*(short *)((a4 + 0x1E))) / 32.0f))));
                (((struct o14_float *)(((((struct oC8_int *)(a4))->v))))->v) = ((float)(*(short *)((a4 + 0x1E))) / 32.0f);
            } else {
                (((struct o14_float *)(((((struct oC8_int *)(a4))->v))))->v) = 0.0f;
            }
            t2 = 0x14;
        }
        t0 = t2;
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o15_uchar *)(a4))->v) = 0x0;
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0x1F;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        t2 = ((int (*)(int, int, int))(FUN_0c187798))(a4, a5, a6);
        t2 = ((int (*)(void))(FUN_0c187798))();
        FUN_0c037498(((((struct oC4_int *)(a4))->v)), 0x0, 0x1A, (*(int *)0xC4B410C));
        FUN_0c037498(((((struct oC8_int *)(a4))->v)), 0x0, 0x1B, (*(int *)0xC4B410C));
        t2 = (((struct oC8_int *)(a4))->v);
        *(unsigned short *)((t2 + 0x6)) = ((*(short *)((t2 + 0x6))) | 0x400);
        *(unsigned short *)((a4 + 0x1E)) = 0x0;
        *(volatile int *)((a4 + 0xC8));
        t2 = ((int (*)(void))(FUN_0c187798))();
        if ((*(signed char *)((0xA8 + (*(int *)((a4 + 0x10)))))) == 1) {
            (((struct oA8_uchar *)(a4))->v) = 0x1;
        } else {
            (((struct oA8_uchar *)(a4))->v) = 0x0;
        }
        t2 = ((int (*)(void))(FUN_0c187798))();
        FUN_0c1171f0(a4);
        t2 = *(signed char *)((a4 + 0x15));
        switch (t2) {
        case 0:
            if ((*(signed char *)(((t1 + 0x41C) + 0x0))) != 1) {
            } else {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            }
            break;
        case 1:
            if ((*(signed char *)(((t1 + 0x41C) + 0x0))) != 0) {
                if ((int)(*(short *)((a4 + 0x1E))) < (int)0x20) {
                    *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x4);
                    if ((int)(*(short *)((a4 + 0x1E))) >= (int)0x20) {
                        *(unsigned short *)((a4 + 0x1E)) = 0x20;
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    }
                }
            } else {
                (((struct o15_uchar *)(a4))->v) = 0x3;
            }
            break;
        case 2:
            if ((*(signed char *)(((t1 + 0x41C) + 0x0))) == 0) {
                (((struct o15_uchar *)(a4))->v) = 0x3;
            }
            break;
        case 3:
            if ((*(signed char *)(((t1 + 0x41C) + 0x0))) == 1) {
                (((struct o15_uchar *)(a4))->v) = 0x1;
            } else {
                if ((int)(*(short *)((a4 + 0x1E))) > 0) {
                    *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) - 1);
                    if ((int)(*(short *)((a4 + 0x1E))) <= 0) {
                        *(unsigned short *)((a4 + 0x1E)) = 0x0;
                        (((struct o15_uchar *)(a4))->v) = 0x0;
                    }
                }
            }
            break;
        }
        if ((*(signed char *)((a4 + 0x15))) != 0) {
            t1 = (((struct oC4_int *)(a4))->v);
            (((struct o7C_uint *)(t1))->v) = (int)((float)((((struct o7C_int *)(t1))->v)) + (((float)((((struct o4_int *)0xC28EC14)->v)) * ((float)(*(short *)((a4 + 0x1E))) / 32.0f))));
            t1 = (((struct oC8_int *)(a4))->v);
            u0 = (((((struct o8_float *)0xC28EC14)->v)) * (math_sin_angle16((*(short *)((a4 + 0x1C))))));
            (((struct o7C_uint *)(t1))->v) = ((int)((((u0 * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF);
            *(unsigned short *)((a4 + 0x1C)) = (int)((float)(*(short *)((a4 + 0x1C))) + (((float)((((struct o0_int *)0xC28EC14)->v)) * ((float)(*(short *)((a4 + 0x1E))) / 32.0f))));
            (((struct o14_float *)(((((struct oC8_int *)(a4))->v))))->v) = ((float)(*(short *)((a4 + 0x1E))) / 32.0f);
        } else {
            (((struct o14_float *)(((((struct oC8_int *)(a4))->v))))->v) = 0.0f;
        }
        t0 = 0x14;
    }
    return t0;
}

int FUN_0c0fde34(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        t1 = t0;
        if (t0 != 1) {
        } else {
            t0 = *(int *)((a4 + 0x10));
            *(volatile int *)((a4 + 0xD0));
            *(volatile short *)((t0 + 0x1C));
            t0 = ((int (*)(int, int, int))(FUN_0c187798))(a4, a5, a6);
            if ((int)((((struct o22_short *)(a4))->v)) < (int)((((struct o0_int *)0xC28ECBC)->v))) {
                t0 = 0x0;
                t2 = (((((struct o0_int *)0xC28ECBC)->v)));
                t3 = 0xC28EC5C;
                t4 = 0xC28EC6C;
                t5 = ((((struct o22_short *)(a4))->v));
            } else {
                t0 = (((((struct o0_int *)0xC28ECBC)->v)));
                t2 = (((((struct o4_int *)0xC28ECBC)->v)));
                t3 = 0xC28EC6C;
                t4 = 0xC28EC5C;
                t5 = ((((struct o22_short *)(a4))->v));
            }
            FUN_0c058a6e((((((struct oD0_int *)(a4))->v)) + 0x14), t3, t4, t5, t2, t0);
            t0 = (((struct o22_short *)(a4))->v);
            (((struct o22_ushort *)(a4))->v) = (t0 + 0x1);
            if ((int)(short)(t0 + 0x1) > (int)((((struct o4_int *)0xC28ECBC)->v))) {
                (((struct o22_ushort *)(a4))->v) = 0x0;
            }
            FUN_0c03744a(((((struct oCC_int *)(a4))->v)), 0x0, (*(int *)((((*(short *)(((*(int *)((a4 + 0x10))) + 0x1C))) << 2) + 0xC28ECC4))), ((((struct o0_int *)0xC4B410C)->v)));
            t0 = (((struct oCC_int *)(a4))->v);
            *(unsigned short *)((t0 + 0x6)) = ((*(short *)((t0 + 0x6))) | 0x400);
            FUN_0c058a6e((((((struct oCC_int *)(a4))->v)) + 0x14), 0xC28EB38, 0xC28EB28, ((((struct o20_short *)(a4))->v)), 0xA, 0x0);
            if (((((struct o20_short *)(a4))->v)) == 0) {
                FUN_0c03744a(((((struct oCC_int *)(a4))->v)), 0x0, (*(int *)((((*(short *)((a4 + 0x1E))) << 2) + 0xC28ECC4))), ((((struct o0_int *)0xC4B410C)->v)));
                t0 = (((struct oCC_int *)(a4))->v);
                *(unsigned short *)((t0 + 0x6)) = ((*(short *)((t0 + 0x6))) | 0x400);
                FUN_0c058a6e((((((struct oCC_int *)(a4))->v)) + 0x14), 0xC28EB28, 0xC28EB38, ((((struct o20_short *)(a4))->v)), 0xA, 0x0);
            }
            t0 = *(short *)(((*(int *)((a4 + 0x10))) + 0x1C));
            t2 = t0;
            if ((*(short *)((a4 + 0x1E))) != t0) {
                t0 = (((struct o20_short *)(a4))->v);
                (((struct o20_ushort *)(a4))->v) = (t0 + 0x1);
                t3 = 0x20;
                if ((int)(short)(t0 + 0x1) > (int)0xA) {
                    (((struct o20_ushort *)(a4))->v) = 0x0;
                    t0 = *(short *)(((*(int *)((a4 + 0x10))) + 0x1C));
                    *(unsigned short *)((a4 + 0x1E)) = t0;
                    t3 = t0;
                }
                t2 = t3;
            }
            t1 = t2;
        }
        t0 = t1;
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0x1F;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        (((struct o30_float *)(a4))->v) = (1.0f + 1.0f);
        FUN_0c1171f0(a4);
        FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x0, 0x0, ((((struct o0_int *)0xC4B410C)->v)));
        FUN_0c03744a(((((struct oD0_int *)(a4))->v)), 0x0, 0x3, ((((struct o0_int *)0xC4B410C)->v)));
        FUN_0c03744a(((((struct oC8_int *)(a4))->v)), 0x0, 0x0, ((((struct o10_int *)0xC4B410C)->v)));
        *(unsigned short *)((((((struct oD0_int *)(a4))->v)) + 0x6)) = 0x61F;
        t1 = *(int *)((a4 + 0x10));
        *(volatile int *)((a4 + 0xD0));
        *(volatile short *)((t1 + 0x1C));
        t1 = ((int (*)(void))(FUN_0c187798))();
        if ((int)((((struct o22_short *)(a4))->v)) < (int)((((struct o0_int *)0xC28ECBC)->v))) {
            t1 = 0x0;
            t2 = (((((struct o0_int *)0xC28ECBC)->v)));
            t3 = 0xC28EC5C;
            t4 = 0xC28EC6C;
            t5 = ((((struct o22_short *)(a4))->v));
        } else {
            t1 = (((((struct o0_int *)0xC28ECBC)->v)));
            t2 = (((((struct o4_int *)0xC28ECBC)->v)));
            t3 = 0xC28EC6C;
            t4 = 0xC28EC5C;
            t5 = ((((struct o22_short *)(a4))->v));
        }
        FUN_0c058a6e((((((struct oD0_int *)(a4))->v)) + 0x14), t3, t4, t5, t2, t1);
        t1 = (((struct o22_short *)(a4))->v);
        (((struct o22_ushort *)(a4))->v) = (t1 + 0x1);
        if ((int)(short)(t1 + 0x1) > (int)((((struct o4_int *)0xC28ECBC)->v))) {
            (((struct o22_ushort *)(a4))->v) = 0x0;
        }
        FUN_0c03744a(((((struct oCC_int *)(a4))->v)), 0x0, (*(int *)((((*(short *)(((*(int *)((a4 + 0x10))) + 0x1C))) << 2) + 0xC28ECC4))), ((((struct o0_int *)0xC4B410C)->v)));
        t1 = (((struct oCC_int *)(a4))->v);
        *(unsigned short *)((t1 + 0x6)) = ((*(short *)((t1 + 0x6))) | 0x400);
        FUN_0c058a6e((((((struct oCC_int *)(a4))->v)) + 0x14), 0xC28EB38, 0xC28EB28, ((((struct o20_short *)(a4))->v)), 0xA, 0x0);
        if (((((struct o20_short *)(a4))->v)) == 0) {
            FUN_0c03744a(((((struct oCC_int *)(a4))->v)), 0x0, (*(int *)((((*(short *)((a4 + 0x1E))) << 2) + 0xC28ECC4))), ((((struct o0_int *)0xC4B410C)->v)));
            t1 = (((struct oCC_int *)(a4))->v);
            *(unsigned short *)((t1 + 0x6)) = ((*(short *)((t1 + 0x6))) | 0x400);
            FUN_0c058a6e((((((struct oCC_int *)(a4))->v)) + 0x14), 0xC28EB28, 0xC28EB38, ((((struct o20_short *)(a4))->v)), 0xA, 0x0);
        }
        t1 = *(short *)(((*(int *)((a4 + 0x10))) + 0x1C));
        t2 = t1;
        if ((*(short *)((a4 + 0x1E))) != t1) {
            t1 = (((struct o20_short *)(a4))->v);
            (((struct o20_ushort *)(a4))->v) = (t1 + 0x1);
            t3 = 0x20;
            if ((int)(short)(t1 + 0x1) > (int)0xA) {
                (((struct o20_ushort *)(a4))->v) = 0x0;
                t1 = *(short *)(((*(int *)((a4 + 0x10))) + 0x1C));
                *(unsigned short *)((a4 + 0x1E)) = t1;
                t3 = t1;
            }
            t2 = t3;
        }
        t0 = t2;
    }
    return t0;
}
