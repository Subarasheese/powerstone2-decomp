/* Straight-line functions with calls and guards (batch gen_ba): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_short { short v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o0_ushort { unsigned short v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uchar { char p[0x10]; unsigned char v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o10_ushort { char p[0x10]; unsigned short v; };
struct o13A_short { char p[0x13A]; short v; };
struct o13A_ushort { char p[0x13A]; unsigned short v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o146_ushort { char p[0x146]; unsigned short v; };
struct o158_uint { char p[0x158]; unsigned int v; };
struct o164_short { char p[0x164]; short v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1FC_float { char p[0x1FC]; float v; };
struct o2_short { char p[0x2]; short v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o2_ushort { char p[0x2]; unsigned short v; };
struct o20_int { char p[0x20]; int v; };
struct o20_uchar { char p[0x20]; unsigned char v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o24_uchar { char p[0x24]; unsigned char v; };
struct o2C8_short { char p[0x2C8]; short v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o38_uchar { char p[0x38]; unsigned char v; };
struct o3C_int { char p[0x3C]; int v; };
struct o4_int { char p[0x4]; int v; };
struct o4_short { char p[0x4]; short v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
struct o400_uint { char p[0x400]; unsigned int v; };
struct o404_uint { char p[0x404]; unsigned int v; };
struct o408_uint { char p[0x408]; unsigned int v; };
struct o5_uchar { char p[0x5]; unsigned char v; };
struct o50_uchar { char p[0x50]; unsigned char v; };
struct o54_uchar { char p[0x54]; unsigned char v; };
struct o58_uchar { char p[0x58]; unsigned char v; };
struct o6_short { char p[0x6]; short v; };
struct o6_uchar { char p[0x6]; unsigned char v; };
struct o6_ushort { char p[0x6]; unsigned short v; };
struct o64_int { char p[0x64]; int v; };
struct o68_int { char p[0x68]; int v; };
struct o74_uchar { char p[0x74]; unsigned char v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o9C_uchar { char p[0x9C]; unsigned char v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
int ADXCRS_Lock(void);
int ADXCRS_Unlock(void);
int ADXF_Init(void);
int ADXF_Ocbi(int, int);
int ADXSTM_Close(int);
int ADXSTM_Init(void);
int ADXSTM_OpenFname(int, int);
int ADXT_Stop(int);
extern int FUN_0c176e50();
int FUN_0c17edc0(int, int, int, int);
int FUN_0c17f260(int, int, int, int);
int FUN_0c180d72(int);
int FUN_0c1829f8(int);
int FUN_0c183140(int);
int FUN_0c183480(int, int, int);
int FUN_0c184000(int, int, int);
int FUN_0c185210(int);
int FUN_0c185276(int);
int FUN_0c185284(int, int);
int libc_strcmp(int, int);
int FUN_0c187a88(int, int, int);
int FUN_0c18c9ac(int, int, int);
int FUN_0c18c9fc(int, ...);
int FUN_0c18cde8(int, int, int, int);
int FUN_0c18dab4(int);
int FUN_0c18df08(int);
int FUN_0c18ea14(int);
int FUN_0c18fd60(int);
int FUN_0c18fd88(int);
int FUN_0c19114c(int);
int FUN_0c191164(int, int);
int FUN_0c191d9e(void);
int FUN_0c191dae(void);
int FUN_0c192368(int, int);
int FUN_0c1923d0(int);
int FUN_0c1926cc(int);
int FUN_0c197c32(int, int, int, int);
int FUN_0c197c7c(void);
int FUN_0c197cec(int);
int FUN_0c19ae90(int, int);
int FUN_0c19af74(int);
int FUN_0c19afb0(int, int, int);
int FUN_0c19c082(int);
int FUN_0c19c916(int);
int FUN_0c19d3a0(int);
int FUN_0c19d41e(int);
int FUN_0c19e64a(int);
int FUN_0c1a02cc(int, int, int);
int FUN_0c1a14dc(int, int, int);
int FUN_0c1a2074(int, int, int);
int md5_memset(int, int, int);
int FUN_0c2aeb3c(int);
int FUN_0c2aeb54(int);
int FUN_0c2b176e(int);
int FUN_0c2c280c(void);
int FUN_0c2c2874(int, int, int);
int FUN_0c2c2cac(void);
int FUN_0c2c306c(void);
int FUN_0c2c30aa(int, ...);
int FUN_0c2c3224(void);
int FUN_0c2c4ea8(void);
int FUN_0c2c6062(void);
int FUN_0c2c6336(void);
int FUN_0c2c675a(void);
int FUN_0c2d0f58(void);
int FUN_0c2d16b8(int, int);
int FUN_0c2d2050(int, int, int, int);
int FUN_0c2d21ba(int, int, int, int, int, int, int, int, int);
int FUN_0c2d30a8(void);
int FUN_0c2d4768(int, int);
int FUN_0c2d487c(int, int, int);
int FUN_0c2d52d4(void);
int FUN_0c2d61aa(int, int, int, int);
int FUN_0c2d7662(void);
int FUN_0c2d7806(int);
int FUN_0c2d7df8(int, int);
int FUN_0c2d8590(int, int);
int FUN_0c2d8afe(int);
int FUN_0c2dc160(int);
int FUN_0c2dc178(int);
int FUN_0c2dc1ae(int, ...);
int FUN_0c2e638e(void);
int FUN_0c2e83ae(void);
int FUN_0c2eaf6c(int);
int FUN_0c2eb978(int);
int FUN_0c2ec01a(void);
int FUN_0c2ec410(int, int);
int FUN_0c2ec430(int);
int FUN_0c2ef3bc(void);
int FUN_0c2f7d9c(int);
int FUN_0c2fa4cc(int, int, int);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int adxt_start_stm(int);
int gdFsSearchName(int, int, int);
int kmiWriteRegister(int, int);
int kmyWriteFogTable(void);
int memset(int, int, int);
int mwRnaSetPlaySw(int, int);
int mwRnaSetTransSw(int, int);
int mwlRnaIsCopyEnd(int, int, int, int);
int nlLineClipPoint(int, int, int);
int nlsndStreamSetHdOctFns(int, int, int);
int ovGetLibTbl(int);
int ovSearchLibByUuid(int);
int strncpy(int, int, int);
int syChainAddHandler(int, int, int, int);
int syRtcDateToCount(int a4, int a5);
int thunk_FUN_0c2c4b18(void);
int thunk_FUN_0c2dc190(int, int);
int vmsfs_c_getstate(int);
int vmsfs_c_setfunc(int, int);
int vmsfs_c_setparam(int, int, int, int, int, int, int);
int FUN_0c1a1574(int a4, int a5);
int FUN_0c2ae9e4(void);
int FUN_0c2ae992(void);
int search_fat_free(int a4, int a5, int a6, int a7);
int search_fat(int a4, int a5, int a6, int a7);
int mwlRnaWaitTransEnd(int a4, int a5, int a6, int a7);
int mwSbSetSfreq(int a4, int a5);
int FUN_0c2fd28a(void);
int FUN_0c182efc(int a4, int a5);
int FUN_0c182f4c(int a4, int a5);
int FUN_0c182e98(int a4, int a5);
int FUN_0c182df8(int a4, int a5);
int FUN_0c182e48(int a4, int a5);
int FUN_0c183074(int a4);
int FUN_0c18d3d0(int a4, int a5, int a6, int a7);
int FUN_0c198a62(int a4, int a5, int a6);
void FUN_0c19d06a(int a4);
int ovLibEntryTbl(int a4);
void syChainInit(void);
int FUN_0c2c4eac(int a4);
int FUN_0c2cf6f6(int a4);
int FUN_0c2d3370(int a4);
int FUN_0c2d7612(int a4);
int FUN_0c2e818c(int a4);
int FUN_0c181a34(int a4, int a5, int a6);
int FUN_0c182b04(void);
int FUN_0c191ff6(int a4, int a5, int a6);
int FUN_0c19274e(int a4, int a5, int a6, int a7);
int FUN_0c193b96(int a4, int a5);
int FUN_0c19ac74(int a4, int a5, int a6, int a7);
int syCfgGetSoundMode(int a4, int a5, int a6);
int search_fat_used(int a4, int a5, int a6, int a7);
int FUN_0c2d1848(int a4, int a5);
int FUN_0c2d82d4(int a4);
int FUN_0c2e3320(int a4);
void FUN_0c2e8a2e(int a4, int a5);
int FUN_0c2ebfcc(void);
int FUN_0c185438(int a4);
void FUN_0c19ec6e(int a4);
int md5_decode(int a4, int a5, int a6);
int adxf_CloseSjStm(int a4, int a5, int a6, int a7);
int ADXT_Init(void);
int kmyUpdateFogParameter(void);
int FUN_0c2cd500(int a4);
int kmiInitVertexBufferDesc(int a4);
int FUN_0c2d3fbc(void);
int FUN_0c2d6dd2(void);
int FUN_0c2f7e96(int a4);
void FUN_0c177400(void);
int FUN_0c182b8e(int a4, int a5);
int FUN_0c182f9c(int a4, int a5);
int FUN_0c183c02(int a4, int a5);
int FUN_0c184acc(int a4, int a5, int a6, int a7, int a8, int a9);
int FUN_0c18fe5c(void);
int FUN_0c19338e(int a4);
int FUN_0c19ca1a(int a4, int a5);
int FUN_0c19d9ac(int a4, int a5, int a6, int a7);
int FUN_0c1a3aa4(int a4, int a5);
int gdFsGetDirInfoG(int a4, int a5);
int FUN_0c2b29ea(int a4, int a5, int a6);
int ADXT_StartFname(int a4, int a5);
int FUN_0c2d1100(int a4);
int FUN_0c2d49c0(int a4, int a5, int a6, int a7, int a8, int a9);
int FUN_0c2d6272(int a4, int a5, int a6, int a7);
int FUN_0c2d72b8(int a4);
int FUN_0c2d8ab4(int a4);
int FUN_0c2e6310(void);
int FUN_0c2ee948(void);
int FUN_0c2f248c(int a4, int a5);
int FUN_0c2fe21e(int a4);
int nlCreateTextureParamA(int a4, int a5, int a6, int a7);
int nlSysMetricsInit(void);
int nlLineClipNear(int a4, int a5);
int FUN_0c18e932(int a4, int a5, int a6, int a7);
int FUN_0c191aaa(int a4, int a5);
int FUN_0c191904(int a4, int a5);
int FUN_0c194660(int a4);
int FUN_0c194728(int a4);
int FUN_0c19a76a(int a4, int a5, int a6);
int FUN_0c19d208(int a4, int a5);
int syRtcMakeAgeOfMoon(int a4);
int kmSetFogTable(int a4);
int kmBlankScreen(int a4);
int FUN_0c2d0b9a(int a4);
int FUN_0c2d3774(void);
int FUN_0c2da986(int a4);
int mwlSbAllocWork(int a4);
int FUN_0c2e32a0(int a4);
float math_floor_float(float f4);
int FUN_0c17f060(int a4, int a5);
int FUN_0c17f0b0(int a4, int a5);
int FUN_0c17f3a0(int a4, int a5);
int FUN_0c17f3f0(int a4, int a5);
int FUN_0c181524(int a4);
int FUN_0c18e9ce(int a4);
int FUN_0c18f8b2(int a4, int a5);
int FUN_0c2b0d62(int a4, int a5, int a6, int a7);
void FUN_0c2ebdfc(void);

int FUN_0c1a1574(int a4, int a5)
{
    int stk[3];
    register int t1;
    register int t3;

    *(unsigned int *)(((int)stk + 0)) = a4;
    FUN_0c1a2074((((int)stk + 0) + 0x4), (a5 + 0x10), 0x8);
    t1 = *(int *)((a5 + 0x10));
    t3 = 0x38;
    if ((unsigned int)(0x3F & ((unsigned int)((unsigned int)t1 >> 2) >> 1)) >= (unsigned int)0x38) {
        t3 = 0x78;
    }
    FUN_0c1a14dc(a5, 0xC2AE87C, (t3 - (0x3F & ((unsigned int)((unsigned int)t1 >> 2) >> 1))));
    FUN_0c1a14dc(a5, (((int)stk + 0) + 0x4), 0x8);
    FUN_0c1a2074((*(int *)(((int)stk + 0))), a5, 0x10);
    return (md5_memset(a5, 0x0, 0x58));
}

int FUN_0c2ae9e4(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t0 = ((((struct o0_int *)0xC1A3D90)->v));
    for (;;) {
        if ((unsigned int)t0 >= (unsigned int)((((struct o4_int *)0xC1A3D90)->v))) {
            break;
        }
        t2 = (*(int *)((t0 + 0x0)));
        if (t2 != 0) {
            t1 = (*(int *)((t0 + 0x0)));
            if (t1 != -1) {
                t1 = (((int (*)(void))((*(int *)((t0 + 0x0)))))());
            } else {
                t3 = t2;
            }
            t4 = t3;
        } else {
            t4 = t2;
        }
        t2 = t4;
        t0 = (t0 + 0x4);
    }
    t0 = t1;
    t1 = t2;
    t2 = ((((struct o10_int *)0xC1A3D90)->v));
    for (;;) {
        if ((unsigned int)t2 >= (unsigned int)((((struct o14_int *)0xC1A3D90)->v))) {
            break;
        }
        t1 = (*(int *)((t2 + 0x0)));
        if (t1 != 0) {
            t0 = (*(int *)((t2 + 0x0)));
            if (t0 != -1) {
                t0 = (((int (*)(void))((*(int *)((t2 + 0x0)))))());
            } else {
                t3 = t1;
            }
            t4 = t3;
        } else {
            t4 = t1;
        }
        t1 = t4;
        t2 = (t2 + 0x4);
    }
    return t0;
}

int FUN_0c2ae992(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t0 = ((((struct o0_int *)0xC1A3D88)->v));
    for (;;) {
        if ((unsigned int)t0 >= (unsigned int)((((struct o4_int *)0xC1A3D88)->v))) {
            break;
        }
        t2 = (*(int *)((t0 + 0x0)));
        if (t2 != 0) {
            t1 = (*(int *)((t0 + 0x0)));
            if (t1 != -1) {
                t1 = (((int (*)(void))((*(int *)((t0 + 0x0)))))());
            } else {
                t3 = t2;
            }
            t4 = t3;
        } else {
            t4 = t2;
        }
        t2 = t4;
        t0 = (t0 + 0x4);
    }
    t0 = t1;
    t1 = t2;
    t2 = ((((struct o10_int *)0xC1A3D88)->v));
    for (;;) {
        if ((unsigned int)t2 >= (unsigned int)((((struct o14_int *)0xC1A3D88)->v))) {
            break;
        }
        t1 = (*(int *)((t2 + 0x0)));
        if (t1 != 0) {
            t0 = (*(int *)((t2 + 0x0)));
            if (t0 != -1) {
                t0 = (((int (*)(void))((*(int *)((t2 + 0x0)))))());
            } else {
                t3 = t1;
            }
            t4 = t3;
        } else {
            t4 = t1;
        }
        t1 = t4;
        t2 = (t2 + 0x4);
    }
    return t0;
}

int search_fat_free(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(int *)(((*(int *)((((a4 * 0x148) + 0xC8C4604) + 0x1C))) + 0x30));
    if ((int)(t0 - 1) >= (int)a5) {
        t1 = (t0 - 1);
        for (;;) {
            t0 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)0xC8C4600) + 0xC)))))((*(int *)((((a4 * 0x148) + 0xC8C4604) + 0x24))), (t1 << 1), a6, a7);
            if ((unsigned short)t0 == 0xFFFC) {
                break;
            }
            t1 = (t1 - 1);
            if ((int)t1 < (int)a5) {
                return 0xFFFFFFFF;
            }
        }
        t0 = t1;
    } else {
        t0 = 0xFFFFFFFF;
    }
    return t0;
}

int search_fat(int a4, int a5, int a6, int a7)
{
    int stk[5];
    register int t1;
    register int t2;
    register int t7;
    register int t9;

    *(unsigned short *)(((int)stk + 0)) = a5;
    t1 = *(int *)(((*(int *)((((a4 * 0x148) + 0xC8C4604) + 0x1C))) + 0x30));
    if ((int)(t1 - 1) >= 0) {
        t2 = (t1 - 1);
        for (;;) {
            t7 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC8C4600) + 0xC)))))((*(int *)((((a4 * 0x148) + 0xC8C4604) + 0x24))), (t2 << 1), a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
            if ((unsigned short)t7 == (unsigned short)(*(short *)(((int)stk + 0)))) {
                break;
            }
            t2 = (t2 - 1);
            if ((int)t2 < 0) {
                return 0xFFFFFFFF;
            }
        }
        t9 = t2;
    } else {
        t9 = 0xFFFFFFFF;
    }
    return t9;
}

int mwlRnaWaitTransEnd(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    *(unsigned int *)0xC303DA8 = 0x0;
    t0 = 0x0;
    t1 = 0x0;
    for (;;) {
        if ((int)t1 >= (int)0xC8) {
            break;
        }
        t0 = a4;
        t2 = (mwlRnaIsCopyEnd(t0, a5, a6, a7));
        if (t2 != 1) {
            t0 = 0x1388;
            for (;;) {
                t0 = (t0 - 0x1);
                if (t0 == 0) {
                    break;
                }
            }
            t3 = (*(int *)0xC303DA8);
            t1 = (t1 + 0x1);
            t3 = (t3 + 0x1);
            *(unsigned int *)0xC303DA8 = t3;
            continue;
        }
        break;
    }
    t0 = t2;
    if (t1 == 0xC8) {
        t0 = (FUN_0c2dc1ae(0xC2FFF34));
    }
    return t0;
}

int mwSbSetSfreq(int a4, int a5)
{
    register int t1;
    register int t5;

    t1 = *(signed char *)((0xC300A38 + ((int)((int)0xAC44 / (int)(a5 + 0x1)))));
    t5 = nlsndStreamSetHdOctFns((*(int *)(((*(int *)((a4 + 0x1C))) + 0x4))), (0xF & (-t1)), (0x3FF & ((int)((int)(((a5 - ((int)0xAC44 << (int)(-t1))) << 8) << 2) / (int)((int)0xAC44 << (int)(-t1))))));
    *(unsigned int *)((a4 + 0x14)) = a5;
    return t5;
}

int FUN_0c2fd28a(void)
{
    int stk[1];
    register int t12;
    register int t14;
    register int t15;

    *(unsigned char *)0xC8D678A = ((*(signed char *)0xC8D678A) & 0xFB);
    FUN_0c2d16b8((*(signed char *)(((*(int *)0xC8D66E8) + 0x22))), (*(signed char *)(((*(int *)0xC8D66E8) + 0x23))));
    if ((int)(unsigned char)(*(signed char *)(((*(int *)0xC8D66E8) + 0x24))) > 0) {
        t14 = (unsigned char)(*(signed char *)(((*(int *)0xC8D66E8) + 0x24)));
        t15 = (unsigned char)(*(signed char *)(((*(int *)0xC8D66E8) + 0x25)));
    } else {
        t12 = *(signed char *)0xC8D644B;
        *(unsigned short *)(((int)stk + 0)) = (unsigned char)t12;
        t14 = (*(short *)(((int)stk + 0)));
        t15 = (unsigned char)t12;
    }
    return FUN_0c2d1848(t14, t15);
}

int FUN_0c182efc(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = FUN_0c1829f8(a4);
    if (t0 == 0) {
        t1 = *(int *)0xC2A6294;
        t2 = a4;
        if (a4 == 0) {
            t3 = 0x1;
            if (((*(int *)((t1 + 0x0))) & 1) != 0) {
                t3 = 0x2;
            }
            t2 = t3;
        }
        t3 = 0x298;
        if (t2 == 1) {
            t3 = 0x134;
        }
        strncpy(a5, (t3 + t1), 0x10);
    }
    return t0;
}

int FUN_0c182f4c(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = FUN_0c1829f8(a4);
    if (t0 == 0) {
        t1 = *(int *)0xC2A6294;
        t2 = a4;
        if (a4 == 0) {
            t3 = 0x1;
            if (((*(int *)((t1 + 0x0))) & 1) != 0) {
                t3 = 0x2;
            }
            t2 = t3;
        }
        t3 = 0x2A8;
        if (t2 == 1) {
            t3 = 0x144;
        }
        strncpy(a5, (t3 + t1), 0x20);
    }
    return t0;
}

int FUN_0c182e98(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = FUN_0c1829f8(a4);
    if (t0 == 0) {
        t1 = *(int *)0xC2A6294;
        t2 = a4;
        if (a4 == 0) {
            t3 = 0x1;
            if (((*(int *)((t1 + 0x0))) & 1) != 0) {
                t3 = 0x2;
            }
            t2 = t3;
        }
        t3 = 0x288;
        if (t2 == 1) {
            t3 = 0x124;
        }
        strncpy(a5, (t3 + t1), 0x10);
    }
    return t0;
}

int FUN_0c182df8(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = FUN_0c1829f8(a4);
    if (t0 == 0) {
        t1 = *(int *)0xC2A6294;
        t2 = a4;
        if (a4 == 0) {
            t3 = 0x1;
            if (((*(int *)((t1 + 0x0))) & 1) != 0) {
                t3 = 0x2;
            }
            t2 = t3;
        }
        t3 = 0x248;
        if (t2 == 1) {
            t3 = 0xE4;
        }
        strncpy(a5, (t3 + t1), 0x20);
    }
    return t0;
}

int FUN_0c182e48(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = FUN_0c1829f8(a4);
    if (t0 == 0) {
        t1 = *(int *)0xC2A6294;
        t2 = a4;
        if (a4 == 0) {
            t3 = 0x1;
            if (((*(int *)((t1 + 0x0))) & 1) != 0) {
                t3 = 0x2;
            }
            t2 = t3;
        }
        t3 = 0x268;
        if (t2 == 1) {
            t3 = 0x104;
        }
        strncpy(a5, (t3 + t1), 0x20);
    }
    return t0;
}

int FUN_0c183074(int a4)
{
    register int t4;

    *(unsigned int *)0xC2A62A8 = a4;
    *(unsigned int *)0xC874F88 = 0x80;
    memset(0xC86CF88, 0xAA, 0x4000);
    FUN_0c18c9ac(0xC86CEE8, 0xC182FFC, 0xC870F84);
    memset(0xC870F88, 0xAA, 0x4000);
    FUN_0c18c9ac(0xC86CF38, 0xC183018, 0xC874F84);
    t4 = syChainAddHandler(0x900, 0xC183034, 0x4C, 0x0);
    *(unsigned int *)0xC86CE94 = t4;
    return t4;
}

int FUN_0c18d3d0(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t2;

    if (a5 != 0) {
        t0 = a6;
        if (a6 == 0) {
            t0 = 0xFFFFFFF8;
        }
        t2 = FUN_0c197c32(a4, a5, t0, a7);
        FUN_0c19ae90(a4, t2);
    } else {
        *(unsigned int *)(((((a4 << 2) << 2) + 0xC8A7030) + 0x4)) = a6;
        *(unsigned int *)(((((a4 << 2) << 2) + 0xC8A7030) + 0x8)) = a7;
        *(unsigned int *)(((((a4 << 2) << 2) + 0xC8A7030) + 0x0)) = a4;
    }
    return 0x0;
}

int FUN_0c198a62(int a4, int a5, int a6)
{
    int t0;
    int t3;
    register int t6;
    register int t9;

    t0 = FUN_0c18dab4(a4);
    t3 = 0xFF000000;
    if ((0x80000000 & t0) == 0) {
    } else {
        t3 = 0xFFFFFF00;
        if ((0x40000000 & t0) == 0) {
            t3 = 0xFFFF0000;
        }
    }
    t6 = FUN_0c18dab4(a6);
    t9 = t3;
    if ((t0 & t3) == (t6 & t3)) {
        t9 = (FUN_0c18dab4(a5));
    }
    return (FUN_0c18dab4(t9));
}

void FUN_0c19d06a(int a4)
{
    if ((*(int *)((((a4 + 0x4) + 0x9C) + 0x30))) == 0) {
        *(unsigned int *)((((a4 + 0x4) + 0x9C) + 0xC)) = a4;
        *(unsigned int *)((((a4 + 0x4) + 0x9C) + 0x2C)) = 0xC20AA08;
        *(unsigned int *)((((a4 + 0x4) + 0x9C) + 0x30)) = 0xC8B5E38;
        *(unsigned char *)((((a4 + 0x4) + 0x9C) + 0x4)) = (*(signed char *)(((*(int *)((((a4 + 0x4) + 0x9C) + 0x2C))) + 0x9)));
        *(unsigned char *)((((a4 + 0x4) + 0x9C) + 0x7)) = (*(signed char *)(((*(int *)((((a4 + 0x4) + 0x9C) + 0x2C))) + 0xA)));
        *(unsigned char *)((((a4 + 0x4) + 0x9C) + 0x5)) = (*(signed char *)(((*(int *)((((a4 + 0x4) + 0x9C) + 0x2C))) + 0xB)));
        (((struct o9C_uchar *)((a4 + 0x4)))->v) = 0x0;
        *(unsigned char *)((((a4 + 0x4) + 0x9C) + 0x3)) = (*(signed char *)((((a4 + 0x4) + 0x9C) + 0x4)));
        *(unsigned char *)((((a4 + 0x4) + 0x9C) + 0x6)) = (*(signed char *)((((a4 + 0x4) + 0x9C) + 0x7)));
        *(unsigned int *)(((((a4 + 0x4) + 0x9C) + 0x10) + 0x10)) = 0xC19CF08;
        *(unsigned int *)(((((a4 + 0x4) + 0x9C) + 0x10) + 0x14)) = ((a4 + 0x4) + 0x9C);
        FUN_0c191164((((a4 + 0x4) + 0x9C) + 0x10), (*(int *)(((*(int *)((((a4 + 0x4) + 0x9C) + 0x2C))) + 0xC))));
    return;
    }
}

int ovLibEntryTbl(int a4)
{
    int stk[3];
    register int t1;
    register int t3;
    register int t4;

    *(unsigned int *)(((int)stk + 4)) = a4;
    FUN_0c2aeb3c(((int)stk + 0));
    t1 = ovGetLibTbl((((int)stk + 0) + 0x8));
    t3 = ovSearchLibByUuid(((*(int *)(((int)stk + 4))) + 0x10));
    if ((int)t3 < 0) {
        t4 = *(int *)((t1 + 0x0));
        *(unsigned int *)((((t1 + 0x8) + ((t4 << 2) << 1)) + 0x0)) = (*(int *)(((int)stk + 4)));
        *(unsigned int *)(((((t4 << 2) << 1) + (t1 + 0x8)) + 0x4)) = 0x0;
        *(unsigned int *)((t1 + 0x0)) = ((*(int *)((t1 + 0x0))) + 0x1);
    }
    FUN_0c2aeb54(((int)stk + 0));
    return 0x0;
}

void syChainInit(void)
{
    int stk[1];
    register int t1;
    register int t2;

    *(unsigned short *)(((int)stk + 0)) = (_builtin_get_imask());
    _builtin_set_imask(0xF);
    t1 = 0xC8C0884;
    for (;;) {
        *(unsigned int *)((t1 + 0xC)) = 0x0;
        t1 = (t1 + 0x10);
        if ((unsigned int)t1 >= (unsigned int)0xC8C1884) {
            break;
        }
    }
    t2 = 0xC8C1884;
    for (;;) {
        *(unsigned int *)((t2 + 0x0)) = 0x0;
        t2 = (t2 + 0x4);
        if ((unsigned int)t2 >= (unsigned int)0xC8C1B84) {
            break;
        }
    }
    _builtin_set_imask(((unsigned int)((((unsigned short)(*(short *)(((int)stk + 0))) & 0xF) << 2) << 2) >> 4));
}

int FUN_0c2c4eac(int a4)
{
    int stk[2];
    register int t2;
    register int t8;

    if (a4 == 0) {
        *(int *)((int)stk + 0) = 0xC2FFEE8;
        return (FUN_0c2dc1ae(0xC2FFEE8));
    }
    t2 = *(signed char *)((a4 + 0x1));
    t8 = t2;
    if (t2 != 0) {
        FUN_0c2dc160(((int)stk + 4));
        mwRnaSetPlaySw(a4, 0x0);
        mwRnaSetTransSw(a4, 0x0);
        FUN_0c2c4ea8();
        *(unsigned char *)((a4 + 0x7)) = 0x0;
        *(unsigned char *)((a4 + 0x1)) = 0x0;
        t8 = (FUN_0c2dc178(((int)stk + 4)));
    }
    return t8;
}

int FUN_0c2cf6f6(int a4)
{
    if ((unsigned char)a4 != 37) {
        if ((unsigned char)a4 != 38) {
            if ((unsigned char)a4 != 42) {
                if ((unsigned char)a4 != 43) {
                    if ((unsigned char)a4 != 64) {
                        if ((unsigned char)a4 != 92) {
                            return 0x0;
                        }
                        *(unsigned int *)0xC8D6670 = 0xC3002F0;
                        return 0x1;
                    }
                    *(unsigned int *)0xC8D6670 = 0xC300358;
                    return 0x1;
                }
                (((struct o0_uchar *)0xC8D666A)->v) = 0x6;
                return 0x1;
            }
            *(unsigned int *)0xC8D6670 = 0xC300324;
            return 0x1;
        }
        *(unsigned int *)0xC8D6670 = 0xC300288;
        return 0x1;
    }
    *(unsigned int *)0xC8D6670 = 0xC3002BC;
    return 0x1;
}

int FUN_0c2d3370(int a4)
{
    int stk[1];
    register int t2;

    *(unsigned char *)(((int)stk + 0)) = a4;
    if (((*(signed char *)((((*(int *)0xC8D25F0) + 0x3C) + 0x0))) & 128) != 0) {
        t2 = FUN_0c2d30a8();
        if ((int)(unsigned short)t2 < (int)(unsigned char)(*(signed char *)(((int)stk + 0)))) {
            return 0x1;
        }
        return 0x0;
    }
    return FUN_0c2eaf6c(a4);
}

int FUN_0c2d7612(int a4)
{
    register int t0;

    if ((signed char)a4 != 0) {
        if ((*(signed char *)0xC8D7085) != 0) {
            FUN_0c2ec410(0xC8D683C, 0xA);
            return 0x0;
        }
        t0 = FUN_0c2ec430((*(int *)0xC8D683C));
        if ((signed char)t0 == 0) {
            return 0x0;
        }
        return 0x1;
    }
    if ((unsigned char)(*(signed char *)0xC8D6828) != 11) {
        t0 = FUN_0c2d7662();
        if ((signed char)t0 != 0) {
            return 0x1;
        }
        return 0x0;
    }
    return 0x0;
}

int FUN_0c2e818c(int a4)
{
    int stk[1];
    register int t5;

    *(unsigned char *)(((int)stk + 0)) = a4;
    FUN_0c2e83ae();
    (((struct o10_uchar *)0xC8D677E)->v) = ((*(signed char *)0xC8D678E) & 0x7F);
    (((struct o1_uchar *)0xC8D677E)->v) = ((*(signed char *)0xC8D677F) | 0x1);
    (((struct o0_uchar *)0xC8D677E)->v) = ((*(signed char *)0xC8D677E) | 0x40);
    *(unsigned short *)0xC8D6524 = 0x6;
    (((struct o0_uchar *)0xC8D64A3)->v) = 0x41;
    (((struct o1_uchar *)0xC8D64A3)->v) = 0x54;
    (((struct o2_uchar *)0xC8D64A3)->v) = 0x44;
    (((struct o3_uchar *)0xC8D64A3)->v) = 0x53;
    (((struct o4_uchar *)0xC8D64A3)->v) = 0x3D;
    (((struct o5_uchar *)0xC8D64A3)->v) = ((*(signed char *)(((int)stk + 0))) + 0x30);
    t5 = *(signed char *)0xC8D6526;
    (((struct o6_uchar *)0xC8D64A3)->v) = t5;
    return t5;
}

int FUN_0c181a34(int a4, int a5, int a6)
{
    int stk[2];
    register int t2;

    *(unsigned short *)(((int)stk + 0)) = a6;
    t2 = *(signed char *)((0xC86CC40 + (unsigned char)((((a4 << 1) + a4) << 2) << 1)));
    if (t2 == 1) {
        *(unsigned int *)(((int)stk + 4)) = ((((short)a4 << 8) << 2) << 2);
        FUN_0c180d72(((((((short)a4 << 8) << 2) << 2) | ((short)a5 << 16)) | 0xAA1));
        return FUN_0c180d72(((((*(short *)(((int)stk + 0))) << 16) | (*(int *)(((int)stk + 4)))) | 0xBA1));
    }
    return t2;
}

int FUN_0c182b04(void)
{
    register int t10;

    if (((((struct o0_int *)0xC2A6290)->v)) != 0) {
        FUN_0c2c280c();
        if ((((((struct o8_int *)0xC2A6290)->v)) & 1) == 0) {
            FUN_0c2b176e(((((struct o0_int *)0xC2A6290)->v)));
        }
        (((struct o0_uint *)0xC2A6290)->v) = 0x0;
    }
    t10 = (((struct o4_int *)0xC2A6290)->v);
    if (t10 != 0) {
        if ((((((struct o8_int *)0xC2A6290)->v)) & 2) == 0) {
            FUN_0c2b176e(t10);
        }
        (((struct o4_uint *)0xC2A6290)->v) = 0x0;
    }
    (((struct o8_uint *)0xC2A6290)->v) = 0x0;
    return 0x0;
}

int FUN_0c191ff6(int a4, int a5, int a6)
{
    int stk[4];

    *(unsigned short *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 0)) = a5;
    *(unsigned int *)(((int)stk + 8)) = a6;
    *(unsigned int *)(((int)stk + 12)) = 0xC8AA218;
    if ((*(short *)0xC2AE76E) == 1) {
        *(unsigned short *)(((*(int *)(((int)stk + 8))) + 0x0)) = 0x0;
    } else {
        memset((*(int *)(((int)stk + 0))), 0x0, (unsigned short)(*(short *)(((int)stk + 4))));
        *(unsigned short *)(((*(int *)(((int)stk + 8))) + 0x0)) = (FUN_0c183480((*(int *)(((*(int *)(((int)stk + 12))) + 0x0))), (*(int *)(((int)stk + 0))), (unsigned short)(*(short *)(((int)stk + 4)))));
    }
    return 0x0;
}

int FUN_0c19274e(int a4, int a5, int a6, int a7)
{
    int stk[4];
    register int t3;

    *(unsigned int *)(((int)stk + 0)) = a7;
    if ((*(signed char *)0xC8ABB24) == 0) {
        (((struct o0_ushort *)0xC8ABC10)->v) = (((((struct o0_short *)0xC8ABC10)->v)) + 0x1);
        return 0xFFFFFFFF;
    }
    *(unsigned char *)(((int)stk + 4)) = 0xFF;
    *(unsigned char *)(((int)stk + 5)) = 0x3;
    *(unsigned short *)(((int)stk + 6)) = a6;
    t3 = FUN_0c192368((((int)stk + 0) + 0x4), (*(int *)(((int)stk + 0))));
    if (t3 == 0) {
        (((struct o2_ushort *)0xC8ABC10)->v) = (((((struct o2_short *)0xC8ABC10)->v)) + 0x1);
        return 0xFFFFFFFF;
    }
    return (FUN_0c1923d0(t3));
}

int FUN_0c193b96(int a4, int a5)
{
    int stk[5];
    register int t0;
    register int t5;

    *(unsigned short *)(((int)stk + 4)) = 0x0;
    *(unsigned int *)(((int)stk + 8)) = a4;
    *(unsigned int *)(((int)stk + 12)) = a5;
    *(unsigned int *)(((int)stk + 16)) = 0x0;
    t0 = FUN_0c184000(0x4105, (((int)stk + 0) + 0x4), (((int)stk + 0) + 0x4));
    t5 = t0;
    if ((short)t0 != 0) {
        *(unsigned short *)(((int)stk + 0)) = 0x0;
        FUN_0c184000(0x4106, ((int)stk + 0), ((int)stk + 0));
        t5 = (FUN_0c184000(0x4105, (((int)stk + 0) + 0x4), (((int)stk + 0) + 0x4)));
    }
    return t5;
}

int FUN_0c19ac74(int a4, int a5, int a6, int a7)
{
    int stk[2];
    register int t0;
    int t2;

    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned char *)(((int)stk + 0)) = a7;
    t0 = *(int *)0xC8A73C0;
    if (((int)(unsigned short)((((struct o13A_short *)(((a4 * 0x174) + t0)))->v)) > (int)0x5) && (t2 = *(signed char *)((((a4 * 0x174) + t0) + 0x13E)), ((unsigned char)t2 & 8) != 0)) {
        return 0xFFFFFFF6;
    }
    FUN_0c19afb0((*(int *)(((int)stk + 4))), ((a4 * 0x174) + t0), a6);
    *(volatile signed char *)(((int)stk + 0));
    return FUN_0c19c082(((a4 * 0x174) + t0));
}

int syCfgGetSoundMode(int a4, int a5, int a6)
{
    register int t0;
    register int t1;

    if (a4 != 0) {
        *(unsigned int *)((a4 + 0x0)) = 0x0;
        t0 = *(int *)0xC303724;
        if (t0 != 0) {
            t1 = FUN_0c2c2874(0x0, t0, a6);
            if (t1 != -1) {
                t0 = *(signed char *)0x8C00007E;
                if ((signed char)t0 == 0) {
                    *(unsigned int *)((a4 + 0x0)) = 0x0;
                    return 0x0;
                }
                if ((signed char)t0 == 1) {
                    *(unsigned int *)((a4 + 0x0)) = 0x1;
                    return 0x0;
                }
                return 0xFFFFFFFF;
            }
            return 0xFFFFFFFF;
        }
        return 0xFFFFFFFF;
    }
    return 0xFFFFFFFF;
}

int search_fat_used(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t7;

    t0 = 0x0;
    for (;;) {
        if ((int)t0 >= (int)(*(int *)(((*(int *)((((a4 * 0x148) + 0xC8C4604) + 0x1C))) + 0x30)))) {
            return 0xFFFFFFFF;
        }
        t7 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)0xC8C4600) + 0xC)))))((*(int *)((((a4 * 0x148) + 0xC8C4604) + 0x24))), (t0 << 1), a6, a7);
        if (((unsigned short)t7 != 0xFFFC) && ((unsigned short)t7 != 0xFFFF)) {
            break;
        }
        t0 = (t0 + 0x1);
    }
    return t0;
}

int FUN_0c2d1848(int a4, int a5)
{
    int stk[2];
    register int t3;

    *(unsigned short *)(((int)stk + 0)) = a5;
    FUN_0c2d487c(0x218, ((((short)a4 << 2) + (short)a4) >> 1), 0x1);
    FUN_0c2d487c(0x2DB, ((unsigned int)(unsigned short)((((short)a4 << 2) + (short)a4) >> 1) >> 8), 0x1);
    t3 = *(short *)(((int)stk + 0));
    FUN_0c2d487c(0x219, (((t3 << 2) + t3) >> 1), 0x1);
    return FUN_0c2d487c(0x2DC, ((unsigned int)(unsigned short)(((t3 << 2) + t3) >> 1) >> 8), 0x1);
}

int FUN_0c2d82d4(int a4)
{
    int stk[3];
    register int t2;
    register int t4;
    register int t8;

    if ((*(int *)((a4 + 0x8))) != 0) {
        *(unsigned int *)((((int)stk + 0) + 0x4)) = ((int)stk + 0);
        *(unsigned char *)((((int)stk + 0) + 0x0)) = 0x0;
        FUN_0c2d7df8(a4, 0x0);
        t2 = *(int *)((a4 + 0xC));
        (((struct o74_uchar *)(t2))->v) = ((*(signed char *)((t2 + 0x74))) | 0x80);
        t4 = *(int *)((a4 + 0x8));
        (((struct o50_uchar *)(t4))->v) = ((*(signed char *)(((t4 + 0x50) + 0x0))) | 0x40);
        *(unsigned char *)((((int)stk + 0) + 0x0)) = ((*(signed char *)((((int)stk + 0) + 0x0))) | 0x40);
        t8 = (FUN_0c2d8590(a4, ((int)stk + 0)));
    }
    return t8;
}

int FUN_0c2e3320(int a4)
{
    register int t0;
    register int t1;

    *(unsigned int *)((a4 + 0x4)) = (((*(int *)((a4 + 0xC))) - ((int)((unsigned int)(*(int *)((a4 + 0x0))) / (unsigned int)(*(int *)((a4 + 0x10)))))) - 1);
    t0 = (int)((unsigned int)(*(int *)((a4 + 0x0))) % (unsigned int)(*(int *)((a4 + 0x10))));
    *(unsigned int *)((a4 + 0x8)) = t0;
    if ((unsigned int)t0 <= (unsigned int)((((struct oC_int *)0xC8BF0EC)->v))) {
        if ((unsigned int)t0 >= (unsigned int)((((struct o4_int *)0xC8BF0EC)->v))) {
            if ((unsigned int)(*(int *)((a4 + 0x4))) <= (unsigned int)((((struct o8_int *)0xC8BF0EC)->v))) {
                if ((unsigned int)(*(int *)((a4 + 0x4))) < (unsigned int)((((struct o0_int *)0xC8BF0EC)->v))) {
                    *(unsigned int *)((a4 + 0x14)) = 0x1;
                }
                t0 = 0x944;
            } else {
                *(unsigned int *)((a4 + 0x14)) = 0x1;
                t0 = 0x94C;
            }
            t1 = t0;
        } else {
            *(unsigned int *)((a4 + 0x14)) = 0x1;
            t1 = 0x948;
        }
        t0 = t1;
    } else {
        *(unsigned int *)((a4 + 0x14)) = 0x1;
        t0 = 0x950;
    }
    return t0;
}

void FUN_0c2e8a2e(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = (*(int *)0xC8D66EC);
    for (;;) {
        if ((unsigned char)(*(signed char *)((t0 + 0x0))) == 0xFF) {
            return;
        }
        if ((unsigned char)(*(signed char *)((t0 + 0x0))) == (unsigned char)a4) {
            break;
        }
        t0 = (t0 + 0x4);
    }
    t1 = *(signed char *)((t0 + 0x2));
    t2 = *(signed char *)((a5 + 0x0));
    t3 = t1;
    if ((int)(unsigned char)t2 > (int)(unsigned char)t1) {
        t3 = t2;
    }
    *(unsigned char *)((a5 + 0x0)) = t3;
    t1 = *(signed char *)((t0 + 0x3));
    t0 = *(signed char *)((a5 + 0x0));
    t2 = t1;
    if ((int)(unsigned char)t0 < (int)(unsigned char)t1) {
        t2 = t0;
    }
    *(unsigned char *)((a5 + 0x0)) = t2;
}


int FUN_0c2ebfcc(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = 0xC8D67D3;
    t1 = 0x0;
    t2 = 0x0;
    for (;;) {
        t1 = (t1 + 0x1);
        t3 = *(signed char *)((t0 + 0x0));
        t0 = (t0 + 0x1);
        t2 = (t2 + t3);
        if ((int)(unsigned char)t1 > (int)0x1D) {
            break;
        }
    }
    if ((unsigned char)t2 != 0) {
        /* manual: r5 (the counter, 0x1E) and r6 (the buffer) are still set at the bsr, and FUN_0c2eb978 passes them on */
        ((int (*)(int, int, int))FUN_0c2eb978)(0x1, t1, 0xC8D67D3);
        return 0x1;
    }
    t0 = 0x0;
    for (;;) {
        t1 = (unsigned char)t0;
        t0 = (t0 + 0x1);
        *(unsigned char *)((0xC8D6799 + t1)) = (*(signed char *)((0xC8D67D3 + t1)));
        if ((int)(unsigned char)t0 >= (int)0x1D) {
            break;
        }
    }
    FUN_0c2ec01a();
    return 0x0;
}

