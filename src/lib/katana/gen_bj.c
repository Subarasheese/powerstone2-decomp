/* Straight-line functions with calls and guards (batch gen_bj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[4]; } Stk4;
struct o0_int { int v; };
struct o0_short { short v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o0_ushort { unsigned short v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10C0_uint { char p[0x10C0]; unsigned int v; };
struct o10C4_int { char p[0x10C4]; int v; };
struct o10C4_uint { char p[0x10C4]; unsigned int v; };
struct o10C8_int { char p[0x10C8]; int v; };
struct o10C8_uint { char p[0x10C8]; unsigned int v; };
struct o10CC_int { char p[0x10CC]; int v; };
struct o10CC_uint { char p[0x10CC]; unsigned int v; };
struct o10D0_int { char p[0x10D0]; int v; };
struct o10D0_uint { char p[0x10D0]; unsigned int v; };
struct o10D8_int { char p[0x10D8]; int v; };
struct o10D8_uint { char p[0x10D8]; unsigned int v; };
struct o10DC_int { char p[0x10DC]; int v; };
struct o10DC_uint { char p[0x10DC]; unsigned int v; };
struct o10E0_uint { char p[0x10E0]; unsigned int v; };
struct o10E4_int { char p[0x10E4]; int v; };
struct o10E4_uint { char p[0x10E4]; unsigned int v; };
struct o10F4_uint { char p[0x10F4]; unsigned int v; };
struct o13C_ushort { char p[0x13C]; unsigned short v; };
struct o14_int { char p[0x14]; int v; };
struct o1C_uchar { char p[0x1C]; unsigned char v; };
struct o2_short { char p[0x2]; short v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o20_int { char p[0x20]; int v; };
struct o24_uchar { char p[0x24]; unsigned char v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o37_uchar { char p[0x37]; unsigned char v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_uchar { char p[0x40]; unsigned char v; };
struct o44_int { char p[0x44]; int v; };
struct o48_int { char p[0x48]; int v; };
struct o4C_short { char p[0x4C]; short v; };
struct o54_int { char p[0x54]; int v; };
struct o60_ushort { char p[0x60]; unsigned short v; };
struct o61_uchar { char p[0x61]; unsigned char v; };
struct o64_uint { char p[0x64]; unsigned int v; };
struct o68_ushort { char p[0x68]; unsigned short v; };
struct o6A_ushort { char p[0x6A]; unsigned short v; };
struct o73_uchar { char p[0x73]; unsigned char v; };
struct o74_int { char p[0x74]; int v; };
struct o74_uchar { char p[0x74]; unsigned char v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o8_ushort { char p[0x8]; unsigned short v; };
struct o88_uint { char p[0x88]; unsigned int v; };
struct o8C_uint { char p[0x8C]; unsigned int v; };
struct o98_int { char p[0x98]; int v; };
struct oB4_int { char p[0xB4]; int v; };
struct oB8_uint { char p[0xB8]; unsigned int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oC4_uint { char p[0xC4]; unsigned int v; };
struct oD_uchar { char p[0xD]; unsigned char v; };
struct oFAC_uint { char p[0xFAC]; unsigned int v; };
struct oFB0_int { char p[0xFB0]; int v; };
struct oFBC_int { char p[0xFBC]; int v; };
struct oFBC_uint { char p[0xFBC]; unsigned int v; };
struct oFC0_uint { char p[0xFC0]; unsigned int v; };
int ADXB_GetCof(int);
int ADXB_GetFormat(int);
int ADXB_GetLpEndPos(int);
int ADXB_GetLpStartPos(int);
int ADXB_GetNumChan(int);
int ADXB_GetNumLoop(int);
int ADXB_GetOutBps(int);
int ADXB_GetSfreq(int);
int ADXB_GetTotalNumSmpl(int);
int FUN_0c178780(void);
int FUN_0c17b1a0(int, int, int);
int FUN_0c17dcc0(int, ...);
int FUN_0c18319c(void);
int FUN_0c183208(void);
int FUN_0c1839f8(int, int, int, int);
int FUN_0c183a4e(void);
int FUN_0c184000(int, int, int);
int FUN_0c1842e8(int, int, int);
int FUN_0c184f70(int);
int FUN_0c187990(int, int, int);
int libc_strcmp(int, int);
int FUN_0c187a88(int, int, int);
int FUN_0c18cbc8(int);
int FUN_0c18dfb0(int, int, int, int);
int FUN_0c18e9a0(int);
int FUN_0c18ea14(int);
int FUN_0c18ed76(int);
int FUN_0c191108(int);
int FUN_0c19114c(int);
int FUN_0c19158c(int, int);
int FUN_0c1916f6(int);
int FUN_0c191dbc(int, int, int, int);
int FUN_0c192164(int, int);
int FUN_0c1948a0(int);
int FUN_0c19497a(void);
int FUN_0c19aa52(int);
int FUN_0c19aee6(int, int);
int FUN_0c19d2b4(int, int, int, int);
int FUN_0c19da48(int, int, int, int);
int FUN_0c19fad2(int);
int FUN_0c2b6280(void);
int mwRnaStop(int);
int FUN_0c2cfda6(void);
int FUN_0c2d3dc4(void);
int FUN_0c2d3e10(void);
int FUN_0c2d4768(int, int);
int FUN_0c2d487c(int, int, int);
int FUN_0c2d4a24(int, ...);
int FUN_0c2d4c4c(void);
int FUN_0c2d63ba(void);
int FUN_0c2d63be(void);
int FUN_0c2d63c8(void);
int FUN_0c2d6458(void);
int FUN_0c2d7302(int);
int FUN_0c2d8788(int);
int FUN_0c2d8ab0(void);
int FUN_0c2d8cfc(int);
int FUN_0c2dbcd6(int);
int FUN_0c2dbce6(int);
int FUN_0c2dbcf4(int);
int FUN_0c2e715e(int);
int FUN_0c2e7200(int);
int FUN_0c2e732c(void);
int FUN_0c2e80c0(void);
int FUN_0c2eb978(int);
int FUN_0c2ebf6c(void);
int FUN_0c2ec410(int, int);
int FUN_0c2ec71a(void);
int FUN_0c2ef3e4(void);
int FUN_0c2f1c8c(void);
int FUN_0c2f23d4(int, int);
int FUN_0c2f258e(int, int, int, int);
int FUN_0c2f3c9c(int, int);
int FUN_0c2f7ee2(int);
int FUN_0c2fa4c4(int, int);
int FUN_0c2fa4ec(void);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int buFbrCreateFiber(int, int, int, int);
int buFbrCreateServer(int);
int buFbrInit(void);
int kmBeginScene(int);
int kmEndPass(int);
int kmEndScene(int);
int kmSetPaletteMode(int);
int kmiFBControl(int, int);
int kmiInitFBControl(void);
int kmiUnregisterInterruptHandler(int, int);
int kmiWriteDispModeRegisters(void);
int kmiWriteRegister(int, int);
int kmyGarbageCollection(void);
int kmyGetFreeSize(int, int);
int kmyInitializeFogTable(void);
int kmyRegisterCallback(int, int, int);
int kmytex_ABSalloc(int, int, int, int);
float math_ln_float(float);
int memset(int, int, int);
int mwRnaDestroy(int);
int nlInitPalette(int, int);
int nlMultiMatrix(int);
int nlMultiMatrix8(int);
int nlMultiMatrixRevOrder8(int);
int nlObjPutSetSpecularEyeDirectionF(float, float, float);
int nlPushMatrix(int);
int nlRand(void);
int nlSinf(float);
int nlSysMetricsDiffTime(int, int);
int nlsndG2Read(int);
int syChainDeleteHandler(int);
int thunk_FUN_0c191de2(void);
int FUN_0c1984fc(int a4);
int FUN_0c1a0d60(void);
int gdFsDaGetInfo(void);
int gdFsGetDrvStat(void);
int FUN_0c2c6030(void);
int FUN_0c2c6304(void);
int FUN_0c2c6728(void);
int FUN_0c2d6962(int a4, int a5, int a6, int a7);
int mpdrv_get_version(int a4, int a5);
int vmsfb_create(int a4, int a5, int a6);
void FUN_0c2dc160(int a4);
int FUN_0c2e24b8(int a4);
int FUN_0c2e24a0(int a4);
int FUN_0c2e2600(int a4);
void FUN_0c2e55d0(int a4);
int FUN_0c2e7230(int a4);
int FUN_0c2e737c(int a4);
int FUN_0c2ebf3e(void);
void FUN_0c2ecdec(int a4, int a5, int a6);
int kmyAllocateAreaWithAddress(int a4, int a5, int a6);
int FUN_0c2f2d58(int a4);
int FUN_0c177380(int a4);
int nlSysBeginScene(void);
int math_cos_float(float f4);
float math_rand_float(void);
void FUN_0c1831ba(int a4);
int FUN_0c18ec7c(void);
void FUN_0c191f5a(int a4);
void FUN_0c191f7c(int a4, int a5);
int FUN_0c193b80(void);
int FUN_0c197c58(int a4, int a5, int a6, int a7);
int FUN_0c19a640(int a4);
int FUN_0c19c082(int a4);
void md5_memset(int a4, int a5, int a6);
void FUN_0c2aeb54(int a4);
int gdFsGetNumRd(int a4);
int gdFsReinit(void);
int gdFsCreateHn(void);
int gdFsLoadDir(void);
int gdFsLoadDirFast(void);
int gdFsGetSysHn(void);
void gdFsExecServer(void);
void gdFsEntryErrFuncAll(void);
int FUN_0c2b9720(int a4, int a5, int a6, int a7);
int FUN_0c2b9760(int a4, int a5, int a6, int a7);
void FUN_0c2b9b3e(void);
void FUN_0c2c6048(int a4, int a5);
void FUN_0c2c631c(int a4, int a5);
void FUN_0c2c6740(int a4, int a5);
int kmiInitializeDisplayModule(int a4);
int kmyInitializeFog(void);
int FUN_0c2d4a7a(void);
int FUN_0c2d4a90(void);
int FUN_0c2d4aa6(void);
int FUN_0c2d4abc(void);
int FUN_0c2d6428(int a4);
int FUN_0c2d8294(int a4, int a5);
int FUN_0c2d82aa(int a4, int a5);
int mpdrv_frame_recv_post(void);
int vmsfb_init(void);
void FUN_0c2dc178(int a4);
int FUN_0c2e4720(void);
int FUN_0c2ebf28(void);
int FUN_0c2ebf56(void);
void FUN_0c2ece14(int a4, int a5);
void FUN_0c2f6bcc(void);
void FUN_0c2f7f3a(void);
int nlSysSetVertexBufferBaseAddress(int a4);
int FUN_0c1787c0(void);
int FUN_0c1787e0(void);
int nlsndRemainMem(void);
int FUN_0c190f66(int a4);
int FUN_0c19126a(void);
int FUN_0c19222a(int a4, int a5, int a6, int a7);
void FUN_0c19a2d0(int a4);
int FUN_0c2b160e(int a4);
int FUN_0c2b4a1a(int a4);
int FUN_0c2c3224(void);
int kmyInitializeCallback(int a4, int a5, int a6, int a7);
int kmyInitializeInterrupt(int a4, int a5, int a6, int a7);
int kmySetDisplayBpp(int a4);
int FUN_0c2cf7e0(void);
int FUN_0c2d37ca(void);
int FUN_0c2d49a0(Stk4 s);
int FUN_0c2db958(void);
int FUN_0c2e1ca8(void);
int FUN_0c2e55bc(void);
void FUN_0c2ee530(void);
void FUN_0c2f806c(int a4);
void FUN_0c17a6d0(int a4);
int FUN_0c17d5a0(int a4, int a5, int a6);
int nlObjPutSetLightDirectionV(int a4);
int FUN_0c1830c4(void);
int FUN_0c184c36(void);
void FUN_0c18cb48(int a4);
int FUN_0c18d426(int a4);
int FUN_0c18dad6(int a4);
int FUN_0c18e10c(int a4);
int FUN_0c18e11e(int a4);
int FUN_0c18e130(int a4);
int FUN_0c19337c(int a4);
int FUN_0c19d19c(int a4, int a5, int a6, int a7);
int FUN_0c19f75c(int a4);
int FUN_0c1a0cb4(int a4);
int FUN_0c1a0e90(int a4);
int syCfgInit(int a4);
int FUN_0c2b97fc(void);
int FUN_0c2b9d7e(int a4, int a5);
int FUN_0c2b9d90(void);
int vmsfs_c_exit(void);
int FUN_0c2c3112(int a4);
int ADXSTM_Init(void);
int FUN_0c2d0f58(void);
int FUN_0c2d0f6a(void);
int FUN_0c2d1944(void);
int FUN_0c2d38ea(void);
int FUN_0c2d6446(int a4);
int FUN_0c2d7750(void);
int mpdrv_get_deviceinfo(int a4);
int FUN_0c2e8702(void);
int FUN_0c2f8996(void);
int FUN_0c2fd2dc(void);
int nlSysMetricsScaleTime(int a4);
int FUN_0c179100(void);
int FUN_0c179130(void);
float FUN_0c1799f0(float f4);
float FUN_0c179a00(float f4);
int nlObjPutLoadTextureOnceGI(int a4, int a5, int a6, int a7);
int nlObjPutLoadTextureOnce(int a4, int a5, int a6, int a7);
int nlMakeModelProjectMatrix_objput(void);
int FUN_0c184bfc(int a4, int a5, int a6);
int FUN_0c184e64(int a4);
int FUN_0c184ddc(void);
int strcpy(int a4, int a5, int a6);
int FUN_0c18dfd6(void);
int FUN_0c18e01e(void);
int FUN_0c191d9e(void);
int FUN_0c191de2(void);
int FUN_0c19c072(int a4);
int FUN_0c19c906(int a4, int a5);
int FUN_0c19c916(int a4);
int FUN_0c19e882(int a4, int a5, int a6, int a7);
int kmSetFogDensity(int a4);
int kmSetFatalErrorCallback(int a4);
int kmSetPALEXTCallback(int a4);
int vmsfs_c_getstate(int a4);
void vmsfs_c_setfunc(int a4, int a5);
void copyBytes(int a4, int a5, int a6, int a7);
int FUN_0c2c389e(int a4);
int FUN_0c2c38c2(int a4);
int FUN_0c2c3922(int a4);
int FUN_0c2c3916(int a4);
int FUN_0c2c390a(int a4);
int FUN_0c2d4c0c(void);
int FUN_0c2d5f96(void);
int FUN_0c2d6008(void);
int FUN_0c2d8d9e(int a4);
int mpdrv_get_device(int a4);
int mpdrv_optimize(int a4);
void FUN_0c2e620e(void);
void FUN_0c2e8b3a(void);
int FUN_0c2ec8f4(void);
void FUN_0c2ece04(int a4, int a5);
void FUN_0c2ef364(void);
void FUN_0c2f37be(void);
void FUN_0c177bc0(int a4, int a5);
int nlSysMetricsCpuPowerStart(void);
int nlObjPutMvSetClosingMode(int a4);
int FUN_0c183aac(int a4);
int pl_ayame_frame_hook(int a4, int a5, int a6, int a7);
int FUN_0c185276(int a4);
int FUN_0c187d60(int a4, int a5);
int FUN_0c18ec6a(void);
int FUN_0c191e30(void);
int FUN_0c191f06(int a4, int a5, int a6, int a7);
int FUN_0c19d410(int a4, int a5);
int FUN_0c1a0254(int a4);
int syRtcFinish(void);
int FUN_0c2b7d20(void);
int FUN_0c2b7d60(int a4, int a5);
int FUN_0c2b9f98(int a4, int a5);
int FUN_0c2ba1c8(int a4, int a5);
int FUN_0c2ba286(int a4, int a5);
int FUN_0c2bca16(int a4);
int FUN_0c2bca24(int a4);
void FUN_0c2c607e(void);
void FUN_0c2c6352(void);
void FUN_0c2c6776(void);
int FUN_0c2cfc84(void);
int FUN_0c2d109e(void);
int FUN_0c2d37bc(void);
int FUN_0c2d589e(int a4);
int FUN_0c2d665e(void);
int FUN_0c2d7952(int a4);
int FUN_0c2d8734(void);
int FUN_0c2d8cbc(int a4, int a5, int a6, int a7);
int FUN_0c2d8cca(int a4, int a5, int a6, int a7);
int mpdrv_get_portstatus(int a4);
int mpdrv_swapmode(int a4);
int FUN_0c2d8d90(void);
int FUN_0c2f294e(int a4);
int FUN_0c2f295c(int a4);
void FUN_0c178450(void);
int nlExitSystem(void);
void sys_set_exception_area(int a4);
void FUN_0c0dd310(void);
int FUN_0c183280(void);
int FUN_0c18cfb8(int a4);
int FUN_0c191f70(int a4);
void FUN_0c19279c(void);
int FUN_0c194832(void);
int FUN_0c19486c(int a4);
int pdGetPeripheral(int a4);
int FUN_0c2c1f6c(int a4, int a5);
int FUN_0c2c1f80(int a4, int a5);
int FUN_0c2c1f94(int a4, int a5);
int FUN_0c2c1fa8(int a4, int a5);
int FUN_0c2c1fbc(int a4, int a5);
int FUN_0c2c1fd0(int a4, int a5);
int FUN_0c2c1fe4(int a4, int a5);
int FUN_0c2c1ff8(int a4, int a5);
int FUN_0c2c200c(int a4, int a5);
int FUN_0c2c2020(int a4, int a5);
int FUN_0c2c3892(int a4);
int FUN_0c2c38aa(int a4);
int FUN_0c2c38b6(int a4);
int FUN_0c2c38f2(int a4);
int FUN_0c2c38da(int a4);
int FUN_0c2c38e6(int a4);
int FUN_0c2c38fe(int a4);
int FUN_0c2c8f1c(int a4, int a5);
void FUN_0c2d49b4(void);
int FUN_0c2d673c(void);
int FUN_0c2d815a(int a4, int a5);
int FUN_0c2d86ae(int a4);
int mpdrv_timeout(int a4);
int mpdrv_init_memory(void);
int FUN_0c2ee764(void);
int FUN_0c2ef3bc(void);
int FUN_0c2ef3c8(void);
int FUN_0c2f2582(int a4, int a5, int a6, int a7);
int FUN_0c177140(void);
int FUN_0c178950(void);
int nlMultiPushedMatrix(void);
int FUN_0c193da4(void);
int FUN_0c193dae(void);
int FUN_0c19d296(int a4);
int FUN_0c19e784(int a4, int a5, int a6);
int FUN_0c19f6c0(int a4);
void mwRnaSetupSnd(int a4, int a5);
int gdFsSetGlobalErrG(int a4);
int ADXSJD_GetCof(int a4);
int FUN_0c2b16a0(void);
int FUN_0c2b176e(void);
int FUN_0c2b33a8(void);
int FUN_0c2b33bc(void);
int FUN_0c2b33d0(void);
int syCfgExit(void);
int FUN_0c2b49a6(int a4);
int FUN_0c2c20d8(int a4, int a5, int a6);
int FUN_0c2c2100(int a4, int a5, int a6);
void ADXERR_EntryErrFunc(int a4, int a5);
int FUN_0c2c3238(void);
int FUN_0c2cfa1c(void);
int FUN_0c2d550a(int a4);
int FUN_0c2d7fca(int a4);
int FUN_0c2d8dae(int a4);
int FUN_0c2d9ed4(void);
int FUN_0c2d9ede(int a4);
int FUN_0c2d9ee8(void);
int FUN_0c2d9ef2(int a4);
int FUN_0c2d9efc(void);
int FUN_0c2d9f1e(int a4);
int FUN_0c2d9f28(void);
int FUN_0c2d9f32(int a4);
int FUN_0c2d9f3c(void);
int FUN_0c2d9f56(void);
int FUN_0c2d9f6a(int a4);
int FUN_0c2d9f74(void);
int FUN_0c2d9f7e(int a4);
int FUN_0c2d9f88(void);
int FUN_0c2d9fb8(int a4);
int FUN_0c2d9fc2(void);
int FUN_0c2db8cc(int a4, int a5, int a6);
int FUN_0c2db8e0(int a4, int a5, int a6);
int FUN_0c2db8f4(int a4, int a5, int a6);
int FUN_0c2db908(int a4, int a5, int a6);
int ADXB_EntryAddWrFunc(int a4, int a5, int a6);
void FUN_0c2e1460(int a4);
void FUN_0c2e14a0(int a4);
void FUN_0c2e14e0(int a4);

int FUN_0c1984fc(int a4)
{
    FUN_0c18ed76(a4);
    FUN_0c18e9a0(a4);
    return 0x0;
}

int FUN_0c1a0d60(void)
{
    FUN_0c1916f6(((((struct o4_int *)0xC8B8538)->v)));
    FUN_0c1916f6(((((struct o0_int *)0xC8B8538)->v)));
    return 0x0;
}

int gdFsDaGetInfo(void)
{
    register int t0;
    register int t1;

    t0 = *(int *)0xC3036F0;
    if (t0 != 0) {
        t1 = (((struct o44_int *)(t0))->v);
        return ((int (*)(void))(t1))();
    }
    return 0x0;
}

int gdFsGetDrvStat(void)
{
    register int t0;
    register int t1;

    t0 = *(int *)0xC3036F0;
    if (t0 != 0) {
        t1 = (((struct o54_int *)(t0))->v);
        return ((int (*)(void))(t1))();
    }
    return 0x0;
}

int FUN_0c2c6030(void)
{
    register int t0;

    t0 = _builtin_get_imask();
    _builtin_set_imask(0xF);
    return t0;
}

int FUN_0c2c6304(void)
{
    register int t0;

    t0 = _builtin_get_imask();
    _builtin_set_imask(0xF);
    return t0;
}

int FUN_0c2c6728(void)
{
    register int t0;

    t0 = _builtin_get_imask();
    _builtin_set_imask(0xF);
    return t0;
}

int FUN_0c2d6962(int a4, int a5, int a6, int a7)
{
    register int t3;

    t3 = ((int (*)(int, int, int, int))((*(int *)((((((struct o0_int *)0xC8D26A8)->v)) + 0x8)))))(((((struct o4_int *)0xC8D26A8)->v)), a5, a6, a7);
    (((struct o4_uint *)0xC8D26A8)->v) = 0x0;
    return t3;
}

int mpdrv_get_version(int a4, int a5)
{
    register int t5;

    if (a4 != 0) {
        *(unsigned int *)((a4 + 0x0)) = ((((struct o0_int *)0xC300810)->v));
    }
    if (a5 != 0) {
        t5 = (((struct o4_int *)0xC300810)->v);
        *(unsigned int *)((a5 + 0x0)) = t5;
    }
    return t5;
}

int vmsfb_create(int a4, int a5, int a6)
{
    return buFbrCreateFiber((*(int *)0xC8D4D88), a4, a5, a6);
}

void FUN_0c2dc160(int a4)
{
    *(unsigned int *)((a4 + 0x0)) = (_builtin_get_imask());
    _builtin_set_imask(0xF);
}

int FUN_0c2e24b8(int a4)
{
    kmiWriteRegister(0xC0, a4);
    return 0x0;
}

int FUN_0c2e24a0(int a4)
{
    kmiWriteRegister(0xBC, a4);
    return 0x0;
}

int FUN_0c2e2600(int a4)
{
    kmiWriteRegister(0x108, a4);
    return 0x0;
}

void FUN_0c2e55d0(int a4)
{
    if ((int)(unsigned char)a4 < (int)0x4) {
        FUN_0c2f23d4(a4, 0xC8D6440);
    return;
    }
    *(unsigned char *)0xC8D6498 = 0x2;
}

int FUN_0c2e7230(int a4)
{
    register int t1;
    register int t3;
    register int t0;

    t1 = a4;
    for (;;) {
        if ((*(signed char *)((t1 + 0x0))) == 0) {
            break;
        }
        t3 = *(signed char *)((t1 + 0x0));
        t1 = (t1 + 0x1);
        t0 = (FUN_0c2e715e(t3));
    }
    return t0;
}

int FUN_0c2e737c(int a4)
{
    if ((unsigned int)(unsigned char)a4 < (unsigned int)0xF0) {
        return (*(int *)((0xC301740 + ((unsigned char)a4 << 2))));
    }
    return 0x1C200;
}

int FUN_0c2ebf3e(void)
{
    register int t0;

    t0 = *(signed char *)0xC8D67BA;
    if (((unsigned char)t0 & 4) != 0) {
        *(unsigned char *)0xC8D67BA = ((*(signed char *)0xC8D67BA) & 0xFB);
        return FUN_0c2ec71a();
    }
    return (unsigned char)t0;
}

void FUN_0c2ecdec(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    if ((unsigned int)0x0 < (unsigned int)a6) {
        t0 = a4;
        t1 = a5;
        t2 = 0x0;
        for (;;) {
            t3 = *(signed char *)((t1 + 0x0));
            t1 = (t1 + 0x1);
            t2 = (t2 + 0x1);
            *(unsigned char *)((t0 + 0x0)) = t3;
            t0 = (t0 + 0x1);
            if ((unsigned int)t2 >= (unsigned int)a6) {
                break;
            }
        }
    }
}

int kmyAllocateAreaWithAddress(int a4, int a5, int a6)
{
    return (kmytex_ABSalloc(a4, a5, a6, ((((unsigned int)(*(int *)((a6 + 0x0))) >= (unsigned int)(*(int *)0xC304134))) ? 1 : 0)));
}

int FUN_0c2f2d58(int a4)
{
    FUN_0c2e732c();
    FUN_0c2e7200(a4);
    return FUN_0c2e732c();
}

int FUN_0c177380(int a4)
{
    *(unsigned char *)0xC8B85C1 = a4;
    return kmSetPaletteMode((*(int *)(((a4 << 2) + 0xC205914))));
}

int nlSysBeginScene(void)
{
    *(unsigned int *)0xC83CFE4 = 0x1;
    kmBeginScene(0xC83CD8C);
    return 0x0;
}

int math_cos_float(float f4)
{
    return nlSinf(((-_builtin_fabsf(f4)) + (*(float *)0xC179760)));
}

float math_rand_float(void)
{
    register int t0;

    t0 = nlRand();
    return ((float)t0 * (*(float *)0xC179B44));
}

void FUN_0c1831ba(int a4)
{
    _builtin_set_imask(((unsigned int)(((a4 & 0xF) << 2) << 2) >> 4));
}

int FUN_0c18ec7c(void)
{
    FUN_0c187a88(0xC8A8FD8, 0xC8A8F0C, 0x4);
    return (*(int *)0xC8A8FD8);
}

void FUN_0c191f5a(int a4)
{
    _builtin_set_imask(((unsigned int)((((short)a4 & 0xF) << 2) << 2) >> 4));
}

void FUN_0c191f7c(int a4, int a5)
{
    if ((*(short *)0xC2AE76C) != 0) {
        *(unsigned short *)0xC2AE76C = 0x0;
        FUN_0c192164(0x81, a5);
    return;
    }
}

int FUN_0c193b80(void)
{
    int stk[5];

    return (FUN_0c184000(0x4101, ((int)stk + 0), ((int)stk + 0)));
}

int FUN_0c197c58(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t0;
    register int t1;
    register int t2;

    *(unsigned short *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 8)) = a5;
    *(unsigned short *)(((int)stk + 4)) = a6;
    t0 = *(short *)(((int)stk + 4));
    t1 = *(short *)(((int)stk + 0));
    t2 = *(int *)(((int)stk + 8));
    return ((int (*)(int, int, int, int))(t2))(t1, t0, a6, a7);
}

int FUN_0c19a640(int a4)
{
    (((struct o13C_ushort *)(((a4 * 0x174) + (*(int *)0xC8A73C0))))->v) = 0xFFFF;
    return 0x0;
}

int FUN_0c19c082(int a4)
{
    if (((*(signed char *)((a4 + 0xDB))) & 128) != 0) {
        return (*(int *)((a4 + 0x18)));
    }
    return ((*(int *)((a4 + 0x8))) + (*(int *)((a4 + 0x18))));
}

void md5_memset(int a4, int a5, int a6)
{
    register int t0;
    register int t1;

    if ((unsigned int)0x0 < (unsigned int)a6) {
        t0 = a4;
        t1 = 0x0;
        for (;;) {
            t1 = (t1 + 0x1);
            *(unsigned char *)((t0 + 0x0)) = a5;
            t0 = (t0 + 0x1);
            if ((unsigned int)t1 >= (unsigned int)a6) {
                break;
            }
        }
    }
}

void FUN_0c2aeb54(int a4)
{
    _builtin_set_imask(((unsigned int)((((*(int *)((a4 + 0x0))) & 0xF) << 2) << 2) >> 4));
}

int gdFsGetNumRd(int a4)
{
    if (a4 != 0) {
        if (((((struct o4C_short *)(a4))->v)) == 0) {
            return 0x0;
        }
        return (*(int *)((a4 + 0x14)));
    }
    return 0x0;
}

int gdFsReinit(void)
{
    register int t0;
    register int t1;

    t0 = *(int *)0xC3036F0;
    if (t0 != 0) {
        t1 = *(int *)((t0 + 0x10));
        return ((int (*)(void))(t1))();
    }
    return 0xFFFFFFFF;
}

int gdFsCreateHn(void)
{
    register int t0;
    register int t1;

    t0 = *(int *)0xC3036F0;
    if (t0 != 0) {
        t1 = *(int *)((t0 + 0x20));
        return ((int (*)(void))(t1))();
    }
    return 0x0;
}

int gdFsLoadDir(void)
{
    register int t0;
    register int t1;

    t0 = *(int *)0xC3036F0;
    if (t0 != 0) {
        t1 = *(int *)((t0 + 0x2C));
        return ((int (*)(void))(t1))();
    }
    return 0x0;
}

int gdFsLoadDirFast(void)
{
    register int t0;
    register int t1;

    t0 = *(int *)0xC3036F0;
    if (t0 != 0) {
        t1 = *(int *)((t0 + 0x3C));
        return ((int (*)(void))(t1))();
    }
    return 0x0;
}

int gdFsGetSysHn(void)
{
    register int t0;
    register int t1;

    t0 = *(int *)0xC3036F0;
    if (t0 != 0) {
        t1 = *(int *)((t0 + 0x34));
        return ((int (*)(void))(t1))();
    }
    return 0x0;
}

void gdFsExecServer(void)
{
    register int t0;

    t0 = *(int *)0xC3036F0;
    if (t0 != 0) {
        ((int (*)(void))(((((struct o48_int *)(t0))->v))))();
    return;
    }
}

void gdFsEntryErrFuncAll(void)
{
    register int t0;

    t0 = *(int *)0xC3036F0;
    if (t0 != 0) {
        ((int (*)(void))(((((struct o74_int *)(t0))->v))))();
    return;
    }
}

int FUN_0c2b9720(int a4, int a5, int a6, int a7)
{
    (((struct o0_uint *)0xC8BEFB0)->v) = a4;
    (((struct o8_uint *)0xC8BEFB0)->v) = a6;
    (((struct o4_uint *)0xC8BEFB0)->v) = a5;
    (((struct oC_uint *)0xC8BEFB0)->v) = a7;
    return 0x0;
}

int FUN_0c2b9760(int a4, int a5, int a6, int a7)
{
    (((struct o0_uint *)0xC8BEFC0)->v) = a4;
    (((struct o8_uint *)0xC8BEFC0)->v) = a6;
    (((struct o4_uint *)0xC8BEFC0)->v) = a5;
    (((struct oC_uint *)0xC8BEFC0)->v) = a7;
    return 0x0;
}

void FUN_0c2b9b3e(void)
{
    if ((*(signed char *)0xC8C0078) != 0) {
        ((int (*)(void))((*(int *)(((*(int *)0xC8BFFEC) + 0x8)))))();
    return;
    }
}

void FUN_0c2c6048(int a4, int a5)
{
    _builtin_set_imask(((unsigned int)(((a5 & 0xF) << 2) << 2) >> 4));
}

void FUN_0c2c631c(int a4, int a5)
{
    _builtin_set_imask(((unsigned int)(((a5 & 0xF) << 2) << 2) >> 4));
}

void FUN_0c2c6740(int a4, int a5)
{
    _builtin_set_imask(((unsigned int)(((a5 & 0xF) << 2) << 2) >> 4));
}

int kmiInitializeDisplayModule(int a4)
{
    register int t0;

    t0 = *(int *)((a4 + 0x8));
    *(unsigned int *)((t0 + 0x8)) = 0xC2CB300;
    (((struct oB8_uint *)(t0))->v) = 0x0;
    (((struct oC4_uint *)(t0))->v) = 0xC2CAA80;
    return kmiInitFBControl();
}

int kmyInitializeFog(void)
{
    memset(0xC8D077C, 0x0, 0x210);
    kmyInitializeFogTable();
    return 0x78;
}

int FUN_0c2d4a7a(void)
{
    register int t0;

    t0 = FUN_0c2d4768(0x702, 0x1);
    return FUN_0c2d487c(0x702, (t0 | 0x1), 0x1);
}

int FUN_0c2d4a90(void)
{
    register int t0;

    t0 = FUN_0c2d4768(0x702, 0x1);
    return FUN_0c2d487c(0x702, (t0 & 0xFFFE), 0x1);
}

int FUN_0c2d4aa6(void)
{
    register int t0;

    t0 = FUN_0c2d4768(0x701, 0x1);
    return FUN_0c2d487c(0x701, (t0 | 0x1), 0x1);
}

int FUN_0c2d4abc(void)
{
    register int t0;

    t0 = FUN_0c2d4768(0x701, 0x1);
    return FUN_0c2d487c(0x701, (t0 & 0xFFFE), 0x1);
}

int FUN_0c2d6428(int a4)
{
    register int t2;

    if ((signed char)a4 == 1) {
        t2 = ((*(signed char *)0xA0600480) & 0xFE);
    } else {
        t2 = ((*(signed char *)0xA0600480) | 0x1);
    }
    *(unsigned char *)0xA0600480 = t2;
    return t2;
}

int FUN_0c2d8294(int a4, int a5)
{
    register int t5;

    if ((*(int *)((a4 + 0x8))) != 0) {
        *(unsigned char *)((((((struct o54_int *)((*(int *)((a4 + 0x8)))))->v)) + 0x0)) = (*(signed char *)(((*(int *)((a5 + 0x4))) + 0x0)));
        t5 = 0x54;
    }
    return t5;
}

int FUN_0c2d82aa(int a4, int a5)
{
    register int t3;

    if ((*(int *)((a4 + 0x8))) != 0) {
        (((struct o73_uchar *)((*(int *)((a4 + 0xC)))))->v) = a5;
        (((struct o40_uchar *)((*(int *)((a4 + 0x8)))))->v) = a5;
        t3 = 0x40;
    }
    return t3;
}

int mpdrv_frame_recv_post(void)
{
    (((struct oFC0_uint *)((*(int *)0xC8D4D84)))->v) = 0x1;
    *(unsigned char *)(((*(int *)0xC2DB268) + 0x0)) = 0x0;
    return 0x0;
}

int vmsfb_init(void)
{
    register int t1;

    buFbrInit();
    t1 = buFbrCreateServer(0x8);
    *(unsigned int *)0xC8D4D88 = t1;
    return t1;
}

void FUN_0c2dc178(int a4)
{
    _builtin_set_imask(((unsigned int)((((*(int *)((a4 + 0x0))) & 0xF) << 2) << 2) >> 4));
}

int FUN_0c2e4720(void)
{
    *(volatile signed char *)0xC8D6455;
    
    return FUN_0c2d63c8();
}

int FUN_0c2ebf28(void)
{
    if (((unsigned char)(*(signed char *)0xC8D67BA) & 2) != 0) {
        FUN_0c2ebf3e();
    }
    return FUN_0c2eb978(0x9);
}

int FUN_0c2ebf56(void)
{
    if (((unsigned char)(*(signed char *)0xC8D67BA) & 2) != 0) {
        FUN_0c2ebf6c();
    }
    return FUN_0c2eb978(0x9);
}

void FUN_0c2ece14(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = a4;
    t1 = (a5 + 0x3);
    t2 = 0x4;
    for (;;) {
        t3 = *(signed char *)((t1 + 0x0));
        t2 = (t2 - 1);
        t1 = (t1 - 1);
        *(unsigned char *)((t0 + 0x0)) = t3;
        t0 = (t0 + 0x1);
        if (t2 == 0) {
            break;
        }
    }
}

void FUN_0c2f6bcc(void)
{
    (((struct o0_uint *)0xC8DFD40)->v) = 0xC8DF930;
    (((struct o4_uint *)0xC8DFD40)->v) = 0xC8DF930;
    (((struct o8_ushort *)0xC8DFD40)->v) = 0x0;
    (((struct oD_uchar *)0xC8DFD40)->v) = 0x0;
}

void FUN_0c2f7f3a(void)
{
    if ((*(signed char *)0xC8E0979) != 0) {
        (((struct o0_uchar *)0xC8E0979)->v) = 0x0;
        FUN_0c2f7ee2((*(short *)0xC8E098A));
    return;
    }
}

int nlSysSetVertexBufferBaseAddress(int a4)
{
    register int t0;

    t0 = *(int *)0xC83CF94;
    if (t0 == 1) {
        *(unsigned int *)0xC83CDB8 = (a4 | 0xA0000000);
    }
    return t0;
}

int FUN_0c1787c0(void)
{
    register int t0;
    register int t2;

    t0 = FUN_0c178780();
    t2 = nlSysMetricsDiffTime((*(int *)0xC86821C), t0);
    return nlSysMetricsScaleTime(t2);
}

int FUN_0c1787e0(void)
{
    register int t0;
    register int t2;

    t0 = FUN_0c178780();
    t2 = nlSysMetricsDiffTime((*(int *)0xC86821C), t0);
    return nlSysMetricsScaleTime(t2);
}

int nlsndRemainMem(void)
{
    register int t0;

    t0 = nlsndG2Read(0xA0800088);
    return (t0 - (*(int *)0xC86CC08));
}

int FUN_0c190f66(int a4)
{
    return (unsigned char)(*(signed char *)((0x142 + ((a4 * 0x174) + (*(int *)0xC8A73C0)))));
}

int FUN_0c19126a(void)
{
    (((struct o0_uint *)0xC8A97DC)->v) = 0x0;
    (((struct o4_uint *)0xC8A97DC)->v) = 0x1;
    (((struct o8_uint *)0xC8A97DC)->v) = 0x0;
    return 0x0;
}

int FUN_0c19222a(int a4, int a5, int a6, int a7)
{
    FUN_0c1839f8(0x1, a5, a6, a7);
    *(unsigned int *)0xC2AE770 = 0x0;
    return FUN_0c183a4e();
}

void FUN_0c19a2d0(int a4)
{
    register int t0;
    register int t1;

    t0 = a4;
    t1 = 0x174;
    for (;;) {
        if (t1 == 0) {
            break;
        }
        *(unsigned char *)((t0 + 0x0)) = 0x0;
        t1 = (t1 - 1);
        t0 = (t0 + 0x1);
    }
}

int FUN_0c2b160e(int a4)
{
    register int t0;

    t0 = *(int *)0xC8B9DA4;
    if (a4 == 0) {
        *(unsigned int *)0xC8B9DA4 = 0xC2FE8B4;
    } else {
        *(unsigned int *)0xC8B9DA4 = a4;
    }
    return t0;
}

int FUN_0c2b4a1a(int a4)
{
    (((struct o60_ushort *)(a4))->v) = 0x0;
    (((struct o64_uint *)(a4))->v) = 0x0;
    (((struct o68_ushort *)(a4))->v) = 0x0;
    (((struct o6A_ushort *)(a4))->v) = 0x0;
    return 0x6A;
}

int FUN_0c2c3224(void)
{
    FUN_0c2db958();
    return memset(0xC8CAC04, 0x0, 0x4C0);
}

int kmyInitializeCallback(int a4, int a5, int a6, int a7)
{
    register int t0;

    *(unsigned int *)0xC8D099C = 0xC2C8CA8;
    t0 = *(int *)0xC8D5F80;
    return ((int (*)(int, int, int, int))(t0))(0xC8D5F6C, 0xC8D0990, 0xC8D09A8, a7);
}

int kmyInitializeInterrupt(int a4, int a5, int a6, int a7)
{
    register int t0;

    *(unsigned int *)0xC8D0C74 = 0xC2C8F60;
    t0 = *(int *)0xC8D5F80;
    return ((int (*)(int, int, int, int))(t0))(0xC8D5F6C, 0xC8D0C68, 0xC8D0A30, a7);
}

int kmySetDisplayBpp(int a4)
{
    *(unsigned int *)0xC8D05D0 = a4;
    kmiFBControl(a4, 0x0);
    kmiWriteDispModeRegisters();
    return 0x0;
}

int FUN_0c2cf7e0(void)
{
    (((struct o1_uchar *)0xC8D6669)->v) = 0x1;
    (((struct o0_uchar *)0xC8D6669)->v) = 0x0;
    *(unsigned int *)0xC8D6670 = 0xC300254;
    return 0xC8D6669;
}

int FUN_0c2d37ca(void)
{
    register int t0;

    t0 = *(int *)0xC8D25F0;
    (((struct o1C_uchar *)(t0))->v) = ((*(signed char *)(((t0 + 0x1C) + 0x0))) & 0xFD);
    return FUN_0c2ec410(0xC8D2670, 0x1F4);
}

int FUN_0c2d49a0(Stk4 s)
{
    return (FUN_0c2d4a24(((short)(s.w[0] >> 0))));
}

int FUN_0c2db958(void)
{
    FUN_0c2f1c8c();
    return memset(0xC8D4D8C, 0x0, 0x560);
}

int FUN_0c2e1ca8(void)
{
    kmiWriteRegister(0x8, 0x7);
    return kmiWriteRegister(0x8, 0x0);
}

int FUN_0c2e55bc(void)
{
    FUN_0c2e715e((*(signed char *)0xC8D6526));
    return FUN_0c2e715e((*(signed char *)0xC8D6527));
}

void FUN_0c2ee530(void)
{
    if ((*(signed char *)0xC8D7104) != 0) {
        FUN_0c2d7302((*(short *)0xC8D710C));
    return;
    }
}

void FUN_0c2f806c(int a4)
{
    register int t0;

    t0 = (((struct o4_int *)0xC8E09CC)->v);
    (((struct o4_uint *)0xC8E09CC)->v) = (t0 + 0x1);
    *(unsigned char *)((((t0 + 0x1) - 0x1) + 0x0)) = a4;
    (((struct o0_ushort *)0xC8E09CC)->v) = (((((struct o0_short *)0xC8E09CC)->v)) + 0x1);
}

void FUN_0c17a6d0(int a4)
{
    *(unsigned int *)0xC868768 = (((*(int *)0xC868768) & 0xFFFCFFFF) | (a4 << 16));
}

int FUN_0c17d5a0(int a4, int a5, int a6)
{
    FUN_0c17b1a0(0xC8689A8, a5, a6);
    return nlMultiMatrix(0xC868968);
}

int nlObjPutSetLightDirectionV(int a4)
{
    return nlObjPutSetSpecularEyeDirectionF((*(float *)((a4 + 0x0))), ((((struct o4_float *)(a4))->v)), ((((struct o8_float *)(a4))->v)));
}

int FUN_0c1830c4(void)
{
    (((struct o4_uint *)0xC2A62A0)->v) = 0x0;
    (((struct o0_uint *)0xC2A62A0)->v) = 0x0;
    return syChainDeleteHandler((*(int *)0xC86CE94));
}

int FUN_0c184c36(void)
{
    return (FUN_0c1842e8(0x1, 0x0, 0x0));
}

void FUN_0c18cb48(int a4)
{
    (((struct o0_uchar *)0xC8A6F4C)->v) = (*(signed char *)((a4 + 0x0)));
    (((struct o1_uchar *)0xC8A6F4C)->v) = (*(signed char *)((a4 + 0x1)));
    (((struct o2_uchar *)0xC8A6F4C)->v) = (*(signed char *)((a4 + 0x2)));
    (((struct o3_uchar *)0xC8A6F4C)->v) = (*(signed char *)((a4 + 0x3)));
}

int FUN_0c18d426(int a4)
{
    return FUN_0c19aee6((*(short *)((a4 + 0x0))), (*(short *)((a4 + 0x2))));
}

int FUN_0c18dad6(int a4)
{
    return (((unsigned char)(unsigned short)a4 << 8) | ((int)(0xFF00 & (unsigned short)a4) >> 8));
}

int FUN_0c18e10c(int a4)
{
    return (((((*(int *)((a4 + 0x8))) & 0x3) == ((*(int *)((a4 + 0x4))) & 0x3))) ? 1 : 0);
}

int FUN_0c18e11e(int a4)
{
    return ((((*(int *)((a4 + 0x4))) & 0x3) * 0x60C) + (a4 + 0xC));
}

int FUN_0c18e130(int a4)
{
    return ((((*(int *)((a4 + 0x8))) & 0x3) * 0x60C) + (a4 + 0xC));
}

int FUN_0c19337c(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = a4;
    t1 = 0x0;
    for (;;) {
        t2 = *(signed char *)((t0 + 0x0));
        t0 = (t0 + 0x1);
        if ((unsigned char)t2 != 32) {
            break;
        }
        t1 = (t1 + 0x1);
    }
    return t1;
}

int FUN_0c19d19c(int a4, int a5, int a6, int a7)
{
    *(unsigned char *)((a4 + 0x2)) = ((*(signed char *)((a4 + 0x2))) & 0x3F);
    FUN_0c19da48(a4, a5, a6, a7);
    return 0x0;
}

int FUN_0c19f75c(int a4)
{
    return FUN_0c19fad2(((((struct o98_int *)((*(int *)((a4 + 0x30)))))->v)));
}

int FUN_0c1a0cb4(int a4)
{
    *(unsigned int *)0xC8B8530 = a4;
    FUN_0c19158c(a4, 0xC8B8520);
    return 0x0;
}

int FUN_0c1a0e90(int a4)
{
    return (((unsigned char)(unsigned short)a4 << 8) | ((int)(0xFF00 & (unsigned short)a4) >> 8));
}

int syCfgInit(int a4)
{
    if (a4 == 0) {
        return 0xFFFFFFFF;
    }
    *(unsigned int *)0xC303724 = a4;
    return 0x0;
}

int FUN_0c2b97fc(void)
{
    (((struct o0_uint *)0xC8C0068)->v) = 0xC2B988E;
    (((struct o4_uint *)0xC8C0068)->v) = 0xC2B99D8;
    (((struct o8_uint *)0xC8C0068)->v) = 0xC2B9A50;
    return 0xC8C0068;
}

int FUN_0c2b9d7e(int a4, int a5)
{
    register int t3;

    *(unsigned char *)((a4 + 0x0)) = (*(signed char *)((a5 + 0x0)));
    *(unsigned char *)((a4 + 0x1)) = (*(signed char *)((a5 + 0x1)));
    *(unsigned char *)((a4 + 0x2)) = (*(signed char *)((a5 + 0x2)));
    t3 = *(signed char *)((a5 + 0x3));
    *(unsigned char *)((a4 + 0x3)) = t3;
    return t3;
}

int FUN_0c2b9d90(void)
{
    FUN_0c2d8cfc(0xC8BFFFC);
    return FUN_0c2d7952(0xC8C0058);
}

int vmsfs_c_exit(void)
{
    memset(0xC8C21EC, 0x0, 0x400);
    return 0x0;
}

int FUN_0c2c3112(int a4)
{
    mwRnaStop(a4);
    return mwRnaDestroy(a4);
}

int ADXSTM_Init(void)
{
    memset(0xC8CB0C4, 0x0, 0xC80);
    return 0x1;
}

int FUN_0c2d0f58(void)
{
    register int t0;

    t0 = *(int *)0xC8D25F0;
    (((struct o24_uchar *)(t0))->v) = ((*(signed char *)(((t0 + 0x24) + 0x0))) | 0x10);
    return FUN_0c2d63ba();
}

int FUN_0c2d0f6a(void)
{
    register int t0;

    t0 = *(int *)0xC8D25F0;
    (((struct o24_uchar *)(t0))->v) = ((*(signed char *)(((t0 + 0x24) + 0x0))) & 0xEF);
    return FUN_0c2d63ba();
}

int FUN_0c2d1944(void)
{
    return (-((((((*(signed char *)((((*(int *)0xC8D25F0) + 0x78) + 0x0))) & 8) == 0)) ? 1 : 0) - 1));
}

int FUN_0c2d38ea(void)
{
    return (-((((((*(signed char *)((((*(int *)0xC8D25F0) + 0x3C) + 0x0))) & 16) == 0)) ? 1 : 0) - 1));
}

int FUN_0c2d6446(int a4)
{
    if ((signed char)a4 == 1) {
        return FUN_0c2d3dc4();
    }
    return FUN_0c2d3e10();
}

int FUN_0c2d7750(void)
{
    return ((((0x1 & (unsigned char)(*(signed char *)0xC8D2724)) == 0)) ? 1 : 0);
}

int mpdrv_get_deviceinfo(int a4)
{
    return (((*(int *)0xC8D4D84) + 0x44C) + (a4 * 0x78));
}

int FUN_0c2e8702(void)
{
    register int t0;

    t0 = *(signed char *)0xC8D6781;
    if (((unsigned char)t0 & 128) != 0) {
        return FUN_0c2e80c0();
    }
    return (unsigned char)t0;
}

int FUN_0c2f8996(void)
{
    register int t0;

    t0 = FUN_0c2d6458();
    *(unsigned char *)0xC8D6638 = 0x0;
    return t0;
}

int FUN_0c2fd2dc(void)
{
    register int t0;

    t0 = FUN_0c2d63be();
    *(unsigned char *)0xC8D66CF = 0x0;
    return t0;
}

int nlSysMetricsScaleTime(int a4)
{
    return (int)((float)a4 * (*(float *)0xC83D010));
}

int FUN_0c179100(void)
{
    kmEndScene(0xC83CD8C);
    return 0x0;
}

int FUN_0c179130(void)
{
    kmEndPass(0xC8A2E90);
    return 0x0;
}

float FUN_0c1799f0(float f4)
{
    register float t0;

    t0 = math_ln_float(f4);
    return (t0 / (*(float *)0xC179A3C));
}

float FUN_0c179a00(float f4)
{
    register float t0;

    t0 = math_ln_float(f4);
    return (t0 / (*(float *)0xC179A38));
}

int nlObjPutLoadTextureOnceGI(int a4, int a5, int a6, int a7)
{
    /* manual: r4-r7 pass through, the fifth argument on the stack */
    return (FUN_0c17dcc0(a4, a5, a6, a7, 0x1));
}

