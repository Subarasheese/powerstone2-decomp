/* Straight-line functions with calls and guards (batch gen_dp): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uchar { char p[0x10]; unsigned char v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o10C4_int { char p[0x10C4]; int v; };
struct o10D8_int { char p[0x10D8]; int v; };
struct o10F4_int { char p[0x10F4]; int v; };
struct o14_float { char p[0x14]; float v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_float { char p[0x18]; float v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1C_short { char p[0x1C]; short v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o1C_ushort { char p[0x1C]; unsigned short v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o244_uint { char p[0x244]; unsigned int v; };
struct o3A_short { char p[0x3A]; short v; };
struct o3A_ushort { char p[0x3A]; unsigned short v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_int { char p[0x40]; int v; };
struct o48_int { char p[0x48]; int v; };
struct o48_ushort { char p[0x48]; unsigned short v; };
struct o4C_int { char p[0x4C]; int v; };
struct o4C_short { char p[0x4C]; short v; };
struct o4C_uint { char p[0x4C]; unsigned int v; };
struct o50_int { char p[0x50]; int v; };
struct o50_short { char p[0x50]; short v; };
struct o50_ushort { char p[0x50]; unsigned short v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o88_int { char p[0x88]; int v; };
struct o8C_int { char p[0x8C]; int v; };
struct o8C_uint { char p[0x8C]; unsigned int v; };
struct o90_int { char p[0x90]; int v; };
struct o94_int { char p[0x94]; int v; };
struct oA0_int { char p[0xA0]; int v; };
struct oA0_uint { char p[0xA0]; unsigned int v; };
struct oA4_int { char p[0xA4]; int v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
int ADXCRS_Lock(int);
int ADXCRS_Unlock(void);
int ADXPD_GetStat(int);
int ADXSJD_GetLpEndOfst(int);
int ADXSJD_SetDecPos(int, int);
int ADXSJD_SetTrapCnt(int, int);
int ADXSJD_SetTrapDtLen(int, int);
int ADXSJD_SetTrapNumSmpl(int, int);
int ADXSTM_Tell(int);
int ADXT_Stop(int);
int FUN_0c17b1a0(int);
int FUN_0c181ade(int, int, int, int);
int FUN_0c2bbe58(int, int);
int FUN_0c2bca16(int);
int FUN_0c2c30aa(int, int, int, int, int);
int FUN_0c2c390a(int);
int FUN_0c2c3916(int);
int FUN_0c2c3922(int);
int FUN_0c2c6be4(int, int, int);
int FUN_0c2dc1ae(int, int, int, int, int);
int SJMEM_Create(int, int);
extern void _builtin_ftrv(float *, float *);
extern int _builtin_get_imask(void);
extern void _builtin_prefetch(void *);
extern void _builtin_set_imask(int);
int adxstm_sj_internal_error(void);
int adxt_start_sj(int, int);
int close_file_handle(int);
int direntry(int, int);
int direntry_dirty(int, int);
int gdFsGetDirEnt(int, int, int, int);
int gdFsGetLE4(int);
int gdFsGetStat(int);
int gdFsGetTokenSize(int, int, int);
int gdFsLockDir(int);
int gdFsMemcpy(int, int, int);
int gdFsReadWG(int, int, int);
int gdFsReopenHn(int, int, int, int);
int gdFsReqRd32(int, int, int);
int gdFsSearchName(int, int, int);
int gdFsSearchPath(int, int, int, int);
int gdFsStrncmpi(int, int, int);
int gdFsWaitCompleteReq(int);
int kdGetDevice(int);
int kmSetHSyncCallback(int, int);
int kmSetVSyncCallback(int, int);
int kmyRegisterBGPlane(int);
int kmytex_FBDeQueueEntry(int, int, int);
int kmytex_FBEnQueueEntry(int, int, int);
int make_header(int, int);
int mpdrv_clear_deviceinfo(int);
int mpdrv_make_deviceinfo(int, int, int);
int mpdrv_swaplong(int, int);
int nlStoreMatrix(int);
int syTmrGetCount(void);
int thunk_FUN_0c2c067e(int);
int vmsfs_unmount(int);
int vmsio_ismount(int);
int vmsio_isready(int);
int write_dir(int);
int write_fat(int);
float nlLUDecomp(int a4, int a5, float f4, float f5);
void syChainDeleteHandler(int a4);
int vmsfs_fclose(int a4, int a5, int a6, int a7);
int adxstmf_stat_exec(int a4, int a5, int a6, int a7);
int gdFsSearchPath_dds(int a4, int a5, int a6, int a7, int a8);
int FUN_0c1127bc(int a4, int a5, int a6, int a7, int a8);
int gdFsStopRd(int a4, int a5, int a6, int a7);
float FUN_0c0ef980(int a4);
int gdFsDaReleaseG(int a4, int a5, int a6, int a7);
int gdFsLoadDirG(int a4, int a5);
int ADXB_ExecOneAuUlaw(int a4, int a5, int a6, int a7);
int gdFsDaPlayG(int a4, int a5, int a6, int a7);
int gdFsDaPlaySctG(int a4, int a5, int a6, int a7);
int adxt_trap_entry(int a4, int a5, int a6, int a7);
int trigger(int a4, int a5);
int ADXT_StartMemIdx(int a4, int a5, int a6);
int kmiProcessVertex_16(int a4, int a5, int a6, int a7);
int kmiProcessVertex_02(int a4, int a5, int a6, int a7);
int kmiProcessVertex_10(int a4, int a5, int a6, int a7);
int gdFsDaPauseG(void);
int FBSortQueue(int a4, int a5);
int kmiProcessVertex_15(int a4, int a5, int a6, int a7);
int gdFsDaStopG(void);
int mpdrv_exit(void);
int check_caps(int a4);
int gdFsReqDrvStatG(int a4, int a5, int a6, int a7);
int mwlSbTrnsEx(int a4, int a5, int a6, int a7);
int syTmrInt1SetEx(int a4, int a5, int a6, int a7);

float nlLUDecomp(int a4, int a5, float f4, float f5)
{
    int stk[7];
    register int t2;
    register int t5;
    register int t8;
    register int t9;
    register float u12;
    register float u13;
    register int t18;
    register float u20;
    register int t6;
    register int t7;
    register int t10;
    register float u11;
    register int t14;
    register int t15;
    register int t16;
    register int t17;
    register float u19;

    *(unsigned int *)(((int)stk + 8)) = a4;
    t2 = a4;
    if (a4 == 0) {
        t2 = nlStoreMatrix(0x0);
        t5 = t2;
    } else {
        t8 = a5;
    }
    t9 = 0x0;
    u12 = f4;
    u13 = f5;
    for (;;) {
        if ((int)t9 >= (int)0x4) {
            t7 = a5;
            t7 = (t7 + 0x4);
            t9 = 0x0;
            *(unsigned int *)(((int)stk + 4)) = t7;
            t18 = 0x0;
            u20 = 1.0f;
            for (;;) {
                if ((int)t9 >= (int)0x4) {
                    break;
                }
                t18 = t9;
                t10 = t9;
                u13 = -1.0f;
                t10 = (t10 << 2);
                if ((int)t18 < (int)0x4) {
                    for (;;) {
                        t5 = t18;
                        t17 = (*(signed char *)((a5 + t5)));
                        t7 = t2;
                        t6 = ((int)stk + 0);
                        t5 = t17;
                        t5 = (t5 << 2);
                        t5 = (t5 << 2);
                        t5 = (t5 + t7);
                        t7 = t17;
                        t6 = (t6 + 0xC);
                        u11 = (*(float *)((t10 + t5)));
                        t7 = (t7 << 2);
                        t7 = (t7 + t6);
                        u11 = _builtin_fabsf(u11);
                        u19 = (*(float *)((t7 + 0x0)));
                        u12 = u11;
                        u12 = (u12 * u19);
                        if (u12 > u13) {
                            t8 = t18;
                            u13 = u12;
                        }
                        t18 = (t18 + 0x1);
                        if ((int)t18 >= (int)0x4) {
                            break;
                        }
                    }
                }
                t16 = t8;
                t16 = (t16 + a5);
                t18 = (*(signed char *)((t16 + 0x0)));
                if (t8 != t9) {
                    t17 = t9;
                    t17 = (t17 + a5);
                    t6 = (*(signed char *)((t17 + 0x0)));
                    u20 = (-u20);
                    *(unsigned char *)((t16 + 0x0)) = t6;
                    *(unsigned char *)((t17 + 0x0)) = t18;
                }
                t15 = t18;
                t15 = (t15 << 2);
                t5 = t2;
                t15 = (t15 << 2);
                t5 = (t5 + t15);
                u11 = 0.0f;
                u12 = (*(float *)((t10 + t5)));
                u20 = (u20 * u12);
                if (u12 != u11) {
                    t17 = t9;
                    t17 = (t17 + 0x1);
                    t14 = t17;
                    t14 = (t14 + a5);
                    for (;;) {
                        t6 = (*(int *)(((int)stk + 4)));
                        if ((unsigned int)t14 >= (unsigned int)t6) {
                            break;
                        }
                        t18 = (*(signed char *)((t14 + 0x0)));
                        t14 = (t14 + 0x1);
                        t5 = t2;
                        t8 = t17;
                        t18 = (t18 << 2);
                        t18 = (t18 << 2);
                        t5 = (t5 + t18);
                        u13 = (*(float *)((t10 + t5)));
                        u13 = (u13 / u12);
                        *(float *)((t10 + t5)) = u13;
                        if ((int)t8 < (int)0x4) {
                            for (;;) {
                                t16 = t8;
                                t16 = (t16 << 2);
                                u19 = u13;
                                t5 = t2;
                                *(unsigned int *)(((int)stk + 0)) = t5;
                                t5 = (t5 + t18);
                                t7 = (*(int *)(((int)stk + 0)));
                                t8 = (t8 + 0x1);
                                t7 = (t7 + t15);
                                t7 = (t7 + t16);
                                u11 = (*(float *)((t7 + 0x0)));
                                u19 = (u19 * u11);
                                u11 = (*(float *)((t16 + t5)));
                                u11 = (u11 - u19);
                                *(float *)((t16 + t5)) = u11;
                                if ((int)t8 >= (int)0x4) {
                                    break;
                                }
                            }
                        }
                    }
                    t9 = (t9 + 0x1);
                    continue;
                }
                return u20;
            }
            t7 = (*(int *)(((int)stk + 8)));
            if (t7 == 0) {
                t7 = 0xC17B1A0;
                t5 = (FUN_0c17b1a0(t2));
                return u20;
            }
            return u20;
        }
        t5 = t9;
        t10 = t5;
        t10 = (t10 << 2);
        t8 = 0x0;
        *(unsigned char *)((a5 + t5)) = t5;
        u12 = 0.0f;
        t10 = (t10 << 2);
        for (;;) {
            if ((int)t8 >= (int)0x4) {
                break;
            }
            t7 = t8;
            t5 = t2;
            t7 = (t7 << 2);
            t5 = (t5 + t10);
            u11 = (*(float *)((t7 + t5)));
            u11 = _builtin_fabsf(u11);
            u13 = u11;
            t8 = (t8 + 0x1);
            if (u13 > u12) {
                u12 = u13;
            }
        }
        u11 = 0.0f;
        if (u12 == u11) {
            break;
        }
        u11 = 1.0f;
        u11 = (u11 / u12);
        t6 = ((int)stk + 0);
        t7 = t9;
        t7 = (t7 << 2);
        t6 = (t6 + 0xC);
        t7 = (t7 + t6);
        t9 = (t9 + 0x1);
        *(float *)((t7 + 0x0)) = u11;
    }
    return 0.0f;
}

void syChainDeleteHandler(int a4)
{
    int stk[1];

    register int R2;
    register int R3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_10;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register int v0_9;
    v0_4 = a4;
    *(unsigned short *)(((int)stk + 0)) = (_builtin_get_imask());
    _builtin_set_imask(0xF);
    v0_1 = (((v0_4 << 2) << 2));
    v0_2 = ((((v0_4 << 2) << 2) + 0xC8C0884));
    v0_4 = (0x100);
    v0_0 = (0x1);
    v0_7 = (0x1);
    v0_3 = (0xC8C0884);
    L_C2BB4CA:;
    v0_5 = ((((v0_7 << 2) << 2) + v0_3));
    if (((*(int *)(((((v0_7 << 2) << 2) + v0_3) + 0x4))) != v0_2)) goto L_C2BB4E0;
    if ((((*(int *)((v0_5 + 0xC))) & 0x80000000) != 0)) goto L_C2BB4E6;
    L_C2BB4E0:;
    v0_5 = (unsigned int)(v0_7 + 0x1) < (unsigned int)v0_4;
    v0_7 = ((v0_7 + 0x1));
    if (v0_5) goto L_C2BB4CA;
    L_C2BB4E6:;
    v0_6 = (0x0);
    if ((v0_7 == v0_4)) goto L_C2BB4FE;
    *(unsigned int *)(((((v0_7 << 2) << 2) + v0_3) + 0x4)) = (*(int *)(((v0_1 + v0_3) + 0x4)));
    *(unsigned int *)(((v0_1 + v0_3) + 0xC)) = v0_6;
    L_C2BB5D8:;
    _builtin_set_imask(((unsigned int)((((unsigned short)(*(short *)(((int)stk + 0))) & 0xF) << 2) << 2) >> 4));
    return;
    L_C2BB4FE:;
    v0_2 = (v0_1 + v0_3);
    v0_7 = (0xA05F6920);
    v0_1 = (0xC0);
    v0_2 = v0_2;
    v0_5 = (v0_0);
    v0_4 = (0xC8C1884);
    v0_3 = (0x90);
    v0_8 = (0x200);
    v0_9 = (0xA05F6924);
    L_C2BB510:;
    if (((*(int *)((v0_4 + (v0_5 << 2)))) != v0_2)) goto L_C2BB5D0;
    *(unsigned int *)((((v0_5 << 2) + v0_4) + 0x0)) = (*(int *)((v0_2 + 0x4)));
    *(unsigned int *)((v0_2 + 0xC)) = v0_6;
    if (((*(int *)((((v0_5 << 2) + v0_4) + 0x0))) != 0)) goto L_C2BB5D6;
    if ((v0_5 != v0_3)) goto L_C2BB53C;
    kmSetVSyncCallback(0x0, 0x0);
    L_C2BB5D6:;
    goto L_C2BB5D8;
    L_C2BB53C:;
    if ((v0_5 != 0x92)) goto L_C2BB54E;
    kmSetHSyncCallback(0x0, 0x0);
    goto L_C2BB5D6;
    L_C2BB54E:;
    v0_1 = (((int)(short)((v0_5 << 2) << 2) >> 8));
    v0_2 = (((v0_5 << 2) << 2));
    v0_3 = (((unsigned int)((unsigned int)((unsigned int)(unsigned char)((v0_5 << 2) << 2) >> 2) >> 2) >> 1));
    if ((((int)(short)((v0_5 << 2) << 2) >> 8) != 10)) goto L_C2BB57A;
    *(unsigned int *)((v0_7 + 0x0)) = ((*(int *)((v0_7 + 0x0))) & (~((int)v0_0 << (int)(v0_3 + 0xC))));
    L_C2BB58A:;
    *(unsigned int *)((((((int)_builtin_get_vbr()) + ((unsigned int)((unsigned int)(v0_2 - 512) >> 2) >> 1)) + v0_8) + 0x0)) = 0xC2D8DBC;
    goto L_C2BB5D6;
    L_C2BB57A:;
    if ((v0_1 != 11)) goto L_C2BB58A;
    *(unsigned int *)((v0_9 + 0x0)) = ((*(int *)((v0_9 + 0x0))) & (~((int)v0_0 << (int)v0_3)));
    goto L_C2BB58A;
    L_C2BB5D0:;
    v0_10 = (unsigned int)(v0_5 + 0x1) < (unsigned int)v0_1;
    v0_5 = ((v0_5 + 0x1));
    if (v0_10) goto L_C2BB510;
    goto L_C2BB5D6;
}

int vmsfs_fclose(int a4, int a5, int a6, int a7)
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
    register int t10;
    register int t11;

    t0 = 0xFFFFFF00;
    if (a4 == 0) {
    } else {
        t1 = 0x0;
        if ((*(signed char *)(((((*(int *)((a4 + 0x28))) * 0x148) + 0xC8C4604) + 0x2))) == 0) {
        } else {
            t2 = vmsio_ismount((*(int *)((a4 + 0x28))));
            t3 = 0x0;
            if (t2 == 0) {
            } else {
                t2 = 0x0;
                if ((*(signed char *)(((((*(int *)((a4 + 0x28))) * 0x148) + 0xC8C4604) + 0x8))) == 0) {
                } else {
                    t4 = vmsio_isready((*(int *)((a4 + 0x28))));
                    if (t4 == 0) {
                        vmsfs_unmount((*(int *)((a4 + 0x28))));
                        t4 = 0x0;
                    } else {
                        t5 = thunk_FUN_0c2c067e((*(int *)((a4 + 0x28))));
                        t6 = 0x0;
                        if ((int)t5 >= 0) {
                            t5 = *(int *)((a4 + 0x28));
                            t7 = 0x0;
                            if ((*(int *)((a4 + 0x4))) != 0) {
                                if (a5 != 0) {
                                    *(unsigned int *)((((t5 * 0x148) + 0xC8C4604) + 0x30)) = 0x1;
                                    t8 = *(int *)((((t5 * 0x148) + 0xC8C4604) + 0x4));
                                    *(unsigned int *)((((t5 * 0x148) + 0xC8C4604) + 0x34)) = (*(int *)((((((t8 << 2) + t8) << 2) << 2) + 0xC303C48)));
                                }
                                t8 = direntry(t5, (*(int *)((a4 + 0x2C))));
                                t9 = 0x33;
                                if ((*(int *)((a4 + 0x8))) == 1) {
                                    t9 = 0xCC;
                                }
                                *(unsigned char *)((t8 + 0x0)) = t9;
                                *(unsigned char *)((t8 + 0x1)) = (*(signed char *)((a4 + 0x1)));
                                t9 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)0xC8C4600) + 0x10)))))(t8, 0x2, (*(int *)((a4 + 0x38))), a7);
                                t9 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)0xC8C4600) + 0x10)))))(t8, 0x18, (*(int *)((a4 + 0x30))), a7);
                                t9 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)0xC8C4600) + 0x10)))))(t8, 0x1A, (*(short *)((a4 + 0x2))), a7);
                                t9 = (t8 + 0x4);
                                t10 = (a4 + 0x10);
                                for (;;) {
                                    if ((unsigned int)t9 >= (unsigned int)(t8 + 0x10)) {
                                        break;
                                    }
                                    t11 = (*(signed char *)((t10 + 0x0)));
                                    t10 = (t10 + 0x1);
                                    *(unsigned char *)((t9 + 0x0)) = t11;
                                    t9 = (t9 + 0x1);
                                }
                                t9 = t11;
                                t10 = (t8 + 0x10);
                                t11 = (a4 + 0x20);
                                for (;;) {
                                    if ((unsigned int)t10 >= (unsigned int)(t8 + 0x18)) {
                                        break;
                                    }
                                    t9 = (*(signed char *)((t11 + 0x0)));
                                    t11 = (t11 + 0x1);
                                    *(unsigned char *)((t10 + 0x0)) = t9;
                                    t10 = (t10 + 0x1);
                                }
                                direntry_dirty(t5, (*(int *)((a4 + 0x2C))));
                                t8 = write_dir(t5);
                                t9 = t8;
                                if ((int)t8 >= 0) {
                                    write_fat(t5);
                                    t9 = 0x0;
                                }
                                t7 = t9;
                            }
                            t6 = t7;
                        }
                        t4 = t6;
                    }
                    t2 = t4;
                }
                t3 = t2;
            }
            t1 = t3;
        }
        close_file_handle(a4);
        t0 = t1;
    }
    return t0;
}

int adxstmf_stat_exec(int a4, int a5, int a6, int a7)
{
    int stk[10];
    register int t1;
    register int t3;
    register int t4;
    register int t9;
    register int t12;
    register int t13;
    register int t18;
    register int t22;
    register int t23;
    register int t25;
    register int t47;
    register int t97;
    register int t52;
    register int t57;
    register int t58;
    register int t59;
    register int t63;
    register int t64;
    register int t65;
    register int t66;
    register int t68;
    register int t72;
    int t15;
    int t49;

    t1 = *(int *)((a4 + 0x4));
    if ((*(signed char *)((a4 + 0x2))) == 1) {
        t3 = gdFsGetStat((*(int *)((a4 + 0x8))));
        if (t3 == 1) {
            t4 = *(int *)((a4 + 0x20));
            FUN_0c2c6be4((a4 + 0x24), (((t4 << 8) << 2) << 1), (((int)stk + 4) + 0xC));
            t9 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((t1 + 0x0))) + 0x20)))))(t1, 0x1, (((int)stk + 4) + 0xC), a7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
            t12 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((t1 + 0x0))) + 0x1C)))))(t1, 0x0, (((int)stk + 4) + 0x4), a7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
            t13 = ADXSTM_Tell(a4);
            if ((t13 == (*(int *)((a4 + 0x30)))) && (t15 = *(int *)((a4 + 0x38)), t15 != 0)) {
                t18 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)((a4 + 0x38)))))((*(int *)((a4 + 0x3C))), a5, a6, a7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
            }
            *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) + (((t4 << 8) << 2) << 1));
            *(unsigned char *)((a4 + 0x2)) = 0x0;
            t22 = ADXSTM_Tell(a4);
            t23 = *(int *)((a4 + 0x14));
            t25 = (t23 + 0x7FF);
            if ((int)(t23 + 0x7FF) < 0) {
                t25 = ((t23 + 0x7FF) + 0x7FF);
            }
            if ((int)t22 >= (int)((int)t25 >> 11)) {
                *(unsigned char *)((a4 + 0x1)) = 0x3;
            }
        } else {
            if (t3 == 5) {
                *(int *)((int)stk + 0) = 0xC2FFD94;
                FUN_0c2c30aa(t3, 0x0, 0x0, 0x0, 0xC2FFD94);
                *(unsigned char *)((a4 + 0x1)) = 0x4;
                *(unsigned char *)((a4 + 0x2)) = 0x0;
            }
        }
    }
    t47 = *(signed char *)((a4 + 0x2));
    t97 = t47;
    if (t47 == 0) {
        if ((t1 != 0) && (t49 = *(int *)((t1 + 0x0)), t49 != 0)) {
            t52 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((t1 + 0x0))) + 0x24)))))(t1, 0x1, a6, a7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
            t97 = t52;
            if ((int)t52 < (int)(*(int *)((a4 + 0x1C)))) {
                t57 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((t1 + 0x0))) + 0x18)))))(t1, 0x0, (*(int *)((a4 + 0x18))), (a4 + 0x24), *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
                t58 = *(int *)((a4 + 0x28));
                t59 = t58;
                if ((int)t58 < 0) {
                    t59 = (t58 + 0x7FF);
                }
                *(unsigned int *)(((int)stk + 4)) = (*(int *)((a4 + 0x30)));
                t63 = ADXSTM_Tell(a4);
                t64 = *(int *)(((int)stk + 4));
                t65 = *(int *)((a4 + 0x2C));
                t66 = (t64 - t63);
                if ((int)((int)t59 >> 11) < (int)(t64 - t63)) {
                    t66 = ((int)t59 >> 11);
                }
                t68 = t65;
                if ((int)t66 < (int)t65) {
                    t68 = t66;
                }
                if (t68 != 0) {
                    t72 = gdFsReqRd32((*(int *)((a4 + 0x8))), t68, (*(int *)((a4 + 0x24))));
                    *(unsigned int *)((a4 + 0x20)) = t72;
                    if ((int)t72 <= 0) {
                        t97 = (((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((t1 + 0x0))) + 0x1C)))))(t1, 0x0, (a4 + 0x24), a7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24)));
                    } else {
                        *(unsigned char *)((a4 + 0x2)) = 0x1;
                        t97 = 0x1;
                    }
                } else {
                    t97 = (((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((t1 + 0x0))) + 0x1C)))))(t1, 0x0, (a4 + 0x24), a7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24)));
                }
            }
        } else {
            t97 = (adxstm_sj_internal_error());
        }
    }
    return t97;
}

int gdFsSearchPath_dds(int a4, int a5, int a6, int a7, int a8)
{
    int stk[10];

    register int R1;
    register int R2;
    register int R3;
    int R8;
    register float F1;
    register float F5;
    register float F8;
    register float F10;
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
    v0_6 = a4;
    v0_7 = a5;
    v0_0 = a6;
    v0_2 = a7;
    *(unsigned int *)(((int)stk + 0)) = v0_6;
    *(unsigned int *)(((int)stk + 16)) = v0_7;
    *(unsigned int *)(((int)stk + 32)) = v0_0;
    *(unsigned int *)(((int)stk + 4)) = 0x0;
    v0_1 = (0x1);
    v0_2 = (v0_2);
    v0_6 = (a8);
    R8 = (0x1);
    v0_3 = (0x0);
    L_C2BA72A:;
    v0_4 = (*(signed char *)((v0_6 + 0x0))) != 0;
    v0_6 = ((v0_6 + 0x1));
    if (v0_4) goto L_C2BA724;
    *(unsigned int *)(((int)stk + 36)) = R8;
    *(unsigned int *)(((int)stk + 20)) = v0_3;
    v0_5 = *(int *)(((int)stk + 0));
    *(unsigned int *)(((int)stk + 8)) = (v0_5 + 0x800);
    *(unsigned int *)(((int)stk + 24)) = v0_3;
    v0_4 = (R8);
    v0_2 = ((v0_2 + 0x1));
    v0_5 = ((v0_5 + 0x800));
    L_C2BA742:;
    v0_6 = (v0_5);
    if (((unsigned int)v0_5 >= (unsigned int)(*(int *)(((int)stk + 8))))) goto L_C2BA760;
    if (((unsigned int)((((unsigned char)(*(signed char *)((v0_6 + 0x0))) + ((unsigned char)(*(signed char *)((v0_6 + 0x0))) & 0x1)) + 0x8) + v0_5) < (unsigned int)(*(int *)(((int)stk + 8))))) goto L_C2BA78A;
    L_C2BA760:;
    v0_6 = *(int *)(((int)stk + 0));
    v0_8 = *(int *)(((int)stk + 0));
    gdFsMemcpy(v0_5, (v0_8 - ((v0_6 - v0_5) + 0x800)), ((v0_6 - v0_5) + 0x800));
    v0_7 = (gdFsReadWG((*(int *)(((int)stk + 16))), 0x1, (*(int *)(((int)stk + 0))))) != 0;
    v0_6 = ((v0_8 - ((v0_6 - v0_5) + 0x800)));
    v0_5 = (0xC2AF150);
    if (v0_7) goto L_C2BA82E;
    *(unsigned int *)(((int)stk + 16)) = ((*(int *)(((int)stk + 16))) + 0x1);
    v0_5 = (v0_6);
    L_C2BA78A:;
    gdFsMemcpy((v0_6 + 0x6), (((int)stk + 0) + 0xC), 0x2);
    if (((unsigned short)(*(short *)(((int)stk + 12))) != (*(int *)(((int)stk + 36))))) goto L_C2BA812;
    if ((v0_4 == 1)) goto L_C2BA810;
    if ((v0_1 != 1)) goto L_C2BA7B6;
    *(unsigned int *)(((int)stk + 28)) = (*(int *)(((int)stk + 4)));
    v0_7 = (a8);
    L_C2BA7BC:;
    if (((unsigned char)(*(signed char *)((v0_6 + 0x0))) != (*(int *)(((int)stk + 28))))) goto L_C2BA812;
    v0_7 = (gdFsStrncmpi((v0_6 + 0x8), v0_7, (*(int *)(((int)stk + 28))))) == 0;
    if (v0_7) goto L_C2BA812;
    if ((v0_1 != 0)) goto L_C2BA7DA;
    v0_2 = ((v0_2 + (*(int *)(((int)stk + 24)))));
    L_C2BA7DA:;
    if (((*(signed char *)((v0_2 + 0x0))) != 0)) goto L_C2BA7EC;
    v0_0 = ((gdFsGetLE4((v0_6 + 0x2))));
    v0_5 = (0xC2AEE78);
    L_C2BA830:;
    return v0_0;
    L_C2BA7EC:;
    if ((v0_1 != 1)) goto L_C2BA800;
    v0_1 = (v0_3);
    L_C2BA808:;
    *(unsigned int *)(((int)stk + 24)) = (gdFsGetTokenSize(v0_2, 0xC2FFA84, v0_0));
    L_C2BA810:;
    *(unsigned int *)(((int)stk + 36)) = v0_4;
    L_C2BA812:;
    v0_7 = *(signed char *)((v0_6 + 0x0));
    v0_8 = *(int *)(((int)stk + 20));
    *(unsigned int *)(((int)stk + 20)) = (v0_8 + ((((unsigned char)v0_7 & R8) + (unsigned char)v0_7) + 0x8));
    v0_4 = ((v0_4 + 0x1));
    v0_5 = ((v0_5 + ((((unsigned char)v0_7 & R8) + (unsigned char)v0_7) + 0x8)));
    v0_6 = (((((unsigned char)v0_7 & R8) + (unsigned char)v0_7) + 0x8));
    if (((int)(v0_8 + ((((unsigned char)v0_7 & R8) + (unsigned char)v0_7) + 0x8)) < (int)(*(int *)(((int)stk + 32))))) goto L_C2BA742;
    L_C2BA82E:;
    v0_0 = (0x0);
    goto L_C2BA830;
    L_C2BA800:;
    if ((v0_4 == 1)) goto L_C2BA808;
    v0_2 = ((v0_2 + 0x1));
    goto L_C2BA808;
    L_C2BA7B6:;
    *(unsigned int *)(((int)stk + 28)) = (*(int *)(((int)stk + 24)));
    v0_7 = (v0_2);
    goto L_C2BA7BC;
    L_C2BA724:;
    *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x1);
    goto L_C2BA72A;
}

int FUN_0c1127bc(int a4, int a5, int a6, int a7, int a8)
{
    int stk[1];
    register int t2;
    register int t16;
    int t68;
    register int t62;
    int t63;
    register int t64;

    *(unsigned char *)(((int)stk + 0)) = a4;
    make_header(a7, a8);
    *(unsigned char *)((a7 + 0x2)) = 0x0;
    *(unsigned char *)((a7 + 0x3)) = 0x0;
    t2 = *(signed char *)(((int)stk + 0));
    if (((unsigned char)(*(signed char *)((a5 + 0x2))) & (unsigned char)t2) != 0) {
        *(unsigned char *)((a7 + 0x4)) = 0x1;
        *(unsigned char *)((a7 + 0x0)) = 0x0;
        *(unsigned int *)((a7 + 0x24)) = ((*(int *)((a7 + 0x24))) + 0x1);
    }
    if (((unsigned char)(*(signed char *)((a5 + 0x3))) & (unsigned char)t2) != 0) {
        *(unsigned char *)((a7 + 0x4)) = 0x4;
        *(unsigned char *)((a7 + 0x0)) = 0x0;
        *(unsigned char *)((a7 + 0x3)) = 0x1;
        *(unsigned int *)((a7 + 0x24)) = 0x0;
    }
    if (((unsigned char)(*(signed char *)((a5 + 0x0))) & (unsigned char)t2) != 0) {
        t16 = *(signed char *)((a7 + 0x7));
        if (t16 == 0) {
            if ((*(signed char *)((a7 + 0x0))) == 0) {
            } else {
                *(unsigned char *)((a7 + 0x4)) = 0x0;
            }
        } else {
            if ((unsigned char)t16 == 1) {
                if ((unsigned char)(*(signed char *)((a7 + 0x8))) == 5) {
                    *(unsigned char *)((a7 + 0x2)) = 0x1;
                    *(unsigned char *)((a7 + 0x0)) = 0x1;
                    *(unsigned char *)((a7 + 0x4)) = 0x0;
                } else {
                    *(unsigned int *)((a7 + 0x24)) = ((*(int *)((a7 + 0x24))) + 0x1);
                    if ((unsigned int)(*(int *)((a7 + 0x24))) <= (unsigned int)((((struct o10D8_int *)((*(int *)0xC8D4D84)))->v))) {
                        *(unsigned char *)((a7 + 0x4)) = 0x1;
                    } else {
                        *(unsigned char *)((a7 + 0x0)) = 0x0;
                        *(unsigned char *)((a7 + 0x4)) = 0xFF;
                        *(unsigned int *)((a7 + 0x24)) = 0x0;
                    }
                }
            } else {
                if ((unsigned char)(*(signed char *)((a7 + 0x7))) == 4) {
                    *(unsigned char *)((a7 + 0x3)) = 0x1;
                    *(unsigned char *)((a7 + 0x0)) = 0x0;
                    *(unsigned char *)((a7 + 0x4)) = 0xFF;
                    *(unsigned int *)((a7 + 0x24)) = 0x0;
                } else {
                    if ((*(signed char *)((a7 + 0x7))) != 0) {
                        *(unsigned char *)((a7 + 0x4)) = 0x0;
                    }
                }
            }
        }
    } else {
        *(unsigned char *)((a7 + 0x4)) = 0xFF;
        *(unsigned char *)((a7 + 0x0)) = 0x0;
    }
    if (((*(signed char *)((a7 + 0x0))) != 0) && ((t62 = *(signed char *)((a7 + 0x7)), t62 != 0) && (t63 = *(int *)0xC8D4D84, t64 = (((struct o10C4_int *)(t63))->v), t64 == 1))) {
        t68 = *(int *)((a8 + 0x0));
        if ((t68 != -1) && (t68 != 0xFFFFFF00)) {
            mpdrv_swaplong(a8, ((unsigned char)(*(int *)((a8 + 0x0))) + 0x1));
        }
    }
    if ((*(signed char *)((a7 + 0x2))) != 0) {
        (((struct o10_uchar *)(a6))->v) = 0x0;
        mpdrv_make_deviceinfo(a6, a7, a8);
    }
    if ((*(signed char *)((a7 + 0x3))) != 0) {
        (((struct o10_uchar *)(a6))->v) = 0x0;
        mpdrv_clear_deviceinfo(a6);
    }
    return 0x0;
}

int gdFsStopRd(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    int t4;
    int t5;
    register int t6;

    t1 = 0xFFFFFFF6;
    if ((a4 != 0) && (t0 = (((struct o4C_short *)(a4))->v), t0 != 0)) {
        t0 = (((struct o50_short *)(a4))->v);
        if ((t0 != 2) && (t0 != 4)) {
            (((struct o50_ushort *)(a4))->v) = 0x0;
            t0 = 0x0;
        } else {
            t2 = 0xFFFFFFF3;
            if ((*(int *)(((*(int *)((a4 + 0x0))) + 0x1C))) != a4) {
            } else {
                t3 = syTmrGetCount();
                for (;;) {
                    if (((((struct o40_int *)(a4))->v)) == 1) {
                        t4 = syTmrGetCount();
                        for (;;) {
                            t5 = syTmrGetCount();
                            t6 = FUN_0c2bbe58(t4, t5);
                            if ((unsigned int)t6 >= (unsigned int)0x61B) {
                                break;
                            }
                        }
                        t4 = _builtin_get_imask();
                        _builtin_set_imask(0xF);
                        t5 = (((struct o50_short *)(a4))->v);
                        if ((t5 != 2) && (t5 != 4)) {
                            (((struct o50_ushort *)(a4))->v) = 0x0;
                            _builtin_set_imask(((unsigned int)(((t4 & 0xF) << 2) << 2) >> 4));
                            return 0x0;
                        }
                        if ((*(int *)(((*(int *)((a4 + 0x0))) + 0x1C))) != a4) {
                            _builtin_set_imask(((unsigned int)(((t4 & 0xF) << 2) << 2) >> 4));
                            return 0xFFFFFFF3;
                        }
                        t5 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)(((*(int *)((a4 + 0x0))) + 0xC))) + 0x14)))))((*(int *)((a4 + 0x3C))), 0xFFFFFFF3, a6, a7);
                        (((struct o48_ushort *)(a4))->v) = 0x3;
                        _builtin_set_imask(((unsigned int)(((t4 & 0xF) << 2) << 2) >> 4));
                        return (gdFsWaitCompleteReq(a4));
                    }
                    t4 = (((struct o50_short *)(a4))->v);
                    if ((t4 != 2) && (t4 != 4)) {
                        break;
                    }
                    t4 = syTmrGetCount();
                    t5 = FUN_0c2bbe58(t3, t4);
                    if ((unsigned int)t5 > (unsigned int)0xEE6B28) {
                        return 0xFFFFFFEB;
                    }
                    t4 = ((int (*)(int, int, int, int))(((((struct o48_int *)((*(int *)(((*(int *)((a4 + 0x0))) + 0x3C)))))->v))))(t5, 0xEE6B28, a6, a7);
                }
                (((struct o50_ushort *)(a4))->v) = 0x0;
                t2 = 0x0;
            }
            t0 = t2;
        }
        t1 = t0;
    }
    return t1;
}

float FUN_0c0ef980(int a4)
{
    float u38;
    float u83;
    float u35[4];
    float u80[4];

    int R0;
    int R1;
    int R6;
    register float F0;
    register float F2;
    register float F3;
    register float F4;
    register float F5;
    register float F6;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    register float w0_4;
    register float w0_5;
    v0_0 = a4;
    v0_1 = (int)(*(int *)((v0_0 + 0x0))) < 0;
    R0 = (0xC1A3C4C);
    v0_3 = ((*(signed char *)(((v0_0 + 0x3C) + 0x0))));
    v0_0 = ((v0_0 + 0x3C));
    w0_0 = (0.5f);
    if (v0_1) goto L_C1A3BA6;
    R1 = ((*(int *)(((v0_0 + 0x2C) + 0x0))));
    v0_0 = (((v0_0 + 0x2C) + 0x4));
    R6 = (0xFFFFFFFE);
    v0_1 = ((*(int *)(((R0 + 0x4) + 0x0))));
    w0_1 = ((*(float *)((R0 + 0x0))));
    L_C1A3B38:;
    if ((v0_3 == R6)) goto L_C1A3BBA;
    if (((v0_1 & R1) == 0)) goto L_C1A3BBA;
    if (((int)v0_3 <= (int)R6)) goto L_C1A3BC2;
    L_C1A3B44:;
    v0_2 = (*(int *)((v0_0 + 0x0)));
    v0_0 = ((v0_0 + 0x4));
    v0_2 = v0_2;
    F0 = (w0_0);
    if (((R1 & 8) == 0)) goto L_C1A3B54;
    v0_2 = (((v0_2 << 1) + v0_2));
    L_C1A3B54:;
    v0_3 = ((*(int *)((v0_0 + 0x0))));
    L_C1A3B56:;
    R0 = (0x1);
    v0_0 = ((v0_0 + 0xC));
    w0_2 = (0.0f);
    if (((v0_3 & 0x1) == 0)) goto L_C1A3BAA;
    w0_3 = *(float *)((v0_0 + 0x0));
    w0_4 = (((struct o4_float *)(v0_0))->v);
    w0_5 = (((struct o4_float *)((v0_0 + 0x4)))->v);
    v0_3 = *(int *)(((((v0_0 + 0x4) + 0x4) + 0x8) + 0x0));
    _builtin_prefetch((void *)((((v0_0 + 0x4) + 0x4) + 0x8) + 0x24));
    u35[0] = w0_3;
    u35[1] = w0_4;
    u35[2] = w0_5;
    u35[3] = w0_2;
    _builtin_ftrv(u35, u35);
    w0_2 = w0_0;
    w0_2 = w0_2 + F0 * u35[0];
    w0_3 = w0_0;
    w0_3 = w0_3 + F0 * u35[1];
    u38 = w0_3;
    *(float *)(((((((v0_0 + 0x4) + 0x4) + 0x8) + 0x24) - 32) + 0xFFFFFFF8)) = w0_2;
    v0_4 = *(int *)(((((((v0_0 + 0x4) + 0x4) + 0x8) + 0x24) - 32) + 0x0));
    *(unsigned int *)(((((((v0_0 + 0x4) + 0x4) + 0x8) + 0x24) - 32) + 0xFFFFFFFC)) = ((v0_3 & R0) | ((*(int *)&u38) & R6));
    v0_5 = (v0_2 - 0x1) != 0;
    R0 = (0xFFFFFFFC);
    v0_3 = (v0_4);
    v0_0 = ((((((v0_0 + 0x4) + 0x4) + 0x8) + 0x24) - 32));
    v0_2 = ((v0_2 - 0x1));
    FPUL_ = ((*(int *)&u38));
    if (v0_5) goto L_C1A3B56;
    L_C1A3B92:;
    R1 = ((*(int *)((v0_0 + 0x0))));
    v0_0 = ((v0_0 + 0x4));
    L_C1A3B94:;
    if (((int)R1 > 0)) goto L_C1A3B44;
    if ((R1 == 0)) goto L_C1A3BA6;
    R1 = ((*(int *)((((v0_0 + 0x20) + 0x2C) + 0x0))));
    v0_3 = ((*(signed char *)(((v0_0 + 0x20) + 0x0))));
    v0_0 = ((((v0_0 + 0x20) + 0x2C) + 0x4));
    goto L_C1A3B38;
    L_C1A3BA6:;
    return F0;
    L_C1A3BAA:;
    _builtin_prefetch((void *)(v0_0 + 0x20));
    v0_3 = (v0_2 - 0x1) != 0;
    R0 = ((v0_0 + 0x20));
    v0_0 = ((v0_0 - 4));
    v0_2 = ((v0_2 - 0x1));
    if (v0_3) goto L_C1A3B54;
    R1 = ((*(int *)((v0_0 + 0x0))));
    v0_0 = ((v0_0 + 0x4));
    goto L_C1A3B94;
    L_C1A3BC2:;
    v0_2 = (*(int *)((v0_0 + 0x0)));
    v0_0 = ((v0_0 + 0x4));
    v0_2 = v0_2;
    F0 = (w0_1);
    if (((R1 & 8) == 0)) goto L_C1A3BD2;
    v0_2 = (((v0_2 << 1) + v0_2));
    L_C1A3BD2:;
    v0_3 = ((*(int *)((v0_0 + 0x0))));
    L_C1A3BD4:;
    R0 = (0x1);
    v0_4 = ((*(int *)((v0_0 + 0xC))));
    v0_0 = ((v0_0 + 0xD));
    if (((v0_3 & 0x1) == 0)) goto L_C1A3C36;
    v0_5 = *(signed char *)((v0_0 + 0x0));
    v0_6 = *(signed char *)(((v0_0 + 0x1) + 0x0));
    v0_3 = *(int *)((((v0_0 + 0x1) + 0xE) + 0x0));
    _builtin_prefetch((void *)(((v0_0 + 0x1) + 0xE) + 0x24));
    u80[0] = (float)v0_6;
    u80[1] = (float)v0_5;
    u80[2] = (float)(signed char)v0_4;
    u80[3] = 0.0f;
    _builtin_ftrv(u80, u80);
    w0_2 = w0_0;
    w0_2 = w0_2 + F0 * u80[0];
    w0_3 = w0_0;
    w0_3 = w0_3 + F0 * u80[1];
    u83 = w0_3;
    *(float *)((((((v0_0 + 0x1) + 0xE) + 0x24) - 32) + 0xFFFFFFF8)) = w0_2;
    v0_4 = *(int *)((((((v0_0 + 0x1) + 0xE) + 0x24) - 32) + 0x0));
    *(unsigned int *)((((((v0_0 + 0x1) + 0xE) + 0x24) - 32) + 0xFFFFFFFC)) = ((v0_3 & R0) | ((*(int *)&u83) & R6));
    v0_5 = (v0_2 - 0x1) != 0;
    R0 = (0xFFFFFFFC);
    v0_3 = (v0_4);
    v0_0 = (((((v0_0 + 0x1) + 0xE) + 0x24) - 32));
    v0_2 = ((v0_2 - 0x1));
    FPUL_ = ((*(int *)&u83));
    if (v0_5) goto L_C1A3BD4;
    R1 = ((*(int *)((v0_0 + 0x0))));
    v0_0 = ((v0_0 + 0x4));
    L_C1A3C20:;
    if (((int)R1 > 0)) goto L_C1A3BC2;
    if ((R1 == 0)) goto L_C1A3C32;
    R1 = ((*(int *)((((v0_0 + 0x20) + 0x2C) + 0x0))));
    v0_3 = ((*(signed char *)(((v0_0 + 0x20) + 0x0))));
    v0_0 = ((((v0_0 + 0x20) + 0x2C) + 0x4));
    goto L_C1A3B38;
    L_C1A3C32:;
    return F0;
    L_C1A3C36:;
    _builtin_prefetch((void *)(v0_0 + 0x20));
    v0_3 = (v0_2 - 0x1) != 0;
    R0 = ((v0_0 + 0x20));
    v0_0 = ((v0_0 - 5));
    v0_2 = ((v0_2 - 0x1));
    if (v0_3) goto L_C1A3BD2;
    R1 = ((*(int *)((v0_0 + 0x0))));
    v0_0 = ((v0_0 + 0x4));
    goto L_C1A3C20;
    L_C1A3BBA:;
    v0_2 = *(int *)(((v0_0 - 8) + 0x0));
    R0 = (v0_2);
    v0_0 = ((((v0_0 - 8) + 0x4) + v0_2));
    goto L_C1A3B92;
}

int gdFsDaReleaseG(int a4, int a5, int a6, int a7)
{
    register int t1;
    int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;

    t3 = gdFsReopenHn((*(int *)(((*(int *)0xC3036E4) + 0x14))), 0x0, 0x0, 0x0);
    t4 = 0xFFFFFFF3;
    if (t3 != 0) {
        t5 = _builtin_get_imask();
        _builtin_set_imask(0xF);
        t6 = *(int *)0xC3036E4;
        if ((((((struct o3A_short *)(t6))->v)) != 0) && (t4 = (((struct o10_int *)0xC8B9688)->v), t1 = (((struct o14_int *)0xC8B9688)->v), t4 != t1)) {
            (((struct o3A_ushort *)(t6))->v) = 0x0;
        }
        t4 = *(int *)0xC3036E4;
        if ((((((struct o3A_short *)(t4))->v)) != 0) && (t2 = *(int *)((t4 + 0x2C)), (int)t2 >= (int)0x10001)) {
            t1 = (((struct o8_int *)0xC8B9688)->v);
            t2 = (((struct oC_int *)0xC8B9688)->v);
            t6 = (((struct o4_int *)0xC8B9688)->v);
            if (((((struct o0_int *)0xC8B9688)->v)) == 1) {
                t7 = (*(int *)(((*(int *)((t4 + 0xC))) + 0x28)));
            } else {
                t7 = (*(int *)(((*(int *)((t4 + 0xC))) + 0x2C)));
            }
            t8 = ((int (*)(int, int, int, int))(t7))(t6, t1, t2, a7);
            if (t8 != 0) {
                *(unsigned int *)((t3 + 0x3C)) = t8;
                (((struct o50_ushort *)(t3))->v) = 0x4;
                *(unsigned int *)((t3 + 0x4)) = 0xC8B9698;
                (((struct o48_ushort *)(t3))->v) = 0x8;
                *(unsigned int *)(((*(int *)((t3 + 0x0))) + 0x1C)) = t3;
                t1 = ((int (*)(void))(((((struct o40_int *)((*(int *)(((*(int *)0xC3036E4) + 0xC)))))->v))))();
            }
            t1 = t8;
        } else {
            t2 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)((t4 + 0xC))) + 0x34)))))(a4, a5, a6, a7);
            if (t2 != 0) {
                *(unsigned int *)((t3 + 0x3C)) = t2;
                (((struct o50_ushort *)(t3))->v) = 0x4;
                (((struct o48_ushort *)(t3))->v) = 0x6;
                *(unsigned int *)(((*(int *)((t3 + 0x0))) + 0x1C)) = t3;
                t4 = ((int (*)(void))(((((struct o40_int *)((*(int *)(((*(int *)0xC3036E4) + 0xC)))))->v))))();
            }
            t1 = t2;
        }
        _builtin_set_imask(((unsigned int)(((t5 & 0xF) << 2) << 2) >> 4));
        t4 = 0x0;
        if (t1 == 0) {
            t4 = 0xFFFFFFF3;
        }
    }
    return t4;
}

int gdFsLoadDirG(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    int t6;
    register int t7;
    register int t8;
    register int t9;
    register int t11;

    t4 = *(int *)0xC3036E4;
    t5 = a5;
    if (a5 == 0) {
        t5 = (*(int *)((t4 + 0x10)));
    }
    t6 = *(signed char *)((a4 + 0x0));
    t7 = *(int *)0xC8B9678;
    if ((t6 != 47) && (t6 != 92)) {
        t6 = gdFsSearchName(a4, (*(int *)((t4 + 0x10))), 0x0);
        t8 = 0xFFFFFFF8;
        if (t6 != 0) {
            t9 = *(int *)(((*(int *)0xC3036E4) + 0x10));
            t8 = 0xFFFFFFF5;
            if (((unsigned char)(*(signed char *)((((t9 + 0x10) + ((t6 - 1) * 0x2C)) + 0x8))) & 2) == 0) {
            } else {
                t11 = *(int *)((((t9 + 0x10) + ((t6 - 1) * 0x2C)) + 0x0));
                t8 = gdFsGetDirEnt(((*(int *)0xC3036E4) + 0x40), (t11 + 0x96), t5, (*(int *)((((t9 + 0x10) + ((t6 - 1) * 0x2C)) + 0x4))));
                if (((*(short *)(((*(int *)0xC8B9678) + 0x0))) == 1) && ((t0 = *(int *)0xC8B9678, t1 = *(int *)((t0 + 0x4)), t1 == (t11 + 0x96)) && ((t8 == 0) || (t8 == -12)))) {
                    gdFsLockDir(t5);
                }
            }
        }
        t0 = t8;
    } else {
        if ((*(short *)((t7 + 0x0))) == 1) {
            t1 = (gdFsSearchPath_dds(((t4 + 0x40) + 0x40), (*(int *)((t4 + 0x4))), (*(int *)((t4 + 0x8))), a4, (0x8 + t7)));
        } else {
            t1 = (gdFsSearchPath(((t4 + 0x40) + 0x40), (*(int *)((t4 + 0x4))), (*(int *)((t4 + 0x8))), a4));
        }
        t4 = 0xFFFFFFF8;
        if (t1 != 0) {
            t6 = gdFsGetDirEnt(((*(int *)0xC3036E4) + 0x40), (0x96 + t1), t5, 0x800);
            if (((*(short *)(((*(int *)0xC8B9678) + 0x0))) == 1) && ((t2 = *(int *)0xC8B9678, t3 = *(int *)((t2 + 0x4)), t3 == (0x96 + t1)) && ((t6 == 0) || (t6 == -12)))) {
                gdFsLockDir(t5);
            }
            t4 = t6;
        }
        t0 = t4;
    }
    return t0;
}

int ADXB_ExecOneAuUlaw(int a4, int a5, int a6, int a7)
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
    register int t10;
    register int t11;

    t0 = (((struct o50_int *)(a4))->v);
    t1 = a7;
    if ((*(int *)((a4 + 0x4))) == 1) {
        t2 = ADXPD_GetStat((*(int *)((a4 + 0x8))));
        if (t2 == 0) {
            t2 = ((int (*)(int, int, int, int))(((((struct o88_int *)(a4))->v))))(((((struct o8C_int *)(a4))->v)), ((a4 + 0x50) + 0x20), ((a4 + 0x50) + 0x24), ((a4 + 0x50) + 0x28));
            t2 = *(int *)(((a4 + 0x50) + 0x18));
            t3 = *(int *)(((a4 + 0x50) + 0x20));
            t4 = *(int *)(((a4 + 0x50) + 0x4));
            t5 = (t2 - t3);
            if ((int)(t2 - t3) > (int)(*(int *)(((a4 + 0x50) + 0x24)))) {
                t5 = (*(int *)(((a4 + 0x50) + 0x24)));
            }
            t2 = *(int *)(((a4 + 0x50) + 0x14));
            t3 = t5;
            if ((int)t5 > (int)t4) {
                t3 = (*(int *)(((a4 + 0x50) + 0x4)));
            }
            t4 = *(int *)(((a4 + 0x50) + 0x20));
            if ((*(signed char *)((a4 + 0xE))) == 2) {
                t5 = *(int *)(((a4 + 0x50) + 0x1C));
                t6 = *(int *)(((a4 + 0x50) + 0x20));
                t7 = 0x0;
                if ((int)t3 > 0) {
                    t8 = 0x0;
                    t9 = 0x0;
                    t10 = 0x0;
                    for (;;) {
                        t10 = (t10 + 0x1);
                        *(unsigned short *)(((((t4 << 1) + t2) + t8) + 0x0)) = (*(short *)((0xC304184 + ((unsigned char)(*(signed char *)((t9 + t0))) << 1))));
                        t11 = *(signed char *)((((t9 + 0x1) + t0) + 0x0));
                        t9 = (t9 + 0x2);
                        *(unsigned short *)(((((t5 + t6) << 1) + t2) + t8)) = (*(short *)(((((unsigned char)t11 << 1) + 0xC304184) + 0x0)));
                        t8 = (t8 + 0x2);
                        if ((int)t10 >= (int)t3) {
                            break;
                        }
                    }
                    t7 = t9;
                }
                t5 = t7;
            } else {
                t6 = (0x0 + ((t4 << 1) + t2));
                if ((int)t3 > 0) {
                    t7 = (0x0 + t0);
                    t0 = (0x0 + ((t4 << 1) + t2));
                    t2 = 0x0;
                    for (;;) {
                        t4 = *(signed char *)((t7 + 0x0));
                        t7 = (t7 + 0x1);
                        t2 = (t2 + 0x1);
                        *(unsigned short *)((t0 + 0x0)) = (*(short *)((0xC304184 + ((unsigned char)t4 << 1))));
                        t0 = (t0 + 0x2);
                        if ((int)t2 >= (int)t3) {
                            break;
                        }
                    }
                    t6 = t0;
                }
                t5 = t6;
            }
            (((struct oA0_uint *)(a4))->v) = t3;
            (((struct oA4_uint *)(a4))->v) = (t3 * (*(signed char *)((a4 + 0xE))));
            *(unsigned int *)((a4 + 0x4)) = 0x2;
            t0 = t5;
        }
        t1 = t0;
    }
    t0 = *(int *)((a4 + 0x4));
    t2 = t0;
    if (t0 == 2) {
        t0 = ((int (*)(int, int, int, int))(((((struct o90_int *)(a4))->v))))(((((struct o94_int *)(a4))->v)), ((((struct oA4_int *)(a4))->v)), ((((struct oA0_int *)(a4))->v)), t1);
        *(unsigned int *)((a4 + 0x4)) = 0x3;
        t2 = t0;
    }
    return t2;
}

int gdFsDaPlayG(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t5;
    register int t6;

    t0 = (((struct o0_int *)0xC8B9678)->v);
    t1 = a5;
    t2 = a4;
    if ((*(short *)((t0 + 0x0))) == 1) {
        t3 = *(short *)((t0 + 0x2));
        t1 = (a5 + (t3 - 4));
        t2 = (a4 + (t3 - 4));
    }
    t0 = 0xFFFFFFF3;
    if ((int)t2 >= (int)0x3) {
        t3 = gdFsReopenHn((*(int *)(((*(int *)0xC3036E4) + 0x14))), 0x0, 0x0, 0x0);
        t0 = 0xFFFFFFF3;
        if (t3 != 0) {
            t5 = _builtin_get_imask();
            _builtin_set_imask(0xF);
            t6 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)(((*(int *)0xC3036E4) + 0xC))) + 0x28)))))(t2, t1, a6, a7);
            if (t6 != 0) {
                *(unsigned int *)((t3 + 0x3C)) = t6;
                (((struct o50_ushort *)(t3))->v) = 0x4;
                if ((int)(*(int *)(((*(int *)0xC3036E4) + 0x2C))) >= (int)0x10001) {
                    (((struct o3A_ushort *)((*(int *)0xC3036E4)))->v) = 0x1;
                    (((struct o10_uint *)0xC8B9678)->v) = 0x1;
                    (((struct o14_uint *)0xC8B9678)->v) = t2;
                    (((struct o18_uint *)0xC8B9678)->v) = t1;
                    (((struct o1C_uint *)0xC8B9678)->v) = a6;
                    *(unsigned int *)((t3 + 0x4)) = 0xC8B9698;
                    (((struct o48_ushort *)(t3))->v) = 0x8;
                    t1 = 0x1;
                } else {
                    (((struct o48_ushort *)(t3))->v) = 0x6;
                }
                *(unsigned int *)(((*(int *)((t3 + 0x0))) + 0x1C)) = t3;
                t2 = ((int (*)(int, int, int, int))(((((struct o40_int *)((*(int *)(((*(int *)0xC3036E4) + 0xC)))))->v))))(t1, a5, a6, a7);
            }
            _builtin_set_imask(((unsigned int)(((t5 & 0xF) << 2) << 2) >> 4));
            t1 = 0x0;
            if (t6 == 0) {
                t1 = 0xFFFFFFF3;
            }
            t0 = t1;
        }
    }
    return t0;
}

int gdFsDaPlaySctG(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t3;
    register int t4;

    t0 = 0xFFFFFFF3;
    if ((int)a4 >= (int)0xB05E) {
        t1 = gdFsReopenHn((*(int *)(((*(int *)0xC3036E4) + 0x14))), 0x0, 0x0, 0x0);
        t0 = 0xFFFFFFF3;
        if (t1 != 0) {
            t3 = _builtin_get_imask();
            _builtin_set_imask(0xF);
            t4 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)(((*(int *)0xC3036E4) + 0xC))) + 0x2C)))))(a4, a5, a6, a7);
            if (t4 != 0) {
                *(unsigned int *)((t1 + 0x3C)) = t4;
                (((struct o50_ushort *)(t1))->v) = 0x4;
                if ((int)(*(int *)(((*(int *)0xC3036E4) + 0x2C))) >= (int)0x10001) {
                    (((struct o3A_ushort *)((*(int *)0xC3036E4)))->v) = 0x1;
                    (((struct o0_uint *)0xC8B9688)->v) = 0x2;
                    (((struct o4_uint *)0xC8B9688)->v) = a4;
                    (((struct o8_uint *)0xC8B9688)->v) = a5;
                    (((struct oC_uint *)0xC8B9688)->v) = a6;
                    *(unsigned int *)((t1 + 0x4)) = 0xC8B9698;
                    (((struct o48_ushort *)(t1))->v) = 0x8;
                } else {
                    (((struct o48_ushort *)(t1))->v) = 0x6;
                }
                *(unsigned int *)(((*(int *)((t1 + 0x0))) + 0x1C)) = t1;
                t1 = ((int (*)(void))(((((struct o40_int *)((*(int *)(((*(int *)0xC3036E4) + 0xC)))))->v))))();
            }
            _builtin_set_imask(((unsigned int)(((t3 & 0xF) << 2) << 2) >> 4));
            t1 = 0x0;
            if (t4 == 0) {
                t1 = 0xFFFFFFF3;
            }
            t0 = t1;
        }
    }
    return t0;
}

int adxt_trap_entry(int a4, int a5, int a6, int a7)
{
    int stk[10];
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t9;
    register int t19;
    register int t28;
    register int t31;
    register int t34;

    t0 = *(int *)((a4 + 0x14));
    t1 = *(int *)((a4 + 0x4));
    t2 = FUN_0c2c390a(t1);
    t3 = FUN_0c2c3916(t1);
    *(unsigned int *)(((int)stk + 4)) = (FUN_0c2c3922(t1));
    ADXSJD_GetLpEndOfst(t1);
    t9 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((t0 + 0x0))) + 0x18)))))(t0, 0x1, ((((struct o50_int *)(a4))->v)), (((int)stk + 4) + 0x4), *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
    if ((int)(*(int *)(((int)stk + 12))) < (int)((((struct o50_int *)(a4))->v))) {
        *(int *)((int)stk + 0) = 0xC2FFDC0;
        FUN_0c2c30aa(0x0, 0x0, 0x0, 0x0, 0xC2FFDC0);
    }
    t19 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((t0 + 0x0))) + 0x20)))))(t0, 0x0, (((int)stk + 4) + 0x4), a7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
    ADXSJD_SetTrapCnt(t1, 0x0);
    ADXSJD_SetTrapNumSmpl(t1, ((*(int *)(((int)stk + 4))) - t2));
    ADXSJD_SetTrapDtLen(t1, t3);
    ADXSJD_SetDecPos(t1, t2);
    if ((*(signed char *)((a4 + 0x2))) == 2) {
        t28 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((t0 + 0x0))) + 0x14)))))(t0, a5, a6, a7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
        t31 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((t0 + 0x0))) + 0x18)))))(t0, 0x1, t3, (((int)stk + 4) + 0x4), *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
        t34 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((t0 + 0x0))) + 0x20)))))(t0, 0x0, (((int)stk + 4) + 0x4), a7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
    }
    (((struct o4C_uint *)(a4))->v) = (((((struct o4C_int *)(a4))->v)) + 0x1);
    return 0x4C;
}

int trigger(int a4, int a5)
{
    int stk[2];
    register int t2;
    register int t3;
    int t4;
    register int t6;
    register int t5;
    register int t15;
    int t16;

    *(unsigned char *)(((int)stk + 0)) = (*(signed char *)(((*(int *)0xC8D4D84) + 0xFB0)));
    t2 = 0xFB0;
    t3 = a4;
    t4 = a5;
    t6 = 0x0;
    for (;;) {
        if ((int)t6 >= (int)0x4) {
            t2 = 0x0;
            return t2;
        }
        if ((((int)0x1 << (int)t6) & (unsigned char)(*(signed char *)(((int)stk + 0)))) != 0) {
            t3 = 0xC2FFBA4;
            t3 = (t3 + t6);
            *(unsigned int *)(((int)stk + 4)) = t3;
            t3 = (*(signed char *)((t3 + 0x0)));
            t3 = (unsigned char)t3;
            t2 = (kdGetDevice(t3));
            t3 = (*(int *)(((int)stk + 4)));
            t5 = t2;
            t3 = (*(signed char *)((t3 + 0x0)));
            t3 = (unsigned char)t3;
            t2 = (FUN_0c2bca16(t3));
            t3 = t2;
            t2 = t6;
            *(unsigned char *)((0xC8C21C0 + t2)) = (*(signed char *)((0xC8C21C4 + t2)));
            if ((((*(int *)((t3 + 0x0))) & 0x80) != 0) && ((t15 = *(signed char *)((t5 + 0x2)), t2 = t15, t2 == 0) && (t16 = *(signed char *)((t5 + 0x4)), t2 = t16, t2 = (unsigned char)t2, t2 == 8))) {
                t3 = (*(int *)((t5 + 0x8)));
                t2 = (*(signed char *)((t3 + 0x8)));
                t2 = (t2 & 0x4);
                t3 = t2;
                t2 = t6;
                *(unsigned char *)((0xC8C21C4 + t2)) = t3;
                t4 = (*(signed char *)((0xC8C21C0 + t2)));
                t4 = (t4 ^ t3);
                t3 = (unsigned char)t3;
                if ((t3 == 0) && (t4 = (unsigned char)t4, t4 != 0)) {
                    break;
                }
                t6 = (t6 + 0x1);
                continue;
            }
            t6 = (t6 + 0x1);
            continue;
        }
        t6 = (t6 + 0x1);
    }
    return (t6 + 0x1);
}

int ADXT_StartMemIdx(int a4, int a5, int a6)
{
    register int t0;
    register int t1;

    ADXT_Stop(a4);
    t0 = *(int *)((a5 + 0x4));
    if (((int)a6 < (int)((((unsigned char)(signed char)((unsigned int)((unsigned int)t0 >> 16) >> 8) | (((int)t0 >> 8) & 0xFF00)) | ((t0 << 8) & 0xFF0000)) | ((t0 << 16) << 8))) && ((int)a6 >= 0)) {
        ADXCRS_Lock(t0);
        t0 = *(int *)((a5 + (((a6 + 0x1) << 1) << 2)));
        t1 = SJMEM_Create((((((unsigned char)(signed char)((unsigned int)((unsigned int)t0 >> 16) >> 8) | (((int)t0 >> 8) & 0xFF00)) | ((t0 << 8) & 0xFF0000)) | ((t0 << 16) << 8)) + a5), 0x40000000);
        if (t1 == 0) {
            ADXCRS_Unlock();
            FUN_0c2c30aa(0x0, 0x0, 0x0, 0x0, 0xC2FEED8);
        } else {
            adxt_start_sj(a4, t1);
            *(unsigned char *)((a4 + 0x2)) = 0x2;
        }
        return ADXCRS_Unlock();
    }
    return 0xFF00;
}

int kmiProcessVertex_16(int a4, int a5, int a6, int a7)
{
    int stk[28];

    *(unsigned int *)((((int)stk + 0) + 0x0)) = a5;
    *(unsigned int *)((((int)stk + 0) + 0x4)) = a6;
    *(unsigned int *)((((int)stk + 0) + 0x8)) = a7;
    *(unsigned int *)(((int)stk + 12)) = (*(int *)((a4 + 0x0)));
    *(unsigned int *)(((int)stk + 16)) = (*(int *)((a4 + 0x4)));
    *(unsigned int *)(((int)stk + 20)) = (*(int *)((a4 + 0x8)));
    *(unsigned int *)(((int)stk + 24)) = (*(int *)((a4 + 0xC)));
    *(float *)(((int)stk + 28)) = ((((struct o4_float *)((*(int *)((((int)stk + 0) + 0x0)))))->v));
    *(float *)(((int)stk + 32)) = ((((struct o8_float *)((*(int *)((((int)stk + 0) + 0x0)))))->v));
    *(float *)(((int)stk + 36)) = ((((struct oC_float *)((*(int *)((((int)stk + 0) + 0x0)))))->v));
    *(unsigned int *)(((int)stk + 40)) = (*(int *)(((*(int *)((((int)stk + 0) + 0x0))) + 0x34)));
    *(unsigned int *)(((int)stk + 48)) = ((((struct o0_int *)0xC8BFFE0)->v));
    *(unsigned int *)(((int)stk + 52)) = ((((struct o4_int *)0xC8BFFE0)->v));
    *(float *)(((int)stk + 56)) = ((((struct o10_float *)((*(int *)((((int)stk + 0) + 0x0)))))->v));
    *(float *)(((int)stk + 60)) = ((((struct o14_float *)((*(int *)((((int)stk + 0) + 0x0)))))->v));
    *(float *)(((int)stk + 64)) = ((((struct o18_float *)((*(int *)((((int)stk + 0) + 0x0)))))->v));
    *(unsigned int *)(((int)stk + 68)) = (*(int *)(((*(int *)((((int)stk + 0) + 0x0))) + 0x38)));
    *(unsigned int *)(((int)stk + 76)) = ((((struct o0_int *)0xC8BFFE0)->v));
    *(unsigned int *)(((int)stk + 80)) = ((((struct o4_int *)0xC8BFFE0)->v));
    *(float *)(((int)stk + 84)) = ((((struct o1C_float *)((*(int *)((((int)stk + 0) + 0x0)))))->v));
    *(float *)(((int)stk + 88)) = ((((struct o20_float *)((*(int *)((((int)stk + 0) + 0x0)))))->v));
    *(float *)(((int)stk + 92)) = ((((struct o24_float *)((*(int *)((((int)stk + 0) + 0x0)))))->v));
    *(unsigned int *)(((int)stk + 96)) = (*(int *)(((*(int *)((((int)stk + 0) + 0x0))) + 0x3C)));
    *(unsigned int *)(((int)stk + 104)) = ((((struct o0_int *)0xC8BFFE0)->v));
    *(unsigned int *)(((int)stk + 108)) = ((((struct o4_int *)0xC8BFFE0)->v));
    return (kmyRegisterBGPlane((((int)stk + 0) + 0xC)));
}

int kmiProcessVertex_02(int a4, int a5, int a6, int a7)
{
    int stk[30];
    register int t5;
    register int t6;
    register int t21;
    register int t23;

    *(unsigned int *)(((int)stk + 0)) = (((int)stk + 0) + 0x8);
    *(unsigned int *)(((((int)stk + 0) + 0x8) + 0x0)) = a5;
    *(unsigned int *)(((((int)stk + 0) + 0x8) + 0x4)) = a6;
    *(unsigned int *)(((((int)stk + 0) + 0x8) + 0x8)) = a7;
    *(unsigned int *)(((int)stk + 20)) = (*(int *)((a4 + 0x0)));
    *(unsigned int *)(((int)stk + 24)) = (*(int *)((a4 + 0x4)));
    *(unsigned int *)(((int)stk + 28)) = (*(int *)((a4 + 0x8)));
    *(unsigned int *)(((int)stk + 32)) = (*(int *)((a4 + 0xC)));
    t5 = (*(int *)(((int)stk + 0)));
    t6 = 0x0;
    for (;;) {
        *(float *)((((((int)stk + 0) + 0x24) + t6) + 0x0)) = ((((struct o4_float *)((*(int *)((t5 + 0x0)))))->v));
        (((struct o4_float *)(((((int)stk + 0) + 0x24) + t6)))->v) = ((((struct o8_float *)((*(int *)((t5 + 0x0)))))->v));
        (((struct o8_float *)(((((int)stk + 0) + 0x24) + t6)))->v) = ((((struct oC_float *)((*(int *)((t5 + 0x0)))))->v));
        *(unsigned char *)(((((int)stk + 0) + 0x4) + 0x3)) = (*(signed char *)0xC8BFFE3);
        *(unsigned char *)(((((int)stk + 0) + 0x4) + 0x2)) = (int)((float)(unsigned char)(*(signed char *)0xC8BFFE2) * ((((struct o18_float *)((*(int *)((t5 + 0x0)))))->v)));
        *(unsigned char *)(((((int)stk + 0) + 0x4) + 0x1)) = (int)((float)(unsigned char)(*(signed char *)0xC8BFFE1) * ((((struct o18_float *)((*(int *)((t5 + 0x0)))))->v)));
        t21 = *(int *)((t5 + 0x0));
        t5 = (t5 + 0x4);
        t23 = ((((int)stk + 0) + 0x24) + t6);
        t6 = (t6 + 0x1C);
        *(unsigned char *)(((((int)stk + 0) + 0x4) + 0x0)) = (int)((float)(unsigned char)(*(signed char *)0xC8BFFE0) * ((((struct o18_float *)(t21))->v)));
        *(unsigned int *)((t23 + 0x14)) = (*(int *)(((((int)stk + 0) + 0x4) + 0x0)));
        if ((unsigned int)t6 >= (unsigned int)0x54) {
            break;
        }
    }
    return (kmyRegisterBGPlane((((int)stk + 0) + 0x14)));
}

int kmiProcessVertex_10(int a4, int a5, int a6, int a7)
{
    int stk[30];
    register int t5;
    register int t6;
    register int t21;
    register int t23;

    *(unsigned int *)(((int)stk + 0)) = (((int)stk + 0) + 0x8);
    *(unsigned int *)(((((int)stk + 0) + 0x8) + 0x0)) = a5;
    *(unsigned int *)(((((int)stk + 0) + 0x8) + 0x4)) = a6;
    *(unsigned int *)(((((int)stk + 0) + 0x8) + 0x8)) = a7;
    *(unsigned int *)(((int)stk + 20)) = (*(int *)((a4 + 0x0)));
    *(unsigned int *)(((int)stk + 24)) = (*(int *)((a4 + 0x4)));
    *(unsigned int *)(((int)stk + 28)) = (*(int *)((a4 + 0x8)));
    *(unsigned int *)(((int)stk + 32)) = (*(int *)((a4 + 0xC)));
    t5 = (*(int *)(((int)stk + 0)));
    t6 = 0x0;
    for (;;) {
        *(float *)((((((int)stk + 0) + 0x24) + t6) + 0x0)) = ((((struct o4_float *)((*(int *)((t5 + 0x0)))))->v));
        (((struct o4_float *)(((((int)stk + 0) + 0x24) + t6)))->v) = ((((struct o8_float *)((*(int *)((t5 + 0x0)))))->v));
        (((struct o8_float *)(((((int)stk + 0) + 0x24) + t6)))->v) = ((((struct oC_float *)((*(int *)((t5 + 0x0)))))->v));
        *(unsigned char *)(((((int)stk + 0) + 0x4) + 0x3)) = (*(signed char *)0xC8BFFE3);
        *(unsigned char *)(((((int)stk + 0) + 0x4) + 0x2)) = (int)((float)(unsigned char)(*(signed char *)0xC8BFFE2) * ((((struct o10_float *)((*(int *)((t5 + 0x0)))))->v)));
        *(unsigned char *)(((((int)stk + 0) + 0x4) + 0x1)) = (int)((float)(unsigned char)(*(signed char *)0xC8BFFE1) * ((((struct o10_float *)((*(int *)((t5 + 0x0)))))->v)));
        t21 = *(int *)((t5 + 0x0));
        t5 = (t5 + 0x4);
        t23 = ((((int)stk + 0) + 0x24) + t6);
        t6 = (t6 + 0x1C);
        *(unsigned char *)(((((int)stk + 0) + 0x4) + 0x0)) = (int)((float)(unsigned char)(*(signed char *)0xC8BFFE0) * ((((struct o10_float *)(t21))->v)));
        *(unsigned int *)((t23 + 0x14)) = (*(int *)(((((int)stk + 0) + 0x4) + 0x0)));
        if ((unsigned int)t6 >= (unsigned int)0x54) {
            break;
        }
    }
    return (kmyRegisterBGPlane((((int)stk + 0) + 0x14)));
}

int gdFsDaPauseG(void)
{
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    t2 = gdFsReopenHn((*(int *)(((*(int *)0xC3036E4) + 0x14))), 0x0, 0x0, 0x0);
    t3 = 0xFFFFFFF3;
    if (t2 != 0) {
        t4 = _builtin_get_imask();
        _builtin_set_imask(0xF);
        t5 = ((int (*)(void))((*(int *)(((*(int *)(((*(int *)0xC3036E4) + 0xC))) + 0x30)))))();
        if (t5 != 0) {
            *(unsigned int *)((t2 + 0x3C)) = t5;
            (((struct o50_ushort *)(t2))->v) = 0x4;
            if ((((((struct o3A_short *)((*(int *)0xC3036E4)))->v)) != 0) && (t3 = *(int *)0xC3036E4, t1 = *(int *)((t3 + 0x2C)), (int)t1 >= (int)0x10001)) {
                *(unsigned int *)((t2 + 0x4)) = 0xC8B969C;
                (((struct o48_ushort *)(t2))->v) = 0x8;
            } else {
                (((struct o48_ushort *)(t2))->v) = 0x6;
            }
            *(unsigned int *)(((*(int *)((t2 + 0x0))) + 0x1C)) = t2;
            t3 = ((int (*)(void))(((((struct o40_int *)((*(int *)(((*(int *)0xC3036E4) + 0xC)))))->v))))();
        }
        _builtin_set_imask(((unsigned int)(((t4 & 0xF) << 2) << 2) >> 4));
        t3 = 0x0;
        if (t5 == 0) {
            t3 = 0xFFFFFFF3;
        }
    }
    return t3;
}

int FBSortQueue(int a4, int a5)
{
    int stk[1];
    register int t2;
    register int t3;
    register int t4;
    register int t6;
    register int t48;
    register int t22;
    register int t23;
    register int t24;
    register int t25;
    register int t26;
    register int t27;
    register int t36;
    register int t37;
    register int t29;
    register int t30;
    register int t31;
    register int t67;
    register int t41;
    register int t42;
    register int t45;

    if ((*(int *)((a4 + 0x0))) != 0) {
        t4 = *(int *)((a4 + 0x0));
        t2 = t4;
        t3 = 0x0;
        for (;;) {
            t6 = *(int *)((t4 + 0xC));
            if ((unsigned int)(*(int *)((t2 + 0xC))) > (unsigned int)t6) {
                t4 = t2;
            }
            t2 = (*(int *)((t2 + 0x8)));
            t3 = (t3 + 0x1);
            if (t2 == 0) {
                break;
            }
        }
        if ((int)t3 > (int)0x1) {
            t23 = *(int *)((a5 + 0x0));
            if (t23 != t4) {
                kmytex_FBDeQueueEntry(a4, a5, t4);
                t22 = (kmytex_FBEnQueueEntry(a5, t4, (*(int *)((a5 + 0x0)))));
            } else {
                t24 = 0x1;
                t25 = t6;
                t26 = a5;
            }
            *(unsigned int *)(((int)stk + 0)) = 0x0;
            t48 = t22;
            if ((int)(t3 - 2) > 0) {
                t27 = (t3 - 2);
                for (;;) {
                    t31 = *(int *)((a4 + 0x0));
                    t36 = t31;
                    t37 = t31;
                    if ((int)t27 > 0) {
                        t29 = 0x0;
                        t30 = t31;
                        for (;;) {
                            t31 = (*(int *)((t31 + 0x8)));
                            t25 = (*(int *)((t30 + 0xC)));
                            t24 = (*(int *)((t31 + 0xC)));
                            t29 = (t29 + 0x1);
                            if ((unsigned int)t24 > (unsigned int)t25) {
                                t30 = t31;
                            }
                            if ((int)t29 >= (int)t27) {
                                break;
                            }
                        }
                        t36 = t30;
                        t37 = t31;
                    }
                    if (t37 != t36) {
                        t25 = 0xC2E2FF0;
                        t26 = a5;
                        t22 = (kmytex_FBDeQueueEntry(a4, t26, t36));
                        t24 = 0xC2E2FD4;
                        t26 = t36;
                        t22 = (kmytex_FBEnQueueEntry(a5, t26, t37));
                    } else {
                        t41 = t23;
                        t42 = t24;
                        t45 = t26;
                    }
                    t23 = t41;
                    t24 = t42;
                    t25 = (*(int *)(((int)stk + 0)));
                    t26 = t45;
                    t27 = (t27 - 1);
                    t25 = (t25 + 0x1);
                    *(unsigned int *)(((int)stk + 0)) = t25;
                    if ((int)t25 >= (int)(t3 - 2)) {
                        break;
                    }
                }
                t48 = t22;
            }
            t67 = t48;
        }
    }
    return t67;
}

int kmiProcessVertex_15(int a4, int a5, int a6, int a7)
{
    int stk[28];

    *(unsigned int *)((((int)stk + 0) + 0x0)) = a5;
    *(unsigned int *)((((int)stk + 0) + 0x4)) = a6;
    *(unsigned int *)((((int)stk + 0) + 0x8)) = a7;
    *(unsigned int *)(((int)stk + 12)) = (*(int *)((a4 + 0x0)));
    *(unsigned int *)(((int)stk + 16)) = (*(int *)((a4 + 0x4)));
    *(unsigned int *)(((int)stk + 20)) = (*(int *)((a4 + 0x8)));
    *(unsigned int *)(((int)stk + 24)) = (*(int *)((a4 + 0xC)));
    *(float *)(((int)stk + 28)) = ((((struct o4_float *)((*(int *)((((int)stk + 0) + 0x0)))))->v));
    *(float *)(((int)stk + 32)) = ((((struct o8_float *)((*(int *)((((int)stk + 0) + 0x0)))))->v));
    *(float *)(((int)stk + 36)) = ((((struct oC_float *)((*(int *)((((int)stk + 0) + 0x0)))))->v));
    *(unsigned int *)(((int)stk + 48)) = ((((struct o0_int *)0xC8BFFE0)->v));
    *(unsigned int *)(((int)stk + 52)) = ((((struct o4_int *)0xC8BFFE0)->v));
    *(float *)(((int)stk + 56)) = ((((struct o10_float *)((*(int *)((((int)stk + 0) + 0x0)))))->v));
    *(float *)(((int)stk + 60)) = ((((struct o14_float *)((*(int *)((((int)stk + 0) + 0x0)))))->v));
    *(float *)(((int)stk + 64)) = ((((struct o18_float *)((*(int *)((((int)stk + 0) + 0x0)))))->v));
    *(unsigned int *)(((int)stk + 76)) = ((((struct o0_int *)0xC8BFFE0)->v));
    *(unsigned int *)(((int)stk + 80)) = ((((struct o4_int *)0xC8BFFE0)->v));
    *(float *)(((int)stk + 84)) = ((((struct o1C_float *)((*(int *)((((int)stk + 0) + 0x0)))))->v));
    *(float *)(((int)stk + 88)) = ((((struct o20_float *)((*(int *)((((int)stk + 0) + 0x0)))))->v));
    *(float *)(((int)stk + 92)) = ((((struct o24_float *)((*(int *)((((int)stk + 0) + 0x0)))))->v));
    *(unsigned int *)(((int)stk + 104)) = ((((struct o0_int *)0xC8BFFE0)->v));
    *(unsigned int *)(((int)stk + 108)) = ((((struct o4_int *)0xC8BFFE0)->v));
    return (kmyRegisterBGPlane((((int)stk + 0) + 0xC)));
}

int gdFsDaStopG(void)
{
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    t2 = gdFsReopenHn((*(int *)(((*(int *)0xC3036E4) + 0x14))), 0x0, 0x0, 0x0);
    t3 = 0xFFFFFFF3;
    if (t2 != 0) {
        t4 = _builtin_get_imask();
        _builtin_set_imask(0xF);
        t5 = ((int (*)(void))((*(int *)(((*(int *)(((*(int *)0xC3036E4) + 0xC))) + 0x30)))))();
        if (t5 != 0) {
            *(unsigned int *)((t2 + 0x3C)) = t5;
            (((struct o50_ushort *)(t2))->v) = 0x4;
            if ((((((struct o3A_short *)((*(int *)0xC3036E4)))->v)) != 0) && (t3 = *(int *)0xC3036E4, t1 = *(int *)((t3 + 0x2C)), (int)t1 >= (int)0x10001)) {
                *(unsigned int *)((t2 + 0x4)) = 0xC8B969C;
                (((struct o48_ushort *)(t2))->v) = 0x8;
            } else {
                (((struct o48_ushort *)(t2))->v) = 0x6;
            }
            *(unsigned int *)(((*(int *)((t2 + 0x0))) + 0x1C)) = t2;
            t3 = ((int (*)(void))(((((struct o40_int *)((*(int *)(((*(int *)0xC3036E4) + 0xC)))))->v))))();
        }
        _builtin_set_imask(((unsigned int)(((t4 & 0xF) << 2) << 2) >> 4));
        t3 = 0x0;
        if (t5 == 0) {
            t3 = 0xFFFFFFF3;
        }
    }
    return t3;
}

int mpdrv_exit(void)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = syTmrGetCount();
    for (;;) {
        if (((*(int *)((((((struct o10F4_int *)((*(int *)0xC8D4D84)))->v)) + 0x18))) & 0x1) == 0) {
            break;
        }
        t1 = syTmrGetCount();
        t2 = FUN_0c2bbe58(t0, t1);
        if ((int)t2 <= (int)0x186A0) continue;
        break;
    }
    *(unsigned int *)((((((struct o10F4_int *)((*(int *)0xC8D4D84)))->v)) + 0x18)) = 0x0;
    *(unsigned int *)((((((struct o10F4_int *)((*(int *)0xC8D4D84)))->v)) + 0x14)) = 0x0;
    *(unsigned int *)((((((struct o10F4_int *)((*(int *)0xC8D4D84)))->v)) + 0x10)) = 0x0;
    (((struct o8C_uint *)(((((struct o10F4_int *)((*(int *)0xC8D4D84)))->v))))->v) = 0x6155404F;
    (((struct o80_uint *)(((((struct o10F4_int *)((*(int *)0xC8D4D84)))->v))))->v) = 0xC3500000;
    *(unsigned int *)((((((struct o10F4_int *)((*(int *)0xC8D4D84)))->v)) + 0x4)) = 0xCFF0000;
    t0 = syTmrGetCount();
    for (;;) {
        if (((*(int *)((((((struct o10F4_int *)((*(int *)0xC8D4D84)))->v)) + 0x18))) & 0x1) == 0) {
            break;
        }
        t1 = syTmrGetCount();
        t2 = FUN_0c2bbe58(t0, t1);
        if ((int)t2 <= (int)0x4268) continue;
        break;
    }
    return 0x0;
}

int check_caps(int a4)
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
    int t9;
    register int t10;
    register int t11;

    t10 = *(int *)((a4 + 0x1C));
    t11 = *(int *)((t10 + 0x0));
    if (((int)t11 >= (int)0x1) && (((int)t11 <= (int)0x7FF) && ((t0 = *(int *)((t10 + 0x0)), t1 = *(int *)((t10 + 0x8)), t0 == t1) && ((t2 = *(int *)((t10 + 0xC)), (int)t2 >= 0) && ((t3 = *(int *)((t10 + 0x0)), (int)t2 < (int)t3) && ((t4 = *(int *)((t10 + 0x14)), (int)t4 >= 0) && ((t5 = *(int *)((t10 + 0x0)), (int)t4 < (int)t5) && ((t6 = *(int *)((t10 + 0x34)), (int)t6 >= 0) && ((t7 = *(int *)((t10 + 0x0)), (int)t6 <= (int)t7) && ((t8 = *(int *)((t10 + 0x38)), (int)t8 >= 0) && (t9 = *(int *)((t10 + 0x0)), (int)t8 <= (int)t9))))))))))) {
        if ((*(int *)(((*(int *)0xC8C4600) + 0x8))) == 0) {
            if ((int)(*(short *)((a4 + 0x10))) >= (int)(*(int *)((t10 + 0x10)))) {
                if ((int)(*(short *)((a4 + 0x12))) >= (int)(*(int *)((t10 + 0x18)))) {
                    t0 = *(int *)((t10 + 0x0));
                    if (t0 != 0xFF) {
                        if (t0 != 0x1FF) {
                            if (t0 != 0x3FF) {
                                if (t0 != 0x7FF) {
                                    return 0xFFFFFFFF;
                                }
                                *(unsigned int *)((a4 + 0x4)) = 0x3;
                                return 0x0;
                            }
                            *(unsigned int *)((a4 + 0x4)) = 0x2;
                            return 0x0;
                        }
                        *(unsigned int *)((a4 + 0x4)) = 0x1;
                        return 0x0;
                    }
                    *(unsigned int *)((a4 + 0x4)) = 0x0;
                    return 0x0;
                }
                return 0xFFFFFFFF;
            }
            return 0xFFFFFFFF;
        }
        t0 = *(int *)((t10 + 0x0));
        if (t0 != 0xFF) {
            if (t0 != 0x1FF) {
                if (t0 != 0x3FF) {
                    if (t0 != 0x7FF) {
                        return 0xFFFFFFFF;
                    }
                    *(unsigned int *)((a4 + 0x4)) = 0x3;
                    return 0x0;
                }
                *(unsigned int *)((a4 + 0x4)) = 0x2;
                return 0x0;
            }
            *(unsigned int *)((a4 + 0x4)) = 0x1;
            return 0x0;
        }
        *(unsigned int *)((a4 + 0x4)) = 0x0;
        return 0x0;
    }
    return 0xFFFFFFFF;
}

int gdFsReqDrvStatG(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = gdFsReopenHn((*(int *)(((*(int *)0xC3036E4) + 0x14))), 0x0, 0x0, 0x0);
    t1 = 0xFFFFFFF3;
    if (t0 != 0) {
        t2 = _builtin_get_imask();
        _builtin_set_imask(0xF);
        t3 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)(((*(int *)0xC3036E4) + 0xC))) + 0x3C)))))(0x1, 0xE, ((*(int *)0xC3036E4) + 0x40), a7);
        if (t3 != 0) {
            *(unsigned int *)((t0 + 0x3C)) = t3;
            (((struct o50_ushort *)(t0))->v) = 0x4;
            (((struct o48_ushort *)(t0))->v) = 0xA;
            *(unsigned int *)(((*(int *)((t0 + 0x0))) + 0x1C)) = t0;
            t0 = ((int (*)(void))(((((struct o40_int *)((*(int *)(((*(int *)0xC3036E4) + 0xC)))))->v))))();
        }
        _builtin_set_imask(((unsigned int)(((t2 & 0xF) << 2) << 2) >> 4));
        t0 = 0x0;
        if (t3 == 0) {
            t0 = 0xFFFFFFF3;
        }
        t1 = t0;
    }
    return t1;
}

int mwlSbTrnsEx(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(int *)((a4 + 0x10));
    t1 = (a6 * t0);
    if ((int)(a6 * t0) < 0) {
        t1 = ((a6 * t0) + 0x7);
    }
    t0 = FUN_0c181ade((*(int *)((((a4 + 0x2C) + (a5 << 2)) + 0x0))), a7, ((((t1 >> 1) >> 1) >> 1) + (*(int *)((((a5 << 2) + (a4 + 0x20)) + 0x0)))), 0x20);
    if ((int)t0 < 0) {
        if (t0 == -1) {
            return (FUN_0c2dc1ae(t0, 0x0, 0x0, 0x0, 0xC300CE0));
        }
        if (t0 == -2) {
            return (FUN_0c2dc1ae(t0, 0x0, 0x0, 0x0, 0xC300D10));
        }
        if (t0 == -3) {
            return (FUN_0c2dc1ae(t0, 0x0, 0x0, 0x0, 0xC300D50));
        }
        t1 = t0;
        if (t0 == -4) {
            t1 = (FUN_0c2dc1ae(t0, 0x0, 0x0, 0x0, 0xC300D90));
        }
        return t1;
    }
    return t0;
}

int syTmrInt1SetEx(int a4, int a5, int a6, int a7)
{
    register int t19;

    t19 = 0xFFFFFFFF;
    if (((*(signed char *)0xFFD80004) & 2) == 0) {
        (((struct o0_uchar *)0xFFD80000)->v) = 0x0;
        (((struct o4_uchar *)0xFFD80000)->v) = ((*(signed char *)0xFFD80004) & 0xFD);
        (((struct o1C_ushort *)0xFFD80000)->v) = a7;
        if (a5 != 0) {
            (((struct o244_uint *)(((int)_builtin_get_vbr())))->v) = 0xC2BBF84;
            (((struct o0_uint *)0xC8C1BE8)->v) = a5;
            (((struct o4_uint *)0xC8C1BE8)->v) = a6;
            (((struct o1C_ushort *)0xFFD80000)->v) = (((((struct o1C_short *)0xFFD80000)->v)) | 0x20);
            *(unsigned short *)0xFFD00004 = (((*(short *)0xFFD00004) & 0xFFFFF0FF) | 0xF00);
            (((struct o1C_ushort *)0xFFD80000)->v) = (((((struct o1C_short *)0xFFD80000)->v)) & 0xFFFFFEFF);
        }
        (((struct o14_uint *)0xFFD80000)->v) = a4;
        (((struct o18_uint *)0xFFD80000)->v) = a4;
        (((struct o4_uchar *)0xFFD80000)->v) = ((*(signed char *)0xFFD80004) | 0x2);
        if (a5 == 0) {
            for (;;) {
                if ((((((struct o1C_short *)0xFFD80000)->v)) & 0x100) != 0) {
                    break;
                }
            }
            (((struct o4_uchar *)0xFFD80000)->v) = ((*(signed char *)0xFFD80004) & 0xFD);
            (((struct o1C_ushort *)0xFFD80000)->v) = (((((struct o1C_short *)0xFFD80000)->v)) & 0xFFFFFEFF);
        }
        t19 = 0x0;
    }
    return t19;
}
