/* Library code: C that behaves like this game's own bytes. */
typedef struct { int w[6]; } Stk6;
/* Straight-line functions with calls and guards (batch gen_e): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int ADXB_CheckAu(int);
int ADXB_CheckSpsd(void);
int ADXB_CheckWav(int);
int ADXB_Create(int, int, int, int);
int ADXB_DecodeHeaderAdx(int, int, int);
int ADXB_DecodeHeaderAiff(int, int, int);
int ADXB_DecodeHeaderAu(int, int, int);
int ADXB_DecodeHeaderSpsd(int, int, int);
int ADXB_DecodeHeaderWav(int, int, int);
int ADXB_Destroy(int);
int ADXB_EntryGetWrFunc(int, int, int);
int ADXB_ExecOneAdx(int);
int ADXB_ExecOneAiff(int);
int ADXB_ExecOneAu(int);
int ADXB_ExecOneSpsd(int);
int ADXB_ExecOneWav(int);
int ADXCRS_Lock(void);
int ADXCRS_Unlock(void);
int ADXERR_CallErrFunc(void);
int ADXF_Close(int);
int ADXF_ExecServer(void);
int ADXF_GetFsizeSct(int);
int ADXF_GetStat(int);
int ADXF_Open(int, int);
int ADXF_ReadNw32(int, int, int);
int ADXF_Stop(int);
int ADXPD_Create(void);
int ADXRNA_ExecServer(void);
int ADXSJD_ExecHndl(int);
int ADXSJD_ExecServer(void);
int ADXSTM_ExecServer(void);
int ADXT_GetStat(int);
int ADX_DecodeMonoFloat(int, int, int, int, int, int);
int ADX_DecodeSteFloat(int, int, int, int, int, int, int, int);
int ADX_GetCoefficient(int, int, int, int);
int nlAddVector3op(int, int, int);
int gdFsLockDir(int);
int gdFsToUpper(int);
int syTmrGetCount(void);
int fmMngMcpy4(int, int, int);
int fmMngNum2Bit(int, int, int);
int mainSoftReset(int);
int mainExitToBios(void);
int nlMalloc2(int);
int nlInitEvent(void);
int set_event2(int, int);
int nlCloseEvent2(int);
int shadowVolPutDir(void);
int dbgMenuSetTitle(int, int, int);
int dbgMenuSetItem(int, int, int, int, int, int, int);
int motionBackup(void);
int motionSetFrame(int, float);
int vecMake(float, float, float);
float vecDist(Stk3, Stk3);
int mtxGetPos(int, int, int);
int vecAnglesTo(int, int, Stk6);
int camInit(void);
int sprCellInit(int, int);
int serveGetServer(void);
int fadeDraw(void);
int padVibExec(void);
int padLcdSetMode(int);
int padLcdMessage(int);
int padLcdDraw(int);
int padLcdUpdate(void);
int padVmsBeep(int, int);
int padRepeatExec(void);
int gameMatchSetup(void);
int miniReset(void);
int miniTargetInit(int, int);
int miniSetModel(int, int);
int zoneListClear(void);
int cpuSglInit(void);
int cpuSglInput(void);
int cpuSglThink(int);
int cpuDblInit(void);
int cpuDblInput(void);
int cpuInTriangle(void);
int ndbClear(void);
int ndbIsValid(void);
int umpCallGamePoint(void);
int umpCallAdvantage(void);
int umpCallFirstServe(void);
int umpCallFirstServeDelayed(int);
int umpCallSecondServeDelayed(int);
int fadeScreenStart(int, int, int);
int resultFlagsClear(void);
int ambLevelReset(void);
int matchPropStart(void);
int crowdSetup(void);
int sprTexLoad(int);
int sprTexFree(int);
int sprInitRectF(int, int, int, int, int, int);
int sprInitRect(int, int, int, int, int, int, int);
int sprPutAt(int);
int sprPutAtAlpha(int);
int sprPutCropH(int, int, int);
int panelLogoInit(int, int);
int bgSprInitRect(int, int);
int hudNumPut(int, float);
int hudScoreIconPut(float);
int hudFontSprSet(int, int);
int hudFont2SprSet(int, int);
int hudSignSprSet(int, int);
int infoPlayerDraw(void);
int selModelSpawn(int, int);
int entryPortAtRound5Clean(int);
int entryIsVersus(void);
int entryCountJoined(void);
int stageTexFree(void);
int stageCrowdTexLoad(void);
int stageLoadSelectSprites(void);
int endingTexFree(void);
int stageWtcMainTexFree(void);
int stageMinigameTexLoad(void);
int stageMinigameTexFree(void);
int stageExtraTexFree(void);
int crowdInit(void);
int fileLoadSync(int, int, int);
int stagePolyLoad(void);
int stageTexFileLoad(void);
int kyakuPolyLoad(void);
int minigamePolyLoad(void);
int minigameTexFileLoad(void);
int minigameSpriteLoad(void);
int gameSpriteLoad(void);
int courtPropsInit(void);
int matchSceneInit(void);
int primSprDraw(int, int, int, int, Stk3);
int emotKeysSort(int);
int emotFaceReset(int);
int sprMatchInit(void);
int sprCommonInit(void);
int sprAdvInit(void);
int sprSet266InitThunk(void);
int sprSet109Init(void);
int sprStartInit(void);
int sprStartFree(void);
int sprSet109Free(void);
int sprAdvFree(void);
int sprMatchLoad(void);
int sprMatchFree(void);
int sprSet115Free(void);
int sprWtcFree(void);
int sprSet266Load(void);
int sprSet266Free(void);
int sprSet163Free(int);
int sprSet163FreeAll(void);
int sprSet173Free(int);
int sprSet173FreeAll(void);
int sprTexRestore(int);
int sprSet280Free(int);
int sprSet280FreeAll(void);
int sprSet322Free(int);
int sprSet322FreeAll(void);
int sprSet330Free(void);
int sprSet331Free(void);
int sprSet192Setup(void);
int sprSet192Free(void);
int charaModelCount(int);
int charaTexFree(int);
int charaTexFreeAll(void);
int uniformLoadBegin(void);
int uniformLoadStep(void);
int uniformPreviewFree(void);
int commonSprInit(int, int);
int commonSprInitAll(void);
int menuSprInit(int, int, int);
int lineJudgeDraw(void);
int lineJudgeUpdate(void);
int netJudgePose(int);
int netJudgeUpdate(int);
int netJudgeDraw(void);
int staffShadowFlat(void);
int staffShadowMulti(int);
int staffMorphInit(void);
int lineJudgeShadowPart(int);
int lightSet(int, int, int, int);
int staffMorphCapture(int, int);
int gameModeSet(int, int, int);
int frameHookNop(void);
int hudPanelDraw(int, int, float);
int msgWinStep(void);
int sndFxReset(void);
int sndStopAll(void);
int sndStagePackLoad(int);
int sndPack1FadeCancel(void);
int sndSe0B_02(void);
int sndSe0B_00(void);
int sndSe0B_01(void);
int endingSprAnimStep(int, int, int);
int endingCharaTexFree(int);
int endingCharaTexFreeAll(void);
int endSprCharaTexFree(int);
int endSprCharaTexFreeAll(void);
int endSprTexFree(void);
int strmVoiceQueueAdd(int);
int strmVoiceQueueClear(void);
int strmVoicePlay(int, int);
int strmBgmPlay(int);
int strmControl(int, int);
int strmCallPair(int);
int strmCallPlayerOnce(void);
int strmScoreReset(void);
int evPackFade(int, int, int);
int sprListPut(int, int, int, Stk3, float, float, float);
int eepromGetDeuce(void);
int eepromGetVsDeuce(void);
int BupRequestLoad(int, int, int, int);
int BupCardWarning(void);
int rankSprTexFree(void);
int titleSprTexLoad(void);
int titleSprTexFree(void);
int resWtcShopPolyRead(void);
int resWtcShopTexRead(void);
int resWtcShopSprRead(void);
int resFukuPolyRead(void);
int resWtcShopObjTexLoad(void);
int resWtcShopObjTexFree(void);
int resEndObjTexFree(void);
int resWtcShopSprTexLoad(void);
int resWtcShopSprTexFree(void);
int resSprTitleRead(void);
int resTitleObjTexLoad(void);
int resTitleObjTexFree(void);
int resTitleSprTexLoad(void);
int resTitleSprTexFree(void);
int resTitlePolyRead(void);
int resTitleSprRead(void);
int resCautionReset(int);
int resCautionTexFree(int);
int resCautionFreeAll(void);
int cacheOcbiRange(int, int);
int nlSetCommonTextureOffset(int);
int nlWaitVSync(void);
int nlInitMatrixStack(int, int, int);
int nlMultiMatrixRevOrder8(int);
int nlObjPutSetGarbagedTexture(void);
int nlObjPutFreeTextureOnce(void);
int nlSpriteLoadTextureOnce(void);
int nlDispStrip(int);
int nlDispStripTrnsl(int);
int _quick_mvn(void);
int kmyMemCopy(int, int, int);
int kmtex_ConvertSmallVQToMem(int, int, int, int);
int syTmrDiffCount(int, int);
int ADXSJD_GetSfreq(int);
int ADXSJD_GetNumChan(int);
int ADXSJD_GetTotalNumSmpl(int);
int ADXT_ExecHndl(int);
int kmyGetInterruptLevel(void);
int kmiRegisterPhIntHandler(int);
int kmyiCheckTAHandle(void);
int kmtex_TextureSize_Twiddled(int);
int kmtex_TextureSize_VQ(int);
int kmtex_TextureSize_Palettized(int);
int kmtex_TextureSize_smallVQ(int);
int kmyiCheckRenderPacket(int);
int syBtFlWrite(void);
int adxb_DecodeInfoAiffSub(int, int, int, int, int);
int ADXB_CheckAiff(int);
int syIntAdrChk_putchar(int);
int SJMEM_Reset(int);
int SJRBF_GetBufPtr(int);
int SJRBF_GetBufSize(int);
int SJRBF_GetXtrSize(int);
int SJRBF_Reset(int);
int SJUNI_Reset(int);
int adxf_ExecOne(int);
int adxf_SetCmdHstry(int, int, int, int, int);
int adxpd_error(void);
int adxsjd_clear(int);
int adxstmf_stat_exec(int);
int buAnalyzeBackupFileImage(int, int);
int buExitForce(void);
int buGetDiskInfo(int, int);
int buGetFileSize(int, int);
int buGetLastError(int);
int buLoadFile(int, int, int, int);
int buStat(int);
int colliObjEntry(int);
int fileLoadStart(int);
int fmcalccrc(int, int);
int gdFsGetDirEnt(int, int, int, int);
int gdFsGetDrvStat(void);
int gdFsReqDrvStat(void);
int gdFsSearchName(int, int, int);
int gdFsSearchPath(int, int, int, int);
int gdFsSearchPath_dds(int, int, int, int, int);
int gdFsStopRd(int);
int get_data(int);
int kdGetDeviceInfo(void);
int kmBlankScreen(int);
int kmProcessVertexRenderState(void);
int kmSetBackGroundRenderState(int);
int kmSetVertexRenderState(int, int);
int kmWaitVBlank(void);
int kmiFLWCTRLCheckFreeNBuf(void);
int kmiFLWCTRLEORCallBackFunc(void);
int kmiFLWCTRLFindTopQueue(void);
int kmiFLWCTRLLaunchPacket(int, int, int, int);
int kmiFLWCTRLRotateReadyQueue(void);
int kmiInitFBControl(void);
int kmiQueryFinishAllPacket(void);
int kmiReadRegister(int);
int kmiWriteRegister(int, int);
int kmtex_GetTextureLevel(int, int);
int kmyCopyToTexture(int, int, int, int);
int kmyCreateRegionArray(void);
int kmyFreeArea(int);
int kmyGetDMAValue(int);
int kmyGetNativeBufferStatus(int);
int kmyGetRenderPacket(int, int);
int kmyMoveParameterBoundary(int, int, int);
int kmyRegisterBGPlane(int);
int kmyRequestCallback(int);
int kmyResetRenderer(void);
int kmyResetTA(void);
int kmySetBorderColor(int);
int kmySetDisplayFrameBuffer(int, int);
int kmyWriteFogTable(void);
int kmyiCheckNativeHandle(int);
int kmyiInitializeNativeBuffer(int, int, int, int);
int make_header(int, int);
int memcpy2(int, int, int);
int memmove(int, int, int);
int memset(int, int, int);
int motionAdvanceSimple(int);
int motionRoot(int);
int motionRoot2(int);
int motionRotate(int);
int motionRotate2(int);
int motionSwitch(int, int, int, int, float);
int mpdrv_clear_deviceinfo(int);
int mpdrv_make_deviceinfo(int, int, int);
int mpdrv_swaplong(int, int);
int nlAddVector(int, int);
int nlArcTan2(float, float);
int nlCalcPoint(int, int);
float nlFloor(float);
int nlGetMatrix(int);
int nlInvLightVector(void);
int nlLoadMatrix(int);
int nlLocate(int, int);
int nlMultiMatrix(int);
int nlObjPut(int);
int nlObjPutLoadTexture(int, int);
int nlObjPutMvInit(void);
int nlObjPutSetVtxColorMode(int);
int nlOuterProduct(int, int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlPushUnitMatrix(void);
int nlQuickInvertMatrix(void);
int nlRand(void);
int nlRenderTextureBegin(int);
int nlRenderTextureFree(int);
int nlRotateAY(int);
int nlScale(float, float, float);
int nlScaleUnitVector(int, int, float);
int nlScaleVector(int, int, float);
int nlSetTextureParameter(int);
int nlSpriteFreeTextureOnce(void);
int nlSpriteSetGarbagedTextureOnce(int, int);
int nlSubVector(int, int);
int nlTranslate(float, float, float);
int nldispstripTexOfsSub(int, int);
int nldispstripTexSub(int, int);
int nlobjput_sub_trnsl(int);
int nlsndG2Read(int);
int nlsndPackFree(void);
int nlsndPackLoad(int, int);
int nlsndSeqRequest(int);
int nlsndStreamSetHdBitSize(int, int);
int nlsndStreamSetHdOctFns(int, int, int);
int nlsndSystemControl(int, int, int);
int nlstripSetVertexContextTex(int, int);
int ovLibDeleteTbl(int);
int ovLibEntryTbl(int);
int padDirOn(int, int);
int pdVmsLcdWrite1(int, int);
int set_event(int, int);
int stageTexLoad(void);
int memcmp(int, int, int);
int syBtCfgSet(int);
int syChainAddHandler(int, int, int, int);
int syG2DmaResume(int);
int syG2DmaSuspend(int);
int syMmuDeleteEntry(int);
int thunk_selCopyLocalConstants(void);
int thunk_nlObjPutMvInit(int);
int thunk_nlSprPut(int);
int thunk_buIsExistFile(void);
int thunk_copyBytes(void);
int vmsfs_c_getstate(int);



int nlsndG2Write(int a4, int a5)
{
    int t0;

    do {
        t0 = *(int *)0xA05F688C;
    } while ((t0 & 0x31) != 0);
    *(unsigned int *)((a5 + 0x0)) = a4;
    return 0x0;
}





int ADXF_Seek(int a4, int a5, int a6)
{
    int t2;
    int t5;
    int t6;
    int t7;
    int t8;
    int t13;
    int t14;
    int t15;
    int t16;
    int t17;
    int t18;
    int t23;
    int t24;
    int t25;
    int t26;
    int t27;
    int t28;
    int t34;
    int t39;
    int t38;
    int t37;
    int t36;

    adxf_SetCmdHstry(0x6, 0x0, a4, a5, a6);
    if (a4 == 0) {
        ADXERR_CallErrFunc();
        t39 = 0xFFFFFFFD;
    } else {
        t2 = *(signed char *)((a4 + 0x1));
        if (t2 == 2) {
            ADXF_Stop(a4);
        }
        if (a6 == 0) {
            *(unsigned int *)((a4 + 0x18)) = a5;
            t5 = *(int *)((a4 + 0x18));
            if ((int)t5 < 0) {
                *(unsigned int *)((a4 + 0x18)) = 0x0;
            } else {
                t6 = *(int *)((a4 + 0x18));
                t7 = *(int *)((a4 + 0x10));
                if ((int)t6 > (int)t7) {
                    t8 = *(int *)((a4 + 0x10));
                    *(unsigned int *)((a4 + 0x18)) = t8;
                }
            }
            adxf_SetCmdHstry(0x6, 0x1, a4, a5, a6);
            t13 = *(int *)((a4 + 0x18));
            t38 = t13;
        } else {
            if (a6 == 1) {
                t14 = *(int *)((a4 + 0x18));
                *(unsigned int *)((a4 + 0x18)) = (t14 + a5);
                t15 = *(int *)((a4 + 0x18));
                if ((int)t15 < 0) {
                    *(unsigned int *)((a4 + 0x18)) = 0x0;
                } else {
                    t16 = *(int *)((a4 + 0x18));
                    t17 = *(int *)((a4 + 0x10));
                    if ((int)t16 > (int)t17) {
                        t18 = *(int *)((a4 + 0x10));
                        *(unsigned int *)((a4 + 0x18)) = t18;
                    }
                }
                adxf_SetCmdHstry(0x6, 0x1, a4, a5, a6);
                t23 = *(int *)((a4 + 0x18));
                t37 = t23;
            } else {
                if (a6 == 2) {
                    t24 = *(int *)((a4 + 0x10));
                    *(unsigned int *)((a4 + 0x18)) = (t24 + a5);
                    t25 = *(int *)((a4 + 0x18));
                    if ((int)t25 < 0) {
                        *(unsigned int *)((a4 + 0x18)) = 0x0;
                    } else {
                        t26 = *(int *)((a4 + 0x18));
                        t27 = *(int *)((a4 + 0x10));
                        if ((int)t26 > (int)t27) {
                            t28 = *(int *)((a4 + 0x10));
                            *(unsigned int *)((a4 + 0x18)) = t28;
                        }
                    }
                    adxf_SetCmdHstry(0x6, 0x1, a4, a5, a6);
                    t34 = *(int *)((a4 + 0x18));
                    t36 = t34;
                } else {
                    ADXERR_CallErrFunc();
                    t36 = 0xFFFFFFFD;
                }
                t37 = t36;
            }
            t38 = t37;
        }
        t39 = t38;
    }
    return t39;
}








int ADXSTMF_ExecHndl(int a4)
{
    int t0;

    t0 = *(signed char *)((a4 + 0x1));
    if (t0 == 2) {
        return adxstmf_stat_exec(a4);
    }
    return t0;
}


int kmyEnableHolizontalScaler(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t3;

    t0 = kmyiCheckNativeHandle(a4);
    if (t0 == 0) {
        return 0xEEEE;
    }
    t1 = *(int *)((a4 + 0x88));
    if (a5 != 0) {
        t2 = *(int *)((t1 + 0x24));
        *(unsigned int *)((t1 + 0x24)) = (t2 | 0x10000);
    } else {
        t3 = *(int *)((t1 + 0x24));
        *(unsigned int *)((t1 + 0x24)) = (t3 & 0xFFFEFFFF);
    }
    return 0x0;
}





int kmyGetDisplayRegionSize(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;

    if (a7 != 0) {
        t0 = 0x14;
        if ((0x10 & a4) != 0) {
            t0 = 0x28;
        }
        t3 = 0xF;
        t4 = t0;
    } else {
        t1 = 0xA;
        if ((0x10 & a4) != 0) {
            t1 = 0x14;
        }
        t2 = 0x8;
        if ((a4 & 0x20) != 0) {
            t2 = 0xF;
        }
        t3 = t2;
        t4 = t1;
    }
    if (a5 != 0) {
        *(unsigned int *)((a5 + 0x0)) = t4;
    }
    if (a6 != 0) {
        *(unsigned int *)((a6 + 0x0)) = t3;
    }
    return 0x0;
}


void kmyiUnloadCallback(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;

    t0 = *(int *)((a4 + 0x8));
    t1 = 0x0;
    do {
        t2 = *(int *)((t0 + 0x4));
        *(unsigned int *)((((t0 + 0x8) + t1) + 0x0)) = t2;
        t3 = ((t0 + 0x8) + t1);
        t1 = (t1 + 0x8);
        *(unsigned int *)((t3 + 0x4)) = 0x0;
    } while ((unsigned int)t1 < (unsigned int)0x80);
}


int kmySeparatePassInfo(int a4, int a5, int a6, int a7, int a8, int a9)
{
    *(unsigned int *)((a5 + 0x0)) = (a4 & 0x3);
    *(unsigned int *)((a6 + 0x0)) = (((unsigned int)((unsigned int)a4 >> 2) >> 2) & 0x3);
    *(unsigned int *)((a7 + 0x0)) = (((unsigned int)a4 >> 8) & 0x3);
    *(unsigned int *)((a8 + 0x0)) = (((unsigned int)((unsigned int)((unsigned int)a4 >> 8) >> 2) >> 2) & 0x3);
    *(unsigned int *)((a9 + 0x0)) = (((unsigned int)a4 >> 16) & 0x3);
    return 0x0;
}


void kmyiInitializePVR2Hardware(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0x8));
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x18)) = 0x0;
        *(unsigned int *)((t0 + 0x14)) = 0x0;
    }
}





void kmytex_FBDeQueueEntry(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t5;
    int t6;
    int t7;

    t0 = *(int *)((a6 + 0x4));
    t1 = *(int *)((a6 + 0x8));
    if (t0 == 0) {
        t2 = *(int *)((a6 + 0x8));
        *(unsigned int *)((a4 + 0x0)) = t2;
    } else {
        t3 = *(int *)((a6 + 0x8));
        *(unsigned int *)((t0 + 0x8)) = t3;
    }
    t5 = *(int *)((a6 + 0x8));
    if (t5 == 0) {
        t6 = *(int *)((a6 + 0x4));
        *(unsigned int *)((a5 + 0x0)) = t6;
    } else {
        t7 = *(int *)((a6 + 0x4));
        *(unsigned int *)((t1 + 0x4)) = t7;
    }
}






int kmtex_TextureSize(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t10;
    int t11;
    int t8;
    int t9;
    int t7;

    t0 = *(int *)((a4 + 0x0));
    if ((unsigned short)t0 == 3) {
        t1 = kmtex_TextureSize_smallVQ(a4);
        t10 = t1;
        t11 = t1;
    } else {
        t2 = *(int *)((a4 + 0x18));
        if ((t2 & 0x40000000) != 0) {
            t3 = kmtex_TextureSize_VQ(a4);
            t8 = t3;
            t9 = t3;
        } else {
            t4 = *(int *)((a4 + 0x18));
            if ((t4 & 0x8000) != 0) {
                t5 = kmtex_TextureSize_Palettized(a4);
                t7 = t5;
            } else {
                t6 = kmtex_TextureSize_Twiddled(a4);
                t7 = t6;
            }
            t8 = t7;
            t9 = t7;
        }
        t10 = t8;
        t11 = t9;
    }
    *(unsigned int *)((a4 + 0x14)) = t11;
    return t10;
}



int ADXB_CopyExtraBufSte(int a4, int a5, int a6, int a7)
{
    memcpy2(a4, ((a5 << 1) + a4), a7);
    return memcpy2(((a6 << 1) + a4), (((a5 + a6) << 1) + a4), a7);
}


int ADXB_ExecHndl(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;

    t0 = *(short *)((a4 + 0xA8));
    if (t0 != 0) {
        t1 = *(short *)((a4 + 0xA8));
        if (t1 == 2) {
            return ADXB_ExecOneSpsd(a4);
        }
        t2 = *(short *)((a4 + 0xA8));
        if (t2 == 3) {
            return ADXB_ExecOneAiff(a4);
        }
        t3 = *(short *)((a4 + 0xA8));
        if (t3 == 4) {
            return ADXB_ExecOneAu(a4);
        }
        t4 = *(short *)((a4 + 0xA8));
        if (t4 == 1) {
            return ADXB_ExecOneWav(a4);
        }
        return t4;
    }
    return ADXB_ExecOneAdx(a4);
}


int mwSbSetBitPerSmpl(int a4, int a5)
{
    int t0;
    int t1;
    int t2;

    t0 = *(int *)((a4 + 0x1C));
    t1 = *(int *)((t0 + 0x4));
    t2 = nlsndStreamSetHdBitSize(t1, a5);
    *(unsigned int *)((a4 + 0x10)) = a5;
    return t2;
}


int kmyContinueTA(int a4)
{
    int t0;
    int t1;
    int t2;
    int t4;

    t0 = kmyiCheckNativeHandle(a4);
    if (t0 == 0) {
        return 0xEEEE;
    }
    t1 = *(int *)((a4 + 0x10));
    *(unsigned int *)((a4 + 0x10)) = (t1 + 0x1);
    t2 = *(int *)((((((t1 + 0x1) << 2) << 1) + ((a4 + 0x18) + 0x30)) + 0x0));
    kmiWriteRegister(0x140, t2);
    t4 = *(int *)(((((a4 + 0x18) + 0x30) + (((t1 + 0x1) << 2) << 1)) + 0x4));
    kmiWriteRegister(0x124, t4);
    kmiWriteRegister(0x160, 0x80000000);
    return kmiReadRegister(0x144);
}


int kmyGeneratePassInfo(int a4, int a5, int a6, int a7, int a8, int a9)
{
    *(unsigned int *)((a4 + 0x0)) = (0x100000 | (((((((a6 & 0x3) << 2) << 2) | ((a7 & 0x3) << 8)) | ((((a8 & 0x3) << 8) << 2) << 2)) | ((a9 & 0x3) << 16)) | (a5 & 0x3)));
    return 0x0;
}


int kmySetSkipCount(int a4, int a5)
{
    int t0;
    int t7;
    int t3;
    int t1;
    int t2;
    int t5;
    int t6;

    t0 = kmyiCheckNativeHandle(a4);
    t7 = 0xEEEE;
    if (t0 != 0) {
        t3 = 0x1;
        if ((0x2000000 & a5) != 0) {
            t1 = 0x2;
            if ((0x1000000 & a5) != 0) {
                t1 = 0x3;
            }
            t2 = t1;
            if ((a5 & 0x400000) == 0) {
                t2 = (t1 + 0x1);
            }
            t3 = t2;
        }
        t5 = *(int *)((a4 + 0x88));
        t6 = *(int *)((t5 + 0x8));
        *(unsigned int *)((t5 + 0x8)) = ((t6 & 0xFFFFFF) | (((t3 & 0x7) << 16) << 8));
        t7 = 0x0;
    }
    return t7;
}


int kmyObFindDevice(int a4, int a5, int a6)
{
    int t0;
    int t6;
    int t1;
    int t2;
    int t3;
    int t4;

    t0 = *(int *)((a4 + 0x4));
    t6 = 0x0;
    if (t0 != 0) {
        t1 = t0;
        t2 = 0x0;
        do {
            if (t1 == a5) {
                if (t1 != 0) {
                    t3 = *(int *)((t1 + 0x8));
                    if (t3 == a6) {
                        t2 = 0x1;
                    }
                }
            }
            t4 = *(int *)((t1 + 0x4));
            t1 = t4;
        } while (t1 != 0);
        t6 = t2;
    }
    return t6;
}





int kmyGetRenderPacket(int a4, int a5)
{
    int t5;
    int t0;
    int t1;
    int t3;
    int t4;

    t5 = 0xEEEE;
    if (a4 != 0) {
        t0 = 0x0;
        for (;;) {
            t1 = *(int *)((a4 + 0x248));
            if (((((int)t0 >= 0) ? (0x1 << (t0 & 31)) : ((-(int)t0 & 31) ? ((int)0x1 >> (-(int)t0 & 31)) : ((int)0x1 >> 31))) & t1) == 0) break;
            t0 = (t0 + 0x1);
            if ((int)t0 >= (int)0x8) {
                return 0x0;
            }
        }
        t3 = *(int *)((a4 + 0x248));
        *(unsigned int *)((a4 + 0x248)) = (t3 | (((int)t0 >= 0) ? (0x1 << (t0 & 31)) : ((-(int)t0 & 31) ? ((int)0x1 >> (-(int)t0 & 31)) : ((int)0x1 >> 31))));
        *(unsigned int *)((((0x254 + a4) + (t0 * 0x2C)) + 0x0)) = t0;
        t4 = *(int *)((a4 + 0x24C));
        *(unsigned int *)((a4 + 0x24C)) = (t4 + 0x1);
        *(unsigned int *)((a5 + 0x0)) = ((t0 * 0x2C) + (0x254 + a4));
        t5 = 0x0;
    }
    return t5;
}


int kmySetRegionArrayCallback(int a4, int a5)
{
    int t0;

    t0 = kmyiCheckNativeHandle(a4);
    if (t0 != 0) {
        if (a5 == 0) {
            return 0xEEEE;
        }
        *(unsigned int *)((a4 + 0x14)) = a5;
        return 0x0;
    }
    return 0xEEEE;
}


int kmySetStrideWidth(int a4)
{
    kmiWriteRegister(0xE4, ((int)(0x3E0 & a4) >> 5));
    return 0x0;
}


int kmySetPixelClippingX(int a4, int a5, int a6)
{
    int t0;
    int t1;

    t0 = kmyiCheckNativeHandle(a4);
    if (t0 == 0) {
        return 0xEEEE;
    }
    t1 = *(int *)((a4 + 0x88));
    *(unsigned int *)((t1 + 0x14)) = (((a6 & 0x7FF) << 16) | (a5 & 0x7FF));
    return 0x0;
}


int kmySetPixelClippingY(int a4, int a5, int a6)
{
    int t0;
    int t1;

    t0 = kmyiCheckNativeHandle(a4);
    if (t0 == 0) {
        return 0xEEEE;
    }
    t1 = *(int *)((a4 + 0x88));
    *(unsigned int *)((t1 + 0x18)) = (((a6 & 0x7FF) << 16) | (a5 & 0x7FF));
    return 0x0;
}





int kmyCopyPaletteData(int a4, int a5, int a6)
{
    int t10;
    int t9;
    int t8;
    int t0;
    int t1;
    int t2;
    int t3;

    t10 = 0x12;
    if ((int)a6 > 0) {
        t9 = 0x12;
        if ((int)(a4 + a6) <= (int)0x400) {
            t8 = 0x12;
            if ((int)a4 >= 0) {
                if ((int)a6 > 0) {
                    t0 = 0x0;
                    t1 = (0x0 + a5);
                    t2 = ((a4 << 2) + 0x1000);
                    do {
                        t3 = *(int *)((t1 + 0x0));
                        t1 = (t1 + 0x4);
                        kmiWriteRegister(t2, t3);
                        t0 = (t0 + 0x1);
                        t2 = (t2 + 0x4);
                    } while ((int)t0 < (int)a6);
                }
                t8 = 0x0;
            }
            t9 = t8;
        }
        t10 = t9;
    }
    return t10;
}


void kmySetRenderBpp(int a4, int a5)
{
    int t0;
    int t1;
    int t7;
    int t6;
    int t5;
    int t4;
    int t3;
    int t2;
    int t8;

    t0 = kmyiCheckNativeHandle(a4);
    if (t0 == 0) {
        return;
    }
    t1 = *(int *)((a4 + 0x88));
    t7 = 0x3;
    if (a5 != 3) {
        t6 = 0x1;
        if (a5 != 0) {
            t5 = 0x0;
            if (a5 != 1) {
                t4 = 0x2;
                if (a5 != 2) {
                    t3 = 0x4;
                    if (a5 != 4) {
                        t2 = 0x6;
                        if (a5 != 5) {
                            t2 = 0x1;
                        }
                        t3 = t2;
                    }
                    t4 = t3;
                }
                t5 = t4;
            }
            t6 = t5;
        }
        t7 = t6;
    }
    t8 = *(int *)((t1 + 0x4));
    *(unsigned int *)((t1 + 0x4)) = ((t8 & 0xFFFFFFF8) | (t7 & 0x7));
}


int kmResetRenderer(void)
{
    int t0;

    do {
        t0 = kmiQueryFinishAllPacket();
    } while (t0 != 0);
    kmyResetRenderer();
    kmyResetTA();
    return 0x0;
}


int syIntAdrChk_printh(int a4)
{
    int t0;
    int t1;
    int t2;

    t0 = 0x1C;
    do {
        t1 = ((0xF & (((int)(-t0) >= 0) ? (a4 << ((-t0) & 31)) : ((-(int)(-t0) & 31) ? ((unsigned int)a4 >> (-(int)(-t0) & 31)) : 0))) + 0x30);
        if ((int)(unsigned char)(0xF & (((int)(-t0) >= 0) ? (a4 << ((-t0) & 31)) : ((-(int)(-t0) & 31) ? ((unsigned int)a4 >> (-(int)(-t0) & 31)) : 0))) >= (int)0xA) {
            t1 = ((0xF & (((int)(-t0) >= 0) ? (a4 << ((-t0) & 31)) : ((-(int)(-t0) & 31) ? ((unsigned int)a4 >> (-(int)(-t0) & 31)) : 0))) + 0x37);
        }
        t2 = syIntAdrChk_putchar(t1);
        t0 = (t0 - 4);
    } while ((int)t0 >= 0);
    return t2;
}