int FUN_0c185438(int a4)
{
    int stk[2];
    register int t0;
    register int t9;
    register int t1;

    t0 = FUN_0c185210(a4);
    t9 = 0xFFFFFFFF;
    if (t0 == -1) {
    } else {
        for (;;) {
            t1 = FUN_0c185284(t0, (((int)stk + 0) + 0x4));
            if (t1 != -2) {
                break;
            }
        }
        if (t1 == 0) {
            FUN_0c187a88(((int)stk + 0), (((int)stk + 0) + 0x4), 0x4);
        } else {
            *(unsigned int *)(((int)stk + 0)) = 0x0;
        }
        FUN_0c185276(t0);
        t9 = (*(int *)(((int)stk + 0)));
    }
    return t9;
}

void FUN_0c19ec6e(int a4)
{
    if ((*(int *)(((a4 + 0x38) + 0x30))) == 0) {
        *(unsigned int *)(((a4 + 0x38) + 0xC)) = a4;
        *(unsigned int *)(((a4 + 0x38) + 0x2C)) = 0xC20ABC0;
        *(unsigned int *)(((a4 + 0x38) + 0x30)) = 0xC8B5FCC;
        *(unsigned char *)(((a4 + 0x38) + 0x4)) = (*(signed char *)(((*(int *)(((a4 + 0x38) + 0x2C))) + 0x9)));
        *(unsigned char *)(((a4 + 0x38) + 0x7)) = (*(signed char *)(((*(int *)(((a4 + 0x38) + 0x2C))) + 0xA)));
        *(unsigned char *)(((a4 + 0x38) + 0x5)) = (*(signed char *)(((*(int *)(((a4 + 0x38) + 0x2C))) + 0xB)));
        (((struct o38_uchar *)(a4))->v) = 0x0;
        *(unsigned char *)(((a4 + 0x38) + 0x3)) = (*(signed char *)(((a4 + 0x38) + 0x4)));
        *(unsigned char *)(((a4 + 0x38) + 0x6)) = (*(signed char *)(((a4 + 0x38) + 0x7)));
        *(unsigned int *)((((a4 + 0x38) + 0x10) + 0x10)) = 0xC19EBFC;
        *(unsigned int *)((((a4 + 0x38) + 0x10) + 0x14)) = (a4 + 0x38);
        FUN_0c191164(((a4 + 0x38) + 0x10), (*(int *)(((*(int *)(((a4 + 0x38) + 0x2C))) + 0xC))));
    return;
    }
}

