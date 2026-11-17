/* game/unsorted: functions 0C0D859C-0C0D8D9A, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o126_uchar { char p[0x126]; unsigned char v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o41C_uchar { char p[0x41C]; unsigned char v; };
struct o420_ushort { char p[0x420]; unsigned short v; };
struct o422_uchar { char p[0x422]; unsigned char v; };
struct o423_uchar { char p[0x423]; unsigned char v; };
struct o424_uchar { char p[0x424]; unsigned char v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int thunk_FUN_0c05abb2(int, int);
int FUN_0c0c212c(int);
int FUN_0c0c2ab6(int, int);
int FUN_0c0c2d56(int, int, int);
int FUN_0c0c4c1c(int, int, int);
int FUN_0c0c5024(int, int, int);
int FUN_0c0c8c08(int, int, int, int);
int FUN_0c0d522c(int);
int FUN_0c0d52aa(int, int, int);
int FUN_0c0d5328(void);
int FUN_0c0d532c(int, int, int, int);
int FUN_0c0d96d8(int);
extern int FUN_0c0df2e0();
int math_atan_angle16(float);
int FUN_0c179ac0(void);
int FUN_0c187798(int);
int FUN_0c0d859c(int a4, int a5, int a6, int a7);
int FUN_0c0d87d8(int a4, int a5, int a6, int a7);
int FUN_0c0d8858(int a4);
int FUN_0c0d88bc(int a4, int a5, int a6, int a7);
int FUN_0c0d8b48(int a4, int a5, int a6, int a7);

int FUN_0c0d859c(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 == 1) {
            t0 = *(signed char *)((a4 + 0x41D));
            if (t0 != 0) {
                if (t0 != 1) {
                    if (t0 != 2) {
                        if (t0 != 4) {
                            if (t0 != 5) {
                                if (t0 != 7) {
                                    if ((t0 != 3) && ((t0 != 6) && ((t0 != 9) && ((t0 != 10) && (t0 != 11))))) {
                                        return t0;
                                    }
                                    return FUN_0c0d532c(a4, a5, a6, a7);
                                }
                                return FUN_0c0c8c08(a4, a5, a6, a7);
                            }
                            return FUN_0c0c5024(a4, a5, a6);
                        }
                        return FUN_0c0c4c1c(a4, a5, a6);
                    }
                    return FUN_0c0d5328();
                }
                t0 = *(signed char *)((a4 + 0x2));
                return FUN_0c0d52aa(a4, ((((t0 << 1) + t0) << 2) + 0xC2878F8), (*(int *)(((t0 << 2) + 0xC287910))));
            }
            return FUN_0c0d522c(a4);
        }
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        if ((short)(t0 - 1) == 0) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        return (short)(t0 - 1);
    }
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        t1 = t0;
        if (t0 != 1) {
        } else {
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
            t2 = (short)(t0 - 1);
            if ((short)(t0 - 1) != 0) {
            } else {
                (((struct o12E_ushort *)(a4))->v) = 0xFFFFFFFF;
                (((struct oA8_uchar *)(a4))->v) = 0x1;
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                (((struct o15_uchar *)(a4))->v) = 0x0;
                t2 = 0x15;
            }
            t1 = t2;
        }
        t0 = t1;
    } else {
        (((struct o41C_uchar *)(a4))->v) = 0xC8;
        (((struct o424_uchar *)(a4))->v) = 0x1;
        FUN_0c0c2d56(a4, 0x2, (*(signed char *)((a4 + 0x1))));
        FUN_0c0c2ab6(a4, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738CA))));
        FUN_0c0c212c(a4);
        (((struct o160_float *)(a4))->v) = (float)(*(short *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738D2)));
        (((struct o420_ushort *)(a4))->v) = (int)((((struct o160_float *)(a4))->v));
        (((struct o422_uchar *)(a4))->v) = 0x0;
        (((struct o423_uchar *)(a4))->v) = 0xFFFFFFFF;
        (((struct o126_uchar *)(a4))->v) = 0x1;
        (((struct o12A_ushort *)(a4))->v) = 0x0;
        *(unsigned short *)(((0x12A + a4) + 0x2)) = 0x0;
        *(unsigned short *)(((0x12A + a4) + 0x4)) = 0x0;
        *(volatile signed char *)((a4 + 0x2));
        FUN_0c187798((0x12A + a4));
        *(unsigned int *)((a4 + 0x38)) = (*(int *)((0xC287910 + ((*(signed char *)((a4 + 0x2))) << 2))));
        *(unsigned short *)((a4 + 0x1C)) = 0x1;
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t1 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
        t2 = (short)(t1 - 1);
        if ((short)(t1 - 1) != 0) {
        } else {
            (((struct o12E_ushort *)(a4))->v) = 0xFFFFFFFF;
            (((struct oA8_uchar *)(a4))->v) = 0x1;
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            (((struct o15_uchar *)(a4))->v) = 0x0;
            t2 = 0x15;
        }
        t0 = t2;
    }
    return t0;
}

int FUN_0c0d87d8(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;

    if ((int)(*(signed char *)0xC54223C) > (int)0x1) {
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    t1 = *(signed char *)((a4 + 0x14));
    if (t1 != 0) {
        t2 = t1;
        if (t1 != 1) {
        } else {
            t1 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
            t2 = (short)(t1 - 1);
            if ((short)(t1 - 1) == 0) {
                (((struct oA8_uchar *)(a4))->v) = 0x1;
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t2 = 0x14;
            }
        }
        t1 = t2;
    } else {
        if (((*(signed char *)((a4 + 0x2))) == 0) && ((t0 = *(signed char *)0xC54098D, t0 != 12) && (t0 != 13))) {
            (((struct oA8_uchar *)(a4))->v) = 0x0;
            *(unsigned short *)((a4 + 0x1C)) = 0x5DC;
        } else {
            *(unsigned short *)((a4 + 0x1C)) = 0x1;
        }
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        t2 = (short)(t0 - 1);
        if ((short)(t0 - 1) == 0) {
            (((struct oA8_uchar *)(a4))->v) = 0x1;
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t2 = 0x14;
        }
        t1 = t2;
    }
    return t1;
}

int FUN_0c0d8858(int a4)
{
    register int t0;
    register int t1;

    t0 = FUN_0c037320(0x20, (*(int *)0xC4B410C));
    t1 = FUN_0c03f444(0x5, 0x0, t0);
    t0 = t1;
    if (t1 != 0) {
        *(unsigned int *)((t1 + 0x4)) = 0xC0D88BC;
        *(unsigned char *)((t1 + 0x1)) = 0xFFFFFFFF;
        FUN_0c03733c(t1, 0x20, (*(int *)0xC4B410C));
        (((struct oAC_ushort *)(t1))->v) = 0x1F;
        (((struct oA9_uchar *)(t1))->v) = 0x21;
        *(unsigned int *)((t1 + 0x38)) = 0x0;
        *(unsigned int *)((t1 + 0x3C)) = 0x0;
        *(unsigned int *)((t1 + 0x34)) = 0x0;
        (((struct o44_float *)(t1))->v) = 1.0f;
        (((struct o48_float *)(t1))->v) = 1.0f;
        (((struct o40_float *)(t1))->v) = 1.0f;
        *(unsigned short *)((t1 + 0x1C)) = a4;
        t0 = a4;
    }
    return t0;
}

int FUN_0c0d88bc(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    if ((int)(*(signed char *)0xC54223C) > (int)0x1) {
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
        (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
        (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) - (((((struct o4C_float *)(a4))->v)) / 100.0f));
        (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) - (((((struct o50_float *)(a4))->v)) / 100.0f));
        (((struct o80_uint *)(((((struct oC4_int *)(a4))->v))))->v) = (((int (*)(int, float))(FUN_0c0df2e0))(0x1, (((((struct o50_float *)(a4))->v)) / ((((struct o4C_float *)(a4))->v)))));
    } else {
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct o28_float *)(a4))->v) = 1400.0f;
        (((struct o2C_float *)(a4))->v) = 4648.0f;
        (((struct o30_float *)(a4))->v) = 0.0f;
        u0 = ((((struct o28_float *)(a4))->v));
        u0 = u0 + 266.0f * (float)((int)((int)(*(short *)((a4 + 0x1C))) / (int)0x6));
        (((struct o28_float *)(a4))->v) = u0;
        u0 = -1200.0f;
        u0 = u0 + 400.0f * (float)((int)((int)(FUN_0c179ac0()) % (int)0x6));
        (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + u0);
        (((struct o4C_float *)(a4))->v) = -50.0f;
        (((struct o50_float *)(a4))->v) = -40.0f;
        (((struct o5C_float *)(a4))->v) = -0.270000011f;
        (((struct o7C_uint *)(((((struct oC4_int *)(a4))->v))))->v) = 0x8000;
        (((struct o80_uint *)(((((struct oC8_int *)(a4))->v))))->v) = 0x4000;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
        (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
        (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) - (((((struct o4C_float *)(a4))->v)) / 100.0f));
        (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) - (((((struct o50_float *)(a4))->v)) / 100.0f));
        (((struct o80_uint *)(((((struct oC4_int *)(a4))->v))))->v) = (((int (*)(float))(FUN_0c0df2e0))((((((struct o50_float *)(a4))->v)) / ((((struct o4C_float *)(a4))->v)))));
    }
    (((struct o80_uint *)(((((struct oC4_int *)(a4))->v))))->v) = (unsigned short)(math_atan_angle16((((((struct o50_float *)(a4))->v)) / ((((struct o4C_float *)(a4))->v)))));
    t0 = 0x2C;
    if (!(((((struct o2C_float *)(a4))->v)) > 0.0f)) {
        (((struct o2C_float *)(a4))->v) = 0.0f;
        if (((int)((int)(*(short *)((a4 + 0x1C))) % (int)0x6)) == 5) {
            FUN_0c0d96d8(a4);
        }
        t1 = FUN_0c179ac0();
        t2 = ((~(((~t1) + 0x1) & 0x1)) + 0x1);
        if ((int)t1 >= 0) {
            t2 = (t1 & 0x1);
        }
        if (t2 == 0) {
            thunk_FUN_0c05abb2(0x49, 0x0);
        }
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t0 = 0x14;
    }
    return t0;
}

int FUN_0c0d8b48(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;
    register float u2;

    if ((int)(*(signed char *)0xC54223C) > (int)0x1) {
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                t1 = (int)((int)(FUN_0c179ac0()) % (int)0xA);
                (((struct o44_float *)(a4))->v) = (((float)t1 / 50.0f) + 1.0f);
                (((struct o48_float *)(a4))->v) = (((float)t1 / 50.0f) + 1.0f);
                (((struct o40_float *)(a4))->v) = (((float)t1 / 50.0f) + 1.0f);
                t1 = *(int *)0xC4B410C;
                if (((*(short *)((a4 + 0x1C))) & 0x1) != 0) {
                    t2 = 0x22;
                    u0 = ((((struct o30_float *)(a4))->v));
                    u1 = ((((struct o2C_float *)(a4))->v));
                    u2 = ((((struct o28_float *)(a4))->v));
                } else {
                    t2 = 0x23;
                    u0 = ((((struct o30_float *)(a4))->v));
                    u1 = ((((struct o2C_float *)(a4))->v));
                    u2 = ((((struct o28_float *)(a4))->v));
                }
                FUN_0c03733c(a4, t2, t1);
                (((struct o28_float *)(a4))->v) = u2;
                (((struct o2C_float *)(a4))->v) = u1;
                (((struct o30_float *)(a4))->v) = u0;
                t1 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
                t2 = (short)(t1 - 1);
                if ((short)(t1 - 1) == 0) {
                    *(unsigned short *)((a4 + 0x1C)) = 0x14;
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    t2 = 0x14;
                }
                return t2;
            }
            if (t0 == 3) {
                t1 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
                if ((short)(t1 - 1) == 0) {
                    return FUN_0c03f346(a4, a5, a6, a7);
                }
                return (short)(t1 - 1);
            }
            return t0;
        }
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        if ((short)(t0 - 1) != 0) {
            (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
            (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
            (((struct o80_uint *)(((((struct oC4_int *)(a4))->v))))->v) = (((int (*)(int, float))(FUN_0c0df2e0))(a4, (((((struct o50_float *)(a4))->v)) / ((((struct o4C_float *)(a4))->v)))));
            t0 = math_atan_angle16((((((struct o50_float *)(a4))->v)) / ((((struct o4C_float *)(a4))->v))));
            t1 = t0;
            if (0.0f > ((((struct o4C_float *)(a4))->v))) {
                t1 = (t0 + 0x8000);
            }
            (((struct o80_uint *)(((((struct oC4_int *)(a4))->v))))->v) = (unsigned short)t1;
            t0 = 0x80;
        } else {
            *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x0;
            *(unsigned short *)((a4 + 0x1C)) = 0x12C;
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t0 = 0x14;
        }
        return t0;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct o28_float *)(a4))->v) = 0.0f;
    (((struct o2C_float *)(a4))->v) = 0.0f;
    (((struct o30_float *)(a4))->v) = 0.0f;
    u0 = -3000.0f;
    u0 = u0 + 50.0f * (float)(*(short *)((a4 + 0x1E)));
    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + u0);
    u0 = -0.0f;
    u0 = u0 + 10.0f * (((float)((int)((int)(FUN_0c179ac0()) % (int)0xC8)) + -100.0f));
    (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + u0);
    (((struct o4C_float *)(a4))->v) = 15.0f;
    (((struct o50_float *)(a4))->v) = 25.0f;
    (((struct o5C_float *)(a4))->v) = -0.25f;
    (((struct o80_uint *)(((((struct oC8_int *)(a4))->v))))->v) = 0x38E3;
    *(unsigned short *)((a4 + 0x1C)) = 0xC8;
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    if ((short)(t0 - 1) != 0) {
        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
        (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
        (((struct o80_uint *)(((((struct oC4_int *)(a4))->v))))->v) = (((int (*)(float))(FUN_0c0df2e0))((((((struct o50_float *)(a4))->v)) / ((((struct o4C_float *)(a4))->v)))));
        t0 = math_atan_angle16((((((struct o50_float *)(a4))->v)) / ((((struct o4C_float *)(a4))->v))));
        t1 = t0;
        if (0.0f > ((((struct o4C_float *)(a4))->v))) {
            t1 = (t0 + 0x8000);
        }
        (((struct o80_uint *)(((((struct oC4_int *)(a4))->v))))->v) = (unsigned short)t1;
        t0 = 0x80;
    } else {
        *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x0;
        *(unsigned short *)((a4 + 0x1C)) = 0x12C;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t0 = 0x14;
    }
    return t0;
}
