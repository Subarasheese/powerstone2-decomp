/* Straight-line functions with calls and guards (batch gen_bb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
struct o0_float { float v; };
struct o0_int { int v; };
struct o0_short { short v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o0_ushort { unsigned short v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_float { char p[0x10]; float v; };
struct o10_uchar { char p[0x10]; unsigned char v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o10F4_int { char p[0x10F4]; int v; };
struct o11_uchar { char p[0x11]; unsigned char v; };
struct o12_uchar { char p[0x12]; unsigned char v; };
struct o13E_uchar { char p[0x13E]; unsigned char v; };
struct o13F_uchar { char p[0x13F]; unsigned char v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o144_short { char p[0x144]; short v; };
struct o146_short { char p[0x146]; short v; };
struct o158_int { char p[0x158]; int v; };
struct o168_int { char p[0x168]; int v; };
struct o18_float { char p[0x18]; float v; };
struct o18_int { char p[0x18]; int v; };
struct o18_uchar { char p[0x18]; unsigned char v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o2_short { char p[0x2]; short v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o20_int { char p[0x20]; int v; };
struct o20_uchar { char p[0x20]; unsigned char v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o23_uchar { char p[0x23]; unsigned char v; };
struct o24_float { char p[0x24]; float v; };
struct o24_int { char p[0x24]; int v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o28_float { char p[0x28]; float v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o2C_uint { char p[0x2C]; unsigned int v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o39_uchar { char p[0x39]; unsigned char v; };
struct o3C_int { char p[0x3C]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o48_uchar { char p[0x48]; unsigned char v; };
struct o6_uchar { char p[0x6]; unsigned char v; };
struct o7_uchar { char p[0x7]; unsigned char v; };
struct o74_int { char p[0x74]; int v; };
struct o78_int { char p[0x78]; int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o9_uchar { char p[0x9]; unsigned char v; };
struct oA_uchar { char p[0xA]; unsigned char v; };
struct oB_uchar { char p[0xB]; unsigned char v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uchar { char p[0xC]; unsigned char v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oC8_uint { char p[0xC8]; unsigned int v; };
struct oCC_uint { char p[0xCC]; unsigned int v; };
struct oD4_uint { char p[0xD4]; unsigned int v; };
struct oFC0_int { char p[0xFC0]; int v; };
struct oFCC_int { char p[0xFCC]; int v; };
struct oFCC_uint { char p[0xFCC]; unsigned int v; };
struct oFD8_int { char p[0xFD8]; int v; };
struct oFD8_uint { char p[0xFD8]; unsigned int v; };
struct oFDC_int { char p[0xFDC]; int v; };
struct oFDC_uint { char p[0xFDC]; unsigned int v; };
int FUN_0c177450(void);
int FUN_0c177da0(void);
int FUN_0c180d72(int);
int FUN_0c181b6a(int);
int FUN_0c183280(void);
int FUN_0c18329e(void);
int FUN_0c183480(int, int, int);
int FUN_0c18353e(int, int, int);
int FUN_0c187a88(int, int, int);
int FUN_0c187cac(int, int, int, int, int);
int FUN_0c188260(int, int);
int FUN_0c188262(int, int, float);
int FUN_0c18dd2a(int, int, int);
int FUN_0c18e584(int);
int FUN_0c18ea14(int);
int FUN_0c18ea3e(int);
int FUN_0c18ed16(void);
int FUN_0c19114c(int);
int FUN_0c191850(int);
int FUN_0c191aaa(int, int);
int FUN_0c191af2(int);
int FUN_0c191d9e(void);
int FUN_0c191dae(void);
int FUN_0c191f2c(void);
int FUN_0c191f5a(int);
int FUN_0c197bfe(int, int, int, int);
int FUN_0c197c7c(void);
int FUN_0c197c80(int);
int FUN_0c197d2e(int);
int FUN_0c198540(int, int, int, int);
int FUN_0c19862e(int, int, int, int);
int FUN_0c19a91c(int);
int FUN_0c19acca(int, int);
int FUN_0c19aeae(int, int);
int FUN_0c19af74(int);
int FUN_0c19d1ae(int);
int FUN_0c19d3a0(int);
int FUN_0c19e64a(int);
int FUN_0c19e784(int, int, int);
int FUN_0c19e78e(int);
int FUN_0c1a02cc(int, int, int);
int FUN_0c1a0cf6(void);
int FUN_0c1a0d78(int);
int FUN_0c1a1126(int, int, int);
int FUN_0c2b160e(int);
int FUN_0c2b176e(int);
int FUN_0c2b7d20(void);
int FUN_0c2b9720(int, int, int, int);
int FUN_0c2b97a0(int, int);
extern int FUN_0c2b9814();
int FUN_0c2b9c3c(void);
int FUN_0c2b9c74(int, int, int);
int FUN_0c2b9d7e(int, int);
int FUN_0c2bca16(int);
int FUN_0c2c6030(void);
int FUN_0c2c6048(int, int);
int FUN_0c2cbee0(void);
int FUN_0c2cc2c2(void);
int FUN_0c2cfc76(int);
int FUN_0c2cfc7e(int);
int FUN_0c2d32ea(void);
int FUN_0c2d410c(int, int);
int FUN_0c2d4768(int, int);
int FUN_0c2d487c(int, int, int);
int FUN_0c2d4ad2(void);
int FUN_0c2d665e(void);
int FUN_0c2d67ba(void);
int FUN_0c2d67cc(int, int);
int FUN_0c2d6804(int, int);
int FUN_0c2d7148(void);
int FUN_0c2dc160(int);
int FUN_0c2dc178(int);
int FUN_0c2dc1ae(int, ...);
int FUN_0c2e737c(int);
int FUN_0c2e8238(void);
int FUN_0c2e83ae(void);
int FUN_0c2e8496(void);
int FUN_0c2ec410(int, int);
int FUN_0c2ec45e(void);
int FUN_0c2ecd24(int, int, int, int);
int FUN_0c2ee4ba(int);
int FUN_0c2ef9c0(void);
int FUN_0c2efa1a(void);
int FUN_0c2f94d4(int, int, int, int);
int FUN_0c2fa4c4(int, int);
int FUN_0c2fa4cc(int, int, int);
int FUN_0c2fa4ec(void);
extern float _builtin_fipr(float *, float *);
extern int _builtin_get_imask(void);
extern void _builtin_ld_ext(float (*)[4]);
extern void _builtin_set_imask(int);
extern float _builtin_sqrtf(float);
extern void _builtin_st_ext(float (*)[4]);
extern int _builtin_tas(char *);
float _in_coss(float);
static float iaFsrra(float x)
{
    return _builtin_fsrra(x);
}
int kdGetDevice(int);
int kdSetHandler(int, int);
int kmSetFogTableColor(int, ...);
int kmiFLWCTRLCheckFreeNBuf(void);
int kmiStartupDMA(void);
int kmiWriteRegister(int, int);
int kmyGetDisplayParametersInfo(int, int, int);
int kmyMemCopy(int, int, int);
int kmyMoveParameterBoundary(int, int, int);
int kmyiCheckRenderPacket(int);
int kmyiInitializeDriverObject(int, int);
int memset(int, int, int);
int mpdrv_dpf(int, int, int, int, int);
int mpdrv_set_bwrite_ns(int, int, int, int, int, int, int);
int mwlRnaExecSvrHndl(int, int, int, int, int, int, int, int);
int nlCreateTextureParamA(int);
int nlPuts(int);
int set_file_info(int, int, int, int);
int syCblCheckBroadcast(void);
int syCblCheckCable(void);
int syMmuDeleteEntry(int, int, int);
int syRtcGetDate(int);
int thunk_FUN_0c191de2(void);
int thunk_FUN_0c2d5f2e(int);
int vmsfs_c_getstate(int);
int vmsfs_c_setfunc(int, int);
int vmsfs_c_setparam(int, int, int, int, int, int, int);
int vsprintf(int, int, int);
int FUN_0c18ed2e(int a4);
int mwRnaExecServer(void);
int FUN_0c2b15c8(int a4, int a5);
int sys_get_video_standard(void);
int FUN_0c2b9bf6(void);
int syMmuDeleteAllEntries(int a4, int a5, int a6);
int FUN_0c2d1672(void);
int FUN_0c2d707a(int a4, int a5);
float FUN_0c17c450(int a4);
int FUN_0c191108(int a4);
int FUN_0c1920b0(int a4, int a5);
int FUN_0c19aaac(int a4, int a5);
int FUN_0c19c678(int a4, int a5, int a6, int a7);
int memcpy(int a4, int a5, int a6, int a7);
int FUN_0c1a3150(int a4, int a5);
int buDefragDisk(int a4, int a5);
int kmSetCheapShadowMode(int a4);
int FUN_0c2d68f4(int a4);
int mpdrv_insertnop(int a4);
int FUN_0c2fe278(void);
int nlSetLightDirection(int a4);
int nlLineFog(int a4);
void FUN_0c1832a4(int a4, int a5, int a6, int a7);
int FUN_0c18d1fa(int a4, int a5, int a6, int a7);
int FUN_0c195b9c(int a4, int a5, int a6, int a7);
int FUN_0c197cec(int a4);
int FUN_0c19c898(int a4, int a5);
int FUN_0c1a03de(int a4, int a5, int a6);
int FUN_0c2b5ea0(int a4, int a5, int a6);
int FUN_0c0ffdba(void);
int VQAllocEntry(void);
int mpdrv_frame_recv_pre(int a4, int a5, int a6, int a7);
int mwSbGetTrnsStat(int a4, int a5);
int FUN_0c2e638e(void);
int FUN_0c2efa6e(void);
int FUN_0c178ef0(int a4);
int nlPopMatrix(int a4);
int nlobjput_sub(int a4);
int nlobjput_sub_trnsl(int a4, float f4);
int FUN_0c183034(void);
int FUN_0c191874(int a4, int a5);
int FUN_0c1920f8(int a4);
int FUN_0c19a8ce(int a4);
int FUN_0c19c018(int a4, int a5, int a6, int a7);
int FUN_0c19e892(int a4, int a5);
int FUN_0c1a2074(int a4, int a5, int a6);
int fmMngWrite(int a4, int a5);
int mwRnaGetPitch(int a4, int a5, int a6);
int SJMEM_PutChunk(int a4, int a5, int a6, int a7);
int FUN_0c2c79e6(int a4, int a5);
int kmyWriteFogTable(void);
int kmiFLWCTRLOBJOverflowCallback(void);
int vmsio_isready(int a4);
int FUN_0c2ef958(void);
int FUN_0c2f7684(int a4, int a5);
int FUN_0c2f7d10(int a4, int a5);
int nlCommonTextureGarbageCollection(void);
int FUN_0c184442(void);
int FUN_0c184dec(int a4);
int FUN_0c187d98(int a4, int a5, int a6);
int FUN_0c18cbc8(int a4);
int FUN_0c18ed76(int a4);
int FUN_0c1918b4(int a4, int a5);
int FUN_0c19d250(int a4, int a5);
int FUN_0c19ec2c(int a4);
int FUN_0c1a1188(int a4, int a5, int a6, int a7);
int _pd_peripheral_set_null(int a4);
int FUN_0c2b99d8(void);
int search_exec_file(int a4, int a5);
int FUN_0c2c30aa(int a4, int a5, int a6, int a7, int a8, int a9, int a10);
int FUN_0c2cbcc0(int a4);
int kmiSetDisplayClipSize(void);
int FUN_0c2d2d4a(void);
int FUN_0c2d58b2(int a4, int a5);
int FUN_0c2e8afc(int a4);
int FUN_0c2e8a7c(int a4, int a5, int a6);
int FUN_0c2edc3c(int a4, int a5, int a6, int a7);
int FUN_0c2f29f6(int a4);
int dbg_printf(Stk3 s);
int FUN_0c180124(int a4);
int FUN_0c1829f8(int a4);
int FUN_0c183140(int a4, int a5, int a6, int a7);
int FUN_0c184a90(int a4, int a5, int a6, int a7, int a8, int a9);
int FUN_0c18e8bc(void);
int FUN_0c18eeae(int a4, int a5);
int FUN_0c192074(int a4, int a5, int a6);
int FUN_0c1988b6(int a4);
int syRtcMakeDayOfWeek(int a4, int a5, int a6);
void buDisableServer(void);
int kmEndScene(int a4);
int vmsfs_init_work_new(int a4);
int vmsfs_dpf(int a4, int a5, int a6, int a7, int a8, int a9, int a10);
int FUN_0c2d3af2(int a4);
int FUN_0c2d54ce(void);
int FUN_0c2d6754(int a4, int a5, int a6, int a7);
int kmyReleaseRenderPacket(int a4);
int FUN_0c2e4200(int a4);
int FUN_0c2e81dc(void);
int FUN_0c2e8150(void);
int FUN_0c2f296a(int a4, int a5);
int FUN_0c2f3d0c(void);
int FUN_0c2f5a22(int a4);
int FUN_0c2faa70(void);
int gfx_set_fog_color(int a4);
int nl_action_PixelClipping(void);
int FUN_0c181890(int a4, int a5, int a6);
int FUN_0c181906(int a4, int a5, int a6);
int FUN_0c184e2a(void);
int FUN_0c18e54a(int a4);
int FUN_0c18e8f8(void);
int FUN_0c19139e(int a4, int a5);
int FUN_0c1931c0(void);
float acosf(float f4);
int FUN_0c2b0ea4(void);
int ADXF_Init(void);
int mwRnaSetSfreq(int a4, int a5, int a6, int a7);
int kmyRequestDMA(int a4);
int kmyInitializeDriver(int a4, int a5, int a6, int a7);
int mpdrv_hreset(int a4);
int mpdrv_set_bwrite(int a4, int a5, int a6, int a7, int a8, int a9, int a10);
int FUN_0c2e80c0(void);

int FUN_0c18ed2e(int a4)
{
    register int t0;
    register int t1;
    int t2;
    register int t3;

    t0 = FUN_0c18ea14(a4);
    if (t0 != 0) {
        t1 = *(int *)((t0 + 0x8));
        t2 = *(int *)((t0 + 0x14));
        t3 = FUN_0c198540((t1 & t2), t2, t1, 0x0);
        if (t3 != 0) {
            return 0xFFFFFFFF;
        }
        return 0x0;
    }
    return 0xFFFFFFFF;
}

int mwRnaExecServer(void)
{
    int stk[6];
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t8;
    register int t9;

    FUN_0c2dc160(((int)stk + 0));
    t1 = 0xC8CD46C;
    t2 = 0xC8CD46C;
    t3 = 0xC8CD46C;
    t4 = 0xC8CD46C;
    for (;;) {
        if ((unsigned char)(*(signed char *)((t4 + 0x0))) == 1) {
            t1 = t3;
            mwlRnaExecSvrHndl(t1, t2, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12));
        } else {
            t8 = t1;
            t9 = t2;
        }
        t4 = (t4 + 0x90);
        t1 = t8;
        t2 = t9;
        t3 = (t3 + 0x90);
        if ((unsigned int)t4 >= (unsigned int)0xC8CD8EC) {
            break;
        }
    }
    return (FUN_0c2dc178(((int)stk + 0)));
}

int FUN_0c2b15c8(int a4, int a5)
{
    register int t1;

    (((struct o24_uint *)0xC8B9DA8)->v) = ((a4 + 0x1F) & 0xFFFFFFE0);
    (((struct o2C_uint *)0xC8B9DA8)->v) = ((a4 + 0x1F) & 0xFFFFFFE0);
    (((struct o28_uint *)0xC8B9DA8)->v) = (a5 & 0xFFFFFFE0);
    (((struct o20_uint *)0xC8B9DA8)->v) = 0xC8B9DA8;
    (((struct o0_uint *)0xC8B9DA8)->v) = 0xC8B9DA8;
    (((struct o4_uint *)0xC8B9DA8)->v) = 0x0;
    FUN_0c2b160e(0x0);
    t1 = (((struct o24_int *)0xC8B9DA8)->v);
    *(unsigned int *)((t1 + 0x4)) = ((unsigned int)((unsigned int)((unsigned int)(a5 & 0xFFFFFFE0) >> 2) >> 2) >> 1);
    return FUN_0c2b176e((t1 + 0x20));
}

int sys_get_video_standard(void)
{
    register int t0;
    int t1;

    t0 = syCblCheckCable();
    t1 = syCblCheckBroadcast();
    if (t0 == 0) {
        return 0x1;
    }
    if ((t1 != 1) && (t1 != 3)) {
        return 0x0;
    }
    return 0x2;
}

int FUN_0c2b9bf6(void)
{
    int stk[6];
    register int t1;
    register int t9;

    if ((*(signed char *)0xC303C0C) == 0) {
        t1 = FUN_0c2cfc76((((int)stk + 0) + 0x4));
        *(unsigned short *)(((int)stk + 8)) = t1;
        FUN_0c187a88((*(int *)(((int)stk + 4))), 0xC8C0086, (unsigned short)t1);
        FUN_0c2d68f4((((int)stk + 0) + 0xC));
        FUN_0c2b9c74(0xC8C007E, (((int)stk + 0) + 0xC), 0xC8C0079);
        FUN_0c2cfc7e(((int)stk + 0));
        t9 = (FUN_0c2b9d7e((*(int *)(((int)stk + 0))), 0xC8C0079));
    }
    return t9;
}

int syMmuDeleteAllEntries(int a4, int a5, int a6)
{
    register int t0;
    register int t1;

    t0 = 0xC8C1B84;
    for (;;) {
        if ((unsigned int)t0 >= (unsigned int)0xC8C1BC4) {
            break;
        }
        t1 = *(int *)((t0 + 0x0));
        t0 = (t0 + 0x4);
        syMmuDeleteEntry(t1, a5, a6);
    }
    t0 = 0xC8C1BC4;
    for (;;) {
        if ((unsigned int)t0 >= (unsigned int)0xC8C1BE4) {
            break;
        }
        t1 = *(int *)((t0 + 0x0));
        t0 = (t0 + 0x4);
        syMmuDeleteEntry(t1, a5, a6);
    }
    return (syMmuDeleteEntry((*(int *)0xC8C1BE4), a5, a6));
}

int FUN_0c2d1672(void)
{
    register int t0;

    t0 = *(int *)0xC8D25F0;
    (((struct o20_uchar *)(t0))->v) = ((*(signed char *)(((t0 + 0x20) + 0x0))) & 0xFE);
    FUN_0c2d487c(0x281, 0x0, 0x1);
    FUN_0c2d487c(0x280, 0x0, 0x1);
    FUN_0c2d487c(0x283, 0x0, 0x1);
    FUN_0c2d487c(0x282, 0x0, 0x1);
    (((struct o48_uchar *)((*(int *)0xC8D25F0)))->v) = 0x83;
    return FUN_0c2d4ad2();
}

int FUN_0c2d707a(int a4, int a5)
{
    register int t0;

    *(unsigned int *)0xC8D708C = a4;
    if ((int)(unsigned char)a5 <= (int)0x7F) {
        *(unsigned char *)(((a4 + 0x1) + 0x0)) = a5;
        (((struct o0_uchar *)0xC8D6786)->v) = ((*(signed char *)0xC8D6786) | 0x20);
        t0 = *(int *)0xC8D708C;
        *(unsigned char *)((t0 + 0x0)) = ((*(signed char *)((t0 + 0x0))) & 0x7F);
    } else {
        t0 = *(int *)0xC8D708C;
        *(unsigned char *)((t0 + 0x0)) = ((*(signed char *)((t0 + 0x0))) | 0x80);
    }
    (((struct o7_uchar *)0xC8D6786)->v) = ((*(signed char *)0xC8D678D) & 0xE0);
    t0 = *(signed char *)0xC8D6786;
    (((struct o0_uchar *)0xC8D6786)->v) = (t0 & 0xFC);
    *(unsigned int *)0xC8D7028 = (*(int *)0xC8D67BC);
    return (t0 & 0xFC);
}

float FUN_0c17c450(int a4)
{
    register float u0;
    register float u1;
    register float u2;
    register float u5;
    register float u6;
    float u3[4];
    float u4[4];

    u0 = *(float *)((a4 + 0x0));
    u1 = (((struct o4_float *)(a4))->v);
    u2 = (((struct o4_float *)((a4 + 0x4)))->v);
    u3[0] = u0;
    u3[1] = u1;
    u3[2] = u2;
    u3[3] = 0.0f;
    u4[0] = u0;
    u4[1] = u1;
    u4[2] = u2;
    u4[3] = 0.0f;
    u5 = _builtin_fipr(u3, u4);
    u6 = iaFsrra(u5);
    *(float *)((((a4 + 0xC) - 0x4) + 0x0)) = (u2 * u6);
    *(float *)(((((a4 + 0xC) - 0x4) - 0x4) + 0x0)) = (u1 * u6);
    *(float *)((((((a4 + 0xC) - 0x4) - 0x4) - 0x4) + 0x0)) = (u0 * u6);
    return _builtin_sqrtf(u5);
}

int FUN_0c191108(int a4)
{
    register int t0;
    register int t1;

    if (a4 != 0) {
        t0 = *(signed char *)((a4 + 0x18));
        t1 = (unsigned char)t0;
        if ((unsigned char)t0 == 1) {
            t1 = (FUN_0c19114c(a4));
        }
        t0 = t1;
        if ((*(int *)((a4 + 0x4))) != 0) {
            t1 = *(int *)((a4 + 0x4));
            *(unsigned int *)((a4 + 0x8)) = t1;
            if (t1 == 0) {
                *(unsigned int *)((a4 + 0x8)) = 0x1;
            }
            t1 = thunk_FUN_0c191de2();
            *(unsigned int *)((a4 + 0xC)) = t1;
            t0 = t1;
            if ((*(int *)((a4 + 0x10))) != 0) {
                (((struct o18_uchar *)(a4))->v) = 0x1;
                t0 = 0x18;
            }
        }
        t1 = t0;
    }
    return t1;
}

int FUN_0c1920b0(int a4, int a5)
{
    register int t1;
    register int t2;
    register int t3;
    register int t0;

    t1 = a4;
    t2 = a5;
    t3 = a4;
    for (;;) {
        if ((unsigned short)t3 == 0) {
            break;
        }
        t1 = (*(int *)0xC8AA218);
        t0 = (FUN_0c18329e());
        if (t0 != 0) {
            t1 = (*(int *)0xC8AA218);
            t0 = (FUN_0c18353e(t1, t2, (unsigned short)t3));
            t1 = t0;
            t2 = (t2 + t1);
            t3 = (t3 - t1);
            continue;
        }
        break;
    }
    return 0x0;
}

int FUN_0c19aaac(int a4, int a5)
{
    register int t0;

    t0 = FUN_0c19af74(a4);
    if (t0 != 0) {
        return 0xFFFFFFFC;
    }
    t0 = *(int *)0xC8A73C0;
    *(unsigned int *)((a5 + 0x0)) = ((((struct o158_int *)(((a4 * 0x174) + t0)))->v));
    *(unsigned short *)((a5 + 0x4)) = ((((struct o144_short *)(((a4 * 0x174) + t0)))->v));
    *(unsigned short *)((a5 + 0x6)) = ((((struct o146_short *)(((a4 * 0x174) + t0)))->v));
    return 0x0;
}


int memcpy(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    if (a4 != a5) {
        if ((unsigned int)a4 < (unsigned int)a5) {
            if ((unsigned int)0x0 < (unsigned int)a6) {
                t0 = a5;
                t1 = 0x0;
                t2 = a4;
                for (;;) {
                    t3 = *(signed char *)((t0 + 0x0));
                    t0 = (t0 + 0x1);
                    t1 = (t1 + 0x1);
                    *(unsigned char *)((t2 + 0x0)) = t3;
                    t2 = (t2 + 0x1);
                    if ((unsigned int)t1 >= (unsigned int)a6) {
                        break;
                    }
                }
            }
        } else {
            if ((unsigned int)0x0 < (unsigned int)a6) {
                t0 = (a5 + a6);
                t1 = 0x0;
                t2 = (a4 + a6);
                for (;;) {
                    t0 = (t0 - 1);
                    t1 = (t1 + 0x1);
                    *(unsigned char *)(((t2 - 0x1) + 0x0)) = (*(signed char *)((t0 + 0x0)));
                    t2 = (t2 - 0x1);
                    if ((unsigned int)t1 >= (unsigned int)a6) {
                        break;
                    }
                }
            }
        }
    }
    return a4;
}

int FUN_0c1a3150(int a4, int a5)
{
    register int t15;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t0;

    t15 = 0x0;
    if ((unsigned int)((a5 - 1) + a4) >= (unsigned int)a4) {
        t1 = ((a5 - 1) + a4);
        t2 = ((a5 - 1) + a4);
        t3 = 0x0;
        for (;;) {
            t4 = *(signed char *)((t1 + 0x0));
            *(unsigned char *)((t1 + 0x0)) = ((*(signed char *)((t1 + 0x0))) << 1);
            if (t3 != 0) {
                t0 = (*(signed char *)((t2 + 0x0)));
                t0 = (t0 | 0x1);
                *(unsigned char *)((t2 + 0x0)) = t0;
            }
            t1 = (t1 - 1);
            t3 = ((unsigned char)t4 & 0x80);
            t2 = (t2 - 1);
            if ((unsigned int)t1 < (unsigned int)a4) {
                break;
            }
        }
        t15 = t3;
    }
    if (t15 != 0) {
        return 0x1;
    }
    return 0x0;
}

int buDefragDisk(int a4, int a5)
{
    register int t0;
    register int t3;

    t0 = vmsfs_c_getstate(a4);
    t3 = 0xFFFFFFFF;
    if (t0 != 0) {
    } else {
        vmsfs_c_setfunc(a4, 0x9);
        vmsfs_c_setparam(a4, a4, a5, 0x0, 0x0, 0x0, 0x0);
        t3 = 0x0;
    }
    return t3;
}

int kmSetCheapShadowMode(int a4)
{
    register int t0;

    t0 = 0xFF;
    if ((int)a4 <= (int)0xFF) {
        t0 = a4;
    }
    (((struct o0_uint *)0xC8D1DA8)->v) = (((((struct o0_int *)0xC8D1DA8)->v)) | 0x4);
    (((struct o18_uint *)0xC8D1DA8)->v) = ((((int)a4 >= 0)) ? 1 : 0);
    (((struct o1C_uint *)0xC8D1DA8)->v) = t0;
    (((struct o4_uint *)0xC8D1DA8)->v) = (((((struct o4_int *)0xC8D1DA8)->v)) | 0x4);
    (((struct o0_uint *)0xC8D1DA8)->v) = (((((struct o0_int *)0xC8D1DA8)->v)) & 0xFFFFFFFB);
    return 0x0;
}

int FUN_0c2d68f4(int a4)
{
    int stk[4];
    register int t0;
    register int t7;

    t0 = syRtcGetDate(((int)stk + 0));
    if (t0 == 0) {
        *(unsigned short *)((a4 + 0x0)) = (*(short *)(((int)stk + 0)));
        *(unsigned char *)((a4 + 0x2)) = (*(signed char *)(((int)stk + 2)));
        *(unsigned char *)((a4 + 0x3)) = (*(signed char *)(((int)stk + 3)));
        *(unsigned char *)((a4 + 0x4)) = (*(signed char *)(((int)stk + 4)));
        *(unsigned char *)((a4 + 0x5)) = (*(signed char *)(((int)stk + 5)));
        t7 = (*(signed char *)(((int)stk + 6)));
    } else {
        *(unsigned short *)((a4 + 0x0)) = 0x0;
        *(unsigned char *)((a4 + 0x2)) = 0x0;
        *(unsigned char *)((a4 + 0x3)) = 0x0;
        *(unsigned char *)((a4 + 0x4)) = 0x0;
        *(unsigned char *)((a4 + 0x5)) = 0x0;
        t7 = 0x0;
    }
    *(unsigned char *)((a4 + 0x6)) = t7;
    return t7;
}

int mpdrv_insertnop(int a4)
{
    register int t0;
    register int t1;

    t0 = *(int *)0xC8D4D84;
    (((struct oFCC_uint *)(t0))->v) = (((((struct oFCC_int *)(t0))->v)) + (((((struct oFD8_int *)(t0))->v)) << 2));
    t0 = (((struct oFCC_int *)((*(int *)0xC8D4D84)))->v);
    if ((int)a4 > 0) {
        t1 = t0;
        t0 = 0x0;
        for (;;) {
            t0 = (t0 + 0x1);
            *(unsigned int *)((t1 + 0x0)) = 0x700;
            t1 = (t1 + 0x4);
            if ((int)t0 >= (int)a4) {
                break;
            }
        }
    }
    (((struct oFD8_uint *)((*(int *)0xC8D4D84)))->v) = a4;
    t0 = *(int *)0xC8D4D84;
    (((struct oFDC_uint *)(t0))->v) = (((((struct oFDC_int *)(t0))->v)) + (a4 << 2));
    return 0x0;
}

int FUN_0c2fe278(void)
{
    register int t0;
    register int t1;

    (((struct o0_uchar *)0xC8D65A0)->v) = 0x6;
    FUN_0c2d410c(0x0, (*(signed char *)0xC8D65AA));
    if ((unsigned int)((((struct o20_int *)0xC8D65A0)->v)) <= (unsigned int)(*(int *)0xC8D67BC)) {
        t0 = FUN_0c2ec410(0xC8D65C0, 0x7D0);
        (((struct o4_uchar *)0xC8D65A0)->v) = 0x1;
        t1 = t0;
    } else {
        t0 = *(signed char *)0xC8D65A4;
        (((struct o4_uchar *)0xC8D65A0)->v) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    (((struct o6_uchar *)0xC8D65A0)->v) = 0x0;
    return t1;
}

int nlSetLightDirection(int a4)
{
    register float u0;
    register float u1;
    register float u2;

    u0 = (((struct o8_float *)(a4))->v);
    u1 = *(float *)((a4 + 0x0));
    u2 = (((struct o4_float *)(a4))->v);
    (((struct o0_float *)0xC2A61D8)->v) = u1;
    (((struct o4_float *)0xC2A61D8)->v) = u2;
    (((struct o8_float *)0xC2A61D8)->v) = u0;
    (((struct oC_float *)0xC2A61D8)->v) = (u0 + 1.0f);
    (((struct o10_float *)0xC2A61D8)->v) = u1;
    (((struct o14_float *)0xC2A61D8)->v) = u2;
    (((struct o18_float *)0xC2A61D8)->v) = (u0 + 1.0f);
    (((struct o20_float *)0xC2A61D8)->v) = 0.0f;
    (((struct o24_float *)0xC2A61D8)->v) = 0.0f;
    (((struct o28_float *)0xC2A61D8)->v) = 1.0f;
    return 0x8;
}

int nlLineFog(int a4)
{
    if (a4 == 1) {
        (((struct o0_uint *)0xC2A63F8)->v) = (((((struct o0_int *)0xC2A63F8)->v)) & 0xFF3FFFFF);
        (((struct o20_uint *)0xC2A63F8)->v) = (((((struct o20_int *)0xC2A63F8)->v)) & 0xFF3FFFFF);
        return a4;
    }
    (((struct o0_uint *)0xC2A63F8)->v) = (((((struct o0_int *)0xC2A63F8)->v)) & 0xFF3FFFFF);
    (((struct o20_uint *)0xC2A63F8)->v) = (((((struct o20_int *)0xC2A63F8)->v)) & 0xFF3FFFFF);
    (((struct o0_uint *)0xC2A63F8)->v) = (((((struct o0_int *)0xC2A63F8)->v)) | 0x800000);
    (((struct o20_uint *)0xC2A63F8)->v) = (((((struct o20_int *)0xC2A63F8)->v)) | 0x800000);
    return a4;
}

void FUN_0c1832a4(int a4, int a5, int a6, int a7)
{
    int stk[1];

    *(unsigned short *)(((int)stk + 0)) = (_builtin_get_imask());
    _builtin_set_imask(0xF);
    (((struct o8_uint *)0xC8A6F20)->v) = a4;
    (((struct o0_uint *)0xC8A6F20)->v) = a6;
    (((struct o18_uint *)0xC8A6F20)->v) = a5;
    (((struct o4_uint *)0xC8A6F20)->v) = a7;
    *(unsigned char *)0xC874FB8 = 0x0;
    _builtin_set_imask(((unsigned int)((((*(short *)(((int)stk + 0))) & 0xF) << 2) << 2) >> 4));
}

int FUN_0c18d1fa(int a4, int a5, int a6, int a7)
{
    register int t0;

    if (a5 != 0) {
        t0 = FUN_0c197bfe(a4, a5, a6, a7);
        FUN_0c19acca(a4, t0);
    } else {
        *(unsigned int *)((((((a4 << 1) + a4) << 2) + 0xC8A6FE0) + 0x4)) = a6;
        *(unsigned int *)((((((a4 << 1) + a4) << 2) + 0xC8A6FE0) + 0x0)) = a4;
    }
    return 0x0;
}

int FUN_0c195b9c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    if (((*(signed char *)((a4 + 0x3))) & 4) == 0) {
        t0 = *(int *)((a4 + 0x4));
        *(unsigned int *)((a4 + 0x4)) = (t0 + 0x1);
        t1 = *(signed char *)((((t0 + 0x1) - 1) + 0x0));
        *(unsigned char *)((a4 + 0x0)) = t1;
        if (t1 == 0) {
            *(unsigned char *)((a4 + 0x0)) = 0xFFFFFFFF;
        }
    } else {
        *(unsigned char *)((a4 + 0x0)) = (((int (*)(int, int, int, int))((*(int *)((a4 + 0x10)))))((*(int *)((a4 + 0x4))), a5, a6, a7));
    }
    t0 = *(signed char *)((a4 + 0x0));
    if (t0 != -1) {
        *(unsigned int *)((a4 + 0x8)) = ((*(int *)((a4 + 0x8))) + 0x1);
        *(unsigned int *)((a4 + 0xC)) = ((*(int *)((a4 + 0xC))) - 1);
    }
    return t0;
}

int FUN_0c197cec(int a4)
{
    int t0;
    register int t1;

    t1 = FUN_0c18ea3e(a4);
    if ((t1 != 0) && (t0 = *(signed char *)((t1 + 0x1)), (unsigned char)t0 != 2)) {
        t0 = FUN_0c1a0cf6();
        if (t0 == 0) {
            t0 = FUN_0c1a0d78((t1 + 0x1C));
            if (t0 != 0) {
                return 0xFFFFFFFF;
            }
            *(unsigned char *)((t1 + 0x1)) = 0x2;
            return 0x0;
        }
        return 0xFFFFFFFF;
    }
    return 0xFFFFFFFF;
}

int FUN_0c19c898(int a4, int a5)
{
    if (((int)a4 < (int)(unsigned char)(*(signed char *)0xC8A738D)) && ((int)a4 >= 0)) {
        if ((*(short *)(((((((a4 << 1) + a4) << 2) << 2) + (*(int *)0xC8A73C4)) + 0x8))) == 0) {
            return 0xFFFFFFFC;
        }
        *(unsigned int *)(((((((a4 << 1) + a4) << 2) << 2) + (*(int *)0xC8A73C4)) + 0x28)) = a5;
        return 0x0;
    }
    return 0xFFFFFFFC;
}

int FUN_0c1a03de(int a4, int a5, int a6)
{
    register int t1;
    register int t2;

    if (a5 == 0) {
        return 0x0;
    }
    t1 = *(short *)((a4 + 0x4));
    t2 = (unsigned short)a6;
    if ((int)(unsigned short)t1 < (int)(unsigned short)a6) {
        t2 = (unsigned short)t1;
    }
    FUN_0c187a88(a5, (*(int *)((a4 + 0x0))), (unsigned short)t2);
    return t2;
}

int FUN_0c2b5ea0(int a4, int a5, int a6)
{
    register int t1;
    register int t2;

    *(unsigned int *)0xC8D1D98 = ((*(int *)0xC8D1D98) & 0xFFFFFFFB);
    t1 = 0x0;
    t2 = a6;
    for (;;) {
        kmyMemCopy(0xC8D0D98, t2, 0x40);
        t1 = (t1 + 0x1);
        t2 = (t2 + 0x40);
        if ((int)t1 >= (int)0x20) {
            break;
        }
    }
    *(unsigned int *)0xC8D1D98 = ((*(int *)0xC8D1D98) | 0x4);
    return 0x0;
}

int FUN_0c0ffdba(void)
{
    register int t1;
    register int t2;
    register int t3;
    register int t12;

    t1 = ((*(int *)0xC8D4D84) + 0x28);
    t2 = 0xC8C1C88;
    t3 = 0x0;
    for (;;) {
        t3 = (t3 + 0x1);
        *(unsigned char *)((t2 + 0x0)) = (*(signed char *)((t1 + 0x0)));
        *(unsigned char *)((t2 + 0x1)) = (*(signed char *)((t1 + 0x1)));
        *(unsigned char *)((t2 + 0x2)) = (*(signed char *)((t1 + 0x2)));
        *(unsigned char *)((t2 + 0x3)) = (*(signed char *)((t1 + 0x3)));
        *(unsigned int *)((t2 + 0x8)) = (*(int *)((t1 + 0x10)));
        *(unsigned char *)((t2 + 0x4)) = (*(signed char *)((t1 + 0x8)));
        *(unsigned char *)((t2 + 0x5)) = (*(signed char *)((t1 + 0x9)));
        *(unsigned char *)((t2 + 0x6)) = (*(signed char *)((t1 + 0xA)));
        t12 = *(signed char *)((t1 + 0xB));
        *(unsigned char *)((t2 + 0x7)) = t12;
        *(unsigned int *)((t2 + 0xC)) = (*(int *)((t1 + 0x14)));
        t2 = (t2 + 0x18);
        t1 = (t1 + 0x2C);
        if ((int)t3 >= (int)0x18) {
            break;
        }
    }
    return t12;
}

int VQAllocEntry(void)
{
    register int t0;
    register int t1;

    t0 = (((struct o0_int *)0xC304128)->v);
    if ((unsigned int)0x0 < (unsigned int)t0) {
        t1 = 0x0;
        for (;;) {
            if (((unsigned short)(*(short *)((((t1 * 0x4C) + ((((struct o3C_int *)0xC304128)->v))) + 0x0))) & 0x1) == 0) {
                break;
            }
            t1 = (t1 + 0x1);
            if ((unsigned int)t1 >= (unsigned int)t0) {
                return 0x0;
            }
        }
        *(unsigned short *)(((((((struct o3C_int *)0xC304128)->v)) + (t1 * 0x4C)) + 0x0)) = 0x1;
        return (((((struct o3C_int *)0xC304128)->v)) + (t1 * 0x4C));
    }
    return 0x0;
}

int mpdrv_frame_recv_pre(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(int *)0xC8D4D84;
    if (((((struct oFC0_int *)(t0))->v)) != 0) {
        return 0xFFFFFFFD;
    }
    if (((*(int *)((((((struct o10F4_int *)(t0))->v)) + 0x18))) & 1) != 0) {
        return 0xFFFFFFFF;
    }
    if (_builtin_tas((char *)(*(int *)0xC2DB268)) == 0) {
        mpdrv_dpf(t0, a5, a6, a7, 0xC300794);
        return 0xFFFFFFFE;
    }
    return 0x0;
}


int FUN_0c2e638e(void)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(int *)0xC304178;
    *(unsigned int *)0xC304178 = (t0 + 0x1);
    t1 = *(signed char *)0xC8D6526;
    t2 = (unsigned char)t1;
    if ((unsigned char)t1 != 32) {
        t1 = (t0 + 0x1);
        for (;;) {
            t0 = *(signed char *)(((*(int *)0xC304178) + 0x0));
            if ((unsigned char)t0 != 32) {
                break;
            }
            t1 = (*(int *)0xC304178);
            t1 = (t1 + 0x1);
            *(unsigned int *)0xC304178 = t1;
        }
        t2 = (unsigned char)t0;
    }
    return t2;
}

int FUN_0c2efa6e(void)
{
    register int t2;
    int t3;

    if ((((unsigned char)(*(signed char *)0xC8D2724) & 0x80) != ((unsigned char)(*(signed char *)0xC8D83DC) & 0x80)) && ((t2 = *(signed char *)0xC8D2724, ((unsigned char)t2 & 0x80) != 0) && (t3 = *(signed char *)0xC8D708B, ((unsigned char)t3 & 0x80) == 0))) {
        FUN_0c2d7148();
    }
    *(unsigned char *)0xC8D83DC = (*(signed char *)0xC8D2724);
    return 0x74;
}

int FUN_0c178ef0(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = FUN_0c177da0();
    *(unsigned int *)0xC83CFE0 = 0x1;
    *(unsigned int *)0xC83CDC0 = a4;
    if ((int)a4 > 0) {
        t1 = 0x0;
        t2 = 0x0;
        for (;;) {
            t2 = (t2 + 0x1);
            *(unsigned int *)(((0xC83CDC4 + t1) + 0xC)) = 0x0;
            *(unsigned int *)(((0xC83CDC4 + t1) + 0x0)) = 0x0;
            t1 = (t1 + 0x38);
            if ((int)t2 >= (int)a4) {
                break;
            }
        }
    }
    return t0;
}

int nlPopMatrix(int a4)
{
    register int t0;
    register int t2;
    register int t3;
    register int t4;
    register int t6;
    float u10[16];

    t0 = a4;
    if ((int)a4 <= 0) {
        t0 = 0x1;
    }
    t2 = (((struct o0_short *)0xC868774)->v);
    t3 = (((struct o2_short *)0xC868774)->v);
    t4 = (t2 - t0);
    if ((int)t2 < (int)t0) {
        t4 = 0x0;
    }
    t6 = (((struct o4_int *)0xC868774)->v);
    (((struct o0_ushort *)0xC868774)->v) = t4;
    if ((int)t4 < (int)t3) {
        (((struct o8_uint *)0xC868774)->v) = (t6 + ((unsigned int)(t4 << 8) >> 2));
    }
    u10[0] = (*(float *)(((t6 + ((unsigned int)(t4 << 8) >> 2)) + 0x0)));
    u10[1] = (*(float *)((((t6 + ((unsigned int)(t4 << 8) >> 2)) + 0x0) + 4)));
    u10[2] = ((((struct o8_float *)((t6 + ((unsigned int)(t4 << 8) >> 2))))->v));
    u10[3] = (*(float *)(((((t6 + ((unsigned int)(t4 << 8) >> 2)) + 0x8) + 0x0) + 4)));
    u10[4] = ((((struct o8_float *)(((t6 + ((unsigned int)(t4 << 8) >> 2)) + 0x8)))->v));
    u10[5] = (*(float *)((((((t6 + ((unsigned int)(t4 << 8) >> 2)) + 0x8) + 0x8) + 0x0) + 4)));
    u10[6] = ((((struct o8_float *)((((t6 + ((unsigned int)(t4 << 8) >> 2)) + 0x8) + 0x8)))->v));
    u10[7] = (*(float *)(((((((t6 + ((unsigned int)(t4 << 8) >> 2)) + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
    u10[8] = ((((struct o8_float *)(((((t6 + ((unsigned int)(t4 << 8) >> 2)) + 0x8) + 0x8) + 0x8)))->v));
    u10[9] = (*(float *)((((((((t6 + ((unsigned int)(t4 << 8) >> 2)) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
    u10[10] = ((((struct o8_float *)((((((t6 + ((unsigned int)(t4 << 8) >> 2)) + 0x8) + 0x8) + 0x8) + 0x8)))->v));
    u10[11] = (*(float *)(((((((((t6 + ((unsigned int)(t4 << 8) >> 2)) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
    u10[12] = ((((struct o8_float *)(((((((t6 + ((unsigned int)(t4 << 8) >> 2)) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8)))->v));
    u10[13] = (*(float *)((((((((((t6 + ((unsigned int)(t4 << 8) >> 2)) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
    u10[14] = ((((struct o8_float *)((((((((t6 + ((unsigned int)(t4 << 8) >> 2)) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8)))->v));
    u10[15] = (*(float *)(((((((((((t6 + ((unsigned int)(t4 << 8) >> 2)) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
    _builtin_ld_ext((float (*)[4])u10);
    return ((((int)t2 >= (int)t0)) ? 1 : 0);
}

int nlobjput_sub(int a4)
{
    register int t0;

    t0 = *(int *)((a4 + 0x0));
    if ((t0 == 0)) {
        FUN_0c188260(a4, 0xC8A6C68);  /* manual: r4 as it came, r5 the pool word 0x0C8A6C68 (the generated call passed none) */
        return (nlPopMatrix(0x1));
    }
    if (t0 == 1) {
        FUN_0c188260(a4, 0xC8A6C68);  /* manual: r4 as it came, r5 the pool word 0x0C8A6C68 (the generated call passed none) */
        return (nlPopMatrix(0x1));
    }
    return (nlPopMatrix(0x1));
}

