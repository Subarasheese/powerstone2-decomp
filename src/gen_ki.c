/* Straight-line functions with calls and guards (batch gen_ki): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o41C_uchar { char p[0x41C]; unsigned char v; };
struct o424_uchar { char p[0x424]; unsigned char v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
int FUN_0c0c212c(int);
int FUN_0c0c2ab6(int, int);
int FUN_0c0c2d56(int, int, int);
extern int FUN_0c0c4c1c();
extern int FUN_0c0c5024();
extern int FUN_0c0c8c08();
int FUN_0c0d522c(int);
int FUN_0c0d52aa(int, int, int);
int FUN_0c0d5328(void);
extern int FUN_0c0d532c();
int FUN_0c187798(int, int, int);
int FUN_0c0f18d4(int a4, int a5, int a6, int a7);

int FUN_0c0f18d4(int a4, int a5, int a6, int a7)
{
    int t0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
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
                                return ((int (*)(int, int, int, int))(FUN_0c0d532c))(a4, a5, a6, a7);
                            }
                            return ((int (*)(int, int, int, int))(FUN_0c0c8c08))(a4, a5, a6, a7);
                        }
                        return ((int (*)(int, int, int))(FUN_0c0c5024))(a4, a5, a6);
                    }
                    return ((int (*)(int, int, int))(FUN_0c0c4c1c))(a4, a5, a6);
                }
                return FUN_0c0d5328();
            }
            t0 = *(signed char *)((a4 + 0x3));
            return FUN_0c0d52aa(a4, (((t0 << 2) << 2) + 0xC1CD6A4), (*(int *)(((((t0 << 2) << 2) + 0xC1CD6A4) + 0xC))));
        }
        return FUN_0c0d522c(a4);
    }
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    *(unsigned char *)((a4 + 0x3)) = (*(signed char *)((a4 + 0x2)));
    *(volatile signed char *)((a4 + 0x2));
    FUN_0c187798(a4, a5, a6);
    *(unsigned int *)((a4 + 0x38)) = (*(int *)((((((*(signed char *)((a4 + 0x2))) << 2) << 2) + 0xC1CD6A4) + 0xC)));
    (((struct o41C_uchar *)(a4))->v) = 0xC8;
    (((struct o424_uchar *)(a4))->v) = 0x3;
    FUN_0c0c2d56(a4, 0x2, (*(signed char *)((a4 + 0x1))));
    FUN_0c0c2ab6(a4, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738CA))));
    FUN_0c0c212c(a4);
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
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
                            return ((int (*)(int))(FUN_0c0d532c))(a4);
                        }
                        return ((int (*)(int))(FUN_0c0c8c08))(a4);
                    }
                    return ((int (*)(int))(FUN_0c0c5024))(a4);
                }
                return ((int (*)(int))(FUN_0c0c4c1c))(a4);
            }
            return FUN_0c0d5328();
        }
        t0 = *(signed char *)((a4 + 0x3));
        return FUN_0c0d52aa(a4, (((t0 << 2) << 2) + 0xC1CD6A4), (*(int *)(((((t0 << 2) << 2) + 0xC1CD6A4) + 0xC))));
    }
    return FUN_0c0d522c(a4);
}