int nlObjPutLoadTextureOnce(int a4, int a5, int a6, int a7)
{
    /* manual: r4-r7 pass through, the fifth argument on the stack */
    return (FUN_0c17dcc0(a4, a5, a6, a7, 0x0));
}

int nlMakeModelProjectMatrix_objput(void)
{
    nlPushMatrix(0x0);
    return nlMultiMatrixRevOrder8(0xC868A50);
}


int FUN_0c184e64(int a4)
{
    *(unsigned short *)(((short)((short)a4 * (short)0xC24) + 0xC89C310)) = 0x0;
    return 0xC89C310;
}

int FUN_0c184ddc(void)
{
    register int t0;

    t0 = FUN_0c183208();
    return ((t0 << 2) << 2);
}


int FUN_0c18dfd6(void)
{
    register int t0;

    t0 = FUN_0c18319c();
    *(unsigned int *)0xC8A737C = t0;
    return t0;
}

int FUN_0c18e01e(void)
{
    register int t0;

    t0 = FUN_0c183208();
    return ((t0 << 2) << 2);
}

int FUN_0c191d9e(void)
{
    register int t0;

    t0 = FUN_0c18319c();
    *(unsigned int *)0xC8AA20C = t0;
    return t0;
}

int FUN_0c191de2(void)
{
    register int t0;

    t0 = FUN_0c183208();
    return ((t0 << 2) << 2);
}

