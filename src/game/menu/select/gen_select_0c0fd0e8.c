/* game/menu/select: functions 0C0FD0E8-0C0FE0E4, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o30_float { char p[0x30]; float v; };
struct o41C_uchar { char p[0x41C]; unsigned char v; };
struct o58_int { char p[0x58]; int v; };
struct o58_uint { char p[0x58]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oD8_int { char p[0xD8]; int v; };
struct oDC_int { char p[0xDC]; int v; };
struct oE0_int { char p[0xE0]; int v; };
struct oE4_int { char p[0xE4]; int v; };
struct oE8_int { char p[0xE8]; int v; };
struct oEC_int { char p[0xEC]; int v; };
struct oF0_int { char p[0xF0]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c058a6e(int, int, int, int, int, int);
int FUN_0c059c7a(int, int);
int FUN_0c059ce8(int);
int FUN_0c05aab6(int, int);
int FUN_0c05ada4(int);
int FUN_0c05adb4(int);
int FUN_0c05adc4(int);
int FUN_0c05add4(int);
int FUN_0c05f22c(int);
int FUN_0c05f254(int);
int FUN_0c0fb9a6(void);
int FUN_0c0fc90c(int);
int FUN_0c0fc924(int, int);
int FUN_0c0fc990(int, int);
int FUN_0c104f7c(int, int);
int FUN_0c105384(int);
int FUN_0c1171f0(int);
int FUN_0c187798(int);
int FUN_0c0fd0e8(int a4);
int FUN_0c0fd112(int a4, int a5, int a6);
int FUN_0c0fd296(int a4);
int FUN_0c0fd334(int a4);
int FUN_0c0fd368(int a4, int a5, int a6);
int FUN_0c0fd5b8(int a4);
int FUN_0c0fd692(int a4);
int FUN_0c0fd938(int a4);
int FUN_0c0fd962(int a4);
int FUN_0c0fddea(int a4);
int FUN_0c0fe000(int a4);
int FUN_0c0fe02a(int a4);
int FUN_0c0fe0b2(void);

int FUN_0c0fd0e8(int a4)
{
    register int t0;
    register int t1;

    t0 = FUN_0c03f444(0x8, 0x1, 0x14);
    t1 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC0FCD90;
        *(unsigned int *)((t0 + 0x10)) = a4;
        t1 = 0xFFFFFFFF;
    }
    return t1;
}


int FUN_0c0fd296(int a4)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x14));
    t1 = *(int *)((a4 + 0x10));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0x1F;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        FUN_0c1171f0(a4);
    }
    if ((*(signed char *)((0xA8 + (*(int *)((a4 + 0x10)))))) == 1) {
        (((struct oA8_uchar *)(a4))->v) = 0x1;
    } else {
        (((struct oA8_uchar *)(a4))->v) = 0x0;
    }
    FUN_0c0fd112(a4, (*(signed char *)(((t1 + 0x41C) + 0x3))), 0x0);
    return FUN_0c0fd112(a4, ((*(signed char *)(((t1 + 0x41C) + 0x1))) + 0x1), 0x1);
}

int FUN_0c0fd334(int a4)
{
    register int t0;

    t0 = FUN_0c03f444(0x8, 0x0, 0x4);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC0FD296;
        *(unsigned int *)((t0 + 0x10)) = a4;
        return t0;
    }
    return 0x0;
}


int FUN_0c0fd5b8(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(int *)((a4 + 0x10));
    t1 = *(signed char *)((a4 + 0x14));
    if (t1 != 0) {
        if (t1 != 1) {
            return t1;
        }
        if ((*(signed char *)((0xA8 + (*(int *)((a4 + 0x10)))))) == 1) {
            (((struct oA8_uchar *)(a4))->v) = 0x1;
        } else {
            (((struct oA8_uchar *)(a4))->v) = 0x0;
        }
        if ((*(signed char *)(((0x41C + t0) + 0x0))) == 1) {
            (((struct o58_uint *)(a4))->v) = (((((struct o58_int *)(a4))->v)) + 0x1);
        } else {
            (((struct o58_uint *)(a4))->v) = 0x0;
        }
        t1 = FUN_0c05ada4(0x1);
        t2 = (int)((int)t1 / (int)0x64);
        FUN_0c0fd368(a4, ((int)((int)t1 % (int)0x64)), 0x0);
        FUN_0c0fd368(a4, ((int)((int)t2 % (int)0x3C)), 0x1);
        return FUN_0c0fd368(a4, ((int)((int)((int)((int)t2 / (int)0x3C)) % (int)0x3C)), 0x2);
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct oAC_ushort *)(a4))->v) = 0x1F;
    (((struct oA9_uchar *)(a4))->v) = 0x21;
    FUN_0c1171f0(a4);
    (((struct o58_uint *)(a4))->v) = 0x0;
    if ((*(signed char *)((0xA8 + (*(int *)((a4 + 0x10)))))) == 1) {
        (((struct oA8_uchar *)(a4))->v) = 0x1;
    } else {
        (((struct oA8_uchar *)(a4))->v) = 0x0;
    }
    if ((*(signed char *)(((0x41C + t0) + 0x0))) == 1) {
        (((struct o58_uint *)(a4))->v) = (((((struct o58_int *)(a4))->v)) + 0x1);
    } else {
        (((struct o58_uint *)(a4))->v) = 0x0;
    }
    t0 = FUN_0c05ada4(0x1);
    t1 = (int)((int)t0 / (int)0x64);
    FUN_0c0fd368(a4, ((int)((int)t0 % (int)0x64)), 0x0);
    FUN_0c0fd368(a4, ((int)((int)t1 % (int)0x3C)), 0x1);
    return FUN_0c0fd368(a4, ((int)((int)((int)((int)t1 / (int)0x3C)) % (int)0x3C)), 0x2);
}

int FUN_0c0fd692(int a4)
{
    register int t0;

    t0 = FUN_0c03f444(0x8, 0x0, 0x6);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC0FD5B8;
        *(unsigned int *)((t0 + 0x10)) = a4;
        return t0;
    }
    return 0x0;
}

int FUN_0c0fd938(int a4)
{
    register int t0;
    register int t1;

    t0 = FUN_0c03f444(0x8, 0x0, 0x2);
    t1 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC0FD6E4;
        *(unsigned int *)((t0 + 0x10)) = a4;
        t1 = 0xFFFFFFFF;
    }
    return t1;
}

int FUN_0c0fd962(int a4)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t1 = *(signed char *)((a4 + 0x14));
    if (t1 != 0) {
        t2 = t1;
        if (t1 != 1) {
        } else {
            if ((*(short *)(((*(int *)((a4 + 0x10))) + 0x1C))) != 0) {
                (((struct oA8_uchar *)(a4))->v) = 0x0;
                t1 = 0xA8;
            } else {
                t3 = FUN_0c104f7c((*(signed char *)(((0x41C + a4) + 0x1))), ((*(signed char *)(((0x41C + a4) + 0x3))) - 1));
                if (t3 != (*(signed char *)(((0x41C + a4) + 0x1)))) {
                    FUN_0c0fc90c((*(signed char *)(((0x41C + a4) + 0x3))));
                    if ((*(signed char *)(((0x41C + a4) + 0x5))) == 1) {
                        FUN_0c0fc924((*(signed char *)(((0x41C + a4) + 0x3))), t3);
                    }
                    t4 = *(signed char *)(((0x41C + a4) + 0x0));
                    switch (t4) {
                    case 0:
                        *(unsigned char *)(((0x41C + a4) + 0x1)) = t3;
                        break;
                    case 1:
                        (((struct o41C_uchar *)(a4))->v) = 0x1;
                        *(unsigned char *)(((0x41C + a4) + 0x1)) = t3;
                        FUN_0c059c7a((*(int *)((((((*(signed char *)(((0x41C + a4) + 0x1))) << 2) << 1) + 0xC28ECD0) + 0x0))), (*(signed char *)(((0x41C + a4) + 0x4))));
                        break;
                    case 2:
                        *(unsigned char *)(((0x41C + a4) + 0x1)) = t3;
                        (((struct o41C_uchar *)(a4))->v) = 0x2;
                        FUN_0c05add4(0x1);
                        FUN_0c059ce8(0x75);
                        FUN_0c059c7a((*(int *)((((((*(signed char *)(((0x41C + a4) + 0x1))) << 2) << 1) + 0xC28ECD0) + 0x0))), (*(signed char *)(((0x41C + a4) + 0x4))));
                        FUN_0c05adc4(0x1);
                        break;
                    }
                }
                t4 = FUN_0c05f22c(0x100);
                if (t4 != 0) {
                    t4 = *(signed char *)(((0x41C + a4) + 0x0));
                    switch (t4) {
                    case 0:
                        (((struct o41C_uchar *)(a4))->v) = 0x1;
                        *(unsigned char *)(((0x41C + a4) + 0x1)) = t3;
                        FUN_0c0fc90c((*(signed char *)(((0x41C + a4) + 0x3))));
                        if ((*(signed char *)(((0x41C + a4) + 0x5))) == 1) {
                            FUN_0c0fc924((*(signed char *)(((0x41C + a4) + 0x3))), (*(signed char *)(((0x41C + a4) + 0x1))));
                        }
                        FUN_0c059c7a((*(int *)((((((*(signed char *)(((0x41C + a4) + 0x1))) << 2) << 1) + 0xC28ECD0) + 0x0))), (*(signed char *)(((0x41C + a4) + 0x4))));
                        break;
                    case 1:
                        (((struct o41C_uchar *)(a4))->v) = 0x2;
                        FUN_0c05adc4(0x1);
                        break;
                    case 2:
                        (((struct o41C_uchar *)(a4))->v) = 0x1;
                        FUN_0c05add4(0x1);
                        break;
                    }
                }
                t3 = FUN_0c05adb4(0x1);
                if (t3 != 0) {
                    if ((*(signed char *)(((0x41C + a4) + 0x4))) != 0) {
                        (((struct o41C_uchar *)(a4))->v) = 0x1;
                        FUN_0c059c7a((*(int *)((((((*(signed char *)(((0x41C + a4) + 0x1))) << 2) << 1) + 0xC28ECD0) + 0x0))), (*(signed char *)(((0x41C + a4) + 0x4))));
                    } else {
                        if ((*(signed char *)(((0x41C + a4) + 0x5))) == 1) {
                            t3 = FUN_0c0fc990((*(signed char *)(((0x41C + a4) + 0x3))), (*(signed char *)(((0x41C + a4) + 0x1))));
                            if (t3 == -1) {
                                (((struct o41C_uchar *)(a4))->v) = 0x0;
                                FUN_0c05add4(0x1);
                                FUN_0c059ce8(0x75);
                            } else {
                                *(unsigned char *)(((0x41C + a4) + 0x1)) = t3;
                                FUN_0c059c7a((*(int *)((((((*(signed char *)(((0x41C + a4) + 0x1))) << 2) << 1) + 0xC28ECD0) + 0x0))), (*(signed char *)(((0x41C + a4) + 0x4))));
                            }
                        } else {
                            if ((int)(*(signed char *)(((0x41C + a4) + 0x1))) < (int)((*(signed char *)(((0x41C + a4) + 0x3))) - 1)) {
                                *(unsigned char *)(((0x41C + a4) + 0x1)) = ((*(signed char *)(((0x41C + a4) + 0x1))) + 0x1);
                                FUN_0c059c7a((*(int *)((((((*(signed char *)(((0x41C + a4) + 0x1))) << 2) << 1) + 0xC28ECD0) + 0x0))), (*(signed char *)(((0x41C + a4) + 0x4))));
                            } else {
                                (((struct o41C_uchar *)(a4))->v) = 0x0;
                                *(unsigned char *)(((0x41C + a4) + 0x1)) = 0x0;
                                FUN_0c05add4(0x1);
                                FUN_0c059ce8(0x75);
                            }
                        }
                    }
                }
                t3 = FUN_0c05f22c(0x40);
                if (t3 != 0) {
                    FUN_0c05add4(0x1);
                    (((struct o41C_uchar *)(a4))->v) = 0x0;
                    FUN_0c059ce8(0x75);
                }
                t3 = FUN_0c05f22c(0x200);
                if (t3 != 0) {
                    *(unsigned char *)(((0x41C + a4) + 0x4)) = ((-(*(signed char *)(((0x41C + a4) + 0x4)))) + 0x1);
                }
                t3 = FUN_0c05f22c(0x80);
                if (t3 != 0) {
                    *(unsigned char *)(((0x41C + a4) + 0x5)) = ((-(*(signed char *)(((0x41C + a4) + 0x5)))) + 0x1);
                    if ((*(signed char *)(((0x41C + a4) + 0x5))) != 0) {
                        FUN_0c0fc90c((*(signed char *)(((0x41C + a4) + 0x3))));
                        FUN_0c0fc924((*(signed char *)(((0x41C + a4) + 0x3))), (*(signed char *)(((0x41C + a4) + 0x1))));
                    }
                }
                (((struct oA8_uchar *)(a4))->v) = 0x1;
                t3 = FUN_0c05f254(0x800);
                if (t3 != 0) {
                    t3 = 0x1C;
                    t4 = (*(int *)0xC4B410C);
                } else {
                    t3 = 0x20;
                    t4 = (*(int *)0xC4B410C);
                }
                FUN_0c03744a(((((struct oD8_int *)(a4))->v)), 0x0, t3, t4);
                t3 = FUN_0c05f254(0x100);
                if (t3 != 0) {
                    t3 = 0x1D;
                    t4 = (*(int *)0xC4B410C);
                } else {
                    t3 = 0x21;
                    t4 = (*(int *)0xC4B410C);
                }
                FUN_0c03744a(((((struct oDC_int *)(a4))->v)), 0x0, t3, t4);
                t3 = FUN_0c05f254(0x40);
                if (t3 != 0) {
                    t3 = 0x1E;
                    t4 = (*(int *)0xC4B410C);
                } else {
                    t3 = 0x22;
                    t4 = (*(int *)0xC4B410C);
                }
                FUN_0c03744a(((((struct oE0_int *)(a4))->v)), 0x0, t3, t4);
                t3 = FUN_0c05f254(0x400);
                if (t3 != 0) {
                    t3 = 0x1F;
                    t4 = (*(int *)0xC4B410C);
                } else {
                    t3 = 0x23;
                    t4 = (*(int *)0xC4B410C);
                }
                FUN_0c03744a(((((struct oE4_int *)(a4))->v)), 0x0, t3, t4);
                if ((*(signed char *)(((0x41C + a4) + 0x4))) != 0) {
                    t3 = 0x26;
                    t4 = (*(int *)0xC4B410C);
                } else {
                    t3 = 0x24;
                    t4 = (*(int *)0xC4B410C);
                }
                FUN_0c03744a(((((struct oE8_int *)(a4))->v)), 0x0, t3, t4);
                if ((*(signed char *)(((0x41C + a4) + 0x5))) != 0) {
                    t3 = 0x27;
                    t4 = (*(int *)0xC4B410C);
                } else {
                    t3 = 0x25;
                    t4 = (*(int *)0xC4B410C);
                }
                FUN_0c03744a(((((struct oEC_int *)(a4))->v)), 0x0, t3, t4);
                if ((*(int *)((((((*(signed char *)(((0x41C + a4) + 0x1))) << 2) << 1) + 0xC28ECD0) + 0x4))) != -1) {
                    FUN_0c03744a(((((struct oF0_int *)(a4))->v)), 0x0, (*(int *)((((((*(signed char *)(((0x41C + a4) + 0x1))) << 2) << 1) + 0xC28ECD0) + 0x4))), (*(int *)0xC4B410C));
                    *(unsigned char *)((((((struct oF0_int *)(a4))->v)) + 0x0)) = 0x1;
                    t3 = (((struct oF0_int *)(a4))->v);
                    *(unsigned short *)((t3 + 0x6)) = ((*(short *)((t3 + 0x6))) | 0x400);
                    FUN_0c058a6e((((((struct oF0_int *)(a4))->v)) + 0x14), 0xC28EB38, 0xC28EB28, ((((struct o20_short *)(a4))->v)), 0xA, 0x0);
                    if (((((struct o20_short *)(a4))->v)) == 0) {
                        if ((*(int *)((((((*(signed char *)(((0x41C + a4) + 0x2))) << 2) << 1) + 0xC28ECD0) + 0x4))) != -1) {
                            FUN_0c03744a(((((struct oF0_int *)(a4))->v)), 0x0, (*(int *)((((((*(signed char *)(((0x41C + a4) + 0x2))) << 2) << 1) + 0xC28ECD0) + 0x4))), (*(int *)0xC4B410C));
                        }
                        t3 = (((struct oF0_int *)(a4))->v);
                        *(unsigned short *)((t3 + 0x6)) = ((*(short *)((t3 + 0x6))) | 0x400);
                        FUN_0c058a6e((((((struct oF0_int *)(a4))->v)) + 0x14), 0xC28EB28, 0xC28EB38, ((((struct o20_short *)(a4))->v)), 0xA, 0x0);
                    }
                } else {
                    *(unsigned char *)((((((struct oF0_int *)(a4))->v)) + 0x0)) = 0x0;
                }
                t3 = *(signed char *)(((0x41C + a4) + 0x1));
                t4 = t3;
                if ((*(signed char *)(((0x41C + a4) + 0x2))) != t3) {
                    t3 = (((struct o20_short *)(a4))->v);
                    (((struct o20_ushort *)(a4))->v) = (t3 + 0x1);
                    t4 = 0x20;
                    if ((int)(short)(t3 + 0x1) > (int)0xA) {
                        (((struct o20_ushort *)(a4))->v) = 0x0;
                        t3 = *(signed char *)(((0x41C + a4) + 0x1));
                        *(unsigned char *)(((0x41C + a4) + 0x2)) = t3;
                        t4 = t3;
                    }
                }
                t1 = t4;
            }
            t2 = t1;
        }
        t1 = t2;
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0x1F;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        (((struct o30_float *)(a4))->v) = (1.0f + 1.0f);
        FUN_0c1171f0(a4);
        *(unsigned char *)(((0x41C + a4) + 0x4)) = 0x0;
        FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x0, 0x1, (*(int *)0xC4B410C));
        t2 = 0x0;
        for (;;) {
            if (((*(int *)(((((t2 << 2) << 1) + 0xC28ECD0) + 0x0))) == -1) && (t0 = *(int *)(((((t2 << 2) << 1) + 0xC28ECD0) + 0x4)), t0 == -1)) {
                break;
            }
            *(unsigned char *)(((0x41C + a4) + 0x3)) = ((*(signed char *)(((0x41C + a4) + 0x3))) + 0x1);
            t2 = (t2 + 0x1);
        }
        FUN_0c0fd938(a4);
        FUN_0c0fd334(a4);
        FUN_0c0fd692(a4);
        if ((*(short *)(((*(int *)((a4 + 0x10))) + 0x1C))) != 0) {
            (((struct oA8_uchar *)(a4))->v) = 0x0;
            t0 = 0xA8;
        } else {
            t2 = FUN_0c104f7c((*(signed char *)(((0x41C + a4) + 0x1))), ((*(signed char *)(((0x41C + a4) + 0x3))) - 1));
            if (t2 != (*(signed char *)(((0x41C + a4) + 0x1)))) {
                FUN_0c0fc90c((*(signed char *)(((0x41C + a4) + 0x3))));
                if ((*(signed char *)(((0x41C + a4) + 0x5))) == 1) {
                    FUN_0c0fc924((*(signed char *)(((0x41C + a4) + 0x3))), t2);
                }
                t3 = *(signed char *)(((0x41C + a4) + 0x0));
                switch (t3) {
                case 0:
                    *(unsigned char *)(((0x41C + a4) + 0x1)) = t2;
                    break;
                case 1:
                    (((struct o41C_uchar *)(a4))->v) = 0x1;
                    *(unsigned char *)(((0x41C + a4) + 0x1)) = t2;
                    FUN_0c059c7a((*(int *)((((((*(signed char *)(((0x41C + a4) + 0x1))) << 2) << 1) + 0xC28ECD0) + 0x0))), (*(signed char *)(((0x41C + a4) + 0x4))));
                    break;
                case 2:
                    *(unsigned char *)(((0x41C + a4) + 0x1)) = t2;
                    (((struct o41C_uchar *)(a4))->v) = 0x2;
                    FUN_0c05add4(0x1);
                    FUN_0c059ce8(0x75);
                    FUN_0c059c7a((*(int *)((((((*(signed char *)(((0x41C + a4) + 0x1))) << 2) << 1) + 0xC28ECD0) + 0x0))), (*(signed char *)(((0x41C + a4) + 0x4))));
                    FUN_0c05adc4(0x1);
                    break;
                }
            }
            t3 = FUN_0c05f22c(0x100);
            if (t3 != 0) {
                t3 = *(signed char *)(((0x41C + a4) + 0x0));
                switch (t3) {
                case 0:
                    (((struct o41C_uchar *)(a4))->v) = 0x1;
                    *(unsigned char *)(((0x41C + a4) + 0x1)) = t2;
                    FUN_0c0fc90c((*(signed char *)(((0x41C + a4) + 0x3))));
                    if ((*(signed char *)(((0x41C + a4) + 0x5))) == 1) {
                        FUN_0c0fc924((*(signed char *)(((0x41C + a4) + 0x3))), (*(signed char *)(((0x41C + a4) + 0x1))));
                    }
                    FUN_0c059c7a((*(int *)((((((*(signed char *)(((0x41C + a4) + 0x1))) << 2) << 1) + 0xC28ECD0) + 0x0))), (*(signed char *)(((0x41C + a4) + 0x4))));
                    break;
                case 1:
                    (((struct o41C_uchar *)(a4))->v) = 0x2;
                    FUN_0c05adc4(0x1);
                    break;
                case 2:
                    (((struct o41C_uchar *)(a4))->v) = 0x1;
                    FUN_0c05add4(0x1);
                    break;
                }
            }
            t2 = FUN_0c05adb4(0x1);
            if (t2 != 0) {
                if ((*(signed char *)(((0x41C + a4) + 0x4))) != 0) {
                    (((struct o41C_uchar *)(a4))->v) = 0x1;
                    FUN_0c059c7a((*(int *)((((((*(signed char *)(((0x41C + a4) + 0x1))) << 2) << 1) + 0xC28ECD0) + 0x0))), (*(signed char *)(((0x41C + a4) + 0x4))));
                } else {
                    if ((*(signed char *)(((0x41C + a4) + 0x5))) == 1) {
                        t2 = FUN_0c0fc990((*(signed char *)(((0x41C + a4) + 0x3))), (*(signed char *)(((0x41C + a4) + 0x1))));
                        if (t2 == -1) {
                            (((struct o41C_uchar *)(a4))->v) = 0x0;
                            FUN_0c05add4(0x1);
                            FUN_0c059ce8(0x75);
                        } else {
                            *(unsigned char *)(((0x41C + a4) + 0x1)) = t2;
                            FUN_0c059c7a((*(int *)((((((*(signed char *)(((0x41C + a4) + 0x1))) << 2) << 1) + 0xC28ECD0) + 0x0))), (*(signed char *)(((0x41C + a4) + 0x4))));
                        }
                    } else {
                        if ((int)(*(signed char *)(((0x41C + a4) + 0x1))) < (int)((*(signed char *)(((0x41C + a4) + 0x3))) - 1)) {
                            *(unsigned char *)(((0x41C + a4) + 0x1)) = ((*(signed char *)(((0x41C + a4) + 0x1))) + 0x1);
                            FUN_0c059c7a((*(int *)((((((*(signed char *)(((0x41C + a4) + 0x1))) << 2) << 1) + 0xC28ECD0) + 0x0))), (*(signed char *)(((0x41C + a4) + 0x4))));
                        } else {
                            (((struct o41C_uchar *)(a4))->v) = 0x0;
                            *(unsigned char *)(((0x41C + a4) + 0x1)) = 0x0;
                            FUN_0c05add4(0x1);
                            FUN_0c059ce8(0x75);
                        }
                    }
                }
            }
            t2 = FUN_0c05f22c(0x40);
            if (t2 != 0) {
                FUN_0c05add4(0x1);
                (((struct o41C_uchar *)(a4))->v) = 0x0;
                FUN_0c059ce8(0x75);
            }
            t2 = FUN_0c05f22c(0x200);
            if (t2 != 0) {
                *(unsigned char *)(((0x41C + a4) + 0x4)) = ((-(*(signed char *)(((0x41C + a4) + 0x4)))) + 0x1);
            }
            t2 = FUN_0c05f22c(0x80);
            if (t2 != 0) {
                *(unsigned char *)(((0x41C + a4) + 0x5)) = ((-(*(signed char *)(((0x41C + a4) + 0x5)))) + 0x1);
                if ((*(signed char *)(((0x41C + a4) + 0x5))) != 0) {
                    FUN_0c0fc90c((*(signed char *)(((0x41C + a4) + 0x3))));
                    FUN_0c0fc924((*(signed char *)(((0x41C + a4) + 0x3))), (*(signed char *)(((0x41C + a4) + 0x1))));
                }
            }
            (((struct oA8_uchar *)(a4))->v) = 0x1;
            t2 = FUN_0c05f254(0x800);
            if (t2 != 0) {
                t2 = 0x1C;
                t3 = (*(int *)0xC4B410C);
            } else {
                t2 = 0x20;
                t3 = (*(int *)0xC4B410C);
            }
            FUN_0c03744a(((((struct oD8_int *)(a4))->v)), 0x0, t2, t3);
            t2 = FUN_0c05f254(0x100);
            if (t2 != 0) {
                t2 = 0x1D;
                t3 = (*(int *)0xC4B410C);
            } else {
                t2 = 0x21;
                t3 = (*(int *)0xC4B410C);
            }
            FUN_0c03744a(((((struct oDC_int *)(a4))->v)), 0x0, t2, t3);
            t2 = FUN_0c05f254(0x40);
            if (t2 != 0) {
                t2 = 0x1E;
                t3 = (*(int *)0xC4B410C);
            } else {
                t2 = 0x22;
                t3 = (*(int *)0xC4B410C);
            }
            FUN_0c03744a(((((struct oE0_int *)(a4))->v)), 0x0, t2, t3);
            t2 = FUN_0c05f254(0x400);
            if (t2 != 0) {
                t2 = 0x1F;
                t3 = (*(int *)0xC4B410C);
            } else {
                t2 = 0x23;
                t3 = (*(int *)0xC4B410C);
            }
            FUN_0c03744a(((((struct oE4_int *)(a4))->v)), 0x0, t2, t3);
            if ((*(signed char *)(((0x41C + a4) + 0x4))) != 0) {
                t2 = 0x26;
                t3 = (*(int *)0xC4B410C);
            } else {
                t2 = 0x24;
                t3 = (*(int *)0xC4B410C);
            }
            FUN_0c03744a(((((struct oE8_int *)(a4))->v)), 0x0, t2, t3);
            if ((*(signed char *)(((0x41C + a4) + 0x5))) != 0) {
                t2 = 0x27;
                t3 = (*(int *)0xC4B410C);
            } else {
                t2 = 0x25;
                t3 = (*(int *)0xC4B410C);
            }
            FUN_0c03744a(((((struct oEC_int *)(a4))->v)), 0x0, t2, t3);
            if ((*(int *)((((((*(signed char *)(((0x41C + a4) + 0x1))) << 2) << 1) + 0xC28ECD0) + 0x4))) != -1) {
                FUN_0c03744a(((((struct oF0_int *)(a4))->v)), 0x0, (*(int *)((((((*(signed char *)(((0x41C + a4) + 0x1))) << 2) << 1) + 0xC28ECD0) + 0x4))), (*(int *)0xC4B410C));
                *(unsigned char *)((((((struct oF0_int *)(a4))->v)) + 0x0)) = 0x1;
                t2 = (((struct oF0_int *)(a4))->v);
                *(unsigned short *)((t2 + 0x6)) = ((*(short *)((t2 + 0x6))) | 0x400);
                FUN_0c058a6e((((((struct oF0_int *)(a4))->v)) + 0x14), 0xC28EB38, 0xC28EB28, ((((struct o20_short *)(a4))->v)), 0xA, 0x0);
                if (((((struct o20_short *)(a4))->v)) == 0) {
                    if ((*(int *)((((((*(signed char *)(((0x41C + a4) + 0x2))) << 2) << 1) + 0xC28ECD0) + 0x4))) != -1) {
                        FUN_0c03744a(((((struct oF0_int *)(a4))->v)), 0x0, (*(int *)((((((*(signed char *)(((0x41C + a4) + 0x2))) << 2) << 1) + 0xC28ECD0) + 0x4))), (*(int *)0xC4B410C));
                    }
                    t2 = (((struct oF0_int *)(a4))->v);
                    *(unsigned short *)((t2 + 0x6)) = ((*(short *)((t2 + 0x6))) | 0x400);
                    FUN_0c058a6e((((((struct oF0_int *)(a4))->v)) + 0x14), 0xC28EB28, 0xC28EB38, ((((struct o20_short *)(a4))->v)), 0xA, 0x0);
                }
            } else {
                *(unsigned char *)((((((struct oF0_int *)(a4))->v)) + 0x0)) = 0x0;
            }
            t2 = *(signed char *)(((0x41C + a4) + 0x1));
            t3 = t2;
            if ((*(signed char *)(((0x41C + a4) + 0x2))) != t2) {
                t2 = (((struct o20_short *)(a4))->v);
                (((struct o20_ushort *)(a4))->v) = (t2 + 0x1);
                t4 = 0x20;
                if ((int)(short)(t2 + 0x1) > (int)0xA) {
                    (((struct o20_ushort *)(a4))->v) = 0x0;
                    t2 = *(signed char *)(((0x41C + a4) + 0x1));
                    *(unsigned char *)(((0x41C + a4) + 0x2)) = t2;
                    t4 = t2;
                }
                t3 = t4;
            }
            t0 = t3;
        }
        t1 = t0;
    }
    return t1;
}

int FUN_0c0fddea(int a4)
{
    register int t0;
    register int t1;

    t0 = FUN_0c03f444(0x8, 0x1, 0x14);
    t1 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC0FD962;
        *(unsigned int *)((t0 + 0x10)) = a4;
        t1 = 0xFFFFFFFF;
    }
    return t1;
}

int FUN_0c0fe000(int a4)
{
    register int t0;
    register int t1;

    t0 = FUN_0c03f444(0x8, 0x1, 0x14);
    t1 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC0FDE34;
        *(unsigned int *)((t0 + 0x10)) = a4;
        t1 = 0xFFFFFFFF;
    }
    return t1;
}


int FUN_0c0fe0b2(void)
{
    register int t0;

    t0 = FUN_0c03f444(0x8, 0x0, 0x0);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC0FE02A;
        FUN_0c0fe02a(t0);
        return t0;
    }
    return 0x0;
}
