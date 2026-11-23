/* Straight-line functions with calls and guards (batch gen_bd): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[4]; } Stk4;
struct o0_int { int v; };
struct o0_short { short v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o0_ushort { unsigned short v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_int { char p[0x10]; int v; };
struct o10_short { char p[0x10]; short v; };
struct o10_uchar { char p[0x10]; unsigned char v; };
struct o10E8_int { char p[0x10E8]; int v; };
struct o11_uchar { char p[0x11]; unsigned char v; };
struct o13_uchar { char p[0x13]; unsigned char v; };
struct o138_short { char p[0x138]; short v; };
struct o138_ushort { char p[0x138]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o164_uint { char p[0x164]; unsigned int v; };
struct o168_int { char p[0x168]; int v; };
struct o168_uint { char p[0x168]; unsigned int v; };
struct o1C_uchar { char p[0x1C]; unsigned char v; };
struct o1E_uchar { char p[0x1E]; unsigned char v; };
struct o1F_uchar { char p[0x1F]; unsigned char v; };
struct o2_short { char p[0x2]; short v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o2_ushort { char p[0x2]; unsigned short v; };
struct o20_float { char p[0x20]; float v; };
struct o21_uchar { char p[0x21]; unsigned char v; };
struct o28_short { char p[0x28]; short v; };
struct o2D_uchar { char p[0x2D]; unsigned char v; };
struct o2E_uchar { char p[0x2E]; unsigned char v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o34_uint { char p[0x34]; unsigned int v; };
struct o35_uchar { char p[0x35]; unsigned char v; };
struct o38_uint { char p[0x38]; unsigned int v; };
struct o3C_uint { char p[0x3C]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_short { char p[0x4]; short v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
struct o40_uchar { char p[0x40]; unsigned char v; };
struct o40_uint { char p[0x40]; unsigned int v; };
struct o44_uint { char p[0x44]; unsigned int v; };
struct o48_uchar { char p[0x48]; unsigned char v; };
struct o48_uint { char p[0x48]; unsigned int v; };
struct o4C_int { char p[0x4C]; int v; };
struct o5_uchar { char p[0x5]; unsigned char v; };
struct o6_short { char p[0x6]; short v; };
struct o6_ushort { char p[0x6]; unsigned short v; };
struct o72_uchar { char p[0x72]; unsigned char v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uchar { char p[0x8]; unsigned char v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o8_ushort { char p[0x8]; unsigned short v; };
struct o9_uchar { char p[0x9]; unsigned char v; };
struct o98_uchar { char p[0x98]; unsigned char v; };
struct oA_short { char p[0xA]; short v; };
struct oA_ushort { char p[0xA]; unsigned short v; };
struct oC_int { char p[0xC]; int v; };
struct oC_short { char p[0xC]; short v; };
int ADXF_Finish(void);
int FUN_0c0df2e0(float);
int FUN_0c0f4328(int, int, int, int, int, int);
int FUN_0c17dcc0(int, int, int, int, int);
int FUN_0c180d72(int);
int FUN_0c1837cc(int, int);
int FUN_0c184000(int, int, int);
int FUN_0c187a88(int, int, int);
int FUN_0c18c9fc(void);
int FUN_0c18cfc4(int, int, int, int);
int FUN_0c18d522(int);
int FUN_0c18d914(int, int, int, int, int, int, int);
int FUN_0c18dab4(int);
int FUN_0c18df08(int);
int FUN_0c18e0f2(int);
int FUN_0c18e11e(int);
int FUN_0c18e39c(int, int, int, int, int, int);
int FUN_0c18e932(int, int, int, int);
int FUN_0c18e9a0(int);
int FUN_0c18ea14(int);
int FUN_0c18ed2e(int);
int FUN_0c18eeea(int);
int FUN_0c18ff14(void);
int FUN_0c1910ca(void);
int FUN_0c191164(int, int);
int FUN_0c19177a(int, int, int);
int FUN_0c191850(int);
int FUN_0c191904(int, int);
int FUN_0c191f2c(void);
int FUN_0c191f5a(int);
int FUN_0c197c16(int, int, int, int);
int FUN_0c198478(void);
int FUN_0c198c42(int, int, int);
int FUN_0c19a872(int, int, int, int);
int FUN_0c19a8ce(int);
int FUN_0c19c2c8(int);
int FUN_0c19c906(int, int);
int FUN_0c19c9fc(int, int, int, int);
int FUN_0c19cf36(int, int, int);
int FUN_0c19d114(int);
int FUN_0c19d1ae(int);
int FUN_0c19d296(int);
int FUN_0c19d2b4(int, int, int, int);
int FUN_0c19d41e(int, int, int, int);
int FUN_0c19d9f6(int);
int FUN_0c19dd3a(int, int, int);
int FUN_0c19ee48(int, int, int);
int FUN_0c19f76e(int);
int FUN_0c19f8e4(int);
int FUN_0c1a027c(int);
int FUN_0c1a0388(int, int);
int FUN_0c1a0d60(void);
int FUN_0c2aeb3c(int);
int FUN_0c2aeb54(int);
int FUN_0c2b6288(void);
int FUN_0c2b9b3e(int);
int FUN_0c2bc7e4(void);
int syBtCfgSet(int, int, int);
int FUN_0c2c3086(void);
extern int FUN_0c2c30aa();
int FUN_0c2c3238(void);
int FUN_0c2c3996(void);
int FUN_0c2c607e(void);
int FUN_0c2c6352(void);
int FUN_0c2c6776(void);
int FUN_0c2cf8d4(void);
int FUN_0c2cfa1c(void);
int FUN_0c2cfc76(int);
int FUN_0c2cfc7e(int);
int FUN_0c2d4768(int, int);
int FUN_0c2d487c(int, int, int);
int FUN_0c2d4ad2(void);
int FUN_0c2d5518(void);
int FUN_0c2d63ba(void);
int FUN_0c2d63cc(int);
int FUN_0c2d68f4(int);
int FUN_0c2d72b8(int);
int FUN_0c2d7800(int);
int FUN_0c2d80c4(int, int);
int FUN_0c2d80f0(int);
int FUN_0c2d8d90(void);
int FUN_0c2dc1ae(int, ...);
int FUN_0c2e4200(int);
int FUN_0c2e6310(void);
int FUN_0c2e638e(void);
int FUN_0c2e73b4(int);
int FUN_0c2e8268(void);
int FUN_0c2e83ae(void);
int FUN_0c2eba12(void);
int FUN_0c2ebf56(void);
int FUN_0c2ec304(void);
int FUN_0c2ec410(int, int);
int FUN_0c2ec430(int);
int FUN_0c2ed71e(void);
int FUN_0c2ee56c(void);
int FUN_0c2eedc0(int);
int FUN_0c2ef3c8(void);
int FUN_0c2f00e4(int);
int FUN_0c2f66f0(void);
int FUN_0c2f84d0(int);
int FUN_0c2f9af8(int, int, int, int, int, int, int, int, int, int, int, int);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
extern int _builtin_tas(char *);
int gdFsGetDrvStatG(int, int, int, int);
int gdFsReqDrvStatG(int);
int kdSetHandler(int, int);
int kmiWriteRegister(int, int);
int kmyGetInterruptLevel(void);
float math_sin_angle16(int);
int memset(int, int, int);
int mpdrv_dpf(int, int, int, int, int);
int mpdrv_set_bread_ns(int, int, int, int, int);
int mpdrv_set_bwrite(int, ...);
int mpdrv_set_getlerr_ns(int, int, int, int, int);
int nlCalcPoint(int, int);
int nlCalcVector(int, int);
int nlCreateTextureParamA(int, int, int, int);
int nlLoadMatrix8(int);
int nlLoadRechangeMatrix(int);
int nlMultiMatrix8(int);
int nlMultiMatrixRevOrder8(int);
int nlPushMatrix(int);
int nlScaleUnitVector(int, int, float);
int nlSetPaletteData(int, int, int);
extern int nlStoreMatrix8();
int nlTransposeMatrix(void);
int nlobjput_sub_trnsl(int, float);
int nlsndG2Read(int);
int ovGetLibTbl(int);
int ovSearchLibByUuid(int);
int pdGetPeripheral(int);
int syChainAddHandler(int, int, int, int);
int syChainDeleteHandler(int);
int syG2DmaResume(int);
int syIntAdrChk_putchar(int);
int thunk_FUN_0c191de2(void);
int thunk_FUN_0c2c4b72(void);
int thunk_FUN_0c2d5f2e(int);
int vmsfs_c_getstate(int);
int vmsfs_fcreate(int, int, int, int);
int vmsfs_xcreate(int, int, int, int);
int vmsio_ismount(int);
int FUN_0c18c9ac(int a4, int a5, int a6);
int FUN_0c19dd8e(int a4);
int FUN_0c19eecc(int a4);
int ccitt_updcrc(int a4, int a5, int a6, int a7);
int FUN_0c2cbc5e(int a4);
int FUN_0c2d8322(int a4, int a5);
int FUN_0c2df288(int a4, int a5, int a6, int a7);
int FUN_0c2ec29a(void);
int FUN_0c2ec8ba(void);
int FUN_0c2eeb4a(int a4);
int FUN_0c2f6fb8(void);
int syIntAdrChk_getchar(int a4, int a5);
int nlObjPutLoadTextureGI(int a4, int a5);
int FUN_0c184cf8(int a4, int a5, int a6);
int FUN_0c18cf5c(int a4);
int FUN_0c18fcbc(int a4);
int FUN_0c19141c(int a4, int a5);
int FUN_0c191554(void);
int FUN_0c191e44(void);
int FUN_0c192368(int a4, int a5);
int FUN_0c19aeae(int a4, int a5);
int FUN_0c19d1d0(int a4, int a5);
int FUN_0c19daa0(int a4, int a5, int a6, int a7);
int ovLibClose(int a4);
int setCullingThreshold(float f4);
int FUN_0c2b9c3c(void);
int SearchUsed(int a4, int a5);
int kmyInitializeFogTable(void);
int FUN_0c2d1062(int a4);
int FUN_0c2d1956(int a4);
int FUN_0c2d6804(int a4, int a5);
int FUN_0c2d67cc(int a4, int a5);
int kmytex_GetfreememEx(int a4, int a5);
int FUN_0c2e8496(void);
int FUN_0c2e9536(void);
int FUN_0c2ee482(int a4);
int FUN_0c2f6f80(int a4);
int FUN_0c17a890(int a4, int a5, int a6);
int FUN_0c17a8f0(int a4, int a5, int a6);
int nlObjPutLoadTexture(int a4, int a5);
int FUN_0c18140e(int a4);
int FUN_0c183cbe(int a4, int a5);
int FUN_0c184058(void);
int FUN_0c1849a2(int a4);
int FUN_0c184f9a(int a4, int a5, int a6, int a7, int a8);
int FUN_0c18f87c(int a4, int a5, int a6, int a7);
int FUN_0c191724(int a4, int a5);
int FUN_0c1921f0(void);
int FUN_0c194178(int a4, int a5, int a6);
int FUN_0c19a66e(int a4, int a5);
int FUN_0c19c0a6(int a4);
int FUN_0c19d3a0(int a4, int a5, int a6, int a7);
int FUN_0c2b0d2c(void);
int syCfgSetSoundMode(int a4, int a5, int a6);
int FUN_0c2b9ad2(int a4, int a5, int a6, int a7);
int FUN_0c101cae(int a4);
int FUN_0c2c63f8(int a4, int a5, int a6, int a7);
int FUN_0c2d3d64(void);
int FUN_0c2e6058(void);
int FUN_0c2e5ffc(void);
int FUN_0c2e956e(void);
int FUN_0c2f4660(int a4);
int FUN_0c2f8472(int a4);
int FUN_0c2fb8b2(int a4);
int FUN_0c0eadd0(int a4, int a5);
int nlSysUseLatency2V(void);
int FUN_0c0df210(float f4);
int nl_set_cnv_proj_pers(float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11);
int nlObjPutTrnsl(int a4, float f4);
float nlLineClipPoint(int a4, int a5, int a6);
int FUN_0c18d464(int a4);
int FUN_0c18e08e(int a4, int a5, int a6);
int FUN_0c18e516(int a4, int a5, int a6);
int FUN_0c18fbaa(int a4);
int FUN_0c18f8f8(int a4, int a5);
int FUN_0c1965cc(int a4, int a5, int a6);
int FUN_0c1a3678(int a4, int a5, int a6);
void gdFsEntryErrFuncAllG(int a4, int a5);
int gdFsIsTrayOpenG(int a4, int a5, int a6, int a7);
void pdVibGetUnitInfoCallback(int a4, int a5, int a6, int a7);
int kdSetBlockWrite(Stk4 s);
int FUN_0c2d1910(void);
int FUN_0c2d2d10(void);
int syG2DmaResumeAll(void);
int syG2DmaSuspendAll(void);
int fmcalccrc(int a4, int a5, int a6, int a7);
int FUN_0c2e635a(void);
int FUN_0c2f0816(int a4);
int FUN_0c2f1c20(int a4);
int nlInvLightVector(void);
int FUN_0c181940(int a4, int a5);
int FUN_0c181972(int a4, int a5);
int FUN_0c18d2c2(int a4, int a5, int a6, int a7);
int FUN_0c197bcc(int a4, int a5, int a6, int a7, int a8, int a9);
int FUN_0c197d2e(int a4);
int FUN_0c1a0e2c(int a4, int a5);
int FUN_0c2b0da8(int a4);
int FUN_0c2b0de4(int a4);
int ADXT_Finish(void);
int adxf_ChkPrmPt(int a4, int a5);
int vmsfs_ismount(int a4);
int FUN_0c2d586c(void);
int FUN_0c2daf5a(int a4, int a5, int a6, int a7, int a8);
int FUN_0c2db024(int a4, int a5, int a6, int a7, int a8);
int ADXB_CheckAu(int a4);
int FUN_0c2f4ca2(void);
int FUN_0c2fc6e2(void);
int FUN_0c2fdddc(void);
float math_csc_angle16(int a4);
int FUN_0c18e0c2(int a4);
int FUN_0c1914ec(void);
int FUN_0c1a0cc6(int a4, int a5);
int FUN_0c1a0d78(int a4);
int kmyEnableASyncCopy(int a4);
int mwRnaGetOutPan(int a4, int a5);
void kmyiInitializeCallback(int a4);
int FUN_0c2d7d12(int a4);
int FUN_0c2d86e2(int a4);
void FUN_0c2e41ac(int a4);
int FUN_0c2e8238(void);
int FUN_0c2e930a(int a4);
int FUN_0c2eb978(int a4, int a5, int a6);
int FUN_0c2ed60e(void);
int FUN_0c2ed6c8(void);
int FUN_0c2eec44(void);
int FUN_0c2f2192(int a4);
int FUN_0c2f4ef0(void);
void nl_texture_slot_finish(int a4, int a5, int a6, int a7);
int nlsnd_PL_WaitRequest(void);
int FUN_0c18139c(int a4, int a5, int a6);
int FUN_0c1816c6(int a4, int a5);
int FUN_0c18da58(void);
void FUN_0c18da86(int a4);
int FUN_0c18d9cc(void);
int FUN_0c19158c(int a4, int a5);
int FUN_0c1916f6(int a4);
int FUN_0c1931fa(int a4, int a5, int a6);
int FUN_0c1984ce(int a4, int a5, int a6, int a7);
int FUN_0c19af74(int a4);
int FUN_0c19cf08(int a4, int a5, int a6, int a7);
int FUN_0c19d3dc(int a4);
int FUN_0c19f868(int a4, int a5);
int FUN_0c19f98c(int a4, int a5);
int FUN_0c2b28fc(int a4, int a5, int a6, int a7);
int FUN_0c2b2932(int a4, int a5, int a6, int a7);

int FUN_0c18c9ac(int a4, int a5, int a6)
{
    memset(a4, 0x0, 0x50);
    FUN_0c187a88(a4, 0xC20A4C8, 0x4);
    (((struct o40_uint *)(a4))->v) = a6;
    (((struct o44_uint *)(a4))->v) = a5;
    (((struct o48_uint *)(a4))->v) = 0x600000F0;
    return 0x48;
}

int FUN_0c19dd8e(int a4)
{
    int stk[1];
    register int t0;
    register int t1;

    t0 = *(int *)((a4 + 0x30));
    *(unsigned int *)(((int)stk + 0)) = 0x0;
    t1 = FUN_0c1a027c(0x0);
    *(unsigned int *)(((int)stk + 0)) = t1;
    if (t1 == 0) {
        return 0x0;
    }
    FUN_0c19dd3a(((int)stk + 0), (t0 + 0x1C), (*(short *)((t0 + 0x1C))));
    return (*(int *)(((int)stk + 0)));
}

int FUN_0c19eecc(int a4)
{
    int stk[1];
    register int t0;
    register int t1;

    t0 = *(int *)((a4 + 0x30));
    *(unsigned int *)(((int)stk + 0)) = 0x0;
    t1 = FUN_0c1a027c(0x0);
    *(unsigned int *)(((int)stk + 0)) = t1;
    if (t1 == 0) {
        return 0x0;
    }
    FUN_0c19ee48(((int)stk + 0), (t0 + 0x28), ((((struct o28_short *)(t0))->v)));
    return (*(int *)(((int)stk + 0)));
}

int ccitt_updcrc(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    t0 = a4;
    t1 = a6;
    t2 = a7;
    t3 = a5;
    for (;;) {
        t4 = (int)t1 <= 0;
        t1 = (t1 - 1);
        if (t4) {
            break;
        }
        t2 = (unsigned short)t0;
        t4 = t2;
        t5 = 0xFFFFFFF8;
        t4 = ((int)t4 << (int)t5);
        t0 = *(signed char *)((t3 + 0x0));
        t3 = (t3 + 0x1);
        t5 = t0;
        t4 = (unsigned char)t4;
        t0 = t2;
        t5 = (unsigned char)t5;
        t4 = (t4 ^ t5);
        t4 = (t4 << 1);
        t0 = (t0 << 8);
        t0 = (t0 & 0xFF00);
        t0 = (t0 ^ ((*(short *)((0xC2FF834 + t4)))));
    }
    return t0;
}

int FUN_0c2cbc5e(int a4)
{
    register int t0;
    register int t1;
    register int t2;

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
            t2 = ((t1 * 0x8C) + (t0 + 0x18));
            t1 = (t1 + 0x1);
            if ((unsigned int)t1 >= (unsigned int)(*(int *)((t0 + 0xC)))) {
                break;
            }
        }
        t0 = t2;
    }
    return t0;
}


int FUN_0c2df288(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(int *)((a4 + 0x0));
    t1 = (((struct oC_int *)0xC2DF470)->v);
    if (t0 != 27) {
        if (t0 != 28) {
        } else {
            t0 = (((struct o4_int *)0xC2DF470)->v);
            if (t0 != 0) {
                t2 = ((int (*)(int, int, int, int))(t0))(t1, 0xC2DF460, a6, a7);
            }
        }
    } else {
        t0 = (((struct o0_int *)0xC2DF470)->v);
        if (t0 != 0) {
            t2 = ((int (*)(int, int, int, int))(t0))(t1, 0xC2DF460, a6, a7);
        }
    }
    return 0x1;
}

int FUN_0c2ec29a(void)
{
    int stk[1];

    *(unsigned short *)(((int)stk + 0)) = ((((struct o0_short *)0xC8E0048)->v));
    (((struct o0_ushort *)0xC8E0048)->v) = ((((struct o2_short *)0xC8E0048)->v));
    (((struct o2_ushort *)0xC8E0048)->v) = ((((struct o4_short *)0xC8E0048)->v));
    (((struct o4_ushort *)0xC8E0048)->v) = ((((struct o6_short *)0xC8E0048)->v));
    (((struct o6_ushort *)0xC8E0048)->v) = 0x0;
    if (((((struct o0_short *)0xC8E0048)->v)) == 0) {
        *(unsigned char *)0xC8D6791 = ((*(signed char *)0xC8D6791) & 0xF7);
    }
    return (*(short *)(((int)stk + 0)));
}

int FUN_0c2ec8ba(void)
{
    int stk[1];

    *(unsigned char *)0xC8D65E8 = 0x1;
    FUN_0c2d63cc(0x0);
    FUN_0c2eba12();
    *(unsigned char *)0xC8D67C4 = 0x0;
    FUN_0c2e73b4(0xFF);
    FUN_0c2f9af8(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
    FUN_0c2ec304();
    FUN_0c2e8268();
    return FUN_0c2cfa1c();
}

int FUN_0c2eeb4a(int a4)
{
    register int t0;

    t0 = FUN_0c2ef3c8();
    if ((int)(unsigned short)t0 <= (int)0x7) {
        *(unsigned int *)((a4 + 0x0)) = ((short)((short)(unsigned char)(*(signed char *)0xC8D716B) * (short)0x124) + 0xC8D7AA2);
        return 0x118;
    }
    return 0x0;
}

int FUN_0c2f6fb8(void)
{
    int stk[1];

    *(unsigned short *)(((int)stk + 0)) = ((((struct o0_short *)0xC8E002E)->v));
    (((struct o0_ushort *)0xC8E002E)->v) = ((((struct o2_short *)0xC8E002E)->v));
    (((struct o2_ushort *)0xC8E002E)->v) = ((((struct o4_short *)0xC8E002E)->v));
    (((struct o4_ushort *)0xC8E002E)->v) = ((((struct o6_short *)0xC8E002E)->v));
    (((struct o6_ushort *)0xC8E002E)->v) = 0x0;
    if (((((struct o0_short *)0xC8E002E)->v)) == 0) {
        *(unsigned char *)0xC8D678F = ((*(signed char *)0xC8D678F) & 0xFE);
    }
    return (*(short *)(((int)stk + 0)));
}

int syIntAdrChk_getchar(int a4, int a5)
{
    register int t0;
    register int t1;

    t0 = (((struct o8_int *)0xC8E0960)->v);
    if (t0 != 0) {
        t1 = a5;
        if (t0 != 1) {
        } else {
            t0 = a5;
            if (((unsigned char)(*(signed char *)(((((((struct o0_int *)0xC8E0960)->v)) + 0x1C) + 0x0))) & 0x4) == 4) {
                t0 = 0xD;
            }
            t1 = t0;
        }
        t0 = t1;
    } else {
        t1 = (((struct o4_int *)0xC8E0960)->v);
        for (;;) {
            if ((unsigned char)(*(short *)((t1 + 0x1C))) != 0) {
                break;
            }
        }
        t0 = (*(signed char *)(((t1 + 0x14) + 0x0)));
    }
    return t0;
}

int nlObjPutLoadTextureGI(int a4, int a5)
{
    /* manual: the callee sets the batch index through its fourth argument; the loop runs while it is not 0 (the
       generated C read the index before the call, so only the first batch of textures was loaded) */
    int n = 0;
    int r = 0;
    do {
        r |= FUN_0c17dcc0(a4, a5, n, (int)&n, 0x1);
    } while (n != 0);
    return r;
}


