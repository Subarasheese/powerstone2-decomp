/* Straight-line functions with calls and guards (batch gen_bf): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
typedef struct { int w[4]; } Stk4;
struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_float { char p[0x10]; float v; };
struct o10E8_int { char p[0x10E8]; int v; };
struct o11_uchar { char p[0x11]; unsigned char v; };
struct o14_float { char p[0x14]; float v; };
struct o15C_ushort { char p[0x15C]; unsigned short v; };
struct o16_ushort { char p[0x16]; unsigned short v; };
struct o160_uint { char p[0x160]; unsigned int v; };
struct o168_uint { char p[0x168]; unsigned int v; };
struct o16E_uchar { char p[0x16E]; unsigned char v; };
struct o16F_uchar { char p[0x16F]; unsigned char v; };
struct o170_uchar { char p[0x170]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o18_uchar { char p[0x18]; unsigned char v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o25_uchar { char p[0x25]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2E_ushort { char p[0x2E]; unsigned short v; };
struct o30_ushort { char p[0x30]; unsigned short v; };
struct o32_ushort { char p[0x32]; unsigned short v; };
struct o3C_short { char p[0x3C]; short v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
struct o46_uchar { char p[0x46]; unsigned char v; };
struct o6_uchar { char p[0x6]; unsigned char v; };
struct o614_int { char p[0x614]; int v; };
struct o74_int { char p[0x74]; int v; };
struct o78_uchar { char p[0x78]; unsigned char v; };
struct o7C_int { char p[0x7C]; int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o80_int { char p[0x80]; int v; };
struct o88_int { char p[0x88]; int v; };
struct oA_short { char p[0xA]; short v; };
struct oB0_uchar { char p[0xB0]; unsigned char v; };
struct oB4_short { char p[0xB4]; short v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
int ADXCRS_Lock(void);
int ADXPD_ExecHndl(int);
int ADXT_ExecServer(void);
int FUN_0c0f4202(int, int, int);
int FUN_0c0ff884(void);
int FUN_0c17ff1e(void);
int FUN_0c1831d0(int, int, int, int);
int FUN_0c1831ec(int, int, int, int);
int FUN_0c18329e(void);
int FUN_0c183628(Stk3);
int FUN_0c183858(int);
int FUN_0c184000(int, int, int);
int FUN_0c1842e8(int, int, int);
int FUN_0c184e64(int);
int FUN_0c186f40(int, int, int, int);
int FUN_0c187220(int, int);
int FUN_0c187a88(int, int, int);
int FUN_0c187cac(int, int, int, int, int);
int FUN_0c18c9fc(void);
int FUN_0c18cc06(int);
int FUN_0c18cc78(int);
int FUN_0c18cc94(int);
int FUN_0c18cd6e(int);
int FUN_0c18cf5c(int);
int FUN_0c18cf94(int);
int FUN_0c18cfb8(int);
int FUN_0c18d0d0(int);
int FUN_0c18d23c(int);
int FUN_0c18d320(int, int);
int FUN_0c18d420(void);
int FUN_0c18d426(int);
int FUN_0c18d464(int);
int FUN_0c18d498(int);
int FUN_0c18d522(int);
int FUN_0c18d60c(int);
int FUN_0c18d6b2(int);
int FUN_0c18d7a8(int);
int FUN_0c18e516(int, int, int);
int FUN_0c18e54a(int);
int FUN_0c18ede8(int, int, int, int);
int FUN_0c19126a(void);
int FUN_0c191d9e(void);
int FUN_0c191dae(void);
int FUN_0c191f2c(void);
int FUN_0c191f5a(int);
int FUN_0c1920b0(int, int);
int FUN_0c192e82(void);
int FUN_0c19862e(int, int, int, int);
int FUN_0c1986c4(int, int, int);
int FUN_0c198a62(int, int, int);
int FUN_0c198d84(int);
int FUN_0c19a7e0(int, int, int, int);
int FUN_0c1a14c0(int);
int FUN_0c1a14dc(int, int, int);
int FUN_0c1a1574(int, int);
int FUN_0c2b3416(int, int);
int FUN_0c2b3438(int, int);
int FUN_0c2b3456(int, int);
int FUN_0c2b477a(int, int, int);
int FUN_0c2b5498(int, int, int);
int FUN_0c2b9b3e(int);
int FUN_0c2ba85c(int);
int FUN_0c2bbc84(int, int, int, int, int, int);
int FUN_0c2bc7e4(void);
int FUN_0c2cfc92(void);
int FUN_0c2d37de(void);
int FUN_0c2d487c(int, int, int);
int FUN_0c2d71b2(void);
int FUN_0c2d7806(int);
int FUN_0c2d80f0(int);
int FUN_0c2d868a(int, int);
int FUN_0c2daf5a(int, ...);
int FUN_0c2db024(int, ...);
int FUN_0c2dc1ae(int, ...);
int FUN_0c2e6310(void);
int FUN_0c2e638e(void);
int FUN_0c2e7200(int);
int FUN_0c2e7230(int);
int FUN_0c2e737c(int);
int FUN_0c2e83ae(void);
int FUN_0c2e8b4a(void);
int FUN_0c2eadd8(int, int, int, int);
int FUN_0c2eafb4(int, int);
int FUN_0c2eb978(int);
int FUN_0c2ebfcc(void);
int FUN_0c2ec410(int, int);
int FUN_0c2ec430(int);
int FUN_0c2f35d6(void);
int FUN_0c2f7d9c(int);
int FUN_0c2f7e96(int);
int FUN_0c2f7f3a(void);
int FUN_0c2f84f0(int);
int FUN_0c2fa4c4(int, int);
int FUN_0c2fa4ec(void);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
extern int _builtin_tas(char *);
int hwInit(void);
int kdSetDriverMode(int, int);
int kdSetHandler(int, int);
int kmyCopyToFrameBuffer(int, int, int);
int kmyGetBGPlaneBase(int, int);
int kmyMemCopy(int, int, int);
int kmySetSkipCount(int, int);
int mpdrv_dpf(int, int, int, int, int);
int mpdrv_set_allstatreq_ns(int);
int mpdrv_set_arctrl_ns(int, int);
int mpdrv_set_dkill_ns(int);
int mpdrv_set_dreq_ns(int);
int mpdrv_set_dreset_ns(int);
int mpdrv_set_ft4ctrl_ns(int, int);
int mpdrv_set_getcond_ns(int, int);
int mpdrv_set_getminfo_ns(int, int, int);
int mpdrv_set_hreset(int);
int mpdrv_set_setcond_ns(int, int, int, int);
int mpdrv_set_transagain_ns(int);
int mwRnaSetupSnd(int, int);
int nlCopyMatrix(int, int, int, float, float, float, float, float, float);
int nlLoadMatrix8(int);
int nlMultiMatrix(int);
int nlMultiMatrixRevOrder8(int);
int nlMultiPushedMatrix(void);
int nlPopMatrix(int);
int nlPushMatrix(int);
extern int nlStoreMatrix8();
int nlsndG2Read(int);
int nlsndG2Write(int, int);
int strlen(int);
int syIntInit(int, int);
int syRtcGetAndCheckCount(int, int, int, int);
int syRtcGetCountForce(void);
int sySqInit(void);
int thunk_FUN_0c2b3af8(int);
int thunk_FUN_0c2b5b00(int);
int thunk_FUN_0c2c5908(void);
int vmsfs_c_getstate(int);
int vmsfs_diskfree(int, int);
int vmsfs_fgetinfo(int, int, int);
int vmsfs_fgetsize(int, int);
int vmsfs_findfirst(int, int);
int vmsfs_findfirst_ex(int, int, int);
int vmsfs_findnext(int, int);
int vmsfs_findnext_ex(int, int, int);
int vmsfs_fisexist(int, int);
int vmsfs_fopen(int, int, int);
int vmsfs_getinfo(int, int);
int vmsfs_xfind(int, int);
int FUN_0c2f9676(int a4, int a5, int a6, int a7);
int FUN_0c18d704(int a4);
int FUN_0c19a7b2(int a4, int a5, int a6, int a7, int a8, int a9, int a10);
int FUN_0c1a214e(int a4);
int ADXF_ReadSj32(int a4, int a5, int a6);
int FUN_0c2b9b0c(void);
int ADXT_DiscardSmpl(int a4);
int vmsfs_setdevicetype(int a4);
int search_free_dir(int a4);
int open_file_handle(void);
int FUN_0c2c6120(int a4, int a5, int a6, int a7);
int FUN_0c2cc400(int a4, int a5, int a6, int a7);
int kmiFLWCTRLLockNBuf(int a4);
int FUN_0c2d54a0(int a4);
int FUN_0c2d7662(void);
int FUN_0c2e8122(void);
int FUN_0c2f29c8(void);
int nlSetPaletteData(int a4, int a5, int a6);
int FUN_0c185054(int a4);
int FUN_0c18d438(int a4);
int FUN_0c18d5c4(int a4);
int FUN_0c18e864(int a4);
int FUN_0c191164(int a4, int a5, int a6);
int FUN_0c192138(int a4);
int FUN_0c19c19c(int a4, int a5, int a6, int a7);
int FUN_0c19c166(int a4);
int FUN_0c1a03b2(int a4, int a5);
int FUN_0c2bcb70(Stk4 s);
int FUN_0c2bcbd0(Stk4 s);
int kmySetBGPlane(int a4);
int kmyiInitializeNativeBuffer(int a4, int a5, int a6, int a7);
int FUN_0c2cc2c2(void);
int FUN_0c2cc320(void);
void FUN_0c2d80c4(int a4, int a5);
int FUN_0c2d7fd4(int a4);
int FUN_0c2dae80(int a4, int a5, int a6, int a7);
int FUN_0c2dadf8(int a4, int a5, int a6, int a7);
int FUN_0c2dae3c(int a4, int a5, int a6, int a7);
int FUN_0c2dad96(int a4, int a5, int a6, int a7);
int FUN_0c2daf08(int a4, int a5, int a6, int a7);
int FUN_0c2daec4(int a4, int a5, int a6, int a7);
int FUN_0c2db124(int a4, int a5, int a6, int a7);
int FUN_0c2db090(int a4, int a5, int a6, int a7);
int FUN_0c2db0d4(int a4, int a5, int a6, int a7);
int FUN_0c2db174(int a4, int a5, int a6, int a7);
int FUN_0c2e5ea0(int a4);
int FUN_0c2e6cba(int a4);
int FUN_0c2e7350(int a4);
int FUN_0c2efbd8(void);
int FUN_0c2f998e(void);
int FUN_0c180f78(void);
int FUN_0c18170c(int a4, int a5);
int FUN_0c181b6a(int a4);
int FUN_0c183de8(int a4);
int FUN_0c183d72(int a4);
int FUN_0c184c0c(int a4);
int FUN_0c184d7e(int a4, int a5, int a6);
int FUN_0c185560(int a4);
int FUN_0c18558a(int a4);
int FUN_0c184f70(int a4);
int FUN_0c18e064(int a4);
int FUN_0c18ea14(int a4);
int FUN_0c18fd0c(void);
int FUN_0c18fd36(void);
int FUN_0c1a027c(int a4);
int FUN_0c1a0388(int a4, int a5);
int syRtcExecServer(int a4, int a5, int a6, int a7);
int FUN_0c2b2838(int a4, int a5, int a6);
int FUN_0c2b286a(int a4, int a5, int a6);
int FUN_0c2b28ca(int a4, int a5, int a6);
int syHwInit(void);
int buGetFileInfo(int a4, int a5, int a6);
int FUN_0c2b33ec(int a4, int a5);
int ADXT_GetTimeReal(int a4);
int kmSetPaletteData(int a4);
int vmsfs_unmount(int a4);
int FUN_0c2cf974(void);
int FUN_0c2d374a(int a4, int a5);
int FUN_0c2d850e(int a4);
int FUN_0c2ebeae(void);
int FUN_0c2f35ac(void);
int FUN_0c2f734a(void);
int nlFogTableOff(void);
int nlGetPushedMatrix(int a4, int a5, int a6, float f4, float f5, float f6, float f7, float f8, float f9);
int nlMakeModelViewProjectMatrix(void);
int nlObjPutSetSpecularEyeDirectionF(float f4, float f5, float f6);
int FUN_0c183a80(int a4, int a5);
int FUN_0c183abe(int a4, int a5);
int FUN_0c1848c0(void);
int FUN_0c185d28(int a4);
int FUN_0c185d00(int a4);
int nlDispStripTexOfs(int a4, int a5, int a6, int a7);
int FUN_0c18d780(int a4);
int FUN_0c18d758(int a4);
int FUN_0c18fd60(int a4);
int FUN_0c18fd88(int a4);
int FUN_0c1910ca(void);
int FUN_0c191e7c(void);
int FUN_0c194878(int a4);
int FUN_0c19493a(int a4, int a5, int a6, int a7, int a8);
int FUN_0c19db04(int a4, int a5);
int ovGetLibTbl(int a4);
int kmSetPaletteMode(int a4);
int mwlRnaAlloc(void);
int mwRnaFlush(int a4);
int mwRnaGetPlaySw(int a4);
int mwRnaGetFilter(int a4, int a5, int a6);
int FUN_0c2d8098(int a4);
int FUN_0c0ed8f4(int a4, int a5);
int FUN_0c2e6092(void);
int FUN_0c2e80fa(void);
int FUN_0c2eaf6c(void);
int ADXPD_ExecServer(void);
int FUN_0c2f2926(int a4);
int FUN_0c2f84a8(int a4);
int FUN_0c2fad9a(int a4);
int nl_mesh_set_texture(int a4, int a5);
int nlObjPutWorldMatrixMode(float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11);
int FUN_0c17fe3c(void);
int FUN_0c1814e4(int a4);
int FUN_0c183234(void);
int FUN_0c18325a(void);
int FUN_0c183b7e(int a4);
int FUN_0c183b58(int a4);
int FUN_0c183c98(int a4);
int FUN_0c183bdc(int a4);
int FUN_0c183b32(int a4);
int FUN_0c183c72(int a4);
int FUN_0c183b0c(int a4);
int FUN_0c183e38(int a4);
int FUN_0c183e12(int a4);
int FUN_0c183dc2(int a4);
int FUN_0c183d4c(int a4);
int FUN_0c183f0c(int a4);
int FUN_0c183d9c(int a4);
int FUN_0c183ee6(int a4);
int FUN_0c183e5e(int a4);
int FUN_0c183ec0(int a4);
int FUN_0c183fa4(int a4);
int FUN_0c183f32(int a4);
int FUN_0c183ae6(int a4);
int FUN_0c183f58(int a4);
int FUN_0c183f7e(int a4);
int FUN_0c1855b4(int a4);
int FUN_0c185878(int a4);
int FUN_0c18d732(int a4);
int FUN_0c18dfee(int a4, int a5, int a6, int a7);
int FUN_0c191a84(int a4, int a5);
int FUN_0c191dbc(int a4, int a5, int a6, int a7);
int FUN_0c197c32(int a4, int a5, int a6, int a7);
int FUN_0c19869e(int a4, int a5, int a6);
int FUN_0c19d41e(int a4, int a5, int a6, int a7);
int FUN_0c2b1eb0(int a4);
int pdGunLeave(void);
int FUN_0c2b1ed6(int a4);
int FUN_0c2b280a(int a4, int a5);
int FUN_0c2b27ae(int a4, int a5);
int buGetDiskInfo(int a4, int a5);
int FUN_0c2b27dc(int a4, int a5);
int FUN_0c2b289c(int a4, int a5);
int buGetLastError(int a4);
int buGetFileSize(int a4, int a5);
int buIsExistFile(int a4, int a5);
int pdVibMxStart(int a4, int a5);
int adxf_AllocAdxFs(void);
int FUN_0c2bb00c(void);
void FUN_0c2bb35e(int a4, int a5, int a6, int a7);
void FUN_0c2bb3a8(int a4, int a5, int a6, int a7);
int FUN_0c2bca92(int a4, int a5, int a6, int a7);
int FUN_0c2bca6c(int a4, int a5, int a6, int a7);
int FUN_0c2bcb2a(int a4, int a5, int a6, int a7);
int FUN_0c2bcade(int a4, int a5, int a6, int a7);
int FUN_0c2bcab8(int a4, int a5, int a6, int a7);
int FUN_0c2bcb04(int a4, int a5, int a6, int a7);
int FUN_0c2bcc22(int a4, int a5, int a6, int a7);
int FUN_0c2bcbfc(int a4, int a5, int a6, int a7);
int FUN_0c2bccb2(int a4);
int FUN_0c2bcc48(int a4, int a5, int a6, int a7);
int FUN_0c2bcc8c(int a4, int a5, int a6, int a7);
int vmsfs_c_execcallback(int a4, int a5, int a6);
void ADXCRS_Unlock(void);
int FUN_0c2c4770(void);
int FUN_0c2d53e8(void);
int FUN_0c2d540e(void);
int FUN_0c2d754a(int a4);
int mwlSbAlloc(void);
int FUN_0c2f3524(void);
int FUN_0c2fbc4a(int a4);
void paletteUpload(void);
int nlIntrHandlerEventA40(void);
int nlIntrHandlerEventB00(void);

int FUN_0c2f9676(int a4, int a5, int a6, int a7)
{
    FUN_0c2eadd8(((((struct oB4_short *)((*(int *)0xC8D66E8)))->v)), 0x1, a6, a7);
    FUN_0c2e8b4a();
    (((struct o0_uchar *)0xC8D65F6)->v) = 0x0;
    *(unsigned char *)0xC8D677A = ((*(signed char *)0xC8D677A) & 0x7F);
    *(unsigned int *)0xC8D65F8 = (*(int *)0xC8D67BC);
    return 0xC8D67BC;
}

int FUN_0c18d704(int a4)
{
    register int t1;
    register int t3;

    t1 = *(int *)((a4 + 0x0));
    t3 = FUN_0c198a62(t1, ((((struct o4_int *)0xC8A7380)->v)), ((((struct o0_int *)0xC8A7380)->v)));
    return FUN_0c19862e(t1, t3, (*(int *)((a4 + 0x4))), 0x0);
}

int FUN_0c19a7b2(int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
    register int t0;

    t0 = *(int *)0xC8A73C0;
    (((struct o170_uchar *)(((a4 * 0x174) + t0)))->v) = a5;
    (((struct o16E_uchar *)(((a4 * 0x174) + t0)))->v) = a6;
    (((struct o16F_uchar *)(((a4 * 0x174) + t0)))->v) = a7;
    (((struct o15C_ushort *)(((a4 * 0x174) + t0)))->v) = ((short)(a8 >> 0));
    (((struct o160_uint *)(((a4 * 0x174) + t0)))->v) = a9;
    (((struct o168_uint *)(((a4 * 0x174) + t0)))->v) = a10;
    return 0x0;
}

int FUN_0c1a214e(int a4)
{
    int stk[24];

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 4)) = (strlen(a4));
    FUN_0c1a14c0((((int)stk + 0) + 0x8));
    FUN_0c1a14dc((((int)stk + 0) + 0x8), (*(int *)(((int)stk + 0))), (*(int *)(((int)stk + 4))));
    FUN_0c1a1574(0xC8B8550, (((int)stk + 0) + 0x8));
    return 0xC8B8550;
}

int ADXF_ReadSj32(int a4, int a5, int a6)
{
    register int t1;

    ADXCRS_Lock();
    t1 = FUN_0c2b5498(a4, a5, a6);
    *(unsigned char *)((a4 + 0x2)) = 0x1;
    ADXCRS_Unlock();
    return t1;
}

int FUN_0c2b9b0c(void)
{
    register int t6;

    if (((((struct o8_int *)0xC8C0864)->v)) == 0) {
        (((struct o8_uint *)0xC8C0864)->v) = (((((struct o8_int *)0xC8C0864)->v)) + 0x1);
    }
    if ((*(signed char *)0xC8C0078) == 0) {
        (((struct o0_uint *)0xC8C0864)->v) = 0x0;
        (((struct o4_uint *)0xC8C0864)->v) = 0x0;
        return 0xC8C0864;
    }
    t6 = *(int *)(((*(int *)0xC8BFFEC) + 0x4));
    return ((int (*)(void))(t6))();
}


int vmsfs_setdevicetype(int a4)
{
    register int t1;
    register int t4;

    *(unsigned int *)(((*(int *)0xC8C4600) + 0x0)) = (a4 & 0x1);
    t1 = *(int *)0xC8C4600;
    if ((a4 & 0x1) == 1) {
        *(unsigned int *)((t1 + 0xC)) = 0xC2DB280;
        *(unsigned int *)(((*(int *)0xC8C4600) + 0x10)) = 0xC2DB292;
        t4 = (a4 & 0x1);
    } else {
        *(unsigned int *)((t1 + 0xC)) = 0xC2DB28A;
        *(unsigned int *)(((*(int *)0xC8C4600) + 0x10)) = 0xC2DB29A;
        t4 = 0xC2DB28A;
    }
    return t4;
}

int search_free_dir(int a4)
{
    register int t1;
    register int t2;

    t1 = 0x0;
    t2 = (*(int *)((((a4 * 0x148) + 0xC8C4604) + 0x28)));
    for (;;) {
        if ((int)t1 >= (int)(*(int *)(((*(int *)((((a4 * 0x148) + 0xC8C4604) + 0x1C))) + 0x30)))) {
            return 0xFFFFFFFF;
        }
        if ((unsigned char)(*(signed char *)((t2 + 0x0))) == 0) {
            break;
        }
        t2 = (t2 + 0x20);
        t1 = (t1 + 0x1);
    }
    return t1;
}

int open_file_handle(void)
{
    register int t0;
    register int t1;

    t0 = 0xC8C92C4;
    t1 = 0x0;
    for (;;) {
        if ((int)t1 >= (int)((((struct o0_int *)0xC8C9504)->v))) {
            (((struct o4_uint *)0xC8C9504)->v) = 0xFFFFFF07;
            return 0x0;
        }
        if ((*(signed char *)((t0 + 0x0))) == 0) {
            break;
        }
        t0 = (t0 + 0x48);
        t1 = (t1 + 0x1);
    }
    *(unsigned char *)((t0 + 0x0)) = 0x1;
    *(unsigned int *)((t0 + 0xC)) = t1;
    return t0;
}

int FUN_0c2c6120(int a4, int a5, int a6, int a7)
{
    int t0;

    if (a5 == 1) {
        return (*(int *)((a4 + 0xC)));
    }
    if ((a5 != 0) && (t0 = *(int *)((a4 + 0x1C)), t0 != 0)) {
        t0 = ((int (*)(int, int, int, int))((*(int *)((a4 + 0x1C)))))((*(int *)((a4 + 0x20))), 0xFFFFFFFD, a6, a7);
    }
    return 0x0;
}

int FUN_0c2cc400(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = (((struct oC_int *)0xC8BF12C)->v);
    if (t0 != 0) {
        (((struct oC_uint *)0xC8BF12C)->v) = 0x0;
        (((struct o18_uint *)0xC8BF12C)->v) = 0x1;
        (((struct o0_uint *)0xC8BF12C)->v) = (((((struct o0_int *)0xC8BF12C)->v)) & (~t0));
        (((struct o18_uint *)0xC8BF12C)->v) = 0x0;
    }
    return (((unsigned int)((((struct o0_int *)0xC8BF12C)->v)) << (int)(-a4)) & 0x1);
}

int kmiFLWCTRLLockNBuf(int a4)
{
    register int t3;
    register int t2;

    (((struct o18_uint *)0xC8BF128)->v) = 0x1;
    (((struct o0_uint *)0xC8BF128)->v) = (((((struct o0_int *)0xC8BF128)->v)) | ((int)0x1 << (int)a4));
    (((struct o18_uint *)0xC8BF128)->v) = 0x0;
    t3 = 0xC8BF140;
    if (((((struct o4_int *)0xC8BFFC8)->v)) != 0) {
        t2 = (((struct o0_int *)0xC8BFFC8)->v);
        (((struct o0_uint *)0xC8BFFC8)->v) = ((t2 + 0x1) & 0x1);
        t3 = ((t2 + 0x1) & 0x1);
    }
    return t3;
}

int FUN_0c2d54a0(int a4)
{
    register int t0;

    t0 = *(int *)0xC8D25F0;
    if (((*(signed char *)(((t0 + 0x30) + 0x0))) & 2) == 0) {
        if ((unsigned char)((*(signed char *)(((t0 + 0x78) + 0x0))) & 0x1) != 0) {
            *(unsigned char *)((a4 + 0x0)) = (*(signed char *)((t0 + 0x0)));
            return 0x1;
        }
        return 0x0;
    }
    *(unsigned char *)((a4 + 0x0)) = (*(signed char *)((t0 + 0x0)));
    return 0x1;
}

int FUN_0c2d7662(void)
{
    int t0;

    if ((((((struct oA_short *)0xC8D6840)->v)) == 0) && (t0 = *(signed char *)0xC8D2700, t0 == 0)) {
        t0 = FUN_0c2ec430(((((struct o0_int *)0xC8D6840)->v)));
        if ((signed char)t0 != 0) {
            return 0x1;
        }
        return 0x0;
    }
    return 0x0;
}

int FUN_0c2e8122(void)
{
    register int t4;

    FUN_0c2e83ae();
    *(unsigned char *)0xC8D666A = 0x0;
    (((struct o11_uchar *)0xC8D677D)->v) = ((*(signed char *)0xC8D678E) & 0x7F);
    (((struct o2_uchar *)0xC8D677D)->v) = ((*(signed char *)0xC8D677F) | 0x1);
    (((struct o1_uchar *)0xC8D677D)->v) = ((*(signed char *)0xC8D677E) | 0x40);
    t4 = *(signed char *)0xC8D677D;
    (((struct o0_uchar *)0xC8D677D)->v) = (t4 | 0x9);
    return (t4 | 0x9);
}

int FUN_0c2f29c8(void)
{
    register int t0;
    register int t1;

    t0 = 0x0;
    for (;;) {
        t1 = (unsigned char)t0;
        t0 = (t0 + 0x1);
        FUN_0c2fa4c4(0xFF, t1);
        if ((int)(unsigned char)t0 >= (int)0x4) {
            break;
        }
    }
    return FUN_0c2fa4ec();
}

int nlSetPaletteData(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    if ((*(signed char *)(((int)_builtin_get_gbr() + 1))) != 3) {
        t0 = (a4 << 2);
        t1 = a5;
        t2 = a6;
        for (;;) {
            t3 = *(short *)((t1 + 0x0));
            t1 = (t1 + 0x2);
            t2 = (t2 - 0x1);
            *(unsigned short *)((t0 + 0xC8B8640)) = t3;
            t0 = (t0 + 0x4);
            if (t2 == 0) {
                break;
            }
        }
    } else {
        t0 = (a4 << 2);
        t1 = a5;
        t2 = a6;
        for (;;) {
            t3 = *(int *)((t1 + 0x0));
            t1 = (t1 + 0x4);
            t2 = (t2 - 0x1);
            *(unsigned int *)((t0 + 0xC8B8640)) = t3;
            t0 = (t0 + 0x4);
            if (t2 == 0) {
                break;
            }
        }
    }
    *(unsigned char *)(((int)_builtin_get_gbr() + 0)) = 0x1;
    return 0x1;
}

int FUN_0c185054(int a4)
{
    register int t0;

    t0 = a4;
    for (;;) {
        if ((*(signed char *)((t0 + 0x0))) == 0) {
            return (t0 + 0x1);
        }
        if (((unsigned char)(*(signed char *)((t0 + 0x0))) & 0xC0) == 0xC0) {
            break;
        }
        t0 = (t0 + ((unsigned char)(*(signed char *)((t0 + 0x0))) + 0x1));
    }
    return (t0 + 0x2);
}

int FUN_0c18d438(int a4)
{
    register int t4;

    t4 = FUN_0c19a7e0((*(short *)((a4 + 0x0))), (*(short *)((a4 + 0x2))), (*(int *)((a4 + 0x8))), (*(short *)((a4 + 0x4))));
    if ((int)t4 < 0) {
        return t4;
    }
    return 0x0;
}

int FUN_0c18d5c4(int a4)
{
    register int t4;

    t4 = FUN_0c18ede8((*(int *)((a4 + 0x0))), (*(short *)((a4 + 0x4))), (*(int *)((a4 + 0x8))), (*(int *)((a4 + 0xC))));
    if ((int)t4 < 0) {
        return t4;
    }
    return (0xC0 | t4);
}

int FUN_0c18e864(int a4)
{
    if (a4 != 0) {
        if ((*(int *)((a4 + 0x4))) != 0) {
            FUN_0c198d84((*(int *)((a4 + 0x4))));
            *(unsigned int *)0xC8A8EA8 = 0x0;
        }
        return 0x0;
    }
    return 0xFFFFFFFF;
}

int FUN_0c191164(int a4, int a5, int a6)
{
    register int t0;
    register int t1;

    if (a4 != 0) {
        *(unsigned int *)((a4 + 0x4)) = a5;
        t0 = *(int *)0xC8A97DC;
        if (t0 != 0) {
            t1 = t0;
            for (;;) {
                if ((*(int *)((t1 + 0x0))) == 0) {
                    break;
                }
                if (t1 != a4) {
                    t1 = (*(int *)((t1 + 0x0)));
                    continue;
                }
                (((struct o18_uchar *)(a4))->v) = 0x0;
                return 0x18;
            }
            *(unsigned int *)((t1 + 0x0)) = a4;
            *(unsigned int *)((a4 + 0x0)) = 0x0;
        } else {
            *(unsigned int *)0xC8A97DC = a4;
            *(unsigned int *)((a4 + 0x0)) = 0x0;
        }
        (((struct o18_uchar *)(a4))->v) = 0x0;
        t0 = 0x18;
    }
    return t0;
}


int FUN_0c19c19c(int a4, int a5, int a6, int a7)
{
    register int t1;
    register int t2;
    register int t3;

    t1 = 0x0;
    t2 = 0x0;
    t3 = a7;
    for (;;) {
        if ((int)t2 >= (int)(unsigned char)(*(signed char *)0xC8A738D)) {
            break;
        }
        t3 = ((((struct o0_int *)0xC8A73C4)->v));
        t2 = (t2 + 0x1);
        t3 = (t3 + t1);
        t1 = (t1 + 0x30);
        *(unsigned short *)((t3 + 0x8)) = (0x0);
    }
    (((struct o16_ushort *)0xC8A73C4)->v) = 0x0;
    return 0x0;
}

int FUN_0c19c166(int a4)
{
    if ((*(signed char *)((a4 + 0xB0))) == 0) {
        return 0xFFFFFFFF;
    }
    FUN_0c198d84((0xAC + a4));
    (((struct oB0_uchar *)(a4))->v) = 0x0;
    return 0x0;
}

int FUN_0c1a03b2(int a4, int a5)
{
    int stk[2];

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned short *)(((int)stk + 0)) = a5;
    (((struct o0_uint *)0xC8B8408)->v) = 0xC8B84A0;
    FUN_0c187a88(0xC8B84A0, (*(int *)(((int)stk + 4))), (unsigned short)(*(short *)(((int)stk + 0))));
    (((struct o4_ushort *)0xC8B8408)->v) = (*(short *)(((int)stk + 0)));
    return 0xC8B8408;
}

int FUN_0c2bcb70(Stk4 s)
{
    register int t0;

    t0 = FUN_0c2daf5a(s.w[0]);
    if (((((struct o10E8_int *)((*(int *)0xC8D4D84)))->v)) != 0) {
        FUN_0c2bc7e4();
    }
    return t0;
}

int FUN_0c2bcbd0(Stk4 s)
{
    register int t0;

    t0 = FUN_0c2db024(s.w[0]);
    if (((((struct o10E8_int *)((*(int *)0xC8D4D84)))->v)) != 0) {
        FUN_0c2bc7e4();
    }
    return t0;
}

int kmySetBGPlane(int a4)
{
    int stk[2];

    *(unsigned int *)(((int)stk + 4)) = a4;
    kmyGetBGPlaneBase(a4, ((int)stk + 0));
    kmyCopyToFrameBuffer((*(int *)(((int)stk + 0))), 0xC8D0CC0, ((((struct o0_int *)0xC8D0CBC)->v)));
    return (kmySetSkipCount((*(int *)(((int)stk + 4))), ((((struct o4_int *)0xC8D0CBC)->v))));
}

int kmyiInitializeNativeBuffer(int a4, int a5, int a6, int a7)
{
    register int t5;

    *(unsigned int *)((((((struct o88_int *)(a4))->v)) + 0x28)) = ((((struct o0_int *)0xC8D0620)->v));
    *(unsigned int *)((((((struct o88_int *)(a4))->v)) + 0x24)) = ((((struct o4_int *)0xC8D0620)->v));
    *(unsigned int *)((a4 + 0x1C)) = a6;
    *(unsigned int *)((a4 + 0x18)) = a5;
    *(unsigned int *)((((((struct o88_int *)(a4))->v)) + 0x1C)) = a7;
    if (a7 != 0) {
        t5 = (((struct o88_int *)(a4))->v);
        *(unsigned int *)((t5 + 0x24)) = ((*(int *)((t5 + 0x24))) | 0x10000);
    }
    return 0x0;
}

int FUN_0c2cc2c2(void)
{
    register int t0;
    register int t1;
    int t3;

    t0 = 0x0;
    t1 = 0x0;
    for (;;) {
        if (((*(int *)((t0 + 0xC8BF148))) == 1) && (t3 = *(int *)((t0 + 0xC8BF154)), t3 == 0)) {
            break;
        }
        t0 = (t0 + 0x1C4);
        t1 = (t1 + 0x1C4);
        if ((unsigned int)t0 >= (unsigned int)0xE20) {
            return 0x0;
        }
    }
    return (0xC8BF148 + t1);
}

int FUN_0c2cc320(void)
{
    register int t0;
    register int t1;
    int t3;

    t0 = 0x0;
    t1 = 0x0;
    for (;;) {
        if (((*(int *)((t0 + 0xC8BF148))) == 1) && (t3 = *(int *)((t0 + 0xC8BF158)), t3 == 0)) {
            break;
        }
        t0 = (t0 + 0x1C4);
        t1 = (t1 + 0x1C4);
        if ((unsigned int)t0 >= (unsigned int)0xE20) {
            return 0x0;
        }
    }
    return (0xC8BF148 + t1);
}

void FUN_0c2d80c4(int a4, int a5)
{
    register int t7;

    if ((*(int *)((a4 + 0x8))) != 0) {
        if (((*(signed char *)((((*(int *)((a4 + 0x8))) + 0x30) + 0x0))) & 16) != 0) {
            (((struct o46_uchar *)((*(int *)((a4 + 0xC)))))->v) = 0x0;
            return;
        }
        t7 = *(int *)((a4 + 0xC));
        (((struct o46_uchar *)(t7))->v) = ((*(signed char *)((t7 + 0x46))) | (*(signed char *)(((*(int *)((a5 + 0x4))) + 0x0))));
        return;
    }
}

int FUN_0c2d7fd4(int a4)
{
    if (((((struct o4_int *)0xC8D3108)->v)) == 0) {
        (((struct o4_uint *)0xC8D3108)->v) = (((((struct o4_int *)0xC8D3108)->v)) + 0x1);
    }
    (((struct o0_uchar *)0xC8D3108)->v) = (FUN_0c2d80f0(a4));
    (((struct o1_uchar *)0xC8D3108)->v) = 0x0;
    (((struct o2_uchar *)0xC8D3108)->v) = 0x1;
    return FUN_0c2b9b3e(0xC8D3108);
}

int FUN_0c2dae80(int a4, int a5, int a6, int a7)
{
    register int t2;

    if (_builtin_tas((char *)(*(int *)0xC2DB268)) == 0) {
        mpdrv_dpf(a4, a5, a6, a7, 0xC3007C0);
        return 0xFFFFFFFE;
    }
    t2 = mpdrv_set_dreset_ns(a4);
    *(unsigned char *)(((*(int *)0xC2DB268) + 0x0)) = 0x0;
    return t2;
}

int FUN_0c2dadf8(int a4, int a5, int a6, int a7)
{
    register int t2;

    if (_builtin_tas((char *)(*(int *)0xC2DB268)) == 0) {
        mpdrv_dpf(a4, a5, a6, a7, 0xC3007C0);
        return 0xFFFFFFFE;
    }
    t2 = mpdrv_set_dreq_ns(a4);
    *(unsigned char *)(((*(int *)0xC2DB268) + 0x0)) = 0x0;
    return t2;
}

int FUN_0c2dae3c(int a4, int a5, int a6, int a7)
{
    register int t2;

    if (_builtin_tas((char *)(*(int *)0xC2DB268)) == 0) {
        mpdrv_dpf(a4, a5, a6, a7, 0xC3007C0);
        return 0xFFFFFFFE;
    }
    t2 = mpdrv_set_dkill_ns(a4);
    *(unsigned char *)(((*(int *)0xC2DB268) + 0x0)) = 0x0;
    return t2;
}

int FUN_0c2dad96(int a4, int a5, int a6, int a7)
{
    register int t2;

    if (_builtin_tas((char *)(*(int *)0xC2DB268)) == 0) {
        mpdrv_dpf(a4, a5, a6, a7, 0xC3007C0);
        return 0xFFFFFFFE;
    }
    t2 = mpdrv_set_getcond_ns(a4, a5);
    *(unsigned char *)(((*(int *)0xC2DB268) + 0x0)) = 0x0;
    return t2;
}

int FUN_0c2daf08(int a4, int a5, int a6, int a7)
{
    register int t2;

    if (_builtin_tas((char *)(*(int *)0xC2DB268)) == 0) {
        mpdrv_dpf(a4, a5, a6, a7, 0xC3007C0);
        return 0xFFFFFFFE;
    }
    t2 = mpdrv_set_getminfo_ns(a4, a5, a6);
    *(unsigned char *)(((*(int *)0xC2DB268) + 0x0)) = 0x0;
    return t2;
}

int FUN_0c2daec4(int a4, int a5, int a6, int a7)
{
    register int t2;

    if (_builtin_tas((char *)(*(int *)0xC2DB268)) == 0) {
        mpdrv_dpf(a4, a5, a6, a7, 0xC3007C0);
        return 0xFFFFFFFE;
    }
    t2 = mpdrv_set_allstatreq_ns(a4);
    *(unsigned char *)(((*(int *)0xC2DB268) + 0x0)) = 0x0;
    return t2;
}

int FUN_0c2db124(int a4, int a5, int a6, int a7)
{
    register int t2;

    if (_builtin_tas((char *)(*(int *)0xC2DB268)) == 0) {
        mpdrv_dpf(a4, a5, a6, a7, 0xC3007C0);
        return 0xFFFFFFFE;
    }
    t2 = mpdrv_set_ft4ctrl_ns(a4, a5);
    *(unsigned char *)(((*(int *)0xC2DB268) + 0x0)) = 0x0;
    return t2;
}

int FUN_0c2db090(int a4, int a5, int a6, int a7)
{
    register int t2;

    if (_builtin_tas((char *)(*(int *)0xC2DB268)) == 0) {
        mpdrv_dpf(a4, a5, a6, a7, 0xC3007C0);
        return 0xFFFFFFFE;
    }
    t2 = mpdrv_set_transagain_ns(a4);
    *(unsigned char *)(((*(int *)0xC2DB268) + 0x0)) = 0x0;
    return t2;
}

int FUN_0c2db0d4(int a4, int a5, int a6, int a7)
{
    register int t2;

    if (_builtin_tas((char *)(*(int *)0xC2DB268)) == 0) {
        mpdrv_dpf(a4, a5, a6, a7, 0xC3007C0);
        return 0xFFFFFFFE;
    }
    t2 = mpdrv_set_arctrl_ns(a4, a5);
    *(unsigned char *)(((*(int *)0xC2DB268) + 0x0)) = 0x0;
    return t2;
}

int FUN_0c2db174(int a4, int a5, int a6, int a7)
{
    register int t2;

    if (_builtin_tas((char *)(*(int *)0xC2DB268)) == 0) {
        mpdrv_dpf(a4, a5, a6, a7, 0xC3007C0);
        return 0xFFFFFFFE;
    }
    t2 = mpdrv_set_setcond_ns(a4, a5, a6, a7);
    *(unsigned char *)(((*(int *)0xC2DB268) + 0x0)) = 0x0;
    return t2;
}

int FUN_0c2e5ea0(int a4)
{
    register int t7;

    t7 = (a4 - 48);
    if (((int)(unsigned char)a4 < (int)0x30) || ((int)(unsigned char)a4 > (int)0x39)) {
        t7 = (a4 - 55);
        if (((int)(unsigned char)a4 >= (int)0x41) && ((int)(unsigned char)a4 <= (int)0x46)) {
        } else {
            *(unsigned char *)0xC8D6498 = 0x2;
            t7 = a4;
        }
    }
    return t7;
}

int FUN_0c2e6cba(int a4)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)0xC8D6795;
    if (((unsigned char)t0 & 128) != 0) {
        t1 = *(int *)((a4 + 0x0));
        *(unsigned int *)((a4 + 0x0)) = (t1 + 0x1);
        *(unsigned char *)((((t1 + 0x1) - 0x1) + 0x0)) = 0x42;
        t1 = *(int *)((a4 + 0x0));
        *(unsigned int *)((a4 + 0x0)) = (t1 + 0x1);
        *(unsigned char *)((((t1 + 0x1) - 0x1) + 0x0)) = 0x49;
        t1 = *(int *)((a4 + 0x0));
        *(unsigned int *)((a4 + 0x0)) = (t1 + 0x1);
        *(unsigned char *)((((t1 + 0x1) - 0x1) + 0x0)) = 0x53;
    }
    return (unsigned char)t0;
}

int FUN_0c2e7350(int a4)
{
    int stk[5];

    *(unsigned char *)(((int)stk + 8)) = a4;
    *(int *)((int)stk + 4) = ((FUN_0c2e737c((*(signed char *)(((int)stk + 8))))));
    *(int *)((int)stk + 0) = 0xC30205C;
    FUN_0c187cac((((int)stk + 0) + 0xC), 0x0, 0x0, 0x0, 0xC30205C);
    FUN_0c2e7200((((int)stk + 0) + 0xC));
    return (FUN_0c2e7230(0xC302060));
}

int FUN_0c2efbd8(void)
{
    register int t2;

    (((struct o0_uchar *)0xC8D678D)->v) = ((*(signed char *)0xC8D678D) & 0xEF);
    FUN_0c2d71b2();
    t2 = *(signed char *)0xC8D678D;
    (((struct o0_uchar *)0xC8D678D)->v) = (t2 | 0x1);
    *(unsigned int *)0xC8D7028 = (*(int *)0xC8D67BC);
    return (t2 | 0x1);
}

int FUN_0c2f998e(void)
{
    register int t5;

    if (((unsigned char)(*(signed char *)0xC8D645B) & 32) != 0) {
        t5 = (FUN_0c2d37de());
    } else {
        
        t5 = (FUN_0c2d37de());
    }
    return t5;
}

int FUN_0c180f78(void)
{
    register int t0;
    register int t1;

    t0 = *(int *)0xC86CBF8;
    t1 = nlsndG2Read((t0 + 0x10));
    if (t1 != 0) {
        nlsndG2Write(0x0, (t0 + 0x10));
    }
    return t1;
}

int FUN_0c18170c(int a4, int a5)
{
    if ((short)a5 != 4) {
        if ((short)a5 != 8) {
            if ((short)a5 != 16) {
                return (short)a5;
            }
            *(unsigned char *)(((a4 + 0x8) + 0x0)) = 0x0;
            return (short)a5;
        }
        *(unsigned char *)(((a4 + 0x8) + 0x0)) = 0x1;
        return (short)a5;
    }
    *(unsigned char *)(((a4 + 0x8) + 0x0)) = 0x3;
    return (short)a5;
}

int FUN_0c181b6a(int a4)
{
    register int t2;

    if ((*(int *)((a4 + 0x0))) != 1) {
        return 0xFFFFFFFF;
    }
    t2 = *(int *)0xC86CC38;
    if (t2 == 0) {
        return 0x100;
    }
    if (t2 != 1) {
        return 0xFFFFFFFB;
    }
    return 0x0;
}


int FUN_0c183d72(int a4)
{
    int stk[5];

    *(unsigned int *)(((int)stk + 16)) = a4;
    *(int *)((int)stk + 8) = 0x14E;
    *(int *)((int)stk + 4) = 0xC206080;
    *(int *)((int)stk + 0) = 0xC206070;
    FUN_0c18c9fc();
    return (FUN_0c18d320((*(int *)(((int)stk + 16))), (((int)stk + 0) + 0xC)));
}

int FUN_0c184c0c(int a4)
{
    FUN_0c18c9fc();
    return (FUN_0c1842e8(0x0, a4, 0x0));
}

int FUN_0c184d7e(int a4, int a5, int a6)
{
    int stk[5];

    *(unsigned short *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 4)) = 0x0;
    *(unsigned char *)(((int)stk + 8)) = 0x0;
    *(unsigned char *)(((int)stk + 9)) = 0x1;
    *(unsigned short *)(((int)stk + 12)) = a6;
    *(unsigned int *)(((int)stk + 16)) = a5;
    return (FUN_0c184000(0x4118, ((int)stk + 0), 0x0));
}

int FUN_0c185560(int a4)
{
    register int t0;

    t0 = 0x0;
    for (;;) {
        if ((*(short *)((((short)((short)t0 * (short)0x34) + 0xC8A2C60) + 0x0))) == (short)a4) {
            break;
        }
        t0 = (t0 + 0x1);
        if ((int)(short)t0 >= (int)0xA) {
            return 0xFFFFFFFF;
        }
    }
    return t0;
}

int FUN_0c18558a(int a4)
{
    register int t0;

    t0 = 0x0;
    for (;;) {
        if ((*(short *)((((short)((short)t0 * (short)0x34) + 0xC8A2C60) + 0x2))) == (short)a4) {
            break;
        }
        t0 = (t0 + 0x1);
        if ((int)(short)t0 >= (int)0xA) {
            return 0xFFFFFFFF;
        }
    }
    return t0;
}

int FUN_0c184f70(int a4)
{
    int stk[2];

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned short *)(((int)stk + 4)) = (*(short *)((0xC89C312 + (short)((short)a4 * (short)0xC24))));
    FUN_0c18cf5c((((int)stk + 0) + 0x4));
    return (FUN_0c184e64((*(int *)(((int)stk + 0)))));
}

int FUN_0c18e064(int a4)
{
    register int t0;
    register int t1;

    *(unsigned int *)((a4 + 0x4)) = 0x0;
    *(unsigned int *)((a4 + 0x8)) = 0x0;
    t0 = (a4 + 0xC);
    for (;;) {
        t1 = t0;
        t0 = (t0 + 0x60C);
        *(unsigned int *)((t1 + 0x0)) = 0x0;
        *(unsigned int *)((t1 + 0x4)) = 0xFFFFFFFF;
        *(unsigned int *)((t1 + 0x8)) = 0x0;
        if ((unsigned int)t0 >= (unsigned int)((a4 + 0xC) + 0x1830)) {
            break;
        }
    }
    return 0x60C;
}

int FUN_0c18ea14(int a4)
{
    int t1;
    register int t2;

    if (((int)(*(int *)0xC8A8FC4) > (int)a4) && (t1 = (int)(((unsigned int)a4) >> 31), t2 = *(signed char *)(((((((a4 << 1) + a4) << 2) << 2) + 0xC8A8F04) + 0x1)), (unsigned char)t2 == 2)) {
        return (((((a4 << 1) + a4) << 2) << 2) + 0xC8A8F04);
    }
    return 0x0;
}

int FUN_0c18fd0c(void)
{
    register int t0;
    register int t1;

    if ((unsigned int)0xC8A93DC < (unsigned int)0xC8A965C) {
        t0 = 0xC8A93DC;
        t1 = 0xC8A93DC;
        for (;;) {
            if ((*(int *)((t0 + 0x10))) == 0) {
                break;
            }
            t0 = (t0 + 0x14);
            t1 = (t1 + 0x14);
            if ((unsigned int)t0 >= (unsigned int)0xC8A965C) {
                return 0x0;
            }
        }
        *(unsigned int *)((t1 + 0x10)) = 0x1;
        return t1;
    }
    return 0x0;
}

int FUN_0c18fd36(void)
{
    register int t0;
    register int t1;

    if ((unsigned int)0xC8A935C < (unsigned int)0xC8A93DC) {
        t0 = 0xC8A935C;
        t1 = 0xC8A935C;
        for (;;) {
            if ((*(int *)((t0 + 0x1C))) == 0) {
                break;
            }
            t0 = (t0 + 0x20);
            t1 = (t1 + 0x20);
            if ((unsigned int)t0 >= (unsigned int)0xC8A93DC) {
                return 0x0;
            }
        }
        *(unsigned int *)((t1 + 0x1C)) = 0x1;
        return t1;
    }
    return 0x0;
}

int FUN_0c1a027c(int a4)
{
    if (((unsigned short)a4 != 0) && ((unsigned short)a4 != 1)) {
        return 0x0;
    }
    *(unsigned int *)(((((unsigned short)a4 * (unsigned short)0x898) + 0xC8B72D8) + 0x0)) = (0x98 + (((unsigned short)a4 * (unsigned short)0x898) + 0xC8B72D8));
    *(unsigned short *)(((((unsigned short)a4 * (unsigned short)0x898) + 0xC8B72D8) + 0x4)) = 0x0;
    return (((unsigned short)a4 * (unsigned short)0x898) + 0xC8B72D8);
}

int FUN_0c1a0388(int a4, int a5)
{
    int t0;

    if ((a4 != 0) && (t0 = *(int *)((a4 + 0x0)), (int)(t0 - (a4 + 0x8)) >= (int)(short)a5)) {
        *(unsigned int *)((a4 + 0x0)) = ((*(int *)((a4 + 0x0))) - (short)a5);
        *(unsigned short *)((a4 + 0x4)) = ((*(short *)((a4 + 0x4))) + a5);
        return a4;
    }
    return 0x0;
}

int syRtcExecServer(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    if ((((((struct o4_int *)0xC8B9DD8)->v)) & 1) == 0) {
        (((struct o0_uint *)0xC8B9DD8)->v) = (syRtcGetAndCheckCount(((((struct o0_int *)0xC8B9DD8)->v)), a5, a6, a7));
    }
    t0 = (((struct o4_int *)0xC8B9DD8)->v);
    t1 = t0;
    if ((t0 & 2) != 0) {
        t0 = syRtcGetCountForce();
        (((struct o0_uint *)0xC8B9DD8)->v) = t0;
        t1 = t0;
    }
    return t1;
}

int FUN_0c2b2838(int a4, int a5, int a6)
{
    register int t0;

    t0 = vmsfs_c_getstate(a4);
    if (t0 != 0) {
        return 0xFFFFFFFF;
    }
    return vmsfs_findfirst_ex(a4, a5, a6);
}

int FUN_0c2b286a(int a4, int a5, int a6)
{
    register int t0;

    t0 = vmsfs_c_getstate(a4);
    if (t0 != 0) {
        return 0xFFFFFFFF;
    }
    return vmsfs_findnext_ex(a4, a5, a6);
}

int FUN_0c2b28ca(int a4, int a5, int a6)
{
    register int t0;

    t0 = vmsfs_c_getstate(a4);
    if (t0 != 0) {
        return 0xFFFFFFFF;
    }
    return vmsfs_fopen(a4, a5, a6);
}

int syHwInit(void)
{
    hwInit();
    syIntInit(((((struct o4_int *)0xC2FE9B0)->v)), (*(int *)0xC3036F8));
    sySqInit();
    FUN_0c2ba85c(((((struct o0_int *)0xC2FE9B0)->v)));
    return FUN_0c0ff884();
}

int buGetFileInfo(int a4, int a5, int a6)
{
    register int t0;

    t0 = vmsfs_c_getstate(a4);
    if (t0 != 0) {
        return 0xFFFFFFFF;
    }
    return vmsfs_fgetinfo(a4, a5, a6);
}

int FUN_0c2b33ec(int a4, int a5)
{
    register int t5;

    if (a4 != 5) {
        if (a4 != 6) {
            t5 = (FUN_0c2b3456(a4, a5));
        } else {
            t5 = (FUN_0c2b3438(a4, a5));
        }
    } else {
        t5 = (FUN_0c2b3416(a4, a5));
    }
    return t5;
}

int ADXT_GetTimeReal(int a4)
{
    int stk[2];

    FUN_0c2b477a(a4, ((int)stk + 0), (((int)stk + 0) + 0x4));
    return (int)(((float)(*(int *)(((int)stk + 0))) / (float)(*(int *)(((int)stk + 4)))) * (*(float *)0xC2B4940));
}

int kmSetPaletteData(int a4)
{
    *(unsigned int *)0xC8D1D98 = ((*(int *)0xC8D1D98) & 0xFFFFFFFD);
    kmyMemCopy(0xC8D0D98, a4, 0x1000);
    *(unsigned int *)0xC8D1D98 = ((*(int *)0xC8D1D98) | 0x2);
    return 0x0;
}

int vmsfs_unmount(int a4)
{
    if ((*(signed char *)((((a4 * 0x148) + 0xC8C4604) + 0x2))) == 0) {
        return 0xFFFFFF01;
    }
    *(unsigned char *)((((a4 * 0x148) + 0xC8C4604) + 0x9)) = 0x0;
    *(unsigned char *)((((a4 * 0x148) + 0xC8C4604) + 0x8)) = 0x0;
    *(unsigned char *)((((a4 * 0x148) + 0xC8C4604) + 0xA)) = 0x0;
    *(unsigned char *)((((a4 * 0x148) + 0xC8C4604) + 0xB)) = 0x0;
    *(unsigned char *)((((a4 * 0x148) + 0xC8C4604) + 0xC)) = 0x0;
    *(unsigned int *)((((a4 * 0x148) + 0xC8C4604) + 0x4)) = 0x0;
    return 0x0;
}

int FUN_0c2cf974(void)
{
    register int t1;

    for (;;) {
        t1 = FUN_0c2ec430((*(int *)0xC8D663C));
        if ((signed char)t1 == 0) {
            break;
        }
        FUN_0c2cfc92();
        *(unsigned int *)0xC8D663C = ((*(int *)0xC8D663C) + 0x64);
    }
    return (signed char)t1;
}

int FUN_0c2d374a(int a4, int a5)
{
    (((struct o0_uchar *)0xC8D2650)->v) = a4;
    (((struct o1_uchar *)0xC8D2650)->v) = a5;
    FUN_0c2d487c(0x10F, 0x0, 0x1);
    FUN_0c2d487c(0x21E, 0x1, 0x1);
    return FUN_0c2d487c(0x21F, 0xD2, 0x1);
}

int FUN_0c2d850e(int a4)
{
    if (((((struct o4_int *)0xC8D3110)->v)) == 0) {
        (((struct o4_uint *)0xC8D3110)->v) = (((((struct o4_int *)0xC8D3110)->v)) + 0x1);
    }
    (((struct o0_uchar *)0xC8D3110)->v) = (FUN_0c2d80f0(a4));
    (((struct o1_uchar *)0xC8D3110)->v) = 0x1;
    (((struct o2_uchar *)0xC8D3110)->v) = 0x1;
    return FUN_0c2b9b3e(0xC8D3110);
}

int FUN_0c2ebeae(void)
{
    register int t1;

    if (((unsigned char)(*(signed char *)0xC8D67BA) & 1) == 0) {
        t1 = FUN_0c2ebfcc();
        if ((signed char)t1 == 0) {
            *(unsigned short *)0xC8D67B8 = ((*(short *)0xC8D67B8) & 0x71);
            return FUN_0c2eb978(0x9);
        }
        return (signed char)t1;
    }
    return FUN_0c2eb978(0x9);
}

int FUN_0c2f35ac(void)
{
    register int t1;

    if (((unsigned char)(*(signed char *)0xC8D67BA) & 2) == 0) {
        t1 = *(signed char *)0xC8D6793;
        (((struct o2_uchar *)0xC8D6791)->v) = (t1 & 0x8);
        (((struct o4_uchar *)0xC8D6791)->v) = 0x0;
        (((struct o0_uchar *)0xC8D6791)->v) = 0x7F;
        (((struct o25_uchar *)0xC8D6791)->v) = 0x0;
        return (t1 & 0x8);
    }
    return FUN_0c2f35d6();
}

int FUN_0c2f734a(void)
{
    register int t7;

    if ((*(signed char *)0xC8E0976) == 0) {
        FUN_0c2f7e96((*(short *)0xC8E0994));
        FUN_0c2f7d9c((*(short *)0xC8E0994));
        FUN_0c2f7d9c(0x1);
        t7 = FUN_0c2f7f3a();
        (((struct o0_uchar *)0xC8E0975)->v) = 0x1;
    }
    return t7;
}

int nlFogTableOff(void)
{
    int stk[128];
    register int t0;

    t0 = ((int)stk + 0);
    for (;;) {
        *(float *)((t0 + 0x0)) = 0.0f;
        t0 = (t0 + 0x4);
        if ((unsigned int)t0 >= (unsigned int)(0x200 + ((int)stk + 0))) {
            break;
        }
    }
    return (thunk_FUN_0c2b5b00(((int)stk + 0)));
}

int nlGetPushedMatrix(int a4, int a5, int a6, float f4, float f5, float f6, float f7, float f8, float f9)
{
    register int t0;

    t0 = *(int *)0xC86877C;
    if (a4 == 0) {
        return nlLoadMatrix8((t0 - 64));
    }
    return nlCopyMatrix(a4, (t0 - 64), a6, f4, f5, f6, f7, f8, f9);
}

int nlMakeModelViewProjectMatrix(void)
{
    nlPushMatrix(((((struct oC_int *)0xC868794)->v)));
    nlMultiMatrix(((((struct o0_int *)0xC868794)->v)));
    nlMultiPushedMatrix();
    nlStoreMatrix8(0xC868968);
    return nlPopMatrix(0x1);
}

int nlObjPutSetSpecularEyeDirectionF(float f4, float f5, float f6)
{
    (((struct o10_float *)0xC2A61D8)->v) = (((((struct o0_float *)0xC2A61D8)->v)) + f4);
    (((struct o14_float *)0xC2A61D8)->v) = (((((struct o4_float *)0xC2A61D8)->v)) + f5);
    (((struct o18_float *)0xC2A61D8)->v) = (((((struct o8_float *)0xC2A61D8)->v)) + f6);
    (((struct o20_float *)0xC2A61D8)->v) = f4;
    (((struct o24_float *)0xC2A61D8)->v) = f5;
    (((struct o28_float *)0xC2A61D8)->v) = f6;
    return 0x8;
}

int FUN_0c183a80(int a4, int a5)
{
    FUN_0c18c9fc();
    *(unsigned int *)((a5 + 0x0)) = (*(int *)0xC2AE6D4);
    return 0x0;
}

int FUN_0c183abe(int a4, int a5)
{
    FUN_0c18c9fc();
    *(unsigned int *)((a5 + 0x0)) = (*(int *)0xC8A978C);
    return 0x0;
}

int FUN_0c1848c0(void)
{
    FUN_0c191d9e();
    if (((((struct oC_int *)0xC2A62B8)->v)) != 0) {
        (((struct o8_uint *)0xC2A62B8)->v) = 0x1;
        (((struct o0_uint *)0xC2A62B8)->v) = 0x6;
    }
    FUN_0c191dae();
    return 0x0;
}

int FUN_0c185d28(int a4)
{
    int stk[1];

    *(unsigned char *)((((int)stk + 0) + 0x0)) = ((unsigned int)((unsigned int)(0xFF000000 & a4) >> 16) >> 8);
    *(unsigned char *)((((int)stk + 0) + 0x1)) = ((unsigned int)(0xFF0000 & a4) >> 16);
    *(unsigned char *)((((int)stk + 0) + 0x2)) = ((unsigned int)(0xFF00 & a4) >> 8);
    *(unsigned char *)((((int)stk + 0) + 0x3)) = a4;
    return (*(int *)(((int)stk + 0)));
}

int FUN_0c185d00(int a4)
{
    int stk[1];

    *(unsigned char *)((((int)stk + 0) + 0x0)) = ((unsigned int)((unsigned int)(0xFF000000 & a4) >> 16) >> 8);
    *(unsigned char *)((((int)stk + 0) + 0x1)) = ((unsigned int)(0xFF0000 & a4) >> 16);
    *(unsigned char *)((((int)stk + 0) + 0x2)) = ((unsigned int)(0xFF00 & a4) >> 8);
    *(unsigned char *)((((int)stk + 0) + 0x3)) = a4;
    return (*(int *)(((int)stk + 0)));
}

int nlDispStripTexOfs(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = FUN_0c186f40(0xC2A63A8, a6, a6, a7);
    if (t0 == 0) {
        return FUN_0c187220(a4, a5);
    }
    return t0;
}

int FUN_0c18d780(int a4)
{
    int stk[3];

    *(unsigned int *)(((int)stk + 0)) = a4;
    FUN_0c187a88((((int)stk + 0) + 0x4), (a4 + 0x4), 0x6);
    return (FUN_0c18e54a((*(int *)(((*(int *)(((int)stk + 0))) + 0x0)))));
}

int FUN_0c18d758(int a4)
{
    int stk[2];

    FUN_0c187a88(((int)stk + 0), (a4 + 0x4), 0x6);
    return (FUN_0c18e516((*(int *)((a4 + 0x0))), ((int)stk + 0), (*(short *)((a4 + 0xA)))));
}

int FUN_0c18fd60(int a4)
{
    register int t0;
    register int t1;

    if ((unsigned int)0xC8A93DC < (unsigned int)0xC8A965C) {
        t0 = 0xC8A93DC;
        t1 = 0xC8A93DC;
        for (;;) {
            if (t0 == a4) {
                break;
            }
            t0 = (t0 + 0x14);
            t1 = (t1 + 0x14);
            if ((unsigned int)t0 >= (unsigned int)0xC8A965C) {
                return 0xFFFFFFFF;
            }
        }
        *(unsigned int *)((t1 + 0x10)) = 0x0;
        return 0x0;
    }
    return 0xFFFFFFFF;
}

int FUN_0c18fd88(int a4)
{
    register int t0;
    register int t1;

    if ((unsigned int)0xC8A935C < (unsigned int)0xC8A93DC) {
        t0 = 0xC8A935C;
        t1 = 0xC8A935C;
        for (;;) {
            if (t0 == a4) {
                break;
            }
            t0 = (t0 + 0x20);
            t1 = (t1 + 0x20);
            if ((unsigned int)t0 >= (unsigned int)0xC8A93DC) {
                return 0xFFFFFFFF;
            }
        }
        *(unsigned int *)((t1 + 0x1C)) = 0x0;
        return 0x0;
    }
    return 0xFFFFFFFF;
}

int FUN_0c1910ca(void)
{
    register int t0;

    t0 = FUN_0c19126a();
    if ((short)t0 == 0) {
        t0 = FUN_0c192e82();
        if ((short)t0 != 0) {
            return 0x1;
        }
        return 0x0;
    }
    return 0x1;
}

int FUN_0c191e7c(void)
{
    register int t0;

    t0 = *(short *)0xC2AE768;
    *(unsigned short *)0xC2AE768 = (((((((unsigned short)t0 << 2) << 2) + ((unsigned short)t0 << 8)) + ((int)(unsigned short)t0 >> 5)) + (*(short *)0xC2AE768)) + 0xD499);
    return (*(short *)0xC2AE768);
}

int FUN_0c194878(int a4)
{
    int stk[1];

    *(unsigned char *)((((int)stk + 0) + 0x0)) = ((unsigned int)((unsigned int)(0xFF000000 & a4) >> 16) >> 8);
    *(unsigned char *)((((int)stk + 0) + 0x1)) = ((unsigned int)(0xFF0000 & a4) >> 16);
    *(unsigned char *)((((int)stk + 0) + 0x2)) = ((unsigned int)(0xFF00 & a4) >> 8);
    *(unsigned char *)((((int)stk + 0) + 0x3)) = a4;
    return (*(int *)(((int)stk + 0)));
}

int FUN_0c19493a(int a4, int a5, int a6, int a7, int a8)
{
    int stk[5];

    *(unsigned short *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned short *)(((int)stk + 8)) = a6;
    *(unsigned char *)(((int)stk + 10)) = 0x1;
    *(unsigned short *)(((int)stk + 12)) = ((short)(a8 >> 0));
    *(unsigned int *)(((int)stk + 16)) = a7;
    return (FUN_0c184000(0x4121, ((int)stk + 0), 0x0));
}

int FUN_0c19db04(int a4, int a5)
{
    *(unsigned int *)((a4 + 0x8)) = a5;
    if (a5 != -1) {
        *(unsigned short *)((a4 + 0x4)) = ((*(short *)((a4 + 0x4))) | 0x4);
        *(unsigned short *)((a4 + 0x0)) = ((*(short *)((a4 + 0x0))) | 0x4);
    } else {
        *(unsigned short *)((a4 + 0x4)) = ((*(short *)((a4 + 0x4))) & 0xFFFFFFFB);
        *(unsigned short *)((a4 + 0x0)) = ((*(short *)((a4 + 0x0))) & 0xFFFFFFFB);
    }
    return 0x0;
}

int ovGetLibTbl(int a4)
{
    register int t7;

    if (((((struct o0_int *)0x8C00FFF0)->v)) == 0) {
        mwRnaSetupSnd(0x8C00FC00, 0x78);
    }
    t7 = (((struct o0_int *)0x8C00FFF0)->v);
    *(unsigned int *)((a4 + 0x0)) = ((((struct o4_int *)0x8C00FFF0)->v));
    return t7;
}

int kmSetPaletteMode(int a4)
{
    register int t6;

    t6 = 0xEEEE;
    if ((0xFFFFFFFC & a4) != 0) {
    } else {
        (((struct o0_uint *)0xC8D1D98)->v) = (((((struct o0_int *)0xC8D1D98)->v)) & 0xFFFFFFFE);
        (((struct oC_uint *)0xC8D1D98)->v) = a4;
        (((struct o0_uint *)0xC8D1D98)->v) = (((((struct o0_int *)0xC8D1D98)->v)) | 0x1);
        t6 = 0x0;
    }
    return t6;
}

int mwlRnaAlloc(void)
{
    register int t0;
    register int t1;

    if ((unsigned int)0xC8CD46C < (unsigned int)0xC8CD8EC) {
        t0 = 0xC8CD46C;
        t1 = 0xC8CD46C;
        for (;;) {
            if ((*(signed char *)((t0 + 0x0))) == 0) {
                break;
            }
            t0 = (t0 + 0x90);
            t1 = (t1 + 0x90);
            if ((unsigned int)t0 >= (unsigned int)0xC8CD8EC) {
                return 0x0;
            }
        }
        t0 = t1;
    } else {
        t0 = 0x0;
    }
    return t0;
}

int mwRnaFlush(int a4)
{
    register int t2;
    register int t3;

    if (a4 == 0) {
        return (FUN_0c2dc1ae(0xC2FFEE8));
    }
    t2 = *(signed char *)((a4 + 0x6));
    t3 = (unsigned char)t2;
    if ((unsigned char)t2 != 1) {
        *(unsigned char *)((a4 + 0x6)) = 0x1;
        t3 = 0x1;
    }
    return t3;
}

int mwRnaGetPlaySw(int a4)
{
    if (a4 == 0) {
        FUN_0c2dc1ae(0xC2FFEE8);
        return 0xFFFFFFFF;
    }
    return ((0x2 & (unsigned char)(*(signed char *)((a4 + 0x1)))) >> 1);
}

int mwRnaGetFilter(int a4, int a5, int a6)
{
    if (a4 == 0) {
        return (FUN_0c2dc1ae(0xC2FFEE8));
    }
    *(unsigned int *)((a5 + 0x0)) = ((((struct o7C_int *)(a4))->v));
    *(unsigned int *)((a6 + 0x0)) = ((((struct o80_int *)(a4))->v));
    return 0x80;
}

int FUN_0c2d8098(int a4)
{
    register int t0;
    register int t1;

    if ((*(int *)((a4 + 0x8))) != 0) {
        t0 = *(int *)((a4 + 0x8));
        t1 = FUN_0c2d868a(a4, ((((struct o3C_short *)((*(int *)((a4 + 0xC)))))->v)));
        *(unsigned int *)(((t0 + 0x8) + 0x0)) = (unsigned short)t1;
        t0 = (unsigned short)t1;
    }
    return t0;
}

int FUN_0c0ed8f4(int a4, int a5)
{
    *(unsigned int *)0xA05F78BC = (((((unsigned int)((unsigned int)((unsigned int)(a4 & 0x7F00000) >> 16) >> 2) >> 2) << 8) | ((unsigned int)((unsigned int)((unsigned int)(a5 & 0x7F00000) >> 16) >> 2) >> 2)) | 0x46590000);
    *(unsigned int *)0xC30407C = (((((unsigned int)((unsigned int)((unsigned int)(a4 & 0x7F00000) >> 16) >> 2) >> 2) << 8) | ((unsigned int)((unsigned int)((unsigned int)(a5 & 0x7F00000) >> 16) >> 2) >> 2)) | 0x46590000);
    return 0x0;
}

int FUN_0c2e6092(void)
{
    int stk[1];
    register int t5;

    FUN_0c2e638e();
    *(unsigned char *)(((int)stk + 0)) = (*(signed char *)(((*(int *)0xC304178) + 0x0)));
    FUN_0c2e638e();
    FUN_0c2e6310();
    t5 = *(signed char *)(((int)stk + 0));
    *(unsigned char *)0xC8D6498 = 0x2;
    return (unsigned char)t5;
}

int FUN_0c2e80fa(void)
{
    register int t4;

    FUN_0c2e83ae();
    (((struct o11_uchar *)0xC8D677D)->v) = ((*(signed char *)0xC8D678E) & 0x7F);
    (((struct o2_uchar *)0xC8D677D)->v) = ((*(signed char *)0xC8D677F) | 0x1);
    (((struct o1_uchar *)0xC8D677D)->v) = ((*(signed char *)0xC8D677E) | 0x40);
    t4 = *(signed char *)0xC8D677D;
    (((struct o0_uchar *)0xC8D677D)->v) = (t4 | 0x3);
    return (t4 | 0x3);
}

int FUN_0c2eaf6c(void)
{
    return (FUN_0c2eafb4((-((((((*(signed char *)((((*(int *)0xC8D25F0) + 0x2C) + 0x0))) & 128) == 0)) ? 1 : 0) - 1)), ((((unsigned char)(*(signed char *)(((*(int *)0xC8D25F0) + 0x48))) == 0x80)) ? 1 : 0)));
}

int ADXPD_ExecServer(void)
{
    register int t0;
    register int t1;
    register int t3;

    t0 = 0xC8D9EEC;
    for (;;) {
        t1 = *(int *)((t0 + 0x0));
        t3 = t1;
        if (t1 == 1) {
            t3 = (ADXPD_ExecHndl(t0));
        }
        t0 = (t0 + 0x34);
        if ((unsigned int)t0 >= (unsigned int)0xC8DA08C) {
            break;
        }
    }
    return t3;
}

int FUN_0c2f2926(int a4)
{
    if (((unsigned char)a4 != 1) && (((unsigned char)a4 != 3) && (((unsigned char)a4 != 16) && (((unsigned char)a4 != 18) && (((unsigned char)a4 != 20) && ((unsigned char)a4 != 24)))))) {
        return 0x0;
    }
    return 0x1;
}

int FUN_0c2f84a8(int a4)
{
    register int t0;

    t0 = *(signed char *)0xC8E0B08;
    (((struct o2_uchar *)0xC8E0B06)->v) = (t0 + 0x1);
    if ((int)(signed char)(t0 + 0x1) >= (int)0x8) {
        (((struct o2_uchar *)0xC8E0B06)->v) = 0x0;
    }
    (((struct o0_uchar *)0xC8E0B06)->v) = ((*(signed char *)0xC8E0B06) + (*(signed char *)(((*(signed char *)0xC8E0B08) + 0xC8E001E))));
    return FUN_0c2f84f0((a4 ^ (*(signed char *)0xC8E0B06)));
}

int FUN_0c2fad9a(int a4)
{
    int stk[1];
    register int t0;
    register int t3;

    *(unsigned short *)(((int)stk + 0)) = a4;
    t0 = *(signed char *)0xC8E0302;
    t3 = (unsigned char)t0;
    if ((unsigned char)t0 != 3) {
        t3 = FUN_0c2ec410(0xC8D7064, (unsigned short)(*(short *)(((int)stk + 0))));
        *(unsigned char *)0xC8D7062 = 0x0;
    }
    return t3;
}

int nl_mesh_set_texture(int a4, int a5)
{
    register int t0;
    register int t2;

    t0 = *(int *)0xC8A64D8;
    t2 = *(int *)((((a5 * 0x3C) + t0) + 0x34));
    *(unsigned int *)((a4 + 0x8)) = (((*(int *)((a4 + 0x8))) & 0xFFFFFFC0) | (*(int *)((((a5 * 0x3C) + t0) + 0x30))));
    *(unsigned int *)((a4 + 0xC)) = (0x0 | t2);
    return 0xC8A64D8;
}

int nlObjPutWorldMatrixMode(float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11)
{
    register int t0;

    t0 = ((int (*)(int, float, float, float, float, float, float, float, float))(nlStoreMatrix8))(0xC86CB88, f4, f5, f6, f7, f8, f9, f10, f11);
    nlMultiMatrixRevOrder8(0xC868A90);
    t0 = ((int (*)(int))(nlStoreMatrix8))(0xC868A50);
    return nlLoadMatrix8(0xC86CB88);
}

int FUN_0c17fe3c(void)
{
    register int t0;
    register int t1;

    t0 = 0x0;
    for (;;) {
        t1 = FUN_0c17ff1e();
        if (t1 == 0) {
            break;
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x1000000) {
            return 0xFFFFFF00;
        }
    }
    return 0x0;
}

int FUN_0c1814e4(int a4)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((((unsigned char)((((a4 << 1) + a4) << 2) << 1) + 0xC86CC40) + 0x0));
    t1 = t0;
    if (t0 == 1) {
        t0 = *(signed char *)((((unsigned char)((((a4 << 1) + a4) << 2) << 1) + 0xC86CC40) + 0x1));
        if (t0 == 0) {
            *(unsigned char *)((((unsigned char)((((a4 << 1) + a4) << 2) << 1) + 0xC86CC40) + 0x0)) = 0x0;
        }
        t1 = t0;
    }
    return t1;
}

int FUN_0c183234(void)
{
    int stk[3];

    FUN_0c183858(0xC874F90);
    *(unsigned char *)0xC874F90 = 0x0;
    { struct mvb12 { char b[12]; }; *(struct mvb12 *)(((int)stk + 0)) = *(struct mvb12 *)(0xC874F90); }
    return (FUN_0c183628(*(Stk3 *)(((int)stk + 0))));
}

int FUN_0c18325a(void)
{
    int stk[3];

    FUN_0c183858(0xC874F90);
    *(unsigned char *)0xC874F90 = 0x1;
    { struct mvb12 { char b[12]; }; *(struct mvb12 *)(((int)stk + 0)) = *(struct mvb12 *)(0xC874F90); }
    return (FUN_0c183628(*(Stk3 *)(((int)stk + 0))));
}

int FUN_0c183b7e(int a4)
{
    FUN_0c18c9fc();
    return (FUN_0c18cc94(a4));
}

int FUN_0c183b58(int a4)
{
    FUN_0c18c9fc();
    return (FUN_0c18d464(a4));
}

int FUN_0c183c98(int a4)
{
    FUN_0c18c9fc();
    return (FUN_0c18cfb8(a4));
}

int FUN_0c183bdc(int a4)
{
    FUN_0c18c9fc();
    return (FUN_0c18cd6e(a4));
}

int FUN_0c183b32(int a4)
{
    FUN_0c18c9fc();
    return (FUN_0c18d438(a4));
}

int FUN_0c183c72(int a4)
{
    FUN_0c18c9fc();
    return (FUN_0c18cf94(a4));
}

int FUN_0c183b0c(int a4)
{
    FUN_0c18c9fc();
    return (FUN_0c18cc78(a4));
}

int FUN_0c183e38(int a4)
{
    FUN_0c18c9fc();
    return (FUN_0c18d522(a4));
}

int FUN_0c183e12(int a4)
{
    FUN_0c18c9fc();
    return (FUN_0c18d498(a4));
}

int FUN_0c183dc2(int a4)
{
    FUN_0c18c9fc();
    return (FUN_0c18d23c(a4));
}

int FUN_0c183d4c(int a4)
{
    FUN_0c18c9fc();
    return (FUN_0c18d0d0(a4));
}

int FUN_0c183f0c(int a4)
{
    FUN_0c18c9fc();
    return (FUN_0c18d704(a4));
}

int FUN_0c183d9c(int a4)
{
    FUN_0c18c9fc();
    return (FUN_0c18d426(a4));
}

int FUN_0c183ee6(int a4)
{
    FUN_0c18c9fc();
    return (FUN_0c18d6b2(a4));
}

int FUN_0c183e5e(int a4)
{
    FUN_0c18c9fc();
    return (FUN_0c18d5c4(a4));
}

int FUN_0c183ec0(int a4)
{
    FUN_0c18c9fc();
    return (FUN_0c18d60c(a4));
}

int FUN_0c183fa4(int a4)
{
    FUN_0c18c9fc();
    return (FUN_0c18d7a8(a4));
}

int FUN_0c183f32(int a4)
{
    FUN_0c18c9fc();
    return (FUN_0c18d732(a4));
}

int FUN_0c183ae6(int a4)
{
    FUN_0c18c9fc();
    return (FUN_0c18cc06(a4));
}

int FUN_0c183f58(int a4)
{
    FUN_0c18c9fc();
    return (FUN_0c18d758(a4));
}

int FUN_0c183f7e(int a4)
{
    FUN_0c18c9fc();
    return (FUN_0c18d780(a4));
}

int FUN_0c1855b4(int a4)
{
    *(unsigned short *)((a4 + 0x0)) = 0xFFFFFFFF;
    *(unsigned short *)((a4 + 0x2)) = 0xFFFFFFFF;
    *(unsigned short *)((a4 + 0x4)) = 0x0;
    *(unsigned short *)((a4 + 0x6)) = 0x0;
    *(unsigned short *)((a4 + 0x8)) = 0x0;
    *(unsigned short *)((a4 + 0xA)) = 0x0;
    *(unsigned short *)((a4 + 0xC)) = 0x0;
    (((struct o2E_ushort *)(a4))->v) = 0x0;
    (((struct o30_ushort *)(a4))->v) = 0x0;
    (((struct o32_ushort *)(a4))->v) = 0x0;
    return 0x0;
}

int FUN_0c185878(int a4)
{
    register int t1;
    int t5;

    t1 = (*(int *)0xC8B5790);
    for (;;) {
        if (t1 == 0) {
            return 0x0;
        }
        if (((*(short *)((t1 + 0x2))) == (short)a4) && (t5 = *(short *)((t1 + 0x0)), t5 == 1)) {
            break;
        }
        t1 = ((((struct o614_int *)(t1))->v));
    }
    return t1;
}

int FUN_0c18d732(int a4)
{
    int stk[3];

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 4)) = (*(int *)((a4 + 0x4)));
    *(unsigned char *)(((int)stk + 8)) = 0x3;
    return (unsigned short)(FUN_0c1986c4((*(short *)(((*(int *)(((int)stk + 0))) + 0x0))), (((int)stk + 0) + 0x4), 0x0));
}

int FUN_0c18dfee(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    if ((int)a4 > 0) {
        t0 = 0x0;
        for (;;) {
            t1 = FUN_0c1831ec(a4, a5, a6, a7);
            t0 = (t0 + 0x10);
            if ((int)t0 >= (int)a4) {
                break;
            }
        }
        t0 = t1;
    }
    return t0;
}

int FUN_0c191a84(int a4, int a5)
{
    int stk[2];
    register int t2;

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned short *)(((int)stk + 0)) = a5;
    t2 = FUN_0c1920b0((*(short *)(((int)stk + 0))), (*(int *)(((int)stk + 4))));
    if (t2 != 0) {
        return 0xFFFFFFFF;
    }
    return 0x0;
}

int FUN_0c191dbc(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    if ((int)a4 < 0) {
        t0 = 0x0;
        for (;;) {
            t1 = FUN_0c1831d0(a4, a5, a6, a7);
            t0 = (t0 + 0x10);
            if ((int)t0 <= (int)a4) {
                break;
            }
        }
        t0 = t1;
    }
    return t0;
}

int FUN_0c197c32(int a4, int a5, int a6, int a7)
{
    int stk[5];

    *(unsigned short *)(((int)stk + 8)) = a4;
    *(unsigned int *)(((int)stk + 12)) = a5;
    *(unsigned short *)(((int)stk + 4)) = a6;
    *(unsigned short *)(((int)stk + 0)) = a7;
    return (((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((int)stk + 12)))))((*(short *)(((int)stk + 4))), (*(short *)(((int)stk + 8))), (*(short *)(((int)stk + 0))), a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24)));
}

int FUN_0c19869e(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(int *)((a4 + 0x0));
    if (t0 != 0) {
        t1 = *(int *)((t0 + 0x10));
        *(unsigned int *)((t0 + 0x10)) = (t1 - 1);
        if ((t1 - 1) == 0) {
            t1 = *(short *)((t0 + 0xE));
            t2 = (unsigned short)t1;
            if (((unsigned short)t1 & 1) == 0) {
                *(unsigned short *)((t0 + 0xE)) = 0x0;
                t2 = 0x0;
            }
            t0 = t2;
        }
        *(unsigned int *)((a4 + 0x0)) = 0x0;
        t1 = t0;
    }
    return t1;
}

int FUN_0c19d41e(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = 0x0;
    if (((unsigned char)(*(signed char *)((a4 + 0x2))) & 192) != 0) {
        t0 = 0x1;
    }
    *(unsigned char *)((a4 + 0x0)) = t0;
    *(unsigned char *)((a4 + 0x3)) = (*(signed char *)((a4 + 0x4)));
    *(unsigned char *)((a4 + 0x6)) = (*(signed char *)((a4 + 0x7)));
    t0 = *(int *)(((*(int *)((a4 + 0x2C))) + 0x14));
    return ((int (*)(int, int, int, int))(t0))(a4, a5, a6, a7);
}

int FUN_0c2b1eb0(int a4)
{
    int stk[3];

    *(unsigned int *)(((int)stk + 8)) = a4;
    *(int *)((int)stk + 4) = 0x0;
    *(int *)((int)stk + 0) = 0x0;
    FUN_0c2bbc84((((int)stk + 0) + 0x8), 0xA0710004, 0x4, 0x1, 0x0, 0x0);
    return 0x0;
}

int pdGunLeave(void)
{
    register int t3;

    kdSetDriverMode(0x8, 0x0);
    kdSetDriverMode(0x9, 0x0);
    t3 = kdSetHandler((*(int *)0xC2FE888), 0x0);
    *(unsigned int *)0xC8B9828 = 0x0;
    return t3;
}

int FUN_0c2b1ed6(int a4)
{
    int stk[3];

    *(unsigned int *)(((int)stk + 8)) = a4;
    *(int *)((int)stk + 4) = 0x0;
    *(int *)((int)stk + 0) = 0x0;
    FUN_0c2bbc84((((int)stk + 0) + 0x8), 0xA0710000, 0x4, 0x1, 0x0, 0x0);
    return 0x0;
}

int FUN_0c2b280a(int a4, int a5)
{
    register int t0;

    t0 = vmsfs_c_getstate(a4);
    if (t0 != 0) {
        return 0xFFFFFFFF;
    }
    return vmsfs_findnext(a4, a5);
}

int FUN_0c2b27ae(int a4, int a5)
{
    register int t0;

    t0 = vmsfs_c_getstate(a4);
    if (t0 != 0) {
        return 0xFFFFFFFF;
    }
    return vmsfs_diskfree(a4, a5);
}

int buGetDiskInfo(int a4, int a5)
{
    register int t0;

    t0 = vmsfs_c_getstate(a4);
    if (t0 != 0) {
        return 0xFFFFFFFF;
    }
    return vmsfs_getinfo(a4, a5);
}

int FUN_0c2b27dc(int a4, int a5)
{
    register int t0;

    t0 = vmsfs_c_getstate(a4);
    if (t0 != 0) {
        return 0xFFFFFFFF;
    }
    return vmsfs_findfirst(a4, a5);
}

int FUN_0c2b289c(int a4, int a5)
{
    register int t0;

    t0 = vmsfs_c_getstate(a4);
    if (t0 != 0) {
        return 0xFFFFFFFF;
    }
    return vmsfs_xfind(a4, a5);
}

int buGetLastError(int a4)
{
    register int t0;

    t0 = vmsfs_c_getstate(a4);
    if (t0 != 0) {
        return 0xFFFFFFFF;
    }
    return (*(int *)((0xC8C21CC + (a4 << 2))));
}

int buGetFileSize(int a4, int a5)
{
    register int t0;

    t0 = vmsfs_c_getstate(a4);
    if (t0 != 0) {
        return 0xFFFFFFFF;
    }
    return vmsfs_fgetsize(a4, a5);
}

int buIsExistFile(int a4, int a5)
{
    register int t0;

    t0 = vmsfs_c_getstate(a4);
    if (t0 != 0) {
        return 0xFFFFFFFF;
    }
    return vmsfs_fisexist(a4, a5);
}

int pdVibMxStart(int a4, int a5)
{
    register int t0;

    t0 = thunk_FUN_0c2b3af8(a4);
    if (t0 == 0) {
        return 0xFFFFFFFE;
    }
    return FUN_0c0f4202(a4, a5, 0x1);
}

int adxf_AllocAdxFs(void)
{
    register int t0;
    register int t1;

    if ((unsigned int)0xC8CBD44 < (unsigned int)0xC8CC044) {
        t0 = 0xC8CBD44;
        t1 = 0xC8CBD44;
        for (;;) {
            if ((*(signed char *)((t0 + 0x0))) == 0) {
                break;
            }
            t0 = (t0 + 0x30);
            t1 = (t1 + 0x30);
            if ((unsigned int)t0 >= (unsigned int)0xC8CC044) {
                return 0x0;
            }
        }
        t0 = t1;
    } else {
        t0 = 0x0;
    }
    return t0;
}

int FUN_0c2bb00c(void)
{
    int stk[1];

    *(unsigned short *)(((int)stk + 0)) = (_builtin_get_imask());
    _builtin_set_imask(0xF);
    return ((int (*)(void))(0xAC2BB038))();
}

void FUN_0c2bb35e(int a4, int a5, int a6, int a7)
{
    register int t2;
    register int t5;

    _builtin_set_imask(0x6);
    t2 = (*(int *)0xC8C1AC4);
    for (;;) {
        if (t2 == 0) {
            break;
        }
        t5 = ((int (*)(int, int, int, int))((*(int *)((t2 + 0x0)))))((*(int *)((t2 + 0x8))), a5, a6, a7);
        t2 = (*(int *)((t2 + 0x4)));
    }
}

void FUN_0c2bb3a8(int a4, int a5, int a6, int a7)
{
    register int t2;
    register int t5;

    _builtin_set_imask(0x6);
    t2 = (*(int *)0xC8C1ACC);
    for (;;) {
        if (t2 == 0) {
            break;
        }
        t5 = ((int (*)(int, int, int, int))((*(int *)((t2 + 0x0)))))((*(int *)((t2 + 0x8))), a5, a6, a7);
        t2 = (*(int *)((t2 + 0x4)));
    }
}

int FUN_0c2bca92(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = FUN_0c2daec4(a4, a5, a6, a7);
    if (((((struct o10E8_int *)((*(int *)0xC8D4D84)))->v)) != 0) {
        FUN_0c2bc7e4();
    }
    return t0;
}

int FUN_0c2bca6c(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = FUN_0c2dadf8(a4, a5, a6, a7);
    if (((((struct o10E8_int *)((*(int *)0xC8D4D84)))->v)) != 0) {
        FUN_0c2bc7e4();
    }
    return t0;
}

int FUN_0c2bcb2a(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = FUN_0c2daf08(a4, a5, a6, a7);
    if (((((struct o10E8_int *)((*(int *)0xC8D4D84)))->v)) != 0) {
        FUN_0c2bc7e4();
    }
    return t0;
}

int FUN_0c2bcade(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = FUN_0c2dae3c(a4, a5, a6, a7);
    if (((((struct o10E8_int *)((*(int *)0xC8D4D84)))->v)) != 0) {
        FUN_0c2bc7e4();
    }
    return t0;
}

int FUN_0c2bcab8(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = FUN_0c2dae80(a4, a5, a6, a7);
    if (((((struct o10E8_int *)((*(int *)0xC8D4D84)))->v)) != 0) {
        FUN_0c2bc7e4();
    }
    return t0;
}

int FUN_0c2bcb04(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = FUN_0c2dad96(a4, a5, a6, a7);
    if (((((struct o10E8_int *)((*(int *)0xC8D4D84)))->v)) != 0) {
        FUN_0c2bc7e4();
    }
    return t0;
}

int FUN_0c2bcc22(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = FUN_0c2db124(a4, a5, a6, a7);
    if (((((struct o10E8_int *)((*(int *)0xC8D4D84)))->v)) != 0) {
        FUN_0c2bc7e4();
    }
    return t0;
}

int FUN_0c2bcbfc(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = FUN_0c2db0d4(a4, a5, a6, a7);
    if (((((struct o10E8_int *)((*(int *)0xC8D4D84)))->v)) != 0) {
        FUN_0c2bc7e4();
    }
    return t0;
}

int FUN_0c2bccb2(int a4)
{
    register int t0;

    t0 = mpdrv_set_hreset(a4);
    if (((((struct o10E8_int *)((*(int *)0xC8D4D84)))->v)) != 0) {
        FUN_0c2bc7e4();
    }
    return t0;
}

int FUN_0c2bcc48(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = FUN_0c2db174(a4, a5, a6, a7);
    if (((((struct o10E8_int *)((*(int *)0xC8D4D84)))->v)) != 0) {
        FUN_0c2bc7e4();
    }
    return t0;
}

int FUN_0c2bcc8c(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = FUN_0c2db090(a4, a5, a6, a7);
    if (((((struct o10E8_int *)((*(int *)0xC8D4D84)))->v)) != 0) {
        FUN_0c2bc7e4();
    }
    return t0;
}

int vmsfs_c_execcallback(int a4, int a5, int a6)
{
    register int t2;
    register int t3;

    if (((((struct o74_int *)((((((a4 << 2) << 2) << 2) << 1) + 0xC8C21EC)))->v)) != 0) {
        t2 = (((struct o74_int *)((((((a4 << 2) << 2) << 2) << 1) + 0xC8C21EC)))->v);
        t3 = (((struct o7C_int *)((((((a4 << 2) << 2) << 2) << 1) + 0xC8C21EC)))->v);
        return ((int (*)(int, int, int, int))(t2))(a4, a5, a6, t3);
    }
    return 0x74;
}

void ADXCRS_Unlock(void)
{
    register int t0;

    t0 = (((struct o0_int *)0xC303D84)->v);
    (((struct o0_uint *)0xC303D84)->v) = (t0 - 1);
    if ((t0 - 1) == 0) {
        _builtin_set_imask(((unsigned int)(((((((struct o4_int *)0xC303D84)->v)) & 0xF) << 2) << 2) >> 4));
    }
}

int FUN_0c2c4770(void)
{
    int stk[1];

    *(unsigned short *)(((int)stk + 0)) = (_builtin_get_imask());
    _builtin_set_imask(0xF);
    return ((int (*)(void))(0xAC2C479C))();
}

int FUN_0c2d53e8(void)
{
    register int t0;
    register int t1;
    register int t2;

    if (((*(signed char *)0xC8D25F7) & 16) != 0) {
        t0 = *(signed char *)0xC8D25F6;
        (((struct o6_uchar *)0xC8D25F0)->v) = (t0 | 0x4);
        t1 = (t0 | 0x4);
    } else {
        t0 = (((struct o0_int *)0xC8D25F0)->v);
        t2 = *(signed char *)(((t0 + 0x78) + 0x0));
        (((struct o78_uchar *)(t0))->v) = (t2 | 0x20);
        t1 = (t2 | 0x20);
    }
    return t1;
}

int FUN_0c2d540e(void)
{
    register int t0;
    register int t1;
    register int t2;

    if (((*(signed char *)0xC8D25F7) & 16) != 0) {
        t0 = *(signed char *)0xC8D25F6;
        (((struct o6_uchar *)0xC8D25F0)->v) = (t0 & 0xFB);
        t1 = (t0 & 0xFB);
    } else {
        t0 = (((struct o0_int *)0xC8D25F0)->v);
        t2 = *(signed char *)(((t0 + 0x78) + 0x0));
        (((struct o78_uchar *)(t0))->v) = (t2 & 0xDF);
        t1 = (t2 & 0xDF);
    }
    return t1;
}

int FUN_0c2d754a(int a4)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)0xC8D7083;
    if (((unsigned char)t0 & 2) == 0) {
        t1 = a4;
        if ((unsigned int)(unsigned short)a4 > (unsigned int)0x1F4) {
            t1 = 0x1F4;
        }
        *(unsigned short *)0xC8D6846 = t1;
        *(unsigned char *)0xC8D7083 = ((*(signed char *)0xC8D7083) | 0x2);
        return FUN_0c2d7806(0x100);
    }
    return (unsigned char)t0;
}

int mwlSbAlloc(void)
{
    register int t0;
    register int t1;

    if ((unsigned int)0xC8D53EC < (unsigned int)0xC8D572C) {
        t0 = 0xC8D53EC;
        t1 = 0xC8D53EC;
        for (;;) {
            if ((*(signed char *)((t0 + 0x4))) == 0) {
                break;
            }
            t0 = (t0 + 0x68);
            t1 = (t1 + 0x68);
            if ((unsigned int)t0 >= (unsigned int)0xC8D572C) {
                return 0x0;
            }
        }
        t0 = t1;
    } else {
        t0 = 0x0;
    }
    return t0;
}

int FUN_0c2f3524(void)
{
    register int t0;
    register int t1;

    t0 = FUN_0c2ec430((*(int *)0xC8DFFC8));
    t1 = (signed char)t0;
    if ((signed char)t0 != 0) {
        t0 = FUN_0c2ec410(0xC8DFFC8, 0x4B0);
        *(unsigned char *)0xC8DA0E8 = 0x5;
        t1 = t0;
    }
    return t1;
}

int FUN_0c2fbc4a(int a4)
{
    if ((unsigned char)a4 == 1) {
        *(unsigned char *)0xC8D67F2 = 0x40;
    } else {
        if ((unsigned char)a4 == 2) {
            *(unsigned char *)0xC8D67F2 = 0x80;
        } else {
            *(unsigned char *)0xC8D67F2 = 0xC0;
        }
    }
    return FUN_0c2eb978(0xC);
}

void paletteUpload(void)
{
    if ((*(signed char *)0xC8B85C0) != 0) {
        *(unsigned char *)0xC8B85C0 = 0x0;
        kmSetPaletteData(0xC8B8640);
    return;
    }
}

int nlIntrHandlerEventA40(void)
{
    register int t0;
    register int t1;

    *(unsigned int *)0xC868B78 = 0x3;
    t0 = *(int *)0xC868B1C;
    if (t0 != 0) {
        t1 = ((int (*)(void))(t0))();
    }
    *(unsigned int *)0xA05F6900 = 0x4000;
    return 0x0;
}

int nlIntrHandlerEventB00(void)
{
    register int t0;
    register int t1;

    *(unsigned int *)0xC868B78 = 0x5;
    t0 = *(int *)0xC868B20;
    if (t0 != 0) {
        t1 = ((int (*)(void))(t0))();
    }
    *(unsigned int *)0xA05F705C = 0x3;
    return 0x0;
}
