/* Straight-line functions with calls and guards (batch gen_ee): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o0_ushort { unsigned short v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_float { char p[0x10]; float v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o2_ushort { char p[0x2]; unsigned short v; };
struct o20_float { char p[0x20]; float v; };
struct o20_short { char p[0x20]; short v; };
struct o20_uchar { char p[0x20]; unsigned char v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o24_float { char p[0x24]; float v; };
struct o24_short { char p[0x24]; short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o30_float { char p[0x30]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o6_short { char p[0x6]; short v; };
struct o6_ushort { char p[0x6]; unsigned short v; };
struct o6C_float { char p[0x6C]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_int { char p[0x8C]; int v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB0_float { char p[0xB0]; float v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oD0_int { char p[0xD0]; int v; };
struct oD4_int { char p[0xD4]; int v; };
struct oD8_int { char p[0xD8]; int v; };
struct oDC_int { char p[0xDC]; int v; };
struct oE0_int { char p[0xE0]; int v; };
struct oE4_int { char p[0xE4]; int v; };
struct oE8_int { char p[0xE8]; int v; };
struct oEC_int { char p[0xEC]; int v; };
struct oF0_int { char p[0xF0]; int v; };
int FUN_0c010448(void);
int FUN_0c018e74(int);
int FUN_0c018fd2(int);
int FUN_0c019954(int);
int FUN_0c01c714(int, int, int);
int FUN_0c01cd2c(int);
int FUN_0c01d27a(void);
int FUN_0c01d6cc(void);
int FUN_0c01e9e4(void);
int FUN_0c03f346(int, int, int, int);
int FUN_0c0573c0(int, int, int);
int FUN_0c0573cc(int, int, int);
int FUN_0c05aab6(int, int);
int FUN_0c064d5a(int, int);
int FUN_0c0c2ab6(int, int);
int FUN_0c0c2d56(int, int, int);
int FUN_0c0d04c4(int, int);
int FUN_0c0d0b60(int, int, int, int, int, int, float);
int FUN_0c0e563e(int, int, int);
int FUN_0c0e82fc(int);
extern int FUN_0c0f9cc4();
int FUN_0c0f9e28(int);
int FUN_0c0fa012(int);
int FUN_0c0fa55a(void);
int FUN_0c179ac0(void);
int FUN_0c17a4c0(int, int);
int FUN_0c17a550(int);
int FUN_0c187798(int, int, int);
int dbg_printf(int, ...);
float math_cos_angle16(int);
int math_mat_get_translate(int, int);
float math_sin_angle16(int);
int thunk_FUN_0c05abb2(int, int);
int FUN_0c0e6e78(int a4, int a5, int a6, int a7, float f4);
int FUN_0c1016e8(void);
int FUN_0c153178(int a4, int a5, int a6, int a7);
int FUN_0c0502ca(int a4);
int FUN_0c010af8(int a4, int a5, int a6, int a7);
int FUN_0c156f78(int a4);
int FUN_0c0f94cc(int a4, int a5, int a6, int a7, float f4);

int FUN_0c0e6e78(int a4, int a5, int a6, int a7, float f4)
{
    int stk[6];

    register int R1;
    register int R2;
    register int R3;
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
    v0_7 = a4;
    v0_3 = a5;
    v0_2 = a6;
    v0_10 = a7;
    w0_0 = f4;
    v0_11 = *(signed char *)((v0_7 + 0x14));
    v0_4 = (v0_11);
    v0_8 = (0xC540978);
    v0_6 = ((0x41C + v0_7));
    v0_1 = (0x0);
    v0_0 = (v0_7);
    v0_5 = (0xC1CC05C);
    v0_9 = (0xC1CC02C);
    if ((v0_11 == 0)) goto L_C0E6EA8;
    if ((v0_4 == 1)) goto L_C0E6F26;
    L_C0E72BE:;
    return v0_4;
    L_C0E6F26:;
    v0_4 = (0xC058310);
    if (((*(int *)(((((*(signed char *)((v0_0 + 0x1B))) << 2) + (0x41C + v0_8)) + 0x0))) != 0)) goto L_C0E6FBC;
    if (((*(int *)((v0_0 + 0x10))) == 0)) goto L_C0E6F78;
    v0_4 = *(int *)((v0_0 + 0x10));
    *(unsigned int *)(((int)stk + 8)) = v0_4;
    math_mat_get_translate(((*(int *)(((int)stk + 8))) + 0x64), (v0_4 + 0x28));
    (((struct oA4_uint *)((*(int *)((v0_0 + 0x10)))))->v) = v0_1;
    FUN_0c0c2d56((*(int *)((v0_0 + 0x10))), 0x2, 0x0);
    v0_4 = *(int *)((v0_0 + 0x10));
    *(unsigned int *)(((int)stk + 8)) = v0_4;
    FUN_0c0c2ab6((*(int *)(((int)stk + 8))), (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((v0_4 + 0x41C))) * (unsigned short)0x34) + 0xC2738CB))));
    *(unsigned int *)((v0_0 + 0x10)) = v0_1;
    L_C0E6F78:;
    v0_4 = ((FUN_0c03f346(v0_0, v0_3, v0_2, v0_10)));
    goto L_C0E72BE;
    L_C0E6FBC:;
    v0_10 = *(signed char *)((v0_0 + 0x15));
    v0_4 = (v0_10);
    v0_7 = (0xC1CC044);
    if ((v0_10 == 0)) goto L_C0E6FF2;
    if ((v0_4 != 1)) goto L_C0E6FCE;
    (((struct o2C_float *)(v0_0))->v) = (((((struct o2C_float *)(v0_0))->v)) + 10.5f);
    v0_4 = (0x2C);
    w0_0 = (60.0f);
    FPUL_ = (0x41280000);
    if ((60.0f > ((((struct o2C_float *)(v0_0))->v)))) goto L_C0E7154;
    *(float *)((v0_0 + v0_4)) = w0_0;
    v0_2 = ((int (*)(int, int, int))(FUN_0c187798))(v0_7, v0_3, v0_2);
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    v0_4 = (0x15);
    if (((*(int *)((v0_0 + 0x10))) != 0)) goto L_C0E710A;
    goto L_C0E72BE;
    L_C0E710A:;
    v0_4 = (0x24);
    if (((*(short *)((v0_6 + 0x0))) == ((((struct o24_short *)((*(int *)((v0_0 + 0x10)))))->v)))) goto L_C0E711A;
    goto L_C0E72BE;
    L_C0E711A:;
    v0_2 = *(int *)((v0_0 + 0x10));
    *(unsigned int *)(((int)stk + 8)) = v0_2;
    math_mat_get_translate(((*(int *)(((int)stk + 8))) + 0x64), (v0_2 + 0x28));
    (((struct oA4_uint *)((*(int *)((v0_0 + 0x10)))))->v) = v0_1;
    FUN_0c0c2d56((*(int *)((v0_0 + 0x10))), 0x2, 0x0);
    v0_2 = *(int *)((v0_0 + 0x10));
    *(unsigned int *)(((int)stk + 8)) = v0_2;
    v0_4 = ((FUN_0c0c2ab6((*(int *)(((int)stk + 8))), (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((v0_2 + 0x41C))) * (unsigned short)0x34) + 0xC2738CB))))));
    L_C0E717C:;
    *(unsigned int *)((v0_0 + 0x10)) = v0_1;
    goto L_C0E72BE;
    L_C0E7154:;
    if (((*(int *)((v0_0 + 0x10))) != 0)) goto L_C0E715E;
    goto L_C0E72BE;
    L_C0E715E:;
    v0_4 = (0x24);
    if (((*(short *)((v0_6 + 0x0))) != ((((struct o24_short *)((*(int *)((v0_0 + 0x10)))))->v)))) goto L_C0E717C;
    (((struct oA4_uint *)((*(int *)((v0_0 + 0x10)))))->v) = (v0_0 + 0x64);
    (((struct o12E_ushort *)((*(int *)((v0_0 + 0x10)))))->v) = v0_1;
    v0_4 = (0x12E);
    goto L_C0E72BE;
    L_C0E6FCE:;
    if ((v0_4 != 2)) goto L_C0E6FD6;
    v0_1 = *(signed char *)((0x15 + ((((struct o8C_int *)((((*(signed char *)((v0_0 + 0x2))) << 2) + (0x41C + v0_8))))->v))));
    v0_4 = (v0_1);
    if ((v0_1 == 3)) goto L_C0E719A;
    goto L_C0E72BE;
    L_C0E719A:;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    v0_1 = ((int (*)(int, int, int))(FUN_0c187798))(v0_7, v0_3, v0_2);
    *(unsigned short *)((v0_0 + 0x1C)) = 0x27;
    math_mat_get_translate((v0_0 + 0x64), (((int)stk + 8) + 0x4));
    v0_4 = ((thunk_FUN_0c05abb2(0x49, (((int)stk + 8) + 0x4))));
    goto L_C0E72BE;
    L_C0E6FD6:;
    if ((v0_4 != 3)) goto L_C0E6FDE;
    (((struct o54_float *)(v0_0))->v) = (((((struct o54_float *)(v0_0))->v)) + 2.10387897f);
    w0_0 = (((struct o30_float *)(v0_0))->v);
    w0_1 = (((struct o54_float *)(v0_0))->v);
    (((struct o30_float *)(v0_0))->v) = (w0_0 + w0_1);
    v0_1 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_1 - 1);
    v0_4 = ((short)(v0_1 - 1));
    w0_0 = ((w0_0 + w0_1));
    FPUL_ = (0x4006A5F4);
    if (((int)(short)(v0_1 - 1) > 0)) goto L_C0E72BE;
    (((struct o54_float *)(v0_0))->v) = -26.666666f;
    *(unsigned short *)((v0_0 + 0x1C)) = 0x3C;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    v0_4 = ((FUN_0c064d5a(v0_0, v0_5)));
    goto L_C0E72BE;
    L_C0E6FDE:;
    if ((v0_4 != 4)) goto L_C0E6FE6;
    (((struct o30_float *)(v0_0))->v) = (((((struct o30_float *)(v0_0))->v)) + ((((struct o54_float *)(v0_0))->v)));
    v0_1 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_1 - 1);
    v0_4 = ((short)(v0_1 - 1));
    if (((int)(short)(v0_1 - 1) > 0)) goto L_C0E72BE;
    v0_1 = *(signed char *)((v0_0 + 0x2));
    (((struct o30_float *)(v0_0))->v) = ((((struct o8_float *)((v0_9 + (((v0_1 << 1) + v0_1) << 2))))->v));
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    v0_4 = ((FUN_0c064d5a(v0_0, (v0_5 + 0xC))));
    goto L_C0E72BE;
    L_C0E6FE6:;
    if ((v0_4 != 5)) goto L_C0E6FEE;
    (((struct o2C_float *)(v0_0))->v) = (((((struct o2C_float *)(v0_0))->v)) - 5.25f);
    w0_1 = (((struct o2C_float *)(v0_0))->v);
    v0_4 = (0x2C);
    w0_0 = (w0_1);
    FPUL_ = (0x40A80000);
    if ((w0_1 > -150.0f)) goto L_C0E72BE;
    *(volatile signed char *)((v0_0 + 0x2));
    v0_2 = ((int (*)(int, int, int))(FUN_0c187798))(v0_7, v0_3, v0_2);
    (((struct o15_uchar *)(v0_0))->v) = v0_1;
    v0_4 = (0x15);
    goto L_C0E72BE;
    L_C0E6FEE:;
    goto L_C0E72BE;
    L_C0E6FF2:;
    v0_5 = *(signed char *)((0x17 + (*(int *)(((0x41C + v0_8) + ((*(signed char *)((v0_0 + 0x1B))) << 2))))));
    v0_4 = (v0_5);
    if ((v0_5 == 1)) goto L_C0E700A;
    goto L_C0E72BE;
    L_C0E700A:;
    v0_5 = *(signed char *)((v0_0 + 0x2));
    v0_4 = ((v0_5 + 0x1));
    if ((((v0_5 + 0x1) & (*(signed char *)(((0x18 + (*(int *)(((((*(signed char *)(((0x1B + v0_0) + 0x0))) << 2) + (0x41C + v0_8)) + 0x0)))) + 0x0)))) != 0)) goto L_C0E702C;
    goto L_C0E72BE;
    L_C0E702C:;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    *(unsigned int *)((v0_0 + 0x10)) = v0_1;
    v0_2 = ((int (*)(int, int, int))(FUN_0c187798))(v0_7, v0_3, v0_2);
    FUN_0c0e82fc(v0_0);
    v0_2 = ((int)((int)(FUN_0c179ac0()) % (int)0x3)) != 0;
    if (v0_2) goto L_C0E7068;
    v0_4 = ((FUN_0c0e563e(0x0, 0x3, 0xC1CC050)));
    L_C0E707E:;
    *(unsigned int *)((v0_0 + 0x10)) = v0_4;
    if ((v0_4 != 0)) goto L_C0E708A;
    goto L_C0E72BE;
    L_C0E708A:;
    (((struct oA4_uint *)((*(int *)((v0_0 + 0x10)))))->v) = (v0_0 + 0x64);
    (((struct o12E_ushort *)((*(int *)((v0_0 + 0x10)))))->v) = v0_1;
    *(unsigned short *)((v0_6 + 0x0)) = ((((struct o24_short *)((*(int *)((v0_0 + 0x10)))))->v));
    v0_4 = (0x24);
    goto L_C0E72BE;
    L_C0E7068:;
    *(int *)((int)stk + 4) = 0xC1CC00C;
    *(int *)((int)stk + 0) = 0xFFFFFFFF;
    v0_4 = ((FUN_0c0d0b60(0x0, 0x3, 0x1, 0xC1CC050, 0xFFFFFFFF, 0xC1CC00C, w0_0)));
    goto L_C0E707E;
    L_C0E6EA8:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(v0_0))->v) = 0x1;
    *(volatile signed char *)((v0_0 + 0x2));
    v0_3 = ((int (*)(int, int, int))(FUN_0c187798))(v0_7, v0_3, v0_2);
    v0_4 = (0x1B);
    v0_3 = (v0_5);
    if (((int)(*(signed char *)((v0_0 + 0x1B))) < 0)) goto L_C0E6EEC;
    (((struct oA4_uint *)(v0_0))->v) = ((*(int *)(((((*(signed char *)((v0_0 + v0_4))) << 2) + (0x41C + v0_8)) + 0x0))) + 0x64);
    L_C0E6EEC:;
    FUN_0c064d5a(v0_0, (v0_3 + 0xC));
    FUN_0c0d04c4((0xAC + v0_0), (v0_0 + 0x34));
    v0_4 = (v0_1);
    L_C0E6F1E:;
    if (((int)v0_4 < (int)((((struct oC0_int *)(v0_0))->v)))) goto L_C0E6F04;
    goto L_C0E6F26;
    L_C0E6F04:;
    v0_7 = *(int *)((((v0_4 << 2) + (0xC4 + v0_0)) + 0x0));
    *(unsigned int *)(((int)stk + 8)) = v0_7;
    FUN_0c0d04c4(((*(int *)(((int)stk + 8))) + 0x6), (v0_7 + 0x78));
    v0_4 = ((v0_4 + 0x1));
    goto L_C0E6F1E;
}

int FUN_0c1016e8(void)
{
    int stk[6];

    register int R2;
    register int R3;
    int R6;
    int R11;
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
    v0_1 = (((struct o0_int *)0xC472CA4)->v);
    v0_9 = (((struct o4_int *)0xC472CA4)->v);
    *(unsigned int *)(((int)stk + 8)) = 0xC474104;
    v0_10 = (v0_9);
    v0_0 = (0xC542854);
    R11 = (0x200);
    v0_6 = ((((v0_1 << 2) << 2) + 0xC472BA4));
    v0_1 = (0xC472BA4);
    v0_2 = (0xC472CA4);
    v0_3 = (0x0);
    v0_4 = (0xC472CA8);
    R6 = (v0_9);
    v0_5 = (0x1);
    v0_8 = (0xC542854);
    v0_7 = (0xC0);
    if ((v0_9 == 0)) goto L_C10176E;
    if ((v0_10 == 1)) goto L_C1017A8;
    if ((v0_10 == 2)) goto L_C101800;
    if ((v0_10 != 3)) goto L_C101732;
    if (((*(signed char *)(((v0_6 + R6) + 0x0))) == 0)) goto L_C101878;
    v0_7 = *(int *)(((int)stk + 8));
    v0_6 = ((v0_7 + 0x300));
    R6 = (v0_7);
    L_C101864:;
    *(unsigned int *)((R6 + 0x0)) = v0_3;
    v0_7 = (unsigned int)(R6 + 0x4) < (unsigned int)v0_6;
    R6 = ((R6 + 0x4));
    if (v0_7) goto L_C101864;
    *(unsigned char *)(((*(int *)((v0_4 + 0x0))) + ((((*(int *)((v0_2 + 0x0))) << 2) << 2) + v0_1))) = v0_3;
    L_C101878:;
    if (!((((unsigned short)(*(short *)((v0_0 + 0x14))) & R11) != 0))) goto L_C101A3A;
    v0_6 = *(int *)((v0_2 + 0x0));
    v0_7 = *(int *)((v0_4 + 0x0));
    *(unsigned char *)((((((v0_6 << 2) << 2) + v0_1) + v0_7) + 0x0)) = (v0_5 - (*(signed char *)((((((v0_6 << 2) << 2) + v0_1) + v0_7) + 0x0))));
    goto L_C101A3A;
    L_C101A3A:;
    if ((((unsigned short)(*(short *)((v0_0 + 0x14))) & 0x2000) == 0)) goto L_C101A50;
    if (((int)(*(int *)((v0_4 + 0x0))) <= 0)) goto L_C101A50;
    *(unsigned int *)((v0_4 + 0x0)) = ((*(int *)((v0_4 + 0x0))) - 1);
    L_C101A50:;
    if ((((unsigned short)(*(short *)((v0_0 + 0x14))) & 0x1000) == 0)) goto L_C101A78;
    if (((*(int *)(((((*(int *)((v0_4 + 0x0))) << 2) + (((((*(int *)((v0_2 + 0x0))) << 2) << 2) << 2) + 0xC290754)) + 0x4))) == 0)) goto L_C101A78;
    *(unsigned int *)((v0_4 + 0x0)) = ((*(int *)((v0_4 + 0x0))) + 0x1);
    L_C101A78:;
    R11 = (v0_3);
    v0_6 = (v0_3);
    v0_7 = (0xC17A550);
    L_C101A7E:;
    v0_10 = ((v0_6 << 2));
    v0_3 = (((((R11 << 2) << 2) << 2) + 0xC290754));
    if (((*(int *)((((((R11 << 2) << 2) << 2) + 0xC290754) + (v0_6 << 2)))) == 0)) goto L_C101AFE;
    *(unsigned int *)(((int)stk + 8)) = (((((R11 << 1) + R11) << 2) << 1) + 0x14);
    *(unsigned int *)(((int)stk + 12)) = (((R11 << 2) << 2) + v0_1);
    v0_0 = (v0_3);
    L_C101AB2:;
    FUN_0c17a4c0((*(int *)(((int)stk + 8))), (v0_6 + 0xA));
    if ((R11 != (*(int *)((v0_2 + 0x0))))) goto L_C101AD0;
    if ((v0_6 != ((((struct o4_int *)0xC472CA4)->v)))) goto L_C101AD0;
    v0_3 = (0xFFFFAAAA);
    L_C101AD2:;
    FUN_0c17a550(v0_3);
    v0_8 = ((v0_6 << 2));
    if (((*(int *)((v0_0 + (v0_6 << 2)))) == 0)) goto L_C101AFA;
    *(int *)((int)stk + 4) = ((*(signed char *)((v0_6 + (*(int *)(((int)stk + 12)))))));
    v0_3 = (*(int *)(((v0_8 + v0_0) + 0x0)));
    *(int *)((int)stk + 0) = v0_3;
    dbg_printf(v0_3);
    v0_6 = ((v0_6 + 0x1));
    goto L_C101AB2;
    L_C101AFA:;
    R11 = ((R11 + 0x1));
    goto L_C101A7E;
    L_C101AD0:;
    v0_3 = (0xFFFF0000);
    goto L_C101AD2;
    L_C101AFE:;
    return v0_10;
    L_C101732:;
    if ((v0_10 != 4)) goto L_C10173A;
    if ((((unsigned short)(*(short *)((v0_8 + 0x14))) & R11) != 0)) goto L_C1018A4;
    goto L_C101A3A;
    L_C1018A4:;
    *(unsigned int *)(((int)stk + 8)) = (v0_6 + R6);
    *(unsigned char *)(((v0_6 + R6) + 0x0)) = (v0_5 - (*(signed char *)(((v0_6 + R6) + 0x0))));
    goto L_C101A3A;
    L_C10173A:;
    if ((v0_10 != 5)) goto L_C101742;
    if ((((unsigned short)(*(short *)((v0_8 + 0x14))) & R11) != 0)) goto L_C1018BE;
    goto L_C101A3A;
    L_C1018BE:;
    *(unsigned int *)(((int)stk + 8)) = (v0_6 + R6);
    *(unsigned char *)(((v0_6 + R6) + 0x0)) = (v0_5 - (*(signed char *)(((v0_6 + R6) + 0x0))));
    goto L_C101A3A;
    L_C101742:;
    if ((v0_10 != 6)) goto L_C10174A;
    if ((((unsigned short)(*(short *)((v0_8 + 0x14))) & R11) != 0)) goto L_C1018D8;
    goto L_C101A3A;
    L_C1018D8:;
    *(unsigned int *)(((int)stk + 8)) = (v0_6 + R6);
    *(unsigned char *)(((v0_6 + R6) + 0x0)) = (v0_5 - (*(signed char *)(((v0_6 + R6) + 0x0))));
    goto L_C101A3A;
    L_C10174A:;
    if ((v0_10 != 7)) goto L_C101752;
    if (((*(signed char *)(((v0_6 + R6) + 0x0))) == 0)) goto L_C101982;
    *(unsigned int *)(((int)stk + 12)) = v0_3;
    *(unsigned int *)(((int)stk + 20)) = 0xC473D04;
    *(unsigned int *)(((int)stk + 8)) = 0xC29E4F0;
    R6 = (0x400);
    v0_8 = (v0_3);
    L_C101906:;
    v0_6 = *(int *)(((int)stk + 12));
    *(unsigned int *)(((int)stk + 16)) = (v0_6 << 2);
    v0_9 = *(int *)(((v0_6 << 2) + 0xC473D04));
    v0_6 = (((v0_9 & 0x800) & R6));
    if (((0x800 & ((v0_9 & 0x800) & R6)) == 0)) goto L_C10191C;
    v0_6 = ((v0_6 | R6));
    L_C10191C:;
    v0_9 = *(int *)(((int)stk + 16));
    v0_10 = (v0_9);
    if (((int)(unsigned short)(*(short *)0xC542B88) < (int)(*(int *)((v0_9 + 0xC29E4F0))))) goto L_C101948;
    if (((*(int *)((v0_10 + 0xC29E4F0))) == -1)) goto L_C101936;
    v0_6 = ((v0_6 | R6));
    L_C101936:;
    if (((*(int *)(((*(int *)(((int)stk + 8))) + 0x0))) != 0)) goto L_C101948;
    v0_9 = *(int *)(((int)stk + 20));
    *(unsigned int *)((v0_9 + 0x0)) = ((*(int *)((v0_9 + 0x0))) | R6);
    v0_6 = ((v0_6 | R6));
    L_C101948:;
    *(unsigned int *)(((int)stk + 16)) = (0xC473D04 + v0_8);
    *(unsigned int *)(((0xC473D04 + v0_8) + 0x0)) = v0_3;
    v0_9 = *(int *)(((int)stk + 16));
    *(unsigned int *)((v0_9 + 0x0)) = ((*(int *)((v0_9 + 0x0))) | v0_6);
    *(unsigned int *)((v0_8 + 0xC474104)) = v0_3;
    *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 12))) + 0x1);
    *(unsigned int *)(((int)stk + 20)) = ((*(int *)(((int)stk + 20))) + 0x4);
    *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) + 0x4);
    v0_8 = ((v0_8 + 0x4));
    if (((int)(*(int *)(((int)stk + 12))) < (int)v0_7)) goto L_C101906;
    *(unsigned char *)(((*(int *)((v0_4 + 0x0))) + ((((*(int *)((v0_2 + 0x0))) << 2) << 2) + v0_1))) = v0_3;
    L_C101982:;
    if ((((unsigned short)(*(short *)((v0_0 + 0x14))) & R11) == 0)) goto L_C101A3A;
    v0_6 = *(int *)((v0_2 + 0x0));
    v0_7 = *(int *)((v0_4 + 0x0));
    *(unsigned char *)((((((v0_6 << 2) << 2) + v0_1) + v0_7) + 0x0)) = (v0_5 - (*(signed char *)((((((v0_6 << 2) << 2) + v0_1) + v0_7) + 0x0))));
    goto L_C101A3A;
    L_C101752:;
    if ((v0_10 != 8)) goto L_C10175A;
    if ((((unsigned short)(*(short *)((v0_8 + 0x14))) & R11) == 0)) goto L_C101A3A;
    *(unsigned int *)(((int)stk + 8)) = (v0_6 + R6);
    *(unsigned char *)(((v0_6 + R6) + 0x0)) = (v0_5 - (*(signed char *)(((v0_6 + R6) + 0x0))));
    goto L_C101A3A;
    L_C10175A:;
    if ((v0_10 != 9)) goto L_C101762;
    if (((*(signed char *)(((v0_6 + R6) + 0x0))) == 0)) goto L_C1019D8;
    v0_7 = *(int *)(((int)stk + 8));
    v0_6 = ((v0_7 + 0x300));
    R6 = (v0_7);
    L_C1019C4:;
    *(unsigned int *)((R6 + 0x0)) = v0_5;
    v0_7 = (unsigned int)(R6 + 0x4) < (unsigned int)v0_6;
    R6 = ((R6 + 0x4));
    if (v0_7) goto L_C1019C4;
    *(unsigned char *)(((*(int *)((v0_4 + 0x0))) + ((((*(int *)((v0_2 + 0x0))) << 2) << 2) + v0_1))) = v0_3;
    L_C1019D8:;
    if ((((unsigned short)(*(short *)((v0_0 + 0x14))) & R11) == 0)) goto L_C101A3A;
    v0_6 = *(int *)((v0_2 + 0x0));
    v0_7 = *(int *)((v0_4 + 0x0));
    *(unsigned char *)((((((v0_6 << 2) << 2) + v0_1) + v0_7) + 0x0)) = (v0_5 - (*(signed char *)((((((v0_6 << 2) << 2) + v0_1) + v0_7) + 0x0))));
    goto L_C101A3A;
    L_C101762:;
    if ((v0_10 != 10)) goto L_C10176A;
    if ((((unsigned short)(*(short *)((v0_8 + 0x14))) & R11) == 0)) goto L_C101A3A;
    *(unsigned char *)(((v0_6 + R6) + 0x0)) = ((*(signed char *)(((v0_6 + R6) + 0x0))) + 0x1);
    if (((int)(*(signed char *)(((*(int *)((v0_4 + 0x0))) + ((((*(int *)((v0_2 + 0x0))) << 2) << 2) + v0_1)))) <= (int)0xB)) goto L_C101A3A;
    *(unsigned char *)(((*(int *)((v0_4 + 0x0))) + ((((*(int *)((v0_2 + 0x0))) << 2) << 2) + v0_1))) = v0_3;
    goto L_C101A3A;
    L_C10176A:;
    goto L_C101A3A;
    L_C101800:;
    if (((*(signed char *)(((v0_6 + R6) + 0x0))) == 0)) goto L_C101834;
    v0_6 = (0x64);
    R6 = (v0_3);
    L_C10180C:;
    v0_8 = (int)(R6 + 0x1) < (int)v0_7;
    *(unsigned int *)(((0xC474104 + (R6 << 2)) + 0x0)) = ((int)((int)R6 % (int)v0_6));
    R6 = ((R6 + 0x1));
    if (v0_8) goto L_C10180C;
    *(unsigned char *)(((*(int *)((v0_4 + 0x0))) + ((((*(int *)((v0_2 + 0x0))) << 2) << 2) + v0_1))) = v0_3;
    L_C101834:;
    if ((((unsigned short)(*(short *)((v0_0 + 0x14))) & R11) != 0)) goto L_C101840;
    goto L_C101A3A;
    L_C101840:;
    v0_6 = *(int *)((v0_2 + 0x0));
    v0_7 = *(int *)((v0_4 + 0x0));
    *(unsigned char *)((((((v0_6 << 2) << 2) + v0_1) + v0_7) + 0x0)) = (v0_5 - (*(signed char *)((((((v0_6 << 2) << 2) + v0_1) + v0_7) + 0x0))));
    goto L_C101A3A;
    L_C1017A8:;
    if (((*(signed char *)(((v0_6 + R6) + 0x0))) == 0)) goto L_C1017C0;
    *(unsigned int *)0xC47471C = v0_3;
    *(unsigned char *)(((*(int *)((v0_4 + 0x0))) + ((((*(int *)((v0_2 + 0x0))) << 2) << 2) + v0_1))) = v0_3;
    L_C1017C0:;
    if ((((unsigned short)(*(short *)((v0_0 + 0x14))) & R11) != 0)) goto L_C1017CC;
    goto L_C101A3A;
    L_C1017CC:;
    v0_6 = *(int *)((v0_2 + 0x0));
    v0_7 = *(int *)((v0_4 + 0x0));
    *(unsigned char *)((((((v0_6 << 2) << 2) + v0_1) + v0_7) + 0x0)) = (v0_5 - (*(signed char *)((((((v0_6 << 2) << 2) + v0_1) + v0_7) + 0x0))));
    goto L_C101A3A;
    L_C10176E:;
    if (((*(signed char *)(((v0_6 + R6) + 0x0))) == 0)) goto L_C101788;
    *(unsigned int *)0xC47471C = 0x5F5E0FF;
    *(unsigned char *)(((*(int *)((v0_4 + 0x0))) + ((((*(int *)((v0_2 + 0x0))) << 2) << 2) + v0_1))) = v0_3;
    L_C101788:;
    if ((((unsigned short)(*(short *)((v0_0 + 0x14))) & R11) != 0)) goto L_C101794;
    goto L_C101A3A;
    L_C101794:;
    v0_6 = *(int *)((v0_2 + 0x0));
    v0_7 = *(int *)((v0_4 + 0x0));
    *(unsigned char *)((((((v0_6 << 2) << 2) + v0_1) + v0_7) + 0x0)) = (v0_5 - (*(signed char *)((((((v0_6 << 2) << 2) + v0_1) + v0_7) + 0x0))));
    goto L_C101A3A;
}

int FUN_0c153178(int a4, int a5, int a6, int a7)
{
    int stk[2];

    register int R2;
    register int R3;
    register float F2;
    register int T_;
    register int FPUL_;
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
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    v0_5 = a4;
    v0_6 = a5;
    v0_7 = a6;
    v0_8 = a7;
    v0_9 = *(signed char *)((v0_5 + 0x14));
    v0_4 = (v0_9);
    v0_0 = (0xC179BF0);
    v0_1 = (0x0);
    v0_2 = (0xC20343C);
    v0_3 = (0xC20340C);
    v0_0 = (v0_5);
    v0_10 = (0xC179670);
    w0_0 = (1.0f);
    w0_1 = (0.0f);
    if ((v0_9 == 0)) goto L_C1531B4;
    if ((v0_4 != 1)) goto L_C1531B0;
    L_C1532B4:;
    v0_4 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_4 + 0x1);
    v0_5 = *(signed char *)((v0_0 + 0x2));
    if (!(((int)(short)(v0_4 + 0x1) >= (int)(*(int *)((((*(signed char *)(((0x15 + v0_0) + 0x0))) << 2) + (((((v0_5 << 1) + v0_5) << 2) << 1) + v0_3))))))) goto L_C15341E;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    v0_4 = *(signed char *)((v0_0 + 0x2));
    v0_5 = *(signed char *)((v0_0 + 0x15));
    w0_2 = *(float *)((((((((signed char)v0_5 - 1) << 1) + ((signed char)v0_5 - 1)) << 2) + ((((((v0_4 << 2) << 1) + v0_4) << 2) << 1) + v0_2)) + 0x0));
    w0_3 = *(float *)(((((((signed char)v0_5 << 1) + (signed char)v0_5) << 2) + ((((((v0_4 << 2) << 1) + v0_4) << 2) << 1) + v0_2)) + 0x0));
    *(unsigned int *)(((int)stk + 4)) = (((((v0_4 << 1) + v0_4) << 2) << 1) + v0_3);
    (((struct o4C_float *)(v0_0))->v) = ((w0_3 - w0_2) / (float)((*(int *)((((signed char)v0_5 << 2) + (((((v0_4 << 1) + v0_4) << 2) << 1) + v0_3)))) - (*(int *)(((((signed char)v0_5 - 1) << 2) + (((((v0_4 << 1) + v0_4) << 2) << 1) + v0_3))))));
    v0_4 = *(signed char *)((v0_0 + 0x2));
    *(unsigned int *)(((int)stk + 4)) = ((((((v0_4 << 2) << 1) + v0_4) << 2) << 1) + v0_2);
    v0_5 = *(signed char *)((v0_0 + 0x15));
    (((struct o50_float *)(v0_0))->v) = ((((((struct o4_float *)((((((((v0_4 << 2) << 1) + v0_4) << 2) << 1) + v0_2) + ((((signed char)v0_5 << 1) + (signed char)v0_5) << 2))))->v)) - ((((struct o4_float *)(((((((signed char)v0_5 - 1) << 1) + ((signed char)v0_5 - 1)) << 2) + (*(int *)(((int)stk + 4))))))->v))) / (float)((*(int *)(((((((v0_4 << 1) + v0_4) << 2) << 1) + v0_3) + ((signed char)v0_5 << 2)))) - (*(int *)(((((((v0_4 << 1) + v0_4) << 2) << 1) + v0_3) + (((signed char)v0_5 - 1) << 2))))));
    v0_8 = *(signed char *)((v0_0 + 0x2));
    *(unsigned int *)(((int)stk + 4)) = (v0_2 + (((((v0_8 << 2) << 1) + v0_8) << 2) << 1));
    v0_6 = *(signed char *)((v0_0 + 0x15));
    v0_4 = *(int *)(((((((v0_8 << 1) + v0_8) << 2) << 1) + v0_3) + ((signed char)v0_6 << 2)));
    v0_9 = *(int *)(((((((v0_8 << 1) + v0_8) << 2) << 1) + v0_3) + (((signed char)v0_6 - 1) << 2)));
    (((struct o54_float *)(v0_0))->v) = ((((((struct o8_float *)(((v0_2 + (((((v0_8 << 2) << 1) + v0_8) << 2) << 1)) + ((((signed char)v0_6 << 1) + (signed char)v0_6) << 2))))->v)) - ((((struct o8_float *)(((((((signed char)v0_6 - 1) << 1) + ((signed char)v0_6 - 1)) << 2) + (*(int *)(((int)stk + 4))))))->v))) / (float)(v0_4 - v0_9));
    v0_5 = (v0_6);
    v0_6 = ((signed char)v0_6);
    v0_7 = ((((((v0_8 << 1) + v0_8) << 2) << 1) + v0_3));
    v0_8 = (v0_8);
    FPUL_ = ((v0_4 - v0_9));
    goto L_C15341E;
    L_C15341E:;
    (((struct o40_float *)(v0_0))->v) = (((((struct o40_float *)(v0_0))->v)) + ((((struct o4C_float *)(v0_0))->v)));
    (((struct o44_float *)(v0_0))->v) = (((((struct o44_float *)(v0_0))->v)) + ((((struct o50_float *)(v0_0))->v)));
    (((struct o48_float *)(v0_0))->v) = (((((struct o48_float *)(v0_0))->v)) + ((((struct o54_float *)(v0_0))->v)));
    v0_4 = (0x40);
    w0_2 = (0.0f);
    if ((((((struct o40_float *)(v0_0))->v)) > 0.0f)) goto L_C153456;
    *(float *)((v0_0 + v0_4)) = w0_1;
    L_C153456:;
    v0_2 = ((((struct o44_float *)(v0_0))->v)) > w0_2;
    v0_4 = (0x44);
    w0_2 = (0.0f);
    if (v0_2) goto L_C153462;
    *(float *)((v0_0 + v0_4)) = w0_1;
    L_C153462:;
    v0_4 = (0x48);
    if ((((((struct o48_float *)(v0_0))->v)) > w0_2)) goto L_C15346C;
    *(float *)((v0_0 + v0_4)) = w0_1;
    L_C15346C:;
    if (((int)(*(short *)((v0_0 + 0x1C))) < (int)(*(int *)((0xC2034CC + (((*(signed char *)((v0_0 + 0x2))) << 2) << 1)))))) goto L_C15350C;
    (((struct oAC_ushort *)(v0_0))->v) = (((((struct oAC_short *)(v0_0))->v)) | 0x200);
    v0_2 = ((0xB4 + v0_0));
    if (((*(signed char *)((v0_0 + 0x2))) != 0)) goto L_C1534AC;
    w0_2 = (0.0500000007f);
    FPUL_ = (0x3D4CCCCD);
    L_C1534B2:;
    *(float *)((v0_2 + 0x0)) = ((*(float *)((v0_2 + 0x0))) - w0_2);
    v0_2 = ((0xB8 + v0_0));
    if (((*(signed char *)((v0_0 + 0x2))) != 0)) goto L_C1534CC;
    w0_2 = (0.0500000007f);
    FPUL_ = (0x3D4CCCCD);
    L_C1534D2:;
    *(float *)((v0_2 + 0x0)) = ((*(float *)((v0_2 + 0x0))) - w0_2);
    v0_2 = ((0xBC + v0_0));
    if (((*(signed char *)((v0_0 + 0x2))) != 0)) goto L_C1534EC;
    w0_2 = (0.0500000007f);
    FPUL_ = (0x3D4CCCCD);
    L_C1534F2:;
    *(float *)((v0_2 + 0x0)) = ((*(float *)((v0_2 + 0x0))) - w0_2);
    v0_4 = (0xB4);
    if ((((((struct oB4_float *)(v0_0))->v)) > 0.0f)) goto L_C15350C;
    *(float *)((v0_0 + v0_4)) = w0_1;
    *(float *)((v0_0 + (v0_4 + 0x4))) = w0_1;
    *(float *)((v0_0 + ((v0_4 + 0x4) + 0x4))) = w0_1;
    L_C15350C:;
    v0_2 = *(signed char *)((v0_0 + 0x15));
    v0_4 = (v0_2);
    if ((v0_2 == 0)) goto L_C15357E;
    if ((v0_4 == 1)) goto L_C153524;
    if ((v0_4 == 2)) goto L_C15352A;
    if ((v0_4 == 3)) goto L_C15352A;
    (((struct oA8_uchar *)(v0_0))->v) = v0_1;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    v0_4 = (0x14);
    L_C15357E:;
    return v0_4;
    L_C15352A:;
    v0_1 = *(signed char *)((v0_0 + 0x2));
    v0_4 = (v0_1);
    if ((v0_1 == 0)) goto L_C15357E;
    (((struct o28_float *)(v0_0))->v) = (((((struct o28_float *)(v0_0))->v)) - (((math_sin_angle16((*(int *)((v0_0 + 0x38))))) * w0_0)));
    w0_1 = math_cos_angle16((*(int *)((v0_0 + 0x38))));
    (((struct o30_float *)(v0_0))->v) = (((((struct o30_float *)(v0_0))->v)) - ((w0_1 * w0_0)));
    w0_2 = ((w0_1 * w0_0));
    goto L_C15357E;
    L_C153524:;
    (((struct oA8_uchar *)(v0_0))->v) = 0x1;
    goto L_C15352A;
    L_C1534EC:;
    w0_2 = (0.0199999996f);
    FPUL_ = (0x3CA3D70A);
    goto L_C1534F2;
    L_C1534CC:;
    w0_2 = (0.0199999996f);
    FPUL_ = (0x3CA3D70A);
    goto L_C1534D2;
    L_C1534AC:;
    w0_2 = (0.0199999996f);
    FPUL_ = (0x3CA3D70A);
    goto L_C1534B2;
    L_C1531B0:;
    return FUN_0c03f346(v0_0, v0_6, v0_7, v0_8);
    L_C1531B4:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(v0_0))->v) = v0_1;
    *(unsigned char *)((((((struct oC4_int *)(v0_0))->v)) + 0x0)) = 0x1;
    v0_4 = *(signed char *)((v0_0 + 0x2));
    *(unsigned short *)((v0_0 + 0x1C)) = (*(int *)((((*(signed char *)(((0x15 + v0_0) + 0x0))) << 2) + (((((v0_4 << 1) + v0_4) << 2) << 1) + v0_3))));
    *(unsigned short *)((v0_0 + 0x1E)) = v0_1;
    (((struct oAC_ushort *)(v0_0))->v) = (((((struct oAC_short *)(v0_0))->v)) | 0x200);
    (((struct oB4_float *)(v0_0))->v) = w0_0;
    (((struct oB8_float *)(v0_0))->v) = w0_0;
    (((struct oBC_float *)(v0_0))->v) = w0_0;
    *(volatile signed char *)((v0_0 + 0x2));
    *(volatile signed char *)((v0_0 + 0x15));
    FUN_0c187798(v0_5, v0_6, v0_7);
    (((struct o54_float *)(v0_0))->v) = w0_1;
    (((struct o50_float *)(v0_0))->v) = w0_1;
    (((struct o4C_float *)(v0_0))->v) = w0_1;
    if (((*(signed char *)((v0_0 + 0x2))) != 0)) goto L_C153280;
    *(int *)((int)stk + 0) = (v0_0 + 0x28);
    w0_2 = ((((struct o28_float *)(v0_0))->v));
    w0_2 = w0_2 + 100.0f * (math_sin_angle16((*(int *)((v0_0 + 0x38)))));
    (((struct o28_float *)(v0_0))->v) = w0_2;
    *(int *)((int)stk + 0) = (v0_0 + 0x30);
    *(unsigned int *)(((int)stk + 0)) = (v0_0 + 0x30);
    w0_2 = (100.0f);
    L_C1532A4:;
    v0_4 = *(int *)((int)stk + 0);
    w0_3 = (*(float *)((v0_4 + 0x0)));
    w0_3 = w0_3 + w0_2 * (math_cos_angle16((*(int *)((v0_0 + 0x38)))));
    *(float *)((v0_4 + 0x0)) = w0_3;
    w0_2 = (w0_2);
    goto L_C1532B4;
    L_C153280:;
    *(int *)((int)stk + 0) = (v0_0 + 0x28);
    w0_2 = ((((struct o28_float *)(v0_0))->v));
    w0_2 = w0_2 + 90.0f * (math_sin_angle16((*(int *)((v0_0 + 0x38)))));
    (((struct o28_float *)(v0_0))->v) = w0_2;
    *(int *)((int)stk + 0) = (v0_0 + 0x30);
    *(unsigned int *)(((int)stk + 0)) = (v0_0 + 0x30);
    w0_2 = (90.0f);
    goto L_C1532A4;
}

int FUN_0c0502ca(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register float u0;
    register float u1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 == 1) {
            t1 = *(signed char *)0xC542366;
            t2 = *(signed char *)0xC542236;
            if (t2 != 0) {
                if (t2 != 1) {
                    if (t2 != 2) {
                        if (t2 != 3) {
                            t3 = 0xC241434;
                            if (t2 == 4) {
                                if ((t1 & 0x8) == 0) {
                                    t2 = ((((struct oEC_int *)(a4))->v));
                                    u0 = ((((((struct o28_float *)0xC241434)->v)) * (float)(*(short *)((a4 + 0x1C)))) / 100.0f);
                                } else {
                                    t2 = ((((struct oF0_int *)(a4))->v));
                                    u0 = ((((((struct o2C_float *)0xC241434)->v)) * (float)(*(short *)((a4 + 0x1C)))) / 100.0f);
                                }
                                (((struct o88_float *)(t2))->v) = u0;
                                t3 = t2;
                            }
                            t2 = t3;
                        } else {
                            if ((t1 & 0x8) == 0) {
                                t3 = ((((struct oE4_int *)(a4))->v));
                                u0 = ((((((struct o20_float *)0xC241434)->v)) * (float)(*(short *)((a4 + 0x1C)))) / 100.0f);
                            } else {
                                t3 = ((((struct oE8_int *)(a4))->v));
                                u0 = ((((((struct o24_float *)0xC241434)->v)) * (float)(*(short *)((a4 + 0x1C)))) / 100.0f);
                            }
                            (((struct o88_float *)(t3))->v) = u0;
                            t2 = t3;
                        }
                        t3 = t2;
                    } else {
                        if ((t1 & 0x2) == 0) {
                            t2 = ((((struct oDC_int *)(a4))->v));
                            u0 = ((((((struct o18_float *)0xC241434)->v)) * (float)(*(short *)((a4 + 0x1C)))) / 100.0f);
                        } else {
                            t2 = ((((struct oE0_int *)(a4))->v));
                            u0 = ((((((struct o1C_float *)0xC241434)->v)) * (float)(*(short *)((a4 + 0x1C)))) / 100.0f);
                        }
                        (((struct o88_float *)(t2))->v) = u0;
                        t3 = t2;
                    }
                    t2 = t3;
                } else {
                    if ((t1 & 0x1) == 0) {
                        if ((t1 & 0x2) == 0) {
                            t3 = ((((struct oCC_int *)(a4))->v));
                            u0 = ((((((struct o8_float *)0xC241434)->v)) * (float)(*(short *)((a4 + 0x1C)))) / 100.0f);
                        } else {
                            t3 = ((((struct oD0_int *)(a4))->v));
                            u0 = ((((((struct oC_float *)0xC241434)->v)) * (float)(*(short *)((a4 + 0x1C)))) / 100.0f);
                        }
                        (((struct o88_float *)(t3))->v) = u0;
                        t4 = t3;
                    } else {
                        if ((t1 & 0x2) == 0) {
                            t3 = ((((struct oD4_int *)(a4))->v));
                            u0 = ((((((struct o10_float *)0xC241434)->v)) * (float)(*(short *)((a4 + 0x1C)))) / 100.0f);
                        } else {
                            t3 = ((((struct oD8_int *)(a4))->v));
                            u0 = ((((((struct o14_float *)0xC241434)->v)) * (float)(*(short *)((a4 + 0x1C)))) / 100.0f);
                        }
                        (((struct o88_float *)(t3))->v) = u0;
                        t4 = t3;
                    }
                    t2 = t4;
                }
                t3 = t2;
            } else {
                if ((t1 & 0x1) == 0) {
                    t1 = ((((struct oC4_int *)(a4))->v));
                    u0 = ((((struct o0_float *)0xC241434)->v));
                    u1 = (float)(*(short *)((a4 + 0x1C)));
                } else {
                    t1 = ((((struct oC8_int *)(a4))->v));
                    u0 = ((((struct o4_float *)0xC241434)->v));
                    u1 = (float)(*(short *)((a4 + 0x1C)));
                }
                (((struct o88_float *)(t1))->v) = ((u0 * u1) / 100.0f);
                t3 = t1;
            }
            t1 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t1 + 0x1);
            if ((short)((t1 + 0x1) - 1) == 100) {
                (((struct o14_uchar *)(a4))->v) = 0x0;
            }
            t1 = t3;
            t2 = 0xC5421F8;
            t3 = 0x2;
        } else {
            if (t0 == 2) {
                t0 = 0xC241434;
                t4 = 0xC5421F8;
                t5 = 0x2;
            } else {
                FUN_0c03f346(a4, 0xC241434, 0xC5421F8, 0x2);
            }
            t1 = t0;
            t2 = t4;
            t3 = t5;
        }
        t0 = t1;
        t1 = t2;
        t2 = t3;
    } else {
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        t3 = 0xA8;
        t4 = 0x0;
        for (;;) {
            if ((unsigned int)t4 >= (unsigned int)0x30) {
                break;
            }
            t5 = 0xC4;
            t3 = 0x88;
            t5 = (t5 + a4);
            t5 = (t5 + t4);
            t5 = (*(int *)((t5 + 0x0)));
            t4 = (t4 + 0x4);
            *(float *)((t5 + t3)) = 0.0f;
        }
        t3 = *(signed char *)0xC542236;
        switch (t3) {
        case 4:
            if (((*(signed char *)0xC542366) & 0x8) != 0) {
                t3 = ((((struct oE8_int *)(a4))->v));
                u0 = ((((((struct o24_float *)0xC241434)->v)) * (float)(*(short *)((a4 + 0x1C)))) / 100.0f);
            } else {
                t3 = ((((struct oE4_int *)(a4))->v));
                u0 = ((((((struct o20_float *)0xC241434)->v)) * (float)(*(short *)((a4 + 0x1C)))) / 100.0f);
            }
            (((struct o88_float *)(t3))->v) = u0;
            if (((*(signed char *)0xC542366) & 0x2) != 0) {
                t3 = ((((struct oE0_int *)(a4))->v));
                u0 = ((((((struct o1C_float *)0xC241434)->v)) * (float)(*(short *)((a4 + 0x1C)))) / 100.0f);
            } else {
                t3 = ((((struct oDC_int *)(a4))->v));
                u0 = ((((((struct o18_float *)0xC241434)->v)) * (float)(*(short *)((a4 + 0x1C)))) / 100.0f);
            }
            (((struct o88_float *)(t3))->v) = u0;
            if (((*(signed char *)0xC542366) & 0x1) != 0) {
                if (((*(signed char *)0xC542366) & 0x2) != 0) {
                    t3 = ((((struct oD8_int *)(a4))->v));
                    u0 = ((((((struct o14_float *)0xC241434)->v)) * (float)(*(short *)((a4 + 0x1C)))) / 100.0f);
                } else {
                    t3 = ((((struct oD4_int *)(a4))->v));
                    u0 = ((((((struct o10_float *)0xC241434)->v)) * (float)(*(short *)((a4 + 0x1C)))) / 100.0f);
                }
                (((struct o88_float *)(t3))->v) = u0;
            } else {
                if (((*(signed char *)0xC542366) & 0x2) != 0) {
                    t3 = ((((struct oD0_int *)(a4))->v));
                    u0 = ((((((struct oC_float *)0xC241434)->v)) * (float)(*(short *)((a4 + 0x1C)))) / 100.0f);
                } else {
                    t3 = ((((struct oCC_int *)(a4))->v));
                    u0 = ((((((struct o8_float *)0xC241434)->v)) * (float)(*(short *)((a4 + 0x1C)))) / 100.0f);
                }
                (((struct o88_float *)(t3))->v) = u0;
            }
            if (((*(signed char *)0xC542366) & 0x1) != 0) {
                t3 = ((((struct oC8_int *)(a4))->v));
                u0 = ((((struct o4_float *)0xC241434)->v));
                u1 = (float)(*(short *)((a4 + 0x1C)));
            } else {
                t3 = ((((struct oC4_int *)(a4))->v));
                u0 = ((((struct o0_float *)0xC241434)->v));
                u1 = (float)(*(short *)((a4 + 0x1C)));
            }
            (((struct o88_float *)(t3))->v) = ((u0 * u1) / 100.0f);
            break;
        case 3:
            if (((*(signed char *)0xC542366) & 0x2) != 0) {
                t3 = ((((struct oE0_int *)(a4))->v));
                u0 = ((((((struct o1C_float *)0xC241434)->v)) * (float)(*(short *)((a4 + 0x1C)))) / 100.0f);
            } else {
                t3 = ((((struct oDC_int *)(a4))->v));
                u0 = ((((((struct o18_float *)0xC241434)->v)) * (float)(*(short *)((a4 + 0x1C)))) / 100.0f);
            }
            (((struct o88_float *)(t3))->v) = u0;
            if (((*(signed char *)0xC542366) & 0x1) != 0) {
                if (((*(signed char *)0xC542366) & 0x2) != 0) {
                    t3 = ((((struct oD8_int *)(a4))->v));
                    u0 = ((((((struct o14_float *)0xC241434)->v)) * (float)(*(short *)((a4 + 0x1C)))) / 100.0f);
                } else {
                    t3 = ((((struct oD4_int *)(a4))->v));
                    u0 = ((((((struct o10_float *)0xC241434)->v)) * (float)(*(short *)((a4 + 0x1C)))) / 100.0f);
                }
                (((struct o88_float *)(t3))->v) = u0;
            } else {
                if (((*(signed char *)0xC542366) & 0x2) != 0) {
                    t3 = ((((struct oD0_int *)(a4))->v));
                    u0 = ((((((struct oC_float *)0xC241434)->v)) * (float)(*(short *)((a4 + 0x1C)))) / 100.0f);
                } else {
                    t3 = ((((struct oCC_int *)(a4))->v));
                    u0 = ((((((struct o8_float *)0xC241434)->v)) * (float)(*(short *)((a4 + 0x1C)))) / 100.0f);
                }
                (((struct o88_float *)(t3))->v) = u0;
            }
            if (((*(signed char *)0xC542366) & 0x1) != 0) {
                t3 = ((((struct oC8_int *)(a4))->v));
                u0 = ((((struct o4_float *)0xC241434)->v));
                u1 = (float)(*(short *)((a4 + 0x1C)));
            } else {
                t3 = ((((struct oC4_int *)(a4))->v));
                u0 = ((((struct o0_float *)0xC241434)->v));
                u1 = (float)(*(short *)((a4 + 0x1C)));
            }
            (((struct o88_float *)(t3))->v) = ((u0 * u1) / 100.0f);
            break;
        case 2:
            if (((*(signed char *)0xC542366) & 0x1) != 0) {
                if (((*(signed char *)0xC542366) & 0x2) != 0) {
                    t3 = ((((struct oD8_int *)(a4))->v));
                    u0 = ((((((struct o14_float *)0xC241434)->v)) * (float)(*(short *)((a4 + 0x1C)))) / 100.0f);
                } else {
                    t3 = ((((struct oD4_int *)(a4))->v));
                    u0 = ((((((struct o10_float *)0xC241434)->v)) * (float)(*(short *)((a4 + 0x1C)))) / 100.0f);
                }
                (((struct o88_float *)(t3))->v) = u0;
            } else {
                if (((*(signed char *)0xC542366) & 0x2) != 0) {
                    t3 = ((((struct oD0_int *)(a4))->v));
                    u0 = ((((((struct oC_float *)0xC241434)->v)) * (float)(*(short *)((a4 + 0x1C)))) / 100.0f);
                } else {
                    t3 = ((((struct oCC_int *)(a4))->v));
                    u0 = ((((((struct o8_float *)0xC241434)->v)) * (float)(*(short *)((a4 + 0x1C)))) / 100.0f);
                }
                (((struct o88_float *)(t3))->v) = u0;
            }
            if (((*(signed char *)0xC542366) & 0x1) != 0) {
                t3 = ((((struct oC8_int *)(a4))->v));
                u0 = ((((struct o4_float *)0xC241434)->v));
                u1 = (float)(*(short *)((a4 + 0x1C)));
            } else {
                t3 = ((((struct oC4_int *)(a4))->v));
                u0 = ((((struct o0_float *)0xC241434)->v));
                u1 = (float)(*(short *)((a4 + 0x1C)));
            }
            (((struct o88_float *)(t3))->v) = ((u0 * u1) / 100.0f);
            break;
        case 1:
            if (((*(signed char *)0xC542366) & 0x1) != 0) {
                t3 = ((((struct oC8_int *)(a4))->v));
                u0 = ((((struct o4_float *)0xC241434)->v));
                u1 = (float)(*(short *)((a4 + 0x1C)));
            } else {
                t3 = ((((struct oC4_int *)(a4))->v));
                u0 = ((((struct o0_float *)0xC241434)->v));
                u1 = (float)(*(short *)((a4 + 0x1C)));
            }
            (((struct o88_float *)(t3))->v) = ((u0 * u1) / 100.0f);
            break;
        }
        *(unsigned short *)((a4 + 0x1C)) = 0x0;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t3 = *(signed char *)0xC542366;
        t4 = *(signed char *)0xC542236;
        if (t4 != 0) {
            if (t4 != 1) {
                if (t4 != 2) {
                    if (t4 != 3) {
                        t5 = 0xC241434;
                        if (t4 == 4) {
                            if ((t3 & 0x8) == 0) {
                                t4 = ((((struct oEC_int *)(a4))->v));
                                u0 = ((((((struct o28_float *)0xC241434)->v)) * (float)(*(short *)((a4 + 0x1C)))) / 100.0f);
                            } else {
                                t4 = ((((struct oF0_int *)(a4))->v));
                                u0 = ((((((struct o2C_float *)0xC241434)->v)) * (float)(*(short *)((a4 + 0x1C)))) / 100.0f);
                            }
                            (((struct o88_float *)(t4))->v) = u0;
                            t5 = t4;
                        }
                        t4 = t5;
                    } else {
                        if ((t3 & 0x8) == 0) {
                            t5 = ((((struct oE4_int *)(a4))->v));
                            u0 = ((((((struct o20_float *)0xC241434)->v)) * (float)(*(short *)((a4 + 0x1C)))) / 100.0f);
                        } else {
                            t5 = ((((struct oE8_int *)(a4))->v));
                            u0 = ((((((struct o24_float *)0xC241434)->v)) * (float)(*(short *)((a4 + 0x1C)))) / 100.0f);
                        }
                        (((struct o88_float *)(t5))->v) = u0;
                        t4 = t5;
                    }
                    t5 = t4;
                } else {
                    if ((t3 & 0x2) == 0) {
                        t4 = ((((struct oDC_int *)(a4))->v));
                        u0 = ((((((struct o18_float *)0xC241434)->v)) * (float)(*(short *)((a4 + 0x1C)))) / 100.0f);
                    } else {
                        t4 = ((((struct oE0_int *)(a4))->v));
                        u0 = ((((((struct o1C_float *)0xC241434)->v)) * (float)(*(short *)((a4 + 0x1C)))) / 100.0f);
                    }
                    (((struct o88_float *)(t4))->v) = u0;
                    t5 = t4;
                }
                t4 = t5;
            } else {
                if ((t3 & 0x1) == 0) {
                    if ((t3 & 0x2) == 0) {
                        t5 = ((((struct oCC_int *)(a4))->v));
                        u0 = ((((((struct o8_float *)0xC241434)->v)) * (float)(*(short *)((a4 + 0x1C)))) / 100.0f);
                    } else {
                        t5 = ((((struct oD0_int *)(a4))->v));
                        u0 = ((((((struct oC_float *)0xC241434)->v)) * (float)(*(short *)((a4 + 0x1C)))) / 100.0f);
                    }
                    (((struct o88_float *)(t5))->v) = u0;
                    t4 = t5;
                } else {
                    if ((t3 & 0x2) == 0) {
                        t5 = ((((struct oD4_int *)(a4))->v));
                        u0 = ((((((struct o10_float *)0xC241434)->v)) * (float)(*(short *)((a4 + 0x1C)))) / 100.0f);
                    } else {
                        t5 = ((((struct oD8_int *)(a4))->v));
                        u0 = ((((((struct o14_float *)0xC241434)->v)) * (float)(*(short *)((a4 + 0x1C)))) / 100.0f);
                    }
                    (((struct o88_float *)(t5))->v) = u0;
                    t4 = t5;
                }
            }
            t5 = t4;
        } else {
            if ((t3 & 0x1) == 0) {
                t3 = ((((struct oC4_int *)(a4))->v));
                u0 = ((((struct o0_float *)0xC241434)->v));
                u1 = (float)(*(short *)((a4 + 0x1C)));
            } else {
                t3 = ((((struct oC8_int *)(a4))->v));
                u0 = ((((struct o4_float *)0xC241434)->v));
                u1 = (float)(*(short *)((a4 + 0x1C)));
            }
            (((struct o88_float *)(t3))->v) = ((u0 * u1) / 100.0f);
            t5 = t3;
        }
        t3 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t3 + 0x1);
        if ((short)((t3 + 0x1) - 1) == 100) {
            (((struct o14_uchar *)(a4))->v) = 0x0;
        }
        t0 = t5;
        t1 = 0xC5421F8;
        t2 = 0x2;
    }
    t3 = *(signed char *)((a4 + 0x15));
    if (t3 != 0) {
        if (t3 != 1) {
            if (t3 != 2) {
                if (t3 != 3) {
                    if (t3 != 4) {
                        return FUN_0c03f346(a4, t0, t1, t2);
                    }
                    (((struct oB0_float *)(a4))->v) = (((((struct oB0_float *)(a4))->v)) - 0.0500000007f);
                    t0 = *(short *)((a4 + 0x1E));
                    *(unsigned short *)((a4 + 0x1E)) = (t0 - 1);
                    t1 = (short)(t0 - 1);
                    if ((short)(t0 - 1) == 0) {
                        *(unsigned short *)((a4 + 0x1E)) = 0x3C;
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        t1 = 0x15;
                    }
                    return t1;
                }
                t0 = *(short *)((a4 + 0x1E));
                *(unsigned short *)((a4 + 0x1E)) = (t0 - 1);
                t1 = (short)(t0 - 1);
                if ((short)(t0 - 1) == 0) {
                    *(unsigned short *)((a4 + 0x1E)) = 0x14;
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    t1 = 0x15;
                }
                return t1;
            }
            (((struct oB0_float *)(a4))->v) = (((((struct oB0_float *)(a4))->v)) + 0.0500000007f);
            t0 = *(short *)((a4 + 0x1E));
            *(unsigned short *)((a4 + 0x1E)) = (t0 - 1);
            t1 = (short)(t0 - 1);
            if ((short)(t0 - 1) == 0) {
                *(unsigned short *)((a4 + 0x1E)) = 0x78;
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                t1 = 0x15;
            }
            return t1;
        }
    } else {
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oB0_float *)(a4))->v) = 0.0f;
        *(unsigned short *)((a4 + 0x1E)) = 0xB4;
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    }
    t0 = *(short *)((a4 + 0x1E));
    *(unsigned short *)((a4 + 0x1E)) = (t0 - 1);
    t1 = (short)(t0 - 1);
    if ((short)(t0 - 1) == 0) {
        *(unsigned short *)((a4 + 0x1E)) = 0x14;
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t1 = 0x15;
    }
    return t1;
}

int FUN_0c010af8(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t8;
    register int t9;
    register int t12;
    register int t13;
    register int t20;
    register int t21;
    register int t31;
    register int t36;
    int t52;
    register int t57;
    register int t61;
    register int t65;
    register int t68;
    register int t75;
    register int t71;
    register int t74;
    register int t80;
    register int t83;
    register int t85;
    register int t86;
    register int t106;
    register int t88;
    register int t91;
    register int t93;
    register int t111;
    register int t114;
    register int t116;
    register int t129;
    register int t130;
    register int t132;
    register int t135;
    register int t140;
    register int t141;
    register int t142;
    register int t143;
    register int t144;
    register int t46;
    register int t125;

    t0 = *(signed char *)0xC30EF66;
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 == 1) {
            t1 = *(signed char *)0xC30EF68;
            if ((unsigned char)t1 != 0) {
                if ((unsigned char)t1 != 1) {
                    if ((unsigned char)t1 != 2) {
                        t46 = (unsigned char)t1;
                        if ((unsigned char)t1 != 3) {
                        } else {
                            t2 = (((struct o6_short *)0xC30EF66)->v);
                            (((struct o6_ushort *)0xC30EF66)->v) = (t2 - 1);
                            t46 = (short)(t2 - 1);
                            if ((int)(short)(t2 - 1) > 0) {
                            } else {
                                (((struct o2_uchar *)0xC30EF66)->v) = 0x0;
                                t3 = *(signed char *)0xC30EF66;
                                (((struct o0_uchar *)0xC30EF66)->v) = (t3 + 0x1);
                                t46 = (t3 + 0x1);
                            }
                        }
                    } else {
                        t8 = (((struct o6_short *)0xC30EF66)->v);
                        (((struct o6_ushort *)0xC30EF66)->v) = (t8 - 1);
                        if ((int)(short)(t8 - 1) > 0) {
                            t9 = FUN_0c01cd2c(0x101);
                            t46 = (short)t9;
                            if ((short)t9 == 0) {
                            } else {
                                FUN_0c018fd2(0x4);
                                (((struct o6_ushort *)0xC30EF66)->v) = 0xC;
                                (((struct o2_uchar *)0xC30EF66)->v) = ((*(signed char *)0xC30EF68) + 0x1);
                                t12 = (((struct o6_short *)0xC30EF66)->v);
                                (((struct o6_ushort *)0xC30EF66)->v) = (t12 - 1);
                                t46 = (short)(t12 - 1);
                                if ((int)(short)(t12 - 1) > 0) {
                                } else {
                                    (((struct o2_uchar *)0xC30EF66)->v) = 0x0;
                                    t13 = *(signed char *)0xC30EF66;
                                    (((struct o0_uchar *)0xC30EF66)->v) = (t13 + 0x1);
                                    t46 = (t13 + 0x1);
                                }
                            }
                        } else {
                            FUN_0c018fd2(0x4);
                            (((struct o6_ushort *)0xC30EF66)->v) = 0xC;
                            (((struct o2_uchar *)0xC30EF66)->v) = ((*(signed char *)0xC30EF68) + 0x1);
                            t20 = (((struct o6_short *)0xC30EF66)->v);
                            (((struct o6_ushort *)0xC30EF66)->v) = (t20 - 1);
                            t46 = (short)(t20 - 1);
                            if ((int)(short)(t20 - 1) > 0) {
                            } else {
                                (((struct o2_uchar *)0xC30EF66)->v) = 0x0;
                                t21 = *(signed char *)0xC30EF66;
                                (((struct o0_uchar *)0xC30EF66)->v) = (t21 + 0x1);
                                t46 = (t21 + 0x1);
                            }
                        }
                    }
                } else {
                    *(unsigned char *)0xC30B6F4 = 0x0;
                    FUN_0c018e74(0x4);
                    (((struct o6_ushort *)0xC30EF66)->v) = 0x4D0;
                    t31 = *(signed char *)0xC30EF68;
                    (((struct o2_uchar *)0xC30EF66)->v) = (t31 + 0x1);
                    t46 = (t31 + 0x1);
                }
            } else {
                t36 = (((struct o6_short *)0xC30EF66)->v);
                (((struct o6_ushort *)0xC30EF66)->v) = (t36 + 0x1);
                t46 = (unsigned char)t1;
                if ((int)(short)(t36 + 0x1) < (int)0x14) {
                } else {
                    if ((*(signed char *)0xC30B6F4) == 0) {
                        (((struct o0_uchar *)0xC30EF66)->v) = ((*(signed char *)0xC30EF66) + 0x1);
                        t46 = 0x0;
                    } else {
                        t46 = ((*(signed char *)0xC30EF68) + 0x1);
                    }
                    (((struct o2_uchar *)0xC30EF66)->v) = t46;
                }
            }
            return t46;
        }
        if ((unsigned char)t0 == 2) {
            t52 = 0x0;
            for (;;) {
                FUN_0c01c714(0xC30EF67, 0x3, 0x2);
                if (((*(signed char *)(((((*(signed char *)0xC30AA32) << 2) + (unsigned char)(*(signed char *)0xC30EF67)) + 0xC20B84C))) != 0) && (t52 = (t52 + 0x1), (int)(short)t52 < (int)0xA)) continue;
                break;
            }
            t57 = FUN_0c01cd2c(0x40);
            if ((short)t57 != 0) {
                FUN_0c05aab6(((short)(short)t57 - 1), 0x4);
                (((struct o0_uchar *)0xC30EF66)->v) = ((*(signed char *)0xC30EF66) + 0x2);
                (((struct o1_uchar *)0xC30EF66)->v) = 0x3;
                (((struct o6_ushort *)0xC30EF66)->v) = 0x0;
                return (FUN_0c0573cc(0xFFFFFFFF, 0x0, 0x14));
            }
            t61 = FUN_0c01cd2c(0x101);
            if ((short)t61 == 0) {
                return (short)t61;
            }
            FUN_0c05aab6(((short)(short)t61 - 1), 0x3);
            (((struct o6_ushort *)0xC30EF66)->v) = 0x0;
            (((struct o0_uchar *)0xC30EF66)->v) = ((*(signed char *)0xC30EF66) + 0x1);
            *(unsigned char *)0xC305418 = (*(signed char *)0xC30EF67);
            t65 = *(signed char *)0xC305418;
            if ((signed char)t65 == 1) {
                *(unsigned char *)0xC30AF89 = 0x1;
                (((struct o0_uchar *)0xC30EF66)->v) = 0x6;
                (((struct o2_uchar *)0xC30EF66)->v) = 0x0;
                (((struct o3_uchar *)0xC30EF66)->v) = 0x0;
                return FUN_0c01d27a();
            }
            if ((signed char)t65 != 0) {
                if ((signed char)t65 != 2) {
                } else {
                    *(unsigned char *)0xC30AF89 = t65;
                }
            } else {
                *(unsigned char *)0xC30AF89 = t65;
            }
            return (signed char)t65;
        }
        if ((unsigned char)t0 == 3) {
            t68 = (((struct o6_short *)0xC30EF66)->v);
            (((struct o6_ushort *)0xC30EF66)->v) = (t68 + 0x1);
            t75 = (unsigned char)t0;
            if ((int)(short)(t68 + 0x1) < (int)0x10) {
            } else {
                t71 = 0xFF000000;
                if ((unsigned char)(*(signed char *)0xC30EF67) == 3) {
                    t71 = 0xFFFFFFFF;
                }
                FUN_0c0573cc(t71, 0x0, 0x14);
                (((struct o6_ushort *)0xC30EF66)->v) = 0x0;
                t74 = *(signed char *)0xC30EF66;
                (((struct o0_uchar *)0xC30EF66)->v) = (t74 + 0x1);
                t75 = (t74 + 0x1);
            }
            return t75;
        }
        if ((unsigned char)t0 == 4) {
            t80 = (((struct o6_short *)0xC30EF66)->v);
            (((struct o6_ushort *)0xC30EF66)->v) = (t80 + 0x1);
            if ((int)(short)(t80 + 0x1) >= (int)0x14) {
                if ((unsigned char)(*(signed char *)0xC30EF67) != 3) {
                    t83 = *(signed char *)0xC30EF66;
                    (((struct o0_uchar *)0xC30EF66)->v) = (t83 + 0x1);
                    *(unsigned int *)0xC30EF68 = 0x0;
                    return (t83 + 0x1);
                }
                return FUN_0c010448();
            }
            return (unsigned char)t0;
        }
        if ((unsigned char)t0 == 5) {
            t85 = *(int *)((0xC20B840 + ((unsigned char)(*(signed char *)0xC30EF67) << 2)));
            return ((int (*)(int, int, int, int))(t85))(0xC30EF6C, 0x10, a6, a7);
        }
        if ((unsigned char)t0 == 6) {
            t86 = (((struct o6_short *)0xC30EF66)->v);
            (((struct o6_ushort *)0xC30EF66)->v) = (t86 + 0x1);
            t106 = (unsigned char)t0;
            if ((int)(short)(t86 + 0x1) >= (int)0x10) {
                (((struct o0_uchar *)0xC30EF66)->v) = ((*(signed char *)0xC30EF66) + 0x1);
                t88 = FUN_0c01d6cc();
                if (t88 == 1) {
                    FUN_0c0573cc(0xFF000000, 0x0, 0x14);
                    (((struct o6_ushort *)0xC30EF66)->v) = 0x0;
                    (((struct o0_uchar *)0xC30EF66)->v) = 0x4;
                    t106 = 0x4;
                } else {
                    if (t88 == -3) {
                        (((struct o1_uchar *)0xC30EF66)->v) = 0x3;
                        FUN_0c0573cc(0xFF000000, 0x0, 0x14);
                        (((struct o6_ushort *)0xC30EF66)->v) = 0x14;
                        t91 = *(signed char *)0xC30EF66;
                        (((struct o0_uchar *)0xC30EF66)->v) = (t91 + 0x1);
                        t106 = (t91 + 0x1);
                    } else {
                        t106 = t88;
                        if (t88 == -4) {
                            (((struct o1_uchar *)0xC30EF66)->v) = 0x3;
                            FUN_0c0573cc(0xFFFFFFFF, 0x0, 0x14);
                            (((struct o6_ushort *)0xC30EF66)->v) = 0x14;
                            t93 = *(signed char *)0xC30EF66;
                            (((struct o0_uchar *)0xC30EF66)->v) = (t93 + 0x2);
                            t106 = (t93 + 0x2);
                        }
                    }
                }
            }
            return t106;
        }
        if ((unsigned char)t0 == 7) {
            t111 = FUN_0c01d6cc();
            if (t111 == 1) {
                FUN_0c0573cc(0xFF000000, 0x0, 0x14);
                (((struct o6_ushort *)0xC30EF66)->v) = 0x0;
                (((struct o0_uchar *)0xC30EF66)->v) = 0x4;
                t125 = 0x4;
            } else {
                if (t111 == -3) {
                    (((struct o1_uchar *)0xC30EF66)->v) = 0x3;
                    FUN_0c0573cc(0xFF000000, 0x0, 0x14);
                    (((struct o6_ushort *)0xC30EF66)->v) = 0x14;
                    t114 = *(signed char *)0xC30EF66;
                    (((struct o0_uchar *)0xC30EF66)->v) = (t114 + 0x1);
                    t125 = (t114 + 0x1);
                } else {
                    t125 = t111;
                    if (t111 == -4) {
                        (((struct o1_uchar *)0xC30EF66)->v) = 0x3;
                        FUN_0c0573cc(0xFFFFFFFF, 0x0, 0x14);
                        (((struct o6_ushort *)0xC30EF66)->v) = 0x14;
                        t116 = *(signed char *)0xC30EF66;
                        (((struct o0_uchar *)0xC30EF66)->v) = (t116 + 0x2);
                        t125 = (t116 + 0x2);
                    }
                }
            }
            return t125;
        }
        if ((unsigned char)t0 == 8) {
            t129 = (((struct o6_short *)0xC30EF66)->v);
            (((struct o6_ushort *)0xC30EF66)->v) = (t129 - 1);
            t130 = (unsigned char)t0;
            if ((int)(short)(t129 - 1) <= 0) {
                (((struct o0_uchar *)0xC30EF66)->v) = 0x0;
                (((struct o2_uchar *)0xC30EF66)->v) = 0x0;
                t130 = 0x0;
            }
            return t130;
        }
        if ((unsigned char)t0 == 9) {
            t132 = (((struct o6_short *)0xC30EF66)->v);
            (((struct o6_ushort *)0xC30EF66)->v) = (t132 - 1);
            if ((int)(short)(t132 - 1) <= 0) {
                return FUN_0c010448();
            }
            return (unsigned char)t0;
        }
        return (unsigned char)t0;
    }
    FUN_0c01e9e4();
    t135 = 0x0;
    if ((*(signed char *)0xC30AA32) == 1) {
        t135 = 0x1;
    }
    (((struct o1_uchar *)0xC30EF66)->v) = t135;
    (((struct o2_uchar *)0xC30EF66)->v) = 0x0;
    (((struct o0_uchar *)0xC30EF66)->v) = ((*(signed char *)0xC30EF66) + 0x1);
    (((struct o6_ushort *)0xC30EF66)->v) = 0x0;
    FUN_0c0573c0(0xFF000000, 0x0, 0x14);
    FUN_0c019954(0xC30EF67);
    t140 = 0xC30A404;
    for (;;) {
        if ((unsigned int)t140 >= (unsigned int)0xC30A40C) {
            break;
        }
        *(unsigned char *)((t140 + 0x0)) = 0x0;
        t140 = (t140 + 0x1);
    }
    t141 = 0xC309D86;
    t142 = 0xC309D06;
    t143 = 0xC309C86;
    for (;;) {
        if ((unsigned int)t141 >= (unsigned int)0xC309E06) {
            break;
        }
        *(unsigned char *)((t143 + 0x0)) = 0x0;
        t143 = (t143 + 0x1);
        *(unsigned char *)((t142 + 0x0)) = 0x0;
        t142 = (t142 + 0x1);
        *(unsigned char *)((t141 + 0x0)) = 0x0;
        t141 = (t141 + 0x1);
    }
    *(unsigned char *)0xC30AC5C = 0x0;
    (((struct o20_uchar *)0xC309BCC)->v) = 0x0;
    (((struct o2_ushort *)0xC309BCC)->v) = 0x0;
    (((struct o0_ushort *)0xC309BCC)->v) = 0x0;
    t144 = 0xC309C74;
    for (;;) {
        if ((unsigned int)t144 >= (unsigned int)0xC309C86) {
            break;
        }
        *(unsigned char *)((t144 + 0x0)) = 0x0;
        t144 = (t144 + 0x1);
    }
    return 0xC309BCE;
}

int FUN_0c156f78(int a4)
{
    int t0;
    register int t1;
    register int t2;

    t1 = *(signed char *)((a4 + 0x14));
    if (t1 != 0) {
        if (t1 != 1) {
            if (t1 != 2) {
                if (t1 == 3) {
                    t1 = *(signed char *)((a4 + 0x2));
                    if ((*(float *)((0xC475A04 + (t1 << 2)))) == ((((struct o160_float *)(((t1 * 0x3938) + 0xC532498)))->v))) {
                    } else {
                        *(float *)((0xC4759F4 + ((*(signed char *)((a4 + 0x2))) << 2))) = 60.0f;
                        t1 = *(signed char *)((a4 + 0x2));
                        if ((*(float *)((0xC475A04 + (t1 << 2)))) > ((((struct o160_float *)(((t1 * 0x3938) + 0xC532498)))->v))) {
                            t1 = *(signed char *)((a4 + 0x2));
                            *(float *)((((t1 << 2) + 0xC475A24) + 0x0)) = (*(float *)((0xC475A04 + (t1 << 2))));
                            t1 = *(signed char *)((a4 + 0x2));
                            *(float *)((((t1 << 2) + 0xC475A14) + 0x0)) = (*(float *)((0xC475A04 + (t1 << 2))));
                            t1 = *(signed char *)((a4 + 0x2));
                            *(float *)((0xC475A04 + (t1 << 2))) = ((((struct o160_float *)(((t1 * 0x3938) + 0xC532498)))->v));
                            t1 = *(signed char *)((a4 + 0x2));
                            *(float *)((((t1 << 2) + 0xC475A34) + 0x0)) = (*(float *)((0xC475A04 + (t1 << 2))));
                            t1 = *(signed char *)((a4 + 0x2));
                            *(float *)((((t1 << 2) + 0xC475A44) + 0x0)) = (*(float *)((0xC475A14 + (t1 << 2))));
                            t1 = *(signed char *)((a4 + 0x2));
                            *(float *)((((t1 << 2) + 0xC475A54) + 0x0)) = (*(float *)((0xC475A04 + (t1 << 2))));
                        }
                        t1 = *(signed char *)((a4 + 0x2));
                        if (((((struct o160_float *)(((t1 * 0x3938) + 0xC532498)))->v)) > (*(float *)((0xC475A04 + (t1 << 2))))) {
                            t1 = *(signed char *)((a4 + 0x2));
                            *(float *)((((t1 << 2) + 0xC475A24) + 0x0)) = (*(float *)((0xC475A04 + (t1 << 2))));
                            t1 = *(signed char *)((a4 + 0x2));
                            *(float *)((((t1 << 2) + 0xC475A14) + 0x0)) = (*(float *)((0xC475A04 + (t1 << 2))));
                            t1 = *(signed char *)((a4 + 0x2));
                            *(float *)((0xC475A04 + (t1 << 2))) = ((((struct o160_float *)(((t1 * 0x3938) + 0xC532498)))->v));
                            t1 = *(signed char *)(((0x2 + a4) + 0x0));
                            *(float *)((((t1 << 2) + 0xC475A34) + 0x0)) = (*(float *)((0xC475A14 + (t1 << 2))));
                            t1 = *(signed char *)(((0x2 + a4) + 0x0));
                            *(float *)((((t1 << 2) + 0xC475A44) + 0x0)) = (*(float *)((0xC475A14 + (t1 << 2))));
                            t1 = *(signed char *)(((0x2 + a4) + 0x0));
                            *(float *)(((0xC475A54 + (t1 << 2)) + 0x0)) = (*(float *)((0xC475A04 + (t1 << 2))));
                        }
                    }
                    if ((*(float *)((0xC4759F4 + ((*(signed char *)((a4 + 0x2))) << 2)))) > 0.0f) {
                        t1 = *(signed char *)((a4 + 0x2));
                        *(float *)((0xC4759F4 + (t1 << 2))) = ((*(float *)((0xC4759F4 + (t1 << 2)))) - 1.0f);
                    } else {
                        t1 = *(signed char *)((a4 + 0x2));
                        if ((*(float *)((0xC475A14 + (t1 << 2)))) != (*(float *)((0xC475A04 + (t1 << 2))))) {
                            t1 = *(signed char *)((a4 + 0x2));
                            if ((*(float *)((0xC475A24 + (t1 << 2)))) > (*(float *)((0xC475A04 + (t1 << 2))))) {
                                t1 = *(signed char *)((a4 + 0x2));
                                if (((*(float *)((0xC475A04 + (t1 << 2)))) + 3.0f) > (*(float *)((0xC475A14 + (t1 << 2))))) {
                                    t1 = *(signed char *)((a4 + 0x2));
                                    *(float *)((((t1 << 2) + 0xC475A14) + 0x0)) = (*(float *)((0xC475A04 + (t1 << 2))));
                                } else {
                                    t1 = *(signed char *)((a4 + 0x2));
                                    *(float *)((0xC475A14 + (t1 << 2))) = ((*(float *)((0xC475A14 + (t1 << 2)))) - 3.0f);
                                }
                                t1 = *(signed char *)(((0x2 + a4) + 0x0));
                                *(float *)((((t1 << 2) + 0xC475A44) + 0x0)) = (*(float *)((0xC475A14 + (t1 << 2))));
                            }
                            t1 = *(signed char *)((a4 + 0x2));
                            if ((*(float *)((0xC475A04 + (t1 << 2)))) > (*(float *)((0xC475A24 + (t1 << 2))))) {
                                t1 = *(signed char *)((a4 + 0x2));
                                if ((*(float *)((0xC475A14 + (t1 << 2)))) > ((*(float *)((0xC475A04 + (t1 << 2)))) + -3.0f)) {
                                    t1 = *(signed char *)((a4 + 0x2));
                                    *(float *)((((t1 << 2) + 0xC475A14) + 0x0)) = (*(float *)((0xC475A04 + (t1 << 2))));
                                } else {
                                    t1 = *(signed char *)((a4 + 0x2));
                                    *(float *)((0xC475A14 + (t1 << 2))) = ((*(float *)((0xC475A14 + (t1 << 2)))) + 3.0f);
                                }
                                t1 = *(signed char *)(((0x2 + a4) + 0x0));
                                *(float *)((((t1 << 2) + 0xC475A34) + 0x0)) = (*(float *)((0xC475A14 + (t1 << 2))));
                            }
                        }
                    }
                    (((struct o84_float *)(((((struct oC8_int *)(a4))->v))))->v) = (((((*(float *)((0xC475A34 + ((*(signed char *)((a4 + 0x2))) << 2)))) * 0.88499999f) / 1000.0f)) + 0.115000002f);
                    (((struct o84_float *)(((((struct oCC_int *)(a4))->v))))->v) = (((((*(float *)((0xC475A44 + ((*(signed char *)((a4 + 0x2))) << 2)))) * 0.88499999f) / 1000.0f)) + 0.115000002f);
                    return 0x84;
                }
                return FUN_0c03f346(a4, 0xC475A04, 0x3938, 0xC475A14);
            }
            t1 = (((struct oC4_int *)(a4))->v);
            (((struct o84_float *)(t1))->v) = (((((struct o84_float *)(t1))->v)) + 0.00999999978f);
            t1 = (((struct oC8_int *)(a4))->v);
            (((struct o84_float *)(t1))->v) = (((((struct o84_float *)(t1))->v)) + 0.00999999978f);
            t1 = (((struct oCC_int *)(a4))->v);
            (((struct o84_float *)(t1))->v) = (((((struct o84_float *)(t1))->v)) + 0.00999999978f);
            t1 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
            t2 = (short)(t1 - 1);
            if ((short)(t1 - 1) != 0) {
            } else {
                (((struct o84_float *)(((((struct oC4_int *)(a4))->v))))->v) = 1.0f;
                (((struct o84_float *)(((((struct oC8_int *)(a4))->v))))->v) = 1.0f;
                (((struct o84_float *)(((((struct oCC_int *)(a4))->v))))->v) = 1.0f;
                *(float *)((0xC4759F4 + ((*(signed char *)((a4 + 0x2))) << 2))) = 0.0f;
                t1 = *(signed char *)((a4 + 0x2));
                *(float *)((0xC475A04 + (t1 << 2))) = ((((struct o160_float *)(((t1 * 0x3938) + 0xC532498)))->v));
                t1 = *(signed char *)((a4 + 0x2));
                *(float *)((0xC475A14 + (t1 << 2))) = ((((struct o160_float *)(((t1 * 0x3938) + 0xC532498)))->v));
                t1 = *(signed char *)((a4 + 0x2));
                *(float *)((0xC475A24 + (t1 << 2))) = ((((struct o160_float *)(((t1 * 0x3938) + 0xC532498)))->v));
                t1 = *(signed char *)((a4 + 0x2));
                *(float *)((0xC475A34 + (t1 << 2))) = ((((struct o160_float *)(((t1 * 0x3938) + 0xC532498)))->v));
                t1 = *(signed char *)((a4 + 0x2));
                *(float *)((0xC475A44 + (t1 << 2))) = ((((struct o160_float *)(((t1 * 0x3938) + 0xC532498)))->v));
                t1 = *(signed char *)((a4 + 0x2));
                *(float *)((0xC475A54 + (t1 << 2))) = ((((struct o160_float *)(((t1 * 0x3938) + 0xC532498)))->v));
                *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x1;
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t2 = 0x14;
            }
            return t2;
        }
        t1 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
        t2 = (short)(t1 - 1);
        if ((short)(t1 - 1) != 0) {
        } else {
            (((struct oA8_uchar *)(a4))->v) = 0x1;
            *(unsigned short *)((a4 + 0x1C)) = 0x64;
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t2 = 0x14;
        }
        return t2;
    }
    if (((*(signed char *)0xC542237) == 6) && (t0 = *(signed char *)0xC54223C, t0 == 0)) {
        (((struct oA8_uchar *)(a4))->v) = 0x0;
        t0 = 0xA8;
    } else {
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct o84_float *)(((((struct oC4_int *)(a4))->v))))->v) = 0.0f;
        (((struct o84_float *)(((((struct oC8_int *)(a4))->v))))->v) = 0.0f;
        (((struct o84_float *)(((((struct oCC_int *)(a4))->v))))->v) = 0.0f;
        *(unsigned short *)((a4 + 0x1C)) = 0x3C;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t0 = 0x14;
    }
    return t0;
}

int FUN_0c0f94cc(int a4, int a5, int a6, int a7, float f4)
{
    int t0;
    int t1;
    register int t2;
    register float u0;
    register float u1;
    register float u2;

    t2 = *(signed char *)((a4 + 0x14));
    if (t2 != 0) {
        if (t2 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        if (((*(signed char *)0xC541F43) != 0) && (t0 = *(signed char *)((a4 + 0x15)), (int)t0 < (int)0x10)) {
            (((struct o15_uchar *)(a4))->v) = 0x10;
        }
        t0 = *(signed char *)((a4 + 0x15));
        switch (t0) {
        case 0:
            *(unsigned short *)((a4 + 0x1C)) = 0x3C;
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
            u0 = 1.0f;
            u0 = u0 + 0.25f * (float)(*(short *)((a4 + 0x1C)));
            (((struct o40_float *)(a4))->v) = u0;
            (((struct o28_float *)(a4))->v) = (((float)(*(short *)((a4 + 0x1C))) / 60.0f) * 2.8125f);
            (((struct o2C_float *)(a4))->v) = (((float)(*(short *)((a4 + 0x1C))) / 60.0f) * 4.5703125f);
            u0 = (((struct o40_float *)(a4))->v);
            (((struct o40_float *)(a4))->v) = (u0 / 128.0f);
            (((struct o44_float *)(a4))->v) = (u0 / 128.0f);
            if ((int)(*(short *)((a4 + 0x1C))) > 0) {
            } else {
                *(unsigned short *)((a4 + 0x1C)) = 0x1E;
                *(unsigned short *)((a4 + 0x1E)) = 0x0;
                (((struct o20_ushort *)(a4))->v) = 0x78;
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                (((struct o16_uchar *)(a4))->v) = 0x1;
                (((struct o22_ushort *)(a4))->v) = 0xAAA;
            }
            break;
        case 1:
            *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
            u0 = 1.0f;
            u0 = u0 + 0.25f * (float)(*(short *)((a4 + 0x1C)));
            (((struct o40_float *)(a4))->v) = u0;
            (((struct o28_float *)(a4))->v) = (((float)(*(short *)((a4 + 0x1C))) / 60.0f) * 2.8125f);
            (((struct o2C_float *)(a4))->v) = (((float)(*(short *)((a4 + 0x1C))) / 60.0f) * 4.5703125f);
            u0 = (((struct o40_float *)(a4))->v);
            (((struct o40_float *)(a4))->v) = (u0 / 128.0f);
            (((struct o44_float *)(a4))->v) = (u0 / 128.0f);
            if ((int)(*(short *)((a4 + 0x1C))) > 0) {
            } else {
                *(unsigned short *)((a4 + 0x1C)) = 0x1E;
                *(unsigned short *)((a4 + 0x1E)) = 0x0;
                (((struct o20_ushort *)(a4))->v) = 0x78;
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                (((struct o16_uchar *)(a4))->v) = 0x1;
                (((struct o22_ushort *)(a4))->v) = 0xAAA;
            }
            break;
        case 2:
            *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
            *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
            (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) - 1);
            t0 = (((struct o20_short *)(a4))->v);
            u0 = math_sin_angle16(((*(short *)((a4 + 0x1E))) << 13));
            (((struct o40_float *)(a4))->v) = (((((float)t0 / 960.0f) * u0)) + 1.0f);
            (((struct o44_float *)(a4))->v) = (1.0f - ((((float)t0 / 960.0f) * u0)));
            (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) * 0.0078125f);
            (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) * 0.0078125f);
            (((struct o6C_float *)(((((struct oC8_int *)(a4))->v))))->v) = (((float)(*(short *)((a4 + 0x1C))) / 30.0f) * 3000.0f);
            if ((int)(*(short *)((a4 + 0x1C))) > 0) {
            } else {
                *(unsigned short *)((a4 + 0x1C)) = 0x1E;
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            }
            break;
        case 3:
            *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
            u0 = math_sin_angle16((int)(((float)(*(short *)((a4 + 0x1C))) / 30.0f) * 32768.0f));
            (((struct o40_float *)(a4))->v) = (1.0f - ((u0 * 0.5f)));
            (((struct o44_float *)(a4))->v) = (((u0 * 0.5f)) + 1.0f);
            (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) * 0.0078125f);
            (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) * 0.0078125f);
            if ((int)(*(short *)((a4 + 0x1C))) > 0) {
            } else {
                *(unsigned short *)((a4 + 0x1C)) = 0x3C;
                *(unsigned short *)((a4 + 0x1E)) = 0x0;
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                (((struct o16_uchar *)(a4))->v) = 0x1;
                (((struct o22_ushort *)(a4))->v) = 0xE38;
            }
            break;
        case 4:
            *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
            *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
            t2 = *(short *)((a4 + 0x1C));
            u0 = math_sin_angle16(((*(short *)((a4 + 0x1E))) << 13));
            u1 = (((float)t2 * 0.100000001f) / 60.0f);
            (((struct o40_float *)(a4))->v) = (((u1 * u0)) + 1.0f);
            (((struct o44_float *)(a4))->v) = (1.0f - ((u1 * u0)));
            (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) * 0.0078125f);
            (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) * 0.0078125f);
            if ((int)(*(short *)((a4 + 0x1C))) <= (int)0x1E) {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            }
            break;
        case 5:
            *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
            *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
            t2 = *(short *)((a4 + 0x1C));
            u0 = math_sin_angle16(((*(short *)((a4 + 0x1E))) << 13));
            u1 = (((float)t2 * 0.100000001f) / 60.0f);
            u2 = (u1 * u0);
            (((struct o40_float *)(a4))->v) = (1.0f - ((u1 * u0)));
            (((struct o44_float *)(a4))->v) = (u2 + 1.0f);
            (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) * 0.0078125f);
            (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) * 0.0078125f);
            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 0.0187500007f);
            if ((int)(*(short *)((a4 + 0x1C))) > 0) {
            } else {
                t2 = ((int (*)(int, float))(FUN_0c0f9cc4))(a4, (u2 + 1.0f));
                t2 = FUN_0c0fa012(a4);
                FUN_0c0f9e28(t2);
                *(unsigned char *)0xC541F44 = 0x1;
                FUN_0c0fa55a();
                (((struct o15_uchar *)(a4))->v) = 0x63;
            }
            break;
        case 16:
            (((struct o28_float *)(a4))->v) = 0.0f;
            (((struct o2C_float *)(a4))->v) = 0.5625f;
            (((struct o40_float *)(a4))->v) = 0.0078125f;
            (((struct o44_float *)(a4))->v) = 0.0078125f;
            (((struct o6C_float *)(((((struct oC8_int *)(a4))->v))))->v) = 0.0f;
            (((struct o16_uchar *)(a4))->v) = 0x1;
            (((struct o22_ushort *)(a4))->v) = 0x0;
            t0 = ((int (*)(int, int, int, int, float))(FUN_0c0f9cc4))(a4, a5, a6, a7, 0.0f);
            t0 = FUN_0c0fa012(a4);
            FUN_0c0f9e28(t0);
            *(unsigned char *)0xC541F44 = 0x1;
            FUN_0c0fa55a();
            (((struct o15_uchar *)(a4))->v) = 0x63;
            break;
        }
        t0 = *(signed char *)((a4 + 0x16));
        if (t0 != 0) {
            if (t0 != 1) {
                t2 = t0;
                if (t0 != 2) {
                } else {
                    (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) + 0x12);
                    t0 = (((struct oCC_int *)(a4))->v);
                    (((struct o80_uint *)(t0))->v) = (((((struct o80_int *)(t0))->v)) + ((((struct o22_short *)(a4))->v)));
                    t0 = 0x22;
                    if ((int)((((struct o22_short *)(a4))->v)) >= (int)0x111) {
                        (((struct o22_ushort *)(a4))->v) = 0x111;
                        (((struct o16_uchar *)(a4))->v) = 0x1;
                        t0 = 0x16;
                    }
                    t2 = t0;
                }
                t0 = t2;
            } else {
                (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) - 18);
                t2 = (((struct oCC_int *)(a4))->v);
                (((struct o80_uint *)(t2))->v) = (((((struct o80_int *)(t2))->v)) + ((((struct o22_short *)(a4))->v)));
                t2 = 0x22;
                if ((int)((((struct o22_short *)(a4))->v)) <= (int)0xFFFFFEEF) {
                    (((struct o22_ushort *)(a4))->v) = 0xFFFFFEEF;
                    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                    t2 = 0x16;
                }
                t0 = t2;
            }
            t2 = t0;
        } else {
            (((struct o80_uint *)(((((struct oCC_int *)(a4))->v))))->v) = 0x6AAA;
            (((struct o22_ushort *)(a4))->v) = 0x0;
            (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) - 18);
            t0 = (((struct oCC_int *)(a4))->v);
            (((struct o80_uint *)(t0))->v) = (((((struct o80_int *)(t0))->v)) + ((((struct o22_short *)(a4))->v)));
            t0 = 0x22;
            if ((int)((((struct o22_short *)(a4))->v)) <= (int)0xFFFFFEEF) {
                (((struct o22_ushort *)(a4))->v) = 0xFFFFFEEF;
                (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                t0 = 0x16;
            }
            t2 = t0;
        }
        return t2;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct o15_uchar *)(a4))->v) = 0x0;
    (((struct o16_uchar *)(a4))->v) = 0x0;
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    if (((*(signed char *)0xC541F43) != 0) && (t1 = *(signed char *)((a4 + 0x15)), (int)t1 < (int)0x10)) {
        (((struct o15_uchar *)(a4))->v) = 0x10;
    }
    t0 = *(signed char *)((a4 + 0x15));
    switch (t0) {
    case 0:
        *(unsigned short *)((a4 + 0x1C)) = 0x3C;
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
        u0 = 1.0f;
        u0 = u0 + 0.25f * (float)(*(short *)((a4 + 0x1C)));
        (((struct o40_float *)(a4))->v) = u0;
        (((struct o28_float *)(a4))->v) = (((float)(*(short *)((a4 + 0x1C))) / 60.0f) * 2.8125f);
        (((struct o2C_float *)(a4))->v) = (((float)(*(short *)((a4 + 0x1C))) / 60.0f) * 4.5703125f);
        u0 = (((struct o40_float *)(a4))->v);
        (((struct o40_float *)(a4))->v) = (u0 / 128.0f);
        (((struct o44_float *)(a4))->v) = (u0 / 128.0f);
        if ((int)(*(short *)((a4 + 0x1C))) > 0) {
        } else {
            *(unsigned short *)((a4 + 0x1C)) = 0x1E;
            *(unsigned short *)((a4 + 0x1E)) = 0x0;
            (((struct o20_ushort *)(a4))->v) = 0x78;
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            (((struct o16_uchar *)(a4))->v) = 0x1;
            (((struct o22_ushort *)(a4))->v) = 0xAAA;
        }
        break;
    case 1:
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
        u0 = 1.0f;
        u0 = u0 + 0.25f * (float)(*(short *)((a4 + 0x1C)));
        (((struct o40_float *)(a4))->v) = u0;
        (((struct o28_float *)(a4))->v) = (((float)(*(short *)((a4 + 0x1C))) / 60.0f) * 2.8125f);
        (((struct o2C_float *)(a4))->v) = (((float)(*(short *)((a4 + 0x1C))) / 60.0f) * 4.5703125f);
        u0 = (((struct o40_float *)(a4))->v);
        (((struct o40_float *)(a4))->v) = (u0 / 128.0f);
        (((struct o44_float *)(a4))->v) = (u0 / 128.0f);
        if ((int)(*(short *)((a4 + 0x1C))) > 0) {
        } else {
            *(unsigned short *)((a4 + 0x1C)) = 0x1E;
            *(unsigned short *)((a4 + 0x1E)) = 0x0;
            (((struct o20_ushort *)(a4))->v) = 0x78;
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            (((struct o16_uchar *)(a4))->v) = 0x1;
            (((struct o22_ushort *)(a4))->v) = 0xAAA;
        }
        break;
    case 2:
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
        *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
        (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) - 1);
        t0 = (((struct o20_short *)(a4))->v);
        u0 = math_sin_angle16(((*(short *)((a4 + 0x1E))) << 13));
        (((struct o40_float *)(a4))->v) = (((((float)t0 / 960.0f) * u0)) + 1.0f);
        (((struct o44_float *)(a4))->v) = (1.0f - ((((float)t0 / 960.0f) * u0)));
        (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) * 0.0078125f);
        (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) * 0.0078125f);
        (((struct o6C_float *)(((((struct oC8_int *)(a4))->v))))->v) = (((float)(*(short *)((a4 + 0x1C))) / 30.0f) * 3000.0f);
        if ((int)(*(short *)((a4 + 0x1C))) > 0) {
        } else {
            *(unsigned short *)((a4 + 0x1C)) = 0x1E;
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        }
        break;
    case 3:
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
        u0 = math_sin_angle16((int)(((float)(*(short *)((a4 + 0x1C))) / 30.0f) * 32768.0f));
        (((struct o40_float *)(a4))->v) = (1.0f - ((u0 * 0.5f)));
        (((struct o44_float *)(a4))->v) = (((u0 * 0.5f)) + 1.0f);
        (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) * 0.0078125f);
        (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) * 0.0078125f);
        if ((int)(*(short *)((a4 + 0x1C))) > 0) {
        } else {
            *(unsigned short *)((a4 + 0x1C)) = 0x3C;
            *(unsigned short *)((a4 + 0x1E)) = 0x0;
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            (((struct o16_uchar *)(a4))->v) = 0x1;
            (((struct o22_ushort *)(a4))->v) = 0xE38;
        }
        break;
    case 4:
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
        *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
        t1 = *(short *)((a4 + 0x1C));
        u0 = math_sin_angle16(((*(short *)((a4 + 0x1E))) << 13));
        u1 = (((float)t1 * 0.100000001f) / 60.0f);
        (((struct o40_float *)(a4))->v) = (((u1 * u0)) + 1.0f);
        (((struct o44_float *)(a4))->v) = (1.0f - ((u1 * u0)));
        (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) * 0.0078125f);
        (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) * 0.0078125f);
        if ((int)(*(short *)((a4 + 0x1C))) <= (int)0x1E) {
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        }
        break;
    case 5:
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
        *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
        t1 = *(short *)((a4 + 0x1C));
        u0 = math_sin_angle16(((*(short *)((a4 + 0x1E))) << 13));
        u1 = (((float)t1 * 0.100000001f) / 60.0f);
        u2 = (u1 * u0);
        (((struct o40_float *)(a4))->v) = (1.0f - ((u1 * u0)));
        (((struct o44_float *)(a4))->v) = (u2 + 1.0f);
        (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) * 0.0078125f);
        (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) * 0.0078125f);
        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 0.0187500007f);
        if ((int)(*(short *)((a4 + 0x1C))) > 0) {
        } else {
            t1 = ((int (*)(int, float))(FUN_0c0f9cc4))(a4, (u2 + 1.0f));
            t1 = FUN_0c0fa012(a4);
            FUN_0c0f9e28(t1);
            *(unsigned char *)0xC541F44 = 0x1;
            FUN_0c0fa55a();
            (((struct o15_uchar *)(a4))->v) = 0x63;
        }
        break;
    case 16:
        (((struct o28_float *)(a4))->v) = 0.0f;
        (((struct o2C_float *)(a4))->v) = 0.5625f;
        (((struct o40_float *)(a4))->v) = 0.0078125f;
        (((struct o44_float *)(a4))->v) = 0.0078125f;
        (((struct o6C_float *)(((((struct oC8_int *)(a4))->v))))->v) = 0.0f;
        (((struct o16_uchar *)(a4))->v) = 0x1;
        (((struct o22_ushort *)(a4))->v) = 0x0;
        t0 = ((int (*)(int, int, int, int, float))(FUN_0c0f9cc4))(a4, a5, a6, a7, 0.0f);
        t0 = FUN_0c0fa012(a4);
        FUN_0c0f9e28(t0);
        *(unsigned char *)0xC541F44 = 0x1;
        FUN_0c0fa55a();
        (((struct o15_uchar *)(a4))->v) = 0x63;
        break;
    }
    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            t1 = t0;
            if (t0 != 2) {
            } else {
                (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) + 0x12);
                t0 = (((struct oCC_int *)(a4))->v);
                (((struct o80_uint *)(t0))->v) = (((((struct o80_int *)(t0))->v)) + ((((struct o22_short *)(a4))->v)));
                t0 = 0x22;
                if ((int)((((struct o22_short *)(a4))->v)) >= (int)0x111) {
                    (((struct o22_ushort *)(a4))->v) = 0x111;
                    (((struct o16_uchar *)(a4))->v) = 0x1;
                    t0 = 0x16;
                }
                t1 = t0;
            }
            t0 = t1;
        } else {
            (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) - 18);
            t1 = (((struct oCC_int *)(a4))->v);
            (((struct o80_uint *)(t1))->v) = (((((struct o80_int *)(t1))->v)) + ((((struct o22_short *)(a4))->v)));
            t1 = 0x22;
            if ((int)((((struct o22_short *)(a4))->v)) <= (int)0xFFFFFEEF) {
                (((struct o22_ushort *)(a4))->v) = 0xFFFFFEEF;
                (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                t1 = 0x16;
            }
            t0 = t1;
        }
        t1 = t0;
    } else {
        (((struct o80_uint *)(((((struct oCC_int *)(a4))->v))))->v) = 0x6AAA;
        (((struct o22_ushort *)(a4))->v) = 0x0;
        (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) - 18);
        t0 = (((struct oCC_int *)(a4))->v);
        (((struct o80_uint *)(t0))->v) = (((((struct o80_int *)(t0))->v)) + ((((struct o22_short *)(a4))->v)));
        t0 = 0x22;
        if ((int)((((struct o22_short *)(a4))->v)) <= (int)0xFFFFFEEF) {
            (((struct o22_ushort *)(a4))->v) = 0xFFFFFEEF;
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
            t0 = 0x16;
        }
        t1 = t0;
    }
    return t1;
}
