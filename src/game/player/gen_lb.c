/* Straight-line functions with calls and guards (batch gen_lb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o128_ushort { char p[0x128]; unsigned short v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12E_short { char p[0x12E]; short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o136_uchar { char p[0x136]; unsigned char v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAA_uchar { char p[0xAA]; unsigned char v; };
struct oAB_uchar { char p[0xAB]; unsigned char v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c042fe0(void);
int FUN_0c05258e(int, int, int, int, int);
int FUN_0c059c7a(int, int);
int FUN_0c06593a(int, int);
int FUN_0c07e420(int, int);
int FUN_0c0df294(int);
int FUN_0c0df2f0(int);
int FUN_0c0df30a(int);
int thunk_FUN_0c05abb2(int, int);
int FUN_0c0df40c(int a4, int a5, int a6, int a7);

int FUN_0c0df40c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;

    if ((*(signed char *)0xC54223C) != 1) {
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAA_uchar *)(a4))->v) = 0x1;
        (((struct oAB_uchar *)(a4))->v) = 0x8;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x58)) = *(struct mv3 *)((a4 + 0x28)); }
        (((struct o128_ushort *)(a4))->v) = 0x40;
        FUN_0c07e420(a4, 0x2);
        (((struct o12E_ushort *)(a4))->v) = (((((struct o12E_short *)(a4))->v)) | 0x10);
        (((struct o22_ushort *)(a4))->v) = 0x0;
    }
    if ((t0 == 0) || (t0 == 1)) {
        t1 = FUN_0c042fe0();
        if (t1 == 0) {
            return t1;
        }
        t1 = *(signed char *)((a4 + 0x15));
        if (t1 == 0) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)((a4 + 0x58)); }
            (((struct o12A_ushort *)(a4))->v) = 0x0;
        }
        if ((t1 == 0) || (t1 == 1)) {
            t2 = *(signed char *)0xC54098D;
            t3 = t2;
            if (t2 != 8) {
            } else {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                *(unsigned short *)((a4 + 0x1E)) = 0x0;
                t3 = 0x0;
            }
            return t3;
        } else {
            if (t1 != 2) {
                if (t1 != 3) {
                    if (t1 == 4) {
                        if ((*(short *)((a4 + 0x1E))) != 0) {
                            *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) - 1);
                            if (((*(short *)((a4 + 0x1E))) & 0x1) != 0) {
                                (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + (float)((*(short *)((a4 + 0x1E))) << 1));
                            } else {
                                (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) - (float)((*(short *)((a4 + 0x1E))) << 1));
                            }
                            if ((*(short *)((a4 + 0x1E))) == 0) {
                                (((struct o30_float *)(a4))->v) = ((((struct o60_float *)(a4))->v));
                            }
                        }
                        t2 = *(short *)((a4 + 0x1C));
                        *(unsigned short *)((a4 + 0x1C)) = (t2 - 1);
                        t3 = (short)(t2 - 1);
                        if ((int)(short)(t2 - 1) <= 0) {
                            (((struct o15_uchar *)(a4))->v) = 0x3;
                            (((struct o4C_float *)(a4))->v) = 0.0f;
                            (((struct o12A_ushort *)(a4))->v) = 0xFFFFFFFF;
                            (((struct o136_uchar *)(a4))->v) = 0x0;
                            (((struct o20_ushort *)(a4))->v) = 0x0;
                            t3 = 0x20;
                        }
                        t2 = t3;
                    } else {
                        t2 = t1;
                    }
                    return t2;
                }
                (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) + 0.200000003f);
                if (((((struct o4C_float *)(a4))->v)) > 5.5999999f) {
                    (((struct o4C_float *)(a4))->v) = 5.5999999f;
                }
                (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
                t1 = (((struct oC4_int *)(a4))->v);
                (((struct o80_uint *)(t1))->v) = (((((struct o80_int *)(t1))->v)) - (int)((((((struct o4C_float *)(a4))->v)) * 26214.4004f) / 360.0f));
                FUN_0c0df30a(a4);
                if ((*(signed char *)0xC54098D) == 11) {
                    (((struct o15_uchar *)(a4))->v) = 0x5;
                    return (FUN_0c05258e(0x2, 0x1E, 0x100, 0x1E, 0x0));
                }
                t1 = 0x0;
                t2 = 0x0;
                for (;;) {
                    if ((*(int *)(((0xC540D94 + t2) + 0x4))) != 0) {
                        t3 = FUN_0c06593a(a4, (*(int *)(((0xC540D94 + t1) + 0x4))));
                        if (t3 != 0) {
                            break;
                        }
                    }
                    t2 = (t2 + 0x4);
                    t1 = (t1 + 0x4);
                    if ((unsigned int)t2 >= (unsigned int)0x10) {
                        t3 = (((struct o20_short *)(a4))->v);
                        (((struct o20_ushort *)(a4))->v) = (t3 + 0x1);
                        if ((int)(short)(t3 + 0x1) >= (int)0x3C) {
                            (((struct o136_uchar *)(a4))->v) = 0x0;
                            (((struct o20_ushort *)(a4))->v) = 0x0;
                            thunk_FUN_0c05abb2(0x43, (a4 + 0x28));
                            return FUN_0c0df2f0(a4);
                        }
                        return FUN_0c0df2f0(a4);
                    }
                }
                (((struct o15_uchar *)(a4))->v) = 0x4;
                *(unsigned short *)((a4 + 0x1C)) = 0x1E;
                *(unsigned short *)((a4 + 0x1E)) = 0x14;
                (((struct o12A_ushort *)(a4))->v) = 0x0;
                thunk_FUN_0c05abb2(0x44, (a4 + 0x28));
                FUN_0c05258e(0x2, 0x14, 0x100, 0x1E, 0x0);
                t1 = (((struct o20_short *)(a4))->v);
                (((struct o20_ushort *)(a4))->v) = (t1 + 0x1);
                if ((int)(short)(t1 + 0x1) >= (int)0x3C) {
                    (((struct o136_uchar *)(a4))->v) = 0x0;
                    (((struct o20_ushort *)(a4))->v) = 0x0;
                    thunk_FUN_0c05abb2(0x43, (a4 + 0x28));
                }
                return FUN_0c0df2f0(a4);
            }
            *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
            if (((*(short *)((a4 + 0x1E))) & 0x1) != 0) {
                u0 = (((((struct o30_float *)(a4))->v)) + 10.0f);
            } else {
                u0 = (((((struct o30_float *)(a4))->v)) - 10.0f);
            }
            (((struct o30_float *)(a4))->v) = u0;
            if ((*(short *)0xC540994) == 120) {
                FUN_0c0df294(a4);
            }
            t1 = *(signed char *)0xC54098D;
            if (t1 != 9) {
                return t1;
            }
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            (((struct o30_float *)(a4))->v) = ((((struct o60_float *)(a4))->v));
            (((struct o4C_float *)(a4))->v) = 0.0f;
            (((struct o12A_ushort *)(a4))->v) = 0xFFFFFFFF;
            (((struct o136_uchar *)(a4))->v) = 0x0;
            (((struct o20_ushort *)(a4))->v) = 0x0;
            thunk_FUN_0c05abb2(0x43, (a4 + 0x28));
            return FUN_0c059c7a(0x8, 0x0);
        }
    } else {
        return t0;
    }
}
