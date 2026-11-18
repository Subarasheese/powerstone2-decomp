/* Straight-line functions with calls and guards (batch gen_n): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o0_ushort { unsigned short v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_uchar { char p[0x10]; unsigned char v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o10_ushort { char p[0x10]; unsigned short v; };
struct o10B4_int { char p[0x10B4]; int v; };
struct o10C4_int { char p[0x10C4]; int v; };
struct o10CC_int { char p[0x10CC]; int v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o14_ushort { char p[0x14]; unsigned short v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o16_ushort { char p[0x16]; unsigned short v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o18_int { char p[0x18]; int v; };
struct o18_uchar { char p[0x18]; unsigned char v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o19_uchar { char p[0x19]; unsigned char v; };
struct o1A4_uint { char p[0x1A4]; unsigned int v; };
struct o1A8_uint { char p[0x1A8]; unsigned int v; };
struct o1AC_uint { char p[0x1AC]; unsigned int v; };
struct o1B0_uint { char p[0x1B0]; unsigned int v; };
struct o1B4_uint { char p[0x1B4]; unsigned int v; };
struct o1B8_uint { char p[0x1B8]; unsigned int v; };
struct o1BC_uint { char p[0x1BC]; unsigned int v; };
struct o1C_int { char p[0x1C]; int v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o1C0_uint { char p[0x1C0]; unsigned int v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o2_ushort { char p[0x2]; unsigned short v; };
struct o20_int { char p[0x20]; int v; };
struct o20_uchar { char p[0x20]; unsigned char v; };
struct o21_uchar { char p[0x21]; unsigned char v; };
struct o22_uchar { char p[0x22]; unsigned char v; };
struct o23_uchar { char p[0x23]; unsigned char v; };
struct o24_int { char p[0x24]; int v; };
struct o24_uchar { char p[0x24]; unsigned char v; };
struct o25_uchar { char p[0x25]; unsigned char v; };
struct o26_uchar { char p[0x26]; unsigned char v; };
struct o27_uchar { char p[0x27]; unsigned char v; };
struct o28_int { char p[0x28]; int v; };
struct o28_uchar { char p[0x28]; unsigned char v; };
struct o29_uchar { char p[0x29]; unsigned char v; };
struct o2A_uchar { char p[0x2A]; unsigned char v; };
struct o2B_uchar { char p[0x2B]; unsigned char v; };
struct o2C_int { char p[0x2C]; int v; };
struct o2C_uchar { char p[0x2C]; unsigned char v; };
struct o2D_uchar { char p[0x2D]; unsigned char v; };
struct o2E_uchar { char p[0x2E]; unsigned char v; };
struct o2F_uchar { char p[0x2F]; unsigned char v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o30_int { char p[0x30]; int v; };
struct o30_uchar { char p[0x30]; unsigned char v; };
struct o31_uchar { char p[0x31]; unsigned char v; };
struct o32_short { char p[0x32]; short v; };
struct o32_uchar { char p[0x32]; unsigned char v; };
struct o33_uchar { char p[0x33]; unsigned char v; };
struct o34_uchar { char p[0x34]; unsigned char v; };
struct o35_uchar { char p[0x35]; unsigned char v; };
struct o36_uchar { char p[0x36]; unsigned char v; };
struct o37_uchar { char p[0x37]; unsigned char v; };
struct o38_uchar { char p[0x38]; unsigned char v; };
struct o39_uchar { char p[0x39]; unsigned char v; };
struct o3A_uchar { char p[0x3A]; unsigned char v; };
struct o3B_uchar { char p[0x3B]; unsigned char v; };
struct o3C_uchar { char p[0x3C]; unsigned char v; };
struct o3D_uchar { char p[0x3D]; unsigned char v; };
struct o3E_uchar { char p[0x3E]; unsigned char v; };
struct o3F_uchar { char p[0x3F]; unsigned char v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
struct o40_uchar { char p[0x40]; unsigned char v; };
struct o40_uint { char p[0x40]; unsigned int v; };
struct o41_uchar { char p[0x41]; unsigned char v; };
struct o5_uchar { char p[0x5]; unsigned char v; };
struct o6_uchar { char p[0x6]; unsigned char v; };
struct o6_ushort { char p[0x6]; unsigned short v; };
struct o7_uchar { char p[0x7]; unsigned char v; };
struct o8_uchar { char p[0x8]; unsigned char v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o9_uchar { char p[0x9]; unsigned char v; };
struct oA_uchar { char p[0xA]; unsigned char v; };
struct oB_uchar { char p[0xB]; unsigned char v; };
struct oC_uchar { char p[0xC]; unsigned char v; };
struct oD_uchar { char p[0xD]; unsigned char v; };
struct oE_uchar { char p[0xE]; unsigned char v; };
struct oE_ushort { char p[0xE]; unsigned short v; };
struct oFCC_int { char p[0xFCC]; int v; };
struct oFCC_uint { char p[0xFCC]; unsigned int v; };
struct oFD8_int { char p[0xFD8]; int v; };
struct oFD8_uint { char p[0xFD8]; unsigned int v; };
struct oFDC_int { char p[0xFDC]; int v; };
struct oFDC_uint { char p[0xFDC]; unsigned int v; };
struct oFE0_int { char p[0xFE0]; int v; };
struct oFE0_uint { char p[0xFE0]; unsigned int v; };
int FUN_0c185560(int);
int FUN_0c185686(int, int, int);
int FUN_0c185774(int, int, int);
int FUN_0c193d4a(int);
int FUN_0c193da4(void);
int FUN_0c193dae(void);
int FUN_0c1944e0(int, int, int);
int FUN_0c1945a0(int, int, int);
int FUN_0c2d2c4e(void);
int FUN_0c2ec410(int, int);
int FUN_0c2ec430(int);
extern int FUN_0c2ed220();
int FUN_0c2ed43a(int);
int FUN_0c2edece(int);
int FUN_0c2edfa0(int);
int FUN_0c2ee1da(int);
int FUN_0c2f1fc0(int, int, int);
int FUN_0c2f2074(int, int, int);
int FUN_0c2f8c66(void);
int FUN_0c2f8c72(void);
int FUN_0c2f8fc0(int, int, int, int);
int FUN_0c2f9168(int, int, int, int);
int FUN_0c2f92c0(int);
int FUN_0c2f9360(int);
int FUN_0c2fe108(int, int);
int kmiFLWCTRLRotateReadyQueue(int);
int kmyGetDMAHANDLE(int);
int kmyRequestCallback(int);
int kmyRequestDMA(int);
int kmySetDMACallback(int, int);
int kmySetDMAValue(int, int);
int kmySetTADMA(int, int, int, int, int, int);
int mpdrv_insertnop(int);
int mpdrv_v2p(int);
void FUN_0c2fbc7c(void);
int mpdrv_setcmd(int a4, int a5, int a6, int a7, int a8, int a9);
int FUN_0c2edc7a(int a4, int a5, int a6);
int FUN_0c2f8d7c(int a4, int a5, int a6, int a7, int a8, int a9);
int FUN_0c2ccfa0(int a4, int a5, int a6, int a7);
int FUN_0c1864e0(int a4, int a5, int a6);
int FUN_0c2fdee4(void);

void FUN_0c2fbc7c(void)
{
    register int t0;
    register int t1;

    (((struct o14_ushort *)0xC8DE900)->v) = 0x0;
    (((struct o0_uint *)0xC8DE900)->v) = 0xC8DD900;
    t0 = 0xC8DD900;
    t1 = 0x1000;
    for (;;) {
        t1 = (t1 - 0x1);
        *(unsigned char *)((t0 + 0x0)) = 0x0;
        t0 = (t0 + 0x1);
        if (t1 == 0) {
            break;
        }
    }
    t0 = 0x1000;
    t1 = 0xC8DE91A;
    for (;;) {
        t0 = (t0 - 0x1);
        *(unsigned char *)((t1 + 0x0)) = 0x0;
        t1 = (t1 + 0x1);
        if (t0 == 0) {
            break;
        }
    }
    *(unsigned short *)0xC8DF92C = 0x0;
    t0 = 0x40C;
    t1 = 0xC8DF930;
    for (;;) {
        t0 = (t0 - 0x1);
        *(unsigned char *)((t1 + 0x0)) = 0x0;
        t1 = (t1 + 0x1);
        if (t0 == 0) {
            break;
        }
    }
    (((struct o0_ushort *)0xC8DFD48)->v) = 0x0;
    (((struct o2_ushort *)0xC8DFD48)->v) = 0x0;
    (((struct o4_uchar *)0xC8DFD48)->v) = 0x0;
    (((struct o5_uchar *)0xC8DFD48)->v) = 0x0;
    (((struct o6_uchar *)0xC8DFD48)->v) = 0x0;
    (((struct o7_uchar *)0xC8DFD48)->v) = 0x0;
    (((struct o10_ushort *)0xC8DFD48)->v) = 0x0;
    (((struct o0_ushort *)0xC8DFF6C)->v) = 0x0;
    (((struct o2_uchar *)0xC8DFF6C)->v) = 0x0;
    (((struct o3_uchar *)0xC8DFF6C)->v) = 0x0;
    (((struct o4_uchar *)0xC8DFF6C)->v) = 0x0;
    (((struct o5_uchar *)0xC8DFF6C)->v) = 0x0;
    (((struct o6_uchar *)0xC8DFF6C)->v) = 0x0;
    (((struct o7_uchar *)0xC8DFF6C)->v) = 0x0;
    (((struct o8_uchar *)0xC8DFF6C)->v) = 0x0;
    (((struct o9_uchar *)0xC8DFF6C)->v) = 0x0;
    (((struct oA_uchar *)0xC8DFF6C)->v) = 0x0;
    (((struct oB_uchar *)0xC8DFF6C)->v) = 0x0;
    (((struct oC_uchar *)0xC8DFF6C)->v) = 0x0;
    (((struct oD_uchar *)0xC8DFF6C)->v) = 0x0;
    (((struct oE_uchar *)0xC8DFF6C)->v) = 0x0;
    (((struct o10_uint *)0xC8DFF6C)->v) = 0x0;
    (((struct o14_uint *)0xC8DFF6C)->v) = 0x0;
    (((struct o18_uint *)0xC8DFF6C)->v) = 0x0;
    (((struct o1C_uint *)0xC8DFF6C)->v) = 0x0;
    (((struct o20_uchar *)0xC8DFF6C)->v) = 0x0;
    (((struct o21_uchar *)0xC8DFF6C)->v) = 0x0;
    (((struct o22_uchar *)0xC8DFF6C)->v) = 0x0;
    (((struct o23_uchar *)0xC8DFF6C)->v) = 0x0;
    (((struct o24_uchar *)0xC8DFF6C)->v) = 0x0;
    (((struct o25_uchar *)0xC8DFF6C)->v) = 0x0;
    (((struct o26_uchar *)0xC8DFF6C)->v) = 0x0;
    (((struct o27_uchar *)0xC8DFF6C)->v) = 0x0;
    (((struct o28_uchar *)0xC8DFF6C)->v) = 0x0;
    (((struct o29_uchar *)0xC8DFF6C)->v) = 0x0;
    (((struct o2A_uchar *)0xC8DFF6C)->v) = 0x0;
    (((struct o2B_uchar *)0xC8DFF6C)->v) = 0x0;
    (((struct o2C_uchar *)0xC8DFF6C)->v) = 0x0;
    (((struct o2D_uchar *)0xC8DFF6C)->v) = 0x0;
    (((struct o2E_uchar *)0xC8DFF6C)->v) = 0x0;
    (((struct o2F_uchar *)0xC8DFF6C)->v) = 0x0;
    (((struct o30_uchar *)0xC8DFF6C)->v) = 0x0;
    (((struct o31_uchar *)0xC8DFF6C)->v) = 0x0;
    (((struct o32_uchar *)0xC8DFF6C)->v) = 0x0;
    (((struct o33_uchar *)0xC8DFF6C)->v) = 0x0;
    (((struct o34_uchar *)0xC8DFF6C)->v) = 0x0;
    (((struct o35_uchar *)0xC8DFF6C)->v) = 0x0;
    (((struct o36_uchar *)0xC8DFF6C)->v) = 0x0;
    (((struct o37_uchar *)0xC8DFF6C)->v) = 0x0;
    (((struct o38_uchar *)0xC8DFF6C)->v) = 0x0;
    (((struct o39_uchar *)0xC8DFF6C)->v) = 0x0;
    (((struct o3A_uchar *)0xC8DFF6C)->v) = 0x0;
    (((struct o3B_uchar *)0xC8DFF6C)->v) = 0x0;
    (((struct o3C_uchar *)0xC8DFF6C)->v) = 0x0;
    (((struct o0_uchar *)0xC8DFFA9)->v) = 0x0;
    (((struct o1_uchar *)0xC8DFFA9)->v) = 0x0;
    (((struct o2_uchar *)0xC8DFFA9)->v) = 0x0;
    (((struct o3_uchar *)0xC8DFFA9)->v) = 0x0;
    (((struct o4_uchar *)0xC8DFFA9)->v) = 0x0;
    (((struct o5_uchar *)0xC8DFFA9)->v) = 0x0;
    (((struct o6_uchar *)0xC8DFFA9)->v) = 0x0;
    (((struct o7_uchar *)0xC8DFFA9)->v) = 0x0;
    (((struct o8_uchar *)0xC8DFFA9)->v) = 0x0;
    (((struct o9_uchar *)0xC8DFFA9)->v) = 0x0;
    (((struct oA_uchar *)0xC8DFFA9)->v) = 0x0;
    (((struct oB_uchar *)0xC8DFFA9)->v) = 0x0;
    *(unsigned short *)0xC8DFFB6 = 0x0;
    *(unsigned short *)0xC8DFFB8 = 0x0;
    *(unsigned short *)0xC8DFFBA = 0x0;
    *(unsigned short *)0xC8DFFBC = 0x0;
    (((struct o15_uchar *)0xC8DFFA9)->v) = 0x0;
    (((struct o16_uchar *)0xC8DFFA9)->v) = 0x0;
    (((struct o17_uchar *)0xC8DFFA9)->v) = 0x0;
    (((struct o18_uchar *)0xC8DFFA9)->v) = 0x0;
    (((struct o19_uchar *)0xC8DFFA9)->v) = 0x0;
    t0 = 0x4;
    t1 = 0xC8DFFC3;
    for (;;) {
        t0 = (t0 - 0x1);
        *(unsigned char *)((t1 + 0x0)) = 0x0;
        t1 = (t1 + 0x1);
        if (t0 == 0) {
            break;
        }
    }
    *(unsigned int *)0xC8DFFC8 = 0x0;
    (((struct o23_uchar *)0xC8DFFA9)->v) = 0x0;
    (((struct o24_uchar *)0xC8DFFA9)->v) = 0x0;
    (((struct o25_uchar *)0xC8DFFA9)->v) = 0x0;
    (((struct o26_uchar *)0xC8DFFA9)->v) = 0x0;
    (((struct o27_uchar *)0xC8DFFA9)->v) = 0x0;
    (((struct o31_uchar *)0xC8DFFA9)->v) = 0x0;
    (((struct o32_uchar *)0xC8DFFA9)->v) = 0x0;
    (((struct o33_uchar *)0xC8DFFA9)->v) = 0x0;
    (((struct o34_uchar *)0xC8DFFA9)->v) = 0x0;
    (((struct o35_uchar *)0xC8DFFA9)->v) = 0x0;
    (((struct o36_uchar *)0xC8DFFA9)->v) = 0x0;
    (((struct o37_uchar *)0xC8DFFA9)->v) = 0x0;
    (((struct o38_uchar *)0xC8DFFA9)->v) = 0x0;
    *(unsigned short *)0xC8DFFE2 = 0x0;
    *(unsigned short *)0xC8DFFE4 = 0x0;
    (((struct o0_ushort *)0xC8DFFE6)->v) = 0x0;
    (((struct o2_ushort *)0xC8DFFE6)->v) = 0x0;
    (((struct o4_ushort *)0xC8DFFE6)->v) = 0x0;
    (((struct o6_ushort *)0xC8DFFE6)->v) = 0x0;
    (((struct o8_uchar *)0xC8DFFE6)->v) = 0x0;
    (((struct o9_uchar *)0xC8DFFE6)->v) = 0x0;
    (((struct oA_uchar *)0xC8DFFE6)->v) = 0x0;
    (((struct oB_uchar *)0xC8DFFE6)->v) = 0x0;
    (((struct oC_uchar *)0xC8DFFE6)->v) = 0x0;
    (((struct oD_uchar *)0xC8DFFE6)->v) = 0x0;
    (((struct oE_ushort *)0xC8DFFE6)->v) = 0x0;
    (((struct o10_ushort *)0xC8DFFE6)->v) = 0x0;
    (((struct o16_ushort *)0xC8DFFE6)->v) = 0x0;
    (((struct o37_uchar *)0xC8DFFE6)->v) = 0x0;
    t0 = 0x4;
    t1 = 0xC8E002E;
    for (;;) {
        t0 = (t0 - 0x1);
        *(unsigned short *)((t1 + 0x0)) = 0x0;
        t1 = (t1 + 0x2);
        if (t0 == 0) {
            break;
        }
    }
    t0 = 0x4;
    t1 = 0xC8E0048;
    for (;;) {
        t0 = (t0 - 0x1);
        *(unsigned short *)((t1 + 0x0)) = 0x0;
        t1 = (t1 + 0x2);
        if (t0 == 0) {
            break;
        }
    }
}

int mpdrv_setcmd(int a4, int a5, int a6, int a7, int a8, int a9)
{
    int stk[8];
    register int t0;
    register int t117;
    int t3;
    register int t4;
    register int t19;
    register int t22;
    register int t24;
    register int t25;
    register int t26;
    register int t32;
    register int t33;
    register int t43;
    register int t39;
    register int t40;
    register int t41;
    register int t42;
    register int t54;
    register int t49;
    register int t50;
    register int t51;
    register int t52;
    register int t70;
    register int t71;
    register int t72;
    register int t83;
    register int t84;
    register int t85;
    register int t86;
    register int t101;
    register int t104;
    register int t105;
    register int t106;
    register int t107;
    register int t6;
    int t7;
    register int t8;
    register int t9;
    register int t62;

    *(unsigned char *)(((int)stk + 8)) = a5;
    *(unsigned int *)(((int)stk + 28)) = a6;
    t0 = *(int *)0xC8D4D84;
    t117 = 0xFFFFFFFF;
    if ((*(signed char *)((((t0 + 0x28) + (a4 * 0x2C)) + 0x6))) != 0) {
    } else {
        *(unsigned char *)((((t0 + 0x28) + (a4 * 0x2C)) + 0x6)) = (*(signed char *)(((int)stk + 8)));
        *(unsigned int *)(((int)stk + 12)) = ((a7 + a9) + 0x3);
        t3 = *(signed char *)((a4 + 0xC3007E8));
        (((struct o10_uchar *)(((int)stk + 4)))->v) = t3;
        *(unsigned int *)(((int)stk + 16)) = (unsigned char)(0xC0 & t3);
        *(unsigned int *)(((int)stk + 4)) = (((int)(unsigned char)(0xC0 & t3) >> 6) & 0x3);
        t4 = *(int *)0xC8D4D84;
        if (((int)((((struct o10CC_int *)(t4))->v)) > 0) && ((t6 = (((struct oFD8_int *)(t4))->v), (int)t6 > 0) && (t7 = (((struct oFCC_int *)(t4))->v), t8 = *(int *)((t7 + 0x0)), t9 = *(int *)(((int)stk + 4)), t9 == (0x3 & (short)((unsigned int)t8 >> 16))))) {
            mpdrv_insertnop(((((struct o10CC_int *)(t4))->v)));
        }
        t19 = *(int *)0xC8D4D84;
        (((struct oFCC_uint *)(t19))->v) = (((((struct oFCC_int *)(t19))->v)) + (((((struct oFD8_int *)(t19))->v)) << 2));
        t22 = *(int *)(((int)stk + 4));
        t24 = (((struct oFCC_int *)((*(int *)0xC8D4D84)))->v);
        *(unsigned int *)(((int)stk + 24)) = (unsigned char)(a7 + a9);
        *(unsigned int *)((t24 + 0x0)) = ((t22 << 16) | (unsigned char)(a7 + a9));
        *(int *)((int)stk + 0) = (t24 + 0x4);
        t25 = *(int *)0xC8D4D84;
        t26 = (((struct o10B4_int *)(t25))->v);
        *(unsigned int *)(((t24 + 0x4) + 0x0)) = (mpdrv_v2p((*(int *)(((a4 << 2) + ((t25 + 0xFE8) + (((((t26 << 1) + t26) << 2) << 2) << 1)))))));
        t32 = *(int *)(((int)stk + 28));
        *(unsigned int *)(((int)stk + 4)) = (unsigned char)(*(signed char *)(((int)stk + 8)));
        t33 = *(signed char *)(((int)stk + 20));
        if (((((struct o10C4_int *)((*(int *)0xC8D4D84)))->v)) == 1) {
            *(unsigned int *)((((t24 + 0x4) + 0x4) + 0x0)) = (((((((*(int *)(((int)stk + 4))) << 16) << 8) & 0xFF000000) | (((unsigned char)t33 << 16) & 0xFF0000)) | (((*(int *)(((int)stk + 16))) << 8) & 0xFF00)) | (*(int *)(((int)stk + 24))));
            t43 = (((t24 + 0x4) + 0x4) + 0x4);
            if ((int)a7 > 0) {
                t39 = t32;
                t40 = 0x0;
                t41 = (((t24 + 0x4) + 0x4) + 0x4);
                for (;;) {
                    t42 = *(int *)((t39 + 0x0));
                    t39 = (t39 + 0x4);
                    t40 = (t40 + 0x1);
                    *(unsigned int *)((t41 + 0x0)) = t42;
                    t41 = (t41 + 0x4);
                    if ((int)t40 >= (int)a7) {
                        break;
                    }
                }
                t43 = t41;
            }
            t62 = t43;
        } else {
            *(unsigned int *)((((t24 + 0x4) + 0x4) + 0x0)) = ((((((*(int *)(((int)stk + 16))) << 16) & 0xFF0000) | (((unsigned char)t33 << 8) & 0xFF00)) | ((((a7 + a9) << 16) << 8) & 0xFF000000)) | (*(int *)(((int)stk + 4))));
            t54 = (((t24 + 0x4) + 0x4) + 0x4);
            if ((int)a7 > 0) {
                t49 = t32;
                t50 = 0x0;
                t51 = (((t24 + 0x4) + 0x4) + 0x4);
                for (;;) {
                    t52 = *(int *)((t49 + 0x0));
                    t49 = (t49 + 0x4);
                    t50 = (t50 + 0x1);
                    *(unsigned int *)((t51 + 0x0)) = ((((((t52 << 16) << 8) & 0xFF000000) | ((t52 << 8) & 0xFF0000)) | (((int)t52 >> 8) & 0xFF00)) | (unsigned char)(signed char)((unsigned int)((unsigned int)t52 >> 16) >> 8));
                    t51 = (t51 + 0x4);
                    if ((int)t50 >= (int)a7) {
                        break;
                    }
                }
                t54 = t51;
            }
            t62 = t54;
        }
        if (((((struct o10C4_int *)((*(int *)0xC8D4D84)))->v)) == 1) {
            if ((int)a9 > 0) {
                t70 = a8;
                t71 = 0x0;
                t72 = t62;
                for (;;) {
                    t71 = (t71 + 0x1);
                    *(unsigned int *)((t72 + 0x0)) = ((((((*(signed char *)((t70 + 0x1))) << 16) & 0xFF0000) | (((*(signed char *)((t70 + 0x2))) << 8) & 0xFF00)) | ((((*(signed char *)((t70 + 0x0))) << 16) << 8) & 0xFF000000)) | (unsigned char)(*(signed char *)((t70 + 0x3))));
                    t72 = (t72 + 0x4);
                    t70 = (t70 + 0x4);
                    if ((int)t71 >= (int)a9) {
                        break;
                    }
                }
            }
        } else {
            if ((int)a9 > 0) {
                t83 = 0x0;
                t84 = a8;
                t85 = t62;
                for (;;) {
                    t86 = *(int *)((t84 + 0x0));
                    t84 = (t84 + 0x4);
                    t83 = (t83 + 0x1);
                    *(unsigned int *)((t85 + 0x0)) = t86;
                    t85 = (t85 + 0x4);
                    if ((int)t83 >= (int)a9) {
                        break;
                    }
                }
            }
        }
        (((struct oFD8_uint *)((*(int *)0xC8D4D84)))->v) = (*(int *)(((int)stk + 12)));
        t101 = *(int *)0xC8D4D84;
        (((struct oFDC_uint *)(t101))->v) = (((((struct oFDC_int *)(t101))->v)) + ((*(int *)(((int)stk + 12))) << 2));
        t104 = *(int *)0xC8D4D84;
        t105 = *(int *)0xC8D4D84;
        t106 = (((struct oFE0_int *)(t104))->v);
        (((struct oFE0_uint *)(t104))->v) = (t106 + 0x1);
        *(unsigned int *)((((t105 + 0x28) + (a4 * 0x2C)) + 0x18)) = ((t106 + 0x1) - 1);
        t107 = *(int *)0xC8D4D84;
        (((struct oFE0_uint *)(t107))->v) = (((((struct oFE0_int *)(t107))->v)) & 0x7FFFFFFF);
        if (((((struct oFE0_int *)((*(int *)0xC8D4D84)))->v)) == 0) {
            (((struct oFE0_uint *)((*(int *)0xC8D4D84)))->v) = 0x1;
        }
        t117 = (*(int *)(((((*(int *)0xC8D4D84) + 0x28) + (a4 * 0x2C)) + 0x18)));
    }
    return t117;
}

int FUN_0c2edc7a(int a4, int a5, int a6)
{
    int stk[4];
    int t6;

    register int R1;
    register int R2;
    register int R5;
    register int R7;
    int R9;
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
    v0_0 = a6;
    v0_3 = FUN_0c2f2074(0xC8D711C, 0xC8D7110, 0x8);
    v0_1 = (0xC8D6440);
    v0_0 = (0xC8D6440);
    v0_2 = (v0_3);
    if (((unsigned char)v0_3 != 0)) goto L_C2EDCBC;
    v0_1 = FUN_0c2edece(0xC8D711C);
    t6 = *(int *)0xC8D65E4;
    *(unsigned int *)(((int)stk + 4)) = (v0_1 & t6);
    v0_3 = ((v0_1 & t6));
    if (((v0_1 & t6) != 0)) goto L_C2EDCB8;
    L_C2EDE6E:;
    *(unsigned char *)0xC8D7099 = 0x3;
    L_C2EDEBA:;
    return v0_3;
    L_C2EDCB8:;
    R9 = (v0_3);
    L_C2EDCE6:;
    v0_1 = FUN_0c2f1fc0((((int)stk + 4) + 0x4), 0xC8D7110, 0x64);
    v0_3 = (v0_1);
    v0_7 = (0xC2F1FC0);
    if (((unsigned char)v0_1 != 0)) goto L_C2EDD18;
    v0_1 = (0x1);
    if (((unsigned int)(*(int *)(((int)stk + 8))) <= (unsigned int)0x1)) goto L_C2EDD04;
    goto L_C2EDE6E;
    L_C2EDD04:;
    if (((*(int *)(((int)stk + 8))) == 0)) goto L_C2EDD12;
    v0_3 = (v0_1);
    L_C2EDD14:;
    *(unsigned char *)(((int)stk + 12)) = v0_3;
    L_C2EDD5C:;
    v0_1 = FUN_0c2f1fc0((((int)stk + 4) + 0x4), 0xC8D7110, 0x6E);
    v0_2 = ((unsigned char)v0_1);
    v0_4 = (0xFF);
    if (((unsigned char)v0_1 != 0)) goto L_C2EDD80;
    v0_2 = FUN_0c2edfa0((*(int *)(((int)stk + 8))));
    v0_3 = (v0_2);
    v0_1 = (v0_2);
    if (((unsigned char)v0_2 != v0_4)) goto L_C2EDD86;
    goto L_C2EDE6E;
    L_C2EDD86:;
    v0_3 = FUN_0c2f1fc0((((int)stk + 4) + 0x4), 0xC8D7110, 0x6E);
    v0_2 = ((unsigned char)v0_3);
    if (((unsigned char)v0_3 != 0)) goto L_C2EDDBA;
    v0_6 = FUN_0c2ee1da((*(int *)(((int)stk + 8))));
    v0_3 = (v0_6);
    v0_5 = (v0_6);
    v0_2 = ((unsigned char)v0_6);
    if (((unsigned char)v0_6 == v0_4)) goto L_C2EDE6E;
    if ((v0_2 == 0)) goto L_C2EDDAC;
    if (((int)(unsigned char)v0_1 > (int)v0_2)) goto L_C2EDE6E;
    L_C2EDDAC:;
    if (((int)v0_2 <= (int)(unsigned char)(*(signed char *)0xC8D65E0))) goto L_C2EDDC0;
    goto L_C2EDE6E;
    L_C2EDDC0:;
    v0_3 = FUN_0c2f1fc0((((int)stk + 4) + 0x4), 0xC8D7110, 0x6E);
    v0_2 = ((unsigned char)v0_3);
    if (((unsigned char)v0_3 != 0)) goto L_C2EDDE0;
    v0_2 = FUN_0c2edfa0((*(int *)(((int)stk + 8))));
    v0_3 = (v0_2);
    v0_6 = (v0_2);
    if (((unsigned char)v0_2 != v0_4)) goto L_C2EDDE6;
    goto L_C2EDE6E;
    L_C2EDDE6:;
    v0_3 = FUN_0c2f1fc0((((int)stk + 4) + 0x4), 0xC8D7110, 0x6E);
    v0_2 = ((unsigned char)v0_3);
    if (((unsigned char)v0_3 != 0)) goto L_C2EDE24;
    v0_8 = FUN_0c2ee1da((*(int *)(((int)stk + 8))));
    v0_3 = (v0_8);
    v0_7 = (v0_8);
    v0_2 = ((unsigned char)v0_8);
    if (((unsigned char)v0_8 == v0_4)) goto L_C2EDE6E;
    if ((v0_2 == 0)) goto L_C2EDE0C;
    if (((int)(unsigned char)v0_6 > (int)v0_2)) goto L_C2EDE6E;
    L_C2EDE0C:;
    if (((int)v0_2 <= (int)(unsigned char)(*(signed char *)0xC8D65E0))) goto L_C2EDE2A;
    goto L_C2EDE6E;
    L_C2EDE2A:;
    v0_2 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 4)) = (((v0_2 + v0_2) - 1) & (*(int *)0xC8D65E4));
    *(int *)((int)stk + 0) = (v0_7);
    v0_3 = ((FUN_0c2ed220((((int)stk + 0) + 0x4), v0_1, v0_5, v0_6)));
    v0_2 = ((unsigned char)v0_5);
    if (((unsigned int)R9 <= (unsigned int)0x0)) goto L_C2EDE58;
    if ((((*(int *)(((int)stk + 4))) & R9) == 0)) goto L_C2EDE6E;
    L_C2EDE58:;
    if (((*(int *)(((int)stk + 4))) == 0)) goto L_C2EDE6E;
    v0_4 = *(int *)(((int)stk + 4));
    v0_3 = (v0_4);
    if ((v0_4 == 1)) goto L_C2EDE6E;
    if (((int)v0_2 >= (int)(unsigned char)v0_1)) goto L_C2EDE76;
    if ((v0_2 == 0)) goto L_C2EDE76;
    goto L_C2EDE6E;
    L_C2EDE76:;
    (((struct o3C_uchar *)(v0_0))->v) = (*(int *)(((int)stk + 4)));
    (((struct o3D_uchar *)(v0_0))->v) = ((unsigned int)((*(int *)(((int)stk + 4))) & 0xFF00) >> 8);
    v0_2 = ((v0_0 + 0x42));
    if (((*(signed char *)(((int)stk + 12))) != 0)) goto L_C2EDE9E;
    v0_3 = (((*(signed char *)((v0_2 + 0x0))) | 0x80));
    L_C2EDEA2:;
    *(unsigned char *)((v0_2 + 0x0)) = v0_3;
    (((struct o3E_uchar *)(v0_0))->v) = v0_1;
    (((struct o3F_uchar *)(v0_0))->v) = v0_5;
    (((struct o40_uchar *)(v0_0))->v) = v0_6;
    (((struct o41_uchar *)(v0_0))->v) = v0_7;
    v0_0 = ((v0_0 + 0x41));
    goto L_C2EDEBA;
    L_C2EDE9E:;
    v0_3 = (((*(signed char *)((v0_2 + 0x0))) & 0x7F));
    goto L_C2EDEA2;
    L_C2EDE24:;
    v0_7 = ((*(signed char *)(((v0_0 + 0x41) + 0x0))));
    goto L_C2EDE2A;
    L_C2EDDE0:;
    v0_6 = ((*(signed char *)(((v0_0 + 0x40) + 0x0))));
    goto L_C2EDDE6;
    L_C2EDDBA:;
    v0_5 = ((*(signed char *)(((v0_0 + 0x3F) + 0x0))));
    goto L_C2EDDC0;
    L_C2EDD80:;
    v0_1 = ((*(signed char *)(((v0_0 + 0x3E) + 0x0))));
    goto L_C2EDD86;
    L_C2EDD12:;
    v0_3 = (0x0);
    goto L_C2EDD14;
    L_C2EDD18:;
    if ((((unsigned char)(*(signed char *)(((v0_0 + 0x42) + 0x0))) & 128) != 0)) goto L_C2EDD58;
    v0_3 = (0x1);
    L_C2EDD5A:;
    *(unsigned char *)(((int)stk + 12)) = v0_3;
    goto L_C2EDD5C;
    L_C2EDD58:;
    v0_3 = (0x0);
    goto L_C2EDD5A;
    L_C2EDCBC:;
    v0_3 = ((unsigned char)v0_2);
    if (((unsigned char)v0_2 != 1)) goto L_C2EDCDE;
    *(unsigned int *)(((int)stk + 4)) = (FUN_0c2ed43a((((unsigned char)(*(signed char *)(((v0_1 + 0x3D) + 0x0))) << 8) | (unsigned char)(*(signed char *)(((v0_1 + 0x3C) + 0x0))))));
    R9 = (0x0);
    goto L_C2EDCE6;
    L_C2EDCDE:;
    if ((v0_3 != 2)) goto L_C2EDCE6;
    goto L_C2EDE6E;
}

int FUN_0c2f8d7c(int a4, int a5, int a6, int a7, int a8, int a9)
{
    register int t0;
    int t2;
    register int t3;
    register int t4;

    t3 = *(signed char *)0xC8D6458;
    if ((0x8 & (unsigned char)t3) == 0) {
        t4 = *(int *)0xC8D65E4;
        if ((((unsigned char)(*(signed char *)0xC8D6458) & 16) != 0) && ((t0 = *(signed char *)0xC8D645B, ((unsigned char)t0 & 4) == 0) && ((signed char)((signed char)(a9 >> 0)) == 0))) {
            *(unsigned int *)((a4 + 0x0)) = (t4 & 0x3FF);
            if ((unsigned char)(*(signed char *)0xC8D6465) == 0xFF) {
                *(unsigned char *)((a6 + 0x0)) = (FUN_0c2f9168((*(signed char *)0xC8D6630), (t4 & 0x3FF), 0xFF, a7));
            } else {
                *(unsigned char *)((a6 + 0x0)) = 0x0;
            }
            *(unsigned char *)((a5 + 0x0)) = 0x0;
            *(unsigned char *)((a7 + 0x0)) = 0x0;
            *(unsigned char *)((a8 + 0x0)) = (*(signed char *)((a6 + 0x0)));
        } else {
            t0 = *(signed char *)0xC8D6465;
            if (((unsigned char)t0 != 0) && ((unsigned char)t0 != 0xFF)) {
                *(unsigned int *)((a4 + 0x0)) = (FUN_0c2f92c0((*(signed char *)0xC8D6465)));
                t0 = (FUN_0c2f9360((*(signed char *)0xC8D6465)));
            } else {
                *(unsigned int *)((a4 + 0x0)) = (t4 & 0x3FF);
                t0 = (FUN_0c2f9168((*(signed char *)0xC8D6630), (t4 & 0x3FF), 0xFF, a7));
            }
            *(unsigned char *)((a6 + 0x0)) = t0;
            *(unsigned char *)((a8 + 0x0)) = (*(signed char *)((a6 + 0x0)));
            FUN_0c2f8fc0(a4, a6, a8, ((signed char)(a9 >> 0)));
            if ((((unsigned char)(*(signed char *)0xC8D6458) & 8) != 0) && ((signed char)((signed char)(a9 >> 0)) == 0)) {
                if ((*(int *)((a4 + 0x0))) != 0) {
                    *(unsigned int *)((a4 + 0x0)) = ((*(int *)((a4 + 0x0))) + (((*(int *)((a4 + 0x0))) - 1) & (*(int *)0xC8D65E4)));
                }
                *(unsigned char *)((a5 + 0x0)) = 0x0;
                *(unsigned char *)((a7 + 0x0)) = 0x0;
            } else {
                *(unsigned char *)((a5 + 0x0)) = (*(signed char *)((a6 + 0x0)));
                *(unsigned char *)((a7 + 0x0)) = (*(signed char *)((a8 + 0x0)));
            }
        }
        t0 = (((int (*)(int, int, int, int, int))(FUN_0c2ed220))(a4, (*(signed char *)((a5 + 0x0))), (*(signed char *)((a6 + 0x0))), (*(signed char *)((a7 + 0x0))), ((*(signed char *)((a8 + 0x0))))));
    } else {
        if ((0x10 & (unsigned char)t3) == 0) {
            t4 = *(int *)0xC8D65E4;
            if ((((unsigned char)(*(signed char *)0xC8D6458) & 16) != 0) && ((t0 = *(signed char *)0xC8D645B, ((unsigned char)t0 & 4) == 0) && ((signed char)((signed char)(a9 >> 0)) == 0))) {
                *(unsigned int *)((a4 + 0x0)) = (t4 & 0x3FF);
                if ((unsigned char)(*(signed char *)0xC8D6465) == 0xFF) {
                    *(unsigned char *)((a6 + 0x0)) = (FUN_0c2f9168((*(signed char *)0xC8D6630), (t4 & 0x3FF), 0xFF, a7));
                } else {
                    *(unsigned char *)((a6 + 0x0)) = 0x0;
                }
                *(unsigned char *)((a5 + 0x0)) = 0x0;
                *(unsigned char *)((a7 + 0x0)) = 0x0;
                *(unsigned char *)((a8 + 0x0)) = (*(signed char *)((a6 + 0x0)));
            } else {
                t0 = *(signed char *)0xC8D6465;
                if (((unsigned char)t0 != 0) && ((unsigned char)t0 != 0xFF)) {
                    *(unsigned int *)((a4 + 0x0)) = (FUN_0c2f92c0((*(signed char *)0xC8D6465)));
                    t0 = (FUN_0c2f9360((*(signed char *)0xC8D6465)));
                } else {
                    *(unsigned int *)((a4 + 0x0)) = (t4 & 0x3FF);
                    t0 = (FUN_0c2f9168((*(signed char *)0xC8D6630), (t4 & 0x3FF), 0xFF, a7));
                }
                *(unsigned char *)((a6 + 0x0)) = t0;
                *(unsigned char *)((a8 + 0x0)) = (*(signed char *)((a6 + 0x0)));
                FUN_0c2f8fc0(a4, a6, a8, ((signed char)(a9 >> 0)));
                if ((((unsigned char)(*(signed char *)0xC8D6458) & 8) != 0) && ((signed char)((signed char)(a9 >> 0)) == 0)) {
                    if ((*(int *)((a4 + 0x0))) != 0) {
                        *(unsigned int *)((a4 + 0x0)) = ((*(int *)((a4 + 0x0))) + (((*(int *)((a4 + 0x0))) - 1) & (*(int *)0xC8D65E4)));
                    }
                    *(unsigned char *)((a5 + 0x0)) = 0x0;
                    *(unsigned char *)((a7 + 0x0)) = 0x0;
                } else {
                    *(unsigned char *)((a5 + 0x0)) = (*(signed char *)((a6 + 0x0)));
                    *(unsigned char *)((a7 + 0x0)) = (*(signed char *)((a8 + 0x0)));
                }
            }
            t0 = (((int (*)(int, int, int, int, int))(FUN_0c2ed220))(a4, (*(signed char *)((a5 + 0x0))), (*(signed char *)((a6 + 0x0))), (*(signed char *)((a7 + 0x0))), ((*(signed char *)((a8 + 0x0))))));
        } else {
            *(unsigned int *)((a4 + 0x0)) = (((unsigned char)(*(signed char *)0xC8D647D) << 8) | (unsigned char)(*(signed char *)0xC8D647C));
            *(unsigned char *)((a5 + 0x0)) = (*(signed char *)0xC8D647E);
            *(unsigned char *)((a7 + 0x0)) = (*(signed char *)0xC8D6480);
            if ((unsigned char)(*(signed char *)0xC8D6465) == 0xFF) {
                *(unsigned char *)((a6 + 0x0)) = (FUN_0c2f9168((*(signed char *)0xC8D6630), (unsigned char)t3, 0xFF, a7));
                *(unsigned char *)((a8 + 0x0)) = (*(signed char *)((a6 + 0x0)));
                t3 = *(signed char *)0xC8D647F;
                if (((int)(unsigned char)(*(signed char *)((a6 + 0x0))) > (int)(unsigned char)t3) && ((int)(unsigned char)t3 > 0)) {
                    *(unsigned char *)((a6 + 0x0)) = (*(signed char *)0xC8D647F);
                }
                t3 = *(signed char *)0xC8D6481;
                if ((int)(unsigned char)(*(signed char *)((a8 + 0x0))) > (int)(unsigned char)t3) {
                    if ((int)(unsigned char)t3 <= 0) {
                    } else {
                        *(unsigned char *)((a8 + 0x0)) = (*(signed char *)0xC8D6481);
                    }
                }
            } else {
                *(unsigned char *)((a6 + 0x0)) = (*(signed char *)0xC8D647F);
                *(unsigned char *)((a8 + 0x0)) = (*(signed char *)0xC8D6481);
            }
            if (((signed char)((signed char)(a9 >> 0)) == 0) && (t2 = *(int *)((a4 + 0x0)), (unsigned int)t2 > (unsigned int)0x7)) {
                if (((unsigned char)(*(signed char *)0xC8D6482) & 128) != 0) {
                    *(unsigned int *)((a4 + 0x0)) = (FUN_0c2ed43a((*(int *)((a4 + 0x0)))));
                }
                *(volatile signed char *)((a8 + 0x0));
                t2 = ((int (*)(int, int, int, int))(FUN_0c2ed220))(a4, (*(signed char *)((a5 + 0x0))), (*(signed char *)((a6 + 0x0))), (*(signed char *)((a7 + 0x0))));
                if ((unsigned int)(*(signed char *)((a5 + 0x0))) > (unsigned int)(*(signed char *)((a6 + 0x0)))) {
                    *(unsigned char *)((a5 + 0x0)) = (*(signed char *)((a6 + 0x0)));
                }
                if ((unsigned int)(*(signed char *)((a7 + 0x0))) > (unsigned int)(*(signed char *)((a8 + 0x0)))) {
                    *(unsigned char *)((a7 + 0x0)) = (*(signed char *)((a8 + 0x0)));
                }
                t3 = t2;
            } else {
                *(volatile signed char *)((a8 + 0x0));
                t2 = ((int (*)(int, int, int, int))(FUN_0c2ed220))(a4, (*(signed char *)((a5 + 0x0))), (*(signed char *)((a6 + 0x0))), (*(signed char *)((a7 + 0x0))));
                t2 = FUN_0c2f8fc0(a4, a6, a8, ((signed char)(a9 >> 0)));
                *(unsigned char *)((a5 + 0x0)) = (*(signed char *)((a6 + 0x0)));
                *(unsigned char *)((a7 + 0x0)) = (*(signed char *)((a8 + 0x0)));
                t3 = t2;
            }
            t0 = t3;
        }
    }
    return t0;
}

int FUN_0c2ccfa0(int a4, int a5, int a6, int a7)
{
    int stk[4];
    register int t0;
    register int t11;
    register int t31;
    register int t32;
    register int t33;
    register int t34;
    register int t40;
    register int t41;
    register int t42;
    register int t43;
    register int t44;
    register int t45;
    register int t48;
    register int t50;
    register int t53;
    register int t35;
    register int t72;
    register int t73;
    register int t74;
    register int t75;

    t0 = (((struct o2C_int *)0xC8BFF68)->v);
    if ((((((struct o0_int *)0xC8BF0FC)->v)) != 0) && (a5 != 0)) {
        *(unsigned int *)((t0 + 0x38)) = 0x1;
    } else {
        *(unsigned int *)((t0 + 0x38)) = 0x0;
    }
    *(unsigned int *)((t0 + 0x30)) = a6;
    *(unsigned int *)((t0 + 0x8)) = a4;
    (((struct o1A4_uint *)(t0))->v) = ((((struct o14_int *)0xC8BEF9C)->v));
    (((struct o1AC_uint *)(t0))->v) = ((((struct o1C_int *)0xC8BEF9C)->v));
    (((struct o1A8_uint *)(t0))->v) = ((((struct o18_int *)0xC8BEF9C)->v));
    (((struct o1B0_uint *)(t0))->v) = ((((struct o20_int *)0xC8BEF9C)->v));
    (((struct o1B4_uint *)(t0))->v) = ((((struct o24_int *)0xC8BEF9C)->v));
    (((struct o1BC_uint *)(t0))->v) = ((((struct o2C_int *)0xC8BEF9C)->v));
    (((struct o1B8_uint *)(t0))->v) = ((((struct o28_int *)0xC8BEF9C)->v));
    (((struct o1C0_uint *)(t0))->v) = ((((struct o30_int *)0xC8BEF9C)->v));
    t11 = a5;
    if (a4 == 0) {
        (((struct o40_uint *)(t0))->v) = a7;
        t11 = 0x0;
    }
    *(unsigned int *)((t0 + 0x28)) = ((((struct o4_int *)0xC8BFFB4)->v));
    if (t11 != 0) {
        *(unsigned int *)((t0 + 0x18)) = 0x8;
        (((struct o4_uint *)0xC8BFFB4)->v) = (((((struct o4_int *)0xC8BFFB4)->v)) + 0x1);
        if ((unsigned int)((((struct o4_int *)0xC8BFFB4)->v)) >= (unsigned int)((((struct o24_int *)0xC8BF0FC)->v))) {
            (((struct o4_uint *)0xC8BFFB4)->v) = 0x0;
        }
        if (((((struct o18_int *)0xC8BFFB4)->v)) != 0) {
            (((struct o4_uint *)0xC8BFFB4)->v) = (((((struct o4_int *)0xC8BFFB4)->v)) & 0x1);
        }
    } else {
        *(unsigned int *)((t0 + 0x18)) = 0x6;
    }
    *(unsigned int *)((t0 + 0x2C)) = ((((struct o0_int *)0xC8BEF9C)->v));
    if (((((struct o0_int *)0xC8BFF68)->v)) == 0) {
        *(unsigned int *)((t0 + 0x14)) = 0x2;
    } else {
        t31 = *(int *)0xC8BE7F0;
        t32 = *(int *)(((0xC8BEEB8 + ((t31 - 1) << 2)) + 0x0));
        t33 = t32;
        t34 = 0x5;
        for (;;) {
            if ((((int)0x1 << (int)t33) & (*(int *)((((0x184 + t0) + ((t31 - 1) << 2)) + 0x0)))) != 0) {
                t35 = t33;
            }
            t34 = (t34 - 0x1);
            t33 = ((int)((unsigned int)(t33 + 0x1) % (unsigned int)0x5));
            if (t34 == 0) {
                break;
            }
        }
        t40 = t32;
        t41 = ((t31 - 1) << 2);
        t42 = t33;
        t43 = t34;
        t44 = 0x5;
        t45 = t32;
        for (;;) {
            if ((((int)0x1 << (int)t45) & (*(int *)(((((((((struct o0_int *)0xC8BFFB4)->v)) - 1) << 2) + (0x184 + t0)) + 0x0)))) != 0) {
                for (;;) {
                    t40 = 0x0;
                    t48 = kmyGetDMAHANDLE(t40);
                    *(unsigned int *)(((int)stk + 8)) = t48;
                    if (t48 != 0) {
                        break;
                    }
                    t40 = 0x7;
                    kmyRequestCallback(t40);
                }
                *(int *)((int)stk + 4) = ((int)0x1 << (int)t45);
                *(int *)((int)stk + 0) = 0x0;
                t50 = (((struct o0_int *)0xC8BFFB4)->v);
                t43 = t45;
                t43 = (t43 << 2);
                *(unsigned int *)(((int)stk + 12)) = t43;
                t43 = (*(int *)((t43 + (((((t50 - 1) << 2) + (t50 - 1)) << 2) + (0xE4 + t0)))));
                t42 = ((((struct o0_int *)0xC8BFFB4)->v));
                t42 = (t42 - 1);
                t53 = t42;
                t42 = (t42 << 2);
                t42 = (t42 + t53);
                t41 = (*(int *)((t0 + 0x3C)));
                t42 = (t42 << 2);
                t42 = (t42 + (t0 + 0x44));
                t42 = (*(int *)((t42 + (*(int *)(((int)stk + 12))))));
                t40 = (*(int *)(((int)stk + 8)));
                kmySetTADMA(t40, t41, t42, t43, 0x0, ((int)0x1 << (int)t45));
                if (t45 == t35) {
                    t41 = 0xC2CC84E;
                    t40 = (*(int *)(((int)stk + 8)));
                    kmySetDMACallback(t40, 0xC2CC84E);
                    t41 = ((((struct o0_int *)0xC8BFFB4)->v));
                    t40 = (*(int *)(((int)stk + 8)));
                    kmySetDMAValue(t40, t41);
                }
                t40 = (*(int *)(((int)stk + 8)));
                (((struct o8_uint *)0xC8BFFB4)->v) = (kmyRequestDMA(t40));
            } else {
                t72 = t40;
                t73 = t41;
                t74 = t42;
                t75 = t43;
            }
            t40 = t72;
            t41 = t73;
            t42 = t74;
            t43 = t75;
            t44 = (t44 - 0x1);
            t45 = ((int)((unsigned int)(t45 + 0x1) % (unsigned int)0x5));
            if (t44 == 0) {
                break;
            }
        }
    }
    kmiFLWCTRLRotateReadyQueue(0x0);
    return (*(int *)((t0 + 0x4)));
}

int FUN_0c1864e0(int a4, int a5, int a6)
{
    int stk[2];

    register int R1;
    register int R2;
    register int R7;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    v0_6 = a4;
    v0_4 = a5;
    v0_1 = a6;
    *(unsigned int *)(((int)stk + 4)) = v0_6;
    *(unsigned int *)(((int)stk + 0)) = v0_1;
    FUN_0c193da4();
    *(unsigned int *)0xC8A2E68 = 0x0;
    v0_0 = *(int *)(((int)stk + 4));
    v0_5 = FUN_0c185560(v0_0);
    v0_2 = (0x0);
    v0_3 = (v0_4);
    v0_0 = (v0_0);
    v0_6 = (v0_5);
    if (((int)(short)v0_5 >= 0)) goto L_C186516;
    *(unsigned int *)0xC8A2E68 = 0x26;
    L_C1866EA:;
    FUN_0c193dae();
    v0_6 = (0xFFFFFFFF);
    L_C1866F6:;
    return v0_6;
    L_C186516:;
    *(unsigned int *)0xC8B57A0 = (((short)v0_6 * (short)0x34) + 0xC8A2C60);
    v0_5 = (*(short *)(((((short)v0_6 * (short)0x34) + 0xC8A2C60) + 0x8))) != 0;
    v0_4 = (((short)v0_6 * (short)0x34) + 0xC8A2C60);
    v0_6 = ((((short)v0_6 * (short)0x34) + 0xC8A2C60));
    v0_4 = v0_4;
    if (v0_5) goto L_C186536;
    *(unsigned char *)((v0_3 + 0x0)) = v0_2;
    *(unsigned int *)0xC8A2E68 = 0xE;
    goto L_C1866EA;
    L_C186536:;
    if (((*(short *)((v0_4 + 0x6))) != 4)) goto L_C186546;
    *(unsigned char *)((v0_3 + 0x0)) = v0_2;
    *(unsigned int *)0xC8A2E68 = 0x39;
    goto L_C1866EA;
    L_C186546:;
    if (!(((*(short *)((v0_4 + 0xE))) == 2))) goto L_C1866DC;
    v0_5 = *(short *)((v0_4 + 0x10));
    v0_6 = (v0_5);
    if ((v0_5 == 1)) goto L_C18655E;
    if ((v0_6 == 2)) goto L_C186620;
    goto L_C1866DC;
    L_C1866DC:;
    *(unsigned int *)0xC8A2E68 = 0x2B;
    goto L_C1866EA;
    L_C186620:;
    v0_5 = (0xC185686);
    v0_5 = (0xC8B5798);
    if ((((((struct o32_short *)(v0_4))->v)) != 1)) goto L_C186640;
    v0_0 = FUN_0c185686(v0_0, v0_4, v0_1);
    *(unsigned int *)((v0_5 + 0x0)) = v0_0;
    if ((v0_0 != 0)) goto L_C186656;
    *(unsigned int *)0xC8A2E68 = 0x23;
    goto L_C1866EA;
    L_C186656:;
    v0_0 = *(short *)(((*(int *)((v0_5 + 0x0))) + 0x4));
    v0_6 = (v0_0);
    v0_4 = (v0_3);
    if (((int)v0_0 <= (int)(*(int *)(((int)stk + 0))))) goto L_C1866A0;
    v0_0 = ((*(int *)(((int)stk + 0))));
    L_C1866A2:;
    v0_6 = (v0_2);
    if (((int)(short)v0_0 <= 0)) goto L_C1866C2;
    L_C1866AA:;
    *(unsigned char *)((v0_4 + 0x0)) = (*(signed char *)((((short)v0_6 + ((*(int *)((v0_5 + 0x0))) + 0xE)) + 0x0)));
    v0_2 = (int)(short)(v0_6 + 0x1) < (int)(short)v0_0;
    v0_6 = ((v0_6 + 0x1));
    v0_4 = ((v0_4 + 0x1));
    if (v0_2) goto L_C1866AA;
    L_C1866C2:;
    FUN_0c185774((*(int *)((v0_5 + 0x0))), v0_4, v0_1);
    v0_1 = *(int *)0xC8B57A0;
    *(unsigned short *)((v0_1 + 0xA)) = ((*(short *)((v0_1 + 0xA))) - 1);
    L_C1866D2:;
    FUN_0c193dae();
    v0_6 = ((short)v0_0);
    goto L_C1866F6;
    L_C1866A0:;
    v0_0 = (v0_6);
    goto L_C1866A2;
    L_C186640:;
    v0_6 = (0xC193D4A);
    v0_6 = (0x3E8);
    L_C18664C:;
    v0_7 = FUN_0c185686(v0_0, v0_4, v0_1);
    *(unsigned int *)((v0_5 + 0x0)) = v0_7;
    if ((v0_7 == 0)) goto L_C186648;
    goto L_C186656;
    L_C186648:;
    FUN_0c193d4a(v0_6);
    goto L_C18664C;
    L_C18655E:;
    v0_6 = ((short)(*(short *)((v0_4 + 0x2))));
    v0_1 = ((short)(*(int *)(((int)stk + 0))));
    if ((((((struct o32_short *)(v0_4))->v)) != 1)) goto L_C186588;
    v0_1 = FUN_0c1945a0(v0_6, v0_3, v0_1);
    v0_0 = (v0_1);
    if (((int)(short)v0_1 < 0)) goto L_C186584;
    goto L_C1866D2;
    L_C186584:;
    v0_1 = (0x23);
    L_C18659E:;
    *(unsigned int *)0xC8A2E68 = v0_1;
    if (((short)v0_0 != 0xFFF8)) goto L_C1865B4;
    FUN_0c193dae();
    v0_6 = (0x0);
    goto L_C1866F6;
    L_C1865B4:;
    if (((short)v0_0 != 0xFFFA)) goto L_C1865C4;
    *(unsigned int *)0xC8A2E68 = 0x36;
    goto L_C1866EA;
    L_C1865C4:;
    v0_1 = (short)v0_0 == 0xFFFC;
    v0_0 = ((short)v0_0);
    if (v0_1) goto L_C1865D0;
    goto L_C1866EA;
    L_C1865D0:;
    *(unsigned int *)0xC8A2E68 = 0x39;
    goto L_C1866EA;
    L_C186588:;
    v0_1 = FUN_0c1944e0(v0_6, v0_3, v0_1);
    v0_0 = (v0_1);
    if (((int)(short)v0_1 < 0)) goto L_C18659C;
    goto L_C1866D2;
    L_C18659C:;
    v0_1 = (0xE);
    goto L_C18659E;
}

int FUN_0c2fdee4(void)
{

    register int R2;
    register int R3;
    int R5;
    register int R6;
    register int R7;
    register int R8;
    register int R10;
    register int R11;
    register int R12;
    register int R13;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    v0_1 = R13;
    v0_2 = R8;
    v0_0 = *(signed char *)0xC8D6458;
    R13 = (0x1);
    v0_1 = (0xC8D6440);
    R5 = ((unsigned char)v0_0);
    if (((0x10 & (unsigned char)v0_0) != 0)) goto L_C2FDF04;
    if (((0x8 & R5) == 0)) goto L_C2FDF48;
    L_C2FDF04:;
    R5 = (R13);
    L_C2FDF4A:;
    v0_0 = ((unsigned char)(*(signed char *)(((v0_1 + 0x27) + 0x0))) & 2) == 0;
    if (v0_0) goto L_C2FDF5E;
    if (((signed char)R5 != 0)) goto L_C2FDF6A;
    L_C2FDF5E:;
    v0_0 = (*(signed char *)0xC8E0B44) != 0;
    if (v0_0) goto L_C2FDF6A;
    L_C2FE0F8:;
    v0_2 = (0x0);
    L_C2FE0FE:;
    return v0_2;
    L_C2FDF6A:;
    v0_1 = (int)(unsigned char)(*(signed char *)0xC8D65A4) < (int)0x2;
    v0_0 = (0xC8D65A4);
    if (v0_1) goto L_C2FDF88;
    v0_1 = (signed char)(FUN_0c2ec430(((((struct o14_int *)0xC8D65AC)->v)))) != 0;
    if (v0_1) goto L_C2FDF88;
    goto L_C2FE0F8;
    L_C2FDF88:;
    v0_1 = (*(signed char *)0xC8D644F) == 0;
    if (v0_1) goto L_C2FDFF4;
    v0_1 = ((((struct o0_int *)0xC8D65AC)->v)) != 0x200;
    if (v0_1) goto L_C2FDFF4;
    v0_1 = (*(signed char *)0xC8E0B47) != 0;
    if (v0_1) goto L_C2FDFF4;
    (((struct o1_uchar *)0xC8E0B47)->v) = R13;
    v0_1 = (unsigned int)((((struct o14_int *)0xC8D65AC)->v)) > (unsigned int)(*(int *)0xC8D67BC);
    if (v0_1) goto L_C2FDFC0;
    FUN_0c2ec410(0xC8D65C0, 0x7D0);
    *(unsigned char *)((v0_0 + 0x0)) = R13;
    goto L_C2FE0F8;
    L_C2FDFC0:;
    *(unsigned char *)((v0_0 + 0x0)) = ((*(signed char *)((v0_0 + 0x0))) + 0x1);
    goto L_C2FE0F8;
    L_C2FDFF4:;
    (((struct o0_uchar *)0xC8E0B47)->v) = 0x0;
    v0_2 = (((struct o0_int *)0xC8D65AC)->v);
    v0_0 = (0xC8D65AC);
    v0_1 = (v0_2);
    if ((v0_2 == 64)) goto L_C2FE01A;
    if ((v0_1 == 0x80)) goto L_C2FE01A;
    if ((v0_1 == 0x100)) goto L_C2FE01A;
    if ((v0_1 == 0x200)) goto L_C2FE01A;
    goto L_C2FE0F8;
    L_C2FE01A:;
    v0_1 = FUN_0c2d2c4e();
    v0_2 = (*(int *)((v0_0 + 0x0))) != 0x100;
    v0_1 = (v0_1);
    if (v0_2) goto L_C2FE0B0;
    v0_3 = *(signed char *)0xC8D65A9;
    v0_2 = ((unsigned char)v0_3);
    v0_1 = (0xC8D65AA);
    if (((unsigned char)v0_3 == 33)) goto L_C2FE08E;
    if ((v0_2 == 35)) goto L_C2FE08A;
    if ((v0_2 == 37)) goto L_C2FE086;
    if ((v0_2 == 40)) goto L_C2FE082;
    if ((v0_2 == 42)) goto L_C2FE07E;
    if ((v0_2 == 44)) goto L_C2FE07A;
    if ((v0_2 == 46)) goto L_C2FE076;
    if ((v0_2 == 48)) goto L_C2FE072;
    if ((v0_2 == 50)) goto L_C2FE06E;
    if ((v0_2 == 52)) goto L_C2FE06A;
    if ((v0_2 == 54)) goto L_C2FE066;
    if ((v0_2 != 56)) goto L_C2FE0F8;
    v0_2 = (0x36);
    L_C2FE090:;
    *(unsigned char *)((v0_1 + 0x0)) = v0_2;
    L_C2FE0BA:;
    v0_1 = (*(int *)((v0_0 + 0x0))) == 0x80;
    if (v0_1) goto L_C2FE0D2;
    v0_1 = (*(int *)((v0_0 + 0x0))) == 0x100;
    if (v0_1) goto L_C2FE0D2;
    v0_1 = (*(int *)((v0_0 + 0x0))) != 0x200;
    if (v0_1) goto L_C2FE0E2;
    L_C2FE0D2:;
    v0_1 = (int)(unsigned char)(*(signed char *)0xC8D65AA) < (int)(unsigned char)(FUN_0c2f8c72());
    if (v0_1) goto L_C2FE0F8;
    L_C2FE0E2:;
    v0_0 = (*(int *)((v0_0 + 0x0))) != 64;
    if (v0_0) goto L_C2FE0FC;
    v0_0 = (int)(unsigned char)(*(signed char *)0xC8D65AA) >= (int)(unsigned char)(FUN_0c2f8c66());
    if (v0_0) goto L_C2FE0FC;
    goto L_C2FE0F8;
    L_C2FE0FC:;
    v0_2 = (0x1);
    goto L_C2FE0FE;
    L_C2FE066:;
    v0_2 = (0x34);
    goto L_C2FE090;
    L_C2FE06A:;
    v0_2 = (0x32);
    goto L_C2FE090;
    L_C2FE06E:;
    v0_2 = (0x30);
    goto L_C2FE090;
    L_C2FE072:;
    v0_2 = (0x2E);
    goto L_C2FE090;
    L_C2FE076:;
    v0_2 = (0x2C);
    goto L_C2FE090;
    L_C2FE07A:;
    v0_2 = (0x2A);
    goto L_C2FE090;
    L_C2FE07E:;
    v0_2 = (0x28);
    goto L_C2FE090;
    L_C2FE082:;
    v0_2 = (0x25);
    goto L_C2FE090;
    L_C2FE086:;
    v0_2 = (0x23);
    goto L_C2FE090;
    L_C2FE08A:;
    v0_2 = (0x21);
    goto L_C2FE090;
    L_C2FE08E:;
    v0_2 = (0x1E);
    goto L_C2FE090;
    L_C2FE0B0:;
    v0_1 = (signed char)(FUN_0c2fe108(v0_1, 0x1)) == 0;
    if (v0_1) goto L_C2FE0F8;
    goto L_C2FE0BA;
    L_C2FDF48:;
    R5 = (0x0);
    goto L_C2FDF4A;
}
