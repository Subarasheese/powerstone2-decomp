/* Straight-line functions with calls and guards (batch gen_ab): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
struct o0_float { float v; };
struct o0_int { int v; };
struct o0_short { short v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o0_ushort { unsigned short v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_float { char p[0x10]; float v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o10_ushort { char p[0x10]; unsigned short v; };
struct o10B4_int { char p[0x10B4]; int v; };
struct o10E4_int { char p[0x10E4]; int v; };
struct o12_short { char p[0x12]; short v; };
struct o12_ushort { char p[0x12]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o18_int { char p[0x18]; int v; };
struct o18_short { char p[0x18]; short v; };
struct o18_uchar { char p[0x18]; unsigned char v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o18_ushort { char p[0x18]; unsigned short v; };
struct o1A_short { char p[0x1A]; short v; };
struct o1A_ushort { char p[0x1A]; unsigned short v; };
struct o1A8_uint { char p[0x1A8]; unsigned int v; };
struct o1AC_uint { char p[0x1AC]; unsigned int v; };
struct o1C_int { char p[0x1C]; int v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o2_short { char p[0x2]; short v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o20_int { char p[0x20]; int v; };
struct o20_short { char p[0x20]; short v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_uchar { char p[0x22]; unsigned char v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o24_int { char p[0x24]; int v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o24_ushort { char p[0x24]; unsigned short v; };
struct o26_short { char p[0x26]; short v; };
struct o26_ushort { char p[0x26]; unsigned short v; };
struct o28_int { char p[0x28]; int v; };
struct o28_uchar { char p[0x28]; unsigned char v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o28_ushort { char p[0x28]; unsigned short v; };
struct o29_uchar { char p[0x29]; unsigned char v; };
struct o2A_ushort { char p[0x2A]; unsigned short v; };
struct o2C_uchar { char p[0x2C]; unsigned char v; };
struct o2C_ushort { char p[0x2C]; unsigned short v; };
struct o2D_uchar { char p[0x2D]; unsigned char v; };
struct o2E_uchar { char p[0x2E]; unsigned char v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o30_uchar { char p[0x30]; unsigned char v; };
struct o30_uint { char p[0x30]; unsigned int v; };
struct o32_short { char p[0x32]; short v; };
struct o33_uchar { char p[0x33]; unsigned char v; };
struct o34_int { char p[0x34]; int v; };
struct o34_uint { char p[0x34]; unsigned int v; };
struct o3A_short { char p[0x3A]; short v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_short { char p[0x4]; short v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o44_uint { char p[0x44]; unsigned int v; };
struct o48_uint { char p[0x48]; unsigned int v; };
struct o4C_uint { char p[0x4C]; unsigned int v; };
struct o5_uchar { char p[0x5]; unsigned char v; };
struct o50_uchar { char p[0x50]; unsigned char v; };
struct o50_uint { char p[0x50]; unsigned int v; };
struct o54_uint { char p[0x54]; unsigned int v; };
struct o58_uint { char p[0x58]; unsigned int v; };
struct o5C_uint { char p[0x5C]; unsigned int v; };
struct o6_uchar { char p[0x6]; unsigned char v; };
struct o60_uchar { char p[0x60]; unsigned char v; };
struct o60_uint { char p[0x60]; unsigned int v; };
struct o64_uchar { char p[0x64]; unsigned char v; };
struct o64_uint { char p[0x64]; unsigned int v; };
struct o7_uchar { char p[0x7]; unsigned char v; };
struct o70_uchar { char p[0x70]; unsigned char v; };
struct o74_uchar { char p[0x74]; unsigned char v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o9_uchar { char p[0x9]; unsigned char v; };
struct oA_uchar { char p[0xA]; unsigned char v; };
struct oB_uchar { char p[0xB]; unsigned char v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC_short { char p[0xC]; short v; };
struct oC_uchar { char p[0xC]; unsigned char v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oD_uchar { char p[0xD]; unsigned char v; };
struct oE_uchar { char p[0xE]; unsigned char v; };
struct oE_ushort { char p[0xE]; unsigned short v; };
struct oF_uchar { char p[0xF]; unsigned char v; };
int FUN_0c101148(int, int);
int FUN_0c102556(int, int);
int FUN_0c112718(int, int, int, int);
int FUN_0c1127bc(int, int, int, int, int);
int FUN_0c1826a0(int, int, int, int);
int FUN_0c183628(Stk3);
int FUN_0c187d24(int, int);
int FUN_0c187d98(int, int, int);
int FUN_0c18cb78(void);
int FUN_0c191b0c(int);
int FUN_0c193846(int, int, int);
int FUN_0c198540(int, int, int, int);
int FUN_0c198a62(int, int, int);
int FUN_0c19c6bc(void);
int FUN_0c19d250(int, int);
int FUN_0c19ddc8(int, int, int, int);
int FUN_0c1a2184(int, int);
int FUN_0c2b97fc(void);
int FUN_0c2bd8b4(int, int, int);
int FUN_0c2be63c(int, int, int);
int FUN_0c2c1016(int);
int FUN_0c2cd580(int);
int FUN_0c2cf374(int);
int FUN_0c2d63cc(int);
int FUN_0c2d65ae(int);
int FUN_0c2d6658(void);
int FUN_0c2d6a70(int, int);
int FUN_0c2d6c38(int, int, int, int);
int FUN_0c2d707a(int, int);
int FUN_0c2d7148(void);
int FUN_0c2d72b8(int);
int FUN_0c2d73f6(int);
int FUN_0c2d73fa(int, int);
int FUN_0c2d7612(int);
int FUN_0c2d7806(int);
int FUN_0c2d7df8(int, int);
int FUN_0c2d8464(int);
int FUN_0c2d8590(int, int);
int FUN_0c2d874e(void);
int FUN_0c2db30c(void);
int FUN_0c2db8cc(int, int, int);
int FUN_0c2db8e0(int, int, int);
int FUN_0c2e73b4(int);
int FUN_0c2e83ae(void);
int FUN_0c2ec304(void);
int FUN_0c2ec410(int, int);
int FUN_0c2ec430(int);
int FUN_0c2f6fb8(void);
int FUN_0c2f7144(int, int, int, int);
int FUN_0c2f734a(void);
int FUN_0c2f76c4(void);
int FUN_0c2f8472(int);
int FUN_0c2f9af8(int, int, int, int, int, int, int, int, int, int, int, int);
extern void _builtin_ftrv(float *, float *);
extern int _builtin_get_imask(void);
extern void _builtin_prefetch(void *);
extern void _builtin_set_imask(int);
int check_cache(int);
int check_caps(int);
int fmMngClearBuf(int, int);
int fmMngReadSctAllData(int);
int get_fat(int, int, int, int);
int kmyMemCopy(int, int, int);
int memset(int, int, int);
int mpdrv_insertnop(int);
int mpdrv_set_allstatreq_ns(int);
int mpdrv_set_dkill_ns(int);
int mpdrv_set_dreq_ns(int);
int mpdrv_set_dreset_ns(int);
int mpdrv_set_end_ns(void);
int mpdrv_set_getcond_ns(int, int);
int nlCalcPoint(int, int);
int nlCalcPoint44(int, int);
int nlLineCalcColor(int, int);
int nlLineClipNear(int, int);
int nlLineSendHeader(int);
int nlMultiMatrix8(int);
int nlMultiPushedMatrix(void);
int nlPopMatrix(int);
int nlPushMatrix(int);
int set_fat(int, int);
int strlen(int);
int thunk_FUN_0c2c2124(void);
int vmsfs_c_progress(int, int, int, int);
int vmsfs_init_work_new(int);
int vmsfs_init_work_normal(int, int);
int vmsfs_setdevicetype(int);
int vmsfs_setretry(int);
int write_fat(int);
int write_dir_all(int a4, int a5, int a6, int a7);
int FUN_0c18330c(int a4, int a5, int a6, int a7);
int FUN_0c187220(int a4, int a5);
int FUN_0c1936bc(int a4);
float nl_display_strip_spd(int a4, int a5, int a6);
int FUN_0c2e4736(int a4);
int nlSingleLineSub(int a4, int a5, int a6, int a7);
int FUN_0c2b9c74(int a4, int a5, int a6);
int FUN_0c2d487c(int a4, int a5, int a6);
int FUN_0c2d6f70(int a4, int a5, int a6, int a7, int a8, int a9);
int kmGetSystemMetrics(int a4);
int vmsfs_setwork(int a4, int a5, int a6);
int FUN_0c2d835c(int a4);
int FUN_0c2ebc72(void);
int FUN_0c2ec776(int a4);
int FUN_0c2f703c(int a4, int a5, int a6, int a7);
int FUN_0c2d71b2(void);
int FUN_0c198790(int a4, int a5, int a6, int a7);
int fmMngInit(int a4, int a5, int a6);
int FUN_0c2f74a4(int a4, int a5, int a6, int a7);
void FUN_0c2cd920(int a4, int a5, int a6, int a7);
int FUN_0c193a72(void);
int FUN_0c19c1c8(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14);
int frame_make(void);
int mpdrv_make_devicedata(int a4, int a5);
int FUN_0c19e2a2(int a4, int a5, int a6);
int FUN_0c2be46c(int a4, int a5, int a6);
int FUN_0c2bdfe2(int a4, int a5, int a6);
int FUN_0c2f7d9c(int a4);

int write_dir_all(int a4, int a5, int a6, int a7)
{
    int stk[12];
    register int t0;
    register int t3;
    int t4;
    register int t5;
    register int t7;
    register int t26;
    register int t30;
    register int t31;
    register int t34;
    register int t39;
    register int t53;
    register int t67;
    register int t73;
    register int t87;
    register int t101;

    t0 = *(int *)((((a4 * 0x148) + 0xC8C4604) + 0x1C));
    *(unsigned short *)(((int)stk + 4)) = (*(short *)((t0 + 0x14)));
    t5 = *(short *)(((int)stk + 4));
    t3 = *(int *)((t0 + 0x18));
    if ((int)t3 > 0) {
        t4 = 0x0;
        for (;;) {
            *(unsigned int *)(((int)stk + 0)) = (unsigned short)t5;
            t7 = *(int *)(((int)stk + 0));
            t5 = (get_fat(a4, (unsigned short)t5, a6, a7));
            set_fat(a4, t7);
            if (((unsigned short)t5 != 0xFFFA) && (((unsigned short)t5 != 0xFFFC) && (t4 = (t4 + 0x1), (int)t4 < (int)t3))) continue;
            break;
        }
    }
    t31 = *(short *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 8)) = (t3 - 1);
    for (;;) {
        if ((int)0x0 >= (int)t3) {
            if ((unsigned short)(*(short *)(((int)stk + 4))) != (*(int *)(((*(int *)((((a4 * 0x148) + 0xC8C4604) + 0x1C))) + 0x14)))) {
                t26 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC8C4600) + 0x10)))))((*(int *)((((a4 * 0x148) + 0xC8C4604) + 0x20))), 0x4A, (*(short *)(((int)stk + 4))), a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
                write_fat(a4);
                FUN_0c2c1016(a4);
                return 0x0;
            }
            return 0x0;
        }
        *(unsigned int *)(((int)stk + 0)) = 0x0;
        t30 = 0x0;
        for (;;) {
            t34 = FUN_0c2bd8b4(a4, (unsigned short)t31, ((*(int *)((((a4 * 0x148) + 0xC8C4604) + 0x28))) + (*(int *)(((int)stk + 0)))));
            if (t34 != 0) {
                if (t34 == 0xFFFFFF01) {
                    break;
                }
                set_fat(a4, (unsigned short)t31);
                t31 = (FUN_0c102556(a4, 0xFFFC));
                continue;
            }
            if (t30 == 0) {
                *(unsigned short *)(((int)stk + 4)) = t31;
                *(unsigned int *)(((int)stk + 12)) = (unsigned short)t31;
                set_fat(a4, (unsigned short)t31);
                if (t30 != (*(int *)(((int)stk + 8)))) {
                    t39 = FUN_0c102556(a4, 0xFFFC);
                    *(unsigned short *)(((int)stk + 0)) = t39;
                    set_fat(a4, (*(int *)(((int)stk + 12))));
                    t31 = (*(short *)(((int)stk + 0)));
                    t30 = (t30 + 0x1);
                    if ((int)t30 >= (int)t3) {
                        if ((unsigned short)(*(short *)(((int)stk + 4))) != (*(int *)(((*(int *)((((a4 * 0x148) + 0xC8C4604) + 0x1C))) + 0x14)))) {
                            t53 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC8C4600) + 0x10)))))((*(int *)((((a4 * 0x148) + 0xC8C4604) + 0x20))), 0x4A, (*(short *)(((int)stk + 4))), a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
                            write_fat(a4);
                            FUN_0c2c1016(a4);
                            return 0x0;
                        }
                        return 0x0;
                    }
                    *(unsigned int *)(((int)stk + 0)) = ((t30 << 8) << 1);
                    continue;
                }
                t30 = (t30 + 0x1);
                if ((int)t30 >= (int)t3) {
                    if ((unsigned short)(*(short *)(((int)stk + 4))) != (*(int *)(((*(int *)((((a4 * 0x148) + 0xC8C4604) + 0x1C))) + 0x14)))) {
                        t67 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC8C4600) + 0x10)))))((*(int *)((((a4 * 0x148) + 0xC8C4604) + 0x20))), 0x4A, (*(short *)(((int)stk + 4))), a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
                        write_fat(a4);
                        FUN_0c2c1016(a4);
                        return 0x0;
                    }
                    return 0x0;
                }
                *(unsigned int *)(((int)stk + 0)) = ((t30 << 8) << 1);
                continue;
            }
            *(unsigned int *)(((int)stk + 12)) = (unsigned short)t31;
            set_fat(a4, (unsigned short)t31);
            if (t30 != (*(int *)(((int)stk + 8)))) {
                t73 = FUN_0c102556(a4, 0xFFFC);
                *(unsigned short *)(((int)stk + 0)) = t73;
                set_fat(a4, (*(int *)(((int)stk + 12))));
                t31 = (*(short *)(((int)stk + 0)));
                t30 = (t30 + 0x1);
                if ((int)t30 >= (int)t3) {
                    if ((unsigned short)(*(short *)(((int)stk + 4))) != (*(int *)(((*(int *)((((a4 * 0x148) + 0xC8C4604) + 0x1C))) + 0x14)))) {
                        t87 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC8C4600) + 0x10)))))((*(int *)((((a4 * 0x148) + 0xC8C4604) + 0x20))), 0x4A, (*(short *)(((int)stk + 4))), a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
                        write_fat(a4);
                        FUN_0c2c1016(a4);
                        return 0x0;
                    }
                    return 0x0;
                }
                *(unsigned int *)(((int)stk + 0)) = ((t30 << 8) << 1);
                continue;
            }
            t30 = (t30 + 0x1);
            if ((int)t30 >= (int)t3) {
                if ((unsigned short)(*(short *)(((int)stk + 4))) != (*(int *)(((*(int *)((((a4 * 0x148) + 0xC8C4604) + 0x1C))) + 0x14)))) {
                    t101 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC8C4600) + 0x10)))))((*(int *)((((a4 * 0x148) + 0xC8C4604) + 0x20))), 0x4A, (*(short *)(((int)stk + 4))), a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
                    write_fat(a4);
                    FUN_0c2c1016(a4);
                    return 0x0;
                }
                return 0x0;
            }
            *(unsigned int *)(((int)stk + 0)) = ((t30 << 8) << 1);
        }
        break;
    }
    return t34;
}

int FUN_0c18330c(int a4, int a5, int a6, int a7)
{
    int stk[10];
    register int t24;
    register int t2;
    register int t4;
    register int t7;
    register int t9;
    register int t13;

    t24 = 0xFFFFFFFF;
    if ((*(signed char *)0xC874FB8) != 1) {
        *(unsigned short *)(((int)stk + 12)) = (_builtin_get_imask());
        _builtin_set_imask(0xF);
        t2 = (((struct o18_int *)0xC8A6F20)->v);
        (((struct o20_uint *)0xC8A6F20)->v) = t2;
        (((struct o1C_uint *)0xC8A6F20)->v) = t2;
        (((struct o24_uint *)0xC8A6F20)->v) = ((((struct o4_int *)0xC8A6F20)->v));
        t4 = (((struct o8_int *)0xC8A6F20)->v);
        (((struct o10_uint *)0xC8A6F20)->v) = t4;
        (((struct oC_uint *)0xC8A6F20)->v) = t4;
        (((struct o14_uint *)0xC8A6F20)->v) = ((((struct o0_int *)0xC8A6F20)->v));
        (((struct o30_uint *)0xC8A6F20)->v) = 0x0;
        (((struct o34_uint *)0xC8A6F20)->v) = 0x0;
        (((struct o28_uchar *)0xC8A6F20)->v) = 0x0;
        (((struct o29_uchar *)0xC8A6F20)->v) = 0x0;
        (((struct o2A_ushort *)0xC8A6F20)->v) = 0x0;
        (((struct o2C_uchar *)0xC8A6F20)->v) = 0x0;
        (((struct o2D_uchar *)0xC8A6F20)->v) = 0x0;
        (((struct o10_uint *)0xC874F8C)->v) = 0x0;
        (((struct o14_uint *)0xC874F8C)->v) = 0x0;
        (((struct o18_uint *)0xC874F8C)->v) = 0x0;
        (((struct o1C_uint *)0xC874F8C)->v) = 0x0;
        (((struct o20_uint *)0xC874F8C)->v) = 0x0;
        (((struct o4_uchar *)0xC874F8C)->v) = 0x1;
        (((struct o5_uchar *)0xC874F8C)->v) = 0x2;
        (((struct o6_uchar *)0xC874F8C)->v) = 0x3;
        (((struct o7_uchar *)0xC874F8C)->v) = 0x0;
        (((struct oA_uchar *)0xC874F8C)->v) = 0x33;
        (((struct oB_uchar *)0xC874F8C)->v) = 0x0;
        (((struct oC_uchar *)0xC874F8C)->v) = 0x0;
        (((struct oD_uchar *)0xC874F8C)->v) = 0x0;
        (((struct oE_uchar *)0xC874F8C)->v) = 0x0;
        (((struct oF_uchar *)0xC874F8C)->v) = 0x0;
        (((struct o24_uint *)0xC874F8C)->v) = 0xC20602C;
        (((struct o10_uint *)0xC874F8C)->v) = a4;
        (((struct o28_uint *)0xC874F8C)->v) = (FUN_0c18cb78());
        t7 = FUN_0c2b97fc();
        (((struct o0_uint *)0xC874F8C)->v) = t7;
        t9 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)((t7 + 0x0)))))(0xC874F9C, a5, a6, a7, *(int *)((int)stk + 12), *(int *)((int)stk + 12 + 4), *(int *)((int)stk + 12 + 8), *(int *)((int)stk + 12 + 12), *(int *)((int)stk + 12 + 16), *(int *)((int)stk + 12 + 20), *(int *)((int)stk + 12 + 24));
        if (t9 != 0) {
            (((struct o2C_uchar *)0xC874F8C)->v) = 0x0;
            t24 = 0xFFFFFFFF;
        } else {
            (((struct o33_uchar *)0xC8A6F20)->v) = ((*(signed char *)0xC8A6F53) | 0x1);
            t13 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)((((((struct o0_int *)0xC874F8C)->v)) + 0x8)))))(0xC8A6F50, a5, a6, a7, *(int *)((int)stk + 12), *(int *)((int)stk + 12 + 4), *(int *)((int)stk + 12 + 8), *(int *)((int)stk + 12 + 12), *(int *)((int)stk + 12 + 16), *(int *)((int)stk + 12 + 20), *(int *)((int)stk + 12 + 24));
            (((struct o30_uint *)0xC8A6F20)->v) = 0x0;
            (((struct o2C_uchar *)0xC874F8C)->v) = 0x1;
            { struct mvb12 { char b[12]; }; *(struct mvb12 *)(((int)stk + 0)) = *(struct mvb12 *)(0xC874F90); }
            FUN_0c183628(*(Stk3 *)(((int)stk + 0)));
            t24 = 0x1;
        }
        _builtin_set_imask(((unsigned int)((((*(short *)(((int)stk + 12))) & 0xF) << 2) << 2) >> 4));
    }
    return t24;
}

int FUN_0c187220(int a4, int a5)
{
    int stk[10];
    register int t0;
    register int t1;
    register int t3;
    register int t4;
    register int t41;
    register int t14;
    register int t15;
    register int t16;
    register int t34;
    register int t36;
    register int t38;
    register int t27;
    register float u28;

    t0 = (((struct o24_int *)0xC8A2E74)->v);
    t1 = *(int *)((t0 + 0x0));
    *(unsigned int *)(((int)stk + 4)) = (t1 << 2);
    t3 = *(int *)((t0 + 0x4));
    t4 = *(int *)(((t1 << 2) + ((((struct o1C_int *)0xC8A2E74)->v))));
    (((struct o4_uint *)0xFF000038)->v) = ((unsigned int)((unsigned int)t4 >> 16) >> 8);
    (((struct o0_uint *)0xFF000038)->v) = ((unsigned int)((unsigned int)t4 >> 16) >> 8);
    *(unsigned int *)(((int)stk + 0)) = ((t4 & 0x3FFFFFF) | 0xE0000000);
    kmyMemCopy(((t4 & 0x3FFFFFF) | 0xE0000000), ((((struct o20_int *)0xC8A2E74)->v)), t3);
    _builtin_prefetch((void *)(*(int *)(((int)stk + 0))));
    if (t3 == 64) {
        _builtin_prefetch((void *)((*(int *)(((int)stk + 0))) + 0x20));
    }
    t41 = (((struct o1C_int *)0xC8A2E74)->v);
    t14 = *(int *)(((int)stk + 4));
    *(unsigned int *)((t14 + t41)) = ((*(int *)((t14 + t41))) + (((unsigned int)t3 >> 2) << 2));
    *(unsigned int *)(((int)stk + 8)) = 0xE0000000;
    if ((int)a4 > 0) {
        t15 = a4;
        t16 = a5;
        for (;;) {
            if (t15 == 1) {
                t14 = 0xF0000000;
                *(unsigned int *)(((int)stk + 8)) = t14;
            }
            if (((((struct o0_int *)0xC8A2E74)->v)) != 0) {
                t14 = 0xC17A870;
                nlCalcPoint(t16, (((int)stk + 0) + 0xC));
                u28 = (*(float *)(((int)stk + 20)));
            } else {
                *(float *)(((int)stk + 12)) = (*(float *)((t16 + 0x0)));
                *(float *)(((int)stk + 16)) = ((((struct o4_float *)(t16))->v));
                t27 = t14;
                u28 = ((((struct o8_float *)(t16))->v));
            }
            t14 = t27;
            *(float *)(((int)stk + 20)) = (1.0f / u28);
            *(float *)(((int)stk + 24)) = ((((struct oC_float *)(t16))->v));
            *(float *)(((int)stk + 28)) = ((((struct o10_float *)(t16))->v));
            t14 = (*(int *)((t16 + 0x14)));
            *(unsigned int *)(((int)stk + 32)) = t14;
            t34 = *(int *)((((((struct o24_int *)0xC8A2E74)->v)) + 0x0));
            *(unsigned int *)(((int)stk + 0)) = (t34 << 2);
            t36 = *(int *)(((t34 << 2) + ((((struct o1C_int *)0xC8A2E74)->v))));
            t14 = t36;
            t14 = ((unsigned int)t14 >> 16);
            t14 = ((unsigned int)t14 >> 8);
            (((struct o4_uint *)0xFF000038)->v) = t14;
            (((struct o0_uint *)0xFF000038)->v) = t14;
            t14 = 0xC2B5BC0;
            kmyMemCopy(((t36 & 0x3FFFFFF) | 0xE0000000), (((int)stk + 0) + 0x8), 0x20);
            _builtin_prefetch((void *)((t36 & 0x3FFFFFF) | 0xE0000000));
            t38 = (((struct o1C_int *)0xC8A2E74)->v);
            t15 = (t15 - 1);
            t14 = (*(int *)(((int)stk + 0)));
            *(unsigned int *)((t14 + t38)) = ((*(int *)((t14 + t38))) + 0x20);
            t16 = (t16 + 0x1C);
            if ((int)t15 <= 0) {
                break;
            }
        }
        t41 = t38;
    }
    return t41;
}

int FUN_0c1936bc(int a4)
{
    int stk[35];
    register int t1;
    register int t2;
    register int t3;
    register int t10;
    register int t15;
    register int t24;
    register int t46;
    register int t47;
    register int t48;
    register int t0;
    register int t4;
    register int t17;
    register int t19;
    register int t43;

    *(unsigned int *)(((int)stk + 8)) = a4;
    *(unsigned char *)(((((int)stk + 0) + 0xC) + 0x0)) = 0x0;
    *(unsigned int *)(((int)stk + 4)) = 0xC8B1664;
    t1 = a4;
    t2 = 0x0;
    t3 = 0x0;
    for (;;) {
        if ((*(signed char *)((t3 + (*(int *)(((*(int *)(((int)stk + 4))) + 0x0)))))) == 0) {
            break;
        }
        t4 = 0x0;
        for (;;) {
            if ((*(int *)((0xC2AE7B4 + (t4 << 2)))) == 0) {
                t17 = t0; t19 = t1; break;
            }
            t1 = t4;
            t1 = (t1 << 2);
            t1 = (t1 + 0xC2AE7B4);
            *(unsigned int *)(((int)stk + 0)) = t1;
            t1 = (*(int *)((t1 + 0x0)));
            t10 = strlen(t1);
            t1 = (*(int *)(((int)stk + 0)));
            t1 = (*(int *)((t1 + 0x0)));
            t15 = FUN_0c187d98(t1, ((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))) + t3), t10);
            if (t15 != 0) {
                t4 = (t4 + 0x1);
                continue;
            }
            break;
        }
        t4 = (t4 << 2);
        t0 = t17;
        t1 = t19;
        *(unsigned int *)(((int)stk + 0)) = t4;
        if ((*(int *)((0xC2AE7B4 + t4))) == 0) {
            t0 = t2;
            t0 = (t0 + (((int)stk + 0) + 0xC));
            t2 = (t2 + 0x1);
            *(unsigned char *)((t0 + 0x0)) = (*(signed char *)((t3 + (*(int *)(((*(int *)(((int)stk + 4))) + 0x0))))));
            t3 = (t3 + 0x1);
        } else {
            t24 = t4;
            t4 = 0xC8B15F8;
            t1 = t2;
            t4 = (t4 + t24);
            *(unsigned int *)(((int)stk + 0)) = t24;
            t1 = (t1 + (((int)stk + 0) + 0xC));
            FUN_0c187d24(t1, (*(int *)((t4 + 0x0))));
            t1 = (*(int *)((t4 + 0x0)));
            t2 = (t2 + (strlen(t1)));
            t1 = (*(int *)((0xC2AE7B4 + (*(int *)(((int)stk + 0))))));
            t3 = (t3 + (strlen(t1)));
        }
    }
    *(unsigned char *)(((((int)stk + 0) + 0xC) + t2)) = 0x0;
    if ((*(int *)0xC8B1668) == 0) {
        t43 = (*(short *)(((*(int *)(((int)stk + 8))) + 0x4)));
    } else {
        t43 = (*(short *)(((*(int *)0xC8B1668) + 0x0)));
    }
    t46 = strlen((((int)stk + 0) + 0xC));
    t47 = FUN_0c193846((((int)stk + 0) + 0xC), t46, t43);
    t48 = 0x0;
    if ((short)t47 != 0) {
        t48 = 0x4;
    }
    return t48;
}

float nl_display_strip_spd(int a4, int a5, int a6)
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
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u6;
    register float u7;
    register float u8;
    register float u9;
    float u14[4];
    register float u162;
    register float u163;
    register float u164;
    register float u165;
    register int t34;
    float u43[4];
    register int t55;
    float u65[4];
    register int t78;
    float u88[4];
    register int t101;
    float u110[4];
    register int t122;
    float u132[4];
    register int t145;
    float u155[4];

    t0 = *(int *)((a4 + 0x0));
    t1 = (a4 + 0x4);
    t2 = ((a4 + 0x4) + 0x20);
    if (((*(int *)(((a4 + 0x4) + 0x0))) & 1) == 0) {
        t1 = ((*(int *)(((a4 + 0x4) + 0x4))) + (((a4 + 0x4) + 0x20) - 24));
        t2 = (((a4 + 0x4) + 0x20) - 24);
    }
    u0 = *(float *)((t1 + 0x0));
    u1 = *(float *)(((t1 + 0x0) + 4));
    u2 = (((struct o8_float *)(t1))->v);
    *(volatile float *)((((t1 + 0x8) + 0x0) + 4));
    u3 = (((struct o8_float *)((t1 + 0x8)))->v);
    *(volatile float *)(((((t1 + 0x8) + 0x8) + 0x0) + 4));
    u4 = (((struct o8_float *)(((t1 + 0x8) + 0x8)))->v);
    u5 = *(float *)((((((t1 + 0x8) + 0x8) + 0x8) + 0x0) + 4));
    u14[0] = u0;
    u14[1] = u1;
    u14[2] = u2;
    u14[3] = 1.0f;
    _builtin_ftrv(u14, u14);
    t1 = t0;
    t0 = t2;
    t2 = a5;
    t3 = (a6 + 0x20);
    u0 = u4;
    u1 = u5;
    u2 = u3;
    u3 = u14[0];
    u4 = u14[1];
    u5 = u14[2];
    for (;;) {
        *(float *)(((t3 - 0x8) + 0x0)) = u2;
        *(float *)((((t3 - 0x8) + 0x0) + 4)) = 0.0f;
        t3 = (t3 - 0x8);
        t1 = (t1 - 0x1);
        t4 = *(int *)((t0 + 0x0));
        t0 = (t0 + 0x4);
        t5 = *(int *)((t0 + 0x0));
        t0 = (t0 + 0x4);
        if (t1 != 0) {
            if ((t4 & 1) != 0) {
                t6 = t0;
                t0 = (t0 + 0x18);
                t34 = (t6 - 8);
            } else {
                t34 = (t5 + t0);
            }
            t0 = (t0 + 0x20);
            u6 = *(float *)((t34 + 0x0));
            u7 = *(float *)(((t34 + 0x0) + 4));
            _builtin_prefetch((void *)t0);
            u8 = (((struct o8_float *)(t34))->v);
            *(volatile float *)((((t34 + 0x8) + 0x0) + 4));
            u5 = (u5 * (1.0f / u3));
            u9 = (((struct o8_float *)((t34 + 0x8)))->v);
            *(volatile float *)(((((t34 + 0x8) + 0x8) + 0x0) + 4));
            u2 = u9;
            u4 = (u4 * (1.0f / u3));
            *(float *)(((t3 - 0x8) + 0x0)) = u0;
            *(float *)((((t3 - 0x8) + 0x0) + 4)) = u1;
            t6 = t3;
            t3 = (t3 - 0x8);
            u43[0] = u6;
            u43[1] = u7;
            u43[2] = u8;
            u43[3] = 1.0f;
            _builtin_ftrv(u43, u43);
            *(float *)(((t3 - 0x8) + 0x0)) = u5;
            *(float *)((((t3 - 0x8) + 0x0) + 4)) = (1.0f / u3);
            t3 = (t3 - 0x8);
            t0 = (t0 - 32);
            *(float *)(((t3 - 0x8) + 0x0)) = u3;
            *(float *)((((t3 - 0x8) + 0x0) + 4)) = u4;
            t3 = (t3 - 0x8);
            *(unsigned int *)((t3 + 0x0)) = t6;
            u0 = ((((struct o8_float *)(((t34 + 0x8) + 0x8)))->v));
            u1 = (*(float *)((((((t34 + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
            t1 = (t1 - 0x1);
            _builtin_prefetch((void *)t3);
            t3 = (t3 + 0x40);
            *(float *)(((t3 - 0x8) + 0x0)) = u2;
            *(float *)((((t3 - 0x8) + 0x0) + 4)) = 0.0f;
            t3 = (t3 - 0x8);
            t6 = *(int *)((t0 + 0x0));
            t0 = (t0 + 0x4);
            t7 = *(int *)((t0 + 0x0));
            t0 = (t0 + 0x4);
            if (t1 != 0) {
                if ((t6 & 1) != 0) {
                    t8 = t0;
                    t0 = (t0 + 0x18);
                    t55 = (t8 - 8);
                } else {
                    t55 = (t7 + t0);
                }
                t0 = (t0 + 0x20);
                u3 = (*(float *)((t55 + 0x0)));
                u4 = (*(float *)(((t55 + 0x0) + 4)));
                _builtin_prefetch((void *)t0);
                u6 = (((struct o8_float *)(t55))->v);
                *(volatile float *)((((t55 + 0x8) + 0x0) + 4));
                u5 = u6;
                u6 = (((struct o8_float *)((t55 + 0x8)))->v);
                *(volatile float *)(((((t55 + 0x8) + 0x8) + 0x0) + 4));
                u2 = u6;
                *(float *)(((t3 - 0x8) + 0x0)) = u0;
                *(float *)((((t3 - 0x8) + 0x0) + 4)) = u1;
                t8 = t3;
                t3 = (t3 - 0x8);
                u65[0] = u3;
                u65[1] = u4;
                u65[2] = u5;
                u65[3] = 1.0f;
                _builtin_ftrv(u65, u65);
                u3 = u65[0];
                u4 = u65[1];
                u5 = u65[2];
                *(float *)(((t3 - 0x8) + 0x0)) = (u43[2] * (1.0f / u43[0]));
                *(float *)((((t3 - 0x8) + 0x0) + 4)) = (1.0f / u43[0]);
                t3 = (t3 - 0x8);
                t0 = (t0 - 32);
                *(float *)(((t3 - 0x8) + 0x0)) = u43[0];
                *(float *)((((t3 - 0x8) + 0x0) + 4)) = (u43[1] * (1.0f / u43[0]));
                t3 = (t3 - 0x8);
                t2 = (t2 + 0x40);
                *(unsigned int *)((t3 + 0x0)) = t8;
                u0 = ((((struct o8_float *)(((t55 + 0x8) + 0x8)))->v));
                u1 = (*(float *)((((((t55 + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
                _builtin_prefetch((void *)t3);
                t3 = (t3 + 0x40);
                continue;
            }
            t1 = t7;
            if (((int)t6 > 0) && ((t6 & 128) != 0)) {
                t6 = *(int *)((t0 + 0x0));
                t0 = (t0 + 0x4);
                t7 = *(int *)((t0 + 0x0));
                t0 = (t0 + 0x4);
                if ((t6 & 1) != 0) {
                    t6 = t0;
                    t0 = (t0 + 0x18);
                    t78 = (t6 - 8);
                } else {
                    t78 = (t7 + t0);
                }
                t0 = (t0 + 0x20);
                u3 = (*(float *)((t78 + 0x0)));
                u4 = (*(float *)(((t78 + 0x0) + 4)));
                _builtin_prefetch((void *)t0);
                u6 = (((struct o8_float *)(t78))->v);
                *(volatile float *)((((t78 + 0x8) + 0x0) + 4));
                u5 = u6;
                u6 = (((struct o8_float *)((t78 + 0x8)))->v);
                *(volatile float *)(((((t78 + 0x8) + 0x8) + 0x0) + 4));
                u2 = u6;
                *(float *)(((t3 - 0x8) + 0x0)) = u0;
                *(float *)((((t3 - 0x8) + 0x0) + 4)) = u1;
                t6 = (t3 >> 1);
                t3 = (t3 - 0x8);
                u88[0] = u3;
                u88[1] = u4;
                u88[2] = u5;
                u88[3] = 1.0f;
                _builtin_ftrv(u88, u88);
                u3 = u88[0];
                u4 = u88[1];
                u5 = u88[2];
                *(float *)(((t3 - 0x8) + 0x0)) = (u43[2] * (1.0f / u43[0]));
                *(float *)((((t3 - 0x8) + 0x0) + 4)) = (1.0f / u43[0]);
                t3 = (t3 - 0x8);
                t0 = (t0 - 32);
                *(float *)(((t3 - 0x8) + 0x0)) = u43[0];
                *(float *)((((t3 - 0x8) + 0x0) + 4)) = (u43[1] * (1.0f / u43[0]));
                t3 = (t3 - 0x8);
                t2 = (t2 + 0x40);
                *(unsigned int *)((t3 + 0x0)) = t6;
                u0 = ((((struct o8_float *)(((t78 + 0x8) + 0x8)))->v));
                u1 = (*(float *)((((((t78 + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
                _builtin_prefetch((void *)t3);
                t3 = (t3 + 0x40);
                continue;
            }
            u162 = u43[2]; u163 = (1.0f / u43[0]); u164 = u43[0]; u165 = u43[1]; break;
        }
        t1 = t5;
        if (((int)t4 > 0) && ((t4 & 128) != 0)) {
            t4 = *(int *)((t0 + 0x0));
            t0 = (t0 + 0x4);
            t5 = *(int *)((t0 + 0x0));
            t0 = (t0 + 0x4);
            if ((t4 & 1) != 0) {
                t4 = t0;
                t0 = (t0 + 0x18);
                t101 = (t4 - 8);
            } else {
                t101 = (t5 + t0);
            }
            t0 = (t0 + 0x20);
            u6 = *(float *)((t101 + 0x0));
            u7 = *(float *)(((t101 + 0x0) + 4));
            _builtin_prefetch((void *)t0);
            u8 = (((struct o8_float *)(t101))->v);
            *(volatile float *)((((t101 + 0x8) + 0x0) + 4));
            u5 = (u5 * (1.0f / u3));
            u9 = (((struct o8_float *)((t101 + 0x8)))->v);
            *(volatile float *)(((((t101 + 0x8) + 0x8) + 0x0) + 4));
            u2 = u9;
            u4 = (u4 * (1.0f / u3));
            *(float *)(((t3 - 0x8) + 0x0)) = u0;
            *(float *)((((t3 - 0x8) + 0x0) + 4)) = u1;
            t4 = (t3 >> 1);
            t3 = (t3 - 0x8);
            u110[0] = u6;
            u110[1] = u7;
            u110[2] = u8;
            u110[3] = 1.0f;
            _builtin_ftrv(u110, u110);
            *(float *)(((t3 - 0x8) + 0x0)) = u5;
            *(float *)((((t3 - 0x8) + 0x0) + 4)) = (1.0f / u3);
            t3 = (t3 - 0x8);
            t0 = (t0 - 32);
            *(float *)(((t3 - 0x8) + 0x0)) = u3;
            *(float *)((((t3 - 0x8) + 0x0) + 4)) = u4;
            t3 = (t3 - 0x8);
            *(unsigned int *)((t3 + 0x0)) = t4;
            u0 = ((((struct o8_float *)(((t101 + 0x8) + 0x8)))->v));
            u1 = (*(float *)((((((t101 + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
            t1 = (t1 - 0x1);
            _builtin_prefetch((void *)t3);
            t3 = (t3 + 0x40);
            *(float *)(((t3 - 0x8) + 0x0)) = u2;
            *(float *)((((t3 - 0x8) + 0x0) + 4)) = 0.0f;
            t3 = (t3 - 0x8);
            t4 = *(int *)((t0 + 0x0));
            t0 = (t0 + 0x4);
            t5 = *(int *)((t0 + 0x0));
            t0 = (t0 + 0x4);
            if (t1 != 0) {
                if ((t4 & 1) != 0) {
                    t6 = t0;
                    t0 = (t0 + 0x18);
                    t122 = (t6 - 8);
                } else {
                    t122 = (t5 + t0);
                }
                t0 = (t0 + 0x20);
                u3 = (*(float *)((t122 + 0x0)));
                u4 = (*(float *)(((t122 + 0x0) + 4)));
                _builtin_prefetch((void *)t0);
                u6 = (((struct o8_float *)(t122))->v);
                *(volatile float *)((((t122 + 0x8) + 0x0) + 4));
                u5 = u6;
                u6 = (((struct o8_float *)((t122 + 0x8)))->v);
                *(volatile float *)(((((t122 + 0x8) + 0x8) + 0x0) + 4));
                u2 = u6;
                *(float *)(((t3 - 0x8) + 0x0)) = u0;
                *(float *)((((t3 - 0x8) + 0x0) + 4)) = u1;
                t6 = t3;
                t3 = (t3 - 0x8);
                u132[0] = u3;
                u132[1] = u4;
                u132[2] = u5;
                u132[3] = 1.0f;
                _builtin_ftrv(u132, u132);
                u3 = u132[0];
                u4 = u132[1];
                u5 = u132[2];
                *(float *)(((t3 - 0x8) + 0x0)) = (u110[2] * (1.0f / u110[0]));
                *(float *)((((t3 - 0x8) + 0x0) + 4)) = (1.0f / u110[0]);
                t3 = (t3 - 0x8);
                t0 = (t0 - 32);
                *(float *)(((t3 - 0x8) + 0x0)) = u110[0];
                *(float *)((((t3 - 0x8) + 0x0) + 4)) = (u110[1] * (1.0f / u110[0]));
                t3 = (t3 - 0x8);
                t2 = (t2 + 0x40);
                *(unsigned int *)((t3 + 0x0)) = t6;
                u0 = ((((struct o8_float *)(((t122 + 0x8) + 0x8)))->v));
                u1 = (*(float *)((((((t122 + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
                _builtin_prefetch((void *)t3);
                t3 = (t3 + 0x40);
                continue;
            }
            t1 = t5;
            if (((int)t4 > 0) && ((t4 & 128) != 0)) {
                t4 = *(int *)((t0 + 0x0));
                t0 = (t0 + 0x4);
                t5 = *(int *)((t0 + 0x0));
                t0 = (t0 + 0x4);
                if ((t4 & 1) != 0) {
                    t4 = t0;
                    t0 = (t0 + 0x18);
                    t145 = (t4 - 8);
                } else {
                    t145 = (t5 + t0);
                }
                t0 = (t0 + 0x20);
                u3 = (*(float *)((t145 + 0x0)));
                u4 = (*(float *)(((t145 + 0x0) + 4)));
                _builtin_prefetch((void *)t0);
                u6 = (((struct o8_float *)(t145))->v);
                *(volatile float *)((((t145 + 0x8) + 0x0) + 4));
                u5 = u6;
                u6 = (((struct o8_float *)((t145 + 0x8)))->v);
                *(volatile float *)(((((t145 + 0x8) + 0x8) + 0x0) + 4));
                u2 = u6;
                *(float *)(((t3 - 0x8) + 0x0)) = u0;
                *(float *)((((t3 - 0x8) + 0x0) + 4)) = u1;
                t4 = (t3 >> 1);
                t3 = (t3 - 0x8);
                u155[0] = u3;
                u155[1] = u4;
                u155[2] = u5;
                u155[3] = 1.0f;
                _builtin_ftrv(u155, u155);
                u3 = u155[0];
                u4 = u155[1];
                u5 = u155[2];
                *(float *)(((t3 - 0x8) + 0x0)) = (u110[2] * (1.0f / u110[0]));
                *(float *)((((t3 - 0x8) + 0x0) + 4)) = (1.0f / u110[0]);
                t3 = (t3 - 0x8);
                t0 = (t0 - 32);
                *(float *)(((t3 - 0x8) + 0x0)) = u110[0];
                *(float *)((((t3 - 0x8) + 0x0) + 4)) = (u110[1] * (1.0f / u110[0]));
                t3 = (t3 - 0x8);
                t2 = (t2 + 0x40);
                *(unsigned int *)((t3 + 0x0)) = t4;
                u0 = ((((struct o8_float *)(((t145 + 0x8) + 0x8)))->v));
                u1 = (*(float *)((((((t145 + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
                _builtin_prefetch((void *)t3);
                t3 = (t3 + 0x40);
                continue;
            }
            u162 = u110[2]; u163 = (1.0f / u110[0]); u164 = u110[0]; u165 = u110[1]; break;
        }
        u5 = (u5 * (1.0f / u3));
        u4 = (u4 * (1.0f / u3));
        *(float *)(((t3 - 0x8) + 0x0)) = u0;
        *(float *)((((t3 - 0x8) + 0x0) + 4)) = u1;
        t4 = (t3 >> 1);
        t3 = (t3 - 0x8);
        t0 = (t0 - 8);
        *(float *)(((t3 - 0x8) + 0x0)) = u5;
        *(float *)((((t3 - 0x8) + 0x0) + 4)) = (1.0f / u3);
        t3 = (t3 - 0x8);
        t2 = (t2 + 0x20);
        *(float *)(((t3 - 0x8) + 0x0)) = u3;
        *(float *)((((t3 - 0x8) + 0x0) + 4)) = u4;
        t3 = (t3 - 0x8);
        *(unsigned int *)((t3 + 0x0)) = t4;
        _builtin_prefetch((void *)t3);
        t3 = (t3 + 0x20);
        return u0;
    }
    *(float *)(((t3 - 0x8) + 0x0)) = u0;
    *(float *)((((t3 - 0x8) + 0x0) + 4)) = u1;
    *(float *)((((t3 - 0x8) - 0x8) + 0x0)) = (u162 * u163);
    *(float *)(((((t3 - 0x8) - 0x8) + 0x0) + 4)) = u163;
    *(float *)(((((t3 - 0x8) - 0x8) - 0x8) + 0x0)) = u164;
    *(float *)((((((t3 - 0x8) - 0x8) - 0x8) + 0x0) + 4)) = (u165 * u163);
    *(unsigned int *)(((((t3 - 0x8) - 0x8) - 0x8) + 0x0)) = (t3 >> 1);
    _builtin_prefetch((void *)(((t3 - 0x8) - 0x8) - 0x8));
    return u0;
}

int FUN_0c2e4736(int a4)
{
    int stk[3];
    register int t0;
    register int t4;
    register int t5;
    register int t7;
    register int t11;
    register int t12;
    register int t19;
    register int t20;
    int t1;
    int t8;

    t0 = *(signed char *)0xC8D677E;
    if ((((unsigned char)t0 & 8) != 0) && (t1 = *(signed char *)0xC8D6435, t1 == 0)) {
        t4 = *(short *)0xC8D6524;
        if ((unsigned short)t4 != 0x80) {
            t5 = ((unsigned short)t4 + 0xC8D64A3);
            for (;;) {
                t5 = (t5 - 1);
                *(unsigned char *)((t5 + 0x1)) = (*(signed char *)((t5 + 0x0)));
                t7 = *(signed char *)((t5 + 0x0));
                if (((unsigned char)t7 == 90) && (t8 = *(int *)0xC304178, (unsigned int)t5 < (unsigned int)t8)) {
                    break;
                }
            }
            *(unsigned int *)0xC304178 = t5;
            *(unsigned char *)((t5 + 0x0)) = 0x48;
            *(unsigned short *)0xC8D6524 = ((*(short *)0xC8D6524) + 0x1);
            (((struct o1_uchar *)0xC8D6434)->v) = 0x1;
            return (unsigned char)t7;
        }
        if ((int)(unsigned char)a4 < (int)0x4) {
            FUN_0c2ec410(0xC8D6490, 0x64);
            t11 = FUN_0c2d7612(0x0);
            if ((signed char)t11 == 0) {
                (((struct o0_uchar *)0xC8D6434)->v) = a4;
                t12 = *(signed char *)0xC8D677D;
                *(unsigned char *)0xC8D677D = (t12 | 0x10);
                *(unsigned char *)0xC8D6498 = 0x5;
                return (t12 | 0x10);
            }
            *(unsigned char *)0xC8D677D = ((*(signed char *)0xC8D677D) & 0xEF);
            (((struct o1_uchar *)0xC8D6434)->v) = 0x0;
            FUN_0c2d63cc(0x0);
            FUN_0c2e73b4(a4);
            FUN_0c2f9af8(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
            FUN_0c2ec304();
            return FUN_0c2e83ae();
        }
    } else {
        if ((int)(unsigned char)a4 < (int)0x4) {
            FUN_0c2ec410(0xC8D6490, 0x64);
            t19 = FUN_0c2d7612(0x0);
            if ((signed char)t19 == 0) {
                (((struct o0_uchar *)0xC8D6434)->v) = a4;
                t20 = *(signed char *)0xC8D677D;
                *(unsigned char *)0xC8D677D = (t20 | 0x10);
                *(unsigned char *)0xC8D6498 = 0x5;
                return (t20 | 0x10);
            }
            *(unsigned char *)0xC8D677D = ((*(signed char *)0xC8D677D) & 0xEF);
            (((struct o1_uchar *)0xC8D6434)->v) = 0x0;
            FUN_0c2d63cc(0x0);
            FUN_0c2e73b4(a4);
            FUN_0c2f9af8(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
            FUN_0c2ec304();
            return FUN_0c2e83ae();
        }
    }
    *(unsigned char *)0xC8D6498 = 0x2;
    return (unsigned char)t0;
}

int nlSingleLineSub(int a4, int a5, int a6, int a7)
{
    int stk[12];
    register int t15;
    register int t16;
    register float u17;
    register float u21;
    register float u25;
    register float u26;
    register float u30;
    register float u34;
    register int t36;
    register int t37;
    register int t38;

    *(unsigned int *)(((int)stk + 44)) = a6;
    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 8)) = (nlLineSendHeader(a7));
    nlPushMatrix(0xC2A6250);
    nlMultiMatrix8(((((struct oC_int *)0xC868794)->v)));
    if ((0x2 & a7) != 0) {
        nlMultiMatrix8(((((struct o0_int *)0xC868794)->v)));
    }
    nlMultiPushedMatrix();
    nlCalcPoint44((*(int *)(((int)stk + 0))), (((int)stk + 0) + 0x1C));
    nlCalcPoint44((*(int *)(((int)stk + 4))), (((int)stk + 0) + 0xC));
    nlPopMatrix(0x1);
    t15 = nlLineClipNear((((int)stk + 0) + 0x1C), (((int)stk + 0) + 0xC));
    if (t15 != 0) {
        t16 = nlLineCalcColor((((int)stk + 0) + 0x1C), (((int)stk + 0) + 0xC));
        if (t16 == 0) {
            return 0x0;
        }
        u17 = *(float *)(((int)stk + 36));
        u21 = ((((struct o0_float *)0xC86CE60)->v));
        u21 = u21 + ((1.0f / u17)) * (*(float *)(((int)stk + 28)));
        *(float *)(((int)stk + 28)) = u21;
        u25 = ((((struct o4_float *)0xC86CE60)->v));
        u25 = u25 + ((1.0f / u17)) * (*(float *)(((int)stk + 32)));
        *(float *)(((int)stk + 32)) = u25;
        u26 = *(float *)(((int)stk + 20));
        u30 = ((((struct o0_float *)0xC86CE60)->v));
        u30 = u30 + ((1.0f / u26)) * (*(float *)(((int)stk + 12)));
        *(float *)(((int)stk + 12)) = u30;
        u34 = ((((struct o4_float *)0xC86CE60)->v));
        u34 = u34 + ((1.0f / u26)) * (*(float *)(((int)stk + 16)));
        *(float *)(((int)stk + 16)) = u34;
        t36 = FUN_0c1826a0((*(int *)(((int)stk + 8))), (((int)stk + 0) + 0x1C), (((int)stk + 0) + 0xC), (((int)stk + 0) + 0x2C));
        t37 = *(int *)0xC83CFDC;
        t38 = t37;
        if ((a7 & 0x1) != 0) {
            t38 = (t37 + 0x8);
        }
        *(unsigned int *)((t38 + 0x0)) = (((*(int *)((t38 + 0x0))) & 0xFC000000) | (t36 & 0x3FFFFFF));
        return 0x1;
    }
    return 0x0;
}

int FUN_0c2b9c74(int a4, int a5, int a6)
{
    int stk[2];
    register int t0;
    register int t1;
    register int t5;
    register int t6;
    register int t7;
    register int t11;
    register int t12;
    register int t13;
    register int t24;
    register int t25;

    t0 = *(signed char *)((a4 + 0x6));
    t1 = *(signed char *)((a5 + 0x6));
    *(unsigned char *)(((int)stk + 3)) = (t1 - t0);
    if ((int)(signed char)(t1 - t0) < 0) {
        *(unsigned char *)(((int)stk + 3)) = ((*(signed char *)(((int)stk + 3))) + 0x3C);
        *(unsigned char *)(((int)stk + 2)) = 0xFFFFFFFF;
    } else {
        *(unsigned char *)(((int)stk + 2)) = 0x0;
    }
    t5 = *(signed char *)((a5 + 0x5));
    t6 = *(signed char *)(((int)stk + 2));
    t7 = *(signed char *)(((0x5 + a4) + 0x0));
    *(unsigned char *)(((int)stk + 2)) = ((t6 + t5) - t7);
    if ((int)(signed char)((t6 + t5) - t7) < 0) {
        *(unsigned char *)(((int)stk + 2)) = ((*(signed char *)(((int)stk + 2))) + 0x3C);
        *(unsigned char *)(((int)stk + 1)) = 0xFFFFFFFF;
    } else {
        *(unsigned char *)(((int)stk + 1)) = 0x0;
    }
    t11 = *(signed char *)((a5 + 0x4));
    t12 = *(signed char *)(((int)stk + 1));
    t13 = *(signed char *)(((0x4 + a4) + 0x0));
    *(unsigned char *)(((int)stk + 1)) = ((t12 + t11) - t13);
    if ((int)(signed char)((t12 + t11) - t13) < 0) {
        *(unsigned char *)(((int)stk + 1)) = ((*(signed char *)(((int)stk + 1))) + 0x18);
        *(unsigned char *)(((int)stk + 0)) = 0xFFFFFFFF;
    } else {
        *(unsigned char *)(((int)stk + 0)) = 0x0;
    }
    *(unsigned char *)(((int)stk + 0)) = (((*(signed char *)((a5 + 0x3))) + (*(signed char *)(((int)stk + 0)))) - (*(signed char *)((a4 + 0x3))));
    *(unsigned char *)((a6 + 0x3)) = ((*(signed char *)((a6 + 0x3))) + (*(signed char *)(((int)stk + 3))));
    *(unsigned char *)((a6 + 0x2)) = ((*(signed char *)((a6 + 0x2))) + (*(signed char *)(((int)stk + 2))));
    t24 = *(signed char *)(((int)stk + 1));
    t25 = *(signed char *)((a6 + 0x1));
    *(unsigned char *)((a6 + 0x1)) = (t25 + t24);
    *(unsigned char *)((a6 + 0x0)) = ((*(signed char *)((a6 + 0x0))) + (*(signed char *)(((int)stk + 0))));
    return (t25 + t24);
}

int FUN_0c2d487c(int a4, int a5, int a6)
{
    int stk[3];
    register int t0;
    register int t37;
    register int t1;
    register int t5;
    register int t12;
    register int t25;
    register int t30;
    register int t32;
    register int t33;
    register int t35;
    register int t4;

    *(unsigned short *)(((int)stk + 4)) = a4;
    *(unsigned short *)(((int)stk + 0)) = a5;
    *(unsigned char *)(((int)stk + 8)) = a6;
    t0 = FUN_0c2d6658();
    t37 = (unsigned char)t0;
    if ((unsigned char)t0 == 0) {
        t1 = *(short *)(((int)stk + 4));
        *(volatile int *)0xC8D25F0;
        FUN_0c1a2184(0x0, ((unsigned int)(unsigned short)t1 >> 8));
        t5 = *(int *)0xC8D25F0;
        if ((t4 & 0x40) != 0) {
            (((struct o74_uchar *)(t5))->v) = ((*(signed char *)(((t5 + 0x74) + 0x0))) | 0x40);
        } else {
            (((struct o74_uchar *)(t5))->v) = ((*(signed char *)(((t5 + 0x74) + 0x0))) & 0xBF);
        }
        t12 = *(int *)0xC8D25F0;
        (((struct o74_uchar *)(t12))->v) = ((*(signed char *)(((t12 + 0x74) + 0x0))) | 0x20);
        (((struct o70_uchar *)((*(int *)0xC8D25F0)))->v) = (*(short *)(((int)stk + 4)));
        (((struct o60_uchar *)((*(int *)0xC8D25F0)))->v) = (*(signed char *)(((int)stk + 0)));
        if ((unsigned char)(*(signed char *)(((int)stk + 8))) == 2) {
            (((struct o64_uchar *)((*(int *)0xC8D25F0)))->v) = ((unsigned int)(unsigned short)(*(short *)(((int)stk + 0))) >> 8);
        }
        t25 = *(int *)0xC8D25F0;
        (((struct o74_uchar *)(t25))->v) = ((*(signed char *)(((t25 + 0x74) + 0x0))) | 0x80);
        FUN_0c2ec410(0xC8D2698, 0x32);
        for (;;) {
            if (((*(signed char *)((((*(int *)0xC8D25F0) + 0x74) + 0x0))) & 128) == 0) {
                t30 = *(int *)0xC8D25F0;
                (((struct o74_uchar *)(t30))->v) = ((*(signed char *)(((t30 + 0x74) + 0x0))) & 0xDF);
                t32 = *(int *)0xC8D25F0;
                t33 = *(signed char *)(((t32 + 0x74) + 0x0));
                (((struct o74_uchar *)(t32))->v) = (t33 & 0xBF);
                return (t33 & 0xBF);
            }
            t35 = FUN_0c2ec430((*(int *)0xC8D2698));
            if ((signed char)t35 != 0) {
                break;
            }
        }
        t37 = (FUN_0c2d65ae(0x51E));
    }
    return t37;
}

int FUN_0c2d6f70(int a4, int a5, int a6, int a7, int a8, int a9)
{
    int stk[2];
    register int t30;
    register int t24;
    register int t27;

    *(unsigned char *)(((int)stk + 4)) = a6;
    *(unsigned char *)(((int)stk + 0)) = a7;
    *(volatile signed char *)0xC8D26FA;
    *(unsigned char *)0xC8D7092 = 0x0;
    if ((unsigned char)a5 == 2) {
        (((struct o0_uchar *)0xC8D26FA)->v) = ((*(signed char *)0xC8D26FA) & 0x7F);
        (((struct o0_uchar *)0xC8D26FA)->v) = ((*(signed char *)0xC8D26FA) | 0x40);
        (((struct o1_uchar *)0xC8D26FA)->v) = ((signed char)(a9 >> 0));
        (((struct o2_uchar *)0xC8D26FA)->v) = ((*(signed char *)0xC8D26FC) & 0x7F);
        (((struct o2_uchar *)0xC8D26FA)->v) = ((*(signed char *)0xC8D26FC) | 0x40);
        (((struct o3_uchar *)0xC8D26FA)->v) = ((signed char)(a8 >> 0));
        (((struct o4_uchar *)0xC8D26FA)->v) = ((*(signed char *)0xC8D26FE) & 0xBF);
        *(unsigned char *)0xC8D7092 = ((*(signed char *)0xC8D7092) & 0xFE);
        t24 = ((*(signed char *)0xC8D7092) | 0x2);
        t27 = 0xC8D26FE;
    } else {
        if (((unsigned char)a5 != 4) && ((unsigned char)a5 != 7)) {
            (((struct o0_uchar *)0xC8D26FA)->v) = ((*(signed char *)0xC8D26FA) & 0xBF);
            (((struct o2_uchar *)0xC8D26FA)->v) = ((*(signed char *)0xC8D26FC) | 0x80);
            (((struct o4_uchar *)0xC8D26FA)->v) = ((*(signed char *)0xC8D26FE) | 0x80);
            *(unsigned char *)0xC8D7092 = ((*(signed char *)0xC8D7092) | 0x1);
            t24 = ((*(signed char *)0xC8D7092) & 0xFD);
            t27 = 0xC8D26FA;
        } else {
            (((struct o0_uchar *)0xC8D26FA)->v) = ((*(signed char *)0xC8D26FA) & 0x7F);
            (((struct o0_uchar *)0xC8D26FA)->v) = ((*(signed char *)0xC8D26FA) & 0xBF);
            (((struct o1_uchar *)0xC8D26FA)->v) = ((signed char)(a9 >> 0));
            (((struct o2_uchar *)0xC8D26FA)->v) = ((*(signed char *)0xC8D26FC) & 0x7F);
            (((struct o2_uchar *)0xC8D26FA)->v) = ((*(signed char *)0xC8D26FC) & 0xBF);
            (((struct o3_uchar *)0xC8D26FA)->v) = ((signed char)(a8 >> 0));
            (((struct o4_uchar *)0xC8D26FA)->v) = ((*(signed char *)0xC8D26FE) & 0xBF);
            *(unsigned char *)0xC8D7092 = ((*(signed char *)0xC8D7092) & 0xFE);
            t24 = ((*(signed char *)0xC8D7092) | 0x2);
            t27 = 0xC8D26FE;
        }
    }
    *(unsigned char *)0xC8D7092 = t24;
    FUN_0c2d707a(t27, (*(signed char *)(((int)stk + 4))));
    t30 = FUN_0c2d7806(0x80);
    *(unsigned char *)0xC8D6836 = (*(signed char *)(((int)stk + 0)));
    return t30;
}

int kmGetSystemMetrics(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    if (((*(int *)((a4 + 0x0))) & 1) != 0) {
        kmyMemCopy((a4 + 0x68), 0xC8BEED8, 0xA0);
        kmyMemCopy((0x108 + a4), 0xC8BEFFC, 0xA0);
    }
    if (((*(int *)((a4 + 0x0))) & 2) != 0) {
        t0 = (a4 + 0x4);
        t1 = ((*(int *)0xC8BF0E0) - 1);
        for (;;) {
            t1 = (t1 & 0x7);
            t2 = *(int *)((((t1 << 2) + 0xC8BF0BC) + 0x0));
            t1 = (t1 - 1);
            *(unsigned int *)((t0 + 0x0)) = ((int)((unsigned int)((((t2 << 2) << 2) << 2) << 1) / (unsigned int)0x64));
            t0 = (t0 + 0x4);
            if ((unsigned int)t0 >= (unsigned int)(a4 + 0x24)) {
                break;
            }
        }
        t0 = 0x0;
        for (;;) {
            t1 = *(int *)(((0xC8BF09C + t0) + 0x0));
            t2 = ((a4 + 0x24) + t0);
            t0 = (t0 + 0x4);
            *(unsigned int *)((t2 + 0x0)) = t1;
            if ((unsigned int)t0 >= (unsigned int)0x20) {
                break;
            }
        }
    }
    if (((*(int *)((a4 + 0x0))) & 4) != 0) {
        (((struct o50_uint *)(a4))->v) = ((((struct o8_int *)0xC8BEFD4)->v));
        (((struct o54_uint *)(a4))->v) = ((((struct oC_int *)0xC8BEFD4)->v));
        (((struct o44_uint *)(a4))->v) = ((((struct o0_int *)0xC8BEFD4)->v));
        (((struct o48_uint *)(a4))->v) = 0x0;
        (((struct o4C_uint *)(a4))->v) = ((((struct o4_int *)0xC8BEFD4)->v));
    }
    if (((*(int *)((a4 + 0x0))) & 16) != 0) {
        (((struct o58_uint *)(a4))->v) = (((((struct o20_int *)0xC8BEFD4)->v)) - ((((struct o10_int *)0xC8BEFD4)->v)));
        (((struct o5C_uint *)(a4))->v) = (((((((struct o24_int *)0xC8BEFD4)->v)) - ((((struct o10_int *)0xC8BEFD4)->v))) & 0xFFFFF) << 2);
        (((struct o64_uint *)(a4))->v) = (((((struct o18_int *)0xC8BEFD4)->v)) - ((((struct o10_int *)0xC8BEFD4)->v)));
        (((struct o60_uint *)(a4))->v) = (((((struct o1C_int *)0xC8BEFD4)->v)) - ((((struct o10_int *)0xC8BEFD4)->v)));
    }
    if (((*(int *)((a4 + 0x0))) & 8) != 0) {
        (((struct o1A8_uint *)(a4))->v) = ((((struct o0_int *)0xC8BFFA8)->v));
        (((struct o1AC_uint *)(a4))->v) = ((((struct o8_int *)0xC8BFFA8)->v));
    }
    return 0x0;
}

int vmsfs_setwork(int a4, int a5, int a6)
{

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
    register int v0_7;
    v0_1 = a4;
    v0_2 = a5;
    v0_3 = a6;
    if (((*(int *)(((*(int *)0xC8C4600) + 0x8))) == 0)) goto L_C2BE320;
    if ((v0_2 == 0)) goto L_C2BE320;
    v0_5 = *(int *)((((v0_1 * 0x148) + 0xC8C4604) + 0x4));
    v0_6 = (v0_5);
    v0_7 = (0xC303C28);
    v0_0 = (((v0_1 * 0x148) + 0xC8C4604));
    v0_4 = (0xC303C18);
    if ((v0_5 == 0)) goto L_C2BE2F8;
    if ((v0_6 == 1)) goto L_C2BE2FE;
    if ((v0_6 == 2)) goto L_C2BE304;
    if ((v0_6 == 3)) goto L_C2BE30A;
    L_C2BE320:;
    v0_6 = (0xFFFFFF00);
    L_C2BE3B4:;
    return v0_6;
    L_C2BE30A:;
    v0_5 = ((*(int *)((v0_7 + 0xC))));
    v0_4 = ((*(int *)((v0_4 + 0xC))));
    L_C2BE30E:;
    if (((int)(((((v0_4 + v0_5) + 0x1) << 8) << 1) + 0x20) <= (int)v0_3)) goto L_C2BE326;
    goto L_C2BE320;
    L_C2BE326:;
    *(unsigned char *)((v0_0 + 0x2)) = 0x1;
    *(unsigned short *)((v0_0 + 0x0)) = v0_1;
    *(unsigned int *)((v0_0 + 0x1C)) = ((v0_1 * 0x4C) + 0xC8C9064);
    *(unsigned char *)((v0_0 + 0xA)) = 0x0;
    *(unsigned char *)((v0_0 + 0xB)) = 0x0;
    *(unsigned char *)((v0_0 + 0xC)) = 0x0;
    *(unsigned int *)((v0_0 + 0x2C)) = v0_2;
    *(unsigned int *)((v0_0 + 0x20)) = (v0_2 + 0x20);
    *(unsigned int *)((v0_0 + 0x24)) = (0x220 + v0_2);
    *(unsigned int *)((v0_0 + 0x28)) = (((((v0_4 + 0x1) << 8) << 1) + v0_2) + 0x20);
    *(unsigned short *)((v0_0 + 0xE)) = 0x1;
    *(unsigned short *)((v0_0 + 0x10)) = v0_4;
    *(unsigned short *)((v0_0 + 0x12)) = v0_5;
    *(unsigned short *)((v0_0 + 0x14)) = 0x20;
    memset((v0_0 + 0x38), 0x0, 0x10);
    memset((v0_0 + 0x48), 0x0, 0x100);
    memset((*(int *)((v0_0 + 0x2C))), 0x47, 0x20);
    memset((*(int *)((v0_0 + 0x20))), 0x53, 0x20);
    memset((*(int *)((v0_0 + 0x24))), 0x46, 0x20);
    memset((*(int *)((v0_0 + 0x28))), 0x44, 0x20);
    v0_1 = *(int *)((v0_0 + 0x1C));
    *(unsigned int *)((v0_1 + 0x30)) = (*(int *)((v0_1 + 0x1C)));
    *(unsigned char *)((v0_0 + 0x8)) = 0x1;
    *(unsigned char *)((v0_0 + 0x9)) = 0x1;
    v0_6 = (0x0);
    goto L_C2BE3B4;
    L_C2BE304:;
    v0_5 = ((*(int *)((v0_7 + 0x8))));
    v0_4 = ((*(int *)((v0_4 + 0x8))));
    goto L_C2BE30E;
    L_C2BE2FE:;
    v0_5 = ((*(int *)((v0_7 + 0x4))));
    v0_4 = ((*(int *)((v0_4 + 0x4))));
    goto L_C2BE30E;
    L_C2BE2F8:;
    v0_5 = ((*(int *)((v0_7 + 0x0))));
    v0_4 = ((*(int *)((v0_4 + 0x0))));
    goto L_C2BE30E;
}

int FUN_0c2d835c(int a4)
{
    int stk[7];
    register int t52;
    register int t31;
    register int t42;
    register int t44;
    int t11;
    register int t12;
    int t20;
    register int t21;
    int t39;
    register int t40;
    register int t41;

    t52 = 0x0;
    if ((*(int *)((a4 + 0x8))) == 0) {
    } else {
        *(unsigned int *)(((((int)stk + 0) + 0x8) + 0x4)) = (((int)stk + 0) + 0x8);
        *(unsigned char *)(((((int)stk + 0) + 0x8) + 0x0)) = 0x0;
        *(unsigned char *)(((*(int *)(((int)stk + 12))) + 0x0)) = (*(signed char *)(((*(int *)(((*(int *)((a4 + 0x8))) + 0x34))) + 0x0)));
        *(unsigned char *)(((*(int *)(((*(int *)((a4 + 0x8))) + 0x34))) + 0x0)) = (FUN_0c2d8464(a4));
        if ((((-((((((*(signed char *)(((((int)stk + 0) + 0x8) + 0x0))) & 4) == 0)) ? 1 : 0) - 1)) ^ (-((((((*(signed char *)((((*(int *)((a4 + 0x8))) + 0x30) + 0x0))) & 4) == 0)) ? 1 : 0) - 1))) != 0) && (t11 = *(int *)((a4 + 0x8)), t12 = *(signed char *)(((t11 + 0x30) + 0x0)), (t12 & 4) != 0)) {
            FUN_0c2d7df8(a4, 0x0);
        }
        if ((((-((((((*(signed char *)(((((int)stk + 0) + 0x8) + 0x0))) & 2) == 0)) ? 1 : 0) - 1)) ^ (-((((((*(signed char *)((((*(int *)((a4 + 0x8))) + 0x30) + 0x0))) & 2) == 0)) ? 1 : 0) - 1))) != 0) && (t20 = *(int *)((a4 + 0x8)), t21 = *(signed char *)(((t20 + 0x30) + 0x0)), (t21 & 2) != 0)) {
            *(unsigned char *)((a4 + 0x0)) = 0x1;
            *(unsigned char *)(((*(int *)(((*(int *)((a4 + 0x8))) + 0x34))) + 0x0)) = 0x0;
            if ((*(signed char *)((a4 + 0x0))) != 0) {
                FUN_0c2d874e();
            }
            t31 = *(int *)((a4 + 0x8));
            (((struct o30_uchar *)(t31))->v) = ((*(signed char *)(((t31 + 0x30) + 0x0))) | 0x2);
            *(unsigned char *)((a4 + 0x0)) = 0x0;
        }
        if (((*(signed char *)(((*(int *)(((int)stk + 12))) + 0x0))) != 0) && (t39 = *(int *)((a4 + 0x8)), t40 = *(int *)((t39 + 0x34)), t41 = *(signed char *)((t40 + 0x0)), t41 == 0)) {
            *(unsigned int *)((((int)stk + 0) + 0x4)) = ((int)stk + 0);
            *(unsigned char *)((((int)stk + 0) + 0x0)) = 0x0;
            t42 = *(int *)((a4 + 0xC));
            (((struct o74_uchar *)(t42))->v) = ((*(signed char *)((t42 + 0x74))) | 0x80);
            t44 = *(int *)((a4 + 0x8));
            (((struct o50_uchar *)(t44))->v) = ((*(signed char *)(((t44 + 0x50) + 0x0))) | 0x40);
            *(unsigned char *)((((int)stk + 0) + 0x0)) = ((*(signed char *)((((int)stk + 0) + 0x0))) | 0x40);
            FUN_0c2d8590(a4, ((int)stk + 0));
        }
        t52 = 0x1;
    }
    return t52;
}

int FUN_0c2ebc72(void)
{
    register int t0;
    int t1;
    int t2;
    register int t3;

    t3 = *(signed char *)0xC8D67BA;
    if (((0x2 & (unsigned char)t3) != 0) && ((t0 = *(signed char *)0xC8D67D3, (unsigned char)t0 != 2) && (t1 = *(signed char *)0xC8D6794, ((unsigned char)t1 & 192) == 0))) {
        if ((*(signed char *)0xC8D67D3) == 0) {
            if (((unsigned char)t3 & 0x4) == 0) {
                t0 = *(signed char *)0xC8D67B2;
                (((struct o22_uchar *)0xC8D6794)->v) = 0x5;
                if ((unsigned char)(((0xC & (unsigned char)t0) >> 1) >> 1) != 0) {
                    if ((unsigned char)(((0xC & (unsigned char)t0) >> 1) >> 1) != 1) {
                        if ((unsigned char)(((0xC & (unsigned char)t0) >> 1) >> 1) != 2) {
                            return (unsigned char)(((0xC & (unsigned char)t0) >> 1) >> 1);
                        }
                        return FUN_0c2ec410(0xC8D67C8, ((unsigned short)(unsigned char)(*(signed char *)0xC8D67AB) * (unsigned short)0x64));
                    }
                    (((struct o34_uint *)0xC8D6794)->v) = 0xFFFFFFFF;
                    return (unsigned char)(((0xC & (unsigned char)t0) >> 1) >> 1);
                }
                return FUN_0c2ec410(0xC8D67C8, 0x0);
            }
            return FUN_0c2ec304();
        }
        if ((unsigned char)(*(signed char *)0xC8D67D3) == 3) {
            if (0x0 != 0) {
                if (0x0 != 1) {
                    if (0x0 != 2) {
                        return 0x0;
                    }
                    return FUN_0c2ec410(0xC8D67C8, ((unsigned short)(unsigned char)(*(signed char *)0xC8D67AB) * (unsigned short)0x64));
                }
                (((struct o34_uint *)0xC8D6794)->v) = 0xFFFFFFFF;
                return 0x0;
            }
            return FUN_0c2ec410(0xC8D67C8, 0x0);
        }
        if ((((unsigned char)(*(signed char *)0xC8D6793) & 128) == 0) && (t2 = *(signed char *)0xC8D6795, ((unsigned char)t2 & 32) == 0)) {
            return FUN_0c2ec304();
        }
        (((struct o0_uchar *)0xC8D6794)->v) = ((*(signed char *)0xC8D6794) | 0x20);
        t0 = *(signed char *)0xC8D67B2;
        (((struct o22_uchar *)0xC8D6794)->v) = 0x3;
        if ((unsigned char)(t0 & 0x3) != 0) {
            if ((unsigned char)(t0 & 0x3) != 1) {
                if ((unsigned char)(t0 & 0x3) != 2) {
                    return (unsigned char)(t0 & 0x3);
                }
                return FUN_0c2ec410(0xC8D67C8, ((unsigned short)(unsigned char)(*(signed char *)0xC8D67AB) * (unsigned short)0x64));
            }
            (((struct o34_uint *)0xC8D6794)->v) = 0xFFFFFFFF;
            return (unsigned char)(t0 & 0x3);
        }
        return FUN_0c2ec410(0xC8D67C8, 0x0);
    }
    return FUN_0c2ec304();
}

int FUN_0c2ec776(int a4)
{
    int stk[7];
    register int t0;
    register int t1;
    register int t3;
    register int t9;
    register int t13;
    register int t38;
    register int t59;
    register int t44;
    register int t45;
    register int t46;
    register int t47;
    int t39;

    *(unsigned char *)(((int)stk + 20)) = a4;
    t0 = *(signed char *)0xC8D67B5;
    t1 = t0;
    if ((unsigned char)t0 == 0) {
        t1 = 0x2;
    }
    t3 = *(signed char *)(((int)stk + 20));
    if ((unsigned char)t3 == 0) {
        t9 = *(signed char *)0xC8D679F;
        t46 = t1;
        if (((unsigned char)(*(signed char *)0xC8D67B2) & 16) == 0) {
            t46 = (*(signed char *)0xC8D67B4);
        }
        t13 = *(signed char *)0xC8D679E;
        t47 = 0x0;
        if (((unsigned char)t13 & 0xE0) != 0) {
            if (((unsigned char)t13 & 0xE0) != 32) {
                t47 = 0x5;
                if (((unsigned char)t13 & 0xE0) != 64) {
                    t47 = 0x1;
                    if (((unsigned char)t13 & 0xE0) != 96) {
                        if (((unsigned char)t13 & 0xE0) != 0x80) {
                        } else {
                            t47 = 0x3;
                        }
                    }
                }
            } else {
                t47 = 0x2;
                if (((unsigned char)(*(signed char *)0xC8D67A4) & 128) != 0) {
                    t47 = 0x4;
                }
            }
        }
        t44 = 0x0;
        if (((unsigned char)(*(signed char *)0xC8D679A) & 0x4) != 0) {
            t44 = 0x1;
        }
        t45 = (t9 & 0x3F);
    } else {
        t38 = *(signed char *)0xC8D679F;
        t47 = 0x0;
        if (((unsigned char)t3 == 7) && (t39 = *(signed char *)0xC8D679D, ((unsigned char)t39 & 128) != 0)) {
            t47 = 0x5;
        }
        t44 = 0x0;
        t45 = (t38 & 0x18);
        t46 = t1;
    }
    *(int *)((int)stk + 16) = (t44);
    *(int *)((int)stk + 12) = ((*(signed char *)0xC8D67A6));
    *(int *)((int)stk + 8) = ((*(signed char *)0xC8D67A5));
    *(int *)((int)stk + 4) = ((*(signed char *)0xC8D67AA));
    *(int *)((int)stk + 0) = ((*(signed char *)0xC8D67A9));
    t59 = FUN_0c2d73f6(t46);
    return (FUN_0c2d6c38((*(signed char *)(((int)stk + 20))), t59, t45, t47));
}

int FUN_0c2f703c(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    int t2;
    register int t3;
    register int t4;
    register int t5;
    int t6;
    register int t7;

    (((struct oE_ushort *)0xC8DF920)->v) = ((((struct oC_short *)0xC8DF920)->v));
    t7 = (((struct o0_short *)0xC8DFFE2)->v);
    if ((signed char)a4 == 0) {
        if (((unsigned short)t7 & 0x2) != 0) {
            if ((((unsigned char)(*(signed char *)0xC8D678F) & 0x1) != 0) && (t0 = (((struct o0_int *)0xC8DF920)->v), t1 = *(int *)0xC8E0038, t1 == t0)) {
                t0 = FUN_0c2f6fb8();
                FUN_0c2d73fa(t0, 0x1);
            } else {
                t0 = FUN_0c2d72b8(0xC8E09D0);
                if ((int)(unsigned short)t0 >= (int)0x80) {
                    FUN_0c2f76c4();
                }
            }
        }
    } else {
        if ((((unsigned short)t7 & 0x1) != 0) && (t2 = (((struct o2_short *)0xC8DE914)->v), t3 = (((struct o4_short *)0xC8DE914)->v), (int)(unsigned short)t3 < (int)((unsigned short)t2 - 300))) {
            t0 = *(short *)0xC8DFD58;
            (((struct o0_ushort *)0xC8E0970)->v) = (t3 - t0);
            if ((unsigned int)((((struct o0_short *)0xC8E0970)->v)) < (unsigned int)((((struct o12_short *)0xC8DFFE2)->v))) {
                FUN_0c2f7144((t3 - t0), 0xC8E0970, 0x1, a7);
                if ((*(signed char *)0xC8E097A) != 0) {
                    t0 = FUN_0c2d6a70(0xC8E097C, 0xC8E0970);
                    if (((signed char)t0 != 0) && ((t4 = *(signed char *)0xC8D6791, ((unsigned char)t4 & 8) == 0) || ((t5 = *(signed char *)0xC8D679A, ((unsigned char)t5 & 0x6) == 4) && (t6 = (((struct o18_short *)0xC8E0970)->v), t6 != 0)))) {
                    } else {
                        (((struct oA_uchar *)0xC8E0970)->v) = 0x0;
                        FUN_0c2f734a();
                    }
                }
            }
        }
    }
    *(unsigned char *)0xC8E0B04 = 0x0;
    (((struct o0_ushort *)0xC8DE914)->v) = ((((struct o4_short *)0xC8DE914)->v));
    return 0xC8DE918;
}

int FUN_0c2d71b2(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    if (((unsigned char)(*(signed char *)0xC8D678D) & 16) == 0) {
        (((struct o0_uchar *)0xC8D6786)->v) = ((*(signed char *)0xC8D6786) & 0xFC);
        (((struct o7_uchar *)0xC8D6786)->v) = ((*(signed char *)0xC8D678D) & 0xE0);
        if (((unsigned char)(*(signed char *)0xC8D2724) & 128) != 0) {
            return FUN_0c2d7148();
        }
        t0 = *(signed char *)0xC8D6786;
        t1 = (unsigned char)t0;
        if (((unsigned char)t0 & 32) != 0) {
            (((struct o0_uchar *)0xC8D6786)->v) = ((*(signed char *)0xC8D6786) & 0xDF);
            t0 = *(int *)0xC8D708C;
            *(unsigned char *)((t0 + 0x0)) = ((*(signed char *)((t0 + 0x0))) | 0x80);
            FUN_0c2d7806(0x80);
            t0 = *(signed char *)0xC8D708B;
            (((struct o0_uchar *)0xC8D708B)->v) = (t0 & 0x7F);
            t1 = (t0 & 0x7F);
        }
        return t1;
    }
    t0 = *(signed char *)0xC8D708A;
    t1 = *(short *)((((short)((short)(unsigned char)t0 * (short)0x8C) + 0xC8D2728) + 0x2));
    (((struct o7_uchar *)0xC8D6786)->v) = ((*(signed char *)0xC8D678D) & 0xFB);
    if ((int)(unsigned short)t1 <= (int)0x28) {
        t2 = 0x28;
        t3 = (((short)((short)(unsigned char)t0 * (short)0x8C) + 0xC8D2728) + 0x4);
        t0 = t1;
        for (;;) {
            t1 = (unsigned short)t0 == 0;
            t0 = (t0 - 1);
            if (t1) {
                break;
            }
            t1 = *(signed char *)((t3 + 0x0));
            t3 = (t3 + 0x1);
            t2 = (FUN_0c2cf374(t1));
            t2 = (signed char)t2;
            if (t2 != 0) continue;
            t2 = (*(signed char *)0xC8D6786);
            t2 = (t2 & 0xFC);
            (((struct o0_uchar *)0xC8D6786)->v) = t2;
            t2 = (*(signed char *)0xC8D678D);
            t2 = (t2 & 0xE0);
            (((struct o7_uchar *)0xC8D6786)->v) = t2;
            return t2;
        }
        t0 = ((*(signed char *)0xC8D678D) | 0x2);
    } else {
        (((struct o0_uchar *)0xC8D6786)->v) = ((*(signed char *)0xC8D6786) & 0xFC);
        t0 = ((*(signed char *)0xC8D678D) & 0xE0);
    }
    (((struct o7_uchar *)0xC8D6786)->v) = t0;
    return t0;
}

int FUN_0c198790(int a4, int a5, int a6, int a7)
{
    int stk[6];
    int t2;
    register int t4;
    register int t5;
    register int t11;
    register int t37;
    register int t38;
    int t3;
    int t13;
    register int t14;
    register int t27;
    register int t28;
    register int t29;
    register int t30;
    register int t31;
    register int t32;
    register int t33;

    *(unsigned int *)(((int)stk + 20)) = a7;
    t2 = FUN_0c198a62(a4, ((((struct o4_int *)0xC8A7380)->v)), ((((struct o0_int *)0xC8A7380)->v)));
    *(unsigned int *)(((int)stk + 12)) = 0xC8A935C;
    *(unsigned short *)(((int)stk + 8)) = ((0x4 & a6) | 0x2);
    *(unsigned int *)(((int)stk + 16)) = (((((unsigned short)a6 & 0x4) == 0)) ? 1 : 0);
    t4 = 0x380;
    t5 = 0xC8A8FDC;
    for (;;) {
        if ((unsigned int)t5 >= (unsigned int)(*(int *)(((int)stk + 12)))) {
            t3 = 0x10;
            t5 = a5;
            t4 = 0x2;
            *(int *)((int)stk + 4) = (a6 | t3);
            *(int *)((int)stk + 0) = (t4);
            t11 = FUN_0c198540(a4, t2, t5, 0x1);
            if (t11 != 0) {
                return 0xFFFFFFFF;
            }
            return 0x0;
        }
        if ((((unsigned short)(*(short *)((t5 + 0xE))) & 0x1) != 0) && (t13 = *(int *)((t5 + 0x8)), t4 = t13, t14 = *(int *)(((int)stk + 20)), t4 == t14)) {
            (((struct o18_uchar *)(t5))->v) = 0x1;
            t4 = (*(int *)((t5 + 0x0)));
            if (t4 == 0) {
                break;
            }
            t4 = (*(int *)((t5 + 0x0)));
            t3 = (*(int *)((t5 + 0x4)));
            t4 = (t4 & t3);
            if (((t4 != (a4 & t3)) && ((t27 = *(int *)(((int)stk + 16)), t27 == 0) || (t28 = *(int *)((t5 + 0x4)), t29 = *(int *)((t5 + 0x0)), t30 = (t4 == (a4 & t3)), t4 = t29, t4 = (t4 & t2), t4 != (t28 & a4)))) || ((t31 = *(short *)((t5 + 0xE)), t32 = (a4 & t3), t33 = (t4 == (a4 & t3)), t3 = (unsigned short)t31, t3 = (t3 & 0x4), t3 == 0) && ((t3 != 0) || ((((((unsigned short)a6 & 0x4) == 0)) ? 1 : 0) == 0)))) {
                t5 = (t5 + 0x1C);
                continue;
            }
            *(unsigned short *)((t5 + 0xE)) = (0x23 | a6);
            *(unsigned int *)((t5 + 0x8)) = a5;
            return 0x0;
        }
        t5 = (t5 + 0x1C);
    }
    *(int *)((int)stk + 4) = ((*(short *)(((int)stk + 8))) | 0x10);
    *(int *)((int)stk + 0) = 0x2;
    t37 = FUN_0c198540(a4, t2, a5, 0x1);
    t38 = 0x0;
    if (t37 != 0) {
        t38 = 0xFFFFFFFF;
    }
    return t38;
}


int FUN_0c2f74a4(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;

    (((struct o9_uchar *)0xC8E0972)->v) = 0x0;
    t0 = (((struct o22_short *)0xC8E0972)->v);
    t1 = *(short *)((((unsigned short)t0 << 1) + ((((struct oC_int *)0xC8E09B4)->v))));
    t2 = *(signed char *)0xC8E0977;
    if ((unsigned short)t1 == 0) {
        if (((((struct o20_short *)0xC8E0972)->v)) == 0) {
            t3 = (((struct o32_short *)0xC8E0972)->v);
            (((struct o22_ushort *)0xC8E0972)->v) = ((unsigned char)t2 + t3);
            (((struct o20_ushort *)0xC8E0972)->v) = 0x1;
            t4 = ((unsigned char)t2 + t3);
        } else {
            (((struct o2A_ushort *)0xC8E0972)->v) = t0;
            (((struct o0_uchar *)0xC8E0972)->v) = 0x1;
            (((struct o9_uchar *)0xC8E0972)->v) = 0x1;
            t4 = t2;
        }
        t3 = t4;
    } else {
        t4 = (((struct o10_int *)0xC8E09B4)->v);
        t5 = (((struct o4_int *)0xC8E09B4)->v);
        t6 = (unsigned short)t1;
        for (;;) {
            if ((unsigned char)(*(signed char *)((t5 + t6))) == (unsigned char)t2) {
                break;
            }
            t1 = (t6 << 1);
            t6 = (unsigned short)(*(short *)((t4 + (t6 << 1))));
            if (t6 != 0) continue;
            (((struct o2A_ushort *)0xC8E0972)->v) = t0;
            (((struct o0_uchar *)0xC8E0972)->v) = 0x1;
            (((struct o9_uchar *)0xC8E0972)->v) = 0x1;
            return t1;
        }
        if (t6 == 0) {
            (((struct o2A_ushort *)0xC8E0972)->v) = t0;
            (((struct o0_uchar *)0xC8E0972)->v) = 0x1;
            (((struct o9_uchar *)0xC8E0972)->v) = 0x1;
            t1 = t6;
        } else {
            if (t6 == (unsigned short)((((struct o0_short *)0xC8E09B4)->v))) {
                (((struct o2A_ushort *)0xC8E0972)->v) = t0;
                (((struct o22_ushort *)0xC8E0972)->v) = ((unsigned char)(*(signed char *)0xC8E0977) + ((((struct o32_short *)0xC8E0972)->v)));
                (((struct o20_ushort *)0xC8E0972)->v) = 0x1;
                (((struct o0_uchar *)0xC8E0972)->v) = 0x1;
                (((struct o0_ushort *)0xC8E09B4)->v) = 0x0;
                t0 = (((struct o3A_short *)0xC8E0972)->v);
                t2 = (((struct o26_short *)0xC8E0972)->v);
                (((struct o26_ushort *)0xC8E0972)->v) = (t2 + t0);
                t4 = (t2 + t0);
            } else {
                (((struct o20_ushort *)0xC8E0972)->v) = (((((struct o20_short *)0xC8E0972)->v)) + 0x1);
                (((struct o22_ushort *)0xC8E0972)->v) = t6;
                t4 = t6;
            }
            t1 = t4;
        }
        t3 = t1;
    }
    return t3;
}

void FUN_0c2cd920(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;

    if (((((struct o34_int *)0xC8BFF98)->v)) == 0) {
        return;
    }
    if (a4 == 0) {
        return;
    }
    if (a5 != 0) {
        if (((((struct o8_int *)0xC8BFF98)->v)) != 0) {
            t1 = *(int *)((((((struct o8_int *)0xC8BFF98)->v)) + 0x20));
            if ((unsigned int)t1 < (unsigned int)((((struct o0_int *)0xC8BF11C)->v))) {
                if (((((struct o24_int *)0xC8BF11C)->v)) != 0) {
                    (((struct o18_uint *)0xC8BF11C)->v) = (((((struct o18_int *)0xC8BF11C)->v)) | ((int)0x1 << (int)t1));
                } else {
                    (((struct oC_uint *)0xC8BF11C)->v) = (((((struct oC_int *)0xC8BF11C)->v)) & (~((int)0x1 << (int)t1)));
                }
            }
            *(unsigned int *)((((((struct o8_int *)0xC8BFF98)->v)) + 0x20)) = 0xFFFFFFFF;
        }
        return;
    }
    if ((((((struct o0_int *)0xC8BFF98)->v)) == 0) && (t0 = (((struct o4_int *)0xC8BFF98)->v), t0 != 0)) {
        if ((*(int *)((((((struct o4_int *)0xC8BFF98)->v)) + 0x24))) != -1) {
            t0 = *(int *)((((((struct o4_int *)0xC8BFF98)->v)) + 0x24));
            if ((unsigned int)t0 < (unsigned int)((((struct o4_int *)0xC8BF11C)->v))) {
                if (((((struct o28_int *)0xC8BF11C)->v)) != 0) {
                    (((struct o1C_uint *)0xC8BF11C)->v) = (((((struct o1C_int *)0xC8BF11C)->v)) | ((int)0x1 << (int)t0));
                } else {
                    (((struct o10_uint *)0xC8BF11C)->v) = (((((struct o10_int *)0xC8BF11C)->v)) & (~((int)0x1 << (int)t0)));
                }
            }
            *(unsigned int *)((((((struct o4_int *)0xC8BFF98)->v)) + 0x24)) = 0xFFFFFFFF;
        }
        t0 = *(int *)((((((struct o4_int *)0xC8BFF98)->v)) + 0x28));
        if ((unsigned int)((0x1 & (t0 + 0x1)) + 0x2) < (unsigned int)((((struct o4_int *)0xC8BF11C)->v))) {
            if (((((struct o28_int *)0xC8BF11C)->v)) != 0) {
                (((struct o1C_uint *)0xC8BF11C)->v) = (((((struct o1C_int *)0xC8BF11C)->v)) | ((int)0x1 << (int)((0x1 & (t0 + 0x1)) + 0x2)));
            } else {
                (((struct o10_uint *)0xC8BF11C)->v) = (((((struct o10_int *)0xC8BF11C)->v)) & (~((int)0x1 << (int)((0x1 & (t0 + 0x1)) + 0x2))));
            }
        }
        (((struct o10_uint *)0xC8BFF98)->v) = 0xFFFFFFFF;
        *(unsigned int *)((((((struct o4_int *)0xC8BFF98)->v)) + 0x28)) = ((0x1 & (t0 + 0x1)) + 0x2);
        (((struct oC_uint *)0xC8BFF98)->v) = 0x0;
        FUN_0c2cd580(((((struct o4_int *)0xC8BFF98)->v)));
    return;
    }
}

int FUN_0c193a72(void)
{
    int stk[21];
    register int t0;
    register int t28;
    register int t1;
    register int t7;
    register int t10;
    register int t13;
    register int t14;
    register int t15;

    t0 = FUN_0c191b0c(((int)stk + 0));
    t28 = t0;
    if ((short)t0 == 0) {
        t1 = 0x0;
        for (;;) {
            *(unsigned char *)(((0xC8B161C + (short)t1) + 0x0)) = (*(signed char *)(((((int)stk + 0) + (short)t1) + 0x0)));
            *(unsigned char *)(((0xC8B1620 + (short)t1) + 0x0)) = (*(signed char *)((((((int)stk + 0) + 0x4) + (short)t1) + 0x0)));
            *(unsigned char *)(((0xC8B1624 + (short)t1) + 0x0)) = (*(signed char *)((((((int)stk + 0) + 0x8) + (short)t1) + 0x0)));
            *(unsigned char *)(((0xC8B1628 + (short)t1) + 0x0)) = (*(signed char *)((((((int)stk + 0) + 0xC) + (short)t1) + 0x0)));
            *(unsigned char *)(((0xC8B162C + (short)t1) + 0x0)) = (*(signed char *)((((((int)stk + 0) + 0x10) + (short)t1) + 0x0)));
            t7 = *(signed char *)((((((int)stk + 0) + 0x14) + (short)t1) + 0x0));
            t10 = (0xC8B1630 + (short)t1);
            t1 = (t1 + 0x1);
            *(unsigned char *)((t10 + 0x0)) = t7;
            if ((int)(short)t1 >= (int)0x4) {
                break;
            }
        }
        (((struct o0_uint *)0xC8B1634)->v) = (*(int *)(((int)stk + 24)));
        (((struct o4_uint *)0xC8B1634)->v) = (*(int *)(((int)stk + 28)));
        t13 = 0x0;
        t14 = 0x0;
        t15 = 0x0;
        for (;;) {
            *(unsigned short *)(((0xC8B163C + t14) + 0x0)) = (*(int *)((((((int)stk + 0) + 0x20) + t15) + 0x0)));
            t13 = (t13 + 0x1);
            *(unsigned short *)(((0xC8B1650 + t14) + 0x0)) = (*(short *)((((((int)stk + 0) + 0x40) + t14) + 0x0)));
            t15 = (t15 + 0x4);
            t14 = (t14 + 0x2);
            if ((int)(short)t13 >= (int)0x4) {
                break;
            }
        }
        (((struct o10_ushort *)0xC8B1634)->v) = (*(int *)(((int)stk + 48)));
        (((struct o12_ushort *)0xC8B1634)->v) = (*(short *)(((int)stk + 52)));
        (((struct o14_uint *)0xC8B1634)->v) = (*(int *)(((int)stk + 56)));
        (((struct o18_uint *)0xC8B1634)->v) = (*(int *)(((int)stk + 60)));
        (((struct o24_ushort *)0xC8B1634)->v) = (*(short *)(((int)stk + 72)));
        (((struct o26_ushort *)0xC8B1634)->v) = (*(short *)(((int)stk + 74)));
        (((struct o28_ushort *)0xC8B1634)->v) = (*(short *)(((int)stk + 76)));
        (((struct o2A_ushort *)0xC8B1634)->v) = (*(short *)(((int)stk + 78)));
        (((struct o2C_ushort *)0xC8B1634)->v) = (*(short *)(((int)stk + 80)));
        t28 = 0x44;
    }
    return t28;
}

int FUN_0c19c1c8(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14)
{
    int stk[2];

    register int R2;
    register int R3;
    register int R8;
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
    v0_3 = a4;
    v0_4 = a5;
    v0_5 = a6;
    v0_6 = a7;
    *(unsigned int *)(((int)stk + 0)) = v0_3;
    *(unsigned short *)(((int)stk + 4)) = v0_4;
    v0_7 = (0xC8A738D);
    v0_8 = (0x0);
    v0_9 = ((*(int *)0xC8A73C4));
    v0_0 = (0x1);
    v0_1 = (0x0);
    v0_2 = (0x0);
    v0_3 = (0x0);
    L_C19C226:;
    if (((int)v0_3 < (int)(unsigned char)(*(signed char *)((v0_7 + 0x0))))) goto L_C19C1F0;
    if ((v0_8 == 0)) goto L_C19C2B4;
    *(unsigned short *)(((((((R8 << 1) + R8) << 2) << 2) + v0_9) + 0x8)) = v0_0;
    *(unsigned char *)(((((((R8 << 1) + R8) << 2) << 2) + v0_9) + 0xA)) = v0_1;
    *(unsigned char *)(((((((R8 << 1) + R8) << 2) << 2) + v0_9) + 0xB)) = v0_6;
    v0_2 = ((((((R8 << 1) + R8) << 2) << 2) + v0_9));
    if (((unsigned short)v0_5 == 0)) goto L_C19C256;
    v0_3 = (v0_5);
    L_C19C25A:;
    *(unsigned short *)((v0_2 + 0xC)) = v0_3;
    if (((*(int *)(((int)stk + 0))) == 0)) goto L_C19C268;
    (((struct o14_uchar *)(v0_2))->v) = v0_0;
    L_C19C26C:;
    *(unsigned int *)((v0_2 + 0x18)) = (*(int *)(((int)stk + 0)));
    if (((*(short *)(((int)stk + 4))) == 0)) goto L_C19C27C;
    (((struct o15_uchar *)(v0_2))->v) = v0_0;
    L_C19C280:;
    *(unsigned short *)((v0_2 + 0xE)) = (*(short *)(((int)stk + 4)));
    *(unsigned short *)((v0_2 + 0x1C)) = ((short)(a11 >> 0));
    *(unsigned int *)((v0_2 + 0x20)) = a12;
    *(unsigned int *)((v0_2 + 0x24)) = a14;
    *(unsigned int *)((v0_2 + 0x28)) = a13;
    (((struct o2E_uchar *)(v0_2))->v) = ((signed char)(a8 >> 0));
    (((struct o2C_uchar *)(v0_2))->v) = ((signed char)(a9 >> 0));
    (((struct o2D_uchar *)(v0_2))->v) = ((signed char)(a10 >> 0));
    *(unsigned int *)((v0_2 + 0x0)) = v0_1;
    v0_3 = (R8);
    L_C19C2B6:;
    return v0_3;
    L_C19C27C:;
    (((struct o15_uchar *)(v0_2))->v) = v0_1;
    goto L_C19C280;
    L_C19C268:;
    (((struct o14_uchar *)(v0_2))->v) = v0_1;
    goto L_C19C26C;
    L_C19C256:;
    v0_3 = ((FUN_0c19c6bc()));
    goto L_C19C25A;
    L_C19C2B4:;
    v0_3 = (0xFFFFFFFE);
    goto L_C19C2B6;
    L_C19C1F0:;
    v0_4 = ((((((v0_3 << 1) + v0_3) << 2) << 2) + v0_9));
    if (((*(short *)(((((((v0_3 << 1) + v0_3) << 2) << 2) + v0_9) + 0x8))) != 0)) goto L_C19C210;
    if ((v0_2 != 0)) goto L_C19C224;
    v0_8 = (v0_4);
    v0_2 = (v0_0);
    R8 = (v0_3);
    L_C19C224:;
    v0_3 = ((v0_3 + 0x1));
    goto L_C19C226;
    L_C19C210:;
    if (((unsigned short)v0_5 == 0)) goto L_C19C224;
    if (((unsigned short)(*(short *)((v0_4 + 0xC))) != (unsigned short)v0_5)) goto L_C19C224;
    v0_3 = (0xFFFFFFFD);
    goto L_C19C2B6;
}

int frame_make(void)
{
    int t0;
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
    register int t12;

    t2 = *(int *)0xC8D4D84;
    t3 = (((struct o10E4_int *)(t2))->v);
    t4 = 0x10E4;
    if ((int)t3 > 0) {
        t4 = (mpdrv_insertnop(((((struct o10E4_int *)(t2))->v))));
    } else {
        t5 = t3;
    }
    t3 = t4;
    t4 = t5;
    t5 = (0x44C + t2);
    t6 = (t2 + 0x28);
    t2 = 0x0;
    for (;;) {
        if ((int)t2 >= (int)0x18) {
            break;
        }
        t4 = 0xF90;
        t3 = (*(int *)0xC8D4D84);
        t4 = (t4 + t3);
        t4 = (t4 + t2);
        t7 = (*(signed char *)((t4 + 0x0)));
        if ((t7 != 0) && (t0 = *(signed char *)((t6 + 0x6)), t3 = t0, t3 == 0)) {
            t3 = (*(signed char *)((t6 + 0x4)));
            t3 = (unsigned char)t3;
            if (t3 != 1) {
                if (t3 != 2) {
                    if (t3 != 3) {
                        if (t3 != 4) {
                            if (t3 != 9) {
                                t8 = t1;
                                t9 = t7;
                                t10 = t4;
                            } else {
                                t11 = *(int *)((t5 + 0x0));
                                t7 = t11;
                                t12 = t11;
                                if ((t7 & 0x1) != 0) {
                                    t12 = 0x1;
                                }
                                t7 = 0xC2DADC2;
                                t3 = (mpdrv_set_getcond_ns(t2, t12));
                            }
                            t11 = t8;
                            t8 = t9;
                            t9 = t10;
                        } else {
                            t7 = 0xC2DAE68;
                            t3 = (mpdrv_set_dkill_ns(t2));
                        }
                        t10 = t11;
                        t11 = t8;
                        t8 = t9;
                    } else {
                        t7 = 0xC2DAEAC;
                        t3 = (mpdrv_set_dreset_ns(t2));
                    }
                    t9 = t10;
                    t10 = t11;
                    t11 = t8;
                } else {
                    t7 = 0xC2DAEF0;
                    t3 = (mpdrv_set_allstatreq_ns(t2));
                }
                t8 = t9;
                t9 = t10;
                t10 = t11;
            } else {
                t3 = (mpdrv_set_dreq_ns(t2));
            }
            t11 = t8;
            t8 = t9;
            t9 = t10;
        } else {
            t11 = t1;
            t8 = t7;
            t9 = t4;
        }
        t1 = t11;
        t5 = (t5 + 0x78);
        t7 = t8;
        t4 = t9;
        t6 = (t6 + 0x2C);
        t2 = (t2 + 0x1);
    }
    mpdrv_set_end_ns();
    return 0x0;
}

int mpdrv_make_devicedata(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    t0 = *(int *)0xC8D4D84;
    t1 = *(int *)0xC8D4D84;
    t2 = *(int *)0xC8D4D84;
    t3 = *(int *)0xC8D4D84;
    t4 = (((struct o10B4_int *)(t3))->v);
    t5 = *(int *)(((a4 << 2) + ((t3 + 0xFE8) + (((((((-t4) + 0x1) << 1) + ((-t4) + 0x1)) << 2) << 2) << 1))));
    *(unsigned char *)((((t1 + 0x28) + (a4 * 0x2C)) + 0x1)) = (*(signed char *)((((t1 + 0x28) + (a4 * 0x2C)) + 0x0)));
    *(unsigned char *)((((t1 + 0x28) + (a4 * 0x2C)) + 0x5)) = (*(signed char *)((((t1 + 0x28) + (a4 * 0x2C)) + 0x4)));
    if ((*(int *)((((t1 + 0x28) + (a4 * 0x2C)) + 0x1C))) != 0) {
        *(unsigned int *)((((t1 + 0x28) + (a4 * 0x2C)) + 0x20)) = (*(int *)((((t1 + 0x28) + (a4 * 0x2C)) + 0x1C)));
        *(unsigned int *)((((t1 + 0x28) + (a4 * 0x2C)) + 0x1C)) = 0x0;
    }
    t3 = *(signed char *)((a4 + 0xC3007E8));
    if ((unsigned char)(t3 & 0x1F) != 0) {
        t4 = (FUN_0c1127bc((t3 & 0x1F), (((a5 << 2) << 1) + (t0 + 0x4)), ((t2 + 0x44C) + (a4 * 0x78)), ((t1 + 0x28) + (a4 * 0x2C)), (t5)));
    } else {
        t4 = (FUN_0c112718(a5, ((t2 + 0x44C) + (a4 * 0x78)), ((t1 + 0x28) + (a4 * 0x2C)), t5));
    }
    if ((*(signed char *)((((t1 + 0x28) + (a4 * 0x2C)) + 0x7))) != 0) {
        t0 = *(int *)0xC8D4D84;
        t2 = (((struct o10B4_int *)(t0))->v);
        *(unsigned int *)((((t1 + 0x28) + (a4 * 0x2C)) + 0x10)) = (*(int *)((((((((((-t2) + 0x1) << 1) + ((-t2) + 0x1)) << 2) << 2) << 1) + (t0 + 0xFE8)) + (a4 << 2))));
    }
    if ((*(signed char *)((((t1 + 0x28) + (a4 * 0x2C)) + 0xD))) != 0) {
        *(unsigned char *)((((t1 + 0x28) + (a4 * 0x2C)) + 0xC)) = 0x0;
        *(unsigned char *)((((t1 + 0x28) + (a4 * 0x2C)) + 0xD)) = 0x0;
    }
    *(unsigned char *)((((t1 + 0x28) + (a4 * 0x2C)) + 0xC)) = ((*(signed char *)((((t1 + 0x28) + (a4 * 0x2C)) + 0xC))) | (*(signed char *)((((t1 + 0x28) + (a4 * 0x2C)) + 0x2))));
    *(unsigned char *)((((t1 + 0x28) + (a4 * 0x2C)) + 0xC)) = ((*(signed char *)((((t1 + 0x28) + (a4 * 0x2C)) + 0xC))) | (*(signed char *)((((t1 + 0x28) + (a4 * 0x2C)) + 0x3))));
    return t4;
}

int FUN_0c19e2a2(int a4, int a5, int a6)
{
    int stk[3];

    register int R2;
    register int R3;
    register int R7;
    register int R12;
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
    v0_5 = a4;
    v0_6 = a5;
    v0_0 = a6;
    *(unsigned int *)(((int)stk + 8)) = v0_0;
    v0_3 = *(int *)((v0_5 + 0x30));
    v0_0 = ((*(short *)((v0_6 + 0x2))));
    v0_1 = (0x0);
    v0_2 = (v0_3);
    v0_3 = (v0_3);
    v0_4 = (0x0);
    if (((*(signed char *)((v0_6 + 0x1))) != (*(signed char *)((v0_5 + 0x1))))) goto L_C19E32E;
    L_C19E374:;
    if (((int)v0_0 <= 0)) goto L_C19E388;
    v0_5 = (short)(FUN_0c19d250(((int)stk + 4), (((int)stk + 4) + 0x4))) != -1;
    if (!(v0_5)) goto L_C19E388;
    v0_5 = *(signed char *)(((int)stk + 5));
    v0_6 = (int)(v0_0 - (unsigned char)v0_5) < 0;
    v0_0 = ((v0_0 - (unsigned char)v0_5));
    if (v0_6) goto L_C19E32E;
    v0_7 = *(signed char *)(((int)stk + 4));
    v0_5 = ((unsigned char)v0_7);
    v0_6 = (0x1);
    if (((int)(unsigned char)v0_7 > (int)0x8)) goto L_C19E312;
    if (((int)v0_5 < (int)(short)v0_1)) goto L_C19E2F4;
    if ((((*(short *)((v0_2 + 0x1C))) & ((int)0x1 << (int)v0_5)) != 0)) goto L_C19E30E;
    goto L_C19E2F4;
    L_C19E388:;
    v0_7 = (0x0);
    L_C19E38A:;
    return v0_7;
    L_C19E2F4:;
    if ((((*(short *)((v0_2 + 0x1C))) & ((int)v0_6 << (int)v0_5)) != 0)) goto L_C19E32E;
    *(unsigned short *)((v0_2 + 0x1C)) = ((*(short *)((v0_2 + 0x1C))) | ((int)v0_6 << (int)v0_5));
    v0_1 = (0x9);
    L_C19E312:;
    *(int *)((int)stk + 0) = (v0_4);
    v0_8 = FUN_0c19ddc8((((int)stk + 0) + 0x8), v0_3, v0_2, (((int)stk + 0) + 0x4));
    v0_7 = ((short)v0_8);
    v0_5 = ((short)v0_8);
    if (!(((short)v0_8 != -1))) goto L_C19E32E;
    if ((v0_7 != 4)) goto L_C19E374;
    if (((int)(unsigned char)(*(signed char *)(((int)stk + 4))) > (int)0x8)) goto L_C19E374;
    v0_7 = *(signed char *)(((int)stk + 4));
    v0_5 = ((unsigned char)v0_7);
    if (((unsigned char)v0_7 != 3)) goto L_C19E36A;
    if ((((*(short *)((v0_2 + 0x1C))) & ((int)0x1 << (int)v0_5)) != 0)) goto L_C19E374;
    goto L_C19E36A;
    L_C19E32E:;
    v0_7 = (0xFFFFFFFF);
    goto L_C19E38A;
    L_C19E36A:;
    *(unsigned short *)((v0_2 + 0x1C)) = ((*(short *)((v0_2 + 0x1C))) & (~((int)v0_6 << (int)v0_5)));
    goto L_C19E374;
    L_C19E30E:;
    v0_1 = ((unsigned char)(*(signed char *)(((int)stk + 4))));
    goto L_C19E312;
}

int FUN_0c2be46c(int a4, int a5, int a6)
{
    register int t0;
    register int t1;

    if ((*(int *)(((*(int *)0xC8C4600) + 0x8))) == 1) {
        return FUN_0c2be63c(a4, a5, a6);
    }
    if ((*(signed char *)((((a4 * 0x148) + 0xC8C4604) + 0x2))) != 0) {
        *(unsigned int *)((((a4 * 0x148) + 0xC8C4604) + 0x30)) = 0x1;
        t0 = *(int *)((((a4 * 0x148) + 0xC8C4604) + 0x4));
        *(unsigned int *)((((a4 * 0x148) + 0xC8C4604) + 0x34)) = (*(int *)((((((t0 << 2) + t0) << 2) << 2) + 0xC303C3C)));
        t0 = *(int *)((((a4 * 0x148) + 0xC8C4604) + 0x30));
        t1 = *(int *)((((a4 * 0x148) + 0xC8C4604) + 0x34));
        *(unsigned int *)((((a4 * 0x148) + 0xC8C4604) + 0x30)) = (t0 + 0x1);
        vmsfs_c_progress(a4, (*(int *)(((((((a4 << 2) << 2) << 2) << 1) + 0xC8C21EC) + 0x8))), ((t0 + 0x1) - 1), t1);
        t0 = FUN_0c101148(a4, (*(int *)((((a4 * 0x148) + 0xC8C4604) + 0x1C))));
        if ((int)t0 < 0) {
            *(unsigned char *)((((a4 * 0x148) + 0xC8C4604) + 0x9)) = 0x0;
            *(unsigned char *)((((a4 * 0x148) + 0xC8C4604) + 0x8)) = 0x0;
            return 0xFFFFFF01;
        }
        t0 = check_caps(((a4 * 0x148) + 0xC8C4604));
        if ((int)t0 < 0) {
            return 0xFFFFFF83;
        }
        t0 = *(int *)((((a4 * 0x148) + 0xC8C4604) + 0x1C));
        *(unsigned int *)((t0 + 0x30)) = (*(int *)((t0 + 0x1C)));
        *(unsigned char *)((((a4 * 0x148) + 0xC8C4604) + 0x9)) = 0x1;
        *(unsigned char *)((((a4 * 0x148) + 0xC8C4604) + 0x8)) = 0x1;
        *(unsigned char *)((((a4 * 0x148) + 0xC8C4604) + 0xA)) = 0x0;
        *(unsigned char *)((((a4 * 0x148) + 0xC8C4604) + 0xB)) = 0x0;
        *(unsigned char *)((((a4 * 0x148) + 0xC8C4604) + 0xC)) = 0x0;
        return check_cache(a4);
    }
    return 0xFFFFFF01;
}


int FUN_0c2f7d9c(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = (((struct o1A_short *)0xC8E0970)->v);
    t1 = *(signed char *)0xC8E0979;
    if ((*(signed char *)0xC8E001D) != 0) {
        t2 = (((struct oC_int *)0xC8DE900)->v);
        (((struct oC_uint *)0xC8DE900)->v) = (t2 + 0x1);
        *(unsigned char *)((((t2 + 0x1) - 1) + 0x0)) = (FUN_0c2f8472((t0 | ((int)(unsigned short)a4 << (int)(unsigned char)t1))));
    } else {
        t2 = (((struct oC_int *)0xC8DE900)->v);
        (((struct oC_uint *)0xC8DE900)->v) = (t2 + 0x1);
        *(unsigned char *)((((t2 + 0x1) - 0x1) + 0x0)) = (t0 | ((int)(unsigned short)a4 << (int)(unsigned char)t1));
    }
    (((struct o18_ushort *)0xC8DE900)->v) = (((((struct o18_short *)0xC8DE900)->v)) + 0x1);
    (((struct o0_ushort *)0xC8E0970)->v) = (((((struct o0_short *)0xC8E0970)->v)) + 0x1);
    *(unsigned short *)0xC8D6800 = ((*(short *)0xC8D6800) + 0x1);
    if ((unsigned int)((((struct oC_int *)0xC8DE900)->v)) > (unsigned int)((((struct o4_int *)0xC8DE900)->v))) {
        (((struct oC_uint *)0xC8DE900)->v) = ((((struct o0_int *)0xC8DE900)->v));
    }
    t0 = *(signed char *)0xC8E0979;
    (((struct o9_uchar *)0xC8E0970)->v) = ((*(signed char *)0xC8E0979) + (*(short *)0xC8E09B0));
    t1 = *(signed char *)0xC8E0979;
    t2 = (unsigned char)t1;
    t3 = ((int)(unsigned short)a4 << (int)(-(0x8 - (unsigned char)t0)));
    if ((int)(unsigned char)t1 >= (int)0x8) {
        if ((*(signed char *)0xC8E001D) != 0) {
            t1 = (((struct oC_int *)0xC8DE900)->v);
            (((struct oC_uint *)0xC8DE900)->v) = (t1 + 0x1);
            *(unsigned char *)((((t1 + 0x1) - 1) + 0x0)) = (FUN_0c2f8472(((int)(unsigned short)a4 << (int)(-(0x8 - (unsigned char)t0)))));
        } else {
            t1 = (((struct oC_int *)0xC8DE900)->v);
            (((struct oC_uint *)0xC8DE900)->v) = (t1 + 0x1);
            *(unsigned char *)((((t1 + 0x1) - 0x1) + 0x0)) = ((int)(unsigned short)a4 << (int)(-(0x8 - (unsigned char)t0)));
        }
        (((struct o18_ushort *)0xC8DE900)->v) = (((((struct o18_short *)0xC8DE900)->v)) + 0x1);
        (((struct o0_ushort *)0xC8E0970)->v) = (((((struct o0_short *)0xC8E0970)->v)) + 0x1);
        *(unsigned short *)0xC8D6800 = ((*(short *)0xC8D6800) + 0x1);
        if ((unsigned int)((((struct oC_int *)0xC8DE900)->v)) > (unsigned int)((((struct o4_int *)0xC8DE900)->v))) {
            (((struct oC_uint *)0xC8DE900)->v) = ((((struct o0_int *)0xC8DE900)->v));
        }
        (((struct o9_uchar *)0xC8E0970)->v) = ((*(signed char *)0xC8E0979) - 8);
        t2 = 0xC8DE904;
        t3 = ((unsigned int)(unsigned short)((int)(unsigned short)a4 << (int)(-(0x8 - (unsigned char)t0))) >> 8);
    }
    (((struct o1A_ushort *)0xC8E0970)->v) = t3;
    return t2;
}