int FUN_0c18cf5c(int a4)
{
    register int t0;

    t0 = *(short *)((a4 + 0x0));
    if ((t0 & 0xC0) != 0x80) {
        if ((t0 & 0xC0) != 0xC0) {
            return FUN_0c19a8ce((*(short *)((a4 + 0x0))));
        }
        return FUN_0c18eeea((0x3F & (*(short *)((a4 + 0x0)))));
    }
    return FUN_0c19c2c8((0x3F & (*(short *)((a4 + 0x0)))));
}

int FUN_0c18fcbc(int a4)
{
    register int t1;

    t1 = 0x0;
    for (;;) {
        if ((int)t1 >= (int)(*(int *)((a4 + 0x0)))) {
            break;
        }
        FUN_0c18df08((((((t1 << 1) + t1) << 2) + (a4 + 0x8)) + 0x4));
        t1 = (t1 + 0x1);
    }
    return 0x0;
}

int FUN_0c19141c(int a4, int a5)
{
    register int t1;
    register int t3;

    FUN_0c19cf36(a4, a5, 0xC8ABBC4);
    t1 = FUN_0c19d114(0xC8ABBC4);
    t3 = 0xFFFFFFEF;
    if ((short)t1 != 0) {
    } else {
        FUN_0c19d1ae(0xC8ABB90);
        t3 = 0x0;
    }
    return t3;
}

