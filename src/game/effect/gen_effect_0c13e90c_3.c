/* game/effect: functions 0C13E90C-0C140EE0, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o100_int { char p[0x100]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_float { char p[0xC8]; float v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_float { char p[0xCC]; float v; };
struct oCC_int { char p[0xCC]; int v; };
struct oD0_float { char p[0xD0]; float v; };
struct oD0_int { char p[0xD0]; int v; };
struct oD4_int { char p[0xD4]; int v; };
struct oD8_int { char p[0xD8]; int v; };
struct oDC_int { char p[0xDC]; int v; };
struct oE0_int { char p[0xE0]; int v; };
struct oE4_int { char p[0xE4]; int v; };
struct oE8_int { char p[0xE8]; int v; };
struct oEC_int { char p[0xEC]; int v; };
struct oF0_int { char p[0xF0]; int v; };
struct oF4_int { char p[0xF4]; int v; };
struct oF8_int { char p[0xF8]; int v; };
struct oFC_int { char p[0xFC]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c037498(int, int, int, int);
extern int FUN_0c03f346();
int FUN_0c03f444(int, int, int);
int thunk_FUN_0c058310(int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c07e2f4(int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c17c4d0(int);
int FUN_0c187798(void);
int FUN_0c13eece(int a4, int a5);
int FUN_0c13ef5a(int a4, int a5, int a6, int a7);
int FUN_0c13f398(int a4);
int FUN_0c13f5dc(int a4, int a5);
int FUN_0c13f734(int a4, int a5);
int FUN_0c13f908(int a4, int a5);
int FUN_0c13fa88(int a4, int a5);
int FUN_0c13fc40(int a4, int a5);
int FUN_0c13ff3c(int a4, int a5);
int FUN_0c13ffc4(int a4, int a5, int a6);
int FUN_0c140130(int a4);
int FUN_0c1402c4(int a4);
int FUN_0c140b18(int a4, int a5);

int FUN_0c13eece(int a4, int a5)
{
    register int t0;
    register int t11;

    t0 = FUN_0c03f444(0x5, 0x0, 0x1);
    t11 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        FUN_0c187798();
        *(unsigned int *)((t0 + 0x38)) = a5;
        *(unsigned char *)((t0 + 0x2)) = (*(signed char *)((a4 + 0x2)));
        *(unsigned int *)((t0 + 0x4)) = 0xC13EDEE;
        *(unsigned int *)((t0 + 0x10)) = a4;
        FUN_0c187798();
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0x31;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        FUN_0c037498(((((struct oC4_int *)(t0))->v)), 0x0, 0x2, (*(int *)((((*(signed char *)((t0 + 0x1))) << 2) + 0xC4B40FC))));
        *(unsigned char *)((((((struct oC4_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(t0))->v)) + 0x6)) = 0xF;
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        t11 = 0xA8;
    }
    return t11;
}

int FUN_0c13ef5a(int a4, int a5, int a6, int a7)
{
    int stk[3];

    register int R1;
    register int R2;
    register int R3;
    register int R10;
    register int R11;
    register int R12;
    register float F2;
    register float F4;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register float w0_0;
    v0_0 = a4;
    v0_2 = a5;
    v0_3 = a6;
    v0_4 = a7;
    v0_6 = *(signed char *)((v0_0 + 0x14));
    v0_1 = (v0_6);
    v0_5 = (0x1);
    v0_0 = (v0_0);
    if ((v0_6 == 0)) goto L_C13EFAC;
    if ((v0_1 == 1)) goto L_C13EFEA;
    v0_1 = ((((int (*)(int, int, int, int))(FUN_0c03f346))(v0_0, v0_2, v0_3, v0_4)));
    L_C13F0E4:;
    return v0_1;
    L_C13EFEA:;
    if (((int)(*(signed char *)(((*(int *)((v0_0 + 0x10))) + 0x14))) >= (int)0x2)) goto L_C13F002;
    v0_1 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_1 - 1);
    if (!(((int)(short)(v0_1 - 1) > 0))) goto L_C13F002;
    if (((int)(*(signed char *)(((*(int *)((v0_0 + 0x10))) + 0x15))) <= (int)v0_5)) goto L_C13F036;
    (((struct o40_float *)(v0_0))->v) = (((((struct o40_float *)((*(int *)((v0_0 + 0x10)))))->v)) + 1.0f);
    (((struct o44_float *)(v0_0))->v) = (((((struct o44_float *)((*(int *)((v0_0 + 0x10)))))->v)) + 1.0f);
    v0_1 = (0x48);
    w0_0 = ((((((struct o48_float *)((*(int *)((v0_0 + 0x10)))))->v)) + 1.0f));
    goto L_C13F042;
    L_C13F002:;
    v0_1 = ((((int (*)(int, int, int, int))(FUN_0c03f346))(v0_0, v0_2, v0_3, v0_4)));
    goto L_C13F0E4;
    L_C13F042:;
    *(float *)((v0_0 + v0_1)) = w0_0;
    *(float *)(((int)stk + 0)) = (((((struct oC8_float *)((((short)(*(signed char *)((v0_0 + 0x1))) * (short)0x2F8) + 0xC5410FC)))->v)) - ((((struct o28_float *)((*(int *)((v0_0 + 0x10)))))->v)));
    *(float *)(((int)stk + 4)) = (((((struct oCC_float *)((((short)(*(signed char *)((v0_0 + 0x1))) * (short)0x2F8) + 0xC5410FC)))->v)) - ((((struct o2C_float *)((*(int *)((v0_0 + 0x10)))))->v)));
    *(float *)(((int)stk + 8)) = (((((struct oD0_float *)((0xC5410FC + ((short)(*(signed char *)((v0_0 + 0x1))) * (short)0x2F8))))->v)) - ((((struct o30_float *)((*(int *)((v0_0 + 0x10)))))->v)));
    FUN_0c17c4d0(((int)stk + 0));
    w0_0 = ((((struct o28_float *)((*(int *)((v0_0 + 0x10)))))->v));
    w0_0 = w0_0 + 100.0f * (*(float *)(((int)stk + 0)));
    (((struct o28_float *)(v0_0))->v) = w0_0;
    w0_0 = ((((struct o2C_float *)((*(int *)((v0_0 + 0x10)))))->v));
    w0_0 = w0_0 + 100.0f * (*(float *)(((int)stk + 4)));
    (((struct o2C_float *)(v0_0))->v) = w0_0;
    w0_0 = ((((struct o30_float *)((*(int *)((v0_0 + 0x10)))))->v));
    w0_0 = w0_0 + 100.0f * (*(float *)(((int)stk + 8)));
    (((struct o30_float *)(v0_0))->v) = w0_0;
    v0_0 = (((struct oC4_int *)(v0_0))->v);
    (((struct o80_uint *)(v0_0))->v) = (((((struct o80_int *)(v0_0))->v)) + 0x11C7);
    v0_1 = (0x80);
    w0_0 = (100.0f);
    goto L_C13F0E4;
    L_C13F036:;
    (((struct o48_float *)(v0_0))->v) = 0.0f;
    (((struct o44_float *)(v0_0))->v) = 0.0f;
    v0_1 = (0x40);
    w0_0 = (0.0f);
    goto L_C13F042;
    L_C13EFAC:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    *(unsigned short *)((v0_0 + 0x1C)) = 0x4B0;
    (((struct oA8_uchar *)(v0_0))->v) = v0_5;
    (((struct oAC_ushort *)(v0_0))->v) = 0x31;
    (((struct oA9_uchar *)(v0_0))->v) = 0x21;
    FUN_0c037498(((((struct oC4_int *)(v0_0))->v)), 0x0, 0xC, (*(int *)((((*(signed char *)((v0_0 + 0x1))) << 2) + 0xC4B40FC))));
    *(unsigned char *)((((((struct oC4_int *)(v0_0))->v)) + 0x0)) = v0_5;
    *(unsigned short *)((((((struct oC4_int *)(v0_0))->v)) + 0x6)) = 0xF;
    goto L_C13EFEA;
}

int FUN_0c13f398(int a4)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;
    register float u2;
    register float u3;

    t0 = FUN_0c037320(0x1, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
    t1 = FUN_0c03f444(0x5, 0x0, t0);
    if (t1 != 0) {
        *(unsigned int *)((t1 + 0x4)) = 0xC13F4A0;
        *(unsigned char *)((t1 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t1 + 0x10)) = a4;
        FUN_0c03733c(t1, 0x1, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
        (((struct oA8_uchar *)(t1))->v) = 0x1;
        (((struct oAC_ushort *)(t1))->v) = 0xF;
        (((struct oA9_uchar *)(t1))->v) = 0x21;
        FUN_0c187798();
        thunk_FUN_0c058310(((*(int *)(((((*(int *)0xC2A2220) << 2) + (0xC53255C + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938))) + 0x0))) + 0x28), (t1 + 0x28));
        u0 = *(float *)0xC13F4F0;
        u1 = math_sin_angle16(((-(*(int *)((t1 + 0x34)))) + 0x14000));
        u2 = (((struct o28_float *)(t1))->v);
        u3 = (u1 * (math_cos_angle16(((-(*(int *)((t1 + 0x38)))) + 0x14000))));
        u1 = u2;
        u1 = u1 + u0 * u3;
        (((struct o28_float *)(t1))->v) = u1;
        (((struct o2C_float *)(t1))->v) = (((((struct o2C_float *)(t1))->v)) - (((math_cos_angle16(((-(*(int *)((t1 + 0x34)))) + 0x14000))) * u0)));
        u1 = math_sin_angle16(((-(*(int *)((t1 + 0x34)))) + 0x14000));
        u2 = (((struct o30_float *)(t1))->v);
        u3 = (u1 * (math_sin_angle16(((-(*(int *)((t1 + 0x38)))) + 0x14000))));
        u1 = u2;
        u1 = u1 + u0 * u3;
        (((struct o30_float *)(t1))->v) = u1;
    } else {
        t0 = t1;
    }
    return t0;
}

int FUN_0c13f5dc(int a4, int a5)
{
    int stk[1];
    register int t2;
    register int t3;
    register int t19;

    *(unsigned char *)(((int)stk + 0)) = a5;
    t2 = FUN_0c037320(0x8, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
    t3 = FUN_0c03f444(0x5, 0x0, t2);
    t19 = t3;
    if (t3 != 0) {
        *(unsigned int *)((t3 + 0x4)) = 0xC13F696;
        *(unsigned char *)((t3 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t3 + 0x10)) = a4;
        FUN_0c03733c(t3, 0x8, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
        (((struct oA8_uchar *)(t3))->v) = 0x1;
        (((struct oAC_ushort *)(t3))->v) = 0x1F;
        (((struct oA9_uchar *)(t3))->v) = 0x21;
        thunk_FUN_0c058310(((*(int *)(((((*(int *)((((unsigned char)(*(signed char *)(((int)stk + 0))) << 2) + 0xC2A2224))) << 2) + (0xC53255C + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938))) + 0x0))) + 0x28), (t3 + 0x28));
        (((struct o48_float *)(t3))->v) = 1.0f;
        (((struct o44_float *)(t3))->v) = 1.0f;
        (((struct o40_float *)(t3))->v) = 1.0f;
        FUN_0c187798();
        (((struct o2C_float *)(t3))->v) = ((((struct o2C_float *)(a4))->v));
        if ((*(signed char *)(((int)stk + 0))) != 0) {
            *(unsigned int *)((t3 + 0x38)) = ((*(int *)((t3 + 0x38))) + 0x8000);
        }
        t19 = 0x2C;
    }
    return t19;
}

int FUN_0c13f734(int a4, int a5)
{
    int stk[1];
    register int t2;
    register int t3;
    register int t15;

    *(unsigned char *)(((int)stk + 0)) = a5;
    t2 = FUN_0c037320(0x6, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
    t3 = FUN_0c03f444(0x5, 0x0, t2);
    t15 = t3;
    if (t3 != 0) {
        *(unsigned char *)((t3 + 0x1)) = 0xFFFFFFFF;
        *(unsigned char *)((t3 + 0x2)) = (*(signed char *)(((int)stk + 0)));
        *(unsigned int *)((t3 + 0x4)) = 0xC13F7E4;
        *(unsigned int *)((t3 + 0x10)) = a4;
        FUN_0c03733c(t3, 0x6, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
        (((struct oA8_uchar *)(t3))->v) = 0x1;
        (((struct oAC_ushort *)(t3))->v) = 0x20F;
        (((struct oA9_uchar *)(t3))->v) = 0x21;
        thunk_FUN_0c058310(((*(int *)(((((*(int *)((((unsigned char)(*(signed char *)(((int)stk + 0))) << 2) + 0xC2A222C))) << 2) + (0xC53255C + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938))) + 0x0))) + 0x28), (t3 + 0x28));
        (((struct o48_float *)(t3))->v) = 1.0f;
        (((struct o44_float *)(t3))->v) = 1.0f;
        (((struct o40_float *)(t3))->v) = 1.0f;
        FUN_0c187798();
        (((struct o2C_float *)(t3))->v) = ((((struct o2C_float *)(a4))->v));
        t15 = 0x2C;
    }
    return t15;
}

int FUN_0c13f908(int a4, int a5)
{
    int stk[1];
    register int t2;
    register int t3;
    register int t10;

    *(unsigned char *)(((int)stk + 0)) = a5;
    t2 = FUN_0c037320(0x4, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
    t3 = FUN_0c03f444(0x5, 0x0, t2);
    t10 = t3;
    if (t3 != 0) {
        *(unsigned char *)((t3 + 0x1)) = 0xFFFFFFFF;
        *(unsigned char *)((t3 + 0x2)) = (*(signed char *)(((int)stk + 0)));
        *(unsigned int *)((t3 + 0x4)) = 0xC13F98C;
        *(unsigned int *)((t3 + 0x10)) = a4;
        FUN_0c03733c(t3, 0x4, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
        (((struct oA8_uchar *)(t3))->v) = 0x1;
        (((struct oAC_ushort *)(t3))->v) = 0xF;
        (((struct oA9_uchar *)(t3))->v) = 0x21;
        FUN_0c187798();
        t10 = (FUN_0c187798());
    }
    return t10;
}

int FUN_0c13fa88(int a4, int a5)
{
    int stk[1];
    register int t2;
    register int t3;
    register int t10;

    *(unsigned char *)(((int)stk + 0)) = a5;
    t2 = FUN_0c037320(0xA, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
    t3 = FUN_0c03f444(0x5, 0x0, t2);
    t10 = t3;
    if (t3 != 0) {
        *(unsigned char *)((t3 + 0x1)) = 0xFFFFFFFF;
        *(unsigned char *)((t3 + 0x2)) = (*(signed char *)(((int)stk + 0)));
        *(unsigned int *)((t3 + 0x4)) = 0xC13FB0C;
        *(unsigned int *)((t3 + 0x10)) = a4;
        FUN_0c03733c(t3, 0xA, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
        (((struct oA8_uchar *)(t3))->v) = 0x1;
        (((struct oAC_ushort *)(t3))->v) = 0x21F;
        (((struct oA9_uchar *)(t3))->v) = 0x21;
        FUN_0c187798();
        t10 = (FUN_0c187798());
    }
    return t10;
}

int FUN_0c13fc40(int a4, int a5)
{
    int stk[1];
    register int t2;
    register int t3;
    register int t10;

    *(unsigned char *)(((int)stk + 0)) = a5;
    t2 = FUN_0c037320(0xB, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
    t3 = FUN_0c03f444(0x5, 0x0, t2);
    t10 = t3;
    if (t3 != 0) {
        *(unsigned char *)((t3 + 0x1)) = 0xFFFFFFFF;
        *(unsigned char *)((t3 + 0x2)) = (*(signed char *)(((int)stk + 0)));
        *(unsigned int *)((t3 + 0x4)) = 0xC13FCC4;
        *(unsigned int *)((t3 + 0x10)) = a4;
        FUN_0c03733c(t3, 0xB, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
        (((struct oA8_uchar *)(t3))->v) = 0x0;
        (((struct oAC_ushort *)(t3))->v) = 0xF;
        (((struct oA9_uchar *)(t3))->v) = 0x21;
        FUN_0c187798();
        t10 = (FUN_0c187798());
    }
    return t10;
}

int FUN_0c13ff3c(int a4, int a5)
{
    int stk[1];
    register int t3;
    register int t4;
    register int t12;

    *(unsigned char *)(((int)stk + 0)) = a5;
    t3 = FUN_0c037320(0xD, (*(int *)((((*(signed char *)(((*(int *)((a4 + 0x10))) + 0x1))) << 2) + 0xC4B40FC))));
    t4 = FUN_0c03f444(0x5, 0x0, t3);
    t12 = t4;
    if (t4 != 0) {
        *(unsigned char *)((t4 + 0x1)) = 0xFFFFFFFF;
        *(unsigned char *)((t4 + 0x2)) = (*(signed char *)(((int)stk + 0)));
        *(unsigned int *)((t4 + 0x4)) = 0xC13FFC4;
        *(unsigned int *)((t4 + 0x10)) = a4;
        FUN_0c03733c(t4, 0xD, (*(int *)((((*(signed char *)(((*(int *)((a4 + 0x10))) + 0x1))) << 2) + 0xC4B40FC))));
        (((struct oA8_uchar *)(t4))->v) = 0x1;
        (((struct oAC_ushort *)(t4))->v) = 0x21F;
        (((struct oA9_uchar *)(t4))->v) = 0x21;
        FUN_0c187798();
        t12 = (FUN_0c187798());
    }
    return t12;
}

int FUN_0c13ffc4(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;

    *(volatile int *)((a4 + 0x10));
    t2 = ((int (*)(int, int, int))(FUN_0c187798))(a4, a5, a6);
    *(volatile int *)((t0 + 0x10));
    t2 = ((int (*)(int))(FUN_0c187798))(t0);
    if ((*(signed char *)((0x3715 + (*(int *)((t1 + 0x10)))))) != 26) {
        return FUN_0c03f346(t1);
    }
    t0 = *(signed char *)((t1 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return FUN_0c03f346(t1);
            }
            (((struct o40_float *)(t1))->v) = (((((struct o40_float *)(t1))->v)) + ((((struct o4C_float *)(t1))->v)));
            (((struct o44_float *)(t1))->v) = (((((struct o44_float *)(t1))->v)) + ((((struct o4C_float *)(t1))->v)));
            (((struct o48_float *)(t1))->v) = (((((struct o48_float *)(t1))->v)) + ((((struct o4C_float *)(t1))->v)));
            (((struct o4C_float *)(t1))->v) = (((((struct o4C_float *)(t1))->v)) + ((((struct o58_float *)(t1))->v)));
            (((struct oB4_float *)(t1))->v) = (((((struct oB4_float *)(t1))->v)) - 0.0500000007f);
            (((struct oB8_float *)(t1))->v) = (((((struct oB8_float *)(t1))->v)) - 0.0500000007f);
            (((struct oBC_float *)(t1))->v) = (((((struct oBC_float *)(t1))->v)) - 0.0500000007f);
            t0 = 0x4C;
            if (!(((((struct o4C_float *)(t1))->v)) > 0.0f)) {
                (((struct o14_uchar *)(t1))->v) = ((*(signed char *)((t1 + 0x14))) + 0x1);
                t0 = 0x14;
            }
            return t0;
        }
    } else {
        (((struct o40_float *)(t1))->v) = 0.0f;
        (((struct o44_float *)(t1))->v) = 0.0f;
        (((struct o48_float *)(t1))->v) = 0.0f;
        (((struct o4C_float *)(t1))->v) = 0.0399999991f;
        (((struct o58_float *)(t1))->v) = -0.00079999998f;
        (((struct oB4_float *)(t1))->v) = 1.0f;
        (((struct oB8_float *)(t1))->v) = 1.0f;
        (((struct oBC_float *)(t1))->v) = 1.0f;
        *(unsigned short *)((t1 + 0x1C)) = 0x1E;
        (((struct o14_uchar *)(t1))->v) = ((*(signed char *)((t1 + 0x14))) + 0x1);
    }
    (((struct o40_float *)(t1))->v) = (((((struct o40_float *)(t1))->v)) + ((((struct o4C_float *)(t1))->v)));
    (((struct o44_float *)(t1))->v) = (((((struct o44_float *)(t1))->v)) + ((((struct o4C_float *)(t1))->v)));
    (((struct o48_float *)(t1))->v) = (((((struct o48_float *)(t1))->v)) + ((((struct o4C_float *)(t1))->v)));
    (((struct o4C_float *)(t1))->v) = (((((struct o4C_float *)(t1))->v)) + ((((struct o58_float *)(t1))->v)));
    t0 = *(short *)((t1 + 0x1C));
    *(unsigned short *)((t1 + 0x1C)) = (t0 - 1);
    t2 = (short)(t0 - 1);
    if ((short)(t0 - 1) != 0) {
    } else {
        (((struct o14_uchar *)(t1))->v) = ((*(signed char *)((t1 + 0x14))) + 0x1);
        t2 = 0x14;
    }
    return t2;
}

int FUN_0c140130(int a4)
{
    register int t0;
    register int t1;

    t0 = FUN_0c037320(0x3, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
    t1 = FUN_0c03f444(0x5, 0x0, t0);
    t0 = t1;
    if (t1 != 0) {
        *(unsigned int *)((t1 + 0x4)) = 0xC1401AA;
        *(unsigned char *)((t1 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t1 + 0x10)) = a4;
        FUN_0c03733c(t1, 0x3, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
        (((struct oA8_uchar *)(t1))->v) = 0x1;
        (((struct oAC_ushort *)(t1))->v) = 0xF;
        (((struct oA9_uchar *)(t1))->v) = 0x21;
        FUN_0c187798();
        t0 = (FUN_0c187798());
    }
    return t0;
}

int FUN_0c1402c4(int a4)
{
    register int t0;
    register int t67;

    t0 = FUN_0c03f444(0x5, 0x0, 0x10);
    t67 = t0;
    if (t0 == 0) {
    } else {
        *(unsigned int *)((t0 + 0x4)) = 0xC140464;
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x10)) = a4;
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        FUN_0c187798();
        FUN_0c187798();
        FUN_0c03744a(((((struct oC4_int *)(t0))->v)), 0x0, 0x10, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
        FUN_0c03744a(((((struct oC8_int *)(t0))->v)), 0x1, 0x10, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
        FUN_0c03744a(((((struct oCC_int *)(t0))->v)), 0x2, 0x10, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
        FUN_0c03744a(((((struct oD0_int *)(t0))->v)), 0x2, 0x10, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
        FUN_0c03744a(((((struct oD4_int *)(t0))->v)), 0x2, 0x10, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
        FUN_0c03744a(((((struct oD8_int *)(t0))->v)), 0x2, 0x10, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
        FUN_0c03744a(((((struct oDC_int *)(t0))->v)), 0x3, 0x10, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
        FUN_0c03744a(((((struct oE0_int *)(t0))->v)), 0x3, 0x10, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
        FUN_0c03744a(((((struct oE4_int *)(t0))->v)), 0x3, 0x10, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
        FUN_0c03744a(((((struct oE8_int *)(t0))->v)), 0x4, 0x10, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
        FUN_0c03744a(((((struct oEC_int *)(t0))->v)), 0x4, 0x10, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
        FUN_0c03744a(((((struct oF0_int *)(t0))->v)), 0x4, 0x10, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
        FUN_0c03744a(((((struct oF4_int *)(t0))->v)), 0x4, 0x10, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
        FUN_0c03744a(((((struct oF8_int *)(t0))->v)), 0x4, 0x10, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
        FUN_0c03744a(((((struct oFC_int *)(t0))->v)), 0x4, 0x10, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
        t67 = (FUN_0c03744a(((((struct o100_int *)(t0))->v)), 0x4, 0x10, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2))))));
    }
    return t67;
}

int FUN_0c140b18(int a4, int a5)
{
    int stk[5];
    register int t2;
    register int t3;
    register float t15;
    register float u18;
    register float u19;
    register float u20;
    register float t26;
    register float u29;
    register float u30;
    register float u31;
    register int t32;

    *(unsigned char *)(((int)stk + 16)) = a5;
    t2 = FUN_0c037320(0x0, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
    t3 = FUN_0c03f444(0x1, 0x0, t2);
    if (t3 == 0) {
        return t3;
    }
    *(unsigned int *)((t3 + 0x4)) = 0xC140CC0;
    *(unsigned char *)((t3 + 0x1)) = (*(signed char *)((a4 + 0x1)));
    *(unsigned int *)((t3 + 0x10)) = a4;
    FUN_0c03733c(t3, 0x0, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
    (((struct oA8_uchar *)(t3))->v) = 0x1;
    (((struct oAC_ushort *)(t3))->v) = 0xF;
    (((struct oA9_uchar *)(t3))->v) = 0x21;
    thunk_FUN_0c058310(((*(int *)(((((*(int *)((((unsigned char)(*(signed char *)(((int)stk + 16))) << 2) + 0xC2A22FC))) << 2) + (0xC53255C + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938))) + 0x0))) + 0x28), (t3 + 0x28));
    (((struct o48_float *)(t3))->v) = 1.0f;
    (((struct o44_float *)(t3))->v) = 1.0f;
    (((struct o40_float *)(t3))->v) = 1.0f;
    FUN_0c187798();
    *(int *)((int)stk + 12) = (t3 + 0x28);
    t15 = math_sin_angle16(((-(*(int *)((t3 + 0x34)))) + 0x14000));
    u18 = (((struct o28_float *)(t3))->v);
    u19 = (t15 * (math_cos_angle16(((-(*(int *)((t3 + 0x38)))) + 0x14000))));
    u20 = u18;
    u20 = u20 + 50.0f * u19;
    (((struct o28_float *)(t3))->v) = u20;
    (((struct o2C_float *)(t3))->v) = (((((struct o2C_float *)(t3))->v)) - (((math_cos_angle16(((-(*(int *)((t3 + 0x34)))) + 0x14000))) * 50.0f)));
    *(int *)((int)stk + 12) = (t3 + 0x30);
    t26 = math_sin_angle16(((-(*(int *)((t3 + 0x34)))) + 0x14000));
    u29 = (((struct o30_float *)(t3))->v);
    u30 = (t26 * (math_sin_angle16(((-(*(int *)((t3 + 0x38)))) + 0x14000))));
    u31 = u29;
    u31 = u31 + 50.0f * u30;
    (((struct o30_float *)(t3))->v) = u31;
    *(int *)((int)stk + 12) = 0xF0;
    *(int *)((int)stk + 8) = 0x0;
    t32 = *(signed char *)((t3 + 0x1));
    *(int *)((int)stk + 4) = (~((int)0x1 << (int)t32));
    *(int *)((int)stk + 0) = 0x100;
    FUN_0c064d24(t3, 0x1, 0x30, 0x0, 0x100, (~((int)0x1 << (int)t32)), 0x0, 0xF0);
    return FUN_0c07e2f4(t3, ((*(signed char *)(((int)stk + 16))) + 0x60));
}
