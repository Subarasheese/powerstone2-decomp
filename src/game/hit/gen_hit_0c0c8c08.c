/* game/hit: functions 0C0C8C08-0C0C9D8C, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o2C_float { char p[0x2C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o426_short { char p[0x426]; short v; };
struct o426_ushort { char p[0x426]; unsigned short v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oC_float { char p[0xC]; float v; };
struct oD0_int { char p[0xD0]; int v; };
struct oD4_int { char p[0xD4]; int v; };
int FUN_0c07d15c(int);
int FUN_0c07e328(int, int);
int FUN_0c0c216e(int);
int FUN_0c0c2ab6(int, int, int, int);
int FUN_0c0c2ce4(int);
int FUN_0c0c2d56(int, int, int);
int FUN_0c0c3e3a(int, int, int);
int FUN_0c16516e(int);
float math_sin_angle16(int);
int FUN_0c187798(int, int, int);
int FUN_0c0c8c08(int a4, int a5, int a6, int a7);
int FUN_0c0c8c36(int a4, int a5, int a6, int a7);
int FUN_0c0c8c90(int a4, int a5, int a6, int a7);
int FUN_0c0c8d00(int a4);
int FUN_0c0c8e8c(int a4);
int FUN_0c0c8f2e(int a4);
int FUN_0c0c8f70(int a4, int a5, int a6);

int FUN_0c0c8c08(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t3;

    t0 = FUN_0c0c3e3a(a4, a5, a6);
    if (t0 == 0) {
        FUN_0c0c216e(a4);
        t3 = *(int *)((((unsigned char)(*(signed char *)((a4 + 0x41C))) << 2) + 0xC2733F4));
        return ((int (*)(int, int, int, int))(t3))(a4, a5, a6, a7);
    }
    return t0;
}

int FUN_0c0c8c36(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t2;

    t0 = FUN_0c0c3e3a(a4, a5, a6);
    if (t0 == 0) {
        t2 = *(int *)((((unsigned char)(*(signed char *)((a4 + 0x41C))) << 2) + 0xC2733F4));
        return ((int (*)(int, int, int, int))(t2))(a4, a5, a6, a7);
    }
    return t0;
}

int FUN_0c0c8c90(int a4, int a5, int a6, int a7)
{
    FUN_0c0c2ab6(a4, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738CB))), a6, a7);
    FUN_0c07e328(a4, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738C6))));
    (((struct o12A_ushort *)(a4))->v) = 0xF;
    *(unsigned int *)((a4 + 0x3C)) = 0x0;
    (((struct o426_ushort *)(a4))->v) = 0x0;
    (((struct o48_float *)(a4))->v) = 1.0f;
    (((struct o44_float *)(a4))->v) = 1.0f;
    (((struct o40_float *)(a4))->v) = 1.0f;
    *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x1;
    (((struct o50_float *)(a4))->v) = 0.0f;
    (((struct o5C_float *)(a4))->v) = (*(float *)0xC0C8DC0);
    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    return 0x15;
}

int FUN_0c0c8d00(int a4)
{

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R6;
    register int R8;
    register int R10;
    register int R11;
    register int R12;
    register float F2;
    register float F3;
    register float F15;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register float w0_0;
    v0_1 = a4;
    v0_2 = FUN_0c0c2ce4(v0_1);
    v0_0 = (v0_1);
    v0_1 = (v0_2);
    F15 = (0.0f);
    if ((v0_2 == 0)) goto L_C0C8D30;
    if ((v0_1 != 2)) goto L_C0C8D24;
    *(volatile signed char *)((v0_0 + 0x1));
    L_C0C8D96:;
    return FUN_0c0c2d56(v0_0, R5, R6);
    L_C0C8D24:;
    (((struct o50_float *)(v0_0))->v) = F15;
    (((struct o5C_float *)(v0_0))->v) = -2.0f;
    L_C0C8D30:;
    (((struct o2C_float *)(v0_0))->v) = (((((struct o2C_float *)(v0_0))->v)) + ((((struct o50_float *)(v0_0))->v)));
    (((struct o50_float *)(v0_0))->v) = (((((struct o50_float *)(v0_0))->v)) + ((((struct o5C_float *)(v0_0))->v)));
    v0_1 = (*(signed char *)((v0_0 + 0x131))) != 0;
    if (v0_1) goto L_C0C8D64;
    v0_1 = (((struct o426_short *)(v0_0))->v);
    (((struct o426_ushort *)(v0_0))->v) = (v0_1 + 0x1);
    v0_2 = (0x426);
    if (!(((int)(short)(v0_1 + 0x1) <= (int)0x4B0))) goto L_C0C8D64;
    v0_2 = (int)(*(short *)((v0_0 + v0_2))) <= (int)0x438;
    v0_1 = (0x1);
    if (v0_2) goto L_C0C8DE6;
    (((struct oA8_uchar *)(v0_0))->v) = ((*(signed char *)0xC542260) & 0x1);
    goto L_C0C8DE6;
    L_C0C8D64:;
    v0_1 = FUN_0c07d15c(v0_0);
    *(unsigned char *)((v0_0 + 0x1)) = v0_1;
    if (((signed char)v0_1 == 0)) goto L_C0C8D90;
    *(unsigned char *)((v0_0 + 0x1)) = ((*(signed char *)((v0_0 + 0x1))) - 1);
    *(unsigned short *)((v0_0 + 0x1C)) = 0x0;
    *(unsigned short *)((v0_0 + 0x1E)) = 0x0;
    (((struct o12A_ushort *)(v0_0))->v) = 0x0;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    v0_2 = (0x15);
    L_C0C8E70:;
    return v0_2;
    L_C0C8D90:;
    *(volatile signed char *)((v0_0 + 0x1));
    goto L_C0C8D96;
    L_C0C8DE6:;
    v0_3 = *(signed char *)((v0_0 + 0x16));
    v0_2 = (v0_3);
    w0_0 = (1.0f);
    if ((v0_3 == 0)) goto L_C0C8DFC;
    if ((v0_2 == 1)) goto L_C0C8E2C;
    if ((v0_2 == 2)) goto L_C0C8E62;
    goto L_C0C8E70;
    L_C0C8E62:;
    v0_0 = (((struct oD4_int *)(v0_0))->v);
    (((struct o7C_uint *)(v0_0))->v) = (((((struct o7C_int *)(v0_0))->v)) + 0x5B0);
    v0_2 = (0x7C);
    goto L_C0C8E70;
    L_C0C8E2C:;
    v0_2 = (((struct oCC_int *)(v0_0))->v);
    (((struct o88_float *)(v0_2))->v) = (((((struct o88_float *)(v0_2))->v)) + 0.0500000007f);
    v0_3 = w0_0 > ((((struct o88_float *)(((((struct oCC_int *)(v0_0))->v))))->v));
    v0_2 = (0x88);
    FPUL_ = (0x3D4CCCCD);
    if (v0_3) goto L_C0C8E70;
    (((struct o88_float *)(((((struct oCC_int *)(v0_0))->v))))->v) = w0_0;
    *(unsigned char *)((((((struct oD4_int *)(v0_0))->v)) + 0x0)) = v0_1;
    (((struct o16_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x16))) + 0x1);
    v0_2 = (0x16);
    goto L_C0C8E70;
    L_C0C8DFC:;
    *(unsigned char *)((((((struct oCC_int *)(v0_0))->v)) + 0x0)) = v0_1;
    v0_2 = (((struct oCC_int *)(v0_0))->v);
    *(unsigned short *)((v0_2 + 0x6)) = ((*(short *)((v0_2 + 0x6))) | 0x10);
    v0_2 = (((struct oCC_int *)(v0_0))->v);
    (((struct o8C_float *)(v0_2))->v) = w0_0;
    (((struct o84_float *)(v0_2))->v) = w0_0;
    (((struct o88_float *)(((((struct oCC_int *)(v0_0))->v))))->v) = F15;
    *(unsigned char *)((((((struct oD0_int *)(v0_0))->v)) + 0x0)) = v0_1;
    (((struct o16_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x16))) + 0x1);
    goto L_C0C8E2C;
}

int FUN_0c0c8e8c(int a4)
{
    int t0;
    register int t1;
    register float u0;
    register float u1;

    t1 = *(signed char *)((a4 + 0x1));
    if (((*(signed char *)(((((short)t1 * (short)0x3938) + 0xC532498) + 0x14))) == 1) && (t0 = *(signed char *)(((((short)t1 * (short)0x3938) + 0xC532498) + 0x3739)), t0 == 34)) {
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
        if ((int)(short)(t0 + 0x1) > (int)0x3C) {
            *(unsigned short *)((a4 + 0x1C)) = 0xA;
            *(unsigned short *)((a4 + 0x1E)) = 0x14;
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        }
        t0 = *(short *)((a4 + 0x1C));
        if (((int)t0 > (int)0x1E) && ((int)t0 <= (int)0x24)) {
            u0 = math_sin_angle16((int)(((float)(*(short *)((a4 + 0x1E))) * ((((struct o0_float *)0xC0C8FB0)->v))) / ((((struct o4_float *)0xC0C8FB0)->v))));
            u1 = 1.0f;
            u1 = u1 + ((((struct oC_float *)0xC0C8FB0)->v)) * u0;
            (((struct o40_float *)(a4))->v) = u1;
            (((struct o48_float *)(a4))->v) = u1;
            t1 = *(short *)((a4 + 0x1E));
            *(unsigned short *)((a4 + 0x1E)) = (t1 + 0x24);
            return (t1 + 0x24);
        }
        return t0;
    }
    return FUN_0c0c2d56(a4, 0xB, (*(signed char *)((a4 + 0x1))));
}

int FUN_0c0c8f2e(int a4)
{
    register int t0;
    register float u0;

    if ((*(short *)((a4 + 0x1C))) == 0) {
        t0 = *(short *)((a4 + 0x1E));
        *(unsigned short *)((a4 + 0x1E)) = (t0 - 1);
        if ((int)(short)(t0 - 1) <= 0) {
            return FUN_0c0c2d56(a4, 0xB, (*(signed char *)((a4 + 0x1))));
        }
        u0 = (((struct o40_float *)(a4))->v);
        (((struct o40_float *)(a4))->v) = (u0 * 0.699999988f);
        (((struct o48_float *)(a4))->v) = (u0 * 0.699999988f);
        return 0x48;
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    return (t0 - 1);
}

int FUN_0c0c8f70(int a4, int a5, int a6)
{
    int stk[2];

    FUN_0c187798(a4, a5, a6);
    *(float *)(((int)stk + 0)) = ((*(float *)(((int)stk + 0))) + 400.0f);
    return (FUN_0c16516e((*(signed char *)((a4 + 0x1)))));
}