int nlobjput_sub_trnsl(int a4, float f4)
{
    register int t0;

    t0 = *(int *)((a4 + 0x0));
    if ((t0 == 0)) {
        FUN_0c188262(a4, 0xC8A6C68, f4);
        return (nlPopMatrix(0x1));
    }
    if (t0 == 1) {
        FUN_0c188262(a4, 0xC8A6C68, f4);
        return (nlPopMatrix(0x1));
    }
    return (nlPopMatrix(0x1));
}

int FUN_0c183034(void)
{
    register int t0;

    *(unsigned int *)0xC2A629C = ((*(int *)0xC2A629C) + 0x1);
    t0 = ((int (*)(int))(FUN_0c2b9814))(0xC2A629C);
    t0 = 0x0;
    for (;;) {
        if ((int)t0 >= (int)(*(int *)0xC874F88)) {
            break;
        }
        FUN_0c2b97a0(0xC86CF38, 0xC86CE98);
        FUN_0c2b97a0(0xC86CEE8, 0xC86CE98);
        t0 = (t0 + 0x1);
    }
    return ((int (*)(void))(FUN_0c2b9814))();
}

int FUN_0c191874(int a4, int a5)
{
    register int t0;

    t0 = FUN_0c191850(a4);
    if ((short)t0 != 0) {
        return 0xFFFFFFFF;
    }
    if (((int)a5 >= (int)0x1) && ((int)a5 <= (int)0x6)) {
        *(unsigned char *)0xC8A9970 = a5;
        return 0x0;
    }
    return 0xFFFFFFF8;
}


