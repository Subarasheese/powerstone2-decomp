/* Straight-line functions with calls and guards (batch gen_v): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

/* @runtime _slow_strcpy=0C187990 */
/* @runtime _quick_strcpy=0C1878F0 */
struct o0_int { int v; };
struct o0_short { short v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o0_ushort { unsigned short v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uchar { char p[0x10]; unsigned char v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o10C4_int { char p[0x10C4]; int v; };
struct o11_uchar { char p[0x11]; unsigned char v; };
struct o12_uchar { char p[0x12]; unsigned char v; };
struct o13_uchar { char p[0x13]; unsigned char v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_int { char p[0x18]; int v; };
struct o18_uchar { char p[0x18]; unsigned char v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1C_int { char p[0x1C]; int v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o1C_ushort { char p[0x1C]; unsigned short v; };
struct o2_short { char p[0x2]; short v; };
struct o20_int { char p[0x20]; int v; };
struct o20_uchar { char p[0x20]; unsigned char v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o24_int { char p[0x24]; int v; };
struct o2C_int { char p[0x2C]; int v; };
struct o2C_uint { char p[0x2C]; unsigned int v; };
struct o30_int { char p[0x30]; int v; };
struct o30_uint { char p[0x30]; unsigned int v; };
struct o32_uchar { char p[0x32]; unsigned char v; };
struct o33_uchar { char p[0x33]; unsigned char v; };
struct o38_short { char p[0x38]; short v; };
struct o3C_int { char p[0x3C]; int v; };
struct o3C_uint { char p[0x3C]; unsigned int v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_short { char p[0x40]; short v; };
struct o42_short { char p[0x42]; short v; };
struct o44_short { char p[0x44]; short v; };
struct o44_uint { char p[0x44]; unsigned int v; };
struct o46_short { char p[0x46]; short v; };
struct o46_ushort { char p[0x46]; unsigned short v; };
struct o48_int { char p[0x48]; int v; };
struct o48_uint { char p[0x48]; unsigned int v; };
struct o4C_int { char p[0x4C]; int v; };
struct o4C_ushort { char p[0x4C]; unsigned short v; };
struct o4E_ushort { char p[0x4E]; unsigned short v; };
struct o50_short { char p[0x50]; short v; };
struct o50_uint { char p[0x50]; unsigned int v; };
struct o50_ushort { char p[0x50]; unsigned short v; };
struct o54_ushort { char p[0x54]; unsigned short v; };
struct o58_uint { char p[0x58]; unsigned int v; };
struct o58_ushort { char p[0x58]; unsigned short v; };
struct o5C_uint { char p[0x5C]; unsigned int v; };
struct o6_short { char p[0x6]; short v; };
struct o7_uchar { char p[0x7]; unsigned char v; };
struct o70_uchar { char p[0x70]; unsigned char v; };
struct o74_ushort { char p[0x74]; unsigned short v; };
struct o76_ushort { char p[0x76]; unsigned short v; };
struct o78_uchar { char p[0x78]; unsigned char v; };
struct o7C_uchar { char p[0x7C]; unsigned char v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o84_short { char p[0x84]; short v; };
struct oA_uchar { char p[0xA]; unsigned char v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uchar { char p[0xC]; unsigned char v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oD_uchar { char p[0xD]; unsigned char v; };
struct oE_short { char p[0xE]; short v; };
struct oE_uchar { char p[0xE]; unsigned char v; };
struct oF_uchar { char p[0xF]; unsigned char v; };
int FUN_0c178c70(int, int, int, int, int, int);
int FUN_0c17feb6(int, int, int);
int FUN_0c17ff1e(void);
extern char *_builtin_strcpy(char *, const char *);
int FUN_0c187a88(int, int, int);
int FUN_0c187cac(int, int, ...);
int FUN_0c187d24(int, int);
int FUN_0c187d98(int, int, int);
int FUN_0c18dad6(int);
int FUN_0c18e168(int, int);
int FUN_0c18e39c(int, int, int, int, int, int);
int FUN_0c18e688(int);
int FUN_0c18e714(int, int, int);
int FUN_0c18ea14(int);
int FUN_0c191a84(int, int);
int FUN_0c1931c0(void);
int FUN_0c19337c(int);
int FUN_0c193900(int);
int FUN_0c19d250(int, int);
int FUN_0c19d2b4(int, int, int, int);
int FUN_0c19dc10(int, int, int, int, int);
int FUN_0c19dd3a(int, int, int);
int FUN_0c19ddc8(int, int, int, int);
int FUN_0c1a027c(int);
extern int FUN_0c1a2184();
int FUN_0c2c9c80(void);
int FUN_0c2d65ae(int);
extern int FUN_0c2d6f70();
int FUN_0c2d72b8(int);
int FUN_0c2d7302(int);
int FUN_0c2d7806(int);
int FUN_0c2e6310(void);
int FUN_0c2e638e(void);
int FUN_0c2e715e(int);
int FUN_0c2e7200(int);
int FUN_0c2e732c(void);
int FUN_0c2e76c8(int, int);
int FUN_0c2e83ae(void);
int FUN_0c2e89f4(int);
int FUN_0c2e8a12(int);
int FUN_0c2e8afc(int);
int FUN_0c2ec1b0(int, int, int, int, int, int);
int FUN_0c2ef0ee(int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c2f294e(int);
int FUN_0c2f3f1c(void);
int FUN_0c2f7808(int, int, int, int, int, int, int);
int FUN_0c2f7988(void);
int Qreset(void);
extern int _builtin_get_imask(void);
int buCalcCRC(int, int, int, int);
int direntry(int, int);
int get_vmstime(int, int);
int kmFreeTexture(int);
int kmSetSystemConfiguration(int);
int kmSetWaitVsyncCount(int);
int kmiWriteRegister(int, int);
int kmyGetDMAHANDLE(int);
int kmyGetInterruptLevel(void);
int kmyMemCopy(int, int, int);
int kmyQueryFinishDMA(int);
int kmyRequestDMA(int);
int kmySetDMACallback(int, int);
int kmySetTextureDMA(int, int, int, int);
int kmyiGetPALExtRatio(int);
int kmytex_FBAllocEntry(void);
int memset(int, int, int);
int nlLoadDummyTexture(void);
int nlSetWindowSize(float, float, float, float);
int nlSysInitStripContextBG(int);
int nlSysInitStripContextVtx(int);
int nl_texture_slot_free(int, int);
int nlsndG2Read(int);
int nlsndG2Write(int, int);
int nlsndG2WriteN(int, int, int);
int nlsnd_PL_WaitRequest(void);
int res_texture_slot_tick_release(int);
int setCullingThreshold(float);
int set_file_info(int, int, int, int);
int strlen(int);
int strncpy(int, int, int);
int thunk_FUN_0c2c067e(int);
int vmsfs_unmount(int);
int vmsio_ismount(int);
int vmsio_isready(int);
int FUN_0c2d0a30(void);
int FUN_0c2d562a(int a4, int a5);
int FUN_0c2f2a44(void);
int FUN_0c193478(int a4);
int FUN_0c178f30(int a4, int a5, int a6, int a7, int a8, int a9);
int FUN_0c193228(int a4, int a5, int a6);
int FUN_0c2e60ba(void);
int FUN_0c18083c(int a4);
int kmyInitAllocator(int a4, int a5, int a6, int a7, int a8);
int FUN_0c2d6e1e(int a4, int a5, int a6, int a7, int a8, int a9, int a10);
int FUN_0c18e24c(int a4, int a5, int a6, int a7);
int FUN_0c2c70c0(int a4, int a5, int a6, int a7);
int kmyUpdatePalette(void);
int buAnalyzeBackupFileImage(int a4, int a5);
int FUN_0c19e0b2(int a4, int a5, int a6, int a7);
int FUN_0c17e110(int a4, int a5, int a6);
int kmyGetDefaultFilterMode(int a4, int a5, int a6, int a7);
int FUN_0c2d6a70(int a4, int a5, int a6, int a7);
int mpdrv_make_deviceinfo(int a4, int a5, int a6);
int FUN_0c2f76c4(void);
int FUN_0c198c42(int a4, int a5, int a6);
int vmsfs_findnext_ex(int a4, int a5, int a6);

/* manual: the callee 0C2E76C8 takes four arguments (value, 10, 2, the local buffer); 2 cases, 181 of 181 instructions */
int FUN_0c2d0a30(void)
{
    int stk[6];
    register int t0;
    register int t11;
    register int t17;
    register int t55;

    t0 = 0x0;
    for (;;) {
        *(unsigned char *)0xC8D25C2 = t0;
        FUN_0c2e732c();
        ((int (*)(int, int, int, int))FUN_0c2e76c8)((*(signed char *)0xC8D25C2), 0xA, 0x2, (((int)stk + 0) + 0x8));
        FUN_0c2e7200((((int)stk + 0) + 0x8));
        FUN_0c2e7200(0xC3003A0);
        *(unsigned int *)(((int)stk + 0)) = (short)((short)(signed char)t0 * (short)0x32);
        *(unsigned char *)0xC8D25C2 = (*(signed char *)(((short)((short)(signed char)t0 * (short)0x32) + 0xC8D1DD8)));
        FUN_0c2e715e((*(signed char *)0xC8D25C2));
        FUN_0c2e7200(0xC3003A4);
        *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 0))) + 0xC8D1DD8);
        t11 = 0x0;
        for (;;) {
            *(unsigned char *)0xC8D25C2 = (*(signed char *)((((signed char)t11 + ((*(int *)(((int)stk + 4))) + 0x1)) + 0x0)));
            FUN_0c2e715e((*(signed char *)0xC8D25C2));
            t11 = (t11 + 0x1);
            if ((int)(signed char)t11 >= (int)0x28) {
                break;
            }
        }
        FUN_0c2e7200(0xC3003A4);
        t17 = *(int *)(((int)stk + 0));
        *(unsigned char *)0xC8D25C2 = (*(signed char *)(((t17 + 0xC8D1DD8) + 0x29)));
        ((int (*)(int, int, int, int))FUN_0c2e76c8)((*(signed char *)0xC8D25C2), 0xA, 0x2, (((int)stk + 0) + 0x8));
        FUN_0c2e7200((((int)stk + 0) + 0x8));
        FUN_0c2e7200(0xC3003A4);
        *(unsigned char *)0xC8D25C2 = (*(signed char *)(((t17 + 0xC8D1DD8) + 0x2B)));
        ((int (*)(int, int, int, int))FUN_0c2e76c8)((*(signed char *)0xC8D25C2), 0xA, 0x2, (((int)stk + 0) + 0x8));
        FUN_0c2e7200((((int)stk + 0) + 0x8));
        FUN_0c2e7200(0xC30039C);
        *(unsigned char *)0xC8D25C2 = (*(signed char *)(((t17 + 0xC8D1DD8) + 0x2C)));
        ((int (*)(int, int, int, int))FUN_0c2e76c8)((*(signed char *)0xC8D25C2), 0xA, 0x2, (((int)stk + 0) + 0x8));
        FUN_0c2e7200((((int)stk + 0) + 0x8));
        FUN_0c2e7200(0xC30039C);
        *(unsigned char *)0xC8D25C2 = (*(signed char *)(((t17 + 0xC8D1DD8) + 0x2D)));
        ((int (*)(int, int, int, int))FUN_0c2e76c8)((*(signed char *)0xC8D25C2), 0xA, 0x2, (((int)stk + 0) + 0x8));
        FUN_0c2e7200((((int)stk + 0) + 0x8));
        FUN_0c2e7200(0xC3003A0);
        *(unsigned char *)0xC8D25C2 = (*(signed char *)(((t17 + 0xC8D1DD8) + 0x2F)));
        ((int (*)(int, int, int, int))FUN_0c2e76c8)((*(signed char *)0xC8D25C2), 0xA, 0x2, (((int)stk + 0) + 0x8));
        FUN_0c2e7200((((int)stk + 0) + 0x8));
        FUN_0c2e7200(0xC30039C);
        *(unsigned char *)0xC8D25C2 = (*(signed char *)(((t17 + 0xC8D1DD8) + 0x30)));
        ((int (*)(int, int, int, int))FUN_0c2e76c8)((*(signed char *)0xC8D25C2), 0xA, 0x2, (((int)stk + 0) + 0x8));
        FUN_0c2e7200((((int)stk + 0) + 0x8));
        FUN_0c2e7200(0xC30039C);
        *(unsigned char *)0xC8D25C2 = (*(signed char *)(((t17 + 0xC8D1DD8) + 0x31)));
        ((int (*)(int, int, int, int))FUN_0c2e76c8)((*(signed char *)0xC8D25C2), 0xA, 0x2, (((int)stk + 0) + 0x8));
        FUN_0c2e7200((((int)stk + 0) + 0x8));
        FUN_0c2e7200(0xC3003A0);
        ((int (*)(int, int, int, int))FUN_0c2e76c8)((*(signed char *)0xC8D25BC), 0xA, 0x2, (((int)stk + 0) + 0x8));
        t55 = FUN_0c2e7200((((int)stk + 0) + 0x8));
        t0 = (t0 + 0x1);
        if ((int)(signed char)t0 < (int)0x14) continue;
        break;
    }
    return t55;
}

int FUN_0c2d562a(int a4, int a5)
{
    int stk[7];
    register int t3;
    register int t6;
    register int t9;
    register int t10;
    register int t12;
    register int t14;
    register int t17;
    register int t18;
    register int t19;
    register int t22;
    register int t26;
    register int t40;
    register int t43;
    register int t46;
    register int t47;
    register int t16;
    register int t35;
    register int t36;
    register int t37;
    register int t38;

    (((struct o7_uchar *)0xC8D25F0)->v) = ((*(signed char *)0xC8D25F7) | 0x10);
    *(volatile signed char *)(((((((struct o0_int *)0xC8D25F0)->v)) + 0x78) + 0x0));
    t3 = ((int (*)(int, int))(FUN_0c1a2184))(a4, a5);
    *(volatile signed char *)(((((((struct o0_int *)0xC8D25F0)->v)) + 0x7C) + 0x0));
    t6 = ((int (*)(void))(FUN_0c1a2184))();
    *(volatile signed char *)(((((((struct o0_int *)0xC8D25F0)->v)) + 0x78) + 0x0));
    t9 = ((int (*)(void))(FUN_0c1a2184))();
    t10 = (((struct o0_int *)0xC8D25F0)->v);
    (((struct o78_uchar *)(t10))->v) = ((*(signed char *)(((t10 + 0x78) + 0x0))) & 0xDF);
    t12 = (((struct o0_int *)0xC8D25F0)->v);
    (((struct o7C_uchar *)(t12))->v) = ((*(signed char *)(((t12 + 0x7C) + 0x0))) & 0xEF);
    t14 = (((struct o0_int *)0xC8D25F0)->v);
    (((struct o78_uchar *)(t14))->v) = ((*(signed char *)(((t14 + 0x78) + 0x0))) & 0xFB);
    t17 = t16;
    t18 = 0x32;
    for (;;) {
        t19 = (((struct o0_int *)0xC8D25F0)->v);
        (((struct o7C_uchar *)(t19))->v) = ((*(signed char *)(((t19 + 0x7C) + 0x0))) & 0xF7);
        FUN_0c2ef0ee(t17, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
        t22 = (((struct o0_int *)0xC8D25F0)->v);
        (((struct o7C_uchar *)(t22))->v) = ((*(signed char *)(((t22 + 0x7C) + 0x0))) & 0xF7);
        t26 = (unsigned short)t18 == 0;
        t18 = (t18 - 1);
        if (t26) {
            break;
        }
        t17 = ((((struct o0_int *)0xC8D25F0)->v));
        if (((unsigned char)((*(signed char *)(((t17 + 0x78) + 0x0))) & 0x1) == 0) && (((t35 = *(signed char *)0xC8D25F6, (t35 & 4) == 0) || (t36 = *(signed char *)(((t17 + 0x78) + 0x0)), (t36 & 8) == 0)) && ((t37 = *(signed char *)0xC8D25F6, (unsigned char)(t37 & 0x1) == 0) || (t38 = *(signed char *)(((t17 + 0x7C) + 0x0)), (t38 & 8) == 0)))) {
            *(volatile signed char *)0xC8D25F6;
            t40 = ((int (*)(int))(FUN_0c1a2184))(t17);
            *(volatile int *)0xC8D25F0;
            *(volatile signed char *)0xC8D25F6;
            t43 = ((int (*)(void))(FUN_0c1a2184))();
            *(volatile int *)0xC8D25F0;
            *(volatile signed char *)0xC8D25F6;
            t46 = ((int (*)(void))(FUN_0c1a2184))();
            t47 = *(signed char *)0xC8D25F7;
            (((struct o7_uchar *)0xC8D25F0)->v) = (t47 & 0xEF);
            return (t47 & 0xEF);
        }
    }
    return (FUN_0c2d65ae(0x5BE));
}

/* manual: 0C187CAC is a sprintf (destination in r4, format and values on the stack); 6 cases, 164 of 178 instructions */
int FUN_0c2f2a44(void)
{
    int stk[12];
    register int t8;
    register int t53;
    register int t9;
    register int t10;
    register int t11;
    register int t12;
    register int t13;
    register int t14;
    register int t15;
    register int t16;
    register int t17;
    register int t18;
    register int t19;

    memset(((int)stk + 0xC), 0x0, 0x3);
    memset(((int)stk + 0x4), 0x0, 0x5);
    strncpy(((int)stk + 0xC), 0xC302CD4, 0x2);
    strncpy(((int)stk + 0x4), 0xC302CD7, 0x4);
    if ((unsigned char)(*(signed char *)((((int)stk + 0xC) + 0x0))) == 32) {
        *(unsigned char *)((((int)stk + 0xC) + 0x0)) = 0x30;
    }
    *(unsigned char *)((((int)stk + 0x4) + 0x0)) = ((*(signed char *)((((int)stk + 0x4) + 0x0))) + 0x1);
    t8 = FUN_0c187d98(0xC302CD0, 0xC302CDC, 0x3);
    t53 = 0x1;
    if (t8 == 0) {
    } else {
        t9 = FUN_0c187d98(0xC302CD0, 0xC302CE0, 0x3);
        t53 = 0x2;
        if (t9 == 0) {
        } else {
            t10 = FUN_0c187d98(0xC302CD0, 0xC302CE4, 0x3);
            t53 = 0x3;
            if (t10 == 0) {
            } else {
                t11 = FUN_0c187d98(0xC302CD0, 0xC302CE8, 0x3);
                t53 = 0x4;
                if (t11 == 0) {
                } else {
                    t12 = FUN_0c187d98(0xC302CD0, 0xC302CEC, 0x3);
                    t53 = 0x5;
                    if (t12 == 0) {
                    } else {
                        t13 = FUN_0c187d98(0xC302CD0, 0xC302CF0, 0x3);
                        t53 = 0x6;
                        if (t13 == 0) {
                        } else {
                            t14 = FUN_0c187d98(0xC302CD0, 0xC302CF4, 0x3);
                            t53 = 0x7;
                            if (t14 == 0) {
                            } else {
                                t15 = FUN_0c187d98(0xC302CD0, 0xC302CF8, 0x3);
                                t53 = 0x8;
                                if (t15 == 0) {
                                } else {
                                    t16 = FUN_0c187d98(0xC302CD0, 0xC302CFC, 0x3);
                                    t53 = 0x9;
                                    if (t16 == 0) {
                                    } else {
                                        t17 = FUN_0c187d98(0xC302CD0, 0xC302D00, 0x3);
                                        t53 = 0xA;
                                        if (t17 == 0) {
                                        } else {
                                            t18 = FUN_0c187d98(0xC302CD0, 0xC302D04, 0x3);
                                            t53 = 0xB;
                                            if (t18 == 0) {
                                            } else {
                                                t19 = FUN_0c187d98(0xC302CD0, 0xC302D08, 0x3);
                                                t53 = 0xC302CD0;
                                                if (t19 == 0) {
                                                    t53 = 0xC;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    *(unsigned int *)(((int)stk + 0)) = ((int)stk + 0x10);
    FUN_0c187cac(((int)stk + 0x10), 0xC302D0C, ((int)stk + 0x4), (unsigned char)t53, ((int)stk + 0xC),
                 (*(signed char *)0xC302D2C), (*(signed char *)0xC302D2D), (*(signed char *)0xC302D2F),
                 (*(signed char *)0xC302D30), (*(signed char *)0xC302D32), (*(signed char *)0xC302D33));
    FUN_0c2e732c();
    FUN_0c2e7200((*(int *)(((int)stk + 0))));
    return (FUN_0c2e732c());
}

/* manual: the string copy is the inline strcpy with the pointer chosen by the first halfword; 13 cases, 142 of 142 instructions */
int FUN_0c193478(int a4)
{
    int stk[10];
    register int t14;
    register int t16;
    register int t18;
    register int t25;
    register int t29;
    register int t50;
    register int t53;
    register int t54;
    register int t58;
    register int t15;
    register int t17;
    register int t31;
    int t48;

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned char *)(((((int)stk + 0) + 0x8) + 0x0)) = 0x0;
    _builtin_strcpy((char *)stk + 0x8, (char *)((*(short *)(*(int *)((int)stk + 4)) == 0) ? 0xC20A73C : 0xC20A744));
    if ((*(short *)(((*(int *)(((int)stk + 4))) + 0x2))) != 0) {
        FUN_0c187d24((((int)stk + 0) + 0x8), (*(int *)(((*(int *)(((int)stk + 4))) + 0xC))));
    }
    t18 = strlen((((int)stk + 0) + 0x8));
    *(unsigned int *)(((int)stk + 0)) = 0xC8B1664;
    t14 = 0xC8B1664;
    t16 = 0x0;
    for (;;) {
        if ((*(signed char *)((t16 + (*(int *)(((*(int *)(((int)stk + 0))) + 0x0)))))) == 0) {
            break;
        }
        t17 = 0x0;
        for (;;) {
            if ((*(int *)((0xC2AE7B4 + (t17 << 2)))) == 0) {
                t31 = t14; break;
            }
            t15 = t17;
            t15 = (t15 << 2);
            t15 = (t15 + 0xC2AE7B4);
            t25 = strlen((*(int *)((t15 + 0x0))));
            t29 = FUN_0c187d98((*(int *)((t15 + 0x0))), ((*(int *)(((*(int *)(((int)stk + 0))) + 0x0))) + t16), t25);
            if (t29 != 0) {
                t17 = (t17 + 0x1);
                continue;
            }
            break;
        }
        t17 = (t17 << 2);
        t14 = t31;
        t15 = t17;
        if ((*(int *)((0xC2AE7B4 + t17))) == 0) {
            t14 = t18;
            t14 = (t14 + (((int)stk + 0) + 0x8));
            t18 = (t18 + 0x1);
            *(unsigned char *)((t14 + 0x0)) = (*(signed char *)((t16 + (*(int *)(((*(int *)(((int)stk + 0))) + 0x0))))));
            t16 = (t16 + 0x1);
        } else {
            t17 = 0xC8B15F8;
            t14 = 0xC187D24;
            t17 = (t17 + t15);
            FUN_0c187d24((t18 + (((int)stk + 0) + 0x8)), (*(int *)((t17 + 0x0))));
            t18 = (t18 + (strlen((*(int *)((t17 + 0x0))))));
            t16 = (t16 + (strlen((*(int *)((0xC2AE7B4 + t15))))));
        }
    }
    t50 = t18;
    if (((int)t18 > 0) && (t48 = *(signed char *)(((((int)stk + 0) + 0x8) + (t18 - 1))), t48 != 13)) {
        *(unsigned char *)(((((int)stk + 0) + 0x8) + t18)) = 0xD;
        t50 = (t18 + 0x1);
    }
    *(unsigned char *)(((((int)stk + 0) + 0x8) + t50)) = 0x0;
    FUN_0c1931c0();
    t53 = strlen((((int)stk + 0) + 0x8));
    t54 = FUN_0c191a84((((int)stk + 0) + 0x8), t53);
    t58 = 0x4;
    if ((short)t54 != 0) {
    } else {
        t58 = (FUN_0c193900((*(short *)(((*(int *)(((int)stk + 4))) + 0x4)))));
    }
    return t58;
}

int FUN_0c178f30(int a4, int a5, int a6, int a7, int a8, int a9)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    *(unsigned int *)((((((a4 << 2) + a4) << 2) + 0xC868220) + 0x0)) = a5;
    *(unsigned int *)((((((a4 << 2) + a4) << 2) + 0xC868220) + 0x4)) = a6;
    *(unsigned int *)((((((a4 << 2) + a4) << 2) + 0xC868220) + 0x8)) = a7;
    *(unsigned int *)((((((a4 << 2) + a4) << 2) + 0xC868220) + 0xC)) = a8;
    *(unsigned int *)((((((a4 << 2) + a4) << 2) + 0xC868220) + 0x10)) = a9;
    t0 = 0x0;
    if ((unsigned int)a4 < (unsigned int)(((((struct o30_int *)0xC83CD90)->v)) - 1)) {
    } else {
        (((struct o0_uint *)0xC83CD90)->v) = (((((struct o0_int *)0xC83CD90)->v)) | 0x40);
        t1 = 0x0;
        t2 = ((((a4 << 2) + a4) << 2) + 0xC868220);
        for (;;) {
            if ((unsigned int)t1 >= (unsigned int)((((struct o30_int *)0xC83CD90)->v))) {
                break;
            }
            t2 = t1;
            t2 = (t2 << 2);
            t2 = (t2 + t1);
            t2 = (t2 << 2);
            t2 = (t2 + 0xC868220);
            FUN_0c178c70(t1, (*(int *)((t2 + 0x0))), (*(int *)((t2 + 0x4))), (*(int *)((t2 + 0x8))), ((*(int *)((t2 + 0xC)))), ((*(int *)((t2 + 0x10)))));
            t1 = (t1 + 0x1);
        }
        t1 = kmSetSystemConfiguration(0xC83CD8C);
        if (t1 != 0) {
            _builtin_trapa(65);
        }
        *(unsigned int *)(((*(int *)0xC8A2E94) + 0x0)) = 0x800000;
        if (((((struct o20_int *)0xC83CFF4)->v)) == 0) {
            nlLoadDummyTexture();
            (((struct o20_uint *)0xC83CFF4)->v) = 0x1;
        }
        nlSysInitStripContextBG(0xC8A2EB0);
        nlSysInitStripContextVtx(0xC8A64E0);
        (((struct o0_uint *)0xC8A6AE0)->v) = 0xC8A64E0;
        (((struct o4_uint *)0xC8A6AE0)->v) = 0x0;
        t2 = (((struct o2_short *)0xC8A6CA8)->v);
        t3 = (((struct o0_short *)0xC8A6CA8)->v);
        if (0x0 != 0) {
            t4 = (short)t2;
            if (((((struct o6_short *)0xC8A6CA8)->v)) == 1) {
                t4 = ((short)t2 + (short)t2);
                if ((int)((short)t2 + (short)t2) > (int)0x1E0) {
                    t4 = 0x1E0;
                }
            }
            nlSetWindowSize(0.0f, 0.0f, (float)t3, (float)t4);
        } else {
            nlSetWindowSize(0.0f, 0.0f, (float)t3, (float)(short)t2);
        }
        setCullingThreshold(0.0199999996f);
        (((struct o0_uint *)0xFF000038)->v) = 0xC;
        (((struct o4_uint *)0xFF000038)->v) = 0xC;
        kmSetWaitVsyncCount(((((struct o0_int *)0xC83CFF4)->v)));
        t0 = t1;
    }
    return t0;
}

int FUN_0c193228(int a4, int a5, int a6)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    int t5;
    int t6;
    register int t7;
    register int t8;
    register int t9;
    register int t10;
    register int t11;

    t1 = FUN_0c19337c(a4);
    t2 = *(signed char *)(((a4 + (short)t1) + 0x0));
    t3 = 0x0;
    if (t2 == 0) {
    } else {
        t4 = *(signed char *)(((a4 + (short)t1) + 0x0));
        if ((unsigned char)t4 != 34) {
            t5 = (unsigned char)t4;
            t4 = a5;
            t6 = (a4 + (short)t1);
            for (;;) {
                t7 = *(signed char *)((t6 + 0x0));
                t6 = (t6 + 0x1);
                if (((unsigned char)t7 != 0) && ((t5 = (unsigned char)t7, t5 != 10) && ((t5 != 32) && ((t5 = (unsigned char)t7, t5 != 44) && (t5 = (unsigned char)t7, t5 != 34))))) {
                    *(unsigned char *)((t4 + 0x0)) = (unsigned char)t7;
                    t4 = (t4 + 0x1);
                    continue;
                }
                break;
            }
            t5 = t4;
            t4 = t6;
        } else {
            t6 = t2;
            t2 = 0x0;
            t7 = 0x0;
            t8 = 0x0;
            t9 = a5;
            t10 = ((a4 + (short)t1) + 0x1);
            for (;;) {
                t1 = *(signed char *)((t10 + 0x0));
                t10 = (t10 + 0x1);
                if ((unsigned char)t1 != 0) {
                    if ((unsigned char)t1 == 10) {
                        *(unsigned char *)((t9 + 0x0)) = 0x0;
                        t10 = (t10 - 1);
                        t10 = (t10 + (short)(FUN_0c19337c(t10)));
                        if ((unsigned char)(*(signed char *)((t10 + 0x0))) == 44) {
                            t10 = (t10 + 0x1);
                        }
                        t6 = a6;
                        *(unsigned int *)((t6 + 0x0)) = t10;
                        return 0x1;
                    }
                    if (t2 != 0) {
                        t11 = t7;
                        t11 = (t11 << 2);
                        t11 = (t11 << 2);
                        t11 = (t11 + (unsigned char)t1);
                        if (((int)(unsigned char)t1 >= (int)0x30) && (t6 = 0x39, (int)(unsigned char)t1 <= (int)t6)) {
                            t2 = (t2 - 0x1);
                            t7 = t11;
                            t7 = (t7 - 48);
                            if (t2 != 0) {
                            } else {
                                *(unsigned char *)((t9 + 0x0)) = (unsigned char)t1;
                                t9 = (t9 + 0x1);
                            }
                        } else {
                            if (((int)(unsigned char)t1 >= (int)0x61) && (t0 = 0x66, (int)(unsigned char)t1 <= (int)t0)) {
                                t2 = (t2 - 0x1);
                                t7 = t11;
                                t7 = (t7 - 38);
                                if (t2 != 0) {
                                } else {
                                    *(unsigned char *)((t9 + 0x0)) = (unsigned char)t1;
                                    t9 = (t9 + 0x1);
                                }
                            } else {
                                t2 = 0x0;
                            }
                        }
                        continue;
                    }
                    if (t8 != 0) {
                        if ((unsigned char)t1 == 114) {
                            *(unsigned char *)((t9 + 0x0)) = 0xD;
                            t9 = (t9 + 0x1);
                        } else {
                            if ((unsigned char)t1 == 110) {
                                *(unsigned char *)((t9 + 0x0)) = 0xA;
                                t9 = (t9 + 0x1);
                            } else {
                                if ((unsigned char)t1 == 92) {
                                    *(unsigned char *)((t9 + 0x0)) = 0x5C;
                                    t9 = (t9 + 0x1);
                                } else {
                                    if ((unsigned char)t1 == 34) {
                                        *(unsigned char *)((t9 + 0x0)) = 0x22;
                                        t9 = (t9 + 0x1);
                                    } else {
                                        if ((unsigned char)t1 == 120) {
                                            t7 = 0x0;
                                            t2 = 0x2;
                                        }
                                    }
                                }
                            }
                        }
                        t8 = 0x0;
                        continue;
                    }
                    if ((unsigned char)t1 == 92) {
                        t8 = 0x1;
                        continue;
                    }
                    if ((unsigned char)t1 == 34) {
                        break;
                    }
                    *(unsigned char *)((t9 + 0x0)) = (unsigned char)t1;
                    t9 = (t9 + 0x1);
                    continue;
                }
                *(unsigned char *)((t9 + 0x0)) = 0x0;
                t10 = (t10 - 1);
                t10 = (t10 + (short)(FUN_0c19337c(t10)));
                if ((unsigned char)(*(signed char *)((t10 + 0x0))) == 44) {
                    t10 = (t10 + 0x1);
                }
                t6 = a6;
                *(unsigned int *)((t6 + 0x0)) = t10;
                return 0x1;
            }
            t5 = t9;
            t4 = (t10 + 0x1);
        }
        *(unsigned char *)((t5 + 0x0)) = 0x0;
        t0 = FUN_0c19337c((t4 - 1));
        t1 = ((t4 - 1) + (short)t0);
        if ((unsigned char)(*(signed char *)((((t4 - 1) + (short)t0) + 0x0))) == 44) {
            t1 = (((t4 - 1) + (short)t0) + 0x1);
        }
        *(unsigned int *)((a6 + 0x0)) = t1;
        t3 = 0x1;
    }
    return t3;
}


int FUN_0c18083c(int a4)
{
    register int t0;
    register int t1;
    register int t3;
    register int t4;
    register int t5;
    register int t6;

    t0 = *(int *)(((*(int *)0xC86CC34) + 0x0));
    t1 = 0xFFFFFFFF;
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 1) {
            if ((unsigned char)t0 != 2) {
                if ((unsigned char)t0 != 3) {
                    if ((unsigned char)t0 != 4) {
                        t1 = (unsigned char)t0;
                        if ((unsigned char)t0 == 5) {
                            t0 = nlsndG2Read(0xA08000B4);
                            t3 = 0x1;
                            if (t0 != 0) {
                            } else {
                                nlsndG2Write(0x0, 0xA08000B0);
                                *(unsigned int *)(((*(int *)0xC86CC34) + 0x0)) = 0x0;
                                t3 = 0x0;
                            }
                            t1 = t3;
                        }
                        t0 = t1;
                    } else {
                        t1 = *(int *)0xC86CC34;
                        t3 = *(int *)((t1 + 0x0));
                        if ((t3 & 0x7F00) == 0) {
                            if ((unsigned int)(*(int *)((t1 + 0xC))) < (unsigned int)((*(int *)((t1 + 0x4))) << 2)) {
                                t4 = ((unsigned int)(*(int *)((t1 + 0xC))) >> 2);
                            } else {
                                t4 = (*(int *)((t1 + 0x4)));
                            }
                            nlsndG2WriteN((*(int *)((t1 + 0x14))), (*(int *)((t1 + 0x18))), t4);
                            t1 = *(int *)0xC86CC34;
                            t5 = *(int *)((t1 + 0xC));
                            *(unsigned int *)((t1 + 0xC)) = (t5 - (t4 << 2));
                            if ((t5 - (t4 << 2)) == 0) {
                                if (((*(int *)(((*(int *)0xC86CC34) + 0x0))) & 0x8000) != 0) {
                                    nlsndG2Write((*(int *)(((*(int *)0xC86CC34) + 0x8))), ((*(int *)(((*(int *)0xC86CC34) + 0x1C))) + 0x8));
                                }
                                nlsndG2Write(0x1, 0xA08000B0);
                                t1 = *(int *)0xC86CC34;
                                *(unsigned int *)((t1 + 0x0)) = ((*(int *)((t1 + 0x0))) + 0x1);
                            } else {
                                t1 = *(int *)0xC86CC34;
                                *(unsigned int *)((t1 + 0x18)) = ((*(int *)((t1 + 0x18))) + (t4 << 2));
                                t1 = *(int *)0xC86CC34;
                                *(unsigned int *)((t1 + 0x14)) = ((*(int *)((t1 + 0x14))) + (t4 << 2));
                            }
                            t1 = 0x1;
                        } else {
                            t4 = 0x0;
                            if ((t3 & 0x7F00) == 0x100) {
                                nlsndG2Write(0x1, 0xA08000B0);
                                t3 = *(int *)0xC86CC34;
                                *(unsigned int *)((t3 + 0x0)) = ((*(int *)((t3 + 0x0))) + 0x1);
                                t4 = 0x1;
                            }
                            t1 = t4;
                        }
                        t0 = t1;
                    }
                    t1 = t0;
                } else {
                    t0 = FUN_0c17ff1e();
                    t3 = 0x1;
                    if (t0 == 0) {
                        t0 = *(int *)0xC86CC34;
                        *(unsigned int *)((t0 + 0x0)) = ((*(int *)((t0 + 0x0))) + 0x1);
                        t0 = *(int *)0xC86CC34;
                        t4 = *(int *)((t0 + 0x0));
                        if ((t4 & 0x7F00) == 0) {
                            if ((unsigned int)(*(int *)((t0 + 0xC))) < (unsigned int)((*(int *)((t0 + 0x4))) << 2)) {
                                t5 = ((unsigned int)(*(int *)((t0 + 0xC))) >> 2);
                            } else {
                                t5 = (*(int *)((t0 + 0x4)));
                            }
                            nlsndG2WriteN((*(int *)((t0 + 0x14))), (*(int *)((t0 + 0x18))), t5);
                            t0 = *(int *)0xC86CC34;
                            t6 = *(int *)((t0 + 0xC));
                            *(unsigned int *)((t0 + 0xC)) = (t6 - (t5 << 2));
                            if ((t6 - (t5 << 2)) == 0) {
                                if (((*(int *)(((*(int *)0xC86CC34) + 0x0))) & 0x8000) != 0) {
                                    nlsndG2Write((*(int *)(((*(int *)0xC86CC34) + 0x8))), ((*(int *)(((*(int *)0xC86CC34) + 0x1C))) + 0x8));
                                }
                                nlsndG2Write(0x1, 0xA08000B0);
                                t0 = *(int *)0xC86CC34;
                                *(unsigned int *)((t0 + 0x0)) = ((*(int *)((t0 + 0x0))) + 0x1);
                            } else {
                                t0 = *(int *)0xC86CC34;
                                *(unsigned int *)((t0 + 0x18)) = ((*(int *)((t0 + 0x18))) + (t5 << 2));
                                t0 = *(int *)0xC86CC34;
                                *(unsigned int *)((t0 + 0x14)) = ((*(int *)((t0 + 0x14))) + (t5 << 2));
                            }
                            t0 = 0x1;
                        } else {
                            t5 = 0x0;
                            if ((t4 & 0x7F00) == 0x100) {
                                nlsndG2Write(0x1, 0xA08000B0);
                                t4 = *(int *)0xC86CC34;
                                *(unsigned int *)((t4 + 0x0)) = ((*(int *)((t4 + 0x0))) + 0x1);
                                t5 = 0x1;
                            }
                            t0 = t5;
                        }
                        t3 = t0;
                    }
                    t1 = t3;
                }
                t0 = t1;
            } else {
                t1 = nlsndG2Read(0xA08000B4);
                if (t1 != 0) {
                    if ((*(int *)(((*(int *)0xC86CC34) + 0x10))) != 0) {
                        t1 = *(int *)0xC86CC34;
                        FUN_0c17feb6((*(int *)(((*(int *)0xC86CC34) + 0x18))), ((*(int *)((t1 + 0x18))) + (*(int *)((t1 + 0x8)))), (*(int *)(((*(int *)0xC86CC34) + 0x10))));
                    }
                    t1 = *(int *)0xC86CC34;
                    *(unsigned int *)((t1 + 0x0)) = ((*(int *)((t1 + 0x0))) + 0x1);
                }
                t0 = 0x1;
            }
            t1 = t0;
        } else {
            t0 = nlsnd_PL_WaitRequest();
            if (t0 == 0) {
                t0 = *(int *)0xC86CC34;
                *(unsigned int *)((t0 + 0x0)) = ((*(int *)((t0 + 0x0))) + 0x1);
            }
            t1 = 0x1;
        }
    }
    return t1;
}

int kmyInitAllocator(int a4, int a5, int a6, int a7, int a8)
{
    int t0;
    register int t2;
    register int t4;
    register int t13;
    register int t37;
    register int t42;
    register int t63;
    register int t33;

    (((struct o8_uint *)0xC30411C)->v) = a5;
    (((struct o20_uint *)0xC30411C)->v) = a6;
    (((struct oC_uint *)0xC30411C)->v) = a7;
    (((struct o8_uint *)0xC30415C)->v) = a8;
    t0 = (((struct oC_int *)0xC30415C)->v);
    t2 = (0xFFFFFFE0 & (t0 + 0x20));
    if ((0x1F & t0) == 0) {
        t2 = t0;
    }
    (((struct oC_uint *)0xC30415C)->v) = t2;
    (((struct o4_uint *)0xC30411C)->v) = a4;
    t4 = (((struct oC_int *)0xC30415C)->v);
    if (((((struct o0_int *)0xC30411C)->v)) == 1) {
        if (a4 == 0x1000000) {
            (((struct o10_uint *)0xC30415C)->v) = ((-t4) + 0x1000000);
            (((struct o10_uint *)0xC30411C)->v) = 0x0;
            (((struct o14_uint *)0xC30411C)->v) = ((((struct o10_int *)0xC30415C)->v));
            (((struct o18_uint *)0xC30411C)->v) = 0x1000000;
        } else {
            (((struct o10_uint *)0xC30415C)->v) = ((-t4) + 0x800000);
            (((struct o10_uint *)0xC30411C)->v) = 0x0;
            (((struct o14_uint *)0xC30411C)->v) = ((((struct o10_int *)0xC30415C)->v));
            (((struct o18_uint *)0xC30411C)->v) = 0x800000;
        }
        (((struct o1C_uint *)0xC30411C)->v) = 0x0;
        kmiWriteRegister(0xE4, 0x0);
        Qreset();
        t13 = kmytex_FBAllocEntry();
        t63 = 0x3;
        if (t13 != 0) {
            *(unsigned int *)((t13 + 0xC)) = ((((struct o10_int *)0xC30411C)->v));
            *(unsigned int *)((t13 + 0x10)) = ((((struct o14_int *)0xC30411C)->v));
            *(unsigned int *)((t13 + 0x8)) = ((((struct o2C_int *)0xC30411C)->v));
            (((struct o2C_uint *)0xC30411C)->v) = t13;
            *(unsigned int *)((t13 + 0x4)) = ((((struct o30_int *)0xC30411C)->v));
            (((struct o30_uint *)0xC30411C)->v) = t13;
            if (((((struct oC_int *)0xC30415C)->v)) != 0) {
                *(unsigned int *)((((((struct o14_int *)0xC30415C)->v)) + 0x0)) = ((((struct o10_int *)0xC30415C)->v));
            }
            t63 = 0x0;
        }
    } else {
        if (a4 == 0x1000000) {
            (((struct o10_uint *)0xC30415C)->v) = ((-t4) + 0x800000);
            (((struct o10_uint *)0xC30411C)->v) = 0x0;
            (((struct o14_uint *)0xC30411C)->v) = ((((struct o10_int *)0xC30415C)->v));
            t33 = 0x800000;
        } else {
            (((struct o10_uint *)0xC30415C)->v) = ((-t4) + 0x400000);
            (((struct o10_uint *)0xC30411C)->v) = 0x0;
            (((struct o14_uint *)0xC30411C)->v) = ((((struct o10_int *)0xC30415C)->v));
            t33 = 0x400000;
        }
        (((struct o18_uint *)0xC30411C)->v) = t33;
        (((struct o1C_uint *)0xC30411C)->v) = t33;
        kmiWriteRegister(0xE4, 0x0);
        Qreset();
        t37 = kmytex_FBAllocEntry();
        t63 = 0x3;
        if (t37 != 0) {
            *(unsigned int *)((t37 + 0xC)) = ((((struct o10_int *)0xC30411C)->v));
            *(unsigned int *)((t37 + 0x10)) = ((((struct o14_int *)0xC30411C)->v));
            *(unsigned int *)((t37 + 0x8)) = ((((struct o2C_int *)0xC30411C)->v));
            (((struct o2C_uint *)0xC30411C)->v) = t37;
            *(unsigned int *)((t37 + 0x4)) = ((((struct o30_int *)0xC30411C)->v));
            (((struct o30_uint *)0xC30411C)->v) = t37;
            t42 = kmytex_FBAllocEntry();
            t63 = 0x3;
            if (t42 == 0) {
            } else {
                *(unsigned int *)((t42 + 0xC)) = ((((struct o18_int *)0xC30411C)->v));
                *(unsigned int *)((t42 + 0x10)) = ((((struct o1C_int *)0xC30411C)->v));
                *(unsigned int *)((t42 + 0x8)) = ((((struct o3C_int *)0xC30411C)->v));
                (((struct o3C_uint *)0xC30411C)->v) = t42;
                *(unsigned int *)((t42 + 0x4)) = ((((struct o0_int *)0xC30415C)->v));
                (((struct o0_uint *)0xC30415C)->v) = t42;
                if (((((struct oC_int *)0xC30415C)->v)) != 0) {
                    *(unsigned int *)((((((struct o14_int *)0xC30415C)->v)) + 0x0)) = ((((struct o10_int *)0xC30415C)->v));
                }
                t63 = 0x0;
            }
        }
    }
    return t63;
}

int FUN_0c2d6e1e(int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
    int stk[10];
    register int t6;
    register int t19;
    register int t21;
    register int t23;
    register int t26;

    *(unsigned char *)(((int)stk + 8)) = a7;
    if ((*(signed char *)0xC8D6831) == 0) {
        if ((unsigned char)(*(signed char *)0xC8D6832) != (unsigned char)a4) {
            (((struct oA_uchar *)0xC8D6828)->v) = a4;
        }
        if ((unsigned char)(*(signed char *)0xC8D6834) != (unsigned char)a6) {
            *(int *)((int)stk + 4) = ((signed char)(a10 >> 0));
            *(int *)((int)stk + 0) = ((signed char)(a9 >> 0));
            t6 = ((int (*)(int, int, int, int, int, int))(FUN_0c2d6f70))(a5, a6, (*(signed char *)(((int)stk + 8))), ((signed char)(a8 >> 0)), ((signed char)(a9 >> 0)), ((signed char)(a10 >> 0)));
        }
        (((struct oA_uchar *)0xC8D6828)->v) = a4;
        (((struct oC_uchar *)0xC8D6828)->v) = a6;
        (((struct oD_uchar *)0xC8D6828)->v) = (*(signed char *)(((int)stk + 8)));
        (((struct oE_uchar *)0xC8D6828)->v) = ((signed char)(a8 >> 0));
        (((struct oF_uchar *)0xC8D6828)->v) = ((signed char)(a9 >> 0));
        (((struct o10_uchar *)0xC8D6828)->v) = ((signed char)(a10 >> 0));
        (((struct o0_uchar *)0xC8D6828)->v) = 0xFE;
        return 0xC8D6828;
    }
    *(unsigned char *)0xC8D2726 = ((*(signed char *)0xC8D2726) | 0x5);
    FUN_0c2d7806(0x10);
    (((struct oA_uchar *)0xC8D6828)->v) = a4;
    t19 = 0x9;
    if ((0x4 & (unsigned char)a5) != 0) {
        t19 = 0xA;
    }
    t21 = t19;
    if ((0x18 & (unsigned char)a5) == 16) {
        t21 = (t19 + 0x1);
    }
    t23 = t21;
    if (((unsigned char)a5 & 0x20) != 0) {
        t23 = (t21 + 0x1);
    }
    (((struct o1C_ushort *)0xC8D6828)->v) = t23;
    *(int *)((int)stk + 4) = ((signed char)(a10 >> 0));
    *(int *)((int)stk + 0) = ((signed char)(a9 >> 0));
    t26 = ((int (*)(int, int, int, int))(FUN_0c2d6f70))(a5, a6, (*(signed char *)(((int)stk + 8))), ((signed char)(a8 >> 0)));
    if (((unsigned char)(*(signed char *)0xC8D2726) & 2) != 0) {
        *(unsigned char *)0xC8D2726 = ((*(signed char *)0xC8D2726) & 0xFD);
        FUN_0c2d7806(0x10);
    }
    *(unsigned char *)0xC8D2726 = ((*(signed char *)0xC8D2726) & 0xFB);
    *(unsigned char *)0xC8D2726 = ((*(signed char *)0xC8D2726) & 0xFE);
    return FUN_0c2d7806(0x10);
}

int FUN_0c18e24c(int a4, int a5, int a6, int a7)
{
    int stk[7];

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    v0_1 = a4;
    v0_2 = a6;
    v0_0 = a7;
    *(unsigned int *)(((int)stk + 16)) = v0_1;
    *(unsigned short *)(((int)stk + 24)) = v0_2;
    v0_1 = FUN_0c18ea14(v0_0);
    *(unsigned int *)(((int)stk + 20)) = v0_1;
    v0_0 = (v0_0);
    if ((v0_1 != 0)) goto L_C18E274;
    L_C18E388:;
    v0_0 = (0xFFFFFFFF);
    L_C18E38A:;
    return v0_0;
    L_C18E274:;
    v0_1 = *(short *)(((int)stk + 24));
    v0_3 = *(int *)(((int)stk + 16));
    *(unsigned int *)(((int)stk + 16)) = (v0_3 + (unsigned short)v0_1);
    v0_2 = (unsigned short)(FUN_0c18dad6((*(short *)(((v0_3 + (unsigned short)v0_1) + 0x2))))) == 0x800;
    v0_1 = ((v0_3 + (unsigned short)v0_1));
    v0_3 = (0xC18DAD6);
    if (v0_2) goto L_C18E294;
    goto L_C18E388;
    L_C18E294:;
    if (((unsigned char)(*(signed char *)((v0_1 + 0x5))) != 4)) goto L_C18E388;
    v0_2 = *(signed char *)((v0_1 + 0x4));
    FUN_0c187a88(((int)stk + 8), ((v0_1 + 0x8) + (unsigned char)v0_2), 0x4);
    FUN_0c187a88((((int)stk + 8) + 0x4), ((((v0_1 + 0x8) + (unsigned char)v0_2) + (unsigned char)(*(signed char *)((v0_1 + 0x5)))) + (unsigned char)(*(signed char *)((v0_1 + 0x4)))), 0x4);
    v0_2 = (0xC187A88);
    v0_2 = ((v0_1 + 0x8));
    if (((*(int *)(((int)stk + 12))) != (*(int *)(((*(int *)(((int)stk + 20))) + 0x8))))) goto L_C18E388;
    v0_3 = (unsigned short)(FUN_0c18dad6((*(short *)((v0_1 + 0x6))))) != 1;
    if (v0_3) goto L_C18E34C;
    v0_3 = FUN_0c18e168((*(int *)(((int)stk + 8))), 0x3);
    v0_4 = (v0_3);
    if ((v0_3 == 0)) goto L_C18E316;
    if ((((unsigned char)(*(signed char *)((v0_4 + 0x0))) & 1) == 0)) goto L_C18E32E;
    FUN_0c187a88((v0_4 + 0x18), v0_2, (unsigned char)(*(signed char *)((v0_4 + 0x1))));
    *(unsigned char *)((v0_4 + 0x0)) = ((*(signed char *)((v0_4 + 0x0))) & 0xFE);
    *(unsigned char *)((v0_4 + 0x0)) = ((*(signed char *)((v0_4 + 0x0))) | 0x2);
    v0_1 = (FUN_0c18e688(v0_4)) == 0;
    if (v0_1) goto L_C18E32E;
    goto L_C18E388;
    L_C18E32E:;
    v0_0 = (FUN_0c18e714(v0_2, (*(int *)(((int)stk + 8))), v0_0)) == 0;
    if (v0_0) goto L_C18E384;
    goto L_C18E388;
    L_C18E384:;
    v0_0 = (0x0);
    goto L_C18E38A;
    L_C18E316:;
    v0_3 = v0_0;
    *(int *)((int)stk + 4) = v0_3;
    *(int *)((int)stk + 0) = 0x0;
    v0_1 = (FUN_0c18e39c((*(int *)(((int)stk + 8))), (*(short *)((v0_1 + 0x0))), (*(signed char *)((v0_1 + 0x4))), v0_2, 0x0, v0_3)) == 0;
    if (v0_1) goto L_C18E388;
    goto L_C18E32E;
    L_C18E34C:;
    v0_0 = (unsigned short)(FUN_0c18dad6((*(short *)((v0_1 + 0x6))))) != 2;
    if (v0_0) goto L_C18E388;
    v0_0 = FUN_0c18e168((*(int *)(((int)stk + 8))), 0x1);
    v0_1 = (v0_0);
    if ((v0_0 == 0)) goto L_C18E384;
    FUN_0c187a88((v0_1 + 0x18), v0_2, (unsigned char)(*(signed char *)((v0_1 + 0x1))));
    *(unsigned char *)((v0_1 + 0x0)) = ((*(signed char *)((v0_1 + 0x0))) & 0xFE);
    *(unsigned char *)((v0_1 + 0x0)) = ((*(signed char *)((v0_1 + 0x0))) | 0x2);
    v0_0 = (FUN_0c18e688(v0_1)) != 0;
    if (v0_0) goto L_C18E388;
    goto L_C18E384;
}

int FUN_0c2c70c0(int a4, int a5, int a6, int a7)
{
    int stk[9];

    register int R1;
    register int R2;
    register int R3;
    int R9;
    int R10;
    int R12;
    register int R13;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    v0_4 = a4;
    v0_1 = a5;
    v0_2 = a6;
    v0_3 = a7;
    R10 = (v0_1);
    R12 = (v0_2);
    v0_0 = (v0_3);
    R9 = (v0_4);
    if ((v0_2 != 0)) goto L_C2C70E4;
    v0_4 = (0xEEEE);
    L_C2C71FA:;
    return v0_4;
    L_C2C70E4:;
    v0_4 = _builtin_get_imask();
    *(unsigned int *)(((int)stk + 0)) = v0_4;
    v0_4 = (v0_4);
    if (!(((0x1F & R9) == 0))) goto L_C2C71E4;
    if (((0x1F & R10) == 0)) goto L_C2C7102;
    goto L_C2C71E4;
    L_C2C71E4:;
    kmyMemCopy((0xA4000000 + R9), R10, R12);
    if ((v0_0 == 0)) goto L_C2C71F8;
    v0_0 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))(v0_0))(0x0, v0_1, v0_2, v0_3, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
    L_C2C71F8:;
    v0_4 = (0x0);
    goto L_C2C71FA;
    L_C2C7102:;
    if ((v0_4 == 0)) goto L_C2C710A;
    goto L_C2C71E4;
    L_C2C710A:;
    v0_4 = (FUN_0c2c9c80()) != 0;
    if (v0_4) goto L_C2C7118;
    goto L_C2C71E4;
    L_C2C7118:;
    v0_4 = ((0xFFFFFFE0 & R12));
    if (((0xFFFFFFE0 & R12) == 0)) goto L_C2C71A4;
    v0_5 = (kmyGetInterruptLevel()) != 0;
    v0_6 = (0xC2C8380);
    if (!(v0_5)) goto L_C2C712C;
    v0_5 = kmyGetDMAHANDLE(0x1);
    R13 = (v0_5);
    if ((v0_5 != 0)) goto L_C2C7180;
    kmyMemCopy((0xA4000000 + R9), R10, R12);
    if ((v0_0 == 0)) goto L_C2C71F8;
    v0_0 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))(v0_0))(0x0, v0_1, v0_2, v0_3, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
    goto L_C2C71F8;
    L_C2C712C:;
    v0_1 = kmyGetDMAHANDLE(0x1);
    R13 = (v0_1);
    if ((v0_1 == 0)) goto L_C2C712C;
    L_C2C7180:;
    kmySetTextureDMA(R13, R9, R10, v0_4);
    if ((v0_0 == 0)) goto L_C2C7198;
    kmySetDMACallback(R13, v0_0);
    L_C2C7198:;
    v0_1 = kmyRequestDMA(R13);
    *(unsigned int *)0xC8D0CB4 = v0_1;
    R13 = (v0_1);
    L_C2C71A4:;
    v0_2 = ((0x1F & R12));
    if (((0x1F & R12) == 0)) goto L_C2C71BC;
    kmyMemCopy(((R9 + v0_4) + 0xA4000000), (R10 + v0_4), v0_2);
    L_C2C71BC:;
    if ((v0_0 != 0)) goto L_C2C71F8;
    v0_0 = (kmyGetInterruptLevel()) != 0;
    if (v0_0) goto L_C2C71F8;
    v0_0 = (FUN_0c2c9c80()) != 0;
    if (v0_0) goto L_C2C71F8;
    R12 = (0xC2C9CC0);
    v0_0 = (0x101);
    L_C2C71D8:;
    v0_1 = (kmyQueryFinishDMA(R13)) != v0_0;
    if (v0_1) goto L_C2C71D8;
    goto L_C2C71F8;
}

int kmyUpdatePalette(void)
{
    register int t10;
    register int t11;
    register int t12;
    register int t32;
    register int t19;
    register int t20;
    int t21;
    register int t23;
    register int t39;
    int t40;
    register int t41;
    register int t42;
    register int t43;
    register int t26;
    register int t27;
    register int t28;
    register int t46;
    register int t47;
    register int t48;

    if ((((((struct o0_int *)0xC8D1D98)->v)) & 0x1) != 0) {
        kmiWriteRegister(0x108, ((((struct oC_int *)0xC8D1D98)->v)));
    }
    if ((((((struct o0_int *)0xC8D1D98)->v)) & 2) != 0) {
        t10 = 0x0;
        t11 = 0x0;
        t12 = 0x1000;
        for (;;) {
            kmiWriteRegister(t12, (*(int *)((t11 + 0xC8D0D98))));
            t10 = (t10 + 0x1);
            t12 = (t12 + 0x4);
            t11 = (t11 + 0x4);
            if ((int)t10 >= (int)0x400) {
                break;
            }
        }
    } else {
        if ((((((struct o0_int *)0xC8D1D98)->v)) & 4) != 0) {
            t32 = 0xC8D1D98;
            if (((((struct o4_int *)0xC8D1D98)->v)) != 0) {
                t19 = 0xC8D1D98;
                t20 = 0xC8D1D9C;
                t21 = 0xC8D1D98;
                t23 = 0x0;
                for (;;) {
                    if ((int)t23 >= (int)0x20) {
                        break;
                    }
                    t19 = 0xC8D1D9C;
                    t20 = 0x1;
                    t20 = ((int)t20 << (int)t23);
                    t21 = (*(int *)((t19 + 0x0)));
                    if ((t20 & t21) != 0) {
                        t42 = t23;
                        t42 = (t42 << 2);
                        t42 = (t42 << 2);
                        t21 = 0xC8D0D98;
                        kmyMemCopy(((t42 << 2) + 0xA05F9000), ((t42 << 2) + t21), 0x40);
                    } else {
                        t26 = t19;
                        t27 = t20;
                        t28 = t21;
                    }
                    t19 = t26;
                    t23 = (t23 + 0x1);
                    t20 = t27;
                    t21 = t28;
                }
                t32 = t19;
            }
            t40 = (((struct o8_int *)0xC8D1D98)->v);
            if (t40 != 0) {
                t39 = t32;
                t41 = 0xC8D1DA0;
                t43 = 0x0;
                for (;;) {
                    if ((int)t43 >= (int)0x20) {
                        break;
                    }
                    t39 = 0xC8D1DA0;
                    t41 = 0x1;
                    t41 = ((int)t41 << (int)t43);
                    t40 = (*(int *)((t39 + 0x0)));
                    if ((t41 & t40) != 0) {
                        t42 = t43;
                        t41 = 0x200;
                        t42 = (t42 << 2);
                        t40 = 0xC8D0D98;
                        t42 = (t42 << 2);
                        t42 = (t42 + t41);
                        kmyMemCopy(((t42 << 2) + 0xA05F9000), ((t42 << 2) + t40), 0x40);
                    } else {
                        t46 = t39;
                        t47 = t40;
                        t48 = t41;
                    }
                    t39 = t46;
                    t43 = (t43 + 0x1);
                    t40 = t47;
                    t41 = t48;
                }
            }
            (((struct o4_uint *)0xC8D1D98)->v) = 0x0;
            (((struct o8_uint *)0xC8D1D98)->v) = 0x0;
        }
    }
    (((struct o0_uint *)0xC8D1D98)->v) = 0x0;
    return 0x0;
}

int buAnalyzeBackupFileImage(int a4, int a5)
{
    register int t0;
    register int t1;
    int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;

    t3 = 0xFFFFFF21;
    if ((((((struct o40_short *)(a5))->v)) != 0) && ((t0 = (((struct o40_short *)(a5))->v), (int)(unsigned short)t0 <= (int)0x3) && ((t1 = (((struct o44_short *)(a5))->v), (int)(unsigned short)t1 <= (int)0x3) && (t2 = (((struct o48_int *)(a5))->v), (unsigned int)t2 <= (unsigned int)0xE1000)))) {
        t0 = *(int *)((((unsigned short)((((struct o40_short *)(a5))->v)) << 2) + 0xC303704));
        t1 = *(int *)((((unsigned short)((((struct o44_short *)(a5))->v)) << 2) + 0xC303714));
        t2 = (((struct o48_int *)(a5))->v);
        t4 = 0xFFFFFF21;
        if ((unsigned int)(((t0 + t1) + t2) + 0x80) > (unsigned int)0xE1000) {
        } else {
            t5 = 0x80;
            t6 = 0x10;
            t7 = a4;
            t8 = a5;
            for (;;) {
                if (t6 == 0) {
                    break;
                }
                t5 = (*(signed char *)((t8 + 0x0)));
                t8 = (t8 + 0x1);
                t6 = (t6 - 1);
                *(unsigned char *)((t7 + 0x0)) = t5;
                t7 = (t7 + 0x1);
            }
            *(unsigned char *)((t7 + 0x0)) = 0x0;
            t6 = t5;
            t5 = 0x20;
            t7 = (a4 + 0x12);
            t8 = (a5 + 0x10);
            for (;;) {
                if (t5 == 0) {
                    break;
                }
                t9 = *(signed char *)((t8 + 0x0));
                t8 = (t8 + 0x1);
                t6 = t9;
                t5 = (t5 - 1);
                *(unsigned char *)((t7 + 0x0)) = t6;
                t7 = (t7 + 0x1);
            }
            *(unsigned char *)((t7 + 0x0)) = 0x0;
            t5 = t6;
            t6 = 0x10;
            t7 = (a4 + 0x34);
            t8 = (a5 + 0x30);
            for (;;) {
                if (t6 == 0) {
                    break;
                }
                t9 = *(signed char *)((t8 + 0x0));
                t8 = (t8 + 0x1);
                t5 = t9;
                t6 = (t6 - 1);
                *(unsigned char *)((t7 + 0x0)) = t5;
                t7 = (t7 + 0x1);
            }
            *(unsigned char *)((t7 + 0x0)) = 0x0;
            (((struct o4E_ushort *)(a4))->v) = ((((struct o42_short *)(a5))->v));
            (((struct o4C_ushort *)(a4))->v) = ((((struct o40_short *)(a5))->v));
            (((struct o44_uint *)(a4))->v) = (a5 + 0x60);
            (((struct o48_uint *)(a4))->v) = (a5 + 0x80);
            (((struct o54_ushort *)(a4))->v) = ((((struct o44_short *)(a5))->v));
            if (((((struct o44_short *)(a5))->v)) == 0) {
                (((struct o50_uint *)(a4))->v) = 0x0;
                t5 = ((a5 + 0x80) + t0);
            } else {
                (((struct o50_uint *)(a4))->v) = ((a5 + 0x80) + t0);
                t5 = (((a5 + 0x80) + t0) + t1);
            }
            (((struct o5C_uint *)(a4))->v) = ((((struct o48_int *)(a5))->v));
            if (((((struct o48_int *)(a5))->v)) == 0) {
                (((struct o58_uint *)(a4))->v) = 0x0;
            } else {
                (((struct o58_uint *)(a4))->v) = t5;
            }
            t6 = (((struct o46_short *)(a5))->v);
            (((struct o46_ushort *)(a5))->v) = 0x0;
            t8 = buCalcCRC(a5, (((t0 + t1) + t2) + 0x80), t5, t7);
            (((struct o46_ushort *)(a5))->v) = t6;
            t0 = 0x0;
            if ((unsigned short)t8 != (unsigned short)t6) {
                t0 = 0xFFFFFF20;
            }
            t4 = t0;
        }
        t3 = t4;
    }
    return t3;
}

int FUN_0c19e0b2(int a4, int a5, int a6, int a7)
{
    int stk[5];

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
    register int v0_9;
    v0_4 = a4;
    v0_7 = a5;
    v0_3 = a6;
    v0_0 = a7;
    *(unsigned int *)(((int)stk + 16)) = v0_3;
    *(unsigned int *)(((int)stk + 8)) = v0_7;
    v0_5 = *(short *)((v0_7 + 0x2));
    v0_6 = *(int *)((v0_4 + 0x30));
    *(unsigned int *)(((int)stk + 4)) = 0x0;
    (((struct o50_ushort *)(v0_6))->v) = 0x0;
    *(unsigned int *)(((int)stk + 4)) = (FUN_0c1a027c(0x1));
    v0_3 = (0x0);
    v0_0 = (0x2);
    v0_1 = (v0_6);
    v0_2 = (v0_4);
    v0_5 = (v0_5);
    if (((*(signed char *)((v0_6 + 0x4D))) == 0)) goto L_C19E18C;
    (((struct o58_ushort *)(v0_1))->v) = v0_3;
    (((struct o50_ushort *)(v0_1))->v) = (((((struct o50_short *)(v0_1))->v)) | 0x8);
    L_C19E18C:;
    v0_6 = ((short)v0_0);
    if (((int)v0_5 <= 0)) goto L_C19E1A4;
    v0_4 = (short)(FUN_0c19d250((((int)stk + 4) + 0x8), (((int)stk + 4) + 0xC))) != -1;
    if (!(v0_4)) goto L_C19E1A4;
    v0_4 = *(signed char *)(((int)stk + 13));
    v0_7 = (int)(v0_5 - (unsigned char)v0_4) < 0;
    v0_5 = ((v0_5 - (unsigned char)v0_4));
    if (v0_7) goto L_C19E126;
    *(int *)((int)stk + 0) = 0x1;
    v0_8 = FUN_0c19ddc8((((int)stk + 0) + 0x10), v0_1, (v0_1 + 0x34), (((int)stk + 0) + 0xC));
    v0_9 = (0x1);
    v0_4 = ((short)v0_8);
    v0_7 = (v0_8);
    if (((short)v0_8 != -1)) goto L_C19E144;
    goto L_C19E126;
    L_C19E1A4:;
    v0_3 = (((~((((struct o50_short *)(v0_1))->v))) & ((((struct o38_short *)(v0_1))->v))));
    if ((v0_6 != 3)) goto L_C19E1D0;
    if (((int)(unsigned char)(*(signed char *)((v0_2 + 0x6))) <= 0)) goto L_C19E1CE;
    FUN_0c19dd3a(((int)stk + 4), (v0_1 + 0x50), v0_3);
    *(unsigned char *)((v0_2 + 0x6)) = ((*(signed char *)((v0_2 + 0x6))) - 1);
    L_C19E1D0:;
    FUN_0c19d2b4(v0_2, v0_0, (*(signed char *)(((*(int *)(((int)stk + 8))) + 0x1))), (*(int *)(((int)stk + 4))));
    v0_0 = ((((((short)v0_0 == 2)) ? 1 : 0) ^ 0x1));
    L_C19E1E8:;
    return v0_0;
    L_C19E1CE:;
    v0_0 = (0x4);
    goto L_C19E1D0;
    L_C19E126:;
    v0_0 = (0xFFFFFFFF);
    goto L_C19E1E8;
    L_C19E144:;
    if (((int)v0_4 < (int)v0_6)) goto L_C19E18C;
    if (((int)v0_4 <= (int)v0_6)) goto L_C19E150;
    *(unsigned int *)(((int)stk + 4)) = v0_3;
    v0_0 = (v0_7);
    L_C19E150:;
    if ((v0_4 == 4)) goto L_C19E172;
    if (((int)(unsigned char)(*(signed char *)(((int)stk + 12))) > (int)0x8)) goto L_C19E172;
    (((struct o50_ushort *)(v0_1))->v) = (((((struct o50_short *)(v0_1))->v)) | ((int)v0_9 << (int)(unsigned char)(*(signed char *)(((int)stk + 12)))));
    L_C19E172:;
    *(int *)((int)stk + 0) = (((int)stk + 4) + 0xC);
    FUN_0c19dc10((((int)stk + 0) + 0x4), (v0_1 + 0x50), (*(signed char *)(((int)stk + 12))), (*(signed char *)(((int)stk + 13))), (((int)stk + 4) + 0xC));
    goto L_C19E18C;
}

int FUN_0c17e110(int a4, int a5, int a6)
{
    int stk[5];

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
    register int v0_8;
    register int v0_9;
    v0_6 = a4;
    v0_0 = a5;
    v0_1 = a6;
    *(unsigned int *)(((int)stk + 4)) = v0_0;
    *(unsigned int *)(((int)stk + 8)) = v0_1;
    *(unsigned int *)(((int)stk + 16)) = 0x0;
    if (((int)(*(int *)((v0_6 + 0x0))) < 0)) goto L_C17E138;
    if (((*(int *)((v0_6 + 0x18))) != 0)) goto L_C17E160;
    L_C17E138:;
    v0_0 = (0x0);
    L_C17E242:;
    return v0_0;
    L_C17E160:;
    *(unsigned int *)(((int)stk + 12)) = (((((*(int *)(((int)stk + 4))) == 0)) ? 1 : 0) ^ 0x1);
    v0_1 = ((v0_6 + 0x18));
    v0_2 = (0xC8A64D8);
    v0_3 = (0xC83CD40);
    v0_4 = (0xFFFFFFFF);
    L_C17E174:;
    v0_7 = *(int *)((v0_1 + 0x20));
    v0_5 = v0_1;
    v0_1 = ((v0_1 + 0x50));
    v0_5 = v0_5;
    v0_6 = (v0_7);
    if (((int)v0_7 < 0)) goto L_C17E208;
    if (((*(int *)(((int)stk + 8))) == 0)) goto L_C17E196;
    if (((*(int *)(((int)stk + 12))) == 0)) goto L_C17E196;
    v0_6 = ((*(int *)(((((v0_6 << 2) << 2) + (*(int *)(((int)stk + 4)))) + 0xC))));
    L_C17E196:;
    v0_8 = *(int *)0xC8A6C9C;
    v0_9 = (unsigned int)(*(int *)((((*(int *)((v0_3 + 0x0))) + (((v0_6 + v0_8) << 2) << 1)) + 0x0))) <= (unsigned int)0x0;
    v0_7 = ((((v0_6 + v0_8) << 2) << 1));
    v0_6 = ((v0_6 + v0_8));
    if (v0_9) goto L_C17E208;
    v0_6 = *(int *)((v0_3 + 0x0));
    *(unsigned int *)(((v0_6 + v0_7) + 0x0)) = ((*(int *)(((v0_6 + v0_7) + 0x0))) - 1);
    if (((*(int *)((((*(int *)((v0_3 + 0x0))) + v0_7) + 0x0))) != 0)) goto L_C17E208;
    *(unsigned int *)(((int)stk + 0)) = (*(int *)((((*(int *)((v0_3 + 0x0))) + v0_7) + 0x4)));
    v0_6 = *(int *)(((int)stk + 0));
    v0_8 = ((v0_6 * 0x3C));
    if (((*(int *)((((*(int *)((v0_2 + 0x0))) + (v0_6 * 0x3C)) + 0x28))) != 0)) goto L_C17E1EE;
    v0_9 = kmFreeTexture(((*(int *)((v0_2 + 0x0))) + v0_8));
    v0_6 = (v0_9);
    if ((v0_9 == 0)) goto L_C17E1EE;
    *(unsigned int *)(((int)stk + 16)) = 0x1;
    L_C17E1EE:;
    *(unsigned int *)((((*(int *)((v0_2 + 0x0))) + v0_8) + 0x2C)) = 0x0;
    *(unsigned int *)((((*(int *)((v0_2 + 0x0))) + v0_8) + 0x38)) = v0_4;
    nl_texture_slot_free((*(int *)(((int)stk + 0))), v0_0);
    *(unsigned int *)((((*(int *)((v0_3 + 0x0))) + v0_7) + 0x4)) = v0_4;
    L_C17E208:;
    if (((*(int *)0xC2A6078) != 0)) goto L_C17E234;
    v0_6 = ((0x7 & ((unsigned int)(*(int *)((v0_5 + 0xC))) >> 27)));
    if (((*(int *)0xC868B7C) == 0)) goto L_C17E234;
    if ((v0_6 == 5)) goto L_C17E22E;
    if ((v0_6 != 6)) goto L_C17E234;
    L_C17E22E:;
    res_texture_slot_tick_release((*(int *)((v0_5 + 0x3C))));
    L_C17E234:;
    v0_5 = (((struct o4C_int *)(v0_5))->v);
    v0_6 = (*(int *)(((v0_1 + v0_5) + 0x0))) != 0;
    v0_1 = ((v0_1 + v0_5));
    if (v0_6) goto L_C17E174;
    v0_0 = ((*(int *)(((int)stk + 16))));
    goto L_C17E242;
}

int kmyGetDefaultFilterMode(int a4, int a5, int a6, int a7)
{
    int stk[11];
    register int t1;
    register int t3;
    register int t6;
    register int t8;
    register int t19;

    *(unsigned int *)(((int)stk + 0)) = a5;
    t1 = (((struct o4_int *)0xC3000B4)->v);
    *(unsigned int *)(((((int)stk + 0) + 0x18) + 0x0)) = ((((struct o0_int *)0xC3000B4)->v));
    *(unsigned int *)(((((int)stk + 0) + 0x18) + 0x4)) = t1;
    t3 = (((struct oC_int *)0xC3000B4)->v);
    *(unsigned int *)(((((int)stk + 0) + 0x18) + 0x8)) = ((((struct o8_int *)0xC3000B4)->v));
    *(unsigned int *)(((((int)stk + 0) + 0x18) + 0xC)) = t3;
    *(unsigned int *)(((((int)stk + 0) + 0x18) + 0x10)) = ((((struct o10_int *)0xC3000B4)->v));
    t6 = (((struct o18_int *)0xC3000B4)->v);
    *(unsigned int *)(((((int)stk + 0) + 0x4) + 0x0)) = ((((struct o14_int *)0xC3000B4)->v));
    *(unsigned int *)(((((int)stk + 0) + 0x4) + 0x4)) = t6;
    t8 = (((struct o20_int *)0xC3000B4)->v);
    *(unsigned int *)(((((int)stk + 0) + 0x4) + 0x8)) = ((((struct o1C_int *)0xC3000B4)->v));
    *(unsigned int *)(((((int)stk + 0) + 0x4) + 0xC)) = t8;
    *(unsigned int *)(((((int)stk + 0) + 0x4) + 0x10)) = ((((struct o24_int *)0xC3000B4)->v));
    *(unsigned int *)((a6 + 0x0)) = (*(int *)(((int)stk + 0)));
    t19 = a7;
    if ((0x42 & a4) == 66) {
        t19 = (kmyiGetPALExtRatio(a4));
    }
    if ((*(int *)(((int)stk + 0))) != 0) {
        if ((0x42 & a4) == 66) {
            if (((a4 & 0x1) != 1) && ((0x2C & a4) == 32)) {
                *(unsigned int *)((a7 + 0x0)) = (*(int *)(((((int)stk + 0) + 0x4) + (t19 << 2))));
            } else {
                *(unsigned int *)((a7 + 0x0)) = (*(int *)(((((int)stk + 0) + 0x18) + (t19 << 2))));
            }
        } else {
            if ((0x20 & a4) != 0) {
                if (((a4 & 0x1) != 1) && ((0x2C & a4) == 32)) {
                    *(unsigned int *)((a7 + 0x0)) = 0x2;
                } else {
                    *(unsigned int *)((a7 + 0x0)) = 0x1;
                }
            } else {
                *(unsigned int *)((a7 + 0x0)) = 0x4;
            }
        }
    } else {
        if ((a4 & 0x1) != 0) {
            *(unsigned int *)((a7 + 0x0)) = 0x0;
        } else {
            if ((0x42 & a4) == 66) {
                if (((a4 & 0x1) != 1) && ((0x2C & a4) == 32)) {
                    *(unsigned int *)((a7 + 0x0)) = (*(int *)(((((int)stk + 0) + 0x4) + (t19 << 2))));
                } else {
                    *(unsigned int *)((a7 + 0x0)) = (*(int *)(((((int)stk + 0) + 0x18) + (t19 << 2))));
                }
            } else {
                if (((a4 & 0x1) != 1) && ((0x2C & a4) == 32)) {
                    *(unsigned int *)((a7 + 0x0)) = 0x2;
                } else {
                    *(unsigned int *)((a7 + 0x0)) = 0x1;
                }
            }
        }
    }
    return 0x0;
}

int FUN_0c2d6a70(int a4, int a5, int a6, int a7)
{
    int stk[2];
    register int t2;
    register int t6;
    register int t11;
    register int t12;
    register int t13;
    register int t20;
    register int t25;
    register int t53;
    int t8;
    register int t30;

    if ((unsigned char)(*(signed char *)0xC8D6831) == 13) {
        t2 = *(signed char *)0xC8D683A;
        if ((unsigned char)t2 != 0) {
            *(unsigned short *)((a5 + 0x0)) = (unsigned char)t2;
            *(unsigned int *)((a4 + 0x0)) = 0xC8D3069;
            t53 = 0x1;
        } else {
            *(unsigned short *)((a5 + 0x0)) = 0x0;
            t53 = 0x0;
        }
    } else {
        t6 = *(signed char *)0xC8D7087;
        t11 = (((struct o84_short *)(((short)((short)(unsigned char)t6 * (short)0x8C) + 0xC8D2728)))->v);
        if ((t11 != 0) && (t8 = *(short *)((((short)((short)(unsigned char)t6 * (short)0x8C) + 0xC8D2728) + 0x0)), ((unsigned short)t8 & 2) == 0)) {
            t12 = 0xC8D2728;
            t13 = 0x0;
            for (;;) {
                if ((unsigned char)t13 != 4) {
                    t11 = (unsigned char)t13;
                    t12 = 0x8C;
                    t11 = (t11 << 1);
                    t11 = (*(short *)((t11 + ((short)((short)(unsigned char)(*(signed char *)0xC8D7087) * (short)t12) + 0xC8D27AC))));
                    if (t11 == 0) {
                        break;
                    }
                    t12 = 0xC8D26B0;
                    t12 = (t12 + 0x78);
                    t20 = ((short)((short)(unsigned char)(*(signed char *)0xC8D7087) * (short)0x8C) + t12);
                    t12 = 0x84;
                    t12 = (t12 + t20);
                    FUN_0c2ec1b0((*(short *)(((((unsigned char)t13 << 1) + t12) + 0x0))), a5, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4));
                    t12 = 0xC8D26B0;
                    t12 = (t12 + 0x78);
                    t11 = (unsigned char)t13;
                    t11 = (t11 << 1);
                    t13 = (t13 + 0x1);
                    t25 = ((short)((short)(unsigned char)(*(signed char *)0xC8D7087) * (short)0x8C) + t12);
                    t12 = 0x84;
                    t12 = (t12 + t25);
                    t11 = (t11 + t12);
                    *(unsigned short *)((t11 + 0x0)) = 0x0;
                    continue;
                }
                break;
            }
            *(unsigned short *)((a5 + 0x0)) = 0x0;
            t53 = 0x0;
        } else {
            if ((*(signed char *)0xC8D7086) == 0) {
                *(unsigned short *)((a5 + 0x0)) = 0x0;
                t53 = 0x1;
                if ((((unsigned char)(*(signed char *)0xC8D2724) & 128) != 0) || (t30 = *(signed char *)0xC8D2726, ((unsigned char)t30 & 2) != 0)) {
                    t53 = 0x1;
                    if ((*(short *)((a5 + 0x0))) == 0) {
                        t53 = 0x0;
                    }
                }
            } else {
                *(unsigned int *)((a4 + 0x0)) = (((short)((short)(unsigned char)t6 * (short)0x8C) + 0xC8D2728) + 0x4);
                *(unsigned short *)((a5 + 0x0)) = (*(short *)((((short)((short)(unsigned char)(*(signed char *)0xC8D7087) * (short)0x8C) + 0xC8D2728) + 0x2)));
                t53 = 0x1;
                if ((*(short *)((a5 + 0x0))) == 0) {
                    t53 = 0x0;
                }
            }
        }
    }
    return t53;
}

int mpdrv_make_deviceinfo(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    *(unsigned int *)((a4 + 0x0)) = ((((((unsigned char)(*(signed char *)(((a6 + 0x4) + 0x1))) << 16) & 0xFF0000) | (((unsigned char)(*(signed char *)(((a6 + 0x4) + 0x2))) << 8) & 0xFF00)) | ((((unsigned char)(*(signed char *)(((a6 + 0x4) + 0x0))) << 16) << 8) & 0xFF000000)) | (unsigned char)(*(signed char *)(((a6 + 0x4) + 0x3))));
    t0 = 0xFF000000;
    t1 = ((a6 + 0x4) + 0x4);
    t2 = (a4 + 0x4);
    for (;;) {
        if ((unsigned int)t2 >= (unsigned int)(a4 + 0x8)) {
            break;
        }
        t0 = (*(signed char *)((t1 + 0x0)));
        t1 = (t1 + 0x1);
        *(unsigned char *)((t2 + 0x0)) = t0;
        t2 = (t2 + 0x1);
    }
    t2 = t0;
    t0 = t1;
    t1 = (a4 + 0x8);
    for (;;) {
        if ((unsigned int)t1 >= (unsigned int)(a4 + 0xC)) {
            break;
        }
        t2 = (*(signed char *)((t0 + 0x0)));
        t0 = (t0 + 0x1);
        *(unsigned char *)((t1 + 0x0)) = t2;
        t1 = (t1 + 0x1);
    }
    t1 = t2;
    t2 = t0;
    t0 = (a4 + 0xC);
    for (;;) {
        if ((unsigned int)t0 >= (unsigned int)(a4 + 0x10)) {
            break;
        }
        t1 = (*(signed char *)((t2 + 0x0)));
        t2 = (t2 + 0x1);
        *(unsigned char *)((t0 + 0x0)) = t1;
        t0 = (t0 + 0x1);
    }
    (((struct o11_uchar *)(a4))->v) = (*(signed char *)((t2 + 0x0)));
    if ((*(signed char *)((a4 + 0x10))) != 0) {
        (((struct o12_uchar *)(a4))->v) = ((*(signed char *)(((t2 + 0x1) + 0x0))) & 0x3);
        (((struct o13_uchar *)(a4))->v) = (((unsigned int)(unsigned char)(*(signed char *)(((t2 + 0x1) + 0x0))) >> 2) & 0x3);
    } else {
        (((struct o12_uchar *)(a4))->v) = (*(signed char *)((0xC30408C + ((unsigned char)(*(signed char *)(((t2 + 0x1) + 0x0))) & 0xF))));
        (((struct o13_uchar *)(a4))->v) = 0x0;
    }
    if (((((struct o10C4_int *)((*(int *)0xC8D4D84)))->v)) == 1) {
        t0 = 0xC8D4D84;
        t1 = (t2 + 0x1);
        t3 = (a4 + 0x14);
        for (;;) {
            if ((unsigned int)t3 >= (unsigned int)(a4 + 0x33)) {
                break;
            }
            t0 = (*(signed char *)((t1 + 0x0)));
            t1 = (t1 + 0x1);
            *(unsigned char *)((t3 + 0x0)) = t0;
            t3 = (t3 + 0x1);
        }
        t3 = t0;
        t0 = t1;
    } else {
        t1 = 0xC8D4D84;
        t4 = ((t2 + 0x1) + 0x1);
        t2 = (a4 + 0x14);
        for (;;) {
            if ((unsigned int)t2 >= (unsigned int)(a4 + 0x32)) {
                break;
            }
            t1 = (*(signed char *)((t4 + 0x0)));
            t4 = (t4 + 0x1);
            *(unsigned char *)((t2 + 0x0)) = t1;
            t2 = (t2 + 0x1);
        }
        (((struct o32_uchar *)(a4))->v) = 0x0;
        t3 = t1;
        t0 = t4;
    }
    (((struct o33_uchar *)(a4))->v) = 0x0;
    t1 = t3;
    t2 = t0;
    t0 = (a4 + 0x34);
    for (;;) {
        if ((unsigned int)t0 >= (unsigned int)(a4 + 0x70)) {
            break;
        }
        t1 = (*(signed char *)((t2 + 0x0)));
        t2 = (t2 + 0x1);
        *(unsigned char *)((t0 + 0x0)) = t1;
        t0 = (t0 + 0x1);
    }
    (((struct o70_uchar *)(a4))->v) = 0x0;
    (((struct o74_ushort *)(a4))->v) = (((unsigned char)(*(signed char *)((t2 + 0x1))) << 8) | (unsigned char)(*(signed char *)((t2 + 0x0))));
    (((struct o76_ushort *)(a4))->v) = (((unsigned char)(*(signed char *)((t2 + 0x3))) << 8) | (unsigned char)(*(signed char *)((t2 + 0x2))));
    return 0x0;
}

int FUN_0c2f76c4(void)
{
    int stk[8];
    register int t38;
    register int t1;
    int t4;
    register int t5;
    register int t6;
    register int t40;

    (((struct o0_ushort *)0xC8E0AEC)->v) = ((((struct oE_short *)0xC8DF920)->v));
    *(unsigned int *)(((int)stk + 4)) = 0xC8D678F;
    *(unsigned int *)(((int)stk + 0)) = 0xC8E0038;
    for (;;) {
        if ((((unsigned char)(*(signed char *)(((*(int *)(((int)stk + 4))) + 0x0))) & 0x1) != 0) && (t4 = *(int *)(((int)stk + 0)), t5 = (((struct o0_int *)0xC8DF920)->v), t6 = *(int *)((t4 + 0x0)), t6 == t5)) {
            break;
        }
        t1 = ((((struct oE_short *)0xC8DF920)->v));
        if (t1 == 0) {
            break;
        }
        if ((*(signed char *)0xC8E0B04) != 0) {
            (((struct o18_uchar *)0xC8E0AEC)->v) = 0x0;
            t1 = (FUN_0c2f3f1c());
        }
        if ((unsigned int)(*(short *)0xC8E09CC) > (unsigned int)((((struct o6_short *)0xC8E0AEC)->v))) {
            t1 = (FUN_0c2d7302((*(short *)0xC8E09CC)));
            *(unsigned short *)0xC8E09CC = 0x0;
            t1 = 0xC8DFFF4;
            if ((int)((unsigned short)((((struct o0_short *)0xC8E0AEC)->v)) - (unsigned short)((((struct oE_short *)0xC8DF920)->v))) <= (int)(unsigned short)(*(short *)((t1 + 0x0)))) {
                t1 = (FUN_0c2d72b8(0xC8E09D0));
                t1 = (unsigned short)t1;
                if ((int)t1 >= (int)0x80) {
                    if ((*(signed char *)0xC8E09D4) != 0) {
                        t1 = (FUN_0c2f7808(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8)));
                    } else {
                        t1 = (FUN_0c2f7988());
                    }
                    continue;
                }
                return t1;
            }
            return t1;
        }
        if ((*(signed char *)0xC8E09D4) != 0) {
            t1 = (FUN_0c2f7808(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8)));
        } else {
            t1 = (FUN_0c2f7988());
        }
    }
    t38 = *(short *)0xC8E09CC;
    if ((unsigned short)t38 != 0) {
        t40 = FUN_0c2d7302(t38);
        *(unsigned short *)0xC8E09CC = 0x0;
    } else {
        t40 = t1;
    }
    return t40;
}

int FUN_0c198c42(int a4, int a5, int a6)
{
    int stk[3];

    register int R1;
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
    v0_0 = a4;
    v0_1 = a5;
    v0_2 = a6;
    v0_4 = (0x0);
    v0_3 = (0x400);
    if (((int)v0_1 >= (int)0x400)) goto L_C198C5C;
    v0_1 = (v0_3);
    L_C198C5C:;
    *(unsigned int *)(((int)stk + 0)) = v0_4;
    *(unsigned int *)(((int)stk + 4)) = v0_4;
    v0_4 = (v0_4);
    v0_5 = (0x8);
    L_C198D5A:;
    if (((unsigned int)(*(int *)(((int)stk + 0))) < (unsigned int)(unsigned char)(*(signed char *)0xC8A73D8))) goto L_C198C68;
    if ((v0_2 == 1)) goto L_C198D70;
    L_C198D70:;
    v0_0 = (0xFFFFFFFF);
    L_C198D72:;
    return v0_0;
    L_C198C68:;
    v0_6 = *(int *)(((int)stk + 4));
    v0_7 = *(int *)0xC8A73D4;
    v0_3 = ((v0_6 + v0_7));
    if (((*(int *)(((v0_6 + v0_7) + 0x4))) == 0)) goto L_C198D4A;
    if (((int)v0_1 > (int)(*(int *)((v0_3 + 0x8))))) goto L_C198D4A;
    v0_6 = ((v0_3 + 0xC));
    v0_7 = ((v0_3 + 0xC));
    v0_8 = (0x0);
    v0_9 = (0x0);
    L_C198D44:;
    v0_6 = ((v0_6 + 0x6));
    if (!(((int)v0_8 < (int)v0_5))) goto L_C198D4A;
    v0_10 = (((v0_8 << 1) + (v0_8 << 2)));
    if (((*(short *)((((v0_3 + 0xC) + ((v0_8 << 1) + (v0_8 << 2))) + 0x0))) == 0)) goto L_C198D3E;
    *(unsigned int *)(((int)stk + 8)) = ((v0_3 + 0xC) + v0_10);
    if (((*(short *)((((v0_3 + 0xC) + v0_10) + 0x0))) != -1)) goto L_C198D3E;
    if (((unsigned int)(unsigned short)(*(short *)(((*(int *)(((int)stk + 8))) + 0x4))) < (unsigned int)v0_1)) goto L_C198D3E;
    *(unsigned int *)((v0_0 + 0x0)) = ((v0_8 << 16) + v0_4);
    *(unsigned char *)((v0_0 + 0x4)) = 0x2;
    *(unsigned short *)((((v0_3 + 0xC) + v0_10) + 0x0)) = v0_2;
    if (((int)(v0_8 + 0x1) >= (int)v0_5)) goto L_C198D2A;
    if ((((unsigned short)(*(short *)((((v0_3 + 0xC) + v0_10) + 0x4))) - v0_1) == 0)) goto L_C198D2A;
    if (((*(short *)((v0_6 + 0x0))) != 0)) goto L_C198D2A;
    *(unsigned short *)((((v0_3 + 0xC) + v0_9) + 0x8)) = ((*(short *)((((v0_3 + 0xC) + v0_9) + 0x2))) + v0_1);
    *(unsigned short *)((((v0_3 + 0xC) + v0_9) + 0xA)) = ((*(short *)((((v0_3 + 0xC) + v0_9) + 0x4))) - v0_1);
    *(unsigned short *)((((v0_3 + 0xC) + v0_9) + 0x6)) = 0xFFFFFFFF;
    *(unsigned short *)(((v0_9 + (v0_3 + 0xC)) + 0x4)) = v0_1;
    v0_9 = ((v0_9 + (v0_3 + 0xC)));
    goto L_C198D2A;
    L_C198D4A:;
    *(unsigned int *)(((int)stk + 0)) = ((*(int *)(((int)stk + 0))) + 0x1);
    *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x3C);
    v0_4 = ((v0_4 + 0x1000000));
    goto L_C198D5A;
    L_C198D2A:;
    *(unsigned int *)((v0_3 + 0x4)) = ((*(int *)((v0_3 + 0x4))) - 1);
    *(unsigned int *)((v0_3 + 0x8)) = ((*(int *)((v0_3 + 0x8))) - (unsigned short)(*(short *)((v0_7 + 0x4))));
    v0_0 = (0x0);
    goto L_C198D72;
    L_C198D3E:;
    v0_7 = ((v0_7 + 0x6));
    v0_8 = ((v0_8 + 0x1));
    v0_9 = ((v0_9 + 0x6));
    goto L_C198D44;
}

