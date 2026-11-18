/* game/effect: functions 0C133748-0C135982, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12C_ushort { char p[0x12C]; unsigned short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o18_uchar { char p[0x18]; unsigned char v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o78_int { char p[0x78]; int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oC4_int { char p[0xC4]; int v; };
extern int FUN_0c03f346();
int FUN_0c064f02(int);
int FUN_0c133c78(int, int);
int FUN_0c133d44(int);
int FUN_0c133e80(int);
int FUN_0c134216(int);
int FUN_0c1348c8(int);
int FUN_0c134c9c(int);
int FUN_0c1353a4(int, int, int, int);
int FUN_0c1358c2(int);
float math_signed_sqrt(float);
int math_atan_angle16(float);
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c187798(int, int, int);
int FUN_0c134780(int a4, int a5, int a6);
int FUN_0c134d80(int a4, int a5, int a6, int a7);
float FUN_0c1351ca(int a4, int a5, int a6, int a7);


int FUN_0c134d80(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t2;
    int t5;
    register float u10;
    register int t17;
    int t20;
    register float u25;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            (((struct o16_uchar *)(a4))->v) = 0x0;
            (((struct o15_uchar *)(a4))->v) = 0x0;
            FUN_0c133c78(a4, 0x0);
            return FUN_0c133e80(a4);
        }
        t2 = FUN_0c134216(a4);
        if (t2 != 0) {
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
            return 0x16;
        }
        t5 = *(signed char *)((a4 + 0x17));
        if (t5 != 3) {
            if (t5 != 1) {
                if (t5 != 4) {
                    if ((t5 != 2) && (t5 != 5)) {
                        if (t5 != 0) {
                            FUN_0c133d44(a4);
                            (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) - 0.0199999996f);
                            if (0.200000003f > ((((struct o48_float *)(a4))->v))) {
                                (((struct o48_float *)(a4))->v) = 0.200000003f;
                            }
                            u10 = (((struct o48_float *)(a4))->v);
                            (((struct o44_float *)(a4))->v) = u10;
                            (((struct o40_float *)(a4))->v) = u10;
                            return FUN_0c133e80(a4);
                        }
                        FUN_0c133d44(a4);
                        return FUN_0c134c9c(a4);
                    }
                    return FUN_0c1348c8(a4);
                }
            }
            FUN_0c133d44(a4);
            return ((int (*)(int, int, int, int))(0xC13451C))(a4, a5, a6, a7);
        }
    } else {
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        (((struct o18_uchar *)(a4))->v) = 0x0;
        (((struct o20_ushort *)(a4))->v) = 0x12C;
        (((struct o12A_ushort *)(a4))->v) = 0x0;
        (((struct o12C_ushort *)(a4))->v) = 0x0;
        (((struct o12E_ushort *)(a4))->v) = 0xF0;
        FUN_0c133c78(a4, 0x0);
        t17 = FUN_0c134216(a4);
        if (t17 != 0) {
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
            return 0x16;
        }
        t20 = *(signed char *)((a4 + 0x17));
        if (t20 != 3) {
            if (t20 != 1) {
                if (t20 != 4) {
                    if ((t20 != 2) && (t20 != 5)) {
                        if (t20 != 0) {
                            FUN_0c133d44(a4);
                            (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) - 0.0199999996f);
                            if (0.200000003f > ((((struct o48_float *)(a4))->v))) {
                                (((struct o48_float *)(a4))->v) = 0.200000003f;
                            }
                            u25 = (((struct o48_float *)(a4))->v);
                            (((struct o44_float *)(a4))->v) = u25;
                            (((struct o40_float *)(a4))->v) = u25;
                            return FUN_0c133e80(a4);
                        }
                        FUN_0c133d44(a4);
                        return FUN_0c134c9c(a4);
                    }
                    return FUN_0c1348c8(a4);
                }
            }
            FUN_0c133d44(a4);
            return ((int (*)(int, int, int, int))(0xC13451C))(a4, a5, a6, a7);
        }
    }
    FUN_0c133d44(a4);
    return ((int (*)(int, int, int, int))(0xC13436A))(a4, a5, a6, a7);
}

float FUN_0c1351ca(int a4, int a5, int a6, int a7)
{
    int stk[3];

    register int R1;
    register int R2;
    register int R3;
    register int R12;
    register float F0;
    register float F2;
    register float F3;
    register float F4;
    register float F12;
    register float F15;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register float w0_0;
    v0_1 = a4;
    v0_2 = a5;
    v0_3 = a6;
    v0_4 = a7;
    (((struct oA8_uchar *)(v0_1))->v) = (*(signed char *)(((*(int *)((v0_1 + 0x10))) + 0xA8)));
    v0_0 = (((struct oC4_int *)(v0_1))->v);
    (((struct o78_uint *)(v0_0))->v) = (((((struct o78_int *)(v0_0))->v)) + 0x1555);
    v0_0 = (((struct oC4_int *)(v0_1))->v);
    (((struct o78_uint *)(v0_0))->v) = (((((struct o78_int *)(v0_0))->v)) & 0xFFFF);
    v0_0 = (((struct oC4_int *)(v0_1))->v);
    (((struct o7C_uint *)(v0_0))->v) = (((((struct o7C_int *)(v0_0))->v)) + 0x71C);
    v0_0 = (((struct oC4_int *)(v0_1))->v);
    (((struct o7C_uint *)(v0_0))->v) = (((((struct o7C_int *)(v0_0))->v)) & 0xFFFF);
    v0_7 = *(signed char *)((v0_1 + 0x14));
    v0_6 = (v0_7);
    v0_5 = (0x0);
    v0_0 = (v0_1);
    v0_1 = (0xFFFF);
    if ((v0_7 == 0)) goto L_C13526C;
    if ((v0_6 == 1)) goto L_C1352BC;
    if ((v0_6 != 2)) goto L_C13522E;
    L_C13536E:;
    v0_6 = ((FUN_0c03f346(v0_0, v0_2, v0_3, v0_4)));
    L_C135374:;
    return F0;
    L_C13522E:;
    goto L_C13536E;
    L_C1352BC:;
    *(unsigned short *)((v0_0 + 0x1E)) = ((*(short *)((v0_0 + 0x1E))) + 0x1);
    if (((int)(*(short *)((v0_0 + 0x1E))) > (int)0x5)) goto L_C1352D0;
    (((struct o12E_ushort *)(v0_0))->v) = v0_5;
    L_C1352DA:;
    v0_1 = *(short *)((v0_0 + 0x1C));
    v0_6 = (v0_1);
    if (((int)v0_1 < 0)) goto L_C1352E4;
    v0_6 = ((v0_6 & 0x3));
    L_C1352EE:;
    if ((v0_6 != 0)) goto L_C13530C;
    *(float *)(((int)stk + 8)) = 0.200000003f;
    *(float *)(((int)stk + 4)) = 0.200000003f;
    *(float *)(((int)stk + 0)) = 0.200000003f;
    FUN_0c1353a4(v0_0, 0x0, (v0_0 + 0x28), ((int)stk + 0));
    L_C13530C:;
    if (((*(signed char *)((v0_0 + 0x131))) != 0)) goto L_C13531E;
    v0_1 = (FUN_0c064f02(v0_0)) == 0;
    if (!(v0_1)) goto L_C13531E;
    v0_1 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_1 - 1);
    if (((short)(v0_1 - 1) != 0)) goto L_C135342;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    goto L_C135342;
    L_C13531E:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    FUN_0c1358c2(v0_0);
    L_C135342:;
    (((struct o28_float *)(v0_0))->v) = (((((struct o28_float *)(v0_0))->v)) + ((((struct o4C_float *)(v0_0))->v)));
    (((struct o30_float *)(v0_0))->v) = (((((struct o30_float *)(v0_0))->v)) + ((((struct o54_float *)(v0_0))->v)));
    (((struct o2C_float *)(v0_0))->v) = (((((struct o2C_float *)(v0_0))->v)) + ((((struct o50_float *)(v0_0))->v)));
    v0_6 = (0x2C);
    goto L_C135374;
    L_C1352E4:;
    v0_6 = (((~(((~v0_6) + 0x1) & 0x3)) + 0x1));
    goto L_C1352EE;
    L_C1352D0:;
    (((struct o12E_ushort *)(v0_0))->v) = 0xF0;
    goto L_C1352DA;
    L_C13526C:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    (((struct o15_uchar *)(v0_0))->v) = v0_5;
    *(unsigned short *)((v0_0 + 0x1C)) = 0x258;
    *(unsigned short *)((v0_0 + 0x1E)) = v0_5;
    w0_0 = math_sin_angle16((*(int *)((v0_0 + 0x38))));
    w0_0 = (w0_0 * (math_cos_angle16((*(int *)((v0_0 + 0x34))))));
    (((struct o4C_float *)(v0_0))->v) = (w0_0 * 50.0f);
    w0_0 = math_cos_angle16((*(int *)((v0_0 + 0x38))));
    w0_0 = (w0_0 * (math_cos_angle16((*(int *)((v0_0 + 0x34))))));
    (((struct o54_float *)(v0_0))->v) = (w0_0 * 50.0f);
    (((struct o50_float *)(v0_0))->v) = (-((math_sin_angle16((*(int *)((v0_0 + 0x34))))) * 50.0f));
    goto L_C1352BC;
}
