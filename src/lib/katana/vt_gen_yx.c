/* Library code: C that behaves like this game's own bytes. */
/* Straight-line functions with calls and guards (batch gen_yx): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
typedef struct { int w[4]; } Stk4;
int ADXB_GetCof(int);
int ADXB_GetLpInsNsmpl(int);
int ADXERR_CallErrFunc(Stk3);
int ADXPD_ExecHndl(int);
int nlCommonTextureReloadA(int, int);
int FUN_8c0efc70(int);
extern void _builtin_ftrv(float *, float *);
extern int _builtin_get_imask(void);
extern void _builtin_ld_ext(float (*)[4]);
extern void _builtin_set_imask(int);
extern void _builtin_st_ext(float (*)[4]);
int fileLoadPoll(int);
int fileLoadStart(int, int, int);
int gdGdcGetDrvStat(int, int);
int gdGdcInitSystem(int, int);
int gdGdcReqCmd(int, int);
int kmGetCurrentScanline(int);
int kmGetFreeTextureMem(int, int);
int kmSetColorClampValue(Stk4);
int kmyRegisterCallback(int, int, int);
int kmyRequestCallback(int, int, int, int);
int memset(int, int, int);
int nlCalcPoint(int, int);
int nlCalcVector(int, int);
int nlCopyMatrix(int, int, float, float, float, float, float, float);
float nlCos(int);
float nlCosf(float);
int nlGetMatrix(int);
extern int nlGetMatrix8();
int nlInvLightVectorUseViewMatrix(void);
int nlLUDecomp(int, int);
int nlLoadMatrix(int);
int nlLoadMatrix8(int);
int nlMakeModelViewProjectMatrix_objput(void);
int nlMultiMatrix(int);
int nlMultiMatrixRevOrder8(int);
int nlMultiPushedMatrix(void);
int nlObjPutLoadTextureOnce_Sub(int, int, int, int, int);
int nlObjPutSetSpecularEyeDirectionF(float, float, float);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateXSC(float, float);
int nlRotateYSC(float, float);
float nlSin(int);
float nlSinf(float);
int nlSysMetricsDiffTime(int, int);
int nlSysMetricsReadTimer(void);
int nlSysMetricsScaleTime(int);
int nlTransposeMatrix(void);
int nlobjput_sub(int);
int nlobjput_sub_trnsl(int);
int nlsndStreamGetBitSize(int);
int nlsndStreamGetBufInfo(int, int, int);
int nlsndStreamGetFreq(int);
int nlsndStreamGetPlayPos(int);
int nlsndStreamStop(int);
int syCachePurgeAll(int, int, int, int);
int nlObjPutLoadTextureGI(int a4, int a5);
int FUN_8c0eeca0(int a4, int a5, int a6);
int FUN_8c0eed00(int a4, int a5, int a6);
void gdFsEntryErrFuncAllG(int a4, int a5);
void FUN_8c0ee6b0(void);
int mwSbGetBufSize(int a4);
int nlLightModelTransOne(void);
int nlObjPutUseViewMatrixTrnsl(int a4, float f4);
int nlGetPushedMatrix(int a4, float f4, float f5, float f6, float f7, float f8, float f9);
int nlMakeModelViewProjectMatrix(void);
int nlMakeFastModelProjectMatrixVM(void);
int kmSetPaletteMode(int a4);
int FUN_8c1e7ef2(Stk4 s);
int ADXPD_ExecServer(void);
int FUN_8c012b10(void);
int nlObjPutWorldMatrixMode(float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11);
float nlRotateXSC_L(float f4, float f5);
float nlRotateYSC_L(float f4, float f5);
float nlRotateZSC(float f4, float f5);
float nlRotateZSC_L(float f4, float f5);
int nlIntrHandlerEventA40(void);
int nlIntrHandlerEventB00(void);
void nlIntrClearEvent(int a4);
int syTmrInt1Handler(void);
int syTmrInt2Handler(void);
int FUN_8c2001b8(void);
int FUN_8c2001dc(void);
int FUN_0c2e1a74(int a4);
int nlLightCutoffAng(int a4, int a5);
int nlDetMatrix(int a4, float f4, float f5, float f6, float f7, float f8, float f9);
int nlLightCutoffRad(int a4, float f4);
int nlObjPutUseViewMatrix(int a4);
int gdFsDaPause(void);
int gdDcfDaPlay_(int a4, int a5, int a6);
int gdDcfDaPlay2_(int a4, int a5, int a6);
int gdDcfGetScd_(int a4, int a5, int a6);
int mwSbStop(int a4);
int FUN_8c0f0ac0(void);
int nlProjectScreen3D(int a4, int a5);
int gdDcfReqStat_(int a4, int a5, int a6, int a7);
int FUN_8c0f0220(float f4);
int FUN_8c0f0260(float f4);
int nlIntrHandlerEOR(void);
int nlIntrHandlerEvent900(void);
int nlIntrHandlerEvent920(void);
int nlIntrHandlerTexOverflow(void);
int gdDcfSeek_(int a4);
int gdDcfDaRelease_(int a4);
int gdDcfGetVer_(int a4);
int adxb_DefGetWr(int a4, int a5, int a6, int a7);
int nlSetColorClampValue(int a4, int a5);
int gdDcfReqGdRd_(int a4, int a5);
int gdDcfGetDrvStat_(int a4, int a5);
int gdDcfGetToc_(int a4, int a5);
int FUN_8c0b5c86(void);
int FUN_8c0b5ca0(void);
int FUN_8c0b5cba(void);
int nlClearMatrix(void);
int nlIntrSetVectorFunction(int a4, int a5);
int gdFsHdlG1DmaEnd(int a4);
int adxini_rnaerr_cbfn(int a4, int a5);
int FUN_0c2cbc2a(int a4);
int FUN_8c1f8a64(int a4);
int nlCommonTextureGetFreeMem(void);
int nlCommonTextureGetFreeBlock(void);
int gdFsGetGlobalErr(void);
int gdFsDaPlay(void);
int gdFsDaPlaySct(void);
int gdFsDaStop(void);
int gdFsDaRelease(void);
int gdFsDaGetInfo(void);
int gdFsIsTrayOpen(void);
int nlCommonTextureReloadI(int a4, int a5, int a6);
int gdFsReadW(void);
int gdFsSetGlobalErr(void);
int mwSbGetSfreq(int a4);
int mwSbGetBitPerSmpl(int a4);
int nlGetCurrentScanLine(void);
int nlSysMetricsCpuPowerEnd(void);
int FUN_0c2e1a60(int a4);
int nlObjPutSetSpecularEyeDirectionV(int a4);
int syBtCheckDisc(int a4, int a5, int a6, int a7);
int kmSetEndOfVertexCallback(int a4, int a5);
int kmSetStripOverRunCallback(int a4, int a5);
int adxb_DefAddWr(int a4, int a5, int a6);
int mwlSbClearTrnsReq(int a4, int a5, int a6);
int nlObjPutLoadTextureOnce(int a4, int a5, int a6, int a7);
int nlObjPutLoadTextureOnceGI(int a4, int a5, int a6, int a7);
int nlPushMultiViewMatrix(void);
int FUN_0c2b6580(int a4, int a5, int a6, int a7);
int FUN_8c1e6738(int a4, int a5);
int mwSbGetPlayPos(int a4);
int FUN_8c1ef400(int a4, int a5);
int FUN_8c1ef43c(int a4, int a5);
int FUN_8c1ef450(int a4, int a5);
int ADXSJD_GetLpInsNsmpl(int a4);
int ADXSJD_GetCof(int a4);
int vmsfs_getword_big(int a4, int a5);
void FUN_8c0eab40(int a4);
int FUN_8c0f8260(int a4, int a5);
int FUN_8c0f8290(int a4, int a5);
int FUN_8c0f8250(int a4, int a5);
void FUN_0c17db20(void);
int FUN_0c17db30(void);
void FUN_8c1e3278(int a4);
int vmsfs_getword_little(int a4, int a5);
void vmsfs_setword_big(int a4, int a5, int a6);
void FUN_8c0ea550(int a4);
void FUN_8c0eaaf0(int a4);
int FUN_8c0eab20(void);
void nlSysCreatePunchBuffer(int a4);
int nlSysMetricsGetLastTATime(void);
int nlSysMetricsGetNativeUseSize(void);
int nlSysMetricsGetNativeMaxSize(void);
void nlSetPunchAlphaThreshold(int a4);
int FUN_8c0ec0d0(void);
int FUN_8c0ec0e0(void);
void kmfSetTimeOutCount(int a4, int a5);
void FUN_8c0ee5b0(int a4);
void FUN_8c0ee6e0(int a4);
void FUN_8c0f2180(int a4);
int nlObjPutMvGetClosingMode(void);
int FUN_8c0f24e0(void);
void FUN_8c0f2dc0(float f4);
int FUN_8c0f3a80(void);
void FUN_8c0f6e90(int a4);
void nlDispStripSetPalette(int a4);
int nlIntrGetEvent(void);
void FUN_8c1e2780(int a4);
void FUN_8c1e3272(int a4);
int FUN_8c1e68f4(int a4, int a5);
int FUN_8c1e7978(void);
int FUN_8c1e6a34(int a4, int a5);
void vmsfs_setword_little(int a4, int a5, int a6);
void nlFatalErrorReturn(void);
void FUN_8c0ef2bc(void);
void FUN_8c0ef354(void);
void FUN_8c0f8360(void);
int FUN_8c1e2f60(void);
int FUN_8c1e2f68(void);
void FUN_8c1e326e(void);
int kmiProcessVertex_17(void);
int FUN_8c1f5d38(void);
void FUN_8c200110(void);
int FUN_8c200dd4(void);


int mwSbGetBufSize(int a4)
{
    int stk[4];

    *(unsigned int *)((a4 + 0x20)) = (nlsndStreamGetBufInfo((*(short *)((a4 + 0x6))), 0x0, ((int)stk + 4)));
    *(unsigned int *)((a4 + 0x28)) = (*(int *)(((int)stk + 4)));
    return ((((int)((int)(*(int *)(((int)stk + 4))) / (int)(*(int *)((a4 + 0x10))))) << 2) << 1);
}


float nlRotateXSC_L(float f4, float f5)
{
    float u0[4];
    float u1[4];
    float u2[16];
    float u3[16];
    float u4[16];
    float u5[16];

    u0[0] = 0.0f;
    u0[1] = f5;
    u0[2] = f4;
    u0[3] = 0.0f;
    _builtin_ftrv(u0, u0);
    u1[0] = 0.0f;
    u1[1] = f4;
    u1[2] = f5;
    u1[3] = 0.0f;
    _builtin_ftrv(u1, u1);
    _builtin_st_ext((float (*)[4])u2);
    u2[4] = u0[0];
    u2[5] = u0[1];
    _builtin_ld_ext((float (*)[4])u2);
    _builtin_st_ext((float (*)[4])u3);
    u3[6] = u0[2];
    u3[7] = u0[3];
    _builtin_ld_ext((float (*)[4])u3);
    _builtin_st_ext((float (*)[4])u4);
    u4[8] = u1[0];
    u4[9] = u1[1];
    _builtin_ld_ext((float (*)[4])u4);
    _builtin_st_ext((float (*)[4])u5);
    u5[10] = u1[2];
    u5[11] = u1[3];
    _builtin_ld_ext((float (*)[4])u5);
    return u0[0];
}


float nlRotateYSC_L(float f4, float f5)
{
    float u0[4];
    float u1[4];
    float u2[16];
    float u3[16];
    float u4[16];
    float u5[16];

    u0[0] = f5;
    u0[1] = 0.0f;
    u0[2] = f4;
    u0[3] = 0.0f;
    _builtin_ftrv(u0, u0);
    u1[0] = (-f4);
    u1[1] = 0.0f;
    u1[2] = f5;
    u1[3] = 0.0f;
    _builtin_ftrv(u1, u1);
    _builtin_st_ext((float (*)[4])u2);
    u2[0] = u0[0];
    u2[1] = u0[1];
    _builtin_ld_ext((float (*)[4])u2);
    _builtin_st_ext((float (*)[4])u3);
    u3[2] = u0[2];
    u3[3] = u0[3];
    _builtin_ld_ext((float (*)[4])u3);
    _builtin_st_ext((float (*)[4])u4);
    u4[8] = u1[0];
    u4[9] = u1[1];
    _builtin_ld_ext((float (*)[4])u4);
    _builtin_st_ext((float (*)[4])u5);
    u5[10] = u1[2];
    u5[11] = u1[3];
    _builtin_ld_ext((float (*)[4])u5);
    return u0[0];
}


float nlRotateZSC(float f4, float f5)
{
    float u0[4];
    float u1[4];
    float u2[16];
    float u3[16];
    float u4[16];
    float u5[16];

    u0[0] = f5;
    u0[1] = f4;
    u0[2] = 0.0f;
    u0[3] = 0.0f;
    _builtin_ftrv(u0, u0);
    u1[0] = (-f4);
    u1[1] = f5;
    u1[2] = 0.0f;
    u1[3] = 0.0f;
    _builtin_ftrv(u1, u1);
    _builtin_st_ext((float (*)[4])u2);
    u2[0] = u0[0];
    u2[1] = u0[1];
    _builtin_ld_ext((float (*)[4])u2);
    _builtin_st_ext((float (*)[4])u3);
    u3[2] = u0[2];
    u3[3] = u0[3];
    _builtin_ld_ext((float (*)[4])u3);
    _builtin_st_ext((float (*)[4])u4);
    u4[4] = u1[0];
    u4[5] = u1[1];
    _builtin_ld_ext((float (*)[4])u4);
    _builtin_st_ext((float (*)[4])u5);
    u5[6] = u1[2];
    u5[7] = u1[3];
    _builtin_ld_ext((float (*)[4])u5);
    return u0[0];
}


int FUN_0c2e1a74(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(int *)((a4 + 0x4));
    if (t0 != 0) {
        t1 = a4;
        t2 = t0;
        for (;;) {
            if ((*(int *)((t2 + 0x14))) != 0) {
                t1 = t2;
                t0 = ((int (*)(int))((*(int *)((t2 + 0x14)))))(t1);
            } else {
                t0 = t1;
            }
            t2 = (*(int *)((t2 + 0x4)));
            t1 = t0;
            if (t2 == 0) {
                break;
            }
        }
    }
    return 0x0;
}


int nlDetMatrix(int a4, float f4, float f5, float f6, float f7, float f8, float f9)
{
    int stk[20];

    *(unsigned int *)(((int)stk + 4)) = a4;
    nlCopyMatrix((((int)stk + 4) + 0x4), a4, f4, f5, f6, f7, f8, f9);
    return (nlLUDecomp((((int)stk + 4) + 0x4), (((int)stk + 4) + 0x44)));
}


int mwSbStop(int a4)
{
    nlsndStreamStop((*(short *)((a4 + 0x6))));
    *(unsigned char *)(((0x60 + a4) + 0x0)) = (*(signed char *)((a4 + 0x5)));
    *(unsigned char *)((a4 + 0x5)) = 0x0;
    *(unsigned int *)((a4 + 0x18)) = 0x0;
    return 0x0;
}


int adxb_DefGetWr(int a4, int a5, int a6, int a7)
{
    *(unsigned int *)((a5 + 0x0)) = (*(int *)((a4 + 0x9C)));
    *(unsigned int *)((a6 + 0x0)) = ((*(int *)((a4 + 0x40))) - (*(int *)((a4 + 0x9C))));
    *(unsigned int *)((a7 + 0x0)) = ((*(int *)((a4 + 0x18))) - (*(int *)((a4 + 0x98))));
    return (*(int *)((a4 + 0x3C)));
}


int FUN_0c2cbc2a(int a4)
{
    register int t5;

    *(unsigned int *)((a4 + 0x4)) = ((int)((unsigned int)(*(int *)((a4 + 0x0))) / (unsigned int)(*(int *)((a4 + 0x10)))));
    t5 = (int)((unsigned int)(*(int *)((a4 + 0x0))) % (unsigned int)(*(int *)((a4 + 0x10))));
    *(unsigned int *)((a4 + 0x8)) = t5;
    return t5;
}


int nlCommonTextureGetFreeMem(void)
{
    int stk[4];

    kmGetFreeTextureMem(((int)stk + 4), (((int)stk + 4) + 0x4));
    return (*(int *)(((int)stk + 4)));
}


int nlCommonTextureGetFreeBlock(void)
{
    int stk[4];

    kmGetFreeTextureMem((((int)stk + 4) + 0x4), ((int)stk + 4));
    return (*(int *)(((int)stk + 4)));
}


int nlCommonTextureReloadI(int a4, int a5, int a6)
{
    return nlCommonTextureReloadA(a4, (*(int *)(((((a6 << 2) << 2) + a5) + 0x8))));
}


int mwSbGetSfreq(int a4)
{
    register int t1;

    t1 = nlsndStreamGetFreq((*(short *)((a4 + 0x6))));
    *(unsigned int *)((a4 + 0x14)) = t1;
    return t1;
}


int mwSbGetBitPerSmpl(int a4)
{
    register int t1;

    t1 = nlsndStreamGetBitSize((*(short *)((a4 + 0x6))));
    *(unsigned int *)((a4 + 0x10)) = t1;
    return t1;
}


int nlGetCurrentScanLine(void)
{
    int stk[3];

    kmGetCurrentScanline(((int)stk + 4));
    return (*(int *)(((int)stk + 4)));
}


int FUN_0c2e1a60(int a4)
{
    register int t0;
    register int t1;

    t0 = *(int *)((a4 + 0x4));
    if (t0 != 0) {
        t1 = t0;
        for (;;) {
            *(volatile int *)((t1 + 0xC));
            t1 = (*(int *)((t1 + 0x4)));
            if (t1 == 0) {
                break;
            }
        }
    }
    return 0x0;
}





int kmSetEndOfVertexCallback(int a4, int a5)
{
    return kmyRegisterCallback(0x5, a4, a5);
}


int kmSetStripOverRunCallback(int a4, int a5)
{
    return kmyRegisterCallback(0x4, a4, a5);
}


int adxb_DefAddWr(int a4, int a5, int a6)
{
    *(unsigned int *)((a4 + 0x9C)) = ((*(int *)((a4 + 0x9C))) + a6);
    *(unsigned int *)((a4 + 0x98)) = ((*(int *)((a4 + 0x98))) + a6);
    return 0x98;
}


int mwlSbClearTrnsReq(int a4, int a5, int a6)
{
    *(unsigned char *)((a4 + 0x5)) = (*(signed char *)((a4 + 0x60)));
    *(unsigned char *)((a4 + 0x60)) = 0x0;
    *(unsigned int *)((a6 + 0x0)) = 0x0;
    return 0x0;
}





int FUN_0c2b6580(int a4, int a5, int a6, int a7)
{
    kmyRequestCallback(0x2, a5, a6, a7);
    return 0x1;
}


int mwSbGetPlayPos(int a4)
{
    return nlsndStreamGetPlayPos((*(short *)((a4 + 0x6))));
}


void FUN_0c17db20(void)
{
    *(unsigned int *)0xA05F6900 = 0x4000;
}


int FUN_0c17db30(void)
{
    *(unsigned int *)0xA05F705C = 0x3;
    return 0xA05F705C;
}
