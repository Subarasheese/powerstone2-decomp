/* Straight-line functions with calls and guards (batch gen_jn): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o1A_uchar { char p[0x1A]; unsigned char v; };
struct o1B_uchar { char p[0x1B]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o24_short { char p[0x24]; short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o374B_uchar { char p[0x374B]; unsigned char v; };
struct o3830_ushort { char p[0x3830]; unsigned short v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o78_int { char p[0x78]; int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAA_uchar { char p[0xAA]; unsigned char v; };
struct oAB_uchar { char p[0xAB]; unsigned char v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c037bf6(int);
int FUN_0c038362(int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c042fe0(void);
int FUN_0c05f254(int);
int FUN_0c07e2f4(int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c0c2944(int, int, int, int, int);
int FUN_0c0c2d56(int, int, int);
int FUN_0c0ced88(int, int);
int FUN_0c0d2124(void);
int FUN_0c0d21ac(int, int, int);
int FUN_0c0d2480(int, int);
int FUN_0c0d24d0(int);
int FUN_0c104cc8(int);
int FUN_0c104d70(void);
int FUN_0c104db8(void);
int FUN_0c105068(int, int);
int FUN_0c10e0c2(int);
int FUN_0c117944(int, ...);
int FUN_0c117d54(void);
int FUN_0c117e76(void);
int FUN_0c133aec(int);
int FUN_0c133d90(int);
int FUN_0c1341de(int);
int FUN_0c134274(int);
int FUN_0c13428a(int);
int FUN_0c1362e4(int, int);
int FUN_0c179ac0(void);
int FUN_0c17c450(int);
int FUN_0c187798(int, int);
extern float _builtin_sqrtf(float);
extern int math_atan2_angle16();
int math_vec3_accumulate(int, int);
int FUN_0c0a2cd4(int a4);
int FUN_0c0d263c(int a4, int a5, int a6);
int FUN_0c10df44(int a4, int a5, int a6, int a7);
int FUN_0c12ff1c(int a4, int a5, int a6, int a7, float f4, float f5);
int FUN_0c1342b8(int a4);

int FUN_0c0a2cd4(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        t1 = t0;
        if (t0 == 1) {
            FUN_0c037bf6(a4);
            FUN_0c038362(a4);
            t0 = *(signed char *)((a4 + 0x17));
            t2 = t0;
            if ((t0 == 0) || (t0 == 1)) {
                t0 = 0x371A;
                if ((*(signed char *)((a4 + 0x371A))) == 0) {
                    (((struct o374B_uchar *)(a4))->v) = 0x1;
                    (((struct o3830_ushort *)(a4))->v) = 0x0;
                    t0 = 0x3830;
                }
                t2 = t0;
            }
            t1 = t2;
        }
        t0 = t1;
    } else {
        t1 = *(signed char *)((a4 + 0x17));
        switch (t1) {
        case 0:
            if ((*(signed char *)((a4 + 0x371A))) != 0) {
                t1 = *(signed char *)((a4 + 0x1));
                FUN_0c07e79c(a4, t1, 0x6, 0x9, (t1), 0x6, 0x9);
                FUN_0c133aec(a4);
            } else {
                t1 = *(signed char *)((a4 + 0x1));
                FUN_0c07e79c(a4, t1, 0x6, 0x2, (t1), 0x6, 0x2);
                FUN_0c1362e4(a4, 0x3);
            }
            break;
        case 1:
            if ((*(signed char *)((a4 + 0x371A))) != 0) {
                t1 = *(signed char *)((a4 + 0x1));
                FUN_0c07e79c(a4, t1, 0x6, 0x9, (t1), 0x6, 0x9);
                FUN_0c133aec(a4);
            } else {
                t1 = *(signed char *)((a4 + 0x1));
                FUN_0c07e79c(a4, t1, 0x6, 0x3, (t1), 0x6, 0x3);
                FUN_0c1362e4(a4, 0x4);
            }
            break;
        case 2:
            t1 = *(signed char *)((a4 + 0x1));
            FUN_0c07e79c(a4, t1, 0x6, 0x4, (t1), 0x6, 0x4);
            break;
        case 3:
            t1 = *(signed char *)((a4 + 0x1));
            FUN_0c07e79c(a4, t1, 0x6, 0x4, (t1), 0x6, 0x4);
            break;
        }
        t1 = *(int *)(((0x118 + a4) + 0x4));
        t2 = (((struct o118_int *)(a4))->v);
        (((struct oA0_float *)(t1))->v) = 1.0f;
        (((struct o9C_float *)(t1))->v) = 1.0f;
        (((struct oA0_float *)(t2))->v) = 1.0f;
        (((struct o9C_float *)(t2))->v) = 1.0f;
        t1 = *(int *)(((0x118 + a4) + 0x4));
        t2 = (((struct o118_int *)(a4))->v);
        (((struct o98_float *)(t1))->v) = 1.0f;
        (((struct o98_float *)(t2))->v) = 1.0f;
        (((struct o94_float *)(t1))->v) = 1.0f;
        (((struct o94_float *)(t2))->v) = 1.0f;
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        FUN_0c037bf6(a4);
        FUN_0c038362(a4);
        t1 = *(signed char *)((a4 + 0x17));
        t2 = t1;
        if ((t1 == 0) || (t1 == 1)) {
            t1 = 0x371A;
            if ((*(signed char *)((a4 + 0x371A))) == 0) {
                (((struct o374B_uchar *)(a4))->v) = 0x1;
                (((struct o3830_ushort *)(a4))->v) = 0x0;
                t1 = 0x3830;
            }
            t2 = t1;
        }
        t0 = t2;
    }
    return t0;
}

int FUN_0c0d263c(int a4, int a5, int a6)
{
    int stk[5];

    register int R1;
    register int R3;
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
    v0_5 = a6;
    *(unsigned int *)(((int)stk + 4)) = (0x41C + v0_6);
    v0_0 = ((int (*)(int, int, int))(FUN_0c187798))(v0_6, v0_4, v0_5);
    v0_0 = (v0_6);
    if (((*(signed char *)0xC54223C) == 0)) goto L_C0D267C;
    if (((*(int *)((v0_0 + 0x10))) == 0)) goto L_C0D2672;
    FUN_0c0c2d56((*(int *)((v0_0 + 0x10))), 0xB, 0x0);
    L_C0D2672:;
    v0_2 = ((FUN_0c03f346(v0_0, v0_4, v0_5, R7)));
    L_C0D27AE:;
    return v0_2;
    L_C0D267C:;
    v0_7 = *(signed char *)((v0_0 + 0x14));
    v0_2 = (v0_7);
    v0_3 = (0x1);
    v0_1 = (0x0);
    if ((v0_7 == 0)) goto L_C0D2690;
    if ((v0_2 == 1)) goto L_C0D26D2;
    goto L_C0D27AE;
    L_C0D26D2:;
    v0_6 = *(signed char *)((v0_0 + 0x15));
    v0_2 = (v0_6);
    if ((v0_6 == 0)) goto L_C0D26E6;
    if ((v0_2 == 1)) goto L_C0D26FA;
    if (!((v0_2 == 2))) goto L_C0D27AA;
    FUN_0c0d21ac(v0_0, v0_4, v0_5);
    goto L_C0D27AA;
    L_C0D27AA:;
    v0_2 = ((FUN_0c0d24d0(v0_0)));
    goto L_C0D27AE;
    L_C0D26FA:;
    v0_2 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_2 - 1);
    if (((int)(short)(v0_2 - 1) > 0)) goto L_C0D27AA;
    FUN_0c0d2480(v0_0, 0x1);
    (((struct oA8_uchar *)(v0_0))->v) = v0_3;
    (((struct o15_uchar *)(v0_0))->v) = 0x2;
    v0_3 = FUN_0c179ac0();
    v0_2 = (v0_3);
    v0_4 = (0x19);
    if (((int)v0_3 < 0)) goto L_C0D274C;
    v0_2 = ((v0_2 & 0x3));
    L_C0D2756:;
    *(unsigned char *)(((v0_4 + v0_0) + 0x0)) = v0_2;
    (((struct o1A_uchar *)(v0_0))->v) = v0_1;
    (((struct o22_ushort *)(v0_0))->v) = v0_1;
    *(unsigned int *)((v0_0 + 0x10)) = v0_1;
    v0_2 = FUN_0c0d2124();
    *(int *)((int)stk + 0) = 0xFFFFFFFF;
    v0_2 = FUN_0c0c2944(v0_2, 0x0, 0x3, (((int)stk + 0) + 0x8), 0xFFFFFFFF);
    *(unsigned int *)((v0_0 + 0x10)) = v0_2;
    if ((v0_2 == 0)) goto L_C0D2798;
    (((struct oA4_uint *)((*(int *)((v0_0 + 0x10)))))->v) = (((((struct oC4_int *)(v0_0))->v)) + 0x28);
    *(unsigned short *)(((*(int *)(((int)stk + 4))) + 0xC)) = ((((struct o24_short *)((*(int *)((v0_0 + 0x10)))))->v));
    L_C0D2798:;
    FUN_0c0ced88(v0_0, 0x0);
    (((struct o1B_uchar *)(v0_0))->v) = v0_1;
    goto L_C0D27AA;
    L_C0D274C:;
    v0_2 = (((~(((~v0_2) + 0x1) & 0x3)) + 0x1));
    goto L_C0D2756;
    L_C0D26E6:;
    (((struct oA8_uchar *)(v0_0))->v) = v0_1;
    v0_4 = FUN_0c042fe0();
    v0_2 = (v0_4);
    if ((v0_4 == 0)) goto L_C0D27AE;
    (((struct o15_uchar *)(v0_0))->v) = v0_3;
    *(unsigned short *)((v0_0 + 0x1C)) = 0x78;
    goto L_C0D26FA;
    L_C0D2690:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    (((struct o15_uchar *)(v0_0))->v) = v0_1;
    (((struct o16_uchar *)(v0_0))->v) = v0_1;
    (((struct oA8_uchar *)(v0_0))->v) = v0_3;
    *(unsigned short *)((v0_0 + 0x1C)) = 0x78;
    *(unsigned short *)((v0_0 + 0x1E)) = v0_1;
    (((struct oAA_uchar *)(v0_0))->v) = v0_3;
    (((struct oAB_uchar *)(v0_0))->v) = 0x2;
    (((struct o1A_uchar *)(v0_0))->v) = v0_1;
    (((struct o22_ushort *)(v0_0))->v) = v0_1;
    v0_2 = ((int (*)(int, int, int))(FUN_0c187798))(v0_6, v0_4, v0_5);
    (((struct o1B_uchar *)(v0_0))->v) = v0_1;
    goto L_C0D26D2;
}

int FUN_0c10df44(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = FUN_0c104db8();
    if (t0 != 0) {
        return ((int (*)(int, int, int, int))(0xC10DB4C))(a4, a5, a6, a7);
    }
    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    return t0;
                }
                FUN_0c10e0c2(a4);
                t0 = *(signed char *)((a4 + 0x17));
                switch (t0) {
                case 0:
                    if ((int)((((struct o20_short *)(a4))->v)) > 0) {
                        (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) - 1);
                    } else {
                        FUN_0c117944(0xE4);
                    }
                    break;
                case 1:
                    FUN_0c117944(0xF3);
                    (((struct o20_ushort *)(a4))->v) = 0x78;
                    (((struct o17_uchar *)(a4))->v) = 0x0;
                    break;
                case 2:
                    FUN_0c117944(0xF5);
                    (((struct o20_ushort *)(a4))->v) = 0x78;
                    (((struct o17_uchar *)(a4))->v) = 0x0;
                    break;
                }
                t0 = FUN_0c05f254(0x101);
                if (t0 == 0) {
                    return ((int (*)(int, int, int, int))(0xC10DE2C))(a4, a5, a6, a7);
                }
                return t0;
            }
            *(unsigned char *)0xC473971 = (FUN_0c105068((unsigned char)(*(signed char *)0xC473971), 0x7));
            t0 = FUN_0c104d70();
            t1 = t0;
            if (t0 != 0) {
                (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                (((struct o17_uchar *)(a4))->v) = 0x0;
                (((struct o20_ushort *)(a4))->v) = 0x0;
                t1 = 0x20;
            }
            return t1;
        }
    } else {
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        (((struct o17_uchar *)(a4))->v) = 0x0;
    }
    t0 = *(signed char *)((a4 + 0x17));
    if (t0 != 0) {
        if (t0 != 1) {
            t1 = t0;
            if (t0 != 2) {
            } else {
                t0 = FUN_0c104cc8(0x3FCF);
                t1 = t0;
                if (t0 != 0) {
                    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                    (((struct o17_uchar *)(a4))->v) = 0x0;
                    t1 = 0x17;
                }
            }
            return t1;
        }
        t0 = FUN_0c117d54();
        if ((int)t0 < 0) {
            (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
            return FUN_0c117e76();
        }
        return t0;
    }
    (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
    return (FUN_0c117944(0xE4));
}

int FUN_0c12ff1c(int a4, int a5, int a6, int a7, float f4, float f5)
{
    int stk[3];
    register int t16;

    register int R1;
    register int R2;
    register int R3;
    register float F0;
    register float F2;
    register float F3;
    register float F14;
    register float F15;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register float w0_0;
    register float w0_1;
    v0_1 = a4;
    v0_2 = a5;
    v0_3 = a7;
    w0_0 = f4;
    w0_1 = f5;
    v0_0 = (v0_1);
    if (((*(signed char *)((v0_1 + 0x14))) == 0)) goto L_C12FF34;
    v0_4 = ((FUN_0c03f346(v0_0, v0_2, a6, v0_3)));
    L_C13008E:;
    return v0_4;
    L_C12FF34:;
    v0_4 = (signed char)(((int (*)(int, int, int, int, float, float))(0xC12FED4))(v0_0, v0_2, a6, v0_3, w0_0, w0_1)) == 0;
    if (v0_4) goto L_C130010;
    if (!(((*(signed char *)(((*(int *)((v0_0 + 0x10))) + 0x14))) == 0))) goto L_C13004E;
    v0_4 = *(short *)((v0_0 + 0x1E));
    *(unsigned short *)((v0_0 + 0x1E)) = (v0_4 + 0x1);
    if (((int)(short)(v0_4 + 0x1) > (int)0x3)) goto L_C13004E;
    *(volatile signed char *)((v0_0 + 0x1));
    FUN_0c187798(((int)stk + 0), v0_2);
    (((struct o4C_float *)(v0_0))->v) = ((*(float *)((t16 + 0x0))) - ((((struct o28_float *)(v0_0))->v)));
    (((struct o50_float *)(v0_0))->v) = (((((struct o4_float *)(t16))->v)) - ((((struct o2C_float *)(v0_0))->v)));
    (((struct o54_float *)(v0_0))->v) = (((((struct o8_float *)(t16))->v)) - ((((struct o30_float *)(v0_0))->v)));
    FUN_0c17c450((v0_0 + 0x4C));
    if ((((((struct o54_float *)(v0_0))->v)) != 0.0f)) goto L_C12FFB2;
    (((struct o54_float *)(v0_0))->v) = 9.99999975e-06f;
    goto L_C12FFB2;
    L_C13004E:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    v0_4 = (0x14);
    goto L_C13008E;
    L_C12FFB2:;
    w0_0 = (((struct o4C_float *)(v0_0))->v);
    w0_1 = (((struct o54_float *)(v0_0))->v);
    w0_1 = (w0_1 * w0_1);
    w0_1 = w0_1 + w0_0 * w0_0;
    v0_4 = ((int (*)(int, int, int, int, float, float))(math_atan2_angle16))(v0_1, v0_2, 0x0, v0_3, (-((((struct o50_float *)(v0_0))->v))), _builtin_sqrtf(w0_1));
    *(unsigned int *)((v0_0 + 0x34)) = v0_4;
    v0_1 = (0xFA4);
    if (((int)v0_4 <= (int)0xFA4)) goto L_C12FFDC;
    *(unsigned int *)((v0_0 + 0x34)) = v0_1;
    L_C12FFDC:;
    v0_4 = (0x54);
    v0_1 = (0xFFFFF05C);
    if (((int)(*(int *)((v0_0 + 0x34))) >= (int)0xFFFFF05C)) goto L_C12FFE8;
    *(unsigned int *)((v0_0 + 0x34)) = v0_1;
    L_C12FFE8:;
    *(unsigned int *)((v0_0 + 0x38)) = (((int (*)(int, int, int, int, float, float))(math_atan2_angle16))(v0_1, v0_2, 0x0, v0_3, ((((struct o4C_float *)(v0_0))->v)), (*(float *)((v0_0 + v0_4)))));
    (((struct o4C_float *)(v0_0))->v) = (((((struct o4C_float *)(v0_0))->v)) * 37.0f);
    (((struct o50_float *)(v0_0))->v) = (((((struct o50_float *)(v0_0))->v)) * 37.0f);
    (((struct o54_float *)(v0_0))->v) = (((((struct o54_float *)(v0_0))->v)) * 37.0f);
    L_C130010:;
    if ((((int)((int)(*(short *)((v0_0 + 0x1C))) % (int)0x1E)) != 0)) goto L_C130026;
    FUN_0c07e2f4(v0_0, 0x63);
    L_C130026:;
    math_vec3_accumulate((v0_0 + 0x28), (v0_0 + 0x4C));
    v0_1 = (((struct oC4_int *)(v0_0))->v);
    (((struct o78_uint *)(v0_1))->v) = (((((struct o78_int *)(v0_1))->v)) + 0x1555);
    v0_1 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_1 + 0x1);
    v0_4 = ((short)(v0_1 + 0x1));
    if (((int)(short)(v0_1 + 0x1) < (int)0x384)) goto L_C13008E;
    goto L_C13004E;
}

int FUN_0c1342b8(int a4)
{
    register int t0;

    *(unsigned short *)(((0x12A + a4) + 0x2)) = 0x0;
    (((struct o12A_ushort *)(a4))->v) = 0x0;
    (((struct o12E_ushort *)(a4))->v) = 0x0;
    (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) + (((-((((struct o40_float *)(a4))->v))) + 0.100000001f) / 10.0f));
    (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) + (((-((((struct o44_float *)(a4))->v))) + 0.100000001f) / 10.0f));
    (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + (((-((((struct o48_float *)(a4))->v))) + 0.100000001f) / 10.0f));
    t0 = FUN_0c1341de(a4);
    if (t0 != 0) {
        (((struct o15_uchar *)(a4))->v) = 0x1;
        (((struct o16_uchar *)(a4))->v) = 0x0;
        (((struct o17_uchar *)(a4))->v) = t0;
        (((struct o12E_ushort *)(a4))->v) = 0xF0;
    } else {
        t0 = FUN_0c134274(a4);
        if (t0 != 0) {
            (((struct o15_uchar *)(a4))->v) = 0x2;
            (((struct o16_uchar *)(a4))->v) = 0x0;
            (((struct o17_uchar *)(a4))->v) = t0;
        } else {
            t0 = FUN_0c13428a(a4);
            if (t0 != 0) {
                (((struct o15_uchar *)(a4))->v) = 0x3;
                (((struct o16_uchar *)(a4))->v) = 0x0;
                (((struct o17_uchar *)(a4))->v) = t0;
            }
        }
    }
    return FUN_0c133d90(a4);
}
