/* Library code: C that behaves like this game's own bytes. */
typedef struct { int w[9]; } Stk9;
/* Straight-line functions with calls and guards (batch gen_v): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
typedef struct { int w[4]; } Stk4;
int ADXCRS_Lock(void);
int ADXCRS_Unlock(void);
int ADXRNA_SetPlaySw(int, int);
int ADXRNA_SetTransSw(int, int);
int ADXSJD_Stop(int);
int ADXSTM_Seek(int, int);
int ADXSTM_Start(int);
int ADXSTM_Stop(int);
int FUN_0c02d930(void);
int ADXT_SetOutVol(int, int);
int SJRBF_Lock(void);
int SJRBF_Unlock(int, int);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int _lsfts(int, int, int);
int _pow5(int, int);
int adxt_start_sj(int, int);
int buExit(void);
int buStat(int);
int fileLoadClose(void);
int fileLoadCloseSlot(int);
int kdSetHandler(int, int);
int kmCreateTextureSurface(int, int, int, int);
int kmLoadTexture(int, int);
int memmove(int, int, int);
int memset(int, int, int);
int mwRnaErrCallFunc(int, ...);
int mwRnaSetOutPan(int, int, int);
int nlExitSystem(void);
float nlLog10(float);
int nlPrintInitFontTexture(void);
float nlTan(int);
int nlsndG2DmaRequest(int, int, int, int);
int nlsndG2WriteN(int, int, int);
int nlsndSystemControl(int, int, int);
int pdExitPeripheral(void);
int set_event2(int, int);
extern int sprPutAt();
int sprPutAtAlpha(int, Stk3, float);
int sprPutCropV(int, int, Stk3, float, float, float);
int syBtExit(void);
int syCfgExit(void);
int syHwFinish(void);
int syRtcFinish(void);
int vmsfs_c_init(int);
int vmsfs_init(int, int, int);
int strmVoiceSetVol(int a4);
void motFileRequest(int a4, int a5);
float screenProject(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11);
int hudSignSprSet(int a4, int a5, int a6, int a7, Stk4 p);
int hudBarDrawAlt(Stk4 s, float f4, float f5);
int hudBannerInit(void);
int hudBarDraw(Stk4 s, float f4, float f5);
int entryGridMove(int a4, int a5);
float nlSprPutPosSet(int a4, int a5, int a6, float f4, float f5, float f6, float f7, float f8, float f9, float f10);
int nlsndStreamSetHdInfo(int a4, int a5);
int mwlSbTrnsDat(int a4, int a5, int a6, int a7, int a8);
int sprInitRectF(int a4, int a5, int a6, int a7, int a8, int a9);
int logoBDraw(int a4, int a5, int a6, int a7, Stk4 p);
int panelLogoInit(int a4, int a5, int a6, int a7, Stk4 p);
int panelWidePut(Stk4 p, float f4);
int sprSet192Setup(void);
int buInit(int a4, int a5, int a6, int a7);
int mainExitToBios(void);
int cpuStickNudge(int a4);
int hudBannerPut(Stk4 p, float f4);
int adxt_RcvrReplay(int a4);
int syIntAdrChk_putchar(int a4, int a5);
int hudFramePutNarrow(Stk4 p, float f4);
int panelPartAPut(Stk4 p, float f4);
int ADXSTMF_Create(int a4, int a5, int a6, int a7);
int mwRnaSetNumChan(int a4, int a5);
int SJRBF_IsGetChunk(int a4, int a5, int a6, int a7);
int markerShowStart(int a4, int a5, int a6, int a7, Stk9 p);
int stageSelFramePut(int a4, int a5, int a6, int a7, Stk4 p);
int nlInitPrint(void);
int _pow10(int a4, int a5, int a6);




int adxt_RcvrReplay(int a4)
{
    int t10;
    int t13;
    int t18;
    int t24;
    int t17;

    ADXCRS_Lock();
    ADXRNA_SetTransSw((*(int *)((a4 + 0xC))), 0x0);
    ADXRNA_SetPlaySw((*(int *)((a4 + 0xC))), 0x0);
    ADXSJD_Stop((*(int *)((a4 + 0x4))));
    if ((*(int *)((a4 + 0x8))) != 0) {
        ADXSTM_Stop((*(int *)((a4 + 0x8))));
        t10 = *(int *)((a4 + 0x14));
        t13 = ((int (*)(int))((*(int *)(((*(int *)((t10 + 0x0))) + 0x14)))))(t10);
    }
    t18 = 0x0;
    for (;;) {
        if ((int)t18 >= (int)(*(signed char *)((a4 + 0x3)))) {
            break;
        }
        t17 = t18;
        t17 = (t17 << 2);
        t17 = (t17 + (a4 + 0x18));
        t17 = (*(int *)((t17 + 0x0)));
        t24 = ((int (*)(int))((*(int *)(((*(int *)((t17 + 0x0))) + 0x14)))))(t17);
        t18 = (t18 + 0x1);
    }
    if ((*(int *)((a4 + 0x8))) != 0) {
        ADXSTM_Seek((*(int *)((a4 + 0x8))), 0x0);
        ADXSTM_Start((*(int *)((a4 + 0x8))));
    }
    adxt_start_sj(a4, (*(int *)((a4 + 0x14))));
    return ADXCRS_Unlock();
}
