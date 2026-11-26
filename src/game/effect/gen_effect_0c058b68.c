/* game/effect: functions 0C058B68-0C059C54, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_short { short v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o18_uchar { char p[0x18]; unsigned char v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_short { char p[0x28]; short v; };
struct o30_float { char p[0x30]; float v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o8_int { char p[0x8]; int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oC_int { char p[0xC]; int v; };
struct oD4_int { char p[0xD4]; int v; };
struct oDC_int { char p[0xDC]; int v; };
struct oE0_int { char p[0xE0]; int v; };
struct oE4_int { char p[0xE4]; int v; };
struct oE8_int { char p[0xE8]; int v; };
struct oEC_int { char p[0xEC]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c058a6e(int, int, int, int, int, int);
int FUN_0c05950c(void);
int FUN_0c05aab6(int, int);
int FUN_0c05ae28(int);
int FUN_0c05f42a(int);
int FUN_0c05f71a(void);
int FUN_0c05f76a(void);
int FUN_0c05f770(void);
int FUN_0c101d38(int);
int FUN_0c104e26(int, int);
int FUN_0c10547c(int, int, int);
int FUN_0c105536(int, int, int);
int FUN_0c10558c(int);
int FUN_0c1055b4(int);
int FUN_0c1171f0(int);
float math_sin_angle16(int);
int nlAddVector3op(int, int, int);
int FUN_0c18778c(void);
int FUN_0c058b68(void);
int FUN_0c058bd4(void);
int FUN_0c058c32(void);
int FUN_0c058c90(int a4);
int FUN_0c058cdc(void);
int FUN_0c058d44(int a4);
int FUN_0c0593b8(int a4, int a5);
int FUN_0c0593ee(int a4, int a5, int a6, int a7);
int FUN_0c059536(int a4);
int FUN_0c0595a4(int a4);
int FUN_0c059946(int a4);
int FUN_0c059a28(int a4);
int FUN_0c059bd6(int a4);
int FUN_0c059c16(int a4, int a5);

int FUN_0c058b68(void)
{

    register int R2;
    register int R3;
    register int R8;
    register int R9;
    register int R10;
    register int R11;
    register int R12;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    v0_0 = R12;
    v0_1 = R11;
    v0_2 = R10;
    v0_3 = R9;
    v0_4 = R8;
    R10 = (0xC413CB8);
    R11 = (0x7);
    R12 = (0x2);
    v0_0 = (0x0);
    v0_1 = (0x0);
    R8 = (0x4);
    R9 = (0xC5429C8);
    L_C058BC0:;
    if (((int)v0_1 < (int)R8)) goto L_C058B84;
    v0_0 = (0x0);
    L_C058BC6:;
    return v0_0;
    L_C058B84:;
    v0_2 = ((v0_1 * 0xE));
    v0_3 = (v0_0);
    L_C058BBA:;
    if (((int)v0_3 < (int)R11)) goto L_C058B8E;
    v0_1 = ((v0_1 + 0x1));
    goto L_C058BC0;
    L_C058B8E:;
    v0_4 = ((v0_3 << 1));
    v0_5 = (v0_0);
    L_C058B94:;
    v0_6 = (*(signed char *)((v0_5 + ((v0_2 + R10) + v0_4)))) == (*(signed char *)((v0_5 + (((R9 + 0x8) + v0_2) + v0_4))));
    if (v0_6) goto L_C058BB2;
    v0_0 = (0x1);
    goto L_C058BC6;
    L_C058BB2:;
    v0_6 = (int)(v0_5 + 0x1) < (int)R12;
    v0_5 = ((v0_5 + 0x1));
    if (v0_6) goto L_C058B94;
    v0_3 = ((v0_3 + 0x1));
    goto L_C058BBA;
}

int FUN_0c058bd4(void)
{
    register int t0;
    register int t1;
    register int t3;
    register int t11;

    t0 = 0x0;
    for (;;) {
        t1 = 0x0;
        for (;;) {
            t3 = 0x0;
            for (;;) {
                *(unsigned char *)((t3 + ((0xC5429D0 + (t0 * 0xE)) + (t1 << 1)))) = (*(signed char *)((((((t0 * 0xE) + 0xC413CB8) + (t1 << 1)) + t3) + 0x0)));
                t3 = (t3 + 0x1);
                if ((int)t3 >= (int)0x2) {
                    break;
                }
            }
            t11 = ((0xC5429D0 + (t0 * 0xE)) + (t1 << 1));
            t1 = (t1 + 0x1);
            if ((int)t1 >= (int)0x7) {
                break;
            }
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x4) {
            break;
        }
    }
    return t11;
}

int FUN_0c058c32(void)
{
    register int t0;
    register int t1;
    register int t3;
    register int t11;

    t0 = 0x0;
    for (;;) {
        t1 = 0x0;
        for (;;) {
            t3 = 0x0;
            for (;;) {
                *(unsigned char *)((t3 + (((t0 * 0xE) + 0xC413CB8) + (t1 << 1)))) = (*(signed char *)(((((0xC5429D0 + (t0 * 0xE)) + (t1 << 1)) + t3) + 0x0)));
                t3 = (t3 + 0x1);
                if ((int)t3 >= (int)0x2) {
                    break;
                }
            }
            t11 = (((t0 * 0xE) + 0xC413CB8) + (t1 << 1));
            t1 = (t1 + 0x1);
            if ((int)t1 >= (int)0x7) {
                break;
            }
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x4) {
            break;
        }
    }
    return t11;
}

int FUN_0c058c90(int a4)
{
    register int t0;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t7;

    t0 = 0x0;
    for (;;) {
        t2 = ((t0 << 1) + (((short)(signed char)a4 * (short)0xE) + 0xC413CB8));
        t3 = 0xC1C2308;
        t4 = 0x0;
        for (;;) {
            t5 = *(signed char *)((t3 + t0));
            t4 = (t4 + 0x1);
            t3 = (t3 + 0x7);
            *(unsigned char *)((t2 + 0x0)) = t5;
            t2 = (t2 + 0x1);
            if ((int)t4 >= (int)0x2) {
                break;
            }
        }
        t7 = t0;
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x7) {
            break;
        }
    }
    return t7;
}

int FUN_0c058cdc(void)
{
    register int t0;
    register int t1;
    register int t3;
    register int t13;

    t0 = 0x0;
    for (;;) {
        t1 = 0x0;
        for (;;) {
            t3 = 0x0;
            for (;;) {
                *(unsigned char *)((t3 + ((0xC5429D0 + (t0 * 0xE)) + (t1 << 1)))) = (*(signed char *)(((((((t3 << 2) << 1) - t3) + 0xC1C2308) + t1) + 0x0)));
                t3 = (t3 + 0x1);
                if ((int)t3 >= (int)0x2) {
                    break;
                }
            }
            t13 = ((0xC5429D0 + (t0 * 0xE)) + (t1 << 1));
            t1 = (t1 + 0x1);
            if ((int)t1 >= (int)0x7) {
                break;
            }
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x4) {
            break;
        }
    }
    return t13;
}


int FUN_0c0593b8(int a4, int a5)
{
    int stk[2];
    register int t0;

    *(unsigned char *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 0)) = a5;
    t0 = FUN_0c03f444(0x7, 0x1, 0xB);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((int)stk + 4)));
        *(unsigned int *)((t0 + 0x4)) = 0xC058D44;
        *(unsigned int *)((t0 + 0x10)) = (*(int *)(((int)stk + 0)));
        return FUN_0c058d44(t0);
    }
    return t0;
}

int FUN_0c0593ee(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 99) {
                return FUN_0c03f346(a4, a5, a6, a7);
            }
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            return 0x14;
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o15_uchar *)(a4))->v) = 0x0;
        (((struct oA8_uchar *)(a4))->v) = 0x0;
        (((struct oAC_ushort *)(a4))->v) = 0x1F;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        (((struct o30_float *)(a4))->v) = (*(float *)0xC05955C);
        FUN_0c1171f0(a4);
        if ((unsigned char)(*(signed char *)0xC541F3D) == 4) {
            FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x0, 0x69, ((((struct o8_int *)0xC4B4110)->v)));
            FUN_0c03744a(((((struct oC8_int *)(a4))->v)), 0x0, 0x68, ((((struct o8_int *)0xC4B4110)->v)));
            FUN_0c03744a(((((struct oCC_int *)(a4))->v)), 0x0, 0x0, ((((struct oC_int *)0xC4B4110)->v)));
        } else {
            FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x0, 0x2, ((((struct o0_int *)0xC4B4110)->v)));
            FUN_0c03744a(((((struct oC8_int *)(a4))->v)), 0x0, 0xF, ((((struct o0_int *)0xC4B4110)->v)));
            FUN_0c058c32();
        }
        t0 = 0x0;
        for (;;) {
            FUN_0c0593b8(t0, a4);
            t0 = (t0 + 0x1);
            if ((int)t0 >= (int)0x4) {
                break;
            }
        }
    }
    t0 = 0x0;
    if ((*(signed char *)((a4 + 0x15))) != 0) {
        t0 = 0x1;
    }
    (((struct oA8_uchar *)(a4))->v) = t0;
    *(unsigned short *)((a4 + 0x1E)) = 0x0;
    return 0x0;
}

int FUN_0c059536(int a4)
{
    register int t0;
    register int t1;

    (((struct oA8_uchar *)(a4))->v) = 0x0;
    t0 = FUN_0c05f770();
    if (t0 != 0) {
        (((struct o15_uchar *)(a4))->v) = 0x2;
        (((struct o16_uchar *)(a4))->v) = 0x0;
        t0 = 0x16;
    } else {
        t1 = FUN_0c05f71a();
        t0 = t1;
        if (t1 != 0) {
            (((struct o15_uchar *)(a4))->v) = 0x1;
            (((struct o16_uchar *)(a4))->v) = 0x0;
            t0 = 0x16;
        }
    }
    return t0;
}


int FUN_0c059946(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;

    (((struct o15_uchar *)((*(int *)((a4 + 0x10)))))->v) = 0x0;
    t0 = FUN_0c05f770();
    if (t0 == 0) {
        (((struct o15_uchar *)(a4))->v) = 0x1;
        (((struct o16_uchar *)(a4))->v) = 0x0;
        *(unsigned char *)((((((struct oE0_int *)(a4))->v)) + 0x0)) = 0x0;
        t0 = 0xE0;
    } else {
        if ((*(signed char *)((a4 + 0x16))) == 0) {
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
            (((struct oA8_uchar *)(a4))->v) = 0x1;
            *(unsigned short *)((a4 + 0x1C)) = 0x0;
            t1 = 0x0;
            for (;;) {
                t2 = ((0xC4 + a4) + t1);
                t1 = (t1 + 0x4);
                *(unsigned char *)(((*(int *)((t2 + 0x0))) + 0x0)) = 0x0;
                if ((unsigned int)t1 >= (unsigned int)0x24) {
                    break;
                }
            }
            *(unsigned char *)((((((struct oE0_int *)(a4))->v)) + 0x0)) = 0x1;
        }
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x5);
        if ((int)(*(short *)((a4 + 0x1C))) >= (int)0x168) {
            *(unsigned short *)((a4 + 0x1C)) = 0x0;
        }
        u0 = math_sin_angle16((int)(((float)(*(short *)((a4 + 0x1C))) * 65536.0f) / 360.0f));
        u1 = 0.800000012f;
        u1 = u1 + 0.5f * u0;
        u0 = u1;
        if (u1 > 1.0f) {
            u0 = 1.0f;
        }
        u1 = u0;
        if (0.0f > u0) {
            u1 = 0.0f;
        }
        (((struct o14_float *)(((((struct oE0_int *)(a4))->v))))->v) = u1;
        t0 = 0x14;
    }
    return t0;
}


int FUN_0c059bd6(int a4)
{
    int stk[1];
    register int t0;

    *(unsigned int *)(((int)stk + 0)) = a4;
    t0 = FUN_0c03f444(0x7, 0x0, 0x9);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC059A28;
        *(unsigned char *)((t0 + 0x2)) = (*(int *)(((int)stk + 0)));
        return FUN_0c059a28(t0);
    }
    return t0;
}

int FUN_0c059c16(int a4, int a5)
{
    register int t3;

    if ((int)(*(int *)((((((a4 << 1) + a4) << 2) + 0xC1C2318) + (a5 << 2)))) >= 0) {
        t3 = *(signed char *)0xC541F3D;
        if ((unsigned char)t3 != 1) {
            return FUN_0c05ae28((*(int *)(((((((a4 << 1) + a4) << 2) + 0xC1C2318) + (a5 << 2)) + 0x0))));
        }
        return (unsigned char)t3;
    }
    return (a5 << 2);
}