int FUN_0c191554(void)
{
    FUN_0c19d9f6(0xC8ABB90);
    FUN_0c19d9f6(0xC8ABB5C);
    FUN_0c19d9f6(0xC8ABBC4);
    FUN_0c19d9f6(0xC8ABB28);
    *(unsigned char *)0xC8ABB24 = 0x0;
    FUN_0c1910ca();
    return 0x0;
}


int FUN_0c192368(int a4, int a5)
{
    register int t0;
    register int t2;

    t0 = FUN_0c1a0388(a5, 0x4);
    t2 = *(int *)((t0 + 0x0));
    *(unsigned char *)((t2 + 0x0)) = (*(signed char *)((a4 + 0x0)));
    *(unsigned char *)(((t2 + 0x1) + 0x0)) = (*(signed char *)((a4 + 0x1)));
    FUN_0c19c906(((t2 + 0x1) + 0x1), (*(short *)((a4 + 0x2))));
    return t0;
}

int FUN_0c19aeae(int a4, int a5)
{
    register int t0;

    t0 = FUN_0c19af74(a4);
    if (t0 != 0) {
        return 0xFFFFFFFC;
    }
    (((struct o168_uint *)(((a4 * 0x174) + (*(int *)0xC8A73C0))))->v) = a5;
    return 0x0;
}

int FUN_0c19d1d0(int a4, int a5)
{
    register int t0;
    register int t2;

    t0 = FUN_0c1a0388(a5, 0x4);
    t2 = *(int *)((t0 + 0x0));
    *(unsigned char *)((t2 + 0x0)) = (*(signed char *)((a4 + 0x0)));
    *(unsigned char *)(((t2 + 0x1) + 0x0)) = (*(signed char *)((a4 + 0x1)));
    FUN_0c19c906(((t2 + 0x1) + 0x1), (*(short *)((a4 + 0x2))));
    return t0;
}

int FUN_0c19daa0(int a4, int a5, int a6, int a7)
{
    *(unsigned char *)((a4 + 0x4)) = (*(signed char *)(((*(int *)((a4 + 0x2C))) + 0x9)));
    *(unsigned char *)((a4 + 0x7)) = (*(signed char *)(((*(int *)((a4 + 0x2C))) + 0xA)));
    *(unsigned char *)((a4 + 0x5)) = (*(signed char *)(((*(int *)((a4 + 0x2C))) + 0xB)));
    FUN_0c19d41e(a4, a5, a6, a7);
    *(unsigned int *)(((a4 + 0x10) + 0x10)) = 0xC19D93C;
    *(unsigned int *)(((a4 + 0x10) + 0x14)) = a4;
    return FUN_0c191164((a4 + 0x10), (*(int *)(((*(int *)((a4 + 0x2C))) + 0xC))));
}

int ovLibClose(int a4)
{
    int stk[4];
    register int t3;
    register int t4;

    *(unsigned int *)(((int)stk + 8)) = a4;
    FUN_0c2aeb3c(((int)stk + 0));
    *(unsigned int *)(((int)stk + 12)) = (ovGetLibTbl((((int)stk + 0) + 0x4)));
    t3 = ovSearchLibByUuid((*(int *)(((int)stk + 8))));
    if ((int)t3 >= 0) {
        t4 = *(int *)(((int)stk + 12));
        *(unsigned int *)(((((t3 << 2) << 1) + (t4 + 0x8)) + 0x4)) = ((*(int *)(((((t3 << 2) << 1) + (t4 + 0x8)) + 0x4))) - 1);
    }
    return (FUN_0c2aeb54(((int)stk + 0)));
}

int setCullingThreshold(float f4)
{
    (((struct o0_uint *)0xC8D1DA8)->v) = (((((struct o0_int *)0xC8D1DA8)->v)) | 0x2);
    (((struct o20_float *)0xC8D1DA8)->v) = f4;
    (((struct o4_uint *)0xC8D1DA8)->v) = (((((struct o4_int *)0xC8D1DA8)->v)) | 0x2);
    (((struct o0_uint *)0xC8D1DA8)->v) = (((((struct o0_int *)0xC8D1DA8)->v)) & 0xFFFFFFFD);
    return 0x78;
}

int FUN_0c2b9c3c(void)
{
    int stk[3];
    register int t0;

    t0 = FUN_0c2cfc76((((int)stk + 0) + 0x4));
    *(unsigned short *)(((int)stk + 8)) = t0;
    FUN_0c187a88(0xC8C0086, (*(int *)(((int)stk + 4))), (unsigned short)t0);
    FUN_0c2d68f4(0xC8C007E);
    FUN_0c2cfc7e(((int)stk + 0));
    return (FUN_0c187a88(0xC8C0079, (*(int *)(((int)stk + 0))), 0x4));
}

int SearchUsed(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;

    if ((unsigned int)a4 < (unsigned int)(*(int *)0xC304134)) {
        *(unsigned short *)((a5 + 0x0)) = 0x0;
    } else {
        *(unsigned short *)((a5 + 0x0)) = 0x1;
    }
    t0 = *(int *)(((((*(short *)((a5 + 0x0))) << 2) << 2) + 0xC304140));
    t1 = 0x0;
    if (t0 != 0) {
        t2 = t0;
        t0 = 0x0;
        for (;;) {
            if ((*(int *)((t2 + 0xC))) == a4) {
                t0 = t2;
                t2 = 0x0;
            } else {
                t2 = (*(int *)((t2 + 0x8)));
            }
            if (t2 == 0) {
                break;
            }
        }
        t1 = t0;
    }
    return t1;
}

int kmyInitializeFogTable(void)
{
    register int t0;

    t0 = 0x80;
    for (;;) {
        t0 = (t0 - 1);
        *(unsigned int *)(((t0 << 2) + 0xC8D077C)) = 0x0;
        kmiWriteRegister(((t0 << 2) + 0x200), 0x0);
        if (t0 == 0) {
            break;
        }
    }
    return 0x0;
}

int FUN_0c2d1062(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t4;

    t0 = *(int *)0xC8D25F0;
    if ((unsigned char)a4 == 0) {
        t1 = *(signed char *)((t0 + 0xC));
        *(unsigned char *)((t0 + 0xC)) = (t1 & 0xFD);
        t2 = (t1 & 0xFD);
    } else {
        *(unsigned char *)((t0 + 0xC)) = ((*(signed char *)((t0 + 0xC))) | 0x2);
        t0 = *(int *)0xC8D25F0;
        if ((unsigned char)a4 == 1) {
            t1 = *(signed char *)((t0 + 0xC));
            *(unsigned char *)((t0 + 0xC)) = (t1 | 0x1);
            t2 = (t1 | 0x1);
        } else {
            t1 = (unsigned char)a4;
            if ((unsigned char)a4 == 2) {
                t4 = *(signed char *)((t0 + 0xC));
                *(unsigned char *)((t0 + 0xC)) = (t4 & 0xFE);
                t1 = (t4 & 0xFE);
            }
            t2 = t1;
        }
    }
    return t2;
}

int FUN_0c2d1956(int a4)
{
    int stk[1];

    *(unsigned char *)(((int)stk + 0)) = a4;
    if (((*(signed char *)((((*(int *)0xC8D25F0) + 0x24) + 0x0))) & 32) == 0) {
        FUN_0c2d63ba();
        FUN_0c2ec410(0xC8D2658, 0xA);
    }
    (((struct o40_uchar *)((*(int *)0xC8D25F0)))->v) = (*(signed char *)(((unsigned char)(*(signed char *)(((int)stk + 0))) + 0xC3003D6)));
    return 0x40;
}

int FUN_0c2d6804(int a4, int a5)
{
    register int t1;
    register int t2;

    if ((signed char)a4 != 0) {
        t2 = syChainAddHandler(0x900, a5, 0x48, 0x0);
        (((struct o0_uint *)0xC30401C)->v) = t2;
        (((struct o8_uchar *)0xC30401C)->v) = 0x1;
        t1 = t2;
    } else {
        if ((*(signed char *)0xC304024) != 0) {
            t2 = syChainDeleteHandler(((((struct o0_int *)0xC30401C)->v)));
            (((struct o8_uchar *)0xC30401C)->v) = 0x0;
        }
        t1 = t2;
    }
    return t1;
}

int FUN_0c2d67cc(int a4, int a5)
{
    register int t1;
    register int t2;

    if ((signed char)a4 != 0) {
        t2 = syChainAddHandler(0xB40, a5, 0x10, 0x0);
        (((struct o0_uint *)0xC304020)->v) = t2;
        (((struct o5_uchar *)0xC304020)->v) = 0x1;
        t1 = t2;
    } else {
        if ((*(signed char *)0xC304025) != 0) {
            t2 = syChainDeleteHandler(((((struct o0_int *)0xC304020)->v)));
            (((struct o5_uchar *)0xC304020)->v) = 0x0;
        }
        t1 = t2;
    }
    return t1;
}

int kmytex_GetfreememEx(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t0 = (((struct o0_int *)0xC304148)->v);
    t1 = 0x0;
    if (t0 != 0) {
        t2 = t0;
        t0 = 0x0;
        for (;;) {
            if ((unsigned int)(*(int *)((t2 + 0x10))) > (unsigned int)t0) {
                t0 = (*(int *)((t2 + 0x10)));
            }
            t2 = (*(int *)((t2 + 0x8)));
            if (t2 == 0) {
                break;
            }
        }
        t1 = t0;
    }
    t0 = (((struct o10_int *)0xC304148)->v);
    t2 = 0x0;
    if (t0 != 0) {
        t3 = 0x0;
        t4 = t0;
        for (;;) {
            if ((unsigned int)(*(int *)((t4 + 0x10))) > (unsigned int)t3) {
                t3 = (*(int *)((t4 + 0x10)));
            }
            t4 = (*(int *)((t4 + 0x8)));
            if (t4 == 0) {
                break;
            }
        }
        t2 = t3;
    }
    *(unsigned int *)((a4 + 0x0)) = t1;
    *(unsigned int *)((a5 + 0x0)) = t2;
    return 0x0;
}

int FUN_0c2e8496(void)
{
    register int t4;
    register int t7;

    if ((int)((unsigned char)(*(signed char *)0xC8D6456) & 0x3) <= (int)0x1) {
        t7 = (thunk_FUN_0c2d5f2e(0x1));
    } else {
        t4 = 0x3;
        if (((unsigned char)(*(signed char *)0xC8D6456) & 0x3) == 2) {
            t4 = 0x2;
        }
        t7 = (thunk_FUN_0c2d5f2e(t4));
    }
    return t7;
}

int FUN_0c2e9536(void)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = FUN_0c2d4768(0x6C1, 0x1);
    t1 = FUN_0c2d4768(0x6C2, 0x1);
    t2 = FUN_0c2d4768(0x6C3, 0x1);
    return (((0x0 | (unsigned short)t0) | ((unsigned short)t1 << 8)) | ((unsigned short)t2 << 16));
}

