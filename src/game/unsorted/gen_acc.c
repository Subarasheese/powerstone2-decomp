/* Straight-line functions with calls and guards (batch gen_acc): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o126_uchar { char p[0x126]; unsigned char v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o41C_uchar { char p[0x41C]; unsigned char v; };
struct o41D_uchar { char p[0x41D]; unsigned char v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c0c212c(int);
int FUN_0c0dbfbe(int);
int FUN_0c0dbfd0(int);
int FUN_0c0dbff8(int);
int FUN_0c0dc000(int);
int FUN_0c0dc028(int);
int FUN_0c0dc03a(int a4, int a5, int a6, int a7);

int FUN_0c0dc03a(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        t0 = *(signed char *)((a4 + 0x41D));
        if (t0 != 0) {
            if (t0 != 1) {
                if (t0 != 2) {
                    if (t0 != 4) {
                        if (t0 != 5) {
                            t1 = t0;
                            if ((t0 == 7) || ((t0 == 3) || ((t0 == 6) || ((t0 == 9) || ((t0 == 10) || (t0 == 11)))))) {
                                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                                t1 = 0x14;
                            }
                            return t1;
                        }
                        return FUN_0c0dc028(a4);
                    }
                    return FUN_0c0dc000(a4);
                }
                return FUN_0c0dbff8(a4);
            }
            return FUN_0c0dbfd0(a4);
        }
        return FUN_0c0dbfbe(a4);
    }
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 == 0) {
        (((struct o41C_uchar *)(a4))->v) = 0xCD;
        (((struct o41D_uchar *)(a4))->v) = 0x2;
        FUN_0c0c212c(a4);
        (((struct o126_uchar *)(a4))->v) = 0x1;
        (((struct o12A_ushort *)(a4))->v) = 0x0;
        *(unsigned short *)(((0x12A + a4) + 0x2)) = 0x0;
        *(unsigned short *)(((0x12A + a4) + 0x4)) = 0x0;
        *(unsigned short *)((a4 + 0x1C)) = 0x1;
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    }
    t1 = t0;
    if ((t0 == 0) || (t0 == 1)) {
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        t1 = (short)(t0 - 1);
        if ((short)(t0 - 1) == 0) {
            (((struct o12E_ushort *)(a4))->v) = 0x0;
            (((struct oA8_uchar *)(a4))->v) = 0x0;
            (((struct o2C_float *)(a4))->v) = 20.0f;
            (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + 30.0f);
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            (((struct o15_uchar *)(a4))->v) = 0x0;
            t1 = 0x15;
        }
    }
    return t1;
}
