/* game/unsorted: functions 0C014970-0C015944, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_short { short v; };
struct o0_uchar { unsigned char v; };
struct o14_float { char p[0x14]; float v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4FA_uchar { char p[0x4FA]; unsigned char v; };
struct o4_float { char p[0x4]; float v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o6_short { char p[0x6]; short v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
int FUN_0c010448(void);
int FUN_0c01599c(void);
int FUN_0c0159c4(int, int, int, int, int);
int FUN_0c015b58(void);
int FUN_0c0185b4(void);
int FUN_0c018e74(int);
int FUN_0c018f90(int, int, int);
int FUN_0c018fd2(int);
int FUN_0c01c714(int, int, int);
int FUN_0c01cb7c(void);
int FUN_0c01cc56(int, int);
int FUN_0c01ccba(void);
int FUN_0c01ccda(void);
int FUN_0c01cd2c(int);
int FUN_0c01d094(void);
int FUN_0c01d27a(void);
int FUN_0c01e5dc(int, int, int);
int FUN_0c01e9e4(void);
int FUN_0c027048(void);
int FUN_0c0270d6(void);
int FUN_0c029c9e(void);
int FUN_0c029caa(void);
int FUN_0c0573c0(int, int, int);
int FUN_0c0573cc(int, int, int);
int FUN_0c05aab6(int, int);
int FUN_0c187a88(int, int, int);
int strcpy(int, int);
int FUN_0c187d88(int);
int FUN_0c014970(int a4);
int FUN_0c01499c(int a4);
int FUN_0c0149e4(int a4);
int FUN_0c014a68(void);
int FUN_0c014ab0(void);
int FUN_0c014c3c(void);
int FUN_0c014d78(int a4, int a5);
int FUN_0c015010(int a4);
int FUN_0c015130(void);
int FUN_0c015416(int a4, int a5, int a6);
int FUN_0c015844(void);
int FUN_0c015906(void);
int FUN_0c01591c(void);

int FUN_0c014970(int a4)
{
    register int t2;
    register int t3;

    (((struct o28_float *)(a4))->v) = ((((struct o0_float *)0xC014A4C)->v));
    (((struct o2C_float *)(a4))->v) = ((((struct o4_float *)0xC014A4C)->v));
    t2 = FUN_0c01591c();
    t3 = 0x0;
    if (t2 != 0) {
        t3 = 0x1;
    }
    (((struct oA8_uchar *)(a4))->v) = t3;
    return 0xA8;
}

int FUN_0c01499c(int a4)
{
    register int t4;
    register int t5;

    (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x10);
    (((struct o28_float *)(a4))->v) = ((((struct o0_float *)0xC014A3C)->v));
    (((struct o2C_float *)(a4))->v) = ((((struct o14_float *)0xC014A3C)->v));
    (((struct o40_float *)(a4))->v) = ((((struct o8_float *)0xC014A3C)->v));
    (((struct o44_float *)(a4))->v) = 1.0f;
    (((struct o48_float *)(a4))->v) = 1.0f;
    t4 = FUN_0c01591c();
    t5 = 0x0;
    if (t4 != 0) {
        t5 = 0x1;
    }
    (((struct oA8_uchar *)(a4))->v) = t5;
    return 0xA8;
}

int FUN_0c0149e4(int a4)
{
    int t0;
    register int t2;

    t2 = *(signed char *)0xC3045F1;
    if ((t2 == 4) && (t0 = *(signed char *)0xC3045F2, t0 != 0)) {
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct o28_float *)(a4))->v) = 170.0f;
        (((struct o2C_float *)(a4))->v) = -28.0f;
        t0 = 0x2C;
    } else {
        if ((t2 == 5) && (t0 = *(signed char *)0xC3045F2, t0 != 0)) {
            (((struct oA8_uchar *)(a4))->v) = 0x1;
            (((struct o28_float *)(a4))->v) = 170.0f;
            (((struct o2C_float *)(a4))->v) = -82.0f;
            t0 = 0x2C;
        } else {
            (((struct oA8_uchar *)(a4))->v) = 0x0;
            t0 = 0xA8;
        }
    }
    return t0;
}

int FUN_0c014a68(void)
{
    register int t2;

    (((struct o0_uchar *)0xC3045F0)->v) = 0x0;
    (((struct o2_uchar *)0xC3045F0)->v) = 0x0;
    (((struct o1_uchar *)0xC3045F0)->v) = 0x0;
    (((struct o4_uchar *)0xC3045F0)->v) = 0x0;
    FUN_0c01e9e4();
    if ((*(signed char *)0xC30A404) != 0) {
        t2 = FUN_0c187d88(0xC30A404);
        if (t2 == 6) {
            *(unsigned char *)0xC20BB54 = 0x1;
        } else {
            *(unsigned char *)0xC20BB54 = 0x0;
        }
    } else {
        *(unsigned char *)0xC20BB54 = 0x0;
    }
    return FUN_0c187a88(0xC304610, 0xC30A51E, 0x514);
}

int FUN_0c014ab0(void)
{
    register int t1;
    register int t3;
    register int t17;
    register int t18;
    register int t22;
    register int t27;
    register int t33;
    register int t35;
    register int t43;
    register int t58;
    int t23;
    int t28;
    int t34;
    int t36;

    if ((*(signed char *)0xC3045F2) != 0) {
        t1 = FUN_0c015b58();
        t58 = t1;
        if (t1 != 0) {
            (((struct o1_uchar *)0xC3045F1)->v) = 0x0;
            if ((*(signed char *)0xC30A404) != 0) {
                t3 = FUN_0c187d88(0xC30A404);
                if (t3 == 6) {
                    *(unsigned char *)0xC20BB54 = 0x1;
                } else {
                    *(unsigned char *)0xC20BB54 = 0x0;
                }
            } else {
                *(unsigned char *)0xC20BB54 = 0x0;
            }
            t58 = (FUN_0c05aab6(0x0, 0x3));
        }
    } else {
        t17 = FUN_0c01ccba();
        if ((short)t17 == 0) {
            t18 = FUN_0c01599c();
            if (t18 != 0) {
                (((struct o1_uchar *)0xC3045F1)->v) = ((*(signed char *)0xC3045F2) + 0x1);
                FUN_0c05aab6(0x0, 0x3);
                t58 = (FUN_0c0159c4(0x0, 0x0, 0xC30A404, 0x6, 0x6));
            } else {
                t22 = FUN_0c01cd2c(0x2000);
                if (((short)t22 == 0) && (t23 = *(signed char *)0xC30EF9E, (unsigned char)t23 != 82)) {
                } else {
                    (((struct o0_uchar *)0xC3045F1)->v) = 0x2;
                    FUN_0c05aab6(0x0, 0x6);
                }
                t27 = FUN_0c01cd2c(0x1000);
                if (((short)t27 == 0) && (t28 = *(signed char *)0xC30EF9E, (unsigned char)t28 != 81)) {
                } else {
                    (((struct o0_uchar *)0xC3045F1)->v) = ((*(signed char *)0xC3045F1) + 0x1);
                    FUN_0c05aab6(0x0, 0x6);
                }
                t33 = FUN_0c01cd2c(0x800);
                if (((short)t33 == 0) && (t34 = *(signed char *)0xC30EF9E, (unsigned char)t34 != 80)) {
                    t35 = FUN_0c01cd2c(0x400);
                    if (((short)t35 == 0) && (t36 = *(signed char *)0xC30EF9E, (unsigned char)t36 != 79)) {
                    } else {
                        (((struct o0_uchar *)0xC3045F1)->v) = 0x4;
                        FUN_0c05aab6(0x0, 0x5);
                    }
                } else {
                    (((struct o0_uchar *)0xC3045F1)->v) = 0x4;
                    FUN_0c05aab6(0x0, 0x5);
                }
                t43 = FUN_0c01ccda();
                t58 = (short)t43;
                if ((short)t43 != 0) {
                    (((struct o0_uchar *)0xC3045F1)->v) = 0x3;
                    t58 = (FUN_0c05aab6(0x0, 0x3));
                }
            }
        } else {
            (((struct o1_uchar *)0xC3045F1)->v) = ((*(signed char *)0xC3045F2) + 0x1);
            FUN_0c05aab6(0x0, 0x3);
            t58 = (FUN_0c0159c4(0x0, 0x0, 0xC30A404, 0x6, 0x6));
        }
    }
    return t58;
}

int FUN_0c014c3c(void)
{
    register int t1;
    register int t5;
    register int t6;
    register int t10;
    register int t16;
    register int t22;
    register int t24;
    register int t32;
    register int t47;
    int t11;
    int t17;
    int t23;
    int t25;

    if ((*(signed char *)0xC3045F2) != 0) {
        t1 = FUN_0c015b58();
        t47 = t1;
        if (t1 != 0) {
            (((struct o1_uchar *)0xC3045F1)->v) = 0x0;
            t47 = (FUN_0c05aab6(0x0, 0x3));
        }
    } else {
        t5 = FUN_0c01ccba();
        if ((short)t5 == 0) {
            t6 = FUN_0c01599c();
            if (t6 != 0) {
                (((struct o1_uchar *)0xC3045F1)->v) = ((*(signed char *)0xC3045F2) + 0x1);
                FUN_0c05aab6(0x0, 0x3);
                t47 = (FUN_0c0159c4(0x0, 0x0, 0xC309D86, 0x30, 0x3));
            } else {
                t10 = FUN_0c01cd2c(0x2000);
                if (((short)t10 == 0) && (t11 = *(signed char *)0xC30EF9E, (unsigned char)t11 != 82)) {
                } else {
                    (((struct o0_uchar *)0xC3045F1)->v) = ((*(signed char *)0xC3045F1) - 1);
                    FUN_0c05aab6(0x0, 0x6);
                }
                t16 = FUN_0c01cd2c(0x1000);
                if (((short)t16 == 0) && (t17 = *(signed char *)0xC30EF9E, (unsigned char)t17 != 81)) {
                } else {
                    (((struct o0_uchar *)0xC3045F1)->v) = ((*(signed char *)0xC3045F1) + 0x1);
                    FUN_0c05aab6(0x0, 0x6);
                }
                t22 = FUN_0c01cd2c(0x400);
                if (((short)t22 == 0) && (t23 = *(signed char *)0xC30EF9E, (unsigned char)t23 != 79)) {
                    t24 = FUN_0c01cd2c(0x800);
                    if (((short)t24 == 0) && (t25 = *(signed char *)0xC30EF9E, (unsigned char)t25 != 80)) {
                    } else {
                        (((struct o0_uchar *)0xC3045F1)->v) = 0x5;
                        FUN_0c05aab6(0x0, 0x5);
                    }
                } else {
                    (((struct o0_uchar *)0xC3045F1)->v) = 0x5;
                    FUN_0c05aab6(0x0, 0x5);
                }
                t32 = FUN_0c01ccda();
                t47 = (short)t32;
                if ((short)t32 != 0) {
                    (((struct o0_uchar *)0xC3045F1)->v) = 0x3;
                    t47 = (FUN_0c05aab6(0x0, 0x3));
                }
            }
        } else {
            (((struct o1_uchar *)0xC3045F1)->v) = ((*(signed char *)0xC3045F2) + 0x1);
            FUN_0c05aab6(0x0, 0x3);
            t47 = (FUN_0c0159c4(0x0, 0x0, 0xC309D86, 0x30, 0x3));
        }
    }
    return t47;
}

int FUN_0c014d78(int a4, int a5)
{

    register int R1;
    register int R2;
    register int R3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    v0_0 = a5;
    v0_4 = *(signed char *)0xC3045F2;
    v0_2 = (v0_4);
    v0_0 = (0xC018E74);
    v0_3 = (0xC3045FC);
    v0_1 = (0xC3045F2);
    v0_0 = (0xC3045F8);
    if ((v0_4 == 0)) goto L_C014E18;
    if ((v0_2 != 1)) goto L_C014D9C;
    v0_3 = *(int *)((v0_0 + 0x0));
    *(unsigned int *)((v0_0 + 0x0)) = (v0_3 - 1);
    if (((int)(v0_3 - 1) <= 0)) goto L_C014FE4;
    L_C015000:;
    return v0_2;
    L_C014FE4:;
    *(unsigned char *)((v0_1 + 0x0)) = ((*(signed char *)((v0_1 + 0x0))) + 0x1);
    goto L_C015000;
    L_C014D9C:;
    if ((v0_2 != 2)) goto L_C014DA4;
    *(unsigned char *)((v0_1 + 0x0)) = ((*(signed char *)((v0_1 + 0x0))) + 0x1);
    L_C014F38:;
    *(unsigned char *)((v0_1 + 0x0)) = 0x4;
    L_C014F3C:;
    v0_4 = FUN_0c015906();
    v0_2 = ((signed char)v0_4);
    if (((signed char)v0_4 == 0)) goto L_C015000;
    if ((v0_2 == 1)) goto L_C014F56;
    if ((v0_2 == 2)) goto L_C014F5C;
    if ((v0_2 == 5)) goto L_C014F7C;
    *(unsigned char *)((v0_1 + 0x0)) = 0x5;
    goto L_C015000;
    L_C014F7C:;
    *(unsigned char *)((v0_1 + 0x0)) = 0x10;
    L_C014F80:;
    v0_1 = FUN_0c018fd2((*(signed char *)((v0_3 + 0x0))));
    *(unsigned int *)((v0_0 + 0x0)) = 0x10;
    v0_2 = (v0_1);
    goto L_C015000;
    L_C014F5C:;
    *(unsigned char *)((v0_1 + 0x0)) = 0x30;
    goto L_C014F80;
    L_C014F56:;
    *(unsigned char *)((v0_1 + 0x0)) = 0x20;
    goto L_C014F80;
    L_C014DA4:;
    if ((v0_2 != 3)) goto L_C014DAC;
    goto L_C014F38;
    L_C014DAC:;
    if ((v0_2 != 4)) goto L_C014DB4;
    goto L_C014F3C;
    L_C014DB4:;
    if ((v0_2 != 5)) goto L_C014DBC;
    *(unsigned char *)((v0_1 + 0x0)) = ((*(signed char *)((v0_1 + 0x0))) + 0x1);
    goto L_C015000;
    L_C014DBC:;
    if ((v0_2 != 6)) goto L_C014DC4;
    goto L_C015000;
    L_C014DC4:;
    if ((v0_2 != 7)) goto L_C014DCC;
    goto L_C015000;
    L_C014DCC:;
    if ((v0_2 != 8)) goto L_C014DD4;
    goto L_C015000;
    L_C014DD4:;
    if ((v0_2 != 16)) goto L_C014DDC;
    if (((*(signed char *)0xC30985B) != 0)) goto L_C014FE4;
    *(unsigned char *)((v0_1 + 0x0)) = 0x40;
    goto L_C015000;
    L_C014DDC:;
    if ((v0_2 != 17)) goto L_C014DE4;
    v0_4 = *(int *)((v0_0 + 0x0));
    *(unsigned int *)((v0_0 + 0x0)) = (v0_4 - 1);
    if (((int)(v0_4 - 1) > 0)) goto L_C015000;
    v0_2 = (0x1A);
    L_C014FDC:;
    *(unsigned char *)((v0_3 + 0x0)) = v0_2;
    v0_2 = ((FUN_0c018e74(v0_2)));
    L_C014FE0:;
    *(unsigned int *)((v0_0 + 0x0)) = 0x12C;
    goto L_C014FE4;
    L_C014DE4:;
    if ((v0_2 != 18)) goto L_C014DEC;
    goto L_C015000;
    L_C014DEC:;
    if ((v0_2 != 32)) goto L_C014DF4;
    v0_4 = *(int *)((v0_0 + 0x0));
    *(unsigned int *)((v0_0 + 0x0)) = (v0_4 - 1);
    if (((int)(v0_4 - 1) > 0)) goto L_C015000;
    *(unsigned char *)((v0_3 + 0x0)) = 0xE;
    v0_2 = ((FUN_0c018e74(0xE)));
    goto L_C014FE0;
    L_C014DF4:;
    if ((v0_2 != 33)) goto L_C014DFC;
    goto L_C015000;
    L_C014DFC:;
    if ((v0_2 != 48)) goto L_C014E04;
    v0_4 = *(int *)((v0_0 + 0x0));
    *(unsigned int *)((v0_0 + 0x0)) = (v0_4 - 1);
    if (((int)(v0_4 - 1) > 0)) goto L_C015000;
    v0_2 = (0x43);
    goto L_C014FDC;
    L_C014E04:;
    if ((v0_2 != 49)) goto L_C014E0C;
    goto L_C015000;
    L_C014E0C:;
    if ((v0_2 != 64)) goto L_C014E14;
    v0_3 = *(int *)((v0_0 + 0x0));
    *(unsigned int *)((v0_0 + 0x0)) = (v0_3 - 1);
    if (((int)(v0_3 - 1) > 0)) goto L_C015000;
    *(unsigned char *)((v0_1 + 0x0)) = 0x0;
    *(unsigned char *)0xC3045F0 = 0x0;
    goto L_C015000;
    L_C014E14:;
    goto L_C015000;
    L_C014E18:;
    v0_2 = (0xC05AAB6);
    if (((*(signed char *)0xC20BB54) == 0)) goto L_C014E7C;
    v0_2 = FUN_0c01ccba();
    if (((short)v0_2 == 0)) goto L_C014E7C;
    *(unsigned char *)((v0_1 + 0x0)) = ((*(signed char *)((v0_1 + 0x0))) + 0x1);
    FUN_0c05aab6(0x0, 0x3);
    *(unsigned char *)((v0_3 + 0x0)) = 0x35;
    FUN_0c018e74(0x35);
    *(unsigned int *)((v0_0 + 0x0)) = 0x14;
    return FUN_0c027048();
    L_C014E7C:;
    v0_2 = FUN_0c01cd2c(0x2000);
    v0_1 = (0xC01CD2C);
    v0_0 = (0xC3045F1);
    if (((short)v0_2 != 0)) goto L_C014E98;
    if (((unsigned char)(*(signed char *)0xC30EF9E) != 82)) goto L_C014EA4;
    L_C014E98:;
    *(unsigned char *)((v0_0 + 0x0)) = ((*(signed char *)((v0_0 + 0x0))) - 1);
    FUN_0c05aab6(0x0, 0x6);
    L_C014EA4:;
    v0_1 = FUN_0c01cd2c(0x1000);
    if (((short)v0_1 != 0)) goto L_C014EBC;
    if (((unsigned char)(*(signed char *)0xC30EF9E) != 81)) goto L_C014EC6;
    L_C014EBC:;
    *(unsigned char *)((v0_0 + 0x0)) = 0x0;
    FUN_0c05aab6(0x0, 0x6);
    L_C014EC6:;
    v0_1 = FUN_0c01cd2c(0x800);
    if (((short)v0_1 != 0)) goto L_C014EF6;
    if (((unsigned char)(*(signed char *)0xC30EF9E) == 80)) goto L_C014EF6;
    v0_1 = FUN_0c01cd2c(0x400);
    if (((short)v0_1 != 0)) goto L_C014EF6;
    if (((unsigned char)(*(signed char *)0xC30EF9E) != 79)) goto L_C014F02;
    L_C014EF6:;
    *(unsigned char *)((v0_0 + 0x0)) = ((*(signed char *)((v0_0 + 0x0))) + 0x1);
    FUN_0c05aab6(0x0, 0x5);
    L_C014F02:;
    v0_1 = FUN_0c01ccda();
    v0_2 = ((short)v0_1);
    if (((short)v0_1 != 0)) goto L_C014F14;
    goto L_C015000;
    L_C014F14:;
    *(unsigned char *)((v0_0 + 0x0)) = 0x3;
    v0_2 = ((FUN_0c05aab6(0x0, 0x3)));
    goto L_C015000;
}

int FUN_0c015010(int a4)
{
    register int t0;
    register int t6;
    register int t9;
    register int t11;
    register int t21;
    register int t26;
    int t10;
    int t12;
    int t22;
    int t27;
    register int t29;

    t0 = *(signed char *)0xC3045F2;
    if (t0 != 0) {
        if (t0 != 1) {
            (((struct o0_uchar *)0xC3045F0)->v) = ((*(signed char *)0xC3045F0) + 0x1);
        } else {
            (((struct o2_uchar *)0xC3045F0)->v) = ((*(signed char *)0xC3045F2) + 0x1);
        }
        return t0;
    }
    t6 = FUN_0c01ccba();
    if ((short)t6 != 0) {
        (((struct o2_uchar *)0xC3045F0)->v) = ((*(signed char *)0xC3045F2) + 0x1);
        FUN_0c05aab6(0x0, 0x3);
        *(unsigned char *)0xC30542B = 0x0;
        return FUN_0c187a88(0xC30A51E, 0xC304610, 0x514);
    }
    t9 = FUN_0c01cd2c(0x800);
    if (((short)t9 == 0) && (t10 = *(signed char *)0xC30EF9E, (unsigned char)t10 != 80)) {
        t11 = FUN_0c01cd2c(0x400);
        if (((short)t11 == 0) && (t12 = *(signed char *)0xC30EF9E, (unsigned char)t12 != 79)) {
        } else {
            (((struct o1_uchar *)0xC3045F0)->v) = ((*(signed char *)0xC3045F1) - 1);
            FUN_0c05aab6(0x0, 0x5);
        }
    } else {
        (((struct o1_uchar *)0xC3045F0)->v) = ((*(signed char *)0xC3045F1) - 1);
        FUN_0c05aab6(0x0, 0x5);
    }
    t21 = FUN_0c01cd2c(0x2000);
    if (((short)t21 == 0) && (t22 = *(signed char *)0xC30EF9E, (unsigned char)t22 != 82)) {
    } else {
        (((struct o1_uchar *)0xC3045F0)->v) = 0x1;
        FUN_0c05aab6(0x0, 0x6);
    }
    t26 = FUN_0c01cd2c(0x1000);
    if (((short)t26 == 0) && (t27 = *(signed char *)0xC30EF9E, (unsigned char)t27 != 81)) {
        t29 = (unsigned char)t27;
    } else {
        (((struct o1_uchar *)0xC3045F0)->v) = 0x0;
        t29 = (FUN_0c05aab6(0x0, 0x6));
    }
    return t29;
}

int FUN_0c015130(void)
{

    register int R1;
    register int R3;
    register int R5;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    v0_2 = *(signed char *)0xC3045F2;
    v0_5 = (v0_2);
    v0_7 = (0xC05AAB6);
    v0_1 = (0x0);
    v0_0 = (0xC3045F3);
    v0_3 = (0xC01CD2C);
    if ((v0_2 == 0)) goto L_C01515E;
    if ((v0_5 != 1)) goto L_C01515A;
    L_C01525E:;
    v0_5 = FUN_0c01ccba();
    v0_2 = (0x1A);
    v0_3 = (0xC3045F4);
    v0_4 = (0xC304610);
    if (((short)v0_5 == 0)) goto L_C0152FC;
    if (((*(signed char *)(((((*(signed char *)0xC3045F4) + (*(signed char *)0xC3045F3)) * 0x1A) + 0xC304610))) == 0)) goto L_C0152FC;
    *(unsigned char *)0xC3045F2 = v0_1;
    FUN_0c05aab6(0x0, 0x3);
    strcpy(0xC30A404, ((((*(signed char *)((v0_3 + 0x0))) + (*(signed char *)((v0_0 + 0x0)))) * v0_2) + v0_4));
    v0_7 = (0xC30A404);
    if (((*(signed char *)0xC30A404) == 0)) goto L_C0152BE;
    v0_0 = FUN_0c187d88(v0_7);
    v0_5 = (v0_0);
    if ((v0_0 != 6)) goto L_C0152BE;
    *(unsigned char *)0xC20BB54 = 0x1;
    L_C015402:;
    return v0_5;
    L_C0152BE:;
    *(unsigned char *)0xC20BB54 = v0_1;
    v0_5 = (0xC20BB54);
    goto L_C015402;
    L_C0152FC:;
    v0_5 = FUN_0c01ccda();
    if (((short)v0_5 == 0)) goto L_C015318;
    *(unsigned char *)0xC3045F2 = v0_1;
    v0_5 = ((FUN_0c05aab6(0x0, 0x4)));
    goto L_C015402;
    L_C015318:;
    v0_5 = FUN_0c01cd2c(0x2000);
    if (((short)v0_5 != 0)) goto L_C015330;
    if (((unsigned char)(*(signed char *)0xC30EF9E) != 82)) goto L_C015384;
    L_C015330:;
    *(unsigned char *)((v0_0 + 0x0)) = ((*(signed char *)((v0_0 + 0x0))) - 1);
    FUN_0c05aab6(0x0, 0x6);
    if (((int)(*(signed char *)((v0_0 + 0x0))) >= 0)) goto L_C015384;
    if (((*(signed char *)((v0_3 + 0x0))) != 0)) goto L_C01537C;
    v0_5 = (v0_1);
    L_C01534A:;
    if (((*(signed char *)((((v0_5 * v0_2) + v0_4) + 0x0))) == 0)) goto L_C01535E;
    v0_6 = (int)(v0_5 + 0x1) < (int)0x32;
    v0_5 = ((v0_5 + 0x1));
    if (v0_6) goto L_C01534A;
    L_C01535E:;
    if (((int)v0_5 >= (int)0x3)) goto L_C015372;
    if ((v0_5 != 0)) goto L_C01536C;
    v0_5 = (0x0);
    L_C015378:;
    *(unsigned char *)((v0_0 + 0x0)) = v0_5;
    L_C015384:;
    v0_5 = FUN_0c01cd2c(0x1000);
    if (((short)v0_5 != 0)) goto L_C01539C;
    v0_6 = *(signed char *)0xC30EF9E;
    v0_5 = ((unsigned char)v0_6);
    if (((unsigned char)v0_6 != 81)) goto L_C015402;
    L_C01539C:;
    *(unsigned char *)((v0_0 + 0x0)) = ((*(signed char *)((v0_0 + 0x0))) + 0x1);
    v0_7 = *(signed char *)((v0_0 + 0x0));
    v0_8 = *(signed char *)((v0_3 + 0x0));
    v0_6 = (int)(*(signed char *)((v0_0 + 0x0))) <= (int)0x2;
    v0_5 = ((FUN_0c05aab6(0x0, 0x6)));
    v0_7 = ((v0_8 + v0_7));
    if (v0_6) goto L_C0153F0;
    if (((int)v0_7 >= (int)0x32)) goto L_C0153CA;
    v0_5 = ((v0_7 * 0x1A));
    if (!(((*(signed char *)((0xC304610 + (v0_7 * 0x1A)))) != 0))) goto L_C0153CA;
    *(unsigned char *)((v0_0 + 0x0)) = 0x2;
    *(unsigned char *)((v0_3 + 0x0)) = ((*(signed char *)((v0_3 + 0x0))) + 0x1);
    goto L_C015402;
    L_C0153CA:;
    *(unsigned char *)((v0_0 + 0x0)) = v0_1;
    *(unsigned char *)((v0_3 + 0x0)) = v0_1;
    goto L_C015402;
    L_C0153F0:;
    if (((*(signed char *)((((v0_7 * v0_2) + v0_4) + 0x0))) != 0)) goto L_C015402;
    v0_1 = *(signed char *)((v0_0 + 0x0));
    *(unsigned char *)((v0_0 + 0x0)) = (v0_1 - 1);
    v0_5 = ((v0_1 - 1));
    goto L_C015402;
    L_C01536C:;
    v0_5 = ((v0_5 - 1));
    goto L_C015378;
    L_C015372:;
    *(unsigned char *)((v0_3 + 0x0)) = (v0_5 - 3);
    v0_5 = (0x2);
    goto L_C015378;
    L_C01537C:;
    *(unsigned char *)((v0_3 + 0x0)) = ((*(signed char *)((v0_3 + 0x0))) - 1);
    *(unsigned char *)((v0_0 + 0x0)) = v0_1;
    goto L_C015384;
    L_C01515A:;
    goto L_C01525E;
    L_C01515E:;
    v0_2 = FUN_0c01ccba();
    if (((short)v0_2 == 0)) goto L_C0151C8;
    *(unsigned char *)0xC3045F2 = ((*(signed char *)0xC3045F2) + 0x1);
    FUN_0c05aab6(0x0, 0x3);
    *(unsigned char *)((v0_0 + 0x0)) = v0_1;
    return FUN_0c01cc56(0x3B, 0xC0147D4);
    L_C0151C8:;
    v0_2 = FUN_0c01cd2c(0x2000);
    v0_0 = (0xC3045F1);
    if (((short)v0_2 != 0)) goto L_C0151FA;
    if (((unsigned char)(*(signed char *)0xC30EF9E) == 82)) goto L_C0151FA;
    v0_2 = FUN_0c01cd2c(0x1000);
    if (((short)v0_2 != 0)) goto L_C0151FA;
    if (((unsigned char)(*(signed char *)0xC30EF9E) != 81)) goto L_C015206;
    L_C0151FA:;
    *(unsigned char *)((v0_0 + 0x0)) = ((*(signed char *)((v0_0 + 0x0))) + 0x1);
    FUN_0c05aab6(0x0, 0x6);
    L_C015206:;
    v0_2 = FUN_0c01cd2c(0x800);
    if (((short)v0_2 != 0)) goto L_C015236;
    if (((unsigned char)(*(signed char *)0xC30EF9E) == 80)) goto L_C015236;
    v0_2 = FUN_0c01cd2c(0x400);
    if (((short)v0_2 != 0)) goto L_C015236;
    if (((unsigned char)(*(signed char *)0xC30EF9E) != 79)) goto L_C01523E;
    L_C015236:;
    *(unsigned char *)((v0_0 + 0x0)) = v0_1;
    FUN_0c05aab6(0x0, 0x5);
    L_C01523E:;
    v0_1 = FUN_0c01ccda();
    v0_5 = ((short)v0_1);
    if (((short)v0_1 != 0)) goto L_C015250;
    goto L_C015402;
    L_C015250:;
    *(unsigned char *)((v0_0 + 0x0)) = 0x3;
    v0_5 = ((FUN_0c05aab6(0x0, 0x3)));
    goto L_C015402;
}

int FUN_0c015416(int a4, int a5, int a6)
{
    int stk[4];

    register int R3;
    register int T_;
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
    v0_7 = a4;
    v0_9 = a5;
    v0_10 = a6;
    v0_11 = *(signed char *)0xC3045F2;
    v0_6 = (v0_11);
    v0_2 = (0x1A);
    v0_4 = (0xC3045F2);
    v0_5 = (0xC3045F4);
    v0_1 = (0x0);
    v0_0 = (0xC3045F3);
    v0_8 = (0xC05AAB6);
    v0_3 = (0xC304610);
    if ((v0_11 == 0)) goto L_C015458;
    if ((v0_6 != 1)) goto L_C015444;
    v0_6 = FUN_0c01ccba();
    *(unsigned short *)(((int)stk + 0)) = v0_6;
    if (((short)v0_6 == 0)) goto L_C0155E8;
    if (((*(signed char *)(((((*(signed char *)0xC3045F4) + (*(signed char *)0xC3045F3)) * 0x1A) + 0xC304610))) == 0)) goto L_C0155E8;
    *(unsigned char *)((v0_4 + 0x0)) = ((*(signed char *)((v0_4 + 0x0))) + 0x1);
    FUN_0c05aab6(0x0, 0x3);
    *(unsigned char *)0xC3045FC = 0x1;
    *(unsigned char *)0xC30542B = v0_1;
    return FUN_0c018f90(0x3C, 0xC3045FC, ((((*(signed char *)((v0_5 + 0x0))) + (*(signed char *)((v0_0 + 0x0)))) * v0_2) + v0_3));
    L_C0155E8:;
    v0_6 = FUN_0c01ccda();
    *(unsigned short *)(((int)stk + 0)) = v0_6;
    if (((short)v0_6 == 0)) goto L_C015602;
    *(unsigned char *)((v0_4 + 0x0)) = v0_1;
    v0_6 = ((FUN_0c05aab6(0x0, 0x4)));
    L_C0157F4:;
    return v0_6;
    L_C015602:;
    v0_6 = FUN_0c01cd2c(0x2000);
    *(unsigned short *)(((int)stk + 0)) = v0_6;
    v0_4 = (0x32);
    if (((short)v0_6 != 0)) goto L_C01561C;
    if (((unsigned char)(*(signed char *)0xC30EF9E) != 82)) goto L_C01566C;
    L_C01561C:;
    *(unsigned char *)((v0_0 + 0x0)) = ((*(signed char *)((v0_0 + 0x0))) - 1);
    FUN_0c05aab6(0x0, 0x6);
    if (((int)(*(signed char *)((v0_0 + 0x0))) >= 0)) goto L_C01566C;
    v0_6 = *(signed char *)((v0_5 + 0x0));
    v0_7 = (v0_6);
    if ((v0_6 != 0)) goto L_C015666;
    v0_7 = (v0_1);
    L_C015636:;
    if (((*(signed char *)((((v0_7 * v0_2) + v0_3) + 0x0))) == 0)) goto L_C015648;
    v0_6 = (int)(v0_7 + 0x1) < (int)v0_4;
    v0_7 = ((v0_7 + 0x1));
    if (v0_6) goto L_C015636;
    L_C015648:;
    if (((int)v0_7 >= (int)0x3)) goto L_C01565C;
    if ((v0_7 != 0)) goto L_C015656;
    v0_6 = (0x0);
    L_C015662:;
    *(unsigned char *)((v0_0 + 0x0)) = v0_6;
    L_C01566C:;
    v0_6 = FUN_0c01cd2c(0x1000);
    *(unsigned short *)(((int)stk + 0)) = v0_6;
    if (((short)v0_6 != 0)) goto L_C01568A;
    v0_7 = *(signed char *)0xC30EF9E;
    v0_6 = ((unsigned char)v0_7);
    if (((unsigned char)v0_7 == 81)) goto L_C01568A;
    goto L_C0157F4;
    L_C01568A:;
    *(unsigned char *)((v0_0 + 0x0)) = ((*(signed char *)((v0_0 + 0x0))) + 0x1);
    v0_8 = *(signed char *)((v0_0 + 0x0));
    v0_9 = *(signed char *)((v0_5 + 0x0));
    v0_7 = (int)(*(signed char *)((v0_0 + 0x0))) <= (int)0x2;
    v0_6 = ((FUN_0c05aab6(0x0, 0x6)));
    v0_8 = ((v0_9 + v0_8));
    if (v0_7) goto L_C0156DC;
    if (((int)v0_8 >= (int)v0_4)) goto L_C0156B6;
    v0_6 = (0xC304610);
    if (!(((*(signed char *)(((v0_8 * 0x1A) + 0xC304610))) != 0))) goto L_C0156B6;
    *(unsigned char *)((v0_0 + 0x0)) = 0x2;
    *(unsigned char *)((v0_5 + 0x0)) = ((*(signed char *)((v0_5 + 0x0))) + 0x1);
    goto L_C0157F4;
    L_C0156B6:;
    *(unsigned char *)((v0_0 + 0x0)) = v0_1;
    *(unsigned char *)((v0_5 + 0x0)) = v0_1;
    goto L_C0157F4;
    L_C0156DC:;
    if (((*(signed char *)((((v0_8 * v0_2) + v0_3) + 0x0))) == 0)) goto L_C0156EC;
    goto L_C0157F4;
    L_C0156EC:;
    v0_1 = *(signed char *)((v0_0 + 0x0));
    *(unsigned char *)((v0_0 + 0x0)) = (v0_1 - 1);
    v0_6 = ((v0_1 - 1));
    goto L_C0157F4;
    L_C015656:;
    v0_6 = ((v0_7 - 1));
    goto L_C015662;
    L_C01565C:;
    *(unsigned char *)((v0_5 + 0x0)) = (v0_7 - 3);
    v0_6 = (0x2);
    goto L_C015662;
    L_C015666:;
    *(unsigned char *)((v0_5 + 0x0)) = (v0_7 - 1);
    *(unsigned char *)((v0_0 + 0x0)) = v0_1;
    goto L_C01566C;
    L_C015444:;
    if ((v0_6 != 2)) goto L_C01544C;
    v0_6 = FUN_0c01cd2c(0x101);
    *(unsigned short *)(((int)stk + 0)) = v0_6;
    if (((short)v0_6 == 0)) goto L_C015778;
    FUN_0c018fd2(0x3C);
    v0_7 = (*(signed char *)0xC3045FC) != 0;
    v0_6 = ((FUN_0c05aab6(0x0, 0x3)));
    if (v0_7) goto L_C0157C4;
    *(unsigned char *)((v0_4 + 0x0)) = ((*(signed char *)((v0_4 + 0x0))) + 0x1);
    v0_0 = *(signed char *)((v0_0 + 0x0));
    *(unsigned int *)(((int)stk + 4)) = v0_0;
    v0_4 = *(signed char *)((v0_5 + 0x0));
    *(unsigned int *)(((int)stk + 8)) = v0_4;
    v0_5 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 12)) = (((v0_5 + v0_4) * v0_2) + v0_3);
    FUN_0c187a88((*(int *)(((int)stk + 12))), ((((v0_5 + v0_4) * v0_2) + v0_3) + 0x1A), (((v0_0 - v0_4) + 0x32) * v0_2));
    (((struct o4FA_uchar *)(v0_3))->v) = v0_1;
    *(unsigned char *)(((0x4FA + v0_3) + 0x8)) = v0_1;
    *(unsigned char *)0xC30542B = v0_1;
    FUN_0c187a88(0xC30A51E, v0_3, 0x514);
    FUN_0c01d094();
    return FUN_0c01d27a();
    L_C0157C4:;
    *(unsigned char *)((v0_4 + 0x0)) = v0_1;
    *(unsigned char *)0xC30542B = 0x1;
    goto L_C0157F4;
    L_C015778:;
    return FUN_0c01c714(0xC3045FC, 0x1, 0x0);
    L_C01544C:;
    if ((v0_6 != 3)) goto L_C015454;
    v0_0 = FUN_0c01e5dc(v0_7, v0_9, v0_10);
    v0_6 = (v0_0);
    v0_7 = (v0_0);
    if ((v0_0 == 0)) goto L_C0157F4;
    v0_6 = (v0_7);
    if ((v0_7 != -3)) goto L_C0157C4;
    *(unsigned char *)((v0_4 + 0x0)) = ((*(signed char *)((v0_4 + 0x0))) + 0x1);
    return FUN_0c029c9e();
    L_C015454:;
    v0_0 = FUN_0c029caa();
    v0_6 = (v0_0);
    if ((v0_0 == 0)) goto L_C0157F4;
    *(unsigned char *)0xC30542B = 0x1;
    return FUN_0c010448();
    L_C015458:;
    v0_2 = FUN_0c01ccba();
    *(unsigned short *)(((int)stk + 0)) = v0_2;
    if (((short)v0_2 == 0)) goto L_C0154B0;
    *(unsigned char *)((v0_4 + 0x0)) = ((*(signed char *)((v0_4 + 0x0))) + 0x1);
    *(unsigned char *)((v0_0 + 0x0)) = v0_1;
    FUN_0c05aab6(0x0, 0x3);
    return FUN_0c01cc56(0x3B, 0xC0147D4);
    L_C0154B0:;
    v0_1 = FUN_0c01cd2c(0x2000);
    *(unsigned short *)(((int)stk + 0)) = v0_1;
    v0_0 = (0xC3045F1);
    if (((short)v0_1 != 0)) goto L_C0154E6;
    if (((unsigned char)(*(signed char *)0xC30EF9E) == 82)) goto L_C0154E6;
    v0_1 = FUN_0c01cd2c(0x1000);
    *(unsigned short *)(((int)stk + 0)) = v0_1;
    if (((short)v0_1 != 0)) goto L_C0154E6;
    if (((unsigned char)(*(signed char *)0xC30EF9E) != 81)) goto L_C0154F2;
    L_C0154E6:;
    *(unsigned char *)((v0_0 + 0x0)) = ((*(signed char *)((v0_0 + 0x0))) - 1);
    FUN_0c05aab6(0x0, 0x6);
    L_C0154F2:;
    v0_1 = FUN_0c01cd2c(0x400);
    *(unsigned short *)(((int)stk + 0)) = v0_1;
    if (((short)v0_1 != 0)) goto L_C015526;
    if (((unsigned char)(*(signed char *)0xC30EF9E) == 79)) goto L_C015526;
    v0_1 = FUN_0c01cd2c(0x800);
    *(unsigned short *)(((int)stk + 0)) = v0_1;
    if (((short)v0_1 != 0)) goto L_C015526;
    if (((unsigned char)(*(signed char *)0xC30EF9E) != 80)) goto L_C015530;
    L_C015526:;
    *(unsigned char *)((v0_0 + 0x0)) = 0x1;
    FUN_0c05aab6(0x0, 0x5);
    L_C015530:;
    v0_1 = FUN_0c01ccda();
    *(unsigned short *)(((int)stk + 0)) = v0_1;
    v0_6 = ((short)v0_1);
    if (((short)v0_1 != 0)) goto L_C015542;
    goto L_C0157F4;
    L_C015542:;
    *(unsigned char *)((v0_0 + 0x0)) = 0x3;
    v0_6 = ((FUN_0c05aab6(0x0, 0x3)));
    goto L_C0157F4;
}

int FUN_0c015844(void)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)0xC3045F0;
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    *(unsigned char *)0xC30542B = 0x1;
                    return FUN_0c0270d6();
                }
            } else {
                (((struct o0_uchar *)0xC3045F0)->v) = ((*(signed char *)0xC3045F0) + 0x1);
                (((struct o8_uint *)0xC3045F0)->v) = 0x14;
                t0 = FUN_0c0573cc(0xFF000000, 0x0, 0x14);
            }
            t1 = (((struct o8_int *)0xC3045F0)->v);
            (((struct o8_uint *)0xC3045F0)->v) = (t1 - 1);
            if ((int)(t1 - 1) <= 0) {
                (((struct o0_uchar *)0xC3045F0)->v) = ((*(signed char *)0xC3045F0) + 0x1);
            }
            return t0;
        }
    } else {
        (((struct o0_uchar *)0xC3045F0)->v) = ((*(signed char *)0xC3045F0) + 0x1);
        FUN_0c01cb7c();
        FUN_0c01cc56(0x12, 0xC014040);
        t0 = FUN_0c01cc56(0x1A, 0xC014500);
        if (t0 != 0) {
            *(unsigned char *)((t0 + 0x3)) = 0x0;
        }
        t0 = FUN_0c01cc56(0x1B, 0xC014500);
        if (t0 != 0) {
            *(unsigned char *)((t0 + 0x3)) = 0x1;
        }
        FUN_0c01cc56(0x3A, 0xC0149E4);
        FUN_0c0185b4();
        FUN_0c0573c0(0xFF000000, 0x0, 0x14);
    }
    t0 = *(short *)0xC30A51C;
    if (t0 != 2) {
        t1 = *(int *)((((*(signed char *)0xC3045F1) << 2) + 0xC20BB58));
        return ((int (*)(void))(t1))();
    }
    (((struct o0_uchar *)0xC3045F0)->v) = ((*(signed char *)0xC3045F0) + 0x1);
    return t0;
}

int FUN_0c015906(void)
{
    register int t3;

    t3 = 0xFFFFFFFF;
    if ((int)(*(signed char *)0xC30985A) >= (int)0x2) {
    } else {
        t3 = (*(signed char *)0xC30A402);
    }
    return t3;
}

int FUN_0c01591c(void)
{
    if ((int)(*(signed char *)0xC309BE4) <= (int)0xE) {
        if ((int)((((struct o6_short *)0xC309C6C)->v)) <= (int)0x14) {
            if ((int)((((struct o0_short *)0xC309C6C)->v)) > (int)0xC) {
                return 0xFFFFFFFF;
            }
            return 0x0;
        }
        return 0xFFFFFFFF;
    }
    return 0xFFFFFFFF;
}