int md5_decode(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    if ((unsigned int)0x0 < (unsigned int)a6) {
        t0 = 0x0;
        t1 = 0x0;
        for (;;) {
            t3 = *(signed char *)(((a5 + t1) + 0x1));
            t4 = (a5 + t1);
            t1 = (t1 + 0x4);
            t2 = *(signed char *)((t4 + 0x3));
            *(unsigned int *)((((t0 << 2) + a4) + 0x0)) = (((((unsigned char)t3 << 8) | ((unsigned char)(*(signed char *)((t4 + 0x2))) << 16)) | (((unsigned char)t2 << 16) << 8)) | (unsigned char)(*(signed char *)((t4 + 0x0))));
            t0 = (t0 + 0x1);
            if ((unsigned int)t1 >= (unsigned int)a6) {
                break;
            }
        }
        t0 = (((unsigned char)t2 << 16) << 8);
    }
    return t0;
}

int adxf_CloseSjStm(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    if ((*(int *)((a4 + 0x4))) != 0) {
        t0 = ADXSTM_Close((*(int *)((a4 + 0x4))));
        *(unsigned int *)((a4 + 0x4)) = 0x0;
        t1 = t0;
    }
    t0 = t1;
    if ((*(int *)((a4 + 0x8))) != 0) {
        t1 = *(signed char *)((a4 + 0x2));
        t0 = t1;
        if (t1 == 0) {
            if ((*(int *)0xC8CC444) == 1) {
                ADXF_Ocbi((*(int *)((a4 + 0x28))), (*(int *)((a4 + 0x2C))));
            }
            t1 = *(int *)((a4 + 0x8));
            t0 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)((t1 + 0x0))) + 0xC)))))(t1, a5, a6, a7);
            *(unsigned int *)((a4 + 0x8)) = 0x0;
        }
    }
    return t0;
}

