/* Straight-line functions with calls and guards (batch gen_id): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o118_int { char p[0x118]; int v; };
struct o12_uchar { char p[0x12]; unsigned char v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2E_short { char p[0x2E]; short v; };
struct o2E_ushort { char p[0x2E]; unsigned short v; };
struct o30_float { char p[0x30]; float v; };
struct o30_short { char p[0x30]; short v; };
struct o30_ushort { char p[0x30]; unsigned short v; };
struct o34_short { char p[0x34]; short v; };
struct o34_ushort { char p[0x34]; unsigned short v; };
struct o36_short { char p[0x36]; short v; };
struct o36_ushort { char p[0x36]; unsigned short v; };
struct o37B8_float { char p[0x37B8]; float v; };
struct o380C_float { char p[0x380C]; float v; };
struct o3810_float { char p[0x3810]; float v; };
struct o3814_float { char p[0x3814]; float v; };
struct o3A_short { char p[0x3A]; short v; };
struct o3A_ushort { char p[0x3A]; unsigned short v; };
struct o3C_short { char p[0x3C]; short v; };
struct o3C_ushort { char p[0x3C]; unsigned short v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_float { char p[0x40]; float v; };
struct o430_short { char p[0x430]; short v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB2_short { char p[0xB2]; short v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c018e74(int);
int FUN_0c018e9c(int, int);
int FUN_0c018fd2(int);
int FUN_0c01c714(int, int, int);
int FUN_0c01cd2c(int);
int FUN_0c01d094(void);
int FUN_0c037bf6(int);
int FUN_0c03add8(int, int, int, int);
int FUN_0c03afdc(int, int, int, int);
int FUN_0c03c5c0(int, int, int, int, float, float, float, float, float, float, float, float);
int FUN_0c03c7ec(int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c0573cc(int, int, int);
int FUN_0c059e60(int, int);
int FUN_0c05aab6(int, int);
int FUN_0c0657d4(int, int);
int FUN_0c0659d6(int, int, int);
int FUN_0c07d030(int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c085d0c(int, int, int, int);
int FUN_0c0d04c4(int, int);
int FUN_0c0d36fc(int, int);
int FUN_0c0d37c2(int, int);
int FUN_0c0d3810(int);
int FUN_0c129b94(int, int);
int FUN_0c12cb8c(int, int);
int FUN_0c12d748(int, int);
int FUN_0c150d1e(int, int, int, int);
int FUN_0c150e52(int, int, int);
int FUN_0c150ed4(int);
extern int FUN_0c150f3c();
int FUN_0c150faa(int);
int FUN_0c2d16b8(int, int);
int FUN_0c2d5918(int, int, int);
int FUN_0c2e5952(int);
int FUN_0c2e5ea0(int);
int FUN_0c2e6310(void);
int FUN_0c2e638e(void);
int FUN_0c2e7200(int);
int FUN_0c2e732c(void);
int FUN_0c2e76c8(int, int, int, int);
int FUN_0c2ec8f4(void);
int kmiGetITPCurrent(int);
int kmiReadRegister(int);
int kmiStartupDMA(int, int, int);
int kmiWriteRegister(int, int);
int kmyMemCopy(int, int, int);
int kmyiWaitScanline0(void);
int math_atan_angle16(float);
float math_cos_angle16(int);
float math_signed_sqrt(float);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int nlRand(void);
int thunk_FUN_0c05abb2(int, int);
int thunk_FUN_0c2e3f7c(void);
int FUN_0c0d38b4(int a4, int a5, int a6, int a7);
int FUN_0c01e5dc(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11);
int FUN_0c2cb900(int a4);
int FUN_0c12c8d0(int a4, int a5, int a6, int a7);
int kmiCallbackEndOf(int a4, int a5, int a6, int a7);
float FUN_0c151000(int a4, int a5, int a6, int a7, float f4);
int FUN_0c093c8e(int a4);
int FUN_0c093a3c(int a4);
int FUN_0c2e55e8(void);


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
    switch (t19) {
    case 0:
        (((struct o4_uint *)0xC8D0C9C)->v) = 0x0;
        t38 = 0x0;
        break;
    case 1:
        (((struct o4_uint *)0xC8D0C9C)->v) = 0x1;
        t38 = 0x0;
        break;
    case 2:
        (((struct o4_uint *)0xC8D0C9C)->v) = 0x3;
        t38 = 0x101;
        break;
    default:
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
        break;
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
    kmiStartupDMA(v0_4, v0_2, v0_5);
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


int FUN_0c2e55e8(void)
{
    int stk[9];
    register int t6;
    register int t7;
    register int t20;
    register int t25;
    register int t26;
    register int t34;
    register int t84;
    register int t86;
    register int t54;
    register int t48;
    register int t81;
    register int t82;
    register int t90;

    FUN_0c2e638e();
    *(unsigned char *)(((int)stk + 12)) = (*(signed char *)(((*(int *)0xC304178) + 0x0)));
    *(unsigned char *)(((int)stk + 8)) = (*(signed char *)(((*(int *)0xC304178) + 0x1)));
    FUN_0c2e638e();
    t6 = FUN_0c2e6310();
    t7 = *(signed char *)(((int)stk + 12));
    if ((unsigned char)t7 != 67) {
        if ((unsigned char)t7 != 72) {
            if ((unsigned char)t7 != 76) {
                *(unsigned char *)0xC8D6498 = 0x2;
                return (unsigned char)t7;
            }
            return FUN_0c2e5952(t6);
        }
        if (((unsigned short)((((struct oB2_short *)((*(int *)0xC8D66E8)))->v)) & 0x400) != 0) {
            *(unsigned char *)0xC8D6498 = 0x2;
            return 0xB2;
        }
        if ((unsigned char)(*(signed char *)(((int)stk + 8))) == 76) {
            *(int *)((int)stk + 32) = (t6);
            *(int *)((int)stk + 28) = 0xC8D6440;
            *(int *)((int)stk + 24) = (unsigned char)t6;
            *(int *)((int)stk + 20) = 0xC8D66E8;
            FUN_0c2e638e();
            t20 = FUN_0c2e6310();
            if ((unsigned int)(unsigned char)t20 <= (unsigned int)0xB8) {
                t25 = *(signed char *)(((*(int *)0xC304178) + 0x0));
                t26 = *(int *)0xC8D66E8;
                if ((unsigned char)t25 == 63) {
                    FUN_0c2e638e();
                    FUN_0c2e76c8((unsigned char)(*(signed char *)((t26 + (unsigned char)t20))), 0x10, 0x2, ((int)stk + 0));
                    FUN_0c2e732c();
                    FUN_0c2e7200(((int)stk + 0));
                    t48 = (FUN_0c2e732c());
                } else {
                    if ((unsigned char)t25 == 61) {
                        FUN_0c2e638e();
                        t34 = 0x0;
                        for (;;) {
                            t34 = (t34 << 2);
                            t34 = (t34 << 2);
                            t34 = (t34 + (FUN_0c2e5ea0((*(signed char *)(((*(int *)0xC304178) + 0x0))))));
                            FUN_0c2e638e();
                            if ((*(signed char *)(((*(int *)0xC304178) + 0x0))) == (*(signed char *)0xC8D6526)) {
                                break;
                            }
                        }
                        *(unsigned char *)((t26 + (unsigned char)t20)) = t34;
                        t48 = (unsigned char)t20;
                    } else {
                        *(unsigned char *)0xC8D6498 = 0x2;
                        t48 = (unsigned char)t25;
                    }
                }
                t54 = t48;
            } else {
                *(unsigned char *)0xC8D6498 = 0x2;
                t54 = t20;
            }
            return t54;
        }
        thunk_FUN_0c2e3f7c();
        if ((int)(unsigned char)t6 <= (int)0xF) {
            FUN_0c2d16b8((*(signed char *)(((*(int *)0xC8D66E8) + 0x22))), (*(signed char *)(((*(int *)0xC8D66E8) + 0x23))));
            t81 = ((int)(0xC0 & (unsigned char)(*(signed char *)0xC8D6457)) >> 6);
            t82 = (*(signed char *)(((*(int *)0xC8D66E8) + 0x22)));
        } else {
            if ((int)(unsigned char)t6 >= (int)0x38) {
                FUN_0c2ec8f4();
            }
            t81 = ((int)(0xC0 & (unsigned char)(*(signed char *)0xC8D6457)) >> 6);
            t82 = (*(signed char *)0xC8D6463);
        }
        return FUN_0c2d5918(t6, t81, t82);
    }
    if ((int)(unsigned char)t6 <= (int)0x1) {
        if ((unsigned char)t6 == 0) {
            t84 = *(signed char *)0xC8D6458;
            (((struct o0_uchar *)0xC8D6458)->v) = (t84 & 0xFB);
            t90 = (t84 & 0xFB);
        } else {
            (((struct o0_uchar *)0xC8D6458)->v) = ((*(signed char *)0xC8D6458) | 0x4);
            t86 = *(signed char *)0xC8D646A;
            (((struct o12_uchar *)0xC8D6458)->v) = (t86 | 0xC0);
            t90 = (t86 | 0xC0);
        }
    } else {
        *(unsigned char *)0xC8D6498 = 0x2;
        t90 = (unsigned char)t7;
    }
    return t90;
}
