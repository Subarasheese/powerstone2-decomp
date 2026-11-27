/* game/unsorted: functions 0C0122E4-0C013B92, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_uchar { unsigned char v; };
struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o18_uchar { char p[0x18]; unsigned char v; };
struct o19_uchar { char p[0x19]; unsigned char v; };
struct o1A_uchar { char p[0x1A]; unsigned char v; };
struct o1B_uchar { char p[0x1B]; unsigned char v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1C_uchar { char p[0x1C]; unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o24_float { char p[0x24]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o34_float { char p[0x34]; float v; };
struct o41C_uint { char p[0x41C]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
int FUN_0c0139bc(void);
int FUN_0c0159c4(int, int, int, int, int);
int FUN_0c015b58(void);
int FUN_0c018e74(int);
int FUN_0c018e9c(int, int);
int FUN_0c018fd2(int);
int FUN_0c01c714(int, int, int);
int FUN_0c01ca2a(int, int, int);
int FUN_0c01cb7c(void);
int FUN_0c01cc56(int, int);
int FUN_0c01cd2c(int);
int FUN_0c02b3ba(int, float, float, float);
int FUN_0c02b502(int);
int FUN_0c0573c0(int, int, int);
int FUN_0c0573cc(int, int, int);
int FUN_0c05aab6(int, int);
float math_pow_float(int, float, float);
float math_sin_angle16(int);
int memset(int, int, int);
int FUN_0c187cac(int, int, int, int, int, int);
int strcpy(int, int);
int strlen(int);
int FUN_0c0122e4(int a4);
int FUN_0c012c34(int a4);
int FUN_0c012cb8(int a4);
int FUN_0c0135bc(int a4);
int FUN_0c013746(int a4);
int FUN_0c013848(void);
int FUN_0c013aa6(void);
int FUN_0c013b20(int a4);
int FUN_0c013b44(int a4, int a5, int a6);
struct o16_short { char p[0x16]; short v; };
struct o16_ushort { char p[0x16]; unsigned short v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o423_uchar { char p[0x423]; unsigned char v; };
struct o5_uchar { char p[0x5]; unsigned char v; };
struct o7_uchar { char p[0x7]; unsigned char v; };
struct o8_uchar { char p[0x8]; unsigned char v; };
struct oA_uchar { char p[0xA]; unsigned char v; };
struct oB_uchar { char p[0xB]; unsigned char v; };


#define SBY(o) (*(signed char *)(a4 + (o)))
#define UBY(o) (*(unsigned char *)(a4 + (o)))
#define U16(o) (*(unsigned short *)(a4 + (o)))
/* manual: menu state machine of the title flow; states 1,4,3,7,8,61 share one timer shell, 2 and 5 one menu handler, 60 and 50 one wait; the nine sub-menu arms are one block over tables; the six registrations one loop; hand cases */
int FUN_0c0122e4(int a4)
{
    static const unsigned char rid[6] = { 0xE, 0x14, 0x15, 0xF, 0x14, 0x15 };
    static const int rcb[6] = { 0xC011AD0, 0xC011B04, 0xC011C08, 0xC011AD0, 0xC011CE8, 0xC011E66 };
    static const unsigned char kk[11] = { 0, 1, 2, 9, 3, 4, 5, 5, 7, 7, 8 };
    static const int kp[10] = { 0xC30AD64, 0xC30AD76, 0xC30ADF6, 0xC30AE76, 0xC30AF7A, 0xC30AEF6, 0, 0xC30AF0A, 0xC30AEB6, 0xC30AF7E };
    static const unsigned char kn[10] = { 0x10, 0xB, 0x7F, 0x3E, 2, 8, 0, 0x6E, 0x20, 8 };
    static const unsigned char kf[10] = { 3, 4, 1, 0, 4, 4, 0, 0, 0, 4 };
    int t0;
    int t7;
    int t8;
    int v;
    int k;
    int m;
    int go;
    int qa0;
    int qa1;

    qa1 = 0xC30EF9E;
    qa0 = 0xC30441C;
    t7 = *(unsigned char *)(a4);
    if (t7 == 0) {
        FUN_0c013848();
        FUN_0c01cb7c();
        for (k = 0; k < 6; k++) {
            t0 = FUN_0c01cc56(rid[k], rcb[k]);
            *(unsigned int *)(t0 + 0x41C) = a4;
            *(unsigned char *)(t0 + 0x423) = k >= 3;
        }
        UBY(0x19) = 0x0;
        UBY(0x5) = 0x0;
        UBY(0x7) = 0x0;
        UBY(0x8) = 0x0;
        UBY(0x4) = 0x0;
        UBY(0xA) = 0x0;
        UBY(0xB) = 0x0;
        UBY(0) = SBY(0) + 0x1;
        FUN_0c0573c0(0xFF000000, 0x0, 0x14);
        U16(0x16) = 0x14;
    } else if (t7 == 1 || t7 == 4 || t7 == 3 || t7 == 7 || t7 == 8 || t7 == 61) {
        t0 = *(short *)(a4 + 0x16);
        U16(0x16) = t0 - 1;
        if ((int)(short)(t0 - 1) < 0) {
            if (t7 == 3 || t7 == 7) {
                UBY(0x7) = 0x0;
                UBY(0x8) = 0x0;
                UBY(0xA) = (t7 == 3);
                UBY(0xB) = 0x0;
                UBY(0) = SBY(0) + 0x1;
                FUN_0c0573c0(0xFF000000, 0x0, 0xF);
                U16(0x16) = 0xF;
            } else if (t7 == 8) {
                UBY(0) = 0x2;
            } else if (t7 == 61) {
                UBY(0xA) = 0x2;
                UBY(0x5) = 0x1;
                UBY(0) = 0x0;
                FUN_0c0139bc();
            } else {
                UBY(0) = SBY(0) + 0x1;
            }
        }
        FUN_0c0135bc(t7 == 4 || t7 == 7 || t7 == 61);
    } else if (t7 == 2 || t7 == 5) {
        t8 = SBY(0xB);
        if (t8 != 0) {
            if (t8 == 2) {
                if (t7 == 5) {
                    t0 = SBY(0x8);
                    t8 = SBY(0x7);
                    v = t8 + (t0 << 1);
                    k = 4 + v;
                    if (v < 0 || v > 6) {
                        k = -1;
                    }
                } else {
                    v = SBY(0x8);
                    k = v;
                    if (v < 0 || v > 3) {
                        k = -1;
                    }
                }
                if (k >= 0) {
                    k = kk[k];
                    UBY(0xB) = 0x0;
                    UBY(0x2) = SBY(0);
                    UBY(0x3) = k;
                    UBY(0) = 0x28;
                    t8 = 0xC30AF7E;
                    m = 0xA;
                    if (k == 4) {
                        t8 = 0xC30AF7A;
                        m = 4;
                    }
                    if (k == 4 || k == 9) {
                        *(unsigned int *)qa0 = 0x0;
                        *(unsigned int *)qa0 = (FUN_0c013746(t8));
                        memset(t8, 0x0, m);
                        FUN_0c187cac(t8, 0x0, 0x0, 0x0, 0xC1A5C48, *(volatile int *)0xC30441C);
                    }
                    FUN_0c0159c4(0x0, 0x0, kp[k], kn[k], kf[k]);
                    FUN_0c015b58();
                } else if (t7 == 2) {
                    if (v == 4) {
                        t8 = FUN_0c013aa6();
                        if (t8 == 1) {
                            UBY(0) = 0x3;
                            U16(0x16) = 0xF;
                            FUN_0c0573cc(0xFF000000, 0x0, 0xF);
                        } else {
                            UBY(0) = 0x32;
                            U16(0x16) = 0xB4;
                            FUN_0c018e74(0x1);
                        }
                    }
                } else if (v == 7) {
                    UBY(0xB) = 0x0;
                    UBY(0x19) = 0x1;
                    UBY(0x2) = SBY(0);
                    UBY(0x1) = 0x0;
                    UBY(0x1A) = 0x0;
                    UBY(0) = 0x14;
                } else if (v == 8) {
                    UBY(0) = 0x7;
                    U16(0x16) = 0xF;
                    FUN_0c0573cc(0xFF000000, 0x0, 0xF);
                } else if (v == 9) {
                    UBY(0) = 0x3C;
                    UBY(0x1B) = 0x0;
                    U16(0x16) = 0x258;
                    FUN_0c018e9c(0x2F, (a4 + 0x1B));
                }
            }
        } else {
            if (t7 == 5) {
                FUN_0c01ca2a((a4 + 0x7), 0x1, 0x1);
            }
            FUN_0c01ca2a((a4 + 0x8), 0x4, 0x0);
            t0 = FUN_0c01cd2c(0x101);
            if (((short)t0 == 0) && (t8 = *(signed char *)qa1, (unsigned char)t8 != 40)) {
            } else if (t7 == 5) {
                FUN_0c05aab6(0x0, 0x3);
                UBY(0xB) = 0x1;
            } else {
                UBY(0xB) = 0x1;
                FUN_0c05aab6(0x0, 0x3);
            }
        }
        t0 = FUN_0c01cd2c(0x40);
        if ((short)t0 != 0) {
            FUN_0c05aab6(0x0, 0x4);
            if (t7 == 5) {
                UBY(0) = 0x7;
                U16(0x16) = 0xF;
                FUN_0c0573cc(0xFF000000, 0x0, 0xF);
            } else {
                UBY(0) = 0x63;
                U16(0x16) = 0x14;
                FUN_0c0573cc(0xFF000000, 0x0, 0x14);
            }
        }
        FUN_0c0135bc(t7 == 5);
    } else if (t7 == 60 || t7 == 50) {
        t0 = *(short *)(a4 + 0x16);
        U16(0x16) = t0 - 1;
        go = 1;
        if ((int)(short)(t0 - 1) > 0) {
            go = 0;
            if (t7 == 60) {
                t0 = FUN_0c01cd2c(0x40);
                if ((short)t0 == 0) {
                    t0 = FUN_0c01cd2c(0x101);
                    if (((short)t0 != 0) && (t8 = SBY(0x1B), (unsigned char)t8 == 1)) {
                        go = 1;
                    } else {
                        t0 = FUN_0c01cd2c(0x101);
                        if ((short)t0 != 0) {
                            U16(0x16) = 0x14;
                            FUN_0c0573cc(0xFF000000, 0x0, 0x14);
                            UBY(0) = 0x3D;
                            FUN_0c018fd2(0x2F);
                            FUN_0c05aab6(0x0, 0x3);
                        } else {
                            FUN_0c01c714((a4 + 0x1B), 0x1, 0x2);
                        }
                    }
                } else {
                    go = 1;
                }
            } else {
                t0 = FUN_0c01cd2c(0x141);
                if (((short)t0 == 0) && ((t8 = *(signed char *)qa1, (unsigned char)t8 != 40) && (t8 = *(signed char *)qa1, (unsigned char)t8 != 41))) {
                } else {
                    go = 1;
                }
            }
        }
        if (go) {
            if (t7 == 60) {
                UBY(0) = 0x5;
                UBY(0x7) = 0x0;
                UBY(0x8) = 0x0;
                UBY(0xB) = 0x0;
                FUN_0c018fd2(0x2F);
                FUN_0c05aab6(0x0, 0x4);
            } else {
                UBY(0) = 0x33;
                UBY(0x18) = 0x1;
                FUN_0c018fd2(0x1);
            }
        }
        FUN_0c0135bc(t7 == 60);
    } else if (t7 == 20) {
        t0 = SBY(0x1);
        if ((unsigned char)t0 != 0) {
            if ((unsigned char)t0 != 1) {
                if ((unsigned char)t0 != 2) {
                    if ((unsigned char)t0 == 3) {
                        if (SBY(0x19) >= 0x5) {
                            UBY(0) = SBY(0x2);
                            UBY(0x1) = 0x0;
                            if (SBY(0x1C) != -1) {
                                if (SBY(0x1A) == 0) {
                                    *(unsigned char *)0xC30AF88 = 0x0;
                                } else {
                                    *(unsigned char *)0xC30AF88 = 0x1;
                                }
                            }
                        }
                    }
                } else {
                    FUN_0c01ca2a((a4 + 0x1A), 0x1, 0x2);
                    t0 = FUN_0c01cd2c(0x101);
                    if (((short)t0 == 0) && (t8 = *(signed char *)qa1, (unsigned char)t8 != 40)) {
                        t0 = FUN_0c01cd2c(0x40);
                        if (((short)t0 == 0) && (t8 = *(signed char *)qa1, (unsigned char)t8 != 41)) {
                        } else {
                            UBY(0x1) = SBY(0x1) + 0x1;
                            UBY(0x19) = 0xFFFFFFFF;
                            UBY(0x1C) = SBY(0x19);
                            FUN_0c05aab6(0x0, 0x4);
                        }
                    } else {
                        UBY(0x1) = SBY(0x1) + 0x1;
                        UBY(0x19) = 0x3;
                        UBY(0x1C) = SBY(0x19);
                        FUN_0c05aab6(0x0, 0x3);
                    }
                }
            } else {
                if (SBY(0x19) == 2) {
                    UBY(0x1) = SBY(0x1) + 0x1;
                }
            }
        } else {
            *(unsigned int *)(FUN_0c01cc56(0x16, 0xC012134) + 0x41C) = a4;
            UBY(0x1) = SBY(0x1) + 0x1;
            if (*(signed char *)0xC30AF88 == 0) {
                UBY(0x1A) = 0x0;
            } else {
                UBY(0x1A) = 0x1;
            }
        }
        FUN_0c0135bc(0x1);
    } else if (t7 == 40) {
        t0 = FUN_0c015b58();
        if (t0 == 1) {
            t8 = SBY(0x3);
            if (((unsigned char)t8 != 0) && (((unsigned char)t8 != 1) && (((unsigned char)t8 != 2) && (((unsigned char)t8 != 3) && ((unsigned char)t8 != 4))))) {
                if (((unsigned char)t8 != 5) && (((unsigned char)t8 != 6) && (((unsigned char)t8 != 7) && ((unsigned char)t8 != 8)))) {
                    if ((unsigned char)t8 == 9) {
                        *(unsigned int *)qa0 = 0x0;
                        *(unsigned int *)qa0 = (FUN_0c013746(0xC30AF7E));
                        memset(0xC30AF7E, 0x0, 0xA);
                        FUN_0c187cac(0xC30AF7E, 0x0, 0x0, 0x0, 0xC1A5C50, *(volatile int *)0xC30441C);
                    }
                }
            } else {
                *(unsigned int *)qa0 = 0x0;
                *(unsigned int *)qa0 = (FUN_0c013746(0xC30AF7A));
                memset(0xC30AF7A, 0x0, 0x4);
                FUN_0c187cac(0xC30AF7A, 0x0, 0x0, 0x0, 0xC1A5C4C, *(volatile int *)0xC30441C);
            }
            UBY(0) = SBY(0x2);
        } else {
            if (t0 == -1) {
                UBY(0) = SBY(0x2);
            }
        }
        t0 = 0x1;
        if ((unsigned char)SBY(0x2) == 2) {
            t0 = 0x0;
        }
        FUN_0c0135bc(t0);
    } else if (t7 == 51) {
        UBY(0) = 0x2;
        UBY(0x8) = 0x0;
        UBY(0xB) = 0x0;
        FUN_0c0135bc(0x0);
    } else if (t7 == 99) {
        t0 = *(short *)(a4 + 0x16);
        U16(0x16) = t0 - 1;
        if ((int)(short)(t0 - 1) < 0) {
            UBY(0) = SBY(0) + 0x1;
            UBY(0xA) = 0x2;
            UBY(0x5) = 0x2;
        } else {
            t0 = 0x1;
            if (SBY(0xA) == 0) {
                t0 = 0x0;
            }
            FUN_0c0135bc(t0);
        }
    }
    return SBY(0x5);
}
#undef SBY
#undef UBY
#undef U16

