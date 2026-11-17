/* game/unsorted: functions 0C01A3A4-0C01B4B6, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_short { short v; };
struct o0_uchar { unsigned char v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o1A_uchar { char p[0x1A]; unsigned char v; };
struct o1B_uchar { char p[0x1B]; unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2_short { char p[0x2]; short v; };
struct o2_ushort { char p[0x2]; unsigned short v; };
struct o30_float { char p[0x30]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_short { char p[0x4]; short v; };
struct o8_float { char p[0x8]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB0_float { char p[0xB0]; float v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
int FUN_0c012c34(int);
int FUN_0c0185b4(void);
int FUN_0c01c62a(int);
int FUN_0c01cb7c(void);
int FUN_0c01cc56(int, int);
extern int thunk_FUN_0c03f346();
int FUN_0c01cd2c(int);
int FUN_0c01e9e4(void);
int FUN_0c02b342(int, int);
int FUN_0c02b3ba(int, float, float, float);
int FUN_0c02b502(int);
int FUN_0c036de8(int, int, int);
int FUN_0c0573d8(void);
int FUN_0c05aab6(int, int);
int FUN_0c05b048(int, int);
int FUN_0c05b05c(int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c187cac(int, int, int, int, int);
int FUN_0c187d88(int);
int strncpy(int, int, int);
int FUN_0c01a3a4(int a4);
int FUN_0c01a502(int a4, int a5, int a6, int a7, float f4, float f5, float f6);
int FUN_0c01a9c0(void);
void FUN_0c01a9fe(void);
float FUN_0c01aa02(int a4);
int FUN_0c01ab62(int a4);
int FUN_0c01ac62(int a4, float f4, float f5, float f6);
int FUN_0c01b0fc(int a4, int a5, int a6);
int FUN_0c01b16a(int a4);
int FUN_0c01b248(int a4);
int FUN_0c01b436(int a4);

int FUN_0c01a3a4(int a4)
{
    int t0;
    int t1;
    register int t2;
    register int t3;
    register int t4;

    t2 = *(signed char *)((a4 + 0x14));
    t3 = *(signed char *)0xC309E06;
    if (t2 != 0) {
        if (t2 != 1) {
            if (t2 != 4) {
                return ((int (*)(int, int, int, int))(thunk_FUN_0c03f346))(a4, 0xC5426EC, 0xC309E06, 0xC5426C4);
            }
            if ((*(signed char *)0xC309E06) == 2) {
                if ((*(int *)0xC5426EC) != 0) {
                    (((struct oA8_uchar *)(a4))->v) = 0x1;
                } else {
                    (((struct oA8_uchar *)(a4))->v) = 0x0;
                }
            }
            *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
            (((struct o40_float *)(a4))->v) = ((-(math_cos_angle16(((((*(short *)((a4 + 0x1C))) << 8) << 2) << 1)))) + 1.0f);
            t2 = *(short *)((a4 + 0x1C));
            if (t2 == 0) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                return ((int (*)(int))(thunk_FUN_0c03f346))(a4);
            }
            return t2;
        }
        if (t3 == 2) {
            if ((*(int *)0xC5426EC) != 0) {
                (((struct oA8_uchar *)(a4))->v) = 0x0;
            } else {
                (((struct oA8_uchar *)(a4))->v) = 0x1;
            }
        }
        if ((*(signed char *)((a4 + 0x17))) == 0) {
            t2 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t2 - 1);
            if ((short)(t2 - 1) == 0) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x10);
                (((struct o48_float *)(a4))->v) = 1.0f;
                (((struct o44_float *)(a4))->v) = 1.0f;
                (((struct o40_float *)(a4))->v) = 1.0f;
                *(unsigned short *)((a4 + 0x1C)) = 0x8;
                if ((*(signed char *)0xC309E06) == 2) {
                    if ((*(int *)0xC5426EC) != 0) {
                        (((struct oA8_uchar *)(a4))->v) = 0x1;
                    } else {
                        (((struct oA8_uchar *)(a4))->v) = 0x0;
                    }
                }
                *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
                (((struct o40_float *)(a4))->v) = ((-(math_cos_angle16(((((*(short *)((a4 + 0x1C))) << 8) << 2) << 1)))) + 1.0f);
                t4 = *(short *)((a4 + 0x1C));
                if (t4 == 0) {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    return ((int (*)(int))(thunk_FUN_0c03f346))(a4);
                }
                return t4;
            }
            return (short)(t2 - 1);
        }
        return 0x17;
    }
    if (t3 == 2) {
        if ((*(int *)0xC5426EC) != 0) {
            (((struct oA8_uchar *)(a4))->v) = 0x0;
        } else {
            (((struct oA8_uchar *)(a4))->v) = 0x1;
        }
    }
    t2 = FUN_0c01cd2c(0x101);
    if (((short)t2 != 0) && (t0 = *(signed char *)0xC30B707, t0 != 0)) {
        if (((*(signed char *)0xC30B701) == 0) && (t1 = *(signed char *)0xC309E06, t1 != 3)) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            (((struct o17_uchar *)(a4))->v) = 0x1;
            t0 = 0x17;
        } else {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            (((struct o17_uchar *)(a4))->v) = 0x0;
            *(unsigned short *)((a4 + 0x1C)) = 0x10;
            t0 = 0x10;
        }
        t1 = t0;
    } else {
        t0 = (short)t2;
        if ((*(signed char *)0xC30B706) != 0) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            (((struct o17_uchar *)(a4))->v) = 0x0;
            *(unsigned short *)((a4 + 0x1C)) = 0x10;
            t0 = 0x10;
        }
        t1 = t0;
    }
    return t1;
}

int FUN_0c01a502(int a4, int a5, int a6, int a7, float f4, float f5, float f6)
{
    int stk[15];

    register int R1;
    register int R2;
    register int R3;
    register float F3;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_10;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register int v0_9;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    register float w0_4;
    v0_3 = a4;
    v0_4 = a5;
    v0_5 = a6;
    v0_6 = a7;
    w0_0 = f4;
    w0_0 = f5;
    w0_0 = f6;
    v0_9 = *(signed char *)((v0_3 + 0x14));
    v0_8 = (v0_9);
    v0_2 = (0x1);
    v0_0 = (0xC02B3BA);
    v0_1 = ((((int)stk + 0) + 0x14));
    v0_0 = (0x0);
    v0_3 = (v0_3);
    v0_7 = (0xC309E06);
    v0_10 = (0xC187DD8);
    w0_3 = (0.0f);
    w0_2 = (1.0f);
    w0_0 = (176.0f);
    w0_1 = ((1.0f + 1.0f));
    if ((v0_9 == 0)) goto L_C01A57C;
    if ((v0_8 == 1)) goto L_C01A5B6;
    if ((v0_8 != 2)) goto L_C01A54C;
    L_C01A680:;
    if (((*(signed char *)((v0_7 + 0x0))) != 2)) goto L_C01A6DC;
    if (((*(int *)0xC5426EC) == 0)) goto L_C01A6D8;
    (((struct oA8_uchar *)(v0_3))->v) = v0_2;
    L_C01A6DC:;
    v0_4 = (short)(FUN_0c01cd2c(0x101)) == 0;
    if (v0_4) goto L_C01A738;
    if (((*(signed char *)0xC30B707) == 0)) goto L_C01A738;
    if (((*(signed char *)0xC30B701) != 0)) goto L_C01A71C;
    if (((*(signed char *)0xC309E06) == 3)) goto L_C01A71C;
    (((struct o14_uchar *)(v0_3))->v) = ((*(signed char *)((v0_3 + 0x14))) + 0x1);
    (((struct o17_uchar *)(v0_3))->v) = v0_2;
    FUN_0c05b048(0x1E, 0x1);
    *(unsigned char *)0xC30EFA5 = v0_2;
    L_C01A750:;
    *(unsigned char *)(((int)stk + 0)) = (FUN_0c187d88(0xC30A354));
    FUN_0c02b502(0xC);
    v0_2 = *(signed char *)(((int)stk + 0));
    v0_2 = (int)((unsigned int)((int)((unsigned int)(((((unsigned char)v0_2 << 1) + (unsigned char)v0_2) << 2) << 1) + (unsigned int)0x0)) + ((((int)0x0 > (int)(((((unsigned char)v0_2 << 1) + (unsigned char)v0_2) << 2) << 1))) ? 1u : 0u));
    FUN_0c02b3ba(0xC30A354, (float)(0x140 - (((int)((unsigned int)((int)((unsigned int)(v0_2 >> 1) + (unsigned int)0x0)) + ((((int)0x0 > (int)(v0_2 >> 1))) ? 1u : 0u))) >> 1)), 140.0f, w0_1);
    FUN_0c02b502(0x0);
    v0_2 = FUN_0c187d88(0xC30A366);
    *(unsigned char *)(((int)stk + 0)) = v0_2;
    v0_8 = ((unsigned char)v0_2);
    v0_7 = (v0_0);
    if (((int)(unsigned char)v0_2 <= (int)0x30)) goto L_C01A7AE;
    *(unsigned char *)(((int)stk + 0)) = 0x30;
    L_C01A7AE:;
    *(unsigned int *)(((int)stk + 4)) = (v0_1 + 0x18);
    v0_2 = (0xC30A366);
    v0_3 = (0xCC);
    L_C01A7DA:;
    if (!(((int)(((((unsigned char)v0_7 << 1) + (unsigned char)v0_7) << 2) << 1) < (int)(unsigned char)(*(signed char *)(((int)stk + 0)))))) goto L_C01A9A4;
    strncpy(v0_1, v0_2, 0x18);
    *(unsigned char *)(((*(int *)(((int)stk + 4))) + 0x0)) = v0_0;
    v0_8 = ((FUN_0c02b3ba(v0_1, w0_0, (float)v0_3, w0_1)));
    v0_2 = ((v0_2 + 0x18));
    v0_3 = ((v0_3 + 0x18));
    v0_7 = ((v0_7 + 0x1));
    goto L_C01A7DA;
    L_C01A9A4:;
    return v0_8;
    L_C01A71C:;
    (((struct o14_uchar *)(v0_3))->v) = ((*(signed char *)((v0_3 + 0x14))) + 0x1);
    (((struct o17_uchar *)(v0_3))->v) = v0_0;
    *(unsigned short *)((v0_3 + 0x1C)) = 0x10;
    FUN_0c05b048(0x1E, 0x1);
    goto L_C01A750;
    L_C01A738:;
    if (((*(signed char *)0xC30B706) == 0)) goto L_C01A750;
    (((struct o14_uchar *)(v0_3))->v) = ((*(signed char *)((v0_3 + 0x14))) + 0x1);
    (((struct o17_uchar *)(v0_3))->v) = v0_0;
    *(unsigned short *)((v0_3 + 0x1C)) = 0x10;
    goto L_C01A750;
    L_C01A6D8:;
    (((struct oA8_uchar *)(v0_3))->v) = v0_0;
    goto L_C01A6DC;
    L_C01A54C:;
    if ((v0_8 != 3)) goto L_C01A554;
    if (((*(signed char *)((v0_7 + 0x0))) != 2)) goto L_C01A844;
    if (((*(int *)0xC5426EC) == 0)) goto L_C01A840;
    (((struct oA8_uchar *)(v0_3))->v) = v0_2;
    L_C01A844:;
    *(unsigned char *)(((int)stk + 0)) = (FUN_0c187d88(0xC30A354));
    FUN_0c02b502(0xC);
    v0_8 = *(signed char *)(((int)stk + 0));
    v0_8 = (int)((unsigned int)((int)((unsigned int)(((((unsigned char)v0_8 << 1) + (unsigned char)v0_8) << 2) << 1) + (unsigned int)0x0)) + ((((int)0x0 > (int)(((((unsigned char)v0_8 << 1) + (unsigned char)v0_8) << 2) << 1))) ? 1u : 0u));
    FUN_0c02b3ba(0xC30A354, (float)(0x140 - (((int)((unsigned int)((int)((unsigned int)(v0_8 >> 1) + (unsigned int)0x0)) + ((((int)0x0 > (int)(v0_8 >> 1))) ? 1u : 0u))) >> 1)), 140.0f, w0_1);
    FUN_0c02b502(0x0);
    v0_8 = FUN_0c187d88(0xC30A366);
    *(unsigned char *)(((int)stk + 12)) = v0_8;
    if (((int)(unsigned char)v0_8 <= (int)0x30)) goto L_C01A8A0;
    *(unsigned char *)(((int)stk + 12)) = 0x30;
    L_C01A8A0:;
    *(unsigned char *)(((int)stk + 8)) = v0_0;
    *(unsigned int *)(((int)stk + 4)) = 0xCC;
    *(unsigned int *)(((int)stk + 0)) = 0xC30A366;
    *(unsigned int *)(((int)stk + 16)) = (v0_1 + 0x18);
    L_C01A8E4:;
    v0_8 = *(signed char *)(((int)stk + 8));
    if (((int)(((((unsigned char)v0_8 << 1) + (unsigned char)v0_8) << 2) << 1) < (int)(unsigned char)(*(signed char *)(((int)stk + 12))))) goto L_C01A8B6;
    v0_8 = (0x17);
    if (((*(signed char *)((v0_3 + 0x17))) != 0)) goto L_C01A9A4;
    v0_1 = *(short *)((v0_3 + 0x1C));
    *(unsigned short *)((v0_3 + 0x1C)) = (v0_1 - 1);
    v0_8 = ((short)(v0_1 - 1));
    if (((short)(v0_1 - 1) != 0)) goto L_C01A9A4;
    (((struct o14_uchar *)(v0_3))->v) = ((*(signed char *)((v0_3 + 0x14))) + 0x1);
    (((struct oAC_ushort *)(v0_3))->v) = (((((struct oAC_short *)(v0_3))->v)) | 0x10);
    (((struct o48_float *)(v0_3))->v) = w0_2;
    (((struct o44_float *)(v0_3))->v) = w0_2;
    (((struct o40_float *)(v0_3))->v) = w0_2;
    *(unsigned short *)((v0_3 + 0x1C)) = 0x8;
    *(unsigned char *)0xC30EFA5 = v0_2;
    L_C01A936:;
    if (((*(signed char *)((v0_7 + 0x0))) != 2)) goto L_C01A974;
    if (((*(int *)0xC5426EC) == 0)) goto L_C01A970;
    (((struct oA8_uchar *)(v0_3))->v) = v0_2;
    L_C01A974:;
    *(unsigned short *)((v0_3 + 0x1C)) = ((*(short *)((v0_3 + 0x1C))) - 1);
    w0_0 = math_cos_angle16(((((*(short *)((v0_3 + 0x1C))) << 8) << 2) << 1));
    (((struct o40_float *)(v0_3))->v) = ((-w0_0) + w0_2);
    v0_0 = *(short *)((v0_3 + 0x1C));
    v0_8 = (v0_0);
    w0_2 = (((-w0_0) + w0_2));
    if ((v0_0 != 0)) goto L_C01A9A4;
    (((struct o14_uchar *)(v0_3))->v) = ((*(signed char *)((v0_3 + 0x14))) + 0x1);
    L_C01A99E:;
    v0_8 = ((((int (*)(int, int, int, int))(thunk_FUN_0c03f346))(v0_3, v0_4, v0_5, v0_6)));
    goto L_C01A9A4;
    L_C01A970:;
    (((struct oA8_uchar *)(v0_3))->v) = v0_0;
    goto L_C01A974;
    L_C01A8B6:;
    strncpy(v0_1, (*(int *)(((int)stk + 0))), 0x18);
    *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0x0)) = v0_0;
    FUN_0c02b3ba(v0_1, w0_0, (float)(*(int *)(((int)stk + 4))), w0_1);
    *(unsigned char *)(((int)stk + 8)) = ((*(signed char *)(((int)stk + 8))) + 0x1);
    *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x18);
    *(unsigned int *)(((int)stk + 0)) = ((*(int *)(((int)stk + 0))) + 0x18);
    goto L_C01A8E4;
    L_C01A840:;
    (((struct oA8_uchar *)(v0_3))->v) = v0_0;
    goto L_C01A844;
    L_C01A554:;
    if ((v0_8 != 4)) goto L_C01A55C;
    goto L_C01A936;
    L_C01A55C:;
    goto L_C01A99E;
    L_C01A5B6:;
    *(unsigned short *)((v0_3 + 0x1C)) = ((*(short *)((v0_3 + 0x1C))) - 1);
    (((struct o40_float *)(v0_3))->v) = ((-(math_sin_angle16(((short)(*(short *)((v0_3 + 0x1C))) * (short)0x216)))) + w0_2);
    (((struct o44_float *)(v0_3))->v) = ((-(math_sin_angle16(((short)(*(short *)((v0_3 + 0x1C))) * (short)0x216)))) + w0_2);
    w0_4 = math_sin_angle16(((short)(*(short *)((v0_3 + 0x1C))) * (short)0x216));
    (((struct oBC_float *)(v0_3))->v) = ((-w0_4) + w0_2);
    (((struct oB8_float *)(v0_3))->v) = ((-w0_4) + w0_2);
    (((struct oB4_float *)(v0_3))->v) = ((-w0_4) + w0_2);
    v0_4 = *(short *)((v0_3 + 0x1C));
    *(unsigned int *)((v0_3 + 0x3C)) = (((((v0_4 << 1) + v0_4) << 8) << 2) << 1);
    v0_4 = *(short *)((v0_3 + 0x1C));
    v0_8 = (v0_4);
    w0_2 = (((-w0_4) + w0_2));
    if ((v0_4 == 0)) goto L_C01A61A;
    goto L_C01A9A4;
    L_C01A61A:;
    (((struct o14_uchar *)(v0_3))->v) = ((*(signed char *)((v0_3 + 0x14))) + 0x1);
    (((struct oAC_ushort *)(v0_3))->v) = (((((struct oAC_short *)(v0_3))->v)) & 0xFDEF);
    FUN_0c05aab6(0x0, 0x22);
    v0_4 = FUN_0c01cc56(((*(signed char *)((v0_7 + 0x0))) + 0x16), 0xC01A2A0);
    (((struct o28_float *)(v0_4))->v) = w0_3;
    (((struct o2C_float *)(v0_4))->v) = -68.0f;
    (((struct o30_float *)(v0_4))->v) = 5.0f;
    FUN_0c01cc56(0x1B, 0xC01A186);
    if (((*(signed char *)((v0_7 + 0x0))) != 2)) goto L_C01A6DC;
    v0_4 = FUN_0c01cc56(0x15, 0xC01A2A0);
    (((struct o28_float *)(v0_4))->v) = w0_3;
    (((struct o2C_float *)(v0_4))->v) = -98.0f;
    FUN_0c01cc56(0x3E, 0xC01A3A4);
    goto L_C01A680;
    L_C01A57C:;
    (((struct o14_uchar *)(v0_3))->v) = ((*(signed char *)((v0_3 + 0x14))) + 0x1);
    (((struct oAC_ushort *)(v0_3))->v) = (((((struct oAC_short *)(v0_3))->v)) | 0x210);
    (((struct o44_float *)(v0_3))->v) = 0.0199999996f;
    (((struct o40_float *)(v0_3))->v) = 0.0199999996f;
    (((struct oBC_float *)(v0_3))->v) = w0_3;
    (((struct oB8_float *)(v0_3))->v) = w0_3;
    (((struct oB4_float *)(v0_3))->v) = w0_3;
    *(unsigned short *)((v0_3 + 0x1C)) = 0x5C;
    FUN_0c05b05c(0x1, 0x0);
    *(unsigned char *)0xC30EFA5 = v0_0;
    goto L_C01A5B6;
}

int FUN_0c01a9c0(void)
{
    FUN_0c01e9e4();
    FUN_0c0573d8();
    (((struct o0_uchar *)0xC30A51A)->v) = 0x0;
    (((struct o2_ushort *)0xC30A51A)->v) = 0x0;
    *(unsigned char *)0xC30503C = 0xFFFFFFFF;
    (((struct o1_uchar *)0xC30EFA2)->v) = 0x0;
    (((struct o0_uchar *)0xC30EFA2)->v) = 0x0;
    *(unsigned char *)0xC30B707 = 0x0;
    FUN_0c01cc56(0x14, 0xC01A502);
    FUN_0c01cb7c();
    return FUN_0c0185b4();
}

void FUN_0c01a9fe(void)
{
    
}

float FUN_0c01aa02(int a4)
{
    register int t0;
    register float u0;
    register float u1;
    register float u2;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
        } else {
            u0 = -155.0f;
            if ((*(signed char *)0xC309993) == 0) {
            } else {
                u0 = ((((struct o0_float *)0xC01AB90)->v));
            }
            (((struct o28_float *)(a4))->v) = u0;
            *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
            u0 = (((struct o4_float *)0xC01AB90)->v);
            u1 = u0;
            u1 = u1 + u0 * (math_sin_angle16(((((*(short *)((a4 + 0x1C))) << 8) << 2) << 1)));
            (((struct oB0_float *)(a4))->v) = u1;
            u1 = u0;
        }
        u0 = u1;
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t0 = *(signed char *)0xC30541F;
        if ((int)t0 >= (int)0x2) {
            if (((((t0 == 3)) ? 1 : 0) & ((((*(signed char *)0xC305420) == 0)) ? 1 : 0)) != 0) {
                (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x410);
                (((struct o48_float *)(a4))->v) = 1.0f;
                (((struct o40_float *)(a4))->v) = 1.0f;
                (((struct o44_float *)(a4))->v) = 0.469999999f;
                u1 = 84.0f;
            } else {
                (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x400);
                u1 = -2.0f;
            }
            u2 = u1;
        } else {
            (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x410);
            (((struct o48_float *)(a4))->v) = 1.0f;
            (((struct o40_float *)(a4))->v) = 1.0f;
            (((struct o44_float *)(a4))->v) = 0.469999999f;
            u2 = 84.0f;
        }
        (((struct o2C_float *)(a4))->v) = u2;
        u1 = -155.0f;
        if ((*(signed char *)0xC309993) == 0) {
        } else {
            u1 = ((((struct o0_float *)0xC01AB90)->v));
        }
        (((struct o28_float *)(a4))->v) = u1;
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
        u1 = (((struct o4_float *)0xC01AB90)->v);
        u2 = u1;
        u2 = u2 + u1 * (math_sin_angle16(((((*(short *)((a4 + 0x1C))) << 8) << 2) << 1)));
        (((struct oB0_float *)(a4))->v) = u2;
        u0 = u1;
    }
    return u0;
}

int FUN_0c01ab62(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    if ((*(signed char *)0xC309993) == 0) {
        if ((signed char)a4 != 0) {
            t0 = (*(signed char *)0xC30A3E6);
        } else {
            t0 = (*(signed char *)0xC309BE4);
        }
        t1 = t0;
    } else {
        if ((signed char)a4 == 0) {
            t0 = (*(signed char *)0xC30A3E6);
        } else {
            t0 = (*(signed char *)0xC309BE4);
        }
        t1 = t0;
    }
    t0 = t1;
    if ((int)(signed char)t1 > (int)0x24) {
        t0 = 0x24;
    }
    t1 = FUN_0c01cc56((*(short *)(((((signed char)t0 << 2) + 0xC20E2B4) + 0x0))), 0xC01AB14);
    (((struct o28_float *)(t1))->v) = (*(float *)((((((signed char)a4 << 2) << 1) + 0xC20DFC0) + 0x0)));
    (((struct o2C_float *)(t1))->v) = ((((struct o4_float *)(((((signed char)a4 << 2) << 1) + 0xC20DFC0)))->v));
    *(unsigned char *)((t1 + 0x3)) = a4;
    *(unsigned char *)((t1 + 0x2)) = 0x0;
    (((struct o1A_uchar *)(t1))->v) = t0;
    t1 = *(short *)(((((signed char)t0 << 2) + 0xC20E2B4) + 0x2));
    t2 = t1;
    if (t1 != 0) {
        t1 = FUN_0c01cc56((*(short *)((((((signed char)t0 << 2) + 0xC20E2B4) + 0x2) + 0x0))), 0xC01AB14);
        (((struct o28_float *)(t1))->v) = ((*(float *)((((((signed char)a4 << 2) << 1) + 0xC20DFC0) + 0x0))) + ((((struct o0_float *)0xC01ACE8)->v)));
        *(unsigned char *)((t1 + 0x3)) = a4;
        *(unsigned char *)((t1 + 0x2)) = 0x1;
        (((struct o1A_uchar *)(t1))->v) = t0;
        if ((*(short *)((((((signed char)t0 << 2) + 0xC20E2B4) + 0x2) + 0x0))) == 41) {
            u0 = ((((struct o4_float *)0xC01ACE8)->v));
        } else {
            u0 = ((((struct o8_float *)0xC01ACE8)->v));
        }
        (((struct o2C_float *)(t1))->v) = (((((struct o4_float *)(((((signed char)a4 << 2) << 1) + 0xC20DFC0)))->v)) + u0);
        t2 = 0x2C;
    }
    return t2;
}

int FUN_0c01ac62(int a4, float f4, float f5, float f6)
{
    int stk[23];

    register int R1;
    register int R3;
    register float F3;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_10;
    register int v0_11;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register int v0_9;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    v0_2 = a4;
    w0_2 = f4;
    w0_1 = f5;
    w0_0 = f6;
    v0_3 = ((((int)stk + 16) + 0x3C));
    v0_5 = ((((int)stk + 16) + 0x44));
    v0_4 = ((((int)stk + 16) + 0x40));
    v0_0 = (v0_2);
    v0_2 = (0xC3099A6);
    v0_10 = ((((int)stk + 16) + 0x34));
    v0_6 = ((((int)stk + 16) + 0x8));
    v0_11 = (0xC309E07);
    if (((*(signed char *)0xC309993) != 0)) goto L_C01AD20;
    *(unsigned int *)((v0_5 + 0x0)) = v0_2;
    *(unsigned int *)((v0_5 + 0x4)) = 0xC30A354;
    *(unsigned short *)((v0_4 + 0x0)) = ((((struct o0_short *)0xC309C6C)->v));
    *(unsigned short *)((v0_4 + 0x2)) = ((((struct o0_short *)0xC30A3E8)->v));
    *(unsigned short *)((v0_3 + 0x0)) = ((((struct o2_short *)0xC309C6C)->v));
    *(unsigned short *)((v0_3 + 0x2)) = ((((struct o2_short *)0xC30A3E8)->v));
    *(unsigned short *)((v0_10 + 0x0)) = ((((struct o4_short *)0xC309C6C)->v));
    *(unsigned short *)((v0_10 + 0x2)) = ((((struct o4_short *)0xC30A3E8)->v));
    *(unsigned char *)((v0_6 + 0x0)) = (*(signed char *)0xC305420);
    *(unsigned char *)((v0_6 + 0x1)) = (*(signed char *)((v0_11 + 0x0)));
    L_C01AD54:;
    *(unsigned int *)(((int)stk + 16)) = (0x0 + v0_3);
    v0_2 = (0x270F);
    v0_11 = (0x0);
    v0_1 = ((0x0 + v0_4));
    v0_8 = ((0x0 + v0_3));
    L_C01AD64:;
    *(unsigned int *)(((int)stk + 20)) = ((((int)stk + 16) + 0x38) + ((signed char)v0_11 << 1));
    *(unsigned short *)((((((int)stk + 16) + 0x38) + ((signed char)v0_11 << 1)) + 0x0)) = (((*(short *)((v0_4 + ((signed char)v0_11 << 1)))) + (*(short *)((v0_3 + ((signed char)v0_11 << 1))))) + (*(short *)((v0_10 + ((signed char)v0_11 << 1)))));
    v0_7 = (((signed char)v0_11 << 1));
    v0_9 = (((signed char)v0_11 << 1));
    if (((int)(unsigned short)(*(short *)(((*(int *)(((int)stk + 20))) + 0x0))) <= (int)v0_2)) goto L_C01AD94;
    *(unsigned short *)((((((int)stk + 16) + 0x38) + v0_9) + 0x0)) = v0_2;
    L_C01AD94:;
    if (((int)(unsigned short)(*(short *)((v0_4 + v0_7))) <= (int)v0_2)) goto L_C01AD9E;
    *(unsigned short *)((v0_1 + 0x0)) = v0_2;
    L_C01AD9E:;
    v0_11 = ((v0_11 + 0x1));
    if (((int)(unsigned short)(*(short *)(((*(int *)(((int)stk + 16))) + 0x0))) <= (int)v0_2)) goto L_C01ADAC;
    *(unsigned short *)((v0_8 + 0x0)) = v0_2;
    L_C01ADAC:;
    *(unsigned int *)(((int)stk + 16)) = ((*(int *)(((int)stk + 16))) + 0x2);
    v0_1 = ((v0_1 + 0x2));
    v0_8 = ((v0_8 + 0x2));
    if (((int)(signed char)v0_11 < (int)0x2)) goto L_C01AD64;
    v0_1 = *(signed char *)((v0_0 + 0x14));
    v0_7 = (v0_1);
    if ((v0_1 == 0)) goto L_C01ADF0;
    if ((v0_7 == 1)) goto L_C01AE26;
    L_C01B080:;
    return v0_7;
    L_C01AE26:;
    v0_2 = *(signed char *)((v0_0 + 0x2));
    v0_7 = (v0_2);
    v0_9 = (0xC02B3BA);
    v0_1 = (0xC20E060);
    v0_8 = (0xC02B502);
    w0_3 = (-48.0f);
    w0_1 = (72.0f);
    w0_2 = (-108.0f);
    w0_0 = (637.0f);
    if ((v0_2 == 0)) goto L_C01AE6A;
    if ((v0_7 == 1)) goto L_C01AE6A;
    if ((v0_7 == 2)) goto L_C01AF20;
    if ((v0_7 == 3)) goto L_C01AF20;
    if (!((v0_7 != 4))) goto L_C01AFAC;
    if ((v0_7 != 5)) goto L_C01AE5E;
    goto L_C01AFAC;
    L_C01AFAC:;
    if (((*(signed char *)((v0_6 + ((*(signed char *)((v0_0 + 0x2))) - 4)))) == 0)) goto L_C01B042;
    *(unsigned short *)(((int)stk + 20)) = (FUN_0c187d88((*(int *)((v0_5 + (((*(signed char *)((v0_0 + 0x2))) - 4) << 2))))));
    FUN_0c02b502(0xC);
    v0_2 = *(int *)((v0_5 + (((*(signed char *)((v0_0 + 0x2))) - 4) << 2)));
    v0_3 = *(signed char *)((v0_0 + 0x3));
    *(unsigned int *)(((int)stk + 16)) = (((v0_3 << 2) << 1) + v0_1);
    v0_4 = *(short *)(((int)stk + 20));
    FUN_0c02b3ba(v0_2, ((*(float *)(((((v0_3 << 2) << 1) + v0_1) + 0x0))) - (float)(((int)((unsigned int)((int)((unsigned int)((((((unsigned int)(unsigned short)v0_4 >> 1) << 1) + ((unsigned int)(unsigned short)v0_4 >> 1)) << 2) << 1) + (unsigned int)0x0)) + ((((int)0x0 > (int)((((((unsigned int)(unsigned short)v0_4 >> 1) << 1) + ((unsigned int)(unsigned short)v0_4 >> 1)) << 2) << 1))) ? 1u : 0u))) >> 1)), ((((struct o4_float *)((((v0_3 << 2) << 1) + v0_1)))->v)), w0_0);
    FUN_0c02b502(0x0);
    v0_2 = *(signed char *)((v0_0 + 0x3));
    *(unsigned int *)(((int)stk + 16)) = (((v0_2 << 2) << 1) + v0_1);
    FUN_0c02b3ba(0xC1A75FC, ((*(float *)(((((v0_2 << 2) << 1) + v0_1) + 0x0))) + w0_3), (((((struct o4_float *)((((v0_2 << 2) << 1) + v0_1)))->v)) + 36.0f), w0_0);
    v0_0 = *(signed char *)((v0_0 + 0x3));
    *(unsigned int *)(((int)stk + 16)) = (v0_1 + ((v0_0 << 2) << 1));
    v0_2 = (0xC1A7608);
    w0_2 = (((*(float *)(((v0_1 + ((v0_0 << 2) << 1)) + 0x0))) + w0_2));
    w0_1 = ((((((struct o4_float *)((v0_1 + ((v0_0 << 2) << 1))))->v)) + w0_1));
    w0_0 = (w0_0);
    L_C01B07C:;
    v0_7 = ((FUN_0c02b3ba(v0_2, w0_2, w0_1, w0_0)));
    goto L_C01B080;
    L_C01B042:;
    FUN_0c02b502(0x0);
    v0_1 = *(signed char *)((v0_0 + 0x3));
    *(unsigned int *)(((int)stk + 16)) = (0xC20E040 + ((v0_1 << 2) << 1));
    v0_0 = ((0xC20E040 + ((v0_1 << 2) << 1)));
    v0_2 = (0xC1A761C);
    w0_1 = (((((struct o4_float *)((0xC20E040 + ((v0_1 << 2) << 1))))->v)));
    w0_0 = (w0_0);
    L_C01B05C:;
    w0_2 = ((*(float *)((v0_0 + 0x0))));
    goto L_C01B07C;
    L_C01AE5E:;
    if ((v0_7 != 6)) goto L_C01AE66;
    goto L_C01B042;
    L_C01AE66:;
    FUN_0c02b502(0x0);
    v0_0 = *(signed char *)((v0_0 + 0x3));
    *(unsigned int *)(((int)stk + 16)) = (0xC20E080 + ((v0_0 << 2) << 1));
    v0_2 = (0xC1A7624);
    w0_2 = ((*(float *)(((0xC20E080 + ((v0_0 << 2) << 1)) + 0x0))));
    w0_1 = (((((struct o4_float *)((0xC20E080 + ((v0_0 << 2) << 1))))->v)));
    w0_0 = (w0_0);
    goto L_C01B07C;
    L_C01AF20:;
    *(unsigned short *)(((int)stk + 20)) = (FUN_0c187d88((*(int *)((v0_5 + (((*(signed char *)((v0_0 + 0x2))) - 2) << 2))))));
    FUN_0c02b502(0xC);
    v0_2 = *(int *)((v0_5 + (((*(signed char *)((v0_0 + 0x2))) - 2) << 2)));
    v0_3 = *(signed char *)((v0_0 + 0x3));
    *(unsigned int *)(((int)stk + 16)) = (((v0_3 << 2) << 1) + v0_1);
    v0_4 = *(short *)(((int)stk + 20));
    FUN_0c02b3ba(v0_2, ((*(float *)(((((v0_3 << 2) << 1) + v0_1) + 0x0))) - (float)(((int)((unsigned int)((int)((unsigned int)((((((unsigned int)(unsigned short)v0_4 >> 1) << 1) + ((unsigned int)(unsigned short)v0_4 >> 1)) << 2) << 1) + (unsigned int)0x0)) + ((((int)0x0 > (int)((((((unsigned int)(unsigned short)v0_4 >> 1) << 1) + ((unsigned int)(unsigned short)v0_4 >> 1)) << 2) << 1))) ? 1u : 0u))) >> 1)), ((((struct o4_float *)((((v0_3 << 2) << 1) + v0_1)))->v)), w0_0);
    FUN_0c02b502(0x0);
    v0_2 = *(signed char *)((v0_0 + 0x3));
    *(unsigned int *)(((int)stk + 16)) = (((v0_2 << 2) << 1) + v0_1);
    FUN_0c02b3ba(0xC1A75FC, ((*(float *)(((((v0_2 << 2) << 1) + v0_1) + 0x0))) + w0_3), (((((struct o4_float *)((((v0_2 << 2) << 1) + v0_1)))->v)) + 36.0f), w0_0);
    v0_0 = *(signed char *)((v0_0 + 0x3));
    *(unsigned int *)(((int)stk + 16)) = (v0_1 + ((v0_0 << 2) << 1));
    v0_2 = (0xC1A7608);
    w0_2 = (((*(float *)(((v0_1 + ((v0_0 << 2) << 1)) + 0x0))) + w0_2));
    w0_1 = ((((((struct o4_float *)((v0_1 + ((v0_0 << 2) << 1))))->v)) + w0_1));
    w0_0 = (w0_0);
    goto L_C01B07C;
    L_C01AE6A:;
    *(unsigned short *)(((int)stk + 20)) = (FUN_0c187d88((*(int *)((v0_5 + ((*(signed char *)((v0_0 + 0x2))) << 2))))));
    FUN_0c02b502(0xC);
    v0_1 = *(int *)((v0_5 + ((*(signed char *)((v0_0 + 0x2))) << 2)));
    v0_2 = *(signed char *)((v0_0 + 0x3));
    *(unsigned int *)(((int)stk + 16)) = (0xC20DFE0 + ((v0_2 << 2) << 1));
    v0_5 = *(short *)(((int)stk + 20));
    FUN_0c02b3ba(v0_1, ((*(float *)(((0xC20DFE0 + ((v0_2 << 2) << 1)) + 0x0))) - (float)(((int)((unsigned int)((int)((unsigned int)((((((unsigned int)(unsigned short)v0_5 >> 1) << 1) + ((unsigned int)(unsigned short)v0_5 >> 1)) << 2) << 1) + (unsigned int)0x0)) + ((((int)0x0 > (int)((((((unsigned int)(unsigned short)v0_5 >> 1) << 1) + ((unsigned int)(unsigned short)v0_5 >> 1)) << 2) << 1))) ? 1u : 0u))) >> 1)), ((((struct o4_float *)((0xC20DFE0 + ((v0_2 << 2) << 1))))->v)), w0_0);
    FUN_0c02b502(0x0);
    v0_1 = *(signed char *)((v0_0 + 0x3));
    *(unsigned int *)(((int)stk + 16)) = (0xC20E000 + ((v0_1 << 2) << 1));
    FUN_0c02b3ba(0xC1A75E0, (*(float *)(((0xC20E000 + ((v0_1 << 2) << 1)) + 0x0))), ((((struct o4_float *)((0xC20E000 + ((v0_1 << 2) << 1))))->v)), w0_0);
    v0_1 = *(signed char *)(((0x2 + v0_0) + 0x0));
    *(int *)((int)stk + 12) = (unsigned short)(*(short *)(((v0_3 + (v0_1 << 1)) + 0x0)));
    *(int *)((int)stk + 8) = (unsigned short)(*(short *)((v0_4 + (v0_1 << 1))));
    *(int *)((int)stk + 4) = (unsigned short)(*(short *)(((((int)stk + 8) + 0x40) + (v0_1 << 1))));
    *(int *)((int)stk + 0) = 0xC1A75EC;
    FUN_0c187cac((((int)stk + 0) + 0x1C), 0x0, 0x0, 0x0, 0xC1A75EC);
    v0_1 = *(signed char *)((v0_0 + 0x3));
    *(unsigned int *)(((int)stk + 16)) = (0xC20E020 + ((v0_1 << 2) << 1));
    v0_0 = ((0xC20E020 + ((v0_1 << 2) << 1)));
    v0_2 = ((((int)stk + 16) + 0xC));
    w0_1 = (((((struct o4_float *)((0xC20E020 + ((v0_1 << 2) << 1))))->v)));
    w0_0 = (w0_0);
    goto L_C01B05C;
    L_C01ADF0:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    (((struct o28_float *)(v0_0))->v) = (*(float *)((0xC20DFA0 + (((*(signed char *)((v0_0 + 0x3))) << 2) << 1))));
    v0_1 = *(signed char *)((v0_0 + 0x3));
    (((struct o2C_float *)(v0_0))->v) = ((((struct o4_float *)((0xC20DFA0 + ((v0_1 << 2) << 1))))->v));
    *(unsigned char *)((v0_0 + 0x2)) = (*(signed char *)(((0xC20E0A0 + ((*(signed char *)0xC30541F) << 2)) + (*(signed char *)((v0_0 + 0x3))))));
    v0_2 = ((0xC20DFA0 + ((v0_1 << 2) << 1)));
    goto L_C01AE26;
    L_C01AD20:;
    *(unsigned int *)((v0_5 + 0x4)) = v0_2;
    *(unsigned int *)((v0_5 + 0x0)) = 0xC30A354;
    *(unsigned short *)((v0_4 + 0x2)) = ((((struct o0_short *)0xC309C6C)->v));
    *(unsigned short *)((v0_4 + 0x0)) = ((((struct o0_short *)0xC30A3E8)->v));
    *(unsigned short *)((v0_3 + 0x2)) = ((((struct o2_short *)0xC309C6C)->v));
    *(unsigned short *)((v0_3 + 0x0)) = ((((struct o2_short *)0xC30A3E8)->v));
    *(unsigned short *)((v0_10 + 0x2)) = ((((struct o4_short *)0xC309C6C)->v));
    *(unsigned short *)((v0_10 + 0x0)) = ((((struct o4_short *)0xC30A3E8)->v));
    *(unsigned char *)((v0_6 + 0x1)) = (*(signed char *)0xC305420);
    *(unsigned char *)((v0_6 + 0x0)) = (*(signed char *)((v0_11 + 0x0)));
    goto L_C01AD54;
}

int FUN_0c01b0fc(int a4, int a5, int a6)
{
    register int t5;
    register int t10;
    register int t11;

    FUN_0c036de8(0x21, a5, a6);
    FUN_0c01cb7c();
    FUN_0c01cc56(0xC, 0xC01A9FE);
    FUN_0c01cc56(((*(signed char *)0xC30541F) + 0x4), 0xC01A9FE);
    t5 = 0x0;
    for (;;) {
        t10 = FUN_0c01cc56((*(short *)((((unsigned char)t5 << 1) + ((((*(signed char *)0xC30541F) << 2) << 1) + 0xC20DF80)))), 0xC01AC62);
        t11 = t5;
        t5 = (t5 + 0x1);
        *(unsigned char *)((t10 + 0x3)) = t11;
        if ((int)(unsigned char)t5 >= (int)0x4) {
            break;
        }
    }
    FUN_0c01ab62(0x0);
    FUN_0c01ab62(0x2);
    return (FUN_0c01cc56(0x2E, 0xC01AA02));
}

int FUN_0c01b16a(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        t1 = t0;
        if (t0 != 1) {
        } else {
            *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
            t0 = *(signed char *)((a4 + 0x2));
            t2 = t0;
            if (t0 == 13) {
                u0 = 1.20000005f;
                u0 = u0 + 0.200000003f * (math_sin_angle16(((((*(short *)((a4 + 0x1C))) << 8) << 2) << 1)));
                (((struct o40_float *)(a4))->v) = u0;
                u0 = 1.0f;
                u0 = u0 + 0.5f * (math_sin_angle16(((((*(short *)((a4 + 0x1C))) << 8) << 2) << 2)));
                (((struct o44_float *)(a4))->v) = u0;
                t2 = 0x44;
            }
            t1 = t2;
        }
        t0 = t1;
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o15_uchar *)(a4))->v) = 0x0;
        (((struct o28_float *)(a4))->v) = (*(float *)((0xC20E128 + (((*(signed char *)((a4 + 0x3))) << 2) << 1))));
        (((struct o2C_float *)(a4))->v) = ((((struct o4_float *)((0xC20E128 + (((*(signed char *)((a4 + 0x3))) << 2) << 1))))->v));
        (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x10);
        (((struct o48_float *)(a4))->v) = 1.0f;
        (((struct o44_float *)(a4))->v) = 1.0f;
        (((struct o40_float *)(a4))->v) = 1.0f;
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
        t1 = *(signed char *)((a4 + 0x2));
        t2 = t1;
        if (t1 == 13) {
            u0 = 1.20000005f;
            u0 = u0 + 0.200000003f * (math_sin_angle16(((((*(short *)((a4 + 0x1C))) << 8) << 2) << 1)));
            (((struct o40_float *)(a4))->v) = u0;
            u0 = 1.0f;
            u0 = u0 + 0.5f * (math_sin_angle16(((((*(short *)((a4 + 0x1C))) << 8) << 2) << 2)));
            (((struct o44_float *)(a4))->v) = u0;
            t2 = 0x44;
        }
        t0 = t2;
    }
    return t0;
}

int FUN_0c01b248(int a4)
{
    int stk[8];

    register int R1;
    register int R2;
    register int R3;
    register int R10;
    register float F2;
    register float F3;
    register float F4;
    register float F5;
    register float F6;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register float w0_0;
    register float w0_1;
    v0_3 = a4;
    v0_4 = *(signed char *)((v0_3 + 0x14));
    v0_2 = (v0_4);
    v0_1 = (0x0);
    v0_0 = (v0_3);
    w0_1 = (1.0f);
    w0_0 = (0.5f);
    if ((v0_4 == 0)) goto L_C01B278;
    if ((v0_2 == 1)) goto L_C01B2B2;
    if ((v0_2 != 2)) goto L_C01B274;
    (((struct o22_ushort *)(v0_0))->v) = (((((struct o22_short *)(v0_0))->v)) + 0x1);
    w0_1 = w0_0;
    w0_1 = w0_1 + w0_0 * (math_sin_angle16(((((((struct o22_short *)(v0_0))->v)) << 8) << 1)));
    (((struct oBC_float *)(v0_0))->v) = w0_1;
    (((struct oB8_float *)(v0_0))->v) = w0_1;
    (((struct oB4_float *)(v0_0))->v) = w0_1;
    v0_2 = (0xB4);
    w0_0 = (w0_0);
    L_C01B426:;
    return v0_2;
    L_C01B274:;
    goto L_C01B426;
    L_C01B2B2:;
    if (((*(signed char *)((v0_0 + 0x15))) == 0)) goto L_C01B2BE;
    v0_3 = FUN_0c01c62a(v0_0);
    v0_2 = ((signed char)v0_3);
    if (((signed char)v0_3 == 0)) goto L_C01B426;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(v0_0))->v) = 0x1;
    (((struct o40_float *)(v0_0))->v) = w0_0;
    (((struct o44_float *)(v0_0))->v) = (*(float *)0xC01B4C0);
    (((struct o48_float *)(v0_0))->v) = w0_1;
    (((struct oBC_float *)(v0_0))->v) = w0_0;
    (((struct oB8_float *)(v0_0))->v) = w0_0;
    (((struct oB4_float *)(v0_0))->v) = w0_0;
    L_C01B3FA:;
    (((struct o22_ushort *)(v0_0))->v) = v0_1;
    v0_2 = (0x22);
    goto L_C01B426;
    L_C01B2BE:;
    if (((*(signed char *)((v0_0 + 0x2))) != (*(signed char *)0xC309993))) goto L_C01B324;
    v0_2 = *(int *)0xC30EFA8;
    v0_4 = (v0_2);
    v0_3 = (0x3);
    if (((int)(short)v0_2 >= 0)) goto L_C01B2D6;
    v0_4 = (v0_1);
    L_C01B2D6:;
    FUN_0c02b502(v0_3);
    *(int *)((int)stk + 4) = (unsigned short)((int)((int)(short)v0_4 / (int)0x3C));
    *(int *)((int)stk + 0) = 0xC1A7638;
    *(unsigned int *)(((int)stk + 12)) = (((int)stk + 0) + 0x10);
    FUN_0c187cac((((int)stk + 0) + 0x10), 0x0, 0x0, 0x0, 0xC1A7638);
    *(unsigned int *)(((int)stk + 8)) = (((int)stk + 8) + 0x10);
    FUN_0c02b342((*(int *)(((int)stk + 12))), (((int)stk + 8) + 0x10));
    w0_0 = 248.0f;
    w0_0 = w0_0 + 96.0f * (float)(*(signed char *)0xC309993);
    FUN_0c02b3ba((*(int *)(((int)stk + 8))), w0_0, 86.0f, 637.0f);
    L_C01B324:;
    v0_3 = (0xC30541B);
    v0_2 = (0xC20E0F8);
    if (((*(signed char *)((0xC30541B + (*(signed char *)((v0_0 + 0x2)))))) != 0)) goto L_C01B350;
    (((struct o28_float *)(v0_0))->v) = (*(float *)((((*(signed char *)((0xC305419 + (*(signed char *)((v0_0 + 0x2)))))) << 2) + ((((*(signed char *)((v0_0 + 0x3))) << 2) << 1) + v0_2))));
    v0_2 = ((FUN_0c012c34(v0_0)));
    goto L_C01B426;
    L_C01B350:;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    (((struct o28_float *)(v0_0))->v) = (*(float *)(((((*(signed char *)((v0_3 + (*(signed char *)((v0_0 + 0x2)))))) - 1) << 2) + ((((*(signed char *)((v0_0 + 0x3))) << 2) << 1) + v0_2))));
    (((struct o1B_uchar *)(v0_0))->v) = v0_1;
    goto L_C01B3FA;
    L_C01B278:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    (((struct o15_uchar *)(v0_0))->v) = v0_1;
    (((struct o2C_float *)(v0_0))->v) = (*(float *)((0xC20E118 + ((*(signed char *)((v0_0 + 0x3))) << 2))));
    (((struct o30_float *)(v0_0))->v) = 3.0f;
    (((struct oAC_ushort *)(v0_0))->v) = (((((struct oAC_short *)(v0_0))->v)) | 0x10);
    (((struct o40_float *)(v0_0))->v) = 0.800000012f;
    (((struct o44_float *)(v0_0))->v) = w0_1;
    (((struct o48_float *)(v0_0))->v) = w0_1;
    goto L_C01B2B2;
}

int FUN_0c01b436(int a4)
{

    register int R1;
    register int R2;
    register int R3;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    v0_0 = a4;
    v0_2 = *(signed char *)((v0_0 + 0x14));
    v0_1 = (v0_2);
    if ((v0_2 == 0)) goto L_C01B446;
    if ((v0_1 == 1)) goto L_C01B46C;
    L_C01B4B2:;
    return v0_1;
    L_C01B46C:;
    v0_3 = *(signed char *)0xC309993;
    v0_2 = *(signed char *)((v0_0 + 0x2));
    v0_1 = (v0_2);
    v0_3 = ((((((((v0_3 << 1) << 2) + (v0_3 << 1)) << 2) << 1) + 0xC5426C4) + 0x28));
    if ((v0_2 == 0)) goto L_C01B4B2;
    if ((v0_1 == 1)) goto L_C01B494;
    if ((v0_1 == 2)) goto L_C01B49E;
    goto L_C01B4B2;
    L_C01B49E:;
    if (((*(int *)((v0_3 + 0x0))) == 0)) goto L_C01B4AC;
    L_C01B4A4:;
    (((struct oA8_uchar *)(v0_0))->v) = 0x0;
    v0_1 = (0xA8);
    goto L_C01B4B2;
    L_C01B4AC:;
    (((struct oA8_uchar *)(v0_0))->v) = 0x1;
    v0_1 = (0xA8);
    goto L_C01B4B2;
    L_C01B494:;
    if (((*(int *)((v0_3 + 0x0))) != 0)) goto L_C01B4AC;
    goto L_C01B4A4;
    L_C01B446:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    (((struct o28_float *)(v0_0))->v) = (*(float *)((0xC20E0D8 + (((*(signed char *)((v0_0 + 0x3))) << 2) << 1))));
    (((struct o2C_float *)(v0_0))->v) = ((((struct o4_float *)((0xC20E0D8 + (((*(signed char *)((v0_0 + 0x3))) << 2) << 1))))->v));
    goto L_C01B46C;
}
