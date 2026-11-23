/* Straight-line functions with calls and guards (batch gen_ak): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_short { short v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_float { char p[0x10]; float v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uchar { char p[0x10]; unsigned char v; };
struct o10B4_int { char p[0x10B4]; int v; };
struct o10C4_int { char p[0x10C4]; int v; };
struct o10DC_int { char p[0x10DC]; int v; };
struct o13_uchar { char p[0x13]; unsigned char v; };
struct o13A_short { char p[0x13A]; short v; };
struct o13A_ushort { char p[0x13A]; unsigned short v; };
struct o14_float { char p[0x14]; float v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o18_int { char p[0x18]; int v; };
struct o18_uchar { char p[0x18]; unsigned char v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o19_uchar { char p[0x19]; unsigned char v; };
struct o1B_uchar { char p[0x1B]; unsigned char v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1E_uchar { char p[0x1E]; unsigned char v; };
struct o1F_uchar { char p[0x1F]; unsigned char v; };
struct o20_int { char p[0x20]; int v; };
struct o20_uchar { char p[0x20]; unsigned char v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o23_uchar { char p[0x23]; unsigned char v; };
struct o24_float { char p[0x24]; float v; };
struct o24_uchar { char p[0x24]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_int { char p[0x2C]; int v; };
struct o2C_uint { char p[0x2C]; unsigned int v; };
struct o2F_uchar { char p[0x2F]; unsigned char v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o30_uchar { char p[0x30]; unsigned char v; };
struct o32_uchar { char p[0x32]; unsigned char v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o3F_uchar { char p[0x3F]; unsigned char v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_short { char p[0x4]; short v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_uchar { char p[0x40]; unsigned char v; };
struct o4C_int { char p[0x4C]; int v; };
struct o50_int { char p[0x50]; int v; };
struct o50_uchar { char p[0x50]; unsigned char v; };
struct o50_uint { char p[0x50]; unsigned int v; };
struct o500_short { char p[0x500]; short v; };
struct o500_ushort { char p[0x500]; unsigned short v; };
struct o502_ushort { char p[0x502]; unsigned short v; };
struct o54_int { char p[0x54]; int v; };
struct o6_uchar { char p[0x6]; unsigned char v; };
struct o61_uchar { char p[0x61]; unsigned char v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o84_short { char p[0x84]; short v; };
struct o84_ushort { char p[0x84]; unsigned short v; };
struct o86_short { char p[0x86]; short v; };
struct o86_ushort { char p[0x86]; unsigned short v; };
struct o88_int { char p[0x88]; int v; };
struct o88_short { char p[0x88]; short v; };
struct o88_ushort { char p[0x88]; unsigned short v; };
struct o8A_short { char p[0x8A]; short v; };
struct o8A_ushort { char p[0x8A]; unsigned short v; };
struct oB0_short { char p[0xB0]; short v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC_short { char p[0xC]; short v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oC_ushort { char p[0xC]; unsigned short v; };
struct oD_uchar { char p[0xD]; unsigned char v; };
int ADXCRS_Lock(void);
int ADXCRS_Unlock(void);
int nl_set_cnv_proj_pers(void);
int FUN_0c17ffea(int, int);
int FUN_0c180a6c(int, int, int);
int FUN_0c1828fe(int);
extern int FUN_0c182a34();
int FUN_0c187990(int);
int FUN_0c187a88(int, int, int);
int FUN_0c18d914(int, int, int, int, int, int, int);
int FUN_0c18dab4(int);
int FUN_0c18dcfa(int, int);
int FUN_0c18df08(int);
int FUN_0c18dfd0(void);
int FUN_0c18dfd6(void);
int FUN_0c18dfe6(void);
int FUN_0c18ea14(int);
int FUN_0c18fd60(int);
int FUN_0c18fd88(int);
int FUN_0c1901e4(int);
int FUN_0c1904d8(int);
int FUN_0c191e44(void);
int FUN_0c191e7c(void);
int FUN_0c19adb4(int, int, int, int);
int FUN_0c19eecc(int);
int FUN_0c1a027c(int);
int FUN_0c1a02a6(int);
int FUN_0c1a21bc(int, int);
int FUN_0c1a2a68(int, int, int);
int FUN_0c1a3af0(int, int);
extern int FUN_0c2b16a0();
int kmyEnableASyncCopy(int);
int FUN_0c2b9b0c(int);
int FUN_0c2c389e(int);
int FUN_0c2c38b6(int);
int FUN_0c2c38da(int);
int FUN_0c2c6304(void);
int FUN_0c2c631c(int, int);
int FUN_0c2d2c4e(void);
int FUN_0c2d673c(void);
int FUN_0c2d6c38(int, int, int, int, int, int, int, int, int);
int FUN_0c2d754a(int);
int FUN_0c2d7806(int);
int FUN_0c2d8474(int);
int FUN_0c2d8590(int, int);
int FUN_0c2d868a(int, int);
int FUN_0c2d8d9e(int);
int FUN_0c2d9ede(int);
int FUN_0c2d9ef2(int);
int FUN_0c2d9f1e(int);
int FUN_0c2d9f32(int);
int FUN_0c2d9f6a(int);
int FUN_0c2d9f7e(int);
int FUN_0c2d9fb8(int);
int FUN_0c2dc160(int);
int FUN_0c2dc178(int);
int FUN_0c2dc1ae(int, ...);
int FUN_0c2e6404(void);
int FUN_0c2e7d9a(void);
int FUN_0c2e89f4(int);
int FUN_0c2e8afc(int);
int FUN_0c2ec410(int, int);
int FUN_0c2ec430(int);
int FUN_0c2ee708(void);
int FUN_0c2eeb4a(int);
int FUN_0c2eec74(int, int, int);
int FUN_0c2f211a(int, int);
int FUN_0c2f21c2(int, int);
int FUN_0c2f23d4(int, int);
int FUN_0c2f6bcc(void);
int FUN_0c2f8c6c(void);
int FUN_0c2f8c78(void);
int FUN_0c2fa4c4(int, int);
int FUN_0c2fa4cc(int, int, int);
int FUN_0c2fa4ec(void);
int FUN_0c2fbc3e(void);
int FUN_0c2fbc4a(int);
int FUN_0c2fe108(int, int);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int kdSetBlockWrite(int, int, int, int, int, int, int);
int kmCreateTextureSurface(int, int, int, int);
int kmLoadTextureRom(int, int);
int kmQueryFinishLastTextureDMA(void);
int kmiWriteRegister(int, int);
int kmyConnectInterrupt(int, int, int);
int kmyResetRenderer(void);
int kmyZeroMemory(int, int);
int kmyiCheckNativeHandle(int);
int memset(int, int, int);
int mpdrv_optimize(int);
int mpdrv_swapmode(int);
int mpdrv_timeout(int);
int mwRnaGetTransSw(int);
int mwlRnaAddFlshPos(int);
int mwlRnaAddWrPos(int);
int nlMakeProjConvMat(int);
int nlMultiMatrix(int);
int nlSetPixelClipping(float, float, float, float);
int nlsndG2Read(int);
int nlsndG2Write(int, int);
int nlsndG2WriteN(int, int, int);
int nlsnd_PL_WaitAica1(void);
int nlsnd_PL_WaitAica2andGo(void);
int nlsnd_PL_WaitRequest(void);
int strlen(int);
int syMmuAddEntry(int, int, int);
int thunk_FUN_0c2c5924(int, int, int);
int thunk_FUN_0c2d3774(void);
int vib_port_has_vibration(int);
int vmsfs_c_progress(int, int, int, int);
int vmsio_block_read(int, int, int);
int vmsio_get_media_info(int, int);
int FUN_0c183480(int a4, int a5, int a6, int a7);
void FUN_0c2d81d6(int a4);
int FUN_0c2f22f0(int a4);
int mult(int a4, int a5, int a6);
int mwRnaAdjustBuf(int a4, int a5, int a6, int a7);
float FUN_0c198314(int a4);
int FUN_0c19c948(int a4);
int pdVibSetStopTime(int a4, int a5, int a6, int a7);
int vmsfs_read_retry(int a4, int a5, int a6);
int ADXAMP_Create(int a4, int a5, int a6);
int SJRBF_UngetChunk(int a4, int a5, int a6, int a7);
int FUN_0c2e380e(void);
int FUN_0c2f1fc0(int a4, int a5, int a6);
int FUN_0c2f6b18(void);
int nlLoadTextureMem(int a4, int a5, int a6, int a7);
int FUN_0c17ff38(int a4, int a5, int a6, int a7);
int FUN_0c19f3b0(int a4, int a5, int a6);
int kmyInitDMADevice(void);
int FUN_0c2d7498(void);
int kmyStartRenderTexture(int a4, int a5, int a6);
int syIntAdrChk_putchar(int a4, int a5);
int nlFrustum_L(float f4, float f5, float f6, float f7, float f8, float f9);
void FUN_0c18d320(int a4, int a5);
int FUN_0c19c774(int a4, int a5, int a6);
int vmsfs_mediainfo_retry(int a4, int a5);
int FUN_0c2d8824(int a4);
int mpdrv_check_port(int a4);
int FUN_0c2eafb4(int a4, int a5);
int FUN_0c2f58e0(void);
int FUN_0c2fde34(void);
int FUN_0c180512(int a4, int a5);
int FUN_0c1a02cc(int a4, int a5, int a6);
int sySqInit(void);
int FUN_0c2ef634(void);
int FUN_0c2f6c38(int a4, int a5, int a6);
int FUN_0c2f6d04(void);
int FUN_0c176e50(int a4);
int nlSetWindowSize(float f4, float f5, float f6, float f7);
int FUN_0c182a58(int a4, int a5, int a6, int a7);
int FUN_0c18fdb0(void);
int FUN_0c2cef80(int a4, int a5);
int FUN_0c19a91c(int a4);
int FUN_0c2b477a(int a4, int a5, int a6);
int FUN_0c2d7f20(int a4);
int kdSetDriverMode(int a4, int a5);

int FUN_0c183480(int a4, int a5, int a6, int a7)
{
    int stk[5];
    register int t21;
    register int t2;
    register int t3;
    register int t4;
    register int t7;
    register int t18;

    *(unsigned int *)(((int)stk + 0)) = a6;
    t21 = 0x0;
    if ((*(signed char *)0xC874FB8) != 0) {
        *(unsigned short *)(((int)stk + 4)) = (_builtin_get_imask());
        _builtin_set_imask(0xF);
        t2 = a5;
        t3 = a7;
        t4 = a6;
        for (;;) {
            if (((unsigned int)(((((struct o0_int *)0xC8A6F24)->v)) - ((((struct o20_int *)0xC8A6F24)->v))) > (unsigned int)0x0) && ((int)t4 > 0)) {
                t7 = (((struct o18_int *)0xC8A6F24)->v);
                (((struct o18_uint *)0xC8A6F24)->v) = (t7 + 0x1);
                *(unsigned char *)((t2 + 0x0)) = (*(signed char *)((((t7 + 0x1) - 1) + 0x0)));
                t2 = (t2 + 0x1);
                (((struct o20_uint *)0xC8A6F24)->v) = (((((struct o20_int *)0xC8A6F24)->v)) + 0x1);
                t3 = ((((struct o14_int *)0xC8A6F24)->v));
                t4 = (t4 - 1);
                if ((unsigned int)((((struct o18_int *)0xC8A6F24)->v)) >= (unsigned int)(((((struct o0_int *)0xC8A6F24)->v)) + t3)) {
                    (((struct o18_uint *)0xC8A6F24)->v) = t3;
                }
                continue;
            }
            break;
        }
        if ((-((((((*(signed char *)0xC8A6F57) & 64) == 0)) ? 1 : 0) - 1)) != 1) {
            for (;;) {
            }
        }
        (((struct o2F_uchar *)0xC8A6F24)->v) = ((*(signed char *)0xC8A6F53) | 0x40);
        t18 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC874F8C) + 0x8)))))(0xC8A6F50, t2, 0xC8A6F44, t3, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
        (((struct o2C_uint *)0xC8A6F24)->v) = 0x0;
        _builtin_set_imask(((unsigned int)((((*(short *)(((int)stk + 4))) & 0xF) << 2) << 2) >> 4));
        t21 = ((*(int *)(((int)stk + 0))) - t4);
    }
    return t21;
}

void FUN_0c2d81d6(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;

    if ((*(int *)((a4 + 0x8))) != 0) {
        (((struct o61_uchar *)((*(int *)((a4 + 0xC)))))->v) = 0x0;
        (((struct o3F_uchar *)((*(int *)((a4 + 0xC)))))->v) = 0x0;
        *(unsigned char *)((((((struct o4C_int *)((*(int *)((a4 + 0x8)))))->v)) + 0x0)) = 0x0;
        *(unsigned char *)((((((struct o4C_int *)((*(int *)((a4 + 0x8)))))->v)) + 0x6)) = 0x0;
        t5 = 0x8;
        t6 = 0x0;
        for (;;) {
            *(unsigned short *)(((((*(int *)((a4 + 0xC))) + 0x78) + (short)((short)t6 * (short)0x8C)) + 0x2)) = 0x0;
            *(volatile int *)((a4 + 0xC));
            FUN_0c1a21bc(0x0, t5);
            t6 = (t0 + 0x1);
            t5 = t1;
            if ((int)t6 >= (int)t1) {
                break;
            }
        }
        (((struct o50_uchar *)((*(int *)((a4 + 0xC)))))->v) = t2;
        (((struct o40_uchar *)((*(int *)((a4 + 0xC)))))->v) = t2;
        *(unsigned char *)((((((struct o4C_int *)((*(int *)((a4 + 0x8)))))->v)) + 0x1)) = t2;
        *(unsigned char *)((((((struct o4C_int *)((*(int *)((a4 + 0x8)))))->v)) + 0x7)) = t2;
        t0 = t5;
        t1 = t2;
        for (;;) {
            *(unsigned short *)(((((*(int *)((a4 + 0xC))) + 0x4D8) + (short)((short)t1 * (short)0x8C)) + 0x2)) = t2;
            *(volatile int *)((a4 + 0xC));
            FUN_0c1a21bc(t2, t0);
            t1 = (t3 + 0x1);
            t0 = t4;
            if ((int)t1 >= (int)t4) {
                break;
            }
        }
        FUN_0c2d8d9e(((((struct o4C_int *)((*(int *)((a4 + 0x8)))))->v)));
    return;
    }
}

int FUN_0c2f22f0(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = 0x4;
    t1 = 0x4;
    for (;;) {
        if ((unsigned char)(*(signed char *)((0xC302CA0 + (unsigned char)t1))) == 0xFF) {
            break;
        }
        t2 = *(signed char *)((0xC302CA0 + (unsigned char)t1));
        t3 = t0;
        t0 = (t0 + 0x1);
        t1 = (t1 + 0x1);
        FUN_0c2fa4c4(t2, t3);
    }
    FUN_0c2fa4cc(0x5, 0x6, 0xC8E0026);
    t0 = FUN_0c2d673c();
    FUN_0c2fa4c4(t0, 0xB);
    t0 = FUN_0c2d673c();
    FUN_0c2e89f4(t0);
    FUN_0c2e8afc(a4);
    t0 = 0x0;
    t1 = 0xC;
    for (;;) {
        t2 = t1;
        t1 = (t1 + 0x1);
        FUN_0c2fa4c4(0xC2, t2);
        t2 = t1;
        t1 = (t1 + 0x1);
        FUN_0c2fa4c4(0x0, t2);
        t0 = (t0 + 0x1);
        if ((int)(unsigned char)t0 > (int)0xA) {
            break;
        }
    }
    t0 = 0x0;
    for (;;) {
        t1 = t0;
        t0 = (t0 + 0x1);
        FUN_0c2f23d4(t1, a4);
        if ((int)(unsigned char)t0 >= (int)0x4) {
            break;
        }
    }
    t0 = 0x0;
    t1 = 0x0;
    for (;;) {
        t2 = *(signed char *)((0xC302CA0 + (unsigned char)t0));
        t3 = t1;
        t1 = (t1 + 0x1);
        t0 = (t0 + 0x1);
        FUN_0c2fa4c4(t2, t3);
        if ((int)(unsigned short)t1 >= (int)0x4) {
            break;
        }
    }
    return FUN_0c2fa4ec();
}

int mult(int a4, int a5, int a6)
{
    int stk[6];
    register int t1;
    register int t15;
    register int t6;
    register int t7;
    register int t2;

    *(unsigned int *)(((int)stk + 4)) = a4;
    memset(a6, 0x0, 0x10);
    t1 = 0x7;
    for (;;) {
        t15 = (short)t1;
        if ((unsigned char)(*(signed char *)((a5 + (short)t1))) != 0) {
            memset((((int)stk + 0) + 0x8), 0x0, 0x10);
            t2 = 0x7;
            for (;;) {
                t6 = *(signed char *)(((short)t2 + (*(int *)(((int)stk + 4)))));
                t7 = *(signed char *)(((short)t1 + a5));
                *(unsigned short *)(((int)stk + 0)) = (unsigned char)(*(signed char *)(((((short)t1 + (short)t2) + (((int)stk + 0) + 0x8)) + 0x1)));
                *(unsigned short *)(((int)stk + 0)) = ((*(short *)(((int)stk + 0))) + ((unsigned short)(unsigned char)t6 * (unsigned short)(unsigned char)t7));
                FUN_0c1a3af0((((short)t1 + (short)t2) + (((int)stk + 0) + 0x8)), ((int)stk + 0));
                t2 = (t2 - 1);
                if ((int)(short)t2 < 0) {
                    break;
                }
            }
            if ((short)t1 == 7) {
                t15 = (FUN_0c187a88(((short)t1 + a6), ((short)t1 + (((int)stk + 0) + 0x8)), 0x9));
            } else {
                t15 = (FUN_0c1a2a68(((short)t1 + a6), ((short)t1 + (((int)stk + 0) + 0x8)), 0x9));
            }
        }
        t1 = (t1 - 1);
        if ((int)(short)t1 < 0) {
            break;
        }
    }
    return t15;
}

int mwRnaAdjustBuf(int a4, int a5, int a6, int a7)
{
    int stk[6];
    register int t3;
    register int t12;
    register int t13;
    register int t16;
    register int t18;
    register int t29;
    int t11;

    if (a4 == 0) {
        *(int *)((int)stk + 0) = 0xC2FFEE8;
        return (FUN_0c2dc1ae(0xC2FFEE8));
    }
    FUN_0c2dc160((((int)stk + 4) + 0x4));
    if ((unsigned char)(*(signed char *)((a4 + 0x5))) == 1) {
        t3 = mwRnaGetTransSw(a4);
        if (t3 == 1) {
            mwlRnaAddWrPos(a4);
        } else {
            mwlRnaAddFlshPos(a4);
        }
        *(unsigned char *)((a4 + 0x5)) = 0x0;
    }
    if (((*(int *)((a4 + 0x30))) != 0) && (t11 = *(int *)((a4 + 0x34)), (int)t11 > 0)) {
        t12 = *(int *)((a4 + 0x38));
        t13 = *(int *)((a4 + 0x30));
        *(unsigned int *)(((int)stk + 12)) = t12;
        t16 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))(((((struct o54_int *)((*(int *)((t12 + 0x0)))))->v))))(t12, t13, ((int)stk + 4), a7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
        if (((((struct o88_int *)(a4))->v)) == 2) {
            t18 = *(int *)((a4 + 0x28));
            (((struct o50_uint *)(a4))->v) = ((int)((int)((((((struct o50_int *)(a4))->v)) + t18) - (*(int *)(((int)stk + 4)))) % (int)t18));
        }
        t29 = *(int *)((a4 + 0x28));
        *(unsigned int *)((a4 + 0x2C)) = ((int)((int)(((*(int *)((a4 + 0x2C))) + t29) - (*(int *)(((int)stk + 4)))) % (int)t29));
        *(unsigned int *)((a4 + 0x30)) = (((*(int *)((a4 + 0x30))) + t16) - (*(int *)(((int)stk + 4))));
        *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) - t16);
    }
    return (FUN_0c2dc178((((int)stk + 4) + 0x4)));
}

float FUN_0c198314(int a4)
{
    int t19;

    register int R1;
    register int R2;
    register int R3;
    int R4;
    int R14;
    register float F0;
    register float F1;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    R4 = a4;
    v0_1 = FUN_0c18dab4(R4);
    v0_2 = FUN_0c18ea14(0x0);
    v0_0 = (v0_2);
    v0_3 = (0xC18DAB4);
    R14 = (v0_1);
    if ((v0_2 == 0)) goto L_C1983AE;
    v0_1 = FUN_0c18dab4((*(int *)((v0_0 + 0x8))));
    v0_2 = (0xC0000000);
    R4 = (0x80000000);
    v0_3 = (v0_1);
    v0_4 = ((0xE0000000 & R14));
    v0_5 = ((R14 & 0xC0000000));
    if (((v0_1 & 0x80000000) != 0)) goto L_C19834E;
    v0_3 = ((v0_3 & 0xFF000000));
    L_C198364:;
    if (((R14 & R4) != 0)) goto L_C198370;
    R4 = (0xFF000000);
    L_C1983AA:;
    R4 = ((R4 & R14));
    if ((R4 != v0_3)) goto L_C1983BC;
    t19 = *(int *)((v0_0 + 0x14));
    v0_0 = (R14 & t19);
    R14 = ((R14 & t19));
    R4 = v0_0;
    L_C1983BC:;
    v0_2 = ((FUN_0c18dab4(R4)));
    L_C1983C0:;
    return F0;
    L_C198370:;
    if ((v0_5 != R4)) goto L_C1983A4;
    R4 = (0xFFFF0000);
    goto L_C1983AA;
    L_C1983A4:;
    if ((v0_4 != v0_2)) goto L_C1983AE;
    R4 = (0xFFFFFF00);
    goto L_C1983AA;
    L_C1983AE:;
    v0_2 = (0x0);
    goto L_C1983C0;
    L_C19834E:;
    if ((v0_5 != R4)) goto L_C198358;
    v0_3 = ((v0_3 & 0xFFFF0000));
    goto L_C198364;
    L_C198358:;
    if ((v0_4 != v0_2)) goto L_C198362;
    v0_3 = ((v0_3 & 0xFFFFFF00));
    goto L_C198364;
    L_C198362:;
    v0_3 = (0x0);
    goto L_C198364;
}


int pdVibSetStopTime(int a4, int a5, int a6, int a7)
{
    int stk[11];
    register int t1;
    register int t23;
    register int t9;
    register int t2;
    register int t3;
    register int t4;
    register int t11;
    register int t12;
    register int t13;
    register int t20;

    *(unsigned int *)(((int)stk + 20)) = a4;
    *(unsigned int *)(((int)stk + 16)) = a5;
    *(unsigned int *)(((int)stk + 12)) = a6;
    t1 = vib_port_has_vibration((*(int *)(((int)stk + 20))));
    t23 = 0xFFFFFFFE;
    if (t1 == 0) {
    } else {
        *(unsigned int *)(((((int)stk + 12) + 0xC) + 0x10)) = 0x0;
        *(unsigned int *)(((((int)stk + 12) + 0xC) + 0xC)) = 0x0;
        *(unsigned int *)(((((int)stk + 12) + 0xC) + 0x8)) = 0x0;
        *(unsigned int *)(((((int)stk + 12) + 0xC) + 0x4)) = 0x0;
        *(unsigned int *)(((((int)stk + 12) + 0xC) + 0x0)) = 0x0;
        t9 = 0x0;
        if ((unsigned int)0x0 < (unsigned int)a7) {
            t2 = 0x0;
            t3 = 0x0;
            for (;;) {
                t4 = *(int *)(((int)stk + 16));
                t3 = (t3 + 0x1);
                *(unsigned int *)(((int)stk + 16)) = (t4 + 0x1);
                t2 = (t2 | ((int)0x1 << (int)(unsigned char)(*(signed char *)((((t4 + 0x1) - 1) + 0x0)))));
                if ((unsigned int)t3 >= (unsigned int)a7) {
                    break;
                }
            }
            t9 = t2;
        }
        *(unsigned char *)(((((int)stk + 12) + 0xC) + 0x0)) = ((unsigned int)(unsigned short)t9 >> 8);
        *(unsigned char *)((((((int)stk + 12) + 0xC) + 0x1) + 0x0)) = t9;
        if ((unsigned int)0x0 < (unsigned int)a7) {
            t11 = 0x0;
            t12 = (((((int)stk + 12) + 0xC) + 0x1) + 0x1);
            for (;;) {
                t13 = *(int *)(((int)stk + 12));
                t11 = (t11 + 0x1);
                *(unsigned int *)(((int)stk + 12)) = (t13 + 0x1);
                *(unsigned char *)((t12 + 0x0)) = (*(signed char *)((((t13 + 0x1) - 1) + 0x0)));
                t12 = (t12 + 0x1);
                if ((unsigned int)t11 >= (unsigned int)a7) {
                    break;
                }
            }
        }
        *(unsigned int *)(((int)stk + 12)) = ((unsigned int)(a7 + 0x5) >> 2);
        *(int *)((int)stk + 8) = ((unsigned int)(a7 + 0x5) >> 2);
        *(int *)((int)stk + 4) = (((int)stk + 12) + 0xC);
        *(int *)((int)stk + 0) = 0x0;
        t20 = kdSetBlockWrite((*(int *)(((int)stk + 20))), 0x100, 0x0, 0x0, 0x0, (((int)stk + 12) + 0xC), ((unsigned int)(a7 + 0x5) >> 2));
        t23 = 0x0;
        if ((int)t20 < 0) {
            t23 = 0xFFFFFFFF;
        }
    }
    return t23;
}

int vmsfs_read_retry(int a4, int a5, int a6)
{
    int t0;
    register int t1;
    int t2;
    register int t3;

    t1 = (*(int *)0xC8C21C8);
    for (;;) {
        t2 = vmsio_block_read(a4, a5, a6);
        if (t2 != 0) {
            if (((*(int *)0xC2FFC2C) != 0) && (t2 == 0xFFFFFF30)) {
                return 0xFFFFFF01;
            }
            *(unsigned int *)((((a4 * 0x148) + 0xC8C4604) + 0x34)) = ((*(int *)((((a4 * 0x148) + 0xC8C4604) + 0x34))) + 0x1);
            t3 = t1 == 0;
            t1 = (t1 - 1);
            if (t3 && (t0 = *(int *)0xC8C21C8, t0 != -1)) {
                break;
            }
            continue;
        }
        break;
    }
    t0 = *(int *)((((a4 * 0x148) + 0xC8C4604) + 0x30));
    t1 = *(int *)((((a4 * 0x148) + 0xC8C4604) + 0x34));
    *(unsigned int *)((((a4 * 0x148) + 0xC8C4604) + 0x30)) = (t0 + 0x1);
    vmsfs_c_progress(a4, (*(int *)(((((((a4 << 2) << 2) << 2) << 1) + 0xC8C21EC) + 0x8))), ((t0 + 0x1) - 1), t1);
    t0 = 0x0;
    if (t2 != 0) {
        t1 = 0xFFFFFF01;
        if (t2 != 0xFFFFFF01) {
            t1 = 0xFFFF0000;
        }
        t0 = t1;
    }
    return t0;
}

int ADXAMP_Create(int a4, int a5, int a6)
{
    register int t0;
    register int t11;
    register int t12;
    register float u21;
    register int t23;

    t0 = 0x0;
    for (;;) {
        if ((*(signed char *)(((((((t0 << 1) + t0) << 2) << 2) + 0xC8CA984) + 0x0))) != 0) {
            t0 = (t0 + 0x1);
            if ((int)t0 >= (int)0x8) {
                break;
            }
            continue;
        }
        break;
    }
    if (t0 == 8) {
        t23 = 0x0;
    } else {
        ADXCRS_Lock();
        *(unsigned char *)(((((((t0 << 1) + t0) << 2) << 2) + 0xC8CA984) + 0x2)) = a4;
        if ((int)a4 > 0) {
            t11 = 0x0;
            t12 = 0x0;
            for (;;) {
                t12 = (t12 + 0x1);
                *(unsigned int *)(((((((((t0 << 1) + t0) << 2) << 2) + 0xC8CA984) + 0x4) + t11) + 0x0)) = (*(int *)((t11 + a5)));
                *(unsigned int *)(((((((((t0 << 1) + t0) << 2) << 2) + 0xC8CA984) + 0xC) + t11) + 0x0)) = (*(int *)((t11 + a6)));
                *(unsigned int *)(((((((((t0 << 1) + t0) << 2) << 2) + 0xC8CA984) + 0x14) + t11) + 0x0)) = 0x0;
                t11 = (t11 + 0x4);
                if ((int)t12 >= (int)a4) {
                    break;
                }
            }
        }
        *(unsigned char *)(((((((t0 << 1) + t0) << 2) << 2) + 0xC8CA984) + 0x1)) = 0x0;
        *(unsigned int *)(((((((t0 << 1) + t0) << 2) << 2) + 0xC8CA984) + 0x2C)) = 0x0;
        *(unsigned int *)(((((((t0 << 1) + t0) << 2) << 2) + 0xC8CA984) + 0x1C)) = a4;
        *(unsigned int *)(((((((t0 << 1) + t0) << 2) << 2) + 0xC8CA984) + 0x20)) = 0xAC44;
        u21 = *(float *)0xC2C2AB0;
        (((struct o24_float *)((((((t0 << 1) + t0) << 2) << 2) + 0xC8CA984)))->v) = u21;
        (((struct o28_float *)((((((t0 << 1) + t0) << 2) << 2) + 0xC8CA984)))->v) = u21;
        *(unsigned char *)(((((((t0 << 1) + t0) << 2) << 2) + 0xC8CA984) + 0x0)) = 0x1;
        ADXCRS_Unlock();
        t23 = (((((t0 << 1) + t0) << 2) << 2) + 0xC8CA984);
    }
    return t23;
}

int SJRBF_UngetChunk(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = FUN_0c2c6304();
    if (a5 == 0) {
        t1 = *(int *)((a4 + 0x20));
        t2 = (int)((int)(((*(int *)((a4 + 0x14))) + t1) - (*(int *)((a6 + 0x4)))) % (int)t1);
        if (t2 == ((int)((int)((*(int *)((a6 + 0x0))) - (*(int *)((a4 + 0x1C)))) % (int)t1))) {
            *(unsigned int *)((a4 + 0x14)) = t2;
            *(unsigned int *)((a4 + 0x10)) = ((*(int *)((a4 + 0x10))) + (*(int *)((a6 + 0x4))));
        } else {
            if ((*(int *)((a4 + 0x28))) == 0) {
            } else {
                t1 = ((int (*)(int, int, int, int))((*(int *)((a4 + 0x28)))))((*(int *)((a4 + 0x2C))), 0xFFFFFFFD, a6, a7);
            }
        }
    } else {
        if (a5 == 1) {
            t1 = *(int *)((a4 + 0x20));
            t2 = (int)((int)(((*(int *)((a4 + 0x18))) + t1) - (*(int *)((a6 + 0x4)))) % (int)t1);
            if (t2 == ((int)((int)((*(int *)((a6 + 0x0))) - (*(int *)((a4 + 0x1C)))) % (int)t1))) {
                *(unsigned int *)((a4 + 0x18)) = t2;
                *(unsigned int *)((a4 + 0xC)) = ((*(int *)((a4 + 0xC))) + (*(int *)((a6 + 0x4))));
            } else {
                if ((*(int *)((a4 + 0x28))) != 0) {
                    t1 = ((int (*)(int, int, int, int))((*(int *)((a4 + 0x28)))))((*(int *)((a4 + 0x2C))), 0xFFFFFFFD, a6, a7);
                }
            }
        } else {
            *(unsigned int *)((a6 + 0x4)) = 0x0;
            *(unsigned int *)((a6 + 0x0)) = 0x0;
            if ((*(int *)((a4 + 0x28))) != 0) {
                t1 = ((int (*)(int, int, int, int))((*(int *)((a4 + 0x28)))))((*(int *)((a4 + 0x2C))), 0xFFFFFFFD, a6, a7);
            }
        }
    }
    return FUN_0c2c631c(a4, t0);
}

int FUN_0c2e380e(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    (((struct o0_uchar *)0xC8D6441)->v) = 0x0;
    t0 = thunk_FUN_0c2d3774();
    if ((signed char)t0 == 0) {
        t1 = FUN_0c2ec430((*(int *)0xC8D6614));
        if ((signed char)t1 == 0) {
            t1 = *(signed char *)0xC8D6783;
            (((struct o6_uchar *)0xC8D677D)->v) = (t1 | 0x2);
            *(unsigned char *)0xC8D6498 = 0x6;
            t2 = (t1 | 0x2);
        } else {
            (((struct o0_uchar *)0xC8D677D)->v) = ((*(signed char *)0xC8D677D) & 0xFD);
            (((struct o0_uchar *)0xC8D677D)->v) = ((*(signed char *)0xC8D677D) & 0xFE);
            if (((unsigned short)((((struct oB0_short *)((*(int *)0xC8D66E8)))->v)) & 16) != 0) {
                t1 = FUN_0c2e6404();
                t3 = (signed char)t1;
                if ((signed char)t1 != 0) {
                    t1 = *(signed char *)0xC8D677E;
                    if (((unsigned char)t1 & 8) != 0) {
                        *(unsigned char *)0xC8D6498 = 0x2;
                        t4 = (unsigned char)t1;
                    } else {
                        FUN_0c2e7d9a();
                        (((struct oD_uchar *)0xC8D6441)->v) = ((*(signed char *)0xC8D644E) & 0x7F);
                        (((struct o0_uchar *)0xC8D65EE)->v) = 0x8;
                        (((struct o1E_uchar *)0xC8D65EE)->v) = 0x2;
                        *(unsigned char *)0xC8D6498 = 0x5;
                        t4 = 0x2;
                    }
                    t3 = t4;
                }
                t1 = t3;
            } else {
                t3 = *(signed char *)0xC8D677E;
                if (((unsigned char)t3 & 8) != 0) {
                    *(unsigned char *)0xC8D6498 = 0x2;
                    t4 = (unsigned char)t3;
                } else {
                    FUN_0c2e7d9a();
                    (((struct oD_uchar *)0xC8D6441)->v) = ((*(signed char *)0xC8D644E) & 0x7F);
                    (((struct o0_uchar *)0xC8D65EE)->v) = 0x8;
                    (((struct o1E_uchar *)0xC8D65EE)->v) = 0x2;
                    *(unsigned char *)0xC8D6498 = 0x5;
                    t4 = 0x2;
                }
                t1 = t4;
            }
            t2 = t1;
        }
        t1 = t2;
    } else {
        *(unsigned char *)0xC8D6498 = 0x6;
        t1 = (signed char)t0;
    }
    return t1;
}

int FUN_0c2f1fc0(int a4, int a5, int a6)
{
    int stk[10];
    register int t5;
    register int t8;
    register int t10;
    register int t11;
    register int t13;
    register int t14;
    register int t15;
    register int t17;
    int t0;
    register int t32;
    register int t33;

    *(unsigned int *)(((int)stk + 0)) = a4;
    if ((a5 != 0) && (t0 = *(int *)((a5 + 0x0)), t0 != 0)) {
        *(volatile int *)(((int)stk + 0));
    }
    t5 = (*(int *)((a5 + 0x0)));
    for (;;) {
        if ((*(signed char *)((t5 + 0x0))) != 32) {
            break;
        }
        t5 = (t5 + 0x1);
    }
    t8 = FUN_0c2f211a((*(signed char *)((t5 + 0x0))), a6);
    if ((signed char)t8 != 0) {
        t10 = 0x0;
        t11 = t5;
        for (;;) {
            t13 = FUN_0c2f211a((*(signed char *)((t11 + 0x0))), a6);
            if (((signed char)t13 != 0) && ((int)(unsigned char)t10 < (int)0x8)) {
                t14 = *(signed char *)((t11 + 0x0));
                t11 = (t11 + 0x1);
                t15 = (unsigned char)t10;
                t10 = (t10 + 0x1);
                *(unsigned char *)(((((int)stk + 0) + 0x4) + t15)) = t14;
                continue;
            }
            break;
        }
        *(unsigned char *)(((((int)stk + 0) + 0x4) + (unsigned char)t10)) = 0x0;
        t17 = t11;
        for (;;) {
            if ((*(signed char *)((t17 + 0x0))) != 32) {
                break;
            }
            t17 = (t17 + 0x1);
        }
        t32 = t17;
        if ((*(signed char *)((t17 + 0x0))) == 44) {
            t32 = (t17 + 0x1);
        }
        *(unsigned int *)(((*(int *)(((int)stk + 0))) + 0x0)) = (FUN_0c2f21c2((((int)stk + 0) + 0x4), a6));
        t33 = 0x0;
    } else {
        t32 = t5;
        t33 = 0x2;
        if ((*(signed char *)((t5 + 0x0))) == 44) {
            t32 = (t5 + 0x1);
            t33 = 0x1;
        }
    }
    *(unsigned int *)((a5 + 0x0)) = t32;
    return t33;
}

int FUN_0c2f6b18(void)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    t1 = FUN_0c2eeb4a(0xC8DFD5C);
    t2 = (unsigned short)t1;
    if (((unsigned short)t1 != 0) && (t0 = *(signed char *)0xC8E001C, t0 == 0)) {
        t0 = *(int *)0xC8DFD5C;
        *(unsigned int *)0xC8DFD5C = (t0 + 0x1);
        *(unsigned char *)((((t0 + 0x1) - 0x1) + 0x0)) = (*(signed char *)0xC8DFF96);
        t0 = *(int *)0xC8DFD5C;
        *(unsigned int *)0xC8DFD5C = (t0 + 0x1);
        *(unsigned char *)((((t0 + 0x1) - 0x1) + 0x0)) = ((unsigned char)(*(signed char *)0xC8DFD4C) << 1);
        t0 = *(int *)0xC8DFD5C;
        *(unsigned int *)0xC8DFD5C = (t0 + 0x1);
        *(unsigned char *)((((t0 + 0x1) - 0x1) + 0x0)) = (((unsigned char)(*(signed char *)0xC8DFF73) << 1) + (*(signed char *)0xC8DFF94));
        t0 = 0x3;
        t1 = ((unsigned short)(*(short *)((((unsigned char)(*(signed char *)0xC8DFD4C) << 1) + ((((struct o0_int *)0xC8DFF64)->v))))) + ((((struct o0_int *)0xC8DE900)->v)));
        t3 = 0x1;
        for (;;) {
            if ((int)(unsigned short)t3 > (int)(unsigned short)(*(short *)((((((struct o4_int *)0xC8DFF64)->v)) + ((unsigned char)(*(signed char *)0xC8DFD4C) << 1))))) {
                break;
            }
            t4 = *(int *)0xC8DFD5C;
            *(unsigned int *)0xC8DFD5C = (t4 + 0x1);
            t5 = *(signed char *)((t1 + 0x0));
            t1 = (t1 + 0x1);
            *(unsigned char *)((((t4 + 0x1) - 0x1) + 0x0)) = t5;
            t0 = (t0 + 0x1);
            if ((unsigned int)t1 > (unsigned int)((((struct o4_int *)0xC8DE900)->v))) {
                t1 = ((((struct o0_int *)0xC8DE900)->v));
            }
            t3 = (t3 + 0x1);
        }
        t3 = FUN_0c2eec74(t0, 0x1, t1);
        *(unsigned short *)0xC8D680C = ((*(short *)0xC8D680C) + 0x1);
        t2 = t3;
    }
    return t2;
}

int nlLoadTextureMem(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t1 = *(int *)0xC8A64D8;
    *(unsigned int *)0xC8A6C94 = ((*(int *)0xC8A6C94) + 0x1);
    t2 = kmCreateTextureSurface((t1 + (a5 * 0x3C)), (*(short *)((a4 + 0x0))), (*(short *)((a4 + 0x2))), (*(int *)((a4 + 0x4))));
    *(unsigned int *)(((t1 + (a5 * 0x3C)) + 0x28)) = t2;
    t1 = 0x1;
    if (t2 == 0) {
        t2 = *(int *)0xC2A6074;
        t3 = a6;
        if (t2 != 0) {
            t4 = ((int (*)(int, int, int, int))(t2))(a4, a5, a6, a7);
            t2 = a6;
            if (t4 != 0) {
                t2 = t4;
            }
            t3 = t2;
        }
        if ((((((struct o0_int *)0xC83CFE0)->v)) != 0) && (t0 = (((struct o4_int *)0xC83CFE0)->v), t0 != 1)) {
            kmLoadTextureRom(((*(int *)0xC8A64D8) + (a5 * 0x3C)), t3);
        } else {
            kmyEnableASyncCopy(0x1);
            kmLoadTextureRom(((*(int *)0xC8A64D8) + (a5 * 0x3C)), t3);
            kmyEnableASyncCopy(0x0);
            for (;;) {
                t0 = kmQueryFinishLastTextureDMA();
                if (t0 == 0) {
                    break;
                }
            }
        }
        t1 = 0x0;
    }
    return t1;
}

int FUN_0c17ff38(int a4, int a5, int a6, int a7)
{
    register int t30;
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t30 = 0xFFFFFFFF;
    if (((int)a5 >= 0) && ((int)a5 < (int)0x8)) {
        t0 = a4;
        t1 = 0x0;
        t2 = 0xC205F45;
        for (;;) {
            t3 = *(signed char *)((t2 + 0x0));
            t2 = (t2 + 0x1);
            t4 = *(signed char *)((t0 + 0x0));
            t0 = (t0 + 0x1);
            if (t4 != t3) {
                break;
            }
            t1 = (t1 + 0x1);
            if ((int)t1 >= (int)0x4) {
                t0 = a5;
                t0 = (t0 << 1);
                t0 = (t0 + a5);
                t0 = (t0 << 2);
                t0 = (signed char)t0;
                t0 = (*(int *)((0xC86CD00 + t0)));
                if (t0 != -1) {
                    t0 = 0xFFFFFFFD;
                    return t0;
                }
                t2 = (*(int *)((a4 + 0x8)));
                t0 = (nlsndG2Read(0xA0800088));
                if (a6 != 0) {
                    if (((0x3 & a6) == 0) && ((int)a6 >= (int)t2)) {
                        t2 = a6;
                        t2 = (t2 + ((((struct o0_int *)0xC86CC08)->v)));
                        if ((int)t2 > (int)t0) {
                            t0 = 0xFFFFFFFC;
                            return t0;
                        }
                        if ((*(int *)((((((struct o2C_int *)0xC86CC08)->v)) + 0x0))) != 0) {
                            t0 = 0xFFFFFFFB;
                            return t0;
                        }
                        t0 = 0x0;
                        return t0;
                    }
                    t0 = 0xFFFFFFFA;
                    return t0;
                }
                t2 = (t2 + ((((struct o0_int *)0xC86CC08)->v)));
                if ((int)t2 > (int)t0) {
                    t0 = 0xFFFFFFFC;
                    return t0;
                }
                if ((*(int *)((((((struct o2C_int *)0xC86CC08)->v)) + 0x0))) != 0) {
                    t0 = 0xFFFFFFFB;
                    return t0;
                }
                t0 = 0x0;
                return t0;
            }
        }
        t30 = 0xFFFFFFFE;
    }
    return t30;
}

int FUN_0c19f3b0(int a4, int a5, int a6)
{
    int stk[3];
    register int t27;
    register int t4;
    register int t6;
    register int t7;
    register int t9;
    register int t13;
    register int t16;

    *(unsigned int *)(((int)stk + 8)) = a6;
    *(unsigned int *)(((int)stk + 4)) = a5;
    t27 = 0xFFFFFFFF;
    if ((*(signed char *)((a5 + 0x1))) == (*(signed char *)((a4 + 0x1)))) {
        *(unsigned int *)(((int)stk + 0)) = (FUN_0c19eecc(a4));
        t4 = *(short *)(((*(int *)(((int)stk + 4))) + 0x2));
        t6 = FUN_0c1a02a6((*(int *)(((int)stk + 0))));
        if (t4 == (short)t6) {
            for (;;) {
                t7 = FUN_0c1a02cc(((int)stk + 0), 0xC8B6060, 0x1);
                t9 = 0xFFFFFFFF;
                if ((short)t7 != 1) {
                } else {
                    t9 = (unsigned char)(*(signed char *)0xC8B6060);
                }
                if ((short)t9 == -1) {
                    if (0x0 != 0) {
                        return 0xFFFFFFFF;
                    }
                    *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
                    return 0x0;
                }
                t13 = FUN_0c1a02cc((((int)stk + 0) + 0x8), 0xC8B6060, 0x1);
                t16 = 0xFFFFFFFF;
                if ((short)t13 != 1) {
                } else {
                    t16 = (unsigned char)(*(signed char *)0xC8B6060);
                }
                if (((short)t16 != -1) && ((short)t16 == (short)t9)) continue;
                break;
            }
        }
        t27 = 0xFFFFFFFF;
        if (0x1 != 0) {
        } else {
            *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
            t27 = 0x0;
        }
    }
    return t27;
}

int kmyInitDMADevice(void)
{
    register int t0;

    t0 = _builtin_get_imask();
    _builtin_set_imask(0xF);
    *(unsigned int *)0xC8D098C = 0xC2DF460;
    kmyZeroMemory(0xC2DF460, 0x1840);
    (((struct o0_uint *)0xC2DF460)->v) = 0x1840;
    (((struct o4_uint *)0xC2DF460)->v) = 0x1;
    kmyConnectInterrupt(0x11, 0xC2DEFE0, 0x0);
    kmyConnectInterrupt(0x12, 0xC2DEFE0, 0x0);
    kmyConnectInterrupt(0x13, 0xC2DEFE0, 0x0);
    kmyConnectInterrupt(0x19, 0xC2DEFE0, 0x0);
    kmyConnectInterrupt(0x18, 0xC2DEFE0, 0x0);
    kmyConnectInterrupt(0x17, 0xC2DEFE0, 0x0);
    kmyConnectInterrupt(0x16, 0xC2DEFE0, 0x0);
    kmyConnectInterrupt(0x15, 0xC2DEFE0, 0x0);
    kmyConnectInterrupt(0x1C, 0xC2DF288, 0x0);
    kmyConnectInterrupt(0x1B, 0xC2DF288, 0x0);
    (((struct o0_uint *)0xA05F6884)->v) = 0x0;
    (((struct o4_uint *)0xA05F6884)->v) = 0x1;
    _builtin_set_imask(((unsigned int)(((t0 & 0xF) << 2) << 2) >> 4));
    return 0x0;
}

int FUN_0c2d7498(void)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)0xC8D7088;
    if (((((struct o84_short *)(((short)((short)(unsigned char)t0 * (short)0x8C) + 0xC8D2B88)))->v)) != 0) {
        FUN_0c2d754a(((((struct o84_short *)(((short)((short)(unsigned char)t0 * (short)0x8C) + 0xC8D2B88)))->v)));
        t1 = *(signed char *)0xC8D7088;
        (((struct o84_ushort *)(((short)((short)(unsigned char)t1 * (short)0x8C) + 0xC8D2B88)))->v) = ((((struct o86_short *)(((short)((short)(unsigned char)t1 * (short)0x8C) + 0xC8D2B88)))->v));
        t1 = *(signed char *)0xC8D7088;
        (((struct o86_ushort *)(((short)((short)(unsigned char)t1 * (short)0x8C) + 0xC8D2B88)))->v) = ((((struct o88_short *)(((short)((short)(unsigned char)t1 * (short)0x8C) + 0xC8D2B88)))->v));
        t1 = *(signed char *)0xC8D7088;
        (((struct o88_ushort *)(((short)((short)(unsigned char)t1 * (short)0x8C) + 0xC8D2B88)))->v) = ((((struct o8A_short *)(((short)((short)(unsigned char)t1 * (short)0x8C) + 0xC8D2B88)))->v));
        (((struct o8A_ushort *)(((short)((short)(unsigned char)(*(signed char *)0xC8D7088) * (short)0x8C) + 0xC8D2B88)))->v) = 0x0;
        return 0x0;
    }
    t1 = *(short *)((((short)((short)(unsigned char)t0 * (short)0x8C) + 0xC8D2B88) + 0x2));
    if (t1 != 0) {
        *(unsigned short *)((((short)((short)(unsigned char)t0 * (short)0x8C) + 0xC8D2B88) + 0x0)) = ((*(short *)((((short)((short)(unsigned char)t0 * (short)0x8C) + 0xC8D2B88) + 0x0))) & 0xFFFE);
        return FUN_0c2d7806(0x1);
    }
    return t1;
}

int kmyStartRenderTexture(int a4, int a5, int a6)
{
    int t0;
    register int t1;
    register int t2;

    t1 = kmyiCheckNativeHandle(a4);
    t2 = 0xEEEE;
    if ((t1 != 0) && (t0 = *(int *)0xC8D0684, t0 == 0)) {
        t0 = (((struct o88_int *)(a4))->v);
        t1 = *(int *)0xC8D6344;
        *(unsigned int *)0xC8D6344 = (unsigned short)(*(int *)((t0 + 0x24)));
        if (t1 != (*(int *)0xC8D6344)) {
            kmyResetRenderer();
        }
        kmiWriteRegister(0x2C, (*(int *)(((a4 + 0x18) + 0xC))));
        kmiWriteRegister(0x20, (*(int *)(((a4 + 0x18) + 0x8))));
        kmiWriteRegister(0xF4, (*(int *)((t0 + 0x24))));
        kmiWriteRegister(0x48, (*(int *)((t0 + 0x4))));
        kmiWriteRegister(0x8C, (*(int *)((t0 + 0x8))));
        kmiWriteRegister(0x88, ((*(int *)((t0 + 0xC))) & 0xFFFFFFF0));
        kmiWriteRegister(0x68, (*(int *)((t0 + 0x14))));
        kmiWriteRegister(0x6C, (*(int *)((t0 + 0x18))));
        kmiWriteRegister(0x4C, ((unsigned int)((unsigned int)((unsigned int)((a6 << 2) << 2) >> 2) >> 2) >> 2));
        kmiWriteRegister(0x60, (a5 + 0x1000000));
        kmiWriteRegister(0x14, 0x1);
        t2 = 0x0;
    }
    return t2;
}

int syIntAdrChk_putchar(int a4, int a5)
{
    register int t0;
    register int t1;

    t0 = (((struct o8_int *)0xC8E0960)->v);
    if (t0 != 0) {
        t1 = t0;
        if (t0 == 1) {
            for (;;) {
                if (((unsigned char)(*(signed char *)(((((((struct o0_int *)0xC8E0960)->v)) + 0x10) + 0x0))) & 0x80) == 0x80) {
                    break;
                }
            }
            *(unsigned char *)(((((((struct o0_int *)0xC8E0960)->v)) + 0xC) + 0x0)) = a4;
            t0 = (((struct o0_int *)0xC8E0960)->v);
            (((struct o10_uchar *)(t0))->v) = ((*(signed char *)(((t0 + 0x10) + 0x0))) & 0x7F);
            for (;;) {
                t0 = *(signed char *)(((((((struct o0_int *)0xC8E0960)->v)) + 0x10) + 0x0));
                if (((unsigned char)t0 & 0x4) == 4) {
                    break;
                }
            }
            t1 = ((unsigned char)t0 & 0x4);
        }
        t0 = t1;
    } else {
        for (;;) {
            if (((unsigned short)(*(short *)((((((struct o4_int *)0xC8E0960)->v)) + 0x10))) & 0x20) == 32) {
                break;
            }
        }
        *(unsigned char *)(((((((struct o4_int *)0xC8E0960)->v)) + 0xC) + 0x0)) = a4;
        t1 = (((struct o4_int *)0xC8E0960)->v);
        *(unsigned short *)(((t1 + 0x10) + 0x0)) = ((*(short *)(((t1 + 0x10) + 0x0))) & 0xFFDF);
        t1 = (((struct o4_int *)0xC8E0960)->v);
        *(unsigned short *)(((t1 + 0x10) + 0x0)) = ((*(short *)(((t1 + 0x10) + 0x0))) & 0xFFBF);
        for (;;) {
            t1 = *(short *)((((((struct o4_int *)0xC8E0960)->v)) + 0x10));
            if (((unsigned short)t1 & 0x40) == 64) {
                break;
            }
        }
        t0 = ((unsigned short)t1 & 0x40);
    }
    return t0;
}

int nlFrustum_L(float f4, float f5, float f6, float f7, float f8, float f9)
{
    int stk[16];
    register float u0;

    *(float *)(((int)stk + 0)) = ((f8 * (1.0f + 1.0f)) / (f5 - f4));
    *(float *)(((int)stk + 4)) = 0.0f;
    *(float *)(((int)stk + 8)) = 0.0f;
    *(float *)(((int)stk + 12)) = 0.0f;
    *(float *)(((int)stk + 16)) = 0.0f;
    *(float *)(((int)stk + 20)) = ((f8 * (1.0f + 1.0f)) / (f7 - f6));
    *(float *)(((int)stk + 24)) = 0.0f;
    *(float *)(((int)stk + 28)) = 0.0f;
    *(float *)(((int)stk + 32)) = ((f4 + f5) / (f5 - f4));
    *(float *)(((int)stk + 36)) = ((f6 + f7) / (f7 - f6));
    *(float *)(((int)stk + 40)) = (((-f8) - f9) / (f9 - f8));
    *(float *)(((int)stk + 44)) = 1.0f;
    *(float *)(((int)stk + 48)) = 0.0f;
    *(float *)(((int)stk + 52)) = 0.0f;
    u0 = (f8 * f9);
    *(float *)(((int)stk + 56)) = ((u0 * (1.0f + 1.0f)) / (f9 - f8));
    *(float *)(((int)stk + 60)) = 0.0f;
    (((struct o0_float *)0xC8B85DC)->v) = f8;
    (((struct o4_float *)0xC8B85DC)->v) = f9;
    (((struct o8_float *)0xC8B85DC)->v) = (1.0f / f8);
    (((struct o18_float *)0xC8A6C74)->v) = f8;
    (((struct o0_float *)0xC8A6C74)->v) = (-f8);
    (((struct o1C_float *)0xC8A6C74)->v) = f9;
    (((struct o14_float *)0xC8A6C74)->v) = (1.0f / f8);
    nlMultiMatrix(((int)stk + 0));
    return (nl_set_cnv_proj_pers());
}

void FUN_0c18d320(int a4, int a5)
{
    int stk[3];
    register int t3;
    register int t7;

    *(unsigned int *)(((int)stk + 0)) = a5;
    FUN_0c18dcfa((((int)stk + 0) + 0x4), (*(int *)((a4 + 0x4))));
    *(unsigned int *)((((((*(short *)((a4 + 0x0))) << 2) << 2) + 0xC8A7030) + 0x0)) = 0xFFFFFFFF;
    t3 = *(short *)((a4 + 0x0));
    *(unsigned int *)((((((short)t3 << 2) << 2) + 0xC8A7030) + 0xC)) = (short)t3;
    t7 = FUN_0c19adb4((*(short *)((a4 + 0x0))), (((int)stk + 0) + 0x4), (*(short *)((a4 + 0x2))), (*(int *)((a4 + 0x8))));
    if ((int)t7 < 0) {
    } else {
        if ((*(int *)((a4 + 0x8))) != 0) {
        } else {
            FUN_0c18dfe6();
            for (;;) {
                if ((*(int *)((0xC8A7030 + (((*(short *)((a4 + 0x0))) << 2) << 2)))) != -1) {
                    break;
                }
                FUN_0c18dfd0();
            }
            FUN_0c18dfd6();
            *(unsigned short *)(((*(int *)(((int)stk + 0))) + 0x0)) = (*(int *)((((((*(short *)((a4 + 0x0))) << 2) << 2) + 0xC8A7030) + 0x8)));
            if ((*(int *)((((((*(short *)((a4 + 0x0))) << 2) << 2) + 0xC8A7030) + 0x4))) == 0) {
            } else {
                *(volatile int *)((((((*(short *)((a4 + 0x0))) << 2) << 2) + 0xC8A7030) + 0x4));
            }
        }
    }
}

int FUN_0c19c774(int a4, int a5, int a6)
{
    int stk[3];
    register int t0;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t101;
    register int t102;
    register int t103;
    register int t73;
    register int t1;
    register int t6;
    register int t32;
    register int t33;
    int t34;
    register int t35;
    register int t98;
    register int t74;
    int t83;

    *(unsigned short *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 8)) = a5;
    *(unsigned char *)(((int)stk + 0)) = a6;
    t0 = a4;
    t2 = a4;
    t3 = a5;
    t4 = a6;
    t5 = 0x0;
    for (;;) {
        if ((int)t5 >= (int)(unsigned char)(*(signed char *)0xC8A738D)) {
            break;
        }
        t6 = t5;
        t6 = (t6 << 1);
        t6 = (t6 + t5);
        t6 = (t6 << 2);
        t6 = (t6 << 2);
        t6 = (t6 + (*(int *)0xC8A73C4));
        t0 = (*(short *)((t6 + 0x8)));
        t101 = t2;
        t102 = t3;
        t103 = t4;
        if ((t0 != 0) && ((t32 = (t0 == 0), t0 = 0x14, t33 = *(signed char *)((t6 + t0)), t33 != 0) && (t34 = *(int *)(((int)stk + 8)), t35 = *(int *)((t6 + 0x18)), t34 == t35))) {
            t0 = 0x15;
            t1 = (*(signed char *)(((int)stk + 0)));
            t1 = (unsigned char)t1;
            if ((*(signed char *)((t6 + t0))) != 0) {
                t0 = (*(short *)(((int)stk + 4)));
                t73 = t0;
                t0 = (*(short *)((t6 + 0xE)));
                if ((t73 == t0) && ((t74 = (t73 == t0), t0 = t1, t0 == 3) || (t1 == 0))) {
                    t3 = (*(int *)((t6 + 0x28)));
                    t4 = 0x2;
                    t2 = t5;
                    t0 = (FUN_0c18d914(t2, t3, t4, 0x81, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8)));
                } else {
                    t98 = t1;
                    t101 = t2;
                    t102 = t3;
                    t103 = t4;
                }
            } else {
                t0 = t1;
                if ((t0 != 1) && (t83 = (t0 == 1), t0 = t1, t0 != 2)) {
                    t98 = t1;
                    t101 = t2;
                    t102 = t3;
                    t103 = t4;
                } else {
                    t3 = (*(int *)((t6 + 0x28)));
                    t4 = 0x2;
                    t2 = t5;
                    t0 = (FUN_0c18d914(t2, t3, t4, 0x80, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8)));
                }
            }
        } else {
            t98 = t1;
        }
        t1 = t98;
        t5 = (t5 + 0x1);
        t2 = t101;
        t3 = t102;
        t4 = t103;
    }
    return 0x0;
}

int vmsfs_mediainfo_retry(int a4, int a5)
{
    int t0;
    register int t1;
    int t2;
    register int t3;

    t1 = (*(int *)0xC8C21C8);
    for (;;) {
        t2 = vmsio_get_media_info(a4, a5);
        if (t2 != 0) {
            if (((*(int *)0xC2FFC2C) != 0) && (t2 == 0xFFFFFF30)) {
                return 0xFFFFFF01;
            }
            *(unsigned int *)((((a4 * 0x148) + 0xC8C4604) + 0x34)) = ((*(int *)((((a4 * 0x148) + 0xC8C4604) + 0x34))) + 0x1);
            t3 = t1 == 0;
            t1 = (t1 - 1);
            if (t3 && (t0 = *(int *)0xC8C21C8, t0 != -1)) {
                break;
            }
            continue;
        }
        break;
    }
    t0 = *(int *)((((a4 * 0x148) + 0xC8C4604) + 0x30));
    t1 = *(int *)((((a4 * 0x148) + 0xC8C4604) + 0x34));
    *(unsigned int *)((((a4 * 0x148) + 0xC8C4604) + 0x30)) = (t0 + 0x1);
    vmsfs_c_progress(a4, (*(int *)(((((((a4 << 2) << 2) << 2) << 1) + 0xC8C21EC) + 0x8))), ((t0 + 0x1) - 1), t1);
    t0 = 0x0;
    if (t2 != 0) {
        t1 = 0xFFFFFF01;
        if (t2 != 0xFFFFFF01) {
            t1 = 0xFFFF0000;
        }
        t0 = t1;
    }
    return t0;
}

int FUN_0c2d8824(int a4)
{
    register int t0;
    register int t26;

    t0 = *(int *)0xC8BFFE8;
    t26 = 0x0;
    if ((unsigned short)((*(short *)(((((*(int *)((t0 + 0xC))) + 0x4D8) + (short)((short)(unsigned char)(*(signed char *)((((((struct o4C_int *)((*(int *)((t0 + 0x8)))))->v)) + 0x1))) * (short)0x8C)) + 0x0))) & 0x1) == 0) {
        (((struct o500_ushort *)(a4))->v) = (FUN_0c2d868a(t0, (*(short *)(((((*(int *)((t0 + 0xC))) + 0x4D8) + (short)((short)(unsigned char)(*(signed char *)((((((struct o4C_int *)((*(int *)((t0 + 0x8)))))->v)) + 0x1))) * (short)0x8C)) + 0x2)))));
        FUN_0c187a88(a4, ((((*(int *)(((*(int *)0xC8BFFE8) + 0xC))) + 0x4D8) + (short)((short)(unsigned char)(*(signed char *)((((((struct o4C_int *)((*(int *)(((*(int *)0xC8BFFE8) + 0x8)))))->v)) + 0x1))) * (short)0x8C)) + 0x4), (unsigned short)((((struct o500_short *)(a4))->v)));
        (((struct o502_ushort *)(a4))->v) = 0x0;
        FUN_0c2d8474((*(int *)0xC8BFFE8));
        t26 = 0x1;
    }
    return t26;
}

int mpdrv_check_port(int a4)
{
    int stk[1];
    register int t0;
    register int t2;
    register int t3;
    int t8;
    register int t11;
    register int t13;
    int t16;
    register int t17;
    int t25;
    register int t26;

    t0 = *(int *)0xC8D4D84;
    t2 = *(int *)0xC8D4D84;
    t3 = (((struct o10B4_int *)(t2))->v);
    t8 = *(int *)(((*(int *)(((((t2 + 0xFE8) + (((((((-t3) + 0x1) << 1) + ((-t3) + 0x1)) << 2) << 2) << 1)) + ((*(int *)(((a4 << 2) + 0xC300800))) << 2)) + 0x0))) + 0x0));
    *(unsigned int *)(((int)stk + 0)) = t8;
    if ((t8 != -1) && (t8 != 0xFFFFFF00)) {
        t11 = (((int)stk + 0) + 0x2);
        if (((((struct o10C4_int *)((*(int *)0xC8D4D84)))->v)) == 1) {
            t11 = (((int)stk + 0) + 0x1);
        }
        t13 = *(signed char *)((t11 + 0x0));
        *(unsigned int *)((((t0 + 0x4) + ((a4 << 2) << 1)) + 0x4)) = 0x0;
        *(unsigned char *)((((t0 + 0x4) + ((a4 << 2) << 1)) + 0x1)) = (*(signed char *)((((t0 + 0x4) + ((a4 << 2) << 1)) + 0x0)));
        *(unsigned char *)((((t0 + 0x4) + ((a4 << 2) << 1)) + 0x0)) = t13;
        t16 = *(signed char *)((((t0 + 0x4) + ((a4 << 2) << 1)) + 0x0));
        *(unsigned char *)((((t0 + 0x4) + ((a4 << 2) << 1)) + 0x2)) = (((*(signed char *)((((t0 + 0x4) + ((a4 << 2) << 1)) + 0x1))) ^ t16) & t16);
        t17 = *(signed char *)((((t0 + 0x4) + ((a4 << 2) << 1)) + 0x0));
        *(unsigned char *)((((t0 + 0x4) + ((a4 << 2) << 1)) + 0x3)) = (((*(signed char *)((((t0 + 0x4) + ((a4 << 2) << 1)) + 0x1))) ^ t17) & (~t17));
        return 0x0;
    }
    *(unsigned int *)((((t0 + 0x4) + ((a4 << 2) << 1)) + 0x4)) = ((*(int *)((((t0 + 0x4) + ((a4 << 2) << 1)) + 0x4))) + 0x1);
    if ((unsigned int)(*(int *)((((t0 + 0x4) + ((a4 << 2) << 1)) + 0x4))) > (unsigned int)((((struct o10DC_int *)((*(int *)0xC8D4D84)))->v))) {
        *(unsigned char *)((((t0 + 0x4) + ((a4 << 2) << 1)) + 0x1)) = (*(signed char *)((((t0 + 0x4) + ((a4 << 2) << 1)) + 0x0)));
        *(unsigned char *)((((t0 + 0x4) + ((a4 << 2) << 1)) + 0x0)) = 0x0;
        t25 = *(signed char *)((((t0 + 0x4) + ((a4 << 2) << 1)) + 0x0));
        *(unsigned char *)((((t0 + 0x4) + ((a4 << 2) << 1)) + 0x2)) = (((*(signed char *)((((t0 + 0x4) + ((a4 << 2) << 1)) + 0x1))) ^ t25) & t25);
        t26 = *(signed char *)((((t0 + 0x4) + ((a4 << 2) << 1)) + 0x0));
        *(unsigned char *)((((t0 + 0x4) + ((a4 << 2) << 1)) + 0x3)) = (((*(signed char *)((((t0 + 0x4) + ((a4 << 2) << 1)) + 0x1))) ^ t26) & (~t26));
        return 0xFFFFFFFF;
    }
    return 0x0;
}

int FUN_0c2eafb4(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t3;

    t0 = a4;
    if ((*(short *)((((((struct o10_int *)0xC8D6750)->v)) + 0x1A))) != 0) {
        t1 = *(signed char *)0xC8D6750;
        if ((signed char)a5 == 0) {
            if ((signed char)a4 != (signed char)t1) {
                if ((*(signed char *)0xC8D6751) != 0) {
                    if ((signed char)t1 != 0) {
                        FUN_0c2ec410(0xC8D6754, 0x0);
                        (((struct o4_uint *)0xC8D6750)->v) = ((((((struct o4_int *)0xC8D6750)->v)) - ((((struct oC_int *)0xC8D6750)->v))) + 0x3);
                    } else {
                        FUN_0c2ec410(0xC8D6758, 0x0);
                        (((struct o8_uint *)0xC8D6750)->v) = ((((((struct o8_int *)0xC8D6750)->v)) - ((((struct oC_int *)0xC8D6750)->v))) + 0x3);
                    }
                }
                FUN_0c2ec410(0xC8D675C, 0x0);
                (((struct o1_uchar *)0xC8D6750)->v) = 0x1;
                (((struct o0_uchar *)0xC8D6750)->v) = a4;
            }
            t0 = a4;
        } else {
            t3 = (((struct oC_int *)0xC8D6750)->v);
            if ((signed char)t1 != 0) {
                t1 = FUN_0c2ec430((((((struct o4_int *)0xC8D6750)->v)) + t3));
                if ((signed char)t1 != 0) {
                    (((struct o0_uchar *)0xC8D6750)->v) = 0x0;
                    FUN_0c2ec410(0xC8D675C, 0x0);
                }
            } else {
                t1 = FUN_0c2ec430((((((struct o8_int *)0xC8D6750)->v)) + t3));
                if ((signed char)t1 != 0) {
                    (((struct o0_uchar *)0xC8D6750)->v) = 0x1;
                    FUN_0c2ec410(0xC8D675C, 0x0);
                }
            }
            (((struct o1_uchar *)0xC8D6750)->v) = 0x0;
            t0 = (*(signed char *)0xC8D6750);
        }
    }
    return t0;
}


int FUN_0c2fde34(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;

    if ((((unsigned char)(*(signed char *)0xC8D6467) & 1) != 0) && ((t0 = *(signed char *)0xC8D65AB, t1 = *(signed char *)0xC8D65A9, (unsigned int)t1 < (unsigned int)t0) && ((t2 = *(signed char *)0xC8D65A9, t3 = *(signed char *)0xC8D65E0, (unsigned int)t2 < (unsigned int)t3) && (t4 = *(signed char *)0xC8D65A6, (unsigned char)t4 != 1)))) {
        t0 = FUN_0c2d2c4e();
        t1 = FUN_0c2fe108(t0, 0x0);
        if ((signed char)t1 != 0) {
            if ((((((struct o0_int *)0xC8D65AC)->v)) == 0x80) && (t5 = *(signed char *)0xC8D65AA, t5 != 0)) {
                t0 = *(signed char *)0xC8D65AA;
                t1 = FUN_0c2f8c78();
                if ((int)(unsigned char)t0 <= (int)(unsigned char)t1) {
                    if ((((((struct o0_int *)0xC8D65AC)->v)) == 64) && (t6 = *(signed char *)0xC8D65AA, t6 != 0)) {
                        t0 = *(signed char *)0xC8D65AA;
                        t1 = FUN_0c2f8c6c();
                        if ((int)(unsigned char)t0 <= (int)(unsigned char)t1) {
                            t0 = FUN_0c2ec430(((((struct o10_int *)0xC8D65AC)->v)));
                            if (((signed char)t0 == 0) && (t7 = *(signed char *)0xC8E0B45, t7 == 0)) {
                                return 0x0;
                            }
                            FUN_0c2ec410(0xC8D65BC, 0x1770);
                            return 0x1;
                        }
                        return 0x0;
                    }
                    t0 = FUN_0c2ec430(((((struct o10_int *)0xC8D65AC)->v)));
                    if (((signed char)t0 == 0) && (t8 = *(signed char *)0xC8E0B45, t8 == 0)) {
                        return 0x0;
                    }
                    FUN_0c2ec410(0xC8D65BC, 0x1770);
                    return 0x1;
                }
                return 0x0;
            }
            if ((((((struct o0_int *)0xC8D65AC)->v)) == 64) && (t9 = *(signed char *)0xC8D65AA, t9 != 0)) {
                t0 = *(signed char *)0xC8D65AA;
                t1 = FUN_0c2f8c6c();
                if ((int)(unsigned char)t0 <= (int)(unsigned char)t1) {
                    t0 = FUN_0c2ec430(((((struct o10_int *)0xC8D65AC)->v)));
                    if (((signed char)t0 == 0) && (t10 = *(signed char *)0xC8E0B45, t10 == 0)) {
                        return 0x0;
                    }
                    FUN_0c2ec410(0xC8D65BC, 0x1770);
                    return 0x1;
                }
                return 0x0;
            }
            t0 = FUN_0c2ec430(((((struct o10_int *)0xC8D65AC)->v)));
            if (((signed char)t0 == 0) && (t11 = *(signed char *)0xC8E0B45, t11 == 0)) {
                return 0x0;
            }
            FUN_0c2ec410(0xC8D65BC, 0x1770);
            return 0x1;
        }
        return 0x0;
    }
    return 0x0;
}

int FUN_0c180512(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t0 = FUN_0c17ffea(a4, a5);
    t1 = t0;
    if (t0 == 0) {
        t0 = 0x0;
        for (;;) {
            t2 = FUN_0c180a6c(a5, 0x1100A0, 0x0);
            if (t2 != 0) {
                t0 = (t0 + 0x1);
                if ((int)t0 >= (int)0x400000) {
                    break;
                }
                continue;
            }
            t2 = *(int *)((a4 + 0x8));
            t3 = *(int *)((a4 + 0x4));
            *(unsigned int *)(((signed char)(((a5 << 1) + a5) << 2) + 0xC86CD00)) = t3;
            *(unsigned int *)((((a5 << 2) + 0xA0800060) + 0x0)) = t3;
            t3 = nlsnd_PL_WaitRequest();
            if (t3 == 0) {
                t4 = nlsnd_PL_WaitAica1();
                if (t4 == 0) {
                    t0 = a5;
                    t0 = (t0 << 1);
                    t0 = (t0 + a5);
                    t0 = (t0 << 2);
                    t0 = (signed char)t0;
                    t0 = (t0 + 0xC86CD00);
                    nlsndG2WriteN(a4, (*(int *)((t0 + 0x4))), ((unsigned int)t2 >> 2));
                    nlsndG2Write((*(int *)((t0 + 0x8))), ((*(int *)((t0 + 0x4))) + 0x8));
                    t2 = nlsnd_PL_WaitAica2andGo();
                    if (t2 != 0) {
                        return t2;
                    }
                    return 0x0;
                }
                return t4;
            }
            return t3;
        }
        t1 = 0xFFFFFF00;
    }
    return t1;
}

int FUN_0c1a02cc(int a4, int a5, int a6)
{
    int stk[2];
    register int t49;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t9;
    register int t42;
    register int t44;
    register int t0;
    register int t1;
    register int t8;
    register int t10;
    register int t33;
    register int t35;
    register int t36;
    register int t37;
    register int t38;

    *(unsigned int *)(((int)stk + 4)) = a4;
    t49 = 0x0;
    if (a4 == 0) {
    } else {
        t2 = a4;
        t3 = a4;
        t4 = a5;
        t5 = a6;
        t6 = 0x0;
        t7 = a6;
        t9 = a5;
        for (;;) {
            if ((unsigned short)t7 != 0) {
                t1 = (*(int *)(((int)stk + 4)));
                t2 = (*(int *)((t1 + 0x0)));
                *(unsigned int *)(((int)stk + 0)) = t2;
                if (t2 == 0) {
                    break;
                }
                t10 = (*(int *)(((int)stk + 0)));
                t3 = (unsigned short)t7;
                t0 = (*(short *)((t10 + 0x4)));
                t0 = (unsigned short)t0;
                if ((int)t3 < (int)t0) {
                    t10 = t3;
                } else {
                    t10 = (*(int *)(((int)stk + 0)));
                    t0 = (*(short *)((t10 + 0x4)));
                    t10 = (unsigned short)t0;
                }
                t8 = (short)t10;
                if (t9 != 0) {
                    t3 = (short)t10;
                    t0 = t3;
                    if (t0 == 1) {
                        t2 = (*(int *)(((*(int *)(((int)stk + 0))) + 0x0)));
                        t1 = (*(signed char *)((t2 + 0x0)));
                        *(unsigned char *)((t9 + 0x0)) = t1;
                        t33 = t1;
                        t35 = t2;
                        t36 = t3;
                        t37 = t4;
                        t38 = t5;
                    } else {
                        if ((int)t3 > (int)0x1) {
                            t4 = (*(int *)(((int)stk + 0)));
                            t5 = t8;
                            t2 = 0xC187A88;
                            t4 = (*(int *)((t4 + 0x0)));
                            t3 = t9;
                            t0 = (FUN_0c187a88(t3, t4, t5));
                        } else {
                            t33 = t1;
                            t35 = t2;
                            t36 = t3;
                            t37 = t4;
                            t38 = t5;
                        }
                    }
                    t1 = t33;
                    t9 = (t9 + t8);
                    t2 = t35;
                    t3 = t36;
                    t4 = t37;
                    t5 = t38;
                }
                t42 = *(int *)(((int)stk + 0));
                t6 = (t6 + t10);
                t2 = (*(int *)((t42 + 0x0)));
                t2 = (t2 + t8);
                *(unsigned int *)((t42 + 0x0)) = t2;
                t44 = *(int *)(((int)stk + 0));
                t0 = (*(short *)((t44 + 0x4)));
                t0 = (t0 - t10);
                *(unsigned short *)((t44 + 0x4)) = t0;
                t2 = (*(int *)(((int)stk + 0)));
                t0 = (*(short *)((t2 + 0x4)));
                t7 = (t7 - t10);
                if (t0 == 0) {
                    t7 = 0x0;
                }
                continue;
            }
            break;
        }
        t49 = t6;
    }
    return t49;
}

int sySqInit(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t0 = *(int *)0xFF000010;
    t1 = (t0 & 0x1);
    if ((t0 & 0x1) == 1) {
        t2 = (t0 & 0x1);
        t0 = 0xE0000000;
        t3 = 0x0;
        t4 = 0x0;
        for (;;) {
            if ((unsigned int)(0xC000000 + t4) >= (unsigned int)0xD000000) {
                break;
            }
            t2 = (syMmuAddEntry((0xC000000 + t4), (0xE0000000 + t4), 0x4));
            t0 = (0xC8C1B84 + (t3 << 2));
            t3 = (t3 + 0x1);
            t4 = (t4 + 0x100000);
            *(unsigned int *)((t0 + 0x0)) = t2;
        }
        t3 = t2;
        t2 = t0;
        t0 = 0x0;
        t4 = 0x0;
        for (;;) {
            if ((unsigned int)(0x10000000 + t4) >= (unsigned int)0x10800000) {
                break;
            }
            t3 = (syMmuAddEntry((0x10000000 + t4), (0xE1000000 + t4), 0x4));
            t2 = (0xC8C1BC4 + (t0 << 2));
            t0 = (t0 + 0x1);
            t4 = (t4 + 0x100000);
            *(unsigned int *)((t2 + 0x0)) = t3;
        }
        t0 = syMmuAddEntry(0x10800000, 0xE1800000, 0x4);
        *(unsigned int *)0xC8C1BE4 = t0;
        t1 = t0;
    }
    return t1;
}

int FUN_0c2ef634(void)
{
    register int t0;
    register int t1;
    int t2;
    register int t3;
    register int t4;

    *(unsigned short *)0xC8D67C0 = 0x0;
    *(unsigned char *)0xC8D2700 = 0x0;
    t1 = *(short *)0xC8D684A;
    if (t1 == 0) {
        t2 = *(signed char *)0xC8D6828;
        t3 = (unsigned char)t2;
        if ((unsigned char)t2 == 11) {
            t3 = (FUN_0c2d6c38(t2, (*(signed char *)0xC8D6829), (*(signed char *)0xC8D682A), (*(signed char *)0xC8D682B), ((*(signed char *)0xC8D682C)), ((*(signed char *)0xC8D682D)), ((*(signed char *)0xC8D682E)), ((*(signed char *)0xC8D682F)), ((*(signed char *)0xC8D6830))));
        }
        return t3;
    }
    t2 = t1;
    t1 = 0x0;
    for (;;) {
        if (((int)(unsigned char)t1 < (int)0x10) && (t2 = 0xC8D684A, t0 = *(short *)((t2 + 0x0)), t0 != 0)) {
            t2 = 0xC8D26B0;
            t3 = ((((struct o4_int *)0xC8D701C)->v));
            t2 = (t2 + 0x51);
            t4 = ((unsigned char)t1 + t2);
            t2 = (*(signed char *)((t3 + 0x0)));
            *(unsigned char *)((t4 + 0x0)) = t2;
            t4 = (((struct o4_int *)0xC8D701C)->v);
            t3 = (t4 + 0x1);
            (((struct o4_uint *)0xC8D701C)->v) = (t4 + 0x1);
            t2 = ((((struct o0_int *)0xC8D701C)->v));
            t1 = (t1 + 0x1);
            if ((unsigned int)t3 > (unsigned int)t2) {
                (((struct o4_uint *)0xC8D701C)->v) = 0xC8D684C;
            }
            t2 = (*(short *)0xC8D684A);
            t2 = (t2 - 1);
            *(unsigned short *)0xC8D684A = t2;
            continue;
        }
        break;
    }
    *(unsigned char *)0xC8D2700 = t1;
    return FUN_0c2d7806(0x4);
}

int FUN_0c2f6c38(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    if ((int)(((unsigned short)(*(short *)0xC8DFF6C) + (unsigned short)((((struct oC_short *)0xC8DFD3C)->v))) + 0x3) <= (int)0x40C) {
        t0 = (((struct o8_int *)0xC8DFD3C)->v);
        (((struct o8_uint *)0xC8DFD3C)->v) = (t0 + 0x1);
        *(unsigned char *)((((t0 + 0x1) - 0x1) + 0x0)) = (*(signed char *)0xC8DFF6F);
        if ((unsigned int)((((struct o8_int *)0xC8DFD3C)->v)) > (unsigned int)((((struct o0_int *)0xC8DFD3C)->v))) {
            (((struct o8_uint *)0xC8DFD3C)->v) = 0xC8DF930;
        }
        (((struct oC_ushort *)0xC8DFD3C)->v) = (((((struct oC_short *)0xC8DFD3C)->v)) + 0x1);
        t0 = (((struct o8_int *)0xC8DFD3C)->v);
        (((struct o8_uint *)0xC8DFD3C)->v) = (t0 + 0x1);
        *(unsigned char *)((((t0 + 0x1) - 0x1) + 0x0)) = ((unsigned int)(unsigned short)(*(short *)0xC8DFF6C) >> 8);
        if ((unsigned int)((((struct o8_int *)0xC8DFD3C)->v)) > (unsigned int)((((struct o0_int *)0xC8DFD3C)->v))) {
            (((struct o8_uint *)0xC8DFD3C)->v) = 0xC8DF930;
        }
        (((struct oC_ushort *)0xC8DFD3C)->v) = (((((struct oC_short *)0xC8DFD3C)->v)) + 0x1);
        t0 = (((struct o8_int *)0xC8DFD3C)->v);
        (((struct o8_uint *)0xC8DFD3C)->v) = (t0 + 0x1);
        *(unsigned char *)((((t0 + 0x1) - 0x1) + 0x0)) = (*(signed char *)0xC8DFF6C);
        t0 = (((struct o8_int *)0xC8DFD3C)->v);
        if ((unsigned int)t0 > (unsigned int)((((struct o0_int *)0xC8DFD3C)->v))) {
            (((struct o8_uint *)0xC8DFD3C)->v) = 0xC8DF930;
        }
        (((struct oC_ushort *)0xC8DFD3C)->v) = (((((struct oC_short *)0xC8DFD3C)->v)) + 0x1);
        t1 = 0x1;
        t2 = t0;
        for (;;) {
            if ((int)(unsigned short)t1 > (int)(unsigned short)(*(short *)0xC8DFF6C)) {
                break;
            }
            t0 = (((struct o8_int *)0xC8DFD3C)->v);
            (((struct o8_uint *)0xC8DFD3C)->v) = (t0 + 0x1);
            t3 = (((struct o14_int *)0xC8DFD3C)->v);
            (((struct o14_uint *)0xC8DFD3C)->v) = (t3 + 0x1);
            t2 = (*(signed char *)((((t3 + 0x1) - 1) + 0x0)));
            *(unsigned char *)((((t0 + 0x1) - 0x1) + 0x0)) = t2;
            if ((unsigned int)((((struct o8_int *)0xC8DFD3C)->v)) > (unsigned int)((((struct o0_int *)0xC8DFD3C)->v))) {
                (((struct o8_uint *)0xC8DFD3C)->v) = 0xC8DF930;
            }
            t1 = (t1 + 0x1);
            (((struct oC_ushort *)0xC8DFD3C)->v) = (((((struct oC_short *)0xC8DFD3C)->v)) + 0x1);
        }
        t0 = t1;
    }
    return t0;
}

int FUN_0c2f6d04(void)
{

    register int R0;
    register int R1;
    register int R2;
    register int R3;
    int R5;
    register int T_;
    register int v0_0;
    register int v0_1;
    v0_1 = (0xC8D6793);
    R5 = (0x4);
    if (((*(signed char *)0xC8DFFF3) == 0)) goto L_C2F6D94;
    v0_0 = (0xC8DFFAF);
    if ((((unsigned char)(*(signed char *)((v0_1 + 0x0))) & R5) == 0)) goto L_C2F6D70;
    v0_1 = *(signed char *)0xC8DFFAF;
    R0 = (v0_1);
    if ((v0_1 != 0)) goto L_C2F6D70;
    v0_1 = *(signed char *)0xC8DFF9E;
    R0 = (v0_1);
    if ((v0_1 != 0)) goto L_C2F6D70;
    v0_1 = FUN_0c2eeb4a(0xC8DFD5C);
    R0 = ((unsigned short)v0_1);
    if (((unsigned short)v0_1 == 0)) goto L_C2F6DAC;
    if (((*(signed char *)0xC8E001C) != 0)) goto L_C2F6DAC;
    (((struct o14_uchar *)0xC8DFF7C)->v) = 0xD;
    (((struct o15_uchar *)0xC8DFF7C)->v) = 0xE3;
    (((struct o18_uchar *)0xC8DFF7C)->v) = 0x0;
    (((struct o19_uchar *)0xC8DFF7C)->v) = 0x1;
    *(unsigned char *)((v0_0 + 0x0)) = 0x1;
    (((struct o0_uchar *)0xC8D6793)->v) = ((*(signed char *)0xC8D6793) & 0xFB);
    (((struct oC_uint *)0xC8DFF7C)->v) = (*(int *)0xC8D67BC);
    R0 = (0xC8D67BC);
    L_C2F6DAC:;
    return R0;
    L_C2F6D70:;
    if (((*(signed char *)((v0_0 + 0x0))) == 0)) goto L_C2F6DAC;
    v0_1 = (((struct o0_int *)0xC8DFF7C)->v);
    R0 = (v0_1);
    if (((unsigned int)((*(int *)0xC8D67BC) - ((((struct oC_int *)0xC8DFF7C)->v))) <= (unsigned int)v0_1)) goto L_C2F6DAC;
    v0_1 = FUN_0c2fbc4a(0x2);
    *(unsigned char *)((v0_0 + 0x0)) = 0x0;
    R0 = (v0_1);
    goto L_C2F6DAC;
    L_C2F6D94:;
    if ((((unsigned char)(*(signed char *)((v0_1 + 0x0))) & R5) == 0)) goto L_C2F6DAC;
    *(unsigned char *)((v0_1 + 0x0)) = ((*(signed char *)((v0_1 + 0x0))) & 0xFB);
    return FUN_0c2fbc4a(0x1);
}

int FUN_0c176e50(int a4)
{

    register int R0;
    register int R1;
    register int R2;
    register int R3;
    register int R4;
    register int R7;
    register int R9;
    register int R12;
    register int R13;
    register int T_;
    R4 = a4;
    R0 = (R4);
    if ((R4 != 8)) goto L_C176E60;
    R4 = (0x0);
    L_C176EF8:;
    return R4;
    L_C176E60:;
    if ((R0 != 16)) goto L_C176E70;
    R4 = (0x1);
    goto L_C176EF8;
    L_C176E70:;
    R0 = (R4);
    if ((R4 != 32)) goto L_C176EB0;
    R4 = (0x2);
    goto L_C176EF8;
    L_C176EB0:;
    if ((R0 != 64)) goto L_C176EC0;
    R4 = (0x3);
    goto L_C176EF8;
    L_C176EC0:;
    if ((R4 != 0x80)) goto L_C176ED0;
    R4 = (0x4);
    goto L_C176EF8;
    L_C176ED0:;
    if ((R4 != 0x100)) goto L_C176EE0;
    R4 = (0x5);
    goto L_C176EF8;
    L_C176EE0:;
    if ((R4 != 0x200)) goto L_C176EF0;
    R4 = (0x6);
    goto L_C176EF8;
    L_C176EF0:;
    if ((R4 != 0x400)) goto L_C176EF8;
    R4 = (0x7);
    goto L_C176EF8;
}

int nlSetWindowSize(float f4, float f5, float f6, float f7)
{
    int t0;
    register int t1;
    register float u0;
    register float u1;
    register float u2;

    u0 = f7;
    u1 = f5;
    if ((((((struct o4_short *)0xC8A6CAA)->v)) != 0) && (t0 = (((struct o0_short *)0xC8A6CAA)->v), t1 = (int)(((unsigned int)t0) >> 31), (int)(t0 << 1) <= (int)0x1E0)) {
        u0 = (f7 * (1.0f + 1.0f));
        u1 = (f5 * (1.0f + 1.0f));
    }
    (((struct o10_float *)0xC868A28)->v) = f4;
    (((struct o14_float *)0xC868A28)->v) = f5;
    (((struct o8_float *)0xC868A28)->v) = f6;
    (((struct oC_float *)0xC868A28)->v) = f7;
    (((struct o4_float *)0xC2A6148)->v) = u1;
    (((struct o3C_float *)0xC2A6108)->v) = u0;
    if (((((struct o4_short *)0xC8A6CAA)->v)) != 0) {
        (((struct o0_float *)0xC2A6148)->v) = (f4 * (1.0f + 1.0f));
        (((struct o38_float *)0xC2A6108)->v) = (f6 * (1.0f + 1.0f));
    } else {
        (((struct o0_float *)0xC2A6148)->v) = f4;
        (((struct o38_float *)0xC2A6108)->v) = f6;
    }
    (((struct o0_float *)0xC868A28)->v) = (((((struct o38_float *)0xC2A6108)->v)) * ((((struct o0_float *)0xC2A6108)->v)));
    u0 = (((struct o3C_float *)0xC2A6108)->v);
    u1 = (((struct o4_float *)0xC2A6108)->v);
    (((struct o4_float *)0xC868A28)->v) = (u0 * u1);
    u2 = (((struct o0_float *)0xC868A28)->v);
    if (u2 > (u0 * u1)) {
        (((struct o8_float *)0xC2A6108)->v) = u2;
    } else {
        (((struct o8_float *)0xC2A6108)->v) = (u0 * u1);
    }
    nlMakeProjConvMat(0xC8689A8);
    return nlSetPixelClipping(f4, f5, f6, f7);
}

int FUN_0c182a58(int a4, int a5, int a6, int a7)
{
    int stk[1];

    register int R1;
    register int R2;
    register int R3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    v0_3 = a4;
    v0_0 = a5;
    v0_1 = a6;
    v0_2 = a7;
    *(unsigned int *)(((int)stk + 0)) = v0_3;
    v0_3 = (0xC2A6294);
    if (((*(int *)0xC2A6294) != 0)) goto L_C182AF6;
    v0_4 = (0xC2A6298);
    v0_5 = (0xC2A6290);
    if ((v0_0 != 0)) goto L_C182A88;
    v0_6 = ((int (*)(int, int, int, int))(FUN_0c2b16a0))(0x4000, v0_0, v0_1, v0_2);
    *(unsigned int *)((v0_5 + 0x0)) = v0_6;
    if ((v0_6 == 0)) goto L_C182AAE;
    L_C182A90:;
    v0_5 = (((int (*)(int, int, int))(FUN_0c182a34))((*(int *)((v0_5 + 0x0))), v0_0, v0_1)) != 0;
    if (v0_5) goto L_C182AF2;
    if (((*(int *)(((int)stk + 0))) != 0)) goto L_C182AD4;
    v0_0 = ((int (*)(int, int, int, int))(FUN_0c2b16a0))(0x2D0, v0_0, v0_1, v0_2);
    *(unsigned int *)((v0_3 + 0x0)) = v0_0;
    if ((v0_0 != 0)) goto L_C182ADE;
    L_C182AAE:;
    v0_0 = (0xFFFFFFFE);
    L_C182AF8:;
    return v0_0;
    L_C182ADE:;
    memset((*(int *)((v0_3 + 0x0))), 0x0, 0x2D0);
    v0_0 = (FUN_0c1828fe((*(int *)((v0_3 + 0x0))))) == 0;
    if (v0_0) goto L_C182AF6;
    L_C182AF2:;
    v0_0 = (0xFFFFFFFF);
    goto L_C182AF8;
    L_C182AF6:;
    v0_0 = (0x0);
    goto L_C182AF8;
    L_C182AD4:;
    *(unsigned int *)((v0_3 + 0x0)) = (*(int *)(((int)stk + 0)));
    *(unsigned int *)((v0_4 + 0x0)) = ((*(int *)((v0_4 + 0x0))) | 0x2);
    goto L_C182ADE;
    L_C182A88:;
    *(unsigned int *)((v0_5 + 0x0)) = v0_0;
    *(unsigned int *)((v0_4 + 0x0)) = ((*(int *)((v0_4 + 0x0))) | 0x1);
    goto L_C182A90;
}

int FUN_0c18fdb0(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;

    *(unsigned int *)0xC8B5D94 = 0x0;
    t0 = *(int *)0xC8A9678;
    if (t0 != 0) {
        t1 = *(signed char *)((t0 + 0xC));
        *(unsigned char *)((t0 + 0xC)) = (t1 - 1);
        if ((unsigned char)(t1 - 1) == 0) {
            t2 = *(int *)((t0 + 0x10));
            t3 = (*(int *)((t0 + 0x14)));
            for (;;) {
                if (t3 == 0) {
                    break;
                }
                t4 = t3;
                t3 = (*(int *)((t3 + 0xC)));
                FUN_0c18df08(t4);
                FUN_0c18fd60(t4);
            }
            t3 = FUN_0c18fd88(t0);
            *(unsigned int *)0xC8A9678 = t2;
            t2 = t3;
        } else {
            t3 = *(int *)0xC8A9678;
            t4 = (unsigned char)(t1 - 1);
            t1 = t0;
            t5 = 0xC8A9678;
            t6 = t0;
            for (;;) {
                if (t6 == 0) {
                    break;
                }
                t4 = (*(signed char *)((t6 + 0xC)));
                if (t4 == 0) {
                    t0 = t6;
                    t6 = (*(int *)((t6 + 0x10)));
                    t7 = (*(int *)((t0 + 0x14)));
                    for (;;) {
                        if (t7 == 0) {
                            break;
                        }
                        t5 = t7;
                        t7 = (*(int *)((t7 + 0xC)));
                        t1 = t5;
                        t4 = (FUN_0c18df08(t1));
                        t1 = t5;
                        t4 = (FUN_0c18fd60(t1));
                    }
                    t1 = t0;
                    t4 = (FUN_0c18fd88(t1));
                    *(unsigned int *)((t3 + 0x10)) = t6;
                } else {
                    t6 = (*(int *)((t6 + 0x10)));
                }
            }
            t2 = t4;
        }
        t0 = t2;
    }
    return t0;
}

int FUN_0c2cef80(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    (((struct o1_uchar *)0xC8D6630)->v) = a5;
    (((struct o0_uchar *)0xC8D6630)->v) = a4;
    (((struct o0_uchar *)0xC8D6454)->v) = a4;
    t0 = *(signed char *)(((unsigned char)a4 + 0xC300218));
    if ((unsigned char)t0 == 0xFF) {
        (((struct o13_uchar *)0xC8D6454)->v) = ((*(signed char *)0xC8D6467) & 0xF3);
        t1 = 0x6;
    } else {
        if ((unsigned char)t0 == 0xFE) {
            if ((unsigned char)a4 != 51) {
                if ((unsigned char)a4 != 53) {
                    if ((unsigned char)a4 != 54) {
                        t2 = ((*(signed char *)0xC8D6467) & 0xF3);
                    } else {
                        t2 = ((*(signed char *)0xC8D6467) | 0xC);
                    }
                    t3 = t2;
                } else {
                    t3 = (((*(signed char *)0xC8D6467) & 0xFB) | 0x8);
                }
                t2 = t3;
            } else {
                t2 = (((*(signed char *)0xC8D6467) & 0xF7) | 0x4);
            }
            (((struct o13_uchar *)0xC8D6454)->v) = t2;
            t2 = 0x6;
        } else {
            (((struct o13_uchar *)0xC8D6454)->v) = ((*(signed char *)0xC8D6467) & 0xF3);
            t2 = t0;
        }
        t1 = t2;
    }
    t0 = *(signed char *)0xC8D6457;
    t2 = ((t1 | (t0 & 0xC1)) | 0x20);
    if ((unsigned char)a5 == 13) {
    } else {
        t3 = ((t1 | (t0 & 0xC1)) | 0x30);
        if ((unsigned char)a5 == 40) {
        } else {
            t3 = (t1 | (t0 & 0xC1));
            if ((unsigned char)a5 != 12) {
                t3 = ((t1 | (t0 & 0xC1)) | 0x10);
            }
        }
        t2 = t3;
    }
    (((struct o3_uchar *)0xC8D6454)->v) = t2;
    return (unsigned char)a5;
}

int FUN_0c19a91c(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;
    register int t10;
    register int t11;
    register int t12;
    register int t13;

    t1 = *(int *)0xC8A73C0;
    t2 = (((struct o13A_short *)(((a4 * 0x174) + t1)))->v);
    if ((unsigned short)t2 != 1) {
        if (((unsigned short)t2 != 3) && (((unsigned short)t2 != 0) && ((unsigned short)t2 != 2))) {
            if ((unsigned short)t2 != 4) {
                if ((unsigned short)t2 != 5) {
                } else {
                    (((struct o13A_ushort *)(((a4 * 0x174) + t1)))->v) = 0x8;
                }
            } else {
                (((struct o13A_ushort *)(((a4 * 0x174) + t1)))->v) = 0x6;
            }
            FUN_0c1904d8(((a4 * 0x174) + t1));
        } else {
            (((struct o13A_ushort *)(((a4 * 0x174) + t1)))->v) = 0x0;
            FUN_0c1901e4(((a4 * 0x174) + t1));
        }
    } else {
        t3 = *(signed char *)0xC8A738C;
        t4 = (unsigned short)t2;
        t2 = 0x174;
        t5 = 0xC8A738C;
        t6 = 0xC8A73C0;
        t7 = a4;
        t8 = t1;
        t9 = t1;
        for (;;) {
            if ((unsigned int)t9 >= (unsigned int)(((unsigned short)(unsigned char)t3 * (unsigned short)0x174) + t1)) {
                break;
            }
            t4 = 0x138;
            t5 = (*(short *)((t9 + t4)));
            if ((t5 != 0) && (t4 = 0x13C, t0 = *(short *)((t9 + t4)), t6 = t0, t6 = (unsigned short)t6, (unsigned short)a4 == t6)) {
                t4 = 0x13F;
                t6 = 0x80;
                t5 = (*(signed char *)((t9 + t4)));
                t5 = (t5 | t6);
                *(unsigned char *)((t9 + t4)) = t5;
                t7 = t9;
                t4 = (FUN_0c1901e4(t7));
            } else {
                t10 = t2;
                t11 = t5;
                t12 = t7;
                t13 = t8;
            }
            t2 = t10;
            t5 = t11;
            t6 = 0x174;
            t7 = t12;
            t8 = t13;
            t9 = (t9 + t6);
        }
        (((struct o13A_ushort *)(((a4 * 0x174) + t1)))->v) = 0x0;
        FUN_0c1901e4(((a4 * 0x174) + t1));
    }
    return 0x0;
}

int FUN_0c2b477a(int a4, int a5, int a6)
{
    int t0;

    t0 = *(signed char *)((a4 + 0x1));
    if ((t0 != 3) && (t0 != 4)) {
        if ((*(signed char *)((a4 + 0x1))) == 5) {
            *(unsigned int *)((a5 + 0x0)) = (FUN_0c2c38da((*(int *)((a4 + 0x4)))));
            *(unsigned int *)((a6 + 0x0)) = (FUN_0c2c389e((*(int *)((a4 + 0x4)))));
            *(unsigned int *)((a5 + 0x0)) = ((*(int *)((a5 + 0x0))) * ((int)((int)0x10 / (int)(FUN_0c2c38b6((*(int *)((a4 + 0x4))))))));
        } else {
            *(unsigned int *)((a5 + 0x0)) = 0x0;
            *(unsigned int *)((a6 + 0x0)) = 0x1;
        }
    } else {
        thunk_FUN_0c2c5924((*(int *)((a4 + 0xC))), a5, a6);
    }
    *(unsigned int *)((a5 + 0x0)) = ((*(int *)((a5 + 0x0))) + ((((struct o88_int *)(a4))->v)));
    return 0x88;
}

int FUN_0c2d7f20(int a4)
{
    int stk[8];
    register int t34;
    register int t2;
    register int t8;
    register int t14;
    register int t15;
    register int t16;
    register int t19;

    *(unsigned int *)(((((int)stk + 0) + 0xC) + 0x4)) = (((int)stk + 0) + 0xC);
    *(unsigned char *)(((((int)stk + 0) + 0xC) + 0x0)) = 0x0;
    t34 = 0x50;
    if ((*(signed char *)(((*(int *)((a4 + 0xC))) + 0x50))) != 0) {
        t2 = *(int *)((a4 + 0xC));
        *(unsigned int *)(((int)stk + 0)) = t2;
        FUN_0c187a88(0xC8D30F8, ((*(int *)(((int)stk + 0))) + 0x51), (unsigned char)(*(signed char *)((t2 + 0x50))));
        *(unsigned int *)(((int)stk + 4)) = 0xC8D30F8;
        *(unsigned int *)(((int)stk + 8)) = (unsigned char)(*(signed char *)(((*(int *)((a4 + 0xC))) + 0x50)));
        t8 = FUN_0c2b9b0c((((int)stk + 0) + 0x4));
        if ((*(int *)((t8 + 0x0))) != (unsigned char)(*(signed char *)(((*(int *)((a4 + 0xC))) + 0x50)))) {
            if ((*(int *)((t8 + 0x0))) != 0) {
                t14 = *(int *)((a4 + 0xC));
                t15 = *(signed char *)((t14 + 0x50));
                t16 = *(int *)((t8 + 0x0));
                *(unsigned int *)(((int)stk + 0)) = t16;
                FUN_0c187a88((t14 + 0x51), ((t14 + 0x51) + t16), ((unsigned char)t15 - t16));
                t19 = *(int *)((a4 + 0xC));
                (((struct o50_uchar *)(t19))->v) = ((*(signed char *)((t19 + 0x50))) - (*(int *)((t8 + 0x0))));
            }
            t34 = 0x50;
        } else {
            *(unsigned char *)(((((int)stk + 0) + 0xC) + 0x0)) = ((*(signed char *)(((((int)stk + 0) + 0xC) + 0x0))) | 0x10);
            t34 = (FUN_0c2d8590(a4, (((int)stk + 0) + 0xC)));
        }
    }
    return t34;
}

int kdSetDriverMode(int a4, int a5)
{
    if (a4 != 1) {
        if (a4 != 2) {
            if (a4 != 4) {
                if (a4 != 3) {
                    if (a4 != 6) {
                        if (a4 != 5) {
                            if (a4 != 0) {
                                if (a4 != 7) {
                                    if (a4 != 8) {
                                        if (a4 != 9) {
                                            return 0xFFFFFFFF;
                                        }
                                        FUN_0c2d9fb8(a5);
                                        return 0x0;
                                    }
                                    FUN_0c2d9f7e(a5);
                                    return 0x0;
                                }
                                FUN_0c2d9f6a(a5);
                                return 0x0;
                            }
                            mpdrv_optimize(a5);
                            return 0x0;
                        }
                        mpdrv_swapmode(a5);
                        return 0x0;
                    }
                    FUN_0c2d9f1e(a5);
                    return 0x0;
                }
                FUN_0c2d9ef2(a5);
                return 0x0;
            }
            FUN_0c2d9f32(a5);
            return 0x0;
        }
        mpdrv_timeout(a5);
        return 0x0;
    }
    FUN_0c2d9ede(a5);
    return 0x0;
}