int FUN_0c19c072(int a4)
{
    return ((unsigned short)(*(short *)0xC8A97C4) - ((((struct oB4_int *)(a4))->v)));
}

int FUN_0c19c906(int a4, int a5)
{
    *(unsigned char *)((a4 + 0x0)) = ((unsigned int)(unsigned short)a5 >> 8);
    *(unsigned char *)(((a4 + 0x1) + 0x0)) = a5;
    return ((a4 + 0x1) + 0x1);
}

int FUN_0c19c916(int a4)
{
    return (((unsigned char)(*(signed char *)((a4 + 0x0))) << 8) | (unsigned char)(*(signed char *)(((a4 + 0x1) + 0x0))));
}

int FUN_0c19e882(int a4, int a5, int a6, int a7)
{
    return FUN_0c19da48(((*(int *)((a4 + 0xC))) + 0x4), a5, a6, a7);
}

int kmSetFogDensity(int a4)
{
    (((struct oC_uint *)0xC8D097C)->v) = a4;
    (((struct o0_uint *)0xC8D097C)->v) = (((((struct o0_int *)0xC8D097C)->v)) | 0x2);
    return 0x0;
}

int kmSetFatalErrorCallback(int a4)
{
    return kmyRegisterCallback(0x8, a4, 0xC8BF104);
}

