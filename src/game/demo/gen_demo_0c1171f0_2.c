/* game/demo: functions 0C1171F0-0C11855A, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o90_float { char p[0x90]; float v; };
struct o94_float { char p[0x94]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oEC_int { char p[0xEC]; int v; };
struct oF0_int { char p[0xF0]; int v; };
int FUN_0c02f77e(void);
int FUN_0c02f7ec(void);
int FUN_0c02f7fc(void);
int FUN_0c02f82c(void);
int FUN_0c02f83c(void);
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int);
int FUN_0c05f22c(int);
int FUN_0c1171f0(int);
extern int FUN_0c1175b6();
int FUN_0c117a6e(int, ...);
int FUN_0c17c130(int, int, int);
int FUN_0c187798(void);
int FUN_0c1176ce(int a4, int a5, int a6);
int FUN_0c117b58(int a4);

int FUN_0c1176ce(int a4, int a5, int a6)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                return ((int (*)(int, int, int))(FUN_0c1175b6))(a4, a5, a6);
            }
            if (t0 == 10) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                (((struct o90_float *)(((((struct oC4_int *)(a4))->v))))->v) = (*(float *)0xC1179C0);
                t1 = (((struct oC4_int *)(a4))->v);
                (((struct o6C_float *)(t1))->v) = (((((struct o6C_float *)(t1))->v)) + ((((struct o90_float *)(t1))->v)));
                FUN_0c17c130(((*(int *)(((0xC4 + a4) + 0x4))) + 0x6C), 0xC291AC0, (((((struct oC4_int *)(a4))->v)) + 0x6C));
                FUN_0c17c130(((*(int *)(((0xC4 + a4) + 0x28))) + 0x6C), 0xC291ACC, (((((struct oC4_int *)(a4))->v)) + 0x6C));
                FUN_0c17c130(((*(int *)(((0xC4 + a4) + 0x2C))) + 0x6C), 0xC291AD8, (((((struct oC4_int *)(a4))->v)) + 0x6C));
                t1 = ((int (*)(int))(FUN_0c1175b6))(a4);
                t1 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t1 + 0x1);
                if ((int)(short)(t1 + 0x1) >= (int)0x10) {
                    return FUN_0c03f346(a4);
                }
                return (short)(t1 + 0x1);
            }
            if (t0 == 11) {
                t1 = (((struct oC4_int *)(a4))->v);
                (((struct o6C_float *)(t1))->v) = (((((struct o6C_float *)(t1))->v)) + ((((struct o90_float *)(t1))->v)));
                FUN_0c17c130(((*(int *)(((0xC4 + a4) + 0x4))) + 0x6C), 0xC291AC0, (((((struct oC4_int *)(a4))->v)) + 0x6C));
                FUN_0c17c130(((*(int *)(((0xC4 + a4) + 0x28))) + 0x6C), 0xC291ACC, (((((struct oC4_int *)(a4))->v)) + 0x6C));
                FUN_0c17c130(((*(int *)(((0xC4 + a4) + 0x2C))) + 0x6C), 0xC291AD8, (((((struct oC4_int *)(a4))->v)) + 0x6C));
                t1 = ((int (*)(int))(FUN_0c1175b6))(a4);
                t1 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t1 + 0x1);
                if ((int)(short)(t1 + 0x1) >= (int)0x10) {
                    return FUN_0c03f346(a4);
                }
                return (short)(t1 + 0x1);
            }
            t1 = t0;
            if (t0 == 99) {
                (((struct o14_uchar *)(a4))->v) = 0xA;
                t1 = 0x14;
            }
            return t1;
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0x1F;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        FUN_0c1171f0(a4);
        FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x3, 0xD, (*(int *)0xC4B410C));
        FUN_0c03744a(((((struct oC8_int *)(a4))->v)), 0xA, 0x2, (*(int *)0xC4B410C));
        FUN_0c03744a(((((struct oEC_int *)(a4))->v)), 0xB, 0x2, (*(int *)0xC4B410C));
        *(unsigned char *)((((((struct oEC_int *)(a4))->v)) + 0x0)) = 0x0;
        *(volatile int *)((a4 + 0xEC));
        FUN_0c187798();
        FUN_0c03744a(((((struct oF0_int *)(a4))->v)), 0xB, 0x2, (*(int *)0xC4B410C));
        *(unsigned char *)((((((struct oF0_int *)(a4))->v)) + 0x0)) = 0x0;
        *(volatile int *)((a4 + 0xF0));
        FUN_0c187798();
        t0 = (((struct oC4_int *)(a4))->v);
        (((struct o6C_float *)(t0))->v) = (((((struct o6C_float *)(t0))->v)) + 300.0f);
        (((struct o90_float *)(t0))->v) = -18.75f;
    }
    t0 = (((struct oC4_int *)(a4))->v);
    (((struct o6C_float *)(t0))->v) = (((((struct o6C_float *)(t0))->v)) + ((((struct o90_float *)(t0))->v)));
    FUN_0c17c130(((*(int *)(((0xC4 + a4) + 0x4))) + 0x6C), 0xC291AC0, (((((struct oC4_int *)(a4))->v)) + 0x6C));
    FUN_0c17c130(((*(int *)(((0xC4 + a4) + 0x28))) + 0x6C), 0xC291ACC, (((((struct oC4_int *)(a4))->v)) + 0x6C));
    FUN_0c17c130(((*(int *)(((0xC4 + a4) + 0x2C))) + 0x6C), 0xC291AD8, (((((struct oC4_int *)(a4))->v)) + 0x6C));
    t0 = ((int (*)(int))(FUN_0c1175b6))(a4);
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
    t1 = (short)(t0 + 0x1);
    if ((int)(short)(t0 + 0x1) >= (int)0x10) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0x0;
        t1 = 0x0;
    }
    return t1;
}

int FUN_0c117b58(int a4)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 == 10) {
                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                        (((struct o94_float *)(((((struct oC4_int *)(a4))->v))))->v) = -18.75f;
                        t1 = (((struct oC4_int *)(a4))->v);
                        (((struct o70_float *)(t1))->v) = (((((struct o70_float *)(t1))->v)) + ((((struct o94_float *)(t1))->v)));
                        t1 = *(short *)((a4 + 0x1C));
                        *(unsigned short *)((a4 + 0x1C)) = (t1 + 0x1);
                        if ((int)(short)(t1 + 0x1) >= (int)0x10) {
                            FUN_0c02f7fc();
                            return FUN_0c03f346(a4);
                        }
                        return (short)(t1 + 0x1);
                    }
                    if (t0 == 11) {
                        t1 = (((struct oC4_int *)(a4))->v);
                        (((struct o70_float *)(t1))->v) = (((((struct o70_float *)(t1))->v)) + ((((struct o94_float *)(t1))->v)));
                        t1 = *(short *)((a4 + 0x1C));
                        *(unsigned short *)((a4 + 0x1C)) = (t1 + 0x1);
                        if ((int)(short)(t1 + 0x1) >= (int)0x10) {
                            FUN_0c02f7fc();
                            return FUN_0c03f346(a4);
                        }
                        return (short)(t1 + 0x1);
                    }
                    t1 = t0;
                    if (t0 == 99) {
                        FUN_0c02f7ec();
                        FUN_0c02f82c();
                        FUN_0c117a6e(0xFFFFFFFF);
                        (((struct o14_uchar *)(a4))->v) = 0xA;
                        t1 = 0x14;
                    }
                    return t1;
                }
                FUN_0c02f83c();
                FUN_0c02f7fc();
                t0 = FUN_0c05f22c(0x101);
                if (t0 != 0) {
                    t1 = *(int *)0xC47472C;
                    if (t1 != -1) {
                        return FUN_0c02f77e();
                    }
                    return t1;
                }
                return t0;
            }
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
            t1 = (short)(t0 + 0x1);
            if ((int)(short)(t0 + 0x1) > (int)0x4) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                *(unsigned short *)((a4 + 0x1C)) = 0x0;
                t1 = 0x0;
            }
            return t1;
        }
        t0 = (((struct oC4_int *)(a4))->v);
        (((struct o70_float *)(t0))->v) = (((((struct o70_float *)(t0))->v)) + ((((struct o94_float *)(t0))->v)));
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
        t1 = (short)(t0 + 0x1);
        if ((int)(short)(t0 + 0x1) < (int)0x10) {
        } else {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            *(unsigned short *)((a4 + 0x1C)) = 0x0;
            t1 = 0x0;
        }
        return t1;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct oAC_ushort *)(a4))->v) = 0x1F;
    (((struct oA9_uchar *)(a4))->v) = 0x21;
    FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x1, 0xD, (*(int *)0xC4B410C));
    FUN_0c1171f0(a4);
    t0 = (((struct oC4_int *)(a4))->v);
    (((struct o70_float *)(t0))->v) = (((((struct o70_float *)(t0))->v)) - 300.0f);
    (((struct o94_float *)(t0))->v) = 18.75f;
    FUN_0c02f7ec();
    return FUN_0c02f82c();
}