int FUN_0c19a8ce(int a4)
{
    register int t0;

    t0 = FUN_0c19af74(a4);
    if (t0 != 0) {
        return 0xFFFFFFFC;
    }
    t0 = *(int *)0xC8A73C0;
    (((struct o13F_uchar *)(((a4 * 0x174) + t0)))->v) = ((*(signed char *)((((a4 * 0x174) + t0) + 0x13F))) | 0x80);
    (((struct o13E_uchar *)(((a4 * 0x174) + t0)))->v) = ((*(signed char *)((((a4 * 0x174) + t0) + 0x13E))) | 0xC);
    FUN_0c19a91c(a4);
    return 0x0;
}

int FUN_0c19c018(int a4, int a5, int a6, int a7)
{
    if ((*(signed char *)((a4 + 0xC4))) != 0) {
        return 0xFFFFFFFF;
    }
    (((struct oD4_uint *)(a4))->v) = a7;
    FUN_0c187a88((0xC0 + a4), a5, 0x8);
    (((struct oC8_uint *)(a4))->v) = a6;
    (((struct oCC_uint *)(a4))->v) = 0x0;
    return 0x0;
}

int FUN_0c19e892(int a4, int a5)
{
    int stk[1];
    register int t0;

    t0 = *(int *)((a4 + 0xC));
    *(unsigned char *)(((int)stk + 0)) = (~a5);
    *(unsigned char *)((a4 + 0x2)) = ((*(signed char *)((a4 + 0x2))) & (~a5));
    if (((unsigned char)(*(signed char *)((a4 + 0x2))) & 48) == 0) {
        *(unsigned char *)((a4 + 0x0)) = 0x5;
    }
    FUN_0c19114c((a4 + 0x10));
    *(unsigned char *)((t0 + 0x2)) = ((*(signed char *)((t0 + 0x2))) & (*(signed char *)(((int)stk + 0))));
    return FUN_0c19e64a(t0);
}

