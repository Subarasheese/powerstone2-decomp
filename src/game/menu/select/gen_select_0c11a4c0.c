/* game/menu/select: functions 0C11A4C0-0C11B6EE, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o10_int { char p[0x10]; int v; };
struct o14_float { char p[0x14]; float v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o18_int { char p[0x18]; int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1C_int { char p[0x1C]; int v; };
struct o20_int { char p[0x20]; int v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o24_int { char p[0x24]; int v; };
struct o28_float { char p[0x28]; float v; };
struct o28_int { char p[0x28]; int v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2C_int { char p[0x2C]; int v; };
struct o30_float { char p[0x30]; float v; };
struct o30_int { char p[0x30]; int v; };
struct o34_int { char p[0x34]; int v; };
struct o3C_float { char p[0x3C]; float v; };
struct o41C_ushort { char p[0x41C]; unsigned short v; };
struct o4_int { char p[0x4]; int v; };
struct o8_int { char p[0x8]; int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oC_int { char p[0xC]; int v; };
struct oD0_int { char p[0xD0]; int v; };
struct oD4_int { char p[0xD4]; int v; };
struct oD8_int { char p[0xD8]; int v; };
struct oDC_int { char p[0xDC]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c0588bc(int, int, int, int, int, int);
int FUN_0c058a6e(int, int, int, int, int, int);
int FUN_0c05a080(int, int);
float math_cos_angle16(int);
int FUN_0c179ac0(void);
float math_sin_angle16(int);
int FUN_0c17c130(int, int, int);
int FUN_0c187798(int, int, int);
int FUN_0c11a4c0(int a4, int a5);
int FUN_0c11a518(int a4, int a5, int a6, int a7);
int FUN_0c11a870(int a4);
int FUN_0c11ab06(int a4);
int FUN_0c11aed4(int a4, int a5, int a6);
int FUN_0c11b374(int a4, int a5);
int FUN_0c11b3ae(int a4, int a5, int a6, int a7);
int FUN_0c11b6ba(int a4);

int FUN_0c11a4c0(int a4, int a5)
{
    int stk[2];
    register int t0;
    register int t3;

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    t0 = FUN_0c03f444(0x5, 0x0, 0x1);
    t3 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC11A2A8;
        t3 = *(signed char *)(((int)stk + 4));
        *(unsigned char *)((t0 + 0x2)) = t3;
        *(unsigned int *)((t0 + 0x10)) = (*(int *)(((int)stk + 0)));
    }
    return t3;
}

int FUN_0c11a518(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    register int t12;
    register int t13;
    register float u0;
    register float u1;
    register float u2;
    register float u3;

    if ((*(signed char *)((0x14 + (*(int *)((a4 + 0x10)))))) == 80) {
        (((struct o14_uchar *)(a4))->v) = 0x63;
    }
    t12 = *(signed char *)((a4 + 0x14));
    if (t12 != 0) {
        if (t12 == 1) {
            t13 = *(short *)((a4 + 0x1C));
            if (((int)t13 >= (int)((((struct o0_int *)0xC291EA0)->v))) && (t0 = (((struct o4_int *)0xC291EA0)->v), (int)t13 <= (int)t0)) {
                FUN_0c058a6e((((((struct oC4_int *)(a4))->v)) + 0x14), 0xC2A0CA0, 0xC2A0C90, (*(short *)((a4 + 0x1C))), (((((struct o4_int *)0xC291EA0)->v))), (((((struct o0_int *)0xC291EA0)->v))));
            }
            t0 = *(short *)((a4 + 0x1C));
            if (((int)t0 >= (int)((((struct o8_int *)0xC291EA0)->v))) && (t1 = (((struct oC_int *)0xC291EA0)->v), (int)t0 <= (int)t1)) {
                FUN_0c058a6e((((((struct oC4_int *)(a4))->v)) + 0x14), 0xC2A0C90, 0xC2A0CA0, (*(short *)((a4 + 0x1C))), (((((struct oC_int *)0xC291EA0)->v))), (((((struct o8_int *)0xC291EA0)->v))));
            }
            t0 = *(short *)((a4 + 0x1C));
            if (((int)t0 >= (int)((((struct o10_int *)0xC291EA0)->v))) && (t2 = (((struct o14_int *)0xC291EA0)->v), (int)t0 <= (int)t2)) {
                FUN_0c058a6e((((((struct oC8_int *)(a4))->v)) + 0x14), 0xC2A0CA0, 0xC2A0C90, (*(short *)((a4 + 0x1C))), (((((struct o14_int *)0xC291EA0)->v))), (((((struct o10_int *)0xC291EA0)->v))));
            }
            t0 = *(short *)((a4 + 0x1C));
            if (((int)t0 >= (int)((((struct o18_int *)0xC291EA0)->v))) && (t3 = (((struct o1C_int *)0xC291EA0)->v), (int)t0 <= (int)t3)) {
                FUN_0c058a6e((((((struct oC8_int *)(a4))->v)) + 0x14), 0xC2A0C90, 0xC2A0CA0, (*(short *)((a4 + 0x1C))), (((((struct o1C_int *)0xC291EA0)->v))), (((((struct o18_int *)0xC291EA0)->v))));
            }
            t0 = *(short *)((a4 + 0x1C));
            if (((int)t0 >= (int)((((struct o20_int *)0xC291EA0)->v))) && (t4 = (((struct o24_int *)0xC291EA0)->v), (int)t0 <= (int)t4)) {
                FUN_0c058a6e((((((struct oCC_int *)(a4))->v)) + 0x14), 0xC2A0CA0, 0xC2A0C90, (*(short *)((a4 + 0x1C))), (((((struct o24_int *)0xC291EA0)->v))), (((((struct o20_int *)0xC291EA0)->v))));
            }
            t0 = *(short *)((a4 + 0x1C));
            if (((int)t0 >= (int)((((struct o28_int *)0xC291EA0)->v))) && (t5 = (((struct o2C_int *)0xC291EA0)->v), (int)t0 <= (int)t5)) {
                FUN_0c058a6e((((((struct oCC_int *)(a4))->v)) + 0x14), 0xC2A0C90, 0xC2A0CA0, (*(short *)((a4 + 0x1C))), (((((struct o2C_int *)0xC291EA0)->v))), (((((struct o28_int *)0xC291EA0)->v))));
            }
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
            t1 = (short)(t0 + 0x1);
            if ((int)(short)(t0 + 0x1) > (int)((((struct o30_int *)0xC291EA0)->v))) {
                (((struct o14_uchar *)(a4))->v) = 0x63;
                t1 = 0x14;
            }
            return t1;
        }
        if (t12 == 99) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        return t12;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct oAC_ushort *)(a4))->v) = 0xF;
    (((struct oA9_uchar *)(a4))->v) = 0x21;
    *(volatile int *)((a4 + 0x10));
    FUN_0c187798(a4, a5, a6);
    FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x0, 0x24, (*(int *)0xC4B410C));
    FUN_0c03744a(((((struct oC8_int *)(a4))->v)), 0x1, 0x24, (*(int *)0xC4B410C));
    FUN_0c03744a(((((struct oCC_int *)(a4))->v)), 0x2, 0x24, (*(int *)0xC4B410C));
    t0 = (((struct oC4_int *)(a4))->v);
    *(unsigned short *)((t0 + 0x6)) = ((*(short *)((t0 + 0x6))) | 0x200);
    t0 = (((struct oC8_int *)(a4))->v);
    *(unsigned short *)((t0 + 0x6)) = ((*(short *)((t0 + 0x6))) | 0x200);
    t0 = (((struct oCC_int *)(a4))->v);
    *(unsigned short *)((t0 + 0x6)) = ((*(short *)((t0 + 0x6))) | 0x200);
    u0 = (((struct o3C_float *)0xC291EA0)->v);
    t0 = (int)((int)(FUN_0c179ac0()) % (int)((((struct o34_int *)0xC291EA0)->v)));
    t1 = (((struct o34_int *)0xC291EA0)->v);
    u1 = (((float)((int)((int)(FUN_0c179ac0()) % (int)((((struct o34_int *)0xC291EA0)->v)))) * 360.0f) / (float)((((struct o34_int *)0xC291EA0)->v)));
    u2 = ((u1 * 65536.0f) / 360.0f);
    u1 = ((u0 * (float)t0) / (float)t1);
    u3 = ((((struct o28_float *)(a4))->v));
    u3 = u3 + u1 * (math_cos_angle16(((int)(u2 + 0.5f) & 0xFFFF)));
    (((struct o28_float *)(a4))->v) = u3;
    u1 = ((u0 * (float)t0) / (float)t1);
    u0 = ((((struct o2C_float *)(a4))->v));
    u0 = u0 + u1 * (math_sin_angle16(((int)(u2 + 0.5f) & 0xFFFF)));
    (((struct o2C_float *)(a4))->v) = u0;
    u0 = (((float)((int)((int)(FUN_0c179ac0()) % (int)((((struct o34_int *)0xC291EA0)->v)))) * 360.0f) / (float)((((struct o34_int *)0xC291EA0)->v)));
    u1 = math_sin_angle16((0xFFFF & (int)((((u0 * 65536.0f) / 360.0f)) + 0.5f)));
    u0 = 100.0f;
    u0 = u0 + 20.0f * u1;
    (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + u0);
    FUN_0c17c130((a4 + 0x28), (a4 + 0x28), 0xC291EE0);
    t0 = *(short *)((a4 + 0x1C));
    if (((int)t0 >= (int)((((struct o0_int *)0xC291EA0)->v))) && (t6 = (((struct o4_int *)0xC291EA0)->v), (int)t0 <= (int)t6)) {
        FUN_0c058a6e((((((struct oC4_int *)(a4))->v)) + 0x14), 0xC2A0CA0, 0xC2A0C90, (*(short *)((a4 + 0x1C))), (((((struct o4_int *)0xC291EA0)->v))), (((((struct o0_int *)0xC291EA0)->v))));
    }
    t0 = *(short *)((a4 + 0x1C));
    if (((int)t0 >= (int)((((struct o8_int *)0xC291EA0)->v))) && (t7 = (((struct oC_int *)0xC291EA0)->v), (int)t0 <= (int)t7)) {
        FUN_0c058a6e((((((struct oC4_int *)(a4))->v)) + 0x14), 0xC2A0C90, 0xC2A0CA0, (*(short *)((a4 + 0x1C))), (((((struct oC_int *)0xC291EA0)->v))), (((((struct o8_int *)0xC291EA0)->v))));
    }
    t0 = *(short *)((a4 + 0x1C));
    if (((int)t0 >= (int)((((struct o10_int *)0xC291EA0)->v))) && (t8 = (((struct o14_int *)0xC291EA0)->v), (int)t0 <= (int)t8)) {
        FUN_0c058a6e((((((struct oC8_int *)(a4))->v)) + 0x14), 0xC2A0CA0, 0xC2A0C90, (*(short *)((a4 + 0x1C))), (((((struct o14_int *)0xC291EA0)->v))), (((((struct o10_int *)0xC291EA0)->v))));
    }
    t0 = *(short *)((a4 + 0x1C));
    if (((int)t0 >= (int)((((struct o18_int *)0xC291EA0)->v))) && (t9 = (((struct o1C_int *)0xC291EA0)->v), (int)t0 <= (int)t9)) {
        FUN_0c058a6e((((((struct oC8_int *)(a4))->v)) + 0x14), 0xC2A0C90, 0xC2A0CA0, (*(short *)((a4 + 0x1C))), (((((struct o1C_int *)0xC291EA0)->v))), (((((struct o18_int *)0xC291EA0)->v))));
    }
    t0 = *(short *)((a4 + 0x1C));
    if (((int)t0 >= (int)((((struct o20_int *)0xC291EA0)->v))) && (t10 = (((struct o24_int *)0xC291EA0)->v), (int)t0 <= (int)t10)) {
        FUN_0c058a6e((((((struct oCC_int *)(a4))->v)) + 0x14), 0xC2A0CA0, 0xC2A0C90, (*(short *)((a4 + 0x1C))), (((((struct o24_int *)0xC291EA0)->v))), (((((struct o20_int *)0xC291EA0)->v))));
    }
    t0 = *(short *)((a4 + 0x1C));
    if (((int)t0 >= (int)((((struct o28_int *)0xC291EA0)->v))) && (t11 = (((struct o2C_int *)0xC291EA0)->v), (int)t0 <= (int)t11)) {
        FUN_0c058a6e((((((struct oCC_int *)(a4))->v)) + 0x14), 0xC2A0C90, 0xC2A0CA0, (*(short *)((a4 + 0x1C))), (((((struct o2C_int *)0xC291EA0)->v))), (((((struct o28_int *)0xC291EA0)->v))));
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
    t1 = (short)(t0 + 0x1);
    if ((int)(short)(t0 + 0x1) > (int)((((struct o30_int *)0xC291EA0)->v))) {
        (((struct o14_uchar *)(a4))->v) = 0x63;
        t1 = 0x14;
    }
    return t1;
}

int FUN_0c11a870(int a4)
{
    register int t0;
    register int t1;

    t0 = FUN_0c03f444(0x5, 0x0, 0x3);
    t1 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC11A518;
        *(unsigned int *)((t0 + 0x10)) = a4;
        t1 = 0xFFFFFFFF;
    }
    return t1;
}

int FUN_0c11ab06(int a4)
{
    register int t0;
    register int t1;

    t0 = FUN_0c03f444(0x5, 0x0, 0x1);
    t1 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC11A89A;
        *(unsigned int *)((t0 + 0x10)) = a4;
        t1 = 0xFFFFFFFF;
    }
    return t1;
}

int FUN_0c11aed4(int a4, int a5, int a6)
{
    register int t0;

    t0 = FUN_0c03f444(0x5, 0x0, 0x14);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC11AB30;
        *(unsigned int *)((t0 + 0x10)) = a4;
        *(unsigned char *)((t0 + 0x2)) = a6;
        (((struct o41C_ushort *)(t0))->v) = a5;
        return t0;
    }
    return 0x0;
}

int FUN_0c11b374(int a4, int a5)
{
    register int t0;

    t0 = FUN_0c03f444(0x5, 0x0, 0x14);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC11AF18;
        *(unsigned int *)((t0 + 0x10)) = a4;
        *(unsigned char *)((t0 + 0x2)) = a5;
        return t0;
    }
    return 0x0;
}

int FUN_0c11b3ae(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    register int t2;
    register int t3;
    register float u0;
    register float u1;

    if (((*(short *)(((*(int *)((a4 + 0x10))) + 0x1C))) == ((*(signed char *)((a4 + 0x2))) + 0x1)) && (t0 = *(signed char *)((a4 + 0x14)), (int)t0 < (int)0xA)) {
        (((struct o14_uchar *)(a4))->v) = 0x63;
    }
    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x200);
                u0 = ((((struct o0_float *)0xC2920A8)->v));
                u0 = u0 + ((((struct o18_float *)0xC2920A8)->v)) * (math_sin_angle16((*(short *)((a4 + 0x1E)))));
                (((struct o2C_float *)(a4))->v) = u0;
                t2 = (((struct o20_short *)(a4))->v);
                t3 = ((~(((~t2) + 0x1) & 0x3)) + 0x1);
                if ((int)t2 >= 0) {
                    t3 = (t2 & 0x3);
                }
                if (t3 == 0) {
                    FUN_0c11ab06(a4);
                    (((struct o22_ushort *)(a4))->v) = ((-((((struct o22_short *)(a4))->v))) + 0x1);
                }
                (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) + 0x1);
                return 0x20;
            }
            if (t0 == 80) {
                t2 = *(short *)((a4 + 0x1E));
                if (((int)t2 >= 0) && ((int)t2 <= (int)0x1E)) {
                    FUN_0c0588bc((a4 + 0x28), 0xC2920B0, (a4 + 0x4C), (*(short *)((a4 + 0x1E))), 0x1E, 0x0);
                    u0 = (((float)(*(short *)((a4 + 0x1E))) * 180.0f) / 30.0f);
                    u1 = math_sin_angle16(((int)((((u0 * 65536.0f) / 360.0f)) + (*(float *)0xC11B6F0)) & 0xFFFF));
                    u0 = ((((struct o2C_float *)(a4))->v));
                    u0 = u0 + u1 * ((((struct o1C_float *)0xC2920A8)->v));
                    (((struct o2C_float *)(a4))->v) = u0;
                    t2 = *(short *)((a4 + 0x1E));
                    *(unsigned short *)((a4 + 0x1E)) = (t2 + 0x1);
                    return (t2 + 0x1);
                }
                return FUN_0c03f346(a4, a5, a6, a7);
            }
            t2 = t0;
            if (t0 == 99) {
                *(unsigned short *)((a4 + 0x1E)) = 0x0;
                FUN_0c187798(a4, a5, a6);
                (((struct o14_uchar *)(a4))->v) = 0x50;
                t2 = 0x14;
            }
            return t2;
        }
        if (((*(short *)((a4 + 0x1E))) == 20) && (t1 = *(signed char *)((a4 + 0x2)), t1 == 0)) {
            FUN_0c05a080(0x1, 0x0);
        }
        t0 = *(short *)((a4 + 0x1E));
        if (((int)t0 >= 0) && ((int)t0 <= (int)0x1E)) {
            FUN_0c0588bc((a4 + 0x28), 0xC2920A4, 0xC292098, (*(short *)((a4 + 0x1E))), 0x1E, 0x0);
            t0 = *(short *)((a4 + 0x1E));
            if (((int)t0 >= 0) && ((int)t0 <= (int)0x1E)) {
                FUN_0c0588bc((a4 + 0x40), (a4 + 0x4C), 0xC2A0C78, (*(short *)((a4 + 0x1E))), 0x1E, 0x0);
            }
        }
        u0 = (((float)(*(short *)((a4 + 0x1E))) * 180.0f) / 30.0f);
        u1 = math_sin_angle16(((int)((((u0 * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF));
        u0 = ((((struct o2C_float *)(a4))->v));
        u0 = u0 + u1 * ((((struct o14_float *)0xC2920A8)->v));
        (((struct o2C_float *)(a4))->v) = u0;
        t0 = *(short *)((a4 + 0x1E));
        *(unsigned short *)((a4 + 0x1E)) = (t0 + 0x1);
        t1 = (short)(t0 + 0x1);
        if ((int)(short)(t0 + 0x1) <= (int)0x1E) {
        } else {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            *(unsigned short *)((a4 + 0x1E)) = 0x0;
            t1 = 0x0;
        }
        return t1;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct oAC_ushort *)(a4))->v) = 0xF;
    (((struct oA9_uchar *)(a4))->v) = 0x21;
    FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x0, 0x25, (*(int *)0xC4B410C));
    FUN_0c03744a(((((struct oC8_int *)(a4))->v)), 0x0, 0x26, (*(int *)0xC4B410C));
    FUN_0c03744a(((((struct oCC_int *)(a4))->v)), 0x0, 0x27, (*(int *)0xC4B410C));
    FUN_0c03744a(((((struct oD0_int *)(a4))->v)), 0x0, 0x28, (*(int *)0xC4B410C));
    FUN_0c03744a(((((struct oD4_int *)(a4))->v)), 0x0, 0x29, (*(int *)0xC4B410C));
    FUN_0c03744a(((((struct oD8_int *)(a4))->v)), 0x0, 0x30, (*(int *)0xC4B410C));
    return (FUN_0c03744a(((((struct oDC_int *)(a4))->v)), 0x0, 0x31, (*(int *)0xC4B410C)));
}

int FUN_0c11b6ba(int a4)
{
    register int t0;

    t0 = FUN_0c03f444(0x5, 0x0, 0x14);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC11B3AE;
        *(unsigned int *)((t0 + 0x10)) = a4;
        return t0;
    }
    return 0x0;
}
