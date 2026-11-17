/* game/unsorted: functions 0C0E79F4-0C0E8180, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o41C_uchar { char p[0x41C]; unsigned char v; };
struct o420_ushort { char p[0x420]; unsigned short v; };
struct o423_uchar { char p[0x423]; unsigned char v; };
struct o424_uchar { char p[0x424]; unsigned char v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAA_uchar { char p[0xAA]; unsigned char v; };
struct oAB_uchar { char p[0xAB]; unsigned char v; };
struct oC0_int { char p[0xC0]; int v; };
int FUN_0c064ee4(int, int);
int FUN_0c064f80(int);
int FUN_0c0c212c(int);
int FUN_0c0c2ab6(int, int);
int FUN_0c0c2d56(int, int, int);
extern int FUN_0c0c4b76();
extern int FUN_0c0c4c1c();
extern int FUN_0c0c5024();
extern int FUN_0c0c52c4();
extern int FUN_0c0c8c08();
extern int FUN_0c0c8c36();
int FUN_0c0e79f4(int a4, int a5, int a6);
int FUN_0c0e7a22(int a4);
int FUN_0c0e7ff0(int a4, int a5, int a6, int a7);

int FUN_0c0e79f4(int a4, int a5, int a6)
{
    register int t3;
    register int t1;
    register int t2;

    FUN_0c0c2d56(a4, a5, a6);
    t3 = 0x0;
    for (;;) {
        if ((int)t3 >= (int)((((struct oC0_int *)(a4))->v))) {
            break;
        }
        t2 = 0xC4;
        t2 = (t2 + a4);
        t1 = (*(int *)((((t3 << 2) + t2) + 0x0)));
        t3 = (t3 + 0x1);
        *(unsigned char *)((t1 + 0x0)) = 0x1;
    }
    return 0xC0;
}

int FUN_0c0e7a22(int a4)
{
    register int t0;

    t0 = FUN_0c064ee4(a4, 0x2);
    if (t0 != 0) {
        return 0x2;
    }
    t0 = FUN_0c064f80(a4);
    if (t0 != 0) {
        return 0x1;
    }
    return 0x0;
}

int FUN_0c0e7ff0(int a4, int a5, int a6, int a7)
{
    int stk[2];
    register int t0;
    int t1;
    register int t2;
    register int t13;
    int t15;
    register int t16;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        t1 = *(signed char *)((a4 + 0x41D));
        if (t1 != 0) {
            if (t1 != 1) {
                if (t1 != 2) {
                    if (t1 != 3) {
                        if (t1 != 4) {
                            if (t1 != 5) {
                                if (t1 != 6) {
                                    if (t1 != 7) {
                                        if (t1 != 8) {
                                            if ((t1 != 9) && (t1 != 10)) {
                                                return ((int (*)(int, int, int, int))(0xC0E7FBC))(a4, a5, a6, a7);
                                            }
                                            return ((int (*)(int, int, int, int))(0xC0E7D58))(a4, a5, a6, a7);
                                        }
                                        return ((int (*)(int, int, int, int))(FUN_0c0c8c36))(a4, a5, a6, a7);
                                    }
                                    return ((int (*)(int, int, int, int))(FUN_0c0c8c08))(a4, a5, a6, a7);
                                }
                                return ((int (*)(int, int, int))(FUN_0c0c52c4))(a4, a5, a6);
                            }
                            return ((int (*)(int, int, int))(FUN_0c0c5024))(a4, a5, a6);
                        }
                        return ((int (*)(int, int, int))(FUN_0c0c4c1c))(a4, a5, a6);
                    }
                    return ((int (*)(int, int, int, int))(0xC0E7F36))(a4, a5, a6, a7);
                }
                t2 = ((int (*)(int, int, int))(FUN_0c0c4b76))(a4, a5, a6);
                if ((*(signed char *)((a4 + 0x132))) != 0) {
                    return FUN_0c0e79f4(a4, 0xA, (*(signed char *)((a4 + 0x1))));
                }
                return 0x132;
            }
            return ((int (*)(int, int, int, int))(0xC0E7B54))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC0E7A56))(a4, a5, a6, a7);
    }
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    *(unsigned char *)((a4 + 0x3)) = (*(signed char *)((a4 + 0x2)));
    (((struct o41C_uchar *)(a4))->v) = 0xC3;
    (((struct o424_uchar *)(a4))->v) = 0x2;
    FUN_0c0e79f4(a4, 0x1, (*(signed char *)((a4 + 0x1))));
    FUN_0c0c2ab6(a4, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738CA))));
    FUN_0c0c212c(a4);
    t13 = *(short *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738D2));
    (((struct o160_float *)(a4))->v) = (float)t13;
    (((struct o420_ushort *)(a4))->v) = (int)(float)t13;
    (((struct o423_uchar *)(a4))->v) = 0xFFFFFFFF;
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct oAA_uchar *)(a4))->v) = 0x1;
    (((struct oAB_uchar *)(a4))->v) = 0x1;
    t15 = *(signed char *)((a4 + 0x41D));
    if (t15 != 0) {
        if (t15 != 1) {
            if (t15 != 2) {
                if (t15 != 3) {
                    if (t15 != 4) {
                        if (t15 != 5) {
                            if (t15 != 6) {
                                if (t15 != 7) {
                                    if (t15 != 8) {
                                        if ((t15 != 9) && (t15 != 10)) {
                                            return ((int (*)(int, int, int, int))(0xC0E7FBC))(a4, a5, a6, a7);
                                        }
                                        return ((int (*)(int, int, int, int))(0xC0E7D58))(a4, a5, a6, a7);
                                    }
                                    return ((int (*)(int))(FUN_0c0c8c36))(a4);
                                }
                                return ((int (*)(int))(FUN_0c0c8c08))(a4);
                            }
                            return ((int (*)(int))(FUN_0c0c52c4))(a4);
                        }
                        return ((int (*)(int))(FUN_0c0c5024))(a4);
                    }
                    return ((int (*)(int))(FUN_0c0c4c1c))(a4);
                }
                return ((int (*)(int, int, int, int))(0xC0E7F36))(a4, a5, a6, a7);
            }
            t16 = ((int (*)(int, int, int, int, int, int))(FUN_0c0c4b76))(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4));
            if ((*(signed char *)((a4 + 0x132))) != 0) {
                return FUN_0c0e79f4(a4, 0xA, (*(signed char *)((a4 + 0x1))));
            }
            return 0x132;
        }
        return ((int (*)(int, int, int, int))(0xC0E7B54))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC0E7A56))(a4, a5, a6, a7);
}
