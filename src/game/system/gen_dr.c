/* Straight-line functions with calls and guards (batch gen_dr): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10C0_int { char p[0x10C0]; int v; };
struct o10C4_int { char p[0x10C4]; int v; };
struct o10C8_int { char p[0x10C8]; int v; };
struct o18_int { char p[0x18]; int v; };
struct o248_uint { char p[0x248]; unsigned int v; };
struct o28_short { char p[0x28]; short v; };
struct o28_ushort { char p[0x28]; unsigned short v; };
struct o2C_int { char p[0x2C]; int v; };
struct o3C_int { char p[0x3C]; int v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_int { char p[0x40]; int v; };
struct o44_int { char p[0x44]; int v; };
struct o48_int { char p[0x48]; int v; };
struct o48_ushort { char p[0x48]; unsigned short v; };
struct o50_ushort { char p[0x50]; unsigned short v; };
struct o60_int { char p[0x60]; int v; };
struct o60_uint { char p[0x60]; unsigned int v; };
struct o64_uint { char p[0x64]; unsigned int v; };
struct o74_uint { char p[0x74]; unsigned int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_uint { char p[0x84]; unsigned int v; };
struct oFCC_int { char p[0xFCC]; int v; };
int ADXCRS_Lock(int, int);
int ADXCRS_Unlock(void);
int ADXSJD_ExecHndl(int);
int FUN_0c0613c4(int);
int FUN_0c061400(int);
int FUN_0c17a550(int);
int FUN_0c181308(int, int);
int FUN_0c1814e4(int);
int FUN_0c18156a(int);
int FUN_0c187a88(int, int, int);
int FUN_0c2bad7a(int, int);
int FUN_0c2bb00c(void);
int FUN_0c2bbe58(int, int);
int FUN_0c2c20d8(int, int, int);
int FUN_0c2c30aa(int, int, int, int, int);
int FUN_0c2db8e0(int, int, int);
int FUN_0c2dc1ae(int, int, int, int, int);
extern int _builtin_get_imask(void);
extern void _builtin_ld_ext(float (*)[4]);
extern void _builtin_set_imask(int);
extern void _builtin_st_ext(float (*)[4]);
int adxf_ExecOne(int);
int dbg_printf(int, ...);
int dbg_set_cell_size(int, int);
int direntry(int, int);
int gdFsGetLE4(int);
int gdFsGetStatG(void);
int gdFsGetTokenSize(int, int, int);
int gdFsMemcpy(int, int, int);
int gdFsRead(int, int, int);
int gdFsReopenHn(int, int, int, int);
int gdFsStopRd(int);
int gdFsStrncmpi(int, int, int);
int gdFsWaitCompleteReq(int);
int get_fat(int, int);
int kmyContinueTA(int);
extern int kmyQueryFinishDMA();
int kmyRequestCallback(int);
int kmySetupTA(int);
int memset(int, int, int);
int mwlSbFreeWork(int);
int nlLocate(int, int);
int nlMultiPushedMatrix(void);
int nlPushMatrix(int);
int nlsndG2DmaHandleClose(int);
int nlsndStreamGetHdInfo(int, int);
int search_dir(int, int, int);
int syRtcCountToDate(int, int);
int syRtcGetCountForce(void);
int syRtcMakeAgeOfMoon(void);
int syRtcMakeDayOfWeek(int, int, int);
int syTmrGetCount(void);
int vsprintf(int, int, int);
int gdFsSearchPath(int a4, int a5, int a6, int a7);
int FUN_0c0612f4(int a4, int a5, int a6, int a7);
int kmiFLWCTRLStartPass(int a4, int a5, int a6, int a7);
int mwSbClosePort(int a4);
int gdFsDaGetInfoG(int a4, int a5, int a6, int a7);
int check_file_correct(int a4, int a5);
int gdFsGetTocG(int a4, int a5, int a6, int a7);
int syTmrGenSetInt(int a4, int a5);
int FUN_0c02cade(void);
int mwRnaSetPitch(int a4, int a5, int a6, int a7);
int make_header(int a4, int a5);
int mwRnaSetOutVol(int a4, int a5, int a6, int a7);
int mwlSbSetDrctLvl(int a4, int a5);
int nlSetIntrPriority(int a4, int a5);
int FUN_0c1059ac(int a4, int a5, int a6);
int mwRnaSetDrctLvl(int a4, int a5, int a6, int a7);
int syRtcGetDate(int a4);
int mwRnaSetFilter(int a4, int a5, int a6, int a7);
int mpdrv_dpf(int a4, int a5, int a6, int a7, int a8, int a9, int a10);
int ADXSTM_Stop(int a4);
int kmytex_FBFreeEntry(int a4);
int gdFsReadWG(int a4, int a5, int a6);
int kmytex_VQFreeEntry(int a4);
int kmyiCheckNativeHandle(int a4);
int kmyReleaseFrameBufferHandle(int a4, int a5, int a6, int a7);
int nlStoreMatrix(int a4);
int syBtExit(int a4, int a5, int a6, int a7);
int ADXF_GetNumReqSct(int a4, int a5, int a6, int a7);
int ADXF_ExecServer(int a4, int a5);
int ADXSJD_ExecServer(void);
int nlStoreMatrix8(int a4);
void nlLoadMatrix8(int a4);
int gdFsGetDrvStatG(int a4, int a5, int a6, int a7);
int nl_texture_slot_free(int a4, int a5);
int gdFsExecServerG(void);
int mwRnaGetNumRoom(int a4, int a5, int a6, int a7);
int kmyiCheckRenderPacket(int a4);
int mwRnaGetStat(int a4, int a5, int a6, int a7);
int mwRnaGetOutVol(int a4, int a5, int a6, int a7);
int mwRnaIsPause(int a4, int a5, int a6, int a7);
int ADXF_Tell(int a4, int a5, int a6, int a7);
int ADXF_GetFsizeSct(int a4, int a5, int a6, int a7);
int ADXF_GetFsizeByte(int a4, int a5, int a6, int a7);
int ADXF_GetNumReadSct(int a4, int a5, int a6, int a7);
int ADXF_GetStat(int a4, int a5, int a6, int a7);
int mpdrv_set_end_ns(void);
int syBtCheckDisc(int a4, int a5, int a6, int a7);
int mpdrv_get_timeout(void);
int FUN_0c0d5188(void);
int nlPushMultiViewMatrix(void);
int kmyiCheckTAHandle(int a4);
int gdFsGetGlobalErrG(void);
int gdFsGetWorkHnG(void);
int gdFsGetSysHnG(void);

int gdFsSearchPath(int a4, int a5, int a6, int a7)
{
    int stk[6];

    register int R1;
    register int R2;
    register int R3;
    int R8;
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
    v0_1 = a5;
    v0_0 = a6;
    v0_3 = a7;
    *(unsigned int *)(((int)stk + 8)) = v0_1;
    *(unsigned int *)(((int)stk + 16)) = v0_0;
    *(unsigned int *)(((int)stk + 20)) = 0x1;
    *(unsigned int *)(((int)stk + 12)) = 0x0;
    *(unsigned int *)(((int)stk + 0)) = (0x800 + v0_6);
    v0_5 = v0_6;
    v0_1 = (0x0);
    v0_2 = (0x1);
    v0_3 = ((v0_3 + 0x1));
    v0_4 = ((0x800 + v0_6));
    v0_6 = (0x0);
    R8 = (0x1);
    v0_5 = v0_5;
    L_C2BA61C:;
    v0_6 = (v0_4);
    if (((unsigned int)v0_4 >= (unsigned int)(*(int *)(((int)stk + 0))))) goto L_C2BA63A;
    if (((unsigned int)((((unsigned char)(*(signed char *)((v0_6 + 0x0))) + ((unsigned char)(*(signed char *)((v0_6 + 0x0))) & 0x1)) + 0x8) + v0_4) < (unsigned int)(*(int *)(((int)stk + 0))))) goto L_C2BA664;
    L_C2BA63A:;
    gdFsMemcpy(v0_4, (v0_5 - ((v0_5 - v0_4) + 0x800)), ((v0_5 - v0_4) + 0x800));
    v0_7 = (gdFsReadWG((*(int *)(((int)stk + 8))), 0x1, v0_5)) != 0;
    v0_6 = ((v0_5 - ((v0_5 - v0_4) + 0x800)));
    if (v0_7) goto L_C2BA6D8;
    *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) + 0x1);
    v0_4 = (v0_6);
    L_C2BA664:;
    gdFsMemcpy((v0_6 + 0x6), (((int)stk + 0) + 0x4), 0x2);
    if (((unsigned short)(*(short *)(((int)stk + 4))) != (*(int *)(((int)stk + 20))))) goto L_C2BA6BC;
    if ((v0_2 == 1)) goto L_C2BA696;
    if (((unsigned char)(*(signed char *)((v0_6 + 0x0))) != v0_1)) goto L_C2BA6BC;
    v0_7 = (gdFsStrncmpi((v0_6 + 0x8), v0_3, v0_1)) == 0;
    if (v0_7) goto L_C2BA6BC;
    L_C2BA696:;
    *(unsigned int *)(((int)stk + 20)) = v0_2;
    v0_7 = (*(signed char *)(((v0_3 + v0_1) + 0x0))) != 0;
    v0_3 = ((v0_3 + v0_1));
    if (v0_7) goto L_C2BA6AC;
    v0_0 = ((gdFsGetLE4((v0_6 + 0x2))));
    L_C2BA6DA:;
    return v0_0;
    L_C2BA6AC:;
    if ((v0_2 == 1)) goto L_C2BA6B4;
    v0_3 = ((v0_3 + 0x1));
    L_C2BA6B4:;
    v0_1 = ((gdFsGetTokenSize(v0_3, 0xC2FFA84, v0_0)));
    L_C2BA6BC:;
    v0_7 = *(signed char *)((v0_6 + 0x0));
    v0_8 = *(int *)(((int)stk + 12));
    *(unsigned int *)(((int)stk + 12)) = (v0_8 + ((((unsigned char)v0_7 & R8) + (unsigned char)v0_7) + 0x8));
    v0_2 = ((v0_2 + 0x1));
    v0_4 = ((v0_4 + ((((unsigned char)v0_7 & R8) + (unsigned char)v0_7) + 0x8)));
    v0_6 = ((unsigned char)v0_7);
    if (((int)(v0_8 + ((((unsigned char)v0_7 & R8) + (unsigned char)v0_7) + 0x8)) < (int)(*(int *)(((int)stk + 16))))) goto L_C2BA61C;
    L_C2BA6D8:;
    v0_0 = (0x0);
    goto L_C2BA6DA;
}

int FUN_0c0612f4(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;

    if ((*(short *)((a4 + 0x0))) != 0) {
        t0 = a4;
        t1 = a5;
        t2 = (a4 + 0x2);
        t3 = 0x0;
        t4 = 0x0;
        t5 = a5;
        t6 = (a4 + 0x2);
        for (;;) {
            if ((int)t4 >= (int)(a6 - 1)) {
                return t3;
            }
            t7 = *(short *)((t6 + 0x0));
            if (((unsigned short)t7 & 0xF000) != 0) {
                if (((unsigned short)t7 & 0xF000) != 0x1000) {
                    break;
                }
                t0 = t6;
                t0 = (FUN_0c061400(t0));
                t1 = 0x0;
                t2 = 0x0;
                t6 = (t6 + 0x4);
                t4 = (t4 + 0x2);
                t3 = (t3 + t0);
                t2 = (t2 + 0xC3C7E10);
                if ((int)t0 > 0) {
                    for (;;) {
                        t7 = *(short *)((t2 + 0x0));
                        t2 = (t2 + 0x2);
                        t1 = (t1 + 0x1);
                        *(unsigned short *)((t5 + 0x0)) = t7;
                        t5 = (t5 + 0x2);
                        if ((int)t1 >= (int)t0) {
                            break;
                        }
                    }
                }
                continue;
            }
            t0 = t6;
            t7 = FUN_0c0613c4(t0);
            t1 = t7;
            t1 = (t1 + 0x1);
            t4 = (t4 + t1);
            t0 = t7;
            t2 = 0x0;
            t7 = (t1 << 1);
            t1 = 0x0;
            t6 = (t6 + t7);
            t3 = (t3 + t0);
            t2 = (t2 + 0xC3C7E10);
            if ((int)t0 > 0) {
                for (;;) {
                    t7 = (*(short *)((t2 + 0x0)));
                    t2 = (t2 + 0x2);
                    t1 = (t1 + 0x1);
                    *(unsigned short *)((t5 + 0x0)) = t7;
                    t5 = (t5 + 0x2);
                    if ((int)t1 >= (int)t0) {
                        break;
                    }
                }
            }
        }
        t0 = 0xFFFFFFFF;
    } else {
        if ((int)(a6 - 1) > 0) {
            t1 = 0x0;
            t2 = a5;
            t3 = (a4 + 0x2);
            for (;;) {
                t4 = *(short *)((t3 + 0x0));
                t3 = (t3 + 0x2);
                t1 = (t1 + 0x1);
                *(unsigned short *)((t2 + 0x0)) = t4;
                t2 = (t2 + 0x2);
                if ((int)t1 >= (int)(a6 - 1)) {
                    break;
                }
            }
        }
        t0 = (a6 - 1);
    }
    return t0;
}

int kmiFLWCTRLStartPass(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    if (((((struct o0_int *)0xC8BFF68)->v)) == 0) {
        return 0x0;
    }
    t0 = (((struct o2C_int *)0xC8BFF68)->v);
    t1 = *(int *)(((*(int *)((a4 + 0x8))) + 0x10));
    t2 = ((int (*)(int, int, int, int))(kmyQueryFinishDMA))((*(int *)0xC8BFFBC), a5, a6, a7);
    if (t2 != 0x101) {
        for (;;) {
            kmyRequestCallback(0x7);
            t2 = ((int (*)(int))(kmyQueryFinishDMA))((*(int *)0xC8BFFBC));
            if (t2 == 0x101) {
                break;
            }
        }
    }
    if (t1 == 0) {
        return kmySetupTA((*(int *)((t0 + 0x3C))));
    }
    return kmyContinueTA((*(int *)((t0 + 0x3C))));
}

int mwSbClosePort(int a4)
{
    register int t0;
    register int t1;

    if (a4 != 0) {
        if ((*(int *)((a4 + 0x18))) != 0) {
            t0 = (FUN_0c18156a((*(short *)((a4 + 0x6)))));
        }
        t1 = t0;
        t0 = 0x0;
        for (;;) {
            if ((int)t0 >= (int)(*(int *)((a4 + 0x8)))) {
                break;
            }
            t1 = (nlsndG2DmaHandleClose((*(int *)((((t0 << 2) + (a4 + 0x2C)) + 0x0)))));
            if ((int)t1 < 0) {
                t1 = (FUN_0c2dc1ae(0x0, 0x0, 0x0, 0x0, 0xC300C6C));
            }
            t0 = (t0 + 0x1);
        }
        t0 = t1;
        t1 = 0x0;
        for (;;) {
            if ((int)t1 >= (int)(*(int *)((a4 + 0x8)))) {
                break;
            }
            t0 = (nlsndG2DmaHandleClose((*(int *)((((t1 << 2) + (a4 + 0x34)) + 0x0)))));
            if ((int)t0 < 0) {
                t0 = (FUN_0c2dc1ae(0x0, 0x0, 0x0, 0x0, 0xC300C6C));
            }
            t1 = (t1 + 0x1);
        }
        FUN_0c1814e4((*(short *)((a4 + 0x6))));
        mwlSbFreeWork((*(int *)((a4 + 0x1C))));
        *(unsigned int *)((a4 + 0x8)) = 0x0;
        *(unsigned int *)((a4 + 0xC)) = 0x0;
        memset(a4, 0x0, 0x68);
        *(unsigned char *)((a4 + 0x4)) = 0x0;
        t0 = 0x0;
    }
    return t0;
}

int gdFsDaGetInfoG(int a4, int a5, int a6, int a7)
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
        t3 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)(((*(int *)0xC3036E4) + 0xC))) + 0x3C)))))(0x0, 0x64, ((*(int *)0xC3036E4) + 0x40), a7);
        if (t3 != 0) {
            *(unsigned int *)((t0 + 0x3C)) = t3;
            (((struct o50_ushort *)(t0))->v) = 0x4;
            (((struct o48_ushort *)(t0))->v) = 0x7;
            *(unsigned int *)((t0 + 0x8)) = a4;
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

int check_file_correct(int a4, int a5)
{
    int stk[11];
    register int t0;
    register int t20;
    register int t5;
    register int t6;
    register int t8;
    int t12;
    register int t13;

    t0 = search_dir(a4, a5, ((int)stk + 0));
    t20 = 0xFFFFFF05;
    if ((int)t0 >= 0) {
        direntry(a4, t0);
        t5 = *(int *)(((int)stk + 12));
        if ((int)t5 < (int)(*(int *)(((*(int *)((((a4 * 0x148) + 0xC8C4604) + 0x1C))) + 0x30)))) {
            t6 = 0x0;
            for (;;) {
                if ((int)t6 >= (int)(*(int *)(((int)stk + 40)))) {
                    return 0x0;
                }
                t8 = get_fat(a4, t5);
                if (t6 == ((*(int *)(((int)stk + 40))) - 1)) {
                    if ((unsigned short)t8 != 0xFFFA) {
                        break;
                    }
                    t6 = (t6 + 0x1);
                    t5 = (unsigned short)t8;
                    continue;
                }
                if (((unsigned short)t8 != t5) && (((unsigned short)t8 != 0xFFFA) && (((unsigned short)t8 != 0xFFFC) && (((unsigned short)t8 != 0xFFFF) && (t12 = *(int *)((((a4 * 0x148) + 0xC8C4604) + 0x1C)), t13 = *(int *)((t12 + 0x30)), (int)(unsigned short)t8 < (int)t13))))) {
                    t6 = (t6 + 0x1);
                    t5 = (unsigned short)t8;
                    continue;
                }
                return 0xFFFFFF41;
            }
        }
        t20 = 0xFFFFFF41;
    }
    return t20;
}

int gdFsGetTocG(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = gdFsReopenHn((*(int *)(((*(int *)0xC3036E4) + 0x14))), 0x0, 0x0, 0x0);
    if (t0 == 0) {
        return 0xFFFFFFF3;
    }
    t1 = _builtin_get_imask();
    _builtin_set_imask(0xF);
    t2 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)(((*(int *)0xC3036E4) + 0xC))) + 0x38)))))(a4, a5, a6, a7);
    if (t2 != 0) {
        *(unsigned int *)((t0 + 0x3C)) = t2;
        (((struct o50_ushort *)(t0))->v) = 0x4;
        *(unsigned int *)(((*(int *)((t0 + 0x0))) + 0x1C)) = t0;
    }
    _builtin_set_imask(((unsigned int)(((t1 & 0xF) << 2) << 2) >> 4));
    t1 = 0xFFFFFFF3;
    if (t2 == 0) {
    } else {
        t1 = (gdFsWaitCompleteReq(t0));
    }
    return t1;
}

int syTmrGenSetInt(int a4, int a5)
{
    int stk[1];
    register int t1;
    register int t5;
    register int t17;
    register int t15;

    *(unsigned char *)(((int)stk + 0)) = (*(signed char *)0xFFD80004);
    t1 = *(signed char *)0xFFD80004;
    (((struct o4_uchar *)0xFFD80000)->v) = (t1 & 0xFB);
    t17 = (t1 & 0xFB);
    if (a4 != 0) {
        (((struct o248_uint *)(((int)_builtin_get_vbr())))->v) = 0xC2BBFA8;
        (((struct o0_uint *)0xC8C1BF0)->v) = a4;
        (((struct o4_uint *)0xC8C1BF0)->v) = a5;
        (((struct o28_ushort *)0xFFD80000)->v) = (((((struct o28_short *)0xFFD80000)->v)) | 0x20);
        *(unsigned short *)0xFFD00004 = (((*(short *)0xFFD00004) & 0xFFFFFF0F) | 0xF0);
        t5 = (((struct o28_short *)0xFFD80000)->v);
        (((struct o28_ushort *)0xFFD80000)->v) = (t5 & 0xFFFFFEFF);
        t17 = (t5 & 0xFFFFFEFF);
    }
    (((struct o4_uchar *)0xFFD80000)->v) = (*(signed char *)(((int)stk + 0)));
    if (a4 == 0) {
        (((struct o0_uchar *)0xFFD80000)->v) = 0x0;
        (((struct o4_uchar *)0xFFD80000)->v) = ((*(signed char *)0xFFD80004) | 0x4);
        for (;;) {
            if ((((((struct o28_short *)0xFFD80000)->v)) & 0x100) != 0) {
                break;
            }
        }
        t15 = *(signed char *)0xFFD80004;
        (((struct o4_uchar *)0xFFD80000)->v) = (t15 & 0xFB);
        (((struct o28_ushort *)0xFFD80000)->v) = (((((struct o28_short *)0xFFD80000)->v)) & 0xFFFFFEFF);
        t17 = (t15 & 0xFB);
    }
    return t17;
}

int FUN_0c02cade(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = *(int *)0xC4788A0;
    FUN_0c17a550(0xFFFFFFFF);
    t1 = *(signed char *)0xC4788A4;
    t2 = (dbg_set_cell_size(0x8, 0x8));
    if (t1 != 0) {
        t1 = 0x28;
        t3 = t0;
        for (;;) {
            t3 = (t3 - 1);
            if ((int)t3 < 0) {
                t3 = 0x27;
            }
            nlLocate(0x28, t1);
            t0 = dbg_printf(0xC1C4254, ((t3 << 8) + 0xC4760A0));
            t1 = (t1 - 1);
            if ((int)t1 <= 0) {
                break;
            }
        }
        t2 = t0;
    }
    return t2;
}

int mwRnaSetPitch(int a4, int a5, int a6, int a7)
{
    int stk[8];
    register int t1;
    register int t6;
    register int t7;
    register int t10;

    *(unsigned int *)(((int)stk + 16)) = a5;
    *(unsigned int *)(((int)stk + 20)) = a6;
    if (a4 == 0) {
        *(int *)((int)stk + 0) = 0xC2FFEE8;
        return (FUN_0c2dc1ae(a4, a5, a6, a7, 0xC2FFEE8));
    }
    t1 = *(int *)((a4 + 0x38));
    *(unsigned int *)(((int)stk + 12)) = t1;
    t6 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))(((((struct o44_int *)((*(int *)((t1 + 0x0)))))->v))))(t1, 0x1, (*(int *)(((int)stk + 16))), (*(int *)(((int)stk + 20))), *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
    t7 = *(int *)((a4 + 0x38));
    *(unsigned int *)(((int)stk + 12)) = t7;
    t10 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))(((((struct o48_int *)((*(int *)((t7 + 0x0)))))->v))))(t7, 0x1, ((int)stk + 4), (((int)stk + 4) + 0x4), *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
    (((struct o74_uint *)(a4))->v) = (*(int *)(((int)stk + 4)));
    (((struct o78_uint *)(a4))->v) = (*(int *)(((int)stk + 8)));
    return 0x78;
}

int make_header(int a4, int a5)
{
    int stk[1];
    register int t13;

    *(unsigned int *)(((int)stk + 0)) = (*(int *)((a5 + 0x0)));
    if (((((struct o10C4_int *)((*(int *)0xC8D4D84)))->v)) == 1) {
        *(unsigned char *)((a4 + 0xB)) = (*(signed char *)((((int)stk + 0) + 0x0)));
        *(unsigned char *)((a4 + 0xA)) = (*(signed char *)(((((int)stk + 0) + 0x1) + 0x0)));
        *(unsigned char *)((a4 + 0x9)) = (*(signed char *)((((((int)stk + 0) + 0x1) + 0x1) + 0x0)));
        *(unsigned char *)((a4 + 0x8)) = (*(signed char *)(((((((int)stk + 0) + 0x1) + 0x1) + 0x1) + 0x0)));
    } else {
        *(unsigned char *)((a4 + 0x8)) = (*(signed char *)((((int)stk + 0) + 0x0)));
        *(unsigned char *)((a4 + 0x9)) = (*(signed char *)(((((int)stk + 0) + 0x1) + 0x0)));
        *(unsigned char *)((a4 + 0xA)) = (*(signed char *)((((((int)stk + 0) + 0x1) + 0x1) + 0x0)));
        *(unsigned char *)((a4 + 0xB)) = (*(signed char *)(((((((int)stk + 0) + 0x1) + 0x1) + 0x1) + 0x0)));
    }
    t13 = *(signed char *)((a4 + 0x8));
    if ((unsigned char)t13 == 0xFF) {
        *(unsigned int *)((a4 + 0x14)) = 0xFFFFFFFF;
    } else {
        if ((int)(unsigned char)t13 < (int)0xE0) {
            *(unsigned int *)((a4 + 0x14)) = 0x0;
        } else {
            *(unsigned int *)((a4 + 0x14)) = (*(int *)(((a5 + 0x4) + 0x0)));
        }
    }
    return 0x0;
}

int mwRnaSetOutVol(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    if (a4 == 0) {
        t0 = (FUN_0c2dc1ae(a4, a5, a6, a7, 0xC2FFEE8));
    } else {
        t1 = 0x0;
        if ((int)a5 >= 0) {
        } else {
            t2 = a5;
            if ((int)a5 <= (int)0xFFFFFC19) {
                t2 = 0xFFFFFC19;
            }
            t1 = t2;
        }
        t2 = *(int *)((a4 + 0x38));
        t3 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)((t2 + 0x0))) + 0x34)))))(t2, t1, a6, a7);
        (((struct o60_uint *)(a4))->v) = t1;
        t0 = 0x60;
    }
    return t0;
}

int mwlSbSetDrctLvl(int a4, int a5)
{
    int stk[3];
    register int t14;
    register int t1;

    *(unsigned int *)(((int)stk + 8)) = a5;
    t14 = 0x0;
    if (a5 == 0) {
    } else {
        t1 = nlsndStreamGetHdInfo((*(int *)(((int)stk + 8))), ((int)stk + 4));
        if (t1 == 0) {
            *(int *)((int)stk + 0) = 0xC300CA0;
            FUN_0c2dc1ae(0x0, 0x0, 0x0, 0x0, 0xC300CA0);
        }
        FUN_0c187a88((*(int *)(((*(int *)((a4 + 0x1C))) + 0x4))), t1, (*(int *)(((int)stk + 4))));
        FUN_0c181308((*(short *)((a4 + 0x6))), (*(int *)(((*(int *)((a4 + 0x1C))) + 0x4))));
        (((struct o64_uint *)(a4))->v) = (*(int *)(((int)stk + 4)));
        t14 = 0x1;
    }
    *(unsigned char *)((a4 + 0x5)) = t14;
    return t14;
}

int nlSetIntrPriority(int a4, int a5)
{
    register int t5;
    register int t1;

    if (((int)a4 <= (int)0xC) && (((int)a5 >= 0) && ((int)a5 <= (int)0xF))) {
        t5 = _builtin_get_cr();
        _builtin_set_cr((_builtin_get_cr() & 0xFFFFFFFF) | 0x10000000);
        t1 = *(signed char *)((((a4 << 2) + 0xC2A61A0) + 0x0));
        *(unsigned short *)(((0xFFD00004 + t1) + 0x0)) = (((~(*(short *)((((a4 << 2) + 0xC2A61A0) + 0x2)))) & (*(short *)(((0xFFD00004 + t1) + 0x0)))) | ((int)a5 << (int)(*(signed char *)((((a4 << 2) + 0xC2A61A0) + 0x1)))));
        *(volatile short *)(((0xFFD00004 + t1) + 0x0));
        _builtin_set_cr((t5 & 0xFFFFFFFF));
        return 0x1;
    }
    return 0x0;
}

int FUN_0c1059ac(int a4, int a5, int a6)
{
    int stk[2];
    register int t1;
    register int t2;
    register int t3;

    *(unsigned int *)(((int)stk + 0)) = (FUN_0c2c20d8(a4, a5, a6));
    t1 = FUN_0c2db8e0(0x1A05E, (((int)stk + 0) + 0x4), 0x2);
    if ((t1 == 0) && ((t2 = *(signed char *)(((((int)stk + 0) + 0x4) + 0x0)), (unsigned char)t2 != 0xFF) || (t3 = *(signed char *)(((((int)stk + 0) + 0x4) + 0x1)), (unsigned char)t3 != 0xFF))) {
        (((struct o0_uchar *)0x8C000070)->v) = (*(signed char *)(((((int)stk + 0) + 0x4) + 0x0)));
        (((struct o1_uchar *)0x8C000070)->v) = (*(signed char *)(((((int)stk + 0) + 0x4) + 0x1)));
        FUN_0c2bad7a(0x8C000070, 0x2);
    }
    return (*(int *)(((int)stk + 0)));
}

int mwRnaSetDrctLvl(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    if (a4 == 0) {
        t0 = (FUN_0c2dc1ae(a4, a5, a6, a7, 0xC2FFEE8));
    } else {
        t1 = 0xFFFFFFD3;
        if ((int)a5 < (int)0xFFFFFFD3) {
        } else {
            t2 = a5;
            if ((int)a5 > 0) {
                t2 = 0x0;
            }
            t1 = t2;
        }
        t2 = *(int *)((a4 + 0x38));
        t3 = ((int (*)(int, int, int, int))(((((struct o44_int *)((*(int *)((t2 + 0x0)))))->v))))(t2, 0x2, t1, 0x0);
        (((struct o84_uint *)(a4))->v) = t1;
        t0 = 0x84;
    }
    return t0;
}

int syRtcGetDate(int a4)
{
    register int t1;

    if ((((((struct o4_int *)0xC8B9DD8)->v)) & 0x1) == 1) {
        t1 = syRtcGetCountForce();
        syRtcCountToDate(t1, a4);
        (((struct o0_uint *)0xC8B9DD8)->v) = t1;
    } else {
        syRtcCountToDate(((((struct o0_int *)0xC8B9DD8)->v)), a4);
    }
    *(unsigned char *)((a4 + 0x7)) = (syRtcMakeDayOfWeek((*(short *)((a4 + 0x0))), (*(signed char *)((a4 + 0x2))), (*(signed char *)((a4 + 0x3)))));
    *(unsigned char *)((a4 + 0x8)) = (syRtcMakeAgeOfMoon());
    return ((((struct o4_int *)0xC8B9DD8)->v));
}

int mwRnaSetFilter(int a4, int a5, int a6, int a7)
{
    register int t1;
    register int t3;

    if (a4 == 0) {
        return (FUN_0c2dc1ae(a4, a5, a6, a7, 0xC2FFEE8));
    }
    (((struct o7C_uint *)(a4))->v) = a5;
    (((struct o80_uint *)(a4))->v) = a6;
    t1 = *(int *)((a4 + 0x38));
    t3 = (((struct o44_int *)((*(int *)((t1 + 0x0)))))->v);
    return ((int (*)(int, int, int, int))(t3))(t1, 0x3, a5, a6);
}

int mpdrv_dpf(int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
    int stk[14];
    register int t10;
    register int t2;
    register int t5;

    stk[3] = a8;
    stk[4] = a9;
    stk[5] = a10;
    t10 = 0x10C8;
    if (((((struct o10C8_int *)((*(int *)0xC8D4D84)))->v)) != 0) {
        t2 = ((((int)stk + 4) + 0x8) + 0x4);
        if ((0x3 & ((((int)stk + 4) + 0x8) + 0x4)) != 0) {
            t2 = ((((int)stk + 4) + 0x8) + 0x8);
        }
        t5 = *(int *)0xC304088;
        t10 = (vsprintf(0xC8D3B88, a8, t2));
        if (t5 != 0) {
            t10 = (((int (*)(int, int, int, int, int, int, int, int, int, int, int))(t5))(0xC8D3B88, a5, a6, a7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24)));
        }
    }
    return t10;
}

int ADXSTM_Stop(int a4)
{
    int t0;
    register int t1;

    if (((*(signed char *)((a4 + 0x2))) == 1) && (t0 = *(int *)((a4 + 0x8)), t0 != 0)) {
        t0 = syTmrGetCount();
        gdFsStopRd((*(int *)((a4 + 0x8))));
        t1 = syTmrGetCount();
        *(unsigned int *)0xC303D94 = (FUN_0c2bbe58(t0, t1));
        *(unsigned char *)((a4 + 0x2)) = 0x0;
    }
    *(unsigned char *)((a4 + 0x1)) = 0x1;
    return 0x1;
}

int kmytex_FBFreeEntry(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    if ((unsigned int)0x0 < (unsigned int)((((struct o0_int *)0xC304124)->v))) {
        t0 = 0x0;
        for (;;) {
            t2 = (((struct o18_int *)0xC304124)->v);
            t1 = (((((t0 << 1) + t0) << 2) << 1) + t2);
            if ((((((t0 << 1) + t0) << 2) << 1) + t2) == a4) {
                t2 = (((struct o18_int *)0xC304124)->v);
                t3 = (*(short *)(((((((t0 << 1) + t0) << 2) << 1) + t2) + 0x0)));
                t3 = (t3 & 0xFFFE);
                *(unsigned short *)(((((((t0 << 1) + t0) << 2) << 1) + t2) + 0x0)) = t3;
                t1 = t0;
            }
            t0 = (t0 + 0x1);
            if ((unsigned int)t0 >= (unsigned int)((((struct o0_int *)0xC304124)->v))) {
                break;
            }
        }
        t0 = t1;
    }
    return t0;
}

int gdFsReadWG(int a4, int a5, int a6)
{
    register int t3;

    t3 = gdFsReopenHn((*(int *)(((*(int *)0xC3036E4) + 0x14))), 0x0, a4, (((a5 << 8) << 2) << 1));
    if (t3 == 0) {
        return 0xFFFFFFF3;
    }
    return (gdFsRead(t3, a5, a6));
}

int kmytex_VQFreeEntry(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    if ((unsigned int)0x0 < (unsigned int)((((struct o0_int *)0xC304128)->v))) {
        t0 = 0x0;
        t1 = 0x0;
        for (;;) {
            t3 = (((struct o3C_int *)0xC304128)->v);
            t2 = ((t1 * 0x4C) + t3);
            if (((t1 * 0x4C) + t3) == a4) {
                t0 = ((((struct o3C_int *)0xC304128)->v));
                t3 = (*(short *)((((t1 * 0x4C) + t0) + 0x0)));
                t3 = (t3 & 0xFFFE);
                *(unsigned short *)((((t1 * 0x4C) + t0) + 0x0)) = t3;
                t2 = 0x48;
            }
            t1 = (t1 + 0x1);
            if ((unsigned int)t1 >= (unsigned int)((((struct o0_int *)0xC304128)->v))) {
                break;
            }
        }
        t0 = t2;
    }
    return t0;
}

int kmyiCheckNativeHandle(int a4)
{
    register int t11;
    register int t1;
    register int t2;

    t11 = 0x0;
    if ((unsigned int)0x0 < (unsigned int)(*(int *)0xC8D5F9C)) {
        t1 = 0x0;
        t2 = 0x0;
        for (;;) {
            if (a4 == ((t2 * 0x8C) + 0xC8D5FA8)) {
                break;
            }
            t1 = (*(int *)0xC8D5F9C);
            t2 = (t2 + 0x1);
            if ((unsigned int)t2 >= (unsigned int)t1) {
                return 0x0;
            }
        }
        t11 = 0x1;
    }
    return t11;
}

int kmyReleaseFrameBufferHandle(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t3;
    int t5;

    if (a4 != 0) {
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
            *(unsigned int *)((a4 + 0x28)) = 0x0;
        }
    }
    return 0x0;
}

int nlStoreMatrix(int a4)
{
    register int t1;
    float u3[16];
    float u4[16];

    t1 = a4;
    if (a4 == 0) {
        t1 = (*(int *)0xC86877C);
    }
    _builtin_st_ext((float (*)[4])u3);
    *(float *)((((t1 + 0x40) - 0x4) + 0x0)) = u3[15];
    *(float *)(((((t1 + 0x40) - 0x4) - 0x4) + 0x0)) = u3[14];
    *(float *)((((((t1 + 0x40) - 0x4) - 0x4) - 0x4) + 0x0)) = u3[13];
    *(float *)(((((((t1 + 0x40) - 0x4) - 0x4) - 0x4) - 0x4) + 0x0)) = u3[12];
    *(float *)((((((((t1 + 0x40) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) + 0x0)) = u3[11];
    *(float *)(((((((((t1 + 0x40) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) + 0x0)) = u3[10];
    *(float *)((((((((((t1 + 0x40) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) + 0x0)) = u3[9];
    *(float *)(((((((((((t1 + 0x40) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) + 0x0)) = u3[8];
    *(float *)((((((((((((t1 + 0x40) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) + 0x0)) = u3[7];
    *(float *)(((((((((((((t1 + 0x40) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) + 0x0)) = u3[6];
    *(float *)((((((((((((((t1 + 0x40) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) + 0x0)) = u3[5];
    *(float *)(((((((((((((((t1 + 0x40) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) + 0x0)) = u3[4];
    *(float *)((((((((((((((((t1 + 0x40) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) + 0x0)) = u3[3];
    *(float *)(((((((((((((((((t1 + 0x40) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) + 0x0)) = u3[2];
    *(float *)((((((((((((((((((t1 + 0x40) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) + 0x0)) = u3[1];
    *(float *)(((((((((((((((((((t1 + 0x40) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) + 0x0)) = u3[0];
    _builtin_st_ext((float (*)[4])u4);
    u4[0] = u3[0];
    u4[1] = u3[1];
    u4[2] = u3[2];
    u4[3] = u3[3];
    u4[4] = u3[4];
    u4[5] = u3[5];
    u4[6] = u3[6];
    u4[7] = u3[7];
    u4[8] = u3[8];
    u4[9] = u3[9];
    u4[10] = u3[10];
    u4[11] = u3[11];
    u4[12] = u3[12];
    u4[13] = u3[13];
    u4[14] = u3[14];
    u4[15] = u3[15];
    _builtin_ld_ext((float (*)[4])u4);
    return (((((((((((((((((t1 + 0x40) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4);
}

int syBtExit(int a4, int a5, int a6, int a7)
{
    register int t0;

    if ((unsigned char)(*(signed char *)0x8C0080FC) == 1) {
        if ((unsigned char)(*(signed char *)0x8C0080FE) == 1) {
            return ((int (*)(void))(0x8C008300))();
        }
        *(unsigned int *)0x8C000064 = 0x8C008000;
        t0 = *(int *)0x8C0000E0;
        return ((int (*)(int, int, int, int))(t0))(0x3, a5, a6, a7);
    }
    t0 = *(int *)0x8C0000E0;
    return ((int (*)(int, int, int, int))(t0))(0x1, a5, a6, a7);
}

int ADXF_GetNumReqSct(int a4, int a5, int a6, int a7)
{
    int stk[1];

    *(unsigned int *)(((int)stk + 0)) = a5;
    if (a4 == 0) {
        FUN_0c2c30aa(0xC2FF4A8, a5, a6, a7, *(int *)((int)stk + 0));
        *(unsigned int *)(((*(int *)(((int)stk + 0))) + 0x0)) = 0x0;
        return 0xFFFFFFFD;
    }
    *(unsigned int *)(((*(int *)(((int)stk + 0))) + 0x0)) = (*(int *)((a4 + 0x1C)));
    return (*(int *)((a4 + 0x20)));
}

int ADXF_ExecServer(int a4, int a5)
{
    register int t1;

    ADXCRS_Lock(a4, a5);
    t1 = 0xC8CBD44;
    for (;;) {
        if ((*(signed char *)((t1 + 0x0))) == 1) {
            adxf_ExecOne(t1);
        }
        t1 = (t1 + 0x30);
        if ((unsigned int)t1 >= (unsigned int)0xC8CC044) {
            break;
        }
    }
    return ADXCRS_Unlock();
}

int ADXSJD_ExecServer(void)
{
    register int t0;
    register int t1;
    register int t3;

    t0 = 0xC8CAC04;
    for (;;) {
        t1 = *(signed char *)((t0 + 0x0));
        t3 = t1;
        if (t1 == 1) {
            t3 = (ADXSJD_ExecHndl(t0));
        }
        t0 = (t0 + 0x98);
        if ((unsigned int)t0 >= (unsigned int)0xC8CB0C4) {
            break;
        }
    }
    return t3;
}

int nlStoreMatrix8(int a4)
{
    register int t1;
    float u3[16];

    t1 = a4;
    if (a4 == 0) {
        t1 = (*(int *)0xC86877C);
    }
    _builtin_st_ext((float (*)[4])u3);
    *(float *)((((t1 + 0x40) - 0x8) + 0x0)) = u3[14];
    *(float *)(((((t1 + 0x40) - 0x8) + 0x0) + 4)) = u3[15];
    *(float *)(((((t1 + 0x40) - 0x8) - 0x8) + 0x0)) = u3[12];
    *(float *)((((((t1 + 0x40) - 0x8) - 0x8) + 0x0) + 4)) = u3[13];
    *(float *)((((((t1 + 0x40) - 0x8) - 0x8) - 0x8) + 0x0)) = u3[10];
    *(float *)(((((((t1 + 0x40) - 0x8) - 0x8) - 0x8) + 0x0) + 4)) = u3[11];
    *(float *)(((((((t1 + 0x40) - 0x8) - 0x8) - 0x8) - 0x8) + 0x0)) = u3[8];
    *(float *)((((((((t1 + 0x40) - 0x8) - 0x8) - 0x8) - 0x8) + 0x0) + 4)) = u3[9];
    *(float *)((((((((t1 + 0x40) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) + 0x0)) = u3[6];
    *(float *)(((((((((t1 + 0x40) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) + 0x0) + 4)) = u3[7];
    *(float *)(((((((((t1 + 0x40) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) + 0x0)) = u3[4];
    *(float *)((((((((((t1 + 0x40) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) + 0x0) + 4)) = u3[5];
    *(float *)((((((((((t1 + 0x40) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) + 0x0)) = u3[2];
    *(float *)(((((((((((t1 + 0x40) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) + 0x0) + 4)) = u3[3];
    *(float *)(((((((((((t1 + 0x40) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) + 0x0)) = u3[0];
    *(float *)((((((((((((t1 + 0x40) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) + 0x0) + 4)) = u3[1];
    return (((((((((t1 + 0x40) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8);
}

void nlLoadMatrix8(int a4)
{
    register int t1;
    float u5[16];

    t1 = a4;
    if (a4 == 0) {
        t1 = (*(int *)0xC86877C);
    }
    u5[0] = (*(float *)((t1 + 0x0)));
    u5[1] = (*(float *)(((t1 + 0x0) + 4)));
    u5[2] = ((((struct o8_float *)(t1))->v));
    u5[3] = (*(float *)((((t1 + 0x8) + 0x0) + 4)));
    u5[4] = ((((struct o8_float *)((t1 + 0x8)))->v));
    u5[5] = (*(float *)(((((t1 + 0x8) + 0x8) + 0x0) + 4)));
    u5[6] = ((((struct o8_float *)(((t1 + 0x8) + 0x8)))->v));
    u5[7] = (*(float *)((((((t1 + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
    u5[8] = ((((struct o8_float *)((((t1 + 0x8) + 0x8) + 0x8)))->v));
    u5[9] = (*(float *)(((((((t1 + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
    u5[10] = ((((struct o8_float *)(((((t1 + 0x8) + 0x8) + 0x8) + 0x8)))->v));
    u5[11] = (*(float *)((((((((t1 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
    u5[12] = ((((struct o8_float *)((((((t1 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8)))->v));
    u5[13] = (*(float *)(((((((((t1 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
    u5[14] = ((((struct o8_float *)(((((((t1 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8)))->v));
    u5[15] = (*(float *)((((((((((t1 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
    _builtin_ld_ext((float (*)[4])u5);
}

int gdFsGetDrvStatG(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t3;

    t3 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)(((*(int *)0xC3036E4) + 0xC))) + 0x20)))))(((int)stk + 0), a5, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
    if (t3 == 0) {
        return 0xFFFFFFFF;
    }
    return (*(int *)(((int)stk + 0)));
}

int nl_texture_slot_free(int a4, int a5)
{
    register int t2;

    if ((int)a4 >= 0) {
        t2 = *(int *)0xC83CD44;
        *(unsigned int *)(((((int)a4 >> 5) << 2) + t2)) = ((*(int *)(((((int)a4 >> 5) << 2) + t2))) & (~((int)0x1 << (int)(0x1F & a4))));
    }
    return t2;
}

int gdFsExecServerG(void)
{
    register int t3;

    t3 = ((int (*)(void))(((((struct o40_int *)((*(int *)(((*(int *)0xC3036E4) + 0xC)))))->v))))();
    if ((*(int *)(((*(int *)0xC3036E4) + 0x1C))) != 0) {
        return gdFsGetStatG();
    }
    return t3;
}

int mwRnaGetNumRoom(int a4, int a5, int a6, int a7)
{
    if (a4 == 0) {
        FUN_0c2dc1ae(a4, a5, a6, a7, 0xC2FFEE8);
        return 0xFFFFFFFF;
    }
    return ((*(int *)((a4 + 0x28))) - (*(int *)((a4 + 0x34))));
}

int kmyiCheckRenderPacket(int a4)
{
    register int t0;
    register int t1;
    register int t3;

    t0 = 0x0;
    t1 = 0xC8D61E4;
    for (;;) {
        t3 = t1 == a4;
        t1 = (t1 + 0x2C);
        if (t3) {
            t0 = 0x1;
        }
        if ((unsigned int)t1 >= (unsigned int)0xC8D6344) {
            break;
        }
    }
    return t0;
}

int mwRnaGetStat(int a4, int a5, int a6, int a7)
{
    if (a4 == 0) {
        FUN_0c2dc1ae(a4, a5, a6, a7, 0xC2FFEE8);
        return 0xFFFFFFFF;
    }
    return (unsigned char)(*(signed char *)((a4 + 0x1)));
}

int mwRnaGetOutVol(int a4, int a5, int a6, int a7)
{
    if (a4 == 0) {
        FUN_0c2dc1ae(a4, a5, a6, a7, 0xC2FFEE8);
        return 0xFFFFFFFF;
    }
    return ((((struct o60_int *)(a4))->v));
}

int mwRnaIsPause(int a4, int a5, int a6, int a7)
{
    if (a4 == 0) {
        FUN_0c2dc1ae(a4, a5, a6, a7, 0xC2FFEE8);
        return 0x0;
    }
    return (unsigned char)(*(signed char *)((a4 + 0x7)));
}

int ADXF_Tell(int a4, int a5, int a6, int a7)
{
    int stk[1];

    if (a4 == 0) {
        FUN_0c2c30aa(0xC2FF424, a5, a6, a7, *(int *)((int)stk + 0));
        return 0xFFFFFFFD;
    }
    return (*(int *)((a4 + 0x18)));
}

int ADXF_GetFsizeSct(int a4, int a5, int a6, int a7)
{
    int stk[1];

    if (a4 == 0) {
        FUN_0c2c30aa(0xC2FF44C, a5, a6, a7, *(int *)((int)stk + 0));
        return 0xFFFFFFFD;
    }
    return (*(int *)((a4 + 0x10)));
}

int ADXF_GetFsizeByte(int a4, int a5, int a6, int a7)
{
    int stk[1];

    if (a4 == 0) {
        FUN_0c2c30aa(0xC2FF478, a5, a6, a7, *(int *)((int)stk + 0));
        return 0xFFFFFFFD;
    }
    return (*(int *)((a4 + 0x14)));
}

int ADXF_GetNumReadSct(int a4, int a5, int a6, int a7)
{
    int stk[1];

    if (a4 == 0) {
        FUN_0c2c30aa(0xC2FF4D8, a5, a6, a7, *(int *)((int)stk + 0));
        return 0xFFFFFFFD;
    }
    return (*(int *)((a4 + 0x24)));
}

int ADXF_GetStat(int a4, int a5, int a6, int a7)
{
    int stk[1];

    if (a4 == 0) {
        FUN_0c2c30aa(0xC2FF508, a5, a6, a7, *(int *)((int)stk + 0));
        return 0xFFFFFFFD;
    }
    return (*(signed char *)((a4 + 0x1)));
}

int mpdrv_set_end_ns(void)
{
    register int t1;

    t1 = (((struct oFCC_int *)((*(int *)0xC8D4D84)))->v);
    *(unsigned int *)((t1 + 0x0)) = ((*(int *)((t1 + 0x0))) | 0x80000000);
    return 0x0;
}

int syBtCheckDisc(int a4, int a5, int a6, int a7)
{
    register int t1;

    FUN_0c2bb00c();
    t1 = *(int *)0x8C0000E0;
    return ((int (*)(int, int, int, int))(t1))(0x2, a5, a6, a7);
}

int mpdrv_get_timeout(void)
{
    return (unsigned short)(short)((unsigned int)((((struct o10C0_int *)((*(int *)0xC8D4D84)))->v)) >> 16);
}

int FUN_0c0d5188(void)
{
    return ((((unsigned char)(*(signed char *)0xC541F3D) == 7)) ? 1 : 0);
}

int nlPushMultiViewMatrix(void)
{
    nlPushMatrix((*(int *)0xC868794));
    return nlMultiPushedMatrix();
}

int kmyiCheckTAHandle(int a4)
{
    return (((0xC8D5F90 == a4)) ? 1 : 0);
}

int gdFsGetGlobalErrG(void)
{
    return (*(int *)(((*(int *)0xC3036E4) + 0x30)));
}

int gdFsGetWorkHnG(void)
{
    return (*(int *)(((*(int *)0xC3036E4) + 0x1C)));
}

int gdFsGetSysHnG(void)
{
    return (*(int *)(((*(int *)0xC3036E4) + 0x14)));
}
