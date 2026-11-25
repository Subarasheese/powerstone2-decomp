/* Straight-line functions with calls and guards (batch gen_acz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o41C_uchar { char p[0x41C]; unsigned char v; };
struct o424_uchar { char p[0x424]; unsigned char v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
int FUN_0c0c212c(int);
int FUN_0c0c2ab6(int, int);
int FUN_0c0c2d56(int, int, int, int, float);
int FUN_0c0c4c1c(int);
int FUN_0c0c5024(int);
int FUN_0c0c8c08(int);
int FUN_0c0d522c(int);
int FUN_0c0d52aa(int, int, int);
int FUN_0c0d5328(void);
int FUN_0c0d532c(int);
int FUN_0c0f5c54(int a4, int a5, int a6, int a7, float f4);

int FUN_0c0f5c54(int a4, int a5, int a6, int a7, float f4)
{
    register int t0;
    int t1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
    } else {
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        *(unsigned char *)((a4 + 0x3)) = (*(signed char *)((a4 + 0x2)));
        t1 = *(signed char *)((a4 + 0x2));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)((0xC1CE484 + (((t1 << 1) + t1) << 2))); }
        (((struct o41C_uchar *)(a4))->v) = 0xC8;
        (((struct o424_uchar *)(a4))->v) = 0x2;
        FUN_0c0c2d56(a4, 0x2, (*(signed char *)((a4 + 0x1))), a7, f4);
        FUN_0c0c2ab6(a4, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738CA))));
        FUN_0c0c212c(a4);
        t1 = *(signed char *)((a4 + 0x3));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)((0xC1CE484 + (((t1 << 1) + t1) << 2))); }
        *(unsigned int *)((a4 + 0x38)) = 0x0;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    if ((t0 == 0) || (t0 == 1)) {
        t1 = *(signed char *)((a4 + 0x41D));
        if (t1 != 0) {
            if (t1 != 1) {
                if (t1 != 2) {
                    if (t1 != 4) {
                        if (t1 != 5) {
                            if (t1 != 7) {
                                if ((t1 != 3) && ((t1 != 6) && ((t1 != 9) && ((t1 != 10) && (t1 != 11))))) {
                                    return t1;
                                }
                                return FUN_0c0d532c(a4);
                            }
                            return FUN_0c0c8c08(a4);
                        }
                        return FUN_0c0c5024(a4);
                    }
                    return FUN_0c0c4c1c(a4);
                }
                return FUN_0c0d5328();
            }
            t1 = *(signed char *)((a4 + 0x3));
            return FUN_0c0d52aa(a4, (0xC1CE484 + (((t1 << 1) + t1) << 2)), 0x0);
        }
        return FUN_0c0d522c(a4);
    } else {
        return t0;
    }
}