int FUN_0c1a2074(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    if ((unsigned int)0x0 < (unsigned int)a6) {
        t0 = 0x0;
        t1 = 0x0;
        for (;;) {
            t3 = (a4 + t1);
            t1 = (t1 + 0x4);
            *(unsigned char *)((t3 + 0x0)) = (*(int *)((((t0 << 2) + a5) + 0x0)));
            *(unsigned char *)((t3 + 0x1)) = ((unsigned int)(*(int *)((((t0 << 2) + a5) + 0x0))) >> 8);
            *(unsigned char *)((t3 + 0x2)) = ((unsigned int)(*(int *)((((t0 << 2) + a5) + 0x0))) >> 16);
            t2 = *(int *)((((t0 << 2) + a5) + 0x0));
            *(unsigned char *)((t3 + 0x3)) = ((unsigned int)((unsigned int)t2 >> 16) >> 8);
            t0 = (t0 + 0x1);
            if ((unsigned int)t1 >= (unsigned int)a6) {
                break;
            }
        }
        t0 = ((unsigned int)((unsigned int)t2 >> 16) >> 8);
    }
    return t0;
}

int fmMngWrite(int a4, int a5)
{
    register int t0;
    int t5;

    t0 = *(int *)0xC303D78;
    if (t0 == 0) {
        return 0xFFFFFFF5;
    }
    if ((*(int *)((t0 + 0x1C))) != 0) {
        return 0xFFFFFFF7;
    }
    if (((int)a4 >= 0) && (t5 = *(int *)((t0 + 0x14)), (int)a4 < (int)t5)) {
        *(unsigned int *)((t0 + 0x1C)) = 0x2;
        *(unsigned int *)(((*(int *)0xC303D78) + 0x20)) = 0x2;
        *(unsigned int *)(((*(int *)0xC303D78) + 0x28)) = a4;
        *(unsigned int *)(((*(int *)0xC303D78) + 0x30)) = a5;
        *(unsigned int *)(((*(int *)0xC303D78) + 0x24)) = 0x0;
        return 0x0;
    }
    return 0xFFFFFFFB;
}

