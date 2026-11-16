/* Straight-line functions with calls and guards (batch gen_mv): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o126_uchar { char p[0x126]; unsigned char v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o404_int { char p[0x404]; int v; };
struct o420_float { char p[0x420]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c0588bc(int, int, int, int, int, int);
extern int FUN_0c150010();
int FUN_0c1502e8(int, int, int, int, int, int);
int FUN_0c17c130(int, int, int);
int FUN_0c18778c(int, float);
int FUN_0c187798(int, int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c14f734(int a4, int a5, int a6, int a7);
int FUN_0c1689ec(int a4, int a5, int a6, int a7);
int FUN_0c0d7488(int a4, int a5, int a6, int a7);

int FUN_0c14f734(int a4, int a5, int a6, int a7)
{
    int stk[5];
    register int t2;
    register int t23;
    register int t4;
    register int t8;
    register int t10;
    register float u14;
    register int t18;

    t2 = (int)((int)(unsigned short)a6 % (int)(*(signed char *)((0xC20324C + (*(signed char *)((0xC53249A + ((short)(signed char)a7 * (short)0x3938))))))));
    t23 = t2;
    if (t2 == 0) {
        FUN_0c187798(a4, a5, a6);
        t4 = *(int *)0xC542260;
        FUN_0c17c130(((int)stk + 8), ((int)stk + 8), (((((0x7 & ((unsigned int)t4 >> 1)) << 1) + (0x7 & ((unsigned int)t4 >> 1))) << 2) + 0xC20318C));
        t8 = *(int *)0xC542260;
        *(int *)((int)stk + 4) = (((((t8 & 0x3) << 1) + (t8 & 0x3)) << 2) + 0xC2031EC);
        *(int *)((int)stk + 0) = 0xC202D30;
        t10 = FUN_0c1502e8(0x2, 0x1, 0x1, (((int)stk + 0) + 0x8), 0xC202D30, (((((t8 & 0x3) << 1) + (t8 & 0x3)) << 2) + 0xC2031EC));
        t23 = t10;
        if (t10 != 0) {
            if ((unsigned short)a6 == 0) {
                (((struct o420_float *)(t10))->v) = 3.0f;
            } else {
                (((struct o420_float *)(t10))->v) = ((float)(unsigned short)a6 / (1.0f + 1.0f));
                if (((float)(unsigned short)a6 / (1.0f + 1.0f)) > (1.0f + 1.0f)) {
                    (((struct o420_float *)(t10))->v) = (1.0f + 1.0f);
                }
                u14 = (1.0f + 1.0f);
            }
            *(volatile int *)((t10 + 0xC4));
            FUN_0c18778c(t10, u14);
            *(unsigned short *)((t18 + 0x1E)) = 0x0;
            t23 = 0x0;
        }
    }
    return t23;
}

int FUN_0c1689ec(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    register int t2;

    t2 = *(signed char *)((a4 + 0x14));
    if (t2 != 0) {
        if (t2 != 1) {
            if (t2 != 2) {
                return t2;
            }
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        if (((*(signed char *)((a4 + 0x131))) == 0) && (t0 = (((struct o404_int *)(a4))->v), t0 == 0)) {
            FUN_0c0588bc((a4 + 0x40), 0xC2A3798, 0xC2A378C, (*(short *)((a4 + 0x1C))), 0x3C, 0x0);
            FUN_0c17c130((a4 + 0x28), (a4 + 0x28), (a4 + 0x4C));
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
            t2 = (short)(t0 + 0x1);
            if ((int)(short)(t0 + 0x1) > (int)0x3C) {
                (((struct o14_uchar *)(a4))->v) = 0x2;
                t2 = 0x14;
            }
            t0 = t2;
        } else {
            t2 = ((int (*)(int, int, int, float, float, float, float))(FUN_0c150010))((a4 + 0x28), a5, a6, 1.0f, 1.0f, 1.0f, 1.0f);
            (((struct o14_uchar *)(a4))->v) = 0x2;
            t0 = 0x14;
        }
        return t0;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct oAC_ushort *)(a4))->v) = 0x1F;
    (((struct oA9_uchar *)(a4))->v) = 0x21;
    FUN_0c187798(a4, a5, a6);
    (((struct o4C_float *)(a4))->v) = ((math_sin_angle16((*(int *)((a4 + 0x38))))) * 10.0f);
    (((struct o50_float *)(a4))->v) = 0.0f;
    (((struct o54_float *)(a4))->v) = ((math_cos_angle16((*(int *)((a4 + 0x38))))) * 10.0f);
    FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x0, 0x31, (*(int *)0xC4B40CC));
    if (((*(signed char *)((a4 + 0x131))) == 0) && (t1 = (((struct o404_int *)(a4))->v), t1 == 0)) {
        FUN_0c0588bc((a4 + 0x40), 0xC2A3798, 0xC2A378C, (*(short *)((a4 + 0x1C))), 0x3C, 0x0);
        FUN_0c17c130((a4 + 0x28), (a4 + 0x28), (a4 + 0x4C));
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
        t1 = (short)(t0 + 0x1);
        if ((int)(short)(t0 + 0x1) > (int)0x3C) {
            (((struct o14_uchar *)(a4))->v) = 0x2;
            t1 = 0x14;
        }
        t0 = t1;
    } else {
        t1 = ((int (*)(int, float, float, float, float))(FUN_0c150010))((a4 + 0x28), 1.0f, 1.0f, 1.0f, 1.0f);
        (((struct o14_uchar *)(a4))->v) = 0x2;
        t0 = 0x14;
    }
    return t0;
}

int FUN_0c0d7488(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    register int t2;
    register int t3;
    register int t4;

    t4 = *(signed char *)((a4 + 0x14));
    if (t4 != 0) {
        if (t4 != 1) {
            t4 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t4 - 1);
            if ((short)(t4 - 1) == 0) {
                return FUN_0c03f346(a4, a5, 0x1, a7);
            }
            return (short)(t4 - 1);
        }
        t4 = *(signed char *)((a4 + 0x2));
        if ((t4 == 7) || ((t4 == 8) || ((t4 == 9) || ((t4 == 10) || (t4 == 11))))) {
            *(unsigned short *)((a4 + 0x1C)) = 0x12C;
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        }
        if (((int)(*(signed char *)0xC54223C) > 0) && (t0 = *(signed char *)((a4 + 0x2)), (int)t0 < (int)0xC)) {
            *(unsigned short *)((a4 + 0x1C)) = 0x12C;
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        }
        t0 = 0x44;
        if ((int)(*(signed char *)0xC54223C) > (int)0x1) {
            t4 = *(signed char *)((a4 + 0x2));
            t0 = t4;
            if ((int)t4 < (int)0x10) {
                *(unsigned short *)((a4 + 0x1C)) = 0x1;
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t0 = 0x14;
            }
        }
        return t0;
    }
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    *(volatile signed char *)((a4 + 0x2));
    FUN_0c187798(a4, a5, 0x1);
    *(unsigned int *)((t3 + 0x38)) = (int)(((float)(*(int *)((0xC2872EC + ((*(signed char *)((t3 + 0x2))) << 2)))) * 65536.0f) / 360.0f);
    (((struct o126_uchar *)(t3))->v) = 0x2;
    (((struct o14_uchar *)(t3))->v) = ((*(signed char *)((t3 + 0x14))) + 0x1);
    t0 = *(signed char *)((t3 + 0x2));
    if ((t0 == 7) || ((t0 == 8) || ((t0 == 9) || ((t0 == 10) || (t0 == 11))))) {
        *(unsigned short *)((t3 + 0x1C)) = 0x12C;
        (((struct o14_uchar *)(t3))->v) = ((*(signed char *)((t3 + 0x14))) + 0x1);
    }
    if (((int)(*(signed char *)0xC54223C) > 0) && (t1 = *(signed char *)((t3 + 0x2)), (int)t1 < (int)0xC)) {
        *(unsigned short *)((t3 + 0x1C)) = 0x12C;
        (((struct o14_uchar *)(t3))->v) = ((*(signed char *)((t3 + 0x14))) + 0x1);
    }
    t0 = 0x44;
    if ((int)(*(signed char *)0xC54223C) > (int)t2) {
        t1 = *(signed char *)((t3 + 0x2));
        t4 = t1;
        if ((int)t1 < (int)0x10) {
            *(unsigned short *)((t3 + 0x1C)) = t2;
            (((struct o14_uchar *)(t3))->v) = ((*(signed char *)((t3 + 0x14))) + 0x1);
            t4 = 0x14;
        }
        t0 = t4;
    }
    return t0;
}
