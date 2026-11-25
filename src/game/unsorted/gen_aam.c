/* Straight-line functions with calls and guards (batch gen_aam): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o1A_uchar { char p[0x1A]; unsigned char v; };
struct o41C_uchar { char p[0x41C]; unsigned char v; };
struct o424_uchar { char p[0x424]; unsigned char v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
int FUN_0c03f346(int);
int FUN_0c0c212c(int);
int FUN_0c0c2ab6(int, int);
int FUN_0c0c2d56(int, int, int, int, float);
int FUN_0c0c3e3a(int);
int FUN_0c0c4c1c(int);
int FUN_0c0c5024(int);
int FUN_0c0c8c08(int);
int FUN_0c0d522c(int);
int FUN_0c0d52aa(int, int, int);
int FUN_0c0d5328(void);
int FUN_0c0d532c(int);
int FUN_0c0f105c(int);
int FUN_0c0f109a(int a4, int a5, int a6, int a7, float f4);
struct o10_uint { char p[0x10]; unsigned int v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o38_uint { char p[0x38]; unsigned int v; };


int FUN_0c0f109a(int a4, int a5, int a6, int a7, float f4)
{
    int t0;
    int qe0;

    t0 = *(signed char *)(a4 + 0x14);
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
    } else {
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct o3_uchar *)(a4))->v) = (*(signed char *)(a4 + 0x2));
        { struct mv3 { int w[3]; }; *(struct mv3 *)(a4 + 0x28) = *(struct mv3 *)(((((*(signed char *)(a4 + 0x2)) << 2) << 2) + 0xC288350)); }
        (((struct o38_uint *)(a4))->v) = (*(int *)((((((*(signed char *)(a4 + 0x2)) << 2) << 2) + 0xC288350) + 0xC)));
        if ((int)(*(signed char *)(a4 + 0x1B)) >= 0) {
            (((struct o10_uint *)(a4))->v) = (*(int *)((((*(signed char *)(a4 + 0x1B)) << 2) + 0xC540D94)));
        }
        (((struct o41C_uchar *)(a4))->v) = 0xC8;
        (((struct o424_uchar *)(a4))->v) = 0x6;
        FUN_0c0c2d56(a4, 0x2, (*(signed char *)(a4 + 0x1)), a7, f4);
        FUN_0c0c2ab6(a4, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)(a4 + 0x41C)) * (unsigned short)0x34) + 0xC2738CA))));
        FUN_0c0c212c(a4);
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x14)) + 0x1);
        (((struct o1A_uchar *)(a4))->v) = 0x0;
    }
    if ((*(signed char *)0xC540F98) != 0) {
        (((struct o1A_uchar *)(a4))->v) = 0x1;
    }
    t0 = *(signed char *)(a4 + 0x41D);
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 4) {
                    if (t0 != 5) {
                        if (t0 != 7) {
                            if ((t0 != 3) && ((t0 != 6) && ((t0 != 9) && ((t0 != 10) && (t0 != 11))))) {
                                return t0;
                            }
                            return FUN_0c0d532c(a4);
                        }
                        return FUN_0c0c8c08(a4);
                    }
                    return FUN_0c0c5024(a4);
                }
                return FUN_0c0c4c1c(a4);
            }
            FUN_0c0f105c(a4);
            FUN_0c0d5328();
            t0 = FUN_0c0c3e3a(a4);
            if (t0 != 0) {
                return FUN_0c03f346(a4);
            }
            return t0;
        }
        FUN_0c0f105c(a4);
        t0 = *(signed char *)(a4 + 0x3);
        qe0 = (((t0 << 2) << 2) + 0xC288350);
        return FUN_0c0d52aa(a4, qe0, (*(int *)((qe0 + 0xC))));
    }
    FUN_0c0f105c(a4);
    return FUN_0c0d522c(a4);
}
