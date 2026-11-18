/* Library code: C that behaves like this game's own bytes. */
/* Straight-line functions with calls and guards (batch gen_yt): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXSJD_GetDecNumSmpl(int);
int ADXSJD_GetStat(int);
int ADXSTM_GetStat(int);
int ADXT_Stop(int);
int setCullingThreshold(float);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int adxt_RcvrReplay(int);
float cpuDistXZ(int, int);
int cpuSglHitReady(int);
int cpuShotAimCheck(int);
int cpuShotAimStick(int);
int cpuShotTargetSet(int, float, float);
int gdFsReopenHn(int, int, int, int);
int kmInitDevice(int);
int kmSetDisplayMode(int, int, int, int);
int kmSetPALEXTCallback(int);
int kmSetSystemConfiguration(int);
int kmSetWaitVsyncCount(int);
int kmiExCallBackFunc(int, int, int, int, float, float, float, float, float, float, float, float);
int kmiReadRegister(int);
int kmiWriteRegister(int, int);
int kmyRegisterBGPlane(int);
int mwRnaErrCallFunc(int, ...);
int mwlSbAlloc(void);
int mwlSbAllocWork(int);
int nlArcTan(float);
float nlCos(int);
int nlCreateVertexBuffer_multi_pass(int, int, int, int, int, int);
int nlLoadDummyTexture(void);
int nlMultiMatrix(int);
int nlRand(void);
float nlRandom(void);
int nlSetFatalErrorMode(int);
int nlSetWindowSize(float, float, float, float);
float nlSin(int);
int nlSysInitStripContextBG(int);
int nlSysInitStripContextVtx(int);
float nlTan(int);
int nl_set_cnv_proj_pers(void);
int nl_system_config_init(int);
int nlsndG2DmaHandleClose(int);
int nlsndG2DmaHandleOpen(void);
int nlsndStreamClose(int);
int nlsndStreamGenerateHdInfo(int);
int nlsndStreamGetBufInfo(int, int, int);
int nlsndStreamOpen(int);
int sys_init(void);
int FUN_8c0450ac(int a4, float f4, float f5);
int FUN_0c17c970(int a4, float f4, float f5, float f6);
int FUN_0c2cb300(int a4);
int FUN_8c07f038(int a4, int a5, int a6, int a7, int a8, int a9, int a10);
int FUN_0c2dc2e2(int a4);
int kmiProcessVertex_05(int a4, int a5, int a6, int a7);
int kmiProcessVertex_06(int a4, int a5, int a6, int a7);
void FUN_8c0eaf30(int a4, int a5, int a6, int a7);
int nlPerspective_L_0c079730(int a4, float f4, float f5, float f6);
int nlPerspective_L(int a4, float f4, float f5, float f6);
int ADXT_ExecErrChk(int a4);
float FUN_8c049480(int a4, float f4, float f5);
int FUN_8c0ec6a0(int a4, int a5, int a6, int a7, int a8, int a9);
int kmiProcessVertex_07(int a4, int a5, int a6, int a7);
int kmiProcessVertex_13(int a4, int a5, int a6, int a7);
int kmiProcessVertex_08(int a4, int a5, int a6, int a7);
int kmiProcessVertex_14(int a4, int a5, int a6, int a7);
int gdFsDaReleaseG(int a4);
int FUN_0c2c8e20(float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11);


int kmiProcessVertex_05(int a4, int a5, int a6, int a7)
{
    int stk[32];
    register int t5;
    register int t6;
    register int t17;
    register float u18;
    register float u20;
    register float u22;
    register float u24;
    register float u26;
    register float u28;
    register float u30;
    register float u32;
    register int t34;
    register float u35;
    register float u37;
    register float u39;
    register float u41;
    register float u43;
    register float u45;
    register float u47;
    register float u49;
    register int t51;

    *(unsigned int *)(((int)stk + 4)) = (((int)stk + 4) + 0x4);
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x0)) = a5;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x4)) = a6;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x8)) = a7;
    *(unsigned int *)(((int)stk + 20)) = (*(int *)((a4 + 0x0)));
    *(unsigned int *)(((int)stk + 24)) = (*(int *)((a4 + 0x4)));
    *(unsigned int *)(((int)stk + 28)) = (*(int *)((a4 + 0x8)));
    *(unsigned int *)(((int)stk + 32)) = (*(int *)((a4 + 0xC)));
    t5 = 0x0;
    t6 = (*(int *)(((int)stk + 4)));
    for (;;) {
        *(float *)((((((int)stk + 4) + 0x20) + t5) + 0x0)) = (*(float *)(((*(int *)((t6 + 0x0))) + 0x4)));
        *(float *)((((((int)stk + 4) + 0x20) + t5) + 0x4)) = (*(float *)(((*(int *)((t6 + 0x0))) + 0x8)));
        *(float *)((((((int)stk + 4) + 0x20) + t5) + 0x8)) = (*(float *)(((*(int *)((t6 + 0x0))) + 0xC)));
        *(float *)((((((int)stk + 4) + 0x20) + t5) + 0xC)) = (*(float *)(((*(int *)((t6 + 0x0))) + 0x10)));
        *(float *)((((((int)stk + 4) + 0x20) + t5) + 0x10)) = (*(float *)(((*(int *)((t6 + 0x0))) + 0x14)));
        t17 = *(int *)((t6 + 0x0));
        u18 = *(float *)((t17 + 0x20));
        u20 = (u18 * 255.0f);
        if (!(2.14748365e+09f > (u18 * 255.0f))) {
            u20 = ((u18 * 255.0f) - (2.14748365e+09f + 2.14748365e+09f));
        }
        u22 = *(float *)((t17 + 0x24));
        u24 = (u22 * 255.0f);
        if (!(2.14748365e+09f > (u22 * 255.0f))) {
            u24 = ((u22 * 255.0f) - (2.14748365e+09f + 2.14748365e+09f));
        }
        u26 = *(float *)((t17 + 0x28));
        u28 = (u26 * 255.0f);
        if (!(2.14748365e+09f > (u26 * 255.0f))) {
            u28 = ((u26 * 255.0f) - (2.14748365e+09f + 2.14748365e+09f));
        }
        u30 = *(float *)((t17 + 0x2C));
        u32 = (u30 * 255.0f);
        if (!(2.14748365e+09f > (u30 * 255.0f))) {
            u32 = ((u30 * 255.0f) - (2.14748365e+09f + 2.14748365e+09f));
        }
        *(unsigned int *)((((((int)stk + 4) + 0x20) + t5) + 0x14)) = (((((((int)u20 & 0xFF) << 16) << 8) | (((int)u24 & 0xFF) << 16)) | (((int)u28 & 0xFF) << 8)) | ((int)u32 & 0xFF));
        t34 = *(int *)((t6 + 0x0));
        t6 = (t6 + 0x4);
        u35 = *(float *)((t34 + 0x30));
        u37 = (u35 * 255.0f);
        if (!(2.14748365e+09f > (u35 * 255.0f))) {
            u37 = ((u35 * 255.0f) - (2.14748365e+09f + 2.14748365e+09f));
        }
        u39 = *(float *)((t34 + 0x34));
        u41 = (u39 * 255.0f);
        if (!(2.14748365e+09f > (u39 * 255.0f))) {
            u41 = ((u39 * 255.0f) - (2.14748365e+09f + 2.14748365e+09f));
        }
        u43 = *(float *)((t34 + 0x38));
        u45 = (u43 * 255.0f);
        if (!(2.14748365e+09f > (u43 * 255.0f))) {
            u45 = ((u43 * 255.0f) - (2.14748365e+09f + 2.14748365e+09f));
        }
        u47 = *(float *)((t34 + 0x3C));
        u49 = (u47 * 255.0f);
        if (!(2.14748365e+09f > (u47 * 255.0f))) {
            u49 = ((u47 * 255.0f) - (2.14748365e+09f + 2.14748365e+09f));
        }
        t51 = ((((int)stk + 4) + 0x20) + t5);
        t5 = (t5 + 0x1C);
        *(unsigned int *)((t51 + 0x18)) = (((((((int)u37 & 0xFF) << 16) << 8) | (((int)u41 & 0xFF) << 16)) | (((int)u45 & 0xFF) << 8)) | ((int)u49 & 0xFF));
        if ((unsigned int)t5 < (unsigned int)0x54) continue;
        break;
    }
    return (kmyRegisterBGPlane((((int)stk + 4) + 0x10)));
}


int kmiProcessVertex_06(int a4, int a5, int a6, int a7)
{
    int stk[32];
    register int t5;
    register int t6;
    register int t15;
    register float u16;
    register float u18;
    register float u20;
    register float u22;
    register float u24;
    register float u26;
    register float u28;
    register float u30;
    register int t32;
    register float u33;
    register float u35;
    register float u37;
    register float u39;
    register float u41;
    register float u43;
    register float u45;
    register float u47;
    register int t49;

    *(unsigned int *)(((int)stk + 4)) = (((int)stk + 4) + 0x4);
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x0)) = a5;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x4)) = a6;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x8)) = a7;
    *(unsigned int *)(((int)stk + 20)) = (*(int *)((a4 + 0x0)));
    *(unsigned int *)(((int)stk + 24)) = (*(int *)((a4 + 0x4)));
    *(unsigned int *)(((int)stk + 28)) = (*(int *)((a4 + 0x8)));
    *(unsigned int *)(((int)stk + 32)) = (*(int *)((a4 + 0xC)));
    t5 = 0x0;
    t6 = (*(int *)(((int)stk + 4)));
    for (;;) {
        *(float *)((((((int)stk + 4) + 0x20) + t5) + 0x0)) = (*(float *)(((*(int *)((t6 + 0x0))) + 0x4)));
        *(float *)((((((int)stk + 4) + 0x20) + t5) + 0x4)) = (*(float *)(((*(int *)((t6 + 0x0))) + 0x8)));
        *(float *)((((((int)stk + 4) + 0x20) + t5) + 0x8)) = (*(float *)(((*(int *)((t6 + 0x0))) + 0xC)));
        *(unsigned int *)((((((int)stk + 4) + 0x20) + t5) + 0xC)) = (*(int *)(((*(int *)((t6 + 0x0))) + 0x10)));
        t15 = *(int *)((t6 + 0x0));
        u16 = *(float *)((t15 + 0x20));
        u18 = (u16 * 255.0f);
        if (!(2.14748365e+09f > (u16 * 255.0f))) {
            u18 = ((u16 * 255.0f) - (2.14748365e+09f + 2.14748365e+09f));
        }
        u20 = *(float *)((t15 + 0x24));
        u22 = (u20 * 255.0f);
        if (!(2.14748365e+09f > (u20 * 255.0f))) {
            u22 = ((u20 * 255.0f) - (2.14748365e+09f + 2.14748365e+09f));
        }
        u24 = *(float *)((t15 + 0x28));
        u26 = (u24 * 255.0f);
        if (!(2.14748365e+09f > (u24 * 255.0f))) {
            u26 = ((u24 * 255.0f) - (2.14748365e+09f + 2.14748365e+09f));
        }
        u28 = *(float *)((t15 + 0x2C));
        u30 = (u28 * 255.0f);
        if (!(2.14748365e+09f > (u28 * 255.0f))) {
            u30 = ((u28 * 255.0f) - (2.14748365e+09f + 2.14748365e+09f));
        }
        *(unsigned int *)((((((int)stk + 4) + 0x20) + t5) + 0x14)) = (((((((int)u18 & 0xFF) << 16) << 8) | (((int)u22 & 0xFF) << 16)) | (((int)u26 & 0xFF) << 8)) | ((int)u30 & 0xFF));
        t32 = *(int *)((t6 + 0x0));
        t6 = (t6 + 0x4);
        u33 = *(float *)((t32 + 0x30));
        u35 = (u33 * 255.0f);
        if (!(2.14748365e+09f > (u33 * 255.0f))) {
            u35 = ((u33 * 255.0f) - (2.14748365e+09f + 2.14748365e+09f));
        }
        u37 = *(float *)((t32 + 0x34));
        u39 = (u37 * 255.0f);
        if (!(2.14748365e+09f > (u37 * 255.0f))) {
            u39 = ((u37 * 255.0f) - (2.14748365e+09f + 2.14748365e+09f));
        }
        u41 = *(float *)((t32 + 0x38));
        u43 = (u41 * 255.0f);
        if (!(2.14748365e+09f > (u41 * 255.0f))) {
            u43 = ((u41 * 255.0f) - (2.14748365e+09f + 2.14748365e+09f));
        }
        u45 = *(float *)((t32 + 0x3C));
        u47 = (u45 * 255.0f);
        if (!(2.14748365e+09f > (u45 * 255.0f))) {
            u47 = ((u45 * 255.0f) - (2.14748365e+09f + 2.14748365e+09f));
        }
        t49 = ((((int)stk + 4) + 0x20) + t5);
        t5 = (t5 + 0x1C);
        *(unsigned int *)((t49 + 0x18)) = (((((((int)u35 & 0xFF) << 16) << 8) | (((int)u39 & 0xFF) << 16)) | (((int)u43 & 0xFF) << 8)) | ((int)u47 & 0xFF));
        if ((unsigned int)t5 < (unsigned int)0x54) continue;
        break;
    }
    return (kmyRegisterBGPlane((((int)stk + 4) + 0x10)));
}


int ADXT_ExecErrChk(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t2 = *(signed char *)((a4 + 0x1));
    if ((t2 == 3) && (t0 = *(signed char *)((a4 + 0x72)), t0 == 0)) {
        t0 = ADXSJD_GetStat((*(int *)((a4 + 0x4))));
        if (t0 != 3) {
            t0 = ADXSJD_GetDecNumSmpl((*(int *)((a4 + 0x4))));
            if ((*(int *)((a4 + 0x64))) == t0) {
                *(unsigned short *)((a4 + 0x68)) = ((*(short *)((a4 + 0x68))) + 0x1);
                t3 = *(int *)((a4 + 0x38));
                if ((int)(*(short *)((a4 + 0x68))) > (int)((t3 << 2) + t3)) {
                    *(unsigned short *)((a4 + 0x60)) = 0xFFFFFFFE;
                }
            } else {
                *(unsigned short *)((a4 + 0x68)) = 0x0;
            }
            *(unsigned int *)((a4 + 0x64)) = t0;
            if ((*(short *)((a4 + 0x60))) != 0) {
                t0 = *(signed char *)((a4 + 0x6D));
                if ((t0 != 1) && (t0 != 2)) {
                } else {
                    ADXT_Stop(a4);
                }
                if ((*(signed char *)((a4 + 0x6D))) != 0) {
                    *(unsigned short *)((a4 + 0x60)) = 0x0;
                    *(unsigned short *)((a4 + 0x68)) = 0x0;
                }
            }
        } else {
            *(unsigned short *)((a4 + 0x68)) = 0x0;
        }
    } else {
        *(unsigned short *)((a4 + 0x68)) = 0x0;
    }
    if (((int)t2 >= (int)0x1) && (((int)t2 <= (int)0x3) && (t1 = *(signed char *)((a4 + 0x72)), t1 == 0))) {
        t0 = ADXSJD_GetStat((*(int *)((a4 + 0x4))));
        if (t0 != 3) {
            t0 = 0x0;
            if ((*(int *)((a4 + 0x14))) != 0) {
                t1 = *(int *)((a4 + 0x14));
                t0 = (((int (*)(int, int))((*(int *)(((*(int *)((t1 + 0x0))) + 0x24)))))(t1, 0x1));
            }
            if ((int)t0 < (int)0x40) {
                *(unsigned short *)((a4 + 0x6A)) = ((*(short *)((a4 + 0x6A))) + 0x1);
                if (t2 == 3) {
                    t0 = *(int *)((a4 + 0x38));
                    if ((int)(*(short *)((a4 + 0x6A))) <= (int)((t0 << 2) + t0)) {
                    } else {
                        *(unsigned short *)((a4 + 0x60)) = 0xFFFFFFFF;
                    }
                } else {
                    t0 = *(int *)((a4 + 0x38));
                    if ((int)(*(short *)((a4 + 0x6A))) > (int)(((t0 << 2) + t0) << 2)) {
                        *(unsigned short *)((a4 + 0x60)) = 0xFFFFFFFF;
                    }
                }
                t0 = 0x60;
                if ((*(short *)((a4 + 0x60))) != 0) {
                    t1 = *(signed char *)((a4 + 0x6D));
                    if (t1 == 1) {
                        ADXT_Stop(a4);
                    } else {
                        if (t1 == 2) {
                            adxt_RcvrReplay(a4);
                        }
                    }
                    t1 = 0x6D;
                    if ((*(signed char *)((a4 + 0x6D))) != 0) {
                        *(unsigned short *)((a4 + 0x60)) = 0x0;
                        *(unsigned short *)((a4 + 0x6A)) = 0x0;
                        t1 = 0x6A;
                    }
                    t0 = t1;
                }
                t1 = t0;
            } else {
                *(unsigned short *)((a4 + 0x6A)) = 0x0;
                t1 = 0x6A;
            }
            t0 = t1;
        } else {
            *(unsigned short *)((a4 + 0x6A)) = 0x0;
            t0 = 0x6A;
        }
        t1 = t0;
    } else {
        *(unsigned short *)((a4 + 0x6A)) = 0x0;
        t1 = 0x6A;
    }
    t0 = t1;
    if ((*(int *)((a4 + 0x8))) != 0) {
        t1 = ADXSTM_GetStat((*(int *)((a4 + 0x8))));
        t2 = t1;
        if (t1 == 4) {
            t1 = *(signed char *)((a4 + 0x6D));
            if (t1 == 1) {
                ADXT_Stop(a4);
            } else {
                if (t1 == 2) {
                    adxt_RcvrReplay(a4);
                }
            }
            t1 = 0x6D;
            if ((*(signed char *)((a4 + 0x6D))) != 0) {
                *(unsigned short *)((a4 + 0x60)) = 0x0;
                *(unsigned short *)((a4 + 0x6A)) = 0x0;
                t1 = 0x6A;
            }
            t2 = t1;
        }
        t0 = t2;
    }
    return t0;
}
