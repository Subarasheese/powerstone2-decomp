/* Library code: C that behaves like this game's own bytes. */
/* Straight-line functions with calls and guards (batch gen_cd): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int DECtoBCD(int);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int _pd_peripheral_set_null(int);
int buIsFormat(int);
int check_isopen(void);
int direntry(int, int);
int fmMngClearBuf(int, int);
int fmMngReadData(int);
int fmMngReadSctAllData(int);
int fmMngWriteData(int, int, int);
int gdFsGetStat(int);
int gdFsReopenHn(int, int, int, int);
int gdFsReqRd32(int, int, int);
int gdFsReqRdPio(int, int, int);
int get_fat(int, int);
int kdGetDeviceInfo(int);
int kdInitSystem(int, int);
int kmyRegisterBGPlane(int);
int memset(int, int, int);
int mpdrv_check_port(int);
int mpdrv_make_devicedata(int, int);
int nlLineSendVertex(int, int, int);
int search_dir(int, int, int);
int search_subst_fat_top(int);
int set_fat(int, int, int);
int syBtFlDeleteSct(int, int, int);
int syBtFlWrite(int, int, int);
int syTmrDiffCount(int, int);
int syTmrGetCount(void);
int thunk_copyBytes(void);
int vmsfs_c_getstate(int);
int vmsfs_c_setfunc(int, int);
int vmsfs_c_setparam(int, int, int, int, int, int, int);
int vmsfs_fclose(int, int);
int vmsfs_fopen(int, int, int);
int vmsfs_fread1(int, int);
int vmsfs_fseek(int, int, int, int);
int vmsfs_unmount(int);
int vmsio_ismount(int);
int vmsio_isready(int);
int write_fat_1(int);
int write_sys(int);
int kmiProcessVertex_11(int a4, int a5, int a6, int a7);
int write_fat(int a4);
int pdInitPeripheral(int a4, int a5, int a6);
int vmsfs_fgetsize(int a4, int a5);
int vmsfs_load_file_ex(int a4, int a5, int a6, int a7, int a8);
int pdTmrGetTimeCallback(int a4, int a5, int a6, int a7);
int gdFsMovePickup(int a4);
int gdFsWaitCompleteReq(int a4);
int syMmuAddEntry(int a4, int a5, int a6);
int gdFsReqDrvStatG(void);
int check_file_correct(int a4, int a5);
int gdFsRead(int a4, int a5, int a6);
int vmsfs_getvolume(int a4, int a5);
int fmMngFormat(int a4, int a5, int a6);
int gdFsGetTocG(int a4, int a5);
int vmsfs_isformat(int a4, int a5, int a6, int a7);
int nlLineSendQuadA(int a4, int a5, int a6, int a7, float f4, float f5);
int set_vmstime(int a4, int a5);
int buReadFile(int a4, int a5, int a6);
int mpdrv_frame_recv_main(int a4);
int fmMngExecServer(int a4, int a5, int a6);


int syMmuAddEntry(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t26;
    int t18;
    int t19;
    int t15;
    int t16;
    int t12;
    int t13;
    int t9;
    int t10;
    int t8;

    t0 = *(int *)0xFF000010;
    if ((unsigned int)(0x3F & ((unsigned int)((unsigned int)t0 >> 16) >> 2)) < (unsigned int)0x40) {
        t1 = (0x3F & ((unsigned int)((unsigned int)t0 >> 16) >> 2));
        for (;;) {
            if (((*(int *)((((t1 << 8) + 0xF6000000) + 0x0))) & 0x100) == 0x100) {
                t1 = (t1 + 0x1);
                if ((unsigned int)t1 >= (unsigned int)0x40) {
                    break;
                }
                continue;
            }
            break;
        }
        t8 = t1;
    } else {
        t8 = (0x3F & ((unsigned int)((unsigned int)t0 >> 16) >> 2));
    }
    t26 = 0xFF;
    if (t8 == 64) {
    } else {
        t18 = 0x1FFFFC00;
        t19 = 0x0;
        if ((signed char)a6 != 1) {
            t15 = 0x1FFFF000;
            t16 = 0x10;
            if ((signed char)a6 != 2) {
                t12 = 0x1FFF0000;
                t13 = 0x80;
                if ((signed char)a6 != 3) {
                    t9 = 0x1FF00000;
                    t10 = 0x90;
                    if ((signed char)a6 != 4) {
                        t9 = ((a5 & 0xFFFFFC00) | 0x100);
                        t10 = a6;
                    }
                    t12 = t9;
                    t13 = t10;
                }
                t15 = t12;
                t16 = t13;
            }
            t18 = t15;
            t19 = t16;
        }
        *(unsigned int *)(((0xF6000000 + (t8 << 8)) + 0x0)) = ((a5 & 0xFFFFFC00) | 0x100);
        *(unsigned int *)((((t8 << 8) + 0xF7000000) + 0x0)) = (((a4 & t18) | t19) | 0x13E);
        t26 = t8;
    }
    return t26;
}


int gdFsRead(int handleAddress, int requestedSectorCount, int destinationAddress)
{
    int useAlignedRead;
    int alignmentMaskOrSectorCount;
    int handleOrRequestResult;
    int sectorCountOrDelayCounter;
    int retryCount;
    int readResult;
    int completionResult;
    int readModeOrRequestResult;
    int sectorPosition;
    int currentSectorPosition;
    int fileSectorCount;

    useAlignedRead = 0x0;
    if ((0x1F & destinationAddress) == 0) {
        useAlignedRead = 0x1;
    }
    alignmentMaskOrSectorCount = 0x1F;
    handleOrRequestResult = 0x0;
    sectorCountOrDelayCounter = requestedSectorCount;
    retryCount = 0x0;
    for (;;) {
        if ((int)retryCount >= (int)0x4E20) {
            break;
        }
        readModeOrRequestResult = useAlignedRead;
        if (readModeOrRequestResult == 1) {
            sectorCountOrDelayCounter = requestedSectorCount;
            handleOrRequestResult = handleAddress;
            readModeOrRequestResult = (gdFsReqRd32(handleOrRequestResult, sectorCountOrDelayCounter, destinationAddress));
        } else {
            sectorCountOrDelayCounter = requestedSectorCount;
            handleOrRequestResult = handleAddress;
            readModeOrRequestResult = (gdFsReqRdPio(handleOrRequestResult, sectorCountOrDelayCounter, destinationAddress));
        }
        handleOrRequestResult = readModeOrRequestResult;
        if ((handleOrRequestResult == 0) && ((requestedSectorCount != 0) && (currentSectorPosition = *(int *)((handleAddress + 0x14)), sectorPosition = currentSectorPosition, fileSectorCount = *(int *)((handleAddress + 0x10)), alignmentMaskOrSectorCount = fileSectorCount, (int)sectorPosition < (int)alignmentMaskOrSectorCount))) {
            sectorCountOrDelayCounter = 0xC350;
            for (;;) {
                if (sectorCountOrDelayCounter == 0) {
                    break;
                }
                sectorCountOrDelayCounter = (sectorCountOrDelayCounter - 1);
            }
            retryCount = (retryCount + 0x1);
            continue;
        }
        break;
    }
    readResult = 0xFFFFFFEB;
    if (retryCount == 0x4E20) {
    } else {
        completionResult = handleOrRequestResult;
        if ((int)handleOrRequestResult >= 0) {
            completionResult = (gdFsWaitCompleteReq(handleAddress));
        }
        readResult = completionResult;
    }
    return readResult;
}


int nlLineSendQuadA(int a4, int a5, int a6, int a7, float f4, float f5)
{
    int stk[16];

    *(unsigned int *)(((int)stk + 4)) = a7;
    *(float *)(((((int)stk + 4) + 0x4) + 0x0)) = (((*(float *)((a5 + 0x0))) + f5) + f4);
    *(float *)(((((int)stk + 4) + 0x4) + 0x4)) = (((*(float *)((a5 + 0x4))) - f4) + f5);
    *(float *)(((((int)stk + 4) + 0x4) + 0x8)) = (*(float *)((a5 + 0x8)));
    *(float *)((((((int)stk + 4) + 0x4) + 0xC) + 0x0)) = (((*(float *)((a5 + 0x0))) - f5) + f4);
    *(float *)((((((int)stk + 4) + 0x4) + 0xC) + 0x4)) = (((*(float *)((a5 + 0x4))) + f4) + f5);
    *(float *)((((((int)stk + 4) + 0x4) + 0xC) + 0x8)) = (*(float *)((a5 + 0x8)));
    *(float *)((((((int)stk + 4) + 0x4) + 0x18) + 0x0)) = (((*(float *)((a6 + 0x0))) + f5) - f4);
    *(float *)((((((int)stk + 4) + 0x4) + 0x18) + 0x4)) = (((*(float *)((a6 + 0x4))) - f4) - f5);
    *(float *)((((((int)stk + 4) + 0x4) + 0x18) + 0x8)) = (*(float *)((a6 + 0x8)));
    *(float *)((((((int)stk + 4) + 0x4) + 0x24) + 0x0)) = (((*(float *)((a6 + 0x0))) - f5) - f4);
    *(float *)((((((int)stk + 4) + 0x4) + 0x24) + 0x4)) = (((*(float *)((a6 + 0x4))) + f4) - f5);
    *(float *)((((((int)stk + 4) + 0x4) + 0x24) + 0x8)) = (*(float *)((a6 + 0x8)));
    return (nlLineSendVertex(a4, (((int)stk + 4) + 0x4), (*(int *)(((int)stk + 4)))));
}
