/* Straight-line functions with calls and guards (batch gen_t): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[29]; } Stk29;
struct o0_int { int v; };
struct o0_short { short v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o0_ushort { unsigned short v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o10C_uint { char p[0x10C]; unsigned int v; };
struct o110_uint { char p[0x110]; unsigned int v; };
struct o12_uchar { char p[0x12]; unsigned char v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_int { char p[0x18]; int v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o2_short { char p[0x2]; short v; };
struct o2_ushort { char p[0x2]; unsigned short v; };
struct o28_int { char p[0x28]; int v; };
struct o2C_uint { char p[0x2C]; unsigned int v; };
struct o30_uint { char p[0x30]; unsigned int v; };
struct o34_uint { char p[0x34]; unsigned int v; };
struct o4_int { char p[0x4]; int v; };
struct o4_short { char p[0x4]; short v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
struct o40_int { char p[0x40]; int v; };
struct o43_uchar { char p[0x43]; unsigned char v; };
struct o44_int { char p[0x44]; int v; };
struct o44_uchar { char p[0x44]; unsigned char v; };
struct o48_int { char p[0x48]; int v; };
struct o4C_int { char p[0x4C]; int v; };
struct o50_int { char p[0x50]; int v; };
struct o50_short { char p[0x50]; short v; };
struct o52_short { char p[0x52]; short v; };
struct o54_int { char p[0x54]; int v; };
struct o54_short { char p[0x54]; short v; };
struct o56_short { char p[0x56]; short v; };
struct o58_int { char p[0x58]; int v; };
struct o58_short { char p[0x58]; short v; };
struct o5A_short { char p[0x5A]; short v; };
struct o5C_int { char p[0x5C]; int v; };
struct o5C_short { char p[0x5C]; short v; };
struct o5E_short { char p[0x5E]; short v; };
struct o6_short { char p[0x6]; short v; };
struct o6_ushort { char p[0x6]; unsigned short v; };
struct o60_int { char p[0x60]; int v; };
struct o60_short { char p[0x60]; short v; };
struct o62_short { char p[0x62]; short v; };
struct o64_int { char p[0x64]; int v; };
struct o64_short { char p[0x64]; short v; };
struct o66_short { char p[0x66]; short v; };
struct o68_int { char p[0x68]; int v; };
struct o68_short { char p[0x68]; short v; };
struct o6A_short { char p[0x6A]; short v; };
struct o6C_int { char p[0x6C]; int v; };
struct o6C_short { char p[0x6C]; short v; };
struct o6E_short { char p[0x6E]; short v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o88_int { char p[0x88]; int v; };
struct oB0_short { char p[0xB0]; short v; };
struct oC_uchar { char p[0xC]; unsigned char v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oD4_int { char p[0xD4]; int v; };
struct oD4_uint { char p[0xD4]; unsigned int v; };
struct oD8_uint { char p[0xD8]; unsigned int v; };
struct oF_uchar { char p[0xF]; unsigned char v; };
int FUN_0c0ed7e4(int);
int FUN_0c0ed8f4(int, int);
int FUN_0c1790e0(void);
int FUN_0c179100(void);
int FUN_0c179130(void);
int FUN_0c179140(int);
int FUN_0c18dad6(int);
int FUN_0c18dcf2(int, int);
int FUN_0c18dd06(int, int);
int FUN_0c18ec78(void);
int FUN_0c18f014(int, int, int, int, int, int);
int FUN_0c1965cc(int, int, int);
int FUN_0c198894(int);
int FUN_0c1988f2(int);
int FUN_0c19c678(int, int, int);
int FUN_0c2b5f20(int);
int FUN_0c2b6700(int, int, int, int);
int FUN_0c2ccce0(int);
int FUN_0c2d4768(int, int);
int FUN_0c2d487c(int, int, int);
int FUN_0c2d7fca(int);
int FUN_0c2d7fd4(int);
int FUN_0c2d8020(int);
int FUN_0c2d8098(int);
int FUN_0c2d835c(int);
int FUN_0c2d850e(int);
int FUN_0c2d86ae(int);
int FUN_0c2d86c8(void);
int FUN_0c2d86e2(int);
int FUN_0c2d93a0(void);
int FUN_0c2d95f0(void);
int FUN_0c2dc1ae(int, ...);
int FUN_0c2e31e0(int, int);
int FUN_0c2e93ac(void);
int FUN_0c2ea256(int, int);
int FUN_0c2ec410(int, int);
int FUN_0c2ec430(int);
int VQAllocEntry(void);
int VQEnQueueTop(int, int);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int adxamp_extract(int, int, int, int);
int gfx_set_background_color(int, int, int);
int kmSetPALEXTCallback(int);
int kmSetSystemConfiguration(int);
int kmyGenerateRegionArray(int, int, int, int, int, int, int, int, int, int, int, int);
int kmyiCheckNativeHandle(int);
int kmytex_TXalloc(int, int, int, int);
int kmytex_TXalloc2(int, int, int, int);
int kmytex_VQFreeEntry(int);
int memset(int, int, int);
int mwlRnaStartCopy(int, int, int, int, int);
int nlLoadDummyTexture(void);
int nlSetWindowSize(float, float, float, float);
int nlSysBeginPass(void);
int strlen(int);
int syChainAddHandler(int, int, int, int);
int syG2DmaResumeAll(void);
int syG2DmaSuspendAll(void);
int thunk_FUN_0c2d7a92(void);
int VQalloc(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12);
int ADX_DecodeInfoWav(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14);
int FUN_0c2bbc84(int a4, int a5, int a6, int a7, int a8, int a9);
int FUN_0c178ac0(int a4, int a5);
int FUN_0c2efc2c(void);
int FUN_0c19c348(int a4, int a5, int a6, int a7);
int kmyCreateRegionArray(int a4);
int FUN_0c2e8574(int a4, int a5);
int FUN_0c2bbaac(void);
int kmyGetFreeSize(int a4, int a5);
int kmiWriteFBRegister(Stk29 s);
int mwlRnaStartTrans(int a4, int a5, int a6, int a7);
int kmEndPass(int a4);
int FUN_0c2e8ebc(int a4, int a5);
int FUN_0c2c2c44(int a4, int a5, int a6, int a7);
int FUN_0c2eaae8(void);
int FUN_0c2e9036(int a4, int a5);
int FUN_0c2f9360(int a4);
int FUN_0c198d84(int a4, int a5, int a6, int a7);

int VQalloc(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
    int stk[17];
    register int t20;
    register int t2;
    register int t3;
    register int t4;
    register int t6;
    register int t32;
    register int t71;
    register int t33;
    register int t38;
    register int t19;
    register int t1;
    register int t5;
    int t9;
    register int t80;
    register int t57;

    stk[4] = a8;
    stk[5] = a9;
    stk[6] = a10;
    stk[7] = a11;
    stk[8] = a12;
    *(unsigned int *)(((int)stk + 12)) = a5;
    t2 = *(int *)0xC304160;
    t20 = 0x0;
    if (t2 != 0) {
        t3 = a5;
        t4 = a6;
        t6 = 0x0;
        for (;;) {
            if ((((unsigned short)(*(short *)((t2 + 0x0))) & 0xF000) == (*(int *)(((((int)stk + 4) + 0x2C) + 0x0)))) && (t9 = *(int *)(((((int)stk + 4) + 0x2C) + 0x10)), t4 = t9, t3 = 0x0, (unsigned int)0x0 < (unsigned int)t4)) {
                for (;;) {
                    t1 = t3;
                    t1 = (t1 << 2);
                    t1 = (t1 + (t2 + 0xC));
                    if ((*(int *)((t1 + 0x0))) == 0) {
                        t5 = t3;
                        t6 = t2;
                        t2 = 0x0;
                        t3 = t4;
                    }
                    t3 = (t3 + 0x1);
                    if ((unsigned int)t3 >= (unsigned int)t4) {
                        break;
                    }
                }
            }
            if (t6 == 0) {
                t2 = (*(int *)((t2 + 0x4)));
            }
            if (t2 == 0) {
                break;
            }
        }
        t19 = t5;
        t20 = t6;
    }
    if (t20 != 0) {
        *(unsigned int *)(((*(int *)(((int)stk + 12))) + 0x0)) = (((t19 * ((unsigned int)(*(int *)(((((int)stk + 4) + 0x2C) + 0x4))) >> 2)) << 2) + (*(int *)((t20 + 0x8))));
        *(unsigned int *)((((t19 << 2) + (t20 + 0xC)) + 0x0)) = (*(int *)(((int)stk + 12)));
        *(unsigned short *)((t20 + 0x0)) = ((*(short *)((t20 + 0x0))) | 0x2);
        t80 = 0x0;
    } else {
        t32 = VQAllocEntry();
        t71 = 0x3;
        if (t32 == 0) {
        } else {
            t33 = (t32 + 0xC);
            for (;;) {
                *(unsigned int *)((t33 + 0x0)) = 0x0;
                t33 = (t33 + 0x4);
                if ((unsigned int)t33 >= (unsigned int)(t32 + 0x4C)) {
                    break;
                }
            }
            VQEnQueueTop(0xC304160, t32);
            *(unsigned short *)((t32 + 0x0)) = ((*(short *)((t32 + 0x0))) | (*(int *)(((((int)stk + 4) + 0x2C) + 0x0))));
            t38 = *(int *)(((((int)stk + 4) + 0x2C) + 0xC));
            if ((*(int *)0xC30411C) == 1) {
                if (a4 != 0) {
                    t57 = (kmytex_TXalloc2(0x4, t38, (t32 + 0x8), 0x0));
                } else {
                    t57 = (kmytex_TXalloc(0x4, t38, (t32 + 0x8), 0x0));
                }
            } else {
                FUN_0c2e31e0(((int)stk + 4), (((int)stk + 4) + 0x4));
                if ((unsigned int)(*(int *)(((int)stk + 4))) < (unsigned int)(*(int *)(((int)stk + 8)))) {
                    if (a4 != 0) {
                        t57 = (kmytex_TXalloc2(0x4, t38, (t32 + 0x8), 0x1));
                    } else {
                        t57 = (kmytex_TXalloc(0x4, t38, (t32 + 0x8), 0x1));
                    }
                } else {
                    if (a4 != 0) {
                        t57 = (kmytex_TXalloc2(0x4, t38, (t32 + 0x8), 0x0));
                    } else {
                        t57 = (kmytex_TXalloc(0x4, t38, (t32 + 0x8), 0x0));
                    }
                }
            }
            if (t57 != 0) {
                kmytex_VQFreeEntry(t32);
                t71 = 0x3;
            } else {
                *(unsigned int *)(((*(int *)(((int)stk + 12))) + 0x0)) = (((0x0 * ((unsigned int)(*(int *)(((((int)stk + 4) + 0x2C) + 0x4))) >> 2)) << 2) + (*(int *)((t32 + 0x8))));
                *(unsigned int *)(((0x0 + (t32 + 0xC)) + 0x0)) = (*(int *)(((int)stk + 12)));
                *(unsigned short *)((t32 + 0x0)) = ((*(short *)((t32 + 0x0))) | 0x2);
                t71 = 0x0;
            }
        }
        t80 = t71;
    }
    return t80;
}

int ADX_DecodeInfoWav(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14)
{
    register int t0;
    register int t1;
    int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;
    register int t10;
    register int t11;
    register int t12;

    if ((int)a5 > 0) {
        t3 = 0x0;
        for (;;) {
            t4 = FUN_0c1965cc((t3 + a4), ((((struct o0_int *)0xC304384)->v)), 0x4);
            if (t4 != 0) {
                t3 = (t3 + 0x1);
                if ((int)t3 >= (int)a5) {
                    break;
                }
                continue;
            }
            break;
        }
        t4 = t3;
    } else {
        t4 = 0x0;
    }
    t3 = 0xFFFFFFFF;
    if (t4 != a5) {
        t5 = ((~(((~t4) + 0x1) & 0x3)) + 0x1);
        if ((int)t4 >= 0) {
            t5 = (t4 & 0x3);
        }
        t6 = 0xFFFFFFFF;
        if (t5 == 0) {
            t5 = 0xFFFFFFFF;
            if ((int)(unsigned short)(*(short *)((((t4 + 0x8) + a4) + 0x0))) <= (int)0x1) {
                if ((int)a5 > 0) {
                    t7 = 0x0;
                    for (;;) {
                        t8 = FUN_0c1965cc((t7 + a4), ((((struct o8_int *)0xC304384)->v)), 0x4);
                        if (t8 != 0) {
                            t7 = (t7 + 0x1);
                            if ((int)t7 >= (int)a5) {
                                break;
                            }
                            continue;
                        }
                        break;
                    }
                    t8 = t7;
                } else {
                    t8 = 0x0;
                }
                t7 = 0xFFFFFFFF;
                if (t8 != a5) {
                    t9 = *(signed char *)((((t8 + 0x4) + a4) + 0x1));
                    t10 = *(signed char *)((((t8 + 0x4) + a4) + 0x0));
                    t11 = *(signed char *)((((t8 + 0x4) + a4) + 0x2));
                    t12 = *(signed char *)((((t8 + 0x4) + a4) + 0x3));
                    *(unsigned short *)((a6 + 0x0)) = (t8 + 0x8);
                    *(unsigned char *)((a7 + 0x0)) = 0xFFFFFFFF;
                    *(unsigned int *)((a11 + 0x0)) = (((((unsigned char)(*(signed char *)(((((t4 + 0x8) + a4) + 0x4) + 0x1))) << 8) | ((unsigned char)(*(signed char *)(((((t4 + 0x8) + a4) + 0x4) + 0x2))) << 16)) | (((unsigned char)(*(signed char *)(((((t4 + 0x8) + a4) + 0x4) + 0x3))) << 16) << 8)) | (unsigned char)(*(signed char *)(((((t4 + 0x8) + a4) + 0x4) + 0x0))));
                    *(unsigned char *)((a10 + 0x0)) = (*(short *)((((t4 + 0x8) + a4) + 0x2)));
                    *(unsigned char *)((a8 + 0x0)) = (*(short *)((((t4 + 0x8) + a4) + 0xE)));
                    *(unsigned char *)((a9 + 0x0)) = (*(short *)((((t4 + 0x8) + a4) + 0xC)));
                    *(unsigned int *)((a12 + 0x0)) = ((int)((int)(((((unsigned char)t9 << 8) | ((unsigned char)t11 << 16)) | (((unsigned char)t12 << 16) << 8)) | (unsigned char)t10) / (int)(*(signed char *)((a9 + 0x0)))));
                    *(unsigned int *)((a13 + 0x0)) = 0x1;
                    t4 = *(signed char *)((a8 + 0x0));
                    if (t4 == 16) {
                        *(unsigned short *)((a14 + 0x0)) = 0x0;
                    } else {
                        if (t4 == 8) {
                            *(unsigned short *)((a14 + 0x0)) = 0x1;
                        } else {
                            if ((*(signed char *)((a8 + 0x0))) == 4) {
                                *(unsigned char *)((a9 + 0x0)) = ((*(signed char *)((a10 + 0x0))) << 1);
                                *(unsigned int *)((a13 + 0x0)) = 0x4;
                                *(unsigned int *)((a12 + 0x0)) = ((int)((unsigned int)((unsigned int)(((((unsigned char)t9 << 8) | ((unsigned char)t11 << 16)) | (((unsigned char)t12 << 16) << 8)) | (unsigned char)t10) >> 1) / (unsigned int)(*(signed char *)((a10 + 0x0)))));
                                *(unsigned char *)((a8 + 0x0)) = 0x10;
                                *(unsigned short *)((a14 + 0x0)) = 0x2;
                            }
                        }
                    }
                    t4 = 0xFFFFFFFF;
                    if (((*(signed char *)((a8 + 0x0))) != 0) && ((t0 = *(signed char *)((a9 + 0x0)), t0 != 0) && ((t1 = *(signed char *)((a10 + 0x0)), (int)t1 > 0) && (((int)t1 <= (int)0x2) && (t2 = *(int *)((a11 + 0x0)), t2 != 0))))) {
                        t4 = 0x0;
                    }
                    t7 = t4;
                }
                t5 = t7;
            }
            t6 = t5;
        }
        t3 = t6;
    }
    return t3;
}

int FUN_0c2bbc84(int a4, int a5, int a6, int a7, int a8, int a9)
{
    int stk[4];
    register int t9;
    register int t15;
    register int t19;
    register int t24;
    register int t55;
    register int t83;
    register int t84;
    register int t22;
    register int t23;
    register int t27;
    register int t53;
    register int t54;
    register int t58;
    register int t82;
    register int t87;

    *(unsigned int *)(((int)stk + 0)) = a5;
    *(unsigned int *)(((int)stk + 4)) = a6;
    if (((((struct oD4_int *)((*(int *)0xC304080)))->v)) == 1) {
        *(unsigned int *)(((int)stk + 12)) = (_builtin_get_imask());
        _builtin_set_imask(0xF);
    }
    t9 = 0x0;
    if (a8 != 0) {
        t9 = 0x1;
        if (a8 != 1) {
            if (a8 != 2) {
            } else {
                t9 = 0xFFFFFFFF;
            }
        }
    }
    t15 = 0x0;
    if (a9 != 0) {
        t15 = 0x1;
        if (a9 != 1) {
            if (a9 != 2) {
            } else {
                t15 = 0xFFFFFFFF;
            }
        }
    }
    syG2DmaSuspendAll();
    FUN_0c2d95f0();
    t19 = *(int *)(((int)stk + 4));
    if (t19 != 1) {
        if (t19 != 2) {
            if (t19 == 4) {
                *(unsigned int *)(((int)stk + 4)) = (*(int *)(((int)stk + 0)));
                *(unsigned int *)(((int)stk + 0)) = a4;
                *(unsigned int *)(((int)stk + 8)) = (t9 << 2);
                if ((int)a7 > 0) {
                    t24 = 0x0;
                    for (;;) {
                        if ((t24 & 0x7) == 0) {
                            FUN_0c2d95f0();
                            FUN_0c2d93a0();
                        } else {
                            t27 = t22;
                        }
                        t22 = t27;
                        t23 = (*(int *)(((int)stk + 0)));
                        t24 = (t24 + 0x1);
                        t22 = (*(int *)(((int)stk + 4)));
                        *(unsigned int *)((t22 + 0x0)) = (*(int *)((t23 + 0x0)));
                        t22 = (*(int *)(((int)stk + 0)));
                        t23 = (*(int *)(((int)stk + 8)));
                        t22 = (t22 + t23);
                        *(unsigned int *)(((int)stk + 0)) = t22;
                        *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + (t15 << 2));
                        if ((int)t24 >= (int)a7) {
                            break;
                        }
                    }
                }
            }
        } else {
            *(unsigned int *)(((int)stk + 4)) = (*(int *)(((int)stk + 0)));
            *(unsigned int *)(((int)stk + 0)) = a4;
            if ((int)a7 > 0) {
                t55 = 0x0;
                for (;;) {
                    if ((t55 & 0x7) == 0) {
                        FUN_0c2d95f0();
                        FUN_0c2d93a0();
                    } else {
                        t58 = t53;
                    }
                    t53 = t58;
                    t54 = (*(int *)(((int)stk + 0)));
                    t55 = (t55 + 0x1);
                    t53 = (*(int *)(((int)stk + 4)));
                    *(unsigned short *)((t53 + 0x0)) = (*(short *)((t54 + 0x0)));
                    t54 = (*(int *)(((int)stk + 0)));
                    t54 = (t54 + (t9 << 1));
                    *(unsigned int *)(((int)stk + 0)) = t54;
                    *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + (t15 << 1));
                    if ((int)t55 >= (int)a7) {
                        break;
                    }
                }
            }
        }
    } else {
        t83 = *(int *)(((int)stk + 0));
        *(unsigned int *)(((int)stk + 4)) = t83;
        *(unsigned int *)(((int)stk + 0)) = a4;
        if ((int)a7 > 0) {
            t84 = 0x0;
            for (;;) {
                if ((t84 & 0x7) == 0) {
                    FUN_0c2d95f0();
                    FUN_0c2d93a0();
                } else {
                    t87 = t82;
                }
                t82 = t87;
                t83 = (*(int *)(((int)stk + 0)));
                t84 = (t84 + 0x1);
                t82 = (*(int *)(((int)stk + 4)));
                *(unsigned char *)((t82 + 0x0)) = (*(signed char *)((t83 + 0x0)));
                t83 = (*(int *)(((int)stk + 0)));
                t83 = (t83 + t9);
                *(unsigned int *)(((int)stk + 0)) = t83;
                *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + t15);
                if ((int)t84 >= (int)a7) {
                    break;
                }
            }
        }
    }
    syG2DmaResumeAll();
    if (((((struct oD4_int *)((*(int *)0xC304080)))->v)) == 1) {
        _builtin_set_imask(((unsigned int)((((*(int *)(((int)stk + 12))) & 0xF) << 2) << 2) >> 4));
    }
    return 0x0;
}

int FUN_0c178ac0(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    (((struct oC_uint *)0xC83CFE0)->v) = 0x0;
    if ((a4 != 0) && ((a4 != 21) && ((a4 != 21) && (a4 != 21)))) {
    } else {
        (((struct oC_uint *)0xC83CFE0)->v) = 0x1;
    }
    (((struct o10_uint *)0xC83CFE0)->v) = 0x0;
    if ((a4 == 25) || ((a4 == 24) || ((a4 == 26) || (a4 == 27)))) {
        (((struct o10_uint *)0xC83CFE0)->v) = 0x1;
    }
    if (((((struct o0_int *)0xC83CFE0)->v)) == 0) {
        FUN_0c179130();
        FUN_0c179140(0x0);
        FUN_0c179100();
    }
    (((struct o4_ushort *)0xC8A6CA8)->v) = 0x0;
    (((struct o6_ushort *)0xC8A6CA8)->v) = 0x0;
    if ((0x80 & a5) != 0) {
        (((struct o4_ushort *)0xC8A6CA8)->v) = 0x1;
    }
    if ((0x8000 & a5) != 0) {
        (((struct o6_ushort *)0xC8A6CA8)->v) = 0x1;
    }
    t0 = *(int *)((((a5 & 0xF) << 2) + 0xC205A74));
    if (((((struct o10_int *)0xC83CFE0)->v)) == 1) {
        kmSetPALEXTCallback(0xC1773F0);
    }
    FUN_0c2b6700((*(int *)((((((a4 << 1) + a4) << 2) + 0xC205924) + 0x4))), t0, ((((struct o4_short *)0xC8A6CA8)->v)), ((((struct o6_short *)0xC8A6CA8)->v)));
    (((struct o0_ushort *)0xC8A6CA8)->v) = (*(short *)((((((a4 << 1) + a4) << 2) + 0xC205924) + 0x8)));
    (((struct o2_ushort *)0xC8A6CA8)->v) = (*(short *)((((((a4 << 1) + a4) << 2) + 0xC205924) + 0xA)));
    t0 = kmSetSystemConfiguration(0xC83CD8C);
    nlLoadDummyTexture();
    (((struct o34_uint *)0xC83CFE0)->v) = 0x1;
    gfx_set_background_color(((((struct o0_int *)0xC2A6084)->v)), ((((struct o4_int *)0xC2A6084)->v)), ((((struct o8_int *)0xC2A6084)->v)));
    t1 = (((struct o2_short *)0xC8A6CA8)->v);
    t2 = (((struct o0_short *)0xC8A6CA8)->v);
    if (0x0 != 0) {
        t3 = (short)t1;
        if (((((struct o6_short *)0xC8A6CA8)->v)) == 1) {
            t3 = ((short)t1 + (short)t1);
            if ((int)((short)t1 + (short)t1) > (int)0x1E0) {
                t3 = 0x1E0;
            }
        }
        nlSetWindowSize(0.0f, 0.0f, (float)t2, (float)t3);
    } else {
        nlSetWindowSize(0.0f, 0.0f, (float)t2, (float)(short)t1);
    }
    if (((((struct o0_int *)0xC83CFE0)->v)) == 0) {
        FUN_0c1790e0();
        nlSysBeginPass();
    }
    return t0;
}

int FUN_0c2efc2c(void)
{
    int stk[9];
    register int t105;
    register int t116;
    register int t107;
    int t21;
    int t34;
    int t43;
    int t52;
    int t61;
    int t70;
    int t79;
    int t88;
    int t97;

    *(unsigned int *)(((((int)stk + 0) + 0x10) + 0xC)) = (((int)stk + 0) + 0x10);
    *(unsigned int *)(((((int)stk + 0) + 0x10) + 0x8)) = ((((int)stk + 0) + 0x10) + 0x1);
    *(unsigned int *)(((((int)stk + 0) + 0x10) + 0x4)) = (((((int)stk + 0) + 0x10) + 0x1) - 1);
    *(unsigned int *)((((int)stk + 0) + 0xC)) = ((int)stk + 0);
    *(unsigned int *)((((int)stk + 0) + 0x8)) = (((int)stk + 0) + 0x1);
    *(unsigned int *)((((int)stk + 0) + 0x4)) = ((((int)stk + 0) + 0x1) - 1);
    *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0x0)) = (*(signed char *)(((*(int *)(((*(int *)0xC8BFFE8) + 0xC))) + 0x43)));
    *(unsigned char *)(((*(int *)(((int)stk + 24))) + 0x0)) = (*(signed char *)(((*(int *)(((*(int *)0xC8BFFE8) + 0xC))) + 0x44)));
    (((struct o43_uchar *)((*(int *)(((*(int *)0xC8BFFE8) + 0xC)))))->v) = 0x0;
    (((struct o44_uchar *)((*(int *)(((*(int *)0xC8BFFE8) + 0xC)))))->v) = 0x0;
    *(unsigned char *)(((*(int *)(((int)stk + 4))) + 0x0)) = (*(signed char *)(((*(int *)(((*(int *)0xC8BFFE8) + 0xC))) + 0x41)));
    *(unsigned char *)(((*(int *)(((int)stk + 8))) + 0x0)) = (*(signed char *)(((*(int *)(((*(int *)0xC8BFFE8) + 0xC))) + 0x42)));
    if ((((*(signed char *)(((((int)stk + 0) + 0x10) + 0x0))) & 16) != 0) && (t21 = *(signed char *)((((int)stk + 0) + 0x0)), (t21 & 16) == 0)) {
        FUN_0c2d835c((*(int *)0xC8BFFE8));
    }
    if (((*(signed char *)(((((int)stk + 0) + 0x10) + 0x0))) & 4) != 0) {
        *(volatile signed char *)((((int)stk + 0) + 0x0));
    }
    if ((((*(signed char *)(((((int)stk + 0) + 0x10) + 0x0))) & 8) != 0) && (t34 = *(signed char *)((((int)stk + 0) + 0x0)), (t34 & 8) == 0)) {
        FUN_0c2d7fca((*(int *)0xC8BFFE8));
    }
    if ((((*(signed char *)(((((int)stk + 0) + 0x10) + 0x0))) & 32) != 0) && (t43 = *(signed char *)((((int)stk + 0) + 0x0)), (t43 & 32) == 0)) {
        FUN_0c2d7fd4((*(int *)0xC8BFFE8));
    }
    if ((((*(signed char *)(((((int)stk + 0) + 0x10) + 0x0))) & 64) != 0) && (t52 = *(signed char *)((((int)stk + 0) + 0x0)), (t52 & 64) == 0)) {
        FUN_0c2d8098((*(int *)0xC8BFFE8));
    }
    if ((((*(signed char *)(((((int)stk + 0) + 0x10) + 0x0))) & 128) != 0) && (t61 = *(signed char *)((((int)stk + 0) + 0x0)), (t61 & 128) == 0)) {
        *(volatile int *)0xC8BFFE8;
        thunk_FUN_0c2d7a92();
    }
    if (((unsigned short)((*(signed char *)(((((int)stk + 0) + 0x11) + 0x0))) & 0x1) != 0) && (t70 = *(signed char *)(((((int)stk + 0) + 0x1) + 0x0)), (unsigned short)(t70 & 0x1) == 0)) {
        FUN_0c2d850e((*(int *)0xC8BFFE8));
    }
    if ((((*(signed char *)(((((int)stk + 0) + 0x11) + 0x0))) & 4) != 0) && (t79 = *(signed char *)(((((int)stk + 0) + 0x1) + 0x0)), (t79 & 4) == 0)) {
        FUN_0c2d8020((*(int *)0xC8BFFE8));
    }
    if ((((*(signed char *)(((((int)stk + 0) + 0x11) + 0x0))) & 2) != 0) && (t88 = *(signed char *)(((((int)stk + 0) + 0x1) + 0x0)), (t88 & 2) == 0)) {
        *(volatile int *)0xC8BFFE8;
        FUN_0c2d86c8();
    }
    if ((((*(signed char *)(((((int)stk + 0) + 0x11) + 0x0))) & 8) != 0) && (t97 = *(signed char *)(((((int)stk + 0) + 0x1) + 0x0)), (t97 & 8) == 0)) {
        FUN_0c2d86ae((*(int *)0xC8BFFE8));
    }
    t105 = *(signed char *)(((((int)stk + 0) + 0x13) + 0x0));
    t116 = t105;
    if ((t105 & 128) != 0) {
        t107 = *(signed char *)(((((int)stk + 0) + 0x3) + 0x0));
        t116 = t107;
        if ((t107 & 128) == 0) {
            t116 = (FUN_0c2d86e2((*(int *)0xC8BFFE8)));
        }
    }
    return t116;
}

int FUN_0c19c348(int a4, int a5, int a6, int a7)
{
    int stk[17];
    register int t0;
    register int t96;
    register int t8;
    register int t11;
    register int t40;
    register int t46;
    register int t50;
    register int t53;
    register int t63;
    register int t65;
    register int t67;
    register int t70;
    int t30;
    register int t31;
    register int t32;

    *(unsigned int *)(((int)stk + 24)) = a5;
    *(unsigned short *)(((int)stk + 28)) = a6;
    t0 = FUN_0c18ec78();
    t96 = 0xFFFFFFFF;
    if (t0 == -1) {
    } else {
        if ((*(signed char *)(((((((a7 << 1) + a7) << 2) << 2) + (*(int *)0xC8A73C4)) + 0xB))) != 0) {
            *(unsigned int *)((a4 + 0x4)) = ((*(int *)((a4 + 0x4))) - 42);
            t8 = *(int *)((a4 + 0x0));
            *(unsigned short *)(((((((t8 - 1) << 1) + (t8 - 1)) << 2) + (a4 + 0x8)) + 0x0)) = ((*(short *)(((((((t8 - 1) << 1) + (t8 - 1)) << 2) + (a4 + 0x8)) + 0x0))) - 42);
            t11 = *(int *)((a4 + 0x0));
            FUN_0c18dd06(((((((t11 - 1) << 1) + (t11 - 1)) << 2) + (a4 + 0x8)) + 0x4), 0x2A);
        }
        t96 = 0xFFFFFFFF;
        if ((int)a7 >= (int)(unsigned char)(*(signed char *)0xC8A738D)) {
        } else {
            t96 = 0xFFFFFFFF;
            if (((int)a7 >= 0) && (t30 = (int)(((unsigned int)a7) >> 31), t31 = *(int *)0xC8A73C4, t32 = *(short *)(((((((a7 << 1) + a7) << 2) << 2) + t31) + 0x8)), t32 != 0)) {
                t40 = *(int *)0xC8A73C4;
                if ((*(signed char *)(((((((a7 << 1) + a7) << 2) << 2) + t40) + 0x14))) == 0) {
                    *(unsigned int *)(((((((a7 << 1) + a7) << 2) << 2) + t40) + 0x18)) = (*(int *)(((int)stk + 24)));
                }
                t46 = *(int *)(((((((a7 << 1) + a7) << 2) << 2) + t40) + 0x18));
                if ((*(signed char *)(((((((a7 << 1) + a7) << 2) << 2) + t40) + 0x15))) == 0) {
                    *(unsigned short *)(((((((a7 << 1) + a7) << 2) << 2) + t40) + 0xE)) = (*(short *)(((int)stk + 28)));
                }
                t50 = FUN_0c198894(t46);
                *(unsigned int *)(((int)stk + 24)) = t50;
                t96 = 0xFFFFFFFF;
                if (t50 != 0) {
                    *(unsigned short *)(((((((a7 << 1) + a7) << 2) << 2) + t40) + 0x10)) = (FUN_0c18dad6(((*(int *)((a4 + 0x4))) + 0x8)));
                    t53 = *(int *)((a4 + 0x0));
                    *(unsigned int *)(((int)stk + 28)) = (((t53 << 1) + t53) << 2);
                    *(unsigned short *)((((((t53 << 1) + t53) << 2) + (a4 + 0x8)) + 0x0)) = 0x8;
                    *(unsigned int *)((a4 + 0x4)) = ((*(int *)((a4 + 0x4))) + 0x8);
                    FUN_0c18dcf2((((a4 + 0x8) + (*(int *)(((int)stk + 28)))) + 0x4), ((((((a7 << 1) + a7) << 2) << 2) + t40) + 0xC));
                    *(unsigned int *)((a4 + 0x0)) = ((*(int *)((a4 + 0x0))) + 0x1);
                    *(unsigned int *)(((int)stk + 32)) = (FUN_0c1988f2((*(int *)(((int)stk + 24)))));
                    *(unsigned int *)(((int)stk + 36)) = t46;
                    *(unsigned char *)(((int)stk + 40)) = 0x0;
                    *(unsigned char *)(((int)stk + 41)) = 0x11;
                    *(unsigned short *)(((int)stk + 42)) = (FUN_0c18dad6((*(int *)((a4 + 0x4)))));
                    *(unsigned short *)(((((((a7 << 1) + a7) << 2) << 2) + t40) + 0x12)) = 0x0;
                    t63 = FUN_0c19c678((((int)stk + 24) + 0x8), a4, 0x1);
                    (((struct o12_uchar *)((((((a7 << 1) + a7) << 2) << 2) + t40)))->v) = ((unsigned int)(unsigned short)t63 >> 8);
                    *(unsigned char *)(((((((((a7 << 1) + a7) << 2) << 2) + t40) + 0x12) + 0x1) + 0x0)) = t63;
                    *(int *)((int)stk + 20) = 0x0;
                    *(int *)((int)stk + 16) = 0x11;
                    *(int *)((int)stk + 12) = 0x0;
                    *(int *)((int)stk + 8) = 0x0;
                    t65 = (*(signed char *)(((((((a7 << 1) + a7) << 2) << 2) + t40) + 0x2D)));
                    *(int *)((int)stk + 4) = t65;
                    t67 = (*(signed char *)(((((((a7 << 1) + a7) << 2) << 2) + t40) + 0x2C)));
                    *(int *)((int)stk + 0) = t67;
                    t70 = FUN_0c18f014(a4, t46, (*(signed char *)(((((((a7 << 1) + a7) << 2) << 2) + t40) + 0xB))), (*(signed char *)(((((((a7 << 1) + a7) << 2) << 2) + t40) + 0x2E))), t67, t65);
                    t96 = 0x0;
                    if (t70 != 0) {
                        t96 = 0xFFFFFFFF;
                    }
                }
            }
        }
    }
    return t96;
}

int kmyCreateRegionArray(int a4)
{
    int stk[9];
    register int t0;
    register int t65;
    register int t2;
    register int t3;
    register int t4;
    register int t22;
    register int t8;
    register int t9;
    register int t11;
    register int t12;
    register int t13;
    register int t14;
    register int t15;
    register int t16;
    register int t17;
    register int t18;
    register int t57;
    register int t29;
    register int t35;
    register int t55;
    register int t41;
    register int t42;
    register int t46;
    register int t1;

    t0 = kmyiCheckNativeHandle(a4);
    t65 = 0xEEEE;
    if ((t0 != 0) && ((t1 = *(int *)((a4 + 0xC)), t1 != 0) && ((unsigned int)t1 <= (unsigned int)0x8))) {
        t2 = *(int *)((a4 + 0x8));
        t3 = *(int *)((a4 + 0x4));
        t4 = *(int *)((a4 + 0xC));
        *(unsigned int *)(((int)stk + 0)) = ((t3 * t2) << 2);
        t22 = 0x0;
        if ((unsigned int)0x0 < (unsigned int)(*(int *)((a4 + 0xC)))) {
            t8 = 0x0;
            t9 = 0x0;
            for (;;) {
                t11 = *(int *)(((((t9 << 2) << 1) + (a4 + 0x48)) + 0x0));
                t12 = *(int *)((0xC300074 + ((((unsigned int)((unsigned int)t11 >> 2) >> 2) & 0x3) << 2)));
                t13 = *(int *)((0xC300074 + ((((unsigned int)t11 >> 8) & 0x3) << 2)));
                t14 = *(int *)((0xC300074 + ((((unsigned int)((unsigned int)((unsigned int)t11 >> 8) >> 2) >> 2) & 0x3) << 2)));
                t15 = *(int *)((0xC300074 + ((((unsigned int)t11 >> 16) & 0x3) << 2)));
                t16 = *(int *)((0xC300074 + ((t11 & 0x3) << 2)));
                t17 = *(int *)(((int)stk + 0));
                t18 = t9;
                t9 = (t9 + 0x1);
                *(unsigned int *)(((((int)stk + 0) + 0x4) + (t18 << 2))) = (((((t12 + t13) + t14) + t15) + t16) * t17);
                t8 = (t8 + (((((t12 + t13) + t14) + t15) + t16) * t17));
                if ((unsigned int)t9 >= (unsigned int)(*(int *)((a4 + 0xC)))) {
                    break;
                }
            }
            t22 = t8;
        }
        t57 = 0xEEEE;
        if ((unsigned int)(t22 + ((((((t3 * t2) * t4) << 1) + ((t3 * t2) * t4)) << 2) << 1)) > (unsigned int)(*(int *)(((a4 + 0x18) + 0x4)))) {
        } else {
            t29 = *(int *)(((a4 + 0x18) + 0x4));
            *(unsigned int *)(((a4 + 0x18) + 0x10)) = ((((*(int *)(((a4 + 0x18) + 0xC))) - t22) - 256) & 0xFFFFFF80);
            *(unsigned int *)(((a4 + 0x18) + 0x18)) = ((((((unsigned int)((t29 - t22) - ((((((t3 * t2) * t4) << 1) + ((t3 * t2) * t4)) << 2) << 1)) >> 2) << 1) + ((unsigned int)((t29 - t22) - ((((((t3 * t2) * t4) << 1) + ((t3 * t2) * t4)) << 2) << 1)) >> 2)) + (*(int *)(((a4 + 0x18) + 0x0)))) & 0xFFFFFFE0);
            *(unsigned int *)(((a4 + 0x18) + 0x1C)) = (*(int *)(((a4 + 0x18) + 0x10)));
            *(unsigned int *)(((a4 + 0x18) + 0x14)) = (0xFFFFFF00 + (*(int *)(((a4 + 0x18) + 0x18))));
            t35 = (((struct o88_int *)(a4))->v);
            *(unsigned int *)((t35 + 0x8)) = (((*(int *)((t35 + 0x8))) & 0xFF000000) | (((*(int *)(((a4 + 0x18) + 0x24))) - (*(int *)(((a4 + 0x18) + 0x8)))) << 1));
            t55 = 0x0;
            if ((unsigned int)0x0 < (unsigned int)(*(int *)((a4 + 0xC)))) {
                t41 = 0x0;
                t42 = 0x0;
                for (;;) {
                    *(unsigned int *)(((((t41 << 2) << 1) + ((a4 + 0x18) + 0x30)) + 0x4)) = ((*(int *)(((a4 + 0x18) + 0x10))) + t42);
                    t46 = (t41 << 2);
                    t41 = (t41 + 0x1);
                    t42 = (t42 + (*(int *)(((((int)stk + 0) + 0x4) + t46))));
                    if ((unsigned int)t41 >= (unsigned int)(*(int *)((a4 + 0xC)))) {
                        break;
                    }
                }
                t55 = t42;
            }
            kmyGenerateRegionArray(a4, (a4 + 0x18), a4, t55, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
            t57 = 0x0;
        }
        t65 = t57;
    }
    return t65;
}

int FUN_0c2e8574(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;

    t0 = 0x0;
    if (((unsigned char)(*(signed char *)0xC8D646F) & 1) != 0) {
        t0 = 0x1;
    }
    t1 = t0;
    if (((unsigned char)(*(signed char *)0xC8D646F) & 2) != 0) {
        t1 = (t0 + 0x1);
    }
    t0 = t1;
    if (((unsigned char)(*(signed char *)0xC8D646F) & 4) != 0) {
        t0 = (t1 + 0x1);
    }
    t1 = t0;
    if (((unsigned char)(*(signed char *)0xC8D646F) & 8) != 0) {
        t1 = (t0 + 0x1);
    }
    t0 = t1;
    if (((unsigned char)(*(signed char *)0xC8D646F) & 16) != 0) {
        t0 = (t1 + 0x1);
    }
    t1 = t0;
    if (((unsigned char)(*(signed char *)0xC8D646F) & 32) != 0) {
        t1 = (t0 + 0x1);
    }
    t0 = t1;
    if (((unsigned char)(*(signed char *)0xC8D646F) & 64) != 0) {
        t0 = (t1 + 0x1);
    }
    t1 = t0;
    if (((unsigned char)(*(signed char *)0xC8D646F) & 128) != 0) {
        t1 = (t0 + 0x1);
    }
    t0 = 0x0;
    if (((unsigned char)(*(signed char *)0xC8D6470) & 0x1) != 0) {
        t0 = 0x1;
    }
    t2 = t0;
    if (((unsigned char)(*(signed char *)0xC8D6470) & 2) != 0) {
        t2 = (t0 + 0x1);
    }
    t0 = t2;
    if (((unsigned char)(*(signed char *)0xC8D6470) & 4) != 0) {
        t0 = (t2 + 0x1);
    }
    t2 = t0;
    if (((unsigned char)(*(signed char *)0xC8D6470) & 8) != 0) {
        t2 = (t0 + 0x1);
    }
    t0 = t2;
    if (((unsigned char)(*(signed char *)0xC8D6470) & 16) != 0) {
        t0 = (t2 + 0x1);
    }
    t2 = t0;
    if (((unsigned char)(*(signed char *)0xC8D6470) & 32) != 0) {
        t2 = (t0 + 0x1);
    }
    t0 = t2;
    if (((unsigned char)(*(signed char *)0xC8D6470) & 64) != 0) {
        t0 = (t2 + 0x1);
    }
    t2 = *(signed char *)0xC8D6470;
    t3 = t0;
    if (((unsigned char)t2 & 128) != 0) {
        t3 = (t0 + 0x1);
    }
    if (((unsigned char)(*(signed char *)0xC8D6457) & 0x30) == 0) {
        if ((unsigned char)(t1 & 0x1) == 0) {
            t0 = (unsigned char)t2;
            t2 = (*(signed char *)0xC8D646F);
        } else {
            t4 = *(signed char *)0xC8D646F;
            t0 = (t4 | 0x80);
            t2 = (t4 | 0x80);
        }
        if ((unsigned char)(t3 & 0x1) != 0) {
            t4 = *(signed char *)0xC8D6470;
            t5 = (t4 | 0x80);
            t6 = (t4 | 0x80);
        } else {
            t5 = t0;
            t6 = (*(signed char *)0xC8D6470);
        }
        t0 = t5;
        t4 = t6;
        t5 = t2;
    } else {
        t2 = *(signed char *)0xC8D6457;
        if (((unsigned char)t2 & 0x30) == 16) {
            t6 = ((unsigned char)t2 & 0x30);
            t4 = (*(signed char *)0xC8D6470);
            t5 = (*(signed char *)0xC8D646F);
        } else {
            if (((unsigned char)t2 & 0x30) == 32) {
                if ((unsigned char)(t1 & 0x1) != 0) {
                    t1 = ((unsigned char)t2 & 0x30);
                    t2 = (*(signed char *)0xC8D646F);
                } else {
                    t6 = *(signed char *)0xC8D646F;
                    t1 = (t6 | 0x80);
                    t2 = (t6 | 0x80);
                }
                if ((unsigned char)(t3 & 0x1) != 0) {
                    t3 = t1;
                    t1 = (*(signed char *)0xC8D6470);
                } else {
                    t6 = *(signed char *)0xC8D6470;
                    t3 = (t6 | 0x80);
                    t1 = (t6 | 0x80);
                }
                t6 = t3;
                t3 = t1;
                t1 = t2;
            } else {
                t2 = *(signed char *)0xC8D6470;
                t6 = (t2 | 0x80);
                t3 = (t2 | 0x80);
                t1 = ((*(signed char *)0xC8D646F) | 0x80);
            }
            t4 = t3;
            t5 = t1;
        }
        t0 = t6;
    }
    *(unsigned char *)((a4 + 0x0)) = t5;
    *(unsigned char *)((a5 + 0x0)) = t4;
    return t0;
}

int FUN_0c2bbaac(void)
{
    register int t0;
    register int t1;

    strlen(((((struct o4_int *)0xC304080)->v)));
    (((struct o0_uint *)0xC304080)->v) = 0xC8D3A60;
    memset(0xC8D3A60, 0xFF, 0x114);
    *(unsigned int *)((((((struct o0_int *)0xC304080)->v)) + 0x0)) = 0xA05F7800;
    (((struct oD4_uint *)(((((struct o0_int *)0xC304080)->v))))->v) = 0x1;
    (((struct oD8_uint *)(((((struct o0_int *)0xC304080)->v))))->v) = 0x0;
    t0 = 0x0;
    for (;;) {
        *(unsigned int *)((((((((struct o0_int *)0xC304080)->v)) + 0x4) + (t0 * 0x34)) + 0x0)) = t0;
        *(unsigned int *)((((((((struct o0_int *)0xC304080)->v)) + 0x4) + (t0 * 0x34)) + 0x28)) = 0x0;
        *(unsigned int *)((((((((struct o0_int *)0xC304080)->v)) + 0x4) + (t0 * 0x34)) + 0x2C)) = 0x0;
        *(unsigned int *)((((((((struct o0_int *)0xC304080)->v)) + 0x4) + (t0 * 0x34)) + 0x30)) = 0x0;
        *(unsigned int *)((((((((struct o0_int *)0xC304080)->v)) + 0x4) + (t0 * 0x34)) + 0x4)) = 0x0;
        *(unsigned int *)((((((((struct o0_int *)0xC304080)->v)) + 0x4) + (t0 * 0x34)) + 0x8)) = 0x0;
        *(unsigned int *)((((((((struct o0_int *)0xC304080)->v)) + 0x4) + (t0 * 0x34)) + 0xC)) = 0x0;
        *(unsigned int *)((((((((struct o0_int *)0xC304080)->v)) + 0x4) + (t0 * 0x34)) + 0x10)) = 0x0;
        *(unsigned int *)((((((((struct o0_int *)0xC304080)->v)) + 0x4) + (t0 * 0x34)) + 0x14)) = 0x0;
        *(unsigned int *)((((((((struct o0_int *)0xC304080)->v)) + 0x4) + (t0 * 0x34)) + 0x18)) = 0x3;
        *(unsigned int *)((((((((struct o0_int *)0xC304080)->v)) + 0x4) + (t0 * 0x34)) + 0x1C)) = 0x0;
        *(unsigned int *)((((((((struct o0_int *)0xC304080)->v)) + 0x4) + (t0 * 0x34)) + 0x20)) = 0x0;
        FUN_0c0ed7e4(((((((struct o0_int *)0xC304080)->v)) + 0x4) + (t0 * 0x34)));
        t1 = (t0 << 2);
        t0 = (t0 + 0x1);
        *(unsigned int *)((((0xDC + ((((struct o0_int *)0xC304080)->v))) + t1) + 0x0)) = 0x0;
        *(unsigned int *)((((0xFC + ((((struct o0_int *)0xC304080)->v))) + t1) + 0x0)) = 0x0;
        *(unsigned int *)(((t1 + (0xEC + ((((struct o0_int *)0xC304080)->v)))) + 0x0)) = 0x0;
        if ((int)t0 >= (int)0x4) {
            break;
        }
    }
    (((struct o10C_uint *)(((((struct o0_int *)0xC304080)->v))))->v) = 0x0;
    (((struct o110_uint *)(((((struct o0_int *)0xC304080)->v))))->v) = 0x0;
    FUN_0c0ed8f4(0xC000000, 0xCFFFFFF);
    (((struct oD4_uint *)(((((struct o0_int *)0xC304080)->v))))->v) = 0x1;
    t0 = (((struct o0_int *)0xC304080)->v);
    *(unsigned int *)(((0x24 + (t0 + 0x4)) + 0x0)) = (syChainAddHandler(0xA60, 0xC2D93DC, 0x60, (t0 + 0x4)));
    t0 = (((struct o0_int *)0xC304080)->v);
    *(unsigned int *)(((0x24 + (t0 + 0x38)) + 0x0)) = (syChainAddHandler(0xA80, 0xC2D93DC, 0x60, (t0 + 0x38)));
    t0 = (((struct o0_int *)0xC304080)->v);
    *(unsigned int *)(((0x24 + (t0 + 0x6C)) + 0x0)) = (syChainAddHandler(0xAA0, 0xC2D93DC, 0x60, (t0 + 0x6C)));
    t0 = (((struct o0_int *)0xC304080)->v);
    *(unsigned int *)(((0x24 + ((t0 + 0x4) + 0x9C)) + 0x0)) = (syChainAddHandler(0xAC0, 0xC2D93DC, 0x60, ((t0 + 0x4) + 0x9C)));
    *(unsigned int *)0xC8D3B84 = 0x0;
    return 0x0;
}

int kmyGetFreeSize(int a4, int a5)
{
    int stk[3];
    register int t12;
    register int t1;
    register int t2;
    register int t6;
    register int t7;
    register int t22;
    register int t25;
    register int t14;
    register int t15;
    register int t17;
    register int t20;
    register int t27;
    register int t28;
    register int t29;
    register int t58;
    register int t59;
    register int t61;
    register int t62;
    register int t83;

    *(unsigned int *)(((int)stk + 4)) = 0x0;
    *(unsigned int *)(((int)stk + 8)) = 0x0;
    *(unsigned int *)(((int)stk + 0)) = 0x0;
    t1 = (((struct o0_int *)0xC304148)->v);
    t12 = 0x0;
    if (t1 != 0) {
        t2 = 0x0;
        for (;;) {
            if ((unsigned int)(*(int *)((t1 + 0x10))) > (unsigned int)t2) {
                t2 = (*(int *)((t1 + 0x10)));
            }
            t6 = *(int *)(((int)stk + 8));
            t7 = *(int *)((t1 + 0x10));
            *(unsigned int *)(((int)stk + 8)) = (t6 + t7);
            t1 = (*(int *)((t1 + 0x8)));
            if (t1 == 0) {
                break;
            }
        }
        t22 = (t6 + t7);
        t12 = t2;
    }
    t14 = (((struct o10_int *)0xC304148)->v);
    t25 = 0x0;
    if (t14 != 0) {
        t15 = 0x0;
        for (;;) {
            t17 = *(int *)((t14 + 0x10));
            if ((unsigned int)(*(int *)((t14 + 0x10))) > (unsigned int)t15) {
                t15 = (*(int *)((t14 + 0x10)));
            }
            t20 = *(int *)(((int)stk + 4));
            *(unsigned int *)(((int)stk + 4)) = (t20 + t17);
            t14 = (*(int *)((t14 + 0x8)));
            if (t14 == 0) {
                break;
            }
        }
        t22 = (t20 + t17);
        t25 = t15;
    }
    t28 = (((struct o18_int *)0xC304148)->v);
    if (t28 != 0) {
        t27 = t22;
        for (;;) {
            t29 = *(short *)((t28 + 0x0));
            t58 = 0x10;
            t59 = 0x90;
            if (((unsigned short)t29 & 0xF000) != 0x1000) {
                t58 = 0x10;
                t59 = 0xA0;
                if (((unsigned short)t29 & 0xF000) != 0x2000) {
                    t58 = 0x10;
                    t59 = 0xC0;
                    if (((unsigned short)t29 & 0xF000) != 0x3000) {
                        t58 = 0x10;
                        t59 = 0xE0;
                        if (((unsigned short)t29 & 0xF000) != 0x4000) {
                            t58 = 0x8;
                            t59 = 0x200;
                            if (((unsigned short)t29 & 0xF000) != 0x5000) {
                                t58 = 0x4;
                                t59 = 0x360;
                                if (((unsigned short)t29 & 0xF000) != 0x6000) {
                                    t58 = 0x2;
                                    t59 = 0x800;
                                    if (((unsigned short)t29 & 0xF000) != 0x7000) {
                                        t58 = 0x1;
                                        t59 = 0xD60;
                                        if (((unsigned short)t29 & 0xF000) != 0x8000) {
                                            t58 = 0x0;
                                            t59 = 0x0;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if ((unsigned int)0x0 < (unsigned int)t58) {
                t61 = 0x0;
                t62 = (t28 + 0xC);
                for (;;) {
                    t61 = (t61 + 0x1);
                    if ((*(int *)((t62 + 0x0))) == 0) {
                        t27 = (*(int *)(((int)stk + 0)));
                        t27 = (t27 + t59);
                        *(unsigned int *)(((int)stk + 0)) = t27;
                    }
                    t62 = (t62 + 0x4);
                    if ((unsigned int)t61 >= (unsigned int)t58) {
                        break;
                    }
                }
            }
            t28 = (*(int *)((t28 + 0x4)));
            if (t28 == 0) {
                break;
            }
        }
    }
    *(unsigned int *)((a4 + 0x0)) = (((*(int *)(((int)stk + 8))) + (*(int *)(((int)stk + 4)))) + (*(int *)(((int)stk + 0))));
    t83 = t12;
    if ((unsigned int)t12 < (unsigned int)t25) {
        t83 = t25;
    }
    *(unsigned int *)((a5 + 0x0)) = t83;
    return 0x0;
}

int kmiWriteFBRegister(Stk29 s)
{
    int stk[39];
    register int t10;
    register int t11;
    register int t12;

    stk[2] = s.w[0];
    stk[3] = s.w[1];
    stk[4] = s.w[2];
    stk[5] = s.w[3];
    stk[6] = s.w[4];
    stk[7] = s.w[5];
    stk[8] = s.w[6];
    stk[9] = s.w[7];
    stk[10] = s.w[8];
    stk[11] = s.w[9];
    stk[12] = s.w[10];
    stk[13] = s.w[11];
    stk[14] = s.w[12];
    stk[15] = s.w[13];
    stk[16] = s.w[14];
    stk[17] = s.w[15];
    stk[18] = s.w[16];
    stk[19] = s.w[17];
    stk[20] = s.w[18];
    stk[21] = s.w[19];
    stk[22] = s.w[20];
    stk[23] = s.w[21];
    stk[24] = s.w[22];
    stk[25] = s.w[23];
    stk[26] = s.w[24];
    stk[27] = s.w[25];
    stk[28] = s.w[26];
    stk[29] = s.w[27];
    stk[30] = s.w[28];
    (((struct o0_uint *)0xC8D05D8)->v) = ((((((struct o58_int *)((((int)stk + 4) + 0x8)))->v)) & 0x7FF) | ((((((struct o54_int *)((((int)stk + 4) + 0x8)))->v)) & 0x7FF) << 16));
    (((struct o4_uint *)0xC8D05D8)->v) = ((((((struct o60_int *)((((int)stk + 4) + 0x8)))->v)) & 0x7FF) | ((((((struct o5C_int *)((((int)stk + 4) + 0x8)))->v)) & 0x7FF) << 16));
    (((struct o8_uint *)0xC8D05D8)->v) = (((((((struct o48_int *)((((int)stk + 4) + 0x8)))->v)) & 0xF) | (((((((struct o4C_int *)((((int)stk + 4) + 0x8)))->v)) & 0x1F) << 2) << 2)) | (((((((struct o50_int *)((((int)stk + 4) + 0x8)))->v)) & 0xF) << 8) << 1));
    (((struct o2C_uint *)0xC8D0620)->v) = (*(int *)(((((int)stk + 4) + 0x8) + 0x0)));
    (((struct o30_uint *)0xC8D0620)->v) = (*(int *)(((((int)stk + 4) + 0x8) + 0x4)));
    t10 = *(int *)(((((int)stk + 4) + 0x8) + 0x8));
    t11 = *(int *)(((((int)stk + 4) + 0x8) + 0x0));
    t12 = *(int *)(((((int)stk + 4) + 0x8) + 0x4));
    if ((int)((((struct o28_int *)0xC8D0620)->v)) > 0) {
        (((struct oC_uint *)0xC8D05D8)->v) = (((t11 & 0x3FF) | ((((t12 - ((((struct o28_int *)0xC8D0620)->v))) & 0x3FF) << 8) << 2)) | ((((t10 & 0x3FF) << 16) << 2) << 2));
    } else {
        (((struct oC_uint *)0xC8D05D8)->v) = (((t11 & 0x3FF) | (((t12 & 0x3FF) << 8) << 2)) | ((((t10 & 0x3FF) << 16) << 2) << 2));
    }
    (((struct o0_uint *)0xC8D0620)->v) = ((unsigned char)(*(int *)(((((int)stk + 4) + 0x8) + 0x14))) | ((unsigned char)(*(int *)(((((int)stk + 4) + 0x8) + 0x18))) << 8));
    (((struct o4_uint *)0xC8D0620)->v) = (((unsigned short)(*(int *)(((((int)stk + 4) + 0x8) + 0x10))) | (((*(int *)(((((int)stk + 4) + 0x8) + 0xC))) & 0x1) << 16)) | ((((*(int *)(((((int)stk + 4) + 0x8) + 0x1C))) & 0x1) << 16) << 2));
    (((struct o10_uint *)0xC8D05D8)->v) = (((((struct o44_int *)((((int)stk + 4) + 0x8)))->v)) & 0x1FF);
    (((struct o18_uint *)0xC8D05D8)->v) = (((((*(int *)(((((int)stk + 4) + 0x8) + 0x30))) & 0x7) | ((((*(int *)(((((int)stk + 4) + 0x8) + 0x2C))) & 0x1) << 2) << 1)) | ((unsigned char)(*(int *)(((((int)stk + 4) + 0x8) + 0x34))) << 8)) | ((unsigned char)(*(int *)(((((int)stk + 4) + 0x8) + 0x38))) << 16));
    (((struct o14_uint *)0xC8D05D8)->v) = (((((((((*(int *)(((((int)stk + 4) + 0x8) + 0x20))) & 0x1) | (((*(int *)(((((int)stk + 4) + 0x8) + 0x28))) & 0x1) << 1)) | (((*(int *)(((((int)stk + 4) + 0x8) + 0x3C))) & 0x3) << 2)) | (((0x7 & ((((struct o40_int *)((((int)stk + 4) + 0x8)))->v))) << 2) << 2)) | ((unsigned char)(*(signed char *)(((((int)stk + 4) + 0x8) + 0x70))) << 8)) | ((0x1F & ((((struct o68_int *)((((int)stk + 4) + 0x8)))->v))) << 16)) | ((((((struct o64_int *)((((int)stk + 4) + 0x8)))->v)) & 0x1) << 22)) | ((((((struct o6C_int *)((((int)stk + 4) + 0x8)))->v)) & 0x1) << 23));
    return 0x6C;
}

int mwlRnaStartTrans(int a4, int a5, int a6, int a7)
{
    int stk[12];
    register int t1;
    register int t5;
    register int t6;
    register int t18;
    register int t20;
    register int t22;
    register int t23;
    register int t29;
    register int t32;
    register int t42;
    register int t44;
    register int t46;
    register int t47;
    register int t48;
    register int t50;
    register int t51;
    register int t52;
    register int t53;
    register int t70;
    register int t71;
    register int t72;
    register int t74;
    register int t76;
    register int t77;
    register int t36;
    register int t39;
    register int t78;
    register int t64;

    t1 = (int)((int)0x20 / (int)(*(int *)((a4 + 0x8))));
    t5 = (int)((int)((*(int *)((a4 + 0x28))) - (*(int *)((a4 + 0x34)))) / (int)((t1 << 2) << 1));
    t6 = 0x0;
    for (;;) {
        if ((int)t6 >= (int)(unsigned char)(*(signed char *)((a4 + 0x3)))) {
            break;
        }
        if ((*(int *)((((t6 << 2) + (a4 + 0x10)) + 0x0))) == 0) {
            *(int *)((int)stk + 0) = 0xC2FFF68;
            FUN_0c2dc1ae(0xC2FFF68);
        }
        t18 = *(int *)((((t6 << 2) + (a4 + 0x10)) + 0x0));
        *(unsigned int *)(((int)stk + 4)) = t18;
        t20 = *(int *)((a4 + 0x8));
        t22 = *(int *)(((*(int *)((t18 + 0x0))) + 0x18));
        t23 = ((t5 * ((t1 << 2) << 1)) * t20);
        if ((int)((t5 * ((t1 << 2) << 1)) * t20) < 0) {
            t23 = (((t5 * ((t1 << 2) << 1)) * t20) + 0x7);
        }
        t29 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))(t22))((*(int *)(((int)stk + 4))), 0x1, (((t23 >> 1) >> 1) >> 1), (((t6 << 2) << 1) + (a4 + 0x18)), *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
        t6 = (t6 + 0x1);
    }
    if ((unsigned char)(*(signed char *)((a4 + 0x3))) == 1) {
        t36 = (*(int *)((a4 + 0x1C)));
        t39 = a7;
    } else {
        *(unsigned int *)(((int)stk + 12)) = (a4 + 0x18);
        t32 = *(int *)(((a4 + 0x18) + 0x4));
        *(unsigned int *)(((int)stk + 8)) = ((a4 + 0x18) + 0x8);
        t39 = *(int *)((((a4 + 0x18) + 0x8) + 0x4));
        t36 = t39;
        if ((int)t32 < (int)t39) {
            t36 = t32;
        }
    }
    t42 = (int)((int)t36 / (int)(*(int *)((a4 + 0x8))));
    t44 = ((t42 << 2) << 1);
    if ((int)((t42 << 2) << 1) >= (int)(t5 * ((t1 << 2) << 1))) {
        t44 = (t5 * ((t1 << 2) << 1));
    }
    t46 = *(int *)((a4 + 0x28));
    t47 = *(int *)((a4 + 0x2C));
    t48 = t44;
    if ((int)t44 >= (int)(t46 - t47)) {
        t48 = (t46 - t47);
    }
    t50 = (int)((int)t48 / (int)((t1 << 2) << 1));
    if ((int)(t50 * ((t1 << 2) << 1)) <= 0) {
        t51 = (t50 * ((t1 << 2) << 1));
        t52 = 0x0;
        t53 = 0x0;
        for (;;) {
            if ((int)t52 >= (int)(unsigned char)(*(signed char *)((a4 + 0x3)))) {
                break;
            }
            t53 = t52;
            t53 = (t53 << 2);
            if ((*(int *)((((a4 + 0x10) + t53) + 0x0))) == 0) {
                *(int *)((int)stk + 0) = 0xC2FFF68;
                FUN_0c2dc1ae(0xC2FFF68);
            } else {
                t64 = t39;
            }
            t51 = a4;
            t51 = (t51 + 0x10);
            t51 = (t51 + t53);
            t51 = (*(int *)((t51 + 0x0)));
            t70 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((t51 + 0x0))) + 0x1C)))))(t51, 0x1, (((t52 << 2) << 1) + (a4 + 0x18)), t64, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
            t52 = (t52 + 0x1);
        }
        t78 = 0x0;
    } else {
        t71 = 0xC8CE92C;
        t72 = 0x0;
        for (;;) {
            if ((int)t72 >= (int)(unsigned char)(*(signed char *)((a4 + 0x3)))) {
                break;
            }
            t74 = *(int *)((a4 + 0x2C));
            t76 = *(int *)(((((t72 << 2) << 1) + (a4 + 0x18)) + 0x0));
            (((struct o0_uint *)0xC8CE92C)->v) = 0x0;
            *(int *)((int)stk + 0) = (t50 * ((t1 << 2) << 1));
            t71 = a4;
            t77 = mwlRnaStartCopy(t71, t72, t74, t76, (t50 * ((t1 << 2) << 1)));
            t72 = (t72 + 0x1);
            (((struct o4_uint *)0xC8CE92C)->v) = 0x0;
            t71 = t77;
        }
        *(unsigned int *)((a4 + 0x3C)) = t71;
        t78 = t71;
    }
    return t78;
}

int kmEndPass(int a4)
{
    int stk[3];

    register int R1;
    register int R2;
    register int T_;
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
    v0_0 = a4;
    *(unsigned int *)(((int)stk + 8)) = (FUN_0c2ccce0(v0_0));
    v0_1 = *(int *)((v0_0 + 0x8));
    v0_2 = *(int *)((v0_1 + 0x10));
    *(unsigned int *)((v0_1 + 0x10)) = (v0_2 + 0x1);
    *(unsigned int *)((v0_0 + 0x18)) = ((*(int *)((v0_0 + 0x18))) + 0x38);
    v0_3 = (*(int *)(((*(int *)((v0_0 + 0x8))) + 0x10)));
    v0_1 = (v0_0);
    v0_0 = (0xC8BE7A8);
    v0_9 = (v0_2);
    v0_2 = v0_3;
    if (((*(int *)0xC8BEF78) == 0)) goto L_C2B6D9A;
    L_C2B6EBA:;
    if ((((*(int *)(((*(int *)((v0_1 + 0x8))) + 0x18))) & 4) == 0)) goto L_C2B6EC8;
    FUN_0c2b5f20(0x1);
    L_C2B6EC8:;
    return (*(int *)(((int)stk + 8)));
    L_C2B6D9A:;
    if (((unsigned int)v0_2 < (unsigned int)(*(int *)(((*(int *)((v0_1 + 0x8))) + 0x14))))) goto L_C2B6DA6;
    goto L_C2B6EBA;
    L_C2B6DA6:;
    *(unsigned int *)(((int)stk + 4)) = (v0_2 << 2);
    v0_3 = ((((v0_9 << 2) + v0_9) << 2));
    v0_4 = ((((v0_2 << 2) + v0_2) << 2));
    v0_5 = (0x0);
    v0_6 = (((((v0_2 + 0x1) << 2) + (v0_2 + 0x1)) << 2));
    v0_7 = ((v0_9 << 2));
    L_C2B6DD2:;
    v0_9 = (((struct o40_int *)(v0_0))->v);
    v0_8 = ((v0_5 << 2));
    v0_9 = (((((((v0_9 << 2) + v0_9) << 2) << 2) << 1) + (0x170 + v0_0)));
    if (((*(int *)0xC8BFF68) != 1)) goto L_C2B6EA0;
    if ((v0_5 != (*(int *)((((0x710 + v0_0) + (*(int *)(((int)stk + 4)))) + 0x0))))) goto L_C2B6E80;
    if (((unsigned int)v0_2 >= (unsigned int)0x7)) goto L_C2B6E3A;
    if ((v0_5 == (*(int *)((((0x710 + v0_0) + v0_7) + 0x0))))) goto L_C2B6E26;
    v0_10 = ((v0_9 + v0_6));
    v0_9 = ((*(int *)(((((0xB0 + v0_0) + v0_3) + v0_8) + 0x0))));
    L_C2B6E38:;
    *(unsigned int *)((v0_8 + v0_10)) = v0_9;
    L_C2B6E3A:;
    v0_9 = (((struct o40_int *)(v0_0))->v);
    *(unsigned int *)((v0_8 + (((((((v0_9 << 2) + v0_9) << 2) << 2) << 1) + (0x170 + v0_0)) + v0_4))) = 0x10000000;
    L_C2B6EB2:;
    v0_8 = (unsigned int)(v0_5 + 0x1) < (unsigned int)0x5;
    v0_5 = ((v0_5 + 0x1));
    if (v0_8) goto L_C2B6DD2;
    goto L_C2B6EBA;
    L_C2B6E26:;
    *(unsigned int *)(((int)stk + 0)) = v0_9;
    v0_10 = ((v0_9 + v0_6));
    v0_9 = ((*(int *)((((v0_9 + v0_4) + v0_8) + 0x0))));
    goto L_C2B6E38;
    L_C2B6E80:;
    if ((v0_5 == (*(int *)((((0x710 + v0_0) + v0_7) + 0x0))))) goto L_C2B6EB2;
    *(unsigned int *)((v0_8 + (v0_9 + v0_4))) = (*(int *)(((((0xB0 + v0_0) + v0_3) + v0_8) + 0x0)));
    goto L_C2B6EB2;
    L_C2B6EA0:;
    *(unsigned int *)((v0_8 + (v0_9 + v0_4))) = (*(int *)(((((0xB0 + v0_0) + v0_3) + v0_8) + 0x0)));
    goto L_C2B6EB2;
}

int FUN_0c2e8ebc(int a4, int a5)
{

    register int R1;
    int R4;
    int R10;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    R4 = a4;
    v0_2 = a5;
    v0_5 = *(int *)0xC8D66E8;
    v0_3 = (0x0);
    v0_0 = (0xC8D66F8);
    v0_1 = (0xC8D66F9);
    v0_4 = (v0_5);
    if ((((unsigned short)((((struct oB0_short *)(v0_5))->v)) & 0x2000) != 0)) goto L_C2E8EDE;
    L_C2E902A:;
    v0_5 = (0x0);
    L_C2E902C:;
    return v0_5;
    L_C2E8EDE:;
    v0_6 = ((unsigned char)(*(signed char *)((v0_0 + 0x0))));
    v0_7 = (0xC8D66F4);
    if (((unsigned char)R4 != 0)) goto L_C2E8F80;
    v0_5 = (v0_6);
    if ((v0_6 == 0)) goto L_C2E8EFE;
    if ((v0_5 == 2)) goto L_C2E8F2E;
    if ((v0_5 == 4)) goto L_C2E8F4C;
    *(unsigned char *)((v0_7 + 0x0)) = ((*(signed char *)((v0_7 + 0x0))) & 0xF3);
    L_C2E8F7A:;
    *(unsigned char *)((v0_1 + 0x0)) = v0_3;
    *(unsigned char *)((v0_0 + 0x0)) = v0_3;
    L_C2E901E:;
    if (((unsigned char)(*(signed char *)((v0_1 + 0x0))) != 3)) goto L_C2E902A;
    v0_5 = (0x1);
    goto L_C2E902C;
    L_C2E8F4C:;
    if (((unsigned int)v0_2 > (unsigned int)(unsigned short)((((struct o60_short *)(v0_4))->v)))) goto L_C2E8F6C;
    if (((unsigned int)v0_2 < (unsigned int)(unsigned short)((((struct o62_short *)(v0_4))->v)))) goto L_C2E8F6C;
    L_C2E8F60:;
    *(unsigned char *)((v0_7 + 0x0)) = ((*(signed char *)((v0_7 + 0x0))) | 0x4);
    v0_2 = (0x1);
    L_C2E8F68:;
    *(unsigned char *)((v0_0 + 0x0)) = v0_2;
    goto L_C2E901E;
    L_C2E8F6C:;
    *(unsigned char *)((v0_7 + 0x0)) = ((*(signed char *)((v0_7 + 0x0))) & 0xF3);
    goto L_C2E8F7A;
    L_C2E8F2E:;
    if (((unsigned int)v0_2 > (unsigned int)(unsigned short)((((struct o68_short *)(v0_4))->v)))) goto L_C2E8F6C;
    if (((unsigned int)v0_2 < (unsigned int)(unsigned short)((((struct o6A_short *)(v0_4))->v)))) goto L_C2E8F6C;
    L_C2E8F42:;
    *(unsigned char *)((v0_7 + 0x0)) = ((*(signed char *)((v0_7 + 0x0))) | 0x8);
    v0_2 = (0x3);
    goto L_C2E8F68;
    L_C2E8EFE:;
    if (((unsigned int)v0_2 > (unsigned int)(unsigned short)((((struct o60_short *)(v0_4))->v)))) goto L_C2E8F12;
    if (((unsigned int)v0_2 >= (unsigned int)(unsigned short)((((struct o62_short *)(v0_4))->v)))) goto L_C2E8F60;
    L_C2E8F12:;
    if (((unsigned int)v0_2 <= (unsigned int)(unsigned short)((((struct o68_short *)(v0_4))->v)))) goto L_C2E8F20;
    goto L_C2E901E;
    L_C2E8F20:;
    if (((unsigned int)v0_2 >= (unsigned int)(unsigned short)((((struct o6A_short *)(v0_4))->v)))) goto L_C2E8F42;
    goto L_C2E901E;
    L_C2E8F80:;
    v0_5 = (v0_6);
    R10 = ((unsigned char)(*(signed char *)((v0_7 + 0x0))));
    R4 = (0x4);
    if ((v0_6 == 1)) goto L_C2E8FAC;
    if ((v0_5 == 3)) goto L_C2E8FE2;
    goto L_C2E901E;
    L_C2E8FE2:;
    if (((unsigned int)v0_2 > (unsigned int)(unsigned short)((((struct o6C_short *)(v0_4))->v)))) goto L_C2E9012;
    if (((unsigned int)v0_2 < (unsigned int)(unsigned short)((((struct o6E_short *)(v0_4))->v)))) goto L_C2E9012;
    if (((R10 & R4) == 0)) goto L_C2E900E;
    if (((0x8 & R10) == 0)) goto L_C2E900E;
    *(unsigned char *)((v0_1 + 0x0)) = ((*(signed char *)((v0_1 + 0x0))) + 0x1);
    *(unsigned char *)((v0_7 + 0x0)) = ((*(signed char *)((v0_7 + 0x0))) & 0xF3);
    L_C2E900E:;
    *(unsigned char *)((v0_0 + 0x0)) = R4;
    goto L_C2E901E;
    L_C2E9012:;
    *(unsigned char *)((v0_7 + 0x0)) = ((*(signed char *)((v0_7 + 0x0))) & 0xF3);
    *(unsigned char *)((v0_1 + 0x0)) = v0_3;
    L_C2E901A:;
    *(unsigned char *)((v0_0 + 0x0)) = 0x2;
    goto L_C2E901E;
    L_C2E8FAC:;
    if (((unsigned int)v0_2 > (unsigned int)(unsigned short)((((struct o64_short *)(v0_4))->v)))) goto L_C2E8FD8;
    if (((unsigned int)v0_2 < (unsigned int)(unsigned short)((((struct o66_short *)(v0_4))->v)))) goto L_C2E8FD8;
    if (((R4 & R10) == 0)) goto L_C2E901A;
    if (((0x8 & R10) == 0)) goto L_C2E901A;
    *(unsigned char *)((v0_1 + 0x0)) = ((*(signed char *)((v0_1 + 0x0))) + 0x1);
    *(unsigned char *)((v0_7 + 0x0)) = ((*(signed char *)((v0_7 + 0x0))) & 0xF3);
    goto L_C2E901A;
    L_C2E8FD8:;
    *(unsigned char *)((v0_7 + 0x0)) = ((*(signed char *)((v0_7 + 0x0))) & 0xF3);
    *(unsigned char *)((v0_1 + 0x0)) = v0_3;
    goto L_C2E900E;
}

int FUN_0c2c2c44(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x1));
    if (t0 == 2) {
        return adxamp_extract(a4, a5, a6, a7);
    }
    return t0;
}

int FUN_0c2eaae8(void)
{
    register int t0;
    register int t42;
    register int t43;
    register int t44;
    register int t127;
    register int t78;
    register int t79;
    register int t140;
    register int t141;
    int t134;
    register int t135;
    register int t144;

    t0 = *(signed char *)0xC8D25FF;
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 1) {
            if ((unsigned char)t0 != 2) {
            } else {
                if ((unsigned char)(*(signed char *)((((((struct o0_int *)0xC8D25F0)->v)) + 0x5C))) != 0x85) {
                    (((struct oF_uchar *)0xC8D25F0)->v) = 0x0;
                }
            }
        } else {
            if ((unsigned char)(*(signed char *)((((((struct o0_int *)0xC8D25F0)->v)) + 0x5C))) == 0x87) {
                FUN_0c2d487c(0x840, (*(short *)0xC8D672A), 0x2);
                (((struct oF_uchar *)0xC8D25F0)->v) = 0x2;
            }
        }
    } else {
        if ((unsigned char)(*(signed char *)((((((struct o0_int *)0xC8D25F0)->v)) + 0x5C))) == 0x85) {
            t42 = (FUN_0c2d4768(0x2E3, 0x1));
            t43 = FUN_0c2d4768(0x2E5, 0x1);
            t44 = FUN_0c2ea256(t43, t42);
            if ((signed char)t44 == 1) {
                (((struct oF_uchar *)0xC8D25F0)->v) = 0x1;
            } else {
                (((struct oF_uchar *)0xC8D25F0)->v) = 0x2;
            }
        }
    }
    t127 = 0x0;
    if (((unsigned char)(*(signed char *)((0x5C + ((((struct o0_int *)0xC8D25F0)->v))))) & 0xF0) == 0x80) {
        if (((*(signed char *)0xC8D25FC) & 2) == 0) {
            FUN_0c2ec410(0xC8D6744, 0x1F4);
            (((struct oC_uchar *)0xC8D25F0)->v) = ((*(signed char *)0xC8D25FC) | 0x2);
            (((struct o0_uchar *)0xC8D6721)->v) = (*(signed char *)((((((struct o0_int *)0xC8D25F0)->v)) + 0x5C)));
            t127 = 0x0;
        } else {
            if ((*(signed char *)0xC8D6721) == (*(signed char *)((((((struct o0_int *)0xC8D25F0)->v)) + 0x5C)))) {
                t78 = FUN_0c2ec430((*(int *)0xC8D6744));
                if ((signed char)t78 != 0) {
                    t79 = FUN_0c2d4768(0x45, 0x1);
                    FUN_0c2d487c(0x45, (0x20 | (unsigned char)t79), 0x1);
                    t127 = 0x1;
                } else {
                    if ((*(signed char *)0xC8D6721) != (*(signed char *)((((((struct o0_int *)0xC8D25F0)->v)) + 0x5C)))) {
                        FUN_0c2ec410(0xC8D6744, 0x1F4);
                        (((struct o0_uchar *)0xC8D6721)->v) = (*(signed char *)((((((struct o0_int *)0xC8D25F0)->v)) + 0x5C)));
                    }
                    t127 = 0x0;
                }
            } else {
                if ((*(signed char *)0xC8D6721) != (*(signed char *)((((((struct o0_int *)0xC8D25F0)->v)) + 0x5C)))) {
                    FUN_0c2ec410(0xC8D6744, 0x1F4);
                    (((struct o0_uchar *)0xC8D6721)->v) = (*(signed char *)((((((struct o0_int *)0xC8D25F0)->v)) + 0x5C)));
                }
                t127 = 0x0;
            }
        }
    }
    if (((signed char)t127 != 1) && (t134 = (((struct o0_int *)0xC8D25F0)->v), t135 = *(signed char *)((0x5C + t134)), ((unsigned char)t135 & 0xF0) != 32)) {
        t144 = ((unsigned char)t135 & 0xF0);
    } else {
        FUN_0c2e93ac();
        (((struct o4_uchar *)0xC8D25F0)->v) = ((*(signed char *)0xC8D25F4) | 0x4);
        (((struct o4_uchar *)0xC8D25F0)->v) = ((*(signed char *)0xC8D25F4) | 0x40);
        (((struct o4_uchar *)0xC8D25F0)->v) = ((*(signed char *)0xC8D25F4) & 0xDF);
        t140 = *(signed char *)0xC8D25F4;
        t144 = t140;
        if ((t140 & 8) != 0) {
            t141 = *(signed char *)0xC8D25F4;
            (((struct o4_uchar *)0xC8D25F0)->v) = (t141 | 0x10);
            t144 = (t141 | 0x10);
        }
    }
    return t144;
}

int FUN_0c2e9036(int a4, int a5)
{

    register int R1;
    int R10;
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
    v0_2 = a4;
    v0_3 = a5;
    v0_6 = *(int *)0xC8D66E8;
    v0_4 = (0x0);
    v0_0 = (0xC8D66FA);
    v0_1 = (0xC8D66FB);
    v0_5 = (v0_6);
    if ((((unsigned short)((((struct oB0_short *)(v0_6))->v)) & 0x4000) != 0)) goto L_C2E9058;
    L_C2E919E:;
    v0_6 = (0x0);
    L_C2E91A0:;
    return v0_6;
    L_C2E9058:;
    v0_7 = ((unsigned char)(*(signed char *)((v0_0 + 0x0))));
    v0_8 = (0xC8D66F4);
    if (((unsigned char)v0_2 != 0)) goto L_C2E910A;
    v0_6 = (v0_7);
    if ((v0_7 == 0)) goto L_C2E908C;
    if ((v0_6 == 2)) goto L_C2E90B8;
    if ((v0_6 == 4)) goto L_C2E90D6;
    *(unsigned char *)((v0_8 + 0x0)) = ((*(signed char *)((v0_8 + 0x0))) & 0x3F);
    L_C2E9104:;
    *(unsigned char *)((v0_1 + 0x0)) = v0_4;
    *(unsigned char *)((v0_0 + 0x0)) = v0_4;
    L_C2E9192:;
    if (((unsigned char)(*(signed char *)((v0_1 + 0x0))) != 3)) goto L_C2E919E;
    v0_6 = (0x1);
    goto L_C2E91A0;
    L_C2E90D6:;
    if (((unsigned int)v0_3 > (unsigned int)(unsigned short)((((struct o50_short *)(v0_5))->v)))) goto L_C2E90F6;
    if (((unsigned int)v0_3 < (unsigned int)(unsigned short)((((struct o52_short *)(v0_5))->v)))) goto L_C2E90F6;
    L_C2E90EA:;
    *(unsigned char *)((v0_8 + 0x0)) = ((*(signed char *)((v0_8 + 0x0))) | 0x40);
    v0_2 = (0x1);
    L_C2E90F2:;
    *(unsigned char *)((v0_0 + 0x0)) = v0_2;
    goto L_C2E9192;
    L_C2E90F6:;
    *(unsigned char *)((v0_8 + 0x0)) = ((*(signed char *)((v0_8 + 0x0))) & 0x3F);
    goto L_C2E9104;
    L_C2E90B8:;
    if (((unsigned int)v0_3 > (unsigned int)(unsigned short)((((struct o58_short *)(v0_5))->v)))) goto L_C2E90F6;
    if (((unsigned int)v0_3 < (unsigned int)(unsigned short)((((struct o5A_short *)(v0_5))->v)))) goto L_C2E90F6;
    L_C2E90CC:;
    *(unsigned char *)((v0_8 + 0x0)) = ((*(signed char *)((v0_8 + 0x0))) | 0x80);
    v0_2 = (0x3);
    goto L_C2E90F2;
    L_C2E908C:;
    if (((unsigned int)v0_3 > (unsigned int)(unsigned short)((((struct o50_short *)(v0_5))->v)))) goto L_C2E90A0;
    if (((unsigned int)v0_3 >= (unsigned int)(unsigned short)((((struct o52_short *)(v0_5))->v)))) goto L_C2E90EA;
    L_C2E90A0:;
    if (((unsigned int)v0_3 > (unsigned int)(unsigned short)((((struct o58_short *)(v0_5))->v)))) goto L_C2E9192;
    if (((unsigned int)v0_3 >= (unsigned int)(unsigned short)((((struct o5A_short *)(v0_5))->v)))) goto L_C2E90CC;
    goto L_C2E9192;
    L_C2E910A:;
    v0_6 = (v0_7);
    R10 = ((unsigned char)(*(signed char *)((v0_8 + 0x0))));
    v0_2 = (0x80);
    if ((v0_7 == 1)) goto L_C2E9120;
    if ((v0_6 == 3)) goto L_C2E9158;
    goto L_C2E9192;
    L_C2E9158:;
    if (((unsigned int)v0_3 > (unsigned int)(unsigned short)((((struct o5C_short *)(v0_5))->v)))) goto L_C2E9186;
    if (((unsigned int)v0_3 < (unsigned int)(unsigned short)((((struct o5E_short *)(v0_5))->v)))) goto L_C2E9186;
    if (((v0_2 & R10) == 0)) goto L_C2E9182;
    if (((0x40 & R10) == 0)) goto L_C2E9182;
    *(unsigned char *)((v0_1 + 0x0)) = ((*(signed char *)((v0_1 + 0x0))) + 0x1);
    *(unsigned char *)((v0_8 + 0x0)) = ((*(signed char *)((v0_8 + 0x0))) & 0x3F);
    L_C2E9182:;
    v0_7 = (0x4);
    L_C2E9190:;
    *(unsigned char *)((v0_0 + 0x0)) = v0_7;
    goto L_C2E9192;
    L_C2E9186:;
    *(unsigned char *)((v0_8 + 0x0)) = ((*(signed char *)((v0_8 + 0x0))) & 0x3F);
    *(unsigned char *)((v0_1 + 0x0)) = v0_4;
    L_C2E918E:;
    v0_7 = (0x2);
    goto L_C2E9190;
    L_C2E9120:;
    if (((unsigned int)v0_3 > (unsigned int)(unsigned short)((((struct o54_short *)(v0_5))->v)))) goto L_C2E914C;
    if (((unsigned int)v0_3 < (unsigned int)(unsigned short)((((struct o56_short *)(v0_5))->v)))) goto L_C2E914C;
    if (((v0_2 & R10) == 0)) goto L_C2E918E;
    if (((0x40 & R10) == 0)) goto L_C2E918E;
    *(unsigned char *)((v0_1 + 0x0)) = ((*(signed char *)((v0_1 + 0x0))) + 0x1);
    *(unsigned char *)((v0_8 + 0x0)) = ((*(signed char *)((v0_8 + 0x0))) & 0x3F);
    goto L_C2E918E;
    L_C2E914C:;
    *(unsigned char *)((v0_8 + 0x0)) = ((*(signed char *)((v0_8 + 0x0))) & 0x3F);
    *(unsigned char *)((v0_1 + 0x0)) = v0_4;
    goto L_C2E9182;
}

int FUN_0c2f9360(int a4)
{
    register int t6;
    register int t4;

    t6 = 0xFF;
    if ((unsigned int)((unsigned char)a4 - 1) < (unsigned int)0x44) {
        switch ((((unsigned char)a4 - 1) << 1)) {
            case 0:
            case 2:
            case 4:
            case 20:
            {
                t4 = 0x2;
            }
                break;
            case 6:
            case 14:
            case 24:
            case 26:
            {
                t4 = 0xFF;
            }
                break;
            case 8:
            {
                t4 = 0x4;
            }
                break;
            case 10:
            case 38:
            {
                t4 = 0x5;
            }
                break;
            case 12:
            case 28:
            case 40:
            {
                t4 = 0x6;
            }
                break;
            case 16:
            case 18:
            case 32:
            case 44:
            {
                t4 = 0x8;
            }
                break;
            case 22:
            {
                t4 = 0x4;
                if (((unsigned char)(*(signed char *)0xC8D644E) & 128) != 0) {
                    t4 = 0x1;
                }
            }
                break;
            case 30:
            case 42:
            {
                t4 = 0x7;
            }
                break;
            case 34:
            case 46:
            {
                t4 = 0xB;
            }
                break;
            case 36:
            case 48:
            {
                t4 = 0xC;
            }
                break;
            case 50:
            {
                t4 = 0xD;
            }
                break;
            case 52:
            {
                t4 = 0xE;
            }
                break;
            case 54:
            {
                t4 = 0x15;
            }
                break;
            case 56:
            {
                t4 = 0x16;
            }
                break;
            case 58:
            {
                t4 = 0x17;
            }
                break;
            case 60:
            {
                t4 = 0x19;
            }
                break;
            case 62:
            {
                t4 = 0x1D;
            }
                break;
            case 64:
            {
                t4 = 0x20;
            }
                break;
            case 66:
            case 98:
            {
                t4 = 0x1E;
            }
                break;
            case 68:
            {
                t4 = 0x21;
            }
                break;
            case 70:
            case 104:
            {
                t4 = 0x23;
            }
                break;
            case 72:
            {
                t4 = 0x25;
            }
                break;
            case 74:
            case 110:
            {
                t4 = 0x28;
            }
                break;
            case 76:
            {
                t4 = 0x2A;
            }
                break;
            case 78:
            case 116:
            {
                t4 = 0x2C;
            }
                break;
            case 80:
            {
                t4 = 0x2E;
            }
                break;
            case 82:
            case 122:
            {
                t4 = 0x30;
            }
                break;
            case 84:
            {
                t4 = 0x32;
            }
                break;
            case 86:
            case 128:
            {
                t4 = 0x34;
            }
                break;
            case 88:
            {
                t4 = 0x36;
            }
                break;
            case 90:
            case 134:
            {
                t4 = 0x38;
            }
                break;
            case 92:
            {
                t4 = 0x18;
            }
                break;
            case 94:
            {
                t4 = 0x1A;
            }
                break;
            case 96:
            {
                t4 = 0x1C;
            }
                break;
            case 100:
            {
                t4 = 0x1F;
            }
                break;
            case 102:
            {
                t4 = 0x22;
            }
                break;
            case 106:
            {
                t4 = 0x24;
            }
                break;
            case 108:
            {
                t4 = 0x27;
            }
                break;
            case 112:
            {
                t4 = 0x29;
            }
                break;
            case 114:
            {
                t4 = 0x2B;
            }
                break;
            case 118:
            {
                t4 = 0x2D;
            }
                break;
            case 120:
            {
                t4 = 0x2F;
            }
                break;
            case 124:
            {
                t4 = 0x31;
            }
                break;
            case 126:
            {
                t4 = 0x33;
            }
                break;
            case 130:
            {
                t4 = 0x35;
            }
                break;
            default:
            {
                t4 = 0x37;
            }
                break;
        }
        t6 = t4;
    }
    return t6;
}

int FUN_0c198d84(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;
    register int t10;
    register int t11;
    int t12;
    register int t13;
    register int t14;

    t3 = *(int *)((a4 + 0x0));
    t4 = 0xFFFFFFFF;
    if (((unsigned int)((unsigned int)((unsigned int)t3 >> 16) >> 8) <= (unsigned int)(unsigned char)(*(signed char *)0xC8A73D8)) && ((int)(unsigned char)((unsigned int)t3 >> 16) <= (int)0x8)) {
        t5 = *(int *)0xC8A73D4;
        t6 = 0xFFFFFFFF;
        if ((*(short *)(((((unsigned char)((unsigned int)t3 >> 16) << 1) + ((unsigned char)((unsigned int)t3 >> 16) << 2)) + (((((unsigned int)((unsigned int)t3 >> 16) >> 8) * 0x3C) + t5) + 0xC)))) == -1) {
        } else {
            *(unsigned short *)((((((((unsigned int)((unsigned int)t3 >> 16) >> 8) * 0x3C) + t5) + 0xC) + (((unsigned char)((unsigned int)t3 >> 16) << 1) + ((unsigned char)((unsigned int)t3 >> 16) << 2))) + 0x0)) = 0xFFFFFFFF;
            *(unsigned int *)((((((unsigned int)((unsigned int)t3 >> 16) >> 8) * 0x3C) + t5) + 0x4)) = ((*(int *)((((((unsigned int)((unsigned int)t3 >> 16) >> 8) * 0x3C) + t5) + 0x4))) + 0x1);
            t7 = *(short *)((((((((unsigned int)((unsigned int)t3 >> 16) >> 8) * 0x3C) + t5) + 0xC) + (((unsigned char)((unsigned int)t3 >> 16) << 1) + ((unsigned char)((unsigned int)t3 >> 16) << 2))) + 0x4));
            t8 = *(int *)((((((unsigned int)((unsigned int)t3 >> 16) >> 8) * 0x3C) + t5) + 0x8));
            *(unsigned int *)((((((unsigned int)((unsigned int)t3 >> 16) >> 8) * 0x3C) + t5) + 0x8)) = (t8 + (unsigned short)t7);
            t9 = (unsigned char)((unsigned int)t3 >> 16);
            if (((unsigned char)((unsigned int)t3 >> 16) != 7) && (t0 = *(short *)((((((((unsigned int)((unsigned int)t3 >> 16) >> 8) * 0x3C) + t5) + 0xC) + (((unsigned char)((unsigned int)t3 >> 16) << 1) + ((unsigned char)((unsigned int)t3 >> 16) << 2))) + 0x6)), t0 == -1)) {
                t10 = t0;
                t9 = ((unsigned char)((unsigned int)t3 >> 16) + 0x1);
            } else {
                t10 = (unsigned char)((unsigned int)t3 >> 16);
            }
            t0 = t10;
            t10 = 0xC8A73D4;
            t11 = ((((((unsigned int)((unsigned int)t3 >> 16) >> 8) * 0x3C) + t5) + 0xC) + (((unsigned char)((unsigned int)t3 >> 16) << 1) + ((unsigned char)((unsigned int)t3 >> 16) << 2)));
            t12 = (t8 + (unsigned short)t7);
            t7 = (t9 - 1);
            t8 = t9;
            t9 = (((unsigned char)((unsigned int)t3 >> 16) << 1) + ((unsigned char)((unsigned int)t3 >> 16) << 2));
            for (;;) {
                if (((int)t7 >= 0) && (t12 = t7, t11 = t7, t10 = ((((unsigned int)((unsigned int)t3 >> 16) >> 8) * 0x3C) + t5), t12 = (t12 << 2), t1 = (int)(((unsigned int)t11) >> 31), t11 = (t11 << 1), t10 = (t10 + 0xC), t11 = (t11 + t12), t11 = (t11 + t10), t2 = *(short *)((t11 + 0x0)), t12 = t2, (int)t12 <= 0)) {
                    t12 = t7;
                    t13 = t7;
                    t12 = (t12 << 2);
                    t11 = ((((unsigned int)((unsigned int)t3 >> 16) >> 8) * 0x3C) + t5);
                    t13 = (t13 << 1);
                    t9 = t8;
                    t13 = (t13 + t12);
                    t12 = t8;
                    t11 = (t11 + 0xC);
                    t9 = (t9 << 1);
                    t12 = (t12 << 2);
                    t11 = (t11 + t13);
                    t9 = (t9 + t12);
                    t12 = (*(short *)((t11 + 0x0)));
                    if (t12 == 0) {
                        t14 = ((((unsigned int)((unsigned int)t3 >> 16) >> 8) * 0x3C) + t5);
                        t14 = (t14 + 0xC);
                        t0 = t14;
                        t0 = (t0 + t9);
                        t12 = ((((unsigned int)((unsigned int)t3 >> 16) >> 8) * 0x3C) + t5);
                        t11 = t14;
                        t12 = (t12 + 0xC);
                        t14 = ((((unsigned int)((unsigned int)t3 >> 16) >> 8) * 0x3C) + t5);
                        t11 = (t11 + t13);
                        t10 = ((((unsigned int)((unsigned int)t3 >> 16) >> 8) * 0x3C) + t5);
                        t12 = (t12 + t9);
                        t14 = (t14 + 0xC);
                        t10 = (t10 + 0xC);
                        t10 = (t10 + t13);
                        *(unsigned short *)((t10 + 0x0)) = 0xFFFFFFFF;
                        *(unsigned short *)((t12 + 0x0)) = 0x0;
                        t12 = t14;
                        t0 = (*(short *)((t0 + 0x2)));
                        t12 = (t12 + t13);
                        *(unsigned short *)((t11 + 0x2)) = t0;
                        t0 = t14;
                        t0 = (t0 + t9);
                        t14 = ((((unsigned int)((unsigned int)t3 >> 16) >> 8) * 0x3C) + t5);
                        t14 = (t14 + 0xC);
                        t0 = (*(short *)((t0 + 0x4)));
                        t11 = t14;
                        t11 = (t11 + t13);
                        *(unsigned short *)((t12 + 0x4)) = t0;
                        t12 = t14;
                        t0 = (*(short *)((t11 + 0x4)));
                        t12 = (t12 + t9);
                        t11 = t0;
                        t0 = (*(short *)((t12 + 0x2)));
                        t0 = (t0 + t11);
                        *(unsigned short *)((t12 + 0x2)) = t0;
                        t12 = ((((unsigned int)((unsigned int)t3 >> 16) >> 8) * 0x3C) + t5);
                        t12 = (t12 + 0xC);
                        t0 = 0x0;
                        t12 = (t12 + t9);
                        *(unsigned short *)((t12 + 0x4)) = t0;
                        t7 = (t7 - 1);
                        t8 = (t8 - 1);
                        continue;
                    }
                    t0 = ((((unsigned int)((unsigned int)t3 >> 16) >> 8) * 0x3C) + t5);
                    t0 = (t0 + 0xC);
                    t0 = (*(short *)((t13 + t0)));
                    if (t0 == -1) {
                        t11 = ((((unsigned int)((unsigned int)t3 >> 16) >> 8) * 0x3C) + t5);
                        t11 = (t11 + 0xC);
                        t14 = ((((unsigned int)((unsigned int)t3 >> 16) >> 8) * 0x3C) + t5);
                        t11 = (t11 + t9);
                        t14 = (t14 + 0xC);
                        *(unsigned short *)((t11 + 0x0)) = 0x0;
                        t11 = t14;
                        t11 = (t11 + t9);
                        t0 = (*(short *)((t11 + 0x4)));
                        t12 = t14;
                        t12 = (t12 + t13);
                        t10 = ((((unsigned int)((unsigned int)t3 >> 16) >> 8) * 0x3C) + t5);
                        t11 = t0;
                        t0 = (*(short *)((t12 + 0x4)));
                        t10 = (t10 + 0xC);
                        t0 = (t0 + t11);
                        t14 = t10;
                        *(unsigned short *)((t12 + 0x4)) = t0;
                        t12 = ((((unsigned int)((unsigned int)t3 >> 16) >> 8) * 0x3C) + t5);
                        t12 = (t12 + 0xC);
                        t0 = 0x0;
                        t12 = (t12 + t9);
                        *(unsigned short *)((t12 + 0x4)) = t0;
                        t14 = (t14 + t13);
                        t0 = (*(short *)((t14 + 0x4)));
                        t12 = t10;
                        t12 = (t12 + t9);
                        t11 = t0;
                        t0 = (*(short *)((t14 + 0x2)));
                        t0 = (t0 + t11);
                        *(unsigned short *)((t12 + 0x2)) = t0;
                        t7 = (t7 - 1);
                        t8 = (t8 - 1);
                        continue;
                    }
                    break;
                }
                break;
            }
            t6 = 0x0;
        }
        t4 = t6;
    }
    return t4;
}
