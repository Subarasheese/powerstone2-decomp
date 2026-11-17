/* game/effect: functions 0C13E90C-0C140EE0, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o50_float { char p[0x50]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
int FUN_0c03f346(int);
int FUN_0c059e60(int, int);
int FUN_0c13ff3c(int, int);
int FUN_0c13fcc4(int a4);

int FUN_0c13fcc4(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + 0xB6);
    (((struct o28_float *)(a4))->v) = ((((struct o28_float *)((*(int *)((a4 + 0x10)))))->v));
    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)((*(int *)((a4 + 0x10)))))->v)) + ((((struct o50_float *)(a4))->v)));
    (((struct o30_float *)(a4))->v) = ((((struct o30_float *)((*(int *)((a4 + 0x10)))))->v));
    if ((*(signed char *)((0x3715 + (*(int *)((a4 + 0x10)))))) != 26) {
        FUN_0c059e60((*(int *)((a4 + 0x10))), 0x21);
        return FUN_0c03f346(a4);
    }
    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 == 4) {
                        t1 = *(short *)((a4 + 0x1E));
                        *(unsigned short *)((a4 + 0x1E)) = (t1 + 0x1);
                        if (((int)((int)(short)t1 % (int)0x1E)) == 0) {
                            FUN_0c13ff3c(a4, 0x0);
                        }
                        t1 = *(short *)((a4 + 0x1C));
                        *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
                        t2 = (short)(t1 - 1);
                        if ((short)(t1 - 1) == 0) {
                            *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x40F;
                            (((struct o14_float *)(((((struct oC4_int *)(a4))->v))))->v) = 1.0f;
                            *(unsigned short *)((a4 + 0x1C)) = 0x1E;
                            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                            t2 = 0x14;
                        }
                        return t2;
                    }
                    if (t0 == 5) {
                        t0 = (((struct oC4_int *)(a4))->v);
                        (((struct o14_float *)(t0))->v) = (((((struct o14_float *)(t0))->v)) - 0.0333333351f);
                        t0 = (((struct oC8_int *)(a4))->v);
                        (((struct o14_float *)(t0))->v) = (((((struct o14_float *)(t0))->v)) - 0.0333333351f);
                        t0 = (((struct oCC_int *)(a4))->v);
                        (((struct o14_float *)(t0))->v) = (((((struct o14_float *)(t0))->v)) - 0.0333333351f);
                        t0 = *(short *)((a4 + 0x1C));
                        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
                        t1 = (short)(t0 - 1);
                        if ((short)(t0 - 1) == 0) {
                            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                            t1 = 0x14;
                        }
                        return t1;
                    }
                    FUN_0c059e60((*(int *)((a4 + 0x10))), 0x21);
                    return FUN_0c03f346(a4);
                }
                t0 = (((struct oC8_int *)(a4))->v);
                (((struct o14_float *)(t0))->v) = (((((struct o14_float *)(t0))->v)) + 0.0333333351f);
                t0 = (((struct oCC_int *)(a4))->v);
                (((struct o14_float *)(t0))->v) = (((((struct o14_float *)(t0))->v)) + 0.0333333351f);
                t0 = *(short *)((a4 + 0x1E));
                *(unsigned short *)((a4 + 0x1E)) = (t0 + 0x1);
                if (((int)((int)(short)t0 % (int)0x1E)) == 0) {
                    FUN_0c13ff3c(a4, 0x0);
                }
                t0 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
                t1 = (short)(t0 - 1);
                if ((short)(t0 - 1) == 0) {
                    *(unsigned short *)((a4 + 0x1C)) = 0x78;
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    t1 = 0x14;
                }
                return t1;
            }
            t0 = *(short *)((a4 + 0x1E));
            *(unsigned short *)((a4 + 0x1E)) = (t0 + 0x1);
            if (((int)((int)(short)t0 % (int)0x1E)) == 0) {
                FUN_0c13ff3c(a4, 0x0);
            }
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
            t1 = (short)(t0 - 1);
            if ((short)(t0 - 1) != 0) {
            } else {
                *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x1;
                *(unsigned short *)((((((struct oC8_int *)(a4))->v)) + 0x6)) = 0x40F;
                (((struct o14_float *)(((((struct oC8_int *)(a4))->v))))->v) = 0.0f;
                *(unsigned char *)((((((struct oCC_int *)(a4))->v)) + 0x0)) = 0x1;
                *(unsigned short *)((((((struct oCC_int *)(a4))->v)) + 0x6)) = 0x40F;
                (((struct o14_float *)(((((struct oCC_int *)(a4))->v))))->v) = 0.0f;
                *(unsigned short *)((a4 + 0x1C)) = 0x1E;
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t1 = 0x14;
            }
            return t1;
        }
    } else {
        FUN_0c059e60((*(int *)((a4 + 0x10))), 0x20);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
        *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x0;
        *(unsigned char *)((((((struct oCC_int *)(a4))->v)) + 0x0)) = 0x0;
        (((struct o50_float *)(a4))->v) = 150.0f;
        *(unsigned short *)((a4 + 0x1C)) = 0x3C;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + 5.0f);
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    t1 = (short)(t0 - 1);
    if ((short)(t0 - 1) != 0) {
    } else {
        *(unsigned short *)((a4 + 0x1C)) = 0x1E;
        *(unsigned short *)((a4 + 0x1E)) = 0x0;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t1 = 0x14;
    }
    return t1;
}