int ADXT_Init(void)
{
    ADXF_Init();
    FUN_0c2c675a();
    FUN_0c2c6336();
    FUN_0c2c6062();
    FUN_0c2c2cac();
    thunk_FUN_0c2c4b18();
    ADXSTM_Init();
    FUN_0c2c3224();
    FUN_0c2c306c();
    thunk_FUN_0c2dc190(0xC2B4014, 0x0);
    return memset(0xC30373C, 0x0, 0x460);
}

int kmyUpdateFogParameter(void)
{
    register int t14;
    register int t18;

    if ((((((struct o0_int *)0xC8D097C)->v)) & 4) != 0) {
        kmyWriteFogTable();
    }
    *(volatile int *)0xC8D097C;
    if ((((((struct o0_int *)0xC8D097C)->v)) & 1) != 0) {
        (((struct o0_uint *)0xC8D097C)->v) = (((((struct o0_int *)0xC8D097C)->v)) & 0xFFFFFFFE);
        kmiWriteRegister(0xB0, ((((struct o8_int *)0xC8D097C)->v)));
    }
    t14 = (((struct o0_int *)0xC8D097C)->v);
    t18 = t14;
    if ((t14 & 2) != 0) {
        (((struct o0_uint *)0xC8D097C)->v) = (((((struct o0_int *)0xC8D097C)->v)) & 0xFFFFFFFD);
        t18 = (kmiWriteRegister(0xB8, ((((struct oC_int *)0xC8D097C)->v))));
    }
    return t18;
}

