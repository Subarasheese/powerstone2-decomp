/* game/unsorted: functions 0C0F5264-0C0F56B0, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o10_float { char p[0x10]; float v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c05258e(int, int, int, int, int);
int math_mat_get_translate(int, int);
int thunk_FUN_0c05abb2(int, int);
int FUN_0c07c19c(int);
int FUN_0c07e420(int, int);
int FUN_0c150160(int, int, float, float, float, float);
int FUN_0c187798(void);
int FUN_0c0f5264(int a4);
int FUN_0c0f5314(int a4, int a5, int a6, int a7);


int FUN_0c0f5314(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct o2C_float *)(a4))->v) = 0.0f;
        (((struct o28_float *)(a4))->v) = 0.0f;
        (((struct o30_float *)(a4))->v) = 7750.0f;
        (((struct o74_float *)(((((struct oC8_int *)(a4))->v))))->v) = 0.0f;
        (((struct o12A_ushort *)(a4))->v) = 0x0;
        *(unsigned short *)((a4 + 0x1C)) = 0x0;
    }
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 == 3) {
                    *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
                    if (((*(short *)((a4 + 0x1E))) & 0x2) != 0) {
                        t1 = (((struct oC4_int *)(a4))->v);
                        t2 = t1;
                        u0 = (((((struct o6C_float *)(t1))->v)) + 1.5f);
                    } else {
                        t1 = (((struct oC4_int *)(a4))->v);
                        t2 = t1;
                        u0 = (((((struct o6C_float *)(t1))->v)) - 1.5f);
                    }
                    (((struct o6C_float *)(t2))->v) = u0;
                    if (((*(short *)((a4 + 0x1E))) & 0x4) != 0) {
                        t1 = (((struct oC4_int *)(a4))->v);
                        t2 = t1;
                        u0 = (((((struct o70_float *)(t1))->v)) + 1.5f);
                    } else {
                        t1 = (((struct oC4_int *)(a4))->v);
                        t2 = t1;
                        u0 = (((((struct o70_float *)(t1))->v)) - 1.5f);
                    }
                    (((struct o70_float *)(t2))->v) = u0;
                    t1 = (((struct oC8_int *)(a4))->v);
                    (((struct o74_float *)(t1))->v) = (((((struct o74_float *)(t1))->v)) - 5.0f);
                    if (!(((((struct o74_float *)(((((struct oC8_int *)(a4))->v))))->v)) > -300.0f)) {
                        (((struct o74_float *)(((((struct oC8_int *)(a4))->v))))->v) = -300.0f;
                    }
                    (((struct o54_float *)(a4))->v) = -5.0f;
                    (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o54_float *)(a4))->v)));
                    t1 = (((struct o20_short *)(a4))->v);
                    (((struct o20_ushort *)(a4))->v) = (t1 - 1);
                    if ((int)(short)(t1 - 1) <= 0) {
                        (((struct o20_ushort *)(a4))->v) = 0x1E;
                        FUN_0c07e420(a4, 0x1);
                        (((struct o12A_ushort *)(a4))->v) = 0xFFFFFFAF;
                        thunk_FUN_0c05abb2(0x48, (a4 + 0x28));
                        FUN_0c0f5264(a4);
                    }
                    t1 = 0x30;
                    if (!(((((struct o30_float *)(a4))->v)) > (float)(*(int *)((0xC1CE330 + ((*(short *)((a4 + 0x1C))) << 2)))))) {
                        (((struct o30_float *)(a4))->v) = (float)(*(int *)((0xC1CE330 + ((*(short *)((a4 + 0x1C))) << 2))));
                        t2 = (((struct oC4_int *)(a4))->v);
                        (((struct o70_float *)(t2))->v) = 0.0f;
                        (((struct o6C_float *)(t2))->v) = 0.0f;
                        thunk_FUN_0c05abb2(0x4A, (a4 + 0x28));
                        FUN_0c05258e(0x2, 0x1E, 0x100, 0x1E, 0x0);
                        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
                        if ((int)(*(short *)((a4 + 0x1C))) >= (int)0x3) {
                            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        } else {
                            (((struct o15_uchar *)(a4))->v) = 0x0;
                        }
                        t1 = 0x15;
                    }
                    t2 = t1;
                } else {
                    if (t0 == 4) {
                        t1 = t0;
                        if ((int)(*(signed char *)0xC54223C) > 0) {
                            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                            *(unsigned short *)((a4 + 0x1C)) = 0x2;
                            t1 = 0x2;
                        }
                        t0 = t1;
                    } else {
                        t1 = *(short *)((a4 + 0x1C));
                        *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
                        t0 = (short)(t1 - 1);
                        if ((int)(short)(t1 - 1) <= 0) {
                            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                            (((struct o15_uchar *)(a4))->v) = 0x0;
                            t0 = 0x15;
                        }
                    }
                    t2 = t0;
                }
                return t2;
            }
            if (((*(short *)((a4 + 0x1E))) & 0x2) != 0) {
                t0 = (((struct oC4_int *)(a4))->v);
                t1 = t0;
                u0 = (((((struct o6C_float *)(t0))->v)) + 1.5f);
            } else {
                t0 = (((struct oC4_int *)(a4))->v);
                t1 = t0;
                u0 = (((((struct o6C_float *)(t0))->v)) - 1.5f);
            }
            (((struct o6C_float *)(t1))->v) = u0;
            if (((*(short *)((a4 + 0x1E))) & 0x4) != 0) {
                t0 = (((struct oC4_int *)(a4))->v);
                t1 = t0;
                u0 = (((((struct o70_float *)(t0))->v)) + 1.5f);
            } else {
                t0 = (((struct oC4_int *)(a4))->v);
                t1 = t0;
                u0 = (((((struct o70_float *)(t0))->v)) - 1.5f);
            }
            (((struct o70_float *)(t1))->v) = u0;
            t0 = *(short *)((a4 + 0x1E));
            *(unsigned short *)((a4 + 0x1E)) = (t0 - 1);
            if ((int)(short)(t0 - 1) <= 0) {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                *(unsigned short *)((a4 + 0x1E)) = 0x0;
                t0 = (((struct oC4_int *)(a4))->v);
                (((struct o70_float *)(t0))->v) = 0.0f;
                (((struct o6C_float *)(t0))->v) = 0.0f;
            }
            t0 = (((struct oC8_int *)(a4))->v);
            (((struct o74_float *)(t0))->v) = (((((struct o74_float *)(t0))->v)) - 5.0f);
            if (!(((((struct o74_float *)(((((struct oC8_int *)(a4))->v))))->v)) > -300.0f)) {
                (((struct o74_float *)(((((struct oC8_int *)(a4))->v))))->v) = -300.0f;
            }
            (((struct o54_float *)(a4))->v) = -1.25f;
            (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o54_float *)(a4))->v)));
            t0 = (((struct o20_short *)(a4))->v);
            (((struct o20_ushort *)(a4))->v) = (t0 - 1);
            if ((int)(short)(t0 - 1) > 0) {
                return 0x20;
            }
            (((struct o20_ushort *)(a4))->v) = 0x1E;
            FUN_0c07e420(a4, 0x1);
            (((struct o12A_ushort *)(a4))->v) = 0xFFFFFFAF;
            thunk_FUN_0c05abb2(0x48, (a4 + 0x28));
            return FUN_0c0f5264(a4);
        }
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        *(unsigned short *)((a4 + 0x1E)) = 0x78;
        (((struct o20_ushort *)(a4))->v) = 0x1E;
        FUN_0c07e420(a4, 0x1);
        (((struct o12A_ushort *)(a4))->v) = 0xFFFFFFAF;
        thunk_FUN_0c05abb2(0x48, (a4 + 0x28));
        thunk_FUN_0c05abb2(0x4D, (a4 + 0x28));
        return FUN_0c07c19c(0x16);
    }
    if ((int)(*(signed char *)0xC54098F) > (int)(*(short *)((a4 + 0x1C)))) {
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        (((struct o16_uchar *)(a4))->v) = 0x0;
    }
    t0 = (((struct oC8_int *)(a4))->v);
    (((struct o74_float *)(t0))->v) = (((((struct o74_float *)(t0))->v)) + 30.0f);
    t0 = 0x74;
    if (0.0f > ((((struct o74_float *)(((((struct oC8_int *)(a4))->v))))->v))) {
    } else {
        (((struct o74_float *)(((((struct oC8_int *)(a4))->v))))->v) = 0.0f;
        (((struct o12A_ushort *)(a4))->v) = 0x0;
        t0 = 0x12A;
    }
    return t0;
}


