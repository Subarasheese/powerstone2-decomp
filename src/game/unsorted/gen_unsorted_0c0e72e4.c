/* game/unsorted: functions 0C0E72E4-0C0E74F0, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o131_uchar { char p[0x131]; unsigned char v; };
struct o132_uchar { char p[0x132]; unsigned char v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o30_float { char p[0x30]; float v; };
struct o84_int { char p[0x84]; int v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC0_int { char p[0xC0]; int v; };
int FUN_0c03f346(int, int, int, int);
int thunk_FUN_0c05abb2(int, int);
int FUN_0c064d5a(int, int);
int FUN_0c0d04c4(int, int);
int FUN_0c0e72e4(int a4, int a5, int a6, int a7);

int FUN_0c0e72e4(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    register int t2;
    register int t3;
    register int t4;

    t2 = *(signed char *)((a4 + 0x14));
    if (t2 != 0) {
        if (t2 != 1) {
            return t2;
        }
        if ((*(int *)(((((*(signed char *)((a4 + 0x1B))) << 2) + 0xC540D94) + 0x0))) == 0) {
            return ((int (*)(int, int, int, int))(FUN_0c03f346))(a4, a5, a6, a7);
        }
        t2 = *(signed char *)((a4 + 0x15));
        if (t2 != 0) {
            if (t2 != 1) {
                if (t2 != 2) {
                    if (t2 != 3) {
                        t3 = t2;
                        if (t2 == 4) {
                            t4 = *(int *)((a4 + 0x34));
                            *(unsigned int *)((a4 + 0x34)) = (t4 + 0x199);
                            t3 = t2;
                            if ((int)(t4 + 0x199) >= 0) {
                                (((struct o15_uchar *)(a4))->v) = 0x0;
                                t3 = (FUN_0c064d5a(a4, 0xC1CC074));
                            }
                        }
                        t2 = t3;
                    } else {
                        t3 = *(signed char *)((0x15 + ((((struct o84_int *)((((*(signed char *)((a4 + 0x2))) << 2) + 0xC540D94)))->v))));
                        t4 = t3;
                        if (t3 == 5) {
                            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                            t4 = (FUN_0c064d5a(a4, 0xC1CC080));
                        }
                        t2 = t4;
                    }
                    t3 = t2;
                } else {
                    *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
                    t2 = 0x132;
                    if (((int)(*(short *)((a4 + 0x1C))) > 0) && (t0 = *(signed char *)((a4 + 0x132)), t0 == 0)) {
                    } else {
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        t2 = (FUN_0c064d5a(a4, 0xC1CC098));
                    }
                    t3 = t2;
                }
                t0 = t3;
            } else {
                t2 = *(int *)((a4 + 0x34));
                *(unsigned int *)((a4 + 0x34)) = (t2 - 0x333);
                t3 = (t2 - 0x333);
                if ((int)(t2 - 0x333) <= (int)0xFFFFC000) {
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    *(unsigned short *)((a4 + 0x1C)) = 0x78;
                    FUN_0c064d5a(a4, 0xC1CC08C);
                    (((struct o132_uchar *)(a4))->v) = 0x0;
                    (((struct o131_uchar *)(a4))->v) = 0x0;
                    t3 = 0x131;
                }
                t0 = t3;
            }
            return t0;
        }
        t0 = *(signed char *)((0x17 + (*(int *)((0xC540D94 + ((*(signed char *)((a4 + 0x1B))) << 2))))));
        if (t0 == 1) {
            t2 = *(signed char *)((a4 + 0x2));
            if (((t2 + 0x1) & (*(signed char *)(((0x18 + (*(int *)(((((*(signed char *)(((0x1B + a4) + 0x0))) << 2) + 0xC540D94) + 0x0)))) + 0x0)))) != 0) {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                FUN_0c064d5a(a4, 0xC1CC080);
                return thunk_FUN_0c05abb2(0x4B, (a4 + 0x28));
            }
            return (t2 + 0x1);
        }
        return t0;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct o15_uchar *)(a4))->v) = 0x0;
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    if ((int)(*(signed char *)((a4 + 0x1B))) >= 0) {
        (((struct oA4_uint *)(a4))->v) = ((*(int *)(((((*(signed char *)((a4 + 0x1B))) << 2) + 0xC540D94) + 0x0))) + 0x64);
    }
    (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) - 150.0f);
    FUN_0c064d5a(a4, 0xC1CC074);
    (((struct oAC_ushort *)(a4))->v) = 0x3;
    t0 = 0x0;
    for (;;) {
        if ((int)t0 >= (int)((((struct oC0_int *)(a4))->v))) {
            break;
        }
        t2 = t0;
        t2 = (t2 << 2);
        t2 = (t2 + (0xC4 + a4));
        t2 = (*(int *)((t2 + 0x0)));
        FUN_0c0d04c4((t2 + 0x6), (t2 + 0x78));
        t0 = (t0 + 0x1);
    }
    if ((*(int *)(((((*(signed char *)((a4 + 0x1B))) << 2) + 0xC540D94) + 0x0))) == 0) {
        return ((int (*)(int))(FUN_0c03f346))(a4);
    }
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    t2 = t0;
                    if (t0 == 4) {
                        t3 = *(int *)((a4 + 0x34));
                        *(unsigned int *)((a4 + 0x34)) = (t3 + 0x199);
                        t4 = t0;
                        if ((int)(t3 + 0x199) >= 0) {
                            (((struct o15_uchar *)(a4))->v) = 0x0;
                            t4 = (FUN_0c064d5a(a4, 0xC1CC074));
                        }
                        t2 = t4;
                    }
                    t0 = t2;
                } else {
                    t2 = *(signed char *)((0x15 + ((((struct o84_int *)((((*(signed char *)((a4 + 0x2))) << 2) + 0xC540D94)))->v))));
                    t3 = t2;
                    if (t2 == 5) {
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        t3 = (FUN_0c064d5a(a4, 0xC1CC080));
                    }
                    t0 = t3;
                }
                t2 = t0;
            } else {
                *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
                t0 = 0x132;
                if (((int)(*(short *)((a4 + 0x1C))) > 0) && (t1 = *(signed char *)((a4 + 0x132)), t1 == 0)) {
                } else {
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    t0 = (FUN_0c064d5a(a4, 0xC1CC098));
                }
                t2 = t0;
            }
            t0 = t2;
        } else {
            t1 = *(int *)((a4 + 0x34));
            *(unsigned int *)((a4 + 0x34)) = (t1 - 0x333);
            t2 = (t1 - 0x333);
            if ((int)(t1 - 0x333) <= (int)0xFFFFC000) {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                *(unsigned short *)((a4 + 0x1C)) = 0x78;
                FUN_0c064d5a(a4, 0xC1CC08C);
                (((struct o132_uchar *)(a4))->v) = 0x0;
                (((struct o131_uchar *)(a4))->v) = 0x0;
                t2 = 0x131;
            }
            t0 = t2;
        }
        return t0;
    }
    t0 = *(signed char *)((0x17 + (*(int *)((0xC540D94 + ((*(signed char *)((a4 + 0x1B))) << 2))))));
    if (t0 == 1) {
        t1 = *(signed char *)((a4 + 0x2));
        if (((t1 + 0x1) & (*(signed char *)(((0x18 + (*(int *)(((((*(signed char *)(((0x1B + a4) + 0x0))) << 2) + 0xC540D94) + 0x0)))) + 0x0)))) != 0) {
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            FUN_0c064d5a(a4, 0xC1CC080);
            return thunk_FUN_0c05abb2(0x4B, (a4 + 0x28));
        }
        return (t1 + 0x1);
    }
    return t0;
}