int mwRnaGetPitch(int a4, int a5, int a6)
{
    register int t0;

    if (a4 == 0) {
        t0 = FUN_0c2dc1ae(0xC2FFEE8);
        *(unsigned int *)((a5 + 0x0)) = 0xFFFFFFFF;
        *(unsigned int *)((a6 + 0x0)) = 0xFFFFFFFF;
        return t0;
    }
    *(unsigned int *)((a5 + 0x0)) = ((((struct o74_int *)(a4))->v));
    *(unsigned int *)((a6 + 0x0)) = ((((struct o78_int *)(a4))->v));
    return 0x78;
}

int SJMEM_PutChunk(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t4;

    t0 = FUN_0c2c6030();
    if ((a5 != 0) && (a5 != 1)) {
        *(unsigned int *)((a6 + 0x4)) = 0x0;
        *(unsigned int *)((a6 + 0x0)) = 0x0;
        if ((*(int *)((a4 + 0x1C))) != 0) {
            t4 = ((int (*)(int, int, int, int))((*(int *)((a4 + 0x1C)))))((*(int *)((a4 + 0x20))), 0xFFFFFFFD, a6, a7);
        }
    }
    return FUN_0c2c6048(a4, t0);
}

int FUN_0c2c79e6(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t3;
    int t5;

    if (a5 != 0) {
        t0 = 0xC8D0694;
        t1 = 0x0;
        for (;;) {
            t3 = t0 == a4;
            t0 = (t0 + 0x34);
            if (t3) {
                t1 = 0x1;
            }
            if ((unsigned int)t0 >= (unsigned int)0xC8D0764) {
                break;
            }
        }
        if ((t1 != 0) && (t5 = *(int *)((a4 + 0x28)), t5 != 0)) {
            *(unsigned int *)((a5 + 0x0)) = (*(int *)((a4 + 0x1C)));
        }
        return 0x0;
    }
    return 0xEEEE;
}

int kmyWriteFogTable(void)
{
    register int t2;
    register int t3;

    if (((*(int *)0xC8D097C) & 4) != 0) {
        *(unsigned int *)0xC8D097C = ((*(int *)0xC8D097C) & 0xFFFFFFFB);
        t2 = 0x200;
        t3 = 0x0;
        for (;;) {
            kmiWriteRegister(t2, (*(int *)((t3 + 0xC8D077C))));
            t3 = (t3 + 0x4);
            t2 = (t2 + 0x4);
            if ((unsigned int)t3 >= (unsigned int)0x200) {
                break;
            }
        }
    }
    return 0x78;
}

int kmiFLWCTRLOBJOverflowCallback(void)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = FUN_0c2cc2c2();
    t1 = t0;
    if (t0 != 0) {
        t2 = t0;
        for (;;) {
            t0 = *(int *)((t2 + 0x14));
            if (t0 == 3) {
                break;
            }
            t2 = (*(int *)((t2 + 0x10)));
            if (t2 == 0) {
                *(unsigned int *)0xC8BEFDC = ((*(int *)0xC8BEFDC) + 0x1);
                return t0;
            }
        }
        t1 = (kmyMoveParameterBoundary((*(int *)((t2 + 0x3C))), 0x0, 0x2000));
    }
    *(unsigned int *)0xC8BEFDC = ((*(int *)0xC8BEFDC) + 0x1);
    return t1;
}

int vmsio_isready(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    int t4;

    t0 = *(int *)(((a4 << 2) + 0xC300818));
    t1 = kdGetDevice(t0);
    t2 = FUN_0c2bca16(t0);
    if (((*(signed char *)((t1 + 0x0))) != 0) && (t4 = *(int *)((t2 + 0x0)), (t4 & 2) != 0)) {
        return 0x1;
    }
    return 0x0;
}

int FUN_0c2ef958(void)
{
    if (((unsigned char)(*(signed char *)0xC8D2723) & 0x40) == ((unsigned char)(*(signed char *)0xC8D83DB) & 0x40)) {
        FUN_0c2ef9c0();
    } else {
        if (((unsigned char)(*(signed char *)0xC8D2726) & 2) == 0) {
            FUN_0c2efa1a();
        }
    }
    *(unsigned char *)0xC8D83DB = (*(signed char *)0xC8D2723);
    return 0x73;
}

int FUN_0c2f7684(int a4, int a5)
{
    register int t2;
    register int t7;

    t2 = (((struct o8_int *)0xC8E09BC)->v);
    t7 = (*(short *)((((unsigned short)(*(short *)((((unsigned short)a4 << 1) + ((((struct o0_int *)0xC8E09BC)->v))))) << 1) + ((((struct o4_int *)0xC8E09BC)->v)))));
    for (;;) {
        if ((unsigned short)t7 == 0) {
            return 0x0;
        }
        if ((unsigned short)a4 == (unsigned short)(*(short *)(((((unsigned short)t7 << 1) + t2) + 0x0)))) {
            break;
        }
        t7 = (*(short *)(((((unsigned short)t7 << 1) + t2) + 0x0)));
    }
    *(unsigned short *)((a5 + 0x0)) = t7;
    return 0x1;
}

int FUN_0c2f7d10(int a4, int a5)
{
    register int t2;
    register int t7;

    t2 = (((struct o8_int *)0xC8E0AF8)->v);
    t7 = (*(short *)((((unsigned short)(*(short *)((((unsigned short)a4 << 1) + ((((struct o0_int *)0xC8E0AF8)->v))))) << 1) + ((((struct o4_int *)0xC8E0AF8)->v)))));
    for (;;) {
        if ((unsigned short)t7 == 0) {
            return 0x0;
        }
        if ((unsigned short)a4 == (unsigned short)(*(short *)(((((unsigned short)t7 << 1) + t2) + 0x0)))) {
            break;
        }
        t7 = (*(short *)(((((unsigned short)t7 << 1) + t2) + 0x0)));
    }
    *(unsigned short *)((a5 + 0x0)) = t7;
    return 0x1;
}

int nlCommonTextureGarbageCollection(void)
{
    register int t2;
    register int t3;
    register int t4;

    t4 = (((struct o0_int *)0xC8A64D8)->v);
    t2 = (FUN_0c2b7d20());
    t3 = 0x0;
    for (;;) {
        if ((int)t3 >= (int)((((struct o4_int *)0xC8A64D8)->v))) {
            break;
        }
        if ((*(int *)((t4 + 0x28))) == 0) {
            t2 = (nlCreateTextureParamA(t4));
        }
        t4 = (t4 + 0x3C);
        t3 = (t3 + 0x1);
    }
    return t2;
}

int FUN_0c184442(void)
{
    int t0;

    if ((((((struct o0_int *)0xC2A62B8)->v)) != 5) && (t0 = (((struct o8_int *)0xC2A62B8)->v), t0 == 0)) {
        t0 = thunk_FUN_0c191de2();
        if ((unsigned int)(t0 - ((((struct o18_int *)0xC2A62B8)->v))) <= (unsigned int)((short)(*(short *)(((*(int *)0xC89B610) + 0x4))) * (short)0x3E8)) {
            return 0x0;
        }
        return 0x1;
    }
    return 0x1;
}

int FUN_0c184dec(int a4)
{
    register int t0;
    int t2;

    t0 = 0x0;
    for (;;) {
        if (((*(short *)((((short)((short)t0 * (short)0xC24) + 0xC89C310) + 0x0))) != 0) && (t2 = *(short *)((((short)((short)t0 * (short)0xC24) + 0xC89C310) + 0x2)), (unsigned short)t2 == (unsigned short)a4)) {
            break;
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x8) {
            break;
        }
    }
    if (t0 == 8) {
        return 0x0;
    }
    return ((short)((short)t0 * (short)0xC24) + 0xC89C310);
}

int FUN_0c187d98(int a4, int a5, int a6)
{
    register int t8;
    register int t10;
    register int t0;
    int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    if (a6 == 0) {
        return 0x0;
    }
    t8 = a4;
    t10 = a5;
    if ((unsigned int)0x0 < (unsigned int)a6) {
        t0 = a4;
        t1 = 0x0;
        t2 = a5;
        for (;;) {
            t3 = *(signed char *)((t2 + 0x0));
            t2 = (t2 + 0x1);
            t4 = *(signed char *)((t0 + 0x0));
            t0 = (t0 + 0x1);
            if ((t4 == t3) && ((t5 = *(signed char *)(((t0 - 1) + 0x0)), t5 != 0) && (t1 = (t1 + 0x1), (unsigned int)t1 < (unsigned int)a6))) continue;
            break;
        }
        t8 = t0;
        t10 = t2;
    }
    return ((unsigned char)(*(signed char *)(((t8 - 1) + 0x0))) - (unsigned char)(*(signed char *)(((t10 - 1) + 0x0))));
}

int FUN_0c18cbc8(int a4)
{
    register int t0;

    t0 = *(short *)((a4 + 0x0));
    if ((t0 & 0xC0) != 0x80) {
        if ((t0 & 0xC0) != 0xC0) {
            return FUN_0c19aeae((*(short *)((a4 + 0x0))), (*(int *)((a4 + 0x4))));
        }
        return FUN_0c18eeae((0x3F & (*(short *)((a4 + 0x0)))), (*(int *)((a4 + 0x4))));
    }
    return FUN_0c19c898((0x3F & (*(short *)((a4 + 0x0)))), (*(int *)((a4 + 0x4))));
}

int FUN_0c18ed76(int a4)
{
    register int t0;
    register int t1;
    int t2;

    t0 = FUN_0c18ea14(a4);
    if (t0 == 0) {
        return 0xFFFFFFFF;
    }
    t1 = *(int *)((t0 + 0x8));
    t2 = *(int *)((t0 + 0x14));
    FUN_0c19862e((t1 & t2), t2, t1, 0x1);
    FUN_0c18ed16();
    return 0x0;
}

int FUN_0c1918b4(int a4, int a5)
{
    register int t0;

    t0 = FUN_0c191850(a4);
    if ((short)t0 != 0) {
        return 0xFFFFFFFF;
    }
    *(unsigned int *)((a5 + 0x0)) = (*(signed char *)0xC8A9970);
    return 0x0;
}

int FUN_0c19d250(int a4, int a5)
{
    int stk[2];
    register int t7;
    register int t1;

    *(unsigned int *)(((int)stk + 0)) = a5;
    t7 = 0xFFFFFFFF;
    if (a4 != 0) {
        t1 = FUN_0c1a02cc((*(int *)(((int)stk + 0))), (((int)stk + 0) + 0x4), 0x2);
        t7 = 0xFFFFFFFF;
        if ((int)(short)t1 < (int)0x2) {
        } else {
            *(unsigned char *)((a4 + 0x0)) = (*(signed char *)(((((int)stk + 0) + 0x4) + 0x0)));
            *(unsigned char *)((a4 + 0x1)) = (*(signed char *)(((((int)stk + 0) + 0x4) + 0x1)));
            t7 = 0x0;
        }
    }
    return t7;
}

int FUN_0c19ec2c(int a4)
{
    register int t0;
    register int t1;

    if ((*(int *)((a4 + 0x30))) != 0) {
        *(unsigned char *)((a4 + 0x2)) = 0x0;
        t0 = *(signed char *)((a4 + 0x0));
        if ((unsigned char)t0 != 2) {
            if (((unsigned char)t0 != 5) && (((unsigned char)t0 != 1) && ((unsigned char)t0 != 6))) {
                
            } else {
                *(unsigned char *)((a4 + 0x0)) = 0x0;
            }
            t1 = (unsigned char)t0;
        } else {
            t0 = FUN_0c19114c((a4 + 0x10));
            *(unsigned char *)((a4 + 0x0)) = 0x0;
            t1 = t0;
        }
        t0 = t1;
    }
    return t0;
}

