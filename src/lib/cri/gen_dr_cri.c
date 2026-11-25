/* Straight-line functions with calls and guards (batch gen_dr): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10C0_int { char p[0x10C0]; int v; };
struct o10C4_int { char p[0x10C4]; int v; };
struct o10C8_int { char p[0x10C8]; int v; };
struct o18_int { char p[0x18]; int v; };
struct o248_uint { char p[0x248]; unsigned int v; };
struct o28_short { char p[0x28]; short v; };
struct o28_ushort { char p[0x28]; unsigned short v; };
struct o2C_int { char p[0x2C]; int v; };
struct o3C_int { char p[0x3C]; int v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_int { char p[0x40]; int v; };
struct o44_int { char p[0x44]; int v; };
struct o48_int { char p[0x48]; int v; };
struct o48_ushort { char p[0x48]; unsigned short v; };
struct o50_ushort { char p[0x50]; unsigned short v; };
struct o60_int { char p[0x60]; int v; };
struct o60_uint { char p[0x60]; unsigned int v; };
struct o64_uint { char p[0x64]; unsigned int v; };
struct o74_uint { char p[0x74]; unsigned int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_uint { char p[0x84]; unsigned int v; };
struct oFCC_int { char p[0xFCC]; int v; };
int ADXCRS_Lock(int, int);
int ADXCRS_Unlock(void);
int ADXSJD_ExecHndl(int);
int FUN_0c0613c4(int);
int FUN_0c061400(int);
int FUN_0c17a550(int);
int FUN_0c181308(int, int);
int FUN_0c1814e4(int);
int FUN_0c18156a(int);
int FUN_0c187a88(int, int, int);
int FUN_0c2bad7a(int, int);
int FUN_0c2bb00c(void);
int FUN_0c2bbe58(int, int);
int FUN_0c2c20d8(int, int, int);
int FUN_0c2c30aa(int, int, int, int, int);
int FUN_0c2db8e0(int, int, int);
int FUN_0c2dc1ae(int, int, int, int, int);
extern int _builtin_get_imask(void);
extern void _builtin_ld_ext(float (*)[4]);
extern void _builtin_set_imask(int);
extern void _builtin_st_ext(float (*)[4]);
int adxf_ExecOne(int);
int dbg_printf(int, ...);
int dbg_set_cell_size(int, int);
int direntry(int, int);
int gdFsGetLE4(int);
int gdFsGetStatG(void);
int gdFsGetTokenSize(int, int, int);
int gdFsMemcpy(int, int, int);
int gdFsRead(int, int, int);
int gdFsReopenHn(int, int, int, int);
int gdFsStopRd(int);
int gdFsStrncmpi(int, int, int);
int gdFsWaitCompleteReq(int);
int get_fat(int, int);
int kmyContinueTA(int);
extern int kmyQueryFinishDMA();
int kmyRequestCallback(int);
int kmySetupTA(int);
int memset(int, int, int);
int mwlSbFreeWork(int);
int nlLocate(int, int);
int nlMultiPushedMatrix(void);
int nlPushMatrix(int);
int nlsndG2DmaHandleClose(int);
int nlsndStreamGetHdInfo(int, int);
int search_dir(int, int, int);
int syRtcCountToDate(int, int);
int syRtcGetCountForce(void);
int syRtcMakeAgeOfMoon(int a4);
int syRtcMakeDayOfWeek(int, int, int);
int syTmrGetCount(void);
int vsprintf(int, int, int);
int gdFsSearchPath(int a4, int a5, int a6, int a7);
int FUN_0c0612f4(int a4, int a5, int a6, int a7);
int kmiFLWCTRLStartPass(int a4, int a5, int a6, int a7);
int mwSbClosePort(int a4);
int gdFsDaGetInfoG(int a4, int a5, int a6, int a7);
int check_file_correct(int a4, int a5);
int gdFsGetTocG(int a4, int a5, int a6, int a7);
int syTmrGenSetInt(int a4, int a5);
int FUN_0c02cade(void);
int mwRnaSetPitch(int a4, int a5, int a6, int a7);
int make_header(int a4, int a5);
int mwRnaSetOutVol(int a4, int a5, int a6, int a7);
int mwlSbSetDrctLvl(int a4, int a5);
int nlSetIntrPriority(int a4, int a5);
int FUN_0c1059ac(int a4, int a5, int a6);
int mwRnaSetDrctLvl(int a4, int a5, int a6, int a7);
int syRtcGetDate(int a4);
int mwRnaSetFilter(int a4, int a5, int a6, int a7);
int mpdrv_dpf(int a4, int a5, int a6, int a7, int a8, int a9, int a10);
int ADXSTM_Stop(int a4);
int kmytex_FBFreeEntry(int a4);
int gdFsReadWG(int a4, int a5, int a6);
int kmytex_VQFreeEntry(int a4);
int kmyiCheckNativeHandle(int a4);
int kmyReleaseFrameBufferHandle(int a4, int a5, int a6, int a7);
int nlStoreMatrix(int a4);
int syBtExit(int a4, int a5, int a6, int a7);
int ADXF_GetNumReqSct(int a4, int a5, int a6, int a7);
int ADXF_ExecServer(int a4, int a5);
int ADXSJD_ExecServer(void);
int nlStoreMatrix8(int a4);
void nlLoadMatrix8(int a4);
int gdFsGetDrvStatG(int a4, int a5, int a6, int a7);
int nl_texture_slot_free(int a4, int a5);
int gdFsExecServerG(void);
int mwRnaGetNumRoom(int a4, int a5, int a6, int a7);
int kmyiCheckRenderPacket(int a4);
int mwRnaGetStat(int a4, int a5, int a6, int a7);
int mwRnaGetOutVol(int a4, int a5, int a6, int a7);
int mwRnaIsPause(int a4, int a5, int a6, int a7);
int ADXF_Tell(int a4, int a5, int a6, int a7);
int ADXF_GetFsizeSct(int a4, int a5, int a6, int a7);
int ADXF_GetFsizeByte(int a4, int a5, int a6, int a7);
int ADXF_GetNumReadSct(int a4, int a5, int a6, int a7);
int ADXF_GetStat(int a4, int a5, int a6, int a7);
int mpdrv_set_end_ns(void);
int syBtCheckDisc(int a4, int a5, int a6, int a7);
int mpdrv_get_timeout(void);
int FUN_0c0d5188(void);
int nlPushMultiViewMatrix(void);
int kmyiCheckTAHandle(int a4);
int gdFsGetGlobalErrG(void);
int gdFsGetWorkHnG(void);
int gdFsGetSysHnG(void);


int ADXSTM_Stop(int a4)
{
    int t0;
    register int t1;

    if (((*(signed char *)((a4 + 0x2))) == 1) && (t0 = *(int *)((a4 + 0x8)), t0 != 0)) {
        t0 = syTmrGetCount();
        gdFsStopRd((*(int *)((a4 + 0x8))));
        t1 = syTmrGetCount();
        *(unsigned int *)0xC303D94 = (FUN_0c2bbe58(t0, t1));
        *(unsigned char *)((a4 + 0x2)) = 0x0;
    }
    *(unsigned char *)((a4 + 0x1)) = 0x1;
    return 0x1;
}


int ADXF_GetNumReqSct(int a4, int a5, int a6, int a7)
{
    int stk[1];

    *(unsigned int *)(((int)stk + 0)) = a5;
    if (a4 == 0) {
        FUN_0c2c30aa(0xC2FF4A8, a5, a6, a7, *(int *)((int)stk + 0));
        *(unsigned int *)(((*(int *)(((int)stk + 0))) + 0x0)) = 0x0;
        return 0xFFFFFFFD;
    }
    *(unsigned int *)(((*(int *)(((int)stk + 0))) + 0x0)) = (*(int *)((a4 + 0x1C)));
    return (*(int *)((a4 + 0x20)));
}

int ADXF_ExecServer(int a4, int a5)
{
    register int t1;

    ADXCRS_Lock(a4, a5);
    t1 = 0xC8CBD44;
    for (;;) {
        if ((*(signed char *)((t1 + 0x0))) == 1) {
            adxf_ExecOne(t1);
        }
        t1 = (t1 + 0x30);
        if ((unsigned int)t1 >= (unsigned int)0xC8CC044) {
            break;
        }
    }
    return ADXCRS_Unlock();
}

int ADXSJD_ExecServer(void)
{
    register int t0;
    register int t1;
    register int t3;

    t0 = 0xC8CAC04;
    for (;;) {
        t1 = *(signed char *)((t0 + 0x0));
        t3 = t1;
        if (t1 == 1) {
            t3 = (ADXSJD_ExecHndl(t0));
        }
        t0 = (t0 + 0x98);
        if ((unsigned int)t0 >= (unsigned int)0xC8CB0C4) {
            break;
        }
    }
    return t3;
}


int ADXF_Tell(int a4, int a5, int a6, int a7)
{
    int stk[1];

    if (a4 == 0) {
        FUN_0c2c30aa(0xC2FF424, a5, a6, a7, *(int *)((int)stk + 0));
        return 0xFFFFFFFD;
    }
    return (*(int *)((a4 + 0x18)));
}

int ADXF_GetFsizeSct(int a4, int a5, int a6, int a7)
{
    int stk[1];

    if (a4 == 0) {
        FUN_0c2c30aa(0xC2FF44C, a5, a6, a7, *(int *)((int)stk + 0));
        return 0xFFFFFFFD;
    }
    return (*(int *)((a4 + 0x10)));
}

int ADXF_GetFsizeByte(int a4, int a5, int a6, int a7)
{
    int stk[1];

    if (a4 == 0) {
        FUN_0c2c30aa(0xC2FF478, a5, a6, a7, *(int *)((int)stk + 0));
        return 0xFFFFFFFD;
    }
    return (*(int *)((a4 + 0x14)));
}

int ADXF_GetNumReadSct(int a4, int a5, int a6, int a7)
{
    int stk[1];

    if (a4 == 0) {
        FUN_0c2c30aa(0xC2FF4D8, a5, a6, a7, *(int *)((int)stk + 0));
        return 0xFFFFFFFD;
    }
    return (*(int *)((a4 + 0x24)));
}

int ADXF_GetStat(int a4, int a5, int a6, int a7)
{
    int stk[1];

    if (a4 == 0) {
        FUN_0c2c30aa(0xC2FF508, a5, a6, a7, *(int *)((int)stk + 0));
        return 0xFFFFFFFD;
    }
    return (*(signed char *)((a4 + 0x1)));
}