int FUN_0c012c34(int a4)
{
    register float u11;

    if ((*(signed char *)((a4 + 0x1B))) == 0) {
        (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x200);
        (((struct oBC_float *)(a4))->v) = 0.5f;
        (((struct oB8_float *)(a4))->v) = 0.5f;
        (((struct oB4_float *)(a4))->v) = 0.5f;
        (((struct o22_ushort *)(a4))->v) = 0x0;
        (((struct o1B_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x1B))) + 0x1);
    }
    (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) + 0x1);
    u11 = 0.5f;
    u11 = u11 + 0.5f * (math_sin_angle16((((((((struct o22_short *)(a4))->v)) << 8) << 2) << 1)));
    (((struct oBC_float *)(a4))->v) = u11;
    (((struct oB8_float *)(a4))->v) = u11;
    (((struct oB4_float *)(a4))->v) = u11;
    return 0xB4;
}

int FUN_0c012cb8(int a4)
{
    int t0;
    int t8;
    int t7;
    int t1;
    int qa0;
    int qa1;
    int t2;
    int t6;
    int t5;
    int t4;
    int t3;

    qa1 = 0xC30EF9E;
    qa0 = 0xC304420;
    t7 = *(signed char *)(a4);
    if ((unsigned char)t7 != 0) {
        if ((unsigned char)t7 == 1) {
            t8 = (((struct o16_short *)(a4))->v);
            (((struct o16_ushort *)(a4))->v) = (t8 - 1);
            if ((int)(short)(t8 - 1) >= 0) {
            } else {
                *(unsigned char *)(a4) = ((*(signed char *)(a4)) + 0x1);
            }
            FUN_0c0135bc(0x0);
        } else {
            if ((unsigned char)t7 == 4) {
                t8 = (((struct o16_short *)(a4))->v);
                (((struct o16_ushort *)(a4))->v) = (t8 - 1);
                if ((int)(short)(t8 - 1) >= 0) {
                } else {
                    *(unsigned char *)(a4) = ((*(signed char *)(a4)) + 0x1);
                }
                FUN_0c0135bc(0x1);
            } else {
                if ((unsigned char)t7 == 2) {
                    FUN_0c01ca2a((a4 + 0x8), 0x3, 0x0);
                    t8 = *(signed char *)(a4 + 0xB);
                    if (t8 != 0) {
                        if (t8 != 2) {
                        } else {
                            t8 = *(signed char *)(a4 + 0x8);
                            switch (t8) {
                            case 0:
                                (((struct oB_uchar *)(a4))->v) = 0x0;
                                (((struct o2_uchar *)(a4))->v) = (*(signed char *)(a4));
                                (((struct o3_uchar *)(a4))->v) = 0x1;
                                *(unsigned char *)(a4) = 0x28;
                                FUN_0c0159c4(0x0, 0x0, 0xC30AD76, 0xB, 0x4);
                                FUN_0c015b58();
                                break;
                            case 1:
                                (((struct oB_uchar *)(a4))->v) = 0x0;
                                (((struct o2_uchar *)(a4))->v) = (*(signed char *)(a4));
                                (((struct o3_uchar *)(a4))->v) = 0x2;
                                *(unsigned char *)(a4) = 0x28;
                                FUN_0c0159c4(0x0, 0x0, 0xC30ADF6, 0x7F, 0x1);
                                FUN_0c015b58();
                                break;
                            case 2:
                                (((struct oB_uchar *)(a4))->v) = 0x0;
                                (((struct o2_uchar *)(a4))->v) = (*(signed char *)(a4));
                                (((struct o3_uchar *)(a4))->v) = 0x9;
                                *(unsigned char *)(a4) = 0x28;
                                *(unsigned int *)qa0 = 0x0;
                                *(unsigned int *)qa0 = (FUN_0c013746(0xC30AF7E));
                                memset(0xC30AF7E, 0x0, 0xA);
                                FUN_0c187cac(0xC30AF7E, 0x0, 0x0, 0x0, 0xC1A5C48, *(volatile int *)0xC304420);
                                FUN_0c0159c4(0x0, 0x0, 0xC30AF7E, 0x8, 0x4);
                                FUN_0c015b58();
                                break;
                            case 3:
                                t8 = FUN_0c013aa6();
                                if (t8 == 1) {
                                    *(unsigned char *)(a4) = 0x3;
                                    (((struct o16_ushort *)(a4))->v) = 0xF;
                                    FUN_0c0573cc(0xFF000000, 0x0, 0xF);
                                } else {
                                    *(unsigned char *)(a4) = 0x32;
                                    (((struct o16_ushort *)(a4))->v) = 0xB4;
                                    FUN_0c018e74(0x1);
                                }
                                break;
                            }
                        }
                    } else {
                        t8 = FUN_0c01cd2c(0x101);
                        if (((short)t8 == 0) && (t0 = *(signed char *)qa1, (unsigned char)t0 != 40)) {
                        } else {
                            FUN_0c05aab6(0x0, 0x3);
                            (((struct oB_uchar *)(a4))->v) = 0x1;
                        }
                    }
                    t0 = FUN_0c01cd2c(0x40);
                    if ((short)t0 == 0) {
                    } else {
                        FUN_0c05aab6(0x0, 0x4);
                        *(unsigned char *)(a4) = 0x63;
                        (((struct o16_ushort *)(a4))->v) = 0x14;
                        FUN_0c0573cc(0xFF000000, 0x0, 0x14);
                    }
                    FUN_0c0135bc(0x0);
                } else {
                    if ((unsigned char)t7 == 3) {
                        t0 = (((struct o16_short *)(a4))->v);
                        (((struct o16_ushort *)(a4))->v) = (t0 - 1);
                        if ((int)(short)(t0 - 1) >= 0) {
                        } else {
                            (((struct o7_uchar *)(a4))->v) = 0x0;
                            (((struct o8_uchar *)(a4))->v) = 0x0;
                            (((struct oA_uchar *)(a4))->v) = 0x1;
                            (((struct oB_uchar *)(a4))->v) = 0x0;
                            *(unsigned char *)(a4) = ((*(signed char *)(a4)) + 0x1);
                            FUN_0c0573c0(0xFF000000, 0x0, 0xF);
                            (((struct o16_ushort *)(a4))->v) = 0xF;
                        }
                        FUN_0c0135bc(0x0);
                    } else {
                        if ((unsigned char)t7 == 5) {
                            t0 = *(signed char *)(a4 + 0xB);
                            if (t0 != 0) {
                                if (t0 != 2) {
                                } else {
                                    t0 = *(signed char *)(a4 + 0x8);
                                    t8 = *(signed char *)(a4 + 0x7);
                                    if ((t8 + (t0 << 1)) != 0) {
                                        if ((t8 + (t0 << 1)) != 1) {
                                            if (((t8 + (t0 << 1)) != 2) && ((t8 + (t0 << 1)) != 3)) {
                                                if (((t8 + (t0 << 1)) != 4) && ((t8 + (t0 << 1)) != 5)) {
                                                    if ((t8 + (t0 << 1)) != 6) {
                                                        if ((t8 + (t0 << 1)) == 7) {
                                                            (((struct oB_uchar *)(a4))->v) = 0x0;
                                                            (((struct o19_uchar *)(a4))->v) = 0x1;
                                                            (((struct o2_uchar *)(a4))->v) = (*(signed char *)(a4));
                                                            (((struct o1_uchar *)(a4))->v) = 0x0;
                                                            (((struct o1A_uchar *)(a4))->v) = 0x0;
                                                            *(unsigned char *)(a4) = 0x14;
                                                        } else {
                                                            if ((t8 + (t0 << 1)) == 8) {
                                                                *(unsigned char *)(a4) = 0x7;
                                                                (((struct o16_ushort *)(a4))->v) = 0xF;
                                                                FUN_0c0573cc(0xFF000000, 0x0, 0xF);
                                                            } else {
                                                                if ((t8 + (t0 << 1)) == 9) {
                                                                    *(unsigned char *)(a4) = 0x3C;
                                                                    (((struct o1B_uchar *)(a4))->v) = 0x0;
                                                                    (((struct o16_ushort *)(a4))->v) = 0x258;
                                                                    FUN_0c018e9c(0x2F, (a4 + 0x1B));
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        (((struct oB_uchar *)(a4))->v) = 0x0;
                                                        (((struct o2_uchar *)(a4))->v) = (*(signed char *)(a4));
                                                        (((struct o3_uchar *)(a4))->v) = 0x8;
                                                        *(unsigned char *)(a4) = 0x28;
                                                        FUN_0c0159c4(0x0, 0x0, 0xC30AEB6, 0x20, 0x0);
                                                        FUN_0c015b58();
                                                    }
                                                } else {
                                                    (((struct oB_uchar *)(a4))->v) = 0x0;
                                                    (((struct o2_uchar *)(a4))->v) = (*(signed char *)(a4));
                                                    (((struct o3_uchar *)(a4))->v) = 0x7;
                                                    *(unsigned char *)(a4) = 0x28;
                                                    FUN_0c0159c4(0x0, 0x0, 0xC30AF0A, 0x6E, 0x0);
                                                    FUN_0c015b58();
                                                }
                                            } else {
                                                (((struct oB_uchar *)(a4))->v) = 0x0;
                                                (((struct o2_uchar *)(a4))->v) = (*(signed char *)(a4));
                                                (((struct o3_uchar *)(a4))->v) = 0x5;
                                                *(unsigned char *)(a4) = 0x28;
                                                FUN_0c0159c4(0x0, 0x0, 0xC30AEF6, 0x8, 0x4);
                                                FUN_0c015b58();
                                            }
                                        } else {
                                            (((struct oB_uchar *)(a4))->v) = 0x0;
                                            (((struct o2_uchar *)(a4))->v) = (*(signed char *)(a4));
                                            (((struct o3_uchar *)(a4))->v) = 0x4;
                                            *(unsigned char *)(a4) = 0x28;
                                            *(unsigned int *)qa0 = 0x0;
                                            *(unsigned int *)qa0 = (FUN_0c013746(0xC30AF7A));
                                            memset(0xC30AF7A, 0x0, 0x4);
                                            FUN_0c187cac(0xC30AF7A, 0x0, 0x0, 0x0, 0xC1A5C48, *(volatile int *)0xC304420);
                                            FUN_0c0159c4(0x0, 0x0, 0xC30AF7A, 0x2, 0x4);
                                            FUN_0c015b58();
                                        }
                                    } else {
                                        (((struct oB_uchar *)(a4))->v) = 0x0;
                                        (((struct o2_uchar *)(a4))->v) = (*(signed char *)(a4));
                                        (((struct o3_uchar *)(a4))->v) = 0x3;
                                        *(unsigned char *)(a4) = 0x28;
                                        FUN_0c0159c4(0x0, 0x0, 0xC30AE76, 0x3E, 0x0);
                                        FUN_0c015b58();
                                    }
                                }
                            } else {
                                FUN_0c01ca2a((a4 + 0x7), 0x1, 0x1);
                                FUN_0c01ca2a((a4 + 0x8), 0x4, 0x0);
                                t0 = FUN_0c01cd2c(0x101);
                                if (((short)t0 == 0) && (t1 = *(signed char *)qa1, (unsigned char)t1 != 40)) {
                                } else {
                                    FUN_0c05aab6(0x0, 0x3);
                                    (((struct oB_uchar *)(a4))->v) = 0x1;
                                }
                            }
                            t0 = FUN_0c01cd2c(0x40);
                            if ((short)t0 == 0) {
                            } else {
                                FUN_0c05aab6(0x0, 0x4);
                                *(unsigned char *)(a4) = 0x7;
                                (((struct o16_ushort *)(a4))->v) = 0xF;
                                FUN_0c0573cc(0xFF000000, 0x0, 0xF);
                            }
                            FUN_0c0135bc(0x1);
                        } else {
                            if ((unsigned char)t7 == 60) {
                                t0 = (((struct o16_short *)(a4))->v);
                                (((struct o16_ushort *)(a4))->v) = (t0 - 1);
                                if ((int)(short)(t0 - 1) > 0) {
                                    t0 = FUN_0c01cd2c(0x40);
                                    if ((short)t0 == 0) {
                                        t0 = FUN_0c01cd2c(0x101);
                                        if (((short)t0 != 0) && (t2 = *(signed char *)(a4 + 0x1B), (unsigned char)t2 == 1)) {
                                            *(unsigned char *)(a4) = 0x5;
                                            (((struct o7_uchar *)(a4))->v) = 0x0;
                                            (((struct o8_uchar *)(a4))->v) = 0x0;
                                            (((struct oB_uchar *)(a4))->v) = 0x0;
                                            FUN_0c018fd2(0x2F);
                                            FUN_0c05aab6(0x0, 0x4);
                                        } else {
                                            t0 = FUN_0c01cd2c(0x101);
                                            if ((short)t0 != 0) {
                                                (((struct o16_ushort *)(a4))->v) = 0x14;
                                                FUN_0c0573cc(0xFF000000, 0x0, 0x14);
                                                *(unsigned char *)(a4) = 0x3D;
                                                FUN_0c018fd2(0x2F);
                                                FUN_0c05aab6(0x0, 0x3);
                                            } else {
                                                FUN_0c01c714((a4 + 0x1B), 0x1, 0x2);
                                            }
                                        }
                                    } else {
                                        *(unsigned char *)(a4) = 0x5;
                                        (((struct o7_uchar *)(a4))->v) = 0x0;
                                        (((struct o8_uchar *)(a4))->v) = 0x0;
                                        (((struct oB_uchar *)(a4))->v) = 0x0;
                                        FUN_0c018fd2(0x2F);
                                        FUN_0c05aab6(0x0, 0x4);
                                    }
                                } else {
                                    *(unsigned char *)(a4) = 0x5;
                                    (((struct o7_uchar *)(a4))->v) = 0x0;
                                    (((struct o8_uchar *)(a4))->v) = 0x0;
                                    (((struct oB_uchar *)(a4))->v) = 0x0;
                                    FUN_0c018fd2(0x2F);
                                    FUN_0c05aab6(0x0, 0x4);
                                }
                                FUN_0c0135bc(0x1);
                            } else {
                                if ((unsigned char)t7 == 61) {
                                    t0 = (((struct o16_short *)(a4))->v);
                                    (((struct o16_ushort *)(a4))->v) = (t0 - 1);
                                    if ((int)(short)(t0 - 1) >= 0) {
                                    } else {
                                        (((struct oA_uchar *)(a4))->v) = 0x2;
                                        (((struct o5_uchar *)(a4))->v) = 0x1;
                                        *(unsigned char *)(a4) = 0x0;
                                        FUN_0c0139bc();
                                    }
                                    FUN_0c0135bc(0x1);
                                } else {
                                    if ((unsigned char)t7 == 7) {
                                        t0 = (((struct o16_short *)(a4))->v);
                                        (((struct o16_ushort *)(a4))->v) = (t0 - 1);
                                        if ((int)(short)(t0 - 1) >= 0) {
                                        } else {
                                            (((struct o7_uchar *)(a4))->v) = 0x0;
                                            (((struct o8_uchar *)(a4))->v) = 0x0;
                                            (((struct oA_uchar *)(a4))->v) = 0x0;
                                            (((struct oB_uchar *)(a4))->v) = 0x0;
                                            *(unsigned char *)(a4) = ((*(signed char *)(a4)) + 0x1);
                                            FUN_0c0573c0(0xFF000000, 0x0, 0xF);
                                            (((struct o16_ushort *)(a4))->v) = 0xF;
                                        }
                                        FUN_0c0135bc(0x1);
                                    } else {
                                        if ((unsigned char)t7 == 8) {
                                            t0 = (((struct o16_short *)(a4))->v);
                                            (((struct o16_ushort *)(a4))->v) = (t0 - 1);
                                            if ((int)(short)(t0 - 1) >= 0) {
                                            } else {
                                                *(unsigned char *)(a4) = 0x2;
                                            }
                                            FUN_0c0135bc(0x0);
                                        } else {
                                            if ((unsigned char)t7 == 20) {
                                                t0 = *(signed char *)(a4 + 0x1);
                                                if ((unsigned char)t0 != 0) {
                                                    if ((unsigned char)t0 != 1) {
                                                        if ((unsigned char)t0 != 2) {
                                                            if ((unsigned char)t0 != 3) {
                                                            } else {
                                                                if ((int)(*(signed char *)(a4 + 0x19)) < (int)0x5) {
                                                                } else {
                                                                    *(unsigned char *)(a4) = (*(signed char *)(a4 + 0x2));
                                                                    (((struct o1_uchar *)(a4))->v) = 0x0;
                                                                    if ((*(signed char *)(a4 + 0x1C)) == -1) {
                                                                    } else {
                                                                        if ((*(signed char *)(a4 + 0x1A)) == 0) {
                                                                            *(unsigned char *)0xC30AF88 = 0x0;
                                                                        } else {
                                                                            *(unsigned char *)0xC30AF88 = 0x1;
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            FUN_0c01ca2a((a4 + 0x1A), 0x1, 0x2);
                                                            t0 = FUN_0c01cd2c(0x101);
                                                            if (((short)t0 == 0) && (t3 = *(signed char *)qa1, (unsigned char)t3 != 40)) {
                                                                t0 = FUN_0c01cd2c(0x40);
                                                                if (((short)t0 == 0) && (t4 = *(signed char *)qa1, (unsigned char)t4 != 41)) {
                                                                } else {
                                                                    (((struct o1_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x1)) + 0x1);
                                                                    (((struct o19_uchar *)(a4))->v) = 0xFFFFFFFF;
                                                                    (((struct o1C_uchar *)(a4))->v) = (*(signed char *)(a4 + 0x19));
                                                                    FUN_0c05aab6(0x0, 0x3);
                                                                }
                                                            } else {
                                                                (((struct o1_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x1)) + 0x1);
                                                                (((struct o19_uchar *)(a4))->v) = 0x3;
                                                                (((struct o1C_uchar *)(a4))->v) = (*(signed char *)(a4 + 0x19));
                                                                FUN_0c05aab6(0x0, 0x3);
                                                            }
                                                        }
                                                    } else {
                                                        if ((*(signed char *)(a4 + 0x19)) != 2) {
                                                        } else {
                                                            (((struct o1_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x1)) + 0x1);
                                                        }
                                                    }
                                                } else {
                                                    (((struct o41C_uint *)((FUN_0c01cc56(0x16, 0xC012134))))->v) = a4;
                                                    (((struct o1_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x1)) + 0x1);
                                                    if ((*(signed char *)0xC30AF88) == 0) {
                                                        (((struct o1A_uchar *)(a4))->v) = 0x0;
                                                    } else {
                                                        (((struct o1A_uchar *)(a4))->v) = 0x1;
                                                    }
                                                }
                                                FUN_0c0135bc(0x1);
                                            } else {
                                                if ((unsigned char)t7 == 40) {
                                                    t0 = FUN_0c015b58();
                                                    if (t0 == 1) {
                                                        t1 = *(signed char *)(a4 + 0x3);
                                                        if (((unsigned char)t1 != 0) && (((unsigned char)t1 != 1) && (((unsigned char)t1 != 2) && (((unsigned char)t1 != 3) && ((unsigned char)t1 != 4))))) {
                                                            if (((unsigned char)t1 != 5) && (((unsigned char)t1 != 6) && (((unsigned char)t1 != 7) && ((unsigned char)t1 != 8)))) {
                                                                if ((unsigned char)t1 != 9) {
                                                                } else {
                                                                    *(unsigned int *)qa0 = 0x0;
                                                                    *(unsigned int *)qa0 = (FUN_0c013746(0xC30AF7E));
                                                                    memset(0xC30AF7E, 0x0, 0xA);
                                                                    FUN_0c187cac(0xC30AF7E, 0x0, 0x0, 0x0, 0xC1A5C50, *(volatile int *)0xC304420);
                                                                }
                                                            }
                                                        } else {
                                                            *(unsigned int *)qa0 = 0x0;
                                                            *(unsigned int *)qa0 = (FUN_0c013746(0xC30AF7A));
                                                            memset(0xC30AF7A, 0x0, 0x4);
                                                            FUN_0c187cac(0xC30AF7A, 0x0, 0x0, 0x0, 0xC1A5C4C, *(volatile int *)0xC304420);
                                                        }
                                                        *(unsigned char *)(a4) = (*(signed char *)(a4 + 0x2));
                                                    } else {
                                                        if (t0 == -1) {
                                                            *(unsigned char *)(a4) = (*(signed char *)(a4 + 0x2));
                                                        }
                                                    }
                                                    t0 = 0x1;
                                                    if ((unsigned char)(*(signed char *)(a4 + 0x2)) == 2) {
                                                        t0 = 0x0;
                                                    }
                                                    FUN_0c0135bc(t0);
                                                } else {
                                                    if ((unsigned char)t7 == 50) {
                                                        t0 = (((struct o16_short *)(a4))->v);
                                                        (((struct o16_ushort *)(a4))->v) = (t0 - 1);
                                                        if ((int)(short)(t0 - 1) > 0) {
                                                            t0 = FUN_0c01cd2c(0x141);
                                                            if (((short)t0 == 0) && ((t5 = *(signed char *)qa1, (unsigned char)t5 != 40) && (t6 = *(signed char *)qa1, (unsigned char)t6 != 41))) {
                                                            } else {
                                                                *(unsigned char *)(a4) = 0x33;
                                                                (((struct o18_uchar *)(a4))->v) = 0x1;
                                                                FUN_0c018fd2(0x1);
                                                            }
                                                        } else {
                                                            *(unsigned char *)(a4) = 0x33;
                                                            (((struct o18_uchar *)(a4))->v) = 0x1;
                                                            FUN_0c018fd2(0x1);
                                                        }
                                                        FUN_0c0135bc(0x0);
                                                    } else {
                                                        if ((unsigned char)t7 == 51) {
                                                            *(unsigned char *)(a4) = 0x2;
                                                            (((struct o8_uchar *)(a4))->v) = 0x0;
                                                            (((struct oB_uchar *)(a4))->v) = 0x0;
                                                            FUN_0c0135bc(0x0);
                                                        } else {
                                                            if ((unsigned char)t7 == 99) {
                                                                t0 = (((struct o16_short *)(a4))->v);
                                                                (((struct o16_ushort *)(a4))->v) = (t0 - 1);
                                                                if ((int)(short)(t0 - 1) < 0) {
                                                                    *(unsigned char *)(a4) = ((*(signed char *)(a4)) + 0x1);
                                                                    (((struct oA_uchar *)(a4))->v) = 0x2;
                                                                    (((struct o5_uchar *)(a4))->v) = 0x2;
                                                                } else {
                                                                    t0 = 0x1;
                                                                    if ((*(signed char *)(a4 + 0xA)) == 0) {
                                                                        t0 = 0x0;
                                                                    }
                                                                    FUN_0c0135bc(t0);
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        FUN_0c013848();
        FUN_0c01cb7c();
        t0 = FUN_0c01cc56(0x11, 0xC011AD0);
        (((struct o41C_uint *)(t0))->v) = a4;
        (((struct o423_uchar *)(t0))->v) = 0x0;
        t0 = FUN_0c01cc56(0x14, 0xC011F6C);
        (((struct o41C_uint *)(t0))->v) = a4;
        (((struct o423_uchar *)(t0))->v) = 0x0;
        t0 = FUN_0c01cc56(0x15, 0xC01206C);
        (((struct o41C_uint *)(t0))->v) = a4;
        (((struct o423_uchar *)(t0))->v) = 0x0;
        t0 = FUN_0c01cc56(0x12, 0xC011AD0);
        (((struct o41C_uint *)(t0))->v) = a4;
        (((struct o423_uchar *)(t0))->v) = 0x1;
        t0 = FUN_0c01cc56(0x14, 0xC011CE8);
        (((struct o41C_uint *)(t0))->v) = a4;
        (((struct o423_uchar *)(t0))->v) = 0x1;
        t0 = FUN_0c01cc56(0x15, 0xC011E66);
        (((struct o41C_uint *)(t0))->v) = a4;
        (((struct o423_uchar *)(t0))->v) = 0x1;
        (((struct o19_uchar *)(a4))->v) = 0x0;
        (((struct o5_uchar *)(a4))->v) = 0x0;
        (((struct o7_uchar *)(a4))->v) = 0x0;
        (((struct o8_uchar *)(a4))->v) = 0x0;
        (((struct o4_uchar *)(a4))->v) = 0x0;
        (((struct oA_uchar *)(a4))->v) = 0x0;
        (((struct oB_uchar *)(a4))->v) = 0x0;
        *(unsigned char *)(a4) = ((*(signed char *)(a4)) + 0x1);
        FUN_0c0573c0(0xFF000000, 0x0, 0x14);
        (((struct o16_ushort *)(a4))->v) = 0x14;
    }
    return (*(signed char *)(a4 + 0x5));
}

int FUN_0c0135bc(int a4)
{
    int stk[1];
    register int t4;
    register int t8;
    register float u11;
    register float u16;
    register float u17;
    register int t18;
    register int t22;
    register float u30;
    register int t31;
    register int t35;
    register float u38;
    register int t39;
    register int t43;
    register float u47;
    register int t48;
    register int t51;

    *(unsigned char *)(((int)stk + 0)) = a4;
    FUN_0c02b502(0x0);
    if ((*(signed char *)(((int)stk + 0))) == 0) {
        FUN_0c02b3ba(0xC30AD64, 164.0f, 124.0f, 638.0f);
        FUN_0c02b3ba(0xC30AD76, 164.0f, 204.0f, 638.0f);
        t4 = strlen(0xC30ADF6);
        t8 = 0xC30ADF6;
        if ((int)t4 >= (int)0x1A) {
            FUN_0c013b44(0xC304434, 0xC30ADF6, 0x1A);
            t8 = 0xC304434;
        }
        FUN_0c02b3ba(t8, 164.0f, 284.0f, 638.0f);
        u11 = (((struct o0_float *)0xC01377C)->v);
        FUN_0c02b3ba(0xC30AF7E, ((((struct o8_float *)0xC01377C)->v)), u11, 638.0f);
        t51 = (FUN_0c02b3ba(0xC1A5C54, ((((struct o10_float *)0xC01377C)->v)), u11, 638.0f));
    } else {
        u16 = (((struct o14_float *)0xC01377C)->v);
        u17 = (((struct o1C_float *)0xC01377C)->v);
        t18 = strlen(0xC30AE76);
        t22 = 0xC30AE76;
        if ((int)t18 >= (int)0x18) {
            FUN_0c013b44(0xC304434, 0xC30AE76, 0x18);
            t22 = 0xC304434;
        }
        FUN_0c02b3ba(t22, u17, u16, 638.0f);
        FUN_0c02b3ba(0xC30AF7A, ((((struct o24_float *)0xC01377C)->v)), u16, 638.0f);
        FUN_0c02b3ba(0xC30AEF6, ((((struct o30_float *)0xC01377C)->v)), ((((struct o2C_float *)0xC01377C)->v)), 638.0f);
        u30 = (((struct o34_float *)0xC01377C)->v);
        t31 = strlen(0xC30AF0A);
        t35 = 0xC30AF0A;
        if ((int)t31 >= (int)0x2D) {
            FUN_0c013b44(0xC304434, 0xC30AF0A, 0x2D);
            t35 = 0xC304434;
        }
        FUN_0c02b3ba(t35, u17, u30, 638.0f);
        u38 = (((struct o0_float *)0xC0137BC)->v);
        t39 = strlen(0xC30AEB6);
        t43 = 0xC30AEB6;
        if ((int)t39 >= (int)0x10) {
            FUN_0c013b44(0xC304434, 0xC30AEB6, 0x10);
            t43 = 0xC304434;
        }
        FUN_0c02b3ba(t43, u17, u38, 638.0f);
        u47 = (((struct o4_float *)0xC0137BC)->v);
        t48 = 0xC20B8F1;
        if ((*(signed char *)0xC30AF88) == 0) {
            t48 = 0xC20B8E8;
        }
        t51 = (FUN_0c02b3ba(t48, u47, u38, 638.0f));
    }
    return t51;
}

int FUN_0c013746(int a4)
{
    register int t0;
    register int t1;
    register int t4;
    register int t5;
    register int t7;
    register int t8;
    register int t9;
    register int t2;
    int t3;
    int t6;
    register int t16;
    register int t17;
    register int t18;
    register int t23;
    register int t24;
    register int t25;

    t0 = strlen(a4);
    t1 = 0xC0137D4;
    t4 = 0x0;
    t5 = ((a4 + t0) - 1);
    t7 = 0x0;
    t8 = 0x0;
    t9 = 0x0;
    for (;;) {
        if ((int)t7 >= (int)t0) {
            break;
        }
        t3 = 0x80;
        t6 = (*(signed char *)((t5 + 0x0)));
        t5 = (t5 - 1);
        if ((t3 & t6) == 0) {
            t1 = t6;
            if (t1 != 44) {
                t1 = t6;
                if (t1 == 32) {
                    t6 = 0x30;
                    t6 = (t6 - 48);
                    if (t9 != 0) {
                        t3 = 0xC179A10;
                        t2 = (int)(math_pow_float(t4, 10.0f, (float)t9));
                        t6 = (t6 * t2);
                    } else {
                        t16 = t1;
                        t17 = t3;
                        t18 = t4;
                    }
                    t1 = t16;
                    t9 = (t9 + 0x1);
                    t3 = t17;
                    t4 = t18;
                    t8 = (t8 + t6);
                    t7 = (t7 + 0x1);
                    continue;
                }
                if (((int)t6 >= (int)0x30) && (t3 = 0x39, (int)t6 <= (int)t3)) {
                    t6 = (t6 - 48);
                    if (t9 != 0) {
                        t2 = (int)(math_pow_float(t4, 10.0f, (float)t9));
                        t6 = (t6 * t2);
                    } else {
                        t23 = t1;
                        t24 = t3;
                        t25 = t4;
                    }
                    t1 = t23;
                    t9 = (t9 + 0x1);
                    t3 = t24;
                    t4 = t25;
                    t8 = (t8 + t6);
                    t7 = (t7 + 0x1);
                    continue;
                }
                t1 = 0xFFFFFFFF;
                return t1;
            }
            t7 = (t7 + 0x1);
            continue;
        }
        t1 = 0xFFFFFFFF;
        return t1;
    }
    return t8;
}

int FUN_0c013848(void)
{
    register int t0;
    register int t1;
    register int t2;

    if ((*(signed char *)0xC30A403) == 0) {
        memset(0xC30AD64, 0x0, 0x12);
        memset(0xC30AD76, 0x0, 0x80);
        memset(0xC30ADF6, 0x0, 0x80);
        memset(0xC30AE76, 0x0, 0x40);
        memset(0xC30AEB6, 0x0, 0x40);
        memset(0xC30AEF6, 0x0, 0xA);
        memset(0xC30AF0A, 0x0, 0x70);
        memset(0xC30AF7A, 0x0, 0x4);
        memset(0xC30AF7E, 0x0, 0xA);
        *(unsigned char *)0xC30AF88 = 0x0;
        strcpy(0xC30AD64, 0xC3099A6);
        strcpy(0xC30AD76, 0xC3099C6);
        strcpy(0xC30ADF6, 0xC309A46);
        FUN_0c187cac(0xC30AF7E, 0x0, 0x0, 0x0, 0xC1A5C50, *(volatile int *)0xC309BDC);
        strcpy(0xC30AE76, 0xC309AC6);
        FUN_0c187cac(0xC30AF7A, 0x0, 0x0, 0x0, 0xC1A5C4C, *(volatile signed char *)0xC30A3F0);
        t0 = 0x0;
        for (;;) {
            if ((*(signed char *)((0xC309B06 + t0))) != 32) {
                t1 = (*(signed char *)((0xC309B06 + t0)));
                t2 = t0;
                t0 = (t0 + 0x1);
                *(unsigned char *)((0xC30AEF6 + t2)) = t1;
                if ((int)t0 >= (int)0x7) {
                    break;
                }
                continue;
            }
            break;
        }
        *(unsigned char *)((0xC30AEF6 + t0)) = 0x0;
        strcpy(0xC30AF0A, 0xC309B10);
        strcpy(0xC30AEB6, 0xC309B86);
        (((struct o1_uchar *)0xC30AED5)->v) = 0x0;
        if (((*(signed char *)0xC30AED5) & 0x80) != 0) {
            (((struct o0_uchar *)0xC30AED5)->v) = 0x0;
        }
        *(unsigned char *)0xC30AF88 = (*(signed char *)0xC30A3EE);
        *(unsigned char *)0xC30A403 = 0x1;
        t0 = 0x1;
    }
    return t0;
}

int FUN_0c013aa6(void)
{
    register int t1;
    int t2;

    if (((*(signed char *)0xC30AD64) != 0) && ((t1 = *(signed char *)0xC30AD76, t1 != 0) && (t2 = *(signed char *)0xC30ADF6, t2 != 0))) {
        return 0x1;
    }
    return 0x0;
}

int FUN_0c013b20(int a4)
{
    if ((((int)(unsigned char)a4 >= (int)0x80) && ((int)(unsigned char)a4 <= (int)0x9F)) || (((int)(unsigned char)a4 >= (int)0xE0) && ((int)(unsigned char)a4 <= (int)0xFF))) {
        return 0x0;
    }
    return 0x1;
}

