/* game/effect: functions 0C1362E4-0C13669C, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o10C_int { char p[0x10C]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oCC_int { char p[0xCC]; int v; };
int FUN_0c037498(int, int, int, int);
int mdl_vtx_iter_begin(int, int);
int mdl_vtx_iter_next(void);
int mdl_vtx_get_pos(int);
int mdl_vtx_set_pos(int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int thunk_FUN_0c058310(int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
extern int FUN_0c187798();
int FUN_0c187a88(int, int, int);
int FUN_0c1362e4(int a4, int a5);
int FUN_0c1363a4(int a4);
int FUN_0c13648e(int a4, int a5, int a6, int a7);

int FUN_0c1362e4(int a4, int a5)
{
    register int t0;
    register int t12;
    register float u4;
    register int t9;

    t0 = FUN_0c03f444(0x5, 0x2, 0x1);
    t12 = t0;
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x4)) = 0xC13648E;
        FUN_0c187798();
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned char *)((t0 + 0x2)) = a5;
        FUN_0c187798();
        u4 = *(float *)0xC136418;
        (((struct o48_float *)(t0))->v) = u4;
        (((struct o44_float *)(t0))->v) = u4;
        (((struct o40_float *)(t0))->v) = u4;
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0x1F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        *(unsigned int *)((t0 + 0x10)) = a4;
        FUN_0c037498(((((struct oC4_int *)(t0))->v)), 0x0, 0x7, (*(int *)((((*(signed char *)((t0 + 0x1))) << 2) + 0xC4B40FC))));
        t9 = (((struct oC4_int *)(t0))->v);
        *(unsigned char *)((t9 + 0x0)) = 0x1;
        *(unsigned short *)((t9 + 0x6)) = 0x1F;
        FUN_0c187a88((((0x90 + t9) + 0x4) & 0xFFFFFFF8), (*(int *)((t9 + 0x8))), 0x698);
        *(unsigned int *)((t9 + 0x8)) = (((0x90 + t9) + 0x4) & 0xFFFFFFF8);
        (((struct o8C_float *)(t9))->v) = 1.0f;
        (((struct o88_float *)(t9))->v) = 1.0f;
        (((struct o84_float *)(t9))->v) = 1.0f;
        t12 = 0x84;
    }
    return t12;
}

int FUN_0c1363a4(int a4)
{
    int stk[4];
    register int t1;
    register int t9;
    register float u14;

    *(unsigned int *)(((int)stk + 0)) = ((((struct oC4_int *)(a4))->v));
    t1 = *(int *)(((0x41C + a4) + 0x8));
    *(unsigned int *)(((0x41C + a4) + 0x8)) = (t1 + 0xE38);
    *(unsigned int *)(((0x41C + a4) + 0xC)) = (t1 + 0xE38);
    *(unsigned int *)(((0x41C + a4) + 0x4)) = 0x0;
    mdl_vtx_iter_begin((*(int *)((((((struct o10C_int *)((*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC)))))->v)) + 0x0))), (*(int *)(((*(int *)(((int)stk + 0))) + 0x8))));
    for (;;) {
        t9 = mdl_vtx_iter_next();
        if (t9 != 0) {
            break;
        }
        mdl_vtx_get_pos((((int)stk + 0) + 0x4));
        u14 = (*(float *)(((int)stk + 8)));
        u14 = u14 + 30.0f * (math_sin_angle16((*(int *)(((0x41C + a4) + 0xC)))));
        *(float *)(((int)stk + 8)) = u14;
        mdl_vtx_set_pos((((int)stk + 0) + 0x4));
        if ((*(int *)(((0x41C + a4) + 0x4))) != 0) {
            *(unsigned int *)(((0x41C + a4) + 0xC)) = ((*(int *)(((0x41C + a4) + 0xC))) + 0x2AAA);
        }
        *(unsigned int *)(((0x41C + a4) + 0x4)) = ((-(*(int *)(((0x41C + a4) + 0x4)))) + 0x1);
    }
    return t9;
}

int FUN_0c13648e(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t2;
    int t3;
    register int t4;
    int t5;
    register int t6;
    register float u0;

    t4 = *(int *)((a4 + 0x10));
    (((struct oA8_uchar *)(a4))->v) = (*(signed char *)((t4 + 0xA8)));
    t5 = *(signed char *)((a4 + 0x14));
    if (t5 != 0) {
        if (t5 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        FUN_0c1363a4(a4);
        t5 = *(signed char *)((a4 + 0x2));
        if ((t5 != 0) && (t5 != 1)) {
            if (t5 != 2) {
                if (t5 != 3) {
                    t6 = t5;
                    if (t5 == 4) {
                        FUN_0c187798();
                        thunk_FUN_0c058310((((((struct oCC_int *)((((short)(*(signed char *)((t4 + 0x1))) * (short)0x3938) + 0xC532498)))->v)) + 0x28), (a4 + 0x28));
                        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) - 10.0f);
                        t5 = *(short *)((a4 + 0x1C));
                        *(unsigned short *)((a4 + 0x1C)) = (t5 - 1);
                        if (((short)(t5 - 1) != 0) && (t0 = *(signed char *)((t4 + 0x3715)), t0 == 20)) {
                            t5 = t0;
                        } else {
                            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                            t5 = 0x14;
                        }
                        t6 = t5;
                    }
                    t0 = t6;
                } else {
                    FUN_0c187798();
                    thunk_FUN_0c058310((((((struct oCC_int *)((((short)(*(signed char *)((t4 + 0x1))) * (short)0x3938) + 0xC532498)))->v)) + 0x28), (a4 + 0x28));
                    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) - 35.0f);
                    t5 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t5 - 1);
                    if (((short)(t5 - 1) != 0) && (t1 = *(signed char *)((t4 + 0x3715)), t1 == 20)) {
                        t5 = t1;
                    } else {
                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                        t5 = 0x14;
                    }
                    t0 = t5;
                }
                t1 = t0;
            } else {
                FUN_0c187798();
                thunk_FUN_0c058310((((((struct oCC_int *)((((short)(*(signed char *)((t4 + 0x1))) * (short)0x3938) + 0xC532498)))->v)) + 0x28), (a4 + 0x28));
                (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) - 28.0f);
                u0 = ((((struct o28_float *)(a4))->v));
                u0 = u0 + 30.0f * (math_sin_angle16(((*(int *)((a4 + 0x38))) + 0x4000)));
                (((struct o28_float *)(a4))->v) = u0;
                u0 = ((((struct o30_float *)(a4))->v));
                u0 = u0 + 30.0f * (math_cos_angle16(((*(int *)((a4 + 0x38))) + 0x4000)));
                (((struct o30_float *)(a4))->v) = u0;
                t0 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
                if ((short)(t0 - 1) != 0) {
                    t0 = *(signed char *)((t4 + 0x3715));
                    t5 = t0;
                    if (t0 != 19) {
                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                        t5 = 0x14;
                    }
                    t0 = t5;
                } else {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    t0 = 0x14;
                }
                t1 = t0;
            }
            t0 = t1;
        } else {
            FUN_0c187798();
            FUN_0c187798();
            *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
            if ((*(signed char *)((t4 + 0x3715))) != 26) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t1 = 0x14;
            } else {
                t5 = 0x16;
                if ((int)(*(signed char *)((t4 + 0x16))) < (int)0x2) {
                } else {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    t5 = 0x14;
                }
                t1 = t5;
            }
            t0 = t1;
        }
        return t0;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    t0 = *(signed char *)((a4 + 0x2));
    if ((t0 != 0) && (t0 != 1)) {
        if (t0 != 2) {
            if ((t0 == 3) || (t0 == 4)) {
                *(unsigned short *)((a4 + 0x1C)) = 0x258;
            }
        } else {
            *(unsigned short *)((a4 + 0x1C)) = 0x46;
        }
    } else {
        *(unsigned short *)((a4 + 0x1C)) = 0x0;
    }
    FUN_0c1363a4(a4);
    t0 = *(signed char *)((a4 + 0x2));
    if ((t0 != 0) && (t0 != 1)) {
        if (t0 != 2) {
            if (t0 != 3) {
                t1 = t0;
                if (t0 == 4) {
                    FUN_0c187798();
                    thunk_FUN_0c058310((((((struct oCC_int *)((((short)(*(signed char *)((t4 + 0x1))) * (short)0x3938) + 0xC532498)))->v)) + 0x28), (a4 + 0x28));
                    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) - 10.0f);
                    t0 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
                    if (((short)(t0 - 1) != 0) && (t2 = *(signed char *)((t4 + 0x3715)), t2 == 20)) {
                        t0 = t2;
                    } else {
                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                        t0 = 0x14;
                    }
                    t1 = t0;
                }
                t0 = t1;
            } else {
                FUN_0c187798();
                thunk_FUN_0c058310((((((struct oCC_int *)((((short)(*(signed char *)((t4 + 0x1))) * (short)0x3938) + 0xC532498)))->v)) + 0x28), (a4 + 0x28));
                (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) - 35.0f);
                t1 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
                if (((short)(t1 - 1) != 0) && (t3 = *(signed char *)((t4 + 0x3715)), t3 == 20)) {
                    t1 = t3;
                } else {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    t1 = 0x14;
                }
                t0 = t1;
            }
            t1 = t0;
        } else {
            FUN_0c187798();
            thunk_FUN_0c058310((((((struct oCC_int *)((((short)(*(signed char *)((t4 + 0x1))) * (short)0x3938) + 0xC532498)))->v)) + 0x28), (a4 + 0x28));
            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) - 28.0f);
            u0 = ((((struct o28_float *)(a4))->v));
            u0 = u0 + 30.0f * (math_sin_angle16(((*(int *)((a4 + 0x38))) + 0x4000)));
            (((struct o28_float *)(a4))->v) = u0;
            u0 = ((((struct o30_float *)(a4))->v));
            u0 = u0 + 30.0f * (math_cos_angle16(((*(int *)((a4 + 0x38))) + 0x4000)));
            (((struct o30_float *)(a4))->v) = u0;
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
            if ((short)(t0 - 1) != 0) {
                t0 = *(signed char *)((t4 + 0x3715));
                t2 = t0;
                if (t0 != 19) {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    t2 = 0x14;
                }
                t0 = t2;
            } else {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t0 = 0x14;
            }
            t1 = t0;
        }
        t0 = t1;
    } else {
        FUN_0c187798();
        FUN_0c187798();
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
        if ((*(signed char *)((t4 + 0x3715))) != 26) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t1 = 0x14;
        } else {
            t2 = 0x16;
            if ((int)(*(signed char *)((t4 + 0x16))) < (int)0x2) {
            } else {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t2 = 0x14;
            }
            t1 = t2;
        }
        t0 = t1;
    }
    return t0;
}