int FUN_0c1a1188(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t0 = 0x0;
    if (a4 != 0) {
        t1 = 0x6;
        t2 = a4;
        t3 = 0x0;
        for (;;) {
            t4 = *(signed char *)((t2 + 0x0));
            t2 = (t2 + 0x1);
            t1 = (t1 - 0x1);
            t3 = (t3 + ((unsigned char)t4 << 8));
            t4 = *(signed char *)((t2 + 0x0));
            t2 = (t2 + 0x1);
            t3 = (t3 + (unsigned char)t4);
            if (t1 == 0) {
                break;
            }
        }
        t0 = t3;
    }
    t1 = FUN_0c1a1126(t0, a5, a6);
    return (~((((unsigned int)t1 >> 16) + (unsigned short)t1) + ((unsigned int)(((unsigned int)t1 >> 16) + (unsigned short)t1) >> 16)));
}

int _pd_peripheral_set_null(int a4)
{
    *(unsigned int *)((a4 + 0x0)) = 0x0;
    *(unsigned int *)((a4 + 0x4)) = 0x0;
    if ((*(int *)0xC8B9D6C) == 0) {
        *(unsigned int *)((a4 + 0x8)) = 0x0;
        *(unsigned int *)((a4 + 0xC)) = 0xFFFFFFFF;
        *(unsigned int *)((a4 + 0x10)) = 0x0;
        *(unsigned int *)((a4 + 0x14)) = 0x0;
    } else {
        *(unsigned int *)((a4 + 0x8)) = 0xFFFFFFFF;
        *(unsigned int *)((a4 + 0xC)) = 0x0;
        *(unsigned int *)((a4 + 0x10)) = 0xFFFFFFFF;
        *(unsigned int *)((a4 + 0x14)) = 0xFFFFFFFF;
    }
    *(unsigned short *)((a4 + 0x18)) = 0x0;
    *(unsigned short *)((a4 + 0x1A)) = 0x0;
    (((struct o22_ushort *)(a4))->v) = 0x0;
    (((struct o20_ushort *)(a4))->v) = 0x0;
    *(unsigned short *)((a4 + 0x1E)) = 0x0;
    *(unsigned short *)((a4 + 0x1C)) = 0x0;
    *(unsigned int *)((a4 + 0x28)) = 0x0;
    *(unsigned int *)((a4 + 0x24)) = 0xC2FE890;
    return 0x0;
}

int FUN_0c2b99d8(void)
{
    FUN_0c2d67ba();
    (((struct o10_uint *)0xC8BFFE8)->v) = 0x0;
    (((struct oC_uint *)0xC8BFFE8)->v) = 0x0;
    (((struct o0_uint *)0xC8BFFE8)->v) = 0x0;
    FUN_0c2d6804(0x0, 0x0);
    FUN_0c2d67cc(0x0, 0x0);
    FUN_0c2d665e();
    FUN_0c2b9c3c();
    *(unsigned char *)0xC8C0078 = 0x0;
    return 0x1;
}

int search_exec_file(int a4, int a5)
{
    register int t1;
    register int t2;
    register int t6;

    t1 = (*(int *)((((a4 * 0x148) + 0xC8C4604) + 0x28)));
    t2 = 0x0;
    for (;;) {
        if ((int)t2 >= (int)(*(int *)(((*(int *)((((a4 * 0x148) + 0xC8C4604) + 0x1C))) + 0x30)))) {
            return 0xFFFFFFFF;
        }
        t6 = *(signed char *)((t1 + 0x0));
        if ((unsigned char)t6 == 0xCC) {
            break;
        }
        t1 = (t1 + 0x20);
        t2 = (t2 + 0x1);
    }
    set_file_info(t1, a5, ((a4 * 0x148) + 0xC8C4604), (unsigned char)t6);
    return t2;
}

int FUN_0c2c30aa(int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
    int stk[13];
    register int t0;
    register int t3;
    register int t6;

    stk[2] = a8;
    stk[3] = a9;
    stk[4] = a10;
    t0 = ((((int)stk + 4) + 0x8) + 0x4);
    if ((0x3 & ((((int)stk + 4) + 0x8) + 0x4)) != 0) {
        t0 = ((((int)stk + 4) + 0x8) + 0x8);
    }
    t3 = (((struct o0_int *)0xC303D8C)->v);
    t6 = (vsprintf(0xC8CAB04, a8, t0));
    if (t3 != 0) {
        t6 = (((int (*)(int, int, int, int, int, int, int, int, int, int, int))(t3))(((((struct o4_int *)0xC303D8C)->v)), 0xC8CAB04, a6, a7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24)));
    }
    return t6;
}

int FUN_0c2cbcc0(int a4)
{
    register int t0;
    register int t1;

    *(unsigned int *)((a4 + 0x14)) = 0xC2CBC5E;
    t0 = *(int *)((a4 + 0x8));
    *(unsigned int *)((t0 + 0x0)) = 0x3B8;
    *(unsigned int *)((t0 + 0x4)) = 0x0;
    *(unsigned int *)((t0 + 0x8)) = 0x0;
    *(unsigned int *)((t0 + 0x10)) = 0xC2CBC2A;
    *(unsigned int *)((t0 + 0x14)) = 0xC2CBC44;
    *(unsigned int *)((t0 + 0xC)) = 0x4;
    if ((unsigned int)0x0 < (unsigned int)0x4) {
        t1 = 0x0;
        for (;;) {
            *(unsigned int *)((((t1 * 0x8C) + (t0 + 0x18)) + 0x0)) = t1;
            t1 = (t1 + 0x1);
            if ((unsigned int)t1 >= (unsigned int)(*(int *)((t0 + 0xC)))) {
                break;
            }
        }
    }
    return 0x0;
}

int kmiSetDisplayClipSize(void)
{
    (((struct o0_uint *)0xC8BEFB0)->v) = 0x0;
    (((struct o4_uint *)0xC8BEFB0)->v) = 0x0;
    kmyGetDisplayParametersInfo(0x7, 0x0, 0xC8BEFB8);
    kmyGetDisplayParametersInfo(0x8, 0x0, 0xC8BEFBC);
    if ((*(int *)0xC8BE7BC) != 0) {
        (((struct oC_uint *)0xC8BEFB0)->v) = (((((struct oC_int *)0xC8BEFB0)->v)) - 1);
    }
    return 0x0;
}

int FUN_0c2d2d4a(void)
{
    int stk[1];
    register int t1;
    int t3;

    *(unsigned char *)(((int)stk + 0)) = (FUN_0c2d4768(0x302, 0x1));
    t1 = FUN_0c2d4768(0x303, 0x1);
    if ((((unsigned char)(*(signed char *)(((int)stk + 0))) & 16) != 0) && (t3 = (int)(((unsigned int)((unsigned int)((unsigned int)(unsigned char)t1 >> 2) >> 2)) & 1), ((unsigned int)((unsigned int)((unsigned int)(unsigned char)t1 >> 2) >> 2) >> 1) == 1)) {
        return 0x1;
    }
    return 0x0;
}

int FUN_0c2d58b2(int a4, int a5)
{
    register int t0;

    t0 = FUN_0c2d4768(0x9F, 0x1);
    if (((unsigned short)t0 & 128) == 0) {
        *(unsigned int *)((a4 + 0x0)) = 0x5F00FF;
    } else {
        *(unsigned int *)((a4 + 0x0)) = 0x5F02FF;
    }
    t0 = 0x20;
    if (((*(int *)((a4 + 0x0))) & 0x300) != 0) {
        t0 = 0x38;
    }
    *(unsigned char *)((a5 + 0x0)) = t0;
    return a5;
}

int FUN_0c2e8afc(int a4)
{
    register int t5;
    register int t6;
    register int t10;

    (((struct o23_uchar *)(a4))->v) = (*(signed char *)(((0x8A + ((((struct o0_int *)0xC8D66E8)->v))) + 0x0)));
    (((struct o39_uchar *)(a4))->v) = (*(signed char *)(((0x8A + ((((struct o0_int *)0xC8D66E8)->v))) + 0x0)));
    t5 = 0x39;
    t6 = ((((struct o4_int *)0xC8D66E8)->v));
    for (;;) {
        if ((unsigned char)(*(signed char *)((t6 + 0x0))) == 0xFF) {
            break;
        }
        t5 = (*(signed char *)((t6 + 0x0)));
        t10 = (unsigned char)t5;
        t5 = (*(signed char *)((t6 + 0x1)));
        t6 = (t6 + 0x4);
        *(unsigned char *)(((t10 + a4) + 0x0)) = t5;
    }
    return t5;
}

int FUN_0c2e8a7c(int a4, int a5, int a6)
{
    register int t4;
    register int t5;
    register int t1;
    register int t2;
    register int t3;
    register int t6;

    t4 = (*(int *)0xC8D66EC);
    t5 = a6;
    for (;;) {
        if ((unsigned char)(*(signed char *)((t4 + 0x0))) == 0xFF) {
            break;
        }
        t6 = (*(signed char *)((t4 + 0x0)));
        t1 = (*(signed char *)((t4 + 0x2)));
        t6 = (unsigned char)t6;
        t6 = (t6 + a4);
        t2 = t1;
        t5 = (*(signed char *)((t6 + 0x0)));
        t3 = (unsigned char)t2;
        if ((int)(unsigned char)t5 <= (int)t3) {
            t5 = t2;
        }
        t1 = (*(signed char *)((t4 + 0x3)));
        t2 = t1;
        t3 = (unsigned char)t2;
        if ((int)(unsigned char)t5 >= (int)t3) {
            t5 = t2;
        }
        t4 = (t4 + 0x4);
        *(unsigned char *)((t6 + 0x0)) = t5;
    }
    return t1;
}

int FUN_0c2edc3c(int a4, int a5, int a6, int a7)
{
    int stk[6];
    register int t8;
    register int t2;

    *(unsigned char *)(((int)stk + 8)) = a4;
    t8 = 0xC3028F0;
    if ((*(signed char *)(((int)stk + 8))) == 0) {
    } else {
        t2 = FUN_0c2f94d4((*(signed char *)(((int)stk + 8))), a5, a6, a7);
        *(int *)((int)stk + 4) = ((FUN_0c2e737c(t2)));
        *(int *)((int)stk + 0) = 0xC3028F4;
        FUN_0c187cac((((int)stk + 0) + 0xC), 0x0, 0x0, 0x0, 0xC3028F4);
        t8 = (((int)stk + 8) + 0x4);
    }
    return (FUN_0c2ee4ba(t8));
}

int FUN_0c2f29f6(int a4)
{
    int stk[4];
    register int t0;

    *(unsigned char *)(((int)stk + 8)) = a4;
    t0 = *(signed char *)(((int)stk + 8));
    *(unsigned int *)(((int)stk + 12)) = (unsigned char)t0;
    FUN_0c2fa4cc((((unsigned char)t0 << 1) + 0xC), 0x2, (((int)stk + 0) + 0x4));
    FUN_0c2fa4cc(((((*(int *)(((int)stk + 12))) + 0x1) << 1) + 0xC), 0x2, ((int)stk + 0));
    return ((*(short *)(((int)stk + 0))) - (*(short *)(((int)stk + 4))));
}

int dbg_printf(Stk3 s)
{
    int stk[12];
    register int t0;

    stk[1] = s.w[0];
    stk[2] = s.w[1];
    stk[3] = s.w[2];
    t0 = ((((int)stk + 4) + 0x4) + 0x4);
    if ((0x3 & ((((int)stk + 4) + 0x4) + 0x4)) != 0) {
        t0 = ((((int)stk + 4) + 0x4) + 0x8);
    }
    vsprintf(0xC8682D0, s.w[0], t0);
    nlPuts(0xC8682D0);
    return 0x0;
}

int FUN_0c180124(int a4)
{
    if (((int)a4 >= 0) && ((int)a4 < (int)0x8)) {
        if ((*(int *)((0xC86CD00 + (signed char)(((a4 << 1) + a4) << 2)))) == -1) {
            return 0xFFFFFFFE;
        }
        if ((*(int *)(((*(int *)0xC86CC34) + 0x0))) != 0) {
            return 0xFFFFFFFD;
        }
        return 0x0;
    }
    return 0xFFFFFFFF;
}

int FUN_0c1829f8(int a4)
{
    register int t0;

    t0 = *(int *)0xC2A6294;
    if (t0 != 0) {
        if (a4 != 0) {
            if (a4 == 1) {
                if ((*(int *)((t0 + 0x4))) != 0x41474553) {
                    return 0xFFFFFFFD;
                }
                return 0x0;
            }
            if (a4 == 2) {
                if (((((struct o168_int *)(t0))->v)) == 0x41474553) {
                    return 0x0;
                }
                return 0xFFFFFFFD;
            }
            return 0xFFFFFFFE;
        }
        if ((*(int *)((t0 + 0x4))) != 0x41474553) {
            return 0xFFFFFFFD;
        }
        return 0x0;
    }
    return 0xFFFFFFFF;
}

