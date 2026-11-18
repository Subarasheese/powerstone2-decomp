/* game/unsorted: functions 0C15F1A4-0C15FCF8, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o168_float { char p[0x168]; float v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o80_short { char p[0x80]; short v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int math_mat_get_translate(int, int);
int thunk_FUN_0c058310(int, int);
int FUN_0c0588bc(int, int, int, int, int, int);
int FUN_0c058a6e(int, int, int, int, int, int);
float math_cos_angle16(int);
int FUN_0c179ac0(void);
float math_sin_angle16(int);
int FUN_0c18778c(void);
extern int FUN_0c187798();
int FUN_0c15f1a4(int a4, int a5, int a6, int a7);
int FUN_0c15f2c0(int a4, int a5, int a6);
int FUN_0c15f394(int a4, int a5);
int FUN_0c15f3cc(int a4, int a5, int a6);
int FUN_0c15f48a(int a4, int a5);
int FUN_0c15f4bc(int a4, int a5, int a6, int a7, float f4, float f5);
int FUN_0c15f60a(int a4);
int FUN_0c15f6ec(int a4, int a5, int a6, int a7);
int FUN_0c15fb90(int a4);

int FUN_0c15f1a4(int a4, int a5, int a6, int a7)
{
    register int t0;
    register float u0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o15_uchar *)(a4))->v) = 0x0;
        *(unsigned short *)((a4 + 0x1E)) = 0x6;
        (((struct oBC_float *)(a4))->v) = 1.0f;
        (((struct oB8_float *)(a4))->v) = 1.0f;
        (((struct oB4_float *)(a4))->v) = 1.0f;
    }
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (!(t0 != 1)) {
            (((struct oB4_float *)(a4))->v) = (((((struct oB4_float *)(a4))->v)) - 0.166666672f);
            if (!(((((struct oB4_float *)(a4))->v)) > 0.0f)) {
                return FUN_0c03f346(a4, a5, a6, a7);
            }
            u0 = (((struct oB4_float *)(a4))->v);
            (((struct oBC_float *)(a4))->v) = u0;
            (((struct oB8_float *)(a4))->v) = u0;
        }
    } else {
        t0 = *(short *)((a4 + 0x1E));
        *(unsigned short *)((a4 + 0x1E)) = (t0 - 1);
        if ((int)(short)(t0 - 1) <= 0) {
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x200);
            if ((int)(*(short *)((a4 + 0x1C))) > 0) {
                *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
                if ((*(signed char *)((a4 + 0x2))) == 0) {
                    FUN_0c15f2c0((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532498), (*(signed char *)((a4 + 0x3))), (*(short *)((a4 + 0x1C))));
                } else {
                    FUN_0c15f3cc((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532498), (*(int *)((a4 + 0x10))), (*(short *)((a4 + 0x1C))));
                }
            }
        }
    }
    u0 = (((struct o40_float *)(a4))->v);
    (((struct o40_float *)(a4))->v) = (u0 + 0.0833333358f);
    if (!(1.0f > (u0 + 0.0833333358f))) {
        (((struct o40_float *)(a4))->v) = 1.0f;
    }
    u0 = (((struct o40_float *)(a4))->v);
    (((struct o48_float *)(a4))->v) = u0;
    (((struct o44_float *)(a4))->v) = u0;
    return 0x44;
}

int FUN_0c15f2c0(int a4, int a5, int a6)
{
    int stk[2];
    register int t1;
    register int t2;
    register int t22;
    register int t9;
    register float u10;

    *(unsigned int *)(((int)stk + 0)) = a5;
    *(unsigned int *)(((int)stk + 4)) = a6;
    t1 = FUN_0c037320(0x4F, (*(int *)0xC4B40CC));
    t2 = FUN_0c03f444(0x5, 0x0, t1);
    t22 = t2;
    if (t2 != 0) {
        FUN_0c03733c(t2, 0x4F, (*(int *)0xC4B40CC));
        (((struct oA8_uchar *)(t2))->v) = 0x1;
        (((struct oAC_ushort *)(t2))->v) = 0x1F;
        (((struct oA9_uchar *)(t2))->v) = 0x21;
        *(unsigned int *)((t2 + 0x10)) = a4;
        (((struct oA4_uint *)(t2))->v) = 0x0;
        thunk_FUN_0c058310(((*(int *)(((((*(int *)(((int)stk + 0))) << 2) + (0xC53255C + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938))) + 0x0))) + 0x28), (t2 + 0x28));
        t9 = *(int *)((a4 + 0x38));
        *(unsigned int *)((t2 + 0x38)) = t9;
        u10 = *(float *)0xC15F3BC;
        (((struct o30_float *)(t2))->v) = (((((struct o30_float *)(t2))->v)) - (((math_cos_angle16(t9)) * u10)));
        (((struct o28_float *)(t2))->v) = (((((struct o28_float *)(t2))->v)) - (((math_sin_angle16((*(int *)((t2 + 0x38))))) * u10)));
        (((struct o2C_float *)(t2))->v) = ((((struct o168_float *)(a4))->v));
        *(unsigned char *)((t2 + 0x2)) = 0x0;
        *(unsigned char *)((t2 + 0x3)) = (*(int *)(((int)stk + 0)));
        *(unsigned char *)((t2 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned int *)((t2 + 0x4)) = 0xC15F1A4;
        (((struct o48_float *)(t2))->v) = 0.0f;
        (((struct o44_float *)(t2))->v) = 0.0f;
        (((struct o40_float *)(t2))->v) = 0.0f;
        t22 = *(short *)(((int)stk + 4));
        *(unsigned short *)((t2 + 0x1C)) = t22;
    }
    return t22;
}

int FUN_0c15f394(int a4, int a5)
{
    return FUN_0c15f2c0(a4, a5, 0x2);
}

int FUN_0c15f3cc(int a4, int a5, int a6)
{
    int stk[2];
    register int t1;
    register int t2;
    register int t20;
    register int t8;
    register float u9;

    *(unsigned int *)(((int)stk + 0)) = a5;
    *(unsigned int *)(((int)stk + 4)) = a6;
    t1 = FUN_0c037320(0x4F, (*(int *)0xC4B40CC));
    t2 = FUN_0c03f444(0x5, 0x0, t1);
    t20 = t2;
    if (t2 != 0) {
        FUN_0c03733c(t2, 0x4F, (*(int *)0xC4B40CC));
        (((struct oA8_uchar *)(t2))->v) = 0x1;
        (((struct oAC_ushort *)(t2))->v) = 0x1F;
        (((struct oA9_uchar *)(t2))->v) = 0x21;
        *(unsigned int *)((t2 + 0x10)) = (*(int *)(((int)stk + 0)));
        (((struct oA4_uint *)(t2))->v) = 0x0;
        math_mat_get_translate((*(int *)(((int)stk + 0))), (t2 + 0x28));
        t8 = *(int *)((a4 + 0x38));
        *(unsigned int *)((t2 + 0x38)) = t8;
        u9 = *(float *)0xC15F4AC;
        (((struct o30_float *)(t2))->v) = (((((struct o30_float *)(t2))->v)) - (((math_cos_angle16(t8)) * u9)));
        (((struct o28_float *)(t2))->v) = (((((struct o28_float *)(t2))->v)) - (((math_sin_angle16((*(int *)((t2 + 0x38))))) * u9)));
        (((struct o2C_float *)(t2))->v) = ((((struct o168_float *)(a4))->v));
        *(unsigned char *)((t2 + 0x2)) = 0x1;
        *(unsigned char *)((t2 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned int *)((t2 + 0x4)) = 0xC15F1A4;
        (((struct o48_float *)(t2))->v) = 0.0f;
        (((struct o44_float *)(t2))->v) = 0.0f;
        (((struct o40_float *)(t2))->v) = 0.0f;
        t20 = *(short *)(((int)stk + 4));
        *(unsigned short *)((t2 + 0x1C)) = t20;
    }
    return t20;
}

int FUN_0c15f48a(int a4, int a5)
{
    return FUN_0c15f3cc(a4, a5, 0x2);
}

int FUN_0c15f4bc(int a4, int a5, int a6, int a7, float f4, float f5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register float u0;
    float u1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        t0 = *(signed char *)((a4 + 0x15));
        if (t0 != 0) {
            if (t0 != 1) {
                if (t0 != 2) {
                    return t0;
                }
                t0 = (((struct oC4_int *)(a4))->v);
                (((struct o14_float *)(t0))->v) = (((((struct o14_float *)(t0))->v)) - 0.0500000007f);
                if (!(((((struct o14_float *)(t0))->v)) > 0.0f)) {
                    return FUN_0c03f346(a4, t0, 0x0, a7);
                }
                return 0x14;
            }
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
            t1 = (short)(t0 - 1);
            if ((int)(short)(t0 - 1) <= 0) {
                *(unsigned short *)((a4 + 0x1C)) = 0x14;
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                t1 = 0x15;
            }
            return t1;
        }
        t0 = 0xC15F5C0;
        t1 = a5;
        t2 = 0x4;
        u0 = f5;
        for (;;) {
            if ((unsigned int)t2 > (unsigned int)0x18) {
                break;
            }
            t1 = 0xC4;
            t0 = 0x84;
            t1 = (t1 + a4);
            t1 = (t1 + t2);
            t1 = (*(int *)((t1 + 0x0)));
            u1 = (*(float *)((t1 + t0)));
            u1 = (u1 - 0.0599999987f);
            *(float *)((t1 + t0)) = u1;
            u0 = (*(float *)((t1 + t0)));
            if (!(u0 > 4.0f) && (u1 = 1.0f, !(u1 > u0))) {
                *(unsigned char *)((t1 + 0x0)) = 0x1;
                u1 = (*(float *)((t1 + t0)));
                t0 = (t0 + 0x4);
                *(float *)((t1 + t0)) = u1;
            } else {
                *(unsigned char *)((t1 + 0x0)) = 0x0;
            }
            t2 = (t2 + 0x4);
        }
    } else {
        t0 = *(signed char *)((a4 + 0x14));
        (((struct o14_uchar *)(a4))->v) = (t0 + 0x1);
        (((struct o15_uchar *)(a4))->v) = 0x0;
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        *(unsigned short *)((a4 + 0x1C)) = 0x32;
        t1 = 0xC15F5B8;
        t2 = (t0 + 0x1);
        t0 = 0x1;
        t3 = a7;
        for (;;) {
            if ((int)t0 > (int)0x6) {
                break;
            }
            t3 = t0;
            t2 = 0xC4;
            t3 = (t3 << 2);
            t1 = 0x88;
            t4 = t0;
            t0 = (t0 + 0x1);
            u0 = (float)t4;
            t2 = (t2 + a4);
            t3 = (t3 + t2);
            t3 = (*(int *)((t3 + 0x0)));
            u0 = (u0 * 0.5f);
            *(float *)((t3 + t1)) = u0;
            t1 = (t1 - 4);
            *(float *)((t3 + t1)) = u0;
            t1 = (t1 + 0x8);
            *(float *)((t3 + t1)) = 1.0f;
        }
        t1 = *(signed char *)((a4 + 0x15));
        if (t1 != 0) {
            if (t1 != 1) {
                if (t1 != 2) {
                    return t1;
                }
                t1 = (((struct oC4_int *)(a4))->v);
                (((struct o14_float *)(t1))->v) = (((((struct o14_float *)(t1))->v)) - 0.0500000007f);
                if (!(((((struct o14_float *)(t1))->v)) > 0.0f)) {
                    return FUN_0c03f346(a4, t1, 0x0, t3);
                }
                return 0x14;
            }
            t1 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
            t2 = (short)(t1 - 1);
            if ((int)(short)(t1 - 1) <= 0) {
                *(unsigned short *)((a4 + 0x1C)) = 0x14;
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                t2 = 0x15;
            }
            return t2;
        }
        t1 = 0xC15F5C0;
        t2 = t0;
        t0 = 0x4;
        u1 = u0;
        u0 = 0.5f;
        for (;;) {
            if ((unsigned int)t0 > (unsigned int)0x18) {
                break;
            }
            t2 = 0xC4;
            t1 = 0x84;
            t2 = (t2 + a4);
            t2 = (t2 + t0);
            t2 = (*(int *)((t2 + 0x0)));
            u1 = (*(float *)((t2 + t1)));
            u1 = (u1 - 0.0599999987f);
            *(float *)((t2 + t1)) = u1;
            u0 = (*(float *)((t2 + t1)));
            if (!(u0 > 4.0f) && (u1 = 1.0f, !(u1 > u0))) {
                *(unsigned char *)((t2 + 0x0)) = 0x1;
                u1 = (*(float *)((t2 + t1)));
                t1 = (t1 + 0x4);
                *(float *)((t2 + t1)) = u1;
            } else {
                *(unsigned char *)((t2 + 0x0)) = 0x0;
            }
            t0 = (t0 + 0x4);
        }
    }
    t0 = (((struct oC4_int *)(a4))->v);
    u0 = (((struct o14_float *)(t0))->v);
    (((struct o14_float *)(t0))->v) = (u0 + 0.0199999996f);
    if ((u0 + 0.0199999996f) > 1.0f) {
        (((struct o14_float *)(t0))->v) = 1.0f;
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    t1 = (short)(t0 - 1);
    if ((int)(short)(t0 - 1) <= 0) {
        *(unsigned short *)((a4 + 0x1C)) = 0x28;
        t0 = (((struct oC4_int *)(a4))->v);
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        t2 = t0;
        t0 = 0x4;
        for (;;) {
            if ((unsigned int)t0 > (unsigned int)0x18) {
                break;
            }
            t3 = 0xC4;
            t3 = (t3 + a4);
            t3 = (t3 + t0);
            t2 = (*(int *)((t3 + 0x0)));
            t0 = (t0 + 0x4);
            *(unsigned char *)((t2 + 0x0)) = 0x0;
        }
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t1 = 0x15;
    }
    return t1;
}



int FUN_0c15fb90(int a4)
{

    register int R1;
    register int R2;
    register int R3;
    register int R10;
    register int R12;
    register int R13;
    register int R14;
    register float F2;
    register float F3;
    register float F5;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register float w0_0;
    v0_0 = a4;
    v0_5 = *(signed char *)((v0_0 + 0x14));
    v0_2 = (v0_5);
    v0_4 = (((((struct oC4_int *)(v0_0))->v)));
    v0_3 = ((*(int *)(((0xC4 + v0_0) + 0x4))));
    v0_1 = (0x2);
    if ((v0_5 == 0)) goto L_C15FBBA;
    if ((v0_2 == 1)) goto L_C15FBC6;
    if ((v0_2 != 2)) goto L_C15FBAE;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    v0_2 = (0x14);
    L_C15FCF4:;
    return v0_2;
    L_C15FBAE:;
    if ((v0_2 != 3)) goto L_C15FBB6;
    return FUN_0c03f346(v0_0, v0_4, v0_3, v0_1);
    L_C15FBB6:;
    goto L_C15FCF4;
    L_C15FBC6:;
    (((struct o80_uint *)(v0_4))->v) = (unsigned short)(((((struct o80_short *)(v0_4))->v)) + 0xF8E4);
    v0_5 = *(signed char *)((v0_0 + 0x15));
    v0_2 = (v0_5);
    w0_0 = (0.100000001f);
    if ((v0_5 == 0)) goto L_C15FBEA;
    if ((v0_2 == 1)) goto L_C15FC1A;
    if (!((v0_2 == 2))) goto L_C15FC4C;
    v0_1 = ((v0_1 - 1));
    goto L_C15FC4C;
    L_C15FC4C:;
    (((struct o84_float *)(v0_3))->v) = (((((struct o84_float *)(v0_3))->v)) + w0_0);
    (((struct o88_float *)(v0_3))->v) = (((((struct o88_float *)(v0_3))->v)) + w0_0);
    (((struct o8C_float *)(v0_3))->v) = (((((struct o8C_float *)(v0_3))->v)) + w0_0);
    v0_4 = *(signed char *)((v0_0 + 0x16));
    v0_2 = (v0_4);
    if ((v0_4 == 0)) goto L_C15FC78;
    if ((v0_2 == 1)) goto L_C15FCA0;
    if (!((v0_2 == 2))) goto L_C15FCD6;
    v0_1 = ((v0_1 - 1));
    goto L_C15FCD6;
    L_C15FCD6:;
    if ((v0_1 != 0)) goto L_C15FCF4;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    v0_2 = (0x14);
    goto L_C15FCF4;
    L_C15FCA0:;
    w0_0 = *(float *)0xC15FDDC;
    (((struct o18_float *)(v0_3))->v) = (((((struct o18_float *)(v0_3))->v)) - w0_0);
    (((struct o1C_float *)(v0_3))->v) = (((((struct o1C_float *)(v0_3))->v)) - w0_0);
    (((struct o20_float *)(v0_3))->v) = (((((struct o20_float *)(v0_3))->v)) - w0_0);
    v0_2 = (0x18);
    if ((((((struct o18_float *)(v0_3))->v)) > 0.0f)) goto L_C15FCD6;
    (((struct o16_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x16))) + 0x1);
    *(unsigned char *)((v0_3 + 0x0)) = 0x0;
    v0_2 = (0x16);
    goto L_C15FCD6;
    L_C15FC78:;
    v0_3 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_3 - 1);
    v0_2 = ((short)(v0_3 - 1));
    if (((short)(v0_3 - 1) != 0)) goto L_C15FCD6;
    (((struct o16_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x16))) + 0x1);
    v0_2 = (0x16);
    goto L_C15FCD6;
    L_C15FC1A:;
    (((struct o84_float *)(v0_4))->v) = (((((struct o84_float *)(v0_4))->v)) - w0_0);
    (((struct o88_float *)(v0_4))->v) = (((((struct o88_float *)(v0_4))->v)) - w0_0);
    (((struct o8C_float *)(v0_4))->v) = (((((struct o8C_float *)(v0_4))->v)) - w0_0);
    if ((((((struct o84_float *)(v0_4))->v)) > 0.0f)) goto L_C15FC4C;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    *(unsigned char *)((v0_4 + 0x0)) = 0x0;
    goto L_C15FC4C;
    L_C15FBEA:;
    (((struct o84_float *)(v0_4))->v) = (((((struct o84_float *)(v0_4))->v)) + 0.333333343f);
    (((struct o88_float *)(v0_4))->v) = (((((struct o88_float *)(v0_4))->v)) + 0.333333343f);
    (((struct o8C_float *)(v0_4))->v) = (((((struct o8C_float *)(v0_4))->v)) + 0.333333343f);
    if ((1.0f > ((((struct o84_float *)(v0_4))->v)))) goto L_C15FC4C;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    goto L_C15FC4C;
    L_C15FBBA:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    *(unsigned short *)((v0_0 + 0x1C)) = 0x1;
    goto L_C15FBC6;
}