int kmSetPALEXTCallback(int a4)
{
    return kmyRegisterCallback(0xB, a4, 0xC8BF10C);
}

int vmsfs_c_getstate(int a4)
{
    return (*(int *)(((((((a4 << 2) << 2) << 2) << 1) + 0xC8C21EC) + 0x4)));
}

void vmsfs_c_setfunc(int a4, int a5)
{
    *(unsigned int *)(((((((a4 << 2) << 2) << 2) << 1) + 0xC8C21EC) + 0x8)) = a5;
}

void copyBytes(int a4, int a5, int a6, int a7)
{
    if ((int)a6 <= 0) {
        return;
    }
    ((int (*)(int, int, int, int))(0xC2C2150))(a4, a5, (a6 - 1), a7);
}

int FUN_0c2c389e(int a4)
{
    return ADXB_GetSfreq((*(int *)((a4 + 0x4))));
}

int FUN_0c2c38c2(int a4)
{
    return FUN_0c2dbcd6((*(int *)((a4 + 0x4))));
}

int FUN_0c2c3922(int a4)
{
    return ADXB_GetLpEndPos((*(int *)((a4 + 0x4))));
}

int FUN_0c2c3916(int a4)
{
    return FUN_0c2dbcf4((*(int *)((a4 + 0x4))));
}

