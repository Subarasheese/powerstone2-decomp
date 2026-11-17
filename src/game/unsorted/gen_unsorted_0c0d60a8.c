/* game/unsorted: functions 0C0D60A8-0C0D6D7E, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o620_uchar { char p[0x620]; unsigned char v; };
struct o720_float { char p[0x720]; float v; };
struct o724_float { char p[0x724]; float v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oB4_int { char p[0xB4]; int v; };
struct oC0_uint { char p[0xC0]; unsigned int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
int mdl_vtx_iter_begin(int, int);
int mdl_vtx_iter_next(void);
int FUN_0c0379b6(int, int);
int FUN_0c03ea04(int, int);
int FUN_0c042fe0(void);
int FUN_0c0522be(int);
int FUN_0c052c00(int, int, int);
int FUN_0c056e44(int, int, int);
int FUN_0c059c16(int, int);
int FUN_0c059c7a(int, int);
int thunk_FUN_0c05abb2(int, int);
int FUN_0c059d30(void);
int FUN_0c05af9a(int, int, int);
int FUN_0c05b048(int, int);
int FUN_0c05b052(int, int);
int FUN_0c0cfecc(int, int, int);
int FUN_0c0d02a6(void);
int FUN_0c0d0378(int, int);
int FUN_0c0d039e(int, int);
int FUN_0c0d04b4(int);
int FUN_0c0d6106(void);
int FUN_0c0d8858(int);
int FUN_0c0dc244(void);
int FUN_0c15d386(int, int, int, int, int);
int FUN_0c179ac0(void);
int FUN_0c187798(int, int, int);
int FUN_0c0d60a8(int a4);
int FUN_0c0d60bc(int a4);
int FUN_0c0d60de(int a4);
int FUN_0c0d60f8(int a4);
int FUN_0c0d613e(int a4, int a5, int a6);
int FUN_0c0d6176(void);
int FUN_0c0d6230(int a4);
int thunk_FUN_0c0d6176(void);
int FUN_0c0d62a6(int a4);
int FUN_0c0d62cc(void);
int FUN_0c0d62d0(void);
int FUN_0c0d634c(void);
int FUN_0c0d6422(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9);
void FUN_0c0d6d7a(void);

int FUN_0c0d60a8(int a4)
{
    return ((((unsigned char)(*(signed char *)(((unsigned char)(*(signed char *)((a4 + 0xC286EC8))) + 0xC472A80))) == 0)) ? 1 : 0);
}

int FUN_0c0d60bc(int a4)
{
    register int t0;

    t0 = *(signed char *)(((0xC286EC8 + a4) + 0x0));
    if ((unsigned char)(*(signed char *)((0xC472A80 + (unsigned char)t0))) != 0) {
        return 0x0;
    }
    *(unsigned char *)((0xC472A80 + (unsigned char)t0)) = 0x1;
    return 0x1;
}

int FUN_0c0d60de(int a4)
{
    if ((unsigned char)(*(signed char *)(((unsigned char)(*(signed char *)((a4 + 0xC286EC8))) + 0xC472A80))) != 0) {
        return 0x1;
    }
    return 0x0;
}

int FUN_0c0d60f8(int a4)
{
    *(unsigned char *)(((unsigned char)(*(signed char *)((a4 + 0xC286EC8))) + 0xC472A80)) = 0x0;
    return 0xC472A80;
}

int FUN_0c0d613e(int a4, int a5, int a6)
{
    *(volatile signed char *)0xC54223C;
    return (FUN_0c187798(a4, (((a5 << 1) + a5) << 2), a6));
}

int FUN_0c0d6176(void)
{
    int stk[4];
    register int t0;
    register int t2;
    register int t3;
    register int t4;
    register int t6;
    register int t7;
    register int t10;
    register int t11;
    register int t13;

    t0 = 0x0;
    for (;;) {
        *(unsigned int *)((((int)stk + 0) + (t0 << 2))) = t0;
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x4) {
            break;
        }
    }
    t2 = 0xA;
    for (;;) {
        t3 = FUN_0c179ac0();
        t4 = ((~(((~t3) + 0x1) & 0x3)) + 0x1);
        if ((int)t3 >= 0) {
            t4 = (t3 & 0x3);
        }
        t6 = FUN_0c179ac0();
        t7 = ((~(((~t6) + 0x1) & 0x3)) + 0x1);
        if ((int)t6 >= 0) {
            t7 = (t6 & 0x3);
        }
        t10 = *(int *)((((t4 << 2) + ((int)stk + 0)) + 0x0));
        t2 = (t2 - 0x1);
        *(unsigned int *)((((t4 << 2) + ((int)stk + 0)) + 0x0)) = (*(int *)((((t7 << 2) + ((int)stk + 0)) + 0x0)));
        *(unsigned int *)((((t7 << 2) + ((int)stk + 0)) + 0x0)) = t10;
        if (t2 == 0) {
            break;
        }
    }
    t11 = 0x0;
    for (;;) {
        t13 = FUN_0c0d613e((*(int *)((((int)stk + 0) + (t11 << 2)))), t11, t7);
        t11 = (t11 + 0x1);
        if ((int)t11 >= (int)0x4) {
            break;
        }
    }
    return t13;
}

int FUN_0c0d6230(int a4)
{
    int stk[2];
    register int t9;
    register int t10;

    *(unsigned char *)0xC54223C = a4;
    (((struct o0_float *)0xC541098)->v) = (*(float *)(((a4 << 2) + 0xC1C8254)));
    (((struct o4_float *)0xC541098)->v) = (*(float *)(((a4 << 2) + 0xC1C8260)));
    *(unsigned short *)0xC540996 = 0x0;
    FUN_0c0d6106();
    if ((*(signed char *)0xC54098D) != 11) {
        FUN_0c059c16((*(signed char *)0xC542237), (*(signed char *)0xC54223C));
    }
    t9 = *(signed char *)0xC542237;
    t10 = *(signed char *)0xC54223C;
    FUN_0c0d04b4(((((((t9 << 2) << 1) + t9) << 2) + 0xC286D34) + (((t10 << 1) + t10) << 2)));
    return FUN_0c03ea04(0x2, 0x0);
}

int thunk_FUN_0c0d6176(void)
{
    return FUN_0c0d6176();
}

int FUN_0c0d62a6(int a4)
{
    int t0;

    t0 = *(signed char *)0xC54223C;
    if ((t0 != 0) && (t0 == 1)) {
        return FUN_0c0522be((*(int *)0xC241B70));
    }
    return FUN_0c052c00(0x2000, 0x1555, a4);
}

int FUN_0c0d62cc(void)
{
    return FUN_0c0d62a6(0xA);
}

int FUN_0c0d62d0(void)
{
    register int t0;
    register int t4;

    t0 = *(signed char *)0xC54223C;
    t4 = FUN_0c0cfecc((*(int *)(((((t0 << 2) << 1) + 0xC1C94BC) + 0x0))), 0xC540996, (*(int *)(((((t0 << 2) << 1) + 0xC1C94BC) + 0x4))));
    if ((int)t4 < 0) {
        return 0xFFFFFFFF;
    }
    return 0x0;
}

int FUN_0c0d634c(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = *(int *)0xC4B410C;
    t1 = (((struct oB4_int *)((*(int *)((((t0 + 0x10) + 0x420) + 0x1C)))))->v);
    mdl_vtx_iter_begin(t1, t1);
    t1 = 0x0;
    for (;;) {
        t3 = mdl_vtx_iter_next();
        if (t3 != 0) {
            break;
        }
        t2 = t1;
        t2 = (t2 << 2);
        t2 = (t2 << 1);
        t2 = (t2 + 0xC286F3C);
        FUN_0c0379b6(t2, (t2 + 0x4));
        t1 = (t1 + 0x1);
    }
    t1 = *(int *)(((*(int *)((((t0 + 0x10) + 0x440) + 0x1C))) + 0x0));
    mdl_vtx_iter_begin(t1, t1);
    t1 = t2;
    t2 = 0x0;
    for (;;) {
        t3 = mdl_vtx_iter_next();
        if (t3 != 0) {
            break;
        }
        t1 = t2;
        t1 = (t1 << 2);
        t1 = (t1 << 1);
        t1 = (t1 + 0xC286F5C);
        FUN_0c0379b6(t1, (t1 + 0x4));
        t2 = (t2 + 0x1);
    }
    t1 = *(int *)(((*(int *)((((t0 + 0x10) + 0x1280) + 0x1C))) + 0x0));
    mdl_vtx_iter_begin(t1, t1);
    t0 = t2;
    t1 = 0x0;
    for (;;) {
        t2 = mdl_vtx_iter_next();
        if (t2 != 0) {
            break;
        }
        t0 = t1;
        t0 = (t0 << 2);
        t0 = (t0 << 1);
        t0 = (t0 + 0xC286F7C);
        FUN_0c0379b6(t0, (t0 + 0x4));
        t1 = (t1 + 0x1);
    }
    return t2;
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

void FUN_0c0d6d7a(void)
{
    
}
