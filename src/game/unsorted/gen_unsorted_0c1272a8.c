/* game/unsorted: functions 0C1272A8-0C127648, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o168_float { char p[0x168]; float v; };
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
struct o70_float { char p[0x70]; float v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c03744a(int, int, int, int);
extern int FUN_0c03f346();
int FUN_0c03f444(int, int, int);
int FUN_0c059e9a(int, int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c064f80(int);
int FUN_0c07e2f4(int, int);
int FUN_0c12764c(int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c187798(void);
int FUN_0c1272a8(int a4, int a5);
int FUN_0c127448(int a4, int a5, int a6, int a7);


int FUN_0c127448(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t2;
    int t3;
    register int t4;
    register int t5;
    register int t6;
    register float u0;

    t4 = *(signed char *)((a4 + 0x14));
    if (t4 != 0) {
        if (t4 != 1) {
            return ((int (*)(int, int, int, int))(FUN_0c03f346))(a4, a5, a6, a7);
        }
        *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
        if (((*(short *)((a4 + 0x1E))) & 0x1) != 0) {
            (((struct o7C_uint *)(((((struct oC8_int *)(a4))->v))))->v) = 0x0;
        } else {
            (((struct o7C_uint *)(((((struct oC8_int *)(a4))->v))))->v) = 0x4000;
        }
        if (((*(short *)((a4 + 0x1E))) & 2) != 0) {
            u0 = (((((struct o40_float *)(a4))->v)) + 0.200000003f);
        } else {
            u0 = (((((struct o40_float *)(a4))->v)) - 0.200000003f);
        }
        (((struct o40_float *)(a4))->v) = u0;
        (((struct o48_float *)(a4))->v) = u0;
        t4 = *(signed char *)((a4 + 0x15));
        if (t4 != 0) {
            if (t4 != 1) {
                t5 = t4;
                if (t4 == 2) {
                    (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) + (*(float *)(((((((struct o20_short *)(a4))->v)) << 2) + 0xC201BBC))));
                    (((struct o48_float *)(a4))->v) = ((((struct o40_float *)(a4))->v));
                    t4 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t4 - 1);
                    t6 = (short)(t4 - 1);
                    if ((short)(t4 - 1) == 0) {
                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                        t6 = 0x14;
                    }
                    t5 = t6;
                }
                t4 = t5;
            } else {
                (((struct o70_float *)(((((struct oC8_int *)(a4))->v))))->v) = 0.0f;
                t5 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t5 - 1);
                t6 = (short)(t5 - 1);
                if ((short)(t5 - 1) == 0) {
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    *(unsigned short *)((a4 + 0x1C)) = 0x3;
                    (((struct o12A_ushort *)(a4))->v) = 0x0;
                    t6 = 0x12A;
                }
                t4 = t6;
            }
            return t4;
        }
        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) - 30.0f);
        if ((int)((((struct o22_short *)(a4))->v)) > 0) {
            (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) - 1);
            if (((((struct o22_short *)(a4))->v)) == 0) {
                FUN_0c059e9a((*(int *)((a4 + 0x10))), 0x20, (a4 + 0x28));
            }
        }
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
        if ((int)(*(short *)((a4 + 0x1C))) > (int)0x1) {
            (((struct o70_float *)(((((struct oC8_int *)(a4))->v))))->v) = 30.0f;
        }
        if (((int)((((struct o20_short *)(a4))->v)) > (int)0x1) && (t0 = *(short *)((a4 + 0x1C)), t0 == 10)) {
            FUN_0c1272a8((*(int *)((a4 + 0x10))), (((((struct o20_short *)(a4))->v)) - 1));
        }
        t0 = FUN_0c064f80(a4);
        if (t0 != 0) {
            if (((int)(*(short *)((a4 + 0x1C))) < (int)0xA) && (t1 = (((struct o20_short *)(a4))->v), (int)t1 > (int)0x1)) {
                FUN_0c1272a8((*(int *)((a4 + 0x10))), (((((struct o20_short *)(a4))->v)) - 1));
            }
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            *(unsigned short *)((a4 + 0x1C)) = 0x3;
            FUN_0c12764c(a4, ((((struct o20_short *)(a4))->v)));
            if ((int)((((struct o22_short *)(a4))->v)) > 0) {
                (((struct o22_ushort *)(a4))->v) = 0x0;
                FUN_0c059e9a((*(int *)((a4 + 0x10))), 0x20, (a4 + 0x28));
            }
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        *(unsigned short *)((a4 + 0x1C)) = 0x0;
        *(unsigned short *)((a4 + 0x1E)) = 0x0;
        (((struct o22_ushort *)(a4))->v) = 0xB;
        *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
        if (((*(short *)((a4 + 0x1E))) & 0x1) != 0) {
            (((struct o7C_uint *)(((((struct oC8_int *)(a4))->v))))->v) = 0x0;
        } else {
            (((struct o7C_uint *)(((((struct oC8_int *)(a4))->v))))->v) = 0x4000;
        }
        if (((*(short *)((a4 + 0x1E))) & 2) != 0) {
            u0 = (((((struct o40_float *)(a4))->v)) + 0.200000003f);
        } else {
            u0 = (((((struct o40_float *)(a4))->v)) - 0.200000003f);
        }
        (((struct o40_float *)(a4))->v) = u0;
        (((struct o48_float *)(a4))->v) = u0;
        t0 = *(signed char *)((a4 + 0x15));
        if (t0 != 0) {
            if (t0 != 1) {
                t1 = t0;
                if (t0 == 2) {
                    (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) + (*(float *)(((((((struct o20_short *)(a4))->v)) << 2) + 0xC201BBC))));
                    (((struct o48_float *)(a4))->v) = ((((struct o40_float *)(a4))->v));
                    t0 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
                    t4 = (short)(t0 - 1);
                    if ((short)(t0 - 1) == 0) {
                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                        t4 = 0x14;
                    }
                    t1 = t4;
                }
                t0 = t1;
            } else {
                (((struct o70_float *)(((((struct oC8_int *)(a4))->v))))->v) = 0.0f;
                t1 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
                t4 = (short)(t1 - 1);
                if ((short)(t1 - 1) == 0) {
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    *(unsigned short *)((a4 + 0x1C)) = 0x3;
                    (((struct o12A_ushort *)(a4))->v) = 0x0;
                    t4 = 0x12A;
                }
                t0 = t4;
            }
            return t0;
        }
        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) - 30.0f);
        if ((int)((((struct o22_short *)(a4))->v)) > 0) {
            (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) - 1);
            if (((((struct o22_short *)(a4))->v)) == 0) {
                FUN_0c059e9a((*(int *)((a4 + 0x10))), 0x20, (a4 + 0x28));
            }
        }
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
        if ((int)(*(short *)((a4 + 0x1C))) > (int)0x1) {
            (((struct o70_float *)(((((struct oC8_int *)(a4))->v))))->v) = 30.0f;
        }
        if (((int)((((struct o20_short *)(a4))->v)) > (int)0x1) && (t2 = *(short *)((a4 + 0x1C)), t2 == 10)) {
            FUN_0c1272a8((*(int *)((a4 + 0x10))), (((((struct o20_short *)(a4))->v)) - 1));
        }
        t0 = FUN_0c064f80(a4);
        if (t0 != 0) {
            if (((int)(*(short *)((a4 + 0x1C))) < (int)0xA) && (t3 = (((struct o20_short *)(a4))->v), (int)t3 > (int)0x1)) {
                FUN_0c1272a8((*(int *)((a4 + 0x10))), (((((struct o20_short *)(a4))->v)) - 1));
            }
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            *(unsigned short *)((a4 + 0x1C)) = 0x3;
            FUN_0c12764c(a4, ((((struct o20_short *)(a4))->v)));
            if ((int)((((struct o22_short *)(a4))->v)) > 0) {
                (((struct o22_ushort *)(a4))->v) = 0x0;
                FUN_0c059e9a((*(int *)((a4 + 0x10))), 0x20, (a4 + 0x28));
            }
        }
    }
    if ((*(float *)0xC541098) > ((((struct o2C_float *)(a4))->v))) {
        return ((int (*)(int))(FUN_0c03f346))(a4);
    }
    return 0x2C;
}

int FUN_0c1272a8(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;

    t0 = FUN_0c03f444(0x1, 0x0, 0x2);
    t1 = t0;
    if (t0 == 0) {
    } else {
        t2 = 0x0;
        for (;;) {
            if ((int)t2 >= (int)((((struct oC0_int *)(t0))->v))) {
                break;
            }
            FUN_0c03744a((*(int *)((((t2 << 2) + (0xC4 + t0)) + 0x0))), t2, 0x0, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
            t2 = (t2 + 0x1);
        }
        *(unsigned int *)((t0 + 0x4)) = 0xC127448;
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned char *)((t0 + 0x2)) = (*(signed char *)((a4 + 0x2)));
        (((struct o20_ushort *)(t0))->v) = a5;
        (((struct oAC_ushort *)(t0))->v) = 0x1F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        *(unsigned int *)((t0 + 0x10)) = a4;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x34)) = *(struct mv3 *)((a4 + 0x34)); }  /* manual: _quick_odd_mvn r0 12, r1 r14 + 52, r2 r13 (a4) + 52 */
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)((a4 + 0x28)); }  /* manual: _quick_odd_mvn r0 12, r1 r14 + 40, r2 r13 + 40 */
        t2 = *(int *)((t0 + 0x38));
        t3 = *(int *)(((a5 << 2) + 0xC201BD4));
        u0 = ((((struct o28_float *)(t0))->v));
        u0 = u0 + (*(float *)(((0xC201BEC + (a5 << 2)) + 0x0))) * (math_cos_angle16((((-t2) + t3) + 0x14000)));
        (((struct o28_float *)(t0))->v) = u0;
        u0 = ((((struct o30_float *)(t0))->v));
        u0 = u0 + (*(float *)(((0xC201BEC + (a5 << 2)) + 0x0))) * (math_sin_angle16((((-t2) + t3) + 0x14000)));
        (((struct o30_float *)(t0))->v) = u0;
        (((struct o2C_float *)(t0))->v) = (((((struct o2C_float *)(t0))->v)) + 300.0f);
        u0 = *(float *)(((a5 << 2) + 0xC201BA4));
        (((struct o48_float *)(t0))->v) = u0;
        (((struct o44_float *)(t0))->v) = u0;
        (((struct o40_float *)(t0))->v) = u0;
        (((struct o70_float *)(((((struct oC8_int *)(t0))->v))))->v) = (((((struct o168_float *)(a4))->v)) - ((((struct o2C_float *)(t0))->v)));
        t2 = 0x62;
        if (a5 != 0) {
            t2 = 0x69;
        }
        FUN_0c07e2f4(t0, t2);
        (((struct o48_float *)(t0))->v) = 1.0f;
        (((struct o44_float *)(t0))->v) = 1.0f;
        (((struct o40_float *)(t0))->v) = 1.0f;
        t1 = (FUN_0c064d24(t0, 0x1, 0x40, 0x0, 0x100, (~((int)0x1 << (int)(*(signed char *)((t0 + 0x1))))), 0x0, 0xFFFFFFF0));
    }
    return t1;
}

