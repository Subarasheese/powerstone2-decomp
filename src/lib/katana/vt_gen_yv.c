/* Library code: C that behaves like this game's own bytes. */
/* Straight-line functions with calls and guards (batch gen_yv): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
typedef struct { int w[4]; } Stk4;
typedef struct { int w[5]; } Stk5;
int ADXCRS_Lock(void);
int ADXCRS_Unlock(void);
int ADXERR_CallErrFunc(int, ...);
int ADXSTM_OpenFname(int, int);
int ADXT_Stop(int);
int ADX_DecodeInfo(int, int, int, int, int, int, int, int, int, int);
int resetBackColorZ(int, int, int);
int FUN_8c1e7ef2(int, int, int, int);
int SJMEM_Create(int, int);
extern void _builtin_ftrv(float *, float *);
extern int _builtin_get_imask(void);
extern void _builtin_ld_ext(float (*)[4]);
extern void _builtin_prefetch(void *);
extern void _builtin_set_imask(int);
extern float _builtin_sqrtf(float);
extern void _builtin_st_ext(float (*)[4]);
int adxt_start_sj(int, int);
int adxt_start_stm(int);
int dbgMenuGetValue(int, int);
int evSeRetry(int, int);
int evVoiceFadeOut(int);
int fmMngSctRefresh(int);
int gdFsGetDrvStatG(int, int, int, int);
int gdFsReopenHn(int, int, int, int);
int gdFsReqDrvStatG(void);
int gdGdcReqCmd(int, int);
int gdGdcReqDmaTrans(int, int);
int kmChangeDisplayFilterMode(int, int);
int kmFreeTexture(int);
int kmLoadTextureRom(int, int);
int kmProcessVertexRenderState(int);
int kmSetUserClipping(int, int, int, int);
int kmyObFindDevice(int, int, int);
int kmyRegisterBGPlane(int);
int lightSetTarget(int, int, int, int, int);
int memset(int, int, int);
int mwRnaErrCallFunc(int, ...);
int mwlSbFreeWork(int);
int mwlSbGetDrctLvl(int);
int mwlSbGetFilter(int, int, int, int);
int mwlSbGetFx(int, int, int, int);
int mwlSbGetGain(int);
int mwlSbGetPitch(int, int, int);
int mwlSbGetStreamParam(int, int, int, int);
int mwlSbTrnsDat(int, int, int, int, int);
int ndbClear(void);
int ndbEditDrawMatches(int, int, int, int, int, int, int, int, int);
int ndbEditFields(int);
int ndbEditInput(int, int, int, int, int, int, int, int, int, int, int, int);
int ndbEditShowEntry(int, int, int, int, int, int, int, int, int, int, int, int);
int nlArcCos(float);
int nlCalcPoint(int, int);
int nlCalcPoint4(int, int);
int nlCommonTextureClearTextureIndex(int);
int nlCommonTextureGetNextTextureIndex(void);
extern int nlCopyMatrix();
int nlCreateTextureParam(int);
int nlGetMatrix(int);
float nlInnerProduct(int, int);
float nlInvertSqrt(float);
float nlLength(int, int);
int nlLightDiffuse(int, int);
int nlLoadMatrix(int);
int nlLoadTextureMem(int, int, int);
int nlLocate(int, int);
int nlMultiMatrix(int);
int nlMultiMatrixRevOrder8(int);
int nlOuterProduct(int, int, int);
int nlPopMatrix(int);
int nlPrintf(int, ...);
int nlPushMatrix(int);
int nlRotateAZ(int, float, float);
int nlRotateXSC(float, float);
int nlRotateYSC(float, float);
int nlSetWindowSize(float, float, float, float);
int nlSpriteLoadTextureOnce_Sub(int, int, int, int);
int nlSysUseLatency2V(int, int, int, int);
int nlTranslateNV(int);
int nlsndCheckPackIndex(int, int, int);
int nlsndG2DmaGetHandleStatus(int);
int nlsndG2DmaHandleClose(int);
int nlsndG2DmaRequest(int, int, int, int);
int nlsndG2Write(int, int);
int nlsndG2WriteN(int, int, int);
int nlsndGetPackInfo(int, int);
int nlsndPackLoadInit(int, int, int, int);
int nlsndSeqRequest(int);
int nlsndStreamClose(int);
int nlsndStreamStop(int);
int nlsndSystemControl(int, int, int);
int set_event(int, int);
int set_event2(int, int);
int sprInitPos(int, int, Stk3);
int sprPutAtAlpha(int, Stk3, float);
int syBtFlDeleteSct(int, int, int);
int syCacheOCBI(int, int);
int syCacheOCBP(int, int);
int syCachePurgeAll(int, int, int, int);
int thunk_nlSprPut(int);
Stk3 vecMake(float, float, float);
int nlObjPutCheckSideFarCulling(int a4);
int gdFsDaStopG(void);
int nlSysMetricsGetFrameBuffer(int a4, int a5, int a6);
int nlLookAt(int a4, int a5, int a6, float f4, float f5);
int mwSbClosePort(int a4);
int nlUnitNormalVectorCCW(int a4, int a5, int a6, int a7);
int nlUnitNormalVectorCW(int a4, int a5, int a6, int a7);
float FUN_8c0f1a10(void);
int gdFsDaGetInfoG(int a4);
int nlGetNormalCalcMatrix(int a4, float f4, float f5, float f6, float f7, float f8, float f9);
int nlsndPackLoad_Write(int a4);
int nlDispStripFreeTexture(int a4);
int nlDispStripLoadTexture(int a4, int a5);
int FUN_8c0836fc(void);
int nlsndPackLoadLockBG(int a4, int a5, int a6, int a7);
void FUN_8c1e805c(int a4, int a5, int a6, int a7, int a8);
int mwlSbTrnsEx(int a4, int a5, int a6, int a7);
int gdDcfRead_(int a4, int a5, int a6, int a7);
void syG2DmaEndIntrruptHandler(int a4);
int nlProjectScreen(int a4, int a5);
int syTmrInt1SetEx(int a4, int a5, int a6, int a7);
int nlLightAllOff(void);
int ADXT_IsHeader(int a4, int a5, int a6);
int FUN_8c081e9e(void);
int kmiProcessVertex_09(int a4, int a5, int a6, int a7);
int nlReturnLightAll(void);
int nlScreenPoint(int a4, int a5, int a6, float f4, float f5, float f6);
int FUN_8c1e7fd8(int a4, int a5, int a6);
int nlSetVertexMode(int a4);
int syTmrGenMicroToCount(int a4, int a5);
int FUN_8c2007b0(int a4, int a5, int a6, int a7);
int FUN_8c0e6220(void);
int nlsndPackLoad_Open(int a4, int a5, int a6);
int syTmrGenSetInt(int a4, int a5);
void FUN_8c0d1dda(int a4);
int mwSbGetExPrm(int a4, int a5, int a6, int a7);
int FUN_8c0efc70(int a4);
int FUN_8c1e7e96(int a4, int a5, int a6, int a7);
int nlCommonTextureReloadA(int a4, int a5);
int nlObjPutSetPaletteOffset(int a4, int a5, int a6, int a7);
int FUN_8c09c646(float f4);
int nlSetUserTileClip(int a4, int a5, int a6, int a7, int a8);
int gdDcfTrans32_(int a4, int a5, int a6);
int nlChangeDisplayFilterMode(int a4);
void syCacheInit_P2_(int a4, int a5, int a6, int a7);
int syTmrGenCountToMicro(int a4, int a5);
int FUN_8c0d0b5c(void);
int ADXT_StartMem(int a4, int a5);
int mwAcTrns(int a4, int a5, int a6, int a7, int a8);
int kmiVRightArray(int a4);
int FUN_8c1fabc0(int a4);
int ADXT_StartFname(int a4, int a5);
int FUN_8c08aade(Stk5 s);
int mwRnaSetFilter(int a4, int a5, int a6);
int kmiHolizontalStripBufferArray(int a4);
float nlLightGlobalAmbient(int a4);
int nlSpriteLoadTextureGI(int a4, int a5);
void FUN_8c0d2b00(void);
int FUN_8c013ce6(int a4);
int nlLineFog(int a4);
int mwSbGetTrnsStat(int a4, int a5);
int FUN_0c2e1abc(int a4, int a5, int a6);
int nlSysMultiPassMode(int a4, int a5, int a6, int a7);
int ADXT_IsIbufSafety(int a4);
void FUN_8c0886fc(int a4);
int FUN_8c08aaa0(Stk4 s);
int FUN_0c2cbcc0(int a4);
void FUN_8c0d2b6a(void);
int FUN_8c0c53f2(int a4, Stk3 s);
int nlLightCutoffCos(int a4, float f4);
int FUN_0c2cbc5e(int a4);
void FUN_8c0d7ea8(void);
int mwSbGetPan(int a4, int a5, int a6, int a7);
int gdFsIsTrayOpenG(int a4, int a5, int a6, int a7);
int syTmrCountToMicro(int a4);
int fmMngRefresh(int a4, int a5, int a6);
int nlFastScreenPoint(int a4, int a5);
int nlObjPutVtxBufScan(int a4, int a5, int a6, int a7);
void ADXT_GetNumSctIbuf(int a4);





int nlUnitNormalVectorCCW(int a4, int a5, int a6, int a7)
{
    int stk[9];
    register float t13;
    register float t14;

    *(float *)(((int)stk + 16)) = ((*(float *)((a5 + 0x0))) - (*(float *)((a4 + 0x0))));
    *(float *)(((int)stk + 20)) = ((*(float *)((a5 + 0x4))) - (*(float *)((a4 + 0x4))));
    *(float *)(((int)stk + 24)) = ((*(float *)((a5 + 0x8))) - (*(float *)((a4 + 0x8))));
    *(float *)(((int)stk + 4)) = ((*(float *)((a6 + 0x0))) - (*(float *)((a5 + 0x0))));
    *(float *)(((int)stk + 8)) = ((*(float *)((a6 + 0x4))) - (*(float *)((a5 + 0x4))));
    *(float *)(((int)stk + 12)) = ((*(float *)((a6 + 0x8))) - (*(float *)((a5 + 0x8))));
    nlOuterProduct((((int)stk + 4) + 0xC), ((int)stk + 4), a7);
    t13 = nlInnerProduct(a7, a7);
    if (t13 == 0.0f) {
        return 0x0;
    }
    t14 = nlInvertSqrt(t13);
    *(float *)((a7 + 0x0)) = ((*(float *)((a7 + 0x0))) * t14);
    *(float *)((a7 + 0x4)) = ((*(float *)((a7 + 0x4))) * t14);
    *(float *)((a7 + 0x8)) = ((*(float *)((a7 + 0x8))) * t14);
    return 0x1;
}


int nlUnitNormalVectorCW(int a4, int a5, int a6, int a7)
{
    int stk[9];
    register float t13;
    register float t14;

    *(float *)(((int)stk + 16)) = ((*(float *)((a5 + 0x0))) - (*(float *)((a4 + 0x0))));
    *(float *)(((int)stk + 20)) = ((*(float *)((a5 + 0x4))) - (*(float *)((a4 + 0x4))));
    *(float *)(((int)stk + 24)) = ((*(float *)((a5 + 0x8))) - (*(float *)((a4 + 0x8))));
    *(float *)(((int)stk + 4)) = ((*(float *)((a6 + 0x0))) - (*(float *)((a5 + 0x0))));
    *(float *)(((int)stk + 8)) = ((*(float *)((a6 + 0x4))) - (*(float *)((a5 + 0x4))));
    *(float *)(((int)stk + 12)) = ((*(float *)((a6 + 0x8))) - (*(float *)((a5 + 0x8))));
    nlOuterProduct(((int)stk + 4), (((int)stk + 4) + 0xC), a7);
    t13 = nlInnerProduct(a7, a7);
    if (t13 == 0.0f) {
        return 0x0;
    }
    t14 = nlInvertSqrt(t13);
    *(float *)((a7 + 0x0)) = ((*(float *)((a7 + 0x0))) * t14);
    *(float *)((a7 + 0x4)) = ((*(float *)((a7 + 0x4))) * t14);
    *(float *)((a7 + 0x8)) = ((*(float *)((a7 + 0x8))) * t14);
    return 0x1;
}








int ADXT_IsHeader(int a4, int a5, int a6)
{
    int stk[17];
    register int t0;
    register int t1;

    *(unsigned int *)(((int)stk + 60)) = a6;
    if ((int)a5 >= (int)0x2) {
        t0 = *(short *)((a4 + 0x0));
        if ((unsigned short)((unsigned char)((int)(unsigned short)t0 >> 8) | (((unsigned short)t0 << 8) & 0xFF00)) == 0x8000) {
            *(int *)((int)stk + 24) = (((int)stk + 28) + 0x1C);
            *(int *)((int)stk + 20) = (((int)stk + 24) + 0x1C);
            *(int *)((int)stk + 16) = (((int)stk + 20) + 0x1C);
            *(int *)((int)stk + 12) = (((int)stk + 16) + 0x1C);
            *(int *)((int)stk + 8) = (((int)stk + 12) + 0x1C);
            *(int *)((int)stk + 4) = (((int)stk + 8) + 0x1C);
            t1 = ADX_DecodeInfo(a4, a5, (((int)stk + 4) + 0x18), (((int)stk + 4) + 0x1C), (((int)stk + 8) + 0x1C), (((int)stk + 12) + 0x1C), (((int)stk + 16) + 0x1C), (((int)stk + 20) + 0x1C), (((int)stk + 24) + 0x1C), (((int)stk + 28) + 0x1C));
            if ((int)t1 < 0) {
                return 0x0;
            }
            *(unsigned int *)(((*(int *)(((int)stk + 60))) + 0x0)) = (*(short *)(((int)stk + 28)));
            return 0x1;
        }
        return 0x0;
    }
    return 0x0;
}


int kmiProcessVertex_09(int a4, int a5, int a6, int a7)
{
    int stk[31];
    register int t5;
    register int t6;
    register int t13;
    register int t15;

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
        t15 = ((((int)stk + 4) + 0x20) + t5);
        t5 = (t5 + 0x1C);
        *(unsigned int *)((t15 + 0x14)) = (*(int *)((t13 + 0x10)));
        if ((unsigned int)t5 >= (unsigned int)0x54) {
            break;
        }
    }
    return (kmyRegisterBGPlane((((int)stk + 4) + 0x10)));
}





int mwSbGetExPrm(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    if (a5 == 0) {
        return mwlSbGetFx(a4, a6, a7, a7);
    }
    if (a5 == 1) {
        return mwlSbGetPitch(a4, a6, a7);
    }
    if (a5 == 2) {
        t0 = mwlSbGetGain(a4);
        *(unsigned int *)((a6 + 0x0)) = t0;
        *(unsigned int *)((a7 + 0x0)) = 0x0;
        return t0;
    }
    if (a5 == 3) {
        return mwlSbGetFilter(a4, a6, a7, a7);
    }
    if (a5 == 4) {
        t0 = mwlSbGetDrctLvl(a4);
        *(unsigned int *)((a6 + 0x0)) = t0;
        t1 = t0;
    } else {
        *(unsigned int *)((a6 + 0x0)) = 0x0;
        t1 = a5;
    }
    *(unsigned int *)((a7 + 0x0)) = 0x0;
    return t1;
}


void syCacheInit_P2_(int a4, int a5, int a6, int a7)
{
    int stk[4];

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned short *)(((int)stk + 8)) = (_builtin_get_imask());
    _builtin_set_imask(0xF);
    syCachePurgeAll(a4, a5, a6, a7);
    *(unsigned int *)0xFF00001C = (*(int *)(((int)stk + 4)));
    *(unsigned int *)0xFF00001C = (((*(int *)0xFF00001C) & 0xFFFFF7FF) | 0x800);
    *(unsigned int *)0xFF00001C = (((*(int *)0xFF00001C) & 0xFFFFFFF7) | 0x8);
    _builtin_set_imask(((unsigned int)((((*(short *)(((int)stk + 8))) & 0xF) << 2) << 2) >> 4));
}


int syTmrGenCountToMicro(int a4, int a5)
{
    register int t6;
    register int t4;
    register int t2;
    register int t0;

    t6 = 0x8;
    if ((unsigned short)a5 != 0) {
        t4 = 0x20;
        if ((unsigned short)a5 != 1) {
            t2 = 0x200;
            if ((unsigned short)a5 != 3) {
                t0 = 0x800;
                if ((unsigned short)a5 != 4) {
                    t0 = 0x80;
                }
                t2 = t0;
            }
            t4 = t2;
        }
        t6 = t4;
    }
    return ((((int)((unsigned int)a4 / (unsigned int)0x64)) * t6) + ((int)((unsigned int)(((int)((unsigned int)a4 % (unsigned int)0x64)) * t6) / (unsigned int)0x64)));
}


int mwAcTrns(int a4, int a5, int a6, int a7, int a8)
{
    register int t0;

    t0 = mwlSbTrnsDat(a4, a5, a6, a7, a8);
    if (a6 == 0) {
        return mwlSbTrnsEx(a4, a5, (((((int)((int)(*(int *)((a4 + 0x28))) / (int)(*(int *)((a4 + 0x10))))) << 2) << 1) + a6), a7);
    }
    return t0;
}





int FUN_0c2e1abc(int a4, int a5, int a6)
{
    register int t0;
    register int t1;

    t0 = kmyObFindDevice(a4, a5, a6);
    t1 = 0xEEEE;
    if (t0 == 0) {
        *(unsigned int *)((a5 + 0x0)) = a4;
        t0 = *(int *)((a4 + 0x4));
        *(unsigned int *)((a4 + 0x4)) = a5;
        *(unsigned int *)((a5 + 0x4)) = t0;
        *(unsigned int *)((a5 + 0x8)) = a6;
        if ((*(int *)((a5 + 0xC))) != 0) {
            t0 = ((int (*)(int))((*(int *)((a5 + 0xC)))))(a5);
        }
        t1 = 0x0;
    }
    return t1;
}


int ADXT_IsIbufSafety(int a4)
{
    register int t1;
    register int t4;

    if ((*(int *)((a4 + 0x14))) != 0) {
        t1 = *(int *)((a4 + 0x14));
        t4 = ((int (*)(int, int))((*(int *)(((*(int *)((t1 + 0x0))) + 0x24)))))(t1, 0x1);
        if ((int)t4 >= (int)((((*(short *)((a4 + 0x3E))) << 8) << 2) << 1)) {
            return 0x1;
        }
        return 0x0;
    }
    return 0x0;
}


int mwSbGetPan(int a4, int a5, int a6, int a7)
{
    *(unsigned int *)((((a5 << 2) + (a4 + 0x40)) + 0x0)) = (mwlSbGetStreamParam(a4, 0x6, a5, a7));
    return (*(int *)(((a5 << 2) + (a4 + 0x40))));
}


int syTmrCountToMicro(int a4)
{
    return (((((((int)((unsigned int)a4 / (unsigned int)0x64)) << 2) << 2) << 2) << 1) + ((int)((unsigned int)((((((int)((unsigned int)a4 % (unsigned int)0x64)) << 2) << 2) << 2) << 1) / (unsigned int)0x64)));
}


int nlFastScreenPoint(int a4, int a5)
{
    int stk[7];
    register float u1;

    nlCalcPoint4(a4, ((int)stk + 4));
    u1 = *(float *)(((int)stk + 16));
    *(float *)((a5 + 0x0)) = ((*(float *)(((int)stk + 4))) * (1.0f / u1));
    *(float *)((a5 + 0x4)) = ((*(float *)(((int)stk + 8))) * (1.0f / u1));
    *(float *)((a5 + 0x8)) = (1.0f / u1);
    return 0x8;
}


void ADXT_GetNumSctIbuf(int a4)
{
    register int t1;
    register int t4;

    if ((*(int *)((a4 + 0x14))) != 0) {
        t1 = *(int *)((a4 + 0x14));
        t4 = ((int (*)(int, int))((*(int *)(((*(int *)((t1 + 0x0))) + 0x24)))))(t1, 0x1);
        
    }
}
