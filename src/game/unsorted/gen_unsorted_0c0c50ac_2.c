/* game/unsorted: functions 0C0C50AC-0C0C57BC, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o125_uchar { char p[0x125]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o376C_uint { char p[0x376C]; unsigned int v; };
int FUN_0c07e328(int, int);
int FUN_0c0c213c(int);
int FUN_0c0c283a(int);
int FUN_0c0c2ab6(int, int, int, int);
int FUN_0c0c2d56(int, int, int);
int FUN_0c0c3e3a(int, int, int);
int FUN_0c0c50ac(int);
int FUN_0c0c51d4(int);
int FUN_0c0c5286(int);
int FUN_0c0c52c4(int a4, int a5, int a6);
int FUN_0c0c5494(int a4, int a5, int a6, int a7);
int FUN_0c0c56d2(int a4, int a5, int a6, int a7);

int FUN_0c0c52c4(int a4, int a5, int a6)
{
    register int t0;
    register int t2;

    t0 = FUN_0c0c3e3a(a4, a5, a6);
    if (t0 == 0) {
        t2 = *(signed char *)((a4 + 0x15));
        if (t2 != 0) {
            if (t2 != 1) {
                if (t2 != 2) {
                    return t2;
                }
                return FUN_0c0c5286(a4);
            }
            return FUN_0c0c51d4(a4);
        }
        return FUN_0c0c50ac(a4);
    }
    return t0;
}

int FUN_0c0c5494(int a4, int a5, int a6, int a7)
{
    int t0;
    int qe0;
    int t2;
    int t1;

    t1 = *(signed char *)(a4 + 0x1);
    t2 = *(signed char *)(a4 + 0x41C);
    qe0 = (((short)t1 * (short)0x3938) + 0xC532498);
    if ((((unsigned char)t2 != 43) && ((unsigned char)t2 != 44)) || (t0 = *(signed char *)((qe0 + 0x16)), t0 == 0)) {
        t0 = *(signed char *)(a4 + 0x15);
        switch (t0) {
        case 0:
            t0 = *(signed char *)((qe0 + 0x134));
            if ((t0 != 0) && ((signed char)t0 != 1)) {
                FUN_0c0c2ab6(a4, (*(signed char *)(((((unsigned short)(unsigned char)(*(signed char *)(a4 + 0x41C)) * (unsigned short)0x34) + 0xC2738B8) + 0x13))), a6, a7);
                if ((*(signed char *)(a4 + 0x41F)) == 0) {
                    t0 = (*(signed char *)(((((unsigned short)(unsigned char)(*(signed char *)(a4 + 0x41C)) * (unsigned short)0x34) + 0xC2738B8) + 0xE)));
                } else {
                    t0 = (*(signed char *)(((((unsigned short)(unsigned char)(*(signed char *)(a4 + 0x41C)) * (unsigned short)0x34) + 0xC2738B8) + 0xF)));
                }
                FUN_0c07e328(a4, t0);
                FUN_0c0c213c(a4);
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x15)) + 0x1);
            }
            break;
        case 1:
            if ((*(signed char *)((qe0 + 0x134))) != 2) {
                (((struct o125_uchar *)(a4))->v) = 0x0;
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x15)) + 0x1);
            }
            break;
        case 2:
            if ((*(signed char *)((qe0 + 0x134))) == 2) {
                FUN_0c0c2ab6(a4, (*(signed char *)(((((unsigned short)(unsigned char)(*(signed char *)(a4 + 0x41C)) * (unsigned short)0x34) + 0xC2738B8) + 0x13))), a6, a7);
                if ((*(signed char *)(a4 + 0x41F)) == 0) {
                    t0 = *(signed char *)(a4 + 0x41C);
                    if ((unsigned char)t0 != 22) {
                        if ((unsigned char)t0 != 43) {
                            if ((unsigned char)t0 != 44) {
                            } else {
                                FUN_0c07e328(a4, 0x2F);
                            }
                        } else {
                            FUN_0c07e328(a4, 0x2E);
                        }
                    } else {
                        FUN_0c07e328(a4, 0x2C);
                    }
                } else {
                    FUN_0c07e328(a4, (*(signed char *)(((((unsigned short)(unsigned char)(*(signed char *)(a4 + 0x41C)) * (unsigned short)0x34) + 0xC2738B8) + 0xF))));
                }
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x15)) + 0x1);
            }
            break;
        case 3:
            if ((*(signed char *)((qe0 + 0x134))) == 0) {
                (((struct o125_uchar *)(a4))->v) = 0x0;
            }
            break;
        }
    } else {
        t0 = *(signed char *)(a4 + 0x15);
        if (t0 != 0) {
            if (t0 != 1) {
            } else {
                if ((*(signed char *)((qe0 + 0x134))) == 0) {
                    (((struct o125_uchar *)(a4))->v) = 0x0;
                }
            }
        } else {
            t0 = *(signed char *)((qe0 + 0x134));
            if (t0 == 0) {
            } else {
                if ((signed char)t0 == 1) {
                } else {
                    FUN_0c0c2ab6(a4, (*(signed char *)(((((unsigned short)(unsigned char)(*(signed char *)(a4 + 0x41C)) * (unsigned short)0x34) + 0xC2738B8) + 0x13))), a6, a7);
                    if ((*(signed char *)(a4 + 0x41F)) == 0) {
                        t0 = (*(signed char *)(((((unsigned short)(unsigned char)(*(signed char *)(a4 + 0x41C)) * (unsigned short)0x34) + 0xC2738B8) + 0xE)));
                    } else {
                        t0 = (*(signed char *)(((((unsigned short)(unsigned char)(*(signed char *)(a4 + 0x41C)) * (unsigned short)0x34) + 0xC2738B8) + 0xF)));
                    }
                    FUN_0c07e328(a4, t0);
                    FUN_0c0c213c(a4);
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x15)) + 0x1);
                }
            }
        }
    }
    if ((*(signed char *)((qe0 + 0x3715))) != 8) {
        return FUN_0c0c2d56(a4, 0x5, (*(signed char *)(a4 + 0x1)));
    }
    t0 = FUN_0c0c283a(a4);
    if (t0 != 0) {
        return FUN_0c0c2d56(a4, 0x6, (*(signed char *)(a4 + 0x1)));
    }
    (((struct o376C_uint *)(qe0))->v) = a4;
    return 0x376C;
}

int FUN_0c0c56d2(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x1));
    t1 = *(signed char *)((a4 + 0x15));
    if (t1 != 0) {
        if (t1 != 1) {
        } else {
            if ((*(signed char *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x134))) == 0) {
                (((struct o125_uchar *)(a4))->v) = 0x0;
            }
        }
    } else {
        t1 = *(signed char *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x134));
        if ((t1 != 0) && ((signed char)t1 != 1)) {
            FUN_0c0c2ab6(a4, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738CB))), a6, a7);
            if ((*(signed char *)((a4 + 0x41F))) == 0) {
                t1 = (*(signed char *)(((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738B8) + 0xE)));
            } else {
                t1 = (*(signed char *)(((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738B8) + 0xF)));
            }
            FUN_0c07e328(a4, t1);
            FUN_0c0c213c(a4);
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        }
    }
    (((struct o376C_uint *)((((short)t0 * (short)0x3938) + 0xC532498)))->v) = a4;
    t1 = *(signed char *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x3715));
    if (t1 != 33) {
        t2 = *(signed char *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x3715));
        if (t2 != 8) {
            return FUN_0c0c2d56(a4, 0x5, (*(signed char *)((a4 + 0x1))));
        }
        return t2;
    }
    return t1;
}