int FUN_0c2ee482(int a4)
{
    (((struct o0_uchar *)0xC8D7104)->v) = a4;
    if ((signed char)a4 != 0) {
        (((struct o8_ushort *)0xC8D7104)->v) = 0x0;
        (((struct oA_ushort *)0xC8D7104)->v) = (FUN_0c2d72b8(0xC8D7108));
        if (((((struct oA_short *)0xC8D7104)->v)) == 0) {
            return 0x0;
        }
        return 0x1;
    }
    FUN_0c2e83ae();
    return 0x1;
}

int FUN_0c2f6f80(int a4)
{
    register int t0;

    t0 = 0x0;
    for (;;) {
        if ((unsigned short)(*(short *)((0xC8E002E + ((unsigned char)t0 << 1)))) == 0) {
            break;
        }
        if ((unsigned char)t0 != 3) {
            t0 = (t0 + 0x1);
            continue;
        }
        return (unsigned char)t0;
    }
    *(unsigned short *)((0xC8E002E + ((unsigned char)t0 << 1))) = a4;
    *(unsigned int *)((((unsigned char)t0 << 2) + 0xC8E0038)) = (*(int *)0xC8DF924);
    t0 = *(signed char *)0xC8D678F;
    *(unsigned char *)0xC8D678F = (t0 | 0x1);
    return (t0 | 0x1);
}

int FUN_0c17a890(int a4, int a5, int a6)
{
    int stk[3];
    register int t1;
    register int t2;
    register int t3;
    register int t0;

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 8)) = a6;
    for (;;) {
        t1 = *(int *)(((int)stk + 8));
        *(unsigned int *)(((int)stk + 8)) = (t1 - 1);
        if ((int)(t1 - 1) < 0) {
            break;
        }
        t2 = *(int *)(((int)stk + 4));
        *(unsigned int *)(((int)stk + 4)) = (t2 + 0xC);
        t3 = *(int *)(((int)stk + 0));
        *(unsigned int *)(((int)stk + 0)) = (t3 + 0xC);
        t0 = (nlCalcPoint(((t3 + 0xC) - 12), ((t2 + 0xC) - 12)));
    }
    return t0;
}

int FUN_0c17a8f0(int a4, int a5, int a6)
{
    int stk[3];
    register int t1;
    register int t2;
    register int t3;
    register int t0;

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 8)) = a6;
    for (;;) {
        t1 = *(int *)(((int)stk + 8));
        *(unsigned int *)(((int)stk + 8)) = (t1 - 1);
        if ((int)(t1 - 1) < 0) {
            break;
        }
        t2 = *(int *)(((int)stk + 4));
        *(unsigned int *)(((int)stk + 4)) = (t2 + 0xC);
        t3 = *(int *)(((int)stk + 0));
        *(unsigned int *)(((int)stk + 0)) = (t3 + 0xC);
        t0 = (nlCalcVector(((t3 + 0xC) - 12), ((t2 + 0xC) - 12)));
    }
    return t0;
}

int nlObjPutLoadTexture(int a4, int a5)
{
    /* manual: the callee sets the batch index through its fourth argument; the loop runs while it is not 0 (the
       generated C read the index before the call, so only the first batch of textures was loaded) */
    int n = 0;
    int r = 0;
    do {
        r |= FUN_0c17dcc0(a4, a5, n, (int)&n, 0x0);
    } while (n != 0);
    return r;
}

int FUN_0c18140e(int a4)
{
    int t3;

    if (((*(signed char *)((((unsigned char)((((a4 << 1) + a4) << 2) << 1) + 0xC86CC40) + 0x0))) == 1) && (t3 = *(signed char *)((((unsigned char)((((a4 << 1) + a4) << 2) << 1) + 0xC86CC40) + 0x1)), t3 != 0)) {
        return (nlsndG2Read((*(int *)((((unsigned char)((((a4 << 1) + a4) << 2) << 1) + 0xC86CC40) + 0x10)))));
    }
    return 0x0;
}

int FUN_0c183cbe(int a4, int a5)
{
    FUN_0c18c9fc();
    return (FUN_0c18cfc4(a4, a5, (a5 + 0x4), (a5 + 0x6)));
}

int FUN_0c184058(void)
{
    (((struct o34_uint *)0xC8A738C)->v) = 0xC874FBC;
    (((struct o38_uint *)0xC8A738C)->v) = 0xC87558C;
    (((struct o3C_uint *)0xC8A738C)->v) = 0xC87564C;
    (((struct o4_uint *)0xC8A73D0)->v) = 0xC875660;
    (((struct o0_uint *)0xC8A73D0)->v) = 0xC875E94;
    (((struct o0_uchar *)0xC8A738C)->v) = 0x4;
    (((struct o1_uchar *)0xC8A738C)->v) = 0x4;
    (((struct o2_uchar *)0xC8A738C)->v) = 0x1;
    (((struct o8_uchar *)0xC8A73D0)->v) = 0x23;
    return 0xC8A738E;
}

int FUN_0c1849a2(int a4)
{
    register int t0;

    t0 = *(int *)0xC8ABBC0;
    *(unsigned int *)((a4 + 0x0)) = (*(int *)((t0 + 0xC)));
    *(unsigned int *)((a4 + 0x4)) = (*(int *)((t0 + 0x8)));
    t0 = 0x5;
    if ((*(signed char *)0xC8ABB24) == 0) {
    } else {
        t0 = ((((struct o0_int *)0xC2A62B8)->v));
    }
    *(unsigned short *)((a4 + 0x8)) = t0;
    *(unsigned int *)((a4 + 0xC)) = (*(int *)0xC8B1610);
    *(unsigned short *)((a4 + 0x12)) = ((((struct o10_short *)0xC2A62B8)->v));
    *(unsigned short *)((a4 + 0x10)) = ((((struct oC_short *)0xC2A62B8)->v));
    return 0x0;
}

int FUN_0c184f9a(int a4, int a5, int a6, int a7, int a8)
{
    int stk[5];
    register int t1;

    *(unsigned short *)(((int)stk + 0)) = (*(short *)((((short)((short)a4 * (short)0xC24) + 0xC89C310) + 0x2)));
    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned short *)(((int)stk + 8)) = a6;
    *(unsigned char *)(((int)stk + 10)) = 0x1;
    *(unsigned short *)(((int)stk + 12)) = ((short)(a8 >> 0));
    *(unsigned int *)(((int)stk + 16)) = a7;
    t1 = FUN_0c18d522(((int)stk + 0));
    return (((t1 == 0)) ? 1 : 0);
}

int FUN_0c18f87c(int a4, int a5, int a6, int a7)
{
    register int t6;
    register int t0;
    register int t1;
    register int t2;

    t6 = 0x0;
    if ((int)a5 > 0) {
        t0 = 0x0;
        t1 = a4;
        t2 = a5;
        for (;;) {
            t2 = (t2 - 1);
            t0 = (t0 + (unsigned short)(((unsigned char)(*(signed char *)((t1 + 0x0))) << 8) + (unsigned char)(*(signed char *)((t1 + 0x1)))));
            t1 = (t1 + 0x2);
            if ((int)t2 <= 0) {
                break;
            }
        }
        t6 = t0;
    }
    return (~((((unsigned int)t6 >> 16) + (unsigned short)t6) + ((unsigned int)(((unsigned int)t6 >> 16) + (unsigned short)t6) >> 16)));
}

int FUN_0c191724(int a4, int a5)
{
    register int t2;

    if ((unsigned int)a5 > (unsigned int)0x5EA) {
        return 0xFFFFFFF7;
    }
    (((struct o0_uint *)0xC8A9894)->v) = (((((struct o0_int *)0xC8A9894)->v)) + 0x1);
    (((struct o8_uint *)0xC8A9894)->v) = (((((struct o8_int *)0xC8A9894)->v)) + a5);
    t2 = a5;
    if ((unsigned int)a5 < (unsigned int)0x3C) {
        t2 = 0x3C;
    }
    return (short)(FUN_0c191904(a4, t2));
}

int FUN_0c1921f0(void)
{
    int stk[7];
    register int t5;

    *(unsigned int *)(((int)stk + 4)) = 0xC8AA218;
    *(unsigned short *)(((int)stk + 0)) = (FUN_0c191f2c());
    FUN_0c1837cc((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))), (((int)stk + 0) + 0x8));
    t5 = 0x1;
    if ((*(signed char *)(((int)stk + 18))) == 0) {
        t5 = 0x0;
    }
    FUN_0c191f5a((*(short *)(((int)stk + 0))));
    return t5;
}


int FUN_0c19a66e(int a4, int a5)
{
    int stk[2];
    register int t0;

    t0 = *(int *)0xC8A73C0;
    (((struct o164_uint *)(((a4 * 0x174) + t0)))->v) = 0x0;
    if (a5 != 0) {
        FUN_0c18d914(a4, ((((struct o168_int *)(((a4 * 0x174) + t0)))->v)), 0x3, 0xFF, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8));
        (((struct o138_ushort *)(((a4 * 0x174) + t0)))->v) = 0x0;
    }
    return 0x0;
}

int FUN_0c19c0a6(int a4)
{
    register int t2;

    if ((*(signed char *)((a4 + 0x4))) == 0) {
        t2 = FUN_0c198c42(a4, (unsigned short)(*(short *)0xC8A97C4), 0x1);
        if (t2 != 0) {
            return 0xFFFFFFFF;
        }
        *(unsigned int *)((a4 + 0x10)) = 0x0;
        *(unsigned int *)((a4 + 0xC)) = 0x0;
        *(unsigned int *)((a4 + 0x8)) = 0x0;
        return 0x0;
    }
    return 0xFFFFFFFF;
}

int FUN_0c19d3a0(int a4, int a5, int a6, int a7)
{
    register int t5;

    if ((int)(unsigned char)(*(signed char *)((a4 + 0x3))) <= 0) {
        return 0xFFFFFFFF;
    }
    *(unsigned char *)((a4 + 0x3)) = ((*(signed char *)((a4 + 0x3))) - 1);
    FUN_0c19d296(a4);
    t5 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)((a4 + 0x2C))) + 0x28)))))(a4, a5, a6, a7);
    return FUN_0c19d2b4(a4, 0x1, 0x0, t5);
}

int FUN_0c2b0d2c(void)
{
    register int t2;
    register int t3;

    memset(0xC8B96A0, 0x0, 0x120);
    memset(0xC8B97C0, 0x0, 0x60);
    t2 = 0xC8B96A0;
    t3 = 0xC8B97C0;
    for (;;) {
        *(unsigned int *)((t2 + 0x8)) = t3;
        t2 = (t2 + 0xC);
        t3 = (t3 + 0x4);
        if ((unsigned int)t2 >= (unsigned int)0xC8B97C0) {
            break;
        }
    }
    return kdSetHandler((*(int *)0xC3036F4), 0xC2B0E34);
}

int syCfgSetSoundMode(int a4, int a5, int a6)
{
    register int t2;

    if ((*(int *)0xC303724) != 0) {
        if ((a4 != 0) && (a4 != 1)) {
            return 0xFFFFFFFF;
        }
        *(unsigned char *)0x8C00007E = a4;
        t2 = syBtCfgSet(0x2, (*(int *)0xC303724), a6);
        if (t2 == -1) {
            return 0xFFFFFFFF;
        }
        return 0x0;
    }
    return 0xFFFFFFFF;
}

int FUN_0c2b9ad2(int a4, int a5, int a6, int a7)
{
    int t0;

    if (((((struct o8_int *)0xC8C0858)->v)) == 0) {
        (((struct o8_uint *)0xC8C0858)->v) = (((((struct o8_int *)0xC8C0858)->v)) + 0x1);
    }
    if (((*(int *)((a4 + 0x4))) != 0) && (t0 = *(signed char *)0xC8C0078, t0 != 0)) {
        t0 = *(int *)(((*(int *)0xC8BFFEC) + 0x0));
        return ((int (*)(int, int, int, int))(t0))(a4, a5, a6, a7);
    }
    (((struct o0_uint *)0xC8C0858)->v) = 0x0;
    (((struct o4_uint *)0xC8C0858)->v) = 0x1;
    return 0xC8C0858;
}