int FUN_0c183140(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    if ((int)a4 > 0) {
        t0 = 0x0;
        for (;;) {
            if ((*(int *)0xC2A62A8) != 0) {
                t1 = (((int (*)(int, int, int, int))((*(int *)0xC2A62A8)))(a4, a5, a6, a7));
            } else {
                t1 = (FUN_0c177450());
            }
            t0 = (t0 + 0x1);
            if ((int)t0 >= (int)a4) {
                break;
            }
        }
        t0 = t1;
    }
    return t0;
}

int FUN_0c184a90(int a4, int a5, int a6, int a7, int a8, int a9)
{
    FUN_0c191d9e();
    (((struct o0_uint *)0xC89BEF8)->v) = a4;
    (((struct o4_uint *)0xC89BEF8)->v) = a5;
    (((struct o8_uint *)0xC89BEF8)->v) = a6;
    (((struct oC_uint *)0xC89BEF8)->v) = a7;
    (((struct o10_uint *)0xC89BEF8)->v) = a8;
    (((struct o14_uint *)0xC89BEF8)->v) = a9;
    return FUN_0c191dae();
}

int FUN_0c18e8bc(void)
{
    register int t0;
    register int t1;

    t0 = FUN_0c197c7c();
    *(unsigned int *)0xC8A8FC4 = t0;
    if (t0 != -1) {
        t0 = 0x0;
        for (;;) {
            if ((int)(*(int *)0xC8A8FC4) <= (int)t0) {
                return 0x0;
            }
            t1 = FUN_0c197c80(t0);
            if (t1 != 0) {
                break;
            }
            t0 = (t0 + 0x1);
        }
    }
    return 0xFFFFFFFF;
}

int FUN_0c18eeae(int a4, int a5)
{
    if (((int)a4 < (int)(unsigned char)(*(signed char *)0xC8A738E)) && ((int)a4 >= 0)) {
        if ((*(short *)(((((a4 << 2) + a4) << 2) + (*(int *)0xC8A73C8)))) == 0) {
            return 0xFFFFFFFC;
        }
        *(unsigned int *)((((((a4 << 2) + a4) << 2) + (*(int *)0xC8A73C8)) + 0xC)) = a5;
        return 0x0;
    }
    return 0xFFFFFFFC;
}

int FUN_0c192074(int a4, int a5, int a6)
{
    int stk[4];

    *(unsigned short *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 0)) = a5;
    *(unsigned int *)(((int)stk + 8)) = a6;
    *(unsigned int *)(((int)stk + 12)) = 0xC8AA218;
    memset((*(int *)(((int)stk + 0))), 0x0, (unsigned short)(*(short *)(((int)stk + 4))));
    *(unsigned short *)(((*(int *)(((int)stk + 8))) + 0x0)) = (FUN_0c183480((*(int *)(((*(int *)(((int)stk + 12))) + 0x0))), (*(int *)(((int)stk + 0))), (unsigned short)(*(short *)(((int)stk + 4)))));
    return 0x0;
}

int FUN_0c1988b6(int a4)
{
    int t0;
    register int t1;
    register int t2;

    if ((unsigned int)0xC8A8FDC < (unsigned int)0xC8A935C) {
        t1 = 0xC8A8FDC;
        for (;;) {
            t2 = *(short *)((t1 + 0xE));
            if ((((unsigned short)t2 & 0x1) != 0) && (((0x8 & (unsigned short)t2) != 0) && (t0 = *(int *)((t1 + 0x0)), t0 == a4))) {
                break;
            }
            t1 = (t1 + 0x1C);
            if ((unsigned int)t1 >= (unsigned int)0xC8A935C) {
                return 0x0;
            }
        }
        t0 = t1;
    } else {
        t0 = 0x0;
    }
    return t0;
}

int syRtcMakeDayOfWeek(int a4, int a5, int a6)
{
    register int t0;
    register int t1;

    t0 = a4;
    t1 = a5;
    if ((int)(unsigned char)a5 <= (int)0x2) {
        t0 = (a4 - 1);
        t1 = (a5 + 0xC);
    }
    return ((int)((int)(((((((unsigned short)t0 >> 1) >> 1) + ((int)((int)(((unsigned short)(unsigned char)t1 * (unsigned short)0xD) + 0x8) / (int)0x5))) + (unsigned short)t0) + (unsigned char)a6) - 15) % (int)0x7));
}

void buDisableServer(void)
{
    register int t0;

    t0 = _builtin_get_imask();
    _builtin_set_imask(0xF);
    kdSetHandler((*(int *)0xC2FED5C), 0x0);
    _builtin_set_imask(((unsigned int)(((t0 & 0xF) << 2) << 2) >> 4));
}

int kmEndScene(int a4)
{
    int t0;

    *(unsigned int *)0xC8BE7F4 = ((*(int *)0xC8BE7F4) & 0xFFFFFFFC);
    if (a4 != 0) {
        if ((((*(int *)((a4 + 0x4))) & 32) == 0) && (t0 = *(int *)0xC8BF100, t0 == 0)) {
            FUN_0c2cbee0();
            t0 = kmiFLWCTRLCheckFreeNBuf();
            if (t0 == 0) {
                FUN_0c2cbee0();
            }
        }
    }
    return 0x0;
}

int vmsfs_init_work_new(int a4)
{
    register int t0;

    t0 = *(int *)0xC8C4600;
    if (a4 != 15) {
        if (a4 != 33) {
            if (a4 != 65) {
                if (a4 != 122) {
                    return 0xFFFFFF00;
                }
                *(unsigned int *)((t0 + 0x4)) = 0x3;
                return 0x0;
            }
            *(unsigned int *)((t0 + 0x4)) = 0x2;
            return 0x0;
        }
        *(unsigned int *)((t0 + 0x4)) = 0x1;
        return 0x0;
    }
    *(unsigned int *)((t0 + 0x4)) = 0x0;
    return 0x0;
}

int vmsfs_dpf(int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
    int stk[13];
    register int t0;
    register int t3;
    register int t5;

    stk[2] = a8;
    stk[3] = a9;
    stk[4] = a10;
    t0 = ((((int)stk + 4) + 0x8) + 0x4);
    if ((0x3 & ((((int)stk + 4) + 0x8) + 0x4)) != 0) {
        t0 = ((((int)stk + 4) + 0x8) + 0x8);
    }
    t3 = *(int *)0xC303C14;
    t5 = (vsprintf(0xC8CA510, a8, t0));
    if (t3 != 0) {
        t5 = (((int (*)(int, int, int, int, int, int, int, int, int, int, int))(t3))(0xC8CA510, a5, a6, a7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24)));
    }
    return t5;
}

int FUN_0c2d3af2(int a4)
{
    register int t3;

    *(unsigned short *)((a4 + 0x0)) = (FUN_0c2d4768(0xA7, 0x2));
    if (((*(signed char *)((((*(int *)0xC8D25F0) + 0x3C) + 0x0))) & 32) != 0) {
        t3 = FUN_0c2d32ea();
        if ((signed char)t3 != 0) {
            return 0x1;
        }
        return 0x0;
    }
    return 0x0;
}

int FUN_0c2d54ce(void)
{
    register int t3;
    register int t8;

    if (((*(signed char *)0xC8D25F7) & 8) != 0) {
        return 0x0;
    }
    t3 = *(int *)0xC8D25F0;
    t8 = 0;
    if (((*(signed char *)(((t3 + 0x10) + 0x0))) & 16) != 0) {
        t8 = ((((*(signed char *)(((t3 + 0x34) + 0x0))) & 2) == 0));
    } else {
        t8 = ((((*(signed char *)(((t3 + 0x78) + 0x0))) & 8) == 0));
    }
    return (-(((t8) ? 1 : 0) - 1));
}

int FUN_0c2d6754(int a4, int a5, int a6, int a7)
{
    int stk[5];
    register int t2;
    register int t4;

    *(unsigned char *)(((int)stk + 8)) = a4;
    *(unsigned int *)(((int)stk + 0)) = a5;
    *(unsigned int *)(((int)stk + 4)) = a6;
    t2 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC8D26A0) + 0xC)))))(a4, a5, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
    *(unsigned int *)(((int)stk + 12)) = 0xC303FA8;
    t4 = FUN_0c2ecd24((*(signed char *)(((int)stk + 8))), t2, 0xC303EF0, 0xC303FA8);
    *(unsigned int *)(((*(int *)(((int)stk + 0))) + 0x0)) = 0xC303EF0;
    *(unsigned int *)(((*(int *)(((int)stk + 4))) + 0x0)) = (*(int *)(((int)stk + 12)));
    return t4;
}

int kmyReleaseRenderPacket(int a4)
{
    register int t0;

    t0 = kmyiCheckRenderPacket(a4);
    if (t0 == 0) {
        return 0xEEEE;
    }
    (((struct o0_uint *)0xC8D61D8)->v) = (((((struct o0_int *)0xC8D61D8)->v)) & (~((int)0x1 << (int)(*(int *)((a4 + 0x0))))));
    (((struct o4_uint *)0xC8D61D8)->v) = (((((struct o4_int *)0xC8D61D8)->v)) - 1);
    return 0x0;
}

int FUN_0c2e4200(int a4)
{
    register int t0;
    register int t4;

    t0 = *(signed char *)0xC8D6781;
    if (((unsigned char)t0 & 128) != 0) {
        if (((((unsigned char)(*(signed char *)0xC8D677E) & 0x8) != 0) && ((unsigned char)a4 == 8)) || ((t4 = *(signed char *)0xC8D677E, ((unsigned char)t4 & 0x8) == 0) && ((unsigned char)a4 != 0))) {
            return FUN_0c2e8496();
        }
        return thunk_FUN_0c2d5f2e(0x0);
    }
    return (unsigned char)t0;
}

int FUN_0c2e81dc(void)
{
    register int t4;

    FUN_0c2e83ae();
    (((struct o10_uchar *)0xC8D677E)->v) = ((*(signed char *)0xC8D678E) & 0x7F);
    (((struct o1_uchar *)0xC8D677E)->v) = ((*(signed char *)0xC8D677F) | 0x1);
    (((struct o0_uchar *)0xC8D677E)->v) = ((*(signed char *)0xC8D677E) | 0x40);
    *(unsigned short *)0xC8D6524 = 0x4;
    (((struct o0_uchar *)0xC8D64A3)->v) = 0x41;
    (((struct o1_uchar *)0xC8D64A3)->v) = 0x54;
    (((struct o2_uchar *)0xC8D64A3)->v) = 0x4F;
    t4 = *(signed char *)0xC8D6526;
    (((struct o3_uchar *)0xC8D64A3)->v) = t4;
    return t4;
}

int FUN_0c2e8150(void)
{
    register int t4;

    FUN_0c2e83ae();
    (((struct o10_uchar *)0xC8D677E)->v) = ((*(signed char *)0xC8D678E) & 0x7F);
    (((struct o1_uchar *)0xC8D677E)->v) = ((*(signed char *)0xC8D677F) | 0x1);
    (((struct o0_uchar *)0xC8D677E)->v) = ((*(signed char *)0xC8D677E) | 0x40);
    *(unsigned short *)0xC8D6524 = 0x4;
    (((struct o0_uchar *)0xC8D64A3)->v) = 0x41;
    (((struct o1_uchar *)0xC8D64A3)->v) = 0x54;
    (((struct o2_uchar *)0xC8D64A3)->v) = 0x5A;
    t4 = *(signed char *)0xC8D6526;
    (((struct o3_uchar *)0xC8D64A3)->v) = t4;
    return t4;
}

int FUN_0c2f296a(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    if ((int)(unsigned char)a5 > 0) {
        t0 = 0x0;
        t1 = (0x0 + a4);
        t2 = 0x5;
        for (;;) {
            t3 = *(signed char *)((t1 + 0x0));
            t1 = (t1 + 0x1);
            FUN_0c2fa4c4(t3, t2);
            t0 = (t0 + 0x1);
            t2 = (t2 + 0x1);
            if ((int)(unsigned char)t0 >= (int)(unsigned char)a5) {
                break;
            }
        }
    }
    return FUN_0c2fa4ec();
}

