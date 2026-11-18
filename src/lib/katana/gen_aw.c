/* Straight-line functions with calls and guards (batch gen_aw): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

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
struct o10E8_int { char p[0x10E8]; int v; };
struct o138_ushort { char p[0x138]; unsigned short v; };
struct o13A_ushort { char p[0x13A]; unsigned short v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o168_int { char p[0x168]; int v; };
struct o16C_short { char p[0x16C]; short v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o18_int { char p[0x18]; int v; };
struct o18_uchar { char p[0x18]; unsigned char v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o19_uchar { char p[0x19]; unsigned char v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o1C_ushort { char p[0x1C]; unsigned short v; };
struct o2_short { char p[0x2]; short v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o24_short { char p[0x24]; short v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o2C_uint { char p[0x2C]; unsigned int v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o30_uint { char p[0x30]; unsigned int v; };
struct o34_uint { char p[0x34]; unsigned int v; };
struct o38_uint { char p[0x38]; unsigned int v; };
struct o3C_uint { char p[0x3C]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o5_uchar { char p[0x5]; unsigned char v; };
struct o7_uchar { char p[0x7]; unsigned char v; };
struct o78_uchar { char p[0x78]; unsigned char v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uchar { char p[0x8]; unsigned char v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o8_ushort { char p[0x8]; unsigned short v; };
struct oA_uchar { char p[0xA]; unsigned char v; };
struct oB0_short { char p[0xB0]; short v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oF_uchar { char p[0xF]; unsigned char v; };
int ADXCRS_Lock(void);
int ADXCRS_Unlock(void);
int ADXF_Close(int);
int ADXF_ExecServer(void);
int ADXSJD_ExecServer(void);
int ADXSTMF_Create(int, int, int, int);
int ADXSTM_ExecServer(void);
int ADXT_Stop(int);
int BCDtoDEC(int);
int FUN_0c0ffdba(void);
int FUN_0c113890(int);
int FUN_0c17da50(void);
int FUN_0c17ff38(int, int, int);
int FUN_0c18004c(int, int, int, int);
int FUN_0c180124(int);
int FUN_0c18017c(int, int, int);
int FUN_0c1829f8(int);
int FUN_0c1832a4(int, int, int, int);
int FUN_0c18330c(int, int, int, int, int, int);
int FUN_0c184000(int, int, int);
int FUN_0c184058(void);
int FUN_0c184ee8(int, int, int);
int FUN_0c185276(int);
int FUN_0c185284(int, int);
int FUN_0c185d00(int);
int FUN_0c185d50(int);
int FUN_0c187a88(int, int, int);
int FUN_0c18c9fc(void);
int FUN_0c18d914(int, int, int, int, int, int, int);
int FUN_0c18d9cc(void);
int FUN_0c18dad6(int);
int FUN_0c18df08(int);
int FUN_0c18df5c(void);
int FUN_0c18e01e(void);
int FUN_0c18e584(int);
int FUN_0c18fd60(int);
int FUN_0c18fd88(int);
int FUN_0c1902a0(int, int);
int FUN_0c190c4e(int);
int FUN_0c191f2c(void);
int FUN_0c191f5a(int);
int FUN_0c191f70(int);
int FUN_0c1920f4(void);
int FUN_0c192164(int, int, int, int, int, int, int, int, int);
int FUN_0c19869e(int);
int FUN_0c19af74(int);
int FUN_0c19c142(int);
int FUN_0c19c166(int);
int FUN_0c19e5b8(int, int);
int FUN_0c19e6f4(int);
int FUN_0c1a2184(void);
int FUN_0c1a3150(int, int);
int FUN_0c1a357c(int, int, int);
int FUN_0c1a39f0(int, int);
int FUN_0c2b525e(int, int);
int FUN_0c2b5992(int, int, int, int);
int FUN_0c2b6900(int);
int FUN_0c2bc7e4(void);
int FUN_0c2bca16(int);
int FUN_0c2c2874(int, int, int);
int FUN_0c2c30aa(int, ...);
int FUN_0c2c4724(int);
int FUN_0c2d0e80(int, int);
int FUN_0c2d0f7c(int);
int FUN_0c2d15f4(int);
int FUN_0c2d28e8(int, int, int);
int FUN_0c2d2d88(void);
int FUN_0c2d37bc(void);
int FUN_0c2d562a(int, int);
int FUN_0c2d63b6(void);
int FUN_0c2d63c8(void);
int FUN_0c2d9748(int, int, int, int);
int FUN_0c2db908(int, int, int);
int FUN_0c2e3040(int, int);
int FUN_0c2e4330(int);
int FUN_0c2e6310(void);
int FUN_0c2e638e(void);
int FUN_0c2e7248(int, int);
int FUN_0c2e7f3c(void);
int FUN_0c2e8218(void);
int FUN_0c2e8238(void);
int FUN_0c2e8496(void);
int FUN_0c2e89f4(int);
int FUN_0c2e8a12(int);
int FUN_0c2e8a7c(int);
int FUN_0c2eb978(int);
int FUN_0c2ebc72(int, int, int, int, int);
int FUN_0c2ebfcc(void);
int FUN_0c2ec2d4(void);
int FUN_0c2ec304(void);
int FUN_0c2ec410(int, int);
int FUN_0c2ec430(int);
int FUN_0c2ec532(int);
int FUN_0c2eeb4a(int);
int FUN_0c2eec74(int, int);
int FUN_0c2f22f0(int);
int FUN_0c2f248c(int, int);
int FUN_0c2f35ac(void);
int FUN_0c2f3e28(void);
int FUN_0c2f94d4(int);
int FUN_0c2fa4cc(int, int, int);
int SJMEM_Reset(int);
int SJRBF_Reset(int);
int VQalloc(int, int);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
extern int _builtin_tas(char *);
int adxf_CreateAdxFs(void);
int adxt_start_stm(int);
int direntry(int, int);
int fmMngSctRefresh(int);
int gdFsChangeDir(int);
int gdFsClose(int);
int gdFsDaGetInfo(int, int, int);
int gdFsGetFileSctSize(int, int);
int gdFsLoadDirFast(int, int);
int gdFsRead(int, int, int);
int init_sub(void);
int kdGetDevice(int);
int kdSetBlockWrite(int, int, int, int, int, int, int);
int kdSetCallback(int, int, int);
int kdSetGetMediaInfoEx(int, int, int, int);
int kmBeginPass(int);
int kmBeginScene(int);
int kmEndPass(int);
int kmEndScene(int);
int memset(int, int, int);
int mpdrv_dpf(int, int, int, int, int);
int mpdrv_exit(void);
int mpdrv_set_bread_ns(int, int, int, int, int);
int mpdrv_set_dkill_ns(int);
int mpdrv_set_dreq_ns(int);
int mpdrv_set_getlerr_ns(int, int, int, int, int);
int mult(int, int, int);
int nl_action_PixelClipping(void);
int pdVibGetInfo(int, int);
int strcpy(int, int);
int strncpy(int, int, int);
int syBtExit(void);
int syCfgConvLang(int);
int syCfgGetDefaultLanguage(int, int);
int syChainDeleteHandler(int);
int sys_shutdown_all(void);
int thunk_FUN_0c2b3af8(int);
int thunk_FUN_0c2c56fc(void);
int thunk_FUN_0c2d9e8a(int);
int vmsfs_c_getstate(int);
int vmsfs_c_setfunc(int, int);
int vmsfs_c_setparam(int, int, int, int, int, int, int);
int vmsfs_c_settime(int, int);
int vmsfs_c_setvolume(int, int);
int search_dir_by_startfat(int a4, int a5, int a6, int a7);
int FUN_0c2aeaa0(int a4, int a5);
int vmsio_ismount(int a4);
int FUN_0c2e3f7c(void);
int FUN_0c185210(int a4);
void kdExitSystem(void);
int FUN_0c2f37ce(int a4, int a5);
int FUN_0c1854a0(int a4);
int FUN_0c18fea6(int a4);
int FUN_0c19133a(int a4);
int FUN_0c191f92(int a4);
int FUN_0c19c710(int a4);
int pdVibMxSetStopTime(int a4, int a5);
int ADXT_StartAfs(int a4, int a5, int a6);
int ADXT_ExecServer(void);
int check_fat_xross(int a4, int a5, int a6, int a7);
int FUN_0c2c6d40(int a4, int a5, int a6);
int Qreset(void);
int FUN_0c2d19fa(int a4, int a5, int a6);
int FUN_0c2ea256(int a4, int a5);
int FUN_0c177450(void);
int nlSetIntrFunction(int a4, int a5, int a6, int a7);
int FUN_0c17ffea(int a4, int a5);
int FUN_0c18ecb4(void);
int FUN_0c191ea4(int a4, int a5, int a6);
int FUN_0c194116(int a4, int a5, int a6);
int FUN_0c1947d0(int a4, int a5, int a6, int a7);
int FUN_0c19db48(int a4, int a5);
int FUN_0c1a1126(int a4, int a5, int a6);
float FUN_0c1a3254(int a4, int a5);
int FUN_0c2af6f8(void);
int kmSetBackGroundPlane(int a4, int a5);
int get_vmstime(int a4, int a5);
int SJMEM_Create(int a4, int a5);
int SJRBF_Create(int a4, int a5, int a6);
void FUN_0c2ebd7a(void);
int FUN_0c2f354a(void);
int FUN_0c2f9614(void);
int FUN_0c182cba(int a4, int a5);
int FUN_0c18ffa4(void);
int FUN_0c1901e4(int a4);
int FUN_0c1940b6(int a4, int a5, int a6);
void FUN_0c1a0bb6(int a4, int a5, int a6, int a7);
int FUN_0c2bd39c(int a4, int a5, int a6, int a7, int a8, int a9);
int FUN_0c2bd480(int a4, int a5, int a6, int a7, int a8, int a9);
int fmMngWriteData(int a4, int a5, int a6);
int FUN_0c2d14d0(void);
int FUN_0c2e62b0(void);
int FUN_0c2f2290(int a4);
int FUN_0c2f242c(int a4);
int FUN_0c2fd17c(int a4);
int FUN_0c18e168(int a4, int a5);
int mult64(int a4, int a5, int a6, int a7);
int FUN_0c2b26c0(int a4, int a5, int a6, int a7, int a8);
int pdVibEnumerateUnit(int a4, int a5, int a6);
int syCfgGetLanguage(int a4, int a5, int a6);
int kdInitSystemEx(int a4, int a5, int a6, int a7);
int ADXSTM_OpenRange(int a4, int a5, int a6);
int FUN_0c2cfc92(int a4, int a5);
int FUN_0c2d1a5e(int a4, int a5, int a6);
int FUN_0c2d328c(int a4, int a5);
int FUN_0c2d70c0(void);
int FUN_0c2e3ee6(void);
int FUN_0c2e8992(void);
int FUN_0c2f98d8(void);
float FUN_0c179d50(int a4, float f4);
float FUN_0c179e20(int a4, float f4);
float nlSinf(float f4);
int FUN_0c17b860(int a4);
int FUN_0c18077a(int a4, int a5, int a6);
int FUN_0c180a04(int a4);
int FUN_0c18422a(void);
int FUN_0c18e4ba(int a4, int a5);
int FUN_0c190244(int a4);
int FUN_0c19a872(int a4, int a5, int a6, int a7);
int adxf_SetCmdHstry(int a4, int a5, int a6, int a7, int a8);
int ADXF_Open(int a4, int a5);
int FUN_0c2bd134(int a4, int a5, int a6, int a7);
int FUN_0c2bd26a(int a4, int a5, int a6, int a7);

int search_dir_by_startfat(int a4, int a5, int a6, int a7)
{
    register int t2;
    register int t3;
    register int t1;

    t2 = 0x0;
    t3 = (*(int *)((((a4 * 0x148) + 0xC8C4604) + 0x28)));
    for (;;) {
        if ((int)t2 >= (int)(*(int *)(((*(int *)((((a4 * 0x148) + 0xC8C4604) + 0x1C))) + 0x30)))) {
            t1 = 0x0;
            return t1;
        }
        if ((unsigned char)(*(signed char *)((t3 + 0x0))) != 0) {
            t1 = (((int (*)(int, int, int, int))((*(int *)(((*(int *)0xC8C4600) + 0xC)))))(t3, 0x2, a6, a7));
            t1 = (unsigned short)t1;
            if (t1 == a5) {
                break;
            }
            t3 = (t3 + 0x20);
            t2 = (t2 + 0x1);
            continue;
        }
        t3 = (t3 + 0x20);
        t2 = (t2 + 0x1);
    }
    return t3;
}

int FUN_0c2aeaa0(int a4, int a5)
{
    int stk[3];
    register int t2;
    register int t11;
    register int t6;
    register int t18;

    *(unsigned int *)(((int)stk + 8)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    gdFsChangeDir(0xC2FE630);
    t2 = gdFsLoadDirFast((*(int *)(((int)stk + 8))), 0x0);
    t11 = 0xFFFFFFFF;
    if (t2 != 0) {
        gdFsGetFileSctSize(t2, ((int)stk + 0));
        t6 = gdFsRead(t2, (*(int *)(((int)stk + 0))), (*(int *)(((int)stk + 4))));
        t11 = 0x0;
        if (t6 != 0) {
            t11 = 0xFFFFFFFF;
        }
        gdFsClose(t2);
    }
    sys_shutdown_all();
    if (t11 != 0) {
        syBtExit();
    }
    t18 = ((int (*)(void))((*(int *)(((int)stk + 4)))))();
    return 0x1;
}

int vmsio_ismount(int a4)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;

    t1 = *(int *)(((a4 << 2) + 0xC300818));
    t2 = kdGetDevice(t1);
    t3 = FUN_0c2bca16(t1);
    if ((*(signed char *)((t2 + 0x0))) != 0) {
        t2 = thunk_FUN_0c2d9e8a(t1);
        if ((t2 == 0) && (t0 = *(int *)((t3 + 0x0)), (t0 & 2) != 0)) {
            return 0x1;
        }
        return 0x0;
    }
    return 0x0;
}

int FUN_0c2e3f7c(void)
{
    register int t0;

    t0 = *(signed char *)0xC8D677E;
    if (((unsigned char)t0 & 8) == 0) {
        if (((unsigned char)(*(signed char *)0xC8D6781) & 128) == 0) {
            FUN_0c2d0e80((*(signed char *)(((*(int *)0xC8D66E8) + 0x88))), (*(signed char *)(((*(int *)0xC8D66E8) + 0x89))));
        }
        if (((unsigned char)(*(signed char *)0xC8D6456) & 12) != 0) {
            FUN_0c2e8496();
        }
        *(unsigned char *)0xC8D6781 = ((*(signed char *)0xC8D6781) | 0x80);
        FUN_0c2d63b6();
        FUN_0c2d37bc();
        *(volatile signed char *)0xC8D6455;
        
        return FUN_0c2d63c8();
    }
    return (unsigned char)t0;
}

int FUN_0c185210(int a4)
{
    register int t0;

    t0 = FUN_0c184ee8(0x0, 0x3500, 0x0);
    if (t0 == -1) {
        return 0xFFFFFFFF;
    }
    strcpy((0x818 + ((short)((short)t0 * (short)0xC24) + 0xC89C310)), a4);
    return t0;
}

void kdExitSystem(void)
{
    register int t0;

    t0 = _builtin_get_imask();
    _builtin_set_imask(0xF);
    *(unsigned int *)0xA05F6920 = ((*(int *)0xA05F6920) & 0xFFFFCFFF);
    syChainDeleteHandler(((((struct o8_int *)0xC8C1BFC)->v)));
    syChainDeleteHandler(((((struct oC_int *)0xC8C1BFC)->v)));
    syChainDeleteHandler(((((struct o4_int *)0xC8C1BFC)->v)));
    syChainDeleteHandler(((((struct o0_int *)0xC8C1BFC)->v)));
    mpdrv_exit();
    memset(0xC8C1C88, 0x0, 0x240);
    _builtin_set_imask(((unsigned int)(((t0 & 0xF) << 2) << 2) >> 4));
}

int FUN_0c2f37ce(int a4, int a5)
{
    int stk[3];
    register int t0;
    register int t13;
    register int t2;
    register int t3;
    register int t5;
    register int t1;

    *(unsigned char *)(((int)stk + 8)) = a4;
    *(unsigned char *)(((int)stk + 4)) = a5;
    t0 = FUN_0c2eeb4a(((int)stk + 0));
    t13 = (unsigned short)t0;
    if ((unsigned short)t0 != 0) {
        t2 = 0x0;
        for (;;) {
            t3 = *(signed char *)0xC8DFFCF;
            *(unsigned char *)0xC8DFFCF = (t3 + 0x1);
            t2 = (t2 + 0x1);
            if (((int)((int)(unsigned char)((t3 + 0x1) - 1) % (int)0x2)) != 0) {
                t5 = *(int *)(((int)stk + 0));
                *(unsigned int *)(((int)stk + 0)) = (t5 + 0x1);
                *(unsigned char *)((((t5 + 0x1) - 0x1) + 0x0)) = (*(signed char *)(((int)stk + 8)));
            } else {
                t1 = (*(int *)(((int)stk + 0)));
                t1 = (t1 + 0x1);
                *(unsigned int *)(((int)stk + 0)) = t1;
                *(unsigned char *)(((t1 - 0x1) + 0x0)) = (*(signed char *)(((int)stk + 4)));
                t1 = (t1 - 0x1);
            }
            if ((int)(unsigned char)t2 >= (int)0x80) {
                break;
            }
        }
        t13 = (FUN_0c2eec74((unsigned char)t2, 0x1));
    }
    return t13;
}

int FUN_0c1854a0(int a4)
{
    register int t0;
    register int t1;
    register int t4;

    t0 = FUN_0c185210(a4);
    for (;;) {
        t1 = FUN_0c185284(t0, 0xC8A2C40);
        if (t1 != -2) {
            break;
        }
    }
    t4 = 0x0;
    if (t1 != 0) {
    } else {
        FUN_0c185276(t0);
        (((struct o8_uint *)0xC8A2C44)->v) = a4;
        *(unsigned int *)((((((struct oC_int *)0xC8A2C44)->v)) + 0x0)) = 0x0;
        (((struct o10_uint *)0xC8A2C44)->v) = 0x2;
        (((struct o14_uint *)0xC8A2C44)->v) = 0x4;
        (((struct o0_uint *)0xC8A2C44)->v) = 0xC8A2C40;
        (((struct o4_uint *)0xC8A2C44)->v) = 0x0;
        (((struct o18_uint *)0xC8A2C44)->v) = 0xC8A2C44;
        t4 = 0xC8A2C4C;
    }
    return t4;
}

int FUN_0c18fea6(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t0 = *(int *)0xC8A9678;
    t1 = 0xFFFFFFFF;
    if (t0 != 0) {
        t2 = t0;
        t3 = t0;
        for (;;) {
            if (t3 == 0) {
                break;
            }
            if (t3 == (a4)) {
                *(unsigned int *)0xC8A9678 = t3;
                t3 = (*(int *)((t3 + 0x10)));
            } else {
                t0 = (*(int *)((t3 + 0x14)));
                for (;;) {
                    if (t0 == 0) {
                        break;
                    }
                    t4 = t0;
                    t0 = (*(int *)((t0 + 0xC)));
                    t2 = t4;
                    FUN_0c18df08(t2);
                    t2 = t4;
                    FUN_0c18fd60(t2);
                }
                t2 = t3;
                t3 = (*(int *)((t3 + 0x10)));
                FUN_0c18fd88(t2);
            }
        }
        *(unsigned int *)(((*(int *)0xC8A9678) + 0x10)) = 0x0;
        t1 = 0x0;
    }
    return t1;
}

int FUN_0c19133a(int a4)
{
    register int t0;
    register int t1;

    FUN_0c1920f4();
    t0 = FUN_0c19e5b8(0xC8ABB28, a4);
    t1 = 0xFFFFFFEF;
    if ((short)t0 == 0) {
        t0 = FUN_0c19e6f4(0xC8ABB28);
        t1 = 0xFFFFFFEF;
        if ((short)t0 != 0) {
        } else {
            if ((unsigned short)(*(short *)((a4 + 0x6))) == 4) {
                t0 = *(int *)0xC8ABB58;
                if ((unsigned short)((((struct o24_short *)((t0 + 0x34)))->v)) == 0xC023) {
                    *(unsigned short *)((a4 + 0x6)) = 0x80;
                }
                if ((unsigned short)((((struct o24_short *)((t0 + 0x34)))->v)) == 0xC223) {
                    *(unsigned short *)((a4 + 0x6)) = 0x82;
                }
            }
            t1 = 0x0;
        }
    }
    return t1;
}

int FUN_0c191f92(int a4)
{
    int stk[3];
    register int t1;
    register int t5;

    *(unsigned int *)(((int)stk + 0)) = a4;
    t1 = FUN_0c191f70((*(int *)((a4 + 0x0))));
    if (t1 != 1) {
        *(unsigned short *)(((int)stk + 0)) = (FUN_0c191f2c());
        if (((((struct o4_int *)0xC2AE76C)->v)) == 0) {
            FUN_0c1832a4(0xC8AAE9C, 0xC8AA21C, 0xC80, 0xC80);
            t5 = FUN_0c18330c(0x1, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4));
            *(unsigned int *)0xC8AA218 = t5;
            if (t5 == -1) {
                return 0x2;
            }
            (((struct o4_uint *)0xC2AE76C)->v) = 0x1;
        } else {
            FUN_0c192164(0x82, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16));
        }
        (((struct o0_ushort *)0xC2AE76C)->v) = 0x1;
        FUN_0c191f5a((*(short *)(((int)stk + 0))));
        return 0x0;
    }
    return 0x2;
}

int FUN_0c19c710(int a4)
{
    register int t0;
    register int t1;
    register int t6;
    int t8;

    t0 = 0x0;
    t1 = 0x0;
    for (;;) {
        if ((int)t1 >= (int)(unsigned char)(*(signed char *)0xC8A738D)) {
            return 0x0;
        }
        t6 = *(int *)0xC8A73C4;
        if (((*(short *)(((t6 + t0) + 0x8))) != 0) && (t8 = *(short *)(((t6 + t0) + 0xC)), (unsigned short)a4 == (unsigned short)t8)) {
            break;
        }
        t0 = (t0 + 0x30);
        t1 = (t1 + 0x1);
    }
    return 0x1;
}

int pdVibMxSetStopTime(int a4, int a5)
{
    int stk[6];
    register int t1;
    register int t4;

    *(unsigned int *)(((int)stk + 16)) = a4;
    *(unsigned int *)(((int)stk + 20)) = a5;
    t1 = thunk_FUN_0c2b3af8((*(int *)(((int)stk + 16))));
    if (t1 == 0) {
        return 0xFFFFFFFE;
    }
    *(unsigned int *)(((int)stk + 12)) = 0x0;
    *(unsigned char *)((((int)stk + 12) + 0x0)) = 0x0;
    *(unsigned char *)(((((int)stk + 12) + 0x1) + 0x0)) = 0x2;
    *(unsigned char *)((((((int)stk + 12) + 0x1) + 0x1) + 0x0)) = (*(int *)(((int)stk + 20)));
    *(int *)((int)stk + 8) = 0x1;
    *(int *)((int)stk + 4) = (((int)stk + 8) + 0x4);
    *(int *)((int)stk + 0) = 0x0;
    t4 = kdSetBlockWrite((*(int *)(((int)stk + 16))), 0x100, 0x0, 0x0, 0x0, (((int)stk + 8) + 0x4), 0x1);
    if ((int)t4 < 0) {
        return 0xFFFFFFFF;
    }
    return 0x0;
}

int ADXT_StartAfs(int a4, int a5, int a6)
{
    int stk[7];
    register int t8;

    *(unsigned int *)(((int)stk + 20)) = a5;
    *(unsigned int *)(((int)stk + 24)) = a6;
    ADXT_Stop(a4);
    ADXCRS_Lock();
    FUN_0c2b5992((*(int *)(((int)stk + 20))), (*(int *)(((int)stk + 24))), ((int)stk + 12), (((int)stk + 12) + 0x4));
    t8 = ADXSTM_OpenRange((*(int *)(((int)stk + 12))), (*(int *)(((int)stk + 16))), (*(int *)((a4 + 0x10))));
    *(unsigned int *)((a4 + 0x8)) = t8;
    if (t8 == 0) {
        ADXCRS_Unlock();
        *(int *)((int)stk + 8) = ((*(int *)(((int)stk + 24))));
        *(int *)((int)stk + 4) = ((*(int *)(((int)stk + 20))));
        *(int *)((int)stk + 0) = 0xC2FEE50;
        FUN_0c2c30aa(0xC2FEE50);
    } else {
        adxt_start_stm(a4);
    }
    return (ADXCRS_Unlock());
}

int ADXT_ExecServer(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    ADXSJD_ExecServer();
    (((struct o4_uint *)0xC303BA0)->v) = 0x0;
    thunk_FUN_0c2c56fc();
    (((struct o8_uint *)0xC303BA0)->v) = 0x0;
    ADXF_ExecServer();
    (((struct oC_uint *)0xC303BA0)->v) = 0x0;
    ADXSTM_ExecServer();
    (((struct o10_uint *)0xC303BA0)->v) = 0x0;
    t0 = 0xC303BB0;
    t1 = 0xC30373C;
    for (;;) {
        t3 = *(signed char *)((t1 + 0x0));
        t2 = t3;
        if (t3 == 1) {
            t2 = (FUN_0c2c4724(t1));
        } else {
            t3 = t0;
        }
        t0 = t3;
        t1 = (t1 + 0x8C);
        if ((unsigned int)t1 >= (unsigned int)0xC303B9C) {
            break;
        }
    }
    (((struct o14_uint *)0xC303BA0)->v) = 0x0;
    (((struct o0_uint *)0xC303BA0)->v) = 0x0;
    return t2;
}

int check_fat_xross(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = 0x0;
    for (;;) {
        if ((int)t0 >= (int)(*(int *)(((*(int *)((((a4 * 0x148) + 0xC8C4604) + 0x1C))) + 0x30)))) {
            return (unsigned short)a5;
        }
        t1 = direntry(a4, t0);
        t2 = *(signed char *)((t1 + 0x0));
        if (((unsigned char)t2 != 51) && ((unsigned char)t2 != 0xCC)) {
            t0 = (t0 + 0x1);
            continue;
        }
        t2 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)0xC8C4600) + 0xC)))))(t1, 0x2, a6, a7);
        if ((unsigned short)a5 == (unsigned short)t2) {
            break;
        }
        t0 = (t0 + 0x1);
    }
    return 0xFFFFFFFF;
}

int FUN_0c2c6d40(int a4, int a5, int a6)
{
    int stk[12];
    register int t3;
    register int t5;
    register int t9;
    register int t11;
    register int t17;
    register int t18;

    *(unsigned int *)(((int)stk + 24)) = a4;
    *(unsigned int *)(((int)stk + 20)) = a6;
    FUN_0c2e3040((((int)stk + 20) + 0x8), a5);
    if (((*(int *)(((int)stk + 24))) & 1) != 0) {
        t3 = *(int *)(((((int)stk + 20) + 0x8) + 0x4));
        *(unsigned int *)(((int)stk + 0)) = (*(int *)(((((int)stk + 20) + 0x8) + 0x0)));
        *(unsigned int *)(((int)stk + 4)) = t3;
        t5 = *(int *)(((((int)stk + 20) + 0x8) + 0xC));
        *(unsigned int *)(((int)stk + 8)) = (*(int *)(((((int)stk + 20) + 0x8) + 0x8)));
        *(unsigned int *)(((int)stk + 12)) = t5;
        *(unsigned int *)(((int)stk + 16)) = (*(int *)(((((int)stk + 20) + 0x8) + 0x10)));
        t17 = 0x1;
        t18 = (*(int *)(((int)stk + 20)));
    } else {
        t9 = *(int *)(((((int)stk + 20) + 0x8) + 0x4));
        *(unsigned int *)(((int)stk + 0)) = (*(int *)(((((int)stk + 20) + 0x8) + 0x0)));
        *(unsigned int *)(((int)stk + 4)) = t9;
        t11 = *(int *)(((((int)stk + 20) + 0x8) + 0xC));
        *(unsigned int *)(((int)stk + 8)) = (*(int *)(((((int)stk + 20) + 0x8) + 0x8)));
        *(unsigned int *)(((int)stk + 12)) = t11;
        *(unsigned int *)(((int)stk + 16)) = (*(int *)(((((int)stk + 20) + 0x8) + 0x10)));
        t17 = 0x0;
        t18 = (*(int *)(((int)stk + 20)));
    }
    return (VQalloc(t17, t18));
}

int Qreset(void)
{
    register int t0;
    register int t1;

    if ((unsigned int)0x0 < (unsigned int)((((struct o0_int *)0xC304124)->v))) {
        t0 = 0x0;
        for (;;) {
            t1 = ((((t0 << 1) + t0) << 2) << 1);
            t0 = (t0 + 0x1);
            *(unsigned short *)(((t1 + ((((struct o18_int *)0xC304124)->v))) + 0x0)) = 0x0;
            if ((unsigned int)t0 >= (unsigned int)((((struct o0_int *)0xC304124)->v))) {
                break;
            }
        }
    }
    (((struct o1C_uint *)0xC304124)->v) = 0x0;
    (((struct o20_uint *)0xC304124)->v) = 0x0;
    (((struct o24_uint *)0xC304124)->v) = 0x0;
    (((struct o28_uint *)0xC304124)->v) = 0x0;
    (((struct o2C_uint *)0xC304124)->v) = 0x0;
    (((struct o30_uint *)0xC304124)->v) = 0x0;
    (((struct o34_uint *)0xC304124)->v) = 0x0;
    (((struct o38_uint *)0xC304124)->v) = 0x0;
    if ((unsigned int)0x0 < (unsigned int)((((struct o4_int *)0xC304124)->v))) {
        t0 = 0x0;
        for (;;) {
            t1 = (t0 * 0x4C);
            t0 = (t0 + 0x1);
            *(unsigned short *)(((t1 + (*(int *)0xC304164)) + 0x0)) = 0x0;
            if ((unsigned int)t0 >= (unsigned int)((((struct o4_int *)0xC304124)->v))) {
                break;
            }
        }
    }
    (((struct o3C_uint *)0xC304124)->v) = 0x0;
    return 0x0;
}

int FUN_0c2d19fa(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t0 = 0x0;
    if ((int)(unsigned short)a5 >= (int)(unsigned char)(*(signed char *)((a4 + 0x0)))) {
        if ((int)(unsigned short)a6 > 0) {
            t1 = (0x0 + a4);
            t2 = (0x0 + a4);
            t3 = 0x0;
            t4 = (0xFFFFFFFE + a4);
            for (;;) {
                if ((unsigned short)a5 == (unsigned char)(*(signed char *)(((((unsigned short)t3 << 1) + a4) + 0x0)))) {
                    break;
                }
                if ((int)(unsigned short)a5 < (int)(unsigned char)(*(signed char *)((t1 + 0x0)))) {
                    t1 = (*(signed char *)((t4 + 0x1)));
                    return t1;
                }
                t3 = (t3 + 0x1);
                t4 = (t4 + 0x2);
                t1 = (t1 + 0x2);
                t2 = (t2 + 0x2);
                if ((int)(unsigned short)t3 >= (int)(unsigned short)a6) {
                    t1 = (unsigned short)a6;
                    t1 = (t1 - 1);
                    t1 = (t1 << 1);
                    t1 = (t1 + a4);
                    t1 = (*(signed char *)((t1 + 0x1)));
                    return t1;
                }
            }
            t1 = (*(signed char *)((t2 + 0x1)));
        } else {
            t1 = (*(signed char *)((((((unsigned short)a6 - 1) << 1) + a4) + 0x1)));
        }
        t0 = t1;
    }
    return t0;
}

int FUN_0c2ea256(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;

    if ((unsigned char)a4 != 11) {
        t0 = 0x0;
        if ((unsigned char)a4 != 12) {
        } else {
            if ((unsigned char)a5 != 4) {
                t1 = 0x0;
                if ((unsigned char)a5 == 5) {
                    *(unsigned short *)0xC8D672A = 0x54D;
                    t1 = 0x1;
                }
                t2 = t1;
            } else {
                *(unsigned short *)0xC8D672A = 0x3FF;
                t2 = 0x1;
            }
            t0 = t2;
        }
        t1 = t0;
    } else {
        if ((unsigned char)a5 != 3) {
            if ((unsigned char)a5 != 4) {
                t0 = 0x0;
                if ((unsigned char)a5 == 5) {
                    *(unsigned short *)0xC8D672A = 0x5F2;
                    t0 = 0x1;
                }
                t2 = t0;
            } else {
                *(unsigned short *)0xC8D672A = 0x2C8;
                t2 = 0x1;
            }
            t0 = t2;
        } else {
            *(unsigned short *)0xC8D672A = 0x4F5;
            t0 = 0x1;
        }
        t1 = t0;
    }
    return t1;
}

int FUN_0c177450(void)
{
    register int t0;
    register int t1;

    kmEndPass(0xC8A2E90);
    nl_action_PixelClipping();
    FUN_0c2b6900(0x0);
    t0 = (((struct o0_int *)0xC2A6090)->v);
    if (t0 != 0) {
        t1 = ((int (*)(void))(t0))();
    }
    kmEndScene(0xC83CD8C);
    t0 = (((struct o4_int *)0xC2A6090)->v);
    if (t0 != 0) {
        t1 = ((int (*)(void))(t0))();
    }
    kmBeginScene(0xC83CD8C);
    kmBeginPass(0xC8A2E90);
    *(unsigned int *)0xC83CFDC = (*(int *)0xC8A2E90);
    t0 = (((struct o8_int *)0xC2A6090)->v);
    t1 = 0xC2A6098;
    if (t0 != 0) {
        t1 = (((int (*)(void))(t0))());
    }
    return t1;
}

int nlSetIntrFunction(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t4;

    t0 = _builtin_get_imask();
    _builtin_set_imask(0xE);
    if ((int)a4 < (int)0xD) {
        t4 = (((int (*)(int, int, int, int))((*(int *)(((a4 << 2) + 0xC2A6154)))))(a4, a5, a6, a7));
    } else {
        t4 = (FUN_0c17da50());
    }
    _builtin_set_imask(((unsigned int)(((t0 & 0xF) << 2) << 2) >> 4));
    return t4;
}

int FUN_0c17ffea(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    if (((int)a5 >= 0) && ((int)a5 < (int)0x8)) {
        t0 = 0xC205F45;
        t1 = a4;
        t2 = 0x0;
        for (;;) {
            t3 = *(signed char *)((t0 + 0x0));
            t0 = (t0 + 0x1);
            t4 = *(signed char *)((t1 + 0x0));
            t1 = (t1 + 0x1);
            if (t4 != t3) {
                break;
            }
            t2 = (t2 + 0x1);
            if ((int)t2 >= (int)0x4) {
                t2 = a5;
                t2 = (t2 << 1);
                t2 = (t2 + a5);
                t2 = (t2 << 2);
                t2 = (signed char)t2;
                t2 = (t2 + 0xC86CD00);
                t0 = (*(int *)((t2 + 0x0)));
                if (t0 == -1) {
                    t0 = 0xFFFFFFFD;
                    return t0;
                }
                if ((int)(*(int *)((t2 + 0x8))) < (int)(*(int *)((a4 + 0x8)))) {
                    t0 = 0xFFFFFFFC;
                    return t0;
                }
                t1 = (*(int *)(((*(int *)0xC86CC34) + 0x0)));
                if (t1 != 0) {
                    t0 = 0xFFFFFFFB;
                    return t0;
                }
                t0 = 0x0;
                return t0;
            }
        }
        return 0xFFFFFFFE;
    }
    return 0xFFFFFFFF;
}

int FUN_0c18ecb4(void)
{
    register int t0;
    register int t1;
    register int t2;

    (((struct o0_ushort *)0xC8A9674)->v) = 0x1;
    t0 = 0xC8A9674;
    t1 = 0x0;
    t2 = 0x0;
    for (;;) {
        if ((int)t2 >= (int)(unsigned char)(*(signed char *)0xC8A738E)) {
            break;
        }
        t0 = (*(int *)0xC8A73C8);
        t2 = (t2 + 0x1);
        t0 = (t0 + t1);
        t1 = (t1 + 0x14);
        *(unsigned short *)((t0 + 0x0)) = 0x0;
    }
    t0 = 0xC8A8FDC;
    for (;;) {
        *(unsigned short *)((t0 + 0xE)) = 0x0;
        t0 = (t0 + 0x1C);
        if ((unsigned int)t0 >= (unsigned int)0xC8A935C) {
            break;
        }
    }
    (((struct o8_uint *)0xC8A9674)->v) = 0x0;
    (((struct o4_uint *)0xC8A9674)->v) = 0x0;
    t0 = 0xC8A935C;
    for (;;) {
        *(unsigned int *)((t0 + 0x1C)) = 0x0;
        t0 = (t0 + 0x20);
        if ((unsigned int)t0 >= (unsigned int)0xC8A93DC) {
            break;
        }
    }
    t0 = 0xC8A93DC;
    for (;;) {
        *(unsigned int *)((t0 + 0x10)) = 0x0;
        t0 = (t0 + 0x14);
        if ((unsigned int)t0 >= (unsigned int)0xC8A965C) {
            break;
        }
    }
    return 0x0;
}

int FUN_0c191ea4(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t15;
    register int t16;
    register int t18;
    register int t19;
    register int t3;
    int t4;

    t0 = a4;
    t1 = a5;
    t2 = a6;
    for (;;) {
        if (((short)t2 != 0) && ((t3 = *(signed char *)((t0 + 0x0)), t3 != 0) && (t4 = *(signed char *)((t1 + 0x0)), t4 != 0))) {
            t15 = *(signed char *)((t0 + 0x0));
            t16 = *(signed char *)((t1 + 0x0));
            t18 = t15;
            if (((int)(unsigned char)t15 >= (int)0x61) && ((int)(unsigned char)t15 <= (int)0x7A)) {
                t18 = (t15 - 32);
            }
            t19 = t16;
            if (((int)(unsigned char)t16 >= (int)0x61) && ((int)(unsigned char)t16 <= (int)0x7A)) {
                t19 = (t16 - 32);
            }
            if ((unsigned char)t18 != (unsigned char)t19) {
                break;
            }
            t2 = (t2 - 1);
            t1 = (t1 + 0x1);
            t0 = (t0 + 0x1);
            continue;
        }
        t2 = (short)t2;
        if (t2 != 0) {
            return 0x1;
        }
        return 0x0;
    }
    return ((unsigned char)t18 - (unsigned char)t19);
}

int FUN_0c194116(int a4, int a5, int a6)
{
    int stk[9];

    (((struct o22_ushort *)(((int)stk + 0)))->v) = a4;
    *(unsigned int *)(((int)stk + 28)) = a5;
    *(unsigned short *)(((((int)stk + 0) + 0x1A) + 0x0)) = a6;
    FUN_0c187a88(((int)stk + 0), (((int)stk + 0) + 0x1C), 0x4);
    FUN_0c187a88((((int)stk + 0) + 0x4), (((int)stk + 0) + 0x1A), 0x2);
    FUN_0c187a88((((int)stk + 0) + 0x6), (((int)stk + 0) + 0x22), 0x2);
    *(unsigned char *)(((int)stk + 9)) = 0x0;
    *(unsigned char *)(((int)stk + 10)) = 0x0;
    *(unsigned char *)(((int)stk + 11)) = 0x0;
    *(unsigned short *)(((int)stk + 12)) = 0x0;
    *(unsigned int *)(((int)stk + 16)) = 0x0;
    *(unsigned int *)(((int)stk + 20)) = 0xC193E50;
    return (FUN_0c184000(0x4110, ((int)stk + 0), 0x0));
}

int FUN_0c1947d0(int a4, int a5, int a6, int a7)
{
    int stk[9];

    *(unsigned int *)(((int)stk + 8)) = a5;
    *(unsigned int *)(((int)stk + 16)) = a6;
    *(unsigned int *)(((int)stk + 12)) = a7;
    *(unsigned short *)(((int)stk + 32)) = a4;
    *(unsigned short *)(((int)stk + 20)) = (FUN_0c184000(0x4116, (((int)stk + 0) + 0x20), (((int)stk + 0) + 0x18)));
    *(unsigned short *)(((int)stk + 0)) = (FUN_0c185d50((*(short *)(((int)stk + 28)))));
    FUN_0c187a88((*(int *)(((int)stk + 8))), ((int)stk + 0), 0x2);
    *(unsigned short *)(((int)stk + 0)) = (FUN_0c185d50((*(short *)(((int)stk + 30)))));
    FUN_0c187a88((*(int *)(((int)stk + 12))), ((int)stk + 0), 0x2);
    *(unsigned int *)(((int)stk + 4)) = (FUN_0c185d00((*(int *)(((int)stk + 24)))));
    FUN_0c187a88((*(int *)(((int)stk + 16))), (((int)stk + 0) + 0x4), 0x4);
    return (*(short *)(((int)stk + 20)));
}

int FUN_0c19db48(int a4, int a5)
{
    if ((short)a5 == 0) {
        *(unsigned short *)((a4 + 0x4)) = ((*(short *)((a4 + 0x4))) | 0x8);
        *(unsigned short *)((a4 + 0xC)) = 0xC023;
        return 0x0;
    }
    if ((short)a5 == 1) {
        *(unsigned short *)((a4 + 0x4)) = ((*(short *)((a4 + 0x4))) & 0xFFFFFFF7);
        (((struct o19_uchar *)(a4))->v) = 0x0;
        return 0x0;
    }
    if ((short)a5 == 2) {
        *(unsigned short *)((a4 + 0x4)) = ((*(short *)((a4 + 0x4))) | 0x8);
        *(unsigned short *)((a4 + 0xC)) = 0xC223;
        (((struct o18_uchar *)(a4))->v) = 0x5;
        (((struct o19_uchar *)(a4))->v) = 0x0;
        return 0x0;
    }
    if ((short)a5 == 4) {
        *(unsigned short *)((a4 + 0x4)) = ((*(short *)((a4 + 0x4))) | 0x8);
        *(unsigned short *)((a4 + 0xC)) = 0xC223;
        (((struct o18_uchar *)(a4))->v) = 0x5;
        (((struct o19_uchar *)(a4))->v) = 0x1;
        return 0x0;
    }
    return 0x1;
}

int FUN_0c1a1126(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;

    t0 = *(short *)((a5 + 0x4));
    t1 = *(int *)((a5 + 0x0));
    t2 = (unsigned short)a6;
    if ((int)(unsigned short)t0 < (int)(unsigned short)a6) {
        t2 = (unsigned short)t0;
    }
    t0 = 0x0;
    t3 = t2;
    t4 = 0x0;
    if ((0x1 & (short)t2) != 0) {
        t0 = 0x1;
        t3 = (t2 - 1);
        t4 = (unsigned char)(*(signed char *)((t1 + ((short)t2 - 1))));
    }
    t2 = a4;
    if ((int)(short)((short)t3 >> 1) > 0) {
        t5 = a4;
        t6 = ((short)t3 >> 1);
        t3 = t1;
        for (;;) {
            t1 = *(signed char *)((t3 + 0x0));
            t3 = (t3 + 0x1);
            t6 = (t6 - 1);
            t5 = (t5 + ((unsigned char)t1 << 8));
            t1 = *(signed char *)((t3 + 0x0));
            t3 = (t3 + 0x1);
            t5 = (t5 + (unsigned char)t1);
            if ((int)(short)t6 <= 0) {
                break;
            }
        }
        t2 = t5;
    }
    t1 = t2;
    if (t0 != 0) {
        t1 = (t2 + ((unsigned short)t4 << 8));
    }
    return t1;
}

float FUN_0c1a3254(int a4, int a5)
{
    int stk[4];
    register int t2;
    register int t7;
    register int t8;

    *(unsigned short *)(((int)stk + 4)) = a4;
    *(unsigned char *)((a5 + 0x0)) = ((*(signed char *)((a5 + 0x0))) & 0x7F);
    *(unsigned int *)(((int)stk + 8)) = ((((int)stk + 0) + 0xC) + 0x1);
    FUN_0c187a88(((((int)stk + 0) + 0xC) + 0x1), a5, 0x3);
    t2 = *(short *)(((int)stk + 4));
    *(unsigned char *)(((((int)stk + 0) + 0xC) + 0x0)) = (((int)((unsigned int)((int)((unsigned int)t2 + (unsigned int)0x0)) + ((((int)0x0 > (int)t2)) ? 1u : 0u))) >> 1);
    t7 = *(int *)(((int)stk + 8));
    t8 = ((~(((~t2) + 0x1) & 0x1)) + 0x1);
    if ((int)t2 >= 0) {
        t8 = (t2 & 0x1);
    }
    *(unsigned char *)((t7 + 0x0)) = ((*(signed char *)((t7 + 0x0))) | (t8 << 7));
    FUN_0c1a39f0(((int)stk + 0), (((int)stk + 0) + 0xC));
    return (*(float *)(((int)stk + 0)));
}

int FUN_0c2af6f8(void)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = (((struct o4_int *)0xC3036E4)->v);
    if (t0 != 0) {
        t1 = (syChainDeleteHandler(t0));
    }
    t0 = (((struct o8_int *)0xC3036E4)->v);
    t2 = t1;
    if (t0 != 0) {
        t2 = (syChainDeleteHandler(t0));
    }
    (((struct o4_uint *)0xC3036E4)->v) = 0x0;
    (((struct o8_uint *)0xC3036E4)->v) = 0x0;
    t0 = t2;
    t1 = (((((struct o0_int *)0xC3036E4)->v)) + 0x1080);
    t2 = 0x0;
    for (;;) {
        if ((int)t2 >= (int)((*(int *)((((((struct o0_int *)0xC3036E4)->v)) + 0x0))) + 0x1)) {
            break;
        }
        t0 = (gdFsClose(t1));
        t2 = (t2 + 0x1);
        t1 = (t1 + 0x54);
    }
    (((struct o0_uint *)0xC3036E4)->v) = 0x0;
    return t0;
}

int kmSetBackGroundPlane(int a4, int a5)
{
    register int t7;
    register int t8;
    register int t9;
    register int t10;

    (((struct o0_uint *)0xC8D1DA8)->v) = (((((struct o0_int *)0xC8D1DA8)->v)) | 0x1);
    (((struct o10_float *)0xC8D1DA8)->v) = ((((struct oC_float *)((*(int *)((a4 + 0x0)))))->v));
    t7 = ((int (*)(int, int, int, int))((*(int *)(((a5 << 2) + 0xC303BBC)))))(0xC8BFFD0, (*(int *)((a4 + 0x0))), (*(int *)((a4 + 0x4))), (*(int *)((a4 + 0x8))));
    t8 = 0x0;
    for (;;) {
        t9 = *(int *)(((0xC8D1DB0 + t8) + 0x0));
        t10 = (0xC8D1DB0 + t8);
        t8 = (t8 + 0x4);
        *(unsigned int *)((t10 + 0x0)) = (t9 | 0x1);
        if ((unsigned int)t8 >= (unsigned int)0x8) {
            break;
        }
    }
    (((struct o0_uint *)0xC8D1DA8)->v) = (((((struct o0_int *)0xC8D1DA8)->v)) & 0xFFFFFFFE);
    return t7;
}

int get_vmstime(int a4, int a5)
{
    register int t0;

    t0 = BCDtoDEC((unsigned char)(*(signed char *)((a5 + 0x0))));
    *(unsigned short *)((a4 + 0x0)) = (((unsigned short)t0 * (unsigned short)0x64) + (BCDtoDEC((unsigned char)(*(signed char *)((a5 + 0x1))))));
    *(unsigned char *)((a4 + 0x2)) = (BCDtoDEC((unsigned char)(*(signed char *)((a5 + 0x2)))));
    *(unsigned char *)((a4 + 0x3)) = (BCDtoDEC((unsigned char)(*(signed char *)((a5 + 0x3)))));
    *(unsigned char *)((a4 + 0x4)) = (BCDtoDEC((unsigned char)(*(signed char *)((a5 + 0x4)))));
    *(unsigned char *)((a4 + 0x5)) = (BCDtoDEC((unsigned char)(*(signed char *)((a5 + 0x5)))));
    *(unsigned char *)((a4 + 0x6)) = (BCDtoDEC((unsigned char)(*(signed char *)((a5 + 0x6)))));
    t0 = *(signed char *)((0xC2FFC40 + ((unsigned char)(*(signed char *)((a5 + 0x7))) & 0x7)));
    *(unsigned char *)((a4 + 0x7)) = t0;
    return t0;
}

int SJMEM_Create(int a4, int a5)
{
    register int t0;

    t0 = 0x0;
    for (;;) {
        if ((*(int *)(((((((t0 << 2) << 1) + t0) << 2) + 0xC8CE934) + 0x4))) != 0) {
            t0 = (t0 + 0x1);
            if ((int)t0 >= (int)0x20) {
                break;
            }
            continue;
        }
        break;
    }
    if (t0 == 32) {
        return 0x0;
    }
    *(unsigned int *)(((((((t0 << 2) << 1) + t0) << 2) + 0xC8CE934) + 0x4)) = 0x1;
    *(unsigned int *)(((((((t0 << 2) << 1) + t0) << 2) + 0xC8CE934) + 0x0)) = 0xC303DB0;
    *(unsigned int *)(((((((t0 << 2) << 1) + t0) << 2) + 0xC8CE934) + 0x14)) = a4;
    *(unsigned int *)(((((((t0 << 2) << 1) + t0) << 2) + 0xC8CE934) + 0x18)) = a5;
    *(unsigned int *)(((((((t0 << 2) << 1) + t0) << 2) + 0xC8CE934) + 0x8)) = 0xC300018;
    *(unsigned int *)(((((((t0 << 2) << 1) + t0) << 2) + 0xC8CE934) + 0x1C)) = 0xC2C605E;
    *(unsigned int *)(((((((t0 << 2) << 1) + t0) << 2) + 0xC8CE934) + 0x20)) = (((((t0 << 2) << 1) + t0) << 2) + 0xC8CE934);
    SJMEM_Reset((((((t0 << 2) << 1) + t0) << 2) + 0xC8CE934));
    return (((((t0 << 2) << 1) + t0) << 2) + 0xC8CE934);
}

int SJRBF_Create(int a4, int a5, int a6)
{
    register int t0;

    t0 = 0x0;
    for (;;) {
        if ((*(int *)(((((((t0 << 1) + t0) << 2) << 2) + 0xC8CEDB4) + 0x4))) != 0) {
            t0 = (t0 + 0x1);
            if ((int)t0 >= (int)0x40) {
                break;
            }
            continue;
        }
        break;
    }
    if (t0 == 64) {
        return 0x0;
    }
    *(unsigned int *)(((0xC8CEDB4 + ((((t0 << 1) + t0) << 2) << 2)) + 0x4)) = 0x1;
    *(unsigned int *)(((0xC8CEDB4 + ((((t0 << 1) + t0) << 2) << 2)) + 0x0)) = 0xC303DE8;
    *(unsigned int *)(((0xC8CEDB4 + ((((t0 << 1) + t0) << 2) << 2)) + 0x1C)) = a4;
    *(unsigned int *)(((0xC8CEDB4 + ((((t0 << 1) + t0) << 2) << 2)) + 0x20)) = a5;
    *(unsigned int *)(((0xC8CEDB4 + ((((t0 << 1) + t0) << 2) << 2)) + 0x24)) = a6;
    *(unsigned int *)(((0xC8CEDB4 + ((((t0 << 1) + t0) << 2) << 2)) + 0x8)) = 0xC300028;
    *(unsigned int *)(((0xC8CEDB4 + ((((t0 << 1) + t0) << 2) << 2)) + 0x28)) = 0xC2C6332;
    *(unsigned int *)(((0xC8CEDB4 + ((((t0 << 1) + t0) << 2) << 2)) + 0x2C)) = (0xC8CEDB4 + ((((t0 << 1) + t0) << 2) << 2));
    SJRBF_Reset((0xC8CEDB4 + ((((t0 << 1) + t0) << 2) << 2)));
    return (0xC8CEDB4 + ((((t0 << 1) + t0) << 2) << 2));
}

void FUN_0c2ebd7a(void)
{
    int t0;
    register int t1;

    t1 = *(signed char *)0xC8D67BA;
    if ((0x1 & (unsigned char)t1) == 0) {
        if (((unsigned char)t1 & 0x2) == 0) {
            FUN_0c2ec304();
    return;
        }
        if ((((unsigned char)(*(signed char *)0xC8D6793) & 128) == 0) && (t0 = *(signed char *)0xC8D6795, ((unsigned char)t0 & 32) == 0)) {
            t0 = FUN_0c2ebfcc();
            if ((signed char)t0 == 0) {
                (((struct o0_ushort *)0xC8D67B8)->v) = (((((struct o0_short *)0xC8D67B8)->v)) | 0x40);
                (((struct o2_uchar *)0xC8D67B8)->v) = ((*(signed char *)0xC8D67BA) | 0x1);
            }
            return;
        }
        FUN_0c2eb978(0x5);
    return;
    }
}

int FUN_0c2f354a(void)
{
    register int t0;
    register int t1;

    FUN_0c2f3e28();
    if (((unsigned char)(*(signed char *)0xC8D6793) & 2) != 0) {
        (((struct o0_uchar *)0xC8D6793)->v) = 0x0;
        FUN_0c2f35ac();
    } else {
        t0 = 0xC8D6793;
    }
    if (((unsigned char)(*(signed char *)0xC8D6793) & 16) != 0) {
        FUN_0c2ec532(t0);
    }
    t0 = *(short *)0xC8D67B8;
    if (((unsigned short)t0 & 8) == 0) {
        t1 = FUN_0c2ec430((*(int *)0xC8DFFC8));
        if ((signed char)t1 != 0) {
            (((struct o0_uchar *)0xC8D6793)->v) = 0x0;
            *(unsigned int *)0xC8D6814 = 0x1;
            return FUN_0c2f35ac();
        }
        return (signed char)t1;
    }
    return (unsigned short)t0;
}

int FUN_0c2f9614(void)
{
    int stk[3];
    register int t4;
    register int t6;
    register int t8;
    register int t11;

    FUN_0c2d28e8(((int)stk + 0), (((int)stk + 0) + 0x4), (((int)stk + 0) + 0x8));
    (((struct o2_uchar *)0xC8D65E9)->v) = (FUN_0c2f94d4((*(signed char *)(((int)stk + 4)))));
    t4 = FUN_0c2f94d4((*(signed char *)(((int)stk + 8))));
    (((struct o3_uchar *)0xC8D65E9)->v) = t4;
    (((struct o5_uchar *)0xC8D65E9)->v) = t4;
    t6 = *(signed char *)0xC8D65EB;
    if ((int)(unsigned char)t6 > (int)(unsigned char)(*(signed char *)0xC8D65E9)) {
        (((struct o0_uchar *)0xC8D65E9)->v) = t6;
    }
    t8 = *(signed char *)0xC8D65EC;
    if ((int)(unsigned char)t8 > (int)(unsigned char)(*(signed char *)0xC8D65EA)) {
        (((struct o1_uchar *)0xC8D65E9)->v) = t8;
    }
    t11 = *(int *)(((int)stk + 0));
    if ((t11 & 4) != 0) {
        (((struct o5_uchar *)0xC8D65E9)->v) = 0x0;
    }
    return t11;
}

int FUN_0c182cba(int a4, int a5)
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
        t3 = (0x198 + t1);
        if (t2 == 1) {
            t3 = (t1 + 0x34);
        }
        FUN_0c187a88(a5, t3, 0x78);
    }
    return t0;
}

int FUN_0c18ffa4(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    (((struct oC_uint *)0xC8A97BC)->v) = 0x0;
    t0 = (FUN_0c187a88(0xC8A97C0, 0xC20A5D8, 0x4));
    t1 = 0x0;
    t2 = 0x0;
    for (;;) {
        if ((int)t2 >= (int)(unsigned char)(*(signed char *)0xC8A738C)) {
            break;
        }
        t3 = ((((struct o0_int *)0xC8A73C0)->v));
        t2 = (t2 + 0x1);
        t0 = 0x13C;
        t3 = (t3 + t1);
        *(unsigned short *)((t3 + t0)) = 0xFFFF;
        t0 = (t0 - 4);
        t3 = (((((struct o0_int *)0xC8A73C0)->v)) + t1);
        t1 = (t1 + 0x174);
        *(unsigned short *)((t3 + t0)) = 0x0;
    }
    (((struct o8_ushort *)0xC8A97BC)->v) = (*(short *)0xC2AE6D2);
    (((struct o0_uint *)0xC8A97BC)->v) = (FUN_0c18e01e());
    (((struct o1C_ushort *)0xC8A73C0)->v) = 0x0;
    return 0x0;
}

int FUN_0c1901e4(int a4)
{
    int stk[2];

    if (a4 != 0) {
        FUN_0c19869e((0x130 + a4));
        if (((unsigned char)(*(signed char *)((a4 + 0x13F))) & 128) != 0) {
            FUN_0c19c142(a4);
            FUN_0c19c166(a4);
            FUN_0c18d914(((int)((int)(a4 - (*(int *)0xC8A73C0)) / (int)0x174)), ((((struct o168_int *)(a4))->v)), 0x3, 0xFF, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8));
            (((struct o138_ushort *)(a4))->v) = 0x0;
        } else {
            (((struct o13A_ushort *)(a4))->v) = 0x0;
            FUN_0c190c4e(a4);
        }
    }
    return 0x0;
}

int FUN_0c1940b6(int a4, int a5, int a6)
{
    int stk[9];

    (((struct o22_ushort *)(((int)stk + 0)))->v) = a4;
    *(unsigned int *)(((int)stk + 28)) = a5;
    *(unsigned short *)(((((int)stk + 0) + 0x1A) + 0x0)) = a6;
    FUN_0c187a88(((int)stk + 0), (((int)stk + 0) + 0x1C), 0x4);
    FUN_0c187a88((((int)stk + 0) + 0x4), (((int)stk + 0) + 0x1A), 0x2);
    FUN_0c187a88((((int)stk + 0) + 0x6), (((int)stk + 0) + 0x22), 0x2);
    *(unsigned char *)(((int)stk + 9)) = 0x0;
    *(unsigned char *)(((int)stk + 10)) = 0x0;
    *(unsigned char *)(((int)stk + 11)) = 0x0;
    *(unsigned short *)(((int)stk + 12)) = 0x0;
    *(unsigned int *)(((int)stk + 16)) = 0x0;
    *(unsigned int *)(((int)stk + 20)) = 0x0;
    return (FUN_0c184000(0x4110, ((int)stk + 0), 0x0));
}

void FUN_0c1a0bb6(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    if ((int)(*(signed char *)(((a5 + a4) + 0x0))) > (int)0x34) {
        *(unsigned char *)(((a5 + a4) + 0x0)) = 0x30;
        t0 = *(signed char *)((((a5 - 1) + a4) + 0x0));
        *(unsigned char *)((((a5 - 1) + a4) + 0x0)) = (t0 + 0x1);
        if ((unsigned int)((a5 - 1) + a4) > (unsigned int)a4) {
            t1 = (t0 + 0x1);
            t0 = ((a5 - 1) + a4);
            t2 = ((a5 - 1) + a4);
            for (;;) {
                if ((int)(*(signed char *)((t2 + 0x0))) > (int)0x39) {
                    t1 = t0;
                    t1 = (t1 - 1);
                    *(unsigned char *)((t0 + 0x0)) = ((*(signed char *)((t0 + 0x0))) - 10);
                    *(unsigned char *)((t1 + 0x0)) = ((*(signed char *)((t1 + 0x0))) + 0x1);
                }
                t2 = (t2 - 1);
                t0 = (t0 - 1);
                if ((unsigned int)t2 <= (unsigned int)a4) {
                    break;
                }
            }
        }
        if ((int)(*(signed char *)(((a4 + 0x1) + 0x0))) > (int)0x39) {
            *(unsigned char *)(((a4 + 0x1) + 0x0)) = ((*(signed char *)(((a4 + 0x1) + 0x0))) - 10);
            *(unsigned char *)((a4 + 0x0)) = ((*(signed char *)((a4 + 0x0))) + 0x1);
        }
    }
}

int FUN_0c2bd39c(int a4, int a5, int a6, int a7, int a8, int a9)
{
    register int t2;

    if (_builtin_tas((char *)(*(int *)0xC2DB268)) == 0) {
        mpdrv_dpf(a4, a5, a6, a7, 0xC2FFBA8);
        return 0xFFFFFFFE;
    }
    t2 = mpdrv_set_bread_ns(a4, a5, a6, a7, a8);
    if ((int)t2 > 0) {
        kdSetCallback(a4, a9, t2);
    }
    *(unsigned char *)(((*(int *)0xC2DB268) + 0x0)) = 0x0;
    if (((((struct o10E8_int *)((*(int *)0xC8D4D84)))->v)) != 0) {
        FUN_0c2bc7e4();
    }
    return t2;
}

int FUN_0c2bd480(int a4, int a5, int a6, int a7, int a8, int a9)
{
    register int t2;

    if (_builtin_tas((char *)(*(int *)0xC2DB268)) == 0) {
        mpdrv_dpf(a4, a5, a6, a7, 0xC2FFBA8);
        return 0xFFFFFFFE;
    }
    t2 = mpdrv_set_getlerr_ns(a4, a5, a6, a7, a8);
    if ((int)t2 > 0) {
        kdSetCallback(a4, a9, t2);
    }
    *(unsigned char *)(((*(int *)0xC2DB268) + 0x0)) = 0x0;
    if (((((struct o10E8_int *)((*(int *)0xC8D4D84)))->v)) != 0) {
        FUN_0c2bc7e4();
    }
    return t2;
}

int fmMngWriteData(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(int *)((a4 + 0x24));
    if (t0 != 0) {
        if (t0 != 1) {
            t1 = 0xFFFFFFFE;
            if (t0 != 2) {
            } else {
                t1 = (fmMngSctRefresh(a4));
            }
            t0 = t1;
        } else {
            t1 = FUN_0c2db908((*(int *)((a4 + 0x4))), a5, a6);
            t2 = 0xFFFFFFFD;
            if (t1 == -1) {
            } else {
                *(unsigned int *)((a4 + 0x24)) = 0x2;
                t2 = 0x1;
            }
            t0 = t2;
        }
        t1 = t0;
    } else {
        t0 = FUN_0c113890(a4);
        t2 = t0;
        if (t0 == -10) {
            *(unsigned int *)((a4 + 0x24)) = 0x1;
            t2 = 0x1;
        }
        t1 = t2;
    }
    return t1;
}

int FUN_0c2d14d0(void)
{
    register int t1;
    register int t10;
    int t11;
    register int t18;
    int t19;

    t1 = *(int *)0xC8D25F0;
    if ((*(signed char *)0xC8D2633) == 0) {
        if (((*(signed char *)(((t1 + 0x2C) + 0x0))) & 16) == 0) {
            if (((*(signed char *)(((t1 + 0x2C) + 0x0))) & 64) != 0) {
                return 0x2;
            }
            if (((*(signed char *)0xC8D2633) == 0) && ((t10 = *(signed char *)0xC8D2632, t10 == 0) && (t11 = *(signed char *)(((t1 + 0x2C) + 0x0)), (t11 & 32) != 0))) {
                return 0x3;
            }
            return 0x0;
        }
        return 0x1;
    }
    if (((*(signed char *)(((t1 + 0x2C) + 0x0))) & 32) != 0) {
        return 0x1;
    }
    if (((*(signed char *)(((t1 + 0x2C) + 0x0))) & 64) != 0) {
        return 0x2;
    }
    if (((*(signed char *)0xC8D2633) == 0) && ((t18 = *(signed char *)0xC8D2632, t18 == 0) && (t19 = *(signed char *)(((t1 + 0x2C) + 0x0)), (t19 & 32) != 0))) {
        return 0x3;
    }
    return 0x0;
}

int FUN_0c2e62b0(void)
{
    int stk[2];
    register int t0;
    register int t1;
    register int t5;
    register int t2;
    register int t13;

    t0 = *(signed char *)0xC8D6526;
    t1 = *(int *)0xC304178;
    t5 = (t1 + 0x1);
    if ((unsigned char)t0 != 32) {
        t2 = (t1 + 0x1);
        for (;;) {
            if ((unsigned char)(*(signed char *)((t2 + 0x0))) != 32) {
                break;
            }
            t2 = (t2 + 0x1);
        }
        t5 = t2;
    }
    if ((unsigned char)(*(signed char *)((t5 + 0x0))) == (unsigned char)t0) {
        return FUN_0c2e4330((*(signed char *)0xC8D6499));
    }
    FUN_0c2e638e();
    *(unsigned char *)(((int)stk + 0)) = (*(signed char *)(((*(int *)0xC304178) + 0x0)));
    FUN_0c2e638e();
    FUN_0c2e6310();
    t13 = *(signed char *)(((int)stk + 0));
    
    *(unsigned char *)0xC8D6498 = 0x2;
    return (unsigned char)t13;
}

int FUN_0c2f2290(int a4)
{
    int stk[3];
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    int t7;
    register int t8;

    FUN_0c2fa4cc(0x0, 0x4, ((int)stk + 0));
    if (((*(signed char *)((((int)stk + 0) + 0x0))) == (*(signed char *)0xC302CA0)) && ((t3 = *(signed char *)((((int)stk + 0) + 0x1)), t4 = *(signed char *)0xC302CA1, t3 == t4) && ((t5 = *(signed char *)((((int)stk + 0) + 0x2)), t6 = *(signed char *)0xC302CA2, t5 == t6) && (t7 = *(signed char *)((((int)stk + 0) + 0x3)), t8 = *(signed char *)0xC302CA3, t7 == t8)))) {
        FUN_0c2f242c(a4);
    } else {
        FUN_0c2f22f0(a4);
    }
    return (FUN_0c2fa4cc(0xB, 0x1, (a4 + 0x38)));
}

int FUN_0c2f242c(int a4)
{
    int stk[4];
    register int t9;

    *(unsigned int *)(((int)stk + 8)) = a4;
    FUN_0c2fa4cc(0x5, 0x6, 0xC8E0026);
    FUN_0c2fa4cc(0x4, 0x1, (((int)stk + 0) + 0x4));
    if (((unsigned char)(*(signed char *)0xC8D677C) & 32) != 0) {
        *(unsigned char *)(((int)stk + 4)) = (*(signed char *)0xC8D6528);
    }
    FUN_0c2fa4cc(0xB, 0x1, ((int)stk + 0));
    t9 = FUN_0c2e8a12((*(signed char *)(((int)stk + 0))));
    if ((signed char)t9 == 0) {
        *(unsigned char *)(((int)stk + 0)) = 0x0;
    }
    FUN_0c2e89f4((*(signed char *)(((int)stk + 0))));
    FUN_0c2f248c((*(signed char *)(((int)stk + 4))), (*(int *)(((int)stk + 8))));
    return (FUN_0c2e8a7c((*(int *)(((int)stk + 8)))));
}

int FUN_0c2fd17c(int a4)
{
    register int t10;

    t10 = 0x0;
    if ((unsigned char)a4 != 3) {
        t10 = 0x3;
        if ((unsigned char)a4 != 4) {
            t10 = 0x6;
            if ((unsigned char)a4 != 5) {
                t10 = 0x7;
                if ((unsigned char)a4 != 6) {
                    t10 = 0x8;
                    if ((unsigned char)a4 != 7) {
                        t10 = 0x63;
                        if ((unsigned char)a4 != 8) {
                            t10 = a4;
                        }
                    }
                }
            }
        }
    }
    return FUN_0c2e7248(t10, 0x0);
}

int FUN_0c18e168(int a4, int a5)
{
    int t0;
    register int t1;

    if ((unsigned int)0xC8A8C20 < (unsigned int)0xC8A8E80) {
        t1 = 0xC8A8C20;
        for (;;) {
            if ((((unsigned char)(*(signed char *)((t1 + 0x0))) & (unsigned char)a5) != 0) && (t0 = *(int *)((t1 + 0x14)), t0 == a4)) {
                break;
            }
            t1 = (t1 + 0x20);
            if ((unsigned int)t1 >= (unsigned int)0xC8A8E80) {
                return 0x0;
            }
        }
        if (((unsigned char)(*(signed char *)((t1 + 0x0))) & 0x2) != 0) {
            (((struct o10_uchar *)(t1))->v) = 0x14;
        } else {
            if (((unsigned char)(*(signed char *)((t1 + 0x0))) & 0x1) != 0) {
                (((struct o10_uchar *)(t1))->v) = 0x3;
            }
        }
        t0 = t1;
    } else {
        t0 = 0x0;
    }
    return t0;
}

int mult64(int a4, int a5, int a6, int a7)
{
    int stk[6];

    *(unsigned int *)(((int)stk + 0)) = a5;
    *(unsigned int *)(((int)stk + 4)) = a7;
    *(unsigned short *)((a4 + 0x0)) = (a6 + (*(short *)((a4 + 0x0))));
    mult((*(int *)(((int)stk + 0))), (*(int *)(((int)stk + 4))), (((int)stk + 0) + 0x8));
    if (((unsigned char)(*(signed char *)(((((int)stk + 0) + 0x8) + 0x0))) & 128) != 0) {
        *(unsigned short *)((a4 + 0x0)) = ((*(short *)((a4 + 0x0))) + 0x1);
    } else {
        FUN_0c1a3150((((int)stk + 0) + 0x8), 0x10);
    }
    FUN_0c1a357c((((int)stk + 0) + 0x8), 0x10, 0x42);
    *(unsigned char *)(((((int)stk + 0) + 0x8) + 0x8)) = ((*(signed char *)(((((int)stk + 0) + 0x8) + 0x8))) & 0xE0);
    return (FUN_0c187a88((*(int *)(((int)stk + 0))), (((int)stk + 0) + 0x8), 0x9));
}

int FUN_0c2b26c0(int a4, int a5, int a6, int a7, int a8)
{
    register int t0;

    t0 = vmsfs_c_getstate(a4);
    if (t0 != 0) {
        return 0xFFFFFFFF;
    }
    vmsfs_c_setfunc(a4, 0x3);
    vmsfs_c_setparam(a4, a4, a5, a6, a7, a8, 0x0);
    vmsfs_c_setvolume(a4, a5);
    vmsfs_c_settime(a4, a7);
    return 0x0;
}

int pdVibEnumerateUnit(int a4, int a5, int a6)
{
    register int t0;
    register int t1;

    t0 = 0xFFFFFFFF;
    if ((*(int *)((((a4 * 0x1C) + 0xC8BA408) + 0x0))) == 0) {
        *(unsigned int *)((((a4 * 0x1C) + 0xC8BA408) + 0x0)) = 0x1;
        *(unsigned int *)((((a4 * 0x1C) + 0xC8BA408) + 0x4)) = 0x0;
        *(unsigned int *)((((a4 * 0x1C) + 0xC8BA408) + 0x8)) = a6;
        *(unsigned int *)((((a4 * 0x1C) + 0xC8BA408) + 0xC)) = 0x0;
        *(unsigned int *)((((a4 * 0x1C) + 0xC8BA408) + 0x10)) = a5;
        *(unsigned int *)((((a4 * 0x1C) + 0xC8BA408) + 0x14)) = 0x1;
        t1 = pdVibGetInfo(a4, (((a4 * 0x1C) + 0xC8BA408) + 0x18));
        t0 = t1;
        if ((int)t1 >= 0) {
            t1 = kdSetGetMediaInfoEx(a4, 0x100, 0x1, 0xC2B3E00);
            t0 = 0x0;
            if ((int)t1 < 0) {
                *(unsigned int *)((((a4 * 0x1C) + 0xC8BA408) + 0x0)) = 0x0;
                t0 = 0xFFFFFFFF;
            }
        }
    }
    return t0;
}

int syCfgGetLanguage(int a4, int a5, int a6)
{
    int stk[1];
    register int t0;
    register int t1;
    register int t3;

    if (a4 != 0) {
        *(unsigned int *)((a4 + 0x0)) = 0x0;
        t0 = *(int *)0xC303724;
        if (t0 != 0) {
            t1 = FUN_0c2c2874(0x0, t0, a6);
            if (t1 == -1) {
                return 0xFFFFFFFF;
            }
            t3 = *(signed char *)0x8C00007D;
            if ((signed char)t3 == -1) {
                syCfgGetDefaultLanguage(((int)stk + 0), t3);
                if ((*(int *)(((int)stk + 0))) == -1) {
                    *(unsigned int *)((a4 + 0x0)) = 0x1;
                } else {
                    *(unsigned int *)((a4 + 0x0)) = (syCfgConvLang((*(int *)(((int)stk + 0)))));
                }
            } else {
                *(unsigned int *)((a4 + 0x0)) = (signed char)t3;
            }
            return 0x0;
        }
        return 0xFFFFFFFF;
    }
    return 0xFFFFFFFF;
}

int kdInitSystemEx(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t3;

    t0 = _builtin_get_imask();
    _builtin_set_imask(0xF);
    *(unsigned int *)0xC2DB268 = ((*(int *)0xC2DB268) | 0xA0000000);
    init_sub();
    t3 = FUN_0c2d9748(a4, a5, a6, a7);
    FUN_0c0ffdba();
    *(unsigned int *)0xC8C2148 = 0x1;
    _builtin_set_imask(((unsigned int)(((t0 & 0xF) << 2) << 2) >> 4));
    return t3;
}

int ADXSTM_OpenRange(int a4, int a5, int a6)
{
    register int t0;
    register int t3;

    t0 = gdFsDaGetInfo(a4, a5, a6);
    if (t0 == 0) {
        FUN_0c2c30aa(0xC2FFD1C);
        return 0x0;
    }
    t3 = ADXSTMF_Create(t0, 0x0, (((a5 << 8) << 2) << 1), a6);
    if (t3 != 0) {
        strncpy((t3 + 0x40), 0xC2FFD54, 0x20);
    }
    return t3;
}

int FUN_0c2cfc92(int a4, int a5)
{
    (((struct o3_uchar *)0xC8D25A8)->v) = ((*(signed char *)0xC8D25AB) + 0x1);
    if ((int)(*(signed char *)0xC8D25AB) >= (int)0x3C) {
        (((struct o3_uchar *)0xC8D25A8)->v) = 0x0;
        (((struct o2_uchar *)0xC8D25A8)->v) = ((*(signed char *)0xC8D25AA) + 0x1);
        if ((int)(*(signed char *)0xC8D25AA) >= (int)0x3C) {
            (((struct o2_uchar *)0xC8D25A8)->v) = 0x0;
            (((struct o1_uchar *)0xC8D25A8)->v) = ((*(signed char *)0xC8D25A9) + 0x1);
            if ((int)(*(signed char *)0xC8D25A9) >= (int)0x18) {
                (((struct o1_uchar *)0xC8D25A8)->v) = 0x0;
                (((struct o0_uchar *)0xC8D25A8)->v) = ((*(signed char *)0xC8D25A8) + 0x1);
            }
        }
    }
    (((struct o19_uchar *)0xC8D25A8)->v) = (*(signed char *)0xC8D25AB);
    (((struct o18_uchar *)0xC8D25A8)->v) = (*(signed char *)0xC8D25AA);
    (((struct o17_uchar *)0xC8D25A8)->v) = (*(signed char *)0xC8D25A9);
    (((struct o16_uchar *)0xC8D25A8)->v) = (*(signed char *)0xC8D25A8);
    return 0xC8D25BE;
}

int FUN_0c2d1a5e(int a4, int a5, int a6)
{
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    if ((int)(unsigned short)a5 > (int)(unsigned short)(*(short *)((((((unsigned short)a6 - 1) << 2) + a4) + 0x0)))) {
        return 0x0;
    }
    if ((int)(unsigned short)(0xFFFF + a6) > 0) {
        t1 = ((((unsigned short)(0xFFFF + a6) << 2) + a4) + 0x4);
        t2 = (0xFFFF + a6);
        t3 = (((unsigned short)(0xFFFF + a6) << 2) + a4);
        t4 = (((unsigned short)(0xFFFF + a6) << 2) + a4);
        for (;;) {
            if ((unsigned short)a5 == (unsigned short)(*(short *)(((((unsigned short)t2 << 2) + a4) + 0x0)))) {
                break;
            }
            if ((int)(unsigned short)a5 > (int)(unsigned short)(*(short *)((t3 + 0x0)))) {
                return (*(short *)((t1 + 0x2)));
            }
            t2 = (t2 - 1);
            t1 = (t1 - 4);
            t3 = (t3 - 4);
            t4 = (t4 - 4);
            if ((int)(unsigned short)t2 <= 0) {
                return (*(short *)((a4 + 0x2)));
            }
        }
        return (*(short *)((t4 + 0x2)));
    }
    return (*(short *)((a4 + 0x2)));
}


int FUN_0c2d70c0(void)
{
    register int t0;
    register int t1;
    register int t3;
    register int t4;

    t0 = *(signed char *)0xC8D678D;
    t1 = (unsigned char)t0;
    if (((unsigned char)t0 & 4) != 0) {
        t0 = *(signed char *)0xC8D7082;
        if (((unsigned char)t0 & 8) == 0) {
            t1 = *(signed char *)0xC8D2724;
            if (((unsigned char)t1 & 128) != 0) {
                t3 = 0xC8D7028;
                if ((unsigned int)(*(int *)0xC8D67BC) >= (unsigned int)(((unsigned char)(*(signed char *)0xC8D6836) << 1) + (*(int *)0xC8D7028))) {
                    (((struct o7_uchar *)0xC8D6786)->v) = ((*(signed char *)0xC8D678D) & 0xFB);
                    FUN_0c2ec2d4();
                    (((struct o7_uchar *)0xC8D6786)->v) = ((*(signed char *)0xC8D678D) & 0xF0);
                    t4 = *(signed char *)0xC8D6786;
                    (((struct o0_uchar *)0xC8D6786)->v) = (t4 & 0xDC);
                    *(unsigned int *)0xC8D7028 = (*(int *)0xC8D67BC);
                    t3 = (t4 & 0xDC);
                }
                t4 = t3;
            } else {
                *(unsigned int *)0xC8D7028 = (*(int *)0xC8D67BC);
                t4 = (unsigned char)t1;
            }
            t1 = t4;
        } else {
            *(unsigned int *)0xC8D7028 = (*(int *)0xC8D67BC);
            t1 = (unsigned char)t0;
        }
    }
    return t1;
}

int FUN_0c2e3ee6(void)
{
    int stk[1];
    register int t6;
    register int t8;
    register int t9;

    (((struct oF_uchar *)0xC8D6779)->v) = ((*(signed char *)0xC8D6788) & 0x7F);
    (((struct oA_uchar *)0xC8D6779)->v) = ((*(signed char *)0xC8D6783) & 0xEF);
    FUN_0c2e7f3c();
    *(unsigned char *)0xC8D67D3 = 0x2;
    FUN_0c2ebc72(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 0));
    (((struct o0_uchar *)0xC8D6779)->v) = ((*(signed char *)0xC8D6779) & 0x7F);
    (((struct o0_uchar *)0xC8D6779)->v) = ((*(signed char *)0xC8D6779) & 0xBF);
    t6 = *(signed char *)0xC8D677D;
    if (((unsigned char)t6 & 4) != 0) {
        (((struct o4_uchar *)0xC8D6779)->v) = ((*(signed char *)0xC8D677D) & 0xFB);
        t8 = *(signed char *)0xC8D677D;
        (((struct o4_uchar *)0xC8D6779)->v) = (t8 & 0xFE);
        *(unsigned char *)0xC8D6498 = 0x1;
        t9 = (t8 & 0xFE);
    } else {
        *(unsigned char *)0xC8D6498 = 0x0;
        t9 = (unsigned char)t6;
    }
    return t9;
}

int FUN_0c2e8992(void)
{
    register int t0;
    register int t1;

    if (((unsigned char)(*(signed char *)0xC8D6786) & 16) != 0) {
        (((struct o8_uchar *)0xC8D677E)->v) = ((*(signed char *)0xC8D6786) & 0xEF);
        return FUN_0c2e8218();
    }
    t0 = *(signed char *)0xC8D678D;
    t1 = (unsigned char)t0;
    if (((unsigned char)t0 & 32) != 0) {
        (((struct oF_uchar *)0xC8D677E)->v) = ((*(signed char *)0xC8D678D) & 0xDF);
        FUN_0c2e8238();
        (((struct o0_uchar *)0xC8D677E)->v) = ((*(signed char *)0xC8D677E) | 0x40);
        t0 = *(signed char *)0xC8D677F;
        (((struct o1_uchar *)0xC8D677E)->v) = (t0 | 0x1);
        t1 = (t0 | 0x1);
    }
    return t1;
}

int FUN_0c2f98d8(void)
{
    int t2;

    if ((((unsigned short)((((struct oB0_short *)((*(int *)0xC8D66E8)))->v)) & 32) != 0) && (t2 = *(signed char *)0xC8D6780, ((unsigned char)t2 & 64) == 0)) {
        FUN_0c2d0f7c((*(signed char *)0xC8D6463));
        FUN_0c2d15f4(0x514);
        FUN_0c2ec410(0xC8D65F0, 0x3C);
        *(unsigned char *)0xC8D65F4 = 0x1;
    }
    *(volatile signed char *)0xC8D6477;
    return FUN_0c2d2d88();
}

float FUN_0c179d50(int a4, float f4)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;
    register float u2;

    if (!(0.0f > f4)) {
        u0 = ((((struct o0_float *)0xC179E8C)->v));
    } else {
        u0 = ((((struct o4_float *)0xC179E8C)->v));
    }
    u1 = (((struct o8_float *)0xC179E8C)->v);
    *(unsigned int *)((a4 + 0x0)) = (int)(u0 + (f4 / u1));
    u2 = (f4 - (((float)(int)(u0 + (f4 / u1)) * ((((struct oC_float *)0xC179E8C)->v)))));
    u2 = u2 + ((((struct o10_float *)0xC179E8C)->v)) * ((float)(int)(u0 + (f4 / u1)));
    t0 = 0xB;
    u0 = 0.0f;
    for (;;) {
        t1 = t0;
        t0 = (t0 - 2);
        u1 = ((float)t1 - u0);
        u0 = (u2 * u2);
        u0 = (u0 / u1);
        if ((int)t0 < (int)0x3) {
            break;
        }
    }
    return (u2 / (1.0f - u0));
}

float FUN_0c179e20(int a4, float f4)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;
    register float u2;

    u0 = -0.5f;
    if (!(0.0f > f4)) {
        u0 = 0.5f;
    }
    *(unsigned int *)((a4 + 0x0)) = (int)(u0 + (f4 / 1.57079637f));
    u1 = (f4 - (((float)(int)(u0 + (f4 / 1.57079637f)) * 1.57080078f)));
    u1 = u1 + 4.45445494e-06f * ((float)(int)(u0 + (f4 / 1.57079637f)));
    t0 = 0xB;
    u0 = 0.0f;
    for (;;) {
        t1 = t0;
        t0 = (t0 - 2);
        u2 = ((float)t1 - u0);
        u0 = (u1 * u1);
        u0 = (u0 / u2);
        if ((int)t0 < (int)0x3) {
            break;
        }
    }
    return (u1 / (1.0f - u0));
}

float nlSinf(float f4)
{
    int stk[2];
    register float t0;
    register float u1;
    register int t2;
    register int t3;
    register float u5;

    *(float *)(((int)stk + 4)) = f4;
    t0 = FUN_0c179d50(((int)stk + 0), (f4 / (1.0f + 1.0f)));
    u1 = 1.0f;
    u1 = u1 + t0 * t0;
    t2 = *(int *)(((int)stk + 0));
    t3 = ((~(((~t2) + 0x1) & 0x1)) + 0x1);
    if ((int)t2 >= 0) {
        t3 = (t2 & 0x1);
    }
    if (t3 == 0) {
        return ((t0 * (1.0f + 1.0f)) / u1);
    }
    u5 = ((t0 * (1.0f + 1.0f)) / u1);
    u5 = -u5;
    return u5;
}

int FUN_0c17b860(int a4)
{
    register int t0;
    register int t1;
    register int t3;
    register int t4;
    register int t6;

    t0 = (((struct o0_short *)0xC868774)->v);
    t1 = a4;
    if ((int)a4 <= 0) {
        t1 = 0x1;
    }
    t3 = (((struct o2_short *)0xC868774)->v);
    t4 = (t0 - t1);
    if ((int)t0 < (int)t1) {
        t4 = 0x0;
    }
    t6 = (((struct o4_int *)0xC868774)->v);
    (((struct o0_ushort *)0xC868774)->v) = t4;
    if ((int)t4 < (int)t3) {
        (((struct o8_uint *)0xC868774)->v) = (t6 + ((unsigned int)(t4 << 8) >> 2));
    }
    return ((((int)t0 >= (int)t1)) ? 1 : 0);
}

int FUN_0c18077a(int a4, int a5, int a6)
{
    int stk[3];
    register int t1;
    register int t13;
    register int t3;
    register int t10;

    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 8)) = a6;
    t1 = FUN_0c17ff38(a4, (*(int *)(((int)stk + 4))), 0x0);
    t13 = t1;
    if (t1 != 0) {
    } else {
        t3 = *(int *)((a4 + 0x8));
        *(unsigned int *)((((*(int *)0xC86CC34) + 0x18) + 0x0)) = (FUN_0c18004c((*(int *)(((int)stk + 4))), (*(int *)((a4 + 0x4))), t3, ((int)stk + 0)));
        *(unsigned int *)(((*(int *)0xC86CC34) + 0x0)) = 0x1001;
        *(unsigned int *)(((*(int *)0xC86CC34) + 0x4)) = (*(int *)(((int)stk + 8)));
        t10 = *(int *)0xC86CC34;
        *(unsigned int *)((t10 + 0xC)) = t3;
        *(unsigned int *)((t10 + 0x8)) = t3;
        *(unsigned int *)(((*(int *)0xC86CC34) + 0x10)) = (*(int *)(((int)stk + 0)));
        t13 = 0x0;
    }
    return t13;
}

int FUN_0c180a04(int a4)
{
    int stk[1];
    register int t0;
    register int t9;
    register int t2;

    t0 = FUN_0c180124(a4);
    t9 = t0;
    if (t0 != 0) {
    } else {
        t2 = *(int *)(((signed char)(((a4 << 1) + a4) << 2) + 0xC86CD08));
        *(unsigned int *)((((*(int *)0xC86CC34) + 0x18) + 0x0)) = (FUN_0c18017c(a4, t2, ((int)stk + 0)));
        *(unsigned int *)(((*(int *)0xC86CC34) + 0x0)) = 0x101;
        *(unsigned int *)(((*(int *)0xC86CC34) + 0x8)) = (-t2);
        *(unsigned int *)(((*(int *)0xC86CC34) + 0x10)) = (*(int *)(((int)stk + 0)));
        t9 = 0x0;
    }
    return t9;
}

int FUN_0c18422a(void)
{
    FUN_0c18c9fc();
    FUN_0c184058();
    FUN_0c18c9fc();
    FUN_0c18df5c();
    FUN_0c18c9fc();
    FUN_0c18d9cc();
    FUN_0c18c9fc();
    return 0x0;
}

int FUN_0c18e4ba(int a4, int a5)
{
    register int t4;
    int t5;
    register int t6;
    register int t0;
    int t1;
    register int t2;
    register int t3;
    register int t33;
    register int t34;
    register int t35;
    register int t36;
    register int t37;

    t4 = a4;
    t5 = a5;
    t6 = 0x0;
    for (;;) {
        if ((int)t6 >= (int)0x13) {
            break;
        }
        t4 = t6;
        t4 = (t4 << 2);
        t4 = (t4 << 2);
        t4 = (t4 << 1);
        t4 = (t4 + 0xC8A8C20);
        t5 = (*(signed char *)((t4 + 0x0)));
        t5 = (unsigned char)t5;
        t3 = t5;
        if (((t3 & 0x3) != 0) && (t1 = 0x4, (t1 & t5) == 0)) {
            t0 = 0x10;
            t2 = (*(signed char *)((t4 + t0)));
            if (t2 == 0) {
                t4 = t6;
                t0 = (FUN_0c18e584(t4));
            } else {
                t3 = (*(signed char *)((t4 + t0)));
                if (t3 != 0) {
                    t3 = (*(signed char *)((t4 + t0)));
                    t3 = (t3 - 1);
                    *(unsigned char *)((t4 + t0)) = t3;
                }
                t33 = t1;
                t34 = t2;
                t35 = t3;
                t36 = t4;
                t37 = t5;
            }
        } else {
            t33 = t1;
            t34 = t2;
            t35 = t3;
            t36 = t4;
            t37 = t5;
        }
        t1 = t33;
        t6 = (t6 + 0x1);
        t2 = t34;
        t3 = t35;
        t4 = t36;
        t5 = t37;
    }
    return t0;
}

int FUN_0c190244(int a4)
{
    register int t0;
    register int t1;

    if ((*(short *)0xC8A73DC) == 0) {
        *(unsigned short *)0xC8A73DC = (((FUN_0c18e01e()) & 0x3FF) | 0x400);
    }
    for (;;) {
        t0 = *(short *)0xC8A73DC;
        *(unsigned short *)0xC8A73DC = (t0 + 0x1);
        t1 = FUN_0c18dad6((t0 + 0x1));
        t0 = FUN_0c1902a0(a4, t1);
        if (t0 != 1) {
            break;
        }
        if ((int)(unsigned short)(*(short *)0xC8A73DC) >= (int)0x7FF) {
            *(unsigned short *)0xC8A73DC = 0x400;
        }
    }
    return (FUN_0c18dad6((*(short *)0xC8A73DC)));
}

int FUN_0c19a872(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;

    t1 = FUN_0c19af74(a4);
    if (t1 != 0) {
        return 0xFFFFFFFC;
    }
    t1 = *(int *)0xC8A73C0;
    if ((a5 == 8) && (t0 = *(int *)((a7 + 0x0)), (int)t0 >= (int)0x2)) {
        *(unsigned short *)((a6 + 0x0)) = (((((struct o16C_short *)(((a4 * 0x174) + t1)))->v)) >> 1);
        *(unsigned int *)((a7 + 0x0)) = 0x2;
        return 0x0;
    }
    return 0xFFFFFFF3;
}

int adxf_SetCmdHstry(int a4, int a5, int a6, int a7, int a8)
{
    register int t0;
    register int t1;

    t0 = *(int *)0xC8CD468;
    t1 = ((~(((~t0) + 0x1) & 0xFF)) + 0x1);
    if ((int)t0 >= 0) {
        t1 = (t0 & 0xFF);
    }
    *(unsigned int *)0xC8CD468 = t1;
    if (a5 == 0) {
        *(unsigned short *)(((a4 << 1) + 0xC8CD448)) = ((*(short *)(((a4 << 1) + 0xC8CD448))) + 0x1);
    }
    *(unsigned char *)(((((t1 << 2) << 2) + 0xC8CC448) + 0x0)) = a4;
    *(unsigned char *)(((((t1 << 2) << 2) + 0xC8CC448) + 0x1)) = a5;
    *(unsigned short *)(((0x2 + (((t1 << 2) << 2) + 0xC8CC448)) + 0x0)) = (*(short *)(((a4 << 1) + 0xC8CD448)));
    *(unsigned int *)(((((t1 << 2) << 2) + 0xC8CC448) + 0x4)) = a6;
    *(unsigned int *)(((((t1 << 2) << 2) + 0xC8CC448) + 0x8)) = a7;
    *(unsigned int *)(((((t1 << 2) << 2) + 0xC8CC448) + 0xC)) = a8;
    *(unsigned int *)0xC8CD468 = ((*(int *)0xC8CD468) + 0x1);
    return 0xC8CD448;
}

int ADXF_Open(int a4, int a5)
{
    register int t2;
    register int t10;
    register int t3;

    adxf_SetCmdHstry(0x1, 0x0, a4, a5, 0xFFFFFFFF);
    ADXCRS_Lock();
    t2 = adxf_CreateAdxFs();
    t10 = t2;
    if (t2 != 0) {
        t3 = FUN_0c2b525e(t2, a4);
        t10 = t2;
        if ((int)t3 < 0) {
            ADXF_Close(t2);
            t10 = 0x0;
        }
    }
    ADXCRS_Unlock();
    adxf_SetCmdHstry(0x1, 0x1, a4, a5, 0xFFFFFFFF);
    return t10;
}

int FUN_0c2bd134(int a4, int a5, int a6, int a7)
{
    register int t2;

    if (_builtin_tas((char *)(*(int *)0xC2DB268)) == 0) {
        mpdrv_dpf(a4, a5, a6, a7, 0xC2FFBA8);
        return 0xFFFFFFFE;
    }
    t2 = mpdrv_set_dreq_ns(a4);
    if ((int)t2 > 0) {
        kdSetCallback(a4, a5, t2);
    }
    *(unsigned char *)(((*(int *)0xC2DB268) + 0x0)) = 0x0;
    if (((((struct o10E8_int *)((*(int *)0xC8D4D84)))->v)) != 0) {
        FUN_0c2bc7e4();
    }
    return t2;
}

int FUN_0c2bd26a(int a4, int a5, int a6, int a7)
{
    register int t2;

    if (_builtin_tas((char *)(*(int *)0xC2DB268)) == 0) {
        mpdrv_dpf(a4, a5, a6, a7, 0xC2FFBA8);
        return 0xFFFFFFFE;
    }
    t2 = mpdrv_set_dkill_ns(a4);
    if ((int)t2 > 0) {
        kdSetCallback(a4, a5, t2);
    }
    *(unsigned char *)(((*(int *)0xC2DB268) + 0x0)) = 0x0;
    if (((((struct o10E8_int *)((*(int *)0xC8D4D84)))->v)) != 0) {
        FUN_0c2bc7e4();
    }
    return t2;
}
