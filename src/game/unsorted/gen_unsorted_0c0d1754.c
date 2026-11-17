/* game/unsorted: functions 0C0D1754-0C0D1D36, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o130_uchar { char p[0x130]; unsigned char v; };
struct o132_uchar { char p[0x132]; unsigned char v; };
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
int math_mat_get_translate(int, int);
int thunk_FUN_0c05abb2(int, int);
int FUN_0c0c212c(int);
int FUN_0c0c2ab6(int, int);
int FUN_0c0c2d56(int, int, int);
int FUN_0c0c47a4(int);
int FUN_0c0cf440(int, int, int);
int FUN_0c16328c(int, int, int, float);
int FUN_0c0d1754(int a4);
int FUN_0c0d1bae(int a4, int a5, int a6, int a7);

int FUN_0c0d1754(int a4)
{
    int stk[3];
    register int t16;

    if ((*(signed char *)((a4 + 0x132))) != 0) {
        (((struct o130_uchar *)(a4))->v) = 0xA;
        (((struct o132_uchar *)(a4))->v) = 0x0;
    }
    if ((*(signed char *)((a4 + 0x130))) != 0) {
        (((struct oBC_float *)(a4))->v) = 0.300000012f;
        (((struct oB8_float *)(a4))->v) = 0.300000012f;
        (((struct o130_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x130))) - 1);
    } else {
        (((struct oBC_float *)(a4))->v) = 1.0f;
        (((struct oB8_float *)(a4))->v) = 1.0f;
        (((struct oB4_float *)(a4))->v) = 1.0f;
    }
    t16 = 0x160;
    if (((((struct o160_float *)(a4))->v)) == 0.0f) {
        math_mat_get_translate((a4 + 0x64), ((int)stk + 0));
        FUN_0c16328c((*(signed char *)((a4 + 0x1))), ((int)stk + 0), 0x2, 0.5f);
        t16 = (FUN_0c0c2d56(a4, 0xA, (*(signed char *)((a4 + 0x1)))));
    }
    return t16;
}

int FUN_0c0d1bae(int a4, int a5, int a6, int a7)
{
    int t0;

    if ((*(signed char *)0xC54223C) != 0) {
        return ((int (*)(int, int, int, int))(FUN_0c03f346))(a4, a5, a6, a7);
    }
    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
    } else {
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        if ((int)(*(signed char *)((a4 + 0x1B))) >= 0) {
            (((struct oA4_uint *)(a4))->v) = ((*(int *)((((*(signed char *)((a4 + 0x1B))) << 2) + 0xC540D94))) + 0x64);
        }
        (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x200);
        (((struct oBC_float *)(a4))->v) = 1.0f;
        (((struct oB8_float *)(a4))->v) = 1.0f;
        (((struct oB4_float *)(a4))->v) = 1.0f;
        *(unsigned char *)((a4 + 0x3)) = (*(signed char *)((a4 + 0x2)));
        (((struct o41C_uchar *)(a4))->v) = 0xC4;
        FUN_0c0c2d56(a4, 0x0, (*(signed char *)((a4 + 0x1))));
        FUN_0c0c2ab6(a4, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738CA))));
        FUN_0c0c212c(a4);
        (((struct o420_ushort *)(a4))->v) = (*(short *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738D2)));
        (((struct o160_float *)(a4))->v) = (*(float *)0xC286E9C);
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    FUN_0c0d1754(a4);
    t0 = *(signed char *)((a4 + 0x41D));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 4) {
                    if ((t0 != 3) && (t0 != 5)) {
                        if (t0 != 7) {
                            if ((t0 != 6) && ((t0 != 9) && ((t0 != 10) && (t0 != 11)))) {
                                return t0;
                            }
                            thunk_FUN_0c05abb2(0x4A, (a4 + 0x28));
                            FUN_0c0cf440((a4 + 0x28), 0x0, 0x0);
                            return ((int (*)(int))(FUN_0c03f346))(a4);
                        }
                        return ((int (*)(int, int, int, int))(0xC0D192C))(a4, a5, a6, a7);
                    }
                    return ((int (*)(int, int, int, int))(0xC0D188C))(a4, a5, a6, a7);
                }
                return ((int (*)(int, int, int, int))(0xC0D181E))(a4, a5, a6, a7);
            }
            return ((int (*)(int, int, int, int))(0xC0D17E4))(a4, a5, a6, a7);
        }
        return FUN_0c0c47a4(a4);
    }
    return ((int (*)(int, int, int, int))(0xC0D17D4))(a4, a5, a6, a7);
}
