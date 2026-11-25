/* Straight-line functions with calls and guards (batch gen_xy): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o41C_uchar { char p[0x41C]; unsigned char v; };
struct o420_ushort { char p[0x420]; unsigned short v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
int FUN_0c03f346(int);
int FUN_0c0c212c(int);
int FUN_0c0c2ab6(int, int);
int FUN_0c0c2d56(int, int, int, int, float);
int FUN_0c0e3ccc(int);
int FUN_0c0e3d82(int);
int FUN_0c0e3dec(int);
int FUN_0c0e3f72(int);
int FUN_0c0e3ffc(int);
int FUN_0c0e4036(int);
int FUN_0c0e40f8(int);
int FUN_0c0e43f6(int);
int thunk_FUN_0c05abb2(int, int);
int FUN_0c0e455e(int a4, int a5, int a6, int a7, float f4);

int FUN_0c0e455e(int a4, int a5, int a6, int a7, float f4)
{
    int t0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
    } else {
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oA4_uint *)(a4))->v) = ((*(int *)((((*(signed char *)((a4 + 0x1B))) << 2) + 0xC540D94))) + 0x64);
        (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x200);
        (((struct oBC_float *)(a4))->v) = 1.0f;
        (((struct oB8_float *)(a4))->v) = 1.0f;
        (((struct oB4_float *)(a4))->v) = 1.0f;
        *(unsigned char *)((a4 + 0x3)) = (*(signed char *)((a4 + 0x2)));
        (((struct o41C_uchar *)(a4))->v) = 0xC4;
        FUN_0c0c2d56(a4, 0x0, (*(signed char *)((a4 + 0x1))), a7, f4);
        t0 = 0x1A;
        if ((*(signed char *)((a4 + 0x3))) == 2) {
            t0 = 0x15;
        }
        FUN_0c0c2ab6(a4, t0);
        FUN_0c0c212c(a4);
        (((struct o420_ushort *)(a4))->v) = (*(short *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738D2)));
        t0 = 0xC;
        if ((*(signed char *)((a4 + 0x3))) == 2) {
            t0 = 0x8;
        }
        (((struct o160_float *)(a4))->v) = (*(float *)((0xC286E9C + t0)));
        if ((*(signed char *)((a4 + 0x3))) == 2) {
            *(unsigned int *)((a4 + 0x34)) = 0x8000;
        }
        *(unsigned short *)((a4 + 0x1C)) = 0x1E0;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    if ((*(int *)((((*(signed char *)((a4 + 0x1B))) << 2) + 0xC540D94))) != 0) {
        FUN_0c0e3ccc(a4);
        t0 = *(signed char *)((a4 + 0x41D));
        if (t0 != 0) {
            if (t0 != 1) {
                if (t0 != 2) {
                    if (t0 != 4) {
                        if (t0 != 5) {
                            if (t0 != 7) {
                                if ((t0 != 3) && ((t0 != 6) && ((t0 != 9) && (t0 != 10)))) {
                                    if (t0 != 11) {
                                        return t0;
                                    }
                                    if ((*(signed char *)((a4 + 0x3))) == 2) {
                                        thunk_FUN_0c05abb2(0x47, (a4 + 0x28));
                                    }
                                    return FUN_0c03f346(a4);
                                }
                                return FUN_0c0e43f6(a4);
                            }
                            return FUN_0c0e40f8(a4);
                        }
                        return FUN_0c0e4036(a4);
                    }
                    return FUN_0c0e3ffc(a4);
                }
                return FUN_0c0e3f72(a4);
            }
            return FUN_0c0e3dec(a4);
        }
        return FUN_0c0e3d82(a4);
    }
    return FUN_0c03f346(a4);
}
