/* Straight-line functions with calls and guards (batch gen_nr): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o18_uchar { char p[0x18]; unsigned char v; };
struct o1B_uchar { char p[0x1B]; unsigned char v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o377C_int { char p[0x377C]; int v; };
struct o40_float { char p[0x40]; float v; };
struct o41C_int { char p[0x41C]; int v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB0_float { char p[0xB0]; float v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c012c34(int);
int FUN_0c01c62a(int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c037498(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c118810(int, int);
int FUN_0c187798(void);
int FUN_0c1116a8(int a4, int a5, int a6);
int FUN_0c12380c(int a4, int a5);
int FUN_0c12695c(int a4);
int FUN_0c13e824(int a4, int a5);
int FUN_0c14a23c(int a4, int a5, int a6);
int FUN_0c14d75a(int a4, int a5);
int FUN_0c011c08(int a4);

int FUN_0c1116a8(int a4, int a5, int a6)
{
    register int t0;
    register float u0;

    t0 = ((int (*)(int, int, int))(FUN_0c187798))(a4, a5, a6);
    u0 = (((struct o30_float *)(a4))->v);
    (((struct o40_float *)(a4))->v) = (1.0f / (640.0f / (u0 + 5.0f)));
    (((struct o44_float *)(a4))->v) = (1.0f / (640.0f / (u0 + 5.0f)));
    (((struct o48_float *)(a4))->v) = (1.0f / (640.0f / (u0 + 5.0f)));
    t0 = *(int *)0xC4739A4;
    (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) * ((float)(*(int *)((t0 + 0x38))) / (float)(*(int *)((t0 + 0x3C)))));
    t0 = *(int *)0xC4739A4;
    (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) * ((float)(*(int *)((t0 + 0x38))) / (float)(*(int *)((t0 + 0x3C)))));
    t0 = *(int *)0xC4739A4;
    (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) * ((float)(*(int *)((t0 + 0x38))) / (float)(*(int *)((t0 + 0x3C)))));
    FUN_0c118810(a4, (*(short *)((a4 + 0x1C))));
    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) / (640.0f / (u0 + 5.0f)));
    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) / (640.0f / (u0 + 5.0f)));
    (((struct o30_float *)(a4))->v) = ((-((((struct o30_float *)(a4))->v))) + -5.0f);
    *(volatile short *)((a4 + 0x1C));
    return (((int (*)(void))(FUN_0c187798))());
}

int FUN_0c12380c(int a4, int a5)
{
    int stk[1];
    register int t0;
    register int t11;
    register int t6;

    *(unsigned char *)(((int)stk + 0)) = a5;
    t0 = FUN_0c03f444(0x1, 0x0, 0x1);
    t11 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned int *)((t0 + 0x4)) = 0xC12360C;
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0x20F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        FUN_0c187798();
        (((struct o2C_float *)(t0))->v) = (((((struct o2C_float *)(t0))->v)) + 250.0f);
        FUN_0c187798();
        (((struct o48_float *)(t0))->v) = 1.0f;
        (((struct o44_float *)(t0))->v) = 1.0f;
        (((struct o40_float *)(t0))->v) = 1.0f;
        *(unsigned char *)((t0 + 0x2)) = (*(signed char *)(((int)stk + 0)));
        t6 = (((struct oC4_int *)(t0))->v);
        FUN_0c03744a(t6, (*(signed char *)((t0 + 0x2))), 0x7, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
        *(unsigned char *)((t6 + 0x0)) = 0x1;
        *(unsigned short *)((t6 + 0x6)) = 0x21F;
        (((struct o18_float *)(t6))->v) = 1.0f;
        (((struct o20_float *)(t6))->v) = 1.0f;
        (((struct o1C_float *)(t6))->v) = 1.0f;
        (((struct o8C_float *)(t6))->v) = 0.0f;
        (((struct o88_float *)(t6))->v) = 0.0f;
        (((struct o84_float *)(t6))->v) = 0.0f;
        *(unsigned short *)((t0 + 0x1C)) = 0x0;
        *(unsigned short *)((t0 + 0x1E)) = 0x0;
        *(unsigned int *)((t0 + 0x10)) = a4;
        t11 = 0x0;
    }
    return t11;
}

int FUN_0c12695c(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t0 = FUN_0c03f444(0x5, 0x1, 0x3);
    t1 = t0;
    if (t0 != 0) {
        t2 = 0x0;
        for (;;) {
            if ((int)t2 >= (int)((((struct oC0_int *)(t0))->v))) {
                break;
            }
            t3 = t2;
            t3 = (t3 << 2);
            t4 = t2;
            t3 = (t3 + (0xC4 + t0));
            t4 = (t4 << 2);
            t3 = (*(int *)((t3 + 0x0)));
            t4 = (t4 << 1);
            t4 = (t4 + 0xC201B20);
            FUN_0c03744a(t3, (*(int *)((t4 + 0x0))), (*(int *)((t4 + 0x4))), (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
            *(unsigned char *)((t3 + 0x0)) = (*(short *)(((t2 << 1) + 0xC201B86)));
            FUN_0c187798();
            t2 = (t2 + 0x1);
        }
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned int *)((t0 + 0x4)) = 0xC126A28;
        *(unsigned int *)((t0 + 0x10)) = a4;
        FUN_0c187798();
        FUN_0c187798();
        t2 = *(short *)0xC201B80;
        *(unsigned short *)((t0 + 0x1C)) = t2;
        t1 = t2;
    }
    return t1;
}

int FUN_0c13e824(int a4, int a5)
{
    int stk[1];
    register int t0;
    register int t16;
    register int t4;
    register int t5;
    register int t13;

    *(unsigned char *)(((int)stk + 0)) = a5;
    t0 = FUN_0c03f444(0x5, 0x0, 0x2);
    t16 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned int *)((t0 + 0x4)) = 0xC13E6C8;
        *(unsigned char *)((t0 + 0x2)) = (*(signed char *)(((int)stk + 0)));
        FUN_0c187798();
        (((struct o48_float *)(t0))->v) = 1.0f;
        (((struct o44_float *)(t0))->v) = 1.0f;
        (((struct o40_float *)(t0))->v) = 1.0f;
        (((struct oA8_uchar *)(t0))->v) = 0x0;
        (((struct oAC_ushort *)(t0))->v) = 0x1F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        t4 = 0x0;
        t5 = 0x0;
        for (;;) {
            FUN_0c037498((*(int *)((((0xC4 + t0) + t5) + 0x0))), 0x0, 0x6, (*(int *)((((*(signed char *)((t0 + 0x1))) << 2) + 0xC4B40FC))));
            *(unsigned char *)(((*(int *)((((0xC4 + t0) + t5) + 0x0))) + 0x0)) = 0x1;
            *(unsigned short *)(((*(int *)((((0xC4 + t0) + t5) + 0x0))) + 0x6)) = 0xF;
            t13 = *(int *)((((0xC4 + t0) + t5) + 0x0));
            t5 = (t5 + 0x4);
            (((struct o7C_uint *)(t13))->v) = ((*(int *)((a4 + 0x38))) + t4);
            t4 = (t4 + 0x8000);
            if ((unsigned int)t5 >= (unsigned int)0x8) {
                break;
            }
        }
        *(unsigned int *)((t0 + 0x10)) = a4;
        t16 = 0x7C;
    }
    return t16;
}

int FUN_0c14a23c(int a4, int a5, int a6)
{

    register int R1;
    register int R2;
    register int R3;
    register int R7;
    register int R10;
    register int R12;
    register float F2;
    register float F3;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register float w0_0;
    register float w0_1;
    v0_0 = a4;
    v0_3 = *(signed char *)((v0_0 + 0x14));
    v0_1 = (v0_3);
    v0_2 = (0x1);
    if ((v0_3 == 0)) goto L_C14A24E;
    if ((v0_1 == 1)) goto L_C14A260;
    L_C14A304:;
    return v0_1;
    L_C14A260:;
    if (((*(signed char *)(((*(int *)((v0_0 + 0x10))) + 0x1B))) == 0)) goto L_C14A2FE;
    v0_3 = *(signed char *)((v0_0 + 0x15));
    v0_1 = (v0_3);
    if ((v0_3 == 0)) goto L_C14A282;
    if ((v0_1 == 1)) goto L_C14A290;
    if ((v0_1 == 2)) goto L_C14A2AA;
    if ((v0_1 == 3)) goto L_C14A2E8;
    goto L_C14A304;
    L_C14A2E8:;
    (((struct oB0_float *)(v0_0))->v) = (((((struct oB0_float *)(v0_0))->v)) - 0.0500000007f);
    w0_0 = (((struct oB0_float *)(v0_0))->v);
    v0_1 = (0xB0);
    w0_1 = (w0_0);
    FPUL_ = (0x3D4CCCCD);
    if ((w0_0 > 0.0f)) goto L_C14A304;
    L_C14A2FE:;
    return FUN_0c03f346(v0_0, v0_2, a6, R7);
    L_C14A2AA:;
    v0_1 = (0x1B);
    if (((int)(*(signed char *)(((*(int *)((v0_0 + 0x10))) + 0x1B))) <= (int)v0_2)) goto L_C14A304;
    L_C14A2B4:;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    v0_1 = (0x15);
    goto L_C14A304;
    L_C14A290:;
    (((struct oB0_float *)(v0_0))->v) = (((((struct oB0_float *)(v0_0))->v)) + 0.0166666675f);
    v0_1 = (0xB0);
    w0_0 = (1.0f);
    FPUL_ = (0x3C888889);
    if ((1.0f > ((((struct oB0_float *)(v0_0))->v)))) goto L_C14A304;
    *(float *)((v0_0 + v0_1)) = w0_0;
    goto L_C14A2B4;
    L_C14A282:;
    (((struct oB0_float *)(v0_0))->v) = 0.0f;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    goto L_C14A290;
    L_C14A24E:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    (((struct o15_uchar *)(v0_0))->v) = 0x0;
    (((struct oA8_uchar *)(v0_0))->v) = v0_2;
    goto L_C14A260;
}

int FUN_0c14d75a(int a4, int a5)
{
    int t0;
    register int t1;
    register int t2;

    if ((signed char)a5 != 0) {
        t1 = FUN_0c03f444(0x1, 0x0, 0x0);
        t2 = t1;
        if (t1 != 0) {
            *(unsigned char *)((t1 + 0x1)) = (*(signed char *)((a4 + 0x1)));
            *(unsigned char *)((t1 + 0x2)) = a5;
            (((struct oA8_uchar *)(t1))->v) = 0x0;
            *(unsigned int *)((t1 + 0x4)) = 0xC14D478;
            *(unsigned int *)((t1 + 0x10)) = a4;
            *(unsigned short *)((t1 + 0x1C)) = 0x0;
            *(unsigned short *)((t1 + 0x1E)) = 0x19;
            if (((*(signed char *)((((((struct o377C_int *)(a4))->v)) + 0x0))) == 0) && (t0 = *(signed char *)0xC54235E, t0 == 0)) {
                t0 = *(signed char *)((((((struct o377C_int *)(a4))->v)) + 0x1));
                (((struct o18_uchar *)(t1))->v) = t0;
                t2 = t0;
            } else {
                (((struct o18_uchar *)(t1))->v) = 0xFFFFFFFF;
                t2 = 0x18;
            }
        }
        t0 = t2;
    } else {
        t1 = FUN_0c03f444(0x1, 0x0, 0x0);
        t2 = t1;
        if (t1 != 0) {
            *(unsigned char *)((t1 + 0x1)) = (*(signed char *)((a4 + 0x1)));
            *(unsigned char *)((t1 + 0x2)) = a5;
            (((struct oA8_uchar *)(t1))->v) = 0x0;
            *(unsigned int *)((t1 + 0x4)) = 0xC14D6A8;
            *(unsigned int *)((t1 + 0x10)) = a4;
            *(unsigned short *)((t1 + 0x1C)) = 0x0;
            *(unsigned short *)((t1 + 0x1E)) = 0x0;
            t2 = 0x0;
        }
        t0 = t2;
    }
    return t0;
}

int FUN_0c011c08(int a4)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;

    t1 = (((struct o41C_int *)(a4))->v);
    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(unsigned char *)(((0x41C + a4) + 0x6)) = (*(signed char *)((t1 + 0x8)));
        (((struct o28_float *)(a4))->v) = 140.0f;
        (((struct o2C_float *)(a4))->v) = -190.0f;
        *(unsigned char *)(((0x41C + a4) + 0x8)) = 0x0;
        if ((*(signed char *)(((0x41C + a4) + 0x6))) != 4) {
            (((struct oA8_uchar *)(a4))->v) = 0x0;
        }
    }
    if (((*(signed char *)((t1 + 0xA))) == (unsigned char)(*(signed char *)(((0x41C + a4) + 0x7)))) && (t0 = *(signed char *)((t1 + 0x8)), t0 == 4)) {
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        t0 = *(signed char *)((t1 + 0xB));
        if (t0 == 1) {
            if ((*(signed char *)((t1 + 0xB))) != (unsigned char)(*(signed char *)(((0x41C + a4) + 0x8)))) {
                *(unsigned char *)(((0x41C + a4) + 0x8)) = (*(signed char *)((t1 + 0xB)));
                (((struct o1B_uchar *)(a4))->v) = 0x0;
                (((struct o22_ushort *)(a4))->v) = 0x0;
            }
            t2 = FUN_0c01c62a(a4);
            t3 = (signed char)t2;
            if ((signed char)t2 != 0) {
                *(unsigned char *)((t1 + 0xB)) = 0x2;
                *(unsigned char *)(((0x41C + a4) + 0x8)) = 0x0;
                (((struct o1B_uchar *)(a4))->v) = 0x0;
                (((struct o40_float *)(a4))->v) = 1.0f;
                (((struct o44_float *)(a4))->v) = 1.0f;
                t3 = 0x44;
            }
            return t3;
        }
        if (t0 == 0) {
            return FUN_0c012c34(a4);
        }
        return t0;
    }
    (((struct oA8_uchar *)(a4))->v) = 0x0;
    return 0xA8;
}