int FUN_0c2c390a(int a4)
{
    return ADXB_GetLpStartPos((*(int *)((a4 + 0x4))));
}

int FUN_0c2d4c0c(void)
{
    FUN_0c2d4c4c();
    return FUN_0c2ec410(0xC8D2628, 0xA);
}

int FUN_0c2d5f96(void)
{
    return (FUN_0c2d4768(0x26F, 0x1));
}

int FUN_0c2d6008(void)
{
    return (FUN_0c2d4768(0x2E3, 0x1));
}

int FUN_0c2d8d9e(int a4)
{
    *(unsigned short *)((a4 + 0x2)) = 0x0;
    *(unsigned short *)((a4 + 0x4)) = 0x0;
    *(unsigned char *)((a4 + 0x6)) = 0x0;
    *(unsigned char *)((a4 + 0x7)) = 0x0;
    *(unsigned char *)((a4 + 0x0)) = 0x0;
    *(unsigned char *)((a4 + 0x1)) = 0x0;
    return 0x0;
}

int mpdrv_get_device(int a4)
{
    return (((*(int *)0xC8D4D84) + 0x28) + (a4 * 0x2C));
}

int mpdrv_optimize(int a4)
{
    (((struct o10E0_uint *)((*(int *)0xC8D4D84)))->v) = a4;
    (((struct o10E4_uint *)((*(int *)0xC8D4D84)))->v) = a4;
    return 0x10E4;
}