int FUN_0c101cae(int a4)
{
    memset(((a4 * 0x148) + 0xC8C4604), 0x0, 0x148);
    *(unsigned int *)((((a4 * 0x148) + 0xC8C4604) + 0x1C)) = ((a4 * 0x4C) + 0xC8C9064);
    return 0x0;
}

int FUN_0c2c63f8(int a4, int a5, int a6, int a7)
{
    register int t7;

    if (a5 == 1) {
        return (*(int *)((a4 + 0xC)));
    }
    if (a5 == 0) {
        return (*(int *)((a4 + 0x10)));
    }
    if ((*(int *)((a4 + 0x28))) != 0) {
        t7 = ((int (*)(int, int, int, int))((*(int *)((a4 + 0x28)))))((*(int *)((a4 + 0x2C))), 0xFFFFFFFD, a6, a7);
    }
    return 0x0;
}

int FUN_0c2d3d64(void)
{
    register int t0;

    t0 = *(int *)0xC8D25F0;
    *(unsigned char *)((t0 + 0x8)) = ((*(signed char *)((t0 + 0x8))) | 0x20);
    FUN_0c2ec410(0xC8D2698, 0xA);
    for (;;) {
        t0 = FUN_0c2ec430((*(int *)0xC8D2698));
        if ((signed char)t0 != 0) {
            break;
        }
    }
    return FUN_0c2d487c(0xA5, 0xFF, 0x1);
}

int FUN_0c2e6058(void)
{
    int stk[1];
    register int t4;

    FUN_0c2e638e();
    *(unsigned char *)(((int)stk + 0)) = (*(signed char *)(((*(int *)0xC304178) + 0x0)));
    FUN_0c2e638e();
    t4 = *(signed char *)(((int)stk + 0));
    if ((unsigned char)t4 != 68) {
        FUN_0c2e6310();
    }
    *(unsigned char *)0xC8D6498 = 0x2;
    return (unsigned char)t4;
}

int FUN_0c2e5ffc(void)
{
    int stk[1];
    register int t4;

    FUN_0c2e638e();
    *(unsigned char *)(((int)stk + 0)) = (*(signed char *)(((*(int *)0xC304178) + 0x0)));
    FUN_0c2e638e();
    t4 = *(signed char *)(((int)stk + 0));
    if ((unsigned char)t4 != 75) {
        FUN_0c2e6310();
    }
    *(unsigned char *)0xC8D6498 = 0x2;
    return (unsigned char)t4;
}

int FUN_0c2e956e(void)
{
    register int t0;
    register int t1;
    register int t4;

    *(unsigned char *)0xC8D6700 = 0x0;
    t0 = FUN_0c2d4768(0x6EA, 0x1);
    t1 = 0x1;
    for (;;) {
        t4 = ((unsigned char)t0 & (unsigned char)t1) != 0;
        t1 = (unsigned char)t1;
        if (t4) {
            *(unsigned char *)0xC8D6700 = ((*(signed char *)0xC8D6700) + 0x1);
        }
        t1 = (t1 << 1);
        if ((int)(unsigned char)t1 >= (int)0x40) {
            break;
        }
    }
    return t0;
}

int FUN_0c2f4660(int a4)
{
    register int t2;

    if ((*(signed char *)0xC8DFF9F) == 0) {
        (((struct o10_uchar *)0xC8DFF80)->v) = 0x6;
        (((struct o11_uchar *)0xC8DFF80)->v) = 0x7F;
        (((struct o15_uchar *)0xC8DFF80)->v) = 0x1;
        (((struct o14_uchar *)0xC8DFF80)->v) = 0x1;
        (((struct o21_uchar *)0xC8DFF80)->v) = 0x0;
        (((struct o0_uint *)0xC8DFF80)->v) = (*(int *)0xC8D67BC);
        (((struct o1E_uchar *)0xC8DFF80)->v) = 0x1;
        (((struct o1F_uchar *)0xC8DFF80)->v) = 0x1;
        t2 = 0xC8DFF9E;
    }
    return t2;
}

int FUN_0c2f8472(int a4)
{
    register int t0;

    t0 = *(signed char *)0xC8E0B07;
    (((struct o2_uchar *)0xC8E0B05)->v) = (t0 + 0x1);
    if ((int)(signed char)(t0 + 0x1) >= (int)0x8) {
        (((struct o2_uchar *)0xC8E0B05)->v) = 0x0;
    }
    (((struct o0_uchar *)0xC8E0B05)->v) = ((*(signed char *)0xC8E0B05) + (*(signed char *)(((*(signed char *)0xC8E0B07) + 0xC8E001E))));
    t0 = FUN_0c2f84d0(a4);
    return ((*(signed char *)0xC8E0B05) ^ t0);
}

int FUN_0c2fb8b2(int a4)
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
        t0 = (syIntAdrChk_putchar(t3));
    }
    return t0;
}

int FUN_0c0eadd0(int a4, int a5)
{
    register int t1;
    register int t2;

    t1 = *(int *)0xC8B85D8;
    t2 = *(short *)(((t1 + ((a4 << 2) << 1)) + 0x4));
    if (t2 != 0) {
        return nlSetPaletteData((((*(short *)(((t1 + ((a4 << 2) << 1)) + 0x0))) << 2) << 2), a5, (((unsigned char)(*(signed char *)(((t1 + ((a4 << 2) << 1)) + 0x3))) << 2) << 2));
    }
    return t2;
}

int nlSysUseLatency2V(void)
{
    register int t1;

    if (((((struct o8_int *)0xC83CF8C)->v)) == 1) {
        *(unsigned int *)0xC83CDD0 = 0x0;
        t1 = *(int *)0xC83CD90;
        *(unsigned int *)0xC83CD90 = (t1 | 0x10);
        (((struct o0_uint *)0xC83CF8C)->v) = 0x2;
        return (t1 | 0x10);
    }
    return FUN_0c2b6288();
}

int FUN_0c0df210(float f4)
{
    register int t0;

    if (_builtin_fabsf(f4) > 1.0f) {
        return 0x0;
    }
    t0 = FUN_0c0df2e0(f4);
    return (((-t0) + 0x4000) & 0xFFFF);
}

int nl_set_cnv_proj_pers(float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11)
{
    register int t0;

    t0 = ((int (*)(int, float, float, float, float, float, float, float, float))(nlStoreMatrix8))(0xC868AD0, f4, f5, f6, f7, f8, f9, f10, f11);
    nlLoadRechangeMatrix(0xC8689A8);
    nlMultiMatrix8(0xC868AD0);
    t0 = ((int (*)(int))(nlStoreMatrix8))(0xC868A50);
    t0 = ((int (*)(int))(nlStoreMatrix8))(0xC868A90);
    return nlLoadMatrix8(0xC868AD0);
}

int nlObjPutTrnsl(int a4, float f4)
{
    if (((*(int *)((a4 + 0x4))) & 2) == 0) {
        nlInvLightVector();
    }
    nlPushMatrix(0x0);
    nlMultiMatrixRevOrder8(0xC868A50);
    return nlobjput_sub_trnsl(a4, f4);   /* manual: the original keeps fr4 (the alpha) on its stack across the calls and
                                            passes it on; the generated call dropped it */
}

float nlLineClipPoint(int a4, int a5, int a6)
{
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;

    u0 = (((struct o8_float *)(a4))->v);
    u1 = *(float *)0xC8B85DC;
    u2 = (((struct o8_float *)(a5))->v);
    (((struct o8_float *)(a6))->v) = u1;
    u3 = *(float *)((a4 + 0x0));
    u4 = u3;
    u4 = u4 + (((u1 - u0) / (u2 - u0))) * (((*(float *)((a5 + 0x0))) - u3));
    *(float *)((a6 + 0x0)) = u4;
    u3 = (((struct o4_float *)(a4))->v);
    u4 = u3;
    u4 = u4 + (((u1 - u0) / (u2 - u0))) * ((((((struct o4_float *)(a5))->v)) - u3));
    (((struct o4_float *)(a6))->v) = u4;
    return ((u1 - u0) / (u2 - u0));
}

int FUN_0c18d464(int a4)
{
    int stk[1];
    register int t4;

    *(unsigned int *)(((int)stk + 0)) = (*(short *)((a4 + 0x4)));
    t4 = FUN_0c19a872((*(short *)((a4 + 0x0))), (*(short *)((a4 + 0x2))), (*(int *)((a4 + 0x8))), ((int)stk + 0));
    if ((int)t4 < 0) {
        return t4;
    }
    return (*(int *)(((int)stk + 0)));
}

int FUN_0c18e08e(int a4, int a5, int a6)
{
    register int t0;

    t0 = *(int *)((a4 + 0x4));
    *(unsigned int *)((((a4 + 0xC) + ((t0 & 0x3) * 0x60C)) + 0x0)) = 0x1;
    *(unsigned int *)((((a4 + 0xC) + ((t0 & 0x3) * 0x60C)) + 0x4)) = a6;
    *(unsigned int *)(((((t0 & 0x3) * 0x60C) + (a4 + 0xC)) + 0x8)) = a5;
    *(unsigned int *)((a4 + 0x4)) = ((*(int *)((a4 + 0x4))) + 0x1);
    return (t0 & 0x3);
}

int FUN_0c18e516(int a4, int a5, int a6)
{
    int stk[4];
    register int t1;
    register int t3;

    *(unsigned int *)(((int)stk + 8)) = a5;
    *(unsigned short *)(((int)stk + 12)) = a6;
    *(int *)((int)stk + 4) = 0x0;
    t1 = (*(short *)(((int)stk + 12)));
    *(int *)((int)stk + 0) = t1;
    t3 = FUN_0c18e39c(a4, 0x1, 0x6, (*(int *)(((int)stk + 8))), t1, 0x0);
    if (t3 == 0) {
        return 0xFFFFFFFF;
    }
    return 0x0;
}

int FUN_0c18fbaa(int a4)
{
    register int t1;
    register int t2;
    register int t6;

    t1 = (*(int *)((a4 + 0x14)));
    t2 = 0x0;
    for (;;) {
        if (t1 == 0) {
            return 0x0;
        }
        if ((unsigned short)(*(short *)((t1 + 0x8))) != (unsigned short)t2) {
            break;
        }
        t6 = (int)((int)(unsigned short)(*(short *)((t1 + 0xA))) / (int)0x8);
        t1 = (*(int *)((t1 + 0xC)));
        t2 = (t2 + t6);
    }
    return 0xFFFFFFFF;
}

int FUN_0c18f8f8(int a4, int a5)
{
    register int t0;

    t0 = FUN_0c18ea14(a5);
    if (t0 != 0) {
        t0 = FUN_0c18dab4(a4);
        if ((t0 & 0xFF000000) == 0x7F000000) {
            return 0x1;
        }
        return 0x0;
    }
    return 0x0;
}

int FUN_0c1965cc(int a4, int a5, int a6)
{
    register int t7;
    register int t9;
    register int t0;
    int t1;
    register int t2;
    register int t3;
    register int t4;

    if (a6 == 0) {
        return 0x0;
    }
    t7 = a4;
    t9 = a5;
    if ((unsigned int)0x0 < (unsigned int)a6) {
        t0 = a4;
        t1 = 0x0;
        t2 = a5;
        for (;;) {
            t3 = *(signed char *)((t2 + 0x0));
            t2 = (t2 + 0x1);
            t4 = *(signed char *)((t0 + 0x0));
            t0 = (t0 + 0x1);
            if ((t4 == t3) && (t1 = (t1 + 0x1), (unsigned int)t1 < (unsigned int)a6)) continue;
            break;
        }
        t7 = t0;
        t9 = t2;
    }
    return ((unsigned char)(*(signed char *)(((t7 - 1) + 0x0))) - (unsigned char)(*(signed char *)(((t9 - 1) + 0x0))));
}

