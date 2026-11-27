/* Straight-line functions with calls and guards (batch gen_vh): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o41C_uchar { char p[0x41C]; unsigned char v; };
struct o420_ushort { char p[0x420]; unsigned short v; };
struct o423_uchar { char p[0x423]; unsigned char v; };
struct o424_uchar { char p[0x424]; unsigned char v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAA_uchar { char p[0xAA]; unsigned char v; };
struct oAB_uchar { char p[0xAB]; unsigned char v; };
int FUN_0c0c212c(int);
int FUN_0c0c2ab6(int, int);
int FUN_0c0c4b76(int, int, int);
extern int FUN_0c0c4c1c();
extern int FUN_0c0c5024();
extern int FUN_0c0c52c4();
extern int FUN_0c0c8c08();
extern int FUN_0c0c8c36();
extern int FUN_0c0e79f4();
int FUN_0c0e7a56(int);
int FUN_0c0e7b54(int);
extern int FUN_0c0e7d58();
extern int FUN_0c0e7f36();
extern int FUN_0c0e7fbc();
int FUN_0c0e7ff0(int a4, int a5, int a6, int a7, float f4);

int FUN_0c0e7ff0(int a4, int a5, int a6, int a7, float f4)
{
    int stk[2];
    register int t0;
    register int t3;
    register int t9;
    int t18;
    register int t21;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
    } else {
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        *(unsigned char *)((a4 + 0x3)) = (*(signed char *)((a4 + 0x2)));
        (((struct o41C_uchar *)(a4))->v) = 0xC3;
        (((struct o424_uchar *)(a4))->v) = 0x2;
        t3 = ((int (*)(int, int, int))(FUN_0c0e79f4))(a4, 0x1, (*(signed char *)((a4 + 0x1))));
        FUN_0c0c2ab6(a4, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738CA))));
        FUN_0c0c212c(a4);
        t9 = *(short *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738D2));
        (((struct o160_float *)(a4))->v) = (float)t9;
        (((struct o420_ushort *)(a4))->v) = (int)(float)t9;
        (((struct o423_uchar *)(a4))->v) = 0xFFFFFFFF;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oAA_uchar *)(a4))->v) = 0x1;
        (((struct oAB_uchar *)(a4))->v) = 0x1;
    }
    if ((t0 == 0) || (t0 == 1)) {
        t18 = *(signed char *)((a4 + 0x41D));
        if (t18 != 0) {
            if (t18 != 1) {
                if (t18 != 2) {
                    if (t18 != 3) {
                        if (t18 != 4) {
                            if (t18 != 5) {
                                if (t18 != 6) {
                                    if (t18 != 7) {
                                        if (t18 != 8) {
                                            if ((t18 != 9) && (t18 != 10)) {
                                                return ((int (*)(int))(FUN_0c0e7fbc))(a4);
                                            }
                                            return ((int (*)(int))(FUN_0c0e7d58))(a4);
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
                    return ((int (*)(int))(FUN_0c0e7f36))(a4);
                }
                FUN_0c0c4b76(a4, 0x0, 0x0);
                if ((*(signed char *)((a4 + 0x132))) != 0) {
                    t21 = *(signed char *)((a4 + 0x1));
                    return ((int (*)(int, int, int))(FUN_0c0e79f4))(a4, 0xA, t21);
                }
                return 0x132;
            }
            return FUN_0c0e7b54(a4);
        }
        return FUN_0c0e7a56(a4);
    } else {
        return t0;
    }
}
