/* Straight-line functions with calls and guards (batch gen_kb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o118_int { char p[0x118]; int v; };
struct o12C_ushort { char p[0x12C]; unsigned short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o26_short { char p[0x26]; short v; };
struct o26_ushort { char p[0x26]; unsigned short v; };
struct o374B_uchar { char p[0x374B]; unsigned char v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o404_int { char p[0x404]; int v; };
struct o42C_short { char p[0x42C]; short v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oDC_int { char p[0xDC]; int v; };
struct oE0_int { char p[0xE0]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c037bf6(int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c07043c(int, int, int, float, float, float, float);
int FUN_0c07ce58(int, int);
int FUN_0c07d774(int);
int FUN_0c07e2f4(int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c0bb70c(int);
int FUN_0c0bb922(int);
int FUN_0c0bc25e(void);
int FUN_0c15f9b4(int, int, int, int);
int FUN_0c17c130(int, int, int);
int FUN_0c187798(int);
int FUN_0c0c09d0(int a4);
int FUN_0c1682b0(int a4, int a5, int a6, int a7, float f4);
int FUN_0c1687dc(int a4, int a5, int a6, int a7, float f4);
int FUN_0c047508(int a4, int a5, int a6, int a7);
int FUN_0c0720f8(int a4);

int FUN_0c0c09d0(int a4)
{
    int stk[1];

    register int R3;
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
    v0_3 = a4;
    v0_0 = *(int *)0xC47245C;
    *(unsigned int *)0xC47245C = (v0_0 + 0x2);
    v0_0 = *(short *)((((v0_0 + 0x2) - 2) + 0x0));
    v0_9 = FUN_0c0bb922(v0_3);
    *(unsigned short *)(((int)stk + 0)) = (FUN_0c0bb70c(v0_9));
    v0_7 = *(signed char *)((0xC471ACC + ((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264)));
    v0_2 = ((unsigned char)v0_7);
    v0_5 = (0xC47245C);
    v0_4 = (v0_3);
    v0_8 = (v0_0);
    v0_0 = (0xC471ACC);
    v0_1 = (0xC472462);
    v0_3 = (0x0);
    v0_6 = (0xC472460);
    v0_9 = ((FUN_0c0bb70c((0x8000 + v0_9))));
    if (((unsigned char)v0_7 == 0)) goto L_C0C0A2C;
    if ((v0_2 == 1)) goto L_C0C0A92;
    if ((v0_2 == 2)) goto L_C0C0B14;
    L_C0C0B2A:;
    return v0_2;
    L_C0C0B14:;
    *(unsigned short *)((v0_6 + 0x0)) = v0_3;
    v0_2 = FUN_0c0bc25e();
    *(unsigned int *)(((((unsigned short)(unsigned char)(*(signed char *)((v0_1 + 0x0))) * (unsigned short)0x264) + v0_0) + 0x8)) = (*(int *)((v0_5 + 0x0)));
    v0_2 = (v0_2);
    goto L_C0C0B2A;
    L_C0C0A92:;
    *(unsigned short *)((v0_6 + 0x0)) = v0_3;
    v0_3 = (0x100);
    if ((((((struct o26_short *)((((unsigned short)(unsigned char)(*(signed char *)((v0_1 + 0x0))) * (unsigned short)0x264) + v0_0)))->v)) == 0)) goto L_C0C0AE0;
    v0_2 = (0x42C);
    v0_3 = ((((((struct o42C_short *)(v0_4))->v)) | (v0_3 + (*(short *)(((int)stk + 0))))));
    L_C0C0AE8:;
    *(unsigned short *)((v0_4 + v0_2)) = v0_3;
    v0_2 = *(signed char *)((v0_1 + 0x0));
    v0_3 = *(short *)(((((unsigned short)(unsigned char)v0_2 * (unsigned short)0x264) + v0_0) + 0x18));
    *(unsigned short *)(((((unsigned short)(unsigned char)v0_2 * (unsigned short)0x264) + v0_0) + 0x18)) = (v0_3 - 1);
    v0_2 = ((unsigned short)(v0_3 - 1));
    v0_4 = (0x264);
    if (((unsigned short)(v0_3 - 1) != 0)) goto L_C0C0B2A;
    v0_1 = *(signed char *)((v0_1 + 0x0));
    *(unsigned char *)(((((unsigned short)(unsigned char)v0_1 * (unsigned short)v0_4) + v0_0) + 0x0)) = ((*(signed char *)(((((unsigned short)(unsigned char)v0_1 * (unsigned short)v0_4) + v0_0) + 0x0))) + 0x1);
    goto L_C0C0B2A;
    L_C0C0AE0:;
    v0_2 = (0x42C);
    v0_3 = ((((((struct o42C_short *)(v0_4))->v)) | (v0_9 + v0_3)));
    goto L_C0C0AE8;
    L_C0C0A2C:;
    *(unsigned short *)((v0_6 + 0x0)) = v0_3;
    if (((short)v0_8 != 0)) goto L_C0C0A36;
    v0_8 = (0x1);
    L_C0C0A36:;
    v0_2 = ((short)v0_8);
    if (((int)(short)v0_8 <= 0)) goto L_C0C0A62;
    *(unsigned short *)(((((unsigned short)(unsigned char)(*(signed char *)((v0_1 + 0x0))) * (unsigned short)0x264) + v0_0) + 0x18)) = v0_8;
    (((struct o26_ushort *)((((unsigned short)(unsigned char)(*(signed char *)((v0_1 + 0x0))) * (unsigned short)0x264) + v0_0)))->v) = 0x1;
    L_C0C0A80:;
    v0_2 = *(signed char *)((v0_1 + 0x0));
    *(unsigned char *)(((((unsigned short)(unsigned char)v0_2 * (unsigned short)0x264) + v0_0) + 0x0)) = ((*(signed char *)(((((unsigned short)(unsigned char)v0_2 * (unsigned short)0x264) + v0_0) + 0x0))) + 0x1);
    goto L_C0C0A92;
    L_C0C0A62:;
    *(unsigned short *)(((((unsigned short)(unsigned char)(*(signed char *)((v0_1 + 0x0))) * (unsigned short)0x264) + v0_0) + 0x18)) = (-v0_2);
    (((struct o26_ushort *)((((unsigned short)(unsigned char)(*(signed char *)((v0_1 + 0x0))) * (unsigned short)0x264) + v0_0)))->v) = v0_3;
    goto L_C0C0A80;
}

int FUN_0c1682b0(int a4, int a5, int a6, int a7, float f4)
{
    int t0;
    register int t1;
    int t2;
    register int t3;

    t3 = *(signed char *)((a4 + 0x14));
    if (t3 != 0) {
        if (t3 != 1) {
            if (t3 == 2) {
                return FUN_0c03f346(a4, a5, a6, a7);
            }
            return t3;
        }
        t3 = (((struct oC4_int *)(a4))->v);
        (((struct o80_uint *)(t3))->v) = (((((struct o80_int *)(t3))->v)) + 0x800);
        t3 = (((struct oC8_int *)(a4))->v);
        (((struct o80_uint *)(t3))->v) = (((((struct o80_int *)(t3))->v)) - 0x800);
        if (((*(signed char *)((a4 + 0x131))) == 0) && (t0 = (((struct o404_int *)(a4))->v), t0 == 0)) {
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
            if ((int)(short)((t0 - 1) + 0x1) <= 0) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                return 0x14;
            }
            t0 = *(short *)((a4 + 0x1E));
            *(unsigned short *)((a4 + 0x1E)) = (t0 + 0x1);
            if ((int)(short)((t0 + 0x1) - 1) < (int)0xA) {
                (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) + 0.100000001f);
                (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) + 0.100000001f);
                (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + 0.100000001f);
            }
            return FUN_0c17c130((a4 + 0x28), (a4 + 0x28), (a4 + 0x4C));
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x0, 0x3C, (*(int *)0xC4B40CC));
        FUN_0c03744a(((((struct oC8_int *)(a4))->v)), 0x1, 0x3C, (*(int *)0xC4B40CC));
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0x1F;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        FUN_0c187798(0x1);
        *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = t1;
        *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0xF;
        *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = t1;
        *(unsigned short *)((((((struct oC8_int *)(a4))->v)) + 0x6)) = 0xF;
        (((struct o12C_ushort *)(a4))->v) = 0x0;
        (((struct o12E_ushort *)(a4))->v) = 0xF0;
        t0 = (((struct oC4_int *)(a4))->v);
        (((struct o80_uint *)(t0))->v) = (((((struct o80_int *)(t0))->v)) + 0x800);
        t0 = (((struct oC8_int *)(a4))->v);
        (((struct o80_uint *)(t0))->v) = (((((struct o80_int *)(t0))->v)) - 0x800);
        if (((*(signed char *)((a4 + 0x131))) == 0) && (t2 = (((struct o404_int *)(a4))->v), t2 == 0)) {
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
            if ((int)(short)((t0 - 1) + 0x1) <= 0) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                return 0x14;
            }
            t0 = *(short *)((a4 + 0x1E));
            *(unsigned short *)((a4 + 0x1E)) = (t0 + 0x1);
            if ((int)(short)((t0 + 0x1) - 1) < (int)0xA) {
                (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) + 0.100000001f);
                (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) + 0.100000001f);
                (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + 0.100000001f);
            }
            return FUN_0c17c130((a4 + 0x28), (a4 + 0x28), (a4 + 0x4C));
        }
    }
    FUN_0c15f9b4((*(signed char *)((a4 + 0x1))), (a4 + 0x28), (a4 + 0x34), 0x3);
    (((struct o14_uchar *)(a4))->v) = 0x2;
    return 0x14;
}

int FUN_0c1687dc(int a4, int a5, int a6, int a7, float f4)
{
    int t0;
    register int t1;
    int t2;
    register int t3;

    t3 = *(signed char *)((a4 + 0x14));
    if (t3 != 0) {
        if (t3 != 1) {
            if (t3 == 2) {
                return FUN_0c03f346(a4, a5, a6, a7);
            }
            return t3;
        }
        t3 = (((struct oC4_int *)(a4))->v);
        (((struct o80_uint *)(t3))->v) = (((((struct o80_int *)(t3))->v)) + 0x800);
        t3 = (((struct oC8_int *)(a4))->v);
        (((struct o80_uint *)(t3))->v) = (((((struct o80_int *)(t3))->v)) - 0x800);
        if (((*(signed char *)((a4 + 0x131))) == 0) && (t0 = (((struct o404_int *)(a4))->v), t0 == 0)) {
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
            if ((int)(short)((t0 - 1) + 0x1) <= 0) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                return 0x14;
            }
            t0 = *(short *)((a4 + 0x1E));
            *(unsigned short *)((a4 + 0x1E)) = (t0 + 0x1);
            if ((int)(short)((t0 + 0x1) - 1) < (int)0xA) {
                (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) + 0.100000001f);
                (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) + 0.100000001f);
                (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + 0.100000001f);
            }
            return FUN_0c17c130((a4 + 0x28), (a4 + 0x28), (a4 + 0x4C));
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x0, 0x3D, (*(int *)0xC4B40CC));
        FUN_0c03744a(((((struct oC8_int *)(a4))->v)), 0x1, 0x3D, (*(int *)0xC4B40CC));
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0x1F;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        FUN_0c187798(0x1);
        *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = t1;
        *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0xF;
        *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = t1;
        *(unsigned short *)((((((struct oC8_int *)(a4))->v)) + 0x6)) = 0xF;
        (((struct o12C_ushort *)(a4))->v) = 0x0;
        (((struct o12E_ushort *)(a4))->v) = 0xF0;
        t0 = (((struct oC4_int *)(a4))->v);
        (((struct o80_uint *)(t0))->v) = (((((struct o80_int *)(t0))->v)) + 0x800);
        t0 = (((struct oC8_int *)(a4))->v);
        (((struct o80_uint *)(t0))->v) = (((((struct o80_int *)(t0))->v)) - 0x800);
        if (((*(signed char *)((a4 + 0x131))) == 0) && (t2 = (((struct o404_int *)(a4))->v), t2 == 0)) {
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
            if ((int)(short)((t0 - 1) + 0x1) <= 0) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                return 0x14;
            }
            t0 = *(short *)((a4 + 0x1E));
            *(unsigned short *)((a4 + 0x1E)) = (t0 + 0x1);
            if ((int)(short)((t0 + 0x1) - 1) < (int)0xA) {
                (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) + 0.100000001f);
                (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) + 0.100000001f);
                (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + 0.100000001f);
            }
            return FUN_0c17c130((a4 + 0x28), (a4 + 0x28), (a4 + 0x4C));
        }
    }
    FUN_0c15f9b4((*(signed char *)((a4 + 0x1))), (a4 + 0x28), (a4 + 0x34), 0x2);
    (((struct o14_uchar *)(a4))->v) = 0x2;
    return 0x14;
}

int FUN_0c047508(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, 0x1E, a6, a7);
        }
    } else {
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        *(unsigned short *)((a4 + 0x1C)) = 0x1E;
        *(unsigned short *)((a4 + 0x1E)) = 0x0;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    t1 = (short)(t0 - 1);
    if ((short)(t0 - 1) != 0) {
    } else {
        *(unsigned short *)((a4 + 0x1C)) = 0x1E;
        t0 = *(short *)((a4 + 0x1E));
        if (t0 != 0) {
            t2 = t0;
            if (t0 != 1) {
            } else {
                *(unsigned short *)((a4 + 0x1E)) = 0x0;
                t0 = *(signed char *)0xC541F62;
                if ((unsigned char)t0 != 0) {
                    if ((unsigned char)t0 != 1) {
                        t0 = ((unsigned char)(*(signed char *)0xC40F820) + 0x32);
                    } else {
                        t0 = ((unsigned char)(*(signed char *)0xC40F820) + 0x2D);
                    }
                    t3 = t0;
                } else {
                    t3 = ((unsigned char)(*(signed char *)0xC40F820) + 0x28);
                }
                t0 = (((struct oDC_int *)(a4))->v);
                FUN_0c03744a(t0, 0x0, t3, (*(int *)0xC4B410C));
                *(unsigned char *)((t0 + 0x0)) = 0x1;
                *(unsigned short *)((t0 + 0x6)) = 0x1F;
                (((struct o6C_float *)(t0))->v) = -220.0f;
                (((struct o70_float *)(t0))->v) = -180.0f;
                t0 = *(signed char *)0xC541F62;
                if ((unsigned char)t0 != 0) {
                    if ((unsigned char)t0 != 1) {
                        t0 = ((unsigned char)(*(signed char *)0xC40F822) + 0x32);
                    } else {
                        t0 = ((unsigned char)(*(signed char *)0xC40F822) + 0x2D);
                    }
                    t3 = t0;
                } else {
                    t3 = ((unsigned char)(*(signed char *)0xC40F822) + 0x28);
                }
                t0 = (((struct oE0_int *)(a4))->v);
                FUN_0c03744a(t0, 0x0, t3, (*(int *)0xC4B410C));
                *(unsigned char *)((t0 + 0x0)) = 0x1;
                *(unsigned short *)((t0 + 0x6)) = 0x1F;
                (((struct o6C_float *)(t0))->v) = 220.0f;
                (((struct o70_float *)(t0))->v) = -180.0f;
                t2 = 0x70;
            }
            t0 = t2;
        } else {
            *(unsigned short *)((a4 + 0x1E)) = 0x1;
            *(unsigned char *)((((((struct oDC_int *)(a4))->v)) + 0x0)) = 0x0;
            *(unsigned char *)((((((struct oE0_int *)(a4))->v)) + 0x0)) = 0x0;
            t0 = 0xE0;
        }
        t1 = t0;
    }
    return t1;
}

int FUN_0c0720f8(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u6;
    register float u7;
    register float u8;
    register float u9;

    (((struct o374B_uchar *)(a4))->v) = 0x1;
    FUN_0c037bf6(a4);
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    t1 = (short)(t0 - 1);
    if ((int)(short)(t0 - 1) > 0) {
    } else {
        FUN_0c07ce58(a4, ((((short)(*(signed char *)((a4 + 0x2))) * (short)0x78) + 0xC25B194) + 0x30));
        *(unsigned int *)((a4 + 0x38)) = (FUN_0c07d774(a4));
        t0 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t0, 0x2, 0xB, (t0), 0x2, 0xB);
        t0 = *(int *)(((0x118 + a4) + 0x4));
        t2 = (((struct o118_int *)(a4))->v);
        (((struct oA0_float *)(t0))->v) = 1.0f;
        (((struct o9C_float *)(t0))->v) = 1.0f;
        (((struct oA0_float *)(t2))->v) = 1.0f;
        (((struct o9C_float *)(t2))->v) = 1.0f;
        t0 = *(int *)(((0x118 + a4) + 0x4));
        t2 = (((struct o118_int *)(a4))->v);
        (((struct o98_float *)(t0))->v) = 1.0f;
        (((struct o98_float *)(t2))->v) = 1.0f;
        (((struct o94_float *)(t0))->v) = 1.0f;
        (((struct o94_float *)(t2))->v) = 1.0f;
        t0 = *(signed char *)((a4 + 0x2));
        t3 = t2;
        t4 = (0x118 + a4);
        u0 = 35.0f;
        u1 = -3.5f;
        u2 = 500.0f;
        if (t0 != 3) {
            t3 = t2;
            t4 = (0x118 + a4);
            u3 = 45.0f;
            u4 = -2.79999995f;
            u5 = 500.0f;
            if (t0 != 5) {
                if (t0 != 7) {
                    if (t0 != 4) {
                        if (t0 != 9) {
                            u6 = 35.0f;
                            u7 = ((((struct o8_float *)0xC072334)->v));
                            u8 = 500.0f;
                        } else {
                            u6 = ((((struct o4_float *)0xC072334)->v));
                            u7 = -2.79999995f;
                            u8 = ((((struct o0_float *)0xC072334)->v));
                        }
                        u9 = u6;
                        u6 = u7;
                        u7 = u8;
                    } else {
                        u9 = ((((struct o4_float *)0xC072334)->v));
                        u6 = -2.79999995f;
                        u7 = ((((struct o0_float *)0xC072334)->v));
                    }
                    t0 = t2;
                    t2 = (0x118 + a4);
                    u8 = u9;
                    u9 = u6;
                    u6 = u7;
                } else {
                    FUN_0c07e2f4(a4, 0x17);
                    u8 = 35.0f;
                    u9 = -3.5f;
                    u6 = 500.0f;
                }
                t3 = t0;
                t4 = t2;
                u3 = u8;
                u4 = u9;
                u5 = u6;
            }
            u0 = u3;
            u1 = u4;
            u2 = u5;
        }
        FUN_0c07043c(a4, t3, t4, u0, u1, u2, 1.0f);
        *(unsigned short *)((a4 + 0x1C)) = 0x5;
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        t1 = 0x16;
    }
    return t1;
}