int FUN_0c1a3678(int a4, int a5, int a6)
{
    register int t7;
    register int t9;
    register int t0;
    int t1;
    register int t2;
    register int t3;
    register int t4;

    if (a6 == 0) {
        return 0x0;
    }
    t7 = a4;
    t9 = a5;
    if ((unsigned int)0x0 < (unsigned int)a6) {
        t0 = a4;
        t1 = 0x0;
        t2 = a5;
        for (;;) {
            t3 = *(signed char *)((t2 + 0x0));
            t2 = (t2 + 0x1);
            t4 = *(signed char *)((t0 + 0x0));
            t0 = (t0 + 0x1);
            if ((t4 == t3) && (t1 = (t1 + 0x1), (unsigned int)t1 < (unsigned int)a6)) continue;
            break;
        }
        t7 = t0;
        t9 = t2;
    }
    return ((unsigned char)(*(signed char *)(((t7 - 1) + 0x0))) - (unsigned char)(*(signed char *)(((t9 - 1) + 0x0))));
}

void gdFsEntryErrFuncAllG(int a4, int a5)
{
    register int t0;

    t0 = _builtin_get_imask();
    _builtin_set_imask(0xF);
    *(unsigned int *)(((*(int *)0xC3036E4) + 0x24)) = a4;
    *(unsigned int *)(((*(int *)0xC3036E4) + 0x28)) = a5;
    _builtin_set_imask(((unsigned int)(((t0 & 0xF) << 2) << 2) >> 4));
}

int gdFsIsTrayOpenG(int a4, int a5, int a6, int a7)
{
    register int t2;

    if ((*(int *)(((*(int *)0xC3036E4) + 0x34))) != 1) {
        t2 = gdFsGetDrvStatG(a4, a5, a6, a7);
        if (t2 == 6) {
            *(unsigned int *)(((*(int *)0xC3036E4) + 0x34)) = 0x1;
            return 0x1;
        }
        if (t2 == 0) {
            gdFsReqDrvStatG(t2);
        }
        return 0x0;
    }
    return 0x1;
}

void pdVibGetUnitInfoCallback(int a4, int a5, int a6, int a7)
{
    register int t3;

    if ((*(int *)((((a4 * 0x1C) + 0xC8BA408) + 0xC))) != 0) {
        t3 = FUN_0c0f4328(a4, a5, a6, a7, ((*(int *)((((a4 * 0x1C) + 0xC8BA408) + 0x4)))), 0x0);
        ((int (*)(int, int, int, int))((*(int *)((((a4 * 0x1C) + 0xC8BA408) + 0xC)))))(t3, (*(int *)((((a4 * 0x1C) + 0xC8BA408) + 0x8))), a6, a7);
    return;
    }
}

int kdSetBlockWrite(Stk4 s)
{
    register int t0;

    t0 = mpdrv_set_bwrite(s.w[0], s.w[1], s.w[2]);
    if (((((struct o10E8_int *)((*(int *)0xC8D4D84)))->v)) != 0) {
        FUN_0c2bc7e4();
    }
    return t0;
}

int FUN_0c2d1910(void)
{
    register int t4;

    (((struct o48_uchar *)((*(int *)0xC8D25F0)))->v) = 0x81;
    FUN_0c2d4ad2();
    FUN_0c2ec410(0xC8D2698, 0x2);
    for (;;) {
        t4 = FUN_0c2ec430((*(int *)0xC8D2698));
        if ((signed char)t4 != 0) {
            break;
        }
    }
    return (signed char)t4;
}

int FUN_0c2d2d10(void)
{
    register int t0;
    register int t3;

    t0 = *(int *)0xC8D25F0;
    if ((unsigned char)(*(signed char *)((t0 + 0x48))) != 0xA8) {
        t3 = *(signed char *)((t0 + 0x48));
        if ((unsigned char)(t3 & 0xF0) != 0xB0) {
            if (((unsigned char)(t3 & 0xF0) != 16) && ((unsigned char)(t3 & 0xF0) != 0)) {
                return 0x0;
            }
            return 0x1;
        }
        return 0x1;
    }
    return 0x1;
}

int syG2DmaResumeAll(void)
{
    register int t0;

    t0 = 0x0;
    for (;;) {
        syG2DmaResume((((*(int *)0xC304080) + 0x4) + t0));
        t0 = (t0 + 0x34);
        if ((unsigned int)t0 >= (unsigned int)0xD0) {
            break;
        }
    }
    *(unsigned int *)0xC8D3B84 = 0x0;
    return 0x0;
}

int syG2DmaSuspendAll(void)
{
    register int t0;

    t0 = 0x0;
    for (;;) {
        FUN_0c2f00e4((((*(int *)0xC304080) + 0x4) + t0));
        t0 = (t0 + 0x34);
        if ((unsigned int)t0 >= (unsigned int)0xD0) {
            break;
        }
    }
    *(unsigned int *)0xC8D3B84 = 0x1;
    return 0x0;
}

int fmcalccrc(int a4, int a5, int a6, int a7)
{
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t0;
    register int t3;

    t4 = a4;
    t5 = a5;
    t6 = 0xFFFF;
    t7 = a7;
    for (;;) {
        t4 = (t4 - 1);
        if ((int)t4 < 0) {
            break;
        }
        t7 = (unsigned short)t6;
        t0 = t7;
        t3 = 0xFFFFFFF8;
        t0 = ((int)t0 << (int)t3);
        t3 = (*(signed char *)((t5 + 0x0)));
        t5 = (t5 + 0x1);
        t6 = t7;
        t6 = (t6 << 8);
        t3 = (unsigned char)t3;
        t0 = (t0 ^ t3);
        t0 = (t0 << 1);
        t6 = (t6 ^ ((*(short *)((0xC300838 + t0)))));
    }
    return (unsigned short)(~(unsigned short)t6);
}

int FUN_0c2e635a(void)
{
    register int t2;
    register int t0;
    register int t3;

    for (;;) {
        t2 = *(signed char *)(((*(int *)0xC304178) + 0x0));
        if ((((unsigned char)t2 != 44) && (((int)(unsigned char)t2 > (int)0x20) && ((int)(unsigned char)t2 <= (int)0x7E))) || (t0 = 0xC8D6526, t3 = *(signed char *)((t0 + 0x0)), (unsigned char)t2 == (unsigned char)t3)) {
            break;
        }
        *(unsigned int *)0xC304178 = ((*(int *)0xC304178) + 0x1);
    }
    return (unsigned char)t2;
}

int FUN_0c2f0816(int a4)
{
    register int t0;

    t0 = FUN_0c1965cc(a4, 0xC302C1C, 0x4);
    if (t0 == 0) {
        t0 = FUN_0c1965cc((a4 + 0x8), 0xC302C24, 0x4);
        if (t0 == 0) {
            return 0x1;
        }
        return 0x0;
    }
    return 0x0;
}

int FUN_0c2f1c20(int a4)
{
    register int t0;

    t0 = FUN_0c1965cc(a4, 0xC302C40, 0x4);
    if (t0 == 0) {
        t0 = FUN_0c1965cc((a4 + 0x8), 0xC302C50, 0x4);
        if (t0 == 0) {
            return 0x1;
        }
        return 0x0;
    }
    return 0x0;
}

int nlInvLightVector(void)
{
    nlTransposeMatrix();
    nlCalcVector(0xC2A61D8, 0xC8A6C78);
    nlCalcVector(0xC2A61E8, 0xC8A6C68);
    nlScaleUnitVector(0xC8A6C68, 0xC8A6C68, (*(float *)0xC17EB90));
    return nlTransposeMatrix();
}

int FUN_0c181940(int a4, int a5)
{
    register int t2;

    t2 = *(signed char *)((0xC86CC40 + (unsigned char)((((a4 << 1) + a4) << 2) << 1)));
    if (t2 == 1) {
        return FUN_0c180d72((0x8A1 | ((((short)a5 + 0x40) << 16) | ((((short)a4 << 8) << 2) << 2))));
    }
    return t2;
}

int FUN_0c181972(int a4, int a5)
{
    register int t2;

    t2 = *(signed char *)((0xC86CC40 + (unsigned char)((((a4 << 1) + a4) << 2) << 1)));
    if (t2 == 1) {
        return FUN_0c180d72((0x9A1 | ((((short)a5 + 0x40) << 16) | ((((short)a4 << 8) << 2) << 2))));
    }
    return t2;
}

int FUN_0c18d2c2(int a4, int a5, int a6, int a7)
{
    if (a5 != 0) {
        FUN_0c197c16(a4, a5, a6, (*(int *)((a7 + 0x0))));
    } else {
        *(unsigned int *)(((((a4 << 2) << 1) + 0xC8A7010) + 0x4)) = a6;
        *(unsigned int *)(((((a4 << 2) << 1) + 0xC8A7010) + 0x0)) = a4;
    }
    return 0x0;
}

int FUN_0c197bcc(int a4, int a5, int a6, int a7, int a8, int a9)
{
    int stk[6];
    register int t0;

    *(unsigned short *)(((int)stk + 8)) = a4;
    *(unsigned int *)(((int)stk + 16)) = a5;
    *(unsigned short *)(((int)stk + 4)) = a6;
    *(unsigned int *)(((int)stk + 12)) = a7;
    t0 = *(int *)(((int)stk + 16));
    *(int *)((int)stk + 0) = (unsigned short)((short)(a9 >> 0));
    return (((int (*)(int, int, int, int, int, int, int, int, int, int, int))(t0))((*(short *)(((int)stk + 4))), (*(short *)(((int)stk + 8))), (*(int *)(((int)stk + 12))), (unsigned short)((short)(a8 >> 0)), *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24)));
}

int FUN_0c197d2e(int a4)
{
    register int t0;
    register int t1;

    t0 = FUN_0c18ea14(a4);
    if (t0 != 0) {
        t1 = FUN_0c1a0d60();
        if (t1 != 0) {
            return 0xFFFFFFFF;
        }
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        return 0x0;
    }
    return 0xFFFFFFFF;
}

int FUN_0c1a0e2c(int a4, int a5)
{
    register int t0;

    t0 = FUN_0c18e0f2(0xC8A73E0);
    if ((t0 != 0) && ((int)a5 <= (int)0x5EA)) {
        t0 = FUN_0c18e11e(0xC8A73E0);
        return (t0 + 0xC);
    }
    return 0x0;
}

int FUN_0c2b0da8(int a4)
{
    register int t1;
    register int t2;
    register int t3;

    t1 = *(int *)((((((a4 << 1) + a4) << 2) + 0xC8B96A0) + 0x8));
    *(unsigned char *)((((((a4 << 1) + a4) << 2) + 0xC8B96A0) + 0x0)) = 0x0;
    *(unsigned char *)((((((a4 << 1) + a4) << 2) + 0xC8B96A0) + 0x1)) = 0x0;
    t2 = 0x6;
    t3 = (((((a4 << 1) + a4) << 2) + 0xC8B96A0) + 0x2);
    for (;;) {
        t2 = (t2 - 0x1);
        *(unsigned char *)((t3 + 0x0)) = 0x0;
        t3 = (t3 + 0x1);
        if (t2 == 0) {
            break;
        }
    }
    *(unsigned char *)((t1 + 0x0)) = 0x0;
    *(unsigned char *)((t1 + 0x1)) = 0x0;
    *(unsigned char *)((t1 + 0x2)) = 0x0;
    *(unsigned char *)((t1 + 0x3)) = 0x0;
    return 0x0;
}

int FUN_0c2b0de4(int a4)
{
    register int t2;

    t2 = *(int *)(((*(int *)(((pdGetPeripheral(a4)) + 0x30))) + 0x0));
    if ((t2 & 64) != 0) {
        return ((((a4 << 1) + a4) << 2) + 0xC8B96A0);
    }
    return 0x0;
}

