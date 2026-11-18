/* Library code: C that behaves like this game's own bytes. */
/* Straight-line functions with calls and guards (batch gen_cb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[4]; } Stk4;
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int buFbrSleepFiber(int, int, int, int, float, float, float, float, float, float, float, float);
int copy_device(void);
int gdFsSearchName(int, int, int);
int init_sub(void);
int kdDevGetFD(int, int);
int kdGetDevice(int);
int kdGetDeviceInfo(int);
int kdSetHandler(int, int);
int kdSetSetCondition(void);
int memcmp(int, int, int);
int memset(int, int, int);
int mpdrv_init(int, int, int);
int mpdrv_init_ex(int, int, int, int);
int nlGetMatrix(int);
int nlUnitMatrix(void);
int ovGetLibTbl(int);
int ovLockCs(int);
int ovUnlockCs(int);
int pdTmrIsReady(int);
int pdVibSetUnitInfo(int, int, int, int, int, int);
int set_file_info(int, int, int, int);
int str_len(int);
int syRtcAicaSetDateHi(int);
int syRtcAicaSetDateLo(int);
int syRtcAicaSetWriteFlag(void);
int syRtcDateToCount(int, int);
int syRtcGetCountForce(void);
int vmsfs_read_retry(int, int, int);
int vsprintf(int, int, int);
int kdInitSystemEx(int a4, int a5, int a6, int a7);
int pdTmrAlarm(int a4, int a5);
int kdInitSystem(int a4, int a5);
int read_fat(int a4);
int ovSearchLibByUuid(int a4);
int syRtcSetDate(int a4);
int search_fat_free(int a4, int a5);
int search_fat(int a4, int a5);
int ovLibEntryTbl(int a4);
int gdFsReopenHn(int a4, int a5, int a6, int a7);
int search_fat_used(int a4);
int gdFsSeek(int a4, int a5, int a6);
int gdFsGetDirInfoG(int a4, int a5);
int kdDevGetControllerInfo(int a4, int a5);
int kdDevGetSIPInfo(int a4, int a5);
int kdDevGetGunInfo(int a4, int a5);
int vmsfs_resetwork(int a4);
int cmp_fname(int a4, int a5);
int mpdrv_sdckbenable(int a4);
int mpdrv_dpf(Stk4 s);
int fmMngWrite(int a4, int a5);
int vmsio_isready(int a4);
int search_exec_file(int a4, int a5);
void buDisableServer(void);
int vmsfs_init_work_new(int a4);
int vmsfs_dpf(Stk4 s);
int nlInitMatrixStack(int a4, int a5, int a6);
int kdDevGetTimerInfo(int a4, int a5);
int vmsfs_isready(void);
int mpdrv_sdckbdisable(int a4);
int buFbrEndFiber(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11);
int kdDevGetVibrationInfo(int a4, int a5);
void pdVibGetUnitInfoCallback(int a4, int a5, int a6, int a7);


int ovSearchLibByUuid(int a4)
{
    int t0;
    int t1;
    int t5;
    int stk[8];
    int R1004;

    R1004 = *(int *)((int)stk + 4);

    R1004 = a4;
    t0 = ovGetLibTbl((((int)stk + 4) + 0x4));
    t1 = 0x0;
    for (;;) {
        if ((int)t1 >= (int)(*(int *)((t0 + 0x0)))) {
            return 0xFFFFFFFE;
        }
        t5 = memcmp((R1004), ((*(int *)(((((t1 << 2) << 1) + (t0 + 0x8)) + 0x0))) + 0x10), 0x10);
        if (t5 == 0) {
            break;
        }
        t1 = (t1 + 0x1);
    }
    return t1;
}


int kdDevGetControllerInfo(int a4, int a5)
{
    int t0;

    t0 = kdDevGetFD(a5, 0x1);
    if (t0 == 0) {
        return 0xFFFFFFFF;
    }
    *(unsigned int *)((a4 + 0x0)) = (((((unsigned char)(*(signed char *)((t0 + 0x1))) << 16) | ((unsigned char)(*(signed char *)((t0 + 0x2))) << 8)) | (((unsigned char)(*(signed char *)((t0 + 0x0))) << 16) << 8)) | (unsigned char)(*(signed char *)((t0 + 0x3))));
    return 0x0;
}


int cmp_fname(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;

    t0 = str_len(a4);
    t1 = str_len(a5);
    if (t0 == t1) {
        if ((int)t0 > 0) {
            t2 = a5;
            t3 = a4;
            t4 = 0x0;
            for (;;) {
                if ((*(signed char *)((t3 + 0x0))) != (*(signed char *)((t2 + 0x0)))) {
                    break;
                }
                t4 = (t4 + 0x1);
                t2 = (t2 + 0x1);
                t3 = (t3 + 0x1);
                if ((int)t4 >= (int)t0) {
                    return 0x1;
                }
            }
            return 0x0;
        }
        return 0x1;
    }
    return 0x0;
}
