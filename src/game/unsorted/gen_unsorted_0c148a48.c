/* game/unsorted: functions 0C148A48-0C148CEA, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o41C_uchar { char p[0x41C]; unsigned char v; };
struct o424_uchar { char p[0x424]; unsigned char v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
int FUN_0c03f346(int);
int FUN_0c03f444(int, int, int);
int FUN_0c0582de(int, int);
int FUN_0c0c212c(int);
int FUN_0c0c2ab6(int, int);
int FUN_0c0c2d56(int, int, int);
int FUN_0c0c4c1c(int);
int FUN_0c0c5024(int);
int FUN_0c148a9c(int);
int FUN_0c148a48(int a4);
int FUN_0c148b0c(int a4, int a5, int a6, int a7);
int FUN_0c148c86(int a4, int a5);

int FUN_0c148a48(int a4)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        t1 = t0;
        if (t0 != 1) {
        } else {
            FUN_0c0c2d56(a4, 0x2, (*(signed char *)((a4 + 0x1))));
            FUN_0c0c2ab6(a4, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738CA))));
            (((struct o48_float *)(a4))->v) = 1.0f;
            (((struct o44_float *)(a4))->v) = 1.0f;
            (((struct o40_float *)(a4))->v) = 1.0f;
            t1 = 0x40;
        }
        t0 = t1;
    } else {
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        FUN_0c0c2d56(a4, 0x2, (*(signed char *)((a4 + 0x1))));
        FUN_0c0c2ab6(a4, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738CA))));
        (((struct o48_float *)(a4))->v) = 1.0f;
        (((struct o44_float *)(a4))->v) = 1.0f;
        (((struct o40_float *)(a4))->v) = 1.0f;
        t0 = 0x40;
    }
    return t0;
}

int FUN_0c148b0c(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;

    t0 = (((struct o22_short *)(a4))->v);
    t1 = *(signed char *)((a4 + 0x14));
    if (t1 != 0) {
        if (t1 != 1) {
            return t1;
        }
        if ((*(signed char *)(((*(int *)(((0xC535D90 + ((short)t0 * (short)0x3938)) + ((*(signed char *)((a4 + 0x3))) << 2)))) + 0x1B))) == 0) {
            t1 = ((int (*)(int, int, int, int))(0xC1489F8))(a4, a5, a6, a7);
            if (t1 == 0) {
                FUN_0c0c2d56(a4, 0x1, (*(signed char *)((a4 + 0x1))));
            }
        } else {
            FUN_0c0c2d56(a4, 0x1, (*(signed char *)((a4 + 0x1))));
        }
        (((struct o28_float *)(a4))->v) = 0.0f;
        (((struct o30_float *)(a4))->v) = 0.0f;
        (((struct o2C_float *)(a4))->v) = 200.0f;
        FUN_0c0582de((a4 + 0x28), ((*(int *)(((((*(int *)((((*(signed char *)((a4 + 0x3))) << 2) + 0xC2A271C))) << 2) + (0xC53255C + ((short)((((struct o22_short *)(a4))->v)) * (short)0x3938))) + 0x0))) + 0x28));
        t1 = *(signed char *)((a4 + 0x41D));
        if (t1 != 0) {
            if (t1 != 1) {
                if (t1 != 2) {
                    if (t1 != 4) {
                        if (t1 != 5) {
                            if ((t1 != 7) && ((t1 != 3) && ((t1 != 6) && ((t1 != 9) && ((t1 != 10) && (t1 != 11)))))) {
                                return t1;
                            }
                            return FUN_0c03f346(a4);
                        }
                        return FUN_0c0c5024(a4);
                    }
                    return FUN_0c0c4c1c(a4);
                }
                return ((int (*)(int, int, int, int))(0xC148AEC))(a4, a5, a6, a7);
            }
            return FUN_0c148a9c(a4);
        }
        return FUN_0c148a48(a4);
    }
    (((struct oA8_uchar *)(a4))->v) = 0x0;
    (((struct o41C_uchar *)(a4))->v) = 0xC8;
    (((struct o424_uchar *)(a4))->v) = 0x4;
    FUN_0c0c2d56(a4, 0x0, (*(signed char *)((a4 + 0x1))));
    FUN_0c0c2ab6(a4, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738CA))));
    FUN_0c0c212c(a4);
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    if ((*(signed char *)(((*(int *)(((0xC535D90 + ((short)t0 * (short)0x3938)) + ((*(signed char *)((a4 + 0x3))) << 2)))) + 0x1B))) == 0) {
        t0 = ((int (*)(int, int, int, int))(0xC1489F8))(a4, a5, a6, a7);
        if (t0 == 0) {
            FUN_0c0c2d56(a4, 0x1, (*(signed char *)((a4 + 0x1))));
        }
    } else {
        FUN_0c0c2d56(a4, 0x1, (*(signed char *)((a4 + 0x1))));
    }
    (((struct o28_float *)(a4))->v) = 0.0f;
    (((struct o30_float *)(a4))->v) = 0.0f;
    (((struct o2C_float *)(a4))->v) = 200.0f;
    FUN_0c0582de((a4 + 0x28), ((*(int *)(((((*(int *)((((*(signed char *)((a4 + 0x3))) << 2) + 0xC2A271C))) << 2) + (0xC53255C + ((short)((((struct o22_short *)(a4))->v)) * (short)0x3938))) + 0x0))) + 0x28));
    t0 = *(signed char *)((a4 + 0x41D));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 4) {
                    if (t0 != 5) {
                        if ((t0 != 7) && ((t0 != 3) && ((t0 != 6) && ((t0 != 9) && ((t0 != 10) && (t0 != 11)))))) {
                            return t0;
                        }
                        return FUN_0c03f346(a4);
                    }
                    return FUN_0c0c5024(a4);
                }
                return FUN_0c0c4c1c(a4);
            }
            return ((int (*)(int, int, int, int))(0xC148AEC))(a4, a5, a6, a7);
        }
        return FUN_0c148a9c(a4);
    }
    return FUN_0c148a48(a4);
}

int FUN_0c148c86(int a4, int a5)
{
    register int t0;

    t0 = FUN_0c03f444(0x9, 0x0, 0x1);
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x4)) = 0xC148B0C;
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        (((struct o22_ushort *)(t0))->v) = (*(signed char *)((a4 + 0x1)));
        *(unsigned char *)((t0 + 0x3)) = a5;
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = 0x0;
        *(unsigned int *)((t0 + 0x10)) = a4;
        (((struct oA4_uint *)(t0))->v) = 0x0;
        (((struct o48_float *)(t0))->v) = 1.0f;
        (((struct o44_float *)(t0))->v) = 1.0f;
        (((struct o40_float *)(t0))->v) = 1.0f;
        return t0;
    }
    return 0x0;
}
