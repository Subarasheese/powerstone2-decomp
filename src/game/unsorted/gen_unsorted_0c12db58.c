/* game/unsorted: functions 0C12DB58-0C12DF32, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oE4_int { char p[0xE4]; int v; };
struct oF4_int { char p[0xF4]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c07e2c4(int);
int FUN_0c12db58(int a4, int a5);
int FUN_0c12dce4(int a4, int a5, int a6, int a7);

int FUN_0c12db58(int a4, int a5)
{
    int stk[1];
    register int t0;
    register int t47;
    register int t1;
    register int t2;
    register int t3;
    register int t7;
    register int t12;
    register int t45;

    *(unsigned char *)(((int)stk + 0)) = a5;
    t0 = FUN_0c03f444(0x5, 0x0, 0x2);
    t47 = t0;
    if (t0 == 0) {
    } else {
        t1 = 0x0;
        t2 = 0x0;
        t3 = 0xC201C98;
        for (;;) {
            t7 = *(int *)((((0xC4 + t0) + t2) + 0x0));
            FUN_0c03744a(t7, (*(int *)((t3 + 0x0))), (*(int *)((t3 + 0x4))), (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
            t1 = (t1 + 0x1);
            *(unsigned short *)((t7 + 0x6)) = (*(short *)((t3 + 0x8)));
            t3 = (t3 + 0xC);
            t2 = (t2 + 0x4);
            if ((unsigned int)t1 >= (unsigned int)0x2) {
                break;
            }
        }
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0x1F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        *(unsigned int *)((t0 + 0x4)) = 0xC12DCE4;
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned int *)((t0 + 0x10)) = a4;
        (((struct o30_float *)(t0))->v) = 0.0f;
        (((struct o2C_float *)(t0))->v) = 0.0f;
        (((struct o28_float *)(t0))->v) = 0.0f;
        *(unsigned int *)((t0 + 0x3C)) = 0x0;
        *(unsigned int *)((t0 + 0x38)) = 0x0;
        t12 = *(signed char *)(((int)stk + 0));
        switch (t12) {
        case 0:
            (((struct o48_float *)(t0))->v) = 0.699999988f;
            (((struct o44_float *)(t0))->v) = 0.699999988f;
            (((struct o40_float *)(t0))->v) = 0.699999988f;
            (((struct oA4_uint *)(t0))->v) = (((((struct oE4_int *)(a4))->v)) + 0x28);
            *(unsigned int *)((t0 + 0x34)) = ((*(int *)((t0 + 0x34))) + 0x4000);
            (((struct o28_float *)(t0))->v) = (((((struct o28_float *)(t0))->v)) - 10.0f);
            break;
        case 1:
            (((struct o48_float *)(t0))->v) = 0.0f;
            (((struct o44_float *)(t0))->v) = 0.0f;
            (((struct o40_float *)(t0))->v) = 0.0f;
            (((struct oA4_uint *)(t0))->v) = (((((struct oF4_int *)(a4))->v)) + 0x28);
            *(unsigned int *)((t0 + 0x34)) = ((*(int *)((t0 + 0x34))) + 0x4000);
            (((struct o28_float *)(t0))->v) = (((((struct o28_float *)(t0))->v)) + 0.0f);
            break;
        case 2:
            (((struct o48_float *)(t0))->v) = 0.0f;
            (((struct o44_float *)(t0))->v) = 0.0f;
            (((struct o40_float *)(t0))->v) = 0.0f;
            (((struct oA4_uint *)(t0))->v) = (((((struct oCC_int *)(a4))->v)) + 0x28);
            *(unsigned int *)((t0 + 0x34)) = ((*(int *)((t0 + 0x34))) - 0x4000);
            *(unsigned int *)((t0 + 0x38)) = ((*(int *)((t0 + 0x38))) + 0x4000);
            (((struct o30_float *)(t0))->v) = (((((struct o30_float *)(t0))->v)) + 20.0f);
            break;
        }
        (((struct o14_float *)(((((struct oC4_int *)(t0))->v))))->v) = 0.0f;
        t45 = (((struct oC8_int *)(t0))->v);
        (((struct o20_float *)(t45))->v) = 0.0f;
        (((struct o1C_float *)(t45))->v) = 0.0f;
        (((struct o18_float *)(t45))->v) = 0.0f;
        (((struct o14_uchar *)(t0))->v) = 0x0;
        (((struct o15_uchar *)(t0))->v) = (*(signed char *)(((int)stk + 0)));
        *(unsigned short *)((t0 + 0x1C)) = 0x50;
        *(unsigned short *)((t0 + 0x1E)) = 0x0;
        t47 = 0x0;
    }
    return t47;
}

int FUN_0c12dce4(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    if ((*(signed char *)((0x3715 + (*(int *)((a4 + 0x10)))))) != 26) {
        (((struct o14_uchar *)(a4))->v) = 0xFFFFFFFF;
    }
    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 == 1) {
            t0 = FUN_0c07e2c4((*(int *)((a4 + 0x10))));
            t1 = (signed char)t0;
            if ((signed char)t0 == 0) {
                t0 = *(signed char *)((a4 + 0x15));
                if (t0 != 0) {
                    t2 = t0;
                    if (t0 != 1) {
                    } else {
                        *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) - 1);
                        t0 = *(short *)((a4 + 0x1E));
                        (((struct o14_float *)(((((struct oC4_int *)(a4))->v))))->v) = ((float)t0 / 30.0f);
                        if (!(((float)t0 / 30.0f) > 0.0f)) {
                            (((struct o14_float *)(((((struct oC4_int *)(a4))->v))))->v) = 0.0f;
                            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                        }
                        t2 = 0x14;
                    }
                    t0 = t2;
                } else {
                    *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) - 1);
                    t2 = *(short *)((a4 + 0x1E));
                    (((struct o18_float *)(((((struct oC8_int *)(a4))->v))))->v) = ((float)t2 / 20.0f);
                    if (!(((float)t2 / 20.0f) > 0.0f)) {
                        (((struct o18_float *)(((((struct oC8_int *)(a4))->v))))->v) = 0.0f;
                        *(unsigned short *)((a4 + 0x1E)) = 0x1E;
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    }
                    t2 = (((struct oC8_int *)(a4))->v);
                    u0 = (((struct o18_float *)(t2))->v);
                    (((struct o20_float *)(t2))->v) = u0;
                    (((struct o1C_float *)(t2))->v) = u0;
                    t0 = 0x1C;
                }
                t1 = t0;
            }
            return t1;
        }
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    t0 = FUN_0c07e2c4((*(int *)((a4 + 0x10))));
    t1 = (signed char)t0;
    if ((signed char)t0 != 0) {
    } else {
        t0 = *(signed char *)((a4 + 0x15));
        switch (t0) {
        case 0:
            t0 = *(short *)((a4 + 0x1E));
            (((struct o18_float *)(((((struct oC8_int *)(a4))->v))))->v) = ((float)t0 / 10.0f);
            if (!(1.0f > ((float)t0 / 10.0f))) {
                (((struct o18_float *)(((((struct oC8_int *)(a4))->v))))->v) = 1.0f;
            }
            t0 = *(int *)(((0xC4 + a4) + 0x4));
            t2 = (((struct oC4_int *)(a4))->v);
            u0 = (((struct o18_float *)(t0))->v);
            (((struct o20_float *)(t0))->v) = u0;
            (((struct o1C_float *)(t0))->v) = u0;
            (((struct o14_float *)(t2))->v) = u0;
            *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
            break;
        case 1:
            if (1.0f > ((((struct o40_float *)(a4))->v))) {
                (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) + 0.0500000007f);
                (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) + 0.0500000007f);
                (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + 0.0500000007f);
            } else {
                (((struct o48_float *)(a4))->v) = 1.0f;
                (((struct o44_float *)(a4))->v) = 1.0f;
                (((struct o40_float *)(a4))->v) = 1.0f;
            }
            t0 = *(short *)((a4 + 0x1E));
            (((struct o18_float *)(((((struct oC8_int *)(a4))->v))))->v) = ((float)t0 / 10.0f);
            if (!(1.0f > ((float)t0 / 10.0f))) {
                (((struct o18_float *)(((((struct oC8_int *)(a4))->v))))->v) = 1.0f;
            }
            t0 = *(int *)(((0xC4 + a4) + 0x4));
            t2 = (((struct oC4_int *)(a4))->v);
            u0 = (((struct o18_float *)(t0))->v);
            (((struct o20_float *)(t0))->v) = u0;
            (((struct o1C_float *)(t0))->v) = u0;
            (((struct o14_float *)(t2))->v) = u0;
            *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
            break;
        case 2:
            if (1.0f > ((((struct o40_float *)(a4))->v))) {
                (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) + 0.0500000007f);
                (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) + 0.0500000007f);
                (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + 0.0500000007f);
            } else {
                (((struct o48_float *)(a4))->v) = 1.0f;
                (((struct o44_float *)(a4))->v) = 1.0f;
                (((struct o40_float *)(a4))->v) = 1.0f;
            }
            t0 = *(short *)((a4 + 0x1E));
            (((struct o18_float *)(((((struct oC8_int *)(a4))->v))))->v) = ((float)t0 / 10.0f);
            if (!(1.0f > ((float)t0 / 10.0f))) {
                (((struct o18_float *)(((((struct oC8_int *)(a4))->v))))->v) = 1.0f;
            }
            t0 = *(int *)(((0xC4 + a4) + 0x4));
            t2 = (((struct oC4_int *)(a4))->v);
            u0 = (((struct o18_float *)(t0))->v);
            (((struct o20_float *)(t0))->v) = u0;
            (((struct o1C_float *)(t0))->v) = u0;
            (((struct o14_float *)(t2))->v) = u0;
            *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
            break;
        }
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        t2 = (short)(t0 - 1);
        if ((short)(t0 - 1) == 0) {
            *(unsigned short *)((a4 + 0x1E)) = 0x14;
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            (((struct o15_uchar *)(a4))->v) = 0x0;
            t2 = 0x15;
        }
        t1 = t2;
    }
    return t1;
}
