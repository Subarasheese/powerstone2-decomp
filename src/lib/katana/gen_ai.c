/* Straight-line functions with calls and guards (batch gen_ai): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o0_ushort { unsigned short v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_short { char p[0x10]; short v; };
struct o12_short { char p[0x12]; short v; };
struct o13A_short { char p[0x13A]; short v; };
struct o14_float { char p[0x14]; float v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o18_int { char p[0x18]; int v; };
struct o18_short { char p[0x18]; short v; };
struct o18_ushort { char p[0x18]; unsigned short v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1C_int { char p[0x1C]; int v; };
struct o1C_uchar { char p[0x1C]; unsigned char v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o24_short { char p[0x24]; short v; };
struct o26_short { char p[0x26]; short v; };
struct o28_short { char p[0x28]; short v; };
struct o2A_short { char p[0x2A]; short v; };
struct o2C_short { char p[0x2C]; short v; };
struct o34_int { char p[0x34]; int v; };
struct o38_int { char p[0x38]; int v; };
struct o3C_int { char p[0x3C]; int v; };
struct o3C_uint { char p[0x3C]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o4C_int { char p[0x4C]; int v; };
struct o4C_uchar { char p[0x4C]; unsigned char v; };
struct o50_uchar { char p[0x50]; unsigned char v; };
struct o6_uchar { char p[0x6]; unsigned char v; };
struct o74_uchar { char p[0x74]; unsigned char v; };
struct o78_uchar { char p[0x78]; unsigned char v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_float { char p[0xC]; float v; };
struct oC_short { char p[0xC]; short v; };
struct oC_uchar { char p[0xC]; unsigned char v; };
struct oC_uint { char p[0xC]; unsigned int v; };
int ADXB_CheckAu(int);
int ADXB_CheckSpsd(int);
int ADXB_DecodeHeaderAdx(int, int, int);
int ADXB_DecodeHeaderAiff(int, int, int);
int ADXB_DecodeHeaderAu(int, int, int);
int ADXB_DecodeHeaderSpsd(int, int, int);
int FUN_0c0e3510(void);
int FUN_0c0e4a80(int);
int FUN_0c180d72(int);
int FUN_0c18558a(int);
int FUN_0c187a88(int, int, int);
int FUN_0c18dad6(int);
int FUN_0c18e24c(int, int, int, int);
int FUN_0c18f4f0(int, int, int, int);
int FUN_0c191554(void);
int FUN_0c191d9e(void);
int FUN_0c191dae(void);
int FUN_0c191ea4(int, int, int);
int FUN_0c191f7c(void);
int FUN_0c192f54(int, int, int, int, int);
int FUN_0c193120(int, int);
int FUN_0c193be4(void);
int FUN_0c193c1e(int);
int FUN_0c193fc0(int, int, int, int);
int FUN_0c1947d0(int, int, int, int);
int FUN_0c197c58(int, int, int, int);
int FUN_0c19af74(int);
int FUN_0c19bdaa(int, int, int, int);
int FUN_0c19c058(int);
int FUN_0c19c098(int);
int FUN_0c1a2184(void);
int FUN_0c2c14a8(void);
int FUN_0c2c6304(void);
int FUN_0c2c631c(int, int);
int FUN_0c2c70c0(int, int, int, int);
int FUN_0c2d487c(int, int, int);
int FUN_0c2d4ad2(void);
int FUN_0c2d63ba(void);
int FUN_0c2d7806(int);
int FUN_0c2d7df8(int, int);
int FUN_0c2d8590(int, int);
int FUN_0c2e31e0(int, int);
int FUN_0c2e715e(int);
int FUN_0c2e7200(int);
int FUN_0c2e732c(void);
int FUN_0c2e76c8(int, int);
int FUN_0c2e83ae(void);
int FUN_0c2ec410(int, int);
int FUN_0c2ec430(int);
int FUN_0c2edb78(int);
int FUN_0c2edc3c(int);
int FUN_0c2ee4ba(int);
int FUN_0c2eeb4a(int);
int FUN_0c2eec74(int, int);
int FUN_0c2ef364(void);
int FUN_0c2ef3bc(void);
int FUN_0c2ef3c8(void);
int FUN_0c2f0816(int);
int FUN_0c2f1804(int, int, int);
int FUN_0c2f1c20(int);
int FUN_0c2f2926(int);
int FUN_0c2fa4cc(int, int, int);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int clear_file(int, int);
int get_fat(int, int);
int kmSetEORCallback(int, int);
int kmSetTexOverflowCallback(int, int);
int kmiWriteRegister(int, int);
int kmtex_GetTextureLevel(int, int);
int kmytex_TXalloc(int, int, int, int);
int kmytex_TXalloc2(int, int, int, int);
int memcpy(int, int, int);
int nlMultiMatrix(int);
int nlSetIntrFunction(int, int);
int nlSetIntrPriority(int, int);
int search_dir(int, int, int);
int search_exec_file(int, int);
int strlen(int);
int syChainAddHandler(int, int, int, int);
int thunk_FUN_0c191de2(void);
int thunk_FUN_0c2b606c(int);
int thunk_FUN_0c2c067e(int);
int vmsfs_c_progress(int, int, int, int);
int vmsfs_fwrite1(int, int);
int vmsfs_unmount(int);
int vmsfs_xwrite1(int, int);
int vmsio_block_write(int, int, int);
int vmsio_ismount(int);
int vmsio_isready(int);
int write_dir(int);
int write_fat(int);
int vmsfs_sysdiskfree(int a4);
int FUN_0c2f285e(int a4);
int FUN_0c0ed7e4(int a4);
int FUN_0c2e7248(int a4, int a5);
int FUN_0c18eba8(int a4, int a5, int a6);
int FUN_0c2d0f7c(int a4);
int FUN_0c19aaf0(int a4, int a5);
int kmtex_ConvertSmallVQToMem(int a4, int a5, int a6, int a7);
int FUN_0c2bd8b4(int a4, int a5, int a6);
int FUN_0c2bf4d2(int a4, int a5, int a6);
int FUN_0c2edab8(void);
int FUN_0c2f64d2(void);
int nlSearchPalette(int a4, int a5);
int FUN_0c17d980(void);
int vmsfs_fisexist(int a4, int a5);
int FUN_0c182050(int a4);
int FUN_0c19adb4(int a4, int a5, int a6, int a7);
int kmSetHSyncLine(int a4);
int FUN_0c2bf2ae(int a4, int a5, int a6);
int FUN_0c2d4b50(void);
int FUN_0c2d7690(int a4);
int nlInitInterrupt0(int a4);
int FUN_0c1848e8(void);
int FUN_0c193846(int a4, int a5, int a6);
int SJRBF_PutChunk(int a4, int a5, int a6, int a7);
int FUN_0c2dbb7e(int a4, int a5, int a6);
int FUN_0c1849d8(int a4);
int FUN_0c18d914(int a4, int a5, int a6, int a7);
int vmsfs_fdelete(int a4, int a5);
int vmsfs_xfind(int a4, int a5, int a6);
int FUN_0c2c6c60(int a4, int a5, int a6);
int FUN_0c2d7d42(int a4, int a5, int a6);
int FUN_0c2d7b34(int a4, int a5, int a6);
int FUN_0c2eef70(void);
int nlFrustum(float f4, float f5, float f6, float f7, float f8, float f9);
int FUN_0c180bec(int a4, int a5, int a6);
int FUN_0c1862a0(int a4, int a5);
int FUN_0c0f28b6(int a4);


int FUN_0c2f285e(int a4)
{
    int stk[5];
    register int t0;
    register int t9;
    register int t10;
    register int t13;
    register int t16;
    register int t8;

    *(unsigned char *)(((int)stk + 12)) = a4;
    t0 = *(signed char *)(((int)stk + 12));
    *(unsigned int *)(((int)stk + 16)) = (unsigned char)t0;
    FUN_0c2fa4cc((((unsigned char)t0 << 1) + 0xC), 0x2, (((int)stk + 0) + 0x4));
    FUN_0c2fa4cc(((((*(int *)(((int)stk + 16))) + 0x1) << 1) + 0xC), 0x2, (((int)stk + 0) + 0x8));
    FUN_0c2e732c();
    FUN_0c2e7200(0xC302CAC);
    t9 = t8;
    t10 = 0x0;
    for (;;) {
        if ((unsigned int)(*(short *)(((int)stk + 4))) >= (unsigned int)(*(short *)(((int)stk + 8)))) {
            break;
        }
        t13 = *(short *)(((int)stk + 4));
        *(unsigned short *)(((int)stk + 4)) = (t13 + 0x1);
        t9 = ((t13 + 0x1) - 1);
        FUN_0c2fa4cc(t9, 0x1, ((int)stk + 0));
        t9 = (*(signed char *)(((int)stk + 0)));
        t16 = FUN_0c2f2926(t9);
        if ((signed char)t16 != 0) {
            FUN_0c2e732c();
        } else {
            t9 = (*(signed char *)(((int)stk + 0)));
            t9 = (unsigned char)t9;
            if ((unsigned char)t10 == 1) {
                if (t9 == 93) {
                    t10 = 0x0;
                }
            } else {
                if (t9 == 91) {
                    t10 = 0x1;
                } else {
                    t9 = (*(signed char *)(((int)stk + 0)));
                    FUN_0c2e715e(t9);
                }
            }
        }
    }
    FUN_0c2e732c();
    FUN_0c2e7200(0xC302CBC);
    return (FUN_0c2e732c());
}

int FUN_0c0ed7e4(int a4)
{
    register int t0;

    t0 = *(int *)((a4 + 0x0));
    *(unsigned int *)((((t0 * 0x34) + ((*(int *)0xC304080) + 0x4)) + 0x0)) = t0;
    *(unsigned int *)(((((*(int *)((a4 + 0x0))) * 0x34) + ((*(int *)0xC304080) + 0x4)) + 0x28)) = 0x0;
    *(unsigned int *)(((((*(int *)((a4 + 0x0))) * 0x34) + ((*(int *)0xC304080) + 0x4)) + 0x2C)) = 0x0;
    *(unsigned int *)(((((*(int *)((a4 + 0x0))) * 0x34) + ((*(int *)0xC304080) + 0x4)) + 0x30)) = 0x0;
    *(unsigned int *)(((((*(int *)((a4 + 0x0))) * 0x34) + ((*(int *)0xC304080) + 0x4)) + 0x4)) = 0x0;
    *(unsigned int *)(((((*(int *)((a4 + 0x0))) * 0x34) + ((*(int *)0xC304080) + 0x4)) + 0x8)) = 0x0;
    *(unsigned int *)(((((*(int *)((a4 + 0x0))) * 0x34) + ((*(int *)0xC304080) + 0x4)) + 0xC)) = 0x0;
    *(unsigned int *)(((((*(int *)((a4 + 0x0))) * 0x34) + ((*(int *)0xC304080) + 0x4)) + 0x10)) = 0x0;
    *(unsigned int *)(((((*(int *)((a4 + 0x0))) * 0x34) + ((*(int *)0xC304080) + 0x4)) + 0x14)) = 0x0;
    *(unsigned int *)(((((*(int *)((a4 + 0x0))) * 0x34) + ((*(int *)0xC304080) + 0x4)) + 0x18)) = 0x3;
    *(unsigned int *)(((((*(int *)((a4 + 0x0))) * 0x34) + ((*(int *)0xC304080) + 0x4)) + 0x1C)) = 0x0;
    *(unsigned int *)(((((*(int *)((a4 + 0x0))) * 0x34) + ((*(int *)0xC304080) + 0x4)) + 0x20)) = 0x0;
    *(unsigned int *)(((((((*(int *)((a4 + 0x0))) << 2) << 2) << 1) + (*(int *)(((*(int *)0xC304080) + 0x0)))) + 0x14)) = 0x0;
    return 0x0;
}

int FUN_0c2e7248(int a4, int a5)
{
    int stk[4];
    register int t0;
    register int t39;
    register int t4;
    register int t7;
    register int t26;
    register int t28;
    register int t33;
    register int t5;
    int t6;
    register int t34;

    t0 = *(signed char *)0xC8D644E;
    t39 = (unsigned char)t0;
    if (((unsigned char)t0 & 4) == 0) {
        t4 = *(signed char *)0xC8D644E;
        if (((0x10 & (unsigned char)t4) != 0) && ((t5 = *(signed char *)0xC8D6782, ((unsigned char)t5 & 64) != 0) || (((0x80 & (unsigned char)t4) == 0) && (t6 = *(signed char *)0xC8D677E, ((unsigned char)t6 & 8) != 0)))) {
            t7 = *(signed char *)0xC8D6782;
            (((struct o2_uchar *)0xC8D6780)->v) = (t7 & 0xBF);
            t34 = (t7 & 0xBF);
        } else {
            FUN_0c2e83ae();
            t26 = a5;
            if (a5 == 0) {
                t26 = (*(int *)((((unsigned char)a4 << 2) + 0xC301528)));
            }
            (((struct o0_uchar *)0xC8D6780)->v) = ((*(signed char *)0xC8D6780) | 0x1);
            if (((unsigned char)(*(signed char *)0xC8D644E) & 8) == 0) {
                
                FUN_0c2e76c8((unsigned char)a4, 0xA);
                FUN_0c2e7200(((int)stk + 0));
                FUN_0c2e715e((*(signed char *)0xC8D6443));
            } else {
                FUN_0c2e732c();
                for (;;) {
                    if ((*(signed char *)((t26 + 0x0))) == 0) {
                        break;
                    }
                    t28 = *(signed char *)((t26 + 0x0));
                    t26 = (t26 + 0x1);
                    FUN_0c2e715e(t28);
                }
                FUN_0c2e732c();
            }
            t33 = *(signed char *)0xC8D6780;
            (((struct o0_uchar *)0xC8D6780)->v) = (t33 & 0xFE);
            t34 = (t33 & 0xFE);
        }
        t39 = t34;
    }
    return t39;
}

int FUN_0c18eba8(int a4, int a5, int a6)
{
    int stk[4];

    register int R1;
    register int R2;
    register int R3;
    register int R7;
    register int R8;
    register int R11;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    v0_3 = a4;
    v0_0 = a5;
    v0_4 = a6;
    v0_0 = (v0_0);
    v0_1 = (v0_4);
    v0_2 = (v0_3);
    v0_3 = (v0_3);
    if (((unsigned short)(*(short *)((0xC8A8F1C + ((((v0_4 << 1) + v0_4) << 2) << 2)))) != 1)) goto L_C18EC56;
    FUN_0c187a88(((int)stk + 0), v0_3, 0x6);
    FUN_0c187a88((((int)stk + 0) + 0x6), (v0_3 + 0x6), 0x6);
    FUN_0c187a88((((int)stk + 0) + 0xC), (v0_3 + 0xC), 0x2);
    v0_4 = (unsigned short)(*(short *)((((int)stk + 0) + 0xC))) != (unsigned short)(FUN_0c18dad6(0x806));
    v0_3 = (((int)stk + 0));
    if (v0_4) goto L_C18EC0E;
    v0_3 = (0x4);
    L_C18EC20:;
    v0_4 = ((unsigned short)v0_3);
    if (((unsigned short)v0_3 == 0)) goto L_C18EC2E;
    if (!((v0_4 == 4))) goto L_C18EC56;
    v0_0 = (FUN_0c18e24c(v0_2, v0_0, 0xE, v0_1)) != 0;
    if (v0_0) goto L_C18EC56;
    goto L_C18EC52;
    L_C18EC56:;
    v0_4 = (0xFFFFFFFF);
    L_C18EC58:;
    return v0_4;
    L_C18EC52:;
    v0_4 = (0x0);
    goto L_C18EC58;
    L_C18EC2E:;
    v0_0 = (FUN_0c18f4f0(v0_2, v0_0, 0xE, v0_1)) == 0;
    if (v0_0) goto L_C18EC52;
    goto L_C18EC56;
    L_C18EC0E:;
    v0_3 = (unsigned short)(*(short *)((v0_3 + 0xC))) != (unsigned short)(FUN_0c18dad6(0x800));
    if (v0_3) goto L_C18EC56;
    v0_3 = (0x0);
    goto L_C18EC20;
}

int FUN_0c2d0f7c(int a4)
{
    register int t0;
    register int t1;

    *(unsigned char *)0xC8D2667 = a4;
    t0 = 0x0;
    if ((int)(unsigned char)a4 > (int)0x3) {
        t0 = (a4 - 0x3);
    }
    if ((int)(unsigned char)t0 > (int)0xF) {
        t1 = ((unsigned char)t0 + 0xFFF1);
        if ((unsigned int)(unsigned short)((unsigned char)t0 + 0xFFF1) > (unsigned int)0x32) {
            t1 = 0x32;
        }
        (((struct o18_ushort *)0xC8D25F0)->v) = (*(short *)(((((unsigned short)t1 - 1) << 1) + 0xC3003E6)));
        FUN_0c2d487c(0x3DA, ((((struct o18_short *)0xC8D25F0)->v)), 0x2);
        t0 = (((struct o0_int *)0xC8D25F0)->v);
        (((struct o4C_uchar *)(t0))->v) = (((*(signed char *)(((t0 + 0x4C) + 0x0))) & 0xF) | 0xF0);
    } else {
        (((struct o18_ushort *)0xC8D25F0)->v) = 0x4000;
        FUN_0c2d487c(0x3DA, 0x4000, 0x2);
        *(volatile int *)0xC8D25F0;
        FUN_0c1a2184();
    }
    return FUN_0c2d4ad2();
}

int FUN_0c19aaf0(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;
    register int t10;
    register int t11;

    t5 = FUN_0c19af74(a4);
    t6 = 0xFFFFFFFC;
    if (t5 == 0) {
        t5 = *(int *)0xC8A73C0;
        t7 = (((struct o13A_short *)(((a4 * 0x174) + t5)))->v);
        if ((unsigned short)t7 == 1) {
            t8 = (unsigned short)t7;
            t7 = 0x0;
            t9 = 0x0;
            t10 = 0x0;
            t11 = 0x0;
            for (;;) {
                if ((int)t10 >= (int)(unsigned char)(*(signed char *)0xC8A738C)) {
                    break;
                }
                t8 = 0x138;
                t7 = t9;
                t7 = (t7 + t5);
                if (((*(short *)((t7 + t8))) != 0) && ((t8 = 0x13C, t0 = *(short *)((t7 + t8)), t1 = t0, t1 = (unsigned short)t1, t1 == a4) && ((t8 = 0x13A, t2 = *(short *)((t7 + t8)), t1 = t2, t1 = (unsigned short)t1, (int)t1 < (int)0xA) && (t3 = *(short *)((t7 + t8)), t4 = t3, t4 = (unsigned short)t4, (int)t4 > 0)))) {
                    t11 = (t11 + 0x1);
                }
                t9 = (t9 + 0x174);
                t10 = (t10 + 0x1);
            }
            *(unsigned short *)((a5 + 0x0)) = t11;
        } else {
            *(unsigned short *)((a5 + 0x0)) = 0x0;
        }
        *(unsigned short *)((a5 + 0x2)) = (FUN_0c19c058(((a4 * 0x174) + t5)));
        *(unsigned short *)((a5 + 0x4)) = (FUN_0c19c098(((a4 * 0x174) + t5)));
        t6 = (unsigned short)((((struct o13A_short *)(((a4 * 0x174) + t5)))->v));
    }
    return t6;
}

int kmtex_ConvertSmallVQToMem(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t6;
    register int t7;

    t0 = kmtex_GetTextureLevel(a6, a6);
    if ((a7 & 0x80000000) != 0) {
        t6 = ((*(int *)(((t0 << 2) + 0xC3001EC))) + 0xA);
        t7 = (*(int *)(((t0 << 2) + 0xC300178)));
    } else {
        t6 = (*(int *)(((t0 << 2) + 0xC3001C0)));
        t7 = (*(int *)(((t0 << 2) + 0xC30015C)));
    }
    FUN_0c2c70c0(a4, a5, t7, 0x0);
    return FUN_0c2c70c0((a4 + 0x800), (a5 + t7), t6, 0x0);
}

int FUN_0c2bd8b4(int a4, int a5, int a6)
{
    int t0;
    register int t1;
    int t2;
    register int t3;

    t1 = (*(int *)0xC8C21C8);
    for (;;) {
        t2 = vmsio_block_write(a4, a5, a6);
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
            t3 = 0xFFFFFF40;
            if (t2 != 0xFFFFFF40) {
                t3 = 0xFFFF0000;
            }
            t1 = t3;
        }
        t0 = t1;
    }
    return t0;
}

int FUN_0c2bf4d2(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;

    t0 = 0xFFFFFF00;
    if (a4 != 0) {
        t1 = 0xFFFFFF01;
        if ((*(signed char *)(((((*(int *)((a4 + 0x28))) * 0x148) + 0xC8C4604) + 0x2))) == 0) {
        } else {
            t2 = *(int *)((a4 + 0x4));
            if (t2 != 1) {
                t3 = 0xFFFFFF0B;
                if (t2 != 2) {
                } else {
                    t2 = *(int *)((a4 + 0x28));
                    *(unsigned int *)(((0xC8C4604 + (t2 * 0x148)) + 0x30)) = 0x1;
                    *(unsigned int *)(((0xC8C4604 + (t2 * 0x148)) + 0x34)) = a6;
                    t2 = 0x0;
                    if ((int)a6 > 0) {
                        t4 = 0x0;
                        t5 = a5;
                        for (;;) {
                            t6 = vmsfs_xwrite1(a4, t5);
                            if ((int)t6 < 0) {
                                break;
                            }
                            t4 = (t4 + 0x1);
                            t5 = (t5 + 0x200);
                            if ((int)t4 >= (int)a6) {
                                return 0x0;
                            }
                        }
                        t2 = t6;
                    }
                    t3 = t2;
                }
                t2 = t3;
            } else {
                t3 = *(int *)((a4 + 0x28));
                *(unsigned int *)(((0xC8C4604 + (t3 * 0x148)) + 0x30)) = 0x1;
                *(unsigned int *)(((0xC8C4604 + (t3 * 0x148)) + 0x34)) = a6;
                t3 = 0x0;
                if ((int)a6 > 0) {
                    t4 = 0x0;
                    t5 = a5;
                    for (;;) {
                        t6 = vmsfs_fwrite1(a4, t5);
                        if ((int)t6 < 0) {
                            break;
                        }
                        t4 = (t4 + 0x1);
                        t5 = (t5 + 0x200);
                        if ((int)t4 >= (int)a6) {
                            return 0x0;
                        }
                    }
                    t3 = t6;
                }
                t2 = t3;
            }
            t1 = t2;
        }
        t0 = t1;
    }
    return t0;
}

int FUN_0c2edab8(void)
{
    register int t0;

    t0 = FUN_0c2edb78((((unsigned char)(*(signed char *)0xC8D647D) << 8) | (unsigned char)(*(signed char *)0xC8D647C)));
    if ((signed char)t0 == 0) {
        FUN_0c2ee4ba(0xC3028A0);
    }
    FUN_0c2ee4ba(0xC302818);
    t0 = 0xC3028B8;
    if (((unsigned char)(*(signed char *)0xC8D6482) & 128) == 0) {
        t0 = 0xC3028B4;
    }
    FUN_0c2ee4ba(t0);
    FUN_0c2edc3c((*(signed char *)0xC8D647E));
    FUN_0c2ee4ba(0xC302818);
    FUN_0c2edc3c((*(signed char *)0xC8D647F));
    FUN_0c2ee4ba(0xC302818);
    FUN_0c2edc3c((*(signed char *)0xC8D6480));
    FUN_0c2ee4ba(0xC302818);
    return FUN_0c2edc3c((*(signed char *)0xC8D6481));
}

int FUN_0c2f64d2(void)
{
    int t0;
    register int t1;

    t1 = FUN_0c2eeb4a(0xC8DFD5C);
    if (((unsigned short)t1 != 0) && (t0 = *(signed char *)0xC8E001C, t0 == 0)) {
        t0 = *(int *)0xC8DFD5C;
        *(unsigned int *)0xC8DFD5C = (t0 + 0x1);
        *(unsigned char *)((((t0 + 0x1) - 0x1) + 0x0)) = (*(signed char *)0xC8DFF96);
        t0 = *(int *)0xC8DFD5C;
        *(unsigned int *)0xC8DFD5C = (t0 + 0x1);
        *(unsigned char *)((((t0 + 0x1) - 0x1) + 0x0)) = ((((unsigned char)(*(signed char *)0xC8DFF94) << 2) << 2) | (*(signed char *)0xC8DFF91));
        return FUN_0c2eec74(0x2, 0x1);
    }
    t0 = (unsigned short)t1;
    if ((int)(unsigned char)(*(signed char *)0xC8E001C) <= (int)0x19) {
        (((struct o1_uchar *)0xC8E001B)->v) = ((*(signed char *)0xC8E001C) + 0x3);
        t1 = *(signed char *)0xC8E001B;
        (((struct o0_uchar *)0xC8E001B)->v) = (t1 + 0x1);
        *(unsigned char *)((0xC8DFFFE + (unsigned char)((t1 + 0x1) - 1))) = 0x2;
        if ((int)(unsigned char)(*(signed char *)0xC8E001B) >= (int)0x1C) {
            (((struct o0_uchar *)0xC8E001B)->v) = 0x0;
        }
        t1 = *(signed char *)0xC8E001B;
        (((struct o0_uchar *)0xC8E001B)->v) = (t1 + 0x1);
        *(unsigned char *)((0xC8DFFFE + (unsigned char)((t1 + 0x1) - 1))) = (*(signed char *)0xC8DFF96);
        if ((int)(unsigned char)(*(signed char *)0xC8E001B) >= (int)0x1C) {
            (((struct o0_uchar *)0xC8E001B)->v) = 0x0;
        }
        t1 = *(signed char *)0xC8E001B;
        (((struct o0_uchar *)0xC8E001B)->v) = (t1 + 0x1);
        *(unsigned char *)((0xC8DFFFE + (unsigned char)((t1 + 0x1) - 1))) = ((((unsigned char)(*(signed char *)0xC8DFF94) << 2) << 2) | (*(signed char *)0xC8DFF91));
        if ((int)(unsigned char)(*(signed char *)0xC8E001B) >= (int)0x1C) {
            (((struct o0_uchar *)0xC8E001B)->v) = 0x0;
        }
        t0 = (unsigned char)((t1 + 0x1) - 1);
    }
    return t0;
}

int nlSearchPalette(int a4, int a5)
{
    register int t1;
    register int t2;
    register int t3;
    register int t5;
    register int t6;
    int t7;
    register int t11;
    register int t18;
    register int t13;
    register int t14;
    register int t32;
    register int t25;
    register int t29;
    register int t0;

    if (a4 == 16) {
        t1 = 0x0;
        t2 = 0x0;
        t3 = 0xFFFFFFFF;
        for (;;) {
            t5 = ((t2 << 2) << 2);
            t6 = 0x0;
            t7 = 0x1;
            for (;;) {
                if (((*(short *)((((t2 << 1) + 0xC83CD84) + 0x0))) & t7) == 0) {
                    t11 = t1 == 0;
                    t1 = (t1 + 0x1);
                    if (t11) {
                        t3 = t5;
                    }
                    if ((int)t1 < (int)((int)(a5 + 0xF) >> 4)) {
                        t0 = 0x10;
                        t6 = (t6 + 0x1);
                        t7 = (t7 + t7);
                        t5 = (t5 + 0x1);
                        if ((int)t6 >= (int)t0) {
                            break;
                        }
                        continue;
                    }
                    break;
                }
                t1 = 0x0;
                t0 = 0x10;
                t6 = (t6 + 0x1);
                t7 = (t7 + t7);
                t5 = (t5 + 0x1);
                if ((int)t6 >= (int)t0) {
                    break;
                }
            }
            t0 = 0x4;
            t2 = (t2 + 0x1);
            if ((int)t2 >= (int)t0) {
                break;
            }
        }
        t25 = t3;
        t29 = t1;
    } else {
        t18 = 0x0;
        if ((unsigned int)0xC83CD84 < (unsigned int)0xC83CD8C) {
            t13 = 0xC83CD84;
            t14 = 0x0;
            for (;;) {
                if (((*(short *)((t13 + 0x0))) & (((int)0x1 << (int)((int)(a5 + 0xF) >> 4)) - 1)) == 0) {
                    break;
                }
                t13 = (t13 + 0x2);
                t14 = (t14 + 0x10);
                if ((unsigned int)t13 >= (unsigned int)0xC83CD8C) {
                    if ((int)0x0 < (int)((int)(a5 + 0xF) >> 4)) {
                        return 0xFFFFFFFF;
                    }
                    return 0xFFFFFFFF;
                }
            }
            t25 = t14;
            t18 = ((int)(a5 + 0xF) >> 4);
        } else {
            t25 = 0xFFFFFFFF;
        }
        t29 = t18;
    }
    t32 = t25;
    if ((int)t29 < (int)((int)(a5 + 0xF) >> 4)) {
        t32 = 0xFFFFFFFF;
    }
    return t32;
}

int FUN_0c17d980(void)
{
    return nlInitInterrupt0(0x0);
}


int FUN_0c182050(int a4)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;

    u0 = (((struct o4_float *)(a4))->v);
    u1 = (((struct o8_float *)(a4))->v);
    u2 = (((struct o4_float *)0xC86CE60)->v);
    u3 = (((struct o8_float *)0xC86CE60)->v);
    u4 = *(float *)((a4 + 0x0));
    u5 = (((struct oC_float *)0xC86CE60)->v);
    t0 = 0x2;
    if (u4 > (((((struct o0_float *)0xC86CE60)->v)) * u1)) {
    } else {
        t1 = 0x0;
        if ((u3 * u1) > u4) {
            t1 = 0x1;
        }
        t0 = t1;
    }
    t1 = (t0 | 0x8);
    if (u0 > (u2 * u1)) {
    } else {
        t1 = t0;
        if ((u5 * u1) > u0) {
            t1 = (t0 | 0x4);
        }
    }
    return t1;
}

int FUN_0c19adb4(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = FUN_0c19af74(a4);
    if (t0 != 0) {
        return 0xFFFFFFFC;
    }
    t0 = *(int *)0xC8A73C0;
    t1 = (((struct o13A_short *)(((a4 * 0x174) + t0)))->v);
    if (!(((unsigned short)t1 != 4) && (((unsigned short)t1 != 6) && (((unsigned short)t1 != 9) && (((unsigned short)t1 != 5) && (((unsigned short)t1 != 7) && (((unsigned short)t1 != 10) && (((unsigned short)t1 != 0) && ((unsigned short)t1 != 8))))))))) {
        if (((unsigned char)(*(signed char *)((((a4 * 0x174) + t0) + 0x13E))) & 4) != 0) {
            if ((*(signed char *)((((a4 * 0x174) + t0) + 0xB0))) != 0) {
                t1 = FUN_0c19c098(((a4 * 0x174) + t0));
                if (t1 == 0) {
                    return 0xFFFFFFF6;
                }
                t1 = FUN_0c19bdaa(((a4 * 0x174) + t0), a5, a6, a7);
                if (t1 != 0) {
                    return 0xFFFFFFFF;
                }
                return 0x0;
            }
            return 0xFFFFFFF6;
        }
    }
    t1 = FUN_0c19bdaa(((a4 * 0x174) + t0), a5, a6, a7);
    if (t1 != 0) {
        return 0xFFFFFFFF;
    }
    return 0x0;
}

int kmSetHSyncLine(int a4)
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


int FUN_0c2d4b50(void)
{
    register int t0;
    register int t1;

    if ((*(signed char *)0xC8D264E) == 0) {
        if ((unsigned char)(*(signed char *)((((((struct o0_int *)0xC8D25F0)->v)) + 0x48))) == 0x81) {
            if ((-((((((*(signed char *)(((((((struct o0_int *)0xC8D25F0)->v)) + 0x24) + 0x0))) & 32) == 0)) ? 1 : 0) - 1)) == 0) {
                if (((*(signed char *)(((((((struct o0_int *)0xC8D25F0)->v)) + 0x78) + 0x0))) & 8) != 0) {
                    t0 = FUN_0c2ec430(((((struct o0_int *)0xC8D2658)->v)));
                    if ((signed char)t0 == 0) {
                    } else {
                        FUN_0c2d63ba();
                    }
                } else {
                    FUN_0c2ec410(0xC8D2658, 0xA);
                }
            } else {
                FUN_0c2d63ba();
            }
        } else {
            FUN_0c2d63ba();
        }
    }
    if (((*(signed char *)0xC8D25F6) & 8) != 0) {
        t0 = FUN_0c2ec430(((((struct o8_int *)0xC8D2658)->v)));
        if ((signed char)t0 != 0) {
            t0 = (((struct o0_int *)0xC8D25F0)->v);
            (((struct o1C_uchar *)(t0))->v) = ((*(signed char *)(((t0 + 0x1C) + 0x0))) & 0xFE);
            (((struct o6_uchar *)0xC8D25F0)->v) = ((*(signed char *)0xC8D25F6) & 0xF7);
            t0 = (((struct o0_int *)0xC8D25F0)->v);
            (((struct o78_uchar *)(t0))->v) = ((*(signed char *)(((t0 + 0x78) + 0x0))) | 0x20);
        }
    }
    t0 = *(signed char *)0xC8D25FC;
    t1 = t0;
    if ((t0 & 32) != 0) {
        t0 = FUN_0c2ec430(((((struct o38_int *)0xC8D2658)->v)));
        t1 = (signed char)t0;
        if ((signed char)t0 != 0) {
            FUN_0c2d487c(0xB11, 0x0, 0x2);
            t0 = *(signed char *)0xC8D25FC;
            (((struct oC_uchar *)0xC8D25F0)->v) = (t0 & 0xDF);
            t1 = (t0 & 0xDF);
        }
    }
    return t1;
}

int FUN_0c2d7690(int a4)
{
    register int t0;
    register int t1;

    if ((*(signed char *)0xC8D7093) == 0) {
        t0 = *(short *)0xC8D684A;
        if ((unsigned short)t0 == 0x7D0) {
            t1 = 0x3E8;
            for (;;) {
                t1 = (t1 - 0x1);
                if ((t1 != 0) && ((unsigned short)t0 == 0x7D0)) continue;
                break;
            }
            if (t1 == 0) {
                return 0x0;
            }
        }
        *(unsigned char *)((((((struct o8_int *)0xC8D701C)->v)) + 0x0)) = a4;
        t0 = (((struct o8_int *)0xC8D701C)->v);
        (((struct o8_uint *)0xC8D701C)->v) = (t0 + 0x1);
        if ((unsigned int)(t0 + 0x1) > (unsigned int)((((struct o0_int *)0xC8D701C)->v))) {
            (((struct o8_uint *)0xC8D701C)->v) = 0xC8D684C;
        }
        *(unsigned short *)0xC8D684A = ((*(short *)0xC8D684A) + 0x1);
        if ((*(signed char *)0xC8D2700) == 0) {
            (((struct o1_uchar *)0xC8D2700)->v) = (*(signed char *)((((((struct o4_int *)0xC8D701C)->v)) + 0x0)));
            t0 = (((struct o4_int *)0xC8D701C)->v);
            (((struct o4_uint *)0xC8D701C)->v) = (t0 + 0x1);
            if ((unsigned int)(t0 + 0x1) > (unsigned int)((((struct o0_int *)0xC8D701C)->v))) {
                (((struct o4_uint *)0xC8D701C)->v) = 0xC8D684C;
            }
            *(unsigned short *)0xC8D684A = ((*(short *)0xC8D684A) - 1);
            (((struct o0_uchar *)0xC8D2700)->v) = 0x1;
            FUN_0c2d7806(0x4);
        }
        return 0x1;
    }
    return 0x1;
}

int nlInitInterrupt0(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = _builtin_get_cr();
    _builtin_set_cr((_builtin_get_cr() & 0xFFFFFFFF) | 0x10000000);
    t1 = 0x0;
    for (;;) {
        *(unsigned int *)((0xC868B10 + t1)) = 0x0;
        *(unsigned int *)((0xC868B44 + t1)) = 0xFFFFFFFF;
        t1 = (t1 + 0x4);
        if ((unsigned int)t1 >= (unsigned int)0x34) {
            break;
        }
    }
    t1 = 0x0;
    t2 = 0xC205E8A;
    for (;;) {
        nlSetIntrPriority((*(short *)((t2 + 0x0))), (*(short *)((t2 + 0x2))));
        t1 = (t1 + 0x1);
        t2 = (t2 + 0x4);
        if ((int)t1 >= (int)0xC) {
            break;
        }
    }
    t1 = 0x0;
    for (;;) {
        nlSetIntrFunction(t1, 0x0);
        t1 = (t1 + 0x1);
        if ((int)t1 >= (int)0xD) {
            break;
        }
    }
    FUN_0c0e4a80(0x0);
    kmSetEORCallback(0xC17D7A0, 0x0);
    (((struct o0_uint *)0xC868B48)->v) = (syChainAddHandler(0x900, 0xC17D7C0, 0x58, 0x0));
    (((struct o4_uint *)0xC868B48)->v) = (syChainAddHandler(0x920, 0xC17D7E0, 0x0, 0x0));
    if (a4 != 0) {
        (((struct o8_uint *)0xC868B48)->v) = (syChainAddHandler(0xA40, 0xC17D800, 0x0, 0x0));
        (((struct oC_uint *)0xC868B48)->v) = (syChainAddHandler(0xB00, 0xC17D830, 0x0, 0x0));
    }
    kmSetTexOverflowCallback(0xC17D860, 0x0);
    t1 = thunk_FUN_0c2b606c(0x0);
    _builtin_set_cr((t0 & 0xFFFFFFFF));
    return t1;
}


int FUN_0c193846(int a4, int a5, int a6)
{
    int stk[34];
    register int t2;
    register int t4;
    register int t6;
    register int t8;

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned short *)(((int)stk + 0)) = a6;
    (((struct o0_uint *)0xC8B1614)->v) = (thunk_FUN_0c191de2());
    (((struct o4_uint *)0xC8B1614)->v) = ((short)(*(short *)(((int)stk + 0))) * (short)0x3E8);
    t2 = a5;
    if ((unsigned int)(short)a5 > (unsigned int)0x80) {
        t2 = 0x80;
    }
    t4 = FUN_0c193120((((int)stk + 0) + 0x8), t2);
    if ((short)t4 == 0) {
        for (;;) {
            t6 = FUN_0c191ea4((((int)stk + 0) + 0x8), (*(int *)(((int)stk + 4))), t2);
            if ((short)t6 == 0) {
                return 0x0;
            }
            memcpy((((int)stk + 0) + 0x8), ((((int)stk + 0) + 0x8) + 0x1), ((short)t2 - 1));
            t8 = FUN_0c193120((((short)t2 + (((int)stk + 0) + 0x8)) - 1), 0x1);
            if ((short)t8 != 0) {
                break;
            }
        }
    }
    return 0xFFFFFFFF;
}

int SJRBF_PutChunk(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;

    t0 = FUN_0c2c6304();
    if (a5 == 1) {
        *(unsigned int *)((a4 + 0xC)) = ((*(int *)((a4 + 0xC))) + (*(int *)((a6 + 0x4))));
        t1 = *(int *)((a6 + 0x0));
        t2 = *(int *)((a4 + 0x1C));
        if ((int)(t1 - t2) < (int)(*(int *)((a4 + 0x24)))) {
            t3 = *(int *)((a4 + 0x24));
            t4 = *(int *)((a6 + 0x4));
            t5 = (t3 - (t1 - t2));
            if ((int)t4 < (int)(t3 - (t1 - t2))) {
                t5 = t4;
            }
            FUN_0c187a88((((*(int *)((a4 + 0x20))) + (t1 - t2)) + (*(int *)((a4 + 0x1C)))), (*(int *)((a6 + 0x0))), t5);
        }
        t1 = *(int *)((a6 + 0x0));
        t2 = *(int *)((a4 + 0x1C));
        t3 = *(int *)((a6 + 0x4));
        if ((int)((t1 - t2) + t3) > (int)(*(int *)((a4 + 0x20)))) {
            t4 = *(int *)((a4 + 0x20));
            t5 = *(int *)((a6 + 0x4));
            t6 = (((t1 - t2) + t3) - t4);
            if ((int)t5 < (int)(((t1 - t2) + t3) - t4)) {
                t6 = t5;
            }
            t4 = *(int *)((a4 + 0x1C));
            FUN_0c187a88(t4, (t4 + (((t1 - t2) + t3) - t6)), t6);
        }
    } else {
        if (a5 == 0) {
            *(unsigned int *)((a4 + 0x10)) = ((*(int *)((a4 + 0x10))) + (*(int *)((a6 + 0x4))));
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

int FUN_0c2dbb7e(int a4, int a5, int a6)
{
    register int t0;

    t0 = *(short *)((a5 + 0x0));
    if ((unsigned short)((unsigned char)((int)(unsigned short)t0 >> 8) | (((unsigned short)t0 << 8) & 0xFF00)) == 0x8000) {
        return ADXB_DecodeHeaderAdx(a4, a5, a6);
    }
    t0 = ADXB_CheckSpsd(a5);
    if (t0 != 0) {
        return ADXB_DecodeHeaderSpsd(a4, a5, a6);
    }
    t0 = FUN_0c2f1c20(a5);
    if (t0 != 0) {
        return FUN_0c2f1804(a4, a5, a6);
    }
    t0 = FUN_0c2f0816(a5);
    if (t0 != 0) {
        return ADXB_DecodeHeaderAiff(a4, a5, a6);
    }
    t0 = ADXB_CheckAu(a5);
    if (t0 != 0) {
        return ADXB_DecodeHeaderAu(a4, a5, a6);
    }
    return 0x0;
}

int FUN_0c1849d8(int a4)
{
    if (a4 == 0) {
        return 0xFFFFFFFF;
    }
    *(unsigned int *)((a4 + 0x0)) = ((((struct o0_int *)0xC8ABC00)->v));
    *(unsigned int *)((a4 + 0x4)) = ((((struct o4_int *)0xC8ABC00)->v));
    *(unsigned short *)((a4 + 0x8)) = ((((struct oC_short *)0xC8ABC00)->v));
    *(unsigned short *)((a4 + 0xA)) = ((((struct o10_short *)0xC8ABC00)->v));
    *(unsigned short *)((a4 + 0xC)) = ((((struct o12_short *)0xC8ABC00)->v));
    *(unsigned int *)((a4 + 0x10)) = ((((struct o14_int *)0xC8ABC00)->v));
    *(unsigned int *)((a4 + 0x14)) = ((((struct o18_int *)0xC8ABC00)->v));
    *(unsigned short *)((a4 + 0x18)) = ((((struct o20_short *)0xC8ABC00)->v));
    *(unsigned short *)((a4 + 0x1A)) = ((((struct o24_short *)0xC8ABC00)->v));
    *(unsigned short *)((a4 + 0x1C)) = ((((struct o26_short *)0xC8ABC00)->v));
    *(unsigned short *)((a4 + 0x1E)) = ((((struct o28_short *)0xC8ABC00)->v));
    (((struct o20_ushort *)(a4))->v) = ((((struct o2A_short *)0xC8ABC00)->v));
    (((struct o22_ushort *)(a4))->v) = ((((struct o2C_short *)0xC8ABC00)->v));
    return 0x0;
}

int FUN_0c18d914(int a4, int a5, int a6, int a7)
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
    v0_0 = a4;
    v0_2 = a5;
    v0_5 = a6;
    v0_1 = a7;
    *(unsigned int *)(((int)stk + 0)) = v0_2;
    v0_2 = (v0_5);
    v0_3 = (v0_1);
    v0_4 = (v0_0);
    if ((v0_5 != 2)) goto L_C18D92E;
    v0_4 = ((v0_4 | 0x80));
    L_C18D9AA:;
    if (((*(int *)(((int)stk + 0))) == 0)) goto L_C18D9C2;
    return FUN_0c197c58(v0_4, (*(int *)(((int)stk + 0))), v0_3, v0_1);
    L_C18D9C2:;
    return v0_2;
    L_C18D92E:;
    if ((v0_2 != 1)) goto L_C18D938;
    v0_4 = ((v0_4 | 0xC0));
    goto L_C18D9AA;
    L_C18D938:;
    v0_2 = (v0_3);
    if ((v0_3 == 10)) goto L_C18D94A;
    v0_2 = (v0_3);
    if ((v0_3 == 11)) goto L_C18D94A;
    v0_2 = (v0_3);
    if ((v0_3 != 4)) goto L_C18D9AA;
    L_C18D94A:;
    v0_5 = ((((v0_4 << 2) << 2) + 0xC8A7030));
    v0_0 = (0xFFFFFFFA);
    if (((*(int *)(((((v0_4 << 2) << 2) + 0xC8A7030) + 0xC))) != v0_4)) goto L_C18D97A;
    v0_6 = (((struct o13A_short *)((((*(int *)((v0_5 + 0xC))) * 0x174) + (*(int *)0xC8A73C0))))->v);
    v0_2 = ((unsigned short)v0_6);
    if (((unsigned short)v0_6 != 4)) goto L_C18D97A;
    *(unsigned int *)((v0_5 + 0x0)) = v0_4;
    *(unsigned int *)((v0_5 + 0x4)) = v0_0;
    goto L_C18D9AA;
    L_C18D97A:;
    v0_5 = (((((v0_4 << 1) + v0_4) << 2) + 0xC8A6FE0));
    if (((*(int *)((((((v0_4 << 1) + v0_4) << 2) + 0xC8A6FE0) + 0x8))) != v0_4)) goto L_C18D9AA;
    v0_6 = (((struct o13A_short *)((((*(int *)((v0_5 + 0x8))) * 0x174) + (*(int *)0xC8A73C0))))->v);
    v0_2 = ((unsigned short)v0_6);
    if (((unsigned short)v0_6 != 4)) goto L_C18D9AA;
    *(unsigned int *)((v0_5 + 0x0)) = v0_4;
    *(unsigned int *)((v0_5 + 0x4)) = v0_0;
    goto L_C18D9AA;
}



int FUN_0c2c6c60(int a4, int a5, int a6)
{
    int stk[2];
    register int t0;
    register int t21;

    t0 = 0x0;
    if ((a4 & 0x2) != 0) {
        t0 = 0x2;
    }
    if ((*(int *)0xC30411C) == 1) {
        if ((a4 & 0x1) != 0) {
            t21 = (kmytex_TXalloc2(t0, a5, a6, 0x0));
        } else {
            t21 = (kmytex_TXalloc(t0, a5, a6, 0x0));
        }
    } else {
        FUN_0c2e31e0(((int)stk + 0), (((int)stk + 0) + 0x4));
        if ((unsigned int)(*(int *)(((int)stk + 0))) < (unsigned int)(*(int *)(((int)stk + 4)))) {
            if ((a4 & 0x1) != 0) {
                t21 = (kmytex_TXalloc2(t0, a5, a6, 0x1));
            } else {
                t21 = (kmytex_TXalloc(t0, a5, a6, 0x1));
            }
        } else {
            if ((a4 & 0x1) != 0) {
                t21 = (kmytex_TXalloc2(t0, a5, a6, 0x0));
            } else {
                t21 = (kmytex_TXalloc(t0, a5, a6, 0x0));
            }
        }
    }
    return t21;
}

int FUN_0c2d7d42(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = 0x0;
    if ((*(int *)((a4 + 0x8))) == 0) {
    } else {
        t1 = 0x0;
        for (;;) {
            if (t1 == 0) {
                if (((*(signed char *)(((*(int *)((a4 + 0x8))) + 0xD))) & 128) == 0) {
                    t2 = (*(int *)((a4 + 0x8)));
                    if ((signed char)a5 == ((*(signed char *)((t2 + 0xC))) & 0xFF)) {
                        break;
                    }
                    t1 = (t1 + 0x1);
                    if ((int)t1 >= (int)0x3) {
                        return 0x0;
                    }
                    continue;
                }
                return 0x0;
            }
            if (t1 == 1) {
                if (((*(signed char *)((((*(int *)((a4 + 0x8))) + 0x19) + 0x0))) & 128) == 0) {
                    t2 = (*(int *)((a4 + 0x8)));
                    if ((signed char)a5 == ((*(signed char *)(((t2 + 0x18) + 0x0))) & 0xFF)) {
                        if (((*(signed char *)((((*(int *)((a4 + 0x8))) + 0x19) + 0x0))) & 64) != 0) {
                            return 0x1;
                        }
                        return 0x2;
                    }
                    t1 = (t1 + 0x1);
                    if ((int)t1 >= (int)0x3) {
                        return 0x0;
                    }
                    continue;
                }
                return 0x0;
            }
            if (t1 == 2) {
                if (((*(signed char *)((((*(int *)((a4 + 0x8))) + 0x25) + 0x0))) & 128) != 0) {
                    return 0x0;
                }
                t2 = (*(int *)((a4 + 0x8)));
                if ((signed char)a5 == ((*(signed char *)(((t2 + 0x24) + 0x0))) & 0xFF)) {
                    if (((*(signed char *)((((*(int *)((a4 + 0x8))) + 0x25) + 0x0))) & 64) != 0) {
                        return 0x1;
                    }
                    return 0x2;
                }
                return 0x0;
            }
            t1 = (t1 + 0x1);
            if ((int)t1 >= (int)0x3) {
                return 0x0;
            }
        }
        t1 = 0x1;
        if (((*(signed char *)(((*(int *)((a4 + 0x8))) + 0xD))) & 64) == 0) {
            t1 = 0x2;
        }
        t0 = t1;
    }
    return t0;
}

int FUN_0c2d7b34(int a4, int a5, int a6)
{
    int stk[6];
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t7;
    register int t9;
    register int t25;
    register int t27;
    register int t29;
    register int t38;

    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 0)) = a6;
    if ((*(int *)((a4 + 0x8))) != 0) {
        t1 = *(int *)((a4 + 0x8));
        t2 = (((struct o4C_int *)(t1))->v);
        t3 = *(int *)((a4 + 0xC));
        t4 = *(signed char *)((t2 + 0x0));
        t5 = *(short *)((t2 + 0x2));
        if ((-((((((*(signed char *)(((t1 + 0x50) + 0x0))) & 64) == 0)) ? 1 : 0) - 1)) == 1) {
            *(unsigned int *)(((((int)stk + 0) + 0x8) + 0x4)) = (((int)stk + 0) + 0x8);
            *(unsigned char *)(((((int)stk + 0) + 0x8) + 0x0)) = 0x0;
            t7 = *(int *)((a4 + 0xC));
            (((struct o74_uchar *)(t7))->v) = ((*(signed char *)((t7 + 0x74))) & 0x7F);
            t9 = *(int *)((a4 + 0x8));
            (((struct o50_uchar *)(t9))->v) = ((*(signed char *)(((t9 + 0x50) + 0x0))) & 0xBF);
            *(unsigned char *)(((((int)stk + 0) + 0x8) + 0x0)) = ((*(signed char *)(((((int)stk + 0) + 0x8) + 0x0))) | 0x40);
            FUN_0c2d8590(a4, (((int)stk + 0) + 0x8));
        }
        FUN_0c187a88(((((t3 + 0x78) + (short)((short)(unsigned char)t4 * (short)0x8C)) + 0x4) + (unsigned short)t5), (*(int *)(((int)stk + 4))), (*(int *)(((int)stk + 0))));
        t25 = (((struct o4C_int *)((*(int *)((a4 + 0x8)))))->v);
        *(unsigned short *)((t25 + 0x2)) = ((*(short *)((t25 + 0x2))) + (*(int *)(((int)stk + 0))));
        t27 = *(int *)((a4 + 0x8));
        t29 = *(short *)((((((struct o4C_int *)(t27))->v)) + 0x2));
        t38 = (unsigned short)t29;
        if ((unsigned short)t29 == (*(int *)((t27 + 0x8)))) {
            t38 = (FUN_0c2d7df8(a4, 0x0));
        }
    }
    return t38;
}

int FUN_0c2eef70(void)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)0xC8D7030;
    if (((unsigned char)t0 != 22) && (((unsigned char)t0 != 23) && ((unsigned char)t0 != 24))) {
        (((struct o15_uchar *)0xC8D706C)->v) = 0x0;
        t1 = *(signed char *)0xC8D7030;
        if (((*(signed char *)0xC8D83CC) == 1) && (((unsigned char)t1 == 0) || (((unsigned char)t1 == 1) || ((unsigned char)t1 == 2)))) {
            return (unsigned char)t1;
        }
        if ((unsigned char)t1 == 18) {
            t1 = FUN_0c2ef3c8();
            if ((int)(unsigned short)t1 < (int)0x8) {
                (((struct o0_ushort *)0xC8D706C)->v) = 0x0;
                t1 = *(signed char *)0xC8D716B;
                (((struct o4_uint *)0xC8D706C)->v) = (((short)((short)(unsigned char)t1 * (short)0x124) + 0xC8D7A9E) + 0x4);
                t2 = *(signed char *)((((short)((short)(unsigned char)t1 * (short)0x124) + 0xC8D7A9E) + 0x0));
                *(unsigned char *)((((short)((short)(unsigned char)t1 * (short)0x124) + 0xC8D7A9E) + 0x0)) = (t2 & 0x4);
                (((struct o15_uchar *)0xC8D706C)->v) = 0x1;
                *(unsigned char *)0xC8D83D0 = 0x0;
                return (t2 & 0x4);
            }
            return FUN_0c2ef364();
        }
        t1 = FUN_0c2ef3bc();
        if ((int)(unsigned short)t1 < (int)0x8) {
            (((struct o0_ushort *)0xC8D706C)->v) = 0x0;
            t1 = *(signed char *)0xC8D716A;
            (((struct o4_uint *)0xC8D706C)->v) = (((short)((short)(unsigned char)t1 * (short)0x124) + 0xC8D717E) + 0x4);
            t2 = *(signed char *)((((short)((short)(unsigned char)t1 * (short)0x124) + 0xC8D717E) + 0x0));
            *(unsigned char *)((((short)((short)(unsigned char)t1 * (short)0x124) + 0xC8D717E) + 0x0)) = (t2 & 0x4);
            (((struct o15_uchar *)0xC8D706C)->v) = 0x1;
            *(unsigned char *)0xC8D83D0 = 0x0;
            return (t2 & 0x4);
        }
        return FUN_0c2ef364();
    }
    return (unsigned char)t0;
}

int nlFrustum(float f4, float f5, float f6, float f7, float f8, float f9)
{
    int stk[16];
    register float u0;
    register float u1;

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
    *(float *)(((int)stk + 44)) = -1.0f;
    *(float *)(((int)stk + 48)) = 0.0f;
    *(float *)(((int)stk + 52)) = 0.0f;
    u0 = (f8 * f9);
    u1 = (u0 * (1.0f + 1.0f));
    u1 = -u1;
    *(float *)(((int)stk + 56)) = (u1 / (f9 - f8));
    *(float *)(((int)stk + 60)) = 0.0f;
    (((struct o0_float *)0xC8B85DC)->v) = f8;
    (((struct o4_float *)0xC8B85DC)->v) = f9;
    (((struct o8_float *)0xC8B85DC)->v) = (1.0f / f8);
    (((struct o18_float *)0xC8A6C74)->v) = f8;
    (((struct o0_float *)0xC8A6C74)->v) = (-f8);
    (((struct o1C_float *)0xC8A6C74)->v) = f9;
    (((struct o14_float *)0xC8A6C74)->v) = (1.0f / f8);
    nlMultiMatrix(((int)stk + 0));
    return (FUN_0c0e3510());
}

int FUN_0c180bec(int a4, int a5, int a6)
{
    register int t1;

    if (a5 != 0xA5) {
        if (a5 != 0xA6) {
            if (a5 != 0xA7) {
                if (a5 != 0x10A5) {
                    if ((a5 != 0x10A7) && ((a5 != 0x20A5) && ((a5 != 0x30A5) && (a5 != 0x40A5)))) {
                        if (a5 != 0x50A5) {
                            return 0xFFFFFFFE;
                        }
                        return FUN_0c180d72(((((a4 & 0xF) << 8) + a5) + ((a6 & 0xF) << 16)));
                    }
                    return FUN_0c180d72(((((a4 & 0xF) << 8) + a5) + (((a6 + 0x40) & 0x7F) << 16)));
                }
                return FUN_0c180d72(((((a4 & 0xF) << 8) + a5) + ((a6 & 0x7F) << 16)));
            }
            return FUN_0c180d72(((((a4 & 0xF) << 8) + a5) + (((a6 + 0x40) & 0x7F) << 16)));
        }
        return FUN_0c180d72(((((a4 & 0xF) << 8) + a5) + (((a6 & 0x7F) << 16) + ((((a6 & 0x80) << 2) << 2) << 1))));
    }
    t1 = FUN_0c180d72(((((0x7F00 & a6) << 8) + ((a4 & 0xF) << 8)) + 0x70A5));
    if (t1 != 0) {
        return t1;
    }
    return FUN_0c180d72(((((a4 & 0xF) << 8) + ((a6 & 0x7F) << 16)) + 0xA5));
}

int FUN_0c1862a0(int a4, int a5)
{
    int stk[10];
    register int t0;
    register int t1;
    register int t12;
    register int t2;
    register int t3;
    register int t6;
    register int t8;
    int t4;
    register int t5;
    int t7;

    *(unsigned short *)(((int)stk + 36)) = a5;
    t0 = *(short *)(((int)stk + 36));
    t1 = FUN_0c1947d0(t0, (((int)stk + 4) + 0x8), (((int)stk + 4) + 0xC), (((int)stk + 4) + 0x10));
    t12 = 0xFFFFFFFF;
    if ((short)t1 == 0) {
        t2 = 0x0;
        for (;;) {
            t3 = FUN_0c1947d0((short)t2, (((int)stk + 4) + 0x4), (((int)stk + 4) + 0xC), (((int)stk + 4) + 0x10));
            if (((short)t3 == 0) && ((t0 != (short)t2) && (t4 = *(short *)(((int)stk + 12)), t5 = *(short *)(((int)stk + 8)), t4 == t5))) {
                *(int *)((int)stk + 0) = (((int)stk + 4) + 0x1C);
                t6 = FUN_0c193fc0(t2, (((int)stk + 0) + 0x4), (((int)stk + 0) + 0x18), (((int)stk + 0) + 0x1C));
                if (((short)t6 == 0) && (t7 = *(short *)(((int)stk + 4)), (unsigned short)t7 == 4)) {
                    t8 = FUN_0c18558a(t2);
                    if ((short)t8 == -1) {
                        break;
                    }
                    t2 = (t2 + 0x1);
                    if ((int)(short)t2 >= (int)0x10) {
                        return 0xFFFFFFFF;
                    }
                    continue;
                }
                t2 = (t2 + 0x1);
                if ((int)(short)t2 >= (int)0x10) {
                    return 0xFFFFFFFF;
                }
                continue;
            }
            t2 = (t2 + 0x1);
            if ((int)(short)t2 >= (int)0x10) {
                return 0xFFFFFFFF;
            }
        }
        t12 = 0x0;
    }
    return t12;
}

int FUN_0c0f28b6(int a4)
{
    int stk[1];
    register int t1;
    register int t2;
    register int t5;
    register int t6;
    register int t10;
    register int t16;

    *(unsigned short *)(((int)stk + 0)) = (_builtin_get_imask());
    _builtin_set_imask(0xF);
    t1 = *(short *)(((int)stk + 0));
    t2 = *(int *)0xC8B9DC8;
    t5 = (*(int *)((t2 + 0x0)));
    t6 = t2;
    for (;;) {
        if ((unsigned int)(*(int *)((t5 + 0x4))) >= (unsigned int)(((unsigned int)((unsigned int)((unsigned int)(a4 + 0x1F) >> 2) >> 2) >> 1) + 0x1)) {
            break;
        }
        if (t5 == t2) {
            _builtin_set_imask(((unsigned int)((((unsigned short)t1 & 0xF) << 2) << 2) >> 4));
            return 0x0;
        }
        t6 = t5;
        t5 = (*(int *)((t5 + 0x0)));
    }
    t10 = *(int *)((t5 + 0x4));
    if (t10 == (((unsigned int)((unsigned int)((unsigned int)(a4 + 0x1F) >> 2) >> 2) >> 1) + 0x1)) {
        *(unsigned int *)((t6 + 0x0)) = (*(int *)((t5 + 0x0)));
        t16 = t5;
    } else {
        *(unsigned int *)((t5 + 0x4)) = (t10 - (((unsigned int)((unsigned int)((unsigned int)(a4 + 0x1F) >> 2) >> 2) >> 1) + 0x1));
        *(unsigned int *)(((t5 + ((((t10 - (((unsigned int)((unsigned int)((unsigned int)(a4 + 0x1F) >> 2) >> 2) >> 1) + 0x1)) << 2) << 2) << 1)) + 0x4)) = (((unsigned int)((unsigned int)((unsigned int)(a4 + 0x1F) >> 2) >> 2) >> 1) + 0x1);
        t16 = (t5 + ((((t10 - (((unsigned int)((unsigned int)((unsigned int)(a4 + 0x1F) >> 2) >> 2) >> 1) + 0x1)) << 2) << 2) << 1));
    }
    *(unsigned int *)0xC8B9DC8 = t6;
    _builtin_set_imask(((unsigned int)((((unsigned short)t1 & 0xF) << 2) << 2) >> 4));
    return (t16 + 0x20);
}
