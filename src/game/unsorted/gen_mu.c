/* Straight-line functions with calls and guards (batch gen_mu): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o126_uchar { char p[0x126]; unsigned char v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o19_uchar { char p[0x19]; unsigned char v; };
struct o1A_uchar { char p[0x1A]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o41C_uchar { char p[0x41C]; unsigned char v; };
struct o5C_float { char p[0x5C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oD0_int { char p[0xD0]; int v; };
int FUN_0c03f346(int);
int FUN_0c042fe0(void);
int FUN_0c0c212c(int);
int FUN_0c0c2d56(int, int, int, int, float);
int FUN_0c0cff96(int, int);
int FUN_0c0d45cc(int);
int FUN_0c0d47e0(int);
int FUN_0c0d4894(int);
int FUN_0c0d4984(int);
int FUN_0c0d4a30(int);
int FUN_0c0d4ad0(int);
int FUN_0c0d4bac(int);
int FUN_0c0d4d24(int);
int thunk_FUN_0c05abb2(int, int);
int FUN_0c0d5030(int a4, int a5, int a6, int a7, float f4);

int FUN_0c0d5030(int a4, int a5, int a6, int a7, float f4)
{
    int t0;
    int t1;
    register int t2;
    register int t3;

    t2 = *(signed char *)((a4 + 0x14));
    if (t2 != 0) {
    } else {
        (((struct oA8_uchar *)(a4))->v) = 0x0;
        (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x200);
        (((struct oBC_float *)(a4))->v) = 1.0f;
        (((struct oB8_float *)(a4))->v) = 1.0f;
        (((struct oB4_float *)(a4))->v) = 1.0f;
        *(unsigned char *)((a4 + 0x3)) = 0x0;
        *(unsigned char *)((a4 + 0x2)) = 0x0;
        (((struct o41C_uchar *)(a4))->v) = 0xC7;
        (((struct o19_uchar *)(a4))->v) = 0x0;
        FUN_0c0c2d56(a4, 0x0, (*(signed char *)((a4 + 0x1))), a7, f4);
        (((struct o126_uchar *)(a4))->v) = 0x1;
        FUN_0c0c212c(a4);
        (((struct o5C_float *)(a4))->v) = -2.0f;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)(0xC1C8004); }
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    if ((t2 == 0) || (t2 == 1)) {
        t3 = FUN_0c042fe0();
        if ((t3 == 0) && ((t0 = *(signed char *)((a4 + 0x41D)), t0 != 9) && ((t0 != 10) && ((t0 != 6) && (t0 != 7))))) {
            (((struct oBC_float *)(a4))->v) = 1.0f;
            (((struct oB8_float *)(a4))->v) = 1.0f;
            (((struct oB4_float *)(a4))->v) = 1.0f;
            return 0xB4;
        }
        FUN_0c0d45cc(a4);
        t0 = *(signed char *)((a4 + 0x19));
        FUN_0c0cff96((*(int *)((((((struct oD0_int *)(a4))->v)) + 0x8))), (((((t0 << 1) + t0) << 2) << 2) + 0xC1C8010));
        if ((*(signed char *)((a4 + 0x19))) != 0) {
            (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) + 0x1);
            if ((((((struct o20_short *)(a4))->v)) & 15) == 0) {
                thunk_FUN_0c05abb2(0x4B, (a4 + 0x28));
            }
        } else {
            t0 = *(signed char *)((a4 + 0x19));
            if ((t0 == 0) && (t1 = *(signed char *)((a4 + 0x1A)), t0 != t1)) {
                thunk_FUN_0c05abb2(0x4C, (a4 + 0x28));
            }
        }
        (((struct o1A_uchar *)(a4))->v) = (*(signed char *)((a4 + 0x19)));
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
                                    return FUN_0c03f346(a4);
                                }
                                return FUN_0c0d4d24(a4);
                            }
                            return FUN_0c0d4bac(a4);
                        }
                        return FUN_0c0d4ad0(a4);
                    }
                    return FUN_0c0d4a30(a4);
                }
                return FUN_0c0d4984(a4);
            }
            return FUN_0c0d4894(a4);
        }
        return FUN_0c0d47e0(a4);
    } else {
        return t2;
    }
}
