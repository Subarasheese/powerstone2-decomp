/* Straight-line functions with calls and guards (batch gen_qq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o22_short { char p[0x22]; short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o41C_uchar { char p[0x41C]; unsigned char v; };
struct o424_uchar { char p[0x424]; unsigned char v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
int FUN_0c03f346(int);
int FUN_0c0582de(int, int);
int FUN_0c0c212c(int);
int FUN_0c0c2ab6(int, int);
extern int FUN_0c0c2d56();
int FUN_0c0c4c1c(int);
int FUN_0c0c5024(int);
int FUN_0c1489f8(int);
int FUN_0c148a48(int);
int FUN_0c148a9c(int);
int FUN_0c148aec(void);
int FUN_0c148b0c(int a4, int a5, int a6, int a7, float f4);

int FUN_0c148b0c(int a4, int a5, int a6, int a7, float f4)
{
    int t0;
    register int t1;
    register int t2;

    t0 = (((struct o22_short *)(a4))->v);
    t1 = *(signed char *)((a4 + 0x14));
    if (t1 != 0) {
    } else {
        (((struct oA8_uchar *)(a4))->v) = 0x0;
        (((struct o41C_uchar *)(a4))->v) = 0xC8;
        (((struct o424_uchar *)(a4))->v) = 0x4;
        t2 = ((int (*)(int, int, int, int, float))(FUN_0c0c2d56))(a4, 0x0, (*(signed char *)((a4 + 0x1))), a7, f4);
        FUN_0c0c2ab6(a4, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738CA))));
        FUN_0c0c212c(a4);
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    if ((t1 == 0) || (t1 == 1)) {
        if ((*(signed char *)(((*(int *)(((0xC535D90 + ((short)t0 * (short)0x3938)) + ((*(signed char *)((a4 + 0x3))) << 2)))) + 0x1B))) == 0) {
            t0 = FUN_0c1489f8(a4);
            if (t0 == 0) {
                t0 = ((int (*)(int, int, int))(FUN_0c0c2d56))(a4, 0x1, (*(signed char *)((a4 + 0x1))));
            }
        } else {
            t0 = ((int (*)(int, int, int))(FUN_0c0c2d56))(a4, 0x1, (*(signed char *)((a4 + 0x1))));
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
                return FUN_0c148aec();
            }
            return FUN_0c148a9c(a4);
        }
        return FUN_0c148a48(a4);
    } else {
        return t1;
    }
}
