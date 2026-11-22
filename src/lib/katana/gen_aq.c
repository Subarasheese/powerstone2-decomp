/* Straight-line functions with calls and guards (batch gen_aq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[2]; } Stk2;
struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o0_ushort { unsigned short v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_float { char p[0x10]; float v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o10E8_int { char p[0x10E8]; int v; };
struct o14_float { char p[0x14]; float v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1C_int { char p[0x1C]; int v; };
struct o1C_uchar { char p[0x1C]; unsigned char v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o20_int { char p[0x20]; int v; };
struct o20_uchar { char p[0x20]; unsigned char v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o230_uint { char p[0x230]; unsigned int v; };
struct o234_uint { char p[0x234]; unsigned int v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o2C_uint { char p[0x2C]; unsigned int v; };
struct o2F_uchar { char p[0x2F]; unsigned char v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o30_uint { char p[0x30]; unsigned int v; };
struct o33_uchar { char p[0x33]; unsigned char v; };
struct o34_uint { char p[0x34]; unsigned int v; };
struct o38_uint { char p[0x38]; unsigned int v; };
struct o3C_uint { char p[0x3C]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_uint { char p[0x40]; unsigned int v; };
struct o43_uchar { char p[0x43]; unsigned char v; };
struct o44_uchar { char p[0x44]; unsigned char v; };
struct o44_uint { char p[0x44]; unsigned int v; };
struct o48_uchar { char p[0x48]; unsigned char v; };
struct o58_uchar { char p[0x58]; unsigned char v; };
struct o59_uchar { char p[0x59]; unsigned char v; };
struct o610_uint { char p[0x610]; unsigned int v; };
struct o614_uint { char p[0x614]; unsigned int v; };
struct o7_uchar { char p[0x7]; unsigned char v; };
struct o74_short { char p[0x74]; short v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o814_uint { char p[0x814]; unsigned int v; };
struct o88_uint { char p[0x88]; unsigned int v; };
struct o8C_uint { char p[0x8C]; unsigned int v; };
struct o90_int { char p[0x90]; int v; };
struct o90_uint { char p[0x90]; unsigned int v; };
struct o98_int { char p[0x98]; int v; };
struct o98_uint { char p[0x98]; unsigned int v; };
struct oC_float { char p[0xC]; float v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oC18_uint { char p[0xC18]; unsigned int v; };
struct oC1C_uint { char p[0xC1C]; unsigned int v; };
struct oC20_uint { char p[0xC20]; unsigned int v; };
struct oE_uchar { char p[0xE]; unsigned char v; };
int DECtoBCD(int);
int FUN_0c1045b4(int);
int FUN_0c17fe3c(void);
int FUN_0c17feb6(int, int, int);
int FUN_0c17ff38(int, int, int);
int FUN_0c18004c(int, int, int, int);
int FUN_0c184000(int, int, int);
int FUN_0c184e2a(void);
int FUN_0c1855b4(int);
int FUN_0c187a88(int, int, int);
int FUN_0c18d498(int);
int FUN_0c18f9a8(int, int, int, int, int, int);
int FUN_0c18fbde(int, int, int, int);
int FUN_0c18fc48(int, int, int);
int FUN_0c191d9e(void);
int FUN_0c191dae(void);
int FUN_0c19274e(int, int, int, int);
int FUN_0c19a2e4(void);
int FUN_0c19a448(int, int, int, int);
int FUN_0c19a76a(int, int, int);
int FUN_0c19a7b2(int, int, int, int, int, int, int);
int FUN_0c19a8ce(int);
int FUN_0c19d9ac(int, int, int, int);
int FUN_0c19d9f6(int);
int FUN_0c19ed24(int, int, int, int, int);
int FUN_0c19fad6(int, int, int);
int FUN_0c1a027c(int);
int FUN_0c1a2184(int);
int FUN_0c1a3198(int, int, int);
int FUN_0c2aeb3c(int);
int FUN_0c2aeb54(int);
int FUN_0c2b9b54(int);
int FUN_0c2bc7e4(void);
int FUN_0c2c0ffe(int);
int FUN_0c2c6030(void);
int FUN_0c2c6048(int, int);
int FUN_0c2c6304(void);
int FUN_0c2c631c(int, int);
int FUN_0c2cc2c2(void);
int FUN_0c2cf040(int);
int FUN_0c2cf7e0(void);
int FUN_0c2cfb46(int);
int FUN_0c2d328c(int, int);
int FUN_0c2d487c(int, int, int);
int FUN_0c2d4ad2(void);
int FUN_0c2d65ae(int);
int FUN_0c2dc160(int);
int FUN_0c2dc178(int);
int FUN_0c2dc1ae(int, ...);
int FUN_0c2e55bc(void);
int FUN_0c2e6978(void);
int FUN_0c2e715e(int);
int FUN_0c2e8268(void);
int FUN_0c2ebf28(void);
int FUN_0c2ec410(int, int);
int FUN_0c2ec430(int);
int FUN_0c2ee4ba(int);
int FUN_0c2ef3c8(void);
int FUN_0c2f4a04(float, float, float, float, float, float, float);
int FUN_0c2f4ca2(void);
int FUN_0c2f4cd4(void);
int FUN_0c2f4d3a(float, float, float, float, float, float, float);
int FUN_0c2f4ef0(void);
int FUN_0c2f4f20(void);
int FUN_0c2f4f96(void);
int FUN_0c2f4fb0(void);
int FUN_0c2f5750(void);
int FUN_0c2f57f0(void);
int FUN_0c2f57f4(void);
int FUN_0c2f58e0(void);
int FUN_0c2f5990(void);
int FUN_0c2f5a22(void);
extern int _builtin_get_imask(void);
extern void _builtin_ld_ext(float (*)[4]);
extern void _builtin_prefetch(void *);
extern void _builtin_set_imask(int);
extern float _builtin_sqrtf(float);
extern void _builtin_st_ext(float (*)[4]);
extern int _builtin_tas(char *);
int _pow5(int, int);
float acosf(float);
int fmMngReadData(int);
int fmMngWriteData(int, int, int, int);
int kdSetCallback(int, int, int);
int kmCreateTextureSurface(int, int, int, int);
int kmLoadTexture(int, int);
int kmProcessVertexRenderState(int, int, int, int);
int kmSetVertexRenderState(int, int);
int kmiRegisterPhIntHandler(int);
int kmyMoveParameterBoundary(int, int, int);
int kmyRequestCallback(int);
int memset(int, int, int);
int mpdrv_check_port(int);
int mpdrv_dpf(int, int, int, int, int);
int mpdrv_make_devicedata(int, int);
int mpdrv_set_bwrite_ns(int, int, int, int, int, int, int);
int mpdrv_set_dreset_ns(int);
int mwRnaAdjustBuf(int);
int mwRnaGetPlaySw(int);
int mwRnaGetTransSw(int);
int mwRnaSetPlaySw(int, int);
int mwlRnaAddRdPos(int);
int mwlRnaWaitTransEnd(int);
int nlCalcPoint44(int, int);
int nlPopMatrix(int);
int nlPrintInitFontTexture(void);
int nlsndG2Read(int);
int nlsndG2Write(int, int);
int nlsndG2WriteN(int, int, int);
int nlsnd_PL_WaitAica1(void);
int nlsnd_PL_WaitAica2andGo(void);
int nlsnd_PL_WaitRequest(void);
int ovGetLibTbl(int);
int ovSearchLib(int);
int read_fat(int);
int syTmrCountToMicro(int);
int syTmrGetCount(void);
int thunk_FUN_0c1831d0(void);
int thunk_FUN_0c191de2(void);
int thunk_FUN_0c2efc2c(void);
int vmsfs_isformat(int);
int FUN_0c184ee8(int a4, int a5, int a6);
int FUN_0c185600(int a4, int a5, int a6, int a7);
int ovLibDeleteTbl(int a4);
int set_vmstime(int a4, int a5);
int ADXSTMF_Create(int a4, int a5, int a6, int a7);
int SJRBF_IsGetChunk(int a4, int a5, int a6, int a7);
int FUN_0c2d32ea(int a4, int a5);
int FUN_0c2d3e10(void);
int FUN_0c2eeb84(int a4, int a5);
int nlInitPrint(void);
int nlPushMatrix(int a4);
int FUN_0c184fd0(int a4, int a5);
int FUN_0c1856f0(int a4);
int FUN_0c18ca92(int a4);
int FUN_0c19ee48(int a4, int a5, int a6);
int FUN_0c1a3a0c(int a4, int a5, int a6);
int kdSetBlockWriteEx(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11);
int check_cache(int a4);
float ADX_GetCoefficient(int a4, int a5, int a6, int a7);
int kmiFLWCTRLITPOverflowCallback(void);
int FUN_0c2eda34(void);
int FUN_0c191c60(int a4);
int FUN_0c1926cc(int a4);
int FUN_0c2b9a50(int a4, int a5, int a6, int a7);
int fmMngExecServer(int a4, int a5, int a6, int a7);
int kmyiInitializeInterrupt(int a4);
int FUN_0c2cfd24(Stk2 s);
int mpdrv_frame_recv_main(int a4);
int FUN_0c2e717e(int a4);
int FUN_0c2e77bc(void);
int FUN_0c2ef8b4(void);
void FUN_0c2f4790(float f4, float f5, float f6, float f7, float f8, float f9, float f10);
int FUN_0c1803fc(int a4, int a5);
void FUN_0c183978(int a4, int a5, int a6, int a7);
void FUN_0c1838c6(int a4, int a5, int a6, int a7);
int FUN_0c1946a8(int a4);
int SJMEM_UngetChunk(int a4, int a5, int a6, int a7);
int FUN_0c2d6bb8(void);
int FUN_0c2d7806(int a4);
int FUN_0c2e3d4a(int a4);
int nl_texture_slot_alloc(void);
int nlProjectScreen(int a4, int a5);
int FUN_0c192e04(int a4, int a5, int a6, int a7);
int FUN_0c19d470(int a4);
int FUN_0c2bd1ec(int a4, int a5, int a6, int a7);
int mwRnaPause(int a4);
int FUN_0c2d15f4(int a4);
int FUN_0c2e7e3e(void);
int FUN_0c180d72(int a4);
int nlstripSetVertexContext(int a4, int a5, int a6, int a7);
int FUN_0c18f92c(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12);
int FUN_0c1937ca(int a4);
int FUN_0c1a357c(int a4, int a5, int a6);
int FUN_0c177d10(int a4);
int nlsndPackLoadLockBG(int a4, int a5, int a6, int a7);
int FUN_0c18cd6e(int a4);
int FUN_0c2d683c(int a4);

int FUN_0c184ee8(int a4, int a5, int a6)
{
    int stk[10];
    int t4;
    register int t5;

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned short *)(((int)stk + 0)) = a5;
    *(unsigned short *)(((int)stk + 8)) = a6;
    memset((((int)stk + 0) + 0xC), 0x0, 0x1C);
    *(unsigned int *)(((int)stk + 12)) = (*(int *)(((int)stk + 4)));
    *(unsigned short *)(((int)stk + 16)) = (*(short *)(((int)stk + 0)));
    *(unsigned short *)(((int)stk + 18)) = (*(short *)(((int)stk + 8)));
    *(unsigned int *)(((int)stk + 36)) = 0xC184E74;
    t4 = FUN_0c18d498((((int)stk + 0) + 0xC));
    if ((0x8000 & t4) == 0) {
        t5 = FUN_0c184e2a();
        if (t5 == -1) {
            return 0xFFFFFFFF;
        }
        *(unsigned short *)((((short)((short)t5 * (short)0xC24) + 0xC89C310) + 0x2)) = t4;
        *(unsigned int *)((((short)((short)t5 * (short)0xC24) + 0xC89C310) + 0x4)) = 0x0;
        *(unsigned int *)((((short)((short)t5 * (short)0xC24) + 0xC89C310) + 0x8)) = (*(int *)(((int)stk + 4)));
        *(unsigned short *)((((short)((short)t5 * (short)0xC24) + 0xC89C310) + 0xC)) = (*(short *)(((int)stk + 0)));
        (((struct o814_uint *)(((short)((short)t5 * (short)0xC24) + 0xC89C310)))->v) = 0x0;
        (((struct oC18_uint *)(((short)((short)t5 * (short)0xC24) + 0xC89C310)))->v) = 0x0;
        (((struct oC1C_uint *)(((short)((short)t5 * (short)0xC24) + 0xC89C310)))->v) = 0x0;
        (((struct oC20_uint *)(((short)((short)t5 * (short)0xC24) + 0xC89C310)))->v) = (*(int *)0xC8A2C3C);
        return t5;
    }
    return 0xFFFFFFFF;
}

int FUN_0c185600(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = 0xC2A62F8;
    if ((*(short *)0xC2A62F8) != 0) {
        t1 = 0x0;
        t2 = 0xC8A2C60;
        for (;;) {
            FUN_0c1855b4(t2);
            t1 = (t1 + 0x1);
            t2 = (t2 + 0x34);
            if ((int)(short)t1 >= (int)0xA) {
                break;
            }
        }
        t1 = 0xC8B1AA0;
        t2 = 0x0;
        for (;;) {
            t2 = (t2 + 0x1);
            *(unsigned short *)((t1 + 0x0)) = 0x0;
            *(unsigned short *)((t1 + 0x2)) = 0xFFFFFFFF;
            (((struct o610_uint *)(t1))->v) = 0x0;
            (((struct o614_uint *)(t1))->v) = 0x0;
            t1 = (t1 + 0x618);
            if ((int)(short)t2 >= (int)0xA) {
                break;
            }
        }
        (((struct o0_uint *)0xC8B5790)->v) = 0x0;
        (((struct o4_uint *)0xC8B5790)->v) = 0x0;
        *(unsigned short *)0xC2A62F8 = 0x0;
        t0 = 0xC8B5794;
    }
    t1 = t0;
    t0 = 0x0;
    for (;;) {
        if ((*(short *)((0xC8A2C60 + (short)((short)t0 * (short)0x34)))) == -1) {
            break;
        }
        t0 = (t0 + 0x1);
        t1 = (short)t0;
        if ((int)t1 >= (int)0xA) {
            return 0xFFFFFFFF;
        }
    }
    return t0;
}

int ovLibDeleteTbl(int a4)
{
    int stk[3];
    register int t1;
    register int t22;
    register int t4;
    register int t6;
    register int t7;
    register int t8;
    register int t10;
    register int t12;
    register int t14;
    register int t5;
    register int t9;
    register int t11;

    *(unsigned int *)(((int)stk + 8)) = a4;
    FUN_0c2aeb3c(((int)stk + 0));
    t1 = ovGetLibTbl((((int)stk + 0) + 0x4));
    t8 = ovSearchLib((*(int *)(((int)stk + 8))));
    t22 = 0xFFFFFFFE;
    if ((int)t8 >= 0) {
        t4 = *(int *)((t1 + 0x0));
        *(unsigned int *)((t1 + 0x0)) = (t4 - 1);
        t6 = (t4 - 1);
        t7 = t8;
        t10 = t9;
        t12 = t11;
        for (;;) {
            if ((int)t7 >= (int)(*(int *)((t1 + 0x0)))) {
                break;
            }
            t10 = t7;
            t10 = (t10 + 0x1);
            t12 = t1;
            t10 = (t10 << 2);
            t12 = (t12 + 0x8);
            t8 = t7;
            t8 = (t8 << 2);
            t6 = t12;
            t14 = t12;
            t12 = t1;
            t8 = (t8 << 1);
            t10 = (t10 << 1);
            t5 = (*(int *)(((t14 + t10) + 0x0)));
            t12 = (t12 + 0x8);
            t6 = (t6 + t8);
            t10 = (t10 + t12);
            *(unsigned int *)((t6 + 0x0)) = t5;
            t6 = (*(int *)((t10 + 0x4)));
            t8 = (t8 + t12);
            t7 = (t7 + 0x1);
            *(unsigned int *)((t8 + 0x4)) = t6;
        }
        *(unsigned int *)((((t1 + 0x8) + ((t7 << 2) << 1)) + 0x0)) = 0x0;
        *(unsigned int *)(((((t7 << 2) << 1) + (t1 + 0x8)) + 0x4)) = 0x0;
        t22 = 0x0;
    }
    FUN_0c2aeb54(((int)stk + 0));
    return t22;
}

int set_vmstime(int a4, int a5)
{
    register int t16;

    *(unsigned char *)((a4 + 0x0)) = (DECtoBCD(((int)((int)(unsigned short)(*(short *)((a5 + 0x0))) / (int)0x64))));
    *(unsigned char *)(((a4 + 0x1) + 0x0)) = (DECtoBCD(((int)((int)(unsigned short)(*(short *)((a5 + 0x0))) % (int)0x64))));
    *(unsigned char *)((((a4 + 0x1) + 0x1) + 0x0)) = (DECtoBCD((unsigned char)(*(signed char *)((a5 + 0x2)))));
    *(unsigned char *)(((((a4 + 0x1) + 0x1) + 0x1) + 0x0)) = (DECtoBCD((unsigned char)(*(signed char *)((a5 + 0x3)))));
    *(unsigned char *)((((((a4 + 0x1) + 0x1) + 0x1) + 0x1) + 0x0)) = (DECtoBCD((unsigned char)(*(signed char *)((a5 + 0x4)))));
    *(unsigned char *)(((((((a4 + 0x1) + 0x1) + 0x1) + 0x1) + 0x1) + 0x0)) = (DECtoBCD((unsigned char)(*(signed char *)((a5 + 0x5)))));
    *(unsigned char *)((((((((a4 + 0x1) + 0x1) + 0x1) + 0x1) + 0x1) + 0x1) + 0x0)) = (DECtoBCD((unsigned char)(*(signed char *)((a5 + 0x6)))));
    t16 = *(signed char *)((a5 + 0x7));
    *(unsigned char *)(((((((((a4 + 0x1) + 0x1) + 0x1) + 0x1) + 0x1) + 0x1) + 0x1) + 0x0)) = (*(signed char *)((0xC2FFC38 + ((unsigned char)t16 & 0x7))));
    return ((unsigned char)t16 & 0x7);
}

int ADXSTMF_Create(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = 0x0;
    for (;;) {
        if ((*(signed char *)((((t0 * 0x64) + 0xC8CB0C4) + 0x0))) != 0) {
            t0 = (t0 + 0x1);
            if ((int)t0 >= (int)0x20) {
                break;
            }
            continue;
        }
        break;
    }
    if (t0 == 32) {
        t1 = 0x0;
    } else {
        *(unsigned char *)((((t0 * 0x64) + 0xC8CB0C4) + 0x1)) = 0x1;
        *(unsigned char *)((((t0 * 0x64) + 0xC8CB0C4) + 0x2)) = 0x0;
        *(unsigned int *)((((t0 * 0x64) + 0xC8CB0C4) + 0x4)) = a7;
        *(unsigned int *)((((t0 * 0x64) + 0xC8CB0C4) + 0x8)) = a4;
        *(unsigned int *)((((t0 * 0x64) + 0xC8CB0C4) + 0xC)) = 0x0;
        *(unsigned int *)((((t0 * 0x64) + 0xC8CB0C4) + 0x10)) = a5;
        *(unsigned int *)((((t0 * 0x64) + 0xC8CB0C4) + 0x14)) = a6;
        *(unsigned int *)((((t0 * 0x64) + 0xC8CB0C4) + 0x2C)) = 0x20;
        t2 = *(int *)((((t0 * 0x64) + 0xC8CB0C4) + 0x14));
        t3 = (t2 + 0x7FF);
        if ((int)(t2 + 0x7FF) < 0) {
            t3 = ((t2 + 0x7FF) + 0x7FF);
        }
        *(unsigned int *)((((t0 * 0x64) + 0xC8CB0C4) + 0x30)) = ((int)t3 >> 11);
        *(unsigned char *)((((t0 * 0x64) + 0xC8CB0C4) + 0x0)) = 0x1;
        t2 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)((a7 + 0x0))) + 0x24)))))(a7, 0x0, a6, 0x1);
        *(unsigned int *)((((t0 * 0x64) + 0xC8CB0C4) + 0x18)) = t2;
        *(unsigned int *)((((t0 * 0x64) + 0xC8CB0C4) + 0x1C)) = t2;
        t1 = ((t0 * 0x64) + 0xC8CB0C4);
    }
    return t1;
}

int SJRBF_IsGetChunk(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;

    t0 = FUN_0c2c6304();
    if (a5 == 0) {
        t1 = *(int *)((a4 + 0x20));
        t2 = *(int *)((a4 + 0x14));
        t3 = *(int *)((a4 + 0x24));
        t4 = *(int *)((a4 + 0x10));
        t5 = ((t1 - t2) + t3);
        if ((int)t4 < (int)((t1 - t2) + t3)) {
            t5 = t4;
        }
        t1 = a6;
        if ((int)t5 < (int)a6) {
            t1 = t5;
        }
        t2 = t1;
    } else {
        if (a5 == 1) {
            t1 = *(int *)((a4 + 0x20));
            t3 = *(int *)((a4 + 0x18));
            t4 = *(int *)((a4 + 0x24));
            t5 = *(int *)((a4 + 0xC));
            t6 = ((t1 - t3) + t4);
            if ((int)t5 < (int)((t1 - t3) + t4)) {
                t6 = t5;
            }
            t1 = a6;
            if ((int)t6 < (int)a6) {
                t1 = t6;
            }
            t3 = t1;
        } else {
            if ((*(int *)((a4 + 0x28))) != 0) {
                t1 = ((int (*)(int, int, int, int))((*(int *)((a4 + 0x28)))))((*(int *)((a4 + 0x2C))), 0xFFFFFFFD, a6, a7);
            }
            t3 = 0x0;
        }
        t2 = t3;
    }
    *(unsigned int *)((a7 + 0x0)) = t2;
    FUN_0c2c631c(a4, t0);
    return (((t2 == a6)) ? 1 : 0);
}

int FUN_0c2d32ea(int a4, int a5)
{
    register int t0;
    register int t31;
    register int t32;
    int t33;

    t0 = (((struct o0_int *)0xC8D25F0)->v);
    if (((*(signed char *)(((t0 + 0x1C) + 0x0))) & 32) != 0) {
        if (((*(signed char *)(((t0 + 0x3C) + 0x0))) & 64) == 0) {
            return 0x0;
        }
        return 0x1;
    }
    if (((*(signed char *)(((t0 + 0x3C) + 0x0))) & 128) != 0) {
        if (((unsigned char)(*(signed char *)((t0 + 0x48))) != 112) && ((t31 = *(signed char *)((t0 + 0x48)), (unsigned char)t31 != 0xAF) && ((t32 = *(signed char *)((t0 + 0x48)), (unsigned char)t32 != 0xC0) && (t33 = *(signed char *)((t0 + 0x48)), (unsigned char)t33 != 64)))) {
            if (((*(signed char *)(((t0 + 0x3C) + 0x0))) & 64) != 0) {
                if (((*(signed char *)0xC8D25F7) & 2) != 0) {
                    (((struct o7_uchar *)0xC8D25F0)->v) = ((*(signed char *)0xC8D25F7) | 0x1);
                }
                return 0x1;
            }
            FUN_0c2d328c(t0, a5);
            return 0x0;
        }
        return 0x0;
    }
    FUN_0c2d328c(t0, a5);
    return 0x0;
}

int FUN_0c2d3e10(void)
{
    register int t0;
    register int t1;
    register int t2;

    t1 = *(int *)0xC8D25F0;
    (((struct o1C_uchar *)(t1))->v) = ((*(signed char *)(((t1 + 0x1C) + 0x0))) & 0xDF);
    FUN_0c2ec410(0xC8D2698, 0x32);
    for (;;) {
        if (((*(signed char *)((((*(int *)0xC8D25F0) + 0x3C) + 0x0))) & 4) == 0) {
            t1 = *(signed char *)((((*(int *)0xC8D25F0) + 0x20) + 0x0));
            t2 = *(int *)0xC8D25F0;
            (((struct o20_uchar *)(t2))->v) = ((*(signed char *)(((t2 + 0x20) + 0x0))) & 0xFE);
            *(volatile signed char *)0xC8D2627;
            *(volatile int *)0xC8D25F0;
            FUN_0c1a2184((t1 & 0x1));
            *(volatile int *)0xC8D25F0;
            return (FUN_0c1a2184(t0));
        }
        t1 = FUN_0c2ec430((*(int *)0xC8D2698));
        if ((signed char)t1 != 0) {
            break;
        }
    }
    return (FUN_0c2d65ae(0x50A));
}

int FUN_0c2eeb84(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    if ((unsigned char)a5 == 0) {
        FUN_0c2ec410(0xC8D7064, (unsigned short)a4);
        *(unsigned char *)0xC8D7062 = 0x0;
    } else {
        t0 = 0x0;
        t1 = 0x0;
        t2 = 0x0;
        for (;;) {
            t3 = *(signed char *)0xC8D716B;
            if ((*(short *)((((0x11C + ((short)((short)(unsigned char)t3 * (short)0x124) + 0xC8D7A9E)) + t0) + 0x0))) == 0) {
                break;
            }
            t2 = (t2 + 0x1);
            t1 = (t1 + 0x2);
            t0 = (t0 + 0x2);
            if ((int)(unsigned char)t2 > (int)0x3) {
                return 0x0;
            }
        }
        *(unsigned short *)(((t1 + (0x11C + ((short)((short)(unsigned char)t3 * (short)0x124) + 0xC8D7A9E))) + 0x0)) = a4;
        t0 = FUN_0c2ef3c8();
        if ((unsigned short)t0 == 8) {
            t0 = *(signed char *)0xC8D716B;
            *(unsigned char *)((((short)((short)(unsigned char)t0 * (short)0x124) + 0xC8D7A9E) + 0x0)) = ((*(signed char *)((((short)((short)(unsigned char)t0 * (short)0x124) + 0xC8D7A9E) + 0x0))) | 0x4);
        }
    }
    return 0x1;
}

int nlInitPrint(void)
{
    int stk[1];
    register int t1;
    register int t4;
    register float u6;

    (((struct o4_uint *)0xC8684D0)->v) = 0x0;
    (((struct o8_uint *)0xC8684D0)->v) = 0x0;
    (((struct o14_uint *)0xC8684D0)->v) = 0x0;
    (((struct o4_uint *)0xC868518)->v) = 0xFFFFFFFF;
    (((struct o0_ushort *)0xC868518)->v) = 0x8;
    (((struct oC_uint *)0xC8684D0)->v) = 0x8;
    (((struct o10_uint *)0xC8684D0)->v) = 0x8;
    (((struct o0_uint *)0xC8684D0)->v) = 0x0;
    (((struct o8_float *)0xC868518)->v) = 0.0f;
    (((struct oC_float *)0xC868518)->v) = 1.0f;
    (((struct o10_float *)0xC868518)->v) = (*(float *)0xC17A124);
    t1 = 0x0;
    for (;;) {
        t4 = (t1 << 1);
        u6 = (float)t1;
        t1 = (t1 + 0x1);
        *(float *)(((int)stk + 0)) = (u6 * ((((struct o10_float *)0xC868518)->v)));
        *(unsigned short *)(((t4 + 0xC868564) + 0x0)) = (*(short *)((((int)stk + 0) + 0x2)));
        if ((int)t1 >= (int)0x101) {
            break;
        }
    }
    kmCreateTextureSurface(0xC868544, 0x8, 0x400, 0x902);
    kmLoadTexture(0xC868544, (*(int *)0xC2A60C4));
    return (nlPrintInitFontTexture());
}

int nlPushMatrix(int a4)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;
    register float u3;
    register float u5;
    register float u6;
    register float u7;
    register float u8;
    register float u9;
    register float u10;
    register float u11;
    register float u12;
    register float u13;
    register float u14;
    register float u15;
    register float u16;
    register float u17;
    float u2[16];
    float u4[16];
    float u21[16];
    float u38[16];

    t0 = (((struct o8_int *)0xC868774)->v);
    t1 = (((struct o0_int *)0xC868774)->v);
    _builtin_st_ext((float (*)[4])u2);
    *(float *)((((t0 + 0x40) - 0x8) + 0x0)) = u2[14];
    *(float *)(((((t0 + 0x40) - 0x8) + 0x0) + 4)) = u2[15];
    *(float *)(((((t0 + 0x40) - 0x8) - 0x8) + 0x0)) = u2[12];
    *(float *)((((((t0 + 0x40) - 0x8) - 0x8) + 0x0) + 4)) = u2[13];
    *(float *)((((((t0 + 0x40) - 0x8) - 0x8) - 0x8) + 0x0)) = u2[10];
    *(float *)(((((((t0 + 0x40) - 0x8) - 0x8) - 0x8) + 0x0) + 4)) = u2[11];
    *(float *)(((((((t0 + 0x40) - 0x8) - 0x8) - 0x8) - 0x8) + 0x0)) = u2[8];
    *(float *)((((((((t0 + 0x40) - 0x8) - 0x8) - 0x8) - 0x8) + 0x0) + 4)) = u2[9];
    *(float *)((((((((t0 + 0x40) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) + 0x0)) = u2[6];
    *(float *)(((((((((t0 + 0x40) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) + 0x0) + 4)) = u2[7];
    *(float *)(((((((((t0 + 0x40) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) + 0x0)) = u2[4];
    *(float *)((((((((((t0 + 0x40) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) + 0x0) + 4)) = u2[5];
    *(float *)((((((((((t0 + 0x40) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) + 0x0)) = u2[2];
    *(float *)(((((((((((t0 + 0x40) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) + 0x0) + 4)) = u2[3];
    *(float *)(((((((((((t0 + 0x40) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) + 0x0)) = u2[0];
    *(float *)((((((((((((t0 + 0x40) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) + 0x0) + 4)) = u2[1];
    (((struct o8_uint *)0xC868774)->v) = (t0 + 0x40);
    
    (((struct o0_ushort *)0xC868774)->v) = ((short)t1 + 0x1);
    if (a4 == 0) {
        _builtin_st_ext((float (*)[4])u4);
        u4[0] = u2[0];
        u4[1] = u2[1];
        u4[2] = u2[2];
        u4[3] = u2[3];
        u4[4] = u2[4];
        u4[5] = u2[5];
        u4[6] = u2[6];
        u4[7] = u2[7];
        u4[8] = u2[8];
        u4[9] = u2[9];
        u4[10] = u2[10];
        u4[11] = u2[11];
        u4[12] = u2[12];
        u4[13] = u2[13];
        u4[14] = u2[14];
        u4[15] = u2[15];
        _builtin_ld_ext((float (*)[4])u4);
        return ((((int)(short)((((unsigned int)t1) << 16) | (((unsigned int)t1) >> 16)) > (int)(short)t1)) ? 1 : 0);
    }
    _builtin_prefetch((void *)a4);
    if ((a4 & 0x4) != 0) {
        u0 = *(float *)((a4 + 0x0));
        u1 = (((struct o4_float *)(a4))->v);
        u3 = (((struct o4_float *)((a4 + 0x4)))->v);
        u5 = (((struct o4_float *)(((a4 + 0x4) + 0x4)))->v);
        u6 = (((struct o4_float *)((((a4 + 0x4) + 0x4) + 0x4)))->v);
        u7 = (((struct o4_float *)(((((a4 + 0x4) + 0x4) + 0x4) + 0x4)))->v);
        u8 = (((struct o4_float *)((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4)))->v);
        u9 = (((struct o4_float *)(((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4)))->v);
        u10 = (((struct o4_float *)((((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4)))->v);
        u11 = (((struct o4_float *)(((((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4)))->v);
        u12 = (((struct o4_float *)((((((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4)))->v);
        u13 = (((struct o4_float *)(((((((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4)))->v);
        u14 = (((struct o4_float *)((((((((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4)))->v);
        u15 = (((struct o4_float *)(((((((((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4)))->v);
        u16 = (((struct o4_float *)((((((((((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4)))->v);
        u17 = (((struct o4_float *)(((((((((((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4)))->v);
        _builtin_st_ext((float (*)[4])u21);
        u21[0] = u0;
        u21[1] = u1;
        u21[2] = u3;
        u21[3] = u5;
        u21[4] = u6;
        u21[5] = u7;
        u21[6] = u8;
        u21[7] = u9;
        u21[8] = u10;
        u21[9] = u11;
        u21[10] = u12;
        u21[11] = u13;
        u21[12] = u14;
        u21[13] = u15;
        u21[14] = u16;
        u21[15] = u17;
        _builtin_ld_ext((float (*)[4])u21);
        return ((((int)(short)((((unsigned int)t1) << 16) | (((unsigned int)t1) >> 16)) > (int)(short)t1)) ? 1 : 0);
    }
    u0 = *(float *)((a4 + 0x0));
    u1 = *(float *)(((a4 + 0x0) + 4));
    u3 = (((struct o8_float *)(a4))->v);
    u5 = *(float *)((((a4 + 0x8) + 0x0) + 4));
    u6 = (((struct o8_float *)((a4 + 0x8)))->v);
    u7 = *(float *)(((((a4 + 0x8) + 0x8) + 0x0) + 4));
    u8 = (((struct o8_float *)(((a4 + 0x8) + 0x8)))->v);
    u9 = *(float *)((((((a4 + 0x8) + 0x8) + 0x8) + 0x0) + 4));
    u10 = (((struct o8_float *)((((a4 + 0x8) + 0x8) + 0x8)))->v);
    u11 = *(float *)(((((((a4 + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4));
    u12 = (((struct o8_float *)(((((a4 + 0x8) + 0x8) + 0x8) + 0x8)))->v);
    u13 = *(float *)((((((((a4 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4));
    u14 = (((struct o8_float *)((((((a4 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8)))->v);
    u15 = *(float *)(((((((((a4 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4));
    u16 = (((struct o8_float *)(((((((a4 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8)))->v);
    u17 = *(float *)((((((((((a4 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4));
    _builtin_st_ext((float (*)[4])u38);
    u38[0] = u0;
    u38[1] = u1;
    u38[2] = u3;
    u38[3] = u5;
    u38[4] = u6;
    u38[5] = u7;
    u38[6] = u8;
    u38[7] = u9;
    u38[8] = u10;
    u38[9] = u11;
    u38[10] = u12;
    u38[11] = u13;
    u38[12] = u14;
    u38[13] = u15;
    u38[14] = u16;
    u38[15] = u17;
    _builtin_ld_ext((float (*)[4])u38);
    return ((((int)(short)((((unsigned int)t1) << 16) | (((unsigned int)t1) >> 16)) > (int)(short)t1)) ? 1 : 0);
}

int FUN_0c184fd0(int a4, int a5)
{
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t2;

    t3 = 0x0;
    t4 = ((*(int *)((a4 + 0x0))) + 0x1);
    t5 = (*(int *)((a5 + 0x0)));
    for (;;) {
        t6 = *(signed char *)((t5 + 0x0));
        if ((unsigned char)t6 == 0) {
            break;
        }
        t2 = (unsigned char)t6;
        if (t2 == 46) {
            t5 = (t5 + 0x1);
            if (t3 == 0) {
                *(unsigned char *)((t4 + 0x0)) = 0x2E;
                t4 = (t4 + 0x1);
                t3 = 0x1;
            }
            if (t3 != 0) {
                *(unsigned char *)(((*(int *)((a4 + 0x0))) + 0x0)) = t3;
            }
            t2 = 0x1;
            *(unsigned int *)((a5 + 0x0)) = t5;
            *(unsigned int *)((a4 + 0x0)) = t4;
            return t2;
        }
        *(unsigned char *)((t4 + 0x0)) = (unsigned char)t6;
        t4 = (t4 + 0x1);
        t5 = (t5 + 0x1);
        t3 = (t3 + 0x1);
    }
    if (t3 != 0) {
        *(unsigned char *)(((*(int *)((a4 + 0x0))) + 0x0)) = t3;
    }
    *(unsigned int *)((a5 + 0x0)) = t5;
    *(unsigned int *)((a4 + 0x0)) = t4;
    return 0x0;
}

int FUN_0c1856f0(int a4)
{
    register int t5;
    register int t1;
    register int t2;
    register int t4;
    int t11;
    register int t12;

    t5 = ((((struct o0_int *)0xC8B5790)->v));
    for (;;) {
        if (t5 == 0) {
            break;
        }
        t1 = (*(short *)((t5 + 0x2)));
        t4 = (short)a4;
        if ((t1 == t4) && (t11 = *(short *)((t5 + 0x0)), t12 = (t1 == t4), t1 = t11, t1 == 2)) {
            t1 = 0x610;
            if (((*(int *)((t5 + t1)))) != 0) {
                t2 = (*(int *)((t5 + t1)));
                t1 = (t1 + 0x4);
                t4 = (*(int *)((t5 + t1)));
                *(unsigned int *)((t2 + t1)) = t4;
            } else {
                t1 = 0x614;
                t2 = (*(int *)((t5 + t1)));
                (((struct o0_uint *)0xC8B5790)->v) = t2;
            }
            t1 = 0x614;
            t4 = (*(int *)((t5 + t1)));
            if (t4 != 0) {
                t2 = (*(int *)((t5 + t1)));
                t1 = (t1 - 4);
                t4 = (*(int *)((t5 + t1)));
                *(unsigned int *)((t2 + t1)) = t4;
            } else {
                t1 = 0x610;
                t2 = (*(int *)((t5 + t1)));
                (((struct o4_uint *)0xC8B5790)->v) = t2;
            }
            t1 = 0xFFFFFFFF;
            *(unsigned short *)((t5 + 0x0)) = 0x0;
            *(unsigned short *)((t5 + 0x2)) = t1;
        } else {
            t1 = 0x614;
            t5 = (*(int *)((t5 + t1)));
        }
    }
    return t1;
}

int FUN_0c18ca92(int a4)
{
    int stk[1];
    register int t2;
    register int t23;
    register int t11;
    register int t12;
    register int t13;
    register int t14;
    register int t7;

    *(unsigned short *)(((int)stk + 0)) = (_builtin_get_imask());
    _builtin_set_imask(0xF);
    t2 = (((struct o20_int *)0xC8A6F24)->v);
    t12 = (((struct o1C_int *)0xC8A6F24)->v);
    t13 = *(int *)((a4 + 0x0));
    if ((unsigned int)t2 > (unsigned int)(*(int *)((a4 + 0x4)))) {
        t11 = *(int *)((a4 + 0x4));
        (((struct o3C_uint *)0xC8A6F24)->v) = t11;
        t7 = 0x0;
    } else {
        (((struct o3C_uint *)0xC8A6F24)->v) = t2;
        t7 = ((*(int *)((a4 + 0x4))) - t2);
        t11 = t2;
    }
    *(unsigned int *)0xC8A6F64 = t7;
    (((struct o20_uint *)0xC8A6F24)->v) = (((((struct o20_int *)0xC8A6F24)->v)) - t11);
    t23 = t12;
    if ((int)t11 > 0) {
        for (;;) {
            t14 = *(signed char *)((t13 + 0x0));
            t13 = (t13 + 0x1);
            *(unsigned char *)((t12 + 0x0)) = t14;
            t12 = (t12 + 0x1);
            t11 = (t11 - 1);
            if (t12 == (((((struct o0_int *)0xC8A6F24)->v)) + ((((struct o14_int *)0xC8A6F24)->v)))) {
                t12 = ((((struct o14_int *)0xC8A6F24)->v));
            }
            if ((int)t11 <= 0) {
                break;
            }
        }
        t23 = t12;
    }
    (((struct o1C_uint *)0xC8A6F24)->v) = t23;
    _builtin_set_imask(((unsigned int)((((unsigned short)(*(short *)(((int)stk + 0))) & 0xF) << 2) << 2) >> 4));
    return 0xC8A6F60;
}

int FUN_0c19ee48(int a4, int a5, int a6)
{
    int stk[3];

    register int R0;
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
    register int v0_7;
    register int v0_8;
    v0_1 = a4;
    v0_0 = a5;
    v0_6 = a6;
    *(unsigned int *)(((int)stk + 8)) = v0_0;
    *(unsigned short *)(((int)stk + 4)) = v0_6;
    v0_0 = (v0_1);
    if (((*(int *)((v0_1 + 0x0))) != 0)) goto L_C19EE74;
    v0_1 = FUN_0c1a027c(0x0);
    *(unsigned int *)((v0_0 + 0x0)) = v0_1;
    R0 = (v0_1);
    if ((v0_1 == 0)) goto L_C19EEB8;
    L_C19EE74:;
    v0_1 = (0x1);
    v0_2 = (0x0);
    v0_3 = (0x1);
    v0_4 = (0x20);
    v0_5 = (0x8);
    L_C19EE7E:;
    v0_6 = ((short)v0_3);
    if (((((int)v0_1 << (int)(short)v0_3) & (*(short *)(((int)stk + 4)))) == 0)) goto L_C19EEB0;
    v0_7 = v0_2;
    *(int *)((int)stk + 0) = v0_7;
    v0_8 = *(signed char *)(((short)v0_3 + 0xC2AE866));
    *(unsigned int *)(((int)stk + 0)) = v0_7;
    v0_7 = (v0_8);
    if (((int)v0_6 >= (int)v0_5)) goto L_C19EE9A;
    v0_6 = (v0_6);
    L_C19EEA8:;
    R0 = ((FUN_0c19ed24(v0_0, (*(int *)(((int)stk + 8))), v0_6, v0_7, *(int *)((int)stk + 0))));
    L_C19EEB0:;
    v0_6 = (int)(short)(v0_3 + 0x1) < (int)v0_4;
    v0_3 = ((v0_3 + 0x1));
    if (v0_6) goto L_C19EE7E;
    L_C19EEB8:;
    return R0;
    L_C19EE9A:;
    if (((int)v0_6 >= (int)0x20)) goto L_C19EEA6;
    v0_6 = ((v0_6 + 0x78));
    goto L_C19EEA8;
    L_C19EEA6:;
    v0_6 = (v0_2);
    goto L_C19EEA8;
}

int FUN_0c1a3a0c(int a4, int a5, int a6)
{
    int stk[4];
    register int t4;
    register int t5;
    register int t8;
    register int t9;
    register int t3;

    *(unsigned int *)(((int)stk + 0)) = a6;
    *(unsigned short *)((a5 + 0x0)) = (a4 + 0x3F);
    _pow5(a4, (((int)stk + 0) + 0x8));
    memset((*(int *)(((int)stk + 0))), 0x0, 0x8);
    t4 = 0x0;
    t5 = (((int)stk + 0) + 0x8);
    for (;;) {
        if ((*(signed char *)((t5 + 0x0))) != 0) {
            break;
        }
        t3 = (*(short *)((a5 + 0x0)));
        t4 = (t4 + 0x1);
        t5 = (t5 + 0x1);
        t3 = (t3 - 8);
        *(unsigned short *)((a5 + 0x0)) = t3;
    }
    t8 = 0x80;
    t9 = 0x0;
    for (;;) {
        if (((unsigned char)(*(signed char *)((t5 + 0x0))) & (unsigned char)t8) != 0) {
            break;
        }
        t8 = (unsigned char)t8;
        t9 = (t9 + 0x1);
        t8 = ((unsigned int)t8 >> 1);
    }
    *(unsigned int *)(((int)stk + 4)) = (0x8 - t4);
    FUN_0c1a3198(t5, (0x8 - t4), t9);
    *(unsigned short *)((a5 + 0x0)) = ((*(short *)((a5 + 0x0))) - t9);
    return (FUN_0c187a88((*(int *)(((int)stk + 0))), t5, (*(int *)(((int)stk + 4)))));
}

int kdSetBlockWriteEx(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11)
{
    register int t2;

    if (_builtin_tas((char *)(*(int *)0xC2DB268)) == 0) {
        mpdrv_dpf(a4, a5, a6, a7, 0xC2FFBA8);
        return 0xFFFFFFFE;
    }
    t2 = mpdrv_set_bwrite_ns(a4, a5, a6, a7, a8, a9, a10);
    if ((int)t2 > 0) {
        kdSetCallback(a4, a11, t2);
    }
    *(unsigned char *)(((*(int *)0xC2DB268) + 0x0)) = 0x0;
    if (((((struct o10E8_int *)((*(int *)0xC8D4D84)))->v)) != 0) {
        FUN_0c2bc7e4();
    }
    return t2;
}

int check_cache(int a4)
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
    v0_2 = a4;
    *(unsigned int *)(((int)stk + 0)) = (v0_2 << 2);
    *(unsigned int *)(((v0_2 << 2) + 0xC8C5044)) = 0x0;
    v0_0 = (0x1);
    v0_3 = (v0_2);
    v0_1 = (((v0_2 * 0x148) + 0xC8C4604));
    if (((*(signed char *)((((v0_2 * 0x148) + 0xC8C4604) + 0xA))) != 0)) goto L_C2C13F0;
    v0_4 = FUN_0c2c0ffe(v0_3);
    v0_2 = (v0_4);
    if (((int)v0_4 < 0)) goto L_C2C1426;
    L_C2C13F0:;
    v0_2 = (int)(vmsfs_isformat(v0_3)) < 0;
    if (v0_2) goto L_C2C1432;
    if (((*(signed char *)((v0_1 + 0xB))) != 0)) goto L_C2C1408;
    v0_4 = read_fat(v0_3);
    v0_2 = (v0_4);
    if (((int)v0_4 < 0)) goto L_C2C1418;
    L_C2C1408:;
    if (((*(signed char *)((v0_1 + 0xC))) != 0)) goto L_C2C142A;
    v0_3 = FUN_0c1045b4(v0_3);
    v0_2 = (v0_3);
    if (((int)v0_3 >= 0)) goto L_C2C142A;
    L_C2C1418:;
    if ((v0_2 != 0xFFFF0000)) goto L_C2C1426;
    *(unsigned int *)(((*(int *)(((int)stk + 0))) + 0xC8C5044)) = v0_0;
    L_C2C1432:;
    v0_0 = (0x0);
    L_C2C1434:;
    return v0_0;
    L_C2C1426:;
    v0_0 = (v0_2);
    goto L_C2C1434;
    L_C2C142A:;
    *(unsigned char *)((v0_1 + 0xA)) = v0_0;
    *(unsigned char *)((v0_1 + 0xB)) = v0_0;
    *(unsigned char *)((v0_1 + 0xC)) = v0_0;
    goto L_C2C1432;
}

float ADX_GetCoefficient(int a4, int a5, int a6, int a7)
{
    register float t1;
    register float u2;
    register float u4;
    register float u5;

    t1 = acosf((((float)a4 * ((((struct o0_float *)0xC2C2E90)->v))) / (float)a5));
    u2 = _builtin_sqrtf((((_builtin_sqrtf((1.0f + 1.0f)) - t1) + (_builtin_sqrtf((1.0f + 1.0f)) + -1.0f)) * ((_builtin_sqrtf((1.0f + 1.0f)) - t1) - (_builtin_sqrtf((1.0f + 1.0f)) + -1.0f))));
    *(unsigned short *)((a6 + 0x0)) = (int)((((_builtin_sqrtf((1.0f + 1.0f)) - t1) - u2) / (_builtin_sqrtf((1.0f + 1.0f)) + -1.0f)) * ((((struct o8_float *)0xC2C2E90)->v)));
    u4 = (((struct oC_float *)0xC2C2E90)->v);
    u5 = ((((_builtin_sqrtf((1.0f + 1.0f)) - t1) - u2) / (_builtin_sqrtf((1.0f + 1.0f)) + -1.0f)) * (((_builtin_sqrtf((1.0f + 1.0f)) - t1) - u2) / (_builtin_sqrtf((1.0f + 1.0f)) + -1.0f)));
    *(unsigned short *)((a7 + 0x0)) = (int)(-(u5 * u4));
    return u4;
}

int kmiFLWCTRLITPOverflowCallback(void)
{
    register int t1;

    t1 = FUN_0c2cc2c2();
    if (t1 != 0) {
        for (;;) {
            if ((*(int *)((t1 + 0x14))) == 3) {
                break;
            }
            t1 = (*(int *)((t1 + 0x10)));
            if (t1 == 0) {
                *(unsigned int *)0xC8BEFE0 = ((*(int *)0xC8BEFE0) + 0x1);
                *(unsigned int *)0xC8BF104 = 0x3;
                return kmyRequestCallback(0x8);
            }
        }
        kmyMoveParameterBoundary((*(int *)((t1 + 0x3C))), 0x1, 0x8000);
    }
    *(unsigned int *)0xC8BEFE0 = ((*(int *)0xC8BEFE0) + 0x1);
    *(unsigned int *)0xC8BF104 = 0x3;
    return kmyRequestCallback(0x8);
}

int FUN_0c2eda34(void)
{
    FUN_0c2ee4ba(0xC302814);
    if (((*(int *)0xC8D65E4) & 2) != 0) {
        FUN_0c2ee4ba(0xC30285C);
    }
    if (((*(int *)0xC8D65E4) & 8) != 0) {
        FUN_0c2ee4ba(0xC302860);
    }
    if (((*(int *)0xC8D65E4) & 16) != 0) {
        FUN_0c2ee4ba(0xC302868);
    }
    if (((*(int *)0xC8D65E4) & 4) != 0) {
        FUN_0c2ee4ba(0xC302870);
    }
    if (((*(int *)0xC8D65E4) & 32) != 0) {
        FUN_0c2ee4ba(0xC302878);
    }
    if (((*(int *)0xC8D65E4) & 64) != 0) {
        FUN_0c2ee4ba(0xC302880);
    }
    if (((*(int *)0xC8D65E4) & 128) != 0) {
        FUN_0c2ee4ba(0xC302888);
    }
    if (((*(int *)0xC8D65E4) & 0x100) != 0) {
        FUN_0c2ee4ba(0xC302890);
    }
    if (((*(int *)0xC8D65E4) & 0x200) != 0) {
        FUN_0c2ee4ba(0xC302898);
    }
    return FUN_0c2ee4ba(0xC30281C);
}

int FUN_0c191c60(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t5;

    t0 = *(short *)((a4 + 0x4));
    t1 = (t0 + 0xE);
    if ((int)(short)(t0 + 0xE) < (int)0x40) {
        t1 = 0x40;
    }
    t0 = *(int *)0xC8A9800;
    t2 = 0xFFFFFFFF;
    if (t0 != 0) {
        t3 = ((int (*)(int, int, int, int))(t0))(0x0, 0x0, (short)t1, 0x0);
        t2 = 0xFFFFFFFF;
        if (t3 != 0) {
            FUN_0c187a88(t3, 0xC2AE750, 0x6);
            FUN_0c187a88((t3 + 0x6), 0xC2AE756, 0x6);
            *(unsigned char *)((t3 + 0xC)) = 0x8;
            *(unsigned char *)((t3 + 0xD)) = 0x0;
            FUN_0c187a88((t3 + 0xE), (*(int *)((a4 + 0x0))), (unsigned short)(*(short *)((a4 + 0x4))));
            t5 = ((int (*)(int, int, int, int))(t0))(0x0, 0x1, (short)t1, t3);
            t0 = 0x0;
            if (t5 != 0) {
                t0 = 0xFFFFFFFF;
            }
            t2 = t0;
        }
    }
    return t2;
}

int FUN_0c1926cc(int a4)
{
    int stk[1];
    register int t4;
    register int t8;
    register int t38;

    *(unsigned int *)(((int)stk + 0)) = a4;
    if ((unsigned char)(*(signed char *)0xC8ABB90) != 5) {
        *(unsigned short *)0xC8ABC10 = ((*(short *)0xC8ABC10) + 0x1);
        t38 = 0xFFFFFFFF;
    } else {
        t4 = *(int *)0xC8ABBC0;
        if ((((((struct o74_short *)(t4))->v)) & 4) != 0) {
            t8 = FUN_0c19fad6(((((struct o98_int *)(t4))->v)), ((int)stk + 0), (unsigned char)(*(signed char *)((t4 + 0x84))));
            if ((short)t8 != 64) {
                if ((short)t8 != 0x80) {
                    if ((short)t8 != 112) {
                        *(unsigned short *)0xC8ABC10 = ((*(short *)0xC8ABC10) + 0x1);
                        t38 = 0xFFFFFFFF;
                    } else {
                        t38 = (FUN_0c19274e(0x0, 0x0, 0x2F, (*(int *)(((int)stk + 0)))));
                    }
                } else {
                    t38 = (FUN_0c19274e(0x0, 0x0, 0x2D, (*(int *)(((int)stk + 0)))));
                }
            } else {
                t38 = (FUN_0c19274e(0x0, 0x0, 0x21, (*(int *)(((int)stk + 0)))));
            }
        } else {
            t38 = (FUN_0c19274e(0x0, 0x0, 0x21, (*(int *)(((int)stk + 0)))));
        }
    }
    return t38;
}

int FUN_0c2b9a50(int a4, int a5, int a6, int a7)
{
    int t0;

    *(volatile signed char *)((a4 + 0x3));
    *(volatile signed char *)((a4 + 0x3));
    if ((((*(signed char *)((a4 + 0x3))) & 32) != 0) && (t0 = *(signed char *)0xC8C0078, t0 != 0)) {
        t0 = ((int (*)(int, int, int, int))((*(int *)((((((struct o4_int *)0xC8BFFE8)->v)) + 0xC)))))(a4, a5, a6, a7);
        FUN_0c2b9b54(t0);
    }
    *(volatile signed char *)((a4 + 0x3));
    *(volatile signed char *)((a4 + 0x3));
    if (((*(signed char *)((a4 + 0x3))) & 4) != 0) {
        (((struct o58_uchar *)((*(int *)((((((struct o0_int *)0xC8BFFE8)->v)) + 0x8)))))->v) = 0x1;
    }
    if (((*(signed char *)((a4 + 0x3))) & 2) != 0) {
        (((struct o59_uchar *)((*(int *)((((((struct o0_int *)0xC8BFFE8)->v)) + 0x8)))))->v) = 0x1;
    }
    t0 = *(signed char *)((a4 + 0x3));
    if ((t0 & 1) != 0) {
        *(unsigned char *)0xC8C0078 = 0x1;
    }
    return t0;
}

int fmMngExecServer(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(int *)0xC303D78;
    t1 = 0x0;
    if (t0 == 0) {
    } else {
        t2 = *(int *)((t0 + 0x1C));
        switch (t2) {
        case 0:
            break;
        case 1:
            t2 = fmMngReadData(t0);
            *(unsigned int *)(((*(int *)0xC303D78) + 0x1C)) = 0x0;
            if (t2 != 0) {
                *(unsigned int *)(((*(int *)0xC303D78) + 0x20)) = 0x3;
            } else {
                *(unsigned int *)(((*(int *)0xC303D78) + 0x20)) = 0x1;
            }
            *(unsigned int *)(((*(int *)0xC303D78) + 0x2C)) = t2;
            break;
        case 2:
            t2 = fmMngWriteData(t0, a5, a6, a7);
            if (t2 != 1) {
                *(unsigned int *)(((*(int *)0xC303D78) + 0x1C)) = 0x0;
                if (t2 != 0) {
                    *(unsigned int *)(((*(int *)0xC303D78) + 0x20)) = 0x3;
                } else {
                    *(unsigned int *)(((*(int *)0xC303D78) + 0x20)) = 0x1;
                }
                *(unsigned int *)(((*(int *)0xC303D78) + 0x2C)) = t2;
            }
            break;
        default:
            *(unsigned int *)((t0 + 0x1C)) = 0x0;
            *(unsigned int *)(((*(int *)0xC303D78) + 0x20)) = 0x0;
            break;
        }
        t1 = (*(int *)(((*(int *)0xC303D78) + 0x20)));
    }
    return t1;
}

int kmyiInitializeInterrupt(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    *(unsigned int *)((a4 + 0x14)) = 0xC2C8F1C;
    t0 = *(int *)((a4 + 0x8));
    memset(t0, 0x0, 0x238);
    *(unsigned int *)((t0 + 0x24)) = 0xC2C8F18;
    *(unsigned int *)((t0 + 0x0)) = 0x20;
    if ((int)0x20 > 0) {
        t1 = 0x0;
        for (;;) {
            *(unsigned int *)((((t0 + 0x30) + ((t1 << 2) << 2)) + 0x0)) = 0xC2C8F18;
            *(unsigned int *)((((t0 + 0x30) + ((t1 << 2) << 2)) + 0x4)) = 0x0;
            *(unsigned int *)((((t0 + 0x30) + ((t1 << 2) << 2)) + 0x8)) = 0x0;
            t2 = ((t1 << 2) << 2);
            t1 = (t1 + 0x1);
            *(unsigned int *)(((t2 + (t0 + 0x30)) + 0xC)) = 0x0;
            if ((int)t1 >= (int)(*(int *)((t0 + 0x0)))) {
                break;
            }
        }
    }
    t1 = 0xC2C8D40;
    if ((*(int *)0xC8D0CAC) == 0x10000) {
        t1 = 0xC2C8E20;
    }
    kmiRegisterPhIntHandler(t1);
    (((struct o230_uint *)(t0))->v) = 0xE;
    (((struct o234_uint *)(t0))->v) = 0x0;
    return 0x0;
}

int FUN_0c2cfd24(Stk2 s)
{
    int stk[11];
    register int t1;
    register int t3;
    register int t4;
    register int t6;
    register int t8;
    register int t9;

    stk[1] = s.w[0];
    stk[2] = s.w[1];
    (((struct o3_uchar *)0xC8D25AC)->v) = (((signed char)(s.w[0] >> 24)) - ((signed char)(s.w[1] >> 24)));
    t1 = 0x0;
    if ((int)(signed char)(((signed char)(s.w[0] >> 24)) - ((signed char)(s.w[1] >> 24))) < 0) {
        (((struct o3_uchar *)0xC8D25AC)->v) = ((*(signed char *)0xC8D25AF) + 0x3C);
        t1 = 0xFFFFFFFF;
    }
    (((struct o2_uchar *)0xC8D25AC)->v) = t1;
    t3 = *(signed char *)(((((int)stk + 4) + 0x6) + 0x0));
    t4 = *(signed char *)0xC8D25AE;
    (((struct o2_uchar *)0xC8D25AC)->v) = ((t4 + ((signed char)(s.w[0] >> 16))) - t3);
    t6 = 0x0;
    if ((int)(signed char)((t4 + ((signed char)(s.w[0] >> 16))) - t3) < 0) {
        (((struct o2_uchar *)0xC8D25AC)->v) = ((*(signed char *)0xC8D25AE) + 0x3C);
        t6 = 0xFFFFFFFF;
    }
    (((struct o1_uchar *)0xC8D25AC)->v) = t6;
    t8 = *(signed char *)(((((int)stk + 4) + 0x5) + 0x0));
    t9 = *(signed char *)0xC8D25AD;
    (((struct o1_uchar *)0xC8D25AC)->v) = ((t9 + ((signed char)(s.w[0] >> 8))) - t8);
    if ((int)(signed char)((t9 + ((signed char)(s.w[0] >> 8))) - t8) < 0) {
        (((struct o1_uchar *)0xC8D25AC)->v) = ((*(signed char *)0xC8D25AD) + 0x18);
        (((struct o0_uchar *)0xC8D25AC)->v) = 0xFFFFFFFF;
    } else {
        (((struct o0_uchar *)0xC8D25AC)->v) = 0x0;
    }
    (((struct o0_uchar *)0xC8D25AC)->v) = ((((signed char)(s.w[0] >> 0)) + (*(signed char *)0xC8D25AC)) - ((signed char)(s.w[1] >> 0)));
    return ((signed char)(s.w[1] >> 0));
}

int mpdrv_frame_recv_main(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;

    t0 = a4;
    t1 = 0x0;
    for (;;) {
        if ((int)t1 >= (int)0x4) {
            break;
        }
        t2 = 0xC300800;
        t3 = 0xF90;
        t4 = (*(int *)(((t1 << 2) + t2)));
        t2 = (*(int *)0xC8D4D84);
        t3 = (t3 + t2);
        t4 = (t4 + t3);
        if ((*(signed char *)((t4 + 0x0))) != 0) {
            t4 = 0xC2DA7C2;
            t0 = t1;
            t2 = (mpdrv_check_port(t0));
            t0 = t1;
            t5 = 0x0;
            t0 = (t0 << 1);
            t0 = (t0 + (t1 << 2));
            t6 = t0;
            t7 = t0;
            for (;;) {
                t2 = (*(int *)0xC8D4D84);
                t4 = (*(signed char *)((((0xF90 + t2) + t6) + 0x0)));
                if (t4 != 0) {
                    t0 = t7;
                    t2 = (mpdrv_make_devicedata(t0, t1));
                } else {
                    t8 = t4;
                    t9 = t0;
                }
                t5 = (t5 + 0x1);
                t4 = t8;
                t0 = t9;
                t7 = (t7 + 0x1);
                t6 = (t6 + 0x1);
                if ((int)t5 >= (int)0x6) {
                    break;
                }
            }
        } else {
            t2 = t3;
        }
        t3 = t2;
        t1 = (t1 + 0x1);
    }
    return 0x0;
}

int FUN_0c2e717e(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t0 = *(signed char *)((a4 + 0x0));
    t1 = 0x0;
    if ((0x1 & (unsigned char)t0) != 0) {
        t1 = 0x1;
    }
    t2 = t1;
    if ((0x2 & (unsigned char)t0) != 0) {
        t2 = (t1 + 0x1);
    }
    t1 = t2;
    if ((0x4 & (unsigned char)t0) != 0) {
        t1 = (t2 + 0x1);
    }
    t2 = t1;
    if ((0x8 & (unsigned char)t0) != 0) {
        t2 = (t1 + 0x1);
    }
    t1 = t2;
    if ((0x10 & (unsigned char)t0) != 0) {
        t1 = (t2 + 0x1);
    }
    t2 = t1;
    if ((0x20 & (unsigned char)t0) != 0) {
        t2 = (t1 + 0x1);
    }
    t1 = t2;
    if ((0x40 & (unsigned char)t0) != 0) {
        t1 = (t2 + 0x1);
    }
    t2 = t1;
    if (((unsigned char)t0 & 0x80) != 0) {
        t2 = (t1 + 0x1);
    }
    t0 = *(signed char *)0xC8D6631;
    if ((unsigned char)t0 != 12) {
        if ((unsigned char)t0 != 13) {
            t1 = (unsigned char)t0;
            if ((unsigned char)t0 != 40) {
            } else {
                t3 = *(signed char *)((a4 + 0x0));
                *(unsigned char *)((a4 + 0x0)) = (t3 | 0x80);
                t1 = (t3 | 0x80);
            }
            t3 = t1;
        } else {
            t1 = (unsigned char)t0;
            if ((unsigned char)(t2 & 0x1) == 0) {
                t4 = *(signed char *)((a4 + 0x0));
                *(unsigned char *)((a4 + 0x0)) = (t4 | 0x80);
                t1 = (t4 | 0x80);
            }
            t3 = t1;
        }
        t1 = t3;
    } else {
        t3 = (unsigned char)t0;
        if ((unsigned char)(t2 & 0x1) == 0) {
        } else {
            t0 = *(signed char *)((a4 + 0x0));
            *(unsigned char *)((a4 + 0x0)) = (t0 | 0x80);
            t3 = (t0 | 0x80);
        }
        t1 = t3;
    }
    return t1;
}

int FUN_0c2e77bc(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = *(signed char *)0xC8D6795;
    if (((unsigned char)t0 & 32) != 0) {
        if (((unsigned char)(*(signed char *)0xC8D6795) & 0x80) != 0) {
            t1 = *(signed char *)0xC8D6795;
            if (((unsigned char)t1 & 1) != 0) {
                *(unsigned char *)0xC8D646C = 0x8;
            } else {
                *(unsigned char *)0xC8D646C = 0x5;
            }
            t2 = (unsigned char)t1;
        } else {
            if ((*(signed char *)0xC8E00B4) != 0) {
                *(unsigned char *)0xC8D646C = 0x4;
                t1 = (unsigned char)t0;
            } else {
                t3 = *(signed char *)0xC8E0095;
                if (t3 != 0) {
                    *(unsigned char *)0xC8D646C = 0x3;
                    t1 = 0x3;
                } else {
                    *(unsigned char *)0xC8D646C = 0x2;
                    t1 = t3;
                }
            }
            t2 = t1;
        }
        t1 = t2;
    } else {
        if (((unsigned char)(*(signed char *)0xC8D6793) & 0x80) != 0) {
            if (((unsigned char)(*(signed char *)0xC8D6795) & 0x80) == 0) {
                *(unsigned char *)0xC8D646C = 0x6;
            } else {
                *(unsigned char *)0xC8D646C = 0x7;
            }
        } else {
            *(unsigned char *)0xC8D646C = 0x0;
        }
        t1 = (unsigned char)t0;
    }
    return t1;
}

int FUN_0c2ef8b4(void)
{
    int stk[11];
    register int t15;
    register int t1;
    register int t2;
    register int t9;
    register int t8;

    t15 = 0x61;
    if ((*(signed char *)0xC8D2711) != 0) {
        *(unsigned short *)0xC8D67C0 = 0x0;
        t1 = 0x0;
        t2 = 0x0;
        for (;;) {
            if ((int)(unsigned char)t1 >= (int)(unsigned char)(*(signed char *)0xC8D2711)) {
                break;
            }
            t2 = (unsigned char)t1;
            t1 = (t1 + 0x1);
            *(unsigned char *)(((t2 + ((int)stk + 0)) + 0x1)) = (*(signed char *)((t2 + 0xC8D2712)));
        }
        *(unsigned char *)((((int)stk + 0) + 0x0)) = (*(signed char *)0xC8D2711);
        t9 = 0x1;
        for (;;) {
            if ((int)(unsigned char)t9 > (int)(unsigned char)(*(signed char *)((((int)stk + 0) + 0x0)))) {
                break;
            }
            t8 = (unsigned char)t9;
            t8 = (t8 + ((int)stk + 0));
            FUN_0c2e717e(t8);
            FUN_0c2cf040((*(signed char *)((t8 + 0x0))));
            t9 = (t9 + 0x1);
        }
        t15 = (FUN_0c2d7806(0x8));
    }
    return t15;
}

void FUN_0c2f4790(float f4, float f5, float f6, float f7, float f8, float f9, float f10)
{
    register int t0;

    t0 = *(signed char *)0xC8DFF7A;
    if ((unsigned int)(unsigned char)t0 < (unsigned int)0xE) {
        switch (((unsigned char)t0 << 1)) {
            case 0:
            {
                return;
            }
            case 2:
            {
                FUN_0c2f4a04(f4, f5, f6, f7, f8, f9, f10);
    return;
            }
            case 4:
            {
                FUN_0c2f57f4();
    return;
            }
            case 6:
            {
                FUN_0c2f5990();
    return;
            }
            case 8:
            {
                FUN_0c2f58e0();
    return;
            }
            case 10:
            {
                FUN_0c2f5a22();
    return;
            }
            case 12:
            {
                FUN_0c2f4ca2();
    return;
            }
            case 14:
            {
                FUN_0c2f4cd4();
    return;
            }
            case 16:
            {
                FUN_0c2f4d3a(f4, f5, f6, f7, f8, f9, f10);
    return;
            }
            case 18:
            {
                FUN_0c2f4ef0();
    return;
            }
            case 20:
            {
                FUN_0c2f4f20();
    return;
            }
            case 22:
            {
                FUN_0c2f4f96();
    return;
            }
            case 24:
            {
                FUN_0c2f4fb0();
    return;
            }
            default:
            {
                FUN_0c2f5750();
    return;
            }
        }
    }
    FUN_0c2f57f0();
}

int FUN_0c1803fc(int a4, int a5)
{
    int stk[2];
    register int t0;
    register int t35;
    register int t1;
    register int t4;
    register int t5;
    register int t6;
    register int t10;
    register int t11;
    register int t13;
    register int t23;

    *(unsigned int *)(((int)stk + 4)) = a5;
    t0 = FUN_0c17ff38(a4, a5, 0x0);
    t35 = t0;
    if (t0 == 0) {
        t1 = *(int *)((a4 + 0x8));
        t4 = FUN_0c18004c((*(int *)(((int)stk + 4))), (*(int *)((a4 + 0x4))), t1, ((int)stk + 0));
        t5 = nlsnd_PL_WaitRequest();
        t35 = t5;
        if (t5 == 0) {
            t6 = nlsnd_PL_WaitAica1();
            t35 = t6;
            if (t6 == 0) {
                if ((*(int *)(((int)stk + 0))) != 0) {
                    t10 = FUN_0c17feb6(t4, (t4 + t1), (*(int *)(((int)stk + 0))));
                    t35 = t10;
                    if (t10 == 0) {
                        t11 = FUN_0c17fe3c();
                        t35 = t11;
                        if (t11 == 0) {
                            nlsndG2WriteN(a4, t4, ((unsigned int)t1 >> 2));
                            t13 = nlsnd_PL_WaitAica2andGo();
                            t35 = 0x0;
                            if (t13 != 0) {
                                t35 = t13;
                            }
                        }
                    }
                } else {
                    nlsndG2WriteN(a4, t4, ((unsigned int)t1 >> 2));
                    t23 = nlsnd_PL_WaitAica2andGo();
                    t35 = 0x0;
                    if (t23 != 0) {
                        t35 = t23;
                    }
                }
            }
        }
    }
    return t35;
}

void FUN_0c183978(int a4, int a5, int a6, int a7)
{
    int stk[2];
    register int t2;
    register int t8;

    if ((*(signed char *)0xC874FB8) != 0) {
        *(unsigned short *)(((int)stk + 0)) = (_builtin_get_imask());
        _builtin_set_imask(0xF);
        t2 = (((struct o14_int *)0xC8A6F24)->v);
        (((struct o1C_uint *)0xC8A6F24)->v) = t2;
        (((struct o18_uint *)0xC8A6F24)->v) = t2;
        (((struct o20_uint *)0xC8A6F24)->v) = ((((struct o0_int *)0xC8A6F24)->v));
        if ((-((((((*(signed char *)0xC8A6F57) & 2) == 0)) ? 1 : 0) - 1)) != 1) {
            for (;;) {
            }
        }
        (((struct o2F_uchar *)0xC8A6F24)->v) = ((*(signed char *)0xC8A6F53) | 0x2);
        t8 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC874F8C) + 0x8)))))(0xC8A6F50, a5, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
        (((struct o2C_uint *)0xC8A6F24)->v) = 0x0;
        _builtin_set_imask(((unsigned int)((((*(short *)(((int)stk + 0))) & 0xF) << 2) << 2) >> 4));
    }
}

void FUN_0c1838c6(int a4, int a5, int a6, int a7)
{
    int stk[2];
    register int t2;
    register int t8;

    if ((*(signed char *)0xC874FB8) != 0) {
        *(unsigned short *)(((int)stk + 0)) = (_builtin_get_imask());
        _builtin_set_imask(0xF);
        t2 = (((struct o8_int *)0xC8A6F20)->v);
        (((struct o10_uint *)0xC8A6F20)->v) = t2;
        (((struct oC_uint *)0xC8A6F20)->v) = t2;
        (((struct o14_uint *)0xC8A6F20)->v) = ((((struct o0_int *)0xC8A6F20)->v));
        if ((-((((((*(signed char *)0xC8A6F57) & 4) == 0)) ? 1 : 0) - 1)) != 1) {
            for (;;) {
            }
        }
        (((struct o33_uchar *)0xC8A6F20)->v) = ((*(signed char *)0xC8A6F53) | 0x4);
        t8 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC874F8C) + 0x8)))))(0xC8A6F50, a5, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
        (((struct o30_uint *)0xC8A6F20)->v) = 0x0;
        _builtin_set_imask(((unsigned int)((((*(short *)(((int)stk + 0))) & 0xF) << 2) << 2) >> 4));
    }
}

int FUN_0c1946a8(int a4)
{
    int stk[3];
    register int t0;
    register int t2;

    *(unsigned short *)(((int)stk + 8)) = a4;
    t0 = FUN_0c184000(0x4117, (((int)stk + 0) + 0x8), ((int)stk + 0));
    if ((short)t0 != 0) {
        return t0;
    }
    t2 = *(short *)(((int)stk + 0));
    if ((unsigned short)t2 == 4) {
        return 0x1;
    }
    if ((unsigned short)t2 != 5) {
        if ((unsigned short)t2 != 7) {
            if ((unsigned short)t2 != 8) {
                if ((unsigned short)t2 == 10) {
                    return 0xFFFFFFFF;
                }
                return 0x0;
            }
            return 0xFFFFFFFF;
        }
        return 0xFFFFFFFF;
    }
    return 0xFFFFFFFF;
}

int SJMEM_UngetChunk(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;

    t1 = FUN_0c2c6030();
    if (a5 == 0) {
        if ((*(int *)((a4 + 0x1C))) == 0) {
        } else {
            t2 = ((int (*)(int, int, int, int))((*(int *)((a4 + 0x1C)))))((*(int *)((a4 + 0x20))), 0xFFFFFFFD, a6, a7);
        }
    } else {
        if (a5 == 1) {
            t2 = *(int *)((a4 + 0x10));
            t3 = *(int *)((a6 + 0x4));
            t4 = (t2 - t3);
            if ((int)(t2 - t3) <= 0) {
                t4 = 0x0;
            }
            *(unsigned int *)((a4 + 0x10)) = t4;
            t2 = *(int *)((a6 + 0x4));
            t3 = *(int *)((a4 + 0xC));
            t5 = *(int *)((a4 + 0x18));
            t6 = (t3 + t2);
            if ((int)t5 < (int)(t3 + t2)) {
                t6 = t5;
            }
            *(unsigned int *)((a4 + 0xC)) = t6;
            if ((t4 != ((*(int *)((a6 + 0x0))) - (*(int *)((a4 + 0x14))))) && (t0 = *(int *)((a4 + 0x1C)), t0 != 0)) {
                t0 = ((int (*)(int, int, int, int))((*(int *)((a4 + 0x1C)))))((*(int *)((a4 + 0x20))), 0xFFFFFFFD, (t3 + t2), a7);
            }
        } else {
            *(unsigned int *)((a6 + 0x4)) = 0x0;
            *(unsigned int *)((a6 + 0x0)) = 0x0;
            if ((*(int *)((a4 + 0x1C))) != 0) {
                t0 = ((int (*)(int, int, int, int))((*(int *)((a4 + 0x1C)))))((*(int *)((a4 + 0x20))), 0xFFFFFFFD, a6, a7);
            }
        }
    }
    return FUN_0c2c6048(a4, t1);
}

int FUN_0c2d6bb8(void)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)0xC8D6831;
    if ((unsigned char)t0 == 13) {
        *(unsigned char *)0xC8D683A = 0x0;
        return (unsigned char)t0;
    }
    if ((*(signed char *)0xC8D7086) != 0) {
        t1 = *(signed char *)0xC8D7087;
        *(unsigned short *)((((short)((short)(unsigned char)t1 * (short)0x8C) + 0xC8D2728) + 0x0)) = ((*(short *)((((short)((short)(unsigned char)t1 * (short)0x8C) + 0xC8D2728) + 0x0))) & 0xF9);
        (((struct o0_uchar *)0xC8D7086)->v) = ((*(signed char *)0xC8D7086) - 1);
        t1 = *(signed char *)0xC8D7087;
        *(unsigned short *)((((short)((short)(unsigned char)t1 * (short)0x8C) + 0xC8D2728) + 0x0)) = ((*(short *)((((short)((short)(unsigned char)t1 * (short)0x8C) + 0xC8D2728) + 0x0))) | 0x1);
        (((struct o1_uchar *)0xC8D7086)->v) = (((*(signed char *)0xC8D7087) + 0x1) & 0x7);
        return FUN_0c2d7806(0x2);
    }
    return (unsigned char)t0;
}

int FUN_0c2d7806(int a4)
{

    register int R0;
    register int R2;
    register int R3;
    register int R4;
    register int R5;
    register int R6;
    register int R7;
    register int R8;
    register int R11;
    register int R12;
    register int T_;
    R4 = a4;
    if (((*(signed char *)0xC8D7091) == 0)) goto L_C2D7816;
    if (((*(signed char *)0xC8D7093) == 0)) goto L_C2D783C;
    L_C2D7816:;
    return R0;
    L_C2D783C:;
    R5 = (0xC8D26B0);
    R6 = ((unsigned short)R4);
    T_ = ((((int)(unsigned short)R4 > (int)0x80)));
    if (((int)(unsigned short)R4 <= (int)0x80)) goto L_C2D7866;
    (((struct o44_uchar *)(R5))->v) = ((*(signed char *)((R5 + 0x44))) | ((int)R6 >> 8));
    R0 = (0x42);
    if ((((unsigned char)((int)R6 >> 8) & (unsigned char)(*(signed char *)((R5 + 0x42)))) != 0)) goto L_C2D7880;
    L_C2D787C:;
    R0 = ((thunk_FUN_0c2efc2c()));
    L_C2D7880:;
    return 0x1;
    L_C2D7866:;
    if ((T_)) goto L_C2D7880;
    (((struct o43_uchar *)(R5))->v) = ((*(signed char *)((R5 + 0x43))) | R4);
    R0 = (0x41);
    if ((((unsigned char)R4 & (unsigned char)(*(signed char *)((R5 + 0x41)))) != 0)) goto L_C2D7880;
    goto L_C2D787C;
}

int FUN_0c2e3d4a(int a4)
{
    register int t0;
    register int t2;
    register int t3;
    register int t4;
    register int t6;

    t0 = *(signed char *)0xC8D644E;
    if (((unsigned char)t0 & 4) == 0) {
        t2 = (FUN_0c2e55bc());
        t3 = 0x0;
        t4 = a4;
        for (;;) {
            t6 = *(signed char *)((t4 + 0x0));
            if (((unsigned char)t6 != (unsigned char)(*(signed char *)0xC8D6443)) && ((unsigned char)t6 != 0)) {
                t2 = (unsigned char)t3;
                if (t2 == 1) {
                    t2 = (*(signed char *)((t4 + 0x0)));
                    t2 = (unsigned char)t2;
                    if (t2 == 93) {
                        t3 = 0x0;
                    }
                } else {
                    t2 = (*(signed char *)((t4 + 0x0)));
                    t2 = (unsigned char)t2;
                    if (t2 == 91) {
                        t3 = 0x1;
                    } else {
                        t2 = (FUN_0c2e715e((*(signed char *)((t4 + 0x0)))));
                    }
                }
                t4 = (t4 + 0x1);
                continue;
            }
            break;
        }
        return FUN_0c2e55bc();
    }
    return (unsigned char)t0;
}

int nl_texture_slot_alloc(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t8;
    int t9;
    register int t10;
    register int t12;

    t0 = 0x0;
    t1 = 0x0;
    t2 = 0x0;
    t3 = 0x0;
    for (;;) {
        if ((int)t1 >= (int)(*(int *)0xC2A6070)) {
            return 0xFFFFFFFF;
        }
        t8 = *(int *)((t2 + (*(int *)0xC83CD44)));
        if (t8 != -1) {
            break;
        }
        t3 = (t3 + 0x4);
        t2 = (t2 + 0x4);
        t1 = (t1 + 0x1);
        t0 = (t0 + 0x20);
    }
    t9 = 0x1;
    t10 = 0x0;
    for (;;) {
        if ((t8 & t9) == 0) {
            break;
        }
        t9 = (t9 << 1);
        t10 = (t10 + 0x1);
    }
    t12 = *(int *)0xC83CD44;
    *(unsigned int *)((t3 + t12)) = ((*(int *)((t3 + t12))) | t9);
    return (t0 + t10);
}

int nlProjectScreen(int a4, int a5)
{
    int stk[6];
    register float u3;
    register float u6;
    register float u11;
    register float u12;
    register float u17;
    register float u18;

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 0)) = a5;
    nlPushMatrix(0xC868968);
    nlCalcPoint44((*(int *)(((int)stk + 4))), (((int)stk + 0) + 0x8));
    u3 = *(float *)(((int)stk + 20));
    *(float *)(((int)stk + 8)) = ((*(float *)(((int)stk + 8))) * (1.0f / u3));
    *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) * (1.0f / u3));
    u6 = *(float *)0xC17D0C4;
    u11 = (((*(float *)(((int)stk + 8))) + 1.0f) * ((((struct o0_float *)0xC2A6140)->v)));
    u12 = ((((struct oC_float *)0xC2A6140)->v));
    u12 = u12 + u6 * u11;
    *(float *)(((*(int *)(((int)stk + 0))) + 0x0)) = u12;
    u17 = (((-((((struct oC_float *)(((int)stk + 0)))->v))) + 1.0f) * ((((struct o4_float *)0xC2A6140)->v)));
    u18 = ((((struct o8_float *)0xC2A6140)->v));
    u18 = u18 + u6 * u17;
    (((struct o4_float *)((*(int *)(((int)stk + 0)))))->v) = u18;
    return (nlPopMatrix(0x1));
}

int FUN_0c192e04(int a4, int a5, int a6, int a7)
{
    if ((short)a4 != 0x82) {
        if ((short)a4 != 0x81) {
            return 0xFFFFFFFF;
        }
        FUN_0c19d9f6(0xC8ABB28);
        *(unsigned char *)0xC8ABB24 = 0x0;
        return 0x0;
    }
    if ((*(signed char *)0xC8ABB24) == 0) {
        *(unsigned char *)0xC8ABB24 = 0x1;
    }
    FUN_0c19d9ac(0xC8ABB28, a5, a6, a7);
    return 0x0;
}

int FUN_0c19d470(int a4)
{
    if ((unsigned int)(a4 - 1) < (unsigned int)0xC) {
        switch (((a4 - 1) << 1)) {
            case 0:
            {
                return 0xC20AA80;
            }
            case 2:
            {
                return 0xC20AA8C;
            }
            case 4:
            {
                return 0xC20AA98;
            }
            case 6:
            {
                return 0xC20AAA4;
            }
            case 8:
            {
                return 0xC20AAB0;
            }
            case 10:
            {
                return 0xC20AABC;
            }
            case 12:
            {
                return 0xC20AAC8;
            }
            case 14:
            {
                return 0xC20AAD4;
            }
            case 16:
            {
                return 0xC20AAE0;
            }
            case 18:
            {
                return 0xC20AAEC;
            }
            case 20:
            {
                return 0xC20AAF8;
            }
            default:
            {
                return 0xC20AB04;
            }
        }
    }
    return 0xC20AB14;
}

int FUN_0c2bd1ec(int a4, int a5, int a6, int a7)
{
    register int t2;

    if (_builtin_tas((char *)(*(int *)0xC2DB268)) == 0) {
        mpdrv_dpf(a4, a5, a6, a7, 0xC2FFBA8);
        return 0xFFFFFFFE;
    }
    t2 = mpdrv_set_dreset_ns(a4);
    if ((int)t2 > 0) {
        kdSetCallback(a4, a5, t2);
    }
    *(unsigned char *)(((*(int *)0xC2DB268) + 0x0)) = 0x0;
    if (((((struct o10E8_int *)((*(int *)0xC8D4D84)))->v)) != 0) {
        FUN_0c2bc7e4();
    }
    return t2;
}

int mwRnaPause(int a4)
{
    int stk[2];
    register int t3;
    register int t21;

    if (a4 == 0) {
        *(int *)((int)stk + 0) = 0xC2FFEE8;
        t21 = (FUN_0c2dc1ae(0xC2FFEE8));
    } else {
        FUN_0c2dc160(((int)stk + 4));
        if ((*(signed char *)((a4 + 0x7))) == 0) {
            t3 = mwRnaGetPlaySw(a4);
            (((struct o88_uint *)(a4))->v) = ((t3 << 1) | (mwRnaGetTransSw(a4)));
            mwlRnaAddRdPos(a4);
            mwRnaSetPlaySw(a4, 0x0);
            *(unsigned char *)((a4 + 0x7)) = 0x1;
            if ((unsigned char)(*(signed char *)((a4 + 0x5))) == 1) {
                (((struct o8C_uint *)(a4))->v) = 0x1;
                FUN_0c2dc178(((int)stk + 4));
                mwlRnaWaitTransEnd(a4);
                FUN_0c2dc160(((int)stk + 4));
                (((struct o8C_uint *)(a4))->v) = 0x0;
            }
            mwRnaAdjustBuf(a4);
        }
        t21 = (FUN_0c2dc178(((int)stk + 4)));
    }
    return t21;
}

int FUN_0c2d15f4(int a4)
{
    register int t19;

    if ((unsigned short)a4 != 0x44C) {
        if ((unsigned short)a4 != 0x514) {
            if ((unsigned short)a4 != 0x834) {
            } else {
                FUN_0c2d487c(0x281, 0x4A, 0x1);
                FUN_0c2d487c(0x280, 0xAB, 0x1);
            }
        } else {
            FUN_0c2d487c(0x281, 0x2E, 0x1);
            FUN_0c2d487c(0x280, 0x38, 0x1);
        }
    } else {
        FUN_0c2d487c(0x281, 0x27, 0x1);
        FUN_0c2d487c(0x280, 0x1C, 0x1);
    }
    (((struct o48_uchar *)((*(int *)0xC8D25F0)))->v) = 0x80;
    t19 = *(int *)0xC8D25F0;
    (((struct o20_uchar *)(t19))->v) = ((*(signed char *)(((t19 + 0x20) + 0x0))) | 0x1);
    return FUN_0c2d4ad2();
}

int FUN_0c2e7e3e(void)
{
    *(unsigned char *)0xC8D652A = 0x0;
    if (((unsigned char)(*(signed char *)0xC8D644E) & 128) != 0) {
        FUN_0c2cfb46(0x80);
    }
    FUN_0c2e77bc();
    (((struct o4_uchar *)0xC8D677E)->v) = ((*(signed char *)0xC8D6782) | 0x20);
    FUN_0c2ec410(0xC8D6600, ((unsigned short)(unsigned char)(*(signed char *)0xC8D6459) * (unsigned short)0x64));
    FUN_0c2e6978();
    FUN_0c2cf7e0();
    (((struct o1_uchar *)0xC8D677E)->v) = ((*(signed char *)0xC8D677F) & 0xFE);
    *(unsigned char *)0xC8D660C = 0x4;
    if (((unsigned char)(*(signed char *)0xC8D677B) & 32) != 0) {
        (((struct o0_uchar *)0xC8D677E)->v) = (((*(signed char *)0xC8D677E) & 0xB8) | 0xC);
        return FUN_0c2e8268();
    }
    (((struct o0_uchar *)0xC8D677E)->v) = (((*(signed char *)0xC8D677E) & 0xB8) | 0xA);
    return FUN_0c2ebf28();
}

int FUN_0c180d72(int a4)
{
    register int t0;
    register int t2;

    t0 = 0xFFFFFFFD;
    if (((((struct o0_int *)0xC86CBF0)->v)) != 0) {
    } else {
        (((struct o0_uint *)0xC86CBF0)->v) = 0xFFFFFFFF;
        t0 = 0xFFFFFFFE;
        if ((a4 & 128) == 0) {
        } else {
            t2 = nlsndG2Read(((((struct o4_int *)0xC86CBF0)->v)));
            t0 = 0xFFFFFFFF;
            if (t2 != 0) {
            } else {
                nlsndG2Write(a4, ((((struct o4_int *)0xC86CBF0)->v)));
                t2 = (((struct o4_int *)0xC86CBF0)->v);
                (((struct o4_uint *)0xC86CBF0)->v) = (t2 + 0x4);
                if ((t2 + 0x4) == 0xA0800500) {
                    (((struct o4_uint *)0xC86CBF0)->v) = 0xA0800400;
                }
                t0 = 0x0;
            }
        }
        (((struct o0_uint *)0xC86CBF0)->v) = 0x0;
    }
    return t0;
}

int nlstripSetVertexContext(int a4, int a5, int a6, int a7)
{
    register int t0;

    *(unsigned int *)(((*(int *)0xC8A6AE0) + 0x0)) = 0x600608;
    *(unsigned int *)(((*(int *)0xC8A6AE0) + 0x8)) = (*(int *)((a4 + 0x0)));
    *(unsigned int *)(((*(int *)0xC8A6AE0) + 0xC)) = (*(int *)(((a4 + 0x4) + 0x0)));
    *(unsigned int *)(((*(int *)0xC8A6AE0) + 0x20)) = (*(int *)((((a4 + 0x4) + 0x4) + 0x0)));
    (((struct o44_uint *)((*(int *)0xC8A6AE0)))->v) = (*(int *)(((((a4 + 0x4) + 0x4) + 0x4) + 0x0)));
    (((struct o40_uint *)((*(int *)0xC8A6AE0)))->v) = (*(int *)((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x0)));
    kmProcessVertexRenderState((*(int *)0xC8A6AE0), a5, a6, a7);
    t0 = *(int *)0xC8A6AE0;
    (((struct o90_uint *)(t0))->v) = (((((struct o90_int *)(t0))->v)) & 0xFFFCFF3F);
    t0 = *(int *)0xC8A6AE0;
    (((struct o90_uint *)(t0))->v) = (((((struct o90_int *)(t0))->v)) | ((((struct o0_int *)0xC868768)->v)));
    t0 = *(int *)0xC8A6AE0;
    (((struct o98_uint *)(t0))->v) = (((((struct o98_int *)(t0))->v)) & 0x31FF0FF);
    t0 = *(int *)0xC8A6AE0;
    (((struct o98_uint *)(t0))->v) = (((((struct o98_int *)(t0))->v)) | (((((*(int *)0xC83CF98) ^ 0xFC) << 16) << 8) | ((((struct o4_int *)0xC868768)->v))));
    return kmSetVertexRenderState(0xC8A2E90, (*(int *)0xC8A6AE0));
}

int FUN_0c18f92c(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
    int stk[7];
    register int t2;
    register int t8;
    register int t11;
    register int t17;
    register int t28;
    register int t19;
    register int t22;
    int t6;

    *(unsigned int *)(((int)stk + 16)) = a4;
    *(unsigned short *)(((int)stk + 12)) = a5;
    *(unsigned int *)(((int)stk + 20)) = a6;
    *(unsigned int *)(((int)stk + 8)) = a7;
    t2 = (*(int *)0xC8A9678);
    for (;;) {
        if (t2 == 0) {
            break;
        }
        if ((((*(int *)((t2 + 0x0)))) == a10) && (t6 = *(short *)((t2 + 0x8)), (unsigned short)t6 == (unsigned short)((short)(a9 >> 0)))) {
            *(int *)((int)stk + 4) = ((signed char)(a12 >> 0));
            t8 = (*(int *)(((int)stk + 20)));
            *(int *)((int)stk + 0) = t8;
            t11 = FUN_0c18f9a8(t2, (*(int *)(((int)stk + 16))), (*(short *)(((int)stk + 12))), ((short)(a11 >> 0)), t8, ((signed char)(a12 >> 0)));
            *(unsigned int *)(((int)stk + 24)) = t11;
            if (t11 == 0) {
                return 0x0;
            }
            t2 = a10;
            FUN_0c18fc48(t2, (*(int *)(((int)stk + 8))), ((short)(a9 >> 0)));
            return (*(int *)(((int)stk + 24)));
        }
        t2 = (*(int *)((t2 + 0x10)));
    }
    t17 = FUN_0c18fbde(a10, (*(int *)(((int)stk + 8))), ((short)(a9 >> 0)), ((signed char)(a8 >> 0)));
    t28 = 0x0;
    if (t17 != 0) {
        *(int *)((int)stk + 4) = ((signed char)(a12 >> 0));
        t19 = (*(int *)(((int)stk + 20)));
        *(int *)((int)stk + 0) = t19;
        t22 = FUN_0c18f9a8(t17, (*(int *)(((int)stk + 16))), (*(short *)(((int)stk + 12))), ((short)(a11 >> 0)), t19, ((signed char)(a12 >> 0)));
        *(unsigned int *)(((int)stk + 24)) = t22;
        t28 = 0x0;
        if (t22 == 0) {
        } else {
            FUN_0c18fc48(a10, (*(int *)(((int)stk + 8))), ((short)(a9 >> 0)));
            t28 = (*(int *)(((int)stk + 24)));
        }
    }
    return t28;
}


int FUN_0c1a357c(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = (int)((int)a6 / (int)0x8);
    t1 = ((~(((~a6) + 0x1) & 0x7)) + 0x1);
    if ((int)a6 >= 0) {
        t1 = (a6 & 0x7);
    }
    if (((unsigned char)(*(signed char *)(((t0 + a4) + 0x0))) & (unsigned char)((int)0x80 << (int)(-t1))) == 0) {
        t2 = 0x0;
        t3 = ((int)0x80 << (int)(-t1));
        for (;;) {
            if ((unsigned char)t3 == 0) {
                break;
            }
            t2 = (t2 | t3);
            t3 = (unsigned char)t3;
            t3 = ((unsigned int)t3 >> 1);
        }
        if (((unsigned char)(*(signed char *)(((t0 + a4) + 0x0))) & (unsigned char)t2) != 0) {
            *(unsigned char *)(((t0 + a4) + 0x0)) = ((*(signed char *)(((t0 + a4) + 0x0))) | ((int)0x80 << (int)(-t1)));
        } else {
            t3 = (t0 + a4);
            for (;;) {
                t3 = (t3 + 0x1);
                if ((unsigned int)t3 >= (unsigned int)(a4 + a5)) {
                    return (unsigned char)t2;
                }
                if ((*(signed char *)((t3 + 0x0))) != 0) {
                    break;
                }
            }
            *(unsigned char *)(((t0 + a4) + 0x0)) = ((*(signed char *)(((t0 + a4) + 0x0))) | ((int)0x80 << (int)(-t1)));
        }
        t0 = (unsigned char)t2;
    } else {
        t0 = (-t1);
    }
    return t0;
}

int FUN_0c177d10(int a4)
{
    (((struct o0_uint *)0xC83CD8C)->v) = 0x1F8;
    (((struct o4_uint *)0xC83CD8C)->v) = 0x0;
    (((struct o0_uint *)0xC83CF84)->v) = 0xC83CF9C;
    (((struct o4_uint *)0xC83CF84)->v) = 0xC83CFBC;
    (((struct o8_uint *)0xC83CD8C)->v) = 0xC83CF84;
    (((struct oC_uint *)0xC83CD8C)->v) = 0x2;
    (((struct o4_uint *)0xC83CD8C)->v) = (((((struct o4_int *)0xC83CD8C)->v)) | 0x100);
    (((struct o14_uint *)0xC83CD8C)->v) = (a4 << 2);
    (((struct o18_uint *)0xC83CD8C)->v) = 0x1000;
    (((struct o1C_uint *)0xC83CD8C)->v) = 0x400;
    (((struct o20_uint *)0xC83CD8C)->v) = 0xC83D02C;
    (((struct o24_uint *)0xC83CD8C)->v) = 0xC8A2E90;
    (((struct o28_uint *)0xC83CD8C)->v) = 0x2;
    (((struct o2C_uint *)0xC83CD8C)->v) = 0xACC00000;
    (((struct o30_uint *)0xC83CD8C)->v) = 0x400000;
    (((struct o34_uint *)0xC83CD8C)->v) = 0x1;
    (((struct o38_uint *)0xC83CD8C)->v) = 0x0;
    (((struct o4_float *)0xC83CDD0)->v) = ((((struct o0_float *)0xC177E3C)->v));
    (((struct o8_float *)0xC83CDD0)->v) = ((((struct o4_float *)0xC177E3C)->v));
    (((struct oC_float *)0xC83CDD0)->v) = ((((struct o8_float *)0xC177E3C)->v));
    (((struct o10_float *)0xC83CDD0)->v) = 0.0f;
    (((struct o14_float *)0xC83CDD0)->v) = 0.0f;
    (((struct o0_uint *)0xC83CDD0)->v) = 0x0;
    (((struct o8_uint *)0xC83CF84)->v) = 0x3;
    (((struct oC_uint *)0xC83CF84)->v) = 0x0;
    return 0x44;
}

int nlsndPackLoadLockBG(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t24;
    register int t1;
    register int t3;
    register int t4;
    register int t6;

    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 8)) = a6;
    t24 = 0xFFFFFFFA;
    if (a7 == 0) {
    } else {
        t1 = FUN_0c17ff38(a4, (*(int *)(((int)stk + 4))), a7);
        t24 = t1;
        if (t1 != 0) {
        } else {
            t3 = *(int *)0xC86CC34;
            t4 = *(int *)0xC86CC34;
            t6 = FUN_0c18004c((*(int *)(((int)stk + 4))), (*(int *)((a4 + 0x4))), a7, ((int)stk + 0));
            *(unsigned int *)(((t3 + 0x1C) + 0x0)) = t6;
            *(unsigned int *)(((t4 + 0x18) + 0x0)) = t6;
            *(unsigned int *)(((*(int *)0xC86CC34) + 0x14)) = a4;
            *(unsigned int *)(((*(int *)0xC86CC34) + 0x0)) = 0x8001;
            *(unsigned int *)(((*(int *)0xC86CC34) + 0x4)) = (*(int *)(((int)stk + 8)));
            *(unsigned int *)(((*(int *)0xC86CC34) + 0x8)) = a7;
            *(unsigned int *)(((*(int *)0xC86CC34) + 0xC)) = (*(int *)((a4 + 0x8)));
            *(unsigned int *)(((*(int *)0xC86CC34) + 0x10)) = (*(int *)(((int)stk + 0)));
            t24 = 0x0;
        }
    }
    return t24;
}

int FUN_0c18cd6e(int a4)
{
    register int t0;
    register int t1;
    register int t3;

    t0 = FUN_0c19a2e4();
    t1 = 0xFFFFFFFE;
    if ((int)t0 < 0) {
    } else {
        t1 = FUN_0c19a448(t0, (*(short *)((a4 + 0x6))), (*(int *)((a4 + 0x0))), (*(short *)((a4 + 0x4))));
        if ((int)t1 < 0) {
            FUN_0c19a8ce(t0);
            t1 = 0xFFFFFFFD;
        } else {
            FUN_0c19a7b2(t0, (*(signed char *)((a4 + 0x9))), (*(signed char *)((a4 + 0xA))), (*(signed char *)((a4 + 0xB))), ((*(short *)((a4 + 0xC)))), ((*(int *)((a4 + 0x10)))), 0x0);
            t3 = FUN_0c19a76a(t0, (*(int *)((a4 + 0x0))), (*(short *)((a4 + 0x4))));
            t1 = t0;
            if ((int)t3 < 0) {
                FUN_0c19a8ce(t0);
                t1 = 0xFFFFFFF9;
            }
        }
    }
    return t1;
}

int FUN_0c2d683c(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    if ((*(signed char *)0xC304026) == 0) {
        (((struct oE_uchar *)0xC304018)->v) = 0x1;
        t0 = syTmrGetCount();
        if ((unsigned int)((((struct o10_int *)0xC304018)->v)) > (unsigned int)t0) {
            (((struct o0_uint *)0xC304018)->v) = (((((struct o0_int *)0xC304018)->v)) + 0x1);
        }
        (((struct o10_uint *)0xC304018)->v) = t0;
        t1 = (int)((unsigned int)(syTmrCountToMicro((t0 - ((unsigned int)t0 >> 1)))) / (unsigned int)0x2710);
        t2 = (int)((unsigned int)(syTmrCountToMicro(((unsigned int)t0 >> 1))) / (unsigned int)0x2710);
        t0 = (((struct o0_int *)0xC304018)->v);
        (((struct oE_uchar *)0xC304018)->v) = 0x0;
        (((struct o14_uint *)0xC304018)->v) = ((t1 + t2) + (t0 * 0x7DD44));
    }
    return ((((struct o14_int *)0xC304018)->v));
}
