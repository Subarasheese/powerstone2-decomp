/* Straight-line functions with calls and guards (batch gen_db): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12C_ushort { char p[0x12C]; unsigned short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o18_uchar { char p[0x18]; unsigned char v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o19_uchar { char p[0x19]; unsigned char v; };
struct o1A_uchar { char p[0x1A]; unsigned char v; };
struct o1B_uchar { char p[0x1B]; unsigned char v; };
struct o1C_uchar { char p[0x1C]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_float { char p[0x40]; float v; };
struct o41C_uint { char p[0x41C]; unsigned int v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o620_uchar { char p[0x620]; unsigned char v; };
struct o720_float { char p[0x720]; float v; };
struct o724_float { char p[0x724]; float v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oC0_uint { char p[0xC0]; unsigned int v; };
int FUN_0c0135bc(int);
int FUN_0c013746(int);
int FUN_0c013848(void);
int FUN_0c0139bc(void);
int FUN_0c013aa6(void);
int FUN_0c0159c4(int, int, int, int, int);
int FUN_0c015b58(void);
int FUN_0c018e74(int);
int FUN_0c018e9c(int, int);
int FUN_0c018fd2(int);
int FUN_0c01c714(int, int, int);
int FUN_0c01ca2a(int, int, int);
int FUN_0c01cb7c(void);
int FUN_0c01cc56(int, int);
int FUN_0c01cd2c(int);
int FUN_0c042fe0(void);
int FUN_0c0522be(int);
int FUN_0c056e44(int, int, int);
int FUN_0c0573c0(int, int, int);
int FUN_0c0573cc(int, int, int);
int FUN_0c059c7a(int, int);
int FUN_0c059d30(void);
int FUN_0c05aab6(int, int);
int FUN_0c05af9a(int, int, int);
int FUN_0c05b048(int, int);
int FUN_0c05b052(int, int);
int FUN_0c0d02a6(void);
int FUN_0c0d0378(int, int);
int FUN_0c0d039e(int, int);
int FUN_0c0d60bc(int);
int FUN_0c0d6230(int);
int FUN_0c0d62cc(void);
int FUN_0c0d62d0(void);
int FUN_0c0d634c(void);
int FUN_0c0d8858(int);
int FUN_0c0dc244(void);
int FUN_0c133c78(int, int);
int FUN_0c133d44(int);
int FUN_0c133e80(int);
int FUN_0c134216(int);
int FUN_0c1348c8(int);
int FUN_0c134c9c(int);
int FUN_0c15d386(int, int, int, int, int);
int FUN_0c179ac0(void);
int FUN_0c187b48(int, int, int);
int FUN_0c187cac(int, int, int, int, int);
int thunk_FUN_0c05abb2(int, int);
int thunk_FUN_0c0d6176(void);
int FUN_0c134d80(int a4, int a5, int a6, int a7);
int FUN_0c0d6422(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9);
int FUN_0c0122e4(int a4);
int FUN_0c012cb8(int a4);

int FUN_0c134d80(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t2;
    int t5;
    register float u10;
    register int t17;
    int t20;
    register float u25;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            (((struct o16_uchar *)(a4))->v) = 0x0;
            (((struct o15_uchar *)(a4))->v) = 0x0;
            FUN_0c133c78(a4, 0x0);
            return FUN_0c133e80(a4);
        }
        t2 = FUN_0c134216(a4);
        if (t2 != 0) {
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
            return 0x16;
        }
        t5 = *(signed char *)((a4 + 0x17));
        if (t5 != 3) {
            if (t5 != 1) {
                if (t5 != 4) {
                    if ((t5 != 2) && (t5 != 5)) {
                        if (t5 != 0) {
                            FUN_0c133d44(a4);
                            (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) - 0.0199999996f);
                            if (0.200000003f > ((((struct o48_float *)(a4))->v))) {
                                (((struct o48_float *)(a4))->v) = 0.200000003f;
                            }
                            u10 = (((struct o48_float *)(a4))->v);
                            (((struct o44_float *)(a4))->v) = u10;
                            (((struct o40_float *)(a4))->v) = u10;
                            return FUN_0c133e80(a4);
                        }
                        FUN_0c133d44(a4);
                        return FUN_0c134c9c(a4);
                    }
                    return FUN_0c1348c8(a4);
                }
            }
            FUN_0c133d44(a4);
            return ((int (*)(int, int, int, int))(0xC13451C))(a4, a5, a6, a7);
        }
    } else {
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        (((struct o18_uchar *)(a4))->v) = 0x0;
        (((struct o20_ushort *)(a4))->v) = 0x12C;
        (((struct o12A_ushort *)(a4))->v) = 0x0;
        (((struct o12C_ushort *)(a4))->v) = 0x0;
        (((struct o12E_ushort *)(a4))->v) = 0xF0;
        FUN_0c133c78(a4, 0x0);
        t17 = FUN_0c134216(a4);
        if (t17 != 0) {
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
            return 0x16;
        }
        t20 = *(signed char *)((a4 + 0x17));
        if (t20 != 3) {
            if (t20 != 1) {
                if (t20 != 4) {
                    if ((t20 != 2) && (t20 != 5)) {
                        if (t20 != 0) {
                            FUN_0c133d44(a4);
                            (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) - 0.0199999996f);
                            if (0.200000003f > ((((struct o48_float *)(a4))->v))) {
                                (((struct o48_float *)(a4))->v) = 0.200000003f;
                            }
                            u25 = (((struct o48_float *)(a4))->v);
                            (((struct o44_float *)(a4))->v) = u25;
                            (((struct o40_float *)(a4))->v) = u25;
                            return FUN_0c133e80(a4);
                        }
                        FUN_0c133d44(a4);
                        return FUN_0c134c9c(a4);
                    }
                    return FUN_0c1348c8(a4);
                }
            }
            FUN_0c133d44(a4);
            return ((int (*)(int, int, int, int))(0xC13451C))(a4, a5, a6, a7);
        }
    }
    FUN_0c133d44(a4);
    return ((int (*)(int, int, int, int))(0xC13436A))(a4, a5, a6, a7);
}

int FUN_0c0d6422(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9)
{
    int stk[5];

    register int R1;
    register int R2;
    register float F2;
    register float F3;
    register int T_;
    register int FPUL_;
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
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    register float w0_4;
    register float w0_5;
    register float w0_6;
    register float w0_7;
    register float w0_8;
    v0_10 = a5;
    v0_11 = a6;
    v0_5 = a7;
    w0_1 = f4;
    w0_2 = f6;
    w0_3 = f7;
    w0_4 = f8;
    w0_5 = f9;
    v0_2 = *(signed char *)0xC54098C;
    v0_8 = (v0_2);
    v0_1 = (0x0);
    v0_0 = (0xC540978);
    if ((v0_2 == 0)) goto L_C0D6478;
    if ((v0_8 == 1)) goto L_C0D648C;
    L_C0D6D60:;
    return v0_8;
    L_C0D648C:;
    v0_1 = *(signed char *)((v0_0 + 0x15));
    v0_8 = (v0_1);
    v0_3 = (0xC472A88);
    v0_7 = (0xC472AA8);
    v0_6 = (0xC472A98);
    v0_9 = ((*(short *)((v0_0 + 0x1C))));
    v0_4 = (0xC085CAC);
    v0_2 = (0x1);
    w0_7 = (-1000.0f);
    w0_6 = (1000.0f);
    w0_0 = (1000.0f);
    if (((unsigned int)v0_1 < (unsigned int)0xE)) goto L_C0D64B2;
    goto L_C0D6D60;
    L_C0D64B2:;
    v0_1 = (v0_8 << 1);
    v0_8 = ((v0_8 << 1));
    switch (v0_1) { case 0: goto L_C0D64F4; case 2: goto L_C0D6516; case 4: goto L_C0D6536; case 6: goto L_C0D6554; case 8: goto L_C0D65B0; case 10: goto L_C0D666A; case 12: goto L_C0D66D4; case 14: goto L_C0D6760; case 16: goto L_C0D6A24; case 18: goto L_C0D6BA4; case 20: goto L_C0D6D06; case 22: goto L_C0D6D0A; case 24: goto L_C0D6D34; case 26: goto L_C0D6D60; }
    L_C0D6D34:;
    v0_1 = FUN_0c0d62d0();
    v0_8 = (v0_1);
    if ((v0_1 == 0)) goto L_C0D6D60;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    return FUN_0c0d02a6();
    L_C0D6D0A:;
    FUN_0c0d6230((*(signed char *)0xC54223C));
    if (((*(signed char *)0xC54223C) != 1)) goto L_C0D6D2C;
    (((struct o724_float *)(v0_0))->v) = (*(float *)0xC0D6D8C);
    (((struct o720_float *)(v0_0))->v) = (((((struct o724_float *)(v0_0))->v)) + w0_7);
    FUN_0c0dc244();
    L_C0D6D2C:;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    goto L_C0D6D34;
    L_C0D6D06:;
    goto L_C0D6D60;
    L_C0D6BA4:;
    *(unsigned short *)((v0_0 + 0x1C)) = ((*(short *)((v0_0 + 0x1C))) - 1);
    *(unsigned short *)((v0_0 + 0x1E)) = ((*(short *)((v0_0 + 0x1E))) + 0x1);
    v0_9 = ((*(short *)((v0_0 + 0x1E))));
    w0_7 = (0.0f);
    if (((int)(*(int *)((v0_7 + 0x0))) <= 0)) goto L_C0D6C42;
    v0_6 = (v0_3);
    w0_1 = (-50.0f);
    w0_0 = (-1200.0f);
    if ((v0_9 != 35)) goto L_C0D6C10;
    v0_8 = *(int *)((v0_6 + 0x0));
    v0_9 = (v0_8);
    if (((*(signed char *)((v0_8 + 0x3714))) == 0)) goto L_C0D6C42;
    if ((!(((((struct o160_float *)(v0_9))->v)) > 0.0f))) goto L_C0D6C42;
    (((struct oA8_uchar *)((*(int *)((v0_6 + 0x0)))))->v) = v0_2;
    (((struct o28_float *)((*(int *)((v0_6 + 0x0)))))->v) = w0_0;
    (((struct o2C_float *)((*(int *)((v0_6 + 0x0)))))->v) = w0_7;
    (((struct o30_float *)((*(int *)((v0_6 + 0x0)))))->v) = w0_1;
    *(unsigned int *)(((*(int *)((v0_6 + 0x0))) + 0x38)) = 0x4000;
    v0_6 = ((int (*)(int, int, int, int, float, float, float, float, float, float))(v0_4))((*(int *)((v0_6 + 0x0))), 0x17, 0x3, v0_5, w0_1, w0_0, w0_2, w0_3, w0_4, w0_5);
    FUN_0c0d60bc(0x5);
    L_C0D6C42:;
    v0_9 = ((*(short *)((v0_0 + 0x1E))));
    if (((int)(*(int *)((v0_7 + 0x0))) <= (int)v0_2)) goto L_C0D6CF6;
    v0_6 = ((v0_3 + 0x4));
    w0_1 = (470.0f);
    w0_0 = (-770.0f);
    if ((v0_9 != 80)) goto L_C0D6CC4;
    v0_1 = *(int *)((v0_6 + 0x0));
    v0_9 = (v0_1);
    if (((*(signed char *)((v0_1 + 0x3714))) == 0)) goto L_C0D6CF6;
    if ((!(((((struct o160_float *)(v0_9))->v)) > 0.0f))) goto L_C0D6CF6;
    (((struct oA8_uchar *)((*(int *)((v0_6 + 0x0)))))->v) = v0_2;
    (((struct o28_float *)((*(int *)((v0_6 + 0x0)))))->v) = w0_1;
    (((struct o2C_float *)((*(int *)((v0_6 + 0x0)))))->v) = w0_7;
    (((struct o30_float *)((*(int *)((v0_6 + 0x0)))))->v) = w0_0;
    *(unsigned int *)(((*(int *)((v0_6 + 0x0))) + 0x38)) = 0x8000;
    v0_1 = ((int (*)(int, int, int, int, float, float, float, float, float, float))(v0_4))((*(int *)((v0_6 + 0x0))), 0x17, 0x2, v0_5, w0_1, w0_0, w0_2, w0_3, w0_4, w0_5);
    FUN_0c0d60bc(0x3);
    L_C0D6CF6:;
    v0_1 = *(short *)((v0_0 + 0x1E));
    v0_8 = (v0_1);
    if ((v0_1 != 0xA0)) goto L_C0D6D60;
    (((struct o15_uchar *)(v0_0))->v) = 0xA;
    v0_8 = (0x15);
    goto L_C0D6D60;
    L_C0D6CC4:;
    if (((int)v0_9 >= (int)0x50)) goto L_C0D6CF6;
    v0_2 = *(int *)((v0_6 + 0x0));
    v0_9 = (v0_2);
    if (((*(signed char *)((v0_2 + 0x3714))) == 0)) goto L_C0D6CF6;
    if ((!(((((struct o160_float *)(v0_9))->v)) > 0.0f))) goto L_C0D6CF6;
    (((struct oA8_uchar *)((*(int *)((v0_6 + 0x0)))))->v) = v0_1;
    (((struct o28_float *)((*(int *)((v0_6 + 0x0)))))->v) = w0_1;
    (((struct o2C_float *)((*(int *)((v0_6 + 0x0)))))->v) = w0_6;
    (((struct o30_float *)((*(int *)((v0_6 + 0x0)))))->v) = w0_0;
    goto L_C0D6CF6;
    L_C0D6C10:;
    if (((int)v0_9 >= (int)0x23)) goto L_C0D6C42;
    v0_8 = *(int *)((v0_6 + 0x0));
    v0_9 = (v0_8);
    if (((*(signed char *)((v0_8 + 0x3714))) == 0)) goto L_C0D6C42;
    if ((!(((((struct o160_float *)(v0_9))->v)) > 0.0f))) goto L_C0D6C42;
    (((struct oA8_uchar *)((*(int *)((v0_6 + 0x0)))))->v) = v0_1;
    (((struct o28_float *)((*(int *)((v0_6 + 0x0)))))->v) = w0_0;
    (((struct o2C_float *)((*(int *)((v0_6 + 0x0)))))->v) = w0_6;
    (((struct o30_float *)((*(int *)((v0_6 + 0x0)))))->v) = w0_1;
    goto L_C0D6C42;
    L_C0D6A24:;
    v0_6 = FUN_0c0d62d0();
    v0_8 = (v0_6);
    if ((v0_6 != 0)) goto L_C0D6A30;
    goto L_C0D6D60;
    L_C0D6A30:;
    thunk_FUN_0c0d6176();
    FUN_0c0d62cc();
    FUN_0c0d0378(0xC, 0xF);
    FUN_0c05b048(0x1, 0x0);
    v0_6 = *(int *)((v0_3 + 0x0));
    v0_9 = (v0_6);
    w0_8 = (300.0f);
    w0_7 = (-300.0f);
    if (((*(signed char *)((v0_6 + 0x3714))) == 0)) goto L_C0D6A86;
    if ((!(((((struct o160_float *)(v0_9))->v)) > 0.0f))) goto L_C0D6A86;
    v0_6 = ((int (*)(int, int, int, int, float, float, float, float, float, float))(v0_4))((*(int *)((v0_3 + 0x0))), 0x17, 0xB, v0_5, w0_1, w0_0, w0_2, w0_3, w0_4, w0_5);
    (((struct oA8_uchar *)((*(int *)((v0_3 + 0x0)))))->v) = v0_2;
    (((struct o28_float *)((*(int *)((v0_3 + 0x0)))))->v) = w0_7;
    (((struct o2C_float *)((*(int *)((v0_3 + 0x0)))))->v) = w0_6;
    (((struct o30_float *)((*(int *)((v0_3 + 0x0)))))->v) = w0_8;
    L_C0D6A86:;
    v0_6 = *(int *)((v0_3 + 0x4));
    v0_9 = (v0_6);
    if (((*(signed char *)((v0_6 + 0x3714))) == 0)) goto L_C0D6ABE;
    if ((!(((((struct o160_float *)(v0_9))->v)) > 0.0f))) goto L_C0D6ABE;
    v0_6 = ((int (*)(int, int, int, int, float, float, float, float, float, float))(v0_4))((*(int *)(((v0_3 + 0x4) + 0x0))), 0x17, 0xB, v0_5, w0_1, w0_0, w0_2, w0_3, w0_4, w0_5);
    (((struct oA8_uchar *)((*(int *)(((v0_3 + 0x4) + 0x0)))))->v) = v0_2;
    (((struct o28_float *)((*(int *)(((v0_3 + 0x4) + 0x0)))))->v) = w0_8;
    (((struct o2C_float *)((*(int *)(((v0_3 + 0x4) + 0x0)))))->v) = w0_6;
    (((struct o30_float *)((*(int *)(((v0_3 + 0x4) + 0x0)))))->v) = w0_7;
    L_C0D6ABE:;
    v0_7 = *(int *)(((v0_3 + 0x8) + 0x0));
    v0_6 = ((v0_3 + 0x8));
    v0_9 = (v0_7);
    if (((*(signed char *)((v0_7 + 0x3714))) == 0)) goto L_C0D6AF6;
    if ((!(((((struct o160_float *)(v0_9))->v)) > 0.0f))) goto L_C0D6AF6;
    v0_7 = ((int (*)(int, int, int, int, float, float, float, float, float, float))(v0_4))((*(int *)((v0_6 + 0x0))), 0x17, 0xB, v0_5, w0_1, w0_0, w0_2, w0_3, w0_4, w0_5);
    (((struct oA8_uchar *)((*(int *)((v0_6 + 0x0)))))->v) = v0_2;
    (((struct o28_float *)((*(int *)((v0_6 + 0x0)))))->v) = w0_8;
    (((struct o2C_float *)((*(int *)((v0_6 + 0x0)))))->v) = w0_6;
    (((struct o30_float *)((*(int *)((v0_6 + 0x0)))))->v) = w0_8;
    L_C0D6AF6:;
    v0_7 = *(int *)(((v0_3 + 0xC) + 0x0));
    v0_6 = ((v0_3 + 0xC));
    v0_9 = (v0_7);
    if (((*(signed char *)((v0_7 + 0x3714))) == 0)) goto L_C0D6B2E;
    if ((!(((((struct o160_float *)(v0_9))->v)) > 0.0f))) goto L_C0D6B2E;
    v0_3 = ((int (*)(int, int, int, int, float, float, float, float, float, float))(v0_4))((*(int *)((v0_6 + 0x0))), 0x17, 0xB, v0_5, w0_1, w0_0, w0_2, w0_3, w0_4, w0_5);
    (((struct oA8_uchar *)((*(int *)((v0_6 + 0x0)))))->v) = v0_2;
    (((struct o28_float *)((*(int *)((v0_6 + 0x0)))))->v) = w0_7;
    (((struct o2C_float *)((*(int *)((v0_6 + 0x0)))))->v) = w0_6;
    (((struct o30_float *)((*(int *)((v0_6 + 0x0)))))->v) = w0_7;
    L_C0D6B2E:;
    *(unsigned char *)0xC542235 = 0x2;
    FUN_0c059d30();
    *(unsigned short *)((v0_0 + 0x1C)) = (*(int *)((0xC1C826C + ((*(signed char *)0xC54223C) << 2))));
    *(unsigned short *)((v0_0 + 0x1E)) = v0_1;
    (((struct o20_ushort *)(v0_0))->v) = v0_1;
    (((struct o22_ushort *)(v0_0))->v) = v0_1;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    return FUN_0c056e44(v0_9, v0_10, v0_11);
    L_C0D6760:;
    v0_8 = (((struct o22_short *)(v0_0))->v);
    (((struct o22_ushort *)(v0_0))->v) = (v0_8 + 0x1);
    if (((int)(short)((v0_8 + 0x1) - 1) <= (int)0x384)) goto L_C0D67DC;
    (((struct o724_float *)(v0_0))->v) = (((((struct o724_float *)(v0_0))->v)) + 1.75f);
    v0_8 = (0x724);
    w0_1 = (4500.0f);
    FPUL_ = (0x3FE00000);
    if ((!(((((struct o724_float *)(v0_0))->v)) > 4500.0f))) goto L_C0D678E;
    *(float *)((v0_0 + v0_8)) = w0_1;
    L_C0D678E:;
    *(float *)((v0_0 + (v0_8 - 4))) = ((*(float *)((v0_0 + v0_8))) + w0_7);
    v0_9 = (v0_1);
    v0_10 = (v0_1);
    v0_11 = (0x30);
    w0_2 = (1.5f);
    w0_3 = (-3500.0f);
    w0_4 = (3500.0f);
    w0_5 = (600.0f);
    L_C0D67D8:;
    if (!(((unsigned int)v0_9 < (unsigned int)v0_11))) goto L_C0D67DC;
    w0_6 = (((struct o724_float *)(v0_0))->v);
    v0_8 = (0x724);
    w0_1 = (w0_6);
    if ((!(w0_6 > w0_4))) goto L_C0D67C6;
    w0_6 = w0_5;
    w0_6 = w0_6 + w0_2 * ((w0_1 + w0_3));
    *(float *)((((0x6F0 + v0_0) + v0_9) + 0x0)) = w0_6;
    w0_7 = (w0_2);
    w0_1 = ((w0_1 + w0_3));
    goto L_C0D67C6;
    L_C0D67DC:;
    if ((((((struct o22_short *)(v0_0))->v)) != 0x528)) goto L_C0D67EE;
    FUN_0c0d0378(0x7, 0xB);
    L_C0D67EE:;
    if ((((int)((int)(*(short *)((v0_0 + 0x1C))) % (int)0x14)) != 0)) goto L_C0D686A;
    v0_8 = (0x20);
    if (((int)((((struct o20_short *)(v0_0))->v)) >= (int)0x3C)) goto L_C0D686A;
    v0_9 = *(short *)((v0_0 + v0_8));
    *(unsigned short *)((v0_0 + v0_8)) = (v0_9 + 0x1);
    FUN_0c0d8858((short)((v0_9 + 0x1) - 1));
    v0_9 = FUN_0c179ac0();
    v0_8 = (v0_9);
    if (((int)v0_9 < 0)) goto L_C0D6854;
    v0_8 = ((v0_8 & 0x1));
    L_C0D685E:;
    if ((v0_8 != 0)) goto L_C0D686A;
    thunk_FUN_0c05abb2(0x42, 0x0);
    L_C0D686A:;
    v0_8 = (0x384);
    if (((*(short *)((v0_0 + 0x1C))) != 0x384)) goto L_C0D6884;
    v0_8 = v0_8;
    *(int *)((int)stk + 8) = v0_8;
    FUN_0c15d386(0x0, 0xC286EF4, 0xC286F18, 0xC286F0C, v0_8);
    L_C0D6884:;
    if (((int)(*(short *)((v0_0 + 0x1C))) >= (int)0x12C)) goto L_C0D695E;
    if (((int)(*(int *)((v0_7 + 0x0))) >= (int)((((struct o0_int *)0xC472AAC)->v)))) goto L_C0D695E;
    *(unsigned int *)(((int)stk + 12)) = v0_1;
    w0_6 = (50.0f);
    L_C0D6956:;
    if (!(((int)(*(int *)(((int)stk + 12))) < (int)0x4))) goto L_C0D695E;
    if (((*(int *)((v0_6 + ((*(int *)(((int)stk + 12))) << 2)))) != -1)) goto L_C0D6950;
    v0_8 = *(int *)(((int)stk + 12));
    v0_9 = (((v0_8 * 0x3938) + 0xC532498));
    if (((*(signed char *)((((v0_8 * 0x3938) + 0xC532498) + 0x3714))) == 0)) goto L_C0D6950;
    if ((!(((((struct o160_float *)(v0_9))->v)) > 0.0f))) goto L_C0D6950;
    w0_8 = (((struct o28_float *)(v0_9))->v);
    w0_7 = (w0_8);
    if ((!(w0_8 > 2150.0f))) goto L_C0D6950;
    w0_8 = (((struct o28_float *)(v0_9))->v);
    w0_7 = (w0_8);
    w0_7 = (2300.0f);
    if ((!(2300.0f > w0_8))) goto L_C0D6950;
    w0_8 = (((struct o2C_float *)(v0_9))->v);
    w0_7 = (w0_8);
    if ((!(w0_8 > 4500.0f))) goto L_C0D6950;
    w0_8 = (((struct o2C_float *)(v0_9))->v);
    w0_7 = (w0_8);
    if ((!(4550.0f > w0_8))) goto L_C0D6950;
    w0_8 = (((struct o30_float *)(v0_9))->v);
    v0_8 = (0x30);
    w0_7 = (w0_8);
    if ((!(w0_8 > -50.0f))) goto L_C0D6950;
    if ((!(w0_6 > (*(float *)((v0_9 + v0_8)))))) goto L_C0D6950;
    v0_8 = *(int *)(((int)stk + 12));
    *(unsigned int *)(((int)stk + 16)) = ((v0_8 * 0x3938) + 0xC532498);
    v0_8 = ((int (*)(int, int, int, int, float, float, float, float, float, float))(v0_4))(((v0_8 * 0x3938) + 0xC532498), 0x17, 0xF, v0_5, w0_1, w0_0, w0_2, w0_3, w0_4, w0_5);
    *(unsigned int *)((v0_3 + ((*(int *)((v0_7 + 0x0))) << 2))) = (*(int *)(((int)stk + 16)));
    *(unsigned int *)((v0_6 + ((*(int *)(((int)stk + 12))) << 2))) = (*(int *)(((int)stk + 12)));
    *(unsigned int *)((v0_7 + 0x0)) = ((*(int *)((v0_7 + 0x0))) + 0x1);
    goto L_C0D6950;
    L_C0D695E:;
    if (((*(short *)((v0_0 + 0x1C))) != 60)) goto L_C0D696C;
    FUN_0c05b052(0x3C, 0x0);
    L_C0D696C:;
    v0_4 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_4 - 1);
    v0_8 = ((short)(v0_4 - 1));
    if (((int)(short)(v0_4 - 1) <= 0)) goto L_C0D697C;
    goto L_C0D6D60;
    L_C0D697C:;
    v0_4 = FUN_0c042fe0();
    v0_8 = (v0_4);
    if ((v0_4 != 0)) goto L_C0D698A;
    goto L_C0D6D60;
    L_C0D698A:;
    v0_9 = (v0_1);
    v0_10 = ((((*(int *)((v0_7 + 0x0))) << 2) + v0_3));
    L_C0D69E0:;
    if (((int)v0_9 < (int)0x4)) goto L_C0D69BC;
    *(unsigned char *)0xC542235 = v0_1;
    FUN_0c05af9a(0x58, 0x0, 0x1);
    (((struct o620_uchar *)(v0_0))->v) = v0_2;
    FUN_0c0d039e(0x5, 0xB);
    FUN_0c0d6230(0x2);
    L_C0D6A04:;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    v0_8 = (0x15);
    goto L_C0D6D60;
    L_C0D69BC:;
    v0_11 = ((v0_9 << 2));
    if (((*(int *)((v0_6 + (v0_9 << 2)))) != -1)) goto L_C0D69DE;
    *(unsigned int *)((v0_10 + 0x0)) = ((v0_9 * 0x3938) + 0xC532498);
    *(unsigned int *)((v0_6 + v0_11)) = v0_9;
    v0_10 = ((v0_10 + 0x4));
    L_C0D69DE:;
    v0_9 = ((v0_9 + 0x1));
    goto L_C0D69E0;
    L_C0D6950:;
    *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 12))) + 0x1);
    goto L_C0D6956;
    L_C0D6854:;
    v0_8 = (((~(((~v0_8) + 0x1) & 0x1)) + 0x1));
    goto L_C0D685E;
    L_C0D67C6:;
    (((struct o4_float *)(((0x6F0 + v0_0) + v0_10)))->v) = ((*(float *)((v0_0 + v0_8))) + w0_0);
    v0_9 = ((v0_9 + 0xC));
    v0_10 = ((v0_10 + 0xC));
    goto L_C0D67D8;
    L_C0D66D4:;
    v0_3 = FUN_0c0d62d0();
    v0_8 = (v0_3);
    if ((v0_3 != 0)) goto L_C0D66E0;
    goto L_C0D6D60;
    L_C0D66E0:;
    FUN_0c0d62cc();
    FUN_0c0d0378(0x5, 0x6);
    FUN_0c059c7a(0x5, 0x0);
    *(unsigned int *)((v0_6 + 0xC)) = 0xFFFFFFFF;
    *(unsigned int *)((v0_6 + 0x8)) = 0xFFFFFFFF;
    *(unsigned int *)((v0_6 + 0x4)) = 0xFFFFFFFF;
    *(unsigned int *)((v0_6 + 0x0)) = 0xFFFFFFFF;
    *(unsigned int *)((v0_7 + 0x0)) = 0x0;
    if (((*(signed char *)0xC5429B4) != 4)) goto L_C0D6710;
    (((struct o0_uint *)0xC472AAC)->v) = v0_2;
    L_C0D6716:;
    *(unsigned short *)((v0_0 + 0x1C)) = (*(int *)((0xC1C826C + ((*(signed char *)0xC54223C) << 2))));
    *(unsigned short *)((v0_0 + 0x1E)) = v0_1;
    v0_8 = (0x22);
    L_C0D65AC:;
    *(unsigned short *)((v0_0 + v0_8)) = v0_1;
    goto L_C0D6A04;
    L_C0D6710:;
    (((struct o0_uint *)0xC472AAC)->v) = 0x2;
    goto L_C0D6716;
    L_C0D666A:;
    if ((((int)((int)v0_9 % (int)0x14)) != 0)) goto L_C0D66AA;
    v0_1 = (((struct o20_short *)(v0_0))->v);
    (((struct o20_ushort *)(v0_0))->v) = (v0_1 + 0x1);
    FUN_0c0d8858((short)((v0_1 + 0x1) - 1));
    v0_1 = FUN_0c179ac0();
    v0_8 = (v0_1);
    if (((int)v0_1 < 0)) goto L_C0D6694;
    v0_8 = ((v0_8 & 0x1));
    L_C0D669E:;
    if ((v0_8 != 0)) goto L_C0D66AA;
    thunk_FUN_0c05abb2(0x42, 0x0);
    L_C0D66AA:;
    v0_1 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_1 - 1);
    v0_8 = ((short)(v0_1 - 1));
    if (((int)(short)(v0_1 - 1) <= 0)) goto L_C0D66BA;
    goto L_C0D6D60;
    L_C0D66BA:;
    FUN_0c05af9a(0x58, 0x32, 0x78);
    FUN_0c0d039e(0x0, 0x4);
    FUN_0c0d6230(0x1);
    goto L_C0D6A04;
    L_C0D6694:;
    v0_8 = (((~(((~v0_8) + 0x1) & 0x1)) + 0x1));
    goto L_C0D669E;
    L_C0D65B0:;
    if ((((int)((int)v0_9 % (int)0x14)) != 0)) goto L_C0D6642;
    v0_1 = (((struct o20_short *)(v0_0))->v);
    (((struct o20_ushort *)(v0_0))->v) = (v0_1 + 0x1);
    FUN_0c0d8858((short)((v0_1 + 0x1) - 1));
    v0_1 = FUN_0c179ac0();
    v0_8 = (v0_1);
    if (((int)v0_1 < 0)) goto L_C0D662C;
    v0_8 = ((v0_8 & 0x1));
    L_C0D6636:;
    if ((v0_8 != 0)) goto L_C0D6642;
    thunk_FUN_0c05abb2(0x42, 0x0);
    L_C0D6642:;
    v0_1 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_1 - 1);
    v0_8 = ((short)(v0_1 - 1));
    if (((int)(short)(v0_1 - 1) <= (int)0x78)) goto L_C0D6654;
    goto L_C0D6D60;
    L_C0D6654:;
    thunk_FUN_0c05abb2(0x58, 0x0);
    FUN_0c05af9a(0x58, 0x7F, 0xB4);
    goto L_C0D6A04;
    L_C0D662C:;
    v0_8 = (((~(((~v0_8) + 0x1) & 0x1)) + 0x1));
    goto L_C0D6636;
    L_C0D6554:;
    if ((v0_9 != 0x384)) goto L_C0D6562;
    FUN_0c0522be((*(int *)0xC241B80));
    L_C0D6562:;
    v0_2 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_2 - 1);
    v0_8 = ((short)(v0_2 - 1));
    if (((int)(short)(v0_2 - 1) <= (int)0x30C)) goto L_C0D6574;
    goto L_C0D6D60;
    L_C0D6574:;
    *(int *)((int)stk + 8) = 0x4B0;
    *(unsigned int *)(((int)stk + 12)) = 0xC286F0C;
    FUN_0c15d386(0x1, 0xC286ED0, 0xC286F00, 0xC286F0C, 0x4B0);
    *(int *)((int)stk + 4) = 0x4B0;
    FUN_0c15d386(0x1, 0xC286EDC, 0xC286F00, (*(int *)(((int)stk + 12))), 0x4B0);
    *(int *)((int)stk + 0) = 0x960;
    FUN_0c15d386(0x1, 0xC286EE8, 0xC286F00, 0xC286F24, 0x960);
    v0_8 = (0x20);
    goto L_C0D65AC;
    L_C0D6536:;
    v0_1 = FUN_0c042fe0();
    v0_8 = (v0_1);
    if ((v0_1 != 0)) goto L_C0D6544;
    goto L_C0D6D60;
    L_C0D6544:;
    FUN_0c0d62cc();
    v0_8 = ((*(int *)((0xC1C826C + ((*(signed char *)0xC54223C) << 2)))));
    L_C0D6532:;
    *(unsigned short *)((v0_0 + 0x1C)) = v0_8;
    goto L_C0D6A04;
    L_C0D6516:;
    v0_2 = FUN_0c0d62d0();
    v0_8 = (v0_2);
    if ((v0_2 != 0)) goto L_C0D6522;
    goto L_C0D6D60;
    L_C0D6522:;
    thunk_FUN_0c0d6176();
    FUN_0c0d0378(0x0, 0x4);
    v0_8 = (v0_1);
    goto L_C0D6532;
    L_C0D64F4:;
    FUN_0c0d6230(0x0);
    FUN_0c0d634c();
    (((struct oC_uint *)0xC472AAC)->v) = v0_2;
    (((struct o8_uint *)0xC472AAC)->v) = v0_2;
    (((struct o4_uint *)0xC472AAC)->v) = v0_2;
    (((struct o18_uint *)0xC472AAC)->v) = 0x0;
    (((struct o14_uint *)0xC472AAC)->v) = 0x0;
    (((struct o10_uint *)0xC472AAC)->v) = 0x0;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    goto L_C0D6516;
    L_C0D6478:;
    v0_2 = *(signed char *)((v0_0 + 0x14));
    (((struct o14_uchar *)(v0_0))->v) = (v0_2 + 0x1);
    (((struct oC0_uint *)(v0_0))->v) = v0_1;
    (((struct oA8_uchar *)(v0_0))->v) = v0_1;
    (((struct o15_uchar *)(v0_0))->v) = v0_1;
    v0_8 = ((v0_2 + 0x1));
    goto L_C0D648C;
}

int FUN_0c0122e4(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    register int t5;
    int t6;
    register int t7;
    register int t8;

    t7 = *(signed char *)((a4 + 0x0));
    if ((unsigned char)t7 != 0) {
        if ((unsigned char)t7 == 1) {
            t8 = *(short *)((a4 + 0x16));
            *(unsigned short *)((a4 + 0x16)) = (t8 - 1);
            if ((int)(short)(t8 - 1) >= 0) {
            } else {
                *(unsigned char *)((a4 + 0x0)) = ((*(signed char *)((a4 + 0x0))) + 0x1);
            }
            FUN_0c0135bc(0x0);
        } else {
            if ((unsigned char)t7 == 4) {
                t8 = *(short *)((a4 + 0x16));
                *(unsigned short *)((a4 + 0x16)) = (t8 - 1);
                if ((int)(short)(t8 - 1) >= 0) {
                } else {
                    *(unsigned char *)((a4 + 0x0)) = ((*(signed char *)((a4 + 0x0))) + 0x1);
                }
                FUN_0c0135bc(0x1);
            } else {
                if ((unsigned char)t7 == 2) {
                    t8 = *(signed char *)((a4 + 0xB));
                    if (t8 != 0) {
                        if (t8 != 2) {
                        } else {
                            t8 = *(signed char *)((a4 + 0x8));
                            switch (t8) {
                            case 0:
                                *(unsigned char *)((a4 + 0xB)) = 0x0;
                                *(unsigned char *)((a4 + 0x2)) = (*(signed char *)((a4 + 0x0)));
                                *(unsigned char *)((a4 + 0x3)) = 0x0;
                                *(unsigned char *)((a4 + 0x0)) = 0x28;
                                FUN_0c0159c4(0x0, 0x0, 0xC30AD64, 0x10, 0x3);
                                FUN_0c015b58();
                                break;
                            case 1:
                                *(unsigned char *)((a4 + 0xB)) = 0x0;
                                *(unsigned char *)((a4 + 0x2)) = (*(signed char *)((a4 + 0x0)));
                                *(unsigned char *)((a4 + 0x3)) = 0x1;
                                *(unsigned char *)((a4 + 0x0)) = 0x28;
                                FUN_0c0159c4(0x0, 0x0, 0xC30AD76, 0xB, 0x4);
                                FUN_0c015b58();
                                break;
                            case 2:
                                *(unsigned char *)((a4 + 0xB)) = 0x0;
                                *(unsigned char *)((a4 + 0x2)) = (*(signed char *)((a4 + 0x0)));
                                *(unsigned char *)((a4 + 0x3)) = 0x2;
                                *(unsigned char *)((a4 + 0x0)) = 0x28;
                                FUN_0c0159c4(0x0, 0x0, 0xC30ADF6, 0x7F, 0x1);
                                FUN_0c015b58();
                                break;
                            case 3:
                                *(unsigned char *)((a4 + 0xB)) = 0x0;
                                *(unsigned char *)((a4 + 0x2)) = (*(signed char *)((a4 + 0x0)));
                                *(unsigned char *)((a4 + 0x3)) = 0x9;
                                *(unsigned char *)((a4 + 0x0)) = 0x28;
                                *(unsigned int *)0xC30441C = 0x0;
                                *(unsigned int *)0xC30441C = (FUN_0c013746(0xC30AF7E));
                                FUN_0c187b48(0xC30AF7E, 0x0, 0xA);
                                *(volatile int *)0xC30441C;
                                FUN_0c187cac(0xC30AF7E, 0x0, 0x0, 0x0, 0xC1A5C48);
                                FUN_0c0159c4(0x0, 0x0, 0xC30AF7E, 0x8, 0x4);
                                FUN_0c015b58();
                                break;
                            case 4:
                                t8 = FUN_0c013aa6();
                                if (t8 == 1) {
                                    *(unsigned char *)((a4 + 0x0)) = 0x3;
                                    *(unsigned short *)((a4 + 0x16)) = 0xF;
                                    FUN_0c0573cc(0xFF000000, 0x0, 0xF);
                                } else {
                                    *(unsigned char *)((a4 + 0x0)) = 0x32;
                                    *(unsigned short *)((a4 + 0x16)) = 0xB4;
                                    FUN_0c018e74(0x1);
                                }
                                break;
                            }
                        }
                    } else {
                        FUN_0c01ca2a((a4 + 0x8), 0x4, 0x0);
                        t8 = FUN_0c01cd2c(0x101);
                        if (((short)t8 == 0) && (t0 = *(signed char *)0xC30EF9E, (unsigned char)t0 != 40)) {
                        } else {
                            *(unsigned char *)((a4 + 0xB)) = 0x1;
                            FUN_0c05aab6(0x0, 0x3);
                        }
                    }
                    t0 = FUN_0c01cd2c(0x40);
                    if ((short)t0 == 0) {
                    } else {
                        FUN_0c05aab6(0x0, 0x4);
                        *(unsigned char *)((a4 + 0x0)) = 0x63;
                        *(unsigned short *)((a4 + 0x16)) = 0x14;
                        FUN_0c0573cc(0xFF000000, 0x0, 0x14);
                    }
                    FUN_0c0135bc(0x0);
                } else {
                    if ((unsigned char)t7 == 3) {
                        t0 = *(short *)((a4 + 0x16));
                        *(unsigned short *)((a4 + 0x16)) = (t0 - 1);
                        if ((int)(short)(t0 - 1) >= 0) {
                        } else {
                            *(unsigned char *)((a4 + 0x7)) = 0x0;
                            *(unsigned char *)((a4 + 0x8)) = 0x0;
                            *(unsigned char *)((a4 + 0xA)) = 0x1;
                            *(unsigned char *)((a4 + 0xB)) = 0x0;
                            *(unsigned char *)((a4 + 0x0)) = ((*(signed char *)((a4 + 0x0))) + 0x1);
                            FUN_0c0573c0(0xFF000000, 0x0, 0xF);
                            *(unsigned short *)((a4 + 0x16)) = 0xF;
                        }
                        FUN_0c0135bc(0x0);
                    } else {
                        if ((unsigned char)t7 == 5) {
                            t0 = *(signed char *)((a4 + 0xB));
                            if (t0 != 0) {
                                if (t0 != 2) {
                                } else {
                                    t0 = *(signed char *)((a4 + 0x8));
                                    t8 = *(signed char *)((a4 + 0x7));
                                    if ((t8 + (t0 << 1)) != 0) {
                                        if ((t8 + (t0 << 1)) != 1) {
                                            if (((t8 + (t0 << 1)) != 2) && ((t8 + (t0 << 1)) != 3)) {
                                                if (((t8 + (t0 << 1)) != 4) && ((t8 + (t0 << 1)) != 5)) {
                                                    if ((t8 + (t0 << 1)) != 6) {
                                                        if ((t8 + (t0 << 1)) != 7) {
                                                            if ((t8 + (t0 << 1)) == 8) {
                                                                *(unsigned char *)((a4 + 0x0)) = 0x7;
                                                                *(unsigned short *)((a4 + 0x16)) = 0xF;
                                                                FUN_0c0573cc(0xFF000000, 0x0, 0xF);
                                                            } else {
                                                                if ((t8 + (t0 << 1)) == 9) {
                                                                    *(unsigned char *)((a4 + 0x0)) = 0x3C;
                                                                    (((struct o1B_uchar *)(a4))->v) = 0x0;
                                                                    *(unsigned short *)((a4 + 0x16)) = 0x258;
                                                                    FUN_0c018e9c(0x2F, (a4 + 0x1B));
                                                                }
                                                            }
                                                        } else {
                                                            *(unsigned char *)((a4 + 0xB)) = 0x0;
                                                            (((struct o19_uchar *)(a4))->v) = 0x1;
                                                            *(unsigned char *)((a4 + 0x2)) = (*(signed char *)((a4 + 0x0)));
                                                            *(unsigned char *)((a4 + 0x1)) = 0x0;
                                                            (((struct o1A_uchar *)(a4))->v) = 0x0;
                                                            *(unsigned char *)((a4 + 0x0)) = 0x14;
                                                        }
                                                    } else {
                                                        *(unsigned char *)((a4 + 0xB)) = 0x0;
                                                        *(unsigned char *)((a4 + 0x2)) = (*(signed char *)((a4 + 0x0)));
                                                        *(unsigned char *)((a4 + 0x3)) = 0x8;
                                                        *(unsigned char *)((a4 + 0x0)) = 0x28;
                                                        FUN_0c0159c4(0x0, 0x0, 0xC30AEB6, 0x20, 0x0);
                                                        FUN_0c015b58();
                                                    }
                                                } else {
                                                    *(unsigned char *)((a4 + 0xB)) = 0x0;
                                                    *(unsigned char *)((a4 + 0x2)) = (*(signed char *)((a4 + 0x0)));
                                                    *(unsigned char *)((a4 + 0x3)) = 0x7;
                                                    *(unsigned char *)((a4 + 0x0)) = 0x28;
                                                    FUN_0c0159c4(0x0, 0x0, 0xC30AF0A, 0x6E, 0x0);
                                                    FUN_0c015b58();
                                                }
                                            } else {
                                                *(unsigned char *)((a4 + 0xB)) = 0x0;
                                                *(unsigned char *)((a4 + 0x2)) = (*(signed char *)((a4 + 0x0)));
                                                *(unsigned char *)((a4 + 0x3)) = 0x5;
                                                *(unsigned char *)((a4 + 0x0)) = 0x28;
                                                FUN_0c0159c4(0x0, 0x0, 0xC30AEF6, 0x8, 0x4);
                                                FUN_0c015b58();
                                            }
                                        } else {
                                            *(unsigned char *)((a4 + 0xB)) = 0x0;
                                            *(unsigned char *)((a4 + 0x2)) = (*(signed char *)((a4 + 0x0)));
                                            *(unsigned char *)((a4 + 0x3)) = 0x4;
                                            *(unsigned char *)((a4 + 0x0)) = 0x28;
                                            *(unsigned int *)0xC30441C = 0x0;
                                            *(unsigned int *)0xC30441C = (FUN_0c013746(0xC30AF7A));
                                            FUN_0c187b48(0xC30AF7A, 0x0, 0x4);
                                            *(volatile int *)0xC30441C;
                                            FUN_0c187cac(0xC30AF7A, 0x0, 0x0, 0x0, 0xC1A5C48);
                                            FUN_0c0159c4(0x0, 0x0, 0xC30AF7A, 0x2, 0x4);
                                            FUN_0c015b58();
                                        }
                                    } else {
                                        *(unsigned char *)((a4 + 0xB)) = 0x0;
                                        *(unsigned char *)((a4 + 0x2)) = (*(signed char *)((a4 + 0x0)));
                                        *(unsigned char *)((a4 + 0x3)) = 0x3;
                                        *(unsigned char *)((a4 + 0x0)) = 0x28;
                                        FUN_0c0159c4(0x0, 0x0, 0xC30AE76, 0x3E, 0x0);
                                        FUN_0c015b58();
                                    }
                                }
                            } else {
                                FUN_0c01ca2a((a4 + 0x7), 0x1, 0x1);
                                FUN_0c01ca2a((a4 + 0x8), 0x4, 0x0);
                                t0 = FUN_0c01cd2c(0x101);
                                if (((short)t0 == 0) && (t1 = *(signed char *)0xC30EF9E, (unsigned char)t1 != 40)) {
                                } else {
                                    FUN_0c05aab6(0x0, 0x3);
                                    *(unsigned char *)((a4 + 0xB)) = 0x1;
                                }
                            }
                            t0 = FUN_0c01cd2c(0x40);
                            if ((short)t0 == 0) {
                            } else {
                                FUN_0c05aab6(0x0, 0x4);
                                *(unsigned char *)((a4 + 0x0)) = 0x7;
                                *(unsigned short *)((a4 + 0x16)) = 0xF;
                                FUN_0c0573cc(0xFF000000, 0x0, 0xF);
                            }
                            FUN_0c0135bc(0x1);
                        } else {
                            if ((unsigned char)t7 == 60) {
                                t0 = *(short *)((a4 + 0x16));
                                *(unsigned short *)((a4 + 0x16)) = (t0 - 1);
                                if ((int)(short)(t0 - 1) > 0) {
                                    t0 = FUN_0c01cd2c(0x40);
                                    if ((short)t0 == 0) {
                                        t0 = FUN_0c01cd2c(0x101);
                                        if (((short)t0 != 0) && (t2 = *(signed char *)((a4 + 0x1B)), (unsigned char)t2 == 1)) {
                                            *(unsigned char *)((a4 + 0x0)) = 0x5;
                                            *(unsigned char *)((a4 + 0x7)) = 0x0;
                                            *(unsigned char *)((a4 + 0x8)) = 0x0;
                                            *(unsigned char *)((a4 + 0xB)) = 0x0;
                                            FUN_0c018fd2(0x2F);
                                            FUN_0c05aab6(0x0, 0x4);
                                        } else {
                                            t0 = FUN_0c01cd2c(0x101);
                                            if ((short)t0 != 0) {
                                                *(unsigned short *)((a4 + 0x16)) = 0x14;
                                                FUN_0c0573cc(0xFF000000, 0x0, 0x14);
                                                *(unsigned char *)((a4 + 0x0)) = 0x3D;
                                                FUN_0c018fd2(0x2F);
                                                FUN_0c05aab6(0x0, 0x3);
                                            } else {
                                                FUN_0c01c714((a4 + 0x1B), 0x1, 0x2);
                                            }
                                        }
                                    } else {
                                        *(unsigned char *)((a4 + 0x0)) = 0x5;
                                        *(unsigned char *)((a4 + 0x7)) = 0x0;
                                        *(unsigned char *)((a4 + 0x8)) = 0x0;
                                        *(unsigned char *)((a4 + 0xB)) = 0x0;
                                        FUN_0c018fd2(0x2F);
                                        FUN_0c05aab6(0x0, 0x4);
                                    }
                                } else {
                                    *(unsigned char *)((a4 + 0x0)) = 0x5;
                                    *(unsigned char *)((a4 + 0x7)) = 0x0;
                                    *(unsigned char *)((a4 + 0x8)) = 0x0;
                                    *(unsigned char *)((a4 + 0xB)) = 0x0;
                                    FUN_0c018fd2(0x2F);
                                    FUN_0c05aab6(0x0, 0x4);
                                }
                                FUN_0c0135bc(0x1);
                            } else {
                                if ((unsigned char)t7 == 61) {
                                    t0 = *(short *)((a4 + 0x16));
                                    *(unsigned short *)((a4 + 0x16)) = (t0 - 1);
                                    if ((int)(short)(t0 - 1) >= 0) {
                                    } else {
                                        *(unsigned char *)((a4 + 0xA)) = 0x2;
                                        *(unsigned char *)((a4 + 0x5)) = 0x1;
                                        *(unsigned char *)((a4 + 0x0)) = 0x0;
                                        FUN_0c0139bc();
                                    }
                                    FUN_0c0135bc(0x1);
                                } else {
                                    if ((unsigned char)t7 == 7) {
                                        t0 = *(short *)((a4 + 0x16));
                                        *(unsigned short *)((a4 + 0x16)) = (t0 - 1);
                                        if ((int)(short)(t0 - 1) >= 0) {
                                        } else {
                                            *(unsigned char *)((a4 + 0x7)) = 0x0;
                                            *(unsigned char *)((a4 + 0x8)) = 0x0;
                                            *(unsigned char *)((a4 + 0xA)) = 0x0;
                                            *(unsigned char *)((a4 + 0xB)) = 0x0;
                                            *(unsigned char *)((a4 + 0x0)) = ((*(signed char *)((a4 + 0x0))) + 0x1);
                                            FUN_0c0573c0(0xFF000000, 0x0, 0xF);
                                            *(unsigned short *)((a4 + 0x16)) = 0xF;
                                        }
                                        FUN_0c0135bc(0x1);
                                    } else {
                                        if ((unsigned char)t7 == 8) {
                                            t0 = *(short *)((a4 + 0x16));
                                            *(unsigned short *)((a4 + 0x16)) = (t0 - 1);
                                            if ((int)(short)(t0 - 1) >= 0) {
                                            } else {
                                                *(unsigned char *)((a4 + 0x0)) = 0x2;
                                            }
                                            FUN_0c0135bc(0x0);
                                        } else {
                                            if ((unsigned char)t7 == 20) {
                                                t0 = *(signed char *)((a4 + 0x1));
                                                if ((unsigned char)t0 != 0) {
                                                    if ((unsigned char)t0 != 1) {
                                                        if ((unsigned char)t0 != 2) {
                                                            if ((unsigned char)t0 != 3) {
                                                            } else {
                                                                if ((int)(*(signed char *)((a4 + 0x19))) < (int)0x5) {
                                                                } else {
                                                                    *(unsigned char *)((a4 + 0x0)) = (*(signed char *)((a4 + 0x2)));
                                                                    *(unsigned char *)((a4 + 0x1)) = 0x0;
                                                                    if ((*(signed char *)((a4 + 0x1C))) == -1) {
                                                                    } else {
                                                                        if ((*(signed char *)((a4 + 0x1A))) == 0) {
                                                                            *(unsigned char *)0xC30AF88 = 0x0;
                                                                        } else {
                                                                            *(unsigned char *)0xC30AF88 = 0x1;
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            FUN_0c01ca2a((a4 + 0x1A), 0x1, 0x2);
                                                            t0 = FUN_0c01cd2c(0x101);
                                                            if (((short)t0 == 0) && (t3 = *(signed char *)0xC30EF9E, (unsigned char)t3 != 40)) {
                                                                t0 = FUN_0c01cd2c(0x40);
                                                                if (((short)t0 == 0) && (t4 = *(signed char *)0xC30EF9E, (unsigned char)t4 != 41)) {
                                                                } else {
                                                                    *(unsigned char *)((a4 + 0x1)) = ((*(signed char *)((a4 + 0x1))) + 0x1);
                                                                    (((struct o19_uchar *)(a4))->v) = 0xFFFFFFFF;
                                                                    (((struct o1C_uchar *)(a4))->v) = (*(signed char *)((a4 + 0x19)));
                                                                    FUN_0c05aab6(0x0, 0x4);
                                                                }
                                                            } else {
                                                                *(unsigned char *)((a4 + 0x1)) = ((*(signed char *)((a4 + 0x1))) + 0x1);
                                                                (((struct o19_uchar *)(a4))->v) = 0x3;
                                                                (((struct o1C_uchar *)(a4))->v) = (*(signed char *)((a4 + 0x19)));
                                                                FUN_0c05aab6(0x0, 0x3);
                                                            }
                                                        }
                                                    } else {
                                                        if ((*(signed char *)((a4 + 0x19))) != 2) {
                                                        } else {
                                                            *(unsigned char *)((a4 + 0x1)) = ((*(signed char *)((a4 + 0x1))) + 0x1);
                                                        }
                                                    }
                                                } else {
                                                    (((struct o41C_uint *)((FUN_0c01cc56(0x16, 0xC012134))))->v) = a4;
                                                    *(unsigned char *)((a4 + 0x1)) = ((*(signed char *)((a4 + 0x1))) + 0x1);
                                                    if ((*(signed char *)0xC30AF88) == 0) {
                                                        (((struct o1A_uchar *)(a4))->v) = 0x0;
                                                    } else {
                                                        (((struct o1A_uchar *)(a4))->v) = 0x1;
                                                    }
                                                }
                                                FUN_0c0135bc(0x1);
                                            } else {
                                                if ((unsigned char)t7 == 40) {
                                                    t0 = FUN_0c015b58();
                                                    if (t0 == 1) {
                                                        t1 = *(signed char *)((a4 + 0x3));
                                                        if (((unsigned char)t1 != 0) && (((unsigned char)t1 != 1) && (((unsigned char)t1 != 2) && (((unsigned char)t1 != 3) && ((unsigned char)t1 != 4))))) {
                                                            if (((unsigned char)t1 != 5) && (((unsigned char)t1 != 6) && (((unsigned char)t1 != 7) && ((unsigned char)t1 != 8)))) {
                                                                if ((unsigned char)t1 != 9) {
                                                                } else {
                                                                    *(unsigned int *)0xC30441C = 0x0;
                                                                    *(unsigned int *)0xC30441C = (FUN_0c013746(0xC30AF7E));
                                                                    FUN_0c187b48(0xC30AF7E, 0x0, 0xA);
                                                                    *(volatile int *)0xC30441C;
                                                                    FUN_0c187cac(0xC30AF7E, 0x0, 0x0, 0x0, 0xC1A5C50);
                                                                }
                                                            }
                                                        } else {
                                                            *(unsigned int *)0xC30441C = 0x0;
                                                            *(unsigned int *)0xC30441C = (FUN_0c013746(0xC30AF7A));
                                                            FUN_0c187b48(0xC30AF7A, 0x0, 0x4);
                                                            *(volatile int *)0xC30441C;
                                                            FUN_0c187cac(0xC30AF7A, 0x0, 0x0, 0x0, 0xC1A5C4C);
                                                        }
                                                        *(unsigned char *)((a4 + 0x0)) = (*(signed char *)((a4 + 0x2)));
                                                    } else {
                                                        if (t0 == -1) {
                                                            *(unsigned char *)((a4 + 0x0)) = (*(signed char *)((a4 + 0x2)));
                                                        }
                                                    }
                                                    t0 = 0x1;
                                                    if ((unsigned char)(*(signed char *)((a4 + 0x2))) == 2) {
                                                        t0 = 0x0;
                                                    }
                                                    FUN_0c0135bc(t0);
                                                } else {
                                                    if ((unsigned char)t7 == 50) {
                                                        t0 = *(short *)((a4 + 0x16));
                                                        *(unsigned short *)((a4 + 0x16)) = (t0 - 1);
                                                        if ((int)(short)(t0 - 1) > 0) {
                                                            t0 = FUN_0c01cd2c(0x141);
                                                            if (((short)t0 == 0) && ((t5 = *(signed char *)0xC30EF9E, (unsigned char)t5 != 40) && (t6 = *(signed char *)0xC30EF9E, (unsigned char)t6 != 41))) {
                                                            } else {
                                                                *(unsigned char *)((a4 + 0x0)) = 0x33;
                                                                (((struct o18_uchar *)(a4))->v) = 0x1;
                                                                FUN_0c018fd2(0x1);
                                                            }
                                                        } else {
                                                            *(unsigned char *)((a4 + 0x0)) = 0x33;
                                                            (((struct o18_uchar *)(a4))->v) = 0x1;
                                                            FUN_0c018fd2(0x1);
                                                        }
                                                        FUN_0c0135bc(0x0);
                                                    } else {
                                                        if ((unsigned char)t7 == 51) {
                                                            *(unsigned char *)((a4 + 0x0)) = 0x2;
                                                            *(unsigned char *)((a4 + 0x8)) = 0x0;
                                                            *(unsigned char *)((a4 + 0xB)) = 0x0;
                                                            FUN_0c0135bc(0x0);
                                                        } else {
                                                            if ((unsigned char)t7 == 99) {
                                                                t0 = *(short *)((a4 + 0x16));
                                                                *(unsigned short *)((a4 + 0x16)) = (t0 - 1);
                                                                if ((int)(short)(t0 - 1) < 0) {
                                                                    *(unsigned char *)((a4 + 0x0)) = ((*(signed char *)((a4 + 0x0))) + 0x1);
                                                                    *(unsigned char *)((a4 + 0xA)) = 0x2;
                                                                    *(unsigned char *)((a4 + 0x5)) = 0x2;
                                                                } else {
                                                                    t0 = 0x1;
                                                                    if ((*(signed char *)((a4 + 0xA))) == 0) {
                                                                        t0 = 0x0;
                                                                    }
                                                                    FUN_0c0135bc(t0);
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
                }
            }
        }
    } else {
        FUN_0c013848();
        FUN_0c01cb7c();
        t0 = FUN_0c01cc56(0xE, 0xC011AD0);
        (((struct o41C_uint *)(t0))->v) = a4;
        *(unsigned char *)(((t0 + 0x41C) + 0x7)) = 0x0;
        t0 = FUN_0c01cc56(0x14, 0xC011B04);
        (((struct o41C_uint *)(t0))->v) = a4;
        *(unsigned char *)(((t0 + 0x41C) + 0x7)) = 0x0;
        t0 = FUN_0c01cc56(0x15, 0xC011C08);
        (((struct o41C_uint *)(t0))->v) = a4;
        *(unsigned char *)(((t0 + 0x41C) + 0x7)) = 0x0;
        t0 = FUN_0c01cc56(0xF, 0xC011AD0);
        (((struct o41C_uint *)(t0))->v) = a4;
        *(unsigned char *)(((t0 + 0x41C) + 0x7)) = 0x1;
        t0 = FUN_0c01cc56(0x14, 0xC011CE8);
        (((struct o41C_uint *)(t0))->v) = a4;
        *(unsigned char *)(((t0 + 0x41C) + 0x7)) = 0x1;
        t0 = FUN_0c01cc56(0x15, 0xC011E66);
        (((struct o41C_uint *)(t0))->v) = a4;
        *(unsigned char *)(((t0 + 0x41C) + 0x7)) = 0x1;
        (((struct o19_uchar *)(a4))->v) = 0x0;
        *(unsigned char *)((a4 + 0x5)) = 0x0;
        *(unsigned char *)((a4 + 0x7)) = 0x0;
        *(unsigned char *)((a4 + 0x8)) = 0x0;
        *(unsigned char *)((a4 + 0x4)) = 0x0;
        *(unsigned char *)((a4 + 0xA)) = 0x0;
        *(unsigned char *)((a4 + 0xB)) = 0x0;
        *(unsigned char *)((a4 + 0x0)) = ((*(signed char *)((a4 + 0x0))) + 0x1);
        FUN_0c0573c0(0xFF000000, 0x0, 0x14);
        *(unsigned short *)((a4 + 0x16)) = 0x14;
    }
    return (*(signed char *)((a4 + 0x5)));
}

int FUN_0c012cb8(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    register int t5;
    int t6;
    register int t7;
    register int t8;

    t7 = *(signed char *)((a4 + 0x0));
    if ((unsigned char)t7 != 0) {
        if ((unsigned char)t7 == 1) {
            t8 = *(short *)((a4 + 0x16));
            *(unsigned short *)((a4 + 0x16)) = (t8 - 1);
            if ((int)(short)(t8 - 1) >= 0) {
            } else {
                *(unsigned char *)((a4 + 0x0)) = ((*(signed char *)((a4 + 0x0))) + 0x1);
            }
            FUN_0c0135bc(0x0);
        } else {
            if ((unsigned char)t7 == 4) {
                t8 = *(short *)((a4 + 0x16));
                *(unsigned short *)((a4 + 0x16)) = (t8 - 1);
                if ((int)(short)(t8 - 1) >= 0) {
                } else {
                    *(unsigned char *)((a4 + 0x0)) = ((*(signed char *)((a4 + 0x0))) + 0x1);
                }
                FUN_0c0135bc(0x1);
            } else {
                if ((unsigned char)t7 == 2) {
                    FUN_0c01ca2a((a4 + 0x8), 0x3, 0x0);
                    t8 = *(signed char *)((a4 + 0xB));
                    if (t8 != 0) {
                        if (t8 != 2) {
                        } else {
                            t8 = *(signed char *)((a4 + 0x8));
                            switch (t8) {
                            case 0:
                                *(unsigned char *)((a4 + 0xB)) = 0x0;
                                *(unsigned char *)((a4 + 0x2)) = (*(signed char *)((a4 + 0x0)));
                                *(unsigned char *)((a4 + 0x3)) = 0x1;
                                *(unsigned char *)((a4 + 0x0)) = 0x28;
                                FUN_0c0159c4(0x0, 0x0, 0xC30AD76, 0xB, 0x4);
                                FUN_0c015b58();
                                break;
                            case 1:
                                *(unsigned char *)((a4 + 0xB)) = 0x0;
                                *(unsigned char *)((a4 + 0x2)) = (*(signed char *)((a4 + 0x0)));
                                *(unsigned char *)((a4 + 0x3)) = 0x2;
                                *(unsigned char *)((a4 + 0x0)) = 0x28;
                                FUN_0c0159c4(0x0, 0x0, 0xC30ADF6, 0x7F, 0x1);
                                FUN_0c015b58();
                                break;
                            case 2:
                                *(unsigned char *)((a4 + 0xB)) = 0x0;
                                *(unsigned char *)((a4 + 0x2)) = (*(signed char *)((a4 + 0x0)));
                                *(unsigned char *)((a4 + 0x3)) = 0x9;
                                *(unsigned char *)((a4 + 0x0)) = 0x28;
                                *(unsigned int *)0xC304420 = 0x0;
                                *(unsigned int *)0xC304420 = (FUN_0c013746(0xC30AF7E));
                                FUN_0c187b48(0xC30AF7E, 0x0, 0xA);
                                *(volatile int *)0xC304420;
                                FUN_0c187cac(0xC30AF7E, 0x0, 0x0, 0x0, 0xC1A5C48);
                                FUN_0c0159c4(0x0, 0x0, 0xC30AF7E, 0x8, 0x4);
                                FUN_0c015b58();
                                break;
                            case 3:
                                t8 = FUN_0c013aa6();
                                if (t8 == 1) {
                                    *(unsigned char *)((a4 + 0x0)) = 0x3;
                                    *(unsigned short *)((a4 + 0x16)) = 0xF;
                                    FUN_0c0573cc(0xFF000000, 0x0, 0xF);
                                } else {
                                    *(unsigned char *)((a4 + 0x0)) = 0x32;
                                    *(unsigned short *)((a4 + 0x16)) = 0xB4;
                                    FUN_0c018e74(0x1);
                                }
                                break;
                            }
                        }
                    } else {
                        t8 = FUN_0c01cd2c(0x101);
                        if (((short)t8 == 0) && (t0 = *(signed char *)0xC30EF9E, (unsigned char)t0 != 40)) {
                        } else {
                            FUN_0c05aab6(0x0, 0x3);
                            *(unsigned char *)((a4 + 0xB)) = 0x1;
                        }
                    }
                    t0 = FUN_0c01cd2c(0x40);
                    if ((short)t0 == 0) {
                    } else {
                        FUN_0c05aab6(0x0, 0x4);
                        *(unsigned char *)((a4 + 0x0)) = 0x63;
                        *(unsigned short *)((a4 + 0x16)) = 0x14;
                        FUN_0c0573cc(0xFF000000, 0x0, 0x14);
                    }
                    FUN_0c0135bc(0x0);
                } else {
                    if ((unsigned char)t7 == 3) {
                        t0 = *(short *)((a4 + 0x16));
                        *(unsigned short *)((a4 + 0x16)) = (t0 - 1);
                        if ((int)(short)(t0 - 1) >= 0) {
                        } else {
                            *(unsigned char *)((a4 + 0x7)) = 0x0;
                            *(unsigned char *)((a4 + 0x8)) = 0x0;
                            *(unsigned char *)((a4 + 0xA)) = 0x1;
                            *(unsigned char *)((a4 + 0xB)) = 0x0;
                            *(unsigned char *)((a4 + 0x0)) = ((*(signed char *)((a4 + 0x0))) + 0x1);
                            FUN_0c0573c0(0xFF000000, 0x0, 0xF);
                            *(unsigned short *)((a4 + 0x16)) = 0xF;
                        }
                        FUN_0c0135bc(0x0);
                    } else {
                        if ((unsigned char)t7 == 5) {
                            t0 = *(signed char *)((a4 + 0xB));
                            if (t0 != 0) {
                                if (t0 != 2) {
                                } else {
                                    t0 = *(signed char *)((a4 + 0x8));
                                    t8 = *(signed char *)((a4 + 0x7));
                                    if ((t8 + (t0 << 1)) != 0) {
                                        if ((t8 + (t0 << 1)) != 1) {
                                            if (((t8 + (t0 << 1)) != 2) && ((t8 + (t0 << 1)) != 3)) {
                                                if (((t8 + (t0 << 1)) != 4) && ((t8 + (t0 << 1)) != 5)) {
                                                    if ((t8 + (t0 << 1)) != 6) {
                                                        if ((t8 + (t0 << 1)) == 7) {
                                                            *(unsigned char *)((a4 + 0xB)) = 0x0;
                                                            (((struct o19_uchar *)(a4))->v) = 0x1;
                                                            *(unsigned char *)((a4 + 0x2)) = (*(signed char *)((a4 + 0x0)));
                                                            *(unsigned char *)((a4 + 0x1)) = 0x0;
                                                            (((struct o1A_uchar *)(a4))->v) = 0x0;
                                                            *(unsigned char *)((a4 + 0x0)) = 0x14;
                                                        } else {
                                                            if ((t8 + (t0 << 1)) == 8) {
                                                                *(unsigned char *)((a4 + 0x0)) = 0x7;
                                                                *(unsigned short *)((a4 + 0x16)) = 0xF;
                                                                FUN_0c0573cc(0xFF000000, 0x0, 0xF);
                                                            } else {
                                                                if ((t8 + (t0 << 1)) == 9) {
                                                                    *(unsigned char *)((a4 + 0x0)) = 0x3C;
                                                                    (((struct o1B_uchar *)(a4))->v) = 0x0;
                                                                    *(unsigned short *)((a4 + 0x16)) = 0x258;
                                                                    FUN_0c018e9c(0x2F, (a4 + 0x1B));
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        *(unsigned char *)((a4 + 0xB)) = 0x0;
                                                        *(unsigned char *)((a4 + 0x2)) = (*(signed char *)((a4 + 0x0)));
                                                        *(unsigned char *)((a4 + 0x3)) = 0x8;
                                                        *(unsigned char *)((a4 + 0x0)) = 0x28;
                                                        FUN_0c0159c4(0x0, 0x0, 0xC30AEB6, 0x20, 0x0);
                                                        FUN_0c015b58();
                                                    }
                                                } else {
                                                    *(unsigned char *)((a4 + 0xB)) = 0x0;
                                                    *(unsigned char *)((a4 + 0x2)) = (*(signed char *)((a4 + 0x0)));
                                                    *(unsigned char *)((a4 + 0x3)) = 0x7;
                                                    *(unsigned char *)((a4 + 0x0)) = 0x28;
                                                    FUN_0c0159c4(0x0, 0x0, 0xC30AF0A, 0x6E, 0x0);
                                                    FUN_0c015b58();
                                                }
                                            } else {
                                                *(unsigned char *)((a4 + 0xB)) = 0x0;
                                                *(unsigned char *)((a4 + 0x2)) = (*(signed char *)((a4 + 0x0)));
                                                *(unsigned char *)((a4 + 0x3)) = 0x5;
                                                *(unsigned char *)((a4 + 0x0)) = 0x28;
                                                FUN_0c0159c4(0x0, 0x0, 0xC30AEF6, 0x8, 0x4);
                                                FUN_0c015b58();
                                            }
                                        } else {
                                            *(unsigned char *)((a4 + 0xB)) = 0x0;
                                            *(unsigned char *)((a4 + 0x2)) = (*(signed char *)((a4 + 0x0)));
                                            *(unsigned char *)((a4 + 0x3)) = 0x4;
                                            *(unsigned char *)((a4 + 0x0)) = 0x28;
                                            *(unsigned int *)0xC304420 = 0x0;
                                            *(unsigned int *)0xC304420 = (FUN_0c013746(0xC30AF7A));
                                            FUN_0c187b48(0xC30AF7A, 0x0, 0x4);
                                            *(volatile int *)0xC304420;
                                            FUN_0c187cac(0xC30AF7A, 0x0, 0x0, 0x0, 0xC1A5C48);
                                            FUN_0c0159c4(0x0, 0x0, 0xC30AF7A, 0x2, 0x4);
                                            FUN_0c015b58();
                                        }
                                    } else {
                                        *(unsigned char *)((a4 + 0xB)) = 0x0;
                                        *(unsigned char *)((a4 + 0x2)) = (*(signed char *)((a4 + 0x0)));
                                        *(unsigned char *)((a4 + 0x3)) = 0x3;
                                        *(unsigned char *)((a4 + 0x0)) = 0x28;
                                        FUN_0c0159c4(0x0, 0x0, 0xC30AE76, 0x3E, 0x0);
                                        FUN_0c015b58();
                                    }
                                }
                            } else {
                                FUN_0c01ca2a((a4 + 0x7), 0x1, 0x1);
                                FUN_0c01ca2a((a4 + 0x8), 0x4, 0x0);
                                t0 = FUN_0c01cd2c(0x101);
                                if (((short)t0 == 0) && (t1 = *(signed char *)0xC30EF9E, (unsigned char)t1 != 40)) {
                                } else {
                                    FUN_0c05aab6(0x0, 0x3);
                                    *(unsigned char *)((a4 + 0xB)) = 0x1;
                                }
                            }
                            t0 = FUN_0c01cd2c(0x40);
                            if ((short)t0 == 0) {
                            } else {
                                FUN_0c05aab6(0x0, 0x4);
                                *(unsigned char *)((a4 + 0x0)) = 0x7;
                                *(unsigned short *)((a4 + 0x16)) = 0xF;
                                FUN_0c0573cc(0xFF000000, 0x0, 0xF);
                            }
                            FUN_0c0135bc(0x1);
                        } else {
                            if ((unsigned char)t7 == 60) {
                                t0 = *(short *)((a4 + 0x16));
                                *(unsigned short *)((a4 + 0x16)) = (t0 - 1);
                                if ((int)(short)(t0 - 1) > 0) {
                                    t0 = FUN_0c01cd2c(0x40);
                                    if ((short)t0 == 0) {
                                        t0 = FUN_0c01cd2c(0x101);
                                        if (((short)t0 != 0) && (t2 = *(signed char *)((a4 + 0x1B)), (unsigned char)t2 == 1)) {
                                            *(unsigned char *)((a4 + 0x0)) = 0x5;
                                            *(unsigned char *)((a4 + 0x7)) = 0x0;
                                            *(unsigned char *)((a4 + 0x8)) = 0x0;
                                            *(unsigned char *)((a4 + 0xB)) = 0x0;
                                            FUN_0c018fd2(0x2F);
                                            FUN_0c05aab6(0x0, 0x4);
                                        } else {
                                            t0 = FUN_0c01cd2c(0x101);
                                            if ((short)t0 != 0) {
                                                *(unsigned short *)((a4 + 0x16)) = 0x14;
                                                FUN_0c0573cc(0xFF000000, 0x0, 0x14);
                                                *(unsigned char *)((a4 + 0x0)) = 0x3D;
                                                FUN_0c018fd2(0x2F);
                                                FUN_0c05aab6(0x0, 0x3);
                                            } else {
                                                FUN_0c01c714((a4 + 0x1B), 0x1, 0x2);
                                            }
                                        }
                                    } else {
                                        *(unsigned char *)((a4 + 0x0)) = 0x5;
                                        *(unsigned char *)((a4 + 0x7)) = 0x0;
                                        *(unsigned char *)((a4 + 0x8)) = 0x0;
                                        *(unsigned char *)((a4 + 0xB)) = 0x0;
                                        FUN_0c018fd2(0x2F);
                                        FUN_0c05aab6(0x0, 0x4);
                                    }
                                } else {
                                    *(unsigned char *)((a4 + 0x0)) = 0x5;
                                    *(unsigned char *)((a4 + 0x7)) = 0x0;
                                    *(unsigned char *)((a4 + 0x8)) = 0x0;
                                    *(unsigned char *)((a4 + 0xB)) = 0x0;
                                    FUN_0c018fd2(0x2F);
                                    FUN_0c05aab6(0x0, 0x4);
                                }
                                FUN_0c0135bc(0x1);
                            } else {
                                if ((unsigned char)t7 == 61) {
                                    t0 = *(short *)((a4 + 0x16));
                                    *(unsigned short *)((a4 + 0x16)) = (t0 - 1);
                                    if ((int)(short)(t0 - 1) >= 0) {
                                    } else {
                                        *(unsigned char *)((a4 + 0xA)) = 0x2;
                                        *(unsigned char *)((a4 + 0x5)) = 0x1;
                                        *(unsigned char *)((a4 + 0x0)) = 0x0;
                                        FUN_0c0139bc();
                                    }
                                    FUN_0c0135bc(0x1);
                                } else {
                                    if ((unsigned char)t7 == 7) {
                                        t0 = *(short *)((a4 + 0x16));
                                        *(unsigned short *)((a4 + 0x16)) = (t0 - 1);
                                        if ((int)(short)(t0 - 1) >= 0) {
                                        } else {
                                            *(unsigned char *)((a4 + 0x7)) = 0x0;
                                            *(unsigned char *)((a4 + 0x8)) = 0x0;
                                            *(unsigned char *)((a4 + 0xA)) = 0x0;
                                            *(unsigned char *)((a4 + 0xB)) = 0x0;
                                            *(unsigned char *)((a4 + 0x0)) = ((*(signed char *)((a4 + 0x0))) + 0x1);
                                            FUN_0c0573c0(0xFF000000, 0x0, 0xF);
                                            *(unsigned short *)((a4 + 0x16)) = 0xF;
                                        }
                                        FUN_0c0135bc(0x1);
                                    } else {
                                        if ((unsigned char)t7 == 8) {
                                            t0 = *(short *)((a4 + 0x16));
                                            *(unsigned short *)((a4 + 0x16)) = (t0 - 1);
                                            if ((int)(short)(t0 - 1) >= 0) {
                                            } else {
                                                *(unsigned char *)((a4 + 0x0)) = 0x2;
                                            }
                                            FUN_0c0135bc(0x0);
                                        } else {
                                            if ((unsigned char)t7 == 20) {
                                                t0 = *(signed char *)((a4 + 0x1));
                                                if ((unsigned char)t0 != 0) {
                                                    if ((unsigned char)t0 != 1) {
                                                        if ((unsigned char)t0 != 2) {
                                                            if ((unsigned char)t0 != 3) {
                                                            } else {
                                                                if ((int)(*(signed char *)((a4 + 0x19))) < (int)0x5) {
                                                                } else {
                                                                    *(unsigned char *)((a4 + 0x0)) = (*(signed char *)((a4 + 0x2)));
                                                                    *(unsigned char *)((a4 + 0x1)) = 0x0;
                                                                    if ((*(signed char *)((a4 + 0x1C))) == -1) {
                                                                    } else {
                                                                        if ((*(signed char *)((a4 + 0x1A))) == 0) {
                                                                            *(unsigned char *)0xC30AF88 = 0x0;
                                                                        } else {
                                                                            *(unsigned char *)0xC30AF88 = 0x1;
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            FUN_0c01ca2a((a4 + 0x1A), 0x1, 0x2);
                                                            t0 = FUN_0c01cd2c(0x101);
                                                            if (((short)t0 == 0) && (t3 = *(signed char *)0xC30EF9E, (unsigned char)t3 != 40)) {
                                                                t0 = FUN_0c01cd2c(0x40);
                                                                if (((short)t0 == 0) && (t4 = *(signed char *)0xC30EF9E, (unsigned char)t4 != 41)) {
                                                                } else {
                                                                    *(unsigned char *)((a4 + 0x1)) = ((*(signed char *)((a4 + 0x1))) + 0x1);
                                                                    (((struct o19_uchar *)(a4))->v) = 0xFFFFFFFF;
                                                                    (((struct o1C_uchar *)(a4))->v) = (*(signed char *)((a4 + 0x19)));
                                                                    FUN_0c05aab6(0x0, 0x3);
                                                                }
                                                            } else {
                                                                *(unsigned char *)((a4 + 0x1)) = ((*(signed char *)((a4 + 0x1))) + 0x1);
                                                                (((struct o19_uchar *)(a4))->v) = 0x3;
                                                                (((struct o1C_uchar *)(a4))->v) = (*(signed char *)((a4 + 0x19)));
                                                                FUN_0c05aab6(0x0, 0x3);
                                                            }
                                                        }
                                                    } else {
                                                        if ((*(signed char *)((a4 + 0x19))) != 2) {
                                                        } else {
                                                            *(unsigned char *)((a4 + 0x1)) = ((*(signed char *)((a4 + 0x1))) + 0x1);
                                                        }
                                                    }
                                                } else {
                                                    (((struct o41C_uint *)((FUN_0c01cc56(0x16, 0xC012134))))->v) = a4;
                                                    *(unsigned char *)((a4 + 0x1)) = ((*(signed char *)((a4 + 0x1))) + 0x1);
                                                    if ((*(signed char *)0xC30AF88) == 0) {
                                                        (((struct o1A_uchar *)(a4))->v) = 0x0;
                                                    } else {
                                                        (((struct o1A_uchar *)(a4))->v) = 0x1;
                                                    }
                                                }
                                                FUN_0c0135bc(0x1);
                                            } else {
                                                if ((unsigned char)t7 == 40) {
                                                    t0 = FUN_0c015b58();
                                                    if (t0 == 1) {
                                                        t1 = *(signed char *)((a4 + 0x3));
                                                        if (((unsigned char)t1 != 0) && (((unsigned char)t1 != 1) && (((unsigned char)t1 != 2) && (((unsigned char)t1 != 3) && ((unsigned char)t1 != 4))))) {
                                                            if (((unsigned char)t1 != 5) && (((unsigned char)t1 != 6) && (((unsigned char)t1 != 7) && ((unsigned char)t1 != 8)))) {
                                                                if ((unsigned char)t1 != 9) {
                                                                } else {
                                                                    *(unsigned int *)0xC304420 = 0x0;
                                                                    *(unsigned int *)0xC304420 = (FUN_0c013746(0xC30AF7E));
                                                                    FUN_0c187b48(0xC30AF7E, 0x0, 0xA);
                                                                    *(volatile int *)0xC304420;
                                                                    FUN_0c187cac(0xC30AF7E, 0x0, 0x0, 0x0, 0xC1A5C50);
                                                                }
                                                            }
                                                        } else {
                                                            *(unsigned int *)0xC304420 = 0x0;
                                                            *(unsigned int *)0xC304420 = (FUN_0c013746(0xC30AF7A));
                                                            FUN_0c187b48(0xC30AF7A, 0x0, 0x4);
                                                            *(volatile int *)0xC304420;
                                                            FUN_0c187cac(0xC30AF7A, 0x0, 0x0, 0x0, 0xC1A5C4C);
                                                        }
                                                        *(unsigned char *)((a4 + 0x0)) = (*(signed char *)((a4 + 0x2)));
                                                    } else {
                                                        if (t0 == -1) {
                                                            *(unsigned char *)((a4 + 0x0)) = (*(signed char *)((a4 + 0x2)));
                                                        }
                                                    }
                                                    t0 = 0x1;
                                                    if ((unsigned char)(*(signed char *)((a4 + 0x2))) == 2) {
                                                        t0 = 0x0;
                                                    }
                                                    FUN_0c0135bc(t0);
                                                } else {
                                                    if ((unsigned char)t7 == 50) {
                                                        t0 = *(short *)((a4 + 0x16));
                                                        *(unsigned short *)((a4 + 0x16)) = (t0 - 1);
                                                        if ((int)(short)(t0 - 1) > 0) {
                                                            t0 = FUN_0c01cd2c(0x141);
                                                            if (((short)t0 == 0) && ((t5 = *(signed char *)0xC30EF9E, (unsigned char)t5 != 40) && (t6 = *(signed char *)0xC30EF9E, (unsigned char)t6 != 41))) {
                                                            } else {
                                                                *(unsigned char *)((a4 + 0x0)) = 0x33;
                                                                (((struct o18_uchar *)(a4))->v) = 0x1;
                                                                FUN_0c018fd2(0x1);
                                                            }
                                                        } else {
                                                            *(unsigned char *)((a4 + 0x0)) = 0x33;
                                                            (((struct o18_uchar *)(a4))->v) = 0x1;
                                                            FUN_0c018fd2(0x1);
                                                        }
                                                        FUN_0c0135bc(0x0);
                                                    } else {
                                                        if ((unsigned char)t7 == 51) {
                                                            *(unsigned char *)((a4 + 0x0)) = 0x2;
                                                            *(unsigned char *)((a4 + 0x8)) = 0x0;
                                                            *(unsigned char *)((a4 + 0xB)) = 0x0;
                                                            FUN_0c0135bc(0x0);
                                                        } else {
                                                            if ((unsigned char)t7 == 99) {
                                                                t0 = *(short *)((a4 + 0x16));
                                                                *(unsigned short *)((a4 + 0x16)) = (t0 - 1);
                                                                if ((int)(short)(t0 - 1) < 0) {
                                                                    *(unsigned char *)((a4 + 0x0)) = ((*(signed char *)((a4 + 0x0))) + 0x1);
                                                                    *(unsigned char *)((a4 + 0xA)) = 0x2;
                                                                    *(unsigned char *)((a4 + 0x5)) = 0x2;
                                                                } else {
                                                                    t0 = 0x1;
                                                                    if ((*(signed char *)((a4 + 0xA))) == 0) {
                                                                        t0 = 0x0;
                                                                    }
                                                                    FUN_0c0135bc(t0);
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
                }
            }
        }
    } else {
        FUN_0c013848();
        FUN_0c01cb7c();
        t0 = FUN_0c01cc56(0x11, 0xC011AD0);
        (((struct o41C_uint *)(t0))->v) = a4;
        *(unsigned char *)(((t0 + 0x41C) + 0x7)) = 0x0;
        t0 = FUN_0c01cc56(0x14, 0xC011F6C);
        (((struct o41C_uint *)(t0))->v) = a4;
        *(unsigned char *)(((t0 + 0x41C) + 0x7)) = 0x0;
        t0 = FUN_0c01cc56(0x15, 0xC01206C);
        (((struct o41C_uint *)(t0))->v) = a4;
        *(unsigned char *)(((t0 + 0x41C) + 0x7)) = 0x0;
        t0 = FUN_0c01cc56(0x12, 0xC011AD0);
        (((struct o41C_uint *)(t0))->v) = a4;
        *(unsigned char *)(((t0 + 0x41C) + 0x7)) = 0x1;
        t0 = FUN_0c01cc56(0x14, 0xC011CE8);
        (((struct o41C_uint *)(t0))->v) = a4;
        *(unsigned char *)(((t0 + 0x41C) + 0x7)) = 0x1;
        t0 = FUN_0c01cc56(0x15, 0xC011E66);
        (((struct o41C_uint *)(t0))->v) = a4;
        *(unsigned char *)(((t0 + 0x41C) + 0x7)) = 0x1;
        (((struct o19_uchar *)(a4))->v) = 0x0;
        *(unsigned char *)((a4 + 0x5)) = 0x0;
        *(unsigned char *)((a4 + 0x7)) = 0x0;
        *(unsigned char *)((a4 + 0x8)) = 0x0;
        *(unsigned char *)((a4 + 0x4)) = 0x0;
        *(unsigned char *)((a4 + 0xA)) = 0x0;
        *(unsigned char *)((a4 + 0xB)) = 0x0;
        *(unsigned char *)((a4 + 0x0)) = ((*(signed char *)((a4 + 0x0))) + 0x1);
        FUN_0c0573c0(0xFF000000, 0x0, 0x14);
        *(unsigned short *)((a4 + 0x16)) = 0x14;
    }
    return (*(signed char *)((a4 + 0x5)));
}
