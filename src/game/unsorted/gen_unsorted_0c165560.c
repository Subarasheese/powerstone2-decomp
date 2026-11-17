/* game/unsorted: functions 0C165560-0C16619E, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o131_uchar { char p[0x131]; unsigned char v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o6C_float { char p[0x6C]; float v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oC_int { char p[0xC]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c07d1fc(int, int);
int FUN_0c07e3ae(int, int);
int FUN_0c14f824(int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
extern int FUN_0c187798();
int FUN_0c165560(int a4, int a5, int a6, int a7, float f4);
int FUN_0c165ed0(int a4, int a5, int a6);
int FUN_0c165fec(int a4, int a5, int a6);
int FUN_0c1660d4(int a4, int a5);
int FUN_0c166190(int a4, int a5, int a6);

int FUN_0c165560(int a4, int a5, int a6, int a7, float f4)
{
    int stk[4];

    register int R1;
    register int R2;
    register int R3;
    register float F2;
    register float F3;
    register float F12;
    register float F15;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register float w0_0;
    register float w0_1;
    v0_3 = a4;
    v0_4 = a5;
    w0_0 = f4;
    v0_5 = *(signed char *)((v0_3 + 0x14));
    v0_1 = (v0_5);
    v0_2 = (0x0);
    v0_0 = (v0_3);
    if ((v0_5 == 0)) goto L_C165586;
    if ((v0_1 == 1)) goto L_C165592;
    v0_1 = ((FUN_0c03f346(v0_0, v0_4, a6, a7)));
    L_C1657AE:;
    return v0_1;
    L_C165592:;
    if (((*(signed char *)((v0_0 + 0x131))) == 0)) goto L_C1655B8;
    v0_1 = FUN_0c07d1fc(v0_0, v0_4);
    *(unsigned int *)(((int)stk + 0)) = v0_1;
    if ((v0_1 == 0)) goto L_C1655B8;
    (((struct o131_uchar *)(v0_0))->v) = v0_2;
    FUN_0c1660d4(v0_0, ((*(int *)(((int)stk + 0))) + 0xFF));
    L_C16579A:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    (((struct o15_uchar *)(v0_0))->v) = v0_2;
    v0_1 = (0x15);
    goto L_C1657AE;
    L_C1655B8:;
    if ((((*(int *)0xC542260) & 3) != 0)) goto L_C1655E8;
    v0_1 = ((int (*)(int, int))(FUN_0c187798))(v0_3, v0_4);
    *(float *)(((int)stk + 8)) = ((*(float *)(((int)stk + 8))) + 30.0f);
    FUN_0c14f824((*(signed char *)((v0_0 + 0x1))), (((int)stk + 0) + 0x4));
    L_C1655E8:;
    v0_4 = *(signed char *)((v0_0 + 0x15));
    v0_1 = (v0_4);
    v0_3 = (0xC179670);
    v0_3 = (0xC179BF0);
    v0_3 = (0x14000);
    if ((v0_4 == 0)) goto L_C165606;
    if ((v0_1 == 1)) goto L_C165688;
    if ((v0_1 != 2)) goto L_C165602;
    (((struct o28_float *)(v0_0))->v) = (((((struct o28_float *)(v0_0))->v)) + ((((struct o4C_float *)(v0_0))->v)));
    (((struct o2C_float *)(v0_0))->v) = (((((struct o2C_float *)(v0_0))->v)) - ((((struct o50_float *)(v0_0))->v)));
    (((struct o30_float *)(v0_0))->v) = (((((struct o30_float *)(v0_0))->v)) + ((((struct o54_float *)(v0_0))->v)));
    (((struct o4C_float *)(v0_0))->v) = (((((struct o4C_float *)(v0_0))->v)) + ((((struct o58_float *)(v0_0))->v)));
    (((struct o50_float *)(v0_0))->v) = (((((struct o50_float *)(v0_0))->v)) + ((((struct o5C_float *)(v0_0))->v)));
    (((struct o54_float *)(v0_0))->v) = (((((struct o54_float *)(v0_0))->v)) + ((((struct o60_float *)(v0_0))->v)));
    v0_3 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_3 - 1);
    v0_1 = ((short)(v0_3 - 1));
    if (((short)(v0_3 - 1) != 0)) goto L_C1657AE;
    goto L_C16579A;
    L_C165602:;
    goto L_C1657AE;
    L_C165688:;
    (((struct o28_float *)(v0_0))->v) = (((((struct o28_float *)(v0_0))->v)) + ((((struct o4C_float *)(v0_0))->v)));
    (((struct o2C_float *)(v0_0))->v) = (((((struct o2C_float *)(v0_0))->v)) - ((((struct o50_float *)(v0_0))->v)));
    (((struct o30_float *)(v0_0))->v) = (((((struct o30_float *)(v0_0))->v)) + ((((struct o54_float *)(v0_0))->v)));
    (((struct o4C_float *)(v0_0))->v) = (((((struct o4C_float *)(v0_0))->v)) + ((((struct o58_float *)(v0_0))->v)));
    (((struct o50_float *)(v0_0))->v) = (((((struct o50_float *)(v0_0))->v)) + ((((struct o5C_float *)(v0_0))->v)));
    (((struct o54_float *)(v0_0))->v) = (((((struct o54_float *)(v0_0))->v)) + ((((struct o60_float *)(v0_0))->v)));
    v0_2 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_2 - 1);
    v0_1 = ((short)(v0_2 - 1));
    if (((short)(v0_2 - 1) != 0)) goto L_C1657AE;
    w0_0 = math_sin_angle16(((-(*(int *)((v0_0 + 0x34)))) + v0_3));
    w0_0 = (w0_0 * (math_cos_angle16(((-(*(int *)((v0_0 + 0x38)))) + v0_3))));
    (((struct o58_float *)(v0_0))->v) = (w0_0 * 1.0f);
    (((struct o5C_float *)(v0_0))->v) = ((math_cos_angle16(((-(*(int *)((v0_0 + 0x34)))) + v0_3))) * 1.0f);
    w0_1 = math_sin_angle16(((-(*(int *)((v0_0 + 0x34)))) + v0_3));
    w0_0 = math_sin_angle16(((-(*(int *)((v0_0 + 0x38)))) + v0_3));
    w0_1 = (w0_1 * w0_0);
    (((struct o60_float *)(v0_0))->v) = (w0_1 * 1.0f);
    v0_1 = (0x78);
    w0_0 = (w0_0);
    L_C16572E:;
    *(unsigned short *)((v0_0 + 0x1C)) = v0_1;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    v0_1 = (0x15);
    goto L_C1657AE;
    L_C165606:;
    w0_0 = math_sin_angle16(((-(*(int *)((v0_0 + 0x34)))) + v0_3));
    w0_0 = (w0_0 * (math_cos_angle16(((-(*(int *)((v0_0 + 0x38)))) + v0_3))));
    (((struct o4C_float *)(v0_0))->v) = (w0_0 * 10.0f);
    (((struct o50_float *)(v0_0))->v) = ((math_cos_angle16(((-(*(int *)((v0_0 + 0x34)))) + v0_3))) * 10.0f);
    w0_1 = math_sin_angle16(((-(*(int *)((v0_0 + 0x34)))) + v0_3));
    w0_0 = math_sin_angle16(((-(*(int *)((v0_0 + 0x38)))) + v0_3));
    w0_1 = (w0_1 * w0_0);
    (((struct o54_float *)(v0_0))->v) = (w0_1 * 10.0f);
    (((struct o58_float *)(v0_0))->v) = 0.0f;
    (((struct o5C_float *)(v0_0))->v) = 0.0f;
    (((struct o60_float *)(v0_0))->v) = 0.0f;
    v0_1 = (0xA);
    w0_0 = (w0_0);
    goto L_C16572E;
    L_C165586:;
    (((struct oA8_uchar *)(v0_0))->v) = 0x1;
    (((struct o131_uchar *)(v0_0))->v) = v0_2;
    goto L_C16579A;
}

int FUN_0c165ed0(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = FUN_0c03f444(0x1, 0x0, 0x2);
    t1 = t0;
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x4)) = 0xC165560;
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned int *)((t0 + 0x10)) = a4;
        (((struct oA8_uchar *)(t0))->v) = 0x0;
        (((struct oAC_ushort *)(t0))->v) = 0x1F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        t2 = (((struct oC4_int *)(t0))->v);
        FUN_0c03744a(t2, 0x1, 0x21, ((((struct oC_int *)0xC4B40CC)->v)));
        (((struct o7C_uint *)(t2))->v) = 0x4000;
        t2 = (((struct oC8_int *)(t0))->v);
        FUN_0c03744a(t2, 0x0, 0x37, ((((struct o0_int *)0xC4B40CC)->v)));
        (((struct o68_uint *)(t2))->v) = (((((struct oC4_int *)(t0))->v)) + 0x28);
        (((struct o7C_uint *)(t2))->v) = 0xFFFFC000;
        (((struct o6C_float *)(t2))->v) = (((((struct o6C_float *)(t2))->v)) + 80.0f);
        FUN_0c187798();
        FUN_0c187798();
        (((struct o48_float *)(t0))->v) = 1.0f;
        (((struct o44_float *)(t0))->v) = 1.0f;
        (((struct o40_float *)(t0))->v) = 1.0f;
        FUN_0c07e3ae(t0, (*(signed char *)0xC273FAE));
        t1 = (FUN_0c064d24(t0, 0x1, 0x9, 0x0, 0x100, (~((int)0x1 << (int)(*(signed char *)((t0 + 0x1))))), 0x0, 0xF0));
    }
    return t1;
}

int FUN_0c165fec(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = FUN_0c03f444(0x1, 0x0, 0x2);
    t1 = t0;
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x4)) = 0xC1657C2;
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned int *)((t0 + 0x10)) = (*(int *)((a4 + 0x10)));
        (((struct oA8_uchar *)(t0))->v) = 0x0;
        (((struct oAC_ushort *)(t0))->v) = 0x1F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        t2 = (((struct oC4_int *)(t0))->v);
        FUN_0c03744a(t2, 0x1, 0x21, ((((struct oC_int *)0xC4B40CC)->v)));
        (((struct o7C_uint *)(t2))->v) = 0x4000;
        t2 = (((struct oC8_int *)(t0))->v);
        FUN_0c03744a(t2, 0x0, 0x37, ((((struct o0_int *)0xC4B40CC)->v)));
        (((struct o68_uint *)(t2))->v) = (((((struct oC4_int *)(t0))->v)) + 0x28);
        (((struct o7C_uint *)(t2))->v) = 0xFFFFC000;
        (((struct o6C_float *)(t2))->v) = (((((struct o6C_float *)(t2))->v)) + 80.0f);
        FUN_0c187798();
        FUN_0c187798();
        (((struct o48_float *)(t0))->v) = 1.0f;
        (((struct o44_float *)(t0))->v) = 1.0f;
        (((struct o40_float *)(t0))->v) = 1.0f;
        FUN_0c07e3ae(t0, (*(signed char *)0xC273FAE));
        t1 = (FUN_0c064d24(t0, 0x1, 0x9, 0x0, 0x100, (~((int)0x1 << (int)(*(signed char *)((t0 + 0x1))))), 0x0, 0xF0));
    }
    return t1;
}

int FUN_0c1660d4(int a4, int a5)
{
    int stk[2];
    register int t2;
    register int t10;

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned char *)(((int)stk + 4)) = a5;
    FUN_0c037320(0x38, (*(int *)0xC4B40CC));
    t2 = FUN_0c03f444(0x5, 0x0, 0x6);
    t10 = t2;
    if (t2 != 0) {
        FUN_0c03733c(t2, 0x38, (*(int *)0xC4B40CC));
        (((struct oA8_uchar *)(t2))->v) = 0x0;
        (((struct oAC_ushort *)(t2))->v) = 0x3F;
        (((struct oA9_uchar *)(t2))->v) = 0x21;
        *(unsigned int *)((t2 + 0x4)) = 0xC165B50;
        *(unsigned char *)((t2 + 0x1)) = (*(signed char *)(((*(int *)(((int)stk + 0))) + 0x1)));
        *(unsigned int *)((t2 + 0x10)) = (*(int *)(((*(int *)(((int)stk + 0))) + 0x10)));
        *(unsigned char *)((t2 + 0x2)) = (*(signed char *)(((int)stk + 4)));
        *(unsigned int *)((t2 + 0x3C)) = 0x0;
        *(unsigned int *)((t2 + 0x38)) = 0x0;
        *(unsigned int *)((t2 + 0x34)) = 0x0;
        (((struct o48_float *)(t2))->v) = (1.0f + 1.0f);
        (((struct o44_float *)(t2))->v) = (1.0f + 1.0f);
        (((struct o40_float *)(t2))->v) = (1.0f + 1.0f);
        t10 = 0x40;
    }
    return t10;
}

int FUN_0c166190(int a4, int a5, int a6)
{
    if ((*(int *)((a4 + 0x10))) == 0) {
        return FUN_0c165ed0(a4, a5, a6);
    }
    return FUN_0c165fec(a4, a5, a6);
}
