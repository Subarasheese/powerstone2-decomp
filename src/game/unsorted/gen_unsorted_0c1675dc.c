/* game/unsorted: functions 0C1675DC-0C167F6A, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o12C_ushort { char p[0x12C]; unsigned short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o404_int { char p[0x404]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o6CC_int { char p[0x6CC]; int v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c0588bc(int, int, int, int, int, int);
int FUN_0c058a6e(int, int, int, int, int, int);
int FUN_0c07e3ae(int, int);
int FUN_0c150010(int, int, int, float, float, float, float);
int FUN_0c15b478(int, int, int, int, int, int, int, int);
int FUN_0c15f9b4(int, int, int, int);
int FUN_0c1679c2(int, int, int);
int FUN_0c167a28(int, int, int, int);
float math_signed_sqrt(float);
int math_atan2_angle16(int, int, int, int, float, float);
int FUN_0c179ac0(void);
int nlCalcPoint(int, int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlUnitMatrix(void);
int FUN_0c17c130(int, int, int);
int FUN_0c18778c(void);
int FUN_0c187798(int, int, int);
int FUN_0c1675dc(int a4, int a5, int a6);
int FUN_0c1675f6(int a4, int a5, int a6, int a7);
int FUN_0c167b36(int a4, int a5, int a6, int a7);
int FUN_0c167e80(int a4, int a5, int a6);

int FUN_0c1675dc(int a4, int a5, int a6)
{
    return (FUN_0c187798(a4, a5, a6));
}

int FUN_0c1675f6(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    register int t2;
    register int t3;

    t2 = *(signed char *)((a4 + 0x14));
    if (t2 != 0) {
        if (t2 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        if ((int)(*(short *)((a4 + 0x1C))) <= (int)((((struct o0_int *)0xC2A3554)->v))) {
            FUN_0c0588bc((((((struct oC4_int *)(a4))->v)) + 0x84), 0xC2A358C, 0xC2A3580, (*(short *)((a4 + 0x1C))), (((((struct o0_int *)0xC2A3554)->v))), 0x0);
        }
        t2 = *(short *)((a4 + 0x1C));
        if (((int)t2 >= (int)((((struct o4_int *)0xC2A3554)->v))) && (t0 = (((struct o0_int *)0xC2A3554)->v), (int)t2 <= (int)t0)) {
            FUN_0c058a6e((((((struct oC4_int *)(a4))->v)) + 0x14), 0xC2A3570, 0xC2A3560, (*(short *)((a4 + 0x1C))), (((((struct o0_int *)0xC2A3554)->v))), (((((struct o4_int *)0xC2A3554)->v))));
        }
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
        t2 = (short)(t0 + 0x1);
        if ((int)(short)(t0 + 0x1) > (int)((((struct o0_int *)0xC2A3554)->v))) {
            (((struct o14_uchar *)(a4))->v) = 0x3;
            t2 = 0x14;
        }
        return t2;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x4, 0x52, (*(int *)0xC4B40CC));
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct oAC_ushort *)(a4))->v) = 0x2F;
    (((struct oA9_uchar *)(a4))->v) = 0x21;
    *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
    *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x21F;
    t0 = (((struct oC4_int *)(a4))->v);
    t2 = FUN_0c179ac0();
    t3 = ((~(((~t2) + 0x1) & 0x3)) + 0x1);
    if ((int)t2 >= 0) {
        t3 = (t2 & 0x3);
    }
    t2 = (t3 * 0x1E);
    if ((int)(t3 * 0x1E) < 0) {
        t2 = ((t3 * 0x1E) + 0x3);
    }
    (((struct o80_uint *)(t0))->v) = ((int)(((((float)((t2 >> 1) >> 1) * ((((struct o0_float *)0xC16778C)->v))) / ((((struct o4_float *)0xC16778C)->v)))) + ((((struct o8_float *)0xC16778C)->v))) & 0xFFFF);
    *(volatile int *)((a4 + 0xC4));
    FUN_0c18778c();
    if ((int)(*(short *)((a4 + 0x1C))) <= (int)((((struct o0_int *)0xC2A3554)->v))) {
        FUN_0c0588bc((((((struct oC4_int *)(a4))->v)) + 0x84), 0xC2A358C, 0xC2A3580, (*(short *)((a4 + 0x1C))), (((((struct o0_int *)0xC2A3554)->v))), 0x0);
    }
    t0 = *(short *)((a4 + 0x1C));
    if (((int)t0 >= (int)((((struct o4_int *)0xC2A3554)->v))) && (t1 = (((struct o0_int *)0xC2A3554)->v), (int)t0 <= (int)t1)) {
        FUN_0c058a6e((((((struct oC4_int *)(a4))->v)) + 0x14), 0xC2A3570, 0xC2A3560, (*(short *)((a4 + 0x1C))), (((((struct o0_int *)0xC2A3554)->v))), (((((struct o4_int *)0xC2A3554)->v))));
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
    t1 = (short)(t0 + 0x1);
    if ((int)(short)(t0 + 0x1) > (int)((((struct o0_int *)0xC2A3554)->v))) {
        (((struct o14_uchar *)(a4))->v) = 0x3;
        t1 = 0x14;
    }
    return t1;
}

int FUN_0c167b36(int a4, int a5, int a6, int a7)
{
    int stk[6];
    register int t105;

    register int R1;
    register int R3;
    register int R8;
    int R12;
    register float F0;
    register float F1;
    register float F2;
    register float F3;
    register float F4;
    register float F6;
    register float F7;
    register float F14;
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
    register int v0_9;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    v0_1 = a4;
    v0_2 = a5;
    v0_3 = a6;
    v0_4 = a7;
    v0_6 = *(signed char *)((v0_1 + 0x14));
    v0_5 = (v0_6);
    v0_0 = (v0_1);
    w0_0 = (1.0f);
    if ((v0_6 == 0)) goto L_C167B80;
    if ((v0_5 == 1)) goto L_C167BF8;
    if ((v0_5 != 2)) goto L_C167B62;
    v0_5 = ((FUN_0c03f346(v0_0, v0_2, v0_3, v0_4)));
    L_C167E36:;
    return v0_5;
    L_C167B62:;
    goto L_C167E36;
    L_C167BF8:;
    if ((((*(int *)0xC542260) & 7) != 0)) goto L_C167C08;
    FUN_0c07e3ae(v0_0, 0x36);
    L_C167C08:;
    if (((*(signed char *)((v0_0 + 0x131))) == 0)) goto L_C167C32;
    FUN_0c150010((v0_0 + 0x28), v0_2, v0_3, w0_0, w0_0, w0_0, w0_0);
    FUN_0c15f9b4((*(signed char *)((v0_0 + 0x1))), (v0_0 + 0x28), (v0_0 + 0x34), 0x2);
    L_C167C32:;
    if ((((((struct o404_int *)(v0_0))->v)) == 0)) goto L_C167C84;
    FUN_0c15f9b4((*(signed char *)((v0_0 + 0x1))), (v0_0 + 0x28), (v0_0 + 0x34), 0x2);
    (((struct o20_ushort *)(v0_0))->v) = (((((struct o20_short *)(v0_0))->v)) + 0x1);
    L_C167C92:;
    v0_5 = (((struct oC4_int *)(v0_0))->v);
    (((struct o80_uint *)(v0_5))->v) = (((((struct o80_int *)(v0_5))->v)) + 0xCCD);
    FUN_0c1675dc((*(signed char *)((v0_0 + 0x1))), (((int)stk + 0) + 0xC), v0_3);
    *(float *)(((int)stk + 16)) = ((*(float *)(((int)stk + 16))) + 100.0f);
    *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) - ((((struct o28_float *)(v0_0))->v)));
    *(float *)(((int)stk + 16)) = ((*(float *)(((int)stk + 16))) - ((((struct o2C_float *)(v0_0))->v)));
    w0_1 = (((struct o30_float *)(v0_0))->v);
    w0_2 = *(float *)(((int)stk + 20));
    *(float *)(((int)stk + 20)) = (w0_2 - w0_1);
    w0_0 = (9.99999997e-07f);
    if (((w0_2 - w0_1) != 0.0f)) goto L_C167CF0;
    *(float *)(((int)stk + 20)) = w0_0;
    L_C167CF0:;
    v0_6 = math_atan2_angle16(v0_1, v0_2, v0_3, v0_4, (*(float *)(((int)stk + 12))), (*(float *)(((int)stk + 20))));
    R12 = (0xFFFF);
    v0_5 = (0x10000);
    v0_1 = ((v0_6 & 0xFFFF));
    if (((int)((v0_6 & 0xFFFF) - (*(int *)((v0_0 + 0x38)))) <= (int)0x8000)) goto L_C167D12;
    v0_1 = ((v0_1 - v0_5));
    L_C167D12:;
    v0_8 = ((*(int *)((v0_0 + 0x38))));
    if (((int)(v0_1 - (*(int *)((v0_0 + 0x38)))) >= (int)0xFFFF8000)) goto L_C167D22;
    v0_1 = ((v0_1 + v0_5));
    L_C167D22:;
    v0_9 = (int)(v0_1 - v0_8) < 0;
    v0_6 = (0x200);
    v0_7 = (0xFFFFFE00);
    v0_1 = ((v0_1 - v0_8));
    if (v0_9) goto L_C167D58;
    if (((int)v0_1 <= (int)v0_6)) goto L_C167D5E;
    v0_1 = (v0_6);
    L_C167D5E:;
    *(unsigned int *)((v0_0 + 0x38)) = (((*(int *)((v0_0 + 0x38))) + v0_1) & R12);
    w0_1 = *(float *)(((int)stk + 12));
    w0_2 = *(float *)(((int)stk + 20));
    w0_2 = (w0_2 * w0_2);
    w0_2 = w0_2 + w0_1 * w0_1;
    w0_1 = math_signed_sqrt(w0_2);
    w0_2 = (w0_1);
    if ((w0_1 != 0.0f)) goto L_C167D88;
    w0_2 = (w0_0);
    L_C167D88:;
    v0_2 = math_atan2_angle16(v0_1, v0_2, v0_3, v0_4, (-(*(float *)(((int)stk + 16)))), w0_2);
    v0_1 = ((v0_2 & R12));
    if (((int)((v0_2 & R12) - (*(int *)((v0_0 + 0x34)))) <= (int)0x8000)) goto L_C167DA4;
    v0_1 = ((v0_1 - v0_5));
    L_C167DA4:;
    v0_8 = ((*(int *)((v0_0 + 0x34))));
    if (((int)(v0_1 - (*(int *)((v0_0 + 0x34)))) >= (int)0xFFFF8000)) goto L_C167DB4;
    v0_1 = ((v0_1 + v0_5));
    L_C167DB4:;
    v0_2 = (int)(v0_1 - v0_8) < 0;
    v0_1 = ((v0_1 - v0_8));
    if (v0_2) goto L_C167DC2;
    if (((int)v0_1 <= (int)v0_6)) goto L_C167DC8;
    v0_1 = (v0_6);
    L_C167DC8:;
    *(unsigned int *)((v0_0 + 0x34)) = (((*(int *)((v0_0 + 0x34))) + v0_1) & R12);
    nlUnitMatrix();
    v0_1 = ((int (*)(void))(FUN_0c187798))();
    *(float *)(((int)stk + 8)) = 30.0f;
    nlRotateAY((*(int *)((v0_0 + 0x38))));
    nlRotateAX((*(int *)((v0_0 + 0x34))));
    nlCalcPoint(((int)stk + 0), (v0_0 + 0x4C));
    FUN_0c17c130((v0_0 + 0x28), (v0_0 + 0x28), (v0_0 + 0x4C));
    if (((int)((((struct o20_short *)(v0_0))->v)) > (int)0xA)) goto L_C167E26;
    v0_1 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_1 + 0x1);
    v0_5 = ((short)(v0_1 + 0x1));
    if (((int)(short)(v0_1 + 0x1) <= (int)0x64)) goto L_C167E36;
    L_C167E26:;
    (((struct o14_uchar *)(v0_0))->v) = 0x2;
    v0_5 = (0x14);
    goto L_C167E36;
    L_C167DC2:;
    if (((int)v0_1 >= (int)v0_7)) goto L_C167DC8;
    v0_1 = (v0_7);
    goto L_C167DC8;
    L_C167D58:;
    if (((int)v0_1 >= (int)v0_7)) goto L_C167D5E;
    v0_1 = (v0_7);
    goto L_C167D5E;
    L_C167C84:;
    v0_5 = (0x20);
    if (((int)((((struct o20_short *)(v0_0))->v)) <= 0)) goto L_C167C92;
    *(unsigned short *)((v0_0 + v0_5)) = ((*(short *)((v0_0 + v0_5))) - 1);
    goto L_C167C92;
    L_C167B80:;
    (((struct o14_uchar *)(v0_0))->v) = 0x1;
    (((struct oA8_uchar *)(v0_0))->v) = 0x1;
    (((struct oAC_ushort *)(v0_0))->v) = 0xF;
    (((struct oA9_uchar *)(v0_0))->v) = 0x21;
    *(unsigned char *)((((((struct oC4_int *)(v0_0))->v)) + 0x0)) = 0x1;
    *(unsigned short *)((((((struct oC4_int *)(v0_0))->v)) + 0x6)) = 0x1F;
    v0_5 = ((int (*)(int, int, int))(FUN_0c187798))(0xC2A3528, v0_2, v0_3);
    *(volatile int *)((v0_0 + 0xC4));
    v0_5 = ((int (*)(int))(FUN_0c187798))(t105);
    (((struct o84_float *)(((((struct oC4_int *)(v0_0))->v))))->v) = w0_0;
    (((struct o88_float *)(((((struct oC4_int *)(v0_0))->v))))->v) = w0_0;
    (((struct o8C_float *)(((((struct oC4_int *)(v0_0))->v))))->v) = w0_0;
    (((struct o12C_ushort *)(v0_0))->v) = 0x0;
    (((struct o12E_ushort *)(v0_0))->v) = 0xF0;
    (((struct o22_ushort *)(v0_0))->v) = (*(signed char *)(((*(int *)((0xC535BF8 + ((short)(*(signed char *)((v0_0 + 0x1))) * (short)0x3938)))) + 0x1)));
    goto L_C167BF8;
}

int FUN_0c167e80(int a4, int a5, int a6)
{
    int stk[23];
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t5;
    register int t9;
    register int t23;
    register int t4;
    register int t7;

    t0 = ((int (*)(int, int, int))(FUN_0c187798))(a4, a5, a6);
    t1 = ((int (*)(void))(FUN_0c187798))();
    t2 = ((int (*)(void))(FUN_0c187798))();
    t3 = ((int (*)(void))(FUN_0c187798))();
    t5 = ((int (*)(int, int, int))(FUN_0c187798))(0xC2A35B0, 0x0, t4);
    *(unsigned int *)(((int)stk + 84)) = ((*(int *)(((int)stk + 84))) + (*(int *)((t7 + 0x0))));
    t9 = FUN_0c167a28(a4, 0x0, (((int)stk + 32) + 0x30), 0x1);
    t23 = t9;
    if (t9 != 0) {
        FUN_0c03744a(((((struct oC4_int *)(t9))->v)), 0x5, 0x52, (*(int *)0xC4B40CC));
        *(unsigned char *)((t9 + 0x1)) = a4;
        *(unsigned int *)((t9 + 0x4)) = 0xC167B36;
        *(int *)((int)stk + 28) = (((int)stk + 32) + 0x18);
        *(int *)((int)stk + 24) = (((int)stk + 28) + 0x28);
        *(int *)((int)stk + 20) = 0x68;
        *(int *)((int)stk + 16) = 0x64;
        FUN_0c15b478(a4, (t9 + 0x64), t9, (*(int *)((((((struct o6CC_int *)((*(int *)0xC4B40CC)))->v)) + 0x0))), 0x64, 0x68, (((int)stk + 28) + 0x28), (((int)stk + 32) + 0x18));
        *(int *)((int)stk + 12) = (((int)stk + 16) + 0x10);
        *(int *)((int)stk + 8) = (((int)stk + 12) + 0x20);
        *(int *)((int)stk + 4) = 0x68;
        *(int *)((int)stk + 0) = 0x64;
        FUN_0c15b478(a4, (t9 + 0x64), t9, (*(int *)((((((struct o6CC_int *)((*(int *)0xC4B40CC)))->v)) + 0x0))), 0x64, 0x68, (((int)stk + 12) + 0x20), (((int)stk + 16) + 0x10));
        t23 = (FUN_0c1679c2((*(signed char *)((t9 + 0x1))), (t9 + 0x28), (t9 + 0x34)));
    }
    return t23;
}
