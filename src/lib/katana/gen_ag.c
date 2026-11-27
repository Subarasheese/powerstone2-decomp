/* Straight-line functions with calls and guards (batch gen_ag): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[5]; } Stk5;
struct o0_int { int v; };
struct o0_short { short v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o0_ushort { unsigned short v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_int { char p[0x10]; int v; };
struct o10_short { char p[0x10]; short v; };
struct o10_uchar { char p[0x10]; unsigned char v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o10_ushort { char p[0x10]; unsigned short v; };
struct o12_short { char p[0x12]; short v; };
struct o12_ushort { char p[0x12]; unsigned short v; };
struct o14_int { char p[0x14]; int v; };
struct o14_short { char p[0x14]; short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o14_ushort { char p[0x14]; unsigned short v; };
struct o16_short { char p[0x16]; short v; };
struct o18_int { char p[0x18]; int v; };
struct o18_short { char p[0x18]; short v; };
struct o18_ushort { char p[0x18]; unsigned short v; };
struct o1C_int { char p[0x1C]; int v; };
struct o1C_uchar { char p[0x1C]; unsigned char v; };
struct o2_short { char p[0x2]; short v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o2_ushort { char p[0x2]; unsigned short v; };
struct o20_int { char p[0x20]; int v; };
struct o22_uchar { char p[0x22]; unsigned char v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o24_int { char p[0x24]; int v; };
struct o24_short { char p[0x24]; short v; };
struct o24_uchar { char p[0x24]; unsigned char v; };
struct o26_uchar { char p[0x26]; unsigned char v; };
struct o28_uchar { char p[0x28]; unsigned char v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o30_uint { char p[0x30]; unsigned int v; };
struct o31_uchar { char p[0x31]; unsigned char v; };
struct o33_uchar { char p[0x33]; unsigned char v; };
struct o34_int { char p[0x34]; int v; };
struct o38_uchar { char p[0x38]; unsigned char v; };
struct o38_ushort { char p[0x38]; unsigned short v; };
struct o39_uchar { char p[0x39]; unsigned char v; };
struct o3A_uchar { char p[0x3A]; unsigned char v; };
struct o3A_ushort { char p[0x3A]; unsigned short v; };
struct o3C_int { char p[0x3C]; int v; };
struct o3C_uchar { char p[0x3C]; unsigned char v; };
struct o3C_uint { char p[0x3C]; unsigned int v; };
struct o4_int { char p[0x4]; int v; };
struct o4_short { char p[0x4]; short v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
struct o40_int { char p[0x40]; int v; };
struct o48_int { char p[0x48]; int v; };
struct o48_uint { char p[0x48]; unsigned int v; };
struct o48_ushort { char p[0x48]; unsigned short v; };
struct o4A_ushort { char p[0x4A]; unsigned short v; };
struct o4C_short { char p[0x4C]; short v; };
struct o4C_uint { char p[0x4C]; unsigned int v; };
struct o5_uchar { char p[0x5]; unsigned char v; };
struct o50_int { char p[0x50]; int v; };
struct o50_short { char p[0x50]; short v; };
struct o50_uint { char p[0x50]; unsigned int v; };
struct o50_ushort { char p[0x50]; unsigned short v; };
struct o54_int { char p[0x54]; int v; };
struct o54_short { char p[0x54]; short v; };
struct o54_uint { char p[0x54]; unsigned int v; };
struct o58_uint { char p[0x58]; unsigned int v; };
struct o5C_uint { char p[0x5C]; unsigned int v; };
struct o6_short { char p[0x6]; short v; };
struct o6_ushort { char p[0x6]; unsigned short v; };
struct o7_uchar { char p[0x7]; unsigned char v; };
struct o71_uchar { char p[0x71]; unsigned char v; };
struct o78_uchar { char p[0x78]; unsigned char v; };
struct o7C_uchar { char p[0x7C]; unsigned char v; };
struct o8_int { char p[0x8]; int v; };
struct o8_short { char p[0x8]; short v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o8C_uint { char p[0x8C]; unsigned int v; };
struct o9_uchar { char p[0x9]; unsigned char v; };
struct oA_uchar { char p[0xA]; unsigned char v; };
struct oA_ushort { char p[0xA]; unsigned short v; };
struct oB0_short { char p[0xB0]; short v; };
struct oC_int { char p[0xC]; int v; };
struct oC_short { char p[0xC]; short v; };
struct oC_uchar { char p[0xC]; unsigned char v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oC_ushort { char p[0xC]; unsigned short v; };
struct oD_uchar { char p[0xD]; unsigned char v; };
struct oE_short { char p[0xE]; short v; };
struct oE_uchar { char p[0xE]; unsigned char v; };
struct oE_ushort { char p[0xE]; unsigned short v; };
struct oF_uchar { char p[0xF]; unsigned char v; };
int vmsfs_mediainfo_retry(int, int);
int FUN_0c184000(int, int, int);
int FUN_0c18778c(int);
int FUN_0c187a88(int, int, int);
int FUN_0c187d98(int, int, int);
int FUN_0c18da58(void);
int FUN_0c18da86(int);
int FUN_0c18dad6(int);
int FUN_0c18dcf2(int, int);
int FUN_0c18ea14(int);
int FUN_0c18ea8c(int, int, int, int);
int FUN_0c190d42(int, int);
int FUN_0c190f66(int);
int FUN_0c193fc0(int, int, int, int);
int FUN_0c19a2e4(void);
int FUN_0c19a448(int, int, int, int);
int FUN_0c19a6a4(int, int, int);
int FUN_0c19a7b2(int, int, int, int, int, int, int);
int FUN_0c19a8ce(int);
int FUN_0c19d250(int, int);
int FUN_0c1a02cc(int, int, int);
int FUN_0c1a3438(int, int);
int FUN_0c1a357c(int, int, int);
int FUN_0c1a3890(void);
int FUN_0c2af1e0(void);
int FUN_0c2af91c(int, int, int, int);
int FUN_0c2b488a(int);
int FUN_0c2bcc48(int, int, int, int);
int FUN_0c2c3148(void);
int FUN_0c2c3394(int);
int FUN_0c2c38c2(int);
int FUN_0c2c6728(void);
int FUN_0c2c6740(int, int);
int kmyGetFrameBufferSize(int);
int FUN_0c2c7eb0(int, int);
int FUN_0c2cb558(int, int, int);
int FUN_0c2cc2c2(void);
int kmiFLWCTRLCheckFinishPacket(int);
int FUN_0c2cd360(int);
int FUN_0c2cd580(int);
int kmiGuaranteeFFModeProcessOver(int, int);
int FUN_0c2d0c0c(void);
int FUN_0c2d114a(void);
int FUN_0c2d487c(int, int, int);
int FUN_0c2d4ad2(void);
int FUN_0c2d6272(void);
int FUN_0c2d65ae(int);
int FUN_0c2d693c(int, int, int, int);
int FUN_0c2d6962(void);
int FUN_0c2d69a4(void);
int FUN_0c2d69fc(void);
int FUN_0c2d774c(void);
int FUN_0c2d7762(void);
int FUN_0c2dc160(int);
int FUN_0c2dc178(int);
int FUN_0c2dc1ae(int, ...);
int FUN_0c2e4c98(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c2e8b6e(int, int);
int FUN_0c2e8d12(int, int);
int FUN_0c2e8ebc(int, int);
int FUN_0c2e9036(int, int);
int FUN_0c2eaf6c(int);
int FUN_0c2eb414(void);
int FUN_0c2eb6fe(int, int, int, int);
int FUN_0c2eba7c(void);
int FUN_0c2ec304(void);
int FUN_0c2ec410(int, int);
int FUN_0c2ec430(int);
extern int FUN_0c2ec532();
int FUN_0c2ec67a(int);
int FUN_0c2f6bcc(void);
int FUN_0c2f7684(int, int);
int FUN_0c2f78e0(void);
int FUN_0c2f7d10(int, int);
int FUN_0c2f806c(int);
int FUN_0c2f8080(int, int, int);
int FUN_0c2f82ec(void);
int FUN_0c2f84a8(int);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int _div64(int, int, int, int);
int _power(int, int, int);
int adxf_ChkPrmGfr(int, int);
int check_caps(int);
int gdFsClose(int);
int kmiFLWCTRLStartDisplayEntry(int);
int kmiWriteRegister(int, int);
int kmyAllocateFrameBuffer(int, int, int);
int kmyFreeArea(int);
int kmyGetFrameBufferHandle(int);
int kmyReleaseFrameBufferHandle(int);
int kmytex_VQFreeEntry(int);
int memset(int, int, int);
int mult64(int, int, int, int);
int mwRnaGetTransSw(int);
int mwlRnaAddFlshPos(int);
int mwlRnaAddWrPos(int);
int mwlRnaStartCopy(int, int, int, int, int);
int mwlRnaWaitTransEnd(int, int, int, int);
int nlSetDummyTextureParameter(int);
int nl_mesh_set_texture(int, int);
int nlsndG2Write(int, int);
int rsfts(int, int, int);
int thunk_FUN_0c2c52e0(int, int);
int thunk_FUN_0c2c59fc(int);
int vib_port_has_vibration(int);
int vmsfs_c_progress(int, int, int, int);
int vmsio_block_read(int, int, int);
int FUN_0c18353e(int a4, int a5, int a6, int a7);
int FUN_0c0f4202(int a4, int a5, int a6);
int calcnpw(int a4, int a5, int a6, int a7);
int gdFsReinitG(int a4, int a5, int a6, int a7);
int mwRnaSetTransSw(int a4, int a5, int a6, int a7);
int kmiAllocateFB(int a4);
int kmiFLWCTRLRotateReadyQueue(int a4);
int FUN_0c18e714(int a4, int a5, int a6);
int FUN_0c190c66(int a4);
void SJUNI_UngetChunk(int a4, int a5, int a6, int a7);
int FUN_0c2f66f0(void);
int FUN_0c2f75a8(int a4);
int FUN_0c2f7c34(int a4);
int FUN_0c2fa3c4(void);
int FUN_0c18cc94(int a4);
int FUN_0c18004c(int a4, int a5, int a6, int a7);
int gdFsReqRdPio(int a4, int a5, int a6);
int FUN_0c2d0e80(void);
int FUN_0c2eb626(int a4, int a5, int a6, int a7);
int FUN_0c2f7808(void);
int kmySetHSyncInterruptLine(int a4);
int vmsfs_connect(int a4);
int VQFBfree(int a4, int a5, int a6, Stk5 s);
int kmyInitializeVGA(int a4, int a5, int a6, int a7);
int FUN_0c2d5518(void);
int FUN_0c2ec45e(int a4, int a5);
int FUN_0c1943d0(int a4, int a5, int a6);
int FUN_0c19e39c(int a4, int a5, int a6);
int FUN_0c2b5992(int a4, int a5, int a6, int a7);
int mwlRnaInsrtSlntDat(int a4);
int adxt_stat_prep(int a4, int a5, int a6, int a7);
int kmySetDisplayFrameBuffer(int a4, int a5);
int FUN_0c2edece(int a4);
int FUN_0c2f96dc(int a4);
int nlObjPutSetGarbagedTexture_Sub(int a4, int a5, int a6);

int FUN_0c18353e(int a4, int a5, int a6, int a7)
{
    int stk[5];
    register int t21;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t7;
    register int t18;

    *(unsigned int *)(((int)stk + 0)) = a6;
    t21 = 0x0;
    if ((*(signed char *)0xC874FB8) != 0) {
        *(unsigned short *)(((int)stk + 4)) = (_builtin_get_imask());
        _builtin_set_imask(0xF);
        t2 = 0xC874FB8;
        t3 = a5;
        t4 = a7;
        t5 = a6;
        for (;;) {
            if (((int)((((struct o14_int *)0xC8A6F20)->v)) > 0) && ((int)t5 > 0)) {
                t7 = (((struct o10_int *)0xC8A6F20)->v);
                (((struct o10_uint *)0xC8A6F20)->v) = (t7 + 0x1);
                t2 = (*(signed char *)((t3 + 0x0)));
                t3 = (t3 + 0x1);
                *(unsigned char *)((((t7 + 0x1) - 0x1) + 0x0)) = t2;
                (((struct o14_uint *)0xC8A6F20)->v) = (((((struct o14_int *)0xC8A6F20)->v)) - 1);
                t2 = ((((struct o0_int *)0xC8A6F20)->v));
                t4 = ((((struct o8_int *)0xC8A6F20)->v));
                t2 = (t2 + t4);
                t5 = (t5 - 1);
                if ((unsigned int)((((struct o10_int *)0xC8A6F20)->v)) >= (unsigned int)t2) {
                    (((struct o10_uint *)0xC8A6F20)->v) = t4;
                }
                continue;
            }
            break;
        }
        if ((-((((((*(signed char *)0xC8A6F57) & 128) == 0)) ? 1 : 0) - 1)) != 1) {
            for (;;) {
            }
        }
        (((struct o33_uchar *)0xC8A6F20)->v) = ((*(signed char *)0xC8A6F53) | 0x80);
        t18 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC874F8C) + 0x8)))))(0xC8A6F50, t3, 0xC8A6F34, t4, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
        (((struct o30_uint *)0xC8A6F20)->v) = 0x0;
        _builtin_set_imask(((unsigned int)((((*(short *)(((int)stk + 4))) & 0xF) << 2) << 2) >> 4));
        t21 = ((*(int *)(((int)stk + 0))) - t5);
    }
    return t21;
}

int FUN_0c0f4202(int a4, int a5, int a6)
{
    int stk[17];
    register int t0;
    register int t41;
    register int t1;
    register int t2;
    register int t3;
    int t5;
    register int t6;
    register int t12;
    register int t7;
    register int t18;
    register int t22;
    register int t25;
    register int t38;

    *(unsigned int *)(((int)stk + 0)) = a4;
    t0 = vib_port_has_vibration(a4);
    t41 = 0xFFFFFFFE;
    if (t0 == 0) {
    } else {
        if ((unsigned int)0x0 < (unsigned int)a6) {
            t1 = (((int)stk + 0) + 0x4);
            t2 = 0x0;
            t3 = a5;
            for (;;) {
                t5 = *(signed char *)((t3 + 0x1));
                *(unsigned char *)((t1 + 0x0)) = ((((unsigned char)(*(signed char *)((t3 + 0x0))) << 2) << 2) | (0x1 & t5));
                t6 = *(signed char *)((t3 + 0x2));
                t1 = (t1 + 0x1);
                t12 = t6;
                if (((unsigned char)t5 & 0x88) == 0) {
                    t7 = t6;
                    if ((signed char)t6 == 1) {
                        t7 = 0x2;
                    }
                    t12 = t7;
                    if ((signed char)t7 == -1) {
                        t12 = 0xFFFFFFFE;
                    }
                }
                t18 = (0x70 & (((signed char)t12 << 2) << 2));
                if ((int)(signed char)t12 > 0) {
                } else {
                    t18 = 0x0;
                    if ((int)(signed char)t12 < 0) {
                        t18 = (0x7 & (-(signed char)t12));
                    }
                }
                *(unsigned char *)((t1 + 0x0)) = (t18 | (0x88 & t5));
                t1 = (t1 + 0x1);
                *(unsigned char *)((t1 + 0x0)) = (*(signed char *)((t3 + 0x3)));
                t1 = (t1 + 0x1);
                t22 = t1;
                t1 = (t1 + 0x1);
                t25 = 0x0;
                if (((unsigned char)t5 & 0x88) != 0) {
                    t25 = (unsigned char)(*(signed char *)((t3 + 0x4)));
                }
                t2 = (t2 + 0x1);
                *(unsigned char *)((t22 + 0x0)) = t25;
                t3 = (t3 + 0x8);
                if ((unsigned int)t2 >= (unsigned int)a6) {
                    break;
                }
            }
        }
        t38 = FUN_0c2bcc48((*(int *)(((int)stk + 0))), 0x100, (((int)stk + 0) + 0x4), a6);
        t41 = 0x0;
        if ((int)t38 < 0) {
            t41 = 0xFFFFFFFF;
        }
    }
    return t41;
}


int gdFsReinitG(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = *(int *)0xC3036E4;
    if (t0 == 0) {
        return 0xFFFFFFFF;
    }
    t1 = 0x0;
    t2 = (0x1080 + t0);
    for (;;) {
        if ((int)t1 >= (int)((*(int *)(((*(int *)0xC3036E4) + 0x0))) + 0x1)) {
            break;
        }
        gdFsClose(t2);
        t1 = (t1 + 0x1);
        t2 = (t2 + 0x54);
    }
    t1 = _builtin_get_imask();
    _builtin_set_imask(0xF);
    t2 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)(((*(int *)0xC3036E4) + 0xC))) + 0x0)))))(t0, a5, a6, a7);
    (((struct o38_ushort *)((*(int *)0xC3036E4)))->v) = 0x0;
    *(unsigned int *)(((*(int *)0xC3036E4) + 0x20)) = 0x0;
    *(unsigned int *)(((*(int *)0xC3036E4) + 0x1C)) = 0x0;
    (((struct o3A_ushort *)((*(int *)0xC3036E4)))->v) = 0x0;
    t0 = 0x3A;
    t2 = ((*(int *)0xC3036E4) + 0x1080);
    t3 = 0x0;
    for (;;) {
        if ((int)t3 >= (int)((*(int *)(((*(int *)0xC3036E4) + 0x0))) + 0x1)) {
            break;
        }
        t0 = 0x4C;
        *(unsigned short *)((t2 + t0)) = 0x0;
        t3 = (t3 + 0x1);
        *(unsigned int *)((t2 + 0x0)) = (*(int *)0xC3036E4);
        t2 = (t2 + 0x54);
    }
    t0 = *(int *)0xC3036E4;
    *(unsigned int *)((t0 + 0x14)) = (0x1080 + t0);
    t0 = *(int *)0xC3036E4;
    *(unsigned int *)((t0 + 0x18)) = ((0x1080 + t0) + 0x54);
    FUN_0c2af91c((*(int *)(((*(int *)0xC3036E4) + 0x14))), 0x0, 0x0, 0x0);
    _builtin_set_imask(((unsigned int)(((t1 & 0xF) << 2) << 2) >> 4));
    return FUN_0c2af1e0();
}

int mwRnaSetTransSw(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t3;
    register int t16;
    register int t23;
    register int t36;

    *(unsigned int *)(((int)stk + 8)) = a5;
    if (a4 == 0) {
        *(int *)((int)stk + 0) = 0xC2FFEE8;
        t36 = (FUN_0c2dc1ae(0xC2FFEE8));
    } else {
        (((struct o8C_uint *)(a4))->v) = 0x1;
        if ((unsigned char)(*(signed char *)((a4 + 0x5))) == 1) {
            mwlRnaWaitTransEnd(a4, a5, a6, a7);
            t3 = mwRnaGetTransSw(a4);
            if (t3 == 1) {
                mwlRnaAddWrPos(a4);
            } else {
                mwlRnaAddFlshPos(a4);
            }
            *(unsigned char *)((a4 + 0x5)) = 0x0;
        }
        FUN_0c2dc160(((int)stk + 4));
        (((struct o8C_uint *)(a4))->v) = 0x0;
        if ((*(int *)(((int)stk + 8))) == 0) {
            t16 = mwRnaGetTransSw(a4);
            if (t16 != 0) {
                (((struct o50_uint *)(a4))->v) = (*(int *)((a4 + 0x2C)));
                (((struct o54_uint *)(a4))->v) = 0x0;
                (((struct o58_uint *)(a4))->v) = 0x0;
                *(unsigned char *)((a4 + 0x1)) = ((*(signed char *)((a4 + 0x1))) & 0x6);
            }
        } else {
            if ((*(int *)(((int)stk + 8))) == 1) {
                t23 = mwRnaGetTransSw(a4);
                if (t23 != 1) {
                    *(unsigned int *)((a4 + 0x2C)) = 0x0;
                    *(unsigned int *)((a4 + 0x30)) = 0x0;
                    *(unsigned int *)((a4 + 0x34)) = 0x0;
                    *(unsigned char *)((a4 + 0x6)) = 0x0;
                    (((struct o5C_uint *)(a4))->v) = 0x0;
                    (((struct o48_uint *)(a4))->v) = 0x0;
                    (((struct o4C_uint *)(a4))->v) = 0x0;
                    *(unsigned int *)((a4 + 0x3C)) = 0x0;
                    *(unsigned char *)((a4 + 0x4)) = 0x0;
                    (((struct o50_uint *)(a4))->v) = (*(int *)((a4 + 0x2C)));
                    (((struct o54_uint *)(a4))->v) = 0x0;
                    *(unsigned char *)((a4 + 0x1)) = ((*(signed char *)((a4 + 0x1))) | 0x1);
                }
            }
        }
        t36 = (FUN_0c2dc178(((int)stk + 4)));
    }
    return t36;
}

int kmiAllocateFB(int a4)
{
    int stk[2];
    register int t1;
    int t27;

    t1 = kmyGetFrameBufferSize((*(int *)0xC8BE7C0));
    kmyAllocateFrameBuffer(t1, ((int)stk + 0), (((int)stk + 0) + 0x4));
    kmyReleaseFrameBufferHandle(((((struct o0_int *)0xC8BEF88)->v)));
    kmyReleaseFrameBufferHandle(((((struct o4_int *)0xC8BEF88)->v)));
    (((struct o0_uint *)0xC8BEF88)->v) = (kmyGetFrameBufferHandle((*(int *)(((int)stk + 0)))));
    (((struct o4_uint *)0xC8BEF88)->v) = (kmyGetFrameBufferHandle((*(int *)(((int)stk + 4)))));
    *(unsigned int *)(((*(int *)(((*(int *)((a4 + 0x8))) + 0x0))) + 0x1C)) = (*(int *)(((int)stk + 0)));
    *(unsigned int *)(((*(int *)(((*(int *)((a4 + 0x8))) + 0x0))) + 0x14)) = t1;
    if ((unsigned int)(*(int *)((a4 + 0xC))) > (unsigned int)0x1) {
        *(unsigned int *)(((*(int *)(((*(int *)((a4 + 0x8))) + 0x4))) + 0x1C)) = (*(int *)(((int)stk + 4)));
        *(unsigned int *)(((*(int *)(((*(int *)((a4 + 0x8))) + 0x4))) + 0x14)) = t1;
    }
    if ((((*(int *)((a4 + 0x4))) & 0x2) == 0) && (t27 = *(int *)((a4 + 0xC)), (unsigned int)t27 > (unsigned int)0x2)) {
        kmyAllocateFrameBuffer(t1, ((int)stk + 0), (((int)stk + 0) + 0x4));
        kmyReleaseFrameBufferHandle(((((struct o8_int *)0xC8BEF88)->v)));
        kmyReleaseFrameBufferHandle(((((struct oC_int *)0xC8BEF88)->v)));
        (((struct o8_uint *)0xC8BEF88)->v) = (kmyGetFrameBufferHandle((*(int *)(((int)stk + 0)))));
        (((struct oC_uint *)0xC8BEF88)->v) = (kmyGetFrameBufferHandle((*(int *)(((int)stk + 4)))));
        *(unsigned int *)(((*(int *)(((*(int *)((a4 + 0x8))) + 0x8))) + 0x1C)) = (*(int *)(((int)stk + 0)));
        *(unsigned int *)(((*(int *)(((*(int *)((a4 + 0x8))) + 0x8))) + 0x14)) = t1;
        if ((unsigned int)(*(int *)((a4 + 0xC))) > (unsigned int)0x3) {
            *(unsigned int *)(((*(int *)(((*(int *)((a4 + 0x8))) + 0xC))) + 0x1C)) = (*(int *)(((int)stk + 4)));
            *(unsigned int *)(((*(int *)(((*(int *)((a4 + 0x8))) + 0xC))) + 0x14)) = t1;
        }
    }
    return 0x0;
}

int kmiFLWCTRLRotateReadyQueue(int a4)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    t2 = FUN_0c2cc2c2();
    if (t2 != 0) {
        t3 = _builtin_get_imask();
        _builtin_set_imask(0xF);
        t4 = 0x0;
        t5 = t2;
        for (;;) {
            t2 = kmiFLWCTRLCheckFinishPacket(t5);
            if ((t2 != 0) && (t0 = *(int *)((t5 + 0x14)), (t0 & 0x1) == 0)) {
                t2 = *(int *)((t5 + 0x14));
                switch (t2) {
                case 2:
                    FUN_0c2cd360(t5);
                    break;
                case 4:
                    if ((((*(int *)((t5 + 0x38))) != 0) && (a4 != 1)) || (t1 = (((struct o0_int *)0xC8BFF98)->v), t1 != 0)) {
                    } else {
                        t2 = FUN_0c2cd580(t5);
                        if (t2 == 0) {
                            t4 = 0x1;
                        }
                    }
                    break;
                case 6:
                    if ((((((struct oC_int *)0xC8BFF98)->v)) == 0) && (a4 != 0)) {
                        kmiFLWCTRLStartDisplayEntry(t5);
                    }
                    break;
                }
            }
            t5 = (*(int *)((t5 + 0x10)));
            if (t5 == 0) {
                break;
            }
        }
        kmiGuaranteeFFModeProcessOver(a4, t4);
        _builtin_set_imask(((unsigned int)(((t3 & 0xF) << 2) << 2) >> 4));
    }
    return 0x0;
}

int FUN_0c18e714(int a4, int a5, int a6)
{
    int stk[3];
    register int t0;
    register int t30;
    register int t1;
    register int t9;
    register int t21;

    *(unsigned int *)(((int)stk + 8)) = a5;
    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a6;
    t0 = FUN_0c18ea14(a6);
    t30 = 0xFFFFFFFF;
    if (t0 != 0) {
        t1 = FUN_0c18da58();
        t30 = 0xFFFFFFFF;
        if (t1 != 0) {
            (((struct o0_ushort *)0xC8A8E80)->v) = (FUN_0c18dad6((*(short *)((t0 + 0x18)))));
            (((struct o2_ushort *)0xC8A8E80)->v) = (FUN_0c18dad6(0x800));
            (((struct o4_uchar *)0xC8A8E80)->v) = (*(signed char *)((t0 + 0x1A)));
            (((struct o5_uchar *)0xC8A8E80)->v) = 0x4;
            (((struct o6_ushort *)0xC8A8E80)->v) = (FUN_0c18dad6(0x2));
            FUN_0c187a88(0xC8A8E88, (t0 + 0x1C), (unsigned char)(*(signed char *)((t0 + 0x1A))));
            t9 = *(signed char *)((t0 + 0x1A));
            FUN_0c187a88((0xC8A8E88 + (unsigned char)t9), (t0 + 0x8), 0x4);
            FUN_0c187a88(((0xC8A8E88 + (unsigned char)t9) + 0x4), (*(int *)(((int)stk + 0))), (unsigned char)(*(signed char *)((t0 + 0x1A))));
            FUN_0c187a88((((0xC8A8E88 + (unsigned char)t9) + 0x4) + (unsigned char)(*(signed char *)((t0 + 0x1A)))), (((int)stk + 0) + 0x8), 0x4);
            *(unsigned int *)((t1 + 0x0)) = 0x1;
            *(unsigned short *)((t1 + 0x8)) = ((((unsigned char)(*(signed char *)((t0 + 0x1A))) + 0x4) << 1) + 0x9);
            FUN_0c18dcf2((t1 + 0xC), 0xC8A8E80);
            t21 = FUN_0c18ea8c(t1, (*(int *)(((int)stk + 0))), 0x4, (*(int *)(((int)stk + 4))));
            if (t21 != 0) {
                FUN_0c18da86(t1);
                t30 = 0xFFFFFFFF;
            } else {
                FUN_0c18da86(t1);
                t30 = 0x0;
            }
        }
    }
    return t30;
}

int FUN_0c190c66(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t9;

    (((struct o0_uint *)0xC8A97B8)->v) = (((*(short *)0xC2AE6EE) << 2) << 1);
    t0 = 0xC8A97B8;
    t1 = a4;
    t2 = 0x0;
    for (;;) {
        if ((int)t2 >= (int)(unsigned char)(*(signed char *)0xC8A738C)) {
            break;
        }
        t3 = 0x138;
        t4 = (t2 * 0x174);
        if ((*(short *)((((*(int *)0xC8A73C0) + t4) + t3))) != 0) {
            t3 = (*(int *)0xC8A73C0);
            t0 = 0x138;
            t3 = (t3 + t4);
            t3 = (*(short *)((t0 + t3)));
            t3 = (unsigned short)t3;
            if (t3 == 1) {
                t5 = 0x0;
                for (;;) {
                    t1 = (*(int *)0xC8A73C0);
                    t1 = (t1 + t4);
                    t1 = (t1 + 0x124);
                    t1 = (t1 + (t5 << 1));
                    t6 = t1;
                    if ((*(short *)((t1 + 0x0))) != 0) {
                        t9 = *(short *)((t1 + 0x0));
                        *(unsigned short *)((t1 + 0x0)) = (t9 - 1);
                        if ((short)(t9 - 1) == 0) {
                            t1 = (*(int *)0xC8A73C0);
                            t1 = (t1 + t4);
                            t3 = (FUN_0c190d42(t1, t5));
                        } else {
                            t9 = t0;
                            t6 = t1;
                        }
                    } else {
                        t9 = t0;
                    }
                    t0 = t9;
                    t5 = (t5 + 0x1);
                    t1 = t6;
                    if ((int)t5 >= (int)0x4) {
                        break;
                    }
                }
                t5 = *(int *)0xC8A73C0;
                t3 = 0x110;
                *(unsigned short *)(((t5 + t4) + t3)) = ((*(short *)(((t5 + t4) + t3))) + 0x1);
                t3 = (t3 + 0x2);
                if ((*(short *)((((*(int *)0xC8A73C0) + t4) + t3))) != 0) {
                    t5 = *(int *)0xC8A73C0;
                    t3 = 0x112;
                    *(unsigned short *)(((t5 + t4) + t3)) = ((*(short *)(((t5 + t4) + t3))) + 0x1);
                }
            }
        }
        t2 = (t2 + 0x1);
    }
    (((struct o4_uint *)0xC8A97B8)->v) = (((((struct o4_int *)0xC8A97B8)->v)) + 0xFA00);
    return t3;
}


int FUN_0c2f66f0(void)
{
    register int t0;
    register int t1;

    if ((*(signed char *)0xC8DFF9E) != 0) {
        FUN_0c2d69a4();
        FUN_0c2d69fc();
    }
    (((struct o8_uint *)0xC8DE900)->v) = ((((struct oC_int *)0xC8DE900)->v));
    (((struct o0_uint *)0xC8DE900)->v) = 0xC8DD900;
    (((struct o0_uint *)0xC8DFD54)->v) = ((((struct oC_int *)0xC8DE900)->v));
    (((struct o10_uint *)0xC8DE900)->v) = ((((struct oC_int *)0xC8DE900)->v));
    (((struct o14_ushort *)0xC8DE900)->v) = 0x0;
    (((struct o4_ushort *)0xC8DFD54)->v) = 0x0;
    (((struct o18_ushort *)0xC8DE900)->v) = 0x0;
    (((struct o0_uint *)0xC8DF920)->v) = ((((struct o4_int *)0xC8DF920)->v));
    (((struct o8_uint *)0xC8DF920)->v) = ((((struct o4_int *)0xC8DF920)->v));
    (((struct oC_ushort *)0xC8DF920)->v) = 0x0;
    (((struct oE_ushort *)0xC8DF920)->v) = 0x0;
    (((struct o3_uchar *)0xC8DFFA1)->v) = 0x0;
    (((struct oE_uchar *)0xC8DFF64)->v) = 0x0;
    (((struct oD_uchar *)0xC8DFF64)->v) = 0x0;
    (((struct oF_uchar *)0xC8DFF64)->v) = 0x0;
    (((struct oC_uchar *)0xC8DFF64)->v) = 0x0;
    (((struct o10_uchar *)0xC8DFF64)->v) = 0x0;
    (((struct o2_uchar *)0xC8DFFA1)->v) = 0x0;
    (((struct oE_uchar *)0xC8DFFA1)->v) = 0x0;
    (((struct o0_uint *)0xC8DFF64)->v) = 0xC8DFD64;
    (((struct o4_uint *)0xC8DFF64)->v) = 0xC8DFE64;
    *(unsigned short *)((((((struct o0_int *)0xC8DFF64)->v)) + 0x0)) = (((((struct o0_int *)0xC8DFD54)->v)) - ((((struct o0_int *)0xC8DE900)->v)));
    t0 = 0x0;
    t1 = 0x0;
    for (;;) {
        t1 = (t1 + 0x1);
        *(unsigned short *)((t0 + ((((struct o4_int *)0xC8DFF64)->v)))) = 0x0;
        t0 = (t0 + 0x2);
        if ((int)(unsigned short)t1 > (int)0x7F) {
            break;
        }
    }
    FUN_0c2f6bcc();
    (((struct o28_uchar *)0xC8DFF64)->v) = 0x0;
    (((struct o0_uchar *)0xC8DFFA1)->v) = 0x0;
    (((struct o7_uchar *)0xC8DFFA1)->v) = 0x0;
    *(unsigned short *)0xC8E0988 = 0x0;
    FUN_0c2f8080(((((struct o0_short *)0xC8DFFE2)->v)), ((((struct o4_short *)0xC8DFFE2)->v)), ((((struct o8_short *)0xC8DFFE2)->v)));
    t0 = FUN_0c2eba7c();
    (((struct o3A_uchar *)0xC8DFFE2)->v) = 0x0;
    (((struct o39_uchar *)0xC8DFFE2)->v) = 0x0;
    (((struct o38_uchar *)0xC8DFFE2)->v) = 0x0;
    return t0;
}

int FUN_0c2f75a8(int a4)
{
    int stk[2];
    register int t3;
    register int t4;
    register int t15;
    register int t16;
    register int t17;
    register int t23;
    register int t33;
    register int t41;
    register int t55;
    register int t31;

    if ((unsigned int)((((struct o0_short *)0xC8E0992)->v)) < (unsigned int)((((struct o14_short *)0xC8E0992)->v))) {
        t3 = *(int *)0xC8E09C0;
        t4 = (((struct o18_short *)0xC8E0992)->v);
        *(unsigned short *)((((unsigned short)t4 << 1) + (*(int *)0xC8E09C4))) = (*(short *)(((((unsigned short)((((struct o2_short *)0xC8E0992)->v)) << 1) + t3) + 0x0)));
        *(unsigned short *)((t3 + ((unsigned short)((((struct o2_short *)0xC8E0992)->v)) << 1))) = (unsigned short)t4;
        *(unsigned char *)(((unsigned short)t4 + (*(int *)0xC8E09B8))) = (*(signed char *)0xC8E0977);
        *(unsigned short *)((((unsigned short)t4 << 1) + (*(int *)0xC8E09BC))) = ((((struct o2_short *)0xC8E0992)->v));
        *(unsigned short *)((t3 + ((unsigned short)t4 << 1))) = 0x0;
        (((struct o22_ushort *)0xC8E0992)->v) = (unsigned short)t4;
        t15 = (((struct o16_short *)0xC8E0992)->v);
        t16 = (((struct o10_short *)0xC8E0992)->v);
        if ((unsigned int)((unsigned short)t4 + 0x1) > (unsigned int)(unsigned short)t15) {
            t17 = (unsigned short)t16;
            for (;;) {
                if ((unsigned short)(*(short *)((t3 + (t17 << 1)))) == 0) {
                    break;
                }
                t17 = (t17 + 0x1);
                if ((unsigned int)t17 > (unsigned int)(unsigned short)t15) {
                    t17 = (unsigned short)t16;
                }
            }
            t31 = t17;
        } else {
            t23 = ((unsigned short)t4 + 0x1);
            for (;;) {
                if ((unsigned short)(*(short *)((t3 + (t23 << 1)))) == 0) {
                    break;
                }
                t23 = (t23 + 0x1);
                if ((unsigned int)t23 > (unsigned int)(unsigned short)t15) {
                    t23 = (unsigned short)t16;
                }
            }
            t31 = t23;
        }
        (((struct o18_ushort *)0xC8E0992)->v) = t31;
        t33 = FUN_0c2f7684(((((struct o18_short *)0xC8E0992)->v)), ((int)stk + 0));
        if ((signed char)t33 != 0) {
            t55 = *(int *)0xC8E09C4;
            *(unsigned short *)((((*(int *)0xC8E09C4) + ((unsigned short)(*(short *)(((int)stk + 0))) << 1)) + 0x0)) = (*(short *)((((unsigned short)((((struct o18_short *)0xC8E0992)->v)) << 1) + t55)));
        } else {
            t41 = (((struct o18_short *)0xC8E0992)->v);
            t55 = *(int *)0xC8E09C4;
            *(unsigned short *)(((((unsigned short)(*(short *)((((unsigned short)t41 << 1) + (*(int *)0xC8E09BC)))) << 1) + (*(int *)0xC8E09C0)) + 0x0)) = (*(short *)((((unsigned short)t41 << 1) + t55)));
        }
    } else {
        (((struct o22_ushort *)0xC8E0992)->v) = 0x0;
        t55 = 0xC8E09A6;
    }
    return t55;
}

int FUN_0c2f7c34(int a4)
{
    int stk[2];
    register int t3;
    register int t4;
    register int t15;
    register int t16;
    register int t17;
    register int t23;
    register int t33;
    register int t41;
    register int t55;
    register int t31;

    if ((unsigned int)((((struct oC_short *)0xC8E0ADC)->v)) < (unsigned int)((((struct o4_short *)0xC8E09A2)->v))) {
        t3 = (((struct o0_short *)0xC8E0ADC)->v);
        t4 = (((struct o20_int *)0xC8E0ADC)->v);
        *(unsigned short *)((((unsigned short)t3 << 1) + ((((struct o24_int *)0xC8E0ADC)->v)))) = (*(short *)(((((unsigned short)((((struct oE_short *)0xC8E0ADC)->v)) << 1) + t4) + 0x0)));
        *(unsigned short *)((t4 + ((unsigned short)((((struct oE_short *)0xC8E0ADC)->v)) << 1))) = (unsigned short)t3;
        *(unsigned char *)(((unsigned short)t3 + ((((struct o18_int *)0xC8E0ADC)->v)))) = (*(signed char *)0xC8E09D7);
        *(unsigned short *)((((unsigned short)t3 << 1) + ((((struct o1C_int *)0xC8E0ADC)->v)))) = ((((struct oE_short *)0xC8E0ADC)->v));
        *(unsigned short *)((t4 + ((unsigned short)t3 << 1))) = 0x0;
        (((struct oA_ushort *)0xC8E0ADC)->v) = (unsigned short)t3;
        t15 = (((struct o6_short *)0xC8E09A2)->v);
        t16 = (((struct o0_short *)0xC8E09A2)->v);
        if ((unsigned int)((unsigned short)t3 + 0x1) > (unsigned int)(unsigned short)t15) {
            t17 = (unsigned short)t16;
            for (;;) {
                if ((unsigned short)(*(short *)((t4 + (t17 << 1)))) == 0) {
                    break;
                }
                t17 = (t17 + 0x1);
                if ((unsigned int)t17 > (unsigned int)(unsigned short)t15) {
                    t17 = (unsigned short)t16;
                }
            }
            t31 = t17;
        } else {
            t23 = ((unsigned short)t3 + 0x1);
            for (;;) {
                if ((unsigned short)(*(short *)((t4 + (t23 << 1)))) == 0) {
                    break;
                }
                t23 = (t23 + 0x1);
                if ((unsigned int)t23 > (unsigned int)(unsigned short)t15) {
                    t23 = (unsigned short)t16;
                }
            }
            t31 = t23;
        }
        (((struct o0_ushort *)0xC8E0ADC)->v) = t31;
        t33 = FUN_0c2f7d10(((((struct o0_short *)0xC8E0ADC)->v)), ((int)stk + 0));
        if ((signed char)t33 != 0) {
            t55 = (((struct o24_int *)0xC8E0ADC)->v);
            *(unsigned short *)(((((((struct o24_int *)0xC8E0ADC)->v)) + ((unsigned short)(*(short *)(((int)stk + 0))) << 1)) + 0x0)) = (*(short *)((((unsigned short)((((struct o0_short *)0xC8E0ADC)->v)) << 1) + t55)));
        } else {
            t41 = (((struct o0_short *)0xC8E0ADC)->v);
            t55 = (((struct o24_int *)0xC8E0ADC)->v);
            *(unsigned short *)(((((unsigned short)(*(short *)((((unsigned short)t41 << 1) + ((((struct o1C_int *)0xC8E0ADC)->v))))) << 1) + ((((struct o20_int *)0xC8E0ADC)->v))) + 0x0)) = (*(short *)((((unsigned short)t41 << 1) + t55)));
        }
    } else {
        (((struct oA_ushort *)0xC8E0ADC)->v) = 0x0;
        t55 = 0xC8E09A6;
    }
    return t55;
}

int FUN_0c2fa3c4(void)
{
    int stk[5];
    register int t3;
    register int t29;
    register int t40;
    register int t53;
    register int t79;
    register int t27;
    register int t10;
    int t11;
    int t18;
    register int t67;
    int t37;

    if (((unsigned char)(*(signed char *)0xC8D6467) & 0x40) != 0) {
        t79 = 0xC8D677E;
        if (((unsigned char)(*(signed char *)0xC8D677E) & 0x40) == 0) {
            t3 = FUN_0c2d774c();
            if ((signed char)t3 == 0) {
                if (((*(signed char *)0xC8D660E) == 0) && ((t10 = *(signed char *)0xC8D6450, t10 == 0) && (t11 = *(signed char *)0xC8D677E, ((unsigned char)t11 & 8) == 0))) {
                    *(unsigned char *)(((int)stk + 0)) = (*(signed char *)0xC8D6498);
                    FUN_0c2e4c98(0x1, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
                    *(unsigned char *)0xC8D6498 = (*(signed char *)(((int)stk + 0)));
                }
                t27 = 0x1;
            } else {
                if (((*(signed char *)0xC8D660E) != 0) && (t18 = *(signed char *)0xC8D6450, (unsigned char)t18 == 1)) {
                    *(unsigned char *)(((int)stk + 0)) = (*(signed char *)0xC8D6498);
                    FUN_0c2e4c98(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
                    *(unsigned char *)0xC8D6498 = (*(signed char *)(((int)stk + 0)));
                }
                t27 = 0x0;
            }
            (((struct o0_uchar *)0xC8D660E)->v) = t27;
            t29 = FUN_0c2d7762();
            if ((signed char)t29 == 0) {
                t79 = (signed char)t29;
                if (((*(signed char *)0xC8D660F) == 0) && (t37 = *(signed char *)0xC8D6450, t37 == 0)) {
                    t40 = *(signed char *)0xC8D677E;
                    t79 = (unsigned char)t40;
                    if (((unsigned char)t40 & 8) != 0) {
                        *(unsigned char *)(((int)stk + 0)) = (*(signed char *)0xC8D6498);
                        t79 = FUN_0c2e4c98(0x6, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
                        *(unsigned char *)0xC8D6498 = (*(signed char *)(((int)stk + 0)));
                    }
                }
                t67 = 0x1;
            } else {
                t79 = (signed char)t29;
                if ((*(signed char *)0xC8D660F) != 0) {
                    t53 = *(signed char *)0xC8D6450;
                    t79 = (unsigned char)t53;
                    if ((unsigned char)t53 == 16) {
                        *(unsigned char *)(((int)stk + 0)) = (*(signed char *)0xC8D6498);
                        t79 = FUN_0c2e4c98(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
                        *(unsigned char *)0xC8D6498 = (*(signed char *)(((int)stk + 0)));
                    }
                }
                t67 = 0x0;
            }
            (((struct o1_uchar *)0xC8D660E)->v) = t67;
        }
    }
    return t79;
}

int FUN_0c18cc94(int a4)
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
            *(unsigned short *)((a4 + 0xC)) = 0x0;
            *(unsigned int *)((a4 + 0x10)) = 0x0;
            FUN_0c19a7b2(t0, (*(signed char *)((a4 + 0x9))), (*(signed char *)((a4 + 0xA))), (*(signed char *)((a4 + 0xB))), ((*(short *)((a4 + 0xC)))), ((*(int *)((a4 + 0x10)))), ((*(int *)((a4 + 0x14)))));
            t3 = FUN_0c19a6a4(t0, (*(int *)((a4 + 0x0))), (*(short *)((a4 + 0x4))));
            t1 = t0;
            if ((int)t3 < 0) {
                t3 = FUN_0c190f66(t0);
                FUN_0c19a8ce(t0);
                t0 = 0xFFFFFFFA;
                if (t3 == 6) {
                    t0 = 0xFFFFFFF9;
                }
                t1 = t0;
            }
        }
    }
    return t1;
}

int FUN_0c18004c(int a4, int a5, int a6, int a7)
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
    v0_0 = a4;
    v0_1 = a5;
    v0_5 = a6;
    v0_2 = a7;
    *(unsigned int *)(((int)stk + 0)) = v0_1;
    *(unsigned int *)(((int)stk + 4)) = v0_2;
    (((struct oC_uint *)0xC86CBFC)->v) = (((((struct oC_int *)0xC86CBFC)->v)) + v0_5);
    *(unsigned int *)(((int)stk + 8)) = (signed char)(((v0_0 << 1) + v0_0) << 2);
    *(unsigned int *)((((signed char)(((v0_0 << 1) + v0_0) << 2) + 0xC86CD00) + 0x0)) = (*(int *)(((int)stk + 0)));
    *(unsigned int *)((((signed char)(((v0_0 << 1) + v0_0) << 2) + 0xC86CD00) + 0x8)) = v0_5;
    nlsndG2Write((*(int *)(((int)stk + 0))), ((v0_0 << 2) + 0xA0800060));
    v0_7 = (int)(v0_0 - 1) < 0;
    v0_3 = (v0_5);
    v0_6 = (v0_0);
    v0_4 = (0xC86CD00);
    v0_0 = ((v0_0 - 1));
    v0_1 = (0x0);
    v0_2 = (0x0);
    if (v0_7) goto L_C1800C6;
    L_C180096:;
    if (((*(int *)((v0_4 + (signed char)(((v0_0 << 1) + v0_0) << 2)))) == -1)) goto L_C1800C0;
    v0_1 = (((*(int *)((((signed char)(((v0_0 << 1) + v0_0) << 2) + v0_4) + 0x4))) + (*(int *)((((signed char)(((v0_0 << 1) + v0_0) << 2) + v0_4) + 0x8)))));
    L_C1800C6:;
    if ((v0_1 != 0)) goto L_C1800CE;
    v0_1 = (((((struct o0_int *)0xC86CBFC)->v)));
    L_C1800CE:;
    *(unsigned int *)((((*(int *)(((int)stk + 8))) + v0_4) + 0x4)) = v0_1;
    v0_0 = ((v0_6 + 0x1));
    v0_5 = (0x8);
    if (((int)(v0_6 + 0x1) >= (int)0x8)) goto L_C180110;
    L_C1800DE:;
    if (((*(int *)((v0_4 + (signed char)(((v0_0 << 1) + v0_0) << 2)))) == -1)) goto L_C18010A;
    v0_6 = *(int *)((((signed char)(((v0_0 << 1) + v0_0) << 2) + v0_4) + 0x8));
    *(unsigned int *)((((signed char)(((v0_0 << 1) + v0_0) << 2) + v0_4) + 0x4)) = ((*(int *)((((signed char)(((v0_0 << 1) + v0_0) << 2) + v0_4) + 0x4))) + v0_3);
    v0_2 = ((v0_2 + v0_6));
    L_C18010A:;
    v0_6 = (int)(v0_0 + 0x1) < (int)v0_5;
    v0_0 = ((v0_0 + 0x1));
    if (v0_6) goto L_C1800DE;
    L_C180110:;
    *(unsigned int *)(((*(int *)(((int)stk + 4))) + 0x0)) = v0_2;
    return v0_1;
    L_C1800C0:;
    v0_5 = (int)(v0_0 - 1) >= 0;
    v0_0 = ((v0_0 - 1));
    if (v0_5) goto L_C180096;
    goto L_C1800C6;
}

int gdFsReqRdPio(int a4, int a5, int a6)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    if ((a4 != 0) && (t0 = (((struct o4C_short *)(a4))->v), t0 != 0)) {
        if ((*(int *)(((*(int *)((a4 + 0x0))) + 0x1C))) == 0) {
            t0 = *(int *)((a4 + 0x14));
            t1 = *(int *)((a4 + 0x8));
            t2 = *(int *)((a4 + 0x10));
            if ((int)(t0 + t1) < (int)(t1 + t2)) {
                t3 = a5;
                if ((int)(a5 + (t0 + t1)) > (int)(t1 + t2)) {
                    t3 = ((t1 + t2) - (t0 + t1));
                }
                if (t3 == 0) {
                    *(unsigned int *)((a4 + 0x18)) = 0x0;
                    (((struct o50_ushort *)(a4))->v) = 0x1;
                    return 0;
                } else {
                    t2 = _builtin_get_imask();
                    _builtin_set_imask(0xF);
                    t4 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)(((*(int *)((a4 + 0x0))) + 0xC))) + 0x4)))))((t0 + t1), t3, a6, 0x0);
                    if (t4 != 0) {
                        *(unsigned int *)((a4 + 0x3C)) = t4;
                        *(unsigned int *)((a4 + 0x1C)) = t3;
                        (((struct o50_ushort *)(a4))->v) = 0x2;
                        (((struct o4A_ushort *)(a4))->v) = 0x1;
                        (((struct o48_ushort *)(a4))->v) = 0x1;
                        *(unsigned int *)((a4 + 0x18)) = 0x0;
                        *(unsigned int *)(((*(int *)((a4 + 0x0))) + 0x1C)) = a4;
                        t0 = ((int (*)(void))(((((struct o40_int *)((*(int *)(((*(int *)((a4 + 0x0))) + 0xC)))))->v))))();
                    } else {
                        (((struct o50_ushort *)(a4))->v) = 0x1;
                    }
                    _builtin_set_imask(((unsigned int)(((t2 & 0xF) << 2) << 2) >> 4));
                    if (t4 != 0) {
                        return t3;
                    }
                    return 0;
                }
            } else {
                *(unsigned int *)((a4 + 0x18)) = 0x0;
                (((struct o50_ushort *)(a4))->v) = 0x1;
                return 0;
            }
        } else {
            return 0;
        }
    }
    return -10;
}

int FUN_0c2d0e80(void)
{
    register int t0;
    register int t1;

    t0 = FUN_0c2d0c0c();
    if ((signed char)t0 != 0) {
        FUN_0c2eb414();
        t1 = (((struct o0_int *)0xC8D25F0)->v);
        (((struct o7C_uchar *)(t1))->v) = ((*(signed char *)(((t1 + 0x7C) + 0x0))) & 0xFB);
        t1 = (((struct o0_int *)0xC8D25F0)->v);
        (((struct o7C_uchar *)(t1))->v) = ((*(signed char *)(((t1 + 0x7C) + 0x0))) & 0xEF);
        t1 = (((struct o0_int *)0xC8D25F0)->v);
        (((struct o78_uchar *)(t1))->v) = ((*(signed char *)(((t1 + 0x78) + 0x0))) & 0xFB);
        t1 = (((struct o0_int *)0xC8D25F0)->v);
        (((struct o78_uchar *)(t1))->v) = ((*(signed char *)(((t1 + 0x78) + 0x0))) & 0xDF);
        (((struct o7_uchar *)0xC8D25F0)->v) = ((*(signed char *)0xC8D25F7) & 0xEF);
        (((struct o4_uchar *)0xC8D25F0)->v) = ((*(signed char *)0xC8D25F4) & 0x7F);
        (((struct o9_uchar *)0xC8D25F0)->v) = ((*(signed char *)0xC8D25F9) & 0x7F);
        (((struct o9_uchar *)0xC8D25F0)->v) = ((*(signed char *)0xC8D25F9) & 0xEF);
        (((struct o9_uchar *)0xC8D25F0)->v) = ((*(signed char *)0xC8D25F9) & 0xDF);
        (((struct o9_uchar *)0xC8D25F0)->v) = ((*(signed char *)0xC8D25F9) & 0xF7);
        (((struct oA_uchar *)0xC8D25F0)->v) = ((*(signed char *)0xC8D25FA) & 0xFD);
        (((struct oA_uchar *)0xC8D25F0)->v) = ((*(signed char *)0xC8D25FA) & 0xFE);
        (((struct o9_uchar *)0xC8D25F0)->v) = ((*(signed char *)0xC8D25F9) & 0xFD);
        *(unsigned int *)0xC8D2694 = 0x0;
        (((struct o31_uchar *)0xC8D25F0)->v) = 0x0;
        (((struct o0_uchar *)0xC8D2632)->v) = 0x0;
        (((struct o1_uchar *)0xC8D2632)->v) = 0x0;
        FUN_0c2d114a();
        t1 = (((struct o0_int *)0xC8D25F0)->v);
        (((struct o24_uchar *)(t1))->v) = ((*(signed char *)(((t1 + 0x24) + 0x0))) & 0xFB);
        t1 = (((struct o0_int *)0xC8D25F0)->v);
        (((struct o14_uchar *)(t1))->v) = ((*(signed char *)(((t1 + 0x14) + 0x0))) & 0xEF);
        FUN_0c2d487c(0x6A9, 0x7, 0x1);
        FUN_0c2ec410(0xC8D2670, 0x1F4);
        (((struct o1C_uchar *)0xC8D2632)->v) = 0x0;
        t1 = (((struct o0_int *)0xC8D25F0)->v);
        (((struct o24_uchar *)(t1))->v) = ((*(signed char *)(((t1 + 0x24) + 0x0))) | 0x10);
        return FUN_0c2d4ad2();
    }
    return (signed char)t0;
}

int FUN_0c2eb626(int a4, int a5, int a6, int a7)
{
    int stk[2];
    register int t0;
    register int t2;
    register int t6;
    register int t10;

    t0 = FUN_0c2d693c(a4, a5, a6, a7);
    *(unsigned int *)0xC8D6770 = t0;
    if (t0 == 0) {
        FUN_0c2d65ae(0x4F4C);
    } else {
        *(int *)((int)stk + 0) = 0x0;
        t2 = FUN_0c2eb6fe(0x1, 0x43, 0x1, 0x0);
        if ((signed char)t2 != 0) {
            FUN_0c2ec410(((int)stk + 4), 0x32);
            for (;;) {
                if ((unsigned char)(*(signed char *)((0x50 + (*(int *)0xC8D25F0)))) == 74) {
                    *(int *)((int)stk + 0) = 0x0;
                    t6 = FUN_0c2eb6fe(0x1, 0x4A, 0x1, 0x0);
                    if ((signed char)t6 == 0) {
                        FUN_0c2d6962();
                        *(unsigned int *)0xC8D6770 = 0x0;
                        return 0x0;
                    }
                    FUN_0c2d6962();
                    *(unsigned int *)0xC8D6770 = 0x0;
                    return 0x1;
                }
                t10 = FUN_0c2ec430((*(int *)(((int)stk + 4))));
                if ((signed char)t10 != 0) {
                    break;
                }
            }
            FUN_0c2d65ae(0x4E98);
        } else {
            FUN_0c2d6962();
            *(unsigned int *)0xC8D6770 = 0x0;
        }
    }
    return 0x0;
}

int FUN_0c2f7808(void)
{
    register int t0;
    register int t1;

    if ((*(signed char *)0xC8E001D) != 0) {
        t0 = (((struct o4_int *)0xC8DF91C)->v);
        (((struct o4_uint *)0xC8DF91C)->v) = (t0 + 0x1);
        (((struct o0_ushort *)0xC8E099C)->v) = (unsigned char)(FUN_0c2f84a8((*(signed char *)((((t0 + 0x1) - 1) + 0x0)))));
    } else {
        t0 = (((struct o4_int *)0xC8DF91C)->v);
        (((struct o4_uint *)0xC8DF91C)->v) = (t0 + 0x1);
        (((struct o0_ushort *)0xC8E099C)->v) = (unsigned char)(*(signed char *)((((t0 + 0x1) - 1) + 0x0)));
    }
    (((struct o10_ushort *)0xC8DF91C)->v) = (((((struct o10_short *)0xC8DF91C)->v)) - 1);
    (((struct o12_ushort *)0xC8DF91C)->v) = (((((struct o12_short *)0xC8DF91C)->v)) - 1);
    if ((unsigned int)((((struct o4_int *)0xC8DF91C)->v)) > (unsigned int)((((struct o0_int *)0xC8DF91C)->v))) {
        (((struct o4_uint *)0xC8DF91C)->v) = 0xC8DE91A;
    }
    if ((*(signed char *)0xC8E09D5) == 0) {
        if ((unsigned short)((((struct o0_short *)0xC8E099C)->v)) == (unsigned char)(*(signed char *)0xC8E09D8)) {
            (((struct o39_uchar *)0xC8E099C)->v) = 0x1;
            t0 = 0xC8DF91C;
        } else {
            FUN_0c2f806c(((((struct o0_short *)0xC8E099C)->v)));
            t1 = FUN_0c2f78e0();
            (((struct o3A_uchar *)0xC8E099C)->v) = 0x0;
            t0 = t1;
        }
        return t0;
    }
    (((struct o39_uchar *)0xC8E099C)->v) = 0x0;
    if (((((struct o0_short *)0xC8E099C)->v)) == 0) {
        (((struct o0_uchar *)0xC8E0AD9)->v) = 0x0;
        *(unsigned short *)0xC8E0AEE = 0x0;
        (((struct o1_uchar *)0xC8E0AD9)->v) = 0x1;
        (((struct o38_uchar *)0xC8E099C)->v) = 0x0;
        return 0xC8DF91C;
    }
    t0 = (((struct o0_short *)0xC8E099C)->v);
    if ((unsigned short)t0 == 1) {
        (((struct o0_ushort *)0xC8E099C)->v) = (unsigned char)(*(signed char *)0xC8E09D8);
        FUN_0c2f806c((*(signed char *)0xC8E09D8));
        t1 = FUN_0c2f78e0();
        (((struct o3A_uchar *)0xC8E099C)->v) = 0x0;
        (((struct o3C_uchar *)0xC8E099C)->v) = ((*(signed char *)0xC8E09D8) + 0x33);
        return t1;
    }
    if ((unsigned short)t0 == 2) {
        return FUN_0c2f82ec();
    }
    return (unsigned short)t0;
}

int kmySetHSyncInterruptLine(int a4)
{
    register int t0;
    register int t1;
    register int t26;
    register int t27;
    register int t29;
    int t31;
    register int t33;
    register int t3;
    register int t10;

    t0 = (((struct o34_int *)0xC8D0614)->v);
    t1 = *(int *)0xC8D0658;
    if (((((((struct o0_int *)0xC8D05CC)->v)) & 0x1) != 1) && ((t3 = (((struct o0_int *)0xC8D05CC)->v), (t3 & 44) != 0) && (0x1 != 0))) {
        t10 = ((unsigned int)((unsigned int)((((struct o0_int *)0xC8D0614)->v)) >> 16) >> 1);
    } else {
        t10 = ((unsigned int)((((struct o0_int *)0xC8D0614)->v)) >> 16);
    }
    t26 = (a4 + (t1 + t0));
    if (((((((struct o0_int *)0xC8D05CC)->v)) & 0x1) != 1) || (0x1 == 0)) {
        t26 = (a4 + (t1 + t0));
        if ((((((struct o0_int *)0xC8D05CC)->v)) & 32) != 0) {
            t26 = ((((int)((unsigned int)((int)((unsigned int)a4 + (unsigned int)0x0)) + ((((int)0x0 > (int)a4)) ? 1u : 0u))) >> 1) + (t1 + t0));
        }
    }
    t27 = t26;
    if ((int)t26 < 0) {
        t27 = (t26 + t10);
    }
    t29 = t27;
    if ((int)t27 > (int)t10) {
        t29 = t10;
    }
    t31 = t29;
    if ((int)t29 < 0) {
        t31 = 0x0;
    }
    t33 = (((struct o3C_int *)0xC8D05CC)->v);
    (((struct o3C_uint *)0xC8D05CC)->v) = ((t33 & 0x3FF0000) | (0x3FF & t31));
    kmiWriteRegister(0xC8, ((t33 & 0x3FF0000) | (0x3FF & t31)));
    return 0x0;
}

int vmsfs_connect(int a4)
{
    register int t0;
    register int t1;

    *(unsigned int *)((((a4 * 0x148) + 0xC8C4604) + 0x1C)) = ((a4 * 0x4C) + 0xC8C9064);
    *(unsigned int *)((((a4 * 0x148) + 0xC8C4604) + 0x30)) = 0x1;
    t0 = *(int *)((((a4 * 0x148) + 0xC8C4604) + 0x4));
    *(unsigned int *)((((a4 * 0x148) + 0xC8C4604) + 0x34)) = (*(int *)((((((t0 << 2) + t0) << 2) << 2) + 0xC303C80)));
    t0 = *(int *)((((a4 * 0x148) + 0xC8C4604) + 0x34));
    t1 = *(int *)((((a4 * 0x148) + 0xC8C4604) + 0x30));
    *(unsigned int *)((((a4 * 0x148) + 0xC8C4604) + 0x30)) = (t1 + 0x1);
    vmsfs_c_progress(a4, (*(int *)(((((((a4 << 2) << 2) << 2) << 1) + 0xC8C21EC) + 0x8))), ((t1 + 0x1) - 1), t0);
    t0 = vmsfs_mediainfo_retry(a4, (*(int *)((((a4 * 0x148) + 0xC8C4604) + 0x1C))));
    if ((int)t0 < 0) {
        *(unsigned char *)((((a4 * 0x148) + 0xC8C4604) + 0x9)) = 0x0;
        *(unsigned char *)((((a4 * 0x148) + 0xC8C4604) + 0x8)) = 0x0;
        t0 = 0xFFFFFF01;
    } else {
        t1 = check_caps(((a4 * 0x148) + 0xC8C4604));
        t0 = 0xFFFFFF83;
        if ((int)t1 >= 0) {
            t1 = *(int *)((((a4 * 0x148) + 0xC8C4604) + 0x1C));
            *(unsigned int *)((t1 + 0x30)) = (*(int *)((t1 + 0x1C)));
            t1 = vmsio_block_read(a4, 0x0, 0xC8CA710);
            t0 = 0xFFFFFF01;
            if ((int)t1 < 0) {
            } else {
                *(unsigned char *)((((a4 * 0x148) + 0xC8C4604) + 0x9)) = 0x1;
                *(unsigned char *)((((a4 * 0x148) + 0xC8C4604) + 0xA)) = 0x0;
                *(unsigned char *)((((a4 * 0x148) + 0xC8C4604) + 0xB)) = 0x0;
                *(unsigned char *)((((a4 * 0x148) + 0xC8C4604) + 0xC)) = 0x0;
                t1 = *(int *)((((a4 * 0x148) + 0xC8C4604) + 0x4));
                t0 = 0xF;
                if (t1 != 0) {
                    t0 = 0x21;
                    if (t1 != 1) {
                        t0 = 0x41;
                        if (t1 != 2) {
                            t0 = 0x7A;
                            if (t1 != 3) {
                                t0 = 0xFFFFFF83;
                            }
                        }
                    }
                }
            }
        }
    }
    return t0;
}

int VQFBfree(int a4, int a5, int a6, Stk5 s)
{
    int stk[19];
    register int t1;
    register int t27;
    register int t4;
    int t5;
    register int t7;
    register int t60;
    register int t33;
    register int t40;
    register int t34;
    register int t35;
    register int t36;
    register int t45;
    register int t26;
    register int t2;
    register int t3;
    register int t6;

    stk[6] = s.w[0];
    stk[7] = s.w[1];
    stk[8] = s.w[2];
    stk[9] = s.w[3];
    stk[10] = s.w[4];
    t4 = *(int *)0xC304160;
    t1 = *(int *)(((((int)stk + 4) + 0x18) + 0x10));
    t27 = 0x0;
    if (t4 != 0) {
        t5 = a6;
        t7 = 0x0;
        for (;;) {
            if ((((unsigned short)(*(short *)((t4 + 0x0))) & 0xF000) == (*(int *)(((((int)stk + 4) + 0x18) + 0x0)))) && (t5 = 0x0, (unsigned int)0x0 < (unsigned int)t1)) {
                for (;;) {
                    t3 = t5;
                    t3 = (t3 << 2);
                    t3 = (t3 + (t4 + 0xC));
                    if ((*(int *)((t3 + 0x0))) != 0) {
                        t2 = (*(int *)(((((int)stk + 4) + 0x18) + 0x4)));
                        t2 = ((unsigned int)t2 >> 2);
                        t2 = (t5 * t2);
                        t2 = (t2 << 2);
                        t2 = (t2 + (*(int *)((t4 + 0x8))));
                        if (t2 == a4) {
                            t6 = t5;
                            t7 = t4;
                            t4 = 0x0;
                            t5 = t1;
                        }
                    }
                    t5 = (t5 + 0x1);
                    if ((unsigned int)t5 >= (unsigned int)t1) {
                        break;
                    }
                }
            }
            if (t7 == 0) {
                t4 = (*(int *)((t4 + 0x4)));
            }
            if (t4 == 0) {
                break;
            }
        }
        t26 = t6;
        t27 = t7;
    }
    t60 = 0x7;
    if (t27 != 0) {
        *(unsigned int *)((((t26 << 2) + (t27 + 0xC)) + 0x0)) = 0x0;
        t33 = *(int *)(((((int)stk + 4) + 0x18) + 0x10));
        t40 = 0x0;
        if ((unsigned int)0x0 < (unsigned int)t33) {
            t34 = 0x0;
            t35 = 0x0;
            for (;;) {
                t36 = *(int *)((((t34 << 2) + (t27 + 0xC)) + 0x0));
                t34 = (t34 + 0x1);
                if (t36 != 0) {
                    t35 = 0x1;
                }
                if ((unsigned int)t34 >= (unsigned int)t33) {
                    break;
                }
            }
            t40 = t35;
        }
        t60 = 0x0;
        if (t40 == 0) {
            t45 = kmyFreeArea((*(int *)((t27 + 0x8))));
            t60 = t45;
            if (t45 != 0) {
            } else {
                FUN_0c2c7eb0(0xC304160, t27);
                kmytex_VQFreeEntry(t27);
                t60 = 0x0;
            }
        }
    }
    return t60;
}

int kmyInitializeVGA(int a4, int a5, int a6, int a7)
{
    int stk[63];
    register int t6;

    (((struct o0_uint *)0xC8D05CC)->v) = a4;
    FUN_0c2cb558(a4, a5, a6);
    *(unsigned int *)(((int)stk + 8)) = 0x359;
    *(unsigned int *)(((int)stk + 20)) = 0x20C;
    *(unsigned int *)(((int)stk + 0)) = 0x7E;
    *(unsigned int *)(((int)stk + 4)) = 0x345;
    *(unsigned int *)(((int)stk + 12)) = 0x28;
    *(unsigned int *)(((int)stk + 16)) = 0x208;
    *(unsigned int *)(((int)stk + 24)) = 0x3F;
    *(unsigned int *)(((int)stk + 28)) = 0x3;
    *(unsigned int *)(((int)stk + 32)) = 0x319;
    *(unsigned int *)(((int)stk + 36)) = 0xF;
    *(unsigned int *)(((int)stk + 116)) = 0x208;
    *(unsigned int *)(((int)stk + 120)) = 0x15;
    *(unsigned int *)(((int)stk + 52)) = 0x0;
    *(unsigned int *)(((int)stk + 56)) = 0x0;
    *(unsigned int *)(((int)stk + 60)) = 0x0;
    *(unsigned int *)(((int)stk + 64)) = 0x0;
    *(unsigned int *)(((int)stk + 68)) = 0x0;
    *(unsigned int *)(((int)stk + 112)) = 0x16;
    if ((a4 & 0x10) != 0) {
        *(unsigned int *)(((int)stk + 108)) = 0x0;
    } else {
        *(unsigned int *)(((int)stk + 108)) = 0x1;
    }
    *(unsigned int *)(((int)stk + 40)) = 0x0;
    *(unsigned int *)(((int)stk + 44)) = 0x0;
    *(unsigned int *)(((int)stk + 48)) = 0x0;
    *(unsigned int *)(((int)stk + 72)) = 0x1;
    *(unsigned int *)(((int)stk + 76)) = 0x0;
    *(unsigned int *)(((int)stk + 80)) = 0x0;
    *(unsigned int *)(((int)stk + 84)) = 0x0;
    *(unsigned int *)(((int)stk + 88)) = 0x0;
    *(unsigned int *)(((int)stk + 92)) = 0x0;
    *(unsigned int *)(((int)stk + 104)) = 0x0;
    *(unsigned int *)(((int)stk + 96)) = 0x0;
    *(unsigned int *)(((int)stk + 100)) = 0x1E0;
    *(unsigned int *)(((int)stk + 248)) = 0xA8;
    *(unsigned int *)(((int)stk + 240)) = 0x28;
    *(unsigned int *)(((int)stk + 244)) = 0x28;
    (((struct o8_uint *)0xC8D0678)->v) = 0x1E0;
    (((struct o0_uint *)0xC8D0678)->v) = ((*(int *)(((int)stk + 12))) + ((((struct o8_int *)0xC8D0678)->v)));
    (((struct o4_uint *)0xC8D0678)->v) = (*(int *)(((int)stk + 12)));
    t6 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))(((((struct o8_int *)0xC8D05CC)->v))))(((int)stk + 0), 0x28, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
    return 0x0;
}

int FUN_0c2d5518(void)
{
    register int t0;

    t0 = FUN_0c2d6272();
    if ((*(signed char *)0xC8D265C) == 1) {
        if ((unsigned char)t0 != 2) {
            if ((unsigned char)t0 != 3) {
                if ((unsigned char)t0 != 4) {
                    if ((unsigned char)t0 != 5) {
                        if ((unsigned char)t0 != 6) {
                            if ((unsigned char)t0 != 7) {
                                if ((unsigned char)t0 != 8) {
                                    return 0x1;
                                }
                                return 0x8;
                            }
                            return 0xA;
                        }
                        return 0xC;
                    }
                    return 0x10;
                }
                return 0x18;
            }
            return 0x30;
        }
        return 0x60;
    }
    if ((int)(unsigned char)t0 <= (int)0x5) {
        if ((unsigned char)t0 != 0) {
            if ((unsigned char)t0 != 1) {
                if ((unsigned char)t0 != 2) {
                    if ((unsigned char)t0 != 3) {
                        if ((unsigned char)t0 != 4) {
                            if ((unsigned char)t0 != 5) {
                                return 0x1;
                            }
                            return 0x2;
                        }
                        return 0x3;
                    }
                    return 0x6;
                }
                return 0xB;
            }
            if (((*(signed char *)((((*(int *)0xC8D25F0) + 0x18) + 0x0))) & 16) != 0) {
                return 0xD;
            }
            return 0x4;
        }
        return 0xAB;
    }
    return 0x2;
}

int FUN_0c2ec45e(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t1 = *(signed char *)0xC8D67BA;
    if ((0x20 & (unsigned char)t1) != 0) {
        (((struct o26_uchar *)0xC8D6794)->v) = ((*(signed char *)0xC8D67BA) & 0xDF);
        return ((int (*)(int, int, int))(FUN_0c2ec532))(0xC8D67BA, a5, (unsigned char)t1);
    }
    t2 = (((struct o24_short *)0xC8D6794)->v);
    if ((0x717 & (unsigned short)t2) != 0) {
        if (((unsigned char)t1 & 0x10) != 0) {
            t3 = *(signed char *)0xC8D6799;
            if (((unsigned char)(t3 & 0xF) != 2) && (((unsigned char)(t3 & 0xF) != 4) && ((unsigned char)(t3 & 0xF) != 5))) {
                FUN_0c2ec67a(0x0);
                return ((int (*)(void))(FUN_0c2ec532))();
            }
            (((struct o26_uchar *)0xC8D6794)->v) = ((*(signed char *)0xC8D67BA) & 0xEF);
            return FUN_0c2ec304();
        }
        if (((0x80 & (unsigned short)t2) == 0) && (((0x40 & (unsigned short)t2) != 0) || (t0 = *(signed char *)0xC8D67A2, ((unsigned char)t0 & 32) == 0))) {
            t0 = 0xC8D67BA;
            if ((0x10 & (unsigned short)t2) != 0) {
                if (((unsigned char)(*(signed char *)0xC8D679F) & 64) != 0) {
                    t2 = ((*(signed char *)0xC8D6794) | 0x40);
                } else {
                    t2 = ((*(signed char *)0xC8D6794) | 0x80);
                }
                (((struct o0_uchar *)0xC8D6794)->v) = t2;
                t0 = 0xC8D6794;
            }
            return ((int (*)(int, int, int))(FUN_0c2ec532))(t0, 0xC8D6799, (unsigned char)t1);
        }
        *(unsigned char *)0xC8DA0E8 = 0x0;
        (((struct o22_uchar *)0xC8D6794)->v) = 0x2;
        return 0xC8D67B6;
    }
    return FUN_0c2ec304();
}

int FUN_0c1943d0(int a4, int a5, int a6)
{
    int stk[12];
    register int t1;
    register int t6;

    *(unsigned short *)(((int)stk + 8)) = a4;
    *(unsigned int *)(((int)stk + 24)) = a5;
    *(int *)((int)stk + 0) = (((int)stk + 4) + 0x10);
    t1 = FUN_0c193fc0((*(short *)(((int)stk + 8))), (((int)stk + 0) + 0xC), (((int)stk + 0) + 0x10), (((int)stk + 0) + 0x4));
    if ((unsigned short)t1 != 0) {
        return t1;
    }
    if ((int)(unsigned short)(*(short *)(((int)stk + 4))) < (int)(short)a6) {
        return 0xFFFFFFFF;
    }
    *(unsigned short *)(((int)stk + 28)) = (*(short *)(((int)stk + 8)));
    *(unsigned char *)(((int)stk + 37)) = 0x1;
    *(unsigned short *)(((int)stk + 40)) = a6;
    *(unsigned int *)(((int)stk + 44)) = (*(int *)(((int)stk + 24)));
    *(unsigned int *)(((int)stk + 32)) = 0x0;
    t6 = FUN_0c184000(0x4118, (((int)stk + 4) + 0x18), 0x0);
    if ((short)t6 == 0) {
        return a6;
    }
    if ((short)t6 == -1) {
        return 0x0;
    }
    return t6;
}

int FUN_0c19e39c(int a4, int a5, int a6)
{
    int stk[2];

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
    v0_5 = a4;
    v0_3 = a5;
    v0_0 = a6;
    *(unsigned int *)(((int)stk + 4)) = v0_0;
    v0_2 = (0x0);
    v0_0 = ((*(short *)((v0_3 + 0x2))));
    v0_1 = ((*(int *)((v0_5 + 0x30))));
    if (((*(signed char *)((v0_3 + 0x1))) != (*(signed char *)((v0_5 + 0x1))))) goto L_C19E410;
    L_C19E448:;
    if (((int)v0_0 <= 0)) goto L_C19E45C;
    v0_3 = (short)(FUN_0c19d250(((int)stk + 0), (((int)stk + 0) + 0x4))) != -1;
    if (!(v0_3)) goto L_C19E45C;
    v0_4 = *(signed char *)(((int)stk + 1));
    v0_3 = (int)(v0_0 - (unsigned char)v0_4) < 0;
    v0_0 = ((v0_0 - (unsigned char)v0_4));
    v0_5 = (v0_4);
    if (v0_3) goto L_C19E410;
    v0_6 = *(signed char *)(((int)stk + 0));
    v0_3 = (0x8);
    v0_4 = ((unsigned char)v0_6);
    if (((int)(unsigned char)v0_6 > (int)0x8)) goto L_C19E3EA;
    if (((int)v0_4 < (int)(short)v0_2)) goto L_C19E410;
    if ((((*(short *)((v0_1 + 0x1C))) & ((int)0x1 << (int)v0_4)) == 0)) goto L_C19E410;
    goto L_C19E3EA;
    L_C19E45C:;
    v0_2 = (0x0);
    L_C19E45E:;
    return v0_2;
    L_C19E3EA:;
    v0_4 = (((unsigned char)v0_5 - 2));
    L_C19E414:;
    v0_2 = (int)(short)v0_4 > 0;
    v0_4 = ((v0_4 - 1));
    if (v0_2) goto L_C19E3F0;
    v0_5 = *(signed char *)(((int)stk + 0));
    v0_2 = ((unsigned char)v0_5);
    v0_4 = (v0_5);
    if (((int)(unsigned char)v0_5 > (int)v0_3)) goto L_C19E448;
    v0_5 = ((unsigned char)v0_4);
    if (((unsigned char)v0_4 != 3)) goto L_C19E438;
    if ((((*(short *)((v0_1 + 0x1C))) & ((int)0x1 << (int)v0_5)) != 0)) goto L_C19E448;
    L_C19E438:;
    *(unsigned short *)((v0_1 + 0x1C)) = ((*(short *)((v0_1 + 0x1C))) & (~((int)0x1 << (int)(unsigned char)v0_4)));
    v0_5 = (0x1);
    goto L_C19E448;
    L_C19E3F0:;
    v0_2 = (short)(FUN_0c1a02cc((((int)stk + 0) + 0x4), 0xC8B5F58, 0x1)) == 1;
    if (v0_2) goto L_C19E406;
    v0_2 = (0xFFFFFFFF);
    L_C19E40C:;
    if ((v0_2 != -1)) goto L_C19E414;
    L_C19E410:;
    v0_2 = (0xFFFFFFFF);
    goto L_C19E45E;
    L_C19E406:;
    v0_2 = ((unsigned char)(*(signed char *)0xC8B5F58));
    goto L_C19E40C;
}

int FUN_0c2b5992(int a4, int a5, int a6, int a7)
{
    int stk[1];

    register int R2;
    register int R3;
    register int R8;
    register int R10;
    register float F3;
    register float F4;
    register float F5;
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
    register int v0_9;
    v0_5 = a4;
    v0_0 = a5;
    v0_6 = a6;
    v0_9 = a7;
    *(unsigned int *)(((int)stk + 0)) = v0_5;
    v0_5 = adxf_ChkPrmGfr(v0_5, v0_0);
    v0_1 = (v0_5);
    v0_2 = (v0_6);
    v0_3 = (v0_9);
    v0_4 = (v0_0);
    if (((int)v0_5 >= 0)) goto L_C2B59DC;
    *(unsigned int *)((v0_2 + 0x0)) = 0xFFFFFFFF;
    *(unsigned int *)((v0_3 + 0x0)) = 0xFFFFFFFF;
    L_C2B5A54:;
    return v0_1;
    L_C2B59DC:;
    v0_5 = ((*(int *)((((*(int *)(((int)stk + 0))) << 2) + 0xC8CC044))));
    L_C2B5A1A:;
    v0_9 = (0x0);
    if (((*(int *)((v0_5 + 0x0))) != 0)) goto L_C2B59E6;
    v0_7 = ((0x0 + ((v0_5 + 0x14) + 0x2)));
    v0_8 = (((v0_5 + 0x14) + 0x2));
    v0_0 = (v0_9);
    v0_6 = ((unsigned short)(*(short *)(((v0_5 + 0x14) + 0x0))));
    if (((int)v0_4 <= 0)) goto L_C2B5A44;
    L_C2B5A38:;
    v0_9 = (int)(v0_0 + 0x1) < (int)v0_4;
    v0_6 = (v0_6 + (unsigned short)(*(short *)((v0_7 + 0x0))));
    v0_7 = ((v0_7 + 0x2));
    v0_0 = ((v0_0 + 0x1));
    v0_6 = v0_6;
    if (v0_9) goto L_C2B5A38;
    L_C2B5A44:;
    *(unsigned int *)((v0_2 + 0x0)) = (v0_6 + (*(int *)((v0_5 + 0x8))));
    *(unsigned int *)((v0_3 + 0x0)) = (unsigned short)(*(short *)((v0_8 + (v0_4 << 1))));
    goto L_C2B5A54;
    L_C2B59E6:;
    v0_8 = ((v0_5 + 0x14));
    v0_6 = (v0_9);
    L_C2B5A10:;
    if (((int)v0_6 < (int)(unsigned short)(*(short *)((v0_5 + 0x10))))) goto L_C2B59EE;
    v0_5 = ((*(int *)((v0_5 + 0x0))));
    goto L_C2B5A1A;
    L_C2B59EE:;
    v0_0 = ((((v0_6 << 2) << 1) + v0_8));
    if (((unsigned short)(*(short *)(((((v0_6 << 2) << 1) + v0_8) + 0x0))) != v0_4)) goto L_C2B5A0E;
    *(unsigned int *)((v0_2 + 0x0)) = ((*(int *)((v0_5 + 0x8))) + (*(int *)((v0_0 + 0x4))));
    *(unsigned int *)((v0_3 + 0x0)) = (unsigned short)(*(short *)((v0_0 + 0x2)));
    goto L_C2B5A54;
    L_C2B5A0E:;
    v0_6 = ((v0_6 + 0x1));
    goto L_C2B5A10;
}

int mwlRnaInsrtSlntDat(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;

    t0 = *(int *)((a4 + 0x28));
    t1 = *(int *)((a4 + 0x8));
    t2 = (int)((int)0x20 / (int)t1);
    t3 = (int)((int)((t0 - (*(int *)((a4 + 0x34)))) - ((((struct o54_int *)(a4))->v))) / (int)((t2 << 2) << 1));
    t4 = (((struct o50_int *)(a4))->v);
    t5 = (t0 - t4);
    if ((int)(t3 * ((t2 << 2) << 1)) < (int)(t0 - t4)) {
        t5 = (t3 * ((t2 << 2) << 1));
    }
    t0 = (int)((int)0x800 / (int)t1);
    t1 = t5;
    if ((int)t5 >= (int)((t0 << 2) << 1)) {
        t1 = ((t0 << 2) << 1);
    }
    t0 = (int)((int)t1 / (int)((t2 << 2) << 1));
    t1 = 0x0;
    if ((int)(t0 * ((t2 << 2) << 1)) > 0) {
        t3 = 0xC8CD8EC;
        if ((*(int *)((a4 + 0x8))) == 4) {
            t3 = 0xC8CE10C;
        }
        t4 = t3;
        t5 = 0x0;
        for (;;) {
            if ((int)t5 >= (int)(unsigned char)(*(signed char *)((a4 + 0x3)))) {
                break;
            }
            t4 = a4;
            t6 = mwlRnaStartCopy(t4, t5, ((((struct o50_int *)(a4))->v)), ((t3 + 0x20) & 0xFFFFFFE0), (t0 * ((t2 << 2) << 1)));
            t5 = (t5 + 0x1);
            t4 = t6;
        }
        (((struct o58_uint *)(a4))->v) = t4;
        t1 = t4;
    }
    return t1;
}


int kmySetDisplayFrameBuffer(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    if (((((*(int *)0xC8D05CC) & 0x1) != 1) && ((t0 = *(int *)0xC8D05CC, (t0 & 0x2C) == 32) && (0x1 != 0))) || (t1 = (((struct o24_int *)0xC8D0660)->v), t1 == 1)) {
        t0 = 0xEEEE;
        if (a4 != 0) {
            t1 = *(int *)((a4 + 0x1C));
            t2 = 0xEEEE;
            if (a5 != 0) {
                t3 = *(int *)((a5 + 0x1C));
                if (((((struct o24_int *)0xC8D0660)->v)) == 1) {
                    kmiWriteRegister(0x60, t1);
                    kmiWriteRegister(0x64, t3);
                }
                kmiWriteRegister(0x50, t1);
                kmiWriteRegister(0x54, t3);
                t2 = 0x0;
            }
            t0 = t2;
        }
        t1 = t0;
    } else {
        if (a4 != 0) {
            t0 = (((struct o4_int *)0xC8D0660)->v);
            t2 = *(int *)((a4 + 0x1C));
            kmiWriteRegister(0x50, ((*(int *)((a4 + 0x1C))) + ((((struct o0_int *)0xC8D0660)->v))));
            kmiWriteRegister(0x54, (t2 + t0));
            t0 = 0x0;
        } else {
            t2 = 0xEEEE;
            if (a5 != 0) {
                t3 = (((struct o4_int *)0xC8D0660)->v);
                t4 = *(int *)((a5 + 0x1C));
                kmiWriteRegister(0x50, ((*(int *)((a5 + 0x1C))) + ((((struct o0_int *)0xC8D0660)->v))));
                kmiWriteRegister(0x54, (t4 + t3));
                t2 = 0x0;
            }
            t0 = t2;
        }
        t1 = t0;
    }
    return t1;
}

int FUN_0c2edece(int a4)
{
    register int t0;
    register int t1;

    t0 = FUN_0c187d98(a4, 0xC3028F8, 0x8);
    t1 = 0x2;
    if (t0 == 0) {
    } else {
        t0 = FUN_0c187d98(a4, 0xC302904, 0x8);
        t1 = 0x8;
        if (t0 == 0) {
        } else {
            t0 = FUN_0c187d98(a4, 0xC302910, 0x8);
            t1 = 0x10;
            if (t0 == 0) {
            } else {
                t0 = FUN_0c187d98(a4, 0xC30291C, 0x8);
                t1 = 0x4;
                if (t0 == 0) {
                } else {
                    t0 = FUN_0c187d98(a4, 0xC302928, 0x8);
                    t1 = 0x20;
                    if (t0 == 0) {
                    } else {
                        t0 = FUN_0c187d98(a4, 0xC302934, 0x8);
                        t1 = 0x40;
                        if (t0 == 0) {
                        } else {
                            t0 = FUN_0c187d98(a4, 0xC302940, 0x8);
                            t1 = 0x80;
                            if (t0 == 0) {
                            } else {
                                t0 = FUN_0c187d98(a4, 0xC30294C, 0x8);
                                t1 = 0x100;
                                if (t0 == 0) {
                                } else {
                                    t0 = FUN_0c187d98(a4, 0xC302958, 0x8);
                                    t1 = 0x0;
                                    if (t0 == 0) {
                                        t1 = 0x200;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return t1;
}

int FUN_0c2f96dc(int a4)
{

    register int R1;
    register int R3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    v0_1 = a4;
    v0_4 = FUN_0c2eaf6c(v0_1);
    v0_0 = (v0_4);
    v0_1 = ((*(int *)0xC8D67BC));
    v0_2 = (0xC8D65F8);
    v0_3 = (0xC8D65F5);
    if (((unsigned char)v0_4 == (unsigned char)(*(signed char *)0xC8D65F5))) goto L_C2F976E;
    v0_4 = *(int *)((v0_2 + 0x0));
    *(unsigned int *)((v0_2 + 0x0)) = v0_1;
    *(unsigned char *)((v0_3 + 0x0)) = v0_0;
    v0_1 = ((v0_1 - v0_4));
    if ((((unsigned char)(*(signed char *)0xC8D6529) & 32) == 0)) goto L_C2F9722;
    v0_2 = (signed char)(FUN_0c2e8b6e(v0_0, v0_1)) == 0;
    if (v0_2) goto L_C2F9722;
    v0_0 = (0x2);
    L_C2F97A6:;
    return v0_0;
    L_C2F9722:;
    if ((((unsigned char)(*(signed char *)0xC8D6529) & 8) == 0)) goto L_C2F973E;
    v0_2 = (signed char)(FUN_0c2e8d12(v0_0, v0_1)) == 0;
    if (v0_2) goto L_C2F973E;
    v0_0 = (0x1);
    goto L_C2F97A6;
    L_C2F973E:;
    v0_2 = (signed char)(FUN_0c2e8ebc(v0_0, v0_1)) == 0;
    if (v0_2) goto L_C2F9750;
    v0_0 = (0x3);
    goto L_C2F97A6;
    L_C2F9750:;
    if ((((((struct o54_short *)((*(int *)0xC8D66E8)))->v)) == 0)) goto L_C2F97A4;
    v0_0 = (signed char)(FUN_0c2e9036(v0_0, v0_1)) != 0;
    if (v0_0) goto L_C2F97A0;
    L_C2F97A4:;
    v0_0 = (0x0);
    goto L_C2F97A6;
    L_C2F97A0:;
    v0_0 = (0x4);
    goto L_C2F97A6;
    L_C2F976E:;
    v0_3 = (unsigned char)v0_0 == 0;
    v0_0 = ((unsigned char)v0_0);
    if (v0_3) goto L_C2F97A4;
    v0_0 = (0xC8D66E8);
    if ((((unsigned short)((((struct oB0_short *)((*(int *)0xC8D66E8)))->v)) & 0x4000) == 0)) goto L_C2F97A4;
    if ((((((struct o54_short *)((*(int *)((v0_0 + 0x0)))))->v)) != 0)) goto L_C2F97A4;
    if (((unsigned int)(v0_1 - (*(int *)((v0_2 + 0x0)))) < (unsigned int)(unsigned short)((((struct o50_short *)((*(int *)0xC8D66E8)))->v)))) goto L_C2F97A4;
    goto L_C2F97A0;
}

int nlObjPutSetGarbagedTexture_Sub(int a4, int a5, int a6)
{
    int stk[3];
    register int t36;
    register int t2;
    register int t3;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;
    register int t10;
    register int t26;
    register int t17;
    register int t4;
    int t14;
    register int t15;

    *(unsigned int *)(((int)stk + 0)) = a6;
    t5 = *(int *)((a4 + 0x0));
    t36 = 0x0;
    if (((int)t5 >= 0) && (t3 = *(int *)((a4 + 0x18)), t3 != 0)) {
        *(unsigned int *)(((int)stk + 4)) = ((((a5 == 0)) ? 1 : 0) ^ 0x1);
        t2 = ((((a5 == 0)) ? 1 : 0) ^ 0x1);
        t6 = a4;
        t7 = 0x0;
        t8 = (a4 + 0x18);
        for (;;) {
            t9 = *(int *)((t8 + 0x20));
            t10 = t8;
            t8 = (t8 + 0x50);
            t26 = t9;
            if ((int)t9 >= 0) {
                t5 = (*(int *)(((int)stk + 0)));
                t17 = t9;
                if ((t5 != 0) && (t14 = *(int *)(((int)stk + 4)), t15 = (t5 == 0), t5 = t14, t5 != 0)) {
                    t5 = t9;
                    t5 = (t5 << 2);
                    t5 = (t5 << 2);
                    t5 = (t5 + a5);
                    t17 = (*(int *)((t5 + 0xC)));
                }
                t3 = 0xC8A6C9C;
                t2 = 0xC83CD40;
                t4 = (*(int *)((t3 + 0x0)));
                t5 = (*(int *)((t2 + 0x0)));
                t6 = (t17 + t4);
                t6 = (t6 << 2);
                t6 = (t6 << 1);
                t6 = (t6 + t5);
                t4 = (*(int *)((t6 + 0x0)));
                if (t4 == 0) {
                    t7 = 0x1;
                    t26 = 0xFFFFFFFF;
                } else {
                    t26 = (*(int *)((t6 + 0x4)));
                }
            }
            t4 = (*(int *)((t10 + 0xC)));
            t4 = (t4 & 0x7E00000);
            *(unsigned int *)(((int)stk + 8)) = t4;
            if ((int)t26 >= 0) {
                t4 = 0xC176F00;
                t6 = t10;
                t2 = (nl_mesh_set_texture(t6, t26));
            } else {
                t4 = 0xC1770B0;
                t6 = t10;
                t2 = (nlSetDummyTextureParameter(t6));
            }
            t2 = 0x4C;
            t5 = (*(int *)(((int)stk + 8)));
            t4 = (*(int *)((t10 + 0xC)));
            t4 = (t4 | t5);
            *(unsigned int *)((t10 + 0xC)) = t4;
            t3 = (*(int *)((t10 + t2)));
            t8 = (t8 + t3);
            t6 = (*(int *)((t8 + 0x0)));
            if (t6 == 0) {
                break;
            }
        }
        t36 = t7;
    }
    return t36;
}
