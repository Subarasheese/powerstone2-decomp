/* Straight-line functions with calls and guards (batch gen_o): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_short { short v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_float { char p[0x10]; float v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1E_short { char p[0x1E]; short v; };
struct o30_short { char p[0x30]; short v; };
struct o30_ushort { char p[0x30]; unsigned short v; };
struct o34_int { char p[0x34]; int v; };
struct o34_uint { char p[0x34]; unsigned int v; };
struct o38_uchar { char p[0x38]; unsigned char v; };
struct o3A_uchar { char p[0x3A]; unsigned char v; };
struct o3B_uchar { char p[0x3B]; unsigned char v; };
struct o3C_uchar { char p[0x3C]; unsigned char v; };
struct o4_float { char p[0x4]; float v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_short { char p[0x40]; short v; };
struct o40_ushort { char p[0x40]; unsigned short v; };
struct o42_ushort { char p[0x42]; unsigned short v; };
struct o44_int { char p[0x44]; int v; };
struct o44_ushort { char p[0x44]; unsigned short v; };
struct o46_ushort { char p[0x46]; unsigned short v; };
struct o48_int { char p[0x48]; int v; };
struct o48_uint { char p[0x48]; unsigned int v; };
struct o4C_short { char p[0x4C]; short v; };
struct o4E_short { char p[0x4E]; short v; };
struct o50_int { char p[0x50]; int v; };
struct o50_uint { char p[0x50]; unsigned int v; };
struct o54_short { char p[0x54]; short v; };
struct o58_int { char p[0x58]; int v; };
struct o5C_int { char p[0x5C]; int v; };
struct o6_short { char p[0x6]; short v; };
struct o74_int { char p[0x74]; int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_float { char p[0xC]; float v; };
struct oC_uint { char p[0xC]; unsigned int v; };
int ADXAMP_SetSfreq(int, int);
int ADXRNA_SetStmHdInfo(int, int);
int ADXSJD_EntryTrapFunc(int, int, int);
int ADXSJD_GetLpEndOfst(int);
int ADXSJD_GetSpsdInfo(int);
int ADXSJD_SetMaxDecSmpl(int, int);
int ADXSJD_SetTrapCnt(int, int);
int ADXSJD_SetTrapDtLen(int, int);
int ADXSJD_SetTrapNumSmpl(int, int);
int ADXSTM_EntryEosFunc(int, int, int);
int ADXSTM_SetEos(int, int);
int ADXT_Stop(int);
int FUN_0c187a88(int, int, int);
int FUN_0c2c30aa(int, ...);
int FUN_0c2c31a4(void);
int FUN_0c2c3394(int);
int FUN_0c2c3892(int);
int FUN_0c2c389e(int);
int FUN_0c2c38aa(int);
int FUN_0c2c38b6(int);
int FUN_0c2c38c2(int);
int FUN_0c2c38da(int);
int FUN_0c2c38f2(int);
int FUN_0c2c3922(int);
int FUN_0c2c4054(int);
int FUN_0c2cb558(int, int, int);
int FUN_0c2d4768(int, int);
int FUN_0c2eb978(int);
int FUN_0c2f7baa(void);
int FUN_0c2f7c34(void);
int FUN_0c2f7f50(void);
int buCalcCRC(int, int, int, int);
int memset(int, int, int);
int thunk_FUN_0c2c5202(int, int);
int thunk_FUN_0c2c5a3c(int, int);
int thunk_FUN_0c2c5ae2(int, int);
int thunk_FUN_0c2c5b3a(int, int);
int thunk_FUN_0c2c5b74(int, int);
int FUN_0c2f7988(void);
int kmyInitializeNTSC(int a4, int a5, int a6);
int FUN_0c2ed220(int a4, int a5, int a6, int a7, int a8);
int FUN_0c2d28e8(int a4, int a5, int a6);
int FUN_0c18dae8(int a4, int a5, int a6);
int kmSetBackGround(int a4, int a5, int a6, int a7, int a8, float f4);
int adxt_stat_decinfo(int a4);
int buMakeBackupFileImage(int a4, int a5);

int FUN_0c2f7988(void)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;

    t1 = FUN_0c2f7f50();
    if ((signed char)t1 == 0) {
        return (signed char)t1;
    }
    t1 = (((struct o0_short *)0xC8E099C)->v);
    if ((int)(unsigned short)t1 > (int)0x2) {
        t2 = (((struct o0_short *)0xC8E099C)->v);
        *(unsigned char *)0xC8E09D9 = (*(signed char *)(((*(int *)0xC8E0AF4) + (unsigned short)t2)));
        t3 = *(short *)0xC8E0ADC;
        if ((unsigned short)t2 == (unsigned short)t3) {
            *(unsigned short *)0xC8DF92E = 0x0;
            t4 = FUN_0c2eb978(0x13);
            *(unsigned int *)0xC8D6814 = 0x5;
            t5 = t4;
        } else {
            t4 = 0xC8E0ADC;
            t6 = (unsigned short)t3;
            t3 = 0xC8E09DA;
            t7 = t2;
            for (;;) {
                if ((int)(unsigned short)t7 < (int)(unsigned short)((((struct o6_short *)0xC8E099C)->v))) {
                    break;
                }
                t4 = (unsigned short)t7;
                t4 = (t4 << 1);
                t7 = (*(short *)(((*(int *)0xC8E0AF8) + t4)));
                t4 = (unsigned short)t7;
                t6 = (*(signed char *)(((*(int *)0xC8E0AF4) + t4)));
                *(unsigned char *)((t3 + 0x0)) = t6;
                t3 = (t3 + 0x1);
            }
            *(unsigned short *)0xC8E0AE4 = (unsigned char)(t3 - 0xC8E09D9);
            (((struct o3B_uchar *)0xC8E099C)->v) = (*(signed char *)(((t3 - 1) + 0x0)));
            t2 = *(short *)0xC8E0AE4;
            t4 = (((struct o30_short *)0xC8E099C)->v);
            (((struct o30_ushort *)0xC8E099C)->v) = (t4 + t2);
            t6 = (t4 + t2);
            t4 = 0xC8E09D7;
            t7 = t2;
            t2 = (t3 - 1);
            t3 = 0xC8E09CC;
            for (;;) {
                if ((unsigned int)t2 < (unsigned int)0xC8E09D9) {
                    break;
                }
                t4 = (*(signed char *)((t2 + 0x0)));
                t3 = (*(signed char *)0xC8E09D8);
                t4 = (unsigned char)t4;
                t7 = (unsigned char)t3;
                if (t4 == t7) {
                    t3 = (t3 + 0x33);
                    (((struct o3C_uchar *)0xC8E099C)->v) = t3;
                }
                t7 = ((((struct o34_int *)0xC8E099C)->v));
                t7 = (t7 + 0x1);
                (((struct o34_uint *)0xC8E099C)->v) = t7;
                t6 = (*(signed char *)((t2 + 0x0)));
                t2 = (t2 - 1);
                *(unsigned char *)(((t7 - 0x1) + 0x0)) = t6;
                t7 = (t7 - 0x1);
            }
            t2 = FUN_0c2f7baa();
            if (((signed char)t2 != 0) && (t0 = *(short *)0xC8E0AEA, t0 != 0)) {
                FUN_0c2f7c34();
            }
            *(unsigned short *)0xC8E0AE8 = (*(short *)0xC8E0AE4);
            *(unsigned short *)0xC8E0AEA = ((((struct o0_short *)0xC8E099C)->v));
            t5 = 0xC8E099C;
        }
        return t5;
    }
    if ((unsigned short)t1 == 0) {
        (((struct o0_uchar *)0xC8E0AD9)->v) = 0x0;
        *(unsigned short *)0xC8E0AEE = 0x0;
        (((struct o38_uchar *)0xC8E099C)->v) = 0x1;
        (((struct o3A_uchar *)0xC8E099C)->v) = 0x1;
        t0 = 0xC8E0AD9;
    } else {
        if ((unsigned short)t1 == 1) {
            (((struct o0_uchar *)0xC8E0AD9)->v) = 0x0;
            *(unsigned short *)0xC8E0AEE = 0x0;
            (((struct o1_uchar *)0xC8E0AD9)->v) = 0x1;
            t2 = (unsigned short)t1;
        } else {
            t3 = (unsigned short)t1;
            if ((unsigned short)t1 == 2) {
                *(unsigned short *)0xC8E0ADE = ((*(short *)0xC8E0ADE) + 0x1);
                t1 = *(short *)0xC8E0ADE;
                if ((unsigned short)t1 == 9) {
                    *(unsigned short *)0xC8E0AE2 = 0x1FF;
                    t4 = 0x1FF;
                } else {
                    if ((unsigned short)t1 == 10) {
                        *(unsigned short *)0xC8E0AE2 = 0x3FF;
                        t5 = (unsigned short)t1;
                    } else {
                        if ((unsigned short)t1 == 11) {
                            *(unsigned short *)0xC8E0AE2 = 0x7FF;
                            t6 = 0x7FF;
                        } else {
                            if ((unsigned short)t1 == 12) {
                                *(unsigned short *)0xC8E0AE2 = 0xFFF;
                                t7 = (unsigned short)t1;
                            } else {
                                if ((unsigned short)t1 == 13) {
                                    *(unsigned short *)0xC8E0AE2 = 0x1FFF;
                                    t7 = 0x1FFF;
                                } else {
                                    if ((unsigned short)t1 == 14) {
                                        *(unsigned short *)0xC8E0AE2 = 0x3FFF;
                                    }
                                    t7 = (unsigned short)t1;
                                }
                            }
                            t6 = t7;
                        }
                        t5 = t6;
                    }
                    t4 = t5;
                }
                t3 = t4;
            }
            t2 = t3;
        }
        t0 = t2;
    }
    return t0;
}

int kmyInitializeNTSC(int a4, int a5, int a6)
{
    int stk[63];
    register int t35;
    register int t43;

    (((struct o0_uint *)0xC8D05CC)->v) = a4;
    FUN_0c2cb558(a4, a5, a6);
    *(unsigned int *)(((int)stk + 8)) = 0x359;
    if (((a4 & 0x1) != 1) && (((0x2C & a4) != 0) && (0x1 != 0))) {
        *(unsigned int *)(((int)stk + 20)) = 0x20C;
    } else {
        *(unsigned int *)(((int)stk + 20)) = 0x106;
    }
    *(unsigned int *)(((int)stk + 0)) = 0x7E;
    *(unsigned int *)(((int)stk + 4)) = 0x345;
    if (((a4 & 0x1) != 1) && ((0x2C & a4) != 0)) {
        *(unsigned int *)(((int)stk + 12)) = 0x24;
        *(unsigned int *)(((int)stk + 16)) = 0x204;
    } else {
        *(unsigned int *)(((int)stk + 12)) = 0x12;
        *(unsigned int *)(((int)stk + 16)) = 0x102;
    }
    *(unsigned int *)(((int)stk + 24)) = 0x3F;
    if ((0x20 & a4) != 0) {
        *(unsigned int *)(((int)stk + 116)) = 0x104;
    } else {
        *(unsigned int *)(((int)stk + 116)) = 0x102;
    }
    *(unsigned int *)(((int)stk + 120)) = 0x15;
    if (((a4 & 0x1) != 1) && ((0x2C & a4) != 0)) {
        *(unsigned int *)(((int)stk + 28)) = 0x6;
    } else {
        *(unsigned int *)(((int)stk + 28)) = 0x3;
    }
    if (((a4 & 0x1) != 1) && ((0x2C & a4) != 0)) {
        *(unsigned int *)(((int)stk + 32)) = 0x16C;
    } else {
        *(unsigned int *)(((int)stk + 32)) = 0x319;
    }
    if (((a4 & 0x1) != 1) && ((0x2C & a4) != 0)) {
        *(unsigned int *)(((int)stk + 36)) = 0x1F;
    } else {
        *(unsigned int *)(((int)stk + 36)) = 0xF;
    }
    *(unsigned int *)(((int)stk + 40)) = 0x1;
    *(unsigned int *)(((int)stk + 44)) = 0x0;
    if ((a4 & 0x1) == 1) {
        if (0x0 != 0) {
            *(unsigned int *)(((int)stk + 48)) = 0x1;
        } else {
            *(unsigned int *)(((int)stk + 48)) = 0x0;
        }
    } else {
        if ((0x2C & a4) != 0) {
            if (0x1 != 0) {
                *(unsigned int *)(((int)stk + 48)) = 0x1;
            } else {
                *(unsigned int *)(((int)stk + 48)) = 0x0;
            }
        } else {
            if (0x0 != 0) {
                *(unsigned int *)(((int)stk + 48)) = 0x1;
            } else {
                *(unsigned int *)(((int)stk + 48)) = 0x0;
            }
        }
    }
    *(unsigned int *)(((int)stk + 52)) = 0x0;
    *(unsigned int *)(((int)stk + 56)) = 0x0;
    *(unsigned int *)(((int)stk + 60)) = 0x0;
    *(unsigned int *)(((int)stk + 64)) = 0x0;
    *(unsigned int *)(((int)stk + 68)) = 0x0;
    *(unsigned int *)(((int)stk + 112)) = 0x16;
    if ((0x10 & a4) != 0) {
        *(unsigned int *)(((int)stk + 108)) = 0x0;
    } else {
        *(unsigned int *)(((int)stk + 108)) = 0x1;
    }
    *(unsigned int *)(((int)stk + 72)) = 0x1;
    *(unsigned int *)(((int)stk + 76)) = 0x0;
    *(unsigned int *)(((int)stk + 80)) = 0x0;
    *(unsigned int *)(((int)stk + 84)) = 0x0;
    *(unsigned int *)(((int)stk + 88)) = 0x0;
    *(unsigned int *)(((int)stk + 92)) = 0x0;
    *(unsigned int *)(((int)stk + 104)) = 0x0;
    *(unsigned int *)(((int)stk + 248)) = 0xA4;
    *(unsigned int *)(((int)stk + 100)) = 0x1E0;
    *(unsigned int *)(((int)stk + 96)) = 0x0;
    if ((a4 & 0x1) == 1) {
        if (0x0 != 0) {
            *(unsigned int *)(((int)stk + 240)) = 0x12;
        } else {
            *(unsigned int *)(((int)stk + 240)) = 0x11;
        }
    } else {
        if ((a4 & 0x2C) != 0) {
            if (0x1 != 0) {
                *(unsigned int *)(((int)stk + 240)) = 0x12;
            } else {
                *(unsigned int *)(((int)stk + 240)) = 0x11;
            }
        } else {
            if (0x0 != 0) {
                *(unsigned int *)(((int)stk + 240)) = 0x12;
            } else {
                *(unsigned int *)(((int)stk + 240)) = 0x11;
            }
        }
    }
    *(unsigned int *)(((int)stk + 244)) = 0x12;
    (((struct o8_uint *)0xC8D0678)->v) = 0xF0;
    t35 = *(int *)(((int)stk + 12));
    (((struct o0_uint *)0xC8D0678)->v) = ((((int)((unsigned int)((int)((unsigned int)t35 + (unsigned int)0x0)) + ((((int)0x0 > (int)t35)) ? 1u : 0u))) >> 1) + ((((struct o8_int *)0xC8D0678)->v)));
    (((struct o4_uint *)0xC8D0678)->v) = (*(int *)(((int)stk + 12)));
    t43 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))(((((struct o8_int *)0xC8D05CC)->v))))(((int)stk + 0), (a4 & 0x1), 0x1, 0x12, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
    return 0x0;
}

int FUN_0c2ed220(int a4, int a5, int a6, int a7, int a8)
{
    register int t0;
    register int t2;
    register int t4;
    int t5;
    register int t50;
    register int t71;

    t0 = a6;
    if ((unsigned char)a6 == 0) {
        t0 = 0xFF;
    }
    t2 = ((signed char)(a8 >> 0));
    if ((unsigned char)((signed char)(a8 >> 0)) == 0) {
        t2 = 0xFF;
    }
    t4 = *(int *)((a4 + 0x0));
    t5 = *(int *)0xC8D65E4;
    *(unsigned int *)((a4 + 0x0)) = (t4 & t5);
    if ((((t4 & t5) & 0x200) != 0) && (((int)(unsigned char)t0 < (int)0x5) || (((int)(unsigned char)t2 < (int)0x18) || (((int)(unsigned char)a5 > (int)0x20) || ((int)(unsigned char)a7 > (int)0x38))))) {
        *(unsigned int *)((a4 + 0x0)) = ((*(int *)((a4 + 0x0))) & 0xFFFFFDFF);
    }
    if ((((*(int *)((a4 + 0x0))) & 0x100) != 0) && (((int)(unsigned char)t0 < (int)0x5) || (((int)(unsigned char)t2 < (int)0x1E) || (((int)(unsigned char)a5 > (int)0x20) || ((int)(unsigned char)a7 > (int)0x38))))) {
        *(unsigned int *)((a4 + 0x0)) = ((*(int *)((a4 + 0x0))) & 0xFFFFFEFF);
    }
    if ((((*(int *)((a4 + 0x0))) & 128) != 0) && (((int)(unsigned char)t0 < (int)0x5) || (((int)(unsigned char)t2 < (int)0x5) || (((int)(unsigned char)a5 > (int)0x20) || ((int)(unsigned char)a7 > (int)0x20))))) {
        *(unsigned int *)((a4 + 0x0)) = ((*(int *)((a4 + 0x0))) & 0xFFFFFF7F);
    }
    if ((((*(int *)((a4 + 0x0))) & 64) != 0) && (((int)(unsigned char)t0 < (int)0x6) || (((int)(unsigned char)a5 > (int)0xC) || (((int)(unsigned char)t2 < (int)0x6) || ((int)(unsigned char)a7 > (int)0xC))))) {
        *(unsigned int *)((a4 + 0x0)) = ((*(int *)((a4 + 0x0))) & 0xFFFFFFBF);
    }
    if (((*(int *)((a4 + 0x0))) & 32) != 0) {
        if (((int)(unsigned char)t0 < (int)0x6) || (((int)(unsigned char)a5 > (int)0x8) || (((int)(unsigned char)t2 < (int)0x6) || ((int)(unsigned char)a7 > (int)0x8)))) {
            *(unsigned int *)((a4 + 0x0)) = ((*(int *)((a4 + 0x0))) & 0xFFFFFFDF);
        }
    }
    if ((((*(int *)((a4 + 0x0))) & 16) != 0) && (((int)(unsigned char)t0 < (int)0x4) || (((int)(unsigned char)a5 > (int)0x5) || (((int)(unsigned char)t2 < (int)0x4) || ((int)(unsigned char)a7 > (int)0x5))))) {
        *(unsigned int *)((a4 + 0x0)) = ((*(int *)((a4 + 0x0))) & 0xFFFFFFEF);
    }
    if ((((*(int *)((a4 + 0x0))) & 8) != 0) && (((int)(unsigned char)t0 < (int)0x4) || (((int)(unsigned char)a5 > (int)0x4) || (((int)(unsigned char)t2 < (int)0x4) || ((int)(unsigned char)a7 > (int)0x4))))) {
        *(unsigned int *)((a4 + 0x0)) = ((*(int *)((a4 + 0x0))) & 0xFFFFFFF7);
    }
    if ((((*(int *)((a4 + 0x0))) & 4) != 0) && ((((int)(unsigned char)t0 < (int)0x4) && ((int)(unsigned char)t2 < (int)0x4)) || ((((int)(unsigned char)a5 > (int)0x1) && ((int)(unsigned char)a7 > (int)0x1)) || (((int)(unsigned char)a5 > (int)0x4) || (((int)(unsigned char)a7 > (int)0x4) || ((((int)(unsigned char)a5 > (int)0x1) && ((int)(unsigned char)t0 < (int)0x4)) || (((int)(unsigned char)a7 > (int)0x1) && ((int)(unsigned char)t2 < (int)0x4)))))))) {
        *(unsigned int *)((a4 + 0x0)) = ((*(int *)((a4 + 0x0))) & 0xFFFFFFFB);
    }
    if ((((*(int *)((a4 + 0x0))) & 2) != 0) && (((int)(unsigned char)t0 < (int)0x2) || (((int)(unsigned char)a5 > (int)0x2) || (((int)(unsigned char)t2 < (int)0x2) || ((int)(unsigned char)a7 > (int)0x2))))) {
        *(unsigned int *)((a4 + 0x0)) = ((*(int *)((a4 + 0x0))) & 0xFFFFFFFD);
    }
    t50 = *(int *)((a4 + 0x0));
    t71 = t50;
    if ((t50 & 1) != 0) {
        if (((int)(unsigned char)t0 >= (int)0x2) && ((int)(unsigned char)a5 <= (int)0x4)) {
            if (((int)(unsigned char)t2 >= (int)0x2) && ((int)(unsigned char)a7 <= (int)0x4)) {
                t71 = (unsigned char)t0;
                if ((unsigned char)t0 == 3) {
                    if ((unsigned char)a5 == 3) {
                        *(unsigned int *)((a4 + 0x0)) = ((*(int *)((a4 + 0x0))) & 0xFFFFFFFE);
                    }
                    t71 = (unsigned char)a5;
                }
            } else {
                *(unsigned int *)((a4 + 0x0)) = ((*(int *)((a4 + 0x0))) & 0xFFFFFFFE);
                t71 = t50;
            }
        } else {
            *(unsigned int *)((a4 + 0x0)) = ((*(int *)((a4 + 0x0))) & 0xFFFFFFFE);
            t71 = t50;
        }
    }
    return t71;
}

int FUN_0c2d28e8(int a4, int a5, int a6)
{
    int t0;
    int t3;
    register int t4;
    register int t5;

    t4 = (((struct o0_int *)0xC8D25F0)->v);
    if ((((unsigned char)(*(signed char *)((t4 + 0x48))) & 0xE0) == 0xE0) && (t0 = *(signed char *)0xC8D25FA, (t0 & 32) == 0)) {
        *(unsigned int *)((a4 + 0x0)) = 0x200;
        *(unsigned char *)((a5 + 0x0)) = (*(signed char *)((0xC303EB8 + (unsigned short)(FUN_0c2d4768(0x2E5, 0x1)))));
        t0 = FUN_0c2d4768(0x2E4, 0x1);
        *(unsigned char *)((a6 + 0x0)) = (*(signed char *)((0xC303ED6 + (unsigned short)t0)));
        t5 = (unsigned short)t0;
    } else {
        if ((((unsigned char)(*(signed char *)((t4 + 0x48))) & 0xF0) == 0x90) && (t5 = *(signed char *)0xC8D25FA, (t5 & 64) == 0)) {
            *(unsigned int *)((a4 + 0x0)) = 0x100;
            *(unsigned char *)((a5 + 0x0)) = (*(signed char *)((0xC303EB8 + (unsigned short)(FUN_0c2d4768(0x2E5, 0x1)))));
            t0 = FUN_0c2d4768(0x2E4, 0x1);
            *(unsigned char *)((a6 + 0x0)) = (*(signed char *)((0xC303EC7 + (unsigned short)t0)));
            t5 = (unsigned short)t0;
        } else {
            if ((((unsigned char)(*(signed char *)((t4 + 0x48))) & 0xF0) != 0xC0) && ((t5 = *(signed char *)0xC8D25FA, (t5 & 64) == 0) && (t3 = *(signed char *)0xC8D25FA, (t3 & 32) == 0))) {
                t0 = *(signed char *)((t4 + 0x48));
                if ((unsigned char)t0 != 82) {
                    if ((unsigned char)t0 != 96) {
                        if ((unsigned char)t0 != 98) {
                            if ((unsigned char)t0 != 113) {
                                if ((unsigned char)t0 != 114) {
                                    if ((unsigned char)t0 != 116) {
                                        if ((unsigned char)t0 != 117) {
                                            if ((unsigned char)t0 != 118) {
                                                if ((unsigned char)t0 != 120) {
                                                    if ((unsigned char)t0 != 0x82) {
                                                        if ((unsigned char)t0 != 0x84) {
                                                            if ((unsigned char)t0 != 0xA0) {
                                                                if ((unsigned char)t0 != 0xA1) {
                                                                    if ((unsigned char)t0 != 0xA4) {
                                                                        *(unsigned int *)((a4 + 0x0)) = 0x8000;
                                                                        *(unsigned char *)((a6 + 0x0)) = 0xFF;
                                                                        *(unsigned char *)((a5 + 0x0)) = 0xFF;
                                                                    } else {
                                                                        *(unsigned int *)((a4 + 0x0)) = 0x4;
                                                                        *(unsigned char *)((a5 + 0x0)) = 0x4;
                                                                        *(unsigned char *)((a6 + 0x0)) = 0x1;
                                                                    }
                                                                } else {
                                                                    *(unsigned int *)((a4 + 0x0)) = 0x4;
                                                                    *(unsigned char *)((a5 + 0x0)) = 0x1;
                                                                    *(unsigned char *)((a6 + 0x0)) = 0x4;
                                                                }
                                                            } else {
                                                                *(unsigned int *)((a4 + 0x0)) = 0x2;
                                                                *(unsigned char *)((a6 + 0x0)) = 0x2;
                                                                *(unsigned char *)((a5 + 0x0)) = 0x2;
                                                            }
                                                        } else {
                                                            *(unsigned int *)((a4 + 0x0)) = 0x10;
                                                            *(unsigned char *)((a6 + 0x0)) = 0x5;
                                                            *(unsigned char *)((a5 + 0x0)) = 0x5;
                                                        }
                                                    } else {
                                                        *(unsigned int *)((a4 + 0x0)) = 0x10;
                                                        *(unsigned char *)((a6 + 0x0)) = 0x4;
                                                        *(unsigned char *)((a5 + 0x0)) = 0x4;
                                                    }
                                                } else {
                                                    *(unsigned int *)((a4 + 0x0)) = 0x40;
                                                    *(unsigned char *)((a6 + 0x0)) = 0x7;
                                                    *(unsigned char *)((a5 + 0x0)) = 0x7;
                                                }
                                            } else {
                                                *(unsigned int *)((a4 + 0x0)) = 0x40;
                                                *(unsigned char *)((a6 + 0x0)) = 0xC;
                                                *(unsigned char *)((a5 + 0x0)) = 0xC;
                                            }
                                        } else {
                                            *(unsigned int *)((a4 + 0x0)) = 0x20;
                                            *(unsigned char *)((a6 + 0x0)) = 0x8;
                                            *(unsigned char *)((a5 + 0x0)) = 0x8;
                                        }
                                    } else {
                                        t5 = 0x20;
                                        if (((unsigned short)((((struct o1E_short *)0xC8D25F0)->v)) & 0x880) != 0) {
                                            t5 = 0x40;
                                        }
                                        *(unsigned int *)((a4 + 0x0)) = t5;
                                        *(unsigned char *)((a6 + 0x0)) = 0x8;
                                        *(unsigned char *)((a5 + 0x0)) = 0x8;
                                    }
                                } else {
                                    *(unsigned int *)((a4 + 0x0)) = 0x40;
                                    *(unsigned char *)((a6 + 0x0)) = 0xB;
                                    *(unsigned char *)((a5 + 0x0)) = 0xB;
                                }
                            } else {
                                t5 = 0x20;
                                if (((unsigned short)((((struct o1E_short *)0xC8D25F0)->v)) & 0x880) != 0) {
                                    t5 = 0x40;
                                }
                                *(unsigned int *)((a4 + 0x0)) = t5;
                                *(unsigned char *)((a6 + 0x0)) = 0x6;
                                *(unsigned char *)((a5 + 0x0)) = 0x6;
                            }
                        } else {
                            *(unsigned int *)((a4 + 0x0)) = 0x1;
                            *(unsigned char *)((a6 + 0x0)) = 0x4;
                            *(unsigned char *)((a5 + 0x0)) = 0x4;
                        }
                    } else {
                        *(unsigned int *)((a4 + 0x0)) = 0x1;
                        *(unsigned char *)((a6 + 0x0)) = 0x2;
                        *(unsigned char *)((a5 + 0x0)) = 0x2;
                    }
                } else {
                    *(unsigned int *)((a4 + 0x0)) = 0x8;
                    *(unsigned char *)((a6 + 0x0)) = 0x4;
                    *(unsigned char *)((a5 + 0x0)) = 0x4;
                }
                t5 = (unsigned char)t0;
            } else {
                *(unsigned int *)((a4 + 0x0)) = 0x80;
                *(unsigned char *)((a5 + 0x0)) = (*(signed char *)((0xC303EB8 + (unsigned short)(FUN_0c2d4768(0x2E5, 0x1)))));
                t0 = FUN_0c2d4768(0x2E4, 0x1);
                *(unsigned char *)((a6 + 0x0)) = (*(signed char *)((0xC303EB8 + (unsigned short)t0)));
                t5 = (unsigned short)t0;
            }
        }
    }
    return t5;
}

int FUN_0c18dae8(int a4, int a5, int a6)
{
    register int t0;
    register int t4;
    int t14;
    register int t15;
    register int t45;
    int t46;
    register int t48;
    register int t61;
    register int t62;
    int t66;
    register int t67;
    int t81;
    register int t82;
    register int t106;
    int t116;
    register int t117;
    register int t140;

    t0 = *(signed char *)((a5 + 0x4));
    if (t0 != 1) {
        if (t0 != 2) {
            t140 = t0;
            if (t0 == 3) {
                t4 = *(signed char *)((a4 + 0x4));
                if (t4 != 1) {
                    if (t4 != 2) {
                        t140 = t4;
                        if (t4 != 3) {
                        } else {
                            t140 = (FUN_0c187a88((*(int *)((a4 + 0x0))), (*(int *)((a5 + 0x0))), (unsigned short)a6));
                        }
                    } else {
                        t14 = *(int *)((a4 + 0x0));
                        t15 = *(int *)0xC8A73D4;
                        t140 = (FUN_0c187a88(((*(int *)((((((unsigned int)((unsigned int)(0xFF000000 & t14) >> 16) >> 8) * 0x3C) + t15) + 0x0))) + ((unsigned short)(*(short *)(((((((unsigned int)(t14 & 0xFF0000) >> 16) << 1) + (((unsigned int)(t14 & 0xFF0000) >> 16) << 2)) + (((((unsigned int)((unsigned int)(0xFF000000 & t14) >> 16) >> 8) * 0x3C) + t15) + 0xC)) + 0x2))) + (unsigned short)t14)), (*(int *)((a5 + 0x0))), (unsigned short)a6));
                    }
                } else {
                    t140 = (FUN_0c187a88((*(int *)((a4 + 0x0))), (*(int *)((a5 + 0x0))), (unsigned short)a6));
                }
            }
        } else {
            t45 = *(signed char *)((a4 + 0x4));
            if (t45 != 1) {
                if (t45 != 2) {
                    t140 = t45;
                    if (t45 != 3) {
                    } else {
                        t46 = *(int *)((a5 + 0x0));
                        t48 = *(int *)0xC8A73D4;
                        t140 = (FUN_0c187a88((*(int *)((a4 + 0x0))), ((*(int *)((((((unsigned int)((unsigned int)(0xFF000000 & t46) >> 16) >> 8) * 0x3C) + t48) + 0x0))) + ((unsigned short)(*(short *)(((((((unsigned int)(0xFF0000 & t46) >> 16) << 1) + (((unsigned int)(0xFF0000 & t46) >> 16) << 2)) + (((((unsigned int)((unsigned int)(0xFF000000 & t46) >> 16) >> 8) * 0x3C) + t48) + 0xC)) + 0x2))) + (unsigned short)t46)), (unsigned short)a6));
                    }
                } else {
                    t61 = *(int *)((a5 + 0x0));
                    t62 = *(int *)0xC8A73D4;
                    t66 = *(int *)((a4 + 0x0));
                    t67 = *(int *)0xC8A73D4;
                    t140 = (FUN_0c187a88(((*(int *)((((((unsigned int)((unsigned int)(0xFF000000 & t66) >> 16) >> 8) * 0x3C) + t67) + 0x0))) + ((unsigned short)(*(short *)(((((((unsigned int)(t66 & 0xFF0000) >> 16) << 1) + (((unsigned int)(t66 & 0xFF0000) >> 16) << 2)) + (((((unsigned int)((unsigned int)(0xFF000000 & t66) >> 16) >> 8) * 0x3C) + t67) + 0xC)) + 0x2))) + (unsigned short)t66)), ((*(int *)((((((unsigned int)((unsigned int)(t61 & 0xFF000000) >> 16) >> 8) * 0x3C) + t62) + 0x0))) + ((unsigned short)(*(short *)(((((((unsigned int)(t61 & 0xFF0000) >> 16) << 1) + (((unsigned int)(t61 & 0xFF0000) >> 16) << 2)) + (((((unsigned int)((unsigned int)(t61 & 0xFF000000) >> 16) >> 8) * 0x3C) + t62) + 0xC)) + 0x2))) + (unsigned short)t61)), (unsigned short)a6));
                }
            } else {
                t81 = *(int *)((a5 + 0x0));
                t82 = *(int *)0xC8A73D4;
                t140 = (FUN_0c187a88((*(int *)((a4 + 0x0))), ((*(int *)((((((unsigned int)((unsigned int)(0xFF000000 & t81) >> 16) >> 8) * 0x3C) + t82) + 0x0))) + ((unsigned short)(*(short *)(((((((unsigned int)(t81 & 0xFF0000) >> 16) << 1) + (((unsigned int)(t81 & 0xFF0000) >> 16) << 2)) + (((((unsigned int)((unsigned int)(0xFF000000 & t81) >> 16) >> 8) * 0x3C) + t82) + 0xC)) + 0x2))) + (unsigned short)t81)), (unsigned short)a6));
            }
        }
    } else {
        t106 = *(signed char *)((a4 + 0x4));
        if (t106 != 1) {
            if (t106 != 2) {
                t140 = t106;
                if (t106 != 3) {
                } else {
                    t140 = (FUN_0c187a88((*(int *)((a4 + 0x0))), (*(int *)((a5 + 0x0))), (unsigned short)a6));
                }
            } else {
                t116 = *(int *)((a4 + 0x0));
                t117 = *(int *)0xC8A73D4;
                t140 = (FUN_0c187a88(((*(int *)((((((unsigned int)((unsigned int)(0xFF000000 & t116) >> 16) >> 8) * 0x3C) + t117) + 0x0))) + ((unsigned short)(*(short *)(((((((unsigned int)(t116 & 0xFF0000) >> 16) << 1) + (((unsigned int)(t116 & 0xFF0000) >> 16) << 2)) + (((((unsigned int)((unsigned int)(0xFF000000 & t116) >> 16) >> 8) * 0x3C) + t117) + 0xC)) + 0x2))) + (unsigned short)t116)), (*(int *)((a5 + 0x0))), (unsigned short)a6));
            }
        } else {
            t140 = (FUN_0c187a88((*(int *)((a4 + 0x0))), (*(int *)((a5 + 0x0))), (unsigned short)a6));
        }
    }
    return t140;
}

int kmSetBackGround(int a4, int a5, int a6, int a7, int a8, float f4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u6;

    (((struct o0_uint *)0xC8BFFD0)->v) = ((*(int *)((a4 + 0x0))) & 0xFFFFFF3F);
    (((struct o4_uint *)0xC8BFFD0)->v) = (*(int *)((a4 + 0x4)));
    (((struct o8_uint *)0xC8BFFD0)->v) = (*(int *)((a4 + 0x8)));
    (((struct oC_uint *)0xC8BFFD0)->v) = (*(int *)((a4 + 0xC)));
    u0 = f4;
    if ((a5 == 7) || ((a5 == 8) || ((a5 == 2) || ((a5 == 10) || ((a5 == 13) || (a5 == 14)))))) {
        if ((((((struct o0_int *)0xC8BFFD0)->v)) & 0x30) != 32) {
            (((struct o10_uint *)0xC8BFFD0)->v) = 0xFFFFFFFF;
            (((struct o14_uint *)0xC8BFFD0)->v) = 0xFFFFFFFF;
            u1 = f4;
        } else {
            t0 = (a4 + 0x10);
            if (((((((struct o0_int *)0xC8BFFD0)->v)) & 4) != 0) || (a5 == 10)) {
                u2 = (((struct o10_float *)((a4 + 0x20)))->v);
                u3 = (u2 * 255.0f);
                if (!(2.14748365e+09f > (u2 * 255.0f))) {
                    u3 = (((u2 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
                }
                u2 = (((struct o14_float *)((a4 + 0x20)))->v);
                u4 = (u2 * 255.0f);
                if (!(2.14748365e+09f > (u2 * 255.0f))) {
                    u4 = (((u2 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
                }
                u2 = (((struct o18_float *)((a4 + 0x20)))->v);
                u5 = (u2 * 255.0f);
                if (!(2.14748365e+09f > (u2 * 255.0f))) {
                    u5 = (((u2 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
                }
                u2 = (((struct o1C_float *)((a4 + 0x20)))->v);
                u6 = (u2 * 255.0f);
                if (!(2.14748365e+09f > (u2 * 255.0f))) {
                    u6 = (((u2 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
                }
                (((struct o14_uint *)0xC8BFFD0)->v) = (((((((int)u3 & 0xFF) << 16) << 8) | (((int)u4 & 0xFF) << 16)) | (((int)u5 & 0xFF) << 8)) | ((int)u6 & 0xFF));
                t0 = (a4 + 0x20);
            }
            u2 = (((struct o4_float *)(t0))->v);
            u3 = (u2 * 255.0f);
            if (!(2.14748365e+09f > (u2 * 255.0f))) {
                u3 = (((u2 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
            }
            u2 = (((struct o8_float *)(t0))->v);
            u4 = (u2 * 255.0f);
            if (!(2.14748365e+09f > (u2 * 255.0f))) {
                u4 = (((u2 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
            }
            u2 = *(float *)((t0 + 0x0));
            u5 = (u2 * 255.0f);
            if (!(2.14748365e+09f > (u2 * 255.0f))) {
                u5 = (((u2 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
            }
            u2 = (((struct oC_float *)(t0))->v);
            u6 = (u2 * 255.0f);
            if (!(2.14748365e+09f > (u2 * 255.0f))) {
                u6 = (((u2 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
            }
            (((struct o10_uint *)0xC8BFFD0)->v) = ((((((int)u3 & 0xFF) << 16) | (((int)u4 & 0xFF) << 8)) | ((((int)u5 & 0xFF) << 16) << 8)) | ((int)u6 & 0xFF));
            u1 = 255.0f;
        }
        u0 = u1;
    }
    if ((a5 == 15) || (a5 == 16)) {
        (((struct o10_uint *)0xC8BFFD0)->v) = (*(int *)((a4 + 0x10)));
        (((struct o14_uint *)0xC8BFFD0)->v) = (*(int *)((a4 + 0x14)));
    }
    (((struct o0_uint *)0xC8D1DA8)->v) = (((((struct o0_int *)0xC8D1DA8)->v)) | 0x1);
    (((struct o10_float *)0xC8D1DA8)->v) = ((((struct oC_float *)(a6))->v));
    t0 = ((int (*)(int, int, int, int, float))((*(int *)(((a5 << 2) + 0xC303BBC)))))(a4, a6, a7, a8, u0);
    t1 = 0x0;
    for (;;) {
        t2 = *(int *)(((0xC8D1DB0 + t1) + 0x0));
        t3 = (0xC8D1DB0 + t1);
        t1 = (t1 + 0x4);
        *(unsigned int *)((t3 + 0x0)) = (t2 | 0x1);
        if ((unsigned int)t1 >= (unsigned int)0x8) {
            break;
        }
    }
    (((struct o0_uint *)0xC8D1DA8)->v) = (((((struct o0_int *)0xC8D1DA8)->v)) & 0xFFFFFFFE);
    return t0;
}


int buMakeBackupFileImage(int a4, int a5)
{
    int stk[3];
    register int t101;
    register int t11;
    register int t12;
    register int t13;
    register int t15;
    register int t17;
    register int t18;
    register int t19;
    register int t21;
    register int t23;
    register int t24;
    register int t25;
    register int t27;
    register int t30;
    register int t32;
    register int t33;
    register int t98;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    int t37;
    int t43;
    register int t94;
    register int t95;

    t101 = 0xFFFFFF00;
    if ((((((struct o4C_short *)(a5))->v)) != 0) && ((t1 = (((struct o4C_short *)(a5))->v), (int)(unsigned short)t1 <= (int)0x3) && ((t2 = (((struct o54_short *)(a5))->v), (int)(unsigned short)t2 <= (int)0x3) && ((t3 = (((struct o44_int *)(a5))->v), t3 != 0) && ((t4 = (((struct o48_int *)(a5))->v), t4 != 0) && ((t5 = (((struct o54_short *)(a5))->v), t5 == 0) || (t6 = (((struct o50_int *)(a5))->v), t6 != 0))))))) {
        memset(a4, 0x0, 0x60);
        memset(a4, 0x20, 0x10);
        memset((a4 + 0x10), 0x20, 0x20);
        memset((a4 + 0x30), 0x0, 0x10);
        t11 = a5;
        t12 = 0x0;
        t13 = a4;
        for (;;) {
            if ((*(signed char *)((t11 + 0x0))) != 0) {
                t15 = *(signed char *)((t11 + 0x0));
                t11 = (t11 + 0x1);
                t12 = (t12 + 0x1);
                *(unsigned char *)((t13 + 0x0)) = t15;
                t13 = (t13 + 0x1);
                if ((int)t12 >= (int)0x10) {
                    break;
                }
                continue;
            }
            break;
        }
        t17 = (a5 + 0x12);
        t18 = 0x0;
        t19 = (a4 + 0x10);
        for (;;) {
            if ((*(signed char *)((t17 + 0x0))) != 0) {
                t21 = *(signed char *)((t17 + 0x0));
                t17 = (t17 + 0x1);
                t18 = (t18 + 0x1);
                *(unsigned char *)((t19 + 0x0)) = t21;
                t19 = (t19 + 0x1);
                if ((int)t18 >= (int)0x20) {
                    break;
                }
                continue;
            }
            break;
        }
        t23 = 0x0;
        t24 = (a5 + 0x34);
        t25 = (a4 + 0x30);
        for (;;) {
            if ((*(signed char *)((t24 + 0x0))) != 0) {
                t27 = *(signed char *)((t24 + 0x0));
                t24 = (t24 + 0x1);
                t23 = (t23 + 0x1);
                *(unsigned char *)((t25 + 0x0)) = t27;
                t25 = (t25 + 0x1);
                if ((int)t23 >= (int)0x10) {
                    break;
                }
                continue;
            }
            break;
        }
        t30 = *(int *)(((((unsigned short)((((struct o4C_short *)(a5))->v)) & 0x3) << 2) + 0xC303704));
        t32 = *(int *)(((((unsigned short)((((struct o54_short *)(a5))->v)) & 0x3) << 2) + 0xC303714));
        t33 = (((struct o5C_int *)(a5))->v);
        (((struct o42_ushort *)(a4))->v) = ((((struct o4E_short *)(a5))->v));
        (((struct o40_ushort *)(a4))->v) = ((((struct o4C_short *)(a5))->v));
        *(unsigned int *)(((int)stk + 0)) = 0x80;
        if ((((((struct o54_short *)(a5))->v)) != 0) && (t37 = (((struct o50_int *)(a5))->v), t37 != 0)) {
            (((struct o44_ushort *)(a4))->v) = ((((struct o54_short *)(a5))->v));
            *(unsigned int *)(((int)stk + 8)) = (t30 + 0x80);
        } else {
            (((struct o44_ushort *)(a4))->v) = 0x0;
            *(unsigned int *)(((int)stk + 8)) = 0x0;
        }
        if ((((((struct o5C_int *)(a5))->v)) != 0) && (t43 = (((struct o58_int *)(a5))->v), t43 != 0)) {
            (((struct o48_uint *)(a4))->v) = ((((struct o5C_int *)(a5))->v));
            *(unsigned int *)(((int)stk + 4)) = ((t30 + t32) + 0x80);
            t94 = ((t30 + t32) + 0x80);
        } else {
            (((struct o48_uint *)(a4))->v) = 0x0;
            *(unsigned int *)(((int)stk + 4)) = 0x0;
            t94 = (t30 + t32);
        }
        if (t30 != 0) {
            FUN_0c187a88((a4 + 0x60), ((((struct o44_int *)(a5))->v)), 0x20);
            FUN_0c187a88(((*(int *)(((int)stk + 0))) + a4), ((((struct o48_int *)(a5))->v)), t30);
        } else {
            t95 = t24;
        }
        if (t32 != 0) {
            FUN_0c187a88(((*(int *)(((int)stk + 8))) + a4), ((((struct o50_int *)(a5))->v)), t32);
        } else {
        }
        if (((((struct o5C_int *)(a5))->v)) != 0) {
            FUN_0c187a88(((*(int *)(((int)stk + 4))) + a4), ((((struct o58_int *)(a5))->v)), ((((struct o5C_int *)(a5))->v)));
        } else {
        }
        if ((0x1FF & ((t33 + (t30 + t32)) + 0x80)) != 0) {
            memset((a4 + ((t33 + (t30 + t32)) + 0x80)), 0x0, (0x200 - (0x1FF & ((t33 + (t30 + t32)) + 0x80))));
        } else {
        }
        (((struct o46_ushort *)(a4))->v) = (buCalcCRC(a4, ((t33 + (t30 + t32)) + 0x80), t94, t95));
        t98 = 0x0;
        if ((0x1FF & ((t33 + (t30 + t32)) + 0x80)) != 0) {
            t98 = 0x1;
        }
        t101 = (t98 + ((unsigned int)((unsigned int)((t33 + (t30 + t32)) + 0x80) >> 8) >> 1));
    }
    return t101;
}