int FUN_0c2cd500(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t0 = *(int *)0xC8BEFD0;
    t1 = *(int *)((t0 + 0x4));
    t2 = *(int *)((t0 + 0xC));
    t3 = *(int *)((t0 + 0x8));
    t4 = *(int *)((t0 + 0x0));
    *(unsigned int *)((a4 + 0x4)) = (((int)((unsigned int)(*(int *)((a4 + 0x0))) / (unsigned int)((t2 - t1) + 0x1))) + t4);
    *(unsigned int *)((a4 + 0x8)) = (((int)((unsigned int)(*(int *)((a4 + 0x0))) % (unsigned int)((t2 - t1) + 0x1))) + (*(int *)(((*(int *)0xC8BEFD0) + 0x4))));
    t0 = *(int *)((a4 + 0x0));
    if (t0 == ((((t3 - t4) + 0x1) * ((t2 - t1) + 0x1)) - 1)) {
        *(unsigned int *)((a4 + 0x18)) = 0x1;
    }
    return t0;
}

int kmiInitVertexBufferDesc(int a4)
{
    register int t0;

    t0 = *(int *)((a4 + 0x24));
    (((struct oC_uint *)0xC8BE7DC)->v) = 0x0;
    (((struct o8_uint *)0xC8BE7DC)->v) = 0x0;
    (((struct o4_uint *)0xC8BE7DC)->v) = 0x0;
    (((struct o10_uint *)0xC8BE7DC)->v) = 0x0;
    (((struct o0_uint *)0xC8BE7DC)->v) = 0x0;
    (((struct o18_uint *)0xC8BE7DC)->v) = 0x0;
    *(unsigned int *)((t0 + 0x0)) = 0xC8BE858;
    *(unsigned int *)((t0 + 0x10)) = 0xC8BE858;
    *(unsigned int *)((t0 + 0x4)) = 0xC8BE800;
    *(unsigned int *)((t0 + 0x8)) = 0xC8BE7DC;
    *(unsigned int *)((t0 + 0xC)) = 0xC8BE8F8;
    *(unsigned int *)((t0 + 0x18)) = (a4 + 0x38);
    return 0x0;
}

int FUN_0c2d3fbc(void)
{
    register int t1;
    register int t3;
    register int t5;
    register int t8;

    FUN_0c2d52d4();
    t1 = (((struct o0_int *)0xC8D25F0)->v);
    (((struct o54_uchar *)(t1))->v) = ((*(signed char *)(((t1 + 0x54) + 0x0))) & 0xFE);
    t3 = FUN_0c2d4768(0x680, 0x1);
    FUN_0c2d487c(0x680, (0x20 | (unsigned char)t3), 0x1);
    t5 = (((struct o0_int *)0xC8D25F0)->v);
    (((struct o20_uchar *)(t5))->v) = ((*(signed char *)(((t5 + 0x20) + 0x0))) | 0x2);
    (((struct o4_uchar *)0xC8D25F0)->v) = ((*(signed char *)0xC8D25F4) & 0xBF);
    t8 = *(signed char *)0xC8D25F4;
    (((struct o4_uchar *)0xC8D25F0)->v) = (t8 | 0x20);
    return (t8 | 0x20);
}

int FUN_0c2d6dd2(void)
{
    register int t0;

    t0 = *(signed char *)0xC8D2726;
    if (((unsigned char)t0 & 2) == 0) {
        *(unsigned char *)0xC8D2726 = ((*(signed char *)0xC8D2726) | 0x5);
        FUN_0c2d7806(0x10);
        *(unsigned char *)0xC8D2726 = ((*(signed char *)0xC8D2726) | 0x2);
        FUN_0c2d7806(0x10);
        *(unsigned char *)0xC8D2726 = ((*(signed char *)0xC8D2726) & 0xFB);
        *(unsigned char *)0xC8D2726 = ((*(signed char *)0xC8D2726) & 0xFE);
        return FUN_0c2d7806(0x10);
    }
    return (unsigned char)t0;
}

int FUN_0c2f7e96(int a4)
{
    int stk[1];
    register int t0;
    register int t1;

    *(unsigned short *)(((int)stk + 0)) = a4;
    for (;;) {
        if ((unsigned int)(*(short *)(((int)stk + 0))) < (unsigned int)((((struct o2_short *)0xC8E09AC)->v))) {
            break;
        }
        t0 = (FUN_0c2f7d9c(0x2));
        (((struct o0_ushort *)0xC8E09AC)->v) = (((((struct o0_short *)0xC8E09AC)->v)) + 0x1);
        t1 = ((((struct o4_short *)0xC8E09AC)->v));
        t1 = (t1 + 0x1);
        (((struct o4_ushort *)0xC8E09AC)->v) = t1;
        (((struct o6_ushort *)0xC8E09AC)->v) = (((((struct o6_short *)0xC8E09AC)->v)) + 0x1);
        t1 = ((((struct o2_short *)0xC8E09AC)->v));
        t1 = (t1 + ((((struct o2_short *)0xC8E09AC)->v)));
        (((struct o2_ushort *)0xC8E09AC)->v) = t1;
    }
    return t0;
}

void FUN_0c177400(void)
{
    int stk[2];
    register int t0;
    register int t1;

    (((struct o0_uint *)0xFFA00020)->v) = 0x0;
    (((struct oC_uint *)0xFFA00020)->v) = 0x1201;
    (((struct o20_uint *)0xFFA00020)->v) = 0x8201;
    t0 = 0x1201;
    for (;;) {
        t1 = (((struct o20_int *)0xFFA00020)->v);
        *(unsigned int *)(((int)stk + 4)) = t1;
        if (t1 == 0x8201) {
            break;
        }
        *(unsigned int *)(((int)stk + 0)) = 0x0;
        for (;;) {
            if ((int)(*(int *)(((int)stk + 0))) >= (int)0x10000) {
                break;
            }
            t0 = (*(int *)(((int)stk + 0)));
            t0 = (t0 + 0x1);
            *(unsigned int *)(((int)stk + 0)) = t0;
        }
        (((struct o20_uint *)0xFFA00020)->v) = 0x8201;
    }
}

int FUN_0c182b8e(int a4, int a5)
{
    register int t0;
    register int t3;
    register int t9;

    t0 = FUN_0c1829f8(a4);
    if (t0 == 0) {
        t3 = *(int *)0xC2A6294;
        t9 = a4;
        if (a4 == 0) {
            t9 = 0x1;
            if (((*(int *)((t3 + 0x0))) & 1) != 0) {
                t9 = 0x2;
            }
        }
        if (t9 == 1) {
            *(unsigned int *)((a5 + 0x0)) = (t3 + 0x4);
        } else {
            *(unsigned int *)((a5 + 0x0)) = (0x168 + t3);
        }
    }
    return t0;
}

int FUN_0c182f9c(int a4, int a5)
{
    register int t0;
    register int t3;
    register int t9;

    t0 = FUN_0c1829f8(a4);
    if (t0 == 0) {
        t3 = *(int *)0xC2A6294;
        t9 = a4;
        if (a4 == 0) {
            t9 = 0x1;
            if (((*(int *)((t3 + 0x0))) & 1) != 0) {
                t9 = 0x2;
            }
        }
        if (t9 == 1) {
            *(unsigned short *)((a5 + 0x0)) = ((((struct o164_short *)(t3))->v));
        } else {
            *(unsigned short *)((a5 + 0x0)) = ((((struct o2C8_short *)(t3))->v));
        }
    }
    return t0;
}

int FUN_0c183c02(int a4, int a5)
{
    int stk[8];
    register int t2;
    register int t4;

    *(unsigned int *)(((int)stk + 28)) = a4;
    *(unsigned int *)(((int)stk + 24)) = a5;
    *(int *)((int)stk + 8) = 0xEF;
    *(int *)((int)stk + 4) = 0xC206080;
    *(int *)((int)stk + 0) = 0xC206070;
    FUN_0c18c9fc(0xC206070, 0xC206080, 0xEF);
    t2 = FUN_0c18cde8((*(int *)(((int)stk + 28))), ((int)stk + 12), (((int)stk + 12) + 0x4), (((int)stk + 12) + 0x8));
    if ((*(int *)(((int)stk + 24))) != 0) {
        t4 = *(int *)(((int)stk + 24));
        *(unsigned int *)((t4 + 0x0)) = (*(int *)(((int)stk + 12)));
        *(unsigned short *)((t4 + 0x4)) = (*(short *)(((int)stk + 16)));
        *(unsigned short *)((t4 + 0x6)) = (*(short *)(((int)stk + 20)));
    }
    return t2;
}

