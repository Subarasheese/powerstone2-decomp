/* Library code: C that behaves like this game's own bytes. */
/* Straight-line functions with calls and guards (batch gen_p): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXPD_EntrySte(int, int, int, int);
int ADXPD_Start(int);
int nlAddVector3op(int, int, int);
int set_event2(int, int);
int vecMake(float, float, float);
int padLcdLine(int, int, int, int);
int padLcdProject(int, int);
int sprTexLoad(int);
int sprSet163Setup(int);
int sprSet173Setup(int);
int strmVoicePlay(int, int);
int sprListPut(int, int, int, float, float, float);
int syCachePurgeAll(void);
int SJMEM_Lock(void);
int SJMEM_Unlock(int, int);
extern float _builtin_fipr(float *, float *);
extern void _builtin_ftrv(float *, float *);
extern int _builtin_get_imask(void);
extern void _builtin_ld_ext(float (*)[4]);
extern void _builtin_set_imask(int);
extern float _builtin_sqrtf(float);
extern void _builtin_st_ext(float (*)[4]);
int fileLoadCloseSlot(int);
int fileLoadPollSlot(int);
int fileLoadStartSlot(int, int, int, int);
int kmyiInitializeDriverObject(int, int);
int memset(int, int, int);
int mwlRnaExecSvrHndl(int);
int nlArcTan(float);
int nlCalcPoint(int, int);
int nlLength(int, int);
int nlLoadMatrix(int);
int nlPushMatrix(int);
int nlScaleUnitVector(int, int, float);
int nlSubVector3op(int, int, int);
int nlsndSeqRequest(int);
int ovLockCs_8c200114(int);
int ovUnlockCs_8c20012c(int);
int set_event(int, int);
void _lsfts(int a4, int a5, int a6);
int titleSprBlinkPut(float f4);
int nlSetPaletteMap(int a4, int a5);
int nlArcSin(float f4);
int nlLineCalcFogA(int a4);
int kmytex_FBAllocEntry(void);
int mtxGetPos(int a4, int a5, int a6);
int evSprAnimStart(int a4, int a5, float f4);
int commonViewInit(void);
int nlSysMetricsInit(void);
int nlChgModelPolyAttrOn(int a4);
int kmSetFogTable(int a4);
int mwRnaExecServer(void);
int vecDistXZf(float f4, float f5, float f6, float f7);
int sprCellInit(int a4, int a5);
int padDirAny(int a4);
int strmCallName(int a4);
int SJUNI_GetNumData(int a4, int a5);
int uniformSlotReset(int a4, int a5);
int evCrowdClapStart(void);
int ambDimStart(int a4);
int exprPlayC(int a4, int a5);
int nlSysSetDirectListTypeLatency2V(int a4);
void syCacheFinish_P2_(void);
int entrySetSlot(int a4, int a5, int a6, int a7);
float nlMultiMatrixRevOrder(int a4);
int nlPopMatrix(int a4);
int nlsndStreamStart(int a4);
int SJMEM_PutChunk(int a4, int a5, int a6);
int kmyWritePaletteDMA(void);
int syG2DmaSuspend(int a4);
int dbgMenuSetValue(int a4, int a5, int a6);
int emotKeyCopy(int a4, int a5, int a6);
int sprSet115Load(void);
int seNetHit(void);
int _add(int a4, int a5, int a6);
int _pd_peripheral_set_null(int a4);
int kmSetColorClampValue(int a4, int a5, int a6, int a7, int a8, int a9);
int ADXAMP_Init(void);
void padLcdLineTo3D(int a4);
void nlQuickInvertMatrix(void);
void camGetPos(int a4, int a5, int a6, int a7, int a8);
int kmyInitializeDriver(void);
int syIntAdrChk_getchar(void);
int shadowVolExtrude(int a4, int a5);
float nlFloor(float f4);
void nlLoadRechangeMatrix(int a4);
int SearchUsed(int a4, int a5);
int get_data(int a4);
int dbgMenuSetTitle(int a4, int a5, int a6);
int sys_init(void);
int ADXB_EvokeExpandSte(int a4, int a5);
int dbgMenuDrawPage(void);
int sprSet163Load(int a4);
int sprSet173Load(int a4);
int resCautionRead(int a4);
float nlMultiMatrixRevOrder8(int a4);
float nlLineClipPoint(int a4, int a5, int a6);
int _pd_peripheral_error(int a4, int a5, int a6);



int _pd_peripheral_error(int a4, int a5, int a6)
{
    int t0;

    t0 = *(signed char *)((a6 + 0x4));
    if ((unsigned char)t0 != 0xFC) {
        if ((unsigned char)t0 != 0xFF) {
            if ((unsigned char)t0 != 8) {
                if ((unsigned char)t0 != 5) {
                    if ((unsigned char)t0 != 6) {
                        if ((unsigned char)t0 != 0) {
                            return 0xFF000000;
                        }
                        return 0x0;
                    }
                    return 0x0;
                }
                return 0x0;
            }
            return 0x0;
        }
        return 0x0;
    }
    return 0xFF0000FC;
}


void nlLoadRechangeMatrix(int a4)
{
    float u0;
    float u1;
    float u2;
    float u3;
    float u4;
    float u5;
    float u6;
    float u7;
    float u8;
    float u9;
    float u10;
    float u11;
    float u12;
    float u13;
    float u14;
    float u15;
    float u16[16];

    u0 = *(float *)((a4 + 0x0));
    u1 = *(float *)(((a4 + 0x4) + 0x0));
    u2 = *(float *)((((a4 + 0x4) + 0x8) + 0x0));
    u3 = *(float *)((((a4 + 0x4) + 0x8) + 0x0));
    u4 = *(float *)(((((a4 + 0x4) + 0x8) + 0x4) + 0x0));
    u5 = *(float *)((((((a4 + 0x4) + 0x8) + 0x4) + 0x4) + 0x0));
    u6 = *(float *)(((((((a4 + 0x4) + 0x8) + 0x4) + 0x4) + 0x8) + 0x0));
    u7 = *(float *)(((((((a4 + 0x4) + 0x8) + 0x4) + 0x4) + 0x8) + 0x0));
    u8 = *(float *)((((((((a4 + 0x4) + 0x8) + 0x4) + 0x4) + 0x8) + 0x4) + 0x0));
    u9 = *(float *)(((((((((a4 + 0x4) + 0x8) + 0x4) + 0x4) + 0x8) + 0x4) + 0x4) + 0x0));
    u10 = *(float *)((((((((((a4 + 0x4) + 0x8) + 0x4) + 0x4) + 0x8) + 0x4) + 0x4) + 0x8) + 0x0));
    u11 = *(float *)((((((((((a4 + 0x4) + 0x8) + 0x4) + 0x4) + 0x8) + 0x4) + 0x4) + 0x8) + 0x0));
    u12 = *(float *)(((((((((((a4 + 0x4) + 0x8) + 0x4) + 0x4) + 0x8) + 0x4) + 0x4) + 0x8) + 0x4) + 0x0));
    u13 = *(float *)((((((((((((a4 + 0x4) + 0x8) + 0x4) + 0x4) + 0x8) + 0x4) + 0x4) + 0x8) + 0x4) + 0x4) + 0x0));
    u14 = *(float *)(((((((((((((a4 + 0x4) + 0x8) + 0x4) + 0x4) + 0x8) + 0x4) + 0x4) + 0x8) + 0x4) + 0x4) + 0x8) + 0x0));
    u15 = *(float *)(((((((((((((a4 + 0x4) + 0x8) + 0x4) + 0x4) + 0x8) + 0x4) + 0x4) + 0x8) + 0x4) + 0x4) + 0x8) + 0x0));
    _builtin_st_ext((float (*)[4])u16);
    u16[0] = u3;
    u16[1] = u0;
    u16[2] = u1;
    u16[3] = (-u2);
    u16[4] = u7;
    u16[5] = u4;
    u16[6] = u5;
    u16[7] = (-u6);
    u16[8] = u11;
    u16[9] = u8;
    u16[10] = u9;
    u16[11] = (-u10);
    u16[12] = u15;
    u16[13] = u12;
    u16[14] = u13;
    u16[15] = (-u14);
    _builtin_ld_ext((float (*)[4])u16);
}