void FUN_0c2e620e(void)
{
    *(unsigned int *)0xC304178 = ((*(int *)0xC304178) + 0x1);
    *(unsigned char *)0xC8D6498 = 0x2;
}

void FUN_0c2e8b3a(void)
{
    (((struct o0_uchar *)0xC8D66F1)->v) = 0x0;
    (((struct o1_uchar *)0xC8D66F1)->v) = 0x0;
    (((struct o2_uchar *)0xC8D66F1)->v) = 0x0;
}

int FUN_0c2ec8f4(void)
{
    register int t0;

    t0 = *(signed char *)0xC8D677F;
    (((struct o0_uchar *)0xC8D677F)->v) = (t0 & 0xF7);
    (((struct o37_uchar *)0xC8D677F)->v) = 0x8;
    return (t0 & 0xF7);
}

void FUN_0c2ece04(int a4, int a5)
{
    *(unsigned char *)((a4 + 0x0)) = (*(signed char *)(((a5 + 0x1) + 0x0)));
    *(unsigned char *)(((a4 + 0x1) + 0x0)) = (*(signed char *)((((a5 + 0x1) - 1) + 0x0)));
}

void FUN_0c2ef364(void)
{
    if ((*(signed char *)0xC8D83D0) == 0) {
        *(unsigned char *)0xC8D83D0 = 0x1;
    }
}

void FUN_0c2f37be(void)
{
    if ((*(short *)0xC8DA100) != 0) {
        FUN_0c2f3c9c(0xC8DA102, (*(short *)0xC8DA100));
    return;
    }
}

void FUN_0c177bc0(int a4, int a5)
{
    *(unsigned int *)(((*(int *)0xC8A2E94) + 0x0)) = ((a5 << 16) | 0x800000);
}

int nlSysMetricsCpuPowerStart(void)
{
    register int t0;

    t0 = FUN_0c178780();
    *(unsigned int *)0xC86821C = t0;
    return t0;
}

int nlObjPutMvSetClosingMode(int a4)
{
    register int t0;

    t0 = a4;
    if (a4 != -1) {
        t0 = 0x1;
    }
    *(unsigned int *)0xC868B84 = t0;
    return a4;
}

int FUN_0c183aac(int a4)
{
    return (FUN_0c18cbc8(a4));
}

int pl_ayame_frame_hook(int a4, int a5, int a6, int a7)
{
    FUN_0c18dfb0(a4, a5, a6, a7);
    return 0x0;
}

int FUN_0c185276(int a4)
{
    if (a4 != -1) {
        return FUN_0c184f70(a4);
    }
    return a4;
}

int FUN_0c187d60(int a4, int a5)
{
    return (libc_strcmp(a4, a5));
}

int FUN_0c18ec6a(void)
{
    return (*(int *)(((FUN_0c18ea14(0x0)) + 0x2C)));
}


int FUN_0c191f06(int a4, int a5, int a6, int a7)
{
    int stk[1];

    *(unsigned short *)(((int)stk + 0)) = a4;
    return FUN_0c191dbc((unsigned short)(*(short *)(((int)stk + 0))), a5, a6, a7);
}

int FUN_0c19d410(int a4, int a5)
{
    int stk[1];

    *(unsigned char *)(((int)stk + 0)) = a5;
    return FUN_0c19d2b4(a4, 0x6, (*(signed char *)(((int)stk + 0))), 0x0);
}

int FUN_0c1a0254(int a4)
{
    if (a4 != 0) {
        *(unsigned char *)((a4 + 0xD)) = ((*(signed char *)((a4 + 0xD))) | 0x1);
    }
    return 0x0;
}

int syRtcFinish(void)
{
    (((struct o0_uint *)0xC8B9DD8)->v) = 0x0;
    return syChainDeleteHandler(((((struct o8_int *)0xC8B9DD8)->v)));
}