int FUN_0c184acc(int a4, int a5, int a6, int a7, int a8, int a9)
{
    register int t0;

    t0 = *(int *)0xC8ABBC0;
    FUN_0c191d9e();
    *(unsigned int *)((a4 + 0x0)) = (*(int *)((t0 + 0x8)));
    *(unsigned int *)((a5 + 0x0)) = (*(int *)((t0 + 0xC)));
    *(unsigned int *)((a6 + 0x0)) = (*(int *)((t0 + 0x18)));
    *(unsigned int *)((a7 + 0x0)) = (*(int *)((t0 + 0x1C)));
    *(unsigned int *)((a8 + 0x0)) = ((((struct o64_int *)(t0))->v));
    *(unsigned int *)((a9 + 0x0)) = ((((struct o68_int *)(t0))->v));
    return FUN_0c191dae();
}

int FUN_0c18fe5c(void)
{
    register int t4;
    register int t2;
    register int t3;
    register int t5;

    t4 = (*(int *)0xC8A9678);
    for (;;) {
        if (t4 == 0) {
            break;
        }
        t2 = t4;
        t4 = (*(int *)((t4 + 0x10)));
        t5 = (*(int *)((t2 + 0x14)));
        for (;;) {
            if (t5 == 0) {
                break;
            }
            t3 = t5;
            t5 = (*(int *)((t5 + 0xC)));
            FUN_0c18df08(t3);
            FUN_0c18fd60(t3);
        }
        FUN_0c18fd88(t2);
    }
    *(unsigned int *)0xC8A9678 = 0x0;
    return 0x0;
}

int FUN_0c19338e(int a4)
{
    register int t0;
    register int t1;

    t0 = 0x0;
    for (;;) {
        if ((*(int *)((0xC2AE790 + (t0 << 2)))) == 0) {
            break;
        }
        t1 = libc_strcmp(a4, (*(int *)((0xC2AE790 + (t0 << 2)))));
        if (t1 != 0) {
            t0 = (t0 + 0x1);
            continue;
        }
        break;
    }
    t1 = 0xFFFFFFFF;
    if ((*(int *)((0xC2AE790 + (t0 << 2)))) == 0) {
    } else {
        t1 = (((int)((unsigned int)((int)((unsigned int)t0 + (unsigned int)0x0)) + ((((int)0x0 > (int)t0)) ? 1u : 0u))) >> 1);
    }
    return t1;
}

int FUN_0c19ca1a(int a4, int a5)
{
    register int t0;
    register int t2;

    t0 = *(int *)((a4 + 0xC));
    FUN_0c19114c((a4 + 0x10));
    t2 = *(signed char *)((a4 + 0x2));
    *(unsigned char *)((a4 + 0x2)) = (t2 & (~a5));
    if (((unsigned char)(t2 & (~a5)) & 16) == 0) {
        *(unsigned char *)((a4 + 0x0)) = 0x5;
    }
    *(unsigned char *)((t0 + 0x2)) = ((*(signed char *)((t0 + 0x2))) & (~a5));
    if (a5 == 16) {
        *(unsigned char *)((t0 + 0x2)) = ((*(signed char *)((t0 + 0x2))) & 0xDF);
    }
    return FUN_0c19e64a(t0);
}

int FUN_0c19d9ac(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    if ((*(int *)((a4 + 0x30))) != 0) {
        t0 = *(signed char *)((a4 + 0x2));
        t1 = (unsigned char)t0;
        if (((unsigned char)t0 & 192) != 0) {
            t0 = *(signed char *)((a4 + 0x0));
            t1 = (unsigned char)t0;
            if (((unsigned char)t0 != 0) && (((unsigned char)t0 != 1) && ((unsigned char)t0 != 6))) {
            } else {
                t0 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)((a4 + 0x2C))) + 0x18)))))(a4, a5, a6, a7);
                FUN_0c19d41e(a4);
                t0 = *(signed char *)((a4 + 0x2));
                t1 = (unsigned char)t0;
                if (((unsigned char)t0 & 128) != 0) {
                    t0 = FUN_0c19d3a0(a4);
                    *(unsigned char *)((a4 + 0x0)) = 0x2;
                    t1 = t0;
                }
            }
        }
        t0 = t1;
    }
    return t0;
}

int FUN_0c1a3aa4(int a4, int a5)
{
    register int t17;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t6;
    register int t0;

    t17 = 0x0;
    if ((int)a5 > 0) {
        t1 = (0x0 + a4);
        t2 = (0x0 + a4);
        t3 = 0x0;
        t4 = 0x0;
        for (;;) {
            t6 = *(signed char *)((t1 + 0x0));
            *(unsigned char *)((t1 + 0x0)) = ((unsigned int)(unsigned char)(*(signed char *)((t1 + 0x0))) >> 1);
            if (t3 != 0) {
                t0 = (*(signed char *)((t2 + 0x0)));
                t0 = (t0 | 0x80);
                *(unsigned char *)((t2 + 0x0)) = t0;
            }
            t4 = (t4 + 0x1);
            t3 = ((unsigned char)t6 & 0x1);
            t2 = (t2 + 0x1);
            t1 = (t1 + 0x1);
            if ((int)t4 >= (int)a5) {
                break;
            }
        }
        t17 = t3;
    }
    return t17;
}

int gdFsGetDirInfoG(int a4, int a5)
{
    register int t2;
    register int t4;

    t2 = gdFsSearchName(a4, (*(int *)(((*(int *)0xC3036E4) + 0x10))), 0x0);
    if (t2 == 0) {
        return 0xFFFFFFF8;
    }
    t4 = *(int *)(((*(int *)0xC3036E4) + 0x10));
    *(unsigned int *)((a5 + 0x0)) = ((*(int *)((((t4 + 0x10) + ((t2 - 1) * 0x2C)) + 0x0))) + 0x96);
    *(unsigned int *)((a5 + 0x4)) = (*(int *)((((t4 + 0x10) + ((t2 - 1) * 0x2C)) + 0x4)));
    *(unsigned char *)((a5 + 0x8)) = (*(signed char *)((((t4 + 0x10) + ((t2 - 1) * 0x2C)) + 0x8)));
    return 0x0;
}

int FUN_0c2b29ea(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t4;

    t0 = *(int *)((a4 + 0x28));
    t1 = vmsfs_c_getstate(t0);
    t4 = 0xFFFFFFFF;
    if (t1 != 0) {
    } else {
        vmsfs_c_setfunc(t0, 0x5);
        vmsfs_c_setparam(t0, a4, a5, a6, 0x0, 0x0, 0x0);
        t4 = 0x0;
    }
    return t4;
}

int ADXT_StartFname(int a4, int a5)
{
    register int t3;

    ADXT_Stop(a4);
    ADXCRS_Lock();
    t3 = ADXSTM_OpenFname(a5, (*(int *)((a4 + 0x10))));
    *(unsigned int *)((a4 + 0x8)) = t3;
    if (t3 == 0) {
        ADXCRS_Unlock();
        FUN_0c2c30aa(0xC2FEE80);
    } else {
        adxt_start_stm(a4);
    }
    return ADXCRS_Unlock();
}

int FUN_0c2d1100(int a4)
{
    int stk[3];
    register int t2;
    register int t5;
    register int t7;
    register int t9;
    register int t11;

    if ((signed char)a4 == 1) {
        FUN_0c2d0f58();
        *(int *)((int)stk + 0) = 0x4;
        FUN_0c2d2050(0x4, 0x1, 0x1, 0x4);
        t2 = *(int *)0xC8D25F0;
        (((struct o14_uchar *)(t2))->v) = ((*(signed char *)(((t2 + 0x14) + 0x0))) & 0xF7);
        FUN_0c2d21ba(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16));
        t5 = *(int *)0xC8D25F0;
        t9 = ((*(signed char *)(((t5 + 0x14) + 0x0))) | 0x10);
        t11 = (t5 + 0x14);
    } else {
        t7 = *(int *)0xC8D25F0;
        t9 = ((*(signed char *)(((t7 + 0x24) + 0x0))) & 0xFB);
        t11 = (t7 + 0x24);
    }
    *(unsigned char *)((t11 + 0x0)) = t9;
    return t9;
}

int FUN_0c2d49c0(int a4, int a5, int a6, int a7, int a8, int a9)
{
    int stk[3];

    *(unsigned short *)(((int)stk + 0)) = a6;
    *(unsigned short *)(((int)stk + 4)) = a7;
    FUN_0c2d487c(a4, a5, 0x2);
    FUN_0c2d487c((a4 + 0x1), (*(short *)(((int)stk + 0))), 0x2);
    FUN_0c2d487c(((a4 + 0x1) + 0x1), (*(short *)(((int)stk + 4))), 0x2);
    FUN_0c2d487c((((a4 + 0x1) + 0x1) + 0x1), ((short)(a8 >> 0)), 0x2);
    return FUN_0c2d487c(((((a4 + 0x1) + 0x1) + 0x1) + 0x1), ((short)(a9 >> 0)), 0x2);
}

int FUN_0c2d6272(int a4, int a5, int a6, int a7)
{
    register int t0;
    int t1;
    register int t2;

    t2 = *(int *)0xC8D25F0;
    if ((((unsigned char)(*(signed char *)((t2 + 0x48))) & 0xF0) != 0x90) && ((t0 = *(signed char *)((t2 + 0x48)), ((unsigned char)t0 & 0xF0) != 0xC0) && (t1 = *(signed char *)((t2 + 0x48)), ((unsigned char)t1 & 0xE0) != 0xE0))) {
        t0 = ((*(signed char *)(((t2 + 0x38) + 0x0))) & 0xF);
    } else {
        t0 = ((*(signed char *)(((t2 + 0x38) + 0x0))) & 0x1F);
    }
    return FUN_0c2d61aa(t0, a5, a6, a7);
}

int FUN_0c2d72b8(int a4)
{
    if ((unsigned char)(*(signed char *)0xC8D6831) == 13) {
        if ((*(signed char *)0xC8D683B) == 0) {
            *(unsigned int *)((a4 + 0x0)) = 0xC8D2FE9;
            return 0x80;
        }
        return 0x0;
    }
    if ((int)(unsigned char)(*(signed char *)0xC8D7085) >= (int)0x8) {
        return 0x0;
    }
    *(unsigned int *)((a4 + 0x0)) = (((short)((short)(unsigned char)(*(signed char *)0xC8D7089) * (short)0x8C) + 0xC8D2B88) + 0x4);
    return 0x80;
}

int FUN_0c2d8ab4(int a4)
{
    register int t0;

    t0 = *(int *)0xC8BFFE8;
    if (((*(signed char *)((((*(int *)((t0 + 0x8))) + 0x30) + 0x0))) & 4) != 0) {
        return 0x0;
    }
    if ((*(signed char *)(((*(int *)((t0 + 0x8))) + 0x58))) != 0) {
        (((struct o404_uint *)(a4))->v) = a4;
        (((struct o400_uint *)(a4))->v) = a4;
        (((struct o408_uint *)(a4))->v) = 0x0;
    }
    FUN_0c2d8afe(a4);
    (((struct o58_uchar *)((*(int *)(((*(int *)0xC8BFFE8) + 0x8)))))->v) = 0x0;
    return 0x1;
}

int FUN_0c2e6310(void)
{
    register int t1;
    register int t3;

    t1 = 0x0;
    for (;;) {
        t3 = *(signed char *)(((*(int *)0xC304178) + 0x0));
        if (((int)(unsigned char)t3 >= (int)0x30) && ((int)(unsigned char)t3 <= (int)0x39)) {
            t1 = ((((t1 << 2) + t1) << 1) + (*(signed char *)(((*(int *)0xC304178) + 0x0))));
            t1 = (t1 + 0xD0);
            FUN_0c2e638e();
            continue;
        }
        break;
    }
    return t1;
}

