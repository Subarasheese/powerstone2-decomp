/* game/stage: functions 0C0B5EE0-0C0B7322, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o168_float { char p[0x168]; float v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o1A_uchar { char p[0x1A]; unsigned char v; };
struct o1B_uchar { char p[0x1B]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o4_int { char p[0x4]; int v; };
struct oE4_int { char p[0xE4]; int v; };
struct oF4_int { char p[0xF4]; int v; };
int FUN_0c037bf6(int);
int FUN_0c038362(int);
int FUN_0c059e60(int, int);
int FUN_0c073682(int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c0b1c5c(void);
int FUN_0c0b4b20(void);
int FUN_0c0b507a(int, int, int);
int FUN_0c0b5ee0(int, int);
int FUN_0c0b5f0a(int, int);
int FUN_0c0b6322(int);
int FUN_0c0b65f8(int);
int FUN_0c0b6766(int, int, int, int);
int FUN_0c0b6862(int, int, int, int);
int FUN_0c0b6b58(int);
int FUN_0c14ada0(int, int, int, int, int);
int FUN_0c179ac0(void);
int FUN_0c187798(void);
int FUN_0c0b6018(int a4);
int FUN_0c0b69c0(int a4, int a5, int a6, int a7);
int FUN_0c0b6e98(int a4);

int FUN_0c0b6018(int a4)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                (((struct o1A_uchar *)((0x38F8 + a4)))->v) = 0x1;
                FUN_0c037bf6(a4);
                t1 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
                if ((int)(short)(t1 - 1) > 0) {
                    return FUN_0c038362(a4);
                }
                *(unsigned short *)((a4 + 0x1C)) = 0xF;
                *(volatile signed char *)(((0x38F8 + a4) + 0x1B));
                FUN_0c187798();
                (((struct o20_float *)((0x38F8 + a4)))->v) = ((((struct o168_float *)((0xC532498 + ((short)(*(signed char *)(((0x38F8 + a4) + 0x1B))) * (short)0x3938))))->v));
                (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                return 0x16;
            }
            if (t0 == 3) {
                (((struct o1A_uchar *)((0x38F8 + a4)))->v) = 0x1;
                FUN_0c037bf6(a4);
                t1 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
                if ((int)(short)(t1 - 1) <= 0) {
                    *(unsigned short *)((a4 + 0x1C)) = 0x28;
                    FUN_0c059e60(a4, 0x22);
                    FUN_0c0b5f0a(a4, 0x0);
                    FUN_0c0b5f0a(a4, 0x1);
                    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                    return 0x16;
                }
                return FUN_0c038362(a4);
            }
            if (t0 == 4) {
                (((struct o1A_uchar *)((0x38F8 + a4)))->v) = 0x1;
                FUN_0c037bf6(a4);
                t0 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
                if ((int)(short)(t0 - 1) <= 0) {
                    t0 = (((struct o4_int *)0xC1C6808)->v);
                    t1 = *(signed char *)((a4 + 0x1));
                    FUN_0c07e79c(a4, t1, 0x1, t0, (t1), 0x1, (t0));
                    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                    t0 = 0x16;
                    t1 = 0x0;
                    for (;;) {
                        if ((int)t1 >= (int)0x4) {
                            break;
                        }
                        t0 = (*(signed char *)((a4 + 0x1)));
                        t0 = (FUN_0c0b5ee0(t1, t0));
                        if (t0 == 0) {
                            t0 = (FUN_0c073682(((t1 * 0x3938) + 0xC532498), 0x12));
                        }
                        t1 = (t1 + 0x1);
                    }
                    return t0;
                }
                return FUN_0c038362(a4);
            }
            t0 = FUN_0c037bf6(a4);
            if ((unsigned char)t0 != 0) {
                return FUN_0c0b507a(a4, 0x0, 0x0);
            }
            return FUN_0c038362(a4);
        }
    } else {
        t0 = (((struct o0_int *)0xC1C6808)->v);
        t1 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t1, 0x1, t0, (t1), 0x1, (t0));
        t0 = FUN_0c179ac0();
        t1 = ((~(((~t0) + 0x1) & 0x1)) + 0x1);
        if ((int)t0 >= 0) {
            t1 = (t0 & 0x1);
        }
        (((struct o1B_uchar *)((0x38F8 + a4)))->v) = (*(signed char *)((((0x38F8 + a4) + 0x18) + t1)));
        (((struct o1A_uchar *)((0x38F8 + a4)))->v) = 0x1;
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        (((struct o17_uchar *)(a4))->v) = 0x0;
    }
    t0 = *(signed char *)((a4 + 0x17));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c038362(a4);
        }
        FUN_0c037bf6(a4);
        t0 = *(short *)((a4 + 0x1E));
        *(unsigned short *)((a4 + 0x1E)) = (t0 - 1);
        if ((int)(short)(t0 - 1) <= 0) {
            *(unsigned short *)((a4 + 0x1E)) = 0x14;
            FUN_0c14ada0(a4, 0x0, 0x3C, (((((struct oE4_int *)(a4))->v)) + 0x28), 0xC1C6810);
            FUN_0c14ada0(a4, 0x1, 0x3C, (((((struct oF4_int *)(a4))->v)) + 0x28), 0xC1C681C);
        }
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        t1 = (short)(t0 - 1);
        if ((int)(short)(t0 - 1) > 0) {
        } else {
            *(unsigned short *)((a4 + 0x1C)) = 0xF;
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
            (((struct o17_uchar *)(a4))->v) = 0x0;
            t1 = 0x17;
        }
        return t1;
    }
    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 == 0) {
    } else {
        *(unsigned short *)((a4 + 0x1C)) = 0x87;
        *(unsigned short *)((a4 + 0x1E)) = 0x14;
        FUN_0c059e60(a4, 0x21);
        FUN_0c14ada0(a4, 0x0, 0x3C, (((((struct oE4_int *)(a4))->v)) + 0x28), 0xC1C6810);
        FUN_0c14ada0(a4, 0x1, 0x3C, (((((struct oF4_int *)(a4))->v)) + 0x28), 0xC1C681C);
        (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
    }
    return FUN_0c038362(a4);
}

int FUN_0c0b69c0(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x3732));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        if (t0 != 5) {
                            if (t0 != 6) {
                                if (t0 != 7) {
                                    if (t0 != 8) {
                                        return t0;
                                    }
                                    return FUN_0c0b6018(a4);
                                }
                                return FUN_0c0b6862(a4, a5, a6, a7);
                            }
                            return FUN_0c0b6766(a4, 0x1, a6, a7);
                        }
                        return FUN_0c0b6766(a4, 0x0, a6, a7);
                    }
                    return FUN_0c0b65f8(a4);
                }
                return FUN_0c0b6322(a4);
            }
            return ((int (*)(int, int, int, int))(0xC0B5C58))(a4, 0x2, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC0B5C58))(a4, 0x1, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC0B5C58))(a4, 0x0, a6, a7);
}

int FUN_0c0b6e98(int a4)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                FUN_0c0b6b58(a4);
                t0 = FUN_0c037bf6(a4);
                if ((unsigned char)t0 != 0) {
                    return FUN_0c0b507a(a4, 0x0, 0x0);
                }
                return FUN_0c038362(a4);
            }
            FUN_0c0b6b58(a4);
            FUN_0c037bf6(a4);
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
            if ((int)(short)(t0 - 1) <= 0) {
                t0 = *(signed char *)((a4 + 0x1));
                FUN_0c07e79c(a4, t0, 0x4, 0x2, (t0), 0x4, 0x2);
                (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                return 0x16;
            }
            return FUN_0c038362(a4);
        }
    } else {
        t0 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t0, 0x4, 0x1, (t0), 0x4, 0x1);
        FUN_0c059e60(a4, 0x8);
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        (((struct o17_uchar *)(a4))->v) = 0x0;
    }
    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        t0 = FUN_0c0b1c5c();
        if ((int)t0 >= (int)0x2) {
            t0 = (((FUN_0c0b4b20()) << 2) << 1);
            t1 = 0xC1C6DFC;
        } else {
            t0 = (((FUN_0c0b4b20()) << 2) << 1);
            t1 = 0xC1C6DF8;
        }
        *(unsigned short *)((a4 + 0x1C)) = (*(int *)((t1 + t0)));
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
    }
    return FUN_0c038362(a4);
}