int FUN_0c2b7d20(void)
{
    return (kmyGarbageCollection());
}

int FUN_0c2b7d60(int a4, int a5)
{
    return (kmyGetFreeSize(a4, a5));
}

int FUN_0c2b9f98(int a4, int a5)
{
    FUN_0c2c1fa8(a4, a5);
    return 0x1;
}

int FUN_0c2ba1c8(int a4, int a5)
{
    return (FUN_0c2c1ff8(a4, a5));
}

int FUN_0c2ba286(int a4, int a5)
{
    FUN_0c2c1f94(a4, a5);
    return 0x1;
}

int FUN_0c2bca16(int a4)
{
    return (mpdrv_get_deviceinfo(a4));
}

int FUN_0c2bca24(int a4)
{
    return (mpdrv_get_portstatus(a4));
}

void FUN_0c2c607e(void)
{
    *(unsigned int *)0xC303DE0 = ((*(int *)0xC303DE0) - 1);
}

void FUN_0c2c6352(void)
{
    *(unsigned int *)0xC303E18 = ((*(int *)0xC303E18) - 1);
}

void FUN_0c2c6776(void)
{
    *(unsigned int *)0xC303E4C = ((*(int *)0xC303E4C) - 1);
}

int FUN_0c2cfc84(void)
{
    (((struct o3_uchar *)0xC8D25A8)->v) = 0x0;
    (((struct o2_uchar *)0xC8D25A8)->v) = 0x0;
    (((struct o1_uchar *)0xC8D25A8)->v) = 0x0;
    (((struct o0_uchar *)0xC8D25A8)->v) = 0x0;
    return 0x0;
}

int FUN_0c2d109e(void)
{
    register int t0;
    register int t1;

    t0 = *(int *)0xC8D25F0;
    t1 = *(signed char *)(((t0 + 0x24) + 0x0));
    (((struct o24_uchar *)(t0))->v) = (t1 | 0x80);
    return (t1 | 0x80);
}

int FUN_0c2d37bc(void)
{
    register int t0;
    register int t1;

    t0 = *(int *)0xC8D25F0;
    t1 = *(signed char *)(((t0 + 0x1C) + 0x0));
    (((struct o1C_uchar *)(t0))->v) = (t1 | 0x2);
    return (t1 | 0x2);
}

int FUN_0c2d589e(int a4)
{
    return (unsigned short)(FUN_0c2d4768(a4, 0x2));
}

int FUN_0c2d665e(void)
{
    (((struct o0_uchar *)0xC303FD1)->v) = 0x0;
    (((struct o1_uchar *)0xC303FD1)->v) = 0x0;
    return FUN_0c2d6428(0x1);
}

int FUN_0c2d7952(int a4)
{
    *(unsigned int *)((a4 + 0x8)) = 0x0;
    *(unsigned char *)((a4 + 0x0)) = 0x0;
    *(unsigned int *)((a4 + 0x4)) = 0xA;
    return a4;
}

int FUN_0c2d8734(void)
{
    (((struct o0_uint *)0xC8D3A48)->v) = 0xC8D3128;
    (((struct o4_uint *)0xC8D3A48)->v) = 0xC8D3638;
    return 0xC8D3A4C;
}

int FUN_0c2d8cbc(int a4, int a5, int a6, int a7)
{
    FUN_0c2d8788(0xC8D3128);
    return ((int (*)(int, int, int, int))(0xC2D8A9C))(0xC8D3638, a5, a6, a7);
}

int FUN_0c2d8cca(int a4, int a5, int a6, int a7)
{
    FUN_0c2d8ab0();
    return ((int (*)(int, int, int, int))(0xC2D87A6))(0xC8D3128, a5, a6, a7);
}

int mpdrv_get_portstatus(int a4)
{
    return (((*(int *)0xC8D4D84) + 0x4) + ((a4 << 2) << 1));
}

int mpdrv_swapmode(int a4)
{
    (((struct o10C4_uint *)((*(int *)0xC8D4D84)))->v) = (a4 & 0x1);
    return 0x10C4;
}

int FUN_0c2d8d90(void)
{
    FUN_0c2ef3e4();
    return 0x1;
}

int FUN_0c2f294e(int a4)
{
    FUN_0c2fa4c4(a4, 0xB);
    return FUN_0c2fa4ec();
}

int FUN_0c2f295c(int a4)
{
    FUN_0c2fa4c4(a4, 0x4);
    return FUN_0c2fa4ec();
}

void FUN_0c178450(void)
{
    *(unsigned int *)0xC83CD90 = ((*(int *)0xC83CD90) & 0xFFEFFFFF);
}

int nlExitSystem(void)
{
    return FUN_0c2b6280();
}

void sys_set_exception_area(int a4)
{
    *(unsigned int *)0xC2FE9B4 = 0x80000000;
    *(unsigned int *)0xC3036F8 = a4;
}

void FUN_0c0dd310(void)
{
    *(unsigned int *)0xC8A6C9C = 0x0;
    *(unsigned int *)0xC868B7C = 0x0;
}

int FUN_0c183280(void)
{
    return (((((struct o0_int *)0xC8A6F24)->v)) - ((((struct o20_int *)0xC8A6F24)->v)));
}

int FUN_0c18cfb8(int a4)
{
    return FUN_0c19aa52((*(short *)((a4 + 0x0))));
}

int FUN_0c191f70(int a4)
{
    return ((((int)(unsigned short)a4 >= (int)0x1)) ? 1 : 0);
}

void FUN_0c19279c(void)
{
    (((struct o0_uint *)0xC2AE780)->v) = 0xC8B14F0;
    (((struct o4_uint *)0xC2AE780)->v) = 0xC8B14F0;
}

int FUN_0c194832(void)
{
    return (FUN_0c19497a());
}

int FUN_0c19486c(int a4)
{
    return (FUN_0c1948a0(a4));
}

int pdGetPeripheral(int a4)
{
    return ((a4 * 0x34) + 0xC8B982C);
}

int FUN_0c2c1f6c(int a4, int a5)
{
    register int t0;

    t0 = *(int *)0x8C0000BC;
    return ((int (*)(int, int, int, int))(t0))(a4, a5, 0x0, 0x0);
}

int FUN_0c2c1f80(int a4, int a5)
{
    register int t0;

    t0 = *(int *)0x8C0000BC;
    return ((int (*)(int, int, int, int))(t0))(a4, a5, 0x0, 0x1);
}

int FUN_0c2c1f94(int a4, int a5)
{
    register int t0;

    t0 = *(int *)0x8C0000BC;
    return ((int (*)(int, int, int, int))(t0))(a4, a5, 0x0, 0x2);
}

int FUN_0c2c1fa8(int a4, int a5)
{
    register int t0;

    t0 = *(int *)0x8C0000BC;
    return ((int (*)(int, int, int, int))(t0))(a4, a5, 0x0, 0x3);
}

int FUN_0c2c1fbc(int a4, int a5)
{
    register int t0;

    t0 = *(int *)0x8C0000BC;
    return ((int (*)(int, int, int, int))(t0))(a4, a5, 0x0, 0x4);
}

int FUN_0c2c1fd0(int a4, int a5)
{
    register int t0;

    t0 = *(int *)0x8C0000BC;
    return ((int (*)(int, int, int, int))(t0))(a4, a5, 0x0, 0x5);
}

int FUN_0c2c1fe4(int a4, int a5)
{
    register int t0;

    t0 = *(int *)0x8C0000BC;
    return ((int (*)(int, int, int, int))(t0))(a4, a5, 0x0, 0x6);
}

int FUN_0c2c1ff8(int a4, int a5)
{
    register int t0;

    t0 = *(int *)0x8C0000BC;
    return ((int (*)(int, int, int, int))(t0))(a4, a5, 0x0, 0x7);
}

int FUN_0c2c200c(int a4, int a5)
{
    register int t0;

    t0 = *(int *)0x8C0000BC;
    return ((int (*)(int, int, int, int))(t0))(a4, a5, 0x0, 0x8);
}

int FUN_0c2c2020(int a4, int a5)
{
    register int t0;

    t0 = *(int *)0x8C0000BC;
    return ((int (*)(int, int, int, int))(t0))(a4, a5, 0x0, 0x9);
}

int FUN_0c2c3892(int a4)
{
    return ADXB_GetFormat((*(int *)((a4 + 0x4))));
}

int FUN_0c2c38aa(int a4)
{
    return ADXB_GetNumChan((*(int *)((a4 + 0x4))));
}

int FUN_0c2c38b6(int a4)
{
    return ADXB_GetOutBps((*(int *)((a4 + 0x4))));
}

int FUN_0c2c38f2(int a4)
{
    return ADXB_GetNumLoop((*(int *)((a4 + 0x4))));
}

int FUN_0c2c38da(int a4)
{
    return ADXB_GetTotalNumSmpl((*(int *)((a4 + 0x4))));
}

int FUN_0c2c38e6(int a4)
{
    return ADXB_GetCof((*(int *)((a4 + 0x4))));
}

int FUN_0c2c38fe(int a4)
{
    return FUN_0c2dbce6((*(int *)((a4 + 0x4))));
}

int FUN_0c2c8f1c(int a4, int a5)
{
    kmiUnregisterInterruptHandler(a4, a5);
    return 0x0;
}

void FUN_0c2d49b4(void)
{
    (((struct o0_uchar *)0xC8D2632)->v) = 0x0;
    (((struct o1_uchar *)0xC8D2632)->v) = 0x0;
}

int FUN_0c2d673c(void)
{
    return ((*(signed char *)0xA0600000) & 0xF);
}

int FUN_0c2d815a(int a4, int a5)
{
    (((struct o74_uchar *)((*(int *)((a4 + 0xC)))))->v) = (*(signed char *)(((*(int *)((a5 + 0x4))) + 0x0)));
    return 0x74;
}

int FUN_0c2d86ae(int a4)
{
    *(unsigned int *)((a4 + 0x4)) = (unsigned char)(*(signed char *)(((*(int *)((a4 + 0xC))) + 0x938)));
    return 0x938;
}