int FUN_0c2ee948(void)
{
    register int t0;
    register int t1;

    t0 = FUN_0c2ef3bc();
    t1 = (unsigned short)t0;
    if ((unsigned short)t0 != 0) {
        *(unsigned char *)((((short)((short)(unsigned char)(*(signed char *)0xC8D7168) * (short)0x124) + 0xC8D717E) + 0x0)) = 0x0;
        *(unsigned short *)((((short)((short)(unsigned char)(*(signed char *)0xC8D7168) * (short)0x124) + 0xC8D717E) + 0x2)) = 0x0;
        t0 = *(signed char *)0xC8D7168;
        *(unsigned char *)0xC8D7168 = ((t0 + 0x1) & 0x7);
        *(unsigned short *)0xC8D83C0 = ((*(short *)0xC8D83C0) + 0x1);
        t1 = ((t0 + 0x1) & 0x7);
    }
    return t1;
}

int FUN_0c2f248c(int a4, int a5)
{
    int stk[12];
    register int t3;
    register int t4;
    register int t7;
    register int t2;

    *(unsigned int *)(((int)stk + 0)) = a5;
    FUN_0c2fa4cc(((((((unsigned char)a4 << 2) + (unsigned char)a4) << 2) << 1) + 0x22), 0x28, (((int)stk + 0) + 0x4));
    t3 = 0x0;
    t4 = (((int)stk + 0) + 0x4);
    for (;;) {
        if ((unsigned char)(*(signed char *)((0xC302C78 + (unsigned char)t3))) == 0xFF) {
            break;
        }
        t2 = (*(signed char *)((t4 + 0x0)));
        t4 = (t4 + 0x1);
        t7 = *(signed char *)((0xC302C78 + (unsigned char)t3));
        t3 = (t3 + 0x1);
        *(unsigned char *)(((unsigned char)t7 + (*(int *)(((int)stk + 0))))) = t2;
    }
    return (unsigned char)t3;
}

int FUN_0c2fe21e(int a4)
{
    register int t0;
    register int t1;

    t0 = 0x0;
    if ((a4 & 0x20) != 0) {
        t0 = 0x1;
    }
    t1 = t0;
    if ((0x200 & a4) != 0) {
        t1 = (t0 | 0x2);
    }
    t0 = t1;
    if ((a4 & 0x40) != 0) {
        t0 = (t1 | 0x4);
    }
    t1 = t0;
    if ((0x400 & a4) != 0) {
        t1 = (t0 | 0x8);
    }
    t0 = t1;
    if ((0x1000 & a4) != 0) {
        t0 = (t1 | 0x10);
    }
    t1 = t0;
    if ((0x2000 & a4) != 0) {
        t1 = (t0 | 0x20);
    }
    t0 = t1;
    if ((a4 & 0x4000) != 0) {
        t0 = (t1 | 0x40);
    }
    return t0;
}

int nlCreateTextureParamA(int a4, int a5, int a6, int a7)
{
    register int t1;
    register int t4;

    t1 = ((int (*)(int, int, int, int))(FUN_0c176e50))((*(int *)((a4 + 0xC))), a5, a6, a7);
    t4 = ((int (*)(int))(FUN_0c176e50))((*(int *)((a4 + 0x10))));
    *(unsigned int *)((a4 + 0x30)) = ((((t1 << 2) << 1) & 0xFFFFFFF8) | t4);
    *(unsigned int *)((a4 + 0x34)) = ((((*(int *)((a4 + 0x18))) | (*(int *)((a4 + 0x8)))) & 0xFF800000) | ((unsigned int)((unsigned int)(*(int *)((a4 + 0x1C))) >> 2) >> 1));
    return t4;
}

int nlSysMetricsInit(void)
{
    int t0;

    _builtin_set_imask(0xE);
    t0 = *(signed char *)0xFFD80004;
    (((struct o4_uchar *)0xFFD80000)->v) = (0xFFFFFFFE & t0);
    (((struct o0_uchar *)0xFFD80000)->v) = 0x1;
    (((struct o10_ushort *)0xFFD80000)->v) = 0x2;
    (((struct o8_uint *)0xFFD80000)->v) = 0xFFFFFFFF;
    (((struct oC_uint *)0xFFD80000)->v) = 0xFFFFFFFF;
    (((struct o4_uchar *)0xFFD80000)->v) = (t0 | 0x1);
    *(float *)0xC83D010 = (*(float *)0xC1785DC);
    _builtin_set_imask(0x0);
    *(unsigned int *)0xC86802C = 0x1E;
    return 0x1E;
}

int nlLineClipNear(int a4, int a5)
{
    register float u1;
    register int t22;

    u1 = *(float *)0xC8B85DC;
    if (u1 > ((((struct o8_float *)(a4))->v))) {
        t22 = 0x0;
        if (u1 > ((((struct o8_float *)(a5))->v))) {
        } else {
            nlLineClipPoint(a4, a5, a4);
            t22 = 0x1;
        }
    } else {
        if (u1 > ((((struct o8_float *)(a5))->v))) {
            nlLineClipPoint(a4, a5, a5);
        }
        t22 = 0x1;
    }
    return t22;
}

int FUN_0c18e932(int a4, int a5, int a6, int a7)
{
    register int t2;

    if ((unsigned char)(*(signed char *)(((((((a7 << 1) + a7) << 2) << 2) + 0xC8A8F04) + 0x1))) != 2) {
        *(unsigned int *)(((((((a7 << 1) + a7) << 2) << 2) + 0xC8A8F04) + 0x8)) = a4;
        *(unsigned int *)(((((((a7 << 1) + a7) << 2) << 2) + 0xC8A8F04) + 0x10)) = (a4 & a5);
        *(unsigned int *)(((((((a7 << 1) + a7) << 2) << 2) + 0xC8A8F04) + 0xC)) = a6;
        *(unsigned int *)(((((((a7 << 1) + a7) << 2) << 2) + 0xC8A8F04) + 0x14)) = a5;
        t2 = FUN_0c197cec(a7);
        if (t2 != 0) {
            return 0xFFFFFFFF;
        }
        return 0x0;
    }
    return 0xFFFFFFFF;
}

int FUN_0c191aaa(int a4, int a5)
{
    int stk[3];
    register int t0;
    register int t1;
    register int t3;
    int t2;

    *(unsigned int *)(((int)stk + 8)) = a4;
    t0 = a5;
    for (;;) {
        if ((short)t0 == 0) {
            return 0x0;
        }
        t1 = FUN_0c191ff6(0x1, ((int)stk + 0), (((int)stk + 0) + 0x4));
        if ((t1 != 0) && (t2 = *(short *)(((int)stk + 4)), (unsigned short)t2 != 1)) {
            break;
        }
        t3 = *(int *)(((int)stk + 8));
        t0 = (t0 - 1);
        *(unsigned int *)(((int)stk + 8)) = (t3 + 0x1);
        *(unsigned char *)((((t3 + 0x1) - 0x1) + 0x0)) = (*(signed char *)(((int)stk + 0)));
    }
    return 0xFFFFFFFF;
}

int FUN_0c191904(int a4, int a5)
{
    int stk[2];

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned short *)(((int)stk + 0)) = a5;
    FUN_0c191d9e();
    if ((*(int *)0xC2A62B8) == 4) {
        (((struct o0_uint *)0xC8A9974)->v) = 0xC8A9A0C;
        FUN_0c187a88(0xC8A9A0C, ((*(int *)(((int)stk + 4))) + 0xE), ((*(short *)(((int)stk + 0))) - 14));
        (((struct o4_ushort *)0xC8A9974)->v) = ((*(short *)(((int)stk + 0))) + 0xFFF2);
        FUN_0c1926cc(0xC8A9974);
    }
    FUN_0c191dae();
    return 0x0;
}

int FUN_0c194660(int a4)
{
    int stk[4];
    register int t1;

    *(unsigned short *)(((int)stk + 0)) = a4;
    for (;;) {
        *(unsigned short *)(((int)stk + 12)) = (*(short *)(((int)stk + 0)));
        t1 = FUN_0c184000(0x4117, (((int)stk + 0) + 0xC), (((int)stk + 0) + 0x4));
        if ((short)t1 != 0) {
            break;
        }
        FUN_0c183140(0x1);
        if ((unsigned short)(*(short *)(((int)stk + 4))) == 4) {
            return 0x0;
        }
    }
    return t1;
}

int FUN_0c194728(int a4)
{
    int stk[4];
    register int t1;

    *(unsigned short *)(((int)stk + 0)) = a4;
    for (;;) {
        *(unsigned short *)(((int)stk + 12)) = (*(short *)(((int)stk + 0)));
        t1 = FUN_0c184000(0x4117, (((int)stk + 0) + 0xC), (((int)stk + 0) + 0x4));
        if ((short)t1 != 0) {
            break;
        }
        FUN_0c183140(0x1);
        if ((unsigned short)(*(short *)(((int)stk + 4))) == 1) {
            return 0x0;
        }
    }
    return t1;
}

int FUN_0c19a76a(int a4, int a5, int a6)
{
    int stk[3];
    register int t1;
    register int t2;
    register int t4;

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 8)) = a5;
    *(unsigned short *)(((int)stk + 4)) = a6;
    t1 = FUN_0c19af74((*(int *)(((int)stk + 0))));
    if (t1 != 0) {
        return 0xFFFFFFFC;
    }
    t2 = *(int *)(((int)stk + 0));
    t4 = *(int *)0xC8A73C0;
    (((struct o158_uint *)(((t2 * 0x174) + t4)))->v) = (*(int *)(((int)stk + 8)));
    (((struct o146_ushort *)(((t2 * 0x174) + t4)))->v) = (*(short *)(((int)stk + 4)));
    (((struct o13A_ushort *)(((t2 * 0x174) + t4)))->v) = 0x1;
    return 0x0;
}

int FUN_0c19d208(int a4, int a5)
{
    int stk[2];
    register int t8;
    register int t1;

    *(unsigned int *)(((int)stk + 0)) = a5;
    t8 = 0xFFFFFFFF;
    if (a4 != 0) {
        t1 = FUN_0c1a02cc((*(int *)(((int)stk + 0))), (((int)stk + 0) + 0x4), 0x4);
        t8 = 0xFFFFFFFF;
        if ((int)(short)t1 < (int)0x4) {
        } else {
            *(unsigned char *)((a4 + 0x0)) = (*(signed char *)(((((int)stk + 0) + 0x4) + 0x0)));
            *(unsigned char *)((a4 + 0x1)) = (*(signed char *)(((((int)stk + 0) + 0x4) + 0x1)));
            *(unsigned short *)((a4 + 0x2)) = (FUN_0c19c916(((((int)stk + 0) + 0x4) + 0x2)));
            t8 = 0x0;
        }
    }
    return t8;
}

int syRtcMakeAgeOfMoon(int a4)
{
    int stk[1];
    register int t9;

    /* manual: the date (r4, passed through) and the count's slot (r5 = the stack) go to syRtcDateToCount; the
       generated C dropped both, and the callee read the date through a leftover register */
    syRtcDateToCount(a4, (int)stk + 0);
    if ((unsigned int)(*(int *)(((int)stk + 0))) >= (unsigned int)0x5CB417D1) {
        t9 = ((int)((unsigned int)((*(int *)(((int)stk + 0))) + 0xA34BE82F) % (unsigned int)0x26EE7F));
    } else {
        t9 = (0x26EE7F - ((int)((unsigned int)(0x5CB417D1 - (*(int *)(((int)stk + 0)))) % (unsigned int)0x26EE7F)));
    }
    return ((int)((unsigned int)t9 / (unsigned int)0x15180));
}

int kmSetFogTable(int a4)
{
    register int t1;
    register int t2;
    register int t4;

    t1 = ((int)(((((struct o1FC_float *)(a4))->v)) * 255.0f) & 0xFF);
    t2 = 0x80;
    for (;;) {
        t2 = (t2 - 1);
        t4 = t1;
        t1 = (int)((*(float *)((a4 + (t2 << 2)))) * 255.0f);
        t1 = (t1 & 0xFF);
        *(unsigned int *)(((t2 << 2) + 0xC8D077C)) = (unsigned short)((t1 << 8) | t4);
        if (t2 == 0) {
            break;
        }
    }
    *(unsigned int *)0xC8D097C = ((*(int *)0xC8D097C) | 0x4);
    return 0x0;
}