int ADXT_Finish(void)
{
    FUN_0c2c3086();
    FUN_0c2c3238();
    FUN_0c2c3996();
    thunk_FUN_0c2c4b72();
    FUN_0c2c607e();
    FUN_0c2c6352();
    FUN_0c2c6776();
    return ADXF_Finish();
}

int adxf_ChkPrmPt(int a4, int a5)
{
    register int t0;

    if (((int)a4 >= 0) && ((int)a4 < (int)0x100)) {
        if (a5 == 0) {
            t0 = ((int (*)(int, int))(FUN_0c2c30aa))(0xC2FEF98, a5);
            return 0xFFFFFFFD;
        }
        return 0x0;
    }
    t0 = ((int (*)(int))(FUN_0c2c30aa))(0xC2FEF64);
    return 0xFFFFFFFD;
}

int vmsfs_ismount(int a4)
{
    register int t0;
    int t1;

    t0 = vmsio_ismount(a4);
    if ((t0 != 0) && (t1 = *(signed char *)((((a4 * 0x148) + 0xC8C4604) + 0x8)), t1 != 0)) {
        return 0x1;
    }
    return 0x0;
}

int FUN_0c2d586c(void)
{
    int t0;
    register int t1;

    if (((*(signed char *)0xC8D2664) != 0) && (t0 = *(int *)0xC8D25F0, t1 = *(signed char *)(((t0 + 0x54) + 0x0)), (t1 & 4) != 0)) {
        t0 = FUN_0c2ec430((*(int *)0xC8D268C));
        if ((signed char)t0 == 0) {
            return 0x0;
        }
        return 0x1;
    }
    return 0x1;
}

int FUN_0c2daf5a(int a4, int a5, int a6, int a7, int a8)
{
    register int t2;

    if (_builtin_tas((char *)(*(int *)0xC2DB268)) == 0) {
        mpdrv_dpf(a4, a5, a6, a7, 0xC3007C0);
        return 0xFFFFFFFE;
    }
    t2 = mpdrv_set_bread_ns(a4, a5, a6, a7, a8);
    *(unsigned char *)(((*(int *)0xC2DB268) + 0x0)) = 0x0;
    return t2;
}

int FUN_0c2db024(int a4, int a5, int a6, int a7, int a8)
{
    register int t2;

    if (_builtin_tas((char *)(*(int *)0xC2DB268)) == 0) {
        mpdrv_dpf(a4, a5, a6, a7, 0xC3007C0);
        return 0xFFFFFFFE;
    }
    t2 = mpdrv_set_getlerr_ns(a4, a5, a6, a7, a8);
    *(unsigned char *)(((*(int *)0xC2DB268) + 0x0)) = 0x0;
    return t2;
}

int ADXB_CheckAu(int a4)
{
    register int t0;

    t0 = FUN_0c1965cc(a4, 0xC302C2C, 0x4);
    if (t0 != 0) {
        t0 = FUN_0c1965cc(a4, 0xC302C34, 0x4);
        if (t0 == 0) {
            return 0x1;
        }
        return 0x0;
    }
    return 0x1;
}

int FUN_0c2f4ca2(void)
{
    register int t2;

    (((struct o0_uchar *)0xC8DFF90)->v) = 0xA;
    (((struct o1_uchar *)0xC8DFF90)->v) = 0x63;
    (((struct o4_uchar *)0xC8DFF90)->v) = (*(signed char *)0xC8DFF92);
    (((struct o5_uchar *)0xC8DFF90)->v) = 0x0;
    FUN_0c2f66f0();
    (((struct o13_uchar *)0xC8DFF90)->v) = 0x0;
    t2 = *(signed char *)0xC8D6793;
    *(unsigned char *)0xC8D6793 = (t2 | 0x10);
    return (t2 | 0x10);
}

int FUN_0c2fc6e2(void)
{
    register int t2;

    FUN_0c2d7800(0x1);
    *(unsigned char *)0xC8D6450 = 0x0;
    (((struct o0_uchar *)0xC8D6593)->v) = 0x1;
    (((struct o2_uchar *)0xC8D6593)->v) = 0x0;
    (((struct o1_uchar *)0xC8D6593)->v) = 0x0;
    (((struct o3_uchar *)0xC8D6593)->v) = 0x0;
    (((struct o0_uchar *)0xC8D677B)->v) = ((*(signed char *)0xC8D677B) & 0x17);
    t2 = *(signed char *)0xC8D6784;
    (((struct o9_uchar *)0xC8D677B)->v) = (t2 & 0xDE);
    return (t2 & 0xDE);
}

int FUN_0c2fdddc(void)
{
    register int t0;
    register int t2;

    t0 = *(signed char *)0xC8D6793;
    if (((unsigned char)t0 & 128) == 0) {
        t2 = *(signed char *)0xC8D6791;
        if (((unsigned char)t2 & 32) == 0) {
            FUN_0c2eedc0(0x1);
            return FUN_0c2ee56c();
        }
        return (unsigned char)t2;
    }
    return (unsigned char)t0;
}

float math_csc_angle16(int a4)
{
    register float t0;

    if (((unsigned short)a4 != 0) && ((unsigned short)a4 != 0x8000)) {
        t0 = math_sin_angle16((unsigned short)a4);
        return (1.0f / t0);
    }
    return (*(float *)0xC17975C);
}

int FUN_0c18e0c2(int a4)
{
    register int t0;

    t0 = *(int *)((a4 + 0x8));
    *(unsigned int *)((((a4 + 0xC) + ((t0 & 0x3) * 0x60C)) + 0x0)) = 0x0;
    *(unsigned int *)((((a4 + 0xC) + ((t0 & 0x3) * 0x60C)) + 0x4)) = 0xFFFFFFFF;
    *(unsigned int *)(((((t0 & 0x3) * 0x60C) + (a4 + 0xC)) + 0x8)) = 0x0;
    *(unsigned int *)((a4 + 0x8)) = ((*(int *)((a4 + 0x8))) + 0x1);
    return (t0 & 0x3);
}

int FUN_0c1914ec(void)
{
    register int t0;

    t0 = FUN_0c19f76e(0xC8ABB90);
    if ((short)t0 == 0) {
        t0 = FUN_0c19f8e4(0xC8ABB90);
        if ((short)t0 != 0) {
            return 0xFFFFFFEF;
        }
        return 0x0;
    }
    return 0xFFFFFFEF;
}

int FUN_0c1a0cc6(int a4, int a5)
{
    register int t1;

    if ((int)(*(int *)0xC8A6F34) >= (int)(a5 + 0x10)) {
        t1 = FUN_0c191724(a4, a5);
        if ((int)t1 < 0) {
            return 0xFFFFFFFF;
        }
        return 0x0;
    }
    return 0xFFFFFFFF;
}

int FUN_0c1a0d78(int a4)
{
    register int t1;

    (((struct o0_uint *)0xC8B8534)->v) = 0x6;
    t1 = FUN_0c19177a(((((struct o4_int *)0xC8B8534)->v)), a4, 0xC8B8534);
    if ((int)t1 < 0) {
        return 0xFFFFFFFF;
    }
    return 0x0;
}

int kmyEnableASyncCopy(int a4)
{
    register int t0;

    t0 = kmyGetInterruptLevel();
    if (t0 == 0) {
        t0 = 0x0;
        if (a4 != 0) {
            t0 = 0x1;
        }
        *(unsigned int *)0xC8D0CB0 = t0;
        return 0x0;
    }
    return 0xEEEE;
}

int mwRnaGetOutPan(int a4, int a5)
{
    if (a4 == 0) {
        FUN_0c2dc1ae(0xC2FFEE8);
        return 0xFFFFFFFF;
    }
    return (*(int *)(((a4 + 0x64) + (a5 << 2))));
}

void kmyiInitializeCallback(int a4)
{
    register int t0;
    register int t1;
    register int t3;

    *(unsigned int *)((a4 + 0x14)) = 0xC2C8C84;
    t0 = *(int *)((a4 + 0x8));
    *(unsigned int *)((t0 + 0x0)) = 0x10;
    *(unsigned int *)((t0 + 0x4)) = 0xC2C8C80;
    t1 = 0x0;
    for (;;) {
        *(unsigned int *)((((t0 + 0x8) + t1) + 0x0)) = (*(int *)((t0 + 0x4)));
        t3 = ((t0 + 0x8) + t1);
        t1 = (t1 + 0x8);
        *(unsigned int *)((t3 + 0x4)) = 0x0;
        if ((unsigned int)t1 >= (unsigned int)0x80) {
            break;
        }
    }
}

int FUN_0c2d7d12(int a4)
{
    if ((*(int *)((a4 + 0x8))) == 0) {
        return 0x0;
    }
    return ((*(short *)(((((*(int *)((a4 + 0xC))) + 0x78) + (short)((short)(unsigned char)(*(signed char *)((((((struct o4C_int *)((*(int *)((a4 + 0x8)))))->v)) + 0x0))) * (short)0x8C)) + 0x0))) & 0x1);
}

int FUN_0c2d86e2(int a4)
{
    if (((((struct o4_int *)0xC8D3120)->v)) == 0) {
        (((struct o4_uint *)0xC8D3120)->v) = (((((struct o4_int *)0xC8D3120)->v)) + 0x1);
    }
    (((struct o0_uchar *)0xC8D3120)->v) = (FUN_0c2d80f0(a4));
    (((struct o1_uchar *)0xC8D3120)->v) = 0x0;
    (((struct o3_uchar *)0xC8D3120)->v) = 0x1;
    (((struct o2_uchar *)0xC8D3120)->v) = 0x1;
    return FUN_0c2b9b3e(0xC8D3120);
}

void FUN_0c2e41ac(int a4)
{
    register int t0;

    if ((int)(unsigned char)a4 > (int)0x3) {
        *(unsigned char *)0xC8D6498 = 0x2;
        return;
    }
    t0 = a4;
    if ((unsigned char)a4 == 0) {
        t0 = (a4 + 0x1);
    }
    *(unsigned char *)0xC8D6456 = (((*(signed char *)0xC8D6456) & 0xFC) + t0);
    FUN_0c2e4200(((*(signed char *)0xC8D6456) & 0xC));
}

int FUN_0c2e8238(void)
{
    register int t0;

    t0 = *(signed char *)0xC8D677E;
    if (((unsigned char)t0 & 4) == 0) {
        (((struct o0_uchar *)0xC8D677E)->v) = (((*(signed char *)0xC8D677E) & 0xF8) | 0xC);
        (((struct o10_uchar *)0xC8D677E)->v) = ((*(signed char *)0xC8D678E) & 0x7F);
        FUN_0c2ebf56();
        return FUN_0c2e83ae();
    }
    return (unsigned char)t0;
}

int FUN_0c2e930a(int a4)
{
    register int t1;

    t1 = *(signed char *)((0x2E + (*(int *)0xC8D66E8)));
    if ((unsigned char)t1 != 0) {
        if ((unsigned char)t1 != 1) {
            if ((unsigned char)t1 != 2) {
                return a4;
            }
            return (*(signed char *)(((unsigned char)a4 + 0xC302222)));
        }
        return (*(signed char *)(((unsigned char)a4 + 0xC302218)));
    }
    return a4;
}

int FUN_0c2eb978(int a4, int a5, int a6)
{
    (((struct o35_uchar *)0xC8D67C4)->v) = a4;
    (((struct o2D_uchar *)0xC8D67C4)->v) = a4;
    if (((unsigned char)a4 != 5) && ((unsigned char)a4 == 6)) {
        (((struct o2E_uchar *)0xC8D67C4)->v) = 0x0;
        if ((unsigned char)(*(signed char *)0xC8D67C4) == 1) {
            (((struct o2E_uchar *)0xC8D67C4)->v) = 0x1;
        }
        (((struct o0_uchar *)0xC8D67C4)->v) = 0x0;
    }
    return FUN_0c2cf8d4();
}

