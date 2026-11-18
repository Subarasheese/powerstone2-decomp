/* Straight-line functions with calls and guards (batch gen_bi): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[4]; } Stk4;
struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o0_ushort { unsigned short v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o171_uchar { char p[0x171]; unsigned char v; };
struct o172_uchar { char p[0x172]; unsigned char v; };
struct o18_uchar { char p[0x18]; unsigned char v; };
struct o1C_uchar { char p[0x1C]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o2_ushort { char p[0x2]; unsigned short v; };
struct o24_int { char p[0x24]; int v; };
struct o24_uchar { char p[0x24]; unsigned char v; };
struct o28_int { char p[0x28]; int v; };
struct o37_uchar { char p[0x37]; unsigned char v; };
struct o38_uchar { char p[0x38]; unsigned char v; };
struct o38_uint { char p[0x38]; unsigned int v; };
struct o3C_ushort { char p[0x3C]; unsigned short v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o4C_short { char p[0x4C]; short v; };
struct o5_uchar { char p[0x5]; unsigned char v; };
struct o500_ushort { char p[0x500]; unsigned short v; };
struct o502_ushort { char p[0x502]; unsigned short v; };
struct o504_uint { char p[0x504]; unsigned int v; };
struct o508_uint { char p[0x508]; unsigned int v; };
struct o50C_uint { char p[0x50C]; unsigned int v; };
struct o58_int { char p[0x58]; int v; };
struct o74_uint { char p[0x74]; unsigned int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o9_uchar { char p[0x9]; unsigned char v; };
struct o98_int { char p[0x98]; int v; };
struct o98_uint { char p[0x98]; unsigned int v; };
struct o9C_uchar { char p[0x9C]; unsigned char v; };
struct oA_uchar { char p[0xA]; unsigned char v; };
struct oB_uchar { char p[0xB]; unsigned char v; };
struct oC_float { char p[0xC]; float v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oD0_uint { char p[0xD0]; unsigned int v; };
struct oD4_uint { char p[0xD4]; unsigned int v; };
int FUN_0c0df210(float);
int FUN_0c10121c(int, int, int);
int FUN_0c17b1a0(int);
int FUN_0c1829f8(int);
int FUN_0c182a58(int, int);
int FUN_0c182b04(void);
int FUN_0c183140(int, int, int, int);
int FUN_0c184000(int, int, int);
int FUN_0c18408e(void);
int FUN_0c1842e8(int, int, int);
int FUN_0c187a88(int, int, int);
int FUN_0c187b78(int, int, int);
int FUN_0c18e08e(int, int, int);
int FUN_0c191200(void);
int FUN_0c1920f8(int);
int FUN_0c193de4(int, int);
int FUN_0c197d2e(int);
int FUN_0c1984fc(int);
int FUN_0c19d9f6(int);
extern int FUN_0c19da48();
int FUN_0c19ec2c(int);
int FUN_0c19fad2(int);
extern int FUN_0c2b97a0();
int FUN_0c2b9b3e(int);
int FUN_0c2bd082(void);
int FUN_0c2bd8b4(int, int, int);
int FUN_0c2c389e(int);
int FUN_0c2c38aa(int);
int FUN_0c2c38da(int);
int FUN_0c2d49c0(int, ...);
int FUN_0c2d4ad2(void);
int FUN_0c2d5f96(void);
int FUN_0c2d63ba(void);
int FUN_0c2d6670(int);
int FUN_0c2d66d4(int);
int FUN_0c2d6754(int, int, int);
int FUN_0c2d67cc(int, int);
int FUN_0c2d683c(void);
int FUN_0c2d7f20(int);
int FUN_0c2d87aa(int);
int FUN_0c2dc1ae(int, ...);
int FUN_0c2e715e(int);
int FUN_0c2e7248(int, int);
int FUN_0c2e7f3c(void);
int FUN_0c2e8268(void);
int FUN_0c2e83ae(void);
int FUN_0c2ec410(int, int);
int FUN_0c2ec67a(int);
int FUN_0c2ec776(int);
int FUN_0c2ee4ba(int);
int FUN_0c2ee56c(void);
int FUN_0c2ee63c(void);
int FUN_0c2ef3bc(void);
int FUN_0c2fae08(void);
int FUN_0c2fae7a(void);
int FUN_0c2fc6e2(void);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int kmBeginPass(int);
int kmSetFatalErrorCallback(int);
int memset(int, int, int);
int nlMultiMatrix(int);
int nlMultiPushedMatrix(void);
int nlPushMatrix(int);
int nlStoreMatrix(int);
int nlsndG2Read(int);
int vmsfs_c_getstate(int);
int FUN_0c19ae90(int a4, int a5);
int FUN_0c19c9fc(int a4, int a5, int a6, int a7);
int FUN_0c19d1ae(int a4);
int FUN_0c19d444(int a4, int a5, int a6, int a7);
int FUN_0c19dad8(int a4, int a5, int a6, int a7);
int FUN_0c19e4dc(int a4);
int FUN_0c19f790(int a4, int a5);
int FUN_0c19f7ae(int a4, int a5);
int FUN_0c1a3af0(int a4, int a5);
int gdFsFinish(void);
int FUN_0c2b3438(int a4, int a5);
int FUN_0c2b486c(int a4);
int FUN_0c2b484e(int a4);
int FUN_0c2b488a(int a4);
int stringEquals(int a4, int a5, int a6, int a7);
int mwRnaGetNumData(int a4);
int mwRnaGetBitPerSmpl(int a4);
int FUN_0c2d114a(void);
int FUN_0c2d3b3c(void);
int FUN_0c2d3b5a(void);
int FUN_0c2d663a(int a4);
int FUN_0c2d78a8(void);
int FUN_0c2d78c6(void);
int FUN_0c2d8788(int a4);
int kmyiInitializeDriverObject(int a4, int a5);
int FUN_0c2e7200(int a4);
int FUN_0c2e89f4(int a4);
int FUN_0c2f97ae(void);
int FUN_0c2fb3d0(void);
void FUN_0c182ffc(int a4, int a5, int a6, int a7);
int FUN_0c1831d0(int a4, int a5, int a6, int a7);
int FUN_0c1831ec(int a4, int a5, int a6, int a7);
int FUN_0c182b52(void);
void FUN_0c183018(int a4, int a5, int a6, int a7);
int FUN_0c187d44(int a4, int a5);
int FUN_0c18cb78(void);
int FUN_0c18cc78(int a4);
int FUN_0c193c1e(int a4);
int FUN_0c193cd2(int a4, int a5, int a6);
int FUN_0c197c16(int a4, int a5, int a6, int a7);
int FUN_0c19d0da(int a4);
void FUN_0c19db2c(int a4, int a5);
void FUN_0c1a14c0(int a4);
float _app_coss(float f4);
int FUN_0c1a39f0(int a4, int a5);
int pdGunGetLatchedPort(void);
int vmsfs_c_setcompletecallback(int a4);
int vmsfs_c_setprogresscallback(int a4);
int vmsfs_c_setcallbackparam(int a4);
void FUN_0c2c6062(void);
void FUN_0c2c6336(void);
void FUN_0c2c675a(void);
int FUN_0c2d5fa6(void);
int FUN_0c2e7790(void);
int FUN_0c2e8a12(int a4);
int FUN_0c2ec430(int a4);
int FUN_0c2ef3a0(void);
int FUN_0c2f3bc8(void);
int FUN_0c2faaac(void);
int FUN_0c2fb398(void);
int FUN_0c2fb3b4(void);
void FUN_0c177af0(int a4);
int nlSetFatalErrorMode(int a4);
void nlPrintSetGarbagedTexture(void);
int nlClearMatrix(void);
int nlIntrSetVectorFunction(int a4, int a5);
int FUN_0c17ff1e(void);
int FUN_0c185d50(int a4);
int FUN_0c185d6a(int a4);
int FUN_0c18e0f2(int a4);
int FUN_0c18e9a0(int a4);
int FUN_0c191af2(int a4);
int FUN_0c193be4(void);
int FUN_0c193e50(int a4, int a5);
int FUN_0c1948a0(int a4);
int nlObjPut_vtxcolbridge(void);
int FUN_0c197e1c(int a4, int a5);
int FUN_0c19acca(int a4, int a5);
int FUN_0c19c058(int a4);
int FUN_0c19dbe4(int a4, int a5);
int FUN_0c19ecba(int a4);
int FUN_0c19f6ca(int a4);
int FUN_0c1a0e5e(int a4, int a5);
int _pow5(int a4, int a5);
int gdFsGetFileFad(int a4, int a5);
int FUN_0c2b2c08(int a4);
int kmSetWaitVsyncCount(int a4);
int vmsfs_c_settime(int a4, int a5);
int direntry_dirty(int a4, int a5);
int FUN_0c2c306c(void);
int FUN_0c2c3086(void);
int FUN_0c2cbc44(int a4);
int kmyInitializeTA(int a4, int a5, int a6, int a7);
int FUN_0c2d1800(void);
int FUN_0c2d4986(Stk4 s);
int FUN_0c2d86c8(void);
int FUN_0c2d876e(void);
int FUN_0c2ebf6c(void);
int FUN_0c2ee516(void);
int syG2DmaResume(int a4);
int FUN_0c2f00e4(int a4);
int FUN_0c2f4f96(void);
int FUN_0c2f897c(int a4);
int FUN_0c2fc6c8(void);
void nlVtxBufScanInit(void);
int nlSysBeginPass(void);
int FUN_0c0df2b0(float f4);
void nl_requset_PixelClipping(float f4, float f5, float f6, float f7);
int nlMakeModelViewProjectMatrix_objput(void);
int FUN_0c17f440(float f4, float f5);
int FUN_0c184d30(int a4);
int FUN_0c184d48(int a4);
int FUN_0c184c48(int a4);
void FUN_0c18589e(int a4, int a5);
int FUN_0c187b60(int a4, int a5, int a6, int a7);
int FUN_0c18ed16(void);
void FUN_0c190c4e(int a4);
int FUN_0c19114c(int a4);
int FUN_0c191f2c(void);
int FUN_0c1947b8(int a4);
int FUN_0c194962(int a4);
int FUN_0c197bfe(int a4, int a5, int a6, int a7);
int FUN_0c19dbaa(int a4, int a5);
int FUN_0c19ecd4(int a4);
void FUN_0c1a2120(int a4, int a5, int a6);
void FUN_0c2aeb3c(int a4);
int FUN_0c0f2044(void);
int FUN_0c2c0ffe(int a4);
int FUN_0c2c1016(int a4);
int bufferEquals(int a4, int a5, int a6, int a7);
int kmyRegisterPALEXTCallback(int a4);

int FUN_0c19ae90(int a4, int a5)
{
    (((struct oD4_uint *)(((*(int *)0xC8A73C0) + (a4 * 0x174))))->v) = 0x0;
    (((struct o171_uchar *)(((a4 * 0x174) + (*(int *)0xC8A73C0))))->v) = a5;
    return 0x0;
}

int FUN_0c19c9fc(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(int *)((a4 + 0xC));
    t1 = ((int (*)(int, int, int, int))(FUN_0c19da48))(((t0 + 0x4) + 0x9C), a5, a6, a7);
    return ((int (*)(int))(FUN_0c19da48))((t0 + 0x4));
}

int FUN_0c19d1ae(int a4)
{
    *(unsigned char *)((a4 + 0x2)) = ((*(signed char *)((a4 + 0x2))) & 0xBF);
    *(unsigned char *)((a4 + 0x2)) = ((*(signed char *)((a4 + 0x2))) | 0x80);
    if ((int)(unsigned char)(*(signed char *)((a4 + 0x0))) < (int)0x1) {
        *(unsigned char *)((a4 + 0x0)) = 0x1;
    }
    return 0x0;
}

int FUN_0c19d444(int a4, int a5, int a6, int a7)
{
    register int t3;

    FUN_0c19114c((a4 + 0x10));
    t3 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)((a4 + 0x2C))) + 0x1C)))))(a4, a5, a6, a7);
    *(unsigned char *)((a4 + 0x0)) = 0x5;
    return t3;
}

int FUN_0c19dad8(int a4, int a5, int a6, int a7)
{
    register int t4;

    if ((*(int *)((a4 + 0x30))) != 0) {
        t4 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)((a4 + 0x2C))) + 0x10)))))(a4, a5, a6, a7);
        *(unsigned int *)((a4 + 0x30)) = 0x0;
    }
    return t4;
}

int FUN_0c19e4dc(int a4)
{
    register int t0;

    t0 = *(int *)((a4 + 0xC));
    *(unsigned char *)((t0 + 0x0)) = 0x4;
    FUN_0c19d9f6((t0 + 0x6C));
    return FUN_0c19ec2c((t0 + 0x38));
}

int FUN_0c19f790(int a4, int a5)
{
    register int t2;

    if (a5 == -1) {
        *(unsigned int *)((a4 + 0x8)) = 0x0;
        t2 = ((*(short *)((a4 + 0x4))) & 0xFFFFFFF7);
    } else {
        *(unsigned int *)((a4 + 0x8)) = a5;
        t2 = ((*(short *)((a4 + 0x4))) | 0x8);
    }
    *(unsigned short *)((a4 + 0x4)) = t2;
    return 0x0;
}

int FUN_0c19f7ae(int a4, int a5)
{
    register int t2;

    if (a5 == -1) {
        *(unsigned int *)((a4 + 0x8)) = 0x0;
        t2 = ((*(short *)((a4 + 0x4))) & 0xFFFFFFF7);
    } else {
        *(unsigned int *)((a4 + 0x8)) = a5;
        t2 = ((*(short *)((a4 + 0x4))) | 0x8);
    }
    *(unsigned short *)((a4 + 0x4)) = t2;
    return 0x0;
}

int FUN_0c1a3af0(int a4, int a5)
{
    register int t0;
    register int t1;

    t0 = a4;
    t1 = 0x8;
    for (;;) {
        *(unsigned char *)((t0 + 0x0)) = ((unsigned int)(unsigned short)(*(short *)((a5 + 0x0))) << (int)(-t1));
        t0 = (t0 + 0x1);
        t1 = (t1 - 8);
        if ((unsigned int)t0 >= (unsigned int)(a4 + 0x2)) {
            break;
        }
    }
    return (a4 + 0x2);
}

int gdFsFinish(void)
{
    register int t0;
    register int t1;

    t0 = *(int *)0xC3036F0;
    if (t0 != 0) {
        t1 = ((int (*)(void))((*(int *)((t0 + 0x14)))))();
        *(unsigned int *)0xC3036F0 = 0x0;
        t0 = t1;
    }
    return t0;
}

int FUN_0c2b3438(int a4, int a5)
{
    register int t2;

    t2 = 0x7EF30;
    if (((int)(short)a5 >= 0) && ((int)(short)a5 <= (int)0x80)) {
        t2 = (0x7EF30 + (((((short)a5 << 2) << 2) << 2) << 1));
    }
    return t2;
}

int FUN_0c2b486c(int a4)
{
    if ((int)(*(signed char *)((a4 + 0x1))) >= (int)0x2) {
        return FUN_0c2c389e((*(int *)((a4 + 0x4))));
    }
    return 0x0;
}

int FUN_0c2b484e(int a4)
{
    if ((int)(*(signed char *)((a4 + 0x1))) >= (int)0x2) {
        return FUN_0c2c38da((*(int *)((a4 + 0x4))));
    }
    return 0x0;
}

int FUN_0c2b488a(int a4)
{
    if ((int)(*(signed char *)((a4 + 0x1))) >= (int)0x2) {
        return FUN_0c2c38aa((*(int *)((a4 + 0x4))));
    }
    return 0x0;
}

int stringEquals(int a4, int a5, int a6, int a7)
{
    if ((*(signed char *)((a4 + 0x0))) == 0) {
        if ((*(signed char *)((a5 + 0x0))) != 0) {
            return 0x0;
        }
        return 0x1;
    }
    return ((int (*)(int, int, int, int))(0xC2BA374))(a4, a5, a6, a7);
}

int mwRnaGetNumData(int a4)
{
    if (a4 == 0) {
        FUN_0c2dc1ae(0xC2FFEE8);
        return 0xFFFFFFFF;
    }
    return (*(int *)((a4 + 0x34)));
}

int mwRnaGetBitPerSmpl(int a4)
{
    if (a4 == 0) {
        FUN_0c2dc1ae(0xC2FFEE8);
        return 0xFFFFFFFF;
    }
    return (*(int *)((a4 + 0x8)));
}

int FUN_0c2d114a(void)
{
    register int t0;
    register int t1;

    (((struct o37_uchar *)0xC8D262E)->v) = 0x0;
    (((struct o3C_ushort *)0xC8D25F0)->v) = 0x0;
    (((struct o0_ushort *)0xC8D262E)->v) = 0x0;
    (((struct o2_ushort *)0xC8D262E)->v) = 0x0;
    t0 = (((struct o0_int *)0xC8D25F0)->v);
    t1 = *(signed char *)((t0 + 0x8));
    *(unsigned char *)((t0 + 0x8)) = (t1 & 0xBF);
    return (t1 & 0xBF);
}

int FUN_0c2d3b3c(void)
{
    register int t0;

    t0 = (((struct o0_int *)0xC8D25F0)->v);
    (((struct o1C_uchar *)(t0))->v) = ((*(signed char *)(((t0 + 0x1C) + 0x0))) | 0x80);
    t0 = (((struct o0_int *)0xC8D25F0)->v);
    *(unsigned char *)((t0 + 0x8)) = ((*(signed char *)((t0 + 0x8))) | 0x1);
    t0 = *(signed char *)0xC8D25F5;
    (((struct o5_uchar *)0xC8D25F0)->v) = (t0 | 0x80);
    return (t0 | 0x80);
}

int FUN_0c2d3b5a(void)
{
    register int t0;

    t0 = (((struct o0_int *)0xC8D25F0)->v);
    (((struct o1C_uchar *)(t0))->v) = ((*(signed char *)(((t0 + 0x1C) + 0x0))) & 0x7F);
    t0 = (((struct o0_int *)0xC8D25F0)->v);
    *(unsigned char *)((t0 + 0x8)) = ((*(signed char *)((t0 + 0x8))) & 0xFE);
    t0 = *(signed char *)0xC8D25F5;
    (((struct o5_uchar *)0xC8D25F0)->v) = (t0 & 0x7F);
    return (t0 & 0x7F);
}

int FUN_0c2d663a(int a4)
{
    if (a4 != 0) {
        *(unsigned char *)0xC303FD2 = 0x1;
        return FUN_0c2d67cc(0x1, 0xC2B980E);
    }
    *(unsigned char *)0xC303FD2 = 0x0;
    return FUN_0c2d67cc(0x0, 0xC2B980E);
}

int FUN_0c2d78a8(void)
{
    int t0;
    register int t1;

    t1 = *(signed char *)0xC304060;
    if (((unsigned char)t1 == 1) && (t0 = *(int *)0xC8D30EC, t0 != 0)) {
        t0 = *(int *)0xC8D30EC;
        return ((int (*)(void))(t0))();
    }
    return (unsigned char)t1;
}

int FUN_0c2d78c6(void)
{
    int t0;
    register int t1;

    t1 = *(signed char *)0xC304060;
    if (((unsigned char)t1 == 1) && (t0 = *(int *)0xC8D30F0, t0 != 0)) {
        t0 = *(int *)0xC8D30F0;
        return ((int (*)(void))(t0))();
    }
    return (unsigned char)t1;
}

int FUN_0c2d8788(int a4)
{
    (((struct o500_ushort *)(a4))->v) = 0x0;
    (((struct o502_ushort *)(a4))->v) = 0x0;
    (((struct o50C_uint *)(a4))->v) = 0x0;
    (((struct o508_uint *)(a4))->v) = (0x100 + a4);
    (((struct o504_uint *)(a4))->v) = (0x100 + a4);
    return a4;
}

int kmyiInitializeDriverObject(int a4, int a5)
{
    *(unsigned int *)((a4 + 0x0)) = a5;
    *(unsigned int *)((a4 + 0x8)) = 0xC2E1A60;
    *(unsigned int *)((a4 + 0x10)) = 0xC2E1A74;
    *(unsigned int *)((a4 + 0x4)) = 0x0;
    *(unsigned int *)((a4 + 0x14)) = 0xC2E1ABC;
    *(unsigned int *)((a5 + 0x4)) = 0xC300E24;
    *(unsigned int *)((a5 + 0x8)) = 0xC300E84;
    return 0x0;
}

int FUN_0c2e7200(int a4)
{
    register int t1;
    register int t2;
    register int t4;

    t1 = (FUN_0c2e83ae());
    t2 = a4;
    for (;;) {
        if ((*(signed char *)((t2 + 0x0))) == 0) {
            break;
        }
        t4 = *(signed char *)((t2 + 0x0));
        t2 = (t2 + 0x1);
        t1 = (FUN_0c2e715e(t4));
    }
    return t1;
}

int FUN_0c2e89f4(int a4)
{
    *(unsigned char *)0xC8D66F0 = a4;
    FUN_0c2d6670(a4);
    return FUN_0c2d6754(a4, 0xC8D66E8, 0xC8D66EC);
}

int FUN_0c2f97ae(void)
{
    FUN_0c2ec410(0xC8D65D0, 0x1E);
    FUN_0c2ec410(0xC8D65D4, 0x19);
    return (FUN_0c2ec410(0xC8D65D8, 0x1E));
}

int FUN_0c2fb3d0(void)
{
    FUN_0c2ee63c();
    FUN_0c2ee56c();
    FUN_0c2fb398();
    FUN_0c2fb3b4();
    FUN_0c2fae7a();
    return FUN_0c2fae08();
}

void FUN_0c182ffc(int a4, int a5, int a6, int a7)
{
    register int t0;

    for (;;) {
        if ((*(int *)0xC2A62A0) != 0) {
            FUN_0c191200();
            t0 = ((int (*)(int, int))(FUN_0c2b97a0))(0xC86CE98, 0xC86CEE8);
            continue;
        }
        t0 = ((int (*)(int, int, int, int))(FUN_0c2b97a0))(0xC86CE98, 0xC86CEE8, a6, a7);
    }
}

int FUN_0c1831d0(int a4, int a5, int a6, int a7)
{
    if ((_builtin_get_imask()) == 0) {
        return FUN_0c183140(0x1, a5, a6, a7);
    }
    return FUN_0c2b97a0(0xC86CE98, 0xC86CEE8, a6, a7);
}

int FUN_0c1831ec(int a4, int a5, int a6, int a7)
{
    if ((_builtin_get_imask()) == 0) {
        return FUN_0c183140(0x1, a5, a6, a7);
    }
    return FUN_0c2b97a0(0xC86CE98, 0xC86CF38, a6, a7);
}

int FUN_0c182b52(void)
{
    register int t1;

    FUN_0c182a58(0x0, 0x0);
    t1 = FUN_0c1829f8(0x0);
    FUN_0c182b04();
    return t1;
}

void FUN_0c183018(int a4, int a5, int a6, int a7)
{
    register int t0;

    for (;;) {
        if ((*(int *)0xC2A62A4) != 0) {
            FUN_0c18408e();
            t0 = ((int (*)(int, int))(FUN_0c2b97a0))(0xC86CE98, 0xC86CF38);
            continue;
        }
        t0 = ((int (*)(int, int, int, int))(FUN_0c2b97a0))(0xC86CE98, 0xC86CF38, a6, a7);
    }
}

int FUN_0c187d44(int a4, int a5)
{
    register int t0;
    register int t1;

    t0 = a4;
    for (;;) {
        t1 = *(signed char *)((t0 + 0x0));
        if (t1 == (signed char)a5) {
            return t0;
        }
        if (t1 == 0) {
            break;
        }
        t0 = (t0 + 0x1);
    }
    return 0x0;
}

int FUN_0c18cb78(void)
{
    (((struct o0_uint *)0xC8A6F68)->v) = 0xC18CB98;
    (((struct o4_uint *)0xC8A6F68)->v) = 0x0;
    (((struct o8_uint *)0xC8A6F68)->v) = 0xC18CB9E;
    (((struct oC_uint *)0xC8A6F68)->v) = 0xC18CBA2;
    (((struct o10_uint *)0xC8A6F68)->v) = 0x0;
    (((struct o14_uint *)0xC8A6F68)->v) = 0xC18CBA8;
    return 0xC8A6F68;
}

int FUN_0c18cc78(int a4)
{
    if ((*(short *)((a4 + 0x0))) == 0) {
        *(unsigned int *)0xC8A6F8C = 0x0;
    }
    return FUN_0c1984fc((*(short *)((a4 + 0x0))));
}

int FUN_0c193c1e(int a4)
{
    int stk[2];

    *(unsigned int *)(((int)stk + 0)) = 0x0;
    *(unsigned int *)(((int)stk + 4)) = a4;
    return (FUN_0c184000(0x4131, ((int)stk + 0), ((int)stk + 0)));
}

int FUN_0c193cd2(int a4, int a5, int a6)
{
    register int t7;
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t7 = a4;
    if ((int)(unsigned short)a6 > 0) {
        t0 = a5;
        t1 = a4;
        t2 = 0x0;
        for (;;) {
            t2 = (t2 + 0x1);
            t3 = *(signed char *)((t0 + 0x0));
            t0 = (t0 + 0x1);
            *(unsigned char *)((t1 + 0x0)) = t3;
            t1 = (t1 + 0x1);
            if ((int)(short)t2 >= (int)(unsigned short)a6) {
                break;
            }
        }
        t7 = t1;
    }
    return t7;
}

int FUN_0c197c16(int a4, int a5, int a6, int a7)
{
    int stk[4];
    register int t0;
    register int t1;
    register int t2;

    *(unsigned short *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 12)) = a5;
    *(unsigned short *)(((int)stk + 0)) = a6;
    *(unsigned int *)(((int)stk + 8)) = a7;
    t0 = *(short *)(((int)stk + 0));
    t1 = *(short *)(((((int)stk + 0) + 0x4) + 0x0));
    t2 = *(int *)(((int)stk + 12));
    return ((int (*)(int, int, int, int))(t2))(t0, t1, a7, a7);
}

int FUN_0c19d0da(int a4)
{
    (((struct o9C_uchar *)((a4 + 0x4)))->v) = 0x2;
    *(unsigned char *)((((a4 + 0x4) + 0x9C) + 0x2)) = ((*(signed char *)((((a4 + 0x4) + 0x9C) + 0x2))) | 0x20);
    *(unsigned char *)((a4 + 0x2)) = ((*(signed char *)((a4 + 0x2))) | 0x20);
    return 0x0;
}

void FUN_0c19db2c(int a4, int a5)
{
    if ((short)a5 == 0) {
        *(unsigned short *)((a4 + 0x0)) = ((*(short *)((a4 + 0x0))) | 0x100);
    } else {
        *(unsigned short *)((a4 + 0x0)) = ((*(short *)((a4 + 0x0))) & 0xFFFFFEFF);
    }
}

void FUN_0c1a14c0(int a4)
{
    *(unsigned int *)(((a4 + 0x10) + 0x4)) = 0x0;
    *(unsigned int *)(((a4 + 0x10) + 0x0)) = 0x0;
    *(unsigned int *)((a4 + 0x0)) = 0x67452301;
    *(unsigned int *)((a4 + 0x4)) = 0xEFCDAB89;
    *(unsigned int *)((a4 + 0x8)) = 0x98BADCFE;
    *(unsigned int *)((a4 + 0xC)) = 0x10325476;
}

float _app_coss(float f4)
{
    register int t1;
    register int t2;
    register float u3;
    register float u4;
    register float u5;
    register float u6;

    t1 = 0x6;
    t2 = 0xC20AD24;
    u3 = (*(float *)0xC20AD20);
    for (;;) {
        u4 = *(float *)((t2 + 0x0));
        t2 = (t2 + 0x4);
        t1 = (t1 - 1);
        u5 = (f4 * f4);
        u6 = u4;
        u6 = u6 + u5 * u3;
        u3 = u6;
        if ((int)t1 <= 0) {
            break;
        }
    }
    return u3;
}

int FUN_0c1a39f0(int a4, int a5)
{
    register int t0;
    register int t1;

    t0 = a4;
    t1 = 0x18;
    for (;;) {
        *(unsigned char *)((t0 + 0x0)) = ((unsigned int)(*(int *)((a5 + 0x0))) << (int)(-t1));
        t0 = (t0 + 0x1);
        t1 = (t1 - 8);
        if ((unsigned int)t0 >= (unsigned int)(a4 + 0x4)) {
            break;
        }
    }
    return (a4 + 0x4);
}

int pdGunGetLatchedPort(void)
{
    register int t0;
    register int t4;

    t0 = FUN_0c2bd082();
    t4 = t0;
    if ((int)t0 > 0) {
        t4 = (*(int *)(((t0 << 2) + 0xC2FE89C)));
    }
    return t4;
}

int vmsfs_c_setcompletecallback(int a4)
{
    register int t0;

    t0 = 0xC8C21EC;
    for (;;) {
        (((struct o74_uint *)(t0))->v) = a4;
        t0 = (t0 + 0x80);
        if ((unsigned int)t0 >= (unsigned int)0xC8C25EC) {
            break;
        }
    }
    return 0x74;
}

int vmsfs_c_setprogresscallback(int a4)
{
    register int t0;

    t0 = 0xC8C21EC;
    for (;;) {
        (((struct o78_uint *)(t0))->v) = a4;
        t0 = (t0 + 0x80);
        if ((unsigned int)t0 >= (unsigned int)0xC8C25EC) {
            break;
        }
    }
    return 0x78;
}

int vmsfs_c_setcallbackparam(int a4)
{
    register int t0;

    t0 = 0xC8C21EC;
    for (;;) {
        (((struct o7C_uint *)(t0))->v) = a4;
        t0 = (t0 + 0x80);
        if ((unsigned int)t0 >= (unsigned int)0xC8C25EC) {
            break;
        }
    }
    return 0x7C;
}

void FUN_0c2c6062(void)
{
    if ((int)(*(int *)0xC303DE0) <= 0) {
        *(unsigned int *)0xC303DE0 = ((*(int *)0xC303DE0) + 0x1);
        memset(0xC8CE934, 0x0, 0x480);
    return;
    }
}

void FUN_0c2c6336(void)
{
    if ((int)(*(int *)0xC303E18) <= 0) {
        *(unsigned int *)0xC303E18 = ((*(int *)0xC303E18) + 0x1);
        memset(0xC8CEDB4, 0x0, 0xC00);
    return;
    }
}

void FUN_0c2c675a(void)
{
    if ((int)(*(int *)0xC303E4C) <= 0) {
        *(unsigned int *)0xC303E4C = ((*(int *)0xC303E4C) + 0x1);
        memset(0xC8CF9B4, 0x0, 0xC00);
    return;
    }
}

int FUN_0c2d5fa6(void)
{
    register int t0;

    t0 = FUN_0c2d5f96();
    if ((int)(unsigned char)t0 < (int)0xA) {
        return 0x1;
    }
    return 0x0;
}

int FUN_0c2e7790(void)
{
    register int t2;

    t2 = *(signed char *)0xC8D6529;
    *(unsigned char *)0xC8D6529 = ((*(signed char *)((0xC3021B1 + ((int)((unsigned char)(*(signed char *)0xC8D6456) & 0x70) >> 4)))) | (t2 & 0x81));
    return (t2 & 0x81);
}

int FUN_0c2e8a12(int a4)
{
    register int t0;

    t0 = FUN_0c2d66d4(a4);
    if ((signed char)t0 == 0) {
        return 0x0;
    }
    return 0x1;
}

int FUN_0c2ec430(int a4)
{
    register int t0;

    t0 = FUN_0c2d683c();
    *(unsigned int *)0xC8D67BC = t0;
    return (((((unsigned int)a4 > (unsigned int)t0)) ? 1 : 0) ^ 0x1);
}

int FUN_0c2ef3a0(void)
{
    register int t0;
    register int t1;

    t0 = FUN_0c2ef3bc();
    t1 = 0x0;
    if ((int)(unsigned short)t0 <= (int)0x4) {
        t1 = 0x1;
    }
    return t1;
}

int FUN_0c2f3bc8(void)
{
    *(unsigned char *)0xC8D6795 = ((*(signed char *)0xC8D6795) | 0x40);
    FUN_0c2ee56c();
    FUN_0c2ee63c();
    return FUN_0c2ec67a(0x8);
}

int FUN_0c2faaac(void)
{
    *(unsigned char *)0xC8E0308 = 0x8;
    (((struct o0_ushort *)0xC8D706C)->v) = 0x0;
    (((struct oA_uchar *)0xC8D706C)->v) = 0x0;
    (((struct o9_uchar *)0xC8D706C)->v) = 0x1;
    (((struct oB_uchar *)0xC8D706C)->v) = 0x0;
    return 0xC8D7075;
}

int FUN_0c2fb398(void)
{
    *(unsigned short *)0xC8D706C = 0x0;
    (((struct oC_uint *)0xC8E0948)->v) = 0x0;
    (((struct o1_uchar *)0xC8E0948)->v) = 0x8;
    (((struct o2_uchar *)0xC8E0948)->v) = 0x0;
    (((struct o0_uchar *)0xC8E0948)->v) = 0x8;
    return 0x0;
}

int FUN_0c2fb3b4(void)
{
    (((struct o0_uchar *)0xC8E0938)->v) = 0x5;
    (((struct o1_uchar *)0xC8E0938)->v) = 0x4;
    (((struct o2_uchar *)0xC8E0938)->v) = 0x5;
    (((struct oC_uint *)0xC8E0938)->v) = 0x7E;
    *(unsigned short *)0xC8D7058 = 0x0;
    return 0x5;
}

void FUN_0c177af0(int a4)
{
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;

    t1 = a4;
    t2 = 0x5;
    t3 = 0xC83D018;
    t4 = (*(int *)0xC83CFDC);
    for (;;) {
        t5 = *(int *)((t4 + 0x0));
        t4 = (t4 + 0x4);
        t2 = (t2 - 0x1);
        t6 = *(int *)((t3 + 0x0));
        t3 = (t3 + 0x4);
        *(unsigned int *)((t1 + 0x0)) = (t5 - t6);
        t1 = (t1 + 0x4);
        if (t2 == 0) {
            break;
        }
    }
}

int nlSetFatalErrorMode(int a4)
{
    register int t0;

    t0 = 0xC178920;
    if (a4 == 0) {
        t0 = 0xC178860;
    }
    return kmSetFatalErrorCallback(t0);
}

void nlPrintSetGarbagedTexture(void)
{
    (((struct o0_uint *)0xC868538)->v) = (((((((struct o24_int *)0xC868538)->v)) | ((((struct o14_int *)0xC868538)->v))) & 0xFF800000) | ((unsigned int)((unsigned int)((((struct o28_int *)0xC868538)->v)) >> 2) >> 1));
}

int nlClearMatrix(void)
{
    nlStoreMatrix(0x0);
    (((struct o8_uint *)0xC868774)->v) = ((((struct o4_int *)0xC868774)->v));
    (((struct o0_ushort *)0xC868774)->v) = 0x0;
    return FUN_0c17b1a0(0x0);
}

int nlIntrSetVectorFunction(int a4, int a5)
{
    *(unsigned int *)(((((unsigned int)((unsigned int)(*(short *)((((a4 - 5) << 1) + 0xC205E7C))) >> 2) >> 1) + (((int)_builtin_get_vbr()) + 0x1C0)) + 0x0)) = a5;
    return 0x1;
}

int FUN_0c17ff1e(void)
{
    register int t0;

    t0 = nlsndG2Read(0xA0800098);
    if (t0 != 0) {
        return 0x1;
    }
    return 0x0;
}

int FUN_0c185d50(int a4)
{
    int stk[1];

    *(unsigned char *)((((int)stk + 0) + 0x0)) = ((int)(0xFF00 & (unsigned short)a4) >> 8);
    *(unsigned char *)((((int)stk + 0) + 0x1)) = (unsigned short)a4;
    return (*(short *)(((int)stk + 0)));
}

int FUN_0c185d6a(int a4)
{
    int stk[1];

    *(unsigned char *)((((int)stk + 0) + 0x0)) = ((int)(0xFF00 & (unsigned short)a4) >> 8);
    *(unsigned char *)((((int)stk + 0) + 0x1)) = (unsigned short)a4;
    return (*(short *)(((int)stk + 0)));
}

int FUN_0c18e0f2(int a4)
{
    if (((*(int *)((a4 + 0x8))) & 0x3) == (((*(int *)((a4 + 0x4))) + 0x1) & 0x3)) {
        return 0x0;
    }
    return 0x1;
}

int FUN_0c18e9a0(int a4)
{
    register int t0;

    t0 = FUN_0c197d2e(a4);
    if (t0 != 0) {
        return 0xFFFFFFFF;
    }
    return 0x0;
}

int FUN_0c191af2(int a4)
{
    register int t0;

    t0 = FUN_0c1920f8(a4);
    if (t0 != 0) {
        return 0xFFFFFFFF;
    }
    return 0x0;
}

int FUN_0c193be4(void)
{
    int stk[1];

    *(unsigned short *)(((int)stk + 0)) = 0x0;
    return (FUN_0c184000(0x4106, ((int)stk + 0), ((int)stk + 0)));
}

int FUN_0c193e50(int a4, int a5)
{
    int stk[2];

    *(unsigned short *)(((int)stk + 4)) = a4;
    *(unsigned short *)(((int)stk + 0)) = a5;
    FUN_0c193de4((*(short *)(((int)stk + 0))), (*(short *)(((int)stk + 4))));
    return 0x0;
}

int FUN_0c1948a0(int a4)
{
    int stk[1];

    *(unsigned char *)((((int)stk + 0) + 0x0)) = ((int)(0xFF00 & (unsigned short)a4) >> 8);
    *(unsigned char *)((((int)stk + 0) + 0x1)) = (unsigned short)a4;
    return (*(short *)(((int)stk + 0)));
}

int nlObjPut_vtxcolbridge(void)
{
    register int t0;

    t0 = *(int *)0xC2A6230;
    if (t0 != 0) {
        return ((int (*)(void))(t0))();
    }
    return ((int (*)(void))(0xC19709A))();
}

int FUN_0c197e1c(int a4, int a5)
{
    FUN_0c18e08e(0xC8A73E0, a4, a5);
    return 0x0;
}

int FUN_0c19acca(int a4, int a5)
{
    register int t0;

    t0 = *(int *)0xC8A73C0;
    (((struct oD0_uint *)(((a4 * 0x174) + t0)))->v) = 0x0;
    (((struct o172_uchar *)(((a4 * 0x174) + t0)))->v) = a5;
    return 0x0;
}

int FUN_0c19c058(int a4)
{
    register int t1;

    t1 = *(short *)0xC8A97C4;
    if (((*(signed char *)((a4 + 0xDB))) & 128) != 0) {
        return (unsigned short)t1;
    }
    return ((unsigned short)t1 - (*(int *)((a4 + 0x8))));
}

int FUN_0c19dbe4(int a4, int a5)
{
    if ((short)a5 == 0) {
        *(unsigned short *)((a4 + 0x0)) = ((*(short *)((a4 + 0x0))) | 0x80);
    } else {
        *(unsigned short *)((a4 + 0x0)) = ((*(short *)((a4 + 0x0))) & 0xFFFFFF7F);
    }
    return 0x0;
}

int FUN_0c19ecba(int a4)
{
    register int t2;

    (((struct o38_uchar *)(a4))->v) = 0x1;
    *(unsigned char *)(((a4 + 0x38) + 0x2)) = ((*(signed char *)(((a4 + 0x38) + 0x2))) | 0x10);
    *(unsigned char *)((a4 + 0x2)) = ((*(signed char *)((a4 + 0x2))) | 0x10);
    t2 = *(signed char *)(((a4 + 0x38) + 0x4));
    *(unsigned char *)(((a4 + 0x38) + 0x3)) = t2;
    return t2;
}

int FUN_0c19f6ca(int a4)
{
    register int t0;

    t0 = *(int *)((a4 + 0x30));
    FUN_0c19fad2(((((struct o98_int *)(t0))->v)));
    (((struct o98_uint *)(t0))->v) = 0x0;
    return 0x98;
}

int FUN_0c1a0e5e(int a4, int a5)
{
    FUN_0c197e1c(a5, (*(int *)0xC8B8530));
    return 0x0;
}

int _pow5(int a4, int a5)
{
    return FUN_0c187a88(a5, (((a4 << 2) << 1) + 0xC20AD58), 0x8);
}

int gdFsGetFileFad(int a4, int a5)
{
    if (a4 != 0) {
        if (((((struct o4C_short *)(a4))->v)) == 0) {
            return 0x0;
        }
        *(unsigned int *)((a5 + 0x0)) = (*(int *)((a4 + 0xC)));
        return 0x1;
    }
    return 0x0;
}

int FUN_0c2b2c08(int a4)
{
    register int t0;

    t0 = vmsfs_c_getstate(a4);
    if (t0 != 0) {
        return 0xFFFFFFFF;
    }
    return 0x0;
}

int kmSetWaitVsyncCount(int a4)
{
    register int t2;

    t2 = a4;
    if ((int)a4 <= 0) {
        (((struct o38_uint *)0xC8BEF9C)->v) = ((-a4) + 0x1);
        t2 = (-a4);
    }
    (((struct o0_uint *)0xC8BEF9C)->v) = (t2 - 1);
    return 0x0;
}

int vmsfs_c_settime(int a4, int a5)
{
    return FUN_0c187a88(((((((a4 << 2) << 2) << 2) << 1) + 0xC8C21EC) + 0x6C), a5, 0x8);
}

int direntry_dirty(int a4, int a5)
{
    *(unsigned char *)(((((int)a5 >> 4) + (((a4 * 0x148) + 0xC8C4604) + 0x48)) + 0x0)) = 0x1;
    return (((a4 * 0x148) + 0xC8C4604) + 0x48);
}

int FUN_0c2c306c(void)
{
    register int t0;

    t0 = memset(0xC8CAB04, 0x0, 0x100);
    (((struct o0_uint *)0xC303D8C)->v) = 0x0;
    (((struct o4_uint *)0xC303D8C)->v) = 0x0;
    return t0;
}

int FUN_0c2c3086(void)
{
    register int t0;

    t0 = memset(0xC8CAB04, 0x0, 0x100);
    (((struct o0_uint *)0xC303D8C)->v) = 0x0;
    (((struct o4_uint *)0xC303D8C)->v) = 0x0;
    return t0;
}

int FUN_0c2cbc44(int a4)
{
    register int t5;

    *(unsigned int *)((a4 + 0x4)) = ((int)((unsigned int)(*(int *)((a4 + 0x0))) % (unsigned int)(*(int *)((a4 + 0xC)))));
    t5 = (int)((unsigned int)(*(int *)((a4 + 0x0))) / (unsigned int)(*(int *)((a4 + 0xC))));
    *(unsigned int *)((a4 + 0x8)) = t5;
    return t5;
}

int kmyInitializeTA(int a4, int a5, int a6, int a7)
{
    register int t0;

    *(unsigned int *)((a4 + 0x0)) = 0xC8D5F90;
    *(unsigned int *)0xC8D6354 = 0xC2CBCC0;
    t0 = *(int *)0xC8D5F80;
    return ((int (*)(int, int, int, int))(t0))(0xC8D5F6C, 0xC8D6348, 0xC8D5F90, a7);
}

int FUN_0c2d1800(void)
{
    register int t0;

    t0 = *(int *)0xC8D25F0;
    (((struct o24_uchar *)(t0))->v) = ((*(signed char *)(((t0 + 0x24) + 0x0))) & 0xDF);
    FUN_0c2d4ad2();
    return FUN_0c2d63ba();
}

int FUN_0c2d4986(Stk4 s)
{
    return (FUN_0c2d49c0(((short)(s.w[0] >> 0)), ((short)(s.w[1] >> 0))));
}

int FUN_0c2d86c8(void)
{
    if ((*(int *)0xC8D311C) == 0) {
        *(unsigned int *)0xC8D311C = ((*(int *)0xC8D311C) + 0x1);
    }
    (((struct o0_uchar *)0xC8D311A)->v) = 0x0;
    return FUN_0c2b9b3e(0xC8D3118);
}

int FUN_0c2d876e(void)
{
    register int t0;

    t0 = *(int *)0xC8BFFE8;
    if (((*(signed char *)((((*(int *)((t0 + 0x8))) + 0x30) + 0x0))) & 2) == 0) {
        return FUN_0c2d87aa((*(int *)0xC8D3A48));
    }
    return FUN_0c2d7f20(t0);
}

int FUN_0c2ebf6c(void)
{
    register int t0;

    t0 = *(signed char *)0xC8D67BA;
    if (((unsigned char)t0 & 4) == 0) {
        *(unsigned char *)0xC8D67BA = ((*(signed char *)0xC8D67BA) | 0x4);
        return FUN_0c2ec776(0x7);
    }
    return (unsigned char)t0;
}

int FUN_0c2ee516(void)
{
    (((struct o0_uchar *)0xC8D7162)->v) = (*(signed char *)0xC8D6443);
    (((struct o1_uchar *)0xC8D7162)->v) = (*(signed char *)0xC8D6527);
    (((struct o2_uchar *)0xC8D7162)->v) = 0x0;
    return FUN_0c2ee4ba(0xC8D7162);
}

int syG2DmaResume(int a4)
{
    *(unsigned int *)(((((((*(int *)((a4 + 0x0))) << 2) << 2) << 1) + (*(int *)(((*(int *)0xC304080) + 0x0)))) + 0x1C)) = 0x0;
    return 0x0;
}

int FUN_0c2f00e4(int a4)
{
    *(unsigned int *)(((((((*(int *)((a4 + 0x0))) << 2) << 2) << 1) + (*(int *)(((*(int *)0xC304080) + 0x0)))) + 0x1C)) = 0x1;
    return 0x0;
}

int FUN_0c2f4f96(void)
{
    (((struct o1_uchar *)0xC8DFF90)->v) = 0x7F;
    (((struct o0_uchar *)0xC8DFF90)->v) = 0x6;
    (((struct o5_uchar *)0xC8DFF90)->v) = 0x1;
    (((struct o4_uchar *)0xC8DFF90)->v) = 0x0;
    return 0xC8DFF90;
}

int FUN_0c2f897c(int a4)
{
    int stk[1];

    *(unsigned char *)(((int)stk + 0)) = a4;
    FUN_0c2e7f3c();
    FUN_0c2e7248((*(signed char *)(((int)stk + 0))), 0x0);
    return FUN_0c2e8268();
}

int FUN_0c2fc6c8(void)
{
    FUN_0c2fc6e2();
    FUN_0c2e7f3c();
    FUN_0c2e7248(0x3, 0x0);
    return FUN_0c2e8268();
}

void nlVtxBufScanInit(void)
{
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t1 = 0x5;
    t2 = 0xC83D018;
    t3 = (*(int *)0xC83CFDC);
    for (;;) {
        t4 = *(int *)((t3 + 0x0));
        t3 = (t3 + 0x4);
        t1 = (t1 - 1);
        *(unsigned int *)((t2 + 0x0)) = t4;
        t2 = (t2 + 0x4);
        if (t1 == 0) {
            break;
        }
    }
}

int nlSysBeginPass(void)
{
    kmBeginPass(0xC8A2E90);
    *(unsigned int *)0xC83CFDC = (*(int *)0xC8A2E90);
    return 0x0;
}

int FUN_0c0df2b0(float f4)
{
    if (f4 == 0.0f) {
        return 0x0;
    }
    return FUN_0c0df210((1.0f / f4));
}

void nl_requset_PixelClipping(float f4, float f5, float f6, float f7)
{
    *(unsigned int *)0xC2A6150 = 0x1;
    (((struct o0_float *)0xC868A40)->v) = f4;
    (((struct o4_float *)0xC868A40)->v) = f5;
    (((struct o8_float *)0xC868A40)->v) = f6;
    (((struct oC_float *)0xC868A40)->v) = f7;
}

int nlMakeModelViewProjectMatrix_objput(void)
{
    nlPushMatrix(0xC868A50);
    nlMultiMatrix((*(int *)0xC868794));
    return nlMultiPushedMatrix();
}

int FUN_0c17f440(float f4, float f5)
{
    (((struct o0_float *)0xC86CBE0)->v) = (1.0f / f4);
    (((struct o4_float *)0xC86CBE0)->v) = (1.0f / f5);
    (((struct o8_float *)0xC86CBE0)->v) = f4;
    (((struct oC_float *)0xC86CBE0)->v) = f5;
    return 0x4;
}

int FUN_0c184d30(int a4)
{
    int stk[1];

    *(unsigned short *)(((int)stk + 0)) = a4;
    return (FUN_0c184000(0x4113, ((int)stk + 0), 0x0));
}

int FUN_0c184d48(int a4)
{
    int stk[1];

    *(unsigned short *)(((int)stk + 0)) = a4;
    return (FUN_0c184000(0x4115, ((int)stk + 0), 0x0));
}

int FUN_0c184c48(int a4)
{
    return (FUN_0c1842e8(0x2, 0x0, a4));
}

void FUN_0c18589e(int a4, int a5)
{
    register int t0;
    register int t1;

    if ((int)a5 > 0) {
        t0 = 0x0;
        t1 = a4;
        for (;;) {
            t0 = (t0 + 0x1);
            *(unsigned char *)((t1 + 0x0)) = 0x0;
            t1 = (t1 + 0x1);
            if ((int)t0 >= (int)a5) {
                break;
            }
        }
    }
}

int FUN_0c187b60(int a4, int a5, int a6, int a7)
{
    int stk[3];

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a6;
    *(unsigned int *)(((int)stk + 8)) = a7;
    return (FUN_0c187b78(0x1, a5, ((int)stk + 0)));
}

int FUN_0c18ed16(void)
{
    register int t0;

    t0 = 0xC8A8FDC;
    for (;;) {
        *(unsigned short *)((t0 + 0xE)) = 0x0;
        t0 = (t0 + 0x1C);
        if ((unsigned int)t0 >= (unsigned int)0xC8A935C) {
            break;
        }
    }
    return 0x0;
}

void FUN_0c190c4e(int a4)
{
    register int t0;

    t0 = (0x124 + a4);
    for (;;) {
        *(unsigned short *)((t0 + 0x0)) = 0x0;
        t0 = (t0 + 0x2);
        if ((unsigned int)t0 >= (unsigned int)((0x124 + a4) + 0x8)) {
            break;
        }
    }
}

int FUN_0c19114c(int a4)
{
    register int t0;
    register int t1;

    if (a4 != 0) {
        t0 = *(signed char *)((a4 + 0x18));
        t1 = (unsigned char)t0;
        if ((unsigned char)t0 == 1) {
            (((struct o18_uchar *)(a4))->v) = 0x0;
            t1 = 0x18;
        }
        t0 = t1;
    }
    return t0;
}

int FUN_0c191f2c(void)
{
    register int t0;

    t0 = _builtin_get_imask();
    _builtin_set_imask(0xF);
    return t0;
}

int FUN_0c1947b8(int a4)
{
    int stk[1];

    *(unsigned short *)(((int)stk + 0)) = a4;
    return (FUN_0c184000(0x4113, ((int)stk + 0), 0x0));
}

int FUN_0c194962(int a4)
{
    int stk[1];

    *(unsigned short *)(((int)stk + 0)) = a4;
    return (FUN_0c184000(0x4113, ((int)stk + 0), 0x0));
}

int FUN_0c197bfe(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t0;
    register int t1;
    register int t2;

    *(unsigned short *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 8)) = a5;
    *(unsigned short *)(((int)stk + 0)) = a6;
    t0 = *(short *)(((int)stk + 0));
    t1 = *(short *)(((((int)stk + 0) + 0x4) + 0x0));
    t2 = *(int *)(((int)stk + 8));
    return ((int (*)(int, int, int, int))(t2))(t0, t1, a6, a7);
}

int FUN_0c19dbaa(int a4, int a5)
{
    register int t2;

    if (a5 != 0) {
        t2 = ((*(short *)((a4 + 0x4))) | 0x20);
    } else {
        t2 = ((*(short *)((a4 + 0x4))) & 0xFFFFFFDF);
    }
    *(unsigned short *)((a4 + 0x4)) = t2;
    *(unsigned int *)((a4 + 0x10)) = a5;
    return 0x0;
}

int FUN_0c19ecd4(int a4)
{
    (((struct o38_uchar *)(a4))->v) = 0x2;
    *(unsigned char *)(((a4 + 0x38) + 0x2)) = ((*(signed char *)(((a4 + 0x38) + 0x2))) | 0x20);
    *(unsigned char *)((a4 + 0x2)) = ((*(signed char *)((a4 + 0x2))) | 0x20);
    return 0x0;
}

void FUN_0c1a2120(int a4, int a5, int a6)
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

void FUN_0c2aeb3c(int a4)
{
    *(unsigned int *)((a4 + 0x0)) = (_builtin_get_imask());
    _builtin_set_imask(0xF);
}

int FUN_0c0f2044(void)
{
    register int t0;
    register int t1;

    t0 = *(int *)0xC3036F0;
    if (t0 != 0) {
        t1 = (((struct o58_int *)(t0))->v);
        return ((int (*)(void))(t1))();
    }
    return 0x0;
}

int FUN_0c2c0ffe(int a4)
{
    return FUN_0c10121c(a4, (*(int *)(((*(int *)((((a4 * 0x148) + 0xC8C4604) + 0x1C))) + 0x8))), (*(int *)((((a4 * 0x148) + 0xC8C4604) + 0x20))));
}

int FUN_0c2c1016(int a4)
{
    return FUN_0c2bd8b4(a4, (*(int *)(((*(int *)((((a4 * 0x148) + 0xC8C4604) + 0x1C))) + 0x8))), (*(int *)((((a4 * 0x148) + 0xC8C4604) + 0x20))));
}

int bufferEquals(int a4, int a5, int a6, int a7)
{
    if ((int)a6 <= 0) {
        return 0x1;
    }
    return ((int (*)(int, int, int, int))(0xC2C2118))(a4, a5, (a6 - 1), a7);
}

int kmyRegisterPALEXTCallback(int a4)
{
    if (a4 != 0) {
        *(unsigned int *)0xC8D0690 = a4;
        return 0x0;
    }
    *(unsigned int *)0xC8D0690 = 0xC2CAA80;
    return 0xEEEE;
}