int kmBlankScreen(int a4)
{
    register int t7;

    if (a4 == 1) {
        kmiWriteRegister(0x44, (((((struct o0_int *)0xC8D05EC)->v)) & 0xFFFFFFFE));
        t7 = (((((struct o3C_int *)0xC8D05EC)->v)) | 0x8);
    } else {
        kmiWriteRegister(0x44, (((((struct o0_int *)0xC8D05EC)->v)) & 0xFFFFFFFE));
        t7 = ((((struct o3C_int *)0xC8D05EC)->v));
    }
    kmiWriteRegister(0xE8, t7);
    kmiWriteRegister(0x44, ((((struct o0_int *)0xC8D05EC)->v)));
    return 0x0;
}

int FUN_0c2d0b9a(int a4)
{
    if (((int)(unsigned char)a4 >= (int)0x30) && ((int)(unsigned char)a4 <= (int)0x39)) {
        return 0x1;
    }
    if ((unsigned char)a4 != 65) {
        if ((unsigned char)a4 != 66) {
            if ((unsigned char)a4 != 67) {
                if ((unsigned char)a4 != 68) {
                    if ((unsigned char)a4 != 35) {
                        if ((unsigned char)a4 == 42) {
                            return 0x1;
                        }
                        return 0x0;
                    }
                    return 0x1;
                }
                return 0x1;
            }
            return 0x1;
        }
        return 0x1;
    }
    return 0x1;
}

int FUN_0c2d3774(void)
{
    register int t0;

    t0 = *(int *)0xC8D25F0;
    if (((*(signed char *)(((t0 + 0x24) + 0x0))) & 4) != 0) {
        (((struct o24_uchar *)(t0))->v) = ((*(signed char *)(((t0 + 0x24) + 0x0))) & 0xFB);
        FUN_0c2ec410(0xC8D2670, 0x1F4);
    }
    if (((*(signed char *)((((*(int *)0xC8D25F0) + 0x3C) + 0x0))) & 8) != 0) {
        FUN_0c2ec410(0xC8D2670, 0x1F4);
        return 0x1;
    }
    return 0x0;
}

int FUN_0c2da986(int a4)
{
    register int t5;

    if ((unsigned char)(*(signed char *)((a4 + 0x7))) == 1) {
        if ((unsigned char)(*(signed char *)((a4 + 0x8))) == 5) {
            *(unsigned char *)((a4 + 0x0)) = 0x1;
        } else {
            *(unsigned char *)((a4 + 0x0)) = 0x0;
        }
    } else {
        t5 = *(signed char *)((a4 + 0x8));
        if (((unsigned char)t5 != 0xFF) && ((unsigned char)t5 != 0)) {
            *(unsigned char *)((a4 + 0x0)) = 0x1;
        } else {
            *(unsigned char *)((a4 + 0x0)) = 0x0;
        }
    }
    return 0x0;
}

int mwlSbAllocWork(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    if ((int)(short)a4 < 0) {
        return 0x0;
    }
    if ((unsigned int)0xC8D5F2C < (unsigned int)0xC8D5F6C) {
        t0 = 0xC8D5F2C;
        t1 = 0xC8D5F2C;
        t2 = 0xC8D572C;
        for (;;) {
            if ((*(int *)((t0 + 0x0))) == 0) {
                break;
            }
            t0 = (t0 + 0x8);
            t2 = (t2 + 0x100);
            t1 = (t1 + 0x8);
            if ((unsigned int)t0 >= (unsigned int)0xC8D5F6C) {
                return 0x0;
            }
        }
        *(unsigned int *)((t1 + 0x4)) = t2;
        *(unsigned int *)((t1 + 0x0)) = 0x1;
        t0 = t1;
    } else {
        t0 = 0x0;
    }
    return t0;
}

int FUN_0c2e32a0(int a4)
{
    register int t0;
    register int t1;

    *(unsigned int *)((a4 + 0x4)) = ((int)((unsigned int)(*(int *)((a4 + 0x0))) % (unsigned int)(*(int *)((a4 + 0xC)))));
    t0 = (int)((unsigned int)(*(int *)((a4 + 0x0))) / (unsigned int)(*(int *)((a4 + 0xC))));
    *(unsigned int *)((a4 + 0x8)) = t0;
    if ((unsigned int)t0 <= (unsigned int)((((struct oC_int *)0xC8BF0EC)->v))) {
        if ((unsigned int)t0 >= (unsigned int)((((struct o4_int *)0xC8BF0EC)->v))) {
            if ((unsigned int)(*(int *)((a4 + 0x4))) <= (unsigned int)((((struct o8_int *)0xC8BF0EC)->v))) {
                if ((unsigned int)(*(int *)((a4 + 0x4))) < (unsigned int)((((struct o0_int *)0xC8BF0EC)->v))) {
                    *(unsigned int *)((a4 + 0x14)) = 0x1;
                }
                t0 = 0x944;
            } else {
                *(unsigned int *)((a4 + 0x14)) = 0x1;
                t0 = 0x94C;
            }
            t1 = t0;
        } else {
            *(unsigned int *)((a4 + 0x14)) = 0x1;
            t1 = 0x948;
        }
        t0 = t1;
    } else {
        *(unsigned int *)((a4 + 0x14)) = 0x1;
        t0 = 0x950;
    }
    return t0;
}

float math_floor_float(float f4)
{
    float s1;
    s1 = _builtin_fabsf(f4);
    if ((*(float *)0xC179914) > s1) {
        if (0.0f > f4) {
            if ((s1 - (float)(int)s1) != 0.0f) {
                return (float)(int)(0xFFFFFFFF - (int)s1);
            }
            return f4;
        }
        return (float)(int)s1;
    }
    return f4;
}

int FUN_0c17f060(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t4;

    t0 = 0x0;
    t1 = a4;
    t2 = 0x0;
    for (;;) {
        if ((*(int *)((t1 + 0x4))) == -1) {
            break;
        }
        t4 = FUN_0c17edc0(a4, a5, t2, 0x0);
        t2 = (t2 + 0x1);
        t1 = (t1 + 0x10);
        t0 = (t0 | t4);
    }
    return t0;
}

int FUN_0c17f0b0(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t4;

    t0 = 0x0;
    t1 = a4;
    t2 = 0x0;
    for (;;) {
        if ((*(int *)((t1 + 0x4))) == -1) {
            break;
        }
        t4 = FUN_0c17edc0(a4, a5, t2, 0x1);
        t2 = (t2 + 0x1);
        t1 = (t1 + 0x10);
        t0 = (t0 | t4);
    }
    return t0;
}

int FUN_0c17f3a0(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t4;

    t0 = 0x0;
    t1 = a4;
    t2 = 0x0;
    for (;;) {
        if ((*(int *)((t1 + 0x4))) == -1) {
            break;
        }
        t4 = FUN_0c17f260(a4, a5, t2, 0x0);
        t2 = (t2 + 0x1);
        t1 = (t1 + 0x10);
        t0 = (t0 | t4);
    }
    return t0;
}

int FUN_0c17f3f0(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t4;

    t0 = 0x0;
    t1 = a4;
    t2 = 0x0;
    for (;;) {
        if ((*(int *)((t1 + 0x4))) == -1) {
            break;
        }
        t4 = FUN_0c17f260(a4, a5, t2, 0x1);
        t2 = (t2 + 0x1);
        t1 = (t1 + 0x10);
        t0 = (t0 | t4);
    }
    return t0;
}

int FUN_0c181524(int a4)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((0xC86CC40 + (unsigned char)((((a4 << 1) + a4) << 2) << 1)));
    t1 = t0;
    if (t0 == 1) {
        t0 = *(signed char *)((((unsigned char)((((a4 << 1) + a4) << 2) << 1) + 0xC86CC40) + 0x1));
        t1 = t0;
        if (t0 == 0) {
            FUN_0c180d72((((((short)a4 << 8) << 2) << 2) + 0x1A1));
            *(unsigned char *)((((unsigned char)((((a4 << 1) + a4) << 2) << 1) + 0xC86CC40) + 0x1)) = 0x1;
            t1 = 0x1;
        }
    }
    return t1;
}

int FUN_0c18e9ce(int a4)
{
    register int t0;
    register int t1;

    t0 = FUN_0c197c7c();
    if ((t0 != -1) && ((int)t0 > 0)) {
        t1 = 0x0;
        for (;;) {
            if ((*(int *)(((((((t1 << 1) + t1) << 2) << 2) + 0xC8A8F04) + 0x8))) == a4) {
                break;
            }
            t1 = (t1 + 0x1);
            if ((int)t0 <= (int)t1) {
                return 0xFFFFFFFF;
            }
        }
        return t1;
    }
    return 0xFFFFFFFF;
}

int FUN_0c18f8b2(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = FUN_0c18ea14(a5);
    if ((t0 != 0) && ((t1 = *(int *)((t0 + 0x8)), t1 == 0) || ((a4 == -1) || ((t2 = *(int *)((t0 + 0xC)), a4 == t2) || ((t3 = *(int *)((t0 + 0xC)), (t3 & 1) == 0) && (a4 == 0)))))) {
        return 0x1;
    }
    return 0x0;
}

int FUN_0c2b0d62(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t0 = *(int *)((a5 + 0x8));
    t1 = *(int *)((((((a4 << 1) + a4) << 2) + 0xC8B96A0) + 0x8));
    *(unsigned char *)((((((a4 << 1) + a4) << 2) + 0xC8B96A0) + 0x0)) = (*(signed char *)(((t0 + 0x8) + 0x0)));
    *(unsigned char *)((((((a4 << 1) + a4) << 2) + 0xC8B96A0) + 0x1)) = (*(signed char *)((((t0 + 0x8) + 0x1) + 0x0)));
    t2 = (((((a4 << 1) + a4) << 2) + 0xC8B96A0) + 0x2);
    t3 = (((t0 + 0x8) + 0x1) + 0x1);
    t0 = 0x6;
    for (;;) {
        t4 = *(signed char *)((t3 + 0x0));
        t3 = (t3 + 0x1);
        t0 = (t0 - 1);
        *(unsigned char *)((t2 + 0x0)) = t4;
        t2 = (t2 + 0x1);
        if (t0 == 0) {
            break;
        }
    }
    t0 = t2;
    if (a7 != 0) {
        *(unsigned char *)((t1 + 0x0)) = (*(signed char *)((a7 + 0x0)));
        *(unsigned char *)((t1 + 0x1)) = (*(signed char *)((a7 + 0x1)));
        *(unsigned char *)((t1 + 0x2)) = (*(signed char *)((a7 + 0x2)));
        t2 = *(signed char *)((a7 + 0x3));
        *(unsigned char *)((t1 + 0x3)) = t2;
        t0 = t2;
    }
    return t0;
}

void FUN_0c2ebdfc(void)
{
    register int t0;

    t0 = *(signed char *)0xC8D67BA;
    if ((0x1 & (unsigned char)t0) == 0) {
        if (((unsigned char)t0 & 0x2) != 0) {
            FUN_0c2eb978(0x5);
    return;
        }
        t0 = FUN_0c2ebfcc();
        if ((signed char)t0 == 0) {
            if (((unsigned char)(*(signed char *)0xC8D67A0) & 128) != 0) {
                (((struct o0_ushort *)0xC8D67B8)->v) = (((((struct o0_short *)0xC8D67B8)->v)) | 0x40);
            }
            (((struct o2_uchar *)0xC8D67B8)->v) = ((*(signed char *)0xC8D67BA) | 0x1);
        }
        return;
    }
}
