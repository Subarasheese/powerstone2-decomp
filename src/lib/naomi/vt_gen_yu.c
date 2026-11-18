/* Library code: C that behaves like this game's own bytes. */
/* Straight-line functions with calls and guards (batch gen_yu): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXCRS_Lock(int);
int ADXCRS_Unlock(void);
int ADXERR_CallErrFunc(int, ...);
int ADXSJD_GetLpEndOfst(int);
int ADXSJD_GetLpEndPos(int);
int ADXSJD_GetLpStartOfst(int);
int ADXSJD_GetLpStartPos(int);
int ADXSJD_SetDecPos(int, int);
int ADXSJD_SetTrapCnt(int, int);
int ADXSJD_SetTrapDtLen(int, int);
int ADXSJD_SetTrapNumSmpl(int, int);
int ADXT_Stop(int);
int nlUnitVector(int);
int SJMEM_Create(int, int);
int SJ_SplitChunk(int, int, int, int);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int adxt_start_sj(int, int);
int dbgMenuGetSelect(void);
int dbgMenuGetValue(int, int);
int dbgMenuIsPage(int);
int dbgMenuSetValue(int, int, int);
int endingModelSet(int);
int endingSprAnimInit(void);
int gdFsCheckMedia(int);
int gdFsGetDirEnt(int, int, int, int);
int gdFsGetDirInfoG(int, int);
int gdFsGetLE4(int);
int gdFsLockDir(int);
int gdFsReadWG(int, int, int);
int gdFsReopenHn(int, int, int, int);
int gdFsWaitCompleteReq(int);
int gdGdcGetCmdStat(int, int);
int kmSetBorderColor(int, ...);
int kmyRegisterBGPlane(int);
int kmyiSetScreenSize(int);
int memset(int, int, int);
int motFileLoadStep(int, int, int, int);
int motionSet(int, int, int, int, int, int, float);
int nlCalcPoint(int, int);
int nlCalcPoint4(int, int);
float nlInnerProduct(int, int);
int nlLineCalcColor(int, int);
int nlLineClipNear(int, int);
int nlLineDrawThick(int, int, int, int);
int nlLineSendHeader(int);
int nlMultiMatrix(int);
int nlMultiMatrix8(int);
int nlMultiMatrixRevOrder8(int);
int nlMultiPushedMatrix(void);
int nlObjPutLoadTexture(int, int);
int nlOuterProduct(int, int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlPushUnitMatrix(void);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlSearchPalette(int, int);
int nlSetCommonTextureOffset(int);
int nlSetPaletteData(int, int, int);
int nlSetPaletteMap(int, int);
int nlSubVector3op(int, int, int);
int nlTranslate(float, float, float);
int nlTranslateNV(int);
int nlTranslateV(int);
int nl_set_cnv_proj_pers(void);
int nlsndBlockMove(int, int, int);
int nlsndCheckPackIndex(int, int, int);
int nlsndCheckPackReloadError(int, int);
int nlsndG2Write(int, int);
int nlsndG2WriteN(int, int, int);
int nlsndPackLoadInit(int, int, int, int);
int nlsndSystemControl(int, int, int);
int nlsnd_PL_WaitAica1(void);
int nlsnd_PL_WaitAica2andGo(void);
int nlsnd_PL_WaitBlockMove(void);
int nlsnd_PL_WaitRequest(void);
int objListPut(int, int, int);
int playerInit(int, int);
int shopPowi(int, int);
int sndCrowdAmbStart(void);
int sndPack4Load(int);
int strmBgmPlay(int);
int syChainAddHandler(int, int, int, int);
int FUN_8c0d3804(int a4, int a5, int a6, int a7);
int FUN_8c1dd6e4(void);
int nlPerspectiveProj(int a4, int a5, int a6);
int FUN_0c181e30(int a4, int a5);
int FUN_8c013d28(int a4);
int FUN_8c0e716e(int a4, int a5);
int ADXT_InsertSilence(int a4, int a5, int a6);
int kmiProcessVertex_01(int a4, int a5, int a6, int a7);
int gdFsDaPlayG(int a4, int a5, int a6);
int nlLookAtUp(int a4, int a5, int a6);
int FUN_0c2c8d40(void);
int nlMirrorDouble(int a4);
int kmyInitializeVGA(int a4);
int gdFsDaPlaySctG(int a4, int a5, int a6);
int nlParallelProj(int a4);
int adxt_trap_entry(int a4);
int nlObjPutCheckSideCulling(int a4);
int ADXT_StartMemIdx(int a4, int a5, int a6);
int nlSysMetricsGetFrameBufferUser(int a4, int a5, int a6);
int nlLookAtUp_L(int a4, int a5, int a6);
int kmiProcessVertex_02(int a4, int a5, int a6, int a7);
int kmiProcessVertex_10(int a4, int a5, int a6, int a7);
int gdFsDaPauseG(void);
int gdDcfRepStat_(int a4, int a5);
int nlFrustum(float f4, float f5, float f6, float f7, float f8, float f9);
int nlFatalErrorTrap(int a4);
int nlsndPackReload(int a4, int a5);
int kmiProcessVertex_15(int a4, int a5, int a6, int a7);
int nlFrustum_L(float f4, float f5, float f6, float f7, float f8, float f9);
int nlsndPackReloadBG(int a4, int a5, int a6);
int nlDispStripLoadPalette(int a4, int a5);
int nlsndPackLoadLock(int a4, int a5, int a6);


int nlPerspectiveProj(int a4, int a5, int a6)
{
    int stk[26];
    register float u6;
    register float u9;
    register float u10;
    register float u13;
    register float u14;
    register float u16;
    register float u18;
    register float u19;
    register float u21;
    register float u23;
    register float u25;
    register float u26;
    register float u28;
    register float u30;
    register float u32;
    register float t33;
    register float u35;
    register float u37;
    register float u39;

    *(float *)((((int)stk + 4) + 0x0)) = ((*(float *)((a6 + 0x0))) - (*(float *)((a5 + 0x0))));
    *(float *)((((int)stk + 4) + 0x4)) = ((*(float *)((a6 + 0x4))) - (*(float *)((a5 + 0x4))));
    *(float *)((((int)stk + 4) + 0x8)) = ((*(float *)((a6 + 0x8))) - (*(float *)((a5 + 0x8))));
    u6 = *(float *)((a4 + 0xC));
    u9 = *(float *)((((int)stk + 4) + 0x0));
    u10 = ((*(float *)((a4 + 0x10))) * (*(float *)((((int)stk + 4) + 0x4))));
    u10 = u10 + u9 * u6;
    u13 = u10;
    u13 = u13 + (*(float *)((((int)stk + 4) + 0x8))) * (*(float *)((a4 + 0x14)));
    u14 = (u6 * (1.0f / u13));
    *(float *)(((int)stk + 16)) = ((-(u9 * u14)) + 1.0f);
    u16 = (u6 * (1.0f / u13));
    *(float *)(((int)stk + 20)) = (-((*(float *)((((int)stk + 4) + 0x4))) * u16));
    u18 = (u6 * (1.0f / u13));
    *(float *)(((int)stk + 24)) = (-((*(float *)((((int)stk + 4) + 0x8))) * u18));
    u19 = *(float *)((a4 + 0x10));
    u21 = (u19 * (1.0f / u13));
    *(float *)(((int)stk + 32)) = (-((*(float *)((((int)stk + 4) + 0x0))) * u21));
    u23 = (u19 * (1.0f / u13));
    *(float *)(((int)stk + 36)) = ((-((*(float *)((((int)stk + 4) + 0x4))) * u23)) + 1.0f);
    u25 = (u19 * (1.0f / u13));
    *(float *)(((int)stk + 40)) = (-((*(float *)((((int)stk + 4) + 0x8))) * u25));
    u26 = *(float *)((a4 + 0x14));
    u28 = (u26 * (1.0f / u13));
    *(float *)(((int)stk + 48)) = (-((*(float *)((((int)stk + 4) + 0x0))) * u28));
    u30 = (u26 * (1.0f / u13));
    *(float *)(((int)stk + 52)) = (-((*(float *)((((int)stk + 4) + 0x4))) * u30));
    u32 = (u26 * (1.0f / u13));
    *(float *)(((int)stk + 56)) = ((-((*(float *)((((int)stk + 4) + 0x8))) * u32)) + 1.0f);
    t33 = nlInnerProduct(a4, (a4 + 0xC));
    u35 = (t33 * (1.0f / u13));
    *(float *)(((int)stk + 64)) = ((*(float *)((((int)stk + 4) + 0x0))) * u35);
    u37 = (t33 * (1.0f / u13));
    *(float *)(((int)stk + 68)) = ((*(float *)((((int)stk + 4) + 0x4))) * u37);
    u39 = (t33 * (1.0f / u13));
    *(float *)(((int)stk + 72)) = ((*(float *)((((int)stk + 4) + 0x8))) * u39);
    *(float *)(((int)stk + 28)) = 0.0f;
    *(float *)(((int)stk + 44)) = 0.0f;
    *(float *)(((int)stk + 60)) = 0.0f;
    *(float *)(((int)stk + 76)) = 1.0f;
    nlMultiMatrix((((int)stk + 4) + 0xC));
    return (nlTranslateV(a5));
}


int ADXT_InsertSilence(int a4, int a5, int a6)
{
    int stk[11];
    register int t0;
    register int t1;
    register int t5;
    register int t7;
    register int t13;
    register int t16;
    register int t19;
    register int t21;
    register int t27;
    register int t30;

    t0 = *(int *)((a4 + 0x14));
    t1 = a6;
    if ((int)a6 < 0) {
        t1 = (a6 + 0x1F);
    }
    t5 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)((t0 + 0x0))) + 0x18)))))(t0, 0x0, (((int)t1 >> 5) * ((((a5 << 2) << 1) + a5) << 1)), (((int)stk + 4) + 0x8));
    t7 = (int)((int)(*(int *)(((int)stk + 16))) / (int)((((a5 << 2) << 1) + a5) << 1));
    memset((*(int *)(((int)stk + 12))), 0x0, (t7 * ((((a5 << 2) << 1) + a5) << 1)));
    SJ_SplitChunk((((int)stk + 4) + 0x8), (t7 * ((((a5 << 2) << 1) + a5) << 1)), (((int)stk + 4) + 0x8), ((int)stk + 4));
    t13 = ((int (*)(int, int, int))((*(int *)(((*(int *)((t0 + 0x0))) + 0x20)))))(t0, 0x1, (((int)stk + 4) + 0x8));
    t16 = ((int (*)(int, int, int))((*(int *)(((*(int *)((t0 + 0x0))) + 0x1C)))))(t0, 0x0, ((int)stk + 4));
    t19 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)((t0 + 0x0))) + 0x18)))))(t0, 0x0, ((((int)t1 >> 5) * ((((a5 << 2) << 1) + a5) << 1)) - (t7 * ((((a5 << 2) << 1) + a5) << 1))), (((int)stk + 4) + 0x8));
    t21 = (int)((int)(*(int *)(((int)stk + 16))) / (int)((((a5 << 2) << 1) + a5) << 1));
    memset((*(int *)(((int)stk + 12))), 0x0, (t21 * ((((a5 << 2) << 1) + a5) << 1)));
    SJ_SplitChunk((((int)stk + 4) + 0x8), (t21 * ((((a5 << 2) << 1) + a5) << 1)), (((int)stk + 4) + 0x8), ((int)stk + 4));
    t27 = ((int (*)(int, int, int))((*(int *)(((*(int *)((t0 + 0x0))) + 0x20)))))(t0, 0x1, (((int)stk + 4) + 0x8));
    t30 = ((int (*)(int, int, int))((*(int *)(((*(int *)((t0 + 0x0))) + 0x1C)))))(t0, 0x0, ((int)stk + 4));
    return (((((int)((int)((0x0 + (t7 * ((((a5 << 2) << 1) + a5) << 1))) + (t21 * ((((a5 << 2) << 1) + a5) << 1))) / (int)((((a5 << 2) << 1) + a5) << 1))) << 2) << 2) << 1);
}


int kmiProcessVertex_01(int a4, int a5, int a6, int a7)
{
    int stk[32];
    register int t5;
    register int t6;
    register int t13;
    register float u14;
    register float u16;
    register float u18;
    register float u20;
    register float u22;
    register float u24;
    register float u26;
    register float u28;
    register int t30;

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
        t13 = *(int *)((t6 + 0x0));
        t6 = (t6 + 0x4);
        u14 = *(float *)((t13 + 0x10));
        u16 = (u14 * 255.0f);
        if (!(2.14748365e+09f > (u14 * 255.0f))) {
            u16 = ((u14 * 255.0f) - (2.14748365e+09f + 2.14748365e+09f));
        }
        u18 = *(float *)((t13 + 0x14));
        u20 = (u18 * 255.0f);
        if (!(2.14748365e+09f > (u18 * 255.0f))) {
            u20 = ((u18 * 255.0f) - (2.14748365e+09f + 2.14748365e+09f));
        }
        u22 = *(float *)((t13 + 0x18));
        u24 = (u22 * 255.0f);
        if (!(2.14748365e+09f > (u22 * 255.0f))) {
            u24 = ((u22 * 255.0f) - (2.14748365e+09f + 2.14748365e+09f));
        }
        u26 = *(float *)((t13 + 0x1C));
        u28 = (u26 * 255.0f);
        if (!(2.14748365e+09f > (u26 * 255.0f))) {
            u28 = ((u26 * 255.0f) - (2.14748365e+09f + 2.14748365e+09f));
        }
        t30 = ((((int)stk + 4) + 0x20) + t5);
        t5 = (t5 + 0x1C);
        *(unsigned int *)((t30 + 0x14)) = (((((((int)u16 & 0xFF) << 16) << 8) | (((int)u20 & 0xFF) << 16)) | (((int)u24 & 0xFF) << 8)) | ((int)u28 & 0xFF));
        if ((unsigned int)t5 >= (unsigned int)0x54) {
            break;
        }
    }
    return (kmyRegisterBGPlane((((int)stk + 4) + 0x10)));
}


int nlMirrorDouble(int a4)
{
    int stk[20];
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u6;
    register float u7;
    register float u8;
    register float u11;
    register float u12;
    register float u15;
    register float u16;
    register float u19;
    register float u20;
    register float t21;

    u0 = *(float *)((a4 + 0xC));
    u1 = (u0 * u0);
    u2 = (u1 * (1.0f + 1.0f));
    u2 = -u2;
    *(float *)(((int)stk + 4)) = (u2 + 1.0f);
    u3 = *(float *)((a4 + 0x10));
    u4 = (u3 * u3);
    u5 = (u4 * (1.0f + 1.0f));
    u5 = -u5;
    *(float *)(((int)stk + 24)) = (u5 + 1.0f);
    u6 = *(float *)((a4 + 0x14));
    u7 = (u6 * u6);
    u8 = (u7 * (1.0f + 1.0f));
    u8 = -u8;
    *(float *)(((int)stk + 44)) = (u8 + 1.0f);
    u11 = ((*(float *)((a4 + 0xC))) * (*(float *)((a4 + 0x10))));
    u12 = (u11 * (1.0f + 1.0f));
    u12 = -u12;
    *(float *)((((int)stk + 4) + 0x10)) = u12;
    *(float *)((((int)stk + 4) + 0x4)) = u12;
    u15 = ((*(float *)((a4 + 0xC))) * (*(float *)((a4 + 0x14))));
    u16 = (u15 * (1.0f + 1.0f));
    u16 = -u16;
    *(float *)((((int)stk + 4) + 0x20)) = u16;
    *(float *)((((int)stk + 4) + 0x8)) = u16;
    u19 = ((*(float *)((a4 + 0x10))) * (*(float *)((a4 + 0x14))));
    u20 = (u19 * (1.0f + 1.0f));
    u20 = -u20;
    *(float *)((((int)stk + 4) + 0x24)) = u20;
    *(float *)((((int)stk + 4) + 0x18)) = u20;
    t21 = nlInnerProduct(a4, (a4 + 0xC));
    *(float *)(((int)stk + 52)) = ((t21 + t21) * (*(float *)((a4 + 0xC))));
    *(float *)(((int)stk + 56)) = ((t21 + t21) * (*(float *)((a4 + 0x10))));
    *(float *)(((int)stk + 60)) = ((t21 + t21) * (*(float *)((a4 + 0x14))));
    *(float *)(((int)stk + 16)) = 0.0f;
    *(float *)(((int)stk + 32)) = 0.0f;
    *(float *)(((int)stk + 48)) = 0.0f;
    *(float *)(((int)stk + 64)) = 1.0f;
    return (nlMultiMatrix(((int)stk + 4)));
}


int nlParallelProj(int a4)
{
    int stk[20];
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u6;
    register float u7;
    register float u8;
    register float t9;

    u0 = *(float *)((a4 + 0xC));
    *(float *)(((int)stk + 4)) = ((-(u0 * u0)) + 1.0f);
    u1 = *(float *)((a4 + 0x10));
    *(float *)(((int)stk + 24)) = ((-(u1 * u1)) + 1.0f);
    u2 = *(float *)((a4 + 0x14));
    *(float *)(((int)stk + 44)) = ((-(u2 * u2)) + 1.0f);
    u3 = *(float *)((a4 + 0x10));
    u4 = *(float *)((a4 + 0xC));
    *(float *)((((int)stk + 4) + 0x10)) = (-(u4 * u3));
    *(float *)((((int)stk + 4) + 0x4)) = (-(u4 * u3));
    u5 = *(float *)((a4 + 0x14));
    u6 = *(float *)((a4 + 0xC));
    *(float *)((((int)stk + 4) + 0x20)) = (-(u6 * u5));
    *(float *)((((int)stk + 4) + 0x8)) = (-(u6 * u5));
    u7 = *(float *)((a4 + 0x14));
    u8 = *(float *)((a4 + 0x10));
    *(float *)((((int)stk + 4) + 0x24)) = (-(u8 * u7));
    *(float *)((((int)stk + 4) + 0x18)) = (-(u8 * u7));
    t9 = nlInnerProduct(a4, (a4 + 0xC));
    *(float *)(((int)stk + 52)) = (t9 * (*(float *)((a4 + 0xC))));
    *(float *)(((int)stk + 56)) = (t9 * (*(float *)((a4 + 0x10))));
    *(float *)(((int)stk + 60)) = (t9 * (*(float *)((a4 + 0x14))));
    *(float *)(((int)stk + 16)) = 0.0f;
    *(float *)(((int)stk + 32)) = 0.0f;
    *(float *)(((int)stk + 48)) = 0.0f;
    *(float *)(((int)stk + 64)) = 1.0f;
    return (nlMultiMatrix(((int)stk + 4)));
}














int nlFatalErrorTrap(int a4)
{
    int stk[6];
    register int t13;

    if (a4 != 1) {
        if (a4 != 2) {
            if (a4 != 3) {
                if (a4 != 4) {
                } else {
                    *(unsigned int *)((((int)stk + 8) + 0x0)) = 0xFFFF00FF;
                }
            } else {
                *(unsigned int *)((((int)stk + 8) + 0x0)) = 0xFF00FF00;
            }
        } else {
            *(unsigned int *)((((int)stk + 8) + 0x0)) = 0xFFFF0000;
        }
    } else {
        *(unsigned int *)((((int)stk + 8) + 0x0)) = 0xFF0000FF;
    }
    if (a4 != 3) {
        t13 = (*(int *)((((int)stk + 8) + 0x0)));
        *(int *)((int)stk + 4) = t13;
        kmSetBorderColor(t13);
        _builtin_set_cr((_builtin_get_cr() & 0xEFFFFF0F));
        if (a4 != 1) {
            if (a4 != 2) {
                if (a4 != 3) {
                    if (a4 != 4) {
                    } else {
                        _builtin_trapa(51);
                    }
                } else {
                    _builtin_trapa(50);
                    _builtin_trapa(51);
                }
            } else {
                _builtin_trapa(49);
                _builtin_trapa(50);
                _builtin_trapa(51);
            }
        } else {
            _builtin_trapa(48);
            _builtin_trapa(49);
            _builtin_trapa(50);
            _builtin_trapa(51);
        }
    }
    return a4;
}