int FUN_0c2f3d0c(void)
{
    if (((unsigned char)(*(signed char *)0xC8D67BA) & 1) != 0) {
        FUN_0c2ec45e();
        return 0x1;
    }
    if (((unsigned char)(*(signed char *)0xC8D6793) & 2) != 0) {
        FUN_0c2ec410(0xC8D67CC, 0x64);
        *(unsigned char *)0xC8D67B6 = 0x6;
        return 0x1;
    }
    return 0x0;
}

int FUN_0c2f5a22(int a4)
{
    register int t12;

    *(unsigned short *)0xC8D6812 = ((*(short *)0xC8D6812) + 0x1);
    if ((*(signed char *)0xC8DFF92) == 0) {
        t12 = 0xC8DFFA1;
        if ((*(signed char *)0xC8DFFA1) == 0) {
            (((struct o23_uchar *)0xC8DFF80)->v) = 0x0;
            (((struct o0_uchar *)0xC8DFD4C)->v) = (*(signed char *)0xC8DFF70);
            (((struct o2_uchar *)0xC8DFD4C)->v) = 0x1;
            (((struct o0_uint *)0xC8DFF80)->v) = (*(int *)0xC8D67BC);
            (((struct oC_uchar *)0xC8DFF80)->v) = 0x1;
            t12 = 0xC8DFF80;
        }
    }
    return t12;
}

int FUN_0c2faa70(void)
{
    (((struct o0_uchar *)0xC8E0302)->v) = 0x1;
    (((struct o0_uchar *)0xC8D7057)->v) = 0x1;
    (((struct o9_uchar *)0xC8D7057)->v) = 0x1;
    (((struct oA_uchar *)0xC8D7057)->v) = 0x0;
    (((struct oB_uchar *)0xC8D7057)->v) = 0xFF;
    (((struct o12_uchar *)0xC8E0302)->v) = (*(signed char *)0xC8D7056);
    *(unsigned short *)0xC8D7058 = 0x0;
    *(unsigned short *)0xC8D707C = 0x0;
    (((struct o11_uchar *)0xC8E0302)->v) = 0x0;
    (((struct o2_uchar *)0xC8E0302)->v) = 0xFF;
    (((struct o1_uchar *)0xC8E0302)->v) = 0x0;
    return 0x0;
}

int gfx_set_fog_color(int a4)
{
    int stk[2];
    register int t1;

    *(unsigned char *)((((int)stk + 4) + 0x3)) = (signed char)((unsigned int)((unsigned int)a4 >> 16) >> 8);
    *(unsigned char *)((((int)stk + 4) + 0x2)) = (short)((unsigned int)a4 >> 16);
    *(unsigned char *)((((int)stk + 4) + 0x1)) = ((int)a4 >> 8);
    *(unsigned char *)((((int)stk + 4) + 0x0)) = a4;
    t1 = (*(int *)((((int)stk + 4) + 0x0)));
    *(int *)((int)stk + 0) = t1;
    return (kmSetFogTableColor(t1));
}

int nl_action_PixelClipping(void)
{
    register int t6;

    if ((*(int *)0xC2A6150) != 0) {
        t6 = FUN_0c2b9720((int)((((struct o0_float *)0xC868A40)->v)), (int)((((struct o4_float *)0xC868A40)->v)), (int)((((struct o8_float *)0xC868A40)->v)), (int)((((struct oC_float *)0xC868A40)->v)));
        *(unsigned int *)0xC2A6150 = 0x0;
    }
    return t6;
}

int FUN_0c181890(int a4, int a5, int a6)
{
    register int t2;

    t2 = *(signed char *)((0xC86CC40 + (unsigned char)((((a4 << 1) + a4) << 2) << 1)));
    if (t2 == 1) {
        return FUN_0c180d72((((((((short)a4 << 8) << 2) << 2) | ((short)a6 << 16)) | 0xA2) + ((((short)a5 << 8) << 2) << 1)));
    }
    return t2;
}

int FUN_0c181906(int a4, int a5, int a6)
{
    register int t2;

    t2 = *(signed char *)((0xC86CC40 + (unsigned char)((((a4 << 1) + a4) << 2) << 1)));
    if (t2 == 1) {
        return FUN_0c180d72((((((((short)a4 << 8) << 2) << 2) | ((short)a6 << 16)) | 0x1A2) + ((((short)a5 << 8) << 2) << 1)));
    }
    return t2;
}

int FUN_0c184e2a(void)
{
    register int t0;

    t0 = 0x0;
    for (;;) {
        if ((*(short *)((((short)((short)t0 * (short)0xC24) + 0xC89C310) + 0x0))) != 0) {
            t0 = (t0 + 0x1);
            if ((int)t0 >= (int)0x8) {
                break;
            }
            continue;
        }
        break;
    }
    if (t0 == 8) {
        return 0xFFFFFFFF;
    }
    *(unsigned short *)((((short)((short)t0 * (short)0xC24) + 0xC89C310) + 0x0)) = 0x1;
    return t0;
}

int FUN_0c18e54a(int a4)
{
    register int t0;
    int t3;

    t0 = 0x0;
    for (;;) {
        if (((*(int *)((((((t0 << 2) << 2) << 1) + 0xC8A8C20) + 0x14))) == a4) && (t3 = *(signed char *)((((((t0 << 2) << 2) << 1) + 0xC8A8C20) + 0x0)), t3 != 0)) {
            break;
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x13) {
            return 0xFFFFFFFF;
        }
    }
    FUN_0c18e584(t0);
    return 0x0;
}

int FUN_0c18e8f8(void)
{
    register int t0;
    register int t6;
    register int t3;
    register int t1;
    register int t2;

    t0 = FUN_0c197c7c();
    t6 = 0xFFFFFFFF;
    if (t0 != -1) {
        t3 = 0x0;
        if ((int)t0 > 0) {
            t1 = 0x0;
            for (;;) {
                t2 = FUN_0c197d2e(t1);
                if (t2 != 0) {
                    break;
                }
                t1 = (t1 + 0x1);
                if ((int)t0 <= (int)t1) {
                    return 0x0;
                }
            }
            t3 = 0xFFFFFFFF;
        }
        t6 = t3;
    }
    return t6;
}

int FUN_0c19139e(int a4, int a5)
{
    register int t2;
    register int t4;

    FUN_0c19e784(a4, a5, 0xC8ABB5C);
    FUN_0c19d3a0(0xC8ABB5C);
    t2 = FUN_0c19e78e(0xC8ABB5C);
    t4 = 0xFFFFFFEF;
    if ((short)t2 != 0) {
    } else {
        FUN_0c19d1ae(0xC8ABB90);
        t4 = 0x0;
    }
    return t4;
}

int FUN_0c1931c0(void)
{
    int stk[2];
    register int t0;
    register int t2;
    register int t3;
    int t1;

    for (;;) {
        t0 = FUN_0c191af2(((int)stk + 0));
        if (((short)t0 == 0) && (t1 = *(short *)(((int)stk + 0)), t1 != 0)) {
            t2 = FUN_0c191aaa((((int)stk + 0) + 0x4), 0x1);
            if ((short)t2 != 0) {
                t3 = (short)t2; break;
            }
            continue;
        }
        t3 = (short)t0; break;
    }
    return t3;
}

float acosf(float f4)
{
    int stk[1];

    *(float *)(((int)stk + 0)) = (_in_coss(f4));
    if (((*(int *)((((int)stk + 0) + 0x0))) & 0x7F800000) == 0x7F800000) {
        if (((*(int *)((((int)stk + 0) + 0x0))) & 0x7FFFFF) != 0) {
            *(unsigned int *)0xC8B57A4 = 0x44D;
        } else {
            *(unsigned int *)0xC8B57A4 = 0x44C;
        }
    }
    return (*(float *)(((int)stk + 0)));
}

int FUN_0c2b0ea4(void)
{
    register int t3;
    register int t4;
    register int t5;

    kdSetHandler((*(int *)0xC3036F4), 0x0);
    memset(0xC8B96A0, 0x0, 0x120);
    t3 = memset(0xC8B97C0, 0x0, 0x60);
    t4 = 0xC8B96A0;
    t5 = 0xC8B97C0;
    for (;;) {
        *(unsigned int *)((t4 + 0x8)) = t5;
        t4 = (t4 + 0xC);
        t5 = (t5 + 0x4);
        if ((unsigned int)t4 >= (unsigned int)0xC8B97C0) {
            break;
        }
    }
    return t3;
}

int ADXF_Init(void)
{
    memset(0xC8CBD44, 0x0, 0x300);
    memset(0xC8CC044, 0x0, 0x400);
    memset(0xC8CC448, 0xFF, 0x1000);
    memset(0xC8CD448, 0x0, 0x20);
    *(unsigned int *)0xC8CD468 = 0x0;
    *(unsigned int *)0xC8CC444 = 0x0;
    return 0xC8CC444;
}

int mwRnaSetSfreq(int a4, int a5, int a6, int a7)
{
    register int t1;
    register int t4;

    if (a4 == 0) {
        return (FUN_0c2dc1ae(0xC2FFEE8));
    }
    t1 = *(int *)((a4 + 0x38));
    t4 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)((t1 + 0x0))) + 0x24)))))(t1, a5, a6, a7);
    *(unsigned int *)((a4 + 0xC)) = a5;
    return t4;
}

int kmyRequestDMA(int a4)
{
    register int t0;

    t0 = *(int *)((a4 + 0x0));
    *(unsigned int *)((a4 + 0x28)) = 0x2;
    (((struct o0_uint *)0xC2DF468)->v) = (((((struct o0_int *)0xC2DF468)->v)) - 1);
    kmiStartupDMA();
    if (((((struct o0_int *)0xC2DF468)->v)) == 0) {
        _builtin_set_imask(((unsigned int)(((((((struct o4_int *)0xC2DF468)->v)) & 0xF) << 2) << 2) >> 4));
    }
    return t0;
}

int kmyInitializeDriver(int a4, int a5, int a6, int a7)
{
    register int t0;

    kmyiInitializeDriverObject(0xC8D5F6C, 0xC8D5F84);
    *(unsigned int *)0xC8D05C0 = 0xC2CAA86;
    t0 = ((int (*)(int, int, int, int))((*(int *)0xC8D5F80)))(0xC8D5F6C, 0xC8D05B4, 0xC8D05CC, a7);
    *(unsigned int *)0xC8D0C90 = 0xC2CB792;
    t0 = ((int (*)(int, int, int, int))((*(int *)0xC8D5F80)))(0xC8D5F6C, 0xC8D0C84, 0xC8D0C9C, a7);
    return 0x0;
}

int mpdrv_hreset(int a4)
{
    register int t0;

    t0 = *(int *)0xC8D4D84;
    (((struct oFCC_uint *)(t0))->v) = (((((struct oFCC_int *)(t0))->v)) + (((((struct oFD8_int *)(t0))->v)) << 2));
    *(unsigned int *)((((((struct oFCC_int *)((*(int *)0xC8D4D84)))->v)) + 0x0)) = ((a4 << 16) | 0x300);
    (((struct oFD8_uint *)((*(int *)0xC8D4D84)))->v) = 0x1;
    t0 = *(int *)0xC8D4D84;
    (((struct oFDC_uint *)(t0))->v) = (((((struct oFDC_int *)(t0))->v)) + 0x4);
    return 0x0;
}

int mpdrv_set_bwrite(int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
    register int t2;

    if (_builtin_tas((char *)(*(int *)0xC2DB268)) == 0) {
        mpdrv_dpf(a4, a5, a6, a7, 0xC3007C0);
        return 0xFFFFFFFE;
    }
    t2 = mpdrv_set_bwrite_ns(a4, a5, a6, a7, a8, a9, a10);
    *(unsigned char *)(((*(int *)0xC2DB268) + 0x0)) = 0x0;
    return t2;
}

int FUN_0c2e80c0(void)
{
    register int t7;

    if (((unsigned char)(*(signed char *)0xC8D677E) & 8) != 0) {
        FUN_0c2e8238();
    }
    *(unsigned char *)0xC8D666A = 0x0;
    (((struct o11_uchar *)0xC8D677D)->v) = ((*(signed char *)0xC8D678E) & 0x7F);
    (((struct o2_uchar *)0xC8D677D)->v) = ((*(signed char *)0xC8D677F) | 0x1);
    (((struct o1_uchar *)0xC8D677D)->v) = ((*(signed char *)0xC8D677E) | 0x40);
    t7 = *(signed char *)0xC8D677D;
    (((struct o0_uchar *)0xC8D677D)->v) = (t7 | 0x5);
    return (t7 | 0x5);
}
