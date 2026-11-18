/* Straight-line functions with calls and guards (batch gen_i): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_short { short v; };
struct o0_uint { unsigned int v; };
struct o0_ushort { unsigned short v; };
struct o10_int { char p[0x10]; int v; };
struct o10_short { char p[0x10]; short v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o10_ushort { char p[0x10]; unsigned short v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_int { char p[0x18]; int v; };
struct o18_uchar { char p[0x18]; unsigned char v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1A4_int { char p[0x1A4]; int v; };
struct o1A8_int { char p[0x1A8]; int v; };
struct o1AC_int { char p[0x1AC]; int v; };
struct o1B0_int { char p[0x1B0]; int v; };
struct o1C_int { char p[0x1C]; int v; };
struct o20_int { char p[0x20]; int v; };
struct o20_uchar { char p[0x20]; unsigned char v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o24_int { char p[0x24]; int v; };
struct o24_short { char p[0x24]; short v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o24_ushort { char p[0x24]; unsigned short v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o2E_short { char p[0x2E]; short v; };
struct o2E_uchar { char p[0x2E]; unsigned char v; };
struct o2E_ushort { char p[0x2E]; unsigned short v; };
struct o30_short { char p[0x30]; short v; };
struct o30_uchar { char p[0x30]; unsigned char v; };
struct o30_ushort { char p[0x30]; unsigned short v; };
struct o32_short { char p[0x32]; short v; };
struct o34_short { char p[0x34]; short v; };
struct o34_ushort { char p[0x34]; unsigned short v; };
struct o36_short { char p[0x36]; short v; };
struct o36_ushort { char p[0x36]; unsigned short v; };
struct o38_uint { char p[0x38]; unsigned int v; };
struct o38_ushort { char p[0x38]; unsigned short v; };
struct o3A_short { char p[0x3A]; short v; };
struct o3A_ushort { char p[0x3A]; unsigned short v; };
struct o3C_short { char p[0x3C]; short v; };
struct o3C_uint { char p[0x3C]; unsigned int v; };
struct o3C_ushort { char p[0x3C]; unsigned short v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_int { char p[0x40]; int v; };
struct o40_uint { char p[0x40]; unsigned int v; };
struct o4C_int { char p[0x4C]; int v; };
struct o4E_uchar { char p[0x4E]; unsigned char v; };
struct o4F_uchar { char p[0x4F]; unsigned char v; };
struct o50_short { char p[0x50]; short v; };
struct o50_ushort { char p[0x50]; unsigned short v; };
struct o54_int { char p[0x54]; int v; };
struct o5C_int { char p[0x5C]; int v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o828_uint { char p[0x828]; unsigned int v; };
struct o82C_int { char p[0x82C]; int v; };
struct o938_int { char p[0x938]; int v; };
struct o93C_int { char p[0x93C]; int v; };
struct oC_int { char p[0xC]; int v; };
struct oC_short { char p[0xC]; short v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oC_ushort { char p[0xC]; unsigned short v; };
int FUN_0c101148(int, int);
int FUN_0c185560(int);
int FUN_0c18558a(int);
int FUN_0c185600(void);
int FUN_0c185d00(int);
int FUN_0c185d50(int);
int FUN_0c187a88(int, int, int);
int FUN_0c191e30(void);
int FUN_0c1920b0(int, int);
int FUN_0c193cd2(int, int, int);
int FUN_0c193da4(void);
int FUN_0c193dae(void);
int FUN_0c1941e0(int, int, int);
int FUN_0c19424e(int, int, int);
int FUN_0c19c916(int);
int FUN_0c19c926(int);
int FUN_0c1a02a6(int);
int FUN_0c1a02cc(int, int, int);
int FUN_0c2bd8b4(int, int, int);
int FUN_0c2c1016(int);
int FUN_0c2cb558(int, int, int);
int FUN_0c2cc400(int);
int FUN_0c2ecdec(int, int, int);
int FUN_0c2ece04(int, int);
int FUN_0c2ece14(int, int);
int FUN_0c2eef70(void);
int FUN_0c2ef050(void);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int check_cache(int);
int check_caps(int);
int gdFsCheckMedia(int);
int gdFsGetDirEnt(int, int, int, int);
int gdFsGetDirInfoG(int, int);
int gdFsGetLE4(int);
int gdFsLockDir(int);
int gdFsReadWG(int, int, int);
int gdFsReopenHn(int, int, int, int);
int gdFsWaitCompleteReq(int, int, int, int);
int kmBlankScreen(int);
int kmiGetITPCurrent(int);
int kmiReadRegister(int);
int kmiSetupRender(int, int);
int kmiStartupDMA(void);
int kmiWriteRegister(int, int);
int kmyGenerateRegionArray(int, int, int, int, int, int, int, int, int, int, int, int);
int kmyIsDisplayOddField(void);
int kmyMemCopy(int, int, int);
int kmyResetRenderer(void);
int kmySetDitherMode(int, int);
int kmySetFlickerFilterMode(int, int);
int kmySetPixelClippingX(int, int, int);
int kmySetPixelClippingY(int, int, int);
int kmySetRegionArrayCallback(int, int);
int kmySetVirticalFilterMode(int, int);
int kmyStartRender(int, int);
int kmyStartRenderTexture(int, int, int);
int kmyUpdateFogParameter(void);
int kmyUpdatePalette(void);
int kmyiGetPALExtRatio(int);
int kmyiWaitScanline0(void);
int memset(int, int, int);
int set_fat(int, int);
int set_vmstime(int, int);
int syChainAddHandler(int, int, int, int);
int vmsio_ismount(int);
int write_dir_all(int);
int write_fat(int);
int kmyInitializePAL(int a4, int a5, int a6);
int vmsfs_format(int a4, int a5, int a6, int a7, int a8);
int FUN_0c2ece2c(int a4, int a5);
int FUN_0c2af1e0(int a4, int a5, int a6, int a7);
int FUN_0c19ddc8(int a4, int a5, int a6, int a7, int a8);
int FUN_0c2fb0b8(int a4, int a5);
int FUN_0c2cd580(int a4);
int FUN_0c2cb900(int a4);
int FUN_0c1923d0(int a4);
int FUN_0c194a80(int a4, int a5, int a6);
int kmiCallbackEndOf(int a4, int a5, int a6, int a7);

int kmyInitializePAL(int a4, int a5, int a6)
{
    int stk[68];
    register int t2;
    register int t4;
    register int t9;
    register int t44;
    register int t46;
    register int t49;
    register int t51;
    register int t52;
    register int t71;
    register int t79;
    register int t70;

    (((struct o0_uint *)0xC8D05CC)->v) = a4;
    FUN_0c2cb558(a4, a5, a6);
    if ((0x42 & a4) == 66) {
        t2 = (((struct o4_int *)0xC3000DC)->v);
        *(unsigned int *)((((int)stk + 0) + 0x0)) = ((((struct o0_int *)0xC3000DC)->v));
        *(unsigned int *)((((int)stk + 0) + 0x4)) = t2;
        t4 = (((struct oC_int *)0xC3000DC)->v);
        *(unsigned int *)((((int)stk + 0) + 0x8)) = ((((struct o8_int *)0xC3000DC)->v));
        *(unsigned int *)((((int)stk + 0) + 0xC)) = t4;
        *(unsigned int *)((((int)stk + 0) + 0x10)) = ((((struct o10_int *)0xC3000DC)->v));
        (((struct oC_uint *)0xC8D0680)->v) = (kmyiGetPALExtRatio(a4));
        (((struct o0_uint *)0xC8D0640)->v) = (*(int *)(((((((struct oC_int *)0xC8D0680)->v)) << 2) + ((int)stk + 0))));
        if ((0x20 & a4) == 0) {
            t9 = (((struct o0_int *)0xC8D0640)->v);
            (((struct o0_uint *)0xC8D0640)->v) = (((int)((unsigned int)((int)((unsigned int)t9 + (unsigned int)0x0)) + ((((int)0x0 > (int)t9)) ? 1u : 0u))) >> 1);
        }
    }
    *(unsigned int *)(((int)stk + 28)) = 0x35F;
    *(unsigned int *)(((int)stk + 20)) = 0x8D;
    *(unsigned int *)(((int)stk + 24)) = 0x34B;
    *(unsigned int *)(((int)stk + 44)) = 0x3F;
    if (((a4 & 0x1) != 1) && (((0x2C & a4) != 0) && (0x1 != 0))) {
        *(unsigned int *)(((int)stk + 40)) = 0x270;
    } else {
        *(unsigned int *)(((int)stk + 40)) = 0x138;
    }
    if ((0x42 & a4) == 66) {
        if (((a4 & 0x1) != 1) && ((0x2C & a4) != 0)) {
            *(unsigned int *)(((int)stk + 32)) = 0x2C;
            *(unsigned int *)(((int)stk + 36)) = 0x26C;
        } else {
            *(unsigned int *)(((int)stk + 32)) = 0x16;
            *(unsigned int *)(((int)stk + 36)) = 0x134;
        }
        if ((0x20 & a4) != 0) {
            *(unsigned int *)(((int)stk + 136)) = 0x136;
        } else {
            *(unsigned int *)(((int)stk + 136)) = 0x134;
        }
    } else {
        if (((a4 & 0x1) != 1) && ((0x2C & a4) != 0)) {
            *(unsigned int *)(((int)stk + 32)) = 0x2C;
            *(unsigned int *)(((int)stk + 36)) = 0x26C;
        } else {
            *(unsigned int *)(((int)stk + 32)) = 0x16;
            *(unsigned int *)(((int)stk + 36)) = 0x134;
        }
        if ((0x20 & a4) != 0) {
            *(unsigned int *)(((int)stk + 136)) = 0x136;
        } else {
            *(unsigned int *)(((int)stk + 136)) = 0x134;
        }
    }
    *(unsigned int *)(((int)stk + 140)) = 0x15;
    if (((a4 & 0x1) != 1) && ((0x2C & a4) != 0)) {
        *(unsigned int *)(((int)stk + 52)) = 0x16A;
        *(unsigned int *)(((int)stk + 56)) = 0x1F;
        *(unsigned int *)(((int)stk + 48)) = 0x5;
        *(unsigned int *)(((int)stk + 68)) = 0x1;
    } else {
        *(unsigned int *)(((int)stk + 52)) = 0x31F;
        *(unsigned int *)(((int)stk + 56)) = 0xF;
        *(unsigned int *)(((int)stk + 48)) = 0x3;
        *(unsigned int *)(((int)stk + 68)) = 0x0;
    }
    *(unsigned int *)(((int)stk + 72)) = 0x0;
    *(unsigned int *)(((int)stk + 76)) = 0x0;
    *(unsigned int *)(((int)stk + 80)) = 0x0;
    *(unsigned int *)(((int)stk + 84)) = 0x0;
    if ((a4 & 0x1) == 1) {
        if (0x0 != 0) {
            *(unsigned int *)(((int)stk + 88)) = 0x0;
        } else {
            *(unsigned int *)(((int)stk + 88)) = 0x2;
        }
    } else {
        if (((0x2C & a4) == 0) && (0x0 == 0)) {
            *(unsigned int *)(((int)stk + 88)) = 0x2;
        } else {
            *(unsigned int *)(((int)stk + 88)) = 0x0;
        }
    }
    *(unsigned int *)(((int)stk + 132)) = 0x16;
    if ((0x10 & a4) != 0) {
        *(unsigned int *)(((int)stk + 128)) = 0x0;
    } else {
        *(unsigned int *)(((int)stk + 128)) = 0x1;
    }
    *(unsigned int *)(((int)stk + 60)) = 0x0;
    *(unsigned int *)(((int)stk + 64)) = 0x1;
    *(unsigned int *)(((int)stk + 92)) = 0x1;
    *(unsigned int *)(((int)stk + 96)) = 0x0;
    *(unsigned int *)(((int)stk + 100)) = 0x0;
    *(unsigned int *)(((int)stk + 104)) = 0x0;
    *(unsigned int *)(((int)stk + 108)) = 0x0;
    *(unsigned int *)(((int)stk + 112)) = 0x0;
    *(unsigned int *)(((int)stk + 124)) = 0x0;
    *(unsigned int *)(((int)stk + 116)) = 0x0;
    *(unsigned int *)(((int)stk + 120)) = 0xF0;
    *(unsigned int *)(((int)stk + 268)) = 0xAE;
    if ((0x42 & a4) == 66) {
        t44 = (((struct o18_int *)0xC3000DC)->v);
        *(unsigned int *)((((int)stk + 0) + 0x0)) = ((((struct o14_int *)0xC3000DC)->v));
        *(unsigned int *)((((int)stk + 0) + 0x4)) = t44;
        t46 = (((struct o20_int *)0xC3000DC)->v);
        *(unsigned int *)((((int)stk + 0) + 0x8)) = ((((struct o1C_int *)0xC3000DC)->v));
        *(unsigned int *)((((int)stk + 0) + 0xC)) = t46;
        *(unsigned int *)((((int)stk + 0) + 0x10)) = ((((struct o24_int *)0xC3000DC)->v));
        t49 = *(int *)((((int)stk + 0) + (((((struct oC_int *)0xC8D0680)->v)) << 2)));
        *(unsigned int *)(((int)stk + 264)) = t49;
        t51 = t49;
        if (((a4 & 0x1) != 1) && ((a4 & 0x2C) != 0)) {
            t51 = (t49 - 1);
        }
        *(unsigned int *)(((int)stk + 260)) = t51;
        if ((0x20 & a4) != 0) {
            t52 = (((struct o0_int *)0xC8D0640)->v);
            (((struct o0_uint *)0xC8D0680)->v) = (((int)((unsigned int)((int)((unsigned int)t52 + (unsigned int)0x0)) + ((((int)0x0 > (int)t52)) ? 1u : 0u))) >> 1);
        } else {
            (((struct o0_uint *)0xC8D0680)->v) = ((((struct o0_int *)0xC8D0640)->v));
        }
        t70 = 0x1;
    } else {
        if (((a4 & 0x1) != 1) && ((a4 & 0x2C) != 0)) {
            *(unsigned int *)(((int)stk + 260)) = 0x2D;
        } else {
            *(unsigned int *)(((int)stk + 260)) = 0x2E;
        }
        *(unsigned int *)(((int)stk + 264)) = 0x2E;
        (((struct o0_uint *)0xC8D0680)->v) = 0xF0;
        t70 = 0x2E;
    }
    t71 = *(int *)(((int)stk + 32));
    (((struct o38_uint *)0xC8D0640)->v) = ((((int)((unsigned int)((int)((unsigned int)t71 + (unsigned int)0x0)) + ((((int)0x0 > (int)t71)) ? 1u : 0u))) >> 1) + ((((struct o0_int *)0xC8D0680)->v)));
    (((struct o3C_uint *)0xC8D0640)->v) = (*(int *)(((int)stk + 32)));
    t79 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))(((((struct o8_int *)0xC8D05CC)->v))))((((int)stk + 0) + 0x14), (a4 & 0x1), t70, 0x26C, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
    return 0x0;
}

int vmsfs_format(int a4, int a5, int a6, int a7, int a8)
{
    int stk[14];
    register int t212;
    register int t1;
    register int t3;
    register int t11;
    register int t201;
    register int t190;
    register int t22;
    register int t26;
    register int t174;
    register int t27;
    register int t167;
    register int t28;
    register int t35;
    register int t38;
    register int t39;
    register int t46;
    register int t47;
    register int t48;
    register int t50;
    register int t59;
    register int t68;
    register int t73;
    register int t78;
    register int t84;
    register int t90;
    register int t96;
    register int t102;
    register int t108;
    register int t114;
    register int t120;
    register int t122;
    register int t123;
    register int t126;
    register int t127;
    register int t136;
    register int t145;
    register int t161;
    register int t163;
    register int t182;
    register int t36;
    register int t37;
    register int t45;

    *(unsigned int *)(((int)stk + 8)) = a5;
    *(unsigned int *)(((int)stk + 12)) = a6;
    *(unsigned int *)(((int)stk + 0)) = a7;
    *(unsigned int *)(((int)stk + 4)) = (a4 * 0x148);
    t212 = 0xFFFFFF01;
    if ((*(signed char *)((((a4 * 0x148) + 0xC8C4604) + 0x2))) == 0) {
    } else {
        if (a8 != 0) {
            *(unsigned int *)((((a4 * 0x148) + 0xC8C4604) + 0x30)) = 0x1;
            t1 = *(int *)((((a4 * 0x148) + 0xC8C4604) + 0x4));
            *(unsigned int *)((((a4 * 0x148) + 0xC8C4604) + 0x34)) = (*(int *)(((0xC303C38 + ((((t1 << 2) + t1) << 2) << 2)) + 0xC)));
        } else {
            *(unsigned int *)((((a4 * 0x148) + 0xC8C4604) + 0x30)) = 0x1;
            t3 = *(int *)((((a4 * 0x148) + 0xC8C4604) + 0x4));
            *(unsigned int *)((((a4 * 0x148) + 0xC8C4604) + 0x34)) = ((int)((int)(*(int *)(((((((t3 << 2) + t3) << 2) << 2) + 0xC303C38) + 0xC))) / (int)0xA));
        }
        t11 = vmsio_ismount(a4);
        t201 = 0xFFFFFF01;
        if (t11 == 0) {
        } else {
            t190 = 0xFFFFFF01;
            if ((*(signed char *)((((*(int *)(((int)stk + 4))) + 0xC8C4604) + 0x8))) == 0) {
            } else {
                memset((*(int *)((((a4 * 0x148) + 0xC8C4604) + 0x20))), 0x0, 0x200);
                t22 = FUN_0c2bd8b4(a4, (*(int *)(((*(int *)((((a4 * 0x148) + 0xC8C4604) + 0x1C))) + 0x8))), (*(int *)((((a4 * 0x148) + 0xC8C4604) + 0x20))));
                if ((int)t22 < 0) {
                    t182 = 0xFFFFFF81;
                    if (t22 != 0xFFFFFF40) {
                        t182 = 0xFFFFFF01;
                    }
                } else {
                    t26 = FUN_0c101148(a4, (*(int *)((((a4 * 0x148) + 0xC8C4604) + 0x1C))));
                    t174 = 0xFFFFFF01;
                    if ((int)t26 < 0) {
                    } else {
                        t27 = check_caps(((a4 * 0x148) + 0xC8C4604));
                        t167 = 0xFFFFFF83;
                        if ((int)t27 >= 0) {
                            t28 = *(int *)((((a4 * 0x148) + 0xC8C4604) + 0x1C));
                            *(unsigned int *)((t28 + 0x30)) = (*(int *)((t28 + 0x1C)));
                            memset((*(int *)((((a4 * 0x148) + 0xC8C4604) + 0x20))), 0x0, 0x200);
                            t39 = *(int *)(((int)stk + 8));
                            t35 = (memset(((*(int *)((((a4 * 0x148) + 0xC8C4604) + 0x20))) + 0x10), 0x20, 0x20));
                            t38 = 0x0;
                            for (;;) {
                                if ((int)t38 >= (int)0x20) {
                                    break;
                                }
                                t35 = (*(int *)((((a4 * 0x148) + 0xC8C4604) + 0x20)));
                                t36 = t38;
                                t37 = (*(signed char *)((t39 + 0x0)));
                                t39 = (t39 + 0x1);
                                t36 = (t36 + 0x10);
                                t38 = (t38 + 0x1);
                                *(unsigned char *)((t36 + t35)) = t37;
                            }
                            set_vmstime((((int)stk + 0) + 0x10), (*(int *)(((int)stk + 0))));
                            t46 = ((*(int *)((((a4 * 0x148) + 0xC8C4604) + 0x20))) + 0x30);
                            t47 = 0x0;
                            t48 = (((int)stk + 0) + 0x10);
                            for (;;) {
                                if ((int)t47 >= (int)0x8) {
                                    break;
                                }
                                t45 = (*(signed char *)((t48 + 0x0)));
                                t48 = (t48 + 0x1);
                                t47 = (t47 + 0x1);
                                *(unsigned char *)((t46 + 0x0)) = t45;
                                t46 = (t46 + 0x1);
                            }
                            t50 = *(int *)((((a4 * 0x148) + 0xC8C4604) + 0x1C));
                            *(unsigned int *)(((int)stk + 0)) = t50;
                            *(unsigned int *)(((int)stk + 4)) = (*(int *)((t50 + 0xC)));
                            *(unsigned int *)(((int)stk + 8)) = (*(int *)(((*(int *)(((int)stk + 0))) + 0x14)));
                            t59 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC8C4600) + 0x10)))))((*(int *)((((a4 * 0x148) + 0xC8C4604) + 0x20))), 0x42, (*(int *)(((*(int *)(((int)stk + 0))) + 0x4))), t48, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
                            (((struct o4E_uchar *)((*(int *)((((a4 * 0x148) + 0xC8C4604) + 0x20)))))->v) = (*(int *)(((int)stk + 12)));
                            (((struct o4F_uchar *)((*(int *)((((a4 * 0x148) + 0xC8C4604) + 0x20)))))->v) = 0x0;
                            t68 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC8C4600) + 0x10)))))((*(int *)((((a4 * 0x148) + 0xC8C4604) + 0x20))), 0x40, (*(int *)(((*(int *)((((a4 * 0x148) + 0xC8C4604) + 0x1C))) + 0x0))), a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
                            t73 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC8C4600) + 0x10)))))((*(int *)((((a4 * 0x148) + 0xC8C4604) + 0x20))), 0x4A, (*(int *)(((int)stk + 8))), a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
                            t78 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC8C4600) + 0x10)))))((*(int *)((((a4 * 0x148) + 0xC8C4604) + 0x20))), 0x46, (*(int *)(((int)stk + 4))), a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
                            t84 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC8C4600) + 0x10)))))((*(int *)((((a4 * 0x148) + 0xC8C4604) + 0x20))), 0x4C, (*(int *)(((*(int *)((((a4 * 0x148) + 0xC8C4604) + 0x1C))) + 0x18))), a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
                            t90 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC8C4600) + 0x10)))))((*(int *)((((a4 * 0x148) + 0xC8C4604) + 0x20))), 0x48, (*(int *)(((*(int *)((((a4 * 0x148) + 0xC8C4604) + 0x1C))) + 0x10))), a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
                            t96 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC8C4600) + 0x10)))))((*(int *)((((a4 * 0x148) + 0xC8C4604) + 0x20))), 0x50, (*(int *)(((*(int *)((((a4 * 0x148) + 0xC8C4604) + 0x1C))) + 0x1C))), a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
                            t102 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC8C4600) + 0x10)))))((*(int *)((((a4 * 0x148) + 0xC8C4604) + 0x20))), 0x52, (*(int *)(((*(int *)((((a4 * 0x148) + 0xC8C4604) + 0x1C))) + 0x20))), a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
                            t108 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC8C4600) + 0x10)))))((*(int *)((((a4 * 0x148) + 0xC8C4604) + 0x20))), 0x54, (*(int *)(((*(int *)((((a4 * 0x148) + 0xC8C4604) + 0x1C))) + 0x34))), a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
                            t114 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC8C4600) + 0x10)))))((*(int *)((((a4 * 0x148) + 0xC8C4604) + 0x20))), 0x56, (*(int *)(((*(int *)((((a4 * 0x148) + 0xC8C4604) + 0x1C))) + 0x38))), a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
                            t120 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC8C4600) + 0x10)))))((*(int *)((((a4 * 0x148) + 0xC8C4604) + 0x20))), 0x44, (*(int *)(((*(int *)((((a4 * 0x148) + 0xC8C4604) + 0x1C))) + 0x0))), a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
                            t122 = (memset((((a4 << 8) << 1) + 0xC8C9510), 0x0, 0x200));
                            t123 = 0x0;
                            for (;;) {
                                if ((int)t123 >= (int)(*(int *)(((*(int *)((((a4 * 0x148) + 0xC8C4604) + 0x1C))) + 0x0)))) {
                                    t126 = *(int *)((((a4 * 0x148) + 0xC8C4604) + 0x1C));
                                    t127 = *(int *)((t126 + 0x18));
                                    *(volatile int *)(((0x30 + t126) + 0x0));
                                    *(unsigned int *)(((int)stk + 0)) = t127;
                                    t122 = (memset((*(int *)((((a4 * 0x148) + 0xC8C4604) + 0x28))), 0x0, ((t127 << 8) << 1)));
                                    t122 = (write_dir_all(a4));
                                    t123 = 0xFFFA;
                                    t122 = (set_fat(a4, (*(int *)(((*(int *)((((a4 * 0x148) + 0xC8C4604) + 0x1C))) + 0x8)))));
                                    t136 = 0x0;
                                    for (;;) {
                                        if ((int)t136 >= (int)(*(int *)(((*(int *)((((a4 * 0x148) + 0xC8C4604) + 0x1C))) + 0x10)))) {
                                            break;
                                        }
                                        t122 = (set_fat(a4, ((*(int *)(((*(int *)((((a4 * 0x148) + 0xC8C4604) + 0x1C))) + 0xC))) + t136)));
                                        t136 = (t136 + 0x1);
                                    }
                                    t122 = (set_fat(a4, (*(int *)(((*(int *)((((a4 * 0x148) + 0xC8C4604) + 0x1C))) + 0x8)))));
                                    t145 = 0x0;
                                    for (;;) {
                                        if ((int)t145 >= (int)(*(int *)(((*(int *)((((a4 * 0x148) + 0xC8C4604) + 0x1C))) + 0x10)))) {
                                            break;
                                        }
                                        t122 = (set_fat(a4, ((*(int *)(((*(int *)((((a4 * 0x148) + 0xC8C4604) + 0x1C))) + 0xC))) + t145)));
                                        t145 = (t145 + 0x1);
                                    }
                                    t122 = (write_fat(a4));
                                    t122 = (memset((*(int *)((((a4 * 0x148) + 0xC8C4604) + 0x20))), 0x55, 0x10));
                                    t122 = (FUN_0c2c1016(a4));
                                    t122 = (memset((*(int *)((((a4 * 0x148) + 0xC8C4604) + 0x20))), 0x0, 0x10));
                                    t122 = 0x0;
                                    *(unsigned char *)((((a4 * 0x148) + 0xC8C4604) + 0xB)) = t122;
                                    *(unsigned char *)((((a4 * 0x148) + 0xC8C4604) + 0xC)) = t122;
                                    *(unsigned char *)((((a4 * 0x148) + 0xC8C4604) + 0xA)) = t122;
                                    t122 = (check_cache(a4));
                                    return t122;
                                }
                                t161 = 0x0;
                                if (a8 != 0) {
                                    t122 = (FUN_0c2bd8b4(a4, t123, (((a4 << 8) << 1) + 0xC8C9510)));
                                    t161 = t122;
                                }
                                t122 = t161;
                                if (t122 != 0xFFFFFF01) {
                                    t163 = 0xFFFF;
                                    if (t122 != 0xFFFFFF40) {
                                        t163 = 0xFFFC;
                                    }
                                    t122 = (set_fat(a4, t123));
                                    t123 = (t123 + 0x1);
                                    continue;
                                }
                                break;
                            }
                            t167 = 0xFFFFFF01;
                        }
                        t174 = t167;
                    }
                    t182 = t174;
                }
                t190 = t182;
            }
            t201 = t190;
        }
        t212 = t201;
    }
    return t212;
}

int FUN_0c2ece2c(int a4, int a5)
{
    FUN_0c2ecdec(a4, a5, 0x20);
    FUN_0c2ece04((a4 + 0x20), (a5 + 0x20));
    FUN_0c2ecdec((a4 + 0x22), ((a5 + 0x20) + 0x2), 0x1);
    FUN_0c2ecdec((a4 + 0x23), (((a5 + 0x20) + 0x2) + 0x1), 0x1);
    FUN_0c2ecdec((a4 + 0x24), ((((a5 + 0x20) + 0x2) + 0x1) + 0x1), 0x1);
    FUN_0c2ecdec((a4 + 0x25), (((((a5 + 0x20) + 0x2) + 0x1) + 0x1) + 0x1), 0x1);
    FUN_0c2ece04((a4 + 0x26), ((((((a5 + 0x20) + 0x2) + 0x1) + 0x1) + 0x1) + 0x1));
    FUN_0c2ece04((a4 + 0x28), (((((((a5 + 0x20) + 0x2) + 0x1) + 0x1) + 0x1) + 0x1) + 0x2));
    FUN_0c2ece04((a4 + 0x2A), ((((((((a5 + 0x20) + 0x2) + 0x1) + 0x1) + 0x1) + 0x1) + 0x2) + 0x2));
    FUN_0c2ece04((a4 + 0x2C), (((((((((a5 + 0x20) + 0x2) + 0x1) + 0x1) + 0x1) + 0x1) + 0x2) + 0x2) + 0x2));
    FUN_0c2ecdec((a4 + 0x2E), ((((((((((a5 + 0x20) + 0x2) + 0x1) + 0x1) + 0x1) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2), 0x1);
    FUN_0c2ece04((a4 + 0x30), (((((((((((a5 + 0x20) + 0x2) + 0x1) + 0x1) + 0x1) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x1));
    FUN_0c2ece04((a4 + 0x32), ((((((((((((a5 + 0x20) + 0x2) + 0x1) + 0x1) + 0x1) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x1) + 0x2));
    FUN_0c2ece04((a4 + 0x34), (((((((((((((a5 + 0x20) + 0x2) + 0x1) + 0x1) + 0x1) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x1) + 0x2) + 0x2));
    FUN_0c2ece04((a4 + 0x36), ((((((((((((((a5 + 0x20) + 0x2) + 0x1) + 0x1) + 0x1) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x1) + 0x2) + 0x2) + 0x2));
    FUN_0c2ece04((a4 + 0x38), (((((((((((((((a5 + 0x20) + 0x2) + 0x1) + 0x1) + 0x1) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2));
    FUN_0c2ece04((a4 + 0x3A), ((((((((((((((((a5 + 0x20) + 0x2) + 0x1) + 0x1) + 0x1) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2));
    FUN_0c2ece04((a4 + 0x3C), (((((((((((((((((a5 + 0x20) + 0x2) + 0x1) + 0x1) + 0x1) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2));
    FUN_0c2ece04((a4 + 0x3E), ((((((((((((((((((a5 + 0x20) + 0x2) + 0x1) + 0x1) + 0x1) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2));
    FUN_0c2ece04((a4 + 0x40), (((((((((((((((((((a5 + 0x20) + 0x2) + 0x1) + 0x1) + 0x1) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2));
    FUN_0c2ece04((a4 + 0x42), ((((((((((((((((((((a5 + 0x20) + 0x2) + 0x1) + 0x1) + 0x1) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2));
    FUN_0c2ece04((a4 + 0x44), (((((((((((((((((((((a5 + 0x20) + 0x2) + 0x1) + 0x1) + 0x1) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2));
    FUN_0c2ece04((a4 + 0x46), ((((((((((((((((((((((a5 + 0x20) + 0x2) + 0x1) + 0x1) + 0x1) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2));
    FUN_0c2ece04((a4 + 0x48), (((((((((((((((((((((((a5 + 0x20) + 0x2) + 0x1) + 0x1) + 0x1) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2));
    FUN_0c2ece04((a4 + 0x4A), ((((((((((((((((((((((((a5 + 0x20) + 0x2) + 0x1) + 0x1) + 0x1) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2));
    FUN_0c2ece04((a4 + 0x4C), (((((((((((((((((((((((((a5 + 0x20) + 0x2) + 0x1) + 0x1) + 0x1) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2));
    FUN_0c2ece04((a4 + 0x4E), ((((((((((((((((((((((((((a5 + 0x20) + 0x2) + 0x1) + 0x1) + 0x1) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2));
    FUN_0c2ece04((a4 + 0x50), (((((((((((((((((((((((((((a5 + 0x20) + 0x2) + 0x1) + 0x1) + 0x1) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2));
    FUN_0c2ece04((a4 + 0x52), ((((((((((((((((((((((((((((a5 + 0x20) + 0x2) + 0x1) + 0x1) + 0x1) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2));
    FUN_0c2ece04((a4 + 0x54), (((((((((((((((((((((((((((((a5 + 0x20) + 0x2) + 0x1) + 0x1) + 0x1) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2));
    FUN_0c2ece04((a4 + 0x56), ((((((((((((((((((((((((((((((a5 + 0x20) + 0x2) + 0x1) + 0x1) + 0x1) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2));
    FUN_0c2ece04((a4 + 0x58), (((((((((((((((((((((((((((((((a5 + 0x20) + 0x2) + 0x1) + 0x1) + 0x1) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2));
    FUN_0c2ece04((a4 + 0x5A), ((((((((((((((((((((((((((((((((a5 + 0x20) + 0x2) + 0x1) + 0x1) + 0x1) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2));
    FUN_0c2ece04((a4 + 0x5C), (((((((((((((((((((((((((((((((((a5 + 0x20) + 0x2) + 0x1) + 0x1) + 0x1) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2));
    FUN_0c2ece04((a4 + 0x5E), ((((((((((((((((((((((((((((((((((a5 + 0x20) + 0x2) + 0x1) + 0x1) + 0x1) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2));
    FUN_0c2ece04((a4 + 0x60), (((((((((((((((((((((((((((((((((((a5 + 0x20) + 0x2) + 0x1) + 0x1) + 0x1) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2));
    FUN_0c2ece04((a4 + 0x62), ((((((((((((((((((((((((((((((((((((a5 + 0x20) + 0x2) + 0x1) + 0x1) + 0x1) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2));
    FUN_0c2ece04((a4 + 0x64), (((((((((((((((((((((((((((((((((((((a5 + 0x20) + 0x2) + 0x1) + 0x1) + 0x1) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2));
    FUN_0c2ece04((a4 + 0x66), ((((((((((((((((((((((((((((((((((((((a5 + 0x20) + 0x2) + 0x1) + 0x1) + 0x1) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2));
    FUN_0c2ece04((a4 + 0x68), (((((((((((((((((((((((((((((((((((((((a5 + 0x20) + 0x2) + 0x1) + 0x1) + 0x1) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2));
    FUN_0c2ece04((a4 + 0x6A), ((((((((((((((((((((((((((((((((((((((((a5 + 0x20) + 0x2) + 0x1) + 0x1) + 0x1) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2));
    FUN_0c2ece04((a4 + 0x6C), (((((((((((((((((((((((((((((((((((((((((a5 + 0x20) + 0x2) + 0x1) + 0x1) + 0x1) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2));
    FUN_0c2ece04((a4 + 0x6E), ((((((((((((((((((((((((((((((((((((((((((a5 + 0x20) + 0x2) + 0x1) + 0x1) + 0x1) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2));
    FUN_0c2ece04((a4 + 0x70), (((((((((((((((((((((((((((((((((((((((((((a5 + 0x20) + 0x2) + 0x1) + 0x1) + 0x1) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2));
    FUN_0c2ece04((a4 + 0x72), ((((((((((((((((((((((((((((((((((((((((((((a5 + 0x20) + 0x2) + 0x1) + 0x1) + 0x1) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2));
    FUN_0c2ece04((a4 + 0x74), (((((((((((((((((((((((((((((((((((((((((((((a5 + 0x20) + 0x2) + 0x1) + 0x1) + 0x1) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2));
    FUN_0c2ece04((a4 + 0x76), ((((((((((((((((((((((((((((((((((((((((((((((a5 + 0x20) + 0x2) + 0x1) + 0x1) + 0x1) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2));
    FUN_0c2ece04((a4 + 0x78), (((((((((((((((((((((((((((((((((((((((((((((((a5 + 0x20) + 0x2) + 0x1) + 0x1) + 0x1) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2));
    FUN_0c2ece04((a4 + 0x7A), ((((((((((((((((((((((((((((((((((((((((((((((((a5 + 0x20) + 0x2) + 0x1) + 0x1) + 0x1) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2));
    FUN_0c2ece04((a4 + 0x7C), (((((((((((((((((((((((((((((((((((((((((((((((((a5 + 0x20) + 0x2) + 0x1) + 0x1) + 0x1) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2));
    FUN_0c2ece04((a4 + 0x7E), ((((((((((((((((((((((((((((((((((((((((((((((((((a5 + 0x20) + 0x2) + 0x1) + 0x1) + 0x1) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2));
    FUN_0c2ece14((0x80 + a4), (((((((((((((((((((((((((((((((((((((((((((((((((((a5 + 0x20) + 0x2) + 0x1) + 0x1) + 0x1) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2));
    FUN_0c2ece14((0x84 + a4), ((((((((((((((((((((((((((((((((((((((((((((((((((((a5 + 0x20) + 0x2) + 0x1) + 0x1) + 0x1) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x4));
    FUN_0c2ecdec((0x88 + a4), (((((((((((((((((((((((((((((((((((((((((((((((((((((a5 + 0x20) + 0x2) + 0x1) + 0x1) + 0x1) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x4) + 0x4), 0x1);
    FUN_0c2ecdec((0x89 + a4), ((((((((((((((((((((((((((((((((((((((((((((((((((((((a5 + 0x20) + 0x2) + 0x1) + 0x1) + 0x1) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x4) + 0x4) + 0x1), 0x1);
    FUN_0c2ecdec((0x8A + a4), (((((((((((((((((((((((((((((((((((((((((((((((((((((((a5 + 0x20) + 0x2) + 0x1) + 0x1) + 0x1) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x4) + 0x4) + 0x1) + 0x1), 0x1);
    FUN_0c2ece04((0x8C + a4), ((((((((((((((((((((((((((((((((((((((((((((((((((((((((a5 + 0x20) + 0x2) + 0x1) + 0x1) + 0x1) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x4) + 0x4) + 0x1) + 0x1) + 0x1));
    FUN_0c2ece04((0x8E + a4), (((((((((((((((((((((((((((((((((((((((((((((((((((((((((a5 + 0x20) + 0x2) + 0x1) + 0x1) + 0x1) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x4) + 0x4) + 0x1) + 0x1) + 0x1) + 0x2));
    FUN_0c2ece04((0x90 + a4), ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((a5 + 0x20) + 0x2) + 0x1) + 0x1) + 0x1) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x4) + 0x4) + 0x1) + 0x1) + 0x1) + 0x2) + 0x2));
    FUN_0c2ece04((0x92 + a4), (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((a5 + 0x20) + 0x2) + 0x1) + 0x1) + 0x1) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x4) + 0x4) + 0x1) + 0x1) + 0x1) + 0x2) + 0x2) + 0x2));
    FUN_0c2ece04((0x94 + a4), ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((a5 + 0x20) + 0x2) + 0x1) + 0x1) + 0x1) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x4) + 0x4) + 0x1) + 0x1) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2));
    FUN_0c2ece04((0x96 + a4), (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((a5 + 0x20) + 0x2) + 0x1) + 0x1) + 0x1) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x4) + 0x4) + 0x1) + 0x1) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2));
    FUN_0c2ece04((0x98 + a4), ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((a5 + 0x20) + 0x2) + 0x1) + 0x1) + 0x1) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x4) + 0x4) + 0x1) + 0x1) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2));
    FUN_0c2ece04((0x9A + a4), (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((a5 + 0x20) + 0x2) + 0x1) + 0x1) + 0x1) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x4) + 0x4) + 0x1) + 0x1) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2));
    FUN_0c2ece04((0x9C + a4), ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((a5 + 0x20) + 0x2) + 0x1) + 0x1) + 0x1) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x4) + 0x4) + 0x1) + 0x1) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2));
    FUN_0c2ece04((0x9E + a4), (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((a5 + 0x20) + 0x2) + 0x1) + 0x1) + 0x1) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x4) + 0x4) + 0x1) + 0x1) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2));
    FUN_0c2ece04((0xA0 + a4), ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((a5 + 0x20) + 0x2) + 0x1) + 0x1) + 0x1) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x4) + 0x4) + 0x1) + 0x1) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2));
    FUN_0c2ece04((0xA2 + a4), (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((a5 + 0x20) + 0x2) + 0x1) + 0x1) + 0x1) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x4) + 0x4) + 0x1) + 0x1) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2));
    FUN_0c2ece04((0xA4 + a4), ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((a5 + 0x20) + 0x2) + 0x1) + 0x1) + 0x1) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x4) + 0x4) + 0x1) + 0x1) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2));
    FUN_0c2ece04((0xA6 + a4), (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((a5 + 0x20) + 0x2) + 0x1) + 0x1) + 0x1) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x4) + 0x4) + 0x1) + 0x1) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2));
    FUN_0c2ece04((0xA8 + a4), ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((a5 + 0x20) + 0x2) + 0x1) + 0x1) + 0x1) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x4) + 0x4) + 0x1) + 0x1) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2));
    FUN_0c2ece04((0xAA + a4), (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((a5 + 0x20) + 0x2) + 0x1) + 0x1) + 0x1) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x4) + 0x4) + 0x1) + 0x1) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2));
    FUN_0c2ece04((0xAC + a4), ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((a5 + 0x20) + 0x2) + 0x1) + 0x1) + 0x1) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x4) + 0x4) + 0x1) + 0x1) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2));
    FUN_0c2ece04((0xAE + a4), (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((a5 + 0x20) + 0x2) + 0x1) + 0x1) + 0x1) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x4) + 0x4) + 0x1) + 0x1) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2));
    FUN_0c2ece04((0xB0 + a4), ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((a5 + 0x20) + 0x2) + 0x1) + 0x1) + 0x1) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x4) + 0x4) + 0x1) + 0x1) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2));
    FUN_0c2ece04((0xB2 + a4), (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((a5 + 0x20) + 0x2) + 0x1) + 0x1) + 0x1) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x4) + 0x4) + 0x1) + 0x1) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2));
    FUN_0c2ece04((0xB4 + a4), ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((a5 + 0x20) + 0x2) + 0x1) + 0x1) + 0x1) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x4) + 0x4) + 0x1) + 0x1) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2));
    return (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((a5 + 0x20) + 0x2) + 0x1) + 0x1) + 0x1) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x4) + 0x4) + 0x1) + 0x1) + 0x1) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2);
}

int FUN_0c2af1e0(int a4, int a5, int a6, int a7)
{
    int stk[9];

    register int R0;
    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R6;
    register int R7;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    *(unsigned int *)(((int)stk + 12)) = ((((int)stk + 4) + 0x18) + 0x4);
    v0_0 = _builtin_get_imask();
    *(unsigned int *)(((int)stk + 20)) = 0xC8B964C;
    *(unsigned int *)(((int)stk + 4)) = 0xC8B964E;
    *(unsigned int *)(((int)stk + 8)) = 0xC8B964F;
    *(unsigned int *)(((int)stk + 16)) = v0_0;
    _builtin_set_imask(0xF);
    v0_3 = ((((int)stk + 4) + 0x18));
    v0_2 = (0xC3036E8);
    v0_1 = (0xC2BB18C);
    v0_0 = (0xC3036E4);
    v0_4 = (0xC8B964F);
    v0_5 = (0xC8B9640);
    if ((((((struct o0_int *)0xC3036E8)->v)) != 0)) goto L_C2AF23E;
    *(unsigned int *)((v0_2 + 0x0)) = (syChainAddHandler(0x900, 0xC2AF1A8, 0x50, (*(int *)((v0_0 + 0x0)))));
    L_C2AF23E:;
    v0_2 = (0xC3036EC);
    if ((((((struct o4_int *)0xC3036E8)->v)) != 0)) goto L_C2AF254;
    *(unsigned int *)((v0_2 + 0x0)) = (syChainAddHandler(0xA40, 0xC2AF18E, 0x10, (*(int *)((v0_0 + 0x0)))));
    L_C2AF254:;
    v0_6 = gdFsReopenHn((*(int *)(((*(int *)((v0_0 + 0x0))) + 0x14))), 0x0, 0x0, 0x0);
    v0_2 = (0xC2B023A);
    v0_1 = (v0_6);
    if ((v0_6 == 0)) goto L_C2AF2D6;
    v0_2 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)(((*(int *)((v0_0 + 0x0))) + 0xC))) + 0x1C)))))(v0_4, R5, R6, R7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
    v0_4 = (v0_2);
    if ((v0_2 == 0)) goto L_C2AF2D6;
    *(unsigned int *)((v0_1 + 0x3C)) = v0_4;
    (((struct o50_ushort *)(v0_1))->v) = 0x4;
    *(unsigned int *)(((*(int *)((v0_1 + 0x0))) + 0x1C)) = v0_1;
    v0_2 = gdFsWaitCompleteReq(v0_1, R5, R6, R7);
    v0_1 = (((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)(((*(int *)((v0_0 + 0x0))) + 0xC))) + 0x20)))))(v0_3, a5, a6, a7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24))) == 0;
    v0_3 = (v0_2);
    v0_6 = (0x4);
    if (v0_1) goto L_C2AF2D6;
    if ((v0_3 == 0)) goto L_C2AF2B6;
    if (!((v0_3 == -29))) goto L_C2AF496;
    if (((*(int *)(((int)stk + 28))) == 6)) goto L_C2AF2B2;
    goto L_C2AF496;
    L_C2AF496:;
    v0_4 = (v0_3);
    L_C2AF4C2:;
    _builtin_set_imask(((unsigned int)((((*(int *)(((int)stk + 16))) & 0xF) << 2) << 2) >> 4));
    return v0_4;
    L_C2AF2B2:;
    R5 = (0xFFFFFFE9);
    L_C2AF4AE:;
    v0_4 = (R5);
    goto L_C2AF4C2;
    L_C2AF2B6:;
    if (!(((*(int *)(((*(int *)(((int)stk + 12))) + 0x0))) == 0x80))) goto L_C2AF4AC;
    v0_1 = gdFsReopenHn((*(int *)(((*(int *)((v0_0 + 0x0))) + 0x14))), 0x0, 0x0, 0x0);
    v0_2 = (v0_1);
    if ((v0_1 != 0)) goto L_C2AF308;
    goto L_C2AF2D6;
    L_C2AF4AC:;
    R5 = (0xFFFFFFFB);
    goto L_C2AF4AE;
    L_C2AF2D6:;
    R5 = (0xFFFFFFFE);
    goto L_C2AF4AE;
    L_C2AF308:;
    *(unsigned int *)(((*(int *)((v0_0 + 0x0))) + 0x2C)) = 0x0;
    v0_3 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))(((((struct o4C_int *)((*(int *)(((*(int *)((v0_0 + 0x0))) + 0xC)))))->v))))(v0_5, R5, R6, R7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
    v0_1 = (0x0);
    v0_4 = (v0_3);
    if ((v0_3 == 0)) goto L_C2AF364;
    *(unsigned int *)((v0_2 + 0x3C)) = v0_4;
    (((struct o50_ushort *)(v0_2))->v) = v0_6;
    *(unsigned int *)(((*(int *)((v0_2 + 0x0))) + 0x1C)) = v0_2;
    v0_2 = gdFsWaitCompleteReq(v0_2, R5, R6, R7);
    v0_4 = (v0_2);
    if ((v0_2 != 0)) goto L_C2AF364;
    v0_2 = *(int *)((v0_0 + 0x0));
    *(unsigned int *)((v0_2 + 0x2C)) = ((*(int *)((v0_2 + 0x2C))) | (((*(signed char *)(((*(int *)(((int)stk + 20))) + 0x0))) - 48) << 16));
    v0_2 = *(int *)((v0_0 + 0x0));
    *(unsigned int *)((v0_2 + 0x2C)) = ((*(int *)((v0_2 + 0x2C))) | (((*(signed char *)(((*(int *)(((int)stk + 4))) + 0x0))) - 48) << 8));
    v0_2 = *(int *)((v0_0 + 0x0));
    *(unsigned int *)((v0_2 + 0x2C)) = ((*(int *)((v0_2 + 0x2C))) | ((*(signed char *)(((*(int *)(((int)stk + 8))) + 0x0))) - 48));
    L_C2AF364:;
    v0_2 = (gdFsReadWG((*(int *)0xC2FE7F0), 0x1, ((*(int *)((v0_0 + 0x0))) + 0x40))) == 0;
    if (!(v0_2)) goto L_C2AF49E;
    v0_2 = (gdFsCheckMedia(((*(int *)((v0_0 + 0x0))) + 0x40))) != 0;
    if (v0_2) goto L_C2AF388;
    goto L_C2AF4AC;
    L_C2AF49E:;
    R5 = (0xFFFFFFFC);
    goto L_C2AF4AE;
    L_C2AF388:;
    v0_2 = *(int *)((v0_0 + 0x0));
    *(int *)((int)stk + 0) = (0x4 + v0_2);
    *(unsigned int *)(((0x4 + v0_2) + 0x0)) = (gdFsGetLE4((((*(int *)((v0_0 + 0x0))) + 0x40) + 0x8C)));
    v0_2 = *(int *)((v0_0 + 0x0));
    *(unsigned int *)((v0_2 + 0x4)) = ((*(int *)((v0_2 + 0x4))) + 0x96);
    v0_2 = *(int *)((v0_0 + 0x0));
    *(int *)((int)stk + 0) = (0x8 + v0_2);
    *(unsigned int *)(((0x8 + v0_2) + 0x0)) = (gdFsGetLE4((((*(int *)((v0_0 + 0x0))) + 0x40) + 0x84)));
    (((struct o18_uint *)0xC8B9660)->v) = 0xC8B9660;
    (((struct o0_ushort *)0xC8B9660)->v) = (*(signed char *)0x8C0080FC);
    v0_3 = (0x96);
    v0_2 = (0xC8B9678);
    v0_4 = (0x8C0080F0);
    if (((*(short *)((((((struct o18_int *)0xC8B9660)->v)) + 0x0))) != 1)) goto L_C2AF3FC;
    *(unsigned short *)(((*(int *)((v0_2 + 0x0))) + 0x2)) = (*(signed char *)((v0_4 + 0xD)));
    *(unsigned int *)(((*(int *)((v0_2 + 0x0))) + 0x4)) = v0_1;
    v0_5 = v0_4;
    v0_4 = (v0_1);
    R5 = v0_5;
    R6 = (((*(int *)((v0_2 + 0x0))) + 0x8));
    L_C2AF3E6:;
    if (((*(signed char *)((R5 + 0x0))) == 32)) goto L_C2AF3FA;
    *(unsigned char *)((R6 + 0x0)) = (*(signed char *)((R5 + 0x0)));
    v0_5 = (int)(v0_4 + 0x1) < (int)0xC;
    v0_4 = ((v0_4 + 0x1));
    R5 = ((R5 + 0x1));
    R6 = ((R6 + 0x1));
    if (v0_5) goto L_C2AF3E6;
    L_C2AF3FA:;
    *(unsigned char *)((R6 + 0x0)) = v0_1;
    L_C2AF3FC:;
    v0_4 = gdFsGetLE4((((*(int *)((v0_0 + 0x0))) + 0x40) + 0x9E));
    v0_5 = gdFsGetLE4((((*(int *)((v0_0 + 0x0))) + 0x40) + 0xA6));
    *(unsigned int *)(((*(int *)(((*(int *)((v0_0 + 0x0))) + 0x10))) + 0x8)) = v0_1;
    v0_4 = gdFsGetDirEnt(((*(int *)((v0_0 + 0x0))) + 0x40), (v0_4 + v0_3), (*(int *)(((*(int *)((v0_0 + 0x0))) + 0x10))), v0_5);
    v0_3 = (v0_4);
    if ((v0_4 == -12)) goto L_C2AF496;
    if ((v0_3 != 0)) goto L_C2AF49E;
    if (((*(int *)(((*(int *)(((*(int *)((v0_0 + 0x0))) + 0x10))) + 0x0))) == 0)) goto L_C2AF4AC;
    v0_4 = *(int *)((v0_2 + 0x0));
    v0_3 = (v0_4);
    if (((*(short *)((v0_4 + 0x0))) != 1)) goto L_C2AF4B8;
    v0_3 = (gdFsGetDirInfoG((v0_3 + 0x8), (((int)stk + 4) + 0x14))) != 0;
    if (v0_3) goto L_C2AF49E;
    v0_3 = *(int *)(((int)stk + 24));
    *(unsigned int *)(((*(int *)((v0_2 + 0x0))) + 0x4)) = v0_3;
    v0_2 = gdFsGetDirEnt(((*(int *)((v0_0 + 0x0))) + 0x40), v0_3, (*(int *)(((*(int *)((v0_0 + 0x0))) + 0x10))), 0x1);
    v0_3 = (v0_2);
    if ((v0_2 != -12)) goto L_C2AF49A;
    goto L_C2AF496;
    L_C2AF49A:;
    if ((v0_3 == 0)) goto L_C2AF4A2;
    goto L_C2AF49E;
    L_C2AF4A2:;
    if (((*(int *)(((*(int *)(((*(int *)((v0_0 + 0x0))) + 0x10))) + 0x0))) != 0)) goto L_C2AF4B2;
    goto L_C2AF4AC;
    L_C2AF4B2:;
    gdFsLockDir((*(int *)(((*(int *)((v0_0 + 0x0))) + 0x10))));
    L_C2AF4B8:;
    (((struct o38_ushort *)((*(int *)((v0_0 + 0x0)))))->v) = 0x1;
    v0_4 = (v0_1);
    goto L_C2AF4C2;
}

int FUN_0c19ddc8(int a4, int a5, int a6, int a7, int a8)
{
    int stk[1];

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
    v0_5 = a4;
    v0_6 = a5;
    v0_3 = a6;
    v0_4 = a7;
    *(unsigned int *)(((int)stk + 0)) = v0_6;
    v0_7 = *(signed char *)((v0_4 + 0x0));
    v0_6 = ((unsigned char)v0_7);
    v0_0 = (v0_5);
    v0_1 = (0x2);
    v0_2 = (0xC1A02CC);
    v0_2 = (((unsigned char)(*(signed char *)((v0_4 + 0x1))) - 2));
    v0_3 = (v0_3);
    v0_4 = (v0_4);
    v0_5 = (0xC8B5F54);
    if (((unsigned char)v0_7 == 1)) goto L_C19DE36;
    if ((v0_6 == 2)) goto L_C19DEB8;
    if ((v0_6 != 3)) goto L_C19DE02;
    v0_6 = (short)(FUN_0c1a02cc(v0_0, v0_5, 0x2)) == 2;
    if (v0_6) goto L_C19DF14;
    v0_5 = (0xFFFFFFFF);
    L_C19DF1C:;
    (((struct o24_ushort *)(v0_3))->v) = v0_5;
    v0_2 = ((v0_2 - 2));
    if (((unsigned short)((((struct o24_short *)(v0_3))->v)) != 0xC223)) goto L_C19DF5E;
    v0_5 = (short)(FUN_0c1a02cc(v0_0, 0xC8B5F58, 0x1)) == 1;
    v0_6 = (0x30);
    if (v0_5) goto L_C19DF54;
    v0_5 = (0xFFFFFFFF);
    L_C19DF5A:;
    *(unsigned char *)((v0_3 + v0_6)) = v0_5;
    v0_2 = ((v0_2 - 1));
    L_C19DF5E:;
    if (((*(signed char *)((v0_3 + 0x19))) == 0)) goto L_C19DFCE;
    v0_7 = (((struct o24_short *)(v0_3))->v);
    v0_5 = ((unsigned short)v0_7);
    v0_6 = (0xC023);
    if (((unsigned short)v0_7 == 0xC023)) goto L_C19DF80;
    if ((v0_5 != 0xC223)) goto L_C19DF90;
    if (((*(signed char *)((v0_3 + 0x30))) != 5)) goto L_C19DF90;
    L_C19DF80:;
    *(unsigned short *)((v0_3 + 0xC)) = ((((struct o24_short *)(v0_3))->v));
    (((struct o18_uchar *)(v0_3))->v) = (*(signed char *)((v0_3 + 0x30)));
    L_C19E046:;
    v0_4 = *(signed char *)((v0_4 + 0x0));
    v0_5 = ((unsigned char)v0_4);
    if (((int)(unsigned char)v0_4 > (int)0x8)) goto L_C19E05A;
    if ((((*(short *)((v0_3 + 0x0))) & ((int)0x1 << (int)v0_5)) != 0)) goto L_C19E05C;
    L_C19E05A:;
    v0_1 = (0x4);
    L_C19E05C:;
    if (((int)(short)v0_2 < 0)) goto L_C19E090;
    if ((((short)(a8 >> 0)) != 0)) goto L_C19E09C;
    if (((int)(short)v0_2 <= 0)) goto L_C19E09C;
    L_C19E094:;
    v0_3 = (int)(short)v0_2 > 0;
    v0_2 = ((v0_2 - 1));
    if (!(v0_3)) goto L_C19E09C;
    v0_3 = (short)(FUN_0c1a02cc(v0_0, 0xC8B5F58, 0x1)) == 1;
    if (v0_3) goto L_C19E086;
    v0_6 = (0xFFFFFFFF);
    goto L_C19E08C;
    L_C19E09C:;
    v0_6 = (v0_1);
    L_C19E09E:;
    return v0_6;
    L_C19E08C:;
    if ((v0_6 != -1)) goto L_C19E094;
    L_C19E090:;
    v0_6 = (0xFFFFFFFF);
    goto L_C19E09E;
    L_C19E086:;
    v0_6 = ((unsigned char)(*(signed char *)0xC8B5F58));
    goto L_C19E08C;
    L_C19DF90:;
    (((struct o24_ushort *)(v0_3))->v) = v0_6;
    (((struct o30_uchar *)(v0_3))->v) = 0x0;
    *(unsigned char *)((v0_4 + 0x1)) = 0x4;
    v0_1 = (0x3);
    if (((int)(short)v0_2 <= 0)) goto L_C19E046;
    L_C19DFA6:;
    v0_5 = (short)(FUN_0c1a02cc(v0_0, 0xC8B5F58, 0x1)) == 1;
    v0_2 = ((v0_2 - 1));
    if (v0_5) goto L_C19DFBA;
    v0_6 = (0xFFFFFFFF);
    L_C19DFC0:;
    if ((v0_6 == -1)) goto L_C19E090;
    if (((int)(short)v0_2 > 0)) goto L_C19DFA6;
    goto L_C19E046;
    L_C19DFBA:;
    v0_6 = ((unsigned char)(*(signed char *)0xC8B5F58));
    goto L_C19DFC0;
    L_C19DFCE:;
    v0_6 = (((struct o24_short *)(v0_3))->v);
    v0_5 = ((unsigned short)v0_6);
    if (((unsigned short)v0_6 != (unsigned short)(*(short *)((v0_3 + 0xC))))) goto L_C19DFEE;
    if ((v0_5 != 0xC223)) goto L_C19E046;
    if (((*(signed char *)((v0_3 + 0x30))) == (*(signed char *)((v0_3 + 0x18))))) goto L_C19E046;
    L_C19DFEE:;
    (((struct o24_ushort *)(v0_3))->v) = (*(short *)((v0_3 + 0xC)));
    (((struct o30_uchar *)(v0_3))->v) = (*(signed char *)((v0_3 + 0x18)));
    v0_1 = (0x3);
    goto L_C19E046;
    L_C19DF54:;
    v0_5 = ((unsigned char)(*(signed char *)0xC8B5F58));
    goto L_C19DF5A;
    L_C19DF14:;
    v0_5 = ((unsigned short)(FUN_0c19c916(v0_5)));
    goto L_C19DF1C;
    L_C19DE02:;
    if ((v0_6 != 5)) goto L_C19DE0A;
    v0_6 = (short)(FUN_0c1a02cc(v0_0, v0_5, 0x4)) == 4;
    if (v0_6) goto L_C19E014;
    v0_5 = (0x0);
    L_C19E01C:;
    *(unsigned int *)((v0_3 + 0x28)) = v0_5;
    v0_2 = ((v0_2 - 4));
    if ((v0_5 == 0)) goto L_C19E034;
    v0_5 = *(int *)(((int)stk + 0));
    if ((((((struct o5C_int *)(v0_5))->v)) != (*(int *)((v0_5 + 0x28))))) goto L_C19E046;
    L_C19E034:;
    *(unsigned int *)((v0_3 + 0x28)) = ((*(int *)((v0_3 + 0x28))) + (FUN_0c191e30()));
    L_C19E040:;
    v0_1 = (0x3);
    goto L_C19E046;
    L_C19E014:;
    v0_5 = ((FUN_0c19c926(v0_5)));
    goto L_C19E01C;
    L_C19DE0A:;
    if ((v0_6 != 7)) goto L_C19DE12;
    goto L_C19E046;
    L_C19DE12:;
    if ((v0_6 != 8)) goto L_C19DE1A;
    goto L_C19E046;
    L_C19DE1A:;
    if (!((v0_6 != 0))) goto L_C19E044;
    if ((v0_6 != 4)) goto L_C19DE2A;
    goto L_C19E044;
    L_C19E044:;
    v0_1 = (0x4);
    goto L_C19E046;
    L_C19DE2A:;
    if ((v0_6 != 6)) goto L_C19DE32;
    goto L_C19E044;
    L_C19DE32:;
    goto L_C19E044;
    L_C19DEB8:;
    v0_6 = (short)(FUN_0c1a02cc(v0_0, v0_5, 0x4)) == 4;
    if (v0_6) goto L_C19DECA;
    v0_5 = (0x0);
    L_C19DED2:;
    *(unsigned int *)((v0_3 + 0x20)) = v0_5;
    v0_2 = ((v0_2 - 4));
    if ((((short)(a8 >> 0)) == 0)) goto L_C19DEE8;
    if ((((*(short *)((v0_3 + 0x4))) & 4) != 0)) goto L_C19DEE8;
    goto L_C19E046;
    L_C19DEE8:;
    if (((*(int *)((v0_3 + 0x20))) != ((*(int *)((v0_3 + 0x20))) | (*(int *)((v0_3 + 0x8)))))) goto L_C19DEF8;
    goto L_C19E046;
    L_C19DEF8:;
    *(unsigned int *)((v0_3 + 0x20)) = ((*(int *)((v0_3 + 0x20))) | (*(int *)((v0_3 + 0x8))));
    goto L_C19E040;
    L_C19DECA:;
    v0_5 = ((FUN_0c19c926(v0_5)));
    goto L_C19DED2;
    L_C19DE36:;
    v0_6 = (short)(FUN_0c1a02cc(v0_0, v0_5, 0x2)) == 2;
    if (v0_6) goto L_C19DE6C;
    v0_6 = (0xFFFFFFFF);
    L_C19DE74:;
    *(unsigned short *)((v0_3 + 0x1E)) = v0_6;
    v0_2 = ((v0_2 - 2));
    v0_5 = (0x80);
    if (((int)(*(short *)((v0_3 + 0x1E))) < (int)0x80)) goto L_C19DE88;
    v0_5 = (0x1000);
    if (((int)(*(short *)((v0_3 + 0x1E))) <= (int)0x1000)) goto L_C19DE8E;
    L_C19DE88:;
    *(unsigned short *)((v0_3 + 0x1E)) = v0_5;
    v0_1 = (0x3);
    L_C19DE8E:;
    if ((((short)(a8 >> 0)) != 0)) goto L_C19DE9A;
    goto L_C19E046;
    L_C19DE9A:;
    if ((((*(short *)((v0_3 + 0x4))) & 2) != 0)) goto L_C19DEA4;
    goto L_C19E046;
    L_C19DEA4:;
    if (((int)(*(short *)((v0_3 + 0x1E))) > (int)(*(short *)((v0_3 + 0x6))))) goto L_C19DEB2;
    goto L_C19E046;
    L_C19DEB2:;
    *(unsigned short *)((v0_3 + 0x1E)) = (*(short *)((v0_3 + 0x6)));
    goto L_C19E040;
    L_C19DE6C:;
    v0_6 = ((unsigned short)(FUN_0c19c916(v0_5)));
    goto L_C19DE74;
}

int FUN_0c2fb0b8(int a4, int a5)
{

    register int R1;
    register int R2;
    register int R3;
    register int R8;
    register int R9;
    register int R10;
    register int R11;
    register int R12;
    register int R13;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_10;
    register int v0_11;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register int v0_9;
    v0_1 = a4;
    v0_2 = a5;
    v0_0 = R13;
    v0_5 = R12;
    v0_6 = R11;
    v0_7 = R10;
    v0_8 = R9;
    v0_9 = R8;
    v0_3 = *(signed char *)0xC8E0949;
    v0_4 = *(signed char *)0xC8E0948;
    v0_10 = *(signed char *)0xC8E094A;
    v0_11 = (((struct o8_int *)0xC8E094C)->v);
    R10 = (v0_11);
    R11 = (v0_4);
    R12 = (v0_10);
    R13 = (v0_1);
    v0_0 = (v0_2);
    v0_1 = (v0_3);
    R8 = (0x8);
    R9 = (0xC8E0948);
    if (((unsigned char)v0_4 == 5)) goto L_C2FB0E6;
    L_C2FB36A:;
    v0_2 = (unsigned char)v0_0 == 0;
    v0_0 = ((v0_0 - 1));
    if (v0_2) goto L_C2FB376;
    if (((R13 & 0x1) == 0)) goto L_C2FB158;
    v0_2 = (unsigned char)(R12 + 0x1) != 7;
    R10 = ((((unsigned int)R10 >> 1) | 0x80));
    R12 = ((R12 + 0x1));
    v0_1 = ((v0_1 - 1));
    if (v0_2) goto L_C2FB17A;
    R11 = (0x4);
    v0_1 = (0x0);
    L_C2FB17A:;
    R13 = (((unsigned int)R13 >> 1));
    if (((unsigned char)v0_1 == 0)) goto L_C2FB186;
    goto L_C2FB36A;
    L_C2FB186:;
    v0_1 = ((unsigned char)R11);
    if (((unsigned char)R11 == 2)) goto L_C2FB1AC;
    if ((v0_1 != 4)) goto L_C2FB194;
    v0_1 = (unsigned char)(*(signed char *)((R9 + 0x0))) == 8;
    if (v0_1) goto L_C2FB362;
    FUN_0c2eef70();
    v0_1 = (*(signed char *)0xC8D7081) == 0;
    if (v0_1) goto L_C2FB360;
    v0_1 = *(signed char *)0xC8D716A;
    *(unsigned char *)(((short)((short)(unsigned char)v0_1 * (short)0x124) + 0xC8D717E)) = ((*(signed char *)(((short)((short)(unsigned char)v0_1 * (short)0x124) + 0xC8D717E))) | 0x2);
    FUN_0c2ef050();
    L_C2FB360:;
    *(unsigned char *)((R9 + 0x0)) = R8;
    L_C2FB362:;
    R11 = (R8);
    R12 = (0x0);
    L_C2FB366:;
    R10 = (0x0);
    v0_1 = (R8);
    goto L_C2FB36A;
    L_C2FB194:;
    if ((v0_1 == 5)) goto L_C2FB254;
    if ((v0_1 != 7)) goto L_C2FB1A0;
    FUN_0c2eef70();
    v0_1 = (*(signed char *)0xC8D7081) == 0;
    if (v0_1) goto L_C2FB366;
    *(unsigned short *)((R9 + 0x4)) = 0xFFFF;
    *(unsigned int *)((R9 + 0x8)) = 0xFFFFFFFF;
    R11 = (0x2);
    L_C2FB1AC:;
    v0_1 = (unsigned char)(*(signed char *)0xC8D717D) != 2;
    if (v0_1) goto L_C2FB1D2;
    v0_1 = *(short *)((R9 + 0x4));
    *(unsigned short *)((R9 + 0x4)) = ((unsigned int)(unsigned short)v0_1 >> 8);
    *(unsigned short *)((R9 + 0x4)) = ((*(short *)((R9 + 0x4))) ^ (*(short *)((0xC8E0332 + ((unsigned char)(v0_1 ^ R10) << 1)))));
    L_C2FB1EA:;
    v0_1 = (((struct o4_int *)0xC8D706C)->v);
    (((struct o4_uint *)0xC8D706C)->v) = (v0_1 + 0x1);
    *(unsigned char *)((((v0_1 + 0x1) - 0x1) + 0x0)) = R10;
    v0_1 = (((struct o0_short *)0xC8D706C)->v);
    (((struct o0_ushort *)0xC8D706C)->v) = (v0_1 + 0x1);
    if (((int)(unsigned short)(v0_1 + 0x1) > (int)0x114)) goto L_C2FB208;
    goto L_C2FB366;
    L_C2FB208:;
    v0_1 = *(signed char *)0xC8D716A;
    *(unsigned char *)(((short)((short)(unsigned char)v0_1 * (short)0x124) + 0xC8D717E)) = ((*(signed char *)(((short)((short)(unsigned char)v0_1 * (short)0x124) + 0xC8D717E))) | 0x8);
    FUN_0c2ef050();
    R11 = (R8);
    goto L_C2FB366;
    L_C2FB1D2:;
    v0_1 = *(int *)((R9 + 0x8));
    *(unsigned int *)((R9 + 0x8)) = ((unsigned int)(*(int *)((R9 + 0x8))) >> 8);
    *(unsigned int *)((R9 + 0x8)) = ((*(int *)((R9 + 0x8))) ^ (*(int *)((0xC8E0534 + ((unsigned char)(v0_1 ^ R10) << 2)))));
    goto L_C2FB1EA;
    L_C2FB1A0:;
    if ((v0_1 != 8)) goto L_C2FB1A8;
    goto L_C2FB366;
    L_C2FB1A8:;
    goto L_C2FB366;
    L_C2FB254:;
    v0_2 = (((struct o0_short *)0xC8D706C)->v);
    R11 = (0x7);
    v0_1 = ((unsigned short)v0_2);
    if (((int)(unsigned short)v0_2 <= 0)) goto L_C2FB2CC;
    v0_3 = *(signed char *)0xC8D717D;
    v0_2 = ((unsigned char)v0_3);
    if (((int)v0_1 <= (int)(unsigned char)v0_3)) goto L_C2FB290;
    if ((v0_2 != 2)) goto L_C2FB27E;
    v0_1 = (unsigned short)((((struct o0_short *)0xC8E094C)->v)) != 0xF0B8;
    if (v0_1) goto L_C2FB290;
    L_C2FB27E:;
    if ((v0_2 != 4)) goto L_C2FB2B2;
    v0_1 = ((((struct o4_int *)0xC8E094C)->v)) == 0xDEBB20E3;
    if (v0_1) goto L_C2FB2B2;
    L_C2FB290:;
    v0_1 = *(signed char *)0xC8D716A;
    *(unsigned char *)(((short)((short)(unsigned char)v0_1 * (short)0x124) + 0xC8D717E)) = ((*(signed char *)(((short)((short)(unsigned char)v0_1 * (short)0x124) + 0xC8D717E))) | 0x1);
    FUN_0c2ef050();
    R11 = (R8);
    L_C2FB2CC:;
    if (((int)(unsigned char)v0_0 < (int)R8)) goto L_C2FB366;
    if (((unsigned char)R13 == 126)) goto L_C2FB2C8;
    goto L_C2FB366;
    L_C2FB2C8:;
    R13 = (((unsigned int)R13 >> 8));
    v0_0 = ((v0_0 - 8));
    goto L_C2FB2CC;
    L_C2FB2B2:;
    (((struct o0_ushort *)0xC8D706C)->v) = (((((struct o0_short *)0xC8D706C)->v)) - (unsigned char)(*(signed char *)0xC8D717D));
    FUN_0c2ef050();
    goto L_C2FB2CC;
    L_C2FB158:;
    v0_2 = (0x5);
    v0_3 = ((unsigned char)R12);
    if (((int)(unsigned char)R12 >= (int)0x5)) goto L_C2FB166;
    R10 = (((unsigned int)R10 >> 1));
    v0_1 = ((v0_1 - 1));
    L_C2FB178:;
    R12 = (0x0);
    goto L_C2FB17A;
    L_C2FB166:;
    if ((v0_3 != 6)) goto L_C2FB178;
    *(unsigned short *)0xC8D67C2 = 0x0;
    R11 = (v0_2);
    v0_1 = (0x0);
    goto L_C2FB178;
    L_C2FB376:;
    *(unsigned char *)((R9 + 0x0)) = R11;
    *(unsigned char *)((R9 + 0x1)) = v0_1;
    *(unsigned char *)((R9 + 0x2)) = R12;
    *(unsigned int *)((R9 + 0xC)) = R10;
    return R12;
    L_C2FB0E6:;
    L_C2FB0EE:;
    if (((int)(unsigned char)v0_0 >= (int)R8)) goto L_C2FB0F8;
    goto L_C2FB36A;
    L_C2FB0F8:;
    if (((unsigned char)R13 == 126)) goto L_C2FB0EA;
    goto L_C2FB36A;
    L_C2FB0EA:;
    R13 = (((unsigned int)R13 >> 8));
    v0_0 = ((v0_0 - 8));
    goto L_C2FB0EE;
}

int FUN_0c2cd580(int a4)
{
    int stk[7];

    register int R1;
    register int R2;
    register int R3;
    register int R8;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    v0_5 = a4;
    kmyUpdatePalette();
    kmyUpdateFogParameter();
    v0_0 = (0x0);
    v0_1 = (0x1);
    v0_4 = (0xEEEE);
    v0_2 = (0xC8BE7A8);
    v0_3 = (v0_5);
    if (((*(int *)((v0_5 + 0x8))) != 0)) goto L_C2CD5AC;
    if ((((((struct o82C_int *)(v0_2))->v)) != 1)) goto L_C2CD76A;
    kmyResetRenderer();
    L_C2CD76A:;
    v0_6 = (((struct o40_int *)(v0_3))->v);
    kmySetDitherMode((*(int *)((v0_3 + 0x3C))), (*(int *)((v0_3 + 0x30))));
    kmySetPixelClippingX((*(int *)((v0_3 + 0x3C))), 0x0, ((*(int *)((v0_6 + 0xC))) - 1));
    kmySetPixelClippingY((*(int *)((v0_3 + 0x3C))), 0x0, ((*(int *)((v0_6 + 0x10))) - 1));
    kmiSetupRender((*(int *)((v0_3 + 0x20))), (*(int *)((v0_3 + 0x3C))));
    kmySetVirticalFilterMode((*(int *)((v0_3 + 0x3C))), 0x0);
    *(unsigned int *)((((((((struct o938_int *)(v0_2))->v)) << 2) + (0x914 + v0_2)) + 0x0)) = (*(int *)0xFFD8000C);
    v0_4 = (v0_6);
    v0_5 = ((*(int *)((v0_6 + 0x1C))));
    if ((((*(int *)((v0_6 + 0x18))) & 0x2000000) == 0)) goto L_C2CD820;
    v0_4 = ((*(int *)0xC8D1DBC));
    L_C2CD822:;
    kmyStartRenderTexture((*(int *)((v0_3 + 0x3C))), v0_5, v0_4);
    kmySetVirticalFilterMode((*(int *)((v0_3 + 0x3C))), (*(int *)((v0_2 + 0x20))));
    (((struct o4_uint *)0xC8BFF98)->v) = v0_3;
    (((struct o0_uint *)0xC8BFF98)->v) = v0_1;
    *(unsigned int *)((v0_3 + 0x14)) = 0x5;
    (((struct o28_uint *)0xC8BFF98)->v) = (((((struct o82C_int *)(v0_2))->v)) + 0xA);
    v0_4 = (v0_0);
    L_C2CD848:;
    return v0_4;
    L_C2CD820:;
    v0_4 = ((*(int *)((v0_4 + 0xC))));
    goto L_C2CD822;
    L_C2CD5AC:;
    if ((((((struct o0_int *)0xC8BF120)->v)) == 1)) goto L_C2CD5D0;
    v0_5 = (FUN_0c2cc400((*(int *)((v0_3 + 0x28))))) == 0;
    if (v0_5) goto L_C2CD5C2;
    goto L_C2CD848;
    L_C2CD5C2:;
    if ((((((struct o10_int *)0xC8BFF98)->v)) != (*(int *)((v0_3 + 0x28))))) goto L_C2CD5D0;
    goto L_C2CD848;
    L_C2CD5D0:;
    if ((((((struct o82C_int *)(v0_2))->v)) != 1)) goto L_C2CD5DE;
    kmyResetRenderer();
    L_C2CD5DE:;
    (((struct o40_uint *)(v0_3))->v) = (*(int *)((((*(int *)((v0_3 + 0x28))) << 2) + 0xC8BFF74)));
    *(unsigned int *)((v0_3 + 0x24)) = (*(int *)((v0_3 + 0x28)));
    if ((((((struct o0_int *)0xC8BF120)->v)) == 1)) goto L_C2CD60C;
    v0_4 = *(int *)((v0_3 + 0x24));
    (((struct o24_uint *)0xC8BF120)->v) = v0_1;
    (((struct oC_uint *)0xC8BF120)->v) = (((((struct oC_int *)0xC8BF120)->v)) | ((int)v0_1 << (int)v0_4));
    (((struct o24_uint *)0xC8BF120)->v) = v0_0;
    v0_5 = (v0_4);
    L_C2CD60C:;
    kmySetDitherMode((*(int *)((v0_3 + 0x3C))), (*(int *)((v0_3 + 0x30))));
    kmySetPixelClippingX((*(int *)((v0_3 + 0x3C))), ((((struct o1A4_int *)(v0_3))->v)), (((((struct o1AC_int *)(v0_3))->v)) - 1));
    kmySetPixelClippingY((*(int *)((v0_3 + 0x3C))), ((((struct o1A8_int *)(v0_3))->v)), (((((struct o1B0_int *)(v0_3))->v)) - 1));
    if (((*(int *)((v0_3 + 0x8))) != 2)) goto L_C2CD658;
    if (((*(int *)0xC8BE7D4) != 0)) goto L_C2CD658;
    (((struct o828_uint *)(v0_2))->v) = (0x1B4 + v0_3);
    kmySetRegionArrayCallback((*(int *)((v0_3 + 0x3C))), 0xC2CD500);
    kmyGenerateRegionArray((*(int *)((v0_3 + 0x3C))), 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
    L_C2CD658:;
    if (((*(int *)((v0_2 + 0x2C))) == 0)) goto L_C2CD66E;
    v0_4 = (0x93C);
    if ((((((struct o93C_int *)(v0_2))->v)) == 0)) goto L_C2CD66E;
    *(unsigned int *)((v0_2 + v0_4)) = v0_0;
    kmBlankScreen(0x0);
    L_C2CD66E:;
    kmiSetupRender((*(int *)((v0_3 + 0x20))), (*(int *)((v0_3 + 0x3C))));
    *(unsigned int *)((((((((struct o938_int *)(v0_2))->v)) << 2) + (0x914 + v0_2)) + 0x0)) = (*(int *)0xFFD8000C);
    v0_4 = ((((*(int *)((v0_2 + 0x28))) == 0)));
    if ((v0_4)) goto L_C2CD73A;
    v0_4 = *(int *)((v0_3 + 0x28));
    v0_5 = kmyIsDisplayOddField();
    *(unsigned int *)(((0xC8BFF84 + (v0_4 << 2)) + 0x0)) = v0_5;
    *(unsigned int *)((v0_3 + 0x34)) = v0_5;
    kmySetFlickerFilterMode((*(int *)((v0_3 + 0x3C))), v0_5);
    L_C2CD73A:;
    kmyStartRender((*(int *)((v0_3 + 0x3C))), ((((struct o40_int *)(v0_3))->v)));
    (((struct o4_uint *)0xC8BFF98)->v) = v0_3;
    (((struct o0_uint *)0xC8BFF98)->v) = v0_1;
    *(unsigned int *)((v0_3 + 0x14)) = 0x5;
    (((struct o28_uint *)0xC8BFF98)->v) = ((((struct o82C_int *)(v0_2))->v));
    v0_4 = (v0_0);
    goto L_C2CD848;
}

int FUN_0c2cb900(int a4)
{
    int stk[2];
    register int t1;
    int t19;
    int t46;
    register int t55;
    register int t56;
    register int t75;
    register int t78;
    register int t79;
    register int t16;
    register int t17;
    register int t38;

    (((struct o10_uint *)0xC8D0C9C)->v) = (0xFFFF0000 & a4);
    *(unsigned int *)(((int)stk + 4)) = (kmiReadRegister(0x0));
    t1 = kmiReadRegister(0x4);
    (((struct o0_uint *)0xC8D0C9C)->v) = 0x5;
    if ((*(int *)(((int)stk + 4))) != 0x17FD11DB) {
        (((struct o0_uint *)0xC8D0C9C)->v) = 0x5;
        t16 = 0xDD18957;
        t17 = 0x0;
    } else {
        if (t1 == 1) {
            (((struct o0_uint *)0xC8D0C9C)->v) = 0x5;
            t16 = 0xDD18957;
            t17 = 0x0;
        } else {
            t16 = 0xDD18957;
            t17 = 0x0;
            if ((unsigned int)t1 >= (unsigned int)0x11) {
                (((struct o0_uint *)0xC8D0C9C)->v) = 0x6;
                t16 = 0x15D1C955;
                if ((0xFFFF0000 & a4) == 0) {
                    t16 = 0x15D1C951;
                }
                t17 = 0x800408;
            }
        }
    }
    t19 = *(int *)0xA05F689C;
    (((struct oC_uint *)0xC8D0C9C)->v) = t19;
    if (t19 != 0) {
        if (t19 != 1) {
            if (t19 != 2) {
                if ((t19 != 4) && ((t19 != 5) && (t19 != 6))) {
                    if (t19 != 8) {
                        if (t19 != 9) {
                            (((struct o4_uint *)0xC8D0C9C)->v) = 0xEF;
                        } else {
                            (((struct o4_uint *)0xC8D0C9C)->v) = 0x6F;
                        }
                    } else {
                        (((struct o4_uint *)0xC8D0C9C)->v) = 0x7F;
                    }
                    t38 = 0x101;
                } else {
                    (((struct o4_uint *)0xC8D0C9C)->v) = 0x7F;
                    t38 = 0x10101;
                }
            } else {
                (((struct o4_uint *)0xC8D0C9C)->v) = 0x3;
                t38 = 0x101;
            }
        } else {
            (((struct o4_uint *)0xC8D0C9C)->v) = 0x1;
            t38 = 0x0;
        }
    } else {
        (((struct o4_uint *)0xC8D0C9C)->v) = 0x0;
        t38 = 0x0;
    }
    kmiWriteRegister(0xA8, t16);
    kmiWriteRegister(0xA0, 0x20);
    kmiWriteRegister(0x8, 0x0);
    kmiWriteRegister(0xE4, 0x3);
    kmiWriteRegister(0x48, 0x9);
    kmyiWaitScanline0();
    t46 = kmiReadRegister(0x44);
    kmiWriteRegister(0x44, (0x800000 & t46));
    kmiWriteRegister(0x5C, 0x0);
    kmiWriteRegister(0x68, 0x2800000);
    kmiWriteRegister(0x6C, 0x1E00000);
    t55 = 0x110;
    t56 = 0x92039;
    if (((((struct o0_int *)0xC8D0C9C)->v)) == 6) {
        kmiWriteRegister(0x110, 0x93F39);
        t55 = 0x98;
        t56 = t17;
    }
    kmiWriteRegister(t55, t56);
    kmiWriteRegister(0x4C, 0xA0);
    kmiWriteRegister(0x74, 0x0);
    kmiWriteRegister(0x78, 0x3F800000);
    kmiWriteRegister(0x84, 0x0);
    kmiWriteRegister(0x30, t38);
    kmiWriteRegister(0xB0, 0x7F7F7F);
    kmiWriteRegister(0xB4, 0x7F7F7F);
    kmiWriteRegister(0xC0, 0x0);
    kmiWriteRegister(0xBC, 0xFFFFFFFF);
    kmiWriteRegister(0x80, 0x7);
    kmiWriteRegister(0x88, 0x3727C5A0);
    kmiWriteRegister(0x8C, 0x1203000);
    kmiWriteRegister(0x74, 0x1);
    if (((((struct o0_int *)0xC8D0C9C)->v)) != 6) {
        for (;;) {
        }
    }
    t75 = 0x7DF77;
    if (((((struct o0_int *)0xC8D0C9C)->v)) == 6) {
        t75 = 0x27DF77;
    }
    kmiWriteRegister(0x7C, t75);
    *(unsigned int *)(((int)stk + 0)) = 0x0;
    t78 = 0x0;
    t79 = 0xA5000000;
    for (;;) {
        kmyMemCopy(t79, ((int)stk + 0), 0x4);
        t78 = (t78 + 0x1);
        t79 = (t79 + 0x4);
        if ((int)t78 >= (int)0x200000) {
            break;
        }
    }
    return 0x0;
}

int FUN_0c1923d0(int a4)
{
    int stk[3];
    register int t0;
    register int t16;
    int t20;
    register int t26;
    register int t32;
    register int t34;
    register int t36;
    register int t39;
    register int t44;
    register int t48;
    register int t52;
    register int t53;
    register int t54;
    register int t55;
    register int t59;
    register int t61;
    register int t62;
    register int t64;
    register int t134;
    int t5;
    register int t6;
    register int t162;
    int t17;
    int t21;
    int t22;
    int t28;
    register int t56;
    int t57;
    register int t58;
    register int t73;
    register int t74;
    register int t75;
    register int t87;
    register int t100;
    register int t102;
    register int t114;
    register int t116;
    int t119;

    *(unsigned int *)(((int)stk + 8)) = a4;
    t0 = *(int *)0xC8ABB58;
    *(int *)((int)stk + 0) = 0xC8ABC00;
    (((struct o0_uint *)0xC8ABC00)->v) = (((((struct o0_int *)0xC8ABC00)->v)) + ((short)(FUN_0c1a02a6((*(int *)(((int)stk + 8))))) + 0x2));
    if (((*(int *)(((int)stk + 8))) != 0) && (t5 = *(int *)(((int)stk + 8)), t6 = *(short *)((t5 + 0x4)), (int)(unsigned short)t6 >= (int)0x4)) {
        *(unsigned char *)((((int)stk + 4) + 0x0)) = (*(signed char *)(((*(int *)(((*(int *)(((int)stk + 8))) + 0x0))) + 0x0)));
        *(unsigned char *)((((int)stk + 4) + 0x1)) = (*(signed char *)(((*(int *)(((*(int *)(((int)stk + 8))) + 0x0))) + 0x1)));
        *(unsigned short *)((((int)stk + 4) + 0x2)) = (FUN_0c19c916(((*(int *)(((*(int *)(((int)stk + 8))) + 0x0))) + 0x2)));
        t16 = *(short *)((((int)stk + 4) + 0x2));
        t20 = 0xFFFFFFFF;
        if (((unsigned short)t16 != 0xC021) && (t17 = (((struct o50_short *)(t0))->v), (t17 & 4) != 0)) {
            t20 = ((((struct o54_int *)(t0))->v));
        }
        t53 = 0x1;
        if ((((((unsigned short)t16 == 0xC021)) ? 1 : 0) == 0) && ((t21 = (((struct o50_short *)(t0))->v), (0x80 & t21) != 0) && (t22 = *(short *)(((int)stk + 6)), (int)(unsigned short)t22 < (int)0xFF))) {
            t53 = 0x0;
        }
        t26 = 0x4;
        if (t53 == 0) {
            t26 = 0x3;
        }
        t52 = 0x1;
        if ((((((unsigned short)t16 == 0xC021)) ? 1 : 0) == 0) && (t28 = (((struct o50_short *)(t0))->v), (t28 & 0x100) != 0)) {
            t52 = 0x0;
        }
        t32 = t26;
        if (t52 == 0) {
            t32 = (t26 - 2);
        }
        t34 = *(int *)(((int)stk + 8));
        *(unsigned short *)((t34 + 0x4)) = ((*(short *)((t34 + 0x4))) - (0x4 - t32));
        t36 = *(int *)(((int)stk + 8));
        *(unsigned int *)((t36 + 0x0)) = ((*(int *)((t36 + 0x0))) + (0x4 - t32));
        t39 = *(int *)(((*(int *)(((int)stk + 8))) + 0x0));
        t44 = t39;
        if (t52 != 0) {
            *(unsigned char *)((t39 + 0x0)) = (*(signed char *)((((int)stk + 4) + 0x0)));
            *(unsigned char *)(((t39 + 0x1) + 0x0)) = (*(signed char *)((((int)stk + 4) + 0x1)));
            t44 = ((t39 + 0x1) + 0x1);
        }
        t48 = t44;
        if (t53 != 0) {
            *(unsigned char *)((t44 + 0x0)) = ((unsigned int)(unsigned short)(*(short *)((((int)stk + 4) + 0x2))) >> 8);
            t48 = (t44 + 0x1);
        }
        *(unsigned char *)((t48 + 0x0)) = (*(short *)((((int)stk + 4) + 0x2)));
        (((struct o8_uint *)0xC8AFC38)->v) = 0xC8AFC58;
        (((struct o20_uchar *)0xC8AFC38)->v) = 0x7E;
        (((struct o4_uint *)0xC8ABC00)->v) = (((((struct o4_int *)0xC8ABC00)->v)) + 0x1);
        t54 = 0xFFFF;
        t55 = 0xC8AFC59;
        for (;;) {
            if (((((int)stk + 4) + 0x4) != 0) && ((t56 = *(int *)(((int)stk + 8)), t56 != 0) && (t57 = *(int *)(((int)stk + 8)), t58 = *(short *)((t57 + 0x4)), (int)(unsigned short)t58 > (int)0x1))) {
                t59 = *(int *)(((int)stk + 8));
                *(unsigned short *)(((0x4 + t59) + 0x0)) = ((*(short *)((0x4 + t59))) - 1);
                t61 = *(int *)(((int)stk + 8));
                t62 = *(int *)((t61 + 0x0));
                *(unsigned int *)((t61 + 0x0)) = (t62 + 0x1);
                t73 = (unsigned char)(*(signed char *)((((t62 + 0x1) - 1) + 0x0)));
                t74 = t52;
                t75 = t53;
            } else {
                t53 = 0x1;
                t52 = 0xC8ABC34;
                t64 = FUN_0c1a02cc((((int)stk + 4) + 0x4), t52, t53);
                t73 = 0xFFFFFFFF;
                if ((short)t64 != 1) {
                } else {
                    t73 = (unsigned char)(*(signed char *)0xC8ABC34);
                }
            }
            t52 = t74;
            t53 = t75;
            if (t73 == -1) {
                break;
            }
            t52 = (unsigned short)t54;
            t54 = (*(short *)((0xC20A808 + ((unsigned char)(t52 ^ t73) << 1))));
            t54 = (t54 ^ ((int)t52 >> 8));
            if ((int)t73 < (int)0x20) {
                if ((((int)0x1 << (int)t73) & t20) == 0) {
                    t87 = t73;
                    if ((t73 == 125) || (t73 == 126)) {
                        *(unsigned char *)((t55 + 0x0)) = 0x7D;
                        t55 = (t55 + 0x1);
                        t87 = (t73 ^ 0x20);
                    }
                } else {
                    *(unsigned char *)((t55 + 0x0)) = 0x7D;
                    t55 = (t55 + 0x1);
                    t87 = (t73 ^ 0x20);
                }
            } else {
                t87 = t73;
                if ((t73 == 125) || (t73 == 126)) {
                    *(unsigned char *)((t55 + 0x0)) = 0x7D;
                    t55 = (t55 + 0x1);
                    t87 = (t73 ^ 0x20);
                }
            }
            *(unsigned char *)((t55 + 0x0)) = t87;
            t55 = (t55 + 0x1);
        }
        if ((int)(unsigned char)(t54 ^ 0xFFFF) < (int)0x20) {
            if ((((int)0x1 << (int)(unsigned char)(t54 ^ 0xFFFF)) & t20) == 0) {
                t100 = t55;
                if (((unsigned char)(t54 ^ 0xFFFF) != 125) && ((unsigned char)(t54 ^ 0xFFFF) != 126)) {
                    t102 = (unsigned char)(t54 ^ 0xFFFF);
                } else {
                    *(unsigned char *)((t55 + 0x0)) = 0x7D;
                    t100 = (t55 + 0x1);
                    t102 = ((unsigned char)(t54 ^ 0xFFFF) ^ 0x20);
                }
            } else {
                *(unsigned char *)((t55 + 0x0)) = 0x7D;
                t100 = (t55 + 0x1);
                t102 = ((unsigned char)(t54 ^ 0xFFFF) ^ 0x20);
            }
        } else {
            t100 = t55;
            if (((unsigned char)(t54 ^ 0xFFFF) != 125) && ((unsigned char)(t54 ^ 0xFFFF) != 126)) {
                t102 = (unsigned char)(t54 ^ 0xFFFF);
            } else {
                *(unsigned char *)((t55 + 0x0)) = 0x7D;
                t100 = (t55 + 0x1);
                t102 = ((unsigned char)(t54 ^ 0xFFFF) ^ 0x20);
            }
        }
        *(unsigned char *)((t100 + 0x0)) = t102;
        if ((int)((unsigned int)(unsigned short)(t54 ^ 0xFFFF) >> 8) < (int)0x20) {
            if ((((int)0x1 << (int)((unsigned int)(unsigned short)(t54 ^ 0xFFFF) >> 8)) & t20) == 0) {
                t114 = (t100 + 0x1);
                if ((((unsigned int)(unsigned short)(t54 ^ 0xFFFF) >> 8) != 125) && (((unsigned int)(unsigned short)(t54 ^ 0xFFFF) >> 8) != 126)) {
                    t116 = ((unsigned int)(unsigned short)(t54 ^ 0xFFFF) >> 8);
                } else {
                    *(unsigned char *)(((t100 + 0x1) + 0x0)) = 0x7D;
                    t114 = ((t100 + 0x1) + 0x1);
                    t116 = (((unsigned int)(unsigned short)(t54 ^ 0xFFFF) >> 8) ^ 0x20);
                }
            } else {
                *(unsigned char *)(((t100 + 0x1) + 0x0)) = 0x7D;
                t114 = ((t100 + 0x1) + 0x1);
                t116 = (((unsigned int)(unsigned short)(t54 ^ 0xFFFF) >> 8) ^ 0x20);
            }
        } else {
            t114 = (t100 + 0x1);
            if ((((unsigned int)(unsigned short)(t54 ^ 0xFFFF) >> 8) != 125) && (((unsigned int)(unsigned short)(t54 ^ 0xFFFF) >> 8) != 126)) {
                t116 = ((unsigned int)(unsigned short)(t54 ^ 0xFFFF) >> 8);
            } else {
                *(unsigned char *)(((t100 + 0x1) + 0x0)) = 0x7D;
                t114 = ((t100 + 0x1) + 0x1);
                t116 = (((unsigned int)(unsigned short)(t54 ^ 0xFFFF) >> 8) ^ 0x20);
            }
        }
        *(unsigned char *)((t114 + 0x0)) = t116;
        *(unsigned char *)(((t114 + 0x1) + 0x0)) = 0x7E;
        (((struct oC_ushort *)0xC8AFC38)->v) = (((t114 + 0x1) + 0x1) - ((((struct o8_int *)0xC8AFC38)->v)));
        t162 = 0x0;
        if (((*(int *)0xC2A62B8) != 7) && (t119 = *(int *)0xC2A62B8, t119 != 0)) {
            if ((*(int *)0xC2AE778) == 0) {
                *(unsigned int *)0xC2AE778 = 0x1;
                memset(0xC8ABC35, 0x0, 0x2000);
                memset(0xC8ADC35, 0x0, 0x2000);
                (((struct o0_uint *)0xC8AFC38)->v) = 0xC8ABC35;
                (((struct o4_uint *)0xC8AFC38)->v) = 0xC8ADC35;
            }
            t134 = (((struct o0_int *)0xC8AFC38)->v);
            if ((unsigned int)((unsigned short)((((struct oC_short *)0xC8AFC38)->v)) + t134) < (unsigned int)0xC8ADC35) {
                FUN_0c187a88(t134, ((((struct o8_int *)0xC8AFC38)->v)), (unsigned short)((((struct oC_short *)0xC8AFC38)->v)));
                (((struct o0_uint *)0xC8AFC38)->v) = (((((struct o0_int *)0xC8AFC38)->v)) + (unsigned short)((((struct oC_short *)0xC8AFC38)->v)));
            }
            t162 = (FUN_0c1920b0(((((struct oC_short *)0xC8AFC38)->v)), ((((struct o8_int *)0xC8AFC38)->v))));
        }
    } else {
        (((struct o10_ushort *)0xC8ABC00)->v) = (((((struct o10_short *)0xC8ABC00)->v)) + 0x1);
        t162 = 0xFFFFFFFF;
    }
    return t162;
}

int FUN_0c194a80(int a4, int a5, int a6)
{
    int stk[3];

    register int R1;
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
    v0_5 = a4;
    v0_6 = a5;
    v0_7 = a6;
    *(unsigned int *)(((int)stk + 8)) = v0_5;
    FUN_0c193da4();
    *(unsigned int *)0xC8A2E68 = 0x0;
    v0_1 = FUN_0c185560((*(int *)(((int)stk + 8))));
    v0_2 = v0_6;
    v0_0 = (v0_7);
    v0_3 = (0xC193DAE);
    v0_6 = ((short)v0_1);
    v0_3 = v0_2;
    if (((int)(short)v0_1 < 0)) goto L_C194B08;
    *(unsigned int *)0xC8B57A0 = ((v0_6 * 0x34) + 0xC8A2C60);
    v0_5 = *(short *)((((v0_6 * 0x34) + 0xC8A2C60) + 0xE));
    v0_7 = (v0_5);
    v0_1 = (0xC8A2C60);
    v0_2 = (0x34);
    v0_4 = (0xC8B57A0);
    v0_6 = (((v0_6 * 0x34) + 0xC8A2C60));
    if ((v0_5 != 1)) goto L_C194AC8;
    L_C194D2C:;
    *(unsigned int *)0xC8A2E68 = 0x2D;
    L_C194D32:;
    FUN_0c193dae();
    v0_7 = (0xFFFFFFFF);
    L_C194D38:;
    return v0_7;
    L_C194AC8:;
    if ((v0_7 == 2)) goto L_C194AD8;
    if ((v0_7 != 3)) goto L_C194AD4;
    goto L_C194D2C;
    L_C194AD4:;
    goto L_C194D2C;
    L_C194AD8:;
    v0_5 = *(short *)((v0_6 + 0x10));
    v0_7 = (v0_5);
    if ((v0_5 == 1)) goto L_C194B02;
    if ((v0_7 != 2)) goto L_C194AE6;
    goto L_C194D2C;
    L_C194AE6:;
    if ((v0_7 != 3)) goto L_C194AEE;
    goto L_C194D2C;
    L_C194AEE:;
    if ((v0_7 != 4)) goto L_C194AF6;
    goto L_C194D2C;
    L_C194AF6:;
    if ((v0_7 != 5)) goto L_C194AFE;
    goto L_C194D2C;
    L_C194AFE:;
    goto L_C194D2C;
    L_C194B02:;
    if (!(((*(short *)((v0_6 + 0x6))) == 4))) goto L_C194B08;
    v0_7 = *(short *)((v0_6 + 0x2));
    v0_5 = ((short)v0_7);
    v0_7 = (v0_7);
    if ((((((struct o32_short *)(v0_6))->v)) == 1)) goto L_C194B22;
    v0_7 = FUN_0c1941e0(v0_5, ((int)stk + 0), (((int)stk + 0) + 0x4));
    v0_5 = ((short)v0_7);
    v0_6 = (v0_7);
    if (((int)(short)v0_7 >= 0)) goto L_C194CAC;
    v0_7 = (v0_5);
    if ((v0_5 == -4)) goto L_C194C9C;
    if ((v0_7 == -1)) goto L_C194CA0;
    *(unsigned int *)0xC8A2E68 = 0xFFFFFFFF;
    goto L_C194D32;
    L_C194B08:;
    v0_0 = (0x26);
    L_C194B0A:;
    *(unsigned int *)0xC8A2E68 = v0_0;
    goto L_C194D32;
    L_C194CA0:;
    v0_0 = (0x2A);
    goto L_C194B0A;
    L_C194C9C:;
    v0_0 = (0x26);
    goto L_C194B0A;
    L_C194CAC:;
    v0_7 = FUN_0c185600();
    v0_5 = ((short)v0_7);
    if (!(((int)(short)v0_7 >= 0))) goto L_C194CB8;
    *(unsigned short *)((((v0_5 * v0_2) + v0_1) + 0x6)) = 0x5;
    *(unsigned short *)((((v0_5 * v0_2) + v0_1) + 0x8)) = 0x1;
    *(unsigned short *)((((v0_5 * v0_2) + v0_1) + 0xC)) = 0x1;
    *(unsigned short *)((((v0_5 * v0_2) + v0_1) + 0x0)) = (v0_5 + 0x1);
    *(unsigned short *)((((v0_5 * v0_2) + v0_1) + 0x2)) = v0_6;
    *(unsigned short *)((((v0_5 * v0_2) + v0_1) + 0xE)) = (*(short *)(((*(int *)((v0_4 + 0x0))) + 0xE)));
    *(unsigned short *)((((v0_5 * v0_2) + v0_1) + 0x10)) = (*(short *)(((*(int *)((v0_4 + 0x0))) + 0x10)));
    *(unsigned short *)((((v0_5 * v0_2) + v0_1) + 0x12)) = (*(short *)(((*(int *)((v0_4 + 0x0))) + 0x12)));
    *(unsigned int *)((v0_0 + 0x0)) = 0x10;
    *(unsigned short *)((v0_3 + 0x0)) = 0x2;
    *(unsigned short *)((v0_3 + 0x2)) = (FUN_0c185d50((*(short *)(((int)stk + 4)))));
    *(unsigned int *)((v0_3 + 0x4)) = (FUN_0c185d00((*(int *)(((int)stk + 0)))));
    FUN_0c193cd2((((v0_5 * v0_2) + v0_1) + 0x1C), ((*(int *)((v0_4 + 0x0))) + 0x1C), 0x10);
    v0_0 = *(int *)((v0_4 + 0x0));
    (((struct o2E_uchar *)(((v0_5 * v0_2) + v0_1)))->v) = (*(signed char *)(((v0_0 + 0x2E) + 0x0)));
    *(unsigned char *)(((((v0_5 * v0_2) + v0_1) + 0x2E) + 0x1)) = (*(signed char *)(((v0_0 + 0x2E) + 0x1)));
    *(unsigned char *)(((((v0_5 * v0_2) + v0_1) + 0x2E) + 0x2)) = (*(signed char *)(((v0_0 + 0x2E) + 0x2)));
    *(unsigned char *)(((((v0_5 * v0_2) + v0_1) + 0x2E) + 0x3)) = (*(signed char *)(((v0_0 + 0x2E) + 0x3)));
    *(unsigned char *)(((((v0_5 * v0_2) + v0_1) + 0x2E) + 0x4)) = (*(signed char *)(((v0_0 + 0x2E) + 0x4)));
    *(unsigned char *)(((((v0_5 * v0_2) + v0_1) + 0x2E) + 0x5)) = (*(signed char *)(((v0_0 + 0x2E) + 0x5)));
    v0_1 = ((v0_5 + 0x1));
    goto L_C194D24;
    L_C194CB8:;
    *(unsigned int *)0xC8A2E68 = 0x17;
    goto L_C194D32;
    L_C194D24:;
    FUN_0c193dae();
    v0_7 = ((short)v0_1);
    goto L_C194D38;
    L_C194B22:;
    v0_8 = *(short *)((v0_6 + 0x4));
    v0_7 = (v0_8);
    if ((v0_8 == -1)) goto L_C194B2C;
    if (((int)v0_7 < 0)) goto L_C194C78;
    *(unsigned int *)((v0_0 + 0x0)) = 0x10;
    v0_5 = FUN_0c18558a((*(short *)(((*(int *)((v0_4 + 0x0))) + 0x4))));
    v0_0 = (v0_3);
    v0_6 = ((short)v0_5);
    if (((int)(short)v0_5 < 0)) goto L_C194C78;
    L_C194C5A:;
    *(unsigned short *)((v0_0 + 0x0)) = 0x2;
    *(unsigned short *)((v0_0 + 0x2)) = (*(short *)((((v0_6 * v0_2) + v0_1) + 0x14)));
    *(unsigned int *)((v0_0 + 0x4)) = (*(int *)((((v0_6 * v0_2) + v0_1) + 0x18)));
    *(unsigned short *)(((*(int *)((v0_4 + 0x0))) + 0x4)) = 0xFFFFFFFF;
    FUN_0c193dae();
    v0_7 = ((*(short *)((((v0_6 * v0_2) + v0_1) + 0x0))));
    goto L_C194D38;
    L_C194C78:;
    v0_0 = (0x23);
    goto L_C194B0A;
    L_C194B2C:;
    *(unsigned short *)((v0_6 + 0x4)) = 0xFFFFFFFE;
    v0_5 = FUN_0c19424e(v0_5, ((int)stk + 0), (((int)stk + 0) + 0x4));
    v0_6 = (v0_5);
    if (((short)v0_5 != -1)) goto L_C194B6C;
    if (((int)(*(short *)(((*(int *)((v0_4 + 0x0))) + 0x4))) >= 0)) goto L_C194B4E;
    goto L_C194C78;
    L_C194B4E:;
    *(unsigned int *)((v0_0 + 0x0)) = 0x10;
    v0_5 = FUN_0c18558a((*(short *)(((*(int *)((v0_4 + 0x0))) + 0x4))));
    v0_0 = (v0_3);
    v0_6 = ((short)v0_5);
    if (((int)(short)v0_5 < 0)) goto L_C194B68;
    goto L_C194C5A;
    L_C194B68:;
    goto L_C194C78;
    L_C194B6C:;
    if (((int)(short)v0_6 >= 0)) goto L_C194B76;
    goto L_C194C78;
    L_C194B76:;
    v0_7 = FUN_0c185600();
    v0_5 = ((short)v0_7);
    if (((int)(short)v0_7 >= 0)) goto L_C194B86;
    goto L_C194CB8;
    L_C194B86:;
    *(unsigned short *)((((v0_5 * v0_2) + v0_1) + 0x6)) = 0x5;
    *(unsigned short *)((((v0_5 * v0_2) + v0_1) + 0x8)) = 0x1;
    *(unsigned short *)((((v0_5 * v0_2) + v0_1) + 0xC)) = 0x1;
    *(unsigned short *)((((v0_5 * v0_2) + v0_1) + 0x0)) = (v0_5 + 0x1);
    *(unsigned short *)((((v0_5 * v0_2) + v0_1) + 0x2)) = v0_6;
    *(unsigned short *)((((v0_5 * v0_2) + v0_1) + 0xE)) = (*(short *)(((*(int *)((v0_4 + 0x0))) + 0xE)));
    *(unsigned short *)((((v0_5 * v0_2) + v0_1) + 0x10)) = (*(short *)(((*(int *)((v0_4 + 0x0))) + 0x10)));
    *(unsigned short *)((((v0_5 * v0_2) + v0_1) + 0x12)) = (*(short *)(((*(int *)((v0_4 + 0x0))) + 0x12)));
    *(unsigned int *)((v0_0 + 0x0)) = 0x10;
    *(unsigned short *)(((int)stk + 0)) = 0x2;
    *(unsigned short *)((v0_3 + 0x2)) = (*(short *)(((int)stk + 4)));
    *(unsigned int *)((v0_3 + 0x4)) = (*(int *)(((int)stk + 0)));
    FUN_0c193cd2((((v0_5 * v0_2) + v0_1) + 0x1C), ((*(int *)((v0_4 + 0x0))) + 0x1C), 0x10);
    v0_0 = *(int *)((v0_4 + 0x0));
    (((struct o2E_uchar *)(((v0_5 * v0_2) + v0_1)))->v) = (*(signed char *)(((v0_0 + 0x2E) + 0x0)));
    *(unsigned char *)(((((v0_5 * v0_2) + v0_1) + 0x2E) + 0x1)) = (*(signed char *)(((v0_0 + 0x2E) + 0x1)));
    *(unsigned char *)(((((v0_5 * v0_2) + v0_1) + 0x2E) + 0x2)) = (*(signed char *)(((v0_0 + 0x2E) + 0x2)));
    *(unsigned char *)(((((v0_5 * v0_2) + v0_1) + 0x2E) + 0x3)) = (*(signed char *)(((v0_0 + 0x2E) + 0x3)));
    *(unsigned char *)(((((v0_5 * v0_2) + v0_1) + 0x2E) + 0x4)) = (*(signed char *)(((v0_0 + 0x2E) + 0x4)));
    *(unsigned char *)(((((v0_5 * v0_2) + v0_1) + 0x2E) + 0x5)) = (*(signed char *)(((v0_0 + 0x2E) + 0x5)));
    *(unsigned short *)(((*(int *)((v0_4 + 0x0))) + 0x4)) = 0xFFFFFFFF;
    v0_1 = ((v0_5 + 0x1));
    goto L_C194D24;
}

int kmiCallbackEndOf(int a4, int a5, int a6, int a7)
{
    int t18;

    register int R1;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    v0_4 = a4;
    v0_2 = a5;
    v0_5 = a6;
    v0_0 = (0xC2DF460);
    if (((*(int *)((v0_4 + 0x0))) != 17)) goto L_C2DEFF4;
    v0_1 = ((*(int *)((v0_0 + 0x18))));
    L_C2DEFF6:;
    if (!((v0_1 != 0))) goto L_C2DF27C;
    v0_2 = *(int *)((v0_4 + 0x0));
    v0_3 = (v0_2);
    v0_4 = (0xC2F1EC0);
    if ((v0_2 == 17)) goto L_C2DF026;
    if ((v0_3 == 18)) goto L_C2DF060;
    if ((v0_3 == 19)) goto L_C2DF066;
    if ((v0_3 == 25)) goto L_C2DF070;
    if ((v0_3 == 24)) goto L_C2DF076;
    if ((v0_3 == 23)) goto L_C2DF07C;
    if ((v0_3 == 22)) goto L_C2DF082;
    if ((v0_3 == 21)) goto L_C2DF0C0;
    goto L_C2DF0CA;
    L_C2DF27C:;
    return 0x1;
    L_C2DF0CA:;
    v0_3 = *(short *)((v0_1 + 0x1C));
    t18 = *(short *)((v0_1 + 0x1E));
    v0_2 = ((unsigned short)(v0_3 & t18));
    if (((unsigned short)(v0_3 & t18) == (unsigned short)(*(short *)((v0_1 + 0x1C))))) goto L_C2DF0E4;
    goto L_C2DF27C;
    L_C2DF0E4:;
    v0_4 = (0x0);
    v0_5 = (0x8);
    if (!(((*(int *)((v0_1 + 0x8))) == 4))) goto L_C2DF1E0;
    if (((unsigned int)(*(int *)((v0_1 + 0x30))) > (unsigned int)0x0)) goto L_C2DF0FE;
    goto L_C2DF1E0;
    L_C2DF1E0:;
    v0_6 = *(int *)((v0_1 + 0x20));
    v0_3 = (v0_6);
    if ((v0_6 == 0)) goto L_C2DF1F2;
    if ((v0_3 == 1)) goto L_C2DF20E;
    if (!((v0_3 == 2))) goto L_C2DF244;
    (((struct o3C_ushort *)(v0_0))->v) = (((((struct o3C_short *)(v0_0))->v)) - 1);
    (((struct o3A_ushort *)(v0_0))->v) = (((((struct o3A_short *)(v0_0))->v)) + 0x1);
    (((struct o3A_ushort *)(v0_0))->v) = (((((struct o3A_short *)(v0_0))->v)) & 0x1F);
    *(unsigned int *)((v0_0 + 0x28)) = v0_4;
    v0_3 = (0x3A);
    goto L_C2DF244;
    L_C2DF244:;
    if (((v0_5 & (*(int *)((v0_1 + 0x4)))) == 0)) goto L_C2DF24E;
    *(unsigned int *)((v0_0 + 0x1C)) = v0_4;
    L_C2DF250:;
    *(unsigned int *)((v0_1 + 0x24)) = ((int)((unsigned int)((((((*(int *)((v0_1 + 0x24))) - (*(int *)0xFFD8000C)) << 2) << 2) << 2) << 1) / (unsigned int)0x64));
    *(unsigned int *)((v0_1 + 0x28)) = v0_4;
    if (((*(int *)((v0_1 + 0x18))) == 0)) goto L_C2DF276;
    v0_0 = ((int (*)(int, int, int, int))((*(int *)((v0_1 + 0x18)))))(v0_1, v0_2, v0_5, a7);
    L_C2DF276:;
    kmiStartupDMA();
    goto L_C2DF27C;
    L_C2DF24E:;
    *(unsigned int *)((v0_0 + 0x18)) = v0_4;
    goto L_C2DF250;
    L_C2DF20E:;
    (((struct o36_ushort *)(v0_0))->v) = (((((struct o36_short *)(v0_0))->v)) - 1);
    (((struct o34_ushort *)(v0_0))->v) = (((((struct o34_short *)(v0_0))->v)) + 0x1);
    (((struct o34_ushort *)(v0_0))->v) = (((((struct o34_short *)(v0_0))->v)) & 0x1F);
    *(unsigned int *)((v0_0 + 0x24)) = v0_4;
    v0_3 = (0x34);
    goto L_C2DF244;
    L_C2DF1F2:;
    (((struct o30_ushort *)(v0_0))->v) = (((((struct o30_short *)(v0_0))->v)) - 1);
    (((struct o2E_ushort *)(v0_0))->v) = (((((struct o2E_short *)(v0_0))->v)) + 0x1);
    (((struct o2E_ushort *)(v0_0))->v) = (((((struct o2E_short *)(v0_0))->v)) & 0x1F);
    *(unsigned int *)((v0_0 + 0x20)) = v0_4;
    v0_3 = (0x2E);
    goto L_C2DF244;
    L_C2DF0FE:;
    v0_2 = (0x1);
    if (((v0_5 & (*(int *)((v0_1 + 0x4)))) == 0)) goto L_C2DF152;
    *(unsigned int *)((v0_1 + 0x30)) = ((*(int *)((v0_1 + 0x30))) - 1);
    *(unsigned int *)((v0_1 + 0x10)) = ((*(int *)((v0_1 + 0x10))) + (*(int *)((v0_1 + 0x34))));
    *(unsigned int *)((v0_1 + 0x14)) = ((*(int *)((v0_1 + 0x14))) + (*(int *)((v0_1 + 0x38))));
    *(unsigned short *)((v0_1 + 0x1E)) = v0_4;
    *(volatile int *)0xFFA0002C;
    (((struct oC_uint *)0xFFA00020)->v) = v0_4;
    (((struct o0_uint *)0xFFA00020)->v) = (*(int *)((v0_1 + 0x10)));
    (((struct o8_uint *)0xFFA00020)->v) = ((unsigned int)((unsigned int)((unsigned int)(*(int *)((v0_1 + 0xC))) >> 2) >> 2) >> 1);
    (((struct oC_uint *)0xFFA00020)->v) = 0x12C1;
    (((struct o20_uint *)0xFFA00020)->v) = 0x8201;
    (((struct o0_uint *)0xA05F6800)->v) = (*(int *)((v0_1 + 0x14)));
    (((struct o4_uint *)0xA05F6800)->v) = (*(int *)((v0_1 + 0xC)));
    v0_0 = (0xA05F6808);
    L_C2DF194:;
    *(unsigned int *)((v0_0 + 0x0)) = v0_2;
    goto L_C2DF27C;
    L_C2DF152:;
    *(unsigned int *)((v0_1 + 0x30)) = ((*(int *)((v0_1 + 0x30))) - 1);
    *(unsigned int *)((v0_1 + 0x10)) = ((*(int *)((v0_1 + 0x10))) + (*(int *)((v0_1 + 0x34))));
    *(unsigned int *)((v0_1 + 0x14)) = ((*(int *)((v0_1 + 0x14))) + (*(int *)((v0_1 + 0x38))));
    *(unsigned short *)((v0_1 + 0x1E)) = v0_4;
    *(unsigned int *)0xA05F7C80 = 0x6702007F;
    (((struct o0_uint *)0xA05F7C00)->v) = (*(int *)((v0_1 + 0x14)));
    (((struct o4_uint *)0xA05F7C00)->v) = (*(int *)((v0_1 + 0x10)));
    (((struct o8_uint *)0xA05F7C00)->v) = (*(int *)((v0_1 + 0xC)));
    (((struct oC_uint *)0xA05F7C00)->v) = (*(int *)((v0_1 + 0x3C)));
    (((struct o10_uint *)0xA05F7C00)->v) = v0_4;
    (((struct o14_uint *)0xA05F7C00)->v) = v0_2;
    v0_0 = (0xA05F7C18);
    goto L_C2DF194;
    L_C2DF0C0:;
    v0_3 = (((*(short *)((v0_1 + 0x1E))) | 0x10));
    L_C2DF0C4:;
    *(unsigned short *)((v0_1 + 0x1E)) = v0_3;
    kmiGetITPCurrent((*(int *)((v0_1 + 0x30))));
    goto L_C2DF0CA;
    L_C2DF082:;
    v0_3 = (((*(short *)((v0_1 + 0x1E))) | 0x8));
    goto L_C2DF0C4;
    L_C2DF07C:;
    v0_3 = (((*(short *)((v0_1 + 0x1E))) | 0x4));
    goto L_C2DF0C4;
    L_C2DF076:;
    v0_3 = (((*(short *)((v0_1 + 0x1E))) | 0x2));
    goto L_C2DF0C4;
    L_C2DF070:;
    v0_3 = (((*(short *)((v0_1 + 0x1E))) | 0x1));
    goto L_C2DF0C4;
    L_C2DF066:;
    v0_2 = (0x100);
    L_C2DF068:;
    *(unsigned short *)((v0_1 + 0x1E)) = ((*(short *)((v0_1 + 0x1E))) | v0_2);
    goto L_C2DF0CA;
    L_C2DF060:;
    v0_2 = (0x8000);
    goto L_C2DF068;
    L_C2DF026:;
    v0_2 = (0x4000);
    goto L_C2DF068;
    L_C2DEFF4:;
    v0_1 = ((*(int *)((v0_0 + 0x1C))));
    goto L_C2DEFF6;
}