int mpdrv_timeout(int a4)
{
    (((struct o10C0_uint *)((*(int *)0xC8D4D84)))->v) = (a4 << 16);
    return 0x10C0;
}

int mpdrv_init_memory(void)
{
    (((struct o10F4_uint *)((*(int *)0xC8D4D84)))->v) = 0xA05F6C00;
    return 0x10F4;
}

int FUN_0c2ee764(void)
{
    return (FUN_0c2ef3c8());
}

int FUN_0c2ef3bc(void)
{
    return (((((struct o0_short *)0xC8D83BE)->v)) - ((((struct o2_short *)0xC8D83BE)->v)));
}

int FUN_0c2ef3c8(void)
{
    return (((((struct o0_short *)0xC8D83C2)->v)) - ((((struct o2_short *)0xC8D83C2)->v)));
}

int FUN_0c2f2582(int a4, int a5, int a6, int a7)
{
    return (FUN_0c2f258e(a4, a5, a6, a7));
}

int FUN_0c177140(void)
{
    return nlInitPalette(((((struct o14_int *)0xC8B85C4)->v)), ((((struct o0_short *)0xC8B85C4)->v)));
}

int FUN_0c178950(void)
{
    register int t0;

    t0 = *(int *)0xC83CDC4;
    *(unsigned int *)0xC83CDC4 = (t0 | 0xA0);
    return (t0 | 0xA0);
}

int nlMultiPushedMatrix(void)
{
    return nlMultiMatrix8(((*(int *)0xC86877C) - 64));
}

int FUN_0c193da4(void)
{
    *(unsigned short *)0xC2AE80E = 0x1;
    return 0x0;
}

int FUN_0c193dae(void)
{
    *(unsigned short *)0xC2AE80E = 0x0;
    return 0x0;
}

int FUN_0c19d296(int a4)
{
    return FUN_0c191108((a4 + 0x10));
}

int FUN_0c19e784(int a4, int a5, int a6)
{
    register int t0;

    t0 = *(int *)((a6 + 0x30));
    *(unsigned int *)((t0 + 0x0)) = a4;
    *(unsigned int *)((t0 + 0x4)) = a5;
    return 0x0;
}

int FUN_0c19f6c0(int a4)
{
    return FUN_0c19114c((a4 + 0x10));
}

void mwRnaSetupSnd(int a4, int a5)
{
    (((struct o0_uint *)0x8C00FFF0)->v) = a4;
    (((struct o4_uint *)0x8C00FFF0)->v) = a5;
}

int gdFsSetGlobalErrG(int a4)
{
    *(unsigned int *)(((*(int *)0xC3036E4) + 0x30)) = a4;
    return 0x1;
}

int ADXSJD_GetCof(int a4)
{
    return FUN_0c2bca16(a4);
}

int FUN_0c2b16a0(void)
{
    register int t1;

    t1 = *(int *)(((*(int *)0xC8B9DA4) + 0x0));
    return ((int (*)(void))(t1))();
}

int FUN_0c2b176e(void)
{
    register int t1;

    t1 = *(int *)(((*(int *)0xC8B9DA4) + 0x4));
    return ((int (*)(void))(t1))();
}

int FUN_0c2b33a8(void)
{
    register int t0;

    t0 = *(int *)0x8C0000B4;
    return ((int (*)(void))(t0))();
}

int FUN_0c2b33bc(void)
{
    register int t0;

    t0 = *(int *)0x8C0000B4;
    return ((int (*)(void))(t0))();
}

int FUN_0c2b33d0(void)
{
    register int t0;

    t0 = *(int *)0x8C0000B4;
    return ((int (*)(void))(t0))();
}

int syCfgExit(void)
{
    *(unsigned int *)0xC303724 = 0x0;
    return 0x0;
}

int FUN_0c2b49a6(int a4)
{
    return ((((*(signed char *)((a4 + 0x1))) == 5)) ? 1 : 0);
}

int FUN_0c2c20d8(int a4, int a5, int a6)
{
    register int t0;

    t0 = *(int *)0x8C0000B0;
    return ((int (*)(int, int, int, int))(t0))(a4, a5, a6, 0x0);
}

int FUN_0c2c2100(int a4, int a5, int a6)
{
    register int t0;

    t0 = *(int *)0x8C0000B0;
    return ((int (*)(int, int, int, int))(t0))(a4, a5, a6, 0x3);
}

void ADXERR_EntryErrFunc(int a4, int a5)
{
    (((struct o0_uint *)0xC303D8C)->v) = a4;
    (((struct o4_uint *)0xC303D8C)->v) = a5;
}

int FUN_0c2c3238(void)
{
    return memset(0xC8CAC04, 0x0, 0x4C0);
}

int FUN_0c2cfa1c(void)
{
    FUN_0c2cfc84();
    return FUN_0c2cfda6();
}

int FUN_0c2d550a(int a4)
{
    (((struct o40_uchar *)((*(int *)0xC8D25F0)))->v) = a4;
    return 0x40;
}

int FUN_0c2d7fca(int a4)
{
    (((struct o61_uchar *)((*(int *)((a4 + 0xC)))))->v) = 0x0;
    return 0x61;
}

int FUN_0c2d8dae(int a4)
{
    *(unsigned short *)((a4 + 0x4)) = 0x0;
    *(unsigned char *)((a4 + 0x7)) = 0x0;
    *(unsigned char *)((a4 + 0x1)) = 0x0;
    return 0x0;
}

int FUN_0c2d9ed4(void)
{
    return ((((struct o10C4_int *)((*(int *)0xC8D4D84)))->v));
}

int FUN_0c2d9ede(int a4)
{
    (((struct o10CC_uint *)((*(int *)0xC8D4D84)))->v) = a4;
    return 0x10CC;
}

int FUN_0c2d9ee8(void)
{
    return ((((struct o10CC_int *)((*(int *)0xC8D4D84)))->v));
}

int FUN_0c2d9ef2(int a4)
{
    (((struct o10D0_uint *)((*(int *)0xC8D4D84)))->v) = a4;
    return 0x10D0;
}

int FUN_0c2d9efc(void)
{
    return ((((struct o10D0_int *)((*(int *)0xC8D4D84)))->v));
}

int FUN_0c2d9f1e(int a4)
{
    (((struct o10C8_uint *)((*(int *)0xC8D4D84)))->v) = a4;
    return 0x10C8;
}

int FUN_0c2d9f28(void)
{
    return ((((struct o10C8_int *)((*(int *)0xC8D4D84)))->v));
}

int FUN_0c2d9f32(int a4)
{
    (((struct o10D8_uint *)((*(int *)0xC8D4D84)))->v) = a4;
    return 0x10D8;
}

int FUN_0c2d9f3c(void)
{
    return ((((struct o10D8_int *)((*(int *)0xC8D4D84)))->v));
}

int FUN_0c2d9f56(void)
{
    return ((((struct o10E4_int *)((*(int *)0xC8D4D84)))->v));
}

int FUN_0c2d9f6a(int a4)
{
    (((struct o10DC_uint *)((*(int *)0xC8D4D84)))->v) = a4;
    return 0x10DC;
}

int FUN_0c2d9f74(void)
{
    return ((((struct o10DC_int *)((*(int *)0xC8D4D84)))->v));
}

int FUN_0c2d9f7e(int a4)
{
    (((struct oFAC_uint *)((*(int *)0xC8D4D84)))->v) = a4;
    return 0xFAC;
}

int FUN_0c2d9f88(void)
{
    return ((((struct oFB0_int *)((*(int *)0xC8D4D84)))->v));
}

int FUN_0c2d9fb8(int a4)
{
    (((struct oFBC_uint *)((*(int *)0xC8D4D84)))->v) = a4;
    return 0xFBC;
}

int FUN_0c2d9fc2(void)
{
    return ((((struct oFBC_int *)((*(int *)0xC8D4D84)))->v));
}

int FUN_0c2db8cc(int a4, int a5, int a6)
{
    register int t0;

    t0 = *(int *)0x8C0000B8;
    return ((int (*)(int, int, int, int))(t0))(a4, a5, a6, 0x0);
}

int FUN_0c2db8e0(int a4, int a5, int a6)
{
    register int t0;

    t0 = *(int *)0x8C0000B8;
    return ((int (*)(int, int, int, int))(t0))(a4, a5, a6, 0x1);
}

int FUN_0c2db8f4(int a4, int a5, int a6)
{
    register int t0;

    t0 = *(int *)0x8C0000B8;
    return ((int (*)(int, int, int, int))(t0))(a4, a5, a6, 0x2);
}

int FUN_0c2db908(int a4, int a5, int a6)
{
    register int t0;

    t0 = *(int *)0x8C0000B8;
    return ((int (*)(int, int, int, int))(t0))(a4, a5, a6, 0x3);
}

int ADXB_EntryAddWrFunc(int a4, int a5, int a6)
{
    (((struct o88_uint *)(a4))->v) = a5;
    (((struct o8C_uint *)(a4))->v) = a6;
    return 0x8C;
}

void FUN_0c2e1460(int a4)
{
    *(unsigned int *)((a4 + 0x0)) = ((*(int *)((a4 + 0x0))) & 0xDFFFFFFF);
}

void FUN_0c2e14a0(int a4)
{
    *(unsigned int *)((a4 + 0x0)) = ((*(int *)((a4 + 0x0))) | 0x40000000);
}

void FUN_0c2e14e0(int a4)
{
    *(unsigned int *)((a4 + 0x0)) = ((*(int *)((a4 + 0x0))) | 0x20000000);
}

int FUN_0c184bfc(int a4, int a5, int a6)
{
    int k_;

    for (k_ = 0; (*(char *)(0xC89BC38 + k_) = *(char *)(a4 + k_)) != 0; k_++) ;  /* manual: _slow_strcpy r0 0x0C89BC38, r1 r4; returns r0 */
    return 0xC89BC38;
}

int strcpy(int a4, int a5, int a6)
{
    int k_;

    for (k_ = 0; (*(char *)(a4 + k_) = *(char *)(a5 + k_)) != 0; k_++) ;  /* manual: _slow_strcpy r0 r4, r1 r5; returns r0 */
    return a4;
}