int FUN_0c2ed60e(void)
{
    int t1;

    t1 = *(signed char *)(((*(int *)0xC8D7110) + 0x0));
    if ((t1 != 65) && ((t1 != 68) && ((t1 != 69) && ((t1 != 71) && ((t1 != 73) && ((t1 != 77) && (t1 != 84))))))) {
        return 0x0;
    }
    return 0x1;
}

int FUN_0c2ed6c8(void)
{
    register int t0;

    *(unsigned char *)0xC8D7099 = 0x1;
    t0 = *(int *)0xC8D7110;
    *(unsigned int *)0xC8D7110 = (t0 + 0x1);
    if ((*(signed char *)((((t0 + 0x1) - 1) + 0x0))) == 77) {
        FUN_0c2ed71e();
        return (*(signed char *)0xC8D7099);
    }
    return 0x0;
}

int FUN_0c2eec44(void)
{
    register int t0;
    register int t1;

    t0 = FUN_0c2ef3c8();
    if ((unsigned short)t0 == 0) {
        t0 = FUN_0c2d5518();
        t1 = FUN_0c2ec430(((*(int *)0xC8D83C8) + t0));
        if ((signed char)t1 != 0) {
            return 0x1;
        }
        return 0x0;
    }
    return 0x0;
}

int FUN_0c2f2192(int a4)
{
    if ((((int)(signed char)a4 >= (int)0x41) && ((int)(signed char)a4 <= (int)0x5A)) || ((((int)(signed char)a4 >= (int)0x61) && ((int)(signed char)a4 <= (int)0x7A)) || (((int)(signed char)a4 >= (int)0x30) && ((int)(signed char)a4 <= (int)0x39)))) {
        return 0x1;
    }
    return 0x0;
}

int FUN_0c2f4ef0(void)
{
    (((struct o4_uchar *)0xC8DFF90)->v) = (*(signed char *)0xC8DFF92);
    (((struct o1_uchar *)0xC8DFF90)->v) = 0x63;
    (((struct o0_uchar *)0xC8DFF90)->v) = 0xA;
    (((struct o5_uchar *)0xC8DFF90)->v) = 0x0;
    (((struct o1C_uchar *)0xC8DFF90)->v) = 0x1;
    *(unsigned char *)0xC8D6793 = ((*(signed char *)0xC8D6793) | 0x2);
    *(unsigned int *)0xC8D6814 = 0x6;
    return 0xC8D6814;
}

void nl_texture_slot_finish(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(int *)0xC8A64D8;
    if ((*(int *)((((a4 * 0x3C) + t0) + 0x28))) == 0) {
        nlCreateTextureParamA(((a4 * 0x3C) + t0), a5, a6, a7);
    return;
    }
    *(unsigned int *)((((a4 * 0x3C) + t0) + 0x30)) = ((((struct o0_int *)0xC83CD78)->v));
    *(unsigned int *)((((a4 * 0x3C) + t0) + 0x34)) = ((((struct o4_int *)0xC83CD78)->v));
}

int nlsnd_PL_WaitRequest(void)
{
    register int t0;
    register int t1;

    t0 = 0x0;
    for (;;) {
        t1 = FUN_0c180d72(0x18A0);
        if (t1 == 0) {
            break;
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x400000) {
            return 0xFFFFFF00;
        }
    }
    return 0x0;
}

int FUN_0c18139c(int a4, int a5, int a6)
{
    if ((*(signed char *)(((unsigned char)((((a4 << 1) + a4) << 2) << 1) + 0xC86CC40))) != 1) {
        return 0x0;
    }
    *(unsigned int *)((a6 + 0x0)) = (*(int *)0xC86CC0C);
    return (*(int *)(((0xC86CC44 + (unsigned char)((((a4 << 1) + a4) << 2) << 1)) + ((short)a5 << 2))));
}

int FUN_0c1816c6(int a4, int a5)
{
    register int t0;

    if ((short)a5 != 1) {
        if ((short)a5 != 2) {
            if ((short)a5 != 4) {
                return (short)a5;
            }
            t0 = *(signed char *)(((a4 + 0x9) + 0x0));
            *(unsigned char *)(((a4 + 0x9) + 0x0)) = ((t0 & 0x80) | 0x2);
            return ((t0 & 0x80) | 0x2);
        }
        t0 = *(signed char *)(((a4 + 0x9) + 0x0));
        *(unsigned char *)(((a4 + 0x9) + 0x0)) = ((t0 & 0x80) | 0x1);
        return ((t0 & 0x80) | 0x1);
    }
    t0 = *(signed char *)(((a4 + 0x9) + 0x0));
    *(unsigned char *)(((a4 + 0x9) + 0x0)) = (t0 & 0x80);
    return (t0 & 0x80);
}

int FUN_0c18da58(void)
{
    register int t0;
    register int t1;

    if ((unsigned int)0xC8A7070 < (unsigned int)0xC8A737C) {
        t0 = 0xC8A7070;
        t1 = 0xC8A7070;
        for (;;) {
            if ((*(signed char *)((t0 + 0x98))) == 0) {
                break;
            }
            t0 = (t0 + 0x9C);
            t1 = (t1 + 0x9C);
            if ((unsigned int)t0 >= (unsigned int)0xC8A737C) {
                return 0x0;
            }
        }
        (((struct o98_uchar *)(t1))->v) = 0x1;
        return t1;
    }
    return 0x0;
}

void FUN_0c18da86(int a4)
{
    register int t0;
    register int t1;

    if ((unsigned int)0xC8A7070 < (unsigned int)0xC8A737C) {
        t0 = 0xC8A7070;
        t1 = 0xC8A7070;
        for (;;) {
            if (t0 == a4) {
                break;
            }
            t0 = (t0 + 0x9C);
            t1 = (t1 + 0x9C);
            if ((unsigned int)t0 >= (unsigned int)0xC8A737C) {
                return;
            }
        }
        (((struct o98_uchar *)(t1))->v) = 0x0;
        return;
    }
}

int FUN_0c18d9cc(void)
{
    register int t0;

    t0 = FUN_0c198478();
    if (t0 != 0) {
        return 0x1;
    }
    if ((*(int *)0xC8A7380) != 0) {
        FUN_0c18ff14();
        *(unsigned int *)0xC8A6F8C = 0x1;
    }
    return 0x0;
}

int FUN_0c19158c(int a4, int a5)
{
    *(unsigned char *)(((0x4 + a5) + 0x0)) = (*(signed char *)((a4 + 0xC2AE73A)));
    *(unsigned char *)((a5 + 0x5)) = (*(signed char *)0xC2AE73C);
    *(unsigned char *)(((0x6 + a5) + 0x0)) = (*(signed char *)((a4 + 0xC2AE73E)));
    *(unsigned int *)((a5 + 0x8)) = 0xC2AE742;
    *(unsigned char *)((a5 + 0xC)) = (*(signed char *)0xC2AE740);
    *(unsigned int *)((a5 + 0x0)) = (*(short *)0xC2AE738);
    return 0x0;
}

int FUN_0c1916f6(int a4)
{
    register int t0;
    int t1;

    t0 = FUN_0c191850(a4);
    if (((short)t0 == 0) && (t1 = *(signed char *)((((((a4 << 2) + a4) << 2) + 0xC8A97F0) + 0x0)), t1 != 0)) {
        *(unsigned char *)((((((a4 << 2) + a4) << 2) + 0xC8A97F0) + 0x0)) = 0x0;
    }
    return 0x0;
}

int FUN_0c1931fa(int a4, int a5, int a6)
{
    register int t1;
    register int t2;
    register int t3;

    if ((*(signed char *)((a4 + 0x0))) == 0) {
        return 0x0;
    }
    t1 = a4;
    t2 = a5;
    for (;;) {
        t3 = *(signed char *)((t1 + 0x0));
        t1 = (t1 + 0x1);
        if ((unsigned char)t3 == 0) {
            t1 = (t1 - 1);
            *(unsigned char *)((t2 + 0x0)) = 0x0;
            *(unsigned int *)((a6 + 0x0)) = t1;
            return 0x1;
        }
        if ((unsigned char)t3 == 10) {
            break;
        }
        *(unsigned char *)((t2 + 0x0)) = (unsigned char)t3;
        t2 = (t2 + 0x1);
    }
    *(unsigned char *)((t2 + 0x0)) = 0x0;
    *(unsigned int *)((a6 + 0x0)) = ((t1 + 0x1) - 1);
    return 0x1;
}

int FUN_0c1984ce(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = FUN_0c18e932(a4, a5, a6, a7);
    if (t0 == 0) {
        t0 = FUN_0c18ed2e(a7);
        if (t0 != 0) {
            FUN_0c18e9a0(a7);
            return 0xFFFFFFFF;
        }
        return 0x0;
    }
    return 0xFFFFFFFF;
}

int FUN_0c19af74(int a4)
{
    if (((int)a4 < (int)(unsigned char)(*(signed char *)0xC8A738C)) && ((int)a4 >= 0)) {
        if ((unsigned short)((((struct o138_short *)(((a4 * 0x174) + (*(int *)0xC8A73C0))))->v)) != 1) {
            return 0xFFFFFFFC;
        }
        return 0x0;
    }
    return 0xFFFFFFFC;
}

int FUN_0c19cf08(int a4, int a5, int a6, int a7)
{
    register int t1;
    register int t2;
    register int t4;

    t1 = *(int *)((a4 + 0x30));
    if ((int)(unsigned char)(*(signed char *)((a4 + 0x3))) > 0) {
        *(unsigned int *)((t1 + 0x8)) = 0xC20AA50;
        t2 = *(signed char *)((a4 + 0x3));
        *(unsigned char *)((a4 + 0x3)) = (t2 - 1);
        t4 = (t2 - 1);
    } else {
        *(unsigned int *)((t1 + 0x8)) = 0xC20AA60;
        FUN_0c19c9fc(a4, a5, a6, a7);
        *(unsigned short *)((a4 + 0x8)) = 0x1;
        t4 = 0x1;
    }
    return t4;
}

int FUN_0c19d3dc(int a4)
{
    if ((int)(unsigned char)(*(signed char *)((a4 + 0x3))) <= 0) {
        return 0xFFFFFFFF;
    }
    *(unsigned char *)((a4 + 0x3)) = ((*(signed char *)((a4 + 0x3))) - 1);
    FUN_0c19d296(a4);
    return FUN_0c19d2b4(a4, 0x5, 0x0, 0x0);
}

int FUN_0c19f868(int a4, int a5)
{
    if ((short)a4 == 0) {
        *(unsigned short *)((a5 + 0x10)) = 0x2D;
        *(unsigned short *)((a5 + 0x12)) = 0x10;
        (((struct o14_uchar *)(a5))->v) = 0x1;
        *(unsigned short *)((a5 + 0x4)) = ((*(short *)((a5 + 0x4))) | 0x4);
    } else {
        if ((short)a4 != 0) {
            *(unsigned short *)((a5 + 0x4)) = ((*(short *)((a5 + 0x4))) & 0xFFFFFFFB);
        }
    }
    return 0x0;
}

int FUN_0c19f98c(int a4, int a5)
{
    register int t2;

    if (((int)(unsigned short)a5 < (int)0x100) && ((unsigned short)a5 != 0)) {
        *(unsigned char *)((a4 + 0x0)) = a5;
        t2 = (a4 + 0x1);
    } else {
        *(unsigned char *)((a4 + 0x0)) = 0x0;
        t2 = (FUN_0c19c906((a4 + 0x1), a5));
    }
    return t2;
}

int FUN_0c2b28fc(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = vmsfs_c_getstate(a4);
    if (t0 != 0) {
        return 0xFFFFFFFF;
    }
    return vmsfs_fcreate(a4, a5, a6, a7);
}

int FUN_0c2b2932(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = vmsfs_c_getstate(a4);
    if (t0 != 0) {
        return 0xFFFFFFFF;
    }
    return vmsfs_xcreate(a4, a5, a6, a7);
}
